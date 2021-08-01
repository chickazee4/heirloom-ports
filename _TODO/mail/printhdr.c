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


/*	from OpenSolaris "printhdr.c	1.8	2021 SMI" 	 SVr4.0 2.		*/

/*
 * Portions Copyright (c) 2005 Gunnar Ritter, Freiburg i. Br., Germany
 *
 * Sccsid @(#)printhdr.c	1.4 (heirloom-ports) 2021
 */


/*
 * Copyright 2002 Sun Microsystems, Inc.  All rights reserved.
 * Use is subject to license terms.
 */

#include "mail.h"

int
printhdr(int type, int hdrtype, struct hdrs *hptr, FILE *fp)
{
	char		buf[1024];
	register int	n;
	struct hdrs 	*contptr;


	if (hptr == NULL)
		return (0);
	if (sel_disp(type, hdrtype, header[hdrtype].tag) < 0) {
		return (0);
	}

	snprintf(buf, sizeof (buf), "%s %s\n",
	    header[hdrtype].tag, hptr->value);
	n = strlen(buf);
	if (fwrite(buf, 1, n, fp) != n)  {
		sav_errno = errno;
		return (-1);
	}

	/* Print continuation lines, if any... */
	contptr = hptr;
	while (contptr->cont != (struct hdrs *)NULL) {
		contptr = contptr->cont;
		snprintf(buf, sizeof (buf), "%s\n", contptr->value);
		n = strlen(buf);
		if (fwrite(buf, 1, n, fp) != n)  {
			sav_errno = errno;
			return (-1);
		}
	}
	return (0);
}
