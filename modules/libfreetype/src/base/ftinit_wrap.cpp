#include "core/pch.h"

#if defined(USE_FREETYPE) && defined(FT_INTERNAL_FREETYPE)

extern "C" {
#include "ftinit.c"
}

#endif // USE_FREETYPE && FT_INTERNAL_FREETYPE
