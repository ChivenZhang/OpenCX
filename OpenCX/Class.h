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
#include "Public.h"
#include "Recycle.h"

class Func
{
public:
	virtual ~Func() = default;
};

template <class R, class... Args>
class FuncT : public Func
{
public:
	explicit FuncT(Lambda<R(Args...)> func) : m_Func(func)
	{
	}

	R call(Args... args) { return m_Func(std::forward<Args>(args)...); }

protected:
	Lambda<R(Args...)> m_Func;
};

class Field
{
public:
	String Name;
	String Type;
	Ref<Func> Access;
};

class Method
{
public:
	String Name;
	String Type;
	String Return;
	Ref<Func> Access;
};

template <class T>
class ClassT;

class Class
{
public:
	template <class T>
	static Raw<ClassT<T>> Get()
	{
		return ClassT<T>::Get();
	}

	template <class T, class... Args>
	static Ref<T> New(Args... args)
	{
		return Recycle::Get().create<T>(0, args...);
	}

	template <class T, class F>
	static Raw<F> Get(String name, Raw<T> obj)
	{
		Field f;
		if (Get<T>()->getField(name, f))
		{
			auto func = Cast<FuncT<Raw<F>, Raw<T>>>(f.Access);
			if (func) return func->call(obj);
		}
		return Raw<F>();
	}

	template <class T, class F>
	static bool Set(String name, Raw<T> obj, F const& value)
	{
		Field f;
		if (Get<T>()->getField(name, f))
		{
			auto func = Cast<FuncT<Raw<F>, Raw<T>>>(f.Access);
			if (func) (*func->call(obj)) = value;
			if (func) return true;
		}
		return false;
	}

	template <class T, class R, class... Args>
	static R Call(String name, Raw<T> obj, Args... args)
	{
		static auto type = (String() + ... + ("|" + Class::Get<decltype(args)>()->getName()));

		Method m;
		if (Get<T>()->getMethod(name + type, m))
		{
			auto func = Cast<FuncT<R, Raw<T>, Args...>>(m.Access);
			if (func) return func->call(obj, std::forward<Args>(args)...);
		}
		throw std::runtime_error("Method not found");
	}

	template <class T, class... Args>
	static Ref<T> NewStatic(Args... args)
	{
		return Recycle::Get().create<T>(1, args...);
	}

	template <class T, class F>
	static Raw<F> GetStatic(String name)
	{
		Field f;
		if (Get<T>()->getSField(name, f))
		{
			auto func = Cast<FuncT<Raw<F>>>(f.Access);
			if (func) return func->call();
		}
		return Raw<F>();
	}

	template <class T, class F>
	static bool SetStatic(String name, F const& value)
	{
		Field f;
		if (Get<T>()->getSField(name, f))
		{
			auto func = Cast<FuncT<Raw<F>>>(f.Access);
			if (func) (*func->call()) = value;
			if (func) return true;
		}
		return false;
	}

	template <class T, class R, class... Args>
	static R CallStatic(String name, Args... args)
	{
		static auto type = (String() + ... + ("|" + Class::Get<decltype(args)>()->getName()));

		Method m;
		if (Get<T>()->getSMethod(name + type, m))
		{
			auto func = Cast<FuncT<R, Args...>>(m.Access);
			if (func) return func->call(std::forward<Args>(args)...);
		}
		throw std::runtime_error("Method not found");
	}

	String getName() const
	{
		return m_Name;
	}

	ListView<const Raw<Class>> getBases() const
	{
		return m_Bases;
	}

	ListView<const Field> getFields() const
	{
		return m_Fields;
	}

	ListView<const Method> getMethods() const
	{
		return m_Methods;
	}

	bool getField(String name, Field& field) const
	{
		auto result = std::find_if(m_Fields.cbegin(), m_Fields.cend(), [&](Field const& e)-> bool { return e.Name == name; });
		if (result == m_Fields.end()) return false;
		field = (*result);
		return true;
	}

	bool getMethod(String name, Method& method) const
	{
		auto result = std::find_if(m_Methods.cbegin(), m_Methods.cend(), [&](Method const& e)-> bool { return e.Name + e.Type == name; });
		if (result == m_Methods.cend()) return false;
		method = (*result);
		return true;
	}

	ListView<const Field> getSFields() const
	{
		return m_SFields;
	}

	ListView<const Method> getSMethods() const
	{
		return m_SMethods;
	}

	bool getSField(String name, Field& field) const
	{
		auto result = std::find_if(m_SFields.cbegin(), m_SFields.cend(), [&](Field const& e)-> bool { return e.Name == name; });
		if (result == m_SFields.end()) return false;
		field = (*result);
		return true;
	}

	bool getSMethod(String name, Method& method) const
	{
		auto result = std::find_if(m_SMethods.cbegin(), m_SMethods.cend(), [&](Method const& e)-> bool { return e.Name + e.Type == name; });
		if (result == m_SMethods.cend()) return false;
		method = (*result);
		return true;
	}

protected:
	Class(String name) : m_Name(name)
	{
	}

protected:
	String m_Name;
	List<Raw<Class>> m_Bases;
	List<Field> m_Fields, m_SFields;
	List<Method> m_Methods, m_SMethods;
};

template <class T>
class ClassT : public virtual Class
{
public:
	static Raw<ClassT> Get()
	{
		static ClassT s_Instance;
		return &s_Instance;
	}

protected:
	ClassT() : Class(typeid(T).name())
	{
	}
};

template <>
class ClassT<void> : public virtual Class
{
public:
	static Raw<ClassT> Get()
	{
		static ClassT s_Instance;
		return &s_Instance;
	}

protected:
	ClassT() : Class(typeid(void).name())
	{
	}
};

#define ENABLE_CLASS(NAME) friend class ClassT<NAME>
