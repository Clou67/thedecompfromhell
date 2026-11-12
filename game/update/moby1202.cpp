// game/update/moby1202.cpp -- reconstructed from NPEA00385 EBOOT
// STATUS: NOT STARTED (raw Ghidra output)
// 7 functions, 0x1fad90-0x1ff1e4
#include <math.h>
#include "game/update/moby1202.h"
#include "game/camera.h"
#include "game/collproc.h"
#include "game/debug.h"
#include "game/hero.h"
#include "game/mobyfunc.h"
#include "game/mobyutil.h"
#include "game/partupd.h"
#include "game/update.h"
#include "idol/fastfunc.h"
#include "idol/mathfunc.h"
#include "idol/xUnk.h"

// 0x01fad90 (0x14 bytes)
void M1202_001fad90(void)

{
  DAT_0076644c = 0x10000;
  return;
}


// 0x01fade0 (0x4ec bytes)
void M1202_001fade0(int param_1)

{
  float fVar1;
  int iVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  int iVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  int iVar12;
  int iVar13;
  double dVar14;
  double dVar15;
  double dVar16;
  double dVar17;
  double dVar18;
  double dVar19;
  double dVar20;
  double dVar21;
  float local_d0;
  undefined4 local_cc;
  float local_c8;
  undefined4 local_c4;
  float local_c0;
  float local_bc;
  float local_b8;
  float local_b4;
  float local_b0;
  float local_ac;
  float local_a8;
  float local_a4;
  longlong local_a0;
  
  iVar6 = DAT_007664c0;
  iVar12 = 0;
  iVar2 = *(int *)(param_1 + 0x78);
  if (0 < DAT_007664c0) {
    do {
      local_d0 = *(float *)(param_1 + 0x10);
      local_cc = *(undefined4 *)(param_1 + 0x14);
      local_c8 = *(float *)(param_1 + 0x18);
      local_c4 = *(undefined4 *)(param_1 + 0x1c);
      MB_RandomizeVector(DAT_007664c8,&local_d0);
      dVar20 = 0.550000011920929;
      local_c8 = local_c8 + 0.55;
      dVar14 = (double)MB_randRot();
      dVar15 = (double)MB_randRangeFloat(DAT_007664d4,DAT_007664d8);
      dVar16 = (double)MB_randRangeFloat(DAT_007664dc,DAT_007664e0);
      if (*(char *)(param_1 + 0x20) == '\v') {
        dVar15 = (double)(float)(dVar15 * dVar20);
        dVar16 = (double)(float)(dVar16 * dVar20);
        local_c8 = local_c8 - 0.2;
      }
      fVar1 = (float)(dVar14 + 1.570796251296997);
      iVar13 = 0;
      dVar20 = (double)(float)(3.141592502593994 - dVar14);
      if (dVar14 - (double)(float)(3.141592502593994 - dVar14) < 0.0) {
        dVar20 = dVar14;
      }
      fVar3 = 3.1415925 - fVar1;
      if (fVar1 - (3.1415925 - fVar1) < 0.0) {
        fVar3 = fVar1;
      }
      dVar17 = (double)(float)(-3.141592502593994 - dVar14);
      if ((double)(float)(-3.141592502593994 - dVar14) - dVar20 < 0.0) {
        dVar17 = dVar20;
      }
      fVar4 = -3.1415925 - fVar1;
      if ((-3.1415925 - fVar1) - fVar3 < 0.0) {
        fVar4 = fVar3;
      }
      dVar14 = (double)(float)(dVar17 * dVar17);
      fVar5 = fVar4 * fVar4;
      dVar19 = (double)(float)(dVar14 * (double)(float)(dVar14 * dVar17));
      fVar1 = fVar5 * fVar5 * fVar4;
      dVar20 = (double)(float)(dVar14 * dVar19);
      dVar18 = (double)g_FrameTime;
      local_b8 = (float)(dVar18 * dVar16);
      fVar3 = fVar5 * fVar1;
      local_a0 = (longlong)DAT_00766504;
      dVar16 = 0.0;
      dVar21 = 0.5;
      local_c0 = *(float *)(iVar2 + 0x70) * 0.5 +
                 (float)(dVar18 * dVar15) *
                 (fVar5 * fVar3 * 2.601887e-06 +
                 fVar3 * -0.0001980741 + fVar1 * 0.0083330255 + fVar5 * fVar4 * -0.16666657 + fVar4)
      ;
      local_bc = *(float *)(iVar2 + 0x74) * 0.5 +
                 (float)(dVar18 * dVar15) *
                 ((float)(dVar14 * dVar20) * 2.601887e-06 +
                 (float)(dVar20 * -0.0001980741071747616 +
                        (double)(float)(dVar19 * 0.008333025500178337 +
                                       (double)(float)((double)(float)(dVar14 * dVar17) *
                                                       -0.16666656732559204 + dVar17))));
      local_a4 = local_b4;
      local_a8 = -(DAT_007664e4 * g_FrameTimeSq *
                   (float)(longlong)(animationSpeed * (float)((double)local_a0 + 0.5)) - local_b8);
      local_b0 = local_c0;
      local_ac = local_bc;
      if (0 < DAT_007664c4) {
        dVar14 = 1.5;
        dVar15 = 1.0;
        dVar20 = 2.5;
        do {
          dVar17 = (double)MB_randRangeFloat((float)dVar21,(float)dVar14);
          local_b4 = (float)((double)DAT_007664e8 * dVar17);
          local_a4 = (float)((double)DAT_007664ec * dVar17);
          MB_RandomizeVector(DAT_007664cc,&local_d0);
          MB_RandomizeVector(DAT_007664d0 * g_FrameTime,&local_b0);
          uVar8 = DAT_007664f8;
          uVar7 = DAT_007664f0;
          MB_randRangeFloat((float)dVar16,(float)dVar15);
          uVar9 = FastLerpColor(uVar7,uVar8);
          uVar8 = DAT_007664fc;
          uVar7 = DAT_007664f4;
          MB_randRangeFloat((float)dVar16,(float)dVar15);
          uVar10 = FastLerpColor(uVar7,uVar8);
          fVar1 = animationSpeed * (float)((double)(longlong)DAT_00766500 + dVar21);
          local_a0 = (longlong)DAT_00766508;
          fVar3 = animationSpeed * (float)((double)(longlong)DAT_00766504 + dVar21);
          dVar17 = (double)MB_randRangeFloat
                                     ((float)((double)local_a0 * dVar21),
                                      (float)((double)local_a0 * dVar20));
          uVar11 = FastDoubleToInt((double)(float)(dVar17 * (double)animationSpeed));
          SpawnPart_2
                    (&local_d0,&local_c0,&local_b0,uVar9,uVar10,(int)fVar1,(int)fVar3,uVar11);
          iVar13 = iVar13 + 1;
        } while (iVar13 < DAT_007664c4);
      }
      iVar12 = iVar12 + 1;
    } while (iVar12 < iVar6);
  }
  return;
}


// 0x01fb2f0 (0x1c8 bytes)
void M1202_001fb2f0(void)

{
  undefined8 uVar1;
  undefined8 in_r6;
  undefined8 in_r7;
  undefined8 uVar2;
  undefined8 uVar3;
  double dVar4;
  GPiece<24> local_50;
  
  MB_randRot();
  dVar4 = 0.0;
  MB_randRangeFloat(0.0,DAT_007664bc);
  uVar2 = MB_randRangeFloat((float)dVar4,DAT_007664ac);
  uVar3 = MB_randRangeFloat(DAT_007664ac,DAT_007664b0);
  uVar1 = MB_randRange(DAT_007664b4,DAT_007664b8);
  SpawnPart_52(uVar2,uVar3,local_50,DAT_007664a4,DAT_007664a8,in_r6,in_r7,uVar1);
  return;
}


// 0x01fb4d0 (0x700 bytes)
// inlined: FastAtan2 @0x1fb5e4, FastAtan2 @0x1fb7c8, FastAtan2 @0x1fba10
double M1202_001fb4d0(int param_1)

