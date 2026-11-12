// game/update/moby774.cpp -- reconstructed from NPEA00385 EBOOT
// STATUS: NOT STARTED (raw Ghidra output)
// 2 functions, 0x455580-0x4563a4
#include "game/update/moby774.h"
#include "game/camera.h"
#include "game/debug.h"
#include "game/freeze.h"
#include "game/hero.h"
#include "game/memcard.h"
#include "game/mobyfunc.h"
#include "game/mobyutil.h"
#include "game/path.h"
#include "game/respawn.h"
#include "game/space.h"
#include "game/update.h"
#include "game/update/moby1130.h"
#include "idol/fastfunc.h"
#include "idol/mUnk.h"

// 0x0455580 (0x100 bytes)
// strings: 0096c074: 'None'

void M774_00455580(int param_1)

{
  MOBY_OCLASSES MVar1;
  short sVar2;
  int iVar3;
  undefined4 *puVar4;
  
  if ((g_gameMode == GAME_MODE_SCENE) && (Cheats[0] != '\0')) {
    iVar3 = 0;
    puVar4 = &DAT_0095cd50;
    sVar2 = g_SpaceSceneMobyCnt.piece<0,2>();
    if (0 < g_SpaceSceneMobyCnt.piece<0,2>()) {
      do {
        MVar1 = ((MobyInstance *)puVar4[0x5e])->oClass;
        if (((MVar1 == *(MOBY_OCLASSES *)(param_1 + 0xa6)) || (MVar1 == AGNOGG_BUCKWASH)) &&
           (DAT_00a1bf81 == '\0')) {
          AttachManipulator((MobyInstance *)puVar4[0x5e],0,&DAT_00a1bf80);
          DAT_00a1bfa0 = DAT_00873810;
          DAT_00a1bfa4 = DAT_00873810;
          DAT_00a1bfa8 = DAT_00873810;
          sVar2 = g_SpaceSceneMobyCnt.piece<0,2>();
        }
        iVar3 = iVar3 + 1;
        puVar4 = puVar4 + 1;
      } while (iVar3 < sVar2);
    }
  }
  return;
}


// 0x04556e0 (0xcc4 bytes)
// inlined: FastAtan2 @0x455bfc, FastAtan2 @0x455fa8, FastAtan2 @0x45615c
// strings: 0096c074: 'None' | 00658220: 'Water Pump Worker' | 00658238: 'Big Turret Guy' | 00658248: 'Mystery 774'

/* Moby 774 */

void UpdateMoby_774(MobyInstance *moby)

