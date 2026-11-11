// game/update/moby1004.cpp -- reconstructed from NPEA00385 EBOOT
// STATUS: NOT STARTED (raw Ghidra output)
// 4 functions, 0x181be0-0x1833c0
#include <stdlib.h>
#include "game/update/moby1004.h"
#include "game/collproc.h"
#include "game/hero.h"
#include "game/mobyfunc.h"
#include "game/mobyproc.h"
#include "game/mobyutil.h"
#include "game/update.h"
#include "game/update/moby1218.h"
#include "game/update/moby1241.h"
#include "idol/fastfunc.h"

// 0x0181be0 (0x14 bytes)
void M1004_00181be0(void)

{
  DAT_0073b784 = 0x10000;
  return;
}


// 0x0181c08 (0x2a8 bytes)
void M1004_00181c08(MobyInstance *param_1,longlong param_2,undefined8 param_3)

{
  MobyModeBit MVar1;
  uint uVar2;
  uint uVar3;
  undefined2 uVar4;
  int iVar5;
  int iVar6;
  float *pfVar7;
  undefined8 in_LR;
  GPiece<16> auVar8;
  GPiece<16> auVar9;
  GPiece<16> auVar10;
  float local_40;
  float local_3c;
  float local_38;
  int local_30 [2];
  
  if (param_1->state != '\x05') {
    iVar5 = MB_damage(param_1,0x330000,0);
    iVar6 = MB_HandleDamage(param_1,iVar5,param_3,0,local_30,0,0,4);
    pfVar7 = (float *)param_3;
    if ((0 < iVar6) && (iVar6 < 3)) {
      *pfVar7 = 0.0;
    }
    if (1 < local_30[0]) {
      uVar2 = (int)*pfVar7 >> 0x1f;
      uVar3 = (int)*(uint *)(iVar5 + 0x2c) >> 0x1f;
      iVar6 = (int)param_2;
      if ((int)((uVar3 >> 1 ^ *(uint *)(iVar5 + 0x2c)) - uVar3) <
          (int)((uVar2 >> 1 ^ (uint)*pfVar7) - uVar2)) {
        auVar8 = ZEXT416(0xffffffff);
        auVar8 = auVar8 | auVar8 << 0x20 | auVar8 << 0x40 | auVar8 << 0x60;
        auVar9 = vectorShiftLeftIntegerWord(auVar8,auVar8);
        *pfVar7 = *pfVar7 - *(float *)(iVar5 + 0x2c);
        *(undefined1 *)(iVar6 + 0x67) = 0xfa;
        auVar8 = loadVectorLeftIndexed(in_LR,0x181bf8);
        auVar10 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
        auVar8 = auVar8 >> 0x60 & (GPiece<16>)0xffffffff;
        auVar8 = vectorMultiplyAddFloatingPoint
                           (auVar10,auVar8 | auVar8 << 0x20 | auVar8 << 0x40 | auVar8 << 0x60,auVar9
                           );
        auVar8 = vectorConvertToSignedFixedPointWordSaturate(auVar8,0);
        auVar8 = vectorSplatHalfWord(auVar8,1);
        uVar4 = storeVectorElementHalfWordIndexed(auVar8,0x26,param_2);
        *(undefined2 *)(iVar6 + 0x26) = uVar4;
        MB_UpdateLightsTransition(param_1,param_2 + 0x60);
        local_40 = *(float *)(iVar5 + 0x10);
        local_38 = SQRT(*(float *)(iVar5 + 0x18) * *(float *)(iVar5 + 0x18) +
                        local_40 * local_40 + *(float *)(iVar5 + 0x14) * *(float *)(iVar5 + 0x14));
        if (local_38 == 0.0) {
          local_38 = 0.0;
          local_3c = 0.0;
          local_40 = 0.0;
        }
        else {
          local_38 = 0.1 / local_38;
          local_40 = local_40 * local_38;
          local_3c = *(float *)(iVar5 + 0x14) * local_38;
          local_38 = *(float *)(iVar5 + 0x18) * local_38;
        }
        (param_1->pos).x = (param_1->pos).x + local_40;
        (param_1->pos).y = (param_1->pos).y + local_3c;
        (param_1->pos).z = (param_1->pos).z + local_38;
        MB_randSphere(0xbfb99999a0000000,0x3fb99999a0000000,&local_40);
        (param_1->pos).x = (param_1->pos).x + local_40;
        (param_1->pos).y = (param_1->pos).y + local_3c;
        (param_1->pos).z = (param_1->pos).z + local_38;
      }
      else {
        MVar1 = param_1->modeBits;
        *pfVar7 = 0.0;
        param_1->modeBits =
             MVar1 & (MIRROR|CAN_BE_DAMAGED|HIDE_BACKFACES|DISABLE_Z_WRITE|DRAW_SHADOW|
                      DRAW_TRANSPARENT_WEIRD|LOCK_ROTATION|NO_DRAW|UNK_40|HAS_SPECIAL_VARS|HAS_GLOW|
                      TRANSPARENT|NO_POST_UPDATE|NO_UPDATE|DISABLED);
        *(undefined1 *)(iVar6 + 0x67) = 0x78;
        MB_UpdateLightsTransition(param_1,param_2 + 0x60);
        param_1->state = '\x05';
      }
    }
    param_1->damage = -1;
  }
  MB_ColorDyingMoby(param_1,param_2 + 0x60);
  return;
}


