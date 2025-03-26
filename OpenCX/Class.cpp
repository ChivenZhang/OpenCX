/*=================================================
* Copyright @ 2020-2025 ChivenZhang.
* All Rights Reserved.
* =====================Note=========================
*
*
* ====================History=======================
* Created by ChivenZhang at 2025/03/26 23:42:38.
*
* =================================================*/
#include "Class.h"

String Class::SetClass(String const& name, Raw<Class> value)
{
	static Map<String, Raw<Class>> s_Classes;
	return s_Classes.emplace(name, value).first->first;
}
