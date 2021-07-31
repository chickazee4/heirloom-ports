#!/bin/sh
if [ $1 == "-h" ]; then
    echo "usage: mktgz [OUTPUT_TARBALL] [INPUT_FILES]..."
else 
    tar czf $1 $@
fi