// game/update/moby426.cpp -- reconstructed from NPEA00385 EBOOT
// STATUS: NOT STARTED (raw Ghidra output)
// 6 functions, 0x36ad20-0x36da54
#include "game/update/moby426.h"
#include "game/camera.h"
#include "game/collproc.h"
#include "game/draw.h"
#include "game/freeze.h"
#include "game/hero.h"
#include "game/hud.h"
#include "game/mobyfunc.h"
#include "game/mobyproc.h"
#include "game/mobyutil.h"
#include "game/pad.h"
#include "game/partupd.h"
#include "game/update.h"
#include "game/update/camera5.h"
#include "game/update/moby1009.h"
#include "game/update/moby1034.h"
#include "game/update/moby1160.h"
#include "game/update/moby1242.h"
#include "game/update/moby1379.h"
#include "game/update/moby179.h"
#include "game/update/moby291.h"
#include "game/update/moby335.h"
#include "idol/fastfunc.h"

// 0x036ad20 (0x144 bytes)
void M426_0036ad20(double param_1,double param_2,undefined8 param_3,int param_4)

{
  int iVar1;
  float local_50 [4];
  GPiece<16> auStack_40;
  
  iVar1 = FastDecTimerS32(param_4 + 100);
  if ((iVar1 != 0) && ((g_Pad.padDownButtons & 0x240) != 0)) {
    MB_SphericalToVector
              (DAT_008411a4 * DAT_008411c4,(float)param_1,(float)param_2,local_50);
    GetBonePosition(param_3,*(byte *)(param_4 + 0x31) & 1,auStack_40);
    M1009_00184670((double)DAT_008411c8,0xbff0000000000000,param_3,local_50,auStack_40);
    *(undefined4 *)(param_4 + 100) = DAT_008411a8;
    *(byte *)(param_4 + 0x31) = *(byte *)(param_4 + 0x31) ^ 1;
  }
  return;
}


// 0x036ae68 (0x184 bytes)
void M426_0036ae68(longlong param_1,int param_2)

{
  int iVar1;
  GPiece<16> local_30;
  
  iVar1 = FastDecTimerS32(param_2 + 0x68);
  if (((iVar1 != 0) && ((g_Pad.padDownButtons & 0x420) != 0)) && (0 < (int)*(uint *)(param_2 + 0x6c))) {
    GetBonePosition(param_1,*(uint *)(param_2 + 0x6c) & 1,local_30);
    iVar1 = Spawn_Moby1034((double)(DAT_008411ac * DAT_008411c4),param_1,local_30,
                           *(undefined4 *)(param_2 + 0x70),param_1 + 0x40,DAT_00841234,DAT_00841234)
    ;
    if (iVar1 != 0) {
      *(int *)(param_2 + 0x6c) = *(int *)(param_2 + 0x6c) + -1;
      *(undefined4 *)(param_2 + 0x68) = DAT_008411b0;
    }
  }
  return;
}


// 0x036b008 (0x608 bytes)
// inlined: FastAtan2 @0x36b1c8, FastAtan2 @0x36b390
MobyInstance *
M426_0036b008
          (double param_1,double param_2,double param_3,float *param_4,int param_5)

{
  longlong lVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  MobyInstance *pTarget;
  ulonglong *puVar7;
  int iVar8;
  int iVar9;
  float fVar10;
  ulonglong uVar11;
  longlong lVar12;
  float *pfVar14;
  longlong lVar13;
  ulonglong uVar15;
  longlong lVar16;
  ulonglong unaff_r27;
  ulonglong unaff_r28;
  ulonglong unaff_r29;
  MobyInstance *pMVar17;
  ulonglong unaff_r30;
  ulonglong unaff_r31;
  ulonglong in_LR;
  longlong lVar18;
  double dVar19;
  double dVar20;
  double dVar21;
  ulonglong in_f24;
  double dVar22;
  ulonglong in_f25;
  ulonglong in_f26;
  double dVar23;
  ulonglong in_f27;
  double dVar24;
  ulonglong in_f28;
  double dVar25;
  ulonglong in_f29;
  ulonglong in_f30;
  ulonglong in_f31;
  
  uVar11 = ZEXT48(&stack0x00000000);
  lVar1 = uVar11 - 0x150;
  puVar7 = (ulonglong *)lVar1;
  *puVar7 = uVar11;
  puVar7[0x2c] = in_LR;
  puVar7[0x22] = in_f24;
  puVar7[0x23] = in_f25;
  puVar7[0x24] = in_f26;
  puVar7[0x25] = in_f27;
  puVar7[0x26] = in_f28;
  puVar7[0x27] = in_f29;
  puVar7[0x28] = in_f30;
  puVar7[0x29] = in_f31;
  puVar7[0x1f] = unaff_r29;
  pMVar17 = (MobyInstance *)0x0;
  puVar7[0x21] = unaff_r31;
  puVar7[0x1e] = unaff_r28;
  puVar7[0x20] = unaff_r30;
  pTarget = MobyUpdateChainStart;
  puVar7[0x1d] = unaff_r27;
  dVar25 = 1000000000.0;
  for (; pTarget != (MobyInstance *)0x0; pTarget = (MobyInstance *)pTarget->pChain) {
    if (((((pTarget->modeBits & CAN_BE_AUTO_TARGETED) != NONE) && (pTarget->enabled != '\0')) &&
        (pTarget->pClass != (MobyClass *)0x0)) && ((short)pTarget->pClass->mode_bits == 5)) {
      fVar2 = param_4[1];
      fVar5 = fVar2 - (pTarget->pos).y;
      fVar3 = (pTarget->pos).x;
      fVar4 = *param_4 - fVar3;
      dVar24 = (double)SQRT(fVar4 * fVar4 + fVar5 * fVar5);
      if (dVar24 < param_3) {
        fVar5 = fVar3 - *param_4;
        *(float *)(puVar7 + 0x10) = fVar3;
        fVar3 = (pTarget->pos).y;
        fVar2 = fVar3 - fVar2;
        *(float *)((int)puVar7 + 0x84) = fVar3;
        fVar3 = (pTarget->pos).z;
        *(float *)(puVar7 + 0x11) = fVar3;
        *(f32 *)((int)puVar7 + 0x8c) = (pTarget->pos).w;
        fVar6 = ABS(fVar5);
        *(float *)((int)puVar7 + 0x9c) = fVar5;
        fVar4 = ABS(fVar2);
        *(float *)(puVar7 + 0x14) = fVar2;
        fVar2 = *(float *)(param_5 + 8);
        *(float *)(puVar7 + 0x11) = fVar3 + 0.4;
        *(float *)((int)puVar7 + 0xa4) = fVar6 - fVar4;
        dVar22 = 0.0;
        dVar23 = 0.7853981852531433;
        uVar15 = (ulonglong)(*(uint *)((int)puVar7 + 0x9c) >> 0x1c) & 8 |
                 (ulonglong)(*(uint *)((int)puVar7 + 0xa4) >> 0x1e) & 2 |
                 (ulonglong)(*(uint *)(puVar7 + 0x14) >> 0x1d) & 4;
        fVar3 = *(float *)(&g_atanQuadrantTable + (int)(uVar15 << 2));
        fVar5 = ABS(*(float *)((int)puVar7 + 0x9c));
        if (*(float *)((int)puVar7 + 0xa4) - 0.0 < 0.0) {
          fVar5 = fVar4;
        }
        fVar4 = *(float *)(((uint)(uVar15 << 2) | 0x735900) + 4);
        fVar10 = ABS(*(float *)(puVar7 + 0x14));
        if (*(float *)((int)puVar7 + 0xa4) - 0.0 < 0.0) {
          fVar10 = fVar6;
        }
        dVar19 = dVar22;
        if (0.0 < fVar5) {
          lVar12 = uVar11 - 0x140;
          lVar13 = uVar11 - 0x88;
          lVar16 = uVar11 - 0x78;
          lVar18 = 2;
          fVar5 = (fVar10 - fVar5) / (fVar10 + fVar5);
          fVar6 = fVar5 * fVar5;
          *(float *)((int)puVar7 + 0xd4) = fVar5;
          *(float *)((int)puVar7 + 0xcc) = fVar5;
          *(float *)(puVar7 + 0x1a) = fVar5;
          *(float *)(puVar7 + 0x19) = fVar5;
          fVar5 = fVar6 * fVar6;
          *(float *)((int)puVar7 + 0xcc) = *(float *)((int)puVar7 + 0xcc) * fVar6;
          *(float *)(puVar7 + 0x1a) = *(float *)(puVar7 + 0x1a) * fVar5;
          *(float *)((int)puVar7 + 0xd4) = *(float *)((int)puVar7 + 0xd4) * fVar5 * fVar6;
          do {
            *(float *)((int)lVar12 + 200) = *(float *)((int)lVar12 + 0xb8) * fVar5 * fVar5;
            iVar8 = (int)lVar13;
            lVar12 = lVar12 + 8;
            lVar13 = lVar13 + 8;
            *(float *)((int)lVar16 + 4) = *(float *)(iVar8 + 4) * fVar5 * fVar5;
            lVar16 = lVar16 + 8;
            lVar18 = lVar18 + -1;
          } while (lVar18 != 0);
          lVar18 = 4;
          lVar16 = uVar11 - 0x88;
          pfVar14 = (float *)&DAT_007358e0;
          lVar12 = lVar1;
          lVar13 = lVar16;
          do {
            fVar5 = *pfVar14;
            fVar6 = pfVar14[1];
            pfVar14 = pfVar14 + 2;
            *(float *)((int)lVar12 + 200) = *(float *)((int)lVar12 + 200) * fVar5;
            lVar12 = lVar12 + 8;
            *(float *)((int)lVar13 + 4) = *(float *)((int)lVar13 + 4) * fVar6;
            lVar13 = lVar13 + 8;
            lVar18 = lVar18 + -1;
          } while (lVar18 != 0);
          lVar13 = 2;
          lVar12 = lVar1;
          do {
            iVar8 = (int)lVar12;
            lVar12 = lVar12 + 0x10;
            iVar9 = (int)lVar16;
            lVar16 = lVar16 + 0x10;
            dVar19 = (double)((float)(dVar19 + (double)*(float *)(iVar8 + 200)) +
                              *(float *)(iVar9 + 4) + *(float *)(iVar9 + 8) +
                             *(float *)(iVar9 + 0xc));
            lVar13 = lVar13 + -1;
          } while (lVar13 != 0);
          dVar19 = (double)((float)(dVar19 + 0.7853981852531433) * fVar3 + fVar4);
        }
        dVar19 = (double)FastSubRots(fVar2,(float)dVar19);
        dVar19 = (double)(float)(dVar19 * dVar19);
        fVar2 = *(float *)(param_5 + 4);
        if ((double)(float)(param_1 * param_1) <= dVar19) {
          puVar7[0xe] = 4;
          DrawTargetCrosshair(0.3,pTarget,0xff0f4f7f,0xff0f0000);
        }
        else {
          fVar3 = param_4[2];
          *(float *)(puVar7 + 0x12) = (float)dVar24;
          dVar20 = ABS((double)(*(float *)(puVar7 + 0x11) - fVar3));
          *(float *)((int)puVar7 + 0x94) = *(float *)(puVar7 + 0x11) - fVar3;
          *(float *)(puVar7 + 0x13) = (float)(ABS(dVar24) - dVar20);
          uVar15 = (ulonglong)(*(uint *)(puVar7 + 0x12) >> 0x1c) & 8 |
                   (ulonglong)(*(uint *)(puVar7 + 0x13) >> 0x1e) & 2 |
                   (ulonglong)(*(uint *)((int)puVar7 + 0x94) >> 0x1d) & 4;
          dVar21 = ABS((double)*(float *)(puVar7 + 0x12));
          if ((double)*(float *)(puVar7 + 0x13) - dVar22 < 0.0) {
            dVar21 = dVar20;
          }
          fVar3 = *(float *)(&g_atanQuadrantTable + (int)(uVar15 << 2));
          dVar20 = ABS((double)*(float *)((int)puVar7 + 0x94));
          if ((double)*(float *)(puVar7 + 0x13) - dVar22 < 0.0) {
            dVar20 = ABS(dVar24);
          }
          fVar5 = *(float *)(((uint)(uVar15 << 2) | 0x735900) + 4);
          if (dVar22 < dVar21) {
            lVar12 = uVar11 - 0x140;
            lVar13 = uVar11 - 0xa8;
            lVar16 = uVar11 - 0x98;
            lVar18 = 2;
            fVar4 = (float)(dVar20 - dVar21) / (float)(dVar20 + dVar21);
            fVar6 = fVar4 * fVar4;
            *(float *)((int)puVar7 + 0xb4) = fVar4;
            *(float *)((int)puVar7 + 0xac) = fVar4;
            *(float *)(puVar7 + 0x16) = fVar4;
            *(float *)(puVar7 + 0x15) = fVar4;
            fVar4 = fVar6 * fVar6;
            *(float *)((int)puVar7 + 0xac) = *(float *)((int)puVar7 + 0xac) * fVar6;
            *(float *)(puVar7 + 0x16) = *(float *)(puVar7 + 0x16) * fVar4;
            *(float *)((int)puVar7 + 0xb4) = *(float *)((int)puVar7 + 0xb4) * fVar4 * fVar6;
            do {
              *(float *)((int)lVar12 + 0xa8) = *(float *)((int)lVar12 + 0x98) * fVar4 * fVar4;
              iVar8 = (int)lVar13;
              lVar12 = lVar12 + 8;
              lVar13 = lVar13 + 8;
              *(float *)((int)lVar16 + 4) = *(float *)(iVar8 + 4) * fVar4 * fVar4;
              lVar16 = lVar16 + 8;
              lVar18 = lVar18 + -1;
            } while (lVar18 != 0);
            lVar18 = 4;
            lVar16 = uVar11 - 0xa8;
            pfVar14 = (float *)&DAT_007358e0;
            lVar12 = lVar1;
            lVar13 = lVar16;
            do {
              fVar4 = *pfVar14;
              fVar6 = pfVar14[1];
              pfVar14 = pfVar14 + 2;
              *(float *)((int)lVar12 + 0xa8) = *(float *)((int)lVar12 + 0xa8) * fVar4;
              lVar12 = lVar12 + 8;
              *(float *)((int)lVar13 + 4) = *(float *)((int)lVar13 + 4) * fVar6;
              lVar13 = lVar13 + 8;
              lVar18 = lVar18 + -1;
            } while (lVar18 != 0);
            lVar13 = 2;
            lVar12 = lVar1;
            do {
              iVar8 = (int)lVar12;
              lVar12 = lVar12 + 0x10;
              iVar9 = (int)lVar16;
              lVar16 = lVar16 + 0x10;
              dVar22 = (double)((float)(dVar22 + (double)*(float *)(iVar8 + 0xa8)) +
                                *(float *)(iVar9 + 4) + *(float *)(iVar9 + 8) +
                               *(float *)(iVar9 + 0xc));
              lVar13 = lVar13 + -1;
            } while (lVar13 != 0);
            dVar22 = (double)((float)(dVar22 + dVar23) * fVar3 + fVar5);
          }
          dVar24 = (double)FastSubRots(fVar2,(float)dVar22);
          if ((double)(float)(param_2 * param_2) <= (double)(float)(dVar24 * dVar24)) {
            puVar7[0xe] = 4;
            DrawTargetCrosshair(0.3,pTarget,0xff0f4f7f,0xff0f0000);
          }
          else {
            fVar2 = param_4[1] - *(float *)((int)puVar7 + 0x84);
            dVar24 = (double)((float)(dVar19 * (double)(float)(dVar24 * dVar24)) *
                             SQRT(SQRT((param_4[2] - *(float *)(puVar7 + 0x11)) *
                                       (param_4[2] - *(float *)(puVar7 + 0x11)) +
                                       (*param_4 - *(float *)(puVar7 + 0x10)) *
                                       (*param_4 - *(float *)(puVar7 + 0x10)) + fVar2 * fVar2)));
            if (dVar24 < dVar25) {
              dVar25 = dVar24;
              pMVar17 = pTarget;
            }
            puVar7[0xe] = 4;
            DrawTargetCrosshair(0.3,pTarget,0xff0f4f7f,0xff0f0000);
          }
        }
      }
    }
  }
  return pMVar17;
}


