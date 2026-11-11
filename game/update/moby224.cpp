// game/update/moby224.cpp -- reconstructed from NPEA00385 EBOOT
// STATUS: NOT STARTED (raw Ghidra output)
// 4 functions, 0x2f9610-0x2fa1f4
// shared update function UpdateMoby_{224_228}; registered for oClasses 224, 228
#include "game/update/moby224.h"
#include "game/collproc.h"
#include "game/hero.h"
#include "game/mobyfunc.h"
#include "game/mobyproc.h"
#include "game/mobyutil.h"
#include "game/sound.h"
#include "game/update.h"
#include "game/update/moby1160.h"
#include "game/update/moby1242.h"
#include "game/update/moby1379.h"
#include "game/update/moby227.h"
#include "idol/fastfunc.h"

// 0x02f9610 (0xa4 bytes)
MobyInstance * FUN_002f9610(f32 *param_1,MOBY_OCLASSES param_2)

{
  f32 fVar1;
  MobyInstance *pMVar2;
  
  pMVar2 = CreateMoby(param_2);
  if (pMVar2 != (MobyInstance *)0x0) {
    pMVar2->updateDistance = -1;
    pMVar2->enabled = '\x01';
    pMVar2->state = '\0';
    pMVar2->setByGroup = '\0';
    fVar1 = *param_1;
    pMVar2->drawDistance = 0xff;
    (pMVar2->pos).x = fVar1;
    (pMVar2->pos).y = param_1[1];
    (pMVar2->pos).z = param_1[2];
    (pMVar2->pos).w = param_1[3];
    UpdateMobyTransform(pMVar2);
    MB_CopyHeroLights(pMVar2);
  }
  return pMVar2;
}


// shared update function, registered for oClasses 224, 228
// 0x02f96f8 (0x838 bytes)
/* Moby 224
   Moby 228 */

void UpdateMoby_224(MobyInstance *moby)

