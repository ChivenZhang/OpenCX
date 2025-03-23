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

template<class T>
class ObjectT : public virtual Object
{
public:
    static Raw<ClassT<T>> GetClass()
    {
        return Class::Get<T>();
    }

    Raw<Class> getClass() const override
    {
        return Class::Get<T>();
    }
};

#include "Recycle.h"