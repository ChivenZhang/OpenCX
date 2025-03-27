#pragma once
#include <OpenCX/Class.h>

template<>
class ClassT<__crt_locale_pointers> : public Class
{
public:
	static Raw<ClassT> Get()
	{
		static ClassT s_Instance;
		return &s_Instance;
	}

protected:
	ClassT() : Class(Class::SetClass<__crt_locale_pointers>(this))
	{
		using T = __crt_locale_pointers;
		m_Fields.push_back(Field{.Name = "locinfo", .Type = Class::Get<struct __crt_locale_data *>()->getName(), .Access = ::New<FuncT<Raw<decltype(T::locinfo)>,Raw<T> >>([](Raw<T> _0) { return &_0->locinfo; }), });
		m_Fields.push_back(Field{.Name = "mbcinfo", .Type = Class::Get<struct __crt_multibyte_data *>()->getName(), .Access = ::New<FuncT<Raw<decltype(T::mbcinfo)>,Raw<T> >>([](Raw<T> _0) { return &_0->mbcinfo; }), });
	}
};

template<>
class ClassT<_Mbstatet> : public Class
{
public:
	static Raw<ClassT> Get()
	{
		static ClassT s_Instance;
		return &s_Instance;
	}

protected:
	ClassT() : Class(Class::SetClass<_Mbstatet>(this))
	{
		using T = _Mbstatet;
		m_Fields.push_back(Field{.Name = "_Wchar", .Type = Class::Get<unsigned long>()->getName(), .Access = ::New<FuncT<Raw<decltype(T::_Wchar)>,Raw<T> >>([](Raw<T> _0) { return &_0->_Wchar; }), });
		m_Fields.push_back(Field{.Name = "_Byte", .Type = Class::Get<unsigned short>()->getName(), .Access = ::New<FuncT<Raw<decltype(T::_Byte)>,Raw<T> >>([](Raw<T> _0) { return &_0->_Byte; }), });
		m_Fields.push_back(Field{.Name = "_State", .Type = Class::Get<unsigned short>()->getName(), .Access = ::New<FuncT<Raw<decltype(T::_State)>,Raw<T> >>([](Raw<T> _0) { return &_0->_State; }), });
	}
};

template<>
class ClassT<_complex> : public Class
{
public:
	static Raw<ClassT> Get()
	{
		static ClassT s_Instance;
		return &s_Instance;
	}

protected:
	ClassT() : Class(Class::SetClass<_complex>(this))
	{
		using T = _complex;
		m_Fields.push_back(Field{.Name = "x", .Type = Class::Get<double>()->getName(), .Access = ::New<FuncT<Raw<decltype(T::x)>,Raw<T> >>([](Raw<T> _0) { return &_0->x; }), });
		m_Fields.push_back(Field{.Name = "y", .Type = Class::Get<double>()->getName(), .Access = ::New<FuncT<Raw<decltype(T::y)>,Raw<T> >>([](Raw<T> _0) { return &_0->y; }), });
	}
};

template<>
class ClassT<_Combined_type<float, double>> : public Class
{
public:
	static Raw<ClassT> Get()
	{
		static ClassT s_Instance;
		return &s_Instance;
	}

protected:
	ClassT() : Class(Class::SetClass<_Combined_type<float, double>>(this))
	{
		using T = _Combined_type<float, double>;
	}
};

template<>
class ClassT<_Combined_type<float, long double>> : public Class
{
public:
	static Raw<ClassT> Get()
	{
		static ClassT s_Instance;
		return &s_Instance;
	}

protected:
	ClassT() : Class(Class::SetClass<_Combined_type<float, long double>>(this))
	{
		using T = _Combined_type<float, long double>;
	}
};

template<>
class ClassT<_Real_widened<float, float>> : public Class
{
public:
	static Raw<ClassT> Get()
	{
		static ClassT s_Instance;
		return &s_Instance;
	}

protected:
	ClassT() : Class(Class::SetClass<_Real_widened<float, float>>(this))
	{
		using T = _Real_widened<float, float>;
	}
};

template<>
class ClassT<_Real_widened<float, double>> : public Class
{
public:
	static Raw<ClassT> Get()
	{
		static ClassT s_Instance;
		return &s_Instance;
	}

protected:
	ClassT() : Class(Class::SetClass<_Real_widened<float, double>>(this))
	{
		using T = _Real_widened<float, double>;
	}
};

template<>
class ClassT<_Real_widened<double, float>> : public Class
{
public:
	static Raw<ClassT> Get()
	{
		static ClassT s_Instance;
		return &s_Instance;
	}

protected:
	ClassT() : Class(Class::SetClass<_Real_widened<double, float>>(this))
	{
		using T = _Real_widened<double, float>;
	}
};

template<>
class ClassT<_Real_widened<double, double>> : public Class
{
public:
	static Raw<ClassT> Get()
	{
		static ClassT s_Instance;
		return &s_Instance;
	}

protected:
	ClassT() : Class(Class::SetClass<_Real_widened<double, double>>(this))
	{
		using T = _Real_widened<double, double>;
	}
};

template<>
class ClassT<_Real_type<float>> : public Class
{
public:
	static Raw<ClassT> Get()
	{
		static ClassT s_Instance;
		return &s_Instance;
	}

protected:
	ClassT() : Class(Class::SetClass<_Real_type<float>>(this))
	{
		using T = _Real_type<float>;
	}
};

template<>
class ClassT<_Real_type<long double>> : public Class
{
public:
	static Raw<ClassT> Get()
	{
		static ClassT s_Instance;
		return &s_Instance;
	}

protected:
	ClassT() : Class(Class::SetClass<_Real_type<long double>>(this))
	{
		using T = _Real_type<long double>;
	}
};

template<>
class ClassT<_ldiv_t> : public Class
{
public:
	static Raw<ClassT> Get()
	{
		static ClassT s_Instance;
		return &s_Instance;
	}

protected:
	ClassT() : Class(Class::SetClass<_ldiv_t>(this))
	{
		using T = _ldiv_t;
		m_Fields.push_back(Field{.Name = "quot", .Type = Class::Get<long>()->getName(), .Access = ::New<FuncT<Raw<decltype(T::quot)>,Raw<T> >>([](Raw<T> _0) { return &_0->quot; }), });
		m_Fields.push_back(Field{.Name = "rem", .Type = Class::Get<long>()->getName(), .Access = ::New<FuncT<Raw<decltype(T::rem)>,Raw<T> >>([](Raw<T> _0) { return &_0->rem; }), });
	}
};

template<>
class ClassT<_lldiv_t> : public Class
{
public:
	static Raw<ClassT> Get()
	{
		static ClassT s_Instance;
		return &s_Instance;
	}

protected:
	ClassT() : Class(Class::SetClass<_lldiv_t>(this))
	{
		using T = _lldiv_t;
		m_Fields.push_back(Field{.Name = "quot", .Type = Class::Get<long long>()->getName(), .Access = ::New<FuncT<Raw<decltype(T::quot)>,Raw<T> >>([](Raw<T> _0) { return &_0->quot; }), });
		m_Fields.push_back(Field{.Name = "rem", .Type = Class::Get<long long>()->getName(), .Access = ::New<FuncT<Raw<decltype(T::rem)>,Raw<T> >>([](Raw<T> _0) { return &_0->rem; }), });
	}
};

template<>
class ClassT<_LDOUBLE> : public Class
{
public:
	static Raw<ClassT> Get()
	{
		static ClassT s_Instance;
		return &s_Instance;
	}

protected:
	ClassT() : Class(Class::SetClass<_LDOUBLE>(this))
	{
		using T = _LDOUBLE;
		m_Fields.push_back(Field{.Name = "ld", .Type = Class::Get<unsigned char[10]>()->getName(), .Access = ::New<FuncT<Raw<decltype(T::ld)>,Raw<T> >>([](Raw<T> _0) { return &_0->ld; }), });
	}
};

template<>
class ClassT<_CRT_DOUBLE> : public Class
{
public:
	static Raw<ClassT> Get()
	{
		static ClassT s_Instance;
		return &s_Instance;
	}

protected:
	ClassT() : Class(Class::SetClass<_CRT_DOUBLE>(this))
	{
		using T = _CRT_DOUBLE;
		m_Fields.push_back(Field{.Name = "x", .Type = Class::Get<double>()->getName(), .Access = ::New<FuncT<Raw<decltype(T::x)>,Raw<T> >>([](Raw<T> _0) { return &_0->x; }), });
	}
};

template<>
class ClassT<_CRT_FLOAT> : public Class
{
public:
	static Raw<ClassT> Get()
	{
		static ClassT s_Instance;
		return &s_Instance;
	}

protected:
	ClassT() : Class(Class::SetClass<_CRT_FLOAT>(this))
	{
		using T = _CRT_FLOAT;
		m_Fields.push_back(Field{.Name = "f", .Type = Class::Get<float>()->getName(), .Access = ::New<FuncT<Raw<decltype(T::f)>,Raw<T> >>([](Raw<T> _0) { return &_0->f; }), });
	}
};

template<>
class ClassT<_LONGDOUBLE> : public Class
{
public:
	static Raw<ClassT> Get()
	{
		static ClassT s_Instance;
		return &s_Instance;
	}

protected:
	ClassT() : Class(Class::SetClass<_LONGDOUBLE>(this))
	{
		using T = _LONGDOUBLE;
		m_Fields.push_back(Field{.Name = "x", .Type = Class::Get<long double>()->getName(), .Access = ::New<FuncT<Raw<decltype(T::x)>,Raw<T> >>([](Raw<T> _0) { return &_0->x; }), });
	}
};

template<>
class ClassT<_LDBL12> : public Class
{
public:
	static Raw<ClassT> Get()
	{
		static ClassT s_Instance;
		return &s_Instance;
	}

protected:
	ClassT() : Class(Class::SetClass<_LDBL12>(this))
	{
		using T = _LDBL12;
		m_Fields.push_back(Field{.Name = "ld12", .Type = Class::Get<unsigned char[12]>()->getName(), .Access = ::New<FuncT<Raw<decltype(T::ld12)>,Raw<T> >>([](Raw<T> _0) { return &_0->ld12; }), });
	}
};

template<>
class ClassT<std::_Make_signed2<1>> : public Class
{
public:
	static Raw<ClassT> Get()
	{
		static ClassT s_Instance;
		return &s_Instance;
	}

protected:
	ClassT() : Class(Class::SetClass<std::_Make_signed2<1>>(this))
	{
		using T = std::_Make_signed2<1>;
	}
};

template<>
class ClassT<std::_Make_signed2<2>> : public Class
{
public:
	static Raw<ClassT> Get()
	{
		static ClassT s_Instance;
		return &s_Instance;
	}

protected:
	ClassT() : Class(Class::SetClass<std::_Make_signed2<2>>(this))
	{
		using T = std::_Make_signed2<2>;
	}
};

template<>
class ClassT<std::_Make_signed2<4>> : public Class
{
public:
	static Raw<ClassT> Get()
	{
		static ClassT s_Instance;
		return &s_Instance;
	}

protected:
	ClassT() : Class(Class::SetClass<std::_Make_signed2<4>>(this))
	{
		using T = std::_Make_signed2<4>;
	}
};

template<>
class ClassT<std::_Make_signed2<8>> : public Class
{
public:
	static Raw<ClassT> Get()
	{
		static ClassT s_Instance;
		return &s_Instance;
	}

protected:
	ClassT() : Class(Class::SetClass<std::_Make_signed2<8>>(this))
	{
		using T = std::_Make_signed2<8>;
	}
};

template<>
class ClassT<std::_Make_unsigned2<1>> : public Class
{
public:
	static Raw<ClassT> Get()
	{
		static ClassT s_Instance;
		return &s_Instance;
	}

protected:
	ClassT() : Class(Class::SetClass<std::_Make_unsigned2<1>>(this))
	{
		using T = std::_Make_unsigned2<1>;
	}
};

template<>
class ClassT<std::_Make_unsigned2<2>> : public Class
{
public:
	static Raw<ClassT> Get()
	{
		static ClassT s_Instance;
		return &s_Instance;
	}

protected:
	ClassT() : Class(Class::SetClass<std::_Make_unsigned2<2>>(this))
	{
		using T = std::_Make_unsigned2<2>;
	}
};

template<>
class ClassT<std::_Make_unsigned2<4>> : public Class
{
public:
	static Raw<ClassT> Get()
	{
		static ClassT s_Instance;
		return &s_Instance;
	}

protected:
	ClassT() : Class(Class::SetClass<std::_Make_unsigned2<4>>(this))
	{
		using T = std::_Make_unsigned2<4>;
	}
};

template<>
class ClassT<std::_Make_unsigned2<8>> : public Class
{
public:
	static Raw<ClassT> Get()
	{
		static ClassT s_Instance;
		return &s_Instance;
	}

protected:
	ClassT() : Class(Class::SetClass<std::_Make_unsigned2<8>>(this))
	{
		using T = std::_Make_unsigned2<8>;
	}
};

template<>
class ClassT<std::_Maximum<>> : public Class
{
public:
	static Raw<ClassT> Get()
	{
		static ClassT s_Instance;
		return &s_Instance;
	}

protected:
	ClassT() : Class(Class::SetClass<std::_Maximum<>>(this))
	{
		using T = std::_Maximum<>;
		m_Bases.push_back(ClassT<std::integral_constant<unsigned long long, 0>>::Get());
	}
};

template<>
class ClassT<std::common_type<>> : public Class
{
public:
	static Raw<ClassT> Get()
	{
		static ClassT s_Instance;
		return &s_Instance;
	}

protected:
	ClassT() : Class(Class::SetClass<std::common_type<>>(this))
	{
		using T = std::common_type<>;
	}
};

template<>
class ClassT<std::common_reference<>> : public Class
{
public:
	static Raw<ClassT> Get()
	{
		static ClassT s_Instance;
		return &s_Instance;
	}

protected:
	ClassT() : Class(Class::SetClass<std::common_reference<>>(this))
	{
		using T = std::common_reference<>;
	}
};

template<>
class ClassT<std::_Invoker_functor> : public Class
{
public:
	static Raw<ClassT> Get()
	{
		static ClassT s_Instance;
		return &s_Instance;
	}

protected:
	ClassT() : Class(Class::SetClass<std::_Invoker_functor>(this))
	{
		using T = std::_Invoker_functor;
	}
};

template<>
class ClassT<std::_Invoker_pmf_object> : public Class
{
public:
	static Raw<ClassT> Get()
	{
		static ClassT s_Instance;
		return &s_Instance;
	}

protected:
	ClassT() : Class(Class::SetClass<std::_Invoker_pmf_object>(this))
	{
		using T = std::_Invoker_pmf_object;
	}
};

template<>
class ClassT<std::_Invoker_pmf_refwrap> : public Class
{
public:
	static Raw<ClassT> Get()
	{
		static ClassT s_Instance;
		return &s_Instance;
	}

protected:
	ClassT() : Class(Class::SetClass<std::_Invoker_pmf_refwrap>(this))
	{
		using T = std::_Invoker_pmf_refwrap;
	}
};

template<>
class ClassT<std::_Invoker_pmf_pointer> : public Class
{
public:
	static Raw<ClassT> Get()
	{
		static ClassT s_Instance;
		return &s_Instance;
	}

protected:
	ClassT() : Class(Class::SetClass<std::_Invoker_pmf_pointer>(this))
	{
		using T = std::_Invoker_pmf_pointer;
	}
};

template<>
class ClassT<std::_Invoker_pmd_object> : public Class
{
public:
	static Raw<ClassT> Get()
	{
		static ClassT s_Instance;
		return &s_Instance;
	}

protected:
	ClassT() : Class(Class::SetClass<std::_Invoker_pmd_object>(this))
	{
		using T = std::_Invoker_pmd_object;
	}
};

template<>
class ClassT<std::_Invoker_pmd_refwrap> : public Class
{
public:
	static Raw<ClassT> Get()
	{
		static ClassT s_Instance;
		return &s_Instance;
	}

protected:
	ClassT() : Class(Class::SetClass<std::_Invoker_pmd_refwrap>(this))
	{
		using T = std::_Invoker_pmd_refwrap;
	}
};

template<>
class ClassT<std::_Invoker_pmd_pointer> : public Class
{
public:
	static Raw<ClassT> Get()
	{
		static ClassT s_Instance;
		return &s_Instance;
	}

protected:
	ClassT() : Class(Class::SetClass<std::_Invoker_pmd_pointer>(this))
	{
		using T = std::_Invoker_pmd_pointer;
	}
};

template<>
class ClassT<std::hash<float>> : public Class
{
public:
	static Raw<ClassT> Get()
	{
		static ClassT s_Instance;
		return &s_Instance;
	}

protected:
	ClassT() : Class(Class::SetClass<std::hash<float>>(this))
	{
		using T = std::hash<float>;
		m_SMethods.push_back(Method{.Name = "operator()", .Type = "|"+Class::Get<const float>()->getName()+"", .Return = Class::Get<size_t>()->getName(), .Access = ::New<FuncT<size_t,const float >>([](const float _1)->size_t { return T::operator()(_1); }), });
	}
};

template<>
class ClassT<std::hash<double>> : public Class
{
public:
	static Raw<ClassT> Get()
	{
		static ClassT s_Instance;
		return &s_Instance;
	}

protected:
	ClassT() : Class(Class::SetClass<std::hash<double>>(this))
	{
		using T = std::hash<double>;
		m_SMethods.push_back(Method{.Name = "operator()", .Type = "|"+Class::Get<const double>()->getName()+"", .Return = Class::Get<size_t>()->getName(), .Access = ::New<FuncT<size_t,const double >>([](const double _1)->size_t { return T::operator()(_1); }), });
	}
};

template<>
class ClassT<std::hash<long double>> : public Class
{
public:
	static Raw<ClassT> Get()
	{
		static ClassT s_Instance;
		return &s_Instance;
	}

protected:
	ClassT() : Class(Class::SetClass<std::hash<long double>>(this))
	{
		using T = std::hash<long double>;
		m_SMethods.push_back(Method{.Name = "operator()", .Type = "|"+Class::Get<const long double>()->getName()+"", .Return = Class::Get<size_t>()->getName(), .Access = ::New<FuncT<size_t,const long double >>([](const long double _1)->size_t { return T::operator()(_1); }), });
	}
};

template<>
class ClassT<std::hash<nullptr_t>> : public Class
{
public:
	static Raw<ClassT> Get()
	{
		static ClassT s_Instance;
		return &s_Instance;
	}

protected:
	ClassT() : Class(Class::SetClass<std::hash<nullptr_t>>(this))
	{
		using T = std::hash<nullptr_t>;
		m_SMethods.push_back(Method{.Name = "operator()", .Type = "|"+Class::Get<nullptr_t>()->getName()+"", .Return = Class::Get<size_t>()->getName(), .Access = ::New<FuncT<size_t,nullptr_t >>([](nullptr_t _1)->size_t { return T::operator()(_1); }), });
	}
};

template<>
class ClassT<std::less<void>> : public Class
{
public:
	static Raw<ClassT> Get()
	{
		static ClassT s_Instance;
		return &s_Instance;
	}

protected:
	ClassT() : Class(Class::SetClass<std::less<void>>(this))
	{
		using T = std::less<void>;
	}
};

template<>
class ClassT<std::_Floating_type_traits<float>> : public Class
{
public:
	static Raw<ClassT> Get()
	{
		static ClassT s_Instance;
		return &s_Instance;
	}

protected:
	ClassT() : Class(Class::SetClass<std::_Floating_type_traits<float>>(this))
	{
		using T = std::_Floating_type_traits<float>;
	}
};

template<>
class ClassT<std::_Floating_type_traits<double>> : public Class
{
public:
	static Raw<ClassT> Get()
	{
		static ClassT s_Instance;
		return &s_Instance;
	}

protected:
	ClassT() : Class(Class::SetClass<std::_Floating_type_traits<double>>(this))
	{
		using T = std::_Floating_type_traits<double>;
	}
};

template<>
class ClassT<std::_Floating_type_traits<long double>> : public Class
{
public:
	static Raw<ClassT> Get()
	{
		static ClassT s_Instance;
		return &s_Instance;
	}

protected:
	ClassT() : Class(Class::SetClass<std::_Floating_type_traits<long double>>(this))
	{
		using T = std::_Floating_type_traits<long double>;
		m_Bases.push_back(ClassT<std::_Floating_type_traits<double>>::Get());
	}
};

template<>
class ClassT<_wfinddata32i64_t> : public Class
{
public:
	static Raw<ClassT> Get()
	{
		static ClassT s_Instance;
		return &s_Instance;
	}

protected:
	ClassT() : Class(Class::SetClass<_wfinddata32i64_t>(this))
	{
		using T = _wfinddata32i64_t;
		m_Fields.push_back(Field{.Name = "attrib", .Type = Class::Get<unsigned int>()->getName(), .Access = ::New<FuncT<Raw<decltype(T::attrib)>,Raw<T> >>([](Raw<T> _0) { return &_0->attrib; }), });
		m_Fields.push_back(Field{.Name = "time_create", .Type = Class::Get<__time32_t>()->getName(), .Access = ::New<FuncT<Raw<decltype(T::time_create)>,Raw<T> >>([](Raw<T> _0) { return &_0->time_create; }), });
		m_Fields.push_back(Field{.Name = "time_access", .Type = Class::Get<__time32_t>()->getName(), .Access = ::New<FuncT<Raw<decltype(T::time_access)>,Raw<T> >>([](Raw<T> _0) { return &_0->time_access; }), });
		m_Fields.push_back(Field{.Name = "time_write", .Type = Class::Get<__time32_t>()->getName(), .Access = ::New<FuncT<Raw<decltype(T::time_write)>,Raw<T> >>([](Raw<T> _0) { return &_0->time_write; }), });
		m_Fields.push_back(Field{.Name = "size", .Type = Class::Get<long long>()->getName(), .Access = ::New<FuncT<Raw<decltype(T::size)>,Raw<T> >>([](Raw<T> _0) { return &_0->size; }), });
		m_Fields.push_back(Field{.Name = "name", .Type = Class::Get<wchar_t[260]>()->getName(), .Access = ::New<FuncT<Raw<decltype(T::name)>,Raw<T> >>([](Raw<T> _0) { return &_0->name; }), });
	}
};

template<>
class ClassT<_wfinddata64i32_t> : public Class
{
public:
	static Raw<ClassT> Get()
	{
		static ClassT s_Instance;
		return &s_Instance;
	}

protected:
	ClassT() : Class(Class::SetClass<_wfinddata64i32_t>(this))
	{
		using T = _wfinddata64i32_t;
		m_Fields.push_back(Field{.Name = "attrib", .Type = Class::Get<unsigned int>()->getName(), .Access = ::New<FuncT<Raw<decltype(T::attrib)>,Raw<T> >>([](Raw<T> _0) { return &_0->attrib; }), });
		m_Fields.push_back(Field{.Name = "time_create", .Type = Class::Get<__time64_t>()->getName(), .Access = ::New<FuncT<Raw<decltype(T::time_create)>,Raw<T> >>([](Raw<T> _0) { return &_0->time_create; }), });
		m_Fields.push_back(Field{.Name = "time_access", .Type = Class::Get<__time64_t>()->getName(), .Access = ::New<FuncT<Raw<decltype(T::time_access)>,Raw<T> >>([](Raw<T> _0) { return &_0->time_access; }), });
		m_Fields.push_back(Field{.Name = "time_write", .Type = Class::Get<__time64_t>()->getName(), .Access = ::New<FuncT<Raw<decltype(T::time_write)>,Raw<T> >>([](Raw<T> _0) { return &_0->time_write; }), });
		m_Fields.push_back(Field{.Name = "size", .Type = Class::Get<_fsize_t>()->getName(), .Access = ::New<FuncT<Raw<decltype(T::size)>,Raw<T> >>([](Raw<T> _0) { return &_0->size; }), });
		m_Fields.push_back(Field{.Name = "name", .Type = Class::Get<wchar_t[260]>()->getName(), .Access = ::New<FuncT<Raw<decltype(T::name)>,Raw<T> >>([](Raw<T> _0) { return &_0->name; }), });
	}
};

template<>
class ClassT<_wfinddata64_t> : public Class
{
public:
	static Raw<ClassT> Get()
	{
		static ClassT s_Instance;
		return &s_Instance;
	}

protected:
	ClassT() : Class(Class::SetClass<_wfinddata64_t>(this))
	{
		using T = _wfinddata64_t;
		m_Fields.push_back(Field{.Name = "attrib", .Type = Class::Get<unsigned int>()->getName(), .Access = ::New<FuncT<Raw<decltype(T::attrib)>,Raw<T> >>([](Raw<T> _0) { return &_0->attrib; }), });
		m_Fields.push_back(Field{.Name = "time_create", .Type = Class::Get<__time64_t>()->getName(), .Access = ::New<FuncT<Raw<decltype(T::time_create)>,Raw<T> >>([](Raw<T> _0) { return &_0->time_create; }), });
		m_Fields.push_back(Field{.Name = "time_access", .Type = Class::Get<__time64_t>()->getName(), .Access = ::New<FuncT<Raw<decltype(T::time_access)>,Raw<T> >>([](Raw<T> _0) { return &_0->time_access; }), });
		m_Fields.push_back(Field{.Name = "time_write", .Type = Class::Get<__time64_t>()->getName(), .Access = ::New<FuncT<Raw<decltype(T::time_write)>,Raw<T> >>([](Raw<T> _0) { return &_0->time_write; }), });
		m_Fields.push_back(Field{.Name = "size", .Type = Class::Get<long long>()->getName(), .Access = ::New<FuncT<Raw<decltype(T::size)>,Raw<T> >>([](Raw<T> _0) { return &_0->size; }), });
		m_Fields.push_back(Field{.Name = "name", .Type = Class::Get<wchar_t[260]>()->getName(), .Access = ::New<FuncT<Raw<decltype(T::name)>,Raw<T> >>([](Raw<T> _0) { return &_0->name; }), });
	}
};

template<>
class ClassT<_stat32i64> : public Class
{
public:
	static Raw<ClassT> Get()
	{
		static ClassT s_Instance;
		return &s_Instance;
	}

protected:
	ClassT() : Class(Class::SetClass<_stat32i64>(this))
	{
		using T = _stat32i64;
		m_Fields.push_back(Field{.Name = "st_dev", .Type = Class::Get<_dev_t>()->getName(), .Access = ::New<FuncT<Raw<decltype(T::st_dev)>,Raw<T> >>([](Raw<T> _0) { return &_0->st_dev; }), });
		m_Fields.push_back(Field{.Name = "st_ino", .Type = Class::Get<_ino_t>()->getName(), .Access = ::New<FuncT<Raw<decltype(T::st_ino)>,Raw<T> >>([](Raw<T> _0) { return &_0->st_ino; }), });
		m_Fields.push_back(Field{.Name = "st_mode", .Type = Class::Get<unsigned short>()->getName(), .Access = ::New<FuncT<Raw<decltype(T::st_mode)>,Raw<T> >>([](Raw<T> _0) { return &_0->st_mode; }), });
		m_Fields.push_back(Field{.Name = "st_nlink", .Type = Class::Get<short>()->getName(), .Access = ::New<FuncT<Raw<decltype(T::st_nlink)>,Raw<T> >>([](Raw<T> _0) { return &_0->st_nlink; }), });
		m_Fields.push_back(Field{.Name = "st_uid", .Type = Class::Get<short>()->getName(), .Access = ::New<FuncT<Raw<decltype(T::st_uid)>,Raw<T> >>([](Raw<T> _0) { return &_0->st_uid; }), });
		m_Fields.push_back(Field{.Name = "st_gid", .Type = Class::Get<short>()->getName(), .Access = ::New<FuncT<Raw<decltype(T::st_gid)>,Raw<T> >>([](Raw<T> _0) { return &_0->st_gid; }), });
		m_Fields.push_back(Field{.Name = "st_rdev", .Type = Class::Get<_dev_t>()->getName(), .Access = ::New<FuncT<Raw<decltype(T::st_rdev)>,Raw<T> >>([](Raw<T> _0) { return &_0->st_rdev; }), });
		m_Fields.push_back(Field{.Name = "st_size", .Type = Class::Get<long long>()->getName(), .Access = ::New<FuncT<Raw<decltype(T::st_size)>,Raw<T> >>([](Raw<T> _0) { return &_0->st_size; }), });
		m_Fields.push_back(Field{.Name = "st_atime", .Type = Class::Get<__time32_t>()->getName(), .Access = ::New<FuncT<Raw<decltype(T::st_atime)>,Raw<T> >>([](Raw<T> _0) { return &_0->st_atime; }), });
		m_Fields.push_back(Field{.Name = "st_mtime", .Type = Class::Get<__time32_t>()->getName(), .Access = ::New<FuncT<Raw<decltype(T::st_mtime)>,Raw<T> >>([](Raw<T> _0) { return &_0->st_mtime; }), });
		m_Fields.push_back(Field{.Name = "st_ctime", .Type = Class::Get<__time32_t>()->getName(), .Access = ::New<FuncT<Raw<decltype(T::st_ctime)>,Raw<T> >>([](Raw<T> _0) { return &_0->st_ctime; }), });
	}
};

template<>
class ClassT<_stat64i32> : public Class
{
public:
	static Raw<ClassT> Get()
	{
		static ClassT s_Instance;
		return &s_Instance;
	}

protected:
	ClassT() : Class(Class::SetClass<_stat64i32>(this))
	{
		using T = _stat64i32;
		m_Fields.push_back(Field{.Name = "st_dev", .Type = Class::Get<_dev_t>()->getName(), .Access = ::New<FuncT<Raw<decltype(T::st_dev)>,Raw<T> >>([](Raw<T> _0) { return &_0->st_dev; }), });
		m_Fields.push_back(Field{.Name = "st_ino", .Type = Class::Get<_ino_t>()->getName(), .Access = ::New<FuncT<Raw<decltype(T::st_ino)>,Raw<T> >>([](Raw<T> _0) { return &_0->st_ino; }), });
		m_Fields.push_back(Field{.Name = "st_mode", .Type = Class::Get<unsigned short>()->getName(), .Access = ::New<FuncT<Raw<decltype(T::st_mode)>,Raw<T> >>([](Raw<T> _0) { return &_0->st_mode; }), });
		m_Fields.push_back(Field{.Name = "st_nlink", .Type = Class::Get<short>()->getName(), .Access = ::New<FuncT<Raw<decltype(T::st_nlink)>,Raw<T> >>([](Raw<T> _0) { return &_0->st_nlink; }), });
		m_Fields.push_back(Field{.Name = "st_uid", .Type = Class::Get<short>()->getName(), .Access = ::New<FuncT<Raw<decltype(T::st_uid)>,Raw<T> >>([](Raw<T> _0) { return &_0->st_uid; }), });
		m_Fields.push_back(Field{.Name = "st_gid", .Type = Class::Get<short>()->getName(), .Access = ::New<FuncT<Raw<decltype(T::st_gid)>,Raw<T> >>([](Raw<T> _0) { return &_0->st_gid; }), });
		m_Fields.push_back(Field{.Name = "st_rdev", .Type = Class::Get<_dev_t>()->getName(), .Access = ::New<FuncT<Raw<decltype(T::st_rdev)>,Raw<T> >>([](Raw<T> _0) { return &_0->st_rdev; }), });
		m_Fields.push_back(Field{.Name = "st_size", .Type = Class::Get<_off_t>()->getName(), .Access = ::New<FuncT<Raw<decltype(T::st_size)>,Raw<T> >>([](Raw<T> _0) { return &_0->st_size; }), });
		m_Fields.push_back(Field{.Name = "st_atime", .Type = Class::Get<__time64_t>()->getName(), .Access = ::New<FuncT<Raw<decltype(T::st_atime)>,Raw<T> >>([](Raw<T> _0) { return &_0->st_atime; }), });
		m_Fields.push_back(Field{.Name = "st_mtime", .Type = Class::Get<__time64_t>()->getName(), .Access = ::New<FuncT<Raw<decltype(T::st_mtime)>,Raw<T> >>([](Raw<T> _0) { return &_0->st_mtime; }), });
		m_Fields.push_back(Field{.Name = "st_ctime", .Type = Class::Get<__time64_t>()->getName(), .Access = ::New<FuncT<Raw<decltype(T::st_ctime)>,Raw<T> >>([](Raw<T> _0) { return &_0->st_ctime; }), });
	}
};

template<>
class ClassT<_stat64> : public Class
{
public:
	static Raw<ClassT> Get()
	{
		static ClassT s_Instance;
		return &s_Instance;
	}

protected:
	ClassT() : Class(Class::SetClass<_stat64>(this))
	{
		using T = _stat64;
		m_Fields.push_back(Field{.Name = "st_dev", .Type = Class::Get<_dev_t>()->getName(), .Access = ::New<FuncT<Raw<decltype(T::st_dev)>,Raw<T> >>([](Raw<T> _0) { return &_0->st_dev; }), });
		m_Fields.push_back(Field{.Name = "st_ino", .Type = Class::Get<_ino_t>()->getName(), .Access = ::New<FuncT<Raw<decltype(T::st_ino)>,Raw<T> >>([](Raw<T> _0) { return &_0->st_ino; }), });
		m_Fields.push_back(Field{.Name = "st_mode", .Type = Class::Get<unsigned short>()->getName(), .Access = ::New<FuncT<Raw<decltype(T::st_mode)>,Raw<T> >>([](Raw<T> _0) { return &_0->st_mode; }), });
		m_Fields.push_back(Field{.Name = "st_nlink", .Type = Class::Get<short>()->getName(), .Access = ::New<FuncT<Raw<decltype(T::st_nlink)>,Raw<T> >>([](Raw<T> _0) { return &_0->st_nlink; }), });
		m_Fields.push_back(Field{.Name = "st_uid", .Type = Class::Get<short>()->getName(), .Access = ::New<FuncT<Raw<decltype(T::st_uid)>,Raw<T> >>([](Raw<T> _0) { return &_0->st_uid; }), });
		m_Fields.push_back(Field{.Name = "st_gid", .Type = Class::Get<short>()->getName(), .Access = ::New<FuncT<Raw<decltype(T::st_gid)>,Raw<T> >>([](Raw<T> _0) { return &_0->st_gid; }), });
		m_Fields.push_back(Field{.Name = "st_rdev", .Type = Class::Get<_dev_t>()->getName(), .Access = ::New<FuncT<Raw<decltype(T::st_rdev)>,Raw<T> >>([](Raw<T> _0) { return &_0->st_rdev; }), });
		m_Fields.push_back(Field{.Name = "st_size", .Type = Class::Get<long long>()->getName(), .Access = ::New<FuncT<Raw<decltype(T::st_size)>,Raw<T> >>([](Raw<T> _0) { return &_0->st_size; }), });
		m_Fields.push_back(Field{.Name = "st_atime", .Type = Class::Get<__time64_t>()->getName(), .Access = ::New<FuncT<Raw<decltype(T::st_atime)>,Raw<T> >>([](Raw<T> _0) { return &_0->st_atime; }), });
		m_Fields.push_back(Field{.Name = "st_mtime", .Type = Class::Get<__time64_t>()->getName(), .Access = ::New<FuncT<Raw<decltype(T::st_mtime)>,Raw<T> >>([](Raw<T> _0) { return &_0->st_mtime; }), });
		m_Fields.push_back(Field{.Name = "st_ctime", .Type = Class::Get<__time64_t>()->getName(), .Access = ::New<FuncT<Raw<decltype(T::st_ctime)>,Raw<T> >>([](Raw<T> _0) { return &_0->st_ctime; }), });
	}
};

template<>
class ClassT<stat> : public Class
{
public:
	static Raw<ClassT> Get()
	{
		static ClassT s_Instance;
		return &s_Instance;
	}

protected:
	ClassT() : Class(Class::SetClass<stat>(this))
	{
		using T = stat;
		m_Fields.push_back(Field{.Name = "st_dev", .Type = Class::Get<_dev_t>()->getName(), .Access = ::New<FuncT<Raw<decltype(T::st_dev)>,Raw<T> >>([](Raw<T> _0) { return &_0->st_dev; }), });
		m_Fields.push_back(Field{.Name = "st_ino", .Type = Class::Get<_ino_t>()->getName(), .Access = ::New<FuncT<Raw<decltype(T::st_ino)>,Raw<T> >>([](Raw<T> _0) { return &_0->st_ino; }), });
		m_Fields.push_back(Field{.Name = "st_mode", .Type = Class::Get<unsigned short>()->getName(), .Access = ::New<FuncT<Raw<decltype(T::st_mode)>,Raw<T> >>([](Raw<T> _0) { return &_0->st_mode; }), });
		m_Fields.push_back(Field{.Name = "st_nlink", .Type = Class::Get<short>()->getName(), .Access = ::New<FuncT<Raw<decltype(T::st_nlink)>,Raw<T> >>([](Raw<T> _0) { return &_0->st_nlink; }), });
		m_Fields.push_back(Field{.Name = "st_uid", .Type = Class::Get<short>()->getName(), .Access = ::New<FuncT<Raw<decltype(T::st_uid)>,Raw<T> >>([](Raw<T> _0) { return &_0->st_uid; }), });
		m_Fields.push_back(Field{.Name = "st_gid", .Type = Class::Get<short>()->getName(), .Access = ::New<FuncT<Raw<decltype(T::st_gid)>,Raw<T> >>([](Raw<T> _0) { return &_0->st_gid; }), });
		m_Fields.push_back(Field{.Name = "st_rdev", .Type = Class::Get<_dev_t>()->getName(), .Access = ::New<FuncT<Raw<decltype(T::st_rdev)>,Raw<T> >>([](Raw<T> _0) { return &_0->st_rdev; }), });
		m_Fields.push_back(Field{.Name = "st_size", .Type = Class::Get<_off_t>()->getName(), .Access = ::New<FuncT<Raw<decltype(T::st_size)>,Raw<T> >>([](Raw<T> _0) { return &_0->st_size; }), });
		m_Fields.push_back(Field{.Name = "st_atime", .Type = Class::Get<time_t>()->getName(), .Access = ::New<FuncT<Raw<decltype(T::st_atime)>,Raw<T> >>([](Raw<T> _0) { return &_0->st_atime; }), });
		m_Fields.push_back(Field{.Name = "st_mtime", .Type = Class::Get<time_t>()->getName(), .Access = ::New<FuncT<Raw<decltype(T::st_mtime)>,Raw<T> >>([](Raw<T> _0) { return &_0->st_mtime; }), });
		m_Fields.push_back(Field{.Name = "st_ctime", .Type = Class::Get<time_t>()->getName(), .Access = ::New<FuncT<Raw<decltype(T::st_ctime)>,Raw<T> >>([](Raw<T> _0) { return &_0->st_ctime; }), });
	}
};

template<>
class ClassT<std::partial_ordering> : public Class
{
public:
	static Raw<ClassT> Get()
	{
		static ClassT s_Instance;
		return &s_Instance;
	}

protected:
	ClassT() : Class(Class::SetClass<std::partial_ordering>(this))
	{
		using T = std::partial_ordering;
		m_Fields.push_back(Field{.Name = "_Value", .Type = Class::Get<_Compare_t>()->getName(), .Access = ::New<FuncT<Raw<decltype(T::_Value)>,Raw<T> >>([](Raw<T> _0) { return &_0->_Value; }), });
	}
};

template<>
class ClassT<std::weak_ordering> : public Class
{
public:
	static Raw<ClassT> Get()
	{
		static ClassT s_Instance;
		return &s_Instance;
	}

protected:
	ClassT() : Class(Class::SetClass<std::weak_ordering>(this))
	{
		using T = std::weak_ordering;
		m_Fields.push_back(Field{.Name = "_Value", .Type = Class::Get<_Compare_t>()->getName(), .Access = ::New<FuncT<Raw<decltype(T::_Value)>,Raw<T> >>([](Raw<T> _0) { return &_0->_Value; }), });
	}
};

template<>
class ClassT<std::strong_ordering> : public Class
{
public:
	static Raw<ClassT> Get()
	{
		static ClassT s_Instance;
		return &s_Instance;
	}

protected:
	ClassT() : Class(Class::SetClass<std::strong_ordering>(this))
	{
		using T = std::strong_ordering;
		m_Fields.push_back(Field{.Name = "_Value", .Type = Class::Get<_Compare_t>()->getName(), .Access = ::New<FuncT<Raw<decltype(T::_Value)>,Raw<T> >>([](Raw<T> _0) { return &_0->_Value; }), });
	}
};

template<>
class ClassT<std::compare_three_way> : public Class
{
public:
	static Raw<ClassT> Get()
	{
		static ClassT s_Instance;
		return &s_Instance;
	}

protected:
	ClassT() : Class(Class::SetClass<std::compare_three_way>(this))
	{
		using T = std::compare_three_way;
	}
};

template<>
class ClassT<std::_Synth_three_way> : public Class
{
public:
	static Raw<ClassT> Get()
	{
		static ClassT s_Instance;
		return &s_Instance;
	}

protected:
	ClassT() : Class(Class::SetClass<std::_Synth_three_way>(this))
	{
		using T = std::_Synth_three_way;
	}
};

template<>
class ClassT<std::_Strong_order::_Cpo> : public Class
{
public:
	static Raw<ClassT> Get()
	{
		static ClassT s_Instance;
		return &s_Instance;
	}

protected:
	ClassT() : Class(Class::SetClass<std::_Strong_order::_Cpo>(this))
	{
		using T = std::_Strong_order::_Cpo;
	}
};

template<>
class ClassT<std::_Weak_order::_Cpo> : public Class
{
public:
	static Raw<ClassT> Get()
	{
		static ClassT s_Instance;
		return &s_Instance;
	}

protected:
	ClassT() : Class(Class::SetClass<std::_Weak_order::_Cpo>(this))
	{
		using T = std::_Weak_order::_Cpo;
	}
};

template<>
class ClassT<std::_Partial_order::_Cpo> : public Class
{
public:
	static Raw<ClassT> Get()
	{
		static ClassT s_Instance;
		return &s_Instance;
	}

protected:
	ClassT() : Class(Class::SetClass<std::_Partial_order::_Cpo>(this))
	{
		using T = std::_Partial_order::_Cpo;
	}
};

template<>
class ClassT<std::_Compare_strong_order_fallback::_Cpo> : public Class
{
public:
	static Raw<ClassT> Get()
	{
		static ClassT s_Instance;
		return &s_Instance;
	}

protected:
	ClassT() : Class(Class::SetClass<std::_Compare_strong_order_fallback::_Cpo>(this))
	{
		using T = std::_Compare_strong_order_fallback::_Cpo;
	}
};

template<>
class ClassT<std::_Compare_weak_order_fallback::_Cpo> : public Class
{
public:
	static Raw<ClassT> Get()
	{
		static ClassT s_Instance;
		return &s_Instance;
	}

protected:
	ClassT() : Class(Class::SetClass<std::_Compare_weak_order_fallback::_Cpo>(this))
	{
		using T = std::_Compare_weak_order_fallback::_Cpo;
	}
};

template<>
class ClassT<std::_Compare_partial_order_fallback::_Cpo> : public Class
{
public:
	static Raw<ClassT> Get()
	{
		static ClassT s_Instance;
		return &s_Instance;
	}

protected:
	ClassT() : Class(Class::SetClass<std::_Compare_partial_order_fallback::_Cpo>(this))
	{
		using T = std::_Compare_partial_order_fallback::_Cpo;
	}
};

template<>
class ClassT<std::in_place_t> : public Class
{
public:
	static Raw<ClassT> Get()
	{
		static ClassT s_Instance;
		return &s_Instance;
	}

protected:
	ClassT() : Class(Class::SetClass<std::in_place_t>(this))
	{
		using T = std::in_place_t;
	}
};

template<>
class ClassT<std::input_iterator_tag> : public Class
{
public:
	static Raw<ClassT> Get()
	{
		static ClassT s_Instance;
		return &s_Instance;
	}

protected:
	ClassT() : Class(Class::SetClass<std::input_iterator_tag>(this))
	{
		using T = std::input_iterator_tag;
	}
};

template<>
class ClassT<std::output_iterator_tag> : public Class
{
public:
	static Raw<ClassT> Get()
	{
		static ClassT s_Instance;
		return &s_Instance;
	}

protected:
	ClassT() : Class(Class::SetClass<std::output_iterator_tag>(this))
	{
		using T = std::output_iterator_tag;
	}
};

template<>
class ClassT<std::forward_iterator_tag> : public Class
{
public:
	static Raw<ClassT> Get()
	{
		static ClassT s_Instance;
		return &s_Instance;
	}

protected:
	ClassT() : Class(Class::SetClass<std::forward_iterator_tag>(this))
	{
		using T = std::forward_iterator_tag;
		m_Bases.push_back(ClassT<std::input_iterator_tag>::Get());
	}
};

template<>
class ClassT<std::bidirectional_iterator_tag> : public Class
{
public:
	static Raw<ClassT> Get()
	{
		static ClassT s_Instance;
		return &s_Instance;
	}

protected:
	ClassT() : Class(Class::SetClass<std::bidirectional_iterator_tag>(this))
	{
		using T = std::bidirectional_iterator_tag;
		m_Bases.push_back(ClassT<std::forward_iterator_tag>::Get());
	}
};

template<>
class ClassT<std::random_access_iterator_tag> : public Class
{
public:
	static Raw<ClassT> Get()
	{
		static ClassT s_Instance;
		return &s_Instance;
	}

protected:
	ClassT() : Class(Class::SetClass<std::random_access_iterator_tag>(this))
	{
		using T = std::random_access_iterator_tag;
		m_Bases.push_back(ClassT<std::bidirectional_iterator_tag>::Get());
	}
};

template<>
class ClassT<std::contiguous_iterator_tag> : public Class
{
public:
	static Raw<ClassT> Get()
	{
		static ClassT s_Instance;
		return &s_Instance;
	}

protected:
	ClassT() : Class(Class::SetClass<std::contiguous_iterator_tag>(this))
	{
		using T = std::contiguous_iterator_tag;
		m_Bases.push_back(ClassT<std::random_access_iterator_tag>::Get());
	}
};

template<>
class ClassT<std::_Old_iter_traits_pointer<false>> : public Class
{
public:
	static Raw<ClassT> Get()
	{
		static ClassT s_Instance;
		return &s_Instance;
	}

protected:
	ClassT() : Class(Class::SetClass<std::_Old_iter_traits_pointer<false>>(this))
	{
		using T = std::_Old_iter_traits_pointer<false>;
	}
};

template<>
class ClassT<std::_Iter_traits_difference<false>> : public Class
{
public:
	static Raw<ClassT> Get()
	{
		static ClassT s_Instance;
		return &s_Instance;
	}

protected:
	ClassT() : Class(Class::SetClass<std::_Iter_traits_difference<false>>(this))
	{
		using T = std::_Iter_traits_difference<false>;
	}
};

template<>
class ClassT<std::_Iter_traits_pointer<_Itraits_pointer_strategy::_Use_void>> : public Class
{
public:
	static Raw<ClassT> Get()
	{
		static ClassT s_Instance;
		return &s_Instance;
	}

protected:
	ClassT() : Class(Class::SetClass<std::_Iter_traits_pointer<_Itraits_pointer_strategy::_Use_void>>(this))
	{
		using T = std::_Iter_traits_pointer<_Itraits_pointer_strategy::_Use_void>;
	}
};

template<>
class ClassT<std::_Iter_traits_pointer<_Itraits_pointer_strategy::_Use_member>> : public Class
{
public:
	static Raw<ClassT> Get()
	{
		static ClassT s_Instance;
		return &s_Instance;
	}

protected:
	ClassT() : Class(Class::SetClass<std::_Iter_traits_pointer<_Itraits_pointer_strategy::_Use_member>>(this))
	{
		using T = std::_Iter_traits_pointer<_Itraits_pointer_strategy::_Use_member>;
	}
};

template<>
class ClassT<std::_Iter_traits_pointer<_Itraits_pointer_strategy::_Use_decltype>> : public Class
{
public:
	static Raw<ClassT> Get()
	{
		static ClassT s_Instance;
		return &s_Instance;
	}

protected:
	ClassT() : Class(Class::SetClass<std::_Iter_traits_pointer<_Itraits_pointer_strategy::_Use_decltype>>(this))
	{
		using T = std::_Iter_traits_pointer<_Itraits_pointer_strategy::_Use_decltype>;
	}
};

template<>
class ClassT<std::_Iter_traits_reference<false>> : public Class
{
public:
	static Raw<ClassT> Get()
	{
		static ClassT s_Instance;
		return &s_Instance;
	}

protected:
	ClassT() : Class(Class::SetClass<std::_Iter_traits_reference<false>>(this))
	{
		using T = std::_Iter_traits_reference<false>;
	}
};

template<>
class ClassT<std::_Iter_traits_category4<false>> : public Class
{
public:
	static Raw<ClassT> Get()
	{
		static ClassT s_Instance;
		return &s_Instance;
	}

protected:
	ClassT() : Class(Class::SetClass<std::_Iter_traits_category4<false>>(this))
	{
		using T = std::_Iter_traits_category4<false>;
	}
};

template<>
class ClassT<std::_Iter_traits_category3<false>> : public Class
{
public:
	static Raw<ClassT> Get()
	{
		static ClassT s_Instance;
		return &s_Instance;
	}

protected:
	ClassT() : Class(Class::SetClass<std::_Iter_traits_category3<false>>(this))
	{
		using T = std::_Iter_traits_category3<false>;
	}
};

template<>
class ClassT<std::_Iter_traits_category2<false>> : public Class
{
public:
	static Raw<ClassT> Get()
	{
		static ClassT s_Instance;
		return &s_Instance;
	}

protected:
	ClassT() : Class(Class::SetClass<std::_Iter_traits_category2<false>>(this))
	{
		using T = std::_Iter_traits_category2<false>;
	}
};

template<>
class ClassT<std::_Iter_traits_category<false>> : public Class
{
public:
	static Raw<ClassT> Get()
	{
		static ClassT s_Instance;
		return &s_Instance;
	}

protected:
	ClassT() : Class(Class::SetClass<std::_Iter_traits_category<false>>(this))
	{
		using T = std::_Iter_traits_category<false>;
	}
};

template<>
class ClassT<std::default_sentinel_t> : public Class
{
public:
	static Raw<ClassT> Get()
	{
		static ClassT s_Instance;
		return &s_Instance;
	}

protected:
	ClassT() : Class(Class::SetClass<std::default_sentinel_t>(this))
	{
		using T = std::default_sentinel_t;
	}
};

template<>
class ClassT<std::plus<void>> : public Class
{
public:
	static Raw<ClassT> Get()
	{
		static ClassT s_Instance;
		return &s_Instance;
	}

protected:
	ClassT() : Class(Class::SetClass<std::plus<void>>(this))
	{
		using T = std::plus<void>;
	}
};

template<>
class ClassT<std::minus<void>> : public Class
{
public:
	static Raw<ClassT> Get()
	{
		static ClassT s_Instance;
		return &s_Instance;
	}

protected:
	ClassT() : Class(Class::SetClass<std::minus<void>>(this))
	{
		using T = std::minus<void>;
	}
};

template<>
class ClassT<std::multiplies<void>> : public Class
{
public:
	static Raw<ClassT> Get()
	{
		static ClassT s_Instance;
		return &s_Instance;
	}

protected:
	ClassT() : Class(Class::SetClass<std::multiplies<void>>(this))
	{
		using T = std::multiplies<void>;
	}
};

template<>
class ClassT<std::equal_to<void>> : public Class
{
public:
	static Raw<ClassT> Get()
	{
		static ClassT s_Instance;
		return &s_Instance;
	}

protected:
	ClassT() : Class(Class::SetClass<std::equal_to<void>>(this))
	{
		using T = std::equal_to<void>;
	}
};

template<>
class ClassT<std::not_equal_to<void>> : public Class
{
public:
	static Raw<ClassT> Get()
	{
		static ClassT s_Instance;
		return &s_Instance;
	}

protected:
	ClassT() : Class(Class::SetClass<std::not_equal_to<void>>(this))
	{
		using T = std::not_equal_to<void>;
	}
};

template<>
class ClassT<std::greater<void>> : public Class
{
public:
	static Raw<ClassT> Get()
	{
		static ClassT s_Instance;
		return &s_Instance;
	}

protected:
	ClassT() : Class(Class::SetClass<std::greater<void>>(this))
	{
		using T = std::greater<void>;
	}
};

template<>
class ClassT<std::greater_equal<void>> : public Class
{
public:
	static Raw<ClassT> Get()
	{
		static ClassT s_Instance;
		return &s_Instance;
	}

protected:
	ClassT() : Class(Class::SetClass<std::greater_equal<void>>(this))
	{
		using T = std::greater_equal<void>;
	}
};

template<>
class ClassT<std::less_equal<void>> : public Class
{
public:
	static Raw<ClassT> Get()
	{
		static ClassT s_Instance;
		return &s_Instance;
	}

protected:
	ClassT() : Class(Class::SetClass<std::less_equal<void>>(this))
	{
		using T = std::less_equal<void>;
	}
};

template<>
class ClassT<std::_Unused_parameter> : public Class
{
public:
	static Raw<ClassT> Get()
	{
		static ClassT s_Instance;
		return &s_Instance;
	}

protected:
	ClassT() : Class(Class::SetClass<std::_Unused_parameter>(this))
	{
		using T = std::_Unused_parameter;
	}
};

template<>
class ClassT<std::ranges::_Iter_move::_Cpo> : public Class
{
public:
	static Raw<ClassT> Get()
	{
		static ClassT s_Instance;
		return &s_Instance;
	}

protected:
	ClassT() : Class(Class::SetClass<std::ranges::_Iter_move::_Cpo>(this))
	{
		using T = std::ranges::_Iter_move::_Cpo;
	}
};

template<>
class ClassT<std::_Make_unsigned_like_impl<false>> : public Class
{
public:
	static Raw<ClassT> Get()
	{
		static ClassT s_Instance;
		return &s_Instance;
	}

protected:
	ClassT() : Class(Class::SetClass<std::_Make_unsigned_like_impl<false>>(this))
	{
		using T = std::_Make_unsigned_like_impl<false>;
	}
};

template<>
class ClassT<std::_Make_signed_like_impl<false>> : public Class
{
public:
	static Raw<ClassT> Get()
	{
		static ClassT s_Instance;
		return &s_Instance;
	}

protected:
	ClassT() : Class(Class::SetClass<std::_Make_signed_like_impl<false>>(this))
	{
		using T = std::_Make_signed_like_impl<false>;
	}
};

template<>
class ClassT<std::_Iter_concept_impl2<false>> : public Class
{
public:
	static Raw<ClassT> Get()
	{
		static ClassT s_Instance;
		return &s_Instance;
	}

protected:
	ClassT() : Class(Class::SetClass<std::_Iter_concept_impl2<false>>(this))
	{
		using T = std::_Iter_concept_impl2<false>;
	}
};

template<>
class ClassT<std::_Iter_concept_impl1<false>> : public Class
{
public:
	static Raw<ClassT> Get()
	{
		static ClassT s_Instance;
		return &s_Instance;
	}

protected:
	ClassT() : Class(Class::SetClass<std::_Iter_concept_impl1<false>>(this))
	{
		using T = std::_Iter_concept_impl1<false>;
	}
};

template<>
class ClassT<std::_Projected_difference_type_impl<type-parameter-0-0>::_Base> : public Class
{
public:
	static Raw<ClassT> Get()
	{
		static ClassT s_Instance;
		return &s_Instance;
	}

protected:
	ClassT() : Class(Class::SetClass<std::_Projected_difference_type_impl<type-parameter-0-0>::_Base>(this))
	{
		using T = std::_Projected_difference_type_impl<type-parameter-0-0>::_Base;
	}
};

template<>
class ClassT<std::ranges::_Iter_swap::_Cpo> : public Class
{
public:
	static Raw<ClassT> Get()
	{
		static ClassT s_Instance;
		return &s_Instance;
	}

protected:
	ClassT() : Class(Class::SetClass<std::ranges::_Iter_swap::_Cpo>(this))
	{
		using T = std::ranges::_Iter_swap::_Cpo;
	}
};

template<>
class ClassT<std::_Distance_unknown> : public Class
{
public:
	static Raw<ClassT> Get()
	{
		static ClassT s_Instance;
		return &s_Instance;
	}

protected:
	ClassT() : Class(Class::SetClass<std::_Distance_unknown>(this))
	{
		using T = std::_Distance_unknown;
		m_Methods.push_back(Method{.Name = "operator-", .Type = "", .Return = Class::Get<std::_Distance_unknown>()->getName(), .Access = ::New<FuncT<std::_Distance_unknown,Raw<T> >>([](Raw<T> _0)->std::_Distance_unknown { return _0->operator-(); }), });
	}
};

template<>
class ClassT<std::ranges::_Begin::_Cpo> : public Class
{
public:
	static Raw<ClassT> Get()
	{
		static ClassT s_Instance;
		return &s_Instance;
	}

protected:
	ClassT() : Class(Class::SetClass<std::ranges::_Begin::_Cpo>(this))
	{
		using T = std::ranges::_Begin::_Cpo;
	}
};

template<>
class ClassT<std::ranges::_End::_Cpo> : public Class
{
public:
	static Raw<ClassT> Get()
	{
		static ClassT s_Instance;
		return &s_Instance;
	}

protected:
	ClassT() : Class(Class::SetClass<std::ranges::_End::_Cpo>(this))
	{
		using T = std::ranges::_End::_Cpo;
	}
};

template<>
class ClassT<std::ranges::_Unchecked_begin::_Cpo> : public Class
{
public:
	static Raw<ClassT> Get()
	{
		static ClassT s_Instance;
		return &s_Instance;
	}

protected:
	ClassT() : Class(Class::SetClass<std::ranges::_Unchecked_begin::_Cpo>(this))
	{
		using T = std::ranges::_Unchecked_begin::_Cpo;
	}
};

template<>
class ClassT<std::ranges::_Unchecked_end::_Cpo> : public Class
{
public:
	static Raw<ClassT> Get()
	{
		static ClassT s_Instance;
		return &s_Instance;
	}

protected:
	ClassT() : Class(Class::SetClass<std::ranges::_Unchecked_end::_Cpo>(this))
	{
		using T = std::ranges::_Unchecked_end::_Cpo;
	}
};

template<>
class ClassT<std::ranges::_Cbegin_fn> : public Class
{
public:
	static Raw<ClassT> Get()
	{
		static ClassT s_Instance;
		return &s_Instance;
	}

protected:
	ClassT() : Class(Class::SetClass<std::ranges::_Cbegin_fn>(this))
	{
		using T = std::ranges::_Cbegin_fn;
	}
};

template<>
class ClassT<std::ranges::_Cend_fn> : public Class
{
public:
	static Raw<ClassT> Get()
	{
		static ClassT s_Instance;
		return &s_Instance;
	}

protected:
	ClassT() : Class(Class::SetClass<std::ranges::_Cend_fn>(this))
	{
		using T = std::ranges::_Cend_fn;
	}
};

template<>
class ClassT<std::ranges::_Rbegin::_Cpo> : public Class
{
public:
	static Raw<ClassT> Get()
	{
		static ClassT s_Instance;
		return &s_Instance;
	}

protected:
	ClassT() : Class(Class::SetClass<std::ranges::_Rbegin::_Cpo>(this))
	{
		using T = std::ranges::_Rbegin::_Cpo;
	}
};

template<>
class ClassT<std::ranges::_Rend::_Cpo> : public Class
{
public:
	static Raw<ClassT> Get()
	{
		static ClassT s_Instance;
		return &s_Instance;
	}

protected:
	ClassT() : Class(Class::SetClass<std::ranges::_Rend::_Cpo>(this))
	{
		using T = std::ranges::_Rend::_Cpo;
	}
};

template<>
class ClassT<std::ranges::_Crbegin_fn> : public Class
{
public:
	static Raw<ClassT> Get()
	{
		static ClassT s_Instance;
		return &s_Instance;
	}

protected:
	ClassT() : Class(Class::SetClass<std::ranges::_Crbegin_fn>(this))
	{
		using T = std::ranges::_Crbegin_fn;
	}
};

template<>
class ClassT<std::ranges::_Crend_fn> : public Class
{
public:
	static Raw<ClassT> Get()
	{
		static ClassT s_Instance;
		return &s_Instance;
	}

protected:
	ClassT() : Class(Class::SetClass<std::ranges::_Crend_fn>(this))
	{
		using T = std::ranges::_Crend_fn;
	}
};

template<>
class ClassT<std::ranges::_Size::_Cpo> : public Class
{
public:
	static Raw<ClassT> Get()
	{
		static ClassT s_Instance;
		return &s_Instance;
	}

protected:
	ClassT() : Class(Class::SetClass<std::ranges::_Size::_Cpo>(this))
	{
		using T = std::ranges::_Size::_Cpo;
	}
};

template<>
class ClassT<std::ranges::_Empty::_Cpo> : public Class
{
public:
	static Raw<ClassT> Get()
	{
		static ClassT s_Instance;
		return &s_Instance;
	}

protected:
	ClassT() : Class(Class::SetClass<std::ranges::_Empty::_Cpo>(this))
	{
		using T = std::ranges::_Empty::_Cpo;
	}
};

template<>
class ClassT<std::ranges::_Data::_Cpo> : public Class
{
public:
	static Raw<ClassT> Get()
	{
		static ClassT s_Instance;
		return &s_Instance;
	}

protected:
	ClassT() : Class(Class::SetClass<std::ranges::_Data::_Cpo>(this))
	{
		using T = std::ranges::_Data::_Cpo;
	}
};

template<>
class ClassT<std::ranges::_Cdata_fn> : public Class
{
public:
	static Raw<ClassT> Get()
	{
		static ClassT s_Instance;
		return &s_Instance;
	}

protected:
	ClassT() : Class(Class::SetClass<std::ranges::_Cdata_fn>(this))
	{
		using T = std::ranges::_Cdata_fn;
	}
};

template<>
class ClassT<std::ranges::view_base> : public Class
{
public:
	static Raw<ClassT> Get()
	{
		static ClassT s_Instance;
		return &s_Instance;
	}

protected:
	ClassT() : Class(Class::SetClass<std::ranges::view_base>(this))
	{
		using T = std::ranges::view_base;
	}
};

template<>
class ClassT<std::ranges::_Advance_fn> : public Class
{
public:
	static Raw<ClassT> Get()
	{
		static ClassT s_Instance;
		return &s_Instance;
	}

protected:
	ClassT() : Class(Class::SetClass<std::ranges::_Advance_fn>(this))
	{
		using T = std::ranges::_Advance_fn;
	}
};

template<>
class ClassT<std::ranges::_Distance_fn> : public Class
{
public:
	static Raw<ClassT> Get()
	{
		static ClassT s_Instance;
		return &s_Instance;
	}

protected:
	ClassT() : Class(Class::SetClass<std::ranges::_Distance_fn>(this))
	{
		using T = std::ranges::_Distance_fn;
	}
};

template<>
class ClassT<std::ranges::_Ssize_fn> : public Class
{
public:
	static Raw<ClassT> Get()
	{
		static ClassT s_Instance;
		return &s_Instance;
	}

protected:
	ClassT() : Class(Class::SetClass<std::ranges::_Ssize_fn>(this))
	{
		using T = std::ranges::_Ssize_fn;
	}
};

template<>
class ClassT<std::ranges::_Next_fn> : public Class
{
public:
	static Raw<ClassT> Get()
	{
		static ClassT s_Instance;
		return &s_Instance;
	}

protected:
	ClassT() : Class(Class::SetClass<std::ranges::_Next_fn>(this))
	{
		using T = std::ranges::_Next_fn;
	}
};

template<>
class ClassT<std::ranges::_Prev_fn> : public Class
{
public:
	static Raw<ClassT> Get()
	{
		static ClassT s_Instance;
		return &s_Instance;
	}

protected:
	ClassT() : Class(Class::SetClass<std::ranges::_Prev_fn>(this))
	{
		using T = std::ranges::_Prev_fn;
	}
};

template<>
class ClassT<std::ranges::equal_to> : public Class
{
public:
	static Raw<ClassT> Get()
	{
		static ClassT s_Instance;
		return &s_Instance;
	}

protected:
	ClassT() : Class(Class::SetClass<std::ranges::equal_to>(this))
	{
		using T = std::ranges::equal_to;
	}
};

template<>
class ClassT<std::ranges::less> : public Class
{
public:
	static Raw<ClassT> Get()
	{
		static ClassT s_Instance;
		return &s_Instance;
	}

protected:
	ClassT() : Class(Class::SetClass<std::ranges::less>(this))
	{
		using T = std::ranges::less;
	}
};

template<>
class ClassT<std::ranges::greater> : public Class
{
public:
	static Raw<ClassT> Get()
	{
		static ClassT s_Instance;
		return &s_Instance;
	}

protected:
	ClassT() : Class(Class::SetClass<std::ranges::greater>(this))
	{
		using T = std::ranges::greater;
	}
};

template<>
class ClassT<std::ranges::dangling> : public Class
{
public:
	static Raw<ClassT> Get()
	{
		static ClassT s_Instance;
		return &s_Instance;
	}

protected:
	ClassT() : Class(Class::SetClass<std::ranges::dangling>(this))
	{
		using T = std::ranges::dangling;
	}
};

template<>
class ClassT<std::_Default_sentinel> : public Class
{
public:
	static Raw<ClassT> Get()
	{
		static ClassT s_Instance;
		return &s_Instance;
	}

protected:
	ClassT() : Class(Class::SetClass<std::_Default_sentinel>(this))
	{
		using T = std::_Default_sentinel;
	}
};

template<>
class ClassT<std::_Unreachable_sentinel_detail::_Base> : public Class
{
public:
	static Raw<ClassT> Get()
	{
		static ClassT s_Instance;
		return &s_Instance;
	}

protected:
	ClassT() : Class(Class::SetClass<std::_Unreachable_sentinel_detail::_Base>(this))
	{
		using T = std::_Unreachable_sentinel_detail::_Base;
	}
};

template<>
class ClassT<std::unreachable_sentinel_t> : public Class
{
public:
	static Raw<ClassT> Get()
	{
		static ClassT s_Instance;
		return &s_Instance;
	}

protected:
	ClassT() : Class(Class::SetClass<std::unreachable_sentinel_t>(this))
	{
		using T = std::unreachable_sentinel_t;
		m_Bases.push_back(ClassT<std::_Unreachable_sentinel_detail::_Base>::Get());
	}
};

template<>
class ClassT<std::_False_trivial_cat> : public Class
{
public:
	static Raw<ClassT> Get()
	{
		static ClassT s_Instance;
		return &s_Instance;
	}

protected:
	ClassT() : Class(Class::SetClass<std::_False_trivial_cat>(this))
	{
		using T = std::_False_trivial_cat;
	}
};

template<>
class ClassT<std::ranges::_Copy_fn> : public Class
{
public:
	static Raw<ClassT> Get()
	{
		static ClassT s_Instance;
		return &s_Instance;
	}

protected:
	ClassT() : Class(Class::SetClass<std::ranges::_Copy_fn>(this))
	{
		using T = std::ranges::_Copy_fn;
	}
};

template<>
class ClassT<std::_Is_character<char>> : public Class
{
public:
	static Raw<ClassT> Get()
	{
		static ClassT s_Instance;
		return &s_Instance;
	}

protected:
	ClassT() : Class(Class::SetClass<std::_Is_character<char>>(this))
	{
		using T = std::_Is_character<char>;
		m_Bases.push_back(ClassT<std::integral_constant<bool, true>>::Get());
	}
};

template<>
class ClassT<std::_Is_character<signed char>> : public Class
{
public:
	static Raw<ClassT> Get()
	{
		static ClassT s_Instance;
		return &s_Instance;
	}

protected:
	ClassT() : Class(Class::SetClass<std::_Is_character<signed char>>(this))
	{
		using T = std::_Is_character<signed char>;
		m_Bases.push_back(ClassT<std::integral_constant<bool, true>>::Get());
	}
};

template<>
class ClassT<std::_Is_character<unsigned char>> : public Class
{
public:
	static Raw<ClassT> Get()
	{
		static ClassT s_Instance;
		return &s_Instance;
	}

protected:
	ClassT() : Class(Class::SetClass<std::_Is_character<unsigned char>>(this))
	{
		using T = std::_Is_character<unsigned char>;
		m_Bases.push_back(ClassT<std::integral_constant<bool, true>>::Get());
	}
};

template<>
class ClassT<std::_Is_character<char8_t>> : public Class
{
public:
	static Raw<ClassT> Get()
	{
		static ClassT s_Instance;
		return &s_Instance;
	}

protected:
	ClassT() : Class(Class::SetClass<std::_Is_character<char8_t>>(this))
	{
		using T = std::_Is_character<char8_t>;
		m_Bases.push_back(ClassT<std::integral_constant<bool, true>>::Get());
	}
};

template<>
class ClassT<std::_Is_character_or_bool<bool>> : public Class
{
public:
	static Raw<ClassT> Get()
	{
		static ClassT s_Instance;
		return &s_Instance;
	}

protected:
	ClassT() : Class(Class::SetClass<std::_Is_character_or_bool<bool>>(this))
	{
		using T = std::_Is_character_or_bool<bool>;
		m_Bases.push_back(ClassT<std::integral_constant<bool, true>>::Get());
	}
};

template<>
class ClassT<std::_Is_character_or_byte_or_bool<byte>> : public Class
{
public:
	static Raw<ClassT> Get()
	{
		static ClassT s_Instance;
		return &s_Instance;
	}

protected:
	ClassT() : Class(Class::SetClass<std::_Is_character_or_byte_or_bool<byte>>(this))
	{
		using T = std::_Is_character_or_byte_or_bool<byte>;
		m_Bases.push_back(ClassT<std::integral_constant<bool, true>>::Get());
	}
};

template<>
class ClassT<std::ranges::_Fill_n_fn> : public Class
{
public:
	static Raw<ClassT> Get()
	{
		static ClassT s_Instance;
		return &s_Instance;
	}

protected:
	ClassT() : Class(Class::SetClass<std::ranges::_Fill_n_fn>(this))
	{
		using T = std::ranges::_Fill_n_fn;
	}
};

template<>
class ClassT<std::ranges::_Mismatch_fn> : public Class
{
public:
	static Raw<ClassT> Get()
	{
		static ClassT s_Instance;
		return &s_Instance;
	}

protected:
	ClassT() : Class(Class::SetClass<std::ranges::_Mismatch_fn>(this))
	{
		using T = std::ranges::_Mismatch_fn;
	}
};

template<>
class ClassT<std::ranges::_Find_fn> : public Class
{
public:
	static Raw<ClassT> Get()
	{
		static ClassT s_Instance;
		return &s_Instance;
	}

protected:
	ClassT() : Class(Class::SetClass<std::ranges::_Find_fn>(this))
	{
		using T = std::ranges::_Find_fn;
	}
};

template<>
class ClassT<std::ranges::_Find_if_fn> : public Class
{
public:
	static Raw<ClassT> Get()
	{
		static ClassT s_Instance;
		return &s_Instance;
	}

protected:
	ClassT() : Class(Class::SetClass<std::ranges::_Find_if_fn>(this))
	{
		using T = std::ranges::_Find_if_fn;
	}
};

template<>
class ClassT<std::ranges::_Find_if_not_fn> : public Class
{
public:
	static Raw<ClassT> Get()
	{
		static ClassT s_Instance;
		return &s_Instance;
	}

protected:
	ClassT() : Class(Class::SetClass<std::ranges::_Find_if_not_fn>(this))
	{
		using T = std::ranges::_Find_if_not_fn;
	}
};

template<>
class ClassT<std::ranges::_Adjacent_find_fn> : public Class
{
public:
	static Raw<ClassT> Get()
	{
		static ClassT s_Instance;
		return &s_Instance;
	}

protected:
	ClassT() : Class(Class::SetClass<std::ranges::_Adjacent_find_fn>(this))
	{
		using T = std::ranges::_Adjacent_find_fn;
	}
};

template<>
class ClassT<std::ranges::_Search_fn> : public Class
{
public:
	static Raw<ClassT> Get()
	{
		static ClassT s_Instance;
		return &s_Instance;
	}

protected:
	ClassT() : Class(Class::SetClass<std::ranges::_Search_fn>(this))
	{
		using T = std::ranges::_Search_fn;
	}
};

template<>
class ClassT<std::ranges::_Max_element_fn> : public Class
{
public:
	static Raw<ClassT> Get()
	{
		static ClassT s_Instance;
		return &s_Instance;
	}

protected:
	ClassT() : Class(Class::SetClass<std::ranges::_Max_element_fn>(this))
	{
		using T = std::ranges::_Max_element_fn;
	}
};

template<>
class ClassT<std::ranges::_Max_fn> : public Class
{
public:
	static Raw<ClassT> Get()
	{
		static ClassT s_Instance;
		return &s_Instance;
	}

protected:
	ClassT() : Class(Class::SetClass<std::ranges::_Max_fn>(this))
	{
		using T = std::ranges::_Max_fn;
	}
};

template<>
class ClassT<std::ranges::_Min_element_fn> : public Class
{
public:
	static Raw<ClassT> Get()
	{
		static ClassT s_Instance;
		return &s_Instance;
	}

protected:
	ClassT() : Class(Class::SetClass<std::ranges::_Min_element_fn>(this))
	{
		using T = std::ranges::_Min_element_fn;
	}
};

template<>
class ClassT<std::ranges::_Min_fn> : public Class
{
public:
	static Raw<ClassT> Get()
	{
		static ClassT s_Instance;
		return &s_Instance;
	}

protected:
	ClassT() : Class(Class::SetClass<std::ranges::_Min_fn>(this))
	{
		using T = std::ranges::_Min_fn;
	}
};

template<>
class ClassT<std::monostate> : public Class
{
public:
	static Raw<ClassT> Get()
	{
		static ClassT s_Instance;
		return &s_Instance;
	}

protected:
	ClassT() : Class(Class::SetClass<std::monostate>(this))
	{
		using T = std::monostate;
	}
};

template<>
class ClassT<std::exception> : public Class
{
public:
	static Raw<ClassT> Get()
	{
		static ClassT s_Instance;
		return &s_Instance;
	}

protected:
	ClassT() : Class(Class::SetClass<std::exception>(this))
	{
		using T = std::exception;
		m_Methods.push_back(Method{.Name = "operator=", .Type = "|"+Class::Get<const exception &>()->getName()+"", .Return = Class::Get<exception &>()->getName(), .Access = ::New<FuncT<exception &,Raw<T>,const exception & >>([](Raw<T> _0,const exception & _1)->exception & { return _0->operator=(_1); }), });
		m_Methods.push_back(Method{.Name = "what", .Type = "", .Return = Class::Get<const char *>()->getName(), .Access = ::New<FuncT<const char *,Raw<T> >>([](Raw<T> _0)->const char * { return _0->what(); }), });
	}
};

template<>
class ClassT<std::bad_exception> : public Class
{
public:
	static Raw<ClassT> Get()
	{
		static ClassT s_Instance;
		return &s_Instance;
	}

protected:
	ClassT() : Class(Class::SetClass<std::bad_exception>(this))
	{
		using T = std::bad_exception;
		m_Bases.push_back(ClassT<std::exception>::Get());
	}
};

template<>
class ClassT<std::bad_alloc> : public Class
{
public:
	static Raw<ClassT> Get()
	{
		static ClassT s_Instance;
		return &s_Instance;
	}

protected:
	ClassT() : Class(Class::SetClass<std::bad_alloc>(this))
	{
		using T = std::bad_alloc;
		m_Bases.push_back(ClassT<std::exception>::Get());
	}
};

template<>
class ClassT<std::bad_array_new_length> : public Class
{
public:
	static Raw<ClassT> Get()
	{
		static ClassT s_Instance;
		return &s_Instance;
	}

protected:
	ClassT() : Class(Class::SetClass<std::bad_array_new_length>(this))
	{
		using T = std::bad_array_new_length;
		m_Bases.push_back(ClassT<std::bad_alloc>::Get());
	}
};

template<>
class ClassT<std::nested_exception> : public Class
{
public:
	static Raw<ClassT> Get()
	{
		static ClassT s_Instance;
		return &s_Instance;
	}

protected:
	ClassT() : Class(Class::SetClass<std::nested_exception>(this))
	{
		using T = std::nested_exception;
		m_Methods.push_back(Method{.Name = "operator=", .Type = "|"+Class::Get<const nested_exception &>()->getName()+"", .Return = Class::Get<nested_exception &>()->getName(), .Access = ::New<FuncT<nested_exception &,Raw<T>,const nested_exception & >>([](Raw<T> _0,const nested_exception & _1)->nested_exception & { return _0->operator=(_1); }), });
		m_Methods.push_back(Method{.Name = "rethrow_nested", .Type = "", .Return = Class::Get<void>()->getName(), .Access = ::New<FuncT<void,Raw<T> >>([](Raw<T> _0)->void { return _0->rethrow_nested(); }), });
		m_Methods.push_back(Method{.Name = "nested_ptr", .Type = "", .Return = Class::Get<std::exception_ptr>()->getName(), .Access = ::New<FuncT<std::exception_ptr,Raw<T> >>([](Raw<T> _0)->std::exception_ptr { return _0->nested_ptr(); }), });
	}
};

template<>
class ClassT<std::bad_variant_access> : public Class
{
public:
	static Raw<ClassT> Get()
	{
		static ClassT s_Instance;
		return &s_Instance;
	}

protected:
	ClassT() : Class(Class::SetClass<std::bad_variant_access>(this))
	{
		using T = std::bad_variant_access;
		m_Bases.push_back(ClassT<std::exception>::Get());
		m_Methods.push_back(Method{.Name = "what", .Type = "", .Return = Class::Get<const char *>()->getName(), .Access = ::New<FuncT<const char *,Raw<T> >>([](Raw<T> _0)->const char * { return _0->what(); }), });
	}
};

template<>
class ClassT<std::char_traits<char32_t>> : public Class
{
public:
	static Raw<ClassT> Get()
	{
		static ClassT s_Instance;
		return &s_Instance;
	}

protected:
	ClassT() : Class(Class::SetClass<std::char_traits<char32_t>>(this))
	{
		using T = std::char_traits<char32_t>;
		m_Bases.push_back(ClassT<std::_Char_traits<char32_t, unsigned int>>::Get());
	}
};

template<>
class ClassT<std::char_traits<wchar_t>> : public Class
{
public:
	static Raw<ClassT> Get()
	{
		static ClassT s_Instance;
		return &s_Instance;
	}

protected:
	ClassT() : Class(Class::SetClass<std::char_traits<wchar_t>>(this))
	{
		using T = std::char_traits<wchar_t>;
		m_Bases.push_back(ClassT<std::_WChar_traits<wchar_t>>::Get());
	}
};

template<>
class ClassT<std::char_traits<char>> : public Class
{
public:
	static Raw<ClassT> Get()
	{
		static ClassT s_Instance;
		return &s_Instance;
	}

protected:
	ClassT() : Class(Class::SetClass<std::char_traits<char>>(this))
	{
		using T = std::char_traits<char>;
		m_Bases.push_back(ClassT<std::_Narrow_char_traits<char, int>>::Get());
	}
};

template<>
class ClassT<std::char_traits<char8_t>> : public Class
{
public:
	static Raw<ClassT> Get()
	{
		static ClassT s_Instance;
		return &s_Instance;
	}

protected:
	ClassT() : Class(Class::SetClass<std::char_traits<char8_t>>(this))
	{
		using T = std::char_traits<char8_t>;
		m_Bases.push_back(ClassT<std::_Narrow_char_traits<char8_t, unsigned int>>::Get());
	}
};

template<>
class ClassT<std::_Num_int_base> : public Class
{
public:
	static Raw<ClassT> Get()
	{
		static ClassT s_Instance;
		return &s_Instance;
	}

protected:
	ClassT() : Class(Class::SetClass<std::_Num_int_base>(this))
	{
		using T = std::_Num_int_base;
		m_Bases.push_back(ClassT<std::_Num_base>::Get());
	}
};

template<>
class ClassT<std::_Num_float_base> : public Class
{
public:
	static Raw<ClassT> Get()
	{
		static ClassT s_Instance;
		return &s_Instance;
	}

protected:
	ClassT() : Class(Class::SetClass<std::_Num_float_base>(this))
	{
		using T = std::_Num_float_base;
		m_Bases.push_back(ClassT<std::_Num_base>::Get());
	}
};

template<>
class ClassT<std::numeric_limits<bool>> : public Class
{
public:
	static Raw<ClassT> Get()
	{
		static ClassT s_Instance;
		return &s_Instance;
	}

protected:
	ClassT() : Class(Class::SetClass<std::numeric_limits<bool>>(this))
	{
		using T = std::numeric_limits<bool>;
		m_Bases.push_back(ClassT<std::_Num_int_base>::Get());
		m_SFields.push_back(Field{.Name = "digits", .Type = Class::Get<const int>()->getName(), .Access = ::New<FuncT<Raw<decltype(T::digits)>>>([]() { return &T::digits; }), });
		m_SMethods.push_back(Method{.Name = "min", .Type = "", .Return = Class::Get<bool>()->getName(), .Access = ::New<FuncT<bool >>([]()->bool { return T::min(); }), });
		m_SMethods.push_back(Method{.Name = "max", .Type = "", .Return = Class::Get<bool>()->getName(), .Access = ::New<FuncT<bool >>([]()->bool { return T::max(); }), });
		m_SMethods.push_back(Method{.Name = "lowest", .Type = "", .Return = Class::Get<bool>()->getName(), .Access = ::New<FuncT<bool >>([]()->bool { return T::lowest(); }), });
		m_SMethods.push_back(Method{.Name = "epsilon", .Type = "", .Return = Class::Get<bool>()->getName(), .Access = ::New<FuncT<bool >>([]()->bool { return T::epsilon(); }), });
		m_SMethods.push_back(Method{.Name = "round_error", .Type = "", .Return = Class::Get<bool>()->getName(), .Access = ::New<FuncT<bool >>([]()->bool { return T::round_error(); }), });
		m_SMethods.push_back(Method{.Name = "denorm_min", .Type = "", .Return = Class::Get<bool>()->getName(), .Access = ::New<FuncT<bool >>([]()->bool { return T::denorm_min(); }), });
		m_SMethods.push_back(Method{.Name = "infinity", .Type = "", .Return = Class::Get<bool>()->getName(), .Access = ::New<FuncT<bool >>([]()->bool { return T::infinity(); }), });
		m_SMethods.push_back(Method{.Name = "quiet_NaN", .Type = "", .Return = Class::Get<bool>()->getName(), .Access = ::New<FuncT<bool >>([]()->bool { return T::quiet_NaN(); }), });
		m_SMethods.push_back(Method{.Name = "signaling_NaN", .Type = "", .Return = Class::Get<bool>()->getName(), .Access = ::New<FuncT<bool >>([]()->bool { return T::signaling_NaN(); }), });
	}
};

template<>
class ClassT<std::numeric_limits<char>> : public Class
{
public:
	static Raw<ClassT> Get()
	{
		static ClassT s_Instance;
		return &s_Instance;
	}

protected:
	ClassT() : Class(Class::SetClass<std::numeric_limits<char>>(this))
	{
		using T = std::numeric_limits<char>;
		m_Bases.push_back(ClassT<std::_Num_int_base>::Get());
		m_SFields.push_back(Field{.Name = "is_signed", .Type = Class::Get<const bool>()->getName(), .Access = ::New<FuncT<Raw<decltype(T::is_signed)>>>([]() { return &T::is_signed; }), });
		m_SFields.push_back(Field{.Name = "is_modulo", .Type = Class::Get<const bool>()->getName(), .Access = ::New<FuncT<Raw<decltype(T::is_modulo)>>>([]() { return &T::is_modulo; }), });
		m_SFields.push_back(Field{.Name = "digits", .Type = Class::Get<const int>()->getName(), .Access = ::New<FuncT<Raw<decltype(T::digits)>>>([]() { return &T::digits; }), });
		m_SFields.push_back(Field{.Name = "digits10", .Type = Class::Get<const int>()->getName(), .Access = ::New<FuncT<Raw<decltype(T::digits10)>>>([]() { return &T::digits10; }), });
		m_SMethods.push_back(Method{.Name = "min", .Type = "", .Return = Class::Get<char>()->getName(), .Access = ::New<FuncT<char >>([]()->char { return T::min(); }), });
		m_SMethods.push_back(Method{.Name = "max", .Type = "", .Return = Class::Get<char>()->getName(), .Access = ::New<FuncT<char >>([]()->char { return T::max(); }), });
		m_SMethods.push_back(Method{.Name = "lowest", .Type = "", .Return = Class::Get<char>()->getName(), .Access = ::New<FuncT<char >>([]()->char { return T::lowest(); }), });
		m_SMethods.push_back(Method{.Name = "epsilon", .Type = "", .Return = Class::Get<char>()->getName(), .Access = ::New<FuncT<char >>([]()->char { return T::epsilon(); }), });
		m_SMethods.push_back(Method{.Name = "round_error", .Type = "", .Return = Class::Get<char>()->getName(), .Access = ::New<FuncT<char >>([]()->char { return T::round_error(); }), });
		m_SMethods.push_back(Method{.Name = "denorm_min", .Type = "", .Return = Class::Get<char>()->getName(), .Access = ::New<FuncT<char >>([]()->char { return T::denorm_min(); }), });
		m_SMethods.push_back(Method{.Name = "infinity", .Type = "", .Return = Class::Get<char>()->getName(), .Access = ::New<FuncT<char >>([]()->char { return T::infinity(); }), });
		m_SMethods.push_back(Method{.Name = "quiet_NaN", .Type = "", .Return = Class::Get<char>()->getName(), .Access = ::New<FuncT<char >>([]()->char { return T::quiet_NaN(); }), });
		m_SMethods.push_back(Method{.Name = "signaling_NaN", .Type = "", .Return = Class::Get<char>()->getName(), .Access = ::New<FuncT<char >>([]()->char { return T::signaling_NaN(); }), });
	}
};

template<>
class ClassT<std::numeric_limits<signed char>> : public Class
{
public:
	static Raw<ClassT> Get()
	{
		static ClassT s_Instance;
		return &s_Instance;
	}

protected:
	ClassT() : Class(Class::SetClass<std::numeric_limits<signed char>>(this))
	{
		using T = std::numeric_limits<signed char>;
		m_Bases.push_back(ClassT<std::_Num_int_base>::Get());
		m_SFields.push_back(Field{.Name = "is_signed", .Type = Class::Get<const bool>()->getName(), .Access = ::New<FuncT<Raw<decltype(T::is_signed)>>>([]() { return &T::is_signed; }), });
		m_SFields.push_back(Field{.Name = "digits", .Type = Class::Get<const int>()->getName(), .Access = ::New<FuncT<Raw<decltype(T::digits)>>>([]() { return &T::digits; }), });
		m_SFields.push_back(Field{.Name = "digits10", .Type = Class::Get<const int>()->getName(), .Access = ::New<FuncT<Raw<decltype(T::digits10)>>>([]() { return &T::digits10; }), });
		m_SMethods.push_back(Method{.Name = "min", .Type = "", .Return = Class::Get<signed char>()->getName(), .Access = ::New<FuncT<signed char >>([]()->signed char { return T::min(); }), });
		m_SMethods.push_back(Method{.Name = "max", .Type = "", .Return = Class::Get<signed char>()->getName(), .Access = ::New<FuncT<signed char >>([]()->signed char { return T::max(); }), });
		m_SMethods.push_back(Method{.Name = "lowest", .Type = "", .Return = Class::Get<signed char>()->getName(), .Access = ::New<FuncT<signed char >>([]()->signed char { return T::lowest(); }), });
		m_SMethods.push_back(Method{.Name = "epsilon", .Type = "", .Return = Class::Get<signed char>()->getName(), .Access = ::New<FuncT<signed char >>([]()->signed char { return T::epsilon(); }), });
		m_SMethods.push_back(Method{.Name = "round_error", .Type = "", .Return = Class::Get<signed char>()->getName(), .Access = ::New<FuncT<signed char >>([]()->signed char { return T::round_error(); }), });
		m_SMethods.push_back(Method{.Name = "denorm_min", .Type = "", .Return = Class::Get<signed char>()->getName(), .Access = ::New<FuncT<signed char >>([]()->signed char { return T::denorm_min(); }), });
		m_SMethods.push_back(Method{.Name = "infinity", .Type = "", .Return = Class::Get<signed char>()->getName(), .Access = ::New<FuncT<signed char >>([]()->signed char { return T::infinity(); }), });
		m_SMethods.push_back(Method{.Name = "quiet_NaN", .Type = "", .Return = Class::Get<signed char>()->getName(), .Access = ::New<FuncT<signed char >>([]()->signed char { return T::quiet_NaN(); }), });
		m_SMethods.push_back(Method{.Name = "signaling_NaN", .Type = "", .Return = Class::Get<signed char>()->getName(), .Access = ::New<FuncT<signed char >>([]()->signed char { return T::signaling_NaN(); }), });
	}
};

template<>
class ClassT<std::numeric_limits<unsigned char>> : public Class
{
public:
	static Raw<ClassT> Get()
	{
		static ClassT s_Instance;
		return &s_Instance;
	}

protected:
	ClassT() : Class(Class::SetClass<std::numeric_limits<unsigned char>>(this))
	{
		using T = std::numeric_limits<unsigned char>;
		m_Bases.push_back(ClassT<std::_Num_int_base>::Get());
		m_SFields.push_back(Field{.Name = "is_modulo", .Type = Class::Get<const bool>()->getName(), .Access = ::New<FuncT<Raw<decltype(T::is_modulo)>>>([]() { return &T::is_modulo; }), });
		m_SFields.push_back(Field{.Name = "digits", .Type = Class::Get<const int>()->getName(), .Access = ::New<FuncT<Raw<decltype(T::digits)>>>([]() { return &T::digits; }), });
		m_SFields.push_back(Field{.Name = "digits10", .Type = Class::Get<const int>()->getName(), .Access = ::New<FuncT<Raw<decltype(T::digits10)>>>([]() { return &T::digits10; }), });
		m_SMethods.push_back(Method{.Name = "min", .Type = "", .Return = Class::Get<unsigned char>()->getName(), .Access = ::New<FuncT<unsigned char >>([]()->unsigned char { return T::min(); }), });
		m_SMethods.push_back(Method{.Name = "max", .Type = "", .Return = Class::Get<unsigned char>()->getName(), .Access = ::New<FuncT<unsigned char >>([]()->unsigned char { return T::max(); }), });
		m_SMethods.push_back(Method{.Name = "lowest", .Type = "", .Return = Class::Get<unsigned char>()->getName(), .Access = ::New<FuncT<unsigned char >>([]()->unsigned char { return T::lowest(); }), });
		m_SMethods.push_back(Method{.Name = "epsilon", .Type = "", .Return = Class::Get<unsigned char>()->getName(), .Access = ::New<FuncT<unsigned char >>([]()->unsigned char { return T::epsilon(); }), });
		m_SMethods.push_back(Method{.Name = "round_error", .Type = "", .Return = Class::Get<unsigned char>()->getName(), .Access = ::New<FuncT<unsigned char >>([]()->unsigned char { return T::round_error(); }), });
		m_SMethods.push_back(Method{.Name = "denorm_min", .Type = "", .Return = Class::Get<unsigned char>()->getName(), .Access = ::New<FuncT<unsigned char >>([]()->unsigned char { return T::denorm_min(); }), });
		m_SMethods.push_back(Method{.Name = "infinity", .Type = "", .Return = Class::Get<unsigned char>()->getName(), .Access = ::New<FuncT<unsigned char >>([]()->unsigned char { return T::infinity(); }), });
		m_SMethods.push_back(Method{.Name = "quiet_NaN", .Type = "", .Return = Class::Get<unsigned char>()->getName(), .Access = ::New<FuncT<unsigned char >>([]()->unsigned char { return T::quiet_NaN(); }), });
		m_SMethods.push_back(Method{.Name = "signaling_NaN", .Type = "", .Return = Class::Get<unsigned char>()->getName(), .Access = ::New<FuncT<unsigned char >>([]()->unsigned char { return T::signaling_NaN(); }), });
	}
};

template<>
class ClassT<std::numeric_limits<char8_t>> : public Class
{
public:
	static Raw<ClassT> Get()
	{
		static ClassT s_Instance;
		return &s_Instance;
	}

protected:
	ClassT() : Class(Class::SetClass<std::numeric_limits<char8_t>>(this))
	{
		using T = std::numeric_limits<char8_t>;
		m_Bases.push_back(ClassT<std::_Num_int_base>::Get());
		m_SFields.push_back(Field{.Name = "is_modulo", .Type = Class::Get<const bool>()->getName(), .Access = ::New<FuncT<Raw<decltype(T::is_modulo)>>>([]() { return &T::is_modulo; }), });
		m_SFields.push_back(Field{.Name = "digits", .Type = Class::Get<const int>()->getName(), .Access = ::New<FuncT<Raw<decltype(T::digits)>>>([]() { return &T::digits; }), });
		m_SFields.push_back(Field{.Name = "digits10", .Type = Class::Get<const int>()->getName(), .Access = ::New<FuncT<Raw<decltype(T::digits10)>>>([]() { return &T::digits10; }), });
		m_SMethods.push_back(Method{.Name = "min", .Type = "", .Return = Class::Get<char8_t>()->getName(), .Access = ::New<FuncT<char8_t >>([]()->char8_t { return T::min(); }), });
		m_SMethods.push_back(Method{.Name = "max", .Type = "", .Return = Class::Get<char8_t>()->getName(), .Access = ::New<FuncT<char8_t >>([]()->char8_t { return T::max(); }), });
		m_SMethods.push_back(Method{.Name = "lowest", .Type = "", .Return = Class::Get<char8_t>()->getName(), .Access = ::New<FuncT<char8_t >>([]()->char8_t { return T::lowest(); }), });
		m_SMethods.push_back(Method{.Name = "epsilon", .Type = "", .Return = Class::Get<char8_t>()->getName(), .Access = ::New<FuncT<char8_t >>([]()->char8_t { return T::epsilon(); }), });
		m_SMethods.push_back(Method{.Name = "round_error", .Type = "", .Return = Class::Get<char8_t>()->getName(), .Access = ::New<FuncT<char8_t >>([]()->char8_t { return T::round_error(); }), });
		m_SMethods.push_back(Method{.Name = "denorm_min", .Type = "", .Return = Class::Get<char8_t>()->getName(), .Access = ::New<FuncT<char8_t >>([]()->char8_t { return T::denorm_min(); }), });
		m_SMethods.push_back(Method{.Name = "infinity", .Type = "", .Return = Class::Get<char8_t>()->getName(), .Access = ::New<FuncT<char8_t >>([]()->char8_t { return T::infinity(); }), });
		m_SMethods.push_back(Method{.Name = "quiet_NaN", .Type = "", .Return = Class::Get<char8_t>()->getName(), .Access = ::New<FuncT<char8_t >>([]()->char8_t { return T::quiet_NaN(); }), });
		m_SMethods.push_back(Method{.Name = "signaling_NaN", .Type = "", .Return = Class::Get<char8_t>()->getName(), .Access = ::New<FuncT<char8_t >>([]()->char8_t { return T::signaling_NaN(); }), });
	}
};

template<>
class ClassT<std::numeric_limits<char16_t>> : public Class
{
public:
	static Raw<ClassT> Get()
	{
		static ClassT s_Instance;
		return &s_Instance;
	}

protected:
	ClassT() : Class(Class::SetClass<std::numeric_limits<char16_t>>(this))
	{
		using T = std::numeric_limits<char16_t>;
		m_Bases.push_back(ClassT<std::_Num_int_base>::Get());
		m_SFields.push_back(Field{.Name = "is_modulo", .Type = Class::Get<const bool>()->getName(), .Access = ::New<FuncT<Raw<decltype(T::is_modulo)>>>([]() { return &T::is_modulo; }), });
		m_SFields.push_back(Field{.Name = "digits", .Type = Class::Get<const int>()->getName(), .Access = ::New<FuncT<Raw<decltype(T::digits)>>>([]() { return &T::digits; }), });
		m_SFields.push_back(Field{.Name = "digits10", .Type = Class::Get<const int>()->getName(), .Access = ::New<FuncT<Raw<decltype(T::digits10)>>>([]() { return &T::digits10; }), });
		m_SMethods.push_back(Method{.Name = "min", .Type = "", .Return = Class::Get<char16_t>()->getName(), .Access = ::New<FuncT<char16_t >>([]()->char16_t { return T::min(); }), });
		m_SMethods.push_back(Method{.Name = "max", .Type = "", .Return = Class::Get<char16_t>()->getName(), .Access = ::New<FuncT<char16_t >>([]()->char16_t { return T::max(); }), });
		m_SMethods.push_back(Method{.Name = "lowest", .Type = "", .Return = Class::Get<char16_t>()->getName(), .Access = ::New<FuncT<char16_t >>([]()->char16_t { return T::lowest(); }), });
		m_SMethods.push_back(Method{.Name = "epsilon", .Type = "", .Return = Class::Get<char16_t>()->getName(), .Access = ::New<FuncT<char16_t >>([]()->char16_t { return T::epsilon(); }), });
		m_SMethods.push_back(Method{.Name = "round_error", .Type = "", .Return = Class::Get<char16_t>()->getName(), .Access = ::New<FuncT<char16_t >>([]()->char16_t { return T::round_error(); }), });
		m_SMethods.push_back(Method{.Name = "denorm_min", .Type = "", .Return = Class::Get<char16_t>()->getName(), .Access = ::New<FuncT<char16_t >>([]()->char16_t { return T::denorm_min(); }), });
		m_SMethods.push_back(Method{.Name = "infinity", .Type = "", .Return = Class::Get<char16_t>()->getName(), .Access = ::New<FuncT<char16_t >>([]()->char16_t { return T::infinity(); }), });
		m_SMethods.push_back(Method{.Name = "quiet_NaN", .Type = "", .Return = Class::Get<char16_t>()->getName(), .Access = ::New<FuncT<char16_t >>([]()->char16_t { return T::quiet_NaN(); }), });
		m_SMethods.push_back(Method{.Name = "signaling_NaN", .Type = "", .Return = Class::Get<char16_t>()->getName(), .Access = ::New<FuncT<char16_t >>([]()->char16_t { return T::signaling_NaN(); }), });
	}
};

template<>
class ClassT<std::numeric_limits<char32_t>> : public Class
{
public:
	static Raw<ClassT> Get()
	{
		static ClassT s_Instance;
		return &s_Instance;
	}

protected:
	ClassT() : Class(Class::SetClass<std::numeric_limits<char32_t>>(this))
	{
		using T = std::numeric_limits<char32_t>;
		m_Bases.push_back(ClassT<std::_Num_int_base>::Get());
		m_SFields.push_back(Field{.Name = "is_modulo", .Type = Class::Get<const bool>()->getName(), .Access = ::New<FuncT<Raw<decltype(T::is_modulo)>>>([]() { return &T::is_modulo; }), });
		m_SFields.push_back(Field{.Name = "digits", .Type = Class::Get<const int>()->getName(), .Access = ::New<FuncT<Raw<decltype(T::digits)>>>([]() { return &T::digits; }), });
		m_SFields.push_back(Field{.Name = "digits10", .Type = Class::Get<const int>()->getName(), .Access = ::New<FuncT<Raw<decltype(T::digits10)>>>([]() { return &T::digits10; }), });
		m_SMethods.push_back(Method{.Name = "min", .Type = "", .Return = Class::Get<char32_t>()->getName(), .Access = ::New<FuncT<char32_t >>([]()->char32_t { return T::min(); }), });
		m_SMethods.push_back(Method{.Name = "max", .Type = "", .Return = Class::Get<char32_t>()->getName(), .Access = ::New<FuncT<char32_t >>([]()->char32_t { return T::max(); }), });
		m_SMethods.push_back(Method{.Name = "lowest", .Type = "", .Return = Class::Get<char32_t>()->getName(), .Access = ::New<FuncT<char32_t >>([]()->char32_t { return T::lowest(); }), });
		m_SMethods.push_back(Method{.Name = "epsilon", .Type = "", .Return = Class::Get<char32_t>()->getName(), .Access = ::New<FuncT<char32_t >>([]()->char32_t { return T::epsilon(); }), });
		m_SMethods.push_back(Method{.Name = "round_error", .Type = "", .Return = Class::Get<char32_t>()->getName(), .Access = ::New<FuncT<char32_t >>([]()->char32_t { return T::round_error(); }), });
		m_SMethods.push_back(Method{.Name = "denorm_min", .Type = "", .Return = Class::Get<char32_t>()->getName(), .Access = ::New<FuncT<char32_t >>([]()->char32_t { return T::denorm_min(); }), });
		m_SMethods.push_back(Method{.Name = "infinity", .Type = "", .Return = Class::Get<char32_t>()->getName(), .Access = ::New<FuncT<char32_t >>([]()->char32_t { return T::infinity(); }), });
		m_SMethods.push_back(Method{.Name = "quiet_NaN", .Type = "", .Return = Class::Get<char32_t>()->getName(), .Access = ::New<FuncT<char32_t >>([]()->char32_t { return T::quiet_NaN(); }), });
		m_SMethods.push_back(Method{.Name = "signaling_NaN", .Type = "", .Return = Class::Get<char32_t>()->getName(), .Access = ::New<FuncT<char32_t >>([]()->char32_t { return T::signaling_NaN(); }), });
	}
};

template<>
class ClassT<std::numeric_limits<wchar_t>> : public Class
{
public:
	static Raw<ClassT> Get()
	{
		static ClassT s_Instance;
		return &s_Instance;
	}

protected:
	ClassT() : Class(Class::SetClass<std::numeric_limits<wchar_t>>(this))
	{
		using T = std::numeric_limits<wchar_t>;
		m_Bases.push_back(ClassT<std::_Num_int_base>::Get());
		m_SFields.push_back(Field{.Name = "is_modulo", .Type = Class::Get<const bool>()->getName(), .Access = ::New<FuncT<Raw<decltype(T::is_modulo)>>>([]() { return &T::is_modulo; }), });
		m_SFields.push_back(Field{.Name = "digits", .Type = Class::Get<const int>()->getName(), .Access = ::New<FuncT<Raw<decltype(T::digits)>>>([]() { return &T::digits; }), });
		m_SFields.push_back(Field{.Name = "digits10", .Type = Class::Get<const int>()->getName(), .Access = ::New<FuncT<Raw<decltype(T::digits10)>>>([]() { return &T::digits10; }), });
		m_SMethods.push_back(Method{.Name = "min", .Type = "", .Return = Class::Get<wchar_t>()->getName(), .Access = ::New<FuncT<wchar_t >>([]()->wchar_t { return T::min(); }), });
		m_SMethods.push_back(Method{.Name = "max", .Type = "", .Return = Class::Get<wchar_t>()->getName(), .Access = ::New<FuncT<wchar_t >>([]()->wchar_t { return T::max(); }), });
		m_SMethods.push_back(Method{.Name = "lowest", .Type = "", .Return = Class::Get<wchar_t>()->getName(), .Access = ::New<FuncT<wchar_t >>([]()->wchar_t { return T::lowest(); }), });
		m_SMethods.push_back(Method{.Name = "epsilon", .Type = "", .Return = Class::Get<wchar_t>()->getName(), .Access = ::New<FuncT<wchar_t >>([]()->wchar_t { return T::epsilon(); }), });
		m_SMethods.push_back(Method{.Name = "round_error", .Type = "", .Return = Class::Get<wchar_t>()->getName(), .Access = ::New<FuncT<wchar_t >>([]()->wchar_t { return T::round_error(); }), });
		m_SMethods.push_back(Method{.Name = "denorm_min", .Type = "", .Return = Class::Get<wchar_t>()->getName(), .Access = ::New<FuncT<wchar_t >>([]()->wchar_t { return T::denorm_min(); }), });
		m_SMethods.push_back(Method{.Name = "infinity", .Type = "", .Return = Class::Get<wchar_t>()->getName(), .Access = ::New<FuncT<wchar_t >>([]()->wchar_t { return T::infinity(); }), });
		m_SMethods.push_back(Method{.Name = "quiet_NaN", .Type = "", .Return = Class::Get<wchar_t>()->getName(), .Access = ::New<FuncT<wchar_t >>([]()->wchar_t { return T::quiet_NaN(); }), });
		m_SMethods.push_back(Method{.Name = "signaling_NaN", .Type = "", .Return = Class::Get<wchar_t>()->getName(), .Access = ::New<FuncT<wchar_t >>([]()->wchar_t { return T::signaling_NaN(); }), });
	}
};

template<>
class ClassT<std::numeric_limits<short>> : public Class
{
public:
	static Raw<ClassT> Get()
	{
		static ClassT s_Instance;
		return &s_Instance;
	}

protected:
	ClassT() : Class(Class::SetClass<std::numeric_limits<short>>(this))
	{
		using T = std::numeric_limits<short>;
		m_Bases.push_back(ClassT<std::_Num_int_base>::Get());
		m_SFields.push_back(Field{.Name = "is_signed", .Type = Class::Get<const bool>()->getName(), .Access = ::New<FuncT<Raw<decltype(T::is_signed)>>>([]() { return &T::is_signed; }), });
		m_SFields.push_back(Field{.Name = "digits", .Type = Class::Get<const int>()->getName(), .Access = ::New<FuncT<Raw<decltype(T::digits)>>>([]() { return &T::digits; }), });
		m_SFields.push_back(Field{.Name = "digits10", .Type = Class::Get<const int>()->getName(), .Access = ::New<FuncT<Raw<decltype(T::digits10)>>>([]() { return &T::digits10; }), });
		m_SMethods.push_back(Method{.Name = "min", .Type = "", .Return = Class::Get<short>()->getName(), .Access = ::New<FuncT<short >>([]()->short { return T::min(); }), });
		m_SMethods.push_back(Method{.Name = "max", .Type = "", .Return = Class::Get<short>()->getName(), .Access = ::New<FuncT<short >>([]()->short { return T::max(); }), });
		m_SMethods.push_back(Method{.Name = "lowest", .Type = "", .Return = Class::Get<short>()->getName(), .Access = ::New<FuncT<short >>([]()->short { return T::lowest(); }), });
		m_SMethods.push_back(Method{.Name = "epsilon", .Type = "", .Return = Class::Get<short>()->getName(), .Access = ::New<FuncT<short >>([]()->short { return T::epsilon(); }), });
		m_SMethods.push_back(Method{.Name = "round_error", .Type = "", .Return = Class::Get<short>()->getName(), .Access = ::New<FuncT<short >>([]()->short { return T::round_error(); }), });
		m_SMethods.push_back(Method{.Name = "denorm_min", .Type = "", .Return = Class::Get<short>()->getName(), .Access = ::New<FuncT<short >>([]()->short { return T::denorm_min(); }), });
		m_SMethods.push_back(Method{.Name = "infinity", .Type = "", .Return = Class::Get<short>()->getName(), .Access = ::New<FuncT<short >>([]()->short { return T::infinity(); }), });
		m_SMethods.push_back(Method{.Name = "quiet_NaN", .Type = "", .Return = Class::Get<short>()->getName(), .Access = ::New<FuncT<short >>([]()->short { return T::quiet_NaN(); }), });
		m_SMethods.push_back(Method{.Name = "signaling_NaN", .Type = "", .Return = Class::Get<short>()->getName(), .Access = ::New<FuncT<short >>([]()->short { return T::signaling_NaN(); }), });
	}
};

template<>
class ClassT<std::numeric_limits<int>> : public Class
{
public:
	static Raw<ClassT> Get()
	{
		static ClassT s_Instance;
		return &s_Instance;
	}

protected:
	ClassT() : Class(Class::SetClass<std::numeric_limits<int>>(this))
	{
		using T = std::numeric_limits<int>;
		m_Bases.push_back(ClassT<std::_Num_int_base>::Get());
		m_SFields.push_back(Field{.Name = "is_signed", .Type = Class::Get<const bool>()->getName(), .Access = ::New<FuncT<Raw<decltype(T::is_signed)>>>([]() { return &T::is_signed; }), });
		m_SFields.push_back(Field{.Name = "digits", .Type = Class::Get<const int>()->getName(), .Access = ::New<FuncT<Raw<decltype(T::digits)>>>([]() { return &T::digits; }), });
		m_SFields.push_back(Field{.Name = "digits10", .Type = Class::Get<const int>()->getName(), .Access = ::New<FuncT<Raw<decltype(T::digits10)>>>([]() { return &T::digits10; }), });
		m_SMethods.push_back(Method{.Name = "min", .Type = "", .Return = Class::Get<int>()->getName(), .Access = ::New<FuncT<int >>([]()->int { return T::min(); }), });
		m_SMethods.push_back(Method{.Name = "max", .Type = "", .Return = Class::Get<int>()->getName(), .Access = ::New<FuncT<int >>([]()->int { return T::max(); }), });
		m_SMethods.push_back(Method{.Name = "lowest", .Type = "", .Return = Class::Get<int>()->getName(), .Access = ::New<FuncT<int >>([]()->int { return T::lowest(); }), });
		m_SMethods.push_back(Method{.Name = "epsilon", .Type = "", .Return = Class::Get<int>()->getName(), .Access = ::New<FuncT<int >>([]()->int { return T::epsilon(); }), });
		m_SMethods.push_back(Method{.Name = "round_error", .Type = "", .Return = Class::Get<int>()->getName(), .Access = ::New<FuncT<int >>([]()->int { return T::round_error(); }), });
		m_SMethods.push_back(Method{.Name = "denorm_min", .Type = "", .Return = Class::Get<int>()->getName(), .Access = ::New<FuncT<int >>([]()->int { return T::denorm_min(); }), });
		m_SMethods.push_back(Method{.Name = "infinity", .Type = "", .Return = Class::Get<int>()->getName(), .Access = ::New<FuncT<int >>([]()->int { return T::infinity(); }), });
		m_SMethods.push_back(Method{.Name = "quiet_NaN", .Type = "", .Return = Class::Get<int>()->getName(), .Access = ::New<FuncT<int >>([]()->int { return T::quiet_NaN(); }), });
		m_SMethods.push_back(Method{.Name = "signaling_NaN", .Type = "", .Return = Class::Get<int>()->getName(), .Access = ::New<FuncT<int >>([]()->int { return T::signaling_NaN(); }), });
	}
};

template<>
class ClassT<std::numeric_limits<long>> : public Class
{
public:
	static Raw<ClassT> Get()
	{
		static ClassT s_Instance;
		return &s_Instance;
	}

protected:
	ClassT() : Class(Class::SetClass<std::numeric_limits<long>>(this))
	{
		using T = std::numeric_limits<long>;
		m_Bases.push_back(ClassT<std::_Num_int_base>::Get());
		m_SFields.push_back(Field{.Name = "is_signed", .Type = Class::Get<const bool>()->getName(), .Access = ::New<FuncT<Raw<decltype(T::is_signed)>>>([]() { return &T::is_signed; }), });
		m_SFields.push_back(Field{.Name = "digits", .Type = Class::Get<const int>()->getName(), .Access = ::New<FuncT<Raw<decltype(T::digits)>>>([]() { return &T::digits; }), });
		m_SFields.push_back(Field{.Name = "digits10", .Type = Class::Get<const int>()->getName(), .Access = ::New<FuncT<Raw<decltype(T::digits10)>>>([]() { return &T::digits10; }), });
		m_SMethods.push_back(Method{.Name = "min", .Type = "", .Return = Class::Get<long>()->getName(), .Access = ::New<FuncT<long >>([]()->long { return T::min(); }), });
		m_SMethods.push_back(Method{.Name = "max", .Type = "", .Return = Class::Get<long>()->getName(), .Access = ::New<FuncT<long >>([]()->long { return T::max(); }), });
		m_SMethods.push_back(Method{.Name = "lowest", .Type = "", .Return = Class::Get<long>()->getName(), .Access = ::New<FuncT<long >>([]()->long { return T::lowest(); }), });
		m_SMethods.push_back(Method{.Name = "epsilon", .Type = "", .Return = Class::Get<long>()->getName(), .Access = ::New<FuncT<long >>([]()->long { return T::epsilon(); }), });
		m_SMethods.push_back(Method{.Name = "round_error", .Type = "", .Return = Class::Get<long>()->getName(), .Access = ::New<FuncT<long >>([]()->long { return T::round_error(); }), });
		m_SMethods.push_back(Method{.Name = "denorm_min", .Type = "", .Return = Class::Get<long>()->getName(), .Access = ::New<FuncT<long >>([]()->long { return T::denorm_min(); }), });
		m_SMethods.push_back(Method{.Name = "infinity", .Type = "", .Return = Class::Get<long>()->getName(), .Access = ::New<FuncT<long >>([]()->long { return T::infinity(); }), });
		m_SMethods.push_back(Method{.Name = "quiet_NaN", .Type = "", .Return = Class::Get<long>()->getName(), .Access = ::New<FuncT<long >>([]()->long { return T::quiet_NaN(); }), });
		m_SMethods.push_back(Method{.Name = "signaling_NaN", .Type = "", .Return = Class::Get<long>()->getName(), .Access = ::New<FuncT<long >>([]()->long { return T::signaling_NaN(); }), });
	}
};

template<>
class ClassT<std::numeric_limits<long long>> : public Class
{
public:
	static Raw<ClassT> Get()
	{
		static ClassT s_Instance;
		return &s_Instance;
	}

protected:
	ClassT() : Class(Class::SetClass<std::numeric_limits<long long>>(this))
	{
		using T = std::numeric_limits<long long>;
		m_Bases.push_back(ClassT<std::_Num_int_base>::Get());
		m_SFields.push_back(Field{.Name = "is_signed", .Type = Class::Get<const bool>()->getName(), .Access = ::New<FuncT<Raw<decltype(T::is_signed)>>>([]() { return &T::is_signed; }), });
		m_SFields.push_back(Field{.Name = "digits", .Type = Class::Get<const int>()->getName(), .Access = ::New<FuncT<Raw<decltype(T::digits)>>>([]() { return &T::digits; }), });
		m_SFields.push_back(Field{.Name = "digits10", .Type = Class::Get<const int>()->getName(), .Access = ::New<FuncT<Raw<decltype(T::digits10)>>>([]() { return &T::digits10; }), });
		m_SMethods.push_back(Method{.Name = "min", .Type = "", .Return = Class::Get<long long>()->getName(), .Access = ::New<FuncT<long long >>([]()->long long { return T::min(); }), });
		m_SMethods.push_back(Method{.Name = "max", .Type = "", .Return = Class::Get<long long>()->getName(), .Access = ::New<FuncT<long long >>([]()->long long { return T::max(); }), });
		m_SMethods.push_back(Method{.Name = "lowest", .Type = "", .Return = Class::Get<long long>()->getName(), .Access = ::New<FuncT<long long >>([]()->long long { return T::lowest(); }), });
		m_SMethods.push_back(Method{.Name = "epsilon", .Type = "", .Return = Class::Get<long long>()->getName(), .Access = ::New<FuncT<long long >>([]()->long long { return T::epsilon(); }), });
		m_SMethods.push_back(Method{.Name = "round_error", .Type = "", .Return = Class::Get<long long>()->getName(), .Access = ::New<FuncT<long long >>([]()->long long { return T::round_error(); }), });
		m_SMethods.push_back(Method{.Name = "denorm_min", .Type = "", .Return = Class::Get<long long>()->getName(), .Access = ::New<FuncT<long long >>([]()->long long { return T::denorm_min(); }), });
		m_SMethods.push_back(Method{.Name = "infinity", .Type = "", .Return = Class::Get<long long>()->getName(), .Access = ::New<FuncT<long long >>([]()->long long { return T::infinity(); }), });
		m_SMethods.push_back(Method{.Name = "quiet_NaN", .Type = "", .Return = Class::Get<long long>()->getName(), .Access = ::New<FuncT<long long >>([]()->long long { return T::quiet_NaN(); }), });
		m_SMethods.push_back(Method{.Name = "signaling_NaN", .Type = "", .Return = Class::Get<long long>()->getName(), .Access = ::New<FuncT<long long >>([]()->long long { return T::signaling_NaN(); }), });
	}
};

template<>
class ClassT<std::numeric_limits<unsigned short>> : public Class
{
public:
	static Raw<ClassT> Get()
	{
		static ClassT s_Instance;
		return &s_Instance;
	}

protected:
	ClassT() : Class(Class::SetClass<std::numeric_limits<unsigned short>>(this))
	{
		using T = std::numeric_limits<unsigned short>;
		m_Bases.push_back(ClassT<std::_Num_int_base>::Get());
		m_SFields.push_back(Field{.Name = "is_modulo", .Type = Class::Get<const bool>()->getName(), .Access = ::New<FuncT<Raw<decltype(T::is_modulo)>>>([]() { return &T::is_modulo; }), });
		m_SFields.push_back(Field{.Name = "digits", .Type = Class::Get<const int>()->getName(), .Access = ::New<FuncT<Raw<decltype(T::digits)>>>([]() { return &T::digits; }), });
		m_SFields.push_back(Field{.Name = "digits10", .Type = Class::Get<const int>()->getName(), .Access = ::New<FuncT<Raw<decltype(T::digits10)>>>([]() { return &T::digits10; }), });
		m_SMethods.push_back(Method{.Name = "min", .Type = "", .Return = Class::Get<unsigned short>()->getName(), .Access = ::New<FuncT<unsigned short >>([]()->unsigned short { return T::min(); }), });
		m_SMethods.push_back(Method{.Name = "max", .Type = "", .Return = Class::Get<unsigned short>()->getName(), .Access = ::New<FuncT<unsigned short >>([]()->unsigned short { return T::max(); }), });
		m_SMethods.push_back(Method{.Name = "lowest", .Type = "", .Return = Class::Get<unsigned short>()->getName(), .Access = ::New<FuncT<unsigned short >>([]()->unsigned short { return T::lowest(); }), });
		m_SMethods.push_back(Method{.Name = "epsilon", .Type = "", .Return = Class::Get<unsigned short>()->getName(), .Access = ::New<FuncT<unsigned short >>([]()->unsigned short { return T::epsilon(); }), });
		m_SMethods.push_back(Method{.Name = "round_error", .Type = "", .Return = Class::Get<unsigned short>()->getName(), .Access = ::New<FuncT<unsigned short >>([]()->unsigned short { return T::round_error(); }), });
		m_SMethods.push_back(Method{.Name = "denorm_min", .Type = "", .Return = Class::Get<unsigned short>()->getName(), .Access = ::New<FuncT<unsigned short >>([]()->unsigned short { return T::denorm_min(); }), });
		m_SMethods.push_back(Method{.Name = "infinity", .Type = "", .Return = Class::Get<unsigned short>()->getName(), .Access = ::New<FuncT<unsigned short >>([]()->unsigned short { return T::infinity(); }), });
		m_SMethods.push_back(Method{.Name = "quiet_NaN", .Type = "", .Return = Class::Get<unsigned short>()->getName(), .Access = ::New<FuncT<unsigned short >>([]()->unsigned short { return T::quiet_NaN(); }), });
		m_SMethods.push_back(Method{.Name = "signaling_NaN", .Type = "", .Return = Class::Get<unsigned short>()->getName(), .Access = ::New<FuncT<unsigned short >>([]()->unsigned short { return T::signaling_NaN(); }), });
	}
};

template<>
class ClassT<std::numeric_limits<unsigned int>> : public Class
{
public:
	static Raw<ClassT> Get()
	{
		static ClassT s_Instance;
		return &s_Instance;
	}

protected:
	ClassT() : Class(Class::SetClass<std::numeric_limits<unsigned int>>(this))
	{
		using T = std::numeric_limits<unsigned int>;
		m_Bases.push_back(ClassT<std::_Num_int_base>::Get());
		m_SFields.push_back(Field{.Name = "is_modulo", .Type = Class::Get<const bool>()->getName(), .Access = ::New<FuncT<Raw<decltype(T::is_modulo)>>>([]() { return &T::is_modulo; }), });
		m_SFields.push_back(Field{.Name = "digits", .Type = Class::Get<const int>()->getName(), .Access = ::New<FuncT<Raw<decltype(T::digits)>>>([]() { return &T::digits; }), });
		m_SFields.push_back(Field{.Name = "digits10", .Type = Class::Get<const int>()->getName(), .Access = ::New<FuncT<Raw<decltype(T::digits10)>>>([]() { return &T::digits10; }), });
		m_SMethods.push_back(Method{.Name = "min", .Type = "", .Return = Class::Get<unsigned int>()->getName(), .Access = ::New<FuncT<unsigned int >>([]()->unsigned int { return T::min(); }), });
		m_SMethods.push_back(Method{.Name = "max", .Type = "", .Return = Class::Get<unsigned int>()->getName(), .Access = ::New<FuncT<unsigned int >>([]()->unsigned int { return T::max(); }), });
		m_SMethods.push_back(Method{.Name = "lowest", .Type = "", .Return = Class::Get<unsigned int>()->getName(), .Access = ::New<FuncT<unsigned int >>([]()->unsigned int { return T::lowest(); }), });
		m_SMethods.push_back(Method{.Name = "epsilon", .Type = "", .Return = Class::Get<unsigned int>()->getName(), .Access = ::New<FuncT<unsigned int >>([]()->unsigned int { return T::epsilon(); }), });
		m_SMethods.push_back(Method{.Name = "round_error", .Type = "", .Return = Class::Get<unsigned int>()->getName(), .Access = ::New<FuncT<unsigned int >>([]()->unsigned int { return T::round_error(); }), });
		m_SMethods.push_back(Method{.Name = "denorm_min", .Type = "", .Return = Class::Get<unsigned int>()->getName(), .Access = ::New<FuncT<unsigned int >>([]()->unsigned int { return T::denorm_min(); }), });
		m_SMethods.push_back(Method{.Name = "infinity", .Type = "", .Return = Class::Get<unsigned int>()->getName(), .Access = ::New<FuncT<unsigned int >>([]()->unsigned int { return T::infinity(); }), });
		m_SMethods.push_back(Method{.Name = "quiet_NaN", .Type = "", .Return = Class::Get<unsigned int>()->getName(), .Access = ::New<FuncT<unsigned int >>([]()->unsigned int { return T::quiet_NaN(); }), });
		m_SMethods.push_back(Method{.Name = "signaling_NaN", .Type = "", .Return = Class::Get<unsigned int>()->getName(), .Access = ::New<FuncT<unsigned int >>([]()->unsigned int { return T::signaling_NaN(); }), });
	}
};

template<>
class ClassT<std::numeric_limits<unsigned long>> : public Class
{
public:
	static Raw<ClassT> Get()
	{
		static ClassT s_Instance;
		return &s_Instance;
	}

protected:
	ClassT() : Class(Class::SetClass<std::numeric_limits<unsigned long>>(this))
	{
		using T = std::numeric_limits<unsigned long>;
		m_Bases.push_back(ClassT<std::_Num_int_base>::Get());
		m_SFields.push_back(Field{.Name = "is_modulo", .Type = Class::Get<const bool>()->getName(), .Access = ::New<FuncT<Raw<decltype(T::is_modulo)>>>([]() { return &T::is_modulo; }), });
		m_SFields.push_back(Field{.Name = "digits", .Type = Class::Get<const int>()->getName(), .Access = ::New<FuncT<Raw<decltype(T::digits)>>>([]() { return &T::digits; }), });
		m_SFields.push_back(Field{.Name = "digits10", .Type = Class::Get<const int>()->getName(), .Access = ::New<FuncT<Raw<decltype(T::digits10)>>>([]() { return &T::digits10; }), });
		m_SMethods.push_back(Method{.Name = "min", .Type = "", .Return = Class::Get<unsigned long>()->getName(), .Access = ::New<FuncT<unsigned long >>([]()->unsigned long { return T::min(); }), });
		m_SMethods.push_back(Method{.Name = "max", .Type = "", .Return = Class::Get<unsigned long>()->getName(), .Access = ::New<FuncT<unsigned long >>([]()->unsigned long { return T::max(); }), });
		m_SMethods.push_back(Method{.Name = "lowest", .Type = "", .Return = Class::Get<unsigned long>()->getName(), .Access = ::New<FuncT<unsigned long >>([]()->unsigned long { return T::lowest(); }), });
		m_SMethods.push_back(Method{.Name = "epsilon", .Type = "", .Return = Class::Get<unsigned long>()->getName(), .Access = ::New<FuncT<unsigned long >>([]()->unsigned long { return T::epsilon(); }), });
		m_SMethods.push_back(Method{.Name = "round_error", .Type = "", .Return = Class::Get<unsigned long>()->getName(), .Access = ::New<FuncT<unsigned long >>([]()->unsigned long { return T::round_error(); }), });
		m_SMethods.push_back(Method{.Name = "denorm_min", .Type = "", .Return = Class::Get<unsigned long>()->getName(), .Access = ::New<FuncT<unsigned long >>([]()->unsigned long { return T::denorm_min(); }), });
		m_SMethods.push_back(Method{.Name = "infinity", .Type = "", .Return = Class::Get<unsigned long>()->getName(), .Access = ::New<FuncT<unsigned long >>([]()->unsigned long { return T::infinity(); }), });
		m_SMethods.push_back(Method{.Name = "quiet_NaN", .Type = "", .Return = Class::Get<unsigned long>()->getName(), .Access = ::New<FuncT<unsigned long >>([]()->unsigned long { return T::quiet_NaN(); }), });
		m_SMethods.push_back(Method{.Name = "signaling_NaN", .Type = "", .Return = Class::Get<unsigned long>()->getName(), .Access = ::New<FuncT<unsigned long >>([]()->unsigned long { return T::signaling_NaN(); }), });
	}
};

template<>
class ClassT<std::numeric_limits<unsigned long long>> : public Class
{
public:
	static Raw<ClassT> Get()
	{
		static ClassT s_Instance;
		return &s_Instance;
	}

protected:
	ClassT() : Class(Class::SetClass<std::numeric_limits<unsigned long long>>(this))
	{
		using T = std::numeric_limits<unsigned long long>;
		m_Bases.push_back(ClassT<std::_Num_int_base>::Get());
		m_SFields.push_back(Field{.Name = "is_modulo", .Type = Class::Get<const bool>()->getName(), .Access = ::New<FuncT<Raw<decltype(T::is_modulo)>>>([]() { return &T::is_modulo; }), });
		m_SFields.push_back(Field{.Name = "digits", .Type = Class::Get<const int>()->getName(), .Access = ::New<FuncT<Raw<decltype(T::digits)>>>([]() { return &T::digits; }), });
		m_SFields.push_back(Field{.Name = "digits10", .Type = Class::Get<const int>()->getName(), .Access = ::New<FuncT<Raw<decltype(T::digits10)>>>([]() { return &T::digits10; }), });
		m_SMethods.push_back(Method{.Name = "min", .Type = "", .Return = Class::Get<unsigned long long>()->getName(), .Access = ::New<FuncT<unsigned long long >>([]()->unsigned long long { return T::min(); }), });
		m_SMethods.push_back(Method{.Name = "max", .Type = "", .Return = Class::Get<unsigned long long>()->getName(), .Access = ::New<FuncT<unsigned long long >>([]()->unsigned long long { return T::max(); }), });
		m_SMethods.push_back(Method{.Name = "lowest", .Type = "", .Return = Class::Get<unsigned long long>()->getName(), .Access = ::New<FuncT<unsigned long long >>([]()->unsigned long long { return T::lowest(); }), });
		m_SMethods.push_back(Method{.Name = "epsilon", .Type = "", .Return = Class::Get<unsigned long long>()->getName(), .Access = ::New<FuncT<unsigned long long >>([]()->unsigned long long { return T::epsilon(); }), });
		m_SMethods.push_back(Method{.Name = "round_error", .Type = "", .Return = Class::Get<unsigned long long>()->getName(), .Access = ::New<FuncT<unsigned long long >>([]()->unsigned long long { return T::round_error(); }), });
		m_SMethods.push_back(Method{.Name = "denorm_min", .Type = "", .Return = Class::Get<unsigned long long>()->getName(), .Access = ::New<FuncT<unsigned long long >>([]()->unsigned long long { return T::denorm_min(); }), });
		m_SMethods.push_back(Method{.Name = "infinity", .Type = "", .Return = Class::Get<unsigned long long>()->getName(), .Access = ::New<FuncT<unsigned long long >>([]()->unsigned long long { return T::infinity(); }), });
		m_SMethods.push_back(Method{.Name = "quiet_NaN", .Type = "", .Return = Class::Get<unsigned long long>()->getName(), .Access = ::New<FuncT<unsigned long long >>([]()->unsigned long long { return T::quiet_NaN(); }), });
		m_SMethods.push_back(Method{.Name = "signaling_NaN", .Type = "", .Return = Class::Get<unsigned long long>()->getName(), .Access = ::New<FuncT<unsigned long long >>([]()->unsigned long long { return T::signaling_NaN(); }), });
	}
};

template<>
class ClassT<std::numeric_limits<float>> : public Class
{
public:
	static Raw<ClassT> Get()
	{
		static ClassT s_Instance;
		return &s_Instance;
	}

protected:
	ClassT() : Class(Class::SetClass<std::numeric_limits<float>>(this))
	{
		using T = std::numeric_limits<float>;
		m_Bases.push_back(ClassT<std::_Num_float_base>::Get());
		m_SFields.push_back(Field{.Name = "digits", .Type = Class::Get<const int>()->getName(), .Access = ::New<FuncT<Raw<decltype(T::digits)>>>([]() { return &T::digits; }), });
		m_SFields.push_back(Field{.Name = "digits10", .Type = Class::Get<const int>()->getName(), .Access = ::New<FuncT<Raw<decltype(T::digits10)>>>([]() { return &T::digits10; }), });
		m_SFields.push_back(Field{.Name = "max_digits10", .Type = Class::Get<const int>()->getName(), .Access = ::New<FuncT<Raw<decltype(T::max_digits10)>>>([]() { return &T::max_digits10; }), });
		m_SFields.push_back(Field{.Name = "max_exponent", .Type = Class::Get<const int>()->getName(), .Access = ::New<FuncT<Raw<decltype(T::max_exponent)>>>([]() { return &T::max_exponent; }), });
		m_SFields.push_back(Field{.Name = "max_exponent10", .Type = Class::Get<const int>()->getName(), .Access = ::New<FuncT<Raw<decltype(T::max_exponent10)>>>([]() { return &T::max_exponent10; }), });
		m_SFields.push_back(Field{.Name = "min_exponent", .Type = Class::Get<const int>()->getName(), .Access = ::New<FuncT<Raw<decltype(T::min_exponent)>>>([]() { return &T::min_exponent; }), });
		m_SFields.push_back(Field{.Name = "min_exponent10", .Type = Class::Get<const int>()->getName(), .Access = ::New<FuncT<Raw<decltype(T::min_exponent10)>>>([]() { return &T::min_exponent10; }), });
		m_SMethods.push_back(Method{.Name = "min", .Type = "", .Return = Class::Get<float>()->getName(), .Access = ::New<FuncT<float >>([]()->float { return T::min(); }), });
		m_SMethods.push_back(Method{.Name = "max", .Type = "", .Return = Class::Get<float>()->getName(), .Access = ::New<FuncT<float >>([]()->float { return T::max(); }), });
		m_SMethods.push_back(Method{.Name = "lowest", .Type = "", .Return = Class::Get<float>()->getName(), .Access = ::New<FuncT<float >>([]()->float { return T::lowest(); }), });
		m_SMethods.push_back(Method{.Name = "epsilon", .Type = "", .Return = Class::Get<float>()->getName(), .Access = ::New<FuncT<float >>([]()->float { return T::epsilon(); }), });
		m_SMethods.push_back(Method{.Name = "round_error", .Type = "", .Return = Class::Get<float>()->getName(), .Access = ::New<FuncT<float >>([]()->float { return T::round_error(); }), });
		m_SMethods.push_back(Method{.Name = "denorm_min", .Type = "", .Return = Class::Get<float>()->getName(), .Access = ::New<FuncT<float >>([]()->float { return T::denorm_min(); }), });
		m_SMethods.push_back(Method{.Name = "infinity", .Type = "", .Return = Class::Get<float>()->getName(), .Access = ::New<FuncT<float >>([]()->float { return T::infinity(); }), });
		m_SMethods.push_back(Method{.Name = "quiet_NaN", .Type = "", .Return = Class::Get<float>()->getName(), .Access = ::New<FuncT<float >>([]()->float { return T::quiet_NaN(); }), });
		m_SMethods.push_back(Method{.Name = "signaling_NaN", .Type = "", .Return = Class::Get<float>()->getName(), .Access = ::New<FuncT<float >>([]()->float { return T::signaling_NaN(); }), });
	}
};

template<>
class ClassT<std::numeric_limits<double>> : public Class
{
public:
	static Raw<ClassT> Get()
	{
		static ClassT s_Instance;
		return &s_Instance;
	}

protected:
	ClassT() : Class(Class::SetClass<std::numeric_limits<double>>(this))
	{
		using T = std::numeric_limits<double>;
		m_Bases.push_back(ClassT<std::_Num_float_base>::Get());
		m_SFields.push_back(Field{.Name = "digits", .Type = Class::Get<const int>()->getName(), .Access = ::New<FuncT<Raw<decltype(T::digits)>>>([]() { return &T::digits; }), });
		m_SFields.push_back(Field{.Name = "digits10", .Type = Class::Get<const int>()->getName(), .Access = ::New<FuncT<Raw<decltype(T::digits10)>>>([]() { return &T::digits10; }), });
		m_SFields.push_back(Field{.Name = "max_digits10", .Type = Class::Get<const int>()->getName(), .Access = ::New<FuncT<Raw<decltype(T::max_digits10)>>>([]() { return &T::max_digits10; }), });
		m_SFields.push_back(Field{.Name = "max_exponent", .Type = Class::Get<const int>()->getName(), .Access = ::New<FuncT<Raw<decltype(T::max_exponent)>>>([]() { return &T::max_exponent; }), });
		m_SFields.push_back(Field{.Name = "max_exponent10", .Type = Class::Get<const int>()->getName(), .Access = ::New<FuncT<Raw<decltype(T::max_exponent10)>>>([]() { return &T::max_exponent10; }), });
		m_SFields.push_back(Field{.Name = "min_exponent", .Type = Class::Get<const int>()->getName(), .Access = ::New<FuncT<Raw<decltype(T::min_exponent)>>>([]() { return &T::min_exponent; }), });
		m_SFields.push_back(Field{.Name = "min_exponent10", .Type = Class::Get<const int>()->getName(), .Access = ::New<FuncT<Raw<decltype(T::min_exponent10)>>>([]() { return &T::min_exponent10; }), });
		m_SMethods.push_back(Method{.Name = "min", .Type = "", .Return = Class::Get<double>()->getName(), .Access = ::New<FuncT<double >>([]()->double { return T::min(); }), });
		m_SMethods.push_back(Method{.Name = "max", .Type = "", .Return = Class::Get<double>()->getName(), .Access = ::New<FuncT<double >>([]()->double { return T::max(); }), });
		m_SMethods.push_back(Method{.Name = "lowest", .Type = "", .Return = Class::Get<double>()->getName(), .Access = ::New<FuncT<double >>([]()->double { return T::lowest(); }), });
		m_SMethods.push_back(Method{.Name = "epsilon", .Type = "", .Return = Class::Get<double>()->getName(), .Access = ::New<FuncT<double >>([]()->double { return T::epsilon(); }), });
		m_SMethods.push_back(Method{.Name = "round_error", .Type = "", .Return = Class::Get<double>()->getName(), .Access = ::New<FuncT<double >>([]()->double { return T::round_error(); }), });
		m_SMethods.push_back(Method{.Name = "denorm_min", .Type = "", .Return = Class::Get<double>()->getName(), .Access = ::New<FuncT<double >>([]()->double { return T::denorm_min(); }), });
		m_SMethods.push_back(Method{.Name = "infinity", .Type = "", .Return = Class::Get<double>()->getName(), .Access = ::New<FuncT<double >>([]()->double { return T::infinity(); }), });
		m_SMethods.push_back(Method{.Name = "quiet_NaN", .Type = "", .Return = Class::Get<double>()->getName(), .Access = ::New<FuncT<double >>([]()->double { return T::quiet_NaN(); }), });
		m_SMethods.push_back(Method{.Name = "signaling_NaN", .Type = "", .Return = Class::Get<double>()->getName(), .Access = ::New<FuncT<double >>([]()->double { return T::signaling_NaN(); }), });
	}
};

template<>
class ClassT<std::numeric_limits<long double>> : public Class
{
public:
	static Raw<ClassT> Get()
	{
		static ClassT s_Instance;
		return &s_Instance;
	}

protected:
	ClassT() : Class(Class::SetClass<std::numeric_limits<long double>>(this))
	{
		using T = std::numeric_limits<long double>;
		m_Bases.push_back(ClassT<std::_Num_float_base>::Get());
		m_SFields.push_back(Field{.Name = "digits", .Type = Class::Get<const int>()->getName(), .Access = ::New<FuncT<Raw<decltype(T::digits)>>>([]() { return &T::digits; }), });
		m_SFields.push_back(Field{.Name = "digits10", .Type = Class::Get<const int>()->getName(), .Access = ::New<FuncT<Raw<decltype(T::digits10)>>>([]() { return &T::digits10; }), });
		m_SFields.push_back(Field{.Name = "max_digits10", .Type = Class::Get<const int>()->getName(), .Access = ::New<FuncT<Raw<decltype(T::max_digits10)>>>([]() { return &T::max_digits10; }), });
		m_SFields.push_back(Field{.Name = "max_exponent", .Type = Class::Get<const int>()->getName(), .Access = ::New<FuncT<Raw<decltype(T::max_exponent)>>>([]() { return &T::max_exponent; }), });
		m_SFields.push_back(Field{.Name = "max_exponent10", .Type = Class::Get<const int>()->getName(), .Access = ::New<FuncT<Raw<decltype(T::max_exponent10)>>>([]() { return &T::max_exponent10; }), });
		m_SFields.push_back(Field{.Name = "min_exponent", .Type = Class::Get<const int>()->getName(), .Access = ::New<FuncT<Raw<decltype(T::min_exponent)>>>([]() { return &T::min_exponent; }), });
		m_SFields.push_back(Field{.Name = "min_exponent10", .Type = Class::Get<const int>()->getName(), .Access = ::New<FuncT<Raw<decltype(T::min_exponent10)>>>([]() { return &T::min_exponent10; }), });
		m_SMethods.push_back(Method{.Name = "min", .Type = "", .Return = Class::Get<long double>()->getName(), .Access = ::New<FuncT<long double >>([]()->long double { return T::min(); }), });
		m_SMethods.push_back(Method{.Name = "max", .Type = "", .Return = Class::Get<long double>()->getName(), .Access = ::New<FuncT<long double >>([]()->long double { return T::max(); }), });
		m_SMethods.push_back(Method{.Name = "lowest", .Type = "", .Return = Class::Get<long double>()->getName(), .Access = ::New<FuncT<long double >>([]()->long double { return T::lowest(); }), });
		m_SMethods.push_back(Method{.Name = "epsilon", .Type = "", .Return = Class::Get<long double>()->getName(), .Access = ::New<FuncT<long double >>([]()->long double { return T::epsilon(); }), });
		m_SMethods.push_back(Method{.Name = "round_error", .Type = "", .Return = Class::Get<long double>()->getName(), .Access = ::New<FuncT<long double >>([]()->long double { return T::round_error(); }), });
		m_SMethods.push_back(Method{.Name = "denorm_min", .Type = "", .Return = Class::Get<long double>()->getName(), .Access = ::New<FuncT<long double >>([]()->long double { return T::denorm_min(); }), });
		m_SMethods.push_back(Method{.Name = "infinity", .Type = "", .Return = Class::Get<long double>()->getName(), .Access = ::New<FuncT<long double >>([]()->long double { return T::infinity(); }), });
		m_SMethods.push_back(Method{.Name = "quiet_NaN", .Type = "", .Return = Class::Get<long double>()->getName(), .Access = ::New<FuncT<long double >>([]()->long double { return T::quiet_NaN(); }), });
		m_SMethods.push_back(Method{.Name = "signaling_NaN", .Type = "", .Return = Class::Get<long double>()->getName(), .Access = ::New<FuncT<long double >>([]()->long double { return T::signaling_NaN(); }), });
	}
};

template<>
class ClassT<std::_Exact_args_t> : public Class
{
public:
	static Raw<ClassT> Get()
	{
		static ClassT s_Instance;
		return &s_Instance;
	}

protected:
	ClassT() : Class(Class::SetClass<std::_Exact_args_t>(this))
	{
		using T = std::_Exact_args_t;
	}
};

template<>
class ClassT<std::_Unpack_tuple_t> : public Class
{
public:
	static Raw<ClassT> Get()
	{
		static ClassT s_Instance;
		return &s_Instance;
	}

protected:
	ClassT() : Class(Class::SetClass<std::_Unpack_tuple_t>(this))
	{
		using T = std::_Unpack_tuple_t;
	}
};

template<>
class ClassT<std::_Alloc_exact_args_t> : public Class
{
public:
	static Raw<ClassT> Get()
	{
		static ClassT s_Instance;
		return &s_Instance;
	}

protected:
	ClassT() : Class(Class::SetClass<std::_Alloc_exact_args_t>(this))
	{
		using T = std::_Alloc_exact_args_t;
	}
};

template<>
class ClassT<std::_Alloc_unpack_tuple_t> : public Class
{
public:
	static Raw<ClassT> Get()
	{
		static ClassT s_Instance;
		return &s_Instance;
	}

protected:
	ClassT() : Class(Class::SetClass<std::_Alloc_unpack_tuple_t>(this))
	{
		using T = std::_Alloc_unpack_tuple_t;
	}
};

template<>
class ClassT<std::tuple<>> : public Class
{
public:
	static Raw<ClassT> Get()
	{
		static ClassT s_Instance;
		return &s_Instance;
	}

protected:
	ClassT() : Class(Class::SetClass<std::tuple<>>(this))
	{
		using T = std::tuple<>;
		m_Methods.push_back(Method{.Name = "operator=", .Type = "|"+Class::Get<const tuple<> &>()->getName()+"", .Return = Class::Get<tuple<> &>()->getName(), .Access = ::New<FuncT<tuple<> &,Raw<T>,const tuple<> & >>([](Raw<T> _0,const tuple<> & _1)->tuple<> & { return _0->operator=(_1); }), });
		m_Methods.push_back(Method{.Name = "swap", .Type = "|"+Class::Get<tuple<> &>()->getName()+"", .Return = Class::Get<void>()->getName(), .Access = ::New<FuncT<void,Raw<T>,tuple<> & >>([](Raw<T> _0,tuple<> & _1)->void { return _0->swap(_1); }), });
		m_Methods.push_back(Method{.Name = "_Equals", .Type = "|"+Class::Get<const tuple<> &>()->getName()+"", .Return = Class::Get<bool>()->getName(), .Access = ::New<FuncT<bool,Raw<T>,const tuple<> & >>([](Raw<T> _0,const tuple<> & _1)->bool { return _0->_Equals(_1); }), });
		m_Methods.push_back(Method{.Name = "_Three_way_compare", .Type = "|"+Class::Get<const tuple<> &>()->getName()+"", .Return = Class::Get<std::strong_ordering>()->getName(), .Access = ::New<FuncT<std::strong_ordering,Raw<T>,const tuple<> & >>([](Raw<T> _0,const tuple<> & _1)->std::strong_ordering { return _0->_Three_way_compare(_1); }), });
	}
};

template<>
class ClassT<std::_Asan_aligned_pointers> : public Class
{
public:
	static Raw<ClassT> Get()
	{
		static ClassT s_Instance;
		return &s_Instance;
	}

protected:
	ClassT() : Class(Class::SetClass<std::_Asan_aligned_pointers>(this))
	{
		using T = std::_Asan_aligned_pointers;
		m_Fields.push_back(Field{.Name = "_First", .Type = Class::Get<const void *>()->getName(), .Access = ::New<FuncT<Raw<decltype(T::_First)>,Raw<T> >>([](Raw<T> _0) { return &_0->_First; }), });
		m_Fields.push_back(Field{.Name = "_End", .Type = Class::Get<const void *>()->getName(), .Access = ::New<FuncT<Raw<decltype(T::_End)>,Raw<T> >>([](Raw<T> _0) { return &_0->_End; }), });
		m_Methods.push_back(Method{.Name = "_Clamp_to_end", .Type = "|"+Class::Get<const void *>()->getName()+"", .Return = Class::Get<const void *>()->getName(), .Access = ::New<FuncT<const void *,Raw<T>,const void * >>([](Raw<T> _0,const void * _1)->const void * { return _0->_Clamp_to_end(_1); }), });
	}
};

template<>
class ClassT<std::_Fake_allocator> : public Class
{
public:
	static Raw<ClassT> Get()
	{
		static ClassT s_Instance;
		return &s_Instance;
	}

protected:
	ClassT() : Class(Class::SetClass<std::_Fake_allocator>(this))
	{
		using T = std::_Fake_allocator;
	}
};

template<>
class ClassT<std::_Container_base0> : public Class
{
public:
	static Raw<ClassT> Get()
	{
		static ClassT s_Instance;
		return &s_Instance;
	}

protected:
	ClassT() : Class(Class::SetClass<std::_Container_base0>(this))
	{
		using T = std::_Container_base0;
		m_Methods.push_back(Method{.Name = "_Orphan_all", .Type = "", .Return = Class::Get<void>()->getName(), .Access = ::New<FuncT<void,Raw<T> >>([](Raw<T> _0)->void { return _0->_Orphan_all(); }), });
		m_Methods.push_back(Method{.Name = "_Swap_proxy_and_iterators", .Type = "|"+Class::Get<_Container_base0 &>()->getName()+"", .Return = Class::Get<void>()->getName(), .Access = ::New<FuncT<void,Raw<T>,_Container_base0 & >>([](Raw<T> _0,_Container_base0 & _1)->void { return _0->_Swap_proxy_and_iterators(_1); }), });
		m_Methods.push_back(Method{.Name = "_Alloc_proxy", .Type = "|"+Class::Get<const _Fake_allocator &>()->getName()+"", .Return = Class::Get<void>()->getName(), .Access = ::New<FuncT<void,Raw<T>,const _Fake_allocator & >>([](Raw<T> _0,const _Fake_allocator & _1)->void { return _0->_Alloc_proxy(_1); }), });
		m_Methods.push_back(Method{.Name = "_Reload_proxy", .Type = "|"+Class::Get<const _Fake_allocator &>()->getName()+"|"+Class::Get<const _Fake_allocator &>()->getName()+"", .Return = Class::Get<void>()->getName(), .Access = ::New<FuncT<void,Raw<T>,const _Fake_allocator &,const _Fake_allocator & >>([](Raw<T> _0,const _Fake_allocator & _1,const _Fake_allocator & _2)->void { return _0->_Reload_proxy(_1,_2); }), });
	}
};

template<>
class ClassT<std::_Iterator_base0> : public Class
{
public:
	static Raw<ClassT> Get()
	{
		static ClassT s_Instance;
		return &s_Instance;
	}

protected:
	ClassT() : Class(Class::SetClass<std::_Iterator_base0>(this))
	{
		using T = std::_Iterator_base0;
		m_Methods.push_back(Method{.Name = "_Adopt", .Type = "|"+Class::Get<const void *>()->getName()+"", .Return = Class::Get<void>()->getName(), .Access = ::New<FuncT<void,Raw<T>,const void * >>([](Raw<T> _0,const void * _1)->void { return _0->_Adopt(_1); }), });
		m_Methods.push_back(Method{.Name = "_Getcont", .Type = "", .Return = Class::Get<const _Container_base0 *>()->getName(), .Access = ::New<FuncT<const _Container_base0 *,Raw<T> >>([](Raw<T> _0)->const _Container_base0 * { return _0->_Getcont(); }), });
	}
};

template<>
class ClassT<std::_Container_proxy> : public Class
{
public:
	static Raw<ClassT> Get()
	{
		static ClassT s_Instance;
		return &s_Instance;
	}

protected:
	ClassT() : Class(Class::SetClass<std::_Container_proxy>(this))
	{
		using T = std::_Container_proxy;
		m_Fields.push_back(Field{.Name = "_Mycont", .Type = Class::Get<const _Container_base12 *>()->getName(), .Access = ::New<FuncT<Raw<decltype(T::_Mycont)>,Raw<T> >>([](Raw<T> _0) { return &_0->_Mycont; }), });
		m_Fields.push_back(Field{.Name = "_Myfirstiter", .Type = Class::Get<_Iterator_base12 *>()->getName(), .Access = ::New<FuncT<Raw<decltype(T::_Myfirstiter)>,Raw<T> >>([](Raw<T> _0) { return &_0->_Myfirstiter; }), });
	}
};

template<>
class ClassT<std::_Container_base12> : public Class
{
public:
	static Raw<ClassT> Get()
	{
		static ClassT s_Instance;
		return &s_Instance;
	}

protected:
	ClassT() : Class(Class::SetClass<std::_Container_base12>(this))
	{
		using T = std::_Container_base12;
		m_Fields.push_back(Field{.Name = "_Myproxy", .Type = Class::Get<_Container_proxy *>()->getName(), .Access = ::New<FuncT<Raw<decltype(T::_Myproxy)>,Raw<T> >>([](Raw<T> _0) { return &_0->_Myproxy; }), });
		m_Methods.push_back(Method{.Name = "operator=", .Type = "|"+Class::Get<const _Container_base12 &>()->getName()+"", .Return = Class::Get<_Container_base12 &>()->getName(), .Access = ::New<FuncT<_Container_base12 &,Raw<T>,const _Container_base12 & >>([](Raw<T> _0,const _Container_base12 & _1)->_Container_base12 & { return _0->operator=(_1); }), });
		m_Methods.push_back(Method{.Name = "_Orphan_all", .Type = "", .Return = Class::Get<void>()->getName(), .Access = ::New<FuncT<void,Raw<T> >>([](Raw<T> _0)->void { return _0->_Orphan_all(); }), });
		m_Methods.push_back(Method{.Name = "_Swap_proxy_and_iterators", .Type = "|"+Class::Get<_Container_base12 &>()->getName()+"", .Return = Class::Get<void>()->getName(), .Access = ::New<FuncT<void,Raw<T>,_Container_base12 & >>([](Raw<T> _0,_Container_base12 & _1)->void { return _0->_Swap_proxy_and_iterators(_1); }), });
	}
};

template<>
class ClassT<std::_Iterator_base12> : public Class
{
public:
	static Raw<ClassT> Get()
	{
		static ClassT s_Instance;
		return &s_Instance;
	}

protected:
	ClassT() : Class(Class::SetClass<std::_Iterator_base12>(this))
	{
		using T = std::_Iterator_base12;
		m_Fields.push_back(Field{.Name = "_Myproxy", .Type = Class::Get<_Container_proxy *>()->getName(), .Access = ::New<FuncT<Raw<decltype(T::_Myproxy)>,Raw<T> >>([](Raw<T> _0) { return &_0->_Myproxy; }), });
		m_Fields.push_back(Field{.Name = "_Mynextiter", .Type = Class::Get<_Iterator_base12 *>()->getName(), .Access = ::New<FuncT<Raw<decltype(T::_Mynextiter)>,Raw<T> >>([](Raw<T> _0) { return &_0->_Mynextiter; }), });
		m_Methods.push_back(Method{.Name = "operator=", .Type = "|"+Class::Get<const _Iterator_base12 &>()->getName()+"", .Return = Class::Get<_Iterator_base12 &>()->getName(), .Access = ::New<FuncT<_Iterator_base12 &,Raw<T>,const _Iterator_base12 & >>([](Raw<T> _0,const _Iterator_base12 & _1)->_Iterator_base12 & { return _0->operator=(_1); }), });
		m_Methods.push_back(Method{.Name = "_Adopt", .Type = "|"+Class::Get<const _Container_base12 *>()->getName()+"", .Return = Class::Get<void>()->getName(), .Access = ::New<FuncT<void,Raw<T>,const _Container_base12 * >>([](Raw<T> _0,const _Container_base12 * _1)->void { return _0->_Adopt(_1); }), });
		m_Methods.push_back(Method{.Name = "_Getcont", .Type = "", .Return = Class::Get<const _Container_base12 *>()->getName(), .Access = ::New<FuncT<const _Container_base12 *,Raw<T> >>([](Raw<T> _0)->const _Container_base12 * { return _0->_Getcont(); }), });
	}
};

template<>
class ClassT<std::_Leave_proxy_unbound> : public Class
{
public:
	static Raw<ClassT> Get()
	{
		static ClassT s_Instance;
		return &s_Instance;
	}

protected:
	ClassT() : Class(Class::SetClass<std::_Leave_proxy_unbound>(this))
	{
		using T = std::_Leave_proxy_unbound;
	}
};

template<>
class ClassT<std::_Fake_proxy_ptr_impl> : public Class
{
public:
	static Raw<ClassT> Get()
	{
		static ClassT s_Instance;
		return &s_Instance;
	}

protected:
	ClassT() : Class(Class::SetClass<std::_Fake_proxy_ptr_impl>(this))
	{
		using T = std::_Fake_proxy_ptr_impl;
		m_Methods.push_back(Method{.Name = "operator=", .Type = "|"+Class::Get<const _Fake_proxy_ptr_impl &>()->getName()+"", .Return = Class::Get<_Fake_proxy_ptr_impl &>()->getName(), .Access = ::New<FuncT<_Fake_proxy_ptr_impl &,Raw<T>,const _Fake_proxy_ptr_impl & >>([](Raw<T> _0,const _Fake_proxy_ptr_impl & _1)->_Fake_proxy_ptr_impl & { return _0->operator=(_1); }), });
		m_Methods.push_back(Method{.Name = "_Bind", .Type = "|"+Class::Get<const _Fake_allocator &>()->getName()+"|"+Class::Get<_Container_base0 *>()->getName()+"", .Return = Class::Get<void>()->getName(), .Access = ::New<FuncT<void,Raw<T>,const _Fake_allocator &,_Container_base0 * >>([](Raw<T> _0,const _Fake_allocator & _1,_Container_base0 * _2)->void { return _0->_Bind(_1,_2); }), });
		m_Methods.push_back(Method{.Name = "_Release", .Type = "", .Return = Class::Get<void>()->getName(), .Access = ::New<FuncT<void,Raw<T> >>([](Raw<T> _0)->void { return _0->_Release(); }), });
	}
};

template<>
class ClassT<std::_Basic_container_proxy_ptr12> : public Class
{
public:
	static Raw<ClassT> Get()
	{
		static ClassT s_Instance;
		return &s_Instance;
	}

protected:
	ClassT() : Class(Class::SetClass<std::_Basic_container_proxy_ptr12>(this))
	{
		using T = std::_Basic_container_proxy_ptr12;
		m_Fields.push_back(Field{.Name = "_Ptr", .Type = Class::Get<_Container_proxy *>()->getName(), .Access = ::New<FuncT<Raw<decltype(T::_Ptr)>,Raw<T> >>([](Raw<T> _0) { return &_0->_Ptr; }), });
		m_Methods.push_back(Method{.Name = "_Release", .Type = "", .Return = Class::Get<void>()->getName(), .Access = ::New<FuncT<void,Raw<T> >>([](Raw<T> _0)->void { return _0->_Release(); }), });
	}
};

template<>
class ClassT<std::_Zero_then_variadic_args_t> : public Class
{
public:
	static Raw<ClassT> Get()
	{
		static ClassT s_Instance;
		return &s_Instance;
	}

protected:
	ClassT() : Class(Class::SetClass<std::_Zero_then_variadic_args_t>(this))
	{
		using T = std::_Zero_then_variadic_args_t;
	}
};

template<>
class ClassT<std::_One_then_variadic_args_t> : public Class
{
public:
	static Raw<ClassT> Get()
	{
		static ClassT s_Instance;
		return &s_Instance;
	}

protected:
	ClassT() : Class(Class::SetClass<std::_One_then_variadic_args_t>(this))
	{
		using T = std::_One_then_variadic_args_t;
	}
};

template<>
class ClassT<std::_Move_allocator_tag> : public Class
{
public:
	static Raw<ClassT> Get()
	{
		static ClassT s_Instance;
		return &s_Instance;
	}

protected:
	ClassT() : Class(Class::SetClass<std::_Move_allocator_tag>(this))
	{
		using T = std::_Move_allocator_tag;
	}
};

template<>
class ClassT<_Pair_remaker> : public Class
{
public:
	static Raw<ClassT> Get()
	{
		static ClassT s_Instance;
		return &s_Instance;
	}

protected:
	ClassT() : Class(Class::SetClass<_Pair_remaker>(this))
	{
		using T = _Pair_remaker;
		m_Fields.push_back(Field{.Name = "_Al", .Type = Class::Get<const _Alloc &>()->getName(), .Access = ::New<FuncT<Raw<decltype(T::_Al)>,Raw<T> >>([](Raw<T> _0) { return &_0->_Al; }), });
		m_Fields.push_back(Field{.Name = "_Ux", .Type = Class::Get<_Uty &>()->getName(), .Access = ::New<FuncT<Raw<decltype(T::_Ux)>,Raw<T> >>([](Raw<T> _0) { return &_0->_Ux; }), });
	}
};

template<>
class ClassT<std::_String_constructor_rvalue_allocator_tag> : public Class
{
public:
	static Raw<ClassT> Get()
	{
		static ClassT s_Instance;
		return &s_Instance;
	}

protected:
	ClassT() : Class(Class::SetClass<std::_String_constructor_rvalue_allocator_tag>(this))
	{
		using T = std::_String_constructor_rvalue_allocator_tag;
	}
};

template<>
class ClassT<std::domain_error> : public Class
{
public:
	static Raw<ClassT> Get()
	{
		static ClassT s_Instance;
		return &s_Instance;
	}

protected:
	ClassT() : Class(Class::SetClass<std::domain_error>(this))
	{
		using T = std::domain_error;
		m_Bases.push_back(ClassT<std::logic_error>::Get());
	}
};

template<>
class ClassT<std::invalid_argument> : public Class
{
public:
	static Raw<ClassT> Get()
	{
		static ClassT s_Instance;
		return &s_Instance;
	}

protected:
	ClassT() : Class(Class::SetClass<std::invalid_argument>(this))
	{
		using T = std::invalid_argument;
		m_Bases.push_back(ClassT<std::logic_error>::Get());
	}
};

template<>
class ClassT<std::length_error> : public Class
{
public:
	static Raw<ClassT> Get()
	{
		static ClassT s_Instance;
		return &s_Instance;
	}

protected:
	ClassT() : Class(Class::SetClass<std::length_error>(this))
	{
		using T = std::length_error;
		m_Bases.push_back(ClassT<std::logic_error>::Get());
	}
};

template<>
class ClassT<std::out_of_range> : public Class
{
public:
	static Raw<ClassT> Get()
	{
		static ClassT s_Instance;
		return &s_Instance;
	}

protected:
	ClassT() : Class(Class::SetClass<std::out_of_range>(this))
	{
		using T = std::out_of_range;
		m_Bases.push_back(ClassT<std::logic_error>::Get());
	}
};

template<>
class ClassT<std::runtime_error> : public Class
{
public:
	static Raw<ClassT> Get()
	{
		static ClassT s_Instance;
		return &s_Instance;
	}

protected:
	ClassT() : Class(Class::SetClass<std::runtime_error>(this))
	{
		using T = std::runtime_error;
		m_Bases.push_back(ClassT<std::exception>::Get());
	}
};

template<>
class ClassT<std::overflow_error> : public Class
{
public:
	static Raw<ClassT> Get()
	{
		static ClassT s_Instance;
		return &s_Instance;
	}

protected:
	ClassT() : Class(Class::SetClass<std::overflow_error>(this))
	{
		using T = std::overflow_error;
		m_Bases.push_back(ClassT<std::runtime_error>::Get());
	}
};

template<>
class ClassT<std::underflow_error> : public Class
{
public:
	static Raw<ClassT> Get()
	{
		static ClassT s_Instance;
		return &s_Instance;
	}

protected:
	ClassT() : Class(Class::SetClass<std::underflow_error>(this))
	{
		using T = std::underflow_error;
		m_Bases.push_back(ClassT<std::runtime_error>::Get());
	}
};

template<>
class ClassT<std::range_error> : public Class
{
public:
	static Raw<ClassT> Get()
	{
		static ClassT s_Instance;
		return &s_Instance;
	}

protected:
	ClassT() : Class(Class::SetClass<std::range_error>(this))
	{
		using T = std::range_error;
		m_Bases.push_back(ClassT<std::runtime_error>::Get());
	}
};

template<>
class ClassT<std::_Init_once_completer> : public Class
{
public:
	static Raw<ClassT> Get()
	{
		static ClassT s_Instance;
		return &s_Instance;
	}

protected:
	ClassT() : Class(Class::SetClass<std::_Init_once_completer>(this))
	{
		using T = std::_Init_once_completer;
		m_Fields.push_back(Field{.Name = "_Once", .Type = Class::Get<once_flag &>()->getName(), .Access = ::New<FuncT<Raw<decltype(T::_Once)>,Raw<T> >>([](Raw<T> _0) { return &_0->_Once; }), });
		m_Fields.push_back(Field{.Name = "_DwFlags", .Type = Class::Get<unsigned long>()->getName(), .Access = ::New<FuncT<Raw<decltype(T::_DwFlags)>,Raw<T> >>([](Raw<T> _0) { return &_0->_DwFlags; }), });
	}
};

template<>
class ClassT<_Stl_critical_section> : public Class
{
public:
	static Raw<ClassT> Get()
	{
		static ClassT s_Instance;
		return &s_Instance;
	}

protected:
	ClassT() : Class(Class::SetClass<_Stl_critical_section>(this))
	{
		using T = _Stl_critical_section;
		m_Fields.push_back(Field{.Name = "_Unused", .Type = Class::Get<void *>()->getName(), .Access = ::New<FuncT<Raw<decltype(T::_Unused)>,Raw<T> >>([](Raw<T> _0) { return &_0->_Unused; }), });
		m_Fields.push_back(Field{.Name = "_M_srw_lock", .Type = Class::Get<_Smtx_t>()->getName(), .Access = ::New<FuncT<Raw<decltype(T::_M_srw_lock)>,Raw<T> >>([](Raw<T> _0) { return &_0->_M_srw_lock; }), });
	}
};

template<>
class ClassT<_Mtx_internal_imp_t> : public Class
{
public:
	static Raw<ClassT> Get()
	{
		static ClassT s_Instance;
		return &s_Instance;
	}

protected:
	ClassT() : Class(Class::SetClass<_Mtx_internal_imp_t>(this))
	{
		using T = _Mtx_internal_imp_t;
		m_Fields.push_back(Field{.Name = "_Type", .Type = Class::Get<int>()->getName(), .Access = ::New<FuncT<Raw<decltype(T::_Type)>,Raw<T> >>([](Raw<T> _0) { return &_0->_Type; }), });
		m_Fields.push_back(Field{.Name = "_Thread_id", .Type = Class::Get<long>()->getName(), .Access = ::New<FuncT<Raw<decltype(T::_Thread_id)>,Raw<T> >>([](Raw<T> _0) { return &_0->_Thread_id; }), });
		m_Fields.push_back(Field{.Name = "_Count", .Type = Class::Get<int>()->getName(), .Access = ::New<FuncT<Raw<decltype(T::_Count)>,Raw<T> >>([](Raw<T> _0) { return &_0->_Count; }), });
	}
};

template<>
class ClassT<_Cnd_internal_imp_t> : public Class
{
public:
	static Raw<ClassT> Get()
	{
		static ClassT s_Instance;
		return &s_Instance;
	}

protected:
	ClassT() : Class(Class::SetClass<_Cnd_internal_imp_t>(this))
	{
		using T = _Cnd_internal_imp_t;
		m_Fields.push_back(Field{.Name = "_Cv_storage", .Type = Class::Get<::std::_Aligned_storage_t<_Cnd_internal_imp_size, alignof(void *)>>()->getName(), .Access = ::New<FuncT<Raw<decltype(T::_Cv_storage)>,Raw<T> >>([](Raw<T> _0) { return &_0->_Cv_storage; }), });
	}
};

template<>
class ClassT<_timespec64> : public Class
{
public:
	static Raw<ClassT> Get()
	{
		static ClassT s_Instance;
		return &s_Instance;
	}

protected:
	ClassT() : Class(Class::SetClass<_timespec64>(this))
	{
		using T = _timespec64;
		m_Fields.push_back(Field{.Name = "tv_sec", .Type = Class::Get<__time64_t>()->getName(), .Access = ::New<FuncT<Raw<decltype(T::tv_sec)>,Raw<T> >>([](Raw<T> _0) { return &_0->tv_sec; }), });
		m_Fields.push_back(Field{.Name = "tv_nsec", .Type = Class::Get<long>()->getName(), .Access = ::New<FuncT<Raw<decltype(T::tv_nsec)>,Raw<T> >>([](Raw<T> _0) { return &_0->tv_nsec; }), });
	}
};

template<>
class ClassT<timespec> : public Class
{
public:
	static Raw<ClassT> Get()
	{
		static ClassT s_Instance;
		return &s_Instance;
	}

protected:
	ClassT() : Class(Class::SetClass<timespec>(this))
	{
		using T = timespec;
		m_Fields.push_back(Field{.Name = "tv_sec", .Type = Class::Get<time_t>()->getName(), .Access = ::New<FuncT<Raw<decltype(T::tv_sec)>,Raw<T> >>([](Raw<T> _0) { return &_0->tv_sec; }), });
		m_Fields.push_back(Field{.Name = "tv_nsec", .Type = Class::Get<long>()->getName(), .Access = ::New<FuncT<Raw<decltype(T::tv_nsec)>,Raw<T> >>([](Raw<T> _0) { return &_0->tv_nsec; }), });
	}
};

template<>
class ClassT<std::atomic_flag> : public Class
{
public:
	static Raw<ClassT> Get()
	{
		static ClassT s_Instance;
		return &s_Instance;
	}

protected:
	ClassT() : Class(Class::SetClass<std::atomic_flag>(this))
	{
		using T = std::atomic_flag;
		m_Fields.push_back(Field{.Name = "_Storage", .Type = Class::Get<atomic<long>>()->getName(), .Access = ::New<FuncT<Raw<decltype(T::_Storage)>,Raw<T> >>([](Raw<T> _0) { return &_0->_Storage; }), });
		m_Methods.push_back(Method{.Name = "test", .Type = "|"+Class::Get<const memory_order>()->getName()+"", .Return = Class::Get<bool>()->getName(), .Access = ::New<FuncT<bool,Raw<T>,const memory_order >>([](Raw<T> _0,const memory_order _1)->bool { return _0->test(_1); }), });
		m_Methods.push_back(Method{.Name = "test", .Type = "|"+Class::Get<const memory_order>()->getName()+"", .Return = Class::Get<bool>()->getName(), .Access = ::New<FuncT<bool,Raw<T>,const memory_order >>([](Raw<T> _0,const memory_order _1)->bool { return _0->test(_1); }), });
		m_Methods.push_back(Method{.Name = "test_and_set", .Type = "|"+Class::Get<const memory_order>()->getName()+"", .Return = Class::Get<bool>()->getName(), .Access = ::New<FuncT<bool,Raw<T>,const memory_order >>([](Raw<T> _0,const memory_order _1)->bool { return _0->test_and_set(_1); }), });
		m_Methods.push_back(Method{.Name = "test_and_set", .Type = "|"+Class::Get<const memory_order>()->getName()+"", .Return = Class::Get<bool>()->getName(), .Access = ::New<FuncT<bool,Raw<T>,const memory_order >>([](Raw<T> _0,const memory_order _1)->bool { return _0->test_and_set(_1); }), });
		m_Methods.push_back(Method{.Name = "clear", .Type = "|"+Class::Get<const memory_order>()->getName()+"", .Return = Class::Get<void>()->getName(), .Access = ::New<FuncT<void,Raw<T>,const memory_order >>([](Raw<T> _0,const memory_order _1)->void { return _0->clear(_1); }), });
		m_Methods.push_back(Method{.Name = "clear", .Type = "|"+Class::Get<const memory_order>()->getName()+"", .Return = Class::Get<void>()->getName(), .Access = ::New<FuncT<void,Raw<T>,const memory_order >>([](Raw<T> _0,const memory_order _1)->void { return _0->clear(_1); }), });
		m_Methods.push_back(Method{.Name = "wait", .Type = "|"+Class::Get<const bool>()->getName()+"|"+Class::Get<const memory_order>()->getName()+"", .Return = Class::Get<void>()->getName(), .Access = ::New<FuncT<void,Raw<T>,const bool,const memory_order >>([](Raw<T> _0,const bool _1,const memory_order _2)->void { return _0->wait(_1,_2); }), });
		m_Methods.push_back(Method{.Name = "wait", .Type = "|"+Class::Get<const bool>()->getName()+"|"+Class::Get<const memory_order>()->getName()+"", .Return = Class::Get<void>()->getName(), .Access = ::New<FuncT<void,Raw<T>,const bool,const memory_order >>([](Raw<T> _0,const bool _1,const memory_order _2)->void { return _0->wait(_1,_2); }), });
		m_Methods.push_back(Method{.Name = "notify_one", .Type = "", .Return = Class::Get<void>()->getName(), .Access = ::New<FuncT<void,Raw<T> >>([](Raw<T> _0)->void { return _0->notify_one(); }), });
		m_Methods.push_back(Method{.Name = "notify_one", .Type = "", .Return = Class::Get<void>()->getName(), .Access = ::New<FuncT<void,Raw<T> >>([](Raw<T> _0)->void { return _0->notify_one(); }), });
		m_Methods.push_back(Method{.Name = "notify_all", .Type = "", .Return = Class::Get<void>()->getName(), .Access = ::New<FuncT<void,Raw<T> >>([](Raw<T> _0)->void { return _0->notify_all(); }), });
		m_Methods.push_back(Method{.Name = "notify_all", .Type = "", .Return = Class::Get<void>()->getName(), .Access = ::New<FuncT<void,Raw<T> >>([](Raw<T> _0)->void { return _0->notify_all(); }), });
	}
};

template<>
class ClassT<std::is_error_condition_enum<errc>> : public Class
{
public:
	static Raw<ClassT> Get()
	{
		static ClassT s_Instance;
		return &s_Instance;
	}

protected:
	ClassT() : Class(Class::SetClass<std::is_error_condition_enum<errc>>(this))
	{
		using T = std::is_error_condition_enum<errc>;
		m_Bases.push_back(ClassT<std::integral_constant<bool, true>>::Get());
	}
};

template<>
class ClassT<std::error_category> : public Class
{
public:
	static Raw<ClassT> Get()
	{
		static ClassT s_Instance;
		return &s_Instance;
	}

protected:
	ClassT() : Class(Class::SetClass<std::error_category>(this))
	{
		using T = std::error_category;
		m_Methods.push_back(Method{.Name = "name", .Type = "", .Return = Class::Get<const char *>()->getName(), .Access = ::New<FuncT<const char *,Raw<T> >>([](Raw<T> _0)->const char * { return _0->name(); }), });
		m_Methods.push_back(Method{.Name = "message", .Type = "|"+Class::Get<int>()->getName()+"", .Return = Class::Get<std::basic_string<char>>()->getName(), .Access = ::New<FuncT<std::basic_string<char>,Raw<T>,int >>([](Raw<T> _0,int _1)->std::basic_string<char> { return _0->message(_1); }), });
		m_Methods.push_back(Method{.Name = "default_error_condition", .Type = "|"+Class::Get<int>()->getName()+"", .Return = Class::Get<std::error_condition>()->getName(), .Access = ::New<FuncT<std::error_condition,Raw<T>,int >>([](Raw<T> _0,int _1)->std::error_condition { return _0->default_error_condition(_1); }), });
		m_Methods.push_back(Method{.Name = "equivalent", .Type = "|"+Class::Get<int>()->getName()+"|"+Class::Get<const error_condition &>()->getName()+"", .Return = Class::Get<bool>()->getName(), .Access = ::New<FuncT<bool,Raw<T>,int,const error_condition & >>([](Raw<T> _0,int _1,const error_condition & _2)->bool { return _0->equivalent(_1,_2); }), });
		m_Methods.push_back(Method{.Name = "equivalent", .Type = "|"+Class::Get<const error_code &>()->getName()+"|"+Class::Get<int>()->getName()+"", .Return = Class::Get<bool>()->getName(), .Access = ::New<FuncT<bool,Raw<T>,const error_code &,int >>([](Raw<T> _0,const error_code & _1,int _2)->bool { return _0->equivalent(_1,_2); }), });
		m_Methods.push_back(Method{.Name = "operator==", .Type = "|"+Class::Get<const error_category &>()->getName()+"", .Return = Class::Get<bool>()->getName(), .Access = ::New<FuncT<bool,Raw<T>,const error_category & >>([](Raw<T> _0,const error_category & _1)->bool { return _0->operator==(_1); }), });
		m_Methods.push_back(Method{.Name = "operator<=>", .Type = "|"+Class::Get<const error_category &>()->getName()+"", .Return = Class::Get<std::strong_ordering>()->getName(), .Access = ::New<FuncT<std::strong_ordering,Raw<T>,const error_category & >>([](Raw<T> _0,const error_category & _1)->std::strong_ordering { return _0->operator<=>(_1); }), });
		m_Methods.push_back(Method{.Name = "operator=", .Type = "|"+Class::Get<const error_category &>()->getName()+"", .Return = Class::Get<error_category &>()->getName(), .Access = ::New<FuncT<error_category &,Raw<T>,const error_category & >>([](Raw<T> _0,const error_category & _1)->error_category & { return _0->operator=(_1); }), });
	}
};

template<>
class ClassT<std::error_code> : public Class
{
public:
	static Raw<ClassT> Get()
	{
		static ClassT s_Instance;
		return &s_Instance;
	}

protected:
	ClassT() : Class(Class::SetClass<std::error_code>(this))
	{
		using T = std::error_code;
		m_Methods.push_back(Method{.Name = "assign", .Type = "|"+Class::Get<int>()->getName()+"|"+Class::Get<const error_category &>()->getName()+"", .Return = Class::Get<void>()->getName(), .Access = ::New<FuncT<void,Raw<T>,int,const error_category & >>([](Raw<T> _0,int _1,const error_category & _2)->void { return _0->assign(_1,_2); }), });
		m_Methods.push_back(Method{.Name = "clear", .Type = "", .Return = Class::Get<void>()->getName(), .Access = ::New<FuncT<void,Raw<T> >>([](Raw<T> _0)->void { return _0->clear(); }), });
		m_Methods.push_back(Method{.Name = "value", .Type = "", .Return = Class::Get<int>()->getName(), .Access = ::New<FuncT<int,Raw<T> >>([](Raw<T> _0)->int { return _0->value(); }), });
		m_Methods.push_back(Method{.Name = "category", .Type = "", .Return = Class::Get<const error_category &>()->getName(), .Access = ::New<FuncT<const error_category &,Raw<T> >>([](Raw<T> _0)->const error_category & { return _0->category(); }), });
		m_Methods.push_back(Method{.Name = "default_error_condition", .Type = "", .Return = Class::Get<std::error_condition>()->getName(), .Access = ::New<FuncT<std::error_condition,Raw<T> >>([](Raw<T> _0)->std::error_condition { return _0->default_error_condition(); }), });
		m_Methods.push_back(Method{.Name = "message", .Type = "", .Return = Class::Get<std::basic_string<char>>()->getName(), .Access = ::New<FuncT<std::basic_string<char>,Raw<T> >>([](Raw<T> _0)->std::basic_string<char> { return _0->message(); }), });
	}
};

template<>
class ClassT<std::error_condition> : public Class
{
public:
	static Raw<ClassT> Get()
	{
		static ClassT s_Instance;
		return &s_Instance;
	}

protected:
	ClassT() : Class(Class::SetClass<std::error_condition>(this))
	{
		using T = std::error_condition;
		m_Methods.push_back(Method{.Name = "assign", .Type = "|"+Class::Get<int>()->getName()+"|"+Class::Get<const error_category &>()->getName()+"", .Return = Class::Get<void>()->getName(), .Access = ::New<FuncT<void,Raw<T>,int,const error_category & >>([](Raw<T> _0,int _1,const error_category & _2)->void { return _0->assign(_1,_2); }), });
		m_Methods.push_back(Method{.Name = "clear", .Type = "", .Return = Class::Get<void>()->getName(), .Access = ::New<FuncT<void,Raw<T> >>([](Raw<T> _0)->void { return _0->clear(); }), });
		m_Methods.push_back(Method{.Name = "value", .Type = "", .Return = Class::Get<int>()->getName(), .Access = ::New<FuncT<int,Raw<T> >>([](Raw<T> _0)->int { return _0->value(); }), });
		m_Methods.push_back(Method{.Name = "category", .Type = "", .Return = Class::Get<const error_category &>()->getName(), .Access = ::New<FuncT<const error_category &,Raw<T> >>([](Raw<T> _0)->const error_category & { return _0->category(); }), });
		m_Methods.push_back(Method{.Name = "message", .Type = "", .Return = Class::Get<std::basic_string<char>>()->getName(), .Access = ::New<FuncT<std::basic_string<char>,Raw<T> >>([](Raw<T> _0)->std::basic_string<char> { return _0->message(); }), });
	}
};

template<>
class ClassT<std::hash<error_code>> : public Class
{
public:
	static Raw<ClassT> Get()
	{
		static ClassT s_Instance;
		return &s_Instance;
	}

protected:
	ClassT() : Class(Class::SetClass<std::hash<error_code>>(this))
	{
		using T = std::hash<error_code>;
		m_SMethods.push_back(Method{.Name = "operator()", .Type = "|"+Class::Get<const error_code &>()->getName()+"", .Return = Class::Get<size_t>()->getName(), .Access = ::New<FuncT<size_t,const error_code & >>([](const error_code & _1)->size_t { return T::operator()(_1); }), });
	}
};

template<>
class ClassT<std::hash<error_condition>> : public Class
{
public:
	static Raw<ClassT> Get()
	{
		static ClassT s_Instance;
		return &s_Instance;
	}

protected:
	ClassT() : Class(Class::SetClass<std::hash<error_condition>>(this))
	{
		using T = std::hash<error_condition>;
		m_SMethods.push_back(Method{.Name = "operator()", .Type = "|"+Class::Get<const error_condition &>()->getName()+"", .Return = Class::Get<size_t>()->getName(), .Access = ::New<FuncT<size_t,const error_condition & >>([](const error_condition & _1)->size_t { return T::operator()(_1); }), });
	}
};

template<>
class ClassT<std::_System_error> : public Class
{
public:
	static Raw<ClassT> Get()
	{
		static ClassT s_Instance;
		return &s_Instance;
	}

protected:
	ClassT() : Class(Class::SetClass<std::_System_error>(this))
	{
		using T = std::_System_error;
		m_Bases.push_back(ClassT<std::runtime_error>::Get());
	}
};

template<>
class ClassT<std::system_error> : public Class
{
public:
	static Raw<ClassT> Get()
	{
		static ClassT s_Instance;
		return &s_Instance;
	}

protected:
	ClassT() : Class(Class::SetClass<std::system_error>(this))
	{
		using T = std::system_error;
		m_Bases.push_back(ClassT<std::_System_error>::Get());
		m_Methods.push_back(Method{.Name = "code", .Type = "", .Return = Class::Get<const error_code &>()->getName(), .Access = ::New<FuncT<const error_code &,Raw<T> >>([](Raw<T> _0)->const error_code & { return _0->code(); }), });
	}
};

template<>
class ClassT<std::_System_error_message> : public Class
{
public:
	static Raw<ClassT> Get()
	{
		static ClassT s_Instance;
		return &s_Instance;
	}

protected:
	ClassT() : Class(Class::SetClass<std::_System_error_message>(this))
	{
		using T = std::_System_error_message;
		m_Fields.push_back(Field{.Name = "_Str", .Type = Class::Get<char *>()->getName(), .Access = ::New<FuncT<Raw<decltype(T::_Str)>,Raw<T> >>([](Raw<T> _0) { return &_0->_Str; }), });
		m_Fields.push_back(Field{.Name = "_Length", .Type = Class::Get<size_t>()->getName(), .Access = ::New<FuncT<Raw<decltype(T::_Length)>,Raw<T> >>([](Raw<T> _0) { return &_0->_Length; }), });
		m_Methods.push_back(Method{.Name = "operator=", .Type = "|"+Class::Get<const _System_error_message &>()->getName()+"", .Return = Class::Get<_System_error_message &>()->getName(), .Access = ::New<FuncT<_System_error_message &,Raw<T>,const _System_error_message & >>([](Raw<T> _0,const _System_error_message & _1)->_System_error_message & { return _0->operator=(_1); }), });
	}
};

template<>
class ClassT<std::_Generic_error_category> : public Class
{
public:
	static Raw<ClassT> Get()
	{
		static ClassT s_Instance;
		return &s_Instance;
	}

protected:
	ClassT() : Class(Class::SetClass<std::_Generic_error_category>(this))
	{
		using T = std::_Generic_error_category;
		m_Bases.push_back(ClassT<std::error_category>::Get());
		m_Methods.push_back(Method{.Name = "name", .Type = "", .Return = Class::Get<const char *>()->getName(), .Access = ::New<FuncT<const char *,Raw<T> >>([](Raw<T> _0)->const char * { return _0->name(); }), });
		m_Methods.push_back(Method{.Name = "message", .Type = "|"+Class::Get<int>()->getName()+"", .Return = Class::Get<std::basic_string<char>>()->getName(), .Access = ::New<FuncT<std::basic_string<char>,Raw<T>,int >>([](Raw<T> _0,int _1)->std::basic_string<char> { return _0->message(_1); }), });
	}
};

template<>
class ClassT<std::_Iostream_error_category2> : public Class
{
public:
	static Raw<ClassT> Get()
	{
		static ClassT s_Instance;
		return &s_Instance;
	}

protected:
	ClassT() : Class(Class::SetClass<std::_Iostream_error_category2>(this))
	{
		using T = std::_Iostream_error_category2;
		m_Bases.push_back(ClassT<std::error_category>::Get());
		m_Methods.push_back(Method{.Name = "name", .Type = "", .Return = Class::Get<const char *>()->getName(), .Access = ::New<FuncT<const char *,Raw<T> >>([](Raw<T> _0)->const char * { return _0->name(); }), });
		m_Methods.push_back(Method{.Name = "message", .Type = "|"+Class::Get<int>()->getName()+"", .Return = Class::Get<std::basic_string<char>>()->getName(), .Access = ::New<FuncT<std::basic_string<char>,Raw<T>,int >>([](Raw<T> _0,int _1)->std::basic_string<char> { return _0->message(_1); }), });
	}
};

template<>
class ClassT<std::_System_error_category> : public Class
{
public:
	static Raw<ClassT> Get()
	{
		static ClassT s_Instance;
		return &s_Instance;
	}

protected:
	ClassT() : Class(Class::SetClass<std::_System_error_category>(this))
	{
		using T = std::_System_error_category;
		m_Bases.push_back(ClassT<std::error_category>::Get());
		m_Methods.push_back(Method{.Name = "name", .Type = "", .Return = Class::Get<const char *>()->getName(), .Access = ::New<FuncT<const char *,Raw<T> >>([](Raw<T> _0)->const char * { return _0->name(); }), });
		m_Methods.push_back(Method{.Name = "message", .Type = "|"+Class::Get<int>()->getName()+"", .Return = Class::Get<std::basic_string<char>>()->getName(), .Access = ::New<FuncT<std::basic_string<char>,Raw<T>,int >>([](Raw<T> _0,int _1)->std::basic_string<char> { return _0->message(_1); }), });
		m_Methods.push_back(Method{.Name = "default_error_condition", .Type = "|"+Class::Get<int>()->getName()+"", .Return = Class::Get<std::error_condition>()->getName(), .Access = ::New<FuncT<std::error_condition,Raw<T>,int >>([](Raw<T> _0,int _1)->std::error_condition { return _0->default_error_condition(_1); }), });
	}
};

template<>
class ClassT<type_info> : public Class
{
public:
	static Raw<ClassT> Get()
	{
		static ClassT s_Instance;
		return &s_Instance;
	}

protected:
	ClassT() : Class(Class::SetClass<type_info>(this))
	{
		using T = type_info;
		m_Methods.push_back(Method{.Name = "operator=", .Type = "|"+Class::Get<const type_info &>()->getName()+"", .Return = Class::Get<type_info &>()->getName(), .Access = ::New<FuncT<type_info &,Raw<T>,const type_info & >>([](Raw<T> _0,const type_info & _1)->type_info & { return _0->operator=(_1); }), });
		m_Methods.push_back(Method{.Name = "hash_code", .Type = "", .Return = Class::Get<>()->getName(), .Access = ::New<FuncT<,Raw<T> >>([](Raw<T> _0)-> { return _0->hash_code(); }), });
		m_Methods.push_back(Method{.Name = "operator==", .Type = "|"+Class::Get<const type_info &>()->getName()+"", .Return = Class::Get<bool>()->getName(), .Access = ::New<FuncT<bool,Raw<T>,const type_info & >>([](Raw<T> _0,const type_info & _1)->bool { return _0->operator==(_1); }), });
		m_Methods.push_back(Method{.Name = "before", .Type = "|"+Class::Get<const type_info &>()->getName()+"", .Return = Class::Get<bool>()->getName(), .Access = ::New<FuncT<bool,Raw<T>,const type_info & >>([](Raw<T> _0,const type_info & _1)->bool { return _0->before(_1); }), });
		m_Methods.push_back(Method{.Name = "name", .Type = "", .Return = Class::Get<const char *>()->getName(), .Access = ::New<FuncT<const char *,Raw<T> >>([](Raw<T> _0)->const char * { return _0->name(); }), });
		m_Methods.push_back(Method{.Name = "raw_name", .Type = "", .Return = Class::Get<const char *>()->getName(), .Access = ::New<FuncT<const char *,Raw<T> >>([](Raw<T> _0)->const char * { return _0->raw_name(); }), });
	}
};

template<>
class ClassT<std::bad_cast> : public Class
{
public:
	static Raw<ClassT> Get()
	{
		static ClassT s_Instance;
		return &s_Instance;
	}

protected:
	ClassT() : Class(Class::SetClass<std::bad_cast>(this))
	{
		using T = std::bad_cast;
		m_Bases.push_back(ClassT<std::exception>::Get());
		m_SMethods.push_back(Method{.Name = "__construct_from_string_literal", .Type = "|"+Class::Get<const char *const>()->getName()+"", .Return = Class::Get<std::bad_cast>()->getName(), .Access = ::New<FuncT<std::bad_cast,const char *const >>([](const char *const _1)->std::bad_cast { return T::__construct_from_string_literal(_1); }), });
	}
};

template<>
class ClassT<std::bad_typeid> : public Class
{
public:
	static Raw<ClassT> Get()
	{
		static ClassT s_Instance;
		return &s_Instance;
	}

protected:
	ClassT() : Class(Class::SetClass<std::bad_typeid>(this))
	{
		using T = std::bad_typeid;
		m_Bases.push_back(ClassT<std::exception>::Get());
		m_SMethods.push_back(Method{.Name = "__construct_from_string_literal", .Type = "|"+Class::Get<const char *const>()->getName()+"", .Return = Class::Get<std::bad_typeid>()->getName(), .Access = ::New<FuncT<std::bad_typeid,const char *const >>([](const char *const _1)->std::bad_typeid { return T::__construct_from_string_literal(_1); }), });
	}
};

template<>
class ClassT<std::__non_rtti_object> : public Class
{
public:
	static Raw<ClassT> Get()
	{
		static ClassT s_Instance;
		return &s_Instance;
	}

protected:
	ClassT() : Class(Class::SetClass<std::__non_rtti_object>(this))
	{
		using T = std::__non_rtti_object;
		m_Bases.push_back(ClassT<std::bad_typeid>::Get());
		m_SMethods.push_back(Method{.Name = "__construct_from_string_literal", .Type = "|"+Class::Get<const char *const>()->getName()+"", .Return = Class::Get<std::__non_rtti_object>()->getName(), .Access = ::New<FuncT<std::__non_rtti_object,const char *const >>([](const char *const _1)->std::__non_rtti_object { return T::__construct_from_string_literal(_1); }), });
	}
};

template<>
class ClassT<std::ranges::_Uninitialized_copy_n_fn> : public Class
{
public:
	static Raw<ClassT> Get()
	{
		static ClassT s_Instance;
		return &s_Instance;
	}

protected:
	ClassT() : Class(Class::SetClass<std::ranges::_Uninitialized_copy_n_fn>(this))
	{
		using T = std::ranges::_Uninitialized_copy_n_fn;
	}
};

template<>
class ClassT<std::ranges::_Uninitialized_move_fn> : public Class
{
public:
	static Raw<ClassT> Get()
	{
		static ClassT s_Instance;
		return &s_Instance;
	}

protected:
	ClassT() : Class(Class::SetClass<std::ranges::_Uninitialized_move_fn>(this))
	{
		using T = std::ranges::_Uninitialized_move_fn;
	}
};

template<>
class ClassT<std::ranges::_Uninitialized_move_n_fn> : public Class
{
public:
	static Raw<ClassT> Get()
	{
		static ClassT s_Instance;
		return &s_Instance;
	}

protected:
	ClassT() : Class(Class::SetClass<std::ranges::_Uninitialized_move_n_fn>(this))
	{
		using T = std::ranges::_Uninitialized_move_n_fn;
	}
};

template<>
class ClassT<std::ranges::_Uninitialized_fill_fn> : public Class
{
public:
	static Raw<ClassT> Get()
	{
		static ClassT s_Instance;
		return &s_Instance;
	}

protected:
	ClassT() : Class(Class::SetClass<std::ranges::_Uninitialized_fill_fn>(this))
	{
		using T = std::ranges::_Uninitialized_fill_fn;
	}
};

template<>
class ClassT<std::ranges::_Uninitialized_fill_n_fn> : public Class
{
public:
	static Raw<ClassT> Get()
	{
		static ClassT s_Instance;
		return &s_Instance;
	}

protected:
	ClassT() : Class(Class::SetClass<std::ranges::_Uninitialized_fill_n_fn>(this))
	{
		using T = std::ranges::_Uninitialized_fill_n_fn;
	}
};

template<>
class ClassT<std::ranges::_Construct_at_fn> : public Class
{
public:
	static Raw<ClassT> Get()
	{
		static ClassT s_Instance;
		return &s_Instance;
	}

protected:
	ClassT() : Class(Class::SetClass<std::ranges::_Construct_at_fn>(this))
	{
		using T = std::ranges::_Construct_at_fn;
	}
};

template<>
class ClassT<std::ranges::_Destroy_at_fn> : public Class
{
public:
	static Raw<ClassT> Get()
	{
		static ClassT s_Instance;
		return &s_Instance;
	}

protected:
	ClassT() : Class(Class::SetClass<std::ranges::_Destroy_at_fn>(this))
	{
		using T = std::ranges::_Destroy_at_fn;
	}
};

template<>
class ClassT<std::ranges::_Destroy_fn> : public Class
{
public:
	static Raw<ClassT> Get()
	{
		static ClassT s_Instance;
		return &s_Instance;
	}

protected:
	ClassT() : Class(Class::SetClass<std::ranges::_Destroy_fn>(this))
	{
		using T = std::ranges::_Destroy_fn;
	}
};

template<>
class ClassT<std::ranges::_Destroy_n_fn> : public Class
{
public:
	static Raw<ClassT> Get()
	{
		static ClassT s_Instance;
		return &s_Instance;
	}

protected:
	ClassT() : Class(Class::SetClass<std::ranges::_Destroy_n_fn>(this))
	{
		using T = std::ranges::_Destroy_n_fn;
	}
};

template<>
class ClassT<std::ranges::_Uninitialized_default_construct_fn> : public Class
{
public:
	static Raw<ClassT> Get()
	{
		static ClassT s_Instance;
		return &s_Instance;
	}

protected:
	ClassT() : Class(Class::SetClass<std::ranges::_Uninitialized_default_construct_fn>(this))
	{
		using T = std::ranges::_Uninitialized_default_construct_fn;
	}
};

template<>
class ClassT<std::ranges::_Uninitialized_default_construct_n_fn> : public Class
{
public:
	static Raw<ClassT> Get()
	{
		static ClassT s_Instance;
		return &s_Instance;
	}

protected:
	ClassT() : Class(Class::SetClass<std::ranges::_Uninitialized_default_construct_n_fn>(this))
	{
		using T = std::ranges::_Uninitialized_default_construct_n_fn;
	}
};

template<>
class ClassT<std::ranges::_Uninitialized_value_construct_fn> : public Class
{
public:
	static Raw<ClassT> Get()
	{
		static ClassT s_Instance;
		return &s_Instance;
	}

protected:
	ClassT() : Class(Class::SetClass<std::ranges::_Uninitialized_value_construct_fn>(this))
	{
		using T = std::ranges::_Uninitialized_value_construct_fn;
	}
};

template<>
class ClassT<std::ranges::_Uninitialized_value_construct_n_fn> : public Class
{
public:
	static Raw<ClassT> Get()
	{
		static ClassT s_Instance;
		return &s_Instance;
	}

protected:
	ClassT() : Class(Class::SetClass<std::ranges::_Uninitialized_value_construct_n_fn>(this))
	{
		using T = std::ranges::_Uninitialized_value_construct_n_fn;
	}
};

template<>
class ClassT<std::bad_weak_ptr> : public Class
{
public:
	static Raw<ClassT> Get()
	{
		static ClassT s_Instance;
		return &s_Instance;
	}

protected:
	ClassT() : Class(Class::SetClass<std::bad_weak_ptr>(this))
	{
		using T = std::bad_weak_ptr;
		m_Bases.push_back(ClassT<std::exception>::Get());
		m_Methods.push_back(Method{.Name = "what", .Type = "", .Return = Class::Get<const char *>()->getName(), .Access = ::New<FuncT<const char *,Raw<T> >>([](Raw<T> _0)->const char * { return _0->what(); }), });
	}
};

template<>
class ClassT<std::_Ref_count_base> : public Class
{
public:
	static Raw<ClassT> Get()
	{
		static ClassT s_Instance;
		return &s_Instance;
	}

protected:
	ClassT() : Class(Class::SetClass<std::_Ref_count_base>(this))
	{
		using T = std::_Ref_count_base;
		m_Methods.push_back(Method{.Name = "operator=", .Type = "|"+Class::Get<const _Ref_count_base &>()->getName()+"", .Return = Class::Get<_Ref_count_base &>()->getName(), .Access = ::New<FuncT<_Ref_count_base &,Raw<T>,const _Ref_count_base & >>([](Raw<T> _0,const _Ref_count_base & _1)->_Ref_count_base & { return _0->operator=(_1); }), });
		m_Methods.push_back(Method{.Name = "_Incref_nz", .Type = "", .Return = Class::Get<bool>()->getName(), .Access = ::New<FuncT<bool,Raw<T> >>([](Raw<T> _0)->bool { return _0->_Incref_nz(); }), });
		m_Methods.push_back(Method{.Name = "_Incref", .Type = "", .Return = Class::Get<void>()->getName(), .Access = ::New<FuncT<void,Raw<T> >>([](Raw<T> _0)->void { return _0->_Incref(); }), });
		m_Methods.push_back(Method{.Name = "_Incwref", .Type = "", .Return = Class::Get<void>()->getName(), .Access = ::New<FuncT<void,Raw<T> >>([](Raw<T> _0)->void { return _0->_Incwref(); }), });
		m_Methods.push_back(Method{.Name = "_Decref", .Type = "", .Return = Class::Get<void>()->getName(), .Access = ::New<FuncT<void,Raw<T> >>([](Raw<T> _0)->void { return _0->_Decref(); }), });
		m_Methods.push_back(Method{.Name = "_Decwref", .Type = "", .Return = Class::Get<void>()->getName(), .Access = ::New<FuncT<void,Raw<T> >>([](Raw<T> _0)->void { return _0->_Decwref(); }), });
		m_Methods.push_back(Method{.Name = "_Use_count", .Type = "", .Return = Class::Get<long>()->getName(), .Access = ::New<FuncT<long,Raw<T> >>([](Raw<T> _0)->long { return _0->_Use_count(); }), });
		m_Methods.push_back(Method{.Name = "_Get_deleter", .Type = "|"+Class::Get<const type_info &>()->getName()+"", .Return = Class::Get<void *>()->getName(), .Access = ::New<FuncT<void *,Raw<T>,const type_info & >>([](Raw<T> _0,const type_info & _1)->void * { return _0->_Get_deleter(_1); }), });
	}
};

template<>
class ClassT<std::_For_overwrite_tag> : public Class
{
public:
	static Raw<ClassT> Get()
	{
		static ClassT s_Instance;
		return &s_Instance;
	}

protected:
	ClassT() : Class(Class::SetClass<std::_For_overwrite_tag>(this))
	{
		using T = std::_For_overwrite_tag;
	}
};

template<>
class ClassT<std::owner_less<void>> : public Class
{
public:
	static Raw<ClassT> Get()
	{
		static ClassT s_Instance;
		return &s_Instance;
	}

protected:
	ClassT() : Class(Class::SetClass<std::owner_less<void>>(this))
	{
		using T = std::owner_less<void>;
	}
};

template<>
class ClassT<std::_Shared_ptr_spin_lock> : public Class
{
public:
	static Raw<ClassT> Get()
	{
		static ClassT s_Instance;
		return &s_Instance;
	}

protected:
	ClassT() : Class(Class::SetClass<std::_Shared_ptr_spin_lock>(this))
	{
		using T = std::_Shared_ptr_spin_lock;
	}
};

template<>
class ClassT<_Ctypevec> : public Class
{
public:
	static Raw<ClassT> Get()
	{
		static ClassT s_Instance;
		return &s_Instance;
	}

protected:
	ClassT() : Class(Class::SetClass<_Ctypevec>(this))
	{
		using T = _Ctypevec;
		m_Fields.push_back(Field{.Name = "_Page", .Type = Class::Get<unsigned int>()->getName(), .Access = ::New<FuncT<Raw<decltype(T::_Page)>,Raw<T> >>([](Raw<T> _0) { return &_0->_Page; }), });
		m_Fields.push_back(Field{.Name = "_Table", .Type = Class::Get<const short *>()->getName(), .Access = ::New<FuncT<Raw<decltype(T::_Table)>,Raw<T> >>([](Raw<T> _0) { return &_0->_Table; }), });
		m_Fields.push_back(Field{.Name = "_Delfl", .Type = Class::Get<int>()->getName(), .Access = ::New<FuncT<Raw<decltype(T::_Delfl)>,Raw<T> >>([](Raw<T> _0) { return &_0->_Delfl; }), });
		m_Fields.push_back(Field{.Name = "_LocaleName", .Type = Class::Get<wchar_t *>()->getName(), .Access = ::New<FuncT<Raw<decltype(T::_LocaleName)>,Raw<T> >>([](Raw<T> _0) { return &_0->_LocaleName; }), });
	}
};

template<>
class ClassT<_Cvtvec> : public Class
{
public:
	static Raw<ClassT> Get()
	{
		static ClassT s_Instance;
		return &s_Instance;
	}

protected:
	ClassT() : Class(Class::SetClass<_Cvtvec>(this))
	{
		using T = _Cvtvec;
		m_Fields.push_back(Field{.Name = "_Page", .Type = Class::Get<unsigned int>()->getName(), .Access = ::New<FuncT<Raw<decltype(T::_Page)>,Raw<T> >>([](Raw<T> _0) { return &_0->_Page; }), });
		m_Fields.push_back(Field{.Name = "_Mbcurmax", .Type = Class::Get<unsigned int>()->getName(), .Access = ::New<FuncT<Raw<decltype(T::_Mbcurmax)>,Raw<T> >>([](Raw<T> _0) { return &_0->_Mbcurmax; }), });
		m_Fields.push_back(Field{.Name = "_Isclocale", .Type = Class::Get<int>()->getName(), .Access = ::New<FuncT<Raw<decltype(T::_Isclocale)>,Raw<T> >>([](Raw<T> _0) { return &_0->_Isclocale; }), });
		m_Fields.push_back(Field{.Name = "_Isleadbyte", .Type = Class::Get<unsigned char[32]>()->getName(), .Access = ::New<FuncT<Raw<decltype(T::_Isleadbyte)>,Raw<T> >>([](Raw<T> _0) { return &_0->_Isleadbyte; }), });
	}
};

template<>
class ClassT<std::_Locinfo> : public Class
{
public:
	static Raw<ClassT> Get()
	{
		static ClassT s_Instance;
		return &s_Instance;
	}

protected:
	ClassT() : Class(Class::SetClass<std::_Locinfo>(this))
	{
		using T = std::_Locinfo;
		m_Methods.push_back(Method{.Name = "_Addcats", .Type = "|"+Class::Get<int>()->getName()+"|"+Class::Get<const char *>()->getName()+"", .Return = Class::Get<_Locinfo &>()->getName(), .Access = ::New<FuncT<_Locinfo &,Raw<T>,int,const char * >>([](Raw<T> _0,int _1,const char * _2)->_Locinfo & { return _0->_Addcats(_1,_2); }), });
		m_Methods.push_back(Method{.Name = "_Getname", .Type = "", .Return = Class::Get<const char *>()->getName(), .Access = ::New<FuncT<const char *,Raw<T> >>([](Raw<T> _0)->const char * { return _0->_Getname(); }), });
		m_Methods.push_back(Method{.Name = "_Getcoll", .Type = "", .Return = Class::Get<_Collvec>()->getName(), .Access = ::New<FuncT<_Collvec,Raw<T> >>([](Raw<T> _0)->_Collvec { return _0->_Getcoll(); }), });
		m_Methods.push_back(Method{.Name = "_Getctype", .Type = "", .Return = Class::Get<_Ctypevec>()->getName(), .Access = ::New<FuncT<_Ctypevec,Raw<T> >>([](Raw<T> _0)->_Ctypevec { return _0->_Getctype(); }), });
		m_Methods.push_back(Method{.Name = "_Getcvt", .Type = "", .Return = Class::Get<_Cvtvec>()->getName(), .Access = ::New<FuncT<_Cvtvec,Raw<T> >>([](Raw<T> _0)->_Cvtvec { return _0->_Getcvt(); }), });
		m_Methods.push_back(Method{.Name = "_Getlconv", .Type = "", .Return = Class::Get<const lconv *>()->getName(), .Access = ::New<FuncT<const lconv *,Raw<T> >>([](Raw<T> _0)->const lconv * { return _0->_Getlconv(); }), });
		m_Methods.push_back(Method{.Name = "_Gettnames", .Type = "", .Return = Class::Get<std::_Timevec>()->getName(), .Access = ::New<FuncT<std::_Timevec,Raw<T> >>([](Raw<T> _0)->std::_Timevec { return _0->_Gettnames(); }), });
		m_Methods.push_back(Method{.Name = "_Getdays", .Type = "", .Return = Class::Get<const char *>()->getName(), .Access = ::New<FuncT<const char *,Raw<T> >>([](Raw<T> _0)->const char * { return _0->_Getdays(); }), });
		m_Methods.push_back(Method{.Name = "_Getmonths", .Type = "", .Return = Class::Get<const char *>()->getName(), .Access = ::New<FuncT<const char *,Raw<T> >>([](Raw<T> _0)->const char * { return _0->_Getmonths(); }), });
		m_Methods.push_back(Method{.Name = "_Getfalse", .Type = "", .Return = Class::Get<const char *>()->getName(), .Access = ::New<FuncT<const char *,Raw<T> >>([](Raw<T> _0)->const char * { return _0->_Getfalse(); }), });
		m_Methods.push_back(Method{.Name = "_Gettrue", .Type = "", .Return = Class::Get<const char *>()->getName(), .Access = ::New<FuncT<const char *,Raw<T> >>([](Raw<T> _0)->const char * { return _0->_Gettrue(); }), });
		m_Methods.push_back(Method{.Name = "_Getdateorder", .Type = "", .Return = Class::Get<int>()->getName(), .Access = ::New<FuncT<int,Raw<T> >>([](Raw<T> _0)->int { return _0->_Getdateorder(); }), });
		m_Methods.push_back(Method{.Name = "_W_Gettnames", .Type = "", .Return = Class::Get<std::_Timevec>()->getName(), .Access = ::New<FuncT<std::_Timevec,Raw<T> >>([](Raw<T> _0)->std::_Timevec { return _0->_W_Gettnames(); }), });
		m_Methods.push_back(Method{.Name = "_W_Getdays", .Type = "", .Return = Class::Get<const unsigned short *>()->getName(), .Access = ::New<FuncT<const unsigned short *,Raw<T> >>([](Raw<T> _0)->const unsigned short * { return _0->_W_Getdays(); }), });
		m_Methods.push_back(Method{.Name = "_W_Getmonths", .Type = "", .Return = Class::Get<const unsigned short *>()->getName(), .Access = ::New<FuncT<const unsigned short *,Raw<T> >>([](Raw<T> _0)->const unsigned short * { return _0->_W_Getmonths(); }), });
		m_Methods.push_back(Method{.Name = "operator=", .Type = "|"+Class::Get<const _Locinfo &>()->getName()+"", .Return = Class::Get<_Locinfo &>()->getName(), .Access = ::New<FuncT<_Locinfo &,Raw<T>,const _Locinfo & >>([](Raw<T> _0,const _Locinfo & _1)->_Locinfo & { return _0->operator=(_1); }), });
		m_SMethods.push_back(Method{.Name = "_Locinfo_ctor", .Type = "|"+Class::Get<_Locinfo *>()->getName()+"|"+Class::Get<const char *>()->getName()+"", .Return = Class::Get<void>()->getName(), .Access = ::New<FuncT<void,_Locinfo *,const char * >>([](_Locinfo * _1,const char * _2)->void { return T::_Locinfo_ctor(_1,_2); }), });
		m_SMethods.push_back(Method{.Name = "_Locinfo_ctor", .Type = "|"+Class::Get<_Locinfo *>()->getName()+"|"+Class::Get<int>()->getName()+"|"+Class::Get<const char *>()->getName()+"", .Return = Class::Get<void>()->getName(), .Access = ::New<FuncT<void,_Locinfo *,int,const char * >>([](_Locinfo * _1,int _2,const char * _3)->void { return T::_Locinfo_ctor(_1,_2,_3); }), });
		m_SMethods.push_back(Method{.Name = "_Locinfo_dtor", .Type = "|"+Class::Get<_Locinfo *>()->getName()+"", .Return = Class::Get<void>()->getName(), .Access = ::New<FuncT<void,_Locinfo * >>([](_Locinfo * _1)->void { return T::_Locinfo_dtor(_1); }), });
		m_SMethods.push_back(Method{.Name = "_Locinfo_Addcats", .Type = "|"+Class::Get<_Locinfo *>()->getName()+"|"+Class::Get<int>()->getName()+"|"+Class::Get<const char *>()->getName()+"", .Return = Class::Get<_Locinfo &>()->getName(), .Access = ::New<FuncT<_Locinfo &,_Locinfo *,int,const char * >>([](_Locinfo * _1,int _2,const char * _3)->_Locinfo & { return T::_Locinfo_Addcats(_1,_2,_3); }), });
	}
};

template<>
class ClassT<std::locale::id> : public Class
{
public:
	static Raw<ClassT> Get()
	{
		static ClassT s_Instance;
		return &s_Instance;
	}

protected:
	ClassT() : Class(Class::SetClass<std::locale::id>(this))
	{
		using T = std::locale::id;
		m_Methods.push_back(Method{.Name = "operator=", .Type = "|"+Class::Get<const id &>()->getName()+"", .Return = Class::Get<id &>()->getName(), .Access = ::New<FuncT<id &,Raw<T>,const id & >>([](Raw<T> _0,const id & _1)->id & { return _0->operator=(_1); }), });
	}
};

template<>
class ClassT<std::locale::facet> : public Class
{
public:
	static Raw<ClassT> Get()
	{
		static ClassT s_Instance;
		return &s_Instance;
	}

protected:
	ClassT() : Class(Class::SetClass<std::locale::facet>(this))
	{
		using T = std::locale::facet;
		m_Bases.push_back(ClassT<std::_Facet_base>::Get());
		m_Bases.push_back(ClassT<std::_Crt_new_delete>::Get());
		m_Methods.push_back(Method{.Name = "_Incref", .Type = "", .Return = Class::Get<void>()->getName(), .Access = ::New<FuncT<void,Raw<T> >>([](Raw<T> _0)->void { return _0->_Incref(); }), });
		m_Methods.push_back(Method{.Name = "_Decref", .Type = "", .Return = Class::Get<_Facet_base *>()->getName(), .Access = ::New<FuncT<_Facet_base *,Raw<T> >>([](Raw<T> _0)->_Facet_base * { return _0->_Decref(); }), });
		m_Methods.push_back(Method{.Name = "operator=", .Type = "|"+Class::Get<const facet &>()->getName()+"", .Return = Class::Get<facet &>()->getName(), .Access = ::New<FuncT<facet &,Raw<T>,const facet & >>([](Raw<T> _0,const facet & _1)->facet & { return _0->operator=(_1); }), });
		m_SMethods.push_back(Method{.Name = "_Getcat", .Type = "|"+Class::Get<const facet **>()->getName()+"|"+Class::Get<const locale *>()->getName()+"", .Return = Class::Get<size_t>()->getName(), .Access = ::New<FuncT<size_t,const facet **,const locale * >>([](const facet ** _1,const locale * _2)->size_t { return T::_Getcat(_1,_2); }), });
	}
};

template<>
class ClassT<std::locale::_Facet_guard> : public Class
{
public:
	static Raw<ClassT> Get()
	{
		static ClassT s_Instance;
		return &s_Instance;
	}

protected:
	ClassT() : Class(Class::SetClass<std::locale::_Facet_guard>(this))
	{
		using T = std::locale::_Facet_guard;
		m_Fields.push_back(Field{.Name = "_Target", .Type = Class::Get<facet *>()->getName(), .Access = ::New<FuncT<Raw<decltype(T::_Target)>,Raw<T> >>([](Raw<T> _0) { return &_0->_Target; }), });
	}
};

template<>
class ClassT<std::locale::_Locimp> : public Class
{
public:
	static Raw<ClassT> Get()
	{
		static ClassT s_Instance;
		return &s_Instance;
	}

protected:
	ClassT() : Class(Class::SetClass<std::locale::_Locimp>(this))
	{
		using T = std::locale::_Locimp;
		m_Bases.push_back(ClassT<std::locale::facet>::Get());
		m_Methods.push_back(Method{.Name = "operator=", .Type = "|"+Class::Get<const _Locimp &>()->getName()+"", .Return = Class::Get<_Locimp &>()->getName(), .Access = ::New<FuncT<_Locimp &,Raw<T>,const _Locimp & >>([](Raw<T> _0,const _Locimp & _1)->_Locimp & { return _0->operator=(_1); }), });
	}
};

template<>
class ClassT<std::locale::_Secret_locale_construct_tag> : public Class
{
public:
	static Raw<ClassT> Get()
	{
		static ClassT s_Instance;
		return &s_Instance;
	}

protected:
	ClassT() : Class(Class::SetClass<std::locale::_Secret_locale_construct_tag>(this))
	{
		using T = std::locale::_Secret_locale_construct_tag;
	}
};

template<>
class ClassT<std::locale> : public Class
{
public:
	static Raw<ClassT> Get()
	{
		static ClassT s_Instance;
		return &s_Instance;
	}

protected:
	ClassT() : Class(Class::SetClass<std::locale>(this))
	{
		using T = std::locale;
		m_Bases.push_back(ClassT<std::_Locbase<int>>::Get());
		m_Bases.push_back(ClassT<std::_Crt_new_delete>::Get());
		m_SFields.push_back(Field{.Name = "collate", .Type = Class::Get<const category>()->getName(), .Access = ::New<FuncT<Raw<decltype(T::collate)>>>([]() { return &T::collate; }), });
		m_SFields.push_back(Field{.Name = "ctype", .Type = Class::Get<const category>()->getName(), .Access = ::New<FuncT<Raw<decltype(T::ctype)>>>([]() { return &T::ctype; }), });
		m_SFields.push_back(Field{.Name = "monetary", .Type = Class::Get<const category>()->getName(), .Access = ::New<FuncT<Raw<decltype(T::monetary)>>>([]() { return &T::monetary; }), });
		m_SFields.push_back(Field{.Name = "numeric", .Type = Class::Get<const category>()->getName(), .Access = ::New<FuncT<Raw<decltype(T::numeric)>>>([]() { return &T::numeric; }), });
		m_SFields.push_back(Field{.Name = "time", .Type = Class::Get<const category>()->getName(), .Access = ::New<FuncT<Raw<decltype(T::time)>>>([]() { return &T::time; }), });
		m_SFields.push_back(Field{.Name = "messages", .Type = Class::Get<const category>()->getName(), .Access = ::New<FuncT<Raw<decltype(T::messages)>>>([]() { return &T::messages; }), });
		m_SFields.push_back(Field{.Name = "all", .Type = Class::Get<const category>()->getName(), .Access = ::New<FuncT<Raw<decltype(T::all)>>>([]() { return &T::all; }), });
		m_SFields.push_back(Field{.Name = "none", .Type = Class::Get<const category>()->getName(), .Access = ::New<FuncT<Raw<decltype(T::none)>>>([]() { return &T::none; }), });
		m_Methods.push_back(Method{.Name = "operator=", .Type = "|"+Class::Get<const locale &>()->getName()+"", .Return = Class::Get<const locale &>()->getName(), .Access = ::New<FuncT<const locale &,Raw<T>,const locale & >>([](Raw<T> _0,const locale & _1)->const locale & { return _0->operator=(_1); }), });
		m_Methods.push_back(Method{.Name = "name", .Type = "", .Return = Class::Get<std::basic_string<char>>()->getName(), .Access = ::New<FuncT<std::basic_string<char>,Raw<T> >>([](Raw<T> _0)->std::basic_string<char> { return _0->name(); }), });
		m_Methods.push_back(Method{.Name = "_C_str", .Type = "", .Return = Class::Get<const char *>()->getName(), .Access = ::New<FuncT<const char *,Raw<T> >>([](Raw<T> _0)->const char * { return _0->_C_str(); }), });
		m_Methods.push_back(Method{.Name = "_Getfacet", .Type = "|"+Class::Get<size_t>()->getName()+"", .Return = Class::Get<const facet *>()->getName(), .Access = ::New<FuncT<const facet *,Raw<T>,size_t >>([](Raw<T> _0,size_t _1)->const facet * { return _0->_Getfacet(_1); }), });
		m_Methods.push_back(Method{.Name = "operator==", .Type = "|"+Class::Get<const locale &>()->getName()+"", .Return = Class::Get<bool>()->getName(), .Access = ::New<FuncT<bool,Raw<T>,const locale & >>([](Raw<T> _0,const locale & _1)->bool { return _0->operator==(_1); }), });
		m_SMethods.push_back(Method{.Name = "classic", .Type = "", .Return = Class::Get<const locale &>()->getName(), .Access = ::New<FuncT<const locale & >>([]()->const locale & { return T::classic(); }), });
		m_SMethods.push_back(Method{.Name = "global", .Type = "|"+Class::Get<const locale &>()->getName()+"", .Return = Class::Get<std::locale>()->getName(), .Access = ::New<FuncT<std::locale,const locale & >>([](const locale & _1)->std::locale { return T::global(_1); }), });
		m_SMethods.push_back(Method{.Name = "empty", .Type = "", .Return = Class::Get<std::locale>()->getName(), .Access = ::New<FuncT<std::locale >>([]()->std::locale { return T::empty(); }), });
	}
};

template<>
class ClassT<std::codecvt_base> : public Class
{
public:
	static Raw<ClassT> Get()
	{
		static ClassT s_Instance;
		return &s_Instance;
	}

protected:
	ClassT() : Class(Class::SetClass<std::codecvt_base>(this))
	{
		using T = std::codecvt_base;
		m_Bases.push_back(ClassT<std::locale::facet>::Get());
		m_Methods.push_back(Method{.Name = "always_noconv", .Type = "", .Return = Class::Get<bool>()->getName(), .Access = ::New<FuncT<bool,Raw<T> >>([](Raw<T> _0)->bool { return _0->always_noconv(); }), });
		m_Methods.push_back(Method{.Name = "max_length", .Type = "", .Return = Class::Get<int>()->getName(), .Access = ::New<FuncT<int,Raw<T> >>([](Raw<T> _0)->int { return _0->max_length(); }), });
		m_Methods.push_back(Method{.Name = "encoding", .Type = "", .Return = Class::Get<int>()->getName(), .Access = ::New<FuncT<int,Raw<T> >>([](Raw<T> _0)->int { return _0->encoding(); }), });
	}
};

template<>
class ClassT<std::codecvt<char16_t, char, mbstate_t>> : public Class
{
public:
	static Raw<ClassT> Get()
	{
		static ClassT s_Instance;
		return &s_Instance;
	}

protected:
	ClassT() : Class(Class::SetClass<std::codecvt<char16_t, char, mbstate_t>>(this))
	{
		using T = std::codecvt<char16_t, char, mbstate_t>;
		m_Bases.push_back(ClassT<std::codecvt_base>::Get());
		m_SFields.push_back(Field{.Name = "id", .Type = Class::Get<locale::id>()->getName(), .Access = ::New<FuncT<Raw<decltype(T::id)>>>([]() { return &T::id; }), });
		m_Methods.push_back(Method{.Name = "in", .Type = "|"+Class::Get<mbstate_t &>()->getName()+"|"+Class::Get<const char *>()->getName()+"|"+Class::Get<const char *>()->getName()+"|"+Class::Get<const char *&>()->getName()+"|"+Class::Get<char16_t *>()->getName()+"|"+Class::Get<char16_t *>()->getName()+"|"+Class::Get<char16_t *&>()->getName()+"", .Return = Class::Get<>()->getName(), .Access = ::New<FuncT<,Raw<T>,mbstate_t &,const char *,const char *,const char *&,char16_t *,char16_t *,char16_t *& >>([](Raw<T> _0,mbstate_t & _1,const char * _2,const char * _3,const char *& _4,char16_t * _5,char16_t * _6,char16_t *& _7)-> { return _0->in(_1,_2,_3,_4,_5,_6,_7); }), });
		m_Methods.push_back(Method{.Name = "out", .Type = "|"+Class::Get<mbstate_t &>()->getName()+"|"+Class::Get<const char16_t *>()->getName()+"|"+Class::Get<const char16_t *>()->getName()+"|"+Class::Get<const char16_t *&>()->getName()+"|"+Class::Get<char *>()->getName()+"|"+Class::Get<char *>()->getName()+"|"+Class::Get<char *&>()->getName()+"", .Return = Class::Get<>()->getName(), .Access = ::New<FuncT<,Raw<T>,mbstate_t &,const char16_t *,const char16_t *,const char16_t *&,char *,char *,char *& >>([](Raw<T> _0,mbstate_t & _1,const char16_t * _2,const char16_t * _3,const char16_t *& _4,char * _5,char * _6,char *& _7)-> { return _0->out(_1,_2,_3,_4,_5,_6,_7); }), });
		m_Methods.push_back(Method{.Name = "unshift", .Type = "|"+Class::Get<mbstate_t &>()->getName()+"|"+Class::Get<char *>()->getName()+"|"+Class::Get<char *>()->getName()+"|"+Class::Get<char *&>()->getName()+"", .Return = Class::Get<>()->getName(), .Access = ::New<FuncT<,Raw<T>,mbstate_t &,char *,char *,char *& >>([](Raw<T> _0,mbstate_t & _1,char * _2,char * _3,char *& _4)-> { return _0->unshift(_1,_2,_3,_4); }), });
		m_Methods.push_back(Method{.Name = "length", .Type = "|"+Class::Get<mbstate_t &>()->getName()+"|"+Class::Get<const char *>()->getName()+"|"+Class::Get<const char *>()->getName()+"|"+Class::Get<size_t>()->getName()+"", .Return = Class::Get<int>()->getName(), .Access = ::New<FuncT<int,Raw<T>,mbstate_t &,const char *,const char *,size_t >>([](Raw<T> _0,mbstate_t & _1,const char * _2,const char * _3,size_t _4)->int { return _0->length(_1,_2,_3,_4); }), });
		m_SMethods.push_back(Method{.Name = "_Getcat", .Type = "|"+Class::Get<const locale::facet **>()->getName()+"|"+Class::Get<const locale *>()->getName()+"", .Return = Class::Get<size_t>()->getName(), .Access = ::New<FuncT<size_t,const locale::facet **,const locale * >>([](const locale::facet ** _1,const locale * _2)->size_t { return T::_Getcat(_1,_2); }), });
	}
};

template<>
class ClassT<std::codecvt<char32_t, char, mbstate_t>> : public Class
{
public:
	static Raw<ClassT> Get()
	{
		static ClassT s_Instance;
		return &s_Instance;
	}

protected:
	ClassT() : Class(Class::SetClass<std::codecvt<char32_t, char, mbstate_t>>(this))
	{
		using T = std::codecvt<char32_t, char, mbstate_t>;
		m_Bases.push_back(ClassT<std::codecvt_base>::Get());
		m_SFields.push_back(Field{.Name = "id", .Type = Class::Get<locale::id>()->getName(), .Access = ::New<FuncT<Raw<decltype(T::id)>>>([]() { return &T::id; }), });
		m_Methods.push_back(Method{.Name = "in", .Type = "|"+Class::Get<mbstate_t &>()->getName()+"|"+Class::Get<const char *>()->getName()+"|"+Class::Get<const char *>()->getName()+"|"+Class::Get<const char *&>()->getName()+"|"+Class::Get<char32_t *>()->getName()+"|"+Class::Get<char32_t *>()->getName()+"|"+Class::Get<char32_t *&>()->getName()+"", .Return = Class::Get<>()->getName(), .Access = ::New<FuncT<,Raw<T>,mbstate_t &,const char *,const char *,const char *&,char32_t *,char32_t *,char32_t *& >>([](Raw<T> _0,mbstate_t & _1,const char * _2,const char * _3,const char *& _4,char32_t * _5,char32_t * _6,char32_t *& _7)-> { return _0->in(_1,_2,_3,_4,_5,_6,_7); }), });
		m_Methods.push_back(Method{.Name = "out", .Type = "|"+Class::Get<mbstate_t &>()->getName()+"|"+Class::Get<const char32_t *>()->getName()+"|"+Class::Get<const char32_t *>()->getName()+"|"+Class::Get<const char32_t *&>()->getName()+"|"+Class::Get<char *>()->getName()+"|"+Class::Get<char *>()->getName()+"|"+Class::Get<char *&>()->getName()+"", .Return = Class::Get<>()->getName(), .Access = ::New<FuncT<,Raw<T>,mbstate_t &,const char32_t *,const char32_t *,const char32_t *&,char *,char *,char *& >>([](Raw<T> _0,mbstate_t & _1,const char32_t * _2,const char32_t * _3,const char32_t *& _4,char * _5,char * _6,char *& _7)-> { return _0->out(_1,_2,_3,_4,_5,_6,_7); }), });
		m_Methods.push_back(Method{.Name = "unshift", .Type = "|"+Class::Get<mbstate_t &>()->getName()+"|"+Class::Get<char *>()->getName()+"|"+Class::Get<char *>()->getName()+"|"+Class::Get<char *&>()->getName()+"", .Return = Class::Get<>()->getName(), .Access = ::New<FuncT<,Raw<T>,mbstate_t &,char *,char *,char *& >>([](Raw<T> _0,mbstate_t & _1,char * _2,char * _3,char *& _4)-> { return _0->unshift(_1,_2,_3,_4); }), });
		m_Methods.push_back(Method{.Name = "length", .Type = "|"+Class::Get<mbstate_t &>()->getName()+"|"+Class::Get<const char *>()->getName()+"|"+Class::Get<const char *>()->getName()+"|"+Class::Get<size_t>()->getName()+"", .Return = Class::Get<int>()->getName(), .Access = ::New<FuncT<int,Raw<T>,mbstate_t &,const char *,const char *,size_t >>([](Raw<T> _0,mbstate_t & _1,const char * _2,const char * _3,size_t _4)->int { return _0->length(_1,_2,_3,_4); }), });
		m_SMethods.push_back(Method{.Name = "_Getcat", .Type = "|"+Class::Get<const locale::facet **>()->getName()+"|"+Class::Get<const locale *>()->getName()+"", .Return = Class::Get<size_t>()->getName(), .Access = ::New<FuncT<size_t,const locale::facet **,const locale * >>([](const locale::facet ** _1,const locale * _2)->size_t { return T::_Getcat(_1,_2); }), });
	}
};

template<>
class ClassT<std::codecvt<char16_t, char8_t, mbstate_t>> : public Class
{
public:
	static Raw<ClassT> Get()
	{
		static ClassT s_Instance;
		return &s_Instance;
	}

protected:
	ClassT() : Class(Class::SetClass<std::codecvt<char16_t, char8_t, mbstate_t>>(this))
	{
		using T = std::codecvt<char16_t, char8_t, mbstate_t>;
		m_Bases.push_back(ClassT<std::codecvt_base>::Get());
		m_SFields.push_back(Field{.Name = "id", .Type = Class::Get<locale::id>()->getName(), .Access = ::New<FuncT<Raw<decltype(T::id)>>>([]() { return &T::id; }), });
		m_Methods.push_back(Method{.Name = "in", .Type = "|"+Class::Get<mbstate_t &>()->getName()+"|"+Class::Get<const char8_t *>()->getName()+"|"+Class::Get<const char8_t *>()->getName()+"|"+Class::Get<const char8_t *&>()->getName()+"|"+Class::Get<char16_t *>()->getName()+"|"+Class::Get<char16_t *>()->getName()+"|"+Class::Get<char16_t *&>()->getName()+"", .Return = Class::Get<>()->getName(), .Access = ::New<FuncT<,Raw<T>,mbstate_t &,const char8_t *,const char8_t *,const char8_t *&,char16_t *,char16_t *,char16_t *& >>([](Raw<T> _0,mbstate_t & _1,const char8_t * _2,const char8_t * _3,const char8_t *& _4,char16_t * _5,char16_t * _6,char16_t *& _7)-> { return _0->in(_1,_2,_3,_4,_5,_6,_7); }), });
		m_Methods.push_back(Method{.Name = "out", .Type = "|"+Class::Get<mbstate_t &>()->getName()+"|"+Class::Get<const char16_t *>()->getName()+"|"+Class::Get<const char16_t *>()->getName()+"|"+Class::Get<const char16_t *&>()->getName()+"|"+Class::Get<char8_t *>()->getName()+"|"+Class::Get<char8_t *>()->getName()+"|"+Class::Get<char8_t *&>()->getName()+"", .Return = Class::Get<>()->getName(), .Access = ::New<FuncT<,Raw<T>,mbstate_t &,const char16_t *,const char16_t *,const char16_t *&,char8_t *,char8_t *,char8_t *& >>([](Raw<T> _0,mbstate_t & _1,const char16_t * _2,const char16_t * _3,const char16_t *& _4,char8_t * _5,char8_t * _6,char8_t *& _7)-> { return _0->out(_1,_2,_3,_4,_5,_6,_7); }), });
		m_Methods.push_back(Method{.Name = "unshift", .Type = "|"+Class::Get<mbstate_t &>()->getName()+"|"+Class::Get<char8_t *>()->getName()+"|"+Class::Get<char8_t *>()->getName()+"|"+Class::Get<char8_t *&>()->getName()+"", .Return = Class::Get<>()->getName(), .Access = ::New<FuncT<,Raw<T>,mbstate_t &,char8_t *,char8_t *,char8_t *& >>([](Raw<T> _0,mbstate_t & _1,char8_t * _2,char8_t * _3,char8_t *& _4)-> { return _0->unshift(_1,_2,_3,_4); }), });
		m_Methods.push_back(Method{.Name = "length", .Type = "|"+Class::Get<mbstate_t &>()->getName()+"|"+Class::Get<const char8_t *>()->getName()+"|"+Class::Get<const char8_t *>()->getName()+"|"+Class::Get<size_t>()->getName()+"", .Return = Class::Get<int>()->getName(), .Access = ::New<FuncT<int,Raw<T>,mbstate_t &,const char8_t *,const char8_t *,size_t >>([](Raw<T> _0,mbstate_t & _1,const char8_t * _2,const char8_t * _3,size_t _4)->int { return _0->length(_1,_2,_3,_4); }), });
		m_SMethods.push_back(Method{.Name = "_Getcat", .Type = "|"+Class::Get<const locale::facet **>()->getName()+"|"+Class::Get<const locale *>()->getName()+"", .Return = Class::Get<size_t>()->getName(), .Access = ::New<FuncT<size_t,const locale::facet **,const locale * >>([](const locale::facet ** _1,const locale * _2)->size_t { return T::_Getcat(_1,_2); }), });
	}
};

template<>
class ClassT<std::codecvt<char32_t, char8_t, mbstate_t>> : public Class
{
public:
	static Raw<ClassT> Get()
	{
		static ClassT s_Instance;
		return &s_Instance;
	}

protected:
	ClassT() : Class(Class::SetClass<std::codecvt<char32_t, char8_t, mbstate_t>>(this))
	{
		using T = std::codecvt<char32_t, char8_t, mbstate_t>;
		m_Bases.push_back(ClassT<std::codecvt_base>::Get());
		m_SFields.push_back(Field{.Name = "id", .Type = Class::Get<locale::id>()->getName(), .Access = ::New<FuncT<Raw<decltype(T::id)>>>([]() { return &T::id; }), });
		m_Methods.push_back(Method{.Name = "in", .Type = "|"+Class::Get<mbstate_t &>()->getName()+"|"+Class::Get<const char8_t *>()->getName()+"|"+Class::Get<const char8_t *>()->getName()+"|"+Class::Get<const char8_t *&>()->getName()+"|"+Class::Get<char32_t *>()->getName()+"|"+Class::Get<char32_t *>()->getName()+"|"+Class::Get<char32_t *&>()->getName()+"", .Return = Class::Get<>()->getName(), .Access = ::New<FuncT<,Raw<T>,mbstate_t &,const char8_t *,const char8_t *,const char8_t *&,char32_t *,char32_t *,char32_t *& >>([](Raw<T> _0,mbstate_t & _1,const char8_t * _2,const char8_t * _3,const char8_t *& _4,char32_t * _5,char32_t * _6,char32_t *& _7)-> { return _0->in(_1,_2,_3,_4,_5,_6,_7); }), });
		m_Methods.push_back(Method{.Name = "out", .Type = "|"+Class::Get<mbstate_t &>()->getName()+"|"+Class::Get<const char32_t *>()->getName()+"|"+Class::Get<const char32_t *>()->getName()+"|"+Class::Get<const char32_t *&>()->getName()+"|"+Class::Get<char8_t *>()->getName()+"|"+Class::Get<char8_t *>()->getName()+"|"+Class::Get<char8_t *&>()->getName()+"", .Return = Class::Get<>()->getName(), .Access = ::New<FuncT<,Raw<T>,mbstate_t &,const char32_t *,const char32_t *,const char32_t *&,char8_t *,char8_t *,char8_t *& >>([](Raw<T> _0,mbstate_t & _1,const char32_t * _2,const char32_t * _3,const char32_t *& _4,char8_t * _5,char8_t * _6,char8_t *& _7)-> { return _0->out(_1,_2,_3,_4,_5,_6,_7); }), });
		m_Methods.push_back(Method{.Name = "unshift", .Type = "|"+Class::Get<mbstate_t &>()->getName()+"|"+Class::Get<char8_t *>()->getName()+"|"+Class::Get<char8_t *>()->getName()+"|"+Class::Get<char8_t *&>()->getName()+"", .Return = Class::Get<>()->getName(), .Access = ::New<FuncT<,Raw<T>,mbstate_t &,char8_t *,char8_t *,char8_t *& >>([](Raw<T> _0,mbstate_t & _1,char8_t * _2,char8_t * _3,char8_t *& _4)-> { return _0->unshift(_1,_2,_3,_4); }), });
		m_Methods.push_back(Method{.Name = "length", .Type = "|"+Class::Get<mbstate_t &>()->getName()+"|"+Class::Get<const char8_t *>()->getName()+"|"+Class::Get<const char8_t *>()->getName()+"|"+Class::Get<size_t>()->getName()+"", .Return = Class::Get<int>()->getName(), .Access = ::New<FuncT<int,Raw<T>,mbstate_t &,const char8_t *,const char8_t *,size_t >>([](Raw<T> _0,mbstate_t & _1,const char8_t * _2,const char8_t * _3,size_t _4)->int { return _0->length(_1,_2,_3,_4); }), });
		m_SMethods.push_back(Method{.Name = "_Getcat", .Type = "|"+Class::Get<const locale::facet **>()->getName()+"|"+Class::Get<const locale *>()->getName()+"", .Return = Class::Get<size_t>()->getName(), .Access = ::New<FuncT<size_t,const locale::facet **,const locale * >>([](const locale::facet ** _1,const locale * _2)->size_t { return T::_Getcat(_1,_2); }), });
	}
};

template<>
class ClassT<std::codecvt<wchar_t, char, mbstate_t>> : public Class
{
public:
	static Raw<ClassT> Get()
	{
		static ClassT s_Instance;
		return &s_Instance;
	}

protected:
	ClassT() : Class(Class::SetClass<std::codecvt<wchar_t, char, mbstate_t>>(this))
	{
		using T = std::codecvt<wchar_t, char, mbstate_t>;
		m_Bases.push_back(ClassT<std::codecvt_base>::Get());
		m_SFields.push_back(Field{.Name = "id", .Type = Class::Get<locale::id>()->getName(), .Access = ::New<FuncT<Raw<decltype(T::id)>>>([]() { return &T::id; }), });
		m_Methods.push_back(Method{.Name = "in", .Type = "|"+Class::Get<mbstate_t &>()->getName()+"|"+Class::Get<const char *>()->getName()+"|"+Class::Get<const char *>()->getName()+"|"+Class::Get<const char *&>()->getName()+"|"+Class::Get<wchar_t *>()->getName()+"|"+Class::Get<wchar_t *>()->getName()+"|"+Class::Get<wchar_t *&>()->getName()+"", .Return = Class::Get<>()->getName(), .Access = ::New<FuncT<,Raw<T>,mbstate_t &,const char *,const char *,const char *&,wchar_t *,wchar_t *,wchar_t *& >>([](Raw<T> _0,mbstate_t & _1,const char * _2,const char * _3,const char *& _4,wchar_t * _5,wchar_t * _6,wchar_t *& _7)-> { return _0->in(_1,_2,_3,_4,_5,_6,_7); }), });
		m_Methods.push_back(Method{.Name = "out", .Type = "|"+Class::Get<mbstate_t &>()->getName()+"|"+Class::Get<const wchar_t *>()->getName()+"|"+Class::Get<const wchar_t *>()->getName()+"|"+Class::Get<const wchar_t *&>()->getName()+"|"+Class::Get<char *>()->getName()+"|"+Class::Get<char *>()->getName()+"|"+Class::Get<char *&>()->getName()+"", .Return = Class::Get<>()->getName(), .Access = ::New<FuncT<,Raw<T>,mbstate_t &,const wchar_t *,const wchar_t *,const wchar_t *&,char *,char *,char *& >>([](Raw<T> _0,mbstate_t & _1,const wchar_t * _2,const wchar_t * _3,const wchar_t *& _4,char * _5,char * _6,char *& _7)-> { return _0->out(_1,_2,_3,_4,_5,_6,_7); }), });
		m_Methods.push_back(Method{.Name = "unshift", .Type = "|"+Class::Get<mbstate_t &>()->getName()+"|"+Class::Get<char *>()->getName()+"|"+Class::Get<char *>()->getName()+"|"+Class::Get<char *&>()->getName()+"", .Return = Class::Get<>()->getName(), .Access = ::New<FuncT<,Raw<T>,mbstate_t &,char *,char *,char *& >>([](Raw<T> _0,mbstate_t & _1,char * _2,char * _3,char *& _4)-> { return _0->unshift(_1,_2,_3,_4); }), });
		m_Methods.push_back(Method{.Name = "length", .Type = "|"+Class::Get<mbstate_t &>()->getName()+"|"+Class::Get<const char *>()->getName()+"|"+Class::Get<const char *>()->getName()+"|"+Class::Get<size_t>()->getName()+"", .Return = Class::Get<int>()->getName(), .Access = ::New<FuncT<int,Raw<T>,mbstate_t &,const char *,const char *,size_t >>([](Raw<T> _0,mbstate_t & _1,const char * _2,const char * _3,size_t _4)->int { return _0->length(_1,_2,_3,_4); }), });
		m_SMethods.push_back(Method{.Name = "_Getcat", .Type = "|"+Class::Get<const locale::facet **>()->getName()+"|"+Class::Get<const locale *>()->getName()+"", .Return = Class::Get<size_t>()->getName(), .Access = ::New<FuncT<size_t,const locale::facet **,const locale * >>([](const locale::facet ** _1,const locale * _2)->size_t { return T::_Getcat(_1,_2); }), });
	}
};

template<>
class ClassT<std::codecvt<unsigned short, char, mbstate_t>> : public Class
{
public:
	static Raw<ClassT> Get()
	{
		static ClassT s_Instance;
		return &s_Instance;
	}

protected:
	ClassT() : Class(Class::SetClass<std::codecvt<unsigned short, char, mbstate_t>>(this))
	{
		using T = std::codecvt<unsigned short, char, mbstate_t>;
		m_Bases.push_back(ClassT<std::codecvt_base>::Get());
		m_SFields.push_back(Field{.Name = "id", .Type = Class::Get<locale::id>()->getName(), .Access = ::New<FuncT<Raw<decltype(T::id)>>>([]() { return &T::id; }), });
		m_Methods.push_back(Method{.Name = "in", .Type = "|"+Class::Get<mbstate_t &>()->getName()+"|"+Class::Get<const char *>()->getName()+"|"+Class::Get<const char *>()->getName()+"|"+Class::Get<const char *&>()->getName()+"|"+Class::Get<unsigned short *>()->getName()+"|"+Class::Get<unsigned short *>()->getName()+"|"+Class::Get<unsigned short *&>()->getName()+"", .Return = Class::Get<>()->getName(), .Access = ::New<FuncT<,Raw<T>,mbstate_t &,const char *,const char *,const char *&,unsigned short *,unsigned short *,unsigned short *& >>([](Raw<T> _0,mbstate_t & _1,const char * _2,const char * _3,const char *& _4,unsigned short * _5,unsigned short * _6,unsigned short *& _7)-> { return _0->in(_1,_2,_3,_4,_5,_6,_7); }), });
		m_Methods.push_back(Method{.Name = "out", .Type = "|"+Class::Get<mbstate_t &>()->getName()+"|"+Class::Get<const unsigned short *>()->getName()+"|"+Class::Get<const unsigned short *>()->getName()+"|"+Class::Get<const unsigned short *&>()->getName()+"|"+Class::Get<char *>()->getName()+"|"+Class::Get<char *>()->getName()+"|"+Class::Get<char *&>()->getName()+"", .Return = Class::Get<>()->getName(), .Access = ::New<FuncT<,Raw<T>,mbstate_t &,const unsigned short *,const unsigned short *,const unsigned short *&,char *,char *,char *& >>([](Raw<T> _0,mbstate_t & _1,const unsigned short * _2,const unsigned short * _3,const unsigned short *& _4,char * _5,char * _6,char *& _7)-> { return _0->out(_1,_2,_3,_4,_5,_6,_7); }), });
		m_Methods.push_back(Method{.Name = "unshift", .Type = "|"+Class::Get<mbstate_t &>()->getName()+"|"+Class::Get<char *>()->getName()+"|"+Class::Get<char *>()->getName()+"|"+Class::Get<char *&>()->getName()+"", .Return = Class::Get<>()->getName(), .Access = ::New<FuncT<,Raw<T>,mbstate_t &,char *,char *,char *& >>([](Raw<T> _0,mbstate_t & _1,char * _2,char * _3,char *& _4)-> { return _0->unshift(_1,_2,_3,_4); }), });
		m_Methods.push_back(Method{.Name = "length", .Type = "|"+Class::Get<mbstate_t &>()->getName()+"|"+Class::Get<const char *>()->getName()+"|"+Class::Get<const char *>()->getName()+"|"+Class::Get<size_t>()->getName()+"", .Return = Class::Get<int>()->getName(), .Access = ::New<FuncT<int,Raw<T>,mbstate_t &,const char *,const char *,size_t >>([](Raw<T> _0,mbstate_t & _1,const char * _2,const char * _3,size_t _4)->int { return _0->length(_1,_2,_3,_4); }), });
		m_SMethods.push_back(Method{.Name = "_Getcat", .Type = "|"+Class::Get<const locale::facet **>()->getName()+"|"+Class::Get<const locale *>()->getName()+"", .Return = Class::Get<size_t>()->getName(), .Access = ::New<FuncT<size_t,const locale::facet **,const locale * >>([](const locale::facet ** _1,const locale * _2)->size_t { return T::_Getcat(_1,_2); }), });
	}
};

template<>
class ClassT<std::codecvt_byname<char16_t, char, mbstate_t>> : public Class
{
public:
	static Raw<ClassT> Get()
	{
		static ClassT s_Instance;
		return &s_Instance;
	}

protected:
	ClassT() : Class(Class::SetClass<std::codecvt_byname<char16_t, char, mbstate_t>>(this))
	{
		using T = std::codecvt_byname<char16_t, char, mbstate_t>;
		m_Bases.push_back(ClassT<std::codecvt<char16_t, char, mbstate_t>>::Get());
	}
};

template<>
class ClassT<std::codecvt_byname<char32_t, char, mbstate_t>> : public Class
{
public:
	static Raw<ClassT> Get()
	{
		static ClassT s_Instance;
		return &s_Instance;
	}

protected:
	ClassT() : Class(Class::SetClass<std::codecvt_byname<char32_t, char, mbstate_t>>(this))
	{
		using T = std::codecvt_byname<char32_t, char, mbstate_t>;
		m_Bases.push_back(ClassT<std::codecvt<char32_t, char, mbstate_t>>::Get());
	}
};

template<>
class ClassT<std::codecvt_byname<char16_t, char8_t, mbstate_t>> : public Class
{
public:
	static Raw<ClassT> Get()
	{
		static ClassT s_Instance;
		return &s_Instance;
	}

protected:
	ClassT() : Class(Class::SetClass<std::codecvt_byname<char16_t, char8_t, mbstate_t>>(this))
	{
		using T = std::codecvt_byname<char16_t, char8_t, mbstate_t>;
		m_Bases.push_back(ClassT<std::codecvt<char16_t, char8_t, mbstate_t>>::Get());
	}
};

template<>
class ClassT<std::codecvt_byname<char32_t, char8_t, mbstate_t>> : public Class
{
public:
	static Raw<ClassT> Get()
	{
		static ClassT s_Instance;
		return &s_Instance;
	}

protected:
	ClassT() : Class(Class::SetClass<std::codecvt_byname<char32_t, char8_t, mbstate_t>>(this))
	{
		using T = std::codecvt_byname<char32_t, char8_t, mbstate_t>;
		m_Bases.push_back(ClassT<std::codecvt<char32_t, char8_t, mbstate_t>>::Get());
	}
};

template<>
class ClassT<std::ctype_base> : public Class
{
public:
	static Raw<ClassT> Get()
	{
		static ClassT s_Instance;
		return &s_Instance;
	}

protected:
	ClassT() : Class(Class::SetClass<std::ctype_base>(this))
	{
		using T = std::ctype_base;
		m_Bases.push_back(ClassT<std::locale::facet>::Get());
	}
};

template<>
class ClassT<std::ctype<char>> : public Class
{
public:
	static Raw<ClassT> Get()
	{
		static ClassT s_Instance;
		return &s_Instance;
	}

protected:
	ClassT() : Class(Class::SetClass<std::ctype<char>>(this))
	{
		using T = std::ctype<char>;
		m_Bases.push_back(ClassT<std::ctype_base>::Get());
		m_SFields.push_back(Field{.Name = "id", .Type = Class::Get<locale::id>()->getName(), .Access = ::New<FuncT<Raw<decltype(T::id)>>>([]() { return &T::id; }), });
		m_SFields.push_back(Field{.Name = "table_size", .Type = Class::Get<const size_t>()->getName(), .Access = ::New<FuncT<Raw<decltype(T::table_size)>>>([]() { return &T::table_size; }), });
		m_Methods.push_back(Method{.Name = "is", .Type = "|"+Class::Get<mask>()->getName()+"|"+Class::Get<_Elem>()->getName()+"", .Return = Class::Get<bool>()->getName(), .Access = ::New<FuncT<bool,Raw<T>,mask,_Elem >>([](Raw<T> _0,mask _1,_Elem _2)->bool { return _0->is(_1,_2); }), });
		m_Methods.push_back(Method{.Name = "is", .Type = "|"+Class::Get<const _Elem *>()->getName()+"|"+Class::Get<const _Elem *>()->getName()+"|"+Class::Get<mask *>()->getName()+"", .Return = Class::Get<const _Elem *>()->getName(), .Access = ::New<FuncT<const _Elem *,Raw<T>,const _Elem *,const _Elem *,mask * >>([](Raw<T> _0,const _Elem * _1,const _Elem * _2,mask * _3)->const _Elem * { return _0->is(_1,_2,_3); }), });
		m_Methods.push_back(Method{.Name = "scan_is", .Type = "|"+Class::Get<mask>()->getName()+"|"+Class::Get<const _Elem *>()->getName()+"|"+Class::Get<const _Elem *>()->getName()+"", .Return = Class::Get<const _Elem *>()->getName(), .Access = ::New<FuncT<const _Elem *,Raw<T>,mask,const _Elem *,const _Elem * >>([](Raw<T> _0,mask _1,const _Elem * _2,const _Elem * _3)->const _Elem * { return _0->scan_is(_1,_2,_3); }), });
		m_Methods.push_back(Method{.Name = "scan_not", .Type = "|"+Class::Get<mask>()->getName()+"|"+Class::Get<const _Elem *>()->getName()+"|"+Class::Get<const _Elem *>()->getName()+"", .Return = Class::Get<const _Elem *>()->getName(), .Access = ::New<FuncT<const _Elem *,Raw<T>,mask,const _Elem *,const _Elem * >>([](Raw<T> _0,mask _1,const _Elem * _2,const _Elem * _3)->const _Elem * { return _0->scan_not(_1,_2,_3); }), });
		m_Methods.push_back(Method{.Name = "tolower", .Type = "|"+Class::Get<_Elem>()->getName()+"", .Return = Class::Get<>()->getName(), .Access = ::New<FuncT<,Raw<T>,_Elem >>([](Raw<T> _0,_Elem _1)-> { return _0->tolower(_1); }), });
		m_Methods.push_back(Method{.Name = "tolower", .Type = "|"+Class::Get<_Elem *>()->getName()+"|"+Class::Get<const _Elem *>()->getName()+"", .Return = Class::Get<const _Elem *>()->getName(), .Access = ::New<FuncT<const _Elem *,Raw<T>,_Elem *,const _Elem * >>([](Raw<T> _0,_Elem * _1,const _Elem * _2)->const _Elem * { return _0->tolower(_1,_2); }), });
		m_Methods.push_back(Method{.Name = "toupper", .Type = "|"+Class::Get<_Elem>()->getName()+"", .Return = Class::Get<>()->getName(), .Access = ::New<FuncT<,Raw<T>,_Elem >>([](Raw<T> _0,_Elem _1)-> { return _0->toupper(_1); }), });
		m_Methods.push_back(Method{.Name = "toupper", .Type = "|"+Class::Get<_Elem *>()->getName()+"|"+Class::Get<const _Elem *>()->getName()+"", .Return = Class::Get<const _Elem *>()->getName(), .Access = ::New<FuncT<const _Elem *,Raw<T>,_Elem *,const _Elem * >>([](Raw<T> _0,_Elem * _1,const _Elem * _2)->const _Elem * { return _0->toupper(_1,_2); }), });
		m_Methods.push_back(Method{.Name = "widen", .Type = "|"+Class::Get<char>()->getName()+"", .Return = Class::Get<>()->getName(), .Access = ::New<FuncT<,Raw<T>,char >>([](Raw<T> _0,char _1)-> { return _0->widen(_1); }), });
		m_Methods.push_back(Method{.Name = "widen", .Type = "|"+Class::Get<const char *>()->getName()+"|"+Class::Get<const char *>()->getName()+"|"+Class::Get<_Elem *>()->getName()+"", .Return = Class::Get<const _Elem *>()->getName(), .Access = ::New<FuncT<const _Elem *,Raw<T>,const char *,const char *,_Elem * >>([](Raw<T> _0,const char * _1,const char * _2,_Elem * _3)->const _Elem * { return _0->widen(_1,_2,_3); }), });
		m_Methods.push_back(Method{.Name = "narrow", .Type = "|"+Class::Get<_Elem>()->getName()+"|"+Class::Get<char>()->getName()+"", .Return = Class::Get<>()->getName(), .Access = ::New<FuncT<,Raw<T>,_Elem,char >>([](Raw<T> _0,_Elem _1,char _2)-> { return _0->narrow(_1,_2); }), });
		m_Methods.push_back(Method{.Name = "narrow", .Type = "|"+Class::Get<const _Elem *>()->getName()+"|"+Class::Get<const _Elem *>()->getName()+"|"+Class::Get<char>()->getName()+"|"+Class::Get<char *>()->getName()+"", .Return = Class::Get<const _Elem *>()->getName(), .Access = ::New<FuncT<const _Elem *,Raw<T>,const _Elem *,const _Elem *,char,char * >>([](Raw<T> _0,const _Elem * _1,const _Elem * _2,char _3,char * _4)->const _Elem * { return _0->narrow(_1,_2,_3,_4); }), });
		m_Methods.push_back(Method{.Name = "table", .Type = "", .Return = Class::Get<const mask *>()->getName(), .Access = ::New<FuncT<const mask *,Raw<T> >>([](Raw<T> _0)->const mask * { return _0->table(); }), });
		m_SMethods.push_back(Method{.Name = "_Getcat", .Type = "|"+Class::Get<const locale::facet **>()->getName()+"|"+Class::Get<const locale *>()->getName()+"", .Return = Class::Get<size_t>()->getName(), .Access = ::New<FuncT<size_t,const locale::facet **,const locale * >>([](const locale::facet ** _1,const locale * _2)->size_t { return T::_Getcat(_1,_2); }), });
		m_SMethods.push_back(Method{.Name = "classic_table", .Type = "", .Return = Class::Get<const mask *>()->getName(), .Access = ::New<FuncT<const mask * >>([]()->const mask * { return T::classic_table(); }), });
	}
};

template<>
class ClassT<std::ctype<wchar_t>> : public Class
{
public:
	static Raw<ClassT> Get()
	{
		static ClassT s_Instance;
		return &s_Instance;
	}

protected:
	ClassT() : Class(Class::SetClass<std::ctype<wchar_t>>(this))
	{
		using T = std::ctype<wchar_t>;
		m_Bases.push_back(ClassT<std::ctype_base>::Get());
		m_SFields.push_back(Field{.Name = "id", .Type = Class::Get<locale::id>()->getName(), .Access = ::New<FuncT<Raw<decltype(T::id)>>>([]() { return &T::id; }), });
		m_Methods.push_back(Method{.Name = "is", .Type = "|"+Class::Get<mask>()->getName()+"|"+Class::Get<_Elem>()->getName()+"", .Return = Class::Get<bool>()->getName(), .Access = ::New<FuncT<bool,Raw<T>,mask,_Elem >>([](Raw<T> _0,mask _1,_Elem _2)->bool { return _0->is(_1,_2); }), });
		m_Methods.push_back(Method{.Name = "is", .Type = "|"+Class::Get<const _Elem *>()->getName()+"|"+Class::Get<const _Elem *>()->getName()+"|"+Class::Get<mask *>()->getName()+"", .Return = Class::Get<const _Elem *>()->getName(), .Access = ::New<FuncT<const _Elem *,Raw<T>,const _Elem *,const _Elem *,mask * >>([](Raw<T> _0,const _Elem * _1,const _Elem * _2,mask * _3)->const _Elem * { return _0->is(_1,_2,_3); }), });
		m_Methods.push_back(Method{.Name = "scan_is", .Type = "|"+Class::Get<mask>()->getName()+"|"+Class::Get<const _Elem *>()->getName()+"|"+Class::Get<const _Elem *>()->getName()+"", .Return = Class::Get<const _Elem *>()->getName(), .Access = ::New<FuncT<const _Elem *,Raw<T>,mask,const _Elem *,const _Elem * >>([](Raw<T> _0,mask _1,const _Elem * _2,const _Elem * _3)->const _Elem * { return _0->scan_is(_1,_2,_3); }), });
		m_Methods.push_back(Method{.Name = "scan_not", .Type = "|"+Class::Get<mask>()->getName()+"|"+Class::Get<const _Elem *>()->getName()+"|"+Class::Get<const _Elem *>()->getName()+"", .Return = Class::Get<const _Elem *>()->getName(), .Access = ::New<FuncT<const _Elem *,Raw<T>,mask,const _Elem *,const _Elem * >>([](Raw<T> _0,mask _1,const _Elem * _2,const _Elem * _3)->const _Elem * { return _0->scan_not(_1,_2,_3); }), });
		m_Methods.push_back(Method{.Name = "tolower", .Type = "|"+Class::Get<_Elem>()->getName()+"", .Return = Class::Get<>()->getName(), .Access = ::New<FuncT<,Raw<T>,_Elem >>([](Raw<T> _0,_Elem _1)-> { return _0->tolower(_1); }), });
		m_Methods.push_back(Method{.Name = "tolower", .Type = "|"+Class::Get<_Elem *>()->getName()+"|"+Class::Get<const _Elem *>()->getName()+"", .Return = Class::Get<const _Elem *>()->getName(), .Access = ::New<FuncT<const _Elem *,Raw<T>,_Elem *,const _Elem * >>([](Raw<T> _0,_Elem * _1,const _Elem * _2)->const _Elem * { return _0->tolower(_1,_2); }), });
		m_Methods.push_back(Method{.Name = "toupper", .Type = "|"+Class::Get<_Elem>()->getName()+"", .Return = Class::Get<>()->getName(), .Access = ::New<FuncT<,Raw<T>,_Elem >>([](Raw<T> _0,_Elem _1)-> { return _0->toupper(_1); }), });
		m_Methods.push_back(Method{.Name = "toupper", .Type = "|"+Class::Get<_Elem *>()->getName()+"|"+Class::Get<const _Elem *>()->getName()+"", .Return = Class::Get<const _Elem *>()->getName(), .Access = ::New<FuncT<const _Elem *,Raw<T>,_Elem *,const _Elem * >>([](Raw<T> _0,_Elem * _1,const _Elem * _2)->const _Elem * { return _0->toupper(_1,_2); }), });
		m_Methods.push_back(Method{.Name = "widen", .Type = "|"+Class::Get<char>()->getName()+"", .Return = Class::Get<>()->getName(), .Access = ::New<FuncT<,Raw<T>,char >>([](Raw<T> _0,char _1)-> { return _0->widen(_1); }), });
		m_Methods.push_back(Method{.Name = "widen", .Type = "|"+Class::Get<const char *>()->getName()+"|"+Class::Get<const char *>()->getName()+"|"+Class::Get<_Elem *>()->getName()+"", .Return = Class::Get<const char *>()->getName(), .Access = ::New<FuncT<const char *,Raw<T>,const char *,const char *,_Elem * >>([](Raw<T> _0,const char * _1,const char * _2,_Elem * _3)->const char * { return _0->widen(_1,_2,_3); }), });
		m_Methods.push_back(Method{.Name = "narrow", .Type = "|"+Class::Get<_Elem>()->getName()+"|"+Class::Get<char>()->getName()+"", .Return = Class::Get<char>()->getName(), .Access = ::New<FuncT<char,Raw<T>,_Elem,char >>([](Raw<T> _0,_Elem _1,char _2)->char { return _0->narrow(_1,_2); }), });
		m_Methods.push_back(Method{.Name = "narrow", .Type = "|"+Class::Get<const _Elem *>()->getName()+"|"+Class::Get<const _Elem *>()->getName()+"|"+Class::Get<char>()->getName()+"|"+Class::Get<char *>()->getName()+"", .Return = Class::Get<const _Elem *>()->getName(), .Access = ::New<FuncT<const _Elem *,Raw<T>,const _Elem *,const _Elem *,char,char * >>([](Raw<T> _0,const _Elem * _1,const _Elem * _2,char _3,char * _4)->const _Elem * { return _0->narrow(_1,_2,_3,_4); }), });
		m_SMethods.push_back(Method{.Name = "_Getcat", .Type = "|"+Class::Get<const locale::facet **>()->getName()+"|"+Class::Get<const locale *>()->getName()+"", .Return = Class::Get<size_t>()->getName(), .Access = ::New<FuncT<size_t,const locale::facet **,const locale * >>([](const locale::facet ** _1,const locale * _2)->size_t { return T::_Getcat(_1,_2); }), });
	}
};

template<>
class ClassT<std::ctype<unsigned short>> : public Class
{
public:
	static Raw<ClassT> Get()
	{
		static ClassT s_Instance;
		return &s_Instance;
	}

protected:
	ClassT() : Class(Class::SetClass<std::ctype<unsigned short>>(this))
	{
		using T = std::ctype<unsigned short>;
		m_Bases.push_back(ClassT<std::ctype_base>::Get());
		m_SFields.push_back(Field{.Name = "id", .Type = Class::Get<locale::id>()->getName(), .Access = ::New<FuncT<Raw<decltype(T::id)>>>([]() { return &T::id; }), });
		m_Methods.push_back(Method{.Name = "is", .Type = "|"+Class::Get<mask>()->getName()+"|"+Class::Get<_Elem>()->getName()+"", .Return = Class::Get<bool>()->getName(), .Access = ::New<FuncT<bool,Raw<T>,mask,_Elem >>([](Raw<T> _0,mask _1,_Elem _2)->bool { return _0->is(_1,_2); }), });
		m_Methods.push_back(Method{.Name = "is", .Type = "|"+Class::Get<const _Elem *>()->getName()+"|"+Class::Get<const _Elem *>()->getName()+"|"+Class::Get<mask *>()->getName()+"", .Return = Class::Get<const _Elem *>()->getName(), .Access = ::New<FuncT<const _Elem *,Raw<T>,const _Elem *,const _Elem *,mask * >>([](Raw<T> _0,const _Elem * _1,const _Elem * _2,mask * _3)->const _Elem * { return _0->is(_1,_2,_3); }), });
		m_Methods.push_back(Method{.Name = "scan_is", .Type = "|"+Class::Get<mask>()->getName()+"|"+Class::Get<const _Elem *>()->getName()+"|"+Class::Get<const _Elem *>()->getName()+"", .Return = Class::Get<const _Elem *>()->getName(), .Access = ::New<FuncT<const _Elem *,Raw<T>,mask,const _Elem *,const _Elem * >>([](Raw<T> _0,mask _1,const _Elem * _2,const _Elem * _3)->const _Elem * { return _0->scan_is(_1,_2,_3); }), });
		m_Methods.push_back(Method{.Name = "scan_not", .Type = "|"+Class::Get<mask>()->getName()+"|"+Class::Get<const _Elem *>()->getName()+"|"+Class::Get<const _Elem *>()->getName()+"", .Return = Class::Get<const _Elem *>()->getName(), .Access = ::New<FuncT<const _Elem *,Raw<T>,mask,const _Elem *,const _Elem * >>([](Raw<T> _0,mask _1,const _Elem * _2,const _Elem * _3)->const _Elem * { return _0->scan_not(_1,_2,_3); }), });
		m_Methods.push_back(Method{.Name = "tolower", .Type = "|"+Class::Get<_Elem>()->getName()+"", .Return = Class::Get<>()->getName(), .Access = ::New<FuncT<,Raw<T>,_Elem >>([](Raw<T> _0,_Elem _1)-> { return _0->tolower(_1); }), });
		m_Methods.push_back(Method{.Name = "tolower", .Type = "|"+Class::Get<_Elem *>()->getName()+"|"+Class::Get<const _Elem *>()->getName()+"", .Return = Class::Get<const _Elem *>()->getName(), .Access = ::New<FuncT<const _Elem *,Raw<T>,_Elem *,const _Elem * >>([](Raw<T> _0,_Elem * _1,const _Elem * _2)->const _Elem * { return _0->tolower(_1,_2); }), });
		m_Methods.push_back(Method{.Name = "toupper", .Type = "|"+Class::Get<_Elem>()->getName()+"", .Return = Class::Get<>()->getName(), .Access = ::New<FuncT<,Raw<T>,_Elem >>([](Raw<T> _0,_Elem _1)-> { return _0->toupper(_1); }), });
		m_Methods.push_back(Method{.Name = "toupper", .Type = "|"+Class::Get<_Elem *>()->getName()+"|"+Class::Get<const _Elem *>()->getName()+"", .Return = Class::Get<const _Elem *>()->getName(), .Access = ::New<FuncT<const _Elem *,Raw<T>,_Elem *,const _Elem * >>([](Raw<T> _0,_Elem * _1,const _Elem * _2)->const _Elem * { return _0->toupper(_1,_2); }), });
		m_Methods.push_back(Method{.Name = "widen", .Type = "|"+Class::Get<char>()->getName()+"", .Return = Class::Get<>()->getName(), .Access = ::New<FuncT<,Raw<T>,char >>([](Raw<T> _0,char _1)-> { return _0->widen(_1); }), });
		m_Methods.push_back(Method{.Name = "widen", .Type = "|"+Class::Get<const char *>()->getName()+"|"+Class::Get<const char *>()->getName()+"|"+Class::Get<_Elem *>()->getName()+"", .Return = Class::Get<const char *>()->getName(), .Access = ::New<FuncT<const char *,Raw<T>,const char *,const char *,_Elem * >>([](Raw<T> _0,const char * _1,const char * _2,_Elem * _3)->const char * { return _0->widen(_1,_2,_3); }), });
		m_Methods.push_back(Method{.Name = "narrow", .Type = "|"+Class::Get<_Elem>()->getName()+"|"+Class::Get<char>()->getName()+"", .Return = Class::Get<char>()->getName(), .Access = ::New<FuncT<char,Raw<T>,_Elem,char >>([](Raw<T> _0,_Elem _1,char _2)->char { return _0->narrow(_1,_2); }), });
		m_Methods.push_back(Method{.Name = "narrow", .Type = "|"+Class::Get<const _Elem *>()->getName()+"|"+Class::Get<const _Elem *>()->getName()+"|"+Class::Get<char>()->getName()+"|"+Class::Get<char *>()->getName()+"", .Return = Class::Get<const _Elem *>()->getName(), .Access = ::New<FuncT<const _Elem *,Raw<T>,const _Elem *,const _Elem *,char,char * >>([](Raw<T> _0,const _Elem * _1,const _Elem * _2,char _3,char * _4)->const _Elem * { return _0->narrow(_1,_2,_3,_4); }), });
		m_SMethods.push_back(Method{.Name = "_Getcat", .Type = "|"+Class::Get<const locale::facet **>()->getName()+"|"+Class::Get<const locale *>()->getName()+"", .Return = Class::Get<size_t>()->getName(), .Access = ::New<FuncT<size_t,const locale::facet **,const locale * >>([](const locale::facet ** _1,const locale * _2)->size_t { return T::_Getcat(_1,_2); }), });
	}
};

template<>
class ClassT<std::ios_base::Init> : public Class
{
public:
	static Raw<ClassT> Get()
	{
		static ClassT s_Instance;
		return &s_Instance;
	}

protected:
	ClassT() : Class(Class::SetClass<std::ios_base::Init>(this))
	{
		using T = std::ios_base::Init;
	}
};

template<>
class ClassT<std::ios_base::_Iosarray> : public Class
{
public:
	static Raw<ClassT> Get()
	{
		static ClassT s_Instance;
		return &s_Instance;
	}

protected:
	ClassT() : Class(Class::SetClass<std::ios_base::_Iosarray>(this))
	{
		using T = std::ios_base::_Iosarray;
		m_Bases.push_back(ClassT<std::_Crt_new_delete>::Get());
		m_Fields.push_back(Field{.Name = "_Next", .Type = Class::Get<_Iosarray *>()->getName(), .Access = ::New<FuncT<Raw<decltype(T::_Next)>,Raw<T> >>([](Raw<T> _0) { return &_0->_Next; }), });
		m_Fields.push_back(Field{.Name = "_Index", .Type = Class::Get<int>()->getName(), .Access = ::New<FuncT<Raw<decltype(T::_Index)>,Raw<T> >>([](Raw<T> _0) { return &_0->_Index; }), });
		m_Fields.push_back(Field{.Name = "_Lo", .Type = Class::Get<long>()->getName(), .Access = ::New<FuncT<Raw<decltype(T::_Lo)>,Raw<T> >>([](Raw<T> _0) { return &_0->_Lo; }), });
		m_Fields.push_back(Field{.Name = "_Vp", .Type = Class::Get<void *>()->getName(), .Access = ::New<FuncT<Raw<decltype(T::_Vp)>,Raw<T> >>([](Raw<T> _0) { return &_0->_Vp; }), });
	}
};

template<>
class ClassT<std::ios_base::_Fnarray> : public Class
{
public:
	static Raw<ClassT> Get()
	{
		static ClassT s_Instance;
		return &s_Instance;
	}

protected:
	ClassT() : Class(Class::SetClass<std::ios_base::_Fnarray>(this))
	{
		using T = std::ios_base::_Fnarray;
		m_Bases.push_back(ClassT<std::_Crt_new_delete>::Get());
		m_Fields.push_back(Field{.Name = "_Next", .Type = Class::Get<_Fnarray *>()->getName(), .Access = ::New<FuncT<Raw<decltype(T::_Next)>,Raw<T> >>([](Raw<T> _0) { return &_0->_Next; }), });
		m_Fields.push_back(Field{.Name = "_Index", .Type = Class::Get<int>()->getName(), .Access = ::New<FuncT<Raw<decltype(T::_Index)>,Raw<T> >>([](Raw<T> _0) { return &_0->_Index; }), });
		m_Fields.push_back(Field{.Name = "_Pfn", .Type = Class::Get<event_callback>()->getName(), .Access = ::New<FuncT<Raw<decltype(T::_Pfn)>,Raw<T> >>([](Raw<T> _0) { return &_0->_Pfn; }), });
	}
};

template<>
class ClassT<std::ios_base> : public Class
{
public:
	static Raw<ClassT> Get()
	{
		static ClassT s_Instance;
		return &s_Instance;
	}

protected:
	ClassT() : Class(Class::SetClass<std::ios_base>(this))
	{
		using T = std::ios_base;
		m_Bases.push_back(ClassT<std::_Iosb<int>>::Get());
		m_Fields.push_back(Field{.Name = "_Stdstr", .Type = Class::Get<size_t>()->getName(), .Access = ::New<FuncT<Raw<decltype(T::_Stdstr)>,Raw<T> >>([](Raw<T> _0) { return &_0->_Stdstr; }), });
		m_Methods.push_back(Method{.Name = "operator!", .Type = "", .Return = Class::Get<bool>()->getName(), .Access = ::New<FuncT<bool,Raw<T> >>([](Raw<T> _0)->bool { return _0->operator!(); }), });
		m_Methods.push_back(Method{.Name = "clear", .Type = "|"+Class::Get<iostate>()->getName()+"|"+Class::Get<bool>()->getName()+"", .Return = Class::Get<void>()->getName(), .Access = ::New<FuncT<void,Raw<T>,iostate,bool >>([](Raw<T> _0,iostate _1,bool _2)->void { return _0->clear(_1,_2); }), });
		m_Methods.push_back(Method{.Name = "clear", .Type = "|"+Class::Get<iostate>()->getName()+"", .Return = Class::Get<void>()->getName(), .Access = ::New<FuncT<void,Raw<T>,iostate >>([](Raw<T> _0,iostate _1)->void { return _0->clear(_1); }), });
		m_Methods.push_back(Method{.Name = "rdstate", .Type = "", .Return = Class::Get<>()->getName(), .Access = ::New<FuncT<,Raw<T> >>([](Raw<T> _0)-> { return _0->rdstate(); }), });
		m_Methods.push_back(Method{.Name = "setstate", .Type = "|"+Class::Get<iostate>()->getName()+"|"+Class::Get<bool>()->getName()+"", .Return = Class::Get<void>()->getName(), .Access = ::New<FuncT<void,Raw<T>,iostate,bool >>([](Raw<T> _0,iostate _1,bool _2)->void { return _0->setstate(_1,_2); }), });
		m_Methods.push_back(Method{.Name = "setstate", .Type = "|"+Class::Get<iostate>()->getName()+"", .Return = Class::Get<void>()->getName(), .Access = ::New<FuncT<void,Raw<T>,iostate >>([](Raw<T> _0,iostate _1)->void { return _0->setstate(_1); }), });
		m_Methods.push_back(Method{.Name = "good", .Type = "", .Return = Class::Get<bool>()->getName(), .Access = ::New<FuncT<bool,Raw<T> >>([](Raw<T> _0)->bool { return _0->good(); }), });
		m_Methods.push_back(Method{.Name = "eof", .Type = "", .Return = Class::Get<bool>()->getName(), .Access = ::New<FuncT<bool,Raw<T> >>([](Raw<T> _0)->bool { return _0->eof(); }), });
		m_Methods.push_back(Method{.Name = "fail", .Type = "", .Return = Class::Get<bool>()->getName(), .Access = ::New<FuncT<bool,Raw<T> >>([](Raw<T> _0)->bool { return _0->fail(); }), });
		m_Methods.push_back(Method{.Name = "bad", .Type = "", .Return = Class::Get<bool>()->getName(), .Access = ::New<FuncT<bool,Raw<T> >>([](Raw<T> _0)->bool { return _0->bad(); }), });
		m_Methods.push_back(Method{.Name = "exceptions", .Type = "", .Return = Class::Get<>()->getName(), .Access = ::New<FuncT<,Raw<T> >>([](Raw<T> _0)-> { return _0->exceptions(); }), });
		m_Methods.push_back(Method{.Name = "exceptions", .Type = "|"+Class::Get<iostate>()->getName()+"", .Return = Class::Get<void>()->getName(), .Access = ::New<FuncT<void,Raw<T>,iostate >>([](Raw<T> _0,iostate _1)->void { return _0->exceptions(_1); }), });
		m_Methods.push_back(Method{.Name = "flags", .Type = "", .Return = Class::Get<>()->getName(), .Access = ::New<FuncT<,Raw<T> >>([](Raw<T> _0)-> { return _0->flags(); }), });
		m_Methods.push_back(Method{.Name = "flags", .Type = "|"+Class::Get<fmtflags>()->getName()+"", .Return = Class::Get<>()->getName(), .Access = ::New<FuncT<,Raw<T>,fmtflags >>([](Raw<T> _0,fmtflags _1)-> { return _0->flags(_1); }), });
		m_Methods.push_back(Method{.Name = "setf", .Type = "|"+Class::Get<fmtflags>()->getName()+"", .Return = Class::Get<>()->getName(), .Access = ::New<FuncT<,Raw<T>,fmtflags >>([](Raw<T> _0,fmtflags _1)-> { return _0->setf(_1); }), });
		m_Methods.push_back(Method{.Name = "setf", .Type = "|"+Class::Get<fmtflags>()->getName()+"|"+Class::Get<fmtflags>()->getName()+"", .Return = Class::Get<>()->getName(), .Access = ::New<FuncT<,Raw<T>,fmtflags,fmtflags >>([](Raw<T> _0,fmtflags _1,fmtflags _2)-> { return _0->setf(_1,_2); }), });
		m_Methods.push_back(Method{.Name = "unsetf", .Type = "|"+Class::Get<fmtflags>()->getName()+"", .Return = Class::Get<void>()->getName(), .Access = ::New<FuncT<void,Raw<T>,fmtflags >>([](Raw<T> _0,fmtflags _1)->void { return _0->unsetf(_1); }), });
		m_Methods.push_back(Method{.Name = "precision", .Type = "", .Return = Class::Get<>()->getName(), .Access = ::New<FuncT<,Raw<T> >>([](Raw<T> _0)-> { return _0->precision(); }), });
		m_Methods.push_back(Method{.Name = "precision", .Type = "|"+Class::Get<streamsize>()->getName()+"", .Return = Class::Get<>()->getName(), .Access = ::New<FuncT<,Raw<T>,streamsize >>([](Raw<T> _0,streamsize _1)-> { return _0->precision(_1); }), });
		m_Methods.push_back(Method{.Name = "width", .Type = "", .Return = Class::Get<>()->getName(), .Access = ::New<FuncT<,Raw<T> >>([](Raw<T> _0)-> { return _0->width(); }), });
		m_Methods.push_back(Method{.Name = "width", .Type = "|"+Class::Get<streamsize>()->getName()+"", .Return = Class::Get<>()->getName(), .Access = ::New<FuncT<,Raw<T>,streamsize >>([](Raw<T> _0,streamsize _1)-> { return _0->width(_1); }), });
		m_Methods.push_back(Method{.Name = "getloc", .Type = "", .Return = Class::Get<std::locale>()->getName(), .Access = ::New<FuncT<std::locale,Raw<T> >>([](Raw<T> _0)->std::locale { return _0->getloc(); }), });
		m_Methods.push_back(Method{.Name = "imbue", .Type = "|"+Class::Get<const locale &>()->getName()+"", .Return = Class::Get<std::locale>()->getName(), .Access = ::New<FuncT<std::locale,Raw<T>,const locale & >>([](Raw<T> _0,const locale & _1)->std::locale { return _0->imbue(_1); }), });
		m_Methods.push_back(Method{.Name = "iword", .Type = "|"+Class::Get<int>()->getName()+"", .Return = Class::Get<long &>()->getName(), .Access = ::New<FuncT<long &,Raw<T>,int >>([](Raw<T> _0,int _1)->long & { return _0->iword(_1); }), });
		m_Methods.push_back(Method{.Name = "pword", .Type = "|"+Class::Get<int>()->getName()+"", .Return = Class::Get<void *&>()->getName(), .Access = ::New<FuncT<void *&,Raw<T>,int >>([](Raw<T> _0,int _1)->void *& { return _0->pword(_1); }), });
		m_Methods.push_back(Method{.Name = "register_callback", .Type = "|"+Class::Get<event_callback>()->getName()+"|"+Class::Get<int>()->getName()+"", .Return = Class::Get<void>()->getName(), .Access = ::New<FuncT<void,Raw<T>,event_callback,int >>([](Raw<T> _0,event_callback _1,int _2)->void { return _0->register_callback(_1,_2); }), });
		m_Methods.push_back(Method{.Name = "copyfmt", .Type = "|"+Class::Get<const ios_base &>()->getName()+"", .Return = Class::Get<ios_base &>()->getName(), .Access = ::New<FuncT<ios_base &,Raw<T>,const ios_base & >>([](Raw<T> _0,const ios_base & _1)->ios_base & { return _0->copyfmt(_1); }), });
		m_Methods.push_back(Method{.Name = "swap", .Type = "|"+Class::Get<ios_base &>()->getName()+"", .Return = Class::Get<void>()->getName(), .Access = ::New<FuncT<void,Raw<T>,ios_base & >>([](Raw<T> _0,ios_base & _1)->void { return _0->swap(_1); }), });
		m_Methods.push_back(Method{.Name = "operator=", .Type = "|"+Class::Get<const ios_base &>()->getName()+"", .Return = Class::Get<ios_base &>()->getName(), .Access = ::New<FuncT<ios_base &,Raw<T>,const ios_base & >>([](Raw<T> _0,const ios_base & _1)->ios_base & { return _0->operator=(_1); }), });
		m_SMethods.push_back(Method{.Name = "xalloc", .Type = "", .Return = Class::Get<int>()->getName(), .Access = ::New<FuncT<int >>([]()->int { return T::xalloc(); }), });
		m_SMethods.push_back(Method{.Name = "sync_with_stdio", .Type = "|"+Class::Get<bool>()->getName()+"", .Return = Class::Get<bool>()->getName(), .Access = ::New<FuncT<bool,bool >>([](bool _1)->bool { return T::sync_with_stdio(_1); }), });
		m_SMethods.push_back(Method{.Name = "_Addstd", .Type = "|"+Class::Get<ios_base *>()->getName()+"", .Return = Class::Get<void>()->getName(), .Access = ::New<FuncT<void,ios_base * >>([](ios_base * _1)->void { return T::_Addstd(_1); }), });
	}
};

template<>
class ClassT<_Min_max_1i> : public Class
{
public:
	static Raw<ClassT> Get()
	{
		static ClassT s_Instance;
		return &s_Instance;
	}

protected:
	ClassT() : Class(Class::SetClass<_Min_max_1i>(this))
	{
		using T = _Min_max_1i;
		m_Fields.push_back(Field{.Name = "_Min", .Type = Class::Get<int8_t>()->getName(), .Access = ::New<FuncT<Raw<decltype(T::_Min)>,Raw<T> >>([](Raw<T> _0) { return &_0->_Min; }), });
		m_Fields.push_back(Field{.Name = "_Max", .Type = Class::Get<int8_t>()->getName(), .Access = ::New<FuncT<Raw<decltype(T::_Max)>,Raw<T> >>([](Raw<T> _0) { return &_0->_Max; }), });
	}
};

template<>
class ClassT<_Min_max_1u> : public Class
{
public:
	static Raw<ClassT> Get()
	{
		static ClassT s_Instance;
		return &s_Instance;
	}

protected:
	ClassT() : Class(Class::SetClass<_Min_max_1u>(this))
	{
		using T = _Min_max_1u;
		m_Fields.push_back(Field{.Name = "_Min", .Type = Class::Get<uint8_t>()->getName(), .Access = ::New<FuncT<Raw<decltype(T::_Min)>,Raw<T> >>([](Raw<T> _0) { return &_0->_Min; }), });
		m_Fields.push_back(Field{.Name = "_Max", .Type = Class::Get<uint8_t>()->getName(), .Access = ::New<FuncT<Raw<decltype(T::_Max)>,Raw<T> >>([](Raw<T> _0) { return &_0->_Max; }), });
	}
};

template<>
class ClassT<_Min_max_2i> : public Class
{
public:
	static Raw<ClassT> Get()
	{
		static ClassT s_Instance;
		return &s_Instance;
	}

protected:
	ClassT() : Class(Class::SetClass<_Min_max_2i>(this))
	{
		using T = _Min_max_2i;
		m_Fields.push_back(Field{.Name = "_Min", .Type = Class::Get<int16_t>()->getName(), .Access = ::New<FuncT<Raw<decltype(T::_Min)>,Raw<T> >>([](Raw<T> _0) { return &_0->_Min; }), });
		m_Fields.push_back(Field{.Name = "_Max", .Type = Class::Get<int16_t>()->getName(), .Access = ::New<FuncT<Raw<decltype(T::_Max)>,Raw<T> >>([](Raw<T> _0) { return &_0->_Max; }), });
	}
};

template<>
class ClassT<_Min_max_2u> : public Class
{
public:
	static Raw<ClassT> Get()
	{
		static ClassT s_Instance;
		return &s_Instance;
	}

protected:
	ClassT() : Class(Class::SetClass<_Min_max_2u>(this))
	{
		using T = _Min_max_2u;
		m_Fields.push_back(Field{.Name = "_Min", .Type = Class::Get<uint16_t>()->getName(), .Access = ::New<FuncT<Raw<decltype(T::_Min)>,Raw<T> >>([](Raw<T> _0) { return &_0->_Min; }), });
		m_Fields.push_back(Field{.Name = "_Max", .Type = Class::Get<uint16_t>()->getName(), .Access = ::New<FuncT<Raw<decltype(T::_Max)>,Raw<T> >>([](Raw<T> _0) { return &_0->_Max; }), });
	}
};

template<>
class ClassT<_Min_max_4i> : public Class
{
public:
	static Raw<ClassT> Get()
	{
		static ClassT s_Instance;
		return &s_Instance;
	}

protected:
	ClassT() : Class(Class::SetClass<_Min_max_4i>(this))
	{
		using T = _Min_max_4i;
		m_Fields.push_back(Field{.Name = "_Min", .Type = Class::Get<int32_t>()->getName(), .Access = ::New<FuncT<Raw<decltype(T::_Min)>,Raw<T> >>([](Raw<T> _0) { return &_0->_Min; }), });
		m_Fields.push_back(Field{.Name = "_Max", .Type = Class::Get<int32_t>()->getName(), .Access = ::New<FuncT<Raw<decltype(T::_Max)>,Raw<T> >>([](Raw<T> _0) { return &_0->_Max; }), });
	}
};

template<>
class ClassT<_Min_max_4u> : public Class
{
public:
	static Raw<ClassT> Get()
	{
		static ClassT s_Instance;
		return &s_Instance;
	}

protected:
	ClassT() : Class(Class::SetClass<_Min_max_4u>(this))
	{
		using T = _Min_max_4u;
		m_Fields.push_back(Field{.Name = "_Min", .Type = Class::Get<uint32_t>()->getName(), .Access = ::New<FuncT<Raw<decltype(T::_Min)>,Raw<T> >>([](Raw<T> _0) { return &_0->_Min; }), });
		m_Fields.push_back(Field{.Name = "_Max", .Type = Class::Get<uint32_t>()->getName(), .Access = ::New<FuncT<Raw<decltype(T::_Max)>,Raw<T> >>([](Raw<T> _0) { return &_0->_Max; }), });
	}
};

template<>
class ClassT<_Min_max_8i> : public Class
{
public:
	static Raw<ClassT> Get()
	{
		static ClassT s_Instance;
		return &s_Instance;
	}

protected:
	ClassT() : Class(Class::SetClass<_Min_max_8i>(this))
	{
		using T = _Min_max_8i;
		m_Fields.push_back(Field{.Name = "_Min", .Type = Class::Get<int64_t>()->getName(), .Access = ::New<FuncT<Raw<decltype(T::_Min)>,Raw<T> >>([](Raw<T> _0) { return &_0->_Min; }), });
		m_Fields.push_back(Field{.Name = "_Max", .Type = Class::Get<int64_t>()->getName(), .Access = ::New<FuncT<Raw<decltype(T::_Max)>,Raw<T> >>([](Raw<T> _0) { return &_0->_Max; }), });
	}
};

template<>
class ClassT<_Min_max_8u> : public Class
{
public:
	static Raw<ClassT> Get()
	{
		static ClassT s_Instance;
		return &s_Instance;
	}

protected:
	ClassT() : Class(Class::SetClass<_Min_max_8u>(this))
	{
		using T = _Min_max_8u;
		m_Fields.push_back(Field{.Name = "_Min", .Type = Class::Get<uint64_t>()->getName(), .Access = ::New<FuncT<Raw<decltype(T::_Min)>,Raw<T> >>([](Raw<T> _0) { return &_0->_Min; }), });
		m_Fields.push_back(Field{.Name = "_Max", .Type = Class::Get<uint64_t>()->getName(), .Access = ::New<FuncT<Raw<decltype(T::_Max)>,Raw<T> >>([](Raw<T> _0) { return &_0->_Max; }), });
	}
};

template<>
class ClassT<_Min_max_f> : public Class
{
public:
	static Raw<ClassT> Get()
	{
		static ClassT s_Instance;
		return &s_Instance;
	}

protected:
	ClassT() : Class(Class::SetClass<_Min_max_f>(this))
	{
		using T = _Min_max_f;
		m_Fields.push_back(Field{.Name = "_Min", .Type = Class::Get<float>()->getName(), .Access = ::New<FuncT<Raw<decltype(T::_Min)>,Raw<T> >>([](Raw<T> _0) { return &_0->_Min; }), });
		m_Fields.push_back(Field{.Name = "_Max", .Type = Class::Get<float>()->getName(), .Access = ::New<FuncT<Raw<decltype(T::_Max)>,Raw<T> >>([](Raw<T> _0) { return &_0->_Max; }), });
	}
};

template<>
class ClassT<_Min_max_d> : public Class
{
public:
	static Raw<ClassT> Get()
	{
		static ClassT s_Instance;
		return &s_Instance;
	}

protected:
	ClassT() : Class(Class::SetClass<_Min_max_d>(this))
	{
		using T = _Min_max_d;
		m_Fields.push_back(Field{.Name = "_Min", .Type = Class::Get<double>()->getName(), .Access = ::New<FuncT<Raw<decltype(T::_Min)>,Raw<T> >>([](Raw<T> _0) { return &_0->_Min; }), });
		m_Fields.push_back(Field{.Name = "_Max", .Type = Class::Get<double>()->getName(), .Access = ::New<FuncT<Raw<decltype(T::_Max)>,Raw<T> >>([](Raw<T> _0) { return &_0->_Max; }), });
	}
};

template<>
class ClassT<_Min_max_p> : public Class
{
public:
	static Raw<ClassT> Get()
	{
		static ClassT s_Instance;
		return &s_Instance;
	}

protected:
	ClassT() : Class(Class::SetClass<_Min_max_p>(this))
	{
		using T = _Min_max_p;
		m_Fields.push_back(Field{.Name = "_Min", .Type = Class::Get<void *>()->getName(), .Access = ::New<FuncT<Raw<decltype(T::_Min)>,Raw<T> >>([](Raw<T> _0) { return &_0->_Min; }), });
		m_Fields.push_back(Field{.Name = "_Max", .Type = Class::Get<void *>()->getName(), .Access = ::New<FuncT<Raw<decltype(T::_Max)>,Raw<T> >>([](Raw<T> _0) { return &_0->_Max; }), });
	}
};

template<>
class ClassT<std::ranges::_For_each_n_fn> : public Class
{
public:
	static Raw<ClassT> Get()
	{
		static ClassT s_Instance;
		return &s_Instance;
	}

protected:
	ClassT() : Class(Class::SetClass<std::ranges::_For_each_n_fn>(this))
	{
		using T = std::ranges::_For_each_n_fn;
	}
};

template<>
class ClassT<std::ranges::_Count_fn> : public Class
{
public:
	static Raw<ClassT> Get()
	{
		static ClassT s_Instance;
		return &s_Instance;
	}

protected:
	ClassT() : Class(Class::SetClass<std::ranges::_Count_fn>(this))
	{
		using T = std::ranges::_Count_fn;
	}
};

template<>
class ClassT<std::ranges::_Count_if_fn> : public Class
{
public:
	static Raw<ClassT> Get()
	{
		static ClassT s_Instance;
		return &s_Instance;
	}

protected:
	ClassT() : Class(Class::SetClass<std::ranges::_Count_if_fn>(this))
	{
		using T = std::ranges::_Count_if_fn;
	}
};

template<>
class ClassT<std::ranges::_Equal_fn> : public Class
{
public:
	static Raw<ClassT> Get()
	{
		static ClassT s_Instance;
		return &s_Instance;
	}

protected:
	ClassT() : Class(Class::SetClass<std::ranges::_Equal_fn>(this))
	{
		using T = std::ranges::_Equal_fn;
	}
};

template<>
class ClassT<std::ranges::_Is_permutation_fn> : public Class
{
public:
	static Raw<ClassT> Get()
	{
		static ClassT s_Instance;
		return &s_Instance;
	}

protected:
	ClassT() : Class(Class::SetClass<std::ranges::_Is_permutation_fn>(this))
	{
		using T = std::ranges::_Is_permutation_fn;
	}
};

template<>
class ClassT<std::ranges::_All_of_fn> : public Class
{
public:
	static Raw<ClassT> Get()
	{
		static ClassT s_Instance;
		return &s_Instance;
	}

protected:
	ClassT() : Class(Class::SetClass<std::ranges::_All_of_fn>(this))
	{
		using T = std::ranges::_All_of_fn;
	}
};

template<>
class ClassT<std::ranges::_Any_of_fn> : public Class
{
public:
	static Raw<ClassT> Get()
	{
		static ClassT s_Instance;
		return &s_Instance;
	}

protected:
	ClassT() : Class(Class::SetClass<std::ranges::_Any_of_fn>(this))
	{
		using T = std::ranges::_Any_of_fn;
	}
};

template<>
class ClassT<std::ranges::_None_of_fn> : public Class
{
public:
	static Raw<ClassT> Get()
	{
		static ClassT s_Instance;
		return &s_Instance;
	}

protected:
	ClassT() : Class(Class::SetClass<std::ranges::_None_of_fn>(this))
	{
		using T = std::ranges::_None_of_fn;
	}
};

template<>
class ClassT<std::ranges::_Copy_n_fn> : public Class
{
public:
	static Raw<ClassT> Get()
	{
		static ClassT s_Instance;
		return &s_Instance;
	}

protected:
	ClassT() : Class(Class::SetClass<std::ranges::_Copy_n_fn>(this))
	{
		using T = std::ranges::_Copy_n_fn;
	}
};

template<>
class ClassT<std::ranges::_Copy_backward_fn> : public Class
{
public:
	static Raw<ClassT> Get()
	{
		static ClassT s_Instance;
		return &s_Instance;
	}

protected:
	ClassT() : Class(Class::SetClass<std::ranges::_Copy_backward_fn>(this))
	{
		using T = std::ranges::_Copy_backward_fn;
	}
};

template<>
class ClassT<std::ranges::_Copy_if_fn> : public Class
{
public:
	static Raw<ClassT> Get()
	{
		static ClassT s_Instance;
		return &s_Instance;
	}

protected:
	ClassT() : Class(Class::SetClass<std::ranges::_Copy_if_fn>(this))
	{
		using T = std::ranges::_Copy_if_fn;
	}
};

template<>
class ClassT<std::ranges::_Move_fn> : public Class
{
public:
	static Raw<ClassT> Get()
	{
		static ClassT s_Instance;
		return &s_Instance;
	}

protected:
	ClassT() : Class(Class::SetClass<std::ranges::_Move_fn>(this))
	{
		using T = std::ranges::_Move_fn;
	}
};

template<>
class ClassT<std::ranges::_Move_backward_fn> : public Class
{
public:
	static Raw<ClassT> Get()
	{
		static ClassT s_Instance;
		return &s_Instance;
	}

protected:
	ClassT() : Class(Class::SetClass<std::ranges::_Move_backward_fn>(this))
	{
		using T = std::ranges::_Move_backward_fn;
	}
};

template<>
class ClassT<std::ranges::_Partition_copy_fn> : public Class
{
public:
	static Raw<ClassT> Get()
	{
		static ClassT s_Instance;
		return &s_Instance;
	}

protected:
	ClassT() : Class(Class::SetClass<std::ranges::_Partition_copy_fn>(this))
	{
		using T = std::ranges::_Partition_copy_fn;
	}
};

template<>
class ClassT<std::ranges::_Is_partitioned_fn> : public Class
{
public:
	static Raw<ClassT> Get()
	{
		static ClassT s_Instance;
		return &s_Instance;
	}

protected:
	ClassT() : Class(Class::SetClass<std::ranges::_Is_partitioned_fn>(this))
	{
		using T = std::ranges::_Is_partitioned_fn;
	}
};

template<>
class ClassT<std::ranges::_Partition_point_fn> : public Class
{
public:
	static Raw<ClassT> Get()
	{
		static ClassT s_Instance;
		return &s_Instance;
	}

protected:
	ClassT() : Class(Class::SetClass<std::ranges::_Partition_point_fn>(this))
	{
		using T = std::ranges::_Partition_point_fn;
	}
};

template<>
class ClassT<std::ranges::_Search_n_fn> : public Class
{
public:
	static Raw<ClassT> Get()
	{
		static ClassT s_Instance;
		return &s_Instance;
	}

protected:
	ClassT() : Class(Class::SetClass<std::ranges::_Search_n_fn>(this))
	{
		using T = std::ranges::_Search_n_fn;
	}
};

template<>
class ClassT<std::ranges::_Find_end_fn> : public Class
{
public:
	static Raw<ClassT> Get()
	{
		static ClassT s_Instance;
		return &s_Instance;
	}

protected:
	ClassT() : Class(Class::SetClass<std::ranges::_Find_end_fn>(this))
	{
		using T = std::ranges::_Find_end_fn;
	}
};

template<>
class ClassT<std::ranges::_Find_first_of_fn> : public Class
{
public:
	static Raw<ClassT> Get()
	{
		static ClassT s_Instance;
		return &s_Instance;
	}

protected:
	ClassT() : Class(Class::SetClass<std::ranges::_Find_first_of_fn>(this))
	{
		using T = std::ranges::_Find_first_of_fn;
	}
};

template<>
class ClassT<std::ranges::_Swap_ranges_fn> : public Class
{
public:
	static Raw<ClassT> Get()
	{
		static ClassT s_Instance;
		return &s_Instance;
	}

protected:
	ClassT() : Class(Class::SetClass<std::ranges::_Swap_ranges_fn>(this))
	{
		using T = std::ranges::_Swap_ranges_fn;
	}
};

template<>
class ClassT<std::ranges::_Transform_fn> : public Class
{
public:
	static Raw<ClassT> Get()
	{
		static ClassT s_Instance;
		return &s_Instance;
	}

protected:
	ClassT() : Class(Class::SetClass<std::ranges::_Transform_fn>(this))
	{
		using T = std::ranges::_Transform_fn;
	}
};

template<>
class ClassT<std::ranges::_Replace_fn> : public Class
{
public:
	static Raw<ClassT> Get()
	{
		static ClassT s_Instance;
		return &s_Instance;
	}

protected:
	ClassT() : Class(Class::SetClass<std::ranges::_Replace_fn>(this))
	{
		using T = std::ranges::_Replace_fn;
	}
};

template<>
class ClassT<std::ranges::_Replace_if_fn> : public Class
{
public:
	static Raw<ClassT> Get()
	{
		static ClassT s_Instance;
		return &s_Instance;
	}

protected:
	ClassT() : Class(Class::SetClass<std::ranges::_Replace_if_fn>(this))
	{
		using T = std::ranges::_Replace_if_fn;
	}
};

template<>
class ClassT<std::ranges::_Replace_copy_fn> : public Class
{
public:
	static Raw<ClassT> Get()
	{
		static ClassT s_Instance;
		return &s_Instance;
	}

protected:
	ClassT() : Class(Class::SetClass<std::ranges::_Replace_copy_fn>(this))
	{
		using T = std::ranges::_Replace_copy_fn;
	}
};

template<>
class ClassT<std::ranges::_Replace_copy_if_fn> : public Class
{
public:
	static Raw<ClassT> Get()
	{
		static ClassT s_Instance;
		return &s_Instance;
	}

protected:
	ClassT() : Class(Class::SetClass<std::ranges::_Replace_copy_if_fn>(this))
	{
		using T = std::ranges::_Replace_copy_if_fn;
	}
};

template<>
class ClassT<std::ranges::_Fill_fn> : public Class
{
public:
	static Raw<ClassT> Get()
	{
		static ClassT s_Instance;
		return &s_Instance;
	}

protected:
	ClassT() : Class(Class::SetClass<std::ranges::_Fill_fn>(this))
	{
		using T = std::ranges::_Fill_fn;
	}
};

template<>
class ClassT<std::ranges::_Generate_fn> : public Class
{
public:
	static Raw<ClassT> Get()
	{
		static ClassT s_Instance;
		return &s_Instance;
	}

protected:
	ClassT() : Class(Class::SetClass<std::ranges::_Generate_fn>(this))
	{
		using T = std::ranges::_Generate_fn;
	}
};

template<>
class ClassT<std::ranges::_Generate_n_fn> : public Class
{
public:
	static Raw<ClassT> Get()
	{
		static ClassT s_Instance;
		return &s_Instance;
	}

protected:
	ClassT() : Class(Class::SetClass<std::ranges::_Generate_n_fn>(this))
	{
		using T = std::ranges::_Generate_n_fn;
	}
};

template<>
class ClassT<std::ranges::_Remove_fn> : public Class
{
public:
	static Raw<ClassT> Get()
	{
		static ClassT s_Instance;
		return &s_Instance;
	}

protected:
	ClassT() : Class(Class::SetClass<std::ranges::_Remove_fn>(this))
	{
		using T = std::ranges::_Remove_fn;
	}
};

template<>
class ClassT<std::ranges::_Remove_if_fn> : public Class
{
public:
	static Raw<ClassT> Get()
	{
		static ClassT s_Instance;
		return &s_Instance;
	}

protected:
	ClassT() : Class(Class::SetClass<std::ranges::_Remove_if_fn>(this))
	{
		using T = std::ranges::_Remove_if_fn;
	}
};

template<>
class ClassT<std::ranges::_Remove_copy_fn> : public Class
{
public:
	static Raw<ClassT> Get()
	{
		static ClassT s_Instance;
		return &s_Instance;
	}

protected:
	ClassT() : Class(Class::SetClass<std::ranges::_Remove_copy_fn>(this))
	{
		using T = std::ranges::_Remove_copy_fn;
	}
};

template<>
class ClassT<std::ranges::_Remove_copy_if_fn> : public Class
{
public:
	static Raw<ClassT> Get()
	{
		static ClassT s_Instance;
		return &s_Instance;
	}

protected:
	ClassT() : Class(Class::SetClass<std::ranges::_Remove_copy_if_fn>(this))
	{
		using T = std::ranges::_Remove_copy_if_fn;
	}
};

template<>
class ClassT<std::ranges::_Unique_fn> : public Class
{
public:
	static Raw<ClassT> Get()
	{
		static ClassT s_Instance;
		return &s_Instance;
	}

protected:
	ClassT() : Class(Class::SetClass<std::ranges::_Unique_fn>(this))
	{
		using T = std::ranges::_Unique_fn;
	}
};

template<>
class ClassT<std::ranges::_Unique_copy_fn> : public Class
{
public:
	static Raw<ClassT> Get()
	{
		static ClassT s_Instance;
		return &s_Instance;
	}

protected:
	ClassT() : Class(Class::SetClass<std::ranges::_Unique_copy_fn>(this))
	{
		using T = std::ranges::_Unique_copy_fn;
	}
};

template<>
class ClassT<std::ranges::_Reverse_fn> : public Class
{
public:
	static Raw<ClassT> Get()
	{
		static ClassT s_Instance;
		return &s_Instance;
	}

protected:
	ClassT() : Class(Class::SetClass<std::ranges::_Reverse_fn>(this))
	{
		using T = std::ranges::_Reverse_fn;
	}
};

template<>
class ClassT<std::ranges::_Reverse_copy_fn> : public Class
{
public:
	static Raw<ClassT> Get()
	{
		static ClassT s_Instance;
		return &s_Instance;
	}

protected:
	ClassT() : Class(Class::SetClass<std::ranges::_Reverse_copy_fn>(this))
	{
		using T = std::ranges::_Reverse_copy_fn;
	}
};

template<>
class ClassT<std::ranges::_Rotate_fn> : public Class
{
public:
	static Raw<ClassT> Get()
	{
		static ClassT s_Instance;
		return &s_Instance;
	}

protected:
	ClassT() : Class(Class::SetClass<std::ranges::_Rotate_fn>(this))
	{
		using T = std::ranges::_Rotate_fn;
	}
};

template<>
class ClassT<std::ranges::_Rotate_copy_fn> : public Class
{
public:
	static Raw<ClassT> Get()
	{
		static ClassT s_Instance;
		return &s_Instance;
	}

protected:
	ClassT() : Class(Class::SetClass<std::ranges::_Rotate_copy_fn>(this))
	{
		using T = std::ranges::_Rotate_copy_fn;
	}
};

template<>
class ClassT<std::ranges::_Sample_fn> : public Class
{
public:
	static Raw<ClassT> Get()
	{
		static ClassT s_Instance;
		return &s_Instance;
	}

protected:
	ClassT() : Class(Class::SetClass<std::ranges::_Sample_fn>(this))
	{
		using T = std::ranges::_Sample_fn;
	}
};

template<>
class ClassT<std::ranges::_Shuffle_fn> : public Class
{
public:
	static Raw<ClassT> Get()
	{
		static ClassT s_Instance;
		return &s_Instance;
	}

protected:
	ClassT() : Class(Class::SetClass<std::ranges::_Shuffle_fn>(this))
	{
		using T = std::ranges::_Shuffle_fn;
	}
};

template<>
class ClassT<std::ranges::_Partition_fn> : public Class
{
public:
	static Raw<ClassT> Get()
	{
		static ClassT s_Instance;
		return &s_Instance;
	}

protected:
	ClassT() : Class(Class::SetClass<std::ranges::_Partition_fn>(this))
	{
		using T = std::ranges::_Partition_fn;
	}
};

template<>
class ClassT<std::ranges::_Stable_partition_fn> : public Class
{
public:
	static Raw<ClassT> Get()
	{
		static ClassT s_Instance;
		return &s_Instance;
	}

protected:
	ClassT() : Class(Class::SetClass<std::ranges::_Stable_partition_fn>(this))
	{
		using T = std::ranges::_Stable_partition_fn;
	}
};

template<>
class ClassT<std::ranges::_Push_heap_fn> : public Class
{
public:
	static Raw<ClassT> Get()
	{
		static ClassT s_Instance;
		return &s_Instance;
	}

protected:
	ClassT() : Class(Class::SetClass<std::ranges::_Push_heap_fn>(this))
	{
		using T = std::ranges::_Push_heap_fn;
	}
};

template<>
class ClassT<std::ranges::_Pop_heap_fn> : public Class
{
public:
	static Raw<ClassT> Get()
	{
		static ClassT s_Instance;
		return &s_Instance;
	}

protected:
	ClassT() : Class(Class::SetClass<std::ranges::_Pop_heap_fn>(this))
	{
		using T = std::ranges::_Pop_heap_fn;
	}
};

template<>
class ClassT<std::ranges::_Make_heap_fn> : public Class
{
public:
	static Raw<ClassT> Get()
	{
		static ClassT s_Instance;
		return &s_Instance;
	}

protected:
	ClassT() : Class(Class::SetClass<std::ranges::_Make_heap_fn>(this))
	{
		using T = std::ranges::_Make_heap_fn;
	}
};

template<>
class ClassT<std::ranges::_Is_heap_fn> : public Class
{
public:
	static Raw<ClassT> Get()
	{
		static ClassT s_Instance;
		return &s_Instance;
	}

protected:
	ClassT() : Class(Class::SetClass<std::ranges::_Is_heap_fn>(this))
	{
		using T = std::ranges::_Is_heap_fn;
	}
};

template<>
class ClassT<std::ranges::_Is_heap_until_fn> : public Class
{
public:
	static Raw<ClassT> Get()
	{
		static ClassT s_Instance;
		return &s_Instance;
	}

protected:
	ClassT() : Class(Class::SetClass<std::ranges::_Is_heap_until_fn>(this))
	{
		using T = std::ranges::_Is_heap_until_fn;
	}
};

template<>
class ClassT<std::ranges::_Sort_heap_fn> : public Class
{
public:
	static Raw<ClassT> Get()
	{
		static ClassT s_Instance;
		return &s_Instance;
	}

protected:
	ClassT() : Class(Class::SetClass<std::ranges::_Sort_heap_fn>(this))
	{
		using T = std::ranges::_Sort_heap_fn;
	}
};

template<>
class ClassT<std::ranges::_Lower_bound_fn> : public Class
{
public:
	static Raw<ClassT> Get()
	{
		static ClassT s_Instance;
		return &s_Instance;
	}

protected:
	ClassT() : Class(Class::SetClass<std::ranges::_Lower_bound_fn>(this))
	{
		using T = std::ranges::_Lower_bound_fn;
	}
};

template<>
class ClassT<std::ranges::_Upper_bound_fn> : public Class
{
public:
	static Raw<ClassT> Get()
	{
		static ClassT s_Instance;
		return &s_Instance;
	}

protected:
	ClassT() : Class(Class::SetClass<std::ranges::_Upper_bound_fn>(this))
	{
		using T = std::ranges::_Upper_bound_fn;
	}
};

template<>
class ClassT<std::ranges::_Equal_range_fn> : public Class
{
public:
	static Raw<ClassT> Get()
	{
		static ClassT s_Instance;
		return &s_Instance;
	}

protected:
	ClassT() : Class(Class::SetClass<std::ranges::_Equal_range_fn>(this))
	{
		using T = std::ranges::_Equal_range_fn;
	}
};

template<>
class ClassT<std::ranges::_Binary_search_fn> : public Class
{
public:
	static Raw<ClassT> Get()
	{
		static ClassT s_Instance;
		return &s_Instance;
	}

protected:
	ClassT() : Class(Class::SetClass<std::ranges::_Binary_search_fn>(this))
	{
		using T = std::ranges::_Binary_search_fn;
	}
};

template<>
class ClassT<std::ranges::_Merge_fn> : public Class
{
public:
	static Raw<ClassT> Get()
	{
		static ClassT s_Instance;
		return &s_Instance;
	}

protected:
	ClassT() : Class(Class::SetClass<std::ranges::_Merge_fn>(this))
	{
		using T = std::ranges::_Merge_fn;
	}
};

template<>
class ClassT<std::ranges::_Inplace_merge_fn> : public Class
{
public:
	static Raw<ClassT> Get()
	{
		static ClassT s_Instance;
		return &s_Instance;
	}

protected:
	ClassT() : Class(Class::SetClass<std::ranges::_Inplace_merge_fn>(this))
	{
		using T = std::ranges::_Inplace_merge_fn;
	}
};

template<>
class ClassT<std::ranges::_Sort_fn> : public Class
{
public:
	static Raw<ClassT> Get()
	{
		static ClassT s_Instance;
		return &s_Instance;
	}

protected:
	ClassT() : Class(Class::SetClass<std::ranges::_Sort_fn>(this))
	{
		using T = std::ranges::_Sort_fn;
	}
};

template<>
class ClassT<std::ranges::_Stable_sort_fn> : public Class
{
public:
	static Raw<ClassT> Get()
	{
		static ClassT s_Instance;
		return &s_Instance;
	}

protected:
	ClassT() : Class(Class::SetClass<std::ranges::_Stable_sort_fn>(this))
	{
		using T = std::ranges::_Stable_sort_fn;
	}
};

template<>
class ClassT<std::ranges::_Partial_sort_fn> : public Class
{
public:
	static Raw<ClassT> Get()
	{
		static ClassT s_Instance;
		return &s_Instance;
	}

protected:
	ClassT() : Class(Class::SetClass<std::ranges::_Partial_sort_fn>(this))
	{
		using T = std::ranges::_Partial_sort_fn;
	}
};

template<>
class ClassT<std::ranges::_Partial_sort_copy_fn> : public Class
{
public:
	static Raw<ClassT> Get()
	{
		static ClassT s_Instance;
		return &s_Instance;
	}

protected:
	ClassT() : Class(Class::SetClass<std::ranges::_Partial_sort_copy_fn>(this))
	{
		using T = std::ranges::_Partial_sort_copy_fn;
	}
};

template<>
class ClassT<std::ranges::_Nth_element_fn> : public Class
{
public:
	static Raw<ClassT> Get()
	{
		static ClassT s_Instance;
		return &s_Instance;
	}

protected:
	ClassT() : Class(Class::SetClass<std::ranges::_Nth_element_fn>(this))
	{
		using T = std::ranges::_Nth_element_fn;
	}
};

template<>
class ClassT<std::ranges::_Includes_fn> : public Class
{
public:
	static Raw<ClassT> Get()
	{
		static ClassT s_Instance;
		return &s_Instance;
	}

protected:
	ClassT() : Class(Class::SetClass<std::ranges::_Includes_fn>(this))
	{
		using T = std::ranges::_Includes_fn;
	}
};

template<>
class ClassT<std::ranges::_Set_union_fn> : public Class
{
public:
	static Raw<ClassT> Get()
	{
		static ClassT s_Instance;
		return &s_Instance;
	}

protected:
	ClassT() : Class(Class::SetClass<std::ranges::_Set_union_fn>(this))
	{
		using T = std::ranges::_Set_union_fn;
	}
};

template<>
class ClassT<std::ranges::_Set_intersection_fn> : public Class
{
public:
	static Raw<ClassT> Get()
	{
		static ClassT s_Instance;
		return &s_Instance;
	}

protected:
	ClassT() : Class(Class::SetClass<std::ranges::_Set_intersection_fn>(this))
	{
		using T = std::ranges::_Set_intersection_fn;
	}
};

template<>
class ClassT<std::ranges::_Set_difference_fn> : public Class
{
public:
	static Raw<ClassT> Get()
	{
		static ClassT s_Instance;
		return &s_Instance;
	}

protected:
	ClassT() : Class(Class::SetClass<std::ranges::_Set_difference_fn>(this))
	{
		using T = std::ranges::_Set_difference_fn;
	}
};

template<>
class ClassT<std::ranges::_Set_symmetric_difference_fn> : public Class
{
public:
	static Raw<ClassT> Get()
	{
		static ClassT s_Instance;
		return &s_Instance;
	}

protected:
	ClassT() : Class(Class::SetClass<std::ranges::_Set_symmetric_difference_fn>(this))
	{
		using T = std::ranges::_Set_symmetric_difference_fn;
	}
};

template<>
class ClassT<std::ranges::_Minmax_element_fn> : public Class
{
public:
	static Raw<ClassT> Get()
	{
		static ClassT s_Instance;
		return &s_Instance;
	}

protected:
	ClassT() : Class(Class::SetClass<std::ranges::_Minmax_element_fn>(this))
	{
		using T = std::ranges::_Minmax_element_fn;
	}
};

template<>
class ClassT<std::ranges::_Minmax_fn> : public Class
{
public:
	static Raw<ClassT> Get()
	{
		static ClassT s_Instance;
		return &s_Instance;
	}

protected:
	ClassT() : Class(Class::SetClass<std::ranges::_Minmax_fn>(this))
	{
		using T = std::ranges::_Minmax_fn;
	}
};

template<>
class ClassT<std::ranges::_Next_permutation_fn> : public Class
{
public:
	static Raw<ClassT> Get()
	{
		static ClassT s_Instance;
		return &s_Instance;
	}

protected:
	ClassT() : Class(Class::SetClass<std::ranges::_Next_permutation_fn>(this))
	{
		using T = std::ranges::_Next_permutation_fn;
	}
};

template<>
class ClassT<std::ranges::_Prev_permutation_fn> : public Class
{
public:
	static Raw<ClassT> Get()
	{
		static ClassT s_Instance;
		return &s_Instance;
	}

protected:
	ClassT() : Class(Class::SetClass<std::ranges::_Prev_permutation_fn>(this))
	{
		using T = std::ranges::_Prev_permutation_fn;
	}
};

template<>
class ClassT<std::ranges::_Is_sorted_fn> : public Class
{
public:
	static Raw<ClassT> Get()
	{
		static ClassT s_Instance;
		return &s_Instance;
	}

protected:
	ClassT() : Class(Class::SetClass<std::ranges::_Is_sorted_fn>(this))
	{
		using T = std::ranges::_Is_sorted_fn;
	}
};

template<>
class ClassT<std::ranges::_Is_sorted_until_fn> : public Class
{
public:
	static Raw<ClassT> Get()
	{
		static ClassT s_Instance;
		return &s_Instance;
	}

protected:
	ClassT() : Class(Class::SetClass<std::ranges::_Is_sorted_until_fn>(this))
	{
		using T = std::ranges::_Is_sorted_until_fn;
	}
};

template<>
class ClassT<std::ranges::_Clamp_fn> : public Class
{
public:
	static Raw<ClassT> Get()
	{
		static ClassT s_Instance;
		return &s_Instance;
	}

protected:
	ClassT() : Class(Class::SetClass<std::ranges::_Clamp_fn>(this))
	{
		using T = std::ranges::_Clamp_fn;
	}
};

template<>
class ClassT<std::ranges::_Lexicographical_compare_fn> : public Class
{
public:
	static Raw<ClassT> Get()
	{
		static ClassT s_Instance;
		return &s_Instance;
	}

protected:
	ClassT() : Class(Class::SetClass<std::ranges::_Lexicographical_compare_fn>(this))
	{
		using T = std::ranges::_Lexicographical_compare_fn;
	}
};

template<>
class ClassT<std::modulus<void>> : public Class
{
public:
	static Raw<ClassT> Get()
	{
		static ClassT s_Instance;
		return &s_Instance;
	}

protected:
	ClassT() : Class(Class::SetClass<std::modulus<void>>(this))
	{
		using T = std::modulus<void>;
	}
};

template<>
class ClassT<std::negate<void>> : public Class
{
public:
	static Raw<ClassT> Get()
	{
		static ClassT s_Instance;
		return &s_Instance;
	}

protected:
	ClassT() : Class(Class::SetClass<std::negate<void>>(this))
	{
		using T = std::negate<void>;
	}
};

template<>
class ClassT<std::logical_and<void>> : public Class
{
public:
	static Raw<ClassT> Get()
	{
		static ClassT s_Instance;
		return &s_Instance;
	}

protected:
	ClassT() : Class(Class::SetClass<std::logical_and<void>>(this))
	{
		using T = std::logical_and<void>;
	}
};

template<>
class ClassT<std::logical_or<void>> : public Class
{
public:
	static Raw<ClassT> Get()
	{
		static ClassT s_Instance;
		return &s_Instance;
	}

protected:
	ClassT() : Class(Class::SetClass<std::logical_or<void>>(this))
	{
		using T = std::logical_or<void>;
	}
};

template<>
class ClassT<std::logical_not<void>> : public Class
{
public:
	static Raw<ClassT> Get()
	{
		static ClassT s_Instance;
		return &s_Instance;
	}

protected:
	ClassT() : Class(Class::SetClass<std::logical_not<void>>(this))
	{
		using T = std::logical_not<void>;
	}
};

template<>
class ClassT<std::bit_and<void>> : public Class
{
public:
	static Raw<ClassT> Get()
	{
		static ClassT s_Instance;
		return &s_Instance;
	}

protected:
	ClassT() : Class(Class::SetClass<std::bit_and<void>>(this))
	{
		using T = std::bit_and<void>;
	}
};

template<>
class ClassT<std::bit_or<void>> : public Class
{
public:
	static Raw<ClassT> Get()
	{
		static ClassT s_Instance;
		return &s_Instance;
	}

protected:
	ClassT() : Class(Class::SetClass<std::bit_or<void>>(this))
	{
		using T = std::bit_or<void>;
	}
};

template<>
class ClassT<std::bit_xor<void>> : public Class
{
public:
	static Raw<ClassT> Get()
	{
		static ClassT s_Instance;
		return &s_Instance;
	}

protected:
	ClassT() : Class(Class::SetClass<std::bit_xor<void>>(this))
	{
		using T = std::bit_xor<void>;
	}
};

template<>
class ClassT<std::bit_not<void>> : public Class
{
public:
	static Raw<ClassT> Get()
	{
		static ClassT s_Instance;
		return &s_Instance;
	}

protected:
	ClassT() : Class(Class::SetClass<std::bit_not<void>>(this))
	{
		using T = std::bit_not<void>;
	}
};

template<>
class ClassT<std::_Not_fn_tag> : public Class
{
public:
	static Raw<ClassT> Get()
	{
		static ClassT s_Instance;
		return &s_Instance;
	}

protected:
	ClassT() : Class(Class::SetClass<std::_Not_fn_tag>(this))
	{
		using T = std::_Not_fn_tag;
	}
};

template<>
class ClassT<std::bad_function_call> : public Class
{
public:
	static Raw<ClassT> Get()
	{
		static ClassT s_Instance;
		return &s_Instance;
	}

protected:
	ClassT() : Class(Class::SetClass<std::bad_function_call>(this))
	{
		using T = std::bad_function_call;
		m_Bases.push_back(ClassT<std::exception>::Get());
		m_Methods.push_back(Method{.Name = "what", .Type = "", .Return = Class::Get<const char *>()->getName(), .Access = ::New<FuncT<const char *,Raw<T> >>([](Raw<T> _0)->const char * { return _0->what(); }), });
	}
};

template<>
class ClassT<std::_Unforced> : public Class
{
public:
	static Raw<ClassT> Get()
	{
		static ClassT s_Instance;
		return &s_Instance;
	}

protected:
	ClassT() : Class(Class::SetClass<std::_Unforced>(this))
	{
		using T = std::_Unforced;
	}
};

template<>
class ClassT<std::_Invoker_ret<_Unforced>> : public Class
{
public:
	static Raw<ClassT> Get()
	{
		static ClassT s_Instance;
		return &s_Instance;
	}

protected:
	ClassT() : Class(Class::SetClass<std::_Invoker_ret<_Unforced>>(this))
	{
		using T = std::_Invoker_ret<_Unforced>;
	}
};

template<>
class ClassT<std::ranges::not_equal_to> : public Class
{
public:
	static Raw<ClassT> Get()
	{
		static ClassT s_Instance;
		return &s_Instance;
	}

protected:
	ClassT() : Class(Class::SetClass<std::ranges::not_equal_to>(this))
	{
		using T = std::ranges::not_equal_to;
	}
};

template<>
class ClassT<std::ranges::greater_equal> : public Class
{
public:
	static Raw<ClassT> Get()
	{
		static ClassT s_Instance;
		return &s_Instance;
	}

protected:
	ClassT() : Class(Class::SetClass<std::ranges::greater_equal>(this))
	{
		using T = std::ranges::greater_equal;
	}
};

template<>
class ClassT<std::ranges::less_equal> : public Class
{
public:
	static Raw<ClassT> Get()
	{
		static ClassT s_Instance;
		return &s_Instance;
	}

protected:
	ClassT() : Class(Class::SetClass<std::ranges::less_equal>(this))
	{
		using T = std::ranges::less_equal;
	}
};
#include "../OpenCX/Recycle.h"

template<>
class ClassT<RecycleBin> : public Class
{
public:
	static Raw<ClassT> Get()
	{
		static ClassT s_Instance;
		return &s_Instance;
	}

protected:
	ClassT() : Class(Class::SetClass<RecycleBin>(this))
	{
		using T = RecycleBin;
		m_Fields.push_back(Field{.Name = "Value", .Type = Class::Get<Ref<Object>>()->getName(), .Access = ::New<FuncT<Raw<decltype(T::Value)>,Raw<T> >>([](Raw<T> _0) { return &_0->Value; }), });
		m_Fields.push_back(Field{.Name = "Flags", .Type = Class::Get<uint32_t>()->getName(), .Access = ::New<FuncT<Raw<decltype(T::Flags)>,Raw<T> >>([](Raw<T> _0) { return &_0->Flags; }), });
	}
};

template<>
class ClassT<Recycle> : public Class
{
public:
	static Raw<ClassT> Get()
	{
		static ClassT s_Instance;
		return &s_Instance;
	}

protected:
	ClassT() : Class(Class::SetClass<Recycle>(this))
	{
		using T = Recycle;
		m_Methods.push_back(Method{.Name = "mark", .Type = "|"+Class::Get<float>()->getName()+"", .Return = Class::Get<void>()->getName(), .Access = ::New<FuncT<void,Raw<T>,float >>([](Raw<T> _0,float _1)->void { return _0->mark(_1); }), });
		m_Methods.push_back(Method{.Name = "sweep", .Type = "|"+Class::Get<float>()->getName()+"", .Return = Class::Get<void>()->getName(), .Access = ::New<FuncT<void,Raw<T>,float >>([](Raw<T> _0,float _1)->void { return _0->sweep(_1); }), });
		m_Methods.push_back(Method{.Name = "clear", .Type = "", .Return = Class::Get<void>()->getName(), .Access = ::New<FuncT<void,Raw<T> >>([](Raw<T> _0)->void { return _0->clear(); }), });
		m_SMethods.push_back(Method{.Name = "Get", .Type = "", .Return = Class::Get<Recycle &>()->getName(), .Access = ::New<FuncT<Recycle & >>([]()->Recycle & { return T::Get(); }), });
	}
};
#include "../OpenCX/Class.h"

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
	ClassT() : Class(Class::SetClass<Func>(this))
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
	ClassT() : Class(Class::SetClass<Field>(this))
	{
		using T = Field;
		m_Fields.push_back(Field{.Name = "Name", .Type = Class::Get<String>()->getName(), .Access = ::New<FuncT<Raw<decltype(T::Name)>,Raw<T> >>([](Raw<T> _0) { return &_0->Name; }), });
		m_Fields.push_back(Field{.Name = "Type", .Type = Class::Get<String>()->getName(), .Access = ::New<FuncT<Raw<decltype(T::Type)>,Raw<T> >>([](Raw<T> _0) { return &_0->Type; }), });
		m_Fields.push_back(Field{.Name = "Access", .Type = Class::Get<Ref<Func>>()->getName(), .Access = ::New<FuncT<Raw<decltype(T::Access)>,Raw<T> >>([](Raw<T> _0) { return &_0->Access; }), });
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
	ClassT() : Class(Class::SetClass<Method>(this))
	{
		using T = Method;
		m_Fields.push_back(Field{.Name = "Name", .Type = Class::Get<String>()->getName(), .Access = ::New<FuncT<Raw<decltype(T::Name)>,Raw<T> >>([](Raw<T> _0) { return &_0->Name; }), });
		m_Fields.push_back(Field{.Name = "Type", .Type = Class::Get<String>()->getName(), .Access = ::New<FuncT<Raw<decltype(T::Type)>,Raw<T> >>([](Raw<T> _0) { return &_0->Type; }), });
		m_Fields.push_back(Field{.Name = "Return", .Type = Class::Get<String>()->getName(), .Access = ::New<FuncT<Raw<decltype(T::Return)>,Raw<T> >>([](Raw<T> _0) { return &_0->Return; }), });
		m_Fields.push_back(Field{.Name = "Access", .Type = Class::Get<Ref<Func>>()->getName(), .Access = ::New<FuncT<Raw<decltype(T::Access)>,Raw<T> >>([](Raw<T> _0) { return &_0->Access; }), });
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
	ClassT() : Class(Class::SetClass<Class>(this))
	{
		using T = Class;
		m_Methods.push_back(Method{.Name = "getName", .Type = "", .Return = Class::Get<std::basic_string<char>>()->getName(), .Access = ::New<FuncT<std::basic_string<char>,Raw<T> >>([](Raw<T> _0)->std::basic_string<char> { return _0->getName(); }), });
		m_Methods.push_back(Method{.Name = "getBases", .Type = "", .Return = Class::Get<std::span<Class *const>>()->getName(), .Access = ::New<FuncT<std::span<Class *const>,Raw<T> >>([](Raw<T> _0)->std::span<Class *const> { return _0->getBases(); }), });
		m_Methods.push_back(Method{.Name = "getFields", .Type = "", .Return = Class::Get<std::span<const Field>>()->getName(), .Access = ::New<FuncT<std::span<const Field>,Raw<T> >>([](Raw<T> _0)->std::span<const Field> { return _0->getFields(); }), });
		m_Methods.push_back(Method{.Name = "getMethods", .Type = "", .Return = Class::Get<std::span<const Method>>()->getName(), .Access = ::New<FuncT<std::span<const Method>,Raw<T> >>([](Raw<T> _0)->std::span<const Method> { return _0->getMethods(); }), });
		m_Methods.push_back(Method{.Name = "getField", .Type = "|"+Class::Get<const String &>()->getName()+"|"+Class::Get<Field &>()->getName()+"", .Return = Class::Get<bool>()->getName(), .Access = ::New<FuncT<bool,Raw<T>,const String &,Field & >>([](Raw<T> _0,const String & _1,Field & _2)->bool { return _0->getField(_1,_2); }), });
		m_Methods.push_back(Method{.Name = "getMethod", .Type = "|"+Class::Get<const String &>()->getName()+"|"+Class::Get<Method &>()->getName()+"", .Return = Class::Get<bool>()->getName(), .Access = ::New<FuncT<bool,Raw<T>,const String &,Method & >>([](Raw<T> _0,const String & _1,Method & _2)->bool { return _0->getMethod(_1,_2); }), });
		m_Methods.push_back(Method{.Name = "getSFields", .Type = "", .Return = Class::Get<std::span<const Field>>()->getName(), .Access = ::New<FuncT<std::span<const Field>,Raw<T> >>([](Raw<T> _0)->std::span<const Field> { return _0->getSFields(); }), });
		m_Methods.push_back(Method{.Name = "getSMethods", .Type = "", .Return = Class::Get<std::span<const Method>>()->getName(), .Access = ::New<FuncT<std::span<const Method>,Raw<T> >>([](Raw<T> _0)->std::span<const Method> { return _0->getSMethods(); }), });
		m_Methods.push_back(Method{.Name = "getSField", .Type = "|"+Class::Get<const String &>()->getName()+"|"+Class::Get<Field &>()->getName()+"", .Return = Class::Get<bool>()->getName(), .Access = ::New<FuncT<bool,Raw<T>,const String &,Field & >>([](Raw<T> _0,const String & _1,Field & _2)->bool { return _0->getSField(_1,_2); }), });
		m_Methods.push_back(Method{.Name = "getSMethod", .Type = "|"+Class::Get<const String &>()->getName()+"|"+Class::Get<Method &>()->getName()+"", .Return = Class::Get<bool>()->getName(), .Access = ::New<FuncT<bool,Raw<T>,const String &,Method & >>([](Raw<T> _0,const String & _1,Method & _2)->bool { return _0->getSMethod(_1,_2); }), });
	}
};
#include "../OpenCX/Object.h"

template<>
class ClassT<Object> : public Class
{
public:
	static Raw<ClassT> Get()
	{
		static ClassT s_Instance;
		return &s_Instance;
	}

protected:
	ClassT() : Class(Class::SetClass<Object>(this))
	{
		using T = Object;
		m_Methods.push_back(Method{.Name = "getClass", .Type = "", .Return = Class::Get<>()->getName(), .Access = ::New<FuncT<,Raw<T> >>([](Raw<T> _0)-> { return _0->getClass(); }), });
	}
};
#include "MyObject.h"

template<>
class ClassT<abc::foo> : public Class
{
public:
	static Raw<ClassT> Get()
	{
		static ClassT s_Instance;
		return &s_Instance;
	}

protected:
	ClassT() : Class(Class::SetClass<abc::foo>(this))
	{
		using T = abc::foo;
		m_Fields.push_back(Field{.Name = "bar", .Type = Class::Get<int>()->getName(), .Access = ::New<FuncT<Raw<decltype(T::bar)>,Raw<T> >>([](Raw<T> _0) { return &_0->bar; }), });
		m_Fields.push_back(Field{.Name = "bar_pointer", .Type = Class::Get<int *>()->getName(), .Access = ::New<FuncT<Raw<decltype(T::bar_pointer)>,Raw<T> >>([](Raw<T> _0) { return &_0->bar_pointer; }), });
	}
};

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
	ClassT() : Class(Class::SetClass<MyBase>(this))
	{
		using T = MyBase;
		m_SFields.push_back(Field{.Name = "Global1", .Type = Class::Get<int>()->getName(), .Access = ::New<FuncT<Raw<decltype(T::Global1)>>>([]() { return &T::Global1; }), });
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
	ClassT() : Class(Class::SetClass<MyObject::InnerObject>(this))
	{
		using T = MyObject::InnerObject;
		m_Fields.push_back(Field{.Name = "SubName", .Type = Class::Get<int>()->getName(), .Access = ::New<FuncT<Raw<decltype(T::SubName)>,Raw<T> >>([](Raw<T> _0) { return &_0->SubName; }), });
		m_SFields.push_back(Field{.Name = "SSubName", .Type = Class::Get<const int>()->getName(), .Access = ::New<FuncT<Raw<decltype(T::SSubName)>>>([]() { return &T::SSubName; }), });
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
	ClassT() : Class(Class::SetClass<MyObject>(this))
	{
		using T = MyObject;
		m_Bases.push_back(ClassT<ObjectT<MyObject>>::Get());
		m_Bases.push_back(ClassT<MyBase>::Get());
		m_Bases.push_back(ClassT<abc::foo>::Get());
		m_Fields.push_back(Field{.Name = "Name", .Type = Class::Get<String>()->getName(), .Access = ::New<FuncT<Raw<decltype(T::Name)>,Raw<T> >>([](Raw<T> _0) { return &_0->Name; }), });
		m_Fields.push_back(Field{.Name = "Name2", .Type = Class::Get<String>()->getName(), .Access = ::New<FuncT<Raw<decltype(T::Name2)>,Raw<T> >>([](Raw<T> _0) { return &_0->Name2; }), });
		m_SFields.push_back(Field{.Name = "SName", .Type = Class::Get<String>()->getName(), .Access = ::New<FuncT<Raw<decltype(T::SName)>>>([]() { return &T::SName; }), });
		m_SFields.push_back(Field{.Name = "SName2", .Type = Class::Get<String>()->getName(), .Access = ::New<FuncT<Raw<decltype(T::SName2)>>>([]() { return &T::SName2; }), });
		m_Methods.push_back(Method{.Name = "VFoo", .Type = "", .Return = Class::Get<void>()->getName(), .Access = ::New<FuncT<void,Raw<T> >>([](Raw<T> _0)->void { return _0->VFoo(); }), });
		m_Methods.push_back(Method{.Name = "VFoo", .Type = "|"+Class::Get<int>()->getName()+"", .Return = Class::Get<void>()->getName(), .Access = ::New<FuncT<void,Raw<T>,int >>([](Raw<T> _0,int _1)->void { return _0->VFoo(_1); }), });
		m_Methods.push_back(Method{.Name = "Foo", .Type = "", .Return = Class::Get<void>()->getName(), .Access = ::New<FuncT<void,Raw<T> >>([](Raw<T> _0)->void { return _0->Foo(); }), });
		m_Methods.push_back(Method{.Name = "Foo", .Type = "|"+Class::Get<const String &>()->getName()+"", .Return = Class::Get<void>()->getName(), .Access = ::New<FuncT<void,Raw<T>,const String & >>([](Raw<T> _0,const String & _1)->void { return _0->Foo(_1); }), });
		m_Methods.push_back(Method{.Name = "Foo", .Type = "|"+Class::Get<const String &>()->getName()+"|"+Class::Get<float>()->getName()+"", .Return = Class::Get<void>()->getName(), .Access = ::New<FuncT<void,Raw<T>,const String &,float >>([](Raw<T> _0,const String & _1,float _2)->void { return _0->Foo(_1,_2); }), });
		m_SMethods.push_back(Method{.Name = "SFoo", .Type = "", .Return = Class::Get<void>()->getName(), .Access = ::New<FuncT<void >>([]()->void { return T::SFoo(); }), });
		m_SMethods.push_back(Method{.Name = "SFoo", .Type = "|"+Class::Get<const String &>()->getName()+"", .Return = Class::Get<void>()->getName(), .Access = ::New<FuncT<void,const String & >>([](const String & _1)->void { return T::SFoo(_1); }), });
		m_SMethods.push_back(Method{.Name = "SFoo", .Type = "|"+Class::Get<const String &>()->getName()+"|"+Class::Get<float>()->getName()+"", .Return = Class::Get<void>()->getName(), .Access = ::New<FuncT<void,const String &,float >>([](const String & _1,float _2)->void { return T::SFoo(_1,_2); }), });
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
	ClassT() : Class(Class::SetClass<MySubObject>(this))
	{
		using T = MySubObject;
		m_Bases.push_back(ClassT<MyObject>::Get());
		m_Methods.push_back(Method{.Name = "VFoo", .Type = "", .Return = Class::Get<void>()->getName(), .Access = ::New<FuncT<void,Raw<T> >>([](Raw<T> _0)->void { return _0->VFoo(); }), });
		m_Methods.push_back(Method{.Name = "VFoo", .Type = "|"+Class::Get<int>()->getName()+"", .Return = Class::Get<void>()->getName(), .Access = ::New<FuncT<void,Raw<T>,int >>([](Raw<T> _0,int _1)->void { return _0->VFoo(_1); }), });
	}
};
