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

#define META_FILE "${FILE}"
#define META_CLASS "${CLASS}"
#define META_BASE "${BASE}"
#define META_FIELD "${FIELD}"
#define META_METHOD "${METHOD}"
#define META_SFIELD "${SFIELD}"
#define META_SMETHOD "${SMETHOD}"
#define META_NAME "${NAME}"
#define META_TYPE "${TYPE}"
#define META_RETURN "${RETURN}"
#define META_ARGS_TYPE "${ARGS_TYPE}"
#define META_ARGS_CALL "${ARGS_CALL}"
#define META_ARGS_PASS "${ARGS_PASS}"

#define TEMPLATE_INCLUDE R"(#pragma once
#include <OpenCX/Class.h>
#include ")" META_FILE R"("
)"

#define TEMPLATE_BASE R"(
		m_Bases.push_back(ClassT<)" META_NAME R"(>::Get());)"

#define TEMPLATE_FIELD R"(
		m_Fields.push_back(Field{.Name = ")" META_NAME R"(", .Type = ")" META_TYPE R"(", .Access = ::New<FuncT<Raw<decltype(T::)" META_NAME R"()>,Raw<T> >>([](Raw<T> _0) { return &_0->)" META_NAME R"(; }), });)"

#define TEMPLATE_SFIELD R"(
		m_SFields.push_back(Field{.Name = ")" META_NAME R"(", .Type = ")" META_TYPE R"(", .Access = ::New<FuncT<Raw<decltype(T::)" META_NAME R"()>>>([]() { return &T::)" META_NAME R"(; }), });)"

#define TEMPLATE_METHOD R"(
		m_Methods.push_back(Method{.Name = ")" META_NAME R"(", .Type = ")" META_TYPE R"(", .Return = ")" META_RETURN R"(", .Access = ::New<FuncT<)" META_RETURN ",Raw<T>" META_ARGS_TYPE R"( >>([](Raw<T> _0)" META_ARGS_CALL R"()->)" META_RETURN R"( { return _0->)" META_NAME "(" META_ARGS_PASS R"(); }), });)"

#define TEMPLATE_SMETHOD R"(
		m_SMethods.push_back(Method{.Name = ")" META_NAME R"(", .Type = ")" META_TYPE R"(", .Return = ")" META_RETURN R"(", .Access = ::New<FuncT<)" META_RETURN META_ARGS_TYPE R"( >>([]()" META_ARGS_CALL R"()->)" META_RETURN R"( { return T::)" META_NAME "(" META_ARGS_PASS R"(); }), });)"

#define TEMPLATE_FILE R"(
template<>
class ClassT<)" META_CLASS R"(> : public Class
{
public:
	static Raw<ClassT> Get()
	{
		static ClassT s_Instance;
		return &s_Instance;
	}

protected:
	ClassT() : Class(")" META_CLASS R"(")
	{
		using T = )" META_CLASS R"(; )" META_BASE META_FIELD META_SFIELD META_METHOD META_SMETHOD R"(
	}
};
)"