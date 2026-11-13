// game/update/moby684.cpp -- reconstructed from NPEA00385 EBOOT
// STATUS: NOT STARTED (raw Ghidra output)
// 3 functions, 0x411198-0x4122a8
#include "game/update/moby684.h"
#include "game/camera.h"
#include "game/collproc.h"
#include "game/draw.h"
#include "game/freeze.h"
#include "game/hero.h"
#include "game/map.h"
#include "game/mobyfunc.h"
#include "game/mobyutil.h"
#include "game/partupd.h"
#include "game/sound.h"
#include "game/space.h"
#include "game/update.h"
#include "game/update/moby1118.h"
#include "game/update/moby617.h"
#include "idol/fastfunc.h"

// 0x0411198 (0x2c0 bytes)
// strings: 00411190: '?333`'

void M684_00411198
               (float *param_1,int param_2,undefined8 param_3,undefined8 param_4)

{
  longlong lVar1;
  int iVar2;
  char cVar3;
  int iVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  double dVar13;
  double dVar14;
  undefined8 uVar15;
  double dVar16;
  double dVar17;
  float afStack_b0 [10];
  
  iVar4 = 0;
  if (0 < param_2) {
    dVar9 = 0.3490658402442932;
    dVar10 = 1.535889744758606;
    uVar11 = 0;
    uVar12 = 0x3fc3333340000000;
    dVar13 = 60.5;
    dVar14 = 0.10000000149011612;
    uVar15 = 0x4010000000000000;
    dVar16 = 0.07000000029802322;
    dVar17 = 0.699999988079071;
    do {
      dVar5 = (double)MB_randRangeFloat(DAT_0085721c,DAT_00857220);
      lVar1 = MB_randInt(2);
      dVar6 = (double)MB_randRot();
      dVar7 = (double)MB_randRangeFloat((float)dVar9,(float)dVar10);
      dVar8 = (double)MB_randRangeFloat(DAT_00857210,DAT_00857214);
      MB_SphericalToVector((float)dVar8,(float)dVar6,(float)dVar7,afStack_b0);
      dVar6 = (double)MB_randRangeSigned(uVar11,uVar12);
      *param_1 = (float)((double)*param_1 + dVar6);
      dVar6 = (double)MB_randRangeSigned(uVar11,uVar12);
      param_1[1] = (float)((double)param_1[1] + dVar6);
      dVar6 = (double)MB_randRangeSigned(uVar11,uVar12);
      param_1[2] = (float)((double)param_1[2] + dVar6);
      iVar2 = SpawnPart_53
                        ((double)(float)(dVar5 * dVar14),dVar5,(double)DAT_00857218,param_1,
                         (int)((double)animationSpeed * dVar13),&DAT_00850000,param_4,0x7f7f2020,0,
                         lVar1 + (ZERO_MASK((int)lVar1) & ((int)lVar1 + -1) - lVar1
                                 ),afStack_b0);
      if (iVar2 != 0) {
        cVar3 = FastDoubleToInt(uVar15);
        *(char *)(iVar2 + 9) = cVar3 + 'p';
      }
      iVar2 = SpawnPart_53
                        ((double)(float)(dVar5 * dVar16),(double)(float)(dVar5 * dVar17),
                         (double)DAT_00857218,param_1,(int)((double)animationSpeed * dVar13));
      if (iVar2 != 0) {
        cVar3 = FastDoubleToInt(uVar15);
        *(char *)(iVar2 + 9) = cVar3 + 'p';
      }
      iVar4 = iVar4 + 1;
    } while (iVar4 < param_2);
  }
  return;
}


