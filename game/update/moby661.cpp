// game/update/moby661.cpp -- reconstructed from NPEA00385 EBOOT
// STATUS: NOT STARTED (raw Ghidra output)
// 3 functions, 0x40822c-0x40888c
#include "game/update/moby661.h"
#include "game/hero.h"
#include "game/mobyfunc.h"
#include "game/mobyutil.h"
#include "game/pause.h"
#include "game/update/moby58.h"
#include "game/vendor.h"
#include "idol/fastfunc.h"

// 0x040822c (0x14 bytes)
void M661_0040822c(void)

{
  DAT_00854ca8 = 0x10000;
  return;
}


// 0x0408248 (0x98 bytes)
int M661_00408248(void)

{
  GPiece<16> auVar1;
  undefined8 in_r0;
  ulonglong uVar2;
  ulonglong uVar3;
  int iVar4;
  int iVar5;
  byte in_cr6;
  GPiece<16> auVar6;
  GPiece<16> auVar7;
  GPiece<16> auVar8;
  GPiece<16> auVar9;
  
  auVar1 = ZEXT416(0xfffffff0);
  iVar4 = 0;
  uVar3 = ZEXT48(&DAT_00737d3e);
  iVar5 = 0;
  auVar6 = loadVectorLeftIndexed(in_r0,0x408240);
  uVar2 = ZEXT48(&currentAmmoArray);
  auVar6 = auVar6 >> 0x60 & (GPiece<16>)0xffffffff;
  do {
    auVar7 = loadVectorLeftIndexed(in_r0,uVar3);
    auVar8 = loadVectorRightIndexed(0x10,uVar3);
    auVar7 = vectorShiftRightWord
                       (auVar7 | auVar8,auVar1 | auVar1 << 0x20 | auVar1 << 0x40 | auVar1 << 0x60);
    if (*(short *)uVar3 != 0) {
      auVar8 = vectorConvertFromUnsignedFixedPointWord(auVar7,0);
      auVar7 = ZEXT416(0xffffffff);
      auVar7 = auVar7 | auVar7 << 0x20 | auVar7 << 0x40 | auVar7 << 0x60;
      auVar9 = loadVectorLeftIndexed(in_r0,uVar2);
      auVar9 = vectorConvertFromSignedFixedPointWord(auVar9,0);
      auVar7 = vectorShiftLeftIntegerWord(auVar7,auVar7);
      auVar8 = vectorMultiplyAddFloatingPoint
                         (auVar8,auVar6 | auVar6 << 0x20 | auVar6 << 0x40 | auVar6 << 0x60,auVar7);
      auVar7 = auVar9 >> 0x60 & (GPiece<16>)0xffffffff;
      auVar8 = auVar8 >> 0x60 & (GPiece<16>)0xffffffff;
      vectorCompareGreaterThanOrEqualToFloatingPoint
                (auVar7 | auVar7 << 0x20 | auVar7 << 0x40 | auVar7 << 0x60,
                 auVar8 | auVar8 << 0x20 | auVar8 << 0x40 | auVar8 << 0x60);
      if ((bool)(in_cr6 >> 1 & 1)) {
        iVar5 = iVar5 + 1;
      }
    }
    iVar4 = iVar4 + 1;
    uVar2 = uVar2 + 4;
    uVar3 = uVar3 + 0x18;
  } while (iVar4 < 0x25);
  return iVar5;
}


// 0x0408328 (0x564 bytes)
// strings: 0096c08c: 'None'

/* Moby 661 */

void UpdateMoby_661(MobyInstance *moby)

