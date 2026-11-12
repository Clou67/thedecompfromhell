// game/update/moby168.cpp -- reconstructed from NPEA00385 EBOOT
// STATUS: NOT STARTED (raw Ghidra output)
// 2 functions, 0x2ab180-0x2acc60
#include "game/update/moby168.h"
#include "game/camera.h"
#include "game/collproc.h"
#include "game/freeze.h"
#include "game/hero.h"
#include "game/lights.h"
#include "game/mobyfunc.h"
#include "game/mobyproc.h"
#include "game/mobyutil.h"
#include "game/pad.h"
#include "game/partupd.h"
#include "game/pause.h"
#include "game/update/moby157.h"
#include "game/update/moby305.h"
#include "idol/fastfunc.h"
#include "idol/mathfunc.h"

// 0x02ab180 (0x780 bytes)
// inlined: FastAtan2 @0x2ab35c, FastAtan2 @0x2ab508
MobyInstance *
M168_002ab180
          (undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
          float *param_5,float *param_6)

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
  MobyInstance *moby;
  ulonglong *puVar10;
  int iVar11;
  float fVar12;
  ulonglong uVar13;
  int iVar15;
  longlong lVar14;
  longlong lVar16;
  float *pfVar18;
  longlong lVar17;
  ulonglong uVar19;
  ulonglong unaff_r23;
  ulonglong unaff_r24;
  ulonglong unaff_r25;
  ulonglong unaff_r26;
  ulonglong unaff_r27;
  ulonglong unaff_r28;
  MobyInstance *pMVar20;
  ulonglong unaff_r29;
  ulonglong unaff_r30;
  ulonglong unaff_r31;
  ulonglong in_LR;
  longlong lVar21;
  double dVar22;
  double dVar23;
  double dVar24;
  double dVar25;
  double dVar26;
  double dVar27;
  ulonglong in_f21;
  double dVar28;
  double dVar29;
  ulonglong in_f22;
  double dVar30;
  ulonglong in_f23;
  double dVar31;
  ulonglong in_f24;
  double dVar32;
  ulonglong in_f25;
  double dVar33;
  ulonglong in_f26;
  double dVar34;
  ulonglong in_f27;
  double dVar35;
  ulonglong in_f28;
  ulonglong in_f29;
  ulonglong in_f30;
  ulonglong in_f31;
  double dVar36;
  float fStack00000040;
  float fStack00000044;
  float fStack00000048;
  
  uVar13 = ZEXT48(&stack0x00000000);
  lVar1 = uVar13 - 400;
  puVar10 = (ulonglong *)lVar1;
  *puVar10 = uVar13;
  puVar10[0x34] = in_LR;
  puVar10[0x27] = in_f21;
  puVar10[0x28] = in_f22;
  puVar10[0x29] = in_f23;
  puVar10[0x2a] = in_f24;
  puVar10[0x2b] = in_f25;
  puVar10[0x2c] = in_f26;
  puVar10[0x2d] = in_f27;
  puVar10[0x2e] = in_f28;
  puVar10[0x2f] = in_f29;
  puVar10[0x30] = in_f30;
  puVar10[0x31] = in_f31;
  puVar10[0x20] = unaff_r25;
  puVar10[0x1f] = unaff_r24;
  puVar10[0x23] = unaff_r28;
  puVar10[0x22] = unaff_r27;
  moby = MobyUpdateChainStart;
  puVar10[0x26] = unaff_r31;
  pMVar20 = (MobyInstance *)0x0;
  puVar10[0x25] = unaff_r30;
  puVar10[0x24] = unaff_r29;
  dVar36 = 20.0;
  puVar10[0x21] = unaff_r26;
  puVar10[0x1e] = unaff_r23;
  _fStack00000040 = param_3;
  _fStack00000048 = param_4;
  do {
    if (moby == (MobyInstance *)0x0) {
      return pMVar20;
    }
    if (moby->state < 0x80) {
      *(f32 *)(puVar10 + 0xe) = (moby->pos).x;
      *(f32 *)((int)puVar10 + 0x74) = (moby->pos).y;
      *(f32 *)(puVar10 + 0xf) = (moby->pos).z;
      *(f32 *)((int)puVar10 + 0x7c) = (moby->pos).w;
      iVar15 = MB_GetPvarsIfMobyHasThem(moby);
      fVar2 = *(float *)(puVar10 + 0xe);
      fVar3 = *(float *)((int)puVar10 + 0x74);
      if (iVar15 == 0) {
        fVar4 = *(float *)(puVar10 + 0xf);
        fVar5 = 0.5;
      }
      else {
        fVar4 = *(float *)(puVar10 + 0xf);
        fVar5 = *(float *)(iVar15 + 0x10);
      }
      *(float *)(puVar10 + 0xf) = fVar4 + fVar5;
      if ((moby->modeBits & CAN_BE_AUTO_TARGETED) != NONE) {
        fVar9 = fVar2 - fStack00000040;
        fVar7 = fVar3 - fStack00000044;
        fVar8 = ABS(fVar9);
        fVar6 = ABS(fVar7);
        *(float *)((int)puVar10 + 0x9c) = fVar9;
        *(float *)(puVar10 + 0x14) = fVar7;
        *(float *)((int)puVar10 + 0xa4) = fVar8 - fVar6;
        dVar32 = 0.0;
        uVar19 = (ulonglong)(*(uint *)((int)puVar10 + 0x9c) >> 0x1c) & 8 |
                 (ulonglong)(*(uint *)((int)puVar10 + 0xa4) >> 0x1e) & 2 |
                 (ulonglong)(*(uint *)(puVar10 + 0x14) >> 0x1d) & 4;
        fVar9 = *(float *)(&g_atanQuadrantTable + (int)(uVar19 << 2));
        fVar7 = ABS(*(float *)((int)puVar10 + 0x9c));
        if (*(float *)((int)puVar10 + 0xa4) - 0.0 < 0.0) {
          fVar7 = fVar6;
        }
        fVar6 = *(float *)(((uint)(uVar19 << 2) | 0x735900) + 4);
        fVar12 = ABS(*(float *)(puVar10 + 0x14));
        if (*(float *)((int)puVar10 + 0xa4) - 0.0 < 0.0) {
          fVar12 = fVar8;
        }
        dVar27 = dVar32;
        if (0.0 < fVar7) {
          lVar14 = uVar13 - 0x180;
          lVar17 = uVar13 - 0xb8;
          lVar16 = uVar13 - 200;
          lVar21 = 2;
          fVar7 = (fVar12 - fVar7) / (fVar12 + fVar7);
          fVar8 = fVar7 * fVar7;
          *(float *)((int)puVar10 + 0xd4) = fVar7;
          *(float *)((int)puVar10 + 0xcc) = fVar7;
          *(float *)(puVar10 + 0x1a) = fVar7;
          *(float *)(puVar10 + 0x19) = fVar7;
          fVar7 = fVar8 * fVar8;
          *(float *)((int)puVar10 + 0xcc) = *(float *)((int)puVar10 + 0xcc) * fVar8;
          *(float *)(puVar10 + 0x1a) = *(float *)(puVar10 + 0x1a) * fVar7;
          *(float *)((int)puVar10 + 0xd4) = *(float *)((int)puVar10 + 0xd4) * fVar7 * fVar8;
          do {
            *(float *)((int)lVar14 + 200) = *(float *)((int)lVar14 + 0xb8) * fVar7 * fVar7;
            iVar15 = (int)lVar16;
            lVar16 = lVar16 + 8;
            lVar14 = lVar14 + 8;
            *(float *)((int)lVar17 + 4) = *(float *)(iVar15 + 4) * fVar7 * fVar7;
            lVar17 = lVar17 + 8;
            lVar21 = lVar21 + -1;
          } while (lVar21 != 0);
          lVar21 = 4;
          lVar17 = uVar13 - 200;
          pfVar18 = (float *)&DAT_007358e0;
          lVar14 = lVar1;
          lVar16 = lVar17;
          do {
            fVar7 = *pfVar18;
            fVar8 = pfVar18[1];
            pfVar18 = pfVar18 + 2;
            *(float *)((int)lVar14 + 200) = *(float *)((int)lVar14 + 200) * fVar7;
            lVar14 = lVar14 + 8;
            *(float *)((int)lVar16 + 4) = *(float *)((int)lVar16 + 4) * fVar8;
            lVar16 = lVar16 + 8;
            lVar21 = lVar21 + -1;
          } while (lVar21 != 0);
          lVar16 = 2;
          lVar14 = lVar1;
          do {
            iVar15 = (int)lVar14;
            iVar11 = (int)lVar17;
            lVar14 = lVar14 + 0x10;
            lVar17 = lVar17 + 0x10;
            dVar27 = (double)((float)(dVar27 + (double)*(float *)(iVar15 + 200)) +
                              *(float *)(iVar11 + 4) + *(float *)(iVar11 + 8) +
                             *(float *)(iVar11 + 0xc));
            lVar16 = lVar16 + -1;
          } while (lVar16 != 0);
          dVar27 = (double)((float)(dVar27 + 0.7853981852531433) * fVar9 + fVar6);
        }
        fVar3 = fStack00000044 - fVar3;
        fVar2 = fStack00000040 - fVar2;
        fVar4 = (fVar4 + fVar5) - fStack00000048;
        fVar2 = SQRT(fVar2 * fVar2 + fVar3 * fVar3);
        *(float *)((int)puVar10 + 0x94) = fVar4;
        fVar4 = ABS(fVar4);
        fVar3 = ABS(fVar2);
        *(float *)(puVar10 + 0x12) = fVar2;
        *(float *)(puVar10 + 0x13) = fVar3 - fVar4;
        uVar19 = (ulonglong)(*(uint *)(puVar10 + 0x12) >> 0x1c) & 8 |
                 (ulonglong)(*(uint *)(puVar10 + 0x13) >> 0x1e) & 2 |
                 (ulonglong)(*(uint *)((int)puVar10 + 0x94) >> 0x1d) & 4;
        fVar2 = ABS(*(float *)(puVar10 + 0x12));
        if (*(float *)(puVar10 + 0x13) - 0.0 < 0.0) {
          fVar2 = fVar4;
        }
        fVar4 = *(float *)(&g_atanQuadrantTable + (int)(uVar19 << 2));
        fVar5 = ABS(*(float *)((int)puVar10 + 0x94));
        if (*(float *)(puVar10 + 0x13) - 0.0 < 0.0) {
          fVar5 = fVar3;
        }
        fVar3 = *(float *)(((uint)(uVar19 << 2) | 0x735900) + 4);
        dVar26 = dVar32;
        if (0.0 < fVar2) {
          lVar14 = uVar13 - 0x180;
          lVar16 = uVar13 - 0xe8;
          lVar17 = uVar13 - 0xd8;
          lVar21 = 2;
          fVar2 = (fVar5 - fVar2) / (fVar5 + fVar2);
          fVar5 = fVar2 * fVar2;
          *(float *)((int)puVar10 + 0xb4) = fVar2;
          *(float *)((int)puVar10 + 0xac) = fVar2;
          *(float *)(puVar10 + 0x16) = fVar2;
          *(float *)(puVar10 + 0x15) = fVar2;
          fVar2 = fVar5 * fVar5;
          *(float *)((int)puVar10 + 0xac) = *(float *)((int)puVar10 + 0xac) * fVar5;
          *(float *)(puVar10 + 0x16) = *(float *)(puVar10 + 0x16) * fVar2;
          *(float *)((int)puVar10 + 0xb4) = *(float *)((int)puVar10 + 0xb4) * fVar2 * fVar5;
          do {
            *(float *)((int)lVar14 + 0xa8) = *(float *)((int)lVar14 + 0x98) * fVar2 * fVar2;
            iVar15 = (int)lVar16;
            lVar14 = lVar14 + 8;
            lVar16 = lVar16 + 8;
            *(float *)((int)lVar17 + 4) = *(float *)(iVar15 + 4) * fVar2 * fVar2;
            lVar17 = lVar17 + 8;
            lVar21 = lVar21 + -1;
          } while (lVar21 != 0);
          lVar21 = 4;
          lVar17 = uVar13 - 0xe8;
          pfVar18 = (float *)&DAT_007358e0;
          lVar14 = lVar1;
          lVar16 = lVar17;
          do {
            fVar2 = *pfVar18;
            fVar5 = pfVar18[1];
            pfVar18 = pfVar18 + 2;
            *(float *)((int)lVar14 + 0xa8) = *(float *)((int)lVar14 + 0xa8) * fVar2;
            lVar14 = lVar14 + 8;
            *(float *)((int)lVar16 + 4) = *(float *)((int)lVar16 + 4) * fVar5;
            lVar16 = lVar16 + 8;
            lVar21 = lVar21 + -1;
          } while (lVar21 != 0);
          lVar16 = 2;
          lVar14 = lVar1;
          do {
            iVar15 = (int)lVar14;
            lVar14 = lVar14 + 0x10;
            iVar11 = (int)lVar17;
            lVar17 = lVar17 + 0x10;
            dVar26 = (double)((float)(dVar26 + (double)*(float *)(iVar15 + 0xa8)) +
                              *(float *)(iVar11 + 4) + *(float *)(iVar11 + 8) +
                             *(float *)(iVar11 + 0xc));
            lVar16 = lVar16 + -1;
          } while (lVar16 != 0);
          dVar26 = (double)((float)(dVar26 + 0.7853981852531433) * fVar4 + fVar3);
        }
        dVar22 = (double)FastSubRots(*param_5,(float)dVar27);
        fVar2 = fStack00000044 - *(float *)((int)puVar10 + 0x74);
        fVar2 = SQRT((fStack00000048 - *(float *)(puVar10 + 0xf)) *
                     (fStack00000048 - *(float *)(puVar10 + 0xf)) +
                     (fStack00000040 - *(float *)(puVar10 + 0xe)) *
                     (fStack00000040 - *(float *)(puVar10 + 0xe)) + fVar2 * fVar2);
        dVar35 = (double)fVar2;
        if (dVar35 <= dVar36) {
          MB_SphericalToVector
                    (fVar2,*param_5,DAT_00969fc4 * 0.5 + *param_6,(float *)(puVar10 + 0x10));
          fVar2 = *(float *)((int)puVar10 + 0x84) + fStack00000044;
          fVar3 = fVar2 - *(float *)((int)puVar10 + 0x74);
          fVar4 = (*(float *)(puVar10 + 0x10) + fStack00000040) - *(float *)(puVar10 + 0xe);
          *(float *)(puVar10 + 0x10) = *(float *)(puVar10 + 0x10) + fStack00000040;
          *(float *)((int)puVar10 + 0x84) = fVar2;
          fVar2 = (*(float *)(puVar10 + 0x11) + fStack00000048) - *(float *)(puVar10 + 0xf);
          *(float *)(puVar10 + 0x11) = *(float *)(puVar10 + 0x11) + fStack00000048;
          dVar34 = 1.0;
          dVar28 = -1.0;
          dVar23 = (double)(SQRT(fVar2 * fVar2 + fVar4 * fVar4 + fVar3 * fVar3) /
                           (float)(dVar35 * 2.0));
          dVar31 = 1.5707963705062866;
          dVar30 = 0.15707963705062866;
          dVar33 = dVar23;
          if (dVar23 - dVar32 < 0.0) {
            dVar33 = ABS(dVar23);
          }
          dVar24 = dVar34;
          if (dVar23 - dVar32 < 0.0) {
            dVar24 = dVar28;
          }
          dVar23 = (double)(float)(1.0 - dVar33);
          if ((double)(float)(1.0 - dVar33) - dVar32 < 0.0) {
            dVar23 = dVar32;
          }
          dVar33 = (double)((float)(-(double)(((float)((double)(float)(dVar33 * dVar33) * dVar33) *
                                               DAT_007358cc +
                                              (float)((double)(float)(dVar33 * dVar33) *
                                                      (double)DAT_007358c8 +
                                                     (double)(float)(dVar33 * (double)DAT_007358c4 +
                                                                    (double)DAT_007358c0))) *
                                              (float)SQRT(dVar23) - 1.5707964) * dVar24) * 2.0);
          if ((0.15707963705062866 < dVar33) &&
             (iVar15 = MB_GetPvarsIfMobyHasThem(moby), iVar15 != 0)) {
            dVar24 = (double)FastIntToDouble(*(undefined1 *)(iVar15 + 10));
            dVar25 = (double)(float)((double)(float)(dVar24 * 0.125) / dVar35);
            dVar23 = dVar25;
            if (dVar25 - dVar32 < 0.0) {
              dVar23 = ABS(dVar25);
            }
            dVar29 = dVar34;
            if (dVar25 - dVar32 < 0.0) {
              dVar29 = dVar28;
            }
            dVar28 = (double)(float)(dVar34 - dVar23);
            if ((double)(float)(dVar34 - dVar23) - dVar32 < 0.0) {
              dVar28 = dVar32;
            }
            if (((double)(float)(dVar24 * 0.125) < dVar35) &&
               (dVar33 = -(double)(float)(-(double)(float)((double)((float)((double)(float)(dVar23 *
                                                                                           dVar23) *
                                                                           dVar23) * DAT_007358cc +
                                                                   (float)((double)(float)(dVar23 * 
                                                  dVar23) * (double)DAT_007358c8 +
                                                  (double)(float)(dVar23 * (double)DAT_007358c4 +
                                                                 (double)DAT_007358c0))) *
                                                  (double)(float)SQRT(dVar28) - dVar31) * dVar29 -
                                         dVar33), dVar33 < dVar32)) {
              dVar33 = dVar32;
            }
          }
          if (dVar33 < dVar30) {
            iVar15 = CollLine(0x951500,uVar13 - 0x120,6,param_1,0);
            if (iVar15 != 0) {
              return pMVar20;
            }
            iVar15 = CollLine(uVar13 + 0x40 & 0xffffffff,uVar13 - 0x120,6,param_1,0);
            if (iVar15 != 0) {
              return pMVar20;
            }
            *param_6 = (float)-dVar26;
            dVar36 = dVar35;
            pMVar20 = moby;
            if (dVar22 < 0.1745329201221466) {
              *param_5 = (float)dVar27;
            }
          }
        }
      }
    }
    moby = (MobyInstance *)moby->pChain;
  } while( true );
}


