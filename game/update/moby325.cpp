// game/update/moby325.cpp -- reconstructed from NPEA00385 EBOOT
// STATUS: NOT STARTED (raw Ghidra output)
// 1 functions, 0x3421a8-0x3426b8
#include "game/update/moby325.h"
#include "game/collproc.h"
#include "game/draw.h"
#include "game/hero.h"
#include "game/mobyfunc.h"
#include "game/mobyutil.h"
#include "game/partupd.h"
#include "idol/fastfunc.h"

// 0x03421a8 (0x510 bytes)
/* Moby 325 */

void UpdateMoby_325(MobyInstance *moby)

{
  float fVar1;
  float *pfVar2;
  f32 fVar3;
  uint uVar4;
  undefined1 uVar5;
  undefined2 uVar6;
  float fVar7;
  float fVar8;
  longlong lVar9;
  int iVar10;
  int iVar11;
  longlong lVar12;
  double dVar13;
  undefined8 uVar14;
  double dVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  GPiece<16> auVar18;
  GPiece<16> auVar19;
  GPiece<16> auVar20;
  
  lVar9 = (longlong)(int)moby;
  pfVar2 = (float *)moby->pVar;
  iVar10 = MB_randInt(2);
  if (iVar10 != 0) {
    RegisterPostDraw(&PTR_M327_00342950_0070c2c8,moby);
  }
  (moby->pos).x = (moby->pos).x + *pfVar2;
  (moby->pos).y = (moby->pos).y + pfVar2[1];
  (moby->pos).z = (moby->pos).z + pfVar2[2];
  fVar8 = DAT_0071f408;
  fVar7 = DAT_0071f408 * DAT_0083bd28;
  fVar1 = pfVar2[2];
  if (fVar7 < ABS(*pfVar2)) {
    *pfVar2 = *pfVar2 * ((DAT_0083bd24 - 1.0) * DAT_0071f408 + 1.0);
  }
  if (fVar7 < ABS(pfVar2[1])) {
    pfVar2[1] = pfVar2[1] * ((DAT_0083bd24 - 1.0) * fVar8 + 1.0);
  }
  uVar17 = 0;
  if (0 < (int)pfVar2[2]) {
    fVar1 = fVar1 * ((DAT_0083bd24 - 1.0) * fVar8 + 1.0);
  }
  pfVar2[2] = -(DAT_0071f40c * DAT_0083bd20 - fVar1);
  dVar13 = (double)FastWrapRot((moby->rotation).x,pfVar2[4]);
  (moby->rotation).x = (float)dVar13;
  dVar13 = (double)FastWrapRot((moby->rotation).y,pfVar2[5]);
  (moby->rotation).y = (float)dVar13;
  dVar13 = (double)FastWrapRot((moby->rotation).z,pfVar2[6]);
  fVar3 = (moby->pos).x;
  (moby->rotation).z = (float)dVar13;
  uVar4 = (int)fVar3 >> 0x1f;
  iVar10 = (uVar4 >> 1 ^ (uint)fVar3) - uVar4;
  if ((((0x3fffffff < iVar10) && (iVar10 < 0x447f4001)) &&
      (fVar3 = (moby->pos).y, uVar4 = (int)fVar3 >> 0x1f,
      iVar10 = (uVar4 >> 1 ^ (uint)fVar3) - uVar4, iVar10 < 0x447f4001 && 0x3fffffff < iVar10)) &&
     ((fVar3 = (moby->pos).z, uVar4 = (int)fVar3 >> 0x1f,
      iVar10 = (uVar4 >> 1 ^ (uint)fVar3) - uVar4, 0x3fffffff < iVar10 && (iVar10 < 0x447f4001)))) {
    iVar10 = FastDecTimerS32(pfVar2 + 8);
    if (iVar10 == 0) {
      lVar12 = lVar9 + 0x10;
      iVar10 = CollSphere(0x3fe0000000000000,lVar12,&DAT_00342178,0,pfVar2[9]);
      if (iVar10 == 0) {
        dVar13 = (double)animationSpeed;
        uVar17 = 0x40ed4c0000000000;
        MB_randRange
                  ((int)(dVar13 * 20.5),dVar13,0x40ed4c0000000000,(int)(dVar13 * 10.5),
                   (int)(dVar13 * 20.5));
        SpawnPart_21(uVar17,lVar12,&DAT_00a15d30,0x4f007fff,0x1fffffff);
        dVar13 = 40000.0;
        iVar10 = 0;
        dVar15 = 100000.0;
        uVar17 = 0x3f999999a0000000;
        uVar16 = 0x3ff0000000000000;
        auVar20 = loadVectorLeftIndexed(0x2c,0x342178);
        auVar20 = auVar20 >> 0x60 & (GPiece<16>)0xffffffff;
        auVar20 = auVar20 | auVar20 << 0x20 | auVar20 << 0x40 | auVar20 << 0x60;
        do {
          MB_randInt(6);
          MB_randInt(2);
          uVar14 = MB_randRangeFloat((float)dVar13,(float)dVar15);
          MB_randRange(0x30,0xff);
          uVar14 = SpawnPart_23(uVar17,uVar16,uVar16,uVar14,lVar12);
          iVar11 = (int)uVar14;
          if (iVar11 != 0) {
            auVar18 = ZEXT416(0xffffffff);
            auVar18 = auVar18 | auVar18 << 0x20 | auVar18 << 0x40 | auVar18 << 0x60;
            auVar18 = vectorShiftLeftIntegerWord(auVar18,auVar18);
            *(undefined1 *)(iVar11 + 3) = 0x44;
            auVar19 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
            auVar18 = vectorMultiplyAddFloatingPoint(auVar19,auVar20,auVar18);
            auVar18 = vectorConvertToSignedFixedPointWordSaturate(auVar18,0);
            auVar19 = vectorSplatHalfWord(auVar18,1);
            auVar18 = auVar18 >> 0x60 & (GPiece<16>)0xff;
            uVar6 = storeVectorElementHalfWordIndexed(auVar19,10,uVar14);
            *(undefined2 *)(iVar11 + 10) = uVar6;
            *(undefined4 *)(iVar11 + 0x24) = 2;
            *(undefined1 *)(iVar11 + 0x2a) = 0x60;
            uVar5 = storeVectorElementByteIndexed
                              (auVar18 | auVar18 << 8 | auVar18 << 0x10 | auVar18 << 0x18 |
                               auVar18 << 0x20 | auVar18 << 0x28 | auVar18 << 0x30 | auVar18 << 0x38
                               | auVar18 << 0x40 | auVar18 << 0x48 | auVar18 << 0x50 |
                               auVar18 << 0x58 | auVar18 << 0x60 | auVar18 << 0x68 | auVar18 << 0x70
                               | auVar18 << 0x78,0x2b,uVar14);
            *(undefined1 *)(iVar11 + 0x2b) = uVar5;
          }
          iVar10 = iVar10 + 1;
        } while (iVar10 < 2);
        return;
      }
    }
    uVar16 = 0x3ff0000000000000;
    MB_genericExplosion
              (uVar17,uVar17,0x3ff0000000000000,0x3fe0000000000000,0x4022000000000000,
               0x3ff0000000000000,0x402e000000000000,lVar9,pfVar2,lVar9 + 0x10,1,5,5,2,4);
    CollSphere(uVar16,lVar9 + 0x10,&g_heroMtx,0,g_heroMobyPtr);
    DeleteMoby(moby);
    return;
  }
  DeleteMoby(moby);
  return;
}


