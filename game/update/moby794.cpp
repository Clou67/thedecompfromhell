// game/update/moby794.cpp -- reconstructed from NPEA00385 EBOOT
// STATUS: NOT STARTED (raw Ghidra output)
// 6 functions, 0x4603c4-0x461678
#include <math.h>
#include <stdio.h>
#include <string.h>
#include "game/update/moby794.h"
#include "game/collproc.h"
#include "game/debug.h"
#include "game/draw.h"
#include "game/hero.h"
#include "game/mobyfunc.h"
#include "game/mobyutil.h"
#include "idol/fastfunc.h"

// 0x04603c4 (0x14 bytes)
void M794_004603c4(void)

{
  DAT_00873dbc = 0x10000;
  return;
}


// 0x04603e0 (0x458 bytes)
ulonglong M794_004603e0(longlong param_1,undefined8 param_2)

{
  longlong lVar1;
  float fVar2;
  float fVar3;
  byte bVar4;
  float fVar5;
  float fVar6;
  uint uVar7;
  undefined4 uVar8;
  ulonglong *puVar9;
  float *pfVar10;
  ulonglong uVar11;
  ulonglong uVar12;
  longlong lVar13;
  ulonglong uVar14;
  void *pvVar15;
  uint *puVar16;
  ulonglong uVar17;
  int iVar18;
  int iVar19;
  int iVar20;
  int iVar21;
  undefined8 in_LR;
  double dVar22;
  double dVar23;
  double dVar24;
  double dVar25;
  double dVar26;
  double dVar27;
  double dVar28;
  double dVar29;
  GPiece<16> auVar30;
  GPiece<16> auVar31;
  GPiece<16> auVar32;
  GPiece<16> auVar33;
  GPiece<16> auVar34;
  GPiece<16> auVar35;
  GPiece<16> auVar36;
  GPiece<16> auVar37;
  GPiece<16> auVar38;
  
  uVar11 = ZEXT48(&stack0x00000000);
  lVar1 = uVar11 - 0x1c0;
  puVar9 = (ulonglong *)lVar1;
  *puVar9 = uVar11;
  pfVar10 = (float *)param_2;
  uVar12 = (ulonglong)(uint)pfVar10[2] & 0x100;
  if ((int)uVar12 == 0) {
    FastEulerToMtx(uVar11 - 0x120,param_1 + 0x40);
    auVar30 = loadVectorLeftIndexed(in_LR,param_2);
    auVar31 = loadVectorLeftIndexed(in_LR,0x4603d8);
    auVar31 = auVar31 >> 0x60 & (GPiece<16>)0xffffffff;
    auVar32 = loadVectorLeftIndexed(4,param_2);
    auVar33 = vectorCompareGreaterThanFloatingPoint(auVar30,auVar32);
    auVar32 = vectorConditionalSelect(auVar32,auVar30,auVar33);
    auVar30 = ZEXT416(0xffffffff);
    auVar30 = auVar30 | auVar30 << 0x20 | auVar30 << 0x40 | auVar30 << 0x60;
    auVar33 = loadVectorLeftIndexed(0xc0,lVar1);
    auVar34 = loadVectorLeftIndexed(0xc4,lVar1);
    auVar35 = loadVectorLeftIndexed(0xcc,lVar1);
    auVar30 = vectorShiftLeftIntegerWord(auVar30,auVar30);
    auVar36 = loadVectorLeftIndexed(200,lVar1);
    auVar37 = loadVectorLeftIndexed(0x10,param_1);
    auVar31 = vectorMultiplyAddFloatingPoint
                        (auVar32,auVar31 | auVar31 << 0x20 | auVar31 << 0x40 | auVar31 << 0x60,
                         auVar30);
    auVar30 = ZEXT416(0xffffffff);
    auVar30 = auVar30 | auVar30 << 0x20 | auVar30 << 0x40 | auVar30 << 0x60;
    auVar32 = loadVectorLeftIndexed(0x14,param_1);
    auVar38 = loadVectorLeftIndexed(0x18,param_1);
    fVar2 = pfVar10[1];
    if (pfVar10[1] - *pfVar10 < 0.0) {
      fVar2 = *pfVar10;
    }
    auVar30 = vectorShiftLeftIntegerWord(auVar30,auVar30);
    dVar28 = 0.5;
    *(undefined4 *)((int)puVar9 + 0x8c) = 0;
    *(undefined4 *)(puVar9 + 0x11) = 0;
    *(undefined4 *)((int)puVar9 + 0x84) = 0;
    *(undefined4 *)(puVar9 + 0x10) = 0;
    auVar30 = vectorMultiplyAddFloatingPoint(auVar35,auVar31,auVar30);
    auVar35 = vectorMultiplyAddFloatingPoint(auVar33,auVar31,auVar37);
    auVar32 = vectorMultiplyAddFloatingPoint(auVar34,auVar31,auVar32);
    auVar33 = vectorMultiplyAddFloatingPoint(auVar36,auVar31,auVar38);
    auVar30 = auVar30 >> 0x60 & (GPiece<16>)0xffffffff;
    auVar31 = auVar35 >> 0x60 & (GPiece<16>)0xffffffff;
    auVar32 = auVar32 >> 0x60 & (GPiece<16>)0xffffffff;
    auVar33 = auVar33 >> 0x60 & (GPiece<16>)0xffffffff;
    uVar8 = storeVectorElementWordIndexed
                      (auVar30 | auVar30 << 0x20 | auVar30 << 0x40 | auVar30 << 0x60,0x8c,lVar1);
    *(undefined4 *)((int)puVar9 + 0x8c) = uVar8;
    uVar8 = storeVectorElementWordIndexed
                      (auVar31 | auVar31 << 0x20 | auVar31 << 0x40 | auVar31 << 0x60,0x80,lVar1);
    *(undefined4 *)(puVar9 + 0x10) = uVar8;
    uVar8 = storeVectorElementWordIndexed
                      (auVar32 | auVar32 << 0x20 | auVar32 << 0x40 | auVar32 << 0x60,0x84,lVar1);
    *(undefined4 *)((int)puVar9 + 0x84) = uVar8;
    uVar8 = storeVectorElementWordIndexed
                      (auVar33 | auVar33 << 0x20 | auVar33 << 0x40 | auVar33 << 0x60,0x88,lVar1);
    *(undefined4 *)(puVar9 + 0x11) = uVar8;
    uVar12 = CollMobySphere((double)(fVar2 * 0.5),uVar11 - 0x140,0x80,0x10,param_1,0);
    iVar21 = (int)uVar12;
    if (iVar21 != 0) {
      lVar13 = -((longlong)(int)(uVar12 << 2) + 0x7fU & 0xfffffffffffffff0);
      uVar14 = lVar1 + lVar13;
      uVar17 = uVar14 & 0xffffffff;
      *(ulonglong *)((int)puVar9 + (int)lVar13) = *puVar9;
      pvVar15 = memcpy((void *)((int)uVar14 + 0x70),&g_CollMobyHits,
                             (size_t)((uVar12 & 0xffffffff) << 2));
      uVar12 = (ulonglong)(int)pvVar15;
      iVar20 = 0;
      if (0 < iVar21) {
        do {
          uVar7 = *(uint *)((int)uVar17 + 0x70);
          if (uVar7 != 0) {
            bVar4 = *(byte *)(uVar7 + 0x20);
            uVar12 = (ulonglong)bVar4;
            if (bVar4 != 0xfd && bVar4 != 0xfe) {
              iVar18 = (int)param_1;
              dVar27 = (double)(*(float *)(uVar7 + 0x14) - *(float *)(iVar18 + 0x14));
              dVar26 = (double)(*(float *)(uVar7 + 0x10) - *(float *)(iVar18 + 0x10));
              dVar29 = (double)*(float *)(uVar7 + 0x1c);
              dVar25 = (double)(*(float *)(uVar7 + 0x18) - *(float *)(iVar18 + 0x18));
              FastNormalizeRMtx4(uVar11 - 0xf0,uVar11 - 0x120);
              dVar22 = (double)*pfVar10;
              dVar23 = (double)pfVar10[0x12];
              fVar2 = (float)((double)*(float *)(puVar9 + 0x20) * dVar29 +
                             (double)(float)((double)*(float *)(puVar9 + 0x1e) * dVar25 +
                                            (double)(float)((double)*(float *)(puVar9 + 0x1a) *
                                                            dVar26 + (double)(float)((double)*(float
                                                                                               *)(
                                                  puVar9 + 0x1c) * dVar27))));
              dVar24 = (double)pfVar10[1];
              fVar3 = (float)((double)*(float *)(puVar9 + 0x21) * dVar29 +
                             (double)(float)((double)*(float *)(puVar9 + 0x1f) * dVar25 +
                                            (double)(float)((double)*(float *)(puVar9 + 0x1b) *
                                                            dVar26 + (double)(float)((double)*(float
                                                                                               *)(
                                                  puVar9 + 0x1d) * dVar27))));
              fVar5 = *(float *)(iVar18 + 0x14);
              fVar6 = *(float *)(iVar18 + 0x18);
              if (-(float)(dVar22 * dVar28 + dVar23) <= fVar2) {
                if ((float)(dVar22 * dVar28 + dVar23) < fVar2) {
                  fVar2 = (float)(dVar22 * dVar28);
                }
              }
              else {
                fVar2 = (float)(dVar22 * -0.5);
              }
              if (-(float)(dVar24 * dVar28 + (double)pfVar10[0x13]) <= fVar3) {
                if ((float)(dVar24 * dVar28 + (double)pfVar10[0x13]) < fVar3) {
                  fVar3 = (float)(dVar24 * dVar28);
                }
              }
              else {
                fVar3 = (float)(dVar24 * -0.5);
              }
              *(float *)(puVar9 + 0x12) =
                   *(float *)(puVar9 + 0x14) * fVar2 +
                   *(float *)(puVar9 + 0x18) * fVar3 + *(float *)(iVar18 + 0x10);
              *(float *)((int)puVar9 + 0x94) =
                   *(float *)((int)puVar9 + 0xa4) * fVar2 +
                   *(float *)((int)puVar9 + 0xc4) * fVar3 + fVar5;
              *(float *)(puVar9 + 0x13) =
                   *(float *)(puVar9 + 0x15) * fVar2 + *(float *)(puVar9 + 0x19) * fVar3 + fVar6;
              *(float *)((int)puVar9 + 0x9c) =
                   *(float *)((int)puVar9 + 0xcc) * fVar3 + *(float *)((int)puVar9 + 0xac) * fVar2 +
                   (float)((double)*(float *)((int)puVar9 + 0x10c) * dVar29 +
                          (double)(float)((double)*(float *)((int)puVar9 + 0xfc) * dVar25 +
                                         (double)(float)((double)*(float *)((int)puVar9 + 0xdc) *
                                                         dVar26 + (double)(float)((double)*(float *)
                                                  ((int)puVar9 + 0xec) * dVar27))));
              uVar12 = CollMobySphere(dVar23,uVar11 - 0x130);
              iVar18 = 0;
              iVar19 = (int)uVar12;
              puVar16 = &g_CollMobyHits;
              if (0 < iVar19) {
                do {
                  uVar12 = (ulonglong)*puVar16;
                  if (*puVar16 == uVar7) {
                    uVar12 = CollDamageMobyDirect_wrap
                                       ((double)pfVar10[0x14],uVar7,param_1,0x10001);
                  }
                  iVar18 = iVar18 + 1;
                  puVar16 = puVar16 + 1;
                } while (iVar18 < iVar19);
              }
            }
          }
          iVar20 = iVar20 + 1;
          uVar17 = uVar17 + 4;
        } while (iVar20 < iVar21);
      }
    }
  }
  return uVar12;
}


