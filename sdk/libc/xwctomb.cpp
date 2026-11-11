// sdk/libc/xwctomb.cpp -- reconstructed from NPEA00385 EBOOT
// STATUS: NOT STARTED (raw Ghidra output)
// 2 functions, 0x5cc13c-0x5cc44c
#include "sdk/libc/xwctomb.h"
#include "sdk/libc/asctime.h"

// SDK libc.a(xwctomb.o): _Wctombx  [fuzzy 1.000 match]
// 0x05cc13c (0x2dc bytes)
uint FUN_005cc13c(byte *param_1,ulonglong param_2,undefined4 *param_3,undefined4 *param_4,
                 int param_5)

{
  ushort uVar1;
  undefined2 uVar2;
  ushort *puVar3;
  undefined4 uVar4;
  int iVar5;
  bool bVar6;
  undefined4 *puVar7;
  uint uVar8;
  byte bVar10;
  longlong lVar9;
  char cVar13;
  byte *pbVar12;
  longlong lVar11;
  ulonglong uVar14;
  int iVar15;
  
  puVar3 = (ushort *)*param_4;
  if (puVar3 == (ushort *)0x0) {
    if (param_1 == (byte *)0x0) {
      uVar4 = *(undefined4 *)PTR_DAT_0071c3b8;
      uVar2 = *(undefined2 *)(PTR_DAT_0071c3b8 + 4);
      *(undefined2 *)((int)param_3 + 6) = *(undefined2 *)(PTR_DAT_0071c3b8 + 6);
      *param_3 = uVar4;
      *(undefined2 *)(param_3 + 1) = uVar2;
      return 0;
    }
    uVar14 = param_2 & 0xffff;
    if ((param_2 & 0xff80) == 0) {
      *param_1 = (byte)param_2;
      uVar8 = 1;
    }
    else {
      if ((param_2 & 0xf800) == 0) {
        lVar9 = 1;
        *param_1 = (byte)((uVar14 << 0x20) >> 0x26) | 0xc0;
      }
      else {
        lVar9 = 2;
        *param_1 = (byte)((uVar14 << 0x20) >> 0x2c) | 0xe0;
      }
      pbVar12 = param_1 + 1;
      lVar11 = lVar9 * 6 + -6;
      if ((int)lVar9 + -1 < 0) {
        lVar9 = 1;
      }
      do {
        uVar8 = (uint)lVar11;
        lVar11 = lVar11 + -6;
        *pbVar12 = (byte)((int)uVar14 >> (uVar8 & 0x3f)) & 0x3f | 0x80;
        pbVar12 = pbVar12 + 1;
        lVar9 = lVar9 + -1;
      } while (lVar9 != 0);
      uVar8 = (int)pbVar12 - (int)param_1;
    }
    return uVar8;
  }
  if (param_1 == (byte *)0x0) {
    uVar4 = *(undefined4 *)PTR_DAT_0071c3b8;
    uVar2 = *(undefined2 *)(PTR_DAT_0071c3b8 + 4);
    *(undefined2 *)((int)param_3 + 6) = *(undefined2 *)(PTR_DAT_0071c3b8 + 6);
    *param_3 = uVar4;
    *(undefined2 *)(param_3 + 1) = uVar2;
    return *puVar3 & 0xf00;
  }
  cVar13 = (char)*(undefined2 *)((int)param_3 + 6);
  if ((cVar13 < '\x10') &&
     (iVar5 = *(int *)(param_5 + (int)(((longlong)cVar13 & 0xffffffffU) << 2)), iVar5 != 0)) {
    bVar6 = false;
    uVar8 = 0;
    iVar15 = 1;
    uVar1 = *(ushort *)(((uint)((param_2 & 0xffffffff) << 1) & 0x1fe) + iVar5);
    while (uVar1 != 0) {
      bVar10 = (byte)(uVar1 >> 8) & 0xf;
      if ((short)uVar1 < 0) {
        param_2 = param_2 & 0xffffff00 | (ulonglong)uVar1 & 0xff;
      }
      if ((uVar1 & 0x1000) != 0) {
        param_2 = (param_2 & 0xffff) << 8 | ((param_2 & 0xffff) << 0x20) >> 0x28;
      }
      if ((uVar1 & 0x2000) != 0) {
        uVar14 = (ulonglong)uVar1;
        if ((uVar1 & 0xff) == 0) {
          uVar14 = param_2;
        }
        pbVar12 = param_1 + uVar8;
        uVar8 = uVar8 + 1;
        iVar15 = 0;
        *pbVar12 = (byte)uVar14;
        if ((byte)uVar14 == 0) {
          bVar6 = true;
        }
      }
      if ((uVar1 & 0x4000) != 0 || bVar6) {
        *(short *)((int)param_3 + 6) = (short)(char)bVar10;
        return uVar8;
      }
      if ((((0xf < bVar10) ||
           (iVar5 = *(int *)(param_5 + (int)((longlong)(char)bVar10 << 2)), iVar5 == 0)) ||
          (2 < (int)uVar8)) || (iVar15 = iVar15 + 1, 0xfef < iVar15)) break;
      uVar1 = *(ushort *)(((uint)((param_2 & 0xffffffff) << 1) & 0x1fe) + iVar5);
    }
  }
  puVar7 = (undefined4 *)FUN_005d5904();
  *puVar7 = 0x8001001d;
  return 0xffffffff;
}


// 0x05cc418 (0x34 bytes)
void FUN_005cc418(int param_1,undefined2 param_2,undefined4 param_3)

{
  ulonglong uVar1;
  longlong in_r13;
  
  uVar1 = 0;
  if (param_1 != 0) {
    uVar1 = in_r13 - 0x6ecc;
  }
  FUN_005cc13c(param_1,param_2,param_3,in_r13 + -0x6f0c,uVar1 & 0xffffffff);
  return;
}


