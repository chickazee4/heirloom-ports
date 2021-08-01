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
/*	Copyright (c) 1984, 1986, 1987, 1988, 1989 AT&T	*/
/*	  All Rights Reserved  	*/


/*	from OpenSolaris "maid.c	1.7	2021 SMI"         SVr4.0 1.5 	*/

/*
 * Portions Copyright (c) 2005 Gunnar Ritter, Freiburg i. Br., Germany
 *
 * Sccsid @(#)maid.c	1.30 (heirloom-ports) 2021
 */
/*
ma_id() {
static char mastamp[]="@{#}@{#} ma.sl	2.116";
static char mawhat[]="@(#) ma.sl	2.116"; }
*/
#if __GNUC__ >= 3 && __GNUC_MINOR__ >= 4 || __GNUC__ >= 4
#define	USED	__attribute__ ((used))
#elif defined __GNUC__
#define	USED	__attribute__ ((unused))
#else
#define	USED
#endif
static const char id[] = "@(#)ma.sl 1.30 (heirloom-ports) 2021";
/* SLIST */
/*
Dout.c: * Sccsid @(#)Dout.c	1.4 (heirloom-ports) 2021
Tout.c: * Sccsid @(#)Tout.c	1.4 (heirloom-ports) 2021
add_recip.c: * Sccsid @(#)add_recip.c	1.5 (heirloom-ports) 2021
casncmp.c: * Sccsid @(#)casncmp.c	1.4 (heirloom-ports) 2021
cat.c: * Sccsid @(#)cat.c	1.4 (heirloom-ports) 2021
ckdlivopts.c: * Sccsid @(#)ckdlivopts.c	1.4 (heirloom-ports) 2021
cksaved.c: * Sccsid @(#)cksaved.c	1.7 (heirloom-ports) 2021
clr_hinfo.c: * Sccsid @(#)clr_hinfo.c	1.3 (heirloom-ports) 2021
copyback.c: * Sccsid @(#)copyback.c	1.8 (heirloom-ports) 2021
copylet.c: * Sccsid @(#)copylet.c	1.7 (heirloom-ports) 2021
copymt.c: * Sccsid @(#)copymt.c	1.6 (heirloom-ports) 2021
copystream.c: * Sccsid @(#)copystream.c	1.3 (heirloom-ports) 2021
createmf.c: * Sccsid @(#)createmf.c	1.5 (heirloom-ports) 2021
del_recipl.c: * Sccsid @(#)del_recipl.c	1.3 (heirloom-ports) 2021
delempty.c: * Sccsid @(#)delempty.c	1.4 (heirloom-ports) 2021
delete.c: * Sccsid @(#)delete.c	1.4 (heirloom-ports) 2021
done.c: * Sccsid @(#)done.c	1.5 (heirloom-ports) 2021
doopen.c: * Sccsid @(#)doopen.c	1.5 (heirloom-ports) 2021
dumpaff.c: * Sccsid @(#)dumpaff.c	1.3 (heirloom-ports) 2021
dumprcv.c: * Sccsid @(#)dumprcv.c	1.3 (heirloom-ports) 2021
errmsg.c: * Sccsid @(#)errmsg.c	1.3 (heirloom-ports) 2021
fgetline.c: * Sccsid @(#)fgetline.c	1.4 (heirloom-ports) 2021
gendeliv.c: * Sccsid @(#)gendeliv.c	1.4 (heirloom-ports) 2021
getarg.c: * Sccsid @(#)getarg.c	1.3 (heirloom-ports) 2021
getcomment.c: * Sccsid @(#)getcomment.c	1.3 (heirloom-ports) 2021
getdomain.c: * Sccsid @(#)getdomain.c	1.5 (heirloom-ports) 2021
gethead.c: * Sccsid @(#)gethead.c	1.7 (heirloom-ports) 2021
goback.c: * Sccsid @(#)goback.c	1.6 (heirloom-ports) 2021
init.c: * Sccsid @(#)init.c	1.8 (heirloom-ports) 2021
isheader.c: * Sccsid @(#)isheader.c	1.5 (heirloom-ports) 2021
isit.c: * Sccsid @(#)isit.c	1.5 (heirloom-ports) 2021
islocal.c: * Sccsid @(#)islocal.c	1.4 (heirloom-ports) 2021
istext.c: * Sccsid @(#)istext.c	1.6 (heirloom-ports) 2021
legal.c: * Sccsid @(#)legal.c	1.3 (heirloom-ports) 2021
libmail.h: * Sccsid @(#)libmail.h	1.4 (heirloom-ports) 2021
lock.c: * Sccsid @(#)lock.c	1.4 (heirloom-ports) 2021
mail.h: * Sccsid @(#)mail.h	1.11 (heirloom-ports) 2021
maillock.c: * Sccsid @(#)maillock.c	1.5 (heirloom-ports) 2021
maillock.h: * Sccsid @(#)maillock.h	1.3 (heirloom-ports) 2021
main.c: * Sccsid @(#)main.c	1.11 (heirloom-ports) 2021
mkdead.c: * Sccsid @(#)mkdead.c	1.7 (heirloom-ports) 2021
mta_ercode.c: * Sccsid @(#)mta_ercode.c	1.3 (heirloom-ports) 2021
new_recipl.c: * Sccsid @(#)new_recipl.c	1.3 (heirloom-ports) 2021
parse.c: * Sccsid @(#)parse.c	1.5 (heirloom-ports) 2021
pckaffspot.c: * Sccsid @(#)pckaffspot.c	1.4 (heirloom-ports) 2021
pckrcvspot.c: * Sccsid @(#)pckrcvspot.c	1.4 (heirloom-ports) 2021
pickFrom.c: * Sccsid @(#)pickFrom.c	1.5 (heirloom-ports) 2021
pipletr.c: * Sccsid @(#)pipletr.c	1.6 (heirloom-ports) 2021
popenvp.c: * Sccsid @(#)popenvp.c	1.6 (heirloom-ports) 2021
poplist.c: * Sccsid @(#)poplist.c	1.3 (heirloom-ports) 2021
printhdr.c: * Sccsid @(#)printhdr.c	1.4 (heirloom-ports) 2021
printmail.c: * Sccsid @(#)printmail.c	1.10 (heirloom-ports) 2021
pushlist.c: * Sccsid @(#)pushlist.c	1.4 (heirloom-ports) 2021
s_string.h: * Sccsid @(#)s_string.h	1.3 (heirloom-ports) 2021
savehdrs.c: * Sccsid @(#)savehdrs.c	1.4 (heirloom-ports) 2021
sel_disp.c: * Sccsid @(#)sel_disp.c	1.3 (heirloom-ports) 2021
sendlist.c: * Sccsid @(#)sendlist.c	1.9 (heirloom-ports) 2021
sendmail.c: * Sccsid @(#)sendmail.c	1.10 (heirloom-ports) 2021
setsig.c: * Sccsid @(#)setsig.c	1.5 (heirloom-ports) 2021
skipspace.c: * Sccsid @(#)skipspace.c	1.4 (heirloom-ports) 2021
stamp.c: * Sccsid @(#)stamp.c	1.3 (heirloom-ports) 2021
strmove.c: * Sccsid @(#)strmove.c	1.3 (heirloom-ports) 2021
substr.c: * Sccsid @(#)substr.c	1.3 (heirloom-ports) 2021
trimnl.c: * Sccsid @(#)trimnl.c	1.3 (heirloom-ports) 2021
xgetenv.c: * Sccsid @(#)xgetenv.c	1.6 (heirloom-ports) 2021
*/
