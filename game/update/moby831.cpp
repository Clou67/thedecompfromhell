// game/update/moby831.cpp -- reconstructed from NPEA00385 EBOOT
// STATUS: NOT STARTED (raw Ghidra output)
// 5 functions, 0x47ebac-0x47ffac
#include "game/update/moby831.h"
#include "game/camera.h"
#include "game/debug.h"
#include "game/draw.h"
#include "game/freeze.h"
#include "game/hero.h"
#include "game/loaders.h"
#include "game/mesh.h"
#include "game/mobyfunc.h"
#include "game/mobyproc.h"
#include "game/mobyutil.h"
#include "game/partproc.h"
#include "game/path.h"
#include "game/respawn.h"
#include "game/sound.h"
#include "game/water.h"
#include "idol/fastfunc.h"

// 0x047ebac (0x15c bytes)
void FUN_0047ebac(MobyInstance *param_1)

{
  byte bVar1;
  ushort uVar2;
  int *piVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  
  piVar3 = (int *)param_1->pVar;
  if (param_1->state == '\x01') {
    bVar1 = param_1->levelFlagIdx;
    uVar2 = param_1->uid;
    (&g_CheckpointLive.objState[0])[(short)uVar2] = bVar1 + 2;
    if ((bVar1 == 0xff) || (((&DAT_00a202c0)[bVar1] != -1 && (g_LevelFlags[Level][bVar1] == -1)))) {
      (&g_Checkpoint.objState[0])[(short)uVar2] = bVar1 + 2;
    }
    param_1->state = '\x02';
    param_1->setByGroup = '\x01';
    param_1->glowRgba = 0x80208020;
    PlayMobySound(0,0,param_1);
    iVar4 = *piVar3;
    if ((iVar4 != -1) && (iVar6 = 0, 0 < Splines[iVar4]->cnt)) {
      iVar5 = 0;
      do {
        if (*(int *)((int)&Splines[iVar4]->points[0].w + iVar5) == piVar3[1]) {
          *(undefined4 *)((int)&Splines[iVar4]->points[0].w + iVar5) = 0;
          iVar4 = *piVar3;
        }
        iVar6 = iVar6 + 1;
        iVar5 = iVar5 + 0x10;
      } while (iVar6 < Splines[iVar4]->cnt);
    }
  }
  return;
}


// 0x047ed08 (0x14 bytes)
void M831_0047ed08(void)

{
  DAT_00877c9c = 0x10000;
  return;
}


// 0x047ed20 (0xbc bytes)
void M831_0047ed20(int param_1)

{
  float fVar1;
  ushort uVar2;
  int iVar3;
  void *pvVar4;
  uint uVar5;
  MobyInstance *pMVar6;
  ushort *puVar7;
  
  iVar3 = *(int *)(param_1 + 0x78);
  puVar7 = (ushort *)(&g_MobyGroups)[*(byte *)(param_1 + 0x21)];
  pMVar6 = g_MobyInstance;
  do {
    uVar5 = *puVar7 & 0x7fff;
    if (pMVar6[uVar5].oClass == WATER_033F) {
      pvVar4 = pMVar6[uVar5].pVar;
      if (*(int *)(iVar3 + 0xc) == 0) {
        if (*(int *)((int)pvVar4 + 4) == *(int *)(iVar3 + 4)) goto LAB_0047ed8c;
        fVar1 = *(float *)((int)pvVar4 + 4) + (*(float *)(param_1 + 0x18) - *(float *)(iVar3 + 4));
      }
      else {
LAB_0047ed8c:
        fVar1 = *(float *)(param_1 + 0x18);
      }
      pMVar6[uVar5].pos.z = fVar1;
      pMVar6 = g_MobyInstance;
      *(f32 *)(&DAT_00877d08 + *(int *)((int)pvVar4 + 0x14) * 0x11a0) = g_MobyInstance[uVar5].pos.z;
    }
    uVar2 = *puVar7;
    puVar7 = puVar7 + 1;
    if ((short)uVar2 < 0) {
      return;
    }
  } while( true );
}


// 0x047ede8 (0x144 bytes)
void M831_0047ede8(int param_1)

