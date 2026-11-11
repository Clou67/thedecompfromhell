// sdk/libc/xfoprep.cpp -- reconstructed from NPEA00385 EBOOT
// STATUS: NOT STARTED (raw Ghidra output)
// 2 functions, 0x5c8e64-0x5c91f4
#include <string.h>
#include "sdk/libc/xfoprep.h"
#include "sdk/libc/asctime.h"
#include "sdk/libc/xfopen.h"
#include "sdk/libc/xlv2mtx.h"
#include "sdk/mUnk3.h"

// SDK libc.a(xfoprep.o): _filep_close_it  [fuzzy 1.000 match]
// 0x05c8e64 (0xe8 bytes)
void FUN_005c8e64(ushort *param_1)

{
  ushort *puVar1;
  ushort *puVar2;
  uint uVar3;
  
  if ((*param_1 & 0x80) == 0) {
    *param_1 = 0;
    uVar3 = (int)param_1 + 0x43;
    param_1[2] = 0xffff;
    param_1[0x32] = 0;
    *(ushort **)(param_1 + 0x10) = param_1 + 0x14;
    *(ulonglong *)(param_1 + 0x24) = (ulonglong)uVar3;
    *(uint *)(param_1 + 0x30) = uVar3;
    *(uint *)(param_1 + 4) = uVar3;
    *(uint *)(param_1 + 8) = uVar3;
    *(uint *)(param_1 + 10) = uVar3;
    *(uint *)(param_1 + 0x16) = uVar3;
    *(uint *)(param_1 + 0xc) = uVar3;
    *(uint *)(param_1 + 0x18) = uVar3;
    *(uint *)(param_1 + 0xe) = uVar3;
    param_1[0x28] = 0;
    param_1[0x29] = 0;
    param_1[0x2a] = 0;
    param_1[0x2b] = 0;
    param_1[0x2c] = 0;
    param_1[0x2d] = 0;
    param_1[0x2e] = 0;
    param_1[0x2f] = 0;
    return;
  }
  puVar1 = *(ushort **)PTR_DAT_0071c294;
  if (puVar1 != (ushort *)0x0) {
    if (param_1 == puVar1) {
      *(undefined4 *)PTR_DAT_0071c294 = *(undefined4 *)(param_1 + 0x1e);
    }
    else {
      do {
        puVar2 = puVar1;
        puVar1 = *(ushort **)(puVar2 + 0x1e);
        if (puVar1 == (ushort *)0x0) goto LAB_005c8eb8;
      } while (param_1 != puVar1);
      *(undefined4 *)(puVar2 + 0x1e) = *(undefined4 *)(param_1 + 0x1e);
    }
  }
LAB_005c8eb8:
  FUN_005d580c(param_1);
  return;
}


// SDK libc.a(xfoprep.o): _Foprep  [fuzzy 1.000 match]
// 0x05c8f4c (0x2a8 bytes)
ushort * FUN_005c8f4c(int param_1,char *param_2,ushort *param_3,ushort param_4)

{
  undefined1 uVar1;
  char cVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  ushort uVar7;
  int iVar5;
  undefined4 *puVar6;
  uint uVar8;
  ushort *puVar9;
  
  if (param_3 == (ushort *)0x0) {
    return (ushort *)0x0;
  }
  uVar1 = *(undefined1 *)(param_3 + 1);
  uVar3 = *(undefined4 *)(param_3 + 0x1e);
  uVar4 = *(undefined4 *)(param_3 + 0x22);
  uVar7 = *param_3;
  memcpy(param_3,PTR_DAT_0071c298,0x68);
  uVar8 = (int)param_3 + 0x43;
  param_3[0x32] = 0;
  param_3[0x28] = 0;
  param_3[0x29] = 0;
  param_3[0x2a] = 0;
  param_3[0x2b] = 0;
  param_3[0x2c] = 0;
  param_3[0x2d] = 0;
  param_3[0x2e] = 0;
  param_3[0x2f] = 0;
  *(undefined1 *)(param_3 + 1) = uVar1;
  *(undefined4 *)(param_3 + 0x1e) = uVar3;
  *(undefined4 *)(param_3 + 0x22) = uVar4;
  *(ushort **)(param_3 + 0x10) = param_3 + 0x14;
  *(ulonglong *)(param_3 + 0x24) = (ulonglong)uVar8;
  *(uint *)(param_3 + 0x30) = uVar8;
  *(uint *)(param_3 + 4) = uVar8;
  *(uint *)(param_3 + 8) = uVar8;
  *(uint *)(param_3 + 10) = uVar8;
  *(uint *)(param_3 + 0x16) = uVar8;
  *(uint *)(param_3 + 0xc) = uVar8;
  *(uint *)(param_3 + 0x18) = uVar8;
  *(uint *)(param_3 + 0xe) = uVar8;
  cVar2 = *param_2;
  uVar8 = 1;
  if ((cVar2 != 'r') && (uVar8 = 0x1a, cVar2 != 'w')) {
    uVar8 = -(((int)cVar2 == 0x61)) & 0x16;
  }
  *param_3 = uVar7 & 0x80 | (ushort)uVar8;
  if ((uVar8 & 3) == 0) {
    FUN_005c4f10(param_3);
    puVar6 = (undefined4 *)FUN_005d5904();
    *puVar6 = 0x80010002;
    return (ushort *)0x0;
  }
  param_2 = param_2 + 1;
  cVar2 = *param_2;
  if (cVar2 == 'b') goto LAB_005c90a0;
  while ((cVar2 == '+' && (uVar7 = *param_3 | 3, (*param_3 & 3) != 3))) {
    while( true ) {
      *param_3 = uVar7;
      param_2 = param_2 + 1;
      cVar2 = *param_2;
      if (cVar2 != 'b') break;
LAB_005c90a0:
      uVar7 = *param_3 | 0x20;
      if ((*param_3 & 0x20) != 0) goto LAB_005c90b4;
    }
  }
LAB_005c90b4:
  if (param_1 == 0) {
    if ((short)param_4 < 0) goto LAB_005c91c0;
    param_3[2] = param_4;
  }
  else {
    uVar7 = FUN_005d68b0(param_1,*param_3,param_2);
    param_3[2] = uVar7;
    if ((short)uVar7 < 0) {
LAB_005c91c0:
      FUN_005c8e64(param_3);
      return (ushort *)0x0;
    }
  }
  puVar9 = param_3;
  if ((*param_3 & 0x80) != 0) {
    iVar5 = FUN_005d5838(0x28);
    *(int *)(param_3 + 0x22) = iVar5;
    if (iVar5 != 0) {
      FUN_005d04b0(iVar5);
      return param_3;
    }
    puVar9 = (ushort *)0x0;
    FUN_005c8e64(param_3);
    puVar6 = (undefined4 *)FUN_005d5904();
    *puVar6 = 0x80010004;
  }
  return puVar9;
}


