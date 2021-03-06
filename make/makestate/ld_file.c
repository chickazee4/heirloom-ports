/*
 * CDDL HEADER START
 *
 * The contents of this file are subject to the terms of the
 * Common Development and Distribution License (the "License").
 * You may not use this file except in compliance with the License.
 *
 * You can obtain a copy of the license at usr/src/OPENSOLARIS.LICENSE
 * or http://www.opensolaris.org/os/licensing.
 * See the License for the specific language governing permissions
 * and limitations under the License.
 *
 * When distributing Covered Code, include this CDDL HEADER in each
 * file and include the License file at usr/src/OPENSOLARIS.LICENSE.
 * If applicable, add the following below this CDDL HEADER, with the
 * fields enclosed by brackets "[]" replaced with your own identifying
 * information: Portions Copyright [yyyy] [name of copyright owner]
 *
 * CDDL HEADER END
 */
/*
 * Copyright 1998 Sun Microsystems, Inc. All rights reserved.
 * Use is subject to license terms.
 */
/*
 * @(#)ld_file.c 1.7 2021
 */
/*	from OpenSolaris "ld_file.c	1.7	2021"	*/

/*
 * Portions Copyright (c) 2007 Gunnar Ritter, Freiburg i. Br., Germany
 *
 * Sccsid @(#)ld_file.c	1.8 (heirloom-ports) 2021
 */

#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <string.h>
#ifdef __sun
#include <libelf.h>
#endif
#include <sys/param.h>
#ifdef __sun
#include <link.h>
#endif

#define	SUNPRO_DEPENDENCIES	"SUNPRO_DEPENDENCIES"

/*
 * Linked list of strings - used to keep lists of names
 * of directories or files.
 */

struct Stritem {
	char *		str;
	void *		next;
};

typedef struct Stritem 	Stritem;

static char 		* depend_file = (char *)-1;
static Stritem		* list = NULL;


void mk_state_init(void)
{
	depend_file = getenv(SUNPRO_DEPENDENCIES);
} /* mk_state_init() */



static void
prepend_str(Stritem **list, const char * str)
{
	Stritem * new;
	char 	* newstr;

	if (!(new = calloc(1, sizeof (Stritem)))) {
		perror("libmakestate.so");
		return;
	} /* if */

	if (!(newstr = malloc(strlen(str) + 1))) {
		perror("libmakestate.so");
		return;
	} /* if */

	new->str = strcpy(newstr, str);
	new->next = *list;
	*list = new;

} /* prepend_str() */


void
mk_state_collect_dep(const char * file)
{
	if (depend_file == (char *)-1)
		mk_state_init();
	/*
	 * SUNPRO_DEPENDENCIES wasn't set, we don't collect .make.state
	 * information.
	 */
	if (!depend_file)
		return;

	prepend_str(&list, file);

}  /* mk_state_collect_dep() */


void
mk_state_update_exit(void)
{
	Stritem 	* cur;
	char		  lockfile[MAXPATHLEN],	* err, * space, * target;
	FILE		* ofp;
	extern char 	* file_lock(char *, char *, int);

	if (depend_file == (char *)-1)
		mk_state_init();
	if (!depend_file)
		return;

	if ((space = strchr(depend_file, ' ')) == NULL)
		return;
	*space = '\0';
	target = &space[1];

	sprintf(lockfile, "%s.lock", depend_file);
	if ((err = file_lock(depend_file, lockfile, 0))) {
		fprintf(stderr, "%s\n", err);
		return;
	} /* if */

	if (!(ofp = fopen(depend_file, "a")))
		return;

	if (list)
		fprintf(ofp, "%s: ", target);

	for (cur = list; cur; cur = cur->next)
		fprintf(ofp, " %s", cur->str);

	fputc('\n', ofp);

	fclose(ofp);
	unlink(lockfile);
	*space = ' ';

} /* mk_state_update_exit() */

#ifdef __sun
/* ARGSUSED */
void
ld_file(const char * file, const Elf_Kind ekind, int flags, Elf *elf)
{
#if defined (LD_SUP_DERIVED) && defined (LD_SUP_EXTRACTED)
	if(! ((flags & LD_SUP_DERIVED) && !(flags & LD_SUP_EXTRACTED)))
		return;
#endif

	mk_state_collect_dep(file);

} /* ld_file */
#endif

void
ld_atexit(int exit_code)
{
	if (exit_code)
	   return;
	
	mk_state_update_exit();

} /* ld_atexit() */

#ifdef __sun
/*
 * Supporting 64-bit objects
 */
void
ld_file64(const char * file, const Elf_Kind ekind, int flags, Elf *elf)
{
#if defined (LD_SUP_DERIVED) && defined (LD_SUP_EXTRACTED)
	if(! ((flags & LD_SUP_DERIVED) && !(flags & LD_SUP_EXTRACTED)))
		return;
#endif

	mk_state_collect_dep(file);

} /* ld_file64 */
#endif

void
ld_atexit64(int exit_code)
{
	if (exit_code)
	   return;
	
	mk_state_update_exit();

} /* ld_atexit64() */
