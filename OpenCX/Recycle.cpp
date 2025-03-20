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
