#ifndef FIXED_STAR_DWRITE_HPP_
#define FIXED_STAR_DWRITE_HPP_

#ifndef MSC_VER

#define DWRITE_DECLARE_INTERFACE(iid)
#define DECLSPEC_NOVTABLE

#define __out_ecount_z(x)
#define __out_z
#define __in_z
#define __in_z_opt
#define __notnull
#define __nullterminated
#define __maybenull

#endif

#include "com.hpp"
#include <dwrite.h>

#ifndef MSC_VER

namespace fixed_star {

	FIXED_STAR_UUIDOF_SPEC_STRING( IDWriteFactory, "{b859ee5a-d838-4b5b-a2e8-1adc7d93db48}" )
	
} // namespace fixed_star

#endif

#endif // FIXED_STAR_DWRITE_HPP_
