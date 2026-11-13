// game/update/moby1283.cpp -- reconstructed from NPEA00385 EBOOT
// STATUS: NOT STARTED (raw Ghidra output)
// 3 functions, 0x237ca4-0x23892c
#include "game/update/moby1283.h"
#include "game/camera.h"
#include "game/collproc.h"
#include "game/debug.h"
#include "game/draw.h"
#include "game/freeze.h"
#include "game/hero.h"
#include "game/memcard.h"
#include "game/mobyfunc.h"
#include "game/mobyutil.h"
#include "game/respawn.h"
#include "game/space.h"
#include "game/update.h"
#include "game/update/moby1130.h"
#include "game/update/moby441.h"
#include "game/vendor.h"
#include "idol/fastfunc.h"
#include "idol/mUnk.h"

// 0x0237ca4 (0x14 bytes)
void M1283_00237ca4(void)

{
  DAT_0078dbcc = 0x10000;
  return;
}


// 0x0237cb8 (0x188 bytes)
// strings: 0096c074: 'None'

void M1283_00237cb8(int param_1)

{
  MOBY_OCLASSES MVar1;
  short sVar2;
  int iVar3;
  undefined4 *puVar4;
  
  if ((g_gameMode == GAME_MODE_SCENE) && (Cheats[0] != '\0')) {
    puVar4 = &DAT_0095cd50;
    if ((g_SceneId == 6 && 0x26b < g_SpaceSceneFrame) &&
       (g_SpaceSceneFrame < 0x2cc)) {
      g_SceneCheatZoom = 0x3f800000;
      g_SceneCheatDolly = 0xbe4ccccd;
    }
    if (((g_SceneId == 6) && (0x47d < g_SpaceSceneFrame)) &&
       (g_SpaceSceneFrame < 0x5f1)) {
      g_SceneCheatZoom = 0x3f800000;
      g_SceneCheatDolly = 0x3f000000;
    }
    if (((g_SceneId == 6) && (0x5f9 < g_SpaceSceneFrame)) &&
       (g_SpaceSceneFrame < 0x6ae)) {
      g_SceneCheatZoom = 0x3f800000;
      g_SceneCheatDolly = 0xbdcccccd;
    }
    iVar3 = 0;
    sVar2 = g_SpaceSceneMobyCnt.piece<0,2>();
    if (0 < g_SpaceSceneMobyCnt.piece<0,2>()) {
      do {
        MVar1 = ((MobyInstance *)puVar4[0x5e])->oClass;
        if (((MVar1 == *(MOBY_OCLASSES *)(param_1 + 0xa6)) || (MVar1 == PLUMBER_0306)) &&
           (DAT_00a1bf81 == '\0')) {
          AttachManipulator((MobyInstance *)puVar4[0x5e],0,&DAT_00a1bf80);
          DAT_00a1bfa0 = DAT_0078dbf0;
          DAT_00a1bfa4 = DAT_0078dbf0;
          DAT_00a1bfa8 = DAT_0078dbf0;
          sVar2 = g_SpaceSceneMobyCnt.piece<0,2>();
        }
        iVar3 = iVar3 + 1;
        puVar4 = puVar4 + 1;
      } while (iVar3 < sVar2);
    }
  }
  return;
}


// 0x0237e98 (0xa94 bytes)
// inlined: FastAtan2 @0x23818c, FastAtan2 @0x238538, FastAtan2 @0x2386ec
// strings: 006552e0: 'Water Worker' | 0096c074: 'None'

/* Moby 1283 */

void UpdateMoby_1283(MobyInstance *moby)

