// game/water.cpp -- reconstructed from NPEA00385 EBOOT
// STATUS: NOT STARTED (raw Ghidra output)
// 45 functions, 0x17b214-0x18095c
#include <string.h>
#include "game/water.h"
#include "game/camera.h"
#include "game/draw.h"
#include "game/hero.h"
#include "game/hud.h"
#include "game/mesh.h"
#include "game/mobyfunc.h"
#include "game/mobyutil.h"
#include "game/music.h"
#include "game/pause.h"
#include "game/skyfunc.h"
#include "game/sound.h"
#include "game/update.h"
#include "game/vuchain.h"
#include "idol/fastfunc.h"
#include "idol/idol_draw.h"
#include "idol/mUnk.h"
#include "idol/shrubfunc.h"
#include "idol/tiefunc.h"
#include "sdk/lUnk.h"
#include "sdk/libgcm_cmd/marker.h"

// 0x017b214 (0x14 bytes)
void SECTION_HEADER_WATER(void)

{
  DAT_0073a924 = 0x10000;
  return;
}


// 0x017b230 (0x274 bytes)
void WaterTile_InitAll(WaterTile *tiles,int tileCnt)

{
  float *pfVar1;
  int iVar2;
  float *pfVar3;
  float *pfVar4;
  float *pfVar5;
  float *pfVar6;
  float *pfVar7;
  float *pfVar8;
  float *pfVar9;
  int iVar10;
  float *pfVar11;
  float *pfVar12;
  float *pfVar13;
  float *pfVar14;
  float *pfVar15;
  float *pfVar16;
  float *pfVar17;
  float *pfVar18;
  
  iVar2 = 0;
  if (0 < tileCnt) {
    pfVar1 = tiles->buf[0].height[0] + 2;
    pfVar6 = tiles->buf[0].heightBottom2 + 2;
    pfVar7 = tiles->buf[0].heightRight + 2;
    pfVar3 = tiles->buf[0].heightTop + 2;
    pfVar8 = tiles->buf[0].heightRight2 + 2;
    pfVar4 = tiles->buf[0].heightLeft + 2;
    pfVar5 = tiles->buf[0].heightBottom + 2;
    pfVar9 = tiles->buf[0].heightCorner + 2;
    do {
      iVar10 = 0;
      pfVar18 = pfVar9;
      pfVar14 = pfVar5;
      pfVar13 = pfVar4;
      pfVar17 = pfVar8;
      pfVar12 = pfVar3;
      pfVar16 = pfVar7;
      pfVar15 = pfVar6;
      pfVar11 = pfVar1;
      do {
        memset(pfVar11,0,0x400);
        memset(pfVar12,0,0x40);
        memset(pfVar13,0,0x40);
        memset(pfVar14,0,0x40);
        memset(pfVar15,0,0x40);
        memset(pfVar16,0,0x40);
        memset(pfVar17,0,0x40);
        memset(pfVar18,0,0x18);
        iVar10 = iVar10 + 1;
        pfVar11 = pfVar11 + 0x170;
        pfVar17 = pfVar17 + 0x170;
        pfVar12 = pfVar12 + 0x170;
        pfVar13 = pfVar13 + 0x170;
        pfVar14 = pfVar14 + 0x170;
        pfVar15 = pfVar15 + 0x170;
        pfVar16 = pfVar16 + 0x170;
        pfVar18 = pfVar18 + 0x170;
      } while (iVar10 < 3);
      (tiles->scroll).x = 0.0;
      (tiles->scroll).y = 0.0;
      (tiles->scrollRate).x = -0.0016;
      (tiles->scrollRate).y = -0.0016;
      (tiles->rotRate).x = 0.02;
      (tiles->rotAngle).x = 1.5707964;
      (tiles->rotAngle).y = -1.5707964;
      pfVar3 = pfVar3 + 0x468;
      pfVar4 = pfVar4 + 0x468;
      (tiles->rotRate).y = -0.031;
      pfVar5 = pfVar5 + 0x468;
      tiles->wig_size = 0.03;
      pfVar1 = pfVar1 + 0x468;
      tiles->flags = 0;
      pfVar6 = pfVar6 + 0x468;
      pfVar7 = pfVar7 + 0x468;
      pfVar8 = pfVar8 + 0x468;
      iVar2 = iVar2 + 1;
      pfVar9 = pfVar9 + 0x468;
      tiles = (WaterTile *)&tiles[1].ovlTex;
    } while (iVar2 < tileCnt);
  }
  return;
}


// 0x017b4b0 (0xe8 bytes)
void WaterTile_CalcGridBSphere(WaterTile *tile,BSphere *bounds)

{
  float fVar1;
  float fVar2;
  f32 fVar3;
  undefined2 radInt;
  double rad;
  double bsphereConst;
  
  bsphereConst = 1024.0;
  fVar3 = (f32)FastDoubleToInt
                         ((double)(((tile->tilePos).x + WaterTileConsts.TileOffset.x) * 1024.0));
  fVar2 = WaterTileConsts.TileOffset.y;
  fVar1 = (tile->tilePos).y;
  bounds->x = fVar3;
  fVar3 = (f32)FastDoubleToInt((double)(float)((double)(fVar1 + fVar2) * bsphereConst));
  bounds->y = fVar3;
  fVar3 = (f32)FastDoubleToInt
                         ((double)(float)((double)((tile->tilePos).z - 1.0) * bsphereConst));
  rad = (double)WaterTileConsts.TileSize.x;
  bounds->z = fVar3;
  radInt = FastDoubleToInt((double)(float)(rad * bsphereConst));
  rad = (double)WaterTileConsts.TileSize.x;
  *(undefined2 *)&bounds->rad = radInt;
  radInt = FastDoubleToInt((double)(float)(rad * bsphereConst));
  *(undefined2 *)((int)&bounds->rad + 2) = radInt;
  return;
}


// 0x017b5a0 (0x1e0 bytes)
int WaterTile_LookupTile(float x,float y,float z)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int tileCnt;
  float *pfVar4;
  int iVar5;
  int iVar6;
  WaterTileBox *pWVar7;
  int iVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  
  dVar11 = (double)z;
  dVar9 = (double)x;
  dVar10 = (double)y;
  dVar12 = 1024.0;
  iVar1 = FastDoubleToInt((double)(float)(dVar9 * 1024.0),dVar10,dVar11);
  iVar2 = FastDoubleToInt((double)(float)(dVar10 * dVar12));
  iVar3 = FastDoubleToInt((double)(float)(dVar11 * dVar12));
  iVar8 = 0;
  tileCnt = WaterTileCnt;
  pWVar7 = WaterTileBoxes;
  if (0 < WaterTileCnt) {
    do {
      if ((((pWVar7->min_x <= iVar1) && (pWVar7->min_y <= iVar2)) && (pWVar7->min_z <= iVar3)) &&
         (((iVar1 < (int)(pWVar7->min_x + (uint)pWVar7->size_x) &&
           (iVar2 < (int)(pWVar7->min_y + (uint)pWVar7->size_y))) && (iVar3 < pWVar7->min_z + 0x800)
          ))) {
        pfVar4 = (float *)((int)WaterTiles + iVar8 * 0x11a0);
        iVar5 = FastDoubleToInt
                          ((double)((float)(dVar9 - (double)(*pfVar4 + WaterTileConsts.TileOffset.x)
                                           ) / WaterTileConsts.TileGridSize.x));
        iVar6 = FastDoubleToInt
                          ((double)((float)(dVar10 - (double)(pfVar4[1] +
                                                             WaterTileConsts.TileOffset.y)) /
                                   WaterTileConsts.TileGridSize.y));
        tileCnt = WaterTileCnt;
        if (((uint)*(ushort *)((int)pfVar4 + 0x1e) & 1 << ((iVar6 >> 2 & 3U) << 2 | iVar5 >> 2 & 3U)
            ) != 0) {
          return iVar8;
        }
      }
      iVar8 = iVar8 + 1;
      pWVar7 = pWVar7 + 1;
    } while (iVar8 < tileCnt);
  }
  return -1;
}


// 0x017b780 (0x3c bytes)
void WaterWave_ScaleTable(float scale)

{
  float fVar1;
  float *pfVar2;
  longlong lVar3;
  
  pfVar2 = (float *)&DAT_0073aac0;
  lVar3 = 0x2e;
  fVar1 = scale / CONST_1_0f;
  do {
    *pfVar2 = *pfVar2 * fVar1;
    pfVar2[1] = pfVar2[1] * fVar1;
    pfVar2 = pfVar2 + 2;
    lVar3 = lVar3 + -1;
  } while (lVar3 != 0);
  return;
}


// 0x017b7bc (0xf4 bytes)
void WaterTile_StepSim(WaterTile *tile,int cnt)

{
  int iVar1;
  
  iVar1 = 0;
  if (0 < cnt) {
    do {
      if (*(short *)((int)tile + iVar1 * 0x11a0 + 0x1e) != 0) {
        StageTileBuf(g_ScratchBuf,
                           (void *)((int)tile + DAT_00e5aaa4 * 0x5c0 + iVar1 * 0x11a0 + 0x50));
        WaterTile_StepWave((float *)g_ScratchBuf,iVar1,DAT_0073a9f0,tile);
      }
      iVar1 = iVar1 + 1;
    } while (iVar1 < cnt);
  }
  iVar1 = DAT_0073a9f0;
  DAT_0073a9f0 = DAT_00e5aaa4;
  DAT_00e5aaa4 = iVar1;
  return;
}


// 0x017b8b8 (0x1d4 bytes)
void WaterTile_UpdateWaves(WaterTile *tiles,int nTiles)

{
  int iVar1;
  float *pfVar2;
  
  if (DAT_0073aa40 < 1.0 - WaterTileConsts.waveInc) {
    iVar1 = 0;
    DAT_0073a9f4 = 2;
    if (0 < nTiles) {
      pfVar2 = tiles->buf[0].height[0] + 2;
      do {
        if (tiles->mask != 0) {
          WaterTileBufLerp
                    (DAT_0073aa40,pfVar2 + DAT_0073a9f4 * 0x170,pfVar2 + DAT_0073a9f0 * 0x170,
                     pfVar2 + DAT_00e5aaa4 * 0x170);
        }
        iVar1 = iVar1 + 1;
        pfVar2 = pfVar2 + 0x468;
        tiles = (WaterTile *)&tiles[1].ovlTex;
      } while (iVar1 < nTiles);
    }
  }
  else {
    iVar1 = 0;
    DAT_0073aa40 = WaterTileConsts.waveInc;
    if (0 < nTiles) {
      do {
        if (*(short *)((int)tiles + iVar1 * 0x11a0 + 0x1e) != 0) {
          StageTileBuf(g_ScratchBuf,
                             (void *)((int)tiles + DAT_00e5aaa4 * 0x5c0 + iVar1 * 0x11a0 + 0x50));
          WaterTile_StepWave((float *)g_ScratchBuf,iVar1,DAT_0073a9f0,tiles);
        }
        iVar1 = iVar1 + 1;
      } while (iVar1 < nTiles);
    }
    DAT_0073a9f4 = DAT_00e5aaa4;
    iVar1 = DAT_0073a9f0;
    DAT_0073a9f0 = DAT_00e5aaa4;
    DAT_00e5aaa4 = iVar1;
  }
  DAT_0073aa40 = DAT_0073aa40 + WaterTileConsts.waveInc;
  return;
}


// 0x017bab0 (0x2dc bytes)
void WaterTile_UpdateWaves(WaterTile *tile)

{
  float fVar1;
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
  float *pfVar12;
  float *pfVar13;
  float *pfVar14;
  int iVar15;
  float *pfVar16;
  double dVar17;
  double dVar18;
  double dVar19;
  double dVar20;
  double dVar21;
  double dVar22;
  
  fVar4 = (tile->scroll).x + (tile->scrollRate).x;
  fVar1 = (tile->scrollRate).y;
  fVar2 = (tile->rotAngle).x;
  fVar3 = (tile->rotRate).x;
  (tile->scroll).x = fVar4;
  if (1.0 < fVar4) {
    fVar4 = fVar4 - 1.0;
    (tile->scroll).x = fVar4;
  }
  if (fVar4 < 0.0) {
    (tile->scroll).x = fVar4 + 1.0;
  }
  fVar1 = (tile->scroll).y + fVar1;
  (tile->scroll).y = fVar1;
  if (1.0 < fVar1) {
    fVar1 = fVar1 - 1.0;
    (tile->scroll).y = fVar1;
  }
  if (fVar1 < 0.0) {
    (tile->scroll).y = fVar1 + 1.0;
  }
  dVar17 = (double)FastWrapRot(fVar2,fVar3);
  (tile->rotAngle).x = (float)dVar17;
  dVar18 = (double)FastWrapRot((tile->rotAngle).y,(tile->rotRate).y);
  (tile->rotAngle).y = (float)dVar18;
  dVar20 = (double)(tile->rotAngle).x;
  fVar1 = (float)(dVar20 + 1.570796251296997);
  fVar2 = (float)(dVar18 + 1.570796251296997);
  fVar3 = (tile->scroll).x;
  pfVar14 = (float *)&DAT_0073ac40;
  pfVar13 = (float *)&DAT_0073aac0;
  iVar15 = 0;
  dVar17 = (double)(float)(3.141592502593994 - dVar18);
  if (dVar18 - (double)(float)(3.141592502593994 - dVar18) < 0.0) {
    dVar17 = dVar18;
  }
  dVar21 = (double)(float)(3.141592502593994 - dVar20);
  if (dVar20 - (double)(float)(3.141592502593994 - dVar20) < 0.0) {
    dVar21 = dVar20;
  }
  fVar4 = tile->wig_size;
  fVar5 = (tile->scroll).y;
  pfVar16 = (float *)&DAT_0073aac4;
  fVar6 = 3.1415925 - fVar1;
  if (fVar1 - (3.1415925 - fVar1) < 0.0) {
    fVar6 = fVar1;
  }
  fVar9 = 3.1415925 - fVar2;
  if (fVar2 - (3.1415925 - fVar2) < 0.0) {
    fVar9 = fVar2;
  }
  pfVar12 = (float *)&DAT_0073ac44;
  dVar19 = (double)(float)(-3.141592502593994 - dVar18);
  if ((double)(float)(-3.141592502593994 - dVar18) - dVar17 < 0.0) {
    dVar19 = dVar17;
  }
  dVar17 = (double)(float)(-3.141592502593994 - dVar20);
  if ((double)(float)(-3.141592502593994 - dVar20) - dVar21 < 0.0) {
    dVar17 = dVar21;
  }
  fVar11 = -3.1415925 - fVar1;
  if ((-3.1415925 - fVar1) - fVar6 < 0.0) {
    fVar11 = fVar6;
  }
  fVar1 = -3.1415925 - fVar2;
  if ((-3.1415925 - fVar2) - fVar9 < 0.0) {
    fVar1 = fVar9;
  }
  do {
    if (*(int *)(&DAT_0073ae70 + (iVar15 >> 1) * 4) == 0) {
      fVar2 = *pfVar14;
      fVar6 = *pfVar12;
      dVar20 = dVar17;
      dVar18 = dVar17 * dVar17;
      fVar9 = fVar11;
      fVar10 = fVar11 * fVar11;
    }
    else {
      fVar2 = *pfVar14;
      fVar6 = *pfVar12;
      dVar20 = dVar19;
      dVar18 = dVar19 * dVar19;
      fVar9 = fVar1;
      fVar10 = fVar1 * fVar1;
    }
    dVar22 = (double)(float)dVar18;
    iVar15 = iVar15 + 2;
    pfVar14 = pfVar14 + 2;
    pfVar12 = pfVar12 + 2;
    fVar7 = fVar10 * fVar10 * fVar9;
    dVar18 = (double)(float)(dVar22 * (double)(float)(dVar22 * dVar20));
    fVar8 = fVar10 * fVar7;
    dVar21 = (double)(float)(dVar22 * dVar18);
    *pfVar13 = fVar2 + (fVar10 * fVar8 * 2.601887e-06 +
                       fVar8 * -0.0001980741 +
                       fVar7 * 0.0083330255 + fVar10 * fVar9 * -0.16666657 + fVar9) * fVar4 + fVar3;
    *pfVar16 = fVar6 + ((float)(dVar22 * dVar21) * 2.601887e-06 +
                       (float)(dVar21 * -0.0001980741071747616 +
                              (double)(float)(dVar18 * 0.008333025500178337 +
                                             (double)(float)((double)(float)(dVar22 * dVar20) *
                                                             -0.16666656732559204 + dVar20)))) *
                       fVar4 + fVar5;
    pfVar13 = pfVar13 + 2;
    pfVar16 = pfVar16 + 2;
  } while (iVar15 < 0x5c);
  return;
}


// 0x017bd90 (0x620 bytes)
void WaterTile_PutDrop
               (float x,float y,float radius,float height,WaterTile *tiles,int tileCount,float add)

