/*
 * This code contains changes by
 *      Gunnar Ritter, Freiburg i. Br., Germany, 2002. All rights reserved.
 *
 * Conditions 1, 2, and 4 and the no-warranty notice below apply
 * to these changes.
 *
 *
 * Copyright (c) 1980, 1993
 * 	The Regents of the University of California.  All rights reserved.
 *
 * Redistribution and use in source and binary forms, with or without
 * modification, are permitted provided that the following conditions
 * are met:
 * 1. Redistributions of source code must retain the above copyright
 *    notice, this list of conditions and the following disclaimer.
 * 2. Redistributions in binary form must reproduce the above copyright
 *    notice, this list of conditions and the following disclaimer in the
 *    documentation and/or other materials provided with the distribution.
 * 3. All advertising materials mentioning features or use of this software
 *    must display the following acknowledgement:
 * 	This product includes software developed by the University of
 * 	California, Berkeley and its contributors.
 * 4. Neither the name of the University nor the names of its contributors
 *    may be used to endorse or promote products derived from this software
 *    without specific prior written permission.
 *
 * THIS SOFTWARE IS PROVIDED BY THE REGENTS AND CONTRIBUTORS ``AS IS'' AND
 * ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE
 * IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE
 * ARE DISCLAIMED.  IN NO EVENT SHALL THE REGENTS OR CONTRIBUTORS BE LIABLE
 * FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL
 * DAMAGES (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS
 * OR SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION)
 * HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT
 * LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY
 * OUT OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF
 * SUCH DAMAGE.
 *
 *
 * Copyright(C) Caldera International Inc. 2001-2002. All rights reserved.
 *
 * Redistribution and use in source and binary forms, with or without
 * modification, are permitted provided that the following conditions
 * are met:
 *   Redistributions of source code and documentation must retain the
 *    above copyright notice, this list of conditions and the following
 *    disclaimer.
 *   Redistributions in binary form must reproduce the above copyright
 *    notice, this list of conditions and the following disclaimer in the
 *    documentation and/or other materials provided with the distribution.
 *   All advertising materials mentioning features or use of this software
 *    must display the following acknowledgement:
 *      This product includes software developed or owned by Caldera
 *      International, Inc.
 *   Neither the name of Caldera International, Inc. nor the names of
 *    other contributors may be used to endorse or promote products
 *    derived from this software without specific prior written permission.
 *
 * USE OF THE SOFTWARE PROVIDED FOR UNDER THIS LICENSE BY CALDERA
 * INTERNATIONAL, INC. AND CONTRIBUTORS ``AS IS'' AND ANY EXPRESS OR
 * IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE IMPLIED
 * WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE
 * ARE DISCLAIMED. IN NO EVENT SHALL CALDERA INTERNATIONAL, INC. BE
 * LIABLE FOR ANY DIRECT, INDIRECT INCIDENTAL, SPECIAL, EXEMPLARY, OR
 * CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF
 * SUBSTITUTE GOODS OR SERVICES; LOSS OF USE, DATA, OR PROFITS; OR
 * BUSINESS INTERRUPTION) HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY,
 * WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT (INCLUDING NEGLIGENCE
 * OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE OF THIS SOFTWARE,
 * EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
 *
 * Sccsid @(#)ex_version.c	1.146 (heirloom-ports) 2021
 */

#include "ex.h"

static char *versionstring = "@(#)Version 4.1.4 (heirloom-ports) 2021";

