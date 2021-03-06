#if __GNUC__ >= 3 && __GNUC_MINOR__ >= 4 || __GNUC__ >= 4
#define USED    __attribute__ ((used))
#elif defined __GNUC__
#define USED    __attribute__ ((unused))
#else
#define USED
#endif
static const char id[] USED = "@(#)make	1.0.1 (heirloom-ports) 2021";
/* SLIST */
/*
../bsd/bsd.cc: * Sccsid @(#)bsd.cc	1.6 (heirloom-ports) 2021
../src/read.cc: * Sccsid @(#)read.cc	1.15 (heirloom-ports) 2021
../src/dist.cc: * Sccsid @(#)dist.cc	1.5 (heirloom-ports) 2021
../src/ar.cc: * Sccsid @(#)ar.cc	1.5 (heirloom-ports) 2021
../src/dosys.cc: * Sccsid @(#)dosys.cc	1.4 (heirloom-ports) 2021
../src/make.cc: * Sccsid @(#)make.cc	1.2 (heirloom-ports) 2021
../src/depvar.cc: * Sccsid @(#)depvar.cc	1.3 (heirloom-ports) 2021
../src/implicit.cc: * Sccsid @(#)implicit.cc	1.5 (heirloom-ports) 2021
../src/files.cc: * Sccsid @(#)files.cc	1.7 (heirloom-ports) 2021
../src/posix.cc: * Sccsid @(#)posix.cc	1.1 (heirloom-ports) 2021
../src/parallel.cc: * Sccsid @(#)parallel.cc	1.7 (heirloom-ports) 2021
../src/getopt.c: * Sccsid @(#)getopt.c	1.10 (heirloom-ports) 2021
../src/nse.cc: * Sccsid @(#)nse.cc	1.2 (heirloom-ports) 2021
../src/dmake.cc: * Sccsid @(#)dmake.cc	1.2 (heirloom-ports) 2021
../src/globals.cc: * Sccsid @(#)globals.cc	1.8 (heirloom-ports) 2021
../src/rep.cc: * Sccsid @(#)rep.cc	1.3 (heirloom-ports) 2021
../src/state.cc: * Sccsid @(#)state.cc	1.4 (heirloom-ports) 2021
../src/pmake.cc: * Sccsid @(#)pmake.cc	1.6 (heirloom-ports) 2021
../src/nse_printdep.cc: * Sccsid @(#)nse_printdep.cc	1.4 (heirloom-ports) 2021
../src/misc.cc: * Sccsid @(#)misc.cc	1.12 (heirloom-ports) 2021
../src/main.cc: * Sccsid @(#)main.cc	1.26 (heirloom-ports) 2021
../src/doname.cc: * Sccsid @(#)doname.cc	1.11 (heirloom-ports) 2021
../src/read2.cc: * Sccsid @(#)read2.cc	1.10 (heirloom-ports) 2021
../src/macro.cc: * Sccsid @(#)macro.cc	1.4 (heirloom-ports) 2021
../mksh/i18n.cc: * Sccsid @(#)i18n.cc	1.3 (heirloom-ports) 2021
../mksh/read.cc: * Sccsid @(#)read.cc	1.3 (heirloom-ports) 2021
../mksh/dosys.cc: * Sccsid @(#)dosys.cc	1.10 (heirloom-ports) 2021
../mksh/macro.cc: * Sccsid @(#)macro.cc	1.11 (heirloom-ports) 2021
../mksh/posix.cc: * Sccsid @(#)posix.cc	1.1 (heirloom-ports) 2021
../mksh/misc.cc: * Sccsid @(#)misc.cc	1.9 (heirloom-ports) 2021
../mksh/mksh.cc: * Sccsid @(#)mksh.cc	1.4 (heirloom-ports) 2021
../mksh/globals.cc: * Sccsid @(#)globals.cc	1.4 (heirloom-ports) 2021
../mksh/wcslen.c: * Sccsid @(#)wcslen.c	1.3 (heirloom-ports) 2021
../makestate/lock.c: * Sccsid @(#)lock.c	1.7 (heirloom-ports) 2021
../makestate/ld_file.c: * Sccsid @(#)ld_file.c	1.8 (heirloom-ports) 2021
../vroot/rmdir.cc: * Sccsid @(#)rmdir.cc	1.2 (heirloom-ports) 2021
../vroot/unmount.cc: * Sccsid @(#)unmount.cc	1.2 (heirloom-ports) 2021
../vroot/report.cc: * Sccsid @(#)report.cc	1.5 (heirloom-ports) 2021
../vroot/setenv.cc: * Sccsid @(#)setenv.cc	1.3 (heirloom-ports) 2021
../vroot/access.cc: * Sccsid @(#)access.cc	1.2 (heirloom-ports) 2021
../vroot/chdir.cc: * Sccsid @(#)chdir.cc	1.2 (heirloom-ports) 2021
../vroot/lock.cc: * Sccsid @(#)lock.cc	1.5 (heirloom-ports) 2021
../vroot/vroot.cc: * Sccsid @(#)vroot.cc	1.3 (heirloom-ports) 2021
../vroot/stat.cc: * Sccsid @(#)stat.cc	1.2 (heirloom-ports) 2021
../vroot/chmod.cc: * Sccsid @(#)chmod.cc	1.2 (heirloom-ports) 2021
../vroot/chown.cc: * Sccsid @(#)chown.cc	1.2 (heirloom-ports) 2021
../vroot/execve.cc: * Sccsid @(#)execve.cc	1.2 (heirloom-ports) 2021
../vroot/lstat.cc: * Sccsid @(#)lstat.cc	1.2 (heirloom-ports) 2021
../vroot/mount.cc: * Sccsid @(#)mount.cc	1.4 (heirloom-ports) 2021
../vroot/unlink.cc: * Sccsid @(#)unlink.cc	1.2 (heirloom-ports) 2021
../vroot/mkdir.cc: * Sccsid @(#)mkdir.cc	1.2 (heirloom-ports) 2021
../vroot/chroot.cc: * Sccsid @(#)chroot.cc	1.2 (heirloom-ports) 2021
../vroot/truncate.cc: * Sccsid @(#)truncate.cc	1.2 (heirloom-ports) 2021
../vroot/args.cc: * Sccsid @(#)args.cc	1.2 (heirloom-ports) 2021
../vroot/statfs.cc: * Sccsid @(#)statfs.cc	1.3 (heirloom-ports) 2021
../vroot/open.cc: * Sccsid @(#)open.cc	1.2 (heirloom-ports) 2021
../vroot/creat.cc: * Sccsid @(#)creat.cc	1.2 (heirloom-ports) 2021
../vroot/readlink.cc: * Sccsid @(#)readlink.cc	1.2 (heirloom-ports) 2021
../vroot/utimes.cc: * Sccsid @(#)utimes.cc	1.2 (heirloom-ports) 2021
../mksdmsi18n/libmksdmsi18n_init.cc: * Sccsid @(#)libmksdmsi18n_init.cc	1.5 (heirloom-ports) 2021
../include/mk/copyright.h: * Sccsid @(#)copyright.h	1.2 (heirloom-ports) 2021
../include/mk/defs.h: * Sccsid @(#)defs.h	1.10 (heirloom-ports) 2021
../include/avo/avo_alloca.h: * Sccsid @(#)avo_alloca.h	1.4 (heirloom-ports) 2021
../include/avo/intl.h: * Sccsid @(#)intl.h	1.3 (heirloom-ports) 2021
../include/bsd/bsd.h: * Sccsid @(#)bsd.h	1.4 (heirloom-ports) 2021
../include/mksh/dosys.h: * Sccsid @(#)dosys.h	1.2 (heirloom-ports) 2021
../include/mksh/macro.h: * Sccsid @(#)macro.h	1.2 (heirloom-ports) 2021
../include/mksh/i18n.h: * Sccsid @(#)i18n.h	1.2 (heirloom-ports) 2021
../include/mksh/defs.h: * Sccsid @(#)defs.h	1.12 (heirloom-ports) 2021
../include/mksh/misc.h: * Sccsid @(#)misc.h	1.2 (heirloom-ports) 2021
../include/mksh/mksh.h: * Sccsid @(#)mksh.h	1.2 (heirloom-ports) 2021
../include/mksh/read.h: * Sccsid @(#)read.h	1.2 (heirloom-ports) 2021
../include/mksh/globals.h: * Sccsid @(#)globals.h	1.2 (heirloom-ports) 2021
../include/mksh/libmksh_init.h: * Sccsid @(#)libmksh_init.h	1.2 (heirloom-ports) 2021
../include/vroot/report.h: * Sccsid @(#)report.h	1.2 (heirloom-ports) 2021
../include/vroot/args.h: * Sccsid @(#)args.h	1.4 (heirloom-ports) 2021
../include/vroot/vroot.h: * Sccsid @(#)vroot.h	1.2 (heirloom-ports) 2021
../include/mksdmsi18n/mksdmsi18n.h: * Sccsid @(#)mksdmsi18n.h	1.2 (heirloom-ports) 2021
*/
