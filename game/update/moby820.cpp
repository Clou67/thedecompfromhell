// game/update/moby820.cpp -- reconstructed from NPEA00385 EBOOT
// STATUS: NOT STARTED (raw Ghidra output)
// 9 functions, 0x472fbc-0x4764c8
#include <stdio.h>
#include <stdlib.h>
#include "game/update/moby820.h"
#include "game/camera.h"
#include "game/collproc.h"
#include "game/hero.h"
#include "game/mesh.h"
#include "game/mobyfunc.h"
#include "game/mobyutil.h"
#include "game/partupd.h"
#include "game/path.h"
#include "game/update.h"
#include "idol/fastfunc.h"
#include "idol/mathfunc.h"
#include "idol/xUnk.h"

// 0x0472fbc (0x14 bytes)
void M820_00472fbc(void)

{
  DAT_00877928 = 0x10000;
  return;
}


// 0x0472fd8 (0x78 bytes)
void M820_00472fd8(int param_1)

{
  if (*(char *)(param_1 + 0x53) != '\x02') {
    MB_SetAnimation(param_1,2,0,(int)(animationSpeed * 10.5));
  }
  *(undefined1 *)(param_1 + 0x20) = 0xe;
  return;
}


// 0x0473058 (0xec bytes)
void M820_00473058(int param_1)

{
  uint uVar1;
  
  uVar1 = rand();
  if (uVar1 == (((int)uVar1 >> 1) + (uint)((int)uVar1 < 0 && (uVar1 & 1) != 0)) * 2) {
    if (*(char *)(param_1 + 0x53) != '\x03') {
      MB_SetAnimation(param_1,3,0,(int)(animationSpeed * 10.5));
    }
    *(undefined1 *)(param_1 + 0x20) = 8;
  }
  else {
    if (*(char *)(param_1 + 0x53) != '\x04') {
      MB_SetAnimation(param_1,4,0,(int)(animationSpeed * 10.5));
    }
    *(undefined1 *)(param_1 + 0x20) = 8;
  }
  return;
}


// 0x0473158 (0x7dc bytes)
// inlined: FastRSqrt @0x4733a0, FastRSqrt @0x4736e4, FastRSqrt @0x473768
undefined8
M820_00473158(longlong param_1,longlong param_2,float *param_3,float *param_4)

