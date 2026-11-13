// game/update/moby1323.cpp -- reconstructed from NPEA00385 EBOOT
// STATUS: NOT STARTED (raw Ghidra output)
// 3 functions, 0x249240-0x249c50
#include <stdio.h>
#include "game/update/moby1323.h"
#include "game/camera.h"
#include "game/collproc.h"
#include "game/draw.h"
#include "game/hero.h"
#include "game/mobyfunc.h"
#include "game/mobyproc.h"
#include "game/mobyutil.h"
#include "game/update.h"
#include "game/update/moby1158.h"
#include "game/water.h"

// 0x0249240 (0x78 bytes)
void M1323_00249240(int param_1)

{
  ushort uVar1;
  MobyInstance *pMVar2;
  int iVar3;
  ushort *puVar4;
  
  puVar4 = (ushort *)(&g_MobyGroups)[*(byte *)(param_1 + 0x21)];
  pMVar2 = g_MobyInstance;
  do {
    iVar3 = (int)(((ulonglong)*puVar4 & 0x7fff) << 8);
    *(undefined4 *)((int)&(pMVar2->pos).z + iVar3) = *(undefined4 *)(param_1 + 0x18);
    pMVar2 = g_MobyInstance;
    *(undefined4 *)
     (&DAT_00f15dc8 + *(int *)(*(int *)((int)&g_MobyInstance->pVar + iVar3) + 0x10) * 0x11a0) =
         *(undefined4 *)(param_1 + 0x18);
    uVar1 = *puVar4;
    puVar4 = puVar4 + 1;
  } while (-1 < (short)uVar1);
  return;
}


// 0x02492c0 (0x1a0 bytes)
void M1323_002492c0(int param_1)

{
  float fVar1;
  float fVar2;
  float *pfVar3;
  float *pfVar4;
  int iVar5;
  int iVar6;
  undefined1 uVar7;
  
  iVar5 = param_1 * 0x11a0;
  pfVar4 = (float *)&DAT_00f15dc0;
  iVar6 = 0;
  pfVar3 = (float *)&DAT_00f15dc4;
  (&DAT_00f15dcc)[iVar5] = 0xff;
  (&DAT_00f15dce)[iVar5] = 0xff;
  (&DAT_00f15dcd)[iVar5] = 0xff;
  (&DAT_00f15dcf)[iVar5] = 0xff;
  (&DAT_00f15dd0)[iVar5] = 0xff;
  (&DAT_00f15dd1)[iVar5] = 0xff;
  (&DAT_00f15dd2)[iVar5] = 0xff;
  (&DAT_00f15dd3)[iVar5] = 0xff;
  do {
    if (param_1 != iVar6) {
      fVar1 = (float)(&DAT_00f15dc0)[param_1 * 0x468] - *pfVar4;
      fVar2 = (float)(&DAT_00f15dc4)[param_1 * 0x468] - *pfVar3;
      uVar7 = (undefined1)iVar6;
      if (0.1 <= ABS(fVar1)) {
        if (0.1 <= ABS(fVar2)) {
          if (0.1 <= ABS(fVar1 + 16.0)) {
            if (ABS(fVar1 - 16.0) < 0.1) {
              if (ABS(fVar2 - 16.0) < 0.1) {
                (&DAT_00f15dd0)[iVar5] = uVar7;
              }
              if (ABS(fVar2 + 16.0) < 0.1) {
                (&DAT_00f15dd2)[iVar5] = uVar7;
              }
            }
          }
          else {
            if (ABS(fVar2 - 16.0) < 0.1) {
              (&DAT_00f15dd1)[iVar5] = uVar7;
            }
            if (ABS(fVar2 + 16.0) < 0.1) {
              (&DAT_00f15dd3)[iVar5] = uVar7;
            }
          }
        }
        else {
          if (ABS(fVar1 - 16.0) < 0.1) {
            (&DAT_00f15dcd)[iVar5] = uVar7;
          }
          if (ABS(fVar1 + 16.0) < 0.1) {
            (&DAT_00f15dcf)[iVar5] = uVar7;
          }
        }
      }
      else {
        if (ABS(fVar2 - 16.0) < 0.1) {
          (&DAT_00f15dcc)[iVar5] = uVar7;
        }
        if (ABS(fVar2 + 16.0) < 0.1) {
          (&DAT_00f15dce)[iVar5] = uVar7;
        }
      }
    }
    iVar6 = iVar6 + 1;
    pfVar4 = pfVar4 + 0x468;
    pfVar3 = pfVar3 + 0x468;
  } while (iVar6 < 0x80);
  return;
}