{
  float fVar1;
  float fVar2;
  float *pfVar3;
  float *pfVar4;
  int iVar5;
  int iVar6;
  undefined1 uVar7;
  bool bVar8;
  bool bVar9;
  
  iVar5 = param_1 * 0x11a0;
  pfVar4 = (float *)&DAT_00877d00;
  iVar6 = 0;
  pfVar3 = (float *)&DAT_00877d04;
  do {
    if (param_1 != iVar6) {
      fVar1 = (float)(&DAT_00877d00)[param_1 * 0x468] - *pfVar4;
      fVar2 = (float)(&DAT_00877d04)[param_1 * 0x468] - *pfVar3;
      uVar7 = (undefined1)iVar6;
      if (0.1 <= ABS(fVar1)) {
        if (0.1 <= ABS(fVar2)) {
          bVar8 = 0.1 <= ABS(fVar1 - 16.0);
          if (bVar8) {
            bVar9 = ABS(fVar1 + 16.0) < 0.1;
            if (bVar9) {
              if (!bVar8) {
                (&DAT_00877d10)[iVar5] = uVar7;
              }
              if (bVar9) {
                (&DAT_00877d12)[iVar5] = uVar7;
              }
            }
          }
          else {
            if (!bVar8) {
              (&DAT_00877d11)[iVar5] = uVar7;
            }
            if (ABS(fVar1 + 16.0) < 0.1) {
              (&DAT_00877d13)[iVar5] = uVar7;
            }
          }
        }
        else {
          if (ABS(fVar1 - 16.0) < 0.1) {
            (&DAT_00877d0d)[iVar5] = uVar7;
          }
          if (ABS(fVar1 + 16.0) < 0.1) {
            (&DAT_00877d0f)[iVar5] = uVar7;
          }
        }
      }
      else {
        if (ABS(fVar2 - 16.0) < 0.1) {
          (&DAT_00877d0c)[iVar5] = uVar7;
        }
        if (ABS(fVar2 + 16.0) < 0.1) {
          (&DAT_00877d0e)[iVar5] = uVar7;
        }
      }
    }
    iVar6 = iVar6 + 1;
    pfVar4 = pfVar4 + 0x468;
    pfVar3 = pfVar3 + 0x468;
  } while (iVar6 < 0x30);
  return;
}


// 0x047efa0 (0x100c bytes)
// inlined: FastAtan2 @0x47f150
/* Moby 831 */

void UpdateMoby_831(MobyInstance *moby)

