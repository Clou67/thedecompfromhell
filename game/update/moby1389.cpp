// game/update/moby1389.cpp -- reconstructed from NPEA00385 EBOOT
// STATUS: NOT STARTED (raw Ghidra output)
// 4 functions, 0x267994-0x268a30
// shared update function UpdateMoby_{1389_1446}; registered for oClasses 1389, 1446
#include "game/update/moby1389.h"
#include "game/camera.h"
#include "game/collproc.h"
#include "game/debug.h"
#include "game/freeze.h"
#include "game/hero.h"
#include "game/memcard.h"
#include "game/mobyfunc.h"
#include "game/mobyutil.h"
#include "game/music.h"
#include "game/respawn.h"
#include "game/space.h"
#include "game/update.h"
#include "game/update/moby1130.h"
#include "game/vendor.h"
#include "idol/fastfunc.h"
#include "idol/mUnk.h"

// 0x0267994 (0x14 bytes)
void M1446_00267994(void)

{
  DAT_0079c90c = 0x10000;
  return;
}


// 0x02679a8 (0xf4 bytes)
// strings: 0096c074: 'None'

void M1446_002679a8(int param_1)

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


// shared update function, registered for oClasses 1389, 1446
// 0x0267af8 (0xf24 bytes)
// inlined: FastAtan2 @0x268278, FastAtan2 @0x268620, FastAtan2 @0x2687d4
// strings: 0096c074: 'None'

/* Moby 1389
   Moby 1446 */