// 0x0460838 (0x4e8 bytes)
// strings: 00658368: 'Warning! moby 794 does not have effect moby!\n' | 00658398: 'M794 %d trigger %d = moby %d (oClass %d)\n' | 006583c8: 'M794 %d trigger %d = NO MOBY! (-1)\n'

/* Moby 794 */

void UpdateMoby_794(MobyInstance *moby)

{
  byte bVar1;
  byte bVar2;
  float fVar3;
  float fVar4;
  MOBY_OCLASSES MVar5;
  float *pfVar6;
  s8 sVar7;
  float fVar8;
  int iVar9;
  MobyInstance *pMVar10;
  uint uVar11;
  float *pfVar12;
  MobyInstance *moby_00;
  ulonglong uVar13;
  int iVar14;
  double dVar15;
  double dVar16;
  
  iVar14 = 0;
  uVar13 = 0;
  pfVar6 = (float *)moby->pVar;
  moby_00 = (MobyInstance *)0x0;
  bVar1 = moby->state;
  if (pfVar6[4] != -NAN) {
    moby_00 = g_MobyInstance + (int)pfVar6[4];
  }
  if (((moby->levelFlagIdx == 0xff) || (g_LevelFlags[Level][(byte)moby->levelFlagIdx] != -1)) &&
     (bVar1 != 0)) {
    iVar9 = 0;
    pfVar12 = pfVar6;
    iVar14 = 0;
    do {
      if ((((pfVar12[6] != -NAN) &&
           (pMVar10 = g_MobyInstance + (int)pfVar12[6], pMVar10 != (MobyInstance *)0x0)) &&
          ((pMVar10->oClass == *(MOBY_OCLASSES *)(pfVar12 + 7) &&
           ((bVar2 = pMVar10->state, bVar2 != 0xfd && bVar2 != 0xfe &&
            ((*(uint *)(&g_LevelObjBits +
                       Level * 0x100 + (int)((longlong)((int)(short)pMVar10->uid >> 5) << 2)) &
             1 << (pMVar10->uid & 0x1f)) == 0)))))) &&
         (((int)*(char *)((int)pfVar12 + 0x1e) == 0xffffffff ||
          ((uint)bVar2 != (int)*(char *)((int)pfVar12 + 0x1e))))) {
        iVar14 = iVar14 + 1;
      }
      iVar9 = iVar9 + 1;
      pfVar12 = pfVar12 + 2;
    } while (iVar9 < 5);
  }
  if (bVar1 < 2) {
    if (bVar1 == 0) {
      if (moby_00 == (MobyInstance *)0x0) {
        printf("Warning! moby 794 does not have effect moby!\n");
      }
      else {
        *(MOBY_OCLASSES *)(pfVar6 + 5) = moby_00->oClass;
        dVar15 = (double)FastIntToDouble(moby_00->alpha);
        pfVar6[0x11] = (float)dVar15;
        if (((uint)pfVar6[2] & 0x10) == 0) {
          if (((uint)pfVar6[2] & 0x40) != 0) {
            (moby_00->pos).x = (moby->pos).x;
            (moby_00->pos).y = (moby->pos).y;
            (moby_00->pos).z = (moby->pos).z;
            (moby_00->pos).w = (moby->pos).w;
          }
        }
        else {
          (moby->pos).x = (moby_00->pos).x;
          (moby->pos).y = (moby_00->pos).y;
          (moby->pos).z = (moby_00->pos).z;
          (moby->pos).w = (moby_00->pos).w;
        }
        if (((uint)pfVar6[2] & 0x20) == 0) {
          if (((uint)pfVar6[2] & 0x80) != 0) {
            (moby_00->rotation).x = (moby->rotation).x;
            (moby_00->rotation).y = (moby->rotation).y;
            (moby_00->rotation).z = (moby->rotation).z;
            (moby_00->rotation).w = (moby->rotation).w;
          }
        }
        else {
          (moby->rotation).x = (moby_00->rotation).x;
          (moby->rotation).y = (moby_00->rotation).y;
          (moby->rotation).z = (moby_00->rotation).z;
          (moby->rotation).w = (moby_00->rotation).w;
        }
      }
      do {
        iVar9 = (int)((uVar13 & 0xffffffff) << 3);
        iVar14 = *(int *)((int)pfVar6 + iVar9 + 0x18);
        if (iVar14 == -1) {
          uVar11 = (int)moby - (int)g_MobyInstance;
          printf("M794 %d trigger %d = NO MOBY! (-1)\n",
                       ((int)uVar11 >> 8) + (uint)((int)uVar11 < 0 && (uVar11 & 0xff) != 0),uVar13);
        }
        else {
          uVar11 = (int)moby - (int)g_MobyInstance;
          MVar5 = g_MobyInstance[iVar14].oClass;
          *(MOBY_OCLASSES *)((int)pfVar6 + iVar9 + 0x1c) = MVar5;
          printf("M794 %d trigger %d = moby %d (oClass %d)\n",
                       ((int)uVar11 >> 8) + (uint)((int)uVar11 < 0 && (uVar11 & 0xff) != 0),uVar13,
                       *(undefined4 *)((int)pfVar6 + iVar9 + 0x18),MVar5);
        }
        iVar14 = (int)uVar13 + 1;
        uVar13 = (ulonglong)iVar14;
      } while (iVar14 < 5);
      fVar8 = pfVar6[1];
      fVar3 = *pfVar6;
      fVar4 = moby->pClass->gScale;
      moby->state = '\x01';
      if (fVar3 - fVar8 < 0.0) {
        fVar3 = fVar8;
      }
      moby->scale = fVar4 * fVar3;
    }
    else {
      if (iVar14 == 0) {
        if ((moby_00 != (MobyInstance *)0x0) && (*(u8 *)((int)pfVar6 + 0x16) != 0xff)) {
          moby_00->state = *(u8 *)((int)pfVar6 + 0x16);
        }
        pfVar6[0x10] = pfVar6[3];
        moby->state = '\x02';
      }
      M794_004603e0(moby,pfVar6);
    }
  }
  else if (bVar1 < 3) {
    if ((moby_00 != (MobyInstance *)0x0) && (((uint)pfVar6[2] & 2) == 0)) {
      dVar15 = (double)FastIntToDouble(pfVar6[3]);
      dVar16 = (double)FastIntToDouble(pfVar6[0x10]);
      sVar7 = FastDoubleToInt
                        ((double)(float)((double)(float)((double)pfVar6[0x11] * dVar16) / dVar15));
      moby_00->alpha = sVar7;
    }
    fVar8 = pfVar6[2];
    if (((((uint)fVar8 & 4) == 0 && moby_00 != (MobyInstance *)0x0) &&
        ((int)*(char *)((int)pfVar6 + 0x17) != 0xffffffff)) &&
       ((uint)moby_00->state == (int)*(char *)((int)pfVar6 + 0x17))) {
      moby->state = '\x03';
      fVar8 = pfVar6[2];
    }
    if ((((uint)fVar8 & 8) == 0) && (iVar14 = FastDecTimerS32(pfVar6 + 0x10), iVar14 != 0)
       ) {
      moby->state = '\x03';
    }
    M794_004603e0(moby,pfVar6);
  }
  else if (bVar1 < 4) {
    if ((moby_00 != (MobyInstance *)0x0) && (((uint)pfVar6[2] & 1) == 0)) {
      DeleteMoby(moby_00);
    }
    DeleteMoby(moby);
  }
  return;
}


