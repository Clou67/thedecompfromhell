// game/update/moby1108.cpp -- reconstructed from NPEA00385 EBOOT
// STATUS: NOT STARTED (raw Ghidra output)
// 2 functions, 0x1c9528-0x1ca594
#include "game/update/moby1108.h"
#include "game/camera.h"
#include "game/collproc.h"
#include "game/debug.h"
#include "game/draw.h"
#include "game/freeze.h"
#include "game/help.h"
#include "game/hero.h"
#include "game/mobyfunc.h"
#include "game/mobyutil.h"
#include "game/music.h"
#include "game/pause.h"
#include "game/sound.h"
#include "game/space.h"
#include "game/update/camera5.h"
#include "game/update/moby1049.h"
#include "game/update/moby1059.h"
#include "game/update/moby1069.h"
#include "game/update/moby1109.h"
#include "game/update/moby112.h"
#include "game/update/moby1513.h"
#include "game/update/moby829.h"
#include "game/update/moby912.h"
#include "idol/fastfunc.h"

// 0x01c9528 (0x168 bytes)
void M1108_001c9528(int param_1,int param_2)

{
  longlong lVar1;
  int iVar2;
  int iVar3;
  longlong lVar4;
  ulonglong uVar5;
  int iVar6;
  int iVar7;
  
  iVar7 = *(int *)(param_1 + 0x78);
  iVar3 = g_Language + -1 +
          ((uint)(ZERO_MASK(g_Language)) & g_Language - (g_Language + -1));
  if (param_2 < 1) {
    if (param_2 < 0) {
      return;
    }
    iVar7 = *(int *)(iVar7 + iVar3 * 4 + 0x38);
  }
  else if (param_2 < 2) {
    lVar4 = MB_randInt(3);
    iVar6 = 0;
    do {
      iVar2 = (int)(lVar4 << 2);
      if (*(int *)((int)&DAT_00ef1a58 + iVar2) == 0) {
        *(undefined4 *)((int)&DAT_00ef1a58 + iVar2) = 1;
        break;
      }
      lVar1 = (longlong)(int)(lVar4 + 1);
      uVar5 = lVar1 / 3 + (lVar1 >> 0x3f) & 0xffffffff;
      lVar4 = lVar4 + 1 + (uVar5 - ((longlong)(uVar5 << 0x20) >> 0x3f)) * -3;
      if (iVar6 == 2) {
        DAT_00ef1a58 = 0;
        DAT_00ef1a5c = 0;
        DAT_00ef1a60 = 0;
      }
      iVar6 = iVar6 + 1;
    } while (iVar6 < 4);
    iVar7 = *(int *)(iVar7 + (int)(lVar4 << 3) * 3 + iVar3 * 4 + 0x68);
  }
  else {
    if (2 < param_2) {
      return;
    }
    iVar7 = *(int *)(iVar7 + iVar3 * 4 + 0x50);
  }
  if (iVar7 != -1) {
    g_PendingSpeech = iVar7 + 20000;
  }
  return;
}


// 0x01c96c0 (0xed4 bytes)
// inlined: FastAtan2 @0x1c9a34, FastAtan2 @0x1c9bec, FastAtan2 @0x1c9fc0, FastAtan2 @0x1ca178
/* Moby 1108 */

void UpdateMoby_1108(MobyInstance *moby)