{
  byte bVar1;
  float fVar2;
  float fVar3;
  void *pvVar4;
  float fVar5;
  float fVar6;
  longlong lVar7;
  undefined4 uVar9;
  MobyInstance *pMVar10;
  int iVar11;
  ulonglong uVar8;
  ulonglong uVar12;
  int iVar13;
  ulonglong uVar14;
  byte bVar15;
  undefined8 in_LR;
  double dVar16;
  double dVar17;
  double dVar18;
  double dVar19;
  double dVar20;
  double dVar21;
  double dVar22;
  GPiece<16> auVar23;
  GPiece<16> auVar24;
  GPiece<16> auVar25;
  GPiece<16> auVar26;
  GPiece<16> auVar27;
  GPiece<16> local_50;
  
  lVar7 = (longlong)(int)moby;
  bVar1 = moby->state;
  pvVar4 = moby->pVar;
  uVar14 = ZEXT48(pvVar4);
  bVar15 = (bVar1 == 0) << 1;
  if (bVar1 < 2) {
    if (bVar1 == 0) {
      moby->state = '\x01';
      (moby->pos).z = (moby->pos).z + 4.0;
      dVar16 = (double)GetGroundZ(0x3fe0000000000000,lVar7 + 0x10,0);
      (moby->pos).z = (float)dVar16;
      if (g_CollOutput.pMoby == (MobyInstance *)0x0) {
        return;
      }
      iVar11 = MB_PlatformWorldToLocal
                         (lVar7,g_CollOutput.pMoby,lVar7 + 0x10,lVar7 + 0x40,uVar14,uVar14 + 0x10);
      if (iVar11 == 0) {
        return;
      }
      *(MobyInstance **)((int)pvVar4 + 0x20) = g_CollOutput.pMoby;
      return;
    }
    fVar2 = (moby->rotation).y;
    fVar3 = (moby->rotation).x;
    if (0.034906585 < SQRT(fVar3 * fVar3 + fVar2 * fVar2)) {
      moby->state = '\x03';
      return;
    }
    if (((g_heroState == MOVEMENT_LOCKED) &&
        (pMVar10 = *(MobyInstance **)((int)pvVar4 + 0x24), pMVar10 != (MobyInstance *)0x0)) &&
       (pMVar10->state != 0xfd && pMVar10->state != 0xfe)) {
      DeleteMoby(pMVar10);
      *(undefined4 *)((int)pvVar4 + 0x24) = 0;
      *(undefined4 *)((int)pvVar4 + 0x2c) = 0xffffffff;
      dVar16 = (double)MB_randRangeFloat(600.0,1200.0);
      uVar9 = FastDoubleToInt((double)(float)(dVar16 * (double)animationSpeed));
      *(undefined4 *)((int)pvVar4 + 0x28) = uVar9;
    }
    pMVar10 = *(MobyInstance **)((int)pvVar4 + 0x24);
    if ((pMVar10 != (MobyInstance *)0x0) && ((pMVar10->state == 0xfe || (pMVar10->state == 0xfd))))
    {
      *(undefined4 *)((int)pvVar4 + 0x24) = 0;
      *(undefined4 *)((int)pvVar4 + 0x2c) = 0xffffffff;
      dVar16 = (double)MB_randRangeFloat(600.0,1200.0);
      uVar9 = FastDoubleToInt((double)(float)(dVar16 * (double)animationSpeed));
      pMVar10 = *(MobyInstance **)((int)pvVar4 + 0x24);
      *(undefined4 *)((int)pvVar4 + 0x28) = uVar9;
    }
    if (((pMVar10 != (MobyInstance *)0x0) && (pMVar10->enabled == '\0')) &&
       ((int)(uint)(ushort)(&DAT_00737d3e)[*(int *)((int)pvVar4 + 0x2c) * 0xc] <=
        (int)(&currentAmmoArray.field0_0x0)[*(int *)((int)pvVar4 + 0x2c)])) {
      DeleteMoby(pMVar10);
      pMVar10 = (MobyInstance *)0x0;
      *(undefined4 *)((int)pvVar4 + 0x24) = 0;
      *(undefined4 *)((int)pvVar4 + 0x2c) = 0xffffffff;
    }
    fVar2 = (moby->pos).y - g_heroPosition.y;
    fVar3 = (moby->pos).x - g_heroPosition.x;
    dVar16 = 4.0;
    if ((pMVar10 == (MobyInstance *)0x0 && 4.0 < SQRT(fVar3 * fVar3 + fVar2 * fVar2)) &&
       (iVar11 = FastDecTimerS32(uVar14 + 0x28), iVar11 != 0)) {
      auVar23 = ZEXT416(0xfffffff0);
      iVar11 = 0;
      uVar8 = ZEXT48(&currentAmmoArray);
      auVar24 = loadVectorLeftIndexed(0x14,0x4082e0);
      iVar13 = 0;
      uVar12 = ZEXT48(&DAT_00737d3e);
      auVar24 = auVar24 >> 0x60 & (GPiece<16>)0xffffffff;
      do {
        auVar25 = loadVectorLeftIndexed(in_LR,uVar12);
        auVar26 = loadVectorRightIndexed(0x10,uVar12);
        auVar25 = vectorShiftRightWord
                            (auVar25 | auVar26,
                             auVar23 | auVar23 << 0x20 | auVar23 << 0x40 | auVar23 << 0x60);
        if (*(short *)uVar12 != 0) {
          auVar26 = vectorConvertFromUnsignedFixedPointWord(auVar25,0);
          auVar25 = ZEXT416(0xffffffff);
          auVar25 = auVar25 | auVar25 << 0x20 | auVar25 << 0x40 | auVar25 << 0x60;
          auVar27 = loadVectorLeftIndexed(in_LR,uVar8);
          auVar27 = vectorConvertFromSignedFixedPointWord(auVar27,0);
          auVar25 = vectorShiftLeftIntegerWord(auVar25,auVar25);
          auVar26 = vectorMultiplyAddFloatingPoint
                              (auVar26,auVar24 | auVar24 << 0x20 | auVar24 << 0x40 | auVar24 << 0x60
                               ,auVar25);
          auVar25 = auVar27 >> 0x60 & (GPiece<16>)0xffffffff;
          auVar26 = auVar26 >> 0x60 & (GPiece<16>)0xffffffff;
          vectorCompareGreaterThanOrEqualToFloatingPoint
                    (auVar25 | auVar25 << 0x20 | auVar25 << 0x40 | auVar25 << 0x60,
                     auVar26 | auVar26 << 0x20 | auVar26 << 0x40 | auVar26 << 0x60);
          if ((bool)(bVar15 >> 1 & 1)) {
            iVar13 = iVar13 + 1;
          }
        }
        iVar11 = iVar11 + 1;
        uVar8 = uVar8 + 4;
        uVar12 = uVar12 + 0x18;
      } while (iVar11 < 0x25);
      if (iVar13 < 3) {
        auVar23 = ZEXT416(0xffffffff);
        auVar23 = auVar23 | auVar23 << 0x20 | auVar23 << 0x40 | auVar23 << 0x60;
        auVar24 = vectorShiftLeftIntegerWord(auVar23,auVar23);
        auVar23 = loadVectorLeftIndexed(0x40,0x4082e0);
        auVar23 = auVar23 >> 0x60 & (GPiece<16>)0xffffffff;
        auVar25 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
        auVar23 = vectorMultiplyAddFloatingPoint
                            (auVar25,auVar23 | auVar23 << 0x20 | auVar23 << 0x40 | auVar23 << 0x60,
                             auVar24);
        auVar23 = vectorConvertToSignedFixedPointWordSaturate(auVar23,0);
        auVar23 = auVar23 >> 0x60 & (GPiece<16>)0xffffffff;
        uVar9 = storeVectorElementWordIndexed
                          (auVar23 | auVar23 << 0x20 | auVar23 << 0x40 | auVar23 << 0x60,0x28,uVar14
                          );
        *(undefined4 *)((int)pvVar4 + 0x28U & 0xfffffffc) = uVar9;
      }
      else {
        MB_DropAmmo(lVar7,local_50);
        if ((int)g_SkillPoints.piece<28,4>() < (int)(uint)DAT_00737d26) {
          iVar11 = FUN_002ea758(lVar7 + 0x10,0xffffffff,0xffffffffffffffff,0);
          *(int *)((int)pvVar4 + 0x24) = iVar11;
          if (iVar11 != 0) {
            *(undefined4 *)((int)pvVar4 + 0x2c) = 0xffffffff;
            iVar11 = *(int *)(iVar11 + 0x78);
            dVar17 = (double)MB_randRot();
            dVar18 = (double)MB_randRangeFloat(0.0,3.0);
            fVar2 = (float)(dVar17 + 1.570796251296997);
            dVar21 = (double)(float)(3.141592502593994 - dVar17);
            if (dVar17 - (double)(float)(3.141592502593994 - dVar17) < 0.0) {
              dVar21 = dVar17;
            }
            fVar3 = 3.1415925 - fVar2;
            if (fVar2 - (3.1415925 - fVar2) < 0.0) {
              fVar3 = fVar2;
            }
            dVar19 = (double)(float)(-3.141592502593994 - dVar17);
            if ((double)(float)(-3.141592502593994 - dVar17) - dVar21 < 0.0) {
              dVar19 = dVar21;
            }
            dVar21 = (double)g_FrameTime;
            fVar5 = -3.1415925 - fVar2;
            if ((-3.1415925 - fVar2) - fVar3 < 0.0) {
              fVar5 = fVar3;
            }
            dVar17 = (double)(float)(dVar19 * dVar19);
            fVar6 = fVar5 * fVar5;
            dVar22 = (double)(float)(dVar17 * (double)(float)(dVar17 * dVar19));
            *(undefined4 *)(iVar11 + 0x18) = 0;
            fVar2 = fVar6 * fVar6 * fVar5;
            dVar20 = (double)(float)(dVar17 * dVar22);
            fVar3 = fVar6 * fVar2;
            *(float *)(iVar11 + 0x14) =
                 ((float)(dVar17 * dVar20) * 2.601887e-06 +
                 (float)(dVar20 * -0.0001980741071747616 +
                        (double)(float)(dVar22 * 0.008333025500178337 +
                                       (double)(float)((double)(float)(dVar17 * dVar19) *
                                                       -0.16666656732559204 + dVar19)))) *
                 (float)(dVar18 * dVar21);
            *(float *)(iVar11 + 0x10) =
                 (fVar6 * fVar3 * 2.601887e-06 +
                 fVar3 * -0.0001980741 + fVar2 * 0.0083330255 + fVar6 * fVar5 * -0.16666657 + fVar5)
                 * (float)(dVar18 * dVar21);
            dVar16 = (double)MB_randRangeFloat(2.0,(float)dVar16);
            *(float *)(iVar11 + 0x18) = (float)(dVar16 * (double)g_FrameTime);
          }
        }
      }
    }
  }
  else if (bVar1 != 3) {
    return;
  }
  MB_PlatformGetDelta
            (lVar7,*(undefined4 *)((int)pvVar4 + 0x20),uVar14,uVar14 + 0x10,lVar7 + 0x10,
             lVar7 + 0x40);
  return;
}


