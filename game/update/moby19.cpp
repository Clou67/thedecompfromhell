// game/update/moby19.cpp -- reconstructed from NPEA00385 EBOOT
// STATUS: NOT STARTED (raw Ghidra output)
// 2 functions, 0x2d1870-0x2d2290
#include <stdio.h>
#include "game/update/moby19.h"
#include "game/camera.h"
#include "game/draw.h"
#include "game/hero.h"
#include "game/mesh.h"
#include "game/mobyfunc.h"
#include "game/mobyproc.h"
#include "game/mobyutil.h"
#include "game/update/moby1158.h"
#include "game/water.h"

// 0x02d1870 (0x1a0 bytes)
void M19_002d1870(int param_1)

{
  float fVar1;
  float fVar2;
  float *pfVar3;
  float *pfVar4;
  int iVar5;
  int iVar6;
  undefined1 uVar7;
  
  iVar5 = param_1 * 0x11a0;
  pfVar4 = (float *)&DAT_010a2440;
  iVar6 = 0;
  pfVar3 = (float *)&DAT_010a2444;
  (&DAT_010a244c)[iVar5] = 0xff;
  (&DAT_010a244e)[iVar5] = 0xff;
  (&DAT_010a244d)[iVar5] = 0xff;
  (&DAT_010a244f)[iVar5] = 0xff;
  (&DAT_010a2450)[iVar5] = 0xff;
  (&DAT_010a2451)[iVar5] = 0xff;
  (&DAT_010a2452)[iVar5] = 0xff;
  (&DAT_010a2453)[iVar5] = 0xff;
  do {
    if (param_1 != iVar6) {
      fVar1 = (float)(&DAT_010a2440)[param_1 * 0x468] - *pfVar4;
      fVar2 = (float)(&DAT_010a2444)[param_1 * 0x468] - *pfVar3;
      uVar7 = (undefined1)iVar6;
      if (0.1 <= ABS(fVar1)) {
        if (0.1 <= ABS(fVar2)) {
          if (0.1 <= ABS(fVar1 + 16.0)) {
            if (ABS(fVar1 - 16.0) < 0.1) {
              if (ABS(fVar2 - 16.0) < 0.1) {
                (&DAT_010a2450)[iVar5] = uVar7;
              }
              if (ABS(fVar2 + 16.0) < 0.1) {
                (&DAT_010a2452)[iVar5] = uVar7;
              }
            }
          }
          else {
            if (ABS(fVar2 - 16.0) < 0.1) {
              (&DAT_010a2451)[iVar5] = uVar7;
            }
            if (ABS(fVar2 + 16.0) < 0.1) {
              (&DAT_010a2453)[iVar5] = uVar7;
            }
          }
        }
        else {
          if (ABS(fVar1 - 16.0) < 0.1) {
            (&DAT_010a244d)[iVar5] = uVar7;
          }
          if (ABS(fVar1 + 16.0) < 0.1) {
            (&DAT_010a244f)[iVar5] = uVar7;
          }
        }
      }
      else {
        if (ABS(fVar2 - 16.0) < 0.1) {
          (&DAT_010a244c)[iVar5] = uVar7;
        }
        if (ABS(fVar2 + 16.0) < 0.1) {
          (&DAT_010a244e)[iVar5] = uVar7;
        }
      }
    }
    iVar6 = iVar6 + 1;
    pfVar4 = pfVar4 + 0x468;
    pfVar3 = pfVar3 + 0x468;
  } while (iVar6 < 0x11);
  return;
}


// 0x02d1a58 (0x838 bytes)
// inlined: FastAtan2 @0x2d1c4c
// strings: 00655be8: "I'm really sorry, but you can't have more than 128 water tiles in this level"

/* Moby 19 */

void UpdateMoby_19(MobyInstance *moby)

