#!/bin/bash
# syntax-check files against the PS3 SDK headers (clang, 32-bit big-endian PowerPC layout)
# usage: ./check.sh game/water.cpp [more files...]      SDK=/path/to/cell (default below)
SDK=${SDK:-/home/claude/sdk400/cell}
cd "$(dirname "$0")"
for f in "$@"; do
  n=$(clang++ --target=powerpc64-unknown-lv2 -D__LP32__ -ffreestanding -nostdinc -fsyntax-only -ferror-limit=0 -w \
      -isystem $SDK/target/ppu/include -isystem $SDK/target/common/include -isystem $SDK/extra_include -isystem "$(clang -print-resource-dir)/include" \
      -D__PPU__ -D__CELLOS_LV2__ -I. "$f" 2>&1 | grep -c "error:")
  echo "$n	$f"
done
