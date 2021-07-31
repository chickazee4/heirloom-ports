#!/bin/sh
if [ -d $1 ]; then
    rm -r $1
    mkdir $1
elif [ -f $1 ]; then
    rm $1
    touch $1
else
    rm -f $1
fi