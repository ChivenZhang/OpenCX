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

int ANALYSE_METADATA(String path);
int OUTPUT_METADATA(String path, clang_t const& meta);

int main(int argc, char** argv)
{
	OpenARGS args(argc, argv);
	if (args.items().size() <= 1)
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

	/*
	bases.push_back({.Name = "Object"});
	bases.push_back({.Name = "MyBase"});
	fields.push_back({.Name = "Name", .Type="String" });
	sFields.push_back({.Name = "SName", .Type="String" });
	methods.push_back({.Name = "Foo", .Type = "void", .Args={"String", "float"} });
	sMethods.push_back({.Name = "SFoo", .Type = "void", .Args={"String", "float"} });
	fields.push_back({.Name = "Name2", .Type="String" });
	sFields.push_back({.Name = "SName2", .Type="String" });
	methods.push_back({.Name = "Foo2", .Type = "void", .Args={"String", "float"} });
	sMethods.push_back({.Name = "SFoo2", .Type = "void", .Args={"String", "float"} });
	 */

	return ANALYSE_METADATA(file);
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

int ANALYSE_METADATA(String file)
{
	auto index = clang_createIndex(0, 0); //Create index
	auto unit = clang_parseTranslationUnit(
		index,
		file.c_str(), nullptr, 0,
		nullptr, 0,
		CXTranslationUnit_None
	);
	if (unit == nullptr)
	{
		PRINT("fail to parse translation unit");
		return -1;
	}
	//Obtain a cursor at the root of the translation unit
	auto cursor = clang_getTranslationUnitCursor(unit);
	// ===================================================================
	clang_visitChildren(
		cursor,
		[](CXCursor current_cursor, CXCursor parent, CXClientData client_data)
		{
			CXType cursor_type = clang_getCursorType(current_cursor);

			CXString type_kind_spelling = clang_getTypeKindSpelling(cursor_type.kind);
			std::cout << "Type Kind: " << clang_getCString(type_kind_spelling);
			clang_disposeString(type_kind_spelling);

			if (cursor_type.kind == CXType_Pointer || // If cursor_type is a pointer
				cursor_type.kind == CXType_LValueReference || // or an LValue Reference (&)
				cursor_type.kind == CXType_RValueReference)
			{
				// or an RValue Reference (&&),
				CXType pointed_to_type = clang_getPointeeType(cursor_type); // retrieve the pointed-to type

				CXString pointed_to_type_spelling = clang_getTypeSpelling(pointed_to_type); // Spell out the entire
				std::cout << "pointing to type: " << clang_getCString(pointed_to_type_spelling); // pointed-to type
				clang_disposeString(pointed_to_type_spelling);
			}
			else if (cursor_type.kind == CXType_Record)
			{
				CXString type_spelling = clang_getTypeSpelling(cursor_type);
				std::cout << ", namely " << clang_getCString(type_spelling);
				clang_disposeString(type_spelling);
			}
			std::cout << "\n";
			return CXChildVisit_Recurse;
		},
		nullptr
	);
	// ===================================================================
	clang_disposeTranslationUnit(unit);
	clang_disposeIndex(index);
	PRINT("succeed", file);
	return 0;
}