{
  uint uVar1;
  uint uVar2;
  byte bVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  longlong lVar14;
  int iVar15;
  int iVar16;
  longlong lVar17;
  int iVar19;
  longlong lVar18;
  float *pfVar21;
  longlong lVar20;
  longlong lVar22;
  int in_r9;
  longlong lVar23;
  int iVar24;
  int iVar25;
  longlong lVar26;
  
  lVar20 = (longlong)(int)tiles;
  iVar16 = 0;
  if (0 < tileCount) {
    do {
      fVar13 = WaterTileConsts.TileGridSize.y;
      fVar12 = WaterTileConsts.TileGridSize.x;
      fVar11 = WaterTileConsts.TileOffset.x;
      pfVar21 = (float *)lVar20;
      fVar6 = (x - (*pfVar21 + WaterTileConsts.TileOffset.x)) / WaterTileConsts.TileGridSize.x;
      fVar5 = (y - (pfVar21[1] + WaterTileConsts.TileOffset.y)) / WaterTileConsts.TileGridSize.y;
      uVar1 = (uint)(fVar6 - radius);
      iVar25 = (int)(fVar6 + radius);
      uVar2 = (uint)(fVar5 - radius);
      iVar15 = (int)(fVar5 + radius);
      lVar23 = (ulonglong)uVar2 + ((longlong)(int)uVar2 >> 0x3f & -(ulonglong)uVar2);
      iVar25 = iVar25 + ((uint)(0xf - (longlong)iVar25 >> 0x3f) & 0xfU - iVar25);
      lVar14 = (ulonglong)uVar1 + ((longlong)(int)uVar1 >> 0x3f & -(ulonglong)uVar1);
      iVar15 = iVar15 + ((uint)(0xf - (longlong)iVar15 >> 0x3f) & 0xfU - iVar15);
      fVar5 = WaterTileConsts.TileGridSize.y * (float)(longlong)(int)lVar23 +
              pfVar21[1] + WaterTileConsts.TileOffset.y;
      if ((int)lVar23 <= iVar15) {
        lVar26 = lVar23 * 4;
        lVar22 = lVar23 * 0x40 + lVar20;
        do {
          fVar6 = fVar12 * (float)(longlong)(int)lVar14 + *pfVar21 + fVar11;
          if ((int)lVar14 <= iVar25) {
            lVar17 = lVar14 * 4;
            lVar18 = lVar14;
            do {
              fVar4 = (x - fVar6) * (x - fVar6) + (y - fVar5) * (y - fVar5);
              fVar7 = height / SQRT(fVar4);
              if (fVar4 - 1.0 < 0.0) {
                fVar7 = height;
              }
              iVar8 = (int)lVar17;
              iVar9 = (int)lVar22;
              if (in_r9 == 0) {
                fVar4 = *(float *)(DAT_00e5aaa4 * 0x5c0 + iVar9 + iVar8 + 0x50);
                if (ABS(fVar7) < ABS(fVar4)) {
                  fVar7 = fVar4;
                }
              }
              else {
                fVar7 = fVar7 + *(float *)(DAT_0073a9f4 * 0x5c0 + iVar9 + iVar8 + 0x50);
              }
              iVar24 = (int)lVar23;
              *(float *)(DAT_00e5aaa4 * 0x5c0 + iVar9 + iVar8 + 0x50) = fVar7;
              if (iVar24 < 2) {
                bVar3 = *(byte *)(pfVar21 + 3);
                if (bVar3 != 0xff) {
                  if (iVar24 == 0) {
                    *(undefined4 *)
                     ((int)tiles + iVar8 + DAT_00e5aaa4 * 0x5c0 + (uint)bVar3 * 0x11a0 + 0x4d0) =
                         *(undefined4 *)(DAT_00e5aaa4 * 0x5c0 + iVar9 + iVar8 + 0x50);
                  }
                  else {
                    *(undefined4 *)
                     ((int)tiles + iVar8 + DAT_00e5aaa4 * 0x5c0 + (uint)bVar3 * 0x11a0 + 0x550) =
                         *(undefined4 *)(DAT_00e5aaa4 * 0x5c0 + iVar9 + iVar8 + 0x50);
                  }
                }
              }
              iVar19 = (int)lVar18;
              iVar10 = (int)lVar26;
              if (iVar19 < 2) {
                bVar3 = *(byte *)((int)pfVar21 + 0xd);
                if (bVar3 != 0xff) {
                  if (iVar19 == 0) {
                    *(undefined4 *)
                     ((int)tiles + iVar10 + DAT_00e5aaa4 * 0x5c0 + (uint)bVar3 * 0x11a0 + 0x510) =
                         *(undefined4 *)(DAT_00e5aaa4 * 0x5c0 + iVar9 + iVar8 + 0x50);
                  }
                  else {
                    *(undefined4 *)
                     ((int)tiles + iVar10 + DAT_00e5aaa4 * 0x5c0 + (uint)bVar3 * 0x11a0 + 0x590) =
                         *(undefined4 *)(DAT_00e5aaa4 * 0x5c0 + iVar9 + iVar8 + 0x50);
                  }
                }
              }
              if ((iVar24 == 0xf) && (*(byte *)((int)pfVar21 + 0xe) != 0xff)) {
                *(undefined4 *)
                 ((int)tiles +
                 iVar8 + DAT_00e5aaa4 * 0x5c0 + (uint)*(byte *)((int)pfVar21 + 0xe) * 0x11a0 + 0x450
                 ) = *(undefined4 *)(DAT_00e5aaa4 * 0x5c0 + iVar9 + iVar8 + 0x50);
              }
              if ((iVar19 == 0xf) && (*(byte *)((int)pfVar21 + 0xf) != 0xff)) {
                *(undefined4 *)
                 ((int)tiles +
                 iVar10 + DAT_00e5aaa4 * 0x5c0 + (uint)*(byte *)((int)pfVar21 + 0xf) * 0x11a0 +
                 0x490) = *(undefined4 *)(DAT_00e5aaa4 * 0x5c0 + iVar9 + iVar8 + 0x50);
              }
              if (*(byte *)(pfVar21 + 4) != 0xff) {
                if (iVar19 == 0 && iVar24 == 0) {
                  *(float *)((int)tiles +
                            DAT_00e5aaa4 * 0x5c0 + (uint)*(byte *)(pfVar21 + 4) * 0x11a0 + 0x5dc) =
                       pfVar21[DAT_00e5aaa4 * 0x170 + 0x14];
                }
                if (iVar19 == 1 && iVar24 == 0) {
                  *(float *)((int)tiles +
                            DAT_00e5aaa4 * 0x5c0 + (uint)*(byte *)(pfVar21 + 4) * 0x11a0 + 0x5e0) =
                       pfVar21[DAT_00e5aaa4 * 0x170 + 0x15];
                }
                if (iVar19 == 0 && iVar24 == 1) {
                  *(float *)((int)tiles +
                            DAT_00e5aaa4 * 0x5c0 + (uint)*(byte *)(pfVar21 + 4) * 0x11a0 + 0x5e4) =
                       pfVar21[DAT_00e5aaa4 * 0x170 + 0x24];
                }
              }
              if ((*(byte *)((int)pfVar21 + 0x11) != 0xff) && (iVar19 == 0xf && iVar24 == 0)) {
                *(float *)((int)tiles +
                          DAT_00e5aaa4 * 0x5c0 +
                          (uint)*(byte *)((int)pfVar21 + 0x11) * 0x11a0 + 0x5d8) =
                     pfVar21[DAT_00e5aaa4 * 0x170 + 0x23];
              }
              if ((*(byte *)((int)pfVar21 + 0x12) != 0xff) && (iVar19 == 0 && iVar24 == 0xf)) {
                *(float *)((int)tiles +
                          DAT_00e5aaa4 * 0x5c0 +
                          (uint)*(byte *)((int)pfVar21 + 0x12) * 0x11a0 + 0x5d4) =
                     pfVar21[DAT_00e5aaa4 * 0x170 + 0x104];
              }
              if ((*(byte *)((int)pfVar21 + 0x13) != 0xff) && (iVar19 == 0xf && iVar24 == 0xf)) {
                *(float *)((int)tiles +
                          DAT_00e5aaa4 * 0x5c0 +
                          (uint)*(byte *)((int)pfVar21 + 0x13) * 0x11a0 + 0x5d0) =
                     pfVar21[DAT_00e5aaa4 * 0x170 + 0x113];
              }
              lVar18 = lVar18 + 1;
              lVar17 = lVar17 + 4;
              fVar6 = fVar6 + fVar12;
            } while ((int)lVar18 <= iVar25);
          }
          lVar23 = lVar23 + 1;
          fVar5 = fVar5 + fVar13;
          lVar22 = lVar22 + 0x40;
          lVar26 = lVar26 + 4;
        } while ((int)lVar23 <= iVar15);
      }
      lVar20 = lVar20 + 0x11a0;
      iVar16 = iVar16 + 1;
    } while (iVar16 < tileCount);
  }
  return;
}


// 0x017c3b0 (0x24 bytes)
void WaterTile_PutDrop_Thunk
               (double param_1,double param_2,double param_3,double param_4,double param_5,
               WaterTile *param_6,int param_7)

{
  WaterTile_PutDrop((float)param_1,(float)param_2,(float)param_3,(float)param_4,param_6,param_7,
                    (float)param_5);
  return;
}


// 0x017c3e0 (0x2dc bytes)
// inlined: FastRSqrt @0x17c628
float WaterTile_GetHeight(float x,float y,float z)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  int iVar6;
  int iVar9;
  longlong lVar7;
  longlong lVar8;
  float *in_r6;
  int iVar10;
  float *in_r7;
  float *pfVar11;
  int iVar12;
  int iVar13;
  double dVar14;
  double dVar15;
  double dVar16;
  double dVar17;
  double dVar18;
  double dVar19;
  double dVar20;
  
  dVar14 = (double)x;
  dVar17 = (double)y;
  dVar18 = (double)x;
  iVar9 = WaterTile_LookupTile(x,y,z);
  if (-1 < iVar9) {
    pfVar11 = (float *)((int)WaterTiles + iVar9 * 0x11a0);
    dVar18 = (double)(float)(dVar14 - (double)(*pfVar11 + WaterTileConsts.TileOffset.x));
    dVar17 = (double)(float)(dVar17 - (double)(pfVar11[1] + WaterTileConsts.TileOffset.y));
    lVar7 = FastDoubleToInt
                      ((double)(float)(dVar18 / (double)WaterTileConsts.TileGridSize.x));
    lVar8 = FastDoubleToInt
                      ((double)(float)(dVar17 / (double)WaterTileConsts.TileGridSize.y));
    dVar14 = (double)FastIntToDouble(lVar7);
    dVar20 = (double)(float)(-(double)(float)(dVar14 * (double)WaterTileConsts.TileGridSize.x -
                                             dVar18) / (double)WaterTileConsts.TileGridSize.x);
    dVar14 = (double)FastIntToDouble(lVar8);
    dVar19 = (double)WaterTileConsts.TileGridSize.y;
    iVar12 = (int)lVar7;
    iVar10 = DAT_0073a9f4 * 0x5c0;
    iVar9 = (int)(lVar7 << 2);
    iVar6 = iVar9 + (int)(lVar8 << 6) + iVar10;
    dVar18 = (double)*(float *)((int)pfVar11 + iVar6 + 0x50);
    if (iVar12 == 0xf) {
      fVar1 = *(float *)((int)pfVar11 + (int)(lVar8 << 2) + iVar10 + 0x510);
    }
    else {
      fVar1 = *(float *)((int)pfVar11 + iVar6 + 0x54);
    }
    iVar13 = (int)lVar8;
    if (iVar13 == 0xf) {
      fVar2 = *(float *)((int)pfVar11 + iVar9 + iVar10 + 0x4d0);
    }
    else {
      fVar2 = *(float *)((int)pfVar11 + iVar6 + 0x90);
    }
    dVar15 = (double)fVar2;
    if ((iVar12 == 0xf) && (iVar13 == 0xf)) {
      dVar16 = (double)pfVar11[DAT_0073a9f4 * 0x170 + 0x177];
    }
    else if (iVar12 == 0xf) {
      dVar16 = (double)*(float *)((int)pfVar11 + (int)(lVar8 << 2) + iVar10 + 0x514);
    }
    else if (iVar13 == 0xf) {
      dVar16 = (double)*(float *)((int)pfVar11 + iVar9 + iVar10 + 0x4d4);
    }
    else {
      dVar16 = (double)*(float *)((int)pfVar11 + iVar6 + 0x94);
    }
    if (in_r6 != (float *)0x0) {
      fVar2 = (float)((double)(float)((double)fVar1 - dVar18) * dVar20 + dVar18);
      *in_r6 = ((float)((double)(float)(dVar16 - dVar15) * dVar20 + dVar15) - fVar2) *
               (float)(-(double)(float)(dVar14 * dVar19 - dVar17) / dVar19) + fVar2 + pfVar11[2];
      dVar19 = (double)WaterTileConsts.TileGridSize.y;
    }
    if (in_r7 != (float *)0x0) {
      dVar14 = (double)WaterTileConsts.TileGridSize.x;
      in_r7[1] = (float)(dVar14 * (double)(float)(dVar15 - dVar18));
      *in_r7 = (float)((double)(float)((double)fVar1 - dVar18) * dVar19);
      in_r7[2] = -(float)(dVar14 * dVar19);
      fVar1 = in_r7[1];
      fVar2 = *in_r7;
      fVar3 = in_r7[2];
      dVar18 = 0.0;
      in_r7[3] = 0.0;
      fVar4 = fVar3 * fVar3 + fVar2 * fVar2 + fVar1 * fVar1;
      dVar14 = dVar18;
      dVar17 = dVar18;
      if (SQRT(fVar4) != 0.0) {
        fVar5 = 1.0 / SQRT(fVar4);
        fVar5 = -(fVar4 * fVar5 * fVar5 - 1.0) * fVar5 * 0.5 + fVar5;
        fVar5 = -(fVar4 * fVar5 * fVar5 - 1.0) * fVar5 * 0.5 + fVar5;
        fVar5 = -(fVar4 * fVar5 * fVar5 - 1.0) * fVar5 * 0.5 + fVar5;
        dVar18 = (double)(fVar2 * fVar5);
        dVar14 = (double)(fVar1 * fVar5);
        dVar17 = (double)(fVar3 * fVar5);
      }
      *in_r7 = (float)dVar18;
      in_r7[1] = (float)dVar14;
      in_r7[2] = (float)dVar17;
    }
  }
  return (float)dVar18;
}


// 0x017c6bc (0x94 bytes)
void WaterTile_BuildVertexGrid(WaterTile *tile)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float *pfVar4;
  float *pfVar5;
  int iVar6;
  float *pfVar7;
  float *pfVar8;
  longlong lVar9;
  
  iVar6 = 0;
  pfVar7 = (float *)(g_ScratchBuf + 0x2000);
  pfVar4 = (float *)(g_ScratchBuf + 0x70);
  fVar2 = (tile->tilePos).y + WaterTileConsts.TileOffset.y;
  do {
    lVar9 = 0x11;
    fVar3 = (tile->tilePos).x + WaterTileConsts.TileOffset.x;
    pfVar5 = pfVar4;
    pfVar8 = pfVar7;
    do {
      fVar1 = *pfVar5;
      *pfVar8 = fVar3;
      pfVar8[1] = fVar2;
      pfVar5 = pfVar5 + 1;
      pfVar7 = pfVar8 + 3;
      pfVar8[2] = fVar1 + (tile->tilePos).z;
      fVar3 = fVar3 + WaterTileConsts.TileGridSize.x;
      lVar9 = lVar9 + -1;
      pfVar8 = pfVar7;
    } while (lVar9 != 0);
    iVar6 = iVar6 + 1;
    pfVar4 = pfVar4 + 0x18;
    fVar2 = fVar2 + WaterTileConsts.TileGridSize.y;
  } while (iVar6 < 0x11);
  return;
}


// 0x017c750 (0x120 bytes)
void WaterTile_DrawCellBase(WaterTile *tile,uint idx)

{
  undefined4 uVar1;
  short sVar2;
  int iVar3;
  int iVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  short *psVar7;
  undefined4 *puVar8;
  longlong lVar9;
  
  puVar5 = (undefined4 *)idol::AllocateMemAlign(FrameHeap,0x450,0x10);
  lVar9 = 0x2e;
  puVar6 = &DAT_0073aac0;
  iVar3 = g_ScratchBuf +
          ((idx & 3) * 4 +
          (int)((longlong)((int)idx >> 2) << 6) + (int)((longlong)((int)idx >> 2) << 2)) * 0xc +
          0x2000;
  psVar7 = &DAT_0073aa60;
  puVar8 = puVar5;
  do {
    sVar2 = *psVar7;
    psVar7 = psVar7 + 1;
    iVar4 = sVar2 * 3;
    *puVar8 = *(undefined4 *)(iVar3 + sVar2 * 0xc);
    puVar8[1] = *(undefined4 *)(iVar3 + (iVar4 + 1) * 4);
    puVar8[2] = *(undefined4 *)(iVar3 + (iVar4 + 2) * 4);
    puVar8[3] = *puVar6;
    uVar1 = puVar6[1];
    puVar8[5] = 0x7f7f7f7f;
    puVar6 = puVar6 + 2;
    puVar8[4] = uVar1;
    puVar8 = puVar8 + 6;
    lVar9 = lVar9 + -1;
  } while (lVar9 != 0);
  FastDrawStripColor(0x2e,puVar5,9);
  return;
}


