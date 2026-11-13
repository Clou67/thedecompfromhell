// game/update/moby1158.cpp -- reconstructed from NPEA00385 EBOOT
// STATUS: NOT STARTED (raw Ghidra output)
// 5 functions, 0x1e348c-0x1e40d8
#include <stdio.h>
#include "game/update/moby1158.h"
#include "game/camera.h"
#include "game/collproc.h"
#include "game/draw.h"
#include "game/hero.h"
#include "game/mesh.h"
#include "game/mobyfunc.h"
#include "game/mobyproc.h"
#include "game/mobyutil.h"
#include "game/partproc.h"
#include "game/water.h"

// 0x01e348c (0x14 bytes)
ulonglong FUN_001e348c(int param_1)

{
  return (ulonglong)(LZCOUNT(*(byte *)(param_1 + 0x20) - 5) << 0x20) >> 0x25;
}


// 0x01e34a0 (0x14 bytes)
void M1158_001e34a0(void)

{
  DAT_00764f10 = 0x10000;
  return;
}


// 0x01e34b8 (0x78 bytes)
void M1158_001e34b8(int param_1)

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
     (&DAT_00ef2948 + *(int *)(*(int *)((int)&g_MobyInstance->pVar + iVar3) + 4) * 0x11a0) =
         *(undefined4 *)(param_1 + 0x18);
    uVar1 = *puVar4;
    puVar4 = puVar4 + 1;
  } while (-1 < (short)uVar1);
  return;
}


// 0x01e3538 (0x1a0 bytes)
void M1158_001e3538(int param_1)

{
  float fVar1;
  float fVar2;
  float *pfVar3;
  float *pfVar4;
  int iVar5;
  int iVar6;
  undefined1 uVar7;
  
  iVar5 = param_1 * 0x11a0;
  pfVar4 = (float *)&DAT_00ef2940;
  iVar6 = 0;
  pfVar3 = (float *)&DAT_00ef2944;
  (&DAT_00ef294c)[iVar5] = 0xff;
  (&DAT_00ef294e)[iVar5] = 0xff;
  (&DAT_00ef294d)[iVar5] = 0xff;
  (&DAT_00ef294f)[iVar5] = 0xff;
  (&DAT_00ef2950)[iVar5] = 0xff;
  (&DAT_00ef2951)[iVar5] = 0xff;
  (&DAT_00ef2952)[iVar5] = 0xff;
  (&DAT_00ef2953)[iVar5] = 0xff;
  do {
    if (param_1 != iVar6) {
      fVar1 = (float)(&DAT_00ef2940)[param_1 * 0x468] - *pfVar4;
      fVar2 = (float)(&DAT_00ef2944)[param_1 * 0x468] - *pfVar3;
      uVar7 = (undefined1)iVar6;
      if (0.1 <= ABS(fVar1)) {
        if (0.1 <= ABS(fVar2)) {
          if (0.1 <= ABS(fVar1 + 16.0)) {
            if (ABS(fVar1 - 16.0) < 0.1) {
              if (ABS(fVar2 - 16.0) < 0.1) {
                (&DAT_00ef2950)[iVar5] = uVar7;
              }
              if (ABS(fVar2 + 16.0) < 0.1) {
                (&DAT_00ef2952)[iVar5] = uVar7;
              }
            }
          }
          else {
            if (ABS(fVar2 - 16.0) < 0.1) {
              (&DAT_00ef2951)[iVar5] = uVar7;
            }
            if (ABS(fVar2 + 16.0) < 0.1) {
              (&DAT_00ef2953)[iVar5] = uVar7;
            }
          }
        }
        else {
          if (ABS(fVar1 - 16.0) < 0.1) {
            (&DAT_00ef294d)[iVar5] = uVar7;
          }
          if (ABS(fVar1 + 16.0) < 0.1) {
            (&DAT_00ef294f)[iVar5] = uVar7;
          }
        }
      }
      else {
        if (ABS(fVar2 - 16.0) < 0.1) {
          (&DAT_00ef294c)[iVar5] = uVar7;
        }
        if (ABS(fVar2 + 16.0) < 0.1) {
          (&DAT_00ef294e)[iVar5] = uVar7;
        }
      }
    }
    iVar6 = iVar6 + 1;
    pfVar4 = pfVar4 + 0x468;
    pfVar3 = pfVar3 + 0x468;
  } while (iVar6 < 0x14);
  return;
}


// 0x01e3720 (0x9b8 bytes)
// inlined: FastAtan2 @0x1e399c
// strings: 00654860: "I'm really sorry, but you can't have more than 128 water tiles in this level"

/* Moby 1158 */

void UpdateMoby_1158(MobyInstance *moby)

