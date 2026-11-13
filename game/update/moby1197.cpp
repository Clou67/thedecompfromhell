// game/update/moby1197.cpp -- reconstructed from NPEA00385 EBOOT
// STATUS: NOT STARTED (raw Ghidra output)
// 7 functions, 0x1f4cb0-0x1f6434
#include "game/update/moby1197.h"
#include "game/collproc.h"
#include "game/draw.h"
#include "game/hero.h"
#include "game/mobyfunc.h"
#include "game/mobyutil.h"
#include "game/partupd.h"
#include "game/update/moby859.h"
#include "idol/fastfunc.h"

// 0x01f4cb0 (0xa0 bytes)
void M1197_001f4cb0(int param_1)

{
  ushort uVar1;
  char cVar2;
  undefined8 in_r0;
  ushort *puVar3;
  GPiece<16> auVar4;
  GPiece<16> auVar5;
  GPiece<16> auVar6;
  GPiece<16> auVar7;
  GPiece<16> auVar8;
  
  if (*(byte *)(param_1 + 0x21) != 0xff) {
    puVar3 = (ushort *)(&g_MobyGroups)[*(byte *)(param_1 + 0x21)];
    if (puVar3 != (ushort *)0x0) {
      auVar4 = loadVectorLeftIndexed(in_r0,0x1f4cac);
      auVar4 = auVar4 >> 0x60 & (GPiece<16>)0xffffffff;
      do {
        auVar5 = loadVectorLeftIndexed(0x6164,0x760000);
        auVar6 = ZEXT416(0xffffffff);
        auVar7 = auVar6 | auVar6 << 0x20 | auVar6 << 0x40 | auVar6 << 0x60;
        auVar6 = vectorConvertFromSignedFixedPointWord(auVar5,0);
        auVar8 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
        auVar5 = vectorShiftLeftIntegerWord(auVar7,auVar7);
        auVar6 = vectorAddFloatingPoint
                           (auVar6,auVar4 | auVar4 << 0x20 | auVar4 << 0x40 | auVar4 << 0x60);
        auVar6 = vectorMultiplyAddFloatingPoint(auVar8,auVar6,auVar5);
        auVar6 = vectorConvertToSignedFixedPointWordSaturate(auVar6,0);
        auVar6 = auVar6 >> 0x60 & (GPiece<16>)0xff;
        cVar2 = storeVectorElementByteIndexed
                          (auVar6 | auVar6 << 8 | auVar6 << 0x10 | auVar6 << 0x18 | auVar6 << 0x20 |
                           auVar6 << 0x28 | auVar6 << 0x30 | auVar6 << 0x38 | auVar6 << 0x40 |
                           auVar6 << 0x48 | auVar6 << 0x50 | auVar6 << 0x58 | auVar6 << 0x60 |
                           auVar6 << 0x68 | auVar6 << 0x70 | auVar6 << 0x78,0xbc,
                           ZEXT48(g_MobyInstance + (*puVar3 & 0x7fff)));
        g_MobyInstance[*puVar3 & 0x7fff].setByGroup = cVar2;
        uVar1 = *puVar3;
        puVar3 = puVar3 + 1;
      } while (-1 < (short)uVar1);
    }
  }
  return;
}


// 0x01f4d50 (0x14 bytes)
void M1197_001f4d50(void)

{
  DAT_007661b4 = 0x10000;
  return;
}


// 0x01f4d90 (0x4d0 bytes)
void M1197_001f4d90(int param_1)

{
  uint uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  int iVar5;
  int iVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  GPiece<16> local_d0;
  GPiece<16> local_c0;
  GPiece<32> local_b0;
  
  iVar6 = *(int *)(param_1 + 0x78);
  iVar5 = 0;
  dVar8 = 0.0;
  dVar9 = 1.0;
  do {
    uVar1 = (int)*(uint *)(iVar6 + 0x9c) >> 0x1f;
    if (((0x3f7d70a3 < (int)((uVar1 >> 1 ^ *(uint *)(iVar6 + 0x9c)) - uVar1)) ||
        (uVar1 = (int)*(uint *)(iVar6 + 0xac) >> 0x1f,
        0x3f7d70a3 < (int)((uVar1 >> 1 ^ *(uint *)(iVar6 + 0xac)) - uVar1))) &&
       (dVar7 = (double)MB_randRangeFloat((float)dVar8,(float)dVar9),
       dVar7 <= (double)DAT_00766250)) {
      MB_randRot();
      MB_randRot();
      MB_randRangeFloat(DAT_00766240,DAT_00766244);
      MB_randRangeFloat(DAT_00766240,DAT_00766244);
      MB_randRangeFloat(DAT_00766240,DAT_00766244);
      MB_randRangeFloat(DAT_00766240,DAT_00766244);
      MB_randRangeFloat(DAT_00766248,DAT_0076624c);
      MB_randRangeFloat(DAT_00766248,DAT_0076624c);
      dVar7 = (double)MB_randRangeFloat(DAT_00766228,DAT_0076622c);
      uVar2 = FastDoubleToInt((double)(float)(dVar7 * (double)animationSpeed));
      dVar7 = (double)MB_randRangeFloat(DAT_00766230,DAT_00766234);
      uVar3 = FastDoubleToInt((double)(float)(dVar7 * (double)animationSpeed));
      dVar7 = (double)MB_randRangeFloat(DAT_00766238,DAT_0076623c);
      uVar4 = FastDoubleToInt((double)(float)(dVar7 * (double)animationSpeed));
      MB_randRangeFloat((float)dVar8,(float)dVar9);
      SpawnPart_2(local_d0,local_c0,local_b0,DAT_00766218,DAT_0076621c,uVar2,uVar3,uVar4);
    }
    iVar5 = iVar5 + 1;
    iVar6 = iVar6 + 0x10;
  } while (iVar5 < 0xf);
  return;
}