{
  u8 uVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float *pfVar6;
  f32 fVar7;
  uint uVar8;
  uint uVar9;
  ulonglong *puVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  int iVar14;
  gameMode_t gVar15;
  ulonglong uVar16;
  ulonglong uVar17;
  longlong lVar18;
  longlong lVar19;
  undefined4 uVar20;
  longlong lVar21;
  undefined2 uVar22;
  longlong lVar23;
  ulonglong unaff_r25;
  BSphere *bounds;
  float *pfVar24;
  ulonglong unaff_r26;
  WaterTile *tile;
  float *pfVar25;
  ulonglong unaff_r27;
  undefined4 *puVar26;
  ulonglong unaff_r28;
  int *piVar27;
  ulonglong unaff_r29;
  int iVar28;
  ulonglong unaff_r30;
  ulonglong uVar29;
  ulonglong unaff_r31;
  ulonglong in_LR;
  longlong lVar30;
  double dVar31;
  double in_f5;
  ulonglong in_f30;
  double dVar32;
  ulonglong in_f31;
  double dVar33;
  double dVar34;
  GPiece<16> auVar35;
  GPiece<16> auVar36;
  GPiece<16> auVar37;
  GPiece<16> auVar38;
  float fVar39;
  
  uVar16 = ZEXT48(&stack0x00000000);
  lVar19 = uVar16 - 0xf0;
  puVar10 = (ulonglong *)lVar19;
  *puVar10 = uVar16;
  puVar10[0x20] = in_LR;
  puVar10[0x1c] = in_f30;
  puVar10[0x1d] = in_f31;
  puVar10[0x1b] = unaff_r31;
  puVar10[0x1a] = unaff_r30;
  gVar15 = g_gameMode;
  pfVar6 = (float *)moby->pVar;
  uVar29 = ZEXT48(pfVar6);
  puVar10[0x19] = unaff_r29;
  puVar10[0x18] = unaff_r28;
  puVar10[0x17] = unaff_r27;
  puVar10[0x16] = unaff_r26;
  puVar10[0x15] = unaff_r25;
  if (gVar15 != GAME_MODE_SCENE) {
    uVar1 = moby->state;
    if (uVar1 == '\b') {
      iVar28 = FastDecTimerS32(uVar29 + 0x18);
      if ((iVar28 != 0) && (DAT_010d9d08 < 5)) {
        DAT_010d9d08 = DAT_010d9d08 + 1;
        auVar35 = ZEXT416(0xffffffff);
        auVar35 = auVar35 | auVar35 << 0x20 | auVar35 << 0x40 | auVar35 << 0x60;
        auVar37 = vectorShiftLeftIntegerWord(auVar35,auVar35);
        auVar35 = loadVectorLeftIndexed((longlong)(DAT_010d9d08 * 4),0x8acb60);
        auVar36 = loadVectorRightIndexed((longlong)(DAT_010d9d08 * 4) + 0x10,0x8acb60);
        auVar36 = vectorConvertFromSignedFixedPointWord(auVar35 | auVar36,0);
        auVar35 = loadVectorLeftIndexed(0x54,0x47ef2c);
        auVar35 = auVar35 >> 0x60 & (GPiece<16>)0xffffffff;
        auVar38 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
        auVar35 = vectorAddFloatingPoint
                            (auVar36,auVar35 | auVar35 << 0x20 | auVar35 << 0x40 | auVar35 << 0x60);
        auVar35 = vectorMultiplyAddFloatingPoint(auVar38,auVar35,auVar37);
        auVar35 = vectorConvertToSignedFixedPointWordSaturate(auVar35,0);
        auVar35 = auVar35 >> 0x60 & (GPiece<16>)0xffffffff;
        uVar20 = storeVectorElementWordIndexed
                           (auVar35 | auVar35 << 0x20 | auVar35 << 0x40 | auVar35 << 0x60,0x18,
                            uVar29);
        *(undefined4 *)((uint)(pfVar6 + 6) & 0xfffffffc) = uVar20;
      }
      (moby->pos).z = (float)(&DAT_008acb78)[DAT_010d9d08] * g_FrameTime + (moby->pos).z;
      M831_0047ed20(moby);
      DAT_010d9d0c = (moby->pos).z;
      if (((SQRT((25.0 - g_heroPosition.z) * (25.0 - g_heroPosition.z) +
                 (211.0 - g_heroPosition.x) * (211.0 - g_heroPosition.x) +
                 (338.0 - g_heroPosition.y) * (338.0 - g_heroPosition.y)) < 6.0) &&
          (DAT_010d9d10 == 0)) &&
         (DAT_010d9d10 = 1, fVar7 = (moby->pos).z, uVar8 = (int)fVar7 >> 0x1f,
         (int)(FLOAT_ORDER(DAT_008acbc0)
              ) < (int)((uVar8 >> 1 ^ (uint)fVar7) - uVar8))) {
        DAT_010d9d08 = 5;
      }
      if (((-1 < (int)pfVar6[4]) && (g_heroState == DEATH_DROWNING)) &&
         (g_heroStateTimer == 2)) {
        DAT_010d9d04 = DAT_010d9d04 + 1;
      }
      fVar7 = (moby->pos).z;
      uVar8 = (int)fVar7 >> 0x1f;
      if (0x422fffff < (int)((uVar8 >> 1 ^ (uint)fVar7) - uVar8)) {
        MB_SetStateByGroup(moby->group,7);
      }
    }
    else if (uVar1 == '\a') {
      if ((int)pfVar6[4] < 0) {
        fVar7 = (moby->pos).z;
        uVar8 = (int)*pfVar6 >> 0x1f;
        uVar9 = (int)fVar7 >> 0x1f;
        if ((int)((uVar8 >> 1 ^ (uint)*pfVar6) - uVar8) < (int)((uVar9 >> 1 ^ (uint)fVar7) - uVar9))
        {
          *(undefined2 *)(&DAT_00877d1e + (int)pfVar6[5] * 0x11a0) = 0;
          DeleteMoby(moby);
          return;
        }
      }
      else if ((g_heroState == DEATH_DROWNING) && (g_heroStateTimer == 2)) {
        DAT_010d9d04 = DAT_010d9d04 + 1;
      }
    }
    else if (uVar1 == '\x03') {
      fVar39 = (moby->pos).y - g_heroPosition.y;
      fVar5 = (moby->pos).x - g_heroPosition.x;
      fVar39 = SQRT(fVar5 * fVar5 + fVar39 * fVar39);
      if (fVar39 < 16.0) {
        fVar7 = (moby->pos).z;
        uVar8 = (int)fVar7 >> 0x1f;
        iVar28 = (uVar8 >> 1 ^ (uint)fVar7) - uVar8;
        if ((((int)(((uint)((int)g_heroPosition.z >> 0x1f) >> 1 ^ (uint)g_heroPosition.z) -
                   ((int)g_heroPosition.z >> 0x1f)) < iVar28) && (g_heroStateType == 0x11)) &&
           ((int)(FLOAT_ORDER(g_heroWaterZ)) < iVar28)) {
          g_heroWaterZ = (moby->pos).z;
        }
      }
      if (((-1 < (int)pfVar6[4]) && (fVar39 < 10.0)) &&
         ((g_standingOnMoby != 0 &&
          ((g_framesNotGrounded == 0 && (*(short *)(g_standingOnMoby + 0xa6) == 0x33e)))))) {
        auVar35 = ZEXT416(0xffffffff);
        auVar35 = auVar35 | auVar35 << 0x20 | auVar35 << 0x40 | auVar35 << 0x60;
        pfVar6[7] = 0.0;
        moby->state = '\b';
        auVar37 = vectorShiftLeftIntegerWord(auVar35,auVar35);
        auVar35 = loadVectorLeftIndexed(0xffffffffffffcb60,0x8b0000);
        DAT_010d9d08 = 0;
        auVar36 = vectorConvertFromSignedFixedPointWord(auVar35,0);
        auVar35 = loadVectorLeftIndexed(0x54,0x47ef2c);
        auVar35 = auVar35 >> 0x60 & (GPiece<16>)0xffffffff;
        auVar35 = vectorAddFloatingPoint
                            (auVar36,auVar35 | auVar35 << 0x20 | auVar35 << 0x40 | auVar35 << 0x60);
        auVar36 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
        auVar35 = vectorMultiplyAddFloatingPoint(auVar36,auVar35,auVar37);
        auVar35 = vectorConvertToSignedFixedPointWordSaturate(auVar35,0);
        auVar35 = auVar35 >> 0x60 & (GPiece<16>)0xffffffff;
        uVar20 = storeVectorElementWordIndexed
                           (auVar35 | auVar35 << 0x20 | auVar35 << 0x40 | auVar35 << 0x60,0x18,
                            uVar29);
        *(undefined4 *)((uint)(pfVar6 + 6) & 0xfffffffc) = uVar20;
      }
      iVar28 = MB_randInt(0x32);
      if (iVar28 == 0) {
        dVar34 = -4.0;
        dVar33 = 4.0;
        dVar31 = (double)MB_randRangeFloat(-4.0,4.0);
        dVar32 = (double)(float)((double)(float)(&DAT_00877d00)[(int)pfVar6[5] * 0x468] + dVar31);
        dVar31 = (double)MB_randRangeFloat((float)dVar34,(float)dVar33);
        WaterTile_PutDrop
                  ((float)dVar32,
                   (float)((double)(float)(&DAT_00877d04)[(int)pfVar6[5] * 0x468] + dVar31),1.0,
                   -0.01,(WaterTile *)(&DAT_00877d00 + (int)pfVar6[5] * 0x468),1,(float)in_f5);
      }
    }
    else if (uVar1 == '\x02') {
      if ((moby->setByGroup & 4U) == 0) {
        if ((-1 < (int)pfVar6[4]) && (g_LevelFlags[Level][(byte)moby->levelFlagIdx] == -1)) {
          moby->state = '\x01';
          (moby->pos).z = *pfVar6;
        }
      }
      else {
        pfVar6[9] = 1.4013e-45;
        MB_SetStateByGroup(moby->group,1);
      }
      if (pfVar6[9] != 0.0) {
        fVar39 = OrganicDelt
                           (pfVar6[1],DAT_008acbc4 * DAT_0071f418,DAT_008acbc4 * DAT_0071f418,
                            DAT_008acbc8 * g_FrameTime,&(moby->pos).z,0x720000,pfVar6 + 8)
        ;
        M831_0047ed20((double)fVar39,moby);
      }
      moby->setByGroup = '\x01';
      iVar28 = MB_randInt(200);
      if (iVar28 == 0) {
        dVar34 = -4.0;
        dVar33 = 4.0;
        dVar31 = (double)MB_randRangeFloat(-4.0,4.0);
        dVar32 = (double)(float)((double)(float)(&DAT_00877d00)[(int)pfVar6[5] * 0x468] + dVar31);
        dVar31 = (double)MB_randRangeFloat((float)dVar34,(float)dVar33);
        WaterTile_PutDrop
                  ((float)dVar32,
                   (float)((double)(float)(&DAT_00877d04)[(int)pfVar6[5] * 0x468] + dVar31),1.0,
                   -0.05,(WaterTile *)(&DAT_00877d00 + (int)pfVar6[5] * 0x468),1,(float)in_f5);
      }
    }
    else if (uVar1 == '\x01') {
      if ((moby->setByGroup & 8U) == 0) {
        moby->setByGroup = '\x02';
      }
      else {
        pfVar6[9] = 1.4013e-45;
        MB_SetStateByGroup(moby->group,2);
      }
      if (pfVar6[9] != 0.0) {
        in_f5 = (double)g_FrameTime;
        OrganicDelt
                  (*pfVar6,DAT_008acbc4 * DAT_0071f418,DAT_008acbc4 * DAT_0071f418,
                   (float)((double)DAT_008acbc8 * in_f5),&(moby->pos).z,0x8b0000,pfVar6 + 8);
        fVar7 = (moby->pos).z;
        fVar39 = (moby->pos).z;
        uVar8 = (int)fVar7 >> 0x1f;
        if ((0.1 < ABS(fVar39 - *pfVar6)) &&
           (((g_heroStateType == 0x11 || (g_heroStateType == 0x12)) &&
            ((int)(FLOAT_ORDER(g_heroWaterZ)) < (int)((uVar8 >> 1 ^ (uint)fVar7) - uVar8)))))
        {
          g_heroWaterZ = fVar39;
        }
        M831_0047ed20(moby);
      }
      iVar28 = MB_randInt(200);
      if (iVar28 == 0) {
        dVar34 = -4.0;
        dVar33 = 4.0;
        dVar31 = (double)MB_randRangeFloat(-4.0,4.0);
        dVar32 = (double)(float)((double)(float)(&DAT_00877d00)[(int)pfVar6[5] * 0x468] + dVar31);
        dVar31 = (double)MB_randRangeFloat((float)dVar34,(float)dVar33);
        WaterTile_PutDrop
                  ((float)dVar32,
                   (float)((double)(float)(&DAT_00877d04)[(int)pfVar6[5] * 0x468] + dVar31),1.0,
                   -0.05,(WaterTile *)(&DAT_00877d00 + (int)pfVar6[5] * 0x468),1,(float)in_f5);
      }
    }
    else if (uVar1 == '\0') {
      if (pfVar6[5] == 0.0) {
        DAT_010d9d08 = 0;
        tile = (WaterTile *)&DAT_00877d00;
        DAT_010d9d0c = (moby->pos).z;
        DAT_010d9d10 = 0;
        WaterTile_InitAll((WaterTile *)&DAT_00877d00,0x30);
        WaterWave_ScaleTable(1.0);
        fVar5 = DirectionalLights[0].direction1.x;
        fVar3 = ABS(DirectionalLights[0].direction1.x);
        fVar4 = ABS(DirectionalLights[0].direction1.y);
        WaterTileConsts.TileSize.x = 16.0;
        WaterTileConsts.TileSize.y = 16.0;
        WaterTileConsts.TileOffset.x = -8.0;
        WaterTileConsts.TileOffset.y = -8.0;
        WaterTileConsts.TileGridSize.x = 1.0;
        WaterTileConsts.TileGridSize.y = 1.0;
        WaterTileConsts.texScale = 0.9;
        WaterTileConsts.waveInc = 0.1;
        uVar8 = (uint)DirectionalLights[0].direction1.y >> 0x1d;
        *(float *)(puVar10 + 0xe) = fVar3 - fVar4;
        fVar39 = 0.0;
        uVar17 = (ulonglong)((uint)fVar5 >> 0x1c) & 8 |
                 (ulonglong)(*(uint *)(puVar10 + 0xe) >> 0x1e) & 2 | (ulonglong)uVar8 & 4;
        fVar5 = *(float *)(&g_atanQuadrantTable + (int)(uVar17 << 2));
        fVar11 = fVar3;
        if (*(float *)(puVar10 + 0xe) - 0.0 < 0.0) {
          fVar11 = fVar4;
        }
        fVar2 = *(float *)(((uint)(uVar17 << 2) | 0x735900) + 4);
        if (*(float *)(puVar10 + 0xe) - 0.0 < 0.0) {
          fVar4 = fVar3;
        }
        if (0.0 < fVar11) {
          lVar18 = uVar16 - 0xe0;
          lVar21 = uVar16 - 0x7c;
          lVar23 = uVar16 - 0x6c;
          lVar30 = 2;
          fVar3 = (fVar4 - fVar11) / (fVar4 + fVar11);
          fVar4 = fVar3 * fVar3;
          *(float *)(puVar10 + 0x10) = fVar3;
          *(float *)(puVar10 + 0xf) = fVar3;
          *(float *)((int)puVar10 + 0x7c) = fVar3;
          *(float *)((int)puVar10 + 0x74) = fVar3;
          fVar3 = fVar4 * fVar4;
          *(float *)(puVar10 + 0xf) = *(float *)(puVar10 + 0xf) * fVar4;
          *(float *)((int)puVar10 + 0x7c) = *(float *)((int)puVar10 + 0x7c) * fVar3;
          *(float *)(puVar10 + 0x10) = *(float *)(puVar10 + 0x10) * fVar3 * fVar4;
          do {
            *(float *)((int)lVar18 + 0x74) = *(float *)((int)lVar18 + 100) * fVar3 * fVar3;
            iVar28 = (int)lVar21;
            lVar18 = lVar18 + 8;
            lVar21 = lVar21 + 8;
            *(float *)((int)lVar23 + 4) = *(float *)(iVar28 + 4) * fVar3 * fVar3;
            lVar23 = lVar23 + 8;
            lVar30 = lVar30 + -1;
          } while (lVar30 != 0);
          lVar30 = 4;
          lVar23 = uVar16 - 0x7c;
          pfVar24 = (float *)&DAT_007358e0;
          lVar18 = lVar19;
          lVar21 = lVar23;
          do {
            fVar3 = *pfVar24;
            fVar4 = pfVar24[1];
            pfVar24 = pfVar24 + 2;
            *(float *)((int)lVar18 + 0x74) = *(float *)((int)lVar18 + 0x74) * fVar3;
            lVar18 = lVar18 + 8;
            *(float *)((int)lVar21 + 4) = *(float *)((int)lVar21 + 4) * fVar4;
            lVar21 = lVar21 + 8;
            lVar30 = lVar30 + -1;
          } while (lVar30 != 0);
          lVar18 = 2;
          do {
            iVar28 = (int)lVar19;
            iVar14 = (int)lVar23;
            lVar19 = lVar19 + 0x10;
            lVar23 = lVar23 + 0x10;
            fVar39 = fVar39 + *(float *)(iVar28 + 0x74) + *(float *)(iVar14 + 4) +
                     *(float *)(iVar14 + 8) + *(float *)(iVar14 + 0xc);
            lVar18 = lVar18 + -1;
          } while (lVar18 != 0);
          fVar39 = (fVar39 + 0.7853982) * fVar5 + fVar2;
        }
        fVar5 = fVar39 + 1.5707963;
        bounds = (BSphere *)&DAT_010d9a00;
        fVar3 = 3.1415925 - fVar39;
        if (fVar39 - (3.1415925 - fVar39) < 0.0) {
          fVar3 = fVar39;
        }
        fVar4 = 3.1415925 - fVar5;
        if (fVar5 - (3.1415925 - fVar5) < 0.0) {
          fVar4 = fVar5;
        }
        fVar11 = -3.1415925 - fVar39;
        if ((-3.1415925 - fVar39) - fVar3 < 0.0) {
          fVar11 = fVar3;
        }
        fVar39 = -3.1415925 - fVar5;
        if ((-3.1415925 - fVar5) - fVar4 < 0.0) {
          fVar39 = fVar4;
        }
        fVar5 = fVar11 * fVar11;
        WaterTileConsts.lightDir.z = -0.57735;
        WaterTileConsts.tex0 = 0x29;
        fVar3 = fVar39 * fVar39;
        WaterTileConsts.tex1 = 0x2a;
        WaterTileConsts.alpha0 = 0x1c;
        WaterTileConsts.alpha1 = 0x40;
        fVar12 = fVar5 * fVar5 * fVar11;
        fVar4 = fVar3 * fVar3 * fVar39;
        fVar13 = fVar5 * fVar12;
        fVar2 = fVar3 * fVar4;
        WaterTileConsts.lightDir.y =
             (fVar5 * fVar13 * 2.601887e-06 +
             fVar13 * -0.0001980741 + fVar12 * 0.0083330255 + fVar5 * fVar11 * -0.16666657 + fVar11)
             * 0.57735;
        WaterTileConsts.lightDir.x =
             (fVar3 * fVar2 * 2.601887e-06 +
             fVar2 * -0.0001980741 + fVar4 * 0.0083330255 + fVar3 * fVar39 * -0.16666657 + fVar39) *
             0.57735;
        WaterTiles = (WaterTile *)&DAT_00877d00;
        WaterTileBoxes = (WaterTileBox *)&DAT_010d9a00;
        WaterTileCnt = 0x30;
        iVar28 = 0;
        WaterFog.r = '\0';
        WaterFog.g = '\v';
        WaterFog.b = '>';
        WaterFogNearDist = 0;
        WaterFogFarDist = 0x46a00000;
        WaterFogNearIntensity = 0x437f0000;
        WaterFogFarIntensity = 0x41d00000;
        do {
          WaterTile_CalcGridBSphere(tile,bounds);
          iVar28 = iVar28 + 1;
          tile = (WaterTile *)&tile[1].ovlTex;
          bounds = bounds + 1;
          *(undefined2 *)(&DAT_00877d1e + (int)pfVar6[5] * 0x11a0) =
               *(undefined2 *)(&DAT_008acb00 + (int)pfVar6[5] * 2);
        } while (iVar28 < 0x30);
        iVar28 = 0;
        do {
          M831_0047ede8(iVar28);
          iVar28 = iVar28 + 1;
        } while (iVar28 < 0x30);
      }
      fVar39 = pfVar6[3];
      moby->drawDistance = 0;
      moby->modeBits = moby->modeBits | DISABLED;
      if (fVar39 == 0.0) {
        if ((int)pfVar6[4] < 0) {
          fVar39 = (moby->pos).z;
          pfVar6[1] = fVar39;
          *pfVar6 = fVar39 + 4.5;
          if (pfVar6[2] == 0.0) {
            moby->state = '\x02';
            (moby->pos).z = pfVar6[1];
          }
          else {
            moby->state = '\x01';
            (moby->pos).z = *pfVar6;
          }
        }
        else {
          moby->state = '\x02';
          (moby->pos).z = pfVar6[1];
        }
      }
      else {
        if ((-1 < (int)pfVar6[4]) && (moby->updateDistance = -1, 1 < DAT_010d9d04)) {
          puVar10[0x13] = (longlong)(DAT_010d9d04 + -1);
          iVar28 = 0;
          piVar27 = &DAT_008acb90;
          puVar26 = &DAT_008acb60;
          pfVar25 = (float *)&DAT_008acba8;
          pfVar24 = (float *)&DAT_008acb78;
          dVar31 = (double)(float)((double)(longlong)puVar10[0x13] * 0.014285714365541935 + 1.0);
          if (1.399999976158142 - dVar31 < 0.0) {
            dVar31 = 1.399999976158142;
          }
          dVar33 = (double)(float)(1.0 / dVar31);
          do {
            puVar10[0x13] = (longlong)*piVar27;
            uVar20 = FastDoubleToInt
                               ((double)(float)((double)(longlong)puVar10[0x13] * dVar31));
            fVar39 = *pfVar25;
            iVar28 = iVar28 + 1;
            *puVar26 = uVar20;
            piVar27 = piVar27 + 1;
            puVar26 = puVar26 + 1;
            pfVar25 = pfVar25 + 1;
            *pfVar24 = (float)((double)fVar39 * dVar33);
            pfVar24 = pfVar24 + 1;
          } while (iVar28 < 6);
        }
        if (g_LevelFlags[Level][(byte)moby->levelFlagIdx] == -1) {
          moby->state = '\a';
          (moby->pos).z = 44.0;
        }
        else {
          auVar35 = ZEXT416(0xffffffff);
          auVar35 = auVar35 | auVar35 << 0x20 | auVar35 << 0x40 | auVar35 << 0x60;
          moby->state = '\x03';
          auVar36 = vectorShiftLeftIntegerWord(auVar35,auVar35);
          auVar35 = loadVectorLeftIndexed(0x34,0x47ef2c);
          auVar35 = auVar35 >> 0x60 & (GPiece<16>)0xffffffff;
          auVar37 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
          fVar39 = pfVar6[1];
          auVar35 = vectorMultiplyAddFloatingPoint
                              (auVar37,auVar35 | auVar35 << 0x20 | auVar35 << 0x40 | auVar35 << 0x60
                               ,auVar36);
          uVar8 = (int)fVar39 >> 0x1f;
          auVar35 = vectorConvertToSignedFixedPointWordSaturate(auVar35,0);
          auVar35 = auVar35 >> 0x60 & (GPiece<16>)0xffffffff;
          uVar20 = storeVectorElementWordIndexed
                             (auVar35 | auVar35 << 0x20 | auVar35 << 0x40 | auVar35 << 0x60,0x18,
                              uVar29);
          *(undefined4 *)((uint)(pfVar6 + 6) & 0xfffffffc) = uVar20;
          fVar7 = (moby->pos).z;
          uVar9 = (int)fVar7 >> 0x1f;
          if ((int)((uVar9 >> 1 ^ (uint)fVar7) - uVar9) < (int)((uVar8 >> 1 ^ (uint)fVar39) - uVar8)
             ) {
            *(undefined2 *)(&DAT_00877d1e + (int)pfVar6[5] * 0x11a0) = 0;
          }
        }
      }
      if (pfVar6[5] == 6.5861e-44) {
        moby->collision = (ushort *)0x0;
      }
    }
    if (-1 < (int)pfVar6[5]) {
      dVar33 = 0.0;
      *(f32 *)(&DAT_00877d08 + (int)pfVar6[5] * 0x11a0) = (moby->pos).z;
      dVar31 = dVar33;
      iVar28 = MB_ScaledVecWrapper(0x4048000000000000,moby);
      if (iVar28 != -1) {
        if (moby->state < 8 && 2 < moby->state) {
          fVar7 = (moby->pos).z;
          uVar8 = (int)fVar7 >> 0x1f;
          uVar9 = (int)pfVar6[1] >> 0x1f;
          iVar28 = (uVar8 >> 1 ^ (uint)fVar7) - uVar8;
          if (((int)((uVar9 >> 1 ^ (uint)pfVar6[1]) - uVar9) < iVar28) &&
             (uVar8 = (int)*pfVar6 >> 0x1f, iVar28 < (int)((uVar8 >> 1 ^ (uint)*pfVar6) - uVar8))) {
            dVar31 = 1.0;
          }
        }
        else {
          dVar31 = 1.0;
        }
      }
      uVar22 = 0;
      if (dVar31 != dVar33) {
        uVar22 = *(undefined2 *)(&DAT_008acb00 + (int)pfVar6[5] * 2);
      }
      fVar39 = pfVar6[5];
      *(undefined2 *)(&DAT_00877d1e + (int)fVar39 * 0x11a0) = uVar22;
      if (fVar39 == 0.0) {
        WaterTile_UpdateWaves((WaterTile *)&DAT_00877d00,0x30);
        RegisterFuncForMoby(&PTR_M832_0047ffac_0070eed0,moby);
        fVar39 = pfVar6[5];
      }
      if (fVar39 == DAT_00877cc0) {
        fVar5 = pfVar6[5];
        uVar22 = (undefined2)DAT_00877cc4;
        *(undefined2 *)(&DAT_00877d1e + (int)fVar39 * 0x11a0) = uVar22;
        *(undefined2 *)(&DAT_008acb00 + (int)fVar5 * 2) = uVar22;
      }
    }
  }
  return;
}


