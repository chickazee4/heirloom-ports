#!/bin/sh
for x in $@; do
    if [ -f $x ]; then
        cat $x
    else
        ls $x
    fi
done