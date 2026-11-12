// game/update/moby291.cpp -- reconstructed from NPEA00385 EBOOT
// STATUS: NOT STARTED (raw Ghidra output)
// 3 functions, 0x32f5e8-0x331450
#include <math.h>
#include <stdio.h>
#include "game/update/moby291.h"
#include "game/collproc.h"
#include "game/debug.h"
#include "game/draw.h"
#include "game/freeze.h"
#include "game/hero.h"
#include "game/hud.h"
#include "game/mobyfunc.h"
#include "game/mobyproc.h"
#include "game/mobyutil.h"
#include "game/pad.h"
#include "game/partupd.h"
#include "game/sound.h"
#include "game/update.h"
#include "game/update/moby1160.h"
#include "game/update/moby1242.h"
#include "game/update/moby1379.h"
#include "game/update/moby179.h"
#include "game/update/moby327.h"
#include "game/update/moby334.h"
#include "game/update/moby335.h"
#include "idol/fastfunc.h"
#include "idol/mathfunc.h"
#include "idol/xUnk.h"

// 0x032f5e8 (0x14 bytes)
void M291_0032f5e8(void)

{
  DAT_008008c4 = 0x10000;
  return;
}


// 0x032f620 (0x2a8 bytes)
void M291_0032f620(longlong param_1,int param_2)

{
  MobyInstance *pMoby;
  void *pvVar1;
  ulonglong uVar2;
  int iVar3;
  double dVar4;
  double dVar5;
  double dVar6;
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
  double dVar20;
  float local_1b0;
  float local_1ac;
  float local_1a8;
  Vec4 VStack_1a0;
  float local_190;
  float local_18c;
  float local_188;
  float local_184;
  float local_170;
  float local_16c;
  float local_168;
  float local_164;
  GPiece<64> auStack_160;
  GPiece<72> auStack_120;
  
  uVar2 = 0;
  dVar12 = 0.0;
  dVar13 = 100.0;
  dVar14 = -50.0;
  dVar15 = 0.3499999940395355;
  dVar16 = -1.5707963705062866;
  dVar18 = 0.3100000023841858;
  dVar19 = 4.5;
  dVar20 = 2.75;
  do {
    pMoby = *(MobyInstance **)((int)((uVar2 & 0xffffffff) << 2) + param_2 + 0xb8);
    if (pMoby != (MobyInstance *)0x0) {
      pvVar1 = pMoby->pVar;
      dVar4 = (double)FastIntToDouble(uVar2);
      dVar7 = (double)*(float *)((int)pvVar1 + 0xc);
      dVar17 = 0.0;
      dVar5 = dVar20;
      if (dVar12 - (double)*(float *)(param_2 + 0x10) < 0.0) {
        dVar5 = dVar19;
      }
      dVar6 = (double)DAT_0071f408;
      dVar5 = (double)(float)((double)(float)(dVar4 * dVar13 + dVar14) *
                              (double)*(float *)(param_2 + 0x14) + dVar5);
      if (dVar7 <= dVar5) {
        if (dVar7 < dVar5) {
          *(float *)((int)pvVar1 + 0xc) = (float)(dVar6 * dVar15 + dVar7);
        }
      }
      else {
        *(float *)((int)pvVar1 + 0xc) = -(float)(dVar6 * dVar15 - dVar7);
      }
      (pMoby->rotation).z = (float)(dVar6 * dVar16);
      FastEulerToMtx1(auStack_160,&pMoby->rotation);
      FastMtxCopyNoTranslate(auStack_120,param_1 + 0xc0);
      FastVecMtx4Mul(&VStack_1a0,auStack_120,auStack_160);
      FastApplyTransform(&(pMoby->transform).v0,&VStack_1a0);
      dVar10 = (double)local_170;
      dVar11 = (double)(float)((double)local_190 * dVar18);
      dVar9 = (double)(float)((double)local_18c * dVar18);
      dVar8 = (double)local_16c;
      dVar6 = (double)(float)((double)local_188 * dVar18);
      dVar7 = (double)local_168;
      dVar4 = (double)(float)((double)local_184 * dVar18);
      dVar5 = (double)local_164;
      GetBonePosition(param_1,(int)uVar2 + 2,&local_1b0);
      (pMoby->pos).x = (float)(dVar10 * dVar17 + dVar11) + local_1b0;
      (pMoby->pos).y = (float)(dVar8 * dVar17 + dVar9) + local_1ac;
      (pMoby->pos).w = (float)(dVar5 * dVar17 + dVar4);
      (pMoby->pos).z = (float)(dVar7 * dVar17 + dVar6) + local_1a8;
      PostUpdateMobyLockTransform(pMoby);
    }
    iVar3 = (int)uVar2 + 1;
    uVar2 = (ulonglong)iVar3;
  } while (iVar3 < 2);
  return;
}


// 0x032f988 (0x1ac8 bytes)
// strings: 00656184: 'SPEED: %f km/h'

/* Moby 291 */

void UpdateMoby_291(MobyInstance *moby)

