/*
 * sleep - suspend execution time for an interval
 *
 * Gunnar Ritter, Freiburg i. Br., Germany, August 2002.
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
static const char sccsid[] USED = "@(#)sleep.sl	1.8.1 (heirloom-ports) 2021";

#include	<unistd.h>
#include	<stdio.h>
#include	<string.h>
#include	<stdlib.h>
#include	<errno.h>
#include	<libgen.h>

static char	*progname;		/* argv[0] to main() */

static void
usage(void)
{
	fprintf(stderr, "usage: %s time\n", progname);
	exit(2);
}

int
main(int argc, char **argv)
{
	unsigned	seconds;
	char	*x;

	progname = basename(argv[0]);
	if (argc > 1 && strcmp(argv[1], "--") == 0)
		argv++, argc--;
	if (argc <= 1)
		usage();
	seconds = strtoul(argv[1], &x, 10);
	if (*x != '\0' || argv[1][0] == '-' || argv[1][0] == '+') {
		fprintf(stderr, "%s: bad character in argument\n", progname);
		return 2;
	}
	do
		seconds = sleep(seconds);
	while (seconds > 0);
	return 0;
}

void
writerr(struct oblok *op, int count, int written)
{
	fprintf(stderr,
		"%s: write error (%d/%d characters written)\n%s\n",
			progname, written, count,
			strerror(errno));
}