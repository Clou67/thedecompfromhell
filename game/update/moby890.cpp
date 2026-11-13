// game/update/moby890.cpp -- reconstructed from NPEA00385 EBOOT
// STATUS: NOT STARTED (raw Ghidra output)
// 3 functions, 0x4a2b7c-0x4a3bc8
#include "game/update/moby890.h"
#include "game/camera.h"
#include "game/collproc.h"
#include "game/debug.h"
#include "game/draw.h"
#include "game/freeze.h"
#include "game/hero.h"
#include "game/loaders.h"
#include "game/memcard.h"
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

// 0x04a2b7c (0x14 bytes)
void M890_004a2b7c(void)

{
  DAT_008cc0ac = 0x10000;
  return;
}


// 0x04a2b90 (0x150 bytes)
// strings: 0096c074: 'None'

void M890_004a2b90(int param_1)

{
  short sVar1;
  int iVar2;
  undefined4 *puVar3;
  
  if ((g_gameMode == GAME_MODE_SCENE) && (Cheats[0] != '\0')) {
    puVar3 = &DAT_0095cd50;
    if ((g_SceneId == 2 && 0x1e9 < g_SpaceSceneFrame) &&
       (g_SpaceSceneFrame < 0x266)) {
      g_SceneCheatDolly = 0xbe4ccccd;
    }
    if (((g_SceneId == 2) && (0x2ed < g_SpaceSceneFrame)) &&
       (g_SpaceSceneFrame < 0x321)) {
      g_SceneCheatDolly = 0x3e4ccccd;
    }
    iVar2 = 0;
    sVar1 = g_SpaceSceneMobyCnt.piece<0,2>();
    if (0 < g_SpaceSceneMobyCnt.piece<0,2>()) {
      do {
        if ((((MobyInstance *)puVar3[0x5e])->oClass == *(MOBY_OCLASSES *)(param_1 + 0xa6)) &&
           (DAT_00a1bf81 == '\0')) {
          AttachManipulator((MobyInstance *)puVar3[0x5e],0,&DAT_00a1bf80);
          DAT_00a1bfa0 = DAT_008cc0d4;
          DAT_00a1bfa4 = DAT_008cc0d4;
          DAT_00a1bfa8 = DAT_008cc0d4;
          sVar1 = g_SpaceSceneMobyCnt.piece<0,2>();
        }
        iVar2 = iVar2 + 1;
        puVar3 = puVar3 + 1;
      } while (iVar2 < sVar1);
    }
  }
  return;
}


// 0x04a2d38 (0xe90 bytes)
// inlined: FastAtan2 @0x4a3428, FastAtan2 @0x4a37d4, FastAtan2 @0x4a3988
// strings: 0096c074: 'None' | 006588b0: 'Helga'

/* Moby 890 */

void UpdateMoby_890(MobyInstance *moby)

