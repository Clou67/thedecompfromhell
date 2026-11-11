// game/update/moby833.cpp -- reconstructed from NPEA00385 EBOOT
// STATUS: NOT STARTED (raw Ghidra output)
// 3 functions, 0x4804b4-0x481324
#include "game/update/moby833.h"
#include "game/camera.h"
#include "game/collproc.h"
#include "game/hero.h"
#include "game/mobyfunc.h"
#include "game/mobyproc.h"
#include "game/mobyutil.h"
#include "game/partupd.h"
#include "idol/fastfunc.h"

// 0x04804b4 (0x14 bytes)
void M833_004804b4(void)

{
  DAT_008acc8c = 0x10000;
  return;
}


// 0x04804e0 (0x390 bytes)
// inlined: FastAtan2 @0x48064c
MobyInstance *
FUN_004804e0(double param_1,double param_2,double param_3,float *param_4,f32 *param_5,float param_6,
            undefined4 param_7)

{
  float fVar1;
  f32 fVar2;
  float fVar3;
  float *pfVar4;
  float fVar5;
  float fVar6;
  undefined4 uVar7;
  ulonglong *puVar8;
  int iVar9;
  float fVar10;
  float fVar11;
  ulonglong uVar12;
  MobyInstance *pMVar14;
  longlong lVar13;
  int iVar15;
  ulonglong uVar16;
  longlong lVar17;
  longlong lVar18;
  longlong lVar19;
  float *pfVar20;
  ulonglong unaff_r28;
  ulonglong unaff_r29;
  ulonglong unaff_r30;
  ulonglong unaff_r31;
  ulonglong in_LR;
  longlong lVar21;
  ulonglong in_f29;
  ulonglong in_f30;
  ulonglong in_f31;
  GPiece<16> auVar22;
  GPiece<16> auVar23;
  GPiece<16> auVar24;
  
  uVar12 = ZEXT48(&stack0x00000000);
  lVar13 = uVar12 - 0x110;
  puVar8 = (ulonglong *)lVar13;
  *puVar8 = uVar12;
  puVar8[0x24] = in_LR;
  puVar8[0x1f] = in_f29;
  puVar8[0x20] = in_f30;
  puVar8[0x21] = in_f31;
  puVar8[0x1c] = unaff_r29;
  *(undefined4 *)(puVar8 + 0x16) = param_7;
  *(undefined4 *)((int)puVar8 + 0xb4) = param_7;
  puVar8[0x1e] = unaff_r31;
  *(undefined4 *)(puVar8 + 0x17) = param_7;
  *(undefined4 *)((int)puVar8 + 0xbc) = param_7;
  puVar8[0x1d] = unaff_r30;
  puVar8[0x1b] = unaff_r28;
  auVar24 = *(undefined1 (*) [16])(puVar8 + 0x16);
  pMVar14 = CreateMoby(ROCKET_0341);
  if (pMVar14 != (MobyInstance *)0x0) {
    pMVar14->updateDistance = -1;
    pMVar14->drawDistance = 0x7e;
    pMVar14->enabled = '\x01';
    pMVar14->state = '\x01';
    pfVar4 = (float *)pMVar14->pVar;
    (pMVar14->pos).x = *param_5;
    (pMVar14->pos).y = param_5[1];
    (pMVar14->pos).z = param_5[2];
    (pMVar14->pos).w = param_5[3];
    fVar5 = *param_4;
    fVar1 = *param_4;
    *pfVar4 = fVar1;
    fVar1 = ABS(fVar1);
    fVar6 = param_4[1];
    fVar10 = ABS(param_4[1]);
    pfVar4[1] = param_4[1];
    pfVar4[2] = param_4[2];
    pfVar4[3] = param_4[3];
    *(float *)(puVar8 + 0x10) = fVar1 - fVar10;
    fVar11 = 0.0;
    uVar16 = (ulonglong)((uint)fVar5 >> 0x1c) & 8 |
             (ulonglong)(*(uint *)(puVar8 + 0x10) >> 0x1e) & 2 |
             (ulonglong)((uint)fVar6 >> 0x1d) & 4;
    fVar5 = fVar1;
    if (*(float *)(puVar8 + 0x10) - 0.0 < 0.0) {
      fVar5 = fVar10;
    }
    fVar3 = *(float *)(&g_atanQuadrantTable + (int)(uVar16 << 2));
    fVar6 = *(float *)(((uint)(uVar16 << 2) | 0x735900) + 4);
    if (*(float *)(puVar8 + 0x10) - 0.0 < 0.0) {
      fVar10 = fVar1;
    }
    if (0.0 < fVar5) {
      lVar19 = uVar12 - 0x100;
      lVar17 = uVar12 - 0x7c;
      lVar18 = uVar12 - 0x8c;
      lVar21 = 2;
      fVar1 = (fVar10 - fVar5) / (fVar10 + fVar5);
      fVar5 = fVar1 * fVar1;
      *(float *)(puVar8 + 0x12) = fVar1;
      *(float *)(puVar8 + 0x11) = fVar1;
      *(float *)((int)puVar8 + 0x8c) = fVar1;
      *(float *)((int)puVar8 + 0x84) = fVar1;
      fVar1 = fVar5 * fVar5;
      *(float *)(puVar8 + 0x11) = *(float *)(puVar8 + 0x11) * fVar5;
      *(float *)((int)puVar8 + 0x8c) = *(float *)((int)puVar8 + 0x8c) * fVar1;
      *(float *)(puVar8 + 0x12) = *(float *)(puVar8 + 0x12) * fVar1 * fVar5;
      do {
        *(float *)((int)lVar19 + 0x84) = *(float *)((int)lVar19 + 0x74) * fVar1 * fVar1;
        iVar15 = (int)lVar18;
        lVar18 = lVar18 + 8;
        lVar19 = lVar19 + 8;
        *(float *)((int)lVar17 + 4) = *(float *)(iVar15 + 4) * fVar1 * fVar1;
        lVar17 = lVar17 + 8;
        lVar21 = lVar21 + -1;
      } while (lVar21 != 0);
      lVar19 = uVar12 - 0x8c;
      lVar21 = 4;
      pfVar20 = (float *)&DAT_007358e0;
      lVar17 = lVar19;
      lVar18 = lVar13;
      do {
        fVar1 = *pfVar20;
        fVar5 = pfVar20[1];
        pfVar20 = pfVar20 + 2;
        *(float *)((int)lVar18 + 0x84) = *(float *)((int)lVar18 + 0x84) * fVar1;
        lVar18 = lVar18 + 8;
        *(float *)((int)lVar17 + 4) = *(float *)((int)lVar17 + 4) * fVar5;
        lVar17 = lVar17 + 8;
        lVar21 = lVar21 + -1;
      } while (lVar21 != 0);
      lVar17 = 2;
      do {
        iVar15 = (int)lVar13;
        iVar9 = (int)lVar19;
        lVar13 = lVar13 + 0x10;
        lVar19 = lVar19 + 0x10;
        fVar11 = fVar11 + *(float *)(iVar15 + 0x84) + *(float *)(iVar9 + 4) + *(float *)(iVar9 + 8)
                 + *(float *)(iVar9 + 0xc);
        lVar17 = lVar17 + -1;
      } while (lVar17 != 0);
      fVar11 = (fVar11 + 0.7853982) * fVar3 + fVar6;
    }
    auVar22 = vectorConvertFromSignedFixedPointWord(auVar24,0);
    (pMVar14->rotation).z = fVar11;
    auVar24 = ZEXT416(0xffffffff);
    auVar23 = auVar24 | auVar24 << 0x20 | auVar24 << 0x40 | auVar24 << 0x60;
    auVar24 = loadVectorLeftIndexed(8,0x4804d0);
    auVar24 = auVar24 >> 0x60 & (GPiece<16>)0xffffffff;
    auVar24 = vectorAddFloatingPoint
                        (auVar22,auVar24 | auVar24 << 0x20 | auVar24 << 0x40 | auVar24 << 0x60);
    auVar22 = vectorShiftLeftIntegerWord(auVar23,auVar23);
    auVar23 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
    auVar24 = vectorMultiplyAddFloatingPoint(auVar23,auVar24,auVar22);
    auVar24 = vectorConvertToSignedFixedPointWordSaturate(auVar24,0);
    auVar24 = auVar24 >> 0x60 & (GPiece<16>)0xffffffff;
    uVar7 = storeVectorElementWordIndexed
                      (auVar24 | auVar24 << 0x20 | auVar24 << 0x40 | auVar24 << 0x60,0x14,
                       ZEXT48(pfVar4));
    *(undefined4 *)((uint)(pfVar4 + 5) & 0xfffffffc) = uVar7;
    pfVar4[4] = param_6;
    pfVar4[6] = (float)param_3;
    pfVar4[7] = (float)param_1;
    pfVar4[9] = (float)param_2;
    pfVar4[10] = 0.0;
    *(undefined4 *)(puVar8 + 0xe) = *(undefined4 *)((int)param_6 + 0x10);
    fVar2 = param_5[2];
    *(undefined4 *)((int)puVar8 + 0x74) = *(undefined4 *)((int)param_6 + 0x14);
    uVar7 = *(undefined4 *)((int)param_6 + 0x1c);
    *(f32 *)(puVar8 + 0xf) = fVar2;
    *(undefined4 *)((int)puVar8 + 0x7c) = uVar7;
    iVar15 = CollLine(uVar12 - 0xa0,param_5,2,param_6,0);
    if (iVar15 != 0) {
      pfVar4[5] = 0.0;
      (pMVar14->pos).x = g_CollOutput.ip.x;
      (pMVar14->pos).y = g_CollOutput.ip.y;
      (pMVar14->pos).z = g_CollOutput.ip.z;
      (pMVar14->pos).w = g_CollOutput.ip.w;
      pfVar4[9] = 0.0;
    }
    UpdateMobyTransform(pMVar14);
  }
  return pMVar14;
}


