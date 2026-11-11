// sdk/libc/vscanf.cpp -- reconstructed from NPEA00385 EBOOT
// STATUS: NOT STARTED (raw Ghidra output)
// 2 functions, 0x5cd444-0x5cd52c
#include <stdio.h>
#include "sdk/libc/vscanf.h"
#include "sdk/libc/vfscanf.h"
#include "sdk/xUnk.h"

// SDK libc.a(vscanf.o): vscanf  [fuzzy 1.000 match]
// 0x05cd444 (0x78 bytes)
int FUN_005cd444(char *param_1,__gnuc_va_list param_2)

{
  undefined *__maxlen;
  int iVar1;
  
  __maxlen = PTR_DAT_0071c3d8;
  FUN_005cbc38(PTR_DAT_0071c3d8);
  iVar1 = vsnprintf(PTR_PTR_0071c3dc,(size_t)__maxlen,param_1,param_2);
  FUN_005cbbbc(__maxlen);
  return iVar1;
}


// 0x05cd4bc (0x70 bytes)
uint FUN_005cd4bc(uint param_1,undefined8 param_2,uint param_3)

{
  uint uVar1;
  uint uVar2;
  
  uVar2 = FUN_005c5638(param_2,1,param_3,param_1);
  uVar1 = (int)(param_3 ^ uVar2) >> 0x1f;
  return param_1 & (int)(((uVar1 ^ param_3 ^ uVar2) - uVar1) + -1) >> 0x1f;
}


