#!/bin/sh
if [ ${YACC} == "" ]; then
    YACC="yacc"
fi
for x in $@; do
    ${YACC} $x
    rm -f rodata.c
    BASENAME=$(basename "${x}" -s .c)
    mv y.tab.c ${BASENAME}.c
    sed -i 's/y\.tab\.h/${BASENAME}.h/g' ${BASENAME}.c
    mv y.tab.h ${BASENAME}.h
done