// 0x017c888 (0x28c bytes)
void WaterTile_DrawCellOvl(WaterTile *tile,uint idx)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  longlong lVar4;
  longlong lVar5;
  ulonglong uVar6;
  longlong lVar7;
  short *psVar8;
  undefined4 *puVar10;
  longlong lVar9;
  ulonglong uVar11;
  undefined8 in_LR;
  longlong lVar12;
  GPiece<16> auVar13;
  GPiece<16> auVar14;
  GPiece<16> auVar15;
  GPiece<16> auVar16;
  GPiece<16> auVar17;
  GPiece<16> auVar18;
  GPiece<16> auVar19;
  GPiece<16> auVar20;
  GPiece<16> auVar21;
  GPiece<16> auVar22;
  GPiece<16> auVar23;
  GPiece<16> auVar24;
  GPiece<16> auVar25;
  
  lVar5 = idol::AllocateMemAlign(FrameHeap,0x450,0x10);
  uVar6 = ((ulonglong)idx & 3) * 4 + (longlong)((int)idx >> 2) * 0x44;
  auVar17 = loadVectorLeftIndexed(in_LR,0x17c870);
  auVar17 = auVar17 >> 0x60 & (GPiece<16>)0xffffffff;
  auVar18 = auVar17 | auVar17 << 0x20 | auVar17 << 0x40 | auVar17 << 0x60;
  auVar17 = loadVectorLeftIndexed(4,0x17c870);
  auVar17 = auVar17 >> 0x60 & (GPiece<16>)0xffffffff;
  auVar16 = auVar17 | auVar17 << 0x20 | auVar17 << 0x40 | auVar17 << 0x60;
  iVar2 = g_ScratchBuf + (int)uVar6 * 0xc + 0x2000;
  auVar17 = loadVectorLeftIndexed(8,0x17c870);
  auVar14 = loadVectorLeftIndexed(0xc,0x17c870);
  auVar13 = loadVectorLeftIndexed(0x10,0x17c870);
  auVar17 = auVar17 >> 0x60 & (GPiece<16>)0xffffffff;
  auVar15 = auVar17 | auVar17 << 0x20 | auVar17 << 0x40 | auVar17 << 0x60;
  iVar3 = g_ScratchBuf + (int)((uVar6 & 0xffffffff) << 3) + 0x780;
  auVar17 = auVar14 >> 0x60 & (GPiece<16>)0xffffffff;
  auVar14 = auVar17 | auVar17 << 0x20 | auVar17 << 0x40 | auVar17 << 0x60;
  auVar17 = auVar13 >> 0x60 & (GPiece<16>)0xffffffff;
  psVar8 = &DAT_0073aa60;
  uVar6 = (ulonglong)g_ScratchBuf + (uVar6 & 0x3fffffff) * 4 + 0x1088 & 0xffffffff;
  lVar7 = lVar5 + 0x14;
  lVar12 = 0x2e;
  lVar9 = lVar5;
  do {
    uVar11 = (ulonglong)*psVar8;
    auVar13 = ZEXT416(0xfffffff8);
    auVar20 = ZEXT416(0xffffffff);
    auVar21 = auVar20 | auVar20 << 0x20 | auVar20 << 0x40 | auVar20 << 0x60;
    puVar10 = (undefined4 *)lVar9;
    *puVar10 = *(undefined4 *)(iVar2 + *psVar8 * 0xc);
    puVar10[1] = *(undefined4 *)(iVar2 + (int)(uVar11 * 3 + 1) * 4);
    lVar4 = (uVar11 & 0x3fffffff) * 4;
    puVar10[2] = *(undefined4 *)(iVar2 + (int)(uVar11 * 3 + 2) * 4);
    auVar20 = ZEXT416(0xffffffff);
    auVar23 = auVar20 | auVar20 << 0x20 | auVar20 << 0x40 | auVar20 << 0x60;
    puVar10[3] = *(undefined4 *)(iVar3 + (int)((uVar11 & 0x7fffffff) << 3));
    auVar20 = ZEXT416(0xffffffff);
    auVar25 = auVar20 | auVar20 << 0x20 | auVar20 << 0x40 | auVar20 << 0x60;
    puVar10[4] = *(undefined4 *)(iVar3 + (int)((uVar11 & 0x7fffffff) * 2 + 1) * 4);
    auVar19 = loadVectorLeftIndexed(lVar4,uVar6);
    auVar20 = loadVectorRightIndexed(lVar4 + 0x10,uVar6);
    auVar22 = vectorShiftLeftIntegerWord(auVar21,auVar21);
    auVar19 = auVar19 | auVar20;
    auVar20 = ZEXT416(0xfffffff0);
    auVar24 = vectorShiftLeftIntegerWord(auVar23,auVar23);
    auVar25 = vectorShiftLeftIntegerWord(auVar25,auVar25);
    auVar21 = vectorRotateLeftIntegerWord
                        (auVar19,auVar13 | auVar13 << 0x20 | auVar13 << 0x40 | auVar13 << 0x60);
    auVar20 = vectorRotateLeftIntegerWord
                        (auVar19,auVar20 | auVar20 << 0x20 | auVar20 << 0x40 | auVar20 << 0x60);
    auVar23 = vectorLogicalAnd(auVar19,auVar15);
    auVar13 = vectorShiftRightWord(auVar19,auVar14);
    auVar21 = vectorLogicalAnd(auVar21,auVar15);
    auVar19 = vectorLogicalAnd(auVar20,auVar15);
    auVar23 = vectorConvertFromUnsignedFixedPointWord(auVar23,0);
    auVar20 = vectorConvertFromUnsignedFixedPointWord(auVar13,0);
    auVar13 = ZEXT416(0xffffffff);
    auVar13 = auVar13 | auVar13 << 0x20 | auVar13 << 0x40 | auVar13 << 0x60;
    auVar21 = vectorConvertFromUnsignedFixedPointWord(auVar21,0);
    auVar19 = vectorConvertFromUnsignedFixedPointWord(auVar19,0);
    lVar9 = lVar9 + 0x18;
    psVar8 = psVar8 + 1;
    auVar23 = vectorMultiplyAddFloatingPoint(auVar23,auVar18,auVar24);
    auVar21 = vectorMultiplyAddFloatingPoint(auVar21,auVar18,auVar22);
    auVar19 = vectorMultiplyAddFloatingPoint(auVar19,auVar18,auVar25);
    auVar13 = vectorShiftLeftIntegerWord(auVar13,auVar13);
    auVar13 = vectorMultiplyAddFloatingPoint(auVar20,auVar18,auVar13);
    auVar20 = vectorCompareGreaterThanFloatingPoint(auVar23,auVar16);
    auVar22 = vectorCompareGreaterThanFloatingPoint(auVar21,auVar16);
    auVar23 = vectorConditionalSelect(auVar23,auVar16,auVar20);
    auVar24 = vectorCompareGreaterThanFloatingPoint(auVar19,auVar16);
    auVar20 = vectorConditionalSelect(auVar21,auVar16,auVar22);
    auVar19 = vectorConditionalSelect(auVar19,auVar16,auVar24);
    auVar23 = vectorAddFloatingPoint(auVar23,auVar18);
    auVar22 = vectorCompareGreaterThanFloatingPoint(auVar13,auVar16);
    auVar21 = vectorAddFloatingPoint(auVar20,auVar18);
    auVar20 = vectorConditionalSelect(auVar13,auVar16,auVar22);
    auVar19 = vectorAddFloatingPoint(auVar19,auVar18);
    auVar13 = ZEXT416(8);
    auVar20 = vectorAddFloatingPoint(auVar20,auVar18);
    auVar24 = vectorCompareGreaterThanFloatingPoint(auVar23,auVar16);
    auVar22 = vectorCompareGreaterThanFloatingPoint(auVar21,auVar16);
    auVar23 = vectorConditionalSelect(auVar23,auVar16,auVar24);
    auVar21 = vectorConditionalSelect(auVar21,auVar16,auVar22);
    auVar22 = vectorCompareGreaterThanFloatingPoint(auVar19,auVar16);
    auVar19 = vectorConditionalSelect(auVar19,auVar16,auVar22);
    auVar21 = vectorConvertToSignedFixedPointWordSaturate(auVar21,0);
    auVar22 = vectorCompareGreaterThanFloatingPoint(auVar20,auVar16);
    auVar23 = vectorConvertToSignedFixedPointWordSaturate(auVar23,0);
    auVar20 = vectorConditionalSelect(auVar20,auVar16,auVar22);
    auVar19 = vectorConvertToSignedFixedPointWordSaturate(auVar19,0);
    auVar20 = vectorConvertToSignedFixedPointWordSaturate(auVar20,0);
    auVar21 = vectorShiftLeftIntegerWord
                        (auVar21,auVar13 | auVar13 << 0x20 | auVar13 << 0x40 | auVar13 << 0x60);
    auVar19 = vectorShiftLeftIntegerWord
                        (auVar19,auVar17 | auVar17 << 0x20 | auVar17 << 0x40 | auVar17 << 0x60);
    auVar13 = vectorShiftLeftIntegerWord(auVar20,auVar14);
    auVar13 = (auVar23 | auVar21 | auVar19 | auVar13) >> 0x60 & (GPiece<16>)0xffffffff;
    uVar1 = storeVectorElementWordIndexed
                      (auVar13 | auVar13 << 0x20 | auVar13 << 0x40 | auVar13 << 0x60,0,lVar7);
    *(undefined4 *)((uint)lVar7 & 0xfffffffc) = uVar1;
    lVar7 = lVar7 + 0x18;
    lVar12 = lVar12 + -1;
  } while (lVar12 != 0);
  FastDrawStripColor(0x2e,lVar5,9);
  return;
}


// 0x017cb20 (0x494 bytes)
void WaterTile_CullAndDrawCell(WaterTile *tile,uint idx,int clipMode)

{
  longlong lVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  undefined4 uVar6;
  ulonglong *puVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  uint uVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  ulonglong uVar25;
  ulonglong uVar26;
  ulonglong unaff_r24;
  ulonglong uVar27;
  ulonglong unaff_r25;
  ulonglong uVar28;
  ulonglong unaff_r26;
  int iVar29;
  ulonglong unaff_r27;
  ulonglong unaff_r28;
  ulonglong unaff_r29;
  ulonglong unaff_r30;
  longlong lVar30;
  float *pfVar31;
  ulonglong unaff_r31;
  ulonglong in_LR;
  ulonglong in_f30;
  ulonglong in_f31;
  double dVar32;
  GPiece<16> auVar33;
  GPiece<16> auVar34;
  GPiece<16> auVar35;
  GPiece<16> auVar36;
  GPiece<16> auVar37;
  GPiece<16> auVar38;
  GPiece<16> auVar39;
  GPiece<16> auVar40;
  
  uVar25 = ZEXT48(&stack0x00000000);
  lVar1 = uVar25 - 0x130;
  puVar7 = (ulonglong *)lVar1;
  *puVar7 = uVar25;
  puVar7[0x28] = in_LR;
  puVar7[0x24] = in_f30;
  puVar7[0x25] = in_f31;
  puVar7[0x1f] = unaff_r27;
  *(uint *)(puVar7 + 0x1a) = idx;
  puVar7[0x23] = unaff_r31;
  *(uint *)((int)puVar7 + 0xd4) = idx;
  *(uint *)(puVar7 + 0x1b) = idx;
  *(uint *)((int)puVar7 + 0xdc) = idx;
  puVar7[0x22] = unaff_r30;
  puVar7[0x21] = unaff_r29;
  puVar7[0x20] = unaff_r28;
  puVar7[0x1e] = unaff_r26;
  puVar7[0x1d] = unaff_r25;
  puVar7[0x1c] = unaff_r24;
  if (clipMode != 0) {
    auVar34 = ZEXT416(3);
    auVar35 = ZEXT416(0xffffffff);
    auVar36 = auVar35 | auVar35 << 0x20 | auVar35 << 0x40 | auVar35 << 0x60;
    auVar35 = ZEXT416(0xffffffff);
    auVar38 = auVar35 | auVar35 << 0x20 | auVar35 << 0x40 | auVar35 << 0x60;
    auVar35 = ZEXT416(2);
    auVar33 = vectorLogicalAnd(*(undefined1 (*) [16])(puVar7 + 0x1a),
                               auVar34 | auVar34 << 0x20 | auVar34 << 0x40 | auVar34 << 0x60);
    auVar37 = vectorShiftLeftIntegerWord(auVar36,auVar36);
    auVar34 = loadVectorLeftIndexed(0xd0,0x17cb14);
    auVar39 = vectorShiftLeftIntegerWord(auVar38,auVar38);
    auVar34 = auVar34 >> 0x60 & (GPiece<16>)0xffffffff;
    auVar36 = auVar34 | auVar34 << 0x20 | auVar34 << 0x40 | auVar34 << 0x60;
    auVar38 = loadVectorLeftIndexed(8,0x73aa00);
    auVar33 = vectorConvertFromSignedFixedPointWord(auVar33,0);
    auVar40 = loadVectorLeftIndexed(0xc,0x73aa00);
    auVar37 = vectorMultiplyAddFloatingPoint(auVar38,auVar36,auVar37);
    auVar34 = vectorShiftRightAlgebraicWord
                        (*(undefined1 (*) [16])(puVar7 + 0x1a),
                         auVar35 | auVar35 << 0x20 | auVar35 << 0x40 | auVar35 << 0x60);
    auVar35 = vectorMultiplyAddFloatingPoint(auVar40,auVar36,auVar39);
    auVar36 = loadVectorLeftIndexed(0xd0,(longlong)(int)tile);
    auVar34 = vectorConvertFromSignedFixedPointWord(auVar34,0);
    auVar36 = vectorAddFloatingPoint(auVar36,auVar38);
    auVar38 = loadVectorLeftIndexed(4,(longlong)(int)tile);
    fVar4 = (tile->tilePos).z;
    auVar38 = vectorAddFloatingPoint(auVar38,auVar40);
    auVar39 = vectorMultiplyAddFloatingPoint(auVar37,auVar33,auVar37);
    uVar28 = 0;
    auVar40 = vectorMultiplyAddFloatingPoint(auVar35,auVar34,auVar35);
    auVar33 = vectorMultiplyAddFloatingPoint(auVar37,auVar33,auVar36);
    auVar35 = vectorMultiplyAddFloatingPoint(auVar35,auVar34,auVar38);
    iVar29 = 0;
    auVar36 = vectorAddFloatingPoint(auVar36,auVar39);
    uVar27 = 0;
    lVar30 = uVar25 - 0xa0;
    auVar38 = vectorAddFloatingPoint(auVar38,auVar40);
    auVar34 = auVar33 >> 0x60 & (GPiece<16>)0xffffffff;
    auVar33 = auVar34 | auVar34 << 0x20 | auVar34 << 0x40 | auVar34 << 0x60;
    auVar34 = auVar35 >> 0x60 & (GPiece<16>)0xffffffff;
    auVar35 = auVar34 | auVar34 << 0x20 | auVar34 << 0x40 | auVar34 << 0x60;
    auVar34 = auVar36 >> 0x60 & (GPiece<16>)0xffffffff;
    auVar36 = auVar34 | auVar34 << 0x20 | auVar34 << 0x40 | auVar34 << 0x60;
    uVar6 = storeVectorElementWordIndexed(auVar33,0x90,lVar1);
    *(undefined4 *)(puVar7 + 0x12) = uVar6;
    uVar6 = storeVectorElementWordIndexed(auVar35,0x94,lVar1);
    *(undefined4 *)((int)puVar7 + 0x94) = uVar6;
    *(float *)(puVar7 + 0x13) = fVar4;
    *(undefined4 *)((int)puVar7 + 0x9c) = 0x3f800000;
    auVar34 = auVar38 >> 0x60 & (GPiece<16>)0xffffffff;
    auVar34 = auVar34 | auVar34 << 0x20 | auVar34 << 0x40 | auVar34 << 0x60;
    uVar6 = storeVectorElementWordIndexed(auVar36,0xa0,lVar1);
    *(undefined4 *)(puVar7 + 0x14) = uVar6;
    uVar6 = storeVectorElementWordIndexed(auVar35,0xa4,lVar1);
    *(undefined4 *)((int)puVar7 + 0xa4) = uVar6;
    uVar6 = storeVectorElementWordIndexed(auVar33,0xb0,lVar1);
    *(undefined4 *)(puVar7 + 0x16) = uVar6;
    *(float *)(puVar7 + 0x15) = fVar4;
    *(undefined4 *)((int)puVar7 + 0xac) = 0x3f800000;
    uVar6 = storeVectorElementWordIndexed(auVar34,0xb4,lVar1);
    *(undefined4 *)((int)puVar7 + 0xb4) = uVar6;
    *(float *)(puVar7 + 0x17) = fVar4;
    uVar6 = storeVectorElementWordIndexed(auVar36,0xc0,lVar1);
    *(undefined4 *)(puVar7 + 0x18) = uVar6;
    *(undefined4 *)((int)puVar7 + 0xbc) = 0x3f800000;
    uVar6 = storeVectorElementWordIndexed(auVar34,0xc4,lVar1);
    *(undefined4 *)((int)puVar7 + 0xc4) = uVar6;
    *(float *)(puVar7 + 0x19) = fVar4;
    *(undefined4 *)((int)puVar7 + 0xcc) = 0x3f800000;
    dVar32 = 1024.0;
    do {
      fVar8 = GameCamera.posZ;
      fVar3 = GameCamera.posY;
      fVar15 = GameCamera.mtx3.v1.z;
      fVar14 = GameCamera.mtx3.v1.y;
      fVar13 = GameCamera.mtx3.v1.x;
      fVar9 = GameCamera.mtx3.v0.x;
      pfVar31 = (float *)lVar30;
      fVar4 = *pfVar31 - GameCamera.posX;
      *(float *)(puVar7 + 0xe) = fVar4;
      fVar17 = GameCamera.mtx3.v2.x;
      fVar16 = GameCamera.mtx3.v1.w;
      fVar12 = GameCamera.mtx3.v0.z;
      fVar10 = GameCamera.mtx3.v0.y;
      fVar4 = (float)((double)fVar4 * dVar32);
      fVar2 = (float)((double)(pfVar31[1] - fVar3) * dVar32);
      *(float *)((int)puVar7 + 0x74) = pfVar31[1] - fVar3;
      fVar21 = GameCamera.mtx3.v3.x;
      fVar19 = GameCamera.mtx3.v2.z;
      fVar18 = GameCamera.mtx3.v2.y;
      fVar5 = pfVar31[3];
      fVar3 = (float)((double)(pfVar31[2] - fVar8) * dVar32);
      fVar8 = GameCamera.mtx3.v0.w * fVar4;
      *(float *)(puVar7 + 0x10) = fVar4;
      *(float *)((int)puVar7 + 0x84) = fVar2;
      fVar22 = GameCamera.mtx3.v3.y;
      fVar20 = GameCamera.mtx3.v2.w;
      *(float *)(puVar7 + 0x11) = fVar3;
      *(float *)((int)puVar7 + 0x8c) = fVar5;
      fVar24 = GameCamera.mtx3.v3.w;
      fVar23 = GameCamera.mtx3.v3.z;
      *(float *)((int)puVar7 + 0x7c) = fVar5;
      *(float *)(puVar7 + 0xe) = fVar4;
      *(float *)((int)puVar7 + 0x74) = fVar2;
      *(float *)(puVar7 + 0xf) = fVar3;
      *(float *)(puVar7 + 0x10) = fVar21 * fVar5 + fVar17 * fVar3 + fVar9 * fVar4 + fVar13 * fVar2;
      *(float *)((int)puVar7 + 0x84) =
           fVar22 * fVar5 + fVar18 * fVar3 + fVar10 * fVar4 + fVar14 * fVar2;
      *(float *)(puVar7 + 0x11) = fVar23 * fVar5 + fVar19 * fVar3 + fVar12 * fVar4 + fVar15 * fVar2;
      *(float *)((int)puVar7 + 0x8c) = fVar24 * fVar5 + fVar20 * fVar3 + fVar8 + fVar16 * fVar2;
      fVar8 = GameCamera.mtx4.v1.y * fVar2;
      fVar9 = GameCamera.mtx4.v1.z * fVar2;
      fVar10 = GameCamera.mtx4.v1.w * fVar2;
      fVar12 = GameCamera.mtx4.v0.y * fVar4;
      fVar13 = GameCamera.mtx4.v0.z * fVar4;
      fVar14 = GameCamera.mtx4.v0.w * fVar4;
      fVar15 = GameCamera.mtx4.v2.y * fVar3;
      fVar16 = GameCamera.mtx4.v2.z * fVar3;
      fVar17 = GameCamera.mtx4.v2.w * fVar3;
      fVar18 = GameCamera.mtx4.v3.y * fVar5;
      fVar19 = GameCamera.mtx4.v3.z * fVar5;
      fVar20 = GameCamera.mtx4.v3.w * fVar5;
      *(float *)(puVar7 + 0xe) =
           GameCamera.mtx4.v3.x * fVar5 +
           GameCamera.mtx4.v2.x * fVar3 +
           GameCamera.mtx4.v0.x * fVar4 + GameCamera.mtx4.v1.x * fVar2;
      *(float *)((int)puVar7 + 0x74) = fVar18 + fVar15 + fVar12 + fVar8;
      *(float *)(puVar7 + 0xf) = fVar19 + fVar16 + fVar13 + fVar9;
      *(float *)((int)puVar7 + 0x7c) = fVar20 + fVar17 + fVar14 + fVar10;
      uVar26 = FastUpdateClipFlags(uVar25 - 0xb0);
      uVar28 = (uVar28 & 0xffffff) << 8 | uVar26;
      uVar26 = FastUpdateClipFlags(uVar25 - 0xc0);
      iVar29 = iVar29 + 1;
      uVar27 = (uVar27 & 0xffffff) << 8 | uVar26;
      lVar30 = lVar30 + 0x10;
    } while (iVar29 < 4);
    uVar11 = (uint)uVar27;
    if (clipMode == 1) {
      if ((undefined *)(uVar11 & 0x1010101) == &DAT_01010101) {
        return;
      }
      if ((uVar11 & 0x2020202) == 0x2020202) {
        return;
      }
      if ((uVar11 & 0x4040404) == 0x4040404) {
        return;
      }
      if ((uVar11 & 0x8080808) == 0x8080808) {
        return;
      }
      if ((uVar11 & 0x20202020) == 0x20202020) {
        return;
      }
      if ((int)uVar28 == 0) {
        clipMode = 0;
      }
    }
    else {
      if ((undefined *)(uVar11 & 0x1010101) == &DAT_01010101) {
        return;
      }
      if ((uVar11 & 0x2020202) == 0x2020202) {
        return;
      }
      if ((uVar11 & 0x4040404) == 0x4040404) {
        return;
      }
      if ((uVar11 & 0x8080808) == 0x8080808) {
        return;
      }
      if ((uVar11 & 0x20202020) == 0x20202020) {
        return;
      }
      clipMode = 0;
    }
  }
  STUB_000e9f28((ZERO_MASK(clipMode) & 0xfffffffffffffffeU) + 0xe,
                      (idx & 3) * 4 +
                      (int)((longlong)((int)idx >> 2) << 6) + (int)((longlong)((int)idx >> 2) << 2))
  ;
  return;
}