{
  u8 uVar1;
  byte bVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  MOBY_OCLASSES MVar7;
  int *piVar8;
  u16 *puVar9;
  f32 fVar10;
  f32 fVar11;
  f32 fVar12;
  uint uVar13;
  uint uVar14;
  uint uVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  bool bVar23;
  MobyInstance *pMVar24;
  int iVar25;
  double dVar26;
  double dVar27;
  GPiece<16> auStack_50;
  
  pMVar24 = DAT_0096b2d0;
  piVar8 = (int *)moby->pVar;
  uVar1 = moby->state;
  dVar27 = 100000.0;
  bVar23 = false;
  if (uVar1 == '\x06') {
    if (*(char *)((int)piVar8 + 0xd) == '\0') {
      DeleteMoby(moby);
      return;
    }
    moby->collision = (ushort *)0x0;
    moby->enabled = '\0';
    moby->modeBits = moby->modeBits | DISABLED;
    iVar25 = piVar8[2];
    moby->scale = moby->pClass->gScale * 0.1;
    piVar8[4] = iVar25;
    moby->state = '\x01';
  }
  else if (uVar1 == '\x05') {
    dVar27 = (double)FastWrapRot
                               ((moby->rotation).z,(moby->pClass->gScale - moby->scale) * 2.0);
    (moby->rotation).z = (float)dVar27;
    fVar3 = moby->pClass->gScale;
    fVar4 = (fVar3 * 0.01 - moby->scale) * 0.3 + moby->scale;
    moby->scale = fVar4;
    if (fVar4 < fVar3 * 0.05) {
      moby->state = '\x06';
    }
  }
  else if (uVar1 == '\x04') {
    dVar26 = (double)FastWrapRot((moby->rotation).z,g_FrameTime * 0.7853982);
    fVar10 = (moby->pos).x;
    (moby->rotation).z = (float)dVar26;
    uVar13 = (int)fVar10 >> 0x1f;
    fVar11 = (moby->pos).y;
    uVar14 = (int)fVar11 >> 0x1f;
    fVar12 = (moby->pos).z;
    fVar4 = 20.0;
    uVar15 = (int)fVar12 >> 0x1f;
    fVar3 = (moby->pos).x;
    if ((int)((uVar13 >> 1 ^ (uint)fVar10) - uVar13) < 0x41a00000) {
      (moby->pos).x = 20.0;
      fVar3 = fVar4;
    }
    if (1003.0 < fVar3) {
      (moby->pos).x = 1003.0;
    }
    fVar3 = (moby->pos).y;
    if ((int)((uVar14 >> 1 ^ (uint)fVar11) - uVar14) < 0x41a00000) {
      (moby->pos).y = 20.0;
      fVar3 = fVar4;
    }
    if (1003.0 < fVar3) {
      (moby->pos).y = 1003.0;
    }
    fVar3 = (moby->pos).z;
    if ((int)((uVar15 >> 1 ^ (uint)fVar12) - uVar15) < 0x41a00000) {
      (moby->pos).z = 20.0;
      fVar3 = fVar4;
    }
    if (1003.0 < fVar3) {
      (moby->pos).z = 1003.0;
    }
    GetBonePosition(moby,0,auStack_50);
    moby->scale = (moby->pClass->gScale - moby->scale) * 0.1 + moby->scale;
    iVar25 = CollSphere(0x4000000000000000,auStack_50,moby->pClass,1,moby);
    if (((iVar25 != 0) && (g_CollOutput.pMoby != (MobyInstance *)0x0)) &&
       ((MVar7 = (g_CollOutput.pMoby)->oClass, MVar7 == FIGHTER_JET_0045 || MVar7 == JET_FIGHTER ||
        (MVar7 == FIGHTER_JET_0563)))) {
      bVar23 = true;
    }
    if ((((g_heroState == TURRET_PLANE_UI) && (pMVar24 != (MobyInstance *)0x0)) &&
        (pMVar24->state != 0xfd && pMVar24->state != 0xfe)) &&
       ((MVar7 = pMVar24->oClass, MVar7 == FIGHTER_JET_0045 || MVar7 == JET_FIGHTER ||
        (MVar7 == FIGHTER_JET_0563)))) {
      fVar3 = (pMVar24->pos).y - (moby->pos).y;
      fVar4 = (pMVar24->pos).x - (moby->pos).x;
      fVar5 = (pMVar24->pos).z - (moby->pos).z;
      dVar27 = (double)SQRT(fVar5 * fVar5 + fVar4 * fVar4 + fVar3 * fVar3);
    }
    if ((bVar23) || (dVar27 < 4.0)) {
      MVar7 = moby->oClass;
      moby->collision = (ushort *)0x0;
      if ((short)MVar7 < 0xe1) {
        if (0xdf < (short)MVar7) {
          DAT_0096b2d6 = DAT_0096b2d6 + 5;
          if ((DAT_0096b2d0 != (MobyInstance *)0x0) &&
             (DAT_0096b2d0->state != 0xfd && DAT_0096b2d0->state != 0xfe)) {
            PlayMobySound(4,0,DAT_0096b2d0);
          }
          if (DAT_0096b2d7 < DAT_0096b2d6) {
            DAT_0096b2d6 = DAT_0096b2d7;
          }
        }
      }
      else if (MVar7 == JET_FIGHTER_HEALTH_CRATE_00E4) {
        DAT_0096b2dc = DAT_0096b2dc + 10.0;
        if ((DAT_0096b2d0 != (MobyInstance *)0x0) &&
           (DAT_0096b2d0->state != 0xfd && DAT_0096b2d0->state != 0xfe)) {
          PlayMobySound(5,0,DAT_0096b2d0);
        }
        if (DAT_0096b2e0 < DAT_0096b2dc) {
          DAT_0096b2dc = DAT_0096b2e0;
        }
      }
      moby->state = '\x05';
    }
    else if ((dVar27 < 40.0) && (moby->enabled != '\0')) {
      fVar3 = (moby->pos).y;
      fVar4 = (moby->pos).x;
      fVar5 = (moby->pos).z;
      fVar16 = (pMVar24->pos).y - fVar3;
      fVar18 = (pMVar24->pos).x - fVar4;
      fVar20 = (pMVar24->pos).z - fVar5;
      fVar22 = SQRT(fVar20 * fVar20 + fVar18 * fVar18 + fVar16 * fVar16);
      fVar6 = 0.0;
      fVar21 = (0.8 / (float)SQRT(dVar27)) / fVar22;
      fVar19 = fVar6;
      if (0.0 - fVar22 < 0.0) {
        fVar19 = fVar21 * fVar20;
      }
      fVar17 = fVar6;
      if (0.0 - fVar22 < 0.0) {
        fVar17 = fVar21 * fVar16;
      }
      if (0.0 - fVar22 < 0.0) {
        fVar6 = fVar21 * fVar18;
      }
      if (fVar22 - 0.0 < 0.0) {
        fVar19 = fVar21 * fVar20;
      }
      if (fVar22 - 0.0 < 0.0) {
        fVar17 = fVar21 * fVar16;
      }
      if (fVar22 - 0.0 < 0.0) {
        fVar6 = fVar21 * fVar18;
      }
      (moby->pos).z = fVar5 + fVar19;
      (moby->pos).y = fVar3 + fVar17;
      (moby->pos).x = fVar4 + fVar6;
    }
  }
  else if (uVar1 == '\x03') {
    if (piVar8[2] == -1) {
      moby->state = '\x04';
    }
    else {
      iVar25 = FastDecTimerS32(piVar8 + 4);
      if (iVar25 == 0) {
        if (moby->state != '\x04') goto LAB_002f9de0;
      }
      else {
        moby->state = '\x04';
      }
    }
    puVar9 = moby->pClass->collision;
    moby->enabled = '\x01';
    moby->collision = puVar9;
    moby->modeBits =
         moby->modeBits &
         (MIRROR|CAN_BE_DAMAGED|HIDE_BACKFACES|CAN_BE_AUTO_TARGETED|DISABLE_Z_WRITE|DRAW_SHADOW|
          DRAW_TRANSPARENT_WEIRD|LOCK_ROTATION|NO_DRAW|UNK_40|HAS_SPECIAL_VARS|HAS_GLOW|TRANSPARENT|
          NO_POST_UPDATE|NO_UPDATE);
    moby->scale = moby->pClass->gScale * 0.1;
  }
  else if (uVar1 == '\x02') {
    if (g_MobyInstance + *piVar8 != (MobyInstance *)0x0) {
      bVar2 = g_MobyInstance[*piVar8].state;
      if ((bVar2 != 0xfe) && (bVar2 != 0xfd)) {
        if (piVar8[1] == 0xffffffff) {
          moby->state = '\x03';
        }
        else if ((uint)bVar2 == piVar8[1]) {
          moby->state = '\x03';
        }
        goto LAB_002f9de0;
      }
    }
    moby->state = '\x03';
  }
  else if (uVar1 == '\x01') {
    moby->state = ((byte)(ZERO_MASK((-1 - *piVar8))) & 1) + 2;
  }
  else if (uVar1 == '\0') {
    if (*(char *)(piVar8 + 3) == '\0') {
      moby->collision = (ushort *)0x0;
      moby->enabled = '\0';
      moby->modeBits = moby->modeBits | DISABLED;
      fVar3 = moby->pClass->gScale;
      moby->state = '\x01';
      moby->scale = fVar3 * 0.1;
    }
    else {
      fVar3 = moby->pClass->gScale;
      moby->state = '\x04';
      moby->scale = fVar3;
    }
  }
LAB_002f9de0:
  MB_BobMotion
            (0.7,g_FrameTime * 1.2217305,moby,(float *)(piVar8 + 6),(float *)(piVar8 + 5))
  ;
  fVar10 = (moby->pos).x;
  fVar11 = (moby->pos).y;
  uVar13 = (int)fVar10 >> 0x1f;
  uVar14 = (int)fVar11 >> 0x1f;
  fVar12 = (moby->pos).z;
  fVar3 = 20.0;
  uVar15 = (int)fVar12 >> 0x1f;
  fVar4 = (moby->pos).x;
  if ((int)((uVar13 >> 1 ^ (uint)fVar10) - uVar13) < 0x41a00000) {
    (moby->pos).x = 20.0;
    fVar4 = fVar3;
  }
  if (1003.0 < fVar4) {
    (moby->pos).x = 1003.0;
  }
  fVar4 = (moby->pos).y;
  if ((int)((uVar14 >> 1 ^ (uint)fVar11) - uVar14) < 0x41a00000) {
    (moby->pos).y = 20.0;
    fVar4 = fVar3;
  }
  if (1003.0 < fVar4) {
    (moby->pos).y = 1003.0;
  }
  fVar4 = (moby->pos).z;
  if ((int)((uVar15 >> 1 ^ (uint)fVar12) - uVar15) < 0x41a00000) {
    (moby->pos).z = 20.0;
    fVar4 = fVar3;
  }
  if (1003.0 < fVar4) {
    (moby->pos).z = 1003.0;
  }
  return;
}


