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

#define CLASS(NAME, ...) struct NAME : ObjectT<NAME>, ##__VA_ARGS__
#define FIELD(TYPE, NAME) public: TYPE NAME
#define METHOD(TYPE, NAME, ...) public: TYPE NAME(__VA_ARGS__)
#define SFIELD(TYPE, NAME) public: static TYPE NAME
#define SMETHOD(TYPE, NAME, ...) public: static TYPE NAME(__VA_ARGS__)

class MyBase
{
};

CLASS(MyObject, MyBase)
{
	FIELD(String, Name) = "Name";
	FIELD(String, Name2) = "Name2";

	SFIELD(String, SName);
	SFIELD(String, SName2);

	METHOD(void, Foo, String name, float data)
	{
		PRINT("call Foo:", name, data);
	}

	METHOD(void, Foo2, String name, float data)
	{
		PRINT("call Foo2:", name, data);
	}

	SMETHOD(void, SFoo, String name, float data)
	{
		PRINT("call SFoo:", name, data);
	}

	SMETHOD(void, SFoo2, String name, float data)
	{
		PRINT("call SFoo2:", name, data);
	}
};

String MyObject::SName = "SName";
String MyObject::SName2 = "SName2";

#if 1

#define META_MyObject

template <>
class ClassT<MyObject> : public Class
{
public:
	using T = MyObject;

public:
	static Raw<Class> Get()
	{
		static ClassT s_Instance;
		return &s_Instance;
	}

	template <class... Args>
	static Ref<T> New(Args... args)
	{
		return Recycle::Get().create<T>(args...);
	}

	template <class F>
	static Raw<F> Get(String name, Raw<T> obj)
	{
		Field f;
		if (Get()->getField(name, f))
		{
			auto func = Cast<CallT<Raw<F>, Raw<T>>>(f.Access);
			if (func) return func->call(obj);
		}
		return Raw<F>();
	}

	template <class R, class... Args>
	static R Call(String name, Raw<T> obj, Args... args)
	{
		static String argTypes[] = { String(ClassT<decltype(args)>::Get()->getName())... };
		static String argsType = []()
		{
			String result;
			for (auto& argType : argTypes) result += (result.empty()?"":",") + argType;
			return result;
		}();

		Method m;
		if (Get()->getMethod(name + "[" + argsType + "]", m))
		{
			auto func = Cast<CallT<R, Raw<T>, Args...>>(m.Access);
			if (func) return func->call(obj, std::forward<Args>(args)...);
		}
		throw std::runtime_error("Method not found");
	}

	template <class F>
	static Raw<F> SGet(String name)
	{
		Field f;
		if (Get()->getSField(name, f))
		{
			auto func = Cast<CallT<Raw<F>>>(f.Access);
			if (func) return func->call();
		}
		return Raw<F>();
	}

	template <class R, class... Args>
	static R SCall(String name, Args... args)
	{
		static String argTypes[] = { String(ClassT<decltype(args)>::Get()->getName())... };
		static String argsType = []()
		{
			String result;
			for (auto& argType : argTypes) result += (result.empty()?"":",") + argType;
			return result;
		}();

		Method m;
		if (Get()->getSMethod(name + "[" + argsType + "]", m))
		{
			auto func = Cast<CallT<R, Args...>>(m.Access);
			if (func) return func->call(std::forward<Args>(args)...);
		}
		throw std::runtime_error("Method not found");
	}

protected:
	ClassT()
		:
		Class("MyObject")
	{
		m_Fields.push_back(Field{.Name = "Name", .Type = "String", .Access = ::New<CallT<Raw<decltype(T::Name)>, Raw<T>>>([](auto _0) { return &_0->Name; }),});
		m_Methods.push_back(Method{.Name = "Foo", .Type = "[String,float]", .Access = ::New<CallT<void, Raw<T>, String>>([](auto _0, auto _1) { return _0->Foo(_1); }),});

		m_SFields.push_back(Field{.Name = "SName", .Type = "String", .Access = ::New<CallT<Raw<String>>>([]() { return &T::SName; }),});
		m_SMethods.push_back(Method{.Name = "SFoo", .Type = "[String,float]", .Access = ::New<CallT<void, String>>([](auto _0) { return T::SFoo(_0); }),});
	}
};

#endif
