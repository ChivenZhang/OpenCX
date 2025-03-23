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

class Call
{
public:
    virtual ~Call() = default;
};

template<class R, class... Args>
class CallT : public Call
{
public:
    explicit CallT(Lambda<R(Args...)> func) : m_Lambda(func) {}

    R call(Args... args) { return m_Lambda(args...); }

protected:
    Lambda<R(Args...)> m_Lambda;
};

class Field
{
public:
    String Name;
    String Type;
    Ref<Call> Access;
};

class Method
{
public:
    String Name;
    String Type;
    Ref<Call> Access;
};

template<class T>
class ClassT;

class Class
{
public:
    Class(String name) : m_Name(name)
    {
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
        auto result = std::find_if(m_Fields.cbegin(), m_Fields.cend(), [&](Field const& e)->bool{ return e.Name == name; });
        if(result == m_Fields.end()) return false;
        field = (*result);
        return true;
    }

    bool getMethod(String name, Method& method) const
    {
        auto result = std::find_if(m_Methods.cbegin(), m_Methods.cend(), [&](Method const& e)->bool{ return e.Name + e.Type == name; });
        if(result == m_Methods.cend()) return false;
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
        auto result = std::find_if(m_SFields.cbegin(), m_SFields.cend(), [&](Field const& e)->bool{ return e.Name == name; });
        if(result == m_SFields.end()) return false;
        field = (*result);
        return true;
    }

    bool getSMethod(String name, Method& method) const
    {
        auto result = std::find_if(m_SMethods.cbegin(), m_SMethods.cend(), [&](Method const& e)->bool{ return e.Name + e.Type == name; });
        if(result == m_SMethods.cend()) return false;
        method = (*result);
        return true;
    }

	template<class T>
	static Raw<Class> Get()
	{
		return ClassT<T>::Get();
	}

	template <class T, class... Args>
	static Ref<T> New(Args... args)
	{
		return Recycle::Get().create<T>(args...);
	}

	template <class T, class F>
	static Raw<F> Get(String name, Raw<T> obj)
	{
		Field f;
		if (Get<T>()->getField(name, f))
		{
			auto func = Cast<CallT<Raw<F>, Raw<T>>>(f.Access);
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
			auto func = Cast<CallT<Raw<F>, Raw<T>>>(f.Access);
			if (func) (*func->call(obj)) = value;
			if (func) return true;
		}
		return false;
	}

	template <class T, class R, class... Args>
	static R Call(String name, Raw<T> obj, Args... args)
	{
		static const String argTypes[] = { String(ClassT<decltype(args)>::Get()->getName())... };
		static const String argsType = []()
		{
			String result;
			for (auto& argType : argTypes) result += (result.empty()?"":",") + argType;
			return result;
		}();

		Method m;
		if (Get<T>()->getMethod(name + "[" + argsType + "]", m))
		{
			auto func = Cast<CallT<R, Raw<T>, Args...>>(m.Access);
			if (func) return func->call(obj, std::forward<Args>(args)...);
		}
		throw std::runtime_error("Method not found");
	}

	template <class T, class F>
	static Raw<F> GetStatic(String name)
	{
		Field f;
		if (Get<T>()->getSField(name, f))
		{
			auto func = Cast<CallT<Raw<F>>>(f.Access);
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
			auto func = Cast<CallT<Raw<F>>>(f.Access);
			if (func) (*func->call()) = value;
			if (func) return true;
		}
		return false;
	}

	template <class T, class R, class... Args>
	static R CallStatic(String name, Args... args)
	{
		static const String argTypes[] = { String(ClassT<decltype(args)>::Get()->getName())... };
		static const String argsType = []()
		{
			String result;
			for (auto& argType : argTypes) result += (result.empty()?"":",") + argType;
			return result;
		}();

		Method m;
		if (Get<T>()->getSMethod(name + "[" + argsType + "]", m))
		{
			auto func = Cast<CallT<R, Args...>>(m.Access);
			if (func) return func->call(std::forward<Args>(args)...);
		}
		throw std::runtime_error("Method not found");
	}

protected:
    String m_Name;
    List<Raw<Class>> m_Bases;
    List<Field> m_Fields, m_SFields; 
    List<Method> m_Methods, m_SMethods;
};

template<class T>
class ClassT : public virtual Class
{
public:
    static Raw<Class> Get()
    {
        static ClassT s_Instance;
        return &s_Instance;
    }

protected:
    ClassT() : Class(typeid(T).name()) {}
};

#define CLASST(NAME)\
template<>\
class ClassT<NAME> : public virtual Class\
{\
public:\
    static Raw<Class> Get()\
    {\
        static ClassT s_Instance;\
        return &s_Instance;\
    }\
protected:\
    ClassT() : Class(#NAME) {}\
}
