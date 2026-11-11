// game/update/moby198.cpp -- reconstructed from NPEA00385 EBOOT
// STATUS: NOT STARTED (raw Ghidra output)
// 1 functions, 0x2e5088-0x2e5628
#include "game/update/moby198.h"
#include "game/collproc.h"
#include "game/hero.h"
#include "game/mobyfunc.h"
#include "game/mobyutil.h"
#include "idol/fastfunc.h"

// 0x02e5088 (0x5a0 bytes)
/* Moby 198 */

void UpdateMoby_198(MobyInstance *moby)

{
  byte bVar1;
  float fVar2;
  f32 fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  void *pvVar7;
  MobyClass *pMVar8;
  int iVar9;
  void *pvVar10;
  undefined4 uVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  MobyInstance *pMVar17;
  int iVar19;
  longlong lVar18;
  longlong lVar20;
  ulonglong uVar21;
  int iVar22;
  ulonglong uVar23;
  double dVar24;
  GPiece<16> auVar25;
  GPiece<16> auVar26;
  GPiece<16> auVar27;
  GPiece<16> auVar28;
  
  pvVar7 = moby->pVar;
  uVar23 = ZEXT48(pvVar7);
  iVar19 = MB_damage(moby,0x10000,0);
  bVar1 = moby->state;
  if ((iVar19 == 0) || (bVar1 == 2)) {
    if (bVar1 == 0) {
      moby->state = '\x01';
      auVar25 = loadVectorLeftIndexed(0x30,uVar23);
      auVar26 = loadVectorRightIndexed(0x40,uVar23);
      if (*(int *)((int)pvVar7 + 0x30) != 0) {
        auVar26 = vectorConvertFromSignedFixedPointWord(auVar25 | auVar26,0);
        auVar25 = ZEXT416(0xffffffff);
        auVar25 = auVar25 | auVar25 << 0x20 | auVar25 << 0x40 | auVar25 << 0x60;
        auVar27 = vectorShiftLeftIntegerWord(auVar25,auVar25);
        auVar25 = loadVectorLeftIndexed(4,0x2e5048);
        auVar25 = auVar25 >> 0x60 & (GPiece<16>)0xffffffff;
        auVar28 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
        auVar25 = vectorAddFloatingPoint
                            (auVar26,auVar25 | auVar25 << 0x20 | auVar25 << 0x40 | auVar25 << 0x60);
        auVar25 = vectorMultiplyAddFloatingPoint(auVar28,auVar25,auVar27);
        auVar25 = vectorConvertToSignedFixedPointWordSaturate(auVar25,0);
        auVar25 = auVar25 >> 0x60 & (GPiece<16>)0xffffffff;
        uVar11 = storeVectorElementWordIndexed
                           (auVar25 | auVar25 << 0x20 | auVar25 << 0x40 | auVar25 << 0x60,0x34,
                            uVar23);
        *(undefined4 *)((int)pvVar7 + 0x34U & 0xfffffffc) = uVar11;
        return;
      }
      moby->collision = (ushort *)0x0;
      moby->drawDistance = 0;
      moby->scale = moby->pClass->gScale * 0.01;
      return;
    }
    if (2 < bVar1) {
      return;
    }
  }
  else {
    moby->state = '\x02';
    moby->collision = (ushort *)0x0;
    moby->drawDistance = 0;
    moby->scale = moby->pClass->gScale * 0.01;
  }
  iVar19 = FastDecTimerS32(uVar23 + 0x34);
  if (((iVar19 != 0) && (*(int *)((int)pvVar7 + 0x30) != 0)) && (moby->state == '\x01')) {
    auVar25 = ZEXT416(0xffffffff);
    auVar25 = auVar25 | auVar25 << 0x20 | auVar25 << 0x40 | auVar25 << 0x60;
    auVar26 = vectorShiftLeftIntegerWord(auVar25,auVar25);
    auVar25 = loadVectorLeftIndexed(8,0x2e5048);
    auVar27 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
    auVar25 = auVar25 >> 0x60 & (GPiece<16>)0xffffffff;
    iVar19 = 0;
    auVar25 = vectorMultiplyAddFloatingPoint
                        (auVar27,auVar25 | auVar25 << 0x20 | auVar25 << 0x40 | auVar25 << 0x60,
                         auVar26);
    auVar25 = vectorConvertToSignedFixedPointWordSaturate(auVar25,0);
    auVar25 = auVar25 >> 0x60 & (GPiece<16>)0xffffffff;
    uVar11 = storeVectorElementWordIndexed
                       (auVar25 | auVar25 << 0x20 | auVar25 << 0x40 | auVar25 << 0x60,0x34,uVar23);
    *(undefined4 *)((int)pvVar7 + 0x34U & 0xfffffffc) = uVar11;
    uVar21 = uVar23;
    do {
      pMVar17 = g_MobyInstance;
      iVar22 = *(int *)uVar21;
      if (((-1 < iVar22) && ((g_MobyInstance[iVar22].state & 0x80) != 0)) &&
         (g_MobyInstance[iVar22].oClass == 199)) {
        fVar2 = (moby->rotation).z;
        fVar4 = fVar2 + 1.5707963;
        fVar5 = 3.1415925 - fVar4;
        if (fVar4 - (3.1415925 - fVar4) < 0.0) {
          fVar5 = fVar4;
        }
        fVar6 = 3.1415925 - fVar2;
        if (fVar2 - (3.1415925 - fVar2) < 0.0) {
          fVar6 = fVar2;
        }
        fVar12 = -3.1415925 - fVar4;
        if ((-3.1415925 - fVar4) - fVar5 < 0.0) {
          fVar12 = fVar5;
        }
        fVar4 = -3.1415925 - fVar2;
        if ((-3.1415925 - fVar2) - fVar6 < 0.0) {
          fVar4 = fVar6;
        }
        fVar6 = fVar12 * fVar12;
        fVar13 = fVar6 * fVar6 * fVar12;
        fVar14 = fVar6 * fVar13;
        fVar15 = fVar6 * fVar14;
        fVar5 = fVar4 * fVar4;
        fVar2 = (moby->pos).y;
        fVar16 = fVar5 * fVar5 * fVar4;
        fVar3 = (moby->pos).z;
        g_MobyInstance[iVar22].pos.x =
             (fVar15 * 2.601887e-06 +
             fVar14 * -0.0001980741 + fVar13 * 0.0083330255 + fVar6 * fVar12 * -0.16666657 + fVar12)
             * 2.0 + (moby->pos).x;
        pMVar8 = pMVar17[iVar22].pClass;
        pMVar17[iVar22].pos.z = fVar3;
        pMVar17[iVar22].pos.w = fVar15;
        pMVar17[iVar22].state = '\x04';
        fVar6 = fVar5 * fVar16;
        pMVar17[iVar22].pos.y =
             (fVar5 * fVar6 * 2.601887e-06 +
             fVar6 * -0.0001980741 + fVar16 * 0.0083330255 + fVar5 * fVar4 * -0.16666657 + fVar4) *
             2.0 + fVar2;
        pMVar17[iVar22].collision = pMVar8->collision;
      }
      iVar19 = iVar19 + 1;
      uVar21 = uVar21 + 4;
    } while (iVar19 < 10);
  }
  iVar19 = 0;
  iVar22 = 0;
  fVar2 = 99.0;
  uVar21 = uVar23;
  do {
    iVar9 = *(int *)uVar21;
    if ((-1 < iVar9) && (g_MobyInstance[iVar9].state != 'c')) {
      pvVar10 = g_MobyInstance[iVar9].pVar;
      if (g_MobyInstance[iVar9].oClass == CHOMPER_00C1) {
        fVar4 = *(float *)((int)pvVar10 + 0x1d0);
        fVar5 = *(float *)((int)pvVar10 + 0x1d4);
        fVar6 = *(float *)((int)pvVar10 + 0x1d8);
      }
      else {
        if (g_MobyInstance[iVar9].oClass != 199) goto LAB_002e5420;
        fVar4 = *(float *)((int)pvVar10 + 0xb0);
        fVar5 = *(float *)((int)pvVar10 + 0xb4);
        fVar6 = *(float *)((int)pvVar10 + 0xb8);
      }
      fVar4 = SQRT((fVar6 - g_heroPosition.z) * (fVar6 - g_heroPosition.z) +
                   (fVar4 - g_heroPosition.x) * (fVar4 - g_heroPosition.x) +
                   (fVar5 - g_heroPosition.y) * (fVar5 - g_heroPosition.y));
      if (fVar4 < fVar2) {
        fVar2 = fVar4;
      }
    }
LAB_002e5420:
    iVar19 = iVar19 + 1;
    uVar21 = uVar21 + 4;
    if (9 < iVar19) {
      if ((fVar2 < *(float *)((int)pvVar7 + 0x38)) ||
         (((fVar2 < *(float *)((int)pvVar7 + 0x3c) && (g_heroState == UNK_17)) &&
          (g_CurrentWeapon == 0xe)))) {
        iVar19 = *(int *)((int)pvVar7 + 0x28);
        *(undefined4 *)((int)pvVar7 + 0x2c) = 1;
        *(int *)((int)pvVar7 + 0x28) = iVar19 + 1;
        if (10 < iVar19) {
          lVar18 = 99;
          lVar20 = 0;
          fVar2 = 1024.0;
          do {
            iVar19 = *(int *)uVar23;
            if (((-1 < iVar19) &&
                (g_MobyInstance[iVar19].setByGroup != '\x01' &&
                 g_MobyInstance[iVar19].setByGroup != '\x03')) &&
               (fVar5 = g_MobyInstance[iVar19].pos.y - g_heroPosition.y,
               fVar4 = g_MobyInstance[iVar19].pos.x - g_heroPosition.x,
               fVar4 = SQRT(fVar4 * fVar4 + fVar5 * fVar5), fVar4 < fVar2)) {
              lVar18 = lVar20;
              fVar2 = fVar4;
            }
            lVar20 = lVar20 + 1;
            uVar23 = uVar23 + 4;
          } while ((int)lVar20 < 10);
          if ((int)lVar18 != 99) {
            iVar19 = (int)(lVar18 << 2);
            pvVar10 = g_MobyInstance[*(int *)((int)pvVar7 + iVar19)].pVar;
            dVar24 = (double)MB_randRangeFloat
                                       (*(float *)((int)pvVar7 + 0x40) * -0.017453292,
                                        *(float *)((int)pvVar7 + 0x40) * 0.017453292);
            *(float *)((int)pvVar10 + 500) = (float)dVar24;
            g_MobyInstance[*(int *)((int)pvVar7 + iVar19)].setByGroup = '\x01';
          }
          *(undefined4 *)((int)pvVar7 + 0x28) = 0;
        }
      }
      else if (((*(float *)((int)pvVar7 + 0x38) < fVar2) ||
               (((fVar2 < *(float *)((int)pvVar7 + 0x3c) && (g_heroState == UNK_17)) &&
                (g_CurrentWeapon == 0xe)))) && (*(int *)((int)pvVar7 + 0x2c) != 0)) {
        *(undefined4 *)((int)pvVar7 + 0x2c) = 0;
        do {
          iVar19 = *(int *)uVar23;
          if ((-1 < iVar19) && (g_MobyInstance[iVar19].state < 0x80)) {
            g_MobyInstance[iVar19].setByGroup = '\x02';
          }
          iVar22 = iVar22 + 1;
          uVar23 = uVar23 + 4;
        } while (iVar22 < 10);
      }
      return;
    }
  } while( true );
}