// 0x017cfb4 (0x28 bytes)
void ____Unused_Water_ResetIds_73aa44(void)

{
  DAT_0073aa44 = 0xffffffff;
  DAT_0073aa50 = 0xffffffff;
  DAT_0073aa48 = 0xffffffff;
  DAT_0073aa4c = 0xffffffff;
  return;
}


// 0x017cfdc (0x474 bytes)
void WaterTile_DrawAll(WaterTile *tile,int cnt)

{
  RsxCmd *pRVar1;
  RenderingStep *pRVar2;
  ulonglong uVar3;
  undefined8 uVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  int iVar8;
  longlong lVar9;
  
  DAT_0073aa44 = 0xffffffff;
  iVar8 = 0;
  DAT_0073aa48 = 0xffffffff;
  DAT_0073aa4c = 0xffffffff;
  DAT_0073aa50 = 0xffffffff;
  if (0 < cnt) {
    do {
      if (tile->mask != 0) {
        StageTileBuf(g_ScratchBuf,tile->buf[DAT_0073a9f4].height[0] + 2);
        ShadeVerts(tile);
        WaterTile_BuildVertexGrid(tile);
        WaterTile_UpdateWaves(tile);
        uVar7 = tile->flags;
        if ((uVar7 & 1) != 0) {
          lVar9 = 0x11;
          iVar6 = 0;
          do {
            *(float *)((int)g_ScratchBuf[1].buf[2].height[10] + iVar6 + 0x38) = (tile->tilePos).z;
            lVar9 = lVar9 + -1;
            iVar6 = iVar6 + 0xc;
          } while (lVar9 != 0);
          uVar7 = tile->flags;
        }
        if ((uVar7 & 2) != 0) {
          lVar9 = 0x11;
          iVar6 = 0;
          do {
            *(float *)((int)g_ScratchBuf[1].buf[2].height[0xd] + iVar6 + 0x38) = (tile->tilePos).z;
            lVar9 = lVar9 + -1;
            iVar6 = iVar6 + 0xcc;
          } while (lVar9 != 0);
          uVar7 = tile->flags;
        }
        if ((uVar7 & 4) != 0) {
          lVar9 = 0x11;
          iVar6 = 0;
          do {
            *(float *)((int)g_ScratchBuf[2].buf[1].heightTop + iVar6 + -0x50) = (tile->tilePos).z;
            lVar9 = lVar9 + -1;
            iVar6 = iVar6 + 0xc;
          } while (lVar9 != 0);
          uVar7 = tile->flags;
        }
        if ((uVar7 & 8) != 0) {
          lVar9 = 0x11;
          iVar6 = 0;
          do {
            *(float *)((int)g_ScratchBuf[1].buf[2].height[10] + iVar6 + 0x38) = (tile->tilePos).z;
            lVar9 = lVar9 + -1;
            iVar6 = iVar6 + 0xcc;
          } while (lVar9 != 0);
        }
        pRVar2 = DL_Pass;
        uVar7 = (uint)tile->mask;
        if ((tile->ovlTex != DAT_0073aa44) || (tile->ovlAlpha != DAT_0073aa4c)) {
          uVar3 = (ulonglong)tile->ovlAlpha;
          uVar4 = idol_draw::PackCmd(0,1,2,1,uVar3 * 2 +
                                             ((longlong)(uVar3 * -2 + 0xff) >> 0x3f &
                                             uVar3 * -2 + 0xff));
          idol_draw::DrawDepth(pRVar2,uVar4);
          iVar6 = EffectTexHeaders;
          pRVar2 = DL_Pass;
          iVar5 = GetEffectTex(tile->ovlTex);
          FUN_004d676c(pRVar2,0,iVar6 + iVar5 * 0x24,1,1);
          DAT_0073aa44 = tile->ovlTex;
          DAT_0073aa4c = (uint)tile->ovlAlpha;
        }
        iVar6 = 0;
        do {
          if ((uVar7 & 1) != 0) {
            WaterTile_DrawCellBase(tile,iVar6);
          }
          pRVar2 = DL_Pass;
          iVar6 = iVar6 + 1;
          uVar7 = (int)uVar7 >> 1;
        } while (iVar6 < 0x10);
        uVar7 = (uint)tile->mask;
        if ((tile->baseTex != DAT_0073aa44) || (tile->baseAlpha != DAT_0073aa4c)) {
          uVar3 = (ulonglong)tile->baseAlpha;
          uVar4 = idol_draw::PackCmd(0,1,2,1,uVar3 * 2 +
                                             ((longlong)(uVar3 * -2 + 0xff) >> 0x3f &
                                             uVar3 * -2 + 0xff));
          idol_draw::DrawDepth(pRVar2,uVar4);
          iVar6 = EffectTexHeaders;
          pRVar2 = DL_Pass;
          iVar5 = GetEffectTex(tile->baseTex);
          FUN_004d676c(pRVar2,0,iVar6 + iVar5 * 0x24,1,1);
          DAT_0073aa44 = tile->baseTex;
          DAT_0073aa4c = (uint)tile->baseAlpha;
        }
        iVar6 = 0;
        do {
          if ((uVar7 & 1) != 0) {
            WaterTile_DrawCellOvl(tile,iVar6);
          }
          iVar6 = iVar6 + 1;
          uVar7 = (int)uVar7 >> 1;
        } while (iVar6 < 0x10);
      }
      iVar8 = iVar8 + 1;
      tile = (WaterTile *)&tile[1].ovlTex;
    } while (iVar8 < cnt);
  }
  pRVar1 = DL_Pass->command;
  DL_Pass->command = pRVar1 + 2;
  pRVar2 = DL_Pass;
  *pRVar1 = NV4097_SET_BLEND_EQUATION_x1;
  pRVar1[1] = 0x80068006;
  pRVar1 = pRVar2->command;
  *pRVar1 = NV4097_SET_BLEND_FUNC_SFACTOR_x2;
  pRVar1[1] = 0x3020302;
  pRVar1[2] = 0x3030303;
  pRVar2->command = pRVar1 + 3;
  return;
}


// 0x017d450 (0x38 bytes)
void Sheet_ResetScroll(int cnt,WaterSheet *sheet)

{
  if (0 < cnt) {
    do {
      sheet->offsetU0 = 0.0;
      sheet->offsetV0 = 0.0;
      cnt = cnt + -1;
      sheet->offsetU1 = 0.0;
      sheet->offsetV1 = 0.0;
      sheet->frameRate = 0;
      sheet = sheet + 1;
    } while (0 < cnt);
  }
  return;
}


// 0x017d488 (0x24 bytes)
void CALL_STUB_0017d488(void)

{
  STUB_00071170();
  return;
}


// 0x017d4b8 (0x3b8 bytes)
void WaterSheet_DrawAll(int cnt,WaterSheet *sheet)

{
  RsxCmd *pRVar1;
  float fVar2;
  float fVar3;
  RenderingStep *pRVar4;
  int iVar8;
  undefined8 uVar5;
  ulonglong uVar6;
  undefined8 uVar7;
  int iVar9;
  int iVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  undefined8 uVar15;
  
  iVar10 = 0;
  if (0 < cnt) {
    dVar13 = 1.0;
    dVar14 = -1.0;
    uVar15 = 0x4079000000000000;
    do {
      fVar2 = sheet->velocityU0 * sheet->scrollSpeedLayer0 + sheet->offsetU0;
      dVar12 = (double)fVar2;
      fVar3 = sheet->velocityV0 * sheet->scrollSpeedLayer0 + sheet->offsetV0;
      dVar11 = (double)fVar3;
      sheet->offsetU0 = fVar2;
      sheet->offsetV0 = fVar3;
      if (dVar12 <= dVar13) {
        if (dVar12 < dVar14) {
          sheet->offsetU0 = (float)(dVar12 + dVar13);
        }
      }
      else {
        sheet->offsetU0 = (float)(dVar12 - dVar13);
      }
      if (dVar11 <= dVar13) {
        if (dVar11 < dVar14) {
          sheet->offsetV0 = (float)(dVar11 + dVar13);
        }
      }
      else {
        sheet->offsetV0 = (float)(dVar11 - dVar13);
      }
      fVar2 = sheet->velocityU1 * sheet->scrollSpeedLayer1 + sheet->offsetU1;
      dVar12 = (double)fVar2;
      fVar3 = sheet->velocityV1 * sheet->scrollSpeedLayer1 + sheet->offsetV1;
      dVar11 = (double)fVar3;
      sheet->offsetU1 = fVar2;
      sheet->offsetV1 = fVar3;
      if (dVar12 <= dVar13) {
        if (dVar12 < dVar14) {
          sheet->offsetU1 = (float)(dVar12 + dVar13);
        }
      }
      else {
        sheet->offsetU1 = (float)(dVar12 - dVar13);
      }
      if (dVar11 <= dVar13) {
        if (dVar11 < dVar14) {
          sheet->offsetV1 = (float)(dVar11 + dVar13);
        }
      }
      else {
        sheet->offsetV1 = (float)(dVar11 - dVar13);
      }
      sheet->frameCounter = sheet->frameCounter + sheet->frameRate & 0xffffff;
      iVar8 = FastCheckBsphereInView(uVar15,sheet->cullData);
      if (iVar8 != -1) {
        uVar5 = idol::AllocateMemAlign(FrameHeap,sheet->vertexCount << 5,0x10);
        BuildVerts(sheet,(WaterSheetVert *)uVar5);
        pRVar4 = DL_Pass;
        uVar6 = (ulonglong)sheet->depthBias0;
        uVar7 = idol_draw::PackCmd(0,1,2,1,uVar6 * 2 +
                                           ((longlong)(uVar6 * -2 + 0xff) >> 0x3f &
                                           uVar6 * -2 + 0xff));
        idol_draw::DrawDepth(pRVar4,uVar7);
        iVar8 = EffectTexHeaders;
        pRVar4 = DL_Pass;
        iVar9 = GetEffectTex(sheet->textureId0);
        FUN_004d676c(pRVar4,0,iVar8 + iVar9 * 0x24,1,1);
        FastDrawStrip_Pass(sheet->vertexCount,uVar5,9);
        pRVar4 = DL_Pass;
        uVar6 = (ulonglong)sheet->depthBias1;
        uVar7 = idol_draw::PackCmd(0,1,2,1,uVar6 * 2 +
                                           ((longlong)(uVar6 * -2 + 0xff) >> 0x3f &
                                           uVar6 * -2 + 0xff));
        idol_draw::DrawDepth(pRVar4,uVar7);
        iVar8 = EffectTexHeaders;
        pRVar4 = DL_Pass;
        iVar9 = GetEffectTex(sheet->textureId1);
        FUN_004d676c(pRVar4,0,iVar8 + iVar9 * 0x24,1,1);
        FastDrawStrip_DLNoState(sheet->vertexCount,uVar5);
      }
      iVar10 = iVar10 + 1;
      sheet = sheet + 1;
    } while (iVar10 < cnt);
  }
  pRVar1 = DL_Pass->command;
  DL_Pass->command = pRVar1 + 2;
  pRVar4 = DL_Pass;
  *pRVar1 = NV4097_SET_BLEND_EQUATION_x1;
  pRVar1[1] = 0x80068006;
  pRVar1 = pRVar4->command;
  *pRVar1 = NV4097_SET_BLEND_FUNC_SFACTOR_x2;
  pRVar1[1] = 0x3020302;
  pRVar1[2] = 0x3030303;
  pRVar4->command = pRVar1 + 3;
  return;
}


// 0x017d870 (0x4 bytes)
void STUB_0017d870(...)

{
  return;
}


// 0x017d8f8 (0x3a4 bytes)
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void SubmitOceanCell
               (double param_1,double param_2,double param_3,undefined8 param_4,undefined8 param_5,
               undefined8 param_6,longlong param_7,undefined8 param_8,undefined8 param_9)

