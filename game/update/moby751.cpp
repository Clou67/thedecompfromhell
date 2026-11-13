// game/update/moby751.cpp -- reconstructed from NPEA00385 EBOOT
// STATUS: NOT STARTED (raw Ghidra output)
// 4 functions, 0x44cddc-0x44d980
#include "game/update/moby751.h"
#include "game/camera.h"
#include "game/collproc.h"
#include "game/draw.h"
#include "game/hero.h"
#include "game/mobyfunc.h"
#include "game/mobyproc.h"
#include "game/mobyutil.h"
#include "game/partupd.h"
#include "game/update.h"
#include "game/update/moby750.h"
#include "game/update/moby787.h"
#include "game/water.h"

// 0x044cddc (0x38 bytes)
void FUN_0044cddc(int param_1)

{
  *(undefined1 *)(param_1 + 0x20) = 2;
  *(ushort *)(param_1 + 0x34) = *(ushort *)(param_1 + 0x34) & 0xffbe;
  M750_0044b460();
  return;
}


// 0x044ce14 (0x14 bytes)
void M751_0044ce14(void)

{
  DAT_0085a86c = 0x10000;
  return;
}


// 0x044ce28 (0x30 bytes)
void M751_0044ce28(void)

{
  WaterTile_DrawAll(&DAT_0085a8c0,0x15);
  return;
}


// 0x044cee0 (0xaa0 bytes)
// inlined: FastAtan2 @0x44d10c
/* Moby 751 */

void UpdateMoby_751(MobyInstance *moby)

