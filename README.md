# heirloom-ports

**i am not actively maintaining this project currently.** i may pick it up at a later point, but i feel my development attention ought to be focused elsewhere right nwo. if you are interested in a free, non-GNU set of alternative core utilities on linux and macOS, try [plan9port](https://9fans.github.io/plan9port/) or the [suckless core](https://core.suckless.org/) - or better yet, replace those OSes with openindiana (the userland of which is very similar to that provided by heirloom-ports and the original heirloom project), a \*bsd, or plan 9 ([9legacy](https://9legacy.org)/[9front](https://9front.org)).

this is a continuation of the old [heirloom project](http://heirloom.sourceforge.net), which provided minimal non-GNU implementations of core unix tools like make, cp, tar, sed, etc. based mostly on the opensolaris codebase. the project (excluding nail and doctools) was abandoned circa 2007 so some of its code has trouble compiling against modern compilers, and its build system is incredibly confusing. heirloom-ports intends to continue the project and streamline the software for modern implementations by fixing code issues and porting the entire project to the CMake build system, as opposed to the ancient makefiles it was using. 

currently, the following software from the heirloom project has been ported:
* awk (=oawk, ?)
* banner (good)
* basename (good)
* bc (good)
* bdiff (?)
* bfs (?)
* cal (good)
* cat (good)
* checknr (good)
* chmod (?)
* chown (?)
* cmp (?)
* col (?)
* comm (?)
* cp/ln/mv (good)
* cpio (?)
* csplit (?)
* cut (?)
* date (good)
* dc (good)
* dd (good)
* deroff (good)
* df (good)
* diff3 (?)
* dircmp (good)
* dirname (good)
* du (good)
* echo* (Unix 7, good)
* ed (?)
* env (good)
* ex/vi/wvi (prog semi-fail)
* expand/unexpand (good)
* factor (good)
* file (good)
* find (good)
* fmt (?)
* grep/fgrep/egrep* (4.4BSD good/illumos (egrep illumos only) ?)
* groups (good)
* head (good)
* hostname (good)
* id (good)
* kill (good)
* lex (partial fail, works ok with -t flag)
* libcommon (we are now dynamically linking this since it is used in so many of the programs and have thus renamed it to `libheirloom` to avoid conflicts)
* libuxre
* libwchar
* listusers (good)
* m4 (?)
* make (prog fail)
* mesg (good)
* mkdir (good)
* more (good)
* news (?)
* nice (?)
* od (good)
* printf (good)
* ps (good)
* pwd (good)
* random* (from scratch, good)
* sccs (?)
* sed (?)
* sh (good)
* sleep (good)
* sort (?)
* stty (good)
* su (prog fail)
* tail (good)
* tar* (4.3BSD, good)
* tee (?)
* test (good)
* touch (good)
* tr (good)
* true/false (good)
* tty (good)
* ul (good)
* uname (good)
* users (good)
* wc (good)
* what (?)
* who (prog semi-fail)
* yacc (good)
* yes (good)

\* indicates the program has been re-ported from either 4.3BSD, 4.4BSD, OpenSolaris, illumos, or Unix 7, or rewritten mimicking original functionality, due to issues introduced by the original heirloom project or by its predecessors. these programs will usually have less functionality than is provided by the heirloom project or modern gnu implementations, but re-extending them in a more modern way is on the agenda. the following classic unix programs which were not in the original heirloom project, but are useful as core utilities, have also been ported:

* ar - library archiver utility (4.4BSD)
* libavl - binary tree library (OpenSolaris)

the following are also slated for inclusion and currently in the process of being ported (the porting process takes longer for these since they were not at any point maintained by heirloom and have more issues and incompatibilities):

* ld - linker (OpenSolaris)
* libcurses - library for creating interactive terminal programs (OpenSolaris)
* lint - C linter (4.3BSD)

these newly included development programs don't (yet) have support for some of the new features included in >C99 and may fail with newer code, so using them, you may need to make some adjustments to your code. this is primarily of concern with lint, since it interfaces directly with code, but may apply to ld and ar as well.

the following new shell scripts which easily combine the functions of other utilities or which simplify their usage are also optionally included if you build with the -DENABLE_EXTRAS flag (more to come):

* dt (ls+cat) - if the input is a directory, print the filenames in the directory; if the input is a file, print the contents of the file. useful for navigation in the shell
* mktgz (easier shorthand for tar -czf) - create a tar.gz file
* rnr (rm+mkcd+touch) - remove a directory or file and regenerate it (recreates the directory with no entries or creates a new empty file of the same filename)
* yy (yacc+mv) - process a yacc file and clean up the output by moving the y.tab.c and y.tab.h files to the original filename and removing rodata.c

the heirloom documentation tools included here have descended from the original heirloom doctools but also passed through active development at https://github.com/n-t-roff/heirloom-doctools - the folks here have made porting significantly easier. our copy of cpio also got a few bugfixes at https://github.com/rtomj/heirloom-project.

## building

    $ mkdir build && cd build
    $ cmake ..
    $ make
    # make install

additional CMake options:
* ENABLE_ZLIB - enable or disable ZLib support in cpio (not essential, but useful, enabled by default)
* ENABLE_BZ2 - enable or disable BZip2 library support in cpio (again nonessential, just useful, and enabled by default)
* SHADOW_PASSWORDS - enable shadow support for passwords (usually necessary without PAM)
* ENABLE_HNAMES - add an h- prefix to all main binaries so tools can be installed at the same time as their GNU, BSD, etc. equivalents (enabled by default)
* ENABLE_ILLUMOS - build certain tools from illumos (opensolaris fork) which have improved functionality but may be larger and less conformant to the classic Unix style (disabled by default, currently only affects grep build)
* ENABLE_EXTRAS - install extra shell scripts that simplify usage (off by default)
* ENABLE_PAM - enable Pluggable Authentication Modules (PAM) support in su (on by default, usually necessary on Linux systems)
* ETCDIR - where files intended for /etc, mostly configuration files and the like, should go (this shouldn't normally be changed unless you have a non-traditional setup lacking the ordinary /etc dir)
* USRSHAREDIR - where files intended for /usr/share, mostly public assets, should go (shouldn't normally be changed, see above)
* NEWSDIR - where news should be placed and read from by the news program (usually /var/news)
* TMPDIR - where temporary files should be stored by built programs (usually /var/tmp or /tmp)
* SPELLING - set to UK, US, or BOTH based on the target locale for the spell program. if you select BOTH, the executables `spell-uk` and `spell-us` will be built. any other value will cause spell to not be built at all (as should be done if not building for English-speaking audiences).

the repository also includes linux-x64 glibc/gcc binaries under the _INST folder, updated with each major commit, only some of which can be moved portably to other systems. it's better to install from source unless you only need utilities that don't depend on external files.

required to build:
* glibc (musl-libc support forthcoming)
* clang/clang++ or gcc (other C compilers may work but are untested)
* ninja or a cmake-compatible make implementation
* zlib and libbzip2 unless you turn those options off (see above)
* any modern curses implementation (only tested with nCurses but others should work with minor adjustments at most)

## licensing
the bulk of the project is licensed under the CDDL, when derived directly from OpenSolaris; the Caldera Unix license for components derived from Unix 7; or the BSD-like license used in Gunnar Ritter's original code. the cmake-based build system for the project, written in its entirety by chickazee4, is considered a separate component of the project and not inherently required to build the source code, so does not need to be licensed under the CDDL - the heirloom-ports build system (all the CMakeLists.txt files and changes in directory layout introduced by heirloom-ports, plus the extra shell scripts) is therefore licensed under the MIT license. all components have license notices included in their code if not made clear elsewhere in the project.

as the project is in early development i have not added & updated authorship notices and version numbers on all of the components. as an interim measure, assume that any components marked as solely authored by gunnar ritter or solely altered by gunnar ritter may have also been changed by me, chickazee4 (contact lyndsay@vivaldi.net), and should be treated as though they mention me as an author. they should also be advanced by 1 minor version number from the version included in the last heirloom project release (i.e. displayed as 1.20.0 but read as 1.20.1). permanent notices will be inserted in individual files ASAP but are not immediately plausible as i work on setting up project infrastructure.

keep in mind that the BSD man page for `ar`, included here, states that it is GNU ar, but it isn't. as far as i can tell, the BSD team just copied the GNU ar man page because the BSD version worked the same way. to be clear, nothing in the project is licensed under the GNU GPL except for FindPAM.cmake, though some libraries are licensed under the LGPL. 

## documented build errors & workarounds
problem: cpio and pax builds fail with clang
fix: build them with an alternative C compiler by setting the CMAKE_C_COMPILER variable locally in cpio/CMakeLists.txt or comment out the top-level add_subdirectory command in CMakeLists.txt (better fix pending)

problem: macOS build fails
fix: try building with gcc instead of appleclang. macOS is not currently supported and if this fails anyway there's nothing much you can do short of adding macOS functionality yourself and submitting a PR. 
