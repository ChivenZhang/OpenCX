#pragma once
#include <OpenCX/Class.h>
#include "Class.h"

template<>
class ClassT<Func> : public Class
{
public:
	static Raw<ClassT> Get()
	{
		static ClassT s_Instance;
		return &s_Instance;
	}

protected:
	ClassT() : Class(typeid(Func).name())
	{
		using T = Func;
	}
};

template<>
class ClassT<Field> : public Class
{
public:
	static Raw<ClassT> Get()
	{
		static ClassT s_Instance;
		return &s_Instance;
	}

protected:
	ClassT() : Class(typeid(Field).name())
	{
		using T = Field;
		m_Fields.push_back(Field{.Name = "Name", .Type = ""+Class::Get<String>()->getName()+"", .Access = ::New<FuncT<Raw<decltype(T::Name)>,Raw<T> >>([](Raw<T> _0) { return &_0->Name; }), });
		m_Fields.push_back(Field{.Name = "Type", .Type = ""+Class::Get<String>()->getName()+"", .Access = ::New<FuncT<Raw<decltype(T::Type)>,Raw<T> >>([](Raw<T> _0) { return &_0->Type; }), });
		m_Fields.push_back(Field{.Name = "Access", .Type = ""+Class::Get<Ref<Func>>()->getName()+"", .Access = ::New<FuncT<Raw<decltype(T::Access)>,Raw<T> >>([](Raw<T> _0) { return &_0->Access; }), });
	}
};

template<>
class ClassT<Method> : public Class
{
public:
	static Raw<ClassT> Get()
	{
		static ClassT s_Instance;
		return &s_Instance;
	}

protected:
	ClassT() : Class(typeid(Method).name())
	{
		using T = Method;
		m_Fields.push_back(Field{.Name = "Name", .Type = ""+Class::Get<String>()->getName()+"", .Access = ::New<FuncT<Raw<decltype(T::Name)>,Raw<T> >>([](Raw<T> _0) { return &_0->Name; }), });
		m_Fields.push_back(Field{.Name = "Type", .Type = ""+Class::Get<String>()->getName()+"", .Access = ::New<FuncT<Raw<decltype(T::Type)>,Raw<T> >>([](Raw<T> _0) { return &_0->Type; }), });
		m_Fields.push_back(Field{.Name = "Return", .Type = ""+Class::Get<String>()->getName()+"", .Access = ::New<FuncT<Raw<decltype(T::Return)>,Raw<T> >>([](Raw<T> _0) { return &_0->Return; }), });
		m_Fields.push_back(Field{.Name = "Access", .Type = ""+Class::Get<Ref<Func>>()->getName()+"", .Access = ::New<FuncT<Raw<decltype(T::Access)>,Raw<T> >>([](Raw<T> _0) { return &_0->Access; }), });
	}
};

template<>
class ClassT<Class> : public Class
{
public:
	static Raw<ClassT> Get()
	{
		static ClassT s_Instance;
		return &s_Instance;
	}

protected:
	ClassT() : Class(typeid(Class).name())
	{
		using T = Class;
		m_Methods.push_back(Method{.Name = "getName", .Type = "", .Return = Class::Get<String>()->getName(), .Access = ::New<FuncT<String,Raw<T> >>([](Raw<T> _0)->String { return _0->getName(); }), });
		m_Methods.push_back(Method{.Name = "getBases", .Type = "", .Return = Class::Get<ListView<const Raw<Class>>>()->getName(), .Access = ::New<FuncT<ListView<const Raw<Class>>,Raw<T> >>([](Raw<T> _0)->ListView<const Raw<Class>> { return _0->getBases(); }), });
		m_Methods.push_back(Method{.Name = "getFields", .Type = "", .Return = Class::Get<ListView<const Field>>()->getName(), .Access = ::New<FuncT<ListView<const Field>,Raw<T> >>([](Raw<T> _0)->ListView<const Field> { return _0->getFields(); }), });
		m_Methods.push_back(Method{.Name = "getMethods", .Type = "", .Return = Class::Get<ListView<const Method>>()->getName(), .Access = ::New<FuncT<ListView<const Method>,Raw<T> >>([](Raw<T> _0)->ListView<const Method> { return _0->getMethods(); }), });
		m_Methods.push_back(Method{.Name = "getField", .Type = "|"+Class::Get<String>()->getName()+"|"+Class::Get<Field &>()->getName()+"", .Return = Class::Get<bool>()->getName(), .Access = ::New<FuncT<bool,Raw<T>,String,Field & >>([](Raw<T> _0,String _1,Field & _2)->bool { return _0->getField(_1,_2); }), });
		m_Methods.push_back(Method{.Name = "getMethod", .Type = "|"+Class::Get<String>()->getName()+"|"+Class::Get<Method &>()->getName()+"", .Return = Class::Get<bool>()->getName(), .Access = ::New<FuncT<bool,Raw<T>,String,Method & >>([](Raw<T> _0,String _1,Method & _2)->bool { return _0->getMethod(_1,_2); }), });
		m_Methods.push_back(Method{.Name = "getSFields", .Type = "", .Return = Class::Get<ListView<const Field>>()->getName(), .Access = ::New<FuncT<ListView<const Field>,Raw<T> >>([](Raw<T> _0)->ListView<const Field> { return _0->getSFields(); }), });
		m_Methods.push_back(Method{.Name = "getSMethods", .Type = "", .Return = Class::Get<ListView<const Method>>()->getName(), .Access = ::New<FuncT<ListView<const Method>,Raw<T> >>([](Raw<T> _0)->ListView<const Method> { return _0->getSMethods(); }), });
		m_Methods.push_back(Method{.Name = "getSField", .Type = "|"+Class::Get<String>()->getName()+"|"+Class::Get<Field &>()->getName()+"", .Return = Class::Get<bool>()->getName(), .Access = ::New<FuncT<bool,Raw<T>,String,Field & >>([](Raw<T> _0,String _1,Field & _2)->bool { return _0->getSField(_1,_2); }), });
		m_Methods.push_back(Method{.Name = "getSMethod", .Type = "|"+Class::Get<String>()->getName()+"|"+Class::Get<Method &>()->getName()+"", .Return = Class::Get<bool>()->getName(), .Access = ::New<FuncT<bool,Raw<T>,String,Method & >>([](Raw<T> _0,String _1,Method & _2)->bool { return _0->getSMethod(_1,_2); }), });
	}
};

template<>
class ClassT<ClassT<void>> : public Class
{
public:
	static Raw<ClassT> Get()
	{
		static ClassT s_Instance;
		return &s_Instance;
	}

protected:
	ClassT() : Class(typeid(ClassT<void>).name())
	{
		using T = ClassT<void>;
		m_Bases.push_back(ClassT<Class>::Get());
		m_SMethods.push_back(Method{.Name = "Get", .Type = "", .Return = Class::Get<Raw<ClassT<void>>>()->getName(), .Access = ::New<FuncT<Raw<ClassT<void>> >>([]()->Raw<ClassT<void>> { return T::Get(); }), });
	}
};
