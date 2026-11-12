// game/update/moby918.cpp -- reconstructed from NPEA00385 EBOOT
// STATUS: NOT STARTED (raw Ghidra output)
// 4 functions, 0x4b01cc-0x4b1914
#include "game/update/moby918.h"
#include "game/freeze.h"
#include "game/hero.h"
#include "game/map.h"
#include "game/memcard.h"
#include "game/mission.h"
#include "game/mobyfunc.h"
#include "game/mobyutil.h"
#include "game/music.h"
#include "game/pause.h"
#include "game/sound.h"
#include "game/space.h"
#include "game/update.h"
#include "game/update/moby1118.h"
#include "game/update/moby1130.h"
#include "game/update/moby1399.h"
#include "game/vendor.h"
#include "idol/fastfunc.h"
#include "idol/mUnk.h"

// 0x04b01cc (0x14 bytes)
void M918_004b01cc(void)

{
  DAT_008f42f0 = 0x10000;
  return;
}


// 0x04b0218 (0x2cc bytes)
void M918_004b0218(undefined8 param_1,longlong param_2)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  longlong lVar3;
  longlong lVar4;
  int iVar5;
  double dVar6;
  double dVar7;
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
  GPiece<16> auVar19;
  GPiece<16> auVar20;
  GPiece<16> auVar21;
  GPiece<16> auVar22;
  GPiece<16> auVar23;
  GPiece<16> auVar24;
  GPiece<16> auVar25;
  GPiece<16> auVar26;
  undefined4 in_vr31_32_0;
  undefined4 in_vr31_32_1;
  undefined4 in_vr31_32_2;
  undefined4 in_vr31_32_3;
  GPiece<16> auVar27;
  GPiece<16> auVar28;
  
  puVar2 = (undefined4 *)(ZEXT48(&stack0x00000000) - 0x50);
  puVar2[3] = in_vr31_32_3;
  puVar2[2] = in_vr31_32_2;
  puVar2[1] = in_vr31_32_1;
  *puVar2 = in_vr31_32_0;
  auVar27 = loadVectorLeftIndexed(ZEXT48(&stack0x00000000) - 0x50,0x4b01e0);
  auVar26 = loadVectorLeftIndexed(4,0x4b01e0);
  auVar25 = loadVectorLeftIndexed(8,0x4b01e0);
  auVar24 = loadVectorLeftIndexed(0xc,0x4b01e0);
  auVar22 = loadVectorLeftIndexed(0x10,0x4b01e0);
  auVar18 = loadVectorLeftIndexed(0x14,0x4b01e0);
  auVar19 = loadVectorLeftIndexed(0x18,0x4b01e0);
  auVar20 = loadVectorLeftIndexed(0x1c,0x4b01e0);
  iVar5 = 0;
  auVar21 = loadVectorLeftIndexed(0x20,0x4b01e0);
  lVar4 = param_2 + 0x1b0;
  auVar17 = loadVectorLeftIndexed(0x24,0x4b01e0);
  lVar3 = param_2 + 0x1a4;
  dVar7 = 0.05000000074505806;
  dVar6 = 0.30000001192092896;
  auVar23 = loadVectorLeftIndexed(0x30,0x4b01e0);
  auVar16 = loadVectorLeftIndexed(0x34,0x4b01e0);
  auVar27 = auVar27 >> 0x60 & (GPiece<16>)0xffffffff;
  auVar28 = auVar27 | auVar27 << 0x20 | auVar27 << 0x40 | auVar27 << 0x60;
  auVar27 = auVar26 >> 0x60 & (GPiece<16>)0xffffffff;
  auVar26 = auVar27 | auVar27 << 0x20 | auVar27 << 0x40 | auVar27 << 0x60;
  auVar27 = auVar25 >> 0x60 & (GPiece<16>)0xffffffff;
  auVar25 = auVar27 | auVar27 << 0x20 | auVar27 << 0x40 | auVar27 << 0x60;
  auVar27 = auVar24 >> 0x60 & (GPiece<16>)0xffffffff;
  auVar24 = auVar27 | auVar27 << 0x20 | auVar27 << 0x40 | auVar27 << 0x60;
  auVar27 = auVar22 >> 0x60 & (GPiece<16>)0xffffffff;
  auVar22 = auVar27 | auVar27 << 0x20 | auVar27 << 0x40 | auVar27 << 0x60;
  auVar27 = auVar18 >> 0x60 & (GPiece<16>)0xffffffff;
  auVar18 = auVar27 | auVar27 << 0x20 | auVar27 << 0x40 | auVar27 << 0x60;
  auVar27 = auVar19 >> 0x60 & (GPiece<16>)0xffffffff;
  auVar19 = auVar27 | auVar27 << 0x20 | auVar27 << 0x40 | auVar27 << 0x60;
  auVar27 = auVar20 >> 0x60 & (GPiece<16>)0xffffffff;
  auVar20 = auVar27 | auVar27 << 0x20 | auVar27 << 0x40 | auVar27 << 0x60;
  auVar27 = auVar21 >> 0x60 & (GPiece<16>)0xffffffff;
  auVar21 = auVar27 | auVar27 << 0x20 | auVar27 << 0x40 | auVar27 << 0x60;
  auVar27 = auVar17 >> 0x60 & (GPiece<16>)0xffffffff;
  auVar17 = auVar27 | auVar27 << 0x20 | auVar27 << 0x40 | auVar27 << 0x60;
  auVar27 = auVar23 >> 0x60 & (GPiece<16>)0xffffffff;
  auVar23 = auVar27 | auVar27 << 0x20 | auVar27 << 0x40 | auVar27 << 0x60;
  auVar27 = auVar16 >> 0x60 & (GPiece<16>)0xffffffff;
  auVar27 = auVar27 | auVar27 << 0x20 | auVar27 << 0x40 | auVar27 << 0x60;
  do {
    auVar16 = loadVectorLeftIndexed(0x47c0,0x10e0000);
    if (g_BoobsSize != 0) {
      auVar8 = ZEXT416(0xffffffff);
      auVar9 = auVar8 | auVar8 << 0x20 | auVar8 << 0x40 | auVar8 << 0x60;
      auVar8 = ZEXT416(0xffffffff);
      auVar10 = auVar8 | auVar8 << 0x20 | auVar8 << 0x40 | auVar8 << 0x60;
      auVar8 = vectorConvertFromSignedFixedPointWord(auVar16,0);
      auVar16 = ZEXT416(0xffffffff);
      auVar12 = auVar16 | auVar16 << 0x20 | auVar16 << 0x40 | auVar16 << 0x60;
      auVar9 = vectorShiftLeftIntegerWord(auVar9,auVar9);
      auVar16 = loadVectorLeftIndexed(0x710,0xa10000);
      auVar16 = vectorLogicalAnd(auVar16,auVar27);
      auVar11 = vectorShiftLeftIntegerWord(auVar10,auVar10);
      auVar10 = vectorConvertFromSignedFixedPointWord(auVar16,0);
      auVar16 = ZEXT416(0xffffffff);
      auVar14 = auVar16 | auVar16 << 0x20 | auVar16 << 0x40 | auVar16 << 0x60;
      auVar8 = vectorMultiplyAddFloatingPoint(auVar8,auVar28,auVar26);
      auVar9 = vectorMultiplyAddFloatingPoint(auVar10,auVar23,auVar9);
      auVar10 = vectorShiftLeftIntegerWord(auVar12,auVar12);
      auVar16 = ZEXT416(0xffffffff);
      auVar16 = auVar16 | auVar16 << 0x20 | auVar16 << 0x40 | auVar16 << 0x60;
      auVar12 = vectorShiftLeftIntegerWord(auVar16,auVar16);
      auVar16 = vectorSubtractFloatingPoint(auVar24,auVar9);
      auVar13 = vectorSubtractFloatingPoint(auVar22,auVar9);
      auVar15 = vectorCompareGreaterThanFloatingPoint(auVar16,auVar9);
      auVar16 = vectorConditionalSelect(auVar16,auVar9,auVar15);
      auVar9 = vectorCompareGreaterThanFloatingPoint(auVar16,auVar13);
      auVar9 = vectorConditionalSelect(auVar13,auVar16,auVar9);
      auVar13 = vectorShiftLeftIntegerWord(auVar14,auVar14);
      auVar16 = vectorCompareGreaterThanFloatingPoint(auVar8,auVar25);
      auVar11 = vectorMultiplyAddFloatingPoint(auVar9,auVar9,auVar11);
      auVar8 = vectorConditionalSelect(auVar8,auVar25,auVar16);
      auVar16 = ZEXT416(0xffffffff);
      auVar14 = auVar16 | auVar16 << 0x20 | auVar16 << 0x40 | auVar16 << 0x60;
      auVar16 = ZEXT416(0xffffffff);
      auVar15 = auVar16 | auVar16 << 0x20 | auVar16 << 0x40 | auVar16 << 0x60;
      auVar16 = auVar8 >> 0x60 & (GPiece<16>)0xffffffff;
      auVar14 = vectorShiftLeftIntegerWord(auVar14,auVar14);
      uVar1 = storeVectorElementWordIndexed
                        (auVar16 | auVar16 << 0x20 | auVar16 << 0x40 | auVar16 << 0x60,0,lVar4);
      *(undefined4 *)((uint)lVar4 & 0xfffffffc) = uVar1;
      auVar16 = vectorMultiplyAddFloatingPoint(auVar11,auVar9,auVar10);
      auVar8 = vectorMultiplyAddFloatingPoint(auVar11,auVar16,auVar12);
      auVar16 = vectorMultiplyAddFloatingPoint(auVar16,auVar18,auVar9);
      auVar9 = vectorShiftLeftIntegerWord(auVar15,auVar15);
      auVar10 = vectorMultiplyAddFloatingPoint(auVar11,auVar8,auVar13);
      auVar8 = vectorMultiplyAddFloatingPoint(auVar8,auVar19,auVar16);
      auVar16 = vectorMultiplyAddFloatingPoint(auVar11,auVar10,auVar14);
      auVar8 = vectorMultiplyAddFloatingPoint(auVar10,auVar20,auVar8);
      auVar16 = vectorMultiplyAddFloatingPoint(auVar16,auVar21,auVar8);
      auVar16 = vectorMultiplyAddFloatingPoint(auVar16,auVar17,auVar9);
      auVar16 = auVar16 >> 0x60 & (GPiece<16>)0xffffffff;
      uVar1 = storeVectorElementWordIndexed
                        (auVar16 | auVar16 << 0x20 | auVar16 << 0x40 | auVar16 << 0x60,0,lVar3);
      *(undefined4 *)((uint)lVar3 & 0xfffffffc) = uVar1;
    }
    MB_UpdateManipulatorRot
              ((double)(float)((double)DAT_0071f40c * dVar7),
               (double)(float)((double)DAT_0071f40c * dVar6),param_1,param_2 + 0x140,iVar5 + 2);
    iVar5 = iVar5 + 1;
    lVar4 = lVar4 + 0x80;
    lVar3 = lVar3 + 0x80;
    param_2 = param_2 + 0x80;
  } while (iVar5 < 2);
  return;
}


