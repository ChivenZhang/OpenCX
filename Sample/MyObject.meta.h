#pragma once
#include <OpenCX/Class.h>
#include "MyObject.h"

template<>
class ClassT<MyBase> : public Class
{
public:
	using T = MyBase;

	static Raw<ClassT> Get()
	{
		static ClassT s_Instance;
		return &s_Instance;
	}

protected:
    ClassT() : Class("MyBase")
    {



		m_SFields.push_back(Field{.Name = "Global1", .Type = "int", .Access = ::New<FuncT<Raw<decltype(T::Global1)>>>([]() { return &T::Global1; }), } );


    }
};

template<>
class ClassT<MyObject::SubObject> : public Class
{
public:
	using T = MyObject::SubObject;

	static Raw<ClassT> Get()
	{
		static ClassT s_Instance;
		return &s_Instance;
	}

protected:
    ClassT() : Class("MyObject::SubObject")
    {

		m_Fields.push_back(Field{.Name = "SubName", .Type = "int", .Access = ::New<FuncT<Raw<decltype(T::SubName)>,Raw<T>>>([](Raw<T> _0) { return &_0->SubName; }), } );


		m_SFields.push_back(Field{.Name = "SSubName", .Type = "const int", .Access = ::New<FuncT<Raw<decltype(T::SSubName)>>>([]() { return &T::SSubName; }), } );


    }
};

template<>
class ClassT<MyObject> : public Class
{
public:
	using T = MyObject;

	static Raw<ClassT> Get()
	{
		static ClassT s_Instance;
		return &s_Instance;
	}

protected:
    ClassT() : Class("MyObject")
    {
		m_Bases.push_back(ClassT<ObjectT<MyObject>>::Get());
		m_Bases.push_back(ClassT<Base2>::Get());
		m_Bases.push_back(ClassT<abc::foo>::Get());

		m_Fields.push_back(Field{.Name = "Name", .Type = "String", .Access = ::New<FuncT<Raw<decltype(T::Name)>,Raw<T>>>([](Raw<T> _0) { return &_0->Name; }), } );
		m_Fields.push_back(Field{.Name = "Name2", .Type = "String", .Access = ::New<FuncT<Raw<decltype(T::Name2)>,Raw<T>>>([](Raw<T> _0) { return &_0->Name2; }), } );

		m_Methods.push_back(Method{.Name = "Foo", .Type = "", .Return = "void", .Access = ::New<FuncT<void,Raw<T>>>([](Raw<T> _0)->void { return _0->Foo(); }), });
		m_Methods.push_back(Method{.Name = "Foo", .Type = "|String", .Return = "void", .Access = ::New<FuncT<void,Raw<T>,String>>([](Raw<T> _0,String _1)->void { return _0->Foo(_1); }), });
		m_Methods.push_back(Method{.Name = "Foo", .Type = "|String|float", .Return = "void", .Access = ::New<FuncT<void,Raw<T>,String,float>>([](Raw<T> _0,String _1,float _2)->void { return _0->Foo(_1,_2); }), });

		m_SFields.push_back(Field{.Name = "SName", .Type = "String", .Access = ::New<FuncT<Raw<decltype(T::SName)>>>([]() { return &T::SName; }), } );
		m_SFields.push_back(Field{.Name = "SName2", .Type = "String", .Access = ::New<FuncT<Raw<decltype(T::SName2)>>>([]() { return &T::SName2; }), } );

		m_SMethods.push_back(Method{.Name = "SFoo", .Type = "", .Return = "void", .Access = ::New<FuncT<void>>([]()->void { return T::SFoo(); }), });
		m_SMethods.push_back(Method{.Name = "SFoo", .Type = "|String", .Return = "void", .Access = ::New<FuncT<void,String>>([](String _1)->void { return T::SFoo(_1); }), });
		m_SMethods.push_back(Method{.Name = "SFoo", .Type = "|String|float", .Return = "void", .Access = ::New<FuncT<void,String,float>>([](String _1,float _2)->void { return T::SFoo(_1,_2); }), });

    }
};
