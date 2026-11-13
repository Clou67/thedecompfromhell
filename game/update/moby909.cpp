// game/update/moby909.cpp -- reconstructed from NPEA00385 EBOOT
// STATUS: NOT STARTED (raw Ghidra output)
// 3 functions, 0x4a8d54-0x4a9d64
#include "game/update/moby909.h"
#include "game/camera.h"
#include "game/collproc.h"
#include "game/debug.h"
#include "game/freeze.h"
#include "game/hero.h"
#include "game/loaders.h"
#include "game/memcard.h"
#include "game/mission.h"
#include "game/mobyfunc.h"
#include "game/mobyutil.h"
#include "game/path.h"
#include "game/respawn.h"
#include "game/space.h"
#include "game/update.h"
#include "game/update/moby1130.h"
#include "game/vendor.h"
#include "idol/fastfunc.h"
#include "idol/mUnk.h"

// 0x04a8d54 (0x14 bytes)
void M909_004a8d54(void)

{
  DAT_008f3f1c = 0x10000;
  return;
}


// 0x04a8d68 (0xf8 bytes)
// strings: 0096c074: 'None'

void M909_004a8d68(int param_1)

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
          DAT_00a1bfa0 = DAT_008f3f40;
          DAT_00a1bfa4 = DAT_008f3f40;
          DAT_00a1bfa8 = DAT_008f3f40;
          sVar1 = g_SpaceSceneMobyCnt.piece<0,2>();
        }
        iVar2 = iVar2 + 1;
        puVar3 = puVar3 + 1;
      } while (iVar2 < sVar1);
    }
  }
  return;
}


// 0x04a8ec0 (0xea4 bytes)
// inlined: FastAtan2 @0x4a95c4, FastAtan2 @0x4a9970, FastAtan2 @0x4a9b24
// strings: 0096c074: 'None'

/* Moby 909 */

void UpdateMoby_909(MobyInstance *moby)