// 0x01f52a0 (0x8c4 bytes)
// inlined: FastAtan2 @0x1f573c, FastAtan2 @0x1f5944
void M1197_001f52a0(MobyInstance *param_1)

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
  MOBY_OCLASSES MVar11;
  void *pvVar12;
  uint uVar13;
  ulonglong *puVar14;
  int iVar15;
  int iVar16;
  ulonglong uVar17;
  undefined4 uVar19;
  int iVar20;
  int iVar21;
  longlong lVar18;
  ulonglong uVar22;
  longlong lVar23;
  float *pfVar25;
  longlong lVar24;
  uint uVar26;
  ulonglong unaff_r24;
  ulonglong unaff_r25;
  ulonglong unaff_r26;
  ulonglong unaff_r27;
  ulonglong unaff_r28;
  ulonglong unaff_r29;
  ulonglong unaff_r30;
  ulonglong uVar27;
  ulonglong unaff_r31;
  ulonglong in_LR;
  longlong lVar28;
  double dVar29;
  double extraout_f1;
  double dVar30;
  double dVar31;
  double dVar32;
  double dVar33;
  ulonglong in_f24;
  ulonglong in_f25;
  double dVar34;
  ulonglong in_f26;
  double dVar35;
  ulonglong in_f27;
  double dVar36;
  ulonglong in_f28;
  double dVar37;
  ulonglong in_f29;
  double dVar38;
  ulonglong in_f30;
  double dVar39;
  ulonglong in_f31;
  double dVar40;
  GPiece<16> auVar41;
  float fVar42;
  
  uVar17 = ZEXT48(&stack0x00000000);
  lVar1 = uVar17 - 0x1c0;
  puVar14 = (ulonglong *)lVar1;
  *puVar14 = uVar17;
  puVar14[0x3a] = in_LR;
  puVar14[0x30] = in_f24;
  puVar14[0x31] = in_f25;
  puVar14[0x32] = in_f26;
  puVar14[0x33] = in_f27;
  puVar14[0x34] = in_f28;
  puVar14[0x35] = in_f29;
  puVar14[0x36] = in_f30;
  puVar14[0x37] = in_f31;
  puVar14[0x2f] = unaff_r31;
  puVar14[0x2c] = unaff_r28;
  puVar14[0x2e] = unaff_r30;
  pvVar12 = param_1->pVar;
  uVar27 = ZEXT48(pvVar12);
  puVar14[0x2d] = unaff_r29;
  puVar14[0x2b] = unaff_r27;
  puVar14[0x2a] = unaff_r26;
  puVar14[0x29] = unaff_r25;
  puVar14[0x28] = unaff_r24;
  uVar19 = FastDoubleToInt((double)*(float *)((int)pvVar12 + 0x7c));
  *(undefined4 *)(puVar14 + 0x1c) = uVar19;
  FastDecTimerS32(uVar17 - 0xe0);
  iVar20 = *(int *)(puVar14 + 0x1c);
  auVar41 = loadVectorLeftIndexed(0xe0,lVar1);
  auVar41 = vectorConvertFromSignedFixedPointWord(auVar41,0);
  auVar41 = auVar41 >> 0x60 & (GPiece<16>)0xffffffff;
  uVar19 = storeVectorElementWordIndexed
                     (auVar41 | auVar41 << 0x20 | auVar41 << 0x40 | auVar41 << 0x60,0x7c,uVar27);
  *(undefined4 *)((int)pvVar12 + 0x7cU & 0xfffffffc) = uVar19;
  if (iVar20 != 0) {
    if (iVar20 == 0x14) {
      iVar20 = 0;
      uVar22 = uVar27;
      do {
        uVar26 = *(uint *)((int)uVar22 + 0x9c);
        uVar13 = (int)uVar26 >> 0x1f;
        if (0x3f7fffff < (int)((uVar13 >> 1 ^ uVar26) - uVar13)) {
          *(undefined4 *)((int)uVar22 + 0x9c) = 0x3f7ae148;
        }
        iVar20 = iVar20 + 1;
        uVar22 = uVar22 + 0x10;
      } while (iVar20 < 0x10);
    }
    dVar40 = 0.0;
    iVar20 = 0;
    dVar39 = 2.5;
    dVar38 = 0.3499999940395355;
    dVar37 = 1.0;
    dVar36 = 3.0;
    dVar35 = 4.0;
    dVar34 = 2.0;
    uVar22 = uVar27;
    do {
      iVar15 = (int)uVar22;
      fVar2 = *(float *)(iVar15 + 0x90) - *(float *)((int)pvVar12 + 0x70);
      *(float *)(puVar14 + 0xe) = fVar2;
      fVar6 = *(float *)(iVar15 + 0x94) - *(float *)((int)pvVar12 + 0x74);
      dVar33 = (double)g_FrameTime;
      *(float *)((int)puVar14 + 0x74) = fVar6;
      dVar32 = (double)SQRT(fVar2 * fVar2 + fVar6 * fVar6);
      *(float *)(puVar14 + 0xf) = *(float *)(iVar15 + 0x98) - *(float *)((int)pvVar12 + 0x78);
      uVar19 = *(undefined4 *)(iVar15 + 0x9c);
      *(undefined4 *)(puVar14 + 0xf) = 0;
      *(undefined4 *)((int)puVar14 + 0x7c) = uVar19;
      *(undefined4 *)(puVar14 + 0xf) = 0;
      fVar3 = (param_1->pos).y;
      fVar4 = (param_1->pos).x;
      fVar5 = (param_1->pos).z;
      fVar42 = (float)((double)(float)(dVar33 * dVar39) / dVar32);
      dVar29 = (double)(fVar2 * fVar42);
      dVar30 = (double)(fVar6 * fVar42);
      dVar33 = dVar40;
      if (dVar40 - dVar32 < 0.0) {
        dVar33 = dVar29;
      }
      dVar31 = dVar40;
      if (dVar40 - dVar32 < 0.0) {
        dVar31 = dVar30;
      }
      if (dVar32 - dVar40 < 0.0) {
        dVar33 = dVar29;
      }
      if (dVar32 - dVar40 < 0.0) {
        dVar31 = dVar30;
      }
      *(float *)(puVar14 + 0xe) = (float)dVar33;
      *(float *)((int)puVar14 + 0x74) = (float)dVar31;
      fVar42 = (float)((double)*(float *)(iVar15 + 0x90) + dVar33);
      *(float *)(puVar14 + 0xe) = fVar42;
      fVar2 = (float)((double)*(float *)(iVar15 + 0x94) + dVar31);
      *(float *)((int)puVar14 + 0x74) = fVar2;
      fVar6 = *(float *)(iVar15 + 0x98);
      *(float *)(puVar14 + 0xf) = fVar6;
      *(undefined4 *)((int)puVar14 + 0x7c) = *(undefined4 *)(iVar15 + 0x9c);
      fVar7 = *(float *)((int)pvVar12 + 0x84);
      fVar8 = *(float *)((int)pvVar12 + 0x80);
      fVar9 = *(float *)((int)pvVar12 + 0x88);
      dVar30 = (double)SQRT(fVar9 * fVar9 + fVar8 * fVar8 + fVar7 * fVar7);
      *(undefined4 *)(puVar14 + 0x10) = *(undefined4 *)(iVar15 + 0x90);
      *(undefined4 *)((int)puVar14 + 0x84) = *(undefined4 *)(iVar15 + 0x94);
      fVar10 = *(float *)(iVar15 + 0x98);
      *(float *)(puVar14 + 0x11) = fVar10;
      *(undefined4 *)((int)puVar14 + 0x8c) = *(undefined4 *)(iVar15 + 0x9c);
      *(float *)(puVar14 + 0x11) = (float)((double)fVar10 + dVar37);
      *(undefined4 *)(puVar14 + 0x12) = *(undefined4 *)(iVar15 + 0x90);
      *(undefined4 *)((int)puVar14 + 0x94) = *(undefined4 *)(iVar15 + 0x94);
      fVar10 = *(float *)(iVar15 + 0x98);
      *(float *)(puVar14 + 0x13) = fVar10;
      *(undefined4 *)((int)puVar14 + 0x9c) = *(undefined4 *)(iVar15 + 0x9c);
      *(float *)(puVar14 + 0x13) = (float)((double)fVar10 - dVar36);
      dVar29 = (double)(fVar9 * (float)((double)(float)(-(double)((fVar6 - fVar5) * fVar9 +
                                                                 (fVar42 - fVar4) * fVar8 +
                                                                 (fVar2 - fVar3) * fVar7) + dVar38)
                                       / dVar30));
      dVar33 = dVar40;
      if (dVar40 - dVar30 < 0.0) {
        dVar33 = dVar29;
      }
      if (dVar30 - dVar40 < 0.0) {
        dVar33 = dVar29;
      }
      iVar21 = CollLine(uVar17 - 0x140,uVar17 - 0x130,2,0,0);
      dVar29 = extraout_f1;
      if ((iVar21 != 0) && (dVar29 = (double)*(float *)(puVar14 + 0xf), dVar33 < dVar29)) {
        fVar42 = Delt((float)((double)g_CollOutput.ip.z + dVar38),
                                (float)((double)g_FrameTime * dVar35),
                                (float *)(puVar14 + 0xf));
        dVar29 = (double)fVar42;
      }
      uVar26 = (int)*(uint *)(iVar15 + 0x9c) >> 0x1f;
      if (((int)((uVar26 >> 1 ^ *(uint *)(iVar15 + 0x9c)) - uVar26) < 0x3f800000) ||
         (iVar21 = CollLine(dVar29,uVar22 + 0x90,uVar17 - 0x150,2,0,0), iVar21 == 0)) {
        uVar26 = (int)*(uint *)((int)puVar14 + 0x7c) >> 0x1f;
        if ((int)((uVar26 >> 1 ^ *(uint *)((int)puVar14 + 0x7c)) - uVar26) < 0x3f800000) {
          Delt((float)dVar40,(float)((double)g_FrameTime * dVar34),
                         (float *)((int)puVar14 + 0x7c));
        }
      }
      else {
        *(undefined4 *)((int)puVar14 + 0x7c) = 0x3f7ae148;
      }
      iVar20 = iVar20 + 1;
      *(undefined4 *)(iVar15 + 0x90) = *(undefined4 *)(puVar14 + 0xe);
      *(undefined4 *)(iVar15 + 0x94) = *(undefined4 *)((int)puVar14 + 0x74);
      *(undefined4 *)(iVar15 + 0x98) = *(undefined4 *)(puVar14 + 0xf);
      *(undefined4 *)(iVar15 + 0x9c) = *(undefined4 *)((int)puVar14 + 0x7c);
      uVar22 = uVar22 + 0x10;
    } while (iVar20 < 0x10);
    iVar20 = 0;
    do {
      iVar15 = (int)uVar27;
      uVar26 = (int)*(uint *)(iVar15 + 0x9c) >> 0x1f;
      if ((0x3f7fffff < (int)((uVar26 >> 1 ^ *(uint *)(iVar15 + 0x9c)) - uVar26)) &&
         (uVar26 = (int)*(uint *)(iVar15 + 0xac) >> 0x1f,
         0x3f7fffff < (int)((uVar26 >> 1 ^ *(uint *)(iVar15 + 0xac)) - uVar26))) {
        fVar42 = (param_1->pos).x;
        fVar3 = (param_1->pos).y;
        fVar4 = *(float *)(iVar15 + 0x90) - fVar42;
        fVar5 = *(float *)(iVar15 + 0x94) - fVar3;
        dVar35 = ABS((double)fVar4);
        dVar36 = ABS((double)fVar5);
        *(float *)(puVar14 + 0x1e) = fVar4;
        *(float *)((int)puVar14 + 0xf4) = fVar5;
        *(float *)(puVar14 + 0x1f) = (float)(dVar35 - dVar36);
        uVar22 = (ulonglong)(*(uint *)(puVar14 + 0x1e) >> 0x1c) & 8 |
                 (ulonglong)(*(uint *)(puVar14 + 0x1f) >> 0x1e) & 2 |
                 (ulonglong)(*(uint *)((int)puVar14 + 0xf4) >> 0x1d) & 4;
        dVar34 = ABS((double)*(float *)(puVar14 + 0x1e));
        if ((double)*(float *)(puVar14 + 0x1f) - dVar40 < 0.0) {
          dVar34 = dVar36;
        }
        fVar4 = *(float *)(&g_atanQuadrantTable + (int)(uVar22 << 2));
        dVar36 = ABS((double)*(float *)((int)puVar14 + 0xf4));
        if ((double)*(float *)(puVar14 + 0x1f) - dVar40 < 0.0) {
          dVar36 = dVar35;
        }
        fVar5 = *(float *)(((uint)(uVar22 << 2) | 0x735900) + 4);
        dVar35 = dVar40;
        if (dVar40 < dVar34) {
          lVar18 = uVar17 - 0x1b0;
          lVar23 = uVar17 - 0xa4;
          lVar24 = uVar17 - 0x94;
          lVar28 = 2;
          fVar2 = (float)(dVar36 - dVar34) / (float)(dVar36 + dVar34);
          fVar6 = fVar2 * fVar2;
          *(float *)(puVar14 + 0x25) = fVar2;
          *(float *)(puVar14 + 0x24) = fVar2;
          *(float *)((int)puVar14 + 0x124) = fVar2;
          *(float *)((int)puVar14 + 0x11c) = fVar2;
          fVar2 = fVar6 * fVar6;
          *(float *)(puVar14 + 0x24) = *(float *)(puVar14 + 0x24) * fVar6;
          *(float *)((int)puVar14 + 0x124) = *(float *)((int)puVar14 + 0x124) * fVar2;
          *(float *)(puVar14 + 0x25) = *(float *)(puVar14 + 0x25) * fVar2 * fVar6;
          do {
            *(float *)((int)lVar18 + 0x11c) = *(float *)((int)lVar18 + 0x10c) * fVar2 * fVar2;
            iVar21 = (int)lVar23;
            lVar18 = lVar18 + 8;
            lVar23 = lVar23 + 8;
            *(float *)((int)lVar24 + 4) = *(float *)(iVar21 + 4) * fVar2 * fVar2;
            lVar24 = lVar24 + 8;
            lVar28 = lVar28 + -1;
          } while (lVar28 != 0);
          lVar28 = 4;
          lVar24 = uVar17 - 0xa4;
          pfVar25 = (float *)&DAT_007358e0;
          lVar18 = lVar1;
          lVar23 = lVar24;
          do {
            fVar2 = *pfVar25;
            fVar6 = pfVar25[1];
            pfVar25 = pfVar25 + 2;
            *(float *)((int)lVar18 + 0x11c) = *(float *)((int)lVar18 + 0x11c) * fVar2;
            lVar18 = lVar18 + 8;
            *(float *)((int)lVar23 + 4) = *(float *)((int)lVar23 + 4) * fVar6;
            lVar23 = lVar23 + 8;
            lVar28 = lVar28 + -1;
          } while (lVar28 != 0);
          lVar23 = 2;
          lVar18 = lVar1;
          dVar34 = dVar40;
          do {
            iVar21 = (int)lVar18;
            lVar18 = lVar18 + 0x10;
            iVar16 = (int)lVar24;
            lVar24 = lVar24 + 0x10;
            dVar34 = (double)((float)(dVar34 + (double)*(float *)(iVar21 + 0x11c)) +
                              *(float *)(iVar16 + 4) + *(float *)(iVar16 + 8) +
                             *(float *)(iVar16 + 0xc));
            lVar23 = lVar23 + -1;
          } while (lVar23 != 0);
          dVar35 = (double)((float)(dVar34 + 0.7853981852531433) * fVar4 + fVar5);
        }
        fVar4 = (float)(dVar35 + 1.570796251296997);
        fVar5 = 3.1415925 - fVar4;
        if (fVar4 - (3.1415925 - fVar4) < 0.0) {
          fVar5 = fVar4;
        }
        fVar2 = -3.1415925 - fVar4;
        if ((-3.1415925 - fVar4) - fVar5 < 0.0) {
          fVar2 = fVar5;
        }
        fVar6 = fVar2 * fVar2;
        fVar4 = fVar6 * fVar6 * fVar2;
        fVar5 = fVar6 * fVar4;
        *(float *)(puVar14 + 0x14) =
             fVar6 * fVar5 * 2.601887e-06 +
             fVar5 * -0.0001980741 + fVar4 * 0.0083330255 + fVar6 * fVar2 * -0.16666657 + fVar2;
        fVar42 = *(float *)(iVar15 + 0x90) - fVar42;
        fVar3 = *(float *)(iVar15 + 0x94) - fVar3;
        dVar35 = ABS((double)fVar42);
        dVar36 = ABS((double)fVar3);
        *(float *)((int)puVar14 + 0xe4) = fVar42;
        *(float *)(puVar14 + 0x1d) = fVar3;
        *(float *)((int)puVar14 + 0xec) = (float)(dVar35 - dVar36);
        uVar26 = *(uint *)((int)puVar14 + 0xec);
        uVar22 = (ulonglong)(*(uint *)((int)puVar14 + 0xe4) >> 0x1c) & 8 |
                 (ulonglong)(uVar26 >> 0x1e) & 2 |
                 (ulonglong)(*(uint *)(puVar14 + 0x1d) >> 0x1d) & 4;
        dVar34 = ABS((double)*(float *)((int)puVar14 + 0xe4));
        if ((double)*(float *)((int)puVar14 + 0xec) - dVar40 < 0.0) {
          dVar34 = dVar36;
        }
        fVar3 = *(float *)(&g_atanQuadrantTable + (int)(uVar22 << 2));
        fVar42 = *(float *)(((uint)(uVar22 << 2) | 0x735900) + 4);
        dVar36 = ABS((double)*(float *)(puVar14 + 0x1d));
        if ((double)*(float *)((int)puVar14 + 0xec) - dVar40 < 0.0) {
          dVar36 = dVar35;
        }
        dVar35 = dVar40;
        if (dVar40 < dVar34) {
          lVar18 = uVar17 - 0x1b0;
          uVar26 = 2;
          lVar23 = uVar17 - 0xc4;
          lVar24 = uVar17 - 0xb4;
          lVar28 = 2;
          fVar4 = (float)(dVar36 - dVar34) / (float)(dVar36 + dVar34);
          fVar5 = fVar4 * fVar4;
          *(float *)(puVar14 + 0x21) = fVar4;
          *(float *)(puVar14 + 0x20) = fVar4;
          *(float *)((int)puVar14 + 0x104) = fVar4;
          *(float *)((int)puVar14 + 0xfc) = fVar4;
          fVar4 = fVar5 * fVar5;
          *(float *)(puVar14 + 0x20) = *(float *)(puVar14 + 0x20) * fVar5;
          *(float *)((int)puVar14 + 0x104) = *(float *)((int)puVar14 + 0x104) * fVar4;
          *(float *)(puVar14 + 0x21) = *(float *)(puVar14 + 0x21) * fVar4 * fVar5;
          do {
            *(float *)((int)lVar18 + 0xfc) = *(float *)((int)lVar18 + 0xec) * fVar4 * fVar4;
            iVar15 = (int)lVar23;
            lVar18 = lVar18 + 8;
            lVar23 = lVar23 + 8;
            *(float *)((int)lVar24 + 4) = *(float *)(iVar15 + 4) * fVar4 * fVar4;
            lVar24 = lVar24 + 8;
            lVar28 = lVar28 + -1;
          } while (lVar28 != 0);
          lVar28 = 4;
          lVar24 = uVar17 - 0xc4;
          pfVar25 = (float *)&DAT_007358e0;
          lVar18 = lVar1;
          lVar23 = lVar24;
          do {
            fVar4 = *pfVar25;
            fVar5 = pfVar25[1];
            pfVar25 = pfVar25 + 2;
            *(float *)((int)lVar18 + 0xfc) = *(float *)((int)lVar18 + 0xfc) * fVar4;
            lVar18 = lVar18 + 8;
            *(float *)((int)lVar23 + 4) = *(float *)((int)lVar23 + 4) * fVar5;
            lVar23 = lVar23 + 8;
            lVar28 = lVar28 + -1;
          } while (lVar28 != 0);
          lVar23 = 2;
          lVar18 = lVar1;
          dVar34 = dVar40;
          do {
            iVar15 = (int)lVar18;
            lVar18 = lVar18 + 0x10;
            iVar21 = (int)lVar24;
            lVar24 = lVar24 + 0x10;
            dVar34 = (double)((float)(dVar34 + (double)*(float *)(iVar15 + 0xfc)) +
                              *(float *)(iVar21 + 4) + *(float *)(iVar21 + 8) +
                             *(float *)(iVar21 + 0xc));
            lVar23 = lVar23 + -1;
          } while (lVar23 != 0);
          dVar35 = (double)((float)(dVar34 + 0.7853981852531433) * fVar3 + fVar42);
        }
        *(undefined4 *)(puVar14 + 0x15) = 0x3f800000;
        *(undefined4 *)((int)puVar14 + 0xac) = 0x45afdf66;
        dVar34 = (double)(float)(3.141592502593994 - dVar35);
        if (dVar35 - (double)(float)(3.141592502593994 - dVar35) < 0.0) {
          dVar34 = dVar35;
        }
        dVar36 = (double)(float)(-3.141592502593994 - dVar35);
        if ((double)(float)(-3.141592502593994 - dVar35) - dVar34 < 0.0) {
          dVar36 = dVar34;
        }
        dVar34 = (double)(float)(dVar36 * dVar36);
        dVar35 = (double)(float)(dVar34 * (double)(float)(dVar34 * dVar36));
        dVar38 = (double)(float)(dVar34 * dVar35);
        *(float *)((int)puVar14 + 0xa4) =
             (float)(dVar34 * dVar38) * 2.601887e-06 +
             (float)(dVar38 * -0.0001980741071747616 +
                    (double)(float)(dVar35 * 0.008333025500178337 +
                                   (double)(float)((double)(float)(dVar34 * dVar36) *
                                                   -0.16666656732559204 + dVar36)));
        SetCollDamIn(dVar37,uVar17 - 0x110,param_1,0x10001,uVar26,uVar17 - 0x120);
        *(undefined1 *)(puVar14 + 0x19) = 0;
        MVar11 = param_1->oClass;
        *(undefined1 *)((int)puVar14 + 0xc9) = 1;
        *(MOBY_OCLASSES *)((int)puVar14 + 0xca) = MVar11;
        CollLine(uVar27 + 0x90,uVar27 + 0xa0,0,param_1,uVar17 - 0x110);
      }
      iVar20 = iVar20 + 1;
      uVar27 = uVar27 + 0x10;
    } while (iVar20 < 0xf);
    RegisterMobyDraw(&PTR_M1198_001f6448_007092a0,param_1);
    M1197_001f4d90(param_1);
  }
  return;
}


