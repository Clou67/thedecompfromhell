// game/update/moby638.cpp -- reconstructed from NPEA00385 EBOOT
// STATUS: NOT STARTED (raw Ghidra output)
// 9 functions, 0x3f9d70-0x3fd8d8
#include "game/update/moby638.h"
#include "game/camera.h"
#include "game/collproc.h"
#include "game/freeze.h"
#include "game/hero.h"
#include "game/initspace.h"
#include "game/main.h"
#include "game/mobyfunc.h"
#include "game/mobyutil.h"
#include "game/partupd.h"
#include "game/sound.h"
#include "game/update/moby112.h"
#include "game/update/moby1212.h"
#include "game/update/moby491.h"
#include "idol/fastfunc.h"

// 0x03f9d70 (0x14 bytes)
void M638_003f9d70(void)

{
  DAT_0085464c = 0x10000;
  return;
}


// 0x03f9dc0 (0x3bc bytes)
void M638_003f9dc0(int param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  int iVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  double dVar16;
  double dVar17;
  double dVar18;
  double dVar19;
  GPiece<16> local_120;
  GPiece<16> local_110;
  GPiece<16> local_100;
  GPiece<48> auStack_f0;
  GPiece<16> auStack_c0;
  
  if ((*(char *)(param_1 + 0x31) != '\0') && (*(char *)(param_1 + 0x20) != '\n')) {
    iVar6 = 0;
    dVar8 = 0.0;
    dVar9 = 1.0;
    dVar10 = 0.75;
    dVar11 = -0.20000000298023224;
    dVar12 = 0.20000000298023224;
    dVar13 = -1.5;
    dVar14 = 1.5;
    dVar15 = 0.4000000059604645;
    dVar16 = -0.10000000149011612;
    dVar17 = 0.10000000149011612;
    dVar18 = 5.0;
    dVar19 = 20.0;
    do {
      dVar7 = (double)MB_randRangeFloat((float)dVar8,(float)dVar9);
      if (dVar7 <= dVar10) {
        GetBoneTransformations(param_1,iVar6 + 4,auStack_f0);
        MB_randRangeFloat((float)dVar11,(float)dVar12);
        MB_randRangeFloat((float)dVar11,(float)dVar12);
        dVar7 = (double)MB_randRangeFloat((float)dVar13,(float)dVar14);
        MB_randSphere
                  ((double)(float)(dVar7 * (double)g_FrameTime),
                   (double)(float)(dVar7 * (double)g_FrameTime),local_100);
        MB_randRangeFloat((float)dVar12,(float)dVar12);
        MB_randRangeFloat((float)dVar15,(float)dVar15);
        MB_randRangeFloat((float)dVar8,(float)dVar9);
        uVar1 = FastLerpColor(0xffffffff801010ff,0xffffffff801080ff);
        MB_randRangeFloat((float)dVar8,(float)dVar9);
        uVar2 = FastLerpColor(0x400000c0,0x4030ffff);
        dVar7 = (double)MB_randRangeFloat((float)dVar16,(float)dVar17);
        uVar3 = FastDoubleToInt
                          ((double)(animationSpeed *
                                   (float)((double)(float)(dVar7 + dVar9) * dVar18)));
        dVar7 = (double)MB_randRangeFloat((float)dVar16,(float)dVar17);
        uVar4 = FastDoubleToInt
                          ((double)(animationSpeed *
                                   (float)((double)(float)(dVar7 + dVar9) * dVar19)));
        dVar7 = (double)MB_randRangeFloat((float)dVar16,(float)dVar17);
        uVar5 = FastDoubleToInt
                          ((double)(animationSpeed *
                                   (float)((double)(float)(dVar7 + dVar9) * dVar19)));
        SpawnPart_2(auStack_c0,local_120,local_110,uVar1,uVar2,uVar3,uVar4,uVar5);
      }
      iVar6 = iVar6 + 1;
    } while (iVar6 < 2);
  }
  return;
}


