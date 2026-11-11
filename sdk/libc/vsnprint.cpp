// sdk/libc/vsnprint.cpp -- reconstructed from NPEA00385 EBOOT
// STATUS: NOT STARTED (raw Ghidra output)
// 4 functions, 0x5c8a94-0x5c8bc4
#include <stdio.h>
#include <string.h>
#include "sdk/libc/vsnprint.h"
#include "game/crt0.h"
#include "sdk/libc/vfscanf.h"

// SDK libc.a(vsnprint.o): vsnprintf  [fuzzy 1.000 match]
// 0x05c8a94 (0x70 bytes)
int FUN_005c8a94(undefined1 *param_1,int param_2,char *param_3,__gnuc_va_list param_4)

{
  int iVar1;
  undefined1 *local_10;
  int local_c;
  
  local_c = param_2 + -1;
  local_10 = param_1;
  if (param_2 == 0) {
    local_c = 0;
    local_10 = (undefined1 *)0x0;
  }
  iVar1 = vsnprintf(PTR_PTR_0071c288,(size_t)&local_10,param_3,param_4);
  if (local_10 != (undefined1 *)0x0) {
    *local_10 = 0;
  }
  return iVar1;
}


// 0x05c8b04 (0x84 bytes)
int * FUN_005c8b04(int *param_1,void *param_2,uint param_3)

{
  uint __n;
  
  __n = param_1[1];
  if (param_3 < (uint)param_1[1]) {
    __n = param_3;
  }
  if (__n != 0) {
    memcpy((void *)*param_1,param_2,__n);
    *param_1 = *param_1 + __n;
    param_1[1] = param_1[1] - __n;
  }
  return param_1;
}


// 0x05c8b88 (0xc bytes)
undefined4 FUN_005c8b88(void)

{
  return *(undefined4 *)PTR_PTR_0071c28c;
}


// 0x05c8b94 (0x30 bytes)
int FUN_005c8b94(int param_1,undefined8 param_2,uint param_3)

{
  int iVar1;
  ulonglong uVar2;
  
  uVar2 = 0;
  syscall_syscall_988(1);
  _exit(param_1);
  iVar1 = 0;
  if ((uVar2 & 0xffffffff) < (ulonglong)param_3) {
    iVar1 = param_3 - (int)uVar2;
  }
  return iVar1;
}