void 
printver(void)
{
	ex_printf("%s%s%s", versionstring + 4,
#ifdef	BIT8
		"", ""
#else
		",", "@(#) 7bit" + 4
#endif
	);
}
/* SLIST */
/*
ex.c:static char sccsid[] = "@(#)ex.c	1.37 (heirloom-ports) 2021";
ex.h: *	Sccsid @(#)ex.h	1.57 (heirloom-ports) 2021
ex_addr.c:static char sccsid[] = "@(#)ex_addr.c	1.11 (heirloom-ports) 2021";
ex_argv.h: *	Sccsid @(#)ex_argv.h	1.9 (heirloom-ports) 2021
ex_cmds.c:static char sccsid[] = "@(#)ex_cmds.c	1.22 (heirloom-ports) 2021";
ex_cmds2.c:static char sccsid[] = "@(#)ex_cmds2.c	1.18 (heirloom-ports) 2021";
ex_cmdsub.c:static char sccsid[] = "@(#)ex_cmdsub.c	1.32 (heirloom-ports) 2021";
ex_data.c:static char sccsid[] = "@(#)ex_data.c	1.14 (heirloom-ports) 2021";
ex_extern.c:static char sccsid[] = "@(#)ex_extern.c	1.6 (heirloom-ports) 2021";
ex_get.c:static char sccsid[] = "@(#)ex_get.c	1.18 (heirloom-ports) 2021";
ex_io.c:static char sccsid[] = "@(#)ex_io.c	1.42 (heirloom-ports) 2021";
ex_proto.h: *	Sccsid @(#)ex_proto.h	1.33 (heirloom-ports) 2021
ex_put.c:static char sccsid[] = "@(#)ex_put.c	1.35 (heirloom-ports) 2021";
ex_re.c:static char sccsid[] = "@(#)ex_re.c	1.60 (heirloom-ports) 2021";
ex_re.h: *	Sccsid @(#)ex_re.h	1.24 (heirloom-ports) 2021
ex_set.c:static char sccsid[] = "@(#)ex_set.c	1.11 (heirloom-ports) 2021";
ex_subr.c:static char sccsid[] = "@(#)ex_subr.c	1.41 (heirloom-ports) 2021";
ex_tagio.c:static char sccsid[] = "@(#)ex_tagio.c	1.12 (heirloom-ports) 2021";
ex_temp.c:static char sccsid[] = "@(#)ex_temp.c	1.27 (heirloom-ports) 2021";
ex_temp.h: *	Sccsid @(#)ex_temp.h	1.10 (heirloom-ports) 2021
ex_tty.c:static char sccsid[] = "@(#)ex_tty.c	1.30 (heirloom-ports) 2021";
ex_tty.h: *	Sccsid @(#)ex_tty.h	1.14 (heirloom-ports) 2021
ex_tune.h: *	Sccsid @(#)ex_tune.h	1.14 (heirloom-ports) 2021
ex_unix.c:static char sccsid[] = "@(#)ex_unix.c	1.17 (heirloom-ports) 2021";
ex_v.c:static char sccsid[] = "@(#)ex_v.c	1.19 (heirloom-ports) 2021";
ex_vadj.c:static char sccsid[] = "@(#)ex_vadj.c	1.16 (heirloom-ports) 2021";
ex_vget.c:static char sccsid[] = "@(#)ex_vget.c	1.31 (heirloom-ports) 2021";
ex_vis.h: *	Sccsid @(#)ex_vis.h	1.22 (heirloom-ports) 2021
ex_vmain.c:static char sccsid[] = "@(#)ex_vmain.c	1.34 (heirloom-ports) 2021";
ex_voper.c:static char sccsid[] = "@(#)ex_voper.c	1.28 (heirloom-ports) 2021";
ex_vops.c:static char sccsid[] = "@(#)ex_vops.c	1.28 (heirloom-ports) 2021";
ex_vops2.c:static char sccsid[] = "@(#)ex_vops2.c	1.36 (heirloom-ports) 2021";
ex_vops3.c:static char sccsid[] = "@(#)ex_vops3.c	1.21 (heirloom-ports) 2021";
ex_vput.c:static char sccsid[] = "@(#)ex_vput.c	1.52 (heirloom-ports) 2021";
ex_vwind.c:static char sccsid[] = "@(#)ex_vwind.c	1.9 (heirloom-ports) 2021";
expreserve.c:static char sccsid[] UNUSED = "@(#)expreserve.c	1.23 (heirloom-ports) 2021";
exrecover.c:static char sccsid[] UNUSED = "@(#)exrecover.c	1.23 (heirloom-ports) 2021";
mapmalloc.c: *	Sccsid @(#)mapmalloc.c	1.7 (heirloom-ports) 2021
printf.c:static char sccsid[] = "@(#)printf.c	1.15 (heirloom-ports) 2021";
*/
