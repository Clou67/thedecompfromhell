// game/update/moby694.cpp -- reconstructed from NPEA00385 EBOOT
// STATUS: NOT STARTED (raw Ghidra output)
// 5 functions, 0x421f08-0x424db8
#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include "game/update/moby694.h"
#include "game/camera.h"
#include "game/collproc.h"
#include "game/hero.h"
#include "game/mesh.h"
#include "game/mobyfunc.h"
#include "game/mobyutil.h"
#include "game/partupd.h"
#include "game/path.h"
#include "idol/fastfunc.h"
#include "idol/mathfunc.h"
#include "idol/xUnk.h"

// 0x0421f08 (0x7a4 bytes)
// inlined: FastRSqrt @0x4221ac, FastRSqrt @0x4224fc
undefined8
M694_00421f08(longlong param_1,longlong param_2,float *param_3,float *param_4)

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
  float fVar10;
  undefined4 uVar11;
  ulonglong *puVar12;
  int iVar13;
  int iVar14;
  float fVar15;
  float fVar16;
  ulonglong uVar17;
  int iVar19;
  undefined8 uVar18;
  ulonglong unaff_r26;
  ulonglong unaff_r27;
  ulonglong unaff_r28;
  ulonglong unaff_r29;
  longlong lVar20;
  ulonglong unaff_r30;
  ulonglong unaff_r31;
  ulonglong in_LR;
  double dVar21;
  double dVar22;
  double dVar23;
  double dVar24;
  double dVar25;
  double dVar26;
  double dVar27;
  double dVar28;
  double dVar29;
  ulonglong in_f16;
  ulonglong in_f17;
  ulonglong in_f18;
  ulonglong in_f19;
  ulonglong in_f20;
  ulonglong in_f21;
  ulonglong in_f22;
  ulonglong in_f23;
  ulonglong in_f24;
  ulonglong in_f25;
  ulonglong in_f26;
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
  
  uVar17 = ZEXT48(&stack0x00000000);
  lVar1 = uVar17 - 0x180;
  puVar12 = (ulonglong *)lVar1;
  *puVar12 = uVar17;
  puVar12[0x32] = in_LR;
  puVar12[0x20] = in_f16;
  puVar12[0x21] = in_f17;
  puVar12[0x22] = in_f18;
  puVar12[0x23] = in_f19;
  puVar12[0x24] = in_f20;
  puVar12[0x25] = in_f21;
  puVar12[0x26] = in_f22;
  puVar12[0x27] = in_f23;
  puVar12[0x28] = in_f24;
  puVar12[0x29] = in_f25;
  puVar12[0x2a] = in_f26;
  puVar12[0x2b] = in_f27;
  puVar12[0x2c] = in_f28;
  puVar12[0x2d] = in_f29;
  puVar12[0x2e] = in_f30;
  puVar12[0x2f] = in_f31;
  puVar12[0x1e] = unaff_r30;
  puVar12[0x1d] = unaff_r29;
  puVar12[0x1f] = unaff_r31;
  puVar12[0x1c] = unaff_r28;
  puVar12[0x1b] = unaff_r27;
  puVar12[0x1a] = unaff_r26;
  FastDecTimerS32(param_2 + 0x184);
  dVar33 = 0.0;
  iVar13 = (int)param_1;
  dVar32 = dVar33;
  dVar31 = dVar33;
  dVar30 = dVar33;
  dVar24 = dVar33;
  if (param_3 != (float *)0x0) {
    fVar6 = param_3[1] - *(float *)(iVar13 + 0x14);
    fVar7 = *param_3 - *(float *)(iVar13 + 0x10);
    fVar8 = param_3[2] - *(float *)(iVar13 + 0x18);
    dVar25 = (double)SQRT(fVar8 * fVar8 + fVar7 * fVar7 + fVar6 * fVar6);
    dVar24 = 1.0;
    if (dVar25 - 1.0 < 0.0) {
      dVar24 = dVar25;
    }
    fVar2 = (float)(dVar24 / dVar25);
    if (0.0 - dVar25 < 0.0) {
      dVar30 = (double)(fVar7 * fVar2);
    }
    if (0.0 - dVar25 < 0.0) {
      dVar31 = (double)(fVar6 * fVar2);
    }
    if (0.0 - dVar25 < 0.0) {
      dVar32 = (double)(fVar8 * fVar2);
    }
    if (dVar25 - 0.0 < 0.0) {
      dVar30 = (double)(fVar7 * fVar2);
    }
    if (dVar25 - 0.0 < 0.0) {
      dVar31 = (double)(fVar6 * fVar2);
    }
    if (dVar25 - 0.0 < 0.0) {
      dVar32 = (double)(fVar8 * fVar2);
    }
  }
  lVar20 = param_2 + 0xc0;
  FastQuaternionToMtx4Identity(lVar20,uVar17 - 0xf0);
  dVar25 = (double)DAT_00857950;
  dVar28 = (double)DAT_0085795c;
  dVar21 = (double)(float)((double)*(float *)((int)puVar12 + 0xc4) * dVar28 +
                          (double)(*(float *)((int)puVar12 + 0xb4) * DAT_00857958 +
                                  (float)((double)*(float *)((int)puVar12 + 0x94) * dVar25 +
                                         (double)(*(float *)((int)puVar12 + 0xa4) * DAT_00857954))))
  ;
  dVar22 = (double)(float)((double)*(float *)(puVar12 + 0x18) * dVar28 +
                          (double)(*(float *)(puVar12 + 0x16) * DAT_00857958 +
                                  (float)((double)*(float *)(puVar12 + 0x12) * dVar25 +
                                         (double)(*(float *)(puVar12 + 0x14) * DAT_00857954))));
  dVar28 = (double)(float)((double)*(float *)(puVar12 + 0x19) * dVar28 +
                          (double)(*(float *)(puVar12 + 0x17) * DAT_00857958 +
                                  (float)((double)*(float *)(puVar12 + 0x13) * dVar25 +
                                         (double)(*(float *)(puVar12 + 0x15) * DAT_00857954))));
  dVar26 = (double)SQRT((float)(dVar28 * dVar28 +
                               (double)(float)(dVar22 * dVar22 + (double)(float)(dVar21 * dVar21))))
  ;
  iVar14 = (int)param_2;
  fVar6 = *(float *)(iVar14 + 0x88);
  fVar7 = *(float *)(iVar14 + 0x8c);
  fVar8 = *(float *)(iVar13 + 0x10);
  fVar2 = *(float *)(iVar13 + 0x14);
  fVar9 = *(float *)(iVar13 + 0x18);
  fVar10 = *(float *)(iVar14 + 0x84);
  auVar37 = loadVectorLeftIndexed(0xb0,lVar1);
  auVar39 = loadVectorLeftIndexed(0xb4,lVar1);
  auVar41 = loadVectorLeftIndexed(0xb8,lVar1);
  auVar34 = loadVectorLeftIndexed(0xbc,lVar1);
  auVar35 = loadVectorLeftIndexed(0x88,param_2);
  auVar36 = loadVectorLeftIndexed(0x8c,param_2);
  auVar38 = loadVectorLeftIndexed(0x10,param_1);
  auVar40 = loadVectorLeftIndexed(0x14,param_1);
  auVar42 = loadVectorLeftIndexed(0x18,param_1);
  dVar29 = (double)(float)((double)(float)(dVar28 * dVar32 +
                                          (double)(float)(dVar22 * dVar30 +
                                                         (double)(float)(dVar21 * dVar31))) / dVar26
                          );
  dVar25 = dVar33;
  if (dVar33 - dVar26 < 0.0) {
    dVar25 = (double)(float)(dVar21 * dVar29);
  }
  dVar23 = dVar33;
  if (dVar33 - dVar26 < 0.0) {
    dVar23 = (double)(float)(dVar22 * dVar29);
  }
  dVar27 = dVar33;
  if (dVar33 - dVar26 < 0.0) {
    dVar27 = (double)(float)(dVar28 * dVar29);
  }
  if (dVar26 - dVar33 < 0.0) {
    dVar25 = (double)(float)(dVar21 * dVar29);
  }
  if (dVar26 - dVar33 < 0.0) {
    dVar23 = (double)(float)(dVar22 * dVar29);
  }
  if (dVar26 - dVar33 < 0.0) {
    dVar27 = (double)(float)(dVar28 * dVar29);
  }
  fVar3 = (float)(dVar31 - dVar25);
  fVar4 = (float)(dVar30 - dVar23);
  fVar5 = (float)(dVar32 - dVar27);
  fVar15 = fVar5 * fVar5 + fVar4 * fVar4 + fVar3 * fVar3;
  dVar30 = dVar33;
  dVar31 = dVar33;
  dVar32 = dVar33;
  if ((double)SQRT(fVar15) != dVar33) {
    fVar16 = 1.0 / SQRT(fVar15);
    fVar16 = -(fVar15 * fVar16 * fVar16 - 1.0) * fVar16 * 0.5 + fVar16;
    fVar16 = -(fVar15 * fVar16 * fVar16 - 1.0) * fVar16 * 0.5 + fVar16;
    fVar16 = -(fVar15 * fVar16 * fVar16 - 1.0) * fVar16 * 0.5 + fVar16;
    dVar30 = (double)(fVar4 * fVar16);
    dVar31 = (double)(fVar3 * fVar16);
    dVar32 = (double)(fVar5 * fVar16);
  }
  auVar43 = ZEXT416(0xffffffff);
  auVar43 = auVar43 | auVar43 << 0x20 | auVar43 << 0x40 | auVar43 << 0x60;
  auVar44 = vectorShiftLeftIntegerWord(auVar43,auVar43);
  auVar43 = ZEXT416(0xffffffff);
  auVar43 = auVar43 | auVar43 << 0x20 | auVar43 << 0x40 | auVar43 << 0x60;
  *(undefined4 *)((int)puVar12 + 0x7c) = 0;
  *(undefined4 *)(puVar12 + 0xf) = 0;
  *(undefined4 *)((int)puVar12 + 0x74) = 0;
  *(undefined4 *)(puVar12 + 0xe) = 0;
  auVar45 = vectorMultiplyAddFloatingPoint(auVar34,auVar35,auVar44);
  *(undefined4 *)((int)puVar12 + 0x8c) = 0;
  *(undefined4 *)(puVar12 + 0x11) = 0;
  *(undefined4 *)((int)puVar12 + 0x84) = 0;
  *(undefined4 *)(puVar12 + 0x10) = 0;
  auVar46 = vectorShiftLeftIntegerWord(auVar43,auVar43);
  auVar43 = ZEXT416(0xffffffff);
  auVar47 = auVar43 | auVar43 << 0x20 | auVar43 << 0x40 | auVar43 << 0x60;
  dVar25 = (double)SQRT((float)(dVar32 * dVar32 +
                               (double)(float)(dVar30 * dVar30 + (double)(float)(dVar31 * dVar31))))
  ;
  auVar43 = ZEXT416(0xffffffff);
  auVar44 = auVar43 | auVar43 << 0x20 | auVar43 << 0x40 | auVar43 << 0x60;
  auVar48 = vectorShiftLeftIntegerWord(auVar47,auVar47);
  auVar43 = ZEXT416(0xffffffff);
  auVar47 = auVar43 | auVar43 << 0x20 | auVar43 << 0x40 | auVar43 << 0x60;
  auVar44 = vectorShiftLeftIntegerWord(auVar44,auVar44);
  auVar43 = auVar45 >> 0x60 & (GPiece<16>)0xffffffff;
  auVar47 = vectorShiftLeftIntegerWord(auVar47,auVar47);
  uVar11 = storeVectorElementWordIndexed
                     (auVar43 | auVar43 << 0x20 | auVar43 << 0x40 | auVar43 << 0x60,0x7c,lVar1);
  *(undefined4 *)((int)puVar12 + 0x7c) = uVar11;
  auVar46 = vectorMultiplyAddFloatingPoint(auVar36,auVar37,auVar46);
  auVar45 = vectorMultiplyAddFloatingPoint(auVar37,auVar35,auVar38);
  auVar49 = vectorMultiplyAddFloatingPoint(auVar39,auVar35,auVar40);
  auVar43 = vectorMultiplyAddFloatingPoint(auVar41,auVar35,auVar42);
  auVar39 = vectorMultiplyAddFloatingPoint(auVar36,auVar39,auVar48);
  auVar41 = vectorMultiplyAddFloatingPoint(auVar36,auVar41,auVar44);
  auVar35 = loadVectorLeftIndexed(0xc,0x421ef0);
  auVar37 = vectorMultiplyAddFloatingPoint(auVar36,auVar34,auVar47);
  auVar34 = auVar35 >> 0x60 & (GPiece<16>)0xffffffff;
  auVar44 = auVar34 | auVar34 << 0x20 | auVar34 << 0x40 | auVar34 << 0x60;
  auVar34 = auVar45 >> 0x60 & (GPiece<16>)0xffffffff;
  auVar35 = auVar49 >> 0x60 & (GPiece<16>)0xffffffff;
  auVar36 = auVar43 >> 0x60 & (GPiece<16>)0xffffffff;
  auVar38 = vectorAddFloatingPoint(auVar44 ^ auVar46,auVar38);
  auVar39 = vectorAddFloatingPoint(auVar44 ^ auVar39,auVar40);
  auVar40 = vectorAddFloatingPoint(auVar44 ^ auVar41,auVar42);
  auVar37 = (auVar44 ^ auVar37) >> 0x60 & (GPiece<16>)0xffffffff;
  auVar38 = auVar38 >> 0x60 & (GPiece<16>)0xffffffff;
  uVar11 = storeVectorElementWordIndexed
                     (auVar37 | auVar37 << 0x20 | auVar37 << 0x40 | auVar37 << 0x60,0x8c,lVar1);
  *(undefined4 *)((int)puVar12 + 0x8c) = uVar11;
  uVar11 = storeVectorElementWordIndexed
                     (auVar34 | auVar34 << 0x20 | auVar34 << 0x40 | auVar34 << 0x60,0x70,lVar1);
  *(undefined4 *)(puVar12 + 0xe) = uVar11;
  auVar34 = auVar39 >> 0x60 & (GPiece<16>)0xffffffff;
  auVar37 = auVar40 >> 0x60 & (GPiece<16>)0xffffffff;
  uVar11 = storeVectorElementWordIndexed
                     (auVar35 | auVar35 << 0x20 | auVar35 << 0x40 | auVar35 << 0x60,0x74,lVar1);
  *(undefined4 *)((int)puVar12 + 0x74) = uVar11;
  uVar11 = storeVectorElementWordIndexed
                     (auVar36 | auVar36 << 0x20 | auVar36 << 0x40 | auVar36 << 0x60,0x78,lVar1);
  *(undefined4 *)(puVar12 + 0xf) = uVar11;
  uVar11 = storeVectorElementWordIndexed
                     (auVar38 | auVar38 << 0x20 | auVar38 << 0x40 | auVar38 << 0x60,0x80,lVar1);
  *(undefined4 *)(puVar12 + 0x10) = uVar11;
  dVar21 = (double)(float)(dVar24 / dVar25);
  uVar11 = storeVectorElementWordIndexed
                     (auVar34 | auVar34 << 0x20 | auVar34 << 0x40 | auVar34 << 0x60,0x84,lVar1);
  *(undefined4 *)((int)puVar12 + 0x84) = uVar11;
  uVar11 = storeVectorElementWordIndexed
                     (auVar37 | auVar37 << 0x20 | auVar37 << 0x40 | auVar37 << 0x60,0x88,lVar1);
  *(undefined4 *)(puVar12 + 0x11) = uVar11;
  dVar24 = dVar33;
  if (dVar33 - dVar25 < 0.0) {
    dVar24 = (double)(float)(dVar30 * dVar21);
  }
  dVar22 = dVar33;
  if (dVar33 - dVar25 < 0.0) {
    dVar22 = (double)(float)(dVar31 * dVar21);
  }
  dVar28 = dVar33;
  if (dVar33 - dVar25 < 0.0) {
    dVar28 = (double)(float)(dVar32 * dVar21);
  }
  if (dVar25 - dVar33 < 0.0) {
    dVar24 = (double)(float)(dVar30 * dVar21);
  }
  if (dVar25 - dVar33 < 0.0) {
    dVar22 = (double)(float)(dVar31 * dVar21);
  }
  if (dVar25 - dVar33 < 0.0) {
    dVar28 = (double)(float)(dVar32 * dVar21);
  }
  if (param_3 != (float *)0x0) {
    dVar25 = (double)((fVar10 * fVar7) / fVar6);
    *(float *)(puVar12 + 0x10) =
         (float)(dVar24 * dVar25 +
                (double)((float)((double)*(float *)(puVar12 + 0x18) * dVar33 +
                                (double)((float)((double)*(float *)(puVar12 + 0x12) * dVar33 +
                                                dVar33) + -(fVar7 * *(float *)(puVar12 + 0x16)))) +
                        fVar8));
    *(float *)((int)puVar12 + 0x84) =
         (float)(dVar22 * dVar25 +
                (double)((float)((double)*(float *)((int)puVar12 + 0xc4) * dVar33 +
                                (double)((float)((double)*(float *)((int)puVar12 + 0x94) * dVar33 +
                                                dVar33) + -(fVar7 * *(float *)((int)puVar12 + 0xb4))
                                        )) + fVar2));
    *(float *)(puVar12 + 0x11) =
         (float)(dVar28 * dVar25 +
                (double)((float)((double)*(float *)(puVar12 + 0x19) * dVar33 +
                                (double)((float)((double)*(float *)(puVar12 + 0x13) * dVar33 +
                                                dVar33) + -(fVar7 * *(float *)(puVar12 + 0x17)))) +
                        fVar9));
  }
  iVar19 = CollLine(uVar17 - 0x110,uVar17 - 0x100,0x12,param_1,0);
  if (iVar19 == 0) {
    FastSlerp((double)(*(float *)(iVar14 + 0x70) * DAT_0071f408),lVar20,lVar20,
                        param_2 + 0xd0);
    FastQuaternionToMtx4(lVar20,param_1 + 0xc0);
    uVar18 = 0;
  }
  else {
    if (param_4 != (float *)0x0) {
      *param_4 = ABS(*(float *)(iVar13 + 0x18) - g_CollOutput.ip.z);
    }
    if (((*(byte *)(iVar13 + 0x20) < 6) || (*(int *)(iVar14 + 0x180) == -1)) ||
       (iVar19 = PointInsideComplexPoly
                           ((Vec4 *)&g_CollOutput.ip,(Vec4 *)Splines[*(int *)(iVar14 + 0x180)]->points
                            ,Splines[*(int *)(iVar14 + 0x180)]->cnt), iVar19 != 0)) {
      *(float *)(iVar14 + 0xe0) = g_CollOutput.ip.x;
      *(float *)(iVar14 + 0xe4) = g_CollOutput.ip.y;
      *(float *)(iVar14 + 0xe8) = g_CollOutput.ip.z;
      *(float *)(iVar14 + 0xec) = g_CollOutput.ip.w;
    }
    else {
      NearestPntOnPathAtDist
                ((float)dVar33,(Vec4 *)(iVar14 + 0xe0),iVar13 + 0x10,0xa10960,
                 Splines[*(int *)(iVar14 + 0x180)]);
      auVar34 = ZEXT416(0xffffffff);
      auVar34 = auVar34 | auVar34 << 0x20 | auVar34 << 0x40 | auVar34 << 0x60;
      *(undefined4 *)(iVar14 + 0xe8) = *(undefined4 *)(iVar13 + 0x18);
      auVar35 = vectorShiftLeftIntegerWord(auVar34,auVar34);
      auVar34 = loadVectorLeftIndexed(0x10,0x421ef0);
      auVar34 = auVar34 >> 0x60 & (GPiece<16>)0xffffffff;
      auVar36 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
      auVar34 = vectorMultiplyAddFloatingPoint
                          (auVar36,auVar34 | auVar34 << 0x20 | auVar34 << 0x40 | auVar34 << 0x60,
                           auVar35);
      auVar34 = vectorConvertToSignedFixedPointWordSaturate(auVar34,0);
      auVar34 = auVar34 >> 0x60 & (GPiece<16>)0xffffffff;
      uVar11 = storeVectorElementWordIndexed
                         (auVar34 | auVar34 << 0x20 | auVar34 << 0x40 | auVar34 << 0x60,0x184,
                          param_2);
      *(undefined4 *)(iVar14 + 0x184U & 0xfffffffc) = uVar11;
    }
    fVar7 = g_CollOutput.normal.w;
    fVar6 = g_CollOutput.normal.z * g_CollOutput.normal.z +
            g_CollOutput.normal.x * g_CollOutput.normal.x + g_CollOutput.normal.y * g_CollOutput.normal.y;
    dVar24 = dVar33;
    dVar25 = dVar33;
    if ((double)SQRT(fVar6) != dVar33) {
      fVar8 = 1.0 / SQRT(fVar6);
      fVar8 = -(fVar6 * fVar8 * fVar8 - 1.0) * fVar8 * 0.5 + fVar8;
      fVar8 = -(fVar6 * fVar8 * fVar8 - 1.0) * fVar8 * 0.5 + fVar8;
      fVar8 = -(fVar6 * fVar8 * fVar8 - 1.0) * fVar8 * 0.5 + fVar8;
      dVar33 = (double)(g_CollOutput.normal.y * fVar8);
      dVar24 = (double)(g_CollOutput.normal.x * fVar8);
      dVar25 = (double)(g_CollOutput.normal.z * fVar8);
    }
    *(undefined4 *)((int)puVar12 + 0x9c) = 0;
    *(undefined4 *)((int)puVar12 + 0xac) = 0;
    *(float *)(puVar12 + 0x16) = (float)dVar24;
    *(float *)((int)puVar12 + 0xb4) = (float)dVar33;
    fVar6 = (float)(dVar33 * dVar32 - (double)(float)(dVar25 * dVar31));
    dVar21 = (double)fVar6;
    fVar8 = (float)(dVar25 * dVar30 - (double)(float)(dVar24 * dVar32));
    dVar32 = (double)fVar8;
    fVar2 = (float)(dVar24 * dVar31 - (double)(float)(dVar33 * dVar30));
    dVar30 = (double)fVar2;
    *(float *)(puVar12 + 0x14) = fVar6;
    *(float *)((int)puVar12 + 0xa4) = fVar8;
    *(float *)(puVar12 + 0x15) = fVar2;
    *(float *)(puVar12 + 0x17) = (float)dVar25;
    *(float *)((int)puVar12 + 0xbc) = fVar7;
    *(float *)((int)puVar12 + 0x94) = (float)(dVar30 * dVar24 - (double)(float)(dVar21 * dVar25));
    *(float *)(puVar12 + 0x13) = (float)(dVar21 * dVar33 - (double)(float)(dVar32 * dVar24));
    *(float *)(puVar12 + 0x12) = (float)(dVar32 * dVar25 - (double)(float)(dVar30 * dVar33));
    MB_MtxToQuat((float *)(param_2 + 0xd0),(float *)(puVar12 + 0x12));
    FastSlerp((double)(*(float *)(iVar14 + 0x70) * DAT_0071f408),lVar20,lVar20,
                        param_2 + 0xd0);
    FastQuaternionToMtx4(lVar20,param_1 + 0xc0);
    uVar18 = 1;
  }
  return uVar18;
}


