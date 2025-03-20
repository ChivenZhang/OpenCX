#pragma once
#include "Class.h"

class Object
{
public:
    virtual ~Object() = default;

    virtual Raw<Class> getClass() const = 0;
};

#include "Recycle.h"

template<class R, class... Args>
class CallT : public Call
{
public:
    CallT(Lambda<R(Args...)> func) : m_Lambda(func) {}

    R call(Args... args) { return m_Lambda(args...); }

protected:
    Lambda<R(Args...)> m_Lambda;
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

    template<class... Args>
    static Ref<T> New(Args... args)
    {
        return Recycle::Get().create<T>(args...);
    }
};

template<class T>
class ObjectT : public virtual Object
{
public:
    static Raw<Class> GetClass()
    {
        return ClassT<T>::Get();
    }

    Raw<Class> getClass() const override
    {
        return ClassT<T>::Get();
    }
};
