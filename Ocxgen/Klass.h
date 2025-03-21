#pragma once
/*=================================================
* Copyright @ 2020-2025 ChivenZhang.
* All Rights Reserved.
* =====================Note=========================
*
*
* ====================History=======================
* Created by ChivenZhang at 2025/03/20 22:56:03.
*
* =================================================*/

#define META_FILE "$FILE$"
#define META_CLASS "$CLASS$"
#define META_BASE "$BASE$"
#define META_FIELD "$FIELD$"
#define META_METHOD "$METHOD$"
#define META_SFIELD "$SFIELD$"
#define META_SMETHOD "$SMETHOD$"
#define META_NAME "$NAME$"
#define META_TYPE "$TYPE$"
#define META_RETURN "$RETURN$"
#define META_ARGS_TYPE "$ARGS_TYPE$"
#define META_ARGS_CALL "$ARGS_CALL$"
#define META_ARGS_PASS "$ARGS_PASS$"

#define TEMPLATE_BASE R"(		m_Bases.push_back(ClassT<)" META_NAME R"(>::Get());
)"

#define TEMPLATE_FIELD R"(		m_Fields.push_back(Field{.Name = ")" META_NAME R"(", .Type = ")" META_TYPE R"(", .Access = ::New<CallT<Raw<decltype(T::)" META_NAME R"()>,Raw<T>>>([](auto _0) { return &_0->)" META_NAME R"(; }), } );
)"

#define TEMPLATE_SFIELD R"(		m_SFields.push_back(Field{.Name = ")" META_NAME R"(", .Type = ")" META_TYPE R"(", .Access = ::New<CallT<Raw<decltype(T::)" META_NAME R"()>>>([]() { return &T::)" META_NAME R"(; }), } );
)"

/*
 *	META_TYPE : "T1,T2,T3,..."
 *	META_ARGS_TYPE: empty or ",T1,T2,T3,..."
 *	META_ARGS_CALL:	empty or ",auto _1,auto _2,auto _3,..."
 *	META_ARGS_PASS: empty or ",_1,_2,_3,..."
 */
#define TEMPLATE_METHOD R"(		m_Methods.push_back(Method{.Name = ")" META_NAME R"(", .Type = "()" META_TYPE ")" R"(", .Access = ::New<CallT<)" META_RETURN ",Raw<T>" META_ARGS_TYPE R"(>>([](auto _0)" META_ARGS_CALL R"() { return _0->)" META_NAME "(" META_ARGS_PASS R"(); }), } );
)"

/*
 *	META_TYPE : "T1,T2,T3,..."
 *	META_ARGS_TYPE: empty or ",T1,T2,T3,..."
 *	META_ARGS_CALL:	empty or "auto _1,auto _2,auto _3,..."
 *	META_ARGS_PASS: empty or "_1,_2,_3,..."
 */
#define TEMPLATE_SMETHOD R"(		m_SMethods.push_back(Method{.Name = ")" META_NAME R"(", .Type = "()" META_TYPE ")" R"(", .Access = ::New<CallT<)" META_RETURN META_ARGS_TYPE R"(>>([]()" META_ARGS_CALL R"() { return T::)" META_NAME "(" META_ARGS_PASS R"(); }), } );
)"

#define TEMPLATE_FILE R"(

#pragma once
#include ")" META_FILE R"("
#ifndef META_)" META_CLASS R"(

template<>
class ClassT<)" META_CLASS R"(> : public Class
{
public:
	using T = )" META_CLASS R"(;

public:
	static Raw<Class> Get()
	{
		static ClassT s_Instance;
		return &s_Instance;
	}

	template<class... Args>
	static Ref<T> New(Args... args)
	{
		return Recycle::Get().create<T>(args...);
	}

	template<class F>
	static Raw<F> Get(String name, Raw<T> obj)
	{
		Field f;
		if (Get()->getField(name, f))
		{
			auto func = Cast<CallT<Raw<F>, Raw<T>>>(f.Access);
			if (func) return func->call(obj);
		}
		return Raw<F>();
	}

	template<class F>
	static bool Set(String name, Raw<T> obj, F const& value)
	{
		Field f;
		if (Get()->getField(name, f))
		{
			auto func = Cast<CallT<Raw<F>, Raw<T>>>(f.Access);
			if (func) *func->call(obj) = value;
			if (func) return true;
		}
		return false;
	}

	template<class R, class... Args>
	static R Call(String name, Raw<T> obj, Args... args)
	{
		Method m;
		if (Get()->getMethod(name, m))
		{
			auto func = Cast<CallT<R, Raw<T>, Args...>>(m.Access);
			if (func) return func->call(obj, std::forward<Args>(args)...);
		}
		throw std::runtime_error("Method not found");
	}

	template<class F>
	static Raw<F> GetStatic(String name)
	{
		Field f;
		if (Get()->getSField(name, f))
		{
			auto func = Cast<CallT<Raw<F>>>(f.Access);
			if (func) return func->call();
		}
		return Raw<F>();
	}

	template<class F>
	static bool SetStatic(String name, F const& value)
	{
		Field f;
		if (Get()->getSField(name, f))
		{
			auto func = Cast<CallT<Raw<F>>>(f.Access);
			if (func) *func->call() = value;
			if (func) return true;
		}
		return false;
	}

	template<class R, class... Args>
	static R CallStatic(String name, Args... args)
	{
		Method m;
		if (Get()->getSMethod(name, m))
		{
			auto func = Cast<CallT<R, Args...>>(m.Access);
			if (func) return func->call(std::forward<Args>(args)...);
		}
		throw std::runtime_error("Method not found");
	}

protected:
    ClassT() : Class(")" META_CLASS R"(")
    {
)" META_BASE R"(
)" META_FIELD R"(
)" META_SFIELD R"(
)" META_METHOD R"(
)" META_SMETHOD R"(
    }
};

#endif
)"