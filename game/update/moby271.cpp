// game/update/moby271.cpp -- reconstructed from NPEA00385 EBOOT
// STATUS: NOT STARTED (raw Ghidra output)
// 7 functions, 0x32399c-0x3258b4
#include "game/update/moby271.h"
#include "game/collproc.h"
#include "game/hero.h"
#include "game/mobyfunc.h"
#include "game/mobyproc.h"
#include "game/mobyutil.h"
#include "game/sound.h"
#include "game/update/moby849.h"
#include "idol/fastfunc.h"

// 0x032399c (0x58 bytes)
void M271_0032399c(MobyInstance *moby)

{
  undefined8 uVar1;
  
  uVar1 = M849_MB_Sucking(moby);
  if ((int)uVar1 == 0) {
    if (moby->state == '\x05') {
      moby->state = '\x01';
    }
  }
  else {
    moby->state = '\x05';
  }
  return;
}


// 0x03239f4 (0x58 bytes)
void M271_003239f4(int param_1)

{
  int iVar1;
  
  iVar1 = M849_0048aa70();
  if (iVar1 == 0) {
    if (*(char *)(param_1 + 0x20) == '\x05') {
      *(undefined1 *)(param_1 + 0x20) = 1;
    }
  }
  else {
    *(undefined1 *)(param_1 + 0x20) = 5;
  }
  return;
}


// 0x0323a4c (0xc8 bytes)
undefined8
M271_00323a4c
          (undefined8 param_1,MobyInstance *param_2,undefined8 param_3,undefined8 param_4)

{
  short sVar1;
  int iVar3;
  undefined8 uVar2;
  
  iVar3 = FUN_00486828();
  uVar2 = M849_0048acb8(param_1,param_2,param_3,param_4);
  sVar1 = *(short *)(iVar3 + 0x68);
  if ((int)uVar2 == 0) {
    if (param_2->state == '\x05') {
      param_2->state = '\x01';
    }
  }
  else {
    param_2->state = '\x05';
  }
  if (sVar1 == 6) {
    PlayMobySound(1,0,param_2);
  }
  return uVar2;
}


// 0x0323b14 (0x38 bytes)
void M271_00323b14(int param_1)

{
  M849_0048afe8();
  *(undefined1 *)(param_1 + 0x20) = 5;
  return;
}


// 0x0323b4c (0x2c bytes)
undefined4 M271_00323b4c(int param_1)

{
  undefined4 uVar1;
  
  if (param_1 == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = 0;
    if (*(int *)(param_1 + 0x78) != 0) {
      uVar1 = *(undefined4 *)(*(int *)(param_1 + 0x78) + 0x14);
    }
  }
  return uVar1;
}


// 0x0323b78 (0x14 bytes)
void M271_00323b78(void)

{
  DAT_00800130 = 0x10000;
  return;
}


// 0x0323bf8 (0x1cbc bytes)
// inlined: FastAtan2 @0x323e54, FastAtan2 @0x3240e0, FastAtan2 @0x324324, FastAtan2 @0x32452c, FastAtan2 @0x32489c, FastAtan2 @0x324af8, FastAtan2 @0x324e74, FastAtan2 @0x3250f8
/* Moby 271 */

void UpdateMoby_271(MobyInstance *moby)

