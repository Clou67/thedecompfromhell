// sdk/libc/memset.cpp -- reconstructed from NPEA00385 EBOOT
// STATUS: NOT STARTED (raw Ghidra output)
// 1 functions, 0x5d0140-0x5d0214
#include <string.h>
#include "sdk/libc/memset.h"

// SDK libc.a(memset.o): memset  [fuzzy 1.000 match]
// 0x05d0140 (0xd4 bytes)
void memset(undefined8 *param_1,undefined1 param_2,uint param_3)

{
  undefined2 uVar1;
  undefined4 uVar2;
  undefined8 *puVar3;
  undefined2 *puVar4;
  undefined8 uVar5;
  int iVar6;
  undefined1 *puVar7;
  undefined4 *puVar8;
  int iVar9;
  
  puVar3 = (undefined8 *)((int)param_1 + param_3);
  if (7 < param_3) {
    *(undefined1 *)param_1 = param_2;
    puVar4 = (undefined2 *)((uint)((int)param_1 + 1) & 0xfffffffe);
    uVar1 = CONCAT11(param_2,param_2);
    puVar8 = (undefined4 *)((uint)(puVar4 + 1) & 0xfffffffc);
    *puVar4 = uVar1;
    uVar2 = CONCAT22(uVar1,uVar1);
    *puVar8 = uVar2;
    uVar5 = CONCAT44(uVar2,uVar2);
    for (param_1 = (undefined8 *)((uint)(puVar8 + 1) & 0xfffffff8);
        param_1 <= (undefined8 *)((uint)puVar3 & 0xfffffff8) + -8; param_1 = param_1 + 8) {
      param_1[7] = uVar5;
      param_1[6] = uVar5;
      param_1[5] = uVar5;
      param_1[4] = uVar5;
      param_1[3] = uVar5;
      param_1[2] = uVar5;
      param_1[1] = uVar5;
      *param_1 = uVar5;
    }
    for (; param_1 < (undefined8 *)((uint)puVar3 & 0xfffffff8); param_1 = param_1 + 1) {
      *param_1 = uVar5;
    }
  }
  if (puVar3 <= param_1) {
    return;
  }
  iVar6 = (int)puVar3 - (int)param_1;
  iVar9 = 0;
  do {
    puVar7 = (undefined1 *)((int)param_1 + iVar9);
    iVar9 = iVar9 + 1;
    *puVar7 = param_2;
    iVar6 = iVar6 + -1;
  } while (iVar6 != 0);
  return;
}