{
  u8 uVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  MOBY_OCLASSES MVar8;
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
  short sVar21;
  float *pfVar20;
  longlong lVar19;
  longlong lVar22;
  ulonglong unaff_r26;
  undefined4 *puVar23;
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
  lVar16 = uVar13 - 0x150;
  puVar10 = (ulonglong *)lVar16;
  *puVar10 = uVar13;
  puVar10[0x2c] = in_LR;
  puVar10[0x25] = in_f27;
  puVar10[0x26] = in_f28;
  puVar10[0x27] = in_f29;
  puVar10[0x28] = in_f30;
  puVar10[0x29] = in_f31;
  puVar10[0x23] = unaff_r30;
  puVar10[0x24] = unaff_r31;
  pvVar9 = moby->pVar;
  uVar24 = ZEXT48(pvVar9);
  puVar10[0x22] = unaff_r29;
  puVar10[0x21] = unaff_r28;
  puVar10[0x20] = unaff_r27;
  puVar10[0x1f] = unaff_r26;
  if (pvVar9 == (void *)0x0) {
    return;
  }
  if ((g_gameMode == GAME_MODE_SCENE) && (Cheats[0] != '\0')) {
    iVar17 = 0;
    puVar23 = &DAT_0095cd50;
    sVar21 = g_SpaceSceneMobyCnt.piece<0,2>();
    if (0 < g_SpaceSceneMobyCnt.piece<0,2>()) {
      do {
        MVar8 = ((MobyInstance *)puVar23[0x5e])->oClass;
        if (((MVar8 == moby->oClass) || (MVar8 == AGNOGG_BUCKWASH)) && (DAT_00a1bf81 == '\0')) {
          AttachManipulator((MobyInstance *)puVar23[0x5e],0,&DAT_00a1bf80);
          DAT_00a1bfa0 = DAT_00873810;
          DAT_00a1bfa4 = DAT_00873810;
          DAT_00a1bfa8 = DAT_00873810;
          sVar21 = g_SpaceSceneMobyCnt.piece<0,2>();
        }
        iVar17 = iVar17 + 1;
        puVar23 = puVar23 + 1;
      } while (iVar17 < sVar21);
    }
  }
  if ((moby->enabled != '\0') &&
     (fVar2 = (moby->pos).y - GameCamera.posY, fVar3 = (moby->pos).x - GameCamera.posX,
     fVar5 = (moby->pos).z - GameCamera.posZ,
     SQRT(fVar5 * fVar5 + fVar3 * fVar3 + fVar2 * fVar2) < 32.0)) {
    MB_SetZBoundsFromGround(moby);
    moby->shadow = '\x1a';
  }
  uVar1 = moby->state;
  if (uVar1 != '\x06') {
    if (uVar1 == '\x05') {
      if (g_gameMode != GAME_MODE_SCENE) {
        if (*(short *)((int)pvVar9 + 6) == 2) {
          g_heroPosition.z = 46.0;
          g_heroPosition.x = 130.5;
          g_heroPosition.y = 299.5;
          moby->state = '\x06';
        }
        else {
          moby->state = '\x04';
        }
      }
    }
    else if (uVar1 == '\x04') {
      iVar17 = FUN_004d3870(moby,uVar24);
      if (iVar17 != 0) {
        moby->state = '\x05';
        *(undefined1 *)((int)pvVar9 + 8) = 0;
      }
    }
    else {
      if (uVar1 == '\x03') {
        DeleteMoby(moby);
        return;
      }
      if (uVar1 == '\x02') {
        if (g_gameMode != GAME_MODE_SCENE) {
          if (g_LevelFlags[Level][(byte)moby->levelFlagIdx] != -1) {
            SetLevelFlag();
            iVar17 = *(int *)((int)pvVar9 + 0x4c);
            if (iVar17 != -1) {
              SetSpawnPoint((Vec4 *)&Cuboids[iVar17].pos,(Vec4 *)&Cuboids[iVar17].rot);
            }
          }
          moby->state = '\x01';
          if (*(short *)((int)pvVar9 + 4) == 4) {
            MB_UnlockLevel(Aridia);
            MB_ToastMessageByIndex(2);
            moby->state = '\x03';
            SaveCheckpointMobyVar(&moby->state,1,moby,1,(int *)&g_CheckpointLive.vars);
            memcard_Save(0,-1);
          }
        }
      }
      else if (uVar1 == '\x01') {
        iVar17 = FUN_004d3870(moby,uVar24);
        if (iVar17 != 0) {
          MB_SetPointAheadOfMoby(0x40019999a0000000,moby);
          moby->state = '\x02';
        }
      }
      else if (uVar1 == '\0') {
        moby->updateDistance = -1;
        *(undefined4 *)((int)pvVar9 + 0x44) = 0;
        if (Level == Novalis) {
          if (g_SeenPlanets.Aridia != '\0') {
            DeleteMoby(moby);
            return;
          }
          *(char **)((int)pvVar9 + 0x20) = "Water Pump Worker";
          moby->state = '\x01';
        }
        else if (Level == Batalia) {
          *(char **)((int)pvVar9 + 0x20) = "Big Turret Guy";
          moby->state = '\x04';
        }
        else {
          *(char **)((int)pvVar9 + 0x20) = "Mystery 774";
          moby->state = '\a';
        }
        FUN_004d3720(moby,uVar24);
      }
    }
  }
  dVar33 = 0.019999999552965164;
  if (moby->animationId != '\0') goto LAB_00456300;
  fVar2 = (moby->pos).y;
  fVar3 = (moby->pos).x;
  fVar5 = fVar2 - g_heroPosition.y;
  fVar6 = fVar3 - g_heroPosition.x;
  if (8.0 <= SQRT(fVar6 * fVar6 + fVar5 * fVar5)) {
LAB_00455dac:
    if (*(int *)((int)pvVar9 + 0x164) != 0) {
      *(undefined4 *)((int)pvVar9 + 0x164) = 0;
      *(float *)((int)pvVar9 + 0x150) = g_heroCGPos;
      *(float *)((int)pvVar9 + 0x154) = DAT_00969db4;
      *(float *)((int)pvVar9 + 0x158) = DAT_00969db8;
      *(undefined4 *)((int)pvVar9 + 0x15c) = DAT_00969dbc;
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
      lVar15 = uVar13 - 0x140;
      lVar22 = uVar13 - 0x6c;
      lVar19 = uVar13 - 0x7c;
      lVar25 = 2;
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
        *(float *)((int)lVar22 + 4) = *(float *)(iVar17 + 4) * fVar5 * fVar5;
        lVar22 = lVar22 + 8;
        lVar25 = lVar25 + -1;
      } while (lVar25 != 0);
      lVar25 = 4;
      lVar22 = uVar13 - 0x7c;
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
        lVar15 = lVar15 + 0x10;
        iVar12 = (int)lVar22;
        lVar22 = lVar22 + 0x10;
        fVar3 = fVar3 + *(float *)(iVar17 + 0xd4) + *(float *)(iVar12 + 4) + *(float *)(iVar12 + 8)
                + *(float *)(iVar12 + 0xc);
        lVar19 = lVar19 + -1;
      } while (lVar19 != 0);
      fVar3 = (fVar3 + 0.7853982) * fVar7 + fVar4;
    }
    dVar26 = (double)FastSubRots(fVar2,fVar3);
    if (1.5707963705062866 <= dVar26) goto LAB_00455dac;
    if (SQRT(DAT_00969de8 * DAT_00969de8 + DAT_00969de0 * DAT_00969de0 + DAT_00969de4 * DAT_00969de4
            ) <= 0.01) {
      FastDecTimerS32(uVar24 + 0x164);
    }
    else {
      auVar34 = ZEXT416(0xffffffff);
      auVar34 = auVar34 | auVar34 << 0x20 | auVar34 << 0x40 | auVar34 << 0x60;
      auVar35 = vectorShiftLeftIntegerWord(auVar34,auVar34);
      auVar34 = loadVectorLeftIndexed(0x20,0x455680);
      auVar34 = auVar34 >> 0x60 & (GPiece<16>)0xffffffff;
      auVar36 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
      auVar34 = vectorMultiplyAddFloatingPoint
                          (auVar36,auVar34 | auVar34 << 0x20 | auVar34 << 0x40 | auVar34 << 0x60,
                           auVar35);
      auVar34 = vectorConvertToSignedFixedPointWordSaturate(auVar34,0);
      auVar34 = auVar34 >> 0x60 & (GPiece<16>)0xffffffff;
      uVar18 = storeVectorElementWordIndexed
                         (auVar34 | auVar34 << 0x20 | auVar34 << 0x40 | auVar34 << 0x60,0x164,uVar24
                         );
      *(undefined4 *)((int)pvVar9 + 0x164U & 0xfffffffc) = uVar18;
    }
  }
  iVar17 = FastDecTimerS32(uVar24 + 0x168);
  if (iVar17 != 0) {
    dVar26 = (double)MB_randRangeFloat(180.0,300.0);
    uVar18 = FastDoubleToInt((double)(float)(dVar26 * (double)animationSpeed));
    *(undefined4 *)((int)pvVar9 + 0x168) = uVar18;
    dVar31 = (double)(moby->rotation).z;
    dVar26 = (double)MB_randRangeFloat(-90.0,90.0);
    dVar29 = 0.01745329238474369;
    dVar26 = (double)FastWrapRot((float)dVar31,(float)(dVar26 * 0.01745329238474369));
    dVar31 = (double)MB_randRangeFloat(0.0,30.0);
    MB_SphericalToVector
              (6.0,(float)dVar26,(float)(dVar31 * dVar29),(float *)((int)pvVar9 + 0x150));
    *(float *)((int)pvVar9 + 0x150) = *(float *)((int)pvVar9 + 0x150) + (moby->pos).x;
    *(float *)((int)pvVar9 + 0x154) = *(float *)((int)pvVar9 + 0x154) + (moby->pos).y;
    *(float *)((int)pvVar9 + 0x158) = *(float *)((int)pvVar9 + 0x158) + (moby->pos).z;
  }
  if (*(int *)((int)pvVar9 + 0x164) == 0) {
    fVar2 = *(float *)((int)pvVar9 + 0x150);
    fVar3 = *(float *)((int)pvVar9 + 0x154);
    fVar5 = *(float *)((int)pvVar9 + 0x158);
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
  *(float *)((int)puVar10 + 0x7c) = fVar2;
  *(float *)(puVar10 + 0x10) = fVar3;
  dVar29 = (double)(fVar5 - ((moby->pos).z + 1.0));
  *(float *)((int)puVar10 + 0x84) = (float)(ABS(dVar32) - ABS(dVar30));
  dVar31 = 0.0;
  uVar14 = (ulonglong)(*(uint *)((int)puVar10 + 0x7c) >> 0x1c) & 8 |
           (ulonglong)(*(uint *)((int)puVar10 + 0x84) >> 0x1e) & 2 |
           (ulonglong)(*(uint *)(puVar10 + 0x10) >> 0x1d) & 4;
  dVar26 = ABS((double)*(float *)((int)puVar10 + 0x7c));
  if (*(float *)((int)puVar10 + 0x84) - 0.0 < 0.0) {
    dVar26 = ABS(dVar30);
  }
  fVar2 = *(float *)(&g_atanQuadrantTable + (int)(uVar14 << 2));
  dVar28 = ABS((double)*(float *)(puVar10 + 0x10));
  if (*(float *)((int)puVar10 + 0x84) - 0.0 < 0.0) {
    dVar28 = ABS(dVar32);
  }
  fVar3 = *(float *)(((uint)(uVar14 << 2) | 0x735900) + 4);
  dVar27 = dVar31;
  if (0.0 < dVar26) {
    lVar15 = uVar13 - 0x140;
    lVar19 = uVar13 - 0x9c;
    lVar22 = uVar13 - 0x8c;
    lVar25 = 2;
    fVar5 = (float)(dVar28 - dVar26) / (float)(dVar28 + dVar26);
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
      *(float *)((int)lVar22 + 4) = *(float *)(iVar17 + 4) * fVar5 * fVar5;
      lVar22 = lVar22 + 8;
      lVar25 = lVar25 + -1;
    } while (lVar25 != 0);
    lVar25 = 4;
    lVar22 = uVar13 - 0x9c;
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
      lVar15 = lVar15 + 0x10;
      iVar12 = (int)lVar22;
      lVar22 = lVar22 + 0x10;
      dVar26 = (double)((float)(dVar26 + (double)*(float *)(iVar17 + 0xb4)) + *(float *)(iVar12 + 4)
                        + *(float *)(iVar12 + 8) + *(float *)(iVar12 + 0xc));
      lVar19 = lVar19 + -1;
    } while (lVar19 != 0);
    dVar27 = (double)((float)(dVar26 + 0.7853981852531433) * fVar2 + fVar3);
  }
  dVar28 = (double)FastDiffRots(dVar27,(double)(moby->rotation).z);
  *(float *)((int)puVar10 + 0x74) = (float)dVar29;
  fVar2 = SQRT((float)(dVar32 * dVar32 + (double)(float)(dVar30 * dVar30)));
  dVar30 = ABS((double)fVar2);
  *(float *)(puVar10 + 0xe) = fVar2;
  *(float *)(puVar10 + 0xf) = (float)(dVar30 - ABS(dVar29));
  uVar14 = (ulonglong)(*(uint *)(puVar10 + 0xe) >> 0x1c) & 8 |
           (ulonglong)(*(uint *)(puVar10 + 0xf) >> 0x1e) & 2 |
           (ulonglong)(*(uint *)((int)puVar10 + 0x74) >> 0x1d) & 4;
  dVar26 = ABS((double)*(float *)(puVar10 + 0xe));
  if ((double)*(float *)(puVar10 + 0xf) - dVar31 < 0.0) {
    dVar26 = ABS(dVar29);
  }
  fVar3 = *(float *)(&g_atanQuadrantTable + (int)(uVar14 << 2));
  fVar2 = *(float *)(((uint)(uVar14 << 2) | 0x735900) + 4);
  dVar29 = ABS((double)*(float *)((int)puVar10 + 0x74));
  if ((double)*(float *)(puVar10 + 0xf) - dVar31 < 0.0) {
    dVar29 = dVar30;
  }
  if (dVar31 < dVar26) {
    lVar15 = uVar13 - 0x140;
    lVar22 = uVar13 - 0xac;
    lVar19 = uVar13 - 0xbc;
    lVar25 = 2;
    fVar5 = (float)(dVar29 - dVar26) / (float)(dVar29 + dVar26);
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
      *(float *)((int)lVar22 + 4) = *(float *)(iVar17 + 4) * fVar5 * fVar5;
      lVar22 = lVar22 + 8;
      lVar25 = lVar25 + -1;
    } while (lVar25 != 0);
    lVar25 = 4;
    lVar22 = uVar13 - 0xbc;
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
      iVar12 = (int)lVar22;
      lVar16 = lVar16 + 0x10;
      lVar22 = lVar22 + 0x10;
      dVar31 = (double)((float)(dVar31 + (double)*(float *)(iVar17 + 0x94)) + *(float *)(iVar12 + 4)
                        + *(float *)(iVar12 + 8) + *(float *)(iVar12 + 0xc));
      lVar15 = lVar15 + -1;
    } while (lVar15 != 0);
    dVar31 = (double)((float)(dVar31 + 0.7853981852531433) * fVar3 + fVar2);
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
  *(float *)((int)pvVar9 + 0xb8) = (float)(dVar26 * 0.5);
  *(float *)((int)pvVar9 + 0x138) = (float)(dVar26 * 0.5);
  *(float *)((int)pvVar9 + 0xb4) = (float)(dVar29 * 1.25);
LAB_00456300:
  if (Cheats[0] != '\0') {
    *(undefined4 *)((int)pvVar9 + 0xc0) = 0x40300000;
  }
  dVar26 = 0.30000001192092896;
  MB_UpdateManipulatorRot
            ((double)(float)((double)DAT_0071f40c * dVar33),
             (double)(float)((double)DAT_0071f40c * 0.30000001192092896),moby,uVar24 + 0x50,0);
  MB_UpdateManipulatorRot
            ((double)(float)((double)DAT_0071f40c * dVar33),
             (double)(float)((double)DAT_0071f40c * dVar26),moby,uVar24 + 0xd0,1);
  return;
}


