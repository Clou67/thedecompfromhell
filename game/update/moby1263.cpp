// game/update/moby1263.cpp -- reconstructed from NPEA00385 EBOOT
// STATUS: NOT STARTED (raw Ghidra output)
// 6 functions, 0x22fcb8-0x230b98
// shared update function UpdateMoby_{1263_1393}; registered for oClasses 1263, 1393
#include "game/update/moby1263.h"
#include "game/camera.h"
#include "game/draw.h"
#include "game/hero.h"
#include "game/hud.h"
#include "game/mesh.h"
#include "game/mobyfunc.h"
#include "game/mobyproc.h"
#include "game/mobyutil.h"
#include "game/update.h"
#include "game/vuchain.h"
#include "game/water.h"
#include "idol/fastfunc.h"

// 0x022fcb8 (0x43c bytes)
void M1393_0022fcb8(int param_1)

{
  longlong lVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  undefined4 uVar6;
  int iVar7;
  int iVar8;
  ulonglong *puVar9;
  ulonglong uVar10;
  undefined8 uVar11;
  ulonglong uVar12;
  float *pfVar13;
  undefined4 uVar14;
  float *pfVar15;
  ulonglong unaff_r20;
  longlong lVar16;
  ulonglong unaff_r21;
  longlong lVar17;
  ulonglong unaff_r22;
  longlong lVar18;
  ulonglong unaff_r23;
  ulonglong unaff_r24;
  ulonglong unaff_r25;
  undefined4 *puVar19;
  ulonglong unaff_r26;
  undefined4 *puVar20;
  ulonglong unaff_r27;
  longlong lVar21;
  float *pfVar22;
  ulonglong unaff_r28;
  ulonglong unaff_r29;
  int iVar23;
  ulonglong unaff_r30;
  uint uVar24;
  ulonglong unaff_r31;
  ulonglong in_LR;
  double dVar25;
  double dVar26;
  double dVar27;
  double dVar28;
  double dVar29;
  double dVar30;
  double dVar31;
  double dVar32;
  ulonglong in_f29;
  double dVar33;
  ulonglong in_f30;
  ulonglong in_f31;
  double dVar34;
  
  uVar10 = ZEXT48(&stack0x00000000);
  lVar1 = uVar10 - 0x1c0;
  puVar9 = (ulonglong *)lVar1;
  *puVar9 = uVar10;
  puVar9[0x3a] = in_LR;
  puVar9[0x35] = in_f29;
  puVar9[0x36] = in_f30;
  puVar9[0x37] = in_f31;
  puVar9[0x31] = unaff_r28;
  iVar7 = *(int *)(param_1 + 0x78);
  puVar9[0x34] = unaff_r31;
  puVar9[0x33] = unaff_r30;
  puVar9[0x32] = unaff_r29;
  puVar9[0x30] = unaff_r27;
  puVar9[0x2f] = unaff_r26;
  puVar9[0x2e] = unaff_r25;
  puVar9[0x2d] = unaff_r24;
  puVar9[0x2c] = unaff_r23;
  puVar9[0x2b] = unaff_r22;
  puVar9[0x2a] = unaff_r21;
  puVar9[0x29] = unaff_r20;
  uVar11 = idol_draw::Blend(1,5,0x80,3,0,0,1,2);
  SetGSReg(0x16,uVar11);
  uVar12 = GetEffectTex(DAT_007751b8);
  uVar14 = DAT_007751b8;
  puVar9[0x25] = uVar12;
  GetEffectTex(uVar14);
  uVar12 = STUB_00502fd4_RET_0(0,0,1,1,1,0,0xff90);
  puVar9[0x26] = uVar12;
  uVar12 = FUN_00502f08(0,0,0,0,0,0);
  puVar9[0x24] = uVar12;
  uVar12 = idol_draw::PackCmd(DAT_00f153c0,DAT_007751ac,DAT_00f153c4,DAT_007751b0,DAT_007751b4);
  puVar9[0x27] = uVar12;
  FastMtx4Identity((float *)(puVar9 + 0xe));
  iVar23 = 0;
  do {
    puVar19 = &DAT_007751cc;
    DAT_007751d8 = DAT_007751e8;
    dVar33 = 0.0;
    dVar25 = (double)MB_randRangeFloat(0.0,0.2);
    DAT_007751e8 = (float)dVar25;
    uVar24 = 0;
    dVar25 = 0.5;
    dVar34 = 0.125;
    puVar20 = &DAT_007751d0;
    lVar21 = uVar10 - 0x110;
    lVar16 = lVar1;
    lVar17 = lVar1;
    lVar18 = lVar1;
    do {
      iVar8 = (((int)uVar24 >> 1) + (uint)((int)uVar24 < 0 && (uVar24 & 1) != 0) + iVar23) * 0x10;
      pfVar15 = (float *)(iVar8 + iVar7 + 0x210);
      pfVar13 = (float *)(iVar8 + iVar7 + 0x21c);
      dVar29 = (double)*pfVar15;
      pfVar22 = (float *)lVar21;
      *pfVar22 = *pfVar15;
      dVar28 = (double)pfVar15[1];
      pfVar22[1] = pfVar15[1];
      dVar27 = (double)pfVar15[2];
      pfVar22[2] = pfVar15[2];
      fVar5 = pfVar15[3];
      pfVar22[3] = fVar5;
      if (uVar24 == (((int)uVar24 >> 1) + (uint)((int)uVar24 < 0 && (uVar24 & 1) != 0)) * 2) {
        uVar14 = FastLerpColor((double)*pfVar13,DAT_007751bc,DAT_007751c0);
      }
      else {
        fVar2 = (float)(dVar28 - (double)*(float *)(iVar7 + 500));
        fVar3 = (float)(dVar29 - (double)*(float *)(iVar7 + 0x1f0));
        fVar4 = (float)(dVar27 - (double)*(float *)(iVar7 + 0x1f8));
        pfVar22[3] = fVar5;
        dVar32 = (double)SQRT(fVar4 * fVar4 + fVar3 * fVar3 + fVar2 * fVar2);
        fVar5 = (float)(dVar25 / dVar32);
        dVar31 = dVar33;
        if (dVar33 - dVar32 < 0.0) {
          dVar31 = (double)(fVar5 * fVar4);
        }
        dVar30 = dVar33;
        if (dVar33 - dVar32 < 0.0) {
          dVar30 = (double)(fVar5 * fVar2);
        }
        dVar26 = dVar33;
        if (dVar33 - dVar32 < 0.0) {
          dVar26 = (double)(fVar5 * fVar3);
        }
        if (dVar32 - dVar33 < 0.0) {
          dVar31 = (double)(fVar5 * fVar4);
        }
        if (dVar32 - dVar33 < 0.0) {
          dVar30 = (double)(fVar5 * fVar2);
        }
        if (dVar32 - dVar33 < 0.0) {
          dVar26 = (double)(fVar5 * fVar3);
        }
        pfVar22[2] = (float)(dVar27 - dVar31);
        pfVar22[1] = (float)(dVar28 - dVar30);
        *pfVar22 = (float)(dVar29 - dVar26);
        uVar6 = DAT_007751c8;
        uVar14 = DAT_007751c4;
        *(float *)((int)lVar16 + 0xb8) = (float)((double)*(float *)((int)lVar16 + 0xb8) - dVar34);
        uVar14 = FastLerpColor((double)*pfVar13,uVar14,uVar6);
      }
      uVar6 = *puVar19;
      *(undefined4 *)((int)lVar17 + 0xf0) = uVar14;
      uVar24 = uVar24 + 1;
      uVar14 = *puVar20;
      lVar21 = lVar21 + 0x10;
      *(undefined4 *)((int)lVar18 + 0x100) = uVar6;
      *(undefined4 *)((int)lVar18 + 0x104) = uVar14;
      lVar16 = lVar16 + 0x10;
      puVar19 = puVar19 + 2;
      lVar17 = lVar17 + 4;
      puVar20 = puVar20 + 2;
      lVar18 = lVar18 + 8;
    } while ((int)uVar24 < 4);
    FastDrawQuad(uVar10 - 0x110,uVar10 - 0x150,0,EffectTexHeaders,9);
    uVar14 = EffectTexHeaders;
    uVar24 = 0;
    lVar16 = lVar1;
    do {
      if (uVar24 != (((int)uVar24 >> 1) + (uint)((int)uVar24 < 0 && (uVar24 & 1) != 0)) * 2) {
        *(float *)((int)lVar16 + 0xb8) = *(float *)((int)lVar16 + 0xb8) + 0.25;
      }
      uVar24 = uVar24 + 1;
      lVar16 = lVar16 + 0x10;
    } while ((int)uVar24 < 4);
    FastDrawQuad(uVar10 - 0x110,uVar10 - 0x150,0,uVar14,9);
    iVar23 = iVar23 + 1;
  } while (iVar23 < 0xf);
  uVar11 = idol_draw::Blend(1,5,0x60,3,0,0,1,2);
  SetGSReg(0x16,uVar11);
  return;
}