// 0x036b630 (0x244 bytes)
// strings: 0036b620: '?&ff_qfff' (raw) | 0036b624: '?fff' (raw)

void M426_0036b630(MobyInstance *param_1,longlong param_2)

{
  char cVar1;
  undefined4 uVar2;
  int iVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  int iVar7;
  int iVar8;
  GPiece<16> auVar9;
  GPiece<16> auVar10;
  GPiece<16> auVar11;
  GPiece<40> local_40;
  
  iVar7 = FastDecTimerS32(param_2 + 0x74);
  iVar3 = (int)param_2;
  if ((((iVar7 != 0) || (*(int *)(iVar3 + 0x70) == 0)) ||
      (cVar1 = *(char *)(*(int *)(iVar3 + 0x70) + 0x20), cVar1 == -2)) || (cVar1 == -3)) {
    *(undefined4 *)(iVar3 + 0x70) = 0;
    *(undefined4 *)(iVar3 + 0x78) = 0;
  }
  iVar7 = M426_0036b008(0x3fb921fb60000000,0x3fb921fb60000000,0x406fe00000000000,0x951500,local_40);
  if ((iVar7 == 0) || (*(int *)(iVar3 + 0x70) != 0)) {
    iVar8 = *(int *)(iVar3 + 0x70);
    if ((iVar8 != 0) &&
       ((*(char *)(iVar8 + 0x20) != -3 && *(char *)(iVar8 + 0x20) != -2 &&
        (*(char *)(iVar8 + 0x31) != '\0')))) goto LAB_0036b770;
  }
  *(int *)(iVar3 + 0x70) = iVar7;
  auVar9 = ZEXT416(0xffffffff);
  auVar9 = auVar9 | auVar9 << 0x20 | auVar9 << 0x40 | auVar9 << 0x60;
  *(undefined4 *)(iVar3 + 0x78) = 0;
  auVar10 = vectorShiftLeftIntegerWord(auVar9,auVar9);
  auVar9 = loadVectorLeftIndexed(8,0x36b610);
  auVar9 = auVar9 >> 0x60 & (GPiece<16>)0xffffffff;
  auVar11 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
  auVar9 = vectorMultiplyAddFloatingPoint
                     (auVar11,auVar9 | auVar9 << 0x20 | auVar9 << 0x40 | auVar9 << 0x60,auVar10);
  auVar9 = vectorConvertToSignedFixedPointWordSaturate(auVar9,0);
  auVar9 = auVar9 >> 0x60 & (GPiece<16>)0xffffffff;
  uVar2 = storeVectorElementWordIndexed
                    (auVar9 | auVar9 << 0x20 | auVar9 << 0x40 | auVar9 << 0x60,0x74,param_2);
  *(undefined4 *)(iVar3 + 0x74U & 0xfffffffc) = uVar2;
  iVar8 = iVar7;
LAB_0036b770:
  if ((iVar8 != 0) && (*(int *)(iVar3 + 0x68) == 0)) {
    if ((*(char *)(iVar8 + 0x20) == -2) || (*(char *)(iVar8 + 0x20) == -3)) {
      *(undefined4 *)(iVar3 + 0x70) = 0;
      *(undefined4 *)(iVar3 + 0x78) = 0;
    }
    else {
      fVar4 = GameCamera.posY - *(float *)(iVar8 + 0x14);
      fVar5 = GameCamera.posX - *(float *)(iVar8 + 0x10);
      fVar6 = GameCamera.posZ - *(float *)(iVar8 + 0x18);
      DrawTargetCrosshair
                (ABS(-(SQRT(fVar6 * fVar6 + fVar5 * fVar5 + fVar4 * fVar4) * 0.006666667 * 0.65 -
                      0.9)),param_1,0xff0fff0f,0x36b610);
    }
  }
  return;
}


// 0x036b8c8 (0x11a0 bytes)
// inlined: FastRSqrt @0x36bc78, FastAtan2 @0x36bf08, FastAtan2 @0x36c0d8, FastAtan2 @0x36c49c, FastAtan2 @0x36c668
void M426_0036b8c8(MobyInstance *param_1,float *param_2)

