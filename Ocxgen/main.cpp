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
#include <assert.h>
#include <fstream>
#include <filesystem>
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
	uint32_t Depth = 0;
	List<class_t> Bases;
	List<field_t> Fields, SFields;
	List<method_t> Methods, SMethods;
};

struct context_t
{
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
int CX_OUTPUT_METADATA(String file, clang_t const& meta);
void CX_ENTER_TRAVERSE(CXCursor node, CXCursor parent, CXClientData client);
void CX_EXIT_TRAVERSE(CXCursor node, CXCursor parent, CXClientData client);

int main(int argc, char** argv)
{
	OpenARGS args(argc, argv);
	if (args.items().size() < 2)
	{
		PRINT("no file input");
		return 0;
	}
	auto file = args.item(1).Value;
	if (std::filesystem::exists(file) == false)
	{
		PRINT("file does not exist:", file);
		return -1;
	}
	return CX_ANALYSE_METADATA(file, argc-2, argv+2);
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
	PRINT("succeed", file);
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
	CX_ENTER_TRAVERSE(node, parent, client);

	return CXChildVisit_Recurse;
}

int CX_OUTPUT_METADATA(String file, clang_t const& meta)
{
	auto& bases = meta.Bases;
	auto& fields = meta.Fields, &sFields = meta.SFields;
	auto& methods = meta.Methods, &sMethods = meta.SMethods;

	auto output = String(TEMPLATE_FILE);
	auto folder = std::filesystem::path(file).parent_path().generic_string();
	auto baseName = std::filesystem::path(file).stem().generic_string();
	auto fileName = std::filesystem::path(file).filename().generic_string();

	String metaFile, metaClass, metaBase, metaField, metaMethod, metaSField, metaSMethod;

	metaFile = fileName;
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
		s = CX_REPLACE_STR(s, META_TYPE, e.Type);
		metaField += s;
	}

	for (auto& e : methods)
	{
		String s(TEMPLATE_METHOD);
		s = CX_REPLACE_STR(s, META_NAME, e.Name);
		s = CX_REPLACE_STR(s, META_RETURN, e.Type);
		String _t;
		for(auto& a : e.Args) _t += (_t.empty()?"":",") + a;
		s = CX_REPLACE_STR(s, META_TYPE, _t);
		String t;
		for(auto& a : e.Args) t += "," + a;
		s = CX_REPLACE_STR(s, META_ARGS_TYPE, t);
		String tt;
		for(size_t i=0; i<e.Args.size(); ++i) tt += "," + String("auto") + " " + "_" + std::to_string(1+i);
		s = CX_REPLACE_STR(s, META_ARGS_CALL, tt);
		String ttt;
		for(size_t i=0; i<e.Args.size(); ++i) ttt += String(ttt.empty()?"":",") + "_" + std::to_string(1+i);
		s = CX_REPLACE_STR(s, META_ARGS_PASS, ttt);
		metaMethod += s;
	}

	for (auto& e : sFields)
	{
		String s(TEMPLATE_SFIELD);
		s = CX_REPLACE_STR(s, META_NAME, e.Name);
		s = CX_REPLACE_STR(s, META_TYPE, e.Type);
		metaSField += s;
	}

	for (auto& e : sMethods)
	{
		String s(TEMPLATE_SMETHOD);
		s = CX_REPLACE_STR(s, META_NAME, e.Name);
		s = CX_REPLACE_STR(s, META_RETURN, e.Type);
		String _t;
		for(auto& a : e.Args) _t += (_t.empty()?"":",") + a;
		s = CX_REPLACE_STR(s, META_TYPE, _t);
		String t;
		for(auto& a : e.Args) t += "," + a;
		s = CX_REPLACE_STR(s, META_ARGS_TYPE, t);
		String tt;
		for(size_t i=0; i<e.Args.size(); ++i) tt += String(tt.empty()?"":",") + "auto" + " " + "_" + std::to_string(1+i);
		s = CX_REPLACE_STR(s, META_ARGS_CALL, tt);
		String ttt;
		for(size_t i=0; i<e.Args.size(); ++i) ttt += String(ttt.empty()?"":",") + "_" + std::to_string(1+i);
		s = CX_REPLACE_STR(s, META_ARGS_PASS, ttt);
		metaSMethod += s;
	}

	output = CX_REPLACE_STR(output, META_FILE, metaFile);
	output = CX_REPLACE_STR(output, META_CLASS, metaClass);
	output = CX_REPLACE_STR(output, META_BASE, metaBase);
	output = CX_REPLACE_STR(output, META_FIELD, metaField);
	output = CX_REPLACE_STR(output, META_METHOD, metaMethod);
	output = CX_REPLACE_STR(output, META_SFIELD, metaSField);
	output = CX_REPLACE_STR(output, META_SMETHOD, metaSMethod);

	auto file2 = folder + "/" + baseName + ".meta.h";
	CX_WRITE_FILE(file2, output);

	PRINT("output",  meta.Class.Name, "to", file2);
	return 0;
}

void CX_ENTER_TRAVERSE(CXCursor node, CXCursor parent, CXClientData client)
{
	printf("in %s %s\n", clang_getCString(clang_getCursorSpelling(node)), clang_getCString(clang_getCursorKindSpelling(clang_getCursorKind(node))));
	// switch (node.kind)
	// {
	// case CXCursor_ClassDecl:
	// 	{
	// 		std::cout << "*Class '" << clang_getCString(clang_getCursorSpelling(node)) << "'\n";
	// 	} break;
	// case CXCursor_StructDecl:
	// 	{
	// 		std::cout << "*Struct '" << clang_getCString(clang_getCursorSpelling(node)) << "'\n";
	// 	} break;
	// case CXCursor_VarDecl:
	// 	{
	// 		if (parent.kind == CXCursor_ClassDecl)
	// 		{
	// 			std::cout << "\t*SField '" << clang_getCursorSpelling(node) << "'\n";
	// 		}
	// 		else
	// 		{
	// 			std::cout << clang_getCursorSpelling(node) << ", " << clang_getCursorKindSpelling(clang_getCursorKind(node)) << "'\n";
	// 		}
	// 	} break;
	// case CXCursor_FieldDecl:
	// 	{
	// 		std::cout << "\t*Field '" << clang_getCursorSpelling(node) << "'\n";
	// 	} break;
	// case CXCursor_CXXMethod:
	// 	{
	// 		if (clang_CXXMethod_isStatic(node))
	// 		{
	// 			std::cout << "\t*SMethod '" << clang_getCursorSpelling(node) << "'\n";
	// 		}
	// 		else
	// 		{
	// 			std::cout << "\t*Method '" << clang_getCursorSpelling(node) << "'\n";
	// 		}
	// 	} break;
	// case CXCursor_TypeAliasDecl:
	// 	{
	// 		// using 别名
	//
	// 	} break;
	// case CXCursor_TypedefDecl:
	// 	{
	// 		// typedef 别名
	//
	// 	} break;
	// default:
	// 	{
	// 		std::cout << clang_getCursorSpelling(node) << ", " << clang_getCursorKindSpelling(clang_getCursorKind(node)) << "'\n";
	// 	} break;
	// }
}

void CX_EXIT_TRAVERSE(CXCursor node, CXCursor parent, CXClientData client)
{
	printf("out %s %s\n", clang_getCString(clang_getCursorSpelling(node)), clang_getCString(clang_getCursorKindSpelling(clang_getCursorKind(node))));
}