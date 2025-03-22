#pragma once
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
#include <OpenCX/Object.h>

namespace abc
{
	struct foo
	{
		int bar;
		int* bar_pointer;
	};
}

class MyBase
{
};

class MyObject : public ObjectT<MyObject>, public MyBase
{
public:
	String Name = "Name";
	String Name2 = "Name2";
	static String SName;
	static String SName2;

	void Foo(String name, float data)
	{
		PRINT("call Foo:", name, data);
	}

	void Foo2(String name, float data)
	{
		PRINT("call Foo2:", name, data);
	}

	static void SFoo(String name, float data)
	{
		PRINT("call SFoo:", name, data);
	}

	static void SFoo2(String name, float data)
	{
		PRINT("call SFoo2:", name, data);
	}
};

String MyObject::SName = "SName";
String MyObject::SName2 = "SName2";