// 0x0181f00 (0xa2c bytes)
// inlined: FastAtan2 @0x1820c4, FastAtan2 @0x1822a4, FastRSqrt @0x182510, FastAtan2 @0x18267c
// strings: 00181eb8: '=VwP' (raw)

bool M1004_00181f00(double param_1,int param_2,int param_3,float *param_4)

{
  longlong lVar1;
  bool bVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  int iVar9;
  uint uVar10;
  uint uVar11;
  ulonglong *puVar12;
  int iVar13;
  int iVar14;
  float fVar15;
  ulonglong uVar16;
  ulonglong uVar17;
  ushort uVar19;
  longlong lVar18;
  ulonglong uVar20;
  float *pfVar22;
  longlong lVar21;
  longlong lVar23;
  ulonglong unaff_r23;
  ulonglong unaff_r24;
  ulonglong unaff_r25;
  ulonglong unaff_r26;
  ulonglong unaff_r27;
  ulonglong unaff_r28;
  ulonglong unaff_r29;
  ulonglong unaff_r30;
  ulonglong unaff_r31;
  ulonglong in_LR;
  longlong lVar24;
  double dVar25;
  double dVar26;
  double dVar27;
  ulonglong in_f26;
  ulonglong in_f27;
  ulonglong in_f28;
  double dVar28;
  ulonglong in_f29;
  double dVar29;
  ulonglong in_f30;
  double dVar30;
  double dVar31;
  ulonglong in_f31;
  
  uVar16 = ZEXT48(&stack0x00000000);
  lVar1 = uVar16 - 0x170;
  puVar12 = (ulonglong *)lVar1;
  *puVar12 = uVar16;
  puVar12[0x30] = in_LR;
  puVar12[0x28] = in_f26;
  puVar12[0x29] = in_f27;
  puVar12[0x2a] = in_f28;
  puVar12[0x2b] = in_f29;
  puVar12[0x2c] = in_f30;
  puVar12[0x2d] = in_f31;
  puVar12[0x20] = unaff_r24;
  fVar3 = param_4[2];
  puVar12[0x1f] = unaff_r23;
  puVar12[0x27] = unaff_r31;
  puVar12[0x26] = unaff_r30;
  puVar12[0x25] = unaff_r29;
  fVar4 = *(float *)(param_2 + 0x18);
  fVar5 = *(float *)(param_3 + 0x78);
  fVar6 = *(float *)(param_3 + 0xa0);
  fVar7 = *(float *)(param_3 + 0x70);
  fVar8 = *(float *)(param_3 + 0x74);
  puVar12[0x24] = unaff_r28;
  puVar12[0x23] = unaff_r27;
  puVar12[0x22] = unaff_r26;
  puVar12[0x21] = unaff_r25;
  if (fVar4 < fVar3 - 30.0) {
    fVar5 = fVar5 * 0.5;
    *(float *)(param_3 + 0x78) = fVar5;
  }
  fVar3 = DAT_0071f418 * 30.0;
  *(float *)(puVar12 + 0xe) = SQRT(fVar5 * fVar5 + fVar7 * fVar7 + fVar8 * fVar8);
  Delt(fVar6,fVar3,(float *)(puVar12 + 0xe));
  dVar25 = (double)FastWrapRot
                             (*(float *)(param_3 + 0xa4),g_FrameTime * 0.05235988);
  *(float *)(param_3 + 0xa4) = (float)dVar25;
  fVar3 = *param_4 - *(float *)(param_2 + 0x10);
  fVar4 = param_4[1] - *(float *)(param_2 + 0x14);
  *(float *)((int)puVar12 + 0x8c) = fVar3;
  *(float *)(puVar12 + 0x12) = fVar4;
  dVar30 = (double)(param_4[2] - *(float *)(param_2 + 0x18));
  dVar28 = (double)(fVar3 * fVar3 + fVar4 * fVar4);
  *(float *)((int)puVar12 + 0x94) = ABS(fVar3) - ABS(fVar4);
  fVar7 = DAT_0071f418;
  fVar6 = g_FrameTime;
  dVar25 = 0.0;
  uVar20 = (ulonglong)(*(uint *)((int)puVar12 + 0x8c) >> 0x1c) & 8 |
           (ulonglong)(*(uint *)((int)puVar12 + 0x94) >> 0x1e) & 2 |
           (ulonglong)(*(uint *)(puVar12 + 0x12) >> 0x1d) & 4;
  uVar17 = uVar20 << 2;
  fVar5 = ABS(*(float *)((int)puVar12 + 0x8c));
  if (*(float *)((int)puVar12 + 0x94) - 0.0 < 0.0) {
    fVar5 = ABS(fVar4);
  }
  fVar4 = *(float *)(&g_atanQuadrantTable + (int)uVar17);
  fVar8 = ABS(*(float *)(puVar12 + 0x12));
  if (*(float *)((int)puVar12 + 0x94) - 0.0 < 0.0) {
    fVar8 = ABS(fVar3);
  }
  fVar3 = *(float *)(((uint)(uVar20 << 2) | 0x735900) + 4);
  dVar29 = 0.7853981852531433;
  dVar26 = dVar25;
  if (0.0 < fVar5) {
    lVar18 = uVar16 - 0x160;
    lVar23 = uVar16 - 0x88;
    lVar21 = uVar16 - 0x98;
    lVar24 = 2;
    fVar5 = (fVar8 - fVar5) / (fVar8 + fVar5);
    fVar8 = fVar5 * fVar5;
    *(float *)(puVar12 + 0x1b) = fVar5;
    *(float *)((int)puVar12 + 0xdc) = fVar5;
    *(float *)(puVar12 + 0x1c) = fVar5;
    *(float *)((int)puVar12 + 0xe4) = fVar5;
    fVar5 = fVar8 * fVar8;
    *(float *)((int)puVar12 + 0xdc) = *(float *)((int)puVar12 + 0xdc) * fVar8;
    *(float *)(puVar12 + 0x1c) = *(float *)(puVar12 + 0x1c) * fVar5;
    *(float *)((int)puVar12 + 0xe4) = *(float *)((int)puVar12 + 0xe4) * fVar5 * fVar8;
    do {
      *(float *)((int)lVar18 + 0xd8) = *(float *)((int)lVar18 + 200) * fVar5 * fVar5;
      iVar9 = (int)lVar21;
      lVar21 = lVar21 + 8;
      lVar18 = lVar18 + 8;
      *(float *)((int)lVar23 + 4) = *(float *)(iVar9 + 4) * fVar5 * fVar5;
      lVar23 = lVar23 + 8;
      lVar24 = lVar24 + -1;
    } while (lVar24 != 0);
    lVar24 = 4;
    lVar23 = uVar16 - 0x98;
    uVar17 = ZEXT48(&DAT_007358e0);
    lVar18 = lVar1;
    lVar21 = lVar23;
    do {
      pfVar22 = (float *)uVar17;
      fVar5 = pfVar22[1];
      uVar17 = uVar17 + 8;
      *(float *)((int)lVar18 + 0xd8) = *(float *)((int)lVar18 + 0xd8) * *pfVar22;
      lVar18 = lVar18 + 8;
      *(float *)((int)lVar21 + 4) = *(float *)((int)lVar21 + 4) * fVar5;
      lVar21 = lVar21 + 8;
      lVar24 = lVar24 + -1;
    } while (lVar24 != 0);
    lVar21 = 2;
    lVar18 = lVar1;
    do {
      iVar9 = (int)lVar18;
      iVar13 = (int)lVar23;
      lVar18 = lVar18 + 0x10;
      lVar23 = lVar23 + 0x10;
      dVar26 = (double)((float)(dVar26 + (double)*(float *)(iVar9 + 0xd8)) + *(float *)(iVar13 + 4)
                        + *(float *)(iVar13 + 8) + *(float *)(iVar13 + 0xc));
      lVar21 = lVar21 + -1;
    } while (lVar21 != 0);
    dVar26 = (double)((float)(dVar26 + 0.7853981852531433) * fVar4 + fVar3);
  }
  dVar31 = 1.5707963705062866;
  OrganicDeltAngSpeed
            (dVar26,(double)(fVar7 * 1.5707964),(double)(fVar7 * 0.34906584),
             (double)(fVar6 * 1.5707964),param_2,uVar17,param_3 + 0x88);
  *(float *)((int)puVar12 + 0x84) = (float)dVar30;
  fVar4 = g_FrameTime;
  fVar3 = *(float *)(param_2 + 0x44);
  dVar26 = (double)DAT_0071f418;
  dVar27 = ABS((double)(float)SQRT(dVar28));
  *(float *)(puVar12 + 0x10) = (float)SQRT(dVar28);
  *(float *)(puVar12 + 0x11) = (float)(dVar27 - ABS(dVar30));
  uVar17 = (ulonglong)(*(uint *)(puVar12 + 0x10) >> 0x1c) & 8 |
           (ulonglong)(*(uint *)(puVar12 + 0x11) >> 0x1e) & 2 |
           (ulonglong)(*(uint *)((int)puVar12 + 0x84) >> 0x1d) & 4;
  uVar20 = uVar17 << 2 | 0x735900;
  lVar18 = uVar17 << 2;
  dVar28 = ABS((double)*(float *)(puVar12 + 0x10));
  if ((double)*(float *)(puVar12 + 0x11) - dVar25 < 0.0) {
    dVar28 = ABS(dVar30);
  }
  fVar5 = *(float *)(&g_atanQuadrantTable + (int)lVar18);
  dVar30 = ABS((double)*(float *)((int)puVar12 + 0x84));
  if ((double)*(float *)(puVar12 + 0x11) - dVar25 < 0.0) {
    dVar30 = dVar27;
  }
  fVar6 = *(float *)((int)uVar20 + 4);
  dVar27 = dVar25;
  if (dVar25 < dVar28) {
    lVar18 = uVar16 - 0x160;
    lVar23 = uVar16 - 0xa8;
    lVar21 = uVar16 - 0xb8;
    lVar24 = 2;
    fVar7 = (float)(dVar30 - dVar28) / (float)(dVar30 + dVar28);
    fVar8 = fVar7 * fVar7;
    *(float *)(puVar12 + 0x17) = fVar7;
    *(float *)((int)puVar12 + 0xbc) = fVar7;
    *(float *)(puVar12 + 0x18) = fVar7;
    *(float *)((int)puVar12 + 0xc4) = fVar7;
    fVar7 = fVar8 * fVar8;
    *(float *)((int)puVar12 + 0xbc) = *(float *)((int)puVar12 + 0xbc) * fVar8;
    *(float *)(puVar12 + 0x18) = *(float *)(puVar12 + 0x18) * fVar7;
    *(float *)((int)puVar12 + 0xc4) = *(float *)((int)puVar12 + 0xc4) * fVar7 * fVar8;
    do {
      *(float *)((int)lVar18 + 0xb8) = *(float *)((int)lVar18 + 0xa8) * fVar7 * fVar7;
      iVar9 = (int)lVar21;
      lVar21 = lVar21 + 8;
      lVar18 = lVar18 + 8;
      *(float *)((int)lVar23 + 4) = *(float *)(iVar9 + 4) * fVar7 * fVar7;
      lVar23 = lVar23 + 8;
      lVar24 = lVar24 + -1;
    } while (lVar24 != 0);
    lVar24 = 4;
    lVar23 = uVar16 - 0xb8;
    uVar20 = ZEXT48(&DAT_007358e0);
    lVar18 = lVar1;
    lVar21 = lVar23;
    do {
      pfVar22 = (float *)uVar20;
      fVar7 = pfVar22[1];
      uVar20 = uVar20 + 8;
      *(float *)((int)lVar18 + 0xb8) = *(float *)((int)lVar18 + 0xb8) * *pfVar22;
      lVar18 = lVar18 + 8;
      *(float *)((int)lVar21 + 4) = *(float *)((int)lVar21 + 4) * fVar7;
      lVar21 = lVar21 + 8;
      lVar24 = lVar24 + -1;
    } while (lVar24 != 0);
    lVar21 = 2;
    lVar18 = lVar1;
    dVar30 = dVar25;
    do {
      iVar9 = (int)lVar18;
      iVar13 = (int)lVar23;
      lVar18 = lVar18 + 0x10;
      lVar23 = lVar23 + 0x10;
      dVar30 = (double)((float)(dVar30 + (double)*(float *)(iVar9 + 0xb8)) + *(float *)(iVar13 + 4)
                        + *(float *)(iVar13 + 8) + *(float *)(iVar13 + 0xc));
      lVar21 = lVar21 + -1;
    } while (lVar21 != 0);
    dVar27 = (double)((float)(dVar30 + dVar29) * fVar5 + fVar6);
  }
  dVar30 = (double)MB_DeltAngSpeed
                             ((double)fVar3,-dVar27,(double)(float)(dVar26 * dVar31),
                              (double)(float)(dVar26 * 0.5235987901687622),
                              (double)(fVar4 * 1.9198622),lVar18,uVar20,param_3 + 0x84);
  *(float *)(param_2 + 0x44) = (float)dVar30;
  dVar30 = (double)(float)((double)*(float *)(param_2 + 0x40) +
                          -(double)(*(float *)(param_3 + 0x88) *
                                   (float)(dVar31 - ABS((double)*(float *)(param_2 + 0x40))) *
                                   0.63661975));
  if (dVar31 - dVar30 < 0.0) {
    dVar30 = dVar31;
  }
  if (dVar30 - -1.5707963705062866 < 0.0) {
    dVar30 = -1.5707963705062866;
  }
  *(float *)(param_2 + 0x40) = (float)(dVar30 * 0.9800000190734863);
  MB_WrapRot((float)(dVar30 * 0.9800000190734863));
  MB_SphericalToVector
            (*(float *)(puVar12 + 0xe),*(float *)(param_2 + 0x48),-*(float *)(param_2 + 0x44),
             (float *)(param_3 + 0x70));
  fVar3 = *(float *)(param_2 + 0x48);
  for (iVar9 = MobyUpdateChainStart; iVar9 != 0; iVar9 = *(int *)(iVar9 + 0x28)) {
    uVar19 = 0;
    if (*(int *)(iVar9 + 0x24) != 0) {
      uVar19 = *(ushort *)(*(int *)(iVar9 + 0x24) + 0x46);
    }
    if (((iVar9 != param_2) && (*(char *)(iVar9 + 0x20) != -3 && *(char *)(iVar9 + 0x20) != -2)) &&
       (((uVar19 & 0xff) == 5 || ((uVar19 & 0xff) == 0xd)))) {
      fVar4 = *(float *)(iVar9 + 0x14) - *(float *)(param_2 + 0x14);
      fVar5 = *(float *)(iVar9 + 0x10) - *(float *)(param_2 + 0x10);
      fVar7 = *(float *)(iVar9 + 0x18) - *(float *)(param_2 + 0x18);
      uVar10 = (int)*(uint *)(iVar9 + 0x18) >> 0x1f;
      uVar11 = (int)*(uint *)(param_2 + 0x18) >> 0x1f;
      bVar2 = (int)((uVar11 >> 1 ^ *(uint *)(param_2 + 0x18)) - uVar11) <=
              (int)((uVar10 >> 1 ^ *(uint *)(iVar9 + 0x18)) - uVar10);
      fVar6 = fVar7 * fVar7 + fVar5 * fVar5 + fVar4 * fVar4;
      dVar27 = (double)SQRT(fVar6);
      dVar30 = dVar25;
      dVar28 = dVar25;
      dVar26 = dVar25;
      if (dVar27 != dVar25) {
        fVar8 = 1.0 / SQRT(fVar6);
        fVar8 = -(fVar6 * fVar8 * fVar8 - 1.0) * fVar8 * 0.5 + fVar8;
        fVar8 = -(fVar6 * fVar8 * fVar8 - 1.0) * fVar8 * 0.5 + fVar8;
        fVar8 = -(fVar6 * fVar8 * fVar8 - 1.0) * fVar8 * 0.5 + fVar8;
        dVar26 = (double)(fVar5 * fVar8);
        dVar30 = (double)(fVar4 * fVar8);
        dVar28 = (double)(fVar7 * fVar8);
      }
      fVar4 = *(float *)(param_3 + 0x74);
      fVar5 = *(float *)(param_3 + 0x70);
      fVar6 = *(float *)(param_3 + 0x78);
      dVar31 = 2.094395160675049;
      dVar30 = (double)(float)(dVar27 / (double)(float)((double)fVar6 * dVar28 +
                                                       (double)(float)((double)fVar5 * dVar26 +
                                                                      (double)(float)((double)fVar4
                                                                                     * dVar30))));
      if ((dVar30 <= dVar25) || (100.0 <= dVar30)) {
        if (dVar27 < 15.0) {
          if (bVar2) {
            fVar7 = g_FrameTime * 2.0943952 + *(float *)(param_2 + 0x44);
          }
          else {
            fVar7 = -(g_FrameTime * 2.0943952 - *(float *)(param_2 + 0x44));
          }
          *(float *)(param_2 + 0x44) = fVar7;
          *(float *)(param_3 + 0x70) = (float)((double)fVar5 * 1.2000000476837158);
          *(float *)(param_3 + 0x74) = (float)((double)fVar4 * 1.2000000476837158);
          *(float *)(param_3 + 0x78) = (float)((double)fVar6 * 1.2000000476837158);
        }
      }
      else if (ABS(*(float *)(param_2 + 0x18) - *(float *)(iVar9 + 0x18)) < 10.0) {
        if (bVar2) {
          fVar4 = g_FrameTime * 2.0943952 + *(float *)(param_2 + 0x44);
        }
        else {
          fVar4 = -(g_FrameTime * 2.0943952 - *(float *)(param_2 + 0x44));
        }
        *(float *)(param_2 + 0x44) = fVar4;
        fVar5 = *(float *)(iVar9 + 0x10) - *(float *)(param_2 + 0x10);
        fVar4 = *(float *)(iVar9 + 0x14) - *(float *)(param_2 + 0x14);
        dVar28 = ABS((double)fVar5);
        dVar26 = ABS((double)fVar4);
        *(float *)((int)puVar12 + 0x74) = fVar5;
        *(float *)(puVar12 + 0xf) = fVar4;
        *(float *)((int)puVar12 + 0x7c) = (float)(dVar28 - dVar26);
        uVar17 = (ulonglong)(*(uint *)((int)puVar12 + 0x74) >> 0x1c) & 8 |
                 (ulonglong)(*(uint *)((int)puVar12 + 0x7c) >> 0x1e) & 2 |
                 (ulonglong)(*(uint *)(puVar12 + 0xf) >> 0x1d) & 4;
        dVar30 = ABS((double)*(float *)((int)puVar12 + 0x74));
        if ((double)*(float *)((int)puVar12 + 0x7c) - dVar25 < 0.0) {
          dVar30 = dVar26;
        }
        fVar4 = *(float *)(&g_atanQuadrantTable + (int)(uVar17 << 2));
        dVar26 = ABS((double)*(float *)(puVar12 + 0xf));
        if ((double)*(float *)((int)puVar12 + 0x7c) - dVar25 < 0.0) {
          dVar26 = dVar28;
        }
        fVar5 = *(float *)(((uint)(uVar17 << 2) | 0x735900) + 4);
        dVar28 = dVar25;
        if (dVar25 < dVar30) {
          lVar18 = uVar16 - 0x160;
          lVar23 = uVar16 - 200;
          lVar21 = uVar16 - 0xd8;
          lVar24 = 2;
          fVar6 = (float)(dVar26 - dVar30) / (float)(dVar26 + dVar30);
          fVar7 = fVar6 * fVar6;
          *(float *)(puVar12 + 0x13) = fVar6;
          *(float *)((int)puVar12 + 0x9c) = fVar6;
          *(float *)(puVar12 + 0x14) = fVar6;
          *(float *)((int)puVar12 + 0xa4) = fVar6;
          fVar6 = fVar7 * fVar7;
          *(float *)((int)puVar12 + 0x9c) = *(float *)((int)puVar12 + 0x9c) * fVar7;
          *(float *)(puVar12 + 0x14) = *(float *)(puVar12 + 0x14) * fVar6;
          *(float *)((int)puVar12 + 0xa4) = *(float *)((int)puVar12 + 0xa4) * fVar6 * fVar7;
          do {
            *(float *)((int)lVar18 + 0x98) = *(float *)((int)lVar18 + 0x88) * fVar6 * fVar6;
            iVar13 = (int)lVar21;
            lVar21 = lVar21 + 8;
            lVar18 = lVar18 + 8;
            *(float *)((int)lVar23 + 4) = *(float *)(iVar13 + 4) * fVar6 * fVar6;
            lVar23 = lVar23 + 8;
            lVar24 = lVar24 + -1;
          } while (lVar24 != 0);
          lVar24 = 4;
          lVar23 = uVar16 - 0xd8;
          pfVar22 = (float *)&DAT_007358e0;
          lVar18 = lVar1;
          lVar21 = lVar23;
          do {
            fVar6 = *pfVar22;
            fVar7 = pfVar22[1];
            pfVar22 = pfVar22 + 2;
            *(float *)((int)lVar18 + 0x98) = *(float *)((int)lVar18 + 0x98) * fVar6;
            lVar18 = lVar18 + 8;
            *(float *)((int)lVar21 + 4) = *(float *)((int)lVar21 + 4) * fVar7;
            lVar21 = lVar21 + 8;
            lVar24 = lVar24 + -1;
          } while (lVar24 != 0);
          lVar21 = 2;
          lVar18 = lVar1;
          dVar30 = dVar25;
          do {
            iVar13 = (int)lVar18;
            iVar14 = (int)lVar23;
            lVar18 = lVar18 + 0x10;
            lVar23 = lVar23 + 0x10;
            dVar30 = (double)((float)(dVar30 + (double)*(float *)(iVar13 + 0x98)) +
                              *(float *)(iVar14 + 4) + *(float *)(iVar14 + 8) +
                             *(float *)(iVar14 + 0xc));
            lVar21 = lVar21 + -1;
          } while (lVar21 != 0);
          dVar28 = (double)((float)(dVar30 + dVar29) * fVar4 + fVar5);
        }
        dVar30 = (double)FastSubRots(fVar3,(float)dVar28);
        if (dVar25 <= dVar30) {
          fVar3 = -(float)((double)g_FrameTime * dVar31 -
                          (double)*(float *)(param_2 + 0x48));
        }
        else {
          fVar3 = (float)((double)g_FrameTime * dVar31 +
                         (double)*(float *)(param_2 + 0x48));
        }
        *(float *)(param_2 + 0x48) = fVar3;
      }
    }
  }
  MB_SphericalToVector
            (*(float *)(puVar12 + 0xe),fVar3,-*(float *)(param_2 + 0x44),(float *)(param_3 + 0x70));
  fVar3 = *(float *)(param_3 + 0x74);
  fVar4 = *(float *)(param_3 + 0x70);
  fVar5 = *(float *)(param_3 + 0x78);
  fVar6 = *(float *)(param_2 + 0x10);
  fVar7 = *(float *)(param_2 + 0x14);
  fVar8 = *(float *)(param_2 + 0x18);
  fVar15 = SQRT(fVar5 * fVar5 + fVar4 * fVar4 + fVar3 * fVar3);
  if (g_FrameTime * 29.0 < fVar15) {
    fVar15 = (g_FrameTime * 29.0) / fVar15;
    fVar4 = fVar4 * fVar15;
    fVar3 = fVar3 * fVar15;
    fVar5 = fVar5 * fVar15;
    *(float *)(param_3 + 0x70) = fVar4;
    *(float *)(param_3 + 0x74) = fVar3;
    *(float *)(param_3 + 0x78) = fVar5;
  }
  fVar6 = fVar6 + fVar4;
  fVar7 = fVar7 + fVar3;
  *(float *)(param_2 + 0x10) = fVar6;
  *(float *)(param_2 + 0x14) = fVar7;
  *(float *)(param_2 + 0x18) = fVar8 + fVar5;
  fVar7 = fVar7 - param_4[1];
  fVar6 = fVar6 - *param_4;
  return (double)SQRT(fVar6 * fVar6 + fVar7 * fVar7) < param_1;
}