// 0x03fa1a8 (0xaac bytes)
// inlined: FastAtan2 @0x3fa36c, FastAtan2 @0x3fa50c, FastRSqrt @0x3fa6f8, FastAtan2 @0x3fa88c, FastAtan2 @0x3faa20
void M638_003fa1a8(int param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  int iVar7;
  int iVar8;
  ulonglong *puVar9;
  float fVar10;
  int iVar11;
  ulonglong uVar12;
  longlong lVar13;
  longlong lVar14;
  longlong lVar15;
  float *pfVar17;
  longlong lVar16;
  ulonglong uVar18;
  ulonglong unaff_r29;
  ulonglong unaff_r30;
  ulonglong unaff_r31;
  ulonglong in_LR;
  longlong lVar19;
  double dVar20;
  double dVar21;
  double dVar22;
  double dVar23;
  double dVar24;
  double dVar25;
  double dVar26;
  double dVar27;
  ulonglong in_f19;
  ulonglong in_f20;
  ulonglong in_f21;
  ulonglong in_f22;
  ulonglong in_f23;
  ulonglong in_f24;
  ulonglong in_f25;
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
  
  uVar12 = ZEXT48(&stack0x00000000);
  lVar14 = uVar12 - 0x1e0;
  puVar9 = (ulonglong *)lVar14;
  *puVar9 = uVar12;
  puVar9[0x3e] = in_LR;
  puVar9[0x2f] = in_f19;
  puVar9[0x30] = in_f20;
  puVar9[0x31] = in_f21;
  puVar9[0x32] = in_f22;
  puVar9[0x33] = in_f23;
  puVar9[0x34] = in_f24;
  puVar9[0x35] = in_f25;
  puVar9[0x36] = in_f26;
  puVar9[0x37] = in_f27;
  puVar9[0x38] = in_f28;
  puVar9[0x39] = in_f29;
  puVar9[0x3a] = in_f30;
  puVar9[0x3b] = in_f31;
  puVar9[0x2d] = unaff_r30;
  puVar9[0x2e] = unaff_r31;
  iVar7 = *(int *)(param_1 + 0x78);
  iVar8 = *(int *)(iVar7 + 0x114);
  puVar9[0x2c] = unaff_r29;
  if (iVar8 != 2) {
    dVar33 = (double)*(float *)(param_1 + 0x10);
    dVar32 = (double)*(float *)(param_1 + 0x14);
    dVar31 = (double)(*(float *)(param_1 + 0x18) + 2.0);
    fVar1 = DAT_00969db8;
    fVar2 = DAT_00969db4;
    fVar3 = g_heroCGPos;
    if (*(short *)(*(int *)(iVar7 + 0x110) + 0xa6) != 0) {
      fVar1 = *(float *)(iVar7 + 0xd8);
      fVar2 = *(float *)(iVar7 + 0xd4);
      fVar3 = *(float *)(iVar7 + 0xd0);
    }
    dVar30 = (double)fVar3;
    dVar29 = (double)fVar2;
    dVar28 = (double)fVar1;
    FastNormalizeRMtx4(uVar12 - 0x170,param_1 + 0xc0);
    fVar1 = (float)(dVar29 - dVar32);
    fVar2 = (float)(dVar30 - dVar33);
    fVar3 = (float)(dVar28 - dVar31);
    fVar10 = *(float *)(puVar9 + 0x12) * fVar3 +
             *(float *)(puVar9 + 0xe) * fVar2 + *(float *)(puVar9 + 0x10) * fVar1;
    fVar6 = *(float *)((int)puVar9 + 0x94) * fVar3 +
            *(float *)((int)puVar9 + 0x74) * fVar2 + *(float *)((int)puVar9 + 0x84) * fVar1;
    *(float *)((int)puVar9 + 0xd4) = fVar10;
    *(float *)(puVar9 + 0x1b) = fVar6;
    *(float *)((int)puVar9 + 0xdc) = ABS(fVar10) - ABS(fVar6);
    dVar26 = 0.0;
    fVar1 = *(float *)(puVar9 + 0x13) * fVar3 +
            *(float *)(puVar9 + 0xf) * fVar2 + *(float *)(puVar9 + 0x11) * fVar1;
    uVar18 = (ulonglong)(*(uint *)((int)puVar9 + 0xd4) >> 0x1c) & 8 |
             (ulonglong)(*(uint *)((int)puVar9 + 0xdc) >> 0x1e) & 2 |
             (ulonglong)(*(uint *)(puVar9 + 0x1b) >> 0x1d) & 4;
    fVar2 = ABS(*(float *)((int)puVar9 + 0xd4));
    if (*(float *)((int)puVar9 + 0xdc) - 0.0 < 0.0) {
      fVar2 = ABS(fVar6);
    }
    fVar3 = *(float *)(&g_atanQuadrantTable + (int)(uVar18 << 2));
    fVar5 = ABS(*(float *)(puVar9 + 0x1b));
    if (*(float *)((int)puVar9 + 0xdc) - 0.0 < 0.0) {
      fVar5 = ABS(fVar10);
    }
    fVar4 = *(float *)(((uint)(uVar18 << 2) | 0x735900) + 4);
    dVar27 = 0.7853981852531433;
    dVar24 = dVar26;
    if (0.0 < fVar2) {
      lVar13 = uVar12 - 0x1d0;
      lVar15 = uVar12 - 0xa0;
      lVar16 = uVar12 - 0x90;
      lVar19 = 2;
      fVar2 = (fVar5 - fVar2) / (fVar5 + fVar2);
      fVar5 = fVar2 * fVar2;
      *(float *)((int)puVar9 + 0x14c) = fVar2;
      *(float *)((int)puVar9 + 0x144) = fVar2;
      *(float *)(puVar9 + 0x29) = fVar2;
      *(float *)(puVar9 + 0x28) = fVar2;
      fVar2 = fVar5 * fVar5;
      *(float *)((int)puVar9 + 0x144) = *(float *)((int)puVar9 + 0x144) * fVar5;
      *(float *)(puVar9 + 0x29) = *(float *)(puVar9 + 0x29) * fVar2;
      *(float *)((int)puVar9 + 0x14c) = *(float *)((int)puVar9 + 0x14c) * fVar2 * fVar5;
      do {
        *(float *)((int)lVar13 + 0x140) = *(float *)((int)lVar13 + 0x130) * fVar2 * fVar2;
        iVar8 = (int)lVar15;
        lVar13 = lVar13 + 8;
        lVar15 = lVar15 + 8;
        *(float *)((int)lVar16 + 4) = *(float *)(iVar8 + 4) * fVar2 * fVar2;
        lVar16 = lVar16 + 8;
        lVar19 = lVar19 + -1;
      } while (lVar19 != 0);
      lVar19 = 4;
      lVar16 = uVar12 - 0xa0;
      pfVar17 = (float *)&DAT_007358e0;
      lVar13 = lVar14;
      lVar15 = lVar16;
      do {
        fVar2 = *pfVar17;
        fVar5 = pfVar17[1];
        pfVar17 = pfVar17 + 2;
        *(float *)((int)lVar13 + 0x140) = *(float *)((int)lVar13 + 0x140) * fVar2;
        lVar13 = lVar13 + 8;
        *(float *)((int)lVar15 + 4) = *(float *)((int)lVar15 + 4) * fVar5;
        lVar15 = lVar15 + 8;
        lVar19 = lVar19 + -1;
      } while (lVar19 != 0);
      lVar15 = 2;
      lVar13 = lVar14;
      do {
        iVar8 = (int)lVar13;
        lVar13 = lVar13 + 0x10;
        iVar11 = (int)lVar16;
        lVar16 = lVar16 + 0x10;
        dVar24 = (double)((float)(dVar24 + (double)*(float *)(iVar8 + 0x140)) +
                          *(float *)(iVar11 + 4) + *(float *)(iVar11 + 8) + *(float *)(iVar11 + 0xc)
                         );
        lVar15 = lVar15 + -1;
      } while (lVar15 != 0);
      dVar24 = (double)((float)(dVar24 + 0.7853981852531433) * fVar3 + fVar4);
    }
    *(float *)((int)puVar9 + 0xcc) = fVar1;
    fVar1 = ABS(fVar1);
    fVar2 = SQRT(fVar10 * fVar10 + fVar6 * fVar6);
    fVar3 = ABS(fVar2);
    *(float *)(puVar9 + 0x19) = fVar2;
    *(float *)(puVar9 + 0x1a) = fVar3 - fVar1;
    uVar18 = (ulonglong)(*(uint *)(puVar9 + 0x19) >> 0x1c) & 8 |
             (ulonglong)(*(uint *)(puVar9 + 0x1a) >> 0x1e) & 2 |
             (ulonglong)(*(uint *)((int)puVar9 + 0xcc) >> 0x1d) & 4;
    fVar2 = ABS(*(float *)(puVar9 + 0x19));
    if (*(float *)(puVar9 + 0x1a) - 0.0 < 0.0) {
      fVar2 = fVar1;
    }
    fVar6 = *(float *)(&g_atanQuadrantTable + (int)(uVar18 << 2));
    fVar1 = *(float *)(((uint)(uVar18 << 2) | 0x735900) + 4);
    fVar10 = ABS(*(float *)((int)puVar9 + 0xcc));
    if (*(float *)(puVar9 + 0x1a) - 0.0 < 0.0) {
      fVar10 = fVar3;
    }
    dVar20 = dVar26;
    if (0.0 < fVar2) {
      lVar13 = uVar12 - 0x1d0;
      lVar15 = uVar12 - 0xc0;
      lVar16 = uVar12 - 0xb0;
      lVar19 = 2;
      fVar2 = (fVar10 - fVar2) / (fVar10 + fVar2);
      fVar3 = fVar2 * fVar2;
      *(float *)((int)puVar9 + 300) = fVar2;
      *(float *)((int)puVar9 + 0x124) = fVar2;
      *(float *)(puVar9 + 0x25) = fVar2;
      *(float *)(puVar9 + 0x24) = fVar2;
      fVar2 = fVar3 * fVar3;
      *(float *)((int)puVar9 + 0x124) = *(float *)((int)puVar9 + 0x124) * fVar3;
      *(float *)(puVar9 + 0x25) = *(float *)(puVar9 + 0x25) * fVar2;
      *(float *)((int)puVar9 + 300) = *(float *)((int)puVar9 + 300) * fVar2 * fVar3;
      do {
        *(float *)((int)lVar13 + 0x120) = *(float *)((int)lVar13 + 0x110) * fVar2 * fVar2;
        iVar8 = (int)lVar15;
        lVar13 = lVar13 + 8;
        lVar15 = lVar15 + 8;
        *(float *)((int)lVar16 + 4) = *(float *)(iVar8 + 4) * fVar2 * fVar2;
        lVar16 = lVar16 + 8;
        lVar19 = lVar19 + -1;
      } while (lVar19 != 0);
      lVar19 = 4;
      lVar16 = uVar12 - 0xc0;
      pfVar17 = (float *)&DAT_007358e0;
      lVar13 = lVar14;
      lVar15 = lVar16;
      do {
        fVar2 = *pfVar17;
        fVar3 = pfVar17[1];
        pfVar17 = pfVar17 + 2;
        *(float *)((int)lVar13 + 0x120) = *(float *)((int)lVar13 + 0x120) * fVar2;
        lVar13 = lVar13 + 8;
        *(float *)((int)lVar15 + 4) = *(float *)((int)lVar15 + 4) * fVar3;
        lVar15 = lVar15 + 8;
        lVar19 = lVar19 + -1;
      } while (lVar19 != 0);
      lVar15 = 2;
      lVar13 = lVar14;
      do {
        iVar8 = (int)lVar13;
        lVar13 = lVar13 + 0x10;
        iVar11 = (int)lVar16;
        lVar16 = lVar16 + 0x10;
        dVar20 = (double)((float)(dVar20 + (double)*(float *)(iVar8 + 0x120)) +
                          *(float *)(iVar11 + 4) + *(float *)(iVar11 + 8) + *(float *)(iVar11 + 0xc)
                         );
        lVar15 = lVar15 + -1;
      } while (lVar15 != 0);
      dVar20 = (double)((float)(dVar20 + 0.7853981852531433) * fVar6 + fVar1);
    }
    dVar20 = -dVar20;
    dVar25 = dVar27;
    if ((dVar24 <= 0.7853981852531433) && (dVar25 = dVar24, dVar24 < -0.7853981852531433)) {
      dVar25 = -0.7853981852531433;
    }
    dVar24 = dVar27;
    if ((dVar20 <= 0.7853981852531433) && (dVar24 = dVar20, dVar20 < -0.7853981852531433)) {
      dVar24 = -0.7853981852531433;
    }
    *(float *)(iVar7 + 0x198) = (float)(dVar25 * 0.5);
    *(float *)(iVar7 + 0x218) = (float)(dVar25 * 0.5);
    *(float *)(iVar7 + 0x194) = (float)(dVar24 * 0.5);
    *(float *)(iVar7 + 0x214) = (float)(dVar24 * 0.5);
    if ((*(char *)(param_1 + 0x20) == '\x05') || (*(char *)(param_1 + 0x20) == '\x04')) {
      fVar1 = *(float *)(param_1 + 0xc4);
      fVar2 = *(float *)(param_1 + 0xc0);
      fVar3 = *(float *)(param_1 + 200);
      fVar6 = fVar3 * fVar3 + fVar2 * fVar2 + fVar1 * fVar1;
      dVar24 = dVar26;
      dVar20 = dVar26;
      dVar25 = dVar26;
      if (SQRT(fVar6) != 0.0) {
        fVar10 = 1.0 / SQRT(fVar6);
        fVar10 = -(fVar6 * fVar10 * fVar10 - 1.0) * fVar10 * 0.5 + fVar10;
        fVar10 = -(fVar6 * fVar10 * fVar10 - 1.0) * fVar10 * 0.5 + fVar10;
        fVar10 = -(fVar6 * fVar10 * fVar10 - 1.0) * fVar10 * 0.5 + fVar10;
        dVar24 = (double)(fVar2 * fVar10);
        dVar20 = (double)(fVar1 * fVar10);
        dVar25 = (double)(fVar3 * fVar10);
      }
      fVar1 = *(float *)(param_1 + 0xd4);
      fVar2 = *(float *)(param_1 + 0xd0);
      fVar3 = *(float *)(param_1 + 0xd8);
      fVar6 = SQRT(fVar3 * fVar3 + fVar2 * fVar2 + fVar1 * fVar1);
      fVar10 = 0.5 / fVar6;
      dVar21 = dVar26;
      if (0.0 - fVar6 < 0.0) {
        dVar21 = (double)(fVar1 * fVar10);
      }
      dVar22 = dVar26;
      if (0.0 - fVar6 < 0.0) {
        dVar22 = (double)(fVar2 * fVar10);
      }
      dVar23 = dVar26;
      if (0.0 - fVar6 < 0.0) {
        dVar23 = (double)(fVar3 * fVar10);
      }
      if (fVar6 - 0.0 < 0.0) {
        dVar21 = (double)(fVar1 * fVar10);
      }
      if (fVar6 - 0.0 < 0.0) {
        dVar22 = (double)(fVar2 * fVar10);
      }
      if (fVar6 - 0.0 < 0.0) {
        dVar23 = (double)(fVar3 * fVar10);
      }
      fVar1 = (float)(dVar29 - (double)(float)((double)(float)(dVar20 + dVar32) + dVar21));
      fVar2 = (float)(dVar30 - (double)(float)((double)(float)(dVar24 + dVar33) + dVar22));
      fVar3 = (float)(dVar28 - (double)(float)((double)(float)(dVar25 + dVar31) + dVar23));
      fVar10 = *(float *)((int)puVar9 + 0x94) * fVar3 +
               *(float *)((int)puVar9 + 0x74) * fVar2 + *(float *)((int)puVar9 + 0x84) * fVar1;
      fVar6 = *(float *)(puVar9 + 0x12) * fVar3 +
              *(float *)(puVar9 + 0xe) * fVar2 + *(float *)(puVar9 + 0x10) * fVar1;
      fVar1 = *(float *)(puVar9 + 0x13) * fVar3 +
              *(float *)(puVar9 + 0xf) * fVar2 + *(float *)(puVar9 + 0x11) * fVar1;
      fVar2 = ABS(fVar1);
      *(float *)(puVar9 + 0x18) = fVar1;
      fVar1 = SQRT(fVar6 * fVar6 + fVar10 * fVar10);
      fVar3 = ABS(fVar1);
      *(float *)((int)puVar9 + 0xbc) = fVar1;
      *(float *)((int)puVar9 + 0xc4) = fVar3 - fVar2;
      uVar18 = (ulonglong)(*(uint *)((int)puVar9 + 0xbc) >> 0x1c) & 8 |
               (ulonglong)(*(uint *)((int)puVar9 + 0xc4) >> 0x1e) & 2 |
               (ulonglong)(*(uint *)(puVar9 + 0x18) >> 0x1d) & 4;
      fVar1 = ABS(*(float *)((int)puVar9 + 0xbc));
      if (*(float *)((int)puVar9 + 0xc4) - 0.0 < 0.0) {
        fVar1 = fVar2;
      }
      fVar2 = *(float *)(&g_atanQuadrantTable + (int)(uVar18 << 2));
      fVar5 = ABS(*(float *)(puVar9 + 0x18));
      if (*(float *)((int)puVar9 + 0xc4) - 0.0 < 0.0) {
        fVar5 = fVar3;
      }
      fVar3 = *(float *)(((uint)(uVar18 << 2) | 0x735900) + 4);
      dVar31 = dVar26;
      if (0.0 < fVar1) {
        lVar13 = uVar12 - 0x1d0;
        lVar15 = uVar12 - 0xe0;
        lVar16 = uVar12 - 0xd0;
        lVar19 = 2;
        fVar1 = (fVar5 - fVar1) / (fVar5 + fVar1);
        fVar5 = fVar1 * fVar1;
        *(float *)((int)puVar9 + 0x10c) = fVar1;
        *(float *)((int)puVar9 + 0x104) = fVar1;
        *(float *)(puVar9 + 0x21) = fVar1;
        *(float *)(puVar9 + 0x20) = fVar1;
        fVar1 = fVar5 * fVar5;
        *(float *)((int)puVar9 + 0x104) = *(float *)((int)puVar9 + 0x104) * fVar5;
        *(float *)(puVar9 + 0x21) = *(float *)(puVar9 + 0x21) * fVar1;
        *(float *)((int)puVar9 + 0x10c) = *(float *)((int)puVar9 + 0x10c) * fVar1 * fVar5;
        do {
          *(float *)((int)lVar13 + 0x100) = *(float *)((int)lVar13 + 0xf0) * fVar1 * fVar1;
          iVar8 = (int)lVar15;
          lVar13 = lVar13 + 8;
          lVar15 = lVar15 + 8;
          *(float *)((int)lVar16 + 4) = *(float *)(iVar8 + 4) * fVar1 * fVar1;
          lVar16 = lVar16 + 8;
          lVar19 = lVar19 + -1;
        } while (lVar19 != 0);
        lVar19 = 4;
        lVar16 = uVar12 - 0xe0;
        pfVar17 = (float *)&DAT_007358e0;
        lVar13 = lVar14;
        lVar15 = lVar16;
        do {
          fVar1 = *pfVar17;
          fVar5 = pfVar17[1];
          pfVar17 = pfVar17 + 2;
          *(float *)((int)lVar13 + 0x100) = *(float *)((int)lVar13 + 0x100) * fVar1;
          lVar13 = lVar13 + 8;
          *(float *)((int)lVar15 + 4) = *(float *)((int)lVar15 + 4) * fVar5;
          lVar15 = lVar15 + 8;
          lVar19 = lVar19 + -1;
        } while (lVar19 != 0);
        lVar15 = 2;
        lVar13 = lVar14;
        do {
          iVar8 = (int)lVar13;
          lVar13 = lVar13 + 0x10;
          iVar11 = (int)lVar16;
          lVar16 = lVar16 + 0x10;
          dVar31 = (double)((float)(dVar31 + (double)*(float *)(iVar8 + 0x100)) +
                            *(float *)(iVar11 + 4) + *(float *)(iVar11 + 8) +
                           *(float *)(iVar11 + 0xc));
          lVar15 = lVar15 + -1;
        } while (lVar15 != 0);
        dVar31 = (double)((float)(dVar31 + 0.7853981852531433) * fVar2 + fVar3);
      }
      *(float *)(puVar9 + 0x16) = fVar6;
      *(float *)((int)puVar9 + 0xb4) = fVar10;
      dVar31 = -dVar31;
      *(float *)(puVar9 + 0x17) = ABS(fVar6) - ABS(fVar10);
      uVar18 = (ulonglong)(*(uint *)(puVar9 + 0x16) >> 0x1c) & 8 |
               (ulonglong)(*(uint *)(puVar9 + 0x17) >> 0x1e) & 2 |
               (ulonglong)(*(uint *)((int)puVar9 + 0xb4) >> 0x1d) & 4;
      fVar1 = ABS(*(float *)(puVar9 + 0x16));
      if (*(float *)(puVar9 + 0x17) - 0.0 < 0.0) {
        fVar1 = ABS(fVar10);
      }
      fVar2 = *(float *)(&g_atanQuadrantTable + (int)(uVar18 << 2));
      fVar3 = ABS(*(float *)((int)puVar9 + 0xb4));
      if (*(float *)(puVar9 + 0x17) - 0.0 < 0.0) {
        fVar3 = ABS(fVar6);
      }
      fVar6 = *(float *)(((uint)(uVar18 << 2) | 0x735900) + 4);
      if (0.0 < fVar1) {
        lVar13 = uVar12 - 0x1d0;
        lVar16 = uVar12 - 0xf0;
        lVar15 = uVar12 - 0x100;
        lVar19 = 2;
        fVar1 = (fVar3 - fVar1) / (fVar3 + fVar1);
        fVar3 = fVar1 * fVar1;
        *(float *)((int)puVar9 + 0xec) = fVar1;
        *(float *)((int)puVar9 + 0xe4) = fVar1;
        *(float *)(puVar9 + 0x1d) = fVar1;
        *(float *)(puVar9 + 0x1c) = fVar1;
        fVar1 = fVar3 * fVar3;
        *(float *)((int)puVar9 + 0xe4) = *(float *)((int)puVar9 + 0xe4) * fVar3;
        *(float *)(puVar9 + 0x1d) = *(float *)(puVar9 + 0x1d) * fVar1;
        *(float *)((int)puVar9 + 0xec) = *(float *)((int)puVar9 + 0xec) * fVar1 * fVar3;
        do {
          *(float *)((int)lVar13 + 0xe0) = *(float *)((int)lVar13 + 0xd0) * fVar1 * fVar1;
          iVar8 = (int)lVar15;
          lVar15 = lVar15 + 8;
          lVar13 = lVar13 + 8;
          *(float *)((int)lVar16 + 4) = *(float *)(iVar8 + 4) * fVar1 * fVar1;
          lVar16 = lVar16 + 8;
          lVar19 = lVar19 + -1;
        } while (lVar19 != 0);
        lVar19 = 4;
        lVar16 = uVar12 - 0x100;
        pfVar17 = (float *)&DAT_007358e0;
        lVar13 = lVar14;
        lVar15 = lVar16;
        do {
          fVar1 = *pfVar17;
          fVar3 = pfVar17[1];
          pfVar17 = pfVar17 + 2;
          *(float *)((int)lVar13 + 0xe0) = *(float *)((int)lVar13 + 0xe0) * fVar1;
          lVar13 = lVar13 + 8;
          *(float *)((int)lVar15 + 4) = *(float *)((int)lVar15 + 4) * fVar3;
          lVar15 = lVar15 + 8;
          lVar19 = lVar19 + -1;
        } while (lVar19 != 0);
        lVar13 = 2;
        do {
          iVar8 = (int)lVar14;
          iVar11 = (int)lVar16;
          lVar14 = lVar14 + 0x10;
          lVar16 = lVar16 + 0x10;
          dVar26 = (double)((float)(dVar26 + (double)*(float *)(iVar8 + 0xe0)) +
                            *(float *)(iVar11 + 4) + *(float *)(iVar11 + 8) +
                           *(float *)(iVar11 + 0xc));
          lVar13 = lVar13 + -1;
        } while (lVar13 != 0);
        dVar26 = (double)((float)(dVar26 + 0.7853981852531433) * fVar2 + fVar6);
      }
      dVar26 = -dVar26;
      if ((dVar31 <= 0.7853981852531433) && (dVar27 = dVar31, dVar31 < -0.7853981852531433)) {
        dVar27 = -0.7853981852531433;
      }
      dVar31 = 0.3490658402442932;
      if ((dVar26 <= 0.3490658402442932) && (dVar31 = dVar26, dVar26 < -0.3490658402442932)) {
        dVar31 = -0.3490658402442932;
      }
      *(float *)(iVar7 + 0x294) = (float)dVar27;
      *(float *)(iVar7 + 0x298) = (float)dVar31;
    }
  }
  dVar32 = 0.029999999329447746;
  dVar31 = 0.30000001192092896;
  MB_UpdateManipulatorRot
            ((double)(DAT_0071f40c * 0.03),(double)(DAT_0071f40c * 0.3),param_1,iVar7 + 0x130,1);
  MB_UpdateManipulatorRot
            ((double)(float)((double)DAT_0071f40c * dVar32),
             (double)(float)((double)DAT_0071f40c * dVar31),param_1,iVar7 + 0x1b0,2);
  MB_UpdateManipulatorRot
            ((double)(float)((double)DAT_0071f40c * dVar32),
             (double)(float)((double)DAT_0071f40c * dVar31),param_1,iVar7 + 0x230,3);
  return;
}


