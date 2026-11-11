// sdk/libc/vfscanf.cpp -- reconstructed from NPEA00385 EBOOT
// STATUS: NOT STARTED (raw Ghidra output)
// 2 functions, 0x5cd360-0x5cd444
#include <stdio.h>
#include "sdk/libc/vfscanf.h"
#include "sdk/xUnk.h"

// SDK libc.a(vfscanf.o): vfscanf  [fuzzy 1.000 match]
// 0x05cd360 (0x74 bytes)
int FUN_005cd360(undefined8 param_1,char *param_2,__gnuc_va_list param_3)

{
  int iVar1;
  
  FUN_005cbc38();
  iVar1 = vsnprintf(PTR_PTR_0071c3d4,(size_t)param_1,param_2,param_3);
  FUN_005cbbbc(param_1);
  return iVar1;
}


// 0x05cd3d4 (0x70 bytes)
uint FUN_005cd3d4(uint param_1,undefined8 param_2,uint param_3)

{
  uint uVar1;
  uint uVar2;
  
  uVar2 = FUN_005c5638(param_2,1,param_3,param_1);
  uVar1 = (int)(param_3 ^ uVar2) >> 0x1f;
  return param_1 & (int)(((uVar1 ^ param_3 ^ uVar2) - uVar1) + -1) >> 0x1f;
}