// 0x01f5b64 (0x100 bytes)
void M1197_001f5b64(MobyInstance *param_1)

{
  float fVar1;
  void *pvVar2;
  int iVar3;
  int local_20;
  float local_1c;
  
  if (param_1->state != '\x04') {
    M1197_001f52a0(param_1);
    pvVar2 = param_1->pVar;
    local_1c = 0.0;
    iVar3 = MB_damage(param_1,0x10000,0);
    MB_HandleDamage(param_1,iVar3,ZEXT48(pvVar2) + 0x20,0,&local_20,&local_1c,0,4);
    if (((iVar3 == 0) || (*(int *)(iVar3 + 0x20) == 0)) ||
       (*(short *)(*(int *)(iVar3 + 0x20) + 0xa6) != 0x35b)) {
      if ((local_20 != 1) && (local_1c != 0.0)) {
        fVar1 = *(float *)((int)pvVar2 + 0x20);
        param_1->modeBits =
             param_1->modeBits &
             (MIRROR|CAN_BE_DAMAGED|HIDE_BACKFACES|DISABLE_Z_WRITE|DRAW_SHADOW|
              DRAW_TRANSPARENT_WEIRD|LOCK_ROTATION|NO_DRAW|UNK_40|HAS_SPECIAL_VARS|HAS_GLOW|
              TRANSPARENT|NO_POST_UPDATE|NO_UPDATE|DISABLED);
        *(float *)((int)pvVar2 + 0x20) = fVar1 - local_1c;
        param_1->state = '\x04';
      }
      param_1->damage = -1;
    }
  }
  return;
}