// 0x03fac98 (0x4d8 bytes)
void M638_003fac98(undefined8 param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  uint uVar4;
  int iVar6;
  longlong lVar5;
  int iVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  undefined8 uVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  double dVar16;
  double dVar17;
  double dVar18;
  double dVar19;
  GPiece<16> local_f0;
  float local_e0;
  float local_dc;
  float local_d8;
  undefined4 local_d0 [12];
  longlong local_a0;
  
  GetBonePosition(param_1,2,&local_e0);
  dVar19 = 0.0;
  iVar6 = 10;
  dVar18 = 8.0;
  dVar17 = (double)SQRT((GameCamera.posZ - local_d8) * (GameCamera.posZ - local_d8) +
                        (GameCamera.posX - local_e0) * (GameCamera.posX - local_e0) +
                        (GameCamera.posY - local_dc) * (GameCamera.posY - local_dc));
  if (dVar17 < 8.0) {
    iVar6 = FastDoubleToInt(dVar17);
    iVar6 = iVar6 + 2;
  }
  if (dVar17 - 7.0 < 0.0) {
    dVar19 = (double)(float)(7.0 - dVar17);
  }
  if (0 < iVar6) {
    iVar7 = 0;
    dVar11 = 10.0;
    uVar12 = 0x41186a0000000000;
    dVar13 = 15.5;
    dVar14 = 20.5;
    dVar15 = 25.5;
    dVar16 = 30.5;
    do {
      dVar8 = (double)MB_randRangeFloat((float)dVar18,(float)dVar11);
      dVar9 = (double)g_FrameTime;
      local_d0[0] = 0x4f008fff;
      local_d0[1] = 0x4f008fff;
      local_d0[3] = 0x4f006fff;
      local_d0[4] = 0x2fffffff;
      local_d0[2] = 0x4f007fff;
      local_d0[5] = 0x2fffffff;
      dVar10 = (double)(float)(dVar8 * dVar9 - (double)(float)(dVar9 * dVar19));
      local_d0[6] = 0x2f005f7f;
      local_d0[7] = 0x2f004f7f;
      local_d0[8] = 0x2f003f7f;
      local_d0[9] = 0x2f00004f;
      local_d0[10] = 0x2f000000;
      local_d0[0xb] = 0x3f000000;
      lVar5 = MB_randInt(dVar8,dVar9,(double)(float)(dVar9 * dVar19),6);
      uVar2 = *(undefined4 *)((int)local_d0 + (int)(lVar5 << 2));
      lVar5 = MB_randInt(6);
      uVar3 = *(undefined4 *)((int)local_d0 + (int)(lVar5 << 2) + 0x18);
      iVar1 = (int)((double)animationSpeed * dVar14);
      local_a0 = (longlong)iVar1;
      MB_randRange((int)((double)animationSpeed * dVar13),iVar1);
      iVar1 = (int)((double)animationSpeed * dVar16);
      local_a0 = (longlong)iVar1;
      MB_randRange((int)((double)animationSpeed * dVar15),iVar1);
      SpawnPart_11(uVar12,dVar10,&local_e0,local_f0,uVar2,uVar3);
      iVar7 = iVar7 + 1;
    } while (iVar7 < iVar6);
  }
  uVar4 = (uint)((int)g_FrameLoad >> 0x1f) >> 1;
  if (((int)((uVar4 ^ g_FrameLoad) - ((int)g_FrameLoad >> 0x1f)) < 0x3f733333) && (9.0 < dVar17))
  {
    uVar12 = 0x4010000000000000;
    local_a0 = (longlong)(int)(animationSpeed * 15.5);
    FUN_001d4d88(0x4010000000000000,param_1,&local_e0,local_f0,uVar4,(int)(animationSpeed * 15.5),
                 0x7f,0x7f,0x7f);
    local_a0 = (longlong)(int)(animationSpeed * 24.5);
    FUN_001d4d88(uVar12,param_1,&local_e0,local_f0);
  }
  local_a0 = (longlong)(int)(animationSpeed * 20.5);
  FUN_001d4d88(0x4010000000000000,param_1,&local_e0,local_f0,0x30,(int)(animationSpeed * 20.5),0x7f,
               0x40,0);
  local_a0 = (longlong)(int)(animationSpeed * 27.5);
  FUN_001d4d88(0x400c000000000000,param_1,&local_e0,local_f0,0x40,(int)(animationSpeed * 27.5),0x60,
               0x10,0);
  local_a0 = (longlong)(int)(animationSpeed * 29.5);
  FUN_001d4d88(0x4008000000000000,param_1,&local_e0,local_f0,0x20,(int)(animationSpeed * 29.5),0x20,
               0,0);
  return;
}


// 0x03fb180 (0x158 bytes)
double M638_003fb180(int param_1,float *param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  int iVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  float local_30 [4];
  
  iVar5 = *(int *)(param_1 + 0x78);
  fVar1 = *(float *)(iVar5 + 0x2c4) - param_2[1];
  fVar2 = *(float *)(iVar5 + 0x2c0) - *param_2;
  fVar3 = *(float *)(iVar5 + 0x2c8) - param_2[2];
  dVar10 = 0.0;
  local_30[0] = 0.0;
  fVar1 = SQRT(fVar3 * fVar3 + fVar2 * fVar2 + fVar1 * fVar1);
  dVar11 = (double)fVar1;
  OrganicDelt
            (fVar1,DAT_0071f418 * 4.0,DAT_0071f418 * 4.0,g_FrameTime * 5.0,local_30,
             0x3fb170,(float *)(iVar5 + 0x2d4));
  fVar2 = (float)((double)param_2[1] - (double)*(float *)(iVar5 + 0x2c4));
  fVar3 = (float)((double)*param_2 - (double)*(float *)(iVar5 + 0x2c0));
  fVar4 = (float)((double)param_2[2] - (double)*(float *)(iVar5 + 0x2c8));
  dVar9 = (double)SQRT(fVar4 * fVar4 + fVar3 * fVar3 + fVar2 * fVar2);
  fVar1 = (float)((double)*(float *)(iVar5 + 0x2d4) / dVar9);
  dVar8 = dVar10;
  if (dVar10 - dVar9 < 0.0) {
    dVar8 = (double)(fVar4 * fVar1);
  }
  dVar7 = dVar10;
  if (dVar10 - dVar9 < 0.0) {
    dVar7 = (double)(fVar2 * fVar1);
  }
  dVar6 = dVar10;
  if (dVar10 - dVar9 < 0.0) {
    dVar6 = (double)(fVar3 * fVar1);
  }
  if (dVar9 - dVar10 < 0.0) {
    dVar8 = (double)(fVar4 * fVar1);
  }
  if (dVar9 - dVar10 < 0.0) {
    dVar7 = (double)(fVar2 * fVar1);
  }
  if (dVar9 - dVar10 < 0.0) {
    dVar6 = (double)(fVar3 * fVar1);
  }
  *(float *)(iVar5 + 0x2c8) = (float)((double)*(float *)(iVar5 + 0x2c8) + dVar8);
  *(float *)(iVar5 + 0x2c4) = (float)((double)*(float *)(iVar5 + 0x2c4) + dVar7);
  *(float *)(iVar5 + 0x2c0) = (float)((double)*(float *)(iVar5 + 0x2c0) + dVar6);
  return dVar11;
}


// 0x03fb2e8 (0x370 bytes)
// inlined: FastAtan2 @0x3fb400
void M638_003fb2e8(int param_1)

{
  char cVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  short sVar7;
  ushort uVar8;
  int iVar9;
  undefined4 uVar10;
  ulonglong *puVar11;
  int iVar12;
  float fVar13;
  ulonglong uVar14;
  longlong lVar15;
  longlong lVar16;
  longlong lVar17;
  longlong lVar18;
  float *pfVar19;
  ulonglong uVar20;
  ulonglong unaff_r31;
  ulonglong in_LR;
  longlong lVar21;
  double dVar22;
  ulonglong in_f30;
  double dVar23;
  ulonglong in_f31;
  double dVar24;
  
  uVar14 = ZEXT48(&stack0x00000000);
  lVar15 = uVar14 - 0xd0;
  puVar11 = (ulonglong *)lVar15;
  *puVar11 = uVar14;
  puVar11[0x1c] = in_LR;
  puVar11[0x18] = in_f30;
  puVar11[0x19] = in_f31;
  fVar2 = *(float *)(param_1 + 0x10);
  iVar9 = *(int *)(*(int *)(param_1 + 0x78) + 0x120);
  sVar7 = *(short *)(*(int *)(param_1 + 0x78) + 0x300);
  fVar3 = *(float *)(param_1 + 0x14);
  puVar11[0x17] = unaff_r31;
  iVar12 = (int)((longlong)sVar7 << 4);
  fVar2 = *(float *)((int)&Splines[iVar9]->points[0].x + iVar12) - fVar2;
  fVar3 = *(float *)((int)&Splines[iVar9]->points[0].y + iVar12) - fVar3;
  fVar6 = ABS(fVar2);
  fVar4 = ABS(fVar3);
  *(float *)(puVar11 + 0xe) = fVar2;
  *(float *)((int)puVar11 + 0x74) = fVar3;
  *(float *)(puVar11 + 0xf) = fVar6 - fVar4;
  dVar24 = 0.0;
  fVar2 = *(float *)(param_1 + 0x48);
  uVar20 = (ulonglong)(*(uint *)(puVar11 + 0xe) >> 0x1c) & 8 |
           (ulonglong)(*(uint *)(puVar11 + 0xf) >> 0x1e) & 2 |
           (ulonglong)(*(uint *)((int)puVar11 + 0x74) >> 0x1d) & 4;
  fVar3 = *(float *)(&g_atanQuadrantTable + (int)(uVar20 << 2));
  fVar5 = ABS(*(float *)(puVar11 + 0xe));
  if (*(float *)(puVar11 + 0xf) - 0.0 < 0.0) {
    fVar5 = fVar4;
  }
  fVar4 = *(float *)(((uint)(uVar20 << 2) | 0x735900) + 4);
  fVar13 = ABS(*(float *)((int)puVar11 + 0x74));
  if (*(float *)(puVar11 + 0xf) - 0.0 < 0.0) {
    fVar13 = fVar6;
  }
  dVar23 = 0.7853981852531433;
  dVar22 = dVar24;
  if (0.0 < fVar5) {
    lVar18 = uVar14 - 0xc0;
    lVar17 = uVar14 - 0x54;
    lVar16 = uVar14 - 0x44;
    lVar21 = 2;
    fVar5 = (fVar13 - fVar5) / (fVar13 + fVar5);
    fVar6 = fVar5 * fVar5;
    *(float *)(puVar11 + 0x11) = fVar5;
    *(float *)(puVar11 + 0x10) = fVar5;
    *(float *)((int)puVar11 + 0x84) = fVar5;
    *(float *)((int)puVar11 + 0x7c) = fVar5;
    fVar5 = fVar6 * fVar6;
    *(float *)(puVar11 + 0x10) = *(float *)(puVar11 + 0x10) * fVar6;
    *(float *)((int)puVar11 + 0x84) = *(float *)((int)puVar11 + 0x84) * fVar5;
    *(float *)(puVar11 + 0x11) = *(float *)(puVar11 + 0x11) * fVar5 * fVar6;
    do {
      *(float *)((int)lVar18 + 0x7c) = *(float *)((int)lVar18 + 0x6c) * fVar5 * fVar5;
      iVar9 = (int)lVar17;
      lVar18 = lVar18 + 8;
      lVar17 = lVar17 + 8;
      *(float *)((int)lVar16 + 4) = *(float *)(iVar9 + 4) * fVar5 * fVar5;
      lVar16 = lVar16 + 8;
      lVar21 = lVar21 + -1;
    } while (lVar21 != 0);
    lVar18 = uVar14 - 0x54;
    pfVar19 = (float *)&DAT_007358e0;
    lVar21 = 4;
    lVar16 = lVar18;
    lVar17 = lVar15;
    do {
      fVar5 = *pfVar19;
      fVar6 = pfVar19[1];
      pfVar19 = pfVar19 + 2;
      *(float *)((int)lVar17 + 0x7c) = *(float *)((int)lVar17 + 0x7c) * fVar5;
      lVar17 = lVar17 + 8;
      *(float *)((int)lVar16 + 4) = *(float *)((int)lVar16 + 4) * fVar6;
      lVar16 = lVar16 + 8;
      lVar21 = lVar21 + -1;
    } while (lVar21 != 0);
    lVar16 = 2;
    do {
      iVar9 = (int)lVar15;
      iVar12 = (int)lVar18;
      lVar15 = lVar15 + 0x10;
      lVar18 = lVar18 + 0x10;
      dVar22 = (double)((float)(dVar22 + (double)*(float *)(iVar9 + 0x7c)) + *(float *)(iVar12 + 4)
                        + *(float *)(iVar12 + 8) + *(float *)(iVar12 + 0xc));
      lVar16 = lVar16 + -1;
    } while (lVar16 != 0);
    dVar22 = (double)((float)(dVar22 + 0.7853981852531433) * fVar3 + fVar4);
  }
  dVar22 = (double)FastDiffRots(dVar22,(double)fVar2);
  uVar8 = *(ushort *)(param_1 + 0x34);
  cVar1 = *(char *)(param_1 + 0x53);
  puVar11[0x14] = (longlong)(int)(animationSpeed * 20.5);
  uVar10 = *(undefined4 *)((int)puVar11 + 0xa4);
  if ((dVar23 <= dVar22) || (dVar22 <= -0.7853981852531433)) {
    if (dVar24 <= dVar22) {
      if ((uVar8 & 0x8000) == 0) {
        if (cVar1 != '\x04') {
          MB_SetAnimation(param_1,4,0,uVar10);
        }
      }
      else if (cVar1 != '\x05') {
        MB_SetAnimation(param_1,5,0,uVar10);
      }
    }
    else if ((uVar8 & 0x8000) == 0) {
      if (cVar1 != '\x05') {
        MB_SetAnimation(param_1,5,0,uVar10);
      }
    }
    else if (cVar1 != '\x04') {
      MB_SetAnimation(param_1,4,0,uVar10);
    }
  }
  else if (cVar1 != '\x01') {
    MB_SetAnimation(param_1,1,0,uVar10);
  }
  return;
}