{
  bool bVar1;
  byte bVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  void *pvVar9;
  ulonglong *puVar10;
  float fVar11;
  int iVar12;
  uint uVar13;
  uint uVar14;
  gameMode_t gVar15;
  MobyInstance *pMVar16;
  ulonglong uVar17;
  ulonglong uVar18;
  int iVar21;
  undefined4 uVar22;
  longlong lVar19;
  longlong lVar20;
  short sVar25;
  float *pfVar24;
  longlong lVar23;
  longlong lVar26;
  ulonglong unaff_r26;
  undefined4 *puVar27;
  ulonglong unaff_r27;
  ulonglong unaff_r28;
  ulonglong unaff_r29;
  ulonglong unaff_r30;
  ulonglong uVar28;
  ulonglong unaff_r31;
  ulonglong in_LR;
  longlong lVar29;
  double dVar30;
  double dVar31;
  double dVar32;
  double dVar33;
  ulonglong in_f27;
  ulonglong in_f28;
  ulonglong in_f29;
  double dVar34;
  double dVar35;
  ulonglong in_f30;
  double dVar36;
  double dVar37;
  ulonglong in_f31;
  GPiece<16> auVar38;
  GPiece<16> auVar39;
  GPiece<16> auVar40;
  
  uVar17 = ZEXT48(&stack0x00000000);
  lVar20 = uVar17 - 0x150;
  puVar10 = (ulonglong *)lVar20;
  *puVar10 = uVar17;
  puVar10[0x2c] = in_LR;
  puVar10[0x25] = in_f27;
  puVar10[0x26] = in_f28;
  puVar10[0x27] = in_f29;
  puVar10[0x28] = in_f30;
  puVar10[0x29] = in_f31;
  puVar10[0x24] = unaff_r31;
  puVar10[0x23] = unaff_r30;
  gVar15 = g_gameMode;
  pvVar9 = moby->pVar;
  uVar28 = ZEXT48(pvVar9);
  puVar10[0x22] = unaff_r29;
  puVar10[0x21] = unaff_r28;
  puVar10[0x20] = unaff_r27;
  puVar10[0x1f] = unaff_r26;
  if ((gVar15 == GAME_MODE_SCENE) && (Cheats[0] != '\0')) {
    iVar21 = 0;
    puVar27 = &DAT_0095cd50;
    sVar25 = g_SpaceSceneMobyCnt.piece<0,2>();
    if (0 < g_SpaceSceneMobyCnt.piece<0,2>()) {
      do {
        if ((((MobyInstance *)puVar27[0x5e])->oClass == moby->oClass) && (DAT_00a1bf81 == '\0')) {
          AttachManipulator((MobyInstance *)puVar27[0x5e],1,&DAT_00a1bf80);
          DAT_00a1bfa0 = DAT_008f3f40;
          DAT_00a1bfa4 = DAT_008f3f40;
          DAT_00a1bfa8 = DAT_008f3f40;
          sVar25 = g_SpaceSceneMobyCnt.piece<0,2>();
        }
        iVar21 = iVar21 + 1;
        puVar27 = puVar27 + 1;
      } while (iVar21 < sVar25);
    }
  }
  bVar2 = moby->state;
  if (bVar2 == 0) {
    bVar1 = g_MissionTargets[20].state != 0;
    if (!bVar1) {
      dVar30 = (double)FastWrapRot((moby->rotation).z,3.1415927);
      (moby->rotation).z = (float)dVar30;
    }
    *(uint *)((int)pvVar9 + 0x140) = (uint)bVar1;
    if (((g_LevelFlags[Level][(byte)moby->levelFlagIdx] == -1) &&
        (iVar21 = *(int *)((int)pvVar9 + 0x148), iVar21 != -1)) &&
       (g_MobyInstance[iVar21].oClass == TAXI_03F4)) {
      *(undefined4 *)((int)g_MobyInstance[iVar21].pVar + 0x8c) = 1;
    }
    uVar13 = g_heroMobyPtr->color;
    uVar14 = g_heroMobyPtr->light;
    moby->state = '\x01';
    moby->color = uVar13;
    moby->light = uVar14;
    FUN_004d3720(moby,uVar28);
    MB_SetZBoundsFromPos(moby);
    if (UnlockableItems.heliPack != '\0') {
      *(undefined2 *)((int)pvVar9 + 0x36) = 0xffff;
    }
  }
  else if (bVar2 < 2) {
    if ((((UnlockableItems.heliPack != '\0') &&
         (iVar21 = *(int *)((int)pvVar9 + 0x144), iVar21 != -1)) &&
        (g_MobyInstance[iVar21].oClass == GARAGE_DOOR)) && (g_MobyInstance[iVar21].state == '\0')) {
      g_MobyInstance[iVar21].state = '\x01';
      pMVar16 = g_MobyInstance;
      (&g_CheckpointLive.objState[0])[(short)g_MobyInstance[*(int *)((int)pvVar9 + 0x144)].uid] =
           g_MobyInstance[*(int *)((int)pvVar9 + 0x144)].levelFlagIdx + '\x02';
      bVar2 = pMVar16[*(int *)((int)pvVar9 + 0x144)].levelFlagIdx;
      if ((bVar2 == 0xff) || (((&g_CheckpointLevelFlags)[bVar2] != -1 && (g_LevelFlags[Level][bVar2] == -1))))
      {
        (&g_Checkpoint.objState[0])[(short)pMVar16[*(int *)((int)pvVar9 + 0x144)].uid] = bVar2 + 2;
      }
    }
    if (((UnlockableItems.heliPack == '\0') || (g_LevelFlags[Level][(byte)moby->levelFlagIdx] != -1)
        ) && (iVar21 = FUN_004d3870(moby,uVar28), iVar21 != 0)) {
      if (*(int *)((int)pvVar9 + 0x140) == 0) {
        dVar30 = (double)FastWrapRot((moby->rotation).z,3.1415927);
        (moby->rotation).z = (float)dVar30;
        *(undefined4 *)((int)pvVar9 + 0x140) = 1;
      }
      MB_SetPointAheadOfMoby(0x40059999a0000000,moby);
      moby->state = '\x02';
      moby->unk58 = 0.0;
    }
  }
  else if ((bVar2 < 3) && (g_gameMode != GAME_MODE_SCENE)) {
    sVar25 = *(short *)((int)pvVar9 + 4);
    moby->unk58 = 1.0;
    if (sVar25 != 2) {
      SetLevelFlag(moby->levelFlagIdx);
      iVar21 = *(int *)((int)pvVar9 + 0x148);
      if ((iVar21 != -1) && (g_MobyInstance[iVar21].oClass == TAXI_03F4)) {
        *(undefined4 *)((int)g_MobyInstance[iVar21].pVar + 0x8c) = 1;
      }
      iVar21 = *(int *)((int)pvVar9 + 0x14c);
      if (iVar21 != -1) {
        SetSpawnPoint((Vec4 *)&Cuboids[iVar21].pos,(Vec4 *)&Cuboids[iVar21].rot);
      }
    }
    moby->state = '\x01';
    if (*(short *)((int)pvVar9 + 4) == 2) {
      MB_UnlockItem(2,1);
      MB_ToastMessage(0xbc7,0xffffffffffffffff);
      iVar21 = *(int *)((int)pvVar9 + 0x144);
      if (((iVar21 != -1) && (g_MobyInstance[iVar21].oClass == GARAGE_DOOR)) &&
         (g_MobyInstance[iVar21].state == '\0')) {
        g_MobyInstance[iVar21].state = '\x01';
        pMVar16 = g_MobyInstance;
        (&g_CheckpointLive.objState[0])[(short)g_MobyInstance[*(int *)((int)pvVar9 + 0x144)].uid] =
             g_MobyInstance[*(int *)((int)pvVar9 + 0x144)].levelFlagIdx + '\x02';
        bVar2 = pMVar16[*(int *)((int)pvVar9 + 0x144)].levelFlagIdx;
        if ((bVar2 == 0xff) ||
           (((&g_CheckpointLevelFlags)[bVar2] != -1 && (g_LevelFlags[Level][bVar2] == -1)))) {
          (&g_Checkpoint.objState[0])[(short)pMVar16[*(int *)((int)pvVar9 + 0x144)].uid] = bVar2 + 2;
        }
      }
      iVar21 = *(int *)((int)pvVar9 + 0x14c);
      if (iVar21 != -1) {
        SetSpawnPoint((Vec4 *)&Cuboids[iVar21].pos,(Vec4 *)&Cuboids[iVar21].rot);
      }
      memcard_Save(0,-1);
      Hero_Warp(&Cuboids[*(int *)((int)pvVar9 + 0x14c)].pos.x,
                      &Cuboids[*(int *)((int)pvVar9 + 0x14c)].rot.x,0,1);
    }
  }
  dVar30 = 0.019999999552965164;
  if (moby->animationId != '\0') goto LAB_004a9cc0;
  fVar3 = (moby->pos).y;
  fVar4 = (moby->pos).x;
  fVar6 = fVar3 - g_heroPosition.y;
  fVar7 = fVar4 - g_heroPosition.x;
  if (8.0 <= SQRT(fVar7 * fVar7 + fVar6 * fVar6)) {
LAB_004a9774:
    if (*(int *)((int)pvVar9 + 0x164) != 0) {
      *(undefined4 *)((int)pvVar9 + 0x164) = 0;
      *(float *)((int)pvVar9 + 0x150) = g_heroCGPos;
      *(float *)((int)pvVar9 + 0x154) = DAT_00969db4;
      *(float *)((int)pvVar9 + 0x158) = DAT_00969db8;
      *(undefined4 *)((int)pvVar9 + 0x15c) = DAT_00969dbc;
    }
  }
  else {
    fVar4 = g_heroCGPos - fVar4;
    fVar3 = DAT_00969db4 - fVar3;
    fVar6 = ABS(fVar4);
    fVar5 = ABS(fVar3);
    *(float *)(puVar10 + 0x11) = fVar4;
    *(float *)((int)puVar10 + 0x8c) = fVar3;
    fVar3 = (moby->rotation).z;
    *(float *)(puVar10 + 0x12) = fVar6 - fVar5;
    fVar4 = 0.0;
    uVar18 = (ulonglong)(*(uint *)(puVar10 + 0x11) >> 0x1c) & 8 |
             (ulonglong)(*(uint *)(puVar10 + 0x12) >> 0x1e) & 2 |
             (ulonglong)(*(uint *)((int)puVar10 + 0x8c) >> 0x1d) & 4;
    fVar7 = ABS(*(float *)(puVar10 + 0x11));
    if (*(float *)(puVar10 + 0x12) - 0.0 < 0.0) {
      fVar7 = fVar5;
    }
    fVar8 = *(float *)(&g_atanQuadrantTable + (int)(uVar18 << 2));
    fVar5 = *(float *)(((uint)(uVar18 << 2) | 0x735900) + 4);
    fVar11 = ABS(*(float *)((int)puVar10 + 0x8c));
    if (*(float *)(puVar10 + 0x12) - 0.0 < 0.0) {
      fVar11 = fVar6;
    }
    if (0.0 < fVar7) {
      lVar19 = uVar17 - 0x140;
      lVar26 = uVar17 - 0x6c;
      lVar23 = uVar17 - 0x7c;
      lVar29 = 2;
      fVar6 = (fVar11 - fVar7) / (fVar11 + fVar7);
      fVar7 = fVar6 * fVar6;
      *(float *)(puVar10 + 0x1c) = fVar6;
      *(float *)(puVar10 + 0x1b) = fVar6;
      *(float *)((int)puVar10 + 0xdc) = fVar6;
      *(float *)((int)puVar10 + 0xd4) = fVar6;
      fVar6 = fVar7 * fVar7;
      *(float *)(puVar10 + 0x1b) = *(float *)(puVar10 + 0x1b) * fVar7;
      *(float *)((int)puVar10 + 0xdc) = *(float *)((int)puVar10 + 0xdc) * fVar6;
      *(float *)(puVar10 + 0x1c) = *(float *)(puVar10 + 0x1c) * fVar6 * fVar7;
      do {
        *(float *)((int)lVar19 + 0xd4) = *(float *)((int)lVar19 + 0xc4) * fVar6 * fVar6;
        iVar21 = (int)lVar23;
        lVar23 = lVar23 + 8;
        lVar19 = lVar19 + 8;
        *(float *)((int)lVar26 + 4) = *(float *)(iVar21 + 4) * fVar6 * fVar6;
        lVar26 = lVar26 + 8;
        lVar29 = lVar29 + -1;
      } while (lVar29 != 0);
      lVar29 = 4;
      lVar26 = uVar17 - 0x7c;
      pfVar24 = (float *)&DAT_007358e0;
      lVar19 = lVar20;
      lVar23 = lVar26;
      do {
        fVar6 = *pfVar24;
        fVar7 = pfVar24[1];
        pfVar24 = pfVar24 + 2;
        *(float *)((int)lVar19 + 0xd4) = *(float *)((int)lVar19 + 0xd4) * fVar6;
        lVar19 = lVar19 + 8;
        *(float *)((int)lVar23 + 4) = *(float *)((int)lVar23 + 4) * fVar7;
        lVar23 = lVar23 + 8;
        lVar29 = lVar29 + -1;
      } while (lVar29 != 0);
      lVar23 = 2;
      lVar19 = lVar20;
      do {
        iVar21 = (int)lVar19;
        lVar19 = lVar19 + 0x10;
        iVar12 = (int)lVar26;
        lVar26 = lVar26 + 0x10;
        fVar4 = fVar4 + *(float *)(iVar21 + 0xd4) + *(float *)(iVar12 + 4) + *(float *)(iVar12 + 8)
                + *(float *)(iVar12 + 0xc);
        lVar23 = lVar23 + -1;
      } while (lVar23 != 0);
      fVar4 = (fVar4 + 0.7853982) * fVar8 + fVar5;
    }
    dVar31 = (double)FastSubRots(fVar3,fVar4);
    if (1.5707963705062866 <= dVar31) goto LAB_004a9774;
    if (SQRT(DAT_00969de8 * DAT_00969de8 + DAT_00969de0 * DAT_00969de0 + DAT_00969de4 * DAT_00969de4
            ) <= 0.01) {
      FastDecTimerS32(uVar28 + 0x164);
    }
    else {
      auVar38 = ZEXT416(0xffffffff);
      auVar38 = auVar38 | auVar38 << 0x20 | auVar38 << 0x40 | auVar38 << 0x60;
      auVar39 = vectorShiftLeftIntegerWord(auVar38,auVar38);
      auVar38 = loadVectorLeftIndexed(0x20,0x4a8e60);
      auVar38 = auVar38 >> 0x60 & (GPiece<16>)0xffffffff;
      auVar40 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
      auVar38 = vectorMultiplyAddFloatingPoint
                          (auVar40,auVar38 | auVar38 << 0x20 | auVar38 << 0x40 | auVar38 << 0x60,
                           auVar39);
      auVar38 = vectorConvertToSignedFixedPointWordSaturate(auVar38,0);
      auVar38 = auVar38 >> 0x60 & (GPiece<16>)0xffffffff;
      uVar22 = storeVectorElementWordIndexed
                         (auVar38 | auVar38 << 0x20 | auVar38 << 0x40 | auVar38 << 0x60,0x164,uVar28
                         );
      *(undefined4 *)((int)pvVar9 + 0x164U & 0xfffffffc) = uVar22;
    }
  }
  iVar21 = FastDecTimerS32(uVar28 + 0x168);
  if (iVar21 != 0) {
    dVar31 = (double)MB_randRangeFloat(180.0,300.0);
    uVar22 = FastDoubleToInt((double)(float)(dVar31 * (double)animationSpeed));
    *(undefined4 *)((int)pvVar9 + 0x168) = uVar22;
    dVar36 = (double)(moby->rotation).z;
    dVar31 = (double)MB_randRangeFloat(-90.0,90.0);
    dVar34 = 0.01745329238474369;
    dVar31 = (double)FastWrapRot((float)dVar36,(float)(dVar31 * 0.01745329238474369));
    dVar36 = (double)MB_randRangeFloat(0.0,30.0);
    MB_SphericalToVector
              (6.0,(float)dVar31,(float)(dVar36 * dVar34),(float *)((int)pvVar9 + 0x150));
    *(float *)((int)pvVar9 + 0x150) = *(float *)((int)pvVar9 + 0x150) + (moby->pos).x;
    *(float *)((int)pvVar9 + 0x154) = *(float *)((int)pvVar9 + 0x154) + (moby->pos).y;
    *(float *)((int)pvVar9 + 0x158) = *(float *)((int)pvVar9 + 0x158) + (moby->pos).z;
  }
  if (*(int *)((int)pvVar9 + 0x164) == 0) {
    fVar3 = *(float *)((int)pvVar9 + 0x150);
    fVar4 = *(float *)((int)pvVar9 + 0x154);
    fVar6 = *(float *)((int)pvVar9 + 0x158);
  }
  else {
    dVar30 = 0.03999999910593033;
    fVar3 = g_heroCGPos;
    fVar4 = DAT_00969db4;
    fVar6 = DAT_00969db8;
  }
  fVar3 = fVar3 - (moby->pos).x;
  dVar37 = (double)fVar3;
  fVar4 = fVar4 - (moby->pos).y;
  dVar35 = (double)fVar4;
  *(float *)((int)puVar10 + 0x7c) = fVar3;
  *(float *)(puVar10 + 0x10) = fVar4;
  dVar34 = (double)(fVar6 - ((moby->pos).z + 1.0));
  *(float *)((int)puVar10 + 0x84) = (float)(ABS(dVar37) - ABS(dVar35));
  dVar36 = 0.0;
  uVar18 = (ulonglong)(*(uint *)((int)puVar10 + 0x7c) >> 0x1c) & 8 |
           (ulonglong)(*(uint *)((int)puVar10 + 0x84) >> 0x1e) & 2 |
           (ulonglong)(*(uint *)(puVar10 + 0x10) >> 0x1d) & 4;
  dVar31 = ABS((double)*(float *)((int)puVar10 + 0x7c));
  if (*(float *)((int)puVar10 + 0x84) - 0.0 < 0.0) {
    dVar31 = ABS(dVar35);
  }
  fVar3 = *(float *)(&g_atanQuadrantTable + (int)(uVar18 << 2));
  dVar33 = ABS((double)*(float *)(puVar10 + 0x10));
  if (*(float *)((int)puVar10 + 0x84) - 0.0 < 0.0) {
    dVar33 = ABS(dVar37);
  }
  fVar4 = *(float *)(((uint)(uVar18 << 2) | 0x735900) + 4);
  dVar32 = dVar36;
  if (0.0 < dVar31) {
    lVar19 = uVar17 - 0x140;
    lVar23 = uVar17 - 0x9c;
    lVar26 = uVar17 - 0x8c;
    lVar29 = 2;
    fVar6 = (float)(dVar33 - dVar31) / (float)(dVar33 + dVar31);
    fVar7 = fVar6 * fVar6;
    *(float *)(puVar10 + 0x18) = fVar6;
    *(float *)(puVar10 + 0x17) = fVar6;
    *(float *)((int)puVar10 + 0xbc) = fVar6;
    *(float *)((int)puVar10 + 0xb4) = fVar6;
    fVar6 = fVar7 * fVar7;
    *(float *)(puVar10 + 0x17) = *(float *)(puVar10 + 0x17) * fVar7;
    *(float *)((int)puVar10 + 0xbc) = *(float *)((int)puVar10 + 0xbc) * fVar6;
    *(float *)(puVar10 + 0x18) = *(float *)(puVar10 + 0x18) * fVar6 * fVar7;
    do {
      *(float *)((int)lVar19 + 0xb4) = *(float *)((int)lVar19 + 0xa4) * fVar6 * fVar6;
      iVar21 = (int)lVar23;
      lVar19 = lVar19 + 8;
      lVar23 = lVar23 + 8;
      *(float *)((int)lVar26 + 4) = *(float *)(iVar21 + 4) * fVar6 * fVar6;
      lVar26 = lVar26 + 8;
      lVar29 = lVar29 + -1;
    } while (lVar29 != 0);
    lVar29 = 4;
    lVar26 = uVar17 - 0x9c;
    pfVar24 = (float *)&DAT_007358e0;
    lVar19 = lVar20;
    lVar23 = lVar26;
    do {
      fVar6 = *pfVar24;
      fVar7 = pfVar24[1];
      pfVar24 = pfVar24 + 2;
      *(float *)((int)lVar19 + 0xb4) = *(float *)((int)lVar19 + 0xb4) * fVar6;
      lVar19 = lVar19 + 8;
      *(float *)((int)lVar23 + 4) = *(float *)((int)lVar23 + 4) * fVar7;
      lVar23 = lVar23 + 8;
      lVar29 = lVar29 + -1;
    } while (lVar29 != 0);
    lVar23 = 2;
    lVar19 = lVar20;
    dVar31 = dVar36;
    do {
      iVar21 = (int)lVar19;
      lVar19 = lVar19 + 0x10;
      iVar12 = (int)lVar26;
      lVar26 = lVar26 + 0x10;
      dVar31 = (double)((float)(dVar31 + (double)*(float *)(iVar21 + 0xb4)) + *(float *)(iVar12 + 4)
                        + *(float *)(iVar12 + 8) + *(float *)(iVar12 + 0xc));
      lVar23 = lVar23 + -1;
    } while (lVar23 != 0);
    dVar32 = (double)((float)(dVar31 + 0.7853981852531433) * fVar3 + fVar4);
  }
  dVar33 = (double)FastDiffRots(dVar32,(double)(moby->rotation).z);
  *(float *)((int)puVar10 + 0x74) = (float)dVar34;
  fVar3 = SQRT((float)(dVar37 * dVar37 + (double)(float)(dVar35 * dVar35)));
  dVar35 = ABS((double)fVar3);
  *(float *)(puVar10 + 0xe) = fVar3;
  *(float *)(puVar10 + 0xf) = (float)(dVar35 - ABS(dVar34));
  uVar18 = (ulonglong)(*(uint *)(puVar10 + 0xe) >> 0x1c) & 8 |
           (ulonglong)(*(uint *)(puVar10 + 0xf) >> 0x1e) & 2 |
           (ulonglong)(*(uint *)((int)puVar10 + 0x74) >> 0x1d) & 4;
  dVar31 = ABS((double)*(float *)(puVar10 + 0xe));
  if ((double)*(float *)(puVar10 + 0xf) - dVar36 < 0.0) {
    dVar31 = ABS(dVar34);
  }
  fVar4 = *(float *)(&g_atanQuadrantTable + (int)(uVar18 << 2));
  fVar3 = *(float *)(((uint)(uVar18 << 2) | 0x735900) + 4);
  dVar34 = ABS((double)*(float *)((int)puVar10 + 0x74));
  if ((double)*(float *)(puVar10 + 0xf) - dVar36 < 0.0) {
    dVar34 = dVar35;
  }
  if (dVar36 < dVar31) {
    lVar19 = uVar17 - 0x140;
    lVar26 = uVar17 - 0xac;
    lVar23 = uVar17 - 0xbc;
    lVar29 = 2;
    fVar6 = (float)(dVar34 - dVar31) / (float)(dVar34 + dVar31);
    fVar7 = fVar6 * fVar6;
    *(float *)(puVar10 + 0x14) = fVar6;
    *(float *)(puVar10 + 0x13) = fVar6;
    *(float *)((int)puVar10 + 0x9c) = fVar6;
    *(float *)((int)puVar10 + 0x94) = fVar6;
    fVar6 = fVar7 * fVar7;
    *(float *)(puVar10 + 0x13) = *(float *)(puVar10 + 0x13) * fVar7;
    *(float *)((int)puVar10 + 0x9c) = *(float *)((int)puVar10 + 0x9c) * fVar6;
    *(float *)(puVar10 + 0x14) = *(float *)(puVar10 + 0x14) * fVar6 * fVar7;
    do {
      *(float *)((int)lVar19 + 0x94) = *(float *)((int)lVar19 + 0x84) * fVar6 * fVar6;
      iVar21 = (int)lVar23;
      lVar23 = lVar23 + 8;
      lVar19 = lVar19 + 8;
      *(float *)((int)lVar26 + 4) = *(float *)(iVar21 + 4) * fVar6 * fVar6;
      lVar26 = lVar26 + 8;
      lVar29 = lVar29 + -1;
    } while (lVar29 != 0);
    lVar29 = 4;
    lVar26 = uVar17 - 0xbc;
    pfVar24 = (float *)&DAT_007358e0;
    lVar19 = lVar20;
    lVar23 = lVar26;
    do {
      fVar6 = *pfVar24;
      fVar7 = pfVar24[1];
      pfVar24 = pfVar24 + 2;
      *(float *)((int)lVar19 + 0x94) = *(float *)((int)lVar19 + 0x94) * fVar6;
      lVar19 = lVar19 + 8;
      *(float *)((int)lVar23 + 4) = *(float *)((int)lVar23 + 4) * fVar7;
      lVar23 = lVar23 + 8;
      lVar29 = lVar29 + -1;
    } while (lVar29 != 0);
    lVar19 = 2;
    do {
      iVar21 = (int)lVar20;
      iVar12 = (int)lVar26;
      lVar20 = lVar20 + 0x10;
      lVar26 = lVar26 + 0x10;
      dVar36 = (double)((float)(dVar36 + (double)*(float *)(iVar21 + 0x94)) + *(float *)(iVar12 + 4)
                        + *(float *)(iVar12 + 8) + *(float *)(iVar12 + 0xc));
      lVar19 = lVar19 + -1;
    } while (lVar19 != 0);
    dVar36 = (double)((float)(dVar36 + 0.7853981852531433) * fVar4 + fVar3);
  }
  dVar36 = -dVar36;
  dVar31 = 1.5707963705062866;
  if ((dVar33 <= 1.5707963705062866) && (dVar31 = dVar33, dVar33 < -1.5707963705062866)) {
    dVar31 = -1.5707963705062866;
  }
  dVar34 = 0.5235987901687622;
  if ((dVar36 <= 0.5235987901687622) && (dVar34 = dVar36, dVar36 < -0.5235987901687622)) {
    dVar34 = -0.5235987901687622;
  }
  *(float *)((int)pvVar9 + 0xa4) = (float)dVar34;
  *(float *)((int)pvVar9 + 0xa8) = (float)(dVar31 * 0.5);
  *(float *)((int)pvVar9 + 0x128) = (float)(dVar31 * 0.5);
LAB_004a9cc0:
  if (Cheats[0] != '\0') {
    *(undefined4 *)((int)pvVar9 + 0xb0) = 0x40300000;
  }
  dVar31 = 0.30000001192092896;
  MB_UpdateManipulatorRot
            ((double)(float)((double)DAT_0071f40c * dVar30),
             (double)(float)((double)DAT_0071f40c * 0.30000001192092896),moby,uVar28 + 0x40,1);
  MB_UpdateManipulatorRot
            ((double)(float)((double)DAT_0071f40c * dVar30),
             (double)(float)((double)DAT_0071f40c * dVar31),moby,uVar28 + 0xc0,0);
  return;
}


