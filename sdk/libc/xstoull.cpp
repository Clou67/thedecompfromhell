// sdk/libc/xstoull.cpp -- reconstructed from NPEA00385 EBOOT
// STATUS: NOT STARTED (raw Ghidra output)
// 2 functions, 0x5da754-0x5daab0
#include "sdk/libc/xstoull.h"
#include "sdk/libc/asctime.h"

// SDK libc.a(xstoull.o): _Stoullx  [fuzzy 1.000 match]
// 0x05da754 (0x354 bytes)
// strings: 006615b0: '0123456789abcdefghijklmnopqrstuvwxyz'

ulonglong FUN_005da754(byte *param_1,undefined4 *param_2,int param_3,undefined4 *param_4)

{
  byte bVar1;
  undefined *puVar2;
  undefined *puVar3;
  ulonglong uVar4;
  int iVar5;
  undefined4 *puVar6;
  uint uVar7;
  int iVar8;
  ulonglong uVar9;
  byte *pbVar10;
  ulonglong uVar11;
  int iVar12;
  byte bVar13;
  byte *pbVar14;
  byte *pbVar15;
  byte in_cr0;
  byte in_cr1;
  byte in_cr2;
  byte in_cr3;
  byte unaff_cr4;
  byte in_cr5;
  byte in_cr6;
  byte in_cr7;
  uint uStack00000008;
  
  uStack00000008 =
       (uint)(in_cr0 & 0xf) << 0x1c | (uint)(in_cr1 & 0xf) << 0x18 | (uint)(in_cr2 & 0xf) << 0x14 |
       (uint)(in_cr3 & 0xf) << 0x10 | (uint)(unaff_cr4 & 0xf) << 0xc | (uint)(in_cr5 & 0xf) << 8 |
       (uint)(in_cr6 & 0xf) << 4 | (uint)(in_cr7 & 0xf);
  if (param_4 != (undefined4 *)0x0) {
    *param_4 = 0;
  }
  puVar3 = PTR_s_0123456789abcdefghijklmnopqrstuv_0071c588;
  puVar2 = PTR_PTR_0071c584;
  bVar13 = *param_1;
  pbVar14 = param_1;
  while ((*(ushort *)((uint)bVar13 * 2 + *(int *)PTR_PTR_0071c584) & 0x144) != 0) {
    pbVar14 = pbVar14 + 1;
    bVar13 = *pbVar14;
  }
  if ((bVar13 == 0x2d) || (bVar13 == 0x2b)) {
    pbVar14 = pbVar14 + 1;
  }
  else {
    bVar13 = 0x2b;
  }
  if (((param_3 < 0) || (param_3 == 1)) || (0x24 < param_3)) goto LAB_005da844;
  pbVar10 = pbVar14;
  if (param_3 < 1) {
    param_3 = 10;
    iVar8 = 10;
    if (*pbVar14 == 0x30) {
      if ((pbVar14[1] != 0x78) && (param_3 = 8, pbVar14[1] != 0x58)) goto LAB_005da8e4;
      pbVar14 = pbVar14 + 2;
      param_3 = 0x10;
      goto LAB_005da8c4;
    }
  }
  else {
    if (param_3 == 0x10) {
      iVar8 = 0x10;
      if (*pbVar14 != 0x30) goto LAB_005da908;
      if ((pbVar14[1] != 0x78) && (pbVar14[1] != 0x58)) goto LAB_005da8e4;
      pbVar14 = pbVar14 + 2;
    }
LAB_005da8c4:
    bVar1 = *pbVar14;
    pbVar10 = pbVar14;
    while (iVar8 = param_3, bVar1 == 0x30) {
LAB_005da8e4:
      pbVar14 = pbVar14 + 1;
      bVar1 = *pbVar14;
    }
  }
LAB_005da908:
  iVar12 = 0;
  uVar9 = 0;
  uVar11 = 0;
  pbVar15 = pbVar14;
  while( true ) {
    bVar1 = *pbVar15;
    uVar7 = (uint)bVar1;
    if ((*(ushort *)((uint)bVar1 * 2 + *(int *)puVar2) & 2) != 0) {
      uVar7 = bVar1 + 0x20;
    }
    iVar5 = FUN_005c5984(puVar3,uVar7,iVar8);
    if (iVar5 == 0) break;
    iVar12 = iVar5 - (int)puVar3;
    pbVar15 = pbVar15 + 1;
    uVar9 = uVar11;
    uVar11 = uVar11 * (longlong)param_3 + (longlong)(char)iVar12;
  }
  if (pbVar15 != pbVar10) {
    if (((int)(pbVar15 + (-(int)(char)puVar3[param_3 + 0x28] - (int)pbVar14)) < 0) ||
       ((((int)(pbVar15 + (-(int)(char)puVar3[param_3 + 0x28] - (int)pbVar14)) < 1 &&
         (uVar4 = uVar11 - (longlong)(char)iVar12, uVar4 <= uVar11)) &&
        (uVar4 / (ulonglong)(longlong)param_3 == uVar9)))) {
      if (bVar13 == 0x2d) {
        uVar11 = -uVar11;
      }
    }
    else {
      puVar6 = (undefined4 *)FUN_005d5904();
      *puVar6 = 0x8001001c;
      if (param_4 == (undefined4 *)0x0) {
        uVar11 = 0xffffffffffffffff;
      }
      else {
        uVar11 = 0xffffffffffffffff;
        *param_4 = 1;
      }
    }
    if (param_2 == (undefined4 *)0x0) {
      return uVar11;
    }
    *param_2 = pbVar15;
    return uVar11;
  }
LAB_005da844:
  if (param_2 != (undefined4 *)0x0) {
    *param_2 = param_1;
  }
  return 0;
}


// 0x05daaa8 (0x8 bytes)
void FUN_005daaa8(void)

{
  FUN_005da754();
  return;
}


