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
class Object;

class RecycleBin
{
public:
    Ref<Object> Value;
    uint32_t Flags = 0;
};

class Recycle
{
public:
    static Recycle& Get();

    void mark(float time);

    void sweep(float time);

    void clear();

    template<class T, class...Args>
    Ref<T> create(Args... args)
    {
        auto result = std::make_shared<T>(args...);
        auto& item = m_ItemList.emplace_back();
        item.Value = result;
        item.Flags = 0;
        return result;
    }

protected:
    List<RecycleBin> m_ItemList;
};
