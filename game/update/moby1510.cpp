// game/update/moby1510.cpp -- reconstructed from NPEA00385 EBOOT
// STATUS: NOT STARTED (raw Ghidra output)
// 1 functions, 0x28dfa8-0x28e4ec
#include "game/update/moby1510.h"
#include "game/collproc.h"
#include "game/draw.h"
#include "game/hero.h"
#include "game/mobyfunc.h"
#include "game/mobyutil.h"
#include "game/partupd.h"
#include "idol/fastfunc.h"

// 0x028dfa8 (0x544 bytes)
/* Moby 1510 */

void UpdateMoby_1510(MobyInstance *moby)

{
  float fVar1;
  float *pfVar2;
  f32 fVar3;
  uint uVar4;
  undefined1 uVar5;
  undefined2 uVar6;
  float fVar7;
  float fVar8;
  int iVar9;
  int iVar10;
  longlong lVar11;
  double dVar12;
  undefined8 uVar13;
  double dVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  GPiece<16> auVar17;
  GPiece<16> auVar18;
  GPiece<16> auVar19;
  
  pfVar2 = (float *)moby->pVar;
  iVar9 = MB_randInt(2);
  if (iVar9 != 0) {
    RegisterPostDraw(&PTR_M1511_0028e730_0070a888,moby);
  }
  (moby->pos).x = (moby->pos).x + *pfVar2;
  (moby->pos).y = (moby->pos).y + pfVar2[1];
  (moby->pos).z = (moby->pos).z + pfVar2[2];
  fVar8 = DAT_0071f408;
  fVar7 = DAT_0071f408 * DAT_00fada68;
  fVar1 = pfVar2[2];
  if (fVar7 < ABS(*pfVar2)) {
    *pfVar2 = *pfVar2 * ((DAT_007ab1e4 - 1.0) * DAT_0071f408 + 1.0);
  }
  if (fVar7 < ABS(pfVar2[1])) {
    pfVar2[1] = pfVar2[1] * ((DAT_007ab1e4 - 1.0) * fVar8 + 1.0);
  }
  uVar16 = 0;
  if (0 < (int)pfVar2[2]) {
    fVar1 = fVar1 * ((DAT_007ab1e4 - 1.0) * fVar8 + 1.0);
  }
  pfVar2[2] = -(DAT_0071f418 * DAT_007ab1e0 - fVar1);
  dVar12 = (double)FastWrapRot((moby->rotation).x,pfVar2[4]);
  (moby->rotation).x = (float)dVar12;
  dVar12 = (double)FastWrapRot((moby->rotation).y,pfVar2[5]);
  (moby->rotation).y = (float)dVar12;
  dVar12 = (double)FastWrapRot((moby->rotation).z,pfVar2[6]);
  fVar3 = (moby->pos).x;
  (moby->rotation).z = (float)dVar12;
  uVar4 = (int)fVar3 >> 0x1f;
  iVar9 = (uVar4 >> 1 ^ (uint)fVar3) - uVar4;
  uVar15 = 0x4000000000000000;
  if ((((0x3fffffff < iVar9) && (iVar9 < 0x447f4001)) &&
      (fVar3 = (moby->pos).y, uVar4 = (int)fVar3 >> 0x1f, iVar9 = (uVar4 >> 1 ^ (uint)fVar3) - uVar4
      , iVar9 < 0x447f4001 && 0x3fffffff < iVar9)) &&
     ((fVar3 = (moby->pos).z, uVar4 = (int)fVar3 >> 0x1f, iVar9 = (uVar4 >> 1 ^ (uint)fVar3) - uVar4
      , 0x3fffffff < iVar9 && (iVar9 < 0x447f4001)))) {
    lVar11 = (longlong)(int)moby + 0x10;
    iVar9 = CollSphere(0x4000000000000000,lVar11,0x40000000,0,pfVar2[9]);
    iVar10 = FastDecTimerS32(pfVar2 + 8);
    if (iVar10 != 0 || iVar9 != 0) {
      if (iVar9 != 0) {
        if (g_CollOutput.poly == 0) {
          pfVar2[3] = 0.0;
          pfVar2[2] = 0.0;
          pfVar2[1] = 0.0;
          *pfVar2 = 0.0;
        }
        else {
          FastVecNormalize(pfVar2,pfVar2,0xa10980);
        }
      }
      MB_genericExplosion
                (uVar16,uVar16,0x4010000000000000,uVar15,0x40f86a0000000000,0x4008000000000000,
                 0x402e000000000000,(longlong)(int)moby,pfVar2,lVar11,1,0xffffffffffffffff,0x14,3,4)
      ;
      DeleteMoby(moby);
      return;
    }
    dVar12 = (double)MB_randRangeFloat(0.5,1.5);
    dVar12 = (double)(float)(dVar12 * 210000.0);
    MB_randRange((int)(animationSpeed * 10.5),(int)(animationSpeed * 20.5));
    SpawnPart_21(dVar12,lVar11,&DAT_00a15d30,0x4f007fff,0x1fffffff);
    dVar12 = 40000.0;
    dVar14 = 100000.0;
    iVar9 = 0;
    uVar16 = 0x3f999999a0000000;
    uVar15 = 0x3ff0000000000000;
    auVar19 = loadVectorLeftIndexed(0x38,0x28df68);
    auVar19 = auVar19 >> 0x60 & (GPiece<16>)0xffffffff;
    auVar19 = auVar19 | auVar19 << 0x20 | auVar19 << 0x40 | auVar19 << 0x60;
    do {
      MB_randInt(6);
      MB_randInt(2);
      uVar13 = MB_randRangeFloat((float)dVar12,(float)dVar14);
      MB_randRange(0x30,0xff);
      uVar13 = SpawnPart_23(uVar16,uVar15,uVar15,uVar13,lVar11);
      iVar10 = (int)uVar13;
      if (iVar10 != 0) {
        auVar17 = ZEXT416(0xffffffff);
        auVar17 = auVar17 | auVar17 << 0x20 | auVar17 << 0x40 | auVar17 << 0x60;
        auVar17 = vectorShiftLeftIntegerWord(auVar17,auVar17);
        *(undefined1 *)(iVar10 + 3) = 0x44;
        auVar18 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
        auVar17 = vectorMultiplyAddFloatingPoint(auVar18,auVar19,auVar17);
        auVar17 = vectorConvertToSignedFixedPointWordSaturate(auVar17,0);
        auVar18 = vectorSplatHalfWord(auVar17,1);
        auVar17 = auVar17 >> 0x60 & (GPiece<16>)0xff;
        uVar6 = storeVectorElementHalfWordIndexed(auVar18,10,uVar13);
        *(undefined2 *)(iVar10 + 10) = uVar6;
        *(undefined4 *)(iVar10 + 0x24) = 2;
        *(undefined1 *)(iVar10 + 0x2a) = 0x60;
        uVar5 = storeVectorElementByteIndexed
                          (auVar17 | auVar17 << 8 | auVar17 << 0x10 | auVar17 << 0x18 |
                           auVar17 << 0x20 | auVar17 << 0x28 | auVar17 << 0x30 | auVar17 << 0x38 |
                           auVar17 << 0x40 | auVar17 << 0x48 | auVar17 << 0x50 | auVar17 << 0x58 |
                           auVar17 << 0x60 | auVar17 << 0x68 | auVar17 << 0x70 | auVar17 << 0x78,
                           0x2b,uVar13);
        *(undefined1 *)(iVar10 + 0x2b) = uVar5;
      }
      iVar9 = iVar9 + 1;
    } while (iVar9 < 2);
    return;
  }
  DeleteMoby(moby);
  return;
}


