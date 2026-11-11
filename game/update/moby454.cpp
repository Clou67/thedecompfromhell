// game/update/moby454.cpp -- reconstructed from NPEA00385 EBOOT
// STATUS: NOT STARTED (raw Ghidra output)
// 3 functions, 0x388c24-0x38a0c4
#include <stdlib.h>
#include "game/update/moby454.h"
#include "game/camera.h"
#include "game/collproc.h"
#include "game/hero.h"
#include "game/mobyfunc.h"
#include "game/mobyutil.h"
#include "game/pad.h"
#include "game/update/moby157.h"
#include "game/update/moby457.h"
#include "idol/fastfunc.h"

// 0x0388c24 (0x14 bytes)
void M454_00388c24(void)

{
  DAT_00842020 = 0x10000;
  return;
}


// 0x0388c58 (0x648 bytes)
// inlined: FastAtan2 @0x388eac, FastAtan2 @0x389070
// strings: 00388c38: 'Nnk(' (raw)

MobyInstance *
M454_00388c58
          (double param_1,double param_2,double param_3,float *param_4,int param_5)

{
  longlong lVar1;
  bool bVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  MobyInstance *moby;
  ulonglong *puVar8;
  int iVar9;
  float fVar10;
  ulonglong uVar11;
  int *piVar13;
  longlong lVar12;
  int iVar14;
  float *pfVar16;
  longlong lVar15;
  ulonglong uVar17;
  longlong lVar18;
  int *in_r8;
  ulonglong unaff_r24;
  int iVar19;
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
  ulonglong in_f24;
  double dVar25;
  ulonglong in_f25;
  ulonglong in_f26;
  double dVar26;
  ulonglong in_f27;
  double dVar27;
  ulonglong in_f28;
  double dVar28;
  ulonglong in_f29;
  ulonglong in_f30;
  ulonglong in_f31;
  
  uVar11 = ZEXT48(&stack0x00000000);
  lVar1 = uVar11 - 0x160;
  puVar8 = (ulonglong *)lVar1;
  *puVar8 = uVar11;
  puVar8[0x2e] = in_LR;
  puVar8[0x24] = in_f24;
  puVar8[0x25] = in_f25;
  puVar8[0x26] = in_f26;
  puVar8[0x27] = in_f27;
  puVar8[0x28] = in_f28;
  puVar8[0x29] = in_f29;
  puVar8[0x2a] = in_f30;
  puVar8[0x2b] = in_f31;
  puVar8[0x1e] = unaff_r26;
  puVar8[0x23] = unaff_r31;
  puVar8[0x1f] = unaff_r27;
  puVar8[0x20] = unaff_r28;
  moby = DAT_00a49344;
  pMVar20 = (MobyInstance *)0x0;
  bVar2 = DAT_00a49344 != (MobyInstance *)0x0;
  puVar8[0x22] = unaff_r30;
  dVar28 = 1000000000.0;
  puVar8[0x21] = unaff_r29;
  puVar8[0x1d] = unaff_r25;
  puVar8[0x1c] = unaff_r24;
  if (bVar2) {
    iVar19 = 0;
    do {
      if (moby->drawDistance != 0) {
        if (in_r8 == (int *)0x0) {
          if (moby->enabled == '\0') goto LAB_00389230;
        }
        else {
          iVar14 = 0;
          piVar13 = in_r8;
          do {
            if ((MobyInstance *)*piVar13 == moby) goto LAB_00389230;
            iVar14 = iVar14 + 1;
            piVar13 = piVar13 + 1;
          } while (iVar14 < 7);
        }
        piVar13 = (int *)MB_GetPvarsIfMobyHasThem(moby);
        if ((((piVar13 != (int *)0x0) && (dVar25 = 0.0, -1 < *piVar13)) &&
            (moby != (MobyInstance *)0x0 && (moby->modeBits & CAN_BE_AUTO_TARGETED) != NONE)) &&
           ((moby->pClass != (MobyClass *)0x0 && ((short)moby->pClass->mode_bits == 5)))) {
          fVar3 = param_4[1];
          fVar5 = fVar3 - (moby->pos).y;
          fVar4 = (moby->pos).x;
          fVar7 = *param_4 - fVar4;
          dVar27 = (double)SQRT(fVar7 * fVar7 + fVar5 * fVar5);
          if (dVar27 < param_3) {
            fVar7 = fVar4 - *param_4;
            *(float *)(puVar8 + 0xe) = fVar4;
            fVar4 = (moby->pos).y;
            fVar3 = fVar4 - fVar3;
            *(float *)((int)puVar8 + 0x74) = fVar4;
            fVar4 = (moby->pos).z;
            *(float *)(puVar8 + 0xf) = fVar4;
            *(f32 *)((int)puVar8 + 0x7c) = (moby->pos).w;
            fVar5 = (float)piVar13[4];
            fVar6 = ABS(fVar7);
            *(float *)((int)puVar8 + 0x8c) = fVar7;
            fVar7 = ABS(fVar3);
            *(float *)(puVar8 + 0x12) = fVar3;
            *(float *)((int)puVar8 + 0x94) = fVar6 - fVar7;
            fVar3 = *(float *)(param_5 + 8);
            *(float *)(puVar8 + 0xf) = fVar5 + 0.1 + fVar4;
            uVar17 = (ulonglong)(*(uint *)((int)puVar8 + 0x8c) >> 0x1c) & 8 |
                     (ulonglong)(*(uint *)((int)puVar8 + 0x94) >> 0x1e) & 2 |
                     (ulonglong)(*(uint *)(puVar8 + 0x12) >> 0x1d) & 4;
            fVar4 = ABS(*(float *)((int)puVar8 + 0x8c));
            if (*(float *)((int)puVar8 + 0x94) - 0.0 < 0.0) {
              fVar4 = fVar7;
            }
            fVar7 = *(float *)(&g_atanQuadrantTable + (int)(uVar17 << 2));
            fVar5 = *(float *)(((uint)(uVar17 << 2) | 0x735900) + 4);
            fVar10 = ABS(*(float *)(puVar8 + 0x12));
            if (*(float *)((int)puVar8 + 0x94) - 0.0 < 0.0) {
              fVar10 = fVar6;
            }
            dVar26 = 0.7853981852531433;
            dVar22 = dVar25;
            if (0.0 < fVar4) {
              lVar12 = uVar11 - 0x150;
              lVar15 = uVar11 - 0xa8;
              lVar18 = uVar11 - 0x98;
              lVar21 = 2;
              fVar4 = (fVar10 - fVar4) / (fVar10 + fVar4);
              fVar6 = fVar4 * fVar4;
              *(float *)((int)puVar8 + 0xc4) = fVar4;
              *(float *)((int)puVar8 + 0xbc) = fVar4;
              *(float *)(puVar8 + 0x18) = fVar4;
              *(float *)(puVar8 + 0x17) = fVar4;
              fVar4 = fVar6 * fVar6;
              *(float *)((int)puVar8 + 0xbc) = *(float *)((int)puVar8 + 0xbc) * fVar6;
              *(float *)(puVar8 + 0x18) = *(float *)(puVar8 + 0x18) * fVar4;
              *(float *)((int)puVar8 + 0xc4) = *(float *)((int)puVar8 + 0xc4) * fVar4 * fVar6;
              do {
                *(float *)((int)lVar12 + 0xb8) = *(float *)((int)lVar12 + 0xa8) * fVar4 * fVar4;
                iVar14 = (int)lVar15;
                lVar12 = lVar12 + 8;
                lVar15 = lVar15 + 8;
                *(float *)((int)lVar18 + 4) = *(float *)(iVar14 + 4) * fVar4 * fVar4;
                lVar18 = lVar18 + 8;
                lVar21 = lVar21 + -1;
              } while (lVar21 != 0);
              lVar21 = 4;
              lVar18 = uVar11 - 0xa8;
              pfVar16 = (float *)&DAT_007358e0;
              lVar12 = lVar1;
              lVar15 = lVar18;
              do {
                fVar4 = *pfVar16;
                fVar6 = pfVar16[1];
                pfVar16 = pfVar16 + 2;
                *(float *)((int)lVar12 + 0xb8) = *(float *)((int)lVar12 + 0xb8) * fVar4;
                lVar12 = lVar12 + 8;
                *(float *)((int)lVar15 + 4) = *(float *)((int)lVar15 + 4) * fVar6;
                lVar15 = lVar15 + 8;
                lVar21 = lVar21 + -1;
              } while (lVar21 != 0);
              lVar15 = 2;
              lVar12 = lVar1;
              do {
                iVar14 = (int)lVar12;
                lVar12 = lVar12 + 0x10;
                iVar9 = (int)lVar18;
                lVar18 = lVar18 + 0x10;
                dVar22 = (double)((float)(dVar22 + (double)*(float *)(iVar14 + 0xb8)) +
                                  *(float *)(iVar9 + 4) + *(float *)(iVar9 + 8) +
                                 *(float *)(iVar9 + 0xc));
                lVar15 = lVar15 + -1;
              } while (lVar15 != 0);
              dVar22 = (double)((float)(dVar22 + 0.7853981852531433) * fVar7 + fVar5);
            }
            dVar22 = (double)FastSubRots(fVar3,(float)dVar22);
            dVar22 = (double)(float)(dVar22 * dVar22);
            fVar3 = *(float *)(param_5 + 4);
            if (dVar22 < (double)(float)(param_1 * param_1)) {
              fVar4 = param_4[2];
              *(float *)(puVar8 + 0x10) = (float)dVar27;
              dVar23 = ABS((double)(*(float *)(puVar8 + 0xf) - fVar4));
              *(float *)((int)puVar8 + 0x84) = *(float *)(puVar8 + 0xf) - fVar4;
              *(float *)(puVar8 + 0x11) = (float)(ABS(dVar27) - dVar23);
              uVar17 = (ulonglong)(*(uint *)(puVar8 + 0x10) >> 0x1c) & 8 |
                       (ulonglong)(*(uint *)(puVar8 + 0x11) >> 0x1e) & 2 |
                       (ulonglong)(*(uint *)((int)puVar8 + 0x84) >> 0x1d) & 4;
              dVar24 = ABS((double)*(float *)(puVar8 + 0x10));
              if ((double)*(float *)(puVar8 + 0x11) - dVar25 < 0.0) {
                dVar24 = dVar23;
              }
              fVar4 = *(float *)(&g_atanQuadrantTable + (int)(uVar17 << 2));
              dVar23 = ABS((double)*(float *)((int)puVar8 + 0x84));
              if ((double)*(float *)(puVar8 + 0x11) - dVar25 < 0.0) {
                dVar23 = ABS(dVar27);
              }
              fVar5 = *(float *)(((uint)(uVar17 << 2) | 0x735900) + 4);
              if (dVar25 < dVar24) {
                lVar12 = uVar11 - 0x150;
                lVar18 = uVar11 - 0xb8;
                lVar15 = uVar11 - 200;
                lVar21 = 2;
                fVar7 = (float)(dVar23 - dVar24) / (float)(dVar23 + dVar24);
                fVar6 = fVar7 * fVar7;
                *(float *)((int)puVar8 + 0xa4) = fVar7;
                *(float *)((int)puVar8 + 0x9c) = fVar7;
                *(float *)(puVar8 + 0x14) = fVar7;
                *(float *)(puVar8 + 0x13) = fVar7;
                fVar7 = fVar6 * fVar6;
                *(float *)((int)puVar8 + 0x9c) = *(float *)((int)puVar8 + 0x9c) * fVar6;
                *(float *)(puVar8 + 0x14) = *(float *)(puVar8 + 0x14) * fVar7;
                *(float *)((int)puVar8 + 0xa4) = *(float *)((int)puVar8 + 0xa4) * fVar7 * fVar6;
                do {
                  *(float *)((int)lVar12 + 0x98) = *(float *)((int)lVar12 + 0x88) * fVar7 * fVar7;
                  iVar14 = (int)lVar15;
                  lVar15 = lVar15 + 8;
                  lVar12 = lVar12 + 8;
                  *(float *)((int)lVar18 + 4) = *(float *)(iVar14 + 4) * fVar7 * fVar7;
                  lVar18 = lVar18 + 8;
                  lVar21 = lVar21 + -1;
                } while (lVar21 != 0);
                lVar21 = 4;
                lVar18 = uVar11 - 200;
                pfVar16 = (float *)&DAT_007358e0;
                lVar12 = lVar1;
                lVar15 = lVar18;
                do {
                  fVar7 = *pfVar16;
                  fVar6 = pfVar16[1];
                  pfVar16 = pfVar16 + 2;
                  *(float *)((int)lVar12 + 0x98) = *(float *)((int)lVar12 + 0x98) * fVar7;
                  lVar12 = lVar12 + 8;
                  *(float *)((int)lVar15 + 4) = *(float *)((int)lVar15 + 4) * fVar6;
                  lVar15 = lVar15 + 8;
                  lVar21 = lVar21 + -1;
                } while (lVar21 != 0);
                lVar15 = 2;
                lVar12 = lVar1;
                do {
                  iVar14 = (int)lVar12;
                  iVar9 = (int)lVar18;
                  lVar12 = lVar12 + 0x10;
                  lVar18 = lVar18 + 0x10;
                  dVar25 = (double)((float)(dVar25 + (double)*(float *)(iVar14 + 0x98)) +
                                    *(float *)(iVar9 + 4) + *(float *)(iVar9 + 8) +
                                   *(float *)(iVar9 + 0xc));
                  lVar15 = lVar15 + -1;
                } while (lVar15 != 0);
                dVar25 = (double)((float)(dVar25 + dVar26) * fVar4 + fVar5);
              }
              dVar25 = (double)FastSubRots(fVar3,(float)dVar25);
              if ((double)(float)(dVar25 * dVar25) < (double)(float)(param_2 * param_2)) {
                dVar26 = 0.20000000298023224;
                if (5.0 - dVar27 < 0.0) {
                  dVar26 = (double)(float)(dVar22 * (double)(float)(dVar25 * dVar25) + 1.0);
                }
                dVar25 = (double)(float)(dVar27 * dVar26);
                if ((dVar25 < dVar28) &&
                   ((iVar14 = CollLine(param_4,uVar11 - 0xf0,2,moby,0), iVar14 == 0 ||
                    ((g_CollOutput.pMoby != (MobyInstance *)0x0 &&
                     ((((g_CollOutput.pMoby)->pClass != (MobyClass *)0x0 &&
                       ((short)(g_CollOutput.pMoby)->pClass->mode_bits == 5)) ||
                      (((g_CollOutput.pMoby)->pClass != (MobyClass *)0x0 &&
                       ((short)(g_CollOutput.pMoby)->pClass->mode_bits == 0xf)))))))))) {
                  dVar28 = dVar25;
                  pMVar20 = moby;
                }
              }
            }
          }
        }
      }
LAB_00389230:
      moby = *(MobyInstance **)((int)&DAT_00a49348 + iVar19);
      iVar19 = iVar19 + 4;
    } while (moby != (MobyInstance *)0x0);
  }
  return pMVar20;
}