// 0x02ab988 (0x12d8 bytes)
/* Moby 168 */

void UpdateMoby_168(MobyInstance *moby)

{
  float fVar1;
  int iVar2;
  int *piVar3;
  undefined4 uVar4;
  float fVar5;
  float fVar6;
  short sVar7;
  float fVar8;
  int iVar10;
  MobyInstance *moby_00;
  undefined8 uVar9;
  ulonglong uVar11;
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
  double dVar22;
  undefined8 uVar23;
  double dVar24;
  double dVar25;
  double dVar26;
  double dVar27;
  double dVar28;
  double dVar29;
  double dVar30;
  double dVar31;
  double dVar32;
  GPiece<16> auVar33;
  GPiece<16> auVar34;
  GPiece<16> auVar35;
  float local_200;
  float local_1fc;
  float local_1f8;
  float local_1f4;
  float local_1f0;
  float local_1ec;
  float local_1e8;
  undefined4 local_1e4;
  GPiece<16> local_1e0;
  GPiece<32> local_1d0;
  float local_1b0;
  float local_1ac;
  float local_1a8;
  float afStack_1a0 [4];
  float local_190;
  float local_18c;
  float local_188;
  float local_184;
  Vec4 local_180;
  Vec4 aVStack_170 [3];
  float local_140;
  float local_13c;
  undefined4 local_138;
  undefined4 local_134;
  MobyInstance *local_130;
  undefined4 local_12c;
  undefined1 local_128;
  undefined1 local_127;
  MOBY_OCLASSES local_126;
  undefined4 local_124;
  undefined4 local_120;
  GPiece<64> auStack_110;
  float local_d0;
  float local_cc;
  longlong local_c8;
  
  dVar30 = 0.0;
  local_200 = 0.0;
  local_1fc = 0.0;
  local_1f4 = 0.0;
  piVar3 = (int *)moby->pVar;
  uVar11 = ZEXT48(piVar3);
  local_cc = 0.0;
  if (moby->state == '\0') {
    moby->state = '\x01';
    piVar3[4] = -1;
    piVar3[5] = 0;
  }
  FastDecTimerS16(uVar11 + 4);
  FastDecTimerS32(uVar11);
  if (g_heroState == FIRST_PERSON_VIEW) {
    TransitionMovement(0x1e,1);
  }
  if ((moby->animationId == '\0') && ((byte)moby->animationFrame < 3)) {
    auVar33 = ZEXT416(0xffffffff);
    auVar33 = auVar33 | auVar33 << 0x20 | auVar33 << 0x40 | auVar33 << 0x60;
    auVar34 = vectorShiftLeftIntegerWord(auVar33,auVar33);
    auVar33 = loadVectorLeftIndexed(4,0x2ab900);
    auVar33 = auVar33 >> 0x60 & (GPiece<16>)0xffffffff;
    auVar35 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
    auVar33 = vectorMultiplyAddFloatingPoint
                        (auVar35,auVar33 | auVar33 << 0x20 | auVar33 << 0x40 | auVar33 << 0x60,
                         auVar34);
    auVar33 = vectorConvertToSignedFixedPointWordSaturate(auVar33,0);
    auVar33 = auVar33 >> 0x60 & (GPiece<16>)0xffffffff;
    uVar4 = storeVectorElementWordIndexed
                      (auVar33 | auVar33 << 0x20 | auVar33 << 0x40 | auVar33 << 0x60,0,uVar11);
    *(undefined4 *)((uint)piVar3 & 0xfffffffc) = uVar4;
  }
  if ((g_heroState == WEAPON_FIRST_PERSON_VIEW) && ((g_heroMobyPtr->modeBits & DISABLED) != NONE)) {
    FastApplyTransform(aVStack_170,(Vec4 *)&GameCamera);
    FastNormalizeRMtx4(auStack_110,aVStack_170);
    local_1f8 = g_FrameTime * 40.0;
    FUN_005e825c(&local_200,&local_200,auStack_110);
    local_1e4 = 0;
    FUN_005e825c(&local_1f0,&local_1f0,auStack_110);
    local_1f0 = GameCamera.posX + 0.15;
    local_1ec = GameCamera.posY + 0.15;
    local_1e8 = GameCamera.posZ + 0.75;
    moby_00 = (MobyInstance *)0x0;
    if (((g_heroState == WEAPON_FIRST_PERSON_VIEW) &&
        (moby_00 = (MobyInstance *)0x0, (g_heroMobyPtr->modeBits & DISABLED) != NONE)) &&
       (moby_00 = (MobyInstance *)0x0, DAT_0096bd8c == '\0')) {
      DrawTargetCrosshair(1.0,moby,0xff0f0fff,4);
      FastVecAdd(local_1d0,local_1e0,&local_1f0);
      iVar10 = CollLine(0x951500,local_1e0,0,moby,0);
      moby_00 = (MobyInstance *)0x0;
      if (((iVar10 != 0) && (moby_00 = (MobyInstance *)0x0, g_CollOutput.pMoby != (MobyInstance *)0x0)
          ) && (moby_00 = (MobyInstance *)0x0,
               ((g_CollOutput.pMoby)->modeBits & CAN_BE_AUTO_TARGETED) != NONE)) {
        moby_00 = g_CollOutput.pMoby;
      }
    }
  }
  else {
    fVar1 = g_FrameTime * 40.0;
    local_200 = DAT_0096a340 * 0.0 + DAT_0096a320 * fVar1 + DAT_0096a330 * 0.0;
    local_1fc = DAT_0096a344 * 0.0 + DAT_0096a324 * fVar1 + DAT_0096a334 * 0.0;
    local_1f8 = DAT_0096a348 * 0.0 + DAT_0096a328 * fVar1 + DAT_0096a338 * 0.0;
    local_1f4 = DAT_0096a34c * 0.0 + DAT_0096a32c * fVar1 + DAT_0096a33c * 0.0 + 0.0;
    GetBonePosition(moby,0,&local_1f0);
    moby_00 = (MobyInstance *)0x0;
  }
  if (DAT_0096af90 == 0) {
    dVar31 = (double)FUN_005e8338((double)local_200,(double)local_1fc);
  }
  else {
    dVar31 = (double)DAT_0096af9c;
  }
  local_d0 = (float)dVar31;
  dVar31 = (double)FUN_005e8338((double)SQRT(local_200 * local_200 + local_1fc * local_1fc),
                                (double)local_1f8);
  dVar32 = (double)local_d0;
  dVar31 = -dVar31;
  local_cc = (float)dVar31;
  if (g_heroState != WEAPON_FIRST_PERSON_VIEW) {
    if ((DAT_0096bfa8 == 1) && (g_heroState != WEAPON_FIRST_PERSON_VIEW)) {
      local_d0 = (moby->rotation).z;
      dVar32 = (double)local_d0;
      dVar31 = (double)DAT_00722244;
      local_cc = DAT_00722244;
    }
    moby_00 = (MobyInstance *)
              M168_002ab180
                        (moby,DAT_0096bfa8,CONCAT44(local_1f0,local_1ec),
                         CONCAT44(local_1e8,local_1e4),&local_d0,&local_cc);
  }
  if (((moby_00 != (MobyInstance *)0x0) && (*(short *)(piVar3 + 1) == 0)) &&
     (iVar10 = Hero_GetWeaponAmmo(-1), iVar10 != 0)) {
    MB_GetPvarsIfMobyHasThem(moby_00);
    fVar1 = GameCamera.posY - (moby_00->pos).y;
    fVar5 = GameCamera.posX - (moby_00->pos).x;
    fVar6 = GameCamera.posZ - (moby_00->pos).z;
    DrawTargetCrosshair
              (ABS(-(SQRT(fVar6 * fVar6 + fVar5 * fVar5 + fVar1 * fVar1) * 0.02 * 0.65 - 0.9)),moby,
               0xff0fff0f,0xff0f0000);
  }
  if (((DAT_0096bd88 != '\0') && (g_heroState != MOVEMENT_LOCKED)) &&
     (g_gameMode != GAME_MODE_SCENE)) {
    dVar29 = 0.5;
    iVar10 = (int)(animationSpeed *
                  (float)((double)(longlong)(int)(5 - (uint)g_goldWeaponsArray.blaster) + 0.5));
    local_c8 = (longlong)iVar10;
    if ((iVar10 < DAT_00969e9c) && (*piVar3 == 0)) {
      iVar10 = hero_ConsumeAmmo(-1,1);
      if ((iVar10 != 0) && (DAT_0096bd8c == '\0')) {
        auVar33 = ZEXT416(0xffffffff);
        auVar33 = auVar33 | auVar33 << 0x20 | auVar33 << 0x40 | auVar33 << 0x60;
        auVar34 = vectorShiftLeftIntegerWord(auVar33,auVar33);
        auVar33 = loadVectorLeftIndexed(0x28,0x2ab900);
        auVar35 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
        auVar33 = auVar33 >> 0x60 & (GPiece<16>)0xffffffff;
        auVar33 = vectorMultiplyAddFloatingPoint
                            (auVar35,auVar33 | auVar33 << 0x20 | auVar33 << 0x40 | auVar33 << 0x60,
                             auVar34);
        auVar33 = vectorConvertToSignedFixedPointWordSaturate(auVar33,0);
        auVar33 = auVar33 >> 0x60 & (GPiece<16>)0xffffffff;
        uVar4 = storeVectorElementWordIndexed
                          (auVar33 | auVar33 << 0x20 | auVar33 << 0x40 | auVar33 << 0x60,0,uVar11);
        *(undefined4 *)((uint)piVar3 & 0xfffffffc) = uVar4;
        if (moby_00 == (MobyInstance *)0x0) {
          if (g_heroState != WEAPON_FIRST_PERSON_VIEW) {
            dVar31 = -(double)(float)((double)DAT_00969fc4 * dVar29 - dVar31);
            local_cc = -(float)((double)DAT_00969fc4 * dVar29 - (double)local_cc);
          }
        }
        else {
          dVar27 = (double)(moby_00->pos).x;
          dVar26 = (double)(moby_00->pos).y;
          dVar28 = (double)(g_FrameTime * 40.0);
          dVar24 = (double)(moby_00->pos).z;
          iVar10 = MB_GetPvarsIfMobyHasThem(moby_00);
          dVar13 = dVar29;
          if (iVar10 != 0) {
            dVar13 = (double)*(float *)(iVar10 + 0x10);
          }
          dVar24 = (double)(float)(dVar24 + dVar13);
          dVar13 = (double)FUN_005e8338((double)SQRT((float)((double)local_1f0 - dVar27) *
                                                     (float)((double)local_1f0 - dVar27) +
                                                     (float)((double)local_1ec - dVar26) *
                                                     (float)((double)local_1ec - dVar26)),
                                        (double)(float)(dVar24 - (double)local_1e8));
          dVar31 = -(double)(float)((double)DAT_00969fc4 * dVar29 - dVar31);
          local_cc = (float)-dVar13;
          dVar13 = (double)FastSubRots((float)dVar31,(float)-dVar13);
          dVar25 = 0.1745329201221466;
          if (0.1745329201221466 <= dVar13) {
            dVar13 = (double)FastWrapRot((float)dVar31,0.17453292);
            if ((double)local_cc <= dVar13) {
              dVar25 = -0.1745329201221466;
              dVar13 = (double)FastWrapRot((float)dVar31,-0.17453292);
              if ((double)local_cc < dVar13) {
                dVar31 = (double)FastWrapRot((float)dVar31,(float)dVar25);
              }
            }
            else {
              dVar31 = (double)FastWrapRot((float)dVar31,(float)dVar25);
            }
          }
          else {
            dVar31 = (double)local_cc;
          }
          MB_SphericalToVector((float)dVar28,(float)dVar32,(float)-dVar31,&local_1b0);
          local_1b0 = local_1b0 + local_1f0;
          local_1ac = local_1ac + local_1ec;
          local_1a8 = local_1a8 + local_1e8;
          dVar13 = (double)FUN_005e8338((double)(float)(dVar27 - (double)local_1b0),
                                        (double)(float)(dVar26 - (double)local_1ac));
          local_d0 = (float)dVar13;
          dVar13 = (double)FUN_005e8338((double)SQRT((float)((double)local_1b0 - dVar27) *
                                                     (float)((double)local_1b0 - dVar27) +
                                                     (float)((double)local_1ac - dVar26) *
                                                     (float)((double)local_1ac - dVar26)),
                                        (double)(float)(dVar24 - (double)local_1a8));
          local_cc = (float)-dVar13;
        }
        local_12c = 0x10000;
        local_124 = 0x3e800000;
        local_120 = 1;
        local_130 = moby;
        dVar13 = (double)FUN_005e8338((double)DAT_0096a350,(double)DAT_0096a354);
        dVar25 = 3.141592502593994;
        fVar1 = (float)(dVar13 + 1.570796251296997);
        dVar28 = -3.141592502593994;
        dVar27 = -0.16666656732559204;
        dVar26 = 0.008333025500178337;
        dVar24 = -0.0001980741071747616;
        dVar13 = 2.601886990305502e-06;
        fVar5 = 3.1415925 - fVar1;
        if (fVar1 - (3.1415925 - fVar1) < 0.0) {
          fVar5 = fVar1;
        }
        fVar6 = -3.1415925 - fVar1;
        if ((-3.1415925 - fVar1) - fVar5 < 0.0) {
          fVar6 = fVar5;
        }
        fVar8 = fVar6 * fVar6;
        fVar1 = fVar8 * fVar8 * fVar6;
        fVar5 = fVar8 * fVar1;
        local_140 = fVar8 * fVar5 * 2.601887e-06 +
                    fVar5 * -0.0001980741 +
                    fVar1 * 0.0083330255 + fVar8 * fVar6 * -0.16666657 + fVar6;
        dVar12 = (double)FUN_005e8338((double)DAT_0096a350,(double)DAT_0096a354);
        local_126 = moby->oClass;
        dVar14 = (double)(float)(dVar25 - dVar12);
        if (dVar12 - (double)(float)(dVar25 - dVar12) < 0.0) {
          dVar14 = dVar12;
        }
        dVar25 = (double)(float)(dVar28 - dVar12);
        if ((double)(float)(dVar28 - dVar12) - dVar14 < 0.0) {
          dVar25 = dVar14;
        }
        dVar28 = (double)(float)(dVar25 * dVar25);
        dVar14 = (double)(float)(dVar28 * (double)(float)(dVar28 * dVar25));
        dVar12 = (double)(float)(dVar28 * dVar14);
        local_13c = (float)((double)(float)(dVar28 * dVar12) * dVar13 +
                           (double)(float)(dVar12 * dVar24 +
                                          (double)(float)(dVar14 * dVar26 +
                                                         (double)(float)((double)(float)(dVar28 * 
                                                  dVar25) * dVar27 + dVar25))));
        dVar28 = 1.0;
        local_138 = 0x3f800000;
        local_134 = 0x45afdf66;
        local_128 = 1;
        local_127 = 1;
        Hero_GetHeroRelativeVector(0.7,-0.15,(float)dVar29,afStack_1a0);
        CollMobySphere(0x3fdae147a0000000,afStack_1a0);
        FUN_0033a1d0((double)local_d0,(double)local_cc,dVar32,dVar31,g_heroMobyPtr);
        auVar33 = ZEXT416(0xffffffff);
        auVar33 = auVar33 | auVar33 << 0x20 | auVar33 << 0x40 | auVar33 << 0x60;
        iVar10 = 0;
        auVar35 = loadVectorLeftIndexed(0x5c,0x2ab900);
        auVar34 = vectorShiftLeftIntegerWord(auVar33,auVar33);
        auVar33 = auVar35 >> 0x60 & (GPiece<16>)0xffffffff;
        auVar35 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
        auVar33 = vectorMultiplyAddFloatingPoint
                            (auVar35,auVar33 | auVar33 << 0x20 | auVar33 << 0x40 | auVar33 << 0x60,
                             auVar34);
        auVar33 = vectorConvertToSignedFixedPointWordSaturate(auVar33,0);
        auVar33 = auVar33 >> 0x60 & (GPiece<16>)0xffffffff;
        uVar4 = storeVectorElementWordIndexed
                          (auVar33 | auVar33 << 0x20 | auVar33 << 0x40 | auVar33 << 0x60,0x14,uVar11
                          );
        *(undefined4 *)((uint)(piVar3 + 5) & 0xfffffffc) = uVar4;
        dVar27 = -1.0;
        dVar26 = 0.6499999761581421;
        dVar24 = 3.0;
        dVar13 = 6.0;
        dVar32 = 5.5;
        dVar31 = 10.5;
        uVar23 = 0x40c3880000000000;
        do {
          local_190 = 0.0;
          local_18c = 0.0;
          local_188 = 0.0;
          local_184 = 0.0;
          dVar25 = (double)MB_randRangeFloat((float)dVar27,(float)dVar28);
          local_190 = (float)dVar25;
          dVar25 = (double)MB_randRangeFloat((float)dVar27,(float)dVar28);
          local_18c = (float)dVar25;
          dVar14 = (double)MB_randRangeFloat((float)dVar27,(float)dVar28);
          dVar12 = (double)local_1fc;
          dVar15 = (double)local_200;
          dVar16 = (double)local_18c;
          dVar18 = (double)local_1f8;
          dVar21 = (double)local_190;
          local_184 = local_1f4;
          dVar19 = (double)SQRT((float)(dVar14 * dVar14 +
                                       (double)(float)(dVar21 * dVar21 +
                                                      (double)(float)(dVar16 * dVar16))));
          dVar22 = (double)(float)((double)(float)((double)SQRT((float)(dVar18 * dVar18 +
                                                                       (double)(float)(dVar15 * 
                                                  dVar15 + (double)(float)(dVar12 * dVar12)))) *
                                                  dVar26) / dVar19);
          dVar25 = dVar30;
          if (dVar30 - dVar19 < 0.0) {
            dVar25 = (double)(float)(dVar14 * dVar22);
          }
          dVar17 = dVar30;
          if (dVar30 - dVar19 < 0.0) {
            dVar17 = (double)(float)(dVar16 * dVar22);
          }
          dVar20 = dVar30;
          if (dVar30 - dVar19 < 0.0) {
            dVar20 = (double)(float)(dVar21 * dVar22);
          }
          if (dVar19 - dVar30 < 0.0) {
            dVar25 = (double)(float)(dVar14 * dVar22);
          }
          if (dVar19 - dVar30 < 0.0) {
            dVar17 = (double)(float)(dVar16 * dVar22);
          }
          if (dVar19 - dVar30 < 0.0) {
            dVar20 = (double)(float)(dVar21 * dVar22);
          }
          local_188 = (float)(dVar18 + dVar25);
          local_18c = (float)(dVar12 + dVar17);
          local_190 = (float)(dVar15 + dVar20);
          dVar25 = (double)MB_randRangeFloat
                                     ((float)((double)g_FrameTime * dVar24),
                                      (float)((double)g_FrameTime * dVar13));
          iVar2 = (int)((double)animationSpeed * dVar31);
          local_c8 = (longlong)iVar2;
          dVar14 = (double)SQRT(local_188 * local_188 +
                                local_190 * local_190 + local_18c * local_18c);
          fVar1 = (float)(dVar25 / dVar14);
          dVar25 = dVar30;
          if (dVar30 - dVar14 < 0.0) {
            dVar25 = (double)(local_190 * fVar1);
          }
          dVar12 = dVar30;
          if (dVar30 - dVar14 < 0.0) {
            dVar12 = (double)(local_18c * fVar1);
          }
          dVar15 = dVar30;
          if (dVar30 - dVar14 < 0.0) {
            dVar15 = (double)(local_188 * fVar1);
          }
          if (dVar14 - dVar30 < 0.0) {
            dVar25 = (double)(local_190 * fVar1);
          }
          if (dVar14 - dVar30 < 0.0) {
            dVar12 = (double)(local_18c * fVar1);
          }
          if (dVar14 - dVar30 < 0.0) {
            dVar15 = (double)(local_188 * fVar1);
          }
          local_190 = (float)dVar25;
          local_18c = (float)dVar12;
          local_188 = (float)dVar15;
          uVar9 = MB_randRange((int)((double)animationSpeed * dVar32),iVar2);
          SpawnPart_27(uVar23,&local_1f0,&local_190,0x5f2f4f6f,uVar9);
          iVar10 = iVar10 + 1;
        } while (iVar10 < 5);
        local_c8 = (longlong)(int)(animationSpeed * 7.5);
        uVar23 = MB_randRange((int)(animationSpeed * 4.5),(int)(animationSpeed * 7.5));
        SpawnPart_27(0x41086a0000000000,&local_1f0,&local_200,0x2f4f7f7f,uVar23);
      }
      if (moby->animationId != '\x04') {
        local_c8 = (longlong)(int)(animationSpeed * 7.5);
        MB_SetAnimation(moby,4,0,(int)(animationSpeed * 7.5));
      }
      if (DAT_00a0fd9c != -1) {
        DAT_00a0fd9c = DAT_00a0fd9c + 1;
      }
      iVar10 = (int)(animationSpeed * (float)((double)(longlong)g_GameFrameCount + dVar29));
      local_c8 = (longlong)iVar10;
      if ((int)(uint)DAT_00a0fd9e < iVar10 / 600) {
        sVar7 = (short)(iVar10 >> 0x1f);
        DAT_00a0fd9e = ((short)(iVar10 / 600) + sVar7) -
                       ((short)((short)(iVar10 / 0x2580000) + sVar7) >> 0xf);
      }
      DAT_00a0fda0 = DAT_00a0fda0 | 1 << (Level & 0x3f) | 0x80000000;
    }
  }
  if (((((g_Pad.downButtons & DAT_0096ad80) == 0) ||
       (iVar10 = Hero_GetWeaponAmmo(-1), iVar10 == 0)) &&
      ((local_c8 = (longlong)(int)(animationSpeed * 9.5), (int)(animationSpeed * 9.5) < DAT_00969e9c
       || (DAT_0096bd88 == '\0')))) ||
     ((g_heroState == MOVEMENT_LOCKED || (g_gameMode == GAME_MODE_SCENE)))) {
    if (((moby->animationId == '\0') && ((moby->field43_0x70 & 2U) == 0)) ||
       ((g_heroState == MOVEMENT_LOCKED || (g_gameMode == GAME_MODE_SCENE)))) {
      if ((g_heroState == MOVEMENT_LOCKED) || (g_gameMode == GAME_MODE_SCENE)) {
        MB_SetAnimationNoBlend(moby,1,0);
        UpdateMobyAnimFrame(moby);
      }
    }
    else if (moby->animationId != '\x01') {
      local_c8 = (longlong)(int)(animationSpeed * 7.5);
      MB_SetAnimation(moby,1,0,(int)(animationSpeed * 7.5));
    }
    Hero_EndFiringAnim();
    *piVar3 = 0;
  }
  if ((moby->updateId == '\x02') || (iVar10 = piVar3[5], iVar10 < 1)) {
    if (piVar3[4] != -1) {
      DeletePointLight(piVar3[4]);
      piVar3[5] = 0;
      piVar3[4] = -1;
    }
  }
  else {
    dVar29 = 9.5;
    iVar2 = (int)(animationSpeed * 9.5);
    local_c8 = (longlong)iVar2;
    dVar31 = (double)FastIntToDouble
                               (iVar2 + ((uint)((longlong)iVar10 - (longlong)iVar2 >> 0x3f) &
                                        iVar10 - iVar2));
    dVar32 = 0.699999988079071;
    iVar10 = (int)((double)animationSpeed * dVar29);
    local_c8 = (longlong)iVar10;
    dVar12 = (double)((float)(dVar31 * 0.699999988079071) /
                     (float)(longlong)((double)animationSpeed * dVar29));
    dVar31 = (double)FastIntToDouble
                               (iVar10 + ((uint)((longlong)piVar3[5] - (longlong)iVar10 >> 0x3f) &
                                         piVar3[5] - iVar10));
    iVar10 = (int)((double)animationSpeed * dVar29);
    local_c8 = (longlong)iVar10;
    dVar14 = (double)((float)(dVar31 * dVar32) / (float)(longlong)((double)animationSpeed * dVar29))
    ;
    dVar31 = (double)FastIntToDouble
                               (iVar10 + ((uint)((longlong)piVar3[5] - (longlong)iVar10 >> 0x3f) &
                                         piVar3[5] - iVar10));
    dVar28 = (double)g_heroPosition.x;
    dVar25 = (double)((float)(dVar31 * dVar32) / (float)(longlong)((double)animationSpeed * dVar29))
    ;
    dVar31 = (double)FUN_005e8338((double)DAT_0096a350,(double)DAT_0096a354);
    dVar27 = 3.141592502593994;
    fVar1 = (float)(dVar31 + 1.570796251296997);
    dVar26 = -3.141592502593994;
    dVar24 = -0.16666656732559204;
    dVar13 = 0.008333025500178337;
    dVar29 = -0.0001980741071747616;
    dVar32 = 2.601886990305502e-06;
    dVar31 = 2.0;
    fVar5 = 3.1415925 - fVar1;
    if (fVar1 - (3.1415925 - fVar1) < 0.0) {
      fVar5 = fVar1;
    }
    fVar6 = -3.1415925 - fVar1;
    if ((-3.1415925 - fVar1) - fVar5 < 0.0) {
      fVar6 = fVar5;
    }
    fVar8 = fVar6 * fVar6;
    fVar1 = fVar8 * fVar8 * fVar6;
    dVar16 = (double)g_heroPosition.y;
    fVar5 = fVar8 * fVar1;
    local_180.x = (float)((double)(fVar8 * fVar5 * 2.601887e-06 +
                                  fVar5 * -0.0001980741 +
                                  fVar1 * 0.0083330255 + fVar8 * fVar6 * -0.16666657 + fVar6) * 2.0
                         + dVar28);
    dVar15 = (double)FUN_005e8338((double)DAT_0096a350,(double)DAT_0096a354);
    dVar28 = (double)(float)(dVar27 - dVar15);
    if (dVar15 - (double)(float)(dVar27 - dVar15) < 0.0) {
      dVar28 = dVar15;
    }
    dVar27 = (double)(float)(dVar26 - dVar15);
    if ((double)(float)(dVar26 - dVar15) - dVar28 < 0.0) {
      dVar27 = dVar28;
    }
    dVar26 = (double)(float)(dVar27 * dVar27);
    dVar15 = (double)(float)(dVar26 * (double)(float)(dVar26 * dVar27));
    dVar28 = (double)(float)(dVar26 * dVar15);
    iVar10 = piVar3[4];
    local_180.y = (float)((double)(float)((double)(float)(dVar26 * dVar28) * dVar32 +
                                         (double)(float)(dVar28 * dVar29 +
                                                        (double)(float)(dVar15 * dVar13 +
                                                                       (double)(float)((double)(
                                                  float)(dVar26 * dVar27) * dVar24 + dVar27)))) *
                          dVar31 + dVar16);
    local_180.z = g_heroPosition.z + 1.0;
    if (iVar10 == -1) {
      iVar10 = CreatePointLight2(6.0,dVar30,dVar12,dVar14,dVar25,&local_180);
      piVar3[4] = iVar10;
    }
    else {
      PointLights[iVar10].pos.x = local_180.x;
      PointLights[iVar10].pos.y = local_180.y;
      PointLights[iVar10].pos.w = 6.0;
      PointLights[iVar10].pos.z = local_180.z;
      PointLights[iVar10].color.x = (float)dVar12;
      PointLights[iVar10].color.y = (float)dVar14;
      PointLights[iVar10].color.z = (float)dVar25;
    }
    FastDecTimerS32(uVar11 + 0x14);
  }
  return;
}


