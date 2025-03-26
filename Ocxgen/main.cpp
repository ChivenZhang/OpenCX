/*=================================================
* Copyright @ 2020-2025 ChivenZhang.
* All Rights Reserved.
* =====================Note=========================
*
*
* ====================History=======================
* Created by ChivenZhang at 2025/03/20 22:07:38.
*
* =================================================*/
#include <cassert>
#include <sstream>
#include <fstream>
#include <filesystem>
#include <regex>
#include <OpenCX/Object.h>
#include <OpenARGS/OpenARGS.h>
#include "Klass.h"
#include <clang-c/Index.h>

struct class_t
{
	String Name;
};

struct field_t
{
	String Name;
	String Type;
};

using args_t = String;

struct method_t
{
	String Name;
	String Type;
	List<args_t> Args;
};

struct clang_t
{
	class_t Class;
	List<class_t> Bases;
	List<field_t> Fields, SFields;
	List<method_t> Methods, SMethods;
};

struct context_t
{
	uint32_t Depth = 0;
	Set<String> Outputs;
	List<String> OutputsInOrder;
	Stack<CXCursor> ASTree;
	Map<String, clang_t> Classes;
};

std::ostream& operator<<(std::ostream& stream, const CXString& str)
{
	stream << clang_getCString(str);
	clang_disposeString(str);
	return stream;
}

String CX_READ_FILE(String path);
bool CX_WRITE_FILE(String path, String content);
String CX_REPLACE_STR(String const& string, String const& target, String const& replacement);
int CX_ANALYSE_METADATA(String file, int argc, char** argv);
CXChildVisitResult CX_TRAVERSE_METADATA(CXCursor node, CXCursor parent, CXClientData client);
String CX_OUTPUT_METADATA(clang_t const& meta);
bool CX_ENTER_TRAVERSE(CXCursor node, CXCursor parent, CXClientData client);
void CX_EXIT_TRAVERSE(CXCursor node, CXCursor parent, CXClientData client);

/// format: "Ocxgen input_file clang_args", eg: Ocxgen source.cpp -std=c++20 -Ilibc++/include
/// @param argc
/// @param argv
/// @return
int main(int argc, char** argv)
{
	OpenARGS args(argc, argv);
	if (args.items().size() < 2)
	{
		PRINT("no file input");
		return 0;
	}
	return CX_ANALYSE_METADATA(args.item(1).Value, argc - 2, argv + 2);
}

String CX_READ_FILE(String path)
{
	std::ifstream file_reader(path);
	if (file_reader.is_open())
	{
		std::stringstream buffer;
		buffer << file_reader.rdbuf();
		file_reader.close();
		return buffer.str();
	}
	PRINT("Failed to open file!" );
	return String();
}

bool CX_WRITE_FILE(String path, String content)
{
	std::ofstream file_writer(path);
	if (file_writer.is_open())
	{
		file_writer << content;
		file_writer.close();
		return true;
	}
	PRINT("Failed to open file!" );
	return false;
}

bool CX_APPEND_FILE(String path, String content)
{
	std::ofstream file_writer(path, std::ios::app);
	if (file_writer.is_open())
	{
		file_writer << content;
		file_writer.close();
		return true;
	}
	PRINT("Failed to open file!" );
	return false;
}

String CX_REPLACE_STR(String const& string, String const& target, String const& replacement)
{
	String result;
	size_t i = 0;
	for (; i < string.length(); )
	{
		auto k = string.find(target, i);
		if (k == String::npos) break;
		result += string.substr(i, k - i) + replacement;
		i = k + target.length();
	}
	if (i < string.length()) result += string.substr(i);
	return result;
}