{
  longlong lVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  undefined4 uVar10;
  ulonglong *puVar11;
  int iVar12;
  int iVar13;
  float fVar14;
  float fVar15;
  ulonglong uVar16;
  int iVar18;
  undefined8 uVar17;
  ulonglong unaff_r26;
  ulonglong unaff_r27;
  ulonglong unaff_r28;
  ulonglong unaff_r29;
  longlong lVar19;
  ulonglong unaff_r30;
  ulonglong unaff_r31;
  ulonglong in_LR;
  double dVar20;
  double dVar21;
  double dVar22;
  double dVar23;
  double dVar24;
  double dVar25;
  double dVar26;
  double dVar27;
  ulonglong in_f17;
  ulonglong in_f18;
  ulonglong in_f19;
  ulonglong in_f20;
  double dVar28;
  ulonglong in_f21;
  ulonglong in_f22;
  ulonglong in_f23;
  ulonglong in_f24;
  ulonglong in_f25;
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
  GPiece<16> auVar34;
  GPiece<16> auVar35;
  GPiece<16> auVar36;
  GPiece<16> auVar37;
  GPiece<16> auVar38;
  GPiece<16> auVar39;
  GPiece<16> auVar40;
  GPiece<16> auVar41;
  GPiece<16> auVar42;
  GPiece<16> auVar43;
  GPiece<16> auVar44;
  GPiece<16> auVar45;
  GPiece<16> auVar46;
  GPiece<16> auVar47;
  GPiece<16> auVar48;
  GPiece<16> auVar49;
  
  uVar16 = ZEXT48(&stack0x00000000);
  lVar1 = uVar16 - 0x180;
  puVar11 = (ulonglong *)lVar1;
  *puVar11 = uVar16;
  puVar11[0x32] = in_LR;
  puVar11[0x21] = in_f17;
  puVar11[0x22] = in_f18;
  puVar11[0x23] = in_f19;
  puVar11[0x24] = in_f20;
  puVar11[0x25] = in_f21;
  puVar11[0x26] = in_f22;
  puVar11[0x27] = in_f23;
  puVar11[0x28] = in_f24;
  puVar11[0x29] = in_f25;
  puVar11[0x2a] = in_f26;
  puVar11[0x2b] = in_f27;
  puVar11[0x2c] = in_f28;
  puVar11[0x2d] = in_f29;
  puVar11[0x2e] = in_f30;
  puVar11[0x2f] = in_f31;
  iVar12 = (int)param_2;
  *(undefined4 *)(iVar12 + 0x1c8) = 0;
  puVar11[0x20] = unaff_r31;
  dVar33 = 0.0;
  puVar11[0x1f] = unaff_r30;
  puVar11[0x1c] = unaff_r27;
  puVar11[0x1d] = unaff_r28;
  puVar11[0x1e] = unaff_r29;
  puVar11[0x1b] = unaff_r26;
  iVar13 = (int)param_1;
  dVar32 = dVar33;
  dVar31 = dVar33;
  dVar30 = dVar33;
  dVar22 = dVar33;
  if (param_3 != (float *)0x0) {
    fVar6 = param_3[1] - *(float *)(iVar13 + 0x14);
    fVar7 = *param_3 - *(float *)(iVar13 + 0x10);
    fVar8 = param_3[2] - *(float *)(iVar13 + 0x18);
    dVar23 = (double)SQRT(fVar8 * fVar8 + fVar7 * fVar7 + fVar6 * fVar6);
    dVar22 = 1.0;
    if (dVar23 - 1.0 < 0.0) {
      dVar22 = dVar23;
    }
    fVar2 = (float)(dVar22 / dVar23);
    if (0.0 - dVar23 < 0.0) {
      dVar30 = (double)(fVar7 * fVar2);
    }
    if (0.0 - dVar23 < 0.0) {
      dVar31 = (double)(fVar6 * fVar2);
    }
    if (0.0 - dVar23 < 0.0) {
      dVar32 = (double)(fVar8 * fVar2);
    }
    if (dVar23 - 0.0 < 0.0) {
      dVar30 = (double)(fVar7 * fVar2);
    }
    if (dVar23 - 0.0 < 0.0) {
      dVar31 = (double)(fVar6 * fVar2);
    }
    if (dVar23 - 0.0 < 0.0) {
      dVar32 = (double)(fVar8 * fVar2);
    }
  }
  lVar19 = param_2 + 0x120;
  FastQuaternionToMtx4Identity(lVar19,uVar16 - 0xf0);
  dVar26 = (double)*(float *)((int)puVar11 + 0xb4);
  dVar25 = (double)*(float *)(puVar11 + 0x16);
  dVar27 = (double)*(float *)(puVar11 + 0x17);
  dVar20 = (double)SQRT((float)(dVar27 * dVar27 +
                               (double)(float)(dVar25 * dVar25 + (double)(float)(dVar26 * dVar26))))
  ;
  fVar6 = *(float *)(iVar12 + 0x188);
  dVar29 = (double)*(float *)(iVar12 + 0x18c);
  fVar7 = *(float *)(iVar13 + 0x10);
  fVar8 = *(float *)(iVar13 + 0x14);
  fVar2 = *(float *)(iVar13 + 0x18);
  fVar9 = *(float *)(iVar12 + 0x184);
  auVar38 = loadVectorLeftIndexed(0xb0,lVar1);
  auVar40 = loadVectorLeftIndexed(0xb4,lVar1);
  auVar42 = loadVectorLeftIndexed(0xb8,lVar1);
  auVar35 = loadVectorLeftIndexed(0xbc,lVar1);
  auVar36 = loadVectorLeftIndexed(0x188,param_2);
  auVar37 = loadVectorLeftIndexed(0x18c,param_2);
  auVar39 = loadVectorLeftIndexed(0x10,param_1);
  auVar41 = loadVectorLeftIndexed(0x14,param_1);
  auVar43 = loadVectorLeftIndexed(0x18,param_1);
  dVar21 = (double)(float)((double)(float)(dVar27 * dVar32 +
                                          (double)(float)(dVar25 * dVar30 +
                                                         (double)(float)(dVar26 * dVar31))) / dVar20
                          );
  dVar23 = dVar33;
  if (dVar33 - dVar20 < 0.0) {
    dVar23 = (double)(float)(dVar26 * dVar21);
  }
  dVar24 = dVar33;
  if (dVar33 - dVar20 < 0.0) {
    dVar24 = (double)(float)(dVar25 * dVar21);
  }
  dVar28 = dVar33;
  if (dVar33 - dVar20 < 0.0) {
    dVar28 = (double)(float)(dVar27 * dVar21);
  }
  if (dVar20 - dVar33 < 0.0) {
    dVar23 = (double)(float)(dVar26 * dVar21);
  }
  if (dVar20 - dVar33 < 0.0) {
    dVar24 = (double)(float)(dVar25 * dVar21);
  }
  if (dVar20 - dVar33 < 0.0) {
    dVar28 = (double)(float)(dVar27 * dVar21);
  }
  fVar3 = (float)(dVar31 - dVar23);
  fVar4 = (float)(dVar30 - dVar24);
  fVar5 = (float)(dVar32 - dVar28);
  fVar14 = fVar5 * fVar5 + fVar4 * fVar4 + fVar3 * fVar3;
  dVar30 = dVar33;
  dVar31 = dVar33;
  dVar32 = dVar33;
  if ((double)SQRT(fVar14) != dVar33) {
    fVar15 = 1.0 / SQRT(fVar14);
    fVar15 = -(fVar14 * fVar15 * fVar15 - 1.0) * fVar15 * 0.5 + fVar15;
    fVar15 = -(fVar14 * fVar15 * fVar15 - 1.0) * fVar15 * 0.5 + fVar15;
    fVar15 = -(fVar14 * fVar15 * fVar15 - 1.0) * fVar15 * 0.5 + fVar15;
    dVar30 = (double)(fVar4 * fVar15);
    dVar31 = (double)(fVar3 * fVar15);
    dVar32 = (double)(fVar5 * fVar15);
  }
  auVar44 = ZEXT416(0xffffffff);
  auVar44 = auVar44 | auVar44 << 0x20 | auVar44 << 0x40 | auVar44 << 0x60;
  auVar45 = vectorShiftLeftIntegerWord(auVar44,auVar44);
  auVar44 = ZEXT416(0xffffffff);
  auVar44 = auVar44 | auVar44 << 0x20 | auVar44 << 0x40 | auVar44 << 0x60;
  *(undefined4 *)((int)puVar11 + 0x7c) = 0;
  *(undefined4 *)(puVar11 + 0xf) = 0;
  *(undefined4 *)((int)puVar11 + 0x74) = 0;
  *(undefined4 *)(puVar11 + 0xe) = 0;
  auVar46 = vectorMultiplyAddFloatingPoint(auVar35,auVar36,auVar45);
  *(undefined4 *)((int)puVar11 + 0x8c) = 0;
  *(undefined4 *)(puVar11 + 0x11) = 0;
  *(undefined4 *)((int)puVar11 + 0x84) = 0;
  *(undefined4 *)(puVar11 + 0x10) = 0;
  auVar47 = vectorShiftLeftIntegerWord(auVar44,auVar44);
  auVar44 = ZEXT416(0xffffffff);
  auVar45 = auVar44 | auVar44 << 0x20 | auVar44 << 0x40 | auVar44 << 0x60;
  auVar49 = vectorMultiplyAddFloatingPoint(auVar40,auVar36,auVar41);
  auVar44 = ZEXT416(0xffffffff);
  auVar44 = auVar44 | auVar44 << 0x20 | auVar44 << 0x40 | auVar44 << 0x60;
  dVar23 = (double)SQRT((float)(dVar32 * dVar32 +
                               (double)(float)(dVar30 * dVar30 + (double)(float)(dVar31 * dVar31))))
  ;
  auVar48 = vectorShiftLeftIntegerWord(auVar45,auVar45);
  auVar45 = vectorShiftLeftIntegerWord(auVar44,auVar44);
  auVar44 = ZEXT416(0xffffffff);
  auVar34 = auVar44 | auVar44 << 0x20 | auVar44 << 0x40 | auVar44 << 0x60;
  auVar44 = auVar46 >> 0x60 & (GPiece<16>)0xffffffff;
  auVar34 = vectorShiftLeftIntegerWord(auVar34,auVar34);
  uVar10 = storeVectorElementWordIndexed
                     (auVar44 | auVar44 << 0x20 | auVar44 << 0x40 | auVar44 << 0x60,0x7c,lVar1);
  *(undefined4 *)((int)puVar11 + 0x7c) = uVar10;
  auVar47 = vectorMultiplyAddFloatingPoint(auVar37,auVar38,auVar47);
  auVar46 = vectorMultiplyAddFloatingPoint(auVar38,auVar36,auVar39);
  auVar44 = vectorMultiplyAddFloatingPoint(auVar42,auVar36,auVar43);
  auVar40 = vectorMultiplyAddFloatingPoint(auVar37,auVar40,auVar48);
  auVar42 = vectorMultiplyAddFloatingPoint(auVar37,auVar42,auVar45);
  auVar36 = auVar49 >> 0x60 & (GPiece<16>)0xffffffff;
  auVar45 = loadVectorLeftIndexed(0xc,0x473144);
  auVar38 = vectorMultiplyAddFloatingPoint(auVar37,auVar35,auVar34);
  auVar35 = auVar45 >> 0x60 & (GPiece<16>)0xffffffff;
  auVar45 = auVar35 | auVar35 << 0x20 | auVar35 << 0x40 | auVar35 << 0x60;
  auVar35 = auVar46 >> 0x60 & (GPiece<16>)0xffffffff;
  auVar37 = auVar44 >> 0x60 & (GPiece<16>)0xffffffff;
  auVar39 = vectorAddFloatingPoint(auVar45 ^ auVar47,auVar39);
  auVar40 = vectorAddFloatingPoint(auVar45 ^ auVar40,auVar41);
  auVar41 = vectorAddFloatingPoint(auVar45 ^ auVar42,auVar43);
  auVar38 = (auVar45 ^ auVar38) >> 0x60 & (GPiece<16>)0xffffffff;
  uVar10 = storeVectorElementWordIndexed
                     (auVar38 | auVar38 << 0x20 | auVar38 << 0x40 | auVar38 << 0x60,0x8c,lVar1);
  *(undefined4 *)((int)puVar11 + 0x8c) = uVar10;
  auVar38 = auVar39 >> 0x60 & (GPiece<16>)0xffffffff;
  uVar10 = storeVectorElementWordIndexed
                     (auVar35 | auVar35 << 0x20 | auVar35 << 0x40 | auVar35 << 0x60,0x70,lVar1);
  *(undefined4 *)(puVar11 + 0xe) = uVar10;
  auVar35 = auVar40 >> 0x60 & (GPiece<16>)0xffffffff;
  auVar39 = auVar41 >> 0x60 & (GPiece<16>)0xffffffff;
  uVar10 = storeVectorElementWordIndexed
                     (auVar36 | auVar36 << 0x20 | auVar36 << 0x40 | auVar36 << 0x60,0x74,lVar1);
  *(undefined4 *)((int)puVar11 + 0x74) = uVar10;
  uVar10 = storeVectorElementWordIndexed
                     (auVar37 | auVar37 << 0x20 | auVar37 << 0x40 | auVar37 << 0x60,0x78,lVar1);
  *(undefined4 *)(puVar11 + 0xf) = uVar10;
  uVar10 = storeVectorElementWordIndexed
                     (auVar38 | auVar38 << 0x20 | auVar38 << 0x40 | auVar38 << 0x60,0x80,lVar1);
  *(undefined4 *)(puVar11 + 0x10) = uVar10;
  uVar10 = storeVectorElementWordIndexed
                     (auVar35 | auVar35 << 0x20 | auVar35 << 0x40 | auVar35 << 0x60,0x84,lVar1);
  *(undefined4 *)((int)puVar11 + 0x84) = uVar10;
  dVar20 = (double)(float)(dVar22 / dVar23);
  uVar10 = storeVectorElementWordIndexed
                     (auVar39 | auVar39 << 0x20 | auVar39 << 0x40 | auVar39 << 0x60,0x88,lVar1);
  *(undefined4 *)(puVar11 + 0x11) = uVar10;
  dVar22 = dVar33;
  if (dVar33 - dVar23 < 0.0) {
    dVar22 = (double)(float)(dVar30 * dVar20);
  }
  dVar21 = dVar33;
  if (dVar33 - dVar23 < 0.0) {
    dVar21 = (double)(float)(dVar31 * dVar20);
  }
  dVar24 = dVar33;
  if (dVar33 - dVar23 < 0.0) {
    dVar24 = (double)(float)(dVar32 * dVar20);
  }
  if (dVar23 - dVar33 < 0.0) {
    dVar22 = (double)(float)(dVar30 * dVar20);
  }
  if (dVar23 - dVar33 < 0.0) {
    dVar21 = (double)(float)(dVar31 * dVar20);
  }
  if (dVar23 - dVar33 < 0.0) {
    dVar24 = (double)(float)(dVar32 * dVar20);
  }
  if (param_3 != (float *)0x0) {
    dVar23 = (double)((float)((double)fVar9 * dVar29) / fVar6);
    *(float *)(puVar11 + 0x10) =
         (float)(dVar22 * dVar23 +
                (double)((float)((double)*(float *)(puVar11 + 0x18) * dVar33 +
                                (double)((float)((double)*(float *)(puVar11 + 0x12) * dVar33 +
                                                dVar33) + -(float)(dVar29 * dVar25))) + fVar7));
    *(float *)((int)puVar11 + 0x84) =
         (float)(dVar21 * dVar23 +
                (double)((float)((double)*(float *)((int)puVar11 + 0xc4) * dVar33 +
                                (double)((float)((double)*(float *)((int)puVar11 + 0x94) * dVar33 +
                                                dVar33) + -(float)(dVar29 * dVar26))) + fVar8));
    *(float *)(puVar11 + 0x11) =
         (float)(dVar24 * dVar23 +
                (double)((float)((double)*(float *)(puVar11 + 0x19) * dVar33 +
                                (double)((float)((double)*(float *)(puVar11 + 0x13) * dVar33 +
                                                dVar33) + -(float)(dVar29 * dVar27))) + fVar2));
  }
  iVar18 = CollLine(uVar16 - 0x110,uVar16 - 0x100,0x12,param_1,0);
  if (iVar18 == 0) {
    FastSlerp((double)((*(float *)(iVar12 + 0x170) - 1.0) * DAT_0071f408 + 1.0),lVar19,
                        lVar19,param_2 + 0x130);
    FastQuaternionToMtx4(lVar19,param_1 + 0xc0);
    uVar17 = 0;
  }
  else {
    if (param_4 != (float *)0x0) {
      *param_4 = ABS(*(float *)(iVar13 + 0x18) - g_CollOutput.ip.z);
    }
    if (((*(byte *)(iVar13 + 0x20) < 6) || (*(int *)(iVar12 + 0x1a0) == -1)) ||
       (iVar18 = PointInsideComplexPoly
                           ((Vec4 *)&g_CollOutput.ip,(Vec4 *)Splines[*(int *)(iVar12 + 0x1a0)]->points
                            ,Splines[*(int *)(iVar12 + 0x1a0)]->cnt), iVar18 != 0)) {
      *(float *)(iVar12 + 0x140) = g_CollOutput.ip.x;
      *(float *)(iVar12 + 0x144) = g_CollOutput.ip.y;
      *(float *)(iVar12 + 0x148) = g_CollOutput.ip.z;
      *(float *)(iVar12 + 0x14c) = g_CollOutput.ip.w;
    }
    else {
      NearestPntOnPathAtDist
                ((float)dVar33,(Vec4 *)(iVar12 + 0x140),iVar13 + 0x10,0xa10960,
                 Splines[*(int *)(iVar12 + 0x1a0)]);
      *(undefined4 *)(iVar12 + 0x1c8) = 1;
    }
    fVar6 = g_CollOutput.normal.w;
    if ((5 < *(byte *)(iVar13 + 0x20)) && (iVar18 = *(int *)(iVar12 + 0x180), iVar18 != 0)) {
      fVar7 = *(float *)(iVar18 + 0x14) - *(float *)(iVar13 + 0x14);
      fVar8 = *(float *)(iVar18 + 0x10) - *(float *)(iVar13 + 0x10);
      fVar9 = *(float *)(iVar18 + 0x18) - *(float *)(iVar13 + 0x18);
      fVar2 = fVar9 * fVar9 + fVar8 * fVar8 + fVar7 * fVar7;
      dVar30 = dVar33;
      dVar31 = dVar33;
      dVar32 = dVar33;
      if ((double)SQRT(fVar2) != dVar33) {
        fVar3 = 1.0 / SQRT(fVar2);
        fVar3 = -(fVar2 * fVar3 * fVar3 - 1.0) * fVar3 * 0.5 + fVar3;
        fVar3 = -(fVar2 * fVar3 * fVar3 - 1.0) * fVar3 * 0.5 + fVar3;
        fVar3 = -(fVar2 * fVar3 * fVar3 - 1.0) * fVar3 * 0.5 + fVar3;
        dVar30 = (double)(fVar8 * fVar3);
        dVar31 = (double)(fVar7 * fVar3);
        dVar32 = (double)(fVar9 * fVar3);
      }
    }
    fVar7 = g_CollOutput.normal.z * g_CollOutput.normal.z +
            g_CollOutput.normal.x * g_CollOutput.normal.x + g_CollOutput.normal.y * g_CollOutput.normal.y;
    dVar22 = dVar33;
    dVar23 = dVar33;
    if ((double)SQRT(fVar7) != dVar33) {
      fVar8 = 1.0 / SQRT(fVar7);
      fVar8 = -(fVar7 * fVar8 * fVar8 - 1.0) * fVar8 * 0.5 + fVar8;
      fVar8 = -(fVar7 * fVar8 * fVar8 - 1.0) * fVar8 * 0.5 + fVar8;
      fVar8 = -(fVar7 * fVar8 * fVar8 - 1.0) * fVar8 * 0.5 + fVar8;
      dVar33 = (double)(g_CollOutput.normal.y * fVar8);
      dVar22 = (double)(g_CollOutput.normal.x * fVar8);
      dVar23 = (double)(g_CollOutput.normal.z * fVar8);
    }
    *(undefined4 *)((int)puVar11 + 0x9c) = 0;
    *(undefined4 *)((int)puVar11 + 0xac) = 0;
    *(float *)(puVar11 + 0x16) = (float)dVar22;
    *(float *)((int)puVar11 + 0xb4) = (float)dVar33;
    fVar7 = (float)(dVar33 * dVar32 - (double)(float)(dVar23 * dVar31));
    dVar20 = (double)fVar7;
    fVar8 = (float)(dVar23 * dVar30 - (double)(float)(dVar22 * dVar32));
    dVar32 = (double)fVar8;
    fVar2 = (float)(dVar22 * dVar31 - (double)(float)(dVar33 * dVar30));
    dVar30 = (double)fVar2;
    *(float *)(puVar11 + 0x14) = fVar7;
    *(float *)((int)puVar11 + 0xa4) = fVar8;
    *(float *)(puVar11 + 0x15) = fVar2;
    *(float *)(puVar11 + 0x17) = (float)dVar23;
    *(float *)((int)puVar11 + 0xbc) = fVar6;
    *(float *)((int)puVar11 + 0x94) = (float)(dVar30 * dVar22 - (double)(float)(dVar20 * dVar23));
    *(float *)(puVar11 + 0x13) = (float)(dVar20 * dVar33 - (double)(float)(dVar32 * dVar22));
    *(float *)(puVar11 + 0x12) = (float)(dVar32 * dVar23 - (double)(float)(dVar30 * dVar33));
    MB_MtxToQuat((float *)(param_2 + 0x130),(float *)(puVar11 + 0x12));
    FastSlerp((double)((*(float *)(iVar12 + 0x170) - 1.0) * DAT_0071f408 + 1.0),lVar19,
                        lVar19,param_2 + 0x130);
    FastQuaternionToMtx4(lVar19,param_1 + 0xc0);
    uVar17 = 1;
  }
  return uVar17;
}


