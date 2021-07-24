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
* echo*
* ed
* grep/egrep/fgrep*
* kill
* lex
* libcommon
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

\* indicates the program has been re-ported from Unix 7 due to significant issues introduced by the original heirloom project. these programs will usually have less functionality than is provided by the heirloom project or modern gnu implementations, but re-extending them in a more modern way is on the agenda.

main binaries are built as `h+[name]` so that they can be installed coterminously with standard tools for testing purposes.

the heirloom documentation tools will *not* be supported, as they are still under active development at https://github.com/n-t-roff/heirloom-doctools. i also will be packaging the heirloom pkgtools separately since they are technically not really a unix component in the same sense as the applications included here. also, some components are not high priorities to be ported because they're redundant:

* calendar
* copy
* mvdir
* rmdir


## building

    mkdir build && cd build
    cmake ..
    make

currently no install function is present, but it will be added when the project is more complete!

additional CMake options:
* TAR_ENABLE_ZLIB - enable or disable ZLib support in heirloom tar (not essential, but useful, enabled by default)
* TAR_ENABLE_BZ2 - enable or disable BZip2 library support in heirloom tar (again nonessential, just useful, and enabled by default)

required to build:
* glibc (musl-libc support forthcoming)
* clang/clang++ or gcc (other C compilers may work but are untested)
* ninja or a cmake-compatible make implementation
* zlib and libbzip2 unless you turn those options off (see above)

## licensing
the bulk of the project is licensed under the non-permissive free software (in a verrrry loose sense) CDDL, when derived directly from OpenSolaris; the Caldera Unix license (for components derived from Unix 7); or the BSD-like license used in Gunnar Ritter's original code. the cmake-based build system for the project, written in its entirety by chickazee4, is considered a separate component of the project and not inherently required to build the source code, so does not need to be licensed under the CDDL - the heirloom-ports build system (all the CMakeLists.txt files and changes in directory layout introduced by heirloom-ports) is therefore licensed under the MIT license. all components have license notices included in their code if not made clear elsewhere in the project.

as the project is in early development i have not added & updated authorship notices and version numbers on all of the components. as an interim measure, assume that any components marked as solely authored by gunnar ritter or solely altered by gunnar ritter may have also been changed by me, chickazee4 (contact lyndsay@vivaldi.net), and should be treated as though they mention me as an author. they should also be advanced by 1 minor version number (i.e. displayed as 1.20.0 but read as 1.20.1). permanent notices will be inserted in individual files ASAP but are not immediately plausible as i work on setting up project infrastructure.