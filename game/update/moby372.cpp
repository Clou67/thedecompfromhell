// game/update/moby372.cpp -- reconstructed from NPEA00385 EBOOT
// STATUS: NOT STARTED (raw Ghidra output)
// 2 functions, 0x3552f0-0x356514
#include <stdlib.h>
#include "game/update/moby372.h"
#include "game/collproc.h"
#include "game/hero.h"
#include "game/mobyfunc.h"
#include "game/mobyutil.h"
#include "idol/fastfunc.h"
#include "idol/mathfunc.h"

// 0x03552f0 (0x14 bytes)
void M372_003552f0(void)

{
  DAT_008404e8 = 0x10000;
  return;
}


// 0x0355370 (0x11a4 bytes)
/* Moby 372 */

void UpdateMoby_372(MobyInstance *moby)

{
  byte bVar1;
  u8 uVar2;
  float fVar3;
  float fVar4;
  short sVar5;
  float *pfVar6;
  undefined4 uVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  int iVar14;
  uint uVar15;
  ulonglong uVar16;
  undefined8 uVar17;
  double dVar18;
  double dVar19;
  GPiece<16> auVar20;
  GPiece<16> auVar21;
  GPiece<16> auVar22;
  GPiece<16> local_b0;
  GPiece<16> local_a0;
  float local_90;
  float local_8c;
  undefined4 local_88;
  GPiece<16> auStack_80;
  float local_70;
  float local_6c;
  undefined4 local_68;
  f32 local_60;
  f32 local_5c;
  float local_58;
  f32 local_54;
  GPiece<16> auStack_50;
  MobyInstance *local_40;
  undefined4 local_3c;
  undefined4 local_30;
  
  pfVar6 = (float *)moby->pVar;
  uVar16 = ZEXT48(pfVar6);
  iVar14 = MB_damage(moby,0x210000,0);
  FastDecTimerS32(uVar16 + 0x184);
  if (((iVar14 != 0) && (moby->state != '\x05' && moby->state != 'c')) && (pfVar6[0x61] == 0.0)) {
    pfVar6[0x18] = 0.008;
    pfVar6[0x19] = 0.0005;
    fVar8 = DAT_0084051c;
    fVar4 = g_FrameTime;
    fVar3 = DAT_0084051c * g_FrameTime;
    pfVar6[0x1d] = 1.26117e-44;
    pfVar6[0x1a] = fVar3;
    fVar3 = DAT_00840518;
    *(undefined1 *)((int)pfVar6 + 0x8d) = 0;
    pfVar6[0x1b] = fVar3 * fVar4;
    fVar3 = *pfVar6 - *(float *)(iVar14 + 0x2c);
    *pfVar6 = fVar3;
    if (fVar3 <= 0.0) {
      moby->modeBits =
           moby->modeBits &
           (MIRROR|CAN_BE_DAMAGED|HIDE_BACKFACES|DISABLE_Z_WRITE|DRAW_SHADOW|DRAW_TRANSPARENT_WEIRD|
            LOCK_ROTATION|NO_DRAW|UNK_40|HAS_SPECIAL_VARS|HAS_GLOW|TRANSPARENT|NO_POST_UPDATE|
            NO_UPDATE|DISABLED);
      *(undefined1 *)((int)pfVar6 + 0x47) = 0xfa;
      FUN_005e8338((double)((moby->pos).x - g_heroPosition.x),
                   (double)((moby->pos).y - g_heroPosition.y));
      MB_StartKick(moby,uVar16 + 0x50);
      pfVar6[0x28] = 2.0;
      pfVar6[0x29] = 8.0;
      moby->state = 'c';
    }
    else {
      uVar15 = *(uint *)(iVar14 + 0x2c);
      if ((int)(FLOAT_ORDER(uVar15)) < 0x3f800000) {
        *(undefined1 *)((int)pfVar6 + 0x47) = 0x78;
      }
      else if (uVar15 == 0x3f800000) {
        sVar5 = *(short *)(*(int *)(iVar14 + 0x20) + 0xa6);
        if ((sVar5 == 0xb0) || (sVar5 == 0xb1)) {
          auVar20 = ZEXT416(0xffffffff);
          auVar20 = auVar20 | auVar20 << 0x20 | auVar20 << 0x40 | auVar20 << 0x60;
          *(undefined1 *)((int)pfVar6 + 0x47) = 0x78;
          auVar21 = vectorShiftLeftIntegerWord(auVar20,auVar20);
          auVar20 = loadVectorLeftIndexed(4,0x355308);
          auVar20 = auVar20 >> 0x60 & (GPiece<16>)0xffffffff;
          auVar22 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
          auVar20 = vectorMultiplyAddFloatingPoint
                              (auVar22,auVar20 | auVar20 << 0x20 | auVar20 << 0x40 | auVar20 << 0x60
                               ,auVar21);
          auVar20 = vectorConvertToSignedFixedPointWordSaturate(auVar20,0);
          auVar20 = auVar20 >> 0x60 & (GPiece<16>)0xffffffff;
          uVar7 = storeVectorElementWordIndexed
                            (auVar20 | auVar20 << 0x20 | auVar20 << 0x40 | auVar20 << 0x60,0x184,
                             uVar16);
          *(undefined4 *)((uint)(pfVar6 + 0x61) & 0xfffffffc) = uVar7;
        }
        else {
          *(undefined1 *)((int)pfVar6 + 0x47) = 0x78;
          FUN_005e8338((double)((moby->pos).x - g_heroPosition.x),
                       (double)((moby->pos).y - g_heroPosition.y));
          MB_StartKick(moby,uVar16 + 0x50);
          auVar20 = ZEXT416(0xffffffff);
          auVar20 = auVar20 | auVar20 << 0x20 | auVar20 << 0x40 | auVar20 << 0x60;
          pfVar6[0x28] = 4.0;
          auVar21 = vectorShiftLeftIntegerWord(auVar20,auVar20);
          pfVar6[0x29] = 9.0;
          moby->state = '\x05';
          auVar20 = loadVectorLeftIndexed(4,0x355308);
          auVar20 = auVar20 >> 0x60 & (GPiece<16>)0xffffffff;
          auVar22 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
          auVar20 = vectorMultiplyAddFloatingPoint
                              (auVar22,auVar20 | auVar20 << 0x20 | auVar20 << 0x40 | auVar20 << 0x60
                               ,auVar21);
          auVar20 = vectorConvertToSignedFixedPointWordSaturate(auVar20,0);
          auVar20 = auVar20 >> 0x60 & (GPiece<16>)0xffffffff;
          uVar7 = storeVectorElementWordIndexed
                            (auVar20 | auVar20 << 0x20 | auVar20 << 0x40 | auVar20 << 0x60,0x184,
                             uVar16);
          *(undefined4 *)((uint)(pfVar6 + 0x61) & 0xfffffffc) = uVar7;
        }
      }
      else {
        fVar4 = fVar8 * 2.0 * fVar4;
        if (uVar15 == 0x40000000) {
          auVar20 = ZEXT416(0xffffffff);
          auVar20 = auVar20 | auVar20 << 0x20 | auVar20 << 0x40 | auVar20 << 0x60;
          auVar21 = vectorShiftLeftIntegerWord(auVar20,auVar20);
          auVar20 = loadVectorLeftIndexed(4,0x355308);
          auVar20 = auVar20 >> 0x60 & (GPiece<16>)0xffffffff;
          auVar22 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
          auVar20 = vectorMultiplyAddFloatingPoint
                              (auVar22,auVar20 | auVar20 << 0x20 | auVar20 << 0x40 | auVar20 << 0x60
                               ,auVar21);
          auVar20 = vectorConvertToSignedFixedPointWordSaturate(auVar20,0);
          auVar20 = auVar20 >> 0x60 & (GPiece<16>)0xffffffff;
          uVar7 = storeVectorElementWordIndexed
                            (auVar20 | auVar20 << 0x20 | auVar20 << 0x40 | auVar20 << 0x60,0x184,
                             uVar16);
          *(undefined4 *)((uint)(pfVar6 + 0x61) & 0xfffffffc) = uVar7;
          *(undefined1 *)((int)pfVar6 + 0x47) = 200;
          pfVar6[0x1a] = fVar4;
          FUN_005e8338((double)((moby->pos).x - g_heroPosition.x),
                       (double)((moby->pos).y - g_heroPosition.y));
          MB_StartKick(moby,uVar16 + 0x50);
          pfVar6[0x28] = 2.0;
          pfVar6[0x29] = 8.0;
          moby->state = '\x06';
        }
        else {
          auVar20 = ZEXT416(0xffffffff);
          auVar20 = auVar20 | auVar20 << 0x20 | auVar20 << 0x40 | auVar20 << 0x60;
          auVar21 = vectorShiftLeftIntegerWord(auVar20,auVar20);
          auVar20 = loadVectorLeftIndexed(4,0x355308);
          auVar20 = auVar20 >> 0x60 & (GPiece<16>)0xffffffff;
          auVar22 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
          auVar20 = vectorMultiplyAddFloatingPoint
                              (auVar22,auVar20 | auVar20 << 0x20 | auVar20 << 0x40 | auVar20 << 0x60
                               ,auVar21);
          auVar20 = vectorConvertToSignedFixedPointWordSaturate(auVar20,0);
          auVar20 = auVar20 >> 0x60 & (GPiece<16>)0xffffffff;
          uVar7 = storeVectorElementWordIndexed
                            (auVar20 | auVar20 << 0x20 | auVar20 << 0x40 | auVar20 << 0x60,0x184,
                             uVar16);
          *(undefined4 *)((uint)(pfVar6 + 0x61) & 0xfffffffc) = uVar7;
          *(undefined1 *)((int)pfVar6 + 0x47) = 0xfa;
          pfVar6[0x1a] = fVar4;
          FUN_005e8338((double)((moby->pos).x - g_heroPosition.x),
                       (double)((moby->pos).y - g_heroPosition.y));
          MB_StartKick(moby,uVar16 + 0x50);
          pfVar6[0x28] = 2.0;
          pfVar6[0x29] = 8.0;
          moby->state = '\a';
        }
      }
    }
    MB_UpdateLightsTransition(moby,uVar16 + 0x40);
  }
  bVar1 = moby->state;
  moby->damage = -1;
  if (bVar1 < 5) {
    if (bVar1 < 2) {
      if (bVar1 == 0) {
        moby->state = '\x01';
        moby->modeBits = moby->modeBits | CAN_BE_AUTO_TARGETED;
        MB_InitDefaultParams(pfVar6 + 0x2c);
        uVar15 = g_heroMobyPtr->light;
        moby->color = g_heroMobyPtr->color;
        moby->light = uVar15;
        uVar15 = rand();
        if ((uVar15 & 1) != 0) {
          moby->modeBits = moby->modeBits | MIRROR;
        }
        auVar20 = ZEXT416(0xffffffff);
        auVar20 = auVar20 | auVar20 << 0x20 | auVar20 << 0x40 | auVar20 << 0x60;
        pfVar6[0x2f] = 2.0;
        pfVar6[0x2e] = 2.0;
        auVar21 = vectorShiftLeftIntegerWord(auVar20,auVar20);
        pfVar6[0x35] = 0.1199;
        *pfVar6 = 5.0;
        pfVar6[0x61] = 0.0;
        fVar3 = (moby->pos).x;
        pfVar6[0x2c] = 1.27378e-42;
        pfVar6[0x40] = fVar3;
        pfVar6[0x41] = (moby->pos).y;
        pfVar6[0x42] = (moby->pos).z;
        pfVar6[0x43] = (moby->pos).w;
        auVar20 = loadVectorLeftIndexed(4,0x355308);
        auVar22 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
        auVar20 = auVar20 >> 0x60 & (GPiece<16>)0xffffffff;
        auVar20 = vectorMultiplyAddFloatingPoint
                            (auVar22,auVar20 | auVar20 << 0x20 | auVar20 << 0x40 | auVar20 << 0x60,
                             auVar21);
        auVar20 = vectorConvertToSignedFixedPointWordSaturate(auVar20,0);
        auVar20 = auVar20 >> 0x60 & (GPiece<16>)0xffffffff;
        uVar7 = storeVectorElementWordIndexed
                          (auVar20 | auVar20 << 0x20 | auVar20 << 0x40 | auVar20 << 0x60,0x170,
                           uVar16);
        *(undefined4 *)((uint)(pfVar6 + 0x5c) & 0xfffffffc) = uVar7;
        if (moby->animationId != '\0') {
          MB_SetAnimation(moby,0,0,3);
        }
      }
      else {
        uVar17 = FUN_005e8338((double)(g_heroPosition.x - (moby->pos).x),
                              (double)(g_heroPosition.y - (moby->pos).y));
        OrganicDeltAngSpeed
                  (uVar17,0x3f947ae140000000,0x3fd3333340000000,0x3fb99999a0000000,moby,
                   &DAT_00355308,uVar16 + 0x174);
        fVar3 = (moby->pos).y - g_heroPosition.y;
        fVar4 = (moby->pos).x - g_heroPosition.x;
        fVar3 = SQRT(fVar4 * fVar4 + fVar3 * fVar3);
        if ((((pfVar6[0x5e] <= fVar3) && ((pfVar6[0x5e] + 8.0 <= fVar3 || (pfVar6[6] == 0.0)))) ||
            (fVar3 < 2.0)) ||
           ((iVar14 = FastDecTimerS32(uVar16 + 0x170), iVar14 == 0 ||
            (8.0 <= ABS((moby->pos).z - g_heroPosition.z))))) {
          fVar3 = (moby->pos).y - g_heroPosition.y;
          fVar4 = (moby->pos).x - g_heroPosition.x;
          if ((SQRT(fVar4 * fVar4 + fVar3 * fVar3) < 2.0) &&
             (moby->state = '\x04', moby->animationId != '\x01')) {
            MB_SetAnimation(moby,1,0,3);
          }
        }
        else {
          local_3c = 0;
          local_30 = 0;
          local_40 = moby;
          iVar14 = STUB_00055ab8_RET_0(local_b0,local_a0,0,moby,auStack_50);
          if (((iVar14 != 0) && (g_CollOutput.pMoby == g_heroMobyPtr)) &&
             (moby->state = '\x03', moby->animationId != '\a')) {
            MB_SetAnimation(moby,7,0,3);
          }
        }
      }
    }
    else if (2 < bVar1) {
      if (bVar1 < 4) {
        if (pfVar6[99] == 0.0) {
          uVar17 = FUN_005e8338((double)(g_heroPosition.x - (moby->pos).x),
                                (double)(g_heroPosition.y - (moby->pos).y));
          OrganicDeltAngSpeed
                    (uVar17,0x3f947ae140000000,0x3fd3333340000000,0x3fb99999a0000000,moby,
                     &DAT_00355308,uVar16 + 0x174);
        }
        else {
          dVar18 = (double)FUN_005e8338((double)(g_heroPosition.x - (moby->pos).x),
                                        (double)(g_heroPosition.y - (moby->pos).y));
          OrganicDeltAngSpeed
                    ((double)(float)(dVar18 + 0.7853981852531433),0x3f947ae140000000,
                     0x3fd3333340000000,0x3fb99999a0000000,moby,&DAT_00355308,uVar16 + 0x174);
        }
        fVar3 = (moby->rotation).z;
        fVar4 = fVar3 + 1.5707963;
        fVar8 = 3.1415925 - fVar3;
        if (fVar3 - (3.1415925 - fVar3) < 0.0) {
          fVar8 = fVar3;
        }
        fVar10 = 3.1415925 - fVar4;
        if (fVar4 - (3.1415925 - fVar4) < 0.0) {
          fVar10 = fVar4;
        }
        fVar9 = -3.1415925 - fVar3;
        if ((-3.1415925 - fVar3) - fVar8 < 0.0) {
          fVar9 = fVar8;
        }
        fVar3 = -3.1415925 - fVar4;
        if ((-3.1415925 - fVar4) - fVar10 < 0.0) {
          fVar3 = fVar10;
        }
        fVar4 = fVar9 * fVar9;
        fVar8 = fVar3 * fVar3;
        fVar12 = fVar4 * fVar4 * fVar9;
        dVar19 = 2.0;
        local_88 = 0;
        fVar10 = fVar8 * fVar8 * fVar3;
        fVar13 = fVar4 * fVar12;
        fVar11 = fVar8 * fVar10;
        local_8c = (fVar4 * fVar13 * 2.601887e-06 +
                   fVar13 * -0.0001980741 +
                   fVar12 * 0.0083330255 + fVar4 * fVar9 * -0.16666657 + fVar9) * 2.0;
        local_90 = (fVar8 * fVar11 * 2.601887e-06 +
                   fVar11 * -0.0001980741 +
                   fVar10 * 0.0083330255 + fVar8 * fVar3 * -0.16666657 + fVar3) * 2.0;
        MB_UpdateNavMove
                  (0x3ff0000000000000,moby,(MobyInstance *)(pfVar6 + 0x2c),&local_90,auStack_80);
        fVar3 = (moby->pos).y - g_heroPosition.y;
        fVar4 = (moby->pos).x - g_heroPosition.x;
        dVar18 = (double)SQRT(fVar4 * fVar4 + fVar3 * fVar3);
        if (dVar19 <= dVar18) {
          if (((double)(pfVar6[0x5e] + 8.0) < dVar18) &&
             (moby->state = '\x01', moby->animationId != '\0')) {
            MB_SetAnimation(moby,0,0,3);
          }
        }
        else {
          moby->state = '\x04';
          if (moby->animationId != '\x01') {
            MB_SetAnimation(moby,1,0,3);
          }
        }
      }
      else {
        uVar17 = FUN_005e8338((double)(g_heroPosition.x - (moby->pos).x),
                              (double)(g_heroPosition.y - (moby->pos).y));
        OrganicDeltAngSpeed
                  (uVar17,0x3f947ae140000000,0x3fd3333340000000,0x3fb99999a0000000,moby,
                   &DAT_00355308,uVar16 + 0x174);
        if ((((moby->updateId == moby->animationId) &&
             (dVar18 = (double)BlendAnimFrame(moby), 12.0 <= dVar18)) &&
            (dVar18 = (double)BlendAnimFrame(moby), dVar18 < 13.0)) &&
           (ABS((moby->pos).z - g_heroPosition.z) < 2.0)) {
          fVar3 = (moby->pos).y;
          fVar4 = (moby->pos).x;
          fVar8 = fVar3 - g_heroPosition.y;
          fVar10 = fVar4 - g_heroPosition.x;
          if (SQRT(fVar10 * fVar10 + fVar8 * fVar8) < 2.5) {
            dVar18 = (double)FUN_005e8338((double)(g_heroPosition.x - fVar4),
                                          (double)(g_heroPosition.y - fVar3));
            dVar18 = (double)FastSubRots((float)dVar18,(moby->rotation).z);
            if (dVar18 < 0.2617993950843811) {
              fVar3 = (moby->rotation).z;
              fVar4 = fVar3 + 1.5707963;
              fVar8 = 3.1415925 - fVar3;
              if (fVar3 - (3.1415925 - fVar3) < 0.0) {
                fVar8 = fVar3;
              }
              fVar10 = 3.1415925 - fVar4;
              if (fVar4 - (3.1415925 - fVar4) < 0.0) {
                fVar10 = fVar4;
              }
              fVar9 = -3.1415925 - fVar3;
              if ((-3.1415925 - fVar3) - fVar8 < 0.0) {
                fVar9 = fVar8;
              }
              fVar3 = -3.1415925 - fVar4;
              if ((-3.1415925 - fVar4) - fVar10 < 0.0) {
                fVar3 = fVar10;
              }
              fVar4 = fVar9 * fVar9;
              fVar8 = fVar3 * fVar3;
              fVar12 = fVar4 * fVar4 * fVar9;
              local_68 = 0;
              fVar10 = fVar8 * fVar8 * fVar3;
              fVar13 = fVar4 * fVar12;
              fVar11 = fVar8 * fVar10;
              local_6c = (fVar4 * fVar13 * 2.601887e-06 +
                         fVar13 * -0.0001980741 +
                         fVar12 * 0.0083330255 + fVar4 * fVar9 * -0.16666657 + fVar9) * 0.2;
              local_70 = (fVar8 * fVar11 * 2.601887e-06 +
                         fVar11 * -0.0001980741 +
                         fVar10 * 0.0083330255 + fVar8 * fVar3 * -0.16666657 + fVar3) * 0.2;
              local_60 = (g_heroMobyPtr->pos).x;
              local_5c = (g_heroMobyPtr->pos).y;
              local_54 = (g_heroMobyPtr->pos).w;
              local_58 = (g_heroMobyPtr->pos).z + 0.75;
              CollDamageMobyDirect(1.0,g_heroMobyPtr,moby,1,0x355308,&local_60,&local_70);
            }
          }
        }
        if (((moby->field43_0x70 & 2U) != 0) && (moby->state = '\x01', moby->animationId != '\0')) {
          MB_SetAnimation(moby,0,0,3);
        }
      }
    }
  }
  else if (bVar1 == 99) {
    uVar15 = MB_UpdateKick(moby,(KickVars *)(pfVar6 + 0x14));
    if ((uVar15 & 0x40) != 0) {
      DeleteMoby(moby);
      return;
    }
    if ((int)(moby->pos).z < 0) {
      DeleteMoby(moby);
      return;
    }
  }
  else if (bVar1 == 8) {
    dVar18 = (double)BlendAnimFrame(moby);
    uVar2 = moby->animationId;
    if (dVar18 == 20.0) {
      fVar4 = (moby->pos).y - g_heroPosition.y;
      fVar8 = (moby->pos).x - g_heroPosition.x;
      fVar3 = (moby->pos).z;
      fVar4 = SQRT(fVar8 * fVar8 + fVar4 * fVar4);
      if ((fVar4 < 2.0) && (ABS(fVar3 - g_heroPosition.z) < 4.0)) {
        moby->state = '\x04';
        if (uVar2 == '\x01') {
          return;
        }
        MB_SetAnimation(moby,1,5,3);
        return;
      }
      if ((fVar4 < 8.0) && (ABS(fVar3 - g_heroPosition.z) < 4.0)) {
        moby->state = '\x03';
        if (uVar2 == '\a') {
          return;
        }
        MB_SetAnimation(moby,7,5,3);
        return;
      }
      moby->state = '\x01';
      if (uVar2 == '\0') {
        return;
      }
      MB_SetAnimation(moby,0,5,3);
      return;
    }
  }
  else if (bVar1 == 7) {
    uVar15 = MB_UpdateKick(moby,(KickVars *)(pfVar6 + 0x14));
    if ((uVar15 & 0x40) == 0) {
      if ((int)(moby->pos).z < 0) {
        DeleteMoby(moby);
        return;
      }
    }
    else {
      moby->state = '\b';
      if (moby->animationId != '\x11') {
        MB_SetAnimation(moby,0x11,0,3);
      }
    }
  }
  else if (bVar1 == 6) {
    uVar15 = MB_UpdateKick(moby,(KickVars *)(pfVar6 + 0x14));
    uVar2 = moby->animationId;
    if ((uVar15 & 0x40) != 0) {
      fVar4 = (moby->pos).y - g_heroPosition.y;
      fVar8 = (moby->pos).x - g_heroPosition.x;
      fVar3 = (moby->pos).z;
      fVar4 = SQRT(fVar8 * fVar8 + fVar4 * fVar4);
      if ((fVar4 < 2.0) && (ABS(fVar3 - g_heroPosition.z) < 4.0)) {
        moby->state = '\x04';
        if (uVar2 == '\x01') {
          return;
        }
        MB_SetAnimation(moby,1,5,3);
        return;
      }
      if ((fVar4 < 8.0) && (ABS(fVar3 - g_heroPosition.z) < 4.0)) {
        moby->state = '\x03';
        if (uVar2 == '\a') {
          return;
        }
        MB_SetAnimation(moby,7,5,3);
        return;
      }
      moby->state = '\x01';
      if (uVar2 == '\0') {
        return;
      }
      MB_SetAnimation(moby,0,5,3);
      return;
    }
    if ((int)(moby->pos).z < 0) {
      DeleteMoby(moby);
      return;
    }
  }
  else if (bVar1 == 5) {
    uVar15 = MB_UpdateKick(moby,(KickVars *)(pfVar6 + 0x14));
    uVar2 = moby->animationId;
    if ((uVar15 & 1) != 0) {
      fVar4 = (moby->pos).y - g_heroPosition.y;
      fVar8 = (moby->pos).x - g_heroPosition.x;
      fVar3 = (moby->pos).z;
      fVar4 = SQRT(fVar8 * fVar8 + fVar4 * fVar4);
      if ((fVar4 < 5.0) && (ABS(fVar3 - g_heroPosition.z) < 2.0)) {
        moby->state = '\x04';
        if (uVar2 == '\x01') {
          return;
        }
        MB_SetAnimation(moby,1,5,3);
        return;
      }
      if ((fVar4 < 8.0) && (ABS(fVar3 - g_heroPosition.z) < 2.0)) {
        moby->state = '\x03';
        if (uVar2 == '\a') {
          return;
        }
        MB_SetAnimation(moby,7,5,3);
        return;
      }
      moby->state = '\x01';
      if (uVar2 == '\0') {
        return;
      }
      MB_SetAnimation(moby,0,5,3);
      return;
    }
    if ((int)(moby->pos).z < 0) {
      DeleteMoby(moby);
      return;
    }
  }
  MB_ColorDyingMoby(moby,uVar16 + 0x40);
  if (pfVar6[6] != 0.0) {
    pfVar6[6] = 0.0;
  }
  return;
}


