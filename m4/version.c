#if __GNUC__ >= 3 && __GNUC_MINOR__ >= 4 || __GNUC__ >= 4
#define	USED	__attribute__ ((used))
#elif defined __GNUC__
#define	USED	__attribute__ ((unused))
#else
#define	USED
#endif
static const char sccsid[] USED = "@(#)m4.sl	2.6.1 (heirloom-ports) 2021";
/* SLIST */
/*
m4.c: * Sccsid @(#)m4.c	1.3 (heirloom-ports) 2021
m4.h: * Sccsid @(#)m4.h	1.4 (heirloom-ports) 2021
m4ext.c: * Sccsid @(#)m4ext.c	1.3 (heirloom-ports) 2021
m4macs.c: * Sccsid @(#)m4macs.c	1.6 (heirloom-ports) 2021
m4y.y: * Sccsid @(#)m4y.y	1.5 (heirloom-ports) 2021
m4y_xpg4.y: * Sccsid @(#)m4y_xpg4.y	1.4 (heirloom-ports) 2021
*/
