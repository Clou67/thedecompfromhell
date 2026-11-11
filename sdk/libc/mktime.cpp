// sdk/libc/mktime.cpp -- reconstructed from NPEA00385 EBOOT
// STATUS: NOT STARTED (raw Ghidra output)
// 1 functions, 0x5c7368-0x5c756c
#include "sdk/libc/mktime.h"
#include "sdk/libc/xttotm.h"

// SDK libc.a(mktime.o): mktime  [fuzzy 1.000 match]
// 0x05c7368 (0x204 bytes)
longlong FUN_005c7368(int *param_1)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  int iVar4;
  int local_30;
  int local_2c [5];
  
  syscall_syscall_00000000(&local_30,local_2c);
  lVar3 = (longlong)(param_1[4] / 0xc);
  lVar2 = (longlong)param_1[4] + lVar3 * -0xc;
  if (lVar2 < 0) {
    lVar2 = lVar2 + 0xc;
    lVar3 = lVar3 + -1;
  }
  if (lVar3 < 0) {
    iVar4 = param_1[5];
    if ((longlong)iVar4 < -0x80000000 - lVar3) {
      return -1;
    }
  }
  else if (lVar3 == 0) {
    iVar4 = param_1[5];
  }
  else {
    iVar4 = param_1[5];
    if (0x7fffffff - lVar3 < (longlong)iVar4) {
      return -1;
    }
  }
  iVar1 = FUN_005cbdbc((int)(lVar3 + iVar4),(int)lVar2);
  lVar2 = (lVar3 + iVar4) * 0x1e13380 + -0x15180 +
          (longlong)iVar1 * 0x15180 + (longlong)(param_1[3] * 0x15180) +
          (longlong)(param_1[1] * 0x3c + param_1[2] * 0xe10 + *param_1);
  if (lVar2 < 0) {
    return -1;
  }
  lVar2 = lVar2 + -0x83aa7e80;
  FUN_005cbe4c(param_1,lVar2,param_1[8]);
  return (lVar2 - local_2c[0] * 0x3c) - (longlong)(local_30 * 0x3c);
}