// 0x0460d20 (0x14 bytes)
void M794_00460d20(void)

{
  DAT_00873e2c = 0x10000;
  return;
}


// 0x0460d48 (0x270 bytes)
// inlined: FastRSqrt @0x460e38, FastRSqrt @0x460eb8, FastRSqrt @0x460f34
void M8_00460d48(int param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  int iVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  int iVar16;
  GPiece<16> local_30;
  
  iVar11 = *(int *)(param_1 + 0x78);
  iVar16 = MB_randInt(5);
  if (iVar16 != 0) {
    FastIntToDouble(*(undefined2 *)(param_1 + 0x32));
    iVar16 = FastCheckBsphereInView(local_30);
    if (-1 < iVar16) {
      GetBoneTransformations(param_1,1,iVar11 + 0xa0);
      fVar1 = *(float *)(iVar11 + 0xa4);
      fVar2 = *(float *)(iVar11 + 0xa0);
      fVar3 = *(float *)(iVar11 + 0xa8);
      fVar4 = 0.0;
      fVar5 = *(float *)(iVar11 + 0xb0);
      fVar6 = *(float *)(iVar11 + 0xb4);
      fVar7 = *(float *)(iVar11 + 0xb8);
      fVar15 = fVar3 * fVar3 + fVar2 * fVar2 + fVar1 * fVar1;
      fVar8 = *(float *)(iVar11 + 0xc0);
      fVar9 = *(float *)(iVar11 + 0xc4);
      fVar10 = *(float *)(iVar11 + 200);
      fVar14 = fVar4;
      fVar12 = fVar4;
      fVar13 = fVar4;
      if (SQRT(fVar15) != 0.0) {
        fVar14 = 1.0 / SQRT(fVar15);
        fVar14 = -(fVar15 * fVar14 * fVar14 - 1.0) * fVar14 * 0.5 + fVar14;
        fVar14 = -(fVar15 * fVar14 * fVar14 - 1.0) * fVar14 * 0.5 + fVar14;
        fVar14 = -(fVar15 * fVar14 * fVar14 - 1.0) * fVar14 * 0.5 + fVar14;
        fVar13 = fVar2 * fVar14;
        fVar12 = fVar1 * fVar14;
        fVar14 = fVar3 * fVar14;
      }
      *(float *)(iVar11 + 0xa4) = fVar12;
      *(float *)(iVar11 + 0xa0) = fVar13;
      *(float *)(iVar11 + 0xa8) = fVar14;
      fVar12 = fVar7 * fVar7 + fVar5 * fVar5 + fVar6 * fVar6;
      fVar1 = fVar4;
      fVar2 = fVar4;
      fVar3 = fVar4;
      if (SQRT(fVar12) != 0.0) {
        fVar1 = 1.0 / SQRT(fVar12);
        fVar1 = -(fVar12 * fVar1 * fVar1 - 1.0) * fVar1 * 0.5 + fVar1;
        fVar1 = -(fVar12 * fVar1 * fVar1 - 1.0) * fVar1 * 0.5 + fVar1;
        fVar1 = -(fVar12 * fVar1 * fVar1 - 1.0) * fVar1 * 0.5 + fVar1;
        fVar3 = fVar5 * fVar1;
        fVar2 = fVar6 * fVar1;
        fVar1 = fVar7 * fVar1;
      }
      *(float *)(iVar11 + 0xb8) = fVar1;
      *(float *)(iVar11 + 0xb0) = fVar3;
      *(float *)(iVar11 + 0xb4) = fVar2;
      fVar3 = fVar10 * fVar10 + fVar8 * fVar8 + fVar9 * fVar9;
      fVar1 = fVar4;
      fVar2 = fVar4;
      if (SQRT(fVar3) != 0.0) {
        fVar1 = 1.0 / SQRT(fVar3);
        fVar1 = -(fVar3 * fVar1 * fVar1 - 1.0) * fVar1 * 0.5 + fVar1;
        fVar1 = -(fVar3 * fVar1 * fVar1 - 1.0) * fVar1 * 0.5 + fVar1;
        fVar1 = -(fVar3 * fVar1 * fVar1 - 1.0) * fVar1 * 0.5 + fVar1;
        fVar4 = fVar8 * fVar1;
        fVar2 = fVar9 * fVar1;
        fVar1 = fVar10 * fVar1;
      }
      *(float *)(iVar11 + 0xc0) = fVar4;
      *(float *)(iVar11 + 0xc4) = fVar2;
      *(float *)(iVar11 + 200) = fVar1;
      *(undefined4 *)(iVar11 + 0x20c) = 2;
    }
  }
  return;
}


