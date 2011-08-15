#!/bin/sh

function dll2lib()
{
	local filename=`basename $1 .dll`
	pexports $1 > ${filename}.def
	dlltool --input-def ${filename}.def --output-lib $2/lib${filename}.a
	rm ${filename}.def
}

files=( \
	"d3d9.dll" \
	"d3d10.dll" \
	"d3d10_1.dll" \
	"d3d11.dll" \
	"dinput.dll" \
	"dinput8.dll" \
	"dsound.dll" \
	"dmusic.dll" \
	"dxgi.dll" \
	"d2d1.dll" \
	"xaudio2_0.dll" \
	"xaudio2_1.dll" \
	"xaudio2_2.dll" \
	"xaudio2_3.dll" \
	"xaudio2_4.dll" \
	"xaudio2_5.dll" \
	"xaudio2_6.dll" \
	"xaudio2_7.dll" \
	"dwrite.dll"
)

if [ ! \( -d ./64 \) ]; then
	mkdir 64
fi

for n in ${files[@]}
do
	filepath=/c/Windows/system32/${n}
	dll2lib $filepath 64
done

for n in /c/Windows/system32/d?dx*_*.dll
do
	dll2lib $n 64
done

if [ ! \( -d ./32 \) ]; then
	mkdir 32
fi

for n in ${files[@]}
do
	filepath=/c/Windows/SysWOW64/${n}
	dll2lib $filepath 32
done

for n in /c/Windows/SysWOW64/d?dx*_*.dll
do
	dll2lib $n 32
done
