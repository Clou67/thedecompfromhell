// game/update/moby639.cpp -- reconstructed from NPEA00385 EBOOT
// STATUS: NOT STARTED (raw Ghidra output)
// 5 functions, 0x3fd8d8-0x3fecd4
#include <math.h>
#include "game/update/moby639.h"
#include "game/hero.h"
#include "game/lights.h"
#include "game/mobyfunc.h"
#include "game/mobyproc.h"
#include "game/mobyutil.h"
#include "game/partupd.h"
#include "idol/fastfunc.h"

// 0x03fd8d8 (0x34 bytes)
void FUN_003fd8d8(int param_1,undefined4 param_2,undefined4 *param_3,int param_4)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0x78);
  *(undefined4 *)(iVar1 + 0x2d0) = param_2;
  *(undefined4 *)(iVar1 + 0x2c0) = *param_3;
  *(undefined4 *)(iVar1 + 0x2c4) = param_3[1];
  *(undefined4 *)(iVar1 + 0x2c8) = param_3[2];
  *(undefined4 *)(iVar1 + 0x2cc) = param_3[3];
  *(undefined4 *)(iVar1 + 0x2cc) = *(undefined4 *)(param_4 + 8);
  return;
}


// 0x03fd918 (0x108 bytes)
void FUN_003fd918(int param_1,undefined2 param_2)

{
  ushort uVar1;
  int iVar2;
  undefined4 uVar3;
  
  iVar2 = *(int *)(param_1 + 0x78);
  if (*(char *)(param_1 + 0x20) == '\n') {
    *(undefined1 *)(param_1 + 0x20) = 1;
    if (*(char *)(param_1 + 0x53) != '\x01') {
      MB_SetAnimation(param_1,1,0,(int)(animationSpeed * 20.5));
    }
    *(undefined1 *)(param_1 + 0x31) = 1;
    uVar1 = *(ushort *)(param_1 + 0x34);
    uVar3 = *(undefined4 *)(*(int *)(param_1 + 0x24) + 0x10);
    *(undefined4 *)(iVar2 + 700) = *(undefined4 *)(param_1 + 0x18);
    *(undefined4 *)(param_1 + 0x94) = uVar3;
    *(undefined4 *)(iVar2 + 0x2c0) = *(undefined4 *)(param_1 + 0x10);
    *(ushort *)(param_1 + 0x34) = uVar1 & 0xfffe | 0x1000;
    *(undefined4 *)(iVar2 + 0x2c4) = *(undefined4 *)(param_1 + 0x14);
    uVar3 = *(undefined4 *)(param_1 + 0x18);
    *(undefined2 *)(iVar2 + 0x2dc) = param_2;
    *(undefined4 *)(iVar2 + 0x2c8) = uVar3;
    *(undefined4 *)(iVar2 + 0x2cc) = *(undefined4 *)(param_1 + 0x1c);
    *(float *)(iVar2 + 0x2d4) = g_FrameTime * 5.0;
  }
  return;
}


// 0x03fda20 (0x14 bytes)
void M639_003fda20(void)

{
  DAT_008546c8 = 0x10000;
  return;
}


// 0x03fda38 (0x234 bytes)
MobyInstance * FUN_003fda38(undefined4 *param_1,f32 *param_2,undefined4 param_3,undefined4 *param_4)

{
  undefined1 uVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  MobyInstance *pMVar4;
  
  pMVar4 = CreateMoby(0x27f);
  if (pMVar4 != (MobyInstance *)0x0) {
    pMVar4->updateDistance = -1;
    pMVar4->enabled = '\x01';
    pMVar4->state = '\0';
    pMVar4->setByGroup = '\0';
    pMVar4->modeBits = pMVar4->modeBits | DISABLED;
    puVar3 = (undefined4 *)pMVar4->pVar;
    (pMVar4->pos).x = *param_2;
    (pMVar4->pos).y = param_2[1];
    (pMVar4->pos).z = param_2[2];
    (pMVar4->pos).w = param_2[3];
    if (param_4 == (undefined4 *)0x0) {
      *puVar3 = *param_1;
      puVar3[1] = param_1[1];
      puVar3[2] = param_1[2];
      uVar2 = param_1[3];
    }
    else {
      *puVar3 = *param_4;
      puVar3[1] = param_4[1];
      puVar3[2] = param_4[2];
      uVar2 = param_4[3];
    }
    puVar3[3] = uVar2;
    puVar3[8] = param_3;
    pMVar4->drawDistance = (ushort)*(byte *)(param_1 + 0xf);
    *(undefined1 *)(puVar3 + 9) = *(undefined1 *)(param_1 + 4);
    *(undefined1 *)((int)puVar3 + 0x25) = *(undefined1 *)((int)param_1 + 0x11);
    *(undefined1 *)((int)puVar3 + 0x26) = *(undefined1 *)((int)param_1 + 0x12);
    *(undefined1 *)((int)puVar3 + 0x27) = *(undefined1 *)((int)param_1 + 0x13);
    *(undefined1 *)(puVar3 + 10) = *(undefined1 *)(param_1 + 5);
    *(undefined1 *)((int)puVar3 + 0x29) = *(undefined1 *)((int)param_1 + 0x15);
    *(undefined1 *)(puVar3 + 0x1a) = *(undefined1 *)((int)param_1 + 0x3d);
    *(undefined2 *)(puVar3 + 0x1b) = *(undefined2 *)(param_1 + 0x10);
    *(undefined1 *)((int)puVar3 + 0x2a) = *(undefined1 *)((int)param_1 + 0x16);
    *(undefined1 *)((int)puVar3 + 0x2b) = *(undefined1 *)((int)param_1 + 0x17);
    *(undefined1 *)(puVar3 + 0xb) = *(undefined1 *)(param_1 + 6);
    *(undefined1 *)((int)puVar3 + 0x2d) = *(undefined1 *)((int)param_1 + 0x19);
    *(undefined1 *)((int)puVar3 + 0x2e) = *(undefined1 *)((int)param_1 + 0x1a);
    *(undefined1 *)((int)puVar3 + 0x69) = *(undefined1 *)((int)param_1 + 0x3e);
    *(undefined2 *)((int)puVar3 + 0x6e) = *(undefined2 *)((int)param_1 + 0x42);
    *(undefined1 *)((int)puVar3 + 0x2f) = *(undefined1 *)((int)param_1 + 0x1b);
    *(undefined1 *)(puVar3 + 0xc) = *(undefined1 *)(param_1 + 7);
    *(undefined1 *)((int)puVar3 + 0x31) = *(undefined1 *)((int)param_1 + 0x1d);
    *(undefined1 *)((int)puVar3 + 0x32) = *(undefined1 *)((int)param_1 + 0x1e);
    *(undefined1 *)((int)puVar3 + 0x33) = *(undefined1 *)((int)param_1 + 0x1f);
    *(undefined1 *)((int)puVar3 + 0x6a) = *(undefined1 *)((int)param_1 + 0x3f);
    *(undefined2 *)(puVar3 + 0x1c) = *(undefined2 *)(param_1 + 0x11);
    puVar3[0xd] = param_1[8];
    puVar3[0xe] = param_1[9];
    puVar3[0xf] = param_1[10];
    puVar3[0x10] = param_1[0xb];
    puVar3[0x11] = param_1[0xc];
    *(undefined1 *)((int)puVar3 + 0x6b) = *(undefined1 *)(param_1 + 0x12);
    *(undefined2 *)((int)puVar3 + 0x72) = *(undefined2 *)((int)param_1 + 0x46);
    puVar3[0x12] = param_1[0xd];
    puVar3[0x13] = param_1[0xe];
    uVar1 = *(undefined1 *)((int)param_1 + 0x49);
    puVar3[0x19] = 0xffffffff;
    *(undefined1 *)(puVar3 + 7) = uVar1;
    UpdateMobyTransform(pMVar4);
    MB_CopyHeroLights(pMVar4);
  }
  return pMVar4;
}


