// game/update/moby1169.cpp -- reconstructed from NPEA00385 EBOOT
// STATUS: NOT STARTED (raw Ghidra output)
// 7 functions, 0x1ea390-0x1ec8ac
#include <stdio.h>
#include "game/update/moby1169.h"
#include "game/camera.h"
#include "game/collproc.h"
#include "game/draw.h"
#include "game/hero.h"
#include "game/hud.h"
#include "game/mobyfunc.h"
#include "game/mobyproc.h"
#include "game/mobyutil.h"
#include "game/space.h"
#include "game/update.h"
#include "game/update/moby880.h"
#include "idol/fastfunc.h"

// 0x01ea390 (0x50c bytes)
void M1169_001ea390(int param_1)

{
  longlong lVar1;
  float fVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int iVar5;
  ulonglong *puVar6;
  int iVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  ulonglong uVar11;
  ulonglong uVar12;
  longlong lVar13;
  uint uVar14;
  undefined4 *puVar15;
  undefined4 *puVar16;
  longlong lVar17;
  longlong lVar18;
  ulonglong unaff_r26;
  ulonglong unaff_r27;
  ulonglong unaff_r28;
  int iVar19;
  ulonglong unaff_r29;
  ulonglong unaff_r30;
  ulonglong unaff_r31;
  ulonglong in_LR;
  longlong lVar20;
  double dVar21;
  double dVar22;
  double dVar23;
  double dVar24;
  double dVar25;
  double dVar26;
  double dVar27;
  double dVar28;
  ulonglong in_f23;
  double dVar29;
  ulonglong in_f24;
  double dVar30;
  ulonglong in_f25;
  double dVar31;
  ulonglong in_f26;
  double dVar32;
  ulonglong in_f27;
  double dVar33;
  ulonglong in_f28;
  double dVar34;
  ulonglong in_f29;
  double dVar35;
  ulonglong in_f30;
  double dVar36;
  ulonglong in_f31;
  double dVar37;
  
  uVar11 = ZEXT48(&stack0x00000000);
  lVar1 = uVar11 - 0x1d0;
  puVar6 = (ulonglong *)lVar1;
  *puVar6 = uVar11;
  puVar6[0x3c] = in_LR;
  puVar6[0x31] = in_f23;
  puVar6[0x32] = in_f24;
  puVar6[0x33] = in_f25;
  puVar6[0x34] = in_f26;
  puVar6[0x35] = in_f27;
  puVar6[0x36] = in_f28;
  puVar6[0x37] = in_f29;
  puVar6[0x38] = in_f30;
  puVar6[0x39] = in_f31;
  puVar6[0x30] = unaff_r31;
  puVar6[0x2f] = unaff_r30;
  iVar5 = *(int *)(param_1 + 0x78);
  puVar6[0x2e] = unaff_r29;
  puVar6[0x2d] = unaff_r28;
  puVar6[0x2c] = unaff_r27;
  puVar6[0x2b] = unaff_r26;
  uVar12 = STUB_00502fd4_RET_0(0,0,1,1,1,0,0xff90);
  puVar6[0x26] = uVar12;
  uVar12 = FUN_00502f08(0,0,0,0,0,0);
  puVar6[0x24] = uVar12;
  uVar12 = idol_draw::PackCmd(DAT_00f08e10,DAT_00765b90,DAT_00f08e14,DAT_00765b94,DAT_00765b98);
  puVar6[0x27] = uVar12;
  uVar12 = GetEffectTex(0x15);
  puVar6[0x25] = uVar12;
  FastMtx4Identity((float *)(puVar6 + 0xe));
  lVar17 = uVar11 - 0xd0;
  lVar18 = uVar11 - 0xcc;
  puVar15 = &DAT_00765b60;
  puVar16 = &DAT_00765b64;
  lVar20 = 2;
  lVar13 = lVar1;
  do {
    uVar3 = *puVar16;
    *(undefined4 *)((int)lVar13 + 0x100) = *puVar15;
    uVar4 = puVar15[2];
    *(undefined4 *)((int)lVar13 + 0x104) = uVar3;
    uVar3 = puVar16[2];
    puVar15 = puVar15 + 4;
    *(undefined4 *)((int)lVar17 + 8) = uVar4;
    puVar16 = puVar16 + 4;
    *(undefined4 *)((int)lVar18 + 8) = uVar3;
    lVar17 = lVar17 + 0x10;
    lVar18 = lVar18 + 0x10;
    lVar13 = lVar13 + 0x10;
    lVar20 = lVar20 + -1;
  } while (lVar20 != 0);
  iVar19 = 0;
  do {
    uVar12 = (ulonglong)iVar19;
    iVar19 = iVar19 + 1;
    puVar6[0x28] = uVar12;
    uVar12 = puVar6[0x28];
    puVar6[0x28] = (longlong)iVar19;
    dVar35 = 1.570796251296997;
    dVar34 = 3.141592502593994;
    dVar33 = -3.141592502593994;
    dVar32 = -0.16666656732559204;
    dVar31 = 0.008333025500178337;
    dVar30 = -0.0001980741071747616;
    dVar29 = 2.601886990305502e-06;
    lVar20 = uVar11 - 0x120;
    uVar14 = 0;
    dVar37 = (double)((float)(longlong)uVar12 * 11.25 * 0.017453292 - 3.1415927);
    dVar36 = (double)((float)(longlong)puVar6[0x28] * 11.25 * 0.017453292 - 3.1415927);
    lVar13 = lVar1;
    lVar17 = lVar1;
    lVar18 = lVar20;
    do {
      puVar15 = (undefined4 *)lVar18;
      iVar7 = (int)lVar17;
      if (uVar14 == (((int)uVar14 >> 1) + (uint)((int)uVar14 < 0 && (uVar14 & 1) != 0)) * 2) {
        *(undefined4 *)((int)lVar13 + 0xf0) = DAT_00765b84;
        dVar22 = dVar36;
        if (uVar14 == 0) {
          dVar22 = dVar37;
        }
        fVar2 = (float)(dVar22 + 1.570796251296997);
        *puVar15 = *(undefined4 *)(iVar5 + 0x80);
        dVar24 = (double)(float)(3.141592502593994 - dVar22);
        if (dVar22 - (double)(float)(3.141592502593994 - dVar22) < 0.0) {
          dVar24 = dVar22;
        }
        fVar8 = 3.1415925 - fVar2;
        if (fVar2 - (3.1415925 - fVar2) < 0.0) {
          fVar8 = fVar2;
        }
        dVar23 = (double)(float)(-3.141592502593994 - dVar22);
        if ((double)(float)(-3.141592502593994 - dVar22) - dVar24 < 0.0) {
          dVar23 = dVar24;
        }
        puVar15[1] = *(undefined4 *)(iVar5 + 0x84);
        puVar15[2] = *(undefined4 *)(iVar5 + 0x88);
        fVar9 = -3.1415925 - fVar2;
        if ((-3.1415925 - fVar2) - fVar8 < 0.0) {
          fVar9 = fVar8;
        }
        dVar22 = (double)(float)(dVar23 * dVar23);
        puVar15[3] = *(undefined4 *)(iVar5 + 0x8c);
        fVar10 = fVar9 * fVar9;
        dVar25 = (double)(float)(dVar22 * (double)(float)(dVar22 * dVar23));
        fVar2 = fVar10 * fVar10 * fVar9;
        dVar24 = (double)(float)(dVar22 * dVar25);
        fVar8 = fVar10 * fVar2;
        fVar2 = (fVar10 * fVar8 * 2.601887e-06 +
                fVar8 * -0.0001980741 + fVar2 * 0.0083330255 + fVar10 * fVar9 * -0.16666657 + fVar9)
                * DAT_00765b9c;
        *(float *)(iVar7 + 0xb4) =
             ((float)(dVar22 * dVar24) * 2.601887e-06 +
             (float)(dVar24 * -0.0001980741071747616 +
                    (double)(float)(dVar25 * 0.008333025500178337 +
                                   (double)(float)((double)(float)(dVar22 * dVar23) *
                                                   -0.16666656732559204 + dVar23)))) * DAT_00765b9c
             + *(float *)(iVar7 + 0xb4);
        *(float *)(iVar7 + 0xb0) = fVar2 + *(float *)(iVar7 + 0xb0);
      }
      else {
        uVar3 = *(undefined4 *)(param_1 + 0x10);
        *(undefined4 *)((int)lVar13 + 0xf0) = DAT_00765b80;
        *puVar15 = uVar3;
        puVar15[1] = *(undefined4 *)(param_1 + 0x14);
        puVar15[2] = *(undefined4 *)(param_1 + 0x18);
        puVar15[3] = *(undefined4 *)(param_1 + 0x1c);
      }
      uVar14 = uVar14 + 1;
      lVar18 = lVar18 + 0x10;
      *(undefined4 *)(iVar7 + 0xbc) = 0x3f800000;
      lVar13 = lVar13 + 4;
      lVar17 = lVar17 + 0x10;
    } while ((int)uVar14 < 4);
    FastDrawQuad(uVar11 - 0x120,0,0,EffectTexHeaders,9);
    uVar3 = EffectTexHeaders;
    uVar14 = 0;
    lVar13 = lVar1;
    lVar17 = lVar1;
    do {
      puVar15 = (undefined4 *)lVar20;
      iVar7 = (int)lVar17;
      if (uVar14 == (((int)uVar14 >> 1) + (uint)((int)uVar14 < 0 && (uVar14 & 1) != 0)) * 2) {
        *(undefined4 *)((int)lVar13 + 0xf0) = DAT_00765b8c;
        dVar22 = dVar36;
        if (uVar14 == 0) {
          dVar22 = dVar37;
        }
        dVar23 = (double)(float)(dVar22 + dVar35);
        *puVar15 = *(undefined4 *)(iVar5 + 0x80);
        dVar24 = (double)(float)(dVar34 - dVar22);
        if (dVar22 - (double)(float)(dVar34 - dVar22) < 0.0) {
          dVar24 = dVar22;
        }
        dVar25 = (double)(float)(dVar34 - dVar23);
        if (dVar23 - (double)(float)(dVar34 - dVar23) < 0.0) {
          dVar25 = dVar23;
        }
        dVar21 = (double)(float)(dVar33 - dVar22);
        if ((double)(float)(dVar33 - dVar22) - dVar24 < 0.0) {
          dVar21 = dVar24;
        }
        puVar15[1] = *(undefined4 *)(iVar5 + 0x84);
        puVar15[2] = *(undefined4 *)(iVar5 + 0x88);
        dVar22 = (double)(float)(dVar33 - dVar23);
        if ((double)(float)(dVar33 - dVar23) - dVar25 < 0.0) {
          dVar22 = dVar25;
        }
        dVar24 = (double)(float)(dVar21 * dVar21);
        puVar15[3] = *(undefined4 *)(iVar5 + 0x8c);
        dVar23 = (double)(float)(dVar22 * dVar22);
        dVar27 = (double)(float)(dVar24 * (double)(float)(dVar24 * dVar21));
        dVar25 = (double)(float)(dVar23 * (double)(float)(dVar23 * dVar22));
        dVar26 = (double)(float)(dVar24 * dVar27);
        dVar28 = (double)(float)(dVar23 * dVar25);
        fVar2 = (float)((double)(float)(dVar23 * dVar28) * dVar29 +
                       (double)(float)(dVar28 * dVar30 +
                                      (double)(float)(dVar25 * dVar31 +
                                                     (double)(float)((double)(float)(dVar23 * dVar22
                                                                                    ) * dVar32 +
                                                                    dVar22)))) * DAT_00765b9c;
        *(float *)(iVar7 + 0xb4) =
             (float)((double)(float)(dVar24 * dVar26) * dVar29 +
                    (double)(float)(dVar26 * dVar30 +
                                   (double)(float)(dVar27 * dVar31 +
                                                  (double)(float)((double)(float)(dVar24 * dVar21) *
                                                                  dVar32 + dVar21)))) * DAT_00765b9c
             + *(float *)(iVar7 + 0xb4);
        *(float *)(iVar7 + 0xb0) = fVar2 + *(float *)(iVar7 + 0xb0);
      }
      else {
        *(undefined4 *)((int)lVar13 + 0xf0) = DAT_00765b88;
        *puVar15 = *(undefined4 *)(iVar5 + 0x80);
        puVar15[1] = *(undefined4 *)(iVar5 + 0x84);
        puVar15[2] = *(undefined4 *)(iVar5 + 0x88);
        puVar15[3] = *(undefined4 *)(iVar5 + 0x8c);
      }
      uVar14 = uVar14 + 1;
      lVar20 = lVar20 + 0x10;
      *(undefined4 *)(iVar7 + 0xbc) = 0x3f800000;
      lVar13 = lVar13 + 4;
      lVar17 = lVar17 + 0x10;
    } while ((int)uVar14 < 4);
    FastDrawQuad(uVar11 - 0x120,0,0,uVar3,9);
  } while (iVar19 < 0x20);
  return;
}