{
  byte bVar1;
  u8 uVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  undefined4 uVar8;
  ulonglong *puVar9;
  int iVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  MobyInstance *victim;
  ulonglong uVar14;
  int iVar18;
  ulonglong uVar15;
  longlong lVar16;
  longlong lVar17;
  uint uVar19;
  longlong lVar20;
  float *pfVar21;
  float *pfVar23;
  longlong lVar22;
  ulonglong uVar24;
  ulonglong unaff_r28;
  ulonglong unaff_r29;
  ulonglong unaff_r30;
  ulonglong uVar25;
  ulonglong unaff_r31;
  ulonglong in_LR;
  longlong lVar26;
  double dVar27;
  double dVar28;
  double dVar29;
  double dVar30;
  ulonglong in_f31;
  GPiece<16> auVar31;
  GPiece<16> auVar32;
  GPiece<16> auVar33;
  
  uVar14 = ZEXT48(&stack0x00000000);
  lVar17 = uVar14 - 0x240;
  puVar9 = (ulonglong *)lVar17;
  *puVar9 = uVar14;
  puVar9[0x4a] = in_LR;
  puVar9[0x47] = in_f31;
  puVar9[0x46] = unaff_r31;
  puVar9[0x45] = unaff_r30;
  puVar9[0x44] = unaff_r29;
  puVar9[0x43] = unaff_r28;
  pfVar21 = (float *)moby->pVar;
  uVar25 = ZEXT48(pfVar21);
  iVar18 = MB_damage(moby,0x10000,0);
  FastDecTimerS32(uVar25 + 0x124);
  if (((iVar18 != 0) && (moby->state != '\x05' && moby->state != '\t')) && (pfVar21[0x49] == 0.0)) {
    pfVar21[0x18] = 0.008;
    pfVar21[0x19] = 0.0005;
    dVar27 = 0.0;
    dVar28 = dVar27;
    if (pfVar21[0x4a] == 0.0) {
      dVar28 = (double)(g_FrameTime * 7.0);
    }
    pfVar21[0x1a] = (float)dVar28;
    fVar4 = g_FrameTime * 3.0;
    *(undefined1 *)((int)pfVar21 + 0x8d) = 0;
    pfVar21[0x1d] = 1.26117e-44;
    pfVar21[0x1b] = fVar4;
    fVar4 = *pfVar21 - *(float *)(iVar18 + 0x2c);
    *pfVar21 = fVar4;
    if (fVar4 <= 0.0) {
      *(undefined1 *)((int)pfVar21 + 0x47) = 0x5a;
      fVar4 = (moby->pos).x - g_heroPosition.x;
      fVar3 = (moby->pos).y - g_heroPosition.y;
      fVar5 = ABS(fVar4);
      fVar7 = ABS(fVar3);
      *(float *)(puVar9 + 0x1c) = fVar4;
      *(float *)((int)puVar9 + 0xe4) = fVar3;
      *(float *)(puVar9 + 0x1d) = fVar5 - fVar7;
      uVar24 = (ulonglong)(*(uint *)(puVar9 + 0x1c) >> 0x1c) & 8 |
               (ulonglong)(*(uint *)(puVar9 + 0x1d) >> 0x1e) & 2 |
               (ulonglong)(*(uint *)((int)puVar9 + 0xe4) >> 0x1d) & 4;
      uVar15 = uVar24 << 2 | 0x735900;
      fVar4 = ABS(*(float *)(puVar9 + 0x1c));
      if (*(float *)(puVar9 + 0x1d) - 0.0 < 0.0) {
        fVar4 = fVar7;
      }
      fVar3 = *(float *)(&g_atanQuadrantTable + (int)(uVar24 << 2));
      fVar7 = ABS(*(float *)((int)puVar9 + 0xe4));
      if (*(float *)(puVar9 + 0x1d) - 0.0 < 0.0) {
        fVar7 = fVar5;
      }
      fVar5 = *(float *)((int)uVar15 + 4);
      if (0.0 < fVar4) {
        lVar16 = uVar14 - 0x230;
        lVar22 = uVar14 - 0xa0;
        lVar20 = uVar14 - 0xb0;
        lVar26 = 2;
        fVar4 = (fVar7 - fVar4) / (fVar7 + fVar4);
        fVar7 = fVar4 * fVar4;
        *(float *)((int)puVar9 + 0x19c) = fVar4;
        *(float *)((int)puVar9 + 0x194) = fVar4;
        *(float *)(puVar9 + 0x33) = fVar4;
        *(float *)(puVar9 + 0x32) = fVar4;
        fVar4 = fVar7 * fVar7;
        *(float *)((int)puVar9 + 0x194) = *(float *)((int)puVar9 + 0x194) * fVar7;
        *(float *)(puVar9 + 0x33) = *(float *)(puVar9 + 0x33) * fVar4;
        *(float *)((int)puVar9 + 0x19c) = *(float *)((int)puVar9 + 0x19c) * fVar4 * fVar7;
        do {
          *(float *)((int)lVar16 + 400) = *(float *)((int)lVar16 + 0x180) * fVar4 * fVar4;
          iVar18 = (int)lVar20;
          lVar20 = lVar20 + 8;
          lVar16 = lVar16 + 8;
          *(float *)((int)lVar22 + 4) = *(float *)(iVar18 + 4) * fVar4 * fVar4;
          lVar22 = lVar22 + 8;
          lVar26 = lVar26 + -1;
        } while (lVar26 != 0);
        lVar26 = 4;
        lVar22 = uVar14 - 0xb0;
        uVar15 = ZEXT48(&DAT_007358e0);
        lVar16 = lVar17;
        lVar20 = lVar22;
        do {
          pfVar23 = (float *)uVar15;
          fVar4 = pfVar23[1];
          uVar15 = uVar15 + 8;
          *(float *)((int)lVar16 + 400) = *(float *)((int)lVar16 + 400) * *pfVar23;
          lVar16 = lVar16 + 8;
          *(float *)((int)lVar20 + 4) = *(float *)((int)lVar20 + 4) * fVar4;
          lVar20 = lVar20 + 8;
          lVar26 = lVar26 + -1;
        } while (lVar26 != 0);
        lVar20 = 2;
        lVar16 = lVar17;
        do {
          iVar18 = (int)lVar16;
          iVar10 = (int)lVar22;
          lVar16 = lVar16 + 0x10;
          lVar22 = lVar22 + 0x10;
          dVar27 = (double)((float)(dVar27 + (double)*(float *)(iVar18 + 400)) +
                            *(float *)(iVar10 + 4) + *(float *)(iVar10 + 8) +
                           *(float *)(iVar10 + 0xc));
          lVar20 = lVar20 + -1;
        } while (lVar20 != 0);
        dVar27 = (double)((float)(dVar27 + 0.7853981852531433) * fVar3 + fVar5);
      }
      MB_StartKick(dVar27,moby,uVar25 + 0x50,uVar15,4,5,0);
      pfVar21[0x28] = 2.0;
      pfVar21[0x29] = 8.0;
      moby->state = '\t';
    }
    else {
      uVar19 = *(uint *)(iVar18 + 0x2c);
      if ((int)(FLOAT_ORDER(uVar19)) < 0x3f800000) {
        *(undefined1 *)((int)pfVar21 + 0x47) = 0x4b;
      }
      else if (uVar19 == 0x3f800000) {
        if (*(short *)(*(int *)(iVar18 + 0x20) + 0xa6) == 0xb0) {
          auVar31 = ZEXT416(0xffffffff);
          auVar31 = auVar31 | auVar31 << 0x20 | auVar31 << 0x40 | auVar31 << 0x60;
          *(undefined1 *)((int)pfVar21 + 0x47) = 0x4b;
          auVar32 = vectorShiftLeftIntegerWord(auVar31,auVar31);
          auVar31 = loadVectorLeftIndexed(0xc,0x323b90);
          auVar31 = auVar31 >> 0x60 & (GPiece<16>)0xffffffff;
          auVar33 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
          auVar31 = vectorMultiplyAddFloatingPoint
                              (auVar33,auVar31 | auVar31 << 0x20 | auVar31 << 0x40 | auVar31 << 0x60
                               ,auVar32);
          auVar31 = vectorConvertToSignedFixedPointWordSaturate(auVar31,0);
          auVar31 = auVar31 >> 0x60 & (GPiece<16>)0xffffffff;
          uVar8 = storeVectorElementWordIndexed
                            (auVar31 | auVar31 << 0x20 | auVar31 << 0x40 | auVar31 << 0x60,0x124,
                             uVar25);
          *(undefined4 *)((uint)(pfVar21 + 0x49) & 0xfffffffc) = uVar8;
        }
        else {
          *(undefined1 *)((int)pfVar21 + 0x47) = 0x4b;
          fVar4 = (moby->pos).x - g_heroPosition.x;
          fVar3 = (moby->pos).y - g_heroPosition.y;
          fVar5 = ABS(fVar4);
          fVar7 = ABS(fVar3);
          *(float *)((int)puVar9 + 0x104) = fVar4;
          *(float *)(puVar9 + 0x21) = fVar3;
          *(float *)((int)puVar9 + 0x10c) = fVar5 - fVar7;
          uVar24 = (ulonglong)(*(uint *)((int)puVar9 + 0x104) >> 0x1c) & 8 |
                   (ulonglong)(*(uint *)((int)puVar9 + 0x10c) >> 0x1e) & 2 |
                   (ulonglong)(*(uint *)(puVar9 + 0x21) >> 0x1d) & 4;
          uVar15 = uVar24 << 2 | 0x735900;
          fVar4 = ABS(*(float *)((int)puVar9 + 0x104));
          if (*(float *)((int)puVar9 + 0x10c) - 0.0 < 0.0) {
            fVar4 = fVar7;
          }
          fVar3 = *(float *)(&g_atanQuadrantTable + (int)(uVar24 << 2));
          fVar7 = ABS(*(float *)(puVar9 + 0x21));
          if (*(float *)((int)puVar9 + 0x10c) - 0.0 < 0.0) {
            fVar7 = fVar5;
          }
          fVar5 = *(float *)((int)uVar15 + 4);
          if (0.0 < fVar4) {
            lVar16 = uVar14 - 0x230;
            lVar22 = uVar14 - 0x40;
            lVar20 = uVar14 - 0x50;
            lVar26 = 2;
            fVar4 = (fVar7 - fVar4) / (fVar7 + fVar4);
            fVar7 = fVar4 * fVar4;
            *(float *)((int)puVar9 + 0x1fc) = fVar4;
            *(float *)((int)puVar9 + 500) = fVar4;
            *(float *)(puVar9 + 0x3f) = fVar4;
            *(float *)(puVar9 + 0x3e) = fVar4;
            fVar4 = fVar7 * fVar7;
            *(float *)((int)puVar9 + 500) = *(float *)((int)puVar9 + 500) * fVar7;
            *(float *)(puVar9 + 0x3f) = *(float *)(puVar9 + 0x3f) * fVar4;
            *(float *)((int)puVar9 + 0x1fc) = *(float *)((int)puVar9 + 0x1fc) * fVar4 * fVar7;
            do {
              *(float *)((int)lVar16 + 0x1f0) = *(float *)((int)lVar16 + 0x1e0) * fVar4 * fVar4;
              iVar18 = (int)lVar20;
              lVar20 = lVar20 + 8;
              lVar16 = lVar16 + 8;
              *(float *)((int)lVar22 + 4) = *(float *)(iVar18 + 4) * fVar4 * fVar4;
              lVar22 = lVar22 + 8;
              lVar26 = lVar26 + -1;
            } while (lVar26 != 0);
            lVar26 = 4;
            lVar22 = uVar14 - 0x50;
            uVar15 = ZEXT48(&DAT_007358e0);
            lVar16 = lVar17;
            lVar20 = lVar22;
            do {
              pfVar23 = (float *)uVar15;
              fVar4 = pfVar23[1];
              uVar15 = uVar15 + 8;
              *(float *)((int)lVar16 + 0x1f0) = *(float *)((int)lVar16 + 0x1f0) * *pfVar23;
              lVar16 = lVar16 + 8;
              *(float *)((int)lVar20 + 4) = *(float *)((int)lVar20 + 4) * fVar4;
              lVar20 = lVar20 + 8;
              lVar26 = lVar26 + -1;
            } while (lVar26 != 0);
            lVar20 = 2;
            lVar16 = lVar17;
            do {
              iVar18 = (int)lVar16;
              iVar10 = (int)lVar22;
              lVar16 = lVar16 + 0x10;
              lVar22 = lVar22 + 0x10;
              dVar27 = (double)((float)(dVar27 + (double)*(float *)(iVar18 + 0x1f0)) +
                                *(float *)(iVar10 + 4) + *(float *)(iVar10 + 8) +
                               *(float *)(iVar10 + 0xc));
              lVar20 = lVar20 + -1;
            } while (lVar20 != 0);
            dVar27 = (double)((float)(dVar27 + 0.7853981852531433) * fVar3 + fVar5);
          }
          MB_StartKick(dVar27,moby,uVar25 + 0x50,uVar15,3,5,0);
          auVar31 = ZEXT416(0xffffffff);
          auVar31 = auVar31 | auVar31 << 0x20 | auVar31 << 0x40 | auVar31 << 0x60;
          pfVar21[0x28] = 4.0;
          auVar32 = vectorShiftLeftIntegerWord(auVar31,auVar31);
          pfVar21[0x29] = 9.0;
          moby->state = '\x05';
          auVar31 = loadVectorLeftIndexed(0xc,0x323b90);
          auVar31 = auVar31 >> 0x60 & (GPiece<16>)0xffffffff;
          auVar33 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
          auVar31 = vectorMultiplyAddFloatingPoint
                              (auVar33,auVar31 | auVar31 << 0x20 | auVar31 << 0x40 | auVar31 << 0x60
                               ,auVar32);
          auVar31 = vectorConvertToSignedFixedPointWordSaturate(auVar31,0);
          auVar31 = auVar31 >> 0x60 & (GPiece<16>)0xffffffff;
          uVar8 = storeVectorElementWordIndexed
                            (auVar31 | auVar31 << 0x20 | auVar31 << 0x40 | auVar31 << 0x60,0x124,
                             uVar25);
          *(undefined4 *)((uint)(pfVar21 + 0x49) & 0xfffffffc) = uVar8;
        }
      }
      else if (uVar19 == 0x40000000) {
        auVar31 = ZEXT416(0xffffffff);
        auVar31 = auVar31 | auVar31 << 0x20 | auVar31 << 0x40 | auVar31 << 0x60;
        auVar32 = vectorShiftLeftIntegerWord(auVar31,auVar31);
        auVar31 = loadVectorLeftIndexed(0xc,0x323b90);
        auVar31 = auVar31 >> 0x60 & (GPiece<16>)0xffffffff;
        auVar33 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
        auVar31 = vectorMultiplyAddFloatingPoint
                            (auVar33,auVar31 | auVar31 << 0x20 | auVar31 << 0x40 | auVar31 << 0x60,
                             auVar32);
        auVar31 = vectorConvertToSignedFixedPointWordSaturate(auVar31,0);
        auVar31 = auVar31 >> 0x60 & (GPiece<16>)0xffffffff;
        uVar8 = storeVectorElementWordIndexed
                          (auVar31 | auVar31 << 0x20 | auVar31 << 0x40 | auVar31 << 0x60,0x124,
                           uVar25);
        *(undefined4 *)((uint)(pfVar21 + 0x49) & 0xfffffffc) = uVar8;
        *(undefined1 *)((int)pfVar21 + 0x47) = 0x5a;
        fVar4 = (moby->pos).x - g_heroPosition.x;
        fVar3 = (moby->pos).y - g_heroPosition.y;
        fVar5 = ABS(fVar4);
        fVar7 = ABS(fVar3);
        *(float *)(puVar9 + 0x1f) = fVar4;
        *(float *)((int)puVar9 + 0xfc) = fVar3;
        *(float *)(puVar9 + 0x20) = fVar5 - fVar7;
        uVar24 = (ulonglong)(*(uint *)(puVar9 + 0x1f) >> 0x1c) & 8 |
                 (ulonglong)(*(uint *)(puVar9 + 0x20) >> 0x1e) & 2 |
                 (ulonglong)(*(uint *)((int)puVar9 + 0xfc) >> 0x1d) & 4;
        uVar15 = uVar24 << 2 | 0x735900;
        fVar4 = ABS(*(float *)(puVar9 + 0x1f));
        if (*(float *)(puVar9 + 0x20) - 0.0 < 0.0) {
          fVar4 = fVar7;
        }
        fVar3 = *(float *)(&g_atanQuadrantTable + (int)(uVar24 << 2));
        fVar7 = ABS(*(float *)((int)puVar9 + 0xfc));
        if (*(float *)(puVar9 + 0x20) - 0.0 < 0.0) {
          fVar7 = fVar5;
        }
        fVar5 = *(float *)((int)uVar15 + 4);
        if (0.0 < fVar4) {
          lVar16 = uVar14 - 0x230;
          lVar20 = uVar14 - 0x70;
          lVar22 = uVar14 - 0x60;
          lVar26 = 2;
          fVar4 = (fVar7 - fVar4) / (fVar7 + fVar4);
          fVar7 = fVar4 * fVar4;
          *(float *)((int)puVar9 + 0x1dc) = fVar4;
          *(float *)((int)puVar9 + 0x1d4) = fVar4;
          *(float *)(puVar9 + 0x3b) = fVar4;
          *(float *)(puVar9 + 0x3a) = fVar4;
          fVar4 = fVar7 * fVar7;
          *(float *)((int)puVar9 + 0x1d4) = *(float *)((int)puVar9 + 0x1d4) * fVar7;
          *(float *)(puVar9 + 0x3b) = *(float *)(puVar9 + 0x3b) * fVar4;
          *(float *)((int)puVar9 + 0x1dc) = *(float *)((int)puVar9 + 0x1dc) * fVar4 * fVar7;
          do {
            *(float *)((int)lVar16 + 0x1d0) = *(float *)((int)lVar16 + 0x1c0) * fVar4 * fVar4;
            iVar18 = (int)lVar20;
            lVar16 = lVar16 + 8;
            lVar20 = lVar20 + 8;
            *(float *)((int)lVar22 + 4) = *(float *)(iVar18 + 4) * fVar4 * fVar4;
            lVar22 = lVar22 + 8;
            lVar26 = lVar26 + -1;
          } while (lVar26 != 0);
          lVar26 = 4;
          lVar22 = uVar14 - 0x70;
          uVar15 = ZEXT48(&DAT_007358e0);
          lVar16 = lVar17;
          lVar20 = lVar22;
          do {
            pfVar23 = (float *)uVar15;
            fVar4 = pfVar23[1];
            uVar15 = uVar15 + 8;
            *(float *)((int)lVar16 + 0x1d0) = *(float *)((int)lVar16 + 0x1d0) * *pfVar23;
            lVar16 = lVar16 + 8;
            *(float *)((int)lVar20 + 4) = *(float *)((int)lVar20 + 4) * fVar4;
            lVar20 = lVar20 + 8;
            lVar26 = lVar26 + -1;
          } while (lVar26 != 0);
          lVar20 = 2;
          lVar16 = lVar17;
          do {
            iVar18 = (int)lVar16;
            iVar10 = (int)lVar22;
            lVar16 = lVar16 + 0x10;
            lVar22 = lVar22 + 0x10;
            dVar27 = (double)((float)(dVar27 + (double)*(float *)(iVar18 + 0x1d0)) +
                              *(float *)(iVar10 + 4) + *(float *)(iVar10 + 8) +
                             *(float *)(iVar10 + 0xc));
            lVar20 = lVar20 + -1;
          } while (lVar20 != 0);
          dVar27 = (double)((float)(dVar27 + 0.7853981852531433) * fVar3 + fVar5);
        }
        MB_StartKick(dVar27,moby,uVar25 + 0x50,uVar15,4,5,0);
        pfVar21[0x28] = 2.0;
        pfVar21[0x29] = 8.0;
        moby->state = '\x06';
      }
      else {
        auVar31 = ZEXT416(0xffffffff);
        auVar31 = auVar31 | auVar31 << 0x20 | auVar31 << 0x40 | auVar31 << 0x60;
        auVar32 = vectorShiftLeftIntegerWord(auVar31,auVar31);
        auVar31 = loadVectorLeftIndexed(0xc,0x323b90);
        auVar31 = auVar31 >> 0x60 & (GPiece<16>)0xffffffff;
        auVar33 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
        auVar31 = vectorMultiplyAddFloatingPoint
                            (auVar33,auVar31 | auVar31 << 0x20 | auVar31 << 0x40 | auVar31 << 0x60,
                             auVar32);
        auVar31 = vectorConvertToSignedFixedPointWordSaturate(auVar31,0);
        auVar31 = auVar31 >> 0x60 & (GPiece<16>)0xffffffff;
        uVar8 = storeVectorElementWordIndexed
                          (auVar31 | auVar31 << 0x20 | auVar31 << 0x40 | auVar31 << 0x60,0x124,
                           uVar25);
        *(undefined4 *)((uint)(pfVar21 + 0x49) & 0xfffffffc) = uVar8;
        *(undefined1 *)((int)pfVar21 + 0x47) = 0x5a;
        fVar4 = (moby->pos).x - g_heroPosition.x;
        fVar3 = (moby->pos).y - g_heroPosition.y;
        fVar5 = ABS(fVar4);
        fVar7 = ABS(fVar3);
        *(float *)((int)puVar9 + 0xec) = fVar4;
        *(float *)(puVar9 + 0x1e) = fVar3;
        *(float *)((int)puVar9 + 0xf4) = fVar5 - fVar7;
        uVar24 = (ulonglong)(*(uint *)((int)puVar9 + 0xec) >> 0x1c) & 8 |
                 (ulonglong)(*(uint *)((int)puVar9 + 0xf4) >> 0x1e) & 2 |
                 (ulonglong)(*(uint *)(puVar9 + 0x1e) >> 0x1d) & 4;
        uVar15 = uVar24 << 2 | 0x735900;
        fVar4 = ABS(*(float *)((int)puVar9 + 0xec));
        if (*(float *)((int)puVar9 + 0xf4) - 0.0 < 0.0) {
          fVar4 = fVar7;
        }
        fVar3 = *(float *)(&g_atanQuadrantTable + (int)(uVar24 << 2));
        fVar7 = ABS(*(float *)(puVar9 + 0x1e));
        if (*(float *)((int)puVar9 + 0xf4) - 0.0 < 0.0) {
          fVar7 = fVar5;
        }
        fVar5 = *(float *)((int)uVar15 + 4);
        if (0.0 < fVar4) {
          lVar16 = uVar14 - 0x230;
          lVar22 = uVar14 - 0x80;
          lVar20 = uVar14 - 0x90;
          lVar26 = 2;
          fVar4 = (fVar7 - fVar4) / (fVar7 + fVar4);
          fVar7 = fVar4 * fVar4;
          *(float *)((int)puVar9 + 0x1bc) = fVar4;
          *(float *)((int)puVar9 + 0x1b4) = fVar4;
          *(float *)(puVar9 + 0x37) = fVar4;
          *(float *)(puVar9 + 0x36) = fVar4;
          fVar4 = fVar7 * fVar7;
          *(float *)((int)puVar9 + 0x1b4) = *(float *)((int)puVar9 + 0x1b4) * fVar7;
          *(float *)(puVar9 + 0x37) = *(float *)(puVar9 + 0x37) * fVar4;
          *(float *)((int)puVar9 + 0x1bc) = *(float *)((int)puVar9 + 0x1bc) * fVar4 * fVar7;
          do {
            *(float *)((int)lVar16 + 0x1b0) = *(float *)((int)lVar16 + 0x1a0) * fVar4 * fVar4;
            iVar18 = (int)lVar20;
            lVar20 = lVar20 + 8;
            lVar16 = lVar16 + 8;
            *(float *)((int)lVar22 + 4) = *(float *)(iVar18 + 4) * fVar4 * fVar4;
            lVar22 = lVar22 + 8;
            lVar26 = lVar26 + -1;
          } while (lVar26 != 0);
          lVar26 = 4;
          lVar22 = uVar14 - 0x90;
          uVar15 = ZEXT48(&DAT_007358e0);
          lVar16 = lVar17;
          lVar20 = lVar22;
          do {
            pfVar23 = (float *)uVar15;
            fVar4 = pfVar23[1];
            uVar15 = uVar15 + 8;
            *(float *)((int)lVar16 + 0x1b0) = *(float *)((int)lVar16 + 0x1b0) * *pfVar23;
            lVar16 = lVar16 + 8;
            *(float *)((int)lVar20 + 4) = *(float *)((int)lVar20 + 4) * fVar4;
            lVar20 = lVar20 + 8;
            lVar26 = lVar26 + -1;
          } while (lVar26 != 0);
          lVar20 = 2;
          lVar16 = lVar17;
          do {
            iVar18 = (int)lVar16;
            iVar10 = (int)lVar22;
            lVar16 = lVar16 + 0x10;
            lVar22 = lVar22 + 0x10;
            dVar27 = (double)((float)(dVar27 + (double)*(float *)(iVar18 + 0x1b0)) +
                              *(float *)(iVar10 + 4) + *(float *)(iVar10 + 8) +
                             *(float *)(iVar10 + 0xc));
            lVar20 = lVar20 + -1;
          } while (lVar20 != 0);
          dVar27 = (double)((float)(dVar27 + 0.7853981852531433) * fVar3 + fVar5);
        }
        MB_StartKick(dVar27,moby,uVar25 + 0x50,uVar15,3,5,0);
        pfVar21[0x28] = 2.0;
        pfVar21[0x29] = 8.0;
        moby->state = '\a';
      }
    }
    MB_UpdateLightsTransition(moby,uVar25 + 0x40);
  }
  bVar1 = moby->state;
  moby->damage = -1;
  if (bVar1 < 5) {
    if (bVar1 < 2) {
      if (bVar1 == 0) {
        moby->state = '\x01';
        MB_InitDefaultParams(pfVar21 + 0x2c);
        SetColorOfMoby(moby,0x7f,0x7f,0x7f);
        auVar31 = ZEXT416(0xffffffff);
        auVar31 = auVar31 | auVar31 << 0x20 | auVar31 << 0x40 | auVar31 << 0x60;
        pfVar21[0x2f] = 2.0;
        pfVar21[0x2e] = 2.0;
        auVar32 = vectorShiftLeftIntegerWord(auVar31,auVar31);
        fVar4 = pfVar21[0x48] * g_FrameTime;
        *pfVar21 = 5.0;
        pfVar21[0x49] = 0.0;
        pfVar21[0x2c] = 1.27378e-42;
        pfVar21[0x35] = fVar4;
        pfVar21[0x40] = (moby->pos).x;
        pfVar21[0x41] = (moby->pos).y;
        pfVar21[0x42] = (moby->pos).z;
        pfVar21[0x43] = (moby->pos).w;
        auVar31 = loadVectorLeftIndexed(0xc,0x323b90);
        auVar33 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
        auVar31 = auVar31 >> 0x60 & (GPiece<16>)0xffffffff;
        auVar31 = vectorMultiplyAddFloatingPoint
                            (auVar33,auVar31 | auVar31 << 0x20 | auVar31 << 0x40 | auVar31 << 0x60,
                             auVar32);
        auVar31 = vectorConvertToSignedFixedPointWordSaturate(auVar31,0);
        auVar31 = auVar31 >> 0x60 & (GPiece<16>)0xffffffff;
        uVar8 = storeVectorElementWordIndexed
                          (auVar31 | auVar31 << 0x20 | auVar31 << 0x40 | auVar31 << 0x60,0x110,
                           uVar25);
        *(undefined4 *)((uint)(pfVar21 + 0x44) & 0xfffffffc) = uVar8;
        if (moby->animationId != '\x01') {
          MB_SetAnimation(moby,1,0,3);
        }
      }
      else {
        fVar4 = g_heroPosition.x - (moby->pos).x;
        fVar3 = g_heroPosition.y - (moby->pos).y;
        pfVar21 = (float *)&g_atanQuadrantTable;
        fVar5 = ABS(fVar4);
        fVar7 = ABS(fVar3);
        *(float *)((int)puVar9 + 0xd4) = fVar4;
        *(float *)(puVar9 + 0x1b) = fVar3;
        *(float *)((int)puVar9 + 0xdc) = fVar5 - fVar7;
        dVar28 = 0.0;
        uVar15 = (ulonglong)(*(uint *)((int)puVar9 + 0xd4) >> 0x1c) & 8 |
                 (ulonglong)(*(uint *)((int)puVar9 + 0xdc) >> 0x1e) & 2 |
                 (ulonglong)(*(uint *)(puVar9 + 0x1b) >> 0x1d) & 4;
        fVar4 = ABS(*(float *)((int)puVar9 + 0xd4));
        if (*(float *)((int)puVar9 + 0xdc) - 0.0 < 0.0) {
          fVar4 = fVar7;
        }
        fVar7 = *(float *)(&g_atanQuadrantTable + (int)(uVar15 << 2));
        fVar3 = *(float *)(((uint)(uVar15 << 2) | 0x735900) + 4);
        fVar6 = ABS(*(float *)(puVar9 + 0x1b));
        if (*(float *)((int)puVar9 + 0xdc) - 0.0 < 0.0) {
          fVar6 = fVar5;
        }
        if (0.0 < fVar4) {
          lVar16 = uVar14 - 0x230;
          lVar22 = uVar14 - 0xc0;
          lVar20 = uVar14 - 0xd0;
          lVar26 = 2;
          fVar4 = (fVar6 - fVar4) / (fVar6 + fVar4);
          fVar5 = fVar4 * fVar4;
          *(float *)((int)puVar9 + 0x17c) = fVar4;
          *(float *)((int)puVar9 + 0x174) = fVar4;
          *(float *)(puVar9 + 0x2f) = fVar4;
          *(float *)(puVar9 + 0x2e) = fVar4;
          fVar4 = fVar5 * fVar5;
          *(float *)((int)puVar9 + 0x174) = *(float *)((int)puVar9 + 0x174) * fVar5;
          *(float *)(puVar9 + 0x2f) = *(float *)(puVar9 + 0x2f) * fVar4;
          *(float *)((int)puVar9 + 0x17c) = *(float *)((int)puVar9 + 0x17c) * fVar4 * fVar5;
          do {
            *(float *)((int)lVar16 + 0x170) = *(float *)((int)lVar16 + 0x160) * fVar4 * fVar4;
            iVar18 = (int)lVar20;
            lVar20 = lVar20 + 8;
            lVar16 = lVar16 + 8;
            *(float *)((int)lVar22 + 4) = *(float *)(iVar18 + 4) * fVar4 * fVar4;
            lVar22 = lVar22 + 8;
            lVar26 = lVar26 + -1;
          } while (lVar26 != 0);
          lVar26 = 4;
          lVar22 = uVar14 - 0xd0;
          pfVar21 = (float *)&DAT_007358e0;
          lVar16 = lVar17;
          lVar20 = lVar22;
          do {
            fVar4 = *pfVar21;
            fVar5 = pfVar21[1];
            pfVar21 = pfVar21 + 2;
            *(float *)((int)lVar16 + 0x170) = *(float *)((int)lVar16 + 0x170) * fVar4;
            lVar16 = lVar16 + 8;
            *(float *)((int)lVar20 + 4) = *(float *)((int)lVar20 + 4) * fVar5;
            lVar20 = lVar20 + 8;
            lVar26 = lVar26 + -1;
          } while (lVar26 != 0);
          lVar16 = 2;
          do {
            iVar18 = (int)lVar17;
            lVar17 = lVar17 + 0x10;
            iVar10 = (int)lVar22;
            lVar22 = lVar22 + 0x10;
            dVar28 = (double)((float)(dVar28 + (double)*(float *)(iVar18 + 0x170)) +
                              *(float *)(iVar10 + 4) + *(float *)(iVar10 + 8) +
                             *(float *)(iVar10 + 0xc));
            lVar16 = lVar16 + -1;
          } while (lVar16 != 0);
          dVar28 = (double)((float)(dVar28 + 0.7853981852531433) * fVar7 + fVar3);
        }
        OrganicDeltAngSpeed
                  (dVar28,0x3f947ae140000000,0x3fd3333340000000,0x3fb99999a0000000,moby,pfVar21,
                   uVar25 + 0x114);
        fVar4 = (moby->pos).y - g_heroPosition.y;
        fVar3 = (moby->pos).x - g_heroPosition.x;
        if ((SQRT(fVar3 * fVar3 + fVar4 * fVar4) < 8.0) &&
           (moby->state = '\x02', moby->animationId != '\0')) {
          MB_SetAnimation(moby,0,0,3);
        }
      }
    }
    else if (bVar1 < 3) {
      fVar4 = g_heroPosition.x - (moby->pos).x;
      fVar3 = g_heroPosition.y - (moby->pos).y;
      pfVar23 = (float *)&g_atanQuadrantTable;
      fVar5 = ABS(fVar4);
      fVar7 = ABS(fVar3);
      *(float *)(puVar9 + 0x19) = fVar4;
      *(float *)((int)puVar9 + 0xcc) = fVar3;
      *(float *)(puVar9 + 0x1a) = fVar5 - fVar7;
      dVar28 = 0.0;
      uVar15 = (ulonglong)(*(uint *)(puVar9 + 0x19) >> 0x1c) & 8 |
               (ulonglong)(*(uint *)(puVar9 + 0x1a) >> 0x1e) & 2 |
               (ulonglong)(*(uint *)((int)puVar9 + 0xcc) >> 0x1d) & 4;
      fVar4 = ABS(*(float *)(puVar9 + 0x19));
      if (*(float *)(puVar9 + 0x1a) - 0.0 < 0.0) {
        fVar4 = fVar7;
      }
      fVar7 = *(float *)(&g_atanQuadrantTable + (int)(uVar15 << 2));
      fVar3 = *(float *)(((uint)(uVar15 << 2) | 0x735900) + 4);
      fVar6 = ABS(*(float *)((int)puVar9 + 0xcc));
      if (*(float *)(puVar9 + 0x1a) - 0.0 < 0.0) {
        fVar6 = fVar5;
      }
      if (0.0 < fVar4) {
        lVar16 = uVar14 - 0x230;
        lVar20 = uVar14 - 0xf0;
        lVar22 = uVar14 - 0xe0;
        lVar26 = 2;
        fVar4 = (fVar6 - fVar4) / (fVar6 + fVar4);
        fVar5 = fVar4 * fVar4;
        *(float *)((int)puVar9 + 0x15c) = fVar4;
        *(float *)((int)puVar9 + 0x154) = fVar4;
        *(float *)(puVar9 + 0x2b) = fVar4;
        *(float *)(puVar9 + 0x2a) = fVar4;
        fVar4 = fVar5 * fVar5;
        *(float *)((int)puVar9 + 0x154) = *(float *)((int)puVar9 + 0x154) * fVar5;
        *(float *)(puVar9 + 0x2b) = *(float *)(puVar9 + 0x2b) * fVar4;
        *(float *)((int)puVar9 + 0x15c) = *(float *)((int)puVar9 + 0x15c) * fVar4 * fVar5;
        do {
          *(float *)((int)lVar16 + 0x150) = *(float *)((int)lVar16 + 0x140) * fVar4 * fVar4;
          iVar18 = (int)lVar20;
          lVar16 = lVar16 + 8;
          lVar20 = lVar20 + 8;
          *(float *)((int)lVar22 + 4) = *(float *)(iVar18 + 4) * fVar4 * fVar4;
          lVar22 = lVar22 + 8;
          lVar26 = lVar26 + -1;
        } while (lVar26 != 0);
        lVar26 = 4;
        lVar22 = uVar14 - 0xf0;
        pfVar23 = (float *)&DAT_007358e0;
        lVar16 = lVar17;
        lVar20 = lVar22;
        do {
          fVar4 = *pfVar23;
          fVar5 = pfVar23[1];
          pfVar23 = pfVar23 + 2;
          *(float *)((int)lVar16 + 0x150) = *(float *)((int)lVar16 + 0x150) * fVar4;
          lVar16 = lVar16 + 8;
          *(float *)((int)lVar20 + 4) = *(float *)((int)lVar20 + 4) * fVar5;
          lVar20 = lVar20 + 8;
          lVar26 = lVar26 + -1;
        } while (lVar26 != 0);
        lVar16 = 2;
        do {
          iVar18 = (int)lVar17;
          iVar10 = (int)lVar22;
          lVar17 = lVar17 + 0x10;
          lVar22 = lVar22 + 0x10;
          dVar28 = (double)((float)(dVar28 + (double)*(float *)(iVar18 + 0x150)) +
                            *(float *)(iVar10 + 4) + *(float *)(iVar10 + 8) +
                           *(float *)(iVar10 + 0xc));
          lVar16 = lVar16 + -1;
        } while (lVar16 != 0);
        dVar28 = (double)((float)(dVar28 + 0.7853981852531433) * fVar7 + fVar3);
      }
      OrganicDeltAngSpeed
                (dVar28,0x3f947ae140000000,0x3fd3333340000000,0x3fb99999a0000000,moby,pfVar23,
                 uVar25 + 0x114);
      fVar4 = (moby->rotation).z;
      fVar3 = fVar4 + 1.5707963;
      fVar7 = 3.1415925 - fVar4;
      if (fVar4 - (3.1415925 - fVar4) < 0.0) {
        fVar7 = fVar4;
      }
      fVar5 = 3.1415925 - fVar3;
      if (fVar3 - (3.1415925 - fVar3) < 0.0) {
        fVar5 = fVar3;
      }
      fVar6 = -3.1415925 - fVar4;
      if ((-3.1415925 - fVar4) - fVar7 < 0.0) {
        fVar6 = fVar7;
      }
      fVar4 = -3.1415925 - fVar3;
      if ((-3.1415925 - fVar3) - fVar5 < 0.0) {
        fVar4 = fVar5;
      }
      fVar3 = fVar6 * fVar6;
      fVar7 = fVar4 * fVar4;
      fVar12 = fVar3 * fVar3 * fVar6;
      *(undefined4 *)(puVar9 + 0xf) = 0;
      fVar5 = fVar7 * fVar7 * fVar4;
      fVar13 = fVar3 * fVar12;
      fVar11 = fVar7 * fVar5;
      *(float *)((int)puVar9 + 0x74) =
           (fVar3 * fVar13 * 2.601887e-06 +
           fVar13 * -0.0001980741 + fVar12 * 0.0083330255 + fVar3 * fVar6 * -0.16666657 + fVar6) *
           2.0;
      *(float *)(puVar9 + 0xe) =
           (fVar7 * fVar11 * 2.601887e-06 +
           fVar11 * -0.0001980741 + fVar5 * 0.0083330255 + fVar7 * fVar4 * -0.16666657 + fVar4) *
           2.0;
      MB_UpdateNavMove
                (0x3ff0000000000000,moby,(MobyInstance *)(pfVar21 + 0x2c),puVar9 + 0xe,puVar9 + 0x10
                );
      fVar4 = (moby->pos).y - g_heroPosition.y;
      fVar3 = (moby->pos).x - g_heroPosition.x;
      fVar4 = SQRT(fVar3 * fVar3 + fVar4 * fVar4);
      if (4.0 <= fVar4) {
        if ((8.0 < fVar4) && (moby->state = '\x01', moby->animationId != '\x01')) {
          MB_SetAnimation(moby,1,0,3);
        }
      }
      else {
        moby->state = '\x04';
        if (moby->animationId != '\x02') {
          MB_SetAnimation(moby,2,0,3);
        }
      }
    }
    else if (3 < bVar1) {
      fVar4 = g_heroPosition.x - (moby->pos).x;
      fVar3 = g_heroPosition.y - (moby->pos).y;
      fVar5 = ABS(fVar4);
      fVar7 = ABS(fVar3);
      *(float *)((int)puVar9 + 0xbc) = fVar4;
      *(float *)(puVar9 + 0x18) = fVar3;
      *(float *)((int)puVar9 + 0xc4) = fVar5 - fVar7;
      dVar28 = 0.0;
      uVar15 = (ulonglong)(*(uint *)((int)puVar9 + 0xbc) >> 0x1c) & 8 |
               (ulonglong)(*(uint *)((int)puVar9 + 0xc4) >> 0x1e) & 2 |
               (ulonglong)(*(uint *)(puVar9 + 0x18) >> 0x1d) & 4;
      fVar4 = ABS(*(float *)((int)puVar9 + 0xbc));
      if (*(float *)((int)puVar9 + 0xc4) - 0.0 < 0.0) {
        fVar4 = fVar7;
      }
      fVar7 = *(float *)(&g_atanQuadrantTable + (int)(uVar15 << 2));
      fVar3 = *(float *)(((uint)(uVar15 << 2) | 0x735900) + 4);
      fVar6 = ABS(*(float *)(puVar9 + 0x18));
      if (*(float *)((int)puVar9 + 0xc4) - 0.0 < 0.0) {
        fVar6 = fVar5;
      }
      dVar27 = dVar28;
      if (0.0 < fVar4) {
        lVar16 = uVar14 - 0x230;
        lVar22 = uVar14 - 0x100;
        lVar20 = uVar14 - 0x110;
        lVar26 = 2;
        fVar4 = (fVar6 - fVar4) / (fVar6 + fVar4);
        fVar5 = fVar4 * fVar4;
        *(float *)((int)puVar9 + 0x13c) = fVar4;
        *(float *)((int)puVar9 + 0x134) = fVar4;
        *(float *)(puVar9 + 0x27) = fVar4;
        *(float *)(puVar9 + 0x26) = fVar4;
        fVar4 = fVar5 * fVar5;
        *(float *)((int)puVar9 + 0x134) = *(float *)((int)puVar9 + 0x134) * fVar5;
        *(float *)(puVar9 + 0x27) = *(float *)(puVar9 + 0x27) * fVar4;
        *(float *)((int)puVar9 + 0x13c) = *(float *)((int)puVar9 + 0x13c) * fVar4 * fVar5;
        do {
          *(float *)((int)lVar16 + 0x130) = *(float *)((int)lVar16 + 0x120) * fVar4 * fVar4;
          iVar18 = (int)lVar20;
          lVar20 = lVar20 + 8;
          lVar16 = lVar16 + 8;
          *(float *)((int)lVar22 + 4) = *(float *)(iVar18 + 4) * fVar4 * fVar4;
          lVar22 = lVar22 + 8;
          lVar26 = lVar26 + -1;
        } while (lVar26 != 0);
        lVar26 = 4;
        lVar22 = uVar14 - 0x110;
        pfVar21 = (float *)&DAT_007358e0;
        lVar16 = lVar17;
        lVar20 = lVar22;
        do {
          fVar4 = *pfVar21;
          fVar5 = pfVar21[1];
          pfVar21 = pfVar21 + 2;
          *(float *)((int)lVar16 + 0x130) = *(float *)((int)lVar16 + 0x130) * fVar4;
          lVar16 = lVar16 + 8;
          *(float *)((int)lVar20 + 4) = *(float *)((int)lVar20 + 4) * fVar5;
          lVar20 = lVar20 + 8;
          lVar26 = lVar26 + -1;
        } while (lVar26 != 0);
        lVar20 = 2;
        lVar16 = lVar17;
        do {
          iVar18 = (int)lVar16;
          iVar10 = (int)lVar22;
          lVar16 = lVar16 + 0x10;
          lVar22 = lVar22 + 0x10;
          dVar27 = (double)((float)(dVar27 + (double)*(float *)(iVar18 + 0x130)) +
                            *(float *)(iVar10 + 4) + *(float *)(iVar10 + 8) +
                           *(float *)(iVar10 + 0xc));
          lVar20 = lVar20 + -1;
        } while (lVar20 != 0);
        dVar27 = (double)((float)(dVar27 + 0.7853981852531433) * fVar7 + fVar3);
      }
      OrganicDeltAngSpeed
                (dVar27,0x3f947ae140000000,0x3fd3333340000000,0x3fb99999a0000000,moby,&DAT_00323b90,
                 uVar25 + 0x114);
      if ((moby->updateId == moby->animationId) &&
         (dVar27 = (double)BlendAnimFrame(moby), 16.0 <= dVar27)) {
        dVar27 = (double)BlendAnimFrame(moby);
        fVar4 = (moby->rotation).z;
        if ((dVar27 < 21.0) && (ABS((moby->pos).z - g_heroPosition.z) < 2.0)) {
          fVar3 = (moby->pos).y;
          fVar7 = (moby->pos).x;
          fVar5 = fVar3 - g_heroPosition.y;
          fVar6 = fVar7 - g_heroPosition.x;
          if (SQRT(fVar6 * fVar6 + fVar5 * fVar5) < 5.0) {
            fVar7 = g_heroPosition.x - fVar7;
            fVar3 = g_heroPosition.y - fVar3;
            dVar29 = ABS((double)fVar7);
            dVar30 = ABS((double)fVar3);
            *(float *)(puVar9 + 0x16) = fVar7;
            *(float *)((int)puVar9 + 0xb4) = fVar3;
            *(float *)(puVar9 + 0x17) = (float)(dVar29 - dVar30);
            uVar15 = (ulonglong)(*(uint *)(puVar9 + 0x16) >> 0x1c) & 8 |
                     (ulonglong)(*(uint *)(puVar9 + 0x17) >> 0x1e) & 2 |
                     (ulonglong)(*(uint *)((int)puVar9 + 0xb4) >> 0x1d) & 4;
            dVar27 = ABS((double)*(float *)(puVar9 + 0x16));
            if ((double)*(float *)(puVar9 + 0x17) - dVar28 < 0.0) {
              dVar27 = dVar30;
            }
            fVar3 = *(float *)(&g_atanQuadrantTable + (int)(uVar15 << 2));
            dVar30 = ABS((double)*(float *)((int)puVar9 + 0xb4));
            if ((double)*(float *)(puVar9 + 0x17) - dVar28 < 0.0) {
              dVar30 = dVar29;
            }
            fVar7 = *(float *)(((uint)(uVar15 << 2) | 0x735900) + 4);
            if (dVar28 < dVar27) {
              lVar16 = uVar14 - 0x230;
              lVar20 = uVar14 - 0x130;
              lVar22 = uVar14 - 0x120;
              lVar26 = 2;
              fVar5 = (float)(dVar30 - dVar27) / (float)(dVar30 + dVar27);
              fVar6 = fVar5 * fVar5;
              *(float *)((int)puVar9 + 0x11c) = fVar5;
              *(float *)((int)puVar9 + 0x114) = fVar5;
              *(float *)(puVar9 + 0x23) = fVar5;
              *(float *)(puVar9 + 0x22) = fVar5;
              fVar5 = fVar6 * fVar6;
              *(float *)((int)puVar9 + 0x114) = *(float *)((int)puVar9 + 0x114) * fVar6;
              *(float *)(puVar9 + 0x23) = *(float *)(puVar9 + 0x23) * fVar5;
              *(float *)((int)puVar9 + 0x11c) = *(float *)((int)puVar9 + 0x11c) * fVar5 * fVar6;
              do {
                *(float *)((int)lVar16 + 0x110) = *(float *)((int)lVar16 + 0x100) * fVar5 * fVar5;
                iVar18 = (int)lVar20;
                lVar16 = lVar16 + 8;
                lVar20 = lVar20 + 8;
                *(float *)((int)lVar22 + 4) = *(float *)(iVar18 + 4) * fVar5 * fVar5;
                lVar22 = lVar22 + 8;
                lVar26 = lVar26 + -1;
              } while (lVar26 != 0);
              lVar26 = 4;
              lVar22 = uVar14 - 0x130;
              pfVar21 = (float *)&DAT_007358e0;
              lVar16 = lVar17;
              lVar20 = lVar22;
              do {
                fVar5 = *pfVar21;
                fVar6 = pfVar21[1];
                pfVar21 = pfVar21 + 2;
                *(float *)((int)lVar16 + 0x110) = *(float *)((int)lVar16 + 0x110) * fVar5;
                lVar16 = lVar16 + 8;
                *(float *)((int)lVar20 + 4) = *(float *)((int)lVar20 + 4) * fVar6;
                lVar20 = lVar20 + 8;
                lVar26 = lVar26 + -1;
              } while (lVar26 != 0);
              lVar16 = 2;
              do {
                iVar18 = (int)lVar17;
                iVar10 = (int)lVar22;
                lVar17 = lVar17 + 0x10;
                lVar22 = lVar22 + 0x10;
                dVar28 = (double)((float)(dVar28 + (double)*(float *)(iVar18 + 0x110)) +
                                  *(float *)(iVar10 + 4) + *(float *)(iVar10 + 8) +
                                 *(float *)(iVar10 + 0xc));
                lVar16 = lVar16 + -1;
              } while (lVar16 != 0);
              dVar28 = (double)((float)(dVar28 + 0.7853981852531433) * fVar3 + fVar7);
            }
            dVar28 = (double)FastSubRots((float)dVar28,fVar4);
            victim = g_heroMobyPtr;
            if (dVar28 < 0.2617993950843811) {
              fVar4 = (moby->rotation).z;
              fVar3 = fVar4 + 1.5707963;
              fVar7 = 3.1415925 - fVar4;
              if (fVar4 - (3.1415925 - fVar4) < 0.0) {
                fVar7 = fVar4;
              }
              fVar5 = 3.1415925 - fVar3;
              if (fVar3 - (3.1415925 - fVar3) < 0.0) {
                fVar5 = fVar3;
              }
              fVar6 = -3.1415925 - fVar4;
              if ((-3.1415925 - fVar4) - fVar7 < 0.0) {
                fVar6 = fVar7;
              }
              fVar4 = -3.1415925 - fVar3;
              if ((-3.1415925 - fVar3) - fVar5 < 0.0) {
                fVar4 = fVar5;
              }
              fVar3 = fVar6 * fVar6;
              fVar7 = fVar4 * fVar4;
              fVar12 = fVar3 * fVar3 * fVar6;
              *(undefined4 *)(puVar9 + 0x13) = 0;
              fVar5 = fVar7 * fVar7 * fVar4;
              fVar13 = fVar3 * fVar12;
              fVar11 = fVar7 * fVar5;
              *(float *)((int)puVar9 + 0x94) =
                   (fVar3 * fVar13 * 2.601887e-06 +
                   fVar13 * -0.0001980741 +
                   fVar12 * 0.0083330255 + fVar3 * fVar6 * -0.16666657 + fVar6) * 0.2;
              *(float *)(puVar9 + 0x12) =
                   (fVar7 * fVar11 * 2.601887e-06 +
                   fVar11 * -0.0001980741 +
                   fVar5 * 0.0083330255 + fVar7 * fVar4 * -0.16666657 + fVar4) * 0.2;
              *(f32 *)(puVar9 + 0x14) = (victim->pos).x;
              *(f32 *)((int)puVar9 + 0xa4) = (victim->pos).y;
              fVar4 = (victim->pos).z;
              *(float *)(puVar9 + 0x15) = fVar4;
              *(f32 *)((int)puVar9 + 0xac) = (victim->pos).w;
              *(float *)(puVar9 + 0x15) = fVar4 + 0.75;
              CollDamageMobyDirect
                        (1.0,victim,moby,1,0x323b90,(float *)(puVar9 + 0x14),
                         (float *)(puVar9 + 0x12));
            }
          }
        }
      }
      if (((moby->field43_0x70 & 2U) != 0) && (moby->state = '\x01', moby->animationId != '\x01')) {
        MB_SetAnimation(moby,1,0,3);
      }
    }
  }
  else if (bVar1 < 8) {
    if (bVar1 < 6) {
      uVar19 = MB_UpdateKick(moby,(KickVars *)(pfVar21 + 0x14));
      uVar2 = moby->animationId;
      if ((uVar19 & 1) != 0) {
        fVar3 = (moby->pos).y - g_heroPosition.y;
        fVar7 = (moby->pos).x - g_heroPosition.x;
        fVar4 = (moby->pos).z;
        fVar3 = SQRT(fVar7 * fVar7 + fVar3 * fVar3);
        if (((fVar3 < 5.0) && (ABS(fVar4 - g_heroPosition.z) < 4.0)) && (pfVar21[0x4a] == 0.0)) {
          moby->state = '\x04';
          if (uVar2 == '\x02') {
            return;
          }
          MB_SetAnimation(moby,2,5,3);
          return;
        }
        if (((fVar3 < 8.0) && (ABS(fVar4 - g_heroPosition.z) < 4.0)) && (pfVar21[0x4a] == 0.0)) {
          moby->state = '\x02';
          if (uVar2 == '\0') {
            return;
          }
          MB_SetAnimation(moby,0,5,3);
          return;
        }
        moby->state = '\x01';
        if (uVar2 == '\x01') {
          return;
        }
        MB_SetAnimation(moby,1,5,3);
        return;
      }
      if ((int)(moby->pos).z < 0) {
        DeleteMoby(moby);
        return;
      }
    }
    else if (bVar1 < 7) {
      uVar19 = MB_UpdateKick(moby,(KickVars *)(pfVar21 + 0x14));
      uVar2 = moby->animationId;
      if ((uVar19 & 0x40) != 0) {
        fVar3 = (moby->pos).y - g_heroPosition.y;
        fVar7 = (moby->pos).x - g_heroPosition.x;
        fVar4 = (moby->pos).z;
        fVar3 = SQRT(fVar7 * fVar7 + fVar3 * fVar3);
        if (((fVar3 < 5.0) && (ABS(fVar4 - g_heroPosition.z) < 4.0)) && (pfVar21[0x4a] == 0.0)) {
          moby->state = '\x04';
          if (uVar2 == '\x02') {
            return;
          }
          MB_SetAnimation(moby,2,5,3);
          return;
        }
        if (((fVar3 < 8.0) && (ABS(fVar4 - g_heroPosition.z) < 4.0)) && (pfVar21[0x4a] == 0.0)) {
          moby->state = '\x02';
          if (uVar2 == '\0') {
            return;
          }
          MB_SetAnimation(moby,0,5,3);
          return;
        }
        moby->state = '\x01';
        if (uVar2 == '\x01') {
          return;
        }
        MB_SetAnimation(moby,1,5,3);
        return;
      }
      if ((int)(moby->pos).z < 0) {
        DeleteMoby(moby);
        return;
      }
    }
    else {
      uVar19 = MB_UpdateKick(moby,(KickVars *)(pfVar21 + 0x14));
      if ((uVar19 & 0x40) == 0) {
        if ((int)(moby->pos).z < 0) {
          DeleteMoby(moby);
          return;
        }
      }
      else {
        moby->state = '\b';
        if (moby->animationId != '\x01') {
          MB_SetAnimation(moby,1,0,3);
        }
      }
    }
  }
  else if (bVar1 < 9) {
    dVar28 = (double)BlendAnimFrame(moby);
    uVar2 = moby->animationId;
    if (dVar28 == 20.0) {
      fVar3 = (moby->pos).y - g_heroPosition.y;
      fVar7 = (moby->pos).x - g_heroPosition.x;
      fVar4 = (moby->pos).z;
      fVar3 = SQRT(fVar7 * fVar7 + fVar3 * fVar3);
      if (((fVar3 < 5.0) && (ABS(fVar4 - g_heroPosition.z) < 4.0)) && (pfVar21[0x4a] == 0.0)) {
        moby->state = '\x04';
        if (uVar2 == '\x02') {
          return;
        }
        MB_SetAnimation(moby,2,5,3);
        return;
      }
      if (((fVar3 < 8.0) && (ABS(fVar4 - g_heroPosition.z) < 4.0)) && (pfVar21[0x4a] == 0.0)) {
        moby->state = '\x02';
        if (uVar2 == '\0') {
          return;
        }
        MB_SetAnimation(moby,0,5,3);
        return;
      }
      moby->state = '\x01';
      if (uVar2 == '\x01') {
        return;
      }
      MB_SetAnimation(moby,1,5,3);
      return;
    }
  }
  else if (bVar1 < 10) {
    uVar19 = MB_UpdateKick(moby,(KickVars *)(pfVar21 + 0x14));
    if ((uVar19 & 0x40) != 0) {
      DeleteMoby(moby);
      return;
    }
    if ((int)(moby->pos).z < 0) {
      DeleteMoby(moby);
      return;
    }
  }
  MB_ColorDyingMoby(moby,uVar25 + 0x40);
  return;
}


