// sdk/libc/puts.cpp -- reconstructed from NPEA00385 EBOOT
// STATUS: NOT STARTED (raw Ghidra output)
// 1 functions, 0x5c756c-0x5c7628
#include "sdk/libc/puts.h"
#include "sdk/xUnk.h"

// SDK libc.a(puts.o): puts  [fuzzy 1.000 match]
// 0x05c756c (0xbc bytes)
undefined4 FUN_005c756c(undefined4 param_1)

{
  undefined *puVar1;
  int iVar2;
  
  puVar1 = PTR_DAT_0071c278;
  FUN_005cbc38(PTR_DAT_0071c278);
  iVar2 = FUN_005d5a08(param_1,puVar1);
  if ((-1 < iVar2) && (iVar2 = FUN_005d5914(10,puVar1), -1 < iVar2)) {
    FUN_005cbbbc(puVar1);
    return 0;
  }
  FUN_005cbbbc(puVar1);
  return 0xffffffff;
}


