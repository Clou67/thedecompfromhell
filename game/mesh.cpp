// game/mesh.cpp -- water surfaces: tile wave simulation, water sheets, environment-map UVs
// STATUS: IN PROGRESS
// MERGE (18 of 19 functions cleaned; the rest are generated)
// 19 functions, 0xe9114-0xea378
//
// A water surface is an array of 16x16-height tiles (WaterTile). Each tile keeps three height
// buffers; a wave step reads one buffer as "previous", stages the current heights with a border
// taken from the neighbours (StageTileBuf, 19 rows of 24 floats), and writes the new heights plus
// the neighbours' border copies (WaterTile_StepWave).
#include <math.h>
#include <string.h>
#include "game/mesh.h"
#include "game/camera.h"
#include "game/hero.h"
#include "game/water.h"
#include "idol/fastfunc.h"

#define STAGE_W 24          /* staged grid: row 0 = top border, rows 1-16 the tile, 17-18 bottom;
                               col 3 = left border, cols 4-19 the tile, 20-21 right */
#define NO_LINK 0xff

#define WAVE_SPREAD 0.25f   /* 0xe9bfc */
#define WAVE_DAMP   0.0625f /* 0xe9c00 */
#define ENV_SCALE   0.45f
#define ENV_UV      0.5f    /* 0xea1f0 */

// 0x00e9114 (0x14 bytes)
void SECTION_HEADER_MESH(void)
{
    DAT_00726aac = 0x10000;
}

/* PS2 VU code, emptied on PS3 */


// 0x00e9130 (0x4 bytes)
void STUB_000e9130(...)
{
}


// 0x00e9134 (0x4 bytes)
void STUB_000e9134(...)
{
}


// 0x00e9138 (0x4 bytes)
void STUB_000e9138(...)
{
}


// 0x00e913c (0x4 bytes)
void STUB_000e913c(...)
{
}


// 0x00e9140 (0x8 bytes)
int STUB_000e9140(...)
{
    return 0;
}


// 0x00e9148 (0x4 bytes)
void STUB_000e9148(...)
{
}


// 0x00e914c (0x4 bytes)
void STUB_000e914c(...)
{
}


// 0x00e9150 (0x8 bytes)
int STUB_000e9150(...)
{
    return 0;
}


// 0x00e9158 (0x4 bytes)
void STUB_000e9158(...)
{
}


// 0x00e915c (0x4c bytes)
void AddUVOffsets(Vec2 *dst, Vec2 *src, int count, Vec2 *offset)
{
    float u = offset->x, v = offset->y;
    for (; count > 0; count--, dst++, src++) {
        dst->x = src->x + u;
        dst->y = src->y + v;
    }
}


// 0x00e91a8 (0x138 bytes)
void StageTileBuf(float (*stage)[24], WaterTileBuf *buf)
{
    unsigned i;

    memcpy(&stage[0][4], buf->heightTop, sizeof(buf->heightTop));
    for (i = 0; i < 16; i++)
        memcpy(&stage[i + 1][4], buf->height[i], sizeof(buf->height[i]));
    memcpy(&stage[17][4], buf->heightBottom, sizeof(buf->heightBottom));
    memcpy(&stage[18][4], buf->heightBottom2, sizeof(buf->heightBottom2));
    for (i = 0; i < 16; i++) {
        stage[i + 1][3] = buf->heightLeft[i];
        stage[i + 1][20] = buf->heightRight[i];
        stage[i + 1][21] = buf->heightRight2[i];
    }
    stage[0][3] = buf->heightCorner[0];
    stage[0][20] = buf->heightCorner[1];
    stage[17][3] = buf->heightCorner[2];
    stage[17][20] = buf->heightCorner[3];
    stage[17][21] = buf->heightCorner[4];
    stage[18][20] = buf->heightCorner[5];
}


// 0x00e92e8 (0xb4 bytes)
void WaterTileBufLerp(float t, float *dst, float *bufA, float *bufB)
{
    float u = 1.0f - t;
    for (unsigned i = 0; i < sizeof(WaterTileBuf) / sizeof(float); i++)
        dst[i] = bufA[i] * u + bufB[i] * t;
}


// 0x00e9470 (0x78c bytes)
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void ShadeVerts(WaterTile *tile)

