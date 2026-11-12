// game/update/moby1377.cpp -- reconstructed from NPEA00385 EBOOT
// STATUS: NOT STARTED (raw Ghidra output)
// 2 functions, 0x25d260-0x25df18
#include "game/update/moby1377.h"
#include "game/freeze.h"
#include "game/help.h"
#include "game/hero.h"
#include "game/map.h"
#include "game/memcard.h"
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

// 0x025d260 (0xf4 bytes)
// strings: 0096c074: 'None'

void M1377_0025d260(int param_1)

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


// 0x025d3a8 (0xb70 bytes)
// inlined: FastAtan2 @0x25d76c, FastAtan2 @0x25db18, FastAtan2 @0x25dccc
// strings: 0096c074: 'None'

/* Moby 1377 */

void UpdateMoby_1377(MobyInstance *moby)

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
  int iVar17;
  ulonglong uVar14;
  undefined4 uVar18;
  longlong lVar15;
  longlong lVar16;
  short sVar21;
  float *pfVar20;
  longlong lVar19;
  longlong lVar22;
  ulonglong unaff_r25;
  undefined4 *puVar23;
  ulonglong unaff_r26;
  ulonglong unaff_r27;
  ulonglong unaff_r28;
  ulonglong unaff_r29;
  ulonglong unaff_r30;
  ulonglong uVar24;
  ulonglong unaff_r31;
  ulonglong in_LR;
  longlong lVar25;
  double dVar26;
  double dVar27;
  double dVar28;
  ulonglong in_f27;
  ulonglong in_f28;
  ulonglong in_f29;
  double dVar29;
  double dVar30;
  ulonglong in_f30;
  double dVar31;
  double dVar32;
  ulonglong in_f31;
  double dVar33;
  GPiece<16> auVar34;
  GPiece<16> auVar35;
  GPiece<16> auVar36;
  
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
  puVar9[0x23] = unaff_r28;
  gVar12 = g_gameMode;
  pvVar8 = moby->pVar;
  uVar24 = ZEXT48(pvVar8);
  puVar9[0x24] = unaff_r29;
  puVar9[0x22] = unaff_r27;
  puVar9[0x21] = unaff_r26;
  puVar9[0x20] = unaff_r25;
  if ((gVar12 == GAME_MODE_SCENE) && (Cheats[0] != '\0')) {
    iVar17 = 0;
    puVar23 = &DAT_0095cd50;
    sVar21 = g_SpaceSceneMobyCnt.piece<0,2>();
    if (0 < g_SpaceSceneMobyCnt.piece<0,2>()) {
      do {
        if ((((MobyInstance *)puVar23[0x5e])->oClass == moby->oClass) && (DAT_00a1bf81 == '\0')) {
          AttachManipulator((MobyInstance *)puVar23[0x5e],1,&DAT_00a1bf80);
          DAT_00a1bfa0 = 0x40300000;
          DAT_00a1bfa4 = 0x40300000;
          DAT_00a1bfa8 = 0x40300000;
          sVar21 = g_SpaceSceneMobyCnt.piece<0,2>();
        }
        iVar17 = iVar17 + 1;
        puVar23 = puVar23 + 1;
      } while (iVar17 < sVar21);
    }
  }
  bVar1 = moby->state;
  if (bVar1 == 0) {
    FUN_004d3720(moby,uVar24 + 0x20);
    moby->state = '\x01';
    *(undefined4 *)((int)pvVar8 + 0x2c) = 0x41a00000;
    moby->updateDistance = -1;
  }
  else if (bVar1 < 2) {
    if ((((g_framesNotGrounded == 0) &&
         (g_heroStateType != 0x16 && g_heroStateType != 0xf)) &&
        (iVar17 = MB_IsPntInCuboid
                            (&g_heroPosition,(longlong)*(int *)((int)pvVar8 + 0x160)), iVar17 != 0))
       && (iVar17 = FUN_004d3870(moby,uVar24 + 0x20), iVar17 != 0)) {
      moby->state = '\x02';
    }
  }
  else if ((bVar1 < 3) && (g_gameMode != GAME_MODE_SCENE)) {
    moby->state = '\x01';
    Hero_Warp((float *)&DAT_0079c080,(float *)&DAT_0079c090,0,1);
    Help_QueueMessage(STR_THE_GADGETRON_MAP_O_MATIC_CAN_0x3E82,0x84);
    MB_UnlockItem(0x21,1);
    SetLevelFlag(moby->levelFlagIdx);
    SetSpawnPoint((Vec4 *)&g_heroPosition,(Vec4 *)&g_heroRotation);
    memcard_Save(0,-1);
    moby->state = '\x03';
  }
  if ((g_MiscLevelFlags.field112_0x70 == 0) &&
     (iVar17 = MB_IsPntInCuboid(&g_heroPosition,(longlong)*(int *)((int)pvVar8 + 0x164)),
     iVar17 != 0)) {
    g_MiscLevelFlags.field112_0x70 = 1;
  }
  if ((g_MiscLevelFlags.field113_0x71 == 0) && (g_heroStateType == 0xf)) {
    g_MiscLevelFlags.field113_0x71 = 1;
  }
  dVar33 = 0.019999999552965164;
  if (moby->animationId != '\0') goto LAB_0025de70;
  fVar2 = (moby->pos).y;
  fVar3 = (moby->pos).x;
  fVar5 = fVar2 - g_heroPosition.y;
  fVar6 = fVar3 - g_heroPosition.x;
  if (8.0 <= SQRT(fVar6 * fVar6 + fVar5 * fVar5)) {
LAB_0025d91c:
    if (*(int *)((int)pvVar8 + 0x168) != 0) {
      *(undefined4 *)((int)pvVar8 + 0x168) = 0;
      *(float *)((int)pvVar8 + 0x170) = g_heroCGPos;
      *(float *)((int)pvVar8 + 0x174) = DAT_00969db4;
      *(float *)((int)pvVar8 + 0x178) = DAT_00969db8;
      *(undefined4 *)((int)pvVar8 + 0x17c) = DAT_00969dbc;
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
      lVar19 = uVar13 - 0x8c;
      lVar22 = uVar13 - 0x7c;
      lVar25 = 2;
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
        iVar17 = (int)lVar19;
        lVar15 = lVar15 + 8;
        lVar19 = lVar19 + 8;
        *(float *)((int)lVar22 + 4) = *(float *)(iVar17 + 4) * fVar5 * fVar5;
        lVar22 = lVar22 + 8;
        lVar25 = lVar25 + -1;
      } while (lVar25 != 0);
      lVar25 = 4;
      lVar22 = uVar13 - 0x8c;
      pfVar20 = (float *)&DAT_007358e0;
      lVar15 = lVar16;
      lVar19 = lVar22;
      do {
        fVar5 = *pfVar20;
        fVar6 = pfVar20[1];
        pfVar20 = pfVar20 + 2;
        *(float *)((int)lVar15 + 0xd4) = *(float *)((int)lVar15 + 0xd4) * fVar5;
        lVar15 = lVar15 + 8;
        *(float *)((int)lVar19 + 4) = *(float *)((int)lVar19 + 4) * fVar6;
        lVar19 = lVar19 + 8;
        lVar25 = lVar25 + -1;
      } while (lVar25 != 0);
      lVar19 = 2;
      lVar15 = lVar16;
      do {
        iVar17 = (int)lVar15;
        iVar11 = (int)lVar22;
        lVar15 = lVar15 + 0x10;
        lVar22 = lVar22 + 0x10;
        fVar3 = fVar3 + *(float *)(iVar17 + 0xd4) + *(float *)(iVar11 + 4) + *(float *)(iVar11 + 8)
                + *(float *)(iVar11 + 0xc);
        lVar19 = lVar19 + -1;
      } while (lVar19 != 0);
      fVar3 = (fVar3 + 0.7853982) * fVar7 + fVar4;
    }
    dVar26 = (double)FastSubRots(fVar2,fVar3);
    if (1.5707963705062866 <= dVar26) goto LAB_0025d91c;
    if (SQRT(DAT_00969de8 * DAT_00969de8 + DAT_00969de0 * DAT_00969de0 + DAT_00969de4 * DAT_00969de4
            ) <= 0.01) {
      FastDecTimerS32(uVar24 + 0x168);
    }
    else {
      auVar34 = ZEXT416(0xffffffff);
      auVar34 = auVar34 | auVar34 << 0x20 | auVar34 << 0x40 | auVar34 << 0x60;
      auVar35 = vectorShiftLeftIntegerWord(auVar34,auVar34);
      auVar34 = loadVectorLeftIndexed(0x18,0x25d354);
      auVar34 = auVar34 >> 0x60 & (GPiece<16>)0xffffffff;
      auVar36 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
      auVar34 = vectorMultiplyAddFloatingPoint
                          (auVar36,auVar34 | auVar34 << 0x20 | auVar34 << 0x40 | auVar34 << 0x60,
                           auVar35);
      auVar34 = vectorConvertToSignedFixedPointWordSaturate(auVar34,0);
      auVar34 = auVar34 >> 0x60 & (GPiece<16>)0xffffffff;
      uVar18 = storeVectorElementWordIndexed
                         (auVar34 | auVar34 << 0x20 | auVar34 << 0x40 | auVar34 << 0x60,0x168,uVar24
                         );
      *(undefined4 *)((int)pvVar8 + 0x168U & 0xfffffffc) = uVar18;
    }
  }
  iVar17 = FastDecTimerS32(uVar24 + 0x16c);
  if (iVar17 != 0) {
    dVar26 = (double)MB_randRangeFloat(180.0,300.0);
    uVar18 = FastDoubleToInt((double)(float)(dVar26 * (double)animationSpeed));
    *(undefined4 *)((int)pvVar8 + 0x16c) = uVar18;
    dVar31 = (double)(moby->rotation).z;
    dVar26 = (double)MB_randRangeFloat(-90.0,90.0);
    dVar29 = 0.01745329238474369;
    dVar26 = (double)FastWrapRot((float)dVar31,(float)(dVar26 * 0.01745329238474369));
    dVar31 = (double)MB_randRangeFloat(0.0,30.0);
    MB_SphericalToVector
              (6.0,(float)dVar26,(float)(dVar31 * dVar29),(float *)((int)pvVar8 + 0x170));
    *(float *)((int)pvVar8 + 0x170) = *(float *)((int)pvVar8 + 0x170) + (moby->pos).x;
    *(float *)((int)pvVar8 + 0x174) = *(float *)((int)pvVar8 + 0x174) + (moby->pos).y;
    *(float *)((int)pvVar8 + 0x178) = *(float *)((int)pvVar8 + 0x178) + (moby->pos).z;
  }
  if (*(int *)((int)pvVar8 + 0x168) == 0) {
    fVar2 = *(float *)((int)pvVar8 + 0x170);
    fVar3 = *(float *)((int)pvVar8 + 0x174);
    fVar5 = *(float *)((int)pvVar8 + 0x178);
  }
  else {
    dVar33 = 0.03999999910593033;
    fVar2 = g_heroCGPos;
    fVar3 = DAT_00969db4;
    fVar5 = DAT_00969db8;
  }
  fVar2 = fVar2 - (moby->pos).x;
  dVar32 = (double)fVar2;
  fVar3 = fVar3 - (moby->pos).y;
  dVar30 = (double)fVar3;
  *(float *)((int)puVar9 + 0x7c) = fVar2;
  *(float *)(puVar9 + 0x10) = fVar3;
  dVar29 = (double)(fVar5 - ((moby->pos).z + 1.5));
  *(float *)((int)puVar9 + 0x84) = (float)(ABS(dVar32) - ABS(dVar30));
  dVar31 = 0.0;
  uVar14 = (ulonglong)(*(uint *)((int)puVar9 + 0x7c) >> 0x1c) & 8 |
           (ulonglong)(*(uint *)((int)puVar9 + 0x84) >> 0x1e) & 2 |
           (ulonglong)(*(uint *)(puVar9 + 0x10) >> 0x1d) & 4;
  dVar26 = ABS((double)*(float *)((int)puVar9 + 0x7c));
  if (*(float *)((int)puVar9 + 0x84) - 0.0 < 0.0) {
    dVar26 = ABS(dVar30);
  }
  fVar2 = *(float *)(&g_atanQuadrantTable + (int)(uVar14 << 2));
  dVar28 = ABS((double)*(float *)(puVar9 + 0x10));
  if (*(float *)((int)puVar9 + 0x84) - 0.0 < 0.0) {
    dVar28 = ABS(dVar32);
  }
  fVar3 = *(float *)(((uint)(uVar14 << 2) | 0x735900) + 4);
  dVar27 = dVar31;
  if (0.0 < dVar26) {
    lVar15 = uVar13 - 0x150;
    lVar22 = uVar13 - 0x9c;
    lVar19 = uVar13 - 0xac;
    lVar25 = 2;
    fVar5 = (float)(dVar28 - dVar26) / (float)(dVar28 + dVar26);
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
      iVar17 = (int)lVar19;
      lVar19 = lVar19 + 8;
      lVar15 = lVar15 + 8;
      *(float *)((int)lVar22 + 4) = *(float *)(iVar17 + 4) * fVar5 * fVar5;
      lVar22 = lVar22 + 8;
      lVar25 = lVar25 + -1;
    } while (lVar25 != 0);
    lVar25 = 4;
    lVar22 = uVar13 - 0xac;
    pfVar20 = (float *)&DAT_007358e0;
    lVar15 = lVar16;
    lVar19 = lVar22;
    do {
      fVar5 = *pfVar20;
      fVar6 = pfVar20[1];
      pfVar20 = pfVar20 + 2;
      *(float *)((int)lVar15 + 0xb4) = *(float *)((int)lVar15 + 0xb4) * fVar5;
      lVar15 = lVar15 + 8;
      *(float *)((int)lVar19 + 4) = *(float *)((int)lVar19 + 4) * fVar6;
      lVar19 = lVar19 + 8;
      lVar25 = lVar25 + -1;
    } while (lVar25 != 0);
    lVar19 = 2;
    lVar15 = lVar16;
    dVar26 = dVar31;
    do {
      iVar17 = (int)lVar15;
      iVar11 = (int)lVar22;
      lVar15 = lVar15 + 0x10;
      lVar22 = lVar22 + 0x10;
      dVar26 = (double)((float)(dVar26 + (double)*(float *)(iVar17 + 0xb4)) + *(float *)(iVar11 + 4)
                        + *(float *)(iVar11 + 8) + *(float *)(iVar11 + 0xc));
      lVar19 = lVar19 + -1;
    } while (lVar19 != 0);
    dVar27 = (double)((float)(dVar26 + 0.7853981852531433) * fVar2 + fVar3);
  }
  dVar28 = (double)FastDiffRots(dVar27,(double)(moby->rotation).z);
  *(float *)((int)puVar9 + 0x74) = (float)dVar29;
  fVar2 = SQRT((float)(dVar32 * dVar32 + (double)(float)(dVar30 * dVar30)));
  dVar30 = ABS((double)fVar2);
  *(float *)(puVar9 + 0xe) = fVar2;
  *(float *)(puVar9 + 0xf) = (float)(dVar30 - ABS(dVar29));
  uVar14 = (ulonglong)(*(uint *)(puVar9 + 0xe) >> 0x1c) & 8 |
           (ulonglong)(*(uint *)(puVar9 + 0xf) >> 0x1e) & 2 |
           (ulonglong)(*(uint *)((int)puVar9 + 0x74) >> 0x1d) & 4;
  dVar26 = ABS((double)*(float *)(puVar9 + 0xe));
  if ((double)*(float *)(puVar9 + 0xf) - dVar31 < 0.0) {
    dVar26 = ABS(dVar29);
  }
  fVar2 = *(float *)(&g_atanQuadrantTable + (int)(uVar14 << 2));
  dVar29 = ABS((double)*(float *)((int)puVar9 + 0x74));
  if ((double)*(float *)(puVar9 + 0xf) - dVar31 < 0.0) {
    dVar29 = dVar30;
  }
  fVar3 = *(float *)(((uint)(uVar14 << 2) | 0x735900) + 4);
  if (dVar31 < dVar26) {
    lVar15 = uVar13 - 0x150;
    lVar19 = uVar13 - 0xcc;
    lVar22 = uVar13 - 0xbc;
    lVar25 = 2;
    fVar5 = (float)(dVar29 - dVar26) / (float)(dVar29 + dVar26);
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
      iVar17 = (int)lVar19;
      lVar15 = lVar15 + 8;
      lVar19 = lVar19 + 8;
      *(float *)((int)lVar22 + 4) = *(float *)(iVar17 + 4) * fVar5 * fVar5;
      lVar22 = lVar22 + 8;
      lVar25 = lVar25 + -1;
    } while (lVar25 != 0);
    lVar25 = 4;
    lVar22 = uVar13 - 0xcc;
    pfVar20 = (float *)&DAT_007358e0;
    lVar15 = lVar16;
    lVar19 = lVar22;
    do {
      fVar5 = *pfVar20;
      fVar6 = pfVar20[1];
      pfVar20 = pfVar20 + 2;
      *(float *)((int)lVar15 + 0x94) = *(float *)((int)lVar15 + 0x94) * fVar5;
      lVar15 = lVar15 + 8;
      *(float *)((int)lVar19 + 4) = *(float *)((int)lVar19 + 4) * fVar6;
      lVar19 = lVar19 + 8;
      lVar25 = lVar25 + -1;
    } while (lVar25 != 0);
    lVar15 = 2;
    do {
      iVar17 = (int)lVar16;
      iVar11 = (int)lVar22;
      lVar16 = lVar16 + 0x10;
      lVar22 = lVar22 + 0x10;
      dVar31 = (double)((float)(dVar31 + (double)*(float *)(iVar17 + 0x94)) + *(float *)(iVar11 + 4)
                        + *(float *)(iVar11 + 8) + *(float *)(iVar11 + 0xc));
      lVar15 = lVar15 + -1;
    } while (lVar15 != 0);
    dVar31 = (double)((float)(dVar31 + 0.7853981852531433) * fVar2 + fVar3);
  }
  dVar31 = -dVar31;
  dVar26 = 1.5707963705062866;
  if ((dVar28 <= 1.5707963705062866) && (dVar26 = dVar28, dVar28 < -1.5707963705062866)) {
    dVar26 = -1.5707963705062866;
  }
  dVar29 = 0.5235987901687622;
  if ((dVar31 <= 0.5235987901687622) && (dVar29 = dVar31, dVar31 < -0.5235987901687622)) {
    dVar29 = -0.5235987901687622;
  }
  *(float *)((int)pvVar8 + 200) = (float)(dVar26 * 0.699999988079071);
  *(float *)((int)pvVar8 + 0xc4) = (float)dVar29;
  *(float *)((int)pvVar8 + 0x148) = (float)(dVar26 * 0.30000001192092896);
LAB_0025de70:
  if (Cheats[0] != '\0') {
    *(undefined4 *)((int)pvVar8 + 0xd0) = 0x40300000;
  }
  dVar26 = 0.30000001192092896;
  MB_UpdateManipulatorRot
            ((double)(float)((double)DAT_0071f40c * dVar33),
             (double)(float)((double)DAT_0071f40c * 0.30000001192092896),moby,uVar24 + 0x60,0);
  MB_UpdateManipulatorRot
            ((double)(float)((double)DAT_0071f40c * dVar33),
             (double)(float)((double)DAT_0071f40c * dVar26),moby,uVar24 + 0xe0,2);
  return;
}


