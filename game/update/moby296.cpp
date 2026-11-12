// game/update/moby296.cpp -- reconstructed from NPEA00385 EBOOT
// STATUS: NOT STARTED (raw Ghidra output)
// 3 functions, 0x3358c8-0x336144
// shared update function UpdateMoby_{296_297_652_653}; registered for oClasses 296, 297, 652, 653
#include "game/update/moby296.h"
#include "game/freeze.h"
#include "game/hero.h"
#include "game/mobyfunc.h"
#include "game/mobyutil.h"
#include "game/space.h"
#include "game/update.h"
#include "game/update/moby1130.h"
#include "game/vendor.h"
#include "idol/fastfunc.h"

// shared update function, registered for oClasses 296, 297, 652, 653
// 0x03358c8 (0x770 bytes)
/* Moby 296
   Moby 297
   Moby 652
   Moby 653 */

void UpdateMoby_296(MobyInstance *moby)

{
  byte bVar1;
  float fVar2;
  void *pvVar3;
  uint uVar4;
  undefined4 uVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  int iVar10;
  ulonglong uVar11;
  undefined8 in_LR;
  GPiece<16> auVar12;
  GPiece<16> auVar13;
  GPiece<16> auVar14;
  GPiece<16> auVar15;
  
  pvVar3 = moby->pVar;
  uVar11 = ZEXT48(pvVar3);
  if (pvVar3 != (void *)0x0) {
    bVar1 = moby->state;
    if (bVar1 < 2) {
      if (bVar1 == 0) {
        auVar13 = ZEXT416(0xffffffff);
        auVar14 = auVar13 | auVar13 << 0x20 | auVar13 << 0x40 | auVar13 << 0x60;
        auVar13 = loadVectorLeftIndexed(0x934,0x810000);
        auVar12 = vectorConvertFromSignedFixedPointWord(auVar13,0);
        *(undefined4 *)((int)pvVar3 + 0x4c) = 0;
        *(undefined4 *)((int)pvVar3 + 0x48) = 0;
        *(undefined4 *)((int)pvVar3 + 0x44) = 0;
        *(undefined4 *)((int)pvVar3 + 0x40) = 0;
        auVar13 = loadVectorLeftIndexed(in_LR,0x3358a0);
        auVar13 = auVar13 >> 0x60 & (GPiece<16>)0xffffffff;
        auVar13 = vectorAddFloatingPoint
                            (auVar12,auVar13 | auVar13 << 0x20 | auVar13 << 0x40 | auVar13 << 0x60);
        auVar12 = vectorShiftLeftIntegerWord(auVar14,auVar14);
        auVar14 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
        iVar10 = *(int *)((int)pvVar3 + 0xa4);
        uVar4 = *(uint *)((int)pvVar3 + 0x9c);
        auVar13 = vectorMultiplyAddFloatingPoint(auVar14,auVar13,auVar12);
        auVar13 = vectorConvertToSignedFixedPointWordSaturate(auVar13,0);
        auVar13 = auVar13 >> 0x60 & (GPiece<16>)0xffffffff;
        uVar5 = storeVectorElementWordIndexed
                          (auVar13 | auVar13 << 0x20 | auVar13 << 0x40 | auVar13 << 0x60,0xa0,uVar11
                          );
        *(undefined4 *)((int)pvVar3 + 0xa0U & 0xfffffffc) = uVar5;
        *(uint *)((int)pvVar3 + 0x9c) = uVar4 | 4;
        moby->state = ((byte)(ZERO_MASK(iVar10)) & 0xfe) + 3;
      }
      else {
        moby->unk58 = 1.0;
        iVar10 = FastDecTimerS32(uVar11 + 0xa0);
        fVar2 = (moby->rotation).z;
        if (iVar10 == 0) {
          fVar6 = SQRT(*(float *)((int)pvVar3 + 0x48) * *(float *)((int)pvVar3 + 0x48) +
                       *(float *)((int)pvVar3 + 0x40) * *(float *)((int)pvVar3 + 0x40) +
                       *(float *)((int)pvVar3 + 0x44) * *(float *)((int)pvVar3 + 0x44));
          if (fVar6 < ABS(DAT_00810930 * g_FrameTime)) {
            fVar6 = DAT_00810938 * g_FrameTimeSq + fVar6;
          }
          fVar2 = fVar2 + 1.5707963;
          fVar7 = 3.1415925 - fVar2;
          if (fVar2 - (3.1415925 - fVar2) < 0.0) {
            fVar7 = fVar2;
          }
          fVar8 = -3.1415925 - fVar2;
          if ((-3.1415925 - fVar2) - fVar7 < 0.0) {
            fVar8 = fVar7;
          }
          fVar2 = fVar8 * fVar8;
          fVar7 = fVar2 * fVar2 * fVar8;
          fVar9 = fVar2 * fVar7;
          *(float *)((int)pvVar3 + 0x40) =
               -((fVar2 * fVar9 * 2.601887e-06 +
                 fVar9 * -0.0001980741 + fVar7 * 0.0083330255 + fVar2 * fVar8 * -0.16666657 + fVar8)
                * fVar6);
          fVar2 = (moby->rotation).z;
          *(undefined4 *)((int)pvVar3 + 0x48) = 0;
          fVar7 = 3.1415925 - fVar2;
          if (fVar2 - (3.1415925 - fVar2) < 0.0) {
            fVar7 = fVar2;
          }
          fVar8 = -3.1415925 - fVar2;
          if ((-3.1415925 - fVar2) - fVar7 < 0.0) {
            fVar8 = fVar7;
          }
          fVar2 = fVar8 * fVar8;
          fVar7 = fVar2 * fVar2 * fVar8;
          fVar9 = fVar2 * fVar7;
          *(float *)((int)pvVar3 + 0x44) =
               -((fVar2 * fVar9 * 2.601887e-06 +
                 fVar9 * -0.0001980741 + fVar7 * 0.0083330255 + fVar2 * fVar8 * -0.16666657 + fVar8)
                * fVar6);
        }
        else {
          fVar6 = -(DAT_00810938 * g_FrameTimeSq -
                   SQRT(*(float *)((int)pvVar3 + 0x48) * *(float *)((int)pvVar3 + 0x48) +
                        *(float *)((int)pvVar3 + 0x40) * *(float *)((int)pvVar3 + 0x40) +
                        *(float *)((int)pvVar3 + 0x44) * *(float *)((int)pvVar3 + 0x44)));
          if (0.0 < fVar6) {
            fVar2 = fVar2 + 1.5707963;
            fVar7 = 3.1415925 - fVar2;
            if (fVar2 - (3.1415925 - fVar2) < 0.0) {
              fVar7 = fVar2;
            }
            fVar8 = -3.1415925 - fVar2;
            if ((-3.1415925 - fVar2) - fVar7 < 0.0) {
              fVar8 = fVar7;
            }
            fVar2 = fVar8 * fVar8;
            fVar7 = fVar2 * fVar2 * fVar8;
            fVar9 = fVar2 * fVar7;
            *(float *)((int)pvVar3 + 0x40) =
                 -((fVar2 * fVar9 * 2.601887e-06 +
                   fVar9 * -0.0001980741 +
                   fVar7 * 0.0083330255 + fVar2 * fVar8 * -0.16666657 + fVar8) * fVar6);
            fVar2 = (moby->rotation).z;
            *(undefined4 *)((int)pvVar3 + 0x48) = 0;
            fVar7 = 3.1415925 - fVar2;
            if (fVar2 - (3.1415925 - fVar2) < 0.0) {
              fVar7 = fVar2;
            }
            fVar8 = -3.1415925 - fVar2;
            if ((-3.1415925 - fVar2) - fVar7 < 0.0) {
              fVar8 = fVar7;
            }
            fVar2 = fVar8 * fVar8;
            fVar7 = fVar2 * fVar2 * fVar8;
            fVar9 = fVar2 * fVar7;
            *(float *)((int)pvVar3 + 0x44) =
                 -((fVar2 * fVar9 * 2.601887e-06 +
                   fVar9 * -0.0001980741 +
                   fVar7 * 0.0083330255 + fVar2 * fVar8 * -0.16666657 + fVar8) * fVar6);
          }
          else {
            auVar13 = ZEXT416(0xffffffff);
            auVar13 = auVar13 | auVar13 << 0x20 | auVar13 << 0x40 | auVar13 << 0x60;
            auVar14 = vectorShiftLeftIntegerWord(auVar13,auVar13);
            auVar13 = loadVectorLeftIndexed(0x934,0x810000);
            auVar12 = vectorConvertFromSignedFixedPointWord(auVar13,0);
            auVar13 = loadVectorLeftIndexed(in_LR,0x3358a0);
            auVar13 = auVar13 >> 0x60 & (GPiece<16>)0xffffffff;
            auVar15 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
            auVar13 = vectorAddFloatingPoint
                                (auVar12,auVar13 | auVar13 << 0x20 | auVar13 << 0x40 |
                                         auVar13 << 0x60);
            auVar13 = vectorMultiplyAddFloatingPoint(auVar15,auVar13,auVar14);
            auVar13 = vectorConvertToSignedFixedPointWordSaturate(auVar13,0);
            auVar13 = auVar13 >> 0x60 & (GPiece<16>)0xffffffff;
            uVar5 = storeVectorElementWordIndexed
                              (auVar13 | auVar13 << 0x20 | auVar13 << 0x40 | auVar13 << 0x60,0xa0,
                               uVar11);
            *(undefined4 *)((int)pvVar3 + 0xa0U & 0xfffffffc) = uVar5;
            moby->state = '\x02';
          }
        }
        moby->unk58 = fVar6 / (DAT_00810930 * g_FrameTime);
      }
    }
    else if (bVar1 < 3) {
      moby->unk58 = -1.0;
      iVar10 = FastDecTimerS32(uVar11 + 0xa0);
      fVar2 = (moby->rotation).z;
      if (iVar10 == 0) {
        fVar6 = SQRT(*(float *)((int)pvVar3 + 0x48) * *(float *)((int)pvVar3 + 0x48) +
                     *(float *)((int)pvVar3 + 0x40) * *(float *)((int)pvVar3 + 0x40) +
                     *(float *)((int)pvVar3 + 0x44) * *(float *)((int)pvVar3 + 0x44));
        if (fVar6 < ABS(DAT_00810930 * g_FrameTime)) {
          fVar6 = DAT_00810938 * g_FrameTimeSq + fVar6;
        }
        fVar2 = fVar2 + 1.5707963;
        fVar7 = 3.1415925 - fVar2;
        if (fVar2 - (3.1415925 - fVar2) < 0.0) {
          fVar7 = fVar2;
        }
        fVar8 = -3.1415925 - fVar2;
        if ((-3.1415925 - fVar2) - fVar7 < 0.0) {
          fVar8 = fVar7;
        }
        fVar2 = fVar8 * fVar8;
        fVar7 = fVar2 * fVar2 * fVar8;
        fVar9 = fVar2 * fVar7;
        *(float *)((int)pvVar3 + 0x40) =
             (fVar2 * fVar9 * 2.601887e-06 +
             fVar9 * -0.0001980741 + fVar7 * 0.0083330255 + fVar2 * fVar8 * -0.16666657 + fVar8) *
             fVar6;
        fVar2 = (moby->rotation).z;
        *(undefined4 *)((int)pvVar3 + 0x48) = 0;
        fVar7 = 3.1415925 - fVar2;
        if (fVar2 - (3.1415925 - fVar2) < 0.0) {
          fVar7 = fVar2;
        }
        fVar8 = -3.1415925 - fVar2;
        if ((-3.1415925 - fVar2) - fVar7 < 0.0) {
          fVar8 = fVar7;
        }
        fVar2 = fVar8 * fVar8;
        fVar7 = fVar2 * fVar2 * fVar8;
        fVar9 = fVar2 * fVar7;
        *(float *)((int)pvVar3 + 0x44) =
             (fVar2 * fVar9 * 2.601887e-06 +
             fVar9 * -0.0001980741 + fVar7 * 0.0083330255 + fVar2 * fVar8 * -0.16666657 + fVar8) *
             fVar6;
      }
      else {
        fVar6 = -(DAT_00810938 * g_FrameTimeSq -
                 SQRT(*(float *)((int)pvVar3 + 0x48) * *(float *)((int)pvVar3 + 0x48) +
                      *(float *)((int)pvVar3 + 0x40) * *(float *)((int)pvVar3 + 0x40) +
                      *(float *)((int)pvVar3 + 0x44) * *(float *)((int)pvVar3 + 0x44)));
        if (0.0 < fVar6) {
          fVar2 = fVar2 + 1.5707963;
          fVar7 = 3.1415925 - fVar2;
          if (fVar2 - (3.1415925 - fVar2) < 0.0) {
            fVar7 = fVar2;
          }
          fVar8 = -3.1415925 - fVar2;
          if ((-3.1415925 - fVar2) - fVar7 < 0.0) {
            fVar8 = fVar7;
          }
          fVar2 = fVar8 * fVar8;
          fVar7 = fVar2 * fVar2 * fVar8;
          fVar9 = fVar2 * fVar7;
          *(float *)((int)pvVar3 + 0x40) =
               (fVar2 * fVar9 * 2.601887e-06 +
               fVar9 * -0.0001980741 + fVar7 * 0.0083330255 + fVar2 * fVar8 * -0.16666657 + fVar8) *
               fVar6;
          fVar2 = (moby->rotation).z;
          *(undefined4 *)((int)pvVar3 + 0x48) = 0;
          fVar7 = 3.1415925 - fVar2;
          if (fVar2 - (3.1415925 - fVar2) < 0.0) {
            fVar7 = fVar2;
          }
          fVar8 = -3.1415925 - fVar2;
          if ((-3.1415925 - fVar2) - fVar7 < 0.0) {
            fVar8 = fVar7;
          }
          fVar2 = fVar8 * fVar8;
          fVar7 = fVar2 * fVar2 * fVar8;
          fVar9 = fVar2 * fVar7;
          *(float *)((int)pvVar3 + 0x44) =
               (fVar2 * fVar9 * 2.601887e-06 +
               fVar9 * -0.0001980741 + fVar7 * 0.0083330255 + fVar2 * fVar8 * -0.16666657 + fVar8) *
               fVar6;
        }
        else {
          auVar13 = ZEXT416(0xffffffff);
          auVar13 = auVar13 | auVar13 << 0x20 | auVar13 << 0x40 | auVar13 << 0x60;
          auVar14 = vectorShiftLeftIntegerWord(auVar13,auVar13);
          auVar13 = loadVectorLeftIndexed(0x934,0x810000);
          auVar12 = vectorConvertFromSignedFixedPointWord(auVar13,0);
          auVar13 = loadVectorLeftIndexed(in_LR,0x3358a0);
          auVar13 = auVar13 >> 0x60 & (GPiece<16>)0xffffffff;
          auVar15 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
          auVar13 = vectorAddFloatingPoint
                              (auVar12,auVar13 | auVar13 << 0x20 | auVar13 << 0x40 | auVar13 << 0x60
                              );
          auVar13 = vectorMultiplyAddFloatingPoint(auVar15,auVar13,auVar14);
          auVar13 = vectorConvertToSignedFixedPointWordSaturate(auVar13,0);
          auVar13 = auVar13 >> 0x60 & (GPiece<16>)0xffffffff;
          uVar5 = storeVectorElementWordIndexed
                            (auVar13 | auVar13 << 0x20 | auVar13 << 0x40 | auVar13 << 0x60,0xa0,
                             uVar11);
          *(undefined4 *)((int)pvVar3 + 0xa0U & 0xfffffffc) = uVar5;
          moby->state = '\x01';
        }
      }
      moby->unk58 = fVar6 / -(DAT_00810930 * g_FrameTime);
    }
    else if (bVar1 < 4) {
      fVar2 = (moby->rotation).z + 1.5707963;
      fVar6 = 3.1415925 - fVar2;
      if (fVar2 - (3.1415925 - fVar2) < 0.0) {
        fVar6 = fVar2;
      }
      fVar7 = -3.1415925 - fVar2;
      if ((-3.1415925 - fVar2) - fVar6 < 0.0) {
        fVar7 = fVar6;
      }
      fVar2 = fVar7 * fVar7;
      fVar9 = DAT_00810930 * g_FrameTime;
      fVar6 = fVar2 * fVar2 * fVar7;
      fVar8 = fVar2 * fVar6;
      *(float *)((int)pvVar3 + 0x40) =
           -(fVar9 * (fVar2 * fVar8 * 2.601887e-06 +
                     fVar8 * -0.0001980741 +
                     fVar6 * 0.0083330255 + fVar2 * fVar7 * -0.16666657 + fVar7));
      fVar2 = (moby->rotation).z;
      *(undefined4 *)((int)pvVar3 + 0x48) = 0;
      fVar6 = 3.1415925 - fVar2;
      if (fVar2 - (3.1415925 - fVar2) < 0.0) {
        fVar6 = fVar2;
      }
      fVar7 = -3.1415925 - fVar2;
      if ((-3.1415925 - fVar2) - fVar6 < 0.0) {
        fVar7 = fVar6;
      }
      fVar2 = fVar7 * fVar7;
      fVar6 = fVar2 * fVar2 * fVar7;
      fVar8 = fVar2 * fVar6;
      *(float *)((int)pvVar3 + 0x44) =
           -(fVar9 * (fVar2 * fVar8 * 2.601887e-06 +
                     fVar8 * -0.0001980741 +
                     fVar6 * 0.0083330255 + fVar2 * fVar7 * -0.16666657 + fVar7));
    }
    MB_GetOrientation
              ((MobyInstance *)((int)pvVar3 + 0x60),(Vec4 *)((int)pvVar3 + 0x40),
               (longlong)(int)moby + 0x40,(longlong)(int)moby + 0x40);
  }
  return;
}