// 0x03fb658 (0x140 bytes)
void M638_003fb658(int param_1,int param_2,int param_3)

{
  ushort uVar1;
  int iVar2;
  void *pvVar3;
  undefined4 uVar4;
  ushort *puVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  
  if (*(byte *)(param_1 + 0x21) == 0xff) {
    iVar2 = *(int *)(param_1 + 0x78);
    dVar6 = (double)MB_randRangeFloat((float)(longlong)param_2,(float)(longlong)param_3);
    uVar4 = FastDoubleToInt((double)(float)(dVar6 * (double)animationSpeed));
    *(undefined4 *)(iVar2 + 0x2e0) = uVar4;
  }
  else {
    puVar5 = (ushort *)(&g_MobyGroups)[*(byte *)(param_1 + 0x21)];
    dVar6 = (double)(longlong)param_2;
    dVar8 = (double)(longlong)param_3;
    do {
      if (g_MobyInstance[*puVar5 & 0x7fff].state < 0x80) {
        pvVar3 = g_MobyInstance[*puVar5 & 0x7fff].pVar;
        dVar7 = (double)MB_randRangeFloat((float)dVar6,(float)dVar8);
        uVar4 = FastDoubleToInt((double)(float)(dVar7 * (double)animationSpeed));
        *(undefined4 *)((int)pvVar3 + 0x2e0) = uVar4;
      }
      uVar1 = *puVar5;
      puVar5 = puVar5 + 1;
    } while (-1 < (short)uVar1);
  }
  return;
}


