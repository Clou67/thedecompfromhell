// game/update/moby470.cpp -- reconstructed from NPEA00385 EBOOT
// STATUS: NOT STARTED (raw Ghidra output)
// 4 functions, 0x3994a8-0x399a20
#include "game/update/moby470.h"
#include "game/hero.h"
#include "game/mobyfunc.h"
#include "game/mobyutil.h"
#include "game/partupd.h"
#include "idol/fastfunc.h"

// 0x03994a8 (0x14 bytes)
void M470_003994a8(void)

{
  DAT_00842e6c = 0x10000;
  return;
}


// 0x03994d8 (0x314 bytes)
void M470_003994d8(int param_1)

{
  float fVar1;
  undefined4 uVar2;
  int iVar4;
  undefined8 uVar3;
  undefined1 uVar5;
  undefined8 in_r9;
  int iVar6;
  ulonglong uVar7;
  float *pfVar8;
  longlong lVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  GPiece<16> auVar15;
  GPiece<16> auVar16;
  GPiece<16> auVar17;
  GPiece<56> local_90;
  
  dVar11 = 0.0;
  iVar6 = 0;
  uVar7 = (ulonglong)*(uint *)(param_1 + 0x78);
  *(float *)(param_1 + 0x18) = (*(float *)(param_1 + 0x18) + 0.1) - 0.1;
  lVar9 = uVar7 + 0x20;
  dVar12 = 255.0;
  auVar17 = loadVectorLeftIndexed(0x10,0x3994c0);
  dVar13 = 255.5;
  auVar17 = auVar17 >> 0x60 & (GPiece<16>)0xffffffff;
  auVar17 = auVar17 | auVar17 << 0x20 | auVar17 << 0x40 | auVar17 << 0x60;
  dVar14 = 0.5;
  do {
    pfVar8 = (float *)uVar7;
    dVar10 = (double)(*pfVar8 + pfVar8[4]);
    *pfVar8 = *pfVar8 + pfVar8[4];
    if (dVar10 < dVar12) {
      if (dVar10 <= dVar11) {
        *pfVar8 = (float)(dVar10 + dVar12);
      }
    }
    else {
      *pfVar8 = (float)(dVar10 - dVar12);
    }
    iVar4 = FastDecTimerS32(uVar7 + 0x20);
    fVar1 = pfVar8[8];
    dVar10 = (double)animationSpeed;
    auVar15 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
    if (iVar4 != 0) {
      auVar16 = ZEXT416(0xffffffff);
      auVar16 = auVar16 | auVar16 << 0x20 | auVar16 << 0x40 | auVar16 << 0x60;
      auVar16 = vectorShiftLeftIntegerWord(auVar16,auVar16);
      auVar15 = vectorMultiplyAddFloatingPoint(auVar15,auVar17,auVar16);
      fVar1 = (float)(int)(dVar10 * dVar13);
      auVar15 = vectorConvertToSignedFixedPointWordSaturate(auVar15,0);
      auVar15 = auVar15 >> 0x60 & (GPiece<16>)0xffffffff;
      uVar2 = storeVectorElementWordIndexed
                        (auVar15 | auVar15 << 0x20 | auVar15 << 0x40 | auVar15 << 0x60,0,lVar9);
      *(undefined4 *)((uint)lVar9 & 0xfffffffc) = uVar2;
    }
    dVar10 = (double)FastIntToDouble((int)(dVar10 * dVar13) - (int)fVar1);
    uVar3 = FastLerpColor
                      (ABS((double)(float)(dVar14 - (double)(float)(dVar10 / (double)(longlong)
                                                                                     ((double)
                                                  animationSpeed * dVar13)))),0x4040ffff,0x1040ffff)
    ;
    uVar5 = FastDoubleToInt((double)*pfVar8);
    SpawnPart_59((double)pfVar8[0xc],local_90,uVar3,uVar5,0x35,1,2,in_r9,0);
    iVar6 = iVar6 + 1;
    lVar9 = lVar9 + 4;
    uVar7 = uVar7 + 4;
  } while (iVar6 < 4);
  return;
}


// 0x03997f8 (0x124 bytes)
void M470_003997f8(int param_1)