{
  longlong lVar1;
  GPiece<16> auVar2;
  GPiece<16> auVar3;
  ulonglong *puVar4;
  GPiece<16> auVar5;
  GPiece<16> auVar6;
  GPiece<16> auVar7;
  GPiece<16> auVar8;
  GPiece<16> auVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  longlong lVar13;
  undefined4 *puVar14;
  longlong lVar15;
  ulonglong uVar16;
  longlong lVar17;
  ulonglong uVar18;
  ulonglong uVar19;
  ulonglong uVar20;
  int iVar21;
  ulonglong unaff_r15;
  ulonglong unaff_r16;
  ulonglong unaff_r17;
  ulonglong unaff_r18;
  ulonglong unaff_r19;
  ulonglong unaff_r20;
  ulonglong unaff_r21;
  ulonglong unaff_r22;
  ulonglong unaff_r23;
  ulonglong unaff_r24;
  ulonglong unaff_r25;
  ulonglong unaff_r26;
  longlong lVar22;
  ulonglong unaff_r27;
  ulonglong uVar23;
  longlong lVar24;
  ulonglong unaff_r28;
  ulonglong unaff_r29;
  ulonglong unaff_r30;
  ulonglong unaff_r31;
  ulonglong uVar25;
  byte in_cr6;
  undefined4 uVar26;
  GPiece<16> auVar27;
  GPiece<16> auVar28;
  GPiece<16> auVar29;
  GPiece<16> auVar30;
  GPiece<16> auVar31;
  GPiece<16> auVar32;
  GPiece<16> auVar33;
  GPiece<16> auVar34;
  GPiece<16> auVar35;
  GPiece<16> auVar36;
  GPiece<16> auVar37;
  GPiece<16> auVar38;
  GPiece<16> auVar39;
  GPiece<16> auVar40;
  GPiece<16> auVar41;
  GPiece<16> auVar42;
  GPiece<16> auVar43;
  GPiece<16> auVar44;
  GPiece<16> auVar45;
  GPiece<16> auVar46;
  GPiece<16> auVar47;
  GPiece<16> auVar48;
  GPiece<16> auVar49;
  undefined4 in_vr31_32_0;
  undefined4 in_vr31_32_1;
  undefined4 in_vr31_32_2;
  undefined4 in_vr31_32_3;
  GPiece<16> auVar50;
  GPiece<16> auVar51;
  
  lVar15 = (longlong)(int)tile;
  uVar23 = ZEXT48(&stack0x00000000);
  lVar1 = uVar23 - 0x2d0;
  puVar4 = (ulonglong *)lVar1;
  *puVar4 = uVar23;
  lVar13 = uVar23 - 0xa0;
  puVar14 = (undefined4 *)lVar13;
  puVar14[3] = in_vr31_32_3;
  puVar14[2] = in_vr31_32_2;
  puVar14[1] = in_vr31_32_1;
  *puVar14 = in_vr31_32_0;
  puVar4[0x57] = unaff_r29;
  puVar4[0x55] = unaff_r27;
  uVar23 = (ulonglong)DAT_00902ec8;
  puVar4[0x2b] = uVar23;
  fVar12 = WaterTileConsts.lightDir.z;
  fVar11 = WaterTileConsts.lightDir.y;
  fVar10 = WaterTileConsts.lightDir.x;
  puVar4[0x53] = unaff_r25;
  auVar27 = loadVectorLeftIndexed(0x10,0x73aa00);
  auVar29 = loadVectorLeftIndexed(0x14,0x73aa00);
  *(undefined1 (*) [16])(puVar4 + 0x2e) = auVar27;
  auVar27 = loadVectorLeftIndexed(4,lVar15);
  *(undefined1 (*) [16])(puVar4 + 0x2c) = auVar29;
  puVar4[0x54] = unaff_r26;
  auVar29 = loadVectorLeftIndexed(0xc,0x73aa00);
  lVar22 = uVar23 + 0x780;
  *(float *)(puVar4 + 6) = fVar10;
  auVar27 = vectorAddFloatingPoint(auVar27,auVar29);
  *(float *)((int)puVar4 + 0x34) = fVar11;
  *(float *)(puVar4 + 7) = fVar12;
  lVar24 = uVar23 + 0x1088;
  puVar4[0x30] = 0;
  fVar11 = GameCamera.posZ;
  fVar10 = GameCamera.posY;
  *(float *)(puVar4 + 8) = GameCamera.posX;
  puVar4[0x59] = unaff_r31;
  puVar4[0x58] = unaff_r30;
  puVar4[0x56] = unaff_r28;
  puVar4[0x52] = unaff_r24;
  puVar4[0x51] = unaff_r23;
  puVar4[0x50] = unaff_r22;
  puVar4[0x4f] = unaff_r21;
  puVar4[0x4e] = unaff_r20;
  puVar4[0x4d] = unaff_r19;
  puVar4[0x4c] = unaff_r18;
  puVar4[0x4b] = unaff_r17;
  puVar4[0x4a] = unaff_r16;
  puVar4[0x49] = unaff_r15;
  *(float *)((int)puVar4 + 0x44) = fVar10;
  *(float *)(puVar4 + 9) = fVar11;
  puVar4[0x2a] = 0;
  *(undefined1 (*) [16])(puVar4 + 0x28) = auVar27;
  do {
    uVar26 = *(undefined4 *)(puVar4 + 0x28);
    auVar27 = loadVectorLeftIndexed(lVar13,0xe93a0);
    auVar47 = *(undefined1 (*) [16])(puVar4 + 0x2e);
    auVar33 = loadVectorLeftIndexed(lVar13,lVar15);
    auVar27 = auVar27 >> 0x60 & (GPiece<16>)0xffffffff;
    auVar30 = auVar27 | auVar27 << 0x20 | auVar27 << 0x40 | auVar27 << 0x60;
    auVar29 = auVar47 >> 0x60 & (GPiece<16>)0xffffffff;
    *(undefined4 *)((int)puVar4 + 0x13c) = uVar26;
    *(undefined4 *)(puVar4 + 0x27) = uVar26;
    *(undefined4 *)((int)puVar4 + 0x134) = uVar26;
    *(undefined4 *)(puVar4 + 0x26) = uVar26;
    auVar8 = _DAT_000e93e0;
    auVar7 = _DAT_000e93d0;
    auVar6 = _DAT_000e93c0;
    auVar5 = _DAT_000e93b0;
    uVar16 = puVar4[0x2b];
    auVar27 = loadVectorLeftIndexed(8,0x73aa00);
    uVar25 = puVar4[0x2a];
    auVar50 = *(undefined1 (*) [16])(puVar4 + 0x2c);
    auVar36 = auVar30 ^ auVar47;
    auVar30 = auVar30 ^ auVar50;
    auVar31 = loadVectorLeftIndexed(0x5c,0xe93a0);
    auVar28 = vectorAddFloatingPoint(auVar33,auVar27);
    auVar33 = loadVectorLeftIndexed(0x60,0xe93a0);
    auVar27 = auVar31 >> 0x60 & (GPiece<16>)0xffffffff;
    auVar31 = auVar33 >> 0x60 & (GPiece<16>)0xffffffff;
    auVar33 = loadVectorLeftIndexed(100,0xe93a0);
    auVar39 = loadVectorLeftIndexed(0x68,0xe93a0);
    auVar33 = auVar33 >> 0x60 & (GPiece<16>)0xffffffff;
    auVar39 = auVar39 >> 0x60 & (GPiece<16>)0xffffffff;
    auVar2 = auVar30 >> 0x60 & (GPiece<16>)0xffffffff;
    auVar3 = auVar50 >> 0x60 & (GPiece<16>)0xffffffff;
    auVar35 = loadVectorLeftIndexed(0x50,0xe93a0);
    *(undefined1 (*) [16])(puVar4 + 0x1e) =
         auVar27 | auVar27 << 0x20 | auVar27 << 0x40 | auVar27 << 0x60;
    auVar40 = loadVectorLeftIndexed(0x54,0xe93a0);
    auVar43 = loadVectorLeftIndexed(0x58,0xe93a0);
    *(undefined1 (*) [16])(puVar4 + 0x1c) =
         auVar31 | auVar31 << 0x20 | auVar31 << 0x40 | auVar31 << 0x60;
    iVar21 = 0;
    uVar23 = uVar25 + uVar16 + 0x70 & 0xffffffff;
    auVar31 = auVar36 >> 0x60 & (GPiece<16>)0xffffffff;
    *(undefined1 (*) [16])(puVar4 + 0x24) =
         auVar33 | auVar33 << 0x20 | auVar33 << 0x40 | auVar33 << 0x60;
    uVar19 = uVar25 + uVar16 + 0x10 & 0xffffffff;
    *(undefined1 (*) [16])(puVar4 + 0x20) =
         auVar39 | auVar39 << 0x20 | auVar39 << 0x40 | auVar39 << 0x60;
    auVar39 = _DAT_000e9430;
    auVar33 = _DAT_000e9420;
    uVar18 = uVar25 + uVar16 + 0xd0 & 0xffffffff;
    *(undefined4 *)((int)puVar4 + 0x11c) = 0x1c1d1e1f;
    *(undefined4 *)(puVar4 + 0x23) = 0x8090a0b;
    *(undefined4 *)((int)puVar4 + 0x114) = 0x4050607;
    *(undefined4 *)(puVar4 + 0x22) = 0x10203;
    auVar9 = _DAT_000e9450;
    auVar27 = ZEXT416(0);
    auVar32 = auVar27 | auVar27 << 0x20 | auVar27 << 0x40 | auVar27 << 0x60;
    auVar27 = auVar35 >> 0x60 & (GPiece<16>)0xffffffff;
    auVar35 = auVar27 | auVar27 << 0x20 | auVar27 << 0x40 | auVar27 << 0x60;
    auVar36 = vectorPermute(auVar36,auVar32,_DAT_000e9450);
    uVar20 = uVar25 + uVar16 + 0x6c & 0xffffffff;
    *(undefined4 *)((int)puVar4 + 0xdc) = 0x10111213;
    *(undefined4 *)(puVar4 + 0x1b) = 0x10111213;
    *(undefined4 *)((int)puVar4 + 0xd4) = 0x4050607;
    *(undefined4 *)(puVar4 + 0x1a) = 0x10203;
    uVar16 = uVar25 + uVar16 + 0x74 & 0xffffffff;
    auVar27 = auVar40 >> 0x60 & (GPiece<16>)0xffffffff;
    auVar40 = auVar27 | auVar27 << 0x20 | auVar27 << 0x40 | auVar27 << 0x60;
    *(undefined1 (*) [16])(puVar4 + 0x18) =
         auVar31 | auVar31 << 0x20 | auVar31 << 0x40 | auVar31 << 0x60;
    auVar27 = auVar43 >> 0x60 & (GPiece<16>)0xffffffff;
    auVar43 = auVar27 | auVar27 << 0x20 | auVar27 << 0x40 | auVar27 << 0x60;
    auVar48 = vectorPermute(auVar47,auVar32,auVar9);
    *(undefined1 (*) [16])(puVar4 + 0x16) = auVar36;
    auVar27 = loadVectorLeftIndexed(0xc0,0xe93a0);
    auVar31 = loadVectorLeftIndexed(0xc4,0xe93a0);
    auVar47 = loadVectorLeftIndexed(200,0xe93a0);
    auVar36 = loadVectorLeftIndexed(0xcc,0xe93a0);
    auVar49 = vectorPermute(auVar32,auVar30,auVar33);
    auVar51 = vectorPermute(auVar32,auVar50,auVar33);
    auVar27 = auVar27 >> 0x60 & (GPiece<16>)0xffffffff;
    auVar50 = auVar27 | auVar27 << 0x20 | auVar27 << 0x40 | auVar27 << 0x60;
    auVar27 = auVar31 >> 0x60 & (GPiece<16>)0xffffffff;
    auVar30 = auVar27 | auVar27 << 0x20 | auVar27 << 0x40 | auVar27 << 0x60;
    auVar27 = auVar47 >> 0x60 & (GPiece<16>)0xffffffff;
    auVar31 = auVar36 >> 0x60 & (GPiece<16>)0xffffffff;
    lVar17 = lVar22 + 4;
    do {
      auVar34 = loadVectorLeftIndexed(lVar13,uVar23);
      auVar37 = loadVectorRightIndexed(0x10,uVar23);
      auVar38 = *(undefined1 (*) [16])(puVar4 + 0xc);
      *(undefined4 *)(puVar4 + 0xc) = 0;
      *(undefined4 *)((int)puVar4 + 100) = 0;
      auVar36 = (auVar34 | auVar37) >> 0x60 & (GPiece<16>)0xffffffff;
      uVar26 = storeVectorElementWordIndexed
                         (auVar36 | auVar36 << 0x20 | auVar36 << 0x40 | auVar36 << 0x60,0x68,lVar1);
      *(undefined4 *)(puVar4 + 0xd) = uVar26;
      auVar47 = loadVectorLeftIndexed(lVar13,uVar20);
      auVar41 = loadVectorRightIndexed(0x10,uVar20);
      auVar42 = *(undefined1 (*) [16])(puVar4 + 0xe);
      uVar26 = storeVectorElementWordIndexed(*(undefined1 (*) [16])(puVar4 + 0x18),0x70,lVar1);
      *(undefined4 *)(puVar4 + 0xe) = uVar26;
      *(undefined4 *)((int)puVar4 + 0x74) = 0;
      auVar36 = (auVar47 | auVar41) >> 0x60 & (GPiece<16>)0xffffffff;
      auVar47 = vectorPermute(auVar47 | auVar41,auVar42,auVar9);
      uVar26 = storeVectorElementWordIndexed
                         (auVar36 | auVar36 << 0x20 | auVar36 << 0x40 | auVar36 << 0x60,0x78,lVar1);
      *(undefined4 *)(puVar4 + 0xf) = uVar26;
      auVar45 = loadVectorLeftIndexed(lVar13,uVar16);
      auVar41 = loadVectorRightIndexed(0x10,uVar16);
      auVar42 = *(undefined1 (*) [16])(puVar4 + 0x10);
      uVar26 = storeVectorElementWordIndexed
                         (auVar29 | auVar29 << 0x20 | auVar29 << 0x40 | auVar29 << 0x60,0x80,lVar1);
      *(undefined4 *)(puVar4 + 0x10) = uVar26;
      auVar36 = (auVar45 | auVar41) >> 0x60 & (GPiece<16>)0xffffffff;
      *(undefined4 *)((int)puVar4 + 0x84) = 0;
      auVar34 = vectorPermute(auVar32,auVar34 | auVar37,*(undefined1 (*) [16])(puVar4 + 0x1a));
      auVar45 = vectorPermute(auVar45 | auVar41,auVar42,auVar9);
      uVar26 = storeVectorElementWordIndexed
                         (auVar36 | auVar36 << 0x20 | auVar36 << 0x40 | auVar36 << 0x60,0x88,lVar1);
      *(undefined4 *)(puVar4 + 0x11) = uVar26;
      auVar41 = loadVectorLeftIndexed(lVar13,uVar19);
      auVar42 = loadVectorRightIndexed(0x10,uVar19);
      auVar37 = vectorPermute(auVar34,auVar38,*(undefined1 (*) [16])(puVar4 + 0x22));
      auVar34 = *(undefined1 (*) [16])(puVar4 + 0x12);
      auVar47 = vectorPermute(*(undefined1 (*) [16])(puVar4 + 0x16),auVar47,auVar39);
      auVar36 = (auVar41 | auVar42) >> 0x60 & (GPiece<16>)0xffffffff;
      *(undefined4 *)(puVar4 + 0x12) = 0;
      uVar26 = storeVectorElementWordIndexed
                         (auVar2 | auVar2 << 0x20 | auVar2 << 0x40 | auVar2 << 0x60,0x94,lVar1);
      *(undefined4 *)((int)puVar4 + 0x94) = uVar26;
      auVar34 = vectorPermute(auVar41 | auVar42,auVar34,auVar33);
      uVar26 = storeVectorElementWordIndexed
                         (auVar36 | auVar36 << 0x20 | auVar36 << 0x40 | auVar36 << 0x60,0x98,lVar1);
      *(undefined4 *)(puVar4 + 0x13) = uVar26;
      auVar38 = vectorPermute(auVar48,auVar45,auVar39);
      auVar46 = loadVectorLeftIndexed(lVar13,uVar18);
      auVar45 = loadVectorRightIndexed(0x10,uVar18);
      auVar36 = vectorPermute(auVar49,auVar34,auVar39);
      auVar34 = vectorPermute(auVar46 | auVar45,*(undefined1 (*) [16])(puVar4 + 0x14),auVar33);
      auVar41 = vectorSubtractFloatingPoint(auVar37,auVar36);
      auVar47 = vectorSubtractFloatingPoint(auVar36,auVar47);
      auVar36 = vectorPermute(auVar51,auVar34,auVar39);
      auVar44 = vectorSubtractFloatingPoint(auVar37,auVar36);
      auVar36 = vectorSubtractFloatingPoint(auVar36,auVar38);
      *(undefined4 *)(puVar4 + 0x14) = 0;
      uVar26 = storeVectorElementWordIndexed
                         (auVar3 | auVar3 << 0x20 | auVar3 << 0x40 | auVar3 << 0x60,0xa4,lVar1);
      *(undefined4 *)((int)puVar4 + 0xa4) = uVar26;
      auVar34 = vectorPermute(auVar41,auVar41,auVar5);
      auVar38 = vectorPermute(auVar47,auVar47,auVar6);
      auVar42 = vectorPermute(auVar41,auVar41,auVar6);
      auVar47 = vectorPermute(auVar47,auVar47,auVar5);
      auVar34 = vectorMultiplyAddFloatingPoint(auVar34,auVar38,auVar32);
      auVar41 = vectorPermute(auVar44,auVar44,auVar5);
      auVar38 = vectorPermute(auVar36,auVar36,auVar6);
      auVar44 = vectorPermute(auVar44,auVar44,auVar6);
      auVar36 = vectorPermute(auVar36,auVar36,auVar5);
      auVar38 = vectorMultiplyAddFloatingPoint(auVar41,auVar38,auVar32);
      auVar47 = vectorNegativeMultiplySubtractFloatingPoint(auVar42,auVar47,auVar34);
      auVar36 = vectorNegativeMultiplySubtractFloatingPoint(auVar44,auVar36,auVar38);
      auVar34 = vectorAddFloatingPoint(auVar36,auVar47);
      auVar36 = vectorMultiplyAddFloatingPoint(auVar34,auVar34,auVar32);
      auVar47 = vectorPermute(auVar34,auVar34,auVar7);
      auVar38 = vectorPermute(auVar34,auVar34,auVar8);
      auVar47 = vectorMultiplyAddFloatingPoint(auVar47,auVar47,auVar36);
      auVar36 = (auVar46 | auVar45) >> 0x60 & (GPiece<16>)0xffffffff;
      uVar26 = storeVectorElementWordIndexed
                         (auVar36 | auVar36 << 0x20 | auVar36 << 0x40 | auVar36 << 0x60,0xa8,lVar1);
      *(undefined4 *)(puVar4 + 0x15) = uVar26;
      auVar45 = *(undefined1 (*) [16])(puVar4 + 6);
      auVar36 = vectorMultiplyAddFloatingPoint(auVar38,auVar38,auVar47);
      auVar41 = vectorPermute(auVar45,auVar45,auVar8);
      auVar42 = vectorPermute(auVar45,auVar45,auVar7);
      auVar36 = auVar36 >> 0x60 & (GPiece<16>)0xffffffff;
      auVar36 = auVar36 | auVar36 << 0x20 | auVar36 << 0x40 | auVar36 << 0x60;
      auVar47 = vectorReciprocalSquareRootEstimateFloatingPoint(auVar36);
      auVar36 = vectorMultiplyAddFloatingPoint(auVar47,auVar36,auVar32);
      auVar38 = vectorMultiplyAddFloatingPoint(auVar47,auVar35,auVar32);
      auVar36 = vectorNegativeMultiplySubtractFloatingPoint(auVar47,auVar36,auVar40);
      auVar36 = vectorMultiplyAddFloatingPoint(auVar36,auVar38,auVar47);
      auVar38 = vectorCompareEqualToFloatingPoint(auVar36,auVar36);
      auVar36 = vectorConditionalSelect(auVar47,auVar36,auVar38);
      auVar38 = vectorMultiplyAddFloatingPoint(auVar34,auVar36,auVar32);
      auVar36 = auVar28 >> 0x60 & (GPiece<16>)0xffffffff;
      auVar47 = auVar36 | auVar36 << 0x20 | auVar36 << 0x40 | auVar36 << 0x60;
      auVar45 = vectorMultiplyAddFloatingPoint(auVar45,auVar38,auVar32);
      auVar36 = vectorPermute(auVar38,auVar38,auVar7);
      auVar34 = vectorPermute(auVar38,auVar38,auVar8);
      auVar45 = vectorMultiplyAddFloatingPoint(auVar42,auVar36,auVar45);
      auVar36 = ZEXT416(0xffffffff);
      auVar36 = auVar36 | auVar36 << 0x20 | auVar36 << 0x40 | auVar36 << 0x60;
      auVar42 = vectorShiftLeftIntegerWord(auVar36,auVar36);
      auVar36 = vectorMultiplyAddFloatingPoint(auVar41,auVar34,auVar45);
      auVar36 = auVar36 >> 0x60 & (GPiece<16>)0xffffffff;
      auVar36 = vectorSubtractFloatingPoint
                          (auVar36 | auVar36 << 0x20 | auVar36 << 0x40 | auVar36 << 0x60,auVar43);
      auVar34 = vectorMultiplyAddFloatingPoint
                          (auVar36,*(undefined1 (*) [16])(puVar4 + 0x1e),auVar43);
      auVar36 = ZEXT416(8);
      auVar41 = vectorCompareGreaterThanFloatingPoint(auVar32,auVar34);
      auVar34 = vectorLogicalAndWithComplement(auVar34,auVar41);
      auVar41 = vectorCompareGreaterThanFloatingPoint(auVar34,auVar40);
      auVar34 = vectorConditionalSelect(auVar34,auVar40,auVar41);
      auVar41 = vectorMultiplyAddFloatingPoint
                          (auVar34,*(undefined1 (*) [16])(puVar4 + 0x1c),auVar42);
      auVar45 = *(undefined1 (*) [16])(puVar4 + 0x26);
      auVar34 = vectorPermute(auVar28,*(undefined1 (*) [16])(puVar4 + 0x28),auVar33);
      auVar28 = vectorConvertToSignedFixedPointWordSaturate(auVar41,0);
      auVar41.piece<0,4>() = auVar28.piece<0,4>() + auVar50.piece<0,4>();
      auVar41.piece<8,8>() = auVar28.piece<8,8>();
      auVar41.piece<4,4>() = auVar28.piece<4,4>() + auVar50.piece<4,4>();
      auVar42.piece<0,8>() = auVar41.piece<0,8>();
      auVar42.piece<12,4>() = auVar28.piece<12,4>();
      auVar42.piece<8,4>() = auVar28.piece<8,4>() + auVar50.piece<8,4>();
      auVar28.piece<0,12>() = auVar42.piece<0,12>();
      auVar28.piece<12,4>() = auVar42.piece<12,4>() + auVar50.piece<12,4>();
      auVar41 = vectorCompareGreaterThanSignedWord(auVar28,auVar30);
      auVar28 = vectorConditionalSelect(auVar28,auVar30,auVar41);
      auVar42 = vectorShiftLeftIntegerWord
                          (auVar28,auVar27 | auVar27 << 0x20 | auVar27 << 0x40 | auVar27 << 0x60);
      auVar41 = vectorShiftLeftIntegerWord
                          (auVar28,auVar31 | auVar31 << 0x20 | auVar31 << 0x40 | auVar31 << 0x60);
      auVar28 = vectorShiftLeftIntegerWord
                          (auVar28,auVar36 | auVar36 << 0x20 | auVar36 << 0x40 | auVar36 << 0x60);
      auVar28 = (auVar42 | auVar41 | auVar28 | auVar30) >> 0x60 & (GPiece<16>)0xffffffff;
      uVar26 = storeVectorElementWordIndexed
                         (auVar28 | auVar28 << 0x20 | auVar28 << 0x40 | auVar28 << 0x60,0,lVar24);
      *(undefined4 *)((uint)lVar24 & 0xfffffffc) = uVar26;
      auVar28 = loadVectorLeftIndexed(8,lVar15);
      auVar41 = loadVectorLeftIndexed(0x18,0x73aa00);
      auVar36 = vectorPermute(auVar28,*(undefined1 (*) [16])(puVar4 + 10),auVar33);
      auVar28 = auVar28 >> 0x60 & (GPiece<16>)0xffffffff;
      uVar26 = storeVectorElementWordIndexed(auVar47,0x50,lVar1);
      *(undefined4 *)(puVar4 + 10) = uVar26;
      uVar26 = storeVectorElementWordIndexed(auVar45,0x54,lVar1);
      *(undefined4 *)((int)puVar4 + 0x54) = uVar26;
      auVar36 = vectorPermute(auVar34,auVar36,auVar39);
      uVar26 = storeVectorElementWordIndexed
                         (auVar28 | auVar28 << 0x20 | auVar28 << 0x40 | auVar28 << 0x60,0x58,lVar1);
      *(undefined4 *)(puVar4 + 0xb) = uVar26;
      auVar28 = vectorSubtractFloatingPoint(*(undefined1 (*) [16])(puVar4 + 8),auVar36);
      auVar34 = vectorSubtractFloatingPoint(auVar28,auVar37);
      auVar28 = vectorMultiplyAddFloatingPoint(auVar34,auVar34,auVar32);
      auVar37 = vectorPermute(auVar34,auVar34,auVar7);
      auVar36 = vectorPermute(auVar34,auVar34,auVar8);
      auVar28 = vectorMultiplyAddFloatingPoint(auVar37,auVar37,auVar28);
      lVar24 = lVar24 + 4;
      auVar28 = vectorMultiplyAddFloatingPoint(auVar36,auVar36,auVar28);
      auVar28 = auVar28 >> 0x60 & (GPiece<16>)0xffffffff;
      auVar28 = auVar28 | auVar28 << 0x20 | auVar28 << 0x40 | auVar28 << 0x60;
      auVar36 = vectorMultiplyAddFloatingPoint
                          (auVar38,*(undefined1 (*) [16])(puVar4 + 0x24),auVar32);
      auVar38 = vectorReciprocalSquareRootEstimateFloatingPoint(auVar28);
      auVar37 = vectorPermute(auVar36,auVar36,auVar8);
      auVar28 = vectorMultiplyAddFloatingPoint(auVar38,auVar28,auVar32);
      auVar45 = vectorMultiplyAddFloatingPoint(auVar38,auVar35,auVar32);
      auVar42 = vectorPermute(auVar36,auVar36,auVar7);
      auVar28 = vectorNegativeMultiplySubtractFloatingPoint(auVar38,auVar28,auVar40);
      auVar28 = vectorMultiplyAddFloatingPoint(auVar28,auVar45,auVar38);
      auVar45 = vectorCompareEqualToFloatingPoint(auVar28,auVar28);
      auVar28 = vectorConditionalSelect(auVar38,auVar28,auVar45);
      auVar34 = vectorMultiplyAddFloatingPoint(auVar34,auVar28,auVar32);
      auVar28 = vectorMultiplyAddFloatingPoint(auVar34,auVar36,auVar32);
      auVar45 = vectorPermute(auVar34,auVar34,auVar7);
      auVar38 = vectorPermute(auVar34,auVar34,auVar8);
      auVar28 = vectorMultiplyAddFloatingPoint(auVar45,auVar42,auVar28);
      auVar28 = vectorMultiplyAddFloatingPoint(auVar38,auVar37,auVar28);
      auVar28 = auVar28 >> 0x60 & (GPiece<16>)0xffffffff;
      auVar28 = auVar28 | auVar28 << 0x20 | auVar28 << 0x40 | auVar28 << 0x60;
      vectorCompareGreaterThanOrEqualToFloatingPoint(auVar28,auVar32);
      if (!(bool)(in_cr6 >> 1 & 1)) {
        auVar37 = ZEXT416(0xffffffff);
        auVar37 = auVar37 | auVar37 << 0x20 | auVar37 << 0x40 | auVar37 << 0x60;
        auVar37 = vectorShiftLeftIntegerWord(auVar37,auVar37);
        auVar28 = vectorMultiplyAddFloatingPoint
                            (auVar28,*(undefined1 (*) [16])(puVar4 + 0x20),auVar37);
        auVar28 = vectorMultiplyAddFloatingPoint(auVar36,auVar28,auVar32);
        auVar34 = vectorSubtractFloatingPoint(auVar34,auVar28);
      }
      auVar28 = ZEXT416(0xffffffff);
      auVar37 = auVar28 | auVar28 << 0x20 | auVar28 << 0x40 | auVar28 << 0x60;
      auVar28 = auVar34 >> 0x60 & (GPiece<16>)0xffffffff;
      auVar36 = auVar34 >> 0x40 & (GPiece<16>)0xffffffff;
      auVar34 = vectorShiftLeftIntegerWord(auVar37,auVar37);
      auVar34 = vectorMultiplyAddFloatingPoint
                          (auVar28 | auVar28 << 0x20 | auVar28 << 0x40 | auVar28 << 0x60,auVar41,
                           auVar34);
      auVar28 = ZEXT416(0xffffffff);
      auVar28 = auVar28 | auVar28 << 0x20 | auVar28 << 0x40 | auVar28 << 0x60;
      iVar21 = iVar21 + 1;
      auVar37 = vectorShiftLeftIntegerWord(auVar28,auVar28);
      uVar23 = uVar23 + 4;
      uVar20 = uVar20 + 4;
      uVar16 = uVar16 + 4;
      uVar19 = uVar19 + 4;
      uVar18 = uVar18 + 4;
      auVar28 = vectorMultiplyAddFloatingPoint(auVar34,auVar35,auVar35);
      auVar28 = auVar28 >> 0x60 & (GPiece<16>)0xffffffff;
      uVar26 = storeVectorElementWordIndexed
                         (auVar28 | auVar28 << 0x20 | auVar28 << 0x40 | auVar28 << 0x60,0,lVar22);
      *(undefined4 *)((uint)lVar22 & 0xfffffffc) = uVar26;
      auVar28 = loadVectorLeftIndexed(0x18,0x73aa00);
      lVar22 = lVar22 + 8;
      auVar28 = vectorMultiplyAddFloatingPoint
                          (auVar36 | auVar36 << 0x20 | auVar36 << 0x40 | auVar36 << 0x60,auVar28,
                           auVar37);
      auVar28 = vectorMultiplyAddFloatingPoint(auVar28,auVar35,auVar35);
      auVar28 = auVar28 >> 0x60 & (GPiece<16>)0xffffffff;
      uVar26 = storeVectorElementWordIndexed
                         (auVar28 | auVar28 << 0x20 | auVar28 << 0x40 | auVar28 << 0x60,0,lVar17);
      *(undefined4 *)((uint)lVar17 & 0xfffffffc) = uVar26;
      auVar28 = loadVectorLeftIndexed(0x10,0x73aa00);
      auVar28 = vectorAddFloatingPoint(auVar47,auVar28);
      lVar17 = lVar17 + 8;
    } while (iVar21 < 0x11);
    auVar27 = vectorAddFloatingPoint
                        (*(undefined1 (*) [16])(puVar4 + 0x26),*(undefined1 (*) [16])(puVar4 + 0x2c)
                        );
    uVar23 = puVar4[0x30];
    puVar4[0x2a] = puVar4[0x2a] + 0x60;
    puVar4[0x30] = uVar23 + 1;
    *(undefined1 (*) [16])(puVar4 + 0x28) = auVar27;
  } while ((int)(uVar23 + 1) < 0x11);
  return;
}


