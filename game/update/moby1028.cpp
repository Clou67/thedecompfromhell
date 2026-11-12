// game/update/moby1028.cpp -- reconstructed from NPEA00385 EBOOT
// STATUS: NOT STARTED (raw Ghidra output)
// 3 functions, 0x18f410-0x1907cc
#include "game/update/moby1028.h"
#include "game/camera.h"
#include "game/debug.h"
#include "game/freeze.h"
#include "game/help.h"
#include "game/hero.h"
#include "game/memcard.h"
#include "game/mobyfunc.h"
#include "game/mobyproc.h"
#include "game/mobyutil.h"
#include "game/sound.h"
#include "game/space.h"
#include "game/update/camera5.h"
#include "idol/fastfunc.h"

// 0x018f410 (0x14 bytes)
void M1028_0018f410(void)

{
  DAT_0073fc74 = 0x10000;
  return;
}


// 0x018f448 (0x964 bytes)
void M1028_0018f448(int param_1)

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
  int iVar13;
  undefined4 uVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  int iVar20;
  int iVar21;
  int iVar22;
  int iVar23;
  byte in_cr6;
  double dVar24;
  double dVar25;
  double dVar26;
  double dVar27;
  double dVar28;
  double dVar29;
  double dVar30;
  double dVar31;
  double dVar32;
  double dVar33;
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
  
  iVar23 = *(int *)(param_1 + 0x78);
  auVar45 = ZEXT416(0);
  auVar41 = auVar45 | auVar45 << 0x20 | auVar45 << 0x40 | auVar45 << 0x60;
  iVar22 = 0;
  dVar33 = 0.0;
  auVar45 = loadVectorLeftIndexed(4,0x18f428);
  auVar44 = loadVectorLeftIndexed(8,0x18f428);
  iVar20 = 0;
  auVar40 = loadVectorLeftIndexed(0xc,0x18f428);
  auVar43 = loadVectorLeftIndexed(0x10,0x18f428);
  auVar45 = auVar45 >> 0x60 & (GPiece<16>)0xffffffff;
  auVar46 = auVar45 | auVar45 << 0x20 | auVar45 << 0x40 | auVar45 << 0x60;
  auVar45 = auVar44 >> 0x60 & (GPiece<16>)0xffffffff;
  auVar44 = auVar45 | auVar45 << 0x20 | auVar45 << 0x40 | auVar45 << 0x60;
  auVar45 = auVar40 >> 0x60 & (GPiece<16>)0xffffffff;
  auVar40 = auVar45 | auVar45 << 0x20 | auVar45 << 0x40 | auVar45 << 0x60;
  auVar45 = auVar43 >> 0x60 & (GPiece<16>)0xffffffff;
  auVar43 = auVar45 | auVar45 << 0x20 | auVar45 << 0x40 | auVar45 << 0x60;
  auVar45 = auVar41;
  iVar21 = iVar23;
  do {
    fVar3 = *(float *)(param_1 + 0xc4);
    fVar4 = *(float *)(param_1 + 0xc0);
    fVar5 = *(float *)(param_1 + 200);
    dVar24 = (double)SQRT(fVar5 * fVar5 + fVar4 * fVar4 + fVar3 * fVar3);
    dVar32 = (double)(blargBridgePlatform.x - (float)(longlong)iVar22);
    if ((double)(blargBridgePlatform.x - (float)(longlong)iVar22) - dVar33 < 0.0) {
      dVar32 = dVar33;
    }
    if (dVar24 == dVar33) {
      fVar6 = *(float *)(param_1 + 0xcc);
      dVar32 = dVar33;
      dVar24 = dVar33;
      dVar28 = dVar33;
    }
    else {
      fVar7 = (float)(dVar32 / dVar24);
      fVar6 = *(float *)(param_1 + 0xcc);
      dVar32 = (double)(fVar4 * fVar7);
      dVar24 = (double)(fVar3 * fVar7);
      dVar28 = (double)(fVar5 * fVar7);
    }
    fVar15 = *(float *)(param_1 + 0xd0) * DAT_0073fca4;
    fVar16 = *(float *)(param_1 + 0xd4) * DAT_0073fca4;
    fVar10 = *(float *)(param_1 + 0xd8) * DAT_0073fca4;
    fVar4 = fVar4 * DAT_0073fca0;
    fVar3 = fVar3 * DAT_0073fca0;
    fVar5 = fVar5 * DAT_0073fca0;
    auVar34 = vectorConvertFromSignedFixedPointWord(auVar45,0);
    auVar35 = ZEXT416(0xffffffff);
    auVar35 = auVar35 | auVar35 << 0x20 | auVar35 << 0x40 | auVar35 << 0x60;
    fVar7 = *(float *)(param_1 + 0x10);
    fVar8 = *(float *)(param_1 + 0x14);
    fVar9 = *(float *)(param_1 + 0x18);
    fVar11 = *(float *)(param_1 + 0xe0) * DAT_0073fca8;
    fVar12 = *(float *)(param_1 + 0xe4) * DAT_0073fca8;
    fVar17 = *(float *)(param_1 + 0xe8) * DAT_0073fca8;
    auVar35 = vectorShiftLeftIntegerWord(auVar35,auVar35);
    iVar13 = *(int *)(iVar21 + 0x70);
    auVar35 = vectorMultiplyAddFloatingPoint(auVar34,auVar46,auVar35);
    *(float *)(iVar13 + 0x1c) =
         *(float *)(param_1 + 0xec) * DAT_0073fca8 +
         fVar6 * DAT_0073fca0 + *(float *)(param_1 + 0xdc) * DAT_0073fca4 + DAT_0073fcac;
    *(float *)(iVar13 + 0x10) = (float)((double)(fVar11 + fVar4 + fVar15 + fVar7) + dVar32);
    *(float *)(iVar13 + 0x14) = (float)((double)(fVar12 + fVar3 + fVar16 + fVar8) + dVar24);
    *(float *)(iVar13 + 0x18) = (float)((double)(fVar17 + fVar5 + fVar10 + fVar9) + dVar28);
    fVar5 = *(float *)(param_1 + 0xd4) * DAT_0073fcb4;
    fVar7 = *(float *)(param_1 + 0xd8) * DAT_0073fcb4;
    fVar6 = *(float *)(param_1 + 0xc4) * DAT_0073fcb0;
    fVar8 = *(float *)(param_1 + 200) * DAT_0073fcb0;
    fVar9 = *(float *)(param_1 + 0xe4) * DAT_0073fcb8;
    fVar3 = *(float *)(param_1 + 0x14);
    fVar15 = *(float *)(param_1 + 0xe8) * DAT_0073fcb8;
    fVar4 = *(float *)(param_1 + 0x18);
    iVar13 = *(int *)(iVar21 + 0xc0);
    fVar16 = *(float *)(param_1 + 0xec) * DAT_0073fcb8 +
             *(float *)(param_1 + 0xcc) * DAT_0073fcb0 + *(float *)(param_1 + 0xdc) * DAT_0073fcb4 +
             DAT_0073fcbc;
    *(float *)(iVar13 + 0x10) =
         (float)((double)(*(float *)(param_1 + 0xe0) * DAT_0073fcb8 +
                          *(float *)(param_1 + 0xc0) * DAT_0073fcb0 +
                          *(float *)(param_1 + 0xd0) * DAT_0073fcb4 + *(float *)(param_1 + 0x10)) +
                dVar32);
    *(float *)(iVar13 + 0x14) = (float)((double)(fVar9 + fVar6 + fVar5 + fVar3) + dVar24);
    *(float *)(iVar13 + 0x1c) = fVar16;
    *(float *)(iVar13 + 0x18) = (float)((double)(fVar15 + fVar8 + fVar7 + fVar4) + dVar28);
    auVar34 = loadVectorLeftIndexed(0xffffffffffffefd4,0xe60000);
    auVar34 = vectorNegativeMultiplySubtractFloatingPoint(auVar34,auVar46,auVar35);
    auVar35 = (auVar34 ^ auVar40) >> 0x60 & (GPiece<16>)0xffffffff;
    auVar36 = auVar35 | auVar35 << 0x20 | auVar35 << 0x40 | auVar35 << 0x60;
    vectorCompareGreaterThanFloatingPoint(auVar36,auVar44);
    auVar35 = auVar44;
    if (((bool)(in_cr6 >> 1 & 1)) &&
       (vectorCompareGreaterThanOrEqualToFloatingPoint(auVar36,auVar41), auVar35 = auVar34 ^ auVar40
       , (bool)(in_cr6 >> 1 & 1))) {
      auVar35 = auVar41;
    }
    auVar35 = auVar35 >> 0x60 & (GPiece<16>)0xffffffff;
    auVar35 = auVar35 | auVar35 << 0x20 | auVar35 << 0x40 | auVar35 << 0x60;
    uVar14 = storeVectorElementWordIndexed
                       (auVar40 ^ auVar35,0x40,(ulonglong)*(uint *)(iVar21 + 0x70));
    *(undefined4 *)(*(uint *)(iVar21 + 0x70) + 0x40 & 0xfffffffc) = uVar14;
    uVar14 = storeVectorElementWordIndexed(auVar35,0x40,(ulonglong)*(uint *)(iVar21 + 0xc0));
    *(undefined4 *)(*(uint *)(iVar21 + 0xc0) + 0x40 & 0xfffffffc) = uVar14;
    UpdateMobyTransform(*(MobyInstance **)(iVar21 + 0x70));
    UpdateMobyTransform(*(MobyInstance **)(iVar21 + 0xc0));
    iVar22 = iVar22 + 1;
    auVar34.piece<0,4>() = auVar45.piece<0,4>() + auVar43.piece<0,4>();
    auVar34.piece<8,8>() = auVar45.piece<8,8>();
    auVar34.piece<4,4>() = auVar45.piece<4,4>() + auVar43.piece<4,4>();
    auVar35.piece<0,8>() = auVar34.piece<0,8>();
    auVar35.piece<12,4>() = auVar45.piece<12,4>();
    auVar35.piece<8,4>() = auVar45.piece<8,4>() + auVar43.piece<8,4>();
    auVar45.piece<0,12>() = auVar35.piece<0,12>();
    auVar45.piece<12,4>() = auVar35.piece<12,4>() + auVar43.piece<12,4>();
    iVar21 = iVar21 + 4;
  } while (iVar22 < 0x14);
  dVar24 = 2.0;
  dVar32 = 1.0;
  auVar45 = loadVectorLeftIndexed(0x1c,0x18f428);
  auVar45 = auVar45 >> 0x60 & (GPiece<16>)0xffffffff;
  auVar45 = auVar45 | auVar45 << 0x20 | auVar45 << 0x40 | auVar45 << 0x60;
  auVar43 = auVar41;
  do {
    fVar3 = *(float *)(param_1 + 0xc4);
    fVar4 = *(float *)(param_1 + 0xc0);
    fVar5 = *(float *)(param_1 + 200);
    dVar26 = (double)SQRT(fVar5 * fVar5 + fVar4 * fVar4 + fVar3 * fVar3);
    auVar35 = ZEXT416(0xffffffff);
    auVar35 = auVar35 | auVar35 << 0x20 | auVar35 << 0x40 | auVar35 << 0x60;
    auVar35 = vectorShiftLeftIntegerWord(auVar35,auVar35);
    dVar30 = (double)((float)(longlong)(4 - iVar20) * DAT_0073fcc4 + DAT_0073fcc0);
    dVar31 = -(double)(float)((double)(longlong)iVar20 * dVar24 - (double)blargBridgePlatform.x);
    fVar9 = *(float *)(param_1 + 0xd0) * DAT_0073fca4;
    fVar15 = *(float *)(param_1 + 0xd4) * DAT_0073fca4;
    fVar16 = *(float *)(param_1 + 0xd8) * DAT_0073fca4;
    fVar6 = fVar4 * DAT_0073fca0;
    fVar7 = fVar3 * DAT_0073fca0;
    fVar8 = fVar5 * DAT_0073fca0;
    dVar28 = dVar31;
    if (dVar31 - dVar30 < 0.0) {
      dVar28 = dVar30;
    }
    fVar10 = *(float *)(param_1 + 0x10);
    fVar11 = *(float *)(param_1 + 0x14);
    fVar17 = *(float *)(param_1 + 0xe0) * DAT_0073fca8;
    fVar18 = *(float *)(param_1 + 0xe4) * DAT_0073fca8;
    fVar12 = *(float *)(param_1 + 0x18);
    fVar19 = *(float *)(param_1 + 0xe8) * DAT_0073fca8;
    iVar21 = *(int *)(iVar23 + 0x110);
    dVar29 = (double)(float)(dVar31 - dVar32);
    if ((double)(float)(dVar31 - dVar32) - dVar30 < 0.0) {
      dVar29 = dVar30;
    }
    fVar1 = (float)(dVar28 / dVar26);
    fVar2 = (float)(dVar29 / dVar26);
    auVar34 = vectorConvertFromSignedFixedPointWord(auVar43,0);
    *(float *)(iVar21 + 0x1c) =
         *(float *)(param_1 + 0xec) * DAT_0073fca8 +
         *(float *)(param_1 + 0xcc) * DAT_0073fca0 + *(float *)(param_1 + 0xdc) * DAT_0073fca4 +
         DAT_0073fcac;
    auVar35 = vectorMultiplyAddFloatingPoint(auVar34,auVar45,auVar35);
    dVar28 = dVar33;
    if (dVar33 - dVar26 < 0.0) {
      dVar28 = (double)(fVar5 * fVar1);
    }
    dVar30 = dVar33;
    if (dVar33 - dVar26 < 0.0) {
      dVar30 = (double)(fVar3 * fVar1);
    }
    dVar31 = dVar33;
    if (dVar33 - dVar26 < 0.0) {
      dVar31 = (double)(fVar4 * fVar1);
    }
    if (dVar26 - dVar33 < 0.0) {
      dVar28 = (double)(fVar5 * fVar1);
    }
    if (dVar26 - dVar33 < 0.0) {
      dVar30 = (double)(fVar3 * fVar1);
    }
    if (dVar26 - dVar33 < 0.0) {
      dVar31 = (double)(fVar4 * fVar1);
    }
    dVar29 = dVar33;
    if (dVar33 - dVar26 < 0.0) {
      dVar29 = (double)(fVar5 * fVar2);
    }
    dVar27 = dVar33;
    if (dVar33 - dVar26 < 0.0) {
      dVar27 = (double)(fVar4 * fVar2);
    }
    dVar25 = dVar33;
    if (dVar33 - dVar26 < 0.0) {
      dVar25 = (double)(fVar3 * fVar2);
    }
    *(float *)(iVar21 + 0x14) = (float)((double)(fVar18 + fVar7 + fVar15 + fVar11) + dVar30);
    *(float *)(iVar21 + 0x10) = (float)((double)(fVar17 + fVar6 + fVar9 + fVar10) + dVar31);
    *(float *)(iVar21 + 0x18) = (float)((double)(fVar19 + fVar8 + fVar16 + fVar12) + dVar28);
    if (dVar26 - dVar33 < 0.0) {
      dVar29 = (double)(fVar5 * fVar2);
    }
    if (dVar26 - dVar33 < 0.0) {
      dVar27 = (double)(fVar4 * fVar2);
    }
    fVar4 = *(float *)(param_1 + 0xd4) * DAT_0073fcb4;
    if (dVar26 - dVar33 < 0.0) {
      dVar25 = (double)(fVar3 * fVar2);
    }
    fVar7 = *(float *)(param_1 + 0xd8) * DAT_0073fcb4;
    fVar6 = *(float *)(param_1 + 0xc4) * DAT_0073fcb0;
    fVar8 = *(float *)(param_1 + 200) * DAT_0073fcb0;
    fVar9 = *(float *)(param_1 + 0xe4) * DAT_0073fcb8;
    fVar15 = *(float *)(param_1 + 0xe8) * DAT_0073fcb8;
    fVar3 = *(float *)(param_1 + 0x14);
    fVar5 = *(float *)(param_1 + 0x18);
    iVar21 = *(int *)(iVar23 + 0x138);
    fVar16 = *(float *)(param_1 + 0xec) * DAT_0073fcb8 +
             *(float *)(param_1 + 0xcc) * DAT_0073fcb0 + *(float *)(param_1 + 0xdc) * DAT_0073fcb4 +
             DAT_0073fcbc;
    *(float *)(iVar21 + 0x10) =
         (float)((double)(*(float *)(param_1 + 0xe0) * DAT_0073fcb8 +
                          *(float *)(param_1 + 0xc0) * DAT_0073fcb0 +
                          *(float *)(param_1 + 0xd0) * DAT_0073fcb4 + *(float *)(param_1 + 0x10)) +
                dVar27);
    *(float *)(iVar21 + 0x14) = (float)((double)(fVar9 + fVar6 + fVar4 + fVar3) + dVar25);
    *(float *)(iVar21 + 0x1c) = fVar16;
    *(float *)(iVar21 + 0x18) = (float)((double)(fVar15 + fVar8 + fVar7 + fVar5) + dVar29);
    auVar38 = loadVectorLeftIndexed(0xffffffffffffefd4,0xe60000);
    auVar42 = vectorNegativeMultiplySubtractFloatingPoint(auVar38,auVar46,auVar35);
    auVar37 = loadVectorLeftIndexed(0xffffffffffffefe0,0xe60000);
    auVar42 = auVar42 ^ auVar40;
    auVar34 = auVar42 >> 0x60 & (GPiece<16>)0xffffffff;
    auVar39 = auVar34 | auVar34 << 0x20 | auVar34 << 0x40 | auVar34 << 0x60;
    auVar36 = vectorNegativeMultiplySubtractFloatingPoint(auVar37,auVar46,auVar42);
    vectorCompareGreaterThanFloatingPoint(auVar39,auVar44);
    auVar34 = auVar44;
    if (((bool)(in_cr6 >> 1 & 1)) &&
       (vectorCompareGreaterThanOrEqualToFloatingPoint(auVar39,auVar41), auVar34 = auVar42,
       (bool)(in_cr6 >> 1 & 1))) {
      auVar34 = auVar41;
    }
    auVar39 = auVar36 >> 0x60 & (GPiece<16>)0xffffffff;
    auVar39 = auVar39 | auVar39 << 0x20 | auVar39 << 0x40 | auVar39 << 0x60;
    auVar34 = auVar34 >> 0x60 & (GPiece<16>)0xffffffff;
    auVar42 = auVar34 | auVar34 << 0x20 | auVar34 << 0x40 | auVar34 << 0x60;
    vectorCompareGreaterThanFloatingPoint(auVar39,auVar44);
    auVar34 = auVar44;
    if (((bool)(in_cr6 >> 1 & 1)) &&
       (vectorCompareGreaterThanOrEqualToFloatingPoint(auVar39,auVar41), auVar34 = auVar36,
       (bool)(in_cr6 >> 1 & 1))) {
      auVar34 = auVar41;
    }
    vectorCompareEqualToFloatingPoint(auVar42,auVar41);
    auVar34 = auVar34 >> 0x60 & (GPiece<16>)0xffffffff;
    if (((bool)(in_cr6 >> 1 & 1)) &&
       (vectorCompareEqualToFloatingPoint
                  (auVar34 | auVar34 << 0x20 | auVar34 << 0x40 | auVar34 << 0x60,auVar41),
       !(bool)(in_cr6 >> 1 & 1))) {
      PlayMobySound(1,0,*(MobyInstance **)(iVar23 + 0x110));
      auVar38 = loadVectorLeftIndexed(0xffffffffffffefd4,0xe60000);
      auVar37 = loadVectorLeftIndexed(0xffffffffffffefe0,0xe60000);
    }
    auVar34 = auVar38 >> 0x60 & (GPiece<16>)0xffffffff;
    auVar36 = auVar37 >> 0x60 & (GPiece<16>)0xffffffff;
    auVar34 = vectorNegativeMultiplySubtractFloatingPoint
                        (auVar34 | auVar34 << 0x20 | auVar34 << 0x40 | auVar34 << 0x60,auVar46,
                         auVar35);
    auVar37 = vectorSubtractFloatingPoint(auVar34 ^ auVar40,auVar45);
    vectorCompareGreaterThanFloatingPoint(auVar37,auVar44);
    auVar36 = vectorNegativeMultiplySubtractFloatingPoint
                        (auVar36 | auVar36 << 0x20 | auVar36 << 0x40 | auVar36 << 0x60,auVar46,
                         auVar37);
    auVar34 = auVar44;
    if (((bool)(in_cr6 >> 1 & 1)) &&
       (vectorCompareGreaterThanOrEqualToFloatingPoint(auVar37,auVar41), auVar34 = auVar37,
       (bool)(in_cr6 >> 1 & 1))) {
      auVar34 = auVar41;
    }
    vectorCompareGreaterThanFloatingPoint(auVar36,auVar44);
    auVar37 = auVar44;
    if (((bool)(in_cr6 >> 1 & 1)) &&
       (vectorCompareGreaterThanOrEqualToFloatingPoint(auVar36,auVar41), auVar37 = auVar36,
       (bool)(in_cr6 >> 1 & 1))) {
      auVar37 = auVar41;
    }
    vectorCompareEqualToFloatingPoint(auVar34,auVar41);
    if (((bool)(in_cr6 >> 1 & 1)) &&
       (vectorCompareEqualToFloatingPoint(auVar37,auVar41), !(bool)(in_cr6 >> 1 & 1))) {
      PlayMobySound(1,0,*(MobyInstance **)(iVar23 + 0x138));
    }
    uVar14 = storeVectorElementWordIndexed
                       (auVar40 ^ auVar42,0x40,(ulonglong)*(uint *)(iVar23 + 0x110));
    *(undefined4 *)(*(uint *)(iVar23 + 0x110) + 0x40 & 0xfffffffc) = uVar14;
    uVar14 = storeVectorElementWordIndexed(auVar34,0x40,(ulonglong)*(uint *)(iVar23 + 0x138));
    *(undefined4 *)(*(uint *)(iVar23 + 0x138) + 0x40 & 0xfffffffc) = uVar14;
    auVar37 = loadVectorLeftIndexed(0xffffffffffffefd8,0xe60000);
    auVar42 = vectorNegativeMultiplySubtractFloatingPoint(auVar37,auVar46,auVar35);
    auVar36 = loadVectorLeftIndexed(0xffffffffffffefe4,0xe60000);
    auVar42 = auVar42 ^ auVar40;
    auVar34 = auVar42 >> 0x60 & (GPiece<16>)0xffffffff;
    auVar39 = auVar34 | auVar34 << 0x20 | auVar34 << 0x40 | auVar34 << 0x60;
    auVar38 = vectorNegativeMultiplySubtractFloatingPoint(auVar36,auVar46,auVar42);
    vectorCompareGreaterThanFloatingPoint(auVar39,auVar44);
    auVar34 = auVar44;
    if (((bool)(in_cr6 >> 1 & 1)) &&
       (vectorCompareGreaterThanOrEqualToFloatingPoint(auVar39,auVar41), auVar34 = auVar42,
       (bool)(in_cr6 >> 1 & 1))) {
      auVar34 = auVar41;
    }
    auVar39 = auVar38 >> 0x60 & (GPiece<16>)0xffffffff;
    auVar39 = auVar39 | auVar39 << 0x20 | auVar39 << 0x40 | auVar39 << 0x60;
    auVar34 = auVar34 >> 0x60 & (GPiece<16>)0xffffffff;
    auVar42 = auVar34 | auVar34 << 0x20 | auVar34 << 0x40 | auVar34 << 0x60;
    vectorCompareGreaterThanFloatingPoint(auVar39,auVar44);
    auVar34 = auVar44;
    if (((bool)(in_cr6 >> 1 & 1)) &&
       (vectorCompareGreaterThanOrEqualToFloatingPoint(auVar39,auVar41), auVar34 = auVar38,
       (bool)(in_cr6 >> 1 & 1))) {
      auVar34 = auVar41;
    }
    vectorCompareEqualToFloatingPoint(auVar42,auVar41);
    auVar34 = auVar34 >> 0x60 & (GPiece<16>)0xffffffff;
    if (((bool)(in_cr6 >> 1 & 1)) &&
       (vectorCompareEqualToFloatingPoint
                  (auVar34 | auVar34 << 0x20 | auVar34 << 0x40 | auVar34 << 0x60,auVar41),
       !(bool)(in_cr6 >> 1 & 1))) {
      PlayMobySound(2,0,*(MobyInstance **)(iVar23 + 0x110));
      auVar37 = loadVectorLeftIndexed(0xffffffffffffefd8,0xe60000);
      auVar36 = loadVectorLeftIndexed(0xffffffffffffefe4,0xe60000);
    }
    auVar34 = auVar37 >> 0x60 & (GPiece<16>)0xffffffff;
    auVar37 = vectorNegativeMultiplySubtractFloatingPoint
                        (auVar34 | auVar34 << 0x20 | auVar34 << 0x40 | auVar34 << 0x60,auVar46,
                         auVar35);
    auVar35 = auVar36 >> 0x60 & (GPiece<16>)0xffffffff;
    auVar34 = vectorNegativeMultiplySubtractFloatingPoint
                        (auVar35 | auVar35 << 0x20 | auVar35 << 0x40 | auVar35 << 0x60,auVar46,
                         auVar42);
    auVar36 = vectorSubtractFloatingPoint(auVar37 ^ auVar40,auVar45);
    vectorCompareGreaterThanFloatingPoint(auVar36,auVar44);
    auVar35 = auVar44;
    if (((bool)(in_cr6 >> 1 & 1)) &&
       (vectorCompareGreaterThanOrEqualToFloatingPoint(auVar36,auVar41), auVar35 = auVar36,
       (bool)(in_cr6 >> 1 & 1))) {
      auVar35 = auVar41;
    }
    vectorCompareGreaterThanFloatingPoint(auVar34,auVar44);
    auVar36 = auVar44;
    if (((bool)(in_cr6 >> 1 & 1)) &&
       (vectorCompareGreaterThanOrEqualToFloatingPoint(auVar34,auVar41), auVar36 = auVar34,
       (bool)(in_cr6 >> 1 & 1))) {
      auVar36 = auVar41;
    }
    vectorCompareEqualToFloatingPoint(auVar35,auVar41);
    if (((bool)(in_cr6 >> 1 & 1)) &&
       (vectorCompareEqualToFloatingPoint(auVar36,auVar41), !(bool)(in_cr6 >> 1 & 1))) {
      PlayMobySound(2,0,*(MobyInstance **)(iVar23 + 0x138));
    }
    uVar14 = storeVectorElementWordIndexed
                       (auVar40 ^ auVar42,0x44,(ulonglong)*(uint *)(iVar23 + 0x110));
    *(undefined4 *)(*(uint *)(iVar23 + 0x110) + 0x44 & 0xfffffffc) = uVar14;
    uVar14 = storeVectorElementWordIndexed
                       (auVar40 ^ auVar35,0x44,(ulonglong)*(uint *)(iVar23 + 0x138));
    *(undefined4 *)(*(uint *)(iVar23 + 0x138) + 0x44 & 0xfffffffc) = uVar14;
    UpdateMobyTransform(*(MobyInstance **)(iVar23 + 0x110));
    UpdateMobyTransform(*(MobyInstance **)(iVar23 + 0x138));
    iVar20 = iVar20 + 1;
    iVar23 = iVar23 + 4;
    auVar37.piece<0,4>() = auVar43.piece<0,4>() + 2;
    auVar37.piece<8,8>() = auVar43.piece<8,8>();
    auVar37.piece<4,4>() = auVar43.piece<4,4>() + 2;
    auVar36.piece<0,8>() = auVar37.piece<0,8>();
    auVar36.piece<12,4>() = auVar43.piece<12,4>();
    auVar36.piece<8,4>() = auVar43.piece<8,4>() + 2;
    auVar43.piece<0,12>() = auVar36.piece<0,12>();
    auVar43.piece<12,4>() = auVar36.piece<12,4>() + 2;
  } while (iVar20 < 10);
  return;
}


