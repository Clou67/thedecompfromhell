// game/mesh.cpp -- reconstructed from NPEA00385 EBOOT
// STATUS: NOT STARTED (raw Ghidra output)
// 19 functions, 0xe9114-0xea378
#include <math.h>
#include <string.h>
#include "game/mesh.h"
#include "game/camera.h"
#include "game/hero.h"
#include "game/water.h"
#include "idol/fastfunc.h"

// 0x00e9114 (0x14 bytes)
void SECTION_HEADER_MESH(void)

{
  DAT_00726aac = 0x10000;
  return;
}


// 0x00e9130 (0x4 bytes)
void STUB_000e9130(...)

{
  return;
}


// 0x00e9134 (0x4 bytes)
void STUB_000e9134(...)

{
  return;
}


// 0x00e9138 (0x4 bytes)
void STUB_000e9138(...)

{
  return;
}


// 0x00e913c (0x4 bytes)
void STUB_000e913c(...)

{
  return;
}


// 0x00e9140 (0x8 bytes)
undefined8 STUB_000e9140(...)

{
  return 0;
}


// 0x00e9148 (0x4 bytes)
void STUB_000e9148(...)

{
  return;
}


// 0x00e914c (0x4 bytes)
void STUB_000e914c(...)

{
  return;
}


// 0x00e9150 (0x8 bytes)
undefined8 STUB_000e9150(...)

{
  return 0;
}


// 0x00e9158 (0x4 bytes)
void STUB_000e9158(...)

{
  return;
}


// 0x00e915c (0x4c bytes)
void AddUVOffsets(float *param_1,float *param_2,int param_3,float *param_4)

{
  float fVar1;
  float fVar2;
  float *pfVar3;
  
  fVar1 = *param_4;
  fVar2 = param_4[1];
  if (0 < param_3) {
    do {
      param_3 = param_3 + -1;
      *param_1 = *param_2 + fVar1;
      pfVar3 = param_2 + 1;
      param_2 = param_2 + 2;
      param_1[1] = *pfVar3 + fVar2;
      param_1 = param_1 + 2;
    } while (0 < param_3);
  }
  return;
}


// 0x00e91a8 (0x138 bytes)
void StageTileBuf(WaterTile *param_1,void *param_2)

{
  undefined4 uVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  undefined4 *puVar7;
  float *pfVar8;
  float *pfVar9;
  float *pfVar10;
  uint uVar11;
  void *__src;
  longlong lVar12;
  
  memcpy(param_1->tileLinkCorners,(void *)((int)param_2 + 0x400),0x40);
  uVar11 = 0;
  pfVar8 = (float *)param_1->tileLinkCorners;
  __src = param_2;
  do {
    uVar11 = uVar11 + 1;
    pfVar8 = pfVar8 + 0x18;
    memcpy(pfVar8,__src,0x40);
    __src = (void *)((int)__src + 0x40);
  } while (uVar11 < 0x10);
  memcpy(param_1->buf[1].height[1] + 10,(void *)((int)param_2 + 0x480),0x40);
  memcpy(param_1->buf[1].height[3] + 2,(void *)((int)param_2 + 0x500),0x40);
  uVar1 = *(undefined4 *)((int)param_2 + 0x580);
  fVar2 = *(float *)((int)param_2 + 0x584);
  fVar3 = *(float *)((int)param_2 + 0x588);
  fVar4 = *(float *)((int)param_2 + 0x58c);
  pfVar10 = (float *)&param_1->tileLinkTop;
  fVar5 = *(float *)((int)param_2 + 0x590);
  pfVar9 = param_1->buf[0].height[0] + 2;
  pfVar8 = param_1->buf[0].height[0] + 3;
  fVar6 = *(float *)((int)param_2 + 0x594);
  lVar12 = 0x10;
  do {
    pfVar10[0x18] = *(float *)((int)param_2 + 0x440);
    pfVar10 = pfVar10 + 0x18;
    pfVar9[0x18] = (float)*(undefined4 *)((int)param_2 + 0x4c0);
    puVar7 = (undefined4 *)((int)param_2 + 0x540);
    pfVar9 = pfVar9 + 0x18;
    param_2 = (void *)((int)param_2 + 4);
    pfVar8[0x18] = (float)*puVar7;
    pfVar8 = pfVar8 + 0x18;
    lVar12 = lVar12 + -1;
  } while (lVar12 != 0);
  param_1->tileLinkTop = (char)((uint)uVar1 >> 0x18);
  param_1->tileLinkLeft = (char)((uint)uVar1 >> 0x10);
  param_1->tileLinkBottom = (char)((uint)uVar1 >> 8);
  param_1->tileLinkRight = (char)uVar1;
  param_1->buf[0].height[0][2] = fVar2;
  param_1->buf[1].height[1][9] = fVar3;
  param_1->buf[1].height[2][10] = fVar4;
  param_1->buf[1].height[2][0xb] = fVar5;
  param_1->buf[1].height[4][2] = fVar6;
  return;
}


