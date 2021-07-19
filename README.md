# heirloom-ports

this is a continuation of the old [heirloom project](http://heirloom.sourceforge.net), which provided minimal non-GNU implementations of core unix tools like make, cp, tar, sed, etc. based on the opensolaris codebase. the majority of the project seems to have been abandoned circa 2007 so much of the code has trouble compiling against modern compilers and the build system is incredibly confusing. heirloom-ports intends to continue the project and streamline the software for modern implementations by fixing code issues and porting the entire project to the CMake build system, as opposed to the ancient makefiles it was using.

currently, the following software from the heirloom project has been ported:
* lex
* make (broken)
* m4
* sccs
* sh
* yacc

main binaries are built as `h+[name]` so that they can be installed coterminously with standard tools for testing purposes.

the heirloom documentation tools will *not* be supported, as they are still under active development at https://github.com/n-t-roff/heirloom-doctools/.

## building

currently there's not a way to build all the tools simultaneously, but i'll add this soon when more tools have been ported. for now simply cd into the directories and execute:

    mkdir build && cd build
    cmake ..
    make
    sudo make install

a few of the applications require extra options so make sure to check the "buildnotes" file, if it exists, before building.