{
  short sVar1;
  undefined4 uVar2;
  ulonglong *puVar3;
  uint uVar4;
  undefined1 (*pauVar5) [16];
  undefined8 uVar6;
  ulonglong uVar7;
  longlong lVar8;
  int iVar9;
  longlong lVar10;
  longlong lVar11;
  longlong lVar12;
  undefined4 *puVar13;
  undefined4 *puVar14;
  short *psVar15;
  ulonglong unaff_r28;
  ulonglong unaff_r29;
  ulonglong unaff_r30;
  ulonglong unaff_r31;
  ulonglong in_LR;
  longlong lVar16;
  longlong lVar17;
  ulonglong in_f31;
  GPiece<16> auVar18;
  GPiece<16> auVar19;
  GPiece<16> auVar20;
  GPiece<16> auVar21;
  GPiece<16> auVar22;
  GPiece<16> auVar23;
  GPiece<16> auVar24;
  GPiece<16> auVar25;
  GPiece<16> auVar26;
  GPiece<16> auVar27;
  GPiece<16> auVar28;
  GPiece<16> auVar29;
  GPiece<16> auVar30;
  GPiece<16> auVar31;
  GPiece<2048> local_800;
  
  uVar7 = ZEXT48(&stack0x00000000);
  puVar3 = (ulonglong *)(uVar7 - 0x8a0);
  *puVar3 = uVar7;
  puVar3[0x116] = in_LR;
  puVar3[0x113] = in_f31;
  puVar3[0x110] = unaff_r29;
  auVar23 = _DAT_0017d8a0;
  auVar22 = _DAT_0017d890;
  auVar20 = _DAT_0017d880;
  auVar18 = ZEXT416(0);
  auVar26 = auVar18 | auVar18 << 0x20 | auVar18 << 0x40 | auVar18 << 0x60;
  auVar18 = loadVectorLeftIndexed(8,param_4);
  auVar21 = loadVectorLeftIndexed(0x10,param_4);
  auVar18 = auVar18 >> 0x60 & (GPiece<16>)0xffffffff;
  auVar19 = auVar18 | auVar18 << 0x20 | auVar18 << 0x40 | auVar18 << 0x60;
  auVar24 = loadVectorLeftIndexed(0x14,param_4);
  iVar9 = 0;
  lVar10 = uVar7 - 0x800;
  puVar3[0x111] = unaff_r30;
  puVar3[0x112] = unaff_r31;
  auVar18 = vectorPermute(auVar21,auVar26,auVar20);
  uVar2 = storeVectorElementWordIndexed(auVar19,0x78,uVar7 - 0x8a0);
  *(undefined4 *)(puVar3 + 0xf) = uVar2;
  *(float *)(puVar3 + 0x10c) = (float)param_2;
  *(float *)((int)puVar3 + 0x74) = (float)param_2;
  *(float *)((int)puVar3 + 0x864) = (float)param_2;
  auVar25 = vectorPermute(auVar18,*(undefined1 (*) [16])(puVar3 + 0x10),auVar22);
  *(float *)(puVar3 + 0x10d) = (float)param_2;
  *(float *)((int)puVar3 + 0x86c) = (float)param_2;
  auVar20 = _DAT_0017d8c0;
  auVar18 = _DAT_0017d8b0;
  auVar23 = vectorPermute(auVar26,auVar24,auVar23);
  auVar21 = vectorAddFloatingPoint(auVar25,auVar25);
  auVar23 = vectorPermute(auVar23,*(undefined1 (*) [16])(puVar3 + 0x12),auVar22);
  auVar22 = *(undefined1 (*) [16])(puVar3 + 0x10c);
  *(float *)(puVar3 + 0x10c) = (float)param_1;
  uVar6 = 0x860;
  *(float *)((int)puVar3 + 0x864) = (float)param_1;
  auVar22 = vectorPermute(auVar22,auVar19,auVar18);
  *(float *)(puVar3 + 0x10d) = (float)param_1;
  *(float *)((int)puVar3 + 0x86c) = (float)param_1;
  auVar18 = _DAT_0017d8d0;
  auVar24 = vectorPermute(auVar22,*(undefined1 (*) [16])(puVar3 + 0xe),auVar20);
  auVar22 = vectorAddFloatingPoint(auVar21,auVar25);
  puVar3[0x10f] = unaff_r28;
  auVar20 = vectorAddFloatingPoint(auVar21,auVar21);
  auVar19 = *(undefined1 (*) [16])(puVar3 + 0x10c);
  do {
    auVar24 = vectorPermute(auVar19,auVar24,auVar18);
    *(float *)(puVar3 + 0xe) = (float)param_1;
    lVar16 = 2;
    do {
      auVar26 = vectorAddFloatingPoint(auVar24,auVar25);
      auVar27 = vectorAddFloatingPoint(auVar24,auVar21);
      pauVar5 = (undefined1 (*) [16])lVar10;
      auVar29 = vectorAddFloatingPoint(auVar24,auVar22);
      *pauVar5 = auVar24;
      lVar10 = lVar10 + 0x40;
      auVar24 = vectorAddFloatingPoint(auVar24,auVar20);
      pauVar5[1] = auVar26;
      pauVar5[2] = auVar27;
      pauVar5[3] = auVar29;
      lVar16 = lVar16 + -1;
    } while (lVar16 != 0);
    auVar24 = vectorAddFloatingPoint(auVar24,auVar23);
    iVar9 = iVar9 + 1;
    *(undefined1 (*) [16])(puVar3 + 0xe) = auVar24;
  } while (iVar9 < 8);
  lVar16 = idol::AllocateMemAlign(FrameHeap,0xd90,0x10);
  auVar18 = loadVectorLeftIndexed(0x60,0x17d880);
  auVar22 = loadVectorLeftIndexed(0x68,0x17d880);
  auVar20 = loadVectorLeftIndexed(100,0x17d880);
  auVar23 = loadVectorLeftIndexed(0x6c,0x17d880);
  auVar18 = auVar18 >> 0x60 & (GPiece<16>)0xffffffff;
  auVar19 = auVar18 | auVar18 << 0x20 | auVar18 << 0x40 | auVar18 << 0x60;
  auVar18 = auVar22 >> 0x60 & (GPiece<16>)0xffffffff;
  auVar24 = auVar18 | auVar18 << 0x20 | auVar18 << 0x40 | auVar18 << 0x60;
  auVar18 = auVar20 >> 0x60 & (GPiece<16>)0xffffffff;
  auVar21 = auVar18 | auVar18 << 0x20 | auVar18 << 0x40 | auVar18 << 0x60;
  auVar22 = loadVectorLeftIndexed(0x70,0x17d880);
  puVar13 = &DAT_00e5aad4;
  auVar20 = loadVectorLeftIndexed(0x74,0x17d880);
  psVar15 = &DAT_0073b330;
  puVar14 = &DAT_00e5aad0;
  auVar18 = auVar23 >> 0x60 & (GPiece<16>)0xffffffff;
  auVar23 = auVar18 | auVar18 << 0x20 | auVar18 << 0x40 | auVar18 << 0x60;
  lVar12 = lVar16 + 4;
  auVar18 = auVar22 >> 0x60 & (GPiece<16>)0xffffffff;
  auVar22 = auVar18 | auVar18 << 0x20 | auVar18 << 0x40 | auVar18 << 0x60;
  lVar11 = lVar16 + 8;
  auVar18 = auVar20 >> 0x60 & (GPiece<16>)0xffffffff;
  param_7 = param_7 + 0x10;
  lVar8 = lVar16 + 0x18;
  lVar17 = 0x7c;
  lVar10 = lVar16;
  do {
    sVar1 = *psVar15;
    auVar20 = ZEXT416(0xfffffff0);
    auVar25 = ZEXT416(0xffffffff);
    auVar26 = auVar25 | auVar25 << 0x20 | auVar25 << 0x40 | auVar25 << 0x60;
    auVar25 = ZEXT416(0xffffffff);
    auVar25 = auVar25 | auVar25 << 0x20 | auVar25 << 0x40 | auVar25 << 0x60;
    auVar30 = vectorShiftLeftIntegerWord(auVar26,auVar26);
    auVar31 = vectorShiftLeftIntegerWord(auVar25,auVar25);
    auVar25 = ZEXT416(0xffffffff);
    auVar29 = auVar25 | auVar25 << 0x20 | auVar25 << 0x40 | auVar25 << 0x60;
    psVar15 = psVar15 + 1;
    auVar27 = *(undefined1 (*) [16])(local_800 + (int)((longlong)sVar1 << 4));
    auVar25 = auVar27 >> 0x60 & (GPiece<16>)0xffffffff;
    auVar26 = auVar27 >> 0x40 & (GPiece<16>)0xffffffff;
    auVar27 = auVar27 >> 0x20 & (GPiece<16>)0xffffffff;
    auVar29 = vectorShiftLeftIntegerWord(auVar29,auVar29);
    uVar4 = (uint)lVar10;
    uVar2 = storeVectorElementWordIndexed
                      (auVar25 | auVar25 << 0x20 | auVar25 << 0x40 | auVar25 << 0x60,0,lVar10);
    *(undefined4 *)(uVar4 & 0xfffffffc) = uVar2;
    uVar2 = storeVectorElementWordIndexed
                      (auVar26 | auVar26 << 0x20 | auVar26 << 0x40 | auVar26 << 0x60,0,lVar12);
    *(undefined4 *)((uint)lVar12 & 0xfffffffc) = uVar2;
    uVar2 = storeVectorElementWordIndexed
                      (auVar27 | auVar27 << 0x20 | auVar27 << 0x40 | auVar27 << 0x60,0,lVar11);
    *(undefined4 *)((uint)lVar11 & 0xfffffffc) = uVar2;
    auVar25 = ZEXT416(0xfffffff8);
    *(undefined4 *)(uVar4 + 0xc) = *puVar14;
    uVar2 = *puVar13;
    *(float *)(uVar4 + 0x14) = (float)param_3;
    *(undefined4 *)(uVar4 + 0x10) = uVar2;
    auVar26 = loadVectorLeftIndexed(uVar6,param_7);
    auVar20 = vectorRotateLeftIntegerWord
                        (auVar26,auVar20 | auVar20 << 0x20 | auVar20 << 0x40 | auVar20 << 0x60);
    auVar27 = vectorRotateLeftIntegerWord
                        (auVar26,auVar25 | auVar25 << 0x20 | auVar25 << 0x40 | auVar25 << 0x60);
    auVar28 = vectorLogicalAnd(auVar26,auVar23);
    auVar25 = vectorShiftRightWord(auVar26,auVar22);
    auVar20 = vectorLogicalAnd(auVar20,auVar23);
    auVar26 = vectorLogicalAnd(auVar27,auVar23);
    auVar27 = vectorConvertFromUnsignedFixedPointWord(auVar28,0);
    auVar25 = vectorConvertFromUnsignedFixedPointWord(auVar25,0);
    auVar20 = vectorConvertFromUnsignedFixedPointWord(auVar20,0);
    auVar26 = vectorConvertFromUnsignedFixedPointWord(auVar26,0);
    lVar12 = lVar12 + 0x1c;
    lVar11 = lVar11 + 0x1c;
    lVar10 = lVar10 + 0x1c;
    puVar14 = puVar14 + 2;
    puVar13 = puVar13 + 2;
    param_7 = param_7 + 4;
    auVar29 = vectorMultiplyAddFloatingPoint(auVar27,auVar19,auVar29);
    auVar27 = vectorAddFloatingPoint(auVar25,auVar24);
    auVar25 = vectorMultiplyAddFloatingPoint(auVar20,auVar19,auVar30);
    auVar26 = vectorMultiplyAddFloatingPoint(auVar26,auVar19,auVar31);
    auVar20 = vectorCompareGreaterThanFloatingPoint(auVar29,auVar21);
    auVar28 = vectorCompareGreaterThanFloatingPoint(auVar25,auVar21);
    auVar20 = vectorConditionalSelect(auVar29,auVar21,auVar20);
    auVar29 = vectorCompareGreaterThanFloatingPoint(auVar26,auVar21);
    auVar25 = vectorConditionalSelect(auVar25,auVar21,auVar28);
    auVar29 = vectorConditionalSelect(auVar26,auVar21,auVar29);
    auVar28 = vectorAddFloatingPoint(auVar20,auVar24);
    auVar20 = ZEXT416(8);
    auVar26 = vectorAddFloatingPoint(auVar25,auVar24);
    auVar29 = vectorAddFloatingPoint(auVar29,auVar24);
    auVar25 = vectorCompareGreaterThanFloatingPoint(auVar28,auVar21);
    auVar30 = vectorCompareGreaterThanFloatingPoint(auVar26,auVar21);
    auVar28 = vectorConditionalSelect(auVar28,auVar21,auVar25);
    auVar25 = vectorConditionalSelect(auVar26,auVar21,auVar30);
    auVar26 = vectorCompareGreaterThanFloatingPoint(auVar29,auVar21);
    auVar28 = vectorConvertToSignedFixedPointWordSaturate(auVar28,0);
    auVar29 = vectorConditionalSelect(auVar29,auVar21,auVar26);
    auVar26 = vectorCompareGreaterThanFloatingPoint(auVar27,auVar21);
    auVar25 = vectorConvertToSignedFixedPointWordSaturate(auVar25,0);
    auVar26 = vectorConditionalSelect(auVar27,auVar21,auVar26);
    auVar27 = vectorConvertToSignedFixedPointWordSaturate(auVar29,0);
    auVar26 = vectorConvertToSignedFixedPointWordSaturate(auVar26,0);
    auVar29 = vectorShiftLeftIntegerWord(auVar28,auVar22);
    auVar20 = vectorShiftLeftIntegerWord
                        (auVar25,auVar20 | auVar20 << 0x20 | auVar20 << 0x40 | auVar20 << 0x60);
    auVar25 = vectorShiftLeftIntegerWord
                        (auVar27,auVar18 | auVar18 << 0x20 | auVar18 << 0x40 | auVar18 << 0x60);
    auVar20 = (auVar26 | auVar20 | auVar25 | auVar29 | auVar23) >> 0x60 &
              (GPiece<16>)0xffffffff;
    uVar2 = storeVectorElementWordIndexed
                      (auVar20 | auVar20 << 0x20 | auVar20 << 0x40 | auVar20 << 0x60,0,lVar8);
    *(undefined4 *)((uint)lVar8 & 0xfffffffc) = uVar2;
    lVar8 = lVar8 + 0x1c;
    lVar17 = lVar17 + -1;
  } while (lVar17 != 0);
  FastDrawStripFog(0x7c,lVar16,param_9);
  if (*(char *)((int)param_4 + 0x3f) == -0x80) {
    FastDrawStripFog(0x7c,lVar16,0);
  }
  return;
}


// 0x017dd20 (0x5fc bytes)
// strings: 00654124: 'Ocean'

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

double OceanPass(OceanPlane *ocean)

{
  longlong lVar1;
  byte bVar2;
  char cVar3;
  float fVar4;
  ushort uVar5;
  ushort uVar6;
  undefined4 uVar7;
  ulonglong *puVar8;
  int iVar9;
  float fVar10;
  float fVar11;
  RenderingStep *pRVar12;
  longlong lVar13;
  undefined4 *puVar14;
  longlong lVar15;
  int iVar16;
  int iVar17;
  int iVar18;
  ushort uVar19;
  ulonglong unaff_r20;
  ulonglong uVar20;
  ulonglong unaff_r21;
  ulonglong unaff_r22;
  ulonglong unaff_r23;
  ulonglong unaff_r24;
  ulonglong unaff_r25;
  ulonglong unaff_r26;
  ulonglong unaff_r27;
  char *pcVar21;
  ulonglong unaff_r28;
  int TEXTURE;
  ulonglong unaff_r29;
  ulonglong unaff_r30;
  longlong lVar22;
  ulonglong unaff_r31;
  ulonglong in_LR;
  ulonglong uVar23;
  ulonglong uVar24;
  ulonglong in_f26;
  double dVar25;
  ulonglong in_f27;
  double dVar26;
  ulonglong in_f28;
  double dVar27;
  ulonglong in_f29;
  double dVar28;
  ulonglong in_f30;
  double dVar29;
  ulonglong in_f31;
  double dVar30;
  GPiece<16> auVar31;
  GPiece<16> auVar32;
  GPiece<16> auVar33;
  GPiece<16> auVar34;
  GPiece<16> auVar35;
  GPiece<16> auVar36;
  GPiece<16> auVar37;
  GPiece<16> auVar38;
  undefined4 in_vr31_32_0;
  undefined4 in_vr31_32_1;
  undefined4 in_vr31_32_2;
  undefined4 in_vr31_32_3;
  
  lVar15 = (longlong)(int)ocean;
  uVar20 = ZEXT48(&stack0x00000000);
  lVar1 = uVar20 - 400;
  puVar8 = (ulonglong *)lVar1;
  *puVar8 = uVar20;
  puVar8[0x34] = in_LR;
  puVar8[0x2c] = in_f26;
  puVar8[0x2d] = in_f27;
  puVar8[0x2e] = in_f28;
  puVar8[0x2f] = in_f29;
  puVar8[0x30] = in_f30;
  puVar8[0x31] = in_f31;
  puVar8[0x2b] = unaff_r31;
  lVar13 = uVar20 - 0xa0;
  puVar14 = (undefined4 *)lVar13;
  puVar14[3] = in_vr31_32_3;
  puVar14[2] = in_vr31_32_2;
  puVar14[1] = in_vr31_32_1;
  *puVar14 = in_vr31_32_0;
  puVar8[0x29] = unaff_r29;
  puVar8[0x21] = unaff_r21;
  bVar2 = ocean->depth;
  puVar8[0x2a] = unaff_r30;
  puVar8[0x28] = unaff_r28;
  puVar8[0x27] = unaff_r27;
  puVar8[0x26] = unaff_r26;
  puVar8[0x25] = unaff_r25;
  puVar8[0x24] = unaff_r24;
  puVar8[0x23] = unaff_r23;
  puVar8[0x22] = unaff_r22;
  puVar8[0x20] = unaff_r20;
  if (bVar2 == 0x80) {
    lVar22 = 2;
    idol_draw::DrawDepth(DepthPass,0);
    pRVar12 = DepthPass;
    *DepthPass->command = NV4097_SET_ALPHA_TEST_ENABLE_x1;
    pRVar12->command[1] = 0;
    pRVar12->command = pRVar12->command + 2;
    idol_draw::DrawDepth(ForwardPass,0);
    pRVar12 = ForwardPass;
    *ForwardPass->command = NV4097_SET_ALPHA_TEST_ENABLE_x1;
    pRVar12->command[1] = 0;
    pRVar12->command = pRVar12->command + 2;
  }
  else if (Level == Kerwan) {
    lVar22 = 1;
    idol_draw::DrawDepth(OceanForwardPass,0xc000000064);
    pRVar12 = OceanForwardPass;
    *OceanForwardPass->command = NV4097_SET_ALPHA_TEST_ENABLE_x1;
    pRVar12->command[1] = 0;
    pRVar12->command = pRVar12->command + 2;
  }
  else {
    lVar22 = 2;
    idol_draw::DrawDepth(ForwardPass,(ulonglong)bVar2 << 0x21 | 100);
    pRVar12 = ForwardPass;
    *ForwardPass->command = NV4097_SET_ALPHA_TEST_ENABLE_x1;
    pRVar12->command[1] = 0;
    pRVar12->command = pRVar12->command + 2;
  }
  iVar9 = (int)(lVar22 << 2);
  idol_draw::RsxCmd_DebugStr_Marker(*(undefined4 *)((int)&DepthPass + iVar9),"Ocean");
  bVar2 = ocean->field16_0x33;
  iVar17 = worldUpdateTime / (int)(uint)bVar2;
  puVar8[0x14] = (longlong)worldUpdateTime;
  uVar23 = puVar8[0x14];
  puVar8[0x14] = (ulonglong)bVar2;
  bVar2 = ocean->num_texs_to_cycle;
  uVar24 = puVar8[0x14];
  puVar8[0x14] = (longlong)iVar17;
  iVar18 = EffectTexHeaders;
  uVar5 = ocean->tex_offset;
  uVar20 = (ulonglong)DAT_00902e9c;
  TEXTURE = (uint)uVar5 + (iVar17 - (iVar17 / (int)(uint)bVar2) * (uint)bVar2);
  uVar7 = *(undefined4 *)((int)&DepthPass + iVar9);
  dVar30 = (double)(float)((double)(float)((double)(longlong)uVar23 / (double)(longlong)uVar24) -
                          (double)(longlong)puVar8[0x14]);
  iVar16 = GetEffectTex((double)(longlong)puVar8[0x14],(double)(longlong)uVar24,TEXTURE);
  FUN_004d676c(uVar7,0,iVar18 + iVar16 * 0x24,1,1);
  iVar18 = EffectTexHeaders;
  uVar7 = *(undefined4 *)((int)&DepthPass + iVar9);
  iVar17 = GetEffectTex((uint)uVar5 +
                              ((iVar17 + 1) - ((iVar17 + 1) / (int)(uint)bVar2) * (uint)bVar2));
  FUN_004d676c(uVar7,1,iVar18 + iVar17 * 0x24,1,1);
  iVar17 = EffectTexHeaders;
  pRVar12 = DepthPass;
  if (ocean->depth == 0x80) {
    iVar18 = GetEffectTex(TEXTURE);
    FUN_004d676c(pRVar12,0,iVar17 + iVar18 * 0x24,1,1);
  }
  idol_draw::ResetPassState(*(undefined4 *)((int)&DepthPass + iVar9));
  auVar31 = ZEXT416(0xffffffff);
  auVar31 = auVar31 | auVar31 << 0x20 | auVar31 << 0x40 | auVar31 << 0x60;
  dVar25 = 7.0;
  dVar29 = (double)ocean->field3_0xc;
  fVar10 = ocean->scaleY * 7.0;
  fVar11 = ocean->scaleX * 7.0;
  auVar33 = loadVectorLeftIndexed(8,0x17dca0);
  auVar32 = vectorShiftLeftIntegerWord(auVar31,auVar31);
  auVar31 = auVar33 >> 0x60 & (GPiece<16>)0xffffffff;
  auVar34 = auVar31 | auVar31 << 0x20 | auVar31 << 0x40 | auVar31 << 0x60;
  auVar31 = ZEXT416(0xffffffff);
  auVar31 = auVar31 | auVar31 << 0x20 | auVar31 << 0x40 | auVar31 << 0x60;
  auVar33 = loadVectorLeftIndexed(0x14,lVar15);
  auVar37 = vectorMultiplyAddFloatingPoint(auVar33,auVar34,auVar32);
  auVar31 = vectorShiftLeftIntegerWord(auVar31,auVar31);
  auVar33 = loadVectorLeftIndexed(0x10,lVar15);
  pcVar21 = ocean->occupied_ocean_cells;
  fVar4 = ocean->y;
  auVar34 = vectorMultiplyAddFloatingPoint(auVar33,auVar34,auVar31);
  auVar31 = loadVectorLeftIndexed(4,lVar15);
  auVar32 = loadVectorLeftIndexed(8,lVar15);
  uVar19 = ocean->cellsX;
  auVar35 = loadVectorLeftIndexed(0x10,0x17dca0);
  if (fVar10 - fVar11 < 0.0) {
    fVar10 = fVar11;
  }
  auVar35 = auVar35 >> 0x60 & (GPiece<16>)0xffffffff;
  auVar31 = vectorMultiplyAddFloatingPoint
                      (auVar37,auVar35 | auVar35 << 0x20 | auVar35 << 0x40 | auVar35 << 0x60,auVar31
                      );
  dVar28 = (double)SQRT(fVar10 * fVar10 * 2.0);
  if (0 < (short)ocean->cellsY) {
    auVar35 = auVar32 >> 0x60 & (GPiece<16>)0xffffffff;
    auVar36 = auVar31 >> 0x60 & (GPiece<16>)0xffffffff;
    auVar38 = loadVectorLeftIndexed(0x14,0x17dca0);
    uVar7 = storeVectorElementWordIndexed
                      (auVar35 | auVar35 << 0x20 | auVar35 << 0x40 | auVar35 << 0x60,0x78,lVar1);
    *(undefined4 *)(puVar8 + 0xf) = uVar7;
    uVar7 = storeVectorElementWordIndexed
                      (auVar36 | auVar36 << 0x20 | auVar36 << 0x40 | auVar36 << 0x60,0x74,lVar1);
    *(undefined4 *)((int)puVar8 + 0x74) = uVar7;
    auVar35 = ZEXT416(0);
    auVar36 = auVar35 | auVar35 << 0x20 | auVar35 << 0x40 | auVar35 << 0x60;
    auVar35 = auVar38 >> 0x60 & (GPiece<16>)0xffffffff;
    auVar38 = auVar35 | auVar35 << 0x20 | auVar35 << 0x40 | auVar35 << 0x60;
    iVar17 = 0;
    auVar31 = vectorPermute(auVar31,auVar32,_DAT_0017dcc0);
    auVar34 = vectorPermute(auVar34,auVar36,_DAT_0017dce0);
    auVar32 = vectorPermute(auVar31,*(undefined1 (*) [16])(puVar8 + 0xe),_DAT_0017dcd0);
    auVar31 = vectorPermute(auVar36,auVar37,_DAT_0017dd00);
    auVar35 = vectorPermute(auVar34,*(undefined1 (*) [16])(puVar8 + 0x12),_DAT_0017dcf0);
    auVar34 = vectorPermute(auVar31,*(undefined1 (*) [16])(puVar8 + 0x10),_DAT_0017dcf0);
    auVar31 = _DAT_0017dd10;
    do {
      dVar27 = (double)fVar4;
      auVar37 = auVar33 >> 0x60 & (GPiece<16>)0xffffffff;
      auVar36 = loadVectorLeftIndexed(lVar13,lVar15);
      fVar4 = ocean->x;
      auVar36 = vectorMultiplyAddFloatingPoint
                          (auVar37 | auVar37 << 0x20 | auVar37 << 0x40 | auVar37 << 0x60,auVar38,
                           auVar36);
      auVar37 = auVar36 >> 0x60 & (GPiece<16>)0xffffffff;
      auVar32 = vectorPermute(auVar36,auVar32,auVar31);
      uVar7 = storeVectorElementWordIndexed
                        (auVar37 | auVar37 << 0x20 | auVar37 << 0x40 | auVar37 << 0x60,0x70,lVar1);
      *(undefined4 *)(puVar8 + 0xe) = uVar7;
      if (0 < (short)uVar19) {
        iVar18 = 0;
        auVar32 = *(undefined1 (*) [16])(puVar8 + 0xe);
        do {
          dVar26 = (double)fVar4;
          cVar3 = *pcVar21;
          pcVar21 = pcVar21 + 1;
          if ((cVar3 == '\x01') &&
             (iVar16 = FastCheckBsphere(dVar28,dVar29,uVar20 + 800), iVar16 != 0)) {
            SubmitOceanCell(dVar26,dVar27,dVar30,lVar15);
          }
          auVar32 = vectorAddFloatingPoint(auVar32,auVar35);
          uVar19 = ocean->cellsX;
          iVar18 = iVar18 + 7;
          fVar4 = (float)((double)ocean->scaleX * dVar25 + dVar26);
          auVar33 = loadVectorLeftIndexed(0x10,lVar15);
        } while (iVar18 < (short)uVar19);
      }
      auVar32 = vectorAddFloatingPoint(auVar32,auVar34);
      uVar6 = ocean->cellsY;
      iVar17 = iVar17 + 7;
      auVar33 = auVar33 >> 0x60 & (GPiece<16>)0xffffffff;
      auVar33 = auVar33 | auVar33 << 0x20 | auVar33 << 0x40 | auVar33 << 0x60;
      fVar4 = (float)((double)ocean->scaleY * dVar25 + dVar27);
      *(undefined1 (*) [16])(puVar8 + 0xe) = auVar32;
    } while (iVar17 < (short)uVar6);
  }
  idol_draw::RsxCmd_WritePass(*(RenderingStep **)((int)&DepthPass + iVar9));
  return dVar30;
}


