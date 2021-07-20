# heirloom-ports

this is a continuation of the old [http://heirloom.sourceforge.net](heirloom project), which provided minimal non-GNU implementations of core unix tools like make, cp, tar, sed, etc. based on the opensolaris codebase. the majority of the project seems to have been abandoned circa 2007 so much of the code has trouble compiling against modern compilers and the build system is incredibly confusing. heirloom-ports intends to continue the project and streamline the software for modern implementations by fixing code issues and porting the entire project to the CMake build system, as opposed to the ancient makefiles it was using.

currently, the following software from the heirloom project has been ported:
* cat
* cp/ln/mv
* lex
* libcommon
* m4
* make (broken)
* more
* sccs
* sh
* yacc

main binaries are built as `h+[name]` so that they can be installed coterminously with standard tools for testing purposes.

the heirloom documentation tools will *not* be supported, as they are still under active development at https://github.com/n-t-roff/heirloom-doctools/.

## building

    mkdir build && cd build
    cmake ..
    make
    sudo make install

## licensing
the bulk of the project is licensed under the non-permissive free software (in a verrrry loose sense) CDDL, as it is derived from OpenSolaris source code. the cmake-based build system for the project is licensed under the LGPL and other components with different licensing have the license file included where appropriate.
