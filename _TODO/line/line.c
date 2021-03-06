/*
 * line - read one line
 *
 * Gunnar Ritter, Freiburg i. Br., Germany, December 2000.
 */
/*
 * Copyright (c) 2003 Gunnar Ritter
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

#if __GNUC__ >= 3 && __GNUC_MINOR__ >= 4 || __GNUC__ >= 4
#define	USED	__attribute__ ((used))
#elif defined __GNUC__
#define	USED	__attribute__ ((unused))
#else
#define	USED
#endif
static const char sccsid[] USED = "@(#)line.sl	1.11 (heirloom-ports) 2021";

#include	<stdio.h>
#include	<unistd.h>

static int	status;		/* exit status */

static void
doline(int fd)
{
	char c;

	for (;;) {
		if (read(fd, &c, 1) <= 0) {
			status = 1;
			break;
		}
		if (c == '\n')
			break;
		putchar(c);
	}
	putchar('\n');
}

int
main(int argc, char **argv)
{
	doline(0);
	return status;
}
