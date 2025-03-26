#pragma once
#include <OpenCX/Class.h>
#include "MyObject.h"

template<>
class ClassT<MyBase> : public Class
{
public:
	static Raw<ClassT> Get()
	{
		static ClassT s_Instance;
		return &s_Instance;
	}

protected:
	ClassT() : Class("MyBase")
	{
		using T = MyBase;
		m_SFields.push_back(Field{.Name = "Global1", .Type = ""+Class::Get<int>()->getName()+"", .Access = ::New<FuncT<Raw<decltype(T::Global1)>>>([]() { return &T::Global1; }), });
	}
};

template<>
class ClassT<MyObject::InnerObject> : public Class
{
public:
	static Raw<ClassT> Get()
	{
		static ClassT s_Instance;
		return &s_Instance;
	}

protected:
	ClassT() : Class("MyObject::InnerObject")
	{
		using T = MyObject::InnerObject;
		m_Fields.push_back(Field{.Name = "SubName", .Type = ""+Class::Get<int>()->getName()+"", .Access = ::New<FuncT<Raw<decltype(T::SubName)>,Raw<T> >>([](Raw<T> _0) { return &_0->SubName; }), });
		m_SFields.push_back(Field{.Name = "SSubName", .Type = ""+Class::Get<const int>()->getName()+"", .Access = ::New<FuncT<Raw<decltype(T::SSubName)>>>([]() { return &T::SSubName; }), });
	}
};

template<>
class ClassT<MyObject> : public Class
{
public:
	static Raw<ClassT> Get()
	{
		static ClassT s_Instance;
		return &s_Instance;
	}

protected:
	ClassT() : Class("MyObject")
	{
		using T = MyObject;
		m_Bases.push_back(ClassT<ObjectT<MyObject>>::Get());
		m_Bases.push_back(ClassT<MyBase>::Get());
		m_Bases.push_back(ClassT<abc::foo>::Get());
		m_Fields.push_back(Field{.Name = "Name", .Type = ""+Class::Get<String>()->getName()+"", .Access = ::New<FuncT<Raw<decltype(T::Name)>,Raw<T> >>([](Raw<T> _0) { return &_0->Name; }), });
		m_Fields.push_back(Field{.Name = "Name2", .Type = ""+Class::Get<String>()->getName()+"", .Access = ::New<FuncT<Raw<decltype(T::Name2)>,Raw<T> >>([](Raw<T> _0) { return &_0->Name2; }), });
		m_SFields.push_back(Field{.Name = "SName", .Type = ""+Class::Get<String>()->getName()+"", .Access = ::New<FuncT<Raw<decltype(T::SName)>>>([]() { return &T::SName; }), });
		m_SFields.push_back(Field{.Name = "SName2", .Type = ""+Class::Get<String>()->getName()+"", .Access = ::New<FuncT<Raw<decltype(T::SName2)>>>([]() { return &T::SName2; }), });
		m_Methods.push_back(Method{.Name = "VFoo", .Type = "", .Return = "void", .Access = ::New<FuncT<void,Raw<T> >>([](Raw<T> _0)->void { return _0->VFoo(); }), });
		m_Methods.push_back(Method{.Name = "VFoo", .Type = "|"+Class::Get<int>()->getName()+"", .Return = "void", .Access = ::New<FuncT<void,Raw<T>,int >>([](Raw<T> _0,int _1)->void { return _0->VFoo(_1); }), });
		m_Methods.push_back(Method{.Name = "Foo", .Type = "", .Return = "void", .Access = ::New<FuncT<void,Raw<T> >>([](Raw<T> _0)->void { return _0->Foo(); }), });
		m_Methods.push_back(Method{.Name = "Foo", .Type = "|"+Class::Get<String>()->getName()+"", .Return = "void", .Access = ::New<FuncT<void,Raw<T>,String >>([](Raw<T> _0,String _1)->void { return _0->Foo(_1); }), });
		m_Methods.push_back(Method{.Name = "Foo", .Type = "|"+Class::Get<String>()->getName()+"|"+Class::Get<float>()->getName()+"", .Return = "void", .Access = ::New<FuncT<void,Raw<T>,String,float >>([](Raw<T> _0,String _1,float _2)->void { return _0->Foo(_1,_2); }), });
		m_SMethods.push_back(Method{.Name = "SFoo", .Type = "", .Return = "void", .Access = ::New<FuncT<void >>([]()->void { return T::SFoo(); }), });
		m_SMethods.push_back(Method{.Name = "SFoo", .Type = "|"+Class::Get<String>()->getName()+"", .Return = "void", .Access = ::New<FuncT<void,String >>([](String _1)->void { return T::SFoo(_1); }), });
		m_SMethods.push_back(Method{.Name = "SFoo", .Type = "|"+Class::Get<String>()->getName()+"|"+Class::Get<float>()->getName()+"", .Return = "void", .Access = ::New<FuncT<void,String,float >>([](String _1,float _2)->void { return T::SFoo(_1,_2); }), });
	}
};

template<>
class ClassT<MySubObject> : public Class
{
public:
	static Raw<ClassT> Get()
	{
		static ClassT s_Instance;
		return &s_Instance;
	}

protected:
	ClassT() : Class("MySubObject")
	{
		using T = MySubObject;
		m_Bases.push_back(ClassT<MyObject>::Get());
		m_Methods.push_back(Method{.Name = "VFoo", .Type = "", .Return = "void", .Access = ::New<FuncT<void,Raw<T> >>([](Raw<T> _0)->void { return _0->VFoo(); }), });
		m_Methods.push_back(Method{.Name = "VFoo", .Type = "|"+Class::Get<int>()->getName()+"", .Return = "void", .Access = ::New<FuncT<void,Raw<T>,int >>([](Raw<T> _0,int _1)->void { return _0->VFoo(_1); }), });
	}
};