// 0x0336038 (0x14 bytes)
void M653_00336038(void)

{
  DAT_00810988 = 0x10000;
  return;
}


// 0x0336050 (0xf4 bytes)
// strings: 0096c074: 'None'

void M653_00336050(int param_1)

{
  short sVar1;
  int iVar2;
  undefined4 *puVar3;
  
  if ((g_gameMode == GAME_MODE_SCENE) && (Cheats[0] != '\0')) {
    iVar2 = 0;
    puVar3 = &DAT_0095cd50;
    sVar1 = g_SpaceSceneMobyCnt.piece<0,2>();
    if (0 < g_SpaceSceneMobyCnt.piece<0,2>()) {
      do {
        if ((((MobyInstance *)puVar3[0x5e])->oClass == *(MOBY_OCLASSES *)(param_1 + 0xa6)) &&
           (DAT_00a1bf81 == '\0')) {
          AttachManipulator((MobyInstance *)puVar3[0x5e],0,&DAT_00a1bf80);
          DAT_00a1bfa0 = 0x40300000;
          DAT_00a1bfa4 = 0x40300000;
          DAT_00a1bfa8 = 0x40300000;
          sVar1 = g_SpaceSceneMobyCnt.piece<0,2>();
        }
        iVar2 = iVar2 + 1;
        puVar3 = puVar3 + 1;
      } while (iVar2 < sVar1);
    }
  }
  return;
}