{
  byte bVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  f32 fVar6;
  float fVar7;
  ushort uVar8;
  int *piVar9;
  int iVar10;
  MobyInstance *pMVar11;
  ulonglong *puVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  uint uVar16;
  ulonglong uVar17;
  undefined2 *puVar20;
  ulonglong uVar18;
  longlong lVar19;
  ushort *puVar21;
  int iVar22;
  undefined2 uVar23;
  longlong lVar24;
  float *pfVar25;
  longlong lVar26;
  ulonglong unaff_r26;
  ulonglong unaff_r27;
  ulonglong unaff_r28;
  ulonglong unaff_r29;
  ulonglong unaff_r30;
  ulonglong unaff_r31;
  ulonglong in_LR;
  longlong lVar27;
  longlong lVar28;
  double in_f5;
  ulonglong in_f30;
  double dVar29;
  ulonglong in_f31;
  double dVar30;
  double dVar31;
  double dVar32;
  
  uVar17 = ZEXT48(&stack0x00000000);
  lVar19 = uVar17 - 0xe0;
  puVar12 = (ulonglong *)lVar19;
  *puVar12 = uVar17;
  puVar12[0x1e] = in_LR;
  puVar12[0x1a] = in_f30;
  puVar12[0x1b] = in_f31;
  puVar12[0x19] = unaff_r31;
  bVar1 = moby->state;
  puVar12[0x18] = unaff_r30;
  piVar9 = (int *)moby->pVar;
  puVar12[0x17] = unaff_r29;
  puVar12[0x16] = unaff_r28;
  puVar12[0x15] = unaff_r27;
  puVar12[0x14] = unaff_r26;
  if (bVar1 == 0) {
    piVar9[3] = u_WaterTileCnt;
    u_WaterTileCnt = u_WaterTileCnt + 1;
    if (0x7f < u_WaterTileCnt) {
      printf("I\'m really sorry, but you can\'t have more than 128 water tiles in this level")
      ;
    }
    fVar2 = moby->pClass->gScale;
    *piVar9 = 3;
    moby->updateDistance = -1;
    iVar22 = piVar9[3];
    moby->modeBits = moby->modeBits | DISABLED;
    moby->scale = fVar2 * 2.0;
    if (iVar22 == 0) {
      puVar20 = &DAT_010a245e;
      lVar27 = 0x11;
      do {
        *puVar20 = 0;
        puVar20 = puVar20 + 0x8d0;
        lVar27 = lVar27 + -1;
      } while (lVar27 != 0);
      WaterTile_InitAll((WaterTile *)&DAT_010a2440,0x11);
      WaterWave_ScaleTable(1.0);
      fVar7 = DirectionalLights[0].direction1.x;
      fVar4 = ABS(DirectionalLights[0].direction1.x);
      fVar5 = ABS(DirectionalLights[0].direction1.y);
      WaterTileConsts.TileSize.x = 16.0;
      WaterTileConsts.TileSize.y = 16.0;
      WaterTileConsts.TileOffset.x = -8.0;
      WaterTileConsts.TileOffset.y = -8.0;
      WaterTileConsts.TileGridSize.x = 1.0;
      WaterTileConsts.TileGridSize.y = 1.0;
      WaterTileConsts.texScale = 0.9;
      WaterTileConsts.waveInc = 0.1;
      uVar16 = (uint)DirectionalLights[0].direction1.y >> 0x1d;
      *(float *)(puVar12 + 0xe) = fVar4 - fVar5;
      fVar2 = 0.0;
      uVar18 = (ulonglong)((uint)fVar7 >> 0x1c) & 8 |
               (ulonglong)(*(uint *)(puVar12 + 0xe) >> 0x1e) & 2 | (ulonglong)uVar16 & 4;
      fVar7 = *(float *)(&g_atanQuadrantTable + (int)(uVar18 << 2));
      fVar13 = fVar4;
      if (*(float *)(puVar12 + 0xe) - 0.0 < 0.0) {
        fVar13 = fVar5;
      }
      fVar3 = *(float *)(((uint)(uVar18 << 2) | 0x735900) + 4);
      if (*(float *)(puVar12 + 0xe) - 0.0 < 0.0) {
        fVar5 = fVar4;
      }
      if (0.0 < fVar13) {
        lVar27 = uVar17 - 0xd0;
        lVar24 = uVar17 - 0x6c;
        lVar26 = uVar17 - 0x5c;
        lVar28 = 2;
        fVar4 = (fVar5 - fVar13) / (fVar5 + fVar13);
        fVar5 = fVar4 * fVar4;
        *(float *)(puVar12 + 0x10) = fVar4;
        *(float *)(puVar12 + 0xf) = fVar4;
        *(float *)((int)puVar12 + 0x7c) = fVar4;
        *(float *)((int)puVar12 + 0x74) = fVar4;
        fVar4 = fVar5 * fVar5;
        *(float *)(puVar12 + 0xf) = *(float *)(puVar12 + 0xf) * fVar5;
        *(float *)((int)puVar12 + 0x7c) = *(float *)((int)puVar12 + 0x7c) * fVar4;
        *(float *)(puVar12 + 0x10) = *(float *)(puVar12 + 0x10) * fVar4 * fVar5;
        do {
          *(float *)((int)lVar27 + 0x74) = *(float *)((int)lVar27 + 100) * fVar4 * fVar4;
          iVar22 = (int)lVar24;
          lVar27 = lVar27 + 8;
          lVar24 = lVar24 + 8;
          *(float *)((int)lVar26 + 4) = *(float *)(iVar22 + 4) * fVar4 * fVar4;
          lVar26 = lVar26 + 8;
          lVar28 = lVar28 + -1;
        } while (lVar28 != 0);
        lVar28 = 4;
        lVar26 = uVar17 - 0x6c;
        pfVar25 = (float *)&DAT_007358e0;
        lVar27 = lVar19;
        lVar24 = lVar26;
        do {
          fVar4 = *pfVar25;
          fVar5 = pfVar25[1];
          pfVar25 = pfVar25 + 2;
          *(float *)((int)lVar27 + 0x74) = *(float *)((int)lVar27 + 0x74) * fVar4;
          lVar27 = lVar27 + 8;
          *(float *)((int)lVar24 + 4) = *(float *)((int)lVar24 + 4) * fVar5;
          lVar24 = lVar24 + 8;
          lVar28 = lVar28 + -1;
        } while (lVar28 != 0);
        lVar27 = 2;
        do {
          iVar22 = (int)lVar19;
          iVar10 = (int)lVar26;
          lVar19 = lVar19 + 0x10;
          lVar26 = lVar26 + 0x10;
          fVar2 = fVar2 + *(float *)(iVar22 + 0x74) + *(float *)(iVar10 + 4) +
                  *(float *)(iVar10 + 8) + *(float *)(iVar10 + 0xc);
          lVar27 = lVar27 + -1;
        } while (lVar27 != 0);
        fVar2 = (fVar2 + 0.7853982) * fVar7 + fVar3;
      }
      fVar7 = fVar2 + 1.5707963;
      fVar4 = 3.1415925 - fVar2;
      if (fVar2 - (3.1415925 - fVar2) < 0.0) {
        fVar4 = fVar2;
      }
      fVar5 = 3.1415925 - fVar7;
      if (fVar7 - (3.1415925 - fVar7) < 0.0) {
        fVar5 = fVar7;
      }
      fVar13 = -3.1415925 - fVar2;
      if ((-3.1415925 - fVar2) - fVar4 < 0.0) {
        fVar13 = fVar4;
      }
      fVar2 = -3.1415925 - fVar7;
      if ((-3.1415925 - fVar7) - fVar5 < 0.0) {
        fVar2 = fVar5;
      }
      fVar7 = fVar13 * fVar13;
      fVar4 = fVar2 * fVar2;
      fVar14 = fVar7 * fVar7 * fVar13;
      WaterTileConsts.tex0 = *piVar9 + 0x28;
      fVar5 = fVar4 * fVar4 * fVar2;
      fVar15 = fVar7 * fVar14;
      WaterTileConsts.lightDir.z = -0.57735;
      WaterTileConsts.tex1 = piVar9[1] + 0x28;
      fVar3 = fVar4 * fVar5;
      WaterTileConsts.alpha0 = 0x1c;
      WaterTileConsts.alpha1 = 0x40;
      WaterTileConsts.lightDir.y =
           (fVar7 * fVar15 * 2.601887e-06 +
           fVar15 * -0.0001980741 + fVar14 * 0.0083330255 + fVar7 * fVar13 * -0.16666657 + fVar13) *
           0.57735;
      WaterTileConsts.lightDir.x =
           (fVar4 * fVar3 * 2.601887e-06 +
           fVar3 * -0.0001980741 + fVar5 * 0.0083330255 + fVar4 * fVar2 * -0.16666657 + fVar2) *
           0.57735;
      WaterTiles = (WaterTile *)&DAT_010a2440;
      WaterTileBoxes = (WaterTileBox *)&DAT_010a2300;
      WaterTileCnt = 0x11;
      WaterFogNearDist = 0;
      WaterFogFarDist = 0x47000000;
      WaterFogNearIntensity = 0x437f0000;
      iVar22 = piVar9[3];
      WaterFogFarIntensity = 0x42400000;
    }
    iVar10 = piVar9[3];
    (&DAT_010a2440)[iVar22 * 0x468] = (moby->pos).x;
    iVar22 = *piVar9;
    (&DAT_010a2444)[iVar10 * 0x468] = (moby->pos).y;
    fVar6 = (moby->pos).z;
    *(int *)(&DAT_010a2454 + iVar10 * 0x11a0) = iVar22 + 0x28;
    *(int *)(&DAT_010a2458 + piVar9[3] * 0x11a0) = piVar9[1] + 0x28;
    (&DAT_010a245c)[piVar9[3] * 0x11a0] = 0x1c;
    (&DAT_010a245d)[piVar9[3] * 0x11a0] = 0x44;
    *(f32 *)(&DAT_010a2448 + iVar10 * 0x11a0) = fVar6;
    iVar22 = piVar9[3];
    (&DAT_010a245e)[iVar22 * 0x8d0] = 0xffff;
    WaterTile_CalcGridBSphere
              ((WaterTile *)(&DAT_010a2440 + iVar22 * 0x468),
               (BSphere *)(&DAT_010a2300 + iVar22 * 0x10));
    moby->state = '\x01';
  }
  else if (bVar1 < 2) {
    u_WaterTileCnt = 0;
    M19_002d1870(piVar9[3]);
    fVar6 = (moby->pos).z;
    moby->state = '\x02';
    piVar9[4] = (int)fVar6;
  }
  else if (bVar1 < 3) {
    if ((moby->setByGroup & 4U) != 0) {
      piVar9[5] = 1;
      piVar9[4] = (int)((float)piVar9[4] + 5.0);
    }
    moby->setByGroup = '\x01';
    if (piVar9[5] != 0) {
      OrganicDelt
                ((float)piVar9[4],g_FrameTimeSq * 4.0,g_FrameTimeSq * 4.0,g_FrameTime * 4.0,
                 &(moby->pos).z,0x720000,(float *)(piVar9 + 2));
      puVar21 = (ushort *)(&g_MobyGroups)[(byte)moby->group];
      pMVar11 = g_MobyInstance;
      do {
        iVar22 = (int)(((ulonglong)*puVar21 & 0x7fff) << 8);
        *(f32 *)((int)&(pMVar11->pos).z + iVar22) = (moby->pos).z;
        pMVar11 = g_MobyInstance;
        *(f32 *)(&DAT_010a2448 +
                *(int *)(*(int *)((int)&g_MobyInstance->pVar + iVar22) + 0xc) * 0x11a0) =
             (moby->pos).z;
        uVar8 = *puVar21;
        puVar21 = puVar21 + 1;
      } while (-1 < (short)uVar8);
    }
    if ((ABS(g_heroPosition.x - (moby->pos).x) <= 8.0) ||
       (ABS(g_heroPosition.y - (moby->pos).y) <= 8.0)) {
      g_heroWaterZ = (moby->pos).z;
    }
    iVar22 = MB_randInt(200);
    if (iVar22 == 0) {
      dVar30 = -4.0;
      dVar31 = 4.0;
      dVar32 = (double)MB_randRangeFloat(-4.0,4.0);
      dVar29 = (double)(float)((double)(float)(&DAT_010a2440)[piVar9[3] * 0x468] + dVar32);
      dVar32 = (double)MB_randRangeFloat((float)dVar30,(float)dVar31);
      WaterTile_PutDrop
                ((float)dVar29,(float)((double)(float)(&DAT_010a2444)[piVar9[3] * 0x468] + dVar32),
                 1.0,-0.05,(WaterTile *)(&DAT_010a2440 + piVar9[3] * 0x468),1,(float)in_f5);
    }
  }
  if (-1 < piVar9[3]) {
    dVar31 = 0.0;
    dVar32 = dVar31;
    iVar22 = MB_ScaledVecWrapper(0x4050000000000000,moby);
    if (iVar22 != -1) {
      dVar32 = 1.0;
    }
    if ((piVar9[6] != -1) &&
       (iVar22 = MB_IsPntInCuboid((Vec4 *)&GameCamera.posX,(longlong)piVar9[6]),
       iVar22 == 0)) {
      dVar32 = dVar31;
    }
    uVar23 = 0xffff;
    if (dVar32 == dVar31) {
      uVar23 = 0;
    }
    iVar22 = piVar9[3];
    (&DAT_010a245e)[iVar22 * 0x8d0] = uVar23;
    if (iVar22 == 0) {
      WaterTile_UpdateWaves((WaterTile *)&DAT_010a2440,0x11);
      RegisterFuncForMoby(&PTR_M190_002d2290_0070b2d8,moby);
    }
  }
  return;
}