// 0x0480928 (0x9fc bytes)
// inlined: FastAtan2 @0x480e7c
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Moby 833 */

void UpdateMoby_833(MobyInstance *moby)

{
  longlong lVar1;
  byte bVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  f32 fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float *pfVar10;
  undefined4 uVar11;
  undefined2 uVar12;
  ulonglong *puVar13;
  int iVar14;
  MobyInstance *pMVar15;
  ulonglong uVar16;
  longlong lVar17;
  int iVar19;
  undefined8 uVar18;
  longlong lVar20;
  float *pfVar21;
  ulonglong uVar22;
  longlong lVar23;
  ulonglong unaff_r22;
  ulonglong unaff_r23;
  ulonglong unaff_r24;
  ulonglong unaff_r25;
  ulonglong unaff_r26;
  ulonglong unaff_r27;
  ulonglong unaff_r28;
  longlong lVar24;
  ulonglong unaff_r29;
  longlong lVar25;
  ulonglong unaff_r30;
  ulonglong uVar26;
  ulonglong unaff_r31;
  ulonglong in_LR;
  longlong lVar27;
  double dVar28;
  double dVar29;
  double dVar30;
  double dVar31;
  ulonglong in_f23;
  ulonglong in_f24;
  double dVar32;
  ulonglong in_f25;
  ulonglong in_f26;
  double dVar33;
  ulonglong in_f27;
  double dVar34;
  ulonglong in_f28;
  double dVar35;
  ulonglong in_f29;
  double dVar36;
  ulonglong in_f30;
  double dVar37;
  ulonglong in_f31;
  double dVar38;
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
  
  lVar17 = (longlong)(int)moby;
  uVar16 = ZEXT48(&stack0x00000000);
  lVar1 = uVar16 - 0x250;
  puVar13 = (ulonglong *)lVar1;
  *puVar13 = uVar16;
  puVar13[0x4c] = in_LR;
  puVar13[0x41] = in_f23;
  puVar13[0x42] = in_f24;
  puVar13[0x43] = in_f25;
  puVar13[0x44] = in_f26;
  puVar13[0x45] = in_f27;
  puVar13[0x46] = in_f28;
  puVar13[0x47] = in_f29;
  puVar13[0x48] = in_f30;
  puVar13[0x49] = in_f31;
  puVar13[0x40] = unaff_r31;
  bVar2 = moby->state;
  puVar13[0x3f] = unaff_r30;
  pfVar10 = (float *)moby->pVar;
  uVar26 = ZEXT48(pfVar10);
  puVar13[0x3e] = unaff_r29;
  puVar13[0x3d] = unaff_r28;
  puVar13[0x3c] = unaff_r27;
  puVar13[0x3b] = unaff_r26;
  puVar13[0x3a] = unaff_r25;
  puVar13[0x39] = unaff_r24;
  puVar13[0x38] = unaff_r23;
  puVar13[0x37] = unaff_r22;
  if (bVar2 < 2) {
    if (bVar2 != 0) {
      dVar28 = (double)FastIntToDouble((int)pfVar10[5] << 1);
      MB_getTarget((double)(float)(dVar28 * (double)pfVar10[9]),lVar17);
      fVar3 = (moby->pos).x;
      fVar4 = (moby->pos).y;
      *(float *)(puVar13 + 0xe) = fVar3;
      fVar5 = (moby->pos).z;
      *(float *)((int)puVar13 + 0x74) = fVar4;
      fVar6 = (moby->pos).w;
      *(float *)(puVar13 + 0xf) = fVar5;
      *(f32 *)((int)puVar13 + 0x7c) = fVar6;
      lVar25 = lVar17 + 0x10;
      (moby->pos).x = fVar3 + *pfVar10;
      (moby->pos).y = fVar4 + pfVar10[1];
      (moby->pos).z = fVar5 + pfVar10[2];
      fVar4 = DAT_00969e28;
      uVar11 = DAT_00969e24;
      fVar3 = DAT_00969e28 * DAT_008accb8;
      *(undefined4 *)(puVar13 + 0x14) = DAT_00969e20;
      *(undefined4 *)((int)puVar13 + 0xa4) = uVar11;
      uVar11 = DAT_00969e2c;
      *(float *)(puVar13 + 0x15) = fVar4;
      *(undefined4 *)((int)puVar13 + 0xac) = uVar11;
      *(float *)(puVar13 + 0x15) = fVar3;
      FastVecAddSelf(uVar16 - 0x1a0,lVar25,uVar16 - 0x1b0);
      (moby->rotation).z = pfVar10[7];
      dVar28 = (double)FastWrapRot((moby->rotation).x,g_FrameTime * 6.2831855);
      (moby->rotation).x = (float)dVar28;
      dVar38 = 1.570796251296997;
      dVar37 = 3.141592502593994;
      fVar3 = pfVar10[7] + 1.5707963;
      dVar36 = -3.141592502593994;
      dVar35 = -0.16666656732559204;
      dVar34 = 0.008333025500178337;
      dVar33 = -0.0001980741071747616;
      dVar28 = 2.601886990305502e-06;
      fVar4 = 3.1415925 - fVar3;
      if (fVar3 - (3.1415925 - fVar3) < 0.0) {
        fVar4 = fVar3;
      }
      fVar5 = -3.1415925 - fVar3;
      if ((-3.1415925 - fVar3) - fVar4 < 0.0) {
        fVar5 = fVar4;
      }
      fVar9 = fVar5 * fVar5;
      fVar3 = fVar9 * fVar9 * fVar5;
      fVar4 = fVar9 * fVar3;
      *(float *)(puVar13 + 0x10) =
           (fVar9 * fVar4 * 2.601887e-06 +
           fVar4 * -0.0001980741 + fVar3 * 0.0083330255 + fVar9 * fVar5 * -0.16666657 + fVar5) *
           pfVar10[9] * -0.5;
      fVar3 = pfVar10[7];
      fVar4 = 3.1415925 - fVar3;
      if (fVar3 - (3.1415925 - fVar3) < 0.0) {
        fVar4 = fVar3;
      }
      fVar5 = -3.1415925 - fVar3;
      if ((-3.1415925 - fVar3) - fVar4 < 0.0) {
        fVar5 = fVar4;
      }
      fVar9 = fVar5 * fVar5;
      fVar3 = fVar9 * fVar9 * fVar5;
      fVar4 = fVar9 * fVar3;
      *(float *)((int)puVar13 + 0x84) =
           (fVar9 * fVar4 * 2.601887e-06 +
           fVar4 * -0.0001980741 + fVar3 * 0.0083330255 + fVar9 * fVar5 * -0.16666657 + fVar5) *
           pfVar10[9] * -0.5;
      dVar32 = 0.0;
      *(undefined4 *)(puVar13 + 0x11) = 0;
      FastVecAdd(uVar16 - 400,uVar16 - 0x1d0,uVar26);
      *(undefined4 *)(puVar13 + 0x10) = *(undefined4 *)(puVar13 + 0x18);
      *(undefined4 *)((int)puVar13 + 0x84) = *(undefined4 *)((int)puVar13 + 0xc4);
      *(undefined4 *)(puVar13 + 0x11) = *(undefined4 *)(puVar13 + 0x19);
      *(undefined4 *)((int)puVar13 + 0x8c) = *(undefined4 *)((int)puVar13 + 0xcc);
      FastVecAdd(uVar16 - 0x180,uVar16 - 0x1d0,uVar16 - 0x1b0);
      *(undefined4 *)(puVar13 + 0x10) = *(undefined4 *)(puVar13 + 0x1a);
      *(undefined4 *)((int)puVar13 + 0x84) = *(undefined4 *)((int)puVar13 + 0xd4);
      *(undefined4 *)(puVar13 + 0x11) = *(undefined4 *)(puVar13 + 0x1b);
      *(undefined4 *)((int)puVar13 + 0x8c) = *(undefined4 *)((int)puVar13 + 0xdc);
      fVar3 = *pfVar10;
      dVar30 = (double)SQRT(pfVar10[2] * pfVar10[2] + fVar3 * fVar3 + pfVar10[1] * pfVar10[1]);
      if (dVar30 == dVar32) {
        *(float *)(puVar13 + 0x12) = fVar3;
        *(float *)((int)puVar13 + 0x94) = pfVar10[1];
        *(float *)(puVar13 + 0x13) = pfVar10[2];
        fVar3 = pfVar10[3];
        *(undefined4 *)(puVar13 + 0x13) = 0;
        *(undefined4 *)((int)puVar13 + 0x94) = 0;
        *(undefined4 *)(puVar13 + 0x12) = 0;
      }
      else {
        fVar4 = (float)(-0.20000000298023224 / dVar30);
        *(float *)(puVar13 + 0x12) = fVar3 * fVar4;
        *(float *)((int)puVar13 + 0x94) = pfVar10[1] * fVar4;
        *(float *)(puVar13 + 0x13) = pfVar10[2] * fVar4;
        fVar3 = pfVar10[3];
      }
      lVar24 = uVar16 - 0x1c0;
      *(float *)((int)puVar13 + 0x9c) = fVar3;
      FastVecAddSelf(uVar16 - 0x170,lVar24,lVar25);
      iVar19 = MB_randRange(0xf,0x16);
      puVar13[0x34] = (longlong)iVar19;
      dVar30 = 0.5;
      puVar13[0x34] =
           (longlong)(int)(animationSpeed * (float)((double)(longlong)puVar13[0x34] + 0.5));
      uVar11 = *(undefined4 *)((int)puVar13 + 0x1a4);
      uVar18 = MB_randRange(0x14,0x23);
      SpawnPart_4(lVar24,uVar16 - 0x1d0,0x6f00afff,0xff,uVar11,0x28,uVar18,1);
      iVar19 = MB_randRange(0x1e,0x3c);
      puVar13[0x34] = (longlong)iVar19;
      puVar13[0x34] =
           (longlong)(int)(animationSpeed * (float)((double)(longlong)puVar13[0x34] + dVar30));
      uVar11 = *(undefined4 *)((int)puVar13 + 0x1a4);
      uVar18 = MB_randRange(0x32,0x4b);
      SpawnPart_4(lVar24,uVar16 - 0x1d0,0x1fffffff,0x4f4f4f,uVar11,0x28,uVar18,0);
      fVar4 = g_FrameTime;
      fVar3 = (moby->rotation).y;
      if (*(int *)(puVar13 + 0x2c) != 0) {
        fVar5 = (moby->pos).y - *(float *)((int)puVar13 + 0x144);
        fVar9 = (moby->pos).x - *(float *)(puVar13 + 0x28);
        fVar7 = *(float *)(puVar13 + 0x29) - (moby->pos).z;
        fVar5 = SQRT(fVar9 * fVar9 + fVar5 * fVar5);
        *(float *)((int)puVar13 + 0x174) = fVar7;
        dVar31 = ABS((double)fVar7);
        dVar29 = ABS((double)fVar5);
        *(float *)(puVar13 + 0x2e) = fVar5;
        *(float *)(puVar13 + 0x2f) = (float)(dVar29 - dVar31);
        uVar22 = (ulonglong)(*(uint *)(puVar13 + 0x2e) >> 0x1c) & 8 |
                 (ulonglong)(*(uint *)(puVar13 + 0x2f) >> 0x1e) & 2 |
                 (ulonglong)(*(uint *)((int)puVar13 + 0x174) >> 0x1d) & 4;
        dVar30 = ABS((double)*(float *)(puVar13 + 0x2e));
        if ((double)*(float *)(puVar13 + 0x2f) - dVar32 < 0.0) {
          dVar30 = dVar31;
        }
        fVar9 = *(float *)(&g_atanQuadrantTable + (int)(uVar22 << 2));
        fVar5 = *(float *)(((uint)(uVar22 << 2) | 0x735900) + 4);
        dVar31 = ABS((double)*(float *)((int)puVar13 + 0x174));
        if ((double)*(float *)(puVar13 + 0x2f) - dVar32 < 0.0) {
          dVar31 = dVar29;
        }
        if (dVar32 < dVar30) {
          lVar24 = uVar16 - 0x240;
          lVar23 = uVar16 - 0xc4;
          lVar20 = uVar16 - 0xd4;
          lVar27 = 2;
          fVar7 = (float)(dVar31 - dVar30) / (float)(dVar31 + dVar30);
          fVar8 = fVar7 * fVar7;
          *(float *)(puVar13 + 0x31) = fVar7;
          *(float *)(puVar13 + 0x30) = fVar7;
          *(float *)((int)puVar13 + 0x184) = fVar7;
          *(float *)((int)puVar13 + 0x17c) = fVar7;
          fVar7 = fVar8 * fVar8;
          *(float *)(puVar13 + 0x30) = *(float *)(puVar13 + 0x30) * fVar8;
          *(float *)((int)puVar13 + 0x184) = *(float *)((int)puVar13 + 0x184) * fVar7;
          *(float *)(puVar13 + 0x31) = *(float *)(puVar13 + 0x31) * fVar7 * fVar8;
          do {
            *(float *)((int)lVar24 + 0x17c) = *(float *)((int)lVar24 + 0x16c) * fVar7 * fVar7;
            iVar19 = (int)lVar20;
            lVar20 = lVar20 + 8;
            lVar24 = lVar24 + 8;
            *(float *)((int)lVar23 + 4) = *(float *)(iVar19 + 4) * fVar7 * fVar7;
            lVar23 = lVar23 + 8;
            lVar27 = lVar27 + -1;
          } while (lVar27 != 0);
          lVar27 = 4;
          lVar23 = uVar16 - 0xd4;
          pfVar21 = (float *)&DAT_007358e0;
          lVar24 = lVar1;
          lVar20 = lVar23;
          do {
            fVar7 = *pfVar21;
            fVar8 = pfVar21[1];
            pfVar21 = pfVar21 + 2;
            *(float *)((int)lVar24 + 0x17c) = *(float *)((int)lVar24 + 0x17c) * fVar7;
            lVar24 = lVar24 + 8;
            *(float *)((int)lVar20 + 4) = *(float *)((int)lVar20 + 4) * fVar8;
            lVar20 = lVar20 + 8;
            lVar27 = lVar27 + -1;
          } while (lVar27 != 0);
          lVar20 = 2;
          lVar24 = lVar1;
          do {
            iVar19 = (int)lVar24;
            iVar14 = (int)lVar23;
            lVar24 = lVar24 + 0x10;
            lVar23 = lVar23 + 0x10;
            dVar32 = (double)((float)(dVar32 + (double)*(float *)(iVar19 + 0x17c)) +
                              *(float *)(iVar14 + 4) + *(float *)(iVar14 + 8) +
                             *(float *)(iVar14 + 0xc));
            lVar20 = lVar20 + -1;
          } while (lVar20 != 0);
          dVar32 = (double)((float)(dVar32 + 0.7853981852531433) * fVar9 + fVar5);
        }
        dVar30 = (double)MB_DeltAngSpeed
                                   ((double)fVar3,-dVar32,(double)(DAT_0071f418 * 0.7853982),
                                    (double)(DAT_0071f418 * 3.1415927),(double)(fVar4 * 0.5235988),
                                    &DAT_00480870,&DAT_00720000,uVar26 + 0x20);
        dVar32 = -dVar30;
        (moby->rotation).y = (float)dVar30;
        dVar30 = (double)(float)(dVar37 - dVar32);
        if (dVar32 - (double)(float)(dVar37 - dVar32) < 0.0) {
          dVar30 = dVar32;
        }
        dVar29 = (double)(float)(dVar36 - dVar32);
        if ((double)(float)(dVar36 - dVar32) - dVar30 < 0.0) {
          dVar29 = dVar30;
        }
        dVar30 = (double)(float)(dVar29 * dVar29);
        dVar31 = (double)(float)(dVar30 * (double)(float)(dVar30 * dVar29));
        dVar32 = (double)(float)(dVar30 * dVar31);
        (moby->pos).z =
             (float)((double)(float)(dVar30 * dVar32) * dVar28 +
                    (double)(float)(dVar32 * dVar33 +
                                   (double)(float)(dVar31 * dVar34 +
                                                  (double)(float)((double)(float)(dVar30 * dVar29) *
                                                                  dVar35 + dVar29)))) * pfVar10[9] +
             (moby->pos).z;
      }
      iVar19 = CollLine(lVar25,uVar16 - 0x1e0,0,pfVar10[4],0);
      if ((iVar19 != 0) ||
         (iVar19 = CollSphere(0x3fc99999a0000000,lVar25,&DAT_00480870,0,pfVar10[4]),
         iVar19 != 0)) {
        if (g_CollOutput.pMoby != (MobyInstance *)0x0) {
          SetCollDamIn(0x3ff0000000000000,uVar16 - 0x160,lVar17,0x10001);
          dVar30 = (double)(float)((double)pfVar10[7] + dVar38);
          auVar43 = ZEXT416(0xffffffff);
          auVar39 = auVar43 | auVar43 << 0x20 | auVar43 << 0x40 | auVar43 << 0x60;
          auVar43 = ZEXT416(0xffffffff);
          auVar46 = auVar43 | auVar43 << 0x20 | auVar43 << 0x40 | auVar43 << 0x60;
          auVar40 = vectorShiftLeftIntegerWord(auVar39,auVar39);
          auVar43 = ZEXT416(0xfffffff0);
          auVar39 = ZEXT416(0xffffffff);
          auVar39 = auVar39 | auVar39 << 0x20 | auVar39 << 0x40 | auVar39 << 0x60;
          auVar39 = vectorShiftLeftIntegerWord(auVar39,auVar39);
          dVar38 = (double)(float)(dVar37 - dVar30);
          if (dVar30 - (double)(float)(dVar37 - dVar30) < 0.0) {
            dVar38 = dVar30;
          }
          dVar37 = (double)(float)(dVar36 - dVar30);
          if ((double)(float)(dVar36 - dVar30) - dVar38 < 0.0) {
            dVar37 = dVar38;
          }
          dVar36 = (double)(float)(dVar37 * dVar37);
          dVar30 = (double)(float)(dVar36 * (double)(float)(dVar36 * dVar37));
          dVar38 = (double)(float)(dVar36 * dVar30);
          *(float *)(puVar13 + 0x1e) =
               (float)((double)(float)(dVar36 * dVar38) * dVar28 +
                      (double)(float)(dVar38 * dVar33 +
                                     (double)(float)(dVar30 * dVar34 +
                                                    (double)(float)((double)(float)(dVar36 * dVar37)
                                                                    * dVar35 + dVar37))));
          pMVar15 = g_CollOutput.pMoby;
          auVar41 = loadVectorLeftIndexed(0x1c,uVar26);
          auVar42 = loadVectorRightIndexed(0x2c,uVar26);
          auVar44 = loadVectorLeftIndexed(8,0x480870);
          auVar41 = auVar41 | auVar42;
          auVar42 = auVar44 >> 0x60 & (GPiece<16>)0xffffffff;
          auVar44 = loadVectorLeftIndexed(0xc,0x480870);
          auVar44 = auVar44 >> 0x60 & (GPiece<16>)0xffffffff;
          auVar42 = vectorSubtractFloatingPoint
                              (auVar42 | auVar42 << 0x20 | auVar42 << 0x40 | auVar42 << 0x60,auVar41
                              );
          auVar45 = vectorSubtractFloatingPoint
                              (auVar44 | auVar44 << 0x20 | auVar44 << 0x40 | auVar44 << 0x60,auVar41
                              );
          auVar44 = vectorCompareGreaterThanFloatingPoint(auVar42,auVar41);
          auVar44 = vectorConditionalSelect(auVar42,auVar41,auVar44);
          auVar42 = ZEXT416(0xffffffff);
          auVar47 = auVar42 | auVar42 << 0x20 | auVar42 << 0x40 | auVar42 << 0x60;
          auVar42 = vectorCompareGreaterThanFloatingPoint(auVar44,auVar45);
          auVar44 = vectorConditionalSelect(auVar45,auVar44,auVar42);
          auVar41 = vectorShiftLeftIntegerWord(auVar46,auVar46);
          auVar46 = ZEXT416(0xffffffff);
          auVar46 = auVar46 | auVar46 << 0x20 | auVar46 << 0x40 | auVar46 << 0x60;
          auVar45 = loadVectorLeftIndexed(0x10,0x480870);
          auVar42 = vectorMultiplyAddFloatingPoint(auVar44,auVar44,auVar40);
          auVar40 = auVar45 >> 0x60 & (GPiece<16>)0xffffffff;
          auVar45 = vectorShiftLeftIntegerWord(auVar46,auVar46);
          auVar47 = vectorShiftLeftIntegerWord(auVar47,auVar47);
          auVar46 = loadVectorLeftIndexed(0x14,0x480870);
          auVar48 = loadVectorLeftIndexed(0xa6,lVar17);
          auVar46 = auVar46 >> 0x60 & (GPiece<16>)0xffffffff;
          auVar48 = vectorShiftRightWord
                              (auVar48,auVar43 | auVar43 << 0x20 | auVar43 << 0x40 | auVar43 << 0x60
                              );
          auVar49 = loadVectorLeftIndexed(0x18,0x480870);
          auVar43 = vectorMultiplyAddFloatingPoint(auVar42,auVar44,auVar41);
          auVar41 = vectorMultiplyAddFloatingPoint(auVar42,auVar43,auVar45);
          auVar44 = vectorMultiplyAddFloatingPoint
                              (auVar43,auVar40 | auVar40 << 0x20 | auVar40 << 0x40 | auVar40 << 0x60
                               ,auVar44);
          auVar43 = auVar49 >> 0x60 & (GPiece<16>)0xffffffff;
          auVar40 = loadVectorLeftIndexed(0x1c,0x480870);
          auVar40 = auVar40 >> 0x60 & (GPiece<16>)0xffffffff;
          auVar45 = vectorMultiplyAddFloatingPoint(auVar42,auVar41,auVar47);
          auVar46 = vectorMultiplyAddFloatingPoint
                              (auVar41,auVar46 | auVar46 << 0x20 | auVar46 << 0x40 | auVar46 << 0x60
                               ,auVar44);
          auVar44 = vectorSplatHalfWord(auVar48,1);
          auVar39 = vectorMultiplyAddFloatingPoint(auVar42,auVar45,auVar39);
          auVar43 = vectorMultiplyAddFloatingPoint
                              (auVar45,auVar43 | auVar43 << 0x20 | auVar43 << 0x40 | auVar43 << 0x60
                               ,auVar46);
          auVar39 = vectorMultiplyAddFloatingPoint
                              (auVar39,auVar40 | auVar40 << 0x20 | auVar40 << 0x40 | auVar40 << 0x60
                               ,auVar43);
          auVar43 = auVar39 >> 0x60 & (GPiece<16>)0xffffffff;
          uVar11 = storeVectorElementWordIndexed
                             (auVar43 | auVar43 << 0x20 | auVar43 << 0x40 | auVar43 << 0x60,0xf4,
                              lVar1);
          *(undefined4 *)((int)puVar13 + 0xf4) = uVar11;
          *(undefined4 *)(puVar13 + 0x1f) = 0x3f800000;
          *(undefined4 *)((int)puVar13 + 0xfc) = 0x45afdf66;
          *(undefined1 *)(puVar13 + 0x21) = 1;
          *(undefined1 *)((int)puVar13 + 0x109) = 1;
          uVar12 = storeVectorElementHalfWordIndexed(auVar44,0x10a,lVar1);
          *(undefined2 *)((int)puVar13 + 0x10a) = uVar12;
          auVar43 = loadVectorLeftIndexed(0x80,0x480870);
          auVar39 = vectorPermute(auVar39,_DAT_004808c0,_DAT_004808d0);
          auVar43 = auVar43 >> 0x60 & (GPiece<16>)0xffffffff;
          auVar39 = vectorPermute(auVar39,*(undefined1 (*) [16])(puVar13 + 0x1e),_DAT_004808e0);
          auVar43 = vectorPermute(auVar48,auVar43 | auVar43 << 0x20 | auVar43 << 0x40 |
                                          auVar43 << 0x60,_DAT_00480900);
          auVar43 = vectorPermute(auVar43,*(undefined1 (*) [16])(puVar13 + 0x20),_DAT_00480910);
          *(undefined1 (*) [16])(puVar13 + 8) = auVar39;
          *(undefined4 *)((int)puVar13 + 0x6c) = *(undefined4 *)((int)puVar13 + 0x11c);
          *(undefined4 *)(puVar13 + 0xd) = *(undefined4 *)(puVar13 + 0x23);
          *(undefined4 *)((int)puVar13 + 100) = *(undefined4 *)((int)puVar13 + 0x114);
          *(undefined4 *)(puVar13 + 0xc) = *(undefined4 *)(puVar13 + 0x22);
          *(undefined1 (*) [16])(puVar13 + 10) = auVar43;
          CollDamageMobyDirect
                    (pMVar15,0x3f800000,puVar13[8],puVar13[9],puVar13[10],puVar13[0xb],puVar13[0xc],
                     puVar13[0xd]);
        }
        moby->state = '\x02';
      }
      iVar19 = FastDecTimerS32(uVar26 + 0x14);
      if (iVar19 != 0) {
        moby->state = '\x02';
      }
    }
  }
  else if (bVar2 < 3) {
    MB_SpawnExplosionSparks
              (0x3fd0000000000000,0x402a000000000000,lVar17,lVar17 + 0x10,&DAT_00480870,0);
    DeleteMoby(moby);
  }
  return;
}