// 0x0460fd0 (0x6a8 bytes)
// inlined: FastRSqrt @0x461120, FastRSqrt @0x46119c, FastRSqrt @0x461218, FastAtan2 @0x461320, FastAtan2 @0x4614d8
undefined8 M8_00460fd0(void *param_1,int param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  undefined2 uVar11;
  int iVar12;
  ulonglong *puVar13;
  int iVar14;
  ulonglong uVar15;
  int iVar18;
  longlong lVar16;
  longlong lVar17;
  longlong lVar19;
  float *pfVar20;
  ulonglong uVar21;
  longlong lVar22;
  ulonglong unaff_r27;
  ulonglong unaff_r28;
  undefined8 uVar23;
  ulonglong unaff_r29;
  ulonglong unaff_r30;
  ulonglong unaff_r31;
  ulonglong in_LR;
  longlong lVar24;
  double dVar25;
  double dVar26;
  double dVar27;
  double dVar28;
  ulonglong in_f26;
  double dVar29;
  ulonglong in_f27;
  double dVar30;
  ulonglong in_f28;
  double dVar31;
  ulonglong in_f29;
  double dVar32;
  ulonglong in_f30;
  double dVar33;
  ulonglong in_f31;
  double dVar34;
  
  uVar15 = ZEXT48(&stack0x00000000);
  lVar17 = uVar15 - 0x130;
  puVar13 = (ulonglong *)lVar17;
  *puVar13 = uVar15;
  puVar13[0x28] = in_LR;
  puVar13[0x20] = in_f26;
  puVar13[0x21] = in_f27;
  puVar13[0x22] = in_f28;
  puVar13[0x23] = in_f29;
  puVar13[0x24] = in_f30;
  puVar13[0x25] = in_f31;
  puVar13[0x1f] = unaff_r31;
  puVar13[0x1d] = unaff_r29;
  iVar12 = *(int *)((int)param_1 + 0x78);
  dVar29 = 0.5;
  fVar2 = *(float *)(iVar12 + 0xd0);
  dVar33 = (double)((*(float *)(iVar12 + 0x174) - *(float *)(iVar12 + 0xd4)) * 0.5);
  dVar34 = (double)((float)((double)*(float *)(iVar12 + 0x170) - (double)fVar2) * 0.5);
  dVar32 = (double)((*(float *)(iVar12 + 0x178) - *(float *)(iVar12 + 0xd8)) * 0.5);
  puVar13[0x1b] = unaff_r27;
  puVar13[0x1e] = unaff_r30;
  puVar13[0x1c] = unaff_r28;
  uVar23 = 0;
  dVar31 = (double)(float)(dVar34 * dVar34 + (double)(float)(dVar33 * dVar33));
  *(float *)(puVar13 + 0xe) = (float)((double)fVar2 + dVar34);
  *(float *)((int)puVar13 + 0x74) = (float)((double)*(float *)(iVar12 + 0xd4) + dVar33);
  uVar11 = *(undefined2 *)((int)param_1 + 0x32);
  *(float *)(puVar13 + 0xf) = (float)((double)*(float *)(iVar12 + 0xd8) + dVar32);
  *(float *)((int)puVar13 + 0x7c) = SQRT((float)(dVar32 * dVar32 + dVar31)) + 2.0;
  FastIntToDouble(uVar11);
  iVar18 = FastCheckBsphereInView(uVar15 - 0xc0);
  if (-1 < iVar18) {
    GetBoneTransformations(param_1,1,iVar12 + 0xa0);
    fVar2 = *(float *)(iVar12 + 0xa4);
    fVar3 = *(float *)(iVar12 + 0xa0);
    fVar4 = *(float *)(iVar12 + 0xa8);
    dVar30 = 0.0;
    fVar5 = *(float *)(iVar12 + 0xb0);
    fVar6 = *(float *)(iVar12 + 0xb4);
    fVar7 = *(float *)(iVar12 + 0xb8);
    fVar8 = *(float *)(iVar12 + 0xc0);
    fVar9 = *(float *)(iVar12 + 0xc4);
    dVar25 = (double)(fVar4 * fVar4 + fVar3 * fVar3 + fVar2 * fVar2);
    fVar10 = *(float *)(iVar12 + 200);
    dVar26 = dVar30;
    dVar27 = dVar30;
    dVar28 = dVar30;
    if ((float)SQRT(dVar25) != 0.0) {
      dVar26 = 1.0 / SQRT(dVar25);
      dVar26 = (double)(float)(-(double)(float)((double)(float)(dVar25 * dVar26) * dVar26 - 1.0) *
                               (double)(float)(dVar29 * dVar26) + dVar26);
      dVar26 = (double)(float)(-(double)(float)((double)(float)(dVar25 * dVar26) * dVar26 - 1.0) *
                               (double)(float)(dVar29 * dVar26) + dVar26);
      fVar1 = (float)(-(double)(float)((double)(float)(dVar25 * dVar26) * dVar26 - 1.0) *
                      (double)(float)(dVar29 * dVar26) + dVar26);
      dVar28 = (double)(fVar3 * fVar1);
      dVar27 = (double)(fVar2 * fVar1);
      dVar26 = (double)(fVar4 * fVar1);
    }
    *(float *)(iVar12 + 0xa8) = (float)dVar26;
    *(float *)(iVar12 + 0xa0) = (float)dVar28;
    *(float *)(iVar12 + 0xa4) = (float)dVar27;
    dVar25 = (double)(fVar7 * fVar7 + fVar5 * fVar5 + fVar6 * fVar6);
    dVar26 = dVar30;
    dVar27 = dVar30;
    dVar28 = dVar30;
    if ((float)SQRT(dVar25) != 0.0) {
      dVar26 = 1.0 / SQRT(dVar25);
      dVar26 = (double)(float)(-(double)(float)((double)(float)(dVar25 * dVar26) * dVar26 - 1.0) *
                               (double)(float)(dVar29 * dVar26) + dVar26);
      dVar26 = (double)(float)(-(double)(float)((double)(float)(dVar25 * dVar26) * dVar26 - 1.0) *
                               (double)(float)(dVar29 * dVar26) + dVar26);
      fVar2 = (float)(-(double)(float)((double)(float)(dVar25 * dVar26) * dVar26 - 1.0) *
                      (double)(float)(dVar29 * dVar26) + dVar26);
      dVar28 = (double)(fVar5 * fVar2);
      dVar27 = (double)(fVar6 * fVar2);
      dVar26 = (double)(fVar7 * fVar2);
    }
    *(float *)(iVar12 + 0xb8) = (float)dVar26;
    *(float *)(iVar12 + 0xb4) = (float)dVar27;
    *(float *)(iVar12 + 0xb0) = (float)dVar28;
    dVar25 = (double)(fVar10 * fVar10 + fVar8 * fVar8 + fVar9 * fVar9);
    dVar26 = dVar30;
    dVar27 = dVar30;
    dVar28 = dVar30;
    if ((float)SQRT(dVar25) != 0.0) {
      dVar26 = 1.0 / SQRT(dVar25);
      dVar26 = (double)(float)(-(double)(float)((double)(float)(dVar25 * dVar26) * dVar26 - 1.0) *
                               (double)(float)(dVar29 * dVar26) + dVar26);
      dVar26 = (double)(float)(-(double)(float)((double)(float)(dVar25 * dVar26) * dVar26 - 1.0) *
                               (double)(float)(dVar29 * dVar26) + dVar26);
      fVar2 = (float)(-(double)(float)((double)(float)(dVar25 * dVar26) * dVar26 - 1.0) *
                      (double)(float)(dVar29 * dVar26) + dVar26);
      dVar28 = (double)(fVar8 * fVar2);
      dVar27 = (double)(fVar9 * fVar2);
      dVar26 = (double)(fVar10 * fVar2);
    }
    *(float *)(iVar12 + 0xc0) = (float)dVar28;
    *(float *)(iVar12 + 0xc4) = (float)dVar27;
    *(float *)(iVar12 + 200) = (float)dVar26;
    *(float *)((int)puVar13 + 0x8c) = (float)dVar34;
    *(float *)(puVar13 + 0x12) = (float)dVar33;
    *(float *)((int)puVar13 + 0x94) = (float)(ABS(dVar34) - ABS(dVar33));
    uVar21 = (ulonglong)(*(uint *)((int)puVar13 + 0x8c) >> 0x1c) & 8 |
             (ulonglong)(*(uint *)((int)puVar13 + 0x94) >> 0x1e) & 2 |
             (ulonglong)(*(uint *)(puVar13 + 0x12) >> 0x1d) & 4;
    fVar2 = *(float *)((int)param_1 + 0x48);
    dVar29 = ABS((double)*(float *)((int)puVar13 + 0x8c));
    if (*(float *)((int)puVar13 + 0x94) - 0.0 < 0.0) {
      dVar29 = ABS(dVar33);
    }
    fVar3 = *(float *)(&g_atanQuadrantTable + (int)(uVar21 << 2));
    dVar33 = ABS((double)*(float *)(puVar13 + 0x12));
    if (*(float *)((int)puVar13 + 0x94) - 0.0 < 0.0) {
      dVar33 = ABS(dVar34);
    }
    fVar4 = *(float *)(((uint)(uVar21 << 2) | 0x735900) + 4);
    dVar26 = 0.7853981852531433;
    dVar34 = dVar30;
    if (0.0 < dVar29) {
      lVar16 = uVar15 - 0x120;
      lVar19 = uVar15 - 0x78;
      lVar22 = uVar15 - 0x68;
      lVar24 = 2;
      fVar5 = (float)(dVar33 - dVar29) / (float)(dVar33 + dVar29);
      fVar6 = fVar5 * fVar5;
      *(float *)((int)puVar13 + 0xc4) = fVar5;
      *(float *)((int)puVar13 + 0xbc) = fVar5;
      *(float *)(puVar13 + 0x18) = fVar5;
      *(float *)(puVar13 + 0x17) = fVar5;
      fVar5 = fVar6 * fVar6;
      *(float *)((int)puVar13 + 0xbc) = *(float *)((int)puVar13 + 0xbc) * fVar6;
      *(float *)(puVar13 + 0x18) = *(float *)(puVar13 + 0x18) * fVar5;
      *(float *)((int)puVar13 + 0xc4) = *(float *)((int)puVar13 + 0xc4) * fVar5 * fVar6;
      do {
        *(float *)((int)lVar16 + 0xb8) = *(float *)((int)lVar16 + 0xa8) * fVar5 * fVar5;
        iVar18 = (int)lVar19;
        lVar16 = lVar16 + 8;
        lVar19 = lVar19 + 8;
        *(float *)((int)lVar22 + 4) = *(float *)(iVar18 + 4) * fVar5 * fVar5;
        lVar22 = lVar22 + 8;
        lVar24 = lVar24 + -1;
      } while (lVar24 != 0);
      lVar24 = 4;
      lVar22 = uVar15 - 0x78;
      pfVar20 = (float *)&DAT_007358e0;
      lVar16 = lVar17;
      lVar19 = lVar22;
      do {
        fVar5 = *pfVar20;
        fVar6 = pfVar20[1];
        pfVar20 = pfVar20 + 2;
        *(float *)((int)lVar16 + 0xb8) = *(float *)((int)lVar16 + 0xb8) * fVar5;
        lVar16 = lVar16 + 8;
        *(float *)((int)lVar19 + 4) = *(float *)((int)lVar19 + 4) * fVar6;
        lVar19 = lVar19 + 8;
        lVar24 = lVar24 + -1;
      } while (lVar24 != 0);
      lVar19 = 2;
      lVar16 = lVar17;
      dVar29 = dVar30;
      do {
        iVar18 = (int)lVar16;
        lVar16 = lVar16 + 0x10;
        iVar14 = (int)lVar22;
        lVar22 = lVar22 + 0x10;
        dVar29 = (double)((float)(dVar29 + (double)*(float *)(iVar18 + 0xb8)) +
                          *(float *)(iVar14 + 4) + *(float *)(iVar14 + 8) + *(float *)(iVar14 + 0xc)
                         );
        lVar19 = lVar19 + -1;
      } while (lVar19 != 0);
      dVar34 = (double)((float)(dVar29 + 0.7853981852531433) * fVar3 + fVar4);
    }
    dVar29 = (double)FastDiffRots(dVar34,(double)fVar2);
    FastQuaternionToEuler(iVar12 + 0xf0,2);
    *(float *)(iVar12 + 0x1bc) = (float)dVar29;
    *(float *)((int)puVar13 + 0x84) = (float)dVar32;
    dVar33 = ABS((double)(float)SQRT(dVar31));
    *(float *)(puVar13 + 0x10) = (float)SQRT(dVar31);
    *(float *)(puVar13 + 0x11) = (float)(dVar33 - ABS(dVar32));
    uVar21 = (ulonglong)(*(uint *)(puVar13 + 0x10) >> 0x1c) & 8 |
             (ulonglong)(*(uint *)(puVar13 + 0x11) >> 0x1e) & 2 |
             (ulonglong)(*(uint *)((int)puVar13 + 0x84) >> 0x1d) & 4;
    dVar29 = ABS((double)*(float *)(puVar13 + 0x10));
    if ((double)*(float *)(puVar13 + 0x11) - dVar30 < 0.0) {
      dVar29 = ABS(dVar32);
    }
    fVar2 = *(float *)(&g_atanQuadrantTable + (int)(uVar21 << 2));
    dVar31 = ABS((double)*(float *)((int)puVar13 + 0x84));
    if ((double)*(float *)(puVar13 + 0x11) - dVar30 < 0.0) {
      dVar31 = dVar33;
    }
    fVar3 = *(float *)(((uint)(uVar21 << 2) | 0x735900) + 4);
    if (dVar30 < dVar29) {
      lVar16 = uVar15 - 0x120;
      lVar19 = uVar15 - 0x98;
      lVar22 = uVar15 - 0x88;
      lVar24 = 2;
      fVar4 = (float)(dVar31 - dVar29) / (float)(dVar31 + dVar29);
      fVar5 = fVar4 * fVar4;
      *(float *)((int)puVar13 + 0xa4) = fVar4;
      *(float *)((int)puVar13 + 0x9c) = fVar4;
      *(float *)(puVar13 + 0x14) = fVar4;
      *(float *)(puVar13 + 0x13) = fVar4;
      fVar4 = fVar5 * fVar5;
      *(float *)((int)puVar13 + 0x9c) = *(float *)((int)puVar13 + 0x9c) * fVar5;
      *(float *)(puVar13 + 0x14) = *(float *)(puVar13 + 0x14) * fVar4;
      *(float *)((int)puVar13 + 0xa4) = *(float *)((int)puVar13 + 0xa4) * fVar4 * fVar5;
      do {
        *(float *)((int)lVar16 + 0x98) = *(float *)((int)lVar16 + 0x88) * fVar4 * fVar4;
        iVar18 = (int)lVar19;
        lVar16 = lVar16 + 8;
        lVar19 = lVar19 + 8;
        *(float *)((int)lVar22 + 4) = *(float *)(iVar18 + 4) * fVar4 * fVar4;
        lVar22 = lVar22 + 8;
        lVar24 = lVar24 + -1;
      } while (lVar24 != 0);
      lVar24 = 4;
      lVar22 = uVar15 - 0x98;
      pfVar20 = (float *)&DAT_007358e0;
      lVar16 = lVar17;
      lVar19 = lVar22;
      do {
        fVar4 = *pfVar20;
        fVar5 = pfVar20[1];
        pfVar20 = pfVar20 + 2;
        *(float *)((int)lVar16 + 0x98) = *(float *)((int)lVar16 + 0x98) * fVar4;
        lVar16 = lVar16 + 8;
        *(float *)((int)lVar19 + 4) = *(float *)((int)lVar19 + 4) * fVar5;
        lVar19 = lVar19 + 8;
        lVar24 = lVar24 + -1;
      } while (lVar24 != 0);
      lVar16 = 2;
      do {
        iVar18 = (int)lVar17;
        iVar14 = (int)lVar22;
        lVar17 = lVar17 + 0x10;
        lVar22 = lVar22 + 0x10;
        dVar30 = (double)((float)(dVar30 + (double)*(float *)(iVar18 + 0x98)) +
                          *(float *)(iVar14 + 4) + *(float *)(iVar14 + 8) + *(float *)(iVar14 + 0xc)
                         );
        lVar16 = lVar16 + -1;
      } while (lVar16 != 0);
      dVar30 = (double)((float)(dVar30 + dVar26) * fVar2 + fVar3);
    }
    dVar30 = -dVar30;
    FastQuaternionToEuler(dVar30,iVar12 + 0x130,1);
    *(float *)(iVar12 + 0x1c0) = (float)dVar30;
    uVar23 = 1;
    *(undefined4 *)(iVar12 + 0x90) = *(undefined4 *)(iVar12 + 0x170);
    *(undefined4 *)(iVar12 + 0x94) = *(undefined4 *)(iVar12 + 0x174);
    *(undefined4 *)(iVar12 + 0x98) = *(undefined4 *)(iVar12 + 0x178);
    *(undefined4 *)(iVar12 + 0x9c) = *(undefined4 *)(iVar12 + 0x17c);
    if (param_2 != 0) {
      RegisterPostPreDraw(&PTR_M800_00465380_0070eaf8,param_1);
      *(uint *)(iVar12 + 0x20c) = *(uint *)(iVar12 + 0x20c) | 2;
    }
  }
  return uVar23;
}