// 0x03fb7c8 (0x980 bytes)
// inlined: FastAtan2 @0x3fbb10, FastAtan2 @0x3fbe08
void M638_003fb7c8(MobyInstance *param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  ushort uVar5;
  MobyClass *pMVar6;
  void *pvVar7;
  void *pvVar8;
  ulonglong *puVar9;
  int iVar10;
  ulonglong uVar11;
  int iVar14;
  int iVar15;
  undefined4 uVar16;
  longlong lVar12;
  longlong lVar13;
  float *pfVar18;
  longlong lVar17;
  ulonglong uVar19;
  longlong lVar20;
  ulonglong unaff_r26;
  ulonglong unaff_r27;
  ulonglong uVar21;
  ulonglong unaff_r28;
  ushort *puVar22;
  ulonglong unaff_r29;
  ulonglong unaff_r30;
  ulonglong unaff_r31;
  ulonglong in_LR;
  longlong lVar23;
  double dVar24;
  double dVar25;
  double dVar26;
  ulonglong in_f29;
  ulonglong in_f30;
  ulonglong in_f31;
  double dVar27;
  
  uVar11 = ZEXT48(&stack0x00000000);
  lVar13 = uVar11 - 0x120;
  puVar9 = (ulonglong *)lVar13;
  *puVar9 = uVar11;
  puVar9[0x26] = in_LR;
  puVar9[0x21] = in_f29;
  puVar9[0x22] = in_f30;
  puVar9[0x23] = in_f31;
  puVar9[0x20] = unaff_r31;
  pMVar6 = param_1->pClass;
  puVar9[0x1c] = unaff_r27;
  pvVar7 = param_1->pVar;
  uVar21 = ZEXT48(pvVar7);
  param_1->scale = pMVar6->gScale;
  dVar27 = 0.0;
  puVar9[0x1f] = unaff_r30;
  puVar9[0x1e] = unaff_r29;
  puVar9[0x1d] = unaff_r28;
  puVar9[0x1b] = unaff_r26;
  *(undefined4 *)((int)puVar9 + 0x74) = 0;
  iVar14 = MB_damage(param_1,0x330000,0);
  if (((iVar14 != 0) && (*(int *)(iVar14 + 0x20) != 0)) &&
     (*(short *)(*(int *)(iVar14 + 0x20) + 0xa6) == 0x31)) {
    iVar14 = 0;
  }
  iVar15 = MB_HandleDamage
                     (param_1,iVar14,uVar21 + 0x20,0,puVar9 + 0xe,(int)puVar9 + 0x74,0,4);
  if ((*(int *)(puVar9 + 0xe) != 1) && (param_1->state != '\t')) {
    if (param_1->group == 0xff) {
      pvVar8 = param_1->pVar;
      dVar24 = (double)MB_randRangeFloat(300.0,360.0);
      uVar16 = FastDoubleToInt((double)(float)(dVar24 * (double)animationSpeed));
      *(undefined4 *)((int)pvVar8 + 0x2e0) = uVar16;
    }
    else {
      puVar22 = (ushort *)(&g_MobyGroups)[(byte)param_1->group];
      dVar25 = 300.0;
      dVar24 = 360.0;
      do {
        if (g_MobyInstance[*puVar22 & 0x7fff].state < 0x80) {
          pvVar8 = g_MobyInstance[*puVar22 & 0x7fff].pVar;
          dVar26 = (double)MB_randRangeFloat((float)dVar25,(float)dVar24);
          uVar16 = FastDoubleToInt((double)(float)(dVar26 * (double)animationSpeed));
          *(undefined4 *)((int)pvVar8 + 0x2e0) = uVar16;
        }
        uVar5 = *puVar22;
        puVar22 = puVar22 + 1;
      } while (-1 < (short)uVar5);
    }
    if (((iVar14 != 0) && (*(int *)(iVar14 + 0x20) != 0)) &&
       (*(short *)(*(int *)(iVar14 + 0x20) + 0xa6) != 0x47)) {
      *(undefined4 *)((int)pvVar7 + 0x308) = 0;
    }
    fVar1 = *(float *)((int)pvVar7 + 0x20) - *(float *)((int)puVar9 + 0x74);
    *(float *)((int)pvVar7 + 0x20) = fVar1;
    if ((double)fVar1 <= dVar27) {
      iVar15 = 1;
    }
    uVar16 = FastDoubleToInt(0x4080000000000000);
    *(undefined4 *)((int)pvVar7 + 0x90) = uVar16;
    *(undefined4 *)((int)pvVar7 + 0x98) = 0x3f000000;
    dVar24 = 20.0;
    fVar1 = DAT_0071f418 * 20.0;
    *(undefined4 *)((int)pvVar7 + 0x84) = 0;
    *(undefined1 *)((int)pvVar7 + 0xad) = 0;
    *(undefined4 *)((int)pvVar7 + 0x94) = 1;
    *(float *)((int)pvVar7 + 0x80) = fVar1;
    if (iVar15 < 3) {
      if ((-1 < iVar15) && (0 < iVar15)) {
        if ((Level == Veldin2) &&
           ((*(int *)((int)pvVar7 + 0x308) != 0 &&
            (ShipsKilledCounts.Veldin2 = ShipsKilledCounts.Veldin2 + 1,
            9 < ShipsKilledCounts.Veldin2)))) {
          MB_UnlockSkillPoint(0x1d);
        }
        dVar25 = (double)DAT_0071f418;
        param_1->modeBits =
             param_1->modeBits &
             (MIRROR|CAN_BE_DAMAGED|HIDE_BACKFACES|DISABLE_Z_WRITE|DRAW_SHADOW|
              DRAW_TRANSPARENT_WEIRD|LOCK_ROTATION|NO_DRAW|UNK_40|HAS_SPECIAL_VARS|HAS_GLOW|
              TRANSPARENT|NO_POST_UPDATE|NO_UPDATE|DISABLED);
        *(float *)((int)pvVar7 + 0x80) = (float)(dVar25 * dVar24);
        fVar1 = 8.0;
        if (g_heroType == '\x02') {
          param_1->unk58 = 0.5;
          fVar1 = 24.0;
        }
        fVar2 = g_FrameTime * 8.0;
        fVar1 = g_FrameTime * fVar1;
        *(undefined4 *)((int)pvVar7 + 0xc0) = 0xbf800000;
        *(undefined4 *)((int)pvVar7 + 0xc4) = 0xbf800000;
        *(float *)((int)pvVar7 + 0x8c) = fVar2;
        *(float *)((int)pvVar7 + 0x88) = fVar1;
        fVar1 = (param_1->pos).x - *(float *)(*(int *)(iVar14 + 0x20) + 0x10);
        fVar2 = (param_1->pos).y - *(float *)(*(int *)(iVar14 + 0x20) + 0x14);
        dVar26 = ABS((double)fVar1);
        dVar25 = ABS((double)fVar2);
        *(float *)(puVar9 + 0x10) = fVar1;
        *(float *)((int)puVar9 + 0x84) = fVar2;
        *(float *)(puVar9 + 0x11) = (float)(dVar26 - dVar25);
        uVar19 = (ulonglong)(*(uint *)(puVar9 + 0x10) >> 0x1c) & 8 |
                 (ulonglong)(*(uint *)(puVar9 + 0x11) >> 0x1e) & 2 |
                 (ulonglong)(*(uint *)((int)puVar9 + 0x84) >> 0x1d) & 4;
        dVar24 = ABS((double)*(float *)(puVar9 + 0x10));
        if ((double)*(float *)(puVar9 + 0x11) - dVar27 < 0.0) {
          dVar24 = dVar25;
        }
        fVar1 = *(float *)(&g_atanQuadrantTable + (int)(uVar19 << 2));
        dVar25 = ABS((double)*(float *)((int)puVar9 + 0x84));
        if ((double)*(float *)(puVar9 + 0x11) - dVar27 < 0.0) {
          dVar25 = dVar26;
        }
        fVar2 = *(float *)(((uint)(uVar19 << 2) | 0x735900) + 4);
        if (dVar27 < dVar24) {
          lVar12 = uVar11 - 0x110;
          lVar17 = uVar11 - 0x88;
          lVar20 = uVar11 - 0x78;
          lVar23 = 2;
          fVar3 = (float)(dVar25 - dVar24) / (float)(dVar25 + dVar24);
          fVar4 = fVar3 * fVar3;
          *(float *)((int)puVar9 + 0xa4) = fVar3;
          *(float *)((int)puVar9 + 0x9c) = fVar3;
          *(float *)(puVar9 + 0x14) = fVar3;
          *(float *)(puVar9 + 0x13) = fVar3;
          fVar3 = fVar4 * fVar4;
          *(float *)((int)puVar9 + 0x9c) = *(float *)((int)puVar9 + 0x9c) * fVar4;
          *(float *)(puVar9 + 0x14) = *(float *)(puVar9 + 0x14) * fVar3;
          *(float *)((int)puVar9 + 0xa4) = *(float *)((int)puVar9 + 0xa4) * fVar3 * fVar4;
          do {
            *(float *)((int)lVar12 + 0x98) = *(float *)((int)lVar12 + 0x88) * fVar3 * fVar3;
            iVar15 = (int)lVar17;
            lVar12 = lVar12 + 8;
            lVar17 = lVar17 + 8;
            *(float *)((int)lVar20 + 4) = *(float *)(iVar15 + 4) * fVar3 * fVar3;
            lVar20 = lVar20 + 8;
            lVar23 = lVar23 + -1;
          } while (lVar23 != 0);
          lVar23 = 4;
          lVar20 = uVar11 - 0x88;
          pfVar18 = (float *)&DAT_007358e0;
          lVar12 = lVar13;
          lVar17 = lVar20;
          do {
            fVar3 = *pfVar18;
            fVar4 = pfVar18[1];
            pfVar18 = pfVar18 + 2;
            *(float *)((int)lVar12 + 0x98) = *(float *)((int)lVar12 + 0x98) * fVar3;
            lVar12 = lVar12 + 8;
            *(float *)((int)lVar17 + 4) = *(float *)((int)lVar17 + 4) * fVar4;
            lVar17 = lVar17 + 8;
            lVar23 = lVar23 + -1;
          } while (lVar23 != 0);
          lVar12 = 2;
          do {
            iVar15 = (int)lVar13;
            iVar10 = (int)lVar20;
            lVar13 = lVar13 + 0x10;
            lVar20 = lVar20 + 0x10;
            dVar27 = (double)((float)(dVar27 + (double)*(float *)(iVar15 + 0x98)) +
                              *(float *)(iVar10 + 4) + *(float *)(iVar10 + 8) +
                             *(float *)(iVar10 + 0xc));
            lVar12 = lVar12 + -1;
          } while (lVar12 != 0);
          dVar27 = (double)((float)(dVar27 + 0.7853981852531433) * fVar1 + fVar2);
        }
        *(float *)((int)puVar9 + 0x7c) = (float)dVar27;
        uVar16 = *(undefined4 *)(iVar14 + 0x18);
        *(undefined4 *)(puVar9 + 6) = *(undefined4 *)(iVar14 + 0x10);
        *(undefined4 *)(puVar9 + 7) = uVar16;
        uVar16 = *(undefined4 *)(iVar14 + 0x1c);
        *(undefined4 *)((int)puVar9 + 0x34) = *(undefined4 *)(iVar14 + 0x14);
        *(undefined4 *)((int)puVar9 + 0x3c) = uVar16;
        MB_VecAtan2Angles(puVar9[6],puVar9[7],uVar11 - 0xa4,uVar21 + 0x88,uVar21 + 0x8c);
        MB_StartKick((double)*(float *)((int)puVar9 + 0x7c),param_1,uVar21 + 0x70);
        param_1->state = '\t';
        *(undefined1 *)((int)pvVar7 + 0x67) = 0xf0;
        MB_SpawnBoltsFromCrate(param_1,0,0xffffffffffffffff);
      }
    }
    else if (iVar15 < 0xb) {
      if (iVar15 < 9) {
        fVar1 = g_FrameTime * 6.0;
        *(undefined4 *)((int)pvVar7 + 0xc0) = 0xbf800000;
        *(undefined4 *)((int)pvVar7 + 0xc4) = 0xbf800000;
        *(float *)((int)pvVar7 + 0x88) = fVar1;
        *(float *)((int)pvVar7 + 0x8c) = fVar1;
        fVar1 = (param_1->pos).x - *(float *)(*(int *)(iVar14 + 0x20) + 0x10);
        fVar2 = (param_1->pos).y - *(float *)(*(int *)(iVar14 + 0x20) + 0x14);
        dVar25 = ABS((double)fVar1);
        dVar26 = ABS((double)fVar2);
        *(float *)((int)puVar9 + 0x8c) = fVar1;
        *(float *)(puVar9 + 0x12) = fVar2;
        *(float *)((int)puVar9 + 0x94) = (float)(dVar25 - dVar26);
        uVar19 = (ulonglong)(*(uint *)((int)puVar9 + 0x8c) >> 0x1c) & 8 |
                 (ulonglong)(*(uint *)((int)puVar9 + 0x94) >> 0x1e) & 2 |
                 (ulonglong)(*(uint *)(puVar9 + 0x12) >> 0x1d) & 4;
        dVar24 = ABS((double)*(float *)((int)puVar9 + 0x8c));
        if ((double)*(float *)((int)puVar9 + 0x94) - dVar27 < 0.0) {
          dVar24 = dVar26;
        }
        fVar1 = *(float *)(&g_atanQuadrantTable + (int)(uVar19 << 2));
        dVar26 = ABS((double)*(float *)(puVar9 + 0x12));
        if ((double)*(float *)((int)puVar9 + 0x94) - dVar27 < 0.0) {
          dVar26 = dVar25;
        }
        fVar2 = *(float *)(((uint)(uVar19 << 2) | 0x735900) + 4);
        if (dVar27 < dVar24) {
          lVar12 = uVar11 - 0x110;
          lVar17 = uVar11 - 0x68;
          lVar20 = uVar11 - 0x58;
          lVar23 = 2;
          fVar3 = (float)(dVar26 - dVar24) / (float)(dVar26 + dVar24);
          fVar4 = fVar3 * fVar3;
          *(float *)((int)puVar9 + 0xc4) = fVar3;
          *(float *)((int)puVar9 + 0xbc) = fVar3;
          *(float *)(puVar9 + 0x18) = fVar3;
          *(float *)(puVar9 + 0x17) = fVar3;
          fVar3 = fVar4 * fVar4;
          *(float *)((int)puVar9 + 0xbc) = *(float *)((int)puVar9 + 0xbc) * fVar4;
          *(float *)(puVar9 + 0x18) = *(float *)(puVar9 + 0x18) * fVar3;
          *(float *)((int)puVar9 + 0xc4) = *(float *)((int)puVar9 + 0xc4) * fVar3 * fVar4;
          do {
            *(float *)((int)lVar12 + 0xb8) = *(float *)((int)lVar12 + 0xa8) * fVar3 * fVar3;
            iVar15 = (int)lVar17;
            lVar12 = lVar12 + 8;
            lVar17 = lVar17 + 8;
            *(float *)((int)lVar20 + 4) = *(float *)(iVar15 + 4) * fVar3 * fVar3;
            lVar20 = lVar20 + 8;
            lVar23 = lVar23 + -1;
          } while (lVar23 != 0);
          lVar23 = 4;
          lVar20 = uVar11 - 0x68;
          pfVar18 = (float *)&DAT_007358e0;
          lVar12 = lVar13;
          lVar17 = lVar20;
          do {
            fVar3 = *pfVar18;
            fVar4 = pfVar18[1];
            pfVar18 = pfVar18 + 2;
            *(float *)((int)lVar12 + 0xb8) = *(float *)((int)lVar12 + 0xb8) * fVar3;
            lVar12 = lVar12 + 8;
            *(float *)((int)lVar17 + 4) = *(float *)((int)lVar17 + 4) * fVar4;
            lVar17 = lVar17 + 8;
            lVar23 = lVar23 + -1;
          } while (lVar23 != 0);
          lVar12 = 2;
          do {
            iVar15 = (int)lVar13;
            iVar10 = (int)lVar20;
            lVar13 = lVar13 + 0x10;
            lVar20 = lVar20 + 0x10;
            dVar27 = (double)((float)(dVar27 + (double)*(float *)(iVar15 + 0xb8)) +
                              *(float *)(iVar10 + 4) + *(float *)(iVar10 + 8) +
                             *(float *)(iVar10 + 0xc));
            lVar12 = lVar12 + -1;
          } while (lVar12 != 0);
          dVar27 = (double)((float)(dVar27 + 0.7853981852531433) * fVar1 + fVar2);
        }
        *(float *)(puVar9 + 0xf) = (float)dVar27;
        uVar16 = *(undefined4 *)(iVar14 + 0x18);
        *(undefined4 *)(puVar9 + 6) = *(undefined4 *)(iVar14 + 0x10);
        *(undefined4 *)(puVar9 + 7) = uVar16;
        uVar16 = *(undefined4 *)(iVar14 + 0x1c);
        *(undefined4 *)((int)puVar9 + 0x34) = *(undefined4 *)(iVar14 + 0x14);
        *(undefined4 *)((int)puVar9 + 0x3c) = uVar16;
        MB_VecAtan2Angles(puVar9[6],puVar9[7],uVar11 - 0xa8,uVar21 + 0x88,uVar21 + 0x8c);
        MB_StartKick((double)*(float *)(puVar9 + 0xf),param_1,uVar21 + 0x70);
        param_1->state = '\b';
        *(undefined1 *)((int)pvVar7 + 0x67) = 0x78;
      }
      else {
        *(undefined1 *)((int)pvVar7 + 0x67) = 0xfa;
      }
    }
    MB_UpdateLightsTransition(param_1,uVar21 + 0x60);
  }
  param_1->damage = -1;
  MB_ColorDyingMoby(param_1,uVar21 + 0x60);
  FastDecTimerS32(uVar21 + 0x2e0);
  iVar14 = *(int *)((int)pvVar7 + 0x2e0);
  if (*(int *)((int)pvVar7 + 0x38) != 0) {
    dVar27 = (double)MB_randRangeFloat(180.0,240.0);
    iVar14 = FastDoubleToInt((double)(float)(dVar27 * (double)animationSpeed));
    *(int *)((int)pvVar7 + 0x2e0) = iVar14;
  }
  *(undefined4 *)((int)pvVar7 + 0x38) = 0;
  fVar1 = 255.0;
  if (iVar14 == 0) {
    fVar1 = *(float *)((int)pvVar7 + 0x124);
  }
  dVar27 = (double)fVar1;
  if (g_heroStateType == 0x16) {
    *(undefined4 *)((int)pvVar7 + 0x114) = 2;
  }
  else {
    lVar13 = uVar21 + 0xd0;
    if (iVar14 == 0 && -1 < *(int *)((int)pvVar7 + 300)) {
      MB_getTargetInArea
                (0x4038000000000000,param_1,lVar13,lVar13,0,0,
                 Splines[*(int *)((int)pvVar7 + 300)]->points,
                 Splines[*(int *)((int)pvVar7 + 300)]->cnt);
    }
    else {
      MB_getTarget(0x4038000000000000,param_1,&DAT_003fb798,lVar13);
    }
  }
  fVar1 = (param_1->pos).y - *(float *)((int)pvVar7 + 0xd4);
  fVar2 = (param_1->pos).x - *(float *)((int)pvVar7 + 0xd0);
  if (dVar27 < (double)SQRT(fVar2 * fVar2 + fVar1 * fVar1)) {
    *(undefined4 *)((int)pvVar7 + 0x114) = 2;
  }
  if (*(int *)((int)pvVar7 + 0x110) == 0) {
    *(MobyInstance **)((int)pvVar7 + 0x110) = g_heroMobyPtr;
  }
  return;
}


// 0x03fc1c0 (0x1718 bytes)
// inlined: FastAtan2 @0x3fc80c, FastAtan2 @0x3fcd84, FastAtan2 @0x3fcfe4
// strings: 0096c074: 'None'

/* Moby 638 */

void UpdateMoby_638(MobyInstance *moby)