{
  byte bVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  f32 fVar5;
  float fVar6;
  ushort uVar7;
  float *speed;
  MobyInstance *pMVar8;
  uint uVar9;
  ulonglong *puVar10;
  uint uVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  int iVar15;
  ulonglong uVar16;
  undefined2 *puVar19;
  ulonglong uVar17;
  longlong lVar18;
  ushort *puVar20;
  int iVar21;
  undefined2 uVar22;
  longlong lVar23;
  float *pfVar24;
  longlong lVar25;
  ulonglong unaff_r26;
  ulonglong unaff_r27;
  ulonglong unaff_r28;
  ulonglong unaff_r29;
  float fVar26;
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
  
  uVar16 = ZEXT48(&stack0x00000000);
  lVar18 = uVar16 - 0xe0;
  puVar10 = (ulonglong *)lVar18;
  *puVar10 = uVar16;
  puVar10[0x1e] = in_LR;
  puVar10[0x1a] = in_f30;
  puVar10[0x1b] = in_f31;
  puVar10[0x19] = unaff_r31;
  puVar10[0x18] = unaff_r30;
  speed = (float *)moby->pVar;
  uVar9 = (int)GameCamera.posZ >> 0x1f;
  uVar11 = uVar9 >> 1 ^ (uint)GameCamera.posZ;
  puVar10[0x17] = unaff_r29;
  puVar10[0x16] = unaff_r28;
  puVar10[0x15] = unaff_r27;
  puVar10[0x14] = unaff_r26;
  if ((int)(uVar11 - uVar9) < 0x43340001) {
    DAT_0073a960 = 0;
    DAT_0073a961 = 0x28;
    DAT_0073a963 = 0x40;
    DAT_0073a962 = 0x30;
    WaterFog.g = '(';
    WaterFog.r = '\0';
    WaterFog.b = '0';
  }
  bVar1 = moby->state;
  if (bVar1 < 2) {
    if (bVar1 == 0) {
      moby->updateDistance = -1;
      speed[1] = u_WaterTileCnt;
      u_WaterTileCnt = (float)((int)u_WaterTileCnt + 1);
      if (0x7f < (int)u_WaterTileCnt) {
        printf(
                    "I\'m really sorry, but you can\'t have more than 128 water tiles in this level"
                    );
      }
      moby->updateDistance = -1;
      moby->modeBits = moby->modeBits | DISABLED;
      fVar26 = speed[1];
      moby->scale = moby->pClass->gScale * 2.0;
      if (fVar26 == 0.0) {
        puVar19 = &DAT_00ef295e;
        lVar27 = 5;
        do {
          *puVar19 = 0;
          puVar19[0x8d0] = 0;
          puVar19[0x11a0] = 0;
          puVar19[0x1a70] = 0;
          puVar19 = puVar19 + 0x2340;
          lVar27 = lVar27 + -1;
        } while (lVar27 != 0);
        WaterTile_InitAll((WaterTile *)&DAT_00ef2940,0x14);
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
        uVar9 = (uint)DirectionalLights[0].direction1.y >> 0x1d;
        *(float *)(puVar10 + 0xe) = fVar3 - fVar4;
        fVar26 = 0.0;
        uVar17 = (ulonglong)((uint)fVar6 >> 0x1c) & 8 |
                 (ulonglong)(*(uint *)(puVar10 + 0xe) >> 0x1e) & 2 | (ulonglong)uVar9 & 4;
        fVar6 = *(float *)(&g_atanQuadrantTable + (int)(uVar17 << 2));
        fVar12 = fVar3;
        if (*(float *)(puVar10 + 0xe) - 0.0 < 0.0) {
          fVar12 = fVar4;
        }
        fVar2 = *(float *)(((uint)(uVar17 << 2) | 0x735900) + 4);
        if (*(float *)(puVar10 + 0xe) - 0.0 < 0.0) {
          fVar4 = fVar3;
        }
        if (0.0 < fVar12) {
          lVar27 = uVar16 - 0xd0;
          lVar23 = uVar16 - 0x6c;
          lVar25 = uVar16 - 0x5c;
          lVar28 = 2;
          fVar3 = (fVar4 - fVar12) / (fVar4 + fVar12);
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
            *(float *)((int)lVar27 + 0x74) = *(float *)((int)lVar27 + 100) * fVar3 * fVar3;
            iVar21 = (int)lVar23;
            lVar27 = lVar27 + 8;
            lVar23 = lVar23 + 8;
            *(float *)((int)lVar25 + 4) = *(float *)(iVar21 + 4) * fVar3 * fVar3;
            lVar25 = lVar25 + 8;
            lVar28 = lVar28 + -1;
          } while (lVar28 != 0);
          lVar28 = 4;
          lVar25 = uVar16 - 0x6c;
          pfVar24 = (float *)&DAT_007358e0;
          lVar27 = lVar18;
          lVar23 = lVar25;
          do {
            fVar3 = *pfVar24;
            fVar4 = pfVar24[1];
            pfVar24 = pfVar24 + 2;
            *(float *)((int)lVar27 + 0x74) = *(float *)((int)lVar27 + 0x74) * fVar3;
            lVar27 = lVar27 + 8;
            *(float *)((int)lVar23 + 4) = *(float *)((int)lVar23 + 4) * fVar4;
            lVar23 = lVar23 + 8;
            lVar28 = lVar28 + -1;
          } while (lVar28 != 0);
          lVar27 = 2;
          do {
            iVar21 = (int)lVar18;
            iVar15 = (int)lVar25;
            lVar18 = lVar18 + 0x10;
            lVar25 = lVar25 + 0x10;
            fVar26 = fVar26 + *(float *)(iVar21 + 0x74) + *(float *)(iVar15 + 4) +
                     *(float *)(iVar15 + 8) + *(float *)(iVar15 + 0xc);
            lVar27 = lVar27 + -1;
          } while (lVar27 != 0);
          fVar26 = (fVar26 + 0.7853982) * fVar6 + fVar2;
        }
        fVar6 = fVar26 + 1.5707963;
        fVar3 = 3.1415925 - fVar26;
        if (fVar26 - (3.1415925 - fVar26) < 0.0) {
          fVar3 = fVar26;
        }
        fVar4 = 3.1415925 - fVar6;
        if (fVar6 - (3.1415925 - fVar6) < 0.0) {
          fVar4 = fVar6;
        }
        fVar12 = -3.1415925 - fVar26;
        if ((-3.1415925 - fVar26) - fVar3 < 0.0) {
          fVar12 = fVar3;
        }
        fVar26 = -3.1415925 - fVar6;
        if ((-3.1415925 - fVar6) - fVar4 < 0.0) {
          fVar26 = fVar4;
        }
        fVar6 = fVar12 * fVar12;
        fVar3 = fVar26 * fVar26;
        fVar13 = fVar6 * fVar6 * fVar12;
        fVar4 = fVar3 * fVar3 * fVar26;
        fVar14 = fVar6 * fVar13;
        WaterTileConsts.lightDir.z = -0.57735;
        WaterTileConsts.tex0 = 0x38;
        WaterTileConsts.tex1 = 0x39;
        fVar2 = fVar3 * fVar4;
        WaterTileConsts.alpha0 = 0x1c;
        WaterTileConsts.alpha1 = 0x40;
        WaterTileConsts.lightDir.y =
             (fVar6 * fVar14 * 2.601887e-06 +
             fVar14 * -0.0001980741 + fVar13 * 0.0083330255 + fVar6 * fVar12 * -0.16666657 + fVar12)
             * 0.57735;
        WaterTileConsts.lightDir.x =
             (fVar3 * fVar2 * 2.601887e-06 +
             fVar2 * -0.0001980741 + fVar4 * 0.0083330255 + fVar3 * fVar26 * -0.16666657 + fVar26) *
             0.57735;
        WaterTiles = (WaterTile *)&DAT_00ef2940;
        WaterTileBoxes = (WaterTileBox *)&DAT_00ef2800;
        WaterTileCnt = 0x14;
        WaterFogNearDist = 0;
        WaterFogFarDist = 0x47000000;
        fVar26 = speed[1];
        WaterFogNearIntensity = 0x437f0000;
        WaterFogFarIntensity = 0x42400000;
      }
      fVar6 = speed[1];
      (&DAT_00ef2940)[(int)fVar26 * 0x468] = (moby->pos).x;
      (&DAT_00ef2944)[(int)fVar6 * 0x468] = (moby->pos).y;
      fVar5 = (moby->pos).z;
      *(undefined4 *)(&DAT_00ef2954 + (int)fVar6 * 0x11a0) = 0x38;
      *(undefined4 *)(&DAT_00ef2958 + (int)speed[1] * 0x11a0) = 0x39;
      (&DAT_00ef295c)[(int)speed[1] * 0x11a0] = 0x1c;
      (&DAT_00ef295d)[(int)speed[1] * 0x11a0] = 0x44;
      *(f32 *)(&DAT_00ef2948 + (int)fVar6 * 0x11a0) = fVar5;
      fVar26 = speed[1];
      (&DAT_00ef295e)[(int)fVar26 * 0x8d0] = 0xffff;
      WaterTile_CalcGridBSphere
                ((WaterTile *)(&DAT_00ef2940 + (int)fVar26 * 0x468),
                 (BSphere *)(&DAT_00ef2800 + (int)fVar26 * 0x10));
      moby->state = '\x01';
    }
    else {
      u_WaterTileCnt = 0.0;
      M1158_001e3538(speed[1]);
      moby->state = '\x02';
    }
  }
  else if (bVar1 < 3) {
    if ((moby->setByGroup & 8U) != 0) {
      speed[2] = 1.4013e-45;
      MB_SetStateByGroup(moby->group,3);
    }
    moby->setByGroup = '\x02';
    if (speed[2] != 0.0) {
      OrganicDelt
                (137.0,g_FrameTimeSq * 4.0,g_FrameTimeSq * 4.0,g_FrameTime * 4.0,
                 &(moby->pos).z,0x720000,speed);
      puVar20 = (ushort *)(&g_MobyGroups)[(byte)moby->group];
      pMVar8 = g_MobyInstance;
      do {
        iVar21 = (int)(((ulonglong)*puVar20 & 0x7fff) << 8);
        *(f32 *)((int)&(pMVar8->pos).z + iVar21) = (moby->pos).z;
        pMVar8 = g_MobyInstance;
        *(f32 *)(&DAT_00ef2948 + *(int *)(*(int *)((int)&g_MobyInstance->pVar + iVar21) + 4) * 0x11a0)
             = (moby->pos).z;
        uVar7 = *puVar20;
        puVar20 = puVar20 + 1;
      } while (-1 < (short)uVar7);
    }
    iVar21 = MB_randInt(200);
    if (iVar21 == 0) {
      dVar30 = -4.0;
      dVar31 = 4.0;
      dVar32 = (double)MB_randRangeFloat(-4.0,4.0);
      dVar29 = (double)(float)((double)(float)(&DAT_00ef2940)[(int)speed[1] * 0x468] + dVar32);
      dVar32 = (double)MB_randRangeFloat((float)dVar30,(float)dVar31);
      WaterTile_PutDrop
                ((float)dVar29,
                 (float)((double)(float)(&DAT_00ef2944)[(int)speed[1] * 0x468] + dVar32),1.0,-0.03,
                 (WaterTile *)(&DAT_00ef2940 + (int)speed[1] * 0x468),1,(float)in_f5);
    }
  }
  else if (bVar1 < 4) {
    if ((moby->setByGroup & 4U) != 0) {
      speed[2] = 1.4013e-45;
      MB_SetStateByGroup(moby->group,2);
    }
    moby->setByGroup = '\x01';
    if (speed[2] != 0.0) {
      OrganicDelt
                (132.36,g_FrameTimeSq * 4.0,g_FrameTimeSq * 4.0,g_FrameTime * 4.0,
                 &(moby->pos).z,0x720000,speed);
      puVar20 = (ushort *)(&g_MobyGroups)[(byte)moby->group];
      pMVar8 = g_MobyInstance;
      do {
        iVar21 = (int)(((ulonglong)*puVar20 & 0x7fff) << 8);
        *(f32 *)((int)&(pMVar8->pos).z + iVar21) = (moby->pos).z;
        pMVar8 = g_MobyInstance;
        *(f32 *)(&DAT_00ef2948 + *(int *)(*(int *)((int)&g_MobyInstance->pVar + iVar21) + 4) * 0x11a0)
             = (moby->pos).z;
        uVar7 = *puVar20;
        puVar20 = puVar20 + 1;
      } while (-1 < (short)uVar7);
    }
    iVar21 = MB_randInt(200);
    if (iVar21 == 0) {
      dVar30 = -4.0;
      dVar31 = 4.0;
      dVar32 = (double)MB_randRangeFloat(-4.0,4.0);
      dVar29 = (double)(float)((double)(float)(&DAT_00ef2940)[(int)speed[1] * 0x468] + dVar32);
      dVar32 = (double)MB_randRangeFloat((float)dVar30,(float)dVar31);
      WaterTile_PutDrop
                ((float)dVar29,
                 (float)((double)(float)(&DAT_00ef2944)[(int)speed[1] * 0x468] + dVar32),1.0,-0.03,
                 (WaterTile *)(&DAT_00ef2940 + (int)speed[1] * 0x468),1,(float)in_f5);
    }
  }
  if (-1 < (int)speed[1]) {
    dVar31 = 0.0;
    dVar32 = dVar31;
    iVar21 = MB_ScaledVecWrapper(0x4050000000000000,moby);
    if (iVar21 != -1) {
      dVar32 = 1.0;
    }
    uVar22 = 0xffff;
    if (dVar32 == dVar31) {
      uVar22 = 0;
    }
    fVar26 = speed[1];
    (&DAT_00ef295e)[(int)speed[1] * 0x8d0] = uVar22;
    if (fVar26 == 0.0) {
      WaterTile_UpdateWaves((WaterTile *)&DAT_00ef2940,0x14);
      RegisterFuncForMoby(&PTR_M1159_001e40d8_00709050,moby);
    }
  }
  return;
}


