// game/update/moby741.cpp -- reconstructed from NPEA00385 EBOOT
// STATUS: NOT STARTED (raw Ghidra output)
// 9 functions, 0x441eec-0x443e98
#include <stdlib.h>
#include "game/update/moby741.h"
#include "game/camera.h"
#include "game/collproc.h"
#include "game/hero.h"
#include "game/mobyfunc.h"
#include "game/mobyutil.h"
#include "game/path.h"
#include "game/update.h"
#include "game/update/moby849.h"
#include "idol/fastfunc.h"

// 0x0441eec (0x58 bytes)
void M741_00441eec(MobyInstance *param_1)

{
  undefined8 uVar1;
  
  uVar1 = M849_MB_Sucking(param_1);
  if ((int)uVar1 == 0) {
    if (param_1->state == '\b') {
      param_1->state = '\x01';
    }
  }
  else {
    param_1->state = '\b';
  }
  return;
}


// 0x0441f44 (0x58 bytes)
void M741_00441f44(int param_1)

{
  int iVar1;
  
  iVar1 = M849_0048aa70();
  if (iVar1 == 0) {
    if (*(char *)(param_1 + 0x20) == '\b') {
      *(undefined1 *)(param_1 + 0x20) = 1;
    }
  }
  else {
    *(undefined1 *)(param_1 + 0x20) = 8;
  }
  return;
}


// 0x0441f9c (0x58 bytes)
void M741_00441f9c(int param_1)

{
  int iVar1;
  
  iVar1 = M849_0048acb8();
  if (iVar1 == 0) {
    if (*(char *)(param_1 + 0x20) == '\b') {
      *(undefined1 *)(param_1 + 0x20) = 1;
    }
  }
  else {
    *(undefined1 *)(param_1 + 0x20) = 8;
  }
  return;
}


// 0x0441ff4 (0x38 bytes)
void M741_00441ff4(int param_1)

{
  M849_0048afe8();
  *(undefined1 *)(param_1 + 0x20) = 8;
  return;
}


// 0x044202c (0x40 bytes)
longlong M741_0044202c(int param_1)

{
  longlong lVar1;
  
  if (param_1 == 0) {
    lVar1 = 0;
  }
  else {
    lVar1 = (ulonglong)*(uint *)(param_1 + 0x78) + 0x40;
    lVar1 = lVar1 + (ZERO_MASK(*(uint *)(param_1 + 0x78)) & -lVar1);
  }
  return lVar1;
}


// 0x044206c (0x14 bytes)
void M741_0044206c(void)

{
  DAT_0085a608 = 0x10000;
  return;
}


// 0x0442088 (0x224 bytes)
// inlined: FastAtan2 @0x44216c
void M741_00442088(int param_1,int param_2,float *param_3)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  ulonglong *puVar8;
  int iVar9;
  int iVar10;
  ulonglong uVar11;
  ulonglong uVar12;
  longlong lVar13;
  longlong lVar14;
  longlong lVar15;
  longlong lVar16;
  float *pfVar17;
  ulonglong in_LR;
  longlong lVar18;
  double dVar19;
  
  uVar11 = ZEXT48(&stack0x00000000);
  lVar13 = uVar11 - 0xa0;
  puVar8 = (ulonglong *)lVar13;
  *puVar8 = uVar11;
  puVar8[0x16] = in_LR;
  fVar1 = *param_3 - *(float *)(param_1 + 0x10);
  fVar2 = param_3[1] - *(float *)(param_1 + 0x14);
  fVar4 = ABS(fVar1);
  fVar3 = ABS(fVar2);
  *(float *)(puVar8 + 0xe) = fVar1;
  *(float *)((int)puVar8 + 0x74) = fVar2;
  *(float *)(puVar8 + 0xf) = fVar4 - fVar3;
  dVar19 = 0.0;
  fVar1 = *(float *)(param_2 + 0xfc);
  fVar2 = *(float *)(param_2 + 0x100);
  uVar12 = (ulonglong)(*(uint *)(puVar8 + 0xe) >> 0x1c) & 8 |
           (ulonglong)(*(uint *)(puVar8 + 0xf) >> 0x1e) & 2 |
           (ulonglong)(*(uint *)((int)puVar8 + 0x74) >> 0x1d) & 4;
  fVar5 = ABS(*(float *)(puVar8 + 0xe));
  if (*(float *)(puVar8 + 0xf) - 0.0 < 0.0) {
    fVar5 = fVar3;
  }
  fVar3 = *(float *)(param_2 + 0x104);
  fVar7 = *(float *)(&g_atanQuadrantTable + (int)(uVar12 << 2));
  fVar6 = ABS(*(float *)((int)puVar8 + 0x74));
  if (*(float *)(puVar8 + 0xf) - 0.0 < 0.0) {
    fVar6 = fVar4;
  }
  fVar4 = *(float *)(((uint)(uVar12 << 2) | 0x735900) + 4);
  if (0.0 < fVar5) {
    lVar16 = uVar11 - 0x90;
    lVar15 = uVar11 - 0x24;
    lVar14 = uVar11 - 0x14;
    lVar18 = 2;
    fVar5 = (fVar6 - fVar5) / (fVar6 + fVar5);
    fVar6 = fVar5 * fVar5;
    *(float *)(puVar8 + 0x11) = fVar5;
    *(float *)(puVar8 + 0x10) = fVar5;
    *(float *)((int)puVar8 + 0x84) = fVar5;
    *(float *)((int)puVar8 + 0x7c) = fVar5;
    fVar5 = fVar6 * fVar6;
    *(float *)(puVar8 + 0x10) = *(float *)(puVar8 + 0x10) * fVar6;
    *(float *)((int)puVar8 + 0x84) = *(float *)((int)puVar8 + 0x84) * fVar5;
    *(float *)(puVar8 + 0x11) = *(float *)(puVar8 + 0x11) * fVar5 * fVar6;
    do {
      *(float *)((int)lVar16 + 0x7c) = *(float *)((int)lVar16 + 0x6c) * fVar5 * fVar5;
      iVar9 = (int)lVar15;
      lVar16 = lVar16 + 8;
      lVar15 = lVar15 + 8;
      *(float *)((int)lVar14 + 4) = *(float *)(iVar9 + 4) * fVar5 * fVar5;
      lVar14 = lVar14 + 8;
      lVar18 = lVar18 + -1;
    } while (lVar18 != 0);
    lVar16 = uVar11 - 0x24;
    pfVar17 = (float *)&DAT_007358e0;
    lVar18 = 4;
    lVar14 = lVar16;
    lVar15 = lVar13;
    do {
      fVar5 = *pfVar17;
      fVar6 = pfVar17[1];
      pfVar17 = pfVar17 + 2;
      *(float *)((int)lVar15 + 0x7c) = *(float *)((int)lVar15 + 0x7c) * fVar5;
      lVar15 = lVar15 + 8;
      *(float *)((int)lVar14 + 4) = *(float *)((int)lVar14 + 4) * fVar6;
      lVar14 = lVar14 + 8;
      lVar18 = lVar18 + -1;
    } while (lVar18 != 0);
    lVar14 = 2;
    do {
      iVar9 = (int)lVar13;
      lVar13 = lVar13 + 0x10;
      iVar10 = (int)lVar16;
      lVar16 = lVar16 + 0x10;
      dVar19 = (double)((float)(dVar19 + (double)*(float *)(iVar9 + 0x7c)) + *(float *)(iVar10 + 4)
                        + *(float *)(iVar10 + 8) + *(float *)(iVar10 + 0xc));
      lVar14 = lVar14 + -1;
    } while (lVar14 != 0);
    dVar19 = (double)((float)(dVar19 + 0.7853981852531433) * fVar7 + fVar4);
  }
  OrganicDeltAngSpeed
            (dVar19,(double)fVar1,(double)fVar2,(double)fVar3,param_1,param_1,param_2 + 0xd4);
  return;
}