// 0x02f9f30 (0x14 bytes)
void M228_002f9f30(void)

{
  DAT_007ff098 = 0x10000;
  return;
}


// 0x02f9f70 (0x284 bytes)
void M228_002f9f70(int param_1)

{
  uint uVar1;
  undefined4 uVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  ulonglong uVar7;
  undefined8 in_LR;
  GPiece<16> auVar8;
  GPiece<16> auVar9;
  GPiece<16> auVar10;
  GPiece<16> auVar11;
  GPiece<16> auVar12;
  GPiece<16> auVar13;
  GPiece<16> auVar14;
  GPiece<16> auVar15;
  GPiece<16> auVar16;
  GPiece<16> auVar17;
  GPiece<16> auVar18;
  
  uVar1 = *(uint *)(param_1 + 0x78);
  uVar7 = (ulonglong)uVar1;
  if (*(char *)(uVar1 + 0xb1) == '\x01') {
    auVar8 = loadVectorLeftIndexed(0x138,uVar7);
    auVar9 = loadVectorRightIndexed(0x148,uVar7);
    if (*(int *)(uVar1 + 0x138) != 0) {
      auVar10 = loadVectorLeftIndexed(0xffffffffffffb448,0x10c0000);
      auVar11 = vectorConvertFromSignedFixedPointWord(auVar10,0);
      auVar10 = ZEXT416(0xffffffff);
      auVar12 = auVar10 | auVar10 << 0x20 | auVar10 << 0x40 | auVar10 << 0x60;
      auVar10 = ZEXT416(0xffffffff);
      auVar16 = auVar10 | auVar10 << 0x20 | auVar10 << 0x40 | auVar10 << 0x60;
      auVar13 = vectorShiftLeftIntegerWord(auVar12,auVar12);
      auVar10 = loadVectorLeftIndexed(4,0x2f9f48);
      auVar10 = auVar10 >> 0x60 & (GPiece<16>)0xffffffff;
      auVar15 = auVar10 | auVar10 << 0x20 | auVar10 << 0x40 | auVar10 << 0x60;
      auVar14 = vectorReciprocalEstimateFloatingPoint(auVar11);
      auVar10 = ZEXT416(0xffffffff);
      auVar17 = auVar10 | auVar10 << 0x20 | auVar10 << 0x40 | auVar10 << 0x60;
      auVar12 = loadVectorLeftIndexed(in_LR,0x2f9f48);
      auVar10 = ZEXT416(0xffffffff);
      auVar18 = auVar10 | auVar10 << 0x20 | auVar10 << 0x40 | auVar10 << 0x60;
      auVar10 = auVar12 >> 0x60 & (GPiece<16>)0xffffffff;
      auVar12 = vectorConvertFromSignedFixedPointWord(auVar8 | auVar9,0);
      auVar17 = vectorShiftLeftIntegerWord(auVar17,auVar17);
      auVar18 = vectorShiftLeftIntegerWord(auVar18,auVar18);
      auVar8 = vectorNegativeMultiplySubtractFloatingPoint(auVar14,auVar11,auVar15);
      auVar9 = vectorMultiplyAddFloatingPoint(auVar14,auVar8,auVar13);
      auVar13 = vectorShiftLeftIntegerWord(auVar16,auVar16);
      auVar8 = ZEXT416(0xffffffff);
      auVar8 = auVar8 | auVar8 << 0x20 | auVar8 << 0x40 | auVar8 << 0x60;
      auVar14 = vectorShiftLeftIntegerWord(auVar8,auVar8);
      auVar8 = vectorNegativeMultiplySubtractFloatingPoint(auVar9,auVar11,auVar15);
      auVar13 = vectorMultiplyAddFloatingPoint(auVar9,auVar8,auVar13);
      auVar8 = loadVectorLeftIndexed(8,0x2f9f48);
      auVar9 = auVar8 >> 0x60 & (GPiece<16>)0xffffffff;
      auVar8 = ZEXT416(0xffffffff);
      auVar8 = auVar8 | auVar8 << 0x20 | auVar8 << 0x40 | auVar8 << 0x60;
      auVar16 = vectorShiftLeftIntegerWord(auVar8,auVar8);
      auVar8 = vectorNegativeMultiplySubtractFloatingPoint(auVar13,auVar11,auVar15);
      auVar8 = vectorMultiplyAddFloatingPoint(auVar13,auVar8,auVar14);
      auVar11 = loadVectorLeftIndexed(0xc,0x2f9f48);
      auVar11 = auVar11 >> 0x60 & (GPiece<16>)0xffffffff;
      fVar3 = (float)(longlong)*(int *)(uVar1 + 0x138) * (3.1415927 / (float)(longlong)DAT_010bb448)
      ;
      auVar14 = loadVectorLeftIndexed(0x10,0x2f9f48);
      auVar13 = vectorMultiplyAddFloatingPoint
                          (auVar8,auVar10 | auVar10 << 0x20 | auVar10 << 0x40 | auVar10 << 0x60,
                           auVar17);
      auVar10 = auVar14 >> 0x60 & (GPiece<16>)0xffffffff;
      auVar8 = ZEXT416(0xffffffff);
      auVar14 = auVar8 | auVar8 << 0x20 | auVar8 << 0x40 | auVar8 << 0x60;
      auVar8 = vectorMultiplyAddFloatingPoint(auVar12,auVar13,auVar18);
      auVar9 = vectorSubtractFloatingPoint
                         (auVar9 | auVar9 << 0x20 | auVar9 << 0x40 | auVar9 << 0x60,auVar8);
      auVar11 = vectorSubtractFloatingPoint
                          (auVar11 | auVar11 << 0x20 | auVar11 << 0x40 | auVar11 << 0x60,auVar8);
      fVar4 = 3.1415925 - fVar3;
      if (fVar3 - (3.1415925 - fVar3) < 0.0) {
        fVar4 = fVar3;
      }
      auVar12 = vectorCompareGreaterThanFloatingPoint(auVar9,auVar8);
      auVar9 = vectorConditionalSelect(auVar9,auVar8,auVar12);
      auVar8 = ZEXT416(0xffffffff);
      auVar12 = auVar8 | auVar8 << 0x20 | auVar8 << 0x40 | auVar8 << 0x60;
      auVar8 = vectorCompareGreaterThanFloatingPoint(auVar9,auVar11);
      auVar12 = vectorShiftLeftIntegerWord(auVar12,auVar12);
      auVar9 = vectorConditionalSelect(auVar11,auVar9,auVar8);
      auVar8 = ZEXT416(0xffffffff);
      auVar11 = auVar8 | auVar8 << 0x20 | auVar8 << 0x40 | auVar8 << 0x60;
      auVar8 = ZEXT416(0xffffffff);
      auVar8 = auVar8 | auVar8 << 0x20 | auVar8 << 0x40 | auVar8 << 0x60;
      fVar5 = -3.1415925 - fVar3;
      if ((-3.1415925 - fVar3) - fVar4 < 0.0) {
        fVar5 = fVar4;
      }
      auVar11 = vectorShiftLeftIntegerWord(auVar11,auVar11);
      auVar13 = vectorShiftLeftIntegerWord(auVar8,auVar8);
      auVar11 = vectorMultiplyAddFloatingPoint(auVar9,auVar9,auVar11);
      auVar8 = loadVectorLeftIndexed(0x14,0x2f9f48);
      auVar8 = auVar8 >> 0x60 & (GPiece<16>)0xffffffff;
      fVar3 = fVar5 * fVar5;
      auVar13 = vectorMultiplyAddFloatingPoint(auVar11,auVar9,auVar13);
      auVar12 = vectorMultiplyAddFloatingPoint(auVar11,auVar13,auVar12);
      auVar9 = vectorMultiplyAddFloatingPoint
                         (auVar13,auVar10 | auVar10 << 0x20 | auVar10 << 0x40 | auVar10 << 0x60,
                          auVar9);
      auVar13 = loadVectorLeftIndexed(0x18,0x2f9f48);
      auVar10 = vectorShiftLeftIntegerWord(auVar14,auVar14);
      fVar4 = fVar3 * fVar3 * fVar5;
      auVar14 = vectorMultiplyAddFloatingPoint(auVar11,auVar12,auVar16);
      auVar9 = vectorMultiplyAddFloatingPoint
                         (auVar12,auVar8 | auVar8 << 0x20 | auVar8 << 0x40 | auVar8 << 0x60,auVar9);
      auVar8 = auVar13 >> 0x60 & (GPiece<16>)0xffffffff;
      fVar6 = fVar3 * fVar4;
      auVar10 = vectorMultiplyAddFloatingPoint(auVar11,auVar14,auVar10);
      auVar9 = vectorMultiplyAddFloatingPoint
                         (auVar14,auVar8 | auVar8 << 0x20 | auVar8 << 0x40 | auVar8 << 0x60,auVar9);
      auVar8 = loadVectorLeftIndexed(0x1c,0x2f9f48);
      auVar8 = auVar8 >> 0x60 & (GPiece<16>)0xffffffff;
      auVar9 = vectorMultiplyAddFloatingPoint
                         (auVar10,auVar8 | auVar8 << 0x20 | auVar8 << 0x40 | auVar8 << 0x60,auVar9);
      auVar8 = ZEXT416(0xffffffff);
      auVar8 = auVar8 | auVar8 << 0x20 | auVar8 << 0x40 | auVar8 << 0x60;
      auVar10 = loadVectorLeftIndexed(0xfffffffffffff0c0,0x800000);
      auVar11 = loadVectorLeftIndexed(0x20,0x2f9f48);
      auVar8 = vectorShiftLeftIntegerWord(auVar8,auVar8);
      auVar9 = vectorMultiplyAddFloatingPoint(auVar10,auVar9,auVar8);
      auVar8 = auVar11 >> 0x60 & (GPiece<16>)0xffffffff;
      fVar3 = DAT_007ff0c0 *
              (fVar3 * fVar6 * 2.601887e-06 +
              fVar6 * -0.0001980741 + fVar4 * 0.0083330255 + fVar3 * fVar5 * -0.16666657 + fVar5);
      auVar8 = (SPLAT(auVar8) ^ auVar9) >> 0x60 &
               (GPiece<16>)0xffffffff;
      auVar8 = auVar8 | auVar8 << 0x20 | auVar8 << 0x40 | auVar8 << 0x60;
      uVar2 = storeVectorElementWordIndexed(auVar8,0x134,uVar7);
      *(undefined4 *)(uVar1 + 0x134 & 0xfffffffc) = uVar2;
      uVar2 = storeVectorElementWordIndexed(auVar8,0x130,uVar7);
      *(undefined4 *)(uVar1 + 0x130 & 0xfffffffc) = uVar2;
      FastQuaternionToEuler(-(double)fVar3,uVar7 + 0x100,1);
      FastQuaternionToEuler((double)*(float *)(uVar1 + 0x130),uVar7 + 0xc0,1);
      FastDecTimerS32(uVar7 + 0x138);
    }
  }
  return;
}