{
  char cVar1;
  byte bVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  MobyModeBit MVar11;
  f32 fVar12;
  uint uVar13;
  ulonglong *puVar14;
  float fVar15;
  float fVar16;
  int iVar17;
  uint uVar18;
  ulonglong uVar19;
  float fVar23;
  int iVar24;
  ulonglong uVar20;
  longlong lVar21;
  longlong lVar22;
  float *pfVar26;
  longlong lVar25;
  longlong lVar27;
  ulonglong unaff_r27;
  ulonglong unaff_r28;
  ulonglong unaff_r29;
  ulonglong unaff_r30;
  ulonglong unaff_r31;
  ulonglong in_LR;
  longlong lVar28;
  undefined8 uVar29;
  undefined8 uVar30;
  double dVar31;
  double dVar32;
  ulonglong in_f26;
  ulonglong in_f27;
  ulonglong in_f28;
  undefined8 uVar33;
  ulonglong in_f29;
  double dVar34;
  ulonglong in_f30;
  double dVar35;
  ulonglong in_f31;
  double dVar36;
  double dVar37;
  float local_130 [76];
  
  uVar19 = ZEXT48(&stack0x00000000);
  lVar22 = uVar19 - 0x210;
  puVar14 = (ulonglong *)lVar22;
  *puVar14 = uVar19;
  puVar14[0x44] = in_LR;
  puVar14[0x3c] = in_f26;
  puVar14[0x3d] = in_f27;
  puVar14[0x3e] = in_f28;
  puVar14[0x3f] = in_f29;
  puVar14[0x40] = in_f30;
  puVar14[0x41] = in_f31;
  puVar14[0x3a] = unaff_r30;
  puVar14[0x3b] = unaff_r31;
  puVar14[0x37] = unaff_r27;
  dVar34 = 0.0;
  *(undefined4 *)(puVar14 + 0x18) = 0;
  *(undefined4 *)((int)puVar14 + 0xc4) = 0;
  *(undefined4 *)(puVar14 + 0x19) = 0;
  *(undefined4 *)((int)puVar14 + 0xcc) = 0;
  fVar5 = DAT_008411c4;
  uVar33 = 0x4020000000000000;
  fVar4 = g_FrameTime * 8.0;
  fVar23 = (float)((int)param_2[0x11] + 1);
  MVar11 = param_1->modeBits;
  param_2[0x11] = fVar23;
  uVar18 = g_Pad.repeat;
  param_1->modeBits =
       MVar11 & (MIRROR|CAN_BE_DAMAGED|HIDE_BACKFACES|CAN_BE_AUTO_TARGETED|DISABLE_Z_WRITE|
                 DRAW_SHADOW|DRAW_TRANSPARENT_WEIRD|NO_DRAW|UNK_40|HAS_SPECIAL_VARS|HAS_GLOW|
                 TRANSPARENT|NO_POST_UPDATE|NO_UPDATE|DISABLED);
  uVar13 = g_Pad.padDownButtons;
  fVar6 = g_Pad.sticks.z;
  fVar3 = param_2[0xe];
  dVar36 = (double)g_Pad.sticks.w;
  dVar31 = (double)(param_1->rotation).z;
  puVar14[0x39] = unaff_r29;
  puVar14[0x38] = unaff_r28;
  *(float *)(puVar14 + 0x19) = fVar4 * fVar5;
  if (((uVar18 & 0x8000) != 0) &&
     (cVar1 = *(char *)(param_2 + 0xc), *(byte *)(param_2 + 0xc) = cVar1 + 1U,
     1 < (byte)(cVar1 + 1U))) {
    *(undefined1 *)(param_2 + 0xc) = 0;
  }
  if (DAT_00841160 < (int)fVar23) {
    if ((uVar13 & 0x80) == 0) {
      if (DAT_00841164 * DAT_008411c4 - DAT_0084115c * DAT_008411c4 <= fVar3) {
        fVar4 = DAT_00841164 * DAT_008411c4;
        if (fVar4 < fVar3) {
          fVar4 = (DAT_00841164 * DAT_008411c4 - fVar3) * DAT_00841170 + fVar3;
        }
      }
      else {
        fVar4 = DAT_0084115c * DAT_008411c4 + fVar3;
      }
      param_2[0xe] = fVar4;
    }
    else {
      fVar4 = DAT_0084116c * DAT_008411c4 + fVar3;
      param_2[0xe] = fVar4;
      fVar3 = DAT_00841168 * DAT_008411c4;
      if (fVar3 < fVar4) {
        param_2[0xe] = fVar3;
        fVar4 = fVar3;
      }
    }
  }
  else {
    fVar4 = DAT_00841158 * DAT_008411c4 + fVar3;
    param_2[0xe] = fVar4;
  }
  if (DAT_00841174 < (int)fVar23) {
    AccelDelt(fVar6,DAT_008411cc,DAT_008411d0,DAT_010c5134,param_2 + 0x13,0x840000,
                        param_2 + 0x1f);
    AccelDelt((float)dVar36,DAT_008411d4,DAT_008411d8,DAT_008411dc,param_2 + 0x14,0x840000
                        ,param_2 + 0x20);
    AccelDeltAng
              ((double)(param_2[0x13] * DAT_008411bc),(double)DAT_008411e0,(double)DAT_008411e4,
               (double)DAT_010c5138,&param_1->rotation,&PTR_DAT_00840000,param_2 + 0x21);
    AccelDeltAng
              (-(double)(param_2[0x14] * DAT_00841254),(double)DAT_008411e8,(double)DAT_008411ec,
               (double)DAT_010c513c,&(param_1->rotation).y,&PTR_DAT_00840000,param_2 + 0x22);
    fVar12 = (param_1->rotation).y;
    uVar13 = (int)fVar12 >> 0x1f;
    iVar24 = (uVar13 >> 1 ^ (uint)fVar12) - uVar13;
    fVar3 = param_2[0x13];
    if (iVar24 < (int)(FLOAT_ORDER(DAT_00841254))) {
      if (iVar24 <= (int)(FLOAT_ORDER(DAT_00841258))) {
        (param_1->rotation).y = DAT_00841258 + 0.001;
      }
    }
    else {
      (param_1->rotation).y = DAT_00841254 - 0.001;
    }
    dVar31 = (double)FastDiffRots
                               ((double)(param_1->rotation).z,(double)(fVar3 * DAT_00841180));
    (param_1->rotation).z = (float)dVar31;
    fVar4 = param_2[0xe];
  }
  MB_SphericalToVector
            (fVar4,(float)dVar31,-(param_1->rotation).y,(float *)(puVar14 + 0x1a));
  fVar3 = *(float *)((int)puVar14 + 0xd4);
  fVar4 = *(float *)(puVar14 + 0x1a);
  fVar5 = *(float *)(puVar14 + 0x1b);
  fVar6 = param_2[0xe];
  fVar23 = (param_1->rotation).y;
  fVar7 = (param_1->pos).x;
  fVar8 = (param_1->pos).y;
  fVar9 = (param_1->pos).z;
  fVar15 = fVar5 * fVar5 + fVar4 * fVar4 + fVar3 * fVar3;
  if ((double)SQRT(fVar15) == dVar34) {
    fVar10 = *(float *)((int)puVar14 + 0xdc);
    dVar31 = dVar34;
    dVar36 = dVar34;
    dVar32 = dVar34;
  }
  else {
    fVar16 = 1.0 / SQRT(fVar15);
    fVar10 = *(float *)((int)puVar14 + 0xdc);
    fVar16 = -(fVar15 * fVar16 * fVar16 - 1.0) * fVar16 * 0.5 + fVar16;
    fVar16 = -(fVar15 * fVar16 * fVar16 - 1.0) * fVar16 * 0.5 + fVar16;
    fVar16 = -(fVar15 * fVar16 * fVar16 - 1.0) * fVar16 * 0.5 + fVar16;
    dVar32 = (double)(fVar4 * fVar16);
    dVar36 = (double)(fVar3 * fVar16);
    dVar31 = (double)(fVar5 * fVar16);
  }
  param_2[4] = (float)dVar32;
  param_2[5] = (float)dVar36;
  param_2[6] = (float)dVar31;
  param_2[7] = fVar10;
  (param_1->pos).x = fVar7 + fVar4;
  (param_1->pos).y = fVar8 + fVar3;
  (param_1->pos).z = fVar9 + fVar5;
  dVar31 = (double)(fVar6 - DAT_00841164);
  if ((double)(fVar6 - DAT_00841164) - dVar34 < 0.0) {
    dVar31 = dVar34;
  }
  fVar3 = (float)(dVar31 / (double)(DAT_00841168 - DAT_00841164));
  dVar37 = (double)fVar3;
  param_2[0x2d] = fVar3;
  uVar29 = FastWrapRot(fVar23 * DAT_00841238,DAT_00841188);
  dVar31 = (double)FastWrapRot((param_1->rotation).z,3.1415927);
  uVar30 = FastWrapRot((float)dVar31,param_2[0x13] * DAT_0084123c);
  AccelDeltAng
            (uVar29,(double)DAT_00841208,(double)DAT_0084120c,(double)DAT_010c514c,param_2 + 0x28,
             &PTR_DAT_00840000,param_2 + 0x2a);
  AccelDeltAng
            (uVar30,(double)DAT_00841210,(double)DAT_00841214,(double)DAT_010c5150,param_2 + 0x29,
             &PTR_DAT_00840000,param_2 + 0x2b);
  MB_SphericalToVector(DAT_00841184,param_2[0x29],param_2[0x28],local_130);
  fVar3 = (param_1->pos).y;
  fVar4 = (param_1->pos).z;
  *(float *)(puVar14 + 0x1c) = *(float *)(puVar14 + 0x1c) + (param_1->pos).x;
  *(float *)((int)puVar14 + 0xe4) = *(float *)((int)puVar14 + 0xe4) + fVar3;
  *(float *)(puVar14 + 0x1d) = *(float *)(puVar14 + 0x1d) + fVar4;
  Camera_SetMobyDrivenTargetPos(local_130);
  fVar4 = *(float *)((int)puVar14 + 0xe4) - (param_1->pos).y;
  fVar5 = *(float *)(puVar14 + 0x1c) - (param_1->pos).x;
  fVar3 = (param_1->rotation).y;
  fVar6 = (param_1->pos).z - *(float *)(puVar14 + 0x1d);
  fVar4 = SQRT(fVar5 * fVar5 + fVar4 * fVar4);
  *(float *)((int)puVar14 + 300) = fVar6;
  dVar32 = ABS((double)fVar6);
  dVar36 = ABS((double)fVar4);
  *(float *)(puVar14 + 0x25) = fVar4;
  *(float *)(puVar14 + 0x26) = (float)(dVar36 - dVar32);
  dVar35 = 0.7853981852531433;
  uVar20 = (ulonglong)(*(uint *)(puVar14 + 0x25) >> 0x1c) & 8 |
           (ulonglong)(*(uint *)(puVar14 + 0x26) >> 0x1e) & 2 |
           (ulonglong)(*(uint *)((int)puVar14 + 300) >> 0x1d) & 4;
  dVar31 = ABS((double)*(float *)(puVar14 + 0x25));
  if ((double)*(float *)(puVar14 + 0x26) - dVar34 < 0.0) {
    dVar31 = dVar32;
  }
  fVar4 = *(float *)(&g_atanQuadrantTable + (int)(uVar20 << 2));
  dVar32 = ABS((double)*(float *)((int)puVar14 + 300));
  if ((double)*(float *)(puVar14 + 0x26) - dVar34 < 0.0) {
    dVar32 = dVar36;
  }
  fVar5 = *(float *)(((uint)(uVar20 << 2) | 0x735900) + 4);
  dVar36 = dVar34;
  if (dVar34 < dVar31) {
    lVar21 = uVar19 - 0x200;
    lVar25 = uVar19 - 0x7c;
    lVar27 = uVar19 - 0x6c;
    lVar28 = 2;
    fVar6 = (float)(dVar32 - dVar31) / (float)(dVar32 + dVar31);
    fVar23 = fVar6 * fVar6;
    *(float *)(puVar14 + 0x34) = fVar6;
    *(float *)(puVar14 + 0x33) = fVar6;
    *(float *)((int)puVar14 + 0x19c) = fVar6;
    *(float *)((int)puVar14 + 0x194) = fVar6;
    fVar6 = fVar23 * fVar23;
    *(float *)(puVar14 + 0x33) = *(float *)(puVar14 + 0x33) * fVar23;
    *(float *)((int)puVar14 + 0x19c) = *(float *)((int)puVar14 + 0x19c) * fVar6;
    *(float *)(puVar14 + 0x34) = *(float *)(puVar14 + 0x34) * fVar6 * fVar23;
    do {
      *(float *)((int)lVar21 + 0x194) = *(float *)((int)lVar21 + 0x184) * fVar6 * fVar6;
      iVar24 = (int)lVar25;
      lVar21 = lVar21 + 8;
      lVar25 = lVar25 + 8;
      *(float *)((int)lVar27 + 4) = *(float *)(iVar24 + 4) * fVar6 * fVar6;
      lVar27 = lVar27 + 8;
      lVar28 = lVar28 + -1;
    } while (lVar28 != 0);
    lVar28 = 4;
    lVar27 = uVar19 - 0x7c;
    pfVar26 = (float *)&DAT_007358e0;
    lVar21 = lVar22;
    lVar25 = lVar27;
    do {
      fVar6 = *pfVar26;
      fVar23 = pfVar26[1];
      pfVar26 = pfVar26 + 2;
      *(float *)((int)lVar21 + 0x194) = *(float *)((int)lVar21 + 0x194) * fVar6;
      lVar21 = lVar21 + 8;
      *(float *)((int)lVar25 + 4) = *(float *)((int)lVar25 + 4) * fVar23;
      lVar25 = lVar25 + 8;
      lVar28 = lVar28 + -1;
    } while (lVar28 != 0);
    lVar25 = 2;
    lVar21 = lVar22;
    dVar31 = dVar34;
    do {
      iVar24 = (int)lVar21;
      lVar21 = lVar21 + 0x10;
      iVar17 = (int)lVar27;
      lVar27 = lVar27 + 0x10;
      dVar31 = (double)((float)(dVar31 + (double)*(float *)(iVar24 + 0x194)) +
                        *(float *)(iVar17 + 4) + *(float *)(iVar17 + 8) + *(float *)(iVar17 + 0xc));
      lVar25 = lVar25 + -1;
    } while (lVar25 != 0);
    dVar36 = (double)((float)(dVar31 + 0.7853981852531433) * fVar4 + fVar5);
  }
  uVar29 = FastDiffRots(-dVar36,-(double)(fVar3 * DAT_00841240));
  fVar3 = (param_1->pos).x - *(float *)(puVar14 + 0x1c);
  fVar4 = (param_1->pos).y - *(float *)((int)puVar14 + 0xe4);
  dVar36 = ABS((double)fVar3);
  dVar32 = ABS((double)fVar4);
  *(float *)((int)puVar14 + 0x11c) = fVar3;
  *(float *)(puVar14 + 0x24) = fVar4;
  fVar3 = param_2[0x13];
  *(float *)((int)puVar14 + 0x124) = (float)(dVar36 - dVar32);
  uVar20 = (ulonglong)(*(uint *)((int)puVar14 + 0x11c) >> 0x1c) & 8 |
           (ulonglong)(*(uint *)((int)puVar14 + 0x124) >> 0x1e) & 2 |
           (ulonglong)(*(uint *)(puVar14 + 0x24) >> 0x1d) & 4;
  dVar31 = ABS((double)*(float *)((int)puVar14 + 0x11c));
  if ((double)*(float *)((int)puVar14 + 0x124) - dVar34 < 0.0) {
    dVar31 = dVar32;
  }
  fVar4 = *(float *)(&g_atanQuadrantTable + (int)(uVar20 << 2));
  dVar32 = ABS((double)*(float *)(puVar14 + 0x24));
  if ((double)*(float *)((int)puVar14 + 0x124) - dVar34 < 0.0) {
    dVar32 = dVar36;
  }
  fVar5 = *(float *)(((uint)(uVar20 << 2) | 0x735900) + 4);
  dVar36 = dVar34;
  if (dVar34 < dVar31) {
    lVar21 = uVar19 - 0x200;
    lVar25 = uVar19 - 0x9c;
    lVar27 = uVar19 - 0x8c;
    lVar28 = 2;
    fVar6 = (float)(dVar32 - dVar31) / (float)(dVar32 + dVar31);
    fVar23 = fVar6 * fVar6;
    *(float *)(puVar14 + 0x30) = fVar6;
    *(float *)(puVar14 + 0x2f) = fVar6;
    *(float *)((int)puVar14 + 0x17c) = fVar6;
    *(float *)((int)puVar14 + 0x174) = fVar6;
    fVar6 = fVar23 * fVar23;
    *(float *)(puVar14 + 0x2f) = *(float *)(puVar14 + 0x2f) * fVar23;
    *(float *)((int)puVar14 + 0x17c) = *(float *)((int)puVar14 + 0x17c) * fVar6;
    *(float *)(puVar14 + 0x30) = *(float *)(puVar14 + 0x30) * fVar6 * fVar23;
    do {
      *(float *)((int)lVar21 + 0x174) = *(float *)((int)lVar21 + 0x164) * fVar6 * fVar6;
      iVar24 = (int)lVar25;
      lVar21 = lVar21 + 8;
      lVar25 = lVar25 + 8;
      *(float *)((int)lVar27 + 4) = *(float *)(iVar24 + 4) * fVar6 * fVar6;
      lVar27 = lVar27 + 8;
      lVar28 = lVar28 + -1;
    } while (lVar28 != 0);
    lVar28 = 4;
    lVar27 = uVar19 - 0x9c;
    pfVar26 = (float *)&DAT_007358e0;
    lVar21 = lVar22;
    lVar25 = lVar27;
    do {
      fVar6 = *pfVar26;
      fVar23 = pfVar26[1];
      pfVar26 = pfVar26 + 2;
      *(float *)((int)lVar21 + 0x174) = *(float *)((int)lVar21 + 0x174) * fVar6;
      lVar21 = lVar21 + 8;
      *(float *)((int)lVar25 + 4) = *(float *)((int)lVar25 + 4) * fVar23;
      lVar25 = lVar25 + 8;
      lVar28 = lVar28 + -1;
    } while (lVar28 != 0);
    lVar25 = 2;
    lVar21 = lVar22;
    dVar31 = dVar34;
    do {
      iVar24 = (int)lVar21;
      lVar21 = lVar21 + 0x10;
      iVar17 = (int)lVar27;
      lVar27 = lVar27 + 0x10;
      dVar31 = (double)((float)(dVar31 + (double)*(float *)(iVar24 + 0x174)) +
                        *(float *)(iVar17 + 4) + *(float *)(iVar17 + 8) + *(float *)(iVar17 + 0xc));
      lVar25 = lVar25 + -1;
    } while (lVar25 != 0);
    dVar36 = (double)((float)(dVar31 + dVar35) * fVar4 + fVar5);
  }
  uVar30 = FastDiffRots(dVar36,(double)(fVar3 * DAT_00841244));
  AccelDeltAng
            (dVar34,(double)DAT_008411f0,(double)DAT_008411f4,(double)DAT_010c5140,param_2 + 8,
             &PTR_DAT_00840000,param_2 + 0x23);
  AccelDeltAng
            (uVar29,(double)DAT_008411f8,(double)DAT_008411fc,(double)DAT_010c5144,param_2 + 9,
             &PTR_DAT_00840000,param_2 + 0x24);
  AccelDeltAng
            (uVar30,(double)DAT_00841200,(double)DAT_00841204,(double)DAT_010c5148,param_2 + 10,
             &PTR_DAT_00840000,param_2 + 0x25);
  Camera_SetMobyDrivenTargetRot(param_2 + 8);
  AccelDelt((float)((double)(float)((double)DAT_0084121c - (double)DAT_00841218) * dVar37
                             + (double)DAT_00841218),DAT_00841220,DAT_00841224,DAT_00841228,
                      param_2 + 0x27,0x840000,param_2 + 0x2c);
  fVar3 = param_2[0x27] * 0.5;
  fVar5 = fVar3 + 1.5707963;
  fVar4 = 3.1415925 - fVar3;
  if (fVar3 - (3.1415925 - fVar3) < 0.0) {
    fVar4 = fVar3;
  }
  fVar6 = 3.1415925 - fVar5;
  if (fVar5 - (3.1415925 - fVar5) < 0.0) {
    fVar6 = fVar5;
  }
  fVar23 = -3.1415925 - fVar3;
  if ((-3.1415925 - fVar3) - fVar4 < 0.0) {
    fVar23 = fVar4;
  }
  fVar4 = fVar23 * fVar23;
  fVar3 = -3.1415925 - fVar5;
  if ((-3.1415925 - fVar5) - fVar6 < 0.0) {
    fVar3 = fVar6;
  }
  fVar5 = fVar3 * fVar3;
  fVar6 = fVar4 * fVar4 * fVar23;
  fVar7 = fVar4 * fVar6;
  fVar8 = fVar5 * fVar5 * fVar3;
  fVar9 = fVar5 * fVar8;
  g_ViewContext.xratio =
       (fVar4 * fVar7 * 2.601887e-06 +
       fVar7 * -0.0001980741 + fVar6 * 0.0083330255 + fVar4 * fVar23 * -0.16666657 + fVar23) /
       (fVar5 * fVar9 * 2.601887e-06 +
       fVar9 * -0.0001980741 + fVar8 * 0.0083330255 + fVar5 * fVar3 * -0.16666657 + fVar3);
  UpdateViewContext();
  iVar24 = CollSphere((double)DAT_00841248,&param_1->pos,&PTR_DAT_00840000,0,param_1);
  if ((iVar24 != 0) &&
     ((g_CollOutput.pMoby == (MobyInstance *)0x0 ||
      (((g_CollOutput.pMoby)->oClass != RATCHET && ((g_CollOutput.pMoby)->oClass != 0x192)))))) {
    (param_1->pos).x = g_CollOutput.push.x;
    (param_1->pos).y = g_CollOutput.push.y;
    (param_1->pos).z = g_CollOutput.push.z;
    (param_1->pos).w = g_CollOutput.push.w;
    FastVecReflect(uVar19 - 0x140,uVar19 - 0x140,0xa10980);
    dVar32 = ABS((double)*(float *)(puVar14 + 0x1a));
    dVar31 = ABS((double)*(float *)((int)puVar14 + 0xd4));
    dVar37 = (double)(param_1->rotation).z;
    *(float *)(puVar14 + 0x23) = (float)(dVar32 - dVar31);
    uVar20 = (ulonglong)(*(uint *)(puVar14 + 0x1a) >> 0x1c) & 8 |
             (ulonglong)(*(uint *)(puVar14 + 0x23) >> 0x1e) & 2 |
             (ulonglong)(*(uint *)((int)puVar14 + 0xd4) >> 0x1d) & 4;
    dVar36 = dVar32;
    if ((double)*(float *)(puVar14 + 0x23) - dVar34 < 0.0) {
      dVar36 = dVar31;
    }
    fVar3 = *(float *)(&g_atanQuadrantTable + (int)(uVar20 << 2));
    if ((double)*(float *)(puVar14 + 0x23) - dVar34 < 0.0) {
      dVar31 = dVar32;
    }
    fVar4 = *(float *)(((uint)(uVar20 << 2) | 0x735900) + 4);
    dVar32 = dVar34;
    if (dVar34 < dVar36) {
      lVar21 = uVar19 - 0x200;
      lVar27 = uVar19 - 0xac;
      lVar25 = uVar19 - 0xbc;
      lVar28 = 2;
      fVar5 = (float)(dVar31 - dVar36) / (float)(dVar31 + dVar36);
      fVar6 = fVar5 * fVar5;
      *(float *)(puVar14 + 0x2c) = fVar5;
      *(float *)(puVar14 + 0x2b) = fVar5;
      *(float *)((int)puVar14 + 0x15c) = fVar5;
      *(float *)((int)puVar14 + 0x154) = fVar5;
      fVar5 = fVar6 * fVar6;
      *(float *)(puVar14 + 0x2b) = *(float *)(puVar14 + 0x2b) * fVar6;
      *(float *)((int)puVar14 + 0x15c) = *(float *)((int)puVar14 + 0x15c) * fVar5;
      *(float *)(puVar14 + 0x2c) = *(float *)(puVar14 + 0x2c) * fVar5 * fVar6;
      do {
        *(float *)((int)lVar21 + 0x154) = *(float *)((int)lVar21 + 0x144) * fVar5 * fVar5;
        iVar24 = (int)lVar25;
        lVar25 = lVar25 + 8;
        lVar21 = lVar21 + 8;
        *(float *)((int)lVar27 + 4) = *(float *)(iVar24 + 4) * fVar5 * fVar5;
        lVar27 = lVar27 + 8;
        lVar28 = lVar28 + -1;
      } while (lVar28 != 0);
      lVar28 = 4;
      lVar27 = uVar19 - 0xbc;
      pfVar26 = (float *)&DAT_007358e0;
      lVar21 = lVar22;
      lVar25 = lVar27;
      do {
        fVar5 = *pfVar26;
        fVar6 = pfVar26[1];
        pfVar26 = pfVar26 + 2;
        *(float *)((int)lVar21 + 0x154) = *(float *)((int)lVar21 + 0x154) * fVar5;
        lVar21 = lVar21 + 8;
        *(float *)((int)lVar25 + 4) = *(float *)((int)lVar25 + 4) * fVar6;
        lVar25 = lVar25 + 8;
        lVar28 = lVar28 + -1;
      } while (lVar28 != 0);
      lVar25 = 2;
      lVar21 = lVar22;
      dVar31 = dVar34;
      do {
        iVar24 = (int)lVar21;
        iVar17 = (int)lVar27;
        lVar21 = lVar21 + 0x10;
        lVar27 = lVar27 + 0x10;
        dVar31 = (double)((float)(dVar31 + (double)*(float *)(iVar24 + 0x154)) +
                          *(float *)(iVar17 + 4) + *(float *)(iVar17 + 8) + *(float *)(iVar17 + 0xc)
                         );
        lVar25 = lVar25 + -1;
      } while (lVar25 != 0);
      dVar32 = (double)((float)(dVar31 + dVar35) * fVar3 + fVar4);
    }
    dVar31 = (double)FastDiffRots(dVar32,dVar37);
    dVar31 = (double)FastWrapRot((float)dVar37,(float)(dVar31 * (double)DAT_00841178));
    fVar3 = *(float *)((int)puVar14 + 0xd4);
    fVar4 = *(float *)(puVar14 + 0x1a);
    (param_1->rotation).z = (float)dVar31;
    dVar37 = (double)(param_1->rotation).y;
    dVar31 = ABS((double)*(float *)(puVar14 + 0x1b));
    fVar3 = SQRT(fVar4 * fVar4 + fVar3 * fVar3);
    dVar32 = ABS((double)fVar3);
    *(float *)(puVar14 + 0x22) = fVar3;
    *(float *)((int)puVar14 + 0x114) = (float)(dVar32 - dVar31);
    uVar20 = (ulonglong)(*(uint *)(puVar14 + 0x22) >> 0x1c) & 8 |
             (ulonglong)(*(uint *)((int)puVar14 + 0x114) >> 0x1e) & 2 |
             (ulonglong)(*(uint *)(puVar14 + 0x1b) >> 0x1d) & 4;
    dVar36 = ABS((double)*(float *)(puVar14 + 0x22));
    if ((double)*(float *)((int)puVar14 + 0x114) - dVar34 < 0.0) {
      dVar36 = dVar31;
    }
    fVar4 = *(float *)(&g_atanQuadrantTable + (int)(uVar20 << 2));
    fVar3 = *(float *)(((uint)(uVar20 << 2) | 0x735900) + 4);
    if ((double)*(float *)((int)puVar14 + 0x114) - dVar34 < 0.0) {
      dVar31 = dVar32;
    }
    dVar32 = dVar34;
    if (dVar34 < dVar36) {
      lVar21 = uVar19 - 0x200;
      lVar25 = uVar19 - 0xdc;
      lVar27 = uVar19 - 0xcc;
      lVar28 = 2;
      fVar5 = (float)(dVar31 - dVar36) / (float)(dVar31 + dVar36);
      fVar6 = fVar5 * fVar5;
      *(float *)(puVar14 + 0x28) = fVar5;
      *(float *)(puVar14 + 0x27) = fVar5;
      *(float *)((int)puVar14 + 0x13c) = fVar5;
      *(float *)((int)puVar14 + 0x134) = fVar5;
      fVar5 = fVar6 * fVar6;
      *(float *)(puVar14 + 0x27) = *(float *)(puVar14 + 0x27) * fVar6;
      *(float *)((int)puVar14 + 0x13c) = *(float *)((int)puVar14 + 0x13c) * fVar5;
      *(float *)(puVar14 + 0x28) = *(float *)(puVar14 + 0x28) * fVar5 * fVar6;
      do {
        *(float *)((int)lVar21 + 0x134) = *(float *)((int)lVar21 + 0x124) * fVar5 * fVar5;
        iVar24 = (int)lVar25;
        lVar21 = lVar21 + 8;
        lVar25 = lVar25 + 8;
        *(float *)((int)lVar27 + 4) = *(float *)(iVar24 + 4) * fVar5 * fVar5;
        lVar27 = lVar27 + 8;
        lVar28 = lVar28 + -1;
      } while (lVar28 != 0);
      lVar28 = 4;
      lVar27 = uVar19 - 0xdc;
      pfVar26 = (float *)&DAT_007358e0;
      lVar21 = lVar22;
      lVar25 = lVar27;
      do {
        fVar5 = *pfVar26;
        fVar6 = pfVar26[1];
        pfVar26 = pfVar26 + 2;
        *(float *)((int)lVar21 + 0x134) = *(float *)((int)lVar21 + 0x134) * fVar5;
        lVar21 = lVar21 + 8;
        *(float *)((int)lVar25 + 4) = *(float *)((int)lVar25 + 4) * fVar6;
        lVar25 = lVar25 + 8;
        lVar28 = lVar28 + -1;
      } while (lVar28 != 0);
      lVar21 = 2;
      dVar31 = dVar34;
      do {
        iVar24 = (int)lVar22;
        lVar22 = lVar22 + 0x10;
        iVar17 = (int)lVar27;
        lVar27 = lVar27 + 0x10;
        dVar31 = (double)((float)(dVar31 + (double)*(float *)(iVar24 + 0x134)) +
                          *(float *)(iVar17 + 4) + *(float *)(iVar17 + 8) + *(float *)(iVar17 + 0xc)
                         );
        lVar21 = lVar21 + -1;
      } while (lVar21 != 0);
      dVar32 = (double)((float)(dVar31 + dVar35) * fVar4 + fVar3);
    }
    dVar31 = (double)FastDiffRots(-dVar32,dVar37);
    dVar31 = (double)FastWrapRot((float)dVar37,(float)(dVar31 * (double)DAT_0084117c));
    (param_1->rotation).y = (float)dVar31;
    param_2[0xe] = param_2[0xe] * DAT_00841194;
    DAT_0096b2dc = DAT_0096b2dc - DAT_00841198;
    if ((double)DAT_0096b2dc < dVar34) {
      FastVecReflect(uVar19 - 0x150,uVar19 - 0x140,0xa10980);
      fVar3 = g_FrameTime;
      fVar4 = *(float *)((int)puVar14 + 0xc4);
      fVar5 = *(float *)(puVar14 + 0x18);
      fVar6 = *(float *)(puVar14 + 0x19);
      dVar36 = (double)SQRT(fVar6 * fVar6 + fVar5 * fVar5 + fVar4 * fVar4);
      puVar14[0x12] = 0xffffffffffffffff;
      puVar14[0x14] = 1;
      puVar14[0x15] = 1;
      puVar14[0x16] = 0xffffffffffffffff;
      puVar14[0x17] = 0;
      fVar3 = (float)((double)(fVar3 * 2.0) / dVar36);
      dVar31 = dVar34;
      if (dVar34 - dVar36 < 0.0) {
        dVar31 = (double)(fVar5 * fVar3);
      }
      dVar32 = dVar34;
      if (dVar34 - dVar36 < 0.0) {
        dVar32 = (double)(fVar4 * fVar3);
      }
      dVar35 = dVar34;
      if (dVar34 - dVar36 < 0.0) {
        dVar35 = (double)(fVar6 * fVar3);
      }
      if (dVar36 - dVar34 < 0.0) {
        dVar31 = (double)(fVar5 * fVar3);
      }
      if (dVar36 - dVar34 < 0.0) {
        dVar32 = (double)(fVar4 * fVar3);
      }
      if (dVar36 - dVar34 < 0.0) {
        dVar35 = (double)(fVar6 * fVar3);
      }
      *(float *)(puVar14 + 0x18) = (float)dVar31;
      *(float *)((int)puVar14 + 0xc4) = (float)dVar32;
      *(float *)(puVar14 + 0x19) = (float)dVar35;
      MB_genericExplosion
                (uVar33,0x4059000000000000,0x4030000000000000,uVar33,0x4022000000000000,
                 0x3ff0000000000000,0x4049000000000000,param_1,uVar19 - 0x150,0,&DAT_0036b874,1,0x1e
                 ,10,0x18);
      param_1->state = '\a';
    }
  }
  M426_0036b630(param_1,param_2);
  M426_0036ae68(param_1,param_2);
  dVar31 = (double)FastWrapRot((param_1->rotation).z,-(param_2[0x13] * DAT_0084124c));
  dVar34 = (double)FastWrapRot((param_1->rotation).y,-(param_2[0x14] * DAT_00841250));
  dVar34 = -dVar34;
  iVar24 = FastDecTimerS32(param_2 + 0x19);
  if ((iVar24 != 0) && ((g_Pad.padDownButtons & 0x240) != 0)) {
    MB_SphericalToVector
              (DAT_008411a4 * DAT_008411c4,(float)dVar31,(float)dVar34,(float *)(uVar19 - 0x120));
    fVar3 = param_2[1];
    fVar4 = param_2[2];
    bVar2 = *(byte *)((int)param_2 + 0x31);
    *(float *)(puVar14 + 0x1e) = *(float *)(puVar14 + 0x1e) + *param_2;
    *(float *)((int)puVar14 + 0xf4) = *(float *)((int)puVar14 + 0xf4) + fVar3;
    *(float *)(puVar14 + 0x1f) = *(float *)(puVar14 + 0x1f) + fVar4;
    GetBonePosition(param_1,bVar2 & 1,uVar19 - 0x110);
    M1009_00184670((double)DAT_008411c8,0xbff0000000000000,param_1,uVar19 - 0x120,uVar19 - 0x110);
    fVar3 = DAT_008411a8;
    *(byte *)((int)param_2 + 0x31) = *(byte *)((int)param_2 + 0x31) ^ 1;
    param_2[0x19] = fVar3;
  }
  MB_RegisterLameShadow(DAT_008411c0 * DAT_0084118c,param_1);
  return;
}