int CX_ANALYSE_METADATA(String file, int argc, char** argv)
{
	auto index = clang_createIndex(0, 0);
	CXTranslationUnit unit = nullptr;
	auto code = clang_parseTranslationUnit2(
		index,
		file.c_str(), argv, argc,
		nullptr, 0,
		CXTranslationUnit_SkipFunctionBodies,
		&unit
	);
	if (code)
	{
		PRINT("fail to parse translation unit", code);
		return -1;
	}
	auto diagnostics = clang_getNumDiagnostics(unit);
	if (diagnostics != 0)
	{
		for (int i = 0; i != diagnostics; ++i)
		{
			auto diag = clang_getDiagnostic(unit, i);
			auto type = clang_getDiagnosticSeverity(diag);
			if (type == CXDiagnostic_Error)
			{
				ERROR( clang_getCString(clang_formatDiagnostic(diag, clang_defaultDiagnosticDisplayOptions())));
			}
			else if (type == CXDiagnostic_Fatal)
			{
				ERROR( clang_getCString(clang_formatDiagnostic(diag, clang_defaultDiagnosticDisplayOptions())));
				return -1;
			}
			else PRINT( clang_getCString(clang_formatDiagnostic(diag, clang_defaultDiagnosticDisplayOptions())));
		}
	}
	context_t context;
	auto root = clang_getTranslationUnitCursor(unit);
	clang_visitChildren(root, CX_TRAVERSE_METADATA, &context);
	context.ASTree.pop();
	assert(context.ASTree.empty());
	clang_disposeTranslationUnit(unit);
	clang_disposeIndex(index);

	auto folder = std::filesystem::path(file).parent_path().generic_string();
	auto baseName = std::filesystem::path(file).stem().generic_string();
	auto filePath = folder + "/" + baseName + ".meta.h";

	String content("#pragma once");
	for (auto& metaPath : context.OutputsInOrder) content += "\n" R"(#include ")" + std::filesystem::relative(metaPath, folder).generic_string() + R"(")";
	CX_WRITE_FILE(filePath, content);
	return 0;
}

CXChildVisitResult CX_TRAVERSE_METADATA(CXCursor node, CXCursor parent, CXClientData client)
{
	auto& context = *static_cast<context_t*>(client);
	auto& asTree = context.ASTree;

	if (asTree.empty() == false && clang_equalCursors(clang_getCursorLexicalParent(asTree.top()), parent))
	{
		CX_EXIT_TRAVERSE(asTree.top(), clang_getCursorLexicalParent(asTree.top()), client);
		asTree.pop();
	}
	else
	{
		while (asTree.empty() == false && clang_equalCursors(asTree.top(), parent) == 0)
		{
			CX_EXIT_TRAVERSE(asTree.top(), clang_getCursorLexicalParent(asTree.top()), client);
			asTree.pop();
		}
	}
	asTree.push(node);
	auto result = CX_ENTER_TRAVERSE(node, parent, client);

	return result ? CXChildVisit_Recurse : CXChildVisit_Continue;
}

String CX_OUTPUT_METADATA(clang_t const& meta)
{
	auto& bases = meta.Bases;
	auto& fields = meta.Fields, &sFields = meta.SFields;
	auto& methods = meta.Methods, &sMethods = meta.SMethods;

	String metaClass, metaBase, metaField, metaMethod, metaSField, metaSMethod;

	metaClass = meta.Class.Name;

	for (auto& e : bases)
	{
		String s(TEMPLATE_BASE);
		s = CX_REPLACE_STR(s, META_NAME, e.Name);
		metaBase += s;
	}

	for (auto& e : fields)
	{
		String s(TEMPLATE_FIELD);
		s = CX_REPLACE_STR(s, META_NAME, e.Name);
		s = CX_REPLACE_STR(s, META_TYPE, "Class::Get<" + e.Type + ">()->getName()");
		metaField += s;
	}

	for (auto& e : sFields)
	{
		String s(TEMPLATE_SFIELD);
		s = CX_REPLACE_STR(s, META_NAME, e.Name);
		s = CX_REPLACE_STR(s, META_TYPE, "Class::Get<" + e.Type + ">()->getName()");
		metaSField += s;
	}

	for (auto& e : methods)
	{
		String s(TEMPLATE_METHOD);
		s = CX_REPLACE_STR(s, META_NAME, e.Name);
		s = CX_REPLACE_STR(s, META_RETURN, e.Type);
		String _t;
		for(auto& a : e.Args) _t += R"(|")" "+Class::Get<" + a + ">()->getName()" R"(+")";
		s = CX_REPLACE_STR(s, META_TYPE, _t);
		String t;
		for(auto& a : e.Args) t += "," + a;
		s = CX_REPLACE_STR(s, META_ARGS_TYPE, t);
		String tt;
		for(size_t i=0; i<e.Args.size(); ++i) tt += "," + e.Args[i] + " " + "_" + std::to_string(1+i);
		s = CX_REPLACE_STR(s, META_ARGS_CALL, tt);
		String ttt;
		for(size_t i=0; i<e.Args.size(); ++i) ttt += String(ttt.empty()?"":",") + "_" + std::to_string(1+i);
		s = CX_REPLACE_STR(s, META_ARGS_PASS, ttt);
		metaMethod += s;
	}

	for (auto& e : sMethods)
	{
		String s(TEMPLATE_SMETHOD);
		s = CX_REPLACE_STR(s, META_NAME, e.Name);
		s = CX_REPLACE_STR(s, META_RETURN, e.Type);
		String _t;
		for(auto& a : e.Args) _t += R"(|")" "+Class::Get<" + a + ">()->getName()" R"(+")";
		s = CX_REPLACE_STR(s, META_TYPE, _t);
		String t;
		for(auto& a : e.Args) t += "," + a;
		s = CX_REPLACE_STR(s, META_ARGS_TYPE, t);
		String tt;
		for(size_t i=0; i<e.Args.size(); ++i) tt += String(tt.empty()?"":",") + e.Args[i] + " " + "_" + std::to_string(1+i);
		s = CX_REPLACE_STR(s, META_ARGS_CALL, tt);
		String ttt;
		for(size_t i=0; i<e.Args.size(); ++i) ttt += String(ttt.empty()?"":",") + "_" + std::to_string(1+i);
		s = CX_REPLACE_STR(s, META_ARGS_PASS, ttt);
		metaSMethod += s;
	}

	auto output = String(TEMPLATE_FILE);
	output = CX_REPLACE_STR(output, META_CLASS, metaClass);
	output = CX_REPLACE_STR(output, META_BASE, metaBase);
	output = CX_REPLACE_STR(output, META_FIELD, metaField);
	output = CX_REPLACE_STR(output, META_METHOD, metaMethod);
	output = CX_REPLACE_STR(output, META_SFIELD, metaSField);
	output = CX_REPLACE_STR(output, META_SMETHOD, metaSMethod);
	return output;
}

