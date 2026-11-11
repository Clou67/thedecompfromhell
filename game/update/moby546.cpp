// game/update/moby546.cpp -- reconstructed from NPEA00385 EBOOT
// STATUS: NOT STARTED (raw Ghidra output)
// 2 functions, 0x3b1338-0x3b17c0
#include "game/update/moby546.h"
#include "game/collproc.h"
#include "game/debug.h"
#include "game/hero.h"
#include "game/mobyfunc.h"
#include "game/mobyutil.h"
#include "game/sound.h"
#include "game/update/moby1388.h"
#include "idol/fastfunc.h"

// 0x03b1338 (0x474 bytes)
/* Moby 546 */

void UpdateMoby_546(MobyInstance *moby)

{
  byte bVar1;
  float fVar2;
  void *pvVar3;
  undefined4 uVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  ulonglong uVar8;
  longlong lVar9;
  longlong lVar10;
  int iVar11;
  ulonglong uVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  double dVar16;
  GPiece<16> auVar17;
  GPiece<16> auVar18;
  GPiece<16> auVar19;
  GPiece<16> auVar20;
  
  bVar1 = moby->state;
  pvVar3 = moby->pVar;
  uVar12 = ZEXT48(pvVar3);
  if (bVar1 == 0) {
    dVar13 = (double)MB_randRot();
    *(float *)((int)pvVar3 + 0x68) = (float)dVar13;
    *(undefined4 *)((int)pvVar3 + 0x30) = 0x3a83126f;
    if ((g_LevelFlags[Level][(byte)moby->levelFlagIdx] == -1) && (*(int *)((int)pvVar3 + 100) == -1)
       ) {
      moby->state = '\x02';
      moby->setByGroup = '\x01';
      if (*(int *)((int)pvVar3 + 0x60) != -1) {
        FUN_00267300(g_MobyInstance + *(int *)((int)pvVar3 + 0x60),0);
      }
    }
    else {
      moby->state = '\x01';
    }
  }
  else if (bVar1 < 2) {
    dVar14 = (double)FastWrapRot
                               (*(float *)((int)pvVar3 + 0x68),g_FrameTime * 6.2831855);
    dVar13 = (double)(float)(3.141592502593994 - dVar14);
    if (dVar14 - (double)(float)(3.141592502593994 - dVar14) < 0.0) {
      dVar13 = dVar14;
    }
    dVar15 = (double)(float)(-3.141592502593994 - dVar14);
    if ((double)(float)(-3.141592502593994 - dVar14) - dVar13 < 0.0) {
      dVar15 = dVar13;
    }
    dVar13 = (double)(float)(dVar15 * dVar15);
    dVar16 = (double)(float)(dVar13 * (double)(float)(dVar13 * dVar15));
    *(float *)((int)pvVar3 + 0x68) = (float)dVar14;
    dVar14 = (double)(float)(dVar13 * dVar16);
    lVar9 = FastDoubleToInt
                      ((double)((((float)(dVar13 * dVar14) * 2.601887e-06 +
                                 (float)(dVar14 * -0.0001980741071747616 +
                                        (double)(float)(dVar16 * 0.008333025500178337 +
                                                       (double)(float)((double)(float)(dVar13 * 
                                                  dVar15) * -0.16666656732559204 + dVar15)))) * 4.0
                                - 3.0) * 128.0));
    lVar10 = lVar9 + (lVar9 + -0x20 >> 0x3f & 0x20U - lVar9);
    uVar8 = lVar10 + (0x80 - lVar9 >> 0x3f & 0x80U - lVar10);
    moby->field60_0x90 =
         (uint)((uVar8 & 0xffffffff) << 8) | (uint)uVar8 | (uint)((uVar8 & 0xffffffff) << 0x10) |
         0x80000000;
    iVar11 = MB_damage(moby,0x330000,0);
    if (iVar11 != 0) {
      moby->state = '\x02';
      moby->setByGroup = '\x01';
      moby->field60_0x90 = 0x80208020;
      *(undefined4 *)((int)pvVar3 + 0x68) = 0x3fc90fdb;
      PlayMobySound(0,0,moby);
      if (*(int *)((int)pvVar3 + 0x60) != -1) {
        FUN_00267300(g_MobyInstance + *(int *)((int)pvVar3 + 0x60),0);
      }
      auVar17 = loadVectorLeftIndexed(100,uVar12);
      auVar18 = loadVectorRightIndexed(0x74,uVar12);
      if (0 < *(int *)((int)pvVar3 + 100)) {
        auVar18 = vectorConvertFromSignedFixedPointWord(auVar17 | auVar18,0);
        auVar17 = ZEXT416(0xffffffff);
        auVar19 = auVar17 | auVar17 << 0x20 | auVar17 << 0x40 | auVar17 << 0x60;
        auVar17 = loadVectorLeftIndexed(0x28,0x3b1300);
        auVar17 = auVar17 >> 0x60 & (GPiece<16>)0xffffffff;
        auVar20 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
        auVar17 = vectorAddFloatingPoint
                            (auVar18,auVar17 | auVar17 << 0x20 | auVar17 << 0x40 | auVar17 << 0x60);
        auVar18 = vectorShiftLeftIntegerWord(auVar19,auVar19);
        auVar17 = vectorMultiplyAddFloatingPoint(auVar20,auVar17,auVar18);
        auVar17 = vectorConvertToSignedFixedPointWordSaturate(auVar17,0);
        auVar17 = auVar17 >> 0x60 & (GPiece<16>)0xffffffff;
        uVar4 = storeVectorElementWordIndexed
                          (auVar17 | auVar17 << 0x20 | auVar17 << 0x40 | auVar17 << 0x60,0x6c,uVar12
                          );
        *(undefined4 *)((int)pvVar3 + 0x6cU & 0xfffffffc) = uVar4;
      }
    }
  }
  else if (bVar1 < 3) {
    fVar2 = *(float *)((int)pvVar3 + 0x68);
    fVar5 = 3.1415925 - fVar2;
    if (fVar2 - (3.1415925 - fVar2) < 0.0) {
      fVar5 = fVar2;
    }
    fVar6 = -3.1415925 - fVar2;
    if ((-3.1415925 - fVar2) - fVar5 < 0.0) {
      fVar6 = fVar5;
    }
    fVar2 = fVar6 * fVar6;
    fVar5 = fVar2 * fVar2 * fVar6;
    fVar7 = fVar2 * fVar5;
    lVar9 = FastDoubleToInt
                      ((double)(((fVar2 * fVar7 * 2.601887e-06 +
                                 fVar7 * -0.0001980741 +
                                 fVar5 * 0.0083330255 + fVar2 * fVar6 * -0.16666657 + fVar6) * 0.5 +
                                0.5) * 128.0));
    lVar10 = lVar9 + (lVar9 + -0x20 >> 0x3f & 0x20U - lVar9);
    moby->field60_0x90 =
         (uint)((lVar10 + (0x80 - lVar9 >> 0x3f & 0x80U - lVar10) & 0xffffffff) << 8) | 0x80200020;
    if (0 < *(int *)((int)pvVar3 + 100)) {
      iVar11 = FastDecTimerS32(uVar12 + 0x6c);
      if (iVar11 == 0) {
        if (*(int *)((int)pvVar3 + 0x6c) < (int)(animationSpeed * 90.5)) {
          dVar13 = (double)FastWrapRot
                                     (*(float *)((int)pvVar3 + 0x68),
                                      g_FrameTime * 25.132742);
          *(float *)((int)pvVar3 + 0x68) = (float)dVar13;
        }
      }
      else {
        moby->state = '\x01';
        moby->setByGroup = '\0';
        *(undefined4 *)((int)pvVar3 + 0x68) = 0x3fc90fdb;
        if (*(int *)((int)pvVar3 + 0x60) != -1) {
          FUN_00267300(g_MobyInstance + *(int *)((int)pvVar3 + 0x60),1);
        }
      }
    }
  }
  moby->damage = -1;
  return;
}


// 0x03b17ac (0x14 bytes)
void M546_003b17ac(void)

{
  DAT_0084571c = 0x10000;
  return;
}


