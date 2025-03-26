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
	ClassT() : Class(typeid(RecycleBin).name())
	{
		using T = RecycleBin;
		m_Fields.push_back(Field{.Name = "Value", .Type = Class::Get<Ref<Object>>()->getName(), .Access = ::New<FuncT<Raw<decltype(T::Value)>,Raw<T> >>([](Raw<T> _0) { return &_0->Value; }), });
		m_Fields.push_back(Field{.Name = "Flags", .Type = Class::Get<uint32_t>()->getName(), .Access = ::New<FuncT<Raw<decltype(T::Flags)>,Raw<T> >>([](Raw<T> _0) { return &_0->Flags; }), });
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
	ClassT() : Class(typeid(Recycle).name())
	{
		using T = Recycle;
		m_Methods.push_back(Method{.Name = "mark", .Type = "|"+Class::Get<float>()->getName()+"", .Return = Class::Get<void>()->getName(), .Access = ::New<FuncT<void,Raw<T>,float >>([](Raw<T> _0,float _1)->void { return _0->mark(_1); }), });
		m_Methods.push_back(Method{.Name = "sweep", .Type = "|"+Class::Get<float>()->getName()+"", .Return = Class::Get<void>()->getName(), .Access = ::New<FuncT<void,Raw<T>,float >>([](Raw<T> _0,float _1)->void { return _0->sweep(_1); }), });
		m_Methods.push_back(Method{.Name = "clear", .Type = "", .Return = Class::Get<void>()->getName(), .Access = ::New<FuncT<void,Raw<T> >>([](Raw<T> _0)->void { return _0->clear(); }), });
		m_SMethods.push_back(Method{.Name = "Get", .Type = "", .Return = Class::Get<Recycle &>()->getName(), .Access = ::New<FuncT<Recycle & >>([]()->Recycle & { return T::Get(); }), });
	}
};
