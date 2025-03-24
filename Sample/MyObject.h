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
public:
	static int Global1;
};
int MyBase::Global1 = 123;

int Global2 = 321;

//typedef MyBase Base;
//typedef Base Base2;
using Base = MyBase;
using Base2 = Base;

class MyObject : public ObjectT<MyObject>, public Base2, public abc::foo
{
public:
	String Name = "Name";
	String Name2 = "Name2";
	static String SName;
	static String SName2;

	class SubObject
	{
	public:
		int SubName = 123;
		static const int SSubName = 456;
	};

	void Foo()
	{
		PRINT("call Foo");
	}

	void Foo(String name)
	{
		PRINT("call Foo1:", name);
	}

	void Foo(String name, float data)
	{
		PRINT("call Foo2:", name, data);
	}

	static void SFoo()
	{
		PRINT("call SFoo");
	}

	static void SFoo(String name)
	{
		PRINT("call SFoo1:", name);
	}

	static void SFoo(String name, float data)
	{
		PRINT("call SFoo2:", name, data);
	}
};

String MyObject::SName = "SName";
String MyObject::SName2 = "SName2";