{
  byte bVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  ushort uVar11;
  int iVar12;
  ulonglong *puVar13;
  int iVar14;
  int iVar15;
  uint uVar16;
  float fVar17;
  ulonglong uVar18;
  ulonglong uVar19;
  longlong lVar20;
  longlong lVar21;
  longlong lVar22;
  float *pfVar23;
  ulonglong unaff_r28;
  longlong lVar24;
  ulonglong unaff_r29;
  ulonglong unaff_r30;
  ushort *puVar25;
  ulonglong unaff_r31;
  ulonglong in_LR;
  longlong lVar26;
  double dVar27;
  double dVar28;
  double dVar29;
  ulonglong in_f26;
  double dVar30;
  ulonglong in_f27;
  double dVar31;
  ulonglong in_f28;
  ulonglong in_f29;
  double dVar32;
  double dVar33;
  ulonglong in_f30;
  double dVar34;
  ulonglong in_f31;
  double dVar35;
  
  uVar18 = ZEXT48(&stack0x00000000);
  lVar21 = uVar18 - 0x150;
  puVar13 = (ulonglong *)lVar21;
  *puVar13 = uVar18;
  puVar13[0x2c] = in_LR;
  puVar13[0x24] = in_f26;
  puVar13[0x25] = in_f27;
  puVar13[0x26] = in_f28;
  puVar13[0x27] = in_f29;
  puVar13[0x28] = in_f30;
  puVar13[0x29] = in_f31;
  puVar13[0x23] = unaff_r31;
  puVar13[0x20] = unaff_r28;
  iVar12 = *(int *)(param_1 + 0x78);
  puVar13[0x22] = unaff_r30;
  bVar1 = *(byte *)(param_1 + 0x21);
  dVar35 = 0.7853981852531433;
  fVar2 = *(float *)(param_1 + 0x18);
  puVar13[0x21] = unaff_r29;
  iVar12 = *(int *)(iVar12 + 0x160);
  if (bVar1 == 0xff) {
    fVar2 = *(float *)(param_1 + 0x10) - *(float *)(iVar12 + 0x10);
    fVar3 = *(float *)(param_1 + 0x14) - *(float *)(iVar12 + 0x14);
    fVar4 = ABS(fVar2);
    fVar9 = ABS(fVar3);
    *(float *)(puVar13 + 0x11) = fVar2;
    *(float *)((int)puVar13 + 0x8c) = fVar3;
    *(float *)(puVar13 + 0x12) = fVar4 - fVar9;
    dVar35 = 0.0;
    uVar19 = (ulonglong)(*(uint *)(puVar13 + 0x11) >> 0x1c) & 8 |
             (ulonglong)(*(uint *)(puVar13 + 0x12) >> 0x1e) & 2 |
             (ulonglong)(*(uint *)((int)puVar13 + 0x8c) >> 0x1d) & 4;
    fVar2 = ABS(*(float *)(puVar13 + 0x11));
    if (*(float *)(puVar13 + 0x12) - 0.0 < 0.0) {
      fVar2 = fVar9;
    }
    fVar9 = *(float *)(&g_atanQuadrantTable + (int)(uVar19 << 2));
    fVar3 = *(float *)(((uint)(uVar19 << 2) | 0x735900) + 4);
    fVar5 = ABS(*(float *)((int)puVar13 + 0x8c));
    if (*(float *)(puVar13 + 0x12) - 0.0 < 0.0) {
      fVar5 = fVar4;
    }
    if (0.0 < fVar2) {
      lVar26 = 2;
      fVar2 = (fVar5 - fVar2) / (fVar5 + fVar2);
      fVar4 = fVar2 * fVar2;
      *(float *)((int)puVar13 + 0xd4) = fVar2;
      *(float *)(puVar13 + 0x1b) = fVar2;
      *(float *)((int)puVar13 + 0xdc) = fVar2;
      *(float *)(puVar13 + 0x1c) = fVar2;
      lVar24 = uVar18 - 0x140;
      fVar2 = fVar4 * fVar4;
      lVar20 = uVar18 - 0x7c;
      lVar22 = uVar18 - 0x6c;
      *(float *)(puVar13 + 0x1b) = *(float *)(puVar13 + 0x1b) * fVar4;
      *(float *)((int)puVar13 + 0xdc) = *(float *)((int)puVar13 + 0xdc) * fVar2;
      *(float *)(puVar13 + 0x1c) = *(float *)(puVar13 + 0x1c) * fVar2 * fVar4;
      do {
        *(float *)((int)lVar24 + 0xd4) = *(float *)((int)lVar24 + 0xc4) * fVar2 * fVar2;
        iVar12 = (int)lVar20;
        lVar20 = lVar20 + 8;
        lVar24 = lVar24 + 8;
        *(float *)((int)lVar22 + 4) = *(float *)(iVar12 + 4) * fVar2 * fVar2;
        lVar22 = lVar22 + 8;
        lVar26 = lVar26 + -1;
      } while (lVar26 != 0);
      lVar26 = 4;
      lVar24 = uVar18 - 0x7c;
      pfVar23 = (float *)&DAT_007358e0;
      lVar20 = lVar21;
      lVar22 = lVar24;
      do {
        fVar2 = *pfVar23;
        fVar4 = pfVar23[1];
        pfVar23 = pfVar23 + 2;
        *(float *)((int)lVar20 + 0xd4) = *(float *)((int)lVar20 + 0xd4) * fVar2;
        lVar20 = lVar20 + 8;
        *(float *)((int)lVar22 + 4) = *(float *)((int)lVar22 + 4) * fVar4;
        lVar22 = lVar22 + 8;
        lVar26 = lVar26 + -1;
      } while (lVar26 != 0);
      lVar20 = 2;
      do {
        iVar12 = (int)lVar21;
        lVar21 = lVar21 + 0x10;
        iVar14 = (int)lVar24;
        lVar24 = lVar24 + 0x10;
        dVar35 = (double)((float)(dVar35 + (double)*(float *)(iVar12 + 0xd4)) +
                          *(float *)(iVar14 + 4) + *(float *)(iVar14 + 8) + *(float *)(iVar14 + 0xc)
                         );
        lVar20 = lVar20 + -1;
      } while (lVar20 != 0);
      dVar35 = (double)((float)(dVar35 + 0.7853981852531433) * fVar9 + fVar3);
    }
  }
  else {
    fVar3 = *(float *)(param_1 + 0x10);
    fVar9 = *(float *)(iVar12 + 0x10);
    fVar4 = *(float *)(param_1 + 0x14);
    fVar5 = *(float *)(iVar12 + 0x14);
    fVar10 = fVar3 - fVar9;
    fVar7 = fVar4 - fVar5;
    fVar8 = ABS(fVar10);
    fVar6 = ABS(fVar7);
    *(float *)((int)puVar13 + 0x7c) = fVar10;
    *(float *)(puVar13 + 0x10) = fVar7;
    *(float *)((int)puVar13 + 0x84) = fVar8 - fVar6;
    dVar30 = 0.0;
    dVar34 = (double)(DAT_00766494 * -0.017453292);
    dVar32 = (double)(DAT_00766494 * 0.017453292);
    uVar19 = (ulonglong)(*(uint *)((int)puVar13 + 0x7c) >> 0x1c) & 8 |
             (ulonglong)(*(uint *)((int)puVar13 + 0x84) >> 0x1e) & 2 |
             (ulonglong)(*(uint *)(puVar13 + 0x10) >> 0x1d) & 4;
    fVar10 = *(float *)(&g_atanQuadrantTable + (int)(uVar19 << 2));
    fVar7 = ABS(*(float *)((int)puVar13 + 0x7c));
    if (*(float *)((int)puVar13 + 0x84) - 0.0 < 0.0) {
      fVar7 = fVar6;
    }
    fVar6 = *(float *)(((uint)(uVar19 << 2) | 0x735900) + 4);
    fVar17 = ABS(*(float *)(puVar13 + 0x10));
    if (*(float *)((int)puVar13 + 0x84) - 0.0 < 0.0) {
      fVar17 = fVar8;
    }
    dVar29 = dVar30;
    if (0.0 < fVar7) {
      lVar20 = uVar18 - 0x140;
      lVar24 = uVar18 - 0x8c;
      lVar22 = uVar18 - 0x9c;
      lVar26 = 2;
      fVar7 = (fVar17 - fVar7) / (fVar17 + fVar7);
      fVar8 = fVar7 * fVar7;
      *(float *)((int)puVar13 + 0xb4) = fVar7;
      *(float *)(puVar13 + 0x17) = fVar7;
      *(float *)((int)puVar13 + 0xbc) = fVar7;
      *(float *)(puVar13 + 0x18) = fVar7;
      fVar7 = fVar8 * fVar8;
      *(float *)(puVar13 + 0x17) = *(float *)(puVar13 + 0x17) * fVar8;
      *(float *)((int)puVar13 + 0xbc) = *(float *)((int)puVar13 + 0xbc) * fVar7;
      *(float *)(puVar13 + 0x18) = *(float *)(puVar13 + 0x18) * fVar7 * fVar8;
      do {
        *(float *)((int)lVar20 + 0xb4) = *(float *)((int)lVar20 + 0xa4) * fVar7 * fVar7;
        iVar14 = (int)lVar22;
        lVar22 = lVar22 + 8;
        lVar20 = lVar20 + 8;
        *(float *)((int)lVar24 + 4) = *(float *)(iVar14 + 4) * fVar7 * fVar7;
        lVar24 = lVar24 + 8;
        lVar26 = lVar26 + -1;
      } while (lVar26 != 0);
      lVar26 = 4;
      lVar24 = uVar18 - 0x9c;
      pfVar23 = (float *)&DAT_007358e0;
      lVar20 = lVar21;
      lVar22 = lVar24;
      do {
        fVar7 = *pfVar23;
        fVar8 = pfVar23[1];
        pfVar23 = pfVar23 + 2;
        *(float *)((int)lVar20 + 0xb4) = *(float *)((int)lVar20 + 0xb4) * fVar7;
        lVar20 = lVar20 + 8;
        *(float *)((int)lVar22 + 4) = *(float *)((int)lVar22 + 4) * fVar8;
        lVar22 = lVar22 + 8;
        lVar26 = lVar26 + -1;
      } while (lVar26 != 0);
      lVar22 = 2;
      lVar20 = lVar21;
      do {
        iVar14 = (int)lVar20;
        iVar15 = (int)lVar24;
        lVar20 = lVar20 + 0x10;
        lVar24 = lVar24 + 0x10;
        dVar29 = (double)((float)(dVar29 + (double)*(float *)(iVar14 + 0xb4)) +
                          *(float *)(iVar15 + 4) + *(float *)(iVar15 + 8) + *(float *)(iVar15 + 0xc)
                         );
        lVar22 = lVar22 + -1;
      } while (lVar22 != 0);
      dVar29 = (double)((float)(dVar29 + 0.7853981852531433) * fVar10 + fVar6);
    }
    fVar5 = fVar5 - fVar4;
    fVar9 = fVar9 - fVar3;
    fVar2 = *(float *)(iVar12 + 0x18) - fVar2;
    puVar25 = (ushort *)(&g_MobyGroups)[bVar1];
    dVar31 = (double)SQRT(fVar2 * fVar2 + fVar9 * fVar9 + fVar5 * fVar5);
    dVar33 = dVar32;
    if (puVar25 != (ushort *)0x0) {
      do {
        uVar16 = *puVar25 & 0x7fff;
        if ((g_MobyInstance[uVar16].state == '\x05') ||
           (fVar2 = g_MobyInstance[uVar16].pos.y - *(float *)(iVar12 + 0x14),
           fVar3 = g_MobyInstance[uVar16].pos.x - *(float *)(iVar12 + 0x10),
           fVar9 = g_MobyInstance[uVar16].pos.z - *(float *)(iVar12 + 0x18), dVar32 = dVar33,
           (double)SQRT(fVar9 * fVar9 + fVar3 * fVar3 + fVar2 * fVar2) < dVar31)) {
          fVar2 = g_MobyInstance[uVar16].pos.x - *(float *)(iVar12 + 0x10);
          fVar3 = g_MobyInstance[uVar16].pos.y - *(float *)(iVar12 + 0x14);
          dVar27 = ABS((double)fVar2);
          dVar28 = ABS((double)fVar3);
          *(float *)(puVar13 + 0xe) = fVar2;
          *(float *)((int)puVar13 + 0x74) = fVar3;
          *(float *)(puVar13 + 0xf) = (float)(dVar27 - dVar28);
          uVar19 = (ulonglong)(*(uint *)(puVar13 + 0xe) >> 0x1c) & 8 |
                   (ulonglong)(*(uint *)(puVar13 + 0xf) >> 0x1e) & 2 |
                   (ulonglong)(*(uint *)((int)puVar13 + 0x74) >> 0x1d) & 4;
          dVar32 = ABS((double)*(float *)(puVar13 + 0xe));
          if ((double)*(float *)(puVar13 + 0xf) - dVar30 < 0.0) {
            dVar32 = dVar28;
          }
          fVar2 = *(float *)(&g_atanQuadrantTable + (int)(uVar19 << 2));
          dVar28 = ABS((double)*(float *)((int)puVar13 + 0x74));
          if ((double)*(float *)(puVar13 + 0xf) - dVar30 < 0.0) {
            dVar28 = dVar27;
          }
          fVar3 = *(float *)(((uint)(uVar19 << 2) | 0x735900) + 4);
          dVar27 = dVar30;
          if (dVar30 < dVar32) {
            lVar20 = uVar18 - 0x140;
            lVar24 = uVar18 - 0xac;
            lVar22 = uVar18 - 0xbc;
            lVar26 = 2;
            fVar9 = (float)(dVar28 - dVar32) / (float)(dVar28 + dVar32);
            fVar4 = fVar9 * fVar9;
            *(float *)((int)puVar13 + 0x94) = fVar9;
            *(float *)(puVar13 + 0x13) = fVar9;
            *(float *)((int)puVar13 + 0x9c) = fVar9;
            *(float *)(puVar13 + 0x14) = fVar9;
            fVar9 = fVar4 * fVar4;
            *(float *)(puVar13 + 0x13) = *(float *)(puVar13 + 0x13) * fVar4;
            *(float *)((int)puVar13 + 0x9c) = *(float *)((int)puVar13 + 0x9c) * fVar9;
            *(float *)(puVar13 + 0x14) = *(float *)(puVar13 + 0x14) * fVar9 * fVar4;
            do {
              *(float *)((int)lVar20 + 0x94) = *(float *)((int)lVar20 + 0x84) * fVar9 * fVar9;
              iVar14 = (int)lVar22;
              lVar22 = lVar22 + 8;
              lVar20 = lVar20 + 8;
              *(float *)((int)lVar24 + 4) = *(float *)(iVar14 + 4) * fVar9 * fVar9;
              lVar24 = lVar24 + 8;
              lVar26 = lVar26 + -1;
            } while (lVar26 != 0);
            lVar26 = 4;
            lVar24 = uVar18 - 0xbc;
            pfVar23 = (float *)&DAT_007358e0;
            lVar20 = lVar21;
            lVar22 = lVar24;
            do {
              fVar9 = *pfVar23;
              fVar4 = pfVar23[1];
              pfVar23 = pfVar23 + 2;
              *(float *)((int)lVar20 + 0x94) = *(float *)((int)lVar20 + 0x94) * fVar9;
              lVar20 = lVar20 + 8;
              *(float *)((int)lVar22 + 4) = *(float *)((int)lVar22 + 4) * fVar4;
              lVar22 = lVar22 + 8;
              lVar26 = lVar26 + -1;
            } while (lVar26 != 0);
            lVar22 = 2;
            lVar20 = lVar21;
            dVar32 = dVar30;
            do {
              iVar14 = (int)lVar20;
              iVar15 = (int)lVar24;
              lVar20 = lVar20 + 0x10;
              lVar24 = lVar24 + 0x10;
              dVar32 = (double)((float)(dVar32 + (double)*(float *)(iVar14 + 0x94)) +
                                *(float *)(iVar15 + 4) + *(float *)(iVar15 + 8) +
                               *(float *)(iVar15 + 0xc));
              lVar22 = lVar22 + -1;
            } while (lVar22 != 0);
            dVar27 = (double)((float)(dVar32 + dVar35) * fVar2 + fVar3);
          }
          dVar27 = (double)FastDiffRots(dVar27,dVar29);
          if (((dVar27 <= dVar30) || (dVar32 = dVar27, dVar33 <= dVar27)) &&
             (dVar32 = dVar33, dVar34 < dVar27 && dVar27 < dVar30)) {
            dVar34 = dVar27;
          }
        }
        uVar11 = *puVar25;
        puVar25 = puVar25 + 1;
        dVar33 = dVar32;
      } while (-1 < (short)uVar11);
    }
    dVar35 = (double)FastSubRots((float)dVar32,(float)dVar34);
    dVar35 = (double)FastWrapRot((float)dVar34,(float)(dVar35 * 0.5));
    dVar35 = (double)FastWrapRot((float)dVar35,(float)dVar29);
  }
  return dVar35;
}


// 0x01fbbd0 (0x68 bytes)
void M1202_001fbbd0(int param_1)

{
  ushort uVar1;
  ushort *puVar2;
  
  if ((*(byte *)(param_1 + 0x21) != 0xff) &&
     (puVar2 = (ushort *)(&g_MobyGroups)[*(byte *)(param_1 + 0x21)],
     puVar2 != (ushort *)0x0)) {
    do {
      if (g_MobyInstance[*puVar2 & 0x7fff].state == '\x01') {
        g_MobyInstance[*puVar2 & 0x7fff].state = '\x02';
      }
      uVar1 = *puVar2;
      puVar2 = puVar2 + 1;
    } while (-1 < (short)uVar1);
  }
  return;
}


// 0x01fbc78 (0x102c bytes)
// inlined: FastRSqrt @0x1fc184, FastRSqrt @0x1fc208, FastAtan2 @0x1fc3d0, FastAtan2 @0x1fc764
void M1202_001fbc78(MobyInstance *param_1)