// 0x00e9c08 (0x320 bytes)
/* one step of the wave equation for tiles[tileIdx]: buf[bufIdx] holds the previous heights and
   gets the new ones, then the edges are copied into the neighbours' border arrays */
void WaterTile_StepWave(float (*stage)[24], int tileIdx, int bufIdx, WaterTile *tiles)
{
    WaterTile *tile = &tiles[tileIdx];
    WaterTileBuf *b = &tile->buf[bufIdx];
    float minHeight = WaterTileConsts.minHeight;
    int r, c, i;

    for (r = 0; r < 16; r++, stage++) {
        for (c = 0; c < 16; c++) {
            float *s = &stage[0][c];
            float h = (s[3] + s[4] + s[5] + s[STAGE_W + 3] + s[STAGE_W + 5]
                       + s[2 * STAGE_W + 3] + s[2 * STAGE_W + 4] + s[2 * STAGE_W + 5]) * WAVE_SPREAD
                      - b->height[r][c];
            if (minHeight - fabsf(h) < 0.0f) h -= h * WAVE_DAMP;
            b->height[r][c] = h;
        }
    }

    if (tile->tileLinkTop != NO_LINK) {
        WaterTileBuf *n = &tiles[tile->tileLinkTop].buf[bufIdx];
        memcpy(n->heightBottom, b->height[0], sizeof(n->heightBottom));
        memcpy(n->heightBottom2, b->height[1], sizeof(n->heightBottom2));
    }
    if (tile->tileLinkLeft != NO_LINK) {
        WaterTileBuf *n = &tiles[tile->tileLinkLeft].buf[bufIdx];
        for (i = 0; i < 16; i++) {
            n->heightRight[i] = b->height[i][0];
            n->heightRight2[i] = b->height[i][1];
        }
    }
    if (tile->tileLinkBottom != NO_LINK)
        memcpy(tiles[tile->tileLinkBottom].buf[bufIdx].heightTop, b->height[15], sizeof(b->height[15]));
    if (tile->tileLinkRight != NO_LINK) {
        WaterTileBuf *n = &tiles[tile->tileLinkRight].buf[bufIdx];
        for (i = 0; i < 16; i++) n->heightLeft[i] = b->height[i][15];
    }
    if (tile->tileLinkCorners[0] != NO_LINK) {         /* up-left */
        WaterTileBuf *n = &tiles[tile->tileLinkCorners[0]].buf[bufIdx];
        n->heightCorner[3] = b->height[0][0];
        n->heightCorner[4] = b->height[0][1];
        n->heightCorner[5] = b->height[1][0];
    }
    if (tile->tileLinkCorners[1] != NO_LINK)           /* up-right */
        tiles[tile->tileLinkCorners[1]].buf[bufIdx].heightCorner[2] = b->height[0][15];
    if (tile->tileLinkCorners[2] != NO_LINK)           /* down-left */
        tiles[tile->tileLinkCorners[2]].buf[bufIdx].heightCorner[1] = b->height[15][0];
    if (tile->tileLinkCorners[3] != NO_LINK)           /* down-right */
        tiles[tile->tileLinkCorners[3]].buf[bufIdx].heightCorner[0] = b->height[15][15];
}