// 0x04422e0 (0x734 bytes)
// inlined: FastAtan2 @0x442508, FastAtan2 @0x44286c
undefined8
M741_004422e0(int param_1,int param_2,int *param_3,undefined4 *param_4)

{
  char cVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  undefined4 uVar5;
  float fVar6;
  float fVar7;
  ulonglong *puVar8;
  float fVar9;
  float fVar10;
  ulonglong uVar11;
  undefined8 uVar12;
  ulonglong uVar13;
  Vec4 *point;
  int iVar16;
  int iVar17;
  longlong lVar14;
  longlong lVar15;
  float *pfVar19;
  longlong lVar18;
  longlong lVar20;
  ulonglong unaff_r26;
  ulonglong unaff_r27;
  ulonglong unaff_r28;
  ulonglong unaff_r29;
  ulonglong unaff_r30;
  ulonglong unaff_r31;
  ulonglong in_LR;
  longlong lVar21;
  double dVar22;
  double dVar23;
  double dVar24;
  double dVar25;
  double dVar26;
  ulonglong in_f23;
  ulonglong in_f24;
  ulonglong in_f25;
  double dVar27;
  ulonglong in_f26;
  double dVar28;
  ulonglong in_f27;
  double dVar29;
  ulonglong in_f28;
  double dVar30;
  ulonglong in_f29;
  double dVar31;
  ulonglong in_f30;
  double dVar32;
  ulonglong in_f31;
  double dVar33;
  double dVar34;
  
  uVar11 = ZEXT48(&stack0x00000000);
  lVar15 = uVar11 - 0x160;
  puVar8 = (ulonglong *)lVar15;
  *puVar8 = uVar11;
  puVar8[0x2e] = in_LR;
  puVar8[0x23] = in_f23;
  puVar8[0x24] = in_f24;
  puVar8[0x25] = in_f25;
  puVar8[0x26] = in_f26;
  puVar8[0x27] = in_f27;
  puVar8[0x28] = in_f28;
  puVar8[0x29] = in_f29;
  puVar8[0x2a] = in_f30;
  puVar8[0x2b] = in_f31;
  puVar8[0x22] = unaff_r31;
  puVar8[0x21] = unaff_r30;
  puVar8[0x1f] = unaff_r28;
  puVar8[0x20] = unaff_r29;
  puVar8[0x1e] = unaff_r27;
  puVar8[0x1d] = unaff_r26;
  if (((param_1 == 0) || (param_2 == 0)) || (param_3 == (int *)0x0)) {
    if (*(char *)(param_1 + 0x53) != '\x01') {
      puVar8[0x1b] = (longlong)(int)(animationSpeed * 10.5);
      MB_SetAnimation(param_1,1,0,*(undefined4 *)((int)puVar8 + 0xdc));
    }
    uVar12 = 0;
    *(undefined1 *)(param_1 + 0xbc) = 1;
    *(undefined1 *)(param_1 + 0x20) = 5;
  }
  else {
    cVar1 = *(char *)(param_1 + 0xbc);
    if (cVar1 == '\0') {
      iVar17 = *(int *)(param_2 + 600) + 1;
      if (*param_3 + -1 < iVar17) {
        if (*(char *)(param_1 + 0x53) != '\x01') {
          puVar8[0x1b] = (longlong)(int)(animationSpeed * 10.5);
          MB_SetAnimation(param_1,1,0,*(undefined4 *)((int)puVar8 + 0xdc));
        }
        *(undefined1 *)(param_1 + 0xbc) = 1;
        *(undefined1 *)(param_1 + 0x20) = 5;
        return 0;
      }
      fVar3 = (float)param_3[iVar17 * 4 + 4] - *(float *)(param_1 + 0x10);
      fVar2 = (float)param_3[iVar17 * 4 + 5] - *(float *)(param_1 + 0x14);
      *(int *)(param_2 + 600) = iVar17;
      fVar4 = ABS(fVar3);
      fVar7 = ABS(fVar2);
      *(float *)((int)puVar8 + 0x8c) = fVar3;
      *(float *)(puVar8 + 0x12) = fVar2;
      *(float *)((int)puVar8 + 0x94) = fVar4 - fVar7;
      dVar33 = 0.0;
      uVar13 = (ulonglong)(*(uint *)((int)puVar8 + 0x8c) >> 0x1c) & 8 |
               (ulonglong)(*(uint *)((int)puVar8 + 0x94) >> 0x1e) & 2 |
               (ulonglong)(*(uint *)(puVar8 + 0x12) >> 0x1d) & 4;
      fVar3 = ABS(*(float *)((int)puVar8 + 0x8c));
      if (*(float *)((int)puVar8 + 0x94) - 0.0 < 0.0) {
        fVar3 = fVar7;
      }
      fVar7 = *(float *)(&g_atanQuadrantTable + (int)(uVar13 << 2));
      fVar2 = *(float *)(((uint)(uVar13 << 2) | 0x735900) + 4);
      fVar6 = ABS(*(float *)(puVar8 + 0x12));
      if (*(float *)((int)puVar8 + 0x94) - 0.0 < 0.0) {
        fVar6 = fVar4;
      }
      dVar22 = dVar33;
      if (0.0 < fVar3) {
        lVar14 = uVar11 - 0x150;
        lVar18 = uVar11 - 0xa8;
        lVar20 = uVar11 - 0x98;
        lVar21 = 2;
        fVar3 = (fVar6 - fVar3) / (fVar6 + fVar3);
        fVar4 = fVar3 * fVar3;
        *(float *)((int)puVar8 + 0xc4) = fVar3;
        *(float *)((int)puVar8 + 0xbc) = fVar3;
        *(float *)(puVar8 + 0x18) = fVar3;
        *(float *)(puVar8 + 0x17) = fVar3;
        fVar3 = fVar4 * fVar4;
        *(float *)((int)puVar8 + 0xbc) = *(float *)((int)puVar8 + 0xbc) * fVar4;
        *(float *)(puVar8 + 0x18) = *(float *)(puVar8 + 0x18) * fVar3;
        *(float *)((int)puVar8 + 0xc4) = *(float *)((int)puVar8 + 0xc4) * fVar3 * fVar4;
        do {
          *(float *)((int)lVar14 + 0xb8) = *(float *)((int)lVar14 + 0xa8) * fVar3 * fVar3;
          iVar17 = (int)lVar18;
          lVar14 = lVar14 + 8;
          lVar18 = lVar18 + 8;
          *(float *)((int)lVar20 + 4) = *(float *)(iVar17 + 4) * fVar3 * fVar3;
          lVar20 = lVar20 + 8;
          lVar21 = lVar21 + -1;
        } while (lVar21 != 0);
        lVar21 = 4;
        lVar20 = uVar11 - 0xa8;
        pfVar19 = (float *)&DAT_007358e0;
        lVar14 = lVar15;
        lVar18 = lVar20;
        do {
          fVar3 = *pfVar19;
          fVar4 = pfVar19[1];
          pfVar19 = pfVar19 + 2;
          *(float *)((int)lVar14 + 0xb8) = *(float *)((int)lVar14 + 0xb8) * fVar3;
          lVar14 = lVar14 + 8;
          *(float *)((int)lVar18 + 4) = *(float *)((int)lVar18 + 4) * fVar4;
          lVar18 = lVar18 + 8;
          lVar21 = lVar21 + -1;
        } while (lVar21 != 0);
        lVar18 = 2;
        lVar14 = lVar15;
        do {
          iVar17 = (int)lVar14;
          lVar14 = lVar14 + 0x10;
          iVar16 = (int)lVar20;
          lVar20 = lVar20 + 0x10;
          dVar22 = (double)((float)(dVar22 + (double)*(float *)(iVar17 + 0xb8)) +
                            *(float *)(iVar16 + 4) + *(float *)(iVar16 + 8) +
                           *(float *)(iVar16 + 0xc));
          lVar18 = lVar18 + -1;
        } while (lVar18 != 0);
        dVar22 = (double)((float)(dVar22 + 0.7853981852531433) * fVar7 + fVar2);
      }
      dVar22 = (double)FastDiffRots(dVar22,(double)*(float *)(param_1 + 0x48));
      if (dVar22 <= dVar33) {
        *(undefined1 *)(param_2 + 0x14c) = 5;
        *(undefined1 *)(param_2 + 0x14d) = 5;
        *(undefined1 *)(param_2 + 0x14e) = 5;
      }
      else {
        *(undefined1 *)(param_2 + 0x14c) = 4;
        *(undefined1 *)(param_2 + 0x14d) = 4;
        *(undefined1 *)(param_2 + 0x14e) = 4;
      }
      MB_initJump(param_1,param_2 + 0x120,param_3 + *(int *)(param_2 + 600) * 4 + 4);
      cVar1 = *(char *)(param_1 + 0xbc);
    }
    if (cVar1 == '\x01') {
      iVar17 = 0;
      dVar34 = -3.1415927410125732;
      dVar32 = 3.1415927410125732;
      dVar31 = 1.570796251296997;
      dVar30 = 3.141592502593994;
      dVar29 = -3.141592502593994;
      dVar28 = -0.16666656732559204;
      dVar27 = 0.008333025500178337;
      dVar22 = -0.0001980741071747616;
      dVar33 = 2.601886990305502e-06;
      do {
        dVar23 = (double)MB_randRangeFloat((float)dVar34,(float)dVar32);
        dVar24 = (double)(float)(dVar23 + dVar31);
        dVar23 = (double)(float)(dVar30 - dVar24);
        if (dVar24 - (double)(float)(dVar30 - dVar24) < 0.0) {
          dVar23 = dVar24;
        }
        fVar3 = *(float *)(param_1 + 0x10);
        dVar25 = (double)(float)(dVar29 - dVar24);
        if ((double)(float)(dVar29 - dVar24) - dVar23 < 0.0) {
          dVar25 = dVar23;
        }
        fVar7 = *(float *)(param_1 + 0x14);
        fVar4 = *(float *)(param_2 + 0x254);
        uVar5 = *(undefined4 *)(param_1 + 0x1c);
        *(undefined4 *)(puVar8 + 0xf) = *(undefined4 *)(param_1 + 0x18);
        *(undefined4 *)((int)puVar8 + 0x7c) = uVar5;
        dVar23 = (double)(float)(dVar25 * dVar25);
        dVar24 = (double)(float)(dVar23 * (double)(float)(dVar23 * dVar25));
        dVar26 = (double)(float)(dVar23 * dVar24);
        fVar2 = (float)((double)(float)(dVar23 * dVar26) * dVar33 +
                       (double)(float)(dVar26 * dVar22 +
                                      (double)(float)(dVar24 * dVar27 +
                                                     (double)(float)((double)(float)(dVar23 * dVar25
                                                                                    ) * dVar28 +
                                                                    dVar25))));
        *(float *)(puVar8 + 0xe) = fVar4 * fVar2 + fVar3;
        *(float *)((int)puVar8 + 0x74) = fVar4 * fVar2 + fVar7;
        point = (Vec4 *)(uVar11 - 0xf0);
      } while (((param_4 == (undefined4 *)0x0) ||
               (iVar16 = PointInsideComplexPoly(point,(Vec4 *)(param_4 + 4),*param_4),
               iVar16 == 0)) && (iVar17 = iVar17 + 1, iVar17 < 10));
      iVar17 = PointInsideComplexPoly(point,(Vec4 *)(param_4 + 4),*param_4);
      fVar3 = *(float *)(param_1 + 0x10);
      fVar2 = *(float *)(param_1 + 0x14);
      fVar7 = *(float *)(param_1 + 0x48);
      fVar4 = *(float *)(puVar8 + 0xe);
      fVar6 = *(float *)((int)puVar8 + 0x74);
      if (iVar17 == 0) {
        uVar5 = *(undefined4 *)(param_1 + 0x1c);
        *(undefined4 *)(puVar8 + 0xf) = *(undefined4 *)(param_1 + 0x18);
        *(undefined4 *)((int)puVar8 + 0x7c) = uVar5;
        *(float *)(puVar8 + 0xe) = fVar3;
        *(float *)((int)puVar8 + 0x74) = fVar2;
        fVar4 = fVar3;
        fVar6 = fVar2;
      }
      fVar10 = ABS(fVar4 - fVar3);
      fVar9 = ABS(fVar6 - fVar2);
      *(float *)(puVar8 + 0x10) = fVar4 - fVar3;
      *(float *)((int)puVar8 + 0x84) = fVar6 - fVar2;
      *(float *)(puVar8 + 0x11) = fVar10 - fVar9;
      dVar33 = 0.0;
      uVar13 = (ulonglong)(*(uint *)(puVar8 + 0x10) >> 0x1c) & 8 |
               (ulonglong)(*(uint *)(puVar8 + 0x11) >> 0x1e) & 2 |
               (ulonglong)(*(uint *)((int)puVar8 + 0x84) >> 0x1d) & 4;
      fVar3 = ABS(*(float *)(puVar8 + 0x10));
      if (*(float *)(puVar8 + 0x11) - 0.0 < 0.0) {
        fVar3 = fVar9;
      }
      fVar4 = *(float *)(&g_atanQuadrantTable + (int)(uVar13 << 2));
      fVar2 = *(float *)(((uint)(uVar13 << 2) | 0x735900) + 4);
      fVar6 = ABS(*(float *)((int)puVar8 + 0x84));
      if (*(float *)(puVar8 + 0x11) - 0.0 < 0.0) {
        fVar6 = fVar10;
      }
      dVar22 = dVar33;
      if (0.0 < fVar3) {
        lVar14 = uVar11 - 0x150;
        lVar20 = uVar11 - 0xb8;
        lVar18 = uVar11 - 200;
        lVar21 = 2;
        fVar3 = (fVar6 - fVar3) / (fVar6 + fVar3);
        fVar6 = fVar3 * fVar3;
        *(float *)((int)puVar8 + 0xa4) = fVar3;
        *(float *)((int)puVar8 + 0x9c) = fVar3;
        *(float *)(puVar8 + 0x14) = fVar3;
        *(float *)(puVar8 + 0x13) = fVar3;
        fVar3 = fVar6 * fVar6;
        *(float *)((int)puVar8 + 0x9c) = *(float *)((int)puVar8 + 0x9c) * fVar6;
        *(float *)(puVar8 + 0x14) = *(float *)(puVar8 + 0x14) * fVar3;
        *(float *)((int)puVar8 + 0xa4) = *(float *)((int)puVar8 + 0xa4) * fVar3 * fVar6;
        do {
          *(float *)((int)lVar14 + 0x98) = *(float *)((int)lVar14 + 0x88) * fVar3 * fVar3;
          iVar17 = (int)lVar18;
          lVar18 = lVar18 + 8;
          lVar14 = lVar14 + 8;
          *(float *)((int)lVar20 + 4) = *(float *)(iVar17 + 4) * fVar3 * fVar3;
          lVar20 = lVar20 + 8;
          lVar21 = lVar21 + -1;
        } while (lVar21 != 0);
        lVar21 = 4;
        lVar20 = uVar11 - 200;
        pfVar19 = (float *)&DAT_007358e0;
        lVar14 = lVar15;
        lVar18 = lVar20;
        do {
          fVar3 = *pfVar19;
          fVar6 = pfVar19[1];
          pfVar19 = pfVar19 + 2;
          *(float *)((int)lVar14 + 0x98) = *(float *)((int)lVar14 + 0x98) * fVar3;
          lVar14 = lVar14 + 8;
          *(float *)((int)lVar18 + 4) = *(float *)((int)lVar18 + 4) * fVar6;
          lVar18 = lVar18 + 8;
          lVar21 = lVar21 + -1;
        } while (lVar21 != 0);
        lVar14 = 2;
        do {
          iVar17 = (int)lVar15;
          iVar16 = (int)lVar20;
          lVar15 = lVar15 + 0x10;
          lVar20 = lVar20 + 0x10;
          dVar22 = (double)((float)(dVar22 + (double)*(float *)(iVar17 + 0x98)) +
                            *(float *)(iVar16 + 4) + *(float *)(iVar16 + 8) +
                           *(float *)(iVar16 + 0xc));
          lVar14 = lVar14 + -1;
        } while (lVar14 != 0);
        dVar22 = (double)((float)(dVar22 + 0.7853981852531433) * fVar4 + fVar2);
      }
      dVar22 = (double)FastDiffRots(dVar22,(double)fVar7);
      if (dVar22 <= dVar33) {
        *(undefined1 *)(param_2 + 0x14c) = 5;
        *(undefined1 *)(param_2 + 0x14d) = 5;
        *(undefined1 *)(param_2 + 0x14e) = 5;
      }
      else {
        *(undefined1 *)(param_2 + 0x14c) = 4;
        *(undefined1 *)(param_2 + 0x14d) = 4;
        *(undefined1 *)(param_2 + 0x14e) = 4;
      }
      MB_initJump(param_1,param_2 + 0x120,uVar11 - 0xf0);
    }
    uVar12 = 1;
  }
  return uVar12;
}