void UpdateMoby_1389(MobyInstance *moby)

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
  ulonglong *puVar10;
  float fVar11;
  int iVar12;
  gameMode_t gVar13;
  ulonglong uVar14;
  MobyInstance *pMVar18;
  ulonglong uVar15;
  int iVar19;
  undefined4 uVar20;
  longlong lVar16;
  longlong lVar17;
  short sVar23;
  float *pfVar22;
  longlong lVar21;
  longlong lVar24;
  ulonglong unaff_r26;
  undefined4 *puVar25;
  ulonglong unaff_r27;
  ulonglong unaff_r28;
  ulonglong unaff_r29;
  ulonglong unaff_r30;
  ulonglong uVar26;
  ulonglong unaff_r31;
  ulonglong in_LR;
  longlong lVar27;
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
  double dVar35;
  GPiece<16> auVar36;
  GPiece<16> auVar37;
  GPiece<16> auVar38;
  
  uVar14 = ZEXT48(&stack0x00000000);
  lVar17 = uVar14 - 0x150;
  puVar10 = (ulonglong *)lVar17;
  *puVar10 = uVar14;
  puVar10[0x2c] = in_LR;
  puVar10[0x25] = in_f27;
  puVar10[0x26] = in_f28;
  puVar10[0x27] = in_f29;
  puVar10[0x28] = in_f30;
  puVar10[0x29] = in_f31;
  puVar10[0x24] = unaff_r31;
  puVar10[0x23] = unaff_r30;
  gVar13 = g_gameMode;
  pvVar9 = moby->pVar;
  uVar26 = ZEXT48(pvVar9);
  puVar10[0x22] = unaff_r29;
  puVar10[0x21] = unaff_r28;
  puVar10[0x20] = unaff_r27;
  puVar10[0x1f] = unaff_r26;
  if ((gVar13 == GAME_MODE_SCENE) && (Cheats[0] != '\0')) {
    iVar19 = 0;
    puVar25 = &DAT_0095cd50;
    sVar23 = g_SpaceSceneMobyCnt.piece<0,2>();
    if (0 < g_SpaceSceneMobyCnt.piece<0,2>()) {
      do {
        if ((((MobyInstance *)puVar25[0x5e])->oClass == moby->oClass) && (DAT_00a1bf81 == '\0')) {
          AttachManipulator((MobyInstance *)puVar25[0x5e],1,&DAT_00a1bf80);
          DAT_00a1bfa0 = 0x40300000;
          DAT_00a1bfa4 = 0x40300000;
          DAT_00a1bfa8 = 0x40300000;
          sVar23 = g_SpaceSceneMobyCnt.piece<0,2>();
        }
        iVar19 = iVar19 + 1;
        puVar25 = puVar25 + 1;
      } while (iVar19 < sVar23);
    }
  }
  cVar2 = g_heroType;
  if (*(int *)((int)pvVar9 + 0x14c) == -1) {
    return;
  }
  if (g_heroType != '\x02') {
    g_MobyInstance[*(int *)((int)pvVar9 + 0x14c)].collision = (ushort *)0x0;
    g_MobyInstance[*(int *)((int)pvVar9 + 0x14c)].modeBits =
         g_MobyInstance[*(int *)((int)pvVar9 + 0x14c)].modeBits | (UNK_40|DISABLED);
  }
  bVar1 = moby->state;
  if (bVar1 == 9) {
    moby->collision = (ushort *)0x0;
    moby->updateDistance = '\0';
    moby->modeBits = moby->modeBits | (UNK_40|DISABLED);
    return;
  }
  if (g_gameMode == GAME_MODE_SCENE) {
    moby->collision = (ushort *)0x0;
    moby->modeBits = moby->modeBits | (UNK_40|DISABLED);
  }
  else {
    moby->collision = moby->pClass->collision;
    moby->modeBits =
         moby->modeBits &
         (MIRROR|CAN_BE_DAMAGED|HIDE_BACKFACES|CAN_BE_AUTO_TARGETED|DISABLE_Z_WRITE|DRAW_SHADOW|
          DRAW_TRANSPARENT_WEIRD|LOCK_ROTATION|NO_DRAW|HAS_SPECIAL_VARS|HAS_GLOW|TRANSPARENT|
          NO_POST_UPDATE|NO_UPDATE);
    MB_SetZBoundsFromPos(moby);
    bVar1 = moby->state;
    cVar2 = g_heroType;
  }
  if (bVar1 < 4) {
    if (bVar1 == 0) {
      moby->state = '\x01';
      moby->updateDistance = -1;
      *(undefined4 *)((int)pvVar9 + 0xc) = 0x41a00000;
      FUN_004d3720(moby,uVar26);
      pMVar18 = MobyUpdateChainStart;
      if (g_LevelFlags[Level][*(int *)((int)pvVar9 + 0x280)] == -1) {
        if (g_SeenPlanets.Kalebo == 0) {
          moby->state = '\x03';
          for (; pMVar18 != (MobyInstance *)0x0; pMVar18 = (MobyInstance *)pMVar18->pChain) {
            if ((((uint)(byte)pMVar18->levelFlagIdx == *(uint *)((int)pvVar9 + 0x280)) &&
                (pMVar18 != moby)) && (pMVar18->state != 0xfd && pMVar18->state != 0xfe)) {
              DeleteMoby(pMVar18);
            }
          }
        }
        else {
          moby->state = '\t';
        }
      }
    }
    else if (bVar1 < 2) {
      iVar19 = MB_IsPntInCuboid(&g_heroPosition,(longlong)*(int *)((int)pvVar9 + 0x27c));
      if ((iVar19 != 0) &&
         (((g_heroStateType < 2 || (g_heroStateType == 9)) &&
          (iVar19 = FUN_004d3870(moby,uVar26), iVar19 != 0)))) {
        SetLevelFlag(*(undefined4 *)((int)pvVar9 + 0x280));
        pMVar18 = MobyUpdateChainStart;
        moby->state = '\x02';
        moby->unk58 = 0.0;
        for (; pMVar18 != (MobyInstance *)0x0; pMVar18 = (MobyInstance *)pMVar18->pChain) {
          if ((((uint)(byte)pMVar18->levelFlagIdx == *(uint *)((int)pvVar9 + 0x280)) &&
              (pMVar18 != moby)) && (pMVar18->state != 0xfd && pMVar18->state != 0xfe)) {
            DeleteMoby(pMVar18);
          }
        }
      }
    }
    else if (bVar1 < 3) {
      if (g_gameMode != GAME_MODE_SCENE) {
        sVar23 = *(short *)((int)pvVar9 + 4);
        moby->unk58 = 1.0;
        if (sVar23 == 0) {
          iVar19 = *(int *)((int)pvVar9 + 0x150);
          if (iVar19 != -1) {
            SetSpawnPoint((Vec4 *)&Cuboids[iVar19].pos,(Vec4 *)&Cuboids[iVar19].rot);
          }
          moby->state = '\x03';
        }
        else {
          moby->state = '\t';
        }
      }
    }
    else if (cVar2 == '\x02') {
      if (((*(int *)((int)pvVar9 + 0x158) != -1) &&
          (pMVar18 = g_MobyInstance + *(int *)((int)pvVar9 + 0x158), pMVar18 != (MobyInstance *)0x0))
         && (pMVar18->state != 0xfd && pMVar18->state != 0xfe)) {
        DeleteMoby(pMVar18);
        *(undefined4 *)((int)pvVar9 + 0x158) = 0xffffffff;
      }
      iVar19 = MB_CountActiveMobysByGroup(*(undefined4 *)((int)pvVar9 + 0x144),0x40);
      if ((iVar19 == 0) &&
         (iVar19 = MB_CountActiveMobysByGroup(*(undefined4 *)((int)pvVar9 + 0x148),0x40),
         iVar19 == 0)) {
        auVar36 = ZEXT416(0xffffffff);
        auVar36 = auVar36 | auVar36 << 0x20 | auVar36 << 0x40 | auVar36 << 0x60;
        auVar37 = vectorShiftLeftIntegerWord(auVar36,auVar36);
        moby->state = '\x04';
        auVar36 = loadVectorLeftIndexed(in_LR,0x267a9c);
        auVar36 = auVar36 >> 0x60 & (GPiece<16>)0xffffffff;
        auVar38 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
        auVar36 = vectorMultiplyAddFloatingPoint
                            (auVar38,auVar36 | auVar36 << 0x20 | auVar36 << 0x40 | auVar36 << 0x60,
                             auVar37);
        auVar36 = vectorConvertToSignedFixedPointWordSaturate(auVar36,0);
        auVar36 = auVar36 >> 0x60 & (GPiece<16>)0xffffffff;
        uVar20 = storeVectorElementWordIndexed
                           (auVar36 | auVar36 << 0x20 | auVar36 << 0x40 | auVar36 << 0x60,0x15c,
                            uVar26);
        *(undefined4 *)((int)pvVar9 + 0x15cU & 0xfffffffc) = uVar20;
      }
    }
  }
  else if (bVar1 < 7) {
    if (bVar1 < 5) {
      iVar19 = FastDecTimerS32(uVar26 + 0x15c);
      if (iVar19 != 0) {
        Hero_RevertToRatchet();
        MB_SetAnimationNoBlend(g_MobyInstance + *(int *)((int)pvVar9 + 0x14c),0,0);
        *(undefined4 *)((int)pvVar9 + 0x140) = 1;
        *(undefined2 *)((int)pvVar9 + 0x36) = 1;
        *(undefined1 *)((int)pvVar9 + 8) = 1;
        MB_UnlockLevel(Kalebo);
        SetLevelFlag(*(undefined4 *)((int)pvVar9 + 0x284));
        music_SetTransition(0,5);
        iVar19 = *(int *)((int)pvVar9 + 0x154);
        if (iVar19 != -1) {
          Hero_Warp(&Cuboids[iVar19].pos.x,&Cuboids[iVar19].rot.x,0,1);
          SetSpawnPoint
                    ((Vec4 *)&Cuboids[*(int *)((int)pvVar9 + 0x154)].pos,
                     (Vec4 *)&Cuboids[*(int *)((int)pvVar9 + 0x154)].rot);
        }
        moby->state = '\x05';
      }
    }
    else if (bVar1 < 6) {
      mode_sceneInit(1);
      moby->state = '\x06';
    }
    else if (g_gameMode != GAME_MODE_SCENE) {
      PlayInfobotMovie(0x10);
      moby->state = '\a';
    }
  }
  else {
    if (bVar1 < 8) {
      if (g_gameMode != GAME_MODE_SCENE) {
        MB_ToastMessageByIndex(0x10);
        mode_sceneInit(2);
        moby->state = '\b';
      }
    }
    else if (8 < bVar1) goto LAB_0026817c;
    memcard_Save(0,-1);
    moby->state = '\t';
  }