// 0x00e9f28 (0x4 bytes)
void STUB_000e9f28(...)
{
}

#define SHEET_BRIGHTEN 1.38f            /* 0xe9f30 */
#define SHEET_PHASE    0.0015339808f    /* 0xe9f44: 2pi / 4096 */

/* one channel of the sheet colour brightened, saturating at 255 (done 3-wide in the vector unit) */
static inline u32 Brighten(u32 c)
{
    float f = (float)(c & 0xff) * SHEET_BRIGHTEN;
    u32 v = f <= 0.0f ? 0 : f >= 4294967295.0f ? 0xffffffff : (u32)f;   /* vctuxs */
    return v > 0xff ? 0xff : v;
}


// 0x00e9f48 (0x2a0 bytes)
/* vertices of a water sheet: height blended between two poses, both UV layers wobbled by a wave
   whose phase comes from the vertex position */
void BuildVerts(WaterSheet *sheet, WaterSheetVert *out)
{
    u32 c = sheet->color;
    u32 color = Brighten(c) << 24 | Brighten(c >> 8) << 16 | Brighten(c >> 16) << 8 | 0xff;

    for (int i = 0; i < sheet->vertexCount; i++, out++) {
        WaterSheetSrcVert *src = &sheet->srcVerts[i];
        u32 seed = *(u32 *)&src->x + *(u32 *)&src->y;
        u32 idx = (((seed >> 11) & 0x1fe0) + sheet->frameCounter & 0xff) << 4;
        float phase = (float)idx * SHEET_PHASE - 3.1415927f;
        float t = sheet->zBlend;

        out->pos.x = src->x;
        out->pos.y = src->y;
        out->pos.z = src->z0 * t + src->z1 * (1.0f - t);
        float s = sinf(phase) * sheet->waveAmp;
        float k = cosf(phase) * sheet->waveAmp;
        Vec2 *uv = &sheet->srcUVs[i];
        out->uv0.x = s + (uv->x + sheet->offsetU0);
        out->color = color;
        out->uv0.y = k + (uv->y + sheet->offsetV0);
        out->uv1.x = (uv->x + sheet->offsetU1) - s;
        out->uv1.y = (uv->y + sheet->offsetV1) - k;
    }
}


// 0x00ea1e8 (0x4 bytes)
void STUB_000ea1e8(...)
{
}


// 0x00ea1f8 (0x180 bytes)
/* environment-map UVs: reflect the direction to the camera off each normal */
void NormalsToEnvUV(int count, Vec3 *positions, Vec3 *normals, Vec2 *outUV)
{
    for (int i = 0; i < count; i++, positions++, normals++, outUV++) {
        float view[4], refl[4];
        view[0] = GameCamera.posX - positions->x;
        view[1] = GameCamera.posY - positions->y;
        view[2] = GameCamera.posZ - positions->z;
        view[3] = *(float *)GameCamera.field8_0x14c;
        float len = sqrtf(view[2] * view[2] + (view[0] * view[0] + view[1] * view[1]));
        float s = ENV_SCALE / len;
        for (int k = 0; k < 3; k++) view[k] = len == 0.0f ? 0.0f : view[k] * s;   /* guarded normalize */
        FastVecReflect(refl, view, (float *)normals);    /* 0x500608, name a guess (reflects off the normal) */
        outUV->x = refl[0] * ENV_UV;
        outUV->y = refl[1] * ENV_UV;
    }
}