// 0x0442a70 (0x1428 bytes)
// inlined: FastAtan2 @0x442c84, FastRSqrt @0x443a60
/* Moby 741 */

void UpdateMoby_741(void *this_,MobyInstance *moby)

{
  bool bVar1;
  byte bVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  float fVar9;
  uint uVar10;
  uint uVar11;
  undefined2 uVar12;
  ulonglong *puVar13;
  int iVar14;
  int iVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  ulonglong uVar19;
  int iVar20;
  float *pfVar21;
  int iVar22;
  uint uVar23;
  longlong lVar24;
  longlong lVar25;
  longlong lVar26;
  float *pfVar27;
  ulonglong uVar28;
  longlong lVar29;
  ulonglong unaff_r23;
  ulonglong unaff_r24;
  ulonglong unaff_r25;
  undefined8 uVar30;
  ulonglong unaff_r26;
  ulonglong unaff_r27;
  Spline *pSVar31;
  ulonglong unaff_r28;
  Spline *spline;
  ulonglong unaff_r29;
  ulonglong unaff_r30;
  ulonglong uVar32;
  ulonglong unaff_r31;
  ulonglong in_LR;
  longlong lVar33;
  double dVar34;
  double dVar35;
  double dVar36;
  ulonglong in_f31;
  double dVar37;
  GPiece<16> auVar38;
  GPiece<16> auVar39;
  GPiece<16> auVar40;
  GPiece<16> auVar41;
  
  uVar19 = ZEXT48(&stack0x00000000);
  lVar25 = uVar19 - 0x220;
  puVar13 = (ulonglong *)lVar25;
  *puVar13 = uVar19;
  puVar13[0x46] = in_LR;
  puVar13[0x43] = in_f31;
  puVar13[0x42] = unaff_r31;
  puVar13[0x41] = unaff_r30;
  puVar13[0x40] = unaff_r29;
  puVar13[0x3f] = unaff_r28;
  puVar13[0x3e] = unaff_r27;
  puVar13[0x3d] = unaff_r26;
  puVar13[0x3c] = unaff_r25;
  puVar13[0x3b] = unaff_r24;
  puVar13[0x3a] = unaff_r23;
  if (this_ == (void *)0x0) {
    return;
  }
  uVar23 = *(uint *)((int)this_ + 0x78);
  uVar32 = (ulonglong)uVar23;
  if (uVar23 == 0) {
    return;
  }
  uVar30 = 0;
  spline = (Spline *)0x0;
  pSVar31 = (Spline *)0x0;
  MB_getTarget((double)*(float *)(uVar23 + 0x230),this_,moby,uVar19 - 0xf0);
  iVar20 = *(int *)(puVar13 + 0x2e);
  if (*(int *)(uVar23 + 0x24c) != -1) {
    spline = Splines[*(int *)(uVar23 + 0x24c)];
  }
  if (*(int *)(uVar23 + 0x248) != -1) {
    pSVar31 = Splines[*(int *)(uVar23 + 0x248)];
    iVar20 = PointInsideComplexPoly
                       ((Vec4 *)(puVar13 + 0x26),(Vec4 *)pSVar31->points,pSVar31->cnt);
  }
  bVar1 = *(int *)(uVar23 + 0x38) != 0;
  if (bVar1) {
    *(undefined4 *)(uVar23 + 0x38) = 0;
  }
  FastDecTimerS32(uVar32 + 0x25c);
  if (*(char *)((int)this_ + 0x20) != '\f') {
    dVar37 = 0.0;
    *(undefined4 *)((int)puVar13 + 0x184) = 0;
    pfVar21 = (float *)MB_damage(this_,0x330000,0);
    iVar22 = MB_HandleDamage
                       ((MobyInstance *)this_,pfVar21,uVar32 + 0x20,0,puVar13 + 0x30,0,0,4);
    if (1 < *(int *)(puVar13 + 0x30)) {
      fVar9 = *(float *)((int)this_ + 0x10) - *pfVar21;
      fVar3 = *(float *)((int)this_ + 0x14) - pfVar21[1];
      dVar34 = ABS((double)fVar9);
      dVar35 = ABS((double)fVar3);
      *(float *)(puVar13 + 0x31) = fVar9;
      *(float *)((int)puVar13 + 0x18c) = fVar3;
      *(float *)(puVar13 + 0x32) = (float)(dVar34 - dVar35);
      uVar28 = (ulonglong)(*(uint *)(puVar13 + 0x31) >> 0x1c) & 8 |
               (ulonglong)(*(uint *)(puVar13 + 0x32) >> 0x1e) & 2 |
               (ulonglong)(*(uint *)((int)puVar13 + 0x18c) >> 0x1d) & 4;
      dVar36 = ABS((double)*(float *)(puVar13 + 0x31));
      if ((double)*(float *)(puVar13 + 0x32) - dVar37 < 0.0) {
        dVar36 = dVar35;
      }
      fVar9 = *(float *)(&g_atanQuadrantTable + (int)(uVar28 << 2));
      dVar35 = ABS((double)*(float *)((int)puVar13 + 0x18c));
      if ((double)*(float *)(puVar13 + 0x32) - dVar37 < 0.0) {
        dVar35 = dVar34;
      }
      fVar3 = *(float *)(((uint)(uVar28 << 2) | 0x735900) + 4);
      if (dVar37 < dVar36) {
        lVar24 = uVar19 - 0x210;
        lVar26 = uVar19 - 0x8c;
        lVar29 = uVar19 - 0x7c;
        lVar33 = 2;
        fVar5 = (float)(dVar35 - dVar36) / (float)(dVar35 + dVar36);
        fVar4 = fVar5 * fVar5;
        *(float *)(puVar13 + 0x34) = fVar5;
        *(float *)(puVar13 + 0x33) = fVar5;
        *(float *)((int)puVar13 + 0x19c) = fVar5;
        *(float *)((int)puVar13 + 0x194) = fVar5;
        fVar5 = fVar4 * fVar4;
        *(float *)(puVar13 + 0x33) = *(float *)(puVar13 + 0x33) * fVar4;
        *(float *)((int)puVar13 + 0x19c) = *(float *)((int)puVar13 + 0x19c) * fVar5;
        *(float *)(puVar13 + 0x34) = *(float *)(puVar13 + 0x34) * fVar5 * fVar4;
        do {
          *(float *)((int)lVar24 + 0x194) = *(float *)((int)lVar24 + 0x184) * fVar5 * fVar5;
          iVar14 = (int)lVar26;
          lVar24 = lVar24 + 8;
          lVar26 = lVar26 + 8;
          *(float *)((int)lVar29 + 4) = *(float *)(iVar14 + 4) * fVar5 * fVar5;
          lVar29 = lVar29 + 8;
          lVar33 = lVar33 + -1;
        } while (lVar33 != 0);
        lVar33 = 4;
        lVar29 = uVar19 - 0x8c;
        pfVar27 = (float *)&DAT_007358e0;
        lVar24 = lVar25;
        lVar26 = lVar29;
        do {
          fVar5 = *pfVar27;
          fVar4 = pfVar27[1];
          pfVar27 = pfVar27 + 2;
          *(float *)((int)lVar24 + 0x194) = *(float *)((int)lVar24 + 0x194) * fVar5;
          lVar24 = lVar24 + 8;
          *(float *)((int)lVar26 + 4) = *(float *)((int)lVar26 + 4) * fVar4;
          lVar26 = lVar26 + 8;
          lVar33 = lVar33 + -1;
        } while (lVar33 != 0);
        lVar24 = 2;
        do {
          iVar14 = (int)lVar25;
          iVar15 = (int)lVar29;
          lVar25 = lVar25 + 0x10;
          lVar29 = lVar29 + 0x10;
          dVar37 = (double)((float)(dVar37 + (double)*(float *)(iVar14 + 0x194)) +
                            *(float *)(iVar15 + 4) + *(float *)(iVar15 + 8) +
                           *(float *)(iVar15 + 0xc));
          lVar24 = lVar24 + -1;
        } while (lVar24 != 0);
        dVar37 = (double)((float)(dVar37 + 0.7853981852531433) * fVar9 + fVar3);
      }
      *(float *)((int)puVar13 + 0x184) = (float)dVar37;
      fVar9 = DAT_0071f418;
      *(undefined1 *)(uVar23 + 0x9d) = 0;
      *(undefined4 *)(uVar23 + 0x84) = 9;
      *(undefined4 *)(uVar23 + 0x74) = 0x3a03126f;
      *(float *)(uVar23 + 0x70) = fVar9 * 29.0;
    }
    fVar9 = g_FrameTime;
    if (iVar22 < 4) {
      if (0 < iVar22) {
        if (iVar22 < 2) {
          *(undefined4 *)(uVar23 + 0x20) = 0;
        }
        else if (iVar22 < 3) {
          *(undefined4 *)(uVar23 + 0x20) = 0;
        }
        else {
LAB_00442e28:
          *(float *)(uVar23 + 0x78) = g_FrameTime * 10.0;
          *(float *)(uVar23 + 0x7c) = fVar9 * 4.0;
          fVar9 = pfVar21[6];
          *(float *)(puVar13 + 6) = pfVar21[4];
          *(float *)(puVar13 + 7) = fVar9;
          fVar9 = pfVar21[7];
          *(float *)((int)puVar13 + 0x34) = pfVar21[5];
          *(float *)((int)puVar13 + 0x3c) = fVar9;
          MB_VecAtan2Angles
                    (puVar13[6],puVar13[7],uVar19 - 0x9c,uVar32 + 0x78,uVar32 + 0x7c);
          MB_StartKick((double)*(float *)((int)puVar13 + 0x184),this_,uVar32 + 0x60);
          *(undefined4 *)(uVar23 + 0xb0) = 0x40900000;
          *(undefined4 *)(uVar23 + 0xb4) = 0x41100000;
          *(undefined1 *)((int)this_ + 0x20) = 10;
        }
      }
    }
    else if (iVar22 < 8) {
      if (iVar22 < 6) {
        fVar9 = g_FrameTime * 14.0;
        *(float *)(uVar23 + 0x7c) = g_FrameTime * 5.0;
        *(float *)(uVar23 + 0x78) = fVar9;
        fVar9 = pfVar21[6];
        *(float *)(puVar13 + 6) = pfVar21[4];
        *(float *)(puVar13 + 7) = fVar9;
        fVar9 = pfVar21[7];
        *(float *)((int)puVar13 + 0x34) = pfVar21[5];
        *(float *)((int)puVar13 + 0x3c) = fVar9;
        MB_VecAtan2Angles(puVar13[6],puVar13[7],uVar19 - 0x9c,uVar32 + 0x78,uVar32 + 0x7c)
        ;
        MB_StartKick((double)*(float *)((int)puVar13 + 0x184),this_,uVar32 + 0x60);
        *(undefined4 *)(uVar23 + 0xb0) = 0x40900000;
        *(undefined4 *)(uVar23 + 0xb4) = 0x41100000;
        *(undefined1 *)((int)this_ + 0x20) = 10;
      }
      else {
        if (iVar22 < 7) goto LAB_00442e28;
        fVar9 = g_FrameTime * 12.0;
        *(float *)(uVar23 + 0x7c) = g_FrameTime * 5.0;
        *(float *)(uVar23 + 0x78) = fVar9;
        fVar9 = pfVar21[6];
        *(float *)(puVar13 + 6) = pfVar21[4];
        *(float *)(puVar13 + 7) = fVar9;
        fVar9 = pfVar21[7];
        *(float *)((int)puVar13 + 0x34) = pfVar21[5];
        *(float *)((int)puVar13 + 0x3c) = fVar9;
        MB_VecAtan2Angles(puVar13[6],puVar13[7],uVar19 - 0x9c,uVar32 + 0x78,uVar32 + 0x7c)
        ;
        MB_StartKick((double)*(float *)((int)puVar13 + 0x184),this_,uVar32 + 0x60);
        *(undefined4 *)(uVar23 + 0xb0) = 0x40900000;
        *(undefined4 *)(uVar23 + 0xb4) = 0x41100000;
        *(undefined1 *)((int)this_ + 0x20) = 10;
      }
    }
    else if (((iVar22 < 0xb) && (*(char *)((int)this_ + 0x20) != '\x04')) &&
            (worldUpdateTime ==
             (((int)worldUpdateTime >> 1) +
             (uint)((int)worldUpdateTime < 0 && (worldUpdateTime & 1) != 0)) * 2)) {
      iVar22 = rand();
      *(undefined1 *)((int)this_ + 0x50) = 0;
      *(undefined4 *)((int)this_ + 0x54) = 0x3f666666;
      *(char *)((int)this_ + 0x52) = (char)iVar22 + (char)(iVar22 / 0xc) * -0xc;
      dVar37 = (double)FastIntToDouble(0xd);
      *(float *)((int)this_ + 0x5c) = (float)(1.0 / dVar37);
      UpdateMobyFrameData((MobyInstance *)this_);
    }
    if (1 < *(int *)(puVar13 + 0x30)) {
      uVar10 = (int)*(uint *)(uVar23 + 0x20) >> 0x1f;
      uVar11 = (int)pfVar21[0xb] >> 0x1f;
      fVar9 = pfVar21[0xb];
      if ((int)((uVar11 >> 1 ^ (uint)pfVar21[0xb]) - uVar11) <
          (int)((uVar10 >> 1 ^ *(uint *)(uVar23 + 0x20)) - uVar10)) {
        auVar38 = ZEXT416(0xffffffff);
        auVar38 = auVar38 | auVar38 << 0x20 | auVar38 << 0x40 | auVar38 << 0x60;
        *(undefined1 *)(uVar23 + 0x117) = 0xfa;
        auVar39 = vectorShiftLeftIntegerWord(auVar38,auVar38);
        *(float *)(uVar23 + 0x20) = *(float *)(uVar23 + 0x20) - fVar9;
        auVar38 = loadVectorLeftIndexed(0x28,0x442a14);
        auVar40 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
        auVar38 = auVar38 >> 0x60 & (GPiece<16>)0xffffffff;
        auVar38 = vectorMultiplyAddFloatingPoint
                            (auVar40,auVar38 | auVar38 << 0x20 | auVar38 << 0x40 | auVar38 << 0x60,
                             auVar39);
        auVar38 = vectorConvertToSignedFixedPointWordSaturate(auVar38,0);
        auVar38 = vectorSplatHalfWord(auVar38,1);
        uVar12 = storeVectorElementHalfWordIndexed(auVar38,0x26,uVar32);
        *(undefined2 *)(uVar23 + 0x26) = uVar12;
        MB_UpdateLightsTransition(this_,uVar32 + 0x110);
      }
      else {
        *(undefined4 *)(uVar23 + 0x20) = 0;
        *(undefined1 *)((int)this_ + 0x20) = 0xc;
        *(ushort *)((int)this_ + 0x34) = *(ushort *)((int)this_ + 0x34) & 0xefff;
        if (((uint)pfVar21[0xc] & 1) != 0) {
          fVar9 = pfVar21[4];
          *(float *)(uVar23 + 0x220) = fVar9;
          fVar3 = pfVar21[5];
          *(float *)(uVar23 + 0x224) = fVar3;
          fVar5 = pfVar21[6];
          *(float *)(uVar23 + 0x228) = fVar5;
          *(float *)(uVar23 + 0x22c) = pfVar21[7];
          fVar4 = SQRT(fVar5 * fVar5 + fVar9 * fVar9 + fVar3 * fVar3);
          if (*(float *)(uVar23 + 0xe4) < fVar4) {
            fVar4 = *(float *)(uVar23 + 0xe4) / fVar4;
            *(float *)(uVar23 + 0x220) = fVar9 * fVar4;
            *(float *)(uVar23 + 0x224) = fVar3 * fVar4;
            *(float *)(uVar23 + 0x228) = fVar5 * fVar4;
          }
        }
        fVar9 = g_FrameTime;
        *(float *)(uVar23 + 0x78) = g_FrameTime * 4.0;
        *(float *)(uVar23 + 0x7c) = fVar9 * 8.0;
        fVar9 = pfVar21[6];
        *(float *)(puVar13 + 6) = pfVar21[4];
        *(float *)(puVar13 + 7) = fVar9;
        fVar9 = pfVar21[7];
        *(float *)((int)puVar13 + 0x34) = pfVar21[5];
        *(float *)((int)puVar13 + 0x3c) = fVar9;
        MB_VecAtan2Angles(puVar13[6],puVar13[7],uVar19 - 0x9c,uVar32 + 0x78,uVar32 + 0x7c)
        ;
        MB_StartKick((double)*(float *)((int)puVar13 + 0x184),this_,uVar32 + 0x60);
        *(undefined4 *)(uVar23 + 0xb0) = 0x40400000;
        *(undefined4 *)(uVar23 + 0xb4) = 0x40f00000;
        *(undefined1 *)(uVar23 + 0x117) = 0x78;
        MB_UpdateLightsTransition(this_,uVar32 + 0x110);
      }
    }
    *(undefined1 *)((int)this_ + 0xa4) = 0xff;
  }
  MB_ColorDyingMoby(this_,uVar32 + 0x110);
  bVar2 = *(byte *)((int)this_ + 0x20);
  if (5 < bVar2) {
    if (8 < bVar2) {
      if (0xb < bVar2) {
        if (0xc < bVar2) {
          return;
        }
        uVar23 = MB_UpdateKick((MobyInstance *)this_,(KickVars *)(uVar23 + 0x60));
        if ((uVar23 & 0x40) == 0) {
          return;
        }
        puVar13[0x12] = 0xffffffffffffffff;
        puVar13[0x14] = 0;
        puVar13[0x15] = 1;
        puVar13[0x16] = 0xffffffffffffffff;
        puVar13[0x17] = 0;
        MB_genericExplosion
                  (0,0,0x4000000000000000,0x3ff0000000000000,0x4010000000000000,0x3ff0000000000000,
                   0x401c000000000000,this_,uVar32 + 0x220,0,1,0xffffffffffffffff,3,3,5);
        DeleteMoby((MobyInstance *)this_);
        return;
      }
      if (9 < bVar2) {
        uVar23 = MB_UpdateKick((MobyInstance *)this_,(KickVars *)(uVar23 + 0x60));
        if ((uVar23 & 0x40) == 0) {
          return;
        }
        if (*(char *)((int)this_ + 0xbc) == '\0') {
          *(undefined1 *)((int)this_ + 0x20) = 3;
          if (*(char *)((int)this_ + 0x53) == '\x01') {
            return;
          }
          puVar13[0x37] = (longlong)(int)(animationSpeed * 10.5);
          MB_SetAnimation(this_,1,0,*(undefined4 *)((int)puVar13 + 0x1bc));
          return;
        }
        if (*(char *)((int)this_ + 0x53) != '\x01') {
          puVar13[0x37] = (longlong)(int)(animationSpeed * 10.5);
          MB_SetAnimation(this_,1,0,*(undefined4 *)((int)puVar13 + 0x1bc));
        }
        *(undefined1 *)((int)this_ + 0x20) = 5;
        return;
      }
      if ((*(byte *)((int)this_ + 0x70) & 2) == 0) {
        return;
      }
      if (*(char *)((int)this_ + 0xbc) == '\0') {
        *(undefined1 *)((int)this_ + 0x20) = 3;
        if (*(char *)((int)this_ + 0x53) == '\x01') {
          return;
        }
        puVar13[0x37] = (longlong)(int)(animationSpeed * 10.5);
        MB_SetAnimation(this_,1,0,*(undefined4 *)((int)puVar13 + 0x1bc));
        return;
      }
      if (*(char *)((int)this_ + 0x53) != '\x01') {
        puVar13[0x37] = (longlong)(int)(animationSpeed * 10.5);
        MB_SetAnimation(this_,1,0,*(undefined4 *)((int)puVar13 + 0x1bc));
      }
      *(undefined1 *)((int)this_ + 0x20) = 5;
      return;
    }
    if (6 < bVar2) {
      if (7 < bVar2) {
        if ((*(byte *)((int)this_ + 0x70) & 2) == 0) {
          return;
        }
        if (*(char *)((int)this_ + 0x53) != '\x01') {
          puVar13[0x37] = (longlong)(int)(animationSpeed * 10.5);
          MB_SetAnimation(this_,1,0,*(undefined4 *)((int)puVar13 + 0x1bc));
        }
        *(undefined1 *)((int)this_ + 0x20) = 5;
        return;
      }
      *(undefined1 *)((int)this_ + 0xbc) = 1;
      dVar37 = (double)BlendAnimFrame((MobyInstance *)this_);
      if ((dVar37 <= 16.0) || (26.5 <= dVar37)) {
        if ((dVar37 <= 34.0) || (48.0 <= dVar37)) goto LAB_00443b68;
      }
      else {
        uVar30 = 1;
      }
      GetBonePosition(this_,uVar30,uVar19 - 0x140);
      fVar9 = *(float *)((int)puVar13 + 0xe4) - *(float *)((int)this_ + 0x14);
      fVar3 = *(float *)(puVar13 + 0x1c) - *(float *)((int)this_ + 0x10);
      fVar5 = *(float *)(puVar13 + 0x1d) - *(float *)(puVar13 + 0x1d);
      *(undefined4 *)((int)puVar13 + 0xfc) = *(undefined4 *)((int)puVar13 + 0xec);
      fVar17 = 0.0;
      fVar18 = fVar5 * fVar5 + fVar3 * fVar3 + fVar9 * fVar9;
      fVar4 = fVar17;
      fVar16 = fVar17;
      if (SQRT(fVar18) != 0.0) {
        fVar17 = 1.0 / SQRT(fVar18);
        fVar17 = -(fVar18 * fVar17 * fVar17 - 1.0) * fVar17 * 0.5 + fVar17;
        fVar17 = -(fVar18 * fVar17 * fVar17 - 1.0) * fVar17 * 0.5 + fVar17;
        fVar17 = -(fVar18 * fVar17 * fVar17 - 1.0) * fVar17 * 0.5 + fVar17;
        fVar16 = fVar3 * fVar17;
        fVar4 = fVar9 * fVar17;
        fVar17 = fVar5 * fVar17;
      }
      *(float *)(puVar13 + 0x1e) = fVar16;
      *(float *)((int)puVar13 + 0xf4) = fVar4;
      *(float *)(puVar13 + 0x1f) = fVar17;
      SetCollDamIn((double)*(float *)(uVar23 + 0x238),uVar19 - 0x120,this_,1);
      iVar20 = CollMobySphere((double)*(float *)(uVar23 + 0x23c),uVar19 - 0x140);
      if ((iVar20 != 0) && (g_CollOutput.pMoby == *(MobyInstance **)(puVar13 + 0x2e))) {
        if (*(char *)((int)this_ + 0x53) != '\a') {
          puVar13[0x37] = (longlong)(int)(animationSpeed * 5.5);
          MB_SetAnimation(this_,7,0,*(undefined4 *)((int)puVar13 + 0x1bc));
        }
        *(undefined1 *)((int)this_ + 0x20) = 8;
      }
LAB_00443b68:
      if ((*(byte *)((int)this_ + 0x70) & 2) != 0) {
        if (*(char *)((int)this_ + 0x53) != '\x01') {
          puVar13[0x37] = (longlong)(int)(animationSpeed * 10.5);
          MB_SetAnimation(this_,1,0,*(undefined4 *)((int)puVar13 + 0x1bc));
        }
        *(undefined1 *)((int)this_ + 0x20) = 5;
      }
      M741_00442088(this_,uVar32,uVar19 - 0xf0);
      return;
    }
    *(undefined1 *)((int)this_ + 0xbc) = 1;
    M741_00442088(this_,uVar32,uVar19 - 0xf0);
    iVar22 = *(int *)(puVar13 + 0x2e);
    if (iVar22 != 0) {
      MB_UpdateNavMoveTurning(this_,uVar32 + 0xc0,uVar19 - 0xf0,uVar32 + 0x220);
      iVar22 = *(int *)(puVar13 + 0x2e);
    }
    fVar9 = *(float *)((int)this_ + 0x14) - *(float *)((int)puVar13 + 0x134);
    fVar3 = *(float *)((int)this_ + 0x10) - *(float *)(puVar13 + 0x26);
    if (*(int *)(uVar23 + 0x25c) == 0) {
      if (iVar22 == 0) goto LAB_00443920;
      if (SQRT(fVar3 * fVar3 + fVar9 * fVar9) < *(float *)(uVar23 + 0x234)) {
        if (*(char *)((int)this_ + 0x53) != '\x06') {
          puVar13[0x37] = (longlong)(int)(animationSpeed * 10.5);
          MB_SetAnimation(this_,6,0,*(undefined4 *)((int)puVar13 + 0x1bc));
        }
        auVar38 = ZEXT416(0xffffffff);
        auVar38 = auVar38 | auVar38 << 0x20 | auVar38 << 0x40 | auVar38 << 0x60;
        auVar40 = vectorShiftLeftIntegerWord(auVar38,auVar38);
        auVar38 = loadVectorLeftIndexed(0x240,uVar32);
        auVar39 = loadVectorRightIndexed(0x250,uVar32);
        auVar39 = vectorConvertFromSignedFixedPointWord(auVar38 | auVar39,0);
        auVar38 = loadVectorLeftIndexed(0x3c,0x442a14);
        auVar38 = auVar38 >> 0x60 & (GPiece<16>)0xffffffff;
        auVar41 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
        auVar38 = vectorAddFloatingPoint
                            (auVar39,auVar38 | auVar38 << 0x20 | auVar38 << 0x40 | auVar38 << 0x60);
        auVar38 = vectorMultiplyAddFloatingPoint(auVar41,auVar38,auVar40);
        auVar38 = vectorConvertToSignedFixedPointWordSaturate(auVar38,0);
        auVar38 = auVar38 >> 0x60 & (GPiece<16>)0xffffffff;
        uVar6 = storeVectorElementWordIndexed
                          (auVar38 | auVar38 << 0x20 | auVar38 << 0x40 | auVar38 << 0x60,0x25c,
                           uVar32);
        *(undefined4 *)(uVar23 + 0x25c & 0xfffffffc) = uVar6;
        *(undefined1 *)((int)this_ + 0x20) = 7;
        return;
      }
    }
    if ((iVar22 != 0) && (iVar20 != 0)) {
      return;
    }
LAB_00443920:
    if (bVar1) {
      return;
    }
    if (*(char *)((int)this_ + 0x53) != '\x01') {
      puVar13[0x37] = (longlong)(int)(animationSpeed * 5.5);
      MB_SetAnimation(this_,1,0,*(undefined4 *)((int)puVar13 + 0x1bc));
    }
    *(undefined1 *)((int)this_ + 0x20) = 5;
    return;
  }
  if (bVar2 != 5) {
    if (bVar2 == 4) {
      M741_00442088(this_,uVar32,uVar19 - 0xf0);
      iVar20 = MB_updateJump(this_,uVar32 + 0x120);
      if (iVar20 != 4) {
        return;
      }
      if (*(char *)((int)this_ + 0x53) != '\x01') {
        puVar13[0x37] = (longlong)(int)(animationSpeed * 5.5);
        MB_SetAnimation(this_,1,0,*(undefined4 *)((int)puVar13 + 0x1bc));
      }
      *(undefined1 *)((int)this_ + 0x20) = 3;
      return;
    }
    if (bVar2 == 3) {
      if (((*(int *)(puVar13 + 0x2e) == 0) || (iVar20 == 0)) && (!bVar1)) {
        return;
      }
      iVar20 = M741_004422e0(this_,uVar32,spline,pSVar31);
      if (iVar20 == 0) {
        return;
      }
      *(undefined1 *)((int)this_ + 0x20) = 4;
      return;
    }
    if (bVar2 == 2) {
      M741_00442088(this_,uVar32,uVar19 - 0xf0);
      if ((*(byte *)((int)this_ + 0x70) & 2) == 0) {
        return;
      }
      if (*(char *)((int)this_ + 0x53) != '\x01') {
        puVar13[0x37] = (longlong)(int)(animationSpeed * 10.5);
        MB_SetAnimation(this_,1,0,*(undefined4 *)((int)puVar13 + 0x1bc));
      }
      *(undefined1 *)((int)this_ + 0x20) = 3;
      return;
    }
    if (bVar2 != 1) {
      if (bVar2 != 0) {
        return;
      }
      *(ushort *)((int)this_ + 0x34) = *(ushort *)((int)this_ + 0x34) | 0x1000;
      *(undefined1 *)(uVar23 + 0x220) = 0;
      *(undefined1 *)(uVar23 + 0x221) = 0;
      *(undefined1 *)(uVar23 + 0x222) = 0;
      *(undefined1 *)(uVar23 + 0x223) = 0;
      *(undefined1 *)(uVar23 + 0x224) = 0;
      *(undefined1 *)(uVar23 + 0x225) = 0;
      *(undefined1 *)(uVar23 + 0x226) = 0;
      *(undefined1 *)(uVar23 + 0x227) = 0;
      *(undefined1 *)(uVar23 + 0x228) = 0;
      *(undefined1 *)(uVar23 + 0x229) = 0;
      *(undefined1 *)(uVar23 + 0x22a) = 0;
      *(undefined1 *)(uVar23 + 0x22b) = 0;
      *(undefined1 *)(uVar23 + 0x22c) = 0;
      *(undefined1 *)(uVar23 + 0x22d) = 0;
      *(undefined1 *)(uVar23 + 0x22e) = 0;
      *(undefined1 *)(uVar23 + 0x22f) = 0;
      uVar6 = *(undefined4 *)((int)this_ + 0x10);
      uVar7 = *(undefined4 *)((int)this_ + 0x14);
      *(undefined4 *)(puVar13 + 0x1a) = uVar6;
      uVar8 = *(undefined4 *)((int)this_ + 0x1c);
      *(undefined4 *)((int)puVar13 + 0xd4) = uVar7;
      *(undefined4 *)((int)puVar13 + 0xdc) = uVar8;
      fVar9 = *(float *)((int)this_ + 0x18);
      *(undefined4 *)(puVar13 + 0x18) = uVar6;
      *(undefined4 *)((int)puVar13 + 0xc4) = uVar7;
      *(undefined4 *)((int)puVar13 + 0xcc) = uVar8;
      *(float *)(puVar13 + 0x1b) = fVar9 + 1.0;
      *(float *)(puVar13 + 0x19) = fVar9 - 9.0;
      iVar20 = CollLine(uVar19 - 0x150,uVar19 - 0x160,2,this_,0);
      fVar3 = g_CollOutput.ip.x;
      fVar9 = *(float *)((int)this_ + 0x10);
      if (iVar20 != 0) {
        *(float *)((int)this_ + 0x10) = g_CollOutput.ip.x;
        *(float *)((int)this_ + 0x14) = g_CollOutput.ip.y;
        fVar9 = g_CollOutput.ip.z;
        *(float *)((int)this_ + 0x1c) = g_CollOutput.ip.w;
        *(float *)((int)this_ + 0x18) = fVar9 + 0.01;
        fVar9 = fVar3;
      }
      *(float *)(uVar23 + 0x210) = fVar9;
      *(undefined4 *)(uVar23 + 0x214) = *(undefined4 *)((int)this_ + 0x14);
      *(undefined4 *)(uVar23 + 0x218) = *(undefined4 *)((int)this_ + 0x18);
      *(undefined4 *)(uVar23 + 0x21c) = *(undefined4 *)((int)this_ + 0x1c);
      if (spline != (Spline *)0x0) {
        iVar20 = PathFindClosestPnt(0.0,(Vec4 *)((int)this_ + 0x10),spline);
        *(int *)(uVar23 + 600) = iVar20;
      }
      if (*(char *)((int)this_ + 0x53) != '\x01') {
        puVar13[0x37] = (longlong)(int)(animationSpeed * 10.5);
        MB_SetAnimation(this_,1,0,*(undefined4 *)((int)puVar13 + 0x1bc));
      }
      *(undefined1 *)((int)this_ + 0x20) = 1;
      return;
    }
    if (((*(int *)(puVar13 + 0x2e) == 0) || (iVar20 == 0)) && (!bVar1)) {
      return;
    }
    *(undefined1 *)((int)this_ + 0x20) = 2;
    if (*(char *)((int)this_ + 0x53) == '\x02') {
      return;
    }
    puVar13[0x37] = (longlong)(int)(animationSpeed * 10.5);
    MB_SetAnimation(this_,2,0,*(undefined4 *)((int)puVar13 + 0x1bc));
    return;
  }
  *(undefined1 *)((int)this_ + 0xbc) = 1;
  M741_00442088(this_,uVar32,uVar19 - 0xf0);
  fVar5 = animationSpeed;
  fVar9 = *(float *)((int)this_ + 0x14) - *(float *)((int)puVar13 + 0x134);
  fVar3 = *(float *)((int)this_ + 0x10) - *(float *)(puVar13 + 0x26);
  if (*(int *)(uVar23 + 0x25c) == 0) {
    if (*(int *)(puVar13 + 0x2e) != 0) {
      if (SQRT(fVar3 * fVar3 + fVar9 * fVar9) < *(float *)(uVar23 + 0x234)) {
        auVar38 = ZEXT416(0xffffffff);
        auVar39 = auVar38 | auVar38 << 0x20 | auVar38 << 0x40 | auVar38 << 0x60;
        auVar38 = loadVectorLeftIndexed(0x240,uVar32);
        auVar40 = vectorShiftLeftIntegerWord(auVar39,auVar39);
        auVar39 = loadVectorRightIndexed(0x250,uVar32);
        auVar39 = vectorConvertFromSignedFixedPointWord(auVar38 | auVar39,0);
        auVar38 = loadVectorLeftIndexed(0x3c,0x442a14);
        auVar38 = auVar38 >> 0x60 & (GPiece<16>)0xffffffff;
        auVar41 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
        auVar38 = vectorAddFloatingPoint
                            (auVar39,auVar38 | auVar38 << 0x20 | auVar38 << 0x40 | auVar38 << 0x60);
        auVar38 = vectorMultiplyAddFloatingPoint(auVar41,auVar38,auVar40);
        auVar38 = vectorConvertToSignedFixedPointWordSaturate(auVar38,0);
        auVar38 = auVar38 >> 0x60 & (GPiece<16>)0xffffffff;
        uVar6 = storeVectorElementWordIndexed
                          (auVar38 | auVar38 << 0x20 | auVar38 << 0x40 | auVar38 << 0x60,0x25c,
                           uVar32);
        *(undefined4 *)(uVar23 + 0x25c & 0xfffffffc) = uVar6;
        if (*(char *)((int)this_ + 0x53) != '\x06') {
          puVar13[0x37] = (longlong)(int)(fVar5 * 10.5);
          MB_SetAnimation(this_,6,0,*(undefined4 *)((int)puVar13 + 0x1bc));
        }
        *(undefined1 *)((int)this_ + 0x20) = 7;
        return;
      }
      goto LAB_00443774;
    }
  }
  else {
LAB_00443774:
    if ((*(int *)(puVar13 + 0x2e) != 0) && (iVar20 != 0)) goto LAB_0044378c;
  }
  if (!bVar1) {
    return;
  }
LAB_0044378c:
  if (*(char *)((int)this_ + 0x53) != '\x03') {
    puVar13[0x37] = (longlong)(int)(animationSpeed * 10.5);
    MB_SetAnimation(this_,3,0,*(undefined4 *)((int)puVar13 + 0x1bc));
  }
  *(undefined1 *)((int)this_ + 0x20) = 6;
  return;
}


