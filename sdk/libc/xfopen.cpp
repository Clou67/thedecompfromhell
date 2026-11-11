// sdk/libc/xfopen.cpp -- reconstructed from NPEA00385 EBOOT
// STATUS: NOT STARTED (raw Ghidra output)
// 2 functions, 0x5d68b0-0x5d698c
#include "sdk/libc/xfopen.h"
#include "sdk/libc/fs_posix_api.h"

// SDK libc.a(xfopen.o): _Fopen  [fuzzy 1.000 match]
// 0x05d68b0 (0x70 bytes)
undefined2 FUN_005d68b0(undefined4 param_1,uint param_2)

{
  undefined2 uVar1;
  uint uVar2;
  
  uVar2 = *(uint *)(PTR_DAT_0071c508 + (param_2 & 3) * 4);
  if ((param_2 & 4) != 0) {
    uVar2 = uVar2 | 0x400;
  }
  if ((param_2 & 8) != 0) {
    uVar2 = uVar2 | 0x200;
  }
  if ((param_2 & 0x10) != 0) {
    uVar2 = uVar2 | 0x40;
  }
  uVar1 = FUN_005cf5b8(param_1,uVar2,0x1b6);
  return uVar1;
}


// 0x05d6920 (0x6c bytes)
undefined8 FUN_005d6920(int param_1)

{
  undefined8 uVar1;
  
  *(undefined1 *)(param_1 + 0x1e) = 0;
  if ((byte)(**(char **)(param_1 + 0xc) - 0x25U) < 0x54) {
                    /* WARNING: Could not recover jumptable at 0x005d696c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar1 = (*(code *)(PTR_DAT_0071c50c +
                      *(int *)(PTR_DAT_0071c50c +
                              (uint)(byte)(**(char **)(param_1 + 0xc) - 0x25) * 4)))();
    return uVar1;
  }
  return 0;
}