// 0x02300f4 (0x14 bytes)
void M1393_002300f4(void)

{
  DAT_00775278 = 0x10000;
  return;
}


// 0x0230110 (0x1a0 bytes)
void M1393_00230110(int param_1)

{
  float fVar1;
  float fVar2;
  float *pfVar3;
  float *pfVar4;
  int iVar5;
  int iVar6;
  undefined1 uVar7;
  
  iVar5 = param_1 * 0x11a0;
  pfVar4 = (float *)&DAT_00775300;
  iVar6 = 0;
  pfVar3 = (float *)&DAT_00775304;
  (&DAT_0077530c)[iVar5] = 0xff;
  (&DAT_0077530e)[iVar5] = 0xff;
  (&DAT_0077530d)[iVar5] = 0xff;
  (&DAT_0077530f)[iVar5] = 0xff;
  (&DAT_00775310)[iVar5] = 0xff;
  (&DAT_00775311)[iVar5] = 0xff;
  (&DAT_00775312)[iVar5] = 0xff;
  (&DAT_00775313)[iVar5] = 0xff;
  do {
    if (param_1 != iVar6) {
      fVar1 = (float)(&DAT_00775300)[param_1 * 0x468] - *pfVar4;
      fVar2 = (float)(&DAT_00775304)[param_1 * 0x468] - *pfVar3;
      uVar7 = (undefined1)iVar6;
      if (0.1 <= ABS(fVar1)) {
        if (0.1 <= ABS(fVar2)) {
          if (0.1 <= ABS(fVar1 + 16.0)) {
            if (ABS(fVar1 - 16.0) < 0.1) {
              if (ABS(fVar2 - 16.0) < 0.1) {
                (&DAT_00775310)[iVar5] = uVar7;
              }
              if (ABS(fVar2 + 16.0) < 0.1) {
                (&DAT_00775312)[iVar5] = uVar7;
              }
            }
          }
          else {
            if (ABS(fVar2 - 16.0) < 0.1) {
              (&DAT_00775311)[iVar5] = uVar7;
            }
            if (ABS(fVar2 + 16.0) < 0.1) {
              (&DAT_00775313)[iVar5] = uVar7;
            }
          }
        }
        else {
          if (ABS(fVar1 - 16.0) < 0.1) {
            (&DAT_0077530d)[iVar5] = uVar7;
          }
          if (ABS(fVar1 + 16.0) < 0.1) {
            (&DAT_0077530f)[iVar5] = uVar7;
          }
        }
      }
      else {
        if (ABS(fVar2 - 16.0) < 0.1) {
          (&DAT_0077530c)[iVar5] = uVar7;
        }
        if (ABS(fVar2 + 16.0) < 0.1) {
          (&DAT_0077530e)[iVar5] = uVar7;
        }
      }
    }
    iVar6 = iVar6 + 1;
    pfVar4 = pfVar4 + 0x468;
    pfVar3 = pfVar3 + 0x468;
  } while (iVar6 < 0x16);
  return;
}


