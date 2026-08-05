#!/bin/sh
if [ "${1}x" = "x" ]; then
	echo 'Please specify a name on first argument!' >&2
	exit 1
fi

exec > "$1.desktop"

echo '[Desktop Entry]'
echo 'Name=brinfo'
echo 'GenericName=Brother Printer Status Checker'
echo 'Comment=A status checker for Brother printers'
echo "Exec=$1"
echo "Icon=$1"
echo 'Type=Application'
echo 'Terminal=false'
echo 'StartupNotify=false'
echo 'Categories=Utility;'

exit 0
