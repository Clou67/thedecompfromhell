// sdk/libc/fputc.cpp -- reconstructed from NPEA00385 EBOOT
// STATUS: NOT STARTED (raw Ghidra output)
// 1 functions, 0x5d5914-0x5d5a08
#include "sdk/libc/fputc.h"
#include "sdk/libc/xfwprep.h"
#include "sdk/xUnk.h"

// SDK libc.a(fputc.o): fputc  [fuzzy 1.000 match]
// 0x05d5914 (0xf4 bytes)
uint FUN_005d5914(byte param_1,ushort *param_2)

{
  int iVar1;
  uint uVar2;
  byte *pbVar3;
  
  FUN_005cbc38(param_2);
  pbVar3 = *(byte **)(param_2 + 8);
  if (pbVar3 < *(byte **)(param_2 + 0xc)) {
LAB_005d5954:
    *pbVar3 = param_1;
    *(byte **)(param_2 + 8) = pbVar3 + 1;
    if (((*param_2 & 0x800) != 0) || (((*param_2 & 0x400) != 0 && (param_1 == 10)))) {
      iVar1 = FUN_005c50cc(param_2);
      if (iVar1 != 0) goto LAB_005d59d8;
    }
    uVar2 = (uint)param_1;
    FUN_005cbbbc(param_2);
  }
  else {
    iVar1 = FUN_005c9998(param_2);
    if (-1 < iVar1) {
      pbVar3 = *(byte **)(param_2 + 8);
      goto LAB_005d5954;
    }
LAB_005d59d8:
    FUN_005cbbbc(param_2);
    uVar2 = 0xffffffff;
  }
  return uVar2;
}


