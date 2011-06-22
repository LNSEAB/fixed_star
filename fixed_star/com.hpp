#ifndef FIXED_STAR_COM_HPP_
#define FIXED_STAR_COM_HPP_

#ifndef MSC_VER

#include <unknwn.h>
#include <specstrings.h>

namespace fixed_star {

	template <class Interface>
	inline GUID uuidof_impl();
	
	inline GUID string_to_iid(const wchar_t *str)
	{
		GUID id;
		::IIDFromString( const_cast<WCHAR *>( str ), &id );
		return id;
	}
	
} // namespace fixed_star

#define FIXED_STAR_UUIDOF_SPEC_IID(T)				\
	template <>										\
	inline GUID uuidof_impl<T>()					\
	{ return IID_##T; }

#define FIXED_STAR_UUIDOF_SPEC_CLSID(T)			\
	template <>									\
	inline GUID uuidof_impl<T>()				\
	{ return CLSID_##T; }

#define FIXED_STAR_UUIDOF_SPEC_STRING(T, str)						\
	template <>														\
	inline GUID uuidof_impl<T>()									\
	{																\
		static const GUID id = fixed_star::string_to_iid( L##str );	\
		return id;													\
	}

#define FIXED_STAR_UUIDOF_SPEC_DECL(T)			\
	template <>									\
	inline GUID uuidof_impl<T>();

#define __uuidof(T) (fixed_star::uuidof_impl<T>())

#endif

#endif // FIXED_STAR_COM_HPP_