// 0x04b04e4 (0x134 bytes)
// strings: 0096c074: 'None'

void M918_004b04e4(int param_1)

{
  MobyInstance *moby;
  int iVar1;
  undefined4 *puVar2;
  
  if ((g_gameMode == GAME_MODE_SCENE) && (Cheats[0] != '\0' || g_BoobsSize != 0)) {
    iVar1 = 0;
    puVar2 = &DAT_0095cd50;
    if (0 < g_SpaceSceneMobyCnt.piece<0,2>()) {
      do {
        moby = (MobyInstance *)puVar2[0x5e];
        if (moby->oClass == *(MOBY_OCLASSES *)(param_1 + 0xa6)) {
          if ((Cheats[0] != '\0') && (DAT_00a1bf81 == '\0')) {
            AttachManipulator(moby,0,&DAT_00a1bf80);
            DAT_00a1bfa0 = 0x40300000;
            DAT_00a1bfa4 = 0x40300000;
            DAT_00a1bfa8 = 0x40300000;
          }
          if (g_BoobsSize != 0) {
            M918_004b0218(moby,*(undefined4 *)(param_1 + 0x78));
          }
        }
        iVar1 = iVar1 + 1;
        puVar2 = puVar2 + 1;
      } while (iVar1 < g_SpaceSceneMobyCnt.piece<0,2>());
    }
  }
  return;
}


