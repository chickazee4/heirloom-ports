#!/bin/sh
while [ $# -gt 0 ]; do
	case "$1" in
	-fg | -bg | -fn | -geometry)
		XFl="$XFl $1 $2"
		shift ;;
	-*)
		Fl="$Fl $1" ;;
	*)
		break ;;
	esac
	shift
done
RC=$HOME/.exrc
echo $XFl | grep -q '\-geometry' || {
	[ -e $RC ] && grep -q '^set\{0,1\}[[:space:]]\{1,\}nu' $RC &&
	    XFl="$XFl -geometry 88"
}
xterm $XFl -T "vi $*" -e "vi $Fl $*" &
