# heirloom-ports

this is a continuation of the old [heirloom project](http://heirloom.sourceforge.net), which provided minimal non-GNU implementations of core unix tools like make, cp, tar, sed, etc. based on the opensolaris codebase. the majority of the project seems to have been abandoned circa 2007 so much of the code has trouble compiling against modern compilers and the build system is incredibly confusing. heirloom-ports intends to continue the project and streamline the software for modern implementations by fixing code issues and porting the entire project to the CMake build system, as opposed to the ancient makefiles it was using. 

currently, the following software from the heirloom project has been ported:
* cat
* chmod
* chown
* cp/ln/mv
* dd
* diff* (build failing)
* diff3
* du
* echo* (Unix 7)
* ed
* ex/vi/wvi (program failing)
* grep/fgrep/egrep* (4.4BSD/illumos (egrep illumos only))
* kill
* lex
* libcommon (we are now dynamically linking this since it is used in so many of the programs and have thus renamed it to `libheirloom` to avoid conflicts)
* libuxre
* libwchar
* m4
* make (build succeeds but program fails)
* mkdir
* more
* nice
* ps
* pwd
* sccs
* sed
* sh
* sleep
* su
* tar
* tee
* what
* yacc

\* indicates the program has been re-ported from Unix 7 due to issues introduced by the original heirloom project or by its predecessors. these programs will usually have less functionality than is provided by the heirloom project or modern gnu implementations, but re-extending them in a more modern way is on the agenda. the following classic unix programs which were not in the original heirloom project, but are useful as core utilities, have also been ported:

* ar - library archiver utility (4.4BSD)

the following are also slated for inclusion and currently in the process of being ported (the porting process takes longer for these since they were not at any point maintained by heirloom and have more issues and incompatibilities):

* ld - linker (OpenSolaris)
* libavl - binary tree library (OpenSolaris via Illumos)
* lint - C linter (4.3BSD)

the following new shell scripts which easily combine the functions of other utilities or which simplify their usage are also optionally included if you build with the -DENABLE_EXTRAS flag (more to come):

* dt (ls+cat) - if the input is a directory, print the filenames in the directory; if the input is a file, print the contents of the file. useful for navigation in the shell
* mktgz (easier shorthand for tar -czf) - create a tar.gz file
* rnr (rm+mkcd+touch) - remove a directory or file and regenerate it (recreates the directory with no entries or creates a new empty file of the same filename)
* yy (yacc+mv) - process a yacc file and clean up the output by moving the y.tab.c and y.tab.h files to the original filename and removing rodata.c

the heirloom documentation tools included here have descended from the original heirloom doctools but also passed through active development at https://github.com/n-t-roff/heirloom-doctools.

## building

    $ mkdir build && cd build
    $ cmake ..
    $ make
    # make install

additional CMake options:
* TAR_ENABLE_ZLIB - enable or disable ZLib support in heirloom tar (not essential, but useful, enabled by default)
* TAR_ENABLE_BZ2 - enable or disable BZip2 library support in heirloom tar (again nonessential, just useful, and enabled by default)
* SHADOW_PASSWORDS - enable shadow support for passwords (necessary on most modern systems, enabled by default)
* ENABLE_HNAMES - add an h- prefix to all main binaries so tools can be installed at the same time as their GNU, BSD, etc. equivalents (enabled by default)
* ENABLE_ILLUMOS - build certain tools from illumos (opensolaris fork) which have improved functionality but may be larger and less conformant to the classic Unix style (disabled by default, currently only affects grep build)
* ENABLE_EXTRAS - install extra shell scripts that simplify usage
* ETCDIR - where files intended for /etc, mostly configuration files and the like, should go (this shouldn't normally be changed unless you have a non-traditional setup lacking the ordinary /etc dir)
* USRSHAREDIR - where files intended for /usr/share, mostly public assets, should go (shouldn't normally be changed, see above)

the repository also includes linux-x64 glibc/gcc binaries under the _INST folder, which are not guaranteed to work on every system.

required to build:
* glibc (musl-libc support forthcoming)
* clang/clang++ or gcc (other C compilers may work but are untested)
* ninja or a cmake-compatible make implementation
* zlib and libbzip2 unless you turn those options off (see above)

## licensing
the bulk of the project is licensed under the non-permissive free software (in a verrrry loose sense) CDDL, when derived directly from OpenSolaris; the Caldera Unix license (for components derived from Unix 7); or the BSD-like license used in Gunnar Ritter's original code. the cmake-based build system for the project, written in its entirety by chickazee4, is considered a separate component of the project and not inherently required to build the source code, so does not need to be licensed under the CDDL - the heirloom-ports build system (all the CMakeLists.txt files and changes in directory layout introduced by heirloom-ports, plus the extras) is therefore licensed under the MIT license. all components have license notices included in their code if not made clear elsewhere in the project.

as the project is in early development i have not added & updated authorship notices and version numbers on all of the components. as an interim measure, assume that any components marked as solely authored by gunnar ritter or solely altered by gunnar ritter may have also been changed by me, chickazee4 (contact lyndsay@vivaldi.net), and should be treated as though they mention me as an author. they should also be advanced by 1 minor version number (i.e. displayed as 1.20.0 but read as 1.20.1). permanent notices will be inserted in individual files ASAP but are not immediately plausible as i work on setting up project infrastructure.