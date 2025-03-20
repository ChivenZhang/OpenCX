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

	// TODO: Resolve the class metadata of source code
	List<Field> fields, sFields;
	List<Method> methods, sMethods;

	fields.push_back({.Name = "Name", .Type="String" });
	sFields.push_back({.Name = "SName", .Type="String" });
	methods.push_back({.Name = "Foo", .Type="String" });
	sMethods.push_back({.Name = "SFoo", .Type="String" });

	auto output = String(TEMPLATE_FILE);

	auto folder = std::filesystem::path(file).parent_path().generic_string();
	auto baseName = std::filesystem::path(file).stem().generic_string();
	auto fileName = std::filesystem::path(file).filename().generic_string();

	String metaFile, metaClass, metaBase, metaField, metaMethod, metaSField, metaSMethod;

	metaFile = fileName;
	metaClass = baseName;

	for (auto& e : fields)
	{
		String s(TEMPLATE_FIELD);
		s = STRING_REPLACE(s, META_NAME, e.Name);
		s = STRING_REPLACE(s, META_TYPE, e.Type);
		metaField += s;
	}

	for (auto& e : sFields)
	{
		String s(TEMPLATE_SFIELD);
		s = STRING_REPLACE(s, META_NAME, e.Name);
		s = STRING_REPLACE(s, META_TYPE, e.Type);
		metaSField += s;
	}

	for (auto& e : methods)
	{
		String s(TEMPLATE_METHOD);
		s = STRING_REPLACE(s, META_NAME, e.Name);
		s = STRING_REPLACE(s, META_TYPE, e.Type);
		s = STRING_REPLACE(s, META_RETURN, "void");
		s = STRING_REPLACE(s, META_ARGS_TYPE, ", String");
		s = STRING_REPLACE(s, META_ARGS_CALL, ", String _1");
		s = STRING_REPLACE(s, META_ARGS_PASS, "_1");
		metaMethod += s;
	}

	for (auto& e : sMethods)
	{
		String s(TEMPLATE_SMETHOD);
		s = STRING_REPLACE(s, META_NAME, e.Name);
		s = STRING_REPLACE(s, META_TYPE, e.Type);
		s = STRING_REPLACE(s, META_RETURN, "void");
		s = STRING_REPLACE(s, META_ARGS_TYPE, ", String");
		s = STRING_REPLACE(s, META_ARGS_CALL, "String _1");
		s = STRING_REPLACE(s, META_ARGS_PASS, "_1");
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
	return 0;
}