// 0x03fdc80 (0x1054 bytes)
/* Moby 639 */

void UpdateMoby_639(MobyInstance *moby)

{
  double dVar1;
  double dVar2;
  double dVar3;
  char cVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float *pfVar8;
  undefined1 uVar9;
  undefined2 uVar10;
  undefined4 uVar11;
  bool bVar12;
  int iVar13;
  float fVar14;
  ulonglong uVar15;
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
  GPiece<40> local_80;
  
  if (moby != (MobyInstance *)0x0) {
    pfVar8 = (float *)moby->pVar;
    uVar15 = ZEXT48(pfVar8);
    bVar12 = false;
    if (pfVar8 != (float *)0x0) {
      if (moby->state == '\0') {
        moby->updateDistance = -1;
        moby->setByGroup = *(char *)(pfVar8 + 7);
        pfVar8[4] = (moby->pos).x;
        pfVar8[5] = (moby->pos).y;
        pfVar8[6] = (moby->pos).z;
        pfVar8[7] = (moby->pos).w;
        cVar4 = moby->setByGroup;
        pfVar8[3] = pfVar8[0x13];
        *(char *)(pfVar8 + 7) = cVar4;
        *(undefined2 *)(pfVar8 + 0x1d) = *(undefined2 *)(pfVar8 + 0x1b);
        *(undefined2 *)((int)pfVar8 + 0x76) = *(undefined2 *)((int)pfVar8 + 0x6e);
        *(undefined2 *)(pfVar8 + 0x1e) = *(undefined2 *)(pfVar8 + 0x1c);
        *(undefined2 *)((int)pfVar8 + 0x7a) = *(undefined2 *)((int)pfVar8 + 0x72);
        pfVar8[0x14] = -NAN;
        dVar16 = (double)FastIntToDouble(*(undefined1 *)((int)pfVar8 + 0x25));
        dVar20 = 0.009999999776482582;
        pfVar8[0x15] = (float)(dVar16 * 0.009999999776482582);
        dVar16 = (double)FastIntToDouble(*(undefined1 *)((int)pfVar8 + 0x2a));
        pfVar8[0x16] = (float)(dVar16 * dVar20);
        dVar16 = (double)FastIntToDouble(*(undefined1 *)((int)pfVar8 + 0x2f));
        pfVar8[0x18] = pfVar8[0xd];
        pfVar8[0x17] = (float)(dVar16 * dVar20);
        if (pfVar8[0x19] != -NAN) {
          pfVar8[8] = (float)(g_MobyInstance + (int)pfVar8[0x19]);
        }
        if ((int)pfVar8[0x10] < 0) {
          pfVar8[0x10] = -pfVar8[0x10];
        }
        if ((int)pfVar8[0x11] < 0) {
          pfVar8[0x11] = -pfVar8[0x11];
        }
        moby->state = '\x01';
      }
      if (moby->setByGroup == '\0') {
        if ((pfVar8[0x12] == -NAN) ||
           (iVar13 = FastDecTimerS32(uVar15 + 0x48), iVar13 == 0)) {
          iVar13 = FastCheckBsphereInView(0x406fe00000000000,local_80);
          if (iVar13 == -1) {
            if (pfVar8[0x14] != -NAN) {
              DeletePointLight(pfVar8[0x14]);
              pfVar8[0x14] = -NAN;
            }
          }
          else {
            fVar14 = pfVar8[8];
            if (fVar14 == 0.0) {
              fVar5 = pfVar8[4];
              fVar6 = pfVar8[5];
              fVar7 = pfVar8[6];
              fVar14 = pfVar8[7];
            }
            else {
              fVar5 = *(float *)((int)fVar14 + 0x10);
              fVar6 = *(float *)((int)fVar14 + 0x14);
              fVar7 = *(float *)((int)fVar14 + 0x18);
              fVar14 = *(float *)((int)fVar14 + 0x1c);
            }
            dVar22 = (double)fVar5;
            dVar21 = (double)fVar6;
            dVar20 = (double)fVar7;
            dVar16 = (double)fVar14;
            fVar14 = pfVar8[0x13];
            if (((uint)fVar14 & 0x800000) == 0) {
              if (((uint)fVar14 & 0x100000) == 0) {
                dVar17 = (double)*pfVar8;
                dVar18 = (double)pfVar8[1];
                dVar19 = (double)pfVar8[2];
              }
              else if (((uint)fVar14 & 0x200000) == 0) {
                fVar14 = pfVar8[3];
                pfVar8[3] = 0.0;
                dVar19 = (double)MB_randRangeFloat(0.0,1.0);
                dVar17 = (double)(float)((double)*pfVar8 * dVar19);
                dVar18 = (double)(float)((double)pfVar8[1] * dVar19);
                pfVar8[3] = fVar14;
                dVar19 = (double)(float)((double)pfVar8[2] * dVar19);
              }
              else {
                dVar17 = (double)MB_randRangeFloat(-*pfVar8,*pfVar8);
                dVar18 = (double)MB_randRangeFloat(-pfVar8[1],pfVar8[1]);
                dVar19 = (double)MB_randRangeFloat(-pfVar8[2],pfVar8[2]);
              }
              if ((((uint)pfVar8[0x13] & 0x400000) != 0) && (fVar14 = pfVar8[8], fVar14 != 0.0)) {
                dVar3 = (double)*(float *)((int)fVar14 + 0xd8) * dVar18;
                dVar1 = (double)*(float *)((int)fVar14 + 0xc4) * dVar17;
                dVar2 = (double)*(float *)((int)fVar14 + 200) * dVar17;
                dVar17 = (double)(float)((double)*(float *)((int)fVar14 + 0xe0) * dVar19 +
                                        (double)(float)((double)*(float *)((int)fVar14 + 0xc0) *
                                                        dVar17 + (double)(float)((double)*(float *)(
                                                  (int)fVar14 + 0xd0) * dVar18)));
                dVar18 = (double)(float)((double)*(float *)((int)fVar14 + 0xe4) * dVar19 +
                                        (double)(float)(dVar1 + (double)(float)((double)*(float *)((
                                                  int)fVar14 + 0xd4) * dVar18)));
                dVar19 = (double)(float)((double)*(float *)((int)fVar14 + 0xe8) * dVar19 +
                                        (double)(float)(dVar2 + (double)(float)dVar3));
              }
              dVar22 = (double)(float)(dVar22 + dVar17);
              dVar21 = (double)(float)(dVar21 + dVar18);
              dVar20 = (double)(float)(dVar20 + dVar19);
            }
            (moby->pos).x = (float)dVar22;
            (moby->pos).y = (float)dVar21;
            (moby->pos).z = (float)dVar20;
            (moby->pos).w = (float)dVar16;
            if ((*(short *)((int)pfVar8 + 0x72) != 0) &&
               (iVar13 = FastDecTimerS16(uVar15 + 0x7a), iVar13 != 0)) {
              auVar25 = ZEXT416(0xffffffff);
              auVar25 = auVar25 | auVar25 << 0x20 | auVar25 << 0x40 | auVar25 << 0x60;
              auVar23 = loadVectorLeftIndexed(0x72,uVar15);
              auVar24 = loadVectorRightIndexed(0x82,uVar15);
              auVar26 = vectorShiftLeftIntegerWord(auVar25,auVar25);
              auVar25 = ZEXT416(0xfffffff0);
              auVar23 = vectorShiftRightWord
                                  (auVar23 | auVar24,
                                   auVar25 | auVar25 << 0x20 | auVar25 << 0x40 | auVar25 << 0x60);
              auVar25 = loadVectorLeftIndexed(0x10,0x3fdc6c);
              auVar25 = auVar25 >> 0x60 & (GPiece<16>)0xffffffff;
              auVar23 = vectorConvertFromSignedFixedPointWord(auVar23,0);
              auVar24 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
              auVar25 = vectorAddFloatingPoint
                                  (auVar23,auVar25 | auVar25 << 0x20 | auVar25 << 0x40 |
                                           auVar25 << 0x60);
              auVar25 = vectorMultiplyAddFloatingPoint(auVar24,auVar25,auVar26);
              auVar25 = vectorConvertToSignedFixedPointWordSaturate(auVar25,0);
              auVar25 = vectorSplatHalfWord(auVar25,1);
              uVar10 = storeVectorElementHalfWordIndexed(auVar25,0x7a,uVar15);
              *(undefined2 *)((int)pfVar8 + 0x7a) = uVar10;
              if (((uint)pfVar8[0x13] & 4) != 0) {
                bVar12 = true;
                pfVar8[0x13] = (float)((uint)pfVar8[0x13] & 0xfffffff7);
                pfVar8[0x18] = pfVar8[0xf];
              }
            }
            fVar14 = pfVar8[0x13];
            if (((uint)fVar14 & 0x80000) == 0) {
              if ((((uint)fVar14 & 2) != 0) && (((uint)fVar14 & 1) == 0)) {
                fVar14 = (float)((uint)fVar14 ^ 2);
                pfVar8[0x13] = fVar14;
              }
              if (((uint)fVar14 & 2) == 0) {
                if (((uint)fVar14 & 8) == 0) {
                  fVar5 = pfVar8[0x10] * DAT_0071f408 + pfVar8[0x18];
                  pfVar8[0x18] = fVar5;
                  if (pfVar8[0xe] <= fVar5) {
                    pfVar8[0x18] = pfVar8[0xe];
                    if (((uint)fVar14 & 1) == 0) {
                      pfVar8[0x13] = (float)((uint)fVar14 ^ 8);
                    }
                    else {
                      auVar25 = ZEXT416(0xfffffff8);
                      auVar23 = ZEXT416(0xffffffff);
                      auVar24 = auVar23 | auVar23 << 0x20 | auVar23 << 0x40 | auVar23 << 0x60;
                      auVar23 = loadVectorLeftIndexed(0x6b,uVar15);
                      auVar25 = vectorShiftRightWord
                                          (auVar23,auVar25 | auVar25 << 0x20 | auVar25 << 0x40 |
                                                   auVar25 << 0x60);
                      auVar24 = vectorShiftLeftIntegerWord(auVar24,auVar24);
                      auVar23 = vectorConvertFromSignedFixedPointWord(auVar25,0);
                      auVar25 = loadVectorLeftIndexed(0x10,0x3fdc6c);
                      auVar25 = auVar25 >> 0x60 & (GPiece<16>)0xffffffff;
                      auVar26 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
                      auVar25 = vectorAddFloatingPoint
                                          (auVar23,auVar25 | auVar25 << 0x20 | auVar25 << 0x40 |
                                                   auVar25 << 0x60);
                      auVar25 = vectorMultiplyAddFloatingPoint(auVar26,auVar25,auVar24);
                      auVar25 = vectorConvertToSignedFixedPointWordSaturate(auVar25,0);
                      auVar25 = auVar25 >> 0x60 & (GPiece<16>)0xff;
                      uVar9 = storeVectorElementByteIndexed
                                        (auVar25 | auVar25 << 8 | auVar25 << 0x10 | auVar25 << 0x18
                                         | auVar25 << 0x20 | auVar25 << 0x28 | auVar25 << 0x30 |
                                         auVar25 << 0x38 | auVar25 << 0x40 | auVar25 << 0x48 |
                                         auVar25 << 0x50 | auVar25 << 0x58 | auVar25 << 0x60 |
                                         auVar25 << 0x68 | auVar25 << 0x70 | auVar25 << 0x78,0x7f,
                                         uVar15);
                      *(undefined1 *)((int)pfVar8 + 0x7f) = uVar9;
                      pfVar8[0x13] = (float)(((uint)fVar14 | 2) ^ 8);
                    }
                  }
                }
                else {
                  fVar5 = -(pfVar8[0x11] * DAT_0071f408 - pfVar8[0x18]);
                  pfVar8[0x18] = fVar5;
                  if ((fVar5 <= pfVar8[0xf]) &&
                     (pfVar8[0x18] = pfVar8[0xf], ((uint)fVar14 & 4) != 0)) {
                    if ((int)(animationSpeed * ((float)*(ushort *)((int)pfVar8 + 0x72) + 0.5)) == 0)
                    {
                      pfVar8[0x13] = (float)((uint)fVar14 ^ 8);
                    }
                  }
                }
              }
              else if ((*(char *)((int)pfVar8 + 0x6b) != '\0') &&
                      (iVar13 = FastDecTimerU8(uVar15 + 0x7f), iVar13 != 0)) {
                pfVar8[0x13] = (float)((uint)pfVar8[0x13] ^ 2);
              }
            }
            else if ((*(short *)((int)pfVar8 + 0x72) == 0) || (bVar12)) {
              dVar16 = (double)MB_randRangeFloat(pfVar8[0xf],pfVar8[0xe]);
              pfVar8[0x18] = (float)dVar16;
            }
            if ((*(short *)(pfVar8 + 0x1b) != 0) &&
               (iVar13 = FastDecTimerS16(uVar15 + 0x74), iVar13 != 0)) {
              auVar25 = ZEXT416(0xffffffff);
              auVar25 = auVar25 | auVar25 << 0x20 | auVar25 << 0x40 | auVar25 << 0x60;
              auVar23 = loadVectorLeftIndexed(0x6c,uVar15);
              auVar24 = loadVectorRightIndexed(0x7c,uVar15);
              auVar26 = vectorShiftLeftIntegerWord(auVar25,auVar25);
              auVar25 = ZEXT416(0xfffffff0);
              auVar23 = vectorShiftRightWord
                                  (auVar23 | auVar24,
                                   auVar25 | auVar25 << 0x20 | auVar25 << 0x40 | auVar25 << 0x60);
              auVar25 = loadVectorLeftIndexed(0x10,0x3fdc6c);
              auVar25 = auVar25 >> 0x60 & (GPiece<16>)0xffffffff;
              auVar23 = vectorConvertFromSignedFixedPointWord(auVar23,0);
              auVar24 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
              auVar23 = vectorAddFloatingPoint
                                  (auVar23,auVar25 | auVar25 << 0x20 | auVar25 << 0x40 |
                                           auVar25 << 0x60);
              auVar25 = ZEXT416(0xfffffff8);
              auVar23 = vectorMultiplyAddFloatingPoint(auVar24,auVar23,auVar26);
              auVar23 = vectorConvertToSignedFixedPointWordSaturate(auVar23,0);
              auVar23 = vectorSplatHalfWord(auVar23,1);
              uVar10 = storeVectorElementHalfWordIndexed(auVar23,0x74,uVar15);
              *(undefined2 *)(pfVar8 + 0x1d) = uVar10;
              auVar23 = loadVectorLeftIndexed(0x27,uVar15);
              auVar25 = vectorShiftRightWord
                                  (auVar23,auVar25 | auVar25 << 0x20 | auVar25 << 0x40 |
                                           auVar25 << 0x60);
              auVar25 = vectorConvertFromUnsignedFixedPointWord(auVar25,0);
              auVar25 = auVar25 >> 0x60 & (GPiece<16>)0xffffffff;
              uVar11 = storeVectorElementWordIndexed
                                 (auVar25 | auVar25 << 0x20 | auVar25 << 0x40 | auVar25 << 0x60,0x54
                                  ,uVar15);
              *(undefined4 *)((uint)(pfVar8 + 0x15) & 0xfffffffc) = uVar11;
              pfVar8[0x13] = (float)((uint)pfVar8[0x13] & 0xffffff7f);
            }
            fVar14 = pfVar8[0x13];
            if (((uint)fVar14 & 0x10000) == 0) {
              if ((((uint)fVar14 & 0x20) != 0) && (((uint)fVar14 & 0x10) == 0)) {
                fVar14 = (float)((uint)fVar14 ^ 0x20);
                pfVar8[0x13] = fVar14;
              }
              if (((uint)fVar14 & 0x20) == 0) {
                if (((uint)fVar14 & 0x80) == 0) {
                  dVar16 = (double)FastIntToDouble(*(undefined1 *)((int)pfVar8 + 0x26));
                  dVar21 = (double)pfVar8[0x15];
                  dVar20 = 0.009999999776482582;
                  dVar22 = (double)(float)(dVar16 * 0.009999999776482582);
                  dVar16 = (double)FastIntToDouble(*(undefined1 *)(pfVar8 + 10));
                  fVar14 = (float)((double)(float)(dVar16 * dVar20) * (double)DAT_0071f408 + dVar21)
                  ;
                  pfVar8[0x15] = fVar14;
                  if (dVar22 <= (double)fVar14) {
                    fVar14 = pfVar8[0x13];
                    pfVar8[0x15] = (float)dVar22;
                    if (((uint)fVar14 & 0x10) == 0) {
                      pfVar8[0x13] = (float)((uint)fVar14 ^ 0x80);
                    }
                    else {
                      auVar25 = ZEXT416(0xfffffff8);
                      auVar23 = ZEXT416(0xffffffff);
                      auVar24 = auVar23 | auVar23 << 0x20 | auVar23 << 0x40 | auVar23 << 0x60;
                      auVar23 = loadVectorLeftIndexed(0x68,uVar15);
                      auVar25 = vectorShiftRightWord
                                          (auVar23,auVar25 | auVar25 << 0x20 | auVar25 << 0x40 |
                                                   auVar25 << 0x60);
                      auVar24 = vectorShiftLeftIntegerWord(auVar24,auVar24);
                      auVar23 = vectorConvertFromSignedFixedPointWord(auVar25,0);
                      auVar25 = loadVectorLeftIndexed(0x10,0x3fdc6c);
                      auVar25 = auVar25 >> 0x60 & (GPiece<16>)0xffffffff;
                      auVar26 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
                      auVar25 = vectorAddFloatingPoint
                                          (auVar23,auVar25 | auVar25 << 0x20 | auVar25 << 0x40 |
                                                   auVar25 << 0x60);
                      auVar25 = vectorMultiplyAddFloatingPoint(auVar26,auVar25,auVar24);
                      auVar25 = vectorConvertToSignedFixedPointWordSaturate(auVar25,0);
                      auVar25 = auVar25 >> 0x60 & (GPiece<16>)0xff;
                      uVar9 = storeVectorElementByteIndexed
                                        (auVar25 | auVar25 << 8 | auVar25 << 0x10 | auVar25 << 0x18
                                         | auVar25 << 0x20 | auVar25 << 0x28 | auVar25 << 0x30 |
                                         auVar25 << 0x38 | auVar25 << 0x40 | auVar25 << 0x48 |
                                         auVar25 << 0x50 | auVar25 << 0x58 | auVar25 << 0x60 |
                                         auVar25 << 0x68 | auVar25 << 0x70 | auVar25 << 0x78,0x7c,
                                         uVar15);
                      *(undefined1 *)(pfVar8 + 0x1f) = uVar9;
                      pfVar8[0x13] = (float)(((uint)fVar14 | 0x20) ^ 0x80);
                    }
                  }
                }
                else {
                  dVar16 = (double)FastIntToDouble(*(undefined1 *)((int)pfVar8 + 0x27));
                  dVar20 = 0.009999999776482582;
                  dVar21 = (double)pfVar8[0x15];
                  dVar22 = (double)(float)(dVar16 * 0.009999999776482582);
                  dVar16 = (double)FastIntToDouble(*(undefined1 *)((int)pfVar8 + 0x29));
                  dVar16 = -(double)(float)((double)(float)(dVar16 * dVar20) * (double)DAT_0071f408
                                           - dVar21);
                  pfVar8[0x15] = (float)dVar16;
                  if (dVar16 <= dVar22) {
                    pfVar8[0x15] = (float)dVar22;
                    if ((((uint)pfVar8[0x13] & 0x40) != 0) && (*(short *)(pfVar8 + 0x1b) == 0)) {
                      pfVar8[0x13] = (float)((uint)pfVar8[0x13] ^ 0x80);
                    }
                  }
                }
              }
              else if ((*(char *)(pfVar8 + 0x1a) != '\0') &&
                      (iVar13 = FastDecTimerU8(uVar15 + 0x7c), iVar13 != 0)) {
                pfVar8[0x13] = (float)((uint)pfVar8[0x13] ^ 0x20);
              }
            }
            else if (*(short *)(pfVar8 + 0x1b) == 0) {
              iVar13 = FastDoubleToInt((double)*(byte *)((int)pfVar8 + 0x27));
              dVar20 = 0.009999999776482582;
              dVar16 = (double)(float)((double)(longlong)iVar13 * 0.009999999776482582);
              iVar13 = FastDoubleToInt((double)*(byte *)((int)pfVar8 + 0x26));
              dVar16 = (double)MB_randRangeFloat
                                         ((float)dVar16,(float)((double)(longlong)iVar13 * dVar20));
              pfVar8[0x15] = (float)dVar16;
            }
            if ((*(short *)((int)pfVar8 + 0x6e) != 0) &&
               (iVar13 = FastDecTimerS16(uVar15 + 0x76), iVar13 != 0)) {
              auVar25 = ZEXT416(0xffffffff);
              auVar25 = auVar25 | auVar25 << 0x20 | auVar25 << 0x40 | auVar25 << 0x60;
              auVar23 = loadVectorLeftIndexed(0x6e,uVar15);
              auVar24 = loadVectorRightIndexed(0x7e,uVar15);
              auVar26 = vectorShiftLeftIntegerWord(auVar25,auVar25);
              auVar25 = ZEXT416(0xfffffff0);
              auVar23 = vectorShiftRightWord
                                  (auVar23 | auVar24,
                                   auVar25 | auVar25 << 0x20 | auVar25 << 0x40 | auVar25 << 0x60);
              auVar25 = loadVectorLeftIndexed(0x10,0x3fdc6c);
              auVar25 = auVar25 >> 0x60 & (GPiece<16>)0xffffffff;
              auVar23 = vectorConvertFromSignedFixedPointWord(auVar23,0);
              auVar24 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
              auVar23 = vectorAddFloatingPoint
                                  (auVar23,auVar25 | auVar25 << 0x20 | auVar25 << 0x40 |
                                           auVar25 << 0x60);
              auVar25 = ZEXT416(0xfffffff8);
              auVar23 = vectorMultiplyAddFloatingPoint(auVar24,auVar23,auVar26);
              auVar23 = vectorConvertToSignedFixedPointWordSaturate(auVar23,0);
              auVar23 = vectorSplatHalfWord(auVar23,1);
              uVar10 = storeVectorElementHalfWordIndexed(auVar23,0x76,uVar15);
              *(undefined2 *)((int)pfVar8 + 0x76) = uVar10;
              auVar23 = loadVectorLeftIndexed(0x2c,uVar15);
              auVar25 = vectorShiftRightWord
                                  (auVar23,auVar25 | auVar25 << 0x20 | auVar25 << 0x40 |
                                           auVar25 << 0x60);
              auVar25 = vectorConvertFromUnsignedFixedPointWord(auVar25,0);
              auVar25 = auVar25 >> 0x60 & (GPiece<16>)0xffffffff;
              uVar11 = storeVectorElementWordIndexed
                                 (auVar25 | auVar25 << 0x20 | auVar25 << 0x40 | auVar25 << 0x60,0x58
                                  ,uVar15);
              *(undefined4 *)((uint)(pfVar8 + 0x16) & 0xfffffffc) = uVar11;
              pfVar8[0x13] = (float)((uint)pfVar8[0x13] & 0xfffff7ff);
            }
            fVar14 = pfVar8[0x13];
            if (((uint)fVar14 & 0x20000) == 0) {
              if ((((uint)fVar14 & 0x200) != 0) && (((uint)fVar14 & 0x100) == 0)) {
                fVar14 = (float)((uint)fVar14 ^ 0x200);
                pfVar8[0x13] = fVar14;
              }
              if (((uint)fVar14 & 0x200) == 0) {
                if (((uint)fVar14 & 0x800) == 0) {
                  dVar16 = (double)FastIntToDouble(*(undefined1 *)((int)pfVar8 + 0x2b));
                  dVar21 = (double)pfVar8[0x16];
                  dVar20 = 0.009999999776482582;
                  dVar22 = (double)(float)(dVar16 * 0.009999999776482582);
                  dVar16 = (double)FastIntToDouble(*(undefined1 *)((int)pfVar8 + 0x2d));
                  fVar14 = (float)((double)(float)(dVar16 * dVar20) * (double)DAT_0071f408 + dVar21)
                  ;
                  pfVar8[0x16] = fVar14;
                  if (dVar22 <= (double)fVar14) {
                    fVar14 = pfVar8[0x13];
                    pfVar8[0x16] = (float)dVar22;
                    if (((uint)fVar14 & 0x100) == 0) {
                      pfVar8[0x13] = (float)((uint)fVar14 ^ 0x800);
                    }
                    else {
                      auVar25 = ZEXT416(0xfffffff8);
                      auVar23 = ZEXT416(0xffffffff);
                      auVar24 = auVar23 | auVar23 << 0x20 | auVar23 << 0x40 | auVar23 << 0x60;
                      auVar23 = loadVectorLeftIndexed(0x69,uVar15);
                      auVar25 = vectorShiftRightWord
                                          (auVar23,auVar25 | auVar25 << 0x20 | auVar25 << 0x40 |
                                                   auVar25 << 0x60);
                      auVar24 = vectorShiftLeftIntegerWord(auVar24,auVar24);
                      auVar23 = vectorConvertFromSignedFixedPointWord(auVar25,0);
                      auVar25 = loadVectorLeftIndexed(0x10,0x3fdc6c);
                      auVar25 = auVar25 >> 0x60 & (GPiece<16>)0xffffffff;
                      auVar26 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
                      auVar25 = vectorAddFloatingPoint
                                          (auVar23,auVar25 | auVar25 << 0x20 | auVar25 << 0x40 |
                                                   auVar25 << 0x60);
                      auVar25 = vectorMultiplyAddFloatingPoint(auVar26,auVar25,auVar24);
                      auVar25 = vectorConvertToSignedFixedPointWordSaturate(auVar25,0);
                      auVar25 = auVar25 >> 0x60 & (GPiece<16>)0xff;
                      uVar9 = storeVectorElementByteIndexed
                                        (auVar25 | auVar25 << 8 | auVar25 << 0x10 | auVar25 << 0x18
                                         | auVar25 << 0x20 | auVar25 << 0x28 | auVar25 << 0x30 |
                                         auVar25 << 0x38 | auVar25 << 0x40 | auVar25 << 0x48 |
                                         auVar25 << 0x50 | auVar25 << 0x58 | auVar25 << 0x60 |
                                         auVar25 << 0x68 | auVar25 << 0x70 | auVar25 << 0x78,0x7d,
                                         uVar15);
                      *(undefined1 *)((int)pfVar8 + 0x7d) = uVar9;
                      pfVar8[0x13] = (float)(((uint)fVar14 | 0x200) ^ 0x800);
                    }
                  }
                }
                else {
                  dVar16 = (double)FastIntToDouble(*(undefined1 *)(pfVar8 + 0xb));
                  dVar20 = 0.009999999776482582;
                  dVar21 = (double)pfVar8[0x16];
                  dVar22 = (double)(float)(dVar16 * 0.009999999776482582);
                  dVar16 = (double)FastIntToDouble(*(undefined1 *)((int)pfVar8 + 0x2e));
                  dVar16 = -(double)(float)((double)(float)(dVar16 * dVar20) * (double)DAT_0071f408
                                           - dVar21);
                  pfVar8[0x16] = (float)dVar16;
                  if (dVar16 <= dVar22) {
                    pfVar8[0x16] = (float)dVar22;
                    if ((((uint)pfVar8[0x13] & 0x400) != 0) && (*(short *)((int)pfVar8 + 0x6e) == 0)
                       ) {
                      pfVar8[0x13] = (float)((uint)pfVar8[0x13] ^ 0x800);
                    }
                  }
                }
              }
              else if ((*(char *)((int)pfVar8 + 0x69) != '\0') &&
                      (iVar13 = FastDecTimerU8(uVar15 + 0x7d), iVar13 != 0)) {
                pfVar8[0x13] = (float)((uint)pfVar8[0x13] ^ 0x200);
              }
            }
            else if (*(short *)((int)pfVar8 + 0x6e) == 0) {
              iVar13 = FastDoubleToInt((double)*(byte *)(pfVar8 + 0xb));
              dVar20 = 0.009999999776482582;
              dVar16 = (double)(float)((double)(longlong)iVar13 * 0.009999999776482582);
              iVar13 = FastDoubleToInt((double)*(byte *)((int)pfVar8 + 0x2b));
              dVar16 = (double)MB_randRangeFloat
                                         ((float)dVar16,(float)((double)(longlong)iVar13 * dVar20));
              pfVar8[0x16] = (float)dVar16;
            }
            if ((*(short *)(pfVar8 + 0x1c) != 0) &&
               (iVar13 = FastDecTimerS16(uVar15 + 0x78), iVar13 != 0)) {
              auVar25 = ZEXT416(0xffffffff);
              auVar25 = auVar25 | auVar25 << 0x20 | auVar25 << 0x40 | auVar25 << 0x60;
              auVar23 = loadVectorLeftIndexed(0x70,uVar15);
              auVar24 = loadVectorRightIndexed(0x80,uVar15);
              auVar26 = vectorShiftLeftIntegerWord(auVar25,auVar25);
              auVar25 = ZEXT416(0xfffffff0);
              auVar23 = vectorShiftRightWord
                                  (auVar23 | auVar24,
                                   auVar25 | auVar25 << 0x20 | auVar25 << 0x40 | auVar25 << 0x60);
              auVar25 = loadVectorLeftIndexed(0x10,0x3fdc6c);
              auVar25 = auVar25 >> 0x60 & (GPiece<16>)0xffffffff;
              auVar23 = vectorConvertFromSignedFixedPointWord(auVar23,0);
              auVar24 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
              auVar23 = vectorAddFloatingPoint
                                  (auVar23,auVar25 | auVar25 << 0x20 | auVar25 << 0x40 |
                                           auVar25 << 0x60);
              auVar25 = ZEXT416(0xfffffff8);
              auVar23 = vectorMultiplyAddFloatingPoint(auVar24,auVar23,auVar26);
              auVar23 = vectorConvertToSignedFixedPointWordSaturate(auVar23,0);
              auVar23 = vectorSplatHalfWord(auVar23,1);
              uVar10 = storeVectorElementHalfWordIndexed(auVar23,0x78,uVar15);
              *(undefined2 *)(pfVar8 + 0x1e) = uVar10;
              auVar23 = loadVectorLeftIndexed(0x31,uVar15);
              auVar25 = vectorShiftRightWord
                                  (auVar23,auVar25 | auVar25 << 0x20 | auVar25 << 0x40 |
                                           auVar25 << 0x60);
              auVar25 = vectorConvertFromUnsignedFixedPointWord(auVar25,0);
              auVar25 = auVar25 >> 0x60 & (GPiece<16>)0xffffffff;
              uVar11 = storeVectorElementWordIndexed
                                 (auVar25 | auVar25 << 0x20 | auVar25 << 0x40 | auVar25 << 0x60,0x5c
                                  ,uVar15);
              *(undefined4 *)((uint)(pfVar8 + 0x17) & 0xfffffffc) = uVar11;
              pfVar8[0x13] = (float)((uint)pfVar8[0x13] & 0xffff7fff);
            }
            fVar14 = pfVar8[0x13];
            if (((uint)fVar14 & 0x40000) == 0) {
              if ((((uint)fVar14 & 0x2000) != 0) && (((uint)fVar14 & 0x1000) == 0)) {
                fVar14 = (float)((uint)fVar14 ^ 0x2000);
                pfVar8[0x13] = fVar14;
              }
              if (((uint)fVar14 & 0x2000) == 0) {
                if (((uint)fVar14 & 0x8000) == 0) {
                  dVar16 = (double)FastIntToDouble(*(undefined1 *)(pfVar8 + 0xc));
                  dVar21 = (double)pfVar8[0x17];
                  dVar20 = 0.009999999776482582;
                  dVar22 = (double)(float)(dVar16 * 0.009999999776482582);
                  dVar16 = (double)FastIntToDouble(*(undefined1 *)((int)pfVar8 + 0x32));
                  fVar14 = (float)((double)(float)(dVar16 * dVar20) * (double)DAT_0071f408 + dVar21)
                  ;
                  pfVar8[0x17] = fVar14;
                  if (dVar22 <= (double)fVar14) {
                    fVar14 = pfVar8[0x13];
                    pfVar8[0x17] = (float)dVar22;
                    if (((uint)fVar14 & 0x1000) == 0) {
                      pfVar8[0x13] = (float)((uint)fVar14 ^ 0x8000);
                    }
                    else {
                      auVar25 = ZEXT416(0xfffffff8);
                      auVar23 = ZEXT416(0xffffffff);
                      auVar24 = auVar23 | auVar23 << 0x20 | auVar23 << 0x40 | auVar23 << 0x60;
                      auVar23 = loadVectorLeftIndexed(0x6a,uVar15);
                      auVar25 = vectorShiftRightWord
                                          (auVar23,auVar25 | auVar25 << 0x20 | auVar25 << 0x40 |
                                                   auVar25 << 0x60);
                      auVar24 = vectorShiftLeftIntegerWord(auVar24,auVar24);
                      auVar23 = vectorConvertFromSignedFixedPointWord(auVar25,0);
                      auVar25 = loadVectorLeftIndexed(0x10,0x3fdc6c);
                      auVar25 = auVar25 >> 0x60 & (GPiece<16>)0xffffffff;
                      auVar26 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
                      auVar25 = vectorAddFloatingPoint
                                          (auVar23,auVar25 | auVar25 << 0x20 | auVar25 << 0x40 |
                                                   auVar25 << 0x60);
                      auVar25 = vectorMultiplyAddFloatingPoint(auVar26,auVar25,auVar24);
                      auVar25 = vectorConvertToSignedFixedPointWordSaturate(auVar25,0);
                      auVar25 = auVar25 >> 0x60 & (GPiece<16>)0xff;
                      uVar9 = storeVectorElementByteIndexed
                                        (auVar25 | auVar25 << 8 | auVar25 << 0x10 | auVar25 << 0x18
                                         | auVar25 << 0x20 | auVar25 << 0x28 | auVar25 << 0x30 |
                                         auVar25 << 0x38 | auVar25 << 0x40 | auVar25 << 0x48 |
                                         auVar25 << 0x50 | auVar25 << 0x58 | auVar25 << 0x60 |
                                         auVar25 << 0x68 | auVar25 << 0x70 | auVar25 << 0x78,0x7e,
                                         uVar15);
                      *(undefined1 *)((int)pfVar8 + 0x7e) = uVar9;
                      pfVar8[0x13] = (float)(((uint)fVar14 | 0x2000) ^ 0x8000);
                    }
                  }
                }
                else {
                  dVar16 = (double)FastIntToDouble(*(undefined1 *)((int)pfVar8 + 0x31));
                  dVar20 = 0.009999999776482582;
                  dVar21 = (double)pfVar8[0x17];
                  dVar22 = (double)(float)(dVar16 * 0.009999999776482582);
                  dVar16 = (double)FastIntToDouble(*(undefined1 *)((int)pfVar8 + 0x33));
                  dVar16 = -(double)(float)((double)(float)(dVar16 * dVar20) * (double)DAT_0071f408
                                           - dVar21);
                  pfVar8[0x17] = (float)dVar16;
                  if (dVar16 <= dVar22) {
                    pfVar8[0x17] = (float)dVar22;
                    if ((((uint)pfVar8[0x13] & 0x4000) != 0) && (*(short *)(pfVar8 + 0x1c) == 0)) {
                      pfVar8[0x13] = (float)((uint)pfVar8[0x13] ^ 0x8000);
                    }
                  }
                }
              }
              else if ((*(char *)((int)pfVar8 + 0x6a) != '\0') &&
                      (iVar13 = FastDecTimerU8(uVar15 + 0x7e), iVar13 != 0)) {
                pfVar8[0x13] = (float)((uint)pfVar8[0x13] ^ 0x2000);
              }
            }
            else if (*(short *)(pfVar8 + 0x1c) == 0) {
              iVar13 = FastDoubleToInt((double)*(byte *)((int)pfVar8 + 0x31));
              dVar20 = 0.009999999776482582;
              dVar16 = (double)(float)((double)(longlong)iVar13 * 0.009999999776482582);
              iVar13 = FastDoubleToInt((double)*(byte *)(pfVar8 + 0xc));
              dVar16 = (double)MB_randRangeFloat
                                         ((float)dVar16,(float)((double)(longlong)iVar13 * dVar20));
              pfVar8[0x17] = (float)dVar16;
            }
            fVar14 = pfVar8[0x14];
            if (fVar14 == -NAN) {
              dVar20 = (double)pfVar8[0x18];
              dVar16 = (double)FastIntToDouble(*(undefined1 *)(pfVar8 + 9));
              fVar14 = (float)CreatePointLight2
                                        ((float)dVar20,
                                         (double)(float)(dVar16 * 0.009999999776482582),
                                         (double)pfVar8[0x15],(double)pfVar8[0x16],
                                         (double)pfVar8[0x17],(Vec4 *)&moby->pos);
              pfVar8[0x14] = fVar14;
            }
            else {
              PointLights[(int)fVar14].pos.x = (moby->pos).x;
              PointLights[(int)fVar14].pos.y = (moby->pos).y;
              PointLights[(int)fVar14].pos.z = (moby->pos).z;
              PointLights[(int)fVar14].pos.w = (moby->pos).w;
              PointLights[(int)fVar14].pos.w = pfVar8[0x18];
              PointLights[(int)fVar14].color.x = pfVar8[0x15];
              PointLights[(int)fVar14].color.y = pfVar8[0x16];
              PointLights[(int)fVar14].color.z = pfVar8[0x17];
              dVar16 = (double)FastIntToDouble(*(undefined1 *)(pfVar8 + 9));
              PointLights[(int)fVar14].color.w = (float)(dVar16 * 0.009999999776482582);
            }
          }
        }
        else {
          if (pfVar8[0x14] != -NAN) {
            DeletePointLight(pfVar8[0x14]);
            pfVar8[0x14] = -NAN;
          }
          DeleteMoby(moby);
        }
      }
      else {
        moby->setByGroup = moby->setByGroup + -1;
      }
    }
  }
  return;
}


