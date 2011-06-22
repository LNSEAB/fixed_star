#ifndef FIXED_STAR_DINPUT_HPP_
#define FIXED_STAR_DINPUT_HPP_

#include "com.hpp"

#include <dinput.h>

#ifndef MSC_VER

class DirectInput { };
class DirectInputDevice { };
class DirectInput8 { };
class DirectInputDevice8 { };

namespace fixed_star {
	
	FIXED_STAR_UUIDOF_SPEC_CLSID( DirectInput )
	FIXED_STAR_UUIDOF_SPEC_CLSID( DirectInputDevice )
	FIXED_STAR_UUIDOF_SPEC_CLSID( DirectInput8 )
	FIXED_STAR_UUIDOF_SPEC_CLSID( DirectInputDevice8 )
	FIXED_STAR_UUIDOF_SPEC_IID( IDirectInputA )
	FIXED_STAR_UUIDOF_SPEC_IID( IDirectInputW )
	FIXED_STAR_UUIDOF_SPEC_IID( IDirectInput2A )
	FIXED_STAR_UUIDOF_SPEC_IID( IDirectInput2W )
	FIXED_STAR_UUIDOF_SPEC_IID( IDirectInput7A )
	FIXED_STAR_UUIDOF_SPEC_IID( IDirectInput7W )
	FIXED_STAR_UUIDOF_SPEC_IID( IDirectInput8A )
	FIXED_STAR_UUIDOF_SPEC_IID( IDirectInput8W )
	FIXED_STAR_UUIDOF_SPEC_IID( IDirectInputDeviceA )
	FIXED_STAR_UUIDOF_SPEC_IID( IDirectInputDeviceW )
	FIXED_STAR_UUIDOF_SPEC_IID( IDirectInputDevice2A )
	FIXED_STAR_UUIDOF_SPEC_IID( IDirectInputDevice2W )
	FIXED_STAR_UUIDOF_SPEC_IID( IDirectInputDevice7A )
	FIXED_STAR_UUIDOF_SPEC_IID( IDirectInputDevice7W )
	FIXED_STAR_UUIDOF_SPEC_IID( IDirectInputDevice8A )
	FIXED_STAR_UUIDOF_SPEC_IID( IDirectInputDevice8W )
	FIXED_STAR_UUIDOF_SPEC_IID( IDirectInputEffect )
	
} // namespace fixed_star

#endif

#endif // FIXED_STAR_DINPUT_HPP_