// 0x0473940 (0x164 bytes)
void M820_00473940(int param_1,int param_2,float *param_3)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  
  fVar1 = param_3[1] - *(float *)(param_1 + 0x14);
  fVar4 = *param_3 - *(float *)(param_1 + 0x10);
  fVar2 = param_3[2] - *(float *)(param_1 + 0x18);
  fVar6 = 0.0;
  fVar3 = SQRT(fVar2 * fVar2 + fVar4 * fVar4 + fVar1 * fVar1);
  fVar8 = 0.0001 / fVar3;
  fVar5 = fVar6;
  if (0.0 - fVar3 < 0.0) {
    fVar5 = fVar4 * fVar8;
  }
  fVar7 = fVar6;
  if (0.0 - fVar3 < 0.0) {
    fVar7 = fVar1 * fVar8;
  }
  if (0.0 - fVar3 < 0.0) {
    fVar6 = fVar2 * fVar8;
  }
  if (fVar3 - 0.0 < 0.0) {
    fVar5 = fVar4 * fVar8;
  }
  if (fVar3 - 0.0 < 0.0) {
    fVar7 = fVar1 * fVar8;
  }
  if (fVar3 - 0.0 < 0.0) {
    fVar6 = fVar2 * fVar8;
  }
  *param_3 = *(float *)(param_1 + 0x10) + fVar5;
  param_3[1] = *(float *)(param_1 + 0x14) + fVar7;
  param_3[2] = *(float *)(param_1 + 0x18) + fVar6;
  param_3[3] = *(float *)(param_1 + 0x1c);
  M820_00473158(param_1,param_2,param_3,0);
  fVar2 = *(float *)(param_2 + 0x144) - *(float *)(param_1 + 0x14);
  fVar3 = *(float *)(param_2 + 0x140) - *(float *)(param_1 + 0x10);
  fVar4 = *(float *)(param_2 + 0x148) - *(float *)(param_1 + 0x18);
  fVar1 = *(float *)(param_2 + 0x17c);
  fVar6 = SQRT(fVar4 * fVar4 + fVar3 * fVar3 + fVar2 * fVar2);
  fVar5 = fVar1 / fVar6;
  if (fVar1 - fVar6 < 0.0) {
    fVar4 = fVar4 * fVar5;
  }
  if (fVar1 - fVar6 < 0.0) {
    fVar2 = fVar2 * fVar5;
  }
  if (fVar1 - fVar6 < 0.0) {
    fVar3 = fVar3 * fVar5;
  }
  *(float *)(param_1 + 0x18) = *(float *)(param_1 + 0x18) + fVar4;
  *(float *)(param_1 + 0x14) = *(float *)(param_1 + 0x14) + fVar2;
  *(float *)(param_1 + 0x10) = *(float *)(param_1 + 0x10) + fVar3;
  return;
}


// 0x0473ab0 (0x264 bytes)
// inlined: FastAtan2 @0x473bd0
void M820_00473ab0(int param_1,int param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  int iVar5;
  ulonglong *puVar6;
  int iVar7;
  float fVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  longlong lVar11;
  longlong lVar12;
  longlong lVar13;
  longlong lVar14;
  float *pfVar15;
  ulonglong unaff_r29;
  ulonglong unaff_r30;
  ulonglong unaff_r31;
  ulonglong in_LR;
  longlong lVar16;
  double dVar17;
  
  uVar9 = ZEXT48(&stack0x00000000);
  lVar11 = uVar9 - 0xd0;
  puVar6 = (ulonglong *)lVar11;
  *puVar6 = uVar9;
  puVar6[0x1c] = in_LR;
  puVar6[0x17] = unaff_r29;
  puVar6[0x19] = unaff_r31;
  puVar6[0x18] = unaff_r30;
  FastQuaternionToEuler(0x400921fb60000000,uVar9 - 0x60,0);
  FastQuaternionMult(param_2 + 0x120,param_2 + 0x120,uVar9 - 0x60);
  iVar5 = *(int *)(param_2 + 0x180);
  if (iVar5 == 0) {
    dVar17 = 0.0;
  }
  else {
    fVar2 = *(float *)(iVar5 + 0x10) - *(float *)(param_1 + 0x10);
    fVar1 = *(float *)(iVar5 + 0x14) - *(float *)(param_1 + 0x14);
    fVar3 = ABS(fVar2);
    fVar4 = ABS(fVar1);
    *(float *)(puVar6 + 0x10) = fVar2;
    *(float *)((int)puVar6 + 0x84) = fVar1;
    *(float *)(puVar6 + 0x11) = fVar3 - fVar4;
    dVar17 = 0.0;
    uVar10 = (ulonglong)(*(uint *)(puVar6 + 0x10) >> 0x1c) & 8 |
             (ulonglong)(*(uint *)(puVar6 + 0x11) >> 0x1e) & 2 |
             (ulonglong)(*(uint *)((int)puVar6 + 0x84) >> 0x1d) & 4;
    fVar2 = ABS(*(float *)(puVar6 + 0x10));
    if (*(float *)(puVar6 + 0x11) - 0.0 < 0.0) {
      fVar2 = fVar4;
    }
    fVar4 = *(float *)(&g_atanQuadrantTable + (int)(uVar10 << 2));
    fVar1 = *(float *)(((uint)(uVar10 << 2) | 0x735900) + 4);
    fVar8 = ABS(*(float *)((int)puVar6 + 0x84));
    if (*(float *)(puVar6 + 0x11) - 0.0 < 0.0) {
      fVar8 = fVar3;
    }
    if (0.0 < fVar2) {
      lVar14 = uVar9 - 0xc0;
      lVar13 = uVar9 - 0x44;
      lVar12 = uVar9 - 0x34;
      lVar16 = 2;
      fVar2 = (fVar8 - fVar2) / (fVar8 + fVar2);
      fVar3 = fVar2 * fVar2;
      *(float *)(puVar6 + 0x13) = fVar2;
      *(float *)(puVar6 + 0x12) = fVar2;
      *(float *)((int)puVar6 + 0x94) = fVar2;
      *(float *)((int)puVar6 + 0x8c) = fVar2;
      fVar2 = fVar3 * fVar3;
      *(float *)(puVar6 + 0x12) = *(float *)(puVar6 + 0x12) * fVar3;
      *(float *)((int)puVar6 + 0x94) = *(float *)((int)puVar6 + 0x94) * fVar2;
      *(float *)(puVar6 + 0x13) = *(float *)(puVar6 + 0x13) * fVar2 * fVar3;
      do {
        *(float *)((int)lVar14 + 0x8c) = *(float *)((int)lVar14 + 0x7c) * fVar2 * fVar2;
        iVar5 = (int)lVar13;
        lVar14 = lVar14 + 8;
        lVar13 = lVar13 + 8;
        *(float *)((int)lVar12 + 4) = *(float *)(iVar5 + 4) * fVar2 * fVar2;
        lVar12 = lVar12 + 8;
        lVar16 = lVar16 + -1;
      } while (lVar16 != 0);
      lVar14 = uVar9 - 0x44;
      pfVar15 = (float *)&DAT_007358e0;
      lVar16 = 4;
      lVar12 = lVar14;
      lVar13 = lVar11;
      do {
        fVar2 = *pfVar15;
        fVar3 = pfVar15[1];
        pfVar15 = pfVar15 + 2;
        *(float *)((int)lVar13 + 0x8c) = *(float *)((int)lVar13 + 0x8c) * fVar2;
        lVar13 = lVar13 + 8;
        *(float *)((int)lVar12 + 4) = *(float *)((int)lVar12 + 4) * fVar3;
        lVar12 = lVar12 + 8;
        lVar16 = lVar16 + -1;
      } while (lVar16 != 0);
      lVar12 = 2;
      do {
        iVar5 = (int)lVar11;
        lVar11 = lVar11 + 0x10;
        iVar7 = (int)lVar14;
        lVar14 = lVar14 + 0x10;
        dVar17 = (double)((float)(dVar17 + (double)*(float *)(iVar5 + 0x8c)) + *(float *)(iVar7 + 4)
                          + *(float *)(iVar7 + 8) + *(float *)(iVar7 + 0xc));
        lVar12 = lVar12 + -1;
      } while (lVar12 != 0);
      dVar17 = (double)((float)(dVar17 + 0.7853981852531433) * fVar4 + fVar1);
    }
  }
  FastQuaternionToEuler(dVar17,param_2 + 0x130,2);
  return;
}