// 0x0249498 (0x7b8 bytes)
// inlined: FastAtan2 @0x249694
// strings: 00655444: "I'm really sorry, but you can't have more than 128 water tiles in this level"

/* Moby 1323 */

void UpdateMoby_1323(MobyInstance *moby)

{
  u8 uVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  f32 fVar5;
  float fVar6;
  MobyModeBit MVar7;
  ushort uVar8;
  float *pfVar9;
  MobyInstance *pMVar10;
  ulonglong *puVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  int iVar15;
  uint uVar16;
  ulonglong uVar17;
  undefined2 *puVar20;
  ulonglong uVar18;
  longlong lVar19;
  float fVar21;
  ushort *puVar22;
  int iVar23;
  undefined2 uVar24;
  longlong lVar25;
  float *pfVar26;
  longlong lVar27;
  ulonglong unaff_r26;
  ulonglong unaff_r27;
  ulonglong unaff_r28;
  ulonglong unaff_r29;
  ulonglong unaff_r30;
  ulonglong unaff_r31;
  ulonglong in_LR;
  longlong lVar28;
  longlong lVar29;
  ulonglong in_f30;
  ulonglong in_f31;
  double dVar30;
  double dVar31;
  
  uVar17 = ZEXT48(&stack0x00000000);
  lVar19 = uVar17 - 0xe0;
  puVar11 = (ulonglong *)lVar19;
  *puVar11 = uVar17;
  puVar11[0x1e] = in_LR;
  puVar11[0x1a] = in_f30;
  puVar11[0x1b] = in_f31;
  puVar11[0x19] = unaff_r31;
  puVar11[0x18] = unaff_r30;
  uVar1 = moby->state;
  pfVar9 = (float *)moby->pVar;
  puVar11[0x17] = unaff_r29;
  puVar11[0x16] = unaff_r28;
  puVar11[0x15] = unaff_r27;
  puVar11[0x14] = unaff_r26;
  iVar23 = worldUpdateTime;
  if (uVar1 != '\x04') {
    if (uVar1 == '\x03') {
      if (*(int *)pfVar9[5] != worldUpdateTime) {
        *(int *)pfVar9[5] = worldUpdateTime;
        OrganicDelt
                  (pfVar9[6] - *pfVar9,pfVar9[7] * g_FrameTimeSq,pfVar9[8] * g_FrameTimeSq,
                   pfVar9[9] * g_FrameTime,&(moby->pos).z,iVar23,pfVar9 + 3);
        if (moby->group != 0xff) {
          puVar22 = (ushort *)(&g_MobyGroups)[(byte)moby->group];
          pMVar10 = g_MobyInstance;
          do {
            iVar23 = (int)(((ulonglong)*puVar22 & 0x7fff) << 8);
            *(f32 *)((int)&(pMVar10->pos).z + iVar23) = (moby->pos).z;
            pMVar10 = g_MobyInstance;
            *(f32 *)(&DAT_00f15dc8 +
                    *(int *)(*(int *)((int)&g_MobyInstance->pVar + iVar23) + 0x10) * 0x11a0) =
                 (moby->pos).z;
            uVar8 = *puVar22;
            puVar22 = puVar22 + 1;
          } while (-1 < (short)uVar8);
        }
      }
    }
    else if (uVar1 == '\x02') {
      fVar21 = (moby->pos).y - g_heroPosition.y;
      fVar6 = (moby->pos).x - g_heroPosition.x;
      if ((SQRT(fVar6 * fVar6 + fVar21 * fVar21) < 10.0) &&
         (((g_heroStateType == 0x12 || (g_heroStateType == 0x11)) &&
          (CollLine(&g_heroCGPos,&g_heroPosition,0,g_heroMobyPtr,0),
          g_CollOutput.pMoby == moby)))) {
        moby->state = '\x03';
        if (moby->group != -1) {
          MB_SetStateByGroup(moby->group,3);
        }
      }
    }
    else if (uVar1 == '\x01') {
      u_WaterTileCnt = 0.0;
      M1323_002492c0(pfVar9[4]);
      moby->state = '\x02';
    }
    else if (uVar1 == '\0') {
      pfVar9[4] = u_WaterTileCnt;
      u_WaterTileCnt = (float)((int)u_WaterTileCnt + 1);
      if (0x7f < (int)u_WaterTileCnt) {
        printf(
                    "I\'m really sorry, but you can\'t have more than 128 water tiles in this level"
                    );
      }
      MVar7 = moby->modeBits;
      fVar21 = pfVar9[4];
      moby->drawDistance = 0;
      pfVar9[6] = (moby->pos).z;
      moby->modeBits = MVar7 | DISABLED;
      if (fVar21 == 0.0) {
        lVar28 = 0x10;
        puVar20 = &DAT_00f15dde;
        do {
          *puVar20 = 0;
          puVar20[0x8d0] = 0;
          puVar20[0x11a0] = 0;
          puVar20[0x1a70] = 0;
          puVar20[0x2340] = 0;
          puVar20[0x2c10] = 0;
          puVar20[0x34e0] = 0;
          puVar20[0x3db0] = 0;
          puVar20 = puVar20 + 0x4680;
          lVar28 = lVar28 + -1;
        } while (lVar28 != 0);
        WaterTile_InitAll((WaterTile *)&DAT_00f15dc0,0x80);
        WaterWave_ScaleTable(1.0);
        fVar6 = DirectionalLights[0].direction1.x;
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
        uVar16 = (uint)DirectionalLights[0].direction1.y >> 0x1d;
        *(float *)(puVar11 + 0xe) = fVar3 - fVar4;
        fVar21 = 0.0;
        uVar18 = (ulonglong)((uint)fVar6 >> 0x1c) & 8 |
                 (ulonglong)(*(uint *)(puVar11 + 0xe) >> 0x1e) & 2 | (ulonglong)uVar16 & 4;
        fVar6 = *(float *)(&g_atanQuadrantTable + (int)(uVar18 << 2));
        fVar12 = fVar3;
        if (*(float *)(puVar11 + 0xe) - 0.0 < 0.0) {
          fVar12 = fVar4;
        }
        fVar2 = *(float *)(((uint)(uVar18 << 2) | 0x735900) + 4);
        if (*(float *)(puVar11 + 0xe) - 0.0 < 0.0) {
          fVar4 = fVar3;
        }
        if (0.0 < fVar12) {
          lVar28 = uVar17 - 0xd0;
          lVar25 = uVar17 - 0x6c;
          lVar27 = uVar17 - 0x5c;
          lVar29 = 2;
          fVar3 = (fVar4 - fVar12) / (fVar4 + fVar12);
          fVar4 = fVar3 * fVar3;
          *(float *)(puVar11 + 0x10) = fVar3;
          *(float *)(puVar11 + 0xf) = fVar3;
          *(float *)((int)puVar11 + 0x7c) = fVar3;
          *(float *)((int)puVar11 + 0x74) = fVar3;
          fVar3 = fVar4 * fVar4;
          *(float *)(puVar11 + 0xf) = *(float *)(puVar11 + 0xf) * fVar4;
          *(float *)((int)puVar11 + 0x7c) = *(float *)((int)puVar11 + 0x7c) * fVar3;
          *(float *)(puVar11 + 0x10) = *(float *)(puVar11 + 0x10) * fVar3 * fVar4;
          do {
            *(float *)((int)lVar28 + 0x74) = *(float *)((int)lVar28 + 100) * fVar3 * fVar3;
            iVar23 = (int)lVar25;
            lVar28 = lVar28 + 8;
            lVar25 = lVar25 + 8;
            *(float *)((int)lVar27 + 4) = *(float *)(iVar23 + 4) * fVar3 * fVar3;
            lVar27 = lVar27 + 8;
            lVar29 = lVar29 + -1;
          } while (lVar29 != 0);
          lVar29 = 4;
          lVar27 = uVar17 - 0x6c;
          pfVar26 = (float *)&DAT_007358e0;
          lVar28 = lVar19;
          lVar25 = lVar27;
          do {
            fVar3 = *pfVar26;
            fVar4 = pfVar26[1];
            pfVar26 = pfVar26 + 2;
            *(float *)((int)lVar28 + 0x74) = *(float *)((int)lVar28 + 0x74) * fVar3;
            lVar28 = lVar28 + 8;
            *(float *)((int)lVar25 + 4) = *(float *)((int)lVar25 + 4) * fVar4;
            lVar25 = lVar25 + 8;
            lVar29 = lVar29 + -1;
          } while (lVar29 != 0);
          lVar28 = 2;
          do {
            iVar23 = (int)lVar19;
            iVar15 = (int)lVar27;
            lVar19 = lVar19 + 0x10;
            lVar27 = lVar27 + 0x10;
            fVar21 = fVar21 + *(float *)(iVar23 + 0x74) + *(float *)(iVar15 + 4) +
                     *(float *)(iVar15 + 8) + *(float *)(iVar15 + 0xc);
            lVar28 = lVar28 + -1;
          } while (lVar28 != 0);
          fVar21 = (fVar21 + 0.7853982) * fVar6 + fVar2;
        }
        fVar6 = fVar21 + 1.5707963;
        fVar3 = 3.1415925 - fVar21;
        if (fVar21 - (3.1415925 - fVar21) < 0.0) {
          fVar3 = fVar21;
        }
        fVar4 = 3.1415925 - fVar6;
        if (fVar6 - (3.1415925 - fVar6) < 0.0) {
          fVar4 = fVar6;
        }
        fVar12 = -3.1415925 - fVar21;
        if ((-3.1415925 - fVar21) - fVar3 < 0.0) {
          fVar12 = fVar3;
        }
        fVar21 = -3.1415925 - fVar6;
        if ((-3.1415925 - fVar6) - fVar4 < 0.0) {
          fVar21 = fVar4;
        }
        fVar6 = fVar12 * fVar12;
        fVar3 = fVar21 * fVar21;
        fVar13 = fVar6 * fVar6 * fVar12;
        WaterTileConsts.tex0 = (int)pfVar9[1] + 0x28;
        fVar4 = fVar3 * fVar3 * fVar21;
        fVar14 = fVar6 * fVar13;
        WaterTileConsts.lightDir.z = -0.57735;
        WaterTileConsts.tex1 = (int)pfVar9[2] + 0x28;
        fVar2 = fVar3 * fVar4;
        WaterTileConsts.alpha0 = 0x1c;
        WaterTileConsts.alpha1 = 0x40;
        WaterTileConsts.lightDir.y =
             (fVar6 * fVar14 * 2.601887e-06 +
             fVar14 * -0.0001980741 + fVar13 * 0.0083330255 + fVar6 * fVar12 * -0.16666657 + fVar12)
             * 0.57735;
        WaterTileConsts.lightDir.x =
             (fVar3 * fVar2 * 2.601887e-06 +
             fVar2 * -0.0001980741 + fVar4 * 0.0083330255 + fVar3 * fVar21 * -0.16666657 + fVar21) *
             0.57735;
        WaterTiles = (WaterTile *)&DAT_00f15dc0;
        WaterTileBoxes = (WaterTileBox *)&DAT_00f155c0;
        WaterTileCnt = 0x80;
        WaterFogNearDist = 0;
        WaterFogFarDist = 0x47000000;
        WaterFogNearIntensity = 0x437f0000;
        fVar21 = pfVar9[4];
        WaterFogFarIntensity = 0x42400000;
      }
      fVar6 = pfVar9[4];
      (&DAT_00f15dc0)[(int)fVar21 * 0x468] = (moby->pos).x;
      fVar21 = pfVar9[1];
      (&DAT_00f15dc4)[(int)fVar6 * 0x468] = (moby->pos).y;
      fVar5 = (moby->pos).z;
      *(int *)(&DAT_00f15dd4 + (int)fVar6 * 0x11a0) = (int)fVar21 + 0x28;
      *(int *)(&DAT_00f15dd8 + (int)pfVar9[4] * 0x11a0) = (int)pfVar9[2] + 0x28;
      (&DAT_00f15ddc)[(int)pfVar9[4] * 0x11a0] = 0x1c;
      (&DAT_00f15ddd)[(int)pfVar9[4] * 0x11a0] = 0x44;
      *(f32 *)(&DAT_00f15dc8 + (int)fVar6 * 0x11a0) = fVar5;
      fVar21 = pfVar9[4];
      (&DAT_00f15dde)[(int)fVar21 * 0x8d0] = 0xffff;
      WaterTile_CalcGridBSphere
                ((WaterTile *)(&DAT_00f15dc0 + (int)fVar21 * 0x468),
                 (BSphere *)(&DAT_00f155c0 + (int)fVar21 * 0x10));
      moby->state = '\x01';
    }
  }
  if (-1 < (int)pfVar9[4]) {
    dVar30 = 0.0;
    dVar31 = dVar30;
    iVar23 = MB_ScaledVecWrapper(0x4050000000000000,moby);
    if (iVar23 != -1) {
      dVar31 = 1.0;
    }
    uVar24 = 0xffff;
    if (dVar31 == dVar30) {
      uVar24 = 0;
    }
    fVar21 = pfVar9[4];
    (&DAT_00f15dde)[(int)pfVar9[4] * 0x8d0] = uVar24;
    if (fVar21 == 0.0) {
      WaterTile_UpdateWaves((WaterTile *)&DAT_00f15dc0,0x80);
      RegisterFuncForMoby(&PTR_M1324_00249c50_00709e20,moby);
    }
  }
  return;
}


