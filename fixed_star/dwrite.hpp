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
	
	FIXED_STAR_UUIDOF_SPEC_STRING( IDWriteFontFileLoader, "{727cad4e-d6af-4c9e-8a08-d695b11caa49}" )
	FIXED_STAR_UUIDOF_SPEC_STRING( IDWriteLocalFontFileLoader, "{b2d9f3ec-c9fe-4a11-a2ec-d86208f7c0a2}" )
	FIXED_STAR_UUIDOF_SPEC_STRING( IDWriteFontFileStream, "{6d4865fe-0ab8-4d91-8f62-5dd6be34a3e0}" )
	FIXED_STAR_UUIDOF_SPEC_STRING( IDWriteFontFile, "{739d886a-cef5-47dc-8769-1a8b41bebbb0}" )
	FIXED_STAR_UUIDOF_SPEC_STRING( IDWriteRenderingParams, "{2f0da53a-2add-47cd-82ee-d9ec34688e75}" )
	FIXED_STAR_UUIDOF_SPEC_STRING( IDWriteFontFace, "{5f49804d-7024-4d43-bfa9-d25984f53849}" )
	FIXED_STAR_UUIDOF_SPEC_STRING( IDWriteFontCollectionLoader, "{cca920e4-52f0-492b-bfa8-29c72ee0a468}" )
	FIXED_STAR_UUIDOF_SPEC_STRING( IDWriteFontFileEnumerator, "{72755049-5ff7-435d-8348-4be97cfa6c7c}" )
	FIXED_STAR_UUIDOF_SPEC_STRING( IDWriteLocalizedStrings, "{08256209-099a-4b34-b86d-c22b110e7771}" )
	FIXED_STAR_UUIDOF_SPEC_STRING( IDWriteFontCollection, "{a84cee02-3eea-4eee-a827-87c1a02a0fcc}" )
	FIXED_STAR_UUIDOF_SPEC_STRING( IDWriteFontList, "{1a0d8438-1d97-4ec1-aef9-a2fb86ed6acb}" )
	FIXED_STAR_UUIDOF_SPEC_STRING( IDWriteFontFamily, "{da20d8ef-812a-4c43-9802-62ec4abd7add}" )
	FIXED_STAR_UUIDOF_SPEC_STRING( IDWriteFont, "{acd16696-8c14-4f5d-877e-fe3fc1d32737}" )
	FIXED_STAR_UUIDOF_SPEC_STRING( IDWriteTextFormat, "{9c906818-31d7-4fd3-a151-7c5e225db55a}" )
	FIXED_STAR_UUIDOF_SPEC_STRING( IDWriteTypography, "{55f1112b-1dc2-4b3c-9541-f46894ed85b6}" )
	FIXED_STAR_UUIDOF_SPEC_STRING( IDWriteTextAnalyzer, "{b7e6163e-7f46-43b4-84b3-e4e6249c365d}" )
	FIXED_STAR_UUIDOF_SPEC_STRING( IDWriteInlineObject, "{8339FDE3-106F-47ab-8373-1C6295EB10B3}" )
	FIXED_STAR_UUIDOF_SPEC_STRING( IDWritePixelSnapping, "{eaf3a2da-ecf4-4d24-b644-b34f6842024b}" )
	FIXED_STAR_UUIDOF_SPEC_STRING( IDWriteTextRenderer, "{ef8a8135-5cc6-45fe-8825-c5a0724eb819}" )
	FIXED_STAR_UUIDOF_SPEC_STRING( IDWriteTextLayout, "{53737037-6d14-410b-9bfe-0b182bb70961}" )
	FIXED_STAR_UUIDOF_SPEC_STRING( IDWriteBitmapRenderTarget, "{5e5a32a3-8dff-4773-9ff6-0696eab77267}" )
	FIXED_STAR_UUIDOF_SPEC_STRING( IDWriteGdiInterop, "{1edd9491-9853-4299-898f-6432983b6f3a}" )
	FIXED_STAR_UUIDOF_SPEC_STRING( IDWriteGlyphRunAnalysis, "{7d97dbf7-e085-42d4-81e3-6a883bded118}" )
	FIXED_STAR_UUIDOF_SPEC_STRING( IDWriteFactory, "{b859ee5a-d838-4b5b-a2e8-1adc7d93db48}" )
	
} // namespace fixed_star

#endif

#endif // FIXED_STAR_DWRITE_HPP_
