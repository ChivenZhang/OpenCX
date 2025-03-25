#pragma once
#include <OpenCX/Class.h>
#include "Object.h"

template<>
class ClassT<Object> : public Class
{
public:
	static Raw<ClassT> Get()
	{
		static ClassT s_Instance;
		return &s_Instance;
	}

protected:
	ClassT() : Class("Object")
	{
		using T = Object; 
		m_Methods.push_back(Method{.Name = "getClass", .Type = "", .Return = "Raw<Class>", .Access = ::New<FuncT<Raw<Class>,Raw<T> >>([](Raw<T> _0)->Raw<Class> { return _0->getClass(); }), });
	}
};