// 0x04b0698 (0x127c bytes)
// inlined: FastAtan2 @0x4b0e38, FastAtan2 @0x4b11e4, FastAtan2 @0x4b1398, FastAtan2 @0x4b1634
// strings: 0096c074: 'None' | 006589e0: 'Race Girl'

/* Moby 918 */

void UpdateMoby_918(MobyInstance *moby)

{
  byte bVar1;
  char cVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  void *pvVar9;
  MobyInstance *moby_00;
  ulonglong *puVar10;
  float fVar11;
  int iVar12;
  gameMode_t gVar13;
  ulonglong uVar14;
  longlong lVar15;
  int iVar19;
  undefined4 uVar20;
  ulonglong uVar16;
  longlong lVar17;
  longlong lVar18;
  float *pfVar22;
  longlong lVar21;
  longlong lVar23;
  ulonglong unaff_r25;
  undefined4 *puVar24;
  ulonglong unaff_r26;
  ulonglong unaff_r27;
  ulonglong unaff_r28;
  ulonglong uVar25;
  ulonglong unaff_r29;
  ulonglong unaff_r30;
  ulonglong unaff_r31;
  ulonglong in_LR;
  longlong lVar26;
  double dVar27;
  double dVar28;
  double dVar29;
  double dVar30;
  ulonglong in_f27;
  ulonglong in_f28;
  ulonglong in_f29;
  double dVar31;
  double dVar32;
  ulonglong in_f30;
  double dVar33;
  double dVar34;
  ulonglong in_f31;
  GPiece<16> auVar35;
  GPiece<16> auVar36;
  GPiece<16> auVar37;
  
  lVar15 = (longlong)(int)moby;
  uVar14 = ZEXT48(&stack0x00000000);
  lVar18 = uVar14 - 400;
  puVar10 = (ulonglong *)lVar18;
  *puVar10 = uVar14;
  puVar10[0x34] = in_LR;
  puVar10[0x2d] = in_f27;
  puVar10[0x2e] = in_f28;
  puVar10[0x2f] = in_f29;
  puVar10[0x30] = in_f30;
  puVar10[0x31] = in_f31;
  puVar10[0x2c] = unaff_r31;
  puVar10[0x29] = unaff_r28;
  gVar13 = g_gameMode;
  pvVar9 = moby->pVar;
  uVar25 = ZEXT48(pvVar9);
  puVar10[0x2b] = unaff_r30;
  puVar10[0x2a] = unaff_r29;
  puVar10[0x28] = unaff_r27;
  puVar10[0x27] = unaff_r26;
  puVar10[0x26] = unaff_r25;
  if ((gVar13 == GAME_MODE_SCENE) && (Cheats[0] != '\0' || g_BoobsSize != 0)) {
    iVar19 = 0;
    puVar24 = &DAT_0095cd50;
    if (0 < g_SpaceSceneMobyCnt.piece<0,2>()) {
      do {
        moby_00 = (MobyInstance *)puVar24[0x5e];
        if (moby_00->oClass == moby->oClass) {
          if ((Cheats[0] != '\0') && (DAT_00a1bf81 == '\0')) {
            AttachManipulator(moby_00,0,&DAT_00a1bf80);
            DAT_00a1bfa0 = 0x40300000;
            DAT_00a1bfa4 = 0x40300000;
            DAT_00a1bfa8 = 0x40300000;
          }
          if (g_BoobsSize != 0) {
            M918_004b0218(moby_00,moby->pVar);
          }
        }
        iVar19 = iVar19 + 1;
        puVar24 = puVar24 + 1;
      } while (iVar19 < g_SpaceSceneMobyCnt.piece<0,2>());
    }
  }
  bVar1 = moby->state;
  if (bVar1 < 2) {
    if (bVar1 == 0) {
      if (moby->animationId != '\0') {
        puVar10[0x24] = (longlong)(int)(animationSpeed * 20.5);
        MB_SetAnimation(lVar15,0,0,*(undefined4 *)((int)puVar10 + 0x124));
      }
      dVar27 = (double)GetGroundZ(0x3fe0000000000000,lVar15 + 0x10,0);
      (moby->pos).z = (float)dVar27;
      if ((g_MissionTargets[16].state == 0) || (g_MissionTargets[17].state == 0)) {
        lVar17 = FUN_004d3698(lVar15);
        *(undefined2 *)(*(int *)(&DAT_008fa1ac + (int)(lVar17 << 2)) + 4) = 0xd;
      }
      *(char **)((int)pvVar9 + 0x20) = "Race Girl";
      moby->state = '\x01';
      FUN_004d3720(lVar15,uVar25);
      MB_SetZBoundsFromPos(lVar15);
    }
    else {
      if (g_heroState != VISIBOMB_CONTROL) {
        iVar19 = FUN_004d3870(lVar15,uVar25);
        if (iVar19 != 0) {
          MB_SetPointAheadOfMoby(0x4000000000000000,lVar15);
          moby->state = '\x03';
        }
        if (*(short *)((int)pvVar9 + 0x36) == 3) {
          *(undefined2 *)((int)pvVar9 + 4) = 3;
          iVar19 = worldUpdateTime;
          *(undefined2 *)((int)pvVar9 + 0x36) = 2;
          *(int *)((int)pvVar9 + 0x38) = iVar19;
          moby->setByGroup = '\0';
          Hero_Warp((float *)&DAT_008f4320,(float *)&DAT_008f4330,0,1);
          DAT_0096b9e0 = DAT_008f4340;
          DAT_0096b9e4 = DAT_008f4344;
          DAT_0096b9e8 = DAT_008f4348;
          DAT_0096b9ec = DAT_008f434c;
          DAT_0096b9f0 = DAT_008f4350;
          DAT_0096b9f4 = DAT_008f4354;
          DAT_0096b9f8 = DAT_008f4358;
          DAT_0096b9fc = DAT_008f435c;
          DAT_0096bd8c = 1;
          music_SetTransition(2,6);
        }
      }
      cVar2 = moby->setByGroup;
      if (cVar2 == '\x01') {
        Hero_Warp((float *)&DAT_008f4340,(float *)&DAT_008f4350,0,1);
        music_SetTransition(0,8);
        iVar19 = worldUpdateTime;
        if (g_MiscLevelFlags.Zoomerator == false) {
          *(undefined2 *)((int)pvVar9 + 4) = *(undefined2 *)((int)pvVar9 + 0x36);
          *(undefined2 *)((int)pvVar9 + 0x36) = 4;
          *(int *)((int)pvVar9 + 0x38) = iVar19;
          *(undefined1 *)((int)pvVar9 + 8) = 1;
        }
        moby->setByGroup = '\0';
      }
      else if (cVar2 == '\x02') {
        music_SetTransition(0,8);
        Hero_Warp((float *)&DAT_008f4340,(float *)&DAT_008f4350,0,1);
        moby->setByGroup = '\0';
      }
      else if (cVar2 == '\x03') {
        music_SetTransition(0,8);
        moby->setByGroup = '\0';
        Hero_Warp((float *)&DAT_008f4320,(float *)&DAT_008f4330,0,1);
        DAT_0096b9e0 = DAT_008f4340;
        DAT_0096b9e4 = DAT_008f4344;
        DAT_0096b9e8 = DAT_008f4348;
        DAT_0096b9ec = DAT_008f434c;
        DAT_0096b9f0 = DAT_008f4350;
        DAT_0096b9f4 = DAT_008f4354;
        DAT_0096b9f8 = DAT_008f4358;
        DAT_0096b9fc = DAT_008f435c;
      }
      if (((moby->animationId == '\0') || (moby->animationId == '\x02')) &&
         (iVar19 = FastDecTimerS32(uVar25 + 0x244), iVar19 != 0)) {
        dVar27 = (double)MB_randRangeFloat(1200.0,2400.0);
        uVar20 = FastDoubleToInt((double)(float)(dVar27 * (double)animationSpeed));
        *(undefined4 *)((int)pvVar9 + 0x244) = uVar20;
        if (moby->animationId != '\x01') {
          puVar10[0x24] = (longlong)(int)(animationSpeed * 10.5);
          MB_SetAnimation(lVar15,1,0,*(undefined4 *)((int)puVar10 + 0x124));
        }
      }
      else if ((moby->field43_0x70 & 2U) != 0) {
        iVar19 = MB_randInt(2);
        uVar16 = ZERO_MASK(iVar19) & 2;
        if ((uint)moby->animationId != (uint)uVar16) {
          puVar10[0x24] = (longlong)(int)(animationSpeed * 10.5);
          MB_SetAnimation(lVar15,uVar16,0,*(undefined4 *)((int)puVar10 + 0x124));
        }
      }
    }
  }
  else if (bVar1 == 3) {
    if ((g_gameMode != GAME_MODE_SCENE) && (moby->state = '\x01', *(short *)((int)pvVar9 + 4) == 4))
    {
      g_MiscLevelFlags.Zoomerator = true;
      puVar10[0x24] = (longlong)(int)(animationSpeed * 300.5);
      MB_ToastMessage(0x1395,*(undefined4 *)((int)puVar10 + 0x124));
      if (g_SkillPoints[9] != '\0') {
        sound_CorePlay(1,0,(MobyInstance *)0x0);
        MB_ToastMessage(0x53d6,0xffffffffffffffff);
      }
      memcard_Save(0,-1);
    }
  }
  else if (moby->setByGroup != '\0') {
    Hero_Warp((float *)&DAT_008f4340,(float *)&DAT_008f4350,0,1);
    moby->setByGroup = '\0';
  }
  dVar27 = 0.019999999552965164;
  if ((moby->animationId != '\0') && (moby->animationId != '\x02')) goto LAB_004b153c;
  fVar3 = (moby->pos).y;
  fVar4 = (moby->pos).x;
  fVar6 = fVar3 - g_heroPosition.y;
  fVar7 = fVar4 - g_heroPosition.x;
  if (8.0 <= SQRT(fVar7 * fVar7 + fVar6 * fVar6)) {
LAB_004b0fe8:
    if (*(int *)((int)pvVar9 + 0x248) != 0) {
      *(undefined4 *)((int)pvVar9 + 0x248) = 0;
      *(float *)((int)pvVar9 + 0x250) = g_heroCGPos;
      *(float *)((int)pvVar9 + 0x254) = DAT_00969db4;
      *(float *)((int)pvVar9 + 600) = DAT_00969db8;
      *(undefined4 *)((int)pvVar9 + 0x25c) = DAT_00969dbc;
    }
  }
  else {
    fVar4 = g_heroCGPos - fVar4;
    fVar3 = DAT_00969db4 - fVar3;
    fVar6 = ABS(fVar4);
    fVar5 = ABS(fVar3);
    *(float *)((int)puVar10 + 0x94) = fVar4;
    *(float *)(puVar10 + 0x13) = fVar3;
    fVar3 = (moby->rotation).z;
    *(float *)((int)puVar10 + 0x9c) = fVar6 - fVar5;
    fVar4 = 0.0;
    uVar16 = (ulonglong)(*(uint *)((int)puVar10 + 0x94) >> 0x1c) & 8 |
             (ulonglong)(*(uint *)((int)puVar10 + 0x9c) >> 0x1e) & 2 |
             (ulonglong)(*(uint *)(puVar10 + 0x13) >> 0x1d) & 4;
    fVar7 = ABS(*(float *)((int)puVar10 + 0x94));
    if (*(float *)((int)puVar10 + 0x9c) - 0.0 < 0.0) {
      fVar7 = fVar5;
    }
    fVar8 = *(float *)(&g_atanQuadrantTable + (int)(uVar16 << 2));
    fVar5 = *(float *)(((uint)(uVar16 << 2) | 0x735900) + 4);
    fVar11 = ABS(*(float *)(puVar10 + 0x13));
    if (*(float *)((int)puVar10 + 0x9c) - 0.0 < 0.0) {
      fVar11 = fVar6;
    }
    if (0.0 < fVar7) {
      lVar17 = uVar14 - 0x180;
      lVar21 = uVar14 - 0x90;
      lVar23 = uVar14 - 0x80;
      lVar26 = 2;
      fVar6 = (fVar11 - fVar7) / (fVar11 + fVar7);
      fVar7 = fVar6 * fVar6;
      *(float *)((int)puVar10 + 0x10c) = fVar6;
      *(float *)((int)puVar10 + 0x104) = fVar6;
      *(float *)(puVar10 + 0x21) = fVar6;
      *(float *)(puVar10 + 0x20) = fVar6;
      fVar6 = fVar7 * fVar7;
      *(float *)((int)puVar10 + 0x104) = *(float *)((int)puVar10 + 0x104) * fVar7;
      *(float *)(puVar10 + 0x21) = *(float *)(puVar10 + 0x21) * fVar6;
      *(float *)((int)puVar10 + 0x10c) = *(float *)((int)puVar10 + 0x10c) * fVar6 * fVar7;
      do {
        *(float *)((int)lVar17 + 0x100) = *(float *)((int)lVar17 + 0xf0) * fVar6 * fVar6;
        iVar19 = (int)lVar21;
        lVar17 = lVar17 + 8;
        lVar21 = lVar21 + 8;
        *(float *)((int)lVar23 + 4) = *(float *)(iVar19 + 4) * fVar6 * fVar6;
        lVar23 = lVar23 + 8;
        lVar26 = lVar26 + -1;
      } while (lVar26 != 0);
      lVar26 = 4;
      lVar23 = uVar14 - 0x90;
      pfVar22 = (float *)&DAT_007358e0;
      lVar17 = lVar18;
      lVar21 = lVar23;
      do {
        fVar6 = *pfVar22;
        fVar7 = pfVar22[1];
        pfVar22 = pfVar22 + 2;
        *(float *)((int)lVar17 + 0x100) = *(float *)((int)lVar17 + 0x100) * fVar6;
        lVar17 = lVar17 + 8;
        *(float *)((int)lVar21 + 4) = *(float *)((int)lVar21 + 4) * fVar7;
        lVar21 = lVar21 + 8;
        lVar26 = lVar26 + -1;
      } while (lVar26 != 0);
      lVar21 = 2;
      lVar17 = lVar18;
      do {
        iVar19 = (int)lVar17;
        iVar12 = (int)lVar23;
        lVar17 = lVar17 + 0x10;
        lVar23 = lVar23 + 0x10;
        fVar4 = fVar4 + *(float *)(iVar19 + 0x100) + *(float *)(iVar12 + 4) + *(float *)(iVar12 + 8)
                + *(float *)(iVar12 + 0xc);
        lVar21 = lVar21 + -1;
      } while (lVar21 != 0);
      fVar4 = (fVar4 + 0.7853982) * fVar8 + fVar5;
    }
    dVar28 = (double)FastSubRots(fVar3,fVar4);
    if (1.5707963705062866 <= dVar28) goto LAB_004b0fe8;
    if (SQRT(DAT_00969de8 * DAT_00969de8 + DAT_00969de0 * DAT_00969de0 + DAT_00969de4 * DAT_00969de4
            ) <= 0.01) {
      FastDecTimerS32(uVar25 + 0x248);
    }
    else {
      auVar35 = ZEXT416(0xffffffff);
      auVar35 = auVar35 | auVar35 << 0x20 | auVar35 << 0x40 | auVar35 << 0x60;
      auVar36 = vectorShiftLeftIntegerWord(auVar35,auVar35);
      auVar35 = loadVectorLeftIndexed(0x34,0x4b0618);
      auVar35 = auVar35 >> 0x60 & (GPiece<16>)0xffffffff;
      auVar37 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
      auVar35 = vectorMultiplyAddFloatingPoint
                          (auVar37,auVar35 | auVar35 << 0x20 | auVar35 << 0x40 | auVar35 << 0x60,
                           auVar36);
      auVar35 = vectorConvertToSignedFixedPointWordSaturate(auVar35,0);
      auVar35 = auVar35 >> 0x60 & (GPiece<16>)0xffffffff;
      uVar20 = storeVectorElementWordIndexed
                         (auVar35 | auVar35 << 0x20 | auVar35 << 0x40 | auVar35 << 0x60,0x248,uVar25
                         );
      *(undefined4 *)((int)pvVar9 + 0x248U & 0xfffffffc) = uVar20;
    }
  }
  iVar19 = FastDecTimerS32(uVar25 + 0x24c);
  if (iVar19 != 0) {
    dVar28 = (double)MB_randRangeFloat(180.0,300.0);
    uVar20 = FastDoubleToInt((double)(float)(dVar28 * (double)animationSpeed));
    *(undefined4 *)((int)pvVar9 + 0x24c) = uVar20;
    dVar33 = (double)(moby->rotation).z;
    dVar28 = (double)MB_randRangeFloat(-90.0,90.0);
    dVar31 = 0.01745329238474369;
    dVar28 = (double)FastWrapRot((float)dVar33,(float)(dVar28 * 0.01745329238474369));
    dVar33 = (double)MB_randRangeFloat(0.0,30.0);
    MB_SphericalToVector
              (6.0,(float)dVar28,(float)(dVar33 * dVar31),(float *)((int)pvVar9 + 0x250));
    *(float *)((int)pvVar9 + 0x250) = *(float *)((int)pvVar9 + 0x250) + (moby->pos).x;
    *(float *)((int)pvVar9 + 0x254) = *(float *)((int)pvVar9 + 0x254) + (moby->pos).y;
    *(float *)((int)pvVar9 + 600) = *(float *)((int)pvVar9 + 600) + (moby->pos).z;
  }
  if (*(int *)((int)pvVar9 + 0x248) == 0) {
    fVar3 = *(float *)((int)pvVar9 + 0x250);
    fVar4 = *(float *)((int)pvVar9 + 0x254);
    fVar6 = *(float *)((int)pvVar9 + 600);
  }
  else {
    dVar27 = 0.029999999329447746;
    fVar3 = g_heroCGPos;
    fVar4 = DAT_00969db4;
    fVar6 = DAT_00969db8;
  }
  fVar3 = fVar3 - (moby->pos).x;
  dVar34 = (double)fVar3;
  fVar4 = fVar4 - (moby->pos).y;
  dVar32 = (double)fVar4;
  *(float *)(puVar10 + 0x11) = fVar3;
  *(float *)((int)puVar10 + 0x8c) = fVar4;
  dVar31 = (double)(fVar6 - ((moby->pos).z + 1.0));
  *(float *)(puVar10 + 0x12) = (float)(ABS(dVar34) - ABS(dVar32));
  dVar33 = 0.0;
  uVar16 = (ulonglong)(*(uint *)(puVar10 + 0x11) >> 0x1c) & 8 |
           (ulonglong)(*(uint *)(puVar10 + 0x12) >> 0x1e) & 2 |
           (ulonglong)(*(uint *)((int)puVar10 + 0x8c) >> 0x1d) & 4;
  dVar28 = ABS((double)*(float *)(puVar10 + 0x11));
  if (*(float *)(puVar10 + 0x12) - 0.0 < 0.0) {
    dVar28 = ABS(dVar32);
  }
  fVar3 = *(float *)(&g_atanQuadrantTable + (int)(uVar16 << 2));
  dVar30 = ABS((double)*(float *)((int)puVar10 + 0x8c));
  if (*(float *)(puVar10 + 0x12) - 0.0 < 0.0) {
    dVar30 = ABS(dVar34);
  }
  fVar4 = *(float *)(((uint)(uVar16 << 2) | 0x735900) + 4);
  dVar29 = dVar33;
  if (0.0 < dVar28) {
    lVar17 = uVar14 - 0x180;
    lVar23 = uVar14 - 0xa0;
    lVar21 = uVar14 - 0xb0;
    lVar26 = 2;
    fVar6 = (float)(dVar30 - dVar28) / (float)(dVar30 + dVar28);
    fVar7 = fVar6 * fVar6;
    *(float *)((int)puVar10 + 0xec) = fVar6;
    *(float *)((int)puVar10 + 0xe4) = fVar6;
    *(float *)(puVar10 + 0x1d) = fVar6;
    *(float *)(puVar10 + 0x1c) = fVar6;
    fVar6 = fVar7 * fVar7;
    *(float *)((int)puVar10 + 0xe4) = *(float *)((int)puVar10 + 0xe4) * fVar7;
    *(float *)(puVar10 + 0x1d) = *(float *)(puVar10 + 0x1d) * fVar6;
    *(float *)((int)puVar10 + 0xec) = *(float *)((int)puVar10 + 0xec) * fVar6 * fVar7;
    do {
      *(float *)((int)lVar17 + 0xe0) = *(float *)((int)lVar17 + 0xd0) * fVar6 * fVar6;
      iVar19 = (int)lVar21;
      lVar21 = lVar21 + 8;
      lVar17 = lVar17 + 8;
      *(float *)((int)lVar23 + 4) = *(float *)(iVar19 + 4) * fVar6 * fVar6;
      lVar23 = lVar23 + 8;
      lVar26 = lVar26 + -1;
    } while (lVar26 != 0);
    lVar26 = 4;
    lVar23 = uVar14 - 0xb0;
    pfVar22 = (float *)&DAT_007358e0;
    lVar17 = lVar18;
    lVar21 = lVar23;
    do {
      fVar6 = *pfVar22;
      fVar7 = pfVar22[1];
      pfVar22 = pfVar22 + 2;
      *(float *)((int)lVar17 + 0xe0) = *(float *)((int)lVar17 + 0xe0) * fVar6;
      lVar17 = lVar17 + 8;
      *(float *)((int)lVar21 + 4) = *(float *)((int)lVar21 + 4) * fVar7;
      lVar21 = lVar21 + 8;
      lVar26 = lVar26 + -1;
    } while (lVar26 != 0);
    lVar21 = 2;
    lVar17 = lVar18;
    dVar28 = dVar33;
    do {
      iVar19 = (int)lVar17;
      iVar12 = (int)lVar23;
      lVar17 = lVar17 + 0x10;
      lVar23 = lVar23 + 0x10;
      dVar28 = (double)((float)(dVar28 + (double)*(float *)(iVar19 + 0xe0)) + *(float *)(iVar12 + 4)
                        + *(float *)(iVar12 + 8) + *(float *)(iVar12 + 0xc));
      lVar21 = lVar21 + -1;
    } while (lVar21 != 0);
    dVar29 = (double)((float)(dVar28 + 0.7853981852531433) * fVar3 + fVar4);
  }
  dVar30 = (double)FastDiffRots(dVar29,(double)(moby->rotation).z);
  *(float *)(puVar10 + 0x10) = (float)dVar31;
  fVar3 = SQRT((float)(dVar34 * dVar34 + (double)(float)(dVar32 * dVar32)));
  dVar32 = ABS((double)fVar3);
  *(float *)((int)puVar10 + 0x7c) = fVar3;
  *(float *)((int)puVar10 + 0x84) = (float)(dVar32 - ABS(dVar31));
  uVar16 = (ulonglong)(*(uint *)((int)puVar10 + 0x7c) >> 0x1c) & 8 |
           (ulonglong)(*(uint *)((int)puVar10 + 0x84) >> 0x1e) & 2 |
           (ulonglong)(*(uint *)(puVar10 + 0x10) >> 0x1d) & 4;
  dVar28 = ABS((double)*(float *)((int)puVar10 + 0x7c));
  if ((double)*(float *)((int)puVar10 + 0x84) - dVar33 < 0.0) {
    dVar28 = ABS(dVar31);
  }
  fVar3 = *(float *)(&g_atanQuadrantTable + (int)(uVar16 << 2));
  dVar31 = ABS((double)*(float *)(puVar10 + 0x10));
  if ((double)*(float *)((int)puVar10 + 0x84) - dVar33 < 0.0) {
    dVar31 = dVar32;
  }
  fVar4 = *(float *)(((uint)(uVar16 << 2) | 0x735900) + 4);
  if (dVar33 < dVar28) {
    lVar17 = uVar14 - 0x180;
    lVar21 = uVar14 - 0xd0;
    lVar23 = uVar14 - 0xc0;
    lVar26 = 2;
    fVar6 = (float)(dVar31 - dVar28) / (float)(dVar31 + dVar28);
    fVar7 = fVar6 * fVar6;
    *(float *)((int)puVar10 + 0xcc) = fVar6;
    *(float *)((int)puVar10 + 0xc4) = fVar6;
    *(float *)(puVar10 + 0x19) = fVar6;
    *(float *)(puVar10 + 0x18) = fVar6;
    fVar6 = fVar7 * fVar7;
    *(float *)((int)puVar10 + 0xc4) = *(float *)((int)puVar10 + 0xc4) * fVar7;
    *(float *)(puVar10 + 0x19) = *(float *)(puVar10 + 0x19) * fVar6;
    *(float *)((int)puVar10 + 0xcc) = *(float *)((int)puVar10 + 0xcc) * fVar6 * fVar7;
    do {
      *(float *)((int)lVar17 + 0xc0) = *(float *)((int)lVar17 + 0xb0) * fVar6 * fVar6;
      iVar19 = (int)lVar21;
      lVar17 = lVar17 + 8;
      lVar21 = lVar21 + 8;
      *(float *)((int)lVar23 + 4) = *(float *)(iVar19 + 4) * fVar6 * fVar6;
      lVar23 = lVar23 + 8;
      lVar26 = lVar26 + -1;
    } while (lVar26 != 0);
    lVar26 = 4;
    lVar23 = uVar14 - 0xd0;
    pfVar22 = (float *)&DAT_007358e0;
    lVar17 = lVar18;
    lVar21 = lVar23;
    do {
      fVar6 = *pfVar22;
      fVar7 = pfVar22[1];
      pfVar22 = pfVar22 + 2;
      *(float *)((int)lVar17 + 0xc0) = *(float *)((int)lVar17 + 0xc0) * fVar6;
      lVar17 = lVar17 + 8;
      *(float *)((int)lVar21 + 4) = *(float *)((int)lVar21 + 4) * fVar7;
      lVar21 = lVar21 + 8;
      lVar26 = lVar26 + -1;
    } while (lVar26 != 0);
    lVar21 = 2;
    lVar17 = lVar18;
    do {
      iVar19 = (int)lVar17;
      iVar12 = (int)lVar23;
      lVar17 = lVar17 + 0x10;
      lVar23 = lVar23 + 0x10;
      dVar33 = (double)((float)(dVar33 + (double)*(float *)(iVar19 + 0xc0)) + *(float *)(iVar12 + 4)
                        + *(float *)(iVar12 + 8) + *(float *)(iVar12 + 0xc));
      lVar21 = lVar21 + -1;
    } while (lVar21 != 0);
    dVar33 = (double)((float)(dVar33 + 0.7853981852531433) * fVar3 + fVar4);
  }
  dVar33 = -dVar33;
  dVar28 = 1.5707963705062866;
  if ((dVar30 <= 1.5707963705062866) && (dVar28 = dVar30, dVar30 < -1.5707963705062866)) {
    dVar28 = -1.5707963705062866;
  }
  dVar31 = 0.5235987901687622;
  if ((dVar33 <= 0.5235987901687622) && (dVar31 = dVar33, dVar33 < -0.5235987901687622)) {
    dVar31 = -0.5235987901687622;
  }
  *(float *)((int)pvVar9 + 0xa8) = (float)(dVar28 * 0.6000000238418579);
  *(float *)((int)pvVar9 + 0xa4) = (float)dVar31;
  *(float *)((int)pvVar9 + 0x128) = (float)(dVar28 * 0.4000000059604645);
LAB_004b153c:
  fVar3 = (moby->pos).y;
  fVar4 = (moby->pos).x;
  fVar6 = fVar3 - g_heroPosition.y;
  fVar7 = fVar4 - g_heroPosition.x;
  if (SQRT(fVar7 * fVar7 + fVar6 * fVar6) < 15.0) {
    fVar3 = g_heroPosition.y - fVar3;
    fVar4 = g_heroPosition.x - fVar4;
    fVar6 = ABS(fVar3);
    fVar5 = ABS(fVar4);
    *(float *)((int)puVar10 + 0x74) = fVar3;
    *(float *)(puVar10 + 0xe) = fVar4;
    fVar3 = (moby->rotation).z;
    *(float *)(puVar10 + 0xf) = fVar5 - fVar6;
    fVar4 = 0.0;
    uVar16 = (ulonglong)(*(uint *)(puVar10 + 0xe) >> 0x1c) & 8 |
             (ulonglong)(*(uint *)(puVar10 + 0xf) >> 0x1e) & 2 |
             (ulonglong)(*(uint *)((int)puVar10 + 0x74) >> 0x1d) & 4;
    fVar7 = ABS(*(float *)(puVar10 + 0xe));
    if (*(float *)(puVar10 + 0xf) - 0.0 < 0.0) {
      fVar7 = fVar6;
    }
    fVar8 = *(float *)(&g_atanQuadrantTable + (int)(uVar16 << 2));
    fVar6 = *(float *)(((uint)(uVar16 << 2) | 0x735900) + 4);
    fVar11 = ABS(*(float *)((int)puVar10 + 0x74));
    if (*(float *)(puVar10 + 0xf) - 0.0 < 0.0) {
      fVar11 = fVar5;
    }
    if (0.0 < fVar7) {
      lVar17 = uVar14 - 0x180;
      lVar23 = uVar14 - 0xe0;
      lVar21 = uVar14 - 0xf0;
      lVar26 = 2;
      fVar7 = (fVar11 - fVar7) / (fVar11 + fVar7);
      fVar5 = fVar7 * fVar7;
      *(float *)((int)puVar10 + 0xac) = fVar7;
      *(float *)((int)puVar10 + 0xa4) = fVar7;
      *(float *)(puVar10 + 0x15) = fVar7;
      *(float *)(puVar10 + 0x14) = fVar7;
      fVar7 = fVar5 * fVar5;
      *(float *)((int)puVar10 + 0xa4) = *(float *)((int)puVar10 + 0xa4) * fVar5;
      *(float *)(puVar10 + 0x15) = *(float *)(puVar10 + 0x15) * fVar7;
      *(float *)((int)puVar10 + 0xac) = *(float *)((int)puVar10 + 0xac) * fVar7 * fVar5;
      do {
        *(float *)((int)lVar17 + 0xa0) = *(float *)((int)lVar17 + 0x90) * fVar7 * fVar7;
        iVar19 = (int)lVar21;
        lVar21 = lVar21 + 8;
        lVar17 = lVar17 + 8;
        *(float *)((int)lVar23 + 4) = *(float *)(iVar19 + 4) * fVar7 * fVar7;
        lVar23 = lVar23 + 8;
        lVar26 = lVar26 + -1;
      } while (lVar26 != 0);
      lVar26 = 4;
      lVar23 = uVar14 - 0xf0;
      pfVar22 = (float *)&DAT_007358e0;
      lVar17 = lVar18;
      lVar21 = lVar23;
      do {
        fVar7 = *pfVar22;
        fVar5 = pfVar22[1];
        pfVar22 = pfVar22 + 2;
        *(float *)((int)lVar17 + 0xa0) = *(float *)((int)lVar17 + 0xa0) * fVar7;
        lVar17 = lVar17 + 8;
        *(float *)((int)lVar21 + 4) = *(float *)((int)lVar21 + 4) * fVar5;
        lVar21 = lVar21 + 8;
        lVar26 = lVar26 + -1;
      } while (lVar26 != 0);
      lVar17 = 2;
      do {
        iVar19 = (int)lVar18;
        lVar18 = lVar18 + 0x10;
        iVar12 = (int)lVar23;
        lVar23 = lVar23 + 0x10;
        fVar4 = fVar4 + *(float *)(iVar19 + 0xa0) + *(float *)(iVar12 + 4) + *(float *)(iVar12 + 8)
                + *(float *)(iVar12 + 0xc);
        lVar17 = lVar17 + -1;
      } while (lVar17 != 0);
      fVar4 = (fVar4 + 0.7853982) * fVar8 + fVar6;
    }
    dVar28 = (double)FastSubRots(fVar3,fVar4);
    if (dVar28 < 1.2217304706573486) {
      if ((g_heroState == FLIP_JUMP) && (g_heroStateTimer == 0xf)) {
        iVar19 = *(int *)((int)pvVar9 + 0x260) + 1;
        g_BoobsSize = iVar19 + ((uint)(0x14 - (longlong)iVar19 >> 0x3f) & 0x14U - iVar19);
        *(int *)((int)pvVar9 + 0x260) = g_BoobsSize;
      }
      iVar19 = g_heroStateTimer;
      if (((g_heroState == CROUCHING) &&
          (puVar10[0x24] = (longlong)(int)(animationSpeed * 20.5),
          *(int *)((int)puVar10 + 0x124) < iVar19)) &&
         (worldUpdateTime == (worldUpdateTime / 10) * 10)) {
        iVar19 = *(int *)((int)pvVar9 + 0x260) + -1;
        g_BoobsSize = iVar19 + (iVar19 >> 0x1f & -iVar19);
        *(int *)((int)pvVar9 + 0x260) = g_BoobsSize;
      }
    }
  }
  if (g_gameMode != GAME_MODE_SCENE) {
    M918_004b0218(lVar15,uVar25);
    if (Cheats[0] != '\0') {
      *(undefined4 *)((int)pvVar9 + 0xb0) = 0x40300000;
    }
    dVar28 = 0.30000001192092896;
    MB_UpdateManipulatorRot
              ((double)(float)((double)DAT_0071f40c * dVar27),
               (double)(float)((double)DAT_0071f40c * 0.30000001192092896),lVar15,uVar25 + 0x40,0);
    MB_UpdateManipulatorRot
              ((double)(float)((double)DAT_0071f40c * dVar27),
               (double)(float)((double)DAT_0071f40c * dVar28),lVar15,uVar25 + 0xc0,1);
  }
  return;
}