// 0x01ea89c (0x14 bytes)
void M1169_001ea89c(void)

{
  DAT_00765bec = 0x10000;
  return;
}


// 0x01ea8b8 (0x9c bytes)
void M1169_001ea8b8(longlong param_1)

{
  ushort uVar1;
  void *pvVar2;
  undefined4 uVar3;
  MobyInstance *pMVar4;
  undefined8 in_r0;
  ushort *puVar5;
  GPiece<16> auVar6;
  GPiece<16> auVar7;
  GPiece<16> auVar8;
  
  pMVar4 = g_MobyInstance;
  if ((int)param_1 != -1) {
    puVar5 = *(ushort **)((int)&g_MobyGroups + (int)(param_1 << 2));
    if (puVar5 != (ushort *)0x0) {
      auVar6 = ZEXT416(0xffffffff);
      auVar6 = auVar6 | auVar6 << 0x20 | auVar6 << 0x40 | auVar6 << 0x60;
      auVar7 = vectorShiftLeftIntegerWord(auVar6,auVar6);
      auVar6 = loadVectorLeftIndexed(in_r0,0x1ea8b0);
      auVar8 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
      auVar6 = auVar6 >> 0x60 & (GPiece<16>)0xffffffff;
      auVar6 = vectorMultiplyAddFloatingPoint
                         (auVar8,auVar6 | auVar6 << 0x20 | auVar6 << 0x40 | auVar6 << 0x60,auVar7);
      auVar6 = vectorConvertToSignedFixedPointWordSaturate(auVar6,0);
      auVar6 = auVar6 >> 0x60 & (GPiece<16>)0xffffffff;
      do {
        pvVar2 = pMVar4[*puVar5 & 0x7fff].pVar;
        if (pMVar4[*puVar5 & 0x7fff].oClass == 0x491) {
          uVar3 = storeVectorElementWordIndexed
                            (auVar6 | auVar6 << 0x20 | auVar6 << 0x40 | auVar6 << 0x60,400,
                             ZEXT48(pvVar2));
          *(undefined4 *)((int)pvVar2 + 400U & 0xfffffffc) = uVar3;
        }
        uVar1 = *puVar5;
        puVar5 = puVar5 + 1;
      } while (-1 < (short)uVar1);
    }
  }
  return;
}


// 0x01ea988 (0x314 bytes)
// inlined: FastAtan2 @0x1eaa6c
void M1169_001ea988(MobyInstance *param_1,float *param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  void *pvVar6;
  ulonglong *puVar7;
  float fVar8;
  int iVar9;
  int iVar10;
  float fVar11;
  float fVar12;
  ulonglong uVar13;
  ulonglong uVar14;
  longlong lVar15;
  longlong lVar16;
  longlong lVar17;
  longlong lVar18;
  float *pfVar19;
  ulonglong unaff_r29;
  ulonglong unaff_r30;
  ulonglong unaff_r31;
  ulonglong in_LR;
  longlong lVar20;
  
  uVar13 = ZEXT48(&stack0x00000000);
  lVar15 = uVar13 - 0xe0;
  puVar7 = (ulonglong *)lVar15;
  *puVar7 = uVar13;
  puVar7[0x1e] = in_LR;
  puVar7[0x1b] = unaff_r31;
  fVar1 = *param_2 - (param_1->pos).x;
  fVar3 = param_2[1] - (param_1->pos).y;
  fVar4 = ABS(fVar1);
  fVar2 = ABS(fVar3);
  *(float *)(puVar7 + 0x12) = fVar1;
  puVar7[0x1a] = unaff_r30;
  *(float *)((int)puVar7 + 0x94) = fVar3;
  pvVar6 = param_1->pVar;
  *(float *)(puVar7 + 0x13) = fVar4 - fVar2;
  fVar1 = 0.0;
  uVar14 = (ulonglong)(*(uint *)(puVar7 + 0x12) >> 0x1c) & 8 |
           (ulonglong)(*(uint *)(puVar7 + 0x13) >> 0x1e) & 2 |
           (ulonglong)(*(uint *)((int)puVar7 + 0x94) >> 0x1d) & 4;
  fVar3 = ABS(*(float *)(puVar7 + 0x12));
  if (*(float *)(puVar7 + 0x13) - 0.0 < 0.0) {
    fVar3 = fVar2;
  }
  fVar5 = *(float *)(&g_atanQuadrantTable + (int)(uVar14 << 2));
  fVar2 = *(float *)(((uint)(uVar14 << 2) | 0x735900) + 4);
  fVar8 = ABS(*(float *)((int)puVar7 + 0x94));
  if (*(float *)(puVar7 + 0x13) - 0.0 < 0.0) {
    fVar8 = fVar4;
  }
  puVar7[0x19] = unaff_r29;
  if (0.0 < fVar3) {
    lVar18 = uVar13 - 0xd0;
    lVar16 = uVar13 - 0x34;
    lVar17 = uVar13 - 0x44;
    lVar20 = 2;
    fVar3 = (fVar8 - fVar3) / (fVar8 + fVar3);
    fVar4 = fVar3 * fVar3;
    *(float *)(puVar7 + 0x15) = fVar3;
    *(float *)(puVar7 + 0x14) = fVar3;
    *(float *)((int)puVar7 + 0xa4) = fVar3;
    *(float *)((int)puVar7 + 0x9c) = fVar3;
    fVar3 = fVar4 * fVar4;
    *(float *)(puVar7 + 0x14) = *(float *)(puVar7 + 0x14) * fVar4;
    *(float *)((int)puVar7 + 0xa4) = *(float *)((int)puVar7 + 0xa4) * fVar3;
    *(float *)(puVar7 + 0x15) = *(float *)(puVar7 + 0x15) * fVar3 * fVar4;
    do {
      *(float *)((int)lVar18 + 0x9c) = *(float *)((int)lVar18 + 0x8c) * fVar3 * fVar3;
      iVar9 = (int)lVar17;
      lVar17 = lVar17 + 8;
      lVar18 = lVar18 + 8;
      *(float *)((int)lVar16 + 4) = *(float *)(iVar9 + 4) * fVar3 * fVar3;
      lVar16 = lVar16 + 8;
      lVar20 = lVar20 + -1;
    } while (lVar20 != 0);
    lVar18 = uVar13 - 0x44;
    lVar20 = 4;
    pfVar19 = (float *)&DAT_007358e0;
    lVar16 = lVar18;
    lVar17 = lVar15;
    do {
      fVar3 = *pfVar19;
      fVar4 = pfVar19[1];
      pfVar19 = pfVar19 + 2;
      *(float *)((int)lVar17 + 0x9c) = *(float *)((int)lVar17 + 0x9c) * fVar3;
      lVar17 = lVar17 + 8;
      *(float *)((int)lVar16 + 4) = *(float *)((int)lVar16 + 4) * fVar4;
      lVar16 = lVar16 + 8;
      lVar20 = lVar20 + -1;
    } while (lVar20 != 0);
    lVar16 = 2;
    do {
      iVar9 = (int)lVar15;
      iVar10 = (int)lVar18;
      lVar15 = lVar15 + 0x10;
      lVar18 = lVar18 + 0x10;
      fVar1 = fVar1 + *(float *)(iVar9 + 0x9c) + *(float *)(iVar10 + 4) + *(float *)(iVar10 + 8) +
              *(float *)(iVar10 + 0xc);
      lVar16 = lVar16 + -1;
    } while (lVar16 != 0);
    fVar1 = (fVar1 + 0.7853982) * fVar5 + fVar2;
  }
  OrganicDeltAng
            (fVar1,DAT_0071f418 * 12.566371,DAT_0071f418 * 12.566371,
             g_FrameTime * 6.2831855,&(param_1->rotation).z,0x720000,
             (float *)((int)pvVar6 + 0x188));
  fVar1 = (param_1->rotation).z;
  fVar3 = fVar1 + 1.5707963;
  fVar4 = 3.1415925 - fVar1;
  if (fVar1 - (3.1415925 - fVar1) < 0.0) {
    fVar4 = fVar1;
  }
  fVar2 = 3.1415925 - fVar3;
  if (fVar3 - (3.1415925 - fVar3) < 0.0) {
    fVar2 = fVar3;
  }
  fVar5 = -3.1415925 - fVar1;
  if ((-3.1415925 - fVar1) - fVar4 < 0.0) {
    fVar5 = fVar4;
  }
  fVar1 = -3.1415925 - fVar3;
  if ((-3.1415925 - fVar3) - fVar2 < 0.0) {
    fVar1 = fVar2;
  }
  fVar3 = fVar5 * fVar5;
  fVar4 = fVar1 * fVar1;
  fVar11 = fVar3 * fVar3 * fVar5;
  *(undefined4 *)(puVar7 + 0xf) = 0;
  fVar2 = fVar4 * fVar4 * fVar1;
  fVar12 = fVar3 * fVar11;
  fVar8 = fVar4 * fVar2;
  *(float *)((int)puVar7 + 0x74) =
       (fVar3 * fVar12 * 2.601887e-06 +
       fVar12 * -0.0001980741 + fVar11 * 0.0083330255 + fVar3 * fVar5 * -0.16666657 + fVar5) * 2.0;
  *(float *)(puVar7 + 0xe) =
       (fVar4 * fVar8 * 2.601887e-06 +
       fVar8 * -0.0001980741 + fVar2 * 0.0083330255 + fVar4 * fVar1 * -0.16666657 + fVar1) * 2.0;
  MB_UpdateNavMove
            (0x3ff0000000000000,param_1,(MobyInstance *)((int)pvVar6 + 0xc0),puVar7 + 0xe,
             puVar7 + 0x10);
  return;
}


