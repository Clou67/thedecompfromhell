// game/update/moby886.cpp -- reconstructed from NPEA00385 EBOOT
// STATUS: NOT STARTED (raw Ghidra output)
// 1 functions, 0x4a20d8-0x4a2854
#include "game/update/moby886.h"
#include "game/collproc.h"
#include "game/debug.h"
#include "game/hero.h"
#include "game/mobyfunc.h"
#include "game/mobyproc.h"
#include "game/mobyutil.h"
#include "game/sound.h"
#include "idol/fastfunc.h"

// 0x04a20d8 (0x77c bytes)
/* Moby 886 */

ulonglong UpdateMoby_886(MobyInstance *moby)

{
  byte bVar1;
  short sVar2;
  int *piVar3;
  undefined2 uVar4;
  undefined4 uVar5;
  bool bVar6;
  int iVar8;
  ulonglong uVar7;
  int iVar9;
  ulonglong uVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  GPiece<16> auVar15;
  GPiece<16> auVar16;
  GPiece<16> auVar17;
  GPiece<16> auVar18;
  GPiece<16> auVar19;
  GPiece<16> auVar20;
  GPiece<16> auVar21;
  float local_a0;
  float local_9c;
  float local_98;
  float local_90;
  float local_8c;
  float local_88;
  float local_80;
  float local_7c;
  float local_78;
  float local_70;
  float local_6c;
  float local_68;
  
  uVar7 = (ulonglong)(int)moby;
  if (moby != (MobyInstance *)0x0) {
    piVar3 = (int *)moby->pVar;
    uVar10 = ZEXT48(piVar3);
    if (piVar3 != (int *)0x0) {
      bVar6 = false;
      if (((moby->state < 6) && (moby->levelFlagIdx != 0xff)) &&
         (g_LevelFlags[Level][(byte)moby->levelFlagIdx] == -1)) {
        MB_SetStateByGroup(moby->group,6);
      }
      if (piVar3[2] == 0) {
        bVar6 = false;
        if ((g_framesNotGrounded == 0) && (g_standingOnMoby == moby)) {
          bVar6 = true;
        }
        if (0x3f490fdb < (uint)ABS((moby->rotation).y)) {
          dVar13 = (double)((moby->pos).y - g_heroPosition.y);
          dVar12 = (double)((moby->pos).x - g_heroPosition.x);
          if (((SQRT((float)(dVar12 * dVar12 + (double)(float)(dVar13 * dVar13))) < 2.0) &&
              (g_heroState == WALL_JUMP)) &&
             ((int)(FLOAT_ORDER(g_heroAnimFrame)) < 0x40e00000)) {
            dVar14 = (double)(moby->pos).w;
            dVar11 = (double)((moby->pos).z - g_heroPosition.z);
            FastMtx4Identity(&local_a0);
            FastNormalizeRMtx4(&local_a0,uVar7 + 0xc0);
            if (((ABS((float)((double)local_70 * dVar14 +
                             (double)(float)((double)local_80 * dVar11 +
                                            (double)(float)((double)local_a0 * dVar12 +
                                                           (double)(float)((double)local_90 * dVar13
                                                                          ))))) < 0.6) &&
                (ABS((float)((double)local_6c * dVar14 +
                            (double)(float)((double)local_7c * dVar11 +
                                           (double)(float)((double)local_9c * dVar12 +
                                                          (double)(float)((double)local_8c * dVar13)
                                                          )))) < 0.6)) &&
               (ABS((float)((double)local_68 * dVar14 +
                           (double)(float)((double)local_78 * dVar11 +
                                          (double)(float)((double)local_98 * dVar12 +
                                                         (double)(float)((double)local_88 * dVar13))
                                          ))) < 0.957)) {
              bVar6 = true;
            }
          }
        }
      }
      if ((1 < moby->state && moby->state < 6) && (moby->setByGroup == '\x01')) {
        iVar8 = FastDecTimerS32(uVar10);
        if (iVar8 == 0) {
          iVar8 = FastDecTimerS32(uVar10 + 4);
          if (iVar8 != 0) {
            PlayMobySound(0,0,moby);
            iVar9 = (int)(animationSpeed * 5.5) + *piVar3 / (int)(animationSpeed * 40.5);
            iVar8 = (int)(animationSpeed * 45.5);
            if (iVar9 <= (int)(animationSpeed * 45.5)) {
              iVar8 = iVar9;
            }
            piVar3[1] = iVar8;
          }
        }
        else {
          PlayMobySound(2,0,moby);
          MB_SetStateByGroup(moby->group,8);
        }
      }
      bVar1 = moby->state;
      uVar7 = (ulonglong)bVar1;
      if (bVar1 < 4) {
        if (bVar1 == 0) {
          SetColorOfMoby(moby,0x80,0x80,0x80);
          MB_SetGroupField(moby->group,0);
          uVar7 = MB_SetStateByGroup(moby->group,1);
        }
        else if (bVar1 < 2) {
          piVar3[2] = 0;
          uVar7 = SetColorOfMoby(moby,0x80,0x80,0x80);
          if (bVar6) {
            auVar15 = loadVectorLeftIndexed(0x10,uVar10);
            auVar16 = loadVectorRightIndexed(0x20,uVar10);
            if (piVar3[4] < 1) {
              auVar16 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
              auVar15 = loadVectorLeftIndexed(0x20,0x4a20b0);
              auVar15 = auVar15 >> 0x60 & (GPiece<16>)0xffffffff;
              auVar15 = auVar15 | auVar15 << 0x20 | auVar15 << 0x40 | auVar15 << 0x60;
            }
            else {
              auVar18 = ZEXT416(0xfffffff0);
              auVar17 = auVar18 | auVar18 << 0x20 | auVar18 << 0x40 | auVar18 << 0x60;
              auVar18 = ZEXT416(0);
              auVar19 = loadVectorLeftIndexed(0x18,0x4a20b0);
              auVar19 = auVar19 >> 0x60 & (GPiece<16>)0xffffffff;
              auVar19 = auVar19 | auVar19 << 0x20 | auVar19 << 0x40 | auVar19 << 0x60;
              auVar21 = vectorRotateLeftIntegerWord(auVar19,auVar17);
              auVar20 = vectorMultiplyOddUnsignedHalfWord(auVar15 | auVar16,auVar19);
              auVar15 = vectorMultiplySumSignedHalfWordModulo
                                  (auVar15 | auVar16,auVar21,
                                   auVar18 | auVar18 << 0x20 | auVar18 << 0x40 | auVar18 << 0x60);
              auVar18 = loadVectorLeftIndexed(0x1c,0x4a20b0);
              auVar16 = vectorShiftLeftIntegerWord(auVar15,auVar17);
              auVar15 = auVar18 >> 0x60 & (GPiece<16>)0xffffffff;
              auVar19.piece<0,4>() = auVar16.piece<0,4>() + auVar20.piece<0,4>();
              auVar19.piece<8,8>() = auVar16.piece<8,8>();
              auVar19.piece<4,4>() = auVar16.piece<4,4>() + auVar20.piece<4,4>();
              auVar18.piece<0,8>() = auVar19.piece<0,8>();
              auVar18.piece<12,4>() = auVar16.piece<12,4>();
              auVar18.piece<8,4>() = auVar16.piece<8,4>() + auVar20.piece<8,4>();
              auVar16.piece<0,12>() = auVar18.piece<0,12>();
              auVar16.piece<12,4>() = auVar18.piece<12,4>() + auVar20.piece<12,4>();
              auVar18 = vectorConvertFromSignedFixedPointWord(auVar16,0);
              auVar16 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
              auVar15 = vectorAddFloatingPoint
                                  (auVar18,auVar15 | auVar15 << 0x20 | auVar15 << 0x40 |
                                           auVar15 << 0x60);
            }
            auVar18 = ZEXT416(0xffffffff);
            auVar18 = auVar18 | auVar18 << 0x20 | auVar18 << 0x40 | auVar18 << 0x60;
            auVar15 = auVar15 >> 0x60 & (GPiece<16>)0xffffffff;
            auVar16 = auVar16 >> 0x60 & (GPiece<16>)0xffffffff;
            auVar18 = vectorShiftLeftIntegerWord(auVar18,auVar18);
            auVar15 = vectorMultiplyAddFloatingPoint
                                (auVar16 | auVar16 << 0x20 | auVar16 << 0x40 | auVar16 << 0x60,
                                 auVar15 | auVar15 << 0x20 | auVar15 << 0x40 | auVar15 << 0x60,
                                 auVar18);
            auVar15 = vectorConvertToSignedFixedPointWordSaturate(auVar15,0);
            uVar5 = storeVectorElementWordIndexed(auVar15,0,uVar10);
            *(undefined4 *)((uint)piVar3 & 0xfffffffc) = uVar5;
            SetColorOfMoby(moby,0,0xff,0);
            piVar3[2] = 1;
            MB_SetGroupField(moby->group,0);
            moby->setByGroup = '\x01';
            PlayMobySound(3,0,moby);
            uVar7 = MB_SetStateByGroup(moby->group,2);
          }
        }
        else if (bVar1 < 3) {
          uVar7 = 3;
          moby->state = '\x03';
        }
        else if (bVar6) {
          piVar3[2] = 1;
          SetColorOfMoby(moby,0,0xff,0);
          PlayMobySound(3,0,moby);
          uVar7 = MB_SetStateByGroup(moby->group,4);
        }
      }
      else if (bVar1 < 7) {
        if (bVar1 < 5) {
          uVar7 = 5;
          moby->state = '\x05';
        }
        else if (bVar1 < 6) {
          if (bVar6) {
            piVar3[2] = 1;
            SetColorOfMoby(moby,0,0xff,0);
            MB_SetStateByGroup(moby->group,6);
            iVar8 = PlayMobySound(1,0,moby);
            uVar7 = (ulonglong)iVar8;
          }
        }
        else {
          auVar15 = ZEXT416(0xffffffff);
          auVar15 = auVar15 | auVar15 << 0x20 | auVar15 << 0x40 | auVar15 << 0x60;
          auVar16 = vectorShiftLeftIntegerWord(auVar15,auVar15);
          auVar15 = loadVectorLeftIndexed(0x24,0x4a20b0);
          auVar15 = auVar15 >> 0x60 & (GPiece<16>)0xffffffff;
          auVar18 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
          auVar15 = vectorMultiplyAddFloatingPoint
                              (auVar18,auVar15 | auVar15 << 0x20 | auVar15 << 0x40 | auVar15 << 0x60
                               ,auVar16);
          auVar15 = vectorConvertToSignedFixedPointWordSaturate(auVar15,0);
          auVar15 = vectorSplatHalfWord(auVar15,1);
          uVar4 = storeVectorElementHalfWordIndexed(auVar15,0xc,uVar10);
          *(undefined2 *)(piVar3 + 3) = uVar4;
          *(undefined2 *)((int)piVar3 + 0xe) = 0;
          SetColorOfMoby(moby,0x80,0xff,0x80);
          uVar7 = 7;
          moby->state = '\a';
        }
      }
      else if (bVar1 < 8) {
        if ((moby->levelFlagIdx != 0xff) && (g_LevelFlags[Level][(byte)moby->levelFlagIdx] != -1)) {
          SetLevelFlag();
        }
        uVar7 = FastDecTimerS16(uVar10 + 0xc);
        if ((int)uVar7 != 0) {
          auVar15 = ZEXT416(0xffffffff);
          auVar15 = auVar15 | auVar15 << 0x20 | auVar15 << 0x40 | auVar15 << 0x60;
          auVar16 = vectorShiftLeftIntegerWord(auVar15,auVar15);
          auVar15 = loadVectorLeftIndexed(0x24,0x4a20b0);
          auVar15 = auVar15 >> 0x60 & (GPiece<16>)0xffffffff;
          auVar18 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
          auVar15 = vectorMultiplyAddFloatingPoint
                              (auVar18,auVar15 | auVar15 << 0x20 | auVar15 << 0x40 | auVar15 << 0x60
                               ,auVar16);
          auVar15 = vectorConvertToSignedFixedPointWordSaturate(auVar15,0);
          auVar15 = vectorSplatHalfWord(auVar15,1);
          uVar4 = storeVectorElementHalfWordIndexed(auVar15,0xc,uVar10);
          *(undefined2 *)(piVar3 + 3) = uVar4;
          sVar2 = *(short *)((int)piVar3 + 0xe);
          uVar7 = (ulonglong)sVar2;
          if (sVar2 < 1) {
            if (-1 < sVar2) {
              SetColorOfMoby(moby,0,0xff,0);
              uVar7 = 1;
              *(undefined2 *)((int)piVar3 + 0xe) = 1;
            }
          }
          else if (sVar2 < 2) {
            uVar7 = SetColorOfMoby(moby,0xff,0xff,0xff);
            *(undefined2 *)((int)piVar3 + 0xe) = 0;
          }
          else if (sVar2 < 6) {
            *(undefined2 *)((int)piVar3 + 0xe) = 0;
          }
        }
      }
      else if (bVar1 < 9) {
        SetColorOfMoby(moby,0x80,0x80,0x80);
        uVar7 = 1;
        moby->setByGroup = '\0';
        moby->state = '\x01';
      }
    }
  }
  return uVar7;
}