{
  uint uVar1;
  undefined4 uVar2;
  int iVar4;
  longlong lVar3;
  ulonglong uVar5;
  undefined8 in_LR;
  longlong lVar6;
  GPiece<16> auVar7;
  GPiece<16> auVar8;
  GPiece<16> auVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  GPiece<16> auVar13;
  GPiece<16> auVar14;
  GPiece<16> in_vs39;
  GPiece<16> auVar15;
  GPiece<16> auVar16;
  
  uVar1 = *(uint *)(param_1 + 0x78);
  iVar10 = 0;
  uVar5 = (ulonglong)uVar1;
  do {
    iVar4 = MB_randInt(0xff);
    iVar10 = iVar10 + 1;
    *(float *)uVar5 = (float)(longlong)iVar4;
    uVar5 = uVar5 + 4;
  } while (iVar10 < 4);
  iVar10 = 0;
  iVar12 = 0;
  iVar11 = 0;
  iVar4 = 0;
  *(undefined4 *)(uVar1 + 0x10) = 0xbf800000;
  *(undefined4 *)(uVar1 + 0x14) = 0xc0100000;
  *(undefined4 *)(uVar1 + 0x18) = 0x3fa00000;
  *(undefined4 *)(uVar1 + 0x1c) = 0x40200000;
  auVar14 = loadVectorLeftIndexed(in_LR,0x3997ec);
  auVar13 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
  lVar3 = (ulonglong)uVar1 + 0x20;
  auVar8 = loadVectorLeftIndexed(4,0x3997ec);
  lVar6 = 4;
  auVar7 = loadVectorLeftIndexed(8,0x3997ec);
  auVar14 = auVar14 >> 0x60 & (GPiece<16>)0xffffffff;
  auVar8 = auVar8 >> 0x60 & (GPiece<16>)0xffffffff;
  auVar9 = auVar8 | auVar8 << 0x20 | auVar8 << 0x40 | auVar8 << 0x60;
  auVar8 = auVar7 >> 0x60 & (GPiece<16>)0xffffffff;
  auVar8 = auVar8 | auVar8 << 0x20 | auVar8 << 0x40 | auVar8 << 0x60;
  do {
    auVar7.piece<0,4>() = iVar4 + auVar9.piece<0,4>();
    auVar7.piece<8,8>() = in_vs39.piece<8,8>();
    auVar7.piece<4,4>() = iVar10 + auVar9.piece<4,4>();
    auVar16.piece<0,8>() = auVar7.piece<0,8>();
    auVar16.piece<8,4>() = iVar11 + auVar9.piece<8,4>();
    auVar16.piece<12,4>() = iVar12 + auVar9.piece<12,4>();
    auVar7 = ZEXT416(0xffffffff);
    auVar15 = auVar7 | auVar7 << 0x20 | auVar7 << 0x40 | auVar7 << 0x60;
    iVar4 = iVar4 + auVar8.piece<0,4>();
    iVar10 = iVar10 + auVar8.piece<4,4>();
    iVar11 = iVar11 + auVar8.piece<8,4>();
    iVar12 = iVar12 + auVar8.piece<12,4>();
    auVar7 = vectorConvertFromSignedFixedPointWord(auVar16,0);
    auVar16 = vectorShiftLeftIntegerWord(auVar15,auVar15);
    auVar7 = vectorAddFloatingPoint
                       (auVar7,auVar14 | auVar14 << 0x20 | auVar14 << 0x40 | auVar14 << 0x60);
    auVar7 = vectorMultiplyAddFloatingPoint(auVar7,auVar13,auVar16);
    auVar7 = vectorConvertToSignedFixedPointWordSaturate(auVar7,0);
    auVar7 = auVar7 >> 0x60 & (GPiece<16>)0xffffffff;
    in_vs39 = auVar7 | auVar7 << 0x20 | auVar7 << 0x40 | auVar7 << 0x60;
    uVar2 = storeVectorElementWordIndexed(in_vs39,0,lVar3);
    *(undefined4 *)((uint)lVar3 & 0xfffffffc) = uVar2;
    lVar3 = lVar3 + 4;
    lVar6 = lVar6 + -1;
  } while (lVar6 != 0);
  *(undefined4 *)(uVar1 + 0x30) = 0x40600000;
  *(undefined4 *)(uVar1 + 0x34) = 0x40866666;
  *(undefined4 *)(uVar1 + 0x38) = 0x40866666;
  *(undefined4 *)(uVar1 + 0x3c) = 0x40600000;
  return;
}


// 0x0399930 (0xf0 bytes)
// strings: 0039991c: '?fff_q' (raw)

/* Moby 470 */

void UpdateMoby_470(MobyInstance *moby)

{
  longlong lVar1;
  double dVar2;
  double dVar3;
  
  lVar1 = (longlong)(int)moby;
  if (moby->state == 0) {
    M470_003997f8(lVar1);
    dVar3 = 0.8999999761581421;
    moby->scale = moby->scale * 0.9;
    dVar2 = (double)GetGroundZ(0x3fe0000000000000,lVar1 + 0x10,0);
    if (ABS((float)(dVar2 - (double)(moby->pos).z)) < 1.0) {
      (moby->pos).z = (float)(dVar2 + dVar3);
    }
    moby->state = '\x01';
  }
  else if (moby->state < 2) {
    dVar2 = (double)FastWrapRot((moby->rotation).z,g_FrameTime * 4.1887903);
    (moby->rotation).z = (float)dVar2;
    M470_003994d8(lVar1);
  }
  return;
}