// 0x01eaca0 (0xb0 bytes)
void M1169_001eaca0(longlong param_1)

{
  ushort uVar1;
  void *pvVar2;
  undefined4 uVar3;
  MobyInstance *pMVar4;
  undefined8 in_r0;
  ushort *puVar5;
  ulonglong uVar6;
  GPiece<16> auVar7;
  GPiece<16> auVar8;
  GPiece<16> auVar9;
  GPiece<16> auVar10;
  GPiece<16> auVar11;
  GPiece<16> auVar12;
  
  pMVar4 = g_MobyInstance;
  if ((int)param_1 != -1) {
    auVar7 = loadVectorLeftIndexed(in_r0,0x1eac9c);
    puVar5 = *(ushort **)((int)&g_MobyGroups + (int)(param_1 << 2));
    auVar7 = auVar7 >> 0x60 & (GPiece<16>)0xffffffff;
    auVar8 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
    do {
      pvVar2 = pMVar4[*puVar5 & 0x7fff].pVar;
      uVar6 = ZEXT48(pvVar2);
      if (pMVar4[*puVar5 & 0x7fff].oClass == 0x491) {
        auVar9 = loadVectorLeftIndexed(0x1a4,uVar6);
        auVar11 = loadVectorRightIndexed(0x1b4,uVar6);
        auVar10 = ZEXT416(0xffffffff);
        auVar12 = auVar10 | auVar10 << 0x20 | auVar10 << 0x40 | auVar10 << 0x60;
        auVar10 = vectorConvertFromSignedFixedPointWord(auVar9 | auVar11,0);
        auVar9 = vectorShiftLeftIntegerWord(auVar12,auVar12);
        auVar10 = vectorAddFloatingPoint
                            (auVar10,auVar7 | auVar7 << 0x20 | auVar7 << 0x40 | auVar7 << 0x60);
        auVar10 = vectorMultiplyAddFloatingPoint(auVar8,auVar10,auVar9);
        auVar10 = vectorConvertToSignedFixedPointWordSaturate(auVar10,0);
        auVar10 = auVar10 >> 0x60 & (GPiece<16>)0xffffffff;
        uVar3 = storeVectorElementWordIndexed
                          (auVar10 | auVar10 << 0x20 | auVar10 << 0x40 | auVar10 << 0x60,0x194,uVar6
                          );
        *(undefined4 *)((int)pvVar2 + 0x194U & 0xfffffffc) = uVar3;
      }
      uVar1 = *puVar5;
      puVar5 = puVar5 + 1;
    } while (-1 < (short)uVar1);
  }
  return;
}


// 0x01ead68 (0x734 bytes)
// inlined: FastAtan2 @0x1eb034, FastAtan2 @0x1eb240
void M1169_001ead68(MobyInstance *param_1)

{
  u8 uVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  MOBY_OCLASSES MVar5;
  MobyModeBit MVar6;
  void *pvVar7;
  uint uVar8;
  uint uVar9;
  Spline *pSVar10;
  undefined2 uVar11;
  ulonglong *puVar12;
  float fVar13;
  ulonglong uVar14;
  undefined4 uVar15;
  int iVar16;
  int iVar17;
  longlong lVar18;
  longlong lVar19;
  float *pfVar23;
  ulonglong uVar20;
  longlong lVar21;
  ulonglong uVar22;
  longlong lVar24;
  ulonglong unaff_r29;
  ulonglong unaff_r30;
  ulonglong uVar25;
  ulonglong unaff_r31;
  ulonglong in_LR;
  longlong lVar26;
  double dVar27;
  double dVar28;
  double dVar29;
  double dVar30;
  ulonglong in_f31;
  GPiece<16> auVar31;
  GPiece<16> auVar32;
  GPiece<16> auVar33;
  
  uVar14 = ZEXT48(&stack0x00000000);
  lVar19 = uVar14 - 0xe0;
  puVar12 = (ulonglong *)lVar19;
  *puVar12 = uVar14;
  puVar12[0x1e] = in_LR;
  puVar12[0x1b] = in_f31;
  puVar12[0x1a] = unaff_r31;
  uVar1 = param_1->state;
  puVar12[0x19] = unaff_r30;
  pvVar7 = param_1->pVar;
  uVar25 = ZEXT48(pvVar7);
  puVar12[0x18] = unaff_r29;
  if (uVar1 == '\0') {
    return;
  }
  if (*(int *)((int)pvVar7 + 400) != 0) {
    *(int *)((int)pvVar7 + 400) = *(int *)((int)pvVar7 + 400) + -1;
  }
  if (*(int *)((int)pvVar7 + 0x1a0) != 0) {
    *(int *)((int)pvVar7 + 0x1a0) = *(int *)((int)pvVar7 + 0x1a0) + -1;
  }
  if (*(int *)((int)pvVar7 + 0x194) != 0) {
    *(int *)((int)pvVar7 + 0x194) = *(int *)((int)pvVar7 + 0x194) + -1;
  }
  iVar16 = *(int *)((int)pvVar7 + 0x38);
  param_1->scale = param_1->pClass->gScale * DAT_00765c18;
  if (iVar16 != 0) {
    dVar27 = (double)MB_randRangeFloat(180.0,240.0);
    uVar15 = FastDoubleToInt((double)(float)(dVar27 * (double)animationSpeed));
    *(undefined4 *)((int)pvVar7 + 0x184) = uVar15;
    *(undefined4 *)((int)pvVar7 + 0x38) = 0;
  }
  FastDecTimerS32(uVar25 + 0x184);
  dVar27 = 0.0;
  *(undefined4 *)((int)puVar12 + 0x74) = 0;
  iVar16 = MB_damage(param_1,0x330000,0);
  if (((iVar16 != 0) && (*(int *)(iVar16 + 0x20) != 0)) &&
     ((MVar5 = *(MOBY_OCLASSES *)(*(int *)(iVar16 + 0x20) + 0xa6), MVar5 == param_1->oClass ||
      (MVar5 == (DOOR_LEFT|EXPLOSION_0070))))) {
    iVar16 = 0;
  }
  iVar17 = MB_HandleDamage
                     (param_1,iVar16,uVar25 + 0x20,0,puVar12 + 0xe,(int)puVar12 + 0x74,0,4);
  if ((*(int *)(puVar12 + 0xe) == 1) || (param_1->state == '\n')) goto LAB_001eb390;
  MVar6 = param_1->modeBits;
  fVar4 = *(float *)((int)pvVar7 + 0x20) - *(float *)((int)puVar12 + 0x74);
  *(float *)((int)pvVar7 + 0x20) = fVar4;
  if ((double)fVar4 <= dVar27) {
LAB_001eb164:
    param_1->state = '\n';
    fVar2 = g_FrameTime;
    fVar4 = DAT_00765c28 * g_FrameTime;
    param_1->modeBits =
         MVar6 & (MIRROR|CAN_BE_DAMAGED|HIDE_BACKFACES|DISABLE_Z_WRITE|DRAW_SHADOW|
                  DRAW_TRANSPARENT_WEIRD|LOCK_ROTATION|NO_DRAW|UNK_40|HAS_SPECIAL_VARS|HAS_GLOW|
                  TRANSPARENT|NO_POST_UPDATE|NO_UPDATE|DISABLED);
    *(float *)((int)pvVar7 + 0x78) = fVar4;
    fVar4 = DAT_00765c24;
    *(undefined4 *)((int)pvVar7 + 0xb0) = 0x40200000;
    *(undefined4 *)((int)pvVar7 + 0xb4) = 0x40a00000;
    *(float *)((int)pvVar7 + 0x7c) = fVar4 * fVar2;
    uVar8 = *(uint *)(iVar16 + 0x10);
    uVar9 = *(uint *)(iVar16 + 0x14);
    dVar29 = ABS((double)*(float *)(iVar16 + 0x10));
    dVar28 = ABS((double)*(float *)(iVar16 + 0x14));
    *(float *)(puVar12 + 0xf) = (float)(dVar29 - dVar28);
    uVar20 = (ulonglong)(uVar8 >> 0x1c) & 8 |
             (ulonglong)(*(uint *)(puVar12 + 0xf) >> 0x1e) & 2 | (ulonglong)(uVar9 >> 0x1d) & 4;
    uVar22 = uVar20 << 2;
    dVar30 = dVar29;
    if ((double)*(float *)(puVar12 + 0xf) - dVar27 < 0.0) {
      dVar30 = dVar28;
    }
    fVar4 = *(float *)(&g_atanQuadrantTable + (int)uVar22);
    if ((double)*(float *)(puVar12 + 0xf) - dVar27 < 0.0) {
      dVar28 = dVar29;
    }
    fVar2 = *(float *)(((uint)(uVar20 << 2) | 0x735900) + 4);
    if (dVar27 < dVar30) {
      lVar18 = uVar14 - 0xd0;
      lVar24 = uVar14 - 0x50;
      lVar21 = uVar14 - 0x60;
      lVar26 = 2;
      fVar3 = (float)(dVar28 - dVar30) / (float)(dVar28 + dVar30);
      fVar13 = fVar3 * fVar3;
      *(float *)((int)puVar12 + 0x8c) = fVar3;
      *(float *)((int)puVar12 + 0x84) = fVar3;
      *(float *)(puVar12 + 0x11) = fVar3;
      *(float *)(puVar12 + 0x10) = fVar3;
      fVar3 = fVar13 * fVar13;
      *(float *)((int)puVar12 + 0x84) = *(float *)((int)puVar12 + 0x84) * fVar13;
      *(float *)(puVar12 + 0x11) = *(float *)(puVar12 + 0x11) * fVar3;
      *(float *)((int)puVar12 + 0x8c) = *(float *)((int)puVar12 + 0x8c) * fVar3 * fVar13;
      do {
        *(float *)((int)lVar18 + 0x80) = *(float *)((int)lVar18 + 0x70) * fVar3 * fVar3;
        iVar16 = (int)lVar21;
        lVar21 = lVar21 + 8;
        lVar18 = lVar18 + 8;
        *(float *)((int)lVar24 + 4) = *(float *)(iVar16 + 4) * fVar3 * fVar3;
        lVar24 = lVar24 + 8;
        lVar26 = lVar26 + -1;
      } while (lVar26 != 0);
      lVar26 = 4;
      lVar24 = uVar14 - 0x60;
      uVar22 = ZEXT48(&DAT_007358e0);
      lVar18 = lVar19;
      lVar21 = lVar24;
      do {
        pfVar23 = (float *)uVar22;
        fVar3 = pfVar23[1];
        uVar22 = uVar22 + 8;
        *(float *)((int)lVar18 + 0x80) = *(float *)((int)lVar18 + 0x80) * *pfVar23;
        lVar18 = lVar18 + 8;
        *(float *)((int)lVar21 + 4) = *(float *)((int)lVar21 + 4) * fVar3;
        lVar21 = lVar21 + 8;
        lVar26 = lVar26 + -1;
      } while (lVar26 != 0);
      lVar18 = 2;
      do {
        iVar16 = (int)lVar19;
        iVar17 = (int)lVar24;
        lVar19 = lVar19 + 0x10;
        lVar24 = lVar24 + 0x10;
        dVar27 = (double)((float)(dVar27 + (double)*(float *)(iVar16 + 0x80)) +
                          *(float *)(iVar17 + 4) + *(float *)(iVar17 + 8) + *(float *)(iVar17 + 0xc)
                         );
        lVar18 = lVar18 + -1;
      } while (lVar18 != 0);
      dVar27 = (double)((float)(dVar27 + 0.7853981852531433) * fVar4 + fVar2);
    }
    MB_StartKick(dVar27,param_1,uVar25 + 0x60,uVar22,6,1,0);
    *(undefined1 *)((int)pvVar7 + 0x117) = 0xfa;
    MB_SpawnBoltsFromCrate(param_1,0,0xffffffffffffffff);
  }
  else if (iVar17 < 3) {
    if ((-1 < iVar17) && (0 < iVar17)) goto LAB_001eb164;
  }
  else if (iVar17 < 0xb) {
    auVar31 = ZEXT416(0xffffffff);
    auVar31 = auVar31 | auVar31 << 0x20 | auVar31 << 0x40 | auVar31 << 0x60;
    param_1->state = '\t';
    fVar2 = g_FrameTime;
    auVar32 = vectorShiftLeftIntegerWord(auVar31,auVar31);
    auVar31 = loadVectorLeftIndexed(0xc,0x1ead50);
    auVar31 = auVar31 >> 0x60 & (GPiece<16>)0xffffffff;
    auVar33 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
    auVar31 = vectorMultiplyAddFloatingPoint
                        (auVar33,auVar31 | auVar31 << 0x20 | auVar31 << 0x40 | auVar31 << 0x60,
                         auVar32);
    fVar4 = DAT_00765c20 * g_FrameTime;
    auVar31 = vectorConvertToSignedFixedPointWordSaturate(auVar31,0);
    auVar31 = vectorSplatHalfWord(auVar31,1);
    uVar11 = storeVectorElementHalfWordIndexed(auVar31,0x26,uVar25);
    *(undefined2 *)((int)pvVar7 + 0x26) = uVar11;
    *(float *)((int)pvVar7 + 0x78) = fVar4;
    fVar4 = DAT_00765c1c;
    *(undefined4 *)((int)pvVar7 + 0xb0) = 0x41700000;
    *(undefined4 *)((int)pvVar7 + 0xb4) = 0x41e80000;
    *(float *)((int)pvVar7 + 0x7c) = fVar4 * fVar2;
    uVar8 = *(uint *)(iVar16 + 0x10);
    uVar9 = *(uint *)(iVar16 + 0x14);
    dVar29 = ABS((double)*(float *)(iVar16 + 0x10));
    dVar28 = ABS((double)*(float *)(iVar16 + 0x14));
    *(float *)((int)puVar12 + 0x7c) = (float)(dVar29 - dVar28);
    uVar20 = (ulonglong)(uVar8 >> 0x1c) & 8 |
             (ulonglong)(*(uint *)((int)puVar12 + 0x7c) >> 0x1e) & 2 |
             (ulonglong)(uVar9 >> 0x1d) & 4;
    uVar22 = uVar20 << 2;
    dVar30 = dVar29;
    if ((double)*(float *)((int)puVar12 + 0x7c) - dVar27 < 0.0) {
      dVar30 = dVar28;
    }
    fVar4 = *(float *)(&g_atanQuadrantTable + (int)uVar22);
    if ((double)*(float *)((int)puVar12 + 0x7c) - dVar27 < 0.0) {
      dVar28 = dVar29;
    }
    fVar2 = *(float *)(((uint)(uVar20 << 2) | 0x735900) + 4);
    if (dVar27 < dVar30) {
      lVar18 = uVar14 - 0xd0;
      lVar21 = uVar14 - 0x40;
      lVar24 = uVar14 - 0x30;
      lVar26 = 2;
      fVar3 = (float)(dVar28 - dVar30) / (float)(dVar28 + dVar30);
      fVar13 = fVar3 * fVar3;
      *(float *)((int)puVar12 + 0xac) = fVar3;
      *(float *)((int)puVar12 + 0xa4) = fVar3;
      *(float *)(puVar12 + 0x15) = fVar3;
      *(float *)(puVar12 + 0x14) = fVar3;
      fVar3 = fVar13 * fVar13;
      *(float *)((int)puVar12 + 0xa4) = *(float *)((int)puVar12 + 0xa4) * fVar13;
      *(float *)(puVar12 + 0x15) = *(float *)(puVar12 + 0x15) * fVar3;
      *(float *)((int)puVar12 + 0xac) = *(float *)((int)puVar12 + 0xac) * fVar3 * fVar13;
      do {
        *(float *)((int)lVar18 + 0xa0) = *(float *)((int)lVar18 + 0x90) * fVar3 * fVar3;
        iVar16 = (int)lVar21;
        lVar18 = lVar18 + 8;
        lVar21 = lVar21 + 8;
        *(float *)((int)lVar24 + 4) = *(float *)(iVar16 + 4) * fVar3 * fVar3;
        lVar24 = lVar24 + 8;
        lVar26 = lVar26 + -1;
      } while (lVar26 != 0);
      lVar26 = 4;
      lVar24 = uVar14 - 0x40;
      uVar22 = ZEXT48(&DAT_007358e0);
      lVar18 = lVar19;
      lVar21 = lVar24;
      do {
        pfVar23 = (float *)uVar22;
        fVar3 = pfVar23[1];
        uVar22 = uVar22 + 8;
        *(float *)((int)lVar18 + 0xa0) = *(float *)((int)lVar18 + 0xa0) * *pfVar23;
        lVar18 = lVar18 + 8;
        *(float *)((int)lVar21 + 4) = *(float *)((int)lVar21 + 4) * fVar3;
        lVar21 = lVar21 + 8;
        lVar26 = lVar26 + -1;
      } while (lVar26 != 0);
      lVar18 = 2;
      do {
        iVar16 = (int)lVar19;
        iVar17 = (int)lVar24;
        lVar19 = lVar19 + 0x10;
        lVar24 = lVar24 + 0x10;
        dVar27 = (double)((float)(dVar27 + (double)*(float *)(iVar16 + 0xa0)) +
                          *(float *)(iVar17 + 4) + *(float *)(iVar17 + 8) + *(float *)(iVar17 + 0xc)
                         );
        lVar18 = lVar18 + -1;
      } while (lVar18 != 0);
      dVar27 = (double)((float)(dVar27 + 0.7853981852531433) * fVar4 + fVar2);
    }
    MB_StartKick(dVar27,param_1,uVar25 + 0x60,uVar22,5,1,0);
    *(undefined1 *)((int)pvVar7 + 0x117) = 0xfa;
  }
  MB_UpdateLightsTransition(param_1,uVar25 + 0x110);
LAB_001eb390:
  param_1->damage = -1;
  MB_ColorDyingMoby(param_1,uVar25 + 0x110);
  fVar4 = DAT_00765c3c;
  if (*(int *)((int)pvVar7 + 0x184) != 0) {
    fVar4 = DAT_00765c3c + 6.0;
  }
  *(float *)((int)pvVar7 + 0x180) = fVar4;
  pSVar10 = Splines[*(int *)((int)pvVar7 + 0x178)];
  iVar16 = MB_getTargetInArea
                     (param_1,uVar25 + 0x120,pSVar10,0,0,pSVar10->points,pSVar10->cnt);
  if ((iVar16 != 2) &&
     (fVar4 = (param_1->pos).y - *(float *)((int)pvVar7 + 0x124),
     fVar2 = (param_1->pos).x - *(float *)((int)pvVar7 + 0x120),
     *(float *)((int)pvVar7 + 0x180) < SQRT(fVar2 * fVar2 + fVar4 * fVar4))) {
    *(undefined4 *)((int)pvVar7 + 0x164) = 2;
  }
  if (*(int *)((int)pvVar7 + 0x160) == 0) {
    *(MobyInstance **)((int)pvVar7 + 0x160) = g_heroMobyPtr;
  }
  return;
}