{
  u8 uVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  ushort uVar6;
  short sVar7;
  MobyModeBit MVar8;
  void *pvVar9;
  uint uVar10;
  Spline *pSVar11;
  uint uVar12;
  undefined2 uVar13;
  ulonglong *puVar14;
  int iVar15;
  ushort *puVar18;
  undefined4 uVar19;
  int iVar20;
  int iVar21;
  int iVar22;
  longlong lVar16;
  longlong lVar17;
  ulonglong uVar23;
  longlong lVar24;
  undefined4 *puVar25;
  ulonglong uVar26;
  float *pfVar29;
  longlong lVar27;
  ulonglong uVar28;
  ulonglong unaff_r25;
  ulonglong unaff_r26;
  ulonglong unaff_r27;
  ulonglong unaff_r28;
  ulonglong unaff_r29;
  ulonglong unaff_r30;
  ulonglong uVar30;
  ulonglong unaff_r31;
  ulonglong in_LR;
  longlong lVar31;
  double dVar32;
  double dVar33;
  double dVar34;
  double dVar35;
  double dVar36;
  double dVar37;
  double dVar38;
  double dVar39;
  ulonglong in_f30;
  ulonglong in_f31;
  double dVar40;
  GPiece<16> auVar41;
  GPiece<16> auVar42;
  GPiece<16> auVar43;
  
  uVar28 = ZEXT48(&stack0x00000000);
  lVar17 = uVar28 - 0x170;
  puVar14 = (ulonglong *)lVar17;
  *puVar14 = uVar28;
  puVar14[0x30] = in_LR;
  puVar14[0x2c] = in_f30;
  puVar14[0x2d] = in_f31;
  puVar14[0x26] = unaff_r26;
  puVar14[0x2b] = unaff_r31;
  puVar14[0x2a] = unaff_r30;
  iVar20 = g_CurrentWeapon;
  pvVar9 = param_1->pVar;
  uVar30 = ZEXT48(pvVar9);
  puVar14[0x29] = unaff_r29;
  puVar14[0x28] = unaff_r28;
  puVar14[0x27] = unaff_r27;
  puVar14[0x25] = unaff_r25;
  if ((iVar20 == 0x15) && (*(MobyInstance **)((int)g_currentWeaponMoby->pVar + 0x10) == param_1)) {
    if ((param_1->group != 0xff) &&
       (puVar18 = (ushort *)(&g_MobyGroups)[(byte)param_1->group],
       puVar18 != (ushort *)0x0)) {
      do {
        if (g_MobyInstance[*puVar18 & 0x7fff].state == '\x01') {
          g_MobyInstance[*puVar18 & 0x7fff].state = '\x02';
        }
        uVar6 = *puVar18;
        puVar18 = puVar18 + 1;
      } while (-1 < (short)uVar6);
    }
    if (param_1->state == '\x01') {
      param_1->state = '\x02';
    }
  }
  if (*(int *)((int)pvVar9 + 0x38) != 0) {
    if ((param_1->group != 0xff) &&
       (puVar18 = (ushort *)(&g_MobyGroups)[(byte)param_1->group],
       puVar18 != (ushort *)0x0)) {
      do {
        if (g_MobyInstance[*puVar18 & 0x7fff].state == '\x01') {
          g_MobyInstance[*puVar18 & 0x7fff].state = '\x02';
        }
        uVar6 = *puVar18;
        puVar18 = puVar18 + 1;
      } while (-1 < (short)uVar6);
    }
    dVar32 = (double)MB_randRangeFloat(180.0,240.0);
    uVar19 = FastDoubleToInt((double)(float)(dVar32 * (double)animationSpeed));
    *(undefined4 *)((int)pvVar9 + 0x1ac) = uVar19;
    *(undefined4 *)((int)pvVar9 + 0x38) = 0;
  }
  FastDecTimerS32(uVar30 + 0x1ac);
  *(undefined4 *)(puVar14 + 0x18) = 1;
  dVar32 = 0.0;
  *(undefined4 *)((int)puVar14 + 0xc4) = 0;
  iVar20 = MB_damage(param_1,0xb30000,0);
  iVar21 = MB_HandleDamage
                     (param_1,iVar20,uVar30 + 0x20,0,puVar14 + 0x18,(int)puVar14 + 0xc4,0,4);
  FastDecTimerS16(uVar30 + 0x26);
  if (((*(int *)(puVar14 + 0x18) == 1) || (*(int *)(puVar14 + 0x18) == 0)) ||
     (param_1->state == '\f' || param_1->state == '\v')) goto LAB_001fc8b0;
  if (((Level == Orxon) && (iVar20 != 0)) &&
     ((*(int *)(iVar20 + 0x20) != 0 &&
      ((*(short *)(*(int *)(iVar20 + 0x20) + 0xa6) == 0x31a && (*(int *)((int)pvVar9 + 0x1ac) != 0))
      )))) {
    MB_UnlockSkillPoint(0x11);
  }
  if (((*(short *)((int)pvVar9 + 0x26) != 0) && (*(char *)(iVar20 + 0x28) == '\0')) &&
     (uVar12 = (int)*(uint *)((int)puVar14 + 0xc4) >> 0x1f, iVar21 = 0xb,
     (int)((uVar12 >> 1 ^ *(uint *)((int)puVar14 + 0xc4)) - uVar12) < 0x40400000)) {
    *(undefined4 *)((int)puVar14 + 0xc4) = 0;
  }
  iVar22 = g_heroStateTimer;
  if (((g_heroState == WALLOPER_SOMETHING) ||
      ((DAT_0096bd70 == 0x20 &&
       (puVar14[0x23] = (longlong)(int)(animationSpeed * 30.5),
       iVar22 < *(int *)((int)puVar14 + 0x11c))))) &&
     (uVar12 = (int)*(uint *)((int)puVar14 + 0xc4) >> 0x1f,
     0x40000000 < (int)((uVar12 >> 1 ^ *(uint *)((int)puVar14 + 0xc4)) - uVar12))) {
    *(undefined4 *)((int)puVar14 + 0xc4) = 0x40000000;
  }
  if ((uint)*(ushort *)(iVar20 + 0x2a) == (int)(short)param_1->oClass) {
    iVar21 = 0xb;
    *(undefined4 *)((int)puVar14 + 0xc4) = 0;
  }
  if (((param_1->animationId == '\x06') || (param_1->animationId == '\a')) &&
     ((g_heroType == '\x01' && (*(MobyInstance **)(iVar20 + 0x20) == g_heroMobyPtr)))) {
    iVar21 = 0xb;
    *(undefined4 *)((int)puVar14 + 0xc4) = 0;
  }
  fVar2 = g_heroPosition.y;
  if (*(short *)(iVar20 + 0x2a) == 0x47) {
    *(float *)(puVar14 + 0xe) = g_heroPosition.x;
    fVar3 = g_heroPosition.z;
    *(float *)((int)puVar14 + 0x74) = fVar2;
    fVar2 = g_heroPosition.w;
    *(float *)(puVar14 + 0xf) = fVar3;
    *(float *)((int)puVar14 + 0x7c) = fVar2;
    *(float *)(puVar14 + 0xf) = fVar3 + 1.0;
    *(f32 *)(puVar14 + 0x10) = (param_1->pos).x;
    *(f32 *)((int)puVar14 + 0x84) = (param_1->pos).y;
    fVar2 = (param_1->pos).z;
    *(f32 *)((int)puVar14 + 0x8c) = (param_1->pos).w;
    *(float *)(puVar14 + 0x11) = fVar2 + 1.0;
    iVar22 = CollLine(uVar28 - 0x100,uVar28 - 0xf0,2,param_1,0);
    if (iVar22 != 0) {
      iVar21 = 0xb;
      *(undefined4 *)((int)puVar14 + 0xc4) = 0;
    }
  }
  else {
    iVar22 = *(int *)(iVar20 + 0x20);
    if ((iVar22 != 0) && (*(short *)(iVar22 + 0xa6) != 0x359)) {
      *(undefined4 *)(puVar14 + 0x12) = *(undefined4 *)(iVar22 + 0x10);
      *(undefined4 *)((int)puVar14 + 0x94) = *(undefined4 *)(iVar22 + 0x14);
      fVar2 = *(float *)(iVar22 + 0x18);
      *(float *)(puVar14 + 0x13) = fVar2;
      *(undefined4 *)((int)puVar14 + 0x9c) = *(undefined4 *)(iVar22 + 0x1c);
      *(f32 *)(puVar14 + 0x14) = (param_1->pos).x;
      *(f32 *)((int)puVar14 + 0xa4) = (param_1->pos).y;
      fVar3 = (param_1->pos).z;
      *(f32 *)((int)puVar14 + 0xac) = (param_1->pos).w;
      dVar34 = 1.0;
      *(float *)(puVar14 + 0x15) = fVar3 + 1.0;
      sVar7 = *(short *)(*(int *)(iVar20 + 0x20) + 0xa6);
      if ((sVar7 == 0xba) || (sVar7 == 0)) {
        *(float *)(puVar14 + 0x13) = fVar2 + 0.25;
      }
      iVar22 = CollLine(uVar28 - 0xe0,uVar28 - 0xd0,0x12,param_1,0);
      if (iVar22 != 0) {
        FastVecSub(uVar28 - 0xc0,uVar28 - 0xd0,uVar28 - 0xe0);
        fVar2 = *(float *)((int)puVar14 + 0xb4);
        fVar3 = *(float *)(puVar14 + 0x16);
        fVar4 = *(float *)(puVar14 + 0x17);
        dVar38 = (double)(fVar4 * fVar4 + fVar3 * fVar3 + fVar2 * fVar2);
        dVar33 = dVar32;
        dVar35 = dVar32;
        dVar40 = dVar32;
        if ((double)(float)SQRT(dVar38) != dVar32) {
          dVar33 = 1.0 / SQRT(dVar38);
          dVar33 = (double)(float)(-(double)(float)((double)(float)(dVar38 * dVar33) * dVar33 -
                                                   dVar34) * (double)(float)(dVar33 * 0.5) + dVar33)
          ;
          dVar33 = (double)(float)(-(double)(float)((double)(float)(dVar38 * dVar33) * dVar33 -
                                                   dVar34) * (double)(float)(dVar33 * 0.5) + dVar33)
          ;
          fVar5 = (float)(-(double)(float)((double)(float)(dVar38 * dVar33) * dVar33 - dVar34) *
                          (double)(float)(dVar33 * 0.5) + dVar33);
          dVar33 = (double)(fVar3 * fVar5);
          dVar35 = (double)(fVar2 * fVar5);
          dVar40 = (double)(fVar4 * fVar5);
        }
        dVar36 = (double)(g_CollOutput.normal.z * g_CollOutput.normal.z +
                         g_CollOutput.normal.x * g_CollOutput.normal.x +
                         g_CollOutput.normal.y * g_CollOutput.normal.y);
        dVar38 = dVar32;
        dVar37 = dVar32;
        dVar39 = dVar32;
        if ((double)(float)SQRT(dVar36) != dVar32) {
          dVar38 = 1.0 / SQRT(dVar36);
          dVar38 = (double)(float)(-(double)(float)((double)(float)(dVar36 * dVar38) * dVar38 -
                                                   dVar34) * (double)(float)(dVar38 * 0.5) + dVar38)
          ;
          dVar38 = (double)(float)(-(double)(float)((double)(float)(dVar36 * dVar38) * dVar38 -
                                                   dVar34) * (double)(float)(dVar38 * 0.5) + dVar38)
          ;
          fVar2 = (float)(-(double)(float)((double)(float)(dVar36 * dVar38) * dVar38 - dVar34) *
                          (double)(float)(dVar38 * 0.5) + dVar38);
          dVar38 = (double)(g_CollOutput.normal.x * fVar2);
          dVar37 = (double)(g_CollOutput.normal.y * fVar2);
          dVar39 = (double)(g_CollOutput.normal.z * fVar2);
        }
        if (0.5 < ABS((float)(dVar40 * dVar39 +
                             (double)(float)(dVar33 * dVar38 + (double)(float)(dVar35 * dVar37)))))
        {
          iVar21 = 0xb;
          *(undefined4 *)((int)puVar14 + 0xc4) = 0;
        }
      }
    }
  }
  fVar2 = *(float *)((int)pvVar9 + 0x20) - *(float *)((int)puVar14 + 0xc4);
  *(float *)((int)pvVar9 + 0x20) = fVar2;
  if ((double)fVar2 <= dVar32) {
    iVar21 = 1;
  }
  if ((param_1->group != 0xff) &&
     (puVar18 = (ushort *)(&g_MobyGroups)[(byte)param_1->group], puVar18 != (ushort *)0x0)
     ) {
    do {
      if (g_MobyInstance[*puVar18 & 0x7fff].state == '\x01') {
        g_MobyInstance[*puVar18 & 0x7fff].state = '\x02';
      }
      uVar6 = *puVar18;
      puVar18 = puVar18 + 1;
    } while (-1 < (short)uVar6);
  }
  uVar19 = FastDoubleToInt(0x4088000000000000);
  *(undefined4 *)((int)pvVar9 + 0x90) = uVar19;
  *(undefined4 *)((int)pvVar9 + 0x98) = 0x3f400000;
  *(undefined1 *)((int)pvVar9 + 0xad) = 0;
  *(undefined4 *)((int)pvVar9 + 0x94) = 9;
  uVar12 = *(uint *)(iVar20 + 0x10);
  uVar10 = *(uint *)(iVar20 + 0x14);
  dVar35 = ABS((double)*(float *)(iVar20 + 0x10));
  dVar34 = ABS((double)*(float *)(iVar20 + 0x14));
  *(float *)(puVar14 + 0x1a) = (float)(dVar35 - dVar34);
  MVar8 = param_1->modeBits;
  dVar40 = 0.7853981852531433;
  uVar26 = (ulonglong)(uVar12 >> 0x1c) & 8 |
           (ulonglong)(*(uint *)(puVar14 + 0x1a) >> 0x1e) & 2 | (ulonglong)(uVar10 >> 0x1d) & 4;
  dVar33 = dVar35;
  if ((double)*(float *)(puVar14 + 0x1a) - dVar32 < 0.0) {
    dVar33 = dVar34;
  }
  fVar2 = *(float *)(&g_atanQuadrantTable + (int)(uVar26 << 2));
  if ((double)*(float *)(puVar14 + 0x1a) - dVar32 < 0.0) {
    dVar34 = dVar35;
  }
  fVar3 = *(float *)(((uint)(uVar26 << 2) | 0x735900) + 4);
  dVar35 = dVar32;
  if (dVar32 < dVar33) {
    lVar16 = uVar28 - 0x160;
    lVar24 = uVar28 - 0x7c;
    lVar27 = uVar28 - 0x6c;
    lVar31 = 2;
    fVar4 = (float)(dVar34 - dVar33) / (float)(dVar34 + dVar33);
    fVar5 = fVar4 * fVar4;
    *(float *)(puVar14 + 0x20) = fVar4;
    *(float *)(puVar14 + 0x1f) = fVar4;
    *(float *)((int)puVar14 + 0xfc) = fVar4;
    *(float *)((int)puVar14 + 0xf4) = fVar4;
    fVar4 = fVar5 * fVar5;
    *(float *)(puVar14 + 0x1f) = *(float *)(puVar14 + 0x1f) * fVar5;
    *(float *)((int)puVar14 + 0xfc) = *(float *)((int)puVar14 + 0xfc) * fVar4;
    *(float *)(puVar14 + 0x20) = *(float *)(puVar14 + 0x20) * fVar4 * fVar5;
    do {
      *(float *)((int)lVar16 + 0xf4) = *(float *)((int)lVar16 + 0xe4) * fVar4 * fVar4;
      iVar22 = (int)lVar24;
      lVar16 = lVar16 + 8;
      lVar24 = lVar24 + 8;
      *(float *)((int)lVar27 + 4) = *(float *)(iVar22 + 4) * fVar4 * fVar4;
      lVar27 = lVar27 + 8;
      lVar31 = lVar31 + -1;
    } while (lVar31 != 0);
    lVar31 = 4;
    lVar27 = uVar28 - 0x7c;
    pfVar29 = (float *)&DAT_007358e0;
    lVar16 = lVar17;
    lVar24 = lVar27;
    do {
      fVar4 = *pfVar29;
      fVar5 = pfVar29[1];
      pfVar29 = pfVar29 + 2;
      *(float *)((int)lVar16 + 0xf4) = *(float *)((int)lVar16 + 0xf4) * fVar4;
      lVar16 = lVar16 + 8;
      *(float *)((int)lVar24 + 4) = *(float *)((int)lVar24 + 4) * fVar5;
      lVar24 = lVar24 + 8;
      lVar31 = lVar31 + -1;
    } while (lVar31 != 0);
    lVar24 = 2;
    lVar16 = lVar17;
    dVar34 = dVar32;
    do {
      iVar22 = (int)lVar16;
      lVar16 = lVar16 + 0x10;
      iVar15 = (int)lVar27;
      lVar27 = lVar27 + 0x10;
      dVar34 = (double)((float)(dVar34 + (double)*(float *)(iVar22 + 0xf4)) + *(float *)(iVar15 + 4)
                        + *(float *)(iVar15 + 8) + *(float *)(iVar15 + 0xc));
      lVar24 = lVar24 + -1;
    } while (lVar24 != 0);
    dVar35 = (double)((float)(dVar34 + 0.7853981852531433) * fVar2 + fVar3);
  }
  *(float *)(puVar14 + 0x19) = (float)dVar35;
  if (iVar21 < 4) {
    if (iVar21 < 1) goto LAB_001fc8b0;
    if (iVar21 < 3) {
      param_1->state = '\v';
      param_1->modeBits =
           MVar8 & (MIRROR|CAN_BE_DAMAGED|HIDE_BACKFACES|DISABLE_Z_WRITE|DRAW_SHADOW|
                    DRAW_TRANSPARENT_WEIRD|LOCK_ROTATION|NO_DRAW|UNK_40|HAS_SPECIAL_VARS|HAS_GLOW|
                    TRANSPARENT|NO_POST_UPDATE|NO_UPDATE|DISABLED);
      goto LAB_001fc8b0;
    }
  }
  else {
    if (10 < iVar21) goto LAB_001fc8b0;
    if (iVar21 < 6) {
      auVar41 = ZEXT416(0xffffffff);
      auVar41 = auVar41 | auVar41 << 0x20 | auVar41 << 0x40 | auVar41 << 0x60;
      param_1->state = '\n';
      auVar42 = vectorShiftLeftIntegerWord(auVar41,auVar41);
      auVar41 = loadVectorLeftIndexed(0x24,0x1fbc38);
      auVar41 = auVar41 >> 0x60 & (GPiece<16>)0xffffffff;
      auVar43 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
      auVar41 = vectorMultiplyAddFloatingPoint
                          (auVar43,auVar41 | auVar41 << 0x20 | auVar41 << 0x40 | auVar41 << 0x60,
                           auVar42);
      auVar41 = vectorConvertToSignedFixedPointWordSaturate(auVar41,0);
      auVar41 = vectorSplatHalfWord(auVar41,1);
      uVar13 = storeVectorElementHalfWordIndexed(auVar41,0x26,uVar30);
      *(undefined2 *)((int)pvVar9 + 0x26) = uVar13;
      *(float *)((int)pvVar9 + 0x80) = DAT_00766478 * g_FrameTimeSq;
      fVar2 = 3.0;
      if (g_heroType == '\x01') {
        fVar2 = 1.0;
      }
      MB_SetupJumpArc
                ((double)fVar2,0x3fe0000000000000,&DAT_001fbc38,g_heroType,uVar30 + 0x70);
      *(undefined4 *)((int)pvVar9 + 0xc0) = 0x40600000;
      *(undefined4 *)((int)pvVar9 + 0xc4) = 0x40e00000;
      uVar19 = *(undefined4 *)(iVar20 + 0x18);
      *(undefined4 *)(puVar14 + 6) = *(undefined4 *)(iVar20 + 0x10);
      *(undefined4 *)(puVar14 + 7) = uVar19;
      uVar19 = *(undefined4 *)(iVar20 + 0x1c);
      *(undefined4 *)((int)puVar14 + 0x34) = *(undefined4 *)(iVar20 + 0x14);
      *(undefined4 *)((int)puVar14 + 0x3c) = uVar19;
      MB_VecAtan2Angles(puVar14[6],puVar14[7],uVar28 - 0xa8,uVar30 + 0x88,uVar30 + 0x8c);
      uVar12 = *(uint *)(iVar20 + 0x10);
      uVar10 = *(uint *)(iVar20 + 0x14);
      dVar35 = ABS((double)*(float *)(iVar20 + 0x10));
      dVar34 = ABS((double)*(float *)(iVar20 + 0x14));
      *(float *)((int)puVar14 + 0xcc) = (float)(dVar35 - dVar34);
      uVar26 = (ulonglong)*(uint *)((int)puVar14 + 0xcc);
      uVar23 = (ulonglong)(uVar12 >> 0x1c) & 8 |
               (ulonglong)(*(uint *)((int)puVar14 + 0xcc) >> 0x1e) & 2 |
               (ulonglong)(uVar10 >> 0x1d) & 4;
      dVar33 = dVar35;
      if ((double)*(float *)((int)puVar14 + 0xcc) - dVar32 < 0.0) {
        dVar33 = dVar34;
      }
      fVar2 = *(float *)(&g_atanQuadrantTable + (int)(uVar23 << 2));
      if ((double)*(float *)((int)puVar14 + 0xcc) - dVar32 < 0.0) {
        dVar34 = dVar35;
      }
      fVar3 = *(float *)(((uint)(uVar23 << 2) | 0x735900) + 4);
      dVar35 = dVar32;
      if (dVar32 < dVar33) {
        lVar16 = uVar28 - 0x160;
        lVar27 = uVar28 - 0x8c;
        lVar24 = uVar28 - 0x9c;
        lVar31 = 2;
        fVar4 = (float)(dVar34 - dVar33) / (float)(dVar34 + dVar33);
        fVar5 = fVar4 * fVar4;
        *(float *)(puVar14 + 0x1c) = fVar4;
        *(float *)(puVar14 + 0x1b) = fVar4;
        *(float *)((int)puVar14 + 0xdc) = fVar4;
        *(float *)((int)puVar14 + 0xd4) = fVar4;
        fVar4 = fVar5 * fVar5;
        *(float *)(puVar14 + 0x1b) = *(float *)(puVar14 + 0x1b) * fVar5;
        *(float *)((int)puVar14 + 0xdc) = *(float *)((int)puVar14 + 0xdc) * fVar4;
        *(float *)(puVar14 + 0x1c) = *(float *)(puVar14 + 0x1c) * fVar4 * fVar5;
        do {
          *(float *)((int)lVar16 + 0xd4) = *(float *)((int)lVar16 + 0xc4) * fVar4 * fVar4;
          iVar20 = (int)lVar24;
          lVar24 = lVar24 + 8;
          lVar16 = lVar16 + 8;
          *(float *)((int)lVar27 + 4) = *(float *)(iVar20 + 4) * fVar4 * fVar4;
          lVar27 = lVar27 + 8;
          lVar31 = lVar31 + -1;
        } while (lVar31 != 0);
        lVar24 = 4;
        uVar28 = uVar28 - 0x9c;
        pfVar29 = (float *)&DAT_007358e0;
        lVar16 = lVar17;
        uVar26 = uVar28;
        do {
          fVar4 = *pfVar29;
          fVar5 = pfVar29[1];
          pfVar29 = pfVar29 + 2;
          *(float *)((int)lVar16 + 0xd4) = *(float *)((int)lVar16 + 0xd4) * fVar4;
          lVar16 = lVar16 + 8;
          *(float *)((int)uVar26 + 4) = *(float *)((int)uVar26 + 4) * fVar5;
          uVar26 = uVar26 + 8;
          lVar24 = lVar24 + -1;
        } while (lVar24 != 0);
        lVar16 = 2;
        dVar34 = dVar32;
        do {
          iVar20 = (int)lVar17;
          iVar21 = (int)uVar28;
          lVar17 = lVar17 + 0x10;
          uVar28 = uVar28 + 0x10;
          dVar34 = (double)((float)(dVar34 + (double)*(float *)(iVar20 + 0xd4)) +
                            *(float *)(iVar21 + 4) + *(float *)(iVar21 + 8) +
                           *(float *)(iVar21 + 0xc));
          lVar16 = lVar16 + -1;
        } while (lVar16 != 0);
        dVar35 = (double)((float)(dVar34 + dVar40) * fVar2 + fVar3);
      }
      MB_StartKick(dVar35,param_1,uVar30 + 0x70,uVar26,9,1,0);
      *(undefined1 *)((int)pvVar9 + 0x67) = 0xfa;
      MB_UpdateLightsTransition(param_1,uVar30 + 0x60);
      goto LAB_001fc8b0;
    }
  }
  auVar41 = ZEXT416(0xffffffff);
  auVar41 = auVar41 | auVar41 << 0x20 | auVar41 << 0x40 | auVar41 << 0x60;
  param_1->state = '\n';
  auVar42 = vectorShiftLeftIntegerWord(auVar41,auVar41);
  auVar41 = loadVectorLeftIndexed(0x24,0x1fbc38);
  auVar41 = auVar41 >> 0x60 & (GPiece<16>)0xffffffff;
  auVar43 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
  auVar41 = vectorMultiplyAddFloatingPoint
                      (auVar43,auVar41 | auVar41 << 0x20 | auVar41 << 0x40 | auVar41 << 0x60,auVar42
                      );
  auVar41 = vectorConvertToSignedFixedPointWordSaturate(auVar41,0);
  auVar41 = vectorSplatHalfWord(auVar41,1);
  uVar13 = storeVectorElementHalfWordIndexed(auVar41,0x26,uVar30);
  *(undefined2 *)((int)pvVar9 + 0x26) = uVar13;
  *(float *)((int)pvVar9 + 0x80) = DAT_00766478 * g_FrameTimeSq;
  MB_SetupJumpArc(0x3fe0000000000000,0x3fe0000000000000,&DAT_001fbc38,0x26,uVar30 + 0x70);
  *(undefined4 *)((int)pvVar9 + 0xc0) = 0x41000000;
  *(undefined4 *)((int)pvVar9 + 0xc4) = 0x41200000;
  uVar19 = *(undefined4 *)(iVar20 + 0x18);
  *(undefined4 *)(puVar14 + 6) = *(undefined4 *)(iVar20 + 0x10);
  *(undefined4 *)(puVar14 + 7) = uVar19;
  uVar19 = *(undefined4 *)(iVar20 + 0x1c);
  *(undefined4 *)((int)puVar14 + 0x34) = *(undefined4 *)(iVar20 + 0x14);
  *(undefined4 *)((int)puVar14 + 0x3c) = uVar19;
  MB_VecAtan2Angles(puVar14[6],puVar14[7],uVar28 - 0xa8,uVar30 + 0x88,uVar30 + 0x8c);
  MB_StartKick((double)*(float *)(puVar14 + 0x19),param_1,uVar30 + 0x70);
  *(undefined1 *)((int)pvVar9 + 0x67) = 0xfa;
  MB_UpdateLightsTransition(param_1,uVar30 + 0x60);
LAB_001fc8b0:
  param_1->damage = -1;
  MB_ColorDyingMoby(param_1,uVar30 + 0x60);
  uVar1 = param_1->state;
  if (((uVar1 == '\n') || (uVar1 == '\v')) || (uVar1 == '\f')) {
    *(undefined4 *)((int)pvVar9 + 0x1d4) = 0;
  }
  else {
    if (*(int *)((int)pvVar9 + 0x1ac) == 0) {
      puVar25 = (undefined4 *)0x0;
      if (uVar1 == '\x01') {
        if ((param_1 == DAT_00969f20) || (param_1 == DAT_00969f1c)) {
          dVar32 = 6.0;
        }
        *(float *)((int)pvVar9 + 0x1a0) = (float)dVar32;
        if ((g_heroType == '\x01') && (param_1->group != 0xff)) {
          puVar25 = &g_MobyGroups;
          puVar18 = (ushort *)(&g_MobyGroups)[(byte)param_1->group];
          if (puVar18 != (ushort *)0x0) {
            do {
              if (g_MobyInstance[*puVar18 & 0x7fff].state == '\x01') {
                g_MobyInstance[*puVar18 & 0x7fff].state = '\x02';
              }
              uVar6 = *puVar18;
              puVar18 = puVar18 + 1;
              puVar25 = (undefined4 *)(int)(short)uVar6;
            } while (-1 < (short)uVar6);
          }
        }
      }
      else {
        *(float *)((int)pvVar9 + 0x1a0) = DAT_0076648c;
      }
    }
    else {
      puVar25 = (undefined4 *)0x760000;
      *(float *)((int)pvVar9 + 0x1a0) = DAT_0076648c + 6.0;
    }
    if (*(int *)((int)pvVar9 + 0x1ac) == 0) {
      fVar2 = *(float *)((int)pvVar9 + 0x174) - *(float *)((int)pvVar9 + 0x124);
      fVar3 = *(float *)((int)pvVar9 + 0x170) - *(float *)((int)pvVar9 + 0x120);
      if ((*(float *)((int)pvVar9 + 0x1a0) < SQRT(fVar3 * fVar3 + fVar2 * fVar2)) ||
         (3.0 < ABS((param_1->pos).z - *(float *)((int)pvVar9 + 0x128)))) {
        MB_getTarget(param_1,puVar25,uVar30 + 0x120);
        *(undefined4 *)((int)pvVar9 + 0x164) = 2;
      }
      else {
        pSVar11 = Splines[*(int *)((int)pvVar9 + 0x1b0)];
        MB_getTargetInArea
                  (param_1,uVar30 + 0x120,pSVar11,0,0,pSVar11->points,pSVar11->cnt);
      }
    }
    else {
      MB_getTarget((double)*(float *)((int)pvVar9 + 0x1a0),param_1,puVar25,uVar30 + 0x120)
      ;
      fVar2 = *(float *)((int)pvVar9 + 0x174) - *(float *)((int)pvVar9 + 0x124);
      fVar3 = *(float *)((int)pvVar9 + 0x170) - *(float *)((int)pvVar9 + 0x120);
      if ((*(float *)((int)pvVar9 + 0x1a0) < SQRT(fVar3 * fVar3 + fVar2 * fVar2)) ||
         (3.0 < ABS((param_1->pos).z - *(float *)((int)pvVar9 + 0x128)))) {
        *(undefined4 *)((int)pvVar9 + 0x164) = 2;
      }
    }
    fVar2 = animationSpeed;
    if ((param_1->state == '\x01') || (*(int *)((int)pvVar9 + 0x164) != 2)) {
      *(undefined4 *)((int)pvVar9 + 0x1d4) = 0;
    }
    else {
      iVar20 = *(int *)((int)pvVar9 + 0x1d4) + 1;
      *(int *)((int)pvVar9 + 0x1d4) = iVar20;
      puVar14[0x23] = (longlong)(int)(fVar2 * 300.5);
      if (*(int *)((int)puVar14 + 0x11c) < iVar20) {
        fVar2 = (param_1->pos).y - *(float *)((int)pvVar9 + 0x174);
        fVar3 = (param_1->pos).x - *(float *)((int)pvVar9 + 0x170);
        fVar4 = (param_1->pos).z - *(float *)((int)pvVar9 + 0x178);
        if (SQRT(fVar4 * fVar4 + fVar3 * fVar3 + fVar2 * fVar2) <= 1.0) {
          if ((g_heroType != '\x01') && (param_1->state = '\x01', param_1->animationId != '\0')) {
            puVar14[0x23] = (longlong)(int)(animationSpeed * 20.5);
            MB_SetAnimation(param_1,0,0,*(undefined4 *)((int)puVar14 + 0x11c));
          }
        }
        else {
          param_1->state = '\b';
          if (param_1->animationId != '\x04') {
            puVar14[0x23] = (longlong)(int)(animationSpeed * 12.5);
            MB_SetAnimation(param_1,4,0,*(undefined4 *)((int)puVar14 + 0x11c));
          }
        }
      }
    }
    if (*(int *)((int)pvVar9 + 0x160) == 0) {
      *(MobyInstance **)((int)pvVar9 + 0x160) = g_heroMobyPtr;
    }
  }
  return;
}


