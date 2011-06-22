#ifndef FIXED_STAR_DSOUND_HPP_
#define FIXED_STAR_DSOUND_HPP_

#include "com.hpp"

#ifndef MSC_VER
#define __null
#endif

#include <dsound.h>

#ifndef MSC_VER

class DirectSound { };
class DirectSound8 { };
class DirectSoundCapture { };
class DirectSoundCapture8 { };
class DirectSoundFullDuplex { };

namespace fixed_star {
	
	FIXED_STAR_UUIDOF_SPEC_CLSID( DirectSound )
	FIXED_STAR_UUIDOF_SPEC_CLSID( DirectSound8 )
	FIXED_STAR_UUIDOF_SPEC_CLSID( DirectSoundCapture )
	FIXED_STAR_UUIDOF_SPEC_CLSID( DirectSoundCapture8 )
	FIXED_STAR_UUIDOF_SPEC_CLSID( DirectSoundFullDuplex )
	FIXED_STAR_UUIDOF_SPEC_IID( IReferenceClock )
	FIXED_STAR_UUIDOF_SPEC_IID( IDirectSound )
	FIXED_STAR_UUIDOF_SPEC_IID( IDirectSound8 )
	FIXED_STAR_UUIDOF_SPEC_IID( IDirectSoundBuffer )
	FIXED_STAR_UUIDOF_SPEC_IID( IDirectSoundBuffer8 )
	FIXED_STAR_UUIDOF_SPEC_IID( IDirectSound3DListener )
	FIXED_STAR_UUIDOF_SPEC_IID( IDirectSound3DBuffer )
	FIXED_STAR_UUIDOF_SPEC_IID( IDirectSoundCapture )
	FIXED_STAR_UUIDOF_SPEC_IID( IDirectSoundCaptureBuffer )
	FIXED_STAR_UUIDOF_SPEC_IID( IDirectSoundCaptureBuffer8 )
	FIXED_STAR_UUIDOF_SPEC_IID( IDirectSoundNotify )
	FIXED_STAR_UUIDOF_SPEC_IID( IKsPropertySet )
	FIXED_STAR_UUIDOF_SPEC_IID( IDirectSoundFXGargle )
	FIXED_STAR_UUIDOF_SPEC_IID( IDirectSoundFXChorus )
	FIXED_STAR_UUIDOF_SPEC_IID( IDirectSoundFXFlanger )
	FIXED_STAR_UUIDOF_SPEC_IID( IDirectSoundFXEcho )
	FIXED_STAR_UUIDOF_SPEC_IID( IDirectSoundFXDistortion )
	FIXED_STAR_UUIDOF_SPEC_IID( IDirectSoundFXCompressor )
	FIXED_STAR_UUIDOF_SPEC_IID( IDirectSoundFXParamEq )
	FIXED_STAR_UUIDOF_SPEC_IID( IDirectSoundFXI3DL2Reverb )
	FIXED_STAR_UUIDOF_SPEC_IID( IDirectSoundFXWavesReverb )
	FIXED_STAR_UUIDOF_SPEC_IID( IDirectSoundCaptureFXAec )
	FIXED_STAR_UUIDOF_SPEC_IID( IDirectSoundCaptureFXNoiseSuppress )
	FIXED_STAR_UUIDOF_SPEC_IID( IDirectSoundFullDuplex )
	
} // namespace fixed_star

#endif

#endif // FIXED_STAR_DSOUND_HPP_