CXCursor CX_RESOLVE_TYPE(CXCursor cursor)
{
	auto _cursor = clang_getCursorDefinition(cursor);
	if (clang_isInvalid(_cursor.kind)) return cursor;
	cursor = _cursor;

	while (cursor.kind == CXCursor_TypedefDecl || cursor.kind == CXCursor_TypeAliasDecl || cursor.kind == CXCursor_TypeAliasTemplateDecl)
	{
		_cursor = clang_getTypeDeclaration(clang_getTypedefDeclUnderlyingType(cursor));
		if (clang_isInvalidDeclaration(_cursor)) break;
		cursor = _cursor;
	}
	return cursor;
}

bool CX_ENTER_TRAVERSE(CXCursor node, CXCursor parent, CXClientData client)
{
	auto& context = *static_cast<context_t*>(client);

	auto result = true;
	switch (node.kind)
	{
	case CXCursor_StructDecl:
		{
			auto name = clang_getCString(clang_getCursorSpelling(node));
			auto type = clang_getCString(clang_getTypeSpelling(clang_getCursorType(CX_RESOLVE_TYPE(node))));
			auto& klass = context.Classes[type];
			klass.Class.Name = type;

			for (auto i=0; i< context.Depth; ++i) std::cout << '\t';
			std::cout << "*Struct '" << type << "'\n";

			context.Depth += 1;
		} break;
	case CXCursor_ClassDecl:
		{
			auto name = clang_getCString(clang_getCursorSpelling(node));
			auto type = clang_getCString(clang_getTypeSpelling(clang_getCursorType(CX_RESOLVE_TYPE(node))));
			auto& klass = context.Classes[type];
			klass.Class.Name = type;

			for (auto i=0; i< context.Depth; ++i) std::cout << '\t';
			std::cout << "*Class '" << type << "'\n";

			context.Depth += 1;
		} break;
	case CXCursor_CXXBaseSpecifier:
		{
			auto name = clang_getCString(clang_getCursorSpelling(node));
			auto type = clang_getCString(clang_getTypeSpelling(clang_getCursorType(CX_RESOLVE_TYPE(node))));
			auto klassName = clang_getCString(clang_getTypeSpelling(clang_getCursorType(CX_RESOLVE_TYPE(parent))));
			auto& klass = context.Classes[klassName];
			auto& base = klass.Bases.emplace_back();
			base.Name = type;
		} break;
	case CXCursor_VarDecl:
		{
			if (parent.kind == CXCursor_ClassDecl)
			{
				if (clang_getCXXAccessSpecifier(node) == CX_CXXPublic)
				{
					auto name = clang_getCString(clang_getCursorSpelling(node));
					auto type = clang_getCString(clang_getTypeSpelling(clang_getCursorType(CX_RESOLVE_TYPE(node))));
					auto klassName = clang_getCString(clang_getTypeSpelling(clang_getCursorType(CX_RESOLVE_TYPE(parent))));
					auto& klass = context.Classes[klassName];

					auto& field = klass.SFields.emplace_back();
					field.Name = name;
					field.Type = type;

					for (auto i = 0; i < context.Depth; ++i) std::cout << '\t';
					std::cout << "*SField '" << name << "'\n";
				}
			}
			result = false;
		} break;
	case CXCursor_FieldDecl:
		{
			if (clang_getCXXAccessSpecifier(node) == CX_CXXPublic)
			{
				auto name = clang_getCString(clang_getCursorSpelling(node));
				auto type = clang_getCString(clang_getTypeSpelling(clang_getCursorType(CX_RESOLVE_TYPE(node))));
				auto klassName = clang_getCString(clang_getTypeSpelling(clang_getCursorType(CX_RESOLVE_TYPE(parent))));
				auto& klass = context.Classes[klassName];

				auto& field = klass.Fields.emplace_back();
				field.Name = name;
				field.Type = type;

				for (auto i = 0; i < context.Depth; ++i) std::cout << '\t';
				std::cout << "*Field '" << name << "'\n";
			}
			result = false;
		} break;
	case CXCursor_CXXMethod:
		{
			if (clang_getCXXAccessSpecifier(node) == CX_CXXPublic)
			{
				auto name = clang_getCString(clang_getCursorSpelling(node));
				auto type = clang_getCString(clang_getTypeSpelling(clang_getCursorType(CX_RESOLVE_TYPE(node))));
				auto klassName = clang_getCString(clang_getTypeSpelling(clang_getCursorType(CX_RESOLVE_TYPE(parent))));
				auto& klass = context.Classes[klassName];

				auto argsNum = clang_Cursor_getNumArguments(node);
				auto resultType = clang_getCursorResultType(node);
				auto returnType = clang_getCString(clang_getTypeSpelling(resultType));

				if (clang_CXXMethod_isStatic(node))
				{
					auto& method = klass.SMethods.emplace_back();
					method.Name = name;
					method.Type = returnType;
					for (auto i = 0; i < argsNum; ++i)
					{
						auto argType = clang_getCString(clang_getTypeSpelling(clang_getCursorType(CX_RESOLVE_TYPE(clang_Cursor_getArgument(node, i)))));
						method.Args.emplace_back(argType);
					}

					for (auto i = 0; i < context.Depth; ++i) std::cout << '\t';
					std::cout << "*SMethod '" << name << "'\n";
				}
				else
				{
					auto& method = klass.Methods.emplace_back();
					method.Name = name;
					method.Type = returnType;
					for (auto i = 0; i < argsNum; ++i)
					{
						auto argType = clang_getCString(clang_getTypeSpelling(clang_getCursorType(CX_RESOLVE_TYPE(clang_Cursor_getArgument(node, i)))));
						method.Args.emplace_back(argType);
					}

					for (auto i = 0; i < context.Depth; ++i) std::cout << '\t';
					std::cout << "*Method '" << name << "'\n";
				}
			}
			result = false;
		} break;
	default:
		{
			//for (auto i=0; i< context.Depth; ++i) std::cout << '\t';
			//std::cout << clang_getCursorSpelling(node) << ", " << clang_getCursorKindSpelling(clang_getCursorKind(node)) << ", " << clang_getCursorKindSpelling(clang_getCursorKind(parent)) << "\n";
			result = false;
		} break;
	}

	return result;
}

