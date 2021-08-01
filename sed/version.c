#if __GNUC__ >= 3 && __GNUC_MINOR__ >= 4 || __GNUC__ >= 4
#define	USED	__attribute__ ((used))
#elif defined __GNUC__
#define	USED	__attribute__ ((unused))
#else
#define	USED
#endif
static const char sccsid[] USED = "@(#)sed.sl	2.34.1 (heirloom-ports) 2021";
/* SLIST */
/*
sed.h:	Sccsid @(#)sed.h	1.32 (heirloom-ports) 2021	
sed0.c:	Sccsid @(#)sed0.c	1.64 (heirloom-ports) 2021>	
sed1.c:	Sccsid @(#)sed1.c	1.42 (heirloom-ports) 2021>	
*/