LAB_0026817c:
  fVar3 = (moby->pos).y;
  fVar4 = (moby->pos).x;
  fVar6 = fVar3 - g_heroPosition.y;
  fVar7 = fVar4 - g_heroPosition.x;
  dVar35 = 0.019999999552965164;
  if (SQRT(fVar7 * fVar7 + fVar6 * fVar6) < 8.0) {
    fVar4 = g_heroCGPos - fVar4;
    fVar3 = DAT_00969db4 - fVar3;
    fVar6 = ABS(fVar4);
    fVar5 = ABS(fVar3);
    *(float *)(puVar10 + 0x11) = fVar4;
    *(float *)((int)puVar10 + 0x8c) = fVar3;
    fVar3 = (moby->rotation).z;
    *(float *)(puVar10 + 0x12) = fVar6 - fVar5;
    fVar4 = 0.0;
    uVar15 = (ulonglong)(*(uint *)(puVar10 + 0x11) >> 0x1c) & 8 |
             (ulonglong)(*(uint *)(puVar10 + 0x12) >> 0x1e) & 2 |
             (ulonglong)(*(uint *)((int)puVar10 + 0x8c) >> 0x1d) & 4;
    fVar7 = ABS(*(float *)(puVar10 + 0x11));
    if (*(float *)(puVar10 + 0x12) - 0.0 < 0.0) {
      fVar7 = fVar5;
    }
    fVar8 = *(float *)(&g_atanQuadrantTable + (int)(uVar15 << 2));
    fVar5 = *(float *)(((uint)(uVar15 << 2) | 0x735900) + 4);
    fVar11 = ABS(*(float *)((int)puVar10 + 0x8c));
    if (*(float *)(puVar10 + 0x12) - 0.0 < 0.0) {
      fVar11 = fVar6;
    }
    if (0.0 < fVar7) {
      lVar16 = uVar14 - 0x140;
      lVar24 = uVar14 - 0x6c;
      lVar21 = uVar14 - 0x7c;
      lVar27 = 2;
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
        *(float *)((int)lVar16 + 0xd4) = *(float *)((int)lVar16 + 0xc4) * fVar6 * fVar6;
        iVar19 = (int)lVar21;
        lVar21 = lVar21 + 8;
        lVar16 = lVar16 + 8;
        *(float *)((int)lVar24 + 4) = *(float *)(iVar19 + 4) * fVar6 * fVar6;
        lVar24 = lVar24 + 8;
        lVar27 = lVar27 + -1;
      } while (lVar27 != 0);
      lVar27 = 4;
      lVar24 = uVar14 - 0x7c;
      pfVar22 = (float *)&DAT_007358e0;
      lVar16 = lVar17;
      lVar21 = lVar24;
      do {
        fVar6 = *pfVar22;
        fVar7 = pfVar22[1];
        pfVar22 = pfVar22 + 2;
        *(float *)((int)lVar16 + 0xd4) = *(float *)((int)lVar16 + 0xd4) * fVar6;
        lVar16 = lVar16 + 8;
        *(float *)((int)lVar21 + 4) = *(float *)((int)lVar21 + 4) * fVar7;
        lVar21 = lVar21 + 8;
        lVar27 = lVar27 + -1;
      } while (lVar27 != 0);
      lVar21 = 2;
      lVar16 = lVar17;
      do {
        iVar19 = (int)lVar16;
        lVar16 = lVar16 + 0x10;
        iVar12 = (int)lVar24;
        lVar24 = lVar24 + 0x10;
        fVar4 = fVar4 + *(float *)(iVar19 + 0xd4) + *(float *)(iVar12 + 4) + *(float *)(iVar12 + 8)
                + *(float *)(iVar12 + 0xc);
        lVar21 = lVar21 + -1;
      } while (lVar21 != 0);
      fVar4 = (fVar4 + 0.7853982) * fVar8 + fVar5;
    }
    dVar28 = (double)FastSubRots(fVar3,fVar4);
    if (dVar28 < 1.5707963705062866) {
      if (SQRT(DAT_00969de8 * DAT_00969de8 +
               DAT_00969de0 * DAT_00969de0 + DAT_00969de4 * DAT_00969de4) <= 0.01) {
        FastDecTimerS32(uVar26 + 0x274);
      }
      else {
        auVar36 = ZEXT416(0xffffffff);
        auVar36 = auVar36 | auVar36 << 0x20 | auVar36 << 0x40 | auVar36 << 0x60;
        auVar37 = vectorShiftLeftIntegerWord(auVar36,auVar36);
        auVar36 = loadVectorLeftIndexed(in_LR,0x267a9c);
        auVar38 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
        auVar36 = auVar36 >> 0x60 & (GPiece<16>)0xffffffff;
        auVar36 = vectorMultiplyAddFloatingPoint
                            (auVar38,auVar36 | auVar36 << 0x20 | auVar36 << 0x40 | auVar36 << 0x60,
                             auVar37);
        auVar36 = vectorConvertToSignedFixedPointWordSaturate(auVar36,0);
        auVar36 = auVar36 >> 0x60 & (GPiece<16>)0xffffffff;
        uVar20 = storeVectorElementWordIndexed
                           (auVar36 | auVar36 << 0x20 | auVar36 << 0x40 | auVar36 << 0x60,0x274,
                            uVar26);
        *(undefined4 *)((int)pvVar9 + 0x274U & 0xfffffffc) = uVar20;
      }
      goto LAB_00268458;
    }
  }
  if (*(int *)((int)pvVar9 + 0x274) != 0) {
    *(undefined4 *)((int)pvVar9 + 0x274) = 0;
    *(float *)((int)pvVar9 + 0x260) = g_heroCGPos;
    *(float *)((int)pvVar9 + 0x264) = DAT_00969db4;
    *(float *)((int)pvVar9 + 0x268) = DAT_00969db8;
    *(undefined4 *)((int)pvVar9 + 0x26c) = DAT_00969dbc;
  }
