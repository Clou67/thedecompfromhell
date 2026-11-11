// game/update/moby282.cpp -- reconstructed from NPEA00385 EBOOT
// STATUS: NOT STARTED (raw Ghidra output)
// 3 functions, 0x32ca80-0x32dac4
#include "game/update/moby282.h"
#include "game/camera.h"
#include "game/freeze.h"
#include "game/hero.h"
#include "game/map.h"
#include "game/memcard.h"
#include "game/mobyfunc.h"
#include "game/mobyproc.h"
#include "game/mobyutil.h"
#include "game/respawn.h"
#include "game/space.h"
#include "game/update.h"
#include "game/update/moby1118.h"
#include "game/update/moby1130.h"
#include "idol/fastfunc.h"
#include "idol/mUnk.h"

// 0x032ca80 (0x320 bytes)
// inlined: FastAtan2 @0x32cc48
MobyInstance *
FUN_0032ca80(double param_1,undefined4 param_2,f32 *param_3,float *param_4,undefined8 param_5,
            undefined4 param_6)

{
  float fVar1;
  float fVar2;
  float fVar3;
  void *pvVar4;
  float fVar5;
  float fVar6;
  undefined2 uVar7;
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
  ulonglong unaff_r26;
  ulonglong unaff_r27;
  ulonglong unaff_r28;
  ulonglong unaff_r29;
  ulonglong unaff_r30;
  ulonglong unaff_r31;
  ulonglong in_LR;
  longlong lVar19;
  double dVar20;
  ulonglong in_f31;
  GPiece<16> auVar21;
  GPiece<16> auVar22;
  GPiece<16> auVar23;
  GPiece<16> auVar24;
  
  uVar11 = ZEXT48(&stack0x00000000);
  lVar12 = uVar11 - 0xd0;
  puVar8 = (ulonglong *)lVar12;
  *puVar8 = uVar11;
  puVar8[0x1c] = in_LR;
  puVar8[0x19] = in_f31;
  puVar8[0x14] = unaff_r27;
  puVar8[0x17] = unaff_r30;
  puVar8[0x16] = unaff_r29;
  puVar8[0x15] = unaff_r28;
  puVar8[0x18] = unaff_r31;
  puVar8[0x13] = unaff_r26;
  pMVar13 = CreateMoby(BOMB_0119);
  if (pMVar13 != (MobyInstance *)0x0) {
    pvVar4 = pMVar13->pVar;
    auVar21 = ZEXT416(0xffffffff);
    auVar22 = auVar21 | auVar21 << 0x20 | auVar21 << 0x40 | auVar21 << 0x60;
    pMVar13->updateDistance = -1;
    pMVar13->drawDistance = 0xff;
    pMVar13->enabled = '\x01';
    pMVar13->state = '\x01';
    *(undefined4 *)((int)pvVar4 + 0x20) = param_2;
    *(float *)((int)pvVar4 + 0x24) = (float)param_1;
    *(undefined4 *)((int)pvVar4 + 0x28) = param_6;
    auVar21 = loadVectorLeftIndexed(in_LR,0x32ca5c);
    auVar22 = vectorShiftLeftIntegerWord(auVar22,auVar22);
    auVar21 = auVar21 >> 0x60 & (GPiece<16>)0xffffffff;
    auVar24 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
    auVar22 = vectorMultiplyAddFloatingPoint
                        (auVar24,auVar21 | auVar21 << 0x20 | auVar21 << 0x40 | auVar21 << 0x60,
                         auVar22);
    auVar21 = ZEXT416(0xffffffff);
    auVar21 = auVar21 | auVar21 << 0x20 | auVar21 << 0x40 | auVar21 << 0x60;
    auVar23 = vectorShiftLeftIntegerWord(auVar21,auVar21);
    auVar21 = vectorConvertToSignedFixedPointWordSaturate(auVar22,0);
    auVar21 = vectorSplatHalfWord(auVar21,1);
    uVar7 = storeVectorElementHalfWordIndexed(auVar21,0xc,ZEXT48(pvVar4));
    *(undefined2 *)((int)pvVar4 + 0xc) = uVar7;
    auVar21 = loadVectorLeftIndexed(4,0x32ca5c);
    auVar21 = auVar21 >> 0x60 & (GPiece<16>)0xffffffff;
    auVar21 = vectorMultiplyAddFloatingPoint
                        (auVar24,auVar21 | auVar21 << 0x20 | auVar21 << 0x40 | auVar21 << 0x60,
                         auVar23);
    auVar21 = vectorConvertToSignedFixedPointWordSaturate(auVar21,0);
    auVar21 = vectorSplatHalfWord(auVar21,1);
    uVar7 = storeVectorElementHalfWordIndexed(auVar21,0xe,ZEXT48(pvVar4));
    *(undefined2 *)((int)pvVar4 + 0xe) = uVar7;
    (pMVar13->pos).x = *param_3;
    (pMVar13->pos).y = param_3[1];
    (pMVar13->pos).z = param_3[2];
    (pMVar13->pos).w = param_3[3];
    *(float *)((int)pvVar4 + 0x10) = *param_4;
    *(float *)((int)pvVar4 + 0x14) = param_4[1];
    *(float *)((int)pvVar4 + 0x18) = param_4[2];
    *(float *)((int)pvVar4 + 0x1c) = param_4[3];
    dVar20 = (double)MB_randRangeFloat(-180.0,180.0);
    (pMVar13->rotation).x = (float)(dVar20 * 0.01745329238474369);
    fVar5 = *param_4;
    fVar6 = param_4[1];
    fVar2 = ABS(*param_4);
    fVar3 = ABS(param_4[1]);
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
      lVar17 = uVar11 - 0xc0;
      lVar16 = uVar11 - 0x5c;
      lVar15 = uVar11 - 0x4c;
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
      lVar17 = uVar11 - 0x5c;
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
        iVar10 = (int)lVar17;
        lVar12 = lVar12 + 0x10;
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


// 0x032cda0 (0xf4 bytes)
// strings: 0096c074: 'None'

void M282_0032cda0(int param_1)

{
  short sVar1;
  int iVar2;
  undefined4 *puVar3;
  
  if ((g_gameMode == GAME_MODE_SCENE) && (Cheats[0] != '\0')) {
    iVar2 = 0;
    puVar3 = &DAT_0095cd50;
    sVar1 = g_SpaceSceneMobyCnt.piece<0,2>();
    if (0 < g_SpaceSceneMobyCnt.piece<0,2>()) {
      do {
        if ((((MobyInstance *)puVar3[0x5e])->oClass == *(MOBY_OCLASSES *)(param_1 + 0xa6)) &&
           (DAT_00a1bf81 == '\0')) {
          AttachManipulator((MobyInstance *)puVar3[0x5e],1,&DAT_00a1bf80);
          DAT_00a1bfa0 = 0x40300000;
          DAT_00a1bfa4 = 0x40300000;
          DAT_00a1bfa8 = 0x40300000;
          sVar1 = g_SpaceSceneMobyCnt.piece<0,2>();
        }
        iVar2 = iVar2 + 1;
        puVar3 = puVar3 + 1;
      } while (iVar2 < sVar1);
    }
  }
  return;
}


// 0x032cef0 (0xbd4 bytes)
// inlined: FastAtan2 @0x32d278, FastAtan2 @0x32d624, FastAtan2 @0x32d7d8
// strings: 0096c074: 'None'

/* Moby 282 */

void UpdateMoby_282(MobyInstance *moby)

{
  byte bVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  void *pvVar8;
  ulonglong *puVar9;
  float fVar10;
  int iVar11;
  gameMode_t gVar12;
  ulonglong uVar13;
  ulonglong uVar14;
  int iVar17;
  undefined4 uVar18;
  longlong lVar15;
  longlong lVar16;
  MobyInstance *pMVar19;
  short sVar22;
  float *pfVar21;
  longlong lVar20;
  longlong lVar23;
  ulonglong unaff_r26;
  undefined4 *puVar24;
  ulonglong unaff_r27;
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
  ulonglong in_f27;
  ulonglong in_f28;
  ulonglong in_f29;
  double dVar30;
  double dVar31;
  ulonglong in_f30;
  double dVar32;
  double dVar33;
  ulonglong in_f31;
  double dVar34;
  GPiece<16> auVar35;
  GPiece<16> auVar36;
  GPiece<16> auVar37;
  
  uVar13 = ZEXT48(&stack0x00000000);
  lVar16 = uVar13 - 0x160;
  puVar9 = (ulonglong *)lVar16;
  *puVar9 = uVar13;
  puVar9[0x2e] = in_LR;
  puVar9[0x27] = in_f27;
  puVar9[0x28] = in_f28;
  puVar9[0x29] = in_f29;
  puVar9[0x2a] = in_f30;
  puVar9[0x2b] = in_f31;
  puVar9[0x26] = unaff_r31;
  puVar9[0x25] = unaff_r30;
  gVar12 = g_gameMode;
  pvVar8 = moby->pVar;
  uVar25 = ZEXT48(pvVar8);
  puVar9[0x24] = unaff_r29;
  puVar9[0x23] = unaff_r28;
  puVar9[0x22] = unaff_r27;
  puVar9[0x21] = unaff_r26;
  if ((gVar12 == GAME_MODE_SCENE) && (Cheats[0] != '\0')) {
    iVar17 = 0;
    puVar24 = &DAT_0095cd50;
    sVar22 = g_SpaceSceneMobyCnt.piece<0,2>();
    if (0 < g_SpaceSceneMobyCnt.piece<0,2>()) {
      do {
        if ((((MobyInstance *)puVar24[0x5e])->oClass == moby->oClass) && (DAT_00a1bf81 == '\0')) {
          AttachManipulator((MobyInstance *)puVar24[0x5e],1,&DAT_00a1bf80);
          DAT_00a1bfa0 = 0x40300000;
          DAT_00a1bfa4 = 0x40300000;
          DAT_00a1bfa8 = 0x40300000;
          sVar22 = g_SpaceSceneMobyCnt.piece<0,2>();
        }
        iVar17 = iVar17 + 1;
        puVar24 = puVar24 + 1;
      } while (iVar17 < sVar22);
    }
  }
  bVar1 = moby->state;
  if (bVar1 == 0) {
    if (g_MiscLevelFlags.Raritanium != false) {
      DeleteMoby(moby);
      return;
    }
    moby->state = '\x01';
    FUN_004d3720(moby,uVar25 + 0x20);
    MB_SetZBoundsFromPos(moby);
  }
  else if (bVar1 < 2) {
    if ((g_MiscLevelFlags.Raritanium == false) &&
       (iVar17 = FUN_004d3870(moby,uVar25 + 0x20), iVar17 != 0)) {
      MB_SetPointAheadOfMoby(0x4004000000000000,moby);
      moby->state = '\x02';
      moby->unk58 = 0.0;
    }
  }
  else if ((bVar1 < 3) && (g_gameMode != GAME_MODE_SCENE)) {
    moby->unk58 = 1.0;
    g_MiscLevelFlags.Raritanium = true;
    puVar9[0x1f] = (longlong)(int)(animationSpeed * 300.5);
    MB_ToastMessage(0x2ee7,*(undefined4 *)((int)puVar9 + 0xfc));
    g_MiscLevelFlags.field97_0x61 = 1;
    SetLevelFlag(moby->levelFlagIdx);
    iVar17 = *(int *)((int)pvVar8 + 0x170);
    if (iVar17 != -1) {
      SetSpawnPoint((Vec4 *)&Cuboids[iVar17].pos,(Vec4 *)&Cuboids[iVar17].rot);
    }
    memcard_Save(0,-1);
    moby->state = '\x01';
  }
  dVar34 = 0.019999999552965164;
  if (moby->animationId != '\0') goto LAB_0032d97c;
  fVar2 = (moby->pos).y;
  fVar3 = (moby->pos).x;
  fVar5 = fVar2 - g_heroPosition.y;
  fVar6 = fVar3 - g_heroPosition.x;
  if (8.0 <= SQRT(fVar6 * fVar6 + fVar5 * fVar5)) {
LAB_0032d428:
    if (*(int *)((int)pvVar8 + 0x178) != 0) {
      *(undefined4 *)((int)pvVar8 + 0x178) = 0;
      *(float *)((int)pvVar8 + 0x160) = g_heroCGPos;
      *(float *)((int)pvVar8 + 0x164) = DAT_00969db4;
      *(float *)((int)pvVar8 + 0x168) = DAT_00969db8;
      *(undefined4 *)((int)pvVar8 + 0x16c) = DAT_00969dbc;
    }
  }
  else {
    fVar3 = g_heroCGPos - fVar3;
    fVar2 = DAT_00969db4 - fVar2;
    fVar5 = ABS(fVar3);
    fVar4 = ABS(fVar2);
    *(float *)(puVar9 + 0x11) = fVar3;
    *(float *)((int)puVar9 + 0x8c) = fVar2;
    fVar2 = (moby->rotation).z;
    *(float *)(puVar9 + 0x12) = fVar5 - fVar4;
    fVar3 = 0.0;
    uVar14 = (ulonglong)(*(uint *)(puVar9 + 0x11) >> 0x1c) & 8 |
             (ulonglong)(*(uint *)(puVar9 + 0x12) >> 0x1e) & 2 |
             (ulonglong)(*(uint *)((int)puVar9 + 0x8c) >> 0x1d) & 4;
    fVar6 = ABS(*(float *)(puVar9 + 0x11));
    if (*(float *)(puVar9 + 0x12) - 0.0 < 0.0) {
      fVar6 = fVar4;
    }
    fVar7 = *(float *)(&g_atanQuadrantTable + (int)(uVar14 << 2));
    fVar4 = *(float *)(((uint)(uVar14 << 2) | 0x735900) + 4);
    fVar10 = ABS(*(float *)((int)puVar9 + 0x8c));
    if (*(float *)(puVar9 + 0x12) - 0.0 < 0.0) {
      fVar10 = fVar5;
    }
    if (0.0 < fVar6) {
      lVar15 = uVar13 - 0x150;
      lVar23 = uVar13 - 0x7c;
      lVar20 = uVar13 - 0x8c;
      lVar26 = 2;
      fVar5 = (fVar10 - fVar6) / (fVar10 + fVar6);
      fVar6 = fVar5 * fVar5;
      *(float *)(puVar9 + 0x1c) = fVar5;
      *(float *)(puVar9 + 0x1b) = fVar5;
      *(float *)((int)puVar9 + 0xdc) = fVar5;
      *(float *)((int)puVar9 + 0xd4) = fVar5;
      fVar5 = fVar6 * fVar6;
      *(float *)(puVar9 + 0x1b) = *(float *)(puVar9 + 0x1b) * fVar6;
      *(float *)((int)puVar9 + 0xdc) = *(float *)((int)puVar9 + 0xdc) * fVar5;
      *(float *)(puVar9 + 0x1c) = *(float *)(puVar9 + 0x1c) * fVar5 * fVar6;
      do {
        *(float *)((int)lVar15 + 0xd4) = *(float *)((int)lVar15 + 0xc4) * fVar5 * fVar5;
        iVar17 = (int)lVar20;
        lVar20 = lVar20 + 8;
        lVar15 = lVar15 + 8;
        *(float *)((int)lVar23 + 4) = *(float *)(iVar17 + 4) * fVar5 * fVar5;
        lVar23 = lVar23 + 8;
        lVar26 = lVar26 + -1;
      } while (lVar26 != 0);
      lVar26 = 4;
      lVar23 = uVar13 - 0x8c;
      pfVar21 = (float *)&DAT_007358e0;
      lVar15 = lVar16;
      lVar20 = lVar23;
      do {
        fVar5 = *pfVar21;
        fVar6 = pfVar21[1];
        pfVar21 = pfVar21 + 2;
        *(float *)((int)lVar15 + 0xd4) = *(float *)((int)lVar15 + 0xd4) * fVar5;
        lVar15 = lVar15 + 8;
        *(float *)((int)lVar20 + 4) = *(float *)((int)lVar20 + 4) * fVar6;
        lVar20 = lVar20 + 8;
        lVar26 = lVar26 + -1;
      } while (lVar26 != 0);
      lVar20 = 2;
      lVar15 = lVar16;
      do {
        iVar17 = (int)lVar15;
        lVar15 = lVar15 + 0x10;
        iVar11 = (int)lVar23;
        lVar23 = lVar23 + 0x10;
        fVar3 = fVar3 + *(float *)(iVar17 + 0xd4) + *(float *)(iVar11 + 4) + *(float *)(iVar11 + 8)
                + *(float *)(iVar11 + 0xc);
        lVar20 = lVar20 + -1;
      } while (lVar20 != 0);
      fVar3 = (fVar3 + 0.7853982) * fVar7 + fVar4;
    }
    dVar27 = (double)FastSubRots(fVar2,fVar3);
    if (1.5707963705062866 <= dVar27) goto LAB_0032d428;
    if (SQRT(DAT_00969de8 * DAT_00969de8 + DAT_00969de0 * DAT_00969de0 + DAT_00969de4 * DAT_00969de4
            ) <= 0.01) {
      FastDecTimerS32(uVar25 + 0x178);
    }
    else {
      auVar35 = ZEXT416(0xffffffff);
      auVar35 = auVar35 | auVar35 << 0x20 | auVar35 << 0x40 | auVar35 << 0x60;
      auVar36 = vectorShiftLeftIntegerWord(auVar35,auVar35);
      auVar35 = loadVectorLeftIndexed(0x20,0x32ce94);
      auVar35 = auVar35 >> 0x60 & (GPiece<16>)0xffffffff;
      auVar37 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
      auVar35 = vectorMultiplyAddFloatingPoint
                          (auVar37,auVar35 | auVar35 << 0x20 | auVar35 << 0x40 | auVar35 << 0x60,
                           auVar36);
      auVar35 = vectorConvertToSignedFixedPointWordSaturate(auVar35,0);
      auVar35 = auVar35 >> 0x60 & (GPiece<16>)0xffffffff;
      uVar18 = storeVectorElementWordIndexed
                         (auVar35 | auVar35 << 0x20 | auVar35 << 0x40 | auVar35 << 0x60,0x178,uVar25
                         );
      *(undefined4 *)((int)pvVar8 + 0x178U & 0xfffffffc) = uVar18;
    }
  }
  iVar17 = FastDecTimerS32(uVar25 + 0x17c);
  if (iVar17 != 0) {
    dVar27 = (double)MB_randRangeFloat(180.0,300.0);
    uVar18 = FastDoubleToInt((double)(float)(dVar27 * (double)animationSpeed));
    *(undefined4 *)((int)pvVar8 + 0x17c) = uVar18;
    dVar32 = (double)(moby->rotation).z;
    dVar27 = (double)MB_randRangeFloat(-90.0,90.0);
    dVar30 = 0.01745329238474369;
    dVar27 = (double)FastWrapRot((float)dVar32,(float)(dVar27 * 0.01745329238474369));
    dVar32 = (double)MB_randRangeFloat(0.0,30.0);
    MB_SphericalToVector
              (6.0,(float)dVar27,(float)(dVar32 * dVar30),(float *)((int)pvVar8 + 0x160));
    *(float *)((int)pvVar8 + 0x160) = *(float *)((int)pvVar8 + 0x160) + (moby->pos).x;
    *(float *)((int)pvVar8 + 0x164) = *(float *)((int)pvVar8 + 0x164) + (moby->pos).y;
    *(float *)((int)pvVar8 + 0x168) = *(float *)((int)pvVar8 + 0x168) + (moby->pos).z;
  }
  if (*(int *)((int)pvVar8 + 0x178) == 0) {
    fVar2 = *(float *)((int)pvVar8 + 0x160);
    fVar3 = *(float *)((int)pvVar8 + 0x164);
    fVar5 = *(float *)((int)pvVar8 + 0x168);
  }
  else {
    dVar34 = 0.03999999910593033;
    fVar2 = g_heroCGPos;
    fVar3 = DAT_00969db4;
    fVar5 = DAT_00969db8;
  }
  fVar2 = fVar2 - (moby->pos).x;
  dVar33 = (double)fVar2;
  fVar3 = fVar3 - (moby->pos).y;
  dVar31 = (double)fVar3;
  *(float *)((int)puVar9 + 0x7c) = fVar2;
  *(float *)(puVar9 + 0x10) = fVar3;
  dVar30 = (double)(fVar5 - ((moby->pos).z + 1.0));
  *(float *)((int)puVar9 + 0x84) = (float)(ABS(dVar33) - ABS(dVar31));
  dVar32 = 0.0;
  uVar14 = (ulonglong)(*(uint *)((int)puVar9 + 0x7c) >> 0x1c) & 8 |
           (ulonglong)(*(uint *)((int)puVar9 + 0x84) >> 0x1e) & 2 |
           (ulonglong)(*(uint *)(puVar9 + 0x10) >> 0x1d) & 4;
  dVar27 = ABS((double)*(float *)((int)puVar9 + 0x7c));
  if (*(float *)((int)puVar9 + 0x84) - 0.0 < 0.0) {
    dVar27 = ABS(dVar31);
  }
  fVar2 = *(float *)(&g_atanQuadrantTable + (int)(uVar14 << 2));
  dVar29 = ABS((double)*(float *)(puVar9 + 0x10));
  if (*(float *)((int)puVar9 + 0x84) - 0.0 < 0.0) {
    dVar29 = ABS(dVar33);
  }
  fVar3 = *(float *)(((uint)(uVar14 << 2) | 0x735900) + 4);
  dVar28 = dVar32;
  if (0.0 < dVar27) {
    lVar15 = uVar13 - 0x150;
    lVar20 = uVar13 - 0xac;
    lVar23 = uVar13 - 0x9c;
    lVar26 = 2;
    fVar5 = (float)(dVar29 - dVar27) / (float)(dVar29 + dVar27);
    fVar6 = fVar5 * fVar5;
    *(float *)(puVar9 + 0x18) = fVar5;
    *(float *)(puVar9 + 0x17) = fVar5;
    *(float *)((int)puVar9 + 0xbc) = fVar5;
    *(float *)((int)puVar9 + 0xb4) = fVar5;
    fVar5 = fVar6 * fVar6;
    *(float *)(puVar9 + 0x17) = *(float *)(puVar9 + 0x17) * fVar6;
    *(float *)((int)puVar9 + 0xbc) = *(float *)((int)puVar9 + 0xbc) * fVar5;
    *(float *)(puVar9 + 0x18) = *(float *)(puVar9 + 0x18) * fVar5 * fVar6;
    do {
      *(float *)((int)lVar15 + 0xb4) = *(float *)((int)lVar15 + 0xa4) * fVar5 * fVar5;
      iVar17 = (int)lVar20;
      lVar15 = lVar15 + 8;
      lVar20 = lVar20 + 8;
      *(float *)((int)lVar23 + 4) = *(float *)(iVar17 + 4) * fVar5 * fVar5;
      lVar23 = lVar23 + 8;
      lVar26 = lVar26 + -1;
    } while (lVar26 != 0);
    lVar26 = 4;
    lVar23 = uVar13 - 0xac;
    pfVar21 = (float *)&DAT_007358e0;
    lVar15 = lVar16;
    lVar20 = lVar23;
    do {
      fVar5 = *pfVar21;
      fVar6 = pfVar21[1];
      pfVar21 = pfVar21 + 2;
      *(float *)((int)lVar15 + 0xb4) = *(float *)((int)lVar15 + 0xb4) * fVar5;
      lVar15 = lVar15 + 8;
      *(float *)((int)lVar20 + 4) = *(float *)((int)lVar20 + 4) * fVar6;
      lVar20 = lVar20 + 8;
      lVar26 = lVar26 + -1;
    } while (lVar26 != 0);
    lVar20 = 2;
    lVar15 = lVar16;
    dVar27 = dVar32;
    do {
      iVar17 = (int)lVar15;
      lVar15 = lVar15 + 0x10;
      iVar11 = (int)lVar23;
      lVar23 = lVar23 + 0x10;
      dVar27 = (double)((float)(dVar27 + (double)*(float *)(iVar17 + 0xb4)) + *(float *)(iVar11 + 4)
                        + *(float *)(iVar11 + 8) + *(float *)(iVar11 + 0xc));
      lVar20 = lVar20 + -1;
    } while (lVar20 != 0);
    dVar28 = (double)((float)(dVar27 + 0.7853981852531433) * fVar2 + fVar3);
  }
  dVar29 = (double)FastDiffRots(dVar28,(double)(moby->rotation).z);
  *(float *)((int)puVar9 + 0x74) = (float)dVar30;
  fVar2 = SQRT((float)(dVar33 * dVar33 + (double)(float)(dVar31 * dVar31)));
  dVar31 = ABS((double)fVar2);
  *(float *)(puVar9 + 0xe) = fVar2;
  *(float *)(puVar9 + 0xf) = (float)(dVar31 - ABS(dVar30));
  uVar14 = (ulonglong)(*(uint *)(puVar9 + 0xe) >> 0x1c) & 8 |
           (ulonglong)(*(uint *)(puVar9 + 0xf) >> 0x1e) & 2 |
           (ulonglong)(*(uint *)((int)puVar9 + 0x74) >> 0x1d) & 4;
  dVar27 = ABS((double)*(float *)(puVar9 + 0xe));
  if ((double)*(float *)(puVar9 + 0xf) - dVar32 < 0.0) {
    dVar27 = ABS(dVar30);
  }
  fVar3 = *(float *)(&g_atanQuadrantTable + (int)(uVar14 << 2));
  fVar2 = *(float *)(((uint)(uVar14 << 2) | 0x735900) + 4);
  dVar30 = ABS((double)*(float *)((int)puVar9 + 0x74));
  if ((double)*(float *)(puVar9 + 0xf) - dVar32 < 0.0) {
    dVar30 = dVar31;
  }
  if (dVar32 < dVar27) {
    lVar15 = uVar13 - 0x150;
    lVar23 = uVar13 - 0xbc;
    lVar20 = uVar13 - 0xcc;
    lVar26 = 2;
    fVar5 = (float)(dVar30 - dVar27) / (float)(dVar30 + dVar27);
    fVar6 = fVar5 * fVar5;
    *(float *)(puVar9 + 0x14) = fVar5;
    *(float *)(puVar9 + 0x13) = fVar5;
    *(float *)((int)puVar9 + 0x9c) = fVar5;
    *(float *)((int)puVar9 + 0x94) = fVar5;
    fVar5 = fVar6 * fVar6;
    *(float *)(puVar9 + 0x13) = *(float *)(puVar9 + 0x13) * fVar6;
    *(float *)((int)puVar9 + 0x9c) = *(float *)((int)puVar9 + 0x9c) * fVar5;
    *(float *)(puVar9 + 0x14) = *(float *)(puVar9 + 0x14) * fVar5 * fVar6;
    do {
      *(float *)((int)lVar15 + 0x94) = *(float *)((int)lVar15 + 0x84) * fVar5 * fVar5;
      iVar17 = (int)lVar20;
      lVar20 = lVar20 + 8;
      lVar15 = lVar15 + 8;
      *(float *)((int)lVar23 + 4) = *(float *)(iVar17 + 4) * fVar5 * fVar5;
      lVar23 = lVar23 + 8;
      lVar26 = lVar26 + -1;
    } while (lVar26 != 0);
    lVar26 = 4;
    lVar23 = uVar13 - 0xcc;
    pfVar21 = (float *)&DAT_007358e0;
    lVar15 = lVar16;
    lVar20 = lVar23;
    do {
      fVar5 = *pfVar21;
      fVar6 = pfVar21[1];
      pfVar21 = pfVar21 + 2;
      *(float *)((int)lVar15 + 0x94) = *(float *)((int)lVar15 + 0x94) * fVar5;
      lVar15 = lVar15 + 8;
      *(float *)((int)lVar20 + 4) = *(float *)((int)lVar20 + 4) * fVar6;
      lVar20 = lVar20 + 8;
      lVar26 = lVar26 + -1;
    } while (lVar26 != 0);
    lVar15 = 2;
    do {
      iVar17 = (int)lVar16;
      iVar11 = (int)lVar23;
      lVar16 = lVar16 + 0x10;
      lVar23 = lVar23 + 0x10;
      dVar32 = (double)((float)(dVar32 + (double)*(float *)(iVar17 + 0x94)) + *(float *)(iVar11 + 4)
                        + *(float *)(iVar11 + 8) + *(float *)(iVar11 + 0xc));
      lVar15 = lVar15 + -1;
    } while (lVar15 != 0);
    dVar32 = (double)((float)(dVar32 + 0.7853981852531433) * fVar3 + fVar2);
  }
  dVar32 = -dVar32;
  dVar27 = 1.5707963705062866;
  if ((dVar29 <= 1.5707963705062866) && (dVar27 = dVar29, dVar29 < -1.5707963705062866)) {
    dVar27 = -1.5707963705062866;
  }
  dVar30 = 0.5235987901687622;
  if ((dVar32 <= 0.5235987901687622) && (dVar30 = dVar32, dVar32 < -0.5235987901687622)) {
    dVar30 = -0.5235987901687622;
  }
  *(float *)((int)pvVar8 + 200) = (float)(dVar27 * 0.30000001192092896);
  *(float *)((int)pvVar8 + 0xc4) = (float)dVar30;
  *(float *)((int)pvVar8 + 0x148) = (float)(dVar27 * 0.699999988079071);
LAB_0032d97c:
  if (Cheats[0] != '\0') {
    *(undefined4 *)((int)pvVar8 + 0xd0) = 0x40300000;
  }
  dVar27 = 0.30000001192092896;
  MB_UpdateManipulatorRot
            ((double)(float)((double)DAT_0071f40c * dVar34),
             (double)(float)((double)DAT_0071f40c * 0.30000001192092896),moby,uVar25 + 0x60,1);
  MB_UpdateManipulatorRot
            ((double)(float)((double)DAT_0071f40c * dVar34),
             (double)(float)((double)DAT_0071f40c * dVar27),moby,uVar25 + 0xe0,0);
  if (*(MobyInstance **)((int)pvVar8 + 0x180) == (MobyInstance *)0x0) {
    pMVar19 = CreateMoby(DRILL_011F);
    *(MobyInstance **)((int)pvVar8 + 0x180) = pMVar19;
    if (pMVar19 != (MobyInstance *)0x0) {
      pMVar19->drawDistance = moby->drawDistance;
      *(undefined1 *)(*(int *)((int)pvVar8 + 0x180) + 0x31) = 1;
      iVar17 = *(int *)((int)pvVar8 + 0x180);
      *(f32 *)(iVar17 + 0x10) = (moby->pos).x;
      *(f32 *)(iVar17 + 0x14) = (moby->pos).y;
      *(f32 *)(iVar17 + 0x18) = (moby->pos).z;
      *(f32 *)(iVar17 + 0x1c) = (moby->pos).w;
      iVar17 = *(int *)((int)pvVar8 + 0x180);
      *(f32 *)(iVar17 + 0x40) = (moby->rotation).x;
      *(f32 *)(iVar17 + 0x44) = (moby->rotation).y;
      *(f32 *)(iVar17 + 0x48) = (moby->rotation).z;
      *(f32 *)(iVar17 + 0x4c) = (moby->rotation).w;
      UpdateMobyTransform(moby);
    }
  }
  else {
    MB_AttachMobyToJoint(moby,*(MobyInstance **)((int)pvVar8 + 0x180),2);
  }
  return;
}


