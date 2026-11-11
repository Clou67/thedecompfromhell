#!/bin/bash
# fine-grained chunks; skips ranges already covered by a finished 0x40000 chunk
cd "$(dirname "$0")"
# needs the gq query server on the Ghidra project; writes data/dump/*.c
for s in $(seq $((0x10000)) $((0x10000)) $((0x650000))); do
  big=$(( s & ~0x3ffff ))
  [ -s data/dump/$(printf %07x $big).c ] && continue
  f=data/dump/s$(printf %07x $s).c
  [ -s $f ] && continue
  timeout 850 ${GQ:-gq} dumprange $(printf 0x%x $s) $(printf 0x%x $((s+0x10000))) $f.tmp && mv $f.tmp $f || echo FAIL $(printf %x $s)
done
echo DONE
