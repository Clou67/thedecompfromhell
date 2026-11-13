// game/update/moby298.cpp -- reconstructed from NPEA00385 EBOOT
// STATUS: NOT STARTED (raw Ghidra output)
// 2 functions, 0x3361b0-0x336fa4
#include "game/update/moby298.h"
#include "game/camera.h"
#include "game/collproc.h"
#include "game/debug.h"
#include "game/freeze.h"
#include "game/help.h"
#include "game/hero.h"
#include "game/map.h"
#include "game/memcard.h"
#include "game/mission.h"
#include "game/mobyfunc.h"
#include "game/mobyutil.h"
#include "game/respawn.h"
#include "game/space.h"
#include "game/update.h"
#include "game/update/moby1118.h"
#include "game/update/moby1130.h"
#include "game/vendor.h"
#include "idol/fastfunc.h"
#include "idol/mUnk.h"

// 0x03361b0 (0xde0 bytes)
// inlined: FastAtan2 @0x3367f0, FastAtan2 @0x336b9c, FastAtan2 @0x336d50
// strings: 0096c074: 'None'

/* Moby 298 */

void UpdateMoby_298(MobyInstance *moby)

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
  uint uVar10;
  uint uVar11;
  float fVar12;
  int iVar13;
  undefined2 uVar14;
  gameMode_t gVar15;
  ulonglong uVar16;
  ulonglong uVar17;
  int iVar20;
  undefined4 uVar21;
  longlong lVar18;
  longlong lVar19;
  short sVar24;
  float *pfVar23;
  longlong lVar22;
  longlong lVar25;
  ulonglong unaff_r26;
  undefined4 *puVar26;
  ulonglong unaff_r27;
  ulonglong unaff_r28;
  ulonglong unaff_r29;
  ulonglong unaff_r30;
  ulonglong uVar27;
  ulonglong unaff_r31;
  ulonglong in_LR;
  longlong lVar28;
  double dVar29;
  double dVar30;
  double dVar31;
  ulonglong in_f27;
  ulonglong in_f28;
  ulonglong in_f29;
  double dVar32;
  double dVar33;
  ulonglong in_f30;
  double dVar34;
  double dVar35;
  ulonglong in_f31;
  double dVar36;
  GPiece<16> auVar37;
  GPiece<16> auVar38;
  GPiece<16> auVar39;
  
  uVar16 = ZEXT48(&stack0x00000000);
  lVar19 = uVar16 - 0x160;
  puVar9 = (ulonglong *)lVar19;
  *puVar9 = uVar16;
  puVar9[0x2e] = in_LR;
  puVar9[0x27] = in_f27;
  puVar9[0x28] = in_f28;
  puVar9[0x29] = in_f29;
  puVar9[0x2a] = in_f30;
  puVar9[0x2b] = in_f31;
  puVar9[0x26] = unaff_r31;
  puVar9[0x25] = unaff_r30;
  gVar15 = g_gameMode;
  pvVar8 = moby->pVar;
  uVar27 = ZEXT48(pvVar8);
  puVar9[0x24] = unaff_r29;
  puVar9[0x23] = unaff_r28;
  puVar9[0x22] = unaff_r27;
  puVar9[0x21] = unaff_r26;
  if ((gVar15 == GAME_MODE_SCENE) && (Cheats[0] != '\0')) {
    iVar20 = 0;
    puVar26 = &DAT_0095cd50;
    sVar24 = g_SpaceSceneMobyCnt.piece<0,2>();
    if (0 < g_SpaceSceneMobyCnt.piece<0,2>()) {
      do {
        if ((((MobyInstance *)puVar26[0x5e])->oClass == moby->oClass) && (DAT_00a1bf81 == '\0')) {
          AttachManipulator((MobyInstance *)puVar26[0x5e],0,&DAT_00a1bf80);
          DAT_00a1bfa0 = 0x40300000;
          DAT_00a1bfa4 = 0x40300000;
          DAT_00a1bfa8 = 0x40300000;
          sVar24 = g_SpaceSceneMobyCnt.piece<0,2>();
        }
        iVar20 = iVar20 + 1;
        puVar26 = puVar26 + 1;
      } while (iVar20 < sVar24);
    }
  }
  if ((moby->enabled != '\0') &&
     (fVar2 = (moby->pos).y - GameCamera.posY, fVar3 = (moby->pos).x - GameCamera.posX,
     fVar5 = (moby->pos).z - GameCamera.posZ,
     SQRT(fVar5 * fVar5 + fVar3 * fVar3 + fVar2 * fVar2) < 30.0)) {
    MB_SetZBoundsFromGround(moby);
    moby->shadow = '\x18';
  }
  bVar1 = moby->state;
  if (bVar1 == 0) {
    moby->state = '\x01';
    if (moby->animationId != '\x01') {
      puVar9[0x1f] = (longlong)(int)(animationSpeed * 20.5);
      MB_SetAnimation(moby,1,0,*(undefined4 *)((int)puVar9 + 0xfc));
    }
    if (CHAR_ARRAY_0096c165[0x23] != '\0') {
      DeleteMoby(moby);
      return;
    }
    FUN_004d3720(moby,uVar27);
    *(undefined4 *)((int)pvVar8 + 0xc) = 0x40800000;
  }
  else if (bVar1 < 2) {
    iVar20 = FUN_004d3870(moby,uVar27);
    if (iVar20 != 0) {
      MB_SetPointAheadOfMoby(0x4008000000000000,moby);
      moby->state = '\x02';
    }
    if (((g_MiscLevelFlags.Raritanium == false) && (UnlockableItems.persuader == '\0')) &&
       (fVar2 = (moby->pos).y - g_heroPosition.y, fVar3 = (moby->pos).x - g_heroPosition.x,
       fVar5 = (moby->pos).z - g_heroPosition.z,
       SQRT(fVar5 * fVar5 + fVar3 * fVar3 + fVar2 * fVar2) < 4.0)) {
      puVar9[0x1f] = (longlong)g_GameFrameCount;
      fVar2 = animationSpeed;
      puVar9[0x1f] = (longlong)(int)(animationSpeed * ((float)(longlong)puVar9[0x1f] + 0.5));
      uVar14 = HelpData.piece<1074,2>();
      iVar20 = *(int *)((int)puVar9 + 0xfc);
      uVar10 = (uint)(ushort)HelpData.piece<1074,2>();
      uVar11 = (uint)(ushort)HelpData.piece<1074,2>();
      puVar9[0x1f] = (longlong)(int)((float)(longlong)(fVar2 * 18.5) * 60.0);
      if ((*(int *)((int)puVar9 + 0xfc) < (int)(iVar20 + uVar11 * -600)) || (uVar10 * 600 == 0)) {
        Help_QueueMessage(STR_OUR_LONG_RANGE_SENSORS_DO_0x2B03,0x86);
      }
      else if ((int)(uint)(ushort)uVar14 < iVar20 / 600) {
        sVar24 = (short)(iVar20 >> 0x1f);
        HelpData.piece<1074,2>() =
             ((short)(iVar20 / 600) + sVar24) -
             ((short)((short)(iVar20 / 0x2580000) + sVar24) >> 0xf);
      }
    }
    if (((g_LevelFlags[Level][(byte)moby->levelFlagIdx] != -1) &&
        (fVar2 = g_heroPosition.y - (moby->pos).y, fVar3 = g_heroPosition.x - (moby->pos).x,
        fVar5 = g_heroPosition.z - (moby->pos).z,
        SQRT(fVar5 * fVar5 + fVar3 * fVar3 + fVar2 * fVar2) < 4.0)) && (ABS(fVar5) < 4.0)) {
      SetLevelFlag();
      SetSpawnPoint
                ((Vec4 *)&Cuboids[*(int *)((int)pvVar8 + 0x48)].pos,
                 (Vec4 *)&Cuboids[*(int *)((int)pvVar8 + 0x48)].rot);
    }
  }
  else if (((bVar1 < 3) && (g_gameMode != GAME_MODE_SCENE)) &&
          (moby->state = '\x01', *(short *)((int)pvVar8 + 4) == 2)) {
    CHAR_ARRAY_0096c165[0x23] = '\x01';
    g_MiscLevelFlags.Raritanium = false;
    UnlockableItems.persuader = '\x01';
    MB_UnlockTrophy(THESE_ARE_NOT_THE_DROIDS);
    puVar9[0x1f] = (longlong)(int)(animationSpeed * 300.5);
    MB_ToastMessage(0x2b06,*(undefined4 *)((int)puVar9 + 0xfc));
    memcard_Save(0,-1);
    Help_QueueMessage(STR_THE_PERSUADER_IS_AN_0x2AF9,0x3b);
  }
  dVar36 = 0.019999999552965164;
  if (moby->animationId != '\x01') goto LAB_00336eec;
  fVar2 = (moby->pos).y;
  fVar3 = (moby->pos).x;
  fVar5 = fVar2 - g_heroPosition.y;
  fVar6 = fVar3 - g_heroPosition.x;
  if (8.0 <= SQRT(fVar6 * fVar6 + fVar5 * fVar5)) {
LAB_003369a0:
    if (*(int *)((int)pvVar8 + 0x160) != 0) {
      *(undefined4 *)((int)pvVar8 + 0x160) = 0;
      *(float *)((int)pvVar8 + 0x150) = g_heroCGPos;
      *(float *)((int)pvVar8 + 0x154) = DAT_00969db4;
      *(float *)((int)pvVar8 + 0x158) = DAT_00969db8;
      *(undefined4 *)((int)pvVar8 + 0x15c) = DAT_00969dbc;
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
    uVar17 = (ulonglong)(*(uint *)(puVar9 + 0x11) >> 0x1c) & 8 |
             (ulonglong)(*(uint *)(puVar9 + 0x12) >> 0x1e) & 2 |
             (ulonglong)(*(uint *)((int)puVar9 + 0x8c) >> 0x1d) & 4;
    fVar6 = ABS(*(float *)(puVar9 + 0x11));
    if (*(float *)(puVar9 + 0x12) - 0.0 < 0.0) {
      fVar6 = fVar4;
    }
    fVar7 = *(float *)(&g_atanQuadrantTable + (int)(uVar17 << 2));
    fVar4 = *(float *)(((uint)(uVar17 << 2) | 0x735900) + 4);
    fVar12 = ABS(*(float *)((int)puVar9 + 0x8c));
    if (*(float *)(puVar9 + 0x12) - 0.0 < 0.0) {
      fVar12 = fVar5;
    }
    if (0.0 < fVar6) {
      lVar18 = uVar16 - 0x150;
      lVar22 = uVar16 - 0x8c;
      lVar25 = uVar16 - 0x7c;
      lVar28 = 2;
      fVar5 = (fVar12 - fVar6) / (fVar12 + fVar6);
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
        *(float *)((int)lVar18 + 0xd4) = *(float *)((int)lVar18 + 0xc4) * fVar5 * fVar5;
        iVar20 = (int)lVar22;
        lVar18 = lVar18 + 8;
        lVar22 = lVar22 + 8;
        *(float *)((int)lVar25 + 4) = *(float *)(iVar20 + 4) * fVar5 * fVar5;
        lVar25 = lVar25 + 8;
        lVar28 = lVar28 + -1;
      } while (lVar28 != 0);
      lVar28 = 4;
      lVar25 = uVar16 - 0x8c;
      pfVar23 = (float *)&DAT_007358e0;
      lVar18 = lVar19;
      lVar22 = lVar25;
      do {
        fVar5 = *pfVar23;
        fVar6 = pfVar23[1];
        pfVar23 = pfVar23 + 2;
        *(float *)((int)lVar18 + 0xd4) = *(float *)((int)lVar18 + 0xd4) * fVar5;
        lVar18 = lVar18 + 8;
        *(float *)((int)lVar22 + 4) = *(float *)((int)lVar22 + 4) * fVar6;
        lVar22 = lVar22 + 8;
        lVar28 = lVar28 + -1;
      } while (lVar28 != 0);
      lVar22 = 2;
      lVar18 = lVar19;
      do {
        iVar20 = (int)lVar18;
        iVar13 = (int)lVar25;
        lVar18 = lVar18 + 0x10;
        lVar25 = lVar25 + 0x10;
        fVar3 = fVar3 + *(float *)(iVar20 + 0xd4) + *(float *)(iVar13 + 4) + *(float *)(iVar13 + 8)
                + *(float *)(iVar13 + 0xc);
        lVar22 = lVar22 + -1;
      } while (lVar22 != 0);
      fVar3 = (fVar3 + 0.7853982) * fVar7 + fVar4;
    }
    dVar29 = (double)FastSubRots(fVar2,fVar3);
    if (1.5707963705062866 <= dVar29) goto LAB_003369a0;
    if (SQRT(DAT_00969de8 * DAT_00969de8 + DAT_00969de0 * DAT_00969de0 + DAT_00969de4 * DAT_00969de4
            ) <= 0.01) {
      FastDecTimerS32(uVar27 + 0x160);
    }
    else {
      auVar37 = ZEXT416(0xffffffff);
      auVar37 = auVar37 | auVar37 << 0x20 | auVar37 << 0x40 | auVar37 << 0x60;
      auVar38 = vectorShiftLeftIntegerWord(auVar37,auVar37);
      auVar37 = loadVectorLeftIndexed(0x38,0x336144);
      auVar37 = auVar37 >> 0x60 & (GPiece<16>)0xffffffff;
      auVar39 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
      auVar37 = vectorMultiplyAddFloatingPoint
                          (auVar39,auVar37 | auVar37 << 0x20 | auVar37 << 0x40 | auVar37 << 0x60,
                           auVar38);
      auVar37 = vectorConvertToSignedFixedPointWordSaturate(auVar37,0);
      auVar37 = auVar37 >> 0x60 & (GPiece<16>)0xffffffff;
      uVar21 = storeVectorElementWordIndexed
                         (auVar37 | auVar37 << 0x20 | auVar37 << 0x40 | auVar37 << 0x60,0x160,uVar27
                         );
      *(undefined4 *)((int)pvVar8 + 0x160U & 0xfffffffc) = uVar21;
    }
  }
  iVar20 = FastDecTimerS32(uVar27 + 0x164);
  if (iVar20 != 0) {
    dVar29 = (double)MB_randRangeFloat(180.0,300.0);
    uVar21 = FastDoubleToInt((double)(float)(dVar29 * (double)animationSpeed));
    *(undefined4 *)((int)pvVar8 + 0x164) = uVar21;
    dVar34 = (double)(moby->rotation).z;
    dVar29 = (double)MB_randRangeFloat(-90.0,90.0);
    dVar32 = 0.01745329238474369;
    dVar29 = (double)FastWrapRot((float)dVar34,(float)(dVar29 * 0.01745329238474369));
    dVar34 = (double)MB_randRangeFloat(0.0,30.0);
    MB_SphericalToVector
              (6.0,(float)dVar29,(float)(dVar34 * dVar32),(float *)((int)pvVar8 + 0x150));
    *(float *)((int)pvVar8 + 0x150) = *(float *)((int)pvVar8 + 0x150) + (moby->pos).x;
    *(float *)((int)pvVar8 + 0x154) = *(float *)((int)pvVar8 + 0x154) + (moby->pos).y;
    *(float *)((int)pvVar8 + 0x158) = *(float *)((int)pvVar8 + 0x158) + (moby->pos).z;
  }
  if (*(int *)((int)pvVar8 + 0x160) == 0) {
    fVar2 = *(float *)((int)pvVar8 + 0x150);
    fVar3 = *(float *)((int)pvVar8 + 0x154);
    fVar5 = *(float *)((int)pvVar8 + 0x158);
  }
  else {
    dVar36 = 0.03999999910593033;
    fVar2 = g_heroCGPos;
    fVar3 = DAT_00969db4;
    fVar5 = DAT_00969db8;
  }
  fVar2 = fVar2 - (moby->pos).x;
  dVar35 = (double)fVar2;
  fVar3 = fVar3 - (moby->pos).y;
  dVar33 = (double)fVar3;
  *(float *)((int)puVar9 + 0x7c) = fVar2;
  *(float *)(puVar9 + 0x10) = fVar3;
  dVar32 = (double)(fVar5 - ((moby->pos).z + 1.0));
  *(float *)((int)puVar9 + 0x84) = (float)(ABS(dVar35) - ABS(dVar33));
  dVar34 = 0.0;
  uVar17 = (ulonglong)(*(uint *)((int)puVar9 + 0x7c) >> 0x1c) & 8 |
           (ulonglong)(*(uint *)((int)puVar9 + 0x84) >> 0x1e) & 2 |
           (ulonglong)(*(uint *)(puVar9 + 0x10) >> 0x1d) & 4;
  dVar29 = ABS((double)*(float *)((int)puVar9 + 0x7c));
  if (*(float *)((int)puVar9 + 0x84) - 0.0 < 0.0) {
    dVar29 = ABS(dVar33);
  }
  fVar2 = *(float *)(&g_atanQuadrantTable + (int)(uVar17 << 2));
  dVar31 = ABS((double)*(float *)(puVar9 + 0x10));
  if (*(float *)((int)puVar9 + 0x84) - 0.0 < 0.0) {
    dVar31 = ABS(dVar35);
  }
  fVar3 = *(float *)(((uint)(uVar17 << 2) | 0x735900) + 4);
  dVar30 = dVar34;
  if (0.0 < dVar29) {
    lVar18 = uVar16 - 0x150;
    lVar25 = uVar16 - 0x9c;
    lVar22 = uVar16 - 0xac;
    lVar28 = 2;
    fVar5 = (float)(dVar31 - dVar29) / (float)(dVar31 + dVar29);
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
      *(float *)((int)lVar18 + 0xb4) = *(float *)((int)lVar18 + 0xa4) * fVar5 * fVar5;
      iVar20 = (int)lVar22;
      lVar22 = lVar22 + 8;
      lVar18 = lVar18 + 8;
      *(float *)((int)lVar25 + 4) = *(float *)(iVar20 + 4) * fVar5 * fVar5;
      lVar25 = lVar25 + 8;
      lVar28 = lVar28 + -1;
    } while (lVar28 != 0);
    lVar28 = 4;
    lVar25 = uVar16 - 0xac;
    pfVar23 = (float *)&DAT_007358e0;
    lVar18 = lVar19;
    lVar22 = lVar25;
    do {
      fVar5 = *pfVar23;
      fVar6 = pfVar23[1];
      pfVar23 = pfVar23 + 2;
      *(float *)((int)lVar18 + 0xb4) = *(float *)((int)lVar18 + 0xb4) * fVar5;
      lVar18 = lVar18 + 8;
      *(float *)((int)lVar22 + 4) = *(float *)((int)lVar22 + 4) * fVar6;
      lVar22 = lVar22 + 8;
      lVar28 = lVar28 + -1;
    } while (lVar28 != 0);
    lVar22 = 2;
    lVar18 = lVar19;
    dVar29 = dVar34;
    do {
      iVar20 = (int)lVar18;
      iVar13 = (int)lVar25;
      lVar18 = lVar18 + 0x10;
      lVar25 = lVar25 + 0x10;
      dVar29 = (double)((float)(dVar29 + (double)*(float *)(iVar20 + 0xb4)) + *(float *)(iVar13 + 4)
                        + *(float *)(iVar13 + 8) + *(float *)(iVar13 + 0xc));
      lVar22 = lVar22 + -1;
    } while (lVar22 != 0);
    dVar30 = (double)((float)(dVar29 + 0.7853981852531433) * fVar2 + fVar3);
  }
  dVar31 = (double)FastDiffRots(dVar30,(double)(moby->rotation).z);
  *(float *)((int)puVar9 + 0x74) = (float)dVar32;
  fVar2 = SQRT((float)(dVar35 * dVar35 + (double)(float)(dVar33 * dVar33)));
  dVar33 = ABS((double)fVar2);
  *(float *)(puVar9 + 0xe) = fVar2;
  *(float *)(puVar9 + 0xf) = (float)(dVar33 - ABS(dVar32));
  uVar17 = (ulonglong)(*(uint *)(puVar9 + 0xe) >> 0x1c) & 8 |
           (ulonglong)(*(uint *)(puVar9 + 0xf) >> 0x1e) & 2 |
           (ulonglong)(*(uint *)((int)puVar9 + 0x74) >> 0x1d) & 4;
  dVar29 = ABS((double)*(float *)(puVar9 + 0xe));
  if ((double)*(float *)(puVar9 + 0xf) - dVar34 < 0.0) {
    dVar29 = ABS(dVar32);
  }
  fVar2 = *(float *)(&g_atanQuadrantTable + (int)(uVar17 << 2));
  dVar32 = ABS((double)*(float *)((int)puVar9 + 0x74));
  if ((double)*(float *)(puVar9 + 0xf) - dVar34 < 0.0) {
    dVar32 = dVar33;
  }
  fVar3 = *(float *)(((uint)(uVar17 << 2) | 0x735900) + 4);
  if (dVar34 < dVar29) {
    lVar18 = uVar16 - 0x150;
    lVar22 = uVar16 - 0xcc;
    lVar25 = uVar16 - 0xbc;
    lVar28 = 2;
    fVar5 = (float)(dVar32 - dVar29) / (float)(dVar32 + dVar29);
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
      *(float *)((int)lVar18 + 0x94) = *(float *)((int)lVar18 + 0x84) * fVar5 * fVar5;
      iVar20 = (int)lVar22;
      lVar18 = lVar18 + 8;
      lVar22 = lVar22 + 8;
      *(float *)((int)lVar25 + 4) = *(float *)(iVar20 + 4) * fVar5 * fVar5;
      lVar25 = lVar25 + 8;
      lVar28 = lVar28 + -1;
    } while (lVar28 != 0);
    lVar28 = 4;
    lVar25 = uVar16 - 0xcc;
    pfVar23 = (float *)&DAT_007358e0;
    lVar18 = lVar19;
    lVar22 = lVar25;
    do {
      fVar5 = *pfVar23;
      fVar6 = pfVar23[1];
      pfVar23 = pfVar23 + 2;
      *(float *)((int)lVar18 + 0x94) = *(float *)((int)lVar18 + 0x94) * fVar5;
      lVar18 = lVar18 + 8;
      *(float *)((int)lVar22 + 4) = *(float *)((int)lVar22 + 4) * fVar6;
      lVar22 = lVar22 + 8;
      lVar28 = lVar28 + -1;
    } while (lVar28 != 0);
    lVar18 = 2;
    do {
      iVar20 = (int)lVar19;
      iVar13 = (int)lVar25;
      lVar19 = lVar19 + 0x10;
      lVar25 = lVar25 + 0x10;
      dVar34 = (double)((float)(dVar34 + (double)*(float *)(iVar20 + 0x94)) + *(float *)(iVar13 + 4)
                        + *(float *)(iVar13 + 8) + *(float *)(iVar13 + 0xc));
      lVar18 = lVar18 + -1;
    } while (lVar18 != 0);
    dVar34 = (double)((float)(dVar34 + 0.7853981852531433) * fVar2 + fVar3);
  }
  dVar34 = -dVar34;
  dVar29 = 1.5707963705062866;
  if ((dVar31 <= 1.5707963705062866) && (dVar29 = dVar31, dVar31 < -1.5707963705062866)) {
    dVar29 = -1.5707963705062866;
  }
  dVar32 = 0.5235987901687622;
  if ((dVar34 <= 0.5235987901687622) && (dVar32 = dVar34, dVar34 < -0.5235987901687622)) {
    dVar32 = -0.5235987901687622;
  }
  *(float *)((int)pvVar8 + 0xb4) = (float)dVar32;
  *(float *)((int)pvVar8 + 0xb8) = (float)(dVar29 * 0.5);
  *(float *)((int)pvVar8 + 0x138) = (float)(dVar29 * 0.5);
LAB_00336eec:
  if (Cheats[0] != '\0') {
    *(undefined4 *)((int)pvVar8 + 0xc0) = 0x40300000;
  }
  dVar29 = 0.30000001192092896;
  MB_UpdateManipulatorRot
            ((double)(float)((double)DAT_0071f40c * dVar36),
             (double)(float)((double)DAT_0071f40c * 0.30000001192092896),moby,uVar27 + 0x50,0);
  MB_UpdateManipulatorRot
            ((double)(float)((double)DAT_0071f40c * dVar36),
             (double)(float)((double)DAT_0071f40c * dVar29),moby,uVar27 + 0xd0,1);
  return;
}


// 0x0336f90 (0x14 bytes)
void M298_00336f90(void)

{
  DAT_00810a1c = 0x10000;
  return;
}


