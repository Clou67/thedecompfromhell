// game/update/moby567.cpp -- reconstructed from NPEA00385 EBOOT
// STATUS: NOT STARTED (raw Ghidra output)
// 2 functions, 0x3bbc08-0x3bc494
#include "game/update/moby567.h"
#include "game/collproc.h"
#include "game/hero.h"
#include "game/mobyfunc.h"
#include "game/mobyproc.h"
#include "game/mobyutil.h"
#include "game/partupd.h"
#include "idol/fastfunc.h"

// 0x03bbc08 (0x14c bytes)
MobyInstance *
FUN_003bbc08(double param_1,undefined4 *param_2,f32 *param_3,undefined4 param_4,undefined4 param_5)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  MobyInstance *pMVar4;
  GPiece<16> auVar5;
  GPiece<16> auVar6;
  GPiece<16> auVar7;
  
  uVar3 = 0x70;
  auVar6.piece<0,4>() = param_5;
  auVar6.piece<4,4>() = param_5;
  auVar6.piece<8,4>() = param_5;
  auVar6.piece<12,4>() = param_5;
  pMVar4 = CreateMoby(ROCKET_0237);
  if (pMVar4 != (MobyInstance *)0x0) {
    auVar5 = vectorConvertFromSignedFixedPointWord(auVar6,0);
    auVar6 = ZEXT416(0xffffffff);
    auVar7 = auVar6 | auVar6 << 0x20 | auVar6 << 0x40 | auVar6 << 0x60;
    pMVar4->updateDistance = -1;
    pMVar4->drawDistance = 0x7e;
    pMVar4->enabled = '\x01';
    pMVar4->state = '\x01';
    puVar1 = (undefined4 *)pMVar4->pVar;
    (pMVar4->pos).x = *param_3;
    (pMVar4->pos).y = param_3[1];
    (pMVar4->pos).z = param_3[2];
    (pMVar4->pos).w = param_3[3];
    *puVar1 = *param_2;
    puVar1[1] = param_2[1];
    puVar1[2] = param_2[2];
    puVar1[3] = param_2[3];
    auVar6 = loadVectorLeftIndexed(uVar3,0x3bbc00);
    auVar6 = auVar6 >> 0x60 & (GPiece<16>)0xffffffff;
    auVar6 = vectorAddFloatingPoint
                       (auVar5,auVar6 | auVar6 << 0x20 | auVar6 << 0x40 | auVar6 << 0x60);
    auVar5 = vectorShiftLeftIntegerWord(auVar7,auVar7);
    auVar7 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
    auVar6 = vectorMultiplyAddFloatingPoint(auVar7,auVar6,auVar5);
    auVar6 = vectorConvertToSignedFixedPointWordSaturate(auVar6,0);
    auVar6 = auVar6 >> 0x60 & (GPiece<16>)0xffffffff;
    uVar2 = storeVectorElementWordIndexed
                      (auVar6 | auVar6 << 0x20 | auVar6 << 0x40 | auVar6 << 0x60,0x14,ZEXT48(puVar1)
                      );
    *(undefined4 *)((uint)(puVar1 + 5) & 0xfffffffc) = uVar2;
    puVar1[4] = param_4;
    puVar1[6] = (float)param_1;
    UpdateMobyTransform(pMVar4);
  }
  return pMVar4;
}


// 0x03bbde8 (0x6ac bytes)
// inlined: FastAtan2 @0x3bbf20
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Moby 567 */

void UpdateMoby_567(MobyInstance *moby)

