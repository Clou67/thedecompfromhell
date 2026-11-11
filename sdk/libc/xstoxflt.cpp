// sdk/libc/xstoxflt.cpp -- reconstructed from NPEA00385 EBOOT
// STATUS: NOT STARTED (raw Ghidra output)
// 1 functions, 0x5caf7c-0x5cb4fc
#include "sdk/libc/xstoxflt.h"

// SDK libc.a(xstoxflt.o): _Stoxflt  [fuzzy 1.000 match]
// 0x05caf7c (0x580 bytes)
// strings: 00661108: '0123456789abcdefABCDEF'

int FUN_005caf7c(byte *param_1,byte *param_2,undefined4 *param_3,uint *param_4,ulonglong param_5)

{
  bool bVar1;
  bool bVar2;
  bool bVar3;
  byte bVar4;
  ushort uVar5;
  ulonglong uVar6;
  bool bVar7;
  undefined *puVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  int iVar11;
  int iVar12;
  byte bVar13;
  uint uVar14;
  uint uVar15;
  longlong lVar16;
  int iVar17;
  uint *puVar18;
  byte *pbVar19;
  longlong lVar20;
  int iVar21;
  int iVar22;
  byte in_cr0;
  byte in_cr1;
  byte in_cr2;
  byte in_cr3;
  byte unaff_cr4;
  byte in_cr5;
  byte in_cr6;
  byte in_cr7;
  uint uStack00000008;
  
  puVar8 = PTR_s_0123456789abcdefABCDEF_0071c2dc;
  uStack00000008 =
       (uint)(in_cr0 & 0xf) << 0x1c | (uint)(in_cr1 & 0xf) << 0x18 | (uint)(in_cr2 & 0xf) << 0x14 |
       (uint)(in_cr3 & 0xf) << 0x10 | (uint)(unaff_cr4 & 0xf) << 0xc | (uint)(in_cr5 & 0xf) << 8 |
       (uint)(in_cr6 & 0xf) << 4 | (uint)(in_cr7 & 0xf);
  bVar7 = false;
  lVar16 = (param_5 & 0x1fffffff) * 8 - param_5;
  if (*param_2 == 0x30) {
    do {
      param_2 = param_2 + 1;
    } while (*param_2 == 0x30);
    bVar7 = true;
  }
  iVar17 = (int)lVar16;
  bVar1 = 0 < iVar17;
  bVar2 = iVar17 < 0;
  bVar3 = iVar17 == 0;
  lVar20 = 0;
  *param_4 = 0;
  puVar18 = param_4;
  while( true ) {
    iVar11 = FUN_005c5984(puVar8,*param_2,0x16);
    iVar21 = (int)lVar20;
    if (iVar11 == 0) break;
    if (bVar1) {
      uVar9 = (longlong)(iVar21 / 7 + (iVar21 >> 0x1f)) - (longlong)(iVar21 >> 0x1f);
      lVar20 = lVar20 + 1;
      iVar12 = (int)lVar20;
      bVar1 = iVar12 < iVar17;
      bVar2 = iVar17 < iVar12;
      bVar3 = iVar12 == iVar17;
      if (iVar21 == (int)((uVar9 & 0xffffffff) << 3) - (int)uVar9) {
        puVar18 = puVar18 + 1;
        *puVar18 = 0;
      }
      *puVar18 = *puVar18 * 0x10 + (int)*(char *)(iVar11 + 0x18);
    }
    else {
      *param_4 = *param_4 + 1;
      if (bVar3) {
        bVar1 = false;
        bVar3 = true;
        bVar2 = false;
        lVar20 = lVar16;
        if ('\a' < *(char *)(iVar11 + 0x18)) {
          lVar20 = lVar16 + 1;
          iVar11 = (int)lVar20;
          bVar1 = iVar11 < iVar17;
          bVar2 = iVar17 < iVar11;
          bVar3 = iVar11 == iVar17;
          *puVar18 = *puVar18 + 1;
        }
      }
    }
    param_2 = param_2 + 1;
    bVar7 = true;
  }
  if (bVar2) {
    lVar20 = lVar16;
  }
  if (*param_2 == **(byte **)(PTR_PTR_0071c2e0 + 0x2c)) {
    param_2 = param_2 + 1;
  }
  if (((int)lVar20 == 0) && (*param_2 == 0x30)) {
    uVar14 = *param_4;
    do {
      param_2 = param_2 + 1;
      uVar14 = uVar14 - 1;
      *param_4 = uVar14;
    } while (*param_2 == 0x30);
    bVar7 = true;
  }
  do {
    iVar12 = FUN_005c5984(puVar8,*param_2,0x16);
    iVar11 = iVar12 - (int)puVar8;
    iVar21 = (int)lVar20;
    while( true ) {
      iVar22 = (int)lVar20;
      if (iVar12 == 0) {
        uVar9 = (longlong)(iVar22 / 7 + (iVar22 >> 0x1f)) - (longlong)(iVar21 >> 0x1f);
        lVar16 = lVar20 - ((uVar9 & 0x1fffffff) * 8 - uVar9);
        if ((int)lVar16 == 0) {
          uVar9 = (ulonglong)*param_4;
        }
        else {
          uVar9 = 7 - lVar16;
          lVar20 = lVar20 + uVar9;
          *puVar18 = *puVar18 << ((uint)((uVar9 & 0xffffffff) << 2) & 0x3c);
          uVar9 = *param_4 - uVar9;
          *param_4 = (uint)uVar9;
        }
        iVar17 = (int)lVar20;
        if ((iVar17 < 7) || (*puVar18 != 0)) goto LAB_005cb324;
        uVar10 = lVar20 - 7;
        uVar6 = (uVar10 & 0xffffffff) * 0x24924925 >> 0x20;
        lVar16 = ((uVar6 + ((uVar10 - uVar6 << 0x20) >> 0x21) << 0x20) >> 0x22) + 1;
        if ((int)uVar10 < 0) {
          lVar16 = 1;
        }
        goto LAB_005cb30c;
      }
      param_2 = param_2 + 1;
      bVar7 = true;
      if (iVar17 <= iVar21) break;
      uVar9 = (longlong)(iVar22 / 7 + (iVar22 >> 0x1f)) - (longlong)(iVar21 >> 0x1f);
      lVar20 = lVar20 + 1;
      if (iVar22 == (int)((uVar9 & 0xffffffff) << 3) - (int)uVar9) {
        puVar18 = puVar18 + 1;
        *puVar18 = 0;
      }
      *puVar18 = *puVar18 * 0x10 + (int)(char)puVar8[iVar11 + 0x18];
      *param_4 = *param_4 - 1;
      iVar12 = FUN_005c5984(puVar8,*param_2,0x16);
      iVar11 = iVar12 - (int)puVar8;
      iVar21 = (int)lVar20;
    }
  } while( true );
  while (*puVar18 == 0) {
LAB_005cb30c:
    puVar18 = puVar18 + -1;
    uVar9 = uVar9 + 7;
    *param_4 = (uint)uVar9;
    lVar20 = lVar20 + -7;
    iVar17 = (int)lVar20;
    lVar16 = lVar16 + -1;
    if (lVar16 == 0) break;
  }
LAB_005cb324:
  uVar14 = (uint)((uVar9 & 0xffffffff) << 2);
  *param_4 = uVar14;
  pbVar19 = param_2;
  if ((bVar7) && ((*param_2 == 0x70 || (*param_2 == 0x50)))) {
    pbVar19 = param_2 + 1;
    bVar13 = *pbVar19;
    if ((bVar13 == 0x2b) || (bVar13 == 0x2d)) {
      pbVar19 = param_2 + 2;
    }
    else {
      bVar13 = 0x2b;
    }
    bVar7 = false;
    bVar4 = *pbVar19;
    iVar12 = 0;
    iVar11 = *(int *)PTR_PTR_0071c2e4;
    iVar21 = 0;
    if ((*(ushort *)((uint)bVar4 * 2 + iVar11) & 0x20) != 0) {
      do {
        uVar15 = (uint)bVar4;
        pbVar19 = pbVar19 + 1;
        bVar4 = *pbVar19;
        iVar12 = iVar21 * 10 + uVar15 + -0x30;
        uVar5 = *(ushort *)((uint)bVar4 * 2 + iVar11);
        while( true ) {
          if ((uVar5 & 0x20) == 0) {
            bVar7 = true;
            goto LAB_005cb4b4;
          }
          iVar21 = iVar12;
          if (iVar12 < 100000000) break;
          pbVar19 = pbVar19 + 1;
          bVar4 = *pbVar19;
          uVar5 = *(ushort *)((uint)bVar4 * 2 + iVar11);
        }
      } while( true );
    }
LAB_005cb4b4:
    if (bVar13 == 0x2d) {
      iVar12 = -iVar12;
    }
    *param_4 = iVar12 + uVar14;
    param_1 = param_2;
  }
  if (param_3 != (undefined4 *)0x0) {
    if (!bVar7) {
      pbVar19 = param_1;
    }
    *param_3 = pbVar19;
  }
  return iVar17 / 7;
}