{
  u8 uVar1;
  float fVar2;
  MOBY_OCLASSES MVar3;
  float *pfVar4;
  MobyInstance *pMVar5;
  f32 fVar6;
  uint uVar7;
  undefined1 uVar8;
  undefined2 uVar9;
  float fVar10;
  float fVar11;
  undefined4 *puVar12;
  ulonglong uVar13;
  longlong lVar14;
  int iVar15;
  float fVar16;
  float fVar17;
  longlong lVar18;
  longlong lVar19;
  longlong lVar20;
  ulonglong uVar21;
  double dVar22;
  double dVar23;
  double dVar24;
  double dVar25;
  undefined8 uVar26;
  undefined8 uVar27;
  undefined8 uVar28;
  double dVar29;
  double dVar30;
  undefined8 uVar31;
  double dVar32;
  double dVar33;
  double dVar34;
  double dVar35;
  double dVar36;
  double dVar37;
  double dVar38;
  double dVar39;
  double dVar40;
  GPiece<16> auVar41;
  GPiece<16> auVar42;
  GPiece<16> auVar43;
  GPiece<16> auVar44;
  GPiece<16> auVar45;
  undefined4 in_vr31_32_0;
  undefined4 in_vr31_32_1;
  undefined4 in_vr31_32_2;
  undefined4 in_vr31_32_3;
  float local_1d4;
  float local_1d0;
  float local_1cc;
  float local_1c8;
  float local_1c0;
  float local_1bc;
  float local_1b8;
  float local_1b0;
  float local_1ac;
  float local_1a8;
  float local_1a0;
  float local_19c;
  float local_198;
  f32 local_194;
  float local_190;
  float local_18c;
  float local_188;
  float local_184;
  float local_180;
  float local_17c;
  float local_178;
  float local_170;
  float local_16c;
  float local_168;
  float local_160;
  float local_15c;
  float local_158;
  float local_154;
  float local_150;
  float local_14c;
  float local_148;
  float local_140;
  float local_13c;
  float local_138;
  float local_134;
  float local_130;
  float local_12c;
  float local_128;
  f32 local_124;
  float local_120;
  float local_11c;
  float local_118;
  char acStack_110 [72];
  
  lVar14 = (longlong)(int)moby;
  uVar13 = ZEXT48(&stack0x00000000);
  puVar12 = (undefined4 *)(uVar13 - 0xe0);
  puVar12[3] = in_vr31_32_3;
  puVar12[2] = in_vr31_32_2;
  puVar12[1] = in_vr31_32_1;
  *puVar12 = in_vr31_32_0;
  if (moby == (MobyInstance *)0x0) {
    return;
  }
  pfVar4 = (float *)moby->pVar;
  uVar21 = ZEXT48(pfVar4);
  if (pfVar4 == (float *)0x0) {
    return;
  }
  if (DAT_0096b2d0 == moby) {
    auVar43 = ZEXT416(0xffffffff);
    auVar41 = auVar43 | auVar43 << 0x20 | auVar43 << 0x40 | auVar43 << 0x60;
    auVar43 = ZEXT416(0xffffffff);
    auVar45 = auVar43 | auVar43 << 0x20 | auVar43 << 0x40 | auVar43 << 0x60;
    auVar41 = vectorShiftLeftIntegerWord(auVar41,auVar41);
    auVar42 = loadVectorLeftIndexed(0x15fc,0x969ce0);
    auVar43 = loadVectorLeftIndexed(uVar13 - 0xe0,0x32f8c8);
    auVar44 = loadVectorLeftIndexed(4,0x32f8c8);
    auVar43 = auVar43 >> 0x60 & (GPiece<16>)0xffffffff;
    auVar41 = vectorMultiplyAddFloatingPoint
                        (auVar42,auVar43 | auVar43 << 0x20 | auVar43 << 0x40 | auVar43 << 0x60,
                         auVar41);
    auVar43 = auVar44 >> 0x60 & (GPiece<16>)0xffffffff;
    auVar42 = vectorShiftLeftIntegerWord(auVar45,auVar45);
    auVar43 = vectorMultiplyAddFloatingPoint
                        (auVar41,auVar43 | auVar43 << 0x20 | auVar43 << 0x40 | auVar43 << 0x60,
                         auVar42);
    auVar43 = vectorConvertToSignedFixedPointWordSaturate(auVar43,0);
    auVar43 = auVar43 >> 0x60 & (GPiece<16>)0xffffffff;
    DAT_0096b2e8 = storeVectorElementWordIndexed
                             (auVar43 | auVar43 << 0x20 | auVar43 << 0x40 | auVar43 << 0x60,0x1608,
                              0x969ce0);
  }
  lVar19 = lVar14 + 0x10;
  dVar22 = (double)FUN_00342d38(lVar19);
  uVar1 = moby->state;
  dVar22 = (double)(float)(dVar22 + (double)pfVar4[0x28]);
  if ((((uVar1 != '\a') && (uVar1 != '\x01')) && (uVar1 != '\x02')) &&
     ((iVar15 = MB_damage(lVar14,0x30000,0), iVar15 != 0 && (moby->state == '\x04')))) {
    *(undefined1 *)((int)pfVar4 + 199) = 0x5a;
    MB_UpdateLightsTransition(lVar14,uVar21 + 0xc0);
    uVar7 = (int)*(uint *)(iVar15 + 0x2c) >> 0x1f;
    if ((int)((uVar7 >> 1 ^ *(uint *)(iVar15 + 0x2c)) - uVar7) <
        (int)(FLOAT_ORDER(DAT_0096b2dc))) {
      DAT_0096b2dc = DAT_0096b2dc - *(float *)(iVar15 + 0x2c);
      if ((*(uint *)(iVar15 + 0x30) & 1) != 0) {
        FUN_005e7f98((double)(*(float *)(iVar15 + 0x2c) * 0.125),uVar13 - 0x1d0,iVar15 + 0x10);
        if (0x3e19999a <
            (int)(FLOAT_ORDER(local_1c8)
                 )) {
          local_1c8 = 0.15;
        }
        FUN_005e8e80(0x3fd3333340000000,uVar13 - 0x1d0,uVar13 - 0x1d0);
        *pfVar4 = *pfVar4 + local_1d0;
        pfVar4[1] = pfVar4[1] + local_1cc;
        pfVar4[2] = pfVar4[2] + local_1c8;
      }
    }
    else {
      uVar28 = 0;
      DAT_0096b2dc = 0.0;
      moby->state = '\a';
      pfVar4[8] = 2.52234e-43;
      g_heroPosition.z = g_heroPosition.z + 0.2;
      g_heroMobyPtr->collisionMesh = (float *)0x0;
      TransitionMovement(0,1);
      DAT_0096b2d0 = (MobyInstance *)0x0;
      DAT_0096b2d4 = ~RATCHET;
      MB_genericExplosion
                (uVar28,uVar28,0x4010000000000000,0x4000000000000000,0x4022000000000000,
                 0x3ff0000000000000,0x402e000000000000,lVar14,uVar21,0,0xffffffffffffffff,1,10,3,
                 0x10);
    }
    moby->damage = -1;
  }
  MB_ColorDyingMoby(lVar14,uVar21 + 0xc0);
  uVar1 = moby->state;
  if (uVar1 == '\a') {
    iVar15 = FastDecTimerS32(uVar21 + 0x20);
    if (iVar15 != 0) {
      TransitionMovement(0,1);
      Hud_SetEntryValueById((int)DAT_0096b2ec,0);
      DAT_0096b2d0 = (MobyInstance *)0x0;
      DAT_0096b2d4 = 0xffff;
      DeleteMoby(moby);
      return;
    }
    pfVar4[4] = 0.0;
    dVar24 = (double)pfVar4[0x28];
    dVar23 = (double)FastIntToDouble(pfVar4[8]);
    pfVar4[0x28] = (float)(dVar24 - (double)(float)(1.0 / dVar23));
  }
  else if (uVar1 == '\x06') {
    pfVar4[4] = 0.0;
  }
  else if (uVar1 == '\x05') {
    iVar15 = FastDecTimerS32(uVar21 + 0x20);
    if (iVar15 != 0) {
      moby->state = '\x01';
      Hud_SetEntryValueById((int)DAT_0096b2ec,0);
      DAT_0096b2d0 = (MobyInstance *)0x0;
      DAT_0096b2d4 = ~RATCHET;
    }
    pfVar4[4] = 0.0;
  }
  else if (uVar1 == '\x04') {
    if ((g_heroState == STANDING) || (g_heroState == NEUTRAL_JUMP)) {
      TransitionMovement(0x32,1);
    }
    if ((g_Pad.downButtons & CROSS) == 0) {
      fVar16 = pfVar4[0x22];
      pfVar4[4] = 0.0;
      *pfVar4 = *pfVar4 * fVar16;
      pfVar4[1] = pfVar4[1] * fVar16;
      pfVar4[2] = pfVar4[2] * fVar16;
      fVar16 = 0.0;
    }
    else {
      fVar17 = (pfVar4[0x10] - pfVar4[0xf]) * pfVar4[0x12] + pfVar4[0xf];
      fVar16 = pfVar4[0x11];
      if (fVar17 - pfVar4[0x11] < 0.0) {
        fVar16 = fVar17;
      }
    }
    pfVar4[0xf] = fVar16;
    pfVar4[5] = (-(g_Pad.sticks.z * (pfVar4[0x13] + fVar16)) - pfVar4[5]) * pfVar4[0x15] +
                pfVar4[5];
    if ((g_Pad.downButtons & (SQUARE|CIRCLE|R1)) != 0) {
      iVar15 = FastDecTimerU8(uVar21 + 0x93);
      if (iVar15 != 0) {
        auVar43 = ZEXT416(0xfffffff8);
        auVar41 = loadVectorLeftIndexed(0x90,uVar21);
        auVar43 = vectorShiftRightWord
                            (auVar41,auVar43 | auVar43 << 0x20 | auVar43 << 0x40 | auVar43 << 0x60);
        if ((g_Pad.downButtons & CIRCLE) != 0) {
          if (DAT_0096b2d6 == '\0') goto LAB_003305c8;
          DAT_0096b2d6 = DAT_0096b2d6 + -1;
          auVar41 = ZEXT416(2);
          auVar43 = vectorShiftLeftIntegerWord
                              (auVar43,auVar41 | auVar41 << 0x20 | auVar41 << 0x40 | auVar41 << 0x60
                              );
        }
        auVar43 = auVar43 >> 0x60 & (GPiece<16>)0xffffffff;
        auVar43 = auVar43 | auVar43 << 0x20 | auVar43 << 0x40 | auVar43 << 0x60;
        MB_SphericalToVector
                  (pfVar4[0x27] * g_FrameTime,(moby->rotation).z,0.0,&local_1c0);
        local_1c0 = local_1c0 + *pfVar4;
        local_1bc = local_1bc + pfVar4[1];
        local_1b8 = local_1b8 + pfVar4[2];
        GetBonePosition(lVar14,0,uVar13 - 0x1b0);
        local_1b0 = local_1b0 + local_1c0;
        local_1ac = local_1ac + local_1bc;
        local_1a8 = local_1a8 + local_1b8;
        uVar28 = 0x3fd0000000000000;
        uVar31 = 0xbff0000000000000;
        uVar27 = 0x3fb99999a0000000;
        uVar26 = 0x3fc99999a0000000;
        FUN_003487b8(0x3fd0000000000000,0xbff0000000000000,0x3fb99999a0000000,0x3fc99999a0000000,
                     lVar14);
        GetBonePosition(lVar14,1,uVar13 - 0x1b0);
        local_1b0 = local_1b0 + local_1c0;
        local_1a8 = local_1a8 + local_1b8;
        local_1ac = local_1ac + local_1bc;
        FUN_003487b8(uVar28,uVar31,uVar27,uVar26,lVar14);
        PlayMobySound(0,0,moby);
        auVar41 = vectorConvertFromSignedFixedPointWord(auVar43,0);
        auVar43 = ZEXT416(0xffffffff);
        auVar43 = auVar43 | auVar43 << 0x20 | auVar43 << 0x40 | auVar43 << 0x60;
        auVar44 = loadVectorLeftIndexed(0x74,0x32f8c8);
        auVar42 = vectorShiftLeftIntegerWord(auVar43,auVar43);
        auVar43 = auVar44 >> 0x60 & (GPiece<16>)0xffffffff;
        auVar44 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
        auVar43 = vectorAddFloatingPoint
                            (auVar41,auVar43 | auVar43 << 0x20 | auVar43 << 0x40 | auVar43 << 0x60);
        auVar43 = vectorMultiplyAddFloatingPoint(auVar44,auVar43,auVar42);
        auVar43 = vectorConvertToSignedFixedPointWordSaturate(auVar43,0);
        auVar43 = auVar43 >> 0x60 & (GPiece<16>)0xff;
        uVar8 = storeVectorElementByteIndexed
                          (auVar43 | auVar43 << 8 | auVar43 << 0x10 | auVar43 << 0x18 |
                           auVar43 << 0x20 | auVar43 << 0x28 | auVar43 << 0x30 | auVar43 << 0x38 |
                           auVar43 << 0x40 | auVar43 << 0x48 | auVar43 << 0x50 | auVar43 << 0x58 |
                           auVar43 << 0x60 | auVar43 << 0x68 | auVar43 << 0x70 | auVar43 << 0x78,
                           0x93,uVar21);
        *(undefined1 *)((int)pfVar4 + 0x93) = uVar8;
      }
    }
  }
  else if (uVar1 == '\x03') {
    dVar36 = (double)((moby->pos).y - g_heroPosition.y);
    dVar37 = (double)((moby->pos).x - g_heroPosition.x);
    dVar24 = (double)((moby->pos).z - g_heroPosition.z);
    dVar23 = (double)FastDiffRots((double)(moby->rotation).z,(double)g_heroRotation.z);
    fVar16 = g_heroRotation.z;
    if ((SQRT((float)(dVar24 * dVar24 +
                     (double)(float)(dVar37 * dVar37 + (double)(float)(dVar36 * dVar36)))) < 0.1) &&
       (dVar23 < 0.10000000149011612)) {
      moby->state = '\x04';
    }
    g_heroPosition.x = (float)(dVar37 * 0.10000000149011612 + (double)g_heroPosition.x);
    g_heroPosition.y = (float)(dVar36 * 0.10000000149011612 + (double)g_heroPosition.y);
    g_heroPosition.z = (float)(dVar24 * 0.10000000149011612 + (double)g_heroPosition.z);
    dVar23 = (double)FastWrapRot(fVar16,(float)(dVar23 * 0.10000000149011612));
    g_heroRotation.z = (float)dVar23;
  }
  else if (uVar1 == '\x02') {
    TransitionMovement(0x32,1);
    g_heroMobyPtr->collisionMesh = (float *)0xffffffff;
    fVar16 = pfVar4[0x2e];
    pfVar4[4] = 0.0;
    if (fVar16 == 0.0) {
      fVar16 = (float)FUN_002b9870(lVar14);
      pfVar4[0x2e] = fVar16;
    }
    fVar17 = pfVar4[0x2f];
    if (fVar17 == 0.0) {
      fVar17 = (float)FUN_002b9870(lVar14);
      fVar16 = pfVar4[0x2e];
      pfVar4[0x2f] = fVar17;
    }
    if (fVar17 != 0.0 && fVar16 != 0.0) {
      moby->state = '\x03';
    }
    dVar24 = 0.10000000149011612;
    g_heroPosition.x = ((moby->pos).x - g_heroPosition.x) * 0.1 + g_heroPosition.x;
    g_heroPosition.y = ((moby->pos).y - g_heroPosition.y) * 0.1 + g_heroPosition.y;
    g_heroPosition.z = ((moby->pos).z - g_heroPosition.z) * 0.1 + g_heroPosition.z;
    dVar23 = (double)FastDiffRots((double)(moby->rotation).z,(double)g_heroRotation.z);
    dVar23 = (double)FastWrapRot(g_heroRotation.z,(float)(dVar23 * dVar24));
    g_heroRotation.z = (float)dVar23;
  }
  else if (uVar1 == '\x01') {
    dVar23 = (double)MB_BSphereGap(lVar14,g_heroMobyPtr);
    if (((dVar23 < 0.4000000059604645) &&
        (iVar15 = MB_CheckCollPill(moby,5,0,0), iVar15 != 0)) &&
       (g_CollOutput.pMoby == g_heroMobyPtr)) {
      moby->state = '\x02';
      DAT_0096b2d4 = moby->oClass;
      DAT_0096b2ee = 0;
      DAT_0096b2d6 = *(char *)((int)pfVar4 + 0x91);
      DAT_0096b2d7 = 100;
      DAT_0096b2d8 = 0x32;
      DAT_0096b2dc = pfVar4[0x26];
      DAT_0096b2e0 = 0x41200000;
      DAT_0096b2e4 = 0x40400000;
      DAT_0096b2d9 = *(undefined1 *)((int)pfVar4 + 0x92);
      DAT_0096b2da = 3;
      DAT_0096b2db = 3;
      DAT_0096b2ef = 0;
      DAT_0096b2d0 = moby;
      iVar15 = RegisterHUDCallback
                         (0x10,0xffff,&PTR_HudEntry_InitCounter_007056a0,
                          &PTR_HudEntry_UpdateCounter_007056c8,&PTR_Draw_MobyMeterHud_00705840,
                          &DAT_0096b2e8,200);
      DAT_0096b2ec = (short)iVar15;
    }
    pfVar4[4] = 0.0;
  }
  else if (uVar1 == '\0') {
    moby->state = '\x01';
    pfVar4[4] = 0.0;
    fVar2 = DAT_0071f408;
    fVar16 = pfVar4[0x14];
    fVar17 = pfVar4[0x13];
    if (pfVar4[0xb] == 0.0) {
      fVar16 = DAT_0071f408 * 2.0;
      pfVar4[0xd] = 0.004;
      pfVar4[0xc] = fVar16;
      pfVar4[0x10] = 0.125;
      auVar43 = ZEXT416(0xffffffff);
      auVar43 = auVar43 | auVar43 << 0x20 | auVar43 << 0x40 | auVar43 << 0x60;
      auVar41 = vectorShiftLeftIntegerWord(auVar43,auVar43);
      pfVar4[0xe] = fVar2 * 0.02;
      auVar43 = ZEXT416(0xffffffff);
      auVar43 = auVar43 | auVar43 << 0x20 | auVar43 << 0x40 | auVar43 << 0x60;
      pfVar4[0x12] = fVar2 * 0.05;
      fVar17 = fVar2 * 0.021;
      auVar42 = vectorShiftLeftIntegerWord(auVar43,auVar43);
      pfVar4[0x13] = fVar17;
      fVar16 = fVar2 * 0.025;
      pfVar4[0x14] = fVar16;
      pfVar4[0x16] = 20.0;
      pfVar4[0x17] = 90.0;
      pfVar4[0x15] = fVar2 * 0.11;
      pfVar4[0x18] = fVar2 * 0.009;
      pfVar4[0x19] = fVar2 * 0.01;
      fVar10 = fVar2 * -0.060000002 + 1.0;
      pfVar4[0x1a] = fVar10;
      pfVar4[0x1b] = fVar10;
      pfVar4[0x1c] = fVar2 * -0.01999998 + 1.0;
      pfVar4[0x1d] = fVar2 * 0.55;
      pfVar4[0x1e] = fVar2 * 0.1;
      pfVar4[0x20] = 0.015;
      pfVar4[0x21] = 0.25;
      pfVar4[0x1f] = fVar2 * 0.4;
      pfVar4[0x22] = fVar2 * -0.00999999 + 1.0;
      pfVar4[0x23] = g_FrameTimeSq * 9.8;
      auVar43 = loadVectorLeftIndexed(0x60,0x32f8c8);
      auVar44 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
      auVar43 = auVar43 >> 0x60 & (GPiece<16>)0xffffffff;
      auVar43 = vectorMultiplyAddFloatingPoint
                          (auVar44,auVar43 | auVar43 << 0x20 | auVar43 << 0x40 | auVar43 << 0x60,
                           auVar41);
      auVar43 = vectorConvertToSignedFixedPointWordSaturate(auVar43,0);
      auVar43 = auVar43 >> 0x60 & (GPiece<16>)0xff;
      uVar8 = storeVectorElementByteIndexed
                        (auVar43 | auVar43 << 8 | auVar43 << 0x10 | auVar43 << 0x18 |
                         auVar43 << 0x20 | auVar43 << 0x28 | auVar43 << 0x30 | auVar43 << 0x38 |
                         auVar43 << 0x40 | auVar43 << 0x48 | auVar43 << 0x50 | auVar43 << 0x58 |
                         auVar43 << 0x60 | auVar43 << 0x68 | auVar43 << 0x70 | auVar43 << 0x78,0x90,
                         uVar21);
      *(undefined1 *)(pfVar4 + 0x24) = uVar8;
      *(undefined1 *)((int)pfVar4 + 0x91) = 0x32;
      *(undefined1 *)((int)pfVar4 + 0x92) = 3;
      auVar43 = loadVectorLeftIndexed(100,0x32f8c8);
      auVar43 = auVar43 >> 0x60 & (GPiece<16>)0xffffffff;
      auVar43 = vectorMultiplyAddFloatingPoint
                          (auVar44,auVar43 | auVar43 << 0x20 | auVar43 << 0x40 | auVar43 << 0x60,
                           auVar42);
      auVar43 = vectorConvertToSignedFixedPointWordSaturate(auVar43,0);
      auVar43 = vectorSplatHalfWord(auVar43,1);
      uVar9 = storeVectorElementHalfWordIndexed(auVar43,0x94,uVar21);
      *(undefined2 *)(pfVar4 + 0x25) = uVar9;
      pfVar4[0x26] = 10.0;
      pfVar4[0x27] = 30.0;
      pfVar4[0x28] = 0.21;
      pfVar4[0x29] = 0.1;
      pfVar4[0x2c] = 0.5;
      pfVar4[0x2d] = 70.0;
      pfVar4[0x2a] = fVar2 * 0.9;
    }
    pfVar4[0x2b] = 0.0;
    pfVar4[0x11] = fVar16 - fVar17;
  }
LAB_003305c8:
  dVar36 = (double)((moby->pos).z + pfVar4[2]);
  pfVar4[6] = -(pfVar4[5] * pfVar4[0x16]);
  fVar16 = (-(pfVar4[5] * pfVar4[0x16]) - (moby->rotation).x) * pfVar4[0x18] + pfVar4[7];
  pfVar4[7] = fVar16;
  fVar16 = (moby->rotation).x + fVar16;
  (moby->rotation).x = fVar16;
  (moby->rotation).x = fVar16 * pfVar4[0x1a];
  pfVar4[9] = -(pfVar4[4] * pfVar4[0x17]);
  fVar16 = (-(pfVar4[4] * pfVar4[0x17]) - (moby->rotation).y) * pfVar4[0x19] + pfVar4[10];
  pfVar4[10] = fVar16;
  fVar16 = (moby->rotation).y + fVar16;
  (moby->rotation).y = fVar16;
  (moby->rotation).y = fVar16 * pfVar4[0x1b];
  dVar23 = (double)FastWrapRot((moby->rotation).z,pfVar4[5]);
  (moby->rotation).z = (float)dVar23;
  dVar23 = (double)cosf((float)dVar23);
  dVar24 = (double)FUN_005e8128((double)(moby->rotation).z);
  fVar16 = (float)dVar24;
  dVar24 = 0.0;
  if (*(short *)((int)pfVar4 + 0x96) < 1) {
    if (dVar36 < dVar22) {
      dVar37 = (double)*pfVar4;
      dVar36 = (double)cosf((moby->rotation).z);
      dVar38 = (double)pfVar4[1];
      *pfVar4 = (float)((double)pfVar4[4] * dVar36 + dVar37);
      dVar36 = (double)FUN_005e8128((double)(moby->rotation).z);
      pfVar4[1] = (float)((double)pfVar4[4] * dVar36 + dVar38);
      dVar36 = (double)((moby->pos).z + pfVar4[2]);
    }
  }
  else {
    *(short *)((int)pfVar4 + 0x96) = *(short *)((int)pfVar4 + 0x96) + -1;
    dVar37 = (double)*pfVar4;
    dVar36 = (double)cosf((moby->rotation).z);
    dVar38 = (double)pfVar4[1];
    *pfVar4 = (float)((double)pfVar4[0x29] * dVar36 + dVar37);
    dVar36 = (double)FUN_005e8128((double)(moby->rotation).z);
    pfVar4[1] = (float)((double)pfVar4[0x29] * dVar36 + dVar38);
    dVar36 = (double)((moby->pos).z + pfVar4[2]);
  }
  pfVar4[5] = pfVar4[5] * pfVar4[0x1c];
  if (*(short *)((int)pfVar4 + 0x96) == 0) {
    FUN_005e7ed8((double)pfVar4[0x1d],uVar21,uVar21);
  }
  else {
    FUN_005e7ed8((double)pfVar4[0x2a],uVar21,uVar21);
  }
  iVar15 = MB_CheckCollPill(moby,4,0,0);
  if (dVar36 < dVar22) {
    fVar17 = pfVar4[1];
    fVar2 = *pfVar4;
    dVar38 = (double)(float)(dVar22 - dVar36);
    dVar37 = 1.0;
    dVar39 = (double)SQRT(fVar2 * fVar2 + fVar17 * fVar17);
    dVar36 = (double)((float)(dVar38 * (double)pfVar4[0x1e]) * pfVar4[0x2d]);
    if (1.0 - dVar36 < 0.0) {
      dVar36 = dVar37;
    }
    fVar10 = (float)(dVar38 * (double)pfVar4[0x1e]) *
             ((float)((double)pfVar4[0xc] * dVar39) / pfVar4[0x1d] + 1.0) + pfVar4[2];
    pfVar4[2] = fVar10;
    dVar34 = (double)(fVar10 * 0.0 + fVar2 * (float)dVar23 + fVar17 * fVar16);
    dVar25 = dVar24;
    dVar35 = dVar24;
    if (dVar24 < dVar34) {
      dVar25 = (double)(((float)(dVar34 / dVar39) - (1.0 - pfVar4[0xd])) * (1.0 / pfVar4[0xd]));
      if (dVar25 - (double)pfVar4[0x2c] < 0.0) {
        dVar25 = (double)pfVar4[0x2c];
      }
      dVar35 = dVar34;
      if (1.0 < dVar25) {
        dVar25 = dVar37;
      }
    }
    dVar32 = (double)(float)(1.0 - dVar36);
    FUN_005e7ed8((double)(pfVar4[0x1d] * (float)((double)(float)(1.0 - dVar25) * dVar32 + dVar25)),
                 uVar21,uVar21);
    dVar36 = (double)cosf((moby->rotation).z);
    dVar25 = (double)FUN_005e8128((double)(moby->rotation).z);
    dVar30 = 1.5707963705062866;
    dVar34 = (double)FastWrapRot((moby->rotation).z,1.5707964);
    dVar34 = (double)cosf((float)dVar34);
    local_180 = (float)dVar34;
    FastWrapRot((moby->rotation).z,(float)dVar30);
    dVar34 = (double)FUN_005e8128();
    local_17c = (float)dVar34;
    local_178 = 0.0;
    local_190 = *pfVar4 * 0.9;
    local_18c = pfVar4[1] * 0.9;
    local_188 = pfVar4[2] * 0.9;
    local_184 = pfVar4[3];
    dVar34 = (double)MB_randRangeFloat(-0.2,0.2);
    local_1a0 = (float)((double)local_180 * dVar34 + (double)(moby->pos).x);
    local_19c = (float)((double)local_17c * dVar34 + (double)(moby->pos).y);
    local_198 = (float)((double)local_178 * dVar34 + (double)(moby->pos).z);
    local_194 = (moby->pos).w;
    dVar34 = (double)MB_randRangeFloat((float)dVar24,(float)dVar37);
    local_1a0 = (float)(dVar36 * dVar34 + (double)local_1a0);
    local_19c = (float)(dVar25 * dVar34 + (double)local_19c);
    uVar28 = 0x3fd99999a0000000;
    uVar31 = 0x3f747ae140000000;
    SpawnPart_38(0x3fd99999a0000000,0x3f747ae140000000,uVar13 - 0x1a0,uVar13 - 400);
    local_190 = *pfVar4 * 0.5;
    local_18c = pfVar4[1] * 0.5;
    local_188 = pfVar4[2] * 0.5;
    local_184 = pfVar4[3];
    dVar34 = (double)MB_randRangeFloat(-0.05,(float)dVar24);
    local_190 = (float)(dVar36 * dVar34 + (double)local_190);
    local_18c = (float)(dVar25 * dVar34 + (double)local_18c);
    dVar34 = (double)MB_randRangeFloat(-0.15,0.15);
    local_1a0 = (float)((double)local_180 * dVar34 + (double)(moby->pos).x);
    local_19c = (float)((double)local_17c * dVar34 + (double)(moby->pos).y);
    local_198 = (float)((double)local_178 * dVar34 + (double)(moby->pos).z);
    local_194 = (moby->pos).w;
    SpawnPart_38(uVar28,uVar31,uVar13 - 0x1a0,uVar13 - 400);
    if (dVar24 < dVar38) {
      dVar39 = (double)(float)(dVar38 * 16.0 + dVar39);
      dVar38 = (double)MB_randRangeFloat(-0.17,0.17);
      FUN_005e7f98((double)(float)(dVar39 + dVar38),uVar13 - 0x180,uVar13 - 0x180);
      dVar40 = (double)local_180;
      dVar33 = (double)local_17c;
      dVar29 = (double)local_178;
      local_1a0 = (float)((double)(moby->pos).x + dVar40);
      local_19c = (float)((double)(moby->pos).y + dVar33);
      dVar30 = 0.05000000074505806;
      local_198 = (float)((double)(moby->pos).z + dVar29);
      local_194 = (moby->pos).w;
      dVar34 = 1.2000000476837158;
      dVar38 = (double)MB_randRangeFloat((float)dVar24,1.2);
      local_1a0 = (float)(dVar36 * dVar38 + (double)local_1a0);
      local_19c = (float)(dVar25 * dVar38 + (double)local_19c);
      local_198 = (float)dVar22;
      dVar39 = 0.800000011920929;
      local_190 = (float)(dVar40 * dVar30 + (double)(*pfVar4 * 0.8));
      local_18c = (float)(dVar33 * dVar30 + (double)(pfVar4[1] * 0.8));
      local_188 = (float)(dVar29 * dVar30 + (double)(pfVar4[2] * 0.8));
      local_184 = pfVar4[3];
      uVar27 = 0x3f947ae140000000;
      MB_randCircle(0x3f947ae140000000,uVar13 - 0x170);
      local_190 = local_190 + local_170;
      local_18c = local_18c + local_16c;
      local_188 = local_188 + local_168;
      uVar28 = 0x3fd0000000000000;
      SpawnPart_38(0x3fd0000000000000,uVar31,uVar13 - 0x1a0,uVar13 - 400);
      local_1a0 = (moby->pos).x - local_180;
      local_19c = (moby->pos).y - local_17c;
      local_198 = (moby->pos).z - local_178;
      local_194 = (moby->pos).w;
      dVar38 = (double)MB_randRangeFloat((float)dVar24,(float)dVar34);
      local_1a0 = (float)(dVar36 * dVar38 + (double)local_1a0);
      local_19c = (float)(dVar25 * dVar38 + (double)local_19c);
      local_198 = (float)dVar22;
      local_190 = -(float)(dVar40 * dVar30 - (double)(float)((double)*pfVar4 * dVar39));
      local_18c = -(float)(dVar33 * dVar30 - (double)(float)((double)pfVar4[1] * dVar39));
      local_188 = -(float)(dVar29 * dVar30 - (double)(float)((double)pfVar4[2] * dVar39));
      local_184 = pfVar4[3];
      MB_randCircle(uVar27,uVar13 - 0x170);
      local_190 = local_190 + local_170;
      local_18c = local_18c + local_16c;
      local_188 = local_188 + local_168;
      SpawnPart_38(uVar28,uVar31,uVar13 - 0x1a0,uVar13 - 400);
    }
    dVar38 = (double)pfVar4[2];
    pfVar4[2] = 0.0;
    dVar36 = (double)(float)((double)(float)(dVar37 - (double)pfVar4[0x1f]) * dVar32 +
                            (double)pfVar4[0x1f]);
    FUN_005e7f98(dVar35,uVar13 - 0x1e0,uVar13 - 0x1e0);
    dVar22 = (double)(float)dVar23;
    *pfVar4 = (float)(dVar36 * (double)(float)((double)*pfVar4 - dVar22) + dVar22);
    pfVar4[1] = (float)(dVar36 * (double)(pfVar4[1] - fVar16) + (double)fVar16);
    pfVar4[2] = 0.0;
    pfVar4[2] = (float)dVar38;
    pfVar4[3] = local_1d4;
  }
  if (iVar15 != 0) {
    if ((g_CollOutput.pMoby == (MobyInstance *)0x0) ||
       (pMVar5 = g_CollOutput.pMoby, (g_CollOutput.pMoby)->oClass != DEVESTATOR_AMMO)) {
      local_160 = g_CollOutput.push.x - (moby->pos).x;
      local_15c = g_CollOutput.push.y - (moby->pos).y;
      local_158 = g_CollOutput.push.z - (moby->pos).z;
      local_154 = g_CollOutput.push.w;
      FUN_005e7f98((double)pfVar4[0x20],uVar13 - 0x160,uVar13 - 0x160);
      pMVar5 = g_CollOutput.pMoby;
      (moby->pos).x = g_CollOutput.push.x + local_160;
      (moby->pos).y = g_CollOutput.push.y + local_15c;
      (moby->pos).z = g_CollOutput.push.z + local_158;
      (moby->pos).w = g_CollOutput.push.w;
    }
    if ((pMVar5 == (MobyInstance *)0x0) || (MVar3 = pMVar5->oClass, MVar3 == SHUTTLE_01A8)) {
      uVar28 = FUN_005e8338((double)(g_CollOutput.ip.x - (moby->pos).x),
                            (double)(g_CollOutput.ip.y - (moby->pos).y));
      dVar23 = (double)FastDiffRots(uVar28,(double)(moby->rotation).z);
      dVar22 = -1.0;
      if (dVar24 - (double)(float)(dVar23 * 0.31830987334251404) < 0.0) {
        dVar22 = 1.0;
      }
      dVar22 = (double)(float)(dVar22 - (double)(float)(dVar23 * 0.31830987334251404));
      if ((((int)pfVar4[5] < 0) && (dVar24 < dVar22)) || ((0 < (int)pfVar4[5] && (dVar22 < dVar24)))
         ) {
        dVar22 = (double)(float)(dVar22 * 0.10000000149011612);
      }
      pfVar4[5] = -(float)(dVar22 * 0.05000000074505806 - (double)pfVar4[5]);
      if ((g_CollOutput.pMoby == (MobyInstance *)0x0) || ((g_CollOutput.pMoby)->oClass != SHUTTLE_01A8))
      {
        FastVecReflect(uVar21,uVar21,0xa10980);
        fVar16 = pfVar4[0x21];
        *pfVar4 = *pfVar4 * fVar16;
        pfVar4[1] = pfVar4[1] * fVar16;
        pfVar4[2] = pfVar4[2] * fVar16;
      }
      else {
        lVar18 = uVar13 - 0x120;
        FUN_005e7f98(0x3ff0000000000000,lVar18,0xa10980);
        lVar20 = uVar13 - 0x130;
        local_130 = (moby->pos).x + local_120;
        local_12c = (moby->pos).y + local_11c;
        local_128 = (moby->pos).z + local_118;
        local_124 = (moby->pos).w;
        STUB_00065468(lVar19,lVar20);
        local_130 = (moby->pos).x + *pfVar4;
        local_124 = (moby->pos).w;
        local_12c = (moby->pos).y + pfVar4[1];
        local_128 = (moby->pos).z + pfVar4[2];
        STUB_00065468(lVar19,lVar20);
        FUN_005e8f4c(uVar13 - 0x150,uVar21,lVar18);
        local_130 = (moby->pos).x + local_150;
        local_12c = (moby->pos).y + local_14c;
        local_128 = (moby->pos).z + local_148;
        local_124 = (moby->pos).w;
        STUB_00065468(lVar19,lVar20);
        FUN_005e8f4c(uVar13 - 0x140,lVar18,uVar13 - 0x150);
        *pfVar4 = local_140;
        pfVar4[1] = local_13c;
        pfVar4[2] = local_138;
        pfVar4[3] = local_134;
        local_130 = (moby->pos).x + local_140;
        local_12c = (moby->pos).y + local_13c;
        local_128 = (moby->pos).z + local_138;
        local_124 = (moby->pos).w;
        STUB_00065468(lVar19,lVar20);
      }
    }
    else if ((0xcc < (short)MVar3) && (MVar3 == 0x149)) {
      *pfVar4 = *pfVar4 * 0.8;
      pfVar4[1] = pfVar4[1] * 0.8;
      pfVar4[2] = pfVar4[2] * 0.8;
    }
  }
  pfVar4[2] = pfVar4[2] - pfVar4[0x23];
  fVar16 = (moby->pos).x + *pfVar4;
  uVar1 = moby->state;
  (moby->pos).x = fVar16;
  (moby->pos).y = (moby->pos).y + pfVar4[1];
  (moby->pos).z = (moby->pos).z + pfVar4[2];
  if (uVar1 == '\x04') {
    DAT_00969e44 = SQRT(*pfVar4 * *pfVar4 + pfVar4[1] * pfVar4[1]);
    snprintf(acStack_110,"SPEED: %f km/h",(double)(DAT_00969e44 * 216.0));
    DebugFontPrintLeft(0x119,0x15,0x80000000,acStack_110);
    DebugFontPrintLeft(0x118,0x14,0x80f0f0f0,acStack_110);
    M291_0032f620(lVar14,uVar21);
    fVar16 = (moby->pos).x;
  }
  iVar15 = g_NumLameShadows;
  if ((DAT_0083be04 != 0) && (g_NumLameShadows < 0x20)) {
    (&g_LameShadows)[g_NumLameShadows * 8] = fVar16;
    (&DAT_0095e5f4)[iVar15 * 8] = (moby->pos).y;
    (&DAT_0095e5f8)[iVar15 * 8] = (moby->pos).z;
    (&DAT_0095e5fc)[iVar15 * 8] = (moby->pos).w;
    dVar22 = (double)FUN_00342d38(lVar19);
    FUN_00342d40(lVar19,&DAT_0095e600 + g_NumLameShadows * 8);
    *(undefined4 *)(&DAT_0095e60c + g_NumLameShadows * 0x20) = 0;
    (&DAT_0095e5f8)[g_NumLameShadows * 8] = (float)(dVar22 + 0.07500000298023224);
    fVar16 = (8.0 - ABS((moby->pos).z - (float)(dVar22 + 0.07500000298023224))) * 0.125;
    if (fVar16 - 0.25 < 0.0) {
      fVar16 = 0.25;
    }
    iVar15 = g_NumLameShadows * 8;
    g_NumLameShadows = g_NumLameShadows + 1;
    (&DAT_0095e5fc)[iVar15] = fVar16 * 1.5;
    fVar16 = (moby->pos).x;
  }
  fVar17 = 5.0;
  if (fVar16 < 5.0) {
    (moby->pos).x = 5.0;
    fVar16 = fVar17;
  }
  fVar2 = 500.0;
  if (500.0 < fVar16) {
    (moby->pos).x = 500.0;
    fVar16 = fVar2;
  }
  fVar6 = (moby->pos).y;
  uVar7 = (int)fVar6 >> 0x1f;
  fVar10 = (moby->pos).y;
  if ((int)((uVar7 >> 1 ^ (uint)fVar6) - uVar7) < 0x40a00000) {
    (moby->pos).y = 5.0;
    fVar10 = fVar17;
  }
  if (500.0 < fVar10) {
    (moby->pos).y = 500.0;
    fVar10 = fVar2;
  }
  fVar6 = (moby->pos).z;
  uVar7 = (int)fVar6 >> 0x1f;
  fVar11 = (moby->pos).z;
  if ((int)((uVar7 >> 1 ^ (uint)fVar6) - uVar7) < 0x40a00000) {
    (moby->pos).z = 5.0;
    fVar11 = fVar17;
  }
  if (500.0 < fVar11) {
    (moby->pos).z = 500.0;
    fVar11 = fVar2;
  }
  if (moby->state == '\x04') {
    g_heroPosition.w = (moby->pos).w;
    g_heroRotation.x = (moby->rotation).x;
    g_heroRotation.y = (moby->rotation).y;
    g_heroRotation.z = (moby->rotation).z;
    g_heroRotation.w = (moby->rotation).w;
    g_heroPosition.x = fVar16;
    g_heroPosition.y = fVar10;
    g_heroPosition.z = fVar11;
  }
  return;
}