// 0x0182998 (0xa28 bytes)
/* Moby 1004 */

void UpdateMoby_1004(MobyInstance *moby)

{
  u8 uVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  MobyModeBit MVar6;
  void *pvVar7;
  MobyClass *pMVar8;
  f32 fVar9;
  undefined4 uVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  int iVar15;
  int iVar16;
  uint uVar17;
  MobyInstance *pMVar18;
  ulonglong uVar19;
  double dVar20;
  double dVar21;
  double dVar22;
  double dVar23;
  double dVar24;
  GPiece<16> auVar25;
  GPiece<16> auVar26;
  GPiece<16> auVar27;
  float local_b0;
  float local_ac;
  float local_a8;
  GPiece<16> local_a0;
  GPiece<16> local_90;
  GPiece<32> local_80;
  
  if (moby != (MobyInstance *)0x0) {
    pvVar7 = moby->pVar;
    uVar19 = ZEXT48(pvVar7);
    if (pvVar7 != (void *)0x0) {
      SetColorOfMoby(moby,0x80,0x80,0x80);
      M1004_00181c08(moby,uVar19,uVar19 + 0x20);
      iVar15 = DAT_0096b2d0;
      pMVar18 = (MobyInstance *)0x0;
      iVar16 = 0;
      if (((*(int *)((int)pvVar7 + 0x90) == -1) ||
          (pMVar18 = g_MobyInstance + *(int *)((int)pvVar7 + 0x90), pMVar18 == (MobyInstance *)0x0))
         || (pMVar18->state == 0xfd || pMVar18->state == 0xfe)) {
        fVar2 = *(float *)((int)pvVar7 + 0xb4);
        fVar3 = (g_heroPosition.x + 256.0) * 0.5;
        fVar4 = (g_heroPosition.y + 256.0) * 0.5;
        fVar5 = g_heroPosition.w;
      }
      else {
        fVar2 = (pMVar18->pos).z;
        fVar3 = (pMVar18->pos).x;
        fVar4 = (pMVar18->pos).y;
        fVar5 = (pMVar18->pos).w;
        *(float *)((int)pvVar7 + 0xb4) = fVar2;
      }
      dVar24 = (double)fVar3;
      dVar23 = (double)fVar4;
      dVar22 = (double)fVar2;
      dVar21 = (double)fVar5;
      if (iVar15 == 0) {
        local_b0 = g_heroPosition.x;
        local_ac = g_heroPosition.y;
        local_a8 = g_heroPosition.z;
      }
      else {
        local_b0 = *(float *)(DAT_0096b2d0 + 0x10);
        local_ac = *(float *)(DAT_0096b2d0 + 0x14);
        local_a8 = *(float *)(DAT_0096b2d0 + 0x18);
      }
      uVar17 = (int)moby - (int)g_MobyInstance;
      dVar20 = (double)FastIntToDouble
                                 (((int)uVar17 >> 8) +
                                  (uint)((int)uVar17 < 0 && (uVar17 & 0xff) != 0) +
                                  worldUpdateTime / (int)(animationSpeed * 600.5));
      MB_WrapRot((float)(dVar20 * 0.800000011920929));
      if (iVar15 != 0) {
        iVar16 = *(int *)(iVar15 + 0x78);
      }
      iVar15 = 0;
      if (moby->enabled == '\0') {
        iVar15 = *(int *)((int)pvVar7 + 0xa8) + 1;
      }
      *(int *)((int)pvVar7 + 0xa8) = iVar15;
      uVar1 = moby->state;
      MVar6 = moby->modeBits;
      pMVar8 = moby->pClass;
      if (uVar1 == '\x06') {
        if (iVar16 != 0) {
          fVar3 = *(float *)(iVar16 + 0x10);
          fVar4 = 0.0;
          fVar2 = SQRT(*(float *)(iVar16 + 0x18) * *(float *)(iVar16 + 0x18) +
                       fVar3 * fVar3 + *(float *)(iVar16 + 0x14) * *(float *)(iVar16 + 0x14));
          if (fVar2 == 0.0) {
            (moby->pos).x = fVar3;
            (moby->pos).y = *(f32 *)(iVar16 + 0x14);
            (moby->pos).z = *(f32 *)(iVar16 + 0x18);
            fVar9 = *(f32 *)(iVar16 + 0x1c);
            fVar3 = fVar4;
            fVar2 = fVar4;
          }
          else {
            fVar2 = -30.0 / fVar2;
            fVar4 = fVar3 * fVar2;
            (moby->pos).x = fVar4;
            fVar3 = *(float *)(iVar16 + 0x14) * fVar2;
            (moby->pos).y = fVar3;
            fVar2 = *(float *)(iVar16 + 0x18) * fVar2;
            (moby->pos).z = fVar2;
            fVar9 = *(f32 *)(iVar16 + 0x1c);
          }
          (moby->pos).w = fVar9;
          auVar26 = ZEXT416(0xfffffff0);
          moby->modeBits =
               MVar6 & (MIRROR|CAN_BE_DAMAGED|HIDE_BACKFACES|CAN_BE_AUTO_TARGETED|DISABLE_Z_WRITE|
                        DRAW_SHADOW|DRAW_TRANSPARENT_WEIRD|LOCK_ROTATION|NO_DRAW|HAS_SPECIAL_VARS|
                        HAS_GLOW|TRANSPARENT|NO_POST_UPDATE|NO_UPDATE) | CAN_BE_AUTO_TARGETED;
          (moby->pos).x = fVar4 + local_b0;
          (moby->pos).y = fVar3 + local_ac;
          (moby->pos).z = fVar2 + local_a8;
          moby->collision = pMVar8->collision;
          auVar25 = loadVectorLeftIndexed(0x24,uVar19);
          auVar27 = loadVectorRightIndexed(0x34,uVar19);
          auVar26 = vectorShiftRightAlgebraicWord
                              (auVar25 | auVar27,
                               auVar26 | auVar26 << 0x20 | auVar26 << 0x40 | auVar26 << 0x60);
          auVar26 = vectorConvertFromSignedFixedPointWord(auVar26,0);
          auVar26 = auVar26 >> 0x60 & (GPiece<16>)0xffffffff;
          uVar10 = storeVectorElementWordIndexed
                             (auVar26 | auVar26 << 0x20 | auVar26 << 0x40 | auVar26 << 0x60,0x20,
                              uVar19);
          *(undefined4 *)((int)pvVar7 + 0x20U & 0xfffffffc) = uVar10;
          moby->state = '\0';
        }
      }
      else if (uVar1 == '\x05') {
        MB_genericExplosion
                  (0,0,0x4010000000000000,0x4008000000000000,0x4022000000000000,0x3ff19999a0000000,
                   0x4034000000000000,moby,local_90,0,1,0xffffffffffffffff,5,3,10);
        iVar16 = rand();
        iVar16 = iVar16 % 3;
        if (iVar16 < 1) {
          if (-1 < iVar16) {
            M1215_0020ab50(local_80,local_90,0x4c4);
          }
        }
        else if (iVar16 < 2) {
          M1215_0020ab50(local_80,local_90,0x4c2);
        }
        else if (iVar16 < 3) {
          FUN_0021b5e8(local_80,local_90,0x4d9);
        }
        if ((pMVar18 == (MobyInstance *)0x0) || (pMVar18->state == 0xfd || pMVar18->state == 0xfe))
        {
          DeleteMoby(moby);
          return;
        }
        moby->collision = (ushort *)0x0;
        moby->state = '\x06';
        moby->modeBits =
             moby->modeBits &
             (MIRROR|CAN_BE_DAMAGED|HIDE_BACKFACES|DISABLE_Z_WRITE|DRAW_SHADOW|
              DRAW_TRANSPARENT_WEIRD|LOCK_ROTATION|NO_DRAW|UNK_40|HAS_SPECIAL_VARS|HAS_GLOW|
              TRANSPARENT|NO_POST_UPDATE|NO_UPDATE|DISABLED) | (UNK_40|DISABLED);
      }
      else if (uVar1 == '\x04') {
        iVar16 = M1004_00181f00
                           (0x403e000000000000,moby,uVar19,local_a0,&DAT_0018292c,&local_b0);
        if (iVar16 != 0) {
          moby->state = '\x03';
        }
      }
      else if (uVar1 == '\x03') {
        iVar16 = M1004_00181f00
                           ((double)*(float *)((int)pvVar7 + 0x94),moby,uVar19,local_a0);
        if (iVar16 != 0) {
          moby->state = '\x04';
        }
      }
      else if (uVar1 == '\0') {
        dVar20 = (double)MB_randRangeFloat(-3.1415927,3.1415927);
        *(float *)((int)pvVar7 + 0xa4) = (float)dVar20;
        *(float *)((int)pvVar7 + 0x70) = (float)(dVar24 - (double)(moby->pos).x);
        *(float *)((int)pvVar7 + 0x74) = (float)(dVar23 - (double)(moby->pos).y);
        fVar3 = (moby->pos).z;
        *(float *)((int)pvVar7 + 0x7c) = (float)dVar21;
        *(float *)((int)pvVar7 + 0x78) = (float)(dVar22 - (double)fVar3);
        dVar21 = (double)MB_randRangeFloat(20.0,22.0);
        fVar3 = *(float *)((int)pvVar7 + 0x74);
        fVar4 = *(float *)((int)pvVar7 + 0x70);
        fVar2 = *(float *)((int)pvVar7 + 0x78);
        dVar22 = (double)g_FrameTime;
        *(float *)((int)pvVar7 + 0xa0) = (float)(dVar21 * dVar22);
        fVar5 = 0.0;
        fVar14 = SQRT(fVar2 * fVar2 + fVar4 * fVar4 + fVar3 * fVar3);
        fVar11 = (float)(dVar21 * dVar22) / fVar14;
        fVar13 = fVar5;
        if (0.0 - fVar14 < 0.0) {
          fVar13 = fVar4 * fVar11;
        }
        fVar12 = fVar5;
        if (0.0 - fVar14 < 0.0) {
          fVar12 = fVar3 * fVar11;
        }
        if (0.0 - fVar14 < 0.0) {
          fVar5 = fVar2 * fVar11;
        }
        if (fVar14 - 0.0 < 0.0) {
          fVar13 = fVar4 * fVar11;
        }
        if (fVar14 - 0.0 < 0.0) {
          fVar12 = fVar3 * fVar11;
        }
        if (fVar14 - 0.0 < 0.0) {
          fVar5 = fVar2 * fVar11;
        }
        *(float *)((int)pvVar7 + 0x70) = fVar13;
        *(float *)((int)pvVar7 + 0x74) = fVar12;
        *(float *)((int)pvVar7 + 0x78) = fVar5;
        uVar17 = rand();
        if ((uVar17 & 1) == 0) {
          *(float *)((int)pvVar7 + 0x70) = -*(float *)((int)pvVar7 + 0x70);
          *(float *)((int)pvVar7 + 0x74) = -*(float *)((int)pvVar7 + 0x74);
          *(float *)((int)pvVar7 + 0x78) = -*(float *)((int)pvVar7 + 0x78);
        }
        moby->state = '\x04';
      }
      fVar9 = (moby->pos).x;
      uVar17 = (int)fVar9 >> 0x1f;
      fVar3 = 20.0;
      fVar4 = (moby->pos).x;
      if ((int)((uVar17 >> 1 ^ (uint)fVar9) - uVar17) < 0x41a00000) {
        (moby->pos).x = 20.0;
        fVar4 = fVar3;
      }
      if (1003.0 < fVar4) {
        (moby->pos).x = 1003.0;
      }
      fVar9 = (moby->pos).y;
      uVar17 = (int)fVar9 >> 0x1f;
      fVar4 = (moby->pos).y;
      if ((int)((uVar17 >> 1 ^ (uint)fVar9) - uVar17) < 0x41a00000) {
        (moby->pos).y = 20.0;
        fVar4 = fVar3;
      }
      if (1003.0 < fVar4) {
        (moby->pos).y = 1003.0;
      }
      fVar9 = (moby->pos).z;
      uVar17 = (int)fVar9 >> 0x1f;
      fVar4 = (moby->pos).z;
      if ((int)((uVar17 >> 1 ^ (uint)fVar9) - uVar17) < 0x41a00000) {
        (moby->pos).z = 20.0;
        fVar4 = fVar3;
      }
      if (1003.0 < fVar4) {
        (moby->pos).z = 1003.0;
      }
      MB_RegisterLameShadow(3.0,moby);
    }
  }
  return;
}


