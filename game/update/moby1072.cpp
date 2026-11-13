// game/update/moby1072.cpp -- reconstructed from NPEA00385 EBOOT
// STATUS: NOT STARTED (raw Ghidra output)
// 4 functions, 0x1b4100-0x1b4cdc
#include <stdio.h>
#include "game/update/moby1072.h"
#include "game/camera.h"
#include "game/collproc.h"
#include "game/draw.h"
#include "game/hero.h"
#include "game/mobyfunc.h"
#include "game/mobyproc.h"
#include "game/mobyutil.h"
#include "game/update/moby1158.h"
#include "game/water.h"

// 0x01b4100 (0x14 bytes)
void M1072_001b4100(void)

{
  DAT_00757db8 = 0x10000;
  return;
}


// 0x01b4118 (0x78 bytes)
void M1072_001b4118(int param_1)

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
     (&DAT_00e62848 + *(int *)(*(int *)((int)&g_MobyInstance->pVar + iVar3) + 0x18) * 0x11a0) =
         *(undefined4 *)(param_1 + 0x18);
    uVar1 = *puVar4;
    puVar4 = puVar4 + 1;
  } while (-1 < (short)uVar1);
  return;
}


// 0x01b4198 (0x1a0 bytes)
void M1072_001b4198(int param_1)

{
  float fVar1;
  float fVar2;
  float *pfVar3;
  float *pfVar4;
  int iVar5;
  int iVar6;
  undefined1 uVar7;
  
  iVar5 = param_1 * 0x11a0;
  pfVar4 = (float *)&DAT_00e62840;
  iVar6 = 0;
  pfVar3 = (float *)&DAT_00e62844;
  (&DAT_00e6284c)[iVar5] = 0xff;
  (&DAT_00e6284e)[iVar5] = 0xff;
  (&DAT_00e6284d)[iVar5] = 0xff;
  (&DAT_00e6284f)[iVar5] = 0xff;
  (&DAT_00e62850)[iVar5] = 0xff;
  (&DAT_00e62851)[iVar5] = 0xff;
  (&DAT_00e62852)[iVar5] = 0xff;
  (&DAT_00e62853)[iVar5] = 0xff;
  do {
    if (param_1 != iVar6) {
      fVar1 = (float)(&DAT_00e62840)[param_1 * 0x468] - *pfVar4;
      fVar2 = (float)(&DAT_00e62844)[param_1 * 0x468] - *pfVar3;
      uVar7 = (undefined1)iVar6;
      if (0.1 <= ABS(fVar1)) {
        if (0.1 <= ABS(fVar2)) {
          if (0.1 <= ABS(fVar1 + 16.0)) {
            if (ABS(fVar1 - 16.0) < 0.1) {
              if (ABS(fVar2 - 16.0) < 0.1) {
                (&DAT_00e62850)[iVar5] = uVar7;
              }
              if (ABS(fVar2 + 16.0) < 0.1) {
                (&DAT_00e62852)[iVar5] = uVar7;
              }
            }
          }
          else {
            if (ABS(fVar2 - 16.0) < 0.1) {
              (&DAT_00e62851)[iVar5] = uVar7;
            }
            if (ABS(fVar2 + 16.0) < 0.1) {
              (&DAT_00e62853)[iVar5] = uVar7;
            }
          }
        }
        else {
          if (ABS(fVar1 - 16.0) < 0.1) {
            (&DAT_00e6284d)[iVar5] = uVar7;
          }
          if (ABS(fVar1 + 16.0) < 0.1) {
            (&DAT_00e6284f)[iVar5] = uVar7;
          }
        }
      }
      else {
        if (ABS(fVar2 - 16.0) < 0.1) {
          (&DAT_00e6284c)[iVar5] = uVar7;
        }
        if (ABS(fVar2 + 16.0) < 0.1) {
          (&DAT_00e6284e)[iVar5] = uVar7;
        }
      }
    }
    iVar6 = iVar6 + 1;
    pfVar4 = pfVar4 + 0x468;
    pfVar3 = pfVar3 + 0x468;
  } while (iVar6 < 0x80);
  return;
}


// 0x01b4378 (0x964 bytes)
// inlined: FastAtan2 @0x1b4574
// strings: 006545ac: "I'm really sorry, but you can't have more than 128 water tiles in this level"

/* Moby 1072 */

void UpdateMoby_1072(MobyInstance *moby)