// 0x01eb4f8 (0x13b4 bytes)
// inlined: FastAtan2 @0x1ebcac, FastAtan2 @0x1ec660
// strings: 006549ec: 'Footsoldier with no introPath. UID: %d\n' | 00654a14: 'FootSoldier with a intro path that has no points. UID: %d\n' | 00654a54: 'Footsoldier with no boundPath. UID: %d\n' | 00654a7c: 'FootSoldier with a bound path that has no points. UID: %d\n' | 00654abc: 'FootSoldier with no hole in ground. UID: %d\n'

/* Moby 1169 */

void UpdateMoby_1169(MobyInstance *moby)

{
  byte bVar1;
  u8 uVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  ushort uVar11;
  void *pvVar12;
  f32 fVar13;
  void *pvVar14;
  Spline *pSVar15;
  uint uVar16;
  ulonglong *puVar17;
  int iVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  Cuboid *pCVar25;
  longlong lVar26;
  int iVar31;
  undefined4 uVar32;
  ushort *puVar33;
  ulonglong uVar27;
  ulonglong uVar28;
  longlong lVar29;
  longlong lVar30;
  int iVar34;
  MobyInstance *pMVar35;
  uint uVar36;
  longlong lVar37;
  float *pfVar38;
  longlong lVar39;
  ulonglong unaff_r27;
  ulonglong unaff_r28;
  ulonglong unaff_r29;
  ulonglong unaff_r30;
  ulonglong uVar40;
  ulonglong unaff_r31;
  ulonglong in_LR;
  longlong lVar41;
  double dVar42;
  ulonglong in_f28;
  ulonglong in_f29;
  ulonglong in_f30;
  ulonglong in_f31;
  GPiece<16> auVar43;
  GPiece<16> auVar44;
  GPiece<16> auVar45;
  GPiece<16> auVar46;
  GPiece<16> auVar47;
  GPiece<16> auVar48;
  GPiece<16> auVar49;
  GPiece<16> auVar50;
  GPiece<16> auVar51;
  GPiece<16> auVar52;
  GPiece<16> auVar53;
  GPiece<16> auVar54;
  float fVar55;
  
  lVar26 = (longlong)(int)moby;
  uVar27 = ZEXT48(&stack0x00000000);
  lVar30 = uVar27 - 0x140;
  puVar17 = (ulonglong *)lVar30;
  *puVar17 = uVar27;
  puVar17[0x2a] = in_LR;
  puVar17[0x24] = in_f28;
  puVar17[0x25] = in_f29;
  puVar17[0x26] = in_f30;
  puVar17[0x27] = in_f31;
  puVar17[0x23] = unaff_r31;
  puVar17[0x22] = unaff_r30;
  puVar17[0x21] = unaff_r29;
  puVar17[0x20] = unaff_r28;
  puVar17[0x1f] = unaff_r27;
  pvVar12 = moby->pVar;
  uVar40 = ZEXT48(pvVar12);
  M1169_001ead68();
  pMVar35 = g_MobyInstance;
  bVar1 = moby->state;
  iVar31 = *(int *)((int)pvVar12 + 0x160);
  if (bVar1 < 5) {
    if (bVar1 < 2) {
      if (bVar1 == 0) {
        if (*(int *)((int)pvVar12 + 0x174) == -1) {
          printf("Footsoldier with no introPath. UID: %d\n",moby->uid);
          DeleteMoby(moby);
        }
        else if (Splines[*(int *)((int)pvVar12 + 0x174)]->cnt == 0) {
          printf("FootSoldier with a intro path that has no points. UID: %d\n",moby->uid);
          DeleteMoby(moby);
        }
        else if (*(int *)((int)pvVar12 + 0x178) == -1) {
          printf("Footsoldier with no boundPath. UID: %d\n",moby->uid);
          DeleteMoby(moby);
        }
        else if (Splines[*(int *)((int)pvVar12 + 0x178)]->cnt == 0) {
          printf("FootSoldier with a bound path that has no points. UID: %d\n",moby->uid);
          DeleteMoby(moby);
        }
        else if (*(int *)((int)pvVar12 + 0x170) == -1) {
          printf("FootSoldier with no hole in ground. UID: %d\n",moby->uid);
          DeleteMoby(moby);
        }
        else {
          iVar31 = MB_randInt(2);
          if (iVar31 != 0) {
            moby->modeBits = moby->modeBits | MIRROR;
          }
          *(undefined4 *)((int)pvVar12 + 0x20) = 0x40000000;
          *(undefined2 *)((int)pvVar12 + 0x24) = 2;
          *(undefined1 *)((int)pvVar12 + 0x28) = 1;
          MB_InitDefaultParams((float *)((int)pvVar12 + 0xc0));
          *(undefined4 *)((int)pvVar12 + 200) = 0x40000000;
          *(undefined4 *)((int)pvVar12 + 0xcc) = 0x3f000000;
          uVar32 = FastDoubleToInt((double)(DAT_00765c18 * 307.2));
          *(undefined4 *)((int)pvVar12 + 0xc0) = uVar32;
          pCVar25 = Cuboids;
          iVar31 = *(int *)((int)pvVar12 + 0x170);
          *(float *)((int)pvVar12 + 0xc4) = DAT_00765c18 * 0.3;
          *(float *)((int)pvVar12 + 0xe4) = DAT_00765c2c * g_FrameTime;
          (moby->pos).x = pCVar25[iVar31].pos.x;
          (moby->pos).y = pCVar25[iVar31].pos.y;
          fVar55 = pCVar25[iVar31].pos.z;
          (moby->pos).z = fVar55;
          (moby->pos).w = pCVar25[iVar31].pos.w;
          fVar3 = DAT_00765c40;
          moby->state = '\x01';
          (moby->pos).z = fVar55 - fVar3;
        }
      }
      else if ((*(int *)((int)pvVar12 + 0x164) != 2) && (*(int *)((int)pvVar12 + 400) == 0)) {
        auVar43 = ZEXT416(0xffffffff);
        auVar43 = auVar43 | auVar43 << 0x20 | auVar43 << 0x40 | auVar43 << 0x60;
        auVar45 = vectorShiftLeftIntegerWord(auVar43,auVar43);
        auVar44 = loadVectorLeftIndexed(0x5c38,0x760000);
        auVar43 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
        auVar44 = vectorMultiplyAddFloatingPoint(auVar44,auVar43,auVar45);
        if (((byte)moby->group != 0xffffffff) &&
           (puVar33 = (ushort *)(&g_MobyGroups)[(byte)moby->group],
           puVar33 != (ushort *)0x0)) {
          auVar45 = ZEXT416(0xffffffff);
          auVar45 = auVar45 | auVar45 << 0x20 | auVar45 << 0x40 | auVar45 << 0x60;
          auVar46 = vectorShiftLeftIntegerWord(auVar45,auVar45);
          auVar45 = loadVectorLeftIndexed(8,0x1eb49c);
          auVar45 = auVar45 >> 0x60 & (GPiece<16>)0xffffffff;
          auVar43 = vectorMultiplyAddFloatingPoint
                              (auVar43,auVar45 | auVar45 << 0x20 | auVar45 << 0x40 | auVar45 << 0x60
                               ,auVar46);
          auVar43 = vectorConvertToSignedFixedPointWordSaturate(auVar43,0);
          auVar43 = auVar43 >> 0x60 & (GPiece<16>)0xffffffff;
          do {
            if (pMVar35[*puVar33 & 0x7fff].oClass == 0x491) {
              uVar32 = storeVectorElementWordIndexed
                                 (auVar43 | auVar43 << 0x20 | auVar43 << 0x40 | auVar43 << 0x60,400,
                                  ZEXT48(pMVar35[*puVar33 & 0x7fff].pVar));
              *(undefined4 *)((int)pMVar35[*puVar33 & 0x7fff].pVar + 400U & 0xfffffffc) = uVar32;
            }
            uVar11 = *puVar33;
            puVar33 = puVar33 + 1;
          } while (-1 < (short)uVar11);
        }
        moby->state = '\x02';
        auVar43 = ZEXT416(0xffffffff);
        auVar53 = auVar43 | auVar43 << 0x20 | auVar43 << 0x40 | auVar43 << 0x60;
        pSVar15 = Splines[*(int *)((int)pvVar12 + 0x174)];
        uVar27 = ZEXT48(pSVar15);
        auVar43 = loadVectorLeftIndexed(0x10,lVar26);
        auVar45 = loadVectorLeftIndexed(0x10,uVar27);
        auVar45 = vectorSubtractFloatingPoint(auVar45,auVar43);
        auVar46 = vectorReciprocalEstimateFloatingPoint(auVar44);
        auVar43 = ZEXT416(0xffffffff);
        auVar51 = auVar43 | auVar43 << 0x20 | auVar43 << 0x40 | auVar43 << 0x60;
        auVar43 = auVar45 >> 0x60 & (GPiece<16>)0xffffffff;
        uVar32 = storeVectorElementWordIndexed
                           (auVar43 | auVar43 << 0x20 | auVar43 << 0x40 | auVar43 << 0x60,0x40,
                            uVar40);
        *(undefined4 *)((int)pvVar12 + 0x40U & 0xfffffffc) = uVar32;
        auVar43 = loadVectorLeftIndexed(0x14,uVar27);
        auVar48 = loadVectorLeftIndexed(0x14,lVar26);
        auVar47 = vectorSubtractFloatingPoint(auVar43,auVar48);
        auVar43 = ZEXT416(0xffffffff);
        auVar43 = auVar43 | auVar43 << 0x20 | auVar43 << 0x40 | auVar43 << 0x60;
        auVar48 = vectorShiftLeftIntegerWord(auVar43,auVar43);
        auVar43 = auVar47 >> 0x60 & (GPiece<16>)0xffffffff;
        uVar32 = storeVectorElementWordIndexed
                           (auVar43 | auVar43 << 0x20 | auVar43 << 0x40 | auVar43 << 0x60,0x44,
                            uVar40);
        *(undefined4 *)((int)pvVar12 + 0x44U & 0xfffffffc) = uVar32;
        auVar43 = ZEXT416(0xffffffff);
        auVar43 = auVar43 | auVar43 << 0x20 | auVar43 << 0x40 | auVar43 << 0x60;
        auVar49 = vectorShiftLeftIntegerWord(auVar43,auVar43);
        *(float *)((int)pvVar12 + 0x48) = pSVar15->points[0].z - (moby->pos).z;
        *(float *)((int)pvVar12 + 0x4c) = pSVar15->points[0].w;
        auVar43 = loadVectorLeftIndexed(0xc,0x1eb49c);
        auVar43 = auVar43 >> 0x60 & (GPiece<16>)0xffffffff;
        auVar50 = auVar43 | auVar43 << 0x20 | auVar43 << 0x40 | auVar43 << 0x60;
        auVar43 = vectorNegativeMultiplySubtractFloatingPoint(auVar46,auVar44,auVar50);
        auVar46 = vectorMultiplyAddFloatingPoint(auVar46,auVar43,auVar48);
        auVar53 = vectorShiftLeftIntegerWord(auVar53,auVar53);
        auVar51 = vectorShiftLeftIntegerWord(auVar51,auVar51);
        auVar43 = ZEXT416(0xffffffff);
        auVar43 = auVar43 | auVar43 << 0x20 | auVar43 << 0x40 | auVar43 << 0x60;
        auVar52 = vectorShiftLeftIntegerWord(auVar43,auVar43);
        auVar43 = vectorNegativeMultiplySubtractFloatingPoint(auVar46,auVar44,auVar50);
        auVar48 = vectorMultiplyAddFloatingPoint(auVar46,auVar43,auVar49);
        auVar43 = ZEXT416(0xffffffff);
        auVar46 = auVar43 | auVar43 << 0x20 | auVar43 << 0x40 | auVar43 << 0x60;
        auVar43 = ZEXT416(0xffffffff);
        auVar54 = auVar43 | auVar43 << 0x20 | auVar43 << 0x40 | auVar43 << 0x60;
        auVar43 = vectorShiftLeftIntegerWord(auVar46,auVar46);
        auVar50 = vectorNegativeMultiplySubtractFloatingPoint(auVar48,auVar44,auVar50);
        auVar46 = vectorMultiplyAddFloatingPoint(auVar44,auVar44,auVar43);
        auVar43 = ZEXT416(0xffffffff);
        auVar43 = auVar43 | auVar43 << 0x20 | auVar43 << 0x40 | auVar43 << 0x60;
        auVar49 = vectorShiftLeftIntegerWord(auVar43,auVar43);
        auVar48 = vectorMultiplyAddFloatingPoint(auVar48,auVar50,auVar51);
        auVar51 = vectorShiftLeftIntegerWord(auVar54,auVar54);
        auVar43 = vectorMultiplyAddFloatingPoint(auVar45,auVar48,auVar53);
        auVar44 = vectorMultiplyAddFloatingPoint(auVar47,auVar48,auVar52);
        auVar43 = auVar43 >> 0x60 & (GPiece<16>)0xffffffff;
        auVar44 = auVar44 >> 0x60 & (GPiece<16>)0xffffffff;
        uVar32 = storeVectorElementWordIndexed
                           (auVar43 | auVar43 << 0x20 | auVar43 << 0x40 | auVar43 << 0x60,0x40,
                            uVar40);
        *(undefined4 *)((int)pvVar12 + 0x40U & 0xfffffffc) = uVar32;
        uVar32 = storeVectorElementWordIndexed
                           (auVar44 | auVar44 << 0x20 | auVar44 << 0x40 | auVar44 << 0x60,0x44,
                            uVar40);
        *(undefined4 *)((int)pvVar12 + 0x44U & 0xfffffffc) = uVar32;
        *(undefined4 *)((int)pvVar12 + 0x48) = 0;
        auVar43 = loadVectorLeftIndexed(0x5c30,0x760000);
        auVar44 = loadVectorLeftIndexed(0xfffffffffffff418,0x720000);
        auVar47 = loadVectorLeftIndexed(0x18,lVar26);
        auVar43 = vectorMultiplyAddFloatingPoint(auVar43,auVar44,auVar51);
        auVar44 = loadVectorLeftIndexed(0x18,uVar27);
        auVar45 = loadVectorLeftIndexed(0x10,0x1eb49c);
        auVar47 = vectorSubtractFloatingPoint(auVar47,auVar44);
        auVar44 = auVar45 >> 0x60 & (GPiece<16>)0xffffffff;
        auVar45 = loadVectorLeftIndexed(0x14,0x1eb49c);
        auVar46 = vectorMultiplyAddFloatingPoint(auVar46,auVar43,auVar49);
        auVar45 = auVar45 >> 0x60 & (GPiece<16>)0xffffffff;
        auVar43 = ZEXT416(0xffffffff);
        auVar43 = auVar43 | auVar43 << 0x20 | auVar43 << 0x40 | auVar43 << 0x60;
        auVar51 = vectorShiftLeftIntegerWord(auVar43,auVar43);
        auVar43 = vectorMultiplyAddFloatingPoint
                            (auVar46,auVar44 | auVar44 << 0x20 | auVar44 << 0x40 | auVar44 << 0x60,
                             auVar47);
        auVar43 = vectorMultiplyAddFloatingPoint
                            (auVar48,auVar43 ^ (auVar45 | auVar45 << 0x20 | auVar45 << 0x40 |
                                               auVar45 << 0x60),auVar51);
        auVar43 = auVar43 >> 0x60 & (GPiece<16>)0xffffffff;
        uVar32 = storeVectorElementWordIndexed
                           (auVar43 | auVar43 << 0x20 | auVar43 << 0x40 | auVar43 << 0x60,0x48,
                            uVar40);
        *(undefined4 *)((int)pvVar12 + 0x48U & 0xfffffffc) = uVar32;
      }
    }
    else if (bVar1 < 3) {
      (moby->pos).x = (moby->pos).x + *(float *)((int)pvVar12 + 0x40);
      (moby->pos).y = (moby->pos).y + *(float *)((int)pvVar12 + 0x44);
      (moby->pos).z = (moby->pos).z + *(float *)((int)pvVar12 + 0x48);
      fVar55 = -(DAT_00765c30 * DAT_0071f418 - *(float *)((int)pvVar12 + 0x48));
      *(float *)((int)pvVar12 + 0x48) = fVar55;
      if ((fVar55 < 0.0) &&
         (fVar13 = (moby->pos).z, uVar36 = (int)fVar13 >> 0x1f,
         fVar3 = Splines[*(int *)((int)pvVar12 + 0x174)]->points[0].z,
         fVar55 = Splines[*(int *)((int)pvVar12 + 0x174)]->points[0].z, uVar16 = (int)fVar3 >> 0x1f,
         (int)((uVar36 >> 1 ^ (uint)fVar13) - uVar36) < (int)((uVar16 >> 1 ^ (uint)fVar3) - uVar16))
         ) {
        *(undefined4 *)((int)pvVar12 + 0x19c) = 0;
        (moby->pos).z = fVar55;
        moby->state = '\x03';
        if (moby->animationId != '\x04') {
          puVar17[0x1d] = (longlong)(int)(animationSpeed * 20.5);
          MB_SetAnimation(lVar26,4,0,*(undefined4 *)((int)puVar17 + 0xec));
        }
      }
    }
    else if (bVar1 < 4) {
      pSVar15 = Splines[*(int *)((int)pvVar12 + 0x174)];
      M1169_001ea988(lVar26,pSVar15->points + *(int *)((int)pvVar12 + 0x19c));
      iVar31 = *(int *)((int)pvVar12 + 0x19c);
      fVar55 = (moby->pos).y - pSVar15->points[iVar31].y;
      fVar3 = (moby->pos).x - pSVar15->points[iVar31].x;
      if (((SQRT(fVar3 * fVar3 + fVar55 * fVar55) < 0.25) &&
          (*(int *)((int)pvVar12 + 0x19c) = iVar31 + 1, iVar31 + 1 == pSVar15->cnt)) &&
         (moby->state = '\x04', moby->animationId != '\x02')) {
        puVar17[0x1d] = (longlong)(int)(animationSpeed * 20.5);
        MB_SetAnimation(lVar26,2,0,*(undefined4 *)((int)puVar17 + 0xec));
      }
    }
    else {
      fVar55 = *(float *)(iVar31 + 0x10) - (moby->pos).x;
      fVar3 = *(float *)(iVar31 + 0x14) - (moby->pos).y;
      fVar4 = ABS(fVar55);
      fVar10 = ABS(fVar3);
      *(float *)((int)puVar17 + 0x9c) = fVar55;
      *(float *)(puVar17 + 0x14) = fVar3;
      *(float *)((int)puVar17 + 0xa4) = fVar4 - fVar10;
      dVar42 = 0.0;
      uVar28 = (ulonglong)(*(uint *)((int)puVar17 + 0x9c) >> 0x1c) & 8 |
               (ulonglong)(*(uint *)((int)puVar17 + 0xa4) >> 0x1e) & 2 |
               (ulonglong)(*(uint *)(puVar17 + 0x14) >> 0x1d) & 4;
      fVar55 = ABS(*(float *)((int)puVar17 + 0x9c));
      if (*(float *)((int)puVar17 + 0xa4) - 0.0 < 0.0) {
        fVar55 = fVar10;
      }
      fVar10 = *(float *)(&g_atanQuadrantTable + (int)(uVar28 << 2));
      fVar3 = *(float *)(((uint)(uVar28 << 2) | 0x735900) + 4);
      fVar9 = ABS(*(float *)(puVar17 + 0x14));
      if (*(float *)((int)puVar17 + 0xa4) - 0.0 < 0.0) {
        fVar9 = fVar4;
      }
      if (0.0 < fVar55) {
        lVar29 = uVar27 - 0x130;
        lVar39 = uVar27 - 0x68;
        lVar37 = uVar27 - 0x78;
        lVar41 = 2;
        fVar55 = (fVar9 - fVar55) / (fVar9 + fVar55);
        fVar4 = fVar55 * fVar55;
        *(float *)((int)puVar17 + 0xd4) = fVar55;
        *(float *)((int)puVar17 + 0xcc) = fVar55;
        *(float *)(puVar17 + 0x1a) = fVar55;
        *(float *)(puVar17 + 0x19) = fVar55;
        fVar55 = fVar4 * fVar4;
        *(float *)((int)puVar17 + 0xcc) = *(float *)((int)puVar17 + 0xcc) * fVar4;
        *(float *)(puVar17 + 0x1a) = *(float *)(puVar17 + 0x1a) * fVar55;
        *(float *)((int)puVar17 + 0xd4) = *(float *)((int)puVar17 + 0xd4) * fVar55 * fVar4;
        do {
          *(float *)((int)lVar29 + 200) = *(float *)((int)lVar29 + 0xb8) * fVar55 * fVar55;
          iVar34 = (int)lVar37;
          lVar37 = lVar37 + 8;
          lVar29 = lVar29 + 8;
          *(float *)((int)lVar39 + 4) = *(float *)(iVar34 + 4) * fVar55 * fVar55;
          lVar39 = lVar39 + 8;
          lVar41 = lVar41 + -1;
        } while (lVar41 != 0);
        lVar41 = 4;
        lVar39 = uVar27 - 0x78;
        pfVar38 = (float *)&DAT_007358e0;
        lVar29 = lVar30;
        lVar37 = lVar39;
        do {
          fVar55 = *pfVar38;
          fVar4 = pfVar38[1];
          pfVar38 = pfVar38 + 2;
          *(float *)((int)lVar29 + 200) = *(float *)((int)lVar29 + 200) * fVar55;
          lVar29 = lVar29 + 8;
          *(float *)((int)lVar37 + 4) = *(float *)((int)lVar37 + 4) * fVar4;
          lVar37 = lVar37 + 8;
          lVar41 = lVar41 + -1;
        } while (lVar41 != 0);
        lVar29 = 2;
        do {
          iVar34 = (int)lVar30;
          lVar30 = lVar30 + 0x10;
          iVar18 = (int)lVar39;
          lVar39 = lVar39 + 0x10;
          dVar42 = (double)((float)(dVar42 + (double)*(float *)(iVar34 + 200)) +
                            *(float *)(iVar18 + 4) + *(float *)(iVar18 + 8) +
                           *(float *)(iVar18 + 0xc));
          lVar29 = lVar29 + -1;
        } while (lVar29 != 0);
        dVar42 = (double)((float)(dVar42 + 0.7853981852531433) * fVar10 + fVar3);
      }
      dVar42 = (double)FastDiffRots(dVar42,0x3fd0c15240000000);
      fVar55 = OrganicDeltAng
                         ((float)dVar42,DAT_0071f418 * 12.566371,DAT_0071f418 * 12.566371,
                          g_FrameTime * 6.2831855,&(moby->rotation).z,0x720000,
                          (float *)((int)pvVar12 + 0x188));
      if (*(int *)((int)pvVar12 + 0x164) == 2) {
        moby->state = '\a';
        if (moby->animationId != '\x04') {
          puVar17[0x1d] = (longlong)(int)(animationSpeed * 20.5);
          MB_SetAnimation(lVar26,4,0,*(undefined4 *)((int)puVar17 + 0xec));
        }
      }
      else if (((*(int *)((int)pvVar12 + 0x194) == 0) &&
               (iVar34 = MB_randInt((double)fVar55,4), iVar34 == 0)) &&
              ((dVar42 = (double)FastSubRots((moby->rotation).z,(float)dVar42),
               dVar42 < 0.01745329238474369 &&
               (iVar31 = MB_LineCrossesSpline
                                   (*(undefined4 *)((int)pvVar12 + 0x178),lVar26 + 0x10,
                                    iVar31 + 0x10), pMVar35 = g_MobyInstance, iVar31 == 0)))) {
        if ((byte)moby->group != 0xffffffff) {
          puVar33 = (ushort *)(&g_MobyGroups)[(byte)moby->group];
          auVar43 = loadVectorLeftIndexed(0x38,0x1eb49c);
          auVar43 = auVar43 >> 0x60 & (GPiece<16>)0xffffffff;
          auVar44 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
          do {
            pvVar14 = pMVar35[*puVar33 & 0x7fff].pVar;
            uVar27 = ZEXT48(pvVar14);
            if (pMVar35[*puVar33 & 0x7fff].oClass == 0x491) {
              auVar46 = loadVectorLeftIndexed(0x1a4,uVar27);
              auVar48 = loadVectorRightIndexed(0x1b4,uVar27);
              auVar45 = ZEXT416(0xffffffff);
              auVar47 = auVar45 | auVar45 << 0x20 | auVar45 << 0x40 | auVar45 << 0x60;
              auVar45 = vectorConvertFromSignedFixedPointWord(auVar46 | auVar48,0);
              auVar46 = vectorShiftLeftIntegerWord(auVar47,auVar47);
              auVar45 = vectorAddFloatingPoint
                                  (auVar45,auVar43 | auVar43 << 0x20 | auVar43 << 0x40 |
                                           auVar43 << 0x60);
              auVar45 = vectorMultiplyAddFloatingPoint(auVar44,auVar45,auVar46);
              auVar45 = vectorConvertToSignedFixedPointWordSaturate(auVar45,0);
              auVar45 = auVar45 >> 0x60 & (GPiece<16>)0xffffffff;
              uVar32 = storeVectorElementWordIndexed
                                 (auVar45 | auVar45 << 0x20 | auVar45 << 0x40 | auVar45 << 0x60,
                                  0x194,uVar27);
              *(undefined4 *)((int)pvVar14 + 0x194U & 0xfffffffc) = uVar32;
            }
            uVar11 = *puVar33;
            puVar33 = puVar33 + 1;
          } while (-1 < (short)uVar11);
        }
        auVar43 = ZEXT416(0xffffffff);
        auVar43 = auVar43 | auVar43 << 0x20 | auVar43 << 0x40 | auVar43 << 0x60;
        moby->state = '\x05';
        auVar44 = vectorShiftLeftIntegerWord(auVar43,auVar43);
        auVar43 = loadVectorLeftIndexed(0x3c,0x1eb49c);
        auVar43 = auVar43 >> 0x60 & (GPiece<16>)0xffffffff;
        auVar45 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
        auVar43 = vectorMultiplyAddFloatingPoint
                            (auVar45,auVar43 | auVar43 << 0x20 | auVar43 << 0x40 | auVar43 << 0x60,
                             auVar44);
        auVar43 = vectorConvertToSignedFixedPointWordSaturate(auVar43,0);
        auVar43 = auVar43 >> 0x60 & (GPiece<16>)0xffffffff;
        uVar32 = storeVectorElementWordIndexed
                           (auVar43 | auVar43 << 0x20 | auVar43 << 0x40 | auVar43 << 0x60,0x1a0,
                            uVar40);
        *(undefined4 *)((int)pvVar12 + 0x1a0U & 0xfffffffc) = uVar32;
      }
    }
  }
  else if (bVar1 == 10) {
    uVar36 = MB_UpdateKick(moby,(KickVars *)((int)pvVar12 + 0x60));
    if ((uVar36 & 0x160) != 0) {
      DeleteMoby(moby);
    }
  }
  else if (bVar1 == 9) {
    uVar36 = MB_UpdateKick(moby,(KickVars *)((int)pvVar12 + 0x60));
    if ((uVar36 & 0x40) == 0) {
      if ((uVar36 & 0x120) != 0) {
        DeleteMoby(moby);
      }
    }
    else {
      moby->state = '\x04';
      if (moby->animationId != '\x02') {
        puVar17[0x1d] = (longlong)(int)(animationSpeed * 10.5);
        MB_SetAnimation(lVar26,2,0,*(undefined4 *)((int)puVar17 + 0xec));
      }
    }
  }
  else if (bVar1 == 8) {
    (moby->pos).x = (moby->pos).x + *(float *)((int)pvVar12 + 0x40);
    (moby->pos).y = (moby->pos).y + *(float *)((int)pvVar12 + 0x44);
    (moby->pos).z = (moby->pos).z + *(float *)((int)pvVar12 + 0x48);
    fVar3 = -(DAT_00765c30 * DAT_0071f418 - *(float *)((int)pvVar12 + 0x48));
    *(float *)((int)pvVar12 + 0x48) = fVar3;
    pCVar25 = Cuboids;
    fVar55 = 0.0;
    uVar2 = moby->animationId;
    if (fVar3 < 0.0) {
      iVar31 = *(int *)((int)pvVar12 + 0x170);
      fVar3 = Cuboids[iVar31].pos.z;
      if ((moby->pos).z < fVar3 - DAT_00765c40) {
        fVar10 = Cuboids[iVar31].pos.x;
        (moby->pos).x = fVar10;
        fVar4 = pCVar25[iVar31].pos.y;
        (moby->pos).z = fVar3;
        (moby->pos).y = fVar4;
        (moby->pos).w = pCVar25[iVar31].pos.w;
        pSVar15 = Splines[*(int *)((int)pvVar12 + 0x174)];
        (moby->pos).z = fVar3 - DAT_00765c40;
        fVar10 = pSVar15->points[0].x - fVar10;
        fVar4 = pSVar15->points[0].y - fVar4;
        fVar9 = ABS(fVar10);
        fVar5 = ABS(fVar4);
        *(float *)(puVar17 + 0x12) = fVar10;
        *(float *)((int)puVar17 + 0x94) = fVar4;
        *(float *)(puVar17 + 0x13) = fVar9 - fVar5;
        uVar40 = (ulonglong)(*(uint *)(puVar17 + 0x12) >> 0x1c) & 8 |
                 (ulonglong)(*(uint *)(puVar17 + 0x13) >> 0x1e) & 2 |
                 (ulonglong)(*(uint *)((int)puVar17 + 0x94) >> 0x1d) & 4;
        fVar3 = ABS(*(float *)(puVar17 + 0x12));
        if (*(float *)(puVar17 + 0x13) - 0.0 < 0.0) {
          fVar3 = fVar5;
        }
        fVar10 = *(float *)(&g_atanQuadrantTable + (int)(uVar40 << 2));
        fVar4 = ABS(*(float *)((int)puVar17 + 0x94));
        if (*(float *)(puVar17 + 0x13) - 0.0 < 0.0) {
          fVar4 = fVar9;
        }
        fVar9 = *(float *)(((uint)(uVar40 << 2) | 0x735900) + 4);
        if (0.0 < fVar3) {
          lVar29 = uVar27 - 0x130;
          lVar39 = uVar27 - 0x88;
          lVar37 = uVar27 - 0x98;
          lVar41 = 2;
          fVar3 = (fVar4 - fVar3) / (fVar4 + fVar3);
          fVar4 = fVar3 * fVar3;
          *(float *)((int)puVar17 + 0xb4) = fVar3;
          *(float *)((int)puVar17 + 0xac) = fVar3;
          *(float *)(puVar17 + 0x16) = fVar3;
          *(float *)(puVar17 + 0x15) = fVar3;
          fVar3 = fVar4 * fVar4;
          *(float *)((int)puVar17 + 0xac) = *(float *)((int)puVar17 + 0xac) * fVar4;
          *(float *)(puVar17 + 0x16) = *(float *)(puVar17 + 0x16) * fVar3;
          *(float *)((int)puVar17 + 0xb4) = *(float *)((int)puVar17 + 0xb4) * fVar3 * fVar4;
          do {
            *(float *)((int)lVar29 + 0xa8) = *(float *)((int)lVar29 + 0x98) * fVar3 * fVar3;
            iVar31 = (int)lVar37;
            lVar37 = lVar37 + 8;
            lVar29 = lVar29 + 8;
            *(float *)((int)lVar39 + 4) = *(float *)(iVar31 + 4) * fVar3 * fVar3;
            lVar39 = lVar39 + 8;
            lVar41 = lVar41 + -1;
          } while (lVar41 != 0);
          lVar41 = 4;
          lVar39 = uVar27 - 0x98;
          pfVar38 = (float *)&DAT_007358e0;
          lVar29 = lVar30;
          lVar37 = lVar39;
          do {
            fVar3 = *pfVar38;
            fVar4 = pfVar38[1];
            pfVar38 = pfVar38 + 2;
            *(float *)((int)lVar29 + 0xa8) = *(float *)((int)lVar29 + 0xa8) * fVar3;
            lVar29 = lVar29 + 8;
            *(float *)((int)lVar37 + 4) = *(float *)((int)lVar37 + 4) * fVar4;
            lVar37 = lVar37 + 8;
            lVar41 = lVar41 + -1;
          } while (lVar41 != 0);
          lVar29 = 2;
          do {
            iVar31 = (int)lVar30;
            lVar30 = lVar30 + 0x10;
            iVar34 = (int)lVar39;
            lVar39 = lVar39 + 0x10;
            fVar55 = fVar55 + *(float *)(iVar31 + 0xa8) + *(float *)(iVar34 + 4) +
                     *(float *)(iVar34 + 8) + *(float *)(iVar34 + 0xc);
            lVar29 = lVar29 + -1;
          } while (lVar29 != 0);
          fVar55 = (fVar55 + 0.7853982) * fVar10 + fVar9;
        }
        (moby->rotation).z = fVar55;
        moby->state = '\x01';
        if (uVar2 != '\0') {
          puVar17[0x1d] = (longlong)(int)(animationSpeed * 20.5);
          MB_SetAnimation(lVar26,0,0,*(undefined4 *)((int)puVar17 + 0xec));
        }
      }
    }
  }
  else if (bVar1 == 7) {
    pSVar15 = Splines[*(int *)((int)pvVar12 + 0x174)];
    fVar55 = (moby->pos).y - pSVar15->points[0].y;
    fVar3 = (moby->pos).x - pSVar15->points[0].x;
    if (SQRT(fVar3 * fVar3 + fVar55 * fVar55) <= 0.25) {
      if (*(int *)((int)pvVar12 + 400) == 0) {
        auVar43 = ZEXT416(0xffffffff);
        auVar43 = auVar43 | auVar43 << 0x20 | auVar43 << 0x40 | auVar43 << 0x60;
        auVar45 = vectorShiftLeftIntegerWord(auVar43,auVar43);
        auVar44 = loadVectorLeftIndexed(0x5c38,0x760000);
        auVar43 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
        auVar44 = vectorMultiplyAddFloatingPoint(auVar44,auVar43,auVar45);
        if (((byte)moby->group != 0xffffffff) &&
           (puVar33 = (ushort *)(&g_MobyGroups)[(byte)moby->group],
           puVar33 != (ushort *)0x0)) {
          auVar45 = ZEXT416(0xffffffff);
          auVar45 = auVar45 | auVar45 << 0x20 | auVar45 << 0x40 | auVar45 << 0x60;
          auVar46 = vectorShiftLeftIntegerWord(auVar45,auVar45);
          auVar45 = loadVectorLeftIndexed(8,0x1eb49c);
          auVar45 = auVar45 >> 0x60 & (GPiece<16>)0xffffffff;
          auVar43 = vectorMultiplyAddFloatingPoint
                              (auVar43,auVar45 | auVar45 << 0x20 | auVar45 << 0x40 | auVar45 << 0x60
                               ,auVar46);
          auVar43 = vectorConvertToSignedFixedPointWordSaturate(auVar43,0);
          auVar43 = auVar43 >> 0x60 & (GPiece<16>)0xffffffff;
          do {
            if (pMVar35[*puVar33 & 0x7fff].oClass == 0x491) {
              uVar32 = storeVectorElementWordIndexed
                                 (auVar43 | auVar43 << 0x20 | auVar43 << 0x40 | auVar43 << 0x60,400,
                                  ZEXT48(pMVar35[*puVar33 & 0x7fff].pVar));
              *(undefined4 *)((int)pMVar35[*puVar33 & 0x7fff].pVar + 400U & 0xfffffffc) = uVar32;
            }
            uVar11 = *puVar33;
            puVar33 = puVar33 + 1;
          } while (-1 < (short)uVar11);
        }
        auVar51 = vectorReciprocalEstimateFloatingPoint(auVar44);
        auVar43 = ZEXT416(0xffffffff);
        auVar43 = auVar43 | auVar43 << 0x20 | auVar43 << 0x40 | auVar43 << 0x60;
        auVar45 = loadVectorLeftIndexed(0x10,lVar26);
        uVar27 = ZEXT48(Cuboids + *(int *)((int)pvVar12 + 0x170));
        auVar49 = vectorShiftLeftIntegerWord(auVar43,auVar43);
        auVar43 = ZEXT416(0xffffffff);
        auVar50 = auVar43 | auVar43 << 0x20 | auVar43 << 0x40 | auVar43 << 0x60;
        auVar43 = loadVectorLeftIndexed(0x30,uVar27);
        auVar45 = vectorSubtractFloatingPoint(auVar43,auVar45);
        auVar46 = loadVectorLeftIndexed(0x34,uVar27);
        auVar43 = loadVectorLeftIndexed(0x38,uVar27);
        fVar55 = Cuboids[*(int *)((int)pvVar12 + 0x170)].pos.w;
        auVar48 = loadVectorLeftIndexed(0x5c40,0x760000);
        moby->state = '\b';
        auVar47 = vectorSubtractFloatingPoint(auVar43,auVar48);
        auVar43 = auVar45 >> 0x60 & (GPiece<16>)0xffffffff;
        uVar32 = storeVectorElementWordIndexed
                           (auVar43 | auVar43 << 0x20 | auVar43 << 0x40 | auVar43 << 0x60,0x40,
                            uVar40);
        *(undefined4 *)((int)pvVar12 + 0x40U & 0xfffffffc) = uVar32;
        auVar48 = loadVectorLeftIndexed(0x14,lVar26);
        *(float *)((int)pvVar12 + 0x4c) = fVar55;
        auVar43 = loadVectorLeftIndexed(0xc,0x1eb49c);
        auVar43 = auVar43 >> 0x60 & (GPiece<16>)0xffffffff;
        auVar53 = auVar43 | auVar43 << 0x20 | auVar43 << 0x40 | auVar43 << 0x60;
        auVar48 = vectorSubtractFloatingPoint(auVar46,auVar48);
        auVar50 = vectorShiftLeftIntegerWord(auVar50,auVar50);
        auVar46 = vectorNegativeMultiplySubtractFloatingPoint(auVar51,auVar44,auVar53);
        auVar43 = ZEXT416(0xffffffff);
        auVar54 = auVar43 | auVar43 << 0x20 | auVar43 << 0x40 | auVar43 << 0x60;
        auVar46 = vectorMultiplyAddFloatingPoint(auVar51,auVar46,auVar49);
        auVar43 = ZEXT416(0xffffffff);
        auVar51 = auVar43 | auVar43 << 0x20 | auVar43 << 0x40 | auVar43 << 0x60;
        auVar43 = ZEXT416(0xffffffff);
        auVar43 = auVar43 | auVar43 << 0x20 | auVar43 << 0x40 | auVar43 << 0x60;
        auVar49 = vectorShiftLeftIntegerWord(auVar51,auVar51);
        auVar52 = vectorShiftLeftIntegerWord(auVar43,auVar43);
        auVar43 = vectorNegativeMultiplySubtractFloatingPoint(auVar46,auVar44,auVar53);
        auVar51 = vectorMultiplyAddFloatingPoint(auVar46,auVar43,auVar50);
        auVar50 = vectorShiftLeftIntegerWord(auVar54,auVar54);
        auVar53 = vectorNegativeMultiplySubtractFloatingPoint(auVar51,auVar44,auVar53);
        auVar43 = ZEXT416(0xffffffff);
        auVar43 = auVar43 | auVar43 << 0x20 | auVar43 << 0x40 | auVar43 << 0x60;
        auVar43 = vectorShiftLeftIntegerWord(auVar43,auVar43);
        auVar46 = vectorMultiplyAddFloatingPoint(auVar44,auVar44,auVar43);
        auVar51 = vectorMultiplyAddFloatingPoint(auVar51,auVar53,auVar49);
        auVar43 = ZEXT416(0xffffffff);
        auVar44 = auVar43 | auVar43 << 0x20 | auVar43 << 0x40 | auVar43 << 0x60;
        auVar43 = ZEXT416(0xffffffff);
        auVar53 = auVar43 | auVar43 << 0x20 | auVar43 << 0x40 | auVar43 << 0x60;
        auVar49 = vectorShiftLeftIntegerWord(auVar44,auVar44);
        auVar43 = vectorMultiplyAddFloatingPoint(auVar45,auVar51,auVar52);
        auVar44 = vectorMultiplyAddFloatingPoint(auVar48,auVar51,auVar50);
        auVar50 = vectorShiftLeftIntegerWord(auVar53,auVar53);
        auVar43 = auVar43 >> 0x60 & (GPiece<16>)0xffffffff;
        auVar44 = auVar44 >> 0x60 & (GPiece<16>)0xffffffff;
        uVar32 = storeVectorElementWordIndexed
                           (auVar43 | auVar43 << 0x20 | auVar43 << 0x40 | auVar43 << 0x60,0x40,
                            uVar40);
        *(undefined4 *)((int)pvVar12 + 0x40U & 0xfffffffc) = uVar32;
        uVar32 = storeVectorElementWordIndexed
                           (auVar44 | auVar44 << 0x20 | auVar44 << 0x40 | auVar44 << 0x60,0x44,
                            uVar40);
        *(undefined4 *)((int)pvVar12 + 0x44U & 0xfffffffc) = uVar32;
        *(undefined4 *)((int)pvVar12 + 0x48) = 0;
        auVar43 = loadVectorLeftIndexed(0x5c30,0x760000);
        auVar44 = loadVectorLeftIndexed(0xfffffffffffff418,0x720000);
        auVar48 = loadVectorLeftIndexed(0x18,lVar26);
        auVar45 = vectorMultiplyAddFloatingPoint(auVar43,auVar44,auVar49);
        auVar48 = vectorSubtractFloatingPoint(auVar48,auVar47);
        auVar43 = loadVectorLeftIndexed(0x10,0x1eb49c);
        auVar47 = loadVectorLeftIndexed(0x14,0x1eb49c);
        auVar44 = auVar43 >> 0x60 & (GPiece<16>)0xffffffff;
        auVar43 = ZEXT416(0xffffffff);
        auVar49 = auVar43 | auVar43 << 0x20 | auVar43 << 0x40 | auVar43 << 0x60;
        auVar43 = auVar47 >> 0x60 & (GPiece<16>)0xffffffff;
        auVar45 = vectorMultiplyAddFloatingPoint(auVar46,auVar45,auVar50);
        auVar46 = vectorShiftLeftIntegerWord(auVar49,auVar49);
        auVar44 = vectorMultiplyAddFloatingPoint
                            (auVar45,auVar44 | auVar44 << 0x20 | auVar44 << 0x40 | auVar44 << 0x60,
                             auVar48);
        auVar43 = vectorMultiplyAddFloatingPoint
                            (auVar51,auVar44 ^ (auVar43 | auVar43 << 0x20 | auVar43 << 0x40 |
                                               auVar43 << 0x60),auVar46);
        auVar43 = auVar43 >> 0x60 & (GPiece<16>)0xffffffff;
        uVar32 = storeVectorElementWordIndexed
                           (auVar43 | auVar43 << 0x20 | auVar43 << 0x40 | auVar43 << 0x60,0x48,
                            uVar40);
        *(undefined4 *)((int)pvVar12 + 0x48U & 0xfffffffc) = uVar32;
      }
      else if (moby->animationId != '\0') {
        puVar17[0x1d] = (longlong)(int)(animationSpeed * 20.5);
        MB_SetAnimation(lVar26,0,0,*(undefined4 *)((int)puVar17 + 0xec));
      }
    }
    else {
      M1169_001ea988(lVar26,pSVar15->points);
      if (*(int *)((int)pvVar12 + 0x164) != 2) {
        *(int32_t *)((int)pvVar12 + 0x19c) = Splines[*(int *)((int)pvVar12 + 0x174)]->cnt + -1;
        moby->state = '\x03';
      }
    }
  }
  else if (bVar1 == 5) {
    if (*(int *)((int)pvVar12 + 0x1a0) == 0) {
      moby->state = '\x04';
    }
    else {
      dVar42 = (double)FastWrapRot
                                 ((moby->rotation).z,(30.0 / (animationSpeed * 90.0)) * 0.017453292)
      ;
      (moby->rotation).z = (float)dVar42;
      fVar9 = DAT_00765c10;
      fVar4 = g_FrameTime;
      fVar55 = (moby->pos).x;
      fVar3 = (moby->pos).y;
      fVar10 = (moby->pos).z;
      if (worldUpdateTime ==
          (((int)worldUpdateTime >> 2) +
          (uint)((int)worldUpdateTime < 0 && (worldUpdateTime & 3) != 0)) * 4) {
        fVar5 = (moby->transform).v0.y;
        fVar6 = (moby->transform).v0.x;
        fVar7 = (moby->transform).v0.z;
        fVar23 = 0.0;
        fVar22 = SQRT(fVar7 * fVar7 + fVar6 * fVar6 + fVar5 * fVar5);
        if (fVar22 == 0.0) {
          fVar8 = (moby->transform).v0.w;
          fVar21 = fVar23;
          fVar19 = fVar23;
          fVar20 = fVar23;
        }
        else {
          fVar20 = 0.75 / fVar22;
          fVar8 = (moby->transform).v0.w;
          fVar21 = fVar6 * fVar20;
          fVar19 = fVar5 * fVar20;
          fVar20 = fVar7 * fVar20;
        }
        fVar24 = DAT_00765c10 * g_FrameTime;
        *(float *)((int)puVar17 + 0x7c) = fVar8;
        *(float *)(puVar17 + 0xe) = fVar21 + fVar55;
        fVar24 = fVar24 / fVar22;
        *(float *)((int)puVar17 + 0x74) = fVar19 + fVar3;
        *(float *)((int)puVar17 + 0x8c) = fVar8;
        *(float *)(puVar17 + 0xf) = fVar20 + fVar10 + 1.15;
        fVar10 = fVar23;
        if (0.0 - fVar22 < 0.0) {
          fVar10 = fVar6 * fVar24;
        }
        fVar8 = fVar23;
        if (0.0 - fVar22 < 0.0) {
          fVar8 = fVar5 * fVar24;
        }
        if (0.0 - fVar22 < 0.0) {
          fVar23 = fVar7 * fVar24;
        }
        if (fVar22 - 0.0 < 0.0) {
          fVar10 = fVar6 * fVar24;
        }
        if (fVar22 - 0.0 < 0.0) {
          fVar8 = fVar5 * fVar24;
        }
        if (fVar22 - 0.0 < 0.0) {
          fVar23 = fVar7 * fVar24;
        }
        *(float *)(puVar17 + 0x10) = fVar10;
        *(float *)((int)puVar17 + 0x84) = fVar8;
        *(float *)(puVar17 + 0x11) = fVar23;
        fVar3 = *(float *)(iVar31 + 0x14) - fVar3;
        fVar55 = *(float *)(iVar31 + 0x10) - fVar55;
        fVar55 = fVar9 * fVar4 *
                 ((g_heroCollTop - 0.8) / SQRT(fVar55 * fVar55 + fVar3 * fVar3));
        *(float *)(puVar17 + 0x11) = fVar55;
        fVar4 = fVar4 * 2.0;
        if (fVar4 < fVar55) {
          *(float *)(puVar17 + 0x11) = fVar4;
        }
        pMVar35 = (MobyInstance *)FUN_0049fba0(uVar27 - 0xd0,uVar27 - 0xc0,lVar26,1);
        SetColorOfMoby(pMVar35,0xff,0xe0,0xe0);
      }
    }
  }
  return;
}