// 0x00e92e8 (0xb4 bytes)
void WaterTileBufLerp(float t,float *dst,float *bufA,float *bufB)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  uint uVar8;
  float *pfVar9;
  float *pfVar10;
  float *pfVar11;
  longlong lVar12;
  
  uVar8 = 0;
  fVar7 = 1.0 - t;
  do {
    lVar12 = 4;
    pfVar10 = bufB;
    pfVar11 = bufA;
    pfVar9 = dst;
    do {
      bufA = pfVar11 + 4;
      fVar1 = pfVar10[1];
      bufB = pfVar10 + 4;
      fVar2 = pfVar10[2];
      fVar3 = pfVar10[3];
      fVar4 = pfVar11[1];
      fVar5 = pfVar11[2];
      dst = pfVar9 + 4;
      fVar6 = pfVar11[3];
      *pfVar9 = *pfVar11 * fVar7 + *pfVar10 * t;
      pfVar9[1] = fVar4 * fVar7 + fVar1 * t;
      pfVar9[2] = fVar5 * fVar7 + fVar2 * t;
      pfVar9[3] = fVar6 * fVar7 + fVar3 * t;
      lVar12 = lVar12 + -1;
      pfVar10 = bufB;
      pfVar11 = bufA;
      pfVar9 = dst;
    } while (lVar12 != 0);
    uVar8 = uVar8 + 1;
  } while (uVar8 < 0x17);
  return;
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
void WaterTile_StepWave(float *stagedGrid,int tileIdx,int bufIdx,WaterTile *tile)