// 0x017e31c (0x4c bytes)
void OceanPlane_SetDepth(float scale,OceanPlane *ocean,undefined8 param_3,byte depth)

{
  float fVar1;
  float fVar2;
  float *pfVar3;
  float *pfVar4;
  longlong lVar5;
  
  ocean->depth = depth;
  lVar5 = 0x7c;
  pfVar4 = (float *)&DAT_0073af50;
  pfVar3 = (float *)&DAT_00e5aad0;
  do {
    fVar1 = *pfVar4;
    fVar2 = pfVar4[1];
    pfVar4 = pfVar4 + 2;
    *pfVar3 = fVar1 * scale;
    pfVar3[1] = fVar2 * scale;
    pfVar3 = pfVar3 + 2;
    lVar5 = lVar5 + -1;
  } while (lVar5 != 0);
  return;
}


// 0x017e368 (0x50 bytes)
void OceanPlane_SetDefaultDepth(double scale,OceanPlane *param_2)

{
  float fVar1;
  float fVar2;
  float *pfVar3;
  float *pfVar4;
  longlong lVar5;
  
  param_2->depth = 0x80;
  lVar5 = 0x7c;
  pfVar4 = (float *)&DAT_0073af50;
  pfVar3 = (float *)&DAT_00e5aad0;
  do {
    fVar1 = *pfVar4;
    fVar2 = pfVar4[1];
    pfVar4 = pfVar4 + 2;
    *pfVar3 = (float)((double)fVar1 * scale);
    pfVar3[1] = (float)((double)fVar2 * scale);
    pfVar3 = pfVar3 + 2;
    lVar5 = lVar5 + -1;
  } while (lVar5 != 0);
  return;
}


// 0x017e3b8 (0x110 bytes)
void PushOceanFog(OceanPlane *ocean)

{
  undefined8 cmd;
  
  OceanFogNearDist = g_ViewContext.fogNearDist;
  OceanFogFarDist = g_ViewContext.fogFarDist;
  OceanFogNearIntensity = g_ViewContext.fogNearIntensity;
  OceanFogFarIntensity = g_ViewContext.fogFarIntensity;
  OceanFogR = g_ViewContext.fogR;
  OceanFogG = g_ViewContext.fogG;
  OceanFogB = g_ViewContext.fogB;
  if (LevelFogMode != 1) {
    g_ViewContext.fogNearDist = ocean->fogNearDist;
    g_ViewContext.fogFarDist = ocean->fogFarDist;
    g_ViewContext.fogNearIntensity = ocean->fogNearIntensity;
    g_ViewContext.fogFarIntensity = ocean->fogFarIntensity;
    if (Level != Umbris) {
      g_ViewContext.fogR = (int)ocean->fogR;
      g_ViewContext.fogG = (int)ocean->fogG;
      g_ViewContext.fogB = (int)ocean->fogB;
    }
    RebuildSharedWaveTables();
  }
  cmd = idol_draw::PackCmd(0,1,2,1,ocean->depth);
  SetGSReg(3,cmd);
  return;
}


// 0x017e4c8 (0x90 bytes)
void PopZoneFog(OceanPlane *ocean)

{
  if (LevelFogMode != 1) {
    g_ViewContext.fogNearDist = OceanFogNearDist;
    g_ViewContext.fogFarDist = OceanFogFarDist;
    g_ViewContext.fogNearIntensity = OceanFogNearIntensity;
    g_ViewContext.fogFarIntensity = OceanFogFarIntensity;
    g_ViewContext.fogR = OceanFogR;
    g_ViewContext.fogG = OceanFogG;
    g_ViewContext.fogB = OceanFogB;
    RebuildSharedWaveTables();
  }
  return;
}


// 0x017e558 (0x19c bytes)
undefined8 SubmitZone(OceanPlane *ocean)

{
  undefined8 uVar1;
  
  OceanFogNearDist = g_ViewContext.fogNearDist;
  OceanFogFarDist = g_ViewContext.fogFarDist;
  OceanFogNearIntensity = g_ViewContext.fogNearIntensity;
  OceanFogFarIntensity = g_ViewContext.fogFarIntensity;
  OceanFogR = g_ViewContext.fogR;
  OceanFogG = g_ViewContext.fogG;
  OceanFogB = g_ViewContext.fogB;
  if (LevelFogMode != 1) {
    g_ViewContext.fogNearDist = ocean->fogNearDist;
    g_ViewContext.fogFarDist = ocean->fogFarDist;
    g_ViewContext.fogNearIntensity = ocean->fogNearIntensity;
    g_ViewContext.fogFarIntensity = ocean->fogFarIntensity;
    if (Level != Umbris) {
      g_ViewContext.fogR = (int)ocean->fogR;
      g_ViewContext.fogG = (int)ocean->fogG;
      g_ViewContext.fogB = (int)ocean->fogB;
    }
    RebuildSharedWaveTables();
  }
  uVar1 = idol_draw::PackCmd(0,1,2,1,ocean->depth);
  SetGSReg(3,uVar1);
  uVar1 = OceanPass(ocean);
  if (LevelFogMode != 1) {
    g_ViewContext.fogNearDist = OceanFogNearDist;
    g_ViewContext.fogFarDist = OceanFogFarDist;
    g_ViewContext.fogNearIntensity = OceanFogNearIntensity;
    g_ViewContext.fogFarIntensity = OceanFogFarIntensity;
    g_ViewContext.fogR = OceanFogR;
    g_ViewContext.fogG = OceanFogG;
    g_ViewContext.fogB = OceanFogB;
    RebuildSharedWaveTables();
  }
  return uVar1;
}


// 0x017e700 (0x304 bytes)
// strings: 0065412c: 'OceanSpecial'

void OceanSpecialPass(undefined8 param_1,OceanPlane *param_2,int param_3,int param_4)

{
  float *pfVar1;
  float *pfVar2;
  undefined8 uVar3;
  int iVar4;
  longlong lVar5;
  int iVar6;
  longlong lVar7;
  double dVar8;
  
  idol_draw::RsxCmd_DebugStr_Marker(ForwardPass,"OceanSpecial");
  idol_draw::RsxCmd_DebugStr_Marker(DepthPass,"OceanSpecial");
  OceanFogNearDist = g_ViewContext.fogNearDist;
  OceanFogFarDist = g_ViewContext.fogFarDist;
  OceanFogNearIntensity = g_ViewContext.fogNearIntensity;
  OceanFogFarIntensity = g_ViewContext.fogFarIntensity;
  OceanFogR = g_ViewContext.fogR;
  OceanFogG = g_ViewContext.fogG;
  OceanFogB = g_ViewContext.fogB;
  if (LevelFogMode != 1) {
    g_ViewContext.fogNearDist = param_2->fogNearDist;
    g_ViewContext.fogFarDist = param_2->fogFarDist;
    g_ViewContext.fogNearIntensity = param_2->fogNearIntensity;
    g_ViewContext.fogFarIntensity = param_2->fogFarIntensity;
    g_ViewContext.fogR = (int)param_2->fogR;
    g_ViewContext.fogG = (int)param_2->fogG;
    g_ViewContext.fogB = (int)param_2->fogB;
    RebuildSharedWaveTables();
  }
  uVar3 = idol_draw::PackCmd(0,1,2,1,param_2->depth);
  SetGSReg(3,uVar3);
  STUB_00071170();
  iVar6 = 0;
  lVar7 = 0x80;
  do {
    *(undefined4 *)(g_ScratchBuf + iVar6) = 0xff757c8e;
    iVar4 = g_ScratchBuf + iVar6;
    iVar6 = iVar6 + 8;
    *(undefined4 *)(iVar4 + 4) = 0xff757c8e;
    lVar7 = lVar7 + -1;
  } while (lVar7 != 0);
  iVar6 = 0;
  if (0 < param_4) {
    uVar3 = 0x4070000000000000;
    dVar8 = 0.5;
    do {
      iVar4 = FastCheckBsphereInView(uVar3,param_3);
      if (iVar4 != -1) {
        iVar4 = *(int *)(param_3 + 0x1c);
        lVar5 = (longlong)iVar4;
        pfVar1 = *(float **)(param_3 + 0x14);
        lVar7 = lVar5;
        pfVar2 = (float *)(g_ScratchBuf + 0x1000);
        while (0 < iVar4) {
          lVar7 = lVar7 + -1;
          *pfVar2 = (float)((double)*pfVar1 * dVar8);
          pfVar2[1] = (float)((double)pfVar1[1] * dVar8);
          pfVar1 = pfVar1 + 2;
          pfVar2 = pfVar2 + 2;
          iVar4 = (int)lVar7;
        }
        DrawOceanStrip
                  (param_1,lVar5,*(undefined4 *)(param_3 + 0x10),g_ScratchBuf,g_ScratchBuf + 0x1000)
        ;
      }
      iVar6 = iVar6 + 1;
      param_3 = param_3 + 0x20;
    } while (iVar6 < param_4);
  }
  if (LevelFogMode != 1) {
    g_ViewContext.fogNearDist = OceanFogNearDist;
    g_ViewContext.fogFarDist = OceanFogFarDist;
    g_ViewContext.fogNearIntensity = OceanFogNearIntensity;
    g_ViewContext.fogFarIntensity = OceanFogFarIntensity;
    g_ViewContext.fogR = OceanFogR;
    g_ViewContext.fogG = OceanFogG;
    g_ViewContext.fogB = OceanFogB;
    RebuildSharedWaveTables();
  }
  idol_draw::RsxCmd_WritePass(ForwardPass);
  idol_draw::RsxCmd_WritePass(DepthPass);
  return;
}


// 0x017ea04 (0x48 bytes)
void ScaleWaveTable(float scale)

{
  float fVar1;
  float fVar2;
  float *pfVar3;
  float *pfVar4;
  longlong lVar5;
  
  lVar5 = 0x7c;
  pfVar4 = (float *)&DAT_0073af50;
  pfVar3 = (float *)&DAT_00e5aad0;
  do {
    fVar1 = *pfVar4;
    fVar2 = pfVar4[1];
    pfVar4 = pfVar4 + 2;
    *pfVar3 = fVar1 * scale;
    pfVar3[1] = fVar2 * scale;
    pfVar3 = pfVar3 + 2;
    lVar5 = lVar5 + -1;
  } while (lVar5 != 0);
  return;
}


// 0x017ea4c (0x124 bytes)
void SetFogVars(float neardist,float fardist,float nearintensity,float farintensity)

{
  undefined8 cmd;
  uint in_r7;
  uint in_r8;
  uint in_r9;
  
  OceanFogNearDist = g_ViewContext.fogNearDist;
  OceanFogFarDist = g_ViewContext.fogFarDist;
  OceanFogNearIntensity = g_ViewContext.fogNearIntensity;
  OceanFogFarIntensity = g_ViewContext.fogFarIntensity;
  OceanFogR = g_ViewContext.fogR;
  OceanFogG = g_ViewContext.fogG;
  OceanFogB = g_ViewContext.fogB;
  if (LevelFogMode != 1) {
    if (Level != Umbris) {
      g_ViewContext.fogR = in_r7 & 0xff;
      g_ViewContext.fogG = in_r8 & 0xff;
      g_ViewContext.fogB = in_r9 & 0xff;
    }
    g_ViewContext.fogNearDist = neardist;
    g_ViewContext.fogFarDist = fardist;
    g_ViewContext.fogNearIntensity = nearintensity;
    g_ViewContext.fogFarIntensity = farintensity;
    RebuildSharedWaveTables();
  }
  cmd = idol_draw::PackCmd(0,1,2,1,0x80);
  SetGSReg(3,cmd);
  STUB_00500458(&DAT_0073b330,g_ScratchBuf + 0x2800,0xf8);
  return;
}


