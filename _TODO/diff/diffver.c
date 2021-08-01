#if __GNUC__ >= 3 && __GNUC_MINOR__ >= 4 || __GNUC__ >= 4
#define	USED	__attribute__ ((used))
#elif defined __GNUC__
#define	USED	__attribute__ ((unused))
#else
#define	USED
#endif
static const char sccsid[] USED = "@(#)diff.sl	1.51 (heirloom-ports) 2021";
/* SLIST */
/*
diff.c:	Sccsid @(#)diff.c	1.24 (heirloom-ports) 2021>	
diff.h:	Sccsid @(#)diff.h	1.15 (heirloom-ports) 2021>	
diffdir.c:	Sccsid @(#)diffdir.c	1.30 (heirloom-ports) 2021>	
diffreg.c:	Sccsid @(#)diffreg.c	1.30 (heirloom-ports) 2021>	
*/