// 0x04226b8 (0x164 bytes)
void M694_004226b8(int param_1,int param_2,float *param_3)

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
  M694_00421f08(param_1,param_2,param_3,0);
  fVar2 = *(float *)(param_2 + 0xe4) - *(float *)(param_1 + 0x14);
  fVar3 = *(float *)(param_2 + 0xe0) - *(float *)(param_1 + 0x10);
  fVar4 = *(float *)(param_2 + 0xe8) - *(float *)(param_1 + 0x18);
  fVar1 = *(float *)(param_2 + 0x7c);
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


// 0x0422828 (0x264 bytes)
// inlined: FastAtan2 @0x422948
void M694_00422828(int param_1,int param_2)

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
  FastQuaternionMult(param_2 + 0xc0,param_2 + 0xc0,uVar9 - 0x60);
  iVar5 = *(int *)(param_2 + 0x80);
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
  FastQuaternionToEuler(dVar17,param_2 + 0xd0,2);
  return;
}


// 0x0422aa0 (0x408 bytes)
void M694_00422aa0(int param_1,int param_2,float *param_3,float *param_4)

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
  vec4 *pvVar12;
  MobyInstance *pMVar13;
  int iVar14;
  int iVar15;
  double dVar16;
  double dVar17;
  double dVar18;
  double dVar19;
  double dVar20;
  float local_70;
  float local_6c;
  float local_68;
  
  GetBonePosition(param_1,1,&local_70);
  fVar1 = *(float *)(param_1 + 0x14);
  fVar5 = local_6c - fVar1;
  fVar2 = *(float *)(param_1 + 0x10);
  fVar3 = *(float *)(param_1 + 0x18);
  fVar9 = local_70 - fVar2;
  fVar8 = local_68 - fVar3;
  fVar4 = SQRT(fVar8 * fVar8 + fVar9 * fVar9 + fVar5 * fVar5);
  fVar6 = 0.0;
  fVar11 = *(float *)(param_2 + 0x90) / fVar4;
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
  dVar18 = (double)(fVar7 + *param_3);
  dVar19 = (double)(fVar10 + param_3[1]);
  dVar20 = (double)(fVar6 + param_3[2]);
  iVar14 = CollSphere(&local_70);
  fVar4 = *(float *)(param_2 + 0x90);
  if (iVar14 != 0) {
    fVar1 = g_CollOutput.push.y - (fVar10 + fVar1);
    fVar3 = g_CollOutput.push.z - (fVar6 + fVar3);
    *(float *)(param_1 + 0x10) = *(float *)(param_1 + 0x10) + (g_CollOutput.push.x - (fVar7 + fVar2));
    *(float *)(param_1 + 0x14) = *(float *)(param_1 + 0x14) + fVar1;
    *(float *)(param_1 + 0x18) = *(float *)(param_1 + 0x18) + fVar3;
  }
  iVar14 = CollSphere((double)fVar4,&local_70);
  if (((iVar14 != 0) && (g_CollOutput.pMoby != (MobyInstance *)0x0)) &&
     ((g_CollOutput.pMoby)->oClass == 0x2b6)) {
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
      dVar16 = (double)g_CollOutput.push.y;
      dVar17 = (double)g_CollOutput.push.z;
      *(float *)(param_1 + 0x10) = (float)((double)g_CollOutput.push.x - dVar18) * 0.25 + fVar2;
      *(float *)(param_1 + 0x14) = (float)(dVar16 - dVar19) * 0.25 + fVar1;
      *(float *)(param_1 + 0x18) = (float)(dVar17 - dVar20) * 0.25 + fVar3;
    }
    else if (*(char *)(param_1 + 0x20) == '\x06') {
      iVar14 = rand();
      iVar15 = (uint)*(byte *)(param_2 + 0xa9) - (uint)*(byte *)(param_2 + 0xa8);
      *(char *)(param_2 + 0xaa) =
           (char)(int)(animationSpeed *
                      ((float)(longlong)
                              (int)((uint)*(byte *)(param_2 + 0xa8) +
                                   (iVar14 - (iVar14 / iVar15) * iVar15)) + 0.5));
      *(undefined1 *)(param_1 + 0x20) = 0xb;
      if (*(char *)(param_1 + 0x53) != '\x05') {
        MB_SetAnimation(param_1,5,0,(int)(animationSpeed * 10.5));
      }
      pMVar13 = g_CollOutput.pMoby;
      dVar16 = (double)g_CollOutput.push.y;
      dVar17 = (double)g_CollOutput.push.z;
      pvVar12 = &(g_CollOutput.pMoby)->pos;
      fVar1 = ((g_CollOutput.pMoby)->pos).z;
      ((g_CollOutput.pMoby)->pos).x =
           ((g_CollOutput.pMoby)->pos).x + (float)((double)g_CollOutput.push.x - dVar18);
      (pMVar13->pos).y = pvVar12->y + (float)(dVar16 - dVar19);
      (pMVar13->pos).z = fVar1 + (float)(dVar17 - dVar20);
      *(float *)(param_1 + 0x10) = *param_3;
      *(float *)(param_1 + 0x14) = param_3[1];
      *(float *)(param_1 + 0x18) = param_3[2];
      *(float *)(param_1 + 0x1c) = param_3[3];
    }
    else {
      dVar16 = (double)g_CollOutput.push.y;
      dVar17 = (double)g_CollOutput.push.z;
      *(float *)(param_1 + 0x10) = (float)((double)g_CollOutput.push.x - dVar18) * 0.15 + fVar2;
      *(float *)(param_1 + 0x14) = (float)(dVar16 - dVar19) * 0.15 + fVar1;
      *(float *)(param_1 + 0x18) = (float)(dVar17 - dVar20) * 0.15 + fVar3;
    }
  }
  M694_004226b8(param_1,param_2,param_4);
  return;
}