// 0x036cab0 (0xfa4 bytes)
// inlined: FastAtan2 @0x36ccf8, FastAtan2 @0x36ced0, FastAtan2 @0x36d304
/* Moby 426 */

void UpdateMoby_426(MobyInstance *moby)

{
  u8 uVar1;
  byte bVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float *out;
  f32 fVar8;
  void *pvVar9;
  uint uVar10;
  ulonglong *puVar11;
  int iVar12;
  ulonglong uVar13;
  longlong lVar14;
  int iVar16;
  longlong lVar15;
  MobyInstance *pMVar17;
  char cVar18;
  ulonglong uVar19;
  longlong lVar20;
  float *pfVar21;
  longlong lVar22;
  ulonglong unaff_r26;
  ulonglong unaff_r27;
  longlong lVar23;
  ulonglong unaff_r28;
  ulonglong unaff_r29;
  ulonglong unaff_r30;
  ulonglong unaff_r31;
  ulonglong in_LR;
  longlong lVar24;
  double dVar25;
  undefined8 uVar26;
  double dVar27;
  ulonglong in_f28;
  ulonglong in_f29;
  double dVar28;
  ulonglong in_f30;
  double dVar29;
  double dVar30;
  ulonglong in_f31;
  double dVar31;
  GPiece<16> auVar32;
  GPiece<16> auVar33;
  GPiece<16> auVar34;
  GPiece<16> auVar35;
  GPiece<16> auVar36;
  GPiece<16> auVar37;
  GPiece<16> auVar38;
  GPiece<16> auVar39;
  GPiece<16> auVar40;
  GPiece<16> auVar41;
  
  lVar14 = (longlong)(int)moby;
  uVar13 = ZEXT48(&stack0x00000000);
  lVar15 = uVar13 - 0x270;
  puVar11 = (ulonglong *)lVar15;
  *puVar11 = uVar13;
  puVar11[0x50] = in_LR;
  puVar11[0x4a] = in_f28;
  puVar11[0x4b] = in_f29;
  puVar11[0x4c] = in_f30;
  puVar11[0x4d] = in_f31;
  puVar11[0x49] = unaff_r31;
  puVar11[0x48] = unaff_r30;
  puVar11[0x47] = unaff_r29;
  puVar11[0x46] = unaff_r28;
  puVar11[0x45] = unaff_r27;
  puVar11[0x44] = unaff_r26;
  if ((moby != (MobyInstance *)0x0) && (out = (float *)moby->pVar, out != (float *)0x0)) {
    uVar1 = moby->state;
    if ((uVar1 != '\x01' && uVar1 != '\a') &&
       (((uVar1 != '\x02' && (iVar16 = MB_damage(lVar14,0x30001,0), iVar16 != 0)) &&
        (moby->state == '\x04')))) {
      uVar10 = (int)*(uint *)(iVar16 + 0x2c) >> 0x1f;
      if ((int)((uVar10 >> 1 ^ *(uint *)(iVar16 + 0x2c)) - uVar10) <
          (int)(FLOAT_ORDER(DAT_0096b2dc))) {
        DAT_0096b2dc = DAT_0096b2dc - *(float *)(iVar16 + 0x2c);
        if ((*(uint *)(iVar16 + 0x30) & 1) != 0) {
          auVar32 = ZEXT416(0xffffffff);
          auVar32 = auVar32 | auVar32 << 0x20 | auVar32 << 0x40 | auVar32 << 0x60;
          auVar33 = vectorShiftLeftIntegerWord(auVar32,auVar32);
          GameCamera.shake.strength = 1.0;
          auVar32 = loadVectorLeftIndexed(in_LR,0x36ca68);
          auVar32 = auVar32 >> 0x60 & (GPiece<16>)0xffffffff;
          lVar23 = uVar13 - 0x1b0;
          auVar34 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
          auVar32 = vectorMultiplyAddFloatingPoint
                              (auVar34,auVar32 | auVar32 << 0x20 | auVar32 << 0x40 | auVar32 << 0x60
                               ,auVar33);
          auVar32 = vectorConvertToSignedFixedPointWordSaturate(auVar32,0);
          auVar32 = auVar32 >> 0x60 & (GPiece<16>)0xffffffff;
          GameCamera.shake.time =
               storeVectorElementWordIndexed
                         (auVar32 | auVar32 << 0x20 | auVar32 << 0x40 | auVar32 << 0x60,0x168,
                          0x9513c0);
          dVar31 = (double)(*(float *)(iVar16 + 0x2c) * DAT_008411b8);
          MB_SphericalToVector
                    (out[0xe],(moby->rotation).z,-(moby->rotation).y,(float *)lVar23);
          (moby->pos).x = (moby->pos).x + *(float *)(iVar16 + 0x10);
          (moby->pos).y = (moby->pos).y + *(float *)(iVar16 + 0x14);
          (moby->pos).z = (moby->pos).z + *(float *)(iVar16 + 0x18);
          FastVecReflect(lVar23,lVar23,iVar16 + 0x10);
          fVar3 = ABS(*(float *)(puVar11 + 0x18));
          dVar29 = (double)(moby->rotation).z;
          fVar5 = ABS(*(float *)((int)puVar11 + 0xc4));
          *(float *)(puVar11 + 0x36) = fVar3 - fVar5;
          dVar28 = 0.0;
          uVar19 = (ulonglong)(*(uint *)(puVar11 + 0x18) >> 0x1c) & 8 |
                   (ulonglong)(*(uint *)(puVar11 + 0x36) >> 0x1e) & 2 |
                   (ulonglong)(*(uint *)((int)puVar11 + 0xc4) >> 0x1d) & 4;
          fVar4 = fVar3;
          if (*(float *)(puVar11 + 0x36) - 0.0 < 0.0) {
            fVar4 = fVar5;
          }
          fVar7 = *(float *)(&g_atanQuadrantTable + (int)(uVar19 << 2));
          if (*(float *)(puVar11 + 0x36) - 0.0 < 0.0) {
            fVar5 = fVar3;
          }
          fVar3 = *(float *)(((uint)(uVar19 << 2) | 0x735900) + 4);
          dVar25 = dVar28;
          if (0.0 < fVar4) {
            lVar23 = uVar13 - 0x260;
            lVar22 = uVar13 - 0x6c;
            lVar20 = uVar13 - 0x7c;
            lVar24 = 2;
            fVar4 = (fVar5 - fVar4) / (fVar5 + fVar4);
            fVar5 = fVar4 * fVar4;
            *(float *)(puVar11 + 0x40) = fVar4;
            *(float *)(puVar11 + 0x3f) = fVar4;
            *(float *)((int)puVar11 + 0x1fc) = fVar4;
            *(float *)((int)puVar11 + 500) = fVar4;
            fVar4 = fVar5 * fVar5;
            *(float *)(puVar11 + 0x3f) = *(float *)(puVar11 + 0x3f) * fVar5;
            *(float *)((int)puVar11 + 0x1fc) = *(float *)((int)puVar11 + 0x1fc) * fVar4;
            *(float *)(puVar11 + 0x40) = *(float *)(puVar11 + 0x40) * fVar4 * fVar5;
            do {
              *(float *)((int)lVar23 + 500) = *(float *)((int)lVar23 + 0x1e4) * fVar4 * fVar4;
              iVar16 = (int)lVar20;
              lVar20 = lVar20 + 8;
              lVar23 = lVar23 + 8;
              *(float *)((int)lVar22 + 4) = *(float *)(iVar16 + 4) * fVar4 * fVar4;
              lVar22 = lVar22 + 8;
              lVar24 = lVar24 + -1;
            } while (lVar24 != 0);
            lVar24 = 4;
            lVar22 = uVar13 - 0x7c;
            pfVar21 = (float *)&DAT_007358e0;
            lVar23 = lVar15;
            lVar20 = lVar22;
            do {
              fVar4 = *pfVar21;
              fVar5 = pfVar21[1];
              pfVar21 = pfVar21 + 2;
              *(float *)((int)lVar23 + 500) = *(float *)((int)lVar23 + 500) * fVar4;
              lVar23 = lVar23 + 8;
              *(float *)((int)lVar20 + 4) = *(float *)((int)lVar20 + 4) * fVar5;
              lVar20 = lVar20 + 8;
              lVar24 = lVar24 + -1;
            } while (lVar24 != 0);
            lVar20 = 2;
            lVar23 = lVar15;
            do {
              iVar16 = (int)lVar23;
              iVar12 = (int)lVar22;
              lVar23 = lVar23 + 0x10;
              lVar22 = lVar22 + 0x10;
              dVar25 = (double)((float)(dVar25 + (double)*(float *)(iVar16 + 500)) +
                                *(float *)(iVar12 + 4) + *(float *)(iVar12 + 8) +
                               *(float *)(iVar12 + 0xc));
              lVar20 = lVar20 + -1;
            } while (lVar20 != 0);
            dVar25 = (double)((float)(dVar25 + 0.7853981852531433) * fVar7 + fVar3);
          }
          dVar25 = (double)FastDiffRots(dVar25,dVar29);
          dVar29 = (double)FastWrapRot
                                     ((float)dVar29,
                                      (float)((double)(float)(dVar25 * (double)DAT_00841178) *
                                             dVar31));
          fVar4 = *(float *)((int)puVar11 + 0xc4);
          fVar5 = *(float *)(puVar11 + 0x18);
          (moby->rotation).z = (float)dVar29;
          dVar30 = (double)(moby->rotation).y;
          dVar29 = ABS((double)*(float *)(puVar11 + 0x19));
          fVar4 = SQRT(fVar5 * fVar5 + fVar4 * fVar4);
          dVar27 = ABS((double)fVar4);
          *(float *)(puVar11 + 0x35) = fVar4;
          *(float *)((int)puVar11 + 0x1ac) = (float)(dVar27 - dVar29);
          uVar19 = (ulonglong)(*(uint *)(puVar11 + 0x35) >> 0x1c) & 8 |
                   (ulonglong)(*(uint *)((int)puVar11 + 0x1ac) >> 0x1e) & 2 |
                   (ulonglong)(*(uint *)(puVar11 + 0x19) >> 0x1d) & 4;
          dVar25 = ABS((double)*(float *)(puVar11 + 0x35));
          if ((double)*(float *)((int)puVar11 + 0x1ac) - dVar28 < 0.0) {
            dVar25 = dVar29;
          }
          fVar5 = *(float *)(&g_atanQuadrantTable + (int)(uVar19 << 2));
          fVar4 = *(float *)(((uint)(uVar19 << 2) | 0x735900) + 4);
          if ((double)*(float *)((int)puVar11 + 0x1ac) - dVar28 < 0.0) {
            dVar29 = dVar27;
          }
          if (dVar28 < dVar25) {
            lVar23 = uVar13 - 0x260;
            lVar22 = uVar13 - 0x8c;
            lVar20 = uVar13 - 0x9c;
            lVar24 = 2;
            fVar3 = (float)(dVar29 - dVar25) / (float)(dVar29 + dVar25);
            fVar7 = fVar3 * fVar3;
            *(float *)(puVar11 + 0x3c) = fVar3;
            *(float *)(puVar11 + 0x3b) = fVar3;
            *(float *)((int)puVar11 + 0x1dc) = fVar3;
            *(float *)((int)puVar11 + 0x1d4) = fVar3;
            fVar3 = fVar7 * fVar7;
            *(float *)(puVar11 + 0x3b) = *(float *)(puVar11 + 0x3b) * fVar7;
            *(float *)((int)puVar11 + 0x1dc) = *(float *)((int)puVar11 + 0x1dc) * fVar3;
            *(float *)(puVar11 + 0x3c) = *(float *)(puVar11 + 0x3c) * fVar3 * fVar7;
            do {
              *(float *)((int)lVar23 + 0x1d4) = *(float *)((int)lVar23 + 0x1c4) * fVar3 * fVar3;
              iVar16 = (int)lVar20;
              lVar20 = lVar20 + 8;
              lVar23 = lVar23 + 8;
              *(float *)((int)lVar22 + 4) = *(float *)(iVar16 + 4) * fVar3 * fVar3;
              lVar22 = lVar22 + 8;
              lVar24 = lVar24 + -1;
            } while (lVar24 != 0);
            lVar24 = 4;
            lVar22 = uVar13 - 0x9c;
            pfVar21 = (float *)&DAT_007358e0;
            lVar23 = lVar15;
            lVar20 = lVar22;
            do {
              fVar3 = *pfVar21;
              fVar7 = pfVar21[1];
              pfVar21 = pfVar21 + 2;
              *(float *)((int)lVar23 + 0x1d4) = *(float *)((int)lVar23 + 0x1d4) * fVar3;
              lVar23 = lVar23 + 8;
              *(float *)((int)lVar20 + 4) = *(float *)((int)lVar20 + 4) * fVar7;
              lVar20 = lVar20 + 8;
              lVar24 = lVar24 + -1;
            } while (lVar24 != 0);
            lVar20 = 2;
            lVar23 = lVar15;
            do {
              iVar16 = (int)lVar23;
              iVar12 = (int)lVar22;
              lVar23 = lVar23 + 0x10;
              lVar22 = lVar22 + 0x10;
              dVar28 = (double)((float)(dVar28 + (double)*(float *)(iVar16 + 0x1d4)) +
                                *(float *)(iVar12 + 4) + *(float *)(iVar12 + 8) +
                               *(float *)(iVar12 + 0xc));
              lVar20 = lVar20 + -1;
            } while (lVar20 != 0);
            dVar28 = (double)((float)(dVar28 + 0.7853981852531433) * fVar5 + fVar4);
          }
          dVar28 = (double)FastDiffRots(dVar28,dVar30);
          dVar28 = (double)FastWrapRot
                                     ((float)dVar30,
                                      (float)((double)(float)(dVar28 * (double)DAT_0084117c) *
                                             dVar31));
          (moby->rotation).y = (float)dVar28;
        }
      }
      else {
        MB_SphericalToVector
                  (out[0xe],(moby->rotation).z,-(moby->rotation).y,(float *)(uVar13 - 0x1a0));
        auVar32 = ZEXT416(0xffffffff);
        auVar32 = auVar32 | auVar32 << 0x20 | auVar32 << 0x40 | auVar32 << 0x60;
        auVar33 = vectorShiftLeftIntegerWord(auVar32,auVar32);
        GameCamera.shake.strength = 0.2;
        auVar32 = loadVectorLeftIndexed(0x10,0x36ca68);
        auVar32 = auVar32 >> 0x60 & (GPiece<16>)0xffffffff;
        auVar34 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
        auVar32 = vectorMultiplyAddFloatingPoint
                            (auVar34,auVar32 | auVar32 << 0x20 | auVar32 << 0x40 | auVar32 << 0x60,
                             auVar33);
        auVar32 = vectorConvertToSignedFixedPointWordSaturate(auVar32,0);
        auVar32 = auVar32 >> 0x60 & (GPiece<16>)0xffffffff;
        GameCamera.shake.time =
             storeVectorElementWordIndexed
                       (auVar32 | auVar32 << 0x20 | auVar32 << 0x40 | auVar32 << 0x60,0x168,0x9513c0
                       );
        uVar26 = 0;
        DAT_0096b2dc = 0.0;
        moby->state = '\a';
        out[0xd] = 2.52234e-43;
        g_heroPosition.z = g_heroPosition.z + 0.2;
        g_heroMobyPtr->collisionMesh = (float *)0x0;
        TransitionMovement(0,1);
        DAT_0096b2d0 = (MobyInstance *)0x0;
        DAT_0096b2d4 = ~RATCHET;
        puVar11[0x12] = 0xffffffffffffffff;
        puVar11[0x14] = 1;
        puVar11[0x15] = 1;
        puVar11[0x16] = 0xffffffffffffffff;
        puVar11[0x17] = 0;
        MB_genericExplosion
                  (uVar26,uVar26,0x4010000000000000,0x4000000000000000,0x4022000000000000,
                   0x3ff0000000000000,0x402e000000000000,lVar14,uVar13 - 0x1a0,0,0xffffffffffffffff,
                   1,10,3,0x10);
      }
    }
    moby->damage = -1;
    if (DAT_0096b2d0 == moby) {
      auVar32 = ZEXT416(0xffffffff);
      auVar33 = auVar32 | auVar32 << 0x20 | auVar32 << 0x40 | auVar32 << 0x60;
      auVar32 = ZEXT416(0xffffffff);
      auVar37 = auVar32 | auVar32 << 0x20 | auVar32 << 0x40 | auVar32 << 0x60;
      auVar36 = vectorShiftLeftIntegerWord(auVar33,auVar33);
      auVar33 = loadVectorLeftIndexed(0x11b4,0x840000);
      auVar34 = vectorReciprocalEstimateFloatingPoint(auVar33);
      auVar32 = loadVectorLeftIndexed(0x18,0x36ca68);
      auVar32 = auVar32 >> 0x60 & (GPiece<16>)0xffffffff;
      auVar35 = auVar32 | auVar32 << 0x20 | auVar32 << 0x40 | auVar32 << 0x60;
      auVar38 = vectorShiftLeftIntegerWord(auVar37,auVar37);
      auVar32 = ZEXT416(0xffffffff);
      auVar37 = auVar32 | auVar32 << 0x20 | auVar32 << 0x40 | auVar32 << 0x60;
      auVar32 = ZEXT416(0xffffffff);
      auVar41 = auVar32 | auVar32 << 0x20 | auVar32 << 0x40 | auVar32 << 0x60;
      auVar39 = vectorShiftLeftIntegerWord(auVar37,auVar37);
      auVar32 = vectorNegativeMultiplySubtractFloatingPoint(auVar34,auVar33,auVar35);
      auVar34 = vectorMultiplyAddFloatingPoint(auVar34,auVar32,auVar36);
      auVar32 = ZEXT416(0xffffffff);
      auVar32 = auVar32 | auVar32 << 0x20 | auVar32 << 0x40 | auVar32 << 0x60;
      auVar37 = loadVectorLeftIndexed(0x15fc,0x969ce0);
      auVar36 = vectorShiftLeftIntegerWord(auVar32,auVar32);
      auVar32 = loadVectorLeftIndexed(0x28,0x36ca68);
      auVar32 = auVar32 >> 0x60 & (GPiece<16>)0xffffffff;
      auVar40 = vectorNegativeMultiplySubtractFloatingPoint(auVar34,auVar33,auVar35);
      auVar34 = vectorMultiplyAddFloatingPoint(auVar34,auVar40,auVar38);
      auVar38 = vectorShiftLeftIntegerWord(auVar41,auVar41);
      auVar33 = vectorNegativeMultiplySubtractFloatingPoint(auVar34,auVar33,auVar35);
      auVar33 = vectorMultiplyAddFloatingPoint(auVar34,auVar33,auVar36);
      auVar33 = vectorMultiplyAddFloatingPoint(auVar33,auVar37,auVar39);
      auVar32 = vectorMultiplyAddFloatingPoint
                          (auVar33,auVar32 | auVar32 << 0x20 | auVar32 << 0x40 | auVar32 << 0x60,
                           auVar38);
      auVar32 = vectorConvertToSignedFixedPointWordSaturate(auVar32,0);
      auVar32 = auVar32 >> 0x60 & (GPiece<16>)0xffffffff;
      DAT_0096b2e8 = storeVectorElementWordIndexed
                               (auVar32 | auVar32 << 0x20 | auVar32 << 0x40 | auVar32 << 0x60,0x1608
                                ,0x969ce0);
    }
    uVar1 = moby->state;
    if (uVar1 == '\a') {
      g_heroMobyPtr->scale = g_heroMobyPtr->pClass->gScale;
      g_heroInvisible = 0;
      TransitionMovement(0,1);
      g_heroMobyPtr->collisionMesh = (float *)0x0;
      Camera_DeactivateMobyDrivenCam(0);
      Hud_SetEntryValueById((int)DAT_0096b2ec,0);
      if ((MobyInstance *)out[0x15] != (MobyInstance *)0x0) {
        DeleteMoby((MobyInstance *)out[0x15]);
      }
      out[0x15] = 0.0;
      DeleteMoby(moby);
    }
    else {
      if (uVar1 != '\x06') {
        if (uVar1 == '\x05') {
          iVar16 = FastDecTimerS32(out + 0xd);
          if (iVar16 != 0) {
            moby->state = '\x01';
          }
        }
        else if (uVar1 == '\x04') {
          M426_0036b8c8(lVar14,out);
        }
        else if (uVar1 == '\x03') {
          dVar31 = (double)((moby->pos).y - g_heroPosition.y);
          dVar25 = (double)((moby->pos).x - g_heroPosition.x);
          dVar29 = (double)((moby->pos).z - g_heroPosition.z);
          dVar28 = (double)FastDiffRots
                                     ((double)(moby->rotation).z,(double)g_heroRotation.z);
          g_heroMobyPtr->scale = g_heroMobyPtr->scale * 0.9;
          if ((SQRT((float)(dVar29 * dVar29 +
                           (double)(float)(dVar25 * dVar25 + (double)(float)(dVar31 * dVar31)))) <
               DAT_00841150) && (dVar28 < (double)DAT_00841154)) {
            MB_SphericalToVector(DAT_00841144,(moby->rotation).z,-(moby->rotation).y,out);
            moby->state = '\x04';
            g_heroInvisible = 1;
          }
          dVar27 = (double)DAT_00841148;
          g_heroPosition.x = (float)(dVar27 * dVar25 + (double)g_heroPosition.x);
          g_heroPosition.y = (float)(dVar27 * dVar31 + (double)g_heroPosition.y);
          g_heroPosition.z = (float)(dVar27 * dVar29 + (double)g_heroPosition.z);
          dVar28 = (double)FastWrapRot
                                     (g_heroRotation.z,(float)((double)DAT_0084114c * dVar28));
          g_heroRotation.z = (float)dVar28;
        }
        else if (uVar1 == '\x02') {
          TransitionMovement(0x32,1);
          SetCameraPosition(0x951500,0x951510,0,0,0);
          out[0xf] = 0.0;
          out[0x10] = 0.0;
          fVar4 = DAT_00841144;
          out[0x11] = 0.0;
          out[0xe] = fVar4;
          out[0x13] = 0.0;
          out[0x14] = 0.0;
          out[0x1a] = 0.0;
          out[0x19] = 0.0;
          moby->updateDistance = -1;
          pMVar17 = g_heroMobyPtr;
          moby->drawDistance = 0xff;
          pMVar17->collisionMesh = (float *)0xffffffff;
          moby->state = '\x03';
          g_heroPosition.x = DAT_00841148 * ((moby->pos).x - g_heroPosition.x) + g_heroPosition.x;
          g_heroPosition.y = DAT_00841148 * ((moby->pos).y - g_heroPosition.y) + g_heroPosition.y;
          g_heroPosition.z = DAT_00841148 * ((moby->pos).z - g_heroPosition.z) + g_heroPosition.z;
          dVar28 = (double)FastDiffRots
                                     ((double)(moby->rotation).z,(double)g_heroRotation.z);
          dVar28 = (double)FastWrapRot
                                     (g_heroRotation.z,(float)((double)DAT_0084114c * dVar28));
          g_heroRotation.z = (float)dVar28;
          g_heroMobyPtr->scale = g_heroMobyPtr->scale * 0.9;
        }
        else if (uVar1 == '\x01') {
          dVar28 = (double)MB_BSphereGap(lVar14,g_heroMobyPtr);
          if (dVar28 < (double)DAT_00841140) {
            moby->state = '\x02';
            DAT_0096b2d4 = moby->oClass;
            DAT_0096b2ee = 1;
            DAT_0096b2d6 = SUB41(out[0x1b],0);
            DAT_0096b2d7 = (undefined1)DAT_008411a0;
            DAT_0096b2dc = out[0x12];
            DAT_0096b2e0 = DAT_008411b4;
            DAT_0096b2e4 = 0x42c80000;
            DAT_0096b2d9 = 3;
            DAT_0096b2da = 3;
            DAT_0096b2db = 3;
            DAT_0096b2ef = 0;
            DAT_0096b2d0 = moby;
            DAT_0096b2d8 = DAT_0096b2d7;
            iVar16 = RegisterHUDCallback
                               (0x10,0xffff,&PTR_HudEntry_InitCounter_007056a0,
                                &PTR_HudEntry_UpdateCounter_007056c8,&PTR_Draw_MobyMeterHud_00705840
                                ,&DAT_0096b2e8,200);
            DAT_0096b2ec = (short)iVar16;
          }
        }
        else if (uVar1 == '\0') {
          out[0x12] = DAT_00841190;
          moby->state = '\x01';
          fVar4 = DAT_0084119c;
          *(undefined1 *)(out + 0xc) = 0;
          out[0x1b] = fVar4;
          fVar4 = (moby->rotation).x;
          moby->scale = moby->pClass->gScale * DAT_008411c0;
          out[8] = fVar4;
          out[9] = (moby->rotation).x;
          fVar5 = g_ViewContext.xratio;
          fVar3 = ABS(g_ViewContext.xratio);
          *(undefined4 *)(puVar11 + 0x34) = 0x3f800000;
          *(float *)((int)puVar11 + 0x1a4) = 1.0 - fVar3;
          fVar4 = 0.0;
          uVar19 = (ulonglong)(*(uint *)((int)puVar11 + 0x1a4) >> 0x1e) & 2 |
                   (ulonglong)((uint)fVar5 >> 0x1d) & 4;
          fVar5 = *(float *)(&g_atanQuadrantTable + (int)(uVar19 << 2));
          fVar7 = ABS(*(float *)(puVar11 + 0x34));
          if (*(float *)((int)puVar11 + 0x1a4) - 0.0 < 0.0) {
            fVar7 = fVar3;
          }
          fVar6 = *(float *)(((uint)(uVar19 << 2) | 0x735900) + 4);
          if (*(float *)((int)puVar11 + 0x1a4) - 0.0 < 0.0) {
            fVar3 = 1.0;
          }
          if (0.0 < fVar7) {
            lVar23 = uVar13 - 0x260;
            lVar20 = uVar13 - 0xbc;
            lVar22 = uVar13 - 0xac;
            lVar24 = 2;
            fVar3 = (fVar3 - fVar7) / (fVar3 + fVar7);
            fVar7 = fVar3 * fVar3;
            *(float *)(puVar11 + 0x38) = fVar3;
            *(float *)(puVar11 + 0x37) = fVar3;
            *(float *)((int)puVar11 + 0x1bc) = fVar3;
            *(float *)((int)puVar11 + 0x1b4) = fVar3;
            fVar3 = fVar7 * fVar7;
            *(float *)(puVar11 + 0x37) = *(float *)(puVar11 + 0x37) * fVar7;
            *(float *)((int)puVar11 + 0x1bc) = *(float *)((int)puVar11 + 0x1bc) * fVar3;
            *(float *)(puVar11 + 0x38) = *(float *)(puVar11 + 0x38) * fVar3 * fVar7;
            do {
              *(float *)((int)lVar23 + 0x1b4) = *(float *)((int)lVar23 + 0x1a4) * fVar3 * fVar3;
              iVar16 = (int)lVar20;
              lVar23 = lVar23 + 8;
              lVar20 = lVar20 + 8;
              *(float *)((int)lVar22 + 4) = *(float *)(iVar16 + 4) * fVar3 * fVar3;
              lVar22 = lVar22 + 8;
              lVar24 = lVar24 + -1;
            } while (lVar24 != 0);
            lVar24 = 4;
            lVar22 = uVar13 - 0xbc;
            pfVar21 = (float *)&DAT_007358e0;
            lVar23 = lVar15;
            lVar20 = lVar22;
            do {
              fVar3 = *pfVar21;
              fVar7 = pfVar21[1];
              pfVar21 = pfVar21 + 2;
              *(float *)((int)lVar23 + 0x1b4) = *(float *)((int)lVar23 + 0x1b4) * fVar3;
              lVar23 = lVar23 + 8;
              *(float *)((int)lVar20 + 4) = *(float *)((int)lVar20 + 4) * fVar7;
              lVar20 = lVar20 + 8;
              lVar24 = lVar24 + -1;
            } while (lVar24 != 0);
            lVar23 = 2;
            do {
              iVar16 = (int)lVar15;
              iVar12 = (int)lVar22;
              lVar15 = lVar15 + 0x10;
              lVar22 = lVar22 + 0x10;
              fVar4 = fVar4 + *(float *)(iVar16 + 0x1b4) + *(float *)(iVar12 + 4) +
                      *(float *)(iVar12 + 8) + *(float *)(iVar12 + 0xc);
              lVar23 = lVar23 + -1;
            } while (lVar23 != 0);
            fVar4 = (fVar4 + 0.7853982) * fVar5 + fVar6;
          }
          out[0x2c] = 0.0;
          out[0x26] = fVar4 * 2.0;
          out[0x27] = fVar4 * 2.0;
        }
      }
      fVar8 = (moby->pos).x;
      uVar10 = (int)fVar8 >> 0x1f;
      fVar5 = 5.0;
      fVar4 = (moby->pos).x;
      if ((int)((uVar10 >> 1 ^ (uint)fVar8) - uVar10) < 0x40a00000) {
        (moby->pos).x = 5.0;
        fVar4 = fVar5;
      }
      fVar3 = 500.0;
      if (500.0 < fVar4) {
        (moby->pos).x = 500.0;
        fVar4 = fVar3;
      }
      fVar8 = (moby->pos).y;
      uVar10 = (int)fVar8 >> 0x1f;
      fVar7 = (moby->pos).y;
      if ((int)((uVar10 >> 1 ^ (uint)fVar8) - uVar10) < 0x40a00000) {
        (moby->pos).y = 5.0;
        fVar7 = fVar5;
      }
      if (500.0 < fVar7) {
        (moby->pos).y = 500.0;
        fVar7 = fVar3;
      }
      fVar8 = (moby->pos).z;
      uVar10 = (int)fVar8 >> 0x1f;
      fVar6 = (moby->pos).z;
      if ((int)((uVar10 >> 1 ^ (uint)fVar8) - uVar10) < 0x40a00000) {
        (moby->pos).z = 5.0;
        fVar6 = fVar5;
      }
      if (500.0 < fVar6) {
        (moby->pos).z = 500.0;
        fVar6 = fVar3;
      }
      bVar2 = moby->state;
      if (bVar2 == 4) {
        g_heroPosition.w = (moby->pos).w;
        g_heroRotation.x = (moby->rotation).x;
        g_heroRotation.y = (moby->rotation).y;
        g_heroRotation.z = (moby->rotation).z;
        g_heroRotation.w = (moby->rotation).w;
        g_heroPosition.x = fVar4;
        g_heroPosition.y = fVar7;
        g_heroPosition.z = fVar6;
      }
      if ((2 < bVar2) && (bVar2 < 5)) {
        pMVar17 = (MobyInstance *)out[0x15];
        if (pMVar17 == (MobyInstance *)0x0) {
          pMVar17 = (MobyInstance *)FUN_002b9870(lVar14);
          out[0x15] = (float)pMVar17;
        }
        if (pMVar17 != (MobyInstance *)0x0) {
          pvVar9 = pMVar17->pVar;
          (pMVar17->rotation).z = DAT_0071f408 * -1.5707964;
          fVar4 = *(float *)((int)pvVar9 + 0xc);
          fVar5 = out[0x2d] * DAT_0084122c + 10.0;
          if (fVar4 <= fVar5) {
            if (fVar4 < fVar5) {
              *(float *)((int)pvVar9 + 0xc) = DAT_0071f408 * 0.35 + fVar4;
            }
          }
          else {
            *(float *)((int)pvVar9 + 0xc) = -(DAT_0071f408 * 0.35 - fVar4);
          }
          cVar18 = FastDoubleToInt((double)(out[0x2d] * 80.0));
          pMVar17->alpha = cVar18 + 'P';
          FastEulerToMtx1(uVar13 - 0x150,&pMVar17->rotation);
          FastMtxCopyNoTranslate(uVar13 - 0x110,lVar14 + 0xc0);
          FastVecMtx4Mul(uVar13 - 400,uVar13 - 0x110,uVar13 - 0x150);
          FastApplyTransform(&(pMVar17->transform).v0,(Vec4 *)(uVar13 - 400));
          GetBonePosition(lVar14,2,&pMVar17->pos);
          PostUpdateMobyLockTransform(pMVar17);
        }
      }
    }
  }
  return;
}


