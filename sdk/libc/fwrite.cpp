// sdk/libc/fwrite.cpp -- reconstructed from NPEA00385 EBOOT
// STATUS: NOT STARTED (raw Ghidra output)
// 1 functions, 0x5c5638-0x5c58b0
#include <string.h>
#include "sdk/libc/fwrite.h"
#include "sdk/libc/xfwprep.h"
#include "sdk/xUnk.h"

// SDK libc.a(fwrite.o): fwrite  [fuzzy 1.000 match]
// 0x05c5638 (0x278 bytes)
ulonglong FUN_005c5638(void *param_1,uint param_2,ulonglong param_3,ushort *param_4)

{
  ushort uVar1;
  void *__dest;
  int iVar2;
  int iVar3;
  size_t sVar4;
  size_t sVar5;
  size_t __n;
  size_t __n_00;
  
  sVar4 = param_2 * (int)param_3;
  if (sVar4 == 0) {
    return 0;
  }
  if (param_2 == 0) {
    return param_3 & 0xffffffff;
  }
  FUN_005cbc38(param_4);
  sVar5 = sVar4;
  do {
    iVar2 = 0;
    if (*(uint *)(param_4 + 8) < *(uint *)(param_4 + 0xc)) {
      uVar1 = *param_4;
    }
    else {
      iVar3 = FUN_005c9998(param_4);
      if (iVar3 < 0) break;
      uVar1 = *param_4;
    }
    __n = sVar5;
    if ((uVar1 & 0x400) != 0) {
      iVar2 = FUN_005c5984(param_1,10,sVar5);
      if (iVar2 != 0) {
        __n = (iVar2 - (int)param_1) + 1;
      }
    }
    __dest = *(void **)(param_4 + 8);
    __n_00 = *(int *)(param_4 + 0xc) - (int)__dest;
    if (__n_00 < __n) {
      sVar5 = sVar5 - __n_00;
      memcpy(__dest,param_1,__n_00);
      *(size_t *)(param_4 + 8) = *(int *)(param_4 + 8) + __n_00;
      __n = __n_00;
    }
    else {
      memcpy(__dest,param_1,__n);
      sVar5 = sVar5 - __n;
      *(size_t *)(param_4 + 8) = *(int *)(param_4 + 8) + __n;
      if ((iVar2 != 0) && (iVar2 = FUN_005c50cc(param_4), iVar2 != 0)) break;
    }
    param_1 = (void *)((int)param_1 + __n);
  } while (sVar5 != 0);
  if ((*param_4 & 0x800) != 0) {
    FUN_005c50cc(param_4);
  }
  FUN_005cbbbc(param_4);
  return (ulonglong)(sVar4 - sVar5) / (ulonglong)param_2;
}