// 0x018fdc8 (0xa04 bytes)
/* Moby 1028 */

void UpdateMoby_1028_BlargPlatform(MobyInstance *moby)

{
  u8 uVar1;
  byte bVar2;
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
  float fVar13;
  float fVar14;
  float fVar15;
  int iVar16;
  uint uVar17;
  float fVar18;
  MobyInstance *pMVar19;
  int iVar20;
  void *pvVar21;
  int iVar22;
  void *pvVar23;
  double dVar24;
  double dVar25;
  double dVar26;
  double dVar27;
  double dVar28;
  double dVar29;
  double dVar30;
  float local_90;
  float local_8c;
  float local_88;
  float local_84;
  float local_80;
  float local_7c;
  float local_78;
  
  uVar1 = moby->state;
  pvVar23 = moby->pVar;
  if (uVar1 != '\x06') {
    if (uVar1 == '\x05') {
      dVar24 = 1.0;
      iVar20 = *(int *)((int)pvVar23 + 0x6c);
      Delt(1.0,(float)(1.0 / (double)(longlong)(animationSpeed * 20.5)),
                     (float *)((int)pvVar23 + 0x6c));
      uVar17 = *(uint *)((int)pvVar23 + 0x6c);
      SceneScreenFade = (float)(dVar24 - ABS((double)*(float *)((int)pvVar23 + 0x6c)));
      if ((iVar20 < 0) && (-1 < (int)uVar17)) {
        Hero_TransitionToDefault();
        Camera_DeactivateMobyDrivenCam(3);
      }
      else if (0x3f7fffff <
               (int)(FLOAT_ORDER(uVar17))) {
        moby->state = '\x06';
        Help_QueueMessage(STR_THE_GADGETRON_HYDRODISPLACER_USES_0x1776,0x2d);
        MB_ToastMessage(0x177c,0xffffffffffffffff);
        memcard_Save(0,-1);
      }
    }
    else if (uVar1 == '\x04') {
      SetLevelFlag(moby->levelFlagIdx);
      if ((int)(((uint)((int)blargBridgePlatform.x >> 0x1f) >> 1 ^ (uint)blargBridgePlatform.x) -
               ((int)blargBridgePlatform.x >> 0x1f)) < 0x41a00000) {
        OrganicDelt
                  (20.0,DAT_0073fcd4 * g_FrameTimeSq,DAT_0073fcd4 * g_FrameTimeSq,
                   DAT_0073fcc8 * g_FrameTime,&blargBridgePlatform.x,0x720000,
                   &blargBridgePlatform.w);
      }
      if (DAT_0073fce0 < blargBridgePlatform.x) {
        if ((int)(((uint)((int)blargBridgePlatform.y >> 0x1f) >> 1 ^ (uint)blargBridgePlatform.y) -
                 ((int)blargBridgePlatform.y >> 0x1f)) < 0x447a0000) {
          OrganicDelt
                    (1000.0,DAT_0073fcd8 * g_FrameTimeSq,DAT_0073fcd8 * g_FrameTimeSq,
                     DAT_0073fccc * g_FrameTime,&blargBridgePlatform.y,0x720000,
                     (float *)&DAT_00e5efe0);
        }
      }
      if ((int)(FLOAT_ORDER(DAT_0073fce4)) <
          (int)(((uint)((int)blargBridgePlatform.y >> 0x1f) >> 1 ^ (uint)blargBridgePlatform.y) -
               ((int)blargBridgePlatform.y >> 0x1f))) {
        if ((int)(((uint)((int)blargBridgePlatform.z >> 0x1f) >> 1 ^ (uint)blargBridgePlatform.z) -
                 ((int)blargBridgePlatform.z >> 0x1f)) < 0x447a0000) {
          OrganicDelt
                    (1000.0,DAT_0073fcdc * g_FrameTimeSq,DAT_0073fcdc * g_FrameTimeSq,
                     DAT_0073fcd0 * g_FrameTime,&blargBridgePlatform.z,0x720000,
                     (float *)&DAT_00e5efe4);
        }
      }
      if (0x4479ffff <
          (int)(((uint)((int)blargBridgePlatform.z >> 0x1f) >> 1 ^ (uint)blargBridgePlatform.z) -
               ((int)blargBridgePlatform.z >> 0x1f))) {
        moby->state = '\x05';
        *(undefined4 *)((int)pvVar23 + 0x6c) = 0xbf800000;
      }
      bVar2 = moby->setByGroup;
      if ((0x419fffff <
           (int)(((uint)((int)blargBridgePlatform.x >> 0x1f) >> 1 ^ (uint)blargBridgePlatform.x) -
                ((int)blargBridgePlatform.x >> 0x1f))) &&
         (iVar20 = IsMobyPlayingSound(*(MobyInstance **)((int)pvVar23 + 0x134),(uint)bVar2),
         iVar20 != 0)) {
        if ((bVar2 != 0xffffffff) &&
           ((g_SoundChannels[bVar2].pMoby == *(MobyInstance **)((int)pvVar23 + 0x134) &&
            (g_SoundChannels[bVar2].state != '\0')))) {
          sound_Kill((uint)bVar2);
        }
        moby->setByGroup = -1;
      }
      M1028_0018f448(moby);
      if ((int)(((uint)((int)blargBridgePlatform.x >> 0x1f) >> 1 ^ (uint)blargBridgePlatform.x) -
               ((int)blargBridgePlatform.x >> 0x1f)) < 0x41a00000) {
        iVar20 = *(int *)((int)pvVar23 + 0x60);
        iVar22 = *(int *)((int)pvVar23 + 100);
        fVar3 = 0.05;
        fVar4 = Cuboids[iVar20].pos.x;
        fVar5 = Cuboids[iVar20].pos.y;
        fVar6 = Cuboids[iVar20].pos.z;
        fVar7 = Cuboids[iVar22].pos.x;
        fVar8 = Cuboids[iVar22].pos.y;
        fVar9 = Cuboids[iVar22].pos.z;
        local_84 = Cuboids[iVar22].pos.w;
        fVar10 = Cuboids[iVar20].rot.x;
        fVar11 = Cuboids[iVar20].rot.y;
        fVar12 = Cuboids[iVar20].rot.z;
        fVar13 = Cuboids[iVar22].rot.x;
        fVar14 = Cuboids[iVar22].rot.y;
        fVar15 = Cuboids[iVar22].rot.z;
        fVar18 = blargBridgePlatform.x;
      }
      else {
        iVar20 = *(int *)((int)pvVar23 + 100);
        iVar22 = *(int *)((int)pvVar23 + 0x68);
        fVar3 = 0.001;
        fVar4 = Cuboids[iVar20].pos.x;
        fVar5 = Cuboids[iVar20].pos.y;
        fVar6 = Cuboids[iVar20].pos.z;
        fVar7 = Cuboids[iVar22].pos.x;
        fVar8 = Cuboids[iVar22].pos.y;
        fVar9 = Cuboids[iVar22].pos.z;
        local_84 = Cuboids[iVar22].pos.w;
        fVar10 = Cuboids[iVar20].rot.x;
        fVar11 = Cuboids[iVar20].rot.y;
        fVar12 = Cuboids[iVar20].rot.z;
        fVar13 = Cuboids[iVar22].rot.x;
        fVar14 = Cuboids[iVar22].rot.y;
        fVar15 = Cuboids[iVar22].rot.z;
        fVar18 = blargBridgePlatform.z;
      }
      dVar30 = (double)fVar15;
      dVar29 = (double)fVar14;
      dVar28 = (double)fVar12;
      dVar27 = (double)fVar11;
      dVar26 = (double)fVar10;
      dVar25 = (double)(fVar18 * fVar3);
      local_90 = (float)(dVar25 * (double)(float)((double)fVar7 - (double)fVar4) + (double)fVar4);
      local_8c = (float)(dVar25 * (double)(float)((double)fVar8 - (double)fVar5) + (double)fVar5);
      local_88 = (float)(dVar25 * (double)(float)((double)fVar9 - (double)fVar6) + (double)fVar6);
      dVar24 = (double)FastDiffRots((double)fVar13,dVar26);
      local_80 = (float)(dVar24 * dVar25);
      dVar24 = (double)FastWrapRot((float)dVar26,local_80);
      local_80 = (float)dVar24;
      dVar24 = (double)FastDiffRots(dVar29,dVar27);
      local_7c = (float)(dVar24 * dVar25);
      dVar24 = (double)FastWrapRot((float)dVar27,local_7c);
      local_7c = (float)dVar24;
      dVar24 = (double)FastDiffRots(dVar30,dVar28);
      local_78 = (float)(dVar24 * dVar25);
      dVar24 = (double)FastWrapRot((float)dVar28,local_78);
      local_78 = (float)dVar24;
      Camera_SetMobyDrivenTargetPos(&local_90);
      Camera_SetMobyDrivenTargetRot(&local_80);
    }
    else if (uVar1 == '\x03') {
      dVar24 = 1.0;
      iVar20 = *(int *)((int)pvVar23 + 0x6c);
      Delt(1.0,(float)(1.0 / (double)(longlong)(animationSpeed * 20.5)),
                     (float *)((int)pvVar23 + 0x6c));
      uVar17 = *(uint *)((int)pvVar23 + 0x6c);
      SceneScreenFade = (float)(dVar24 - ABS((double)*(float *)((int)pvVar23 + 0x6c)));
      if ((iVar20 < 0) && (-1 < (int)uVar17)) {
        Hero_Warp(&g_heroPosition.x,&g_heroRotation.x,0x72,1);
        SetCameraPosition
                  (&Cuboids[*(int *)((int)pvVar23 + 0x60)].pos,
                   &Cuboids[*(int *)((int)pvVar23 + 0x60)].rot,1,0,0);
      }
      else if (0x3f7fffff <
               (int)(FLOAT_ORDER(uVar17))) {
        moby->state = '\x04';
        iVar20 = PlayMobySound(0,4,*(MobyInstance **)((int)pvVar23 + 0x134));
        moby->setByGroup = (char)iVar20;
      }
    }
    else if (uVar1 == '\x01') {
      if (((g_heroType == '\x01') && (UnlockableItems.hydrodisplacer != '\0')) &&
         (g_gameMode == GAME_MODE_NORMAL)) {
        SceneScreenFade = 1.0;
        moby->state = '\x03';
        *(undefined4 *)((int)pvVar23 + 0x6c) = 0xbc23d70a;
      }
    }
    else if (uVar1 == '\0') {
      if (g_LevelFlags[Level][(byte)moby->levelFlagIdx] == -1) {
        moby->state = '\x06';
        blargBridgePlatform.x = 20.0;
        blargBridgePlatform.y = 1000.0;
        blargBridgePlatform.z = 1000.0;
      }
      else {
        moby->state = '\x01';
      }
      iVar20 = 0;
      iVar22 = 0;
      pvVar21 = pvVar23;
      do {
        pMVar19 = CreateMoby(0x405);
        *(MobyInstance **)((int)pvVar21 + 0x70) = pMVar19;
        pMVar19->drawDistance = 0x40;
        *(undefined1 *)(*(int *)((int)pvVar21 + 0x70) + 0x31) = 1;
        *(undefined8 *)(*(int *)((int)pvVar21 + 0x70) + 0x38) = *(undefined8 *)&g_heroMobyPtr->color
        ;
        *(MobyModeBit *)(*(int *)((int)pvVar21 + 0x70) + 0x34) = moby->modeBits;
        iVar16 = *(int *)((int)pvVar21 + 0x70);
        *(f32 *)(iVar16 + 0x10) = (moby->pos).x;
        *(f32 *)(iVar16 + 0x14) = (moby->pos).y;
        *(f32 *)(iVar16 + 0x18) = (moby->pos).z;
        *(f32 *)(iVar16 + 0x1c) = (moby->pos).w;
        iVar16 = *(int *)((int)pvVar21 + 0x70);
        *(f32 *)(iVar16 + 0x40) = (moby->rotation).x;
        *(f32 *)(iVar16 + 0x44) = (moby->rotation).y;
        *(f32 *)(iVar16 + 0x48) = (moby->rotation).z;
        *(f32 *)(iVar16 + 0x4c) = (moby->rotation).w;
        pMVar19 = CreateMoby(0x405);
        *(MobyInstance **)((int)pvVar21 + 0xc0) = pMVar19;
        pMVar19->drawDistance = 0x40;
        iVar20 = iVar20 + 1;
        *(undefined1 *)(*(int *)((int)pvVar21 + 0xc0) + 0x31) = 1;
        *(undefined8 *)(*(int *)((int)pvVar21 + 0xc0) + 0x38) = *(undefined8 *)&moby->color;
        *(MobyModeBit *)(*(int *)((int)pvVar21 + 0xc0) + 0x34) = moby->modeBits;
        iVar16 = *(int *)((int)pvVar21 + 0xc0);
        *(f32 *)(iVar16 + 0x10) = (moby->pos).x;
        *(f32 *)(iVar16 + 0x14) = (moby->pos).y;
        *(f32 *)(iVar16 + 0x18) = (moby->pos).z;
        *(f32 *)(iVar16 + 0x1c) = (moby->pos).w;
        iVar16 = *(int *)((int)pvVar21 + 0xc0);
        pvVar21 = (void *)((int)pvVar21 + 4);
        *(f32 *)(iVar16 + 0x40) = (moby->rotation).x;
        *(f32 *)(iVar16 + 0x44) = (moby->rotation).y;
        *(f32 *)(iVar16 + 0x48) = (moby->rotation).z;
        *(f32 *)(iVar16 + 0x4c) = (moby->rotation).w;
      } while (iVar20 < 0x14);
      do {
        pMVar19 = CreateMoby(0x406);
        *(MobyInstance **)((int)pvVar23 + 0x110) = pMVar19;
        pMVar19->drawDistance = 0x40;
        *(undefined1 *)(*(int *)((int)pvVar23 + 0x110) + 0x31) = 1;
        *(undefined8 *)(*(int *)((int)pvVar23 + 0x110) + 0x38) =
             *(undefined8 *)&g_heroMobyPtr->color;
        *(MobyModeBit *)(*(int *)((int)pvVar23 + 0x110) + 0x34) = moby->modeBits;
        iVar20 = *(int *)((int)pvVar23 + 0x110);
        *(f32 *)(iVar20 + 0x10) = (moby->pos).x;
        *(f32 *)(iVar20 + 0x14) = (moby->pos).y;
        *(f32 *)(iVar20 + 0x18) = (moby->pos).z;
        *(f32 *)(iVar20 + 0x1c) = (moby->pos).w;
        iVar20 = *(int *)((int)pvVar23 + 0x110);
        *(f32 *)(iVar20 + 0x40) = (moby->rotation).x;
        *(f32 *)(iVar20 + 0x44) = (moby->rotation).y;
        *(f32 *)(iVar20 + 0x48) = (moby->rotation).z;
        *(f32 *)(iVar20 + 0x4c) = (moby->rotation).w;
        pMVar19 = CreateMoby(0x406);
        *(MobyInstance **)((int)pvVar23 + 0x138) = pMVar19;
        pMVar19->drawDistance = 0x40;
        iVar22 = iVar22 + 1;
        *(undefined1 *)(*(int *)((int)pvVar23 + 0x138) + 0x31) = 1;
        *(undefined8 *)(*(int *)((int)pvVar23 + 0x138) + 0x38) = *(undefined8 *)&moby->color;
        *(MobyModeBit *)(*(int *)((int)pvVar23 + 0x138) + 0x34) = moby->modeBits;
        iVar20 = *(int *)((int)pvVar23 + 0x138);
        *(f32 *)(iVar20 + 0x10) = (moby->pos).x;
        *(f32 *)(iVar20 + 0x14) = (moby->pos).y;
        *(f32 *)(iVar20 + 0x18) = (moby->pos).z;
        *(f32 *)(iVar20 + 0x1c) = (moby->pos).w;
        iVar20 = *(int *)((int)pvVar23 + 0x138);
        pvVar23 = (void *)((int)pvVar23 + 4);
        *(f32 *)(iVar20 + 0x40) = (moby->rotation).x;
        *(f32 *)(iVar20 + 0x44) = (moby->rotation).y;
        *(f32 *)(iVar20 + 0x48) = (moby->rotation).z;
        *(f32 *)(iVar20 + 0x4c) = (moby->rotation).w;
      } while (iVar22 < 10);
      M1028_0018f448(moby);
    }
  }
  return;
}


