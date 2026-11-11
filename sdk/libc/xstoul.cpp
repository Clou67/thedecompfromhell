// sdk/libc/xstoul.cpp -- reconstructed from NPEA00385 EBOOT
// STATUS: NOT STARTED (raw Ghidra output)
// 2 functions, 0x5cac2c-0x5caf7c
#include "sdk/libc/xstoul.h"
#include "sdk/libc/asctime.h"

// SDK libc.a(xstoul.o): _Stoulx  [fuzzy 1.000 match]
// 0x05cac2c (0x348 bytes)
// strings: 006610b8: '0123456789abcdefghijklmnopqrstuvwxyz'

uint FUN_005cac2c(byte *param_1,undefined4 *param_2,uint param_3,undefined4 *param_4)

{
  byte bVar1;
  undefined *puVar2;
  undefined *puVar3;
  int iVar4;
  undefined4 *puVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  byte *pbVar9;
  uint uVar10;
  int iVar11;
  byte bVar12;
  byte *pbVar13;
  byte *pbVar14;
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
  puVar3 = PTR_s_0123456789abcdefghijklmnopqrstuv_0071c2d8;
  puVar2 = PTR_PTR_0071c2d4;
  bVar12 = *param_1;
  pbVar13 = param_1;
  while ((*(ushort *)((uint)bVar12 * 2 + *(int *)PTR_PTR_0071c2d4) & 0x144) != 0) {
    pbVar13 = pbVar13 + 1;
    bVar12 = *pbVar13;
  }
  if ((bVar12 == 0x2d) || (bVar12 == 0x2b)) {
    pbVar13 = pbVar13 + 1;
  }
  else {
    bVar12 = 0x2b;
  }
  if ((((int)param_3 < 0) || (param_3 == 1)) || (0x24 < (int)param_3)) goto LAB_005cad18;
  pbVar9 = pbVar13;
  if ((int)param_3 < 1) {
    param_3 = 10;
    uVar7 = 10;
    if (*pbVar13 == 0x30) {
      if ((pbVar13[1] != 0x78) && (param_3 = 8, pbVar13[1] != 0x58)) goto LAB_005cadb4;
      pbVar13 = pbVar13 + 2;
      param_3 = 0x10;
      goto LAB_005cad94;
    }
  }
  else {
    if (param_3 == 0x10) {
      uVar7 = 0x10;
      if (*pbVar13 != 0x30) goto LAB_005cadd8;
      if ((pbVar13[1] != 0x78) && (pbVar13[1] != 0x58)) goto LAB_005cadb4;
      pbVar13 = pbVar13 + 2;
    }
LAB_005cad94:
    bVar1 = *pbVar13;
    pbVar9 = pbVar13;
    while (uVar7 = param_3, bVar1 == 0x30) {
LAB_005cadb4:
      pbVar13 = pbVar13 + 1;
      bVar1 = *pbVar13;
    }
  }
LAB_005cadd8:
  iVar11 = 0;
  pbVar14 = pbVar13;
  uVar6 = 0;
  uVar8 = 0;
  while( true ) {
    uVar10 = uVar6;
    bVar1 = *pbVar14;
    uVar6 = (uint)bVar1;
    if ((*(ushort *)((uint)bVar1 * 2 + *(int *)puVar2) & 2) != 0) {
      uVar6 = bVar1 + 0x20;
    }
    iVar4 = FUN_005c5984(puVar3,uVar6,uVar7);
    if (iVar4 == 0) break;
    iVar11 = iVar4 - (int)puVar3;
    pbVar14 = pbVar14 + 1;
    uVar6 = uVar10 * param_3 + (int)(char)iVar11;
    uVar8 = uVar10;
  }
  if (pbVar14 != pbVar9) {
    if (((int)(pbVar14 + (-(int)(char)puVar3[param_3 + 0x28] - (int)pbVar13)) < 0) ||
       ((((int)(pbVar14 + (-(int)(char)puVar3[param_3 + 0x28] - (int)pbVar13)) < 1 &&
         (uVar7 = uVar10 - (int)(char)iVar11, uVar7 <= uVar10)) && (uVar7 / param_3 == uVar8)))) {
      if (bVar12 == 0x2d) {
        uVar10 = -uVar10;
      }
    }
    else {
      puVar5 = (undefined4 *)FUN_005d5904();
      *puVar5 = 0x8001001c;
      if (param_4 == (undefined4 *)0x0) {
        uVar10 = 0xffffffff;
      }
      else {
        uVar10 = 0xffffffff;
        *param_4 = 1;
      }
    }
    if (param_2 == (undefined4 *)0x0) {
      return uVar10;
    }
    *param_2 = pbVar14;
    return uVar10;
  }
LAB_005cad18:
  if (param_2 != (undefined4 *)0x0) {
    *param_2 = param_1;
  }
  return 0;
}


// 0x05caf74 (0x8 bytes)
void FUN_005caf74(void)

{
  FUN_005cac2c();
  return;
}


