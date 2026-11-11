// sdk/libc/sscanf.cpp -- reconstructed from NPEA00385 EBOOT
// STATUS: NOT STARTED (raw Ghidra output)
// 2 functions, 0x5c8440-0x5c84e4
#include "sdk/libc/sscanf.h"
#include "sdk/lUnk.h"
#include "sdk/libc/xscanf.h"

// SDK libc.a(sscanf.o): scin  [fuzzy 1.000 match]
// 0x05c8440 (0x40 bytes)
uint FUN_005c8440(undefined4 *param_1,uint param_2,int param_3)

{
  byte *pbVar1;
  
  pbVar1 = (byte *)*param_1;
  if (param_3 == 0) {
    *param_1 = pbVar1 + -1;
  }
  else {
    param_2 = 0xffffffff;
    if (*pbVar1 != 0) {
      *param_1 = pbVar1 + 1;
      param_2 = (uint)*pbVar1;
    }
  }
  return param_2;
}


// SDK libc.a(sscanf.o): sscanf  [fuzzy 1.000 match]
// 0x05c8480 (0x64 bytes)
undefined4
FUN_005c8480(undefined4 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
            undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  undefined4 uVar1;
  undefined4 uStack00000030;
  undefined8 uStack00000040;
  undefined8 uStack00000048;
  undefined8 uStack00000050;
  undefined8 uStack00000058;
  undefined8 uStack00000060;
  undefined8 uStack00000068;
  
  uStack00000030 = param_1;
  uStack00000040 = param_3;
  uStack00000048 = param_4;
  uStack00000050 = param_5;
  uStack00000058 = param_6;
  uStack00000060 = param_7;
  uStack00000068 = param_8;
  uVar1 = FUN_005c9b38(PTR_PTR_0071c27c,&stack0x00000030,param_2,&stack0x00000040);
  return uVar1;
}