{
  u8 uVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  undefined4 *puVar13;
  int iVar14;
  Spline *pSVar15;
  Spline *pSVar16;
  ulonglong *puVar17;
  float fVar18;
  ulonglong uVar19;
  int iVar22;
  longlong lVar20;
  longlong lVar21;
  undefined4 uVar23;
  longlong lVar24;
  float *pfVar26;
  longlong lVar25;
  ulonglong unaff_r28;
  ulonglong unaff_r29;
  ulonglong unaff_r30;
  ulonglong uVar27;
  ulonglong unaff_r31;
  ulonglong in_LR;
  longlong lVar28;
  double dVar29;
  ulonglong in_f31;
  GPiece<16> auVar30;
  GPiece<16> auVar31;
  GPiece<16> auVar32;
  
  uVar19 = ZEXT48(&stack0x00000000);
  lVar21 = uVar19 - 0x1a0;
  puVar17 = (ulonglong *)lVar21;
  *puVar17 = uVar19;
  puVar17[0x36] = in_LR;
  puVar17[0x33] = in_f31;
  puVar17[0x32] = unaff_r31;
  puVar17[0x31] = unaff_r30;
  uVar1 = moby->state;
  puVar13 = (undefined4 *)moby->pVar;
  uVar27 = ZEXT48(puVar13);
  puVar17[0x30] = unaff_r29;
  puVar17[0x2f] = unaff_r28;
  fVar2 = animationSpeed;
  if (uVar1 == '\x05') {
    dVar29 = 1.0;
    if (puVar13[0x2e] == 0x3f800000) {
      HandleHeroDeath();
      g_SceneFlash = 0;
    }
    else {
      iVar22 = FastDecTimerS32(uVar27 + 0xbc);
      if (iVar22 != 0) {
        Delt((float)dVar29,g_FrameTime * 6.0,(float *)(puVar13 + 0x2e));
        g_SceneFlash = puVar13[0x2e];
      }
    }
  }
  else if (uVar1 == '\x04') {
    iVar22 = puVar13[0x2d];
    puVar17[0x2c] = (longlong)(int)(animationSpeed * 1800.5);
    if (iVar22 == *(int *)((int)puVar17 + 0x164)) {
      if (g_SpeechPlaying.status == 3) {
        music_PlayPreseekedSpeech();
      }
    }
    else {
      puVar17[0x2c] = (longlong)(int)(fVar2 * 900.5);
      if (iVar22 == *(int *)((int)puVar17 + 0x164)) {
        M1108_001c9528(moby,2);
      }
      else {
        puVar17[0x2c] = (longlong)(int)(fVar2 * 300.5);
        if ((iVar22 == *(int *)((int)puVar17 + 0x164)) && (g_SpeechPlaying.status == 3)) {
          music_PlayPreseekedSpeech();
        }
      }
    }
    iVar22 = FastDecTimerS32(uVar27 + 0xc0);
    if (iVar22 != 0) {
      sound_LevelPlay(0,0,g_heroMobyPtr);
      dVar29 = (double)MB_randRangeFloat(480.0,600.0);
      uVar23 = FastDoubleToInt((double)(float)(dVar29 * (double)animationSpeed));
      puVar13[0x30] = uVar23;
      auVar30 = ZEXT416(0xffffffff);
      auVar30 = auVar30 | auVar30 << 0x20 | auVar30 << 0x40 | auVar30 << 0x60;
      auVar31 = vectorShiftLeftIntegerWord(auVar30,auVar30);
      GameCamera.offset0.amp = 0.4;
      auVar30 = loadVectorLeftIndexed(0x20,0x1c9690);
      auVar32 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
      auVar30 = auVar30 >> 0x60 & (GPiece<16>)0xffffffff;
      auVar30 = vectorMultiplyAddFloatingPoint
                          (auVar32,auVar30 | auVar30 << 0x20 | auVar30 << 0x40 | auVar30 << 0x60,
                           auVar31);
      auVar30 = vectorConvertToSignedFixedPointWordSaturate(auVar30,0);
      auVar30 = auVar30 >> 0x60 & (GPiece<16>)0xffffffff;
      GameCamera.offset0.total =
           storeVectorElementWordIndexed
                     (auVar30 | auVar30 << 0x20 | auVar30 << 0x40 | auVar30 << 0x60,0x168,0x9513c0);
    }
    if (g_gameMode == GAME_MODE_NORMAL) {
      RegisterFuncForMoby(&PTR_M1109_001ca5d8_00708cd8,moby);
    }
    if (g_heroState == MOVEMENT_LOCKED) {
      moby->state = '\x06';
    }
    else if ((g_gameMode == GAME_MODE_NORMAL) &&
            (iVar22 = FastDecTimerS32(uVar27 + 0xb4), iVar22 != 0)) {
      auVar30 = ZEXT416(0xffffffff);
      auVar30 = auVar30 | auVar30 << 0x20 | auVar30 << 0x40 | auVar30 << 0x60;
      moby->state = '\x05';
      auVar31 = vectorShiftLeftIntegerWord(auVar30,auVar30);
      auVar30 = loadVectorLeftIndexed(0x24,0x1c9690);
      auVar30 = auVar30 >> 0x60 & (GPiece<16>)0xffffffff;
      auVar32 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
      iVar22 = puVar13[0xc];
      auVar30 = vectorMultiplyAddFloatingPoint
                          (auVar32,auVar30 | auVar30 << 0x20 | auVar30 << 0x40 | auVar30 << 0x60,
                           auVar31);
      auVar30 = vectorConvertToSignedFixedPointWordSaturate(auVar30,0);
      auVar30 = auVar30 >> 0x60 & (GPiece<16>)0xffffffff;
      uVar23 = storeVectorElementWordIndexed
                         (auVar30 | auVar30 << 0x20 | auVar30 << 0x40 | auVar30 << 0x60,0xbc,uVar27)
      ;
      *(undefined4 *)((uint)(puVar13 + 0x2f) & 0xfffffffc) = uVar23;
      puVar13[0x2e] = 0;
      FUN_001ce0fc(g_MobyInstance + iVar22);
      sound_LevelPlay(1,0,g_heroMobyPtr);
    }
  }
  else if (uVar1 == '\x03') {
    iVar22 = puVar13[9];
    iVar14 = puVar13[0x2c];
    pSVar15 = Splines[iVar22];
    *(float *)(puVar17 + 0x14) = pSVar15->points[iVar14].x;
    *(float *)((int)puVar17 + 0xa4) = pSVar15->points[iVar14].y;
    pSVar16 = Splines[iVar22];
    *(float *)(puVar17 + 0x15) = pSVar15->points[iVar14].z;
    fVar2 = pSVar15->points[iVar14].w;
    puVar13[0x2c] = iVar14 + 1;
    *(float *)((int)puVar17 + 0xac) = fVar2;
    if (iVar14 + 1 == pSVar16->cnt + -1) {
      moby->state = '\x04';
      M1108_001c9528(moby,1);
      uVar23 = FastDoubleToInt((double)(DAT_007641e0 * animationSpeed));
      puVar13[0x2d] = uVar23;
      Camera_DeactivateMobyDrivenCam(2);
      TransitionMovement(0,1);
      LetterBoxOn = 0;
    }
    else {
      FUN_00290158(puVar13[0xd]);
      iVar22 = puVar13[0x2c] + -0x1e;
      fVar2 = *(float *)(puVar17 + 0x14);
      fVar3 = *(float *)((int)puVar17 + 0xa4);
      pSVar15 = Splines[puVar13[9]];
      iVar22 = iVar22 + (iVar22 >> 0x1f & -iVar22);
      fVar4 = *(float *)((int)pSVar15 + iVar22 * 0x10 + 0x10);
      fVar5 = *(float *)((int)pSVar15 + iVar22 * 0x10 + 0x14);
      fVar9 = fVar4 - fVar2;
      fVar6 = *(float *)((int)pSVar15 + iVar22 * 0x10 + 0x18);
      fVar12 = fVar5 - fVar3;
      fVar7 = 0.0;
      fVar11 = ABS(fVar9);
      fVar8 = ABS(fVar12);
      *(float *)((int)puVar17 + 0xbc) = fVar9;
      *(float *)(puVar17 + 0x18) = fVar12;
      fVar9 = *(float *)(puVar17 + 0x15);
      *(float *)((int)puVar17 + 0xc4) = fVar11 - fVar8;
      *(undefined4 *)((int)puVar17 + 0x9c) = 0;
      *(undefined4 *)(puVar17 + 0x12) = 0;
      uVar27 = (ulonglong)(*(uint *)((int)puVar17 + 0xbc) >> 0x1c) & 8 |
               (ulonglong)(*(uint *)((int)puVar17 + 0xc4) >> 0x1e) & 2 |
               (ulonglong)(*(uint *)(puVar17 + 0x18) >> 0x1d) & 4;
      fVar12 = ABS(*(float *)((int)puVar17 + 0xbc));
      if (*(float *)((int)puVar17 + 0xc4) - 0.0 < 0.0) {
        fVar12 = fVar8;
      }
      fVar10 = *(float *)(&g_atanQuadrantTable + (int)(uVar27 << 2));
      fVar8 = *(float *)(((uint)(uVar27 << 2) | 0x735900) + 4);
      fVar18 = ABS(*(float *)(puVar17 + 0x18));
      if (*(float *)((int)puVar17 + 0xc4) - 0.0 < 0.0) {
        fVar18 = fVar11;
      }
      fVar11 = fVar7;
      if (0.0 < fVar12) {
        lVar20 = uVar19 - 400;
        lVar24 = uVar19 - 0xa0;
        lVar25 = uVar19 - 0x90;
        lVar28 = 2;
        fVar12 = (fVar18 - fVar12) / (fVar18 + fVar12);
        fVar11 = fVar12 * fVar12;
        *(float *)((int)puVar17 + 0x10c) = fVar12;
        *(float *)((int)puVar17 + 0x104) = fVar12;
        *(float *)(puVar17 + 0x21) = fVar12;
        *(float *)(puVar17 + 0x20) = fVar12;
        fVar12 = fVar11 * fVar11;
        *(float *)((int)puVar17 + 0x104) = *(float *)((int)puVar17 + 0x104) * fVar11;
        *(float *)(puVar17 + 0x21) = *(float *)(puVar17 + 0x21) * fVar12;
        *(float *)((int)puVar17 + 0x10c) = *(float *)((int)puVar17 + 0x10c) * fVar12 * fVar11;
        do {
          *(float *)((int)lVar20 + 0x100) = *(float *)((int)lVar20 + 0xf0) * fVar12 * fVar12;
          iVar22 = (int)lVar24;
          lVar20 = lVar20 + 8;
          lVar24 = lVar24 + 8;
          *(float *)((int)lVar25 + 4) = *(float *)(iVar22 + 4) * fVar12 * fVar12;
          lVar25 = lVar25 + 8;
          lVar28 = lVar28 + -1;
        } while (lVar28 != 0);
        lVar28 = 4;
        lVar25 = uVar19 - 0xa0;
        pfVar26 = (float *)&DAT_007358e0;
        lVar20 = lVar21;
        lVar24 = lVar25;
        do {
          fVar12 = *pfVar26;
          fVar11 = pfVar26[1];
          pfVar26 = pfVar26 + 2;
          *(float *)((int)lVar20 + 0x100) = *(float *)((int)lVar20 + 0x100) * fVar12;
          lVar20 = lVar20 + 8;
          *(float *)((int)lVar24 + 4) = *(float *)((int)lVar24 + 4) * fVar11;
          lVar24 = lVar24 + 8;
          lVar28 = lVar28 + -1;
        } while (lVar28 != 0);
        lVar24 = 2;
        lVar20 = lVar21;
        fVar12 = fVar7;
        do {
          iVar22 = (int)lVar20;
          lVar20 = lVar20 + 0x10;
          iVar14 = (int)lVar25;
          lVar25 = lVar25 + 0x10;
          fVar12 = fVar12 + *(float *)(iVar22 + 0x100) + *(float *)(iVar14 + 4) +
                   *(float *)(iVar14 + 8) + *(float *)(iVar14 + 0xc);
          lVar24 = lVar24 + -1;
        } while (lVar24 != 0);
        fVar11 = (fVar12 + 0.7853982) * fVar10 + fVar8;
      }
      fVar3 = fVar3 - fVar5;
      fVar2 = fVar2 - fVar4;
      *(float *)(puVar17 + 0x13) = fVar11;
      fVar6 = fVar6 - fVar9;
      fVar2 = SQRT(fVar2 * fVar2 + fVar3 * fVar3);
      *(float *)((int)puVar17 + 0xb4) = fVar6;
      fVar6 = ABS(fVar6);
      fVar3 = ABS(fVar2);
      *(float *)(puVar17 + 0x16) = fVar2;
      *(float *)(puVar17 + 0x17) = fVar3 - fVar6;
      uVar27 = (ulonglong)(*(uint *)(puVar17 + 0x16) >> 0x1c) & 8 |
               (ulonglong)(*(uint *)(puVar17 + 0x17) >> 0x1e) & 2 |
               (ulonglong)(*(uint *)((int)puVar17 + 0xb4) >> 0x1d) & 4;
      fVar2 = ABS(*(float *)(puVar17 + 0x16));
      if (*(float *)(puVar17 + 0x17) - 0.0 < 0.0) {
        fVar2 = fVar6;
      }
      fVar4 = *(float *)(&g_atanQuadrantTable + (int)(uVar27 << 2));
      fVar5 = ABS(*(float *)((int)puVar17 + 0xb4));
      if (*(float *)(puVar17 + 0x17) - 0.0 < 0.0) {
        fVar5 = fVar3;
      }
      fVar3 = *(float *)(((uint)(uVar27 << 2) | 0x735900) + 4);
      if (0.0 < fVar2) {
        lVar20 = uVar19 - 400;
        lVar24 = uVar19 - 0xc0;
        lVar25 = uVar19 - 0xb0;
        lVar28 = 2;
        fVar2 = (fVar5 - fVar2) / (fVar5 + fVar2);
        fVar5 = fVar2 * fVar2;
        *(float *)((int)puVar17 + 0xec) = fVar2;
        *(float *)((int)puVar17 + 0xe4) = fVar2;
        *(float *)(puVar17 + 0x1d) = fVar2;
        *(float *)(puVar17 + 0x1c) = fVar2;
        fVar2 = fVar5 * fVar5;
        *(float *)((int)puVar17 + 0xe4) = *(float *)((int)puVar17 + 0xe4) * fVar5;
        *(float *)(puVar17 + 0x1d) = *(float *)(puVar17 + 0x1d) * fVar2;
        *(float *)((int)puVar17 + 0xec) = *(float *)((int)puVar17 + 0xec) * fVar2 * fVar5;
        do {
          *(float *)((int)lVar20 + 0xe0) = *(float *)((int)lVar20 + 0xd0) * fVar2 * fVar2;
          iVar22 = (int)lVar24;
          lVar20 = lVar20 + 8;
          lVar24 = lVar24 + 8;
          *(float *)((int)lVar25 + 4) = *(float *)(iVar22 + 4) * fVar2 * fVar2;
          lVar25 = lVar25 + 8;
          lVar28 = lVar28 + -1;
        } while (lVar28 != 0);
        lVar28 = 4;
        lVar25 = uVar19 - 0xc0;
        pfVar26 = (float *)&DAT_007358e0;
        lVar20 = lVar21;
        lVar24 = lVar25;
        do {
          fVar2 = *pfVar26;
          fVar5 = pfVar26[1];
          pfVar26 = pfVar26 + 2;
          *(float *)((int)lVar20 + 0xe0) = *(float *)((int)lVar20 + 0xe0) * fVar2;
          lVar20 = lVar20 + 8;
          *(float *)((int)lVar24 + 4) = *(float *)((int)lVar24 + 4) * fVar5;
          lVar24 = lVar24 + 8;
          lVar28 = lVar28 + -1;
        } while (lVar28 != 0);
        lVar20 = 2;
        do {
          iVar22 = (int)lVar21;
          iVar14 = (int)lVar25;
          lVar21 = lVar21 + 0x10;
          lVar25 = lVar25 + 0x10;
          fVar7 = fVar7 + *(float *)(iVar22 + 0xe0) + *(float *)(iVar14 + 4) +
                  *(float *)(iVar14 + 8) + *(float *)(iVar14 + 0xc);
          lVar20 = lVar20 + -1;
        } while (lVar20 != 0);
        fVar7 = (fVar7 + 0.7853982) * fVar4 + fVar3;
      }
      *(float *)((int)puVar17 + 0x94) = -fVar7;
      Camera_SetMobyDrivenTargetPos((float *)(puVar17 + 0x14));
      Camera_SetMobyDrivenTargetRot((float *)(puVar17 + 0x12));
    }
  }
  else if (uVar1 == '\x02') {
    iVar22 = FUN_001d4cf8(g_MobyInstance + puVar13[0xb]);
    if (iVar22 == 2) {
      moby->state = '\x03';
      puVar13[0x2c] = 1;
      music_SetTransition(6,9);
      if (g_SpeechPlaying.status == 3) {
        music_PlayPreseekedSpeech();
      }
      FUN_001b22f4(puVar13[4]);
      FUN_0047cbc8(puVar13[5]);
      FUN_0047cbc8(puVar13[6]);
      FUN_004ad264(*puVar13);
      FUN_001a1e90(puVar13[1]);
      FUN_001a1e90(puVar13[2]);
      FUN_001a87d8(g_MobyInstance + puVar13[8]);
      Cuboids[puVar13[3]].pos.z = Cuboids[puVar13[3]].pos.z + 10.0;
      iVar22 = puVar13[9];
      pSVar15 = Splines[iVar22];
      fVar2 = pSVar15->points[1].x;
      *(float *)(puVar17 + 0xe) = fVar2;
      fVar3 = pSVar15->points[1].y;
      *(float *)((int)puVar17 + 0x74) = fVar3;
      fVar4 = pSVar15->points[1].z;
      pSVar16 = Splines[iVar22];
      *(float *)(puVar17 + 0xf) = fVar4;
      *(float *)((int)puVar17 + 0x7c) = pSVar15->points[1].w;
      fVar5 = pSVar16->points[0].x;
      fVar6 = pSVar16->points[0].y;
      fVar9 = fVar5 - fVar2;
      fVar12 = fVar6 - fVar3;
      fVar7 = pSVar16->points[0].z;
      fVar11 = 0.0;
      fVar8 = ABS(fVar9);
      fVar10 = ABS(fVar12);
      *(float *)((int)puVar17 + 0xd4) = fVar9;
      *(float *)(puVar17 + 0x1b) = fVar12;
      *(float *)((int)puVar17 + 0xdc) = fVar8 - fVar10;
      *(undefined4 *)((int)puVar17 + 0x8c) = 0;
      *(undefined4 *)(puVar17 + 0x10) = 0;
      uVar27 = (ulonglong)(*(uint *)((int)puVar17 + 0xd4) >> 0x1c) & 8 |
               (ulonglong)(*(uint *)((int)puVar17 + 0xdc) >> 0x1e) & 2 |
               (ulonglong)(*(uint *)(puVar17 + 0x1b) >> 0x1d) & 4;
      fVar9 = ABS(*(float *)((int)puVar17 + 0xd4));
      if (*(float *)((int)puVar17 + 0xdc) - 0.0 < 0.0) {
        fVar9 = fVar10;
      }
      fVar12 = *(float *)(&g_atanQuadrantTable + (int)(uVar27 << 2));
      fVar10 = ABS(*(float *)(puVar17 + 0x1b));
      if (*(float *)((int)puVar17 + 0xdc) - 0.0 < 0.0) {
        fVar10 = fVar8;
      }
      fVar8 = *(float *)(((uint)(uVar27 << 2) | 0x735900) + 4);
      fVar18 = fVar11;
      if (0.0 < fVar9) {
        lVar20 = uVar19 - 400;
        lVar24 = uVar19 - 0x60;
        lVar25 = uVar19 - 0x50;
        lVar28 = 2;
        fVar9 = (fVar10 - fVar9) / (fVar10 + fVar9);
        fVar10 = fVar9 * fVar9;
        *(float *)((int)puVar17 + 0x14c) = fVar9;
        *(float *)((int)puVar17 + 0x144) = fVar9;
        *(float *)(puVar17 + 0x29) = fVar9;
        *(float *)(puVar17 + 0x28) = fVar9;
        fVar9 = fVar10 * fVar10;
        *(float *)((int)puVar17 + 0x144) = *(float *)((int)puVar17 + 0x144) * fVar10;
        *(float *)(puVar17 + 0x29) = *(float *)(puVar17 + 0x29) * fVar9;
        *(float *)((int)puVar17 + 0x14c) = *(float *)((int)puVar17 + 0x14c) * fVar9 * fVar10;
        do {
          *(float *)((int)lVar20 + 0x140) = *(float *)((int)lVar20 + 0x130) * fVar9 * fVar9;
          iVar22 = (int)lVar24;
          lVar20 = lVar20 + 8;
          lVar24 = lVar24 + 8;
          *(float *)((int)lVar25 + 4) = *(float *)(iVar22 + 4) * fVar9 * fVar9;
          lVar25 = lVar25 + 8;
          lVar28 = lVar28 + -1;
        } while (lVar28 != 0);
        lVar28 = 4;
        lVar25 = uVar19 - 0x60;
        pfVar26 = (float *)&DAT_007358e0;
        lVar20 = lVar21;
        lVar24 = lVar25;
        do {
          fVar9 = *pfVar26;
          fVar10 = pfVar26[1];
          pfVar26 = pfVar26 + 2;
          *(float *)((int)lVar20 + 0x140) = *(float *)((int)lVar20 + 0x140) * fVar9;
          lVar20 = lVar20 + 8;
          *(float *)((int)lVar24 + 4) = *(float *)((int)lVar24 + 4) * fVar10;
          lVar24 = lVar24 + 8;
          lVar28 = lVar28 + -1;
        } while (lVar28 != 0);
        lVar24 = 2;
        lVar20 = lVar21;
        fVar9 = fVar11;
        do {
          iVar22 = (int)lVar20;
          lVar20 = lVar20 + 0x10;
          iVar14 = (int)lVar25;
          lVar25 = lVar25 + 0x10;
          fVar9 = fVar9 + *(float *)(iVar22 + 0x140) + *(float *)(iVar14 + 4) +
                  *(float *)(iVar14 + 8) + *(float *)(iVar14 + 0xc);
          lVar24 = lVar24 + -1;
        } while (lVar24 != 0);
        fVar18 = (fVar9 + 0.7853982) * fVar12 + fVar8;
      }
      fVar3 = fVar3 - fVar6;
      fVar2 = fVar2 - fVar5;
      *(float *)(puVar17 + 0x11) = fVar18;
      fVar7 = fVar7 - fVar4;
      fVar2 = SQRT(fVar2 * fVar2 + fVar3 * fVar3);
      *(float *)((int)puVar17 + 0xcc) = fVar7;
      fVar7 = ABS(fVar7);
      fVar3 = ABS(fVar2);
      *(float *)(puVar17 + 0x19) = fVar2;
      *(float *)(puVar17 + 0x1a) = fVar3 - fVar7;
      uVar27 = (ulonglong)(*(uint *)(puVar17 + 0x19) >> 0x1c) & 8 |
               (ulonglong)(*(uint *)(puVar17 + 0x1a) >> 0x1e) & 2 |
               (ulonglong)(*(uint *)((int)puVar17 + 0xcc) >> 0x1d) & 4;
      fVar2 = ABS(*(float *)(puVar17 + 0x19));
      if (*(float *)(puVar17 + 0x1a) - 0.0 < 0.0) {
        fVar2 = fVar7;
      }
      fVar4 = *(float *)(&g_atanQuadrantTable + (int)(uVar27 << 2));
      fVar5 = ABS(*(float *)((int)puVar17 + 0xcc));
      if (*(float *)(puVar17 + 0x1a) - 0.0 < 0.0) {
        fVar5 = fVar3;
      }
      fVar3 = *(float *)(((uint)(uVar27 << 2) | 0x735900) + 4);
      if (0.0 < fVar2) {
        lVar20 = uVar19 - 400;
        lVar24 = uVar19 - 0x80;
        lVar25 = uVar19 - 0x70;
        lVar28 = 2;
        fVar2 = (fVar5 - fVar2) / (fVar5 + fVar2);
        fVar5 = fVar2 * fVar2;
        *(float *)((int)puVar17 + 300) = fVar2;
        *(float *)((int)puVar17 + 0x124) = fVar2;
        *(float *)(puVar17 + 0x25) = fVar2;
        *(float *)(puVar17 + 0x24) = fVar2;
        fVar2 = fVar5 * fVar5;
        *(float *)((int)puVar17 + 0x124) = *(float *)((int)puVar17 + 0x124) * fVar5;
        *(float *)(puVar17 + 0x25) = *(float *)(puVar17 + 0x25) * fVar2;
        *(float *)((int)puVar17 + 300) = *(float *)((int)puVar17 + 300) * fVar2 * fVar5;
        do {
          *(float *)((int)lVar20 + 0x120) = *(float *)((int)lVar20 + 0x110) * fVar2 * fVar2;
          iVar22 = (int)lVar24;
          lVar20 = lVar20 + 8;
          lVar24 = lVar24 + 8;
          *(float *)((int)lVar25 + 4) = *(float *)(iVar22 + 4) * fVar2 * fVar2;
          lVar25 = lVar25 + 8;
          lVar28 = lVar28 + -1;
        } while (lVar28 != 0);
        lVar28 = 4;
        lVar25 = uVar19 - 0x80;
        pfVar26 = (float *)&DAT_007358e0;
        lVar20 = lVar21;
        lVar24 = lVar25;
        do {
          fVar2 = *pfVar26;
          fVar5 = pfVar26[1];
          pfVar26 = pfVar26 + 2;
          *(float *)((int)lVar20 + 0x120) = *(float *)((int)lVar20 + 0x120) * fVar2;
          lVar20 = lVar20 + 8;
          *(float *)((int)lVar24 + 4) = *(float *)((int)lVar24 + 4) * fVar5;
          lVar24 = lVar24 + 8;
          lVar28 = lVar28 + -1;
        } while (lVar28 != 0);
        lVar20 = 2;
        do {
          iVar22 = (int)lVar21;
          iVar14 = (int)lVar25;
          lVar21 = lVar21 + 0x10;
          lVar25 = lVar25 + 0x10;
          fVar11 = fVar11 + *(float *)(iVar22 + 0x120) + *(float *)(iVar14 + 4) +
                   *(float *)(iVar14 + 8) + *(float *)(iVar14 + 0xc);
          lVar20 = lVar20 + -1;
        } while (lVar20 != 0);
        fVar11 = (fVar11 + 0.7853982) * fVar4 + fVar3;
      }
      fVar2 = animationSpeed;
      *(float *)((int)puVar17 + 0x84) = -fVar11;
      puVar17[0x2c] = (longlong)(int)(fVar2 * 300.5);
      SetCameraPosition
                (uVar19 - 0x130,uVar19 - 0x120,2,*(undefined4 *)((int)puVar17 + 0x164),0);
      Camera_SetCurrentAccel
                (DAT_007641d0,DAT_007641d4,DAT_00ef1a50,DAT_007641d8,DAT_007641dc,DAT_00ef1a54);
      Camera_SetMobyDrivenTargetPos((float *)(uVar19 - 0x130));
      Camera_SetMobyDrivenTargetRot((float *)(uVar19 - 0x120));
      Hero_Warp(&Cuboids[puVar13[10]].pos.x,&Cuboids[puVar13[10]].rot.x,0x72,0);
    }
  }
  else if (uVar1 == '\x01') {
    iVar22 = MB_CountActiveMobysByGroup(puVar13[7],0xffffffffffffffff);
    if (iVar22 == 0) {
      FUN_001d4cb0(g_MobyInstance + puVar13[0xb]);
      iVar22 = FUN_001d4cf8(g_MobyInstance + puVar13[0xb]);
      if (iVar22 == 1) {
        moby->state = '\x02';
        M1108_001c9528(moby,0);
      }
    }
  }
  else if (uVar1 == '\0') {
    if (g_LevelFlags[Level][(byte)moby->levelFlagIdx] == '\0') {
      FUN_004ad2bc(*puVar13);
      FUN_001a1e24(puVar13[1]);
      FUN_001a1e24(puVar13[2]);
      moby->state = '\x01';
      moby->updateDistance = -1;
    }
    else {
      DeleteMoby(moby);
    }
  }
  return;
}