{
  u8 uVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  short sVar8;
  void *pvVar9;
  ulonglong *puVar10;
  float fVar11;
  int iVar12;
  ulonglong uVar13;
  ulonglong uVar14;
  int iVar17;
  undefined4 uVar18;
  longlong lVar15;
  longlong lVar16;
  float *pfVar20;
  longlong lVar19;
  longlong lVar21;
  ulonglong unaff_r28;
  ulonglong unaff_r29;
  ulonglong unaff_r30;
  ulonglong uVar22;
  ulonglong unaff_r31;
  ulonglong in_LR;
  longlong lVar23;
  double dVar24;
  double dVar25;
  double dVar26;
  ulonglong in_f27;
  ulonglong in_f28;
  ulonglong in_f29;
  double dVar27;
  double dVar28;
  ulonglong in_f30;
  double dVar29;
  double dVar30;
  ulonglong in_f31;
  double dVar31;
  GPiece<16> auVar32;
  GPiece<16> auVar33;
  GPiece<16> auVar34;
  
  uVar13 = ZEXT48(&stack0x00000000);
  lVar16 = uVar13 - 0x140;
  puVar10 = (ulonglong *)lVar16;
  *puVar10 = uVar13;
  puVar10[0x2a] = in_LR;
  puVar10[0x23] = in_f27;
  puVar10[0x24] = in_f28;
  puVar10[0x25] = in_f29;
  puVar10[0x26] = in_f30;
  puVar10[0x27] = in_f31;
  puVar10[0x22] = unaff_r31;
  puVar10[0x21] = unaff_r30;
  puVar10[0x20] = unaff_r29;
  puVar10[0x1f] = unaff_r28;
  pvVar9 = moby->pVar;
  uVar22 = ZEXT48(pvVar9);
  M1283_00237cb8();
  uVar1 = moby->state;
  if (uVar1 == '\x05') {
    SetLevelFlag(moby->levelFlagIdx);
    MB_UnlockItem(0x1b,1);
    memcard_Save(0,-1);
    DeleteMoby(moby);
    return;
  }
  if (uVar1 != '\x02') {
    if (uVar1 == '\x01') {
      iVar17 = FUN_004d3870(moby,uVar22);
      if (iVar17 != 0) {
        MB_SetPointAheadOfMoby(0x40059999a0000000,moby);
      }
      if (*(short *)((int)pvVar9 + 0x36) == 2) {
        SetSpawnPoint
                  ((Vec4 *)&Cuboids[*(int *)((int)pvVar9 + 0x48)].pos,
                   (Vec4 *)&Cuboids[*(int *)((int)pvVar9 + 0x48)].rot);
        moby->state = '\x02';
        FUN_00384148(g_MobyInstance + *(int *)((int)pvVar9 + 0x50));
      }
      sVar8 = *(short *)((int)pvVar9 + 4);
      if (sVar8 == 3) {
        PlayHelpMovie(1);
        moby->state = '\x05';
        sVar8 = *(short *)((int)pvVar9 + 4);
      }
      if (sVar8 == 4) {
        HandleHeroDeath();
        *(undefined2 *)((int)pvVar9 + 4) = 0xffff;
      }
    }
    else if (uVar1 == '\0') {
      moby->updateDistance = -1;
      if (g_LevelFlags[Level][(byte)moby->levelFlagIdx] == -1) {
        DeleteMoby(moby);
        return;
      }
      *(char **)((int)pvVar9 + 0x20) = "Water Worker";
      moby->state = '\x01';
      FUN_004d3720(moby,uVar22);
    }
  }
  dVar31 = 0.019999999552965164;
  if (moby->animationId != '\0') goto LAB_00238890;
  fVar2 = (moby->pos).y;
  fVar3 = (moby->pos).x;
  fVar5 = fVar2 - g_heroPosition.y;
  fVar6 = fVar3 - g_heroPosition.x;
  if (8.0 <= SQRT(fVar6 * fVar6 + fVar5 * fVar5)) {
LAB_0023833c:
    if (*(int *)((int)pvVar9 + 0x174) != 0) {
      *(undefined4 *)((int)pvVar9 + 0x174) = 0;
      *(float *)((int)pvVar9 + 0x160) = g_heroCGPos;
      *(float *)((int)pvVar9 + 0x164) = DAT_00969db4;
      *(float *)((int)pvVar9 + 0x168) = DAT_00969db8;
      *(undefined4 *)((int)pvVar9 + 0x16c) = DAT_00969dbc;
    }
  }
  else {
    fVar3 = g_heroCGPos - fVar3;
    fVar2 = DAT_00969db4 - fVar2;
    fVar5 = ABS(fVar3);
    fVar4 = ABS(fVar2);
    *(float *)(puVar10 + 0x11) = fVar3;
    *(float *)((int)puVar10 + 0x8c) = fVar2;
    fVar2 = (moby->rotation).z;
    *(float *)(puVar10 + 0x12) = fVar5 - fVar4;
    fVar3 = 0.0;
    uVar14 = (ulonglong)(*(uint *)(puVar10 + 0x11) >> 0x1c) & 8 |
             (ulonglong)(*(uint *)(puVar10 + 0x12) >> 0x1e) & 2 |
             (ulonglong)(*(uint *)((int)puVar10 + 0x8c) >> 0x1d) & 4;
    fVar6 = ABS(*(float *)(puVar10 + 0x11));
    if (*(float *)(puVar10 + 0x12) - 0.0 < 0.0) {
      fVar6 = fVar4;
    }
    fVar7 = *(float *)(&g_atanQuadrantTable + (int)(uVar14 << 2));
    fVar4 = *(float *)(((uint)(uVar14 << 2) | 0x735900) + 4);
    fVar11 = ABS(*(float *)((int)puVar10 + 0x8c));
    if (*(float *)(puVar10 + 0x12) - 0.0 < 0.0) {
      fVar11 = fVar5;
    }
    if (0.0 < fVar6) {
      lVar15 = uVar13 - 0x130;
      lVar21 = uVar13 - 0x5c;
      lVar19 = uVar13 - 0x6c;
      lVar23 = 2;
      fVar5 = (fVar11 - fVar6) / (fVar11 + fVar6);
      fVar6 = fVar5 * fVar5;
      *(float *)(puVar10 + 0x1c) = fVar5;
      *(float *)(puVar10 + 0x1b) = fVar5;
      *(float *)((int)puVar10 + 0xdc) = fVar5;
      *(float *)((int)puVar10 + 0xd4) = fVar5;
      fVar5 = fVar6 * fVar6;
      *(float *)(puVar10 + 0x1b) = *(float *)(puVar10 + 0x1b) * fVar6;
      *(float *)((int)puVar10 + 0xdc) = *(float *)((int)puVar10 + 0xdc) * fVar5;
      *(float *)(puVar10 + 0x1c) = *(float *)(puVar10 + 0x1c) * fVar5 * fVar6;
      do {
        *(float *)((int)lVar15 + 0xd4) = *(float *)((int)lVar15 + 0xc4) * fVar5 * fVar5;
        iVar17 = (int)lVar19;
        lVar19 = lVar19 + 8;
        lVar15 = lVar15 + 8;
        *(float *)((int)lVar21 + 4) = *(float *)(iVar17 + 4) * fVar5 * fVar5;
        lVar21 = lVar21 + 8;
        lVar23 = lVar23 + -1;
      } while (lVar23 != 0);
      lVar23 = 4;
      lVar21 = uVar13 - 0x6c;
      pfVar20 = (float *)&DAT_007358e0;
      lVar15 = lVar16;
      lVar19 = lVar21;
      do {
        fVar5 = *pfVar20;
        fVar6 = pfVar20[1];
        pfVar20 = pfVar20 + 2;
        *(float *)((int)lVar15 + 0xd4) = *(float *)((int)lVar15 + 0xd4) * fVar5;
        lVar15 = lVar15 + 8;
        *(float *)((int)lVar19 + 4) = *(float *)((int)lVar19 + 4) * fVar6;
        lVar19 = lVar19 + 8;
        lVar23 = lVar23 + -1;
      } while (lVar23 != 0);
      lVar19 = 2;
      lVar15 = lVar16;
      do {
        iVar17 = (int)lVar15;
        lVar15 = lVar15 + 0x10;
        iVar12 = (int)lVar21;
        lVar21 = lVar21 + 0x10;
        fVar3 = fVar3 + *(float *)(iVar17 + 0xd4) + *(float *)(iVar12 + 4) + *(float *)(iVar12 + 8)
                + *(float *)(iVar12 + 0xc);
        lVar19 = lVar19 + -1;
      } while (lVar19 != 0);
      fVar3 = (fVar3 + 0.7853982) * fVar7 + fVar4;
    }
    dVar24 = (double)FastSubRots(fVar2,fVar3);
    if (1.5707963705062866 <= dVar24) goto LAB_0023833c;
    if (SQRT(DAT_00969de8 * DAT_00969de8 + DAT_00969de0 * DAT_00969de0 + DAT_00969de4 * DAT_00969de4
            ) <= 0.01) {
      FastDecTimerS32(uVar22 + 0x174);
    }
    else {
      auVar32 = ZEXT416(0xffffffff);
      auVar32 = auVar32 | auVar32 << 0x20 | auVar32 << 0x40 | auVar32 << 0x60;
      auVar33 = vectorShiftLeftIntegerWord(auVar32,auVar32);
      auVar32 = loadVectorLeftIndexed(0x1c,0x237e40);
      auVar32 = auVar32 >> 0x60 & (GPiece<16>)0xffffffff;
      auVar34 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
      auVar32 = vectorMultiplyAddFloatingPoint
                          (auVar34,auVar32 | auVar32 << 0x20 | auVar32 << 0x40 | auVar32 << 0x60,
                           auVar33);
      auVar32 = vectorConvertToSignedFixedPointWordSaturate(auVar32,0);
      auVar32 = auVar32 >> 0x60 & (GPiece<16>)0xffffffff;
      uVar18 = storeVectorElementWordIndexed
                         (auVar32 | auVar32 << 0x20 | auVar32 << 0x40 | auVar32 << 0x60,0x174,uVar22
                         );
      *(undefined4 *)((int)pvVar9 + 0x174U & 0xfffffffc) = uVar18;
    }
  }
  iVar17 = FastDecTimerS32(uVar22 + 0x178);
  if (iVar17 != 0) {
    dVar24 = (double)MB_randRangeFloat(180.0,300.0);
    uVar18 = FastDoubleToInt((double)(float)(dVar24 * (double)animationSpeed));
    *(undefined4 *)((int)pvVar9 + 0x178) = uVar18;
    dVar29 = (double)(moby->rotation).z;
    dVar24 = (double)MB_randRangeFloat(-90.0,90.0);
    dVar27 = 0.01745329238474369;
    dVar24 = (double)FastWrapRot((float)dVar29,(float)(dVar24 * 0.01745329238474369));
    dVar29 = (double)MB_randRangeFloat(0.0,30.0);
    MB_SphericalToVector
              (6.0,(float)dVar24,(float)(dVar29 * dVar27),(float *)((int)pvVar9 + 0x160));
    *(float *)((int)pvVar9 + 0x160) = *(float *)((int)pvVar9 + 0x160) + (moby->pos).x;
    *(float *)((int)pvVar9 + 0x164) = *(float *)((int)pvVar9 + 0x164) + (moby->pos).y;
    *(float *)((int)pvVar9 + 0x168) = *(float *)((int)pvVar9 + 0x168) + (moby->pos).z;
  }
  if (*(int *)((int)pvVar9 + 0x174) == 0) {
    fVar2 = *(float *)((int)pvVar9 + 0x160);
    fVar3 = *(float *)((int)pvVar9 + 0x164);
    fVar5 = *(float *)((int)pvVar9 + 0x168);
  }
  else {
    dVar31 = 0.029999999329447746;
    fVar2 = g_heroCGPos;
    fVar3 = DAT_00969db4;
    fVar5 = DAT_00969db8;
  }
  fVar2 = fVar2 - (moby->pos).x;
  dVar30 = (double)fVar2;
  fVar3 = fVar3 - (moby->pos).y;
  dVar28 = (double)fVar3;
  *(float *)((int)puVar10 + 0x7c) = fVar2;
  *(float *)(puVar10 + 0x10) = fVar3;
  dVar27 = (double)(fVar5 - ((moby->pos).z + 1.0));
  *(float *)((int)puVar10 + 0x84) = (float)(ABS(dVar30) - ABS(dVar28));
  dVar29 = 0.0;
  uVar14 = (ulonglong)(*(uint *)((int)puVar10 + 0x7c) >> 0x1c) & 8 |
           (ulonglong)(*(uint *)((int)puVar10 + 0x84) >> 0x1e) & 2 |
           (ulonglong)(*(uint *)(puVar10 + 0x10) >> 0x1d) & 4;
  dVar24 = ABS((double)*(float *)((int)puVar10 + 0x7c));
  if (*(float *)((int)puVar10 + 0x84) - 0.0 < 0.0) {
    dVar24 = ABS(dVar28);
  }
  fVar2 = *(float *)(&g_atanQuadrantTable + (int)(uVar14 << 2));
  dVar26 = ABS((double)*(float *)(puVar10 + 0x10));
  if (*(float *)((int)puVar10 + 0x84) - 0.0 < 0.0) {
    dVar26 = ABS(dVar30);
  }
  fVar3 = *(float *)(((uint)(uVar14 << 2) | 0x735900) + 4);
  dVar25 = dVar29;
  if (0.0 < dVar24) {
    lVar15 = uVar13 - 0x130;
    lVar19 = uVar13 - 0x8c;
    lVar21 = uVar13 - 0x7c;
    lVar23 = 2;
    fVar5 = (float)(dVar26 - dVar24) / (float)(dVar26 + dVar24);
    fVar6 = fVar5 * fVar5;
    *(float *)(puVar10 + 0x18) = fVar5;
    *(float *)(puVar10 + 0x17) = fVar5;
    *(float *)((int)puVar10 + 0xbc) = fVar5;
    *(float *)((int)puVar10 + 0xb4) = fVar5;
    fVar5 = fVar6 * fVar6;
    *(float *)(puVar10 + 0x17) = *(float *)(puVar10 + 0x17) * fVar6;
    *(float *)((int)puVar10 + 0xbc) = *(float *)((int)puVar10 + 0xbc) * fVar5;
    *(float *)(puVar10 + 0x18) = *(float *)(puVar10 + 0x18) * fVar5 * fVar6;
    do {
      *(float *)((int)lVar15 + 0xb4) = *(float *)((int)lVar15 + 0xa4) * fVar5 * fVar5;
      iVar17 = (int)lVar19;
      lVar15 = lVar15 + 8;
      lVar19 = lVar19 + 8;
      *(float *)((int)lVar21 + 4) = *(float *)(iVar17 + 4) * fVar5 * fVar5;
      lVar21 = lVar21 + 8;
      lVar23 = lVar23 + -1;
    } while (lVar23 != 0);
    lVar23 = 4;
    lVar21 = uVar13 - 0x8c;
    pfVar20 = (float *)&DAT_007358e0;
    lVar15 = lVar16;
    lVar19 = lVar21;
    do {
      fVar5 = *pfVar20;
      fVar6 = pfVar20[1];
      pfVar20 = pfVar20 + 2;
      *(float *)((int)lVar15 + 0xb4) = *(float *)((int)lVar15 + 0xb4) * fVar5;
      lVar15 = lVar15 + 8;
      *(float *)((int)lVar19 + 4) = *(float *)((int)lVar19 + 4) * fVar6;
      lVar19 = lVar19 + 8;
      lVar23 = lVar23 + -1;
    } while (lVar23 != 0);
    lVar19 = 2;
    lVar15 = lVar16;
    dVar24 = dVar29;
    do {
      iVar17 = (int)lVar15;
      lVar15 = lVar15 + 0x10;
      iVar12 = (int)lVar21;
      lVar21 = lVar21 + 0x10;
      dVar24 = (double)((float)(dVar24 + (double)*(float *)(iVar17 + 0xb4)) + *(float *)(iVar12 + 4)
                        + *(float *)(iVar12 + 8) + *(float *)(iVar12 + 0xc));
      lVar19 = lVar19 + -1;
    } while (lVar19 != 0);
    dVar25 = (double)((float)(dVar24 + 0.7853981852531433) * fVar2 + fVar3);
  }
  dVar26 = (double)FastDiffRots(dVar25,(double)(moby->rotation).z);
  *(float *)((int)puVar10 + 0x74) = (float)dVar27;
  fVar2 = SQRT((float)(dVar30 * dVar30 + (double)(float)(dVar28 * dVar28)));
  dVar28 = ABS((double)fVar2);
  *(float *)(puVar10 + 0xe) = fVar2;
  *(float *)(puVar10 + 0xf) = (float)(dVar28 - ABS(dVar27));
  uVar14 = (ulonglong)(*(uint *)(puVar10 + 0xe) >> 0x1c) & 8 |
           (ulonglong)(*(uint *)(puVar10 + 0xf) >> 0x1e) & 2 |
           (ulonglong)(*(uint *)((int)puVar10 + 0x74) >> 0x1d) & 4;
  dVar24 = ABS((double)*(float *)(puVar10 + 0xe));
  if ((double)*(float *)(puVar10 + 0xf) - dVar29 < 0.0) {
    dVar24 = ABS(dVar27);
  }
  fVar3 = *(float *)(&g_atanQuadrantTable + (int)(uVar14 << 2));
  fVar2 = *(float *)(((uint)(uVar14 << 2) | 0x735900) + 4);
  dVar27 = ABS((double)*(float *)((int)puVar10 + 0x74));
  if ((double)*(float *)(puVar10 + 0xf) - dVar29 < 0.0) {
    dVar27 = dVar28;
  }
  if (dVar29 < dVar24) {
    lVar15 = uVar13 - 0x130;
    lVar21 = uVar13 - 0x9c;
    lVar19 = uVar13 - 0xac;
    lVar23 = 2;
    fVar5 = (float)(dVar27 - dVar24) / (float)(dVar27 + dVar24);
    fVar6 = fVar5 * fVar5;
    *(float *)(puVar10 + 0x14) = fVar5;
    *(float *)(puVar10 + 0x13) = fVar5;
    *(float *)((int)puVar10 + 0x9c) = fVar5;
    *(float *)((int)puVar10 + 0x94) = fVar5;
    fVar5 = fVar6 * fVar6;
    *(float *)(puVar10 + 0x13) = *(float *)(puVar10 + 0x13) * fVar6;
    *(float *)((int)puVar10 + 0x9c) = *(float *)((int)puVar10 + 0x9c) * fVar5;
    *(float *)(puVar10 + 0x14) = *(float *)(puVar10 + 0x14) * fVar5 * fVar6;
    do {
      *(float *)((int)lVar15 + 0x94) = *(float *)((int)lVar15 + 0x84) * fVar5 * fVar5;
      iVar17 = (int)lVar19;
      lVar19 = lVar19 + 8;
      lVar15 = lVar15 + 8;
      *(float *)((int)lVar21 + 4) = *(float *)(iVar17 + 4) * fVar5 * fVar5;
      lVar21 = lVar21 + 8;
      lVar23 = lVar23 + -1;
    } while (lVar23 != 0);
    lVar23 = 4;
    lVar21 = uVar13 - 0xac;
    pfVar20 = (float *)&DAT_007358e0;
    lVar15 = lVar16;
    lVar19 = lVar21;
    do {
      fVar5 = *pfVar20;
      fVar6 = pfVar20[1];
      pfVar20 = pfVar20 + 2;
      *(float *)((int)lVar15 + 0x94) = *(float *)((int)lVar15 + 0x94) * fVar5;
      lVar15 = lVar15 + 8;
      *(float *)((int)lVar19 + 4) = *(float *)((int)lVar19 + 4) * fVar6;
      lVar19 = lVar19 + 8;
      lVar23 = lVar23 + -1;
    } while (lVar23 != 0);
    lVar15 = 2;
    do {
      iVar17 = (int)lVar16;
      iVar12 = (int)lVar21;
      lVar16 = lVar16 + 0x10;
      lVar21 = lVar21 + 0x10;
      dVar29 = (double)((float)(dVar29 + (double)*(float *)(iVar17 + 0x94)) + *(float *)(iVar12 + 4)
                        + *(float *)(iVar12 + 8) + *(float *)(iVar12 + 0xc));
      lVar15 = lVar15 + -1;
    } while (lVar15 != 0);
    dVar29 = (double)((float)(dVar29 + 0.7853981852531433) * fVar3 + fVar2);
  }
  dVar29 = -dVar29;
  dVar24 = 1.5707963705062866;
  if ((dVar26 <= 1.5707963705062866) && (dVar24 = dVar26, dVar26 < -1.5707963705062866)) {
    dVar24 = -1.5707963705062866;
  }
  dVar27 = 0.5235987901687622;
  if ((dVar29 <= 0.5235987901687622) && (dVar27 = dVar29, dVar29 < -0.5235987901687622)) {
    dVar27 = -0.5235987901687622;
  }
  *(float *)((int)pvVar9 + 200) = (float)(dVar24 * 0.699999988079071);
  *(float *)((int)pvVar9 + 0xc4) = (float)dVar27;
  *(float *)((int)pvVar9 + 0x148) = (float)(dVar24 * 0.30000001192092896);
LAB_00238890:
  if (Cheats[0] != '\0') {
    *(undefined4 *)((int)pvVar9 + 0xd0) = 0x40300000;
  }
  dVar24 = 0.30000001192092896;
  MB_UpdateManipulatorRot
            ((double)(float)((double)DAT_0071f40c * dVar31),
             (double)(float)((double)DAT_0071f40c * 0.30000001192092896),moby,uVar22 + 0x60,0);
  MB_UpdateManipulatorRot
            ((double)(float)((double)DAT_0071f40c * dVar31),
             (double)(float)((double)DAT_0071f40c * dVar24),moby,uVar22 + 0xe0,1);
  return;
}


