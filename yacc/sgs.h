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
static const char sccsid[] USED = "@(#)yacc.sl	2.6.1 (heirloom-ports) 2021";
static const char pkg[] = "heirloom-ports";
static const char rel[] = "2.6.1 (heirloom-ports) 2021";
/* SLIST */
/*
dextern: * Sccsid @(#)dextern	1.6 (heirloom-ports) 2021
getopt.c: * Sccsid @(#)getopt.c	1.8 (heirloom-ports) 2021
libmai.c: * Sccsid @(#)libmai.c	1.3 (heirloom-ports) 2021
libzer.c: * Sccsid @(#)libzer.c	1.3 (heirloom-ports) 2021
y1.c: * Sccsid @(#)y1.c	1.7 (heirloom-ports) 2021
y2.c: * Sccsid @(#)y2.c	1.11 (heirloom-ports) 2021
y3.c: * Sccsid @(#)y3.c	1.5 (heirloom-ports) 2021
y4.c: * Sccsid @(#)y4.c	1.5 (heirloom-ports) 2021
y5.c: * Sccsid @(#)y5.c	1.1 (heirloom-ports) 2021
yaccpar: * Sccsid @(#)yaccpar	1.5 (heirloom-ports) 2021
*/
