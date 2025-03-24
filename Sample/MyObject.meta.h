
#pragma once
#include <immintrin.h>
#include "MyObject.h"

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
class ClassT<Object> : public Class
{
public:
	using T = Object;

	static Raw<ClassT> Get()
	{
		static ClassT s_Instance;
		return &s_Instance;
	}

protected:
    ClassT() : Class("Object")
    {


		m_Methods.push_back(Method{.Name = "getClass", .Type = "", .Return = "Raw<Class>", .Access = ::New<FuncT<Raw<Class>,Raw<T>>>([](Raw<T> _0)->Raw<Class> { return _0->getClass(); }), });



    }
};


template<>
class ClassT<Recycle> : public Class
{
public:
	using T = Recycle;

	static Raw<ClassT> Get()
	{
		static ClassT s_Instance;
		return &s_Instance;
	}

protected:
    ClassT() : Class("Recycle")
    {


		m_Methods.push_back(Method{.Name = "mark", .Type = "|float", .Return = "void", .Access = ::New<FuncT<void,Raw<T>,float>>([](Raw<T> _0,float _1)->void { return _0->mark(_1); }), });
		m_Methods.push_back(Method{.Name = "sweep", .Type = "|float", .Return = "void", .Access = ::New<FuncT<void,Raw<T>,float>>([](Raw<T> _0,float _1)->void { return _0->sweep(_1); }), });
		m_Methods.push_back(Method{.Name = "clear", .Type = "", .Return = "void", .Access = ::New<FuncT<void,Raw<T>>>([](Raw<T> _0)->void { return _0->clear(); }), });


		m_SMethods.push_back(Method{.Name = "Get", .Type = "", .Return = "Recycle &", .Access = ::New<FuncT<Recycle &>>([]()->Recycle & { return T::Get(); }), });

    }
};


template<>
class ClassT<RecycleBin> : public Class
{
public:
	using T = RecycleBin;

	static Raw<ClassT> Get()
	{
		static ClassT s_Instance;
		return &s_Instance;
	}

protected:
    ClassT() : Class("RecycleBin")
    {

		m_Fields.push_back(Field{.Name = "Value", .Type = "Ref<Object>", .Access = ::New<FuncT<Raw<decltype(T::Value)>,Raw<T>>>([](Raw<T> _0) { return &_0->Value; }), } );
		m_Fields.push_back(Field{.Name = "Flags", .Type = "uint32_t", .Access = ::New<FuncT<Raw<decltype(T::Flags)>,Raw<T>>>([](Raw<T> _0) { return &_0->Flags; }), } );




    }
};


template<>
class ClassT<__m128d> : public Class
{
public:
	using T = __m128d;

	static Raw<ClassT> Get()
	{
		static ClassT s_Instance;
		return &s_Instance;
	}

protected:
    ClassT() : Class("__m128d")
    {

		m_Fields.push_back(Field{.Name = "m128d_f64", .Type = "double[2]", .Access = ::New<FuncT<Raw<decltype(T::m128d_f64)>,Raw<T>>>([](Raw<T> _0) { return &_0->m128d_f64; }), } );




    }
};


template<>
class ClassT<__m512d> : public Class
{
public:
	using T = __m512d;

	static Raw<ClassT> Get()
	{
		static ClassT s_Instance;
		return &s_Instance;
	}

protected:
    ClassT() : Class("__m512d")
    {

		m_Fields.push_back(Field{.Name = "m512d_f64", .Type = "double[8]", .Access = ::New<FuncT<Raw<decltype(T::m512d_f64)>,Raw<T>>>([](Raw<T> _0) { return &_0->m512d_f64; }), } );




    }
};

