#ifndef FIXED_STAR_COM_HPP_
#define FIXED_STAR_COM_HPP_

#ifndef MSC_VER

#include <unknwn.h>
#include <specstrings.h>
#include <rpcndr.h>

namespace fixed_star {

	template <class Interface>
	inline const GUID& uuidof_impl();
	
} // namespace fixed_star

#define FIXED_STAR_UUIDOF_SPEC_IID(T)			\
	template <>									\
	inline const GUID& uuidof_impl<T>()			\
	{ return IID_##T; }

#define __uuidof(T) (fixed_star::uuidof_impl<T>())

#endif

#endif // FIXED_STAR_COM_HPP_