{
  byte bVar1;
  float fVar2;
  undefined4 *puVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  float fVar10;
  float *pfVar11;
  int iVar12;
  uint uVar13;
  undefined4 *puVar14;
  float *pfVar15;
  int iVar16;
  int iVar17;
  int iVar18;
  int iVar19;
  int iVar20;
  undefined4 *__src;
  longlong lVar21;
  
  fVar10 = WaterTileConsts.minHeight;
  iVar12 = tileIdx * 0x11a0;
  iVar20 = bufIdx * 0x5c0;
  iVar4 = iVar20 + iVar12;
  pfVar11 = (float *)((int)tile + iVar20 + iVar12 + 0x50);
  uVar13 = 0;
  __src = (undefined4 *)((int)tile + iVar4 + 0x50);
  do {
    iVar16 = 0;
    lVar21 = 0x10;
    pfVar15 = pfVar11;
    do {
      iVar17 = iVar16 + 0xc;
      iVar18 = iVar16 + 0x10;
      iVar19 = iVar16 + 0x14;
      iVar5 = iVar16 + 0x6c;
      iVar6 = iVar16 + 0xcc;
      pfVar11 = pfVar15 + 1;
      iVar7 = iVar16 + 0x74;
      iVar9 = iVar16 + 0xd0;
      iVar8 = iVar16 + 0xd4;
      iVar16 = iVar16 + 4;
      fVar2 = (*(float *)(iVar17 + (int)stagedGrid) + *(float *)(iVar18 + (int)stagedGrid) +
               *(float *)(iVar19 + (int)stagedGrid) + *(float *)((int)stagedGrid + iVar5) +
               *(float *)((int)stagedGrid + iVar7) + *(float *)((int)stagedGrid + iVar6) +
               *(float *)((int)stagedGrid + iVar9) + *(float *)((int)stagedGrid + iVar8)) * 0.25 -
              *pfVar15;
      if (fVar10 - ABS(fVar2) < 0.0) {
        fVar2 = -(fVar2 * 0.0625 - fVar2);
      }
      *pfVar15 = fVar2;
      lVar21 = lVar21 + -1;
      pfVar15 = pfVar11;
    } while (lVar21 != 0);
    uVar13 = uVar13 + 1;
    stagedGrid = stagedGrid + 0x18;
  } while (uVar13 < 0x10);
  bVar1 = *(byte *)((int)tile + iVar12 + 0xc);
  if (bVar1 != 0xff) {
    iVar16 = iVar20 + (uint)bVar1 * 0x11a0;
    memcpy((void *)((int)tile + iVar16 + 0x4d0),__src,0x40);
    memcpy((void *)((int)tile + iVar16 + 0x550),(void *)((int)tile + iVar4 + 0x90),0x40);
  }
  bVar1 = *(byte *)((int)tile + iVar12 + 0xd);
  if (bVar1 != 0xff) {
    iVar16 = (int)tile + iVar20 + (uint)bVar1 * 0x11a0;
    lVar21 = 8;
    puVar14 = __src;
    do {
      *(undefined4 *)(iVar16 + 0x510) = *puVar14;
      *(undefined4 *)(iVar16 + 0x590) = puVar14[1];
      *(undefined4 *)(iVar16 + 0x514) = puVar14[0x10];
      puVar3 = puVar14 + 0x11;
      puVar14 = puVar14 + 0x20;
      *(undefined4 *)(iVar16 + 0x594) = *puVar3;
      iVar16 = iVar16 + 8;
      lVar21 = lVar21 + -1;
    } while (lVar21 != 0);
  }
  bVar1 = *(byte *)((int)tile + iVar12 + 0xe);
  if (bVar1 != 0xff) {
    memcpy((void *)((int)tile + iVar20 + (uint)bVar1 * 0x11a0 + 0x450),
                 (void *)((int)tile + iVar4 + 0x410),0x40);
  }
  bVar1 = *(byte *)((int)tile + iVar12 + 0xf);
  if (bVar1 != 0xff) {
    lVar21 = 4;
    iVar16 = (int)tile + iVar20 + (uint)bVar1 * 0x11a0;
    do {
      *(undefined4 *)(iVar16 + 0x490) = __src[0xf];
      *(undefined4 *)(iVar16 + 0x494) = __src[0x1f];
      *(undefined4 *)(iVar16 + 0x498) = __src[0x2f];
      puVar14 = __src + 0x3f;
      __src = __src + 0x40;
      *(undefined4 *)(iVar16 + 0x49c) = *puVar14;
      iVar16 = iVar16 + 0x10;
      lVar21 = lVar21 + -1;
    } while (lVar21 != 0);
  }
  bVar1 = *(byte *)((int)tile + iVar12 + 0x10);
  if (bVar1 != 0xff) {
    iVar16 = iVar20 + (uint)bVar1 * 0x11a0;
    *(undefined4 *)((int)tile + iVar16 + 0x5dc) = *(undefined4 *)((int)tile + iVar4 + 0x50);
    *(undefined4 *)((int)tile + iVar16 + 0x5e0) = *(undefined4 *)((int)tile + iVar4 + 0x54);
    *(undefined4 *)((int)tile + iVar16 + 0x5e4) = *(undefined4 *)((int)tile + iVar4 + 0x90);
  }
  bVar1 = *(byte *)((int)tile + iVar12 + 0x11);
  if (bVar1 != 0xff) {
    *(undefined4 *)((int)tile + iVar20 + (uint)bVar1 * 0x11a0 + 0x5d8) =
         *(undefined4 *)((int)tile + iVar4 + 0x8c);
  }
  bVar1 = *(byte *)((int)tile + iVar12 + 0x12);
  if (bVar1 != 0xff) {
    *(undefined4 *)((int)tile + iVar20 + (uint)bVar1 * 0x11a0 + 0x5d4) =
         *(undefined4 *)((int)tile + iVar4 + 0x410);
  }
  bVar1 = *(byte *)((int)tile + iVar12 + 0x13);
  if (bVar1 != 0xff) {
    *(undefined4 *)((int)tile + iVar20 + (uint)bVar1 * 0x11a0 + 0x5d0) =
         *(undefined4 *)((int)tile + iVar4 + 0x44c);
  }
  return;
}


// 0x00e9f28 (0x4 bytes)
void STUB_000e9f28(...)

{
  return;
}


