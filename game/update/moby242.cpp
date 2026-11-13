// game/update/moby242.cpp -- reconstructed from NPEA00385 EBOOT
// STATUS: NOT STARTED (raw Ghidra output)
// 5 functions, 0x30e964-0x30f5a0
#include <math.h>
#include <stdio.h>
#include <string.h>
#include "game/update/moby242.h"
#include "game/collproc.h"
#include "game/debug.h"
#include "game/hero.h"
#include "game/mobyfunc.h"
#include "game/mobyutil.h"
#include "game/update.h"
#include "idol/fastfunc.h"

// 0x030e964 (0x14 bytes)
void M242_0030e964(void)

{
  DAT_007ff758 = 0x10000;
  return;
}


// 0x030e980 (0x458 bytes)
ulonglong M242_0030e980(longlong param_1,undefined8 param_2)

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
    auVar31 = loadVectorLeftIndexed(in_LR,0x30e978);
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
              dVar23 = (double)pfVar10[10];
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
              if (-(float)(dVar24 * dVar28 + (double)pfVar10[0xb]) <= fVar3) {
                if ((float)(dVar24 * dVar28 + (double)pfVar10[0xb]) < fVar3) {
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
                                       ((double)pfVar10[0xc],uVar7,param_1,0x10001);
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


// 0x030edd8 (0xa8 bytes)
int M242_0030edd8
              (longlong param_1,int *param_2,int *param_3,uint param_4,uint param_5)

{
  ushort uVar1;
  MobyInstance *pMVar2;
  int iVar3;
  ushort *puVar4;
  int iVar5;
  uint uVar6;
  
  iVar5 = 0;
  *param_2 = 0;
  iVar3 = 0;
  *param_3 = 0;
  pMVar2 = g_MobyInstance;
  puVar4 = *(ushort **)((int)&g_MobyGroups + (int)(param_1 << 2));
  do {
    uVar1 = *puVar4;
    uVar6 = (uint)pMVar2[uVar1 & 0x7fff].state;
    if (uVar6 < 0x80) {
      iVar5 = iVar5 + 1;
      if ((param_4 == 0xffffffff) || (uVar6 == param_4)) {
        *param_2 = *param_2 + 1;
        iVar3 = *param_3;
      }
      if ((param_5 == 0xffffffff) || (pMVar2[uVar1 & 0x7fff].state == param_5)) {
        iVar3 = iVar3 + 1;
        *param_3 = iVar3;
      }
    }
    uVar1 = *puVar4;
    puVar4 = puVar4 + 1;
  } while (-1 < (short)uVar1);
  return iVar5;
}


// 0x030ee80 (0x74 bytes)
void M242_0030ee80(int param_1,int param_2,MobyInstance *param_3)

{
  uint uVar1;
  
  uVar1 = *(uint *)(param_2 + 8);
  *(undefined4 *)(param_1 + 0x94) = 0;
  if ((uVar1 & 0x200) == 0) {
    *(undefined1 *)(param_1 + 0x20) = 3;
  }
  else {
    if ((param_3 != (MobyInstance *)0x0) && ((uVar1 & 1) == 0)) {
      DeleteMoby(param_3);
    }
    *(undefined1 *)(param_1 + 0x20) = 5;
  }
  return;
}


// 0x030eef4 (0x6ac bytes)
// strings: 00655dcc: 'moby:%d(%d) open trigger by openCount:%d count:%d at %d\n' | 00655e0c: 'moby:%d(%d) close trigger by closedCount:%d count:%d at %d\n' | 00655e4c: 'Warning! moby 242 does not have effect moby!\n' | 00655e7c: 'moby:%d(%d) opening at %d\n' | 00655e9c: 'moby:%d(%d) open (state) at %d\n' | 00655ebc: 'moby:%d(%d) open (timer) at %d\n' | 00655edc: 'moby:%d(%d) closing at %d\n' | 00655efc: 'moby:%d(%d) closed (state) at %d\n' | 00655f24: 'moby:%d(%d) closed (timer) at %d\n'

/* Moby 242 */

void UpdateMoby_242(MobyInstance *moby)

{
  u8 uVar1;
  float fVar2;
  float fVar3;
  float *pfVar4;
  bool bVar5;
  bool bVar6;
  undefined4 uVar7;
  undefined8 uVar8;
  s8 sVar10;
  int iVar9;
  float fVar11;
  MobyInstance *moby_00;
  double dVar12;
  double dVar13;
  int local_40;
  int local_3c;
  
  moby_00 = (MobyInstance *)0x0;
  pfVar4 = (float *)moby->pVar;
  if (pfVar4[4] != -NAN) {
    moby_00 = g_MobyInstance + (int)pfVar4[4];
  }
  bVar5 = false;
  bVar6 = false;
  if ((moby->levelFlagIdx == 0xff) || (g_LevelFlags[Level][(byte)moby->levelFlagIdx] != -1)) {
    if (moby->state != '\0') {
      uVar8 = M242_0030edd8
                        (pfVar4[7],&local_40,&local_3c,*(undefined1 *)((int)pfVar4 + 0x1a),
                         *(undefined1 *)((int)pfVar4 + 0x1b));
      iVar9 = (int)uVar8;
      if ((iVar9 == 0) || (iVar9 == local_40)) {
        if (moby->state == '\x01') {
          printf("moby:%d(%d) open trigger by openCount:%d count:%d at %d\n",moby->uid,
                       moby->oClass,local_40,uVar8,worldUpdateTime);
        }
        bVar5 = true;
      }
      else if (local_3c == iVar9) {
        if (moby->state == '\x03') {
          printf("moby:%d(%d) close trigger by closedCount:%d count:%d at %d\n",moby->uid,
                       moby->oClass,local_3c,uVar8,worldUpdateTime);
        }
        bVar6 = true;
      }
    }
  }
  else {
    bVar5 = true;
  }
  uVar1 = moby->state;
  if (uVar1 == '\x05') {
    DeleteMoby(moby);
  }
  else if (uVar1 == '\x04') {
    if ((moby_00 != (MobyInstance *)0x0) && (((uint)pfVar4[2] & 2) == 0)) {
      dVar12 = (double)FastIntToDouble(pfVar4[3]);
      dVar13 = (double)FastIntToDouble((int)pfVar4[3] - (int)pfVar4[8]);
      sVar10 = FastDoubleToInt
                         ((double)(float)((double)(float)((double)pfVar4[9] * dVar13) / dVar12));
      moby_00->alpha = sVar10;
    }
    fVar11 = pfVar4[2];
    if (((((uint)fVar11 & 4) == 0 && moby_00 != (MobyInstance *)0x0) &&
        ((int)*(char *)((int)pfVar4 + 0x19) != 0xffffffff)) &&
       ((uint)moby_00->state == (int)*(char *)((int)pfVar4 + 0x19))) {
      printf("moby:%d(%d) closed (state) at %d\n",moby->uid,moby->oClass,worldUpdateTime);
      moby->state = '\x01';
      fVar11 = pfVar4[2];
    }
    if ((((uint)fVar11 & 8) == 0) && (iVar9 = FastDecTimerS32(pfVar4 + 8), iVar9 != 0)) {
      printf("moby:%d(%d) closed (timer) at %d\n",moby->uid,moby->oClass,worldUpdateTime);
      moby->state = '\x01';
    }
    M242_0030e980(moby,pfVar4);
  }
  else if (uVar1 == '\x03') {
    if (bVar6) {
      if ((moby_00 != (MobyInstance *)0x0) && (*(u8 *)(pfVar4 + 6) != 0xff)) {
        moby_00->state = *(u8 *)(pfVar4 + 6);
      }
      pfVar4[8] = pfVar4[3];
      uVar7 = worldUpdateTime;
      moby->collision = moby->pClass->collision;
      printf("moby:%d(%d) closing at %d\n",moby->uid,moby->oClass,uVar7);
      moby->state = '\x04';
    }
  }
  else if (uVar1 == '\x02') {
    if ((moby_00 != (MobyInstance *)0x0) && (((uint)pfVar4[2] & 2) == 0)) {
      dVar12 = (double)FastIntToDouble(pfVar4[3]);
      dVar13 = (double)FastIntToDouble(pfVar4[8]);
      sVar10 = FastDoubleToInt
                         ((double)(float)((double)(float)((double)pfVar4[9] * dVar13) / dVar12));
      moby_00->alpha = sVar10;
    }
    if (((((uint)pfVar4[2] & 4) == 0 && moby_00 != (MobyInstance *)0x0) &&
        ((int)*(char *)((int)pfVar4 + 0x17) != 0xffffffff)) &&
       ((uint)moby_00->state == (int)*(char *)((int)pfVar4 + 0x17))) {
      printf("moby:%d(%d) open (state) at %d\n",moby->uid,moby->oClass,worldUpdateTime);
      fVar11 = pfVar4[2];
      moby->collision = (ushort *)0x0;
      if (((uint)fVar11 & 0x200) == 0) {
        moby->state = '\x03';
      }
      else {
        if (((uint)fVar11 & 1) == 0) {
          DeleteMoby(moby_00);
        }
        moby->state = '\x05';
      }
    }
    if ((((uint)pfVar4[2] & 8) == 0) && (iVar9 = FastDecTimerS32(pfVar4 + 8), iVar9 != 0))
    {
      printf("moby:%d(%d) open (timer) at %d\n",moby->uid,moby->oClass,worldUpdateTime);
      moby->collision = (ushort *)0x0;
      if (((uint)pfVar4[2] & 0x200) == 0) {
        moby->state = '\x03';
      }
      else {
        if ((moby_00 != (MobyInstance *)0x0) && (((uint)pfVar4[2] & 1) == 0)) {
          DeleteMoby(moby_00);
        }
        moby->state = '\x05';
      }
    }
    M242_0030e980(moby,pfVar4);
  }
  else if (uVar1 == '\x01') {
    if (bVar5) {
      if ((moby_00 != (MobyInstance *)0x0) && (*(u8 *)((int)pfVar4 + 0x16) != 0xff)) {
        moby_00->state = *(u8 *)((int)pfVar4 + 0x16);
      }
      pfVar4[8] = pfVar4[3];
      printf("moby:%d(%d) opening at %d\n",moby->uid,moby->oClass,worldUpdateTime);
      moby->state = '\x02';
    }
    M242_0030e980(moby,pfVar4);
  }
  else if (uVar1 == '\0') {
    if (moby_00 == (MobyInstance *)0x0) {
      printf("Warning! moby 242 does not have effect moby!\n");
    }
    else {
      *(MOBY_OCLASSES *)(pfVar4 + 5) = moby_00->oClass;
      dVar12 = (double)FastIntToDouble(moby_00->alpha);
      pfVar4[9] = (float)dVar12;
      if (((uint)pfVar4[2] & 0x10) == 0) {
        if (((uint)pfVar4[2] & 0x40) != 0) {
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
      if (((uint)pfVar4[2] & 0x20) == 0) {
        if (((uint)pfVar4[2] & 0x80) != 0) {
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
    fVar11 = pfVar4[1];
    fVar2 = *pfVar4;
    fVar3 = moby->pClass->gScale;
    moby->state = '\x01';
    if (fVar2 - fVar11 < 0.0) {
      fVar2 = fVar11;
    }
    moby->scale = fVar3 * fVar2;
  }
  return;
}