// 0x017eb70 (0x90 bytes)
void RestoreFogVars(void)

{
  if (LevelFogMode != 1) {
    g_ViewContext.fogNearDist = OceanFogNearDist;
    g_ViewContext.fogFarDist = OceanFogFarDist;
    g_ViewContext.fogNearIntensity = OceanFogNearIntensity;
    g_ViewContext.fogFarIntensity = OceanFogFarIntensity;
    g_ViewContext.fogR = OceanFogR;
    g_ViewContext.fogG = OceanFogG;
    g_ViewContext.fogB = OceanFogB;
    RebuildSharedWaveTables();
  }
  return;
}


// 0x017ec00 (0x38 bytes)
void OceanPass_Thunk(OceanPlane *ocean)

{
  STUB_000ea1e8();
  OceanPass(ocean);
  return;
}


// 0x017ec40 (0x1d4 bytes)
// strings: 0065413c: 'Ice'

void IcePass(int param_1,int param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined4 *puVar2;
  int iVar3;
  int iVar4;
  longlong lVar5;
  undefined8 uVar6;
  
  idol_draw::RsxCmd_DebugStr_Marker(DL_Pass,"Ice");
  idol_draw::RsxCmd_DebugStr_Marker(DL_DepthPass,"Ice");
  STUB_00071170();
  uVar1 = idol_draw::PackCmd(0,1,2,1,0x80);
  idol_draw::PackCmd(0,1,2,1,0x40);
  lVar5 = 0x2d;
  puVar2 = g_ScratchBuf;
  do {
    *puVar2 = 0x80808080;
    puVar2[1] = 0x80808080;
    puVar2[2] = 0x80808080;
    puVar2[3] = 0x80808080;
    lVar5 = lVar5 + -1;
    puVar2 = puVar2 + 4;
  } while (lVar5 != 0);
  iVar4 = 0;
  if (0 < param_2) {
    uVar6 = 0x4070000000000000;
    do {
      iVar3 = FastCheckBsphereInView(uVar6,param_1);
      if (iVar3 != -1) {
        NormalsToEnvUV
                  (*(int *)(param_1 + 0x1c),*(void **)(param_1 + 0x10),*(Vec3 **)(param_1 + 0x18),
                   (Vec2 *)(g_ScratchBuf + 0x400));
        DrawTexturedStrips
                  (*(undefined4 *)(param_1 + 0x1c),*(undefined4 *)(param_1 + 0x10),g_ScratchBuf,
                   *(undefined4 *)(param_1 + 0x14),g_ScratchBuf + 0x400,param_3,param_4,uVar1);
      }
      iVar4 = iVar4 + 1;
      param_1 = param_1 + 0x20;
    } while (iVar4 < param_2);
  }
  idol_draw::RsxCmd_WritePass(DL_Pass);
  idol_draw::RsxCmd_WritePass(DL_DepthPass);
  return;
}


// 0x017ee14 (0x32c bytes)
void Water_StaticInitGsPackets(void)

{
  DAT_0073b50c = 0x10000;
  DAT_0073a980 = FUN_00502ea0(1,1,0,0,0,6);
  DAT_0073a990 = idol_draw::Blend(1,5,0x60,3,0,0,1,2);
  DAT_0073a9a0 = idol_draw::Blend(1,5,0x60,3,0,0,1,2);
  DAT_0073a9b0 = FUN_00502f08(0,0,0,0,0,0);
  DAT_0073a9c0 = FUN_00502f08(0,0,0,0,0,0);
  DAT_0073a9d0 = STUB_00502fd4_RET_0(0,0,1,1,1,0,0xff90);
  DAT_0073a9e0 = STUB_00502fd4_RET_0(0,0,1,1,1,0,0xff90);
  DAT_0073adc8 = FUN_00502e98(4,4,0);
  DAT_0073adf4 = FUN_005030dc(0);
  DAT_0073ae08 = FUN_00502e98(1,3,0);
  DAT_0073ae20 = FUN_005030ec(0);
  DAT_0073ae60 = FUN_005030ec(0);
  DAT_0073b430 = FUN_00502ea0(1,1,0,0,0,8);
  DAT_0073b440 = FUN_00502f98(0,0,0,0,0,0,1,2);
  DAT_0073b450 = FUN_00502f98(0,0,0,0,0,0,1,2);
  DAT_0073b460 = STUB_00502fd4_RET_0(0,0,1,1,1,0,0xff90);
  DAT_0073b470 = FUN_00502f08(0,0,0,0,0,0);
  DAT_0073b480 = idol_draw::PackCmd(0,1,2,1,0x80);
  DAT_0073b490 = STUB_00502fd4_RET_0(0,0,1,1,1,0,0xff90);
  DAT_0073b4a0 = FUN_00502f08(0,0,0,0,0,0);
  DAT_0073b4b0 = idol_draw::PackCmd(0,1,2,1,0x40);
  return;
}


// 0x017f148 (0x7c bytes)
void WaterDrift_Set
               (double param_1,double param_2,int param_3,undefined8 param_4,undefined8 param_5,
               undefined2 param_6)

{
  DAT_00e5aeec = (short)param_3;
  if (param_3 == 0) {
    DAT_00e5aee0 = 0.0;
    DAT_00e5aef0 = 0.0;
    DAT_00e5aefc = 0;
  }
  else {
    DAT_00e5aee4 = (float)param_1;
    DAT_00e5aee0 = (float)param_1;
    DAT_00e5aeee = 0;
    if ((double)(g_FrameTime * 9.6) - ABS(param_2) < 0.0) {
      param_2 = (double)(float)((double)(g_FrameTime * 9.6) / ABS(param_2));
    }
    DAT_00e5aef0 = (float)param_2;
    DAT_00e5aef4 = (float)param_2;
    DAT_00e5aefc = param_6;
  }
  return;
}


// 0x017f210 (0x5b0 bytes)
void WaterDrift_Update(void)

{
  float fVar1;
  int iVar2;
  undefined8 uVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  
  if (1 < DAT_00e5aeec) {
    if (DAT_00e5aeec < 3) {
      if (DAT_00e5aeee < 1) {
        if ((-1 < DAT_00e5aeee) && (iVar2 = FastDecTimerS16(&DAT_00e5aefe), iVar2 != 0)) {
          dVar4 = (double)FastIntToDouble(DAT_00e5aefc);
          dVar6 = 0.5;
          dVar7 = 1.5;
          dVar5 = (double)MB_randRangeFloat(0.5,1.5);
          dVar8 = (double)(float)(dVar4 * dVar5);
          dVar5 = (double)DAT_00e5aee0;
          dVar4 = (double)MB_randRangeFloat(-1.0471976,1.0471976);
          uVar3 = FastWrapRot((float)dVar5,(float)dVar4);
          dVar4 = (double)MB_randRangeFloat
                                    ((float)((double)DAT_00e5aef0 * dVar6),
                                     (float)((double)DAT_00e5aef0 * dVar7));
          dVar5 = (double)FastDiffRots(uVar3,(double)DAT_00e5aee4);
          DAT_00e5aee8 = (float)(dVar5 / dVar8);
          DAT_00e5aef8 = (float)((double)(float)(dVar4 - (double)DAT_00e5aef4) / dVar8);
          DAT_00e5aefe = FastDoubleToInt(dVar8);
          DAT_00e5aeee = 1;
        }
      }
      else if (DAT_00e5aeee < 2) {
        iVar2 = FastDecTimerS16(&DAT_00e5aefe);
        if (iVar2 == 0) {
          dVar4 = (double)FastWrapRot(DAT_00e5aee4,DAT_00e5aee8);
          DAT_00e5aee4 = (float)dVar4;
          DAT_00e5aef4 = DAT_00e5aef4 + DAT_00e5aef8;
          if (g_FrameTime * 9.6 < ABS(DAT_00e5aef4)) {
            fVar1 = 1.0;
            if (DAT_00e5aef4 - 0.0 < 0.0) {
              fVar1 = -1.0;
            }
            DAT_00e5aef4 = g_FrameTime * 9.6 * fVar1;
          }
        }
        else {
          dVar4 = (double)FastIntToDouble(DAT_00e5aefc);
          dVar5 = (double)MB_randRangeFloat(2.0,3.0);
          DAT_00e5aefe = FastDoubleToInt((double)(float)(dVar4 * dVar5));
          DAT_00e5aeee = 0;
        }
      }
    }
    else if (DAT_00e5aeec < 4) {
      if (DAT_00e5aeee < 2) {
        if (-1 < DAT_00e5aeee) {
          if (DAT_00e5aeee < 1) {
            iVar2 = FastDecTimerS16(&DAT_00e5aefe);
            if (iVar2 != 0) {
              dVar4 = (double)MB_randRangeFloat(45.0,60.0);
              dVar5 = (double)DAT_00e5aee0;
              dVar7 = (double)(float)(dVar4 * (double)animationSpeed);
              dVar4 = (double)MB_randRangeFloat(-1.5707964,1.5707964);
              uVar3 = FastWrapRot((float)dVar5,(float)dVar4);
              dVar4 = (double)MB_randRangeFloat(DAT_00e5aef0 * 1.5,DAT_00e5aef0 * 2.0);
              dVar5 = (double)FastDiffRots(uVar3,(double)DAT_00e5aee4);
              DAT_00e5aee8 = (float)(dVar5 / dVar7);
              DAT_00e5aef8 = (float)((double)(float)(dVar4 - (double)DAT_00e5aef4) / dVar7);
              DAT_00e5aefe = FastDoubleToInt(dVar7);
              DAT_00e5aeee = 1;
            }
          }
          else {
            iVar2 = FastDecTimerS16(&DAT_00e5aefe);
            if (iVar2 == 0) {
              dVar4 = (double)FastWrapRot(DAT_00e5aee4,DAT_00e5aee8);
              DAT_00e5aee4 = (float)dVar4;
              DAT_00e5aef4 = DAT_00e5aef4 + DAT_00e5aef8;
              if (g_FrameTime * 9.6 < ABS(DAT_00e5aef4)) {
                fVar1 = 1.0;
                if (DAT_00e5aef4 - 0.0 < 0.0) {
                  fVar1 = -1.0;
                }
                DAT_00e5aef4 = g_FrameTime * 9.6 * fVar1;
              }
            }
            else {
              dVar4 = (double)FastIntToDouble(DAT_00e5aefc);
              dVar5 = (double)MB_randRangeFloat(1.0,1.5);
              DAT_00e5aefe = FastDoubleToInt((double)(float)(dVar4 * dVar5));
              DAT_00e5aeee = 2;
            }
          }
        }
      }
      else if (DAT_00e5aeee < 3) {
        iVar2 = FastDecTimerS16(&DAT_00e5aefe);
        if (iVar2 != 0) {
          dVar4 = (double)MB_randRangeFloat(45.0,60.0);
          dVar5 = (double)DAT_00e5aee0;
          dVar7 = (double)(float)(dVar4 * (double)animationSpeed);
          dVar4 = (double)MB_randRangeFloat(-0.785398,0.785398);
          uVar3 = FastWrapRot((float)dVar5,(float)dVar4);
          dVar4 = (double)MB_randRangeFloat(DAT_00e5aef0 * 0.8,DAT_00e5aef0 * 1.2);
          dVar5 = (double)FastDiffRots(uVar3,(double)DAT_00e5aee4);
          DAT_00e5aee8 = (float)(dVar5 / dVar7);
          DAT_00e5aef8 = (float)((double)(float)(dVar4 - (double)DAT_00e5aef4) / dVar7);
          DAT_00e5aefe = FastDoubleToInt(dVar7);
          DAT_00e5aeee = 3;
        }
      }
      else if (DAT_00e5aeee < 4) {
        iVar2 = FastDecTimerS16(&DAT_00e5aefe);
        if (iVar2 == 0) {
          dVar4 = (double)FastWrapRot(DAT_00e5aee4,DAT_00e5aee8);
          DAT_00e5aee4 = (float)dVar4;
          DAT_00e5aef4 = DAT_00e5aef4 + DAT_00e5aef8;
          if (g_FrameTime * 9.6 < ABS(DAT_00e5aef4)) {
            fVar1 = 1.0;
            if (DAT_00e5aef4 - 0.0 < 0.0) {
              fVar1 = -1.0;
            }
            DAT_00e5aef4 = g_FrameTime * 9.6 * fVar1;
          }
        }
        else {
          dVar4 = (double)FastIntToDouble(DAT_00e5aefc);
          dVar5 = (double)MB_randRangeFloat(3.0,5.0);
          DAT_00e5aefe = FastDoubleToInt((double)(float)(dVar4 * dVar5));
          DAT_00e5aeee = 0;
        }
      }
    }
  }
  return;
}


// 0x017f7d0 (0x228 bytes)
void UpdateSound_0(void *param_1)

{
  byte bVar1;
  int *piVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  int iVar6;
  
  piVar2 = *(int **)((int)param_1 + 8);
  if (-1 < *piVar2) {
    fVar3 = GameCamera.posY - *(float *)((int)param_1 + 0x44);
    fVar4 = GameCamera.posX - *(float *)((int)param_1 + 0x40);
    fVar5 = GameCamera.posZ - *(float *)((int)param_1 + 0x48);
    fVar3 = SQRT(fVar5 * fVar5 + fVar4 * fVar4 + fVar3 * fVar3);
    if (*(float *)((int)param_1 + 0xc) <= fVar3) {
      if (*(float *)((int)param_1 + 0xc) + 1.0 < fVar3) {
        iVar6 = piVar2[4];
        if (((iVar6 != -1) && (g_SoundChannels[iVar6].pSoundInstance == param_1)) &&
           (g_SoundChannels[iVar6].state != '\0')) {
          sound_Kill(iVar6);
        }
        piVar2[4] = -1;
      }
    }
    else {
      bVar1 = *(byte *)(g_pSoundDefs + *piVar2 * 0x20 + 0x18);
      if (((g_SoundChannels[piVar2[4]].pSoundInstance != param_1) ||
          (g_SoundChannels[piVar2[4]].state == '\0')) &&
         (iVar6 = FastDecTimerS32(piVar2 + 3), iVar6 != 0)) {
        iVar6 = sound_AmbientPlay
                          (*piVar2,((uint)(ZERO_MASK((uint)bVar1)) & 0xfffffffc) +
                                   4,param_1,0x400);
        piVar2[4] = iVar6;
        if (0 < piVar2[2]) {
          iVar6 = MB_randInt(piVar2[2] - piVar2[1]);
          piVar2[3] = (int)((float)(longlong)
                                   (animationSpeed * ((float)(longlong)(piVar2[1] + iVar6) + 0.5)) *
                           60.0);
        }
      }
    }
  }
  return;
}


