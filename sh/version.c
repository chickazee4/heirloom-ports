/*
 * CDDL HEADER START
 *
 * The contents of this file are subject to the terms of the
 * Common Development and Distribution License, Version 1.0 only
 * (the "License").  You may not use this file except in compliance
 * with the License.
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
 * Copyright (c) 2005 Gunnar Ritter, Freiburg i. Br., Germany
 *
 * Sccsid @(#)main.c	1.2 (heirloom-ports) 2021
 */
#if __GNUC__ >= 3 && __GNUC_MINOR__ >= 4 || __GNUC__ >= 4
#define	USED	__attribute__ ((used))
#elif defined __GNUC__
#define	USED	__attribute__ ((unused))
#else
#define	USED
#endif
static const char id[] USED = "@(#)sh.sl	1.55.1 (heirloom-ports) 2021";
/* SLIST */
/*
args.c: * Sccsid @(#)args.c	1.5 (heirloom-ports) 2021
blok.c: * Sccsid @(#)blok.c	1.7 (heirloom-ports) 2021
bltin.c: * Sccsid @(#)bltin.c	1.11 (heirloom-ports) 2021
brkincr.h: * Sccsid @(#)brkincr.h	1.4 (heirloom-ports) 2021
cmd.c: * Sccsid @(#)cmd.c	1.4 (heirloom-ports) 2021
ctype.c: * Sccsid @(#)ctype.c	1.5 (heirloom-ports) 2021
ctype.h: * Sccsid @(#)ctype.h	1.5 (heirloom-ports) 2021
defs.c: * Sccsid @(#)defs.c	1.4 (heirloom-ports) 2021
defs.h: * Sccsid @(#)defs.h	1.21 (heirloom-ports) 2021
dup.h: * Sccsid @(#)dup.h	1.4 (heirloom-ports) 2021
echo.c: * Sccsid @(#)echo.c	1.9 (heirloom-ports) 2021
error.c: * Sccsid @(#)error.c	1.6 (heirloom-ports) 2021
expand.c: * Sccsid @(#)expand.c	1.6 (heirloom-ports) 2021
fault.c: * Sccsid @(#)fault.c	1.11 (heirloom-ports) 2021
func.c: * Sccsid @(#)func.c	1.4 (heirloom-ports) 2021
getopt.c: * Sccsid @(#)getopt.c	1.7 (heirloom-ports) 2021
hash.c: * Sccsid @(#)hash.c	1.6 (heirloom-ports) 2021
hash.h: * Sccsid @(#)hash.h	1.4 (heirloom-ports) 2021
hashserv.c: * Sccsid @(#)hashserv.c	1.4 (heirloom-ports) 2021
io.c: * Sccsid @(#)io.c	1.5 (heirloom-ports) 2021
jobs.c: * Sccsid @(#)jobs.c	1.13 (heirloom-ports) 2021
mac.h: * Sccsid @(#)mac.h	1.6 (heirloom-ports) 2021
macro.c: * Sccsid @(#)macro.c	1.8 (heirloom-ports) 2021
main.c: * Sccsid @(#)main.c	1.10 (heirloom-ports) 2021
mode.h: * Sccsid @(#)mode.h	1.5 (heirloom-ports) 2021
msg.c: * Sccsid @(#)msg.c	1.11 (heirloom-ports) 2021
name.c: * Sccsid @(#)name.c	1.15 (heirloom-ports) 2021
name.h: * Sccsid @(#)name.h	1.4 (heirloom-ports) 2021
print.c: * Sccsid @(#)print.c	1.11 (heirloom-ports) 2021
pwd.c: * Sccsid @(#)pwd.c	1.6 (heirloom-ports) 2021
service.c: * Sccsid @(#)service.c	1.10 (heirloom-ports) 2021
setbrk.c: * Sccsid @(#)setbrk.c	1.4 (heirloom-ports) 2021
stak.c: * Sccsid @(#)stak.c	1.5 (heirloom-ports) 2021
stak.h: * Sccsid @(#)stak.h	1.5 (heirloom-ports) 2021
string.c: * Sccsid @(#)string.c	1.5 (heirloom-ports) 2021
strsig.c: * Sccsid @(#)strsig.c	1.9 (heirloom-ports) 2021
sym.h: * Sccsid @(#)sym.h	1.4 (heirloom-ports) 2021
test.c: * Sccsid @(#)test.c	1.9 (heirloom-ports) 2021
timeout.h: * Sccsid @(#)timeout.h	1.4 (heirloom-ports) 2021
ulimit.c: * Sccsid @(#)ulimit.c	1.10 (heirloom-ports) 2021
umask.c: * Sccsid @(#)umask.c	1.1 (heirloom-ports) 2021
word.c: * Sccsid @(#)word.c	1.7 (heirloom-ports) 2021
xec.c: * Sccsid @(#)xec.c	1.6 (heirloom-ports) 2021
*/
