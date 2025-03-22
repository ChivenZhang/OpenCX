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
#include <iostream>
#include <algorithm>
#include <string>
#include <string_view>
#include <memory>
#include <vector>
#include <span>
#include <functional>

template<class T>
using Raw = T*;

template<class T>
using Ref = std::shared_ptr<T>;
template<class T>
using Hnd = std::weak_ptr<T>;

template<class T>
using List = std::vector<T>;

template<class T, std::size_t Extent = std::dynamic_extent>
using ListView = std::span<T, Extent>;

using String = std::string;
using StringView = std::string_view;

template<class T>
using Lambda = std::function<T>;

template<class T>
void PRINT(T value)
{
    std::cout << value << std::endl;
}

template<class T, class... Args>
void PRINT(T first, Args... args)
{
    std::cout << first << " ";
    PRINT(args...);
}

template<class T>
void ERROR(T value)
{
    std::cerr << value << std::endl;
}

template<class T, class... Args>
void ERROR(T first, Args... args)
{
    std::cerr << first << " ";
    ERROR(args...);
}

template<class T, class ... Args>
inline Ref<T> New(Args&& ... args)
{
    return std::make_shared<T>(std::forward<Args>(args)...);
}
template<class U, class T>
inline Ref<U> Cast(Ref<T>&& target)
{
    if (target == nullptr) return nullptr;
    return std::dynamic_pointer_cast<U>(target);
}
template<class U, class T>
inline Ref<U> Cast(Ref<T> const& target)
{
    if (target == nullptr) return nullptr;
    return std::dynamic_pointer_cast<U>(target);
}
template<class U, class T>
inline Hnd<U> Cast(Hnd<T>&& target)
{
    if (target == nullptr) return Hnd<U>();
    return std::dynamic_pointer_cast<U>(target.lock());
}
template<class U, class T>
inline Hnd<U> Cast(Hnd<T> const& target)
{
    if (target == nullptr) return Hnd<U>();
    return std::dynamic_pointer_cast<U>(target.lock());
}
template<class U, class T>
inline Raw<U> Cast(Raw<T>&& target)
{
    if (target == nullptr) return nullptr;
    return dynamic_cast<U*>((T*)target);
}
template<class U, class T>
inline Raw<U> Cast(Raw<T> const& target)
{
    if (target == nullptr) return nullptr;
    return const_cast<U*>(dynamic_cast<const U*>((const T*)target));
}