// 0x04114b0 (0xa78 bytes)
void M684_004114b0(MobyInstance *param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  undefined2 uVar8;
  int iVar6;
  int iVar7;
  longlong lVar5;
  short sVar9;
  int iVar10;
  ulonglong uVar11;
  undefined2 *puVar12;
  float *pfVar13;
  float *pfVar14;
  ulonglong uVar15;
  int iVar16;
  int iVar17;
  short *psVar18;
  ushort uVar19;
  int iVar20;
  double dVar21;
  double dVar22;
  double dVar23;
  double dVar24;
  double dVar25;
  double dVar26;
  double dVar27;
  double dVar28;
  double dVar29;
  double dVar30;
  double dVar31;
  double dVar32;
  undefined8 uVar33;
  double dVar34;
  double dVar35;
  double dVar36;
  double dVar37;
  double dVar38;
  double dVar39;
  double dVar40;
  double dVar41;
  double dVar42;
  double dVar43;
  double dVar44;
  GPiece<16> auVar45;
  GPiece<16> auVar46;
  GPiece<16> auVar47;
  GPiece<16> auVar48;
  
  if (DAT_010cc244 == 0) {
    DAT_010cc244 = 1;
    DAT_010cc55c = 1;
    dVar43 = 0.0;
    DAT_010cc548 = 0.0;
    dVar44 = (double)SQRT((DAT_010cc268 - DAT_010cc258) * (DAT_010cc268 - DAT_010cc258) +
                          (DAT_010cc260 - DAT_010cc250) * (DAT_010cc260 - DAT_010cc250) +
                          (DAT_010cc264 - DAT_010cc254) * (DAT_010cc264 - DAT_010cc254));
    DAT_010cc54c = param_1;
    dVar21 = (double)FastIntToDouble(0x28);
    DAT_010cc540 = 0;
    uVar15 = 0;
    DAT_008571e8 = (float)(dVar44 / dVar21);
    dVar21 = 1.0;
    dVar44 = 0.5;
    do {
      fVar1 = DAT_008571e8;
      iVar16 = (int)uVar15;
      iVar6 = (int)((uVar15 & 0xffffffff) << 4);
      *(undefined4 *)((int)&DAT_010cc278 + iVar6) = 0;
      *(undefined4 *)(&DAT_010cc274 + iVar6) = 0;
      *(undefined4 *)(&DAT_010cc27c + iVar6) = 0x3f800000;
      *(float *)(&DAT_010cc270 + iVar6) = fVar1 * (float)(longlong)iVar16;
      if (iVar16 < 0x27) {
        dVar22 = (double)MB_randRangeSigned((double)DAT_010cc550,(double)DAT_00857200);
        fVar2 = DAT_00857204;
        fVar1 = (float)((double)*(float *)((int)&DAT_010cc268 + iVar6) + dVar22);
        *(float *)((int)&DAT_010cc278 + iVar6) = fVar1;
        if (fVar1 <= fVar2) {
          if (fVar1 < -fVar2) {
            *(float *)((int)&DAT_010cc278 + iVar6) = -fVar2;
          }
        }
        else {
          *(float *)((int)&DAT_010cc278 + iVar6) = fVar2;
        }
      }
      dVar22 = (double)FastIntToDouble(uVar15);
      dVar23 = (double)FastIntToDouble(0x28);
      uVar8 = FastDoubleToInt
                        ((double)((float)(longlong)
                                         -(int)(animationSpeed *
                                               (float)((double)(longlong)DAT_008571e4 + dVar44)) *
                                 (float)(dVar22 / dVar23)));
      uVar11 = uVar15 & 0xffffffff;
      uVar15 = (ulonglong)(iVar16 + 1);
      *(undefined2 *)((int)&DAT_010cc4f0 + (int)(uVar11 << 1)) = uVar8;
    } while (iVar16 + 1 < 0x28);
    DAT_010cc4dc = DAT_010cc4ec;
    DAT_010cc4d0 = (float)((double)(float)((double)DAT_010cc4e0 - (double)DAT_010cc4c0) * dVar44 +
                          (double)DAT_010cc4c0);
    DAT_010cc4d4 = (float)((double)(float)((double)DAT_010cc4e4 - (double)DAT_010cc4c4) * dVar44 +
                          (double)DAT_010cc4c4);
    DAT_010cc4d8 = (float)((double)(float)((double)DAT_010cc4e8 - (double)DAT_010cc4c8) * dVar44 +
                          (double)DAT_010cc4c8);
    iVar6 = MB_randRange(DAT_00857208,DAT_0085720c);
    fVar1 = animationSpeed * (float)((double)(longlong)iVar6 + dVar44);
    DAT_010cc554 = (int)fVar1;
    DAT_010cc248 = (int)fVar1;
    dVar44 = (double)FastIntToDouble
                               ((int)fVar1 -
                                (int)(animationSpeed *
                                     (float)((double)(longlong)DAT_008571e4 + dVar44)));
    DAT_010cc558 = (float)(dVar21 / dVar44);
    iVar6 = MB_randInt(2);
    dVar44 = -1.0;
    if (iVar6 != 0) {
      dVar44 = dVar21;
    }
    iVar6 = 0;
    iVar16 = 0;
    iVar10 = 0;
    iVar17 = 0;
    do {
      uVar15 = MB_randRange(5,0x16);
      uVar8 = *(undefined2 *)((int)&DAT_010cc4f0 + (int)((uVar15 & 0xffffffff) << 1));
      *(int *)((int)&DAT_010cc8c0 + iVar10) = (int)uVar15;
      *(undefined4 *)((int)&DAT_010cc560 + iVar17) = 0;
      *(undefined2 *)((int)&DAT_010cc860 + iVar16) = uVar8;
      *(undefined4 *)((int)&DAT_010cc568 + iVar17) = 0;
      dVar42 = 10.0;
      dVar24 = (double)MB_randRangeFloat((float)dVar21,10.0);
      dVar41 = 1.3962633609771729;
      dVar22 = (double)MB_randRangeFloat(0.5235988,1.3962634);
      dVar23 = (double)(float)(dVar22 * dVar44);
      dVar40 = 1.570796251296997;
      dVar39 = 3.141592502593994;
      dVar38 = -3.141592502593994;
      dVar37 = -0.16666656732559204;
      dVar36 = 0.008333025500178337;
      dVar35 = -0.0001980741071747616;
      fVar1 = (float)(dVar23 + 1.570796251296997);
      dVar34 = 2.601886990305502e-06;
      pfVar13 = (float *)((int)&DAT_010cc560 + iVar17);
      puVar12 = (undefined2 *)((int)&DAT_010cc860 + iVar16);
      iVar20 = 1;
      pfVar14 = (float *)((int)&DAT_010cc578 + iVar17);
      dVar22 = (double)(float)(3.141592502593994 - dVar23);
      if (dVar23 - (double)(float)(3.141592502593994 - dVar23) < 0.0) {
        dVar22 = dVar23;
      }
      fVar2 = 3.1415925 - fVar1;
      if (fVar1 - (3.1415925 - fVar1) < 0.0) {
        fVar2 = fVar1;
      }
      dVar25 = (double)(float)(-3.141592502593994 - dVar23);
      if ((double)(float)(-3.141592502593994 - dVar23) - dVar22 < 0.0) {
        dVar25 = dVar22;
      }
      fVar3 = -3.1415925 - fVar1;
      if ((-3.1415925 - fVar1) - fVar2 < 0.0) {
        fVar3 = fVar2;
      }
      dVar22 = (double)(float)(dVar25 * dVar25);
      fVar4 = fVar3 * fVar3;
      dVar30 = (double)(float)(dVar22 * (double)(float)(dVar22 * dVar25));
      fVar1 = fVar4 * fVar4 * fVar3;
      dVar28 = (double)(float)(dVar22 * dVar30);
      fVar2 = fVar4 * fVar1;
      *(float *)((int)&DAT_010cc568 + iVar17) =
           (float)(dVar24 * (double)((float)(dVar22 * dVar28) * 2.601887e-06 +
                                    (float)(dVar28 * -0.0001980741071747616 +
                                           (double)(float)(dVar30 * 0.008333025500178337 +
                                                          (double)(float)((double)(float)(dVar22 * 
                                                  dVar25) * -0.16666656732559204 + dVar25)))));
      *(float *)((int)&DAT_010cc560 + iVar17) =
           (float)(dVar24 * (double)(fVar4 * fVar2 * 2.601887e-06 +
                                    fVar2 * -0.0001980741 +
                                    fVar1 * 0.0083330255 + fVar4 * fVar3 * -0.16666657 + fVar3));
      uVar33 = 0x4044000000000000;
      dVar22 = 0.01745329238474369;
      do {
        pfVar13 = pfVar13 + 4;
        puVar12 = puVar12 + 1;
        dVar24 = (double)MB_randRangeFloat((float)dVar21,(float)dVar42);
        dVar25 = (double)MB_randRangeSigned(dVar43,uVar33);
        dVar28 = (double)(float)(dVar25 * dVar22);
        dVar25 = (double)FastWrapRot((float)dVar23,(float)(dVar25 * dVar22));
        if (((dVar41 < ABS(dVar25)) || ((dVar43 < dVar23 && (dVar25 < dVar43)))) ||
           ((dVar23 < dVar43 && (dVar43 < dVar25)))) {
          dVar25 = (double)FastWrapRot((float)dVar23,(float)-dVar28);
        }
        iVar7 = *(int *)((int)&DAT_010cc8c0 + iVar10) + iVar20;
        iVar20 = iVar20 + 1;
        dVar28 = (double)(float)(dVar25 + dVar40);
        *puVar12 = (&DAT_010cc4f0)[iVar7];
        dVar23 = (double)(float)(dVar39 - dVar25);
        if (dVar25 - (double)(float)(dVar39 - dVar25) < 0.0) {
          dVar23 = dVar25;
        }
        dVar30 = (double)(float)(dVar39 - dVar28);
        if (dVar28 - (double)(float)(dVar39 - dVar28) < 0.0) {
          dVar30 = dVar28;
        }
        dVar26 = (double)(float)(dVar38 - dVar25);
        if ((double)(float)(dVar38 - dVar25) - dVar23 < 0.0) {
          dVar26 = dVar23;
        }
        dVar23 = (double)(float)(dVar38 - dVar28);
        if ((double)(float)(dVar38 - dVar28) - dVar30 < 0.0) {
          dVar23 = dVar30;
        }
        dVar28 = (double)(float)(dVar26 * dVar26);
        dVar30 = (double)(float)(dVar23 * dVar23);
        dVar31 = (double)(float)(dVar28 * (double)(float)(dVar28 * dVar26));
        dVar27 = (double)(float)(dVar30 * (double)(float)(dVar30 * dVar23));
        dVar29 = (double)(float)(dVar28 * dVar31);
        dVar32 = (double)(float)(dVar30 * dVar27);
        *pfVar14 = (float)(dVar24 * (double)(float)((double)(float)(dVar28 * dVar29) * dVar34 +
                                                   (double)(float)(dVar29 * dVar35 +
                                                                  (double)(float)(dVar31 * dVar36 +
                                                                                 (double)(float)((
                                                  double)(float)(dVar28 * dVar26) * dVar37 + dVar26)
                                                  ))));
        pfVar14 = pfVar14 + 4;
        *pfVar13 = (float)(dVar24 * (double)(float)((double)(float)(dVar30 * dVar32) * dVar34 +
                                                   (double)(float)(dVar32 * dVar35 +
                                                                  (double)(float)(dVar27 * dVar36 +
                                                                                 (double)(float)((
                                                  double)(float)(dVar30 * dVar23) * dVar37 + dVar23)
                                                  ))));
        dVar23 = dVar25;
      } while (iVar20 < 0x10);
      iVar6 = iVar6 + 1;
      dVar44 = -dVar44;
      iVar17 = iVar17 + 0x100;
      iVar10 = iVar10 + 4;
      iVar16 = iVar16 + 0x20;
    } while (iVar6 < 3);
  }
  if (param_1 == DAT_010cc54c) {
    FastDecTimerS32(&DAT_010cc248);
    dVar43 = 0.5;
    iVar6 = 0;
    auVar48 = loadVectorLeftIndexed(8,0x411458);
    dVar21 = 0.20000000298023224;
    uVar15 = ZEXT48(&DAT_010cc4f0);
    auVar48 = auVar48 >> 0x60 & (GPiece<16>)0xffffffff;
    auVar48 = auVar48 | auVar48 << 0x20 | auVar48 << 0x40 | auVar48 << 0x60;
    pfVar13 = (float *)&DAT_010cc278;
    do {
      psVar18 = (short *)uVar15;
      sVar9 = *psVar18;
      lVar5 = (longlong)DAT_008571e4;
      auVar45 = ZEXT416(0xffffffff);
      auVar46 = auVar45 | auVar45 << 0x20 | auVar45 << 0x40 | auVar45 << 0x60;
      auVar45 = loadVectorLeftIndexed(0x71e4,0x850000);
      auVar46 = vectorShiftLeftIntegerWord(auVar46,auVar46);
      auVar45 = vectorConvertFromSignedFixedPointWord(auVar45,0);
      *psVar18 = sVar9 + 1;
      auVar47 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
      auVar45 = vectorAddFloatingPoint(auVar45,auVar48);
      auVar45 = vectorMultiplyAddFloatingPoint(auVar47,auVar45,auVar46);
      auVar45 = vectorConvertToSignedFixedPointWordSaturate(auVar45,0);
      if ((int)(animationSpeed * (float)((double)lVar5 + dVar43)) < (int)(short)(sVar9 + 1)) {
        auVar45 = vectorSplatHalfWord(auVar45,1);
        sVar9 = storeVectorElementHalfWordIndexed(auVar45,0,uVar15);
        *psVar18 = sVar9;
      }
      if (0x22 < iVar6) {
        dVar44 = (double)FastIntToDouble(iVar6 + -0x23);
        *pfVar13 = *pfVar13 + -(*pfVar13 * (float)(dVar44 * dVar21));
      }
      fVar1 = animationSpeed;
      iVar6 = iVar6 + 1;
      uVar15 = uVar15 + 2;
      pfVar13 = pfVar13 + 4;
    } while (iVar6 < 0x28);
    auVar45 = loadVectorLeftIndexed(0x71e4,0x850000);
    auVar46 = vectorConvertFromSignedFixedPointWord(auVar45,0);
    auVar45 = ZEXT416(0xffffffff);
    auVar47 = auVar45 | auVar45 << 0x20 | auVar45 << 0x40 | auVar45 << 0x60;
    iVar16 = 0;
    auVar45 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
    auVar47 = vectorShiftLeftIntegerWord(auVar47,auVar47);
    uVar15 = ZEXT48(&DAT_010cc860);
    auVar48 = vectorAddFloatingPoint(auVar46,auVar48);
    auVar48 = vectorMultiplyAddFloatingPoint(auVar48,auVar45,auVar47);
    auVar48 = vectorConvertToSignedFixedPointWordSaturate(auVar48,0);
    iVar6 = (int)((float)((double)(longlong)DAT_008571e4 + dVar43) * animationSpeed);
    auVar48 = vectorSplatHalfWord(auVar48,1);
    do {
      iVar10 = 0;
      uVar11 = uVar15;
      do {
        psVar18 = (short *)uVar11;
        sVar9 = *psVar18;
        *psVar18 = sVar9 + 1;
        if (iVar6 < (short)(sVar9 + 1)) {
          sVar9 = storeVectorElementHalfWordIndexed(auVar48,0,uVar11);
          *psVar18 = sVar9;
        }
        iVar10 = iVar10 + 1;
        uVar11 = uVar11 + 2;
      } while (iVar10 < 0x10);
      iVar16 = iVar16 + 1;
      uVar15 = uVar15 + 0x20;
    } while (iVar16 < 3);
    if (DAT_010cc248 < DAT_010cc554 - iVar6) {
      if (((int)(fVar1 * 60.5) < DAT_010cc554) &&
         ((int)(FLOAT_ORDER(DAT_010cc548)) < 0x40c90fdb)) {
        fVar1 = 3.1415925 - DAT_010cc544;
        if (DAT_010cc544 - (3.1415925 - DAT_010cc544) < 0.0) {
          fVar1 = DAT_010cc544;
        }
        fVar2 = -3.1415925 - DAT_010cc544;
        if ((-3.1415925 - DAT_010cc544) - fVar1 < 0.0) {
          fVar2 = fVar1;
        }
        fVar1 = fVar2 * fVar2;
        fVar3 = fVar1 * fVar1 * fVar2;
        fVar4 = fVar1 * fVar3;
        DAT_010cc542 = FastDoubleToInt
                                 ((double)((fVar1 * fVar4 * 2.601887e-06 +
                                           fVar4 * -0.0001980741 +
                                           fVar3 * 0.0083330255 +
                                           fVar1 * fVar2 * -0.16666657 + fVar2) * 128.0));
        dVar21 = (double)FastWrapRot(DAT_010cc544,DAT_008571e0);
        DAT_010cc544 = (float)dVar21;
        DAT_010cc548 = DAT_0071f408 * DAT_008571e0 + DAT_010cc548;
      }
      else {
        DAT_010cc542 = 0;
      }
      dVar21 = (double)FastIntToDouble(DAT_010cc248);
      sVar9 = FastDoubleToInt
                        ((double)((float)(dVar21 * (double)DAT_010cc558) * -255.0 + 255.0));
      uVar19 = sVar9 + DAT_010cc542;
      DAT_010cc540 = (byte)uVar19;
      if (DAT_010cc55c != 0) {
        sound_LevelPlay(0,0,param_1);
        DAT_010cc55c = 0;
        uVar19 = (ushort)DAT_010cc540;
      }
      if ((uVar19 & 0xff) < 0x32) {
        M684_00411198(&DAT_010cc250,3);
      }
    }
    else {
      DAT_010cc540 = 0;
    }
    RegisterPostDraw(&PTR_M685_004122c8_0070e048,param_1);
    return;
  }
  return;
}


