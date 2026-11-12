// game/update/moby248.cpp -- reconstructed from NPEA00385 EBOOT
// STATUS: NOT STARTED (raw Ghidra output)
// 3 functions, 0x315160-0x316008
#include "game/update/moby248.h"
#include "game/collproc.h"
#include "game/hero.h"
#include "game/mobyfunc.h"
#include "game/mobyproc.h"
#include "game/mobyutil.h"
#include "game/partupd.h"
#include "game/sound.h"
#include "idol/fastfunc.h"

// 0x0315160 (0x14 bytes)
void M248_00315160(void)

{
  DAT_007ffa64 = 0x10000;
  return;
}


// 0x0315198 (0x2e8 bytes)
// inlined: FastAtan2 @0x315330
MobyInstance * FUN_00315198(undefined4 param_1,f32 *param_2,float *param_3)

{
  float fVar1;
  float fVar2;
  float fVar3;
  void *pvVar4;
  float fVar5;
  float fVar6;
  undefined4 uVar7;
  ulonglong *puVar8;
  int iVar9;
  int iVar10;
  ulonglong uVar11;
  MobyInstance *pMVar13;
  longlong lVar12;
  ulonglong uVar14;
  longlong lVar15;
  longlong lVar16;
  longlong lVar17;
  float *pfVar18;
  ulonglong unaff_r27;
  ulonglong unaff_r28;
  ulonglong unaff_r29;
  ulonglong unaff_r30;
  ulonglong unaff_r31;
  ulonglong in_LR;
  longlong lVar19;
  double dVar20;
  GPiece<16> auVar21;
  GPiece<16> auVar22;
  GPiece<16> auVar23;
  
  uVar11 = ZEXT48(&stack0x00000000);
  lVar12 = uVar11 - 0xc0;
  puVar8 = (ulonglong *)lVar12;
  *puVar8 = uVar11;
  puVar8[0x1a] = in_LR;
  puVar8[0x14] = unaff_r28;
  puVar8[0x16] = unaff_r30;
  puVar8[0x15] = unaff_r29;
  puVar8[0x17] = unaff_r31;
  puVar8[0x13] = unaff_r27;
  pMVar13 = CreateMoby(BOMB_00F8);
  if (pMVar13 != (MobyInstance *)0x0) {
    pvVar4 = pMVar13->pVar;
    auVar21 = ZEXT416(0xffffffff);
    auVar22 = auVar21 | auVar21 << 0x20 | auVar21 << 0x40 | auVar21 << 0x60;
    pMVar13->updateDistance = -1;
    pMVar13->drawDistance = 0xff;
    pMVar13->enabled = '\x01';
    pMVar13->state = '\x01';
    *(undefined4 *)((int)pvVar4 + 0x30) = param_1;
    auVar21 = loadVectorLeftIndexed(in_LR,0x315178);
    auVar22 = vectorShiftLeftIntegerWord(auVar22,auVar22);
    auVar21 = auVar21 >> 0x60 & (GPiece<16>)0xffffffff;
    auVar23 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
    auVar21 = vectorMultiplyAddFloatingPoint
                        (auVar23,auVar21 | auVar21 << 0x20 | auVar21 << 0x40 | auVar21 << 0x60,
                         auVar22);
    auVar21 = vectorConvertToSignedFixedPointWordSaturate(auVar21,0);
    auVar21 = auVar21 >> 0x60 & (GPiece<16>)0xffffffff;
    uVar7 = storeVectorElementWordIndexed
                      (auVar21 | auVar21 << 0x20 | auVar21 << 0x40 | auVar21 << 0x60,0x20,
                       ZEXT48(pvVar4));
    *(undefined4 *)((int)pvVar4 + 0x20U & 0xfffffffc) = uVar7;
    *(undefined4 *)((int)pvVar4 + 0x24) = 0;
    *(undefined4 *)((int)pvVar4 + 0x2c) = 0x3f800000;
    (pMVar13->pos).x = *param_2;
    (pMVar13->pos).y = param_2[1];
    (pMVar13->pos).z = param_2[2];
    (pMVar13->pos).w = param_2[3];
    *(float *)((int)pvVar4 + 0x10) = *param_3;
    *(float *)((int)pvVar4 + 0x14) = param_3[1];
    *(float *)((int)pvVar4 + 0x18) = param_3[2];
    *(float *)((int)pvVar4 + 0x1c) = param_3[3];
    dVar20 = (double)MB_randRangeFloat(-180.0,180.0);
    (pMVar13->rotation).x = (float)(dVar20 * 0.01745329238474369);
    fVar5 = *param_3;
    fVar6 = param_3[1];
    fVar2 = ABS(*param_3);
    fVar3 = ABS(param_3[1]);
    *(float *)(puVar8 + 0xe) = fVar2 - fVar3;
    fVar1 = 0.0;
    uVar14 = (ulonglong)((uint)fVar5 >> 0x1c) & 8 |
             (ulonglong)(*(uint *)(puVar8 + 0xe) >> 0x1e) & 2 | (ulonglong)((uint)fVar6 >> 0x1d) & 4
    ;
    fVar5 = fVar2;
    if (*(float *)(puVar8 + 0xe) - 0.0 < 0.0) {
      fVar5 = fVar3;
    }
    fVar6 = *(float *)(&g_atanQuadrantTable + (int)(uVar14 << 2));
    if (*(float *)(puVar8 + 0xe) - 0.0 < 0.0) {
      fVar3 = fVar2;
    }
    fVar2 = *(float *)(((uint)(uVar14 << 2) | 0x735900) + 4);
    if (0.0 < fVar5) {
      lVar17 = uVar11 - 0xb0;
      lVar16 = uVar11 - 0x4c;
      lVar15 = uVar11 - 0x3c;
      lVar19 = 2;
      fVar5 = (fVar3 - fVar5) / (fVar3 + fVar5);
      fVar3 = fVar5 * fVar5;
      *(float *)(puVar8 + 0x10) = fVar5;
      *(float *)(puVar8 + 0xf) = fVar5;
      *(float *)((int)puVar8 + 0x7c) = fVar5;
      *(float *)((int)puVar8 + 0x74) = fVar5;
      fVar5 = fVar3 * fVar3;
      *(float *)(puVar8 + 0xf) = *(float *)(puVar8 + 0xf) * fVar3;
      *(float *)((int)puVar8 + 0x7c) = *(float *)((int)puVar8 + 0x7c) * fVar5;
      *(float *)(puVar8 + 0x10) = *(float *)(puVar8 + 0x10) * fVar5 * fVar3;
      do {
        *(float *)((int)lVar17 + 0x74) = *(float *)((int)lVar17 + 100) * fVar5 * fVar5;
        iVar9 = (int)lVar16;
        lVar17 = lVar17 + 8;
        lVar16 = lVar16 + 8;
        *(float *)((int)lVar15 + 4) = *(float *)(iVar9 + 4) * fVar5 * fVar5;
        lVar15 = lVar15 + 8;
        lVar19 = lVar19 + -1;
      } while (lVar19 != 0);
      lVar17 = uVar11 - 0x4c;
      pfVar18 = (float *)&DAT_007358e0;
      lVar19 = 4;
      lVar15 = lVar17;
      lVar16 = lVar12;
      do {
        fVar5 = *pfVar18;
        fVar3 = pfVar18[1];
        pfVar18 = pfVar18 + 2;
        *(float *)((int)lVar16 + 0x74) = *(float *)((int)lVar16 + 0x74) * fVar5;
        lVar16 = lVar16 + 8;
        *(float *)((int)lVar15 + 4) = *(float *)((int)lVar15 + 4) * fVar3;
        lVar15 = lVar15 + 8;
        lVar19 = lVar19 + -1;
      } while (lVar19 != 0);
      lVar15 = 2;
      do {
        iVar9 = (int)lVar12;
        lVar12 = lVar12 + 0x10;
        iVar10 = (int)lVar17;
        lVar17 = lVar17 + 0x10;
        fVar1 = fVar1 + *(float *)(iVar9 + 0x74) + *(float *)(iVar10 + 4) + *(float *)(iVar10 + 8) +
                *(float *)(iVar10 + 0xc);
        lVar15 = lVar15 + -1;
      } while (lVar15 != 0);
      fVar1 = (fVar1 + 0.7853982) * fVar6 + fVar2;
    }
    (pMVar13->rotation).z = fVar1 + 1.5707964;
    UpdateMobyTransform(pMVar13);
  }
  return pMVar13;
}