// shared update function, registered for oClasses 1263, 1393
// 0x0230308 (0x84c bytes)
// inlined: FastAtan2 @0x230518
/* Moby 1263
   Moby 1393 */

void UpdateMoby_1263(MobyInstance *moby)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float *pfVar6;
  ulonglong *puVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  uint uVar11;
  byte bVar12;
  ulonglong uVar13;
  ulonglong uVar14;
  longlong lVar15;
  longlong lVar16;
  longlong lVar17;
  float *pfVar18;
  undefined2 uVar19;
  longlong lVar20;
  ulonglong unaff_r24;
  int iVar21;
  ulonglong unaff_r25;
  BSphere *bounds;
  WaterTile *pWVar22;
  ulonglong unaff_r26;
  WaterTile *tile;
  ulonglong unaff_r27;
  int iVar23;
  ulonglong unaff_r28;
  ulonglong unaff_r29;
  int iVar24;
  int iVar25;
  ulonglong unaff_r30;
  ulonglong unaff_r31;
  ulonglong in_LR;
  longlong lVar26;
  double dVar27;
  ulonglong in_f27;
  double dVar28;
  ulonglong in_f28;
  undefined8 uVar29;
  ulonglong in_f29;
  undefined8 uVar30;
  ulonglong in_f30;
  double dVar31;
  double dVar32;
  ulonglong in_f31;
  double dVar33;
  double dVar34;
  
  uVar13 = ZEXT48(&stack0x00000000);
  lVar16 = uVar13 - 0x100;
  puVar7 = (ulonglong *)lVar16;
  *puVar7 = uVar13;
  puVar7[0x22] = in_LR;
  puVar7[0x1b] = in_f27;
  puVar7[0x1c] = in_f28;
  puVar7[0x1d] = in_f29;
  puVar7[0x1e] = in_f30;
  puVar7[0x1f] = in_f31;
  puVar7[0x1a] = unaff_r31;
  iVar24 = g_heroStateType;
  iVar21 = DAT_0096b2d0;
  puVar7[0x19] = unaff_r30;
  puVar7[0x18] = unaff_r29;
  puVar7[0x17] = unaff_r28;
  puVar7[0x16] = unaff_r27;
  puVar7[0x15] = unaff_r26;
  puVar7[0x14] = unaff_r25;
  puVar7[0x13] = unaff_r24;
  if (((((iVar21 == 0) || (*(short *)(iVar21 + 0xa6) != 0x45)) ||
       (*(char *)(iVar21 + 0x20) == -3 || *(char *)(iVar21 + 0x20) == -2)) ||
      (g_heroState != TURRET_PLANE_UI)) && (pfVar6 = (float *)moby->pVar, pfVar6 != (float *)0x0)) {
    if (moby->state == 0) {
      moby->modeBits = moby->modeBits | DISABLED;
      pfVar6[2] = pfVar6[2] * 0.017453292;
      pfVar6[3] = pfVar6[3] * 0.017453292 * g_FrameTime;
      if (pfVar6[4] == 0.0) {
        pWVar22 = (WaterTile *)&DAT_00775300;
        WaterTile_InitAll((WaterTile *)&DAT_00775300,0x16);
        WaterWave_ScaleTable(1.0);
        moby->updateDistance = -1;
        fVar4 = DirectionalLights[0].direction1.x;
        fVar2 = ABS(DirectionalLights[0].direction1.x);
        fVar3 = ABS(DirectionalLights[0].direction1.y);
        WaterTileConsts.TileSize.x = 16.0;
        WaterTileConsts.TileSize.y = 16.0;
        WaterTileConsts.TileOffset.x = -8.0;
        WaterTileConsts.TileOffset.y = -8.0;
        WaterTileConsts.TileGridSize.x = 1.0;
        uVar11 = (uint)DirectionalLights[0].direction1.y >> 0x1d;
        WaterTileConsts.TileGridSize.y = 1.0;
        WaterTileConsts.texScale = 0.9;
        WaterTileConsts.waveInc = 0.1;
        *(float *)(puVar7 + 0xe) = fVar2 - fVar3;
        fVar1 = 0.0;
        uVar14 = (ulonglong)((uint)fVar4 >> 0x1c) & 8 |
                 (ulonglong)(*(uint *)(puVar7 + 0xe) >> 0x1e) & 2 | (ulonglong)uVar11 & 4;
        fVar4 = fVar2;
        if (*(float *)(puVar7 + 0xe) - 0.0 < 0.0) {
          fVar4 = fVar3;
        }
        fVar5 = *(float *)(&g_atanQuadrantTable + (int)(uVar14 << 2));
        if (*(float *)(puVar7 + 0xe) - 0.0 < 0.0) {
          fVar3 = fVar2;
        }
        fVar2 = *(float *)(((uint)(uVar14 << 2) | 0x735900) + 4);
        if (0.0 < fVar4) {
          lVar15 = uVar13 - 0xf0;
          lVar17 = uVar13 - 0x8c;
          lVar20 = uVar13 - 0x7c;
          lVar26 = 2;
          fVar3 = (fVar3 - fVar4) / (fVar3 + fVar4);
          fVar4 = fVar3 * fVar3;
          *(float *)(puVar7 + 0x10) = fVar3;
          *(float *)(puVar7 + 0xf) = fVar3;
          *(float *)((int)puVar7 + 0x7c) = fVar3;
          *(float *)((int)puVar7 + 0x74) = fVar3;
          fVar3 = fVar4 * fVar4;
          *(float *)(puVar7 + 0xf) = *(float *)(puVar7 + 0xf) * fVar4;
          *(float *)((int)puVar7 + 0x7c) = *(float *)((int)puVar7 + 0x7c) * fVar3;
          *(float *)(puVar7 + 0x10) = *(float *)(puVar7 + 0x10) * fVar3 * fVar4;
          do {
            *(float *)((int)lVar15 + 0x74) = *(float *)((int)lVar15 + 100) * fVar3 * fVar3;
            iVar21 = (int)lVar17;
            lVar15 = lVar15 + 8;
            lVar17 = lVar17 + 8;
            *(float *)((int)lVar20 + 4) = *(float *)(iVar21 + 4) * fVar3 * fVar3;
            lVar20 = lVar20 + 8;
            lVar26 = lVar26 + -1;
          } while (lVar26 != 0);
          lVar26 = 4;
          lVar20 = uVar13 - 0x8c;
          pfVar18 = (float *)&DAT_007358e0;
          lVar15 = lVar16;
          lVar17 = lVar20;
          do {
            fVar3 = *pfVar18;
            fVar4 = pfVar18[1];
            pfVar18 = pfVar18 + 2;
            *(float *)((int)lVar15 + 0x74) = *(float *)((int)lVar15 + 0x74) * fVar3;
            lVar15 = lVar15 + 8;
            *(float *)((int)lVar17 + 4) = *(float *)((int)lVar17 + 4) * fVar4;
            lVar17 = lVar17 + 8;
            lVar26 = lVar26 + -1;
          } while (lVar26 != 0);
          lVar15 = 2;
          do {
            iVar21 = (int)lVar16;
            iVar24 = (int)lVar20;
            lVar16 = lVar16 + 0x10;
            lVar20 = lVar20 + 0x10;
            fVar1 = fVar1 + *(float *)(iVar21 + 0x74) + *(float *)(iVar24 + 4) +
                    *(float *)(iVar24 + 8) + *(float *)(iVar24 + 0xc);
            lVar15 = lVar15 + -1;
          } while (lVar15 != 0);
          fVar1 = (fVar1 + 0.7853982) * fVar5 + fVar2;
        }
        fVar2 = fVar1 + 1.5707963;
        iVar21 = 0;
        bounds = (BSphere *)&DAT_00f15400;
        fVar3 = 3.1415925 - fVar1;
        if (fVar1 - (3.1415925 - fVar1) < 0.0) {
          fVar3 = fVar1;
        }
        fVar4 = 3.1415925 - fVar2;
        if (fVar2 - (3.1415925 - fVar2) < 0.0) {
          fVar4 = fVar2;
        }
        fVar5 = -3.1415925 - fVar1;
        if ((-3.1415925 - fVar1) - fVar3 < 0.0) {
          fVar5 = fVar3;
        }
        fVar1 = -3.1415925 - fVar2;
        if ((-3.1415925 - fVar2) - fVar4 < 0.0) {
          fVar1 = fVar4;
        }
        fVar2 = fVar5 * fVar5;
        WaterTileConsts.lightDir.z = -0.57735;
        WaterTileConsts.tex0 = 0x2d;
        fVar3 = fVar1 * fVar1;
        WaterTileConsts.tex1 = 0x2e;
        WaterTileConsts.alpha0 = 0x60;
        WaterTileConsts.alpha1 = 0x40;
        fVar9 = fVar2 * fVar2 * fVar5;
        fVar4 = fVar3 * fVar3 * fVar1;
        fVar10 = fVar2 * fVar9;
        fVar8 = fVar3 * fVar4;
        WaterTileConsts.lightDir.y =
             (fVar2 * fVar10 * 2.601887e-06 +
             fVar10 * -0.0001980741 + fVar9 * 0.0083330255 + fVar2 * fVar5 * -0.16666657 + fVar5) *
             0.57735;
        WaterTileConsts.lightDir.x =
             (fVar3 * fVar8 * 2.601887e-06 +
             fVar8 * -0.0001980741 + fVar4 * 0.0083330255 + fVar3 * fVar1 * -0.16666657 + fVar1) *
             0.57735;
        WaterTiles = (WaterTile *)&DAT_00775300;
        WaterTileBoxes = (WaterTileBox *)&DAT_00f15400;
        WaterTileCnt = 0x16;
        WaterFogNearDist = 0;
        WaterFogFarDist = 0x47000000;
        iVar24 = 0;
        WaterFogNearIntensity = 0x437f0000;
        WaterFogFarIntensity = 0x42400000;
        tile = pWVar22;
        do {
          WaterTile_CalcGridBSphere(tile,bounds);
          iVar24 = iVar24 + 1;
          tile = (WaterTile *)&tile[1].ovlTex;
          bounds = bounds + 1;
          *(undefined2 *)(&DAT_0077531e + (int)pfVar6[4] * 0x11a0) =
               *(undefined2 *)(&DAT_0078d6c0 + (int)pfVar6[4] * 2);
        } while (iVar24 < 0x16);
        iVar25 = 0;
        iVar24 = 0;
        dVar33 = -6.0;
        dVar31 = 6.0;
        uVar30 = 0x4000000000000000;
        uVar29 = 0x3fc99999a0000000;
        do {
          iVar23 = 0;
          do {
            dVar27 = (double)MB_randRangeFloat((float)dVar33,(float)dVar31);
            dVar28 = (double)(float)((double)*(float *)((int)&DAT_00775300 + iVar24) + dVar27);
            dVar27 = (double)MB_randRangeFloat((float)dVar33,(float)dVar31);
            WaterTile_PutDrop_Thunk
                      (dVar28,(double)(float)((double)(pWVar22->tilePos).y + dVar27),uVar30,uVar29,
                       &DAT_00775300,0x16);
            iVar23 = iVar23 + 1;
          } while (iVar23 < 2);
          iVar25 = iVar25 + 1;
          pWVar22 = (WaterTile *)&pWVar22[1].ovlTex;
          iVar24 = iVar24 + 0x11a0;
        } while (iVar25 < 0x16);
        do {
          M1393_00230110(iVar21);
          iVar21 = iVar21 + 1;
        } while (iVar21 < 0x16);
      }
      moby->drawDistance = 0;
      moby->state = '\x01';
    }
    else if (moby->state < 2) {
      dVar33 = (double)(pfVar6[2] + 1.5707963);
      dVar31 = (double)(float)(3.141592502593994 - dVar33);
      if (dVar33 - (double)(float)(3.141592502593994 - dVar33) < 0.0) {
        dVar31 = dVar33;
      }
      dVar27 = (double)(float)(-3.141592502593994 - dVar33);
      if ((double)(float)(-3.141592502593994 - dVar33) - dVar31 < 0.0) {
        dVar27 = dVar31;
      }
      dVar34 = 1.0;
      dVar28 = (double)(float)(dVar27 * dVar27);
      dVar33 = (double)(float)(dVar28 * dVar27);
      dVar31 = (double)(float)(dVar28 * (double)(float)(dVar28 * dVar33));
      (moby->pos).z =
           ((float)(dVar28 * dVar31) * 2.601887e-06 +
            (float)(dVar31 * -0.0001980741071747616 +
                   (double)(float)((double)(float)(dVar28 * dVar33) * 0.008333025500178337 +
                                  (double)(float)(dVar33 * -0.16666656732559204 + dVar27))) + 1.0) *
           (*pfVar6 - pfVar6[1]) * 0.5 + pfVar6[1];
      if (((iVar24 != 0x14) && (iVar24 != 0x19)) &&
         ((g_heroState != DEATH_MUD && g_heroState != DYING_GROUNDED && (g_heroState != DEATH_LAVA))
         )) {
        dVar31 = (double)FastWrapRot(pfVar6[2],pfVar6[3]);
        pfVar6[2] = (float)dVar31;
      }
      bVar12 = WaterTileConsts.alpha1;
      (&DAT_0077531c)[(int)pfVar6[4] * 0x11a0] = WaterTileConsts.alpha0;
      (&DAT_0077531d)[(int)pfVar6[4] * 0x11a0] = bVar12;
      iVar21 = MB_randInt(200);
      if (iVar21 == 0) {
        dVar32 = -4.0;
        dVar27 = 4.0;
        dVar31 = (double)MB_randRangeFloat(-4.0,4.0);
        dVar28 = (double)(float)((double)(float)(&DAT_00775300)[(int)pfVar6[4] * 0x468] + dVar31);
        dVar31 = (double)MB_randRangeFloat((float)dVar32,(float)dVar27);
        WaterTile_PutDrop
                  ((float)dVar28,
                   (float)((double)(float)(&DAT_00775304)[(int)pfVar6[4] * 0x468] + dVar31),
                   (float)dVar34,-0.05,(WaterTile *)(&DAT_00775300 + (int)pfVar6[4] * 0x468),1,
                   (float)dVar33);
      }
    }
    if (-1 < (int)pfVar6[4]) {
      dVar33 = 0.0;
      *(f32 *)(&DAT_00775308 + (int)pfVar6[4] * 0x11a0) = (moby->pos).z;
      dVar31 = dVar33;
      iVar21 = MB_ScaledVecWrapper(0x4048000000000000,moby);
      if (iVar21 != -1) {
        dVar31 = 1.0;
      }
      uVar19 = 0;
      if (dVar31 != dVar33) {
        uVar19 = *(undefined2 *)(&DAT_0078d6c0 + (int)pfVar6[4] * 2);
      }
      *(undefined2 *)(&DAT_0077531e + (int)pfVar6[4] * 0x11a0) = uVar19;
      fVar1 = pfVar6[4];
      if (fVar1 == 0.0) {
        WaterTile_UpdateWaves((WaterTile *)&DAT_00775300,0x16);
        RegisterPostDraw(&PTR_M1393_00230b54_00709a08,moby);
        fVar1 = pfVar6[4];
      }
      if (fVar1 == DAT_007752c0) {
        uVar19 = (undefined2)DAT_007752c4;
        *(undefined2 *)(&DAT_0077531e + (int)fVar1 * 0x11a0) = uVar19;
        *(undefined2 *)(&DAT_0078d6c0 + (int)pfVar6[4] * 2) = uVar19;
      }
    }
  }
  return;
}


// 0x0230b54 (0x30 bytes)
void M1393_00230b54(void)

{
  WaterTile_DrawAll(&DAT_00775300,0x16);
  return;
}


// 0x0230b84 (0x14 bytes)
void M1393_00230b84(void)

{
  DAT_0078d738 = 0x10000;
  return;
}


