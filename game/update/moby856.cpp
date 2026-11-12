// game/update/moby856.cpp -- reconstructed from NPEA00385 EBOOT
// STATUS: NOT STARTED (raw Ghidra output)
// 2 functions, 0x48f5fc-0x490174
#include "game/update/moby856.h"
#include "game/camera.h"
#include "game/hero.h"
#include "game/mobyfunc.h"
#include "game/mobyutil.h"
#include "game/partupd.h"
#include "idol/fastfunc.h"

// 0x048f5fc (0x14 bytes)
void M856_0048f5fc(void)

{
  DAT_008c7bd4 = 0x10000;
  return;
}


// 0x048f650 (0xb24 bytes)
// inlined: FastAtan2 @0x48fd58, FastAtan2 @0x48ff38
/* Moby 856 */

void UpdateMoby_856(MobyInstance *moby)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  undefined4 uVar6;
  ulonglong *puVar7;
  int iVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  MobyInstance *pMVar13;
  longlong lVar14;
  undefined4 *puVar15;
  ulonglong uVar16;
  int iVar18;
  longlong lVar17;
  float *pfVar20;
  longlong lVar19;
  ulonglong uVar21;
  ulonglong unaff_r23;
  ulonglong unaff_r24;
  ulonglong unaff_r25;
  ulonglong unaff_r26;
  ulonglong unaff_r27;
  ulonglong unaff_r28;
  ulonglong unaff_r29;
  longlong lVar22;
  ulonglong unaff_r30;
  ulonglong unaff_r31;
  ulonglong in_LR;
  longlong lVar23;
  double dVar24;
  double dVar25;
  double dVar26;
  ulonglong in_f30;
  ulonglong in_f31;
  double dVar27;
  double dVar28;
  GPiece<16> auVar29;
  GPiece<16> auVar30;
  GPiece<16> auVar31;
  GPiece<16> auVar32;
  GPiece<16> auVar33;
  GPiece<16> auVar34;
  GPiece<16> auVar35;
  GPiece<16> auVar36;
  GPiece<16> auVar38;
  GPiece<16> auVar39;
  undefined4 in_vr31_32_0;
  undefined4 in_vr31_32_1;
  undefined4 in_vr31_32_2;
  undefined4 in_vr31_32_3;
  GPiece<16> auVar41;
  GPiece<16> auVar37;
  GPiece<16> auVar40;
  
  uVar16 = ZEXT48(&stack0x00000000);
  lVar17 = uVar16 - 0x1b0;
  puVar7 = (ulonglong *)lVar17;
  *puVar7 = uVar16;
  puVar7[0x38] = in_LR;
  puVar7[0x34] = in_f30;
  puVar7[0x35] = in_f31;
  lVar14 = uVar16 - 0x70;
  puVar15 = (undefined4 *)lVar14;
  puVar15[3] = in_vr31_32_3;
  puVar15[2] = in_vr31_32_2;
  puVar15[1] = in_vr31_32_1;
  *puVar15 = in_vr31_32_0;
  puVar7[0x32] = unaff_r30;
  puVar15 = (undefined4 *)moby->pVar;
  puVar7[0x33] = unaff_r31;
  puVar7[0x31] = unaff_r29;
  lVar22 = 1;
  *(undefined4 *)(puVar7 + 0x1b) = 0;
  *(undefined4 *)((int)puVar7 + 0xdc) = 0;
  puVar7[0x2f] = unaff_r27;
  *(undefined4 *)(puVar7 + 0x1c) = 0;
  *(undefined4 *)((int)puVar7 + 0xe4) = 0;
  *(undefined4 *)(puVar7 + 0x1d) = 0;
  iVar18 = DAT_010e03d0;
  *(undefined4 *)(puVar7 + 0x1b) = *puVar15;
  puVar7[0x30] = unaff_r28;
  puVar7[0x2e] = unaff_r26;
  puVar7[0x2d] = unaff_r25;
  puVar7[0x2c] = unaff_r24;
  puVar7[0x2b] = unaff_r23;
  if (iVar18 != 0) {
    auVar41 = ZEXT416(0);
    auVar35 = auVar41 | auVar41 << 0x20 | auVar41 << 0x40 | auVar41 << 0x60;
    iVar18 = 0;
    auVar41 = loadVectorLeftIndexed(lVar14,0x48f610);
    dVar27 = 0.3330000042915344;
    auVar41 = auVar41 >> 0x60 & (GPiece<16>)0xffffffff;
    auVar41 = auVar41 | auVar41 << 0x20 | auVar41 << 0x40 | auVar41 << 0x60;
    do {
      auVar29 = vectorConvertFromSignedFixedPointWord(auVar35,0);
      auVar30 = ZEXT416(0xffffffff);
      auVar30 = auVar30 | auVar30 << 0x20 | auVar30 << 0x40 | auVar30 << 0x60;
      auVar30 = vectorShiftLeftIntegerWord(auVar30,auVar30);
      uVar21 = ZEXT48(Splines[puVar15[2]]);
      auVar29 = vectorMultiplyAddFloatingPoint(auVar29,auVar41,auVar30);
      auVar30 = loadVectorLeftIndexed(0x20,uVar21);
      auVar31 = loadVectorLeftIndexed(0x10,uVar21);
      auVar32 = loadVectorLeftIndexed(0x24,uVar21);
      auVar30 = vectorSubtractFloatingPoint(auVar30,auVar31);
      fVar1 = Splines[puVar15[2]]->points[1].w;
      auVar33 = loadVectorLeftIndexed(0x14,uVar21);
      auVar32 = vectorSubtractFloatingPoint(auVar32,auVar33);
      auVar33 = loadVectorLeftIndexed(0x28,uVar21);
      auVar34 = loadVectorLeftIndexed(0x18,uVar21);
      auVar30 = vectorMultiplyAddFloatingPoint(auVar29,auVar30,auVar31);
      auVar31 = vectorSubtractFloatingPoint(auVar33,auVar34);
      auVar30 = auVar30 >> 0x60 & (GPiece<16>)0xffffffff;
      uVar6 = storeVectorElementWordIndexed
                        (auVar30 | auVar30 << 0x20 | auVar30 << 0x40 | auVar30 << 0x60,0x70,lVar17);
      *(undefined4 *)(puVar7 + 0xe) = uVar6;
      pMVar13 = g_heroMobyPtr;
      auVar30 = loadVectorLeftIndexed(0x14,uVar21);
      auVar30 = vectorMultiplyAddFloatingPoint(auVar29,auVar32,auVar30);
      auVar30 = auVar30 >> 0x60 & (GPiece<16>)0xffffffff;
      uVar6 = storeVectorElementWordIndexed
                        (auVar30 | auVar30 << 0x20 | auVar30 << 0x40 | auVar30 << 0x60,0x74,lVar17);
      *(undefined4 *)((int)puVar7 + 0x74) = uVar6;
      auVar30 = loadVectorLeftIndexed(0x18,uVar21);
      auVar30 = vectorMultiplyAddFloatingPoint(auVar29,auVar31,auVar30);
      auVar30 = auVar30 >> 0x60 & (GPiece<16>)0xffffffff;
      uVar6 = storeVectorElementWordIndexed
                        (auVar30 | auVar30 << 0x20 | auVar30 << 0x40 | auVar30 << 0x60,0x78,lVar17);
      *(undefined4 *)(puVar7 + 0xf) = uVar6;
      *(float *)((int)puVar7 + 0x7c) = fVar1;
      SpawnPart_41((float)dVar27,puVar7 + 0xe,pMVar13,2,0x800000ff,uVar21,0x7f,2,0xff);
      iVar18 = iVar18 + 1;
      auVar29.piece<0,4>() = auVar35.piece<0,4>() + 1;
      auVar29.piece<8,8>() = auVar35.piece<8,8>();
      auVar29.piece<4,4>() = auVar35.piece<4,4>() + 1;
      auVar30.piece<0,8>() = auVar29.piece<0,8>();
      auVar30.piece<12,4>() = auVar35.piece<12,4>();
      auVar30.piece<8,4>() = auVar35.piece<8,4>() + 1;
      auVar35.piece<0,12>() = auVar30.piece<0,12>();
      auVar35.piece<12,4>() = auVar30.piece<12,4>() + 1;
    } while (iVar18 < 0xc);
    lVar22 = 2;
    *(undefined4 *)((int)puVar7 + 0xdc) = puVar15[2];
  }
  if (DAT_010e03d4 != 0) {
    auVar41 = ZEXT416(0);
    auVar31 = auVar41 | auVar41 << 0x20 | auVar41 << 0x40 | auVar41 << 0x60;
    iVar18 = 0;
    auVar41 = loadVectorLeftIndexed(lVar14,0x48f610);
    dVar27 = 0.3330000042915344;
    auVar41 = auVar41 >> 0x60 & (GPiece<16>)0xffffffff;
    auVar41 = auVar41 | auVar41 << 0x20 | auVar41 << 0x40 | auVar41 << 0x60;
    do {
      auVar30 = vectorConvertFromSignedFixedPointWord(auVar31,0);
      auVar35 = ZEXT416(0xffffffff);
      auVar35 = auVar35 | auVar35 << 0x20 | auVar35 << 0x40 | auVar35 << 0x60;
      auVar35 = vectorShiftLeftIntegerWord(auVar35,auVar35);
      uVar21 = ZEXT48(Splines[puVar15[3]]);
      auVar30 = vectorMultiplyAddFloatingPoint(auVar30,auVar41,auVar35);
      auVar35 = loadVectorLeftIndexed(0x20,uVar21);
      auVar29 = loadVectorLeftIndexed(0x10,uVar21);
      auVar35 = vectorSubtractFloatingPoint(auVar35,auVar29);
      auVar32 = loadVectorLeftIndexed(0x24,uVar21);
      auVar33 = loadVectorLeftIndexed(0x14,uVar21);
      fVar1 = Splines[puVar15[3]]->points[1].w;
      auVar32 = vectorSubtractFloatingPoint(auVar32,auVar33);
      auVar33 = loadVectorLeftIndexed(0x28,uVar21);
      auVar35 = vectorMultiplyAddFloatingPoint(auVar30,auVar35,auVar29);
      auVar29 = loadVectorLeftIndexed(0x18,uVar21);
      auVar29 = vectorSubtractFloatingPoint(auVar33,auVar29);
      auVar35 = auVar35 >> 0x60 & (GPiece<16>)0xffffffff;
      uVar6 = storeVectorElementWordIndexed
                        (auVar35 | auVar35 << 0x20 | auVar35 << 0x40 | auVar35 << 0x60,0x80,lVar17);
      *(undefined4 *)(puVar7 + 0x10) = uVar6;
      pMVar13 = g_heroMobyPtr;
      auVar35 = loadVectorLeftIndexed(0x14,uVar21);
      auVar35 = vectorMultiplyAddFloatingPoint(auVar30,auVar32,auVar35);
      auVar35 = auVar35 >> 0x60 & (GPiece<16>)0xffffffff;
      uVar6 = storeVectorElementWordIndexed
                        (auVar35 | auVar35 << 0x20 | auVar35 << 0x40 | auVar35 << 0x60,0x84,lVar17);
      *(undefined4 *)((int)puVar7 + 0x84) = uVar6;
      auVar35 = loadVectorLeftIndexed(0x18,uVar21);
      auVar35 = vectorMultiplyAddFloatingPoint(auVar30,auVar29,auVar35);
      auVar35 = auVar35 >> 0x60 & (GPiece<16>)0xffffffff;
      uVar6 = storeVectorElementWordIndexed
                        (auVar35 | auVar35 << 0x20 | auVar35 << 0x40 | auVar35 << 0x60,0x88,lVar17);
      *(undefined4 *)(puVar7 + 0x11) = uVar6;
      *(float *)((int)puVar7 + 0x8c) = fVar1;
      SpawnPart_41((float)dVar27,puVar7 + 0x10,pMVar13,2,0x800000ff,uVar21,0x7f,2,0xff);
      iVar18 = iVar18 + 1;
      auVar32.piece<0,4>() = auVar31.piece<0,4>() + 1;
      auVar32.piece<8,8>() = auVar31.piece<8,8>();
      auVar32.piece<4,4>() = auVar31.piece<4,4>() + 1;
      auVar33.piece<0,8>() = auVar32.piece<0,8>();
      auVar33.piece<12,4>() = auVar31.piece<12,4>();
      auVar33.piece<8,4>() = auVar31.piece<8,4>() + 1;
      auVar31.piece<0,12>() = auVar33.piece<0,12>();
      auVar31.piece<12,4>() = auVar33.piece<12,4>() + 1;
    } while (iVar18 < 0xc);
    lVar19 = lVar22 << 2;
    lVar22 = lVar22 + 1;
    *(undefined4 *)(((uint)lVar19 | (uint)puVar7) + 0xd8) = puVar15[3];
  }
  if (DAT_010e03d8 != 0) {
    auVar41 = ZEXT416(0);
    auVar34 = auVar41 | auVar41 << 0x20 | auVar41 << 0x40 | auVar41 << 0x60;
    iVar18 = 0;
    auVar41 = loadVectorLeftIndexed(lVar14,0x48f610);
    dVar27 = 0.3330000042915344;
    auVar41 = auVar41 >> 0x60 & (GPiece<16>)0xffffffff;
    auVar41 = auVar41 | auVar41 << 0x20 | auVar41 << 0x40 | auVar41 << 0x60;
    do {
      auVar30 = vectorConvertFromSignedFixedPointWord(auVar34,0);
      auVar35 = ZEXT416(0xffffffff);
      auVar35 = auVar35 | auVar35 << 0x20 | auVar35 << 0x40 | auVar35 << 0x60;
      auVar35 = vectorShiftLeftIntegerWord(auVar35,auVar35);
      uVar21 = ZEXT48(Splines[puVar15[4]]);
      auVar30 = vectorMultiplyAddFloatingPoint(auVar30,auVar41,auVar35);
      auVar35 = loadVectorLeftIndexed(0x20,uVar21);
      auVar29 = loadVectorLeftIndexed(0x10,uVar21);
      auVar35 = vectorSubtractFloatingPoint(auVar35,auVar29);
      auVar31 = loadVectorLeftIndexed(0x24,uVar21);
      auVar32 = loadVectorLeftIndexed(0x14,uVar21);
      fVar1 = Splines[puVar15[4]]->points[1].w;
      auVar31 = vectorSubtractFloatingPoint(auVar31,auVar32);
      auVar32 = loadVectorLeftIndexed(0x28,uVar21);
      auVar35 = vectorMultiplyAddFloatingPoint(auVar30,auVar35,auVar29);
      auVar29 = loadVectorLeftIndexed(0x18,uVar21);
      auVar29 = vectorSubtractFloatingPoint(auVar32,auVar29);
      auVar35 = auVar35 >> 0x60 & (GPiece<16>)0xffffffff;
      uVar6 = storeVectorElementWordIndexed
                        (auVar35 | auVar35 << 0x20 | auVar35 << 0x40 | auVar35 << 0x60,0x90,lVar17);
      *(undefined4 *)(puVar7 + 0x12) = uVar6;
      pMVar13 = g_heroMobyPtr;
      auVar35 = loadVectorLeftIndexed(0x14,uVar21);
      auVar35 = vectorMultiplyAddFloatingPoint(auVar30,auVar31,auVar35);
      auVar35 = auVar35 >> 0x60 & (GPiece<16>)0xffffffff;
      uVar6 = storeVectorElementWordIndexed
                        (auVar35 | auVar35 << 0x20 | auVar35 << 0x40 | auVar35 << 0x60,0x94,lVar17);
      *(undefined4 *)((int)puVar7 + 0x94) = uVar6;
      auVar35 = loadVectorLeftIndexed(0x18,uVar21);
      auVar35 = vectorMultiplyAddFloatingPoint(auVar30,auVar29,auVar35);
      auVar35 = auVar35 >> 0x60 & (GPiece<16>)0xffffffff;
      uVar6 = storeVectorElementWordIndexed
                        (auVar35 | auVar35 << 0x20 | auVar35 << 0x40 | auVar35 << 0x60,0x98,lVar17);
      *(undefined4 *)(puVar7 + 0x13) = uVar6;
      *(float *)((int)puVar7 + 0x9c) = fVar1;
      SpawnPart_41((float)dVar27,puVar7 + 0x12,pMVar13,2,0x800000ff,uVar21,0x7f,2,0xff);
      iVar18 = iVar18 + 1;
      auVar36.piece<0,4>() = auVar34.piece<0,4>() + 1;
      auVar36.piece<8,8>() = auVar34.piece<8,8>();
      auVar36.piece<4,4>() = auVar34.piece<4,4>() + 1;
      auVar37.piece<0,8>() = auVar36.piece<0,8>();
      auVar37.piece<12,4>() = auVar34.piece<12,4>();
      auVar37.piece<8,4>() = auVar34.piece<8,4>() + 1;
      auVar34.piece<0,12>() = auVar37.piece<0,12>();
      auVar34.piece<12,4>() = auVar37.piece<12,4>() + 1;
    } while (iVar18 < 0xc);
    lVar19 = lVar22 << 2;
    lVar22 = lVar22 + 1;
    *(undefined4 *)((int)puVar7 + (int)lVar19 + 0xd8) = puVar15[4];
  }
  if (DAT_010e03dc != 0) {
    auVar41 = ZEXT416(0);
    auVar38 = auVar41 | auVar41 << 0x20 | auVar41 << 0x40 | auVar41 << 0x60;
    iVar18 = 0;
    auVar41 = loadVectorLeftIndexed(lVar14,0x48f610);
    dVar27 = 0.3330000042915344;
    auVar41 = auVar41 >> 0x60 & (GPiece<16>)0xffffffff;
    auVar41 = auVar41 | auVar41 << 0x20 | auVar41 << 0x40 | auVar41 << 0x60;
    do {
      auVar30 = vectorConvertFromSignedFixedPointWord(auVar38,0);
      auVar35 = ZEXT416(0xffffffff);
      auVar35 = auVar35 | auVar35 << 0x20 | auVar35 << 0x40 | auVar35 << 0x60;
      auVar35 = vectorShiftLeftIntegerWord(auVar35,auVar35);
      uVar21 = ZEXT48(Splines[puVar15[5]]);
      auVar30 = vectorMultiplyAddFloatingPoint(auVar30,auVar41,auVar35);
      auVar35 = loadVectorLeftIndexed(0x20,uVar21);
      auVar29 = loadVectorLeftIndexed(0x10,uVar21);
      auVar35 = vectorSubtractFloatingPoint(auVar35,auVar29);
      auVar31 = loadVectorLeftIndexed(0x24,uVar21);
      auVar32 = loadVectorLeftIndexed(0x14,uVar21);
      fVar1 = Splines[puVar15[5]]->points[1].w;
      auVar31 = vectorSubtractFloatingPoint(auVar31,auVar32);
      auVar32 = loadVectorLeftIndexed(0x28,uVar21);
      auVar35 = vectorMultiplyAddFloatingPoint(auVar30,auVar35,auVar29);
      auVar29 = loadVectorLeftIndexed(0x18,uVar21);
      auVar29 = vectorSubtractFloatingPoint(auVar32,auVar29);
      auVar35 = auVar35 >> 0x60 & (GPiece<16>)0xffffffff;
      uVar6 = storeVectorElementWordIndexed
                        (auVar35 | auVar35 << 0x20 | auVar35 << 0x40 | auVar35 << 0x60,0xa0,lVar17);
      *(undefined4 *)(puVar7 + 0x14) = uVar6;
      pMVar13 = g_heroMobyPtr;
      auVar35 = loadVectorLeftIndexed(0x14,uVar21);
      auVar35 = vectorMultiplyAddFloatingPoint(auVar30,auVar31,auVar35);
      auVar35 = auVar35 >> 0x60 & (GPiece<16>)0xffffffff;
      uVar6 = storeVectorElementWordIndexed
                        (auVar35 | auVar35 << 0x20 | auVar35 << 0x40 | auVar35 << 0x60,0xa4,lVar17);
      *(undefined4 *)((int)puVar7 + 0xa4) = uVar6;
      auVar35 = loadVectorLeftIndexed(0x18,uVar21);
      auVar35 = vectorMultiplyAddFloatingPoint(auVar30,auVar29,auVar35);
      auVar35 = auVar35 >> 0x60 & (GPiece<16>)0xffffffff;
      uVar6 = storeVectorElementWordIndexed
                        (auVar35 | auVar35 << 0x20 | auVar35 << 0x40 | auVar35 << 0x60,0xa8,lVar17);
      *(undefined4 *)(puVar7 + 0x15) = uVar6;
      *(float *)((int)puVar7 + 0xac) = fVar1;
      SpawnPart_41((float)dVar27,puVar7 + 0x14,pMVar13,2,0x800000ff,uVar21,0x7f,2,0xff);
      iVar18 = iVar18 + 1;
      auVar39.piece<0,4>() = auVar38.piece<0,4>() + 1;
      auVar39.piece<8,8>() = auVar38.piece<8,8>();
      auVar39.piece<4,4>() = auVar38.piece<4,4>() + 1;
      auVar40.piece<0,8>() = auVar39.piece<0,8>();
      auVar40.piece<12,4>() = auVar38.piece<12,4>();
      auVar40.piece<8,4>() = auVar38.piece<8,4>() + 1;
      auVar38.piece<0,12>() = auVar40.piece<0,12>();
      auVar38.piece<12,4>() = auVar40.piece<12,4>() + 1;
    } while (iVar18 < 0xc);
    lVar14 = lVar22 << 2;
    lVar22 = lVar22 + 1;
    *(undefined4 *)((int)puVar7 + (int)lVar14 + 0xd8) = puVar15[5];
  }
  if (DAT_008c7bf8 != 0) {
    MB_SplineMarkCrossings(uVar16 - 0xd8,lVar22,puVar15[1]);
  }
  if (moby->state == 0) {
    moby->state = '\x01';
  }
  else if ((((moby->state < 2) && (g_heroState == CROUCHING)) &&
           (fVar1 = (moby->pos).y - g_heroPosition.y, fVar2 = (moby->pos).x - g_heroPosition.x,
           fVar5 = (moby->pos).z - g_heroPosition.z,
           1.5 < SQRT(fVar5 * fVar5 + fVar2 * fVar2 + fVar1 * fVar1))) &&
          (iVar18 = MB_SplineFindRouteNode
                              (0.25,(int)(uVar16 - 0xd8),lVar22,(longlong)(int)puVar15[1],
                               uVar16 - 0xd8,&moby->pos,&g_heroPosition,puVar7 + 0x16), iVar18 != 0)
          ) {
    fVar1 = *(float *)(puVar7 + 0x16) - (moby->pos).x;
    fVar2 = *(float *)((int)puVar7 + 0xb4) - (moby->pos).y;
    fVar3 = ABS(fVar1);
    fVar5 = ABS(fVar2);
    *(float *)((int)puVar7 + 0xcc) = fVar1;
    *(float *)(puVar7 + 0x1a) = fVar2;
    *(float *)((int)puVar7 + 0xd4) = fVar3 - fVar5;
    dVar27 = 0.0;
    uVar21 = (ulonglong)(*(uint *)((int)puVar7 + 0xcc) >> 0x1c) & 8 |
             (ulonglong)(*(uint *)((int)puVar7 + 0xd4) >> 0x1e) & 2 |
             (ulonglong)(*(uint *)(puVar7 + 0x1a) >> 0x1d) & 4;
    fVar1 = ABS(*(float *)((int)puVar7 + 0xcc));
    if (*(float *)((int)puVar7 + 0xd4) - 0.0 < 0.0) {
      fVar1 = fVar5;
    }
    fVar5 = *(float *)(&g_atanQuadrantTable + (int)(uVar21 << 2));
    fVar2 = *(float *)(((uint)(uVar21 << 2) | 0x735900) + 4);
    fVar4 = ABS(*(float *)(puVar7 + 0x1a));
    if (*(float *)((int)puVar7 + 0xd4) - 0.0 < 0.0) {
      fVar4 = fVar3;
    }
    dVar28 = 0.7853981852531433;
    dVar24 = dVar27;
    if (0.0 < fVar1) {
      lVar14 = uVar16 - 0x1a0;
      lVar22 = uVar16 - 0xa4;
      lVar19 = uVar16 - 0x94;
      lVar23 = 2;
      fVar1 = (fVar4 - fVar1) / (fVar4 + fVar1);
      fVar3 = fVar1 * fVar1;
      *(float *)(puVar7 + 0x23) = fVar1;
      *(float *)(puVar7 + 0x22) = fVar1;
      *(float *)((int)puVar7 + 0x114) = fVar1;
      *(float *)((int)puVar7 + 0x10c) = fVar1;
      fVar1 = fVar3 * fVar3;
      *(float *)(puVar7 + 0x22) = *(float *)(puVar7 + 0x22) * fVar3;
      *(float *)((int)puVar7 + 0x114) = *(float *)((int)puVar7 + 0x114) * fVar1;
      *(float *)(puVar7 + 0x23) = *(float *)(puVar7 + 0x23) * fVar1 * fVar3;
      do {
        *(float *)((int)lVar14 + 0x10c) = *(float *)((int)lVar14 + 0xfc) * fVar1 * fVar1;
        iVar18 = (int)lVar22;
        lVar14 = lVar14 + 8;
        lVar22 = lVar22 + 8;
        *(float *)((int)lVar19 + 4) = *(float *)(iVar18 + 4) * fVar1 * fVar1;
        lVar19 = lVar19 + 8;
        lVar23 = lVar23 + -1;
      } while (lVar23 != 0);
      lVar23 = 4;
      lVar19 = uVar16 - 0xa4;
      pfVar20 = (float *)&DAT_007358e0;
      lVar14 = lVar17;
      lVar22 = lVar19;
      do {
        fVar1 = *pfVar20;
        fVar3 = pfVar20[1];
        pfVar20 = pfVar20 + 2;
        *(float *)((int)lVar14 + 0x10c) = *(float *)((int)lVar14 + 0x10c) * fVar1;
        lVar14 = lVar14 + 8;
        *(float *)((int)lVar22 + 4) = *(float *)((int)lVar22 + 4) * fVar3;
        lVar22 = lVar22 + 8;
        lVar23 = lVar23 + -1;
      } while (lVar23 != 0);
      lVar22 = 2;
      lVar14 = lVar17;
      do {
        iVar18 = (int)lVar14;
        lVar14 = lVar14 + 0x10;
        iVar8 = (int)lVar19;
        lVar19 = lVar19 + 0x10;
        dVar24 = (double)((float)(dVar24 + (double)*(float *)(iVar18 + 0x10c)) +
                          *(float *)(iVar8 + 4) + *(float *)(iVar8 + 8) + *(float *)(iVar8 + 0xc));
        lVar22 = lVar22 + -1;
      } while (lVar22 != 0);
      dVar24 = (double)((float)(dVar24 + 0.7853981852531433) * fVar5 + fVar2);
    }
    OrganicDeltAng
              ((float)dVar24,g_FrameTimeSq * 25.132742,g_FrameTimeSq * 25.132742,
               g_FrameTime * 25.132742,&(moby->rotation).z,0x48f610,(float *)(puVar15 + 6)
              );
    fVar1 = *(float *)(puVar7 + 0x16) - (moby->pos).x;
    fVar2 = *(float *)((int)puVar7 + 0xb4) - (moby->pos).y;
    dVar25 = ABS((double)fVar1);
    dVar26 = ABS((double)fVar2);
    *(float *)(puVar7 + 0x18) = fVar1;
    *(float *)((int)puVar7 + 0xc4) = fVar2;
    fVar1 = (moby->rotation).z;
    *(float *)(puVar7 + 0x19) = (float)(dVar25 - dVar26);
    uVar21 = (ulonglong)(*(uint *)(puVar7 + 0x18) >> 0x1c) & 8 |
             (ulonglong)(*(uint *)(puVar7 + 0x19) >> 0x1e) & 2 |
             (ulonglong)(*(uint *)((int)puVar7 + 0xc4) >> 0x1d) & 4;
    dVar24 = ABS((double)*(float *)(puVar7 + 0x18));
    if ((double)*(float *)(puVar7 + 0x19) - dVar27 < 0.0) {
      dVar24 = dVar26;
    }
    fVar2 = *(float *)(&g_atanQuadrantTable + (int)(uVar21 << 2));
    dVar26 = ABS((double)*(float *)((int)puVar7 + 0xc4));
    if ((double)*(float *)(puVar7 + 0x19) - dVar27 < 0.0) {
      dVar26 = dVar25;
    }
    fVar5 = *(float *)(((uint)(uVar21 << 2) | 0x735900) + 4);
    if (dVar27 < dVar24) {
      lVar14 = uVar16 - 0x1a0;
      lVar22 = uVar16 - 0xc4;
      lVar19 = uVar16 - 0xb4;
      lVar23 = 2;
      fVar3 = (float)(dVar26 - dVar24) / (float)(dVar26 + dVar24);
      fVar4 = fVar3 * fVar3;
      *(float *)(puVar7 + 0x1f) = fVar3;
      *(float *)(puVar7 + 0x1e) = fVar3;
      *(float *)((int)puVar7 + 0xf4) = fVar3;
      *(float *)((int)puVar7 + 0xec) = fVar3;
      fVar3 = fVar4 * fVar4;
      *(float *)(puVar7 + 0x1e) = *(float *)(puVar7 + 0x1e) * fVar4;
      *(float *)((int)puVar7 + 0xf4) = *(float *)((int)puVar7 + 0xf4) * fVar3;
      *(float *)(puVar7 + 0x1f) = *(float *)(puVar7 + 0x1f) * fVar3 * fVar4;
      do {
        *(float *)((int)lVar14 + 0xec) = *(float *)((int)lVar14 + 0xdc) * fVar3 * fVar3;
        iVar18 = (int)lVar22;
        lVar14 = lVar14 + 8;
        lVar22 = lVar22 + 8;
        *(float *)((int)lVar19 + 4) = *(float *)(iVar18 + 4) * fVar3 * fVar3;
        lVar19 = lVar19 + 8;
        lVar23 = lVar23 + -1;
      } while (lVar23 != 0);
      lVar23 = 4;
      lVar19 = uVar16 - 0xc4;
      pfVar20 = (float *)&DAT_007358e0;
      lVar14 = lVar17;
      lVar22 = lVar19;
      do {
        fVar3 = *pfVar20;
        fVar4 = pfVar20[1];
        pfVar20 = pfVar20 + 2;
        *(float *)((int)lVar14 + 0xec) = *(float *)((int)lVar14 + 0xec) * fVar3;
        lVar14 = lVar14 + 8;
        *(float *)((int)lVar22 + 4) = *(float *)((int)lVar22 + 4) * fVar4;
        lVar22 = lVar22 + 8;
        lVar23 = lVar23 + -1;
      } while (lVar23 != 0);
      lVar14 = 2;
      do {
        iVar18 = (int)lVar17;
        iVar8 = (int)lVar19;
        lVar17 = lVar17 + 0x10;
        lVar19 = lVar19 + 0x10;
        dVar27 = (double)((float)(dVar27 + (double)*(float *)(iVar18 + 0xec)) +
                          *(float *)(iVar8 + 4) + *(float *)(iVar8 + 8) + *(float *)(iVar8 + 0xc));
        lVar14 = lVar14 + -1;
      } while (lVar14 != 0);
      dVar27 = (double)((float)(dVar27 + dVar28) * fVar2 + fVar5);
    }
    dVar27 = (double)FastSubRots(fVar1,(float)dVar27);
    if (dVar27 < 2.356194496154785) {
      fVar1 = (moby->rotation).z;
      fVar2 = fVar1 + 1.5707963;
      fVar5 = 3.1415925 - fVar1;
      if (fVar1 - (3.1415925 - fVar1) < 0.0) {
        fVar5 = fVar1;
      }
      fVar3 = 3.1415925 - fVar2;
      if (fVar2 - (3.1415925 - fVar2) < 0.0) {
        fVar3 = fVar2;
      }
      fVar4 = -3.1415925 - fVar1;
      if ((-3.1415925 - fVar1) - fVar5 < 0.0) {
        fVar4 = fVar5;
      }
      fVar1 = -3.1415925 - fVar2;
      if ((-3.1415925 - fVar2) - fVar3 < 0.0) {
        fVar1 = fVar3;
      }
      fVar5 = fVar4 * fVar4;
      fVar3 = fVar1 * fVar1;
      fVar11 = fVar5 * fVar5 * fVar4;
      fVar2 = g_FrameTime * 4.0;
      fVar9 = fVar3 * fVar3 * fVar1;
      fVar12 = fVar5 * fVar11;
      fVar10 = fVar3 * fVar9;
      (moby->pos).y =
           fVar2 * (fVar5 * fVar12 * 2.601887e-06 +
                   fVar12 * -0.0001980741 +
                   fVar11 * 0.0083330255 + fVar5 * fVar4 * -0.16666657 + fVar4) + (moby->pos).y;
      (moby->pos).x =
           fVar2 * (fVar3 * fVar10 * 2.601887e-06 +
                   fVar10 * -0.0001980741 +
                   fVar9 * 0.0083330255 + fVar3 * fVar1 * -0.16666657 + fVar1) + (moby->pos).x;
    }
  }
  return;
}


