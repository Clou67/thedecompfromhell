// sdk/libc/xfgpos.cpp -- reconstructed from NPEA00385 EBOOT
// STATUS: NOT STARTED (raw Ghidra output)
// 1 functions, 0x5c8bdc-0x5c8dcc
#include "sdk/libc/xfgpos.h"
#include "sdk/libc/asctime.h"
#include "sdk/libc/fs_posix_api.h"
#include "sdk/vUnk.h"

// SDK libc.a(xfgpos.o): _Fgpos  [fuzzy 1.000 match]
// 0x05c8bdc (0x1f0 bytes)
int FUN_005c8bdc(ushort *param_1,int *param_2)

{
  ushort uVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 *puVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  
  if ((param_1[0x32] & 1) == 0) {
    iVar3 = FUN_005cfb10(param_1[2],0,1);
  }
  else {
    iVar3 = FUN_005cfb10(param_1[2],(int)*(undefined8 *)(param_1 + 0x2c),1);
    param_1[0x2c] = 0;
    param_1[0x2d] = 0;
    param_1[0x2e] = 0;
    param_1[0x2f] = 0;
  }
  uVar1 = *param_1;
  if (((uVar1 & 3) != 0) && (iVar3 != -1)) {
    if ((uVar1 & 0x2000) == 0) {
      if ((uVar1 & 0x1000) != 0) {
        iVar5 = *(int *)(param_1 + 0x14);
        uVar2 = *(undefined4 *)(param_1 + 0xe);
        if (iVar5 == 0) {
          iVar5 = *(int *)(param_1 + 0x30);
        }
        iVar5 = FUN_005c8bc4(param_1,*(ulonglong *)(param_1 + 0x24) & 0xffffffff,iVar5);
        iVar6 = FUN_005c8bc4(param_1,uVar2,(int)param_1 + 0x43);
        iVar7 = FUN_005c8bc4(param_1,*(undefined4 *)(param_1 + 8),*(undefined4 *)(param_1 + 0x16));
        iVar3 = iVar3 - (iVar6 + iVar5 + iVar7);
      }
    }
    else {
      iVar5 = FUN_005c8bc4(param_1,*(undefined4 *)(param_1 + 4),*(undefined4 *)(param_1 + 8));
      iVar3 = iVar3 + iVar5;
    }
    if (param_2 != (int *)0x0) {
      *param_2 = iVar3;
      iVar3 = 0;
      param_2[1] = *(int *)(param_1 + 0x1a);
      *(ushort *)(param_2 + 2) = param_1[0x1c];
      *(ushort *)((int)param_2 + 10) = param_1[0x1d];
    }
    return iVar3;
  }
  puVar4 = (undefined4 *)FUN_005d5904();
  *puVar4 = 0x8001001e;
  return -1;
}