{
  byte bVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  undefined4 uVar5;
  ulonglong *puVar6;
  uint uVar7;
  ulonglong uVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  longlong lVar13;
  longlong lVar14;
  ulonglong uVar15;
  longlong lVar16;
  float *pfVar17;
  longlong lVar18;
  ulonglong unaff_r18;
  int iVar19;
  ulonglong unaff_r19;
  int *piVar20;
  ulonglong unaff_r20;
  ulonglong unaff_r21;
  ulonglong unaff_r22;
  ulonglong unaff_r23;
  ulonglong unaff_r24;
  ulonglong unaff_r25;
  ulonglong unaff_r26;
  ulonglong unaff_r27;
  BSphere *bounds;
  int iVar21;
  ulonglong unaff_r28;
  WaterTile *tile;
  WaterTile *pWVar22;
  ulonglong unaff_r29;
  ulonglong unaff_r30;
  ulonglong unaff_r31;
  ulonglong in_LR;
  longlong lVar23;
  double dVar24;
  double dVar25;
  double in_f5;
  double dVar26;
  ulonglong in_f17;
  ulonglong in_f18;
  ulonglong in_f19;
  ulonglong in_f20;
  double dVar27;
  ulonglong in_f21;
  double dVar28;
  ulonglong in_f22;
  double dVar29;
  ulonglong in_f23;
  double dVar30;
  ulonglong in_f24;
  double dVar31;
  ulonglong in_f25;
  double dVar32;
  ulonglong in_f26;
  double dVar33;
  ulonglong in_f27;
  double dVar34;
  ulonglong in_f28;
  undefined8 uVar35;
  double dVar36;
  ulonglong in_f29;
  undefined8 uVar37;
  double dVar38;
  ulonglong in_f30;
  double dVar39;
  ulonglong in_f31;
  double dVar40;
  double dVar41;
  float fVar42;
  
  uVar8 = ZEXT48(&stack0x00000000);
  lVar14 = uVar8 - 0x1c0;
  puVar6 = (ulonglong *)lVar14;
  *puVar6 = uVar8;
  puVar6[0x3a] = in_LR;
  puVar6[0x29] = in_f17;
  puVar6[0x2a] = in_f18;
  puVar6[0x2b] = in_f19;
  puVar6[0x2c] = in_f20;
  puVar6[0x2d] = in_f21;
  puVar6[0x2e] = in_f22;
  puVar6[0x2f] = in_f23;
  puVar6[0x30] = in_f24;
  puVar6[0x31] = in_f25;
  puVar6[0x32] = in_f26;
  puVar6[0x33] = in_f27;
  puVar6[0x34] = in_f28;
  puVar6[0x35] = in_f29;
  puVar6[0x36] = in_f30;
  puVar6[0x37] = in_f31;
  puVar6[0x23] = unaff_r26;
  bVar1 = moby->state;
  puVar6[0x1c] = unaff_r19;
  piVar20 = (int *)moby->pVar;
  puVar6[0x28] = unaff_r31;
  puVar6[0x27] = unaff_r30;
  puVar6[0x26] = unaff_r29;
  puVar6[0x25] = unaff_r28;
  puVar6[0x24] = unaff_r27;
  puVar6[0x22] = unaff_r25;
  puVar6[0x21] = unaff_r24;
  puVar6[0x20] = unaff_r23;
  puVar6[0x1f] = unaff_r22;
  puVar6[0x1e] = unaff_r21;
  puVar6[0x1d] = unaff_r20;
  puVar6[0x1b] = unaff_r18;
  if (bVar1 == 0) {
    moby->state = '\x01';
    moby->updateDistance = -1;
    (moby->pos).z = (moby->pos).z + 0.5;
    pWVar22 = (WaterTile *)&DAT_0085a8c0;
    WaterTile_InitAll((WaterTile *)&DAT_0085a8c0,0x15);
    DAT_0086b164 = 8;
    DAT_0086c2e8 = 0xbad1b717;
    DAT_00869fa8 = 0xbad1b717;
    DAT_0086b148 = 0xbad1b717;
    DAT_00868e08 = 0xbad1b717;
    dVar40 = 0.0;
    DAT_0086c2ec = 0;
    DAT_0086b14c = 0;
    DAT_00869fac = 0;
    DAT_00868e0c = 0;
    WaterWave_ScaleTable(1.0);
    fVar42 = DirectionalLights[0].direction1.x;
    dVar25 = ABS((double)DirectionalLights[0].direction1.x);
    dVar26 = ABS((double)DirectionalLights[0].direction1.y);
    WaterTileConsts.TileSize.x = 16.0;
    uVar7 = (uint)DirectionalLights[0].direction1.y >> 0x1d;
    *(float *)(puVar6 + 0x14) = (float)(dVar25 - dVar26);
    WaterTileConsts.TileSize.y = 16.0;
    WaterTileConsts.TileOffset.x = -8.0;
    WaterTileConsts.TileOffset.y = -8.0;
    WaterTileConsts.TileGridSize.x = 1.0;
    WaterTileConsts.TileGridSize.y = 1.0;
    WaterTileConsts.texScale = 0.9;
    WaterTileConsts.waveInc = 0.1;
    uVar15 = (ulonglong)((uint)fVar42 >> 0x1c) & 8 |
             (ulonglong)(*(uint *)(puVar6 + 0x14) >> 0x1e) & 2 | (ulonglong)uVar7 & 4;
    dVar41 = dVar25;
    if ((double)*(float *)(puVar6 + 0x14) - dVar40 < 0.0) {
      dVar41 = dVar26;
    }
    fVar4 = *(float *)(&g_atanQuadrantTable + (int)(uVar15 << 2));
    fVar42 = *(float *)(((uint)(uVar15 << 2) | 0x735900) + 4);
    if ((double)*(float *)(puVar6 + 0x14) - dVar40 < 0.0) {
      dVar26 = dVar25;
    }
    if (dVar40 < dVar41) {
      lVar13 = uVar8 - 0x1b0;
      lVar18 = uVar8 - 0x10c;
      lVar16 = uVar8 - 0x11c;
      lVar23 = 2;
      fVar2 = (float)(dVar26 - dVar41) / (float)(dVar26 + dVar41);
      fVar3 = fVar2 * fVar2;
      *(float *)(puVar6 + 0x16) = fVar2;
      *(float *)(puVar6 + 0x15) = fVar2;
      *(float *)((int)puVar6 + 0xac) = fVar2;
      *(float *)((int)puVar6 + 0xa4) = fVar2;
      fVar2 = fVar3 * fVar3;
      *(float *)(puVar6 + 0x15) = *(float *)(puVar6 + 0x15) * fVar3;
      *(float *)((int)puVar6 + 0xac) = *(float *)((int)puVar6 + 0xac) * fVar2;
      *(float *)(puVar6 + 0x16) = *(float *)(puVar6 + 0x16) * fVar2 * fVar3;
      do {
        *(float *)((int)lVar13 + 0xa4) = *(float *)((int)lVar13 + 0x94) * fVar2 * fVar2;
        iVar12 = (int)lVar16;
        lVar16 = lVar16 + 8;
        lVar13 = lVar13 + 8;
        *(float *)((int)lVar18 + 4) = *(float *)(iVar12 + 4) * fVar2 * fVar2;
        lVar18 = lVar18 + 8;
        lVar23 = lVar23 + -1;
      } while (lVar23 != 0);
      lVar23 = 4;
      lVar18 = uVar8 - 0x11c;
      pfVar17 = (float *)&DAT_007358e0;
      lVar13 = lVar14;
      lVar16 = lVar18;
      do {
        fVar2 = *pfVar17;
        fVar3 = pfVar17[1];
        pfVar17 = pfVar17 + 2;
        *(float *)((int)lVar13 + 0xa4) = *(float *)((int)lVar13 + 0xa4) * fVar2;
        lVar13 = lVar13 + 8;
        *(float *)((int)lVar16 + 4) = *(float *)((int)lVar16 + 4) * fVar3;
        lVar16 = lVar16 + 8;
        lVar23 = lVar23 + -1;
      } while (lVar23 != 0);
      lVar13 = 2;
      do {
        iVar12 = (int)lVar14;
        iVar19 = (int)lVar18;
        lVar14 = lVar14 + 0x10;
        lVar18 = lVar18 + 0x10;
        dVar40 = (double)((float)(dVar40 + (double)*(float *)(iVar12 + 0xa4)) +
                          *(float *)(iVar19 + 4) + *(float *)(iVar19 + 8) + *(float *)(iVar19 + 0xc)
                         );
        lVar13 = lVar13 + -1;
      } while (lVar13 != 0);
      dVar40 = (double)((float)(dVar40 + 0.7853981852531433) * fVar4 + fVar42);
    }
    fVar42 = (float)(dVar40 + 1.570796251296997);
    bounds = (BSphere *)&DAT_010ccd40;
    dVar26 = (double)(float)(3.141592502593994 - dVar40);
    if (dVar40 - (double)(float)(3.141592502593994 - dVar40) < 0.0) {
      dVar26 = dVar40;
    }
    iVar12 = 0;
    fVar4 = 3.1415925 - fVar42;
    if (fVar42 - (3.1415925 - fVar42) < 0.0) {
      fVar4 = fVar42;
    }
    dVar41 = (double)(float)(-3.141592502593994 - dVar40);
    if ((double)(float)(-3.141592502593994 - dVar40) - dVar26 < 0.0) {
      dVar41 = dVar26;
    }
    fVar2 = -3.1415925 - fVar42;
    if ((-3.1415925 - fVar42) - fVar4 < 0.0) {
      fVar2 = fVar4;
    }
    dVar26 = (double)(float)(dVar41 * dVar41);
    fVar3 = fVar2 * fVar2;
    dVar40 = (double)(float)(dVar26 * (double)(float)(dVar26 * dVar41));
    WaterTileConsts.tex0 = 0x29;
    WaterTileConsts.lightDir.z = -0.57735;
    WaterTileConsts.alpha0 = 0x1c;
    WaterTileConsts.tex1 = 0x2a;
    fVar42 = fVar3 * fVar3 * fVar2;
    dVar25 = (double)(float)(dVar26 * dVar40);
    WaterTileConsts.alpha1 = 0x40;
    fVar4 = fVar3 * fVar42;
    WaterTileConsts.lightDir.y =
         ((float)(dVar26 * dVar25) * 2.601887e-06 +
         (float)(dVar25 * -0.0001980741071747616 +
                (double)(float)(dVar40 * 0.008333025500178337 +
                               (double)(float)((double)(float)(dVar26 * dVar41) *
                                               -0.16666656732559204 + dVar41)))) * 0.57735;
    WaterTileConsts.lightDir.x =
         (fVar3 * fVar4 * 2.601887e-06 +
         fVar4 * -0.0001980741 + fVar42 * 0.0083330255 + fVar3 * fVar2 * -0.16666657 + fVar2) *
         0.57735;
    WaterTiles = (WaterTile *)&DAT_0085a8c0;
    WaterTileBoxes = (WaterTileBox *)&DAT_010ccd40;
    WaterTileCnt = 0x15;
    WaterFogNearDist = 0;
    WaterFogFarDist = 0x47000000;
    WaterFogNearIntensity = 0x437f0000;
    WaterFogFarIntensity = 0x42400000;
    tile = pWVar22;
    do {
      WaterTile_CalcGridBSphere(tile,bounds);
      iVar12 = iVar12 + 1;
      tile = (WaterTile *)&tile[1].ovlTex;
      bounds = bounds + 1;
    } while (iVar12 < 0x15);
    dVar41 = -6.0;
    iVar19 = 0;
    dVar26 = 6.0;
    uVar37 = 0x4000000000000000;
    uVar35 = 0x3fc99999a0000000;
    iVar12 = 0;
    do {
      iVar21 = 0;
      do {
        dVar25 = (double)MB_randRangeFloat((float)dVar41,(float)dVar26);
        dVar40 = (double)(float)((double)*(float *)((int)&DAT_0085a8c0 + iVar12) + dVar25);
        dVar25 = (double)MB_randRangeFloat((float)dVar41,(float)dVar26);
        WaterTile_PutDrop_Thunk
                  (dVar40,(double)(float)((double)(pWVar22->tilePos).y + dVar25),uVar37,uVar35,
                   &DAT_0085a8c0,0x15);
        iVar21 = iVar21 + 1;
      } while (iVar21 < 2);
      iVar19 = iVar19 + 1;
      pWVar22 = (WaterTile *)&pWVar22[1].ovlTex;
      iVar12 = iVar12 + 0x11a0;
    } while (iVar19 < 0x15);
  }
  else if (bVar1 < 2) {
    iVar21 = 0;
    iVar12 = -1;
    iVar19 = 0;
    do {
      if ((*piVar20 == -1) ||
         (iVar9 = MB_IsPntInCuboid((Vec4 *)&GameCamera.posX,(longlong)*piVar20),
         iVar9 == 0)) {
        iVar10 = 0;
        iVar9 = *(int *)((int)&DAT_00871b50 + iVar19);
        if (0 < iVar9) {
          do {
            iVar11 = *(int *)((int)&DAT_00871b34 + iVar19) + iVar10;
            iVar10 = iVar10 + 1;
            *(undefined2 *)(&DAT_0085a8de + iVar11 * 0x11a0) = 0;
          } while (iVar10 < iVar9);
        }
      }
      else {
        iVar9 = 0;
        iVar12 = iVar21;
        if (0 < *(int *)((int)&DAT_00871b50 + iVar19)) {
          dVar40 = -4.0;
          dVar25 = 4.0;
          dVar41 = 1.0;
          dVar26 = -0.05000000074505806;
          iVar10 = 0;
          do {
            iVar11 = *(int *)((int)&DAT_00871b34 + iVar19) + iVar9;
            uVar5 = *(undefined4 *)((int)&DAT_00871b6c + iVar19);
            *(short *)(&DAT_0085a8de + iVar11 * 0x11a0) =
                 (short)*(undefined4 *)(&DAT_00871ae0 + iVar11 * 4);
            iVar11 = MB_randInt(uVar5);
            if (iVar11 == 0) {
              dVar27 = (double)MB_randRangeFloat((float)dVar40,(float)dVar25);
              dVar28 = (double)(float)((double)(float)(&DAT_0085a8c0)
                                                      [(*(int *)((int)&DAT_00871b34 + iVar19) +
                                                       iVar9) * 0x468] + dVar27);
              dVar27 = (double)MB_randRangeFloat((float)dVar40,(float)dVar25);
              fVar42 = (float)in_f5;
              in_f5 = (double)fVar42;
              WaterTile_PutDrop
                        ((float)dVar28,
                         (float)((double)(float)(&DAT_0085a8c4)
                                                [(*(int *)((int)&DAT_00871b34 + iVar19) + iVar9) *
                                                 0x468] + dVar27),(float)dVar41,(float)dVar26,
                         (WaterTile *)
                         ((int)WaterTiles + iVar10 + *(int *)((int)&DAT_00871b34 + iVar19) * 0x11a0)
                         ,1,fVar42);
            }
            iVar9 = iVar9 + 1;
            iVar10 = iVar10 + 0x11a0;
          } while (iVar9 < *(int *)((int)&DAT_00871b50 + iVar19));
        }
      }
      iVar21 = iVar21 + 1;
      iVar19 = iVar19 + 4;
      piVar20 = piVar20 + 1;
    } while (iVar21 < 7);
    if (-1 < iVar12) {
      if (iVar12 < 4 && 0 < iVar12) {
        g_UnderwaterTint = 0;
        DAT_0073a961 = 0x28;
        WaterFog.r = '\0';
        DAT_0073a962 = 0x30;
        DAT_0073a963 = 0x40;
        WaterFog.b = '0';
        WaterFog.g = '(';
      }
      else {
        g_UnderwaterTint = 0x18;
        DAT_0073a961 = 0x30;
        DAT_0073a963 = 0x30;
        DAT_0073a962 = 0x90;
        WaterFog.r = '\x18';
        WaterFog.g = '0';
        WaterFog.b = 0x90;
      }
    }
    WaterTile_UpdateWaves((WaterTile *)&DAT_0085a8c0,0x15);
    RegisterMobyDraw(&PTR_M751_0044ce28_0070e7c8,moby);
    if (((iVar12 == 0) || (iVar12 == 6)) && (DAT_010cce90 = DAT_010cce90 + -1, DAT_010cce90 < 1)) {
      lVar14 = MB_randInt(5);
      iVar19 = (int)(lVar14 << 4);
      *(undefined4 *)(puVar6 + 0xe) = *(undefined4 *)(&DAT_00871b90 + iVar19);
      *(undefined4 *)((int)puVar6 + 0x74) = *(undefined4 *)(iVar19 + 0x871b94);
      *(undefined4 *)(puVar6 + 0xf) = *(undefined4 *)(iVar19 + 0x871b98);
      *(undefined4 *)((int)puVar6 + 0x7c) = *(undefined4 *)(iVar19 + 0x871b9c);
      dVar25 = -0.15000000596046448;
      dVar41 = 0.15000000596046448;
      dVar26 = (double)MB_randRangeFloat(-0.15,0.15);
      *(float *)(puVar6 + 0xe) = (float)((double)*(float *)(puVar6 + 0xe) + dVar26);
      dVar26 = (double)MB_randRangeFloat((float)dVar25,(float)dVar41);
      *(float *)((int)puVar6 + 0x74) = (float)((double)*(float *)((int)puVar6 + 0x74) + dVar26);
      FUN_0045c4e0(0x3fc99999a0000000,uVar8 - 0x150);
      DAT_010cce90 = MB_randRange(300,0x4b0);
    }
    if (iVar12 == 5) {
      puVar6[0x19] = (ulonglong)(byte)(&DAT_00871c58)[worldUpdateTime % 0x14];
      dVar28 = 0.05000000074505806;
      *(undefined4 *)(puVar6 + 0x10) = 0x3ca3d70a;
      dVar39 = 0.0;
      *(undefined4 *)((int)puVar6 + 0x84) = 0;
      *(undefined4 *)(puVar6 + 0x11) = 0;
      dVar38 = -0.6000000238418579;
      dVar36 = 0.6000000238418579;
      dVar41 = (double)(float)((double)(longlong)puVar6[0x19] * 0.05000000074505806);
      dVar26 = (double)MB_randRangeFloat(-0.6,0.6);
      *(float *)(puVar6 + 0x12) = (float)(dVar26 + 177.0);
      dVar34 = -0.10000000149011612;
      dVar33 = 0.10000000149011612;
      dVar26 = (double)MB_randRangeFloat(-0.1,0.1);
      dVar32 = -11.0;
      dVar31 = 176.0;
      *(float *)((int)puVar6 + 0x94) = (float)((double)(float)(dVar41 * -11.0 + 176.0) + dVar26);
      dVar30 = 39.0;
      *(undefined4 *)(puVar6 + 0x13) = 0x421c0000;
      dVar29 = 1.0;
      uVar35 = MB_randRangeFloat(0.4,0.5);
      SpawnPart_57(dVar29,uVar35,uVar8 - 0x130,uVar8 - 0x140);
      *(undefined4 *)(puVar6 + 0x10) = 0;
      *(undefined4 *)((int)puVar6 + 0x84) = 0;
      *(undefined4 *)(puVar6 + 0x11) = 0;
      dVar27 = 178.0;
      dVar40 = -0.20000000298023224;
      dVar25 = 4.0;
      dVar41 = 10.0;
      dVar26 = dVar39;
      do {
        iVar12 = MB_randInt(0x20);
        if (iVar12 == 0) {
          dVar24 = (double)MB_randRangeFloat((float)dVar38,(float)dVar36);
          *(float *)(puVar6 + 0x12) = (float)(dVar24 + dVar27);
          dVar24 = (double)MB_randRangeFloat((float)dVar34,(float)dVar33);
          *(float *)((int)puVar6 + 0x94) =
               (float)((double)(float)(dVar26 * dVar32 + dVar31) + dVar24);
          dVar24 = (double)MB_randRangeFloat((float)dVar40,(float)dVar39);
          *(float *)(puVar6 + 0x13) = (float)(dVar24 + dVar30);
          MB_randRangeFloat((float)dVar25,(float)dVar41);
          SpawnPart_56(uVar8 - 0x130,uVar8 - 0x140);
        }
        dVar26 = (double)(float)(dVar26 + dVar28);
      } while (dVar26 < dVar29);
    }
  }
  return;
}


