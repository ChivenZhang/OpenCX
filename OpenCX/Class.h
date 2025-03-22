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