// 0x00e9f48 (0x2a0 bytes)
void BuildVerts(WaterSheet *sheet,WaterSheetVert *outVerts)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  undefined4 uVar9;
  undefined4 *puVar10;
  undefined8 uVar11;
  uint *puVar12;
  int iVar13;
  int iVar14;
  int iVar15;
  longlong lVar16;
  longlong lVar17;
  double extraout_f1;
  double dVar18;
  double dVar19;
  double dVar20;
  double dVar21;
  double dVar22;
  double dVar23;
  GPiece<16> auVar24;
  GPiece<16> auVar25;
  GPiece<16> auVar26;
  GPiece<16> auVar27;
  GPiece<16> auVar28;
  GPiece<16> auVar29;
  GPiece<16> auVar30;
  GPiece<16> auVar31;
  GPiece<16> auVar32;
  undefined4 in_vr31_32_0;
  undefined4 in_vr31_32_1;
  undefined4 in_vr31_32_2;
  undefined4 in_vr31_32_3;
  GPiece<16> auVar33;
  
  lVar16 = (longlong)(int)outVerts;
  puVar10 = (undefined4 *)(ZEXT48(&stack0x00000000) - 0x70);
  puVar10[3] = in_vr31_32_3;
  puVar10[2] = in_vr31_32_2;
  puVar10[1] = in_vr31_32_1;
  *puVar10 = in_vr31_32_0;
  auVar29 = ZEXT416(0xfffffff8);
  auVar25 = ZEXT416(0xfffffff0);
  auVar24 = ZEXT416(0xffffffff);
  auVar31 = auVar24 | auVar24 << 0x20 | auVar24 << 0x40 | auVar24 << 0x60;
  auVar24 = ZEXT416(0xffffffff);
  auVar32 = auVar24 | auVar24 << 0x20 | auVar24 << 0x40 | auVar24 << 0x60;
  auVar26 = loadVectorLeftIndexed(0x30,(longlong)(int)sheet);
  auVar27 = loadVectorLeftIndexed(ZEXT48(&stack0x00000000) - 0x70,0xe9f2c);
  auVar24 = vectorRotateLeftIntegerWord
                      (auVar26,auVar29 | auVar29 << 0x20 | auVar29 << 0x40 | auVar29 << 0x60);
  auVar29 = auVar27 >> 0x60 & (GPiece<16>)0xffffffff;
  auVar33 = auVar29 | auVar29 << 0x20 | auVar29 << 0x40 | auVar29 << 0x60;
  auVar27 = vectorRotateLeftIntegerWord
                      (auVar26,auVar25 | auVar25 << 0x20 | auVar25 << 0x40 | auVar25 << 0x60);
  auVar29 = ZEXT416(0xffffffff);
  auVar28 = auVar29 | auVar29 << 0x20 | auVar29 << 0x40 | auVar29 << 0x60;
  auVar29 = loadVectorLeftIndexed(4,0xe9f2c);
  auVar26 = vectorLogicalAnd(auVar26,auVar33);
  auVar25 = vectorLogicalAnd(auVar24,auVar33);
  auVar24 = vectorLogicalAnd(auVar27,auVar33);
  auVar29 = auVar29 >> 0x60 & (GPiece<16>)0xffffffff;
  auVar30 = auVar29 | auVar29 << 0x20 | auVar29 << 0x40 | auVar29 << 0x60;
  auVar27 = vectorConvertFromUnsignedFixedPointWord(auVar26,0);
  auVar29 = vectorConvertFromUnsignedFixedPointWord(auVar25,0);
  auVar26 = vectorShiftLeftIntegerWord(auVar28,auVar28);
  auVar25 = vectorConvertFromUnsignedFixedPointWord(auVar24,0);
  auVar24 = vectorShiftLeftIntegerWord(auVar31,auVar31);
  auVar31 = vectorShiftLeftIntegerWord(auVar32,auVar32);
  iVar13 = 0;
  auVar28 = vectorMultiplyAddFloatingPoint(auVar27,auVar30,auVar26);
  auVar27 = vectorMultiplyAddFloatingPoint(auVar29,auVar30,auVar24);
  auVar26 = vectorMultiplyAddFloatingPoint(auVar25,auVar30,auVar31);
  auVar29 = ZEXT416(8);
  auVar25 = loadVectorLeftIndexed(8,0xe9f2c);
  auVar24 = loadVectorLeftIndexed(0xc,0xe9f2c);
  auVar25 = auVar25 >> 0x60 & (GPiece<16>)0xffffffff;
  auVar24 = auVar24 >> 0x60 & (GPiece<16>)0xffffffff;
  auVar28 = vectorConvertToUnsignedFixedPointWordSaturate(auVar28,0);
  auVar27 = vectorConvertToUnsignedFixedPointWordSaturate(auVar27,0);
  auVar26 = vectorConvertToUnsignedFixedPointWordSaturate(auVar26,0);
  auVar30 = vectorCompareGreaterThanUnsignedWord(auVar28,auVar33);
  auVar28 = vectorConditionalSelect(auVar28,auVar33,auVar30);
  auVar31 = vectorCompareGreaterThanUnsignedWord(auVar26,auVar33);
  auVar30 = vectorCompareGreaterThanUnsignedWord(auVar27,auVar33);
  auVar26 = vectorConditionalSelect(auVar26,auVar33,auVar31);
  auVar27 = vectorConditionalSelect(auVar27,auVar33,auVar30);
  auVar28 = vectorShiftLeftIntegerWord
                      (auVar28,auVar25 | auVar25 << 0x20 | auVar25 << 0x40 | auVar25 << 0x60);
  auVar25 = vectorShiftLeftIntegerWord
                      (auVar26,auVar29 | auVar29 << 0x20 | auVar29 << 0x40 | auVar29 << 0x60);
  auVar29 = vectorShiftLeftIntegerWord
                      (auVar27,auVar24 | auVar24 << 0x20 | auVar24 << 0x40 | auVar24 << 0x60);
  if (0 < sheet->vertexCount) {
    auVar29 = (auVar28 | auVar29 | auVar25 | auVar33) >> 0x60 & (GPiece<16>)0xffffffff;
    auVar29 = auVar29 | auVar29 << 0x20 | auVar29 << 0x40 | auVar29 << 0x60;
    iVar14 = 0;
    lVar17 = lVar16 + 0x1c;
    iVar15 = 0;
    dVar21 = 3.1415927410125732;
    dVar22 = 1.0;
    dVar23 = 0.0015339808305725455;
    do {
      iVar5 = *(int *)sheet->unknown0;
      puVar12 = (uint *)(iVar5 + iVar14);
      uVar6 = sheet->frameCounter;
      uVar7 = *puVar12;
      uVar8 = puVar12[1];
      puVar10 = (undefined4 *)lVar16;
      *puVar10 = *(undefined4 *)(iVar5 + iVar14);
      puVar10[1] = puVar12[1];
      dVar20 = (double)(float)((double)(((ulonglong)uVar6 +
                                         (((ulonglong)uVar7 + (ulonglong)uVar8 << 0x20) >> 0x2b &
                                         0x1fe0) & 0xff) << 4) * dVar23 - dVar21);
      puVar10[2] = (float)((double)(float)puVar12[2] * (double)*(float *)(sheet->unknown54 + 8) +
                          (double)((float)puVar12[3] *
                                  (float)(dVar22 - (double)*(float *)(sheet->unknown54 + 8))));
      uVar11 = _FSin(dVar20,iVar5,0);
      dVar18 = (double)*(float *)sheet->unknown18;
      dVar19 = extraout_f1;
      dVar20 = (double)_FSin(dVar20,uVar11,1);
      fVar4 = *(float *)(*(int *)(sheet->unknown0 + 4) + iVar15);
      fVar1 = *(float *)sheet->unknown18;
      iVar13 = iVar13 + 1;
      fVar2 = *(float *)(*(int *)(sheet->unknown0 + 4) + iVar15 + 4);
      iVar14 = iVar14 + 0x10;
      iVar15 = iVar15 + 8;
      puVar10[3] = (float)(dVar19 * dVar18 + (double)(fVar4 + sheet->offsetU0));
      fVar3 = sheet->offsetV0;
      uVar9 = storeVectorElementWordIndexed(auVar29,0,lVar17);
      *(undefined4 *)((uint)lVar17 & 0xfffffffc) = uVar9;
      iVar5 = sheet->vertexCount;
      lVar17 = lVar17 + 0x20;
      puVar10[4] = (float)(dVar20 * (double)fVar1 + (double)(fVar2 + fVar3));
      puVar10[5] = -(float)(dVar19 * dVar18 - (double)(fVar4 + sheet->offsetU1));
      puVar10[6] = -(float)(dVar20 * (double)fVar1 - (double)(fVar2 + sheet->offsetV1));
      lVar16 = lVar16 + 0x20;
    } while (iVar13 < iVar5);
  }
  return;
}


// 0x00ea1e8 (0x4 bytes)
void STUB_000ea1e8(...)

{
  return;
}


// 0x00ea1f8 (0x180 bytes)
void NormalsToEnvUV(int count,void *param_2,Vec3 *normals,Vec2 *outUV)

{
  int iVar1;
  longlong lVar2;
  double dVar3;
  GPiece<16> local_70;
  float local_60;
  float local_5c;
  
  lVar2 = (longlong)(int)normals;
  iVar1 = 0;
  if (0 < count) {
    dVar3 = 0.5;
    do {
      FastVecNormalize(&local_60,local_70,lVar2);
      iVar1 = iVar1 + 1;
      lVar2 = lVar2 + 0xc;
      outUV->x = (float)((double)local_60 * dVar3);
      outUV->y = (float)((double)local_5c * dVar3);
      outUV = outUV + 1;
    } while (iVar1 < count);
  }
  return;
}