// 0x03154d8 (0xb30 bytes)
/* Moby 248 */

void UpdateMoby_248(MobyInstance *moby)

{
  u8 uVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  void *pvVar6;
  undefined4 uVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  longlong lVar12;
  int iVar14;
  longlong lVar13;
  ulonglong uVar15;
  double dVar16;
  double dVar17;
  double dVar18;
  double dVar19;
  double dVar20;
  double dVar21;
  double dVar22;
  double dVar23;
  undefined8 uVar24;
  double dVar25;
  undefined8 uVar26;
  GPiece<16> auVar27;
  GPiece<16> auVar28;
  GPiece<16> auVar29;
  GPiece<16> auVar30;
  GPiece<16> auVar31;
  GPiece<16> auVar32;
  GPiece<16> auVar33;
  GPiece<16> auVar34;
  GPiece<16> local_f0;
  GPiece<16> local_e0;
  GPiece<16> local_d0;
  GPiece<48> local_c0;
  GPiece<48> local_90;
  undefined4 local_60 [4];
  longlong local_50;
  
  lVar12 = (longlong)(int)moby;
  pvVar6 = moby->pVar;
  uVar15 = ZEXT48(pvVar6);
  if ((((moby->state != '7') &&
       (iVar14 = CollSphere(0x3fe0000000000000,lVar12 + 0x10,&DAT_00315480,0x11,lVar12),
       iVar14 != 0)) && (g_CollOutput.pMoby != (MobyInstance *)0x0)) &&
     ((g_CollOutput.pMoby != *(MobyInstance **)((int)pvVar6 + 0x30) ||
      (*(int *)((int)pvVar6 + 0x24) != 0)))) {
    moby->state = (char)(ZERO_MASK(((byte)moby->setByGroup & 2))) + 'c';
    (moby->pos).x = g_CollOutput.ip.x;
    (moby->pos).y = g_CollOutput.ip.y;
    (moby->pos).z = g_CollOutput.ip.z;
    (moby->pos).w = g_CollOutput.ip.w;
    FastVecReflect(uVar15 + 0x10,uVar15 + 0x10,0xa10980);
    fVar2 = *(float *)((int)pvVar6 + 0x14);
    fVar3 = *(float *)((int)pvVar6 + 0x10);
    fVar4 = *(float *)((int)pvVar6 + 0x18);
    fVar5 = 0.0;
    fVar11 = SQRT(fVar4 * fVar4 + fVar3 * fVar3 + fVar2 * fVar2);
    fVar8 = (g_FrameTime * 2.0) / fVar11;
    fVar10 = fVar5;
    if (0.0 - fVar11 < 0.0) {
      fVar10 = fVar3 * fVar8;
    }
    fVar9 = fVar5;
    if (0.0 - fVar11 < 0.0) {
      fVar9 = fVar2 * fVar8;
    }
    if (0.0 - fVar11 < 0.0) {
      fVar5 = fVar4 * fVar8;
    }
    if (fVar11 - 0.0 < 0.0) {
      fVar10 = fVar3 * fVar8;
    }
    if (fVar11 - 0.0 < 0.0) {
      fVar9 = fVar2 * fVar8;
    }
    if (fVar11 - 0.0 < 0.0) {
      fVar5 = fVar4 * fVar8;
    }
    *(float *)((int)pvVar6 + 0x10) = fVar10;
    *(float *)((int)pvVar6 + 0x14) = fVar9;
    *(float *)((int)pvVar6 + 0x18) = fVar5;
  }
  uVar1 = moby->state;
  if (uVar1 == 'c') {
    PlayMobySound(0,0,moby);
    CollMobySphere(0x3ff0000000000000,lVar12 + 0x10,0x3f800000,0x10,lVar12,local_90);
    MB_SpawnExplosionSparks(0x3fe0000000000000,0x402a000000000000,lVar12,lVar12 + 0x10);
    DeleteMoby(moby);
  }
  else if (uVar1 == 'b') {
    PlayMobySound(0,0,moby);
    uVar26 = 0x3ff0000000000000;
    uVar24 = 0;
    CollMobySphere(0x3ff0000000000000,lVar12 + 0x10,0x3f800000,0x10,lVar12,local_c0);
    MB_genericExplosion
              (uVar24,uVar24,0x4008000000000000,0x3ffb333340000000,0x4010000000000000,uVar26,
               0x401c000000000000,lVar12,&DAT_00a15d30,0,7,0xffffffffffffffff,7,10,0x14);
    DeleteMoby(moby);
  }
  else {
    if (uVar1 == '\x02') {
      iVar14 = FastDecTimerS32(uVar15 + 0x20);
      if (iVar14 == 0) {
        iVar14 = *(int *)((int)pvVar6 + 0x20);
        local_50 = (longlong)(int)(animationSpeed * 60.5);
        if (((iVar14 == (int)(animationSpeed * 60.5)) ||
            (local_50 = (longlong)(int)(animationSpeed * 40.5),
            iVar14 == (int)(animationSpeed * 40.5))) ||
           (local_50 = (longlong)(int)(animationSpeed * 20.5),
           iVar14 == (int)(animationSpeed * 20.5))) {
          *(undefined1 *)((int)pvVar6 + 7) = 0xfa;
          MB_UpdateLightsTransition(lVar12,uVar15);
        }
      }
      else {
        moby->state = 'c';
      }
      MB_ColorDyingMoby(lVar12,uVar15);
    }
    else if (uVar1 == '\x01') {
      dVar16 = (double)FastWrapRot
                                 ((moby->rotation).x,
                                  SQRT(*(float *)((int)pvVar6 + 0x18) *
                                       *(float *)((int)pvVar6 + 0x18) +
                                       *(float *)((int)pvVar6 + 0x10) *
                                       *(float *)((int)pvVar6 + 0x10) +
                                       *(float *)((int)pvVar6 + 0x14) *
                                       *(float *)((int)pvVar6 + 0x14)) * 0.5);
      iVar14 = *(int *)((int)pvVar6 + 0x24);
      (moby->rotation).x = (float)dVar16;
      if (iVar14 == 0) {
        local_60[0] = 0x2fffffff;
        local_60[3] = 0x2f004fff;
        local_60[1] = 0x2f00ffff;
        local_60[2] = 0x2f007fff;
        dVar23 = -1.0;
        dVar16 = 1.0;
        MB_randRangeFloat(-1.0,1.0);
        MB_randRangeFloat((float)dVar23,(float)dVar16);
        MB_randRangeFloat((float)dVar23,(float)dVar16);
        lVar13 = MB_randInt(4);
        local_50 = (longlong)(int)(animationSpeed * 45.5);
        SpawnPart_4
                  (lVar12 + 0x10,local_d0,*(undefined4 *)((int)local_60 + (int)(lVar13 << 2)),0x4fff
                   ,(int)(animationSpeed * 45.5),0x32,0x78,1);
      }
      dVar16 = 0.1599999964237213;
      (moby->pos).x = (moby->pos).x + *(float *)((int)pvVar6 + 0x10);
      (moby->pos).y = (moby->pos).y + *(float *)((int)pvVar6 + 0x14);
      (moby->pos).z = (moby->pos).z + *(float *)((int)pvVar6 + 0x18);
      *(float *)((int)pvVar6 + 0x18) =
           -(DAT_007ffa88 * g_FrameTimeSq - *(float *)((int)pvVar6 + 0x18));
      iVar14 = CollLine(local_f0,local_e0,0,lVar12,0);
      if (iVar14 == 0) {
        iVar14 = FastDecTimerS32(uVar15 + 0x20);
        if (iVar14 != 0) {
          moby->state = (char)(ZERO_MASK(((byte)moby->setByGroup & 2))) + 'c';
        }
      }
      else if (g_CollOutput.pMoby == (MobyInstance *)0x0) {
        if (0 < g_CollOutput.poly) {
          if ((moby->setByGroup & 1U) == 0) {
            moby->state = 'b';
            (moby->pos).x = g_CollOutput.ip.x;
            (moby->pos).y = g_CollOutput.ip.y;
            (moby->pos).z = g_CollOutput.ip.z;
            (moby->pos).w = g_CollOutput.ip.w;
            FastVecReflect(uVar15 + 0x10,uVar15 + 0x10,0xa10980);
            fVar2 = *(float *)((int)pvVar6 + 0x14);
            fVar3 = *(float *)((int)pvVar6 + 0x10);
            fVar4 = *(float *)((int)pvVar6 + 0x18);
            fVar5 = 0.0;
            fVar11 = SQRT(fVar4 * fVar4 + fVar3 * fVar3 + fVar2 * fVar2);
            fVar8 = (g_FrameTime * 2.0) / fVar11;
            fVar10 = fVar5;
            if (0.0 - fVar11 < 0.0) {
              fVar10 = fVar3 * fVar8;
            }
            fVar9 = fVar5;
            if (0.0 - fVar11 < 0.0) {
              fVar9 = fVar2 * fVar8;
            }
            if (0.0 - fVar11 < 0.0) {
              fVar5 = fVar4 * fVar8;
            }
            if (fVar11 - 0.0 < 0.0) {
              fVar10 = fVar3 * fVar8;
            }
            if (fVar11 - 0.0 < 0.0) {
              fVar9 = fVar2 * fVar8;
            }
            if (fVar11 - 0.0 < 0.0) {
              fVar5 = fVar4 * fVar8;
            }
            *(float *)((int)pvVar6 + 0x10) = fVar10;
            *(float *)((int)pvVar6 + 0x14) = fVar9;
            *(float *)((int)pvVar6 + 0x18) = fVar5;
          }
          else {
            PlayMobySound(1,0,moby);
            (moby->pos).x = g_CollOutput.ip.x;
            (moby->pos).y = g_CollOutput.ip.y;
            dVar23 = (double)g_CollOutput.ip.z;
            (moby->pos).w = g_CollOutput.ip.w;
            (moby->pos).z = (float)(dVar23 + dVar16);
            FastVecReflect(uVar15 + 0x10,uVar15 + 0x10,0xa10980);
            dVar20 = 0.0;
            dVar25 = (double)(g_CollOutput.normal.z * *(float *)((int)pvVar6 + 0x10) -
                             g_CollOutput.normal.x * *(float *)((int)pvVar6 + 0x18));
            dVar22 = (double)(g_CollOutput.normal.y * *(float *)((int)pvVar6 + 0x18) -
                             g_CollOutput.normal.z * *(float *)((int)pvVar6 + 0x14));
            dVar21 = (double)(g_CollOutput.normal.x * *(float *)((int)pvVar6 + 0x14) -
                             g_CollOutput.normal.y * *(float *)((int)pvVar6 + 0x10));
            dVar16 = (double)MB_randRangeFloat
                                       (g_FrameTime * -1.5,g_FrameTime * 1.5);
            fVar2 = g_FrameTime;
            auVar27 = ZEXT416(0xffffffff);
            auVar27 = auVar27 | auVar27 << 0x20 | auVar27 << 0x40 | auVar27 << 0x60;
            dVar18 = (double)SQRT((float)(dVar21 * dVar21 +
                                         (double)(float)(dVar22 * dVar22 +
                                                        (double)(float)(dVar25 * dVar25))));
            *(int *)((int)pvVar6 + 0x24) = *(int *)((int)pvVar6 + 0x24) + 1;
            auVar27 = vectorShiftLeftIntegerWord(auVar27,auVar27);
            dVar23 = (double)(float)(dVar16 / dVar18);
            dVar16 = dVar20;
            if (dVar20 - dVar18 < 0.0) {
              dVar16 = (double)(float)(dVar25 * dVar23);
            }
            dVar19 = dVar20;
            if (dVar20 - dVar18 < 0.0) {
              dVar19 = (double)(float)(dVar22 * dVar23);
            }
            dVar17 = dVar20;
            if (dVar20 - dVar18 < 0.0) {
              dVar17 = (double)(float)(dVar21 * dVar23);
            }
            if (dVar18 - dVar20 < 0.0) {
              dVar16 = (double)(float)(dVar25 * dVar23);
            }
            if (dVar18 - dVar20 < 0.0) {
              dVar19 = (double)(float)(dVar22 * dVar23);
            }
            if (dVar18 - dVar20 < 0.0) {
              dVar17 = (double)(float)(dVar21 * dVar23);
            }
            fVar3 = (float)((double)*(float *)((int)pvVar6 + 0x14) + dVar16) * 0.4;
            fVar4 = (float)((double)*(float *)((int)pvVar6 + 0x10) + dVar19) * 0.4;
            fVar5 = (float)((double)*(float *)((int)pvVar6 + 0x18) + dVar17) * 0.4;
            *(float *)((int)pvVar6 + 0x14) = fVar3;
            *(float *)((int)pvVar6 + 0x10) = fVar4;
            *(float *)((int)pvVar6 + 0x18) = fVar5;
            auVar28 = loadVectorLeftIndexed(0x28,0x315480);
            auVar30 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
            auVar28 = auVar28 >> 0x60 & (GPiece<16>)0xffffffff;
            auVar27 = vectorMultiplyAddFloatingPoint
                                (auVar30,auVar28 | auVar28 << 0x20 | auVar28 << 0x40 |
                                         auVar28 << 0x60,auVar27);
            auVar27 = vectorConvertToSignedFixedPointWordSaturate(auVar27,0);
            auVar27 = auVar27 >> 0x60 & (GPiece<16>)0xffffffff;
            uVar7 = storeVectorElementWordIndexed
                              (auVar27 | auVar27 << 0x20 | auVar27 << 0x40 | auVar27 << 0x60,0x20,
                               uVar15);
            *(undefined4 *)((int)pvVar6 + 0x20U & 0xfffffffc) = uVar7;
            if (SQRT(fVar5 * fVar5 + fVar4 * fVar4 + fVar3 * fVar3) < fVar2) {
              auVar27 = ZEXT416(0xffffffff);
              auVar27 = auVar27 | auVar27 << 0x20 | auVar27 << 0x40 | auVar27 << 0x60;
              moby->state = '\x02';
              auVar28 = vectorShiftLeftIntegerWord(auVar27,auVar27);
              auVar27 = loadVectorLeftIndexed(0x2c,0x315480);
              auVar27 = auVar27 >> 0x60 & (GPiece<16>)0xffffffff;
              auVar30 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
              auVar28 = vectorMultiplyAddFloatingPoint
                                  (auVar30,auVar27 | auVar27 << 0x20 | auVar27 << 0x40 |
                                           auVar27 << 0x60,auVar28);
              auVar27 = ZEXT416(0xffffffff);
              auVar30 = auVar27 | auVar27 << 0x20 | auVar27 << 0x40 | auVar27 << 0x60;
              auVar27 = ZEXT416(0xffffffff);
              auVar31 = auVar27 | auVar27 << 0x20 | auVar27 << 0x40 | auVar27 << 0x60;
              auVar27 = ZEXT416(0xffffffff);
              auVar27 = auVar27 | auVar27 << 0x20 | auVar27 << 0x40 | auVar27 << 0x60;
              auVar29 = vectorShiftLeftIntegerWord(auVar30,auVar30);
              auVar32 = vectorShiftLeftIntegerWord(auVar31,auVar31);
              auVar34 = vectorShiftLeftIntegerWord(auVar27,auVar27);
              auVar27 = vectorConvertToSignedFixedPointWordSaturate(auVar28,0);
              auVar31 = vectorConvertFromSignedFixedPointWord(auVar27,0);
              auVar27 = auVar27 >> 0x60 & (GPiece<16>)0xffffffff;
              uVar7 = storeVectorElementWordIndexed
                                (auVar27 | auVar27 << 0x20 | auVar27 << 0x40 | auVar27 << 0x60,0x20,
                                 uVar15);
              *(undefined4 *)((int)pvVar6 + 0x20U & 0xfffffffc) = uVar7;
              auVar27 = loadVectorLeftIndexed(4,0x315480);
              auVar27 = auVar27 >> 0x60 & (GPiece<16>)0xffffffff;
              auVar30 = auVar27 | auVar27 << 0x20 | auVar27 << 0x40 | auVar27 << 0x60;
              auVar27 = vectorReciprocalEstimateFloatingPoint(auVar31);
              auVar28 = loadVectorLeftIndexed(0x30,0x315480);
              auVar28 = auVar28 >> 0x60 & (GPiece<16>)0xffffffff;
              auVar33 = vectorNegativeMultiplySubtractFloatingPoint(auVar27,auVar31,auVar30);
              auVar29 = vectorMultiplyAddFloatingPoint(auVar27,auVar33,auVar29);
              auVar27 = ZEXT416(0xffffffff);
              auVar27 = auVar27 | auVar27 << 0x20 | auVar27 << 0x40 | auVar27 << 0x60;
              auVar33 = vectorShiftLeftIntegerWord(auVar27,auVar27);
              auVar27 = vectorNegativeMultiplySubtractFloatingPoint(auVar29,auVar31,auVar30);
              auVar29 = vectorMultiplyAddFloatingPoint(auVar29,auVar27,auVar32);
              auVar27 = vectorNegativeMultiplySubtractFloatingPoint(auVar29,auVar31,auVar30);
              auVar27 = vectorMultiplyAddFloatingPoint(auVar29,auVar27,auVar34);
              auVar27 = vectorMultiplyAddFloatingPoint
                                  (auVar27,auVar28 | auVar28 << 0x20 | auVar28 << 0x40 |
                                           auVar28 << 0x60,auVar33);
              auVar27 = auVar27 >> 0x60 & (GPiece<16>)0xffffffff;
              uVar7 = storeVectorElementWordIndexed
                                (auVar27 | auVar27 << 0x20 | auVar27 << 0x40 | auVar27 << 0x60,0x28,
                                 uVar15);
              *(undefined4 *)((int)pvVar6 + 0x28U & 0xfffffffc) = uVar7;
              *(undefined4 *)((int)pvVar6 + 0x1c) = 0;
              *(undefined4 *)((int)pvVar6 + 0x18) = 0;
              *(undefined4 *)((int)pvVar6 + 0x14) = 0;
              *(undefined4 *)((int)pvVar6 + 0x10) = 0;
            }
          }
        }
      }
      else if ((g_CollOutput.pMoby != *(MobyInstance **)((int)pvVar6 + 0x30)) ||
              (*(int *)((int)pvVar6 + 0x24) != 0)) {
        moby->state = (char)(ZERO_MASK(((byte)moby->setByGroup & 2))) + 'c';
        (moby->pos).x = g_CollOutput.ip.x;
        (moby->pos).y = g_CollOutput.ip.y;
        (moby->pos).z = g_CollOutput.ip.z;
        (moby->pos).w = g_CollOutput.ip.w;
        FastVecReflect(uVar15 + 0x10,uVar15 + 0x10,0xa10980);
        fVar2 = *(float *)((int)pvVar6 + 0x14);
        fVar3 = *(float *)((int)pvVar6 + 0x10);
        fVar4 = *(float *)((int)pvVar6 + 0x18);
        fVar5 = 0.0;
        fVar11 = SQRT(fVar4 * fVar4 + fVar3 * fVar3 + fVar2 * fVar2);
        fVar8 = (g_FrameTime * 2.0) / fVar11;
        fVar10 = fVar5;
        if (0.0 - fVar11 < 0.0) {
          fVar10 = fVar3 * fVar8;
        }
        fVar9 = fVar5;
        if (0.0 - fVar11 < 0.0) {
          fVar9 = fVar2 * fVar8;
        }
        if (0.0 - fVar11 < 0.0) {
          fVar5 = fVar4 * fVar8;
        }
        if (fVar11 - 0.0 < 0.0) {
          fVar10 = fVar3 * fVar8;
        }
        if (fVar11 - 0.0 < 0.0) {
          fVar9 = fVar2 * fVar8;
        }
        if (fVar11 - 0.0 < 0.0) {
          fVar5 = fVar4 * fVar8;
        }
        *(float *)((int)pvVar6 + 0x10) = fVar10;
        *(float *)((int)pvVar6 + 0x14) = fVar9;
        *(float *)((int)pvVar6 + 0x18) = fVar5;
      }
    }
    MB_RegisterLameShadow(0.2,moby);
  }
  return;
}


