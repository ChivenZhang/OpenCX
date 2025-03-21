

#pragma once
#include "MyObject.h"
#ifndef META_MyObject

template<>
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

	template<class... Args>
	static Ref<T> New(Args... args)
	{
		return Recycle::Get().create<T>(args...);
	}

	template<class F>
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

	template<class F>
	static bool Set(String name, Raw<T> obj, F const& value)
	{
		Field f;
		if (Get()->getField(name, f))
		{
			auto func = Cast<CallT<Raw<F>, Raw<T>>>(f.Access);
			if (func) *func->call(obj) = value;
			if (func) return true;
		}
		return false;
	}

	template<class R, class... Args>
	static R Call(String name, Raw<T> obj, Args... args)
	{
		Method m;
		if (Get()->getMethod(name, m))
		{
			auto func = Cast<CallT<R, Raw<T>, Args...>>(m.Access);
			if (func) return func->call(obj, std::forward<Args>(args)...);
		}
		throw std::runtime_error("Method not found");
	}

	template<class F>
	static Raw<F> GetStatic(String name)
	{
		Field f;
		if (Get()->getSField(name, f))
		{
			auto func = Cast<CallT<Raw<F>>>(f.Access);
			if (func) return func->call();
		}
		return Raw<F>();
	}

	template<class F>
	static bool SetStatic(String name, F const& value)
	{
		Field f;
		if (Get()->getSField(name, f))
		{
			auto func = Cast<CallT<Raw<F>>>(f.Access);
			if (func) *func->call() = value;
			if (func) return true;
		}
		return false;
	}

	template<class R, class... Args>
	static R CallStatic(String name, Args... args)
	{
		Method m;
		if (Get()->getSMethod(name, m))
		{
			auto func = Cast<CallT<R, Args...>>(m.Access);
			if (func) return func->call(std::forward<Args>(args)...);
		}
		throw std::runtime_error("Method not found");
	}

protected:
    ClassT() : Class("MyObject")
    {
		m_Bases.push_back(ClassT<Object>::Get());
		m_Bases.push_back(ClassT<MyBase>::Get());

		m_Fields.push_back(Field{.Name = "Name", .Type = "String", .Access = ::New<CallT<Raw<decltype(T::Name)>,Raw<T>>>([](auto _0) { return &_0->Name; }), } );
		m_Fields.push_back(Field{.Name = "Name2", .Type = "String", .Access = ::New<CallT<Raw<decltype(T::Name2)>,Raw<T>>>([](auto _0) { return &_0->Name2; }), } );

		m_SFields.push_back(Field{.Name = "SName", .Type = "String", .Access = ::New<CallT<Raw<decltype(T::SName)>>>([]() { return &T::SName; }), } );
		m_SFields.push_back(Field{.Name = "SName2", .Type = "String", .Access = ::New<CallT<Raw<decltype(T::SName2)>>>([]() { return &T::SName2; }), } );

		m_Methods.push_back(Method{.Name = "Foo", .Type = "(String,float)", .Access = ::New<CallT<void,Raw<T>,String,float>>([](auto _0,auto _1,auto _2) { return _0->Foo(_1,_2); }), } );
		m_Methods.push_back(Method{.Name = "Foo2", .Type = "(String,float)", .Access = ::New<CallT<void,Raw<T>,String,float>>([](auto _0,auto _1,auto _2) { return _0->Foo2(_1,_2); }), } );

		m_SMethods.push_back(Method{.Name = "SFoo", .Type = "(String,float)", .Access = ::New<CallT<void,String,float>>([](auto _1,auto _2) { return T::SFoo(_1,_2); }), } );
		m_SMethods.push_back(Method{.Name = "SFoo2", .Type = "(String,float)", .Access = ::New<CallT<void,String,float>>([](auto _1,auto _2) { return T::SFoo2(_1,_2); }), } );

    }
};

#endif