// 0x0422f08 (0x1eb0 bytes)
// strings: 00657254: 'warning: no path for PATH_DOWN type on moby 694 :%d\n Switching to ALREADY_DOWN state.\n' | 006572ac: 'warning: no path for PATH_DROP type on moby 694 :%d\n Switching to DROP_DOWN state.\n'

/* Moby 694 */

void UpdateMoby_694(MobyInstance *moby)

{
  byte bVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  void *pvVar6;
  Spline *spline;
  uint uVar7;
  undefined1 uVar8;
  undefined2 uVar9;
  float fVar10;
  float *pfVar11;
  int iVar12;
  uint uVar13;
  short sVar14;
  longlong lVar15;
  ulonglong uVar16;
  double dVar17;
  double dVar18;
  double dVar19;
  GPiece<16> auVar20;
  GPiece<16> auVar21;
  GPiece<16> auVar22;
  GPiece<16> auVar23;
  float fVar24;
  float local_230;
  float local_22c;
  float local_224;
  float local_220;
  float local_21c;
  GPiece<16> local_210;
  Vec4 VStack_200;
  f32 local_1f0;
  f32 local_1ec;
  f32 local_1e8;
  f32 local_1e4;
  float local_1e0;
  float local_1dc;
  float local_1d8;
  undefined4 local_1d4;
  f32 local_1d0;
  f32 local_1cc;
  f32 local_1c8;
  f32 local_1c4;
  float local_1c0;
  float local_1bc;
  f32 local_1b8;
  f32 local_1b4;
  float local_1b0;
  float local_1ac;
  float local_1a8;
  float local_1a0;
  float local_19c;
  float local_198;
  float local_194;
  float local_190;
  float local_18c;
  float local_188;
  undefined4 local_184;
  f32 local_180;
  f32 local_17c;
  f32 local_178;
  f32 local_174;
  undefined4 local_170;
  undefined4 local_16c;
  f32 local_168;
  undefined4 local_164;
  float local_160;
  float local_15c;
  float local_158;
  undefined4 local_154;
  float local_150;
  float local_14c;
  f32 local_148;
  f32 local_144;
  GPiece<16> auStack_140;
  GPiece<16> auStack_130;
  undefined4 uStack_120;
  undefined4 uStack_11c;
  undefined4 uStack_118;
  undefined4 uStack_114;
  undefined4 uStack_110;
  undefined4 uStack_10c;
  undefined4 uStack_108;
  undefined4 uStack_104;
  undefined4 uStack_100;
  undefined4 uStack_fc;
  undefined4 uStack_f8;
  undefined4 uStack_f4;
  Vec4 aVStack_f0 [4];
  Vec4 aVStack_b0 [4];
  MobyInstance *local_70;
  int local_60;
  float local_5c;
  GPiece<4> auStack_58;
  GPiece<4> auStack_54;
  uint local_50;
  uint local_4c;
  longlong local_48;
  
  lVar15 = (longlong)(int)moby;
  if (moby != (MobyInstance *)0x0) {
    pvVar6 = moby->pVar;
    uVar16 = ZEXT48(pvVar6);
    if (pvVar6 != (void *)0x0) {
      if (moby->state != '\f') {
        pfVar11 = (float *)MB_damage(lVar15,0x330000,0);
        MB_HandleDamage(moby,pfVar11,uVar16 + 0x20,0,&local_60,0,0,4);
        if (1 < local_60) {
          fVar24 = DAT_0071f418 * 32.0;
          *(undefined4 *)((int)pvVar6 + 0x114) = 0x3a03126f;
          *(float *)((int)pvVar6 + 0x110) = fVar24;
          fVar24 = g_FrameTime;
          uVar13 = (int)*(uint *)((int)pvVar6 + 0x20) >> 0x1f;
          *(float *)((int)pvVar6 + 0x118) = g_FrameTime * 3.0;
          *(undefined1 *)((int)pvVar6 + 0x13d) = 0;
          *(undefined4 *)((int)pvVar6 + 0x124) = 9;
          *(float *)((int)pvVar6 + 0x11c) = fVar24 * 4.0;
          uVar7 = (int)pfVar11[0xb] >> 0x1f;
          if ((int)((uVar7 >> 1 ^ (uint)pfVar11[0xb]) - uVar7) <
              (int)((uVar13 >> 1 ^ *(uint *)((int)pvVar6 + 0x20)) - uVar13)) {
            MB_DistributeBolts
                      (lVar15,*(undefined4 *)((int)pvVar6 + 0x178),
                       *(undefined4 *)((int)pvVar6 + 0x17c),0,0xffffffffffffffff);
            fVar24 = pfVar11[0xb];
            auVar20 = ZEXT416(0xffffffff);
            auVar20 = auVar20 | auVar20 << 0x20 | auVar20 << 0x40 | auVar20 << 0x60;
            *(undefined1 *)((int)pvVar6 + 0x167) = 0xfa;
            auVar21 = vectorShiftLeftIntegerWord(auVar20,auVar20);
            *(float *)((int)pvVar6 + 0x20) = *(float *)((int)pvVar6 + 0x20) - fVar24;
            auVar20 = loadVectorLeftIndexed(0x14,0x422ea8);
            auVar22 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
            auVar20 = auVar20 >> 0x60 & (GPiece<16>)0xffffffff;
            auVar20 = vectorMultiplyAddFloatingPoint
                                (auVar22,auVar20 | auVar20 << 0x20 | auVar20 << 0x40 |
                                         auVar20 << 0x60,auVar21);
            auVar20 = vectorConvertToSignedFixedPointWordSaturate(auVar20,0);
            auVar20 = vectorSplatHalfWord(auVar20,1);
            uVar9 = storeVectorElementHalfWordIndexed(auVar20,0x26,uVar16);
            *(undefined2 *)((int)pvVar6 + 0x26) = uVar9;
            MB_UpdateLightsTransition(lVar15,uVar16 + 0x160);
          }
          else {
            dVar17 = (double)FUN_005e8338((double)((moby->pos).x - *pfVar11),
                                          (double)((moby->pos).y - pfVar11[1]));
            local_5c = (float)dVar17;
            *(undefined4 *)((int)pvVar6 + 0x20) = 0;
            moby->modeBits =
                 moby->modeBits &
                 (MIRROR|CAN_BE_DAMAGED|HIDE_BACKFACES|DISABLE_Z_WRITE|DRAW_SHADOW|
                  DRAW_TRANSPARENT_WEIRD|LOCK_ROTATION|NO_DRAW|UNK_40|HAS_SPECIAL_VARS|HAS_GLOW|
                  TRANSPARENT|NO_POST_UPDATE|NO_UPDATE|DISABLED);
            *(undefined4 *)((int)pvVar6 + 0x130) = 0x3df5c28f;
            fVar24 = g_FrameTime;
            *(float *)((int)pvVar6 + 0x118) = g_FrameTime * 12.0;
            *(float *)((int)pvVar6 + 0x11c) = fVar24 * 10.0;
            MB_VecAtan2Angles
                      (*(undefined8 *)(pfVar11 + 4),*(undefined8 *)(pfVar11 + 6),&local_5c,
                       uVar16 + 0x118,uVar16 + 0x11c);
            MB_StartKick((double)local_5c,lVar15,uVar16 + 0x100);
            *(undefined4 *)((int)pvVar6 + 0x150) = 0x41300000;
            *(undefined4 *)((int)pvVar6 + 0x154) = 0x418c0000;
            *(undefined1 *)((int)pvVar6 + 0x167) = 0x78;
            MB_UpdateLightsTransition(lVar15,uVar16 + 0x160);
            moby->state = '\f';
          }
          if (((uint)pfVar11[0xc] & 1) != 0) {
            *(float *)((int)pvVar6 + 0xf0) = pfVar11[4];
            *(float *)((int)pvVar6 + 0xf4) = pfVar11[5];
            *(float *)((int)pvVar6 + 0xf8) = pfVar11[6];
            *(float *)((int)pvVar6 + 0xfc) = pfVar11[7];
          }
        }
        moby->damage = -1;
      }
      MB_ColorDyingMoby(lVar15,uVar16 + 0x160);
      dVar19 = 100000.0;
      dVar17 = (double)*(float *)((int)pvVar6 + 0xa0);
      if ((double)*(float *)((int)pvVar6 + 0xa0) - (double)*(float *)((int)pvVar6 + 100) < 0.0) {
        dVar17 = (double)*(float *)((int)pvVar6 + 100);
      }
      MB_getTarget(dVar17,lVar15,&DAT_00422ea8,aVStack_b0);
      *(MobyInstance **)((int)pvVar6 + 0x80) = local_70;
      if (local_70 == (MobyInstance *)0x0) {
        MB_randSphere(0x3fe0000000000000,0x3ff0000000000000,&local_220);
        local_230 = g_heroPosition.x + local_220;
        local_22c = g_heroPosition.y + local_21c;
        local_224 = g_heroPosition.w;
      }
      else {
        local_230 = (local_70->pos).x;
        dVar17 = (double)local_230;
        local_22c = (local_70->pos).y;
        local_224 = (local_70->pos).w;
        fVar24 = (moby->pos).y - *(float *)(*(int *)((int)pvVar6 + 0x80) + 0x14);
        fVar2 = (moby->pos).x - *(float *)(*(int *)((int)pvVar6 + 0x80) + 0x10);
        dVar19 = (double)SQRT(fVar2 * fVar2 + fVar24 * fVar24);
        if ((double)(*(float *)((int)pvVar6 + 0x9c) + *(float *)((int)pvVar6 + 0x68)) < dVar19) {
          dVar18 = (double)cosf(*(float *)((int)pvVar6 + 0x98));
          local_230 = (float)((double)*(float *)((int)pvVar6 + 0x9c) * dVar18 + dVar17);
          dVar18 = (double)local_22c;
          dVar17 = (double)FUN_005e8128((double)*(float *)((int)pvVar6 + 0x98));
          local_22c = (float)((double)*(float *)((int)pvVar6 + 0x9c) * dVar17 + dVar18);
        }
        if (((5 < moby->state) && (*(int *)((int)pvVar6 + 0x180) != -1)) &&
           (iVar12 = PointInsideComplexPoly
                               (aVStack_b0,(Vec4 *)Splines[*(int *)((int)pvVar6 + 0x180)]->points,
                                Splines[*(int *)((int)pvVar6 + 0x180)]->cnt), iVar12 == 0)) {
          MB_PathFollowToPos
                    (0x408f380000000000,0x4014000000000000,0,Splines[*(int *)((int)pvVar6 + 0x180)],
                     &local_230,&local_230,auStack_58,auStack_54);
        }
      }
      if (g_heroState == TAKING_DAMAGE) {
        auVar20 = ZEXT416(0xfffffff8);
        auVar21 = ZEXT416(0xffffffff);
        auVar22 = auVar21 | auVar21 << 0x20 | auVar21 << 0x40 | auVar21 << 0x60;
        auVar21 = loadVectorLeftIndexed(0xab,uVar16);
        auVar22 = vectorShiftLeftIntegerWord(auVar22,auVar22);
        auVar20 = vectorShiftRightWord
                            (auVar21,auVar20 | auVar20 << 0x20 | auVar20 << 0x40 | auVar20 << 0x60);
        auVar21 = vectorConvertFromSignedFixedPointWord(auVar20,0);
        auVar20 = loadVectorLeftIndexed(0x1c,0x422ea8);
        auVar20 = auVar20 >> 0x60 & (GPiece<16>)0xffffffff;
        auVar23 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
        auVar20 = vectorAddFloatingPoint
                            (auVar21,auVar20 | auVar20 << 0x20 | auVar20 << 0x40 | auVar20 << 0x60);
        auVar20 = vectorMultiplyAddFloatingPoint(auVar23,auVar20,auVar22);
        auVar20 = vectorConvertToSignedFixedPointWordSaturate(auVar20,0);
        auVar20 = auVar20 >> 0x60 & (GPiece<16>)0xff;
        uVar8 = storeVectorElementByteIndexed
                          (auVar20 | auVar20 << 8 | auVar20 << 0x10 | auVar20 << 0x18 |
                           auVar20 << 0x20 | auVar20 << 0x28 | auVar20 << 0x30 | auVar20 << 0x38 |
                           auVar20 << 0x40 | auVar20 << 0x48 | auVar20 << 0x50 | auVar20 << 0x58 |
                           auVar20 << 0x60 | auVar20 << 0x68 | auVar20 << 0x70 | auVar20 << 0x78,
                           0xac,uVar16);
        *(undefined1 *)((int)pvVar6 + 0xac) = uVar8;
      }
      else {
        FastDecTimerU8(uVar16 + 0xac);
      }
      bVar1 = moby->state;
      if (bVar1 < 6) {
        if (bVar1 == 5) {
          if ((moby->field43_0x70 & 2U) != 0) {
            if (moby->animationId != '\a') {
              local_48 = (longlong)(int)(animationSpeed * 10.5);
              MB_SetAnimation(lVar15,7,0,(int)(animationSpeed * 10.5));
            }
            moby->state = '\x06';
          }
        }
        else if (bVar1 == 4) {
          if (((moby->field43_0x70 & 2U) != 0) && (moby->animationId != '\x03')) {
            local_48 = (longlong)(int)(animationSpeed * 0.5);
            MB_SetAnimation(lVar15,3,0,(int)(animationSpeed * 0.5));
          }
          local_1d0 = (moby->pos).x;
          local_1cc = (moby->pos).y;
          local_1c8 = (moby->pos).z;
          local_1c4 = (moby->pos).w;
          fVar24 = -(*(float *)((int)pvVar6 + 0x94) * DAT_0071f408 - *(float *)((int)pvVar6 + 0xf8))
          ;
          *(float *)((int)pvVar6 + 0xf8) = fVar24;
          (moby->pos).z = (moby->pos).z + fVar24;
          iVar12 = CollLine(&local_1d0,lVar15 + 0x10,2,lVar15,0);
          if (iVar12 != 0) {
            *(undefined1 *)((int)pvVar6 + 0xf0) = 0;
            *(undefined1 *)((int)pvVar6 + 0xf1) = 0;
            *(undefined1 *)((int)pvVar6 + 0xf2) = 0;
            *(undefined1 *)((int)pvVar6 + 0xf3) = 0;
            *(undefined1 *)((int)pvVar6 + 0xf4) = 0;
            *(undefined1 *)((int)pvVar6 + 0xf5) = 0;
            *(undefined1 *)((int)pvVar6 + 0xf6) = 0;
            *(undefined1 *)((int)pvVar6 + 0xf7) = 0;
            *(undefined1 *)((int)pvVar6 + 0xf8) = 0;
            *(undefined1 *)((int)pvVar6 + 0xf9) = 0;
            *(undefined1 *)((int)pvVar6 + 0xfa) = 0;
            *(undefined1 *)((int)pvVar6 + 0xfb) = 0;
            *(undefined1 *)((int)pvVar6 + 0xfc) = 0;
            *(undefined1 *)((int)pvVar6 + 0xfd) = 0;
            *(undefined1 *)((int)pvVar6 + 0xfe) = 0;
            *(undefined1 *)((int)pvVar6 + 0xff) = 0;
            if (moby->animationId != '\x04') {
              local_48 = (longlong)(int)(animationSpeed * 4.5);
              MB_SetAnimation(lVar15,4,0,(int)(animationSpeed * 4.5));
            }
            moby->state = '\x05';
          }
          lVar15 = uVar16 + 0xc0;
          FastSlerp((double)((*(float *)((int)pvVar6 + 0x70) - 1.0) * DAT_0071f408 + 1.0),
                              lVar15,lVar15,uVar16 + 0xd0);
          FastQuaternionToMtx4Identity(lVar15,aVStack_f0);
          FastApplyTransform(&(moby->transform).v0,aVStack_f0);
        }
        else if (bVar1 == 3) {
          local_1f0 = (moby->pos).x;
          local_1ec = (moby->pos).y;
          local_1e8 = (moby->pos).z;
          local_1e4 = (moby->pos).w;
          spline = Splines[*(int *)((int)pvVar6 + 0x6c)];
          sVar14 = Path_PickNextNode
                             (moby,spline,spline->points + spline->cnt + -1,&VStack_200);
          *(short *)((int)pvVar6 + 0x60) = sVar14;
          if ((sVar14 == -1) || (spline->cnt + -1 <= (int)sVar14)) {
            sVar14 = *(short *)((int)pvVar6 + 0x62);
            if (sVar14 < 1) {
              if (-1 < sVar14) {
                if (moby->animationId != '\a') {
                  local_48 = (longlong)(int)(animationSpeed * 10.5);
                  MB_SetAnimation(lVar15,7,0,(int)(animationSpeed * 10.5));
                }
                moby->state = '\x06';
              }
            }
            else if (sVar14 < 3) {
              M694_00422828(lVar15,uVar16);
              if (moby->animationId != '\x02') {
                local_48 = (longlong)(int)(animationSpeed * 0.5);
                MB_SetAnimation(lVar15,2,0,(int)(animationSpeed * 0.5));
              }
              moby->state = '\x04';
            }
            else if (sVar14 < 4) {
              if (moby->animationId != '\a') {
                local_48 = (longlong)(int)(animationSpeed * 10.5);
                MB_SetAnimation(lVar15,7,0,(int)(animationSpeed * 10.5));
              }
              moby->state = '\x06';
            }
          }
          else {
            iVar12 = M694_00421f08(lVar15,uVar16,&VStack_200,0);
            if (iVar12 == 0) {
              fVar24 = -(*(float *)((int)pvVar6 + 0x94) * DAT_0071f408 -
                        *(float *)((int)pvVar6 + 0xf8));
              *(float *)((int)pvVar6 + 0xf8) = fVar24;
              (moby->pos).z = (moby->pos).z + fVar24;
            }
            else {
              local_1e0 = *(float *)((int)pvVar6 + 0xe0) - (moby->pos).x;
              local_1dc = *(float *)((int)pvVar6 + 0xe4) - (moby->pos).y;
              local_1d8 = *(float *)((int)pvVar6 + 0xe8) - (moby->pos).z;
              local_1d4 = *(undefined4 *)((int)pvVar6 + 0xec);
              FUN_005e7ed8((double)(*(float *)((int)pvVar6 + 0x7c) * DAT_0071f408),&local_1e0,
                           &local_1e0);
              if ((int)local_1d8 < 1) {
                fVar24 = -(*(float *)((int)pvVar6 + 0x78) * DAT_0071f408);
                if (local_1d8 - fVar24 < 0.0) {
                  local_1d8 = fVar24;
                }
              }
              else {
                fVar24 = *(float *)((int)pvVar6 + 0x74) * DAT_0071f408;
                if (fVar24 - local_1d8 < 0.0) {
                  local_1d8 = fVar24;
                }
              }
              (moby->pos).x = (moby->pos).x + local_1e0;
              (moby->pos).y = (moby->pos).y + local_1dc;
              (moby->pos).z = (moby->pos).z + local_1d8;
              M694_00422aa0(lVar15,uVar16,&local_1f0,&VStack_200);
            }
          }
          *(float *)((int)pvVar6 + 0xf0) = (moby->pos).x - local_1f0;
          *(float *)((int)pvVar6 + 0xf4) = (moby->pos).y - local_1ec;
          *(float *)((int)pvVar6 + 0xf8) = (moby->pos).z - local_1e8;
          *(f32 *)((int)pvVar6 + 0xfc) = (moby->pos).w;
        }
        else if (bVar1 == 1) {
          iVar12 = M694_00421f08(lVar15,uVar16,0,0);
          if (iVar12 == 0) {
            fVar24 = (moby->pos).x;
            fVar5 = -(*(float *)((int)pvVar6 + 0x78) * DAT_0071f408 - (moby->pos).z);
            fVar2 = (moby->pos).y;
          }
          else {
            fVar24 = *(float *)((int)pvVar6 + 0xe0);
            fVar2 = (moby->pos).x;
            fVar3 = (moby->pos).y;
            fVar4 = *(float *)((int)pvVar6 + 0xe4);
            fVar5 = *(float *)((int)pvVar6 + 0xe8) - (moby->pos).z;
            if (0.0 <= fVar5) {
              FUN_005e8e80((double)(*(float *)((int)pvVar6 + 0x78) * DAT_0071f408),local_210,
                           local_210);
            }
            else {
              FUN_005e8e80((double)(*(float *)((int)pvVar6 + 0x74) * DAT_0071f408),local_210,
                           local_210);
            }
            fVar24 = (moby->pos).x + (fVar24 - fVar2);
            fVar2 = (moby->pos).y + (fVar4 - fVar3);
            fVar5 = (moby->pos).z + fVar5;
            (moby->pos).x = fVar24;
            (moby->pos).y = fVar2;
          }
          (moby->pos).z = fVar5;
          iVar12 = *(int *)((int)pvVar6 + 0x80);
          if (((iVar12 != 0) || (*(int *)((int)pvVar6 + 0x38) != 0)) &&
             ((fVar2 = fVar2 - *(float *)(iVar12 + 0x14),
              fVar24 = fVar24 - *(float *)(iVar12 + 0x10),
              SQRT(fVar24 * fVar24 + fVar2 * fVar2) < *(float *)((int)pvVar6 + 100) ||
              (*(int *)((int)pvVar6 + 0x38) != 0)))) {
            if (*(int *)((int)pvVar6 + 0x170) != -1) {
              CollDamageMobyDirect_wrap
                        ((double)*(float *)((int)pvVar6 + 0x174),
                         g_MobyInstance + *(int *)((int)pvVar6 + 0x170),lVar15,0x10000,g_MobyInstance,
                         lVar15 + 0x10);
            }
            sVar14 = *(short *)((int)pvVar6 + 0x62);
            *(undefined4 *)((int)pvVar6 + 0x38) = 0;
            if (sVar14 < 2) {
              if (-1 < sVar14) {
                if (moby->animationId != '\a') {
                  local_48 = (longlong)(int)(animationSpeed * 10.5);
                  MB_SetAnimation(lVar15,7,0,(int)(animationSpeed * 10.5));
                }
                moby->state = '\x03';
              }
            }
            else if (sVar14 < 3) {
              M694_00422828(lVar15,uVar16);
              if (moby->animationId != '\x02') {
                local_48 = (longlong)(int)(animationSpeed * 0.5);
                MB_SetAnimation(lVar15,2,0,(int)(animationSpeed * 0.5));
              }
              moby->state = '\x04';
            }
            else if (sVar14 < 4) {
              if (moby->animationId != '\a') {
                local_48 = (longlong)(int)(animationSpeed * 10.5);
                MB_SetAnimation(lVar15,7,0,(int)(animationSpeed * 10.5));
              }
              moby->state = '\x06';
            }
          }
        }
        else if (bVar1 == 0) {
          MB_EulerToQuat((float *)((int)pvVar6 + 0xc0),(Vec3 *)&moby->rotation);
          *(f32 *)((int)pvVar6 + 0xb0) = (moby->pos).x;
          *(f32 *)((int)pvVar6 + 0xb4) = (moby->pos).y;
          *(f32 *)((int)pvVar6 + 0xb8) = (moby->pos).z;
          *(f32 *)((int)pvVar6 + 0xbc) = (moby->pos).w;
          M694_00421f08(lVar15,uVar16,0,0);
          if ((*(int *)((int)pvVar6 + 0x6c) == -1) ||
             (Splines[*(int *)((int)pvVar6 + 0x6c)] == (Spline *)0x0)) {
            sVar14 = *(short *)((int)pvVar6 + 0x62);
            if (sVar14 < 1) {
              if (-1 < sVar14) {
                uVar13 = (int)moby - (int)g_MobyInstance;
                printf("warning: no path for PATH_DOWN type on moby 694 :%d\n Switching to ALREADY_DOWN state.\n"
                             ,((int)uVar13 >> 8) + (uint)((int)uVar13 < 0 && (uVar13 & 0xff) != 0));
                *(undefined2 *)((int)pvVar6 + 0x62) = 3;
              }
            }
            else if (sVar14 < 2) {
              uVar13 = (int)moby - (int)g_MobyInstance;
              printf("warning: no path for PATH_DROP type on moby 694 :%d\n Switching to DROP_DOWN state.\n"
                           ,((int)uVar13 >> 8) + (uint)((int)uVar13 < 0 && (uVar13 & 0xff) != 0));
              *(undefined2 *)((int)pvVar6 + 0x62) = 2;
            }
          }
          else {
            iVar12 = PathFindClosestPnt
                               (0.0,(Vec4 *)&moby->pos,Splines[*(int *)((int)pvVar6 + 0x6c)]);
            *(short *)((int)pvVar6 + 0x60) = (short)iVar12;
          }
          *(undefined1 *)((int)pvVar6 + 0xf0) = 0;
          *(undefined1 *)((int)pvVar6 + 0xf1) = 0;
          *(undefined1 *)((int)pvVar6 + 0xf2) = 0;
          *(undefined1 *)((int)pvVar6 + 0xf3) = 0;
          *(undefined1 *)((int)pvVar6 + 0xf4) = 0;
          *(undefined1 *)((int)pvVar6 + 0xf5) = 0;
          *(undefined1 *)((int)pvVar6 + 0xf6) = 0;
          *(undefined1 *)((int)pvVar6 + 0xf7) = 0;
          *(undefined1 *)((int)pvVar6 + 0xf8) = 0;
          *(undefined1 *)((int)pvVar6 + 0xf9) = 0;
          *(undefined1 *)((int)pvVar6 + 0xfa) = 0;
          *(undefined1 *)((int)pvVar6 + 0xfb) = 0;
          *(undefined1 *)((int)pvVar6 + 0xfc) = 0;
          *(undefined1 *)((int)pvVar6 + 0xfd) = 0;
          *(undefined1 *)((int)pvVar6 + 0xfe) = 0;
          *(undefined1 *)((int)pvVar6 + 0xff) = 0;
          moby->modeBits = moby->modeBits | LOCK_ROTATION;
          if (moby->animationId != '\x05') {
            local_48 = (longlong)(int)(animationSpeed * 10.5);
            MB_SetAnimation(lVar15,5,0,(int)(animationSpeed * 10.5));
          }
          uVar13 = (int)moby - (int)g_MobyInstance;
          dVar17 = (double)FastIntToDouble
                                     (((int)uVar13 >> 8) +
                                      (uint)((int)uVar13 < 0 && (uVar13 & 0xff) != 0));
          fVar24 = MB_WrapRot((float)(dVar17 * 3.1415927410125732) * 0.5);
          *(float *)((int)pvVar6 + 0x98) = fVar24;
          moby->modeBits = moby->modeBits | CAN_BE_AUTO_TARGETED;
          MB_CopyHeroLights(lVar15);
          moby->state = '\x01';
        }
      }
      else if (bVar1 == 0xc) {
        uVar13 = MB_UpdateKick(moby,(KickVars *)((int)pvVar6 + 0x100));
        if ((uVar13 & 0x40) != 0) {
          GetBonePosition(lVar15,1,auStack_130);
          MB_genericExplosion
                    (0,0,0x3ff0000000000000,0x3fe0000000000000,0x4008000000000000,0x3ff0000000000000
                     ,0x401c000000000000,lVar15,uVar16 + 0xf0,auStack_130,1,0xffffffffffffffff,3,1,5
                    );
          DeleteMoby(moby);
          return;
        }
      }
      else if (bVar1 == 0xb) {
        M694_004226b8(lVar15,uVar16,&local_230);
        iVar12 = FastDecTimerU8(uVar16 + 0xaa);
        if (iVar12 != 0) {
          if (moby->animationId != '\a') {
            local_48 = (longlong)(int)(animationSpeed * 10.5);
            MB_SetAnimation(lVar15,7,0,(int)(animationSpeed * 10.5));
          }
          moby->state = '\x06';
        }
      }
      else if (bVar1 == 10) {
        local_150 = (moby->pos).x;
        local_14c = (moby->pos).y;
        local_148 = (moby->pos).z;
        local_144 = (moby->pos).w;
        fVar2 = local_14c - *(float *)((int)pvVar6 + 0xb4);
        fVar24 = local_150 - *(float *)((int)pvVar6 + 0xb0);
        if (SQRT(fVar24 * fVar24 + fVar2 * fVar2) <= *(float *)((int)pvVar6 + 0xa0)) {
          if (*(int *)((int)pvVar6 + 0x80) != 0) {
            GetBonePosition(lVar15,1,auStack_140);
            if (10.0 <= dVar19) {
              moby->state = '\x06';
              if (moby->animationId != '\a') {
                local_48 = (longlong)(int)(animationSpeed * 10.5);
                MB_SetAnimation(lVar15,7,0,(int)(animationSpeed * 10.5));
              }
            }
            else {
              iVar12 = CollLine(auStack_140,&local_230,1,lVar15,0);
              if (iVar12 == 0) {
                moby->state = '\x06';
                if (moby->animationId != '\a') {
                  local_48 = (longlong)(int)(animationSpeed * 10.5);
                  MB_SetAnimation(lVar15,7,0,(int)(animationSpeed * 10.5));
                }
              }
              else if ((g_CollOutput.pMoby == local_70) &&
                      (moby->state = '\x06', moby->animationId != '\a')) {
                local_48 = (longlong)(int)(animationSpeed * 10.5);
                MB_SetAnimation(lVar15,7,0,(int)(animationSpeed * 10.5));
              }
            }
          }
        }
        else {
          moby->state = '\t';
        }
        M694_00422aa0(lVar15,uVar16,&local_150,&local_230);
      }
      else if (bVar1 == 9) {
        local_180 = (moby->pos).x;
        local_17c = (moby->pos).y;
        local_178 = (moby->pos).z;
        local_174 = (moby->pos).w;
        local_170 = *(undefined4 *)((int)pvVar6 + 0xb0);
        local_16c = *(undefined4 *)((int)pvVar6 + 0xb4);
        local_164 = *(undefined4 *)((int)pvVar6 + 0xbc);
        local_168 = local_178;
        iVar12 = M694_00421f08(lVar15,uVar16,&local_170,&local_4c);
        if (iVar12 != 0) {
          local_160 = *(float *)((int)pvVar6 + 0xe0) - (moby->pos).x;
          local_15c = *(float *)((int)pvVar6 + 0xe4) - (moby->pos).y;
          local_158 = *(float *)((int)pvVar6 + 0xe8) - (moby->pos).z;
          local_154 = *(undefined4 *)((int)pvVar6 + 0xec);
          FUN_005e7ed8((double)(*(float *)((int)pvVar6 + 0x7c) * DAT_0071f408),&local_160,&local_160
                      );
          if ((int)local_158 < 1) {
            fVar24 = -(*(float *)((int)pvVar6 + 0x78) * DAT_0071f408);
            if (local_158 - fVar24 < 0.0) {
              local_158 = fVar24;
            }
          }
          else {
            fVar24 = *(float *)((int)pvVar6 + 0x74) * DAT_0071f408;
            if (fVar24 - local_158 < 0.0) {
              local_158 = fVar24;
            }
          }
          (moby->pos).x = (moby->pos).x + local_160;
          (moby->pos).y = (moby->pos).y + local_15c;
          (moby->pos).z = (moby->pos).z + local_158;
          M694_00422aa0(lVar15,uVar16,&local_180,&local_170);
        }
        fVar24 = (moby->pos).x - local_180;
        *(float *)((int)pvVar6 + 0xf0) = fVar24;
        fVar2 = (moby->pos).y - local_17c;
        *(float *)((int)pvVar6 + 0xf4) = fVar2;
        fVar5 = (moby->pos).z - local_178;
        *(float *)((int)pvVar6 + 0xf8) = fVar5;
        *(f32 *)((int)pvVar6 + 0xfc) = (moby->pos).w;
        if ((SQRT(fVar5 * fVar5 + fVar24 * fVar24 + fVar2 * fVar2) < 0.01) &&
           (moby->animationId != '\x05')) {
          local_48 = (longlong)(int)(animationSpeed * 10.5);
          MB_SetAnimation(lVar15,5,0,(int)(animationSpeed * 10.5));
        }
        iVar12 = *(int *)((int)pvVar6 + 0x80);
        if (((iVar12 == 0) ||
            (fVar24 = (moby->pos).y - *(float *)(iVar12 + 0x14),
            fVar2 = (moby->pos).x - *(float *)(iVar12 + 0x10),
            *(float *)((int)pvVar6 + 0x68) < SQRT(fVar2 * fVar2 + fVar24 * fVar24))) ||
           (0x3d4ccccc <
            (int)(FLOAT_ORDER(local_4c)))) {
          if ((iVar12 != 0) || (*(int *)((int)pvVar6 + 0x38) != 0)) {
            fVar24 = (moby->pos).y - *(float *)((int)pvVar6 + 0xb4);
            fVar2 = (moby->pos).x - *(float *)((int)pvVar6 + 0xb0);
            if (((SQRT(fVar2 * fVar2 + fVar24 * fVar24) < *(float *)((int)pvVar6 + 0xa0)) &&
                (*(int *)((int)pvVar6 + 0x184) == 0)) &&
               ((local_22c = local_22c - *(float *)((int)pvVar6 + 0xb4),
                local_230 = local_230 - *(float *)((int)pvVar6 + 0xb0),
                SQRT(local_230 * local_230 + local_22c * local_22c) < *(float *)((int)pvVar6 + 100)
                || (*(int *)((int)pvVar6 + 0x38) != 0)))) {
              if (moby->animationId != '\a') {
                local_48 = (longlong)(int)(animationSpeed * 10.5);
                MB_SetAnimation(lVar15,7,0,(int)(animationSpeed * 10.5));
              }
              *(undefined4 *)((int)pvVar6 + 0x38) = 0;
              moby->state = '\x06';
            }
          }
        }
        else {
          *(undefined1 *)((int)pvVar6 + 0xf0) = 0;
          *(undefined1 *)((int)pvVar6 + 0xf1) = 0;
          *(undefined1 *)((int)pvVar6 + 0xf2) = 0;
          *(undefined1 *)((int)pvVar6 + 0xf3) = 0;
          *(undefined1 *)((int)pvVar6 + 0xf4) = 0;
          *(undefined1 *)((int)pvVar6 + 0xf5) = 0;
          *(undefined1 *)((int)pvVar6 + 0xf6) = 0;
          *(undefined1 *)((int)pvVar6 + 0xf7) = 0;
          *(undefined1 *)((int)pvVar6 + 0xf8) = 0;
          *(undefined1 *)((int)pvVar6 + 0xf9) = 0;
          *(undefined1 *)((int)pvVar6 + 0xfa) = 0;
          *(undefined1 *)((int)pvVar6 + 0xfb) = 0;
          *(undefined1 *)((int)pvVar6 + 0xfc) = 0;
          *(undefined1 *)((int)pvVar6 + 0xfd) = 0;
          *(undefined1 *)((int)pvVar6 + 0xfe) = 0;
          *(undefined1 *)((int)pvVar6 + 0xff) = 0;
          if (*(char *)((int)pvVar6 + 0xac) == '\0') {
            if (moby->animationId != '\b') {
              local_48 = (longlong)(int)(animationSpeed * 10.5);
              MB_SetAnimation(lVar15,8,0,(int)(animationSpeed * 10.5));
            }
            moby->state = '\b';
          }
          else {
            if (moby->animationId != '\x05') {
              local_48 = (longlong)(int)(animationSpeed * 10.5);
              MB_SetAnimation(lVar15,5,0,(int)(animationSpeed * 10.5));
            }
            moby->state = '\a';
          }
        }
      }
      else if (bVar1 == 8) {
        if ((moby->field43_0x70 & 2U) == 0) {
          if (((moby->updateId == '\b') &&
              (dVar17 = (double)BlendAnimFrame(moby), 12.0 < dVar17)) &&
             (local_70 != (MobyInstance *)0x0)) {
            fVar24 = (moby->pos).y;
            fVar2 = (local_70->pos).y;
            fVar5 = (moby->pos).x;
            fVar4 = fVar24 - fVar2;
            fVar3 = (local_70->pos).x;
            fVar10 = fVar5 - fVar3;
            if (SQRT(fVar10 * fVar10 + fVar4 * fVar4) < 1.4) {
              dVar19 = (double)(moby->rotation).z;
              dVar17 = (double)FUN_005e8338((double)(fVar3 - fVar5),(double)(fVar2 - fVar24));
              dVar17 = (double)FastSubRots((float)dVar19,(float)dVar17);
              if ((dVar17 < 0.7853981852531433) && (ABS((local_70->pos).z - (moby->pos).z) < 0.5)) {
                SetCollDamIn(0x3ff0000000000000,&uStack_120,lVar15,1);
                CollDamageMobyDirect
                          (local_70,0x40,CONCAT44(uStack_120,uStack_11c),
                           CONCAT44(uStack_118,uStack_114),CONCAT44(uStack_110,uStack_10c),
                           CONCAT44(uStack_108,uStack_104),CONCAT44(uStack_100,uStack_fc),
                           CONCAT44(uStack_f8,uStack_f4));
              }
            }
          }
        }
        else {
          if (moby->animationId != '\a') {
            local_48 = (longlong)(int)(animationSpeed * 10.5);
            MB_SetAnimation(lVar15,7,0,(int)(animationSpeed * 10.5));
          }
          moby->state = '\x06';
        }
      }
      else if (bVar1 == 7) {
        iVar12 = *(int *)((int)pvVar6 + 0x80);
        if (((iVar12 == 0) ||
            (fVar24 = (moby->pos).y - *(float *)(iVar12 + 0x14),
            fVar2 = (moby->pos).x - *(float *)(iVar12 + 0x10),
            *(float *)((int)pvVar6 + 0x68) < SQRT(fVar2 * fVar2 + fVar24 * fVar24))) ||
           (*(char *)((int)pvVar6 + 0xac) != '\0')) {
          if (moby->animationId != '\a') {
            local_48 = (longlong)(int)(animationSpeed * 10.5);
            MB_SetAnimation(lVar15,7,0,(int)(animationSpeed * 10.5));
          }
          moby->state = '\x06';
        }
        else {
          if (moby->animationId != '\b') {
            local_48 = (longlong)(int)(animationSpeed * 10.5);
            MB_SetAnimation(lVar15,8,0,(int)(animationSpeed * 10.5));
          }
          moby->state = '\b';
        }
        M694_004226b8(lVar15,uVar16,&local_230);
      }
      else if (bVar1 == 6) {
        local_1c0 = (moby->pos).x;
        local_1bc = (moby->pos).y;
        local_1b8 = (moby->pos).z;
        local_1b4 = (moby->pos).w;
        fVar2 = local_1bc - *(float *)((int)pvVar6 + 0xb4);
        fVar24 = local_1c0 - *(float *)((int)pvVar6 + 0xb0);
        if ((*(float *)((int)pvVar6 + 0xa0) < SQRT(fVar24 * fVar24 + fVar2 * fVar2)) ||
           (0 < *(int *)((int)pvVar6 + 0x184))) {
          moby->state = '\t';
        }
        else if (*(int *)((int)pvVar6 + 0x80) != 0) {
          local_1a0 = local_230 - local_1c0;
          local_19c = local_22c - local_1bc;
          local_198 = 0.0;
          local_194 = local_224;
          FUN_005e7f98(0x3fd3333340000000,&local_1b0,&local_1a0);
          local_1b0 = local_1b0 + (moby->pos).x;
          local_1ac = local_1ac + (moby->pos).y;
          dVar17 = 0.20000000298023224;
          local_1a8 = local_1a8 + (moby->pos).z + 0.2;
          FUN_005e7f98(0x3fefae1480000000,&local_1a0,&local_1a0);
          local_1a0 = local_1a0 + (moby->pos).x;
          local_19c = local_19c + (moby->pos).y;
          local_198 = (float)((double)local_198 + dVar17) + (moby->pos).z;
          if (((dVar19 < 4.0) &&
              (iVar12 = CollLine(&local_1b0,&local_1a0,1,lVar15,0), iVar12 != 0)) &&
             (g_CollOutput.pMoby != local_70)) {
            moby->state = '\n';
          }
        }
        iVar12 = M694_00421f08(lVar15,uVar16,&local_230,&local_50);
        if (iVar12 != 0) {
          iVar12 = *(int *)((int)pvVar6 + 0x80);
          fVar24 = (moby->pos).x;
          fVar2 = (moby->pos).y;
          if (((iVar12 == 0) ||
              (fVar3 = fVar2 - *(float *)(iVar12 + 0x14), fVar5 = fVar24 - *(float *)(iVar12 + 0x10)
              , *(float *)((int)pvVar6 + 0x68) < SQRT(fVar5 * fVar5 + fVar3 * fVar3))) ||
             (0x3d4ccccc <
              (int)(FLOAT_ORDER(local_50)))) {
            local_190 = *(float *)((int)pvVar6 + 0xe0) - fVar24;
            local_18c = *(float *)((int)pvVar6 + 0xe4) - fVar2;
            local_188 = *(float *)((int)pvVar6 + 0xe8) - (moby->pos).z;
            local_184 = *(undefined4 *)((int)pvVar6 + 0xec);
            FUN_005e7ed8((double)(*(float *)((int)pvVar6 + 0x7c) * DAT_0071f408),&local_190,
                         &local_190);
            if ((int)local_188 < 1) {
              fVar24 = -(*(float *)((int)pvVar6 + 0x78) * DAT_0071f408);
              if (local_188 - fVar24 < 0.0) {
                local_188 = fVar24;
              }
            }
            else {
              fVar24 = *(float *)((int)pvVar6 + 0x74) * DAT_0071f408;
              if (fVar24 - local_188 < 0.0) {
                local_188 = fVar24;
              }
            }
            (moby->pos).x = (moby->pos).x + local_190;
            (moby->pos).y = (moby->pos).y + local_18c;
            (moby->pos).z = (moby->pos).z + local_188;
            M694_00422aa0(lVar15,uVar16,&local_1c0,&local_230);
          }
          else {
            *(undefined1 *)((int)pvVar6 + 0xf0) = 0;
            *(undefined1 *)((int)pvVar6 + 0xf1) = 0;
            *(undefined1 *)((int)pvVar6 + 0xf2) = 0;
            *(undefined1 *)((int)pvVar6 + 0xf3) = 0;
            *(undefined1 *)((int)pvVar6 + 0xf4) = 0;
            *(undefined1 *)((int)pvVar6 + 0xf5) = 0;
            *(undefined1 *)((int)pvVar6 + 0xf6) = 0;
            *(undefined1 *)((int)pvVar6 + 0xf7) = 0;
            *(undefined1 *)((int)pvVar6 + 0xf8) = 0;
            *(undefined1 *)((int)pvVar6 + 0xf9) = 0;
            *(undefined1 *)((int)pvVar6 + 0xfa) = 0;
            *(undefined1 *)((int)pvVar6 + 0xfb) = 0;
            *(undefined1 *)((int)pvVar6 + 0xfc) = 0;
            *(undefined1 *)((int)pvVar6 + 0xfd) = 0;
            *(undefined1 *)((int)pvVar6 + 0xfe) = 0;
            *(undefined1 *)((int)pvVar6 + 0xff) = 0;
            if (*(char *)((int)pvVar6 + 0xac) == '\0') {
              if (moby->animationId != '\b') {
                local_48 = (longlong)(int)(animationSpeed * 10.5);
                MB_SetAnimation(lVar15,8,0,(int)(animationSpeed * 10.5));
              }
              moby->state = '\b';
            }
            else {
              if (moby->animationId != '\x05') {
                local_48 = (longlong)(int)(animationSpeed * 10.5);
                MB_SetAnimation(lVar15,5,0,(int)(animationSpeed * 10.5));
              }
              moby->state = '\a';
            }
          }
        }
        *(float *)((int)pvVar6 + 0xf0) = (moby->pos).x - local_1c0;
        *(float *)((int)pvVar6 + 0xf4) = (moby->pos).y - local_1bc;
        *(float *)((int)pvVar6 + 0xf8) = (moby->pos).z - local_1b8;
        *(f32 *)((int)pvVar6 + 0xfc) = (moby->pos).w;
      }
      MB_RegisterLameShadow(0.4,moby);
    }
  }
  return;
}