// 0x01f5ca0 (0x35c bytes)
// inlined: FastRSqrt @0x1f5d78
void M1197_001f5ca0(int param_1)

{
  float fVar1;
  int iVar2;
  int iVar3;
  float *pfVar4;
  int iVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  double dVar16;
  double dVar17;
  double dVar18;
  double dVar19;
  double dVar20;
  double dVar21;
  
  dVar20 = 0.5;
  iVar2 = *(int *)(param_1 + 0x78);
  GetGroundZ(0x3fe0000000000000,param_1 + 0x10,0);
  dVar21 = 0.0;
  dVar6 = (double)(g_CollOutput.normal.z * g_CollOutput.normal.z +
                  g_CollOutput.normal.x * g_CollOutput.normal.x +
                  g_CollOutput.normal.y * g_CollOutput.normal.y);
  if ((float)SQRT(dVar6) == 0.0) {
    *(float *)(iVar2 + 0x80) = g_CollOutput.normal.x;
    *(float *)(iVar2 + 0x84) = g_CollOutput.normal.y;
    *(float *)(iVar2 + 0x88) = g_CollOutput.normal.z;
    fVar1 = g_CollOutput.normal.w;
    *(undefined4 *)(iVar2 + 0x88) = 0;
    *(undefined4 *)(iVar2 + 0x84) = 0;
    *(undefined4 *)(iVar2 + 0x80) = 0;
  }
  else {
    dVar12 = 1.0 / SQRT(dVar6);
    dVar12 = (double)(float)(-(double)(float)((double)(float)(dVar6 * dVar12) * dVar12 - 1.0) *
                             (double)(float)(dVar20 * dVar12) + dVar12);
    dVar12 = (double)(float)(-(double)(float)((double)(float)(dVar6 * dVar12) * dVar12 - 1.0) *
                             (double)(float)(dVar20 * dVar12) + dVar12);
    fVar1 = (float)(-(double)(float)((double)(float)(dVar6 * dVar12) * dVar12 - 1.0) *
                    (double)(float)(dVar20 * dVar12) + dVar12);
    *(float *)(iVar2 + 0x80) = g_CollOutput.normal.x * fVar1;
    *(float *)(iVar2 + 0x84) = g_CollOutput.normal.y * fVar1;
    *(float *)(iVar2 + 0x88) = g_CollOutput.normal.z * fVar1;
    fVar1 = g_CollOutput.normal.w;
  }
  *(float *)(iVar2 + 0x8c) = fVar1;
  iVar5 = 0;
  *(undefined4 *)(iVar2 + 0x70) = *(undefined4 *)(param_1 + 0x10);
  *(undefined4 *)(iVar2 + 0x74) = *(undefined4 *)(param_1 + 0x14);
  fVar1 = *(float *)(param_1 + 0x18);
  *(float *)(iVar2 + 0x78) = fVar1;
  *(undefined4 *)(iVar2 + 0x7c) = *(undefined4 *)(param_1 + 0x1c);
  *(float *)(iVar2 + 0x78) = fVar1 + 0.2;
  dVar6 = 0.0625;
  dVar12 = 6.2831854820251465;
  dVar13 = 1.570796251296997;
  dVar14 = 3.141592502593994;
  dVar15 = -3.141592502593994;
  dVar16 = -0.16666656732559204;
  dVar17 = 0.008333025500178337;
  dVar18 = -0.0001980741071747616;
  dVar19 = 2.601886990305502e-06;
  do {
    dVar7 = (double)FastIntToDouble(iVar5);
    fVar1 = (float)((double)(float)(dVar7 * dVar6 - dVar20) * dVar12);
    dVar10 = (double)fVar1;
    dVar7 = (double)FastWrapRot(fVar1,*(float *)(param_1 + 0x48));
    dVar8 = (double)(float)(dVar7 + dVar13);
    dVar7 = (double)(float)(dVar14 - dVar8);
    if (dVar8 - (double)(float)(dVar14 - dVar8) < 0.0) {
      dVar7 = dVar8;
    }
    dVar11 = (double)(float)(dVar15 - dVar8);
    if ((double)(float)(dVar15 - dVar8) - dVar7 < 0.0) {
      dVar11 = dVar7;
    }
    dVar8 = (double)(float)(dVar11 * dVar11);
    dVar9 = (double)(float)(dVar8 * (double)(float)(dVar8 * dVar11));
    dVar7 = (double)(float)(dVar8 * dVar9);
    dVar11 = (double)(float)((double)(float)(dVar8 * dVar7) * dVar19 +
                            (double)(float)(dVar7 * dVar18 +
                                           (double)(float)(dVar9 * dVar17 +
                                                          (double)(float)((double)(float)(dVar8 * 
                                                  dVar11) * dVar16 + dVar11))));
    dVar8 = (double)FastWrapRot((float)dVar10,*(float *)(param_1 + 0x48));
    iVar3 = iVar5 * 0x10;
    pfVar4 = (float *)(iVar3 + iVar2 + 0x90);
    dVar7 = (double)(float)(dVar14 - dVar8);
    if (dVar8 - (double)(float)(dVar14 - dVar8) < 0.0) {
      dVar7 = dVar8;
    }
    dVar10 = (double)(float)(dVar15 - dVar8);
    if ((double)(float)(dVar15 - dVar8) - dVar7 < 0.0) {
      dVar10 = dVar7;
    }
    dVar7 = (double)(float)(dVar10 * dVar10);
    *pfVar4 = (float)(dVar11 * dVar20 + (double)*(float *)(iVar2 + 0x70));
    dVar11 = (double)(float)(dVar7 * (double)(float)(dVar7 * dVar10));
    dVar8 = (double)(float)(dVar7 * dVar11);
    pfVar4[1] = (float)((double)(float)((double)(float)(dVar7 * dVar8) * dVar19 +
                                       (double)(float)(dVar8 * dVar18 +
                                                      (double)(float)(dVar11 * dVar17 +
                                                                     (double)(float)((double)(float)
                                                  (dVar7 * dVar10) * dVar16 + dVar10)))) * dVar20 +
                       (double)*(float *)(iVar2 + 0x74));
    pfVar4[2] = *(float *)(iVar2 + 0x78);
    pfVar4[3] = *(float *)(iVar2 + 0x7c);
    dVar7 = dVar21;
    if ((iVar5 != 0) && (iVar5 != 0xf)) {
      dVar7 = 1.0;
    }
    iVar5 = iVar5 + 1;
    *(float *)(iVar3 + iVar2 + 0x9c) = (float)dVar7;
  } while (iVar5 < 0x10);
  iVar5 = FastDoubleToInt((double)(7.0 / (g_FrameTime * 2.5)));
  *(float *)(iVar2 + 0x7c) =
       (float)(longlong)(animationSpeed * (float)((double)(longlong)iVar5 + dVar20));
  return;
}


