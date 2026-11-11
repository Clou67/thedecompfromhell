// sdk/libc/xstoflt.cpp -- reconstructed from NPEA00385 EBOOT
// STATUS: NOT STARTED (raw Ghidra output)
// 1 functions, 0x5ca4a0-0x5ca99c
#include "sdk/libc/xstoflt.h"

// SDK libc.a(xstoflt.o): _Stoflt  [fuzzy 1.000 match]
// 0x05ca4a0 (0x4fc bytes)
uint FUN_005ca4a0(byte *param_1,byte *param_2,int *param_3,longlong param_4,ulonglong param_5)

{
  bool bVar1;
  byte bVar2;
  ushort uVar3;
  int iVar4;
  int iVar5;
  int *piVar6;
  bool bVar7;
  ulonglong uVar8;
  byte bVar9;
  ulonglong uVar10;
  longlong lVar11;
  int iVar12;
  longlong lVar13;
  longlong lVar14;
  byte *pbVar15;
  ulonglong uVar16;
  uint uVar17;
  longlong lVar18;
  uint uVar19;
  int iVar21;
  longlong lVar20;
  char acStack_71 [49];
  
  param_5 = (param_5 & 0x1fffffff) * 8 + param_5;
  if (0x2d < (int)param_5) {
    param_5 = 0x2d;
  }
  bVar7 = false;
  piVar6 = (int *)param_4;
  piVar6[1] = 0;
  *piVar6 = 0;
  bVar9 = *param_2;
  if (bVar9 == 0x30) {
    do {
      param_2 = param_2 + 1;
      bVar9 = *param_2;
    } while (bVar9 == 0x30);
    bVar7 = true;
  }
  uVar10 = (ulonglong)bVar9;
  uVar8 = 0;
  iVar21 = (int)param_5;
  bVar1 = iVar21 < 0;
  iVar4 = *(int *)PTR_PTR_0071c2c8;
  if ((*(ushort *)((uint)bVar9 * 2 + iVar4) & 0x20) != 0) {
    do {
      while( true ) {
        pbVar15 = param_2;
        if (!bVar1) break;
        *piVar6 = *piVar6 + 1;
        bVar9 = pbVar15[1];
        uVar10 = (ulonglong)bVar9;
        param_2 = pbVar15 + 1;
        if ((*(ushort *)((uint)bVar9 * 2 + iVar4) & 0x20) == 0) goto LAB_005ca5b0;
      }
      acStack_71[(int)uVar8 + 1] = (char)uVar10 + -0x30;
      bVar9 = pbVar15[1];
      uVar10 = (ulonglong)bVar9;
      uVar8 = uVar8 + 1;
      bVar1 = iVar21 < (int)uVar8;
      param_2 = pbVar15 + 1;
    } while ((*(ushort *)((uint)bVar9 * 2 + iVar4) & 0x20) != 0);
LAB_005ca5b0:
    param_2 = pbVar15 + 1;
    bVar7 = true;
  }
  if (**(char **)(PTR_PTR_0071c2cc + 0x2c) == (char)uVar10) {
    param_2 = param_2 + 1;
    uVar10 = (ulonglong)*param_2;
  }
  if (((int)uVar8 == 0) && ((char)uVar10 == '0')) {
    iVar12 = *piVar6;
    do {
      iVar12 = iVar12 + -1;
      *piVar6 = iVar12;
      param_2 = param_2 + 1;
      uVar10 = (ulonglong)*param_2;
    } while (*param_2 == 0x30);
    bVar7 = true;
  }
  if ((*(ushort *)((int)(uVar10 << 1) + iVar4) & 0x20) != 0) {
    do {
      iVar12 = (int)uVar8;
      if (!bVar1) {
        iVar5 = *piVar6;
        uVar8 = uVar8 + 1;
        acStack_71[iVar12 + 1] = (char)uVar10 + -0x30;
        bVar1 = iVar21 < (int)uVar8;
        *piVar6 = iVar5 + -1;
      }
      param_2 = param_2 + 1;
      uVar10 = (ulonglong)*param_2;
    } while ((*(ushort *)((uint)*param_2 * 2 + iVar4) & 0x20) != 0);
    bVar7 = true;
  }
  if (bVar1) {
    if ('\x04' < acStack_71[iVar21 + 1]) {
      acStack_71[iVar21] = acStack_71[iVar21] + '\x01';
    }
    *piVar6 = *piVar6 + 1;
    uVar8 = param_5;
  }
  if ((int)uVar8 < 1) {
    if ((int)uVar8 == 0) {
LAB_005ca700:
      uVar8 = 1;
      acStack_71[1] = 0;
    }
  }
  else if (acStack_71[(int)(uVar8 - 1) + 1] == '\0') {
    uVar10 = uVar8 & 0xffffffff;
    iVar21 = *piVar6;
    uVar16 = uVar8 - 1;
    do {
      uVar8 = uVar16;
      iVar21 = iVar21 + 1;
      uVar10 = uVar10 - 1;
      if (uVar10 == 0) {
        *piVar6 = iVar21;
        goto LAB_005ca700;
      }
      uVar16 = uVar8 - 1;
    } while (acStack_71[(int)(uVar8 - 1) + 1] == '\0');
    *piVar6 = iVar21;
  }
  if (!bVar7) {
    uVar19 = 0;
  }
  else {
    iVar12 = (int)uVar8;
    uVar10 = (longlong)(iVar12 / 9 + (iVar12 >> 0x1f)) - (longlong)(iVar12 >> 0x1f);
    lVar14 = 9 - (uVar8 - ((uVar10 & 0x1fffffff) * 8 + uVar10));
    iVar21 = (int)lVar14 >> 0x1f;
    lVar11 = (longlong)iVar21;
    uVar10 = ((int)lVar14 / 9 + iVar21) - lVar11;
    uVar10 = lVar14 - ((uVar10 & 0x1fffffff) * 8 + uVar10);
    uVar16 = (ulonglong)((int)uVar10 >> 0x1f);
    lVar13 = uVar16 - (uVar16 ^ uVar10);
    lVar20 = (lVar13 << 0x20) >> 0x3f;
    lVar18 = -lVar20;
    uVar19 = (uint)lVar13 >> 0x1f;
    if (0 < iVar12) {
      uVar8 = uVar8 & 0xffffffff;
      param_4 = lVar20 * -4 + param_4;
      iVar21 = 0;
      lVar20 = param_4;
      while( true ) {
        uVar19 = (uint)lVar18;
        iVar12 = (int)lVar14;
        uVar10 = (iVar12 / 9 + (iVar12 >> 0x1f)) - lVar11;
        if (iVar12 == (int)((uVar10 & 0xffffffff) << 3) + (int)uVar10) {
          lVar20 = lVar20 + 4;
          lVar18 = lVar18 + 1;
          uVar19 = (uint)lVar18;
          param_4 = param_4 + 4;
          *(int *)lVar20 = (int)acStack_71[iVar21 + 1];
        }
        else {
          *(int *)param_4 = *(int *)param_4 * 10 + (int)acStack_71[iVar21 + 1];
        }
        if (uVar8 == 1) break;
        uVar8 = uVar8 - 1;
        lVar14 = lVar14 + 1;
        iVar21 = iVar21 + 1;
        lVar11 = (longlong)((int)lVar14 >> 0x1f);
      }
    }
    if ((*param_2 == 0x65) || (*param_2 == 0x45)) {
      pbVar15 = param_2 + 1;
      bVar9 = *pbVar15;
      if ((bVar9 == 0x2b) || (bVar9 == 0x2d)) {
        pbVar15 = param_2 + 2;
        bVar2 = *pbVar15;
      }
      else {
        bVar2 = bVar9;
        bVar9 = 0x2b;
      }
      bVar1 = false;
      iVar12 = 0;
      iVar21 = 0;
      if ((*(ushort *)((uint)bVar2 * 2 + iVar4) & 0x20) != 0) {
        do {
          uVar17 = (uint)bVar2;
          pbVar15 = pbVar15 + 1;
          bVar2 = *pbVar15;
          iVar12 = iVar21 * 10 + uVar17 + -0x30;
          uVar3 = *(ushort *)((uint)bVar2 * 2 + iVar4);
          while( true ) {
            if ((uVar3 & 0x20) == 0) {
              bVar1 = true;
              goto LAB_005ca8e8;
            }
            iVar21 = iVar12;
            if (iVar12 < 100000000) break;
            pbVar15 = pbVar15 + 1;
            bVar2 = *pbVar15;
            uVar3 = *(ushort *)((uint)bVar2 * 2 + iVar4);
          }
        } while( true );
      }
LAB_005ca8e8:
      if (bVar9 == 0x2d) {
        iVar12 = -iVar12;
      }
      *piVar6 = iVar12 + *piVar6;
      if (bVar1) {
        param_2 = pbVar15;
      }
    }
  }
  if (param_3 != (int *)0x0) {
    if (!bVar7) {
      param_2 = param_1;
    }
    *param_3 = (int)param_2;
  }
  return uVar19;
}