{
  longlong lVar1;
  byte bVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  f32 fVar6;
  float fVar7;
  float *pfVar8;
  undefined4 uVar9;
  undefined2 uVar10;
  ulonglong *puVar11;
  int iVar12;
  MobyInstance *pMVar13;
  ulonglong uVar14;
  longlong lVar15;
  int iVar17;
  undefined8 uVar16;
  ulonglong uVar18;
  longlong lVar19;
  longlong lVar20;
  float *pfVar21;
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
  ulonglong in_f30;
  double dVar26;
  ulonglong in_f31;
  double dVar27;
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
  
  lVar15 = (longlong)(int)moby;
  uVar14 = ZEXT48(&stack0x00000000);
  lVar1 = uVar14 - 0x140;
  puVar11 = (ulonglong *)lVar1;
  *puVar11 = uVar14;
  puVar11[0x2a] = in_LR;
  puVar11[0x26] = in_f30;
  puVar11[0x27] = in_f31;
  puVar11[0x25] = unaff_r31;
  bVar2 = moby->state;
  puVar11[0x24] = unaff_r30;
  pfVar8 = (float *)moby->pVar;
  puVar11[0x23] = unaff_r29;
  puVar11[0x22] = unaff_r28;
  puVar11[0x21] = unaff_r27;
  puVar11[0x20] = unaff_r26;
  if (bVar2 < 2) {
    if (bVar2 != 0) {
      fVar3 = (moby->pos).x;
      fVar4 = (moby->pos).y;
      *(float *)(puVar11 + 0xe) = fVar3;
      fVar5 = (moby->pos).z;
      *(float *)((int)puVar11 + 0x74) = fVar4;
      fVar6 = (moby->pos).w;
      *(float *)(puVar11 + 0xf) = fVar5;
      *(f32 *)((int)puVar11 + 0x7c) = fVar6;
      (moby->pos).x = fVar3 + *pfVar8;
      (moby->pos).y = fVar4 + pfVar8[1];
      (moby->pos).z = fVar5 + pfVar8[2];
      fVar3 = *pfVar8;
      fVar4 = pfVar8[1];
      fVar7 = ABS(*pfVar8);
      fVar5 = ABS(pfVar8[1]);
      *(float *)(puVar11 + 0x18) = fVar7 - fVar5;
      dVar27 = 0.0;
      uVar18 = (ulonglong)((uint)fVar3 >> 0x1c) & 8 |
               (ulonglong)(*(uint *)(puVar11 + 0x18) >> 0x1e) & 2 |
               (ulonglong)((uint)fVar4 >> 0x1d) & 4;
      fVar3 = *(float *)(&g_atanQuadrantTable + (int)(uVar18 << 2));
      fVar4 = fVar7;
      if (*(float *)(puVar11 + 0x18) - 0.0 < 0.0) {
        fVar4 = fVar5;
      }
      if (*(float *)(puVar11 + 0x18) - 0.0 < 0.0) {
        fVar5 = fVar7;
      }
      fVar7 = *(float *)(((uint)(uVar18 << 2) | 0x735900) + 4);
      dVar26 = dVar27;
      if (0.0 < fVar4) {
        lVar20 = uVar14 - 0x130;
        lVar22 = uVar14 - 0x6c;
        lVar19 = uVar14 - 0x7c;
        lVar23 = 2;
        fVar4 = (fVar5 - fVar4) / (fVar5 + fVar4);
        fVar5 = fVar4 * fVar4;
        *(float *)(puVar11 + 0x1a) = fVar4;
        *(float *)(puVar11 + 0x19) = fVar4;
        *(float *)((int)puVar11 + 0xcc) = fVar4;
        *(float *)((int)puVar11 + 0xc4) = fVar4;
        fVar4 = fVar5 * fVar5;
        *(float *)(puVar11 + 0x19) = *(float *)(puVar11 + 0x19) * fVar5;
        *(float *)((int)puVar11 + 0xcc) = *(float *)((int)puVar11 + 0xcc) * fVar4;
        *(float *)(puVar11 + 0x1a) = *(float *)(puVar11 + 0x1a) * fVar4 * fVar5;
        do {
          *(float *)((int)lVar20 + 0xc4) = *(float *)((int)lVar20 + 0xb4) * fVar4 * fVar4;
          iVar17 = (int)lVar19;
          lVar19 = lVar19 + 8;
          lVar20 = lVar20 + 8;
          *(float *)((int)lVar22 + 4) = *(float *)(iVar17 + 4) * fVar4 * fVar4;
          lVar22 = lVar22 + 8;
          lVar23 = lVar23 + -1;
        } while (lVar23 != 0);
        lVar20 = uVar14 - 0x7c;
        lVar23 = 4;
        pfVar21 = (float *)&DAT_007358e0;
        lVar22 = lVar20;
        lVar19 = lVar1;
        do {
          fVar4 = *pfVar21;
          fVar5 = pfVar21[1];
          pfVar21 = pfVar21 + 2;
          *(float *)((int)lVar19 + 0xc4) = *(float *)((int)lVar19 + 0xc4) * fVar4;
          lVar19 = lVar19 + 8;
          *(float *)((int)lVar22 + 4) = *(float *)((int)lVar22 + 4) * fVar5;
          lVar22 = lVar22 + 8;
          lVar23 = lVar23 + -1;
        } while (lVar23 != 0);
        lVar19 = 2;
        lVar22 = lVar1;
        do {
          iVar17 = (int)lVar22;
          lVar22 = lVar22 + 0x10;
          iVar12 = (int)lVar20;
          lVar20 = lVar20 + 0x10;
          dVar26 = (double)((float)(dVar26 + (double)*(float *)(iVar17 + 0xc4)) +
                            *(float *)(iVar12 + 4) + *(float *)(iVar12 + 8) +
                           *(float *)(iVar12 + 0xc));
          lVar19 = lVar19 + -1;
        } while (lVar19 != 0);
        dVar26 = (double)((float)(dVar26 + 0.7853981852531433) * fVar3 + fVar7);
      }
      (moby->rotation).z = (float)dVar26;
      lVar22 = lVar15 + 0x10;
      *(undefined4 *)((int)puVar11 + 0x8c) = 0;
      *(undefined4 *)(puVar11 + 0x11) = 0;
      *(undefined4 *)((int)puVar11 + 0x84) = 0;
      *(undefined4 *)(puVar11 + 0x10) = 0;
      iVar17 = MB_randRange(0xf,0x16);
      puVar11[0x1d] = (longlong)iVar17;
      dVar26 = 0.5;
      puVar11[0x1d] =
           (longlong)(int)(animationSpeed * (float)((double)(longlong)puVar11[0x1d] + 0.5));
      uVar9 = *(undefined4 *)((int)puVar11 + 0xec);
      uVar16 = MB_randRange(0x14,0x23);
      SpawnPart_4(lVar22,uVar14 - 0xc0,0x6f00afff,0xff,uVar9,0x28,uVar16,1);
      iVar17 = MB_randRange(0x1e,0x3c);
      puVar11[0x1d] = (longlong)iVar17;
      puVar11[0x1d] =
           (longlong)(int)(animationSpeed * (float)((double)(longlong)puVar11[0x1d] + dVar26));
      uVar9 = *(undefined4 *)((int)puVar11 + 0xec);
      uVar16 = MB_randRange(0x32,0x4b);
      SpawnPart_4(lVar22,uVar14 - 0xc0,0x1fffffff,0x4f4f4f,uVar9,0x28,uVar16,0);
      dVar24 = (double)GetGroundZ(dVar26,lVar22,0);
      dVar25 = (double)(moby->pos).z;
      fVar3 = pfVar8[6];
      dVar26 = dVar27;
      if (fVar3 <= (float)(dVar25 - dVar24)) {
        if ((double)(DAT_00969f88 + fVar3) <= dVar25) {
          dVar26 = -(double)(DAT_0071f418 * 10.8 - pfVar8[2]);
        }
      }
      else {
        (moby->pos).z = (float)(dVar25 + (double)(fVar3 - (float)(dVar25 - dVar24)));
      }
      pfVar8[2] = (float)dVar26;
      iVar17 = CollLine(lVar22,uVar14 - 0xd0,0,pfVar8[4],0);
      if (iVar17 != 0) {
        if (g_CollOutput.pMoby != (MobyInstance *)0x0) {
          SetCollDamIn
                    (0x3ff0000000000000,uVar14 - 0xb0,lVar15,0x10001,&DAT_003bbd60,pfVar8);
          pMVar13 = g_CollOutput.pMoby;
          auVar38 = ZEXT416(0xffffffff);
          auVar28 = auVar38 | auVar38 << 0x20 | auVar38 << 0x40 | auVar38 << 0x60;
          auVar38 = ZEXT416(0xfffffff0);
          auVar29 = ZEXT416(0);
          auVar33 = auVar29 | auVar29 << 0x20 | auVar29 << 0x40 | auVar29 << 0x60;
          auVar29 = vectorShiftLeftIntegerWord(auVar28,auVar28);
          auVar32 = loadVectorLeftIndexed(0x94,lVar1);
          auVar28 = vectorMultiplyAddFloatingPoint(auVar32,auVar32,auVar29);
          auVar31 = loadVectorLeftIndexed(0x90,lVar1);
          auVar29 = loadVectorLeftIndexed(0xa6,lVar15);
          auVar29 = vectorShiftRightWord
                              (auVar29,auVar38 | auVar38 << 0x20 | auVar38 << 0x40 | auVar38 << 0x60
                              );
          auVar28 = vectorMultiplyAddFloatingPoint(auVar31,auVar31,auVar28);
          auVar38 = auVar33;
          if ((double)SQRT(*(float *)(puVar11 + 0x12) * *(float *)(puVar11 + 0x12) +
                           *(float *)((int)puVar11 + 0x94) * *(float *)((int)puVar11 + 0x94)) !=
              dVar27) {
            auVar30 = vectorReciprocalSquareRootEstimateFloatingPoint(auVar28);
            auVar38 = ZEXT416(0xffffffff);
            auVar33 = auVar38 | auVar38 << 0x20 | auVar38 << 0x40 | auVar38 << 0x60;
            auVar38 = ZEXT416(0xffffffff);
            auVar34 = auVar38 | auVar38 << 0x20 | auVar38 << 0x40 | auVar38 << 0x60;
            auVar38 = ZEXT416(0xffffffff);
            auVar38 = auVar38 | auVar38 << 0x20 | auVar38 << 0x40 | auVar38 << 0x60;
            auVar33 = vectorShiftLeftIntegerWord(auVar33,auVar33);
            auVar35 = vectorShiftLeftIntegerWord(auVar34,auVar34);
            auVar39 = vectorShiftLeftIntegerWord(auVar38,auVar38);
            auVar38 = loadVectorLeftIndexed(8,0x3bbd60);
            auVar34 = loadVectorLeftIndexed(0x10,0x3bbd60);
            auVar38 = auVar38 >> 0x60 & (GPiece<16>)0xffffffff;
            auVar36 = auVar38 | auVar38 << 0x20 | auVar38 << 0x40 | auVar38 << 0x60;
            auVar38 = auVar34 >> 0x60 & (GPiece<16>)0xffffffff;
            auVar37 = auVar38 | auVar38 << 0x20 | auVar38 << 0x40 | auVar38 << 0x60;
            auVar38 = ZEXT416(0xffffffff);
            auVar40 = auVar38 | auVar38 << 0x20 | auVar38 << 0x40 | auVar38 << 0x60;
            auVar34 = vectorMultiplyAddFloatingPoint(auVar28,auVar30,auVar33);
            auVar35 = vectorMultiplyAddFloatingPoint(auVar36,auVar30,auVar35);
            auVar38 = ZEXT416(0xffffffff);
            auVar41 = auVar38 | auVar38 << 0x20 | auVar38 << 0x40 | auVar38 << 0x60;
            auVar40 = vectorShiftLeftIntegerWord(auVar40,auVar40);
            auVar38 = ZEXT416(0xffffffff);
            auVar33 = auVar38 | auVar38 << 0x20 | auVar38 << 0x40 | auVar38 << 0x60;
            auVar38 = vectorNegativeMultiplySubtractFloatingPoint(auVar34,auVar30,auVar37);
            auVar30 = vectorMultiplyAddFloatingPoint(auVar38,auVar35,auVar30);
            auVar34 = vectorShiftLeftIntegerWord(auVar41,auVar41);
            auVar38 = ZEXT416(0xffffffff);
            auVar35 = auVar38 | auVar38 << 0x20 | auVar38 << 0x40 | auVar38 << 0x60;
            auVar38 = ZEXT416(0xffffffff);
            auVar38 = auVar38 | auVar38 << 0x20 | auVar38 << 0x40 | auVar38 << 0x60;
            auVar35 = vectorShiftLeftIntegerWord(auVar35,auVar35);
            auVar41 = vectorShiftLeftIntegerWord(auVar38,auVar38);
            auVar38 = vectorMultiplyAddFloatingPoint(auVar28,auVar30,auVar39);
            auVar39 = vectorMultiplyAddFloatingPoint(auVar36,auVar30,auVar40);
            auVar38 = vectorNegativeMultiplySubtractFloatingPoint(auVar38,auVar30,auVar37);
            auVar38 = vectorMultiplyAddFloatingPoint(auVar38,auVar39,auVar30);
            auVar30 = vectorShiftLeftIntegerWord(auVar33,auVar33);
            auVar28 = vectorMultiplyAddFloatingPoint(auVar28,auVar38,auVar34);
            auVar33 = vectorMultiplyAddFloatingPoint(auVar36,auVar38,auVar35);
            auVar28 = vectorNegativeMultiplySubtractFloatingPoint(auVar28,auVar38,auVar37);
            auVar28 = vectorMultiplyAddFloatingPoint(auVar28,auVar33,auVar38);
            auVar38 = vectorMultiplyAddFloatingPoint(auVar32,auVar28,auVar41);
            auVar33 = vectorMultiplyAddFloatingPoint(auVar31,auVar28,auVar30);
          }
          auVar28 = auVar33 >> 0x60 & (GPiece<16>)0xffffffff;
          auVar31 = auVar38 >> 0x60 & (GPiece<16>)0xffffffff;
          uVar9 = storeVectorElementWordIndexed
                            (auVar28 | auVar28 << 0x20 | auVar28 << 0x40 | auVar28 << 0x60,0x90,
                             lVar1);
          *(undefined4 *)(puVar11 + 0x12) = uVar9;
          uVar9 = storeVectorElementWordIndexed
                            (auVar31 | auVar31 << 0x20 | auVar31 << 0x40 | auVar31 << 0x60,0x94,
                             lVar1);
          *(undefined4 *)((int)puVar11 + 0x94) = uVar9;
          *(undefined4 *)(puVar11 + 0x13) = 0x3f800000;
          auVar28 = vectorSplatHalfWord(auVar29,1);
          *(undefined4 *)((int)puVar11 + 0x9c) = 0x45afdf66;
          *(undefined1 *)(puVar11 + 0x15) = 0;
          *(undefined1 *)((int)puVar11 + 0xa9) = 1;
          uVar10 = storeVectorElementHalfWordIndexed(auVar28,0xaa,lVar1);
          *(undefined2 *)((int)puVar11 + 0xaa) = uVar10;
          auVar31 = loadVectorLeftIndexed(0x50,0x3bbd60);
          auVar28 = vectorPermute(auVar33,auVar38,_DAT_003bbd90);
          auVar38 = auVar31 >> 0x60 & (GPiece<16>)0xffffffff;
          auVar28 = vectorPermute(auVar28,_DAT_003bbd80,_DAT_003bbda0);
          auVar38 = vectorPermute(auVar29,auVar38 | auVar38 << 0x20 | auVar38 << 0x40 |
                                          auVar38 << 0x60,_DAT_003bbdc0);
          auVar38 = vectorPermute(auVar38,*(undefined1 (*) [16])(puVar11 + 0x14),_DAT_003bbdd0);
          *(undefined1 (*) [16])(puVar11 + 8) = auVar28;
          *(undefined4 *)((int)puVar11 + 0x6c) = *(undefined4 *)((int)puVar11 + 0xbc);
          *(undefined4 *)(puVar11 + 0xd) = *(undefined4 *)(puVar11 + 0x17);
          *(undefined4 *)((int)puVar11 + 100) = *(undefined4 *)((int)puVar11 + 0xb4);
          *(undefined4 *)(puVar11 + 0xc) = *(undefined4 *)(puVar11 + 0x16);
          *(undefined1 (*) [16])(puVar11 + 10) = auVar38;
          CollDamageMobyDirect
                    (pMVar13,0xb0,puVar11[8],puVar11[9],puVar11[10],puVar11[0xb],puVar11[0xc],
                     puVar11[0xd]);
        }
        moby->state = '\x02';
      }
      iVar17 = FastDecTimerS32(pfVar8 + 5);
      if (iVar17 != 0) {
        moby->state = '\x02';
      }
    }
  }
  else if (bVar2 < 3) {
    MB_SpawnExplosionSparks
              (0x3fd0000000000000,0x402a000000000000,lVar15,lVar15 + 0x10,&DAT_003bbd60,
               0xffffffffffffffff);
    DeleteMoby(moby);
  }
  return;
}