{
  byte bVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  f32 fVar5;
  float fVar6;
  ushort uVar7;
  float *pfVar8;
  MobyInstance *pMVar9;
  ulonglong *puVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  int iVar14;
  uint uVar15;
  ulonglong uVar16;
  undefined2 *puVar19;
  ulonglong uVar17;
  longlong lVar18;
  float fVar20;
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
  
  uVar16 = ZEXT48(&stack0x00000000);
  lVar18 = uVar16 - 0xe0;
  puVar10 = (ulonglong *)lVar18;
  *puVar10 = uVar16;
  puVar10[0x1e] = in_LR;
  puVar10[0x1a] = in_f30;
  puVar10[0x1b] = in_f31;
  puVar10[0x19] = unaff_r31;
  puVar10[0x18] = unaff_r30;
  bVar1 = moby->state;
  pfVar8 = (float *)moby->pVar;
  puVar10[0x17] = unaff_r29;
  puVar10[0x16] = unaff_r28;
  puVar10[0x15] = unaff_r27;
  puVar10[0x14] = unaff_r26;
  if (bVar1 < 2) {
    if (bVar1 == 0) {
      pfVar8[6] = u_WaterTileCnt;
      u_WaterTileCnt = (float)((int)u_WaterTileCnt + 1);
      if (0x7f < (int)u_WaterTileCnt) {
        printf(
                    "I\'m really sorry, but you can\'t have more than 128 water tiles in this level"
                    );
      }
      fVar20 = pfVar8[6];
      moby->drawDistance = 0;
      moby->modeBits = moby->modeBits | DISABLED;
      if (fVar20 == 0.0) {
        lVar27 = 0x10;
        puVar19 = &DAT_00e6285e;
        do {
          *puVar19 = 0;
          puVar19[0x8d0] = 0;
          puVar19[0x11a0] = 0;
          puVar19[0x1a70] = 0;
          puVar19[0x2340] = 0;
          puVar19[0x2c10] = 0;
          puVar19[0x34e0] = 0;
          puVar19[0x3db0] = 0;
          puVar19 = puVar19 + 0x4680;
          lVar27 = lVar27 + -1;
        } while (lVar27 != 0);
        WaterTile_InitAll((WaterTile *)&DAT_00e62840,0x80);
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
        uVar15 = (uint)DirectionalLights[0].direction1.y >> 0x1d;
        *(float *)(puVar10 + 0xe) = fVar3 - fVar4;
        fVar20 = 0.0;
        uVar17 = (ulonglong)((uint)fVar6 >> 0x1c) & 8 |
                 (ulonglong)(*(uint *)(puVar10 + 0xe) >> 0x1e) & 2 | (ulonglong)uVar15 & 4;
        fVar6 = *(float *)(&g_atanQuadrantTable + (int)(uVar17 << 2));
        fVar11 = fVar3;
        if (*(float *)(puVar10 + 0xe) - 0.0 < 0.0) {
          fVar11 = fVar4;
        }
        fVar2 = *(float *)(((uint)(uVar17 << 2) | 0x735900) + 4);
        if (*(float *)(puVar10 + 0xe) - 0.0 < 0.0) {
          fVar4 = fVar3;
        }
        if (0.0 < fVar11) {
          lVar27 = uVar16 - 0xd0;
          lVar24 = uVar16 - 0x6c;
          lVar26 = uVar16 - 0x5c;
          lVar28 = 2;
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
            *(float *)((int)lVar27 + 0x74) = *(float *)((int)lVar27 + 100) * fVar3 * fVar3;
            iVar22 = (int)lVar24;
            lVar27 = lVar27 + 8;
            lVar24 = lVar24 + 8;
            *(float *)((int)lVar26 + 4) = *(float *)(iVar22 + 4) * fVar3 * fVar3;
            lVar26 = lVar26 + 8;
            lVar28 = lVar28 + -1;
          } while (lVar28 != 0);
          lVar28 = 4;
          lVar26 = uVar16 - 0x6c;
          pfVar25 = (float *)&DAT_007358e0;
          lVar27 = lVar18;
          lVar24 = lVar26;
          do {
            fVar3 = *pfVar25;
            fVar4 = pfVar25[1];
            pfVar25 = pfVar25 + 2;
            *(float *)((int)lVar27 + 0x74) = *(float *)((int)lVar27 + 0x74) * fVar3;
            lVar27 = lVar27 + 8;
            *(float *)((int)lVar24 + 4) = *(float *)((int)lVar24 + 4) * fVar4;
            lVar24 = lVar24 + 8;
            lVar28 = lVar28 + -1;
          } while (lVar28 != 0);
          lVar27 = 2;
          do {
            iVar22 = (int)lVar18;
            iVar14 = (int)lVar26;
            lVar18 = lVar18 + 0x10;
            lVar26 = lVar26 + 0x10;
            fVar20 = fVar20 + *(float *)(iVar22 + 0x74) + *(float *)(iVar14 + 4) +
                     *(float *)(iVar14 + 8) + *(float *)(iVar14 + 0xc);
            lVar27 = lVar27 + -1;
          } while (lVar27 != 0);
          fVar20 = (fVar20 + 0.7853982) * fVar6 + fVar2;
        }
        fVar6 = fVar20 + 1.5707963;
        fVar3 = 3.1415925 - fVar20;
        if (fVar20 - (3.1415925 - fVar20) < 0.0) {
          fVar3 = fVar20;
        }
        fVar4 = 3.1415925 - fVar6;
        if (fVar6 - (3.1415925 - fVar6) < 0.0) {
          fVar4 = fVar6;
        }
        fVar11 = -3.1415925 - fVar20;
        if ((-3.1415925 - fVar20) - fVar3 < 0.0) {
          fVar11 = fVar3;
        }
        fVar20 = -3.1415925 - fVar6;
        if ((-3.1415925 - fVar6) - fVar4 < 0.0) {
          fVar20 = fVar4;
        }
        fVar6 = fVar11 * fVar11;
        fVar3 = fVar20 * fVar20;
        fVar12 = fVar6 * fVar6 * fVar11;
        WaterTileConsts.tex0 = (int)pfVar8[3] + 0x28;
        fVar4 = fVar3 * fVar3 * fVar20;
        fVar13 = fVar6 * fVar12;
        WaterTileConsts.lightDir.z = -0.57735;
        WaterTileConsts.tex1 = (int)pfVar8[4] + 0x28;
        fVar2 = fVar3 * fVar4;
        WaterTileConsts.alpha0 = 0x1c;
        WaterTileConsts.alpha1 = 0x40;
        WaterTileConsts.lightDir.y =
             (fVar6 * fVar13 * 2.601887e-06 +
             fVar13 * -0.0001980741 + fVar12 * 0.0083330255 + fVar6 * fVar11 * -0.16666657 + fVar11)
             * 0.57735;
        WaterTileConsts.lightDir.x =
             (fVar3 * fVar2 * 2.601887e-06 +
             fVar2 * -0.0001980741 + fVar4 * 0.0083330255 + fVar3 * fVar20 * -0.16666657 + fVar20) *
             0.57735;
        WaterTiles = (WaterTile *)&DAT_00e62840;
        WaterTileBoxes = (WaterTileBox *)&DAT_00e62040;
        WaterTileCnt = 0x80;
        WaterFogNearDist = 0;
        WaterFogFarDist = 0x47000000;
        WaterFogNearIntensity = 0x437f0000;
        fVar20 = pfVar8[6];
        WaterFogFarIntensity = 0x42400000;
      }
      fVar6 = pfVar8[6];
      (&DAT_00e62840)[(int)fVar20 * 0x468] = (moby->pos).x;
      fVar20 = pfVar8[3];
      (&DAT_00e62844)[(int)fVar6 * 0x468] = (moby->pos).y;
      fVar5 = (moby->pos).z;
      *(int *)(&DAT_00e62854 + (int)fVar6 * 0x11a0) = (int)fVar20 + 0x28;
      *(int *)(&DAT_00e62858 + (int)pfVar8[6] * 0x11a0) = (int)pfVar8[4] + 0x28;
      (&DAT_00e6285c)[(int)pfVar8[6] * 0x11a0] = 0x1c;
      (&DAT_00e6285d)[(int)pfVar8[6] * 0x11a0] = 0x44;
      *(f32 *)(&DAT_00e62848 + (int)fVar6 * 0x11a0) = fVar5;
      fVar20 = pfVar8[6];
      (&DAT_00e6285e)[(int)fVar20 * 0x8d0] = 0xffff;
      WaterTile_CalcGridBSphere
                ((WaterTile *)(&DAT_00e62840 + (int)fVar20 * 0x468),
                 (BSphere *)(&DAT_00e62040 + (int)fVar20 * 0x10));
      moby->state = '\x01';
    }
    else {
      M1072_001b4198(pfVar8[6]);
      moby->state = ((byte)(ZERO_MASK((int)pfVar8[2])) & 1) + 2;
    }
  }
  else if (bVar1 < 3) {
    if ((moby->setByGroup & 8U) != 0) {
      pfVar8[7] = 1.4013e-45;
      MB_SetStateByGroup(moby->group,3);
    }
    moby->setByGroup = '\x02';
    if (pfVar8[7] != 0.0) {
      OrganicDelt
                (*pfVar8,g_FrameTimeSq * 4.0,g_FrameTimeSq * 4.0,g_FrameTime * 4.0,
                 &(moby->pos).z,0x720000,pfVar8 + 5);
      puVar21 = (ushort *)(&g_MobyGroups)[(byte)moby->group];
      pMVar9 = g_MobyInstance;
      do {
        iVar22 = (int)(((ulonglong)*puVar21 & 0x7fff) << 8);
        *(f32 *)((int)&(pMVar9->pos).z + iVar22) = (moby->pos).z;
        pMVar9 = g_MobyInstance;
        *(f32 *)(&DAT_00e62848 +
                *(int *)(*(int *)((int)&g_MobyInstance->pVar + iVar22) + 0x18) * 0x11a0) =
             (moby->pos).z;
        uVar7 = *puVar21;
        puVar21 = puVar21 + 1;
      } while (-1 < (short)uVar7);
    }
    iVar22 = MB_randInt(200);
    if (iVar22 == 0) {
      dVar30 = -4.0;
      dVar31 = 4.0;
      dVar32 = (double)MB_randRangeFloat(-4.0,4.0);
      dVar29 = (double)(float)((double)(float)(&DAT_00e62840)[(int)pfVar8[6] * 0x468] + dVar32);
      dVar32 = (double)MB_randRangeFloat((float)dVar30,(float)dVar31);
      WaterTile_PutDrop
                ((float)dVar29,
                 (float)((double)(float)(&DAT_00e62844)[(int)pfVar8[6] * 0x468] + dVar32),1.0,-0.05,
                 (WaterTile *)(&DAT_00e62840 + (int)pfVar8[6] * 0x468),1,(float)in_f5);
    }
  }
  else if (bVar1 < 4) {
    if ((moby->setByGroup & 4U) != 0) {
      pfVar8[7] = 1.4013e-45;
      MB_SetStateByGroup(moby->group,2);
    }
    moby->setByGroup = '\x01';
    if (pfVar8[7] != 0.0) {
      OrganicDelt
                (pfVar8[1],g_FrameTimeSq * 4.0,g_FrameTimeSq * 4.0,g_FrameTime * 4.0,
                 &(moby->pos).z,0x720000,pfVar8 + 5);
      puVar21 = (ushort *)(&g_MobyGroups)[(byte)moby->group];
      pMVar9 = g_MobyInstance;
      do {
        iVar22 = (int)(((ulonglong)*puVar21 & 0x7fff) << 8);
        *(f32 *)((int)&(pMVar9->pos).z + iVar22) = (moby->pos).z;
        pMVar9 = g_MobyInstance;
        *(f32 *)(&DAT_00e62848 +
                *(int *)(*(int *)((int)&g_MobyInstance->pVar + iVar22) + 0x18) * 0x11a0) =
             (moby->pos).z;
        uVar7 = *puVar21;
        puVar21 = puVar21 + 1;
      } while (-1 < (short)uVar7);
    }
    iVar22 = MB_randInt(200);
    if (iVar22 == 0) {
      dVar30 = -4.0;
      dVar31 = 4.0;
      dVar32 = (double)MB_randRangeFloat(-4.0,4.0);
      dVar29 = (double)(float)((double)(float)(&DAT_00e62840)[(int)pfVar8[6] * 0x468] + dVar32);
      dVar32 = (double)MB_randRangeFloat((float)dVar30,(float)dVar31);
      WaterTile_PutDrop
                ((float)dVar29,
                 (float)((double)(float)(&DAT_00e62844)[(int)pfVar8[6] * 0x468] + dVar32),1.0,-0.05,
                 (WaterTile *)(&DAT_00e62840 + (int)pfVar8[6] * 0x468),1,(float)in_f5);
    }
  }
  if (-1 < (int)pfVar8[6]) {
    dVar31 = 0.0;
    dVar32 = dVar31;
    iVar22 = MB_ScaledVecWrapper(0x4050000000000000,moby);
    if (iVar22 != -1) {
      dVar32 = 1.0;
    }
    uVar23 = 0xffff;
    if (dVar32 == dVar31) {
      uVar23 = 0;
    }
    fVar20 = pfVar8[6];
    (&DAT_00e6285e)[(int)pfVar8[6] * 0x8d0] = uVar23;
    if (fVar20 == 0.0) {
      WaterTile_UpdateWaves((WaterTile *)&DAT_00e62840,0x80);
      RegisterFuncForMoby(&PTR_M1073_001b4cdc_007089b8,moby);
    }
  }
  return;
}