// 0x0411f38 (0x370 bytes)
/* Moby 684 */

void UpdateMoby_684(MobyInstance *moby)

{
  u8 uVar1;
  int *piVar2;
  Spline *pSVar3;
  longlong lVar4;
  int iVar5;
  int iVar6;
  longlong lVar7;
  int iVar8;
  double dVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  GPiece<16> auVar12;
  GPiece<16> auVar13;
  GPiece<16> auVar14;
  GPiece<16> auVar15;
  GPiece<16> local_60;
  int aiStack_50 [6];
  
  uVar1 = moby->state;
  piVar2 = (int *)moby->pVar;
  if (uVar1 == '\0') {
    if (Level == Oltanis) {
      g_hasClank = 1;
    }
    moby->state = '\x01';
    moby->updateDistance = -1;
    DAT_010cc244 = 0;
    DAT_010cc240 = 0;
    uVar1 = moby->state;
  }
  if (uVar1 == '\x01') {
    if ((g_gameMode == GAME_MODE_NORMAL) && (g_MiscLevelFlags.field104_0x68 == 0)) {
      mode_sceneInit(0);
      g_MiscLevelFlags.field104_0x68 = 1;
      moby->state = '\x02';
      Space_DisableShip();
    }
  }
  else if (uVar1 == '\x02') {
    if (g_gameMode != GAME_MODE_SCENE) {
      moby->state = '\x03';
      Space_EnableShip();
    }
  }
  else {
    iVar5 = FastDecTimerS32(&DAT_010cc240);
    if (iVar5 != 0) {
      if (DAT_010cc244 == 0) {
        iVar5 = 0;
        lVar7 = 0;
        uVar10 = 0x406fe00000000000;
        pSVar3 = Splines[*piVar2];
        while( true ) {
          iVar8 = (int)lVar7;
          if (pSVar3->cnt <= iVar5 || 4 < iVar8) break;
          iVar6 = FastCheckBsphereInView(uVar10,local_60);
          if (0 < iVar6) {
            lVar4 = lVar7 << 2;
            lVar7 = (longlong)(iVar8 + 1);
            *(int *)((int)aiStack_50 + (int)lVar4) = iVar5;
          }
          iVar5 = iVar5 + 1;
        }
        if (0 < iVar8) {
          lVar7 = MB_randInt(lVar7);
          iVar5 = *(int *)((int)aiStack_50 + (int)(lVar7 << 2));
          DAT_010cc250 = pSVar3->points[iVar5].x;
          DAT_010cc254 = pSVar3->points[iVar5].y;
          DAT_010cc258 = pSVar3->points[iVar5].z;
          DAT_010cc25c = 1.0;
          DAT_010cc26c = 0x3f800000;
          DAT_010cc268 = DAT_008571d4;
          uVar11 = 0;
          uVar10 = 0x4034000000000000;
          DAT_010cc260 = DAT_010cc250;
          DAT_010cc264 = DAT_010cc254;
          dVar9 = (double)MB_randRangeSigned(0,0x4034000000000000);
          DAT_010cc260 = (float)((double)DAT_010cc260 + dVar9);
          dVar9 = (double)MB_randRangeSigned(uVar11,uVar10);
          DAT_010cc264 = (float)((double)DAT_010cc264 + dVar9);
          (moby->pos).x = DAT_010cc250;
          (moby->pos).y = DAT_010cc254;
          (moby->pos).z = DAT_010cc258;
          (moby->pos).w = DAT_010cc25c;
        }
      }
      M684_004114b0(moby);
      if (DAT_010cc248 == 0) {
        auVar13 = ZEXT416(0xffffffff);
        auVar13 = auVar13 | auVar13 << 0x20 | auVar13 << 0x40 | auVar13 << 0x60;
        auVar14 = vectorShiftLeftIntegerWord(auVar13,auVar13);
        auVar13 = loadVectorLeftIndexed(0x71d0,0x850000);
        auVar12 = vectorConvertFromSignedFixedPointWord(auVar13,0);
        auVar13 = loadVectorLeftIndexed(0xc,0x411f28);
        auVar13 = auVar13 >> 0x60 & (GPiece<16>)0xffffffff;
        auVar15 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
        auVar13 = vectorAddFloatingPoint
                            (auVar12,auVar13 | auVar13 << 0x20 | auVar13 << 0x40 | auVar13 << 0x60);
        auVar13 = vectorMultiplyAddFloatingPoint(auVar15,auVar13,auVar14);
        auVar13 = vectorConvertToSignedFixedPointWordSaturate(auVar13,0);
        auVar13 = auVar13 >> 0x60 & (GPiece<16>)0xffffffff;
        DAT_010cc240 = storeVectorElementWordIndexed
                                 (auVar13 | auVar13 << 0x20 | auVar13 << 0x40 | auVar13 << 0x60,
                                  0xffffffffffffc240,0x10d0000);
        DAT_010cc244 = 0;
      }
    }
  }
  return;
}