// 0x017fa08 (0x4c4 bytes)
void UpdateSound_1(void *param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  byte bVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  int *piVar13;
  int iVar14;
  int iVar15;
  int handle;
  double dVar16;
  double dVar17;
  double dVar18;
  double dVar19;
  double dVar20;
  double dVar21;
  double dVar22;
  double dVar23;
  
  dVar16 = (double)*(float *)((int)param_1 + 0xc);
  dVar17 = (double)(GameCamera.posY - *(float *)((int)param_1 + 0x44));
  dVar18 = (double)(GameCamera.posX - *(float *)((int)param_1 + 0x40));
  dVar23 = (double)(GameCamera.posZ - *(float *)((int)param_1 + 0x48));
  dVar21 = (double)(float)((double)*(float *)((int)param_1 + 0x74) * dVar23 +
                          (double)(float)((double)*(float *)((int)param_1 + 0x54) * dVar18 +
                                         (double)(float)((double)*(float *)((int)param_1 + 100) *
                                                        dVar17)));
  fVar1 = (float)((double)*(float *)((int)param_1 + 0x74) * dVar16 +
                 (double)(float)((double)*(float *)((int)param_1 + 0x54) * dVar16 +
                                (double)(float)((double)*(float *)((int)param_1 + 100) * dVar16)));
  dVar22 = (double)(float)((double)*(float *)((int)param_1 + 0x70) * dVar23 +
                          (double)(float)((double)*(float *)((int)param_1 + 0x50) * dVar18 +
                                         (double)(float)((double)*(float *)((int)param_1 + 0x60) *
                                                        dVar17)));
  fVar2 = (float)((double)*(float *)((int)param_1 + 0x70) * dVar16 +
                 (double)(float)((double)*(float *)((int)param_1 + 0x50) * dVar16 +
                                (double)(float)((double)*(float *)((int)param_1 + 0x60) * dVar16)));
  dVar20 = (double)(float)((double)*(float *)((int)param_1 + 0x78) * dVar23 +
                          (double)(float)((double)*(float *)((int)param_1 + 0x58) * dVar18 +
                                         (double)(float)((double)*(float *)((int)param_1 + 0x68) *
                                                        dVar17)));
  fVar3 = (float)((double)*(float *)((int)param_1 + 0x78) * dVar16 +
                 (double)(float)((double)*(float *)((int)param_1 + 0x58) * dVar16 +
                                (double)(float)((double)*(float *)((int)param_1 + 0x68) * dVar16)));
  fVar5 = SQRT((float)(dVar20 * dVar20 +
                      (double)(float)(dVar22 * dVar22 + (double)(float)(dVar21 * dVar21))));
  dVar19 = (double)*(float *)((int)param_1 + 0x7c);
  fVar1 = SQRT(fVar3 * fVar3 + fVar2 * fVar2 + fVar1 * fVar1);
  piVar13 = *(int **)((int)param_1 + 8);
  dVar16 = (double)(float)((double)*(float *)((int)param_1 + 0x5c) * dVar18 +
                          (double)(float)((double)*(float *)((int)param_1 + 0x6c) * dVar17));
  if (fVar1 <= fVar5) {
    iVar14 = piVar13[4];
    if (((iVar14 != -1) && (g_SoundChannels[iVar14].pSoundInstance == param_1)) &&
       (g_SoundChannels[iVar14].state != '\0')) {
      sound_Kill(iVar14);
    }
    piVar13[4] = -1;
  }
  else {
    dVar17 = 1.0;
    if (((1.0 < ABS(dVar22)) || (1.0 < ABS(dVar21))) || (1.0 < ABS(dVar20))) {
      dVar18 = dVar17;
      if ((dVar22 <= 1.0) && (dVar18 = dVar22, dVar22 < -1.0)) {
        dVar18 = -1.0;
      }
      dVar22 = dVar18;
      dVar18 = dVar17;
      if ((dVar21 <= 1.0) && (dVar18 = dVar21, dVar21 < -1.0)) {
        dVar18 = -1.0;
      }
      dVar21 = dVar18;
      if ((dVar20 <= 1.0) && (dVar17 = dVar20, dVar20 < -1.0)) {
        dVar17 = -1.0;
      }
      iVar14 = sound_GetFade
                         (fVar5,SQRT((float)(dVar17 * dVar17 +
                                            (double)(float)(dVar22 * dVar22 +
                                                           (double)(float)(dVar21 * dVar21)))),fVar1
                          ,(void *)(g_pSoundDefs + *piVar13 * 0x20));
      iVar15 = *piVar13;
    }
    else {
      iVar15 = *piVar13;
      iVar14 = *(int *)(g_pSoundDefs + iVar15 * 0x20 + 0xc);
      dVar17 = dVar20;
    }
    handle = piVar13[4];
    bVar4 = *(byte *)(g_pSoundDefs + iVar15 * 0x20 + 0x18);
    if ((g_SoundChannels[handle].pSoundInstance != param_1) ||
       (g_SoundChannels[handle].state == '\0')) {
      iVar15 = FastDecTimerS32(piVar13 + 3);
      if (iVar15 == 0) {
        piVar13[4] = -1;
        return;
      }
      handle = sound_AmbientPlay
                         (*piVar13,((uint)(ZERO_MASK((uint)bVar4)) & 0xfffffffc) +
                                   0x14,param_1,iVar14);
      piVar13[4] = handle;
      if (0 < piVar13[2]) {
        iVar15 = MB_randInt(piVar13[2] - piVar13[1]);
        handle = piVar13[4];
        piVar13[3] = (int)((float)(longlong)
                                  (animationSpeed * ((float)(longlong)(piVar13[1] + iVar15) + 0.5))
                          * 60.0);
      }
    }
    if (handle != -1) {
      sound_SetVol(handle,iVar14);
      fVar1 = *(float *)((int)param_1 + 0x24);
      fVar2 = *(float *)((int)param_1 + 0x28);
      fVar3 = *(float *)((int)param_1 + 0x2c);
      fVar5 = *(float *)((int)param_1 + 0x14);
      fVar6 = *(float *)((int)param_1 + 0x18);
      fVar7 = *(float *)((int)param_1 + 0x1c);
      fVar8 = *(float *)((int)param_1 + 0x34);
      fVar9 = *(float *)((int)param_1 + 0x38);
      fVar10 = *(float *)((int)param_1 + 0x3c);
      fVar11 = *(float *)((int)param_1 + 0x44);
      fVar12 = *(float *)((int)param_1 + 0x48);
      iVar14 = piVar13[4];
      g_SoundChannels[iVar14].pos[0] =
           (float)((double)*(float *)((int)param_1 + 0x30) * dVar17 +
                  (double)(float)((double)*(float *)((int)param_1 + 0x10) * dVar22 +
                                 (double)(float)((double)*(float *)((int)param_1 + 0x20) * dVar21)))
           + *(float *)((int)param_1 + 0x40);
      g_SoundChannels[iVar14].pos[1] =
           (float)((double)fVar8 * dVar17 +
                  (double)(float)((double)fVar5 * dVar22 + (double)(float)((double)fVar1 * dVar21)))
           + fVar11;
      g_SoundChannels[iVar14].pos[2] =
           (float)((double)fVar9 * dVar17 +
                  (double)(float)((double)fVar6 * dVar22 + (double)(float)((double)fVar2 * dVar21)))
           + fVar12;
      g_SoundChannels[iVar14].pos[3] =
           (float)((double)fVar10 * dVar17 +
                  (double)(float)((double)fVar7 * dVar22 + (double)(float)((double)fVar3 * dVar21)))
           + (float)(dVar19 * dVar23 + dVar16);
    }
  }
  return;
}


// 0x017fee0 (0x31c bytes)
void UpdateSound_2(void *param_1)

{
  float fVar1;
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
  int *piVar13;
  int iVar14;
  double dVar15;
  double dVar16;
  double dVar17;
  double dVar18;
  
  fVar1 = *(float *)((int)param_1 + 0xc);
  fVar2 = GameCamera.posY - *(float *)((int)param_1 + 0x44);
  fVar3 = GameCamera.posX - *(float *)((int)param_1 + 0x40);
  fVar4 = GameCamera.posZ - *(float *)((int)param_1 + 0x48);
  dVar18 = 1.0;
  piVar13 = *(int **)((int)param_1 + 8);
  if ((ABS(*(float *)((int)param_1 + 0x70) * fVar4 +
           *(float *)((int)param_1 + 0x50) * fVar3 + *(float *)((int)param_1 + 0x60) * fVar2) <=
       ABS(*(float *)((int)param_1 + 0x70) * fVar1 +
           *(float *)((int)param_1 + 0x50) * fVar1 + *(float *)((int)param_1 + 0x60) * fVar1) + 1.0)
     && (ABS(*(float *)((int)param_1 + 0x74) * fVar4 +
             *(float *)((int)param_1 + 0x54) * fVar3 + *(float *)((int)param_1 + 100) * fVar2) <=
         ABS(*(float *)((int)param_1 + 0x74) * fVar1 +
             *(float *)((int)param_1 + 0x54) * fVar1 + *(float *)((int)param_1 + 100) * fVar1) + 1.0
        )) {
    if (ABS(*(float *)((int)param_1 + 0x78) * fVar4 +
            *(float *)((int)param_1 + 0x58) * fVar3 + *(float *)((int)param_1 + 0x68) * fVar2) <=
        ABS(*(float *)((int)param_1 + 0x78) * fVar1 +
            *(float *)((int)param_1 + 0x58) * fVar1 + *(float *)((int)param_1 + 0x68) * fVar1) + 1.0
       ) {
      if ((g_SoundChannels[piVar13[4]].pSoundInstance != param_1) ||
         (g_SoundChannels[piVar13[4]].state == '\0')) {
        iVar14 = FastDecTimerS32(piVar13 + 3);
        if (iVar14 == 0) {
          piVar13[4] = -1;
        }
        else {
          iVar14 = sound_AmbientPlay(*piVar13,0,param_1,0x400);
          piVar13[4] = iVar14;
          if (iVar14 != -1) {
            dVar17 = -1.0;
            dVar15 = (double)MB_randRangeFloat(-1.0,(float)dVar18);
            dVar16 = (double)MB_randRangeFloat((float)dVar17,(float)dVar18);
            dVar18 = (double)MB_randRangeFloat((float)dVar17,(float)dVar18);
            fVar1 = *(float *)((int)param_1 + 0x20);
            fVar2 = *(float *)((int)param_1 + 0x24);
            fVar3 = *(float *)((int)param_1 + 0x28);
            fVar4 = *(float *)((int)param_1 + 0x10);
            fVar5 = *(float *)((int)param_1 + 0x14);
            fVar6 = *(float *)((int)param_1 + 0x18);
            fVar7 = *(float *)((int)param_1 + 0x30);
            fVar8 = *(float *)((int)param_1 + 0x34);
            fVar9 = *(float *)((int)param_1 + 0x38);
            fVar10 = *(float *)((int)param_1 + 0x40);
            fVar11 = *(float *)((int)param_1 + 0x44);
            fVar12 = *(float *)((int)param_1 + 0x48);
            iVar14 = piVar13[4];
            g_SoundChannels[iVar14].pos[3] =
                 (float)((double)(float)((double)*(float *)((int)param_1 + 0x3c) * dVar18 +
                                        (double)(float)((double)*(float *)((int)param_1 + 0x1c) *
                                                        dVar15 + (double)(float)((double)*(float *)(
                                                  (int)param_1 + 0x2c) * dVar16))) +
                        (double)*(float *)((int)param_1 + 0x3c));
            g_SoundChannels[iVar14].pos[0] =
                 (float)((double)fVar7 * dVar18 +
                        (double)(float)((double)fVar4 * dVar15 +
                                       (double)(float)((double)fVar1 * dVar16))) + fVar10;
            g_SoundChannels[iVar14].pos[1] =
                 (float)((double)fVar8 * dVar18 +
                        (double)(float)((double)fVar5 * dVar15 +
                                       (double)(float)((double)fVar2 * dVar16))) + fVar11;
            g_SoundChannels[iVar14].pos[2] =
                 (float)((double)fVar9 * dVar18 +
                        (double)(float)((double)fVar6 * dVar15 +
                                       (double)(float)((double)fVar3 * dVar16))) + fVar12;
          }
          if (0 < piVar13[2]) {
            iVar14 = MB_randInt(piVar13[2] - piVar13[1]);
            piVar13[3] = (int)((float)(longlong)
                                      (animationSpeed *
                                      ((float)(longlong)(piVar13[1] + iVar14) + 0.5)) * 60.0);
          }
        }
      }
    }
  }
  return;
}


// 0x0180210 (0x1c4 bytes)
void UpdateSound_3(int param_1)

{
  undefined1 *puVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  longlong lVar6;
  double dVar7;
  double dVar8;
  
  fVar2 = g_heroPosition.y - *(float *)(param_1 + 0x44);
  fVar3 = g_heroPosition.x - *(float *)(param_1 + 0x40);
  fVar4 = g_heroPosition.z - *(float *)(param_1 + 0x48);
  puVar1 = *(undefined1 **)(param_1 + 8);
  fVar5 = *(float *)(param_1 + 0x70) * fVar4 +
          *(float *)(param_1 + 0x50) * fVar3 + *(float *)(param_1 + 0x60) * fVar2;
  if (((1.0 < ABS(fVar5)) ||
      (1.0 < ABS(*(float *)(param_1 + 0x74) * fVar4 +
                 *(float *)(param_1 + 0x54) * fVar3 + *(float *)(param_1 + 100) * fVar2))) ||
     (1.0 < ABS(*(float *)(param_1 + 0x78) * fVar4 +
                *(float *)(param_1 + 0x58) * fVar3 + *(float *)(param_1 + 0x68) * fVar2))) {
    if (puVar1[3] != '\0') {
      if (fVar5 <= 0.0) {
        sound_SetReverb(param_1,5,0,0,0);
      }
      else {
        sound_SetReverb(0,*puVar1,*(undefined4 *)(puVar1 + 4),puVar1[1],puVar1[2]);
      }
      puVar1[3] = 0;
    }
  }
  else {
    dVar8 = (double)(float)((double)(fVar5 + 1.0) * 0.5);
    dVar7 = (double)FastIntToDouble
                              ((double)(fVar5 + 1.0),0x3fe0000000000000,*(undefined4 *)(puVar1 + 4))
    ;
    lVar6 = FastDoubleToInt((double)(float)(dVar7 * dVar8));
    sound_SetReverb
              (param_1,*puVar1,
               lVar6 + (*(int *)(puVar1 + 4) - lVar6 >> 0x3f & *(int *)(puVar1 + 4) - lVar6),
               puVar1[1],puVar1[2]);
    puVar1[3] = 1;
  }
  return;
}


// 0x01803d4 (0x14 bytes)
void Water_StaticInit2(void)

{
  DAT_0073b58c = 0x10000;
  return;
}


// 0x0180408 (0x2e0 bytes)
void UpdateSound_4(void *param_1)

{
  int *piVar1;
  uint handle;
  float fVar2;
  ulonglong uVar3;
  int iVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  float local_a0;
  float local_9c;
  float local_98;
  char local_94 [4];
  float local_90 [8];
  longlong local_70;
  
  local_90[0] = 4.0;
  dVar11 = 0.0;
  local_90[1] = 0.0;
  local_90[2] = 0.0;
  piVar1 = *(int **)((int)param_1 + 8);
  dVar13 = 1.0;
  local_90[3] = 1.0;
  local_90[4] = 0.0;
  local_90[5] = 0.0;
  local_90[6] = 1.0;
  dVar8 = 6.2831854820251465;
  dVar9 = 0.05000000074505806;
  dVar10 = 0.3141592741012573;
  dVar7 = dVar11;
  dVar12 = dVar11;
  do {
    MB_RotateQuatAxisAngle((float)dVar11,&local_a0,local_90);
    local_a0 = GameCamera.posX + local_a0;
    local_98 = GameCamera.posZ + local_98;
    local_9c = GameCamera.posY + local_9c;
    local_94[0] = GameCamera.field8_0x14c[0];
    local_94[1] = GameCamera.field8_0x14c[1];
    local_94[2] = GameCamera.field8_0x14c[2];
    local_94[3] = GameCamera.field8_0x14c[3];
    dVar5 = (double)MB_SampleByteGrid
                              (CONCAT44(local_a0,local_9c),
                               CONCAT44(local_98,GameCamera.field8_0x14c));
    dVar11 = (double)(float)(dVar11 + dVar10);
    dVar6 = (double)GameCamera.posZ;
    if (dVar5 - dVar6 < 0.0) {
      dVar7 = (double)(float)(dVar7 + dVar9);
    }
  } while (dVar11 < dVar8);
  dVar11 = (double)DAT_00e5af00;
  if (dVar7 <= dVar11) {
    dVar7 = -(double)(float)((double)DAT_0071f424 * 0.75 - dVar11);
  }
  else {
    dVar7 = (double)(float)((double)DAT_0071f424 * 0.20000000298023224 + dVar11);
  }
  DAT_00e5af00 = (float)dVar7;
  if (dVar7 <= dVar13) {
    if (dVar7 < dVar12) {
      DAT_00e5af00 = 0.0;
      dVar7 = dVar12;
    }
  }
  else {
    DAT_00e5af00 = 1.0;
    dVar7 = dVar13;
  }
  handle = piVar1[2];
  uVar3 = (ulonglong)handle;
  if ((g_SoundChannels[handle].pSoundInstance == param_1) &&
     (g_SoundChannels[handle].state != '\0')) {
    iVar4 = (int)(((float)((double)(float)piVar1[1] + dVar7) /
                  (float)((double)(float)piVar1[1] + dVar13)) * 1024.0);
    local_70 = (longlong)iVar4;
    sound_SetVol(handle,iVar4);
    uVar3 = (ulonglong)(uint)piVar1[2];
    dVar6 = (double)GameCamera.posZ;
  }
  iVar4 = (int)(uVar3 << 7) - (int)(uVar3 << 4);
  *(float *)((int)g_SoundChannels + iVar4 + 0x20) = GameCamera.posX;
  fVar2 = GameCamera.posY;
  *(float *)((int)g_SoundChannels + iVar4 + 0x28) = (float)dVar6;
  *(float *)((int)g_SoundChannels + iVar4 + 0x24) = fVar2;
  *(char (*) [4])((int)g_SoundChannels + iVar4 + 0x2c) = GameCamera.field8_0x14c;
  if ((g_SoundChannels[piVar1[2]].pSoundInstance != param_1) ||
     (g_SoundChannels[piVar1[2]].state == '\0')) {
    iVar4 = sound_AmbientPlay(*piVar1,0x15,param_1,0x400);
    piVar1[2] = iVar4;
  }
  return;
}


// 0x01806e8 (0xf8 bytes)
void UpdateSound_5(void *param_1)

{
  int *piVar1;
  bool bVar2;
  int iVar3;
  
  piVar1 = *(int **)((int)param_1 + 8);
  iVar3 = piVar1[1];
  bVar2 = false;
  g_SoundChannels[iVar3].pos[0] = GameCamera.posX;
  g_SoundChannels[iVar3].pos[1] = GameCamera.posY;
  g_SoundChannels[iVar3].pos[2] = GameCamera.posZ;
  g_SoundChannels[iVar3].pos[3] = (float)GameCamera.field8_0x14c;
  iVar3 = piVar1[1];
  if ((g_SoundChannels[iVar3].pSoundInstance == param_1) &&
     (g_SoundChannels[iVar3].state != '\0')) {
    bVar2 = true;
  }
  if (GameCamera.camUnderWater == 0) {
    if (bVar2) {
      sound_Kill(iVar3);
      piVar1[1] = -1;
    }
  }
  else if (!bVar2) {
    iVar3 = sound_AmbientPlay(*piVar1,0x15,param_1,0x400);
    piVar1[1] = iVar3;
  }
  return;
}


// 0x01807e8 (0x174 bytes)
void UpdateSound_6(int param_1)

{
  int *piVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  short sVar6;
  short sVar7;
  
  piVar1 = *(int **)(param_1 + 8);
  sVar7 = *(short *)(piVar1 + 3);
  if ((sVar7 != -1) || (*(short *)((int)piVar1 + 0xe) != -1)) {
    fVar2 = g_heroPosition.y - *(float *)(param_1 + 0x44);
    fVar3 = g_heroPosition.x - *(float *)(param_1 + 0x40);
    fVar4 = g_heroPosition.z - *(float *)(param_1 + 0x48);
    fVar5 = *(float *)(param_1 + 0x70) * fVar4 +
            *(float *)(param_1 + 0x50) * fVar3 + *(float *)(param_1 + 0x60) * fVar2;
    if ((1.0 < ABS(fVar5)) ||
       ((1.0 < ABS(*(float *)(param_1 + 0x74) * fVar4 +
                   *(float *)(param_1 + 0x54) * fVar3 + *(float *)(param_1 + 100) * fVar2) ||
        (1.0 < ABS(*(float *)(param_1 + 0x78) * fVar4 +
                   *(float *)(param_1 + 0x58) * fVar3 + *(float *)(param_1 + 0x68) * fVar2))))) {
      if (piVar1[2] != 0) {
        sVar6 = *(short *)((int)piVar1 + 0xe);
        if (*(short *)((int)piVar1 + 0xe) == -1) {
          *(short *)((int)piVar1 + 0xe) = sVar7;
          sVar6 = sVar7;
        }
        if (sVar7 == -1) {
          *(short *)(piVar1 + 3) = sVar6;
          sVar7 = sVar6;
        }
        if (fVar5 <= 0.0) {
          music_SetTransition(*piVar1,(int)sVar7);
        }
        else {
          music_SetTransition(piVar1[1],(int)sVar6);
        }
        piVar1[2] = 0;
      }
    }
    else {
      piVar1[2] = 1;
    }
  }
  return;
}


