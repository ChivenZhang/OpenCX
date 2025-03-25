#pragma once
#include <OpenCX/Class.h>
#include "Class.h"

template<>
class ClassT<Func> : public Class
{
public:
	using T = Func;

	static Raw<ClassT> Get()
	{
		static ClassT s_Instance;
		return &s_Instance;
	}

protected:
	ClassT() : Class("Func")
	{
	}
};

template<>
class ClassT<Field> : public Class
{
public:
	using T = Field;

	static Raw<ClassT> Get()
	{
		static ClassT s_Instance;
		return &s_Instance;
	}

protected:
	ClassT() : Class("Field")
	{
		m_Fields.push_back(Field{.Name = "Name", .Type = "String", .Access = ::New<FuncT<Raw<decltype(T::Name)>,Raw<T>>>([](Raw<T> _0) { return &_0->Name; }), } );
		m_Fields.push_back(Field{.Name = "Type", .Type = "String", .Access = ::New<FuncT<Raw<decltype(T::Type)>,Raw<T>>>([](Raw<T> _0) { return &_0->Type; }), } );
		m_Fields.push_back(Field{.Name = "Access", .Type = "Ref<Func>", .Access = ::New<FuncT<Raw<decltype(T::Access)>,Raw<T>>>([](Raw<T> _0) { return &_0->Access; }), } );
	}
};

template<>
class ClassT<Method> : public Class
{
public:
	using T = Method;

	static Raw<ClassT> Get()
	{
		static ClassT s_Instance;
		return &s_Instance;
	}

protected:
	ClassT() : Class("Method")
	{
		m_Fields.push_back(Field{.Name = "Name", .Type = "String", .Access = ::New<FuncT<Raw<decltype(T::Name)>,Raw<T>>>([](Raw<T> _0) { return &_0->Name; }), } );
		m_Fields.push_back(Field{.Name = "Type", .Type = "String", .Access = ::New<FuncT<Raw<decltype(T::Type)>,Raw<T>>>([](Raw<T> _0) { return &_0->Type; }), } );
		m_Fields.push_back(Field{.Name = "Return", .Type = "String", .Access = ::New<FuncT<Raw<decltype(T::Return)>,Raw<T>>>([](Raw<T> _0) { return &_0->Return; }), } );
		m_Fields.push_back(Field{.Name = "Access", .Type = "Ref<Func>", .Access = ::New<FuncT<Raw<decltype(T::Access)>,Raw<T>>>([](Raw<T> _0) { return &_0->Access; }), } );
	}
};

template<>
class ClassT<Class> : public Class
{
public:
	using T = Class;

	static Raw<ClassT> Get()
	{
		static ClassT s_Instance;
		return &s_Instance;
	}

protected:
	ClassT() : Class("Class")
	{
		m_Methods.push_back(Method{.Name = "getName", .Type = "", .Return = "String", .Access = ::New<FuncT<String,Raw<T>>>([](Raw<T> _0)->String { return _0->getName(); }), });
		m_Methods.push_back(Method{.Name = "getBases", .Type = "", .Return = "ListView<const Raw<Class>>", .Access = ::New<FuncT<ListView<const Raw<Class>>,Raw<T>>>([](Raw<T> _0)->ListView<const Raw<Class>> { return _0->getBases(); }), });
		m_Methods.push_back(Method{.Name = "getFields", .Type = "", .Return = "ListView<const Field>", .Access = ::New<FuncT<ListView<const Field>,Raw<T>>>([](Raw<T> _0)->ListView<const Field> { return _0->getFields(); }), });
		m_Methods.push_back(Method{.Name = "getMethods", .Type = "", .Return = "ListView<const Method>", .Access = ::New<FuncT<ListView<const Method>,Raw<T>>>([](Raw<T> _0)->ListView<const Method> { return _0->getMethods(); }), });
		m_Methods.push_back(Method{.Name = "getField", .Type = "|String|Field &", .Return = "bool", .Access = ::New<FuncT<bool,Raw<T>,String,Field &>>([](Raw<T> _0,String _1,Field & _2)->bool { return _0->getField(_1,_2); }), });
		m_Methods.push_back(Method{.Name = "getMethod", .Type = "|String|Method &", .Return = "bool", .Access = ::New<FuncT<bool,Raw<T>,String,Method &>>([](Raw<T> _0,String _1,Method & _2)->bool { return _0->getMethod(_1,_2); }), });
		m_Methods.push_back(Method{.Name = "getSFields", .Type = "", .Return = "ListView<const Field>", .Access = ::New<FuncT<ListView<const Field>,Raw<T>>>([](Raw<T> _0)->ListView<const Field> { return _0->getSFields(); }), });
		m_Methods.push_back(Method{.Name = "getSMethods", .Type = "", .Return = "ListView<const Method>", .Access = ::New<FuncT<ListView<const Method>,Raw<T>>>([](Raw<T> _0)->ListView<const Method> { return _0->getSMethods(); }), });
		m_Methods.push_back(Method{.Name = "getSField", .Type = "|String|Field &", .Return = "bool", .Access = ::New<FuncT<bool,Raw<T>,String,Field &>>([](Raw<T> _0,String _1,Field & _2)->bool { return _0->getSField(_1,_2); }), });
		m_Methods.push_back(Method{.Name = "getSMethod", .Type = "|String|Method &", .Return = "bool", .Access = ::New<FuncT<bool,Raw<T>,String,Method &>>([](Raw<T> _0,String _1,Method & _2)->bool { return _0->getSMethod(_1,_2); }), });
	}
};