// 0x0473d20 (0x290 bytes)
// inlined: FastAtan2 @0x473e0c
void M820_00473d20(int param_1,int param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  ulonglong *puVar5;
  int iVar6;
  float fVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  longlong lVar10;
  longlong lVar11;
  longlong lVar12;
  longlong lVar13;
  float *pfVar14;
  ulonglong unaff_r29;
  ulonglong unaff_r30;
  ulonglong unaff_r31;
  int iVar15;
  ulonglong in_LR;
  longlong lVar16;
  double dVar17;
  
  uVar8 = ZEXT48(&stack0x00000000);
  lVar10 = uVar8 - 0x100;
  puVar5 = (ulonglong *)lVar10;
  *puVar5 = uVar8;
  puVar5[0x22] = in_LR;
  puVar5[0x1e] = unaff_r30;
  puVar5[0x1f] = unaff_r31;
  iVar15 = *(int *)(param_2 + 0x180);
  puVar5[0x1d] = unaff_r29;
  if (iVar15 == 0) {
    dVar17 = 0.0;
  }
  else {
    fVar2 = *(float *)(iVar15 + 0x10) - *(float *)(param_1 + 0x10);
    fVar1 = *(float *)(iVar15 + 0x14) - *(float *)(param_1 + 0x14);
    fVar3 = ABS(fVar2);
    fVar4 = ABS(fVar1);
    *(float *)(puVar5 + 0x16) = fVar2;
    *(float *)((int)puVar5 + 0xb4) = fVar1;
    *(float *)(puVar5 + 0x17) = fVar3 - fVar4;
    dVar17 = 0.0;
    uVar9 = (ulonglong)(*(uint *)(puVar5 + 0x16) >> 0x1c) & 8 |
            (ulonglong)(*(uint *)(puVar5 + 0x17) >> 0x1e) & 2 |
            (ulonglong)(*(uint *)((int)puVar5 + 0xb4) >> 0x1d) & 4;
    fVar2 = ABS(*(float *)(puVar5 + 0x16));
    if (*(float *)(puVar5 + 0x17) - 0.0 < 0.0) {
      fVar2 = fVar4;
    }
    fVar4 = *(float *)(&g_atanQuadrantTable + (int)(uVar9 << 2));
    fVar1 = *(float *)(((uint)(uVar9 << 2) | 0x735900) + 4);
    fVar7 = ABS(*(float *)((int)puVar5 + 0xb4));
    if (*(float *)(puVar5 + 0x17) - 0.0 < 0.0) {
      fVar7 = fVar3;
    }
    if (0.0 < fVar2) {
      lVar13 = uVar8 - 0xf0;
      lVar11 = uVar8 - 0x34;
      lVar12 = uVar8 - 0x44;
      lVar16 = 2;
      fVar2 = (fVar7 - fVar2) / (fVar7 + fVar2);
      fVar3 = fVar2 * fVar2;
      *(float *)(puVar5 + 0x19) = fVar2;
      *(float *)(puVar5 + 0x18) = fVar2;
      *(float *)((int)puVar5 + 0xc4) = fVar2;
      *(float *)((int)puVar5 + 0xbc) = fVar2;
      fVar2 = fVar3 * fVar3;
      *(float *)(puVar5 + 0x18) = *(float *)(puVar5 + 0x18) * fVar3;
      *(float *)((int)puVar5 + 0xc4) = *(float *)((int)puVar5 + 0xc4) * fVar2;
      *(float *)(puVar5 + 0x19) = *(float *)(puVar5 + 0x19) * fVar2 * fVar3;
      do {
        *(float *)((int)lVar13 + 0xbc) = *(float *)((int)lVar13 + 0xac) * fVar2 * fVar2;
        iVar15 = (int)lVar12;
        lVar12 = lVar12 + 8;
        lVar13 = lVar13 + 8;
        *(float *)((int)lVar11 + 4) = *(float *)(iVar15 + 4) * fVar2 * fVar2;
        lVar11 = lVar11 + 8;
        lVar16 = lVar16 + -1;
      } while (lVar16 != 0);
      lVar13 = uVar8 - 0x44;
      lVar16 = 4;
      pfVar14 = (float *)&DAT_007358e0;
      lVar11 = lVar13;
      lVar12 = lVar10;
      do {
        fVar2 = *pfVar14;
        fVar3 = pfVar14[1];
        pfVar14 = pfVar14 + 2;
        *(float *)((int)lVar12 + 0xbc) = *(float *)((int)lVar12 + 0xbc) * fVar2;
        lVar12 = lVar12 + 8;
        *(float *)((int)lVar11 + 4) = *(float *)((int)lVar11 + 4) * fVar3;
        lVar11 = lVar11 + 8;
        lVar16 = lVar16 + -1;
      } while (lVar16 != 0);
      lVar11 = 2;
      do {
        iVar15 = (int)lVar10;
        iVar6 = (int)lVar13;
        lVar10 = lVar10 + 0x10;
        lVar13 = lVar13 + 0x10;
        dVar17 = (double)((float)(dVar17 + (double)*(float *)(iVar15 + 0xbc)) +
                          *(float *)(iVar6 + 4) + *(float *)(iVar6 + 8) + *(float *)(iVar6 + 0xc));
        lVar11 = lVar11 + -1;
      } while (lVar11 != 0);
      dVar17 = (double)((float)(dVar17 + 0.7853981852531433) * fVar4 + fVar1);
    }
  }
  FastQuaternionToEuler(dVar17,param_2 + 0x130,2);
  iVar15 = param_2 + 0x120;
  FastSlerp((double)((*(float *)(param_2 + 0x170) - 1.0) * DAT_0071f408 + 1.0),iVar15,
                      iVar15,param_2 + 0x130);
  FastQuaternionToMtx4Identity(iVar15,uVar8 - 0x90);
  FastApplyTransform((Vec4 *)(param_1 + 0xc0),(Vec4 *)(uVar8 - 0x90));
  return;
}


// 0x0473fc0 (0x38c bytes)
void M820_00473fc0(int param_1,int param_2,float *param_3,float *param_4)

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
  float fVar11;
  int iVar12;
  int iVar13;
  double dVar14;
  double dVar15;
  double dVar16;
  double dVar17;
  double dVar18;
  float local_70;
  float local_6c;
  float local_68;
  
  GetBonePosition(param_1,0,&local_70);
  fVar1 = *(float *)(param_1 + 0x14);
  fVar5 = local_6c - fVar1;
  fVar2 = *(float *)(param_1 + 0x10);
  fVar3 = *(float *)(param_1 + 0x18);
  fVar9 = local_70 - fVar2;
  fVar8 = local_68 - fVar3;
  fVar4 = SQRT(fVar8 * fVar8 + fVar9 * fVar9 + fVar5 * fVar5);
  fVar6 = 0.0;
  fVar11 = *(float *)(param_2 + 400) / fVar4;
  fVar7 = fVar6;
  if (0.0 - fVar4 < 0.0) {
    fVar7 = fVar9 * fVar11;
  }
  fVar10 = fVar6;
  if (0.0 - fVar4 < 0.0) {
    fVar10 = fVar5 * fVar11;
  }
  if (0.0 - fVar4 < 0.0) {
    fVar6 = fVar8 * fVar11;
  }
  if (fVar4 - 0.0 < 0.0) {
    fVar7 = fVar9 * fVar11;
  }
  if (fVar4 - 0.0 < 0.0) {
    fVar10 = fVar5 * fVar11;
  }
  if (fVar4 - 0.0 < 0.0) {
    fVar6 = fVar8 * fVar11;
  }
  dVar16 = (double)(fVar7 + *param_3);
  dVar17 = (double)(fVar10 + param_3[1]);
  dVar18 = (double)(fVar6 + param_3[2]);
  iVar12 = CollSphere(&local_70);
  fVar4 = *(float *)(param_2 + 400);
  if (iVar12 != 0) {
    fVar1 = g_CollOutput.push.y - (fVar10 + fVar1);
    fVar3 = g_CollOutput.push.z - (fVar6 + fVar3);
    *(float *)(param_1 + 0x10) = *(float *)(param_1 + 0x10) + (g_CollOutput.push.x - (fVar7 + fVar2));
    *(float *)(param_1 + 0x14) = *(float *)(param_1 + 0x14) + fVar1;
    *(float *)(param_1 + 0x18) = *(float *)(param_1 + 0x18) + fVar3;
  }
  iVar12 = CollSphere((double)fVar4,&local_70);
  if (((iVar12 != 0) && (g_CollOutput.pMoby != (MobyInstance *)0x0)) &&
     ((g_CollOutput.pMoby)->oClass == 0x334)) {
    fVar1 = *(float *)(param_1 + 0x14);
    fVar2 = *(float *)(param_1 + 0x10);
    fVar4 = fVar1 - param_4[1];
    fVar9 = ((g_CollOutput.pMoby)->pos).y - param_4[1];
    fVar6 = fVar2 - *param_4;
    fVar3 = *(float *)(param_1 + 0x18);
    fVar7 = ((g_CollOutput.pMoby)->pos).x - *param_4;
    fVar5 = fVar3 - param_4[2];
    fVar8 = ((g_CollOutput.pMoby)->pos).z - param_4[2];
    if (SQRT(fVar5 * fVar5 + fVar6 * fVar6 + fVar4 * fVar4) <=
        SQRT(fVar8 * fVar8 + fVar7 * fVar7 + fVar9 * fVar9)) {
      dVar14 = (double)g_CollOutput.push.y;
      dVar15 = (double)g_CollOutput.push.z;
      *(float *)(param_1 + 0x10) = (float)((double)g_CollOutput.push.x - dVar16) * 0.25 + fVar2;
      *(float *)(param_1 + 0x14) = (float)(dVar14 - dVar17) * 0.25 + fVar1;
      *(float *)(param_1 + 0x18) = (float)(dVar15 - dVar18) * 0.25 + fVar3;
    }
    else if (*(char *)(param_1 + 0x20) == '\x06') {
      iVar12 = rand();
      iVar13 = (uint)*(byte *)(param_2 + 0x1a9) - (uint)*(byte *)(param_2 + 0x1a8);
      *(byte *)(param_2 + 0x1aa) =
           *(byte *)(param_2 + 0x1a8) + ((char)iVar12 - (char)(iVar12 / iVar13) * (char)iVar13);
      *(undefined1 *)(param_1 + 0x20) = 0xb;
      if (*(char *)(param_1 + 0x53) != '\x14') {
        MB_SetAnimation(param_1,0x14,0,(int)(animationSpeed * 10.5));
      }
      *(float *)(param_1 + 0x10) = *param_3;
      *(float *)(param_1 + 0x14) = param_3[1];
      *(float *)(param_1 + 0x18) = param_3[2];
      *(float *)(param_1 + 0x1c) = param_3[3];
    }
    else {
      dVar14 = (double)g_CollOutput.push.y;
      dVar15 = (double)g_CollOutput.push.z;
      *(float *)(param_1 + 0x10) = (float)((double)g_CollOutput.push.x - dVar16) * 0.15 + fVar2;
      *(float *)(param_1 + 0x14) = (float)(dVar14 - dVar17) * 0.15 + fVar1;
      *(float *)(param_1 + 0x18) = (float)(dVar15 - dVar18) * 0.15 + fVar3;
    }
  }
  M820_00473940(param_1,param_2,param_4);
  return;
}


// 0x04743a8 (0x2120 bytes)
// strings: 0065844c: 'warning: no path for PATH_DOWN type on moby 820 :%d\n Switching to ALREADY_DOWN state.\n' | 006584a4: 'warning: no path for PATH_DROP type on moby 820 :%d\n Switching to DROP_DOWN state.\n' | 006584fc: 'warning: no path for HOP_OUT type on moby 820 :%d\n Switching to ALREADY_DOWN state.\n'

/* Moby 820 */

void UpdateMoby_820(MobyInstance *moby)