{
  byte bVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  void *pvVar8;
  void *pvVar9;
  uint uVar10;
  ulonglong *puVar11;
  float fVar12;
  int iVar13;
  uint uVar14;
  gameMode_t gVar15;
  MobyInstance *pMVar16;
  ulonglong uVar17;
  int iVar20;
  undefined4 uVar21;
  longlong lVar18;
  longlong lVar19;
  short sVar24;
  float *pfVar23;
  longlong lVar22;
  longlong lVar25;
  ulonglong uVar26;
  ulonglong unaff_r25;
  undefined4 *puVar27;
  ulonglong unaff_r26;
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
  ulonglong in_f27;
  ulonglong in_f28;
  ulonglong in_f29;
  double dVar33;
  double dVar34;
  ulonglong in_f30;
  double dVar35;
  double dVar36;
  ulonglong in_f31;
  double dVar37;
  GPiece<16> auVar38;
  GPiece<16> auVar39;
  GPiece<16> auVar40;
  
  uVar26 = ZEXT48(&stack0x00000000);
  lVar19 = uVar26 - 0x160;
  puVar11 = (ulonglong *)lVar19;
  *puVar11 = uVar26;
  puVar11[0x2e] = in_LR;
  puVar11[0x27] = in_f27;
  puVar11[0x28] = in_f28;
  puVar11[0x29] = in_f29;
  puVar11[0x2a] = in_f30;
  puVar11[0x2b] = in_f31;
  puVar11[0x26] = unaff_r31;
  puVar11[0x25] = unaff_r30;
  puVar11[0x23] = unaff_r28;
  gVar15 = g_gameMode;
  pvVar8 = moby->pVar;
  uVar28 = ZEXT48(pvVar8);
  puVar11[0x24] = unaff_r29;
  puVar11[0x22] = unaff_r27;
  puVar11[0x21] = unaff_r26;
  puVar11[0x20] = unaff_r25;
  if ((gVar15 == GAME_MODE_SCENE) && (Cheats[0] != '\0')) {
    puVar27 = &DAT_0095cd50;
    if ((g_SceneId == 2 && 0x1e9 < g_SpaceSceneFrame) &&
       (g_SpaceSceneFrame < 0x266)) {
      g_SceneCheatDolly = 0xbe4ccccd;
    }
    if (((g_SceneId == 2) && (0x2ed < g_SpaceSceneFrame)) &&
       (g_SpaceSceneFrame < 0x321)) {
      g_SceneCheatDolly = 0x3e4ccccd;
    }
    iVar20 = 0;
    sVar24 = g_SpaceSceneMobyCnt.piece<0,2>();
    if (0 < g_SpaceSceneMobyCnt.piece<0,2>()) {
      do {
        if ((((MobyInstance *)puVar27[0x5e])->oClass == moby->oClass) && (DAT_00a1bf81 == '\0')) {
          AttachManipulator((MobyInstance *)puVar27[0x5e],0,&DAT_00a1bf80);
          DAT_00a1bfa0 = DAT_008cc0d4;
          DAT_00a1bfa4 = DAT_008cc0d4;
          DAT_00a1bfa8 = DAT_008cc0d4;
          sVar24 = g_SpaceSceneMobyCnt.piece<0,2>();
        }
        iVar20 = iVar20 + 1;
        puVar27 = puVar27 + 1;
      } while (iVar20 < sVar24);
    }
  }
  bVar1 = moby->state;
  if (bVar1 == 0) {
    if (UnlockableItems.swingshot != '\0') {
      iVar20 = *(int *)((int)pvVar8 + 0xd4);
      if ((iVar20 != -1) && (g_MobyInstance[iVar20].oClass == TAXI_03F4)) {
        pvVar8 = g_MobyInstance[iVar20].pVar;
        *(undefined4 *)((int)pvVar8 + 0x8c) = 1;
        SaveCheckpointMobyVar((void *)((int)pvVar8 + 0x8c),4,moby,2,(int *)&g_CheckpointLive.vars);
      }
      DeleteMoby(moby);
      return;
    }
    if (((g_LevelFlags[Level][(byte)moby->levelFlagIdx] == -1) &&
        (iVar20 = *(int *)((int)pvVar8 + 0xd4), iVar20 != -1)) &&
       (g_MobyInstance[iVar20].oClass == TAXI_03F4)) {
      pvVar9 = g_MobyInstance[iVar20].pVar;
      *(undefined4 *)((int)pvVar9 + 0x8c) = 1;
      SaveCheckpointMobyVar((void *)((int)pvVar9 + 0x8c),4,moby,2,(int *)&g_CheckpointLive.vars);
    }
    uVar10 = g_heroMobyPtr->color;
    uVar14 = g_heroMobyPtr->light;
    moby->state = '\x01';
    moby->color = uVar10;
    moby->light = uVar14;
    *(char **)((int)pvVar8 + 0xa0) = "Helga";
    *(undefined4 *)((int)pvVar8 + 200) = 5;
    FUN_004d3720(moby,uVar28 + 0x80);
    MB_SetZBoundsFromPos(moby);
  }
  else if (bVar1 < 2) {
    iVar20 = FUN_004d3870(moby,uVar28 + 0x80);
    if (iVar20 != 0) {
      MB_SetPointAheadOfMoby(0x4002666660000000,moby);
      moby->state = '\x02';
      iVar20 = *(int *)((int)pvVar8 + 0xd4);
      if ((iVar20 != -1) && (g_MobyInstance[iVar20].oClass == TAXI_03F4)) {
        pvVar9 = g_MobyInstance[iVar20].pVar;
        *(undefined4 *)((int)pvVar9 + 0x8c) = 1;
        SaveCheckpointMobyVar((void *)((int)pvVar9 + 0x8c),4,moby,2,(int *)&g_CheckpointLive.vars);
      }
    }
  }
  else if (bVar1 < 3) {
    if (g_gameMode == GAME_MODE_SCENE) {
      if (((*(short *)((int)pvVar8 + 0xb6) == 2) &&
          (iVar20 = *(int *)((int)pvVar8 + 0xd4), iVar20 != -1)) &&
         (g_MobyInstance[iVar20].oClass == TAXI_03F4)) {
        pvVar9 = g_MobyInstance[iVar20].pVar;
        *(undefined4 *)((int)pvVar9 + 0x7c) = 0;
        *(undefined4 *)((int)pvVar9 + 0x8c) = 0;
        *(undefined4 *)((int)pvVar9 + 0xa0) = *(undefined4 *)((int)pvVar8 + 0xd8);
      }
    }
    else {
      if (*(short *)((int)pvVar8 + 0x84) != 2) {
        SetLevelFlag(moby->levelFlagIdx);
        iVar20 = *(int *)((int)pvVar8 + 0xd4);
        if ((iVar20 != -1) && (g_MobyInstance[iVar20].oClass == TAXI_03F4)) {
          pvVar9 = g_MobyInstance[iVar20].pVar;
          *(undefined4 *)((int)pvVar9 + 0x8c) = 1;
          SaveCheckpointMobyVar((void *)((int)pvVar9 + 0x8c),4,moby,2,(int *)&g_CheckpointLive.vars)
          ;
        }
        iVar20 = *(int *)((int)pvVar8 + 0xcc);
        if (iVar20 != -1) {
          SetSpawnPoint((Vec4 *)&Cuboids[iVar20].pos,(Vec4 *)&Cuboids[iVar20].rot);
        }
      }
      moby->state = '\x01';
      if (*(short *)((int)pvVar8 + 0x84) == 2) {
        MB_UnlockItem(0xc,1);
        MB_ToastMessage(0xbc8,0xffffffffffffffff);
        pMVar16 = g_MobyInstance;
        iVar20 = *(int *)((int)pvVar8 + 0xd0);
        if (iVar20 != -1) {
          (&g_CheckpointLive.objState[0])[(short)g_MobyInstance[iVar20].uid] =
               g_MobyInstance[iVar20].levelFlagIdx + '\x02';
          uVar10 = *(uint *)((int)pvVar8 + 0xd0);
          uVar26 = (ulonglong)uVar10;
          bVar1 = pMVar16[uVar10].levelFlagIdx;
          if ((bVar1 == 0xff) ||
             (((&g_CheckpointLevelFlags)[bVar1] != -1 && (g_LevelFlags[Level][bVar1] == -1)))) {
            (&g_Checkpoint.objState[0])[(short)pMVar16[uVar10].uid] = bVar1 + 2;
            uVar26 = (ulonglong)*(uint *)((int)pvVar8 + 0xd0);
          }
          DeleteMoby((MobyInstance *)((int)&(pMVar16->bSphere).x + (int)(uVar26 << 8)));
        }
        iVar20 = *(int *)((int)pvVar8 + 0xd4);
        if ((iVar20 != -1) && (g_MobyInstance[iVar20].oClass == TAXI_03F4)) {
          pvVar9 = g_MobyInstance[iVar20].pVar;
          *(undefined4 *)((int)pvVar9 + 0x7c) = 0;
          *(undefined4 *)((int)pvVar9 + 0x8c) = 0;
          *(undefined4 *)((int)pvVar9 + 0xa0) = *(undefined4 *)((int)pvVar8 + 0xd8);
        }
        memcard_Save(0,-1);
        DeleteMoby(moby);
        return;
      }
    }
  }
  dVar37 = 0.019999999552965164;
  if (moby->animationId != '\0') goto LAB_004a3b20;
  fVar2 = (moby->pos).y;
  fVar3 = (moby->pos).x;
  fVar5 = fVar2 - g_heroPosition.y;
  fVar6 = fVar3 - g_heroPosition.x;
  if (8.0 <= SQRT(fVar6 * fVar6 + fVar5 * fVar5)) {
LAB_004a35d8:
    if (*(int *)((int)pvVar8 + 0x1f0) != 0) {
      *(undefined4 *)((int)pvVar8 + 0x1f0) = 0;
      *(float *)((int)pvVar8 + 0x1e0) = g_heroCGPos;
      *(float *)((int)pvVar8 + 0x1e4) = DAT_00969db4;
      *(float *)((int)pvVar8 + 0x1e8) = DAT_00969db8;
      *(undefined4 *)((int)pvVar8 + 0x1ec) = DAT_00969dbc;
    }
  }
  else {
    fVar3 = g_heroCGPos - fVar3;
    fVar2 = DAT_00969db4 - fVar2;
    fVar5 = ABS(fVar3);
    fVar4 = ABS(fVar2);
    *(float *)(puVar11 + 0x11) = fVar3;
    *(float *)((int)puVar11 + 0x8c) = fVar2;
    fVar2 = (moby->rotation).z;
    *(float *)(puVar11 + 0x12) = fVar5 - fVar4;
    fVar3 = 0.0;
    uVar17 = (ulonglong)(*(uint *)(puVar11 + 0x11) >> 0x1c) & 8 |
             (ulonglong)(*(uint *)(puVar11 + 0x12) >> 0x1e) & 2 |
             (ulonglong)(*(uint *)((int)puVar11 + 0x8c) >> 0x1d) & 4;
    fVar6 = ABS(*(float *)(puVar11 + 0x11));
    if (*(float *)(puVar11 + 0x12) - 0.0 < 0.0) {
      fVar6 = fVar4;
    }
    fVar7 = *(float *)(&g_atanQuadrantTable + (int)(uVar17 << 2));
    fVar4 = *(float *)(((uint)(uVar17 << 2) | 0x735900) + 4);
    fVar12 = ABS(*(float *)((int)puVar11 + 0x8c));
    if (*(float *)(puVar11 + 0x12) - 0.0 < 0.0) {
      fVar12 = fVar5;
    }
    if (0.0 < fVar6) {
      lVar18 = uVar26 - 0x150;
      lVar25 = uVar26 - 0x7c;
      lVar22 = uVar26 - 0x8c;
      lVar29 = 2;
      fVar5 = (fVar12 - fVar6) / (fVar12 + fVar6);
      fVar6 = fVar5 * fVar5;
      *(float *)(puVar11 + 0x1c) = fVar5;
      *(float *)(puVar11 + 0x1b) = fVar5;
      *(float *)((int)puVar11 + 0xdc) = fVar5;
      *(float *)((int)puVar11 + 0xd4) = fVar5;
      fVar5 = fVar6 * fVar6;
      *(float *)(puVar11 + 0x1b) = *(float *)(puVar11 + 0x1b) * fVar6;
      *(float *)((int)puVar11 + 0xdc) = *(float *)((int)puVar11 + 0xdc) * fVar5;
      *(float *)(puVar11 + 0x1c) = *(float *)(puVar11 + 0x1c) * fVar5 * fVar6;
      do {
        *(float *)((int)lVar18 + 0xd4) = *(float *)((int)lVar18 + 0xc4) * fVar5 * fVar5;
        iVar20 = (int)lVar22;
        lVar22 = lVar22 + 8;
        lVar18 = lVar18 + 8;
        *(float *)((int)lVar25 + 4) = *(float *)(iVar20 + 4) * fVar5 * fVar5;
        lVar25 = lVar25 + 8;
        lVar29 = lVar29 + -1;
      } while (lVar29 != 0);
      lVar29 = 4;
      lVar25 = uVar26 - 0x8c;
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
        lVar29 = lVar29 + -1;
      } while (lVar29 != 0);
      lVar22 = 2;
      lVar18 = lVar19;
      do {
        iVar20 = (int)lVar18;
        lVar18 = lVar18 + 0x10;
        iVar13 = (int)lVar25;
        lVar25 = lVar25 + 0x10;
        fVar3 = fVar3 + *(float *)(iVar20 + 0xd4) + *(float *)(iVar13 + 4) + *(float *)(iVar13 + 8)
                + *(float *)(iVar13 + 0xc);
        lVar22 = lVar22 + -1;
      } while (lVar22 != 0);
      fVar3 = (fVar3 + 0.7853982) * fVar7 + fVar4;
    }
    dVar30 = (double)FastSubRots(fVar2,fVar3);
    if (1.5707963705062866 <= dVar30) goto LAB_004a35d8;
    if (SQRT(DAT_00969de8 * DAT_00969de8 + DAT_00969de0 * DAT_00969de0 + DAT_00969de4 * DAT_00969de4
            ) <= 0.01) {
      FastDecTimerS32(uVar28 + 0x1f0);
    }
    else {
      auVar38 = ZEXT416(0xffffffff);
      auVar38 = auVar38 | auVar38 << 0x20 | auVar38 << 0x40 | auVar38 << 0x60;
      auVar39 = vectorShiftLeftIntegerWord(auVar38,auVar38);
      auVar38 = loadVectorLeftIndexed(0x1c,0x4a2ce0);
      auVar38 = auVar38 >> 0x60 & (GPiece<16>)0xffffffff;
      auVar40 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
      auVar38 = vectorMultiplyAddFloatingPoint
                          (auVar40,auVar38 | auVar38 << 0x20 | auVar38 << 0x40 | auVar38 << 0x60,
                           auVar39);
      auVar38 = vectorConvertToSignedFixedPointWordSaturate(auVar38,0);
      auVar38 = auVar38 >> 0x60 & (GPiece<16>)0xffffffff;
      uVar21 = storeVectorElementWordIndexed
                         (auVar38 | auVar38 << 0x20 | auVar38 << 0x40 | auVar38 << 0x60,0x1f0,uVar28
                         );
      *(undefined4 *)((int)pvVar8 + 0x1f0U & 0xfffffffc) = uVar21;
    }
  }
  iVar20 = FastDecTimerS32(uVar28 + 500);
  if (iVar20 != 0) {
    dVar30 = (double)MB_randRangeFloat(180.0,300.0);
    uVar21 = FastDoubleToInt((double)(float)(dVar30 * (double)animationSpeed));
    *(undefined4 *)((int)pvVar8 + 500) = uVar21;
    dVar35 = (double)(moby->rotation).z;
    dVar30 = (double)MB_randRangeFloat(-90.0,90.0);
    dVar33 = 0.01745329238474369;
    dVar30 = (double)FastWrapRot((float)dVar35,(float)(dVar30 * 0.01745329238474369));
    dVar35 = (double)MB_randRangeFloat(0.0,30.0);
    MB_SphericalToVector
              (6.0,(float)dVar30,(float)(dVar35 * dVar33),(float *)((int)pvVar8 + 0x1e0));
    *(float *)((int)pvVar8 + 0x1e0) = *(float *)((int)pvVar8 + 0x1e0) + (moby->pos).x;
    *(float *)((int)pvVar8 + 0x1e4) = *(float *)((int)pvVar8 + 0x1e4) + (moby->pos).y;
    *(float *)((int)pvVar8 + 0x1e8) = *(float *)((int)pvVar8 + 0x1e8) + (moby->pos).z;
  }
  if (*(int *)((int)pvVar8 + 0x1f0) == 0) {
    fVar2 = *(float *)((int)pvVar8 + 0x1e0);
    fVar3 = *(float *)((int)pvVar8 + 0x1e4);
    fVar5 = *(float *)((int)pvVar8 + 0x1e8);
  }
  else {
    dVar37 = 0.03999999910593033;
    fVar2 = g_heroCGPos;
    fVar3 = DAT_00969db4;
    fVar5 = DAT_00969db8;
  }
  fVar2 = fVar2 - (moby->pos).x;
  dVar36 = (double)fVar2;
  fVar3 = fVar3 - (moby->pos).y;
  dVar34 = (double)fVar3;
  *(float *)((int)puVar11 + 0x7c) = fVar2;
  *(float *)(puVar11 + 0x10) = fVar3;
  dVar33 = (double)(fVar5 - ((moby->pos).z + 1.0));
  *(float *)((int)puVar11 + 0x84) = (float)(ABS(dVar36) - ABS(dVar34));
  dVar35 = 0.0;
  uVar17 = (ulonglong)(*(uint *)((int)puVar11 + 0x7c) >> 0x1c) & 8 |
           (ulonglong)(*(uint *)((int)puVar11 + 0x84) >> 0x1e) & 2 |
           (ulonglong)(*(uint *)(puVar11 + 0x10) >> 0x1d) & 4;
  dVar30 = ABS((double)*(float *)((int)puVar11 + 0x7c));
  if (*(float *)((int)puVar11 + 0x84) - 0.0 < 0.0) {
    dVar30 = ABS(dVar34);
  }
  fVar2 = *(float *)(&g_atanQuadrantTable + (int)(uVar17 << 2));
  dVar32 = ABS((double)*(float *)(puVar11 + 0x10));
  if (*(float *)((int)puVar11 + 0x84) - 0.0 < 0.0) {
    dVar32 = ABS(dVar36);
  }
  fVar3 = *(float *)(((uint)(uVar17 << 2) | 0x735900) + 4);
  dVar31 = dVar35;
  if (0.0 < dVar30) {
    lVar18 = uVar26 - 0x150;
    lVar22 = uVar26 - 0xac;
    lVar25 = uVar26 - 0x9c;
    lVar29 = 2;
    fVar5 = (float)(dVar32 - dVar30) / (float)(dVar32 + dVar30);
    fVar6 = fVar5 * fVar5;
    *(float *)(puVar11 + 0x18) = fVar5;
    *(float *)(puVar11 + 0x17) = fVar5;
    *(float *)((int)puVar11 + 0xbc) = fVar5;
    *(float *)((int)puVar11 + 0xb4) = fVar5;
    fVar5 = fVar6 * fVar6;
    *(float *)(puVar11 + 0x17) = *(float *)(puVar11 + 0x17) * fVar6;
    *(float *)((int)puVar11 + 0xbc) = *(float *)((int)puVar11 + 0xbc) * fVar5;
    *(float *)(puVar11 + 0x18) = *(float *)(puVar11 + 0x18) * fVar5 * fVar6;
    do {
      *(float *)((int)lVar18 + 0xb4) = *(float *)((int)lVar18 + 0xa4) * fVar5 * fVar5;
      iVar20 = (int)lVar22;
      lVar18 = lVar18 + 8;
      lVar22 = lVar22 + 8;
      *(float *)((int)lVar25 + 4) = *(float *)(iVar20 + 4) * fVar5 * fVar5;
      lVar25 = lVar25 + 8;
      lVar29 = lVar29 + -1;
    } while (lVar29 != 0);
    lVar29 = 4;
    lVar25 = uVar26 - 0xac;
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
      lVar29 = lVar29 + -1;
    } while (lVar29 != 0);
    lVar22 = 2;
    lVar18 = lVar19;
    dVar30 = dVar35;
    do {
      iVar20 = (int)lVar18;
      lVar18 = lVar18 + 0x10;
      iVar13 = (int)lVar25;
      lVar25 = lVar25 + 0x10;
      dVar30 = (double)((float)(dVar30 + (double)*(float *)(iVar20 + 0xb4)) + *(float *)(iVar13 + 4)
                        + *(float *)(iVar13 + 8) + *(float *)(iVar13 + 0xc));
      lVar22 = lVar22 + -1;
    } while (lVar22 != 0);
    dVar31 = (double)((float)(dVar30 + 0.7853981852531433) * fVar2 + fVar3);
  }
  dVar32 = (double)FastDiffRots(dVar31,(double)(moby->rotation).z);
  *(float *)((int)puVar11 + 0x74) = (float)dVar33;
  fVar2 = SQRT((float)(dVar36 * dVar36 + (double)(float)(dVar34 * dVar34)));
  dVar34 = ABS((double)fVar2);
  *(float *)(puVar11 + 0xe) = fVar2;
  *(float *)(puVar11 + 0xf) = (float)(dVar34 - ABS(dVar33));
  uVar17 = (ulonglong)(*(uint *)(puVar11 + 0xe) >> 0x1c) & 8 |
           (ulonglong)(*(uint *)(puVar11 + 0xf) >> 0x1e) & 2 |
           (ulonglong)(*(uint *)((int)puVar11 + 0x74) >> 0x1d) & 4;
  dVar30 = ABS((double)*(float *)(puVar11 + 0xe));
  if ((double)*(float *)(puVar11 + 0xf) - dVar35 < 0.0) {
    dVar30 = ABS(dVar33);
  }
  fVar3 = *(float *)(&g_atanQuadrantTable + (int)(uVar17 << 2));
  fVar2 = *(float *)(((uint)(uVar17 << 2) | 0x735900) + 4);
  dVar33 = ABS((double)*(float *)((int)puVar11 + 0x74));
  if ((double)*(float *)(puVar11 + 0xf) - dVar35 < 0.0) {
    dVar33 = dVar34;
  }
  if (dVar35 < dVar30) {
    lVar18 = uVar26 - 0x150;
    lVar25 = uVar26 - 0xbc;
    lVar22 = uVar26 - 0xcc;
    lVar29 = 2;
    fVar5 = (float)(dVar33 - dVar30) / (float)(dVar33 + dVar30);
    fVar6 = fVar5 * fVar5;
    *(float *)(puVar11 + 0x14) = fVar5;
    *(float *)(puVar11 + 0x13) = fVar5;
    *(float *)((int)puVar11 + 0x9c) = fVar5;
    *(float *)((int)puVar11 + 0x94) = fVar5;
    fVar5 = fVar6 * fVar6;
    *(float *)(puVar11 + 0x13) = *(float *)(puVar11 + 0x13) * fVar6;
    *(float *)((int)puVar11 + 0x9c) = *(float *)((int)puVar11 + 0x9c) * fVar5;
    *(float *)(puVar11 + 0x14) = *(float *)(puVar11 + 0x14) * fVar5 * fVar6;
    do {
      *(float *)((int)lVar18 + 0x94) = *(float *)((int)lVar18 + 0x84) * fVar5 * fVar5;
      iVar20 = (int)lVar22;
      lVar22 = lVar22 + 8;
      lVar18 = lVar18 + 8;
      *(float *)((int)lVar25 + 4) = *(float *)(iVar20 + 4) * fVar5 * fVar5;
      lVar25 = lVar25 + 8;
      lVar29 = lVar29 + -1;
    } while (lVar29 != 0);
    lVar29 = 4;
    lVar25 = uVar26 - 0xcc;
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
      lVar29 = lVar29 + -1;
    } while (lVar29 != 0);
    lVar18 = 2;
    do {
      iVar20 = (int)lVar19;
      iVar13 = (int)lVar25;
      lVar19 = lVar19 + 0x10;
      lVar25 = lVar25 + 0x10;
      dVar35 = (double)((float)(dVar35 + (double)*(float *)(iVar20 + 0x94)) + *(float *)(iVar13 + 4)
                        + *(float *)(iVar13 + 8) + *(float *)(iVar13 + 0xc));
      lVar18 = lVar18 + -1;
    } while (lVar18 != 0);
    dVar35 = (double)((float)(dVar35 + 0.7853981852531433) * fVar3 + fVar2);
  }
  dVar35 = -dVar35;
  dVar30 = 1.5707963705062866;
  if ((dVar32 <= 1.5707963705062866) && (dVar30 = dVar32, dVar32 < -1.5707963705062866)) {
    dVar30 = -1.5707963705062866;
  }
  dVar33 = 0.5235987901687622;
  if ((dVar35 <= 0.5235987901687622) && (dVar33 = dVar35, dVar35 < -0.5235987901687622)) {
    dVar33 = -0.5235987901687622;
  }
  *(float *)((int)pvVar8 + 0x144) = (float)dVar33;
  *(float *)((int)pvVar8 + 0x148) = (float)(dVar30 * 0.5);
LAB_004a3b20:
  if (Cheats[0] != '\0') {
    *(undefined4 *)((int)pvVar8 + 0x150) = 0x40300000;
  }
  dVar30 = 0.30000001192092896;
  MB_UpdateManipulatorRot
            ((double)(float)((double)DAT_0071f40c * dVar37),
             (double)(float)((double)DAT_0071f40c * 0.30000001192092896),moby,uVar28 + 0xe0,0);
  MB_UpdateManipulatorRot
            ((double)(float)((double)DAT_0071f40c * dVar37),
             (double)(float)((double)DAT_0071f40c * dVar30),moby,uVar28 + 0x160,1);
  return;
}


