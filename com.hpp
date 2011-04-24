#ifndef FIXED_STAR_COM_HPP_
#define FIXED_STAR_COM_HPP_

#ifndef MSC_VER

#include <unknwn.h>
#include <cassert>

namespace fixed_star {

	template <class Interface>
	inline const GUID& uuidof_impl()
	{
		assert( !"[uuidof_impl] undefined Intarface" );
		static GUID dummy = { 0 };
		return dummy;
	}
	
} // namespace fixed_star

#define FIXED_STAR_UUIDOF_SPEC_IID(T)			\
	template <>									\
	inline const GUID& uuidof_impl<T>()			\
	{ return IID_##T; }

#define __uuidof(T) fixed_star::uuidof_impl<T>()

#endif

#endif // FIXED_STAR_COM_HPP_
