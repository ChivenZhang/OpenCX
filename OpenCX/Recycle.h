#pragma once
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
    static Recycle& Get()
    {
        static Recycle s_Instance;
        return s_Instance;
    }

    void mark(float time)
    {

    }

    void sweep(float time)
    {

    }

    void clear()
    {
        m_ItemList.clear();
    }

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
