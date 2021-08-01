#if __GNUC__ >= 3 && __GNUC_MINOR__ >= 4 || __GNUC__ >= 4
#define USED    __attribute__ ((used))
#elif defined __GNUC__
#define USED    __attribute__ ((unused))
#else
#define USED
#endif
static const char id[] USED = "@(#)sccs.sl	1.30.1 (heirloom-ports) 2021";
/* SLIST */
/*
admin.c: * Sccsid @(#)admin.c	1.5 (heirloom-ports) 2021
comb.c: * Sccsid @(#)comb.c	1.4 (heirloom-ports) 2021
delta.c: * Sccsid @(#)delta.c	1.8 (heirloom-ports) 2021
get.c: * Sccsid @(#)get.c	1.8 (heirloom-ports) 2021
help.c: * Sccsid @(#)help.c	1.5 (heirloom-ports) 2021
prs.c: * Sccsid @(#)prs.c	1.6 (heirloom-ports) 2021
prt.c: * Sccsid @(#)prt.c	1.4 (heirloom-ports) 2021
rmchg.c: * Sccsid @(#)rmchg.c	1.6 (heirloom-ports) 2021
sccs.c: * Sccsid @(#)sccs.c	1.14 (heirloom-ports) 2021
unget.c: * Sccsid @(#)unget.c	1.6 (heirloom-ports) 2021
val.c: * Sccsid @(#)val.c	1.5 (heirloom-ports) 2021
vc.c: * Sccsid @(#)vc.c	1.4 (heirloom-ports) 2021
what.c: * Sccsid @(#)what.c	1.4 (heirloom-ports) 2021
../cassi/cmrcheck.c: * Sccsid @(#)cmrcheck.c	1.5 (heirloom-ports) 2021
../cassi/deltack.c: * Sccsid @(#)deltack.c	1.5 (heirloom-ports) 2021
../cassi/error.c: * Sccsid @(#)error.c	1.4 (heirloom-ports) 2021
../cassi/filehand.c: * Sccsid @(#)filehand.c	1.6 (heirloom-ports) 2021
../cassi/gf.c: * Sccsid @(#)gf.c	1.5 (heirloom-ports) 2021
../comobj/auxf.c: * Sccsid @(#)auxf.c	1.4 (heirloom-ports) 2021
../comobj/chkid.c: * Sccsid @(#)chkid.c	1.4 (heirloom-ports) 2021
../comobj/chksid.c: * Sccsid @(#)chksid.c	1.4 (heirloom-ports) 2021
../comobj/cmpdate.c: * Sccsid @(#)cmpdate.c	1.4 (heirloom-ports) 2021
../comobj/date_ab.c: * Sccsid @(#)date_ab.c	1.5 (heirloom-ports) 2021
../comobj/date_ba.c: * Sccsid @(#)date_ba.c	1.4 (heirloom-ports) 2021
../comobj/del_ab.c: * Sccsid @(#)del_ab.c	1.4 (heirloom-ports) 2021
../comobj/del_ba.c: * Sccsid @(#)del_ba.c	1.4 (heirloom-ports) 2021
../comobj/dodelt.c: * Sccsid @(#)dodelt.c	1.5 (heirloom-ports) 2021
../comobj/dofile.c: * Sccsid @(#)dofile.c	1.5 (heirloom-ports) 2021
../comobj/dohist.c: * Sccsid @(#)dohist.c	1.4 (heirloom-ports) 2021
../comobj/doie.c: * Sccsid @(#)doie.c	1.4 (heirloom-ports) 2021
../comobj/dolist.c: * Sccsid @(#)dolist.c	1.5 (heirloom-ports) 2021
../comobj/encode.c: * Sccsid @(#)encode.c	1.4 (heirloom-ports) 2021
../comobj/eqsid.c: * Sccsid @(#)eqsid.c	1.4 (heirloom-ports) 2021
../comobj/flushto.c: * Sccsid @(#)flushto.c	1.4 (heirloom-ports) 2021
../comobj/fmterr.c: * Sccsid @(#)fmterr.c	1.5 (heirloom-ports) 2021
../comobj/getline.c: * Sccsid @(#)getline.c	1.4 (heirloom-ports) 2021
../comobj/getser.c: * Sccsid @(#)getser.c	1.4 (heirloom-ports) 2021
../comobj/logname.c: * Sccsid @(#)logname.c	1.5 (heirloom-ports) 2021
../comobj/newsid.c: * Sccsid @(#)newsid.c	1.4 (heirloom-ports) 2021
../comobj/newstats.c: * Sccsid @(#)newstats.c	1.5 (heirloom-ports) 2021
../comobj/permiss.c: * Sccsid @(#)permiss.c	1.5 (heirloom-ports) 2021
../comobj/pf_ab.c: * Sccsid @(#)pf_ab.c	1.4 (heirloom-ports) 2021
../comobj/putline.c: * Sccsid @(#)putline.c	1.5 (heirloom-ports) 2021
../comobj/rdmod.c: * Sccsid @(#)rdmod.c	1.4 (heirloom-ports) 2021
../comobj/setup.c: * Sccsid @(#)setup.c	1.4 (heirloom-ports) 2021
../comobj/sid_ab.c: * Sccsid @(#)sid_ab.c	1.4 (heirloom-ports) 2021
../comobj/sid_ba.c: * Sccsid @(#)sid_ba.c	1.4 (heirloom-ports) 2021
../comobj/sidtoser.c: * Sccsid @(#)sidtoser.c	1.4 (heirloom-ports) 2021
../comobj/sinit.c: * Sccsid @(#)sinit.c	1.5 (heirloom-ports) 2021
../comobj/stats_ab.c: * Sccsid @(#)stats_ab.c	1.4 (heirloom-ports) 2021
../comobj/strptim.c: * Sccsid @(#)strptim.c	1.4 (heirloom-ports) 2021
../hdr/ccstypes.h: * Sccsid @(#)ccstypes.h	1.4 (heirloom-ports) 2021
../hdr/defines.h: * Sccsid @(#)defines.h	1.5 (heirloom-ports) 2021
../hdr/fatal.h: * Sccsid @(#)fatal.h	1.4 (heirloom-ports) 2021
../hdr/filehand.h: * Sccsid @(#)filehand.h	1.3 (heirloom-ports) 2021
../hdr/had.h: * Sccsid @(#)had.h	1.3 (heirloom-ports) 2021
../hdr/i18n.h: * Sccsid @(#)i18n.h	1.3 (heirloom-ports) 2021
../hdr/macros.h: * Sccsid @(#)macros.h	1.3 (heirloom-ports) 2021
../hdr/macros.h: *	Note:	Sccsid[] strings are still supported but not the prefered
../hdr/macros.h:#define	SCCSID(arg)		static char Sccsid[] = #arg
../hdr/macros.h:#define	SCCSID(arg)		static char Sccsid[] = "arg"
../mpwlib/abspath.c: * Sccsid @(#)abspath.c	1.3 (heirloom-ports) 2021
../mpwlib/any.c: * Sccsid @(#)any.c	1.3 (heirloom-ports) 2021
../mpwlib/cat.c: * Sccsid @(#)cat.c	1.4 (heirloom-ports) 2021
../mpwlib/dname.c: * Sccsid @(#)dname.c	1.3 (heirloom-ports) 2021
../mpwlib/fatal.c: * Sccsid @(#)fatal.c	1.4 (heirloom-ports) 2021
../mpwlib/fdfopen.c: * Sccsid @(#)fdfopen.c	1.3 (heirloom-ports) 2021
../mpwlib/fmalloc.c: * Sccsid @(#)fmalloc.c	1.3 (heirloom-ports) 2021
../mpwlib/getopt.c: * Sccsid @(#)getopt.c	1.9 (heirloom-ports) 2021
../mpwlib/had.c: * Sccsid @(#)had.c	1.3 (heirloom-ports) 2021
../mpwlib/imatch.c: * Sccsid @(#)imatch.c	1.3 (heirloom-ports) 2021
../mpwlib/index.c: * Sccsid @(#)index.c	1.3 (heirloom-ports) 2021
../mpwlib/lockit.c: * Sccsid @(#)lockit.c	1.5 (heirloom-ports) 2021
../mpwlib/patoi.c: * Sccsid @(#)patoi.c	1.3 (heirloom-ports) 2021
../mpwlib/repl.c: * Sccsid @(#)repl.c	1.3 (heirloom-ports) 2021
../mpwlib/satoi.c: * Sccsid @(#)satoi.c	1.3 (heirloom-ports) 2021
../mpwlib/setsig.c: * Sccsid @(#)setsig.c	1.4 (heirloom-ports) 2021
../mpwlib/sname.c: * Sccsid @(#)sname.c	1.3 (heirloom-ports) 2021
../mpwlib/strend.c: * Sccsid @(#)strend.c	1.3 (heirloom-ports) 2021
../mpwlib/trnslat.c: * Sccsid @(#)trnslat.c	1.3 (heirloom-ports) 2021
../mpwlib/userexit.c: * Sccsid @(#)userexit.c	1.3 (heirloom-ports) 2021
../mpwlib/xcreat.c: * Sccsid @(#)xcreat.c	1.4 (heirloom-ports) 2021
../mpwlib/xlink.c: * Sccsid @(#)xlink.c	1.3 (heirloom-ports) 2021
../mpwlib/xmsg.c: * Sccsid @(#)xmsg.c	1.3 (heirloom-ports) 2021
../mpwlib/xopen.c: * Sccsid @(#)xopen.c	1.3 (heirloom-ports) 2021
../mpwlib/xpipe.c: * Sccsid @(#)xpipe.c	1.3 (heirloom-ports) 2021
../mpwlib/xunlink.c: * Sccsid @(#)xunlink.c	1.3 (heirloom-ports) 2021
../mpwlib/zero.c: * Sccsid @(#)zero.c	1.3 (heirloom-ports) 2021
*/