{
  byte bVar1;
  f32 fVar2;
  void *pvVar3;
  Spline *pSVar4;
  uint uVar5;
  float fVar6;
  longlong lVar7;
  float *pfVar9;
  int iVar10;
  undefined2 uVar13;
  undefined1 uVar15;
  int iVar11;
  undefined8 uVar8;
  uint uVar12;
  short sVar14;
  int iVar17;
  longlong lVar16;
  ulonglong uVar18;
  double dVar19;
  GPiece<16> auVar20;
  GPiece<16> auVar21;
  GPiece<16> auVar22;
  float fVar23;
  GPiece<16> auStack_230;
  GPiece<8> auStack_220;
  int local_218;
  Vec4 VStack_210;
  f32 local_200;
  f32 local_1fc;
  f32 local_1f8;
  f32 local_1f4;
  GPiece<8> auStack_1f0;
  float local_1e8;
  f32 local_1e0;
  f32 local_1dc;
  f32 local_1d8;
  f32 local_1d4;
  f32 local_1d0;
  f32 local_1cc;
  f32 local_1c8;
  f32 local_1c4;
  GPiece<16> auStack_1c0;
  GPiece<8> auStack_1b0;
  float local_1a8;
  GPiece<16> auStack_1a0;
  f32 local_190;
  f32 local_18c;
  f32 local_188;
  f32 local_184;
  undefined4 local_180;
  undefined4 local_17c;
  f32 local_178;
  undefined4 local_174;
  GPiece<8> auStack_170;
  float local_168;
  f32 local_160;
  f32 local_15c;
  f32 local_158;
  f32 local_154;
  GPiece<16> auStack_150;
  GPiece<16> auStack_140;
  f32 local_130;
  f32 local_12c;
  f32 local_128;
  f32 local_124;
  f32 local_120;
  f32 local_11c;
  f32 local_118;
  f32 local_114;
  GPiece<8> auStack_110;
  f32 local_108;
  GPiece<8> auStack_100;
  float local_f8;
  GPiece<48> auStack_f0;
  Vec4 aVStack_c0 [4];
  MobyInstance *local_80;
  int local_70;
  float local_6c;
  GPiece<4> auStack_68;
  GPiece<4> auStack_64;
  uint local_60;
  GPiece<4> auStack_5c;
  GPiece<8> auStack_58;
  longlong local_50;
  
  lVar7 = (longlong)(int)moby;
  if (moby == (MobyInstance *)0x0) {
    return;
  }
  pvVar3 = moby->pVar;
  uVar18 = ZEXT48(pvVar3);
  if (pvVar3 == (void *)0x0) {
    return;
  }
  if (moby->state == '\f') goto LAB_004748bc;
  pfVar9 = (float *)MB_damage(lVar7,0x330000,0);
  iVar10 = MB_HandleDamage(moby,pfVar9,uVar18 + 0x20,0,&local_70,0,0,4);
  if (1 < local_70) {
    FUN_005e8338((double)((moby->pos).x - *pfVar9),(double)((moby->pos).y - pfVar9[1]));
    *(undefined4 *)((int)pvVar3 + 0x90) = 0x3e75c28f;
    fVar23 = g_FrameTimeSq * 32.0;
    *(undefined4 *)((int)pvVar3 + 0x74) = 0x3a03126f;
    *(float *)((int)pvVar3 + 0x70) = fVar23;
    fVar23 = g_FrameTime;
    *(undefined4 *)((int)pvVar3 + 0x7c) = 0;
    *(undefined1 *)((int)pvVar3 + 0x9d) = 0;
    *(undefined4 *)((int)pvVar3 + 0x84) = 9;
    *(float *)((int)pvVar3 + 0x78) = fVar23 * 5.0;
  }
  if (iVar10 < 6) {
    if (iVar10 < 2) {
      if ((-1 < iVar10) && (0 < iVar10)) {
        *(undefined4 *)((int)pvVar3 + 0x20) = 0;
      }
    }
    else if (iVar10 < 3) {
      *(undefined4 *)((int)pvVar3 + 0x20) = 0;
    }
    else {
      if (iVar10 < 4) goto LAB_00474540;
      *(float *)((int)pvVar3 + 0x78) = g_FrameTime * 7.0;
      if (moby->animationId != '\x11') {
        uVar8 = idol::GetAnimDuration(1);
        MB_SetAnimation(lVar7,0x11,7,uVar8);
      }
      moby->state = '\x10';
    }
  }
  else if (iVar10 < 9) {
    if (iVar10 < 7) {
LAB_00474540:
      *(float *)((int)pvVar3 + 0x78) = g_FrameTime * 6.5;
      if (moby->animationId != '\x10') {
        uVar8 = idol::GetAnimDuration(1);
        MB_SetAnimation(lVar7,0x10,7,uVar8);
      }
      moby->state = '\x10';
    }
    else if (iVar10 < 8) {
      *(float *)((int)pvVar3 + 0x78) = g_FrameTime * 7.0;
      if (moby->animationId != '\x11') {
        MB_SetAnimation(lVar7,0x11,7,1);
      }
      moby->state = '\x10';
    }
    else {
      if (moby->animationId != '\x0f') {
        uVar8 = idol::GetAnimDuration(5);
        MB_SetAnimation(lVar7,0xf,7,uVar8);
      }
      moby->state = '\x0f';
    }
  }
  else if ((iVar10 < 0xb) &&
          (worldUpdateTime ==
           (((int)worldUpdateTime >> 1) +
           (uint)((int)worldUpdateTime < 0 && (worldUpdateTime & 1) != 0)) * 2)) {
    iVar10 = rand();
    moby->previousAnimationFrame = '\0';
    moby->animationBlend = 0.9;
    moby->updateId = (char)iVar10 + (char)(iVar10 / 0x17) * -0x17;
    dVar19 = (double)FastIntToDouble(0xd);
    moby->frameSpeed = (float)(1.0 / dVar19);
    UpdateMobyFrameData(moby);
  }
  if (1 < local_70) {
    uVar12 = (int)*(uint *)((int)pvVar3 + 0x20) >> 0x1f;
    uVar5 = (int)pfVar9[0xb] >> 0x1f;
    fVar23 = pfVar9[0xb];
    if ((int)((uVar5 >> 1 ^ (uint)pfVar9[0xb]) - uVar5) <
        (int)((uVar12 >> 1 ^ *(uint *)((int)pvVar3 + 0x20)) - uVar12)) {
      *(undefined1 *)((int)pvVar3 + 199) = 0xfa;
      *(float *)((int)pvVar3 + 0x20) = *(float *)((int)pvVar3 + 0x20) - fVar23;
      uVar13 = idol::GetAnimDuration(0x3c);
      *(undefined2 *)((int)pvVar3 + 0x26) = uVar13;
      pfVar9[6] = 0.0;
      FUN_005e7f98((double)*(float *)((int)pvVar3 + 0x78),uVar18 + 0x150,pfVar9 + 4);
      *(undefined1 *)((int)pvVar3 + 199) = 0x78;
      MB_UpdateLightsTransition(lVar7,uVar18 + 0xc0);
    }
    else {
      *(undefined4 *)((int)pvVar3 + 0x20) = 0;
      moby->modeBits =
           moby->modeBits &
           (MIRROR|CAN_BE_DAMAGED|HIDE_BACKFACES|DISABLE_Z_WRITE|DRAW_SHADOW|DRAW_TRANSPARENT_WEIRD|
            LOCK_ROTATION|NO_DRAW|UNK_40|HAS_SPECIAL_VARS|HAS_GLOW|TRANSPARENT|NO_POST_UPDATE|
            NO_UPDATE|DISABLED);
      fVar23 = g_FrameTime;
      *(float *)((int)pvVar3 + 0x78) = g_FrameTime * 12.0;
      *(float *)((int)pvVar3 + 0x7c) = fVar23 * 10.0;
      MB_VecAtan2Angles
                (*(undefined8 *)(pfVar9 + 4),*(undefined8 *)(pfVar9 + 6),&local_6c,uVar18 + 0x78,
                 uVar18 + 0x7c);
      MB_StartKick((double)local_6c,lVar7,uVar18 + 0x60);
      *(undefined4 *)((int)pvVar3 + 0xb0) = 0x41600000;
      *(undefined4 *)((int)pvVar3 + 0xb4) = 0x41c00000;
      *(undefined1 *)((int)pvVar3 + 199) = 0x78;
      MB_UpdateLightsTransition(lVar7,uVar18 + 0xc0);
      MB_DistributeBolts
                (lVar7,*(undefined1 *)((int)pvVar3 + 0x1ae),*(undefined1 *)((int)pvVar3 + 0x1af),0,
                 0xffffffffffffffff);
      moby->state = '\f';
    }
    if (((uint)pfVar9[0xc] & 1) != 0) {
      FUN_005e7e98(uVar18 + 0x150,pfVar9 + 4);
    }
  }
  moby->damage = -1;
LAB_004748bc:
  MB_ColorDyingMoby(lVar7,uVar18 + 0xc0);
  dVar19 = 100000.0;
  MB_getTarget((double)*(float *)((int)pvVar3 + 0x164),lVar7,&DAT_0047434c,aVStack_c0);
  *(MobyInstance **)((int)pvVar3 + 0x180) = local_80;
  if (local_80 != (MobyInstance *)0x0) {
    FUN_005e7e98(auStack_230,ZEXT48(local_80) + 0x10);
    dVar19 = (double)FUN_005e8588(lVar7 + 0x10,(ulonglong)*(uint *)((int)pvVar3 + 0x180) + 0x10);
    if (((5 < moby->state) && (*(int *)((int)pvVar3 + 0x1a0) != -1)) &&
       (iVar10 = PointInsideComplexPoly
                           (aVStack_c0,(Vec4 *)Splines[*(int *)((int)pvVar3 + 0x1a0)]->points,
                            Splines[*(int *)((int)pvVar3 + 0x1a0)]->cnt), iVar10 == 0)) {
      MB_PathFollowToPos
                (0x408f380000000000,0x4014000000000000,0,Splines[*(int *)((int)pvVar3 + 0x1a0)],
                 auStack_230,auStack_230,auStack_68,auStack_64,*(int *)((int)pvVar3 + 0x1a0) * 4,0);
    }
  }
  if (g_heroState == TAKING_DAMAGE) {
    *(undefined1 *)((int)pvVar3 + 0x1ac) = *(undefined1 *)((int)pvVar3 + 0x1ab);
  }
  else {
    FastDecTimerU8(uVar18 + 0x1ac);
  }
  FastDecTimerS32(uVar18 + 0x1bc);
  if (*(int *)((int)pvVar3 + 0x38) != 0) {
    if (*(int *)((int)pvVar3 + 0x1bc) == 0) {
      *(int *)((int)pvVar3 + 0x1bc) = *(int *)((int)pvVar3 + 0x1c0) + *(int *)((int)pvVar3 + 0x1c4);
    }
    *(undefined4 *)((int)pvVar3 + 0x38) = 0;
    printf("\n");
  }
  bVar1 = moby->state;
  if (bVar1 < 9) {
    if (bVar1 == 8) {
      dVar19 = (double)BlendAnimFrame(moby);
      if ((10.0 < dVar19) && (*(int *)((int)pvVar3 + 0x1b8) != 0)) {
        if (moby->animationId != '\x05') {
          local_50 = (longlong)(int)(animationSpeed * 3.5);
          MB_SetAnimation(lVar7,5,8,(int)(animationSpeed * 3.5));
        }
        moby->state = '\x12';
      }
      if ((moby->field43_0x70 & 2U) == 0) {
        SetCollDamIn(0x3ff0000000000000,auStack_f0,lVar7,1);
        GetBonePosition(lVar7,1,auStack_1a0);
        iVar10 = CollMobySphere(0x3fe0000000000000,auStack_1a0);
        if ((iVar10 != 0) && (g_CollOutput.pMoby == g_heroMobyPtr)) {
          *(undefined4 *)((int)pvVar3 + 0x1b8) = 1;
        }
      }
      else if (*(int *)((int)pvVar3 + 0x1b8) == 0) {
        if (moby->animationId != '\x16') {
          local_50 = (longlong)(int)(animationSpeed * 10.5);
          MB_SetAnimation(lVar7,0x16,0,(int)(animationSpeed * 10.5));
        }
        moby->state = '\x06';
      }
      else {
        if (moby->animationId != '\x05') {
          local_50 = (longlong)(int)(animationSpeed * 10.5);
          MB_SetAnimation(lVar7,5,0,(int)(animationSpeed * 10.5));
        }
        moby->state = '\x12';
      }
      M820_00473940(lVar7,uVar18,auStack_230);
    }
    else if (bVar1 == 7) {
      if (((*(uint *)((int)pvVar3 + 0x180) == 0) ||
          (dVar19 = (double)FUN_005e8588(lVar7 + 0x10,
                                         (ulonglong)*(uint *)((int)pvVar3 + 0x180) + 0x10),
          (double)*(float *)((int)pvVar3 + 0x168) < dVar19)) ||
         (*(char *)((int)pvVar3 + 0x1ac) != '\0')) {
        if (moby->animationId != '\x16') {
          local_50 = (longlong)(int)(animationSpeed * 10.5);
          MB_SetAnimation(lVar7,0x16,0,(int)(animationSpeed * 10.5));
        }
        moby->state = '\x06';
      }
      else {
        *(undefined4 *)((int)pvVar3 + 0x1b8) = 0;
        M820_00472fd8(lVar7);
      }
      M820_00473940(lVar7,uVar18,auStack_230);
    }
    else if (bVar1 == 6) {
      local_1d0 = (moby->pos).x;
      local_1cc = (moby->pos).y;
      local_1c8 = (moby->pos).z;
      local_1c4 = (moby->pos).w;
      if (*(int *)((int)pvVar3 + 0x1bc) < *(int *)((int)pvVar3 + 0x1c4)) {
        if (((local_80 == (MobyInstance *)0x0) || (*(int *)((int)pvVar3 + 0x1a0) == -1)) ||
           (iVar10 = PointInsideComplexPoly
                               (aVStack_c0,(Vec4 *)Splines[*(int *)((int)pvVar3 + 0x1a0)]->points,
                                Splines[*(int *)((int)pvVar3 + 0x1a0)]->cnt), iVar10 == 0)) {
          moby->state = '\t';
        }
        else if (((*(int *)((int)pvVar3 + 0x180) != 0) &&
                 (GetBonePosition(lVar7,0,auStack_1c0), dVar19 < 10.0)) &&
                ((iVar10 = CollLine(auStack_1c0,auStack_230,1,lVar7,0), iVar10 != 0 &&
                 ((g_CollOutput.pMoby != local_80 && (moby->state = '\n', moby->animationId != '\x14')
                  ))))) {
          local_50 = (longlong)(int)(animationSpeed * 10.5);
          MB_SetAnimation(lVar7,0x14,0,(int)(animationSpeed * 10.5));
        }
      }
      iVar10 = M820_00473158(lVar7,uVar18,auStack_230,&local_60);
      if (iVar10 != 0) {
        if ((((*(uint *)((int)pvVar3 + 0x180) != 0) &&
             (dVar19 = (double)FUN_005e8588(lVar7 + 0x10,
                                            (ulonglong)*(uint *)((int)pvVar3 + 0x180) + 0x10),
             dVar19 <= (double)*(float *)((int)pvVar3 + 0x168))) &&
            ((int)(FLOAT_ORDER(local_60)) <
             0x3d4ccccd)) ||
           ((*(int *)((int)pvVar3 + 0x1c4) < *(int *)((int)pvVar3 + 0x1bc) &&
            (*(int *)((int)pvVar3 + 0x1c8) != 0)))) {
          *(undefined1 *)((int)pvVar3 + 0x150) = 0;
          *(undefined1 *)((int)pvVar3 + 0x151) = 0;
          *(undefined1 *)((int)pvVar3 + 0x152) = 0;
          *(undefined1 *)((int)pvVar3 + 0x153) = 0;
          *(undefined1 *)((int)pvVar3 + 0x154) = 0;
          *(undefined1 *)((int)pvVar3 + 0x155) = 0;
          *(undefined1 *)((int)pvVar3 + 0x156) = 0;
          *(undefined1 *)((int)pvVar3 + 0x157) = 0;
          *(undefined1 *)((int)pvVar3 + 0x158) = 0;
          *(undefined1 *)((int)pvVar3 + 0x159) = 0;
          *(undefined1 *)((int)pvVar3 + 0x15a) = 0;
          *(undefined1 *)((int)pvVar3 + 0x15b) = 0;
          *(undefined1 *)((int)pvVar3 + 0x15c) = 0;
          *(undefined1 *)((int)pvVar3 + 0x15d) = 0;
          *(undefined1 *)((int)pvVar3 + 0x15e) = 0;
          *(undefined1 *)((int)pvVar3 + 0x15f) = 0;
          if (*(char *)((int)pvVar3 + 0x1ac) == '\0') {
            *(undefined4 *)((int)pvVar3 + 0x1b8) = 0;
            M820_00472fd8(lVar7);
          }
          else {
            if (moby->animationId != '\x14') {
              local_50 = (longlong)(int)(animationSpeed * 10.5);
              MB_SetAnimation(lVar7,0x14,0,(int)(animationSpeed * 10.5));
            }
            moby->state = '\a';
          }
        }
        else {
          lVar16 = lVar7 + 0x10;
          FUN_005e81f0(auStack_1b0,uVar18 + 0x140,lVar16);
          FUN_005e7ed8((double)*(float *)((int)pvVar3 + 0x17c),auStack_1b0,auStack_1b0);
          if ((int)local_1a8 < 1) {
            if (local_1a8 - -*(float *)((int)pvVar3 + 0x178) < 0.0) {
              local_1a8 = -*(float *)((int)pvVar3 + 0x178);
            }
          }
          else if (*(float *)((int)pvVar3 + 0x174) - local_1a8 < 0.0) {
            local_1a8 = *(float *)((int)pvVar3 + 0x174);
          }
          FUN_005e7f54(lVar16,lVar16,auStack_1b0);
          M820_00473fc0(lVar7,uVar18,&local_1d0,auStack_230);
        }
      }
      FUN_005e81f0(uVar18 + 0x150,lVar7 + 0x10,&local_1d0);
    }
    else if (bVar1 == 5) {
      if ((moby->field43_0x70 & 2U) != 0) {
        if (moby->animationId != '\x16') {
          local_50 = (longlong)(int)(animationSpeed * 10.5);
          MB_SetAnimation(lVar7,0x16,0,(int)(animationSpeed * 10.5));
        }
        moby->state = '\x06';
      }
    }
    else if (bVar1 == 4) {
      if (((moby->field43_0x70 & 2U) != 0) && (moby->animationId != '\x13')) {
        local_50 = (longlong)(int)(animationSpeed * 0.5);
        MB_SetAnimation(lVar7,0x13,0,(int)(animationSpeed * 0.5));
      }
      local_1e0 = (moby->pos).x;
      local_1dc = (moby->pos).y;
      local_1d8 = (moby->pos).z;
      local_1d4 = (moby->pos).w;
      fVar23 = *(float *)((int)pvVar3 + 0x158) - *(float *)((int)pvVar3 + 0x194);
      *(float *)((int)pvVar3 + 0x158) = fVar23;
      (moby->pos).z = (moby->pos).z + fVar23;
      iVar10 = CollLine(&local_1e0,lVar7 + 0x10,2,lVar7,0);
      if (iVar10 != 0) {
        *(f32 *)((int)pvVar3 + 0x110) = (moby->pos).x;
        *(f32 *)((int)pvVar3 + 0x114) = (moby->pos).y;
        *(f32 *)((int)pvVar3 + 0x118) = (moby->pos).z;
        fVar2 = (moby->pos).w;
        *(undefined1 *)((int)pvVar3 + 0x150) = 0;
        *(f32 *)((int)pvVar3 + 0x11c) = fVar2;
        *(undefined1 *)((int)pvVar3 + 0x151) = 0;
        *(undefined1 *)((int)pvVar3 + 0x152) = 0;
        *(undefined1 *)((int)pvVar3 + 0x153) = 0;
        *(undefined1 *)((int)pvVar3 + 0x154) = 0;
        *(undefined1 *)((int)pvVar3 + 0x155) = 0;
        *(undefined1 *)((int)pvVar3 + 0x156) = 0;
        *(undefined1 *)((int)pvVar3 + 0x157) = 0;
        *(undefined1 *)((int)pvVar3 + 0x158) = 0;
        *(undefined1 *)((int)pvVar3 + 0x159) = 0;
        *(undefined1 *)((int)pvVar3 + 0x15a) = 0;
        *(undefined1 *)((int)pvVar3 + 0x15b) = 0;
        *(undefined1 *)((int)pvVar3 + 0x15c) = 0;
        *(undefined1 *)((int)pvVar3 + 0x15d) = 0;
        *(undefined1 *)((int)pvVar3 + 0x15e) = 0;
        *(undefined1 *)((int)pvVar3 + 0x15f) = 0;
        if (moby->animationId != '\x15') {
          local_50 = (longlong)(int)(animationSpeed * 4.5);
          MB_SetAnimation(lVar7,0x15,0,(int)(animationSpeed * 4.5));
        }
        moby->state = '\x05';
      }
      M820_00473d20(lVar7,uVar18);
    }
    else if (bVar1 == 3) {
      local_200 = (moby->pos).x;
      local_1fc = (moby->pos).y;
      local_1f8 = (moby->pos).z;
      local_1f4 = (moby->pos).w;
      pSVar4 = Splines[*(int *)((int)pvVar3 + 0x16c)];
      sVar14 = Path_PickNextNode(moby,pSVar4,pSVar4->points + pSVar4->cnt + -1,&VStack_210);
      *(short *)((int)pvVar3 + 0x160) = sVar14;
      if ((sVar14 == -1) || (pSVar4->cnt + -1 <= (int)sVar14)) {
        *(f32 *)((int)pvVar3 + 0x110) = (moby->pos).x;
        sVar14 = *(short *)((int)pvVar3 + 0x162);
        *(f32 *)((int)pvVar3 + 0x114) = (moby->pos).y;
        *(f32 *)((int)pvVar3 + 0x118) = (moby->pos).z;
        *(f32 *)((int)pvVar3 + 0x11c) = (moby->pos).w;
        if (sVar14 < 3) {
          if (-1 < sVar14) {
            if (sVar14 < 1) {
              if (moby->animationId != '\x16') {
                local_50 = (longlong)(int)(animationSpeed * 10.5);
                MB_SetAnimation(lVar7,0x16,0,(int)(animationSpeed * 10.5));
              }
              moby->state = '\x06';
            }
            else {
              M820_00473d20(lVar7,uVar18);
              moby->state = '\x04';
            }
          }
        }
        else if (sVar14 == 4) {
          if (moby->animationId != '\x16') {
            local_50 = (longlong)(int)(animationSpeed * 10.5);
            MB_SetAnimation(lVar7,0x16,0,(int)(animationSpeed * 10.5));
          }
          moby->state = '\x06';
        }
      }
      else {
        iVar10 = M820_00473158(lVar7,uVar18,&VStack_210,0);
        if (iVar10 == 0) {
          fVar23 = *(float *)((int)pvVar3 + 0x158) - *(float *)((int)pvVar3 + 0x194);
          *(float *)((int)pvVar3 + 0x158) = fVar23;
          (moby->pos).z = (moby->pos).z + fVar23;
        }
        else {
          lVar16 = lVar7 + 0x10;
          FUN_005e81f0(auStack_1f0,uVar18 + 0x140,lVar16);
          FUN_005e7ed8((double)*(float *)((int)pvVar3 + 0x17c),auStack_1f0,auStack_1f0);
          if ((int)local_1e8 < 1) {
            if (local_1e8 - -*(float *)((int)pvVar3 + 0x178) < 0.0) {
              local_1e8 = -*(float *)((int)pvVar3 + 0x178);
            }
          }
          else if (*(float *)((int)pvVar3 + 0x174) - local_1e8 < 0.0) {
            local_1e8 = *(float *)((int)pvVar3 + 0x174);
          }
          FUN_005e7f54(lVar16,lVar16,auStack_1f0);
          M820_00473fc0(lVar7,uVar18,&local_200,&VStack_210);
        }
      }
      FUN_005e81f0(uVar18 + 0x150,lVar7 + 0x10,&local_200);
    }
    else if (bVar1 == 1) {
      iVar10 = M820_00473158(lVar7,uVar18,0,0);
      if (iVar10 == 0) {
        (moby->pos).z = (moby->pos).z - *(float *)((int)pvVar3 + 0x178);
      }
      else {
        lVar16 = lVar7 + 0x10;
        FUN_005e81f0(auStack_220,uVar18 + 0x140,lVar16);
        if (local_218 < 0) {
          FUN_005e8e80((double)*(float *)((int)pvVar3 + 0x174),auStack_220,auStack_220);
        }
        else {
          FUN_005e8e80((double)*(float *)((int)pvVar3 + 0x178),auStack_220,auStack_220);
        }
        FUN_005e7f54(lVar16,lVar16,auStack_220);
      }
      if ((*(uint *)((int)pvVar3 + 0x180) != 0) ||
         (*(int *)((int)pvVar3 + 0x1c4) < *(int *)((int)pvVar3 + 0x1bc))) {
        dVar19 = (double)FUN_005e8588(lVar7 + 0x10,(ulonglong)*(uint *)((int)pvVar3 + 0x180) + 0x10)
        ;
        if ((dVar19 < (double)*(float *)((int)pvVar3 + 0x164)) ||
           (*(int *)((int)pvVar3 + 0x1c4) < *(int *)((int)pvVar3 + 0x1bc))) {
          if (*(int *)((int)pvVar3 + 0x1b0) != -1) {
            CollDamageMobyDirect_wrap
                      ((double)*(float *)((int)pvVar3 + 0x1b4),
                       g_MobyInstance + *(int *)((int)pvVar3 + 0x1b0),lVar7,0x10000,g_MobyInstance,
                       lVar7 + 0x10);
          }
          sVar14 = *(short *)((int)pvVar3 + 0x162);
          *(undefined4 *)((int)pvVar3 + 0x38) = 0;
          if (sVar14 < 3) {
            if (-1 < sVar14) {
              if (sVar14 < 2) {
                if (moby->animationId != '\a') {
                  uVar8 = idol::GetAnimDuration(10);
                  MB_SetAnimation(lVar7,7,0,uVar8);
                }
                moby->state = '\x03';
              }
              else {
                if (moby->animationId != '\x13') {
                  uVar8 = idol::GetAnimDuration(0);
                  MB_SetAnimation(lVar7,0x13,0,uVar8);
                }
                moby->state = '\x04';
              }
            }
          }
          else if (sVar14 < 4) {
            MB_initJump
                      (lVar7,uVar18 + 0xd0,
                       Splines[*(int *)((int)pvVar3 + 0x16c)]->points +
                       Splines[*(int *)((int)pvVar3 + 0x16c)]->cnt + -1);
            moby->state = '\r';
          }
          else if (sVar14 < 5) {
            if (moby->animationId != '\x16') {
              local_50 = (longlong)(int)(animationSpeed * 10.5);
              MB_SetAnimation(lVar7,0x16,0,(int)(animationSpeed * 10.5));
            }
            moby->state = '\x06';
          }
        }
      }
    }
    else if (bVar1 == 0) {
      if (*(char *)((int)pvVar3 + 0x1ad) == '\0') {
        *(undefined1 *)((int)pvVar3 + 0x1ad) = 1;
        fVar23 = *(float *)((int)pvVar3 + 0x178) * DAT_0071f408;
        fVar6 = *(float *)((int)pvVar3 + 0x17c) * DAT_0071f408;
        *(float *)((int)pvVar3 + 0x174) = *(float *)((int)pvVar3 + 0x174) * DAT_0071f408;
        *(float *)((int)pvVar3 + 0x178) = fVar23;
        *(float *)((int)pvVar3 + 0x17c) = fVar6;
        *(float *)((int)pvVar3 + 0x194) = *(float *)((int)pvVar3 + 0x194) * DAT_0071f40c;
        uVar15 = idol::GetAnimDuration(*(undefined1 *)((int)pvVar3 + 0x1a8));
        *(undefined1 *)((int)pvVar3 + 0x1a8) = uVar15;
        uVar15 = idol::GetAnimDuration(*(undefined1 *)((int)pvVar3 + 0x1a9));
        *(undefined1 *)((int)pvVar3 + 0x1a9) = uVar15;
        uVar15 = idol::GetAnimDuration(*(undefined1 *)((int)pvVar3 + 0x1ab));
        *(undefined1 *)((int)pvVar3 + 0x1ab) = uVar15;
      }
      *(undefined4 *)((int)pvVar3 + 0x20) = 0x40a00000;
      *(undefined2 *)((int)pvVar3 + 0x24) = 5;
      *(undefined1 *)((int)pvVar3 + 0x28) = 3;
      MB_EulerToQuat((float *)((int)pvVar3 + 0x120),(Vec3 *)&moby->rotation);
      FUN_005e7e98(uVar18 + 0x110,lVar7 + 0x10);
      M820_00473158(lVar7,uVar18,0,0);
      if ((*(int *)((int)pvVar3 + 0x16c) == -1) ||
         (Splines[*(int *)((int)pvVar3 + 0x16c)] == (Spline *)0x0)) {
        sVar14 = *(short *)((int)pvVar3 + 0x162);
        if (sVar14 < 2) {
          if (-1 < sVar14) {
            if (sVar14 < 1) {
              uVar12 = (int)moby - (int)g_MobyInstance;
              printf("warning: no path for PATH_DOWN type on moby 820 :%d\n Switching to ALREADY_DOWN state.\n"
                           ,((int)uVar12 >> 8) + (uint)((int)uVar12 < 0 && (uVar12 & 0xff) != 0));
              *(undefined2 *)((int)pvVar3 + 0x162) = 4;
            }
            else {
              uVar12 = (int)moby - (int)g_MobyInstance;
              printf("warning: no path for PATH_DROP type on moby 820 :%d\n Switching to DROP_DOWN state.\n"
                           ,((int)uVar12 >> 8) + (uint)((int)uVar12 < 0 && (uVar12 & 0xff) != 0));
              *(undefined2 *)((int)pvVar3 + 0x162) = 2;
            }
          }
        }
        else if (sVar14 == 3) {
          uVar12 = (int)moby - (int)g_MobyInstance;
          printf("warning: no path for HOP_OUT type on moby 820 :%d\n Switching to ALREADY_DOWN state.\n"
                       ,((int)uVar12 >> 8) + (uint)((int)uVar12 < 0 && (uVar12 & 0xff) != 0));
          *(undefined2 *)((int)pvVar3 + 0x162) = 4;
        }
      }
      else {
        iVar11 = PathFindClosestPnt
                           (0.0,(Vec4 *)(lVar7 + 0x10),Splines[*(int *)((int)pvVar3 + 0x16c)]);
        iVar10 = *(int *)((int)pvVar3 + 0x1a0);
        *(short *)((int)pvVar3 + 0x160) = (short)iVar11;
        iVar11 = 0;
        if (0 < Splines[iVar10]->cnt) {
          iVar17 = 0;
          do {
            iVar11 = iVar11 + 1;
            pSVar4 = Splines[iVar10];
            dVar19 = (double)FUN_005e8548((int)&pSVar4->points[0].x + iVar17,
                                          (int)pSVar4 +
                                          ((iVar11 - (iVar11 / pSVar4->cnt) * pSVar4->cnt) * 4 + 4)
                                          * 4);
            *(float *)((int)&Splines[*(int *)((int)pvVar3 + 0x1a0)]->points[0].w + iVar17) =
                 (float)dVar19;
            iVar10 = *(int *)((int)pvVar3 + 0x1a0);
            iVar17 = iVar17 + 0x10;
          } while (iVar11 < Splines[iVar10]->cnt);
        }
      }
      *(undefined1 *)((int)pvVar3 + 0x150) = 0;
      *(undefined1 *)((int)pvVar3 + 0x151) = 0;
      *(undefined1 *)((int)pvVar3 + 0x152) = 0;
      *(undefined1 *)((int)pvVar3 + 0x153) = 0;
      *(undefined1 *)((int)pvVar3 + 0x154) = 0;
      *(undefined1 *)((int)pvVar3 + 0x155) = 0;
      *(undefined1 *)((int)pvVar3 + 0x156) = 0;
      *(undefined1 *)((int)pvVar3 + 0x157) = 0;
      *(undefined1 *)((int)pvVar3 + 0x158) = 0;
      *(undefined1 *)((int)pvVar3 + 0x159) = 0;
      *(undefined1 *)((int)pvVar3 + 0x15a) = 0;
      *(undefined1 *)((int)pvVar3 + 0x15b) = 0;
      *(undefined1 *)((int)pvVar3 + 0x15c) = 0;
      *(undefined1 *)((int)pvVar3 + 0x15d) = 0;
      *(undefined1 *)((int)pvVar3 + 0x15e) = 0;
      *(undefined1 *)((int)pvVar3 + 0x15f) = 0;
      moby->modeBits = moby->modeBits | LOCK_ROTATION;
      if (moby->animationId != '\x14') {
        uVar8 = idol::GetAnimDuration(10);
        MB_SetAnimation(lVar7,0x14,0,uVar8);
      }
      uVar12 = (int)moby - (int)g_MobyInstance;
      dVar19 = (double)FastIntToDouble
                                 (((int)uVar12 >> 8) +
                                  (uint)((int)uVar12 < 0 && (uVar12 & 0xff) != 0));
      fVar23 = MB_WrapRot((float)(dVar19 * 3.1415927410125732) * 0.5);
      *(float *)((int)pvVar3 + 0x198) = fVar23;
      moby->modeBits = moby->modeBits | CAN_BE_AUTO_TARGETED;
      MB_CopyHeroLights(lVar7);
      moby->state = '\x01';
    }
  }
  else if (bVar1 < 0xe) {
    if (bVar1 < 0xb) {
      if (bVar1 < 10) {
        local_190 = (moby->pos).x;
        local_18c = (moby->pos).y;
        local_188 = (moby->pos).z;
        local_184 = (moby->pos).w;
        local_180 = *(undefined4 *)((int)pvVar3 + 0x110);
        local_17c = *(undefined4 *)((int)pvVar3 + 0x114);
        local_174 = *(undefined4 *)((int)pvVar3 + 0x11c);
        local_178 = local_188;
        iVar10 = M820_00473158(lVar7,uVar18,&local_180,auStack_5c);
        if (iVar10 != 0) {
          lVar16 = lVar7 + 0x10;
          FUN_005e81f0(auStack_170,uVar18 + 0x140,lVar16);
          FUN_005e7ed8((double)*(float *)((int)pvVar3 + 0x17c),auStack_170,auStack_170);
          if ((int)local_168 < 1) {
            if (local_168 - -*(float *)((int)pvVar3 + 0x178) < 0.0) {
              local_168 = -*(float *)((int)pvVar3 + 0x178);
            }
          }
          else if (*(float *)((int)pvVar3 + 0x174) - local_168 < 0.0) {
            local_168 = *(float *)((int)pvVar3 + 0x174);
          }
          FUN_005e7f54(lVar16,lVar16,auStack_170);
          M820_00473fc0(lVar7,uVar18,&local_190,&local_180);
        }
        FUN_005e81f0(uVar18 + 0x150,lVar7 + 0x10,&local_190);
        dVar19 = (double)FUN_005e8030(uVar18 + 0x150);
        if (dVar19 < 0.009999999776482582) {
          if (moby->animationId != '\x14') {
            local_50 = (longlong)(int)(animationSpeed * 10.5);
            MB_SetAnimation(lVar7,0x14,0,(int)(animationSpeed * 10.5));
          }
          moby->state = '\n';
        }
        if (((*(int *)((int)pvVar3 + 0x180) != 0) ||
            (*(int *)((int)pvVar3 + 0x1c4) < *(int *)((int)pvVar3 + 0x1bc))) &&
           ((local_80 != (MobyInstance *)0x0 &&
            ((*(int *)((int)pvVar3 + 0x1a0) != -1 &&
             (iVar10 = PointInsideComplexPoly
                                 (aVStack_c0,(Vec4 *)Splines[*(int *)((int)pvVar3 + 0x1a0)]->points,
                                  Splines[*(int *)((int)pvVar3 + 0x1a0)]->cnt), iVar10 != 0)))))) {
          dVar19 = (double)FUN_005e8588(auStack_230,uVar18 + 0x110);
          if ((dVar19 < (double)*(float *)((int)pvVar3 + 0x164)) ||
             (*(int *)((int)pvVar3 + 0x1c4) < *(int *)((int)pvVar3 + 0x1bc))) {
            if (moby->animationId != '\x16') {
              local_50 = (longlong)(int)(animationSpeed * 10.5);
              MB_SetAnimation(lVar7,0x16,0,(int)(animationSpeed * 10.5));
            }
            *(undefined4 *)((int)pvVar3 + 0x38) = 0;
            moby->state = '\x06';
          }
        }
      }
      else {
        local_160 = (moby->pos).x;
        local_15c = (moby->pos).y;
        local_158 = (moby->pos).z;
        local_154 = (moby->pos).w;
        if ((*(int *)((int)pvVar3 + 0x1c4) < *(int *)((int)pvVar3 + 0x1bc)) &&
           (*(int *)((int)pvVar3 + 0x180) != 0)) {
          moby->state = '\x06';
          if (moby->animationId != '\x16') {
            local_50 = (longlong)(int)(animationSpeed * 10.5);
            MB_SetAnimation(lVar7,0x16,0,(int)(animationSpeed * 10.5));
          }
        }
        else if ((local_80 == (MobyInstance *)0x0) ||
                ((*(int *)((int)pvVar3 + 0x1a0) == -1 ||
                 (iVar10 = PointInsideComplexPoly
                                     (aVStack_c0,
                                      (Vec4 *)Splines[*(int *)((int)pvVar3 + 0x1a0)]->points,
                                      Splines[*(int *)((int)pvVar3 + 0x1a0)]->cnt), iVar10 == 0))))
        {
          moby->state = '\t';
        }
        else if ((*(int *)((int)pvVar3 + 0x180) != 0) &&
                ((((GetBonePosition(lVar7,0,auStack_150), 10.0 <= dVar19 ||
                   (iVar10 = CollLine(auStack_150,auStack_230,1,lVar7,0), iVar10 == 0)) ||
                  (g_CollOutput.pMoby == local_80)) &&
                 (moby->state = '\x06', moby->animationId != '\x16')))) {
          local_50 = (longlong)(int)(animationSpeed * 10.5);
          MB_SetAnimation(lVar7,0x16,0,(int)(animationSpeed * 10.5));
        }
        M820_00473fc0(lVar7,uVar18,&local_160,auStack_230);
      }
    }
    else if (bVar1 < 0xc) {
      M820_00473940(lVar7,uVar18,auStack_230);
      iVar10 = FastDecTimerU8(uVar18 + 0x1aa);
      if (iVar10 != 0) {
        if (moby->animationId != '\x16') {
          local_50 = (longlong)(int)(animationSpeed * 10.5);
          MB_SetAnimation(lVar7,0x16,0,(int)(animationSpeed * 10.5));
        }
        moby->state = '\x06';
      }
    }
    else if (bVar1 < 0xd) {
      uVar12 = MB_UpdateKick(moby,(KickVars *)((int)pvVar3 + 0x60));
      if ((uVar12 & 1) != 0) {
        GetBonePosition(lVar7,0,auStack_140);
        MB_genericExplosion
                  (0,0,0x3ff0000000000000,0x3fe0000000000000,0x4008000000000000,0x3ff0000000000000,
                   0x401c000000000000,lVar7,uVar18 + 0x150,auStack_140,1,0xffffffffffffffff,3,1,5);
        DeleteMoby(moby);
        return;
      }
    }
    else {
      iVar10 = MB_updateJump(lVar7,uVar18 + 0xd0);
      if (iVar10 == 4) {
        *(f32 *)((int)pvVar3 + 0x110) = (moby->pos).x;
        *(f32 *)((int)pvVar3 + 0x114) = (moby->pos).y;
        *(f32 *)((int)pvVar3 + 0x118) = (moby->pos).z;
        *(f32 *)((int)pvVar3 + 0x11c) = (moby->pos).w;
        if (moby->animationId != '\x14') {
          local_50 = (longlong)(int)(animationSpeed * 5.5);
          MB_SetAnimation(lVar7,0x14,0,(int)(animationSpeed * 5.5));
        }
        moby->state = '\n';
      }
    }
  }
  else if (bVar1 < 0x12) {
    if (bVar1 < 0xf) {
      M820_00473940(lVar7,uVar18,auStack_230);
      if ((moby->field43_0x70 & 2U) != 0) {
        *(undefined4 *)((int)pvVar3 + 0x1b8) = 0;
        M820_00473058(lVar7);
      }
    }
    else if (bVar1 < 0x11) {
      local_130 = (moby->pos).x;
      local_12c = (moby->pos).y;
      local_128 = (moby->pos).z;
      local_124 = (moby->pos).w;
      FUN_005e7f54(lVar7 + 0x10,lVar7 + 0x10,uVar18 + 0x150);
      *(float *)((int)pvVar3 + 0x150) = *(float *)((int)pvVar3 + 0x150) * 0.7;
      *(float *)((int)pvVar3 + 0x154) = *(float *)((int)pvVar3 + 0x154) * 0.7;
      *(float *)((int)pvVar3 + 0x158) = *(float *)((int)pvVar3 + 0x158) * 0.7;
      M820_00473fc0(lVar7,uVar18,&local_130,auStack_230);
      dVar19 = (double)FUN_005e8030(uVar18 + 0x150);
      if (dVar19 < 0.05000000074505806) {
        auVar20 = ZEXT416(0xffffffff);
        auVar20 = auVar20 | auVar20 << 0x20 | auVar20 << 0x40 | auVar20 << 0x60;
        *(undefined1 *)((int)pvVar3 + 0x1ac) = 0;
        *(undefined4 *)((int)pvVar3 + 0x1b8) = 0;
        auVar21 = vectorShiftLeftIntegerWord(auVar20,auVar20);
        auVar20 = loadVectorLeftIndexed(0x50,0x47434c);
        auVar20 = auVar20 >> 0x60 & (GPiece<16>)0xffffffff;
        auVar22 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
        auVar20 = vectorMultiplyAddFloatingPoint
                            (auVar22,auVar20 | auVar20 << 0x20 | auVar20 << 0x40 | auVar20 << 0x60,
                             auVar21);
        auVar20 = vectorConvertToSignedFixedPointWordSaturate(auVar20,0);
        auVar20 = auVar20 >> 0x60 & (GPiece<16>)0xff;
        uVar15 = storeVectorElementByteIndexed
                           (auVar20 | auVar20 << 8 | auVar20 << 0x10 | auVar20 << 0x18 |
                            auVar20 << 0x20 | auVar20 << 0x28 | auVar20 << 0x30 | auVar20 << 0x38 |
                            auVar20 << 0x40 | auVar20 << 0x48 | auVar20 << 0x50 | auVar20 << 0x58 |
                            auVar20 << 0x60 | auVar20 << 0x68 | auVar20 << 0x70 | auVar20 << 0x78,
                            0x1aa,uVar18);
        *(undefined1 *)((int)pvVar3 + 0x1aa) = uVar15;
        moby->state = '\x13';
        if (moby->animationId != '\t') {
          local_50 = (longlong)(int)(animationSpeed * 5.5);
          MB_SetAnimation(lVar7,9,0,(int)(animationSpeed * 5.5));
        }
      }
    }
    else if ((moby->field43_0x70 & 2U) != 0) {
      *(undefined4 *)((int)pvVar3 + 0x1b8) = 0;
      M820_00472fd8(lVar7);
    }
  }
  else if (bVar1 < 0x13) {
    if ((moby->field43_0x70 & 2U) != 0) {
      if (moby->animationId != '\x14') {
        local_50 = (longlong)(int)(animationSpeed * 5.5);
        MB_SetAnimation(lVar7,0x14,0,(int)(animationSpeed * 5.5));
      }
      moby->state = '\n';
    }
  }
  else if (bVar1 < 0x14) {
    local_120 = (moby->pos).x;
    local_11c = (moby->pos).y;
    lVar16 = lVar7 + 0x10;
    local_118 = (moby->pos).z;
    local_114 = (moby->pos).w;
    FUN_005e81f0(auStack_110,lVar16,auStack_230);
    FUN_005e7f98(0x4014000000000000,auStack_110,auStack_110);
    FUN_005e7f54(auStack_110,auStack_110,lVar16);
    local_108 = (moby->pos).z;
    iVar10 = M820_00473158(lVar7,uVar18,auStack_110,auStack_58);
    if (iVar10 != 0) {
      FUN_005e81f0(auStack_100,uVar18 + 0x140,lVar16);
      FUN_005e7ed8((double)*(float *)((int)pvVar3 + 0x17c),auStack_100,auStack_100);
      if ((int)local_f8 < 1) {
        if (local_f8 - -*(float *)((int)pvVar3 + 0x178) < 0.0) {
          local_f8 = -*(float *)((int)pvVar3 + 0x178);
        }
      }
      else if (*(float *)((int)pvVar3 + 0x174) - local_f8 < 0.0) {
        local_f8 = *(float *)((int)pvVar3 + 0x174);
      }
      FUN_005e7f54(lVar16,lVar16,auStack_100);
      M820_00473fc0(lVar7,uVar18,&local_120,auStack_110);
    }
    FUN_005e81f0(uVar18 + 0x150,lVar16,&local_120);
    iVar10 = FastDecTimerU8(uVar18 + 0x1aa);
    if (iVar10 != 0) {
      M820_00472fd8(lVar7);
    }
  }
  MB_RegisterLameShadow(1.2,moby);
  return;
}


