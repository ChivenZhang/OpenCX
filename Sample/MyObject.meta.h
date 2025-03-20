

#pragma once
#include "MyObject.h"
#ifndef META_MyObject

template<>
class ClassT<MyObject> : public Class
{
public:
	using T = MyObject;

public:
	ClassT()
	{
		
		m_Fields.push_back(Field{.Name = "Name", .Type = "String", .Access = ::New<CallT<Raw<decltype(T::Name)>, Raw<T>>>([](auto _0) { return &_0->Name; }), } );

		m_SFields.push_back(Field{.Name = "SName", .Type = "String", .Access = ::New<CallT<Raw<decltype(T::SName)>>>([]() { return &T::SName; }), } );

		m_Methods.push_back(Method{.Name = "Foo", .Type = "(String)", .Access = ::New<CallT<void, Raw<T>, String>>([](auto _0, String _1) { return _0->Foo(_1); }), } );

		m_SMethods.push_back(Method{.Name = "SFoo", .Type = "(String)", .Access = ::New<CallT<void, String>>([](String _1) { return T::SFoo(_1); }), } );

	}

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

	template<class R, class... Args>
	static R SCall(String name, Args... args)
	{
		Method m;
		if (Get()->getSMethod(name, m))
		{
			auto func = Cast<CallT<R, Args...>>(m.Access);
			if (func) return func->call(std::forward<Args>(args)...);
		}
		throw std::runtime_error("Method not found");
	}
};

#endif
