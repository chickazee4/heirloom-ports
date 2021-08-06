/*
 * Copyright (c) 2021 chickazee4
 *
 * This software is provided 'as-is', without any express or implied
 * warranty. In no event will the authors be held liable for any damages
 * arising from the use of this software.
 *
 * Permission is granted to anyone to use this software for any purpose,
 * including commercial applications, and to alter it and redistribute
 * it freely, subject to the following restrictions:
 *
 * 1. The origin of this software must not be misrepresented; you must not
 *    claim that you wrote the original software. If you use this software
 *    in a product, an acknowledgment in the product documentation would be
 *    appreciated but is not required.
 *
 * 2. Altered source versions must be plainly marked as such, and must not be
 *    misrepresented as being the original software.
 *
 * 3. This notice may not be removed or altered from any source distribution.
 */
/*	Sccsid @(#)typecompat.h	1.0 (heirloom-ports) 2021	*/

/* provides compatibility for some basic solaris type aliases on linux (and others?) */

#ifdef __linux__
#include <sys/types.h>
#include <stdbool.h> 
#include <stdint.h>

typedef bool boolean_t;
typedef char char_t;
typedef unsigned char uchar_t;
typedef short short_t;
typedef unsigned int uint_t;
typedef unsigned short ushort_t;
typedef unsigned long ulong_t;
typedef long longptr_t;
typedef unsigned long uint64ptr_t;
typedef unsigned long ulongptr_t;
#endif

#ifndef B_TRUE
#define B_TRUE true
#endif

#ifndef B_FALSE
#define B_FALSE false 
#endif