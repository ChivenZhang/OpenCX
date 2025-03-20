/*=================================================
* Copyright @ 2020-2025 ChivenZhang.
* All Rights Reserved.
* =====================Note=========================
*
*
* ====================History=======================
* Created by ChivenZhang at 2025/03/20 22:07:38.
*
* =================================================*/
#include "Recycle.h"

Recycle& Recycle::Get()
{
	static Recycle s_Instance;
	return s_Instance;
}

void Recycle::mark(float time)
{
}

void Recycle::sweep(float time)
{
}

void Recycle::clear()
{
	m_ItemList.clear();
}
