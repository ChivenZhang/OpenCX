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
#include <fstream>
#include <filesystem>
#include <clang-c/Index.h>
#include <OpenCX/Object.h>
#include <OpenARGS/OpenARGS.h>
#include "Klass.h"

using args_t = String;

struct field_t
{
	String Name;
	String Type;
};

struct method_t
{
	String Name;
	String Type;
	List<args_t> Args;
};

struct class_t
{
	String Name;
};

struct clang_t
{
	class_t Class;
	List<class_t> Bases;
	List<field_t> Fields;
	List<method_t> Methods;
	List<field_t> SFields;
	List<method_t> SMethods;
};

std::string READ_FILE(std::string path)
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
	return std::string();
}

bool WRITE_FILE(std::string path, std::string content)
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

std::string STRING_REPLACE(std::string const& string, std::string const& target, std::string const& replacement)
{
	std::string result;
	size_t i = 0;
	for (; i < string.length(); )
	{
		auto k = string.find(target, i);
		if (k == std::string::npos) break;
		result += string.substr(i, k - i) + replacement;
		i = k + target.length();
	}
	if (i < string.length()) result += string.substr(i);
	return result;
}

int ANALYSE_METADATA(String path, int argc, char** argv);
int OUTPUT_METADATA(String path, clang_t const& meta);
CXChildVisitResult TRAVERSE_METADATA(CXCursor current_cursor, CXCursor parent, CXClientData client_data);

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
	return ANALYSE_METADATA(file, argc, argv);
}

int ANALYSE_METADATA(String file, int argc, char** argv)
{
	auto index = clang_createIndex(0, 0); //Create index
	auto unit = clang_parseTranslationUnit(
		index,
		file.c_str(), argv, argc,
		nullptr, 0,
		CXTranslationUnit_None
	);
	if (unit == nullptr)
	{
		PRINT("fail to parse translation unit");
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
	clang_t meta;
	auto cursor = clang_getTranslationUnitCursor(unit);
	clang_visitChildren( cursor, TRAVERSE_METADATA, &meta);
	clang_disposeTranslationUnit(unit);
	clang_disposeIndex(index);
	PRINT("succeed", file);
	return 0;
}

int OUTPUT_METADATA(String file, clang_t const& meta)
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
		s = STRING_REPLACE(s, META_NAME, e.Name);
		metaBase += s;
	}

	for (auto& e : fields)
	{
		String s(TEMPLATE_FIELD);
		s = STRING_REPLACE(s, META_NAME, e.Name);
		s = STRING_REPLACE(s, META_TYPE, e.Type);
		metaField += s;
	}

	for (auto& e : methods)
	{
		String s(TEMPLATE_METHOD);
		s = STRING_REPLACE(s, META_NAME, e.Name);
		s = STRING_REPLACE(s, META_RETURN, e.Type);
		String _t;
		for(auto& a : e.Args) _t += (_t.empty()?"":",") + a;
		s = STRING_REPLACE(s, META_TYPE, _t);
		String t;
		for(auto& a : e.Args) t += "," + a;
		s = STRING_REPLACE(s, META_ARGS_TYPE, t);
		String tt;
		for(size_t i=0; i<e.Args.size(); ++i) tt += "," + String("auto") + " " + "_" + std::to_string(1+i);
		s = STRING_REPLACE(s, META_ARGS_CALL, tt);
		String ttt;
		for(size_t i=0; i<e.Args.size(); ++i) ttt += String(ttt.empty()?"":",") + "_" + std::to_string(1+i);
		s = STRING_REPLACE(s, META_ARGS_PASS, ttt);
		metaMethod += s;
	}

	for (auto& e : sFields)
	{
		String s(TEMPLATE_SFIELD);
		s = STRING_REPLACE(s, META_NAME, e.Name);
		s = STRING_REPLACE(s, META_TYPE, e.Type);
		metaSField += s;
	}

	for (auto& e : sMethods)
	{
		String s(TEMPLATE_SMETHOD);
		s = STRING_REPLACE(s, META_NAME, e.Name);
		s = STRING_REPLACE(s, META_RETURN, e.Type);
		String _t;
		for(auto& a : e.Args) _t += (_t.empty()?"":",") + a;
		s = STRING_REPLACE(s, META_TYPE, _t);
		String t;
		for(auto& a : e.Args) t += "," + a;
		s = STRING_REPLACE(s, META_ARGS_TYPE, t);
		String tt;
		for(size_t i=0; i<e.Args.size(); ++i) tt += String(tt.empty()?"":",") + "auto" + " " + "_" + std::to_string(1+i);
		s = STRING_REPLACE(s, META_ARGS_CALL, tt);
		String ttt;
		for(size_t i=0; i<e.Args.size(); ++i) ttt += String(ttt.empty()?"":",") + "_" + std::to_string(1+i);
		s = STRING_REPLACE(s, META_ARGS_PASS, ttt);
		metaSMethod += s;
	}

	output = STRING_REPLACE(output, META_FILE, metaFile);
	output = STRING_REPLACE(output, META_CLASS, metaClass);
	output = STRING_REPLACE(output, META_BASE, metaBase);
	output = STRING_REPLACE(output, META_FIELD, metaField);
	output = STRING_REPLACE(output, META_METHOD, metaMethod);
	output = STRING_REPLACE(output, META_SFIELD, metaSField);
	output = STRING_REPLACE(output, META_SMETHOD, metaSMethod);

	auto file2 = folder + "/" + baseName + ".meta.h";
	WRITE_FILE(file2, output);

	PRINT("output",  meta.Class.Name, "to", file2);
	return 0;
}

CXChildVisitResult TRAVERSE_METADATA(CXCursor current_cursor, CXCursor parent, CXClientData client_data)
{
	auto& meta = *(clang_t*)client_data;

	CXType cursor_type = clang_getCursorType(current_cursor);
	CXString cursor_spelling = clang_getCursorSpelling(current_cursor);
	CXSourceRange cursor_range = clang_getCursorExtent(current_cursor);
	std::cout << "Cursor " << clang_getCString(cursor_spelling);

	CXFile file;
	unsigned start_line, start_column, start_offset;
	unsigned end_line, end_column, end_offset;

	clang_getExpansionLocation(clang_getRangeStart(cursor_range), &file, &start_line, &start_column, &start_offset);
	clang_getExpansionLocation(clang_getRangeEnd  (cursor_range), &file, &end_line  , &end_column  , &end_offset);
	std::cout << " spanning lines " << start_line << " to " << end_line;
	clang_disposeString(cursor_spelling);

	std::cout << "\n";
	return CXChildVisit_Recurse;
}