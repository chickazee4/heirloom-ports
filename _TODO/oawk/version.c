#if __GNUC__ >= 3 && __GNUC_MINOR__ >= 4 || __GNUC__ >= 4
#define	USED	__attribute__ ((used))
#elif defined __GNUC__
#define	USED	__attribute__ ((unused))
#else
#define	USED
#endif
static const char sccsid[] USED = "@(#)oawk.sl  2.31 (heirloom-ports) 2021";
/* SLIST */
/*
awk.def: *	Sccsid @(#)awk.def	1.19 (heirloom-ports) 2021
awk.g.y:	Sccsid @(#)awk.g.y	1.5 (heirloom-ports) 2021>	
awk.lx.l:	Sccsid @(#)awk.lx.l	1.13 (heirloom-ports) 2021>	
b.c:	Sccsid @(#)b.c	1.10 (heirloom-ports) 2021>	
freeze.c:	Sccsid @(#)freeze.c	1.3 (heirloom-ports) 2021>	
lib.c:	Sccsid @(#)lib.c	1.16 (heirloom-ports) 2021>	
main.c:	Sccsid @(#)main.c	1.11 (heirloom-ports) 2021>	
parse.c:	Sccsid @(#)parse.c	1.5 (heirloom-ports) 2021>	
proc.c:	Sccsid @(#)proc.c	1.8 (heirloom-ports) 2021>	
run.c:	Sccsid @(#)run.c	1.20 (heirloom-ports) 2021>	
tran.c:	Sccsid @(#)tran.c	1.7 (heirloom-ports) 2021>	
*/