// 0x03892e8 (0xddc bytes)
// inlined: FastAtan2 @0x389b38, FastAtan2 @0x389cec
// strings: 003892b4: '?&ff_qfff' (raw) | 003892b8: '?fff' (raw) | 00a0fdc4: 'None'

/* Moby 454 */

void UpdateMoby_454(MobyInstance *moby)

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
  int *piVar10;
  undefined2 uVar11;
  undefined4 uVar12;
  ulonglong *puVar13;
  int iVar14;
  char acVar15 [4];
  ulonglong uVar16;
  longlong lVar17;
  int iVar19;
  MobyInstance *pMVar20;
  int *piVar21;
  ulonglong uVar18;
  uint uVar22;
  longlong lVar23;
  float *pfVar26;
  ulonglong uVar24;
  longlong lVar25;
  short sVar27;
  longlong lVar28;
  ulonglong unaff_r27;
  ulonglong unaff_r28;
  ulonglong unaff_r29;
  ulonglong unaff_r30;
  ulonglong uVar29;
  ulonglong unaff_r31;
  ulonglong in_LR;
  longlong lVar30;
  longlong lVar31;
  double dVar32;
  ulonglong in_f29;
  double dVar33;
  ulonglong in_f30;
  double dVar34;
  ulonglong in_f31;
  double dVar35;
  GPiece<16> auVar36;
  GPiece<16> auVar37;
  GPiece<16> auVar38;
  
  lVar17 = (longlong)(int)moby;
  uVar16 = ZEXT48(&stack0x00000000);
  lVar30 = uVar16 - 0x1f0;
  puVar13 = (ulonglong *)lVar30;
  *puVar13 = uVar16;
  puVar13[0x40] = in_LR;
  puVar13[0x3b] = in_f29;
  puVar13[0x3c] = in_f30;
  puVar13[0x3d] = in_f31;
  puVar13[0x3a] = unaff_r31;
  puVar13[0x38] = unaff_r29;
  puVar13[0x37] = unaff_r28;
  puVar13[0x39] = unaff_r30;
  piVar10 = (int *)moby->pVar;
  uVar29 = ZEXT48(piVar10);
  puVar13[0x36] = unaff_r27;
  FastApplyTransform((Vec4 *)(uVar16 - 0x120),(Vec4 *)&GameCamera);
  FastNormalizeRMtx4(uVar16 - 0xf0,uVar16 - 0x120);
  if ((moby->state == '\x02') || (moby->state == '\x03')) {
    iVar19 = FastDecTimerS32(uVar29 + 8);
    if ((iVar19 != 0) ||
       (((*piVar10 == 0 || (cVar1 = *(char *)(*piVar10 + 0x20), cVar1 == -2)) || (cVar1 == -3)))) {
      *piVar10 = 0;
      piVar10[3] = 0;
    }
    fVar5 = GameCamera.rot.radius;
    fVar6 = GameCamera.rot.elevation;
    fVar9 = -GameCamera.rot.elevation;
    *(float *)(puVar13 + 0x10) = GameCamera.rot.azimuth;
    *(float *)((int)puVar13 + 0x84) = fVar6;
    acVar15 = GameCamera.field10_0x15c;
    *(float *)(puVar13 + 0x11) = fVar5;
    *(char (*) [4])((int)puVar13 + 0x8c) = acVar15;
    *(float *)((int)puVar13 + 0x84) = fVar9;
    GetBonePosition(lVar17,*(undefined1 *)((int)piVar10 + 5),uVar16 - 0x160);
    pMVar20 = (MobyInstance *)
              M454_00388c58
                        (0x3ffb2ba800000000,0x3ffb2ba800000000,0x4054000000000000,uVar16 - 0x160,
                         uVar16 - 0x170);
    if (((pMVar20 != (MobyInstance *)0x0) && (*piVar10 == 0)) ||
       ((iVar19 = *piVar10, iVar19 == 0 ||
        ((*(char *)(iVar19 + 0x20) == -3 || *(char *)(iVar19 + 0x20) == -2 ||
         (*(char *)(iVar19 + 0x31) == '\0')))))) {
      *piVar10 = (int)pMVar20;
      auVar36 = ZEXT416(0xffffffff);
      auVar36 = auVar36 | auVar36 << 0x20 | auVar36 << 0x40 | auVar36 << 0x60;
      piVar10[3] = 0;
      auVar37 = vectorShiftLeftIntegerWord(auVar36,auVar36);
      auVar36 = loadVectorLeftIndexed(8,0x3892a4);
      auVar36 = auVar36 >> 0x60 & (GPiece<16>)0xffffffff;
      auVar38 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
      auVar36 = vectorMultiplyAddFloatingPoint
                          (auVar38,auVar36 | auVar36 << 0x20 | auVar36 << 0x40 | auVar36 << 0x60,
                           auVar37);
      auVar36 = vectorConvertToSignedFixedPointWordSaturate(auVar36,0);
      auVar36 = auVar36 >> 0x60 & (GPiece<16>)0xffffffff;
      uVar12 = storeVectorElementWordIndexed
                         (auVar36 | auVar36 << 0x20 | auVar36 << 0x40 | auVar36 << 0x60,8,uVar29);
      *(undefined4 *)((uint)(piVar10 + 2) & 0xfffffffc) = uVar12;
      piVar10[5] = 0x3f800000;
      piVar21 = (int *)MB_GetPvarsIfMobyHasThem(pMVar20);
      if (piVar21 != (int *)0x0) {
        piVar10[3] = piVar21[4];
        piVar10[5] = *piVar21;
      }
    }
    if (((*piVar10 != 0) && (iVar19 = FastDecTimerS16(uVar29 + 0x10), iVar19 != 0)) &&
       (iVar19 = Hero_GetWeaponAmmo(-1), iVar19 != 0)) {
      iVar19 = *piVar10;
      if (((iVar19 == 0) || (*(char *)(iVar19 + 0x20) == -2)) || (*(char *)(iVar19 + 0x20) == -3)) {
        *piVar10 = 0;
        piVar10[3] = 0;
      }
      else {
        fVar5 = GameCamera.posY - *(float *)(iVar19 + 0x14);
        fVar7 = GameCamera.posX - *(float *)(iVar19 + 0x10);
        fVar8 = GameCamera.posZ - *(float *)(iVar19 + 0x18);
        *(float *)(puVar13 + 0x14) = *(float *)(iVar19 + 0x10);
        *(undefined4 *)((int)puVar13 + 0xa4) = *(undefined4 *)(iVar19 + 0x14);
        fVar9 = *(float *)(iVar19 + 0x18);
        *(float *)(puVar13 + 0x15) = fVar9;
        *(undefined4 *)((int)puVar13 + 0xac) = *(undefined4 *)(iVar19 + 0x1c);
        fVar6 = (float)piVar10[3];
        puVar13[0xe] = 4;
        *(float *)(puVar13 + 0x15) = fVar9 + fVar6;
        DrawTargetCrosshair
                  (ABS(-(SQRT(fVar8 * fVar8 + fVar7 * fVar7 + fVar5 * fVar5) * 0.006666667 * 0.65 -
                        0.9)),moby,0xff0fff0f,0x3892a4);
      }
    }
  }
  bVar2 = moby->state;
  if (bVar2 < 4) {
    if (bVar2 == 0) {
      *piVar10 = 0;
      DAT_0096ad8c = 0;
      moby->state = '\x01';
      *(undefined2 *)(piVar10 + 4) = 0;
    }
    else if (bVar2 < 2) {
      if ((moby->field43_0x70 & 2U) != 0) {
        moby->state = '\x02';
      }
    }
    else if (bVar2 < 3) {
      if (g_heroState == FIRST_PERSON_VIEW) {
        TransitionMovement(0x1e,1);
      }
      if ((((g_Pad.buttonsPressedThisFrame & DAT_0096ad80) != 0) && (DAT_0096bd8c == '\0')) &&
         (iVar19 = hero_ConsumeAmmo(-1,1), iVar19 != 0)) {
        if (CHAR_ARRAY_00a0fdc4.piece<24,2>() != -1) {
          CHAR_ARRAY_00a0fdc4.piece<24,2>() = CHAR_ARRAY_00a0fdc4.piece<24,2>() + 1;
        }
        puVar13[0x33] = (longlong)g_GameFrameCount;
        uVar11 = CHAR_ARRAY_00a0fdc4.piece<26,2>();
        puVar13[0x33] = (longlong)(int)(animationSpeed * ((float)(longlong)puVar13[0x33] + 0.5));
        iVar19 = *(int *)((int)puVar13 + 0x19c);
        if ((int)(uint)(ushort)uVar11 < iVar19 / 600) {
          sVar27 = (short)(iVar19 >> 0x1f);
          CHAR_ARRAY_00a0fdc4.piece<26,2>() =
               ((short)(iVar19 / 600) + sVar27) -
               ((short)((short)(iVar19 / 0x2580000) + sVar27) >> 0xf);
        }
        DAT_0096ad8c = 2;
        CHAR_ARRAY_00a0fdc4.piece<28,4>() = CHAR_ARRAY_00a0fdc4.piece<28,4>() | 1 << (Level & 0x3f) | 0x80000000;
        moby->state = '\x04';
        *(undefined2 *)((int)piVar10 + 6) = 0;
        *(undefined1 *)((int)piVar10 + 5) = 0;
        *(undefined1 *)(piVar10 + 1) = 0;
        Hero_PlayFiringAnim();
        lVar30 = 7;
        do {
          *(undefined4 *)((int)uVar29 + 0x18) = 0;
          uVar29 = uVar29 + 4;
          lVar30 = lVar30 + -1;
        } while (lVar30 != 0);
        *(undefined2 *)((int)piVar10 + 0x12) = 0;
      }
    }
    else {
      puVar13[0xe] = 4;
      DrawTargetCrosshair(1.0,moby,0xff0f0fff,0x3892a4);
      if ((g_Pad.downButtons & (L1|L2)) == 0) {
        moby->state = '\x02';
      }
      else if ((((g_Pad.buttonsPressedThisFrame & DAT_0096ad80) != 0) && (DAT_0096bd8c == '\0')) &&
              (iVar19 = hero_ConsumeAmmo(-1,1), iVar19 != 0)) {
        if (CHAR_ARRAY_00a0fdc4.piece<24,2>() != -1) {
          CHAR_ARRAY_00a0fdc4.piece<24,2>() = CHAR_ARRAY_00a0fdc4.piece<24,2>() + 1;
        }
        puVar13[0x33] = (longlong)g_GameFrameCount;
        uVar11 = CHAR_ARRAY_00a0fdc4.piece<26,2>();
        puVar13[0x33] = (longlong)(int)(animationSpeed * ((float)(longlong)puVar13[0x33] + 0.5));
        iVar19 = *(int *)((int)puVar13 + 0x19c);
        if ((int)(uint)(ushort)uVar11 < iVar19 / 600) {
          sVar27 = (short)(iVar19 >> 0x1f);
          CHAR_ARRAY_00a0fdc4.piece<26,2>() =
               ((short)(iVar19 / 600) + sVar27) -
               ((short)((short)(iVar19 / 0x2580000) + sVar27) >> 0xf);
        }
        DAT_0096ad8c = 2;
        CHAR_ARRAY_00a0fdc4.piece<28,4>() = CHAR_ARRAY_00a0fdc4.piece<28,4>() | 1 << (Level & 0x3f) | 0x80000000;
        moby->state = '\x04';
        *(undefined2 *)((int)piVar10 + 6) = 0;
        *(undefined1 *)((int)piVar10 + 5) = 0;
        *(undefined1 *)(piVar10 + 1) = 0;
        Hero_PlayFiringAnim();
        lVar30 = 7;
        do {
          *(undefined4 *)((int)uVar29 + 0x18) = 0;
          uVar29 = uVar29 + 4;
          lVar30 = lVar30 + -1;
        } while (lVar30 != 0);
        *(undefined2 *)((int)piVar10 + 0x12) = 0;
      }
    }
  }
  else if (bVar2 < 7) {
    if (bVar2 < 5) {
      iVar19 = FastDecTimerS16(uVar29 + 6);
      if (iVar19 != 0) {
        auVar36 = ZEXT416(0xffffffff);
        auVar36 = auVar36 | auVar36 << 0x20 | auVar36 << 0x40 | auVar36 << 0x60;
        auVar37 = vectorShiftLeftIntegerWord(auVar36,auVar36);
        auVar36 = loadVectorLeftIndexed(0x28,0x3892a4);
        auVar38 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
        auVar36 = auVar36 >> 0x60 & (GPiece<16>)0xffffffff;
        uVar18 = (ulonglong)*(byte *)((int)piVar10 + 5) + 1 & 0xff;
        auVar36 = vectorMultiplyAddFloatingPoint
                            (auVar38,auVar36 | auVar36 << 0x20 | auVar36 << 0x40 | auVar36 << 0x60,
                             auVar37);
        auVar36 = vectorConvertToSignedFixedPointWordSaturate(auVar36,0);
        uVar18 = uVar18 + (((uVar18 + 1) * 0xe3 << 0x20) >> 0x2b) * -9;
        auVar36 = vectorSplatHalfWord(auVar36,1);
        uVar11 = storeVectorElementHalfWordIndexed(auVar36,6,uVar29);
        *(undefined2 *)((int)piVar10 + 6) = uVar11;
        *(char *)((int)piVar10 + 5) = (char)uVar18;
        *(char *)(piVar10 + 1) = *(char *)(piVar10 + 1) + '\x01';
        dVar34 = 0.0;
        dVar35 = (double)DAT_0096af9c;
        fVar9 = DAT_0096a328;
        fVar6 = DAT_0096a324;
        fVar5 = DAT_0096a320;
        if (g_heroState == WEAPON_FIRST_PERSON_VIEW) {
          fVar9 = *(float *)(puVar13 + 0x25);
          fVar6 = *(float *)((int)puVar13 + 0x124);
          fVar5 = *(float *)(puVar13 + 0x24);
        }
        fVar5 = (DAT_00969de0 + DAT_00969e20) * 3.0 + fVar5;
        fVar6 = (DAT_00969de4 + DAT_00969e24) * 3.0 + fVar6;
        fVar9 = (DAT_00969de8 + DAT_00969e28) * 3.0 + fVar9;
        if (DAT_0096af90 == 0) {
          *(float *)((int)puVar13 + 0x14c) = fVar5;
          *(float *)(puVar13 + 0x2a) = fVar6;
          *(float *)((int)puVar13 + 0x154) = ABS(fVar5) - ABS(fVar6);
          uVar24 = (ulonglong)(*(uint *)((int)puVar13 + 0x14c) >> 0x1c) & 8 |
                   (ulonglong)(*(uint *)((int)puVar13 + 0x154) >> 0x1e) & 2 |
                   (ulonglong)(*(uint *)(puVar13 + 0x2a) >> 0x1d) & 4;
          fVar7 = ABS(*(float *)((int)puVar13 + 0x14c));
          if (*(float *)((int)puVar13 + 0x154) - 0.0 < 0.0) {
            fVar7 = ABS(fVar6);
          }
          fVar8 = *(float *)(&g_atanQuadrantTable + (int)(uVar24 << 2));
          fVar4 = ABS(*(float *)(puVar13 + 0x2a));
          if (*(float *)((int)puVar13 + 0x154) - 0.0 < 0.0) {
            fVar4 = ABS(fVar5);
          }
          fVar3 = *(float *)(((uint)(uVar24 << 2) | 0x735900) + 4);
          dVar35 = dVar34;
          if (0.0 < fVar7) {
            lVar23 = uVar16 - 0x1e0;
            lVar25 = uVar16 - 0x78;
            lVar28 = uVar16 - 0x68;
            lVar31 = 2;
            fVar7 = (fVar4 - fVar7) / (fVar4 + fVar7);
            fVar4 = fVar7 * fVar7;
            *(float *)((int)puVar13 + 0x184) = fVar7;
            *(float *)((int)puVar13 + 0x17c) = fVar7;
            *(float *)(puVar13 + 0x30) = fVar7;
            *(float *)(puVar13 + 0x2f) = fVar7;
            fVar7 = fVar4 * fVar4;
            *(float *)((int)puVar13 + 0x17c) = *(float *)((int)puVar13 + 0x17c) * fVar4;
            *(float *)(puVar13 + 0x30) = *(float *)(puVar13 + 0x30) * fVar7;
            *(float *)((int)puVar13 + 0x184) = *(float *)((int)puVar13 + 0x184) * fVar7 * fVar4;
            do {
              *(float *)((int)lVar23 + 0x178) = *(float *)((int)lVar23 + 0x168) * fVar7 * fVar7;
              iVar19 = (int)lVar25;
              lVar23 = lVar23 + 8;
              lVar25 = lVar25 + 8;
              *(float *)((int)lVar28 + 4) = *(float *)(iVar19 + 4) * fVar7 * fVar7;
              lVar28 = lVar28 + 8;
              lVar31 = lVar31 + -1;
            } while (lVar31 != 0);
            lVar31 = 4;
            lVar28 = uVar16 - 0x78;
            pfVar26 = (float *)&DAT_007358e0;
            lVar23 = lVar30;
            lVar25 = lVar28;
            do {
              fVar7 = *pfVar26;
              fVar4 = pfVar26[1];
              pfVar26 = pfVar26 + 2;
              *(float *)((int)lVar23 + 0x178) = *(float *)((int)lVar23 + 0x178) * fVar7;
              lVar23 = lVar23 + 8;
              *(float *)((int)lVar25 + 4) = *(float *)((int)lVar25 + 4) * fVar4;
              lVar25 = lVar25 + 8;
              lVar31 = lVar31 + -1;
            } while (lVar31 != 0);
            lVar25 = 2;
            lVar23 = lVar30;
            do {
              iVar19 = (int)lVar23;
              iVar14 = (int)lVar28;
              lVar23 = lVar23 + 0x10;
              lVar28 = lVar28 + 0x10;
              dVar35 = (double)((float)(dVar35 + (double)*(float *)(iVar19 + 0x178)) +
                                *(float *)(iVar14 + 4) + *(float *)(iVar14 + 8) +
                               *(float *)(iVar14 + 0xc));
              lVar25 = lVar25 + -1;
            } while (lVar25 != 0);
            dVar35 = (double)((float)(dVar35 + 0.7853981852531433) * fVar8 + fVar3);
          }
        }
        *(float *)((int)puVar13 + 0x144) = fVar9;
        fVar9 = ABS(fVar9);
        fVar6 = SQRT(fVar5 * fVar5 + fVar6 * fVar6);
        fVar5 = ABS(fVar6);
        *(float *)(puVar13 + 0x28) = fVar6;
        *(float *)(puVar13 + 0x29) = fVar5 - fVar9;
        uVar24 = (ulonglong)(*(uint *)(puVar13 + 0x28) >> 0x1c) & 8 |
                 (ulonglong)(*(uint *)(puVar13 + 0x29) >> 0x1e) & 2 |
                 (ulonglong)(*(uint *)((int)puVar13 + 0x144) >> 0x1d) & 4;
        fVar6 = ABS(*(float *)(puVar13 + 0x28));
        if (*(float *)(puVar13 + 0x29) - 0.0 < 0.0) {
          fVar6 = fVar9;
        }
        fVar9 = *(float *)(&g_atanQuadrantTable + (int)(uVar24 << 2));
        fVar7 = ABS(*(float *)((int)puVar13 + 0x144));
        if (*(float *)(puVar13 + 0x29) - 0.0 < 0.0) {
          fVar7 = fVar5;
        }
        fVar5 = *(float *)(((uint)(uVar24 << 2) | 0x735900) + 4);
        dVar32 = dVar34;
        if (0.0 < fVar6) {
          lVar23 = uVar16 - 0x1e0;
          lVar25 = uVar16 - 0x98;
          lVar28 = uVar16 - 0x88;
          lVar31 = 2;
          fVar6 = (fVar7 - fVar6) / (fVar7 + fVar6);
          fVar7 = fVar6 * fVar6;
          *(float *)((int)puVar13 + 0x164) = fVar6;
          *(float *)((int)puVar13 + 0x15c) = fVar6;
          *(float *)(puVar13 + 0x2c) = fVar6;
          *(float *)(puVar13 + 0x2b) = fVar6;
          fVar6 = fVar7 * fVar7;
          *(float *)((int)puVar13 + 0x15c) = *(float *)((int)puVar13 + 0x15c) * fVar7;
          *(float *)(puVar13 + 0x2c) = *(float *)(puVar13 + 0x2c) * fVar6;
          *(float *)((int)puVar13 + 0x164) = *(float *)((int)puVar13 + 0x164) * fVar6 * fVar7;
          do {
            *(float *)((int)lVar23 + 0x158) = *(float *)((int)lVar23 + 0x148) * fVar6 * fVar6;
            iVar19 = (int)lVar25;
            lVar23 = lVar23 + 8;
            lVar25 = lVar25 + 8;
            *(float *)((int)lVar28 + 4) = *(float *)(iVar19 + 4) * fVar6 * fVar6;
            lVar28 = lVar28 + 8;
            lVar31 = lVar31 + -1;
          } while (lVar31 != 0);
          lVar31 = 4;
          lVar28 = uVar16 - 0x98;
          pfVar26 = (float *)&DAT_007358e0;
          lVar23 = lVar30;
          lVar25 = lVar28;
          do {
            fVar6 = *pfVar26;
            fVar7 = pfVar26[1];
            pfVar26 = pfVar26 + 2;
            *(float *)((int)lVar23 + 0x158) = *(float *)((int)lVar23 + 0x158) * fVar6;
            lVar23 = lVar23 + 8;
            *(float *)((int)lVar25 + 4) = *(float *)((int)lVar25 + 4) * fVar7;
            lVar25 = lVar25 + 8;
            lVar31 = lVar31 + -1;
          } while (lVar31 != 0);
          lVar23 = 2;
          do {
            iVar19 = (int)lVar30;
            lVar30 = lVar30 + 0x10;
            iVar14 = (int)lVar28;
            lVar28 = lVar28 + 0x10;
            dVar32 = (double)((float)(dVar32 + (double)*(float *)(iVar19 + 0x158)) +
                              *(float *)(iVar14 + 4) + *(float *)(iVar14 + 8) +
                             *(float *)(iVar14 + 0xc));
            lVar23 = lVar23 + -1;
          } while (lVar23 != 0);
          dVar32 = (double)((float)(dVar32 + 0.7853981852531433) * fVar9 + fVar5);
        }
        dVar33 = -dVar32;
        GetBonePosition(dVar32,lVar17,uVar18 & 0xff,uVar16 - 0x140);
        Hero_PlayFiringAnim();
        FUN_0038c8a0((double)(float)piVar10[3],dVar35,dVar33,lVar17,uVar16 - 0x140,*piVar10);
        if (6 < *(byte *)(piVar10 + 1)) {
          DAT_0096ad8c = 0;
          Hero_EndFiringAnim();
          auVar36 = ZEXT416(0xffffffff);
          auVar36 = auVar36 | auVar36 << 0x20 | auVar36 << 0x40 | auVar36 << 0x60;
          moby->state = '\x05';
          auVar37 = vectorShiftLeftIntegerWord(auVar36,auVar36);
          auVar36 = loadVectorLeftIndexed(0x34,0x3892a4);
          auVar36 = auVar36 >> 0x60 & (GPiece<16>)0xffffffff;
          auVar38 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
          auVar36 = vectorMultiplyAddFloatingPoint
                              (auVar38,auVar36 | auVar36 << 0x20 | auVar36 << 0x40 | auVar36 << 0x60
                               ,auVar37);
          auVar36 = vectorConvertToSignedFixedPointWordSaturate(auVar36,0);
          auVar36 = vectorSplatHalfWord(auVar36,1);
          uVar11 = storeVectorElementHalfWordIndexed(auVar36,6,uVar29);
          *(undefined2 *)((int)piVar10 + 6) = uVar11;
          uVar11 = storeVectorElementHalfWordIndexed(auVar36,0x10,uVar29);
          *(undefined2 *)(piVar10 + 4) = uVar11;
        }
        fVar9 = (float)piVar10[5];
        piVar10[5] = (int)(fVar9 - 1.0);
        fVar5 = GameCamera.rot.elevation;
        fVar6 = GameCamera.rot.azimuth;
        if ((((double)(fVar9 - 1.0) <= dVar34) || (*piVar10 == 0)) ||
           ((cVar1 = *(char *)(*piVar10 + 0x20), cVar1 == -2 || (cVar1 == -3)))) {
          sVar27 = *(short *)((int)piVar10 + 0x12) + 1;
          fVar9 = -GameCamera.rot.elevation;
          iVar19 = (int)((ulonglong)((longlong)(int)sVar27 * -0x6db6db6d) >> 0x20) + (int)sVar27;
          *(int *)((int)piVar10 + (int)((longlong)*(short *)((int)piVar10 + 0x12) << 2) + 0x18) =
               *piVar10;
          *(float *)(puVar13 + 0x18) = fVar6;
          fVar6 = GameCamera.rot.radius;
          *(float *)((int)puVar13 + 0xc4) = fVar5;
          *(short *)((int)piVar10 + 0x12) =
               sVar27 + ((short)(iVar19 >> 2) - (short)(iVar19 >> 0x1f)) * -7;
          acVar15 = GameCamera.field10_0x15c;
          *(float *)(puVar13 + 0x19) = fVar6;
          *(char (*) [4])((int)puVar13 + 0xcc) = acVar15;
          *(float *)((int)puVar13 + 0xc4) = fVar9;
          pMVar20 = (MobyInstance *)
                    M454_00388c58
                              (0x400921fb60000000,0x400921fb60000000,0x4059000000000000,
                               lVar17 + 0x10,uVar16 - 0x130);
          *piVar10 = (int)pMVar20;
          if ((pMVar20 == (MobyInstance *)0x0) && (0 < *(short *)((int)piVar10 + 0x12))) {
            uVar22 = rand();
            pMVar20 = (MobyInstance *)*piVar10;
            if ((uVar22 & (int)*(short *)((int)piVar10 + 0x12) + 1U) == 0) {
              iVar19 = rand();
              pMVar20 = (MobyInstance *)
                        piVar10[(iVar19 - (iVar19 / (int)*(short *)((int)piVar10 + 0x12)) *
                                          (int)*(short *)((int)piVar10 + 0x12)) + 6];
              *piVar10 = (int)pMVar20;
            }
          }
          auVar36 = ZEXT416(0xffffffff);
          auVar36 = auVar36 | auVar36 << 0x20 | auVar36 << 0x40 | auVar36 << 0x60;
          piVar10[3] = 0;
          auVar37 = vectorShiftLeftIntegerWord(auVar36,auVar36);
          auVar36 = loadVectorLeftIndexed(8,0x3892a4);
          auVar36 = auVar36 >> 0x60 & (GPiece<16>)0xffffffff;
          auVar38 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
          auVar36 = vectorMultiplyAddFloatingPoint
                              (auVar38,auVar36 | auVar36 << 0x20 | auVar36 << 0x40 | auVar36 << 0x60
                               ,auVar37);
          auVar36 = vectorConvertToSignedFixedPointWordSaturate(auVar36,0);
          auVar36 = auVar36 >> 0x60 & (GPiece<16>)0xffffffff;
          uVar12 = storeVectorElementWordIndexed
                             (auVar36 | auVar36 << 0x20 | auVar36 << 0x40 | auVar36 << 0x60,8,uVar29
                             );
          *(undefined4 *)((uint)(piVar10 + 2) & 0xfffffffc) = uVar12;
          piVar10[5] = 0x3f800000;
          piVar21 = (int *)MB_GetPvarsIfMobyHasThem(pMVar20);
          if (piVar21 != (int *)0x0) {
            piVar10[3] = piVar21[4];
            piVar10[5] = *piVar21;
          }
        }
      }
    }
    else if ((bVar2 < 6) && (iVar19 = FastDecTimerS16(uVar29 + 6), iVar19 != 0)) {
      *(undefined1 *)(piVar10 + 1) = 0;
      *piVar10 = 0;
      moby->state = '\x02';
    }
  }
  return;
}