void CX_EXIT_TRAVERSE(CXCursor node, CXCursor parent, CXClientData client)
{
	auto& context = *static_cast<context_t*>(client);

	switch (node.kind)
	{
	case CXCursor_StructDecl:
		{
			context.Depth -= 1;
		} break;
	case CXCursor_ClassDecl:
		{
			context.Depth -= 1;

			if (clang_isCursorDefinition(node) == false) break;

			auto name = clang_getCString(clang_getCursorSpelling(node));
			auto type = clang_getCString(clang_getTypeSpelling(clang_getCursorType(CX_RESOLVE_TYPE(node))));
			auto& klass = context.Classes[type];

			CXFile file;
			unsigned line, column, offset;
			CXSourceLocation location = clang_getCursorLocation(node);
			clang_getFileLocation(location, &file, &line, &column, &offset);
			CXString file_name = clang_getFileName(file);
			auto path = clang_getCString(file_name);

			auto folder = std::filesystem::path(path).parent_path().generic_string();
			auto baseName = std::filesystem::path(path).stem().generic_string();
			auto fileName = std::filesystem::path(path).filename().generic_string();

			auto output = folder + "/" + baseName + ".meta.h";
			if (context.Outputs.insert(output).second)
			{
				context.OutputsInOrder.push_back(output);
				std::filesystem::remove(output);

				String content(TEMPLATE_INCLUDE);
				content = CX_REPLACE_STR(content, META_FILE, fileName);
				CX_WRITE_FILE(output, content);
			}

			auto content = CX_OUTPUT_METADATA(klass);
			CX_APPEND_FILE(output, content);
		} break;
	default: break;
	}
}