LAB_00268458:
  iVar19 = FastDecTimerS32(uVar26 + 0x278);
  if (iVar19 != 0) {
    dVar28 = (double)MB_randRangeFloat(180.0,300.0);
    uVar20 = FastDoubleToInt((double)(float)(dVar28 * (double)animationSpeed));
    *(undefined4 *)((int)pvVar9 + 0x278) = uVar20;
    dVar33 = (double)(moby->rotation).z;
    dVar28 = (double)MB_randRangeFloat(-90.0,90.0);
    dVar31 = 0.01745329238474369;
    dVar28 = (double)FastWrapRot((float)dVar33,(float)(dVar28 * 0.01745329238474369));
    dVar33 = (double)MB_randRangeFloat(0.0,30.0);
    MB_SphericalToVector
              (6.0,(float)dVar28,(float)(dVar33 * dVar31),(float *)((int)pvVar9 + 0x260));
    *(float *)((int)pvVar9 + 0x260) = *(float *)((int)pvVar9 + 0x260) + (moby->pos).x;
    *(float *)((int)pvVar9 + 0x264) = *(float *)((int)pvVar9 + 0x264) + (moby->pos).y;
    *(float *)((int)pvVar9 + 0x268) = *(float *)((int)pvVar9 + 0x268) + (moby->pos).z;
  }
  if (*(int *)((int)pvVar9 + 0x274) == 0) {
    fVar3 = *(float *)((int)pvVar9 + 0x260);
    fVar4 = *(float *)((int)pvVar9 + 0x264);
    fVar6 = *(float *)((int)pvVar9 + 0x268);
  }
  else {
    dVar35 = 0.03999999910593033;
    fVar3 = g_heroCGPos;
    fVar4 = DAT_00969db4;
    fVar6 = DAT_00969db8;
  }
  fVar3 = fVar3 - (moby->pos).x;
  dVar34 = (double)fVar3;
  fVar4 = fVar4 - (moby->pos).y;
  dVar32 = (double)fVar4;
  *(float *)((int)puVar10 + 0x7c) = fVar3;
  *(float *)(puVar10 + 0x10) = fVar4;
  dVar31 = (double)(fVar6 - ((moby->pos).z + 1.0));
  *(float *)((int)puVar10 + 0x84) = (float)(ABS(dVar34) - ABS(dVar32));
  dVar33 = 0.0;
  uVar15 = (ulonglong)(*(uint *)((int)puVar10 + 0x7c) >> 0x1c) & 8 |
           (ulonglong)(*(uint *)((int)puVar10 + 0x84) >> 0x1e) & 2 |
           (ulonglong)(*(uint *)(puVar10 + 0x10) >> 0x1d) & 4;
  dVar28 = ABS((double)*(float *)((int)puVar10 + 0x7c));
  if (*(float *)((int)puVar10 + 0x84) - 0.0 < 0.0) {
    dVar28 = ABS(dVar32);
  }
  fVar3 = *(float *)(&g_atanQuadrantTable + (int)(uVar15 << 2));
  dVar30 = ABS((double)*(float *)(puVar10 + 0x10));
  if (*(float *)((int)puVar10 + 0x84) - 0.0 < 0.0) {
    dVar30 = ABS(dVar34);
  }
  fVar4 = *(float *)(((uint)(uVar15 << 2) | 0x735900) + 4);
  dVar29 = dVar33;
  if (0.0 < dVar28) {
    lVar16 = uVar14 - 0x140;
    lVar24 = uVar14 - 0x8c;
    lVar21 = uVar14 - 0x9c;
    lVar27 = 2;
    fVar6 = (float)(dVar30 - dVar28) / (float)(dVar30 + dVar28);
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
      *(float *)((int)lVar16 + 0xb4) = *(float *)((int)lVar16 + 0xa4) * fVar6 * fVar6;
      iVar19 = (int)lVar21;
      lVar21 = lVar21 + 8;
      lVar16 = lVar16 + 8;
      *(float *)((int)lVar24 + 4) = *(float *)(iVar19 + 4) * fVar6 * fVar6;
      lVar24 = lVar24 + 8;
      lVar27 = lVar27 + -1;
    } while (lVar27 != 0);
    lVar27 = 4;
    lVar24 = uVar14 - 0x9c;
    pfVar22 = (float *)&DAT_007358e0;
    lVar16 = lVar17;
    lVar21 = lVar24;
    do {
      fVar6 = *pfVar22;
      fVar7 = pfVar22[1];
      pfVar22 = pfVar22 + 2;
      *(float *)((int)lVar16 + 0xb4) = *(float *)((int)lVar16 + 0xb4) * fVar6;
      lVar16 = lVar16 + 8;
      *(float *)((int)lVar21 + 4) = *(float *)((int)lVar21 + 4) * fVar7;
      lVar21 = lVar21 + 8;
      lVar27 = lVar27 + -1;
    } while (lVar27 != 0);
    lVar21 = 2;
    lVar16 = lVar17;
    dVar28 = dVar33;
    do {
      iVar19 = (int)lVar16;
      iVar12 = (int)lVar24;
      lVar16 = lVar16 + 0x10;
      lVar24 = lVar24 + 0x10;
      dVar28 = (double)((float)(dVar28 + (double)*(float *)(iVar19 + 0xb4)) + *(float *)(iVar12 + 4)
                        + *(float *)(iVar12 + 8) + *(float *)(iVar12 + 0xc));
      lVar21 = lVar21 + -1;
    } while (lVar21 != 0);
    dVar29 = (double)((float)(dVar28 + 0.7853981852531433) * fVar3 + fVar4);
  }
  dVar30 = (double)FastDiffRots(dVar29,(double)(moby->rotation).z);
  *(float *)((int)puVar10 + 0x74) = (float)dVar31;
  fVar3 = SQRT((float)(dVar34 * dVar34 + (double)(float)(dVar32 * dVar32)));
  dVar32 = ABS((double)fVar3);
  *(float *)(puVar10 + 0xe) = fVar3;
  *(float *)(puVar10 + 0xf) = (float)(dVar32 - ABS(dVar31));
  uVar15 = (ulonglong)(*(uint *)(puVar10 + 0xe) >> 0x1c) & 8 |
           (ulonglong)(*(uint *)(puVar10 + 0xf) >> 0x1e) & 2 |
           (ulonglong)(*(uint *)((int)puVar10 + 0x74) >> 0x1d) & 4;
  dVar28 = ABS((double)*(float *)(puVar10 + 0xe));
  if ((double)*(float *)(puVar10 + 0xf) - dVar33 < 0.0) {
    dVar28 = ABS(dVar31);
  }
  fVar3 = *(float *)(&g_atanQuadrantTable + (int)(uVar15 << 2));
  dVar31 = ABS((double)*(float *)((int)puVar10 + 0x74));
  if ((double)*(float *)(puVar10 + 0xf) - dVar33 < 0.0) {
    dVar31 = dVar32;
  }
  fVar4 = *(float *)(((uint)(uVar15 << 2) | 0x735900) + 4);
  if (dVar33 < dVar28) {
    lVar16 = uVar14 - 0x140;
    lVar21 = uVar14 - 0xbc;
    lVar24 = uVar14 - 0xac;
    lVar27 = 2;
    fVar6 = (float)(dVar31 - dVar28) / (float)(dVar31 + dVar28);
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
      *(float *)((int)lVar16 + 0x94) = *(float *)((int)lVar16 + 0x84) * fVar6 * fVar6;
      iVar19 = (int)lVar21;
      lVar16 = lVar16 + 8;
      lVar21 = lVar21 + 8;
      *(float *)((int)lVar24 + 4) = *(float *)(iVar19 + 4) * fVar6 * fVar6;
      lVar24 = lVar24 + 8;
      lVar27 = lVar27 + -1;
    } while (lVar27 != 0);
    lVar27 = 4;
    lVar24 = uVar14 - 0xbc;
    pfVar22 = (float *)&DAT_007358e0;
    lVar16 = lVar17;
    lVar21 = lVar24;
    do {
      fVar6 = *pfVar22;
      fVar7 = pfVar22[1];
      pfVar22 = pfVar22 + 2;
      *(float *)((int)lVar16 + 0x94) = *(float *)((int)lVar16 + 0x94) * fVar6;
      lVar16 = lVar16 + 8;
      *(float *)((int)lVar21 + 4) = *(float *)((int)lVar21 + 4) * fVar7;
      lVar21 = lVar21 + 8;
      lVar27 = lVar27 + -1;
    } while (lVar27 != 0);
    lVar16 = 2;
    do {
      iVar19 = (int)lVar17;
      iVar12 = (int)lVar24;
      lVar17 = lVar17 + 0x10;
      lVar24 = lVar24 + 0x10;
      dVar33 = (double)((float)(dVar33 + (double)*(float *)(iVar19 + 0x94)) + *(float *)(iVar12 + 4)
                        + *(float *)(iVar12 + 8) + *(float *)(iVar12 + 0xc));
      lVar16 = lVar16 + -1;
    } while (lVar16 != 0);
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
  *(float *)((int)pvVar9 + 0x1c8) = (float)(dVar28 * 0.5);
  *(float *)((int)pvVar9 + 0x248) = (float)(dVar28 * 0.5);
  *(float *)((int)pvVar9 + 0x1c4) = (float)(dVar31 * 1.25);
  if (Cheats[0] != '\0') {
    *(undefined4 *)((int)pvVar9 + 0x1d0) = 0x40300000;
  }
  dVar28 = 0.30000001192092896;
  MB_UpdateManipulatorRot
            ((double)(float)((double)DAT_0071f40c * dVar35),
             (double)(float)((double)DAT_0071f40c * 0.30000001192092896),moby,uVar26 + 0x160,1);
  MB_UpdateManipulatorRot
            ((double)(float)((double)DAT_0071f40c * dVar35),
             (double)(float)((double)DAT_0071f40c * dVar28),moby,uVar26 + 0x1e0,0);
  return;
}


// 0x0268a1c (0x14 bytes)
void M1446_00268a1c(void)

{
  DAT_0079c97c = 0x10000;
  return;
}


