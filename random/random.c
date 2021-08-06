/* random implementation by chickazee4 because old one didn't work and neither did the one from unix 7 when i tried it. */
/* mimics XENIX functionality as was written in the old man page, planning on adding a couple extra command-line options later */

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

#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>
#if __GNUC__ >= 3 && __GNUC_MINOR__ >= 4 || __GNUC__ >= 4
#define	USED	__attribute__ ((used))
#elif defined __GNUC__
#define	USED	__attribute__ ((unused))
#else
#define	USED
#endif
static const char sccsid[] USED = "@(#)random	1.0 (heirloom-ports) 2021";

static int sflag = 0;
#ifdef HEIRLOOM_32BIT
long max = 32768;
#else
long max = 2147483647;
#endif
long *maxp = &max;

int r;

int* 
getrand() {
	int *rp;
	rp = &r;
	srand(time(NULL));
	*rp = rand() % *maxp;
	return rp;
}

int
main(int argc, char **argv)
{
	char *inv;
	int b = 10;
	int *bp = &b;
	char *x;
	if (argc > 1) {
		int i = 1;
		for (;i < argc; i++) {
			if (argv[i][1] == 's')
				sflag++;
			else {
				x = argv[i];
#ifdef HEIRLOOM_32BIT
				long l = strtol(x, &inv, 10);
#else
				long l = strtol(x, &inv, 10);
#endif
				*maxp = l;
			}
		}
	}
	if (sflag > 0) *maxp = 255; /* sflag = exit with code received and max exit code on unix is 255, so we override user choice  */
	int *result = getrand();
	if (sflag > 0) 
		exit(*result);
	else {
		printf("%i\n", *result);
		exit(0);
	}
}