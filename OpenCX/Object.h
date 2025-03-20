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
#include "Class.h"

class Object
{
public:
    virtual ~Object() = default;

    virtual Raw<Class> getClass() const = 0;
};

#include "Recycle.h"

template<class T>
class ClassT : public virtual Class
{
public:
    static Raw<Class> Get()
    {
        return Raw<Class>();
    }

    template<class... Args>
    static Ref<T> New(Args... args)
    {
        return Ref<T>();
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
