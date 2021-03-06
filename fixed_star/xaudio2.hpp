#ifndef FIXED_STAR_XAUDIO2_HPP_
#define FIXED_STAR_XAUDIO2_HPP_

#include "com.hpp"

#ifndef MSC_VER

#define DEFINE_CLSID(className, l, w1, w2, b1, b2, b3, b4, b5, b6, b7, b8) \
	DEFINE_GUID(CLSID_##className, 0x##l, 0x##w1, 0x##w2, 0x##b1, 0x##b2, 0x##b3, 0x##b4, 0x##b5, 0x##b6, 0x##b7, 0x##b8)

#define DEFINE_IID(interfaceName, l, w1, w2, b1, b2, b3, b4, b5, b6, b7, b8) \
	DEFINE_GUID(IID_##interfaceName, 0x##l, 0x##w1, 0x##w2, 0x##b1, 0x##b2, 0x##b3, 0x##b4, 0x##b5, 0x##b6, 0x##b7, 0x##b8)

class XAudio2;
class XAudio2_Debug;
class IXAudio2;

namespace fixed_star {

	FIXED_STAR_UUIDOF_SPEC_DECL( XAudio2 )
	FIXED_STAR_UUIDOF_SPEC_DECL( XAudio2_Debug )
	FIXED_STAR_UUIDOF_SPEC_DECL( IXAudio2 )
	
}

#define _COMDECL_H_
#define __reserved

#endif

#include <xaudio2.h>

#ifndef MSC_VER

namespace fixed_star {

	FIXED_STAR_UUIDOF_SPEC_CLSID( XAudio2 )
	FIXED_STAR_UUIDOF_SPEC_CLSID( XAudio2_Debug )
	FIXED_STAR_UUIDOF_SPEC_IID( IXAudio2 )
	
} // namespace fixed_star

#endif

#endif // FIXED_STAR_XAUDIO2_HPP_
