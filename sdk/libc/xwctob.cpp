// sdk/libc/xwctob.cpp -- reconstructed from NPEA00385 EBOOT
// STATUS: NOT STARTED (raw Ghidra output)
// 1 functions, 0x5cc0d8-0x5cc13c
#include "sdk/libc/xwctob.h"
#include "sdk/libc/xwctomb.h"

// SDK libc.a(xwctob.o): _Wctob  [fuzzy 1.000 match]
// 0x05cc0d8 (0x64 bytes)
uint FUN_005cc0d8(uint param_1)

{
  int iVar1;
  byte local_10 [4];
  GPiece<12> local_c;
  
  if ((param_1 != 0xffffffff) &&
     (iVar1 = FUN_005cc418(local_10,param_1 & 0xffff,local_c), iVar1 == 1)) {
    return (uint)local_10[0];
  }
  return 0xffffffff;
}