{
  byte bVar1;
  f32 fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  void *pvVar15;
  Spline *pSVar16;
  ulonglong *puVar17;
  int iVar18;
  ulonglong uVar19;
  undefined2 uVar22;
  MobyModeBit MVar23;
  short sVar24;
  int iVar20;
  u8 uVar25;
  uint uVar21;
  ulonglong uVar26;
  longlong lVar27;
  longlong lVar28;
  longlong lVar29;
  float *pfVar30;
  longlong lVar31;
  ulonglong unaff_r28;
  ulonglong unaff_r29;
  ulonglong unaff_r30;
  ulonglong uVar32;
  ulonglong unaff_r31;
  ulonglong in_LR;
  longlong lVar33;
  double dVar34;
  ulonglong in_f27;
  ulonglong in_f28;
  double dVar35;
  ulonglong in_f29;
  double dVar36;
  ulonglong in_f30;
  double dVar37;
  ulonglong in_f31;
  double dVar38;
  double dVar39;
  GPiece<16> auVar40;
  GPiece<16> auVar41;
  GPiece<16> auVar42;
  float fVar43;
  
  uVar19 = ZEXT48(&stack0x00000000);
  lVar28 = uVar19 - 0x180;
  puVar17 = (ulonglong *)lVar28;
  *puVar17 = uVar19;
  puVar17[0x32] = in_LR;
  puVar17[0x2b] = in_f27;
  puVar17[0x2c] = in_f28;
  puVar17[0x2d] = in_f29;
  puVar17[0x2e] = in_f30;
  puVar17[0x2f] = in_f31;
  puVar17[0x2a] = unaff_r31;
  puVar17[0x29] = unaff_r30;
  puVar17[0x28] = unaff_r29;
  puVar17[0x27] = unaff_r28;
  pvVar15 = moby->pVar;
  uVar32 = ZEXT48(pvVar15);
  M638_003fb7c8();
  iVar20 = *(int *)((int)pvVar15 + 0x110);
  fVar12 = DAT_00969dac;
  fVar11 = DAT_00969da8;
  fVar10 = DAT_00969da4;
  fVar43 = DAT_00969da0;
  if ((*(short *)(iVar20 + 0xa6) != 0) && (*(short *)(iVar20 + 0xa6) != 0x1a3)) {
    fVar12 = *(float *)(iVar20 + 0x1c);
    fVar11 = *(float *)(iVar20 + 0x18);
    fVar10 = *(float *)(iVar20 + 0x14);
    fVar43 = *(float *)(iVar20 + 0x10);
  }
  dVar38 = (double)fVar43;
  dVar37 = (double)fVar10;
  dVar36 = (double)fVar11;
  dVar35 = (double)fVar12;
  if (Cheats[7] != '\0') {
    MB_SetScaleCheat(0x4004000000000000,uVar32 + 0x130);
  }
  bVar1 = moby->state;
  if (bVar1 < 5) {
    if (bVar1 < 2) {
      if (bVar1 == 0) {
        *(undefined4 *)((int)pvVar15 + 0x20) = 0x40400000;
        *(undefined2 *)((int)pvVar15 + 0x24) = 3;
        *(undefined1 *)((int)pvVar15 + 0x28) = 2;
        *(undefined4 *)((int)pvVar15 + 0x30) = 0x3fc00000;
        *(undefined1 *)((int)pvVar15 + 0x29) = 1;
        dVar39 = 0.0;
        *(undefined4 *)((int)pvVar15 + 0x2ec) = 0;
        dVar35 = (double)MB_randRot();
        *(float *)((int)pvVar15 + 0x2f4) = (float)dVar35;
        dVar35 = (double)MB_randRot();
        *(float *)((int)pvVar15 + 0x2fc) = (float)dVar35;
        dVar35 = (double)MB_randRot();
        *(float *)((int)pvVar15 + 0x2e8) = (float)dVar35;
        dVar38 = 90.0;
        dVar37 = 180.0;
        dVar35 = (double)MB_randRangeFloat(90.0,180.0);
        dVar36 = 0.01745329238474369;
        *(float *)((int)pvVar15 + 0x2f0) =
             (float)(dVar35 * 0.01745329238474369) * g_FrameTime;
        dVar35 = (double)MB_randRangeFloat((float)dVar38,(float)dVar37);
        *(float *)((int)pvVar15 + 0x2f8) = (float)(dVar35 * dVar36) * g_FrameTime;
        dVar35 = (double)MB_randRangeFloat((float)dVar38,(float)dVar37);
        *(float *)((int)pvVar15 + 0x2e4) = (float)(dVar35 * dVar36) * g_FrameTime;
        dVar35 = (double)MB_randRangeFloat((float)dVar37,360.0);
        uVar22 = FastDoubleToInt((double)(float)(dVar35 * (double)animationSpeed));
        *(undefined2 *)((int)pvVar15 + 0x302) = uVar22;
        iVar20 = MB_randInt(2);
        if (iVar20 == 0) {
          MVar23 = moby->modeBits &
                   (CAN_BE_DAMAGED|HIDE_BACKFACES|CAN_BE_AUTO_TARGETED|DISABLE_Z_WRITE|DRAW_SHADOW|
                    DRAW_TRANSPARENT_WEIRD|LOCK_ROTATION|NO_DRAW|UNK_40|HAS_SPECIAL_VARS|HAS_GLOW|
                    TRANSPARENT|NO_POST_UPDATE|NO_UPDATE|DISABLED);
        }
        else {
          MVar23 = moby->modeBits | MIRROR;
        }
        moby->modeBits = MVar23;
        if (-1 < *(int *)((int)pvVar15 + 0x120)) {
          puVar17[0x25] = (longlong)(Splines[*(int *)((int)pvVar15 + 0x120)]->cnt + -1);
          MB_randRangeFloat((float)dVar39,(float)(longlong)puVar17[0x25]);
          sVar24 = FastDoubleToInt();
          *(short *)((int)pvVar15 + 0x300) = sVar24;
          iVar20 = (int)((longlong)sVar24 << 4);
          pSVar16 = Splines[*(int *)((int)pvVar15 + 0x120)];
          (moby->pos).x = *(f32 *)((int)&pSVar16->points[0].x + iVar20);
          (moby->pos).y = *(f32 *)((int)&pSVar16->points[0].y + iVar20);
          (moby->pos).z = *(f32 *)((int)&pSVar16->points[0].z + iVar20);
          (moby->pos).w = *(f32 *)((int)&pSVar16->points[0].w + iVar20);
        }
        *(f32 *)((int)pvVar15 + 0x2c0) = (moby->pos).x;
        *(f32 *)((int)pvVar15 + 0x2c4) = (moby->pos).y;
        *(f32 *)((int)pvVar15 + 0x2c8) = (moby->pos).z;
        fVar2 = (moby->pos).w;
        *(undefined4 *)((int)pvVar15 + 0x308) = 1;
        *(f32 *)((int)pvVar15 + 0x2cc) = fVar2;
        *(f32 *)((int)pvVar15 + 0x2b0) = (moby->pos).x;
        *(f32 *)((int)pvVar15 + 0x2b4) = (moby->pos).y;
        *(f32 *)((int)pvVar15 + 0x2b8) = (moby->pos).z;
        *(f32 *)((int)pvVar15 + 700) = (moby->pos).w;
        if (*(int *)((int)pvVar15 + 0x128) == 0) {
          moby->state = '\x02';
          if (moby->animationId != '\0') {
            puVar17[0x25] = (longlong)(int)(animationSpeed * 10.5);
            MB_SetAnimation(moby,0,0,*(undefined4 *)((int)puVar17 + 300));
          }
        }
        else {
          moby->state = '\n';
          moby->enabled = '\0';
          moby->collision = (ushort *)0x0;
          moby->modeBits =
               moby->modeBits &
               (MIRROR|CAN_BE_DAMAGED|HIDE_BACKFACES|DISABLE_Z_WRITE|DRAW_SHADOW|
                DRAW_TRANSPARENT_WEIRD|LOCK_ROTATION|NO_DRAW|UNK_40|HAS_SPECIAL_VARS|HAS_GLOW|
                TRANSPARENT|NO_POST_UPDATE|NO_UPDATE|DISABLED) | DISABLED;
          if (moby->animationId != '\x01') {
            puVar17[0x25] = (longlong)(int)(animationSpeed * 20.5);
            MB_SetAnimation(moby,1,0,*(undefined4 *)((int)puVar17 + 300));
          }
        }
      }
      else {
        iVar20 = FastDecTimerS16(uVar32 + 0x2dc);
        fVar43 = (moby->pos).x;
        fVar10 = (moby->pos).y;
        fVar11 = (moby->pos).z;
        if (iVar20 == 0) {
          fVar12 = (moby->transform).v0.y;
          fVar13 = (moby->transform).v0.x;
          fVar14 = (moby->transform).v0.z;
          puVar17[0x25] = (longlong)(int)*(short *)((int)pvVar15 + 0x2dc);
          fVar4 = 0.0;
          fVar3 = SQRT(fVar14 * fVar14 + fVar13 * fVar13 + fVar12 * fVar12);
          if (fVar3 == 0.0) {
            fVar13 = (moby->transform).v0.w;
            fVar12 = fVar4;
            fVar14 = fVar4;
          }
          else {
            fVar3 = ((float)(longlong)puVar17[0x25] * 0.1) / fVar3;
            fVar4 = fVar13 * fVar3;
            fVar12 = fVar12 * fVar3;
            fVar13 = (moby->transform).v0.w;
            fVar14 = fVar14 * fVar3;
          }
          *(float *)((int)puVar17 + 0x7c) = fVar13;
          *(float *)(puVar17 + 0xe) = fVar4 + fVar43;
          *(float *)((int)puVar17 + 0x74) = fVar12 + fVar10;
          *(float *)(puVar17 + 0xf) = fVar14 + fVar11;
          M638_003fb180(moby,uVar19 - 0x110,1);
        }
        else {
          fVar43 = *(float *)((int)pvVar15 + 0x2b0) - fVar43;
          fVar10 = *(float *)((int)pvVar15 + 0x2b4) - fVar10;
          fVar11 = ABS(fVar43);
          fVar12 = ABS(fVar10);
          *(float *)(puVar17 + 0x17) = fVar43;
          *(float *)((int)puVar17 + 0xbc) = fVar10;
          *(float *)(puVar17 + 0x18) = fVar11 - fVar12;
          fVar43 = 0.0;
          uVar26 = (ulonglong)(*(uint *)(puVar17 + 0x17) >> 0x1c) & 8 |
                   (ulonglong)(*(uint *)(puVar17 + 0x18) >> 0x1e) & 2 |
                   (ulonglong)(*(uint *)((int)puVar17 + 0xbc) >> 0x1d) & 4;
          fVar10 = ABS(*(float *)(puVar17 + 0x17));
          if (*(float *)(puVar17 + 0x18) - 0.0 < 0.0) {
            fVar10 = fVar12;
          }
          fVar13 = *(float *)(&g_atanQuadrantTable + (int)(uVar26 << 2));
          fVar12 = *(float *)(((uint)(uVar26 << 2) | 0x735900) + 4);
          fVar14 = ABS(*(float *)((int)puVar17 + 0xbc));
          if (*(float *)(puVar17 + 0x18) - 0.0 < 0.0) {
            fVar14 = fVar11;
          }
          if (0.0 < fVar10) {
            lVar27 = uVar19 - 0x170;
            lVar31 = uVar19 - 0x6c;
            lVar29 = uVar19 - 0x7c;
            lVar33 = 2;
            fVar10 = (fVar14 - fVar10) / (fVar14 + fVar10);
            fVar11 = fVar10 * fVar10;
            *(float *)(puVar17 + 0x22) = fVar10;
            *(float *)(puVar17 + 0x21) = fVar10;
            *(float *)((int)puVar17 + 0x10c) = fVar10;
            *(float *)((int)puVar17 + 0x104) = fVar10;
            fVar10 = fVar11 * fVar11;
            *(float *)(puVar17 + 0x21) = *(float *)(puVar17 + 0x21) * fVar11;
            *(float *)((int)puVar17 + 0x10c) = *(float *)((int)puVar17 + 0x10c) * fVar10;
            *(float *)(puVar17 + 0x22) = *(float *)(puVar17 + 0x22) * fVar10 * fVar11;
            do {
              *(float *)((int)lVar27 + 0x104) = *(float *)((int)lVar27 + 0xf4) * fVar10 * fVar10;
              iVar20 = (int)lVar29;
              lVar29 = lVar29 + 8;
              lVar27 = lVar27 + 8;
              *(float *)((int)lVar31 + 4) = *(float *)(iVar20 + 4) * fVar10 * fVar10;
              lVar31 = lVar31 + 8;
              lVar33 = lVar33 + -1;
            } while (lVar33 != 0);
            lVar33 = 4;
            lVar31 = uVar19 - 0x7c;
            pfVar30 = (float *)&DAT_007358e0;
            lVar27 = lVar28;
            lVar29 = lVar31;
            do {
              fVar10 = *pfVar30;
              fVar11 = pfVar30[1];
              pfVar30 = pfVar30 + 2;
              *(float *)((int)lVar27 + 0x104) = *(float *)((int)lVar27 + 0x104) * fVar10;
              lVar27 = lVar27 + 8;
              *(float *)((int)lVar29 + 4) = *(float *)((int)lVar29 + 4) * fVar11;
              lVar29 = lVar29 + 8;
              lVar33 = lVar33 + -1;
            } while (lVar33 != 0);
            lVar27 = 2;
            do {
              iVar20 = (int)lVar28;
              lVar28 = lVar28 + 0x10;
              iVar18 = (int)lVar31;
              lVar31 = lVar31 + 0x10;
              fVar43 = fVar43 + *(float *)(iVar20 + 0x104) + *(float *)(iVar18 + 4) +
                       *(float *)(iVar18 + 8) + *(float *)(iVar18 + 0xc);
              lVar27 = lVar27 + -1;
            } while (lVar27 != 0);
            fVar43 = (fVar43 + 0.7853982) * fVar13 + fVar12;
          }
          fVar43 = OrganicDeltAng
                             (fVar43,DAT_0071f418 * 12.566371,DAT_0071f418 * 12.566371,
                              g_FrameTime * 12.566371,&(moby->rotation).z,0x720000,
                              (float *)((int)pvVar15 + 0x2d8));
          dVar35 = (double)M638_003fb180((double)fVar43,moby,uVar32 + 0x2b0,1);
          if (moby->animationId != '\0') {
            puVar17[0x25] = (longlong)(int)(animationSpeed * 10.5);
            MB_SetAnimation(moby,0,0,*(undefined4 *)((int)puVar17 + 300));
          }
          if (dVar35 < 1.0) {
            moby->state = '\x02';
          }
        }
      }
    }
    else if (bVar1 < 3) {
      FastDecTimerS16(uVar32 + 0x2dc);
      if (*(int *)((int)pvVar15 + 0x114) == 2) {
        iVar20 = FastDecTimerS16(uVar32 + 0x302);
        if ((iVar20 != 0) && (-1 < *(int *)((int)pvVar15 + 0x120))) {
          auVar40 = ZEXT416(0xffffffff);
          auVar40 = auVar40 | auVar40 << 0x20 | auVar40 << 0x40 | auVar40 << 0x60;
          uVar21 = (int)*(short *)((int)pvVar15 + 0x300) + 1;
          auVar41 = vectorShiftLeftIntegerWord(auVar40,auVar40);
          *(ushort *)((int)pvVar15 + 0x300) =
               (short)uVar21 +
               ((short)((int)uVar21 >> 1) + (ushort)((int)uVar21 < 0 && (uVar21 & 1) != 0)) * -2;
          moby->state = '\x03';
          auVar40 = loadVectorLeftIndexed(0x34,0x3fc148);
          auVar42 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
          auVar40 = auVar40 >> 0x60 & (GPiece<16>)0xffffffff;
          auVar40 = vectorMultiplyAddFloatingPoint
                              (auVar42,auVar40 | auVar40 << 0x20 | auVar40 << 0x40 | auVar40 << 0x60
                               ,auVar41);
          auVar40 = vectorConvertToSignedFixedPointWordSaturate(auVar40,0);
          auVar40 = vectorSplatHalfWord(auVar40,1);
          uVar22 = storeVectorElementHalfWordIndexed(auVar40,0x302,uVar32);
          *(undefined2 *)((int)pvVar15 + 0x302) = uVar22;
          M638_003fb2e8(moby);
        }
      }
      else if (*(short *)((int)pvVar15 + 0x2dc) == 0) {
        if (*(int *)((int)pvVar15 + 0x120) < 0) {
          iVar20 = MB_randInt(0x14);
          if ((iVar20 == 0) && (moby->state = '\x04', moby->animationId != '\x02')) {
            puVar17[0x25] = (longlong)(int)(animationSpeed * 10.5);
            MB_SetAnimation(moby,2,0,*(undefined4 *)((int)puVar17 + 300));
          }
        }
        else {
          moby->state = '\a';
          dVar35 = (double)MB_randRangeFloat(30.0,90.0);
          uVar22 = FastDoubleToInt((double)(float)(dVar35 * (double)animationSpeed));
          *(undefined2 *)((int)pvVar15 + 0x2dc) = uVar22;
          uVar21 = (int)*(short *)((int)pvVar15 + 0x300) + 1;
          *(ushort *)((int)pvVar15 + 0x300) =
               (short)uVar21 +
               ((short)((int)uVar21 >> 1) + (ushort)((int)uVar21 < 0 && (uVar21 & 1) != 0)) * -2;
          M638_003fb2e8(moby);
        }
      }
    }
    else if (bVar1 < 4) {
      dVar35 = (double)M638_003fb180
                                 (moby,Splines[*(int *)((int)pvVar15 + 0x120)]->points +
                                       *(short *)((int)pvVar15 + 0x300),1);
      if ((dVar35 < 0.009999999776482582) ||
         (iVar20 = FastDecTimerS16(uVar32 + 0x302), iVar20 != 0)) {
        moby->state = '\x02';
        if (moby->animationId != '\0') {
          puVar17[0x25] = (longlong)(int)(animationSpeed * 10.5);
          MB_SetAnimation(moby,0,0,*(undefined4 *)((int)puVar17 + 300));
        }
        dVar36 = (double)MB_randRangeFloat(180.0,360.0);
        uVar22 = FastDoubleToInt((double)(float)(dVar36 * (double)animationSpeed));
        *(undefined2 *)((int)pvVar15 + 0x302) = uVar22;
      }
      if (((*(float *)((int)pvVar15 + 0x2d4) < g_FrameTime * 2.0) && (dVar35 < 0.5)) &&
         (moby->animationId != '\0')) {
        puVar17[0x25] = (longlong)(int)(animationSpeed * 30.5);
        MB_SetAnimation(moby,0,0,*(undefined4 *)((int)puVar17 + 300));
      }
    }
    else {
      fVar43 = (float)(dVar38 - (double)(moby->pos).x);
      fVar10 = (float)(dVar37 - (double)(moby->pos).y);
      fVar11 = ABS(fVar43);
      fVar12 = ABS(fVar10);
      *(float *)((int)puVar17 + 0xac) = fVar43;
      *(float *)(puVar17 + 0x16) = fVar10;
      *(float *)((int)puVar17 + 0xb4) = fVar11 - fVar12;
      fVar43 = 0.0;
      uVar32 = (ulonglong)(*(uint *)((int)puVar17 + 0xac) >> 0x1c) & 8 |
               (ulonglong)(*(uint *)((int)puVar17 + 0xb4) >> 0x1e) & 2 |
               (ulonglong)(*(uint *)(puVar17 + 0x16) >> 0x1d) & 4;
      fVar10 = ABS(*(float *)((int)puVar17 + 0xac));
      if (*(float *)((int)puVar17 + 0xb4) - 0.0 < 0.0) {
        fVar10 = fVar12;
      }
      fVar13 = *(float *)(&g_atanQuadrantTable + (int)(uVar32 << 2));
      fVar12 = *(float *)(((uint)(uVar32 << 2) | 0x735900) + 4);
      fVar14 = ABS(*(float *)(puVar17 + 0x16));
      if (*(float *)((int)puVar17 + 0xb4) - 0.0 < 0.0) {
        fVar14 = fVar11;
      }
      if (0.0 < fVar10) {
        lVar27 = uVar19 - 0x170;
        lVar31 = uVar19 - 0x8c;
        lVar29 = uVar19 - 0x9c;
        lVar33 = 2;
        fVar10 = (fVar14 - fVar10) / (fVar14 + fVar10);
        fVar11 = fVar10 * fVar10;
        *(float *)(puVar17 + 0x1e) = fVar10;
        *(float *)(puVar17 + 0x1d) = fVar10;
        *(float *)((int)puVar17 + 0xec) = fVar10;
        *(float *)((int)puVar17 + 0xe4) = fVar10;
        fVar10 = fVar11 * fVar11;
        *(float *)(puVar17 + 0x1d) = *(float *)(puVar17 + 0x1d) * fVar11;
        *(float *)((int)puVar17 + 0xec) = *(float *)((int)puVar17 + 0xec) * fVar10;
        *(float *)(puVar17 + 0x1e) = *(float *)(puVar17 + 0x1e) * fVar10 * fVar11;
        do {
          *(float *)((int)lVar27 + 0xe4) = *(float *)((int)lVar27 + 0xd4) * fVar10 * fVar10;
          iVar20 = (int)lVar29;
          lVar29 = lVar29 + 8;
          lVar27 = lVar27 + 8;
          *(float *)((int)lVar31 + 4) = *(float *)(iVar20 + 4) * fVar10 * fVar10;
          lVar31 = lVar31 + 8;
          lVar33 = lVar33 + -1;
        } while (lVar33 != 0);
        lVar33 = 4;
        lVar31 = uVar19 - 0x9c;
        pfVar30 = (float *)&DAT_007358e0;
        lVar27 = lVar28;
        lVar29 = lVar31;
        do {
          fVar10 = *pfVar30;
          fVar11 = pfVar30[1];
          pfVar30 = pfVar30 + 2;
          *(float *)((int)lVar27 + 0xe4) = *(float *)((int)lVar27 + 0xe4) * fVar10;
          lVar27 = lVar27 + 8;
          *(float *)((int)lVar29 + 4) = *(float *)((int)lVar29 + 4) * fVar11;
          lVar29 = lVar29 + 8;
          lVar33 = lVar33 + -1;
        } while (lVar33 != 0);
        lVar27 = 2;
        do {
          iVar20 = (int)lVar28;
          lVar28 = lVar28 + 0x10;
          iVar18 = (int)lVar31;
          lVar31 = lVar31 + 0x10;
          fVar43 = fVar43 + *(float *)(iVar20 + 0xe4) + *(float *)(iVar18 + 4) +
                   *(float *)(iVar18 + 8) + *(float *)(iVar18 + 0xc);
          lVar27 = lVar27 + -1;
        } while (lVar27 != 0);
        fVar43 = (fVar43 + 0.7853982) * fVar13 + fVar12;
      }
      OrganicDeltAng
                (fVar43,DAT_0071f418 * 12.566371,DAT_0071f418 * 12.566371,
                 g_FrameTime * 12.566371,&(moby->rotation).z,0x720000,
                 (float *)((int)pvVar15 + 0x2d8));
      if (((moby->field43_0x70 & 2U) != 0) && (moby->state = '\x05', moby->animationId != '\x03')) {
        puVar17[0x25] = (longlong)(int)(animationSpeed * 10.5);
        MB_SetAnimation(moby,3,0,*(undefined4 *)((int)puVar17 + 300));
      }
    }
  }
  else if (bVar1 == 10) {
    if (*(int *)((int)pvVar15 + 0x2d0) != 0) {
      moby->enabled = '\x01';
      iVar20 = *(int *)((int)pvVar15 + 0x2d0);
      fVar43 = *(float *)((int)pvVar15 + 0x2c4);
      moby->modeBits =
           moby->modeBits &
           (MIRROR|CAN_BE_DAMAGED|HIDE_BACKFACES|CAN_BE_AUTO_TARGETED|DISABLE_Z_WRITE|DRAW_SHADOW|
            DRAW_TRANSPARENT_WEIRD|LOCK_ROTATION|NO_DRAW|UNK_40|HAS_SPECIAL_VARS|HAS_GLOW|
            TRANSPARENT|NO_POST_UPDATE|NO_UPDATE);
      fVar10 = *(float *)((int)pvVar15 + 0x2c0);
      fVar11 = *(float *)(iVar20 + 0xd4);
      fVar12 = *(float *)((int)pvVar15 + 0x2c8);
      fVar13 = *(float *)(iVar20 + 0xc4);
      fVar14 = *(float *)(iVar20 + 0xd8);
      fVar3 = *(float *)(iVar20 + 0xe4);
      fVar4 = *(float *)(iVar20 + 0xdc);
      fVar5 = *(float *)(iVar20 + 200);
      fVar6 = *(float *)(iVar20 + 0xcc);
      fVar7 = *(float *)(iVar20 + 0xe8);
      fVar8 = *(float *)(iVar20 + 0xec);
      fVar9 = *(float *)((int)pvVar15 + 0x2cc);
      (moby->pos).x =
           *(float *)(iVar20 + 0xe0) * fVar12 +
           *(float *)(iVar20 + 0xc0) * fVar10 + *(float *)(iVar20 + 0xd0) * fVar43 +
           *(float *)(iVar20 + 0x10);
      (moby->pos).y = fVar3 * fVar12 + fVar13 * fVar10 + fVar11 * fVar43 + *(float *)(iVar20 + 0x14)
      ;
      fVar11 = *(float *)(iVar20 + 0x18);
      (moby->pos).w = fVar8 * fVar12 + fVar6 * fVar10 + fVar4 * fVar43 + fVar9;
      (moby->pos).z = fVar7 * fVar12 + fVar5 * fVar10 + fVar14 * fVar43 + fVar11;
      dVar35 = (double)FastWrapRot
                                 (*(float *)(iVar20 + 0x48),*(float *)((int)pvVar15 + 0x2cc));
      (moby->rotation).z = (float)dVar35;
    }
  }
  else if (bVar1 == 9) {
    dVar37 = (double)(moby->pos).x;
    dVar36 = (double)(moby->pos).y;
    dVar35 = (double)(moby->pos).z;
    uVar21 = MB_UpdateKick(moby,(KickVars *)((int)pvVar15 + 0x70));
    if ((uVar21 & 0x160) != 0) {
      M638_003fac98(moby);
      PlayMobySound(0,0,moby);
      DeleteMoby(moby);
      return;
    }
    fVar43 = (moby->pos).y;
    fVar10 = (moby->pos).z;
    *(float *)((int)pvVar15 + 0x2c0) =
         *(float *)((int)pvVar15 + 0x2c0) + (float)((double)(moby->pos).x - dVar37);
    *(float *)((int)pvVar15 + 0x2c4) =
         *(float *)((int)pvVar15 + 0x2c4) + (float)((double)fVar43 - dVar36);
    *(float *)((int)pvVar15 + 0x2c8) =
         *(float *)((int)pvVar15 + 0x2c8) + (float)((double)fVar10 - dVar35);
  }
  else if (bVar1 == 8) {
    if ((moby->field43_0x70 & 2U) == 0) {
      fVar43 = (moby->transform).v0.y;
      fVar10 = (moby->transform).v0.x;
      fVar11 = (moby->transform).v0.z;
      fVar12 = 0.0;
      fVar3 = SQRT(fVar11 * fVar11 + fVar10 * fVar10 + fVar43 * fVar43);
      fVar13 = -g_FrameTime / fVar3;
      fVar14 = fVar12;
      if (0.0 - fVar3 < 0.0) {
        fVar14 = fVar11 * fVar13;
      }
      fVar4 = fVar12;
      if (0.0 - fVar3 < 0.0) {
        fVar4 = fVar43 * fVar13;
      }
      if (0.0 - fVar3 < 0.0) {
        fVar12 = fVar10 * fVar13;
      }
      if (fVar3 - 0.0 < 0.0) {
        fVar14 = fVar11 * fVar13;
      }
      if (fVar3 - 0.0 < 0.0) {
        fVar4 = fVar43 * fVar13;
      }
      if (fVar3 - 0.0 < 0.0) {
        fVar12 = fVar10 * fVar13;
      }
      (moby->pos).z = (moby->pos).z + fVar14;
      (moby->pos).y = (moby->pos).y + fVar4;
      (moby->pos).x = (moby->pos).x + fVar12;
    }
    else {
      moby->state = '\x02';
      if (moby->animationId != '\0') {
        puVar17[0x25] = (longlong)(int)(animationSpeed * 10.5);
        MB_SetAnimation(moby,0,0,*(undefined4 *)((int)puVar17 + 300));
      }
    }
  }
  else if (bVar1 == 7) {
    dVar35 = (double)M638_003fb180
                               (moby,Splines[*(int *)((int)pvVar15 + 0x120)]->points +
                                     *(short *)((int)pvVar15 + 0x300),1);
    FastDecTimerS16(uVar32 + 0x2dc);
    uVar25 = moby->animationId;
    if (((dVar35 < 0.009999999776482582) || (*(short *)((int)pvVar15 + 0x2dc) == 0)) &&
       (moby->state = '\x04', uVar25 != '\x02')) {
      puVar17[0x25] = (longlong)(int)(animationSpeed * 30.5);
      MB_SetAnimation(moby,2,0,*(undefined4 *)((int)puVar17 + 300));
      uVar25 = moby->animationId;
    }
    if ((dVar35 < 0.5) &&
       (*(float *)((int)pvVar15 + 0x2d4) < g_FrameTime * 2.0 && uVar25 != '\x02')) {
      puVar17[0x25] = (longlong)(int)(animationSpeed * 30.5);
      MB_SetAnimation(moby,2,0,*(undefined4 *)((int)puVar17 + 300));
    }
  }
  else if (bVar1 == 5) {
    fVar43 = (float)(dVar38 - (double)(moby->pos).x);
    fVar10 = (float)(dVar37 - (double)(moby->pos).y);
    fVar12 = ABS(fVar43);
    fVar11 = ABS(fVar10);
    *(float *)(puVar17 + 0x14) = fVar43;
    *(float *)((int)puVar17 + 0xa4) = fVar10;
    *(float *)(puVar17 + 0x15) = fVar12 - fVar11;
    dVar39 = 0.0;
    uVar26 = (ulonglong)(*(uint *)(puVar17 + 0x14) >> 0x1c) & 8 |
             (ulonglong)(*(uint *)(puVar17 + 0x15) >> 0x1e) & 2 |
             (ulonglong)(*(uint *)((int)puVar17 + 0xa4) >> 0x1d) & 4;
    fVar43 = ABS(*(float *)(puVar17 + 0x14));
    if (*(float *)(puVar17 + 0x15) - 0.0 < 0.0) {
      fVar43 = fVar11;
    }
    fVar11 = *(float *)(&g_atanQuadrantTable + (int)(uVar26 << 2));
    fVar10 = *(float *)(((uint)(uVar26 << 2) | 0x735900) + 4);
    fVar13 = ABS(*(float *)((int)puVar17 + 0xa4));
    if (*(float *)(puVar17 + 0x15) - 0.0 < 0.0) {
      fVar13 = fVar12;
    }
    dVar34 = dVar39;
    if (0.0 < fVar43) {
      lVar27 = uVar19 - 0x170;
      lVar31 = uVar19 - 0xac;
      lVar29 = uVar19 - 0xbc;
      lVar33 = 2;
      fVar43 = (fVar13 - fVar43) / (fVar13 + fVar43);
      fVar12 = fVar43 * fVar43;
      *(float *)(puVar17 + 0x1a) = fVar43;
      *(float *)(puVar17 + 0x19) = fVar43;
      *(float *)((int)puVar17 + 0xcc) = fVar43;
      *(float *)((int)puVar17 + 0xc4) = fVar43;
      fVar43 = fVar12 * fVar12;
      *(float *)(puVar17 + 0x19) = *(float *)(puVar17 + 0x19) * fVar12;
      *(float *)((int)puVar17 + 0xcc) = *(float *)((int)puVar17 + 0xcc) * fVar43;
      *(float *)(puVar17 + 0x1a) = *(float *)(puVar17 + 0x1a) * fVar43 * fVar12;
      do {
        *(float *)((int)lVar27 + 0xc4) = *(float *)((int)lVar27 + 0xb4) * fVar43 * fVar43;
        iVar20 = (int)lVar29;
        lVar29 = lVar29 + 8;
        lVar27 = lVar27 + 8;
        *(float *)((int)lVar31 + 4) = *(float *)(iVar20 + 4) * fVar43 * fVar43;
        lVar31 = lVar31 + 8;
        lVar33 = lVar33 + -1;
      } while (lVar33 != 0);
      lVar33 = 4;
      lVar31 = uVar19 - 0xbc;
      pfVar30 = (float *)&DAT_007358e0;
      lVar27 = lVar28;
      lVar29 = lVar31;
      do {
        fVar43 = *pfVar30;
        fVar12 = pfVar30[1];
        pfVar30 = pfVar30 + 2;
        *(float *)((int)lVar27 + 0xc4) = *(float *)((int)lVar27 + 0xc4) * fVar43;
        lVar27 = lVar27 + 8;
        *(float *)((int)lVar29 + 4) = *(float *)((int)lVar29 + 4) * fVar12;
        lVar29 = lVar29 + 8;
        lVar33 = lVar33 + -1;
      } while (lVar33 != 0);
      lVar27 = 2;
      do {
        iVar20 = (int)lVar28;
        iVar18 = (int)lVar31;
        lVar28 = lVar28 + 0x10;
        lVar31 = lVar31 + 0x10;
        dVar34 = (double)((float)(dVar34 + (double)*(float *)(iVar20 + 0xc4)) +
                          *(float *)(iVar18 + 4) + *(float *)(iVar18 + 8) + *(float *)(iVar18 + 0xc)
                         );
        lVar27 = lVar27 + -1;
      } while (lVar27 != 0);
      dVar34 = (double)((float)(dVar34 + 0.7853981852531433) * fVar11 + fVar10);
    }
    OrganicDeltAng
              ((float)dVar34,DAT_0071f418 * 12.566371,DAT_0071f418 * 12.566371,
               g_FrameTime * 12.566371,&(moby->rotation).z,0x720000,
               (float *)((int)pvVar15 + 0x2d8));
    iVar20 = MB_MayaFrameTrigger(2.0,moby);
    if (((iVar20 == 0) && (iVar20 = MB_MayaFrameTrigger(17.0,moby), iVar20 == 0)) &&
       (iVar20 = MB_MayaFrameTrigger(32.0,moby), iVar20 == 0)) {
      iVar20 = MB_MayaFrameTrigger(10.0,moby);
      if ((iVar20 != 0) &&
         (sVar24 = *(short *)((int)pvVar15 + 0x2de) + 1, *(short *)((int)pvVar15 + 0x2de) = sVar24,
         2 < sVar24)) {
        moby->state = '\x02';
        if (moby->animationId != '\0') {
          puVar17[0x25] = (longlong)(int)(animationSpeed * 10.5);
          MB_SetAnimation(moby,0,0,*(undefined4 *)((int)puVar17 + 300));
        }
        auVar40 = ZEXT416(0xffffffff);
        auVar40 = auVar40 | auVar40 << 0x20 | auVar40 << 0x40 | auVar40 << 0x60;
        auVar41 = vectorShiftLeftIntegerWord(auVar40,auVar40);
        auVar40 = loadVectorLeftIndexed(0x58,0x3fc148);
        auVar40 = auVar40 >> 0x60 & (GPiece<16>)0xffffffff;
        auVar42 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
        auVar40 = vectorMultiplyAddFloatingPoint
                            (auVar42,auVar40 | auVar40 << 0x20 | auVar40 << 0x40 | auVar40 << 0x60,
                             auVar41);
        auVar40 = vectorConvertToSignedFixedPointWordSaturate(auVar40,0);
        auVar40 = vectorSplatHalfWord(auVar40,1);
        uVar22 = storeVectorElementHalfWordIndexed(auVar40,0x2dc,uVar32);
        *(undefined2 *)((int)pvVar15 + 0x2dc) = uVar22;
        *(undefined2 *)((int)pvVar15 + 0x2de) = 0;
      }
    }
    else {
      GetBonePosition(moby,0,uVar19 - 0x100);
      fVar10 = (float)(dVar37 - (double)*(float *)((int)puVar17 + 0x84));
      fVar11 = (float)(dVar38 - (double)*(float *)(puVar17 + 0x10));
      fVar12 = (float)(dVar36 - (double)*(float *)(puVar17 + 0x11));
      *(float *)(puVar17 + 0x12) = fVar11;
      *(float *)((int)puVar17 + 0x94) = fVar10;
      *(float *)(puVar17 + 0x13) = fVar12;
      *(float *)((int)puVar17 + 0x9c) = (float)dVar35;
      dVar36 = (double)SQRT(fVar12 * fVar12 + fVar11 * fVar11 + fVar10 * fVar10);
      fVar43 = (float)((double)(g_FrameTime * 20.0) / dVar36);
      dVar35 = dVar39;
      if (dVar39 - dVar36 < 0.0) {
        dVar35 = (double)(fVar11 * fVar43);
      }
      dVar37 = dVar39;
      if (dVar39 - dVar36 < 0.0) {
        dVar37 = (double)(fVar10 * fVar43);
      }
      dVar38 = dVar39;
      if (dVar39 - dVar36 < 0.0) {
        dVar38 = (double)(fVar12 * fVar43);
      }
      if (dVar36 - dVar39 < 0.0) {
        dVar35 = (double)(fVar11 * fVar43);
      }
      if (dVar36 - dVar39 < 0.0) {
        dVar37 = (double)(fVar10 * fVar43);
      }
      if (dVar36 - dVar39 < 0.0) {
        dVar38 = (double)(fVar12 * fVar43);
      }
      *(float *)(puVar17 + 0x12) = (float)dVar35;
      *(float *)((int)puVar17 + 0x94) = (float)dVar37;
      *(float *)(puVar17 + 0x13) = (float)dVar38;
      FUN_003a01e0(moby,uVar19 - 0xf0,uVar19 - 0x100);
    }
  }
  if (DAT_00854670 != 0) {
    *(f32 *)((int)pvVar15 + 700) = (moby->pos).z;
    if (moby->state != '\n' && moby->state != '\0') {
      Delt(0.25,g_FrameTime * 0.25,(float *)((int)pvVar15 + 0x2ec));
      dVar35 = (double)FastWrapRot
                                 (*(float *)((int)pvVar15 + 0x2f4),*(float *)((int)pvVar15 + 0x2f0))
      ;
      *(float *)((int)pvVar15 + 0x2f4) = (float)dVar35;
      dVar35 = (double)FastWrapRot
                                 (*(float *)((int)pvVar15 + 0x2fc),*(float *)((int)pvVar15 + 0x2f8))
      ;
      *(float *)((int)pvVar15 + 0x2fc) = (float)dVar35;
      dVar35 = (double)FastWrapRot
                                 (*(float *)((int)pvVar15 + 0x2e8),*(float *)((int)pvVar15 + 0x2e4))
      ;
      fVar43 = *(float *)((int)pvVar15 + 0x2f4);
      fVar10 = 3.1415925 - fVar43;
      if (fVar43 - (3.1415925 - fVar43) < 0.0) {
        fVar10 = fVar43;
      }
      fVar11 = -3.1415925 - fVar43;
      if ((-3.1415925 - fVar43) - fVar10 < 0.0) {
        fVar11 = fVar10;
      }
      *(float *)((int)pvVar15 + 0x2e8) = (float)dVar35;
      fVar12 = fVar11 * fVar11;
      fVar10 = fVar12 * fVar12 * fVar11;
      fVar43 = fVar12 * fVar10;
      (moby->pos).x =
           *(float *)((int)pvVar15 + 0x2ec) *
           (fVar12 * fVar43 * 2.601887e-06 +
           fVar43 * -0.0001980741 + fVar10 * 0.0083330255 + fVar12 * fVar11 * -0.16666657 + fVar11)
           + *(float *)((int)pvVar15 + 0x2c0);
      fVar43 = *(float *)((int)pvVar15 + 0x2fc);
      fVar10 = 3.1415925 - fVar43;
      if (fVar43 - (3.1415925 - fVar43) < 0.0) {
        fVar10 = fVar43;
      }
      fVar11 = -3.1415925 - fVar43;
      if ((-3.1415925 - fVar43) - fVar10 < 0.0) {
        fVar11 = fVar10;
      }
      fVar43 = fVar11 * fVar11;
      fVar10 = fVar43 * fVar43 * fVar11;
      fVar12 = fVar43 * fVar10;
      (moby->pos).y =
           *(float *)((int)pvVar15 + 0x2ec) *
           (fVar43 * fVar12 * 2.601887e-06 +
           fVar12 * -0.0001980741 + fVar10 * 0.0083330255 + fVar43 * fVar11 * -0.16666657 + fVar11)
           + *(float *)((int)pvVar15 + 0x2c4);
      fVar43 = *(float *)((int)pvVar15 + 0x2e8);
      fVar10 = 3.1415925 - fVar43;
      if (fVar43 - (3.1415925 - fVar43) < 0.0) {
        fVar10 = fVar43;
      }
      fVar11 = -3.1415925 - fVar43;
      if ((-3.1415925 - fVar43) - fVar10 < 0.0) {
        fVar11 = fVar10;
      }
      fVar43 = fVar11 * fVar11;
      fVar10 = fVar43 * fVar43 * fVar11;
      fVar12 = fVar43 * fVar10;
      (moby->pos).z =
           *(float *)((int)pvVar15 + 0x2ec) *
           (fVar43 * fVar12 * 2.601887e-06 +
           fVar12 * -0.0001980741 + fVar10 * 0.0083330255 + fVar43 * fVar11 * -0.16666657 + fVar11)
           + *(float *)((int)pvVar15 + 0x2c8);
    }
    fVar43 = (moby->pos).y - GameCamera.posY;
    fVar10 = (moby->pos).x - GameCamera.posX;
    fVar11 = (moby->pos).z - GameCamera.posZ;
    if ((SQRT(fVar11 * fVar11 + fVar10 * fVar10 + fVar43 * fVar43) < 32.0) &&
       (iVar20 = IsMobyPlayingSound(moby,*(int *)((int)pvVar15 + 0x304)), iVar20 == 0)) {
      iVar20 = PlayMobySound(7,4,moby);
      *(int *)((int)pvVar15 + 0x304) = iVar20;
    }
  }
  if (DAT_00854674 != 0) {
    M638_003fa1a8(moby);
  }
  if ((DAT_00854678 != 0) && (g_heroStateType != 0x16)) {
    M638_003f9dc0(moby);
  }
  if (((Level == Veldin2) && (g_gameMode == GAME_MODE_SCENE)) &&
     (g_SceneId < 6 && 2 < g_SceneId)) {
    DeleteMoby(moby);
  }
  return;
}