// 0x01f6028 (0x40c bytes)
/* Moby 1197 */

void UpdateMoby_1197(MobyInstance *moby)

{
  u8 uVar1;
  u8 uVar2;
  void *pvVar3;
  void *pvVar4;
  undefined4 uVar5;
  float fVar6;
  float fVar7;
  int iVar8;
  ulonglong uVar9;
  GPiece<16> auVar10;
  GPiece<16> auVar11;
  GPiece<16> auVar12;
  GPiece<16> auStack_50;
  int local_40;
  float local_3c;
  longlong local_38;
  
  pvVar3 = moby->pVar;
  uVar9 = ZEXT48(pvVar3);
  if (moby->state != '\x04') {
    M1197_001f52a0(moby);
    pvVar4 = moby->pVar;
    local_3c = 0.0;
    iVar8 = MB_damage(moby,0x10000,0);
    MB_HandleDamage(moby,iVar8,ZEXT48(pvVar4) + 0x20,0,&local_40,&local_3c,0,4);
    if (((iVar8 == 0) || (*(int *)(iVar8 + 0x20) == 0)) ||
       (*(short *)(*(int *)(iVar8 + 0x20) + 0xa6) != 0x35b)) {
      if ((local_40 != 1) && (local_3c != 0.0)) {
        *(float *)((int)pvVar4 + 0x20) = *(float *)((int)pvVar4 + 0x20) - local_3c;
        moby->state = '\x04';
        moby->modeBits =
             moby->modeBits &
             (MIRROR|CAN_BE_DAMAGED|HIDE_BACKFACES|DISABLE_Z_WRITE|DRAW_SHADOW|
              DRAW_TRANSPARENT_WEIRD|LOCK_ROTATION|NO_DRAW|UNK_40|HAS_SPECIAL_VARS|HAS_GLOW|
              TRANSPARENT|NO_POST_UPDATE|NO_UPDATE|DISABLED);
      }
      moby->damage = -1;
    }
  }
  FUN_00495490(0x4022000000000000,moby,uVar9 + 0x60);
  FastDecTimerS32(uVar9 + 100);
  uVar1 = moby->state;
  uVar2 = moby->animationId;
  if (uVar1 == '\x04') {
    MB_genericExplosion
              (0,0,0,0,0x40f86a0000000000,0xbff0000000000000,0x402e000000000000,moby,auStack_50,0,1,
               0xffffffffffffffff,10,5,4);
    MB_SpawnBoltsFromCrate(moby,0,0xffffffffffffffff);
    DeleteMoby(moby);
  }
  else if (uVar1 == '\x03') {
    if (uVar2 != '\x02') {
      local_38 = (longlong)(int)(animationSpeed * 7.5);
      MB_SetAnimation(moby,2,0,(int)(animationSpeed * 7.5));
    }
    iVar8 = MB_MayaFrameTrigger(12.0,moby);
    if (iVar8 == 0) {
      if ((moby->field43_0x70 & 2U) != 0) {
        auVar10 = ZEXT416(0xffffffff);
        auVar10 = auVar10 | auVar10 << 0x20 | auVar10 << 0x40 | auVar10 << 0x60;
        auVar11 = vectorShiftLeftIntegerWord(auVar10,auVar10);
        auVar10 = loadVectorLeftIndexed(0x14,0x1f5ffc);
        auVar10 = auVar10 >> 0x60 & (GPiece<16>)0xffffffff;
        auVar12 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
        auVar10 = vectorMultiplyAddFloatingPoint
                            (auVar12,auVar10 | auVar10 << 0x20 | auVar10 << 0x40 | auVar10 << 0x60,
                             auVar11);
        auVar10 = vectorConvertToSignedFixedPointWordSaturate(auVar10,0);
        auVar10 = auVar10 >> 0x60 & (GPiece<16>)0xffffffff;
        uVar5 = storeVectorElementWordIndexed
                          (auVar10 | auVar10 << 0x20 | auVar10 << 0x40 | auVar10 << 0x60,100,uVar9);
        *(undefined4 *)((int)pvVar3 + 100U & 0xfffffffc) = uVar5;
        moby->state = '\x01';
      }
    }
    else {
      M1197_001f5ca0(moby);
      moby->state = '\x03';
    }
  }
  else if (uVar1 == '\x02') {
    if (uVar2 != '\x01') {
      local_38 = (longlong)(int)(animationSpeed * 7.5);
      MB_SetAnimation(moby,1,0,(int)(animationSpeed * 7.5));
    }
    if (*(int *)((int)pvVar3 + 100) == 0) {
      moby->state = '\x03';
    }
  }
  else if (uVar1 == '\x01') {
    iVar8 = *(int *)((int)pvVar3 + 0x60);
    if (((iVar8 == 0) ||
        (fVar6 = (moby->pos).y - *(float *)(iVar8 + 0x14),
        fVar7 = (moby->pos).x - *(float *)(iVar8 + 0x10), 8.0 <= SQRT(fVar7 * fVar7 + fVar6 * fVar6)
        )) || (*(int *)((int)pvVar3 + 100) != 0)) {
      if (uVar2 != '\0') {
        local_38 = (longlong)(int)(animationSpeed * 7.5);
        MB_SetAnimation(moby,0,0,(int)(animationSpeed * 7.5));
      }
    }
    else {
      auVar10 = ZEXT416(0xffffffff);
      auVar10 = auVar10 | auVar10 << 0x20 | auVar10 << 0x40 | auVar10 << 0x60;
      moby->state = '\x02';
      auVar11 = vectorShiftLeftIntegerWord(auVar10,auVar10);
      auVar10 = loadVectorLeftIndexed(8,0x1f5ffc);
      auVar10 = auVar10 >> 0x60 & (GPiece<16>)0xffffffff;
      auVar12 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
      auVar10 = vectorMultiplyAddFloatingPoint
                          (auVar12,auVar10 | auVar10 << 0x20 | auVar10 << 0x40 | auVar10 << 0x60,
                           auVar11);
      auVar10 = vectorConvertToSignedFixedPointWordSaturate(auVar10,0);
      auVar10 = auVar10 >> 0x60 & (GPiece<16>)0xffffffff;
      uVar5 = storeVectorElementWordIndexed
                        (auVar10 | auVar10 << 0x20 | auVar10 << 0x40 | auVar10 << 0x60,100,uVar9);
      *(undefined4 *)((int)pvVar3 + 100U & 0xfffffffc) = uVar5;
    }
  }
  else if (uVar1 == '\0') {
    *(undefined4 *)((int)pvVar3 + 100) = 0;
    moby->state = '\x01';
  }
  return;
}


