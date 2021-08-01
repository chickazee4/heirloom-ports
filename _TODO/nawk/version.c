#include "awk.h"
#if defined (SU3)
const char version[] = "@(#)awk_su3.sl  1.51 (heirloom-ports) 2021";
int	posix = 1;
#elif defined (SUS)
const char version[] = "@(#)awk_sus.sl  1.51 (heirloom-ports) 2021";
int	posix = 1;
#else
const char version[] = "@(#)nawk.sl  1.51 (heirloom-ports) 2021";
int	posix = 0;
#endif
/* SLIST */
/*
awk.g.y:   Sccsid @(#)awk.g.y	1.9 (heirloom-ports) 2021>
awk.h:   Sccsid @(#)awk.h	1.23 (heirloom-ports) 2021>
awk.lx.l:   Sccsid @(#)awk.lx.l	1.13 (heirloom-ports) 2021>
b.c:   Sccsid @(#)b.c	1.6 (heirloom-ports) 2021>
lib.c:   Sccsid @(#)lib.c	1.27 (heirloom-ports) 2021>
main.c:   Sccsid @(#)main.c	1.14 (heirloom-ports) 2021>
maketab.c:   Sccsid @(#)maketab.c	1.11 (heirloom-ports) 2021>
parse.c:   Sccsid @(#)parse.c	1.7 (heirloom-ports) 2021>
run.c:   Sccsid @(#)run.c	1.33 (heirloom-ports) 2021>
tran.c:   Sccsid @(#)tran.c	1.16 (heirloom-ports) 2021>
rerule.sed:# Sccsid @(#)rerule.sed	1.1 (heirloom-ports) 2021
*/
