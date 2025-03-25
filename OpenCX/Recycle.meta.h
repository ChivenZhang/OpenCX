#pragma once
#include <OpenCX/Class.h>
#include "Recycle.h"

template<>
class ClassT<RecycleBin> : public Class
{
public:
	static Raw<ClassT> Get()
	{
		static ClassT s_Instance;
		return &s_Instance;
	}

protected:
	ClassT() : Class("RecycleBin")
	{
		using T = RecycleBin; 
		m_Fields.push_back(Field{.Name = "Value", .Type = "Ref<Object>", .Access = ::New<FuncT<Raw<decltype(T::Value)>,Raw<T> >>([](Raw<T> _0) { return &_0->Value; }), } );
		m_Fields.push_back(Field{.Name = "Flags", .Type = "uint32_t", .Access = ::New<FuncT<Raw<decltype(T::Flags)>,Raw<T> >>([](Raw<T> _0) { return &_0->Flags; }), } );
	}
};

template<>
class ClassT<Recycle> : public Class
{
public:
	static Raw<ClassT> Get()
	{
		static ClassT s_Instance;
		return &s_Instance;
	}

protected:
	ClassT() : Class("Recycle")
	{
		using T = Recycle; 
		m_Methods.push_back(Method{.Name = "mark", .Type = "|float", .Return = "void", .Access = ::New<FuncT<void,Raw<T>,float >>([](Raw<T> _0,float _1)->void { return _0->mark(_1); }), });
		m_Methods.push_back(Method{.Name = "sweep", .Type = "|float", .Return = "void", .Access = ::New<FuncT<void,Raw<T>,float >>([](Raw<T> _0,float _1)->void { return _0->sweep(_1); }), });
		m_Methods.push_back(Method{.Name = "clear", .Type = "", .Return = "void", .Access = ::New<FuncT<void,Raw<T> >>([](Raw<T> _0)->void { return _0->clear(); }), });
		m_SMethods.push_back(Method{.Name = "Get", .Type = "", .Return = "Recycle &", .Access = ::New<FuncT<Recycle & >>([]()->Recycle & { return T::Get(); }), });
	}
};
