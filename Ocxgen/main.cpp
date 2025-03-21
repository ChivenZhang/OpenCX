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
#include <filesystem>
#include <fstream>
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

	auto input = READ_FILE(file);
	if (input.empty()) return 0;
	List<class_t> bases;
	List<field_t> fields, sFields;
	List<method_t> methods, sMethods;

	// TODO: Resolve the class metadata

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

	// Assembly reflection metadata

	auto output = String(TEMPLATE_FILE);
	auto folder = std::filesystem::path(file).parent_path().generic_string();
	auto baseName = std::filesystem::path(file).stem().generic_string();
	auto fileName = std::filesystem::path(file).filename().generic_string();

	String metaFile, metaClass, metaBase, metaField, metaMethod, metaSField, metaSMethod;

	metaFile = fileName;
	metaClass = baseName;

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

	PRINT("succeed", file2);
	return 0;
}
