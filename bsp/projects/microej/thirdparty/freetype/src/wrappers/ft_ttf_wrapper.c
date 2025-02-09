/*
 * C
 *
 * Copyright 2022 MicroEJ Corp. This file has been modified and/or created by MicroEJ Corp.
 *
 * This file is part of the FreeType project, and may only be used,
 * modified, and distributed under the terms of the FreeType project
 * license, LICENSE.TXT.  By continuing to use, modify, or distribute
 * this file you indicate that you have read the license and
 * understand and accept it fully.
 */

/**
* @file
* @brief MicroEJ Freetype wrapper on freetype c files
* @author MicroEJ Developer Team
* @version 2.0.2
*/

#include "microvg_configuration.h"
#if defined (VG_FEATURE_FONT)

#ifdef VG_FEATURE_FREETYPE_TTF
#include "../truetype.c"
#endif // VG_FEATURE_FREETYPE_TTF

#endif // defined (VG_FEATURE_FONT)