// 0x01fcd60 (0x2484 bytes)
/* Moby 1202 */

void UpdateMoby_1202(MobyInstance *moby)

{
  byte bVar1;
  u8 uVar2;
  f32 fVar3;
  f32 fVar4;
  uint uVar5;
  float fVar6;
  MobyModeBit MVar7;
  void *pvVar8;
  uint uVar9;
  MobyInstance *pMVar10;
  bool bVar11;
  float fVar12;
  longlong lVar13;
  int iVar15;
  bool bVar20;
  undefined1 uVar21;
  undefined4 uVar16;
  int iVar17;
  int iVar18;
  ulonglong uVar14;
  uint uVar19;
  undefined8 in_r9;
  longlong lVar22;
  ulonglong uVar23;
  longlong lVar24;
  double dVar25;
  undefined8 uVar26;
  double dVar27;
  double dVar28;
  double dVar29;
  double dVar30;
  double dVar31;
  double dVar32;
  undefined8 uVar33;
  GPiece<16> auVar34;
  GPiece<16> auVar35;
  GPiece<16> auVar36;
  GPiece<16> local_1c0;
  GPiece<16> local_1b0;
  float local_1a0;
  float local_19c;
  undefined4 local_198;
  undefined4 local_190;
  undefined4 local_18c;
  undefined4 local_188;
  undefined4 local_184;
  f32 local_180;
  f32 local_17c;
  f32 local_178;
  f32 local_174;
  float local_170;
  float local_16c;
  undefined4 local_168;
  f32 local_160;
  f32 local_15c;
  float local_158;
  f32 local_154;
  undefined4 local_150;
  undefined4 local_14c;
  float local_148;
  undefined4 local_144;
  f32 local_140;
  f32 local_13c;
  float local_138;
  f32 local_134;
  undefined4 local_130;
  undefined4 local_12c;
  float local_128;
  undefined4 local_124;
  GPiece<8> auStack_120;
  float local_118;
  f32 local_110;
  f32 local_10c;
  float local_108;
  f32 local_104;
  float local_100;
  float local_fc;
  undefined4 local_f8;
  GPiece<16> auStack_f0;
  float local_e0;
  float local_dc;
  undefined4 local_d8;
  GPiece<16> auStack_d0;
  GPiece<16> auStack_c0;
  float local_b0;
  float local_ac;
  undefined4 local_a8;
  undefined4 local_a4;
  MobyInstance *local_a0;
  undefined4 local_9c;
  undefined1 local_98;
  undefined1 local_97;
  MOBY_OCLASSES local_96;
  undefined4 local_94;
  undefined4 local_90;
  longlong local_80;
  
  lVar13 = (longlong)(int)moby;
  pvVar8 = moby->pVar;
  uVar23 = ZEXT48(pvVar8);
  M1202_001fbc78();
  iVar17 = *(int *)((int)pvVar8 + 0x160);
  moby->scale = moby->pClass->gScale * DAT_00766470;
  DoManipulator(0x4004000000000000,moby,2,(Manipulator *)((int)pvVar8 + 0x2b0));
  fVar3 = (moby->pos).x;
  fVar4 = (moby->pos).y;
  dVar32 = 1.0;
  fVar6 = (moby->pos).z + 1.0;
  uVar19 = *(uint *)(iVar17 + 0x10);
  uVar5 = *(uint *)(iVar17 + 0x14);
  fVar12 = *(float *)(iVar17 + 0x18) + 1.0;
  dVar25 = (double)FUN_005e8548(local_1c0,local_1b0);
  if ((((((15.0 <= dVar25) ||
         (uVar9 = (int)fVar3 >> 0x1f, iVar15 = (uVar9 >> 1 ^ (uint)fVar3) - uVar9,
         iVar15 < 0x40000000)) || (0x447f4000 < iVar15)) ||
       ((uVar9 = (int)fVar4 >> 0x1f, iVar15 = (uVar9 >> 1 ^ (uint)fVar4) - uVar9,
        0x447f4000 < iVar15 || iVar15 < 0x40000000 ||
        (uVar9 = (int)fVar6 >> 0x1f, iVar15 = (uVar9 >> 1 ^ (uint)fVar6) - uVar9,
        0x447f4000 < iVar15 || iVar15 < 0x40000000)))) ||
      (uVar9 = (int)uVar19 >> 0x1f, iVar15 = (uVar9 >> 1 ^ uVar19) - uVar9,
      0x447f4000 < iVar15 || iVar15 < 0x40000000)) ||
     (((uVar19 = (int)uVar5 >> 0x1f, iVar15 = (uVar19 >> 1 ^ uVar5) - uVar19,
       0x447f4000 < iVar15 || iVar15 < 0x40000000 ||
       (uVar19 = (int)fVar12 >> 0x1f, iVar15 = (uVar19 >> 1 ^ (uint)fVar12) - uVar19,
       0x447f4000 < iVar15 || iVar15 < 0x40000000)) ||
      ((iVar15 = CollLine(local_1c0,local_1b0,2,lVar13,0), iVar15 != 0 ||
       ((bVar11 = true, dVar32 <= ABS((double)(*(float *)(iVar17 + 0x18) - (moby->pos).z)) &&
        (bVar20 = MB_isCrate(g_standingOnMoby), !bVar20)))))))) {
    bVar11 = false;
  }
  bVar1 = moby->state;
  if (bVar1 < 6) {
    if (bVar1 != 5) {
      if (bVar1 == 4) {
        iVar17 = FastDecTimerS32(uVar23 + 0x1a8);
        if (iVar17 != 0) {
          moby->state = '\x05';
          *(f32 *)((int)pvVar8 + 0x1c0) = (moby->pos).x;
          fVar3 = (moby->pos).y;
          *(undefined4 *)((int)pvVar8 + 0x1d8) = 0;
          *(f32 *)((int)pvVar8 + 0x1c4) = fVar3;
          *(f32 *)((int)pvVar8 + 0x1c8) = (moby->pos).z;
          fVar3 = (moby->pos).w;
          *(undefined4 *)((int)pvVar8 + 0xf4) = 0;
          *(f32 *)((int)pvVar8 + 0x1cc) = fVar3;
          dVar25 = (double)MB_randRangeFloat
                                     (*(float *)((int)pvVar8 + 0x198) * 0.017453292,
                                      *(float *)((int)pvVar8 + 0x198) * -0.017453292);
          *(float *)((int)pvVar8 + 0x194) = (float)dVar25;
          if (moby->animationId != '\x03') {
            local_80 = (longlong)(int)(animationSpeed * 5.5);
            MB_SetAnimation(lVar13,3,0,(int)(animationSpeed * 5.5));
          }
        }
      }
      else if (bVar1 == 3) {
        uVar26 = FUN_005e8338((double)(*(float *)((int)pvVar8 + 0x120) - (moby->pos).x),
                              (double)(*(float *)((int)pvVar8 + 0x124) - (moby->pos).y));
        OrganicDeltAngSpeed
                  (uVar26,0x3f947ae140000000,0x3fd3333340000000,
                   (double)(g_FrameTime * 6.2831855),lVar13,&DAT_001fcca4,uVar23 + 400);
        if (*(int *)((int)pvVar8 + 0x164) != 2) {
          moby->state = '\x04';
          local_80 = (longlong)*(int *)((int)pvVar8 + 0x1b8);
          MB_randRangeFloat(0.0,(float)local_80);
          uVar16 = FastDoubleToInt();
          *(undefined4 *)((int)pvVar8 + 0x1a8) = uVar16;
        }
      }
      else if (bVar1 == 2) {
        if (moby->animationId == '\0') {
          if (*(int *)((int)pvVar8 + 0x1a8) == 0) {
            dVar25 = (double)MB_randRangeFloat(0.0,20.0);
            uVar16 = FastDoubleToInt((double)(float)(dVar25 * (double)animationSpeed));
            *(undefined4 *)((int)pvVar8 + 0x1a8) = uVar16;
          }
          else {
            iVar17 = FastDecTimerS32(uVar23 + 0x1a8);
            if (iVar17 != 0) {
              if (*(int *)((int)pvVar8 + 0x1b4) == 0) {
                if (moby->animationId != '\x02') {
                  local_80 = (longlong)(int)(animationSpeed * 10.5);
                  MB_SetAnimation(lVar13,2,0,(int)(animationSpeed * 10.5));
                }
              }
              else if (moby->animationId != '\x01') {
                local_80 = (longlong)(int)(animationSpeed * 10.5);
                MB_SetAnimation(lVar13,1,0,(int)(animationSpeed * 10.5));
              }
            }
          }
        }
        else if ((moby->field43_0x70 & 2U) != 0) {
          dVar25 = (double)FUN_005e8588(lVar13 + 0x10,&g_heroPosition);
          if ((double)DAT_0076648c <= dVar25) {
            moby->state = '\x03';
            if (moby->animationId != '\x01') {
              local_80 = (longlong)(int)(animationSpeed * 10.5);
              MB_SetAnimation(lVar13,1,0,(int)(animationSpeed * 10.5));
            }
          }
          else {
            moby->state = '\x05';
            *(f32 *)((int)pvVar8 + 0x1c0) = (moby->pos).x;
            fVar3 = (moby->pos).y;
            *(undefined4 *)((int)pvVar8 + 0x1d8) = 0;
            *(f32 *)((int)pvVar8 + 0x1c4) = fVar3;
            *(f32 *)((int)pvVar8 + 0x1c8) = (moby->pos).z;
            fVar3 = (moby->pos).w;
            *(undefined4 *)((int)pvVar8 + 0xf4) = 0;
            *(f32 *)((int)pvVar8 + 0x1cc) = fVar3;
            dVar25 = (double)MB_randRangeFloat
                                       (*(float *)((int)pvVar8 + 0x198) * 0.017453292,
                                        *(float *)((int)pvVar8 + 0x198) * -0.017453292);
            *(float *)((int)pvVar8 + 0x194) = (float)dVar25;
            if (moby->animationId != '\x03') {
              local_80 = (longlong)(int)(animationSpeed * 5.5);
              MB_SetAnimation(lVar13,3,0,(int)(animationSpeed * 5.5));
            }
          }
        }
      }
      else if (bVar1 == 1) {
        OrganicDeltAngSpeed
                  ((double)*(float *)((int)pvVar8 + 0x17c),0x3f947ae140000000,0x3fd3333340000000,
                   (double)(g_FrameTime * 6.2831855),lVar13,&DAT_001fcca4,uVar23 + 400);
        if ((*(int *)((int)pvVar8 + 0x1bc) != -1) &&
           (((pMVar10 = g_MobyInstance + *(int *)((int)pvVar8 + 0x1bc), pMVar10 == (MobyInstance *)0x0
             || (pMVar10->state == 0xfd || pMVar10->state == 0xfe)) ||
            ((*(uint *)(&g_LevelObjBits +
                       Level * 0x100 + (int)((longlong)((int)(short)pMVar10->uid >> 5) << 2)) &
             1 << (pMVar10->uid & 0x1f)) != 0)))) {
          auVar34 = ZEXT416(0xffffffff);
          auVar34 = auVar34 | auVar34 << 0x20 | auVar34 << 0x40 | auVar34 << 0x60;
          moby->state = '\x02';
          auVar35 = vectorShiftLeftIntegerWord(auVar34,auVar34);
          auVar34 = loadVectorLeftIndexed(0x24,0x1fcca4);
          auVar34 = auVar34 >> 0x60 & (GPiece<16>)0xffffffff;
          auVar36 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
          auVar34 = vectorMultiplyAddFloatingPoint
                              (auVar36,auVar34 | auVar34 << 0x20 | auVar34 << 0x40 | auVar34 << 0x60
                               ,auVar35);
          auVar34 = vectorConvertToSignedFixedPointWordSaturate(auVar34,0);
          auVar34 = auVar34 >> 0x60 & (GPiece<16>)0xffffffff;
          uVar16 = storeVectorElementWordIndexed
                             (auVar34 | auVar34 << 0x20 | auVar34 << 0x40 | auVar34 << 0x60,0x1a8,
                              uVar23);
          *(undefined4 *)((int)pvVar8 + 0x1a8U & 0xfffffffc) = uVar16;
          if (moby->group != -1) {
            M1202_001fbbd0(lVar13);
          }
        }
        if ((*(int *)((int)pvVar8 + 0x164) != 2) || (*(int *)((int)pvVar8 + 0x1b4) != 0)) {
          auVar34 = ZEXT416(0xffffffff);
          auVar34 = auVar34 | auVar34 << 0x20 | auVar34 << 0x40 | auVar34 << 0x60;
          moby->state = '\x02';
          auVar35 = vectorShiftLeftIntegerWord(auVar34,auVar34);
          auVar34 = loadVectorLeftIndexed(0x24,0x1fcca4);
          auVar34 = auVar34 >> 0x60 & (GPiece<16>)0xffffffff;
          auVar36 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
          auVar34 = vectorMultiplyAddFloatingPoint
                              (auVar36,auVar34 | auVar34 << 0x20 | auVar34 << 0x40 | auVar34 << 0x60
                               ,auVar35);
          auVar34 = vectorConvertToSignedFixedPointWordSaturate(auVar34,0);
          auVar34 = auVar34 >> 0x60 & (GPiece<16>)0xffffffff;
          uVar16 = storeVectorElementWordIndexed
                             (auVar34 | auVar34 << 0x20 | auVar34 << 0x40 | auVar34 << 0x60,0x1a8,
                              uVar23);
          *(undefined4 *)((int)pvVar8 + 0x1a8U & 0xfffffffc) = uVar16;
          if (moby->group != -1) {
            M1202_001fbbd0(lVar13);
          }
        }
      }
      else if (bVar1 == 0) {
        if ((*(int *)((int)pvVar8 + 0x1dc) != 0) && (g_heroType == '\x01')) {
          DeleteMoby(moby);
          return;
        }
        *(undefined4 *)((int)pvVar8 + 0x30) = 0x3f000000;
        *(undefined4 *)((int)pvVar8 + 0x20) = 0x40a00000;
        *(undefined2 *)((int)pvVar8 + 0x24) = 5;
        *(undefined1 *)((int)pvVar8 + 0x28) = 3;
        *(undefined1 *)((int)pvVar8 + 0x29) = 1;
        uVar21 = FastDoubleToInt(0x4024000000000000);
        *(undefined1 *)((int)pvVar8 + 0x58) = uVar21;
        uVar21 = FastDoubleToInt(0x4030000000000000);
        *(undefined1 *)((int)pvVar8 + 0x5a) = uVar21;
        MVar7 = moby->modeBits;
        *(f32 *)((int)pvVar8 + 0x170) = (moby->pos).x;
        *(f32 *)((int)pvVar8 + 0x174) = (moby->pos).y;
        fVar3 = (moby->pos).z;
        moby->modeBits = MVar7 | (CAN_BE_DAMAGED|CAN_BE_AUTO_TARGETED);
        *(f32 *)((int)pvVar8 + 0x178) = fVar3;
        *(f32 *)((int)pvVar8 + 0x17c) = (moby->pos).w;
        *(f32 *)((int)pvVar8 + 0x17c) = (moby->rotation).z;
        MB_InitDefaultParams((float *)((int)pvVar8 + 0xd0));
        *(undefined4 *)((int)pvVar8 + 0xdc) = 0x3f000000;
        *(undefined4 *)((int)pvVar8 + 0xd8) = 0x40000000;
        uVar16 = FastDoubleToInt((double)(DAT_00766470 * 1024.0));
        *(float *)((int)pvVar8 + 0xd4) = DAT_00766470;
        fVar6 = g_FrameTime;
        *(undefined4 *)((int)pvVar8 + 0xd0) = uVar16;
        *(float *)((int)pvVar8 + 0xf4) = *(float *)((int)pvVar8 + 0x1a4) * fVar6;
        if ((*(int *)((int)pvVar8 + 0x1bc) != -1) &&
           (((pMVar10 = g_MobyInstance + *(int *)((int)pvVar8 + 0x1bc), pMVar10 == (MobyInstance *)0x0
             || (pMVar10->state == 0xfd || pMVar10->state == 0xfe)) ||
            (((*(uint *)(&g_LevelObjBits +
                        Level * 0x100 + (int)((longlong)((int)(short)pMVar10->uid >> 5) << 2)) &
              1 << (pMVar10->uid & 0x1f)) != 0 &&
             (g_LevelFlags[Level][(byte)pMVar10->levelFlagIdx] == -1)))))) {
          *(undefined4 *)((int)pvVar8 + 0x1bc) = 0xffffffff;
        }
        moby->state = '\x01';
        if (moby->animationId != '\0') {
          MB_SetAnimation(lVar13,0,0,0);
        }
        *(float *)((int)pvVar8 + 0x1a0) = DAT_0076648c;
      }
      goto LAB_001ff038;
    }
    lVar22 = lVar13 + 0x10;
    iVar15 = iVar17 + 0x10;
    dVar27 = (double)FUN_005e8548(lVar22,iVar15);
    dVar28 = 3.569999933242798;
    dVar25 = dVar28;
    if (*(short *)(iVar17 + 0xa6) == 0x359) {
      dVar25 = 2.0;
    }
    if (dVar27 <= dVar25) {
      Delt(*(float *)((int)pvVar8 + 0x1a4) * g_FrameTime * 0.3,
                     g_FrameTimeSq * 20.0,(float *)((int)pvVar8 + 0xf4));
    }
    else {
      Delt(*(float *)((int)pvVar8 + 0x1a4) * g_FrameTime,g_FrameTimeSq * 8.0,
                     (float *)((int)pvVar8 + 0xf4));
    }
    local_180 = (moby->pos).x;
    local_17c = (moby->pos).y;
    local_178 = (moby->pos).z;
    local_174 = (moby->pos).w;
    if (bVar11) {
      dVar25 = dVar28;
      if (*(short *)(iVar17 + 0xa6) == 0x359) {
        dVar25 = 2.0;
      }
      if (0.35 <= ABS((float)(dVar27 - dVar25))) goto LAB_001fd880;
      Delt(0.0,g_FrameTimeSq * 30.0,(float *)((int)pvVar8 + 0xf4));
    }
    else {
LAB_001fd880:
      if (*(int *)((int)pvVar8 + 0x1d8) != 0) {
        Delt(0.0,g_FrameTimeSq * 10.0,(float *)((int)pvVar8 + 0xf4));
      }
    }
    dVar25 = (double)FUN_005e8338((double)(*(float *)(iVar17 + 0x10) - (moby->pos).x),
                                  (double)(*(float *)(iVar17 + 0x14) - (moby->pos).y));
    dVar27 = (double)FastSubRots((float)dVar25,(moby->rotation).z);
    if ((0.8726646304130554 < dVar27) &&
       (fVar6 = *(float *)((int)pvVar8 + 0x1a4) * g_FrameTime * 0.25,
       fVar6 < *(float *)((int)pvVar8 + 0xf4))) {
      *(float *)((int)pvVar8 + 0xf4) = fVar6;
    }
    dVar31 = 0.01745329238474369;
    if (((double)(DAT_00766498 * 0.017453292) < dVar27) || (*(int *)((int)pvVar8 + 0x1d8) == 0)) {
      OrganicDeltAngSpeed
                (dVar25,0x3f947ae140000000,0x3fd3333340000000,
                 (double)(g_FrameTime * 6.2831855),lVar13,&DAT_001fcca4,uVar23 + 400);
    }
    dVar29 = (double)M1202_001fb4d0(lVar13);
    dVar30 = (double)cosf((float)dVar29);
    dVar25 = dVar28;
    if (*(short *)(iVar17 + 0xa6) == 0x359) {
      dVar25 = 2.0;
    }
    local_170 = (float)(dVar30 * dVar25);
    dVar29 = (double)FUN_005e8128(dVar29);
    dVar25 = dVar28;
    if (*(short *)(iVar17 + 0xa6) == 0x359) {
      dVar25 = 2.0;
    }
    local_16c = (float)(dVar29 * dVar25);
    local_168 = 0;
    FUN_005e7f54(&local_170,&local_170,iVar15);
    if (g_heroType == '\x01') {
      if (ABS(*(float *)((int)pvVar8 + 400)) <= g_FrameTime * 0.08726646) {
        if (moby->animationId != '\x01') {
          local_80 = (longlong)(int)(animationSpeed * 7.5);
          MB_SetAnimation(lVar13,1,0,(int)(animationSpeed * 7.5));
        }
      }
      else if (moby->animationId != '\x03') {
        local_80 = (longlong)(int)(animationSpeed * 7.5);
        MB_SetAnimation(lVar13,3,0,(int)(animationSpeed * 7.5));
      }
    }
    else {
      dVar30 = (double)(moby->rotation).z;
      dVar25 = (double)FUN_005e8338((double)(local_170 - (moby->pos).x),
                                    (double)(local_16c - (moby->pos).y));
      (moby->rotation).z = (float)dVar25;
      dVar25 = (double)cosf((float)dVar25);
      dVar29 = 2.0;
      local_1a0 = (float)(dVar25 * 2.0);
      dVar25 = (double)FUN_005e8128((double)(moby->rotation).z);
      local_19c = (float)(dVar25 * dVar29);
      local_198 = 0;
      local_184 = 0;
      local_188 = 0;
      local_18c = 0;
      local_190 = 0;
      local_160 = (moby->pos).x;
      local_15c = (moby->pos).y;
      local_154 = (moby->pos).w;
      local_158 = (float)((double)(moby->pos).z + dVar32);
      local_150 = *(undefined4 *)(iVar17 + 0x10);
      local_14c = *(undefined4 *)(iVar17 + 0x14);
      local_148 = (float)((double)*(float *)(iVar17 + 0x18) + dVar32);
      local_144 = *(undefined4 *)(iVar17 + 0x1c);
      iVar18 = CollLine(&local_160,&local_150,2,lVar13,0);
      if ((iVar18 != 0) &&
         (((g_CollOutput.pMoby == (MobyInstance *)0x0 || ((g_CollOutput.pMoby)->oClass != 0x31a)) &&
          (dVar25 = (double)FUN_005e8548(&local_160,0xa10960), dVar25 < (double)DAT_00766480)))) {
        auVar34 = ZEXT416(0xffffffff);
        auVar34 = auVar34 | auVar34 << 0x20 | auVar34 << 0x40 | auVar34 << 0x60;
        moby->state = '\x06';
        fVar6 = animationSpeed;
        auVar35 = vectorShiftLeftIntegerWord(auVar34,auVar34);
        auVar34 = loadVectorLeftIndexed(0x5c,0x1fcca4);
        auVar34 = auVar34 >> 0x60 & (GPiece<16>)0xffffffff;
        auVar36 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
        auVar34 = vectorMultiplyAddFloatingPoint
                            (auVar36,auVar34 | auVar34 << 0x20 | auVar34 << 0x40 | auVar34 << 0x60,
                             auVar35);
        auVar34 = vectorConvertToSignedFixedPointWordSaturate(auVar34,0);
        auVar34 = auVar34 >> 0x60 & (GPiece<16>)0xffffffff;
        uVar16 = storeVectorElementWordIndexed
                           (auVar34 | auVar34 << 0x20 | auVar34 << 0x40 | auVar34 << 0x60,0x1a8,
                            uVar23);
        *(undefined4 *)((int)pvVar8 + 0x1a8U & 0xfffffffc) = uVar16;
        if (moby->animationId != '\x01') {
          local_80 = (longlong)(int)(fVar6 * 7.5);
          MB_SetAnimation(lVar13,1,0,(int)(fVar6 * 7.5));
        }
      }
      uVar14 = MB_UpdateNavMove
                         (dVar32,moby,(MobyInstance *)((int)pvVar8 + 0xd0),&local_1a0,&local_190);
      (moby->rotation).z = (float)dVar30;
      if ((uVar14 & 3) == 0) {
        *(undefined4 *)((int)pvVar8 + 0x1d8) = 0;
      }
      else {
        dVar25 = (double)FUN_005e8588(lVar22,&local_180);
        *(uint *)((int)pvVar8 + 0x1d8) =
             (uint)(dVar25 < (double)(*(float *)((int)pvVar8 + 0xf4) * 0.25));
        if ((worldUpdateTime == (worldUpdateTime / 7) * 7) && (*(int *)((int)pvVar8 + 0x1a8) == 0))
        {
          dVar25 = (double)FUN_005e8588(uVar23 + 0x1c0,lVar22);
          if (((double)*(float *)((int)pvVar8 + 0xf4) <= dVar25) ||
             ((double)(float)((double)DAT_00766498 * dVar31) < dVar27)) {
            if (moby->animationId == '\x01') {
              local_80 = (longlong)(int)(animationSpeed * 7.5);
              MB_SetAnimation(lVar13,3,0,(int)(animationSpeed * 7.5));
            }
          }
          else {
            auVar34 = ZEXT416(0xffffffff);
            auVar34 = auVar34 | auVar34 << 0x20 | auVar34 << 0x40 | auVar34 << 0x60;
            moby->state = '\x06';
            fVar6 = animationSpeed;
            auVar35 = vectorShiftLeftIntegerWord(auVar34,auVar34);
            auVar34 = loadVectorLeftIndexed(0x5c,0x1fcca4);
            auVar34 = auVar34 >> 0x60 & (GPiece<16>)0xffffffff;
            auVar36 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
            auVar34 = vectorMultiplyAddFloatingPoint
                                (auVar36,auVar34 | auVar34 << 0x20 | auVar34 << 0x40 |
                                         auVar34 << 0x60,auVar35);
            auVar34 = vectorConvertToSignedFixedPointWordSaturate(auVar34,0);
            auVar34 = auVar34 >> 0x60 & (GPiece<16>)0xffffffff;
            uVar16 = storeVectorElementWordIndexed
                               (auVar34 | auVar34 << 0x20 | auVar34 << 0x40 | auVar34 << 0x60,0x1a8,
                                uVar23);
            *(undefined4 *)((int)pvVar8 + 0x1a8U & 0xfffffffc) = uVar16;
            if (moby->animationId != '\x01') {
              local_80 = (longlong)(int)(fVar6 * 7.5);
              MB_SetAnimation(lVar13,1,0,(int)(fVar6 * 7.5));
            }
          }
          *(f32 *)((int)pvVar8 + 0x1c0) = (moby->pos).x;
          *(f32 *)((int)pvVar8 + 0x1c4) = (moby->pos).y;
          *(f32 *)((int)pvVar8 + 0x1c8) = (moby->pos).z;
          *(f32 *)((int)pvVar8 + 0x1cc) = (moby->pos).w;
        }
      }
      if (((moby->state == '\x05') &&
          (iVar18 = FastDecTimerS32(uVar23 + 0x1a8), iVar18 != 0)) &&
         ((0 < *(int *)((int)pvVar8 + 0xf4) &&
          ((*(int *)((int)pvVar8 + 0x1d8) == 0 && (moby->animationId == '\x01')))))) {
        local_80 = (longlong)(int)(animationSpeed * 7.5);
        MB_SetAnimation(lVar13,3,0,(int)(animationSpeed * 7.5));
      }
    }
    moby->unk58 = 1.2;
    dVar31 = (double)FUN_005e8548(lVar22,uVar23 + 0x170);
    dVar25 = 30.0;
    if (g_heroType == '\x01') {
      dVar25 = dVar32;
    }
    if ((dVar25 < dVar31) || (*(int *)((int)pvVar8 + 0x164) == 2)) {
      moby->state = '\b';
      local_80 = (longlong)(int)(animationSpeed * 12.5);
      MB_SetAnimation(lVar13,4,0,(int)(animationSpeed * 12.5));
    }
    else {
      dVar25 = (double)FUN_005e8588(lVar22,iVar15);
      if (*(short *)(iVar17 + 0xa6) == 0x359) {
        dVar28 = 2.0;
      }
      if (((dVar25 < (double)(float)(dVar28 + 0.44999998807907104)) &&
          (local_80 = (longlong)(int)(animationSpeed * 10.5),
          DAT_00969ea0 < (int)(animationSpeed * 10.5))) && (dVar27 < 0.3490658402442932 && bVar11))
      {
        uVar19 = MB_randInt(100);
        moby->state = '\a';
        local_80 = (longlong)(int)(animationSpeed * 7.5);
        MB_SetAnimation
                  (lVar13,(ZERO_MASK((uVar19 & 1)) & 1U) + 6,0,
                   (int)(animationSpeed * 7.5));
      }
    }
LAB_001ff038:
    uVar2 = moby->state;
    if ((((uVar2 == '\x05' || uVar2 == '\x03') || (uVar2 == '\a')) || (uVar2 == '\b')) &&
       (dVar25 = (double)GetGroundZ(0x3fe0000000000000,lVar13 + 0x10,0),
       dVar25 < (double)(moby->pos).z)) {
      fVar6 = *(float *)((int)pvVar8 + 0x78) - *(float *)((int)pvVar8 + 0x80);
      *(float *)((int)pvVar8 + 0x78) = fVar6;
      fVar12 = g_FrameTime * -7.0;
      if (fVar6 < fVar12) {
        *(float *)((int)pvVar8 + 0x78) = fVar12;
        fVar6 = fVar12;
      }
      fVar6 = (moby->pos).z + fVar6;
      (moby->pos).z = fVar6;
      if ((double)fVar6 < dVar25) {
        (moby->pos).z = (float)dVar25;
      }
      if (dVar25 < (double)(*(float *)((int)pvVar8 + 0x178) - 2.0)) {
        if (moby->animationId != '\x0e') {
          local_80 = (longlong)(int)(animationSpeed * 6.5);
          MB_SetAnimation(lVar13,0xe,0,(int)(animationSpeed * 6.5));
        }
        moby->state = '\f';
      }
    }
    if ((moby->enabled != '\0') &&
       (dVar25 = (double)FUN_005e8548(lVar13 + 0x10,0x951500), dVar25 < 18.0)) {
      MB_SetZBoundsFromGround(lVar13);
      moby->shadow = '\x0e';
    }
  }
  else {
    if (bVar1 == 0xc) {
      *(float *)((int)pvVar8 + 0x78) =
           *(float *)((int)pvVar8 + 0x78) - *(float *)((int)pvVar8 + 0x80);
      FastVecAddSelf(auStack_c0,lVar13 + 0x10,uVar23 + 0x70);
      dVar25 = (double)GetGroundZ(0x3fe0000000000000,lVar13 + 0x10,0);
      if ((double)(moby->pos).z < dVar25) {
        iVar17 = CollHotspot();
        if (((iVar17 == 0) || (iVar17 == 1)) || (iVar17 == 3)) {
          MB_SpawnBoltsFromCrate(lVar13,0x200,0xffffffffffffffff);
          DeleteMoby(moby);
          return;
        }
        moby->state = '\v';
        moby->modeBits =
             moby->modeBits &
             (MIRROR|CAN_BE_DAMAGED|HIDE_BACKFACES|DISABLE_Z_WRITE|DRAW_SHADOW|
              DRAW_TRANSPARENT_WEIRD|LOCK_ROTATION|NO_DRAW|UNK_40|HAS_SPECIAL_VARS|HAS_GLOW|
              TRANSPARENT|NO_POST_UPDATE|NO_UPDATE|DISABLED);
        uVar26 = FastDoubleToInt(0x4088000000000000);
        *(undefined4 *)((int)pvVar8 + 0x98) = 0x3f400000;
        fVar12 = DAT_00766474;
        fVar6 = g_FrameTimeSq;
        *(int *)((int)pvVar8 + 0x90) = (int)uVar26;
        *(undefined1 *)((int)pvVar8 + 0xad) = 0;
        *(undefined4 *)((int)pvVar8 + 0x94) = 9;
        *(float *)((int)pvVar8 + 0x80) = fVar12 * fVar6;
        MB_SetupJumpArc
                  (0x4000000000000000,0x3ff8000000000000,uVar26,0x3f400000,uVar23 + 0x70);
        *(undefined4 *)((int)pvVar8 + 0xc0) = 0x40e00000;
        *(undefined4 *)((int)pvVar8 + 0xc4) = 0x41500000;
        FastWrapRot((moby->rotation).z,3.1415927);
        MB_StartKick(lVar13,uVar23 + 0x70);
        *(undefined1 *)((int)pvVar8 + 0x67) = 0xfa;
        MB_UpdateLightsTransition(lVar13,uVar23 + 0x60);
        MB_SpawnBoltsFromCrate(lVar13,0,0xffffffffffffffff);
        goto LAB_001ff038;
      }
    }
    else if (bVar1 != 0xb) {
      if (bVar1 == 10) {
        uVar19 = MB_UpdateKick(moby,(KickVars *)((int)pvVar8 + 0x70));
        if ((uVar19 & 0x41) == 0) {
          if ((moby->pos).z < *(float *)((int)pvVar8 + 0x178) - 0.2) {
            if (moby->animationId != '\x0e') {
              local_80 = (longlong)(int)(animationSpeed * 6.5);
              MB_SetAnimation(lVar13,0xe,0,(int)(animationSpeed * 6.5));
            }
            moby->state = '\f';
            *(float *)((int)pvVar8 + 0x78) = *(float *)((int)pvVar8 + 0x78) * 0.33333334;
          }
        }
        else {
          moby->state = '\a';
          *(float *)((int)pvVar8 + 0xf4) = g_FrameTime * 5.0;
          uVar19 = MB_randInt(100);
          local_80 = (longlong)(int)(animationSpeed * 6.5);
          MB_SetAnimation
                    (lVar13,(ZERO_MASK((uVar19 & 1)) & 1U) + 6,0,
                     (int)(animationSpeed * 6.5));
        }
      }
      else if (bVar1 == 9) {
        Delt(*(float *)((int)pvVar8 + 0x1a4) * 3.0 * g_FrameTime,
                       g_FrameTimeSq * 20.0,(float *)((int)pvVar8 + 0xf4));
        uVar26 = FUN_005e8338((double)(*(float *)(iVar17 + 0x10) - (moby->pos).x),
                              (double)(*(float *)(iVar17 + 0x14) - (moby->pos).y));
        OrganicDeltAngSpeed
                  (uVar26,0x3f947ae140000000,0x3fd3333340000000,
                   (double)(g_FrameTime * 6.2831855),lVar13);
        dVar28 = (double)(moby->rotation).z;
        dVar25 = (double)FUN_005e8338((double)(*(float *)(iVar17 + 0x10) - (moby->pos).x),
                                      (double)(*(float *)(iVar17 + 0x14) - (moby->pos).y));
        dVar25 = (double)FastWrapRot((float)dVar25,3.14159);
        (moby->rotation).z = (float)dVar25;
        dVar25 = (double)cosf((float)dVar25);
        dVar27 = 2.0;
        local_100 = (float)(dVar25 * 2.0);
        dVar25 = (double)FUN_005e8128((double)(moby->rotation).z);
        local_fc = (float)(dVar25 * dVar27);
        local_f8 = 0;
        MB_UpdateNavMove
                  (dVar32,moby,(MobyInstance *)((int)pvVar8 + 0xd0),&local_100,auStack_f0);
        (moby->rotation).z = (float)dVar28;
        if ((bVar11) &&
           ((iVar15 = FastDecTimerS32(uVar23 + 0x1a8), iVar15 != 0 ||
            (dVar25 = (double)FUN_005e8548(lVar13 + 0x10,iVar17 + 0x10),
            (double)DAT_00766490 < dVar25)))) {
          moby->state = '\a';
          *(float *)((int)pvVar8 + 0xf4) = g_FrameTime * 5.0;
          uVar19 = MB_randInt(100);
          local_80 = (longlong)(int)(animationSpeed * 6.5);
          MB_SetAnimation
                    (lVar13,(ZERO_MASK((uVar19 & 1)) & 1U) + 6,0,
                     (int)(animationSpeed * 6.5));
        }
      }
      else if (bVar1 == 8) {
        Delt(*(float *)((int)pvVar8 + 0x1a4) * g_FrameTime,g_FrameTimeSq * 5.0,
                       (float *)((int)pvVar8 + 0xf4));
        dVar25 = (double)FUN_005e8338((double)(*(float *)((int)pvVar8 + 0x170) - (moby->pos).x),
                                      (double)(*(float *)((int)pvVar8 + 0x174) - (moby->pos).y));
        OrganicDeltAngSpeed
                  (dVar25,0x3f947ae140000000,0x3fd3333340000000,
                   (double)(g_FrameTime * 6.2831855),lVar13);
        dVar25 = (double)FastSubRots((float)dVar25,(moby->rotation).z);
        if ((0.8726646304130554 < dVar25) &&
           (fVar6 = *(float *)((int)pvVar8 + 0x1a4) * g_FrameTime * 0.25,
           fVar6 < *(float *)((int)pvVar8 + 0xf4))) {
          *(float *)((int)pvVar8 + 0xf4) = fVar6;
        }
        dVar25 = (double)cosf((moby->rotation).z);
        dVar27 = 2.0;
        local_e0 = (float)(dVar25 * 2.0);
        dVar25 = (double)FUN_005e8128((double)(moby->rotation).z);
        local_dc = (float)(dVar25 * dVar27);
        local_d8 = 0;
        MB_UpdateNavMove
                  (dVar32,moby,(MobyInstance *)((int)pvVar8 + 0xd0),&local_e0,auStack_d0);
        dVar25 = (double)FUN_005e8548(lVar13 + 0x10,uVar23 + 0x170);
        if (dVar32 <= dVar25) {
          if (*(int *)((int)pvVar8 + 0x164) != 2) {
            moby->state = '\x05';
            *(f32 *)((int)pvVar8 + 0x1c0) = (moby->pos).x;
            fVar3 = (moby->pos).y;
            *(undefined4 *)((int)pvVar8 + 0x1d8) = 0;
            *(f32 *)((int)pvVar8 + 0x1c4) = fVar3;
            *(f32 *)((int)pvVar8 + 0x1c8) = (moby->pos).z;
            fVar3 = (moby->pos).w;
            *(undefined4 *)((int)pvVar8 + 0xf4) = 0;
            *(f32 *)((int)pvVar8 + 0x1cc) = fVar3;
            if (moby->animationId != '\x03') {
              local_80 = (longlong)(int)(animationSpeed * 7.5);
              MB_SetAnimation(lVar13,3,0,(int)(animationSpeed * 7.5));
            }
          }
        }
        else {
          moby->state = '\x03';
          if (moby->animationId != '\x01') {
            local_80 = (longlong)(int)(animationSpeed * 20.5);
            MB_SetAnimation(lVar13,1,0,(int)(animationSpeed * 20.5));
          }
        }
      }
      else {
        if (bVar1 != 7) {
          if (bVar1 != 6) goto LAB_001ff038;
          dVar25 = (double)FUN_005e8338((double)(*(float *)(iVar17 + 0x10) - (moby->pos).x),
                                        (double)(*(float *)(iVar17 + 0x14) - (moby->pos).y));
          dVar25 = (double)FastSubRots((float)dVar25,(moby->rotation).z);
          if ((0.8726646304130554 < dVar25) &&
             (fVar6 = *(float *)((int)pvVar8 + 0x1a4) * g_FrameTime * 0.25,
             fVar6 < *(float *)((int)pvVar8 + 0xf4))) {
            *(float *)((int)pvVar8 + 0xf4) = fVar6;
          }
          iVar15 = FastDecTimerS32(uVar23 + 0x1a8);
          if ((iVar15 != 0) || ((double)(DAT_00766498 * 0.017453292) < dVar25)) {
            local_138 = (float)((double)(moby->pos).z + dVar32);
            local_130 = *(undefined4 *)(iVar17 + 0x10);
            local_12c = *(undefined4 *)(iVar17 + 0x14);
            local_128 = (float)((double)*(float *)(iVar17 + 0x18) + dVar32);
            local_124 = *(undefined4 *)(iVar17 + 0x1c);
            local_140 = (moby->pos).x;
            local_13c = (moby->pos).y;
            local_134 = (moby->pos).w;
            iVar15 = CollLine(&local_140,&local_130,2,lVar13,0);
            if ((iVar15 == 0) ||
               (((g_CollOutput.pMoby != (MobyInstance *)0x0 && ((g_CollOutput.pMoby)->oClass == 0x31a))
                || (dVar27 = (double)FUN_005e8548(&local_140,0xa10960),
                   (double)DAT_00766480 <= dVar27)))) {
              auVar34 = ZEXT416(0xffffffff);
              auVar34 = auVar34 | auVar34 << 0x20 | auVar34 << 0x40 | auVar34 << 0x60;
              moby->state = '\x05';
              auVar35 = vectorShiftLeftIntegerWord(auVar34,auVar34);
              *(f32 *)((int)pvVar8 + 0x1c0) = (moby->pos).x;
              fVar3 = (moby->pos).y;
              *(undefined4 *)((int)pvVar8 + 0x1d8) = 0;
              *(f32 *)((int)pvVar8 + 0x1c4) = fVar3;
              *(f32 *)((int)pvVar8 + 0x1c8) = (moby->pos).z;
              fVar3 = (moby->pos).w;
              *(undefined4 *)((int)pvVar8 + 0xf4) = 0;
              *(f32 *)((int)pvVar8 + 0x1cc) = fVar3;
              auVar34 = loadVectorLeftIndexed(0x74,0x1fcca4);
              auVar36 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
              auVar34 = auVar34 >> 0x60 & (GPiece<16>)0xffffffff;
              auVar34 = vectorMultiplyAddFloatingPoint
                                  (auVar36,auVar34 | auVar34 << 0x20 | auVar34 << 0x40 |
                                           auVar34 << 0x60,auVar35);
              auVar34 = vectorConvertToSignedFixedPointWordSaturate(auVar34,0);
              auVar34 = auVar34 >> 0x60 & (GPiece<16>)0xffffffff;
              uVar16 = storeVectorElementWordIndexed
                                 (auVar34 | auVar34 << 0x20 | auVar34 << 0x40 | auVar34 << 0x60,
                                  0x1a8,uVar23);
              *(undefined4 *)((int)pvVar8 + 0x1a8U & 0xfffffffc) = uVar16;
            }
          }
          dVar28 = (double)FUN_005e8548(lVar13 + 0x10,uVar23 + 0x170);
          dVar27 = 30.0;
          if (g_heroType == '\x01') {
            dVar27 = dVar32;
          }
          if ((dVar27 < dVar28) || (*(int *)((int)pvVar8 + 0x164) == 2)) {
            moby->state = '\b';
            local_80 = (longlong)(int)(animationSpeed * 12.5);
            MB_SetAnimation(lVar13,4,0,(int)(animationSpeed * 12.5));
          }
          else {
            dVar27 = (double)FUN_005e8588(lVar13 + 0x10,iVar17 + 0x10);
            fVar6 = 3.57;
            if (*(short *)(iVar17 + 0xa6) == 0x359) {
              fVar6 = 2.0;
            }
            if (((dVar27 < (double)(fVar6 + 0.45)) &&
                (local_80 = (longlong)(int)(animationSpeed * 10.5),
                DAT_00969ea0 < (int)(animationSpeed * 10.5))) &&
               (dVar25 < (double)(DAT_00766498 * 0.017453292) && bVar11)) {
              uVar19 = MB_randInt(100);
              moby->state = '\a';
              local_80 = (longlong)(int)(animationSpeed * 7.5);
              MB_SetAnimation
                        (lVar13,(ZERO_MASK((uVar19 & 1)) & 1U) + 6,0,
                         (int)(animationSpeed * 7.5));
            }
          }
        }
        dVar25 = (double)BlendAnimFrame(moby);
        uVar26 = FUN_005e8338((double)(*(float *)(iVar17 + 0x10) - (moby->pos).x),
                              (double)(*(float *)(iVar17 + 0x14) - (moby->pos).y));
        OrganicDeltAngSpeed
                  (uVar26,0x3f9eb851e0000000,0x3fd3333340000000,
                   (double)(g_FrameTime * 6.2831855),lVar13,&DAT_001fcca4,uVar23 + 400);
        uVar2 = moby->animationId;
        if ((((uVar2 != '\x06') && (uVar2 != '\a')) || (dVar25 < 4.0)) || (7.0 < dVar25)) {
          if (((uVar2 == '\x06') || (uVar2 == '\a')) && ((moby->field43_0x70 & 2U) != 0)) {
            dVar27 = (double)FUN_005e8548(lVar13 + 0x10,uVar23 + 0x170);
            dVar25 = 30.0;
            if (g_heroType == '\x01') {
              dVar25 = dVar32;
            }
            if ((dVar25 < dVar27) || (*(int *)((int)pvVar8 + 0x164) == 2)) {
              moby->state = '\b';
              local_80 = (longlong)(int)(animationSpeed * 12.5);
              MB_SetAnimation(lVar13,4,0,(int)(animationSpeed * 12.5));
            }
            else {
              moby->state = '\x05';
              *(f32 *)((int)pvVar8 + 0x1c0) = (moby->pos).x;
              fVar3 = (moby->pos).y;
              *(undefined4 *)((int)pvVar8 + 0x1d8) = 0;
              *(f32 *)((int)pvVar8 + 0x1c4) = fVar3;
              *(f32 *)((int)pvVar8 + 0x1c8) = (moby->pos).z;
              fVar3 = (moby->pos).w;
              *(undefined4 *)((int)pvVar8 + 0xf4) = 0;
              *(f32 *)((int)pvVar8 + 0x1cc) = fVar3;
              if (moby->animationId != '\x03') {
                local_80 = (longlong)(int)(animationSpeed * 7.5);
                MB_SetAnimation(lVar13,3,0,(int)(animationSpeed * 7.5));
              }
            }
          }
        }
        else {
          local_108 = (moby->pos).z + 0.25;
          local_9c = 0x10001;
          local_90 = 1;
          local_94 = 0x40466666;
          local_110 = (moby->pos).x;
          local_10c = (moby->pos).y;
          local_104 = (moby->pos).w;
          local_a0 = moby;
          dVar25 = (double)cosf((moby->rotation).z);
          local_b0 = (float)dVar25;
          dVar25 = (double)FUN_005e8128((double)(moby->rotation).z);
          local_ac = (float)dVar25;
          local_96 = moby->oClass;
          local_a8 = 0x3f800000;
          local_a4 = 0x45afdf66;
          local_98 = 0;
          local_97 = 1;
          uVar26 = 0x3fe8000000000000;
          if (moby->animationId == '\x06') {
            GetBonePosition(lVar13,0,auStack_120);
            CollMobySphere(uVar26,auStack_120);
            local_118 = local_118 + 0.5;
            CollMobySphere(uVar26,auStack_120);
            CollLine(&local_110,auStack_120,9,lVar13,&local_b0);
          }
          else {
            GetBonePosition(lVar13,1,auStack_120);
            CollMobySphere(uVar26,auStack_120);
            local_118 = local_118 + 0.5;
            CollMobySphere(uVar26,auStack_120,&DAT_001fcca4,0,lVar13,&local_b0);
            CollLine(&local_110,auStack_120,9,lVar13,&local_b0);
          }
        }
      }
      goto LAB_001ff038;
    }
    M1202_001fb2f0(lVar13);
    M1202_001fade0(lVar13);
    M1202_001fade0(lVar13);
    lVar24 = lVar13 + 0x10;
    MB_SpawnExplosionSparks2(0x3ff4000000000000,0x4034000000000000,lVar13,lVar24);
    uVar33 = 0;
    lVar22 = lVar13 + 0x40;
    MB_SpawnDebrisMoby(0,lVar13,0x775,lVar24,lVar22,0,2,in_r9,&DAT_00a15d30);
    MB_SpawnDebrisMoby(uVar33,lVar13,0x77a,lVar24,lVar22,0,2,in_r9,&DAT_00a15d30);
    MB_SpawnDebrisMoby(uVar33,lVar13,0x77b,lVar24,lVar22,0,2,in_r9,&DAT_00a15d30);
    MB_SpawnDebrisMoby(uVar33,lVar13,0x77c,lVar24,lVar22,0,2,in_r9,&DAT_00a15d30);
    uVar26 = 0x3fd3333340000000;
    MB_randRangeSigned(uVar33,0x3fd3333340000000);
    MB_randRangeSigned(uVar33,uVar26);
    MB_SpawnDebrisMoby(uVar33,lVar13,0x623,lVar24,lVar22,0,2,in_r9,&DAT_00a15d30);
    MB_SpawnDebrisMoby(uVar33,lVar13,0x624,lVar24,lVar22,0,2,in_r9,&DAT_00a15d30);
    MB_SpawnBoltsFromCrate(lVar13,0,0xffffffffffffffff);
    DeleteMoby(moby);
  }
  return;
}


