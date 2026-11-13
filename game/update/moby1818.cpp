// game/update/moby1818.cpp -- reconstructed from NPEA00385 EBOOT
// STATUS: NOT STARTED (raw Ghidra output)
// 9 functions, 0x2bc878-0x2c0b34
#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include "game/update/moby1818.h"
#include "game/camera.h"
#include "game/collproc.h"
#include "game/draw.h"
#include "game/freeze.h"
#include "game/hero.h"
#include "game/mobyfunc.h"
#include "game/mobyutil.h"
#include "game/partupd.h"
#include "game/path.h"
#include "game/respawn.h"
#include "game/sound.h"
#include "game/update/moby1633.h"
#include "game/update/moby437.h"
#include "idol/fastfunc.h"

// 0x02bc878 (0xd8 bytes)
void M1818_002bc878(undefined8 param_1,float *param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  
  fVar1 = (g_heroMobyPtr->transform).v1.y;
  fVar2 = (g_heroMobyPtr->transform).v1.x;
  fVar3 = (g_heroMobyPtr->transform).v1.z;
  fVar4 = 0.0;
  fVar6 = fVar3 * fVar3 + fVar2 * fVar2 + fVar1 * fVar1;
  if (SQRT(fVar6) == 0.0) {
    fVar5 = (g_heroMobyPtr->transform).v1.w;
    fVar2 = fVar4;
    fVar1 = fVar4;
  }
  else {
    fVar4 = 1.0 / SQRT(fVar6);
    fVar4 = -(fVar6 * fVar4 * fVar4 - 1.0) * fVar4 * 0.5 + fVar4;
    fVar5 = (g_heroMobyPtr->transform).v1.w;
    fVar4 = -(fVar6 * fVar4 * fVar4 - 1.0) * fVar4 * 0.5 + fVar4;
    fVar4 = -(fVar6 * fVar4 * fVar4 - 1.0) * fVar4 * 0.5 + fVar4;
    fVar2 = fVar2 * fVar4;
    fVar1 = fVar1 * fVar4;
    fVar4 = fVar3 * fVar4;
  }
  *param_2 = fVar2 + g_heroPosition.x;
  param_2[1] = fVar1 + g_heroPosition.y;
  fVar1 = g_heroPosition.z;
  param_2[3] = fVar5;
  param_2[2] = fVar4 + fVar1;
  return;
}


// 0x02bc960 (0x128 bytes)
// inlined: FastRSqrt @0x2bc9f4
void M1818_002bc960(undefined8 param_1,float *param_2)

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
  
  fVar1 = (g_heroMobyPtr->transform).v1.y;
  fVar2 = (g_heroMobyPtr->transform).v1.x;
  fVar3 = (g_heroMobyPtr->transform).v1.z;
  fVar4 = 0.0;
  fVar5 = (g_heroMobyPtr->transform).v2.x;
  fVar6 = (g_heroMobyPtr->transform).v2.y;
  fVar7 = (g_heroMobyPtr->transform).v2.z;
  fVar9 = SQRT(fVar3 * fVar3 + fVar2 * fVar2 + fVar1 * fVar1);
  if (fVar9 == 0.0) {
    fVar8 = (g_heroMobyPtr->transform).v1.w;
    fVar3 = fVar4;
    fVar1 = fVar4;
    fVar2 = fVar4;
  }
  else {
    fVar9 = 1.1 / fVar9;
    fVar8 = (g_heroMobyPtr->transform).v1.w;
    fVar2 = fVar2 * fVar9;
    fVar1 = fVar1 * fVar9;
    fVar3 = fVar3 * fVar9;
  }
  fVar11 = fVar7 * fVar7 + fVar5 * fVar5 + fVar6 * fVar6;
  fVar9 = fVar4;
  fVar10 = fVar4;
  if (SQRT(fVar11) != 0.0) {
    fVar4 = 1.0 / SQRT(fVar11);
    fVar4 = -(fVar11 * fVar4 * fVar4 - 1.0) * fVar4 * 0.5 + fVar4;
    fVar4 = -(fVar11 * fVar4 * fVar4 - 1.0) * fVar4 * 0.5 + fVar4;
    fVar4 = -(fVar11 * fVar4 * fVar4 - 1.0) * fVar4 * 0.5 + fVar4;
    fVar10 = fVar5 * fVar4;
    fVar9 = fVar6 * fVar4;
    fVar4 = fVar7 * fVar4;
  }
  param_2[3] = fVar8;
  *param_2 = fVar2 + fVar10;
  param_2[1] = fVar1 + fVar9;
  param_2[2] = fVar3 + fVar4;
  *param_2 = fVar2 + fVar10 + g_heroPosition.x;
  param_2[1] = fVar1 + fVar9 + g_heroPosition.y;
  param_2[2] = fVar3 + fVar4 + g_heroPosition.z + 1.0;
  return;
}


// 0x02bca98 (0x654 bytes)
// inlined: FastAtan2 @0x2bccac, FastAtan2 @0x2bce88
// strings: 002bca88: 'Nnk(' (raw)

MobyInstance *
M1818_002bca98
          (double param_1,double param_2,double param_3,double param_4,double param_5,double param_6
          ,undefined8 param_7,float *param_8,int param_9)

{
  longlong lVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  MobyInstance *moby;
  ulonglong *puVar7;
  int iVar8;
  float fVar9;
  ulonglong uVar10;
  int *piVar12;
  longlong lVar11;
  int iVar13;
  float *pfVar15;
  longlong lVar14;
  ulonglong uVar16;
  longlong lVar17;
  ulonglong unaff_r25;
  int iVar18;
  ulonglong unaff_r26;
  ulonglong unaff_r27;
  ulonglong unaff_r28;
  MobyInstance *pMVar19;
  ulonglong unaff_r29;
  ulonglong unaff_r30;
  ulonglong unaff_r31;
  ulonglong in_LR;
  longlong lVar20;
  double dVar21;
  double dVar22;
  double dVar23;
  ulonglong in_f21;
  double dVar24;
  ulonglong in_f22;
  ulonglong in_f23;
  double dVar25;
  ulonglong in_f24;
  double dVar26;
  ulonglong in_f25;
  double dVar27;
  ulonglong in_f26;
  ulonglong in_f27;
  ulonglong in_f28;
  ulonglong in_f29;
  ulonglong in_f30;
  ulonglong in_f31;
  
  uVar10 = ZEXT48(&stack0x00000000);
  lVar1 = uVar10 - 0x170;
  puVar7 = (ulonglong *)lVar1;
  *puVar7 = uVar10;
  puVar7[0x30] = in_LR;
  puVar7[0x23] = in_f21;
  puVar7[0x24] = in_f22;
  puVar7[0x25] = in_f23;
  puVar7[0x26] = in_f24;
  puVar7[0x27] = in_f25;
  puVar7[0x28] = in_f26;
  puVar7[0x29] = in_f27;
  puVar7[0x2a] = in_f28;
  puVar7[0x2b] = in_f29;
  puVar7[0x2c] = in_f30;
  puVar7[0x2d] = in_f31;
  puVar7[0x1f] = unaff_r28;
  pMVar19 = (MobyInstance *)0x0;
  puVar7[0x22] = unaff_r31;
  puVar7[0x1e] = unaff_r27;
  puVar7[0x21] = unaff_r30;
  moby = DAT_00a49344;
  puVar7[0x20] = unaff_r29;
  puVar7[0x1d] = unaff_r26;
  puVar7[0x1c] = unaff_r25;
  dVar27 = 1000000000.0;
  if (moby != (MobyInstance *)0x0) {
    iVar18 = 0;
    do {
      if (moby->drawDistance != 0) {
        piVar12 = (int *)MB_GetPvarsIfMobyHasThem(moby);
        if ((((moby->pClass != (MobyClass *)0x0) && ((short)moby->pClass->mode_bits == 5)) &&
            (piVar12 != (int *)0x0)) && (dVar24 = 0.0, 0 < *piVar12)) {
          fVar2 = param_8[1];
          fVar5 = fVar2 - (moby->pos).y;
          fVar3 = (moby->pos).x;
          fVar4 = *param_8 - fVar3;
          fVar6 = param_8[2] - (moby->pos).z;
          dVar26 = (double)SQRT(fVar6 * fVar6 + fVar4 * fVar4 + fVar5 * fVar5);
          if (dVar26 < param_3) {
            fVar5 = fVar3 - *param_8;
            *(float *)(puVar7 + 0xe) = fVar3;
            fVar3 = (moby->pos).y;
            fVar2 = fVar3 - fVar2;
            *(float *)((int)puVar7 + 0x74) = fVar3;
            fVar3 = (moby->pos).z;
            *(float *)(puVar7 + 0xf) = fVar3;
            *(f32 *)((int)puVar7 + 0x7c) = (moby->pos).w;
            fVar6 = ABS(fVar5);
            *(float *)((int)puVar7 + 0x8c) = fVar5;
            fVar4 = ABS(fVar2);
            *(float *)(puVar7 + 0x12) = fVar2;
            fVar2 = *(float *)(param_9 + 8);
            *(float *)((int)puVar7 + 0x94) = fVar6 - fVar4;
            *(float *)(puVar7 + 0xf) = fVar3 + 0.4;
            dVar25 = 0.7853981852531433;
            uVar16 = (ulonglong)(*(uint *)((int)puVar7 + 0x8c) >> 0x1c) & 8 |
                     (ulonglong)(*(uint *)((int)puVar7 + 0x94) >> 0x1e) & 2 |
                     (ulonglong)(*(uint *)(puVar7 + 0x12) >> 0x1d) & 4;
            fVar3 = *(float *)(&g_atanQuadrantTable + (int)(uVar16 << 2));
            fVar5 = ABS(*(float *)((int)puVar7 + 0x8c));
            if (*(float *)((int)puVar7 + 0x94) - 0.0 < 0.0) {
              fVar5 = fVar4;
            }
            fVar4 = *(float *)(((uint)(uVar16 << 2) | 0x735900) + 4);
            fVar9 = ABS(*(float *)(puVar7 + 0x12));
            if (*(float *)((int)puVar7 + 0x94) - 0.0 < 0.0) {
              fVar9 = fVar6;
            }
            dVar21 = dVar24;
            if (0.0 < fVar5) {
              lVar11 = uVar10 - 0x160;
              lVar14 = uVar10 - 0xb8;
              lVar17 = uVar10 - 0xa8;
              lVar20 = 2;
              fVar5 = (fVar9 - fVar5) / (fVar9 + fVar5);
              fVar6 = fVar5 * fVar5;
              *(float *)((int)puVar7 + 0xc4) = fVar5;
              *(float *)((int)puVar7 + 0xbc) = fVar5;
              *(float *)(puVar7 + 0x18) = fVar5;
              *(float *)(puVar7 + 0x17) = fVar5;
              fVar5 = fVar6 * fVar6;
              *(float *)((int)puVar7 + 0xbc) = *(float *)((int)puVar7 + 0xbc) * fVar6;
              *(float *)(puVar7 + 0x18) = *(float *)(puVar7 + 0x18) * fVar5;
              *(float *)((int)puVar7 + 0xc4) = *(float *)((int)puVar7 + 0xc4) * fVar5 * fVar6;
              do {
                *(float *)((int)lVar11 + 0xb8) = *(float *)((int)lVar11 + 0xa8) * fVar5 * fVar5;
                iVar13 = (int)lVar14;
                lVar11 = lVar11 + 8;
                lVar14 = lVar14 + 8;
                *(float *)((int)lVar17 + 4) = *(float *)(iVar13 + 4) * fVar5 * fVar5;
                lVar17 = lVar17 + 8;
                lVar20 = lVar20 + -1;
              } while (lVar20 != 0);
              lVar20 = 4;
              lVar17 = uVar10 - 0xb8;
              pfVar15 = (float *)&DAT_007358e0;
              lVar11 = lVar1;
              lVar14 = lVar17;
              do {
                fVar5 = *pfVar15;
                fVar6 = pfVar15[1];
                pfVar15 = pfVar15 + 2;
                *(float *)((int)lVar11 + 0xb8) = *(float *)((int)lVar11 + 0xb8) * fVar5;
                lVar11 = lVar11 + 8;
                *(float *)((int)lVar14 + 4) = *(float *)((int)lVar14 + 4) * fVar6;
                lVar14 = lVar14 + 8;
                lVar20 = lVar20 + -1;
              } while (lVar20 != 0);
              lVar14 = 2;
              lVar11 = lVar1;
              do {
                iVar13 = (int)lVar11;
                lVar11 = lVar11 + 0x10;
                iVar8 = (int)lVar17;
                lVar17 = lVar17 + 0x10;
                dVar21 = (double)((float)(dVar21 + (double)*(float *)(iVar13 + 0xb8)) +
                                  *(float *)(iVar8 + 4) + *(float *)(iVar8 + 8) +
                                 *(float *)(iVar8 + 0xc));
                lVar14 = lVar14 + -1;
              } while (lVar14 != 0);
              dVar21 = (double)((float)(dVar21 + 0.7853981852531433) * fVar3 + fVar4);
            }
            dVar21 = (double)FastSubRots(fVar2,(float)dVar21);
            dVar21 = (double)(float)(dVar21 * dVar21);
            fVar2 = param_8[2];
            fVar3 = *(float *)(param_9 + 4);
            if ((dVar21 < (double)(float)(param_1 * param_1)) ||
               ((dVar26 < param_4 && (dVar21 < (double)(float)(param_5 * param_5))))) {
              *(float *)(puVar7 + 0x10) = (float)dVar26;
              dVar22 = ABS((double)(*(float *)(puVar7 + 0xf) - fVar2));
              *(float *)((int)puVar7 + 0x84) = *(float *)(puVar7 + 0xf) - fVar2;
              *(float *)(puVar7 + 0x11) = (float)(ABS(dVar26) - dVar22);
              uVar16 = (ulonglong)(*(uint *)(puVar7 + 0x10) >> 0x1c) & 8 |
                       (ulonglong)(*(uint *)(puVar7 + 0x11) >> 0x1e) & 2 |
                       (ulonglong)(*(uint *)((int)puVar7 + 0x84) >> 0x1d) & 4;
              dVar23 = ABS((double)*(float *)(puVar7 + 0x10));
              if ((double)*(float *)(puVar7 + 0x11) - dVar24 < 0.0) {
                dVar23 = dVar22;
              }
              fVar2 = *(float *)(&g_atanQuadrantTable + (int)(uVar16 << 2));
              dVar22 = ABS((double)*(float *)((int)puVar7 + 0x84));
              if ((double)*(float *)(puVar7 + 0x11) - dVar24 < 0.0) {
                dVar22 = ABS(dVar26);
              }
              fVar5 = *(float *)(((uint)(uVar16 << 2) | 0x735900) + 4);
              if (dVar24 < dVar23) {
                lVar11 = uVar10 - 0x160;
                lVar17 = uVar10 - 200;
                lVar14 = uVar10 - 0xd8;
                lVar20 = 2;
                fVar4 = (float)(dVar22 - dVar23) / (float)(dVar22 + dVar23);
                fVar6 = fVar4 * fVar4;
                *(float *)((int)puVar7 + 0xa4) = fVar4;
                *(float *)((int)puVar7 + 0x9c) = fVar4;
                *(float *)(puVar7 + 0x14) = fVar4;
                *(float *)(puVar7 + 0x13) = fVar4;
                fVar4 = fVar6 * fVar6;
                *(float *)((int)puVar7 + 0x9c) = *(float *)((int)puVar7 + 0x9c) * fVar6;
                *(float *)(puVar7 + 0x14) = *(float *)(puVar7 + 0x14) * fVar4;
                *(float *)((int)puVar7 + 0xa4) = *(float *)((int)puVar7 + 0xa4) * fVar4 * fVar6;
                do {
                  *(float *)((int)lVar11 + 0x98) = *(float *)((int)lVar11 + 0x88) * fVar4 * fVar4;
                  iVar13 = (int)lVar14;
                  lVar14 = lVar14 + 8;
                  lVar11 = lVar11 + 8;
                  *(float *)((int)lVar17 + 4) = *(float *)(iVar13 + 4) * fVar4 * fVar4;
                  lVar17 = lVar17 + 8;
                  lVar20 = lVar20 + -1;
                } while (lVar20 != 0);
                lVar20 = 4;
                lVar17 = uVar10 - 0xd8;
                pfVar15 = (float *)&DAT_007358e0;
                lVar11 = lVar1;
                lVar14 = lVar17;
                do {
                  fVar4 = *pfVar15;
                  fVar6 = pfVar15[1];
                  pfVar15 = pfVar15 + 2;
                  *(float *)((int)lVar11 + 0x98) = *(float *)((int)lVar11 + 0x98) * fVar4;
                  lVar11 = lVar11 + 8;
                  *(float *)((int)lVar14 + 4) = *(float *)((int)lVar14 + 4) * fVar6;
                  lVar14 = lVar14 + 8;
                  lVar20 = lVar20 + -1;
                } while (lVar20 != 0);
                lVar14 = 2;
                lVar11 = lVar1;
                do {
                  iVar13 = (int)lVar11;
                  iVar8 = (int)lVar17;
                  lVar11 = lVar11 + 0x10;
                  lVar17 = lVar17 + 0x10;
                  dVar24 = (double)((float)(dVar24 + (double)*(float *)(iVar13 + 0x98)) +
                                    *(float *)(iVar8 + 4) + *(float *)(iVar8 + 8) +
                                   *(float *)(iVar8 + 0xc));
                  lVar14 = lVar14 + -1;
                } while (lVar14 != 0);
                dVar24 = (double)((float)(dVar24 + dVar25) * fVar2 + fVar5);
              }
              dVar24 = (double)FastSubRots(fVar3,(float)dVar24);
              dVar24 = (double)(float)(dVar24 * dVar24);
              if ((((dVar24 < (double)(float)(param_2 * param_2)) ||
                   ((dVar26 < param_4 && (dVar24 < (double)(float)(param_6 * param_6))))) &&
                  (fVar2 = param_8[1] - *(float *)((int)puVar7 + 0x74),
                  dVar24 = (double)((float)(dVar21 * dVar24) *
                                   SQRT(SQRT((param_8[2] - *(float *)(puVar7 + 0xf)) *
                                             (param_8[2] - *(float *)(puVar7 + 0xf)) +
                                             (*param_8 - *(float *)(puVar7 + 0xe)) *
                                             (*param_8 - *(float *)(puVar7 + 0xe)) + fVar2 * fVar2))
                                   ), dVar24 < dVar27)) &&
                 ((iVar13 = CollLine(param_8,uVar10 - 0x100,0,param_7,0), iVar13 == 0 ||
                  ((((g_CollOutput.pMoby != (MobyInstance *)0x0 && (g_CollOutput.pMoby != g_heroMobyPtr)
                     ) && ((g_CollOutput.pMoby)->pClass != (MobyClass *)0x0)) &&
                   ((short)(g_CollOutput.pMoby)->pClass->mode_bits == 5)))))) {
                dVar27 = dVar24;
                pMVar19 = moby;
              }
            }
          }
        }
      }
      moby = *(MobyInstance **)((int)&DAT_00a49348 + iVar18);
      iVar18 = iVar18 + 4;
    } while (moby != (MobyInstance *)0x0);
  }
  return pMVar19;
}


// 0x02bd110 (0xb24 bytes)
// inlined: FastAtan2 @0x2bd2f0, FastAtan2 @0x2bd584, FastAtan2 @0x2bd730, FastAtan2 @0x2bd8bc, FastAtan2 @0x2bda40
void M1818_002bd110(MobyInstance *param_1,longlong param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  undefined4 uVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  undefined2 uVar13;
  ulonglong *puVar14;
  int iVar15;
  ulonglong uVar16;
  int iVar19;
  MobyInstance *moby;
  int iVar20;
  longlong lVar17;
  longlong lVar18;
  ulonglong uVar21;
  longlong lVar22;
  float *pfVar23;
  ulonglong uVar24;
  longlong lVar25;
  ulonglong unaff_r28;
  ulonglong unaff_r29;
  ulonglong unaff_r30;
  ulonglong unaff_r31;
  ulonglong in_LR;
  longlong lVar26;
  double dVar27;
  double dVar28;
  double dVar29;
  double dVar30;
  double dVar31;
  double dVar32;
  ulonglong in_f21;
  ulonglong in_f22;
  ulonglong in_f23;
  ulonglong in_f24;
  ulonglong in_f25;
  ulonglong in_f26;
  double dVar33;
  ulonglong in_f27;
  ulonglong in_f28;
  double dVar34;
  ulonglong in_f29;
  double dVar35;
  ulonglong in_f30;
  double dVar36;
  ulonglong in_f31;
  double dVar37;
  GPiece<16> auVar38;
  GPiece<16> auVar39;
  GPiece<16> auVar40;
  GPiece<16> auVar41;
  
  uVar16 = ZEXT48(&stack0x00000000);
  lVar18 = uVar16 - 0x1f0;
  puVar14 = (ulonglong *)lVar18;
  *puVar14 = uVar16;
  puVar14[0x40] = in_LR;
  puVar14[0x33] = in_f21;
  puVar14[0x34] = in_f22;
  puVar14[0x35] = in_f23;
  puVar14[0x36] = in_f24;
  puVar14[0x37] = in_f25;
  puVar14[0x38] = in_f26;
  puVar14[0x39] = in_f27;
  puVar14[0x3a] = in_f28;
  puVar14[0x3b] = in_f29;
  puVar14[0x3c] = in_f30;
  puVar14[0x3d] = in_f31;
  puVar14[0x31] = unaff_r30;
  puVar14[0x32] = unaff_r31;
  puVar14[0x30] = unaff_r29;
  puVar14[0x2f] = unaff_r28;
  iVar19 = FastDecTimerS16(param_2 + 0x54);
  if (iVar19 != 0) {
    iVar19 = (int)param_2;
    GetBonePosition(param_1,(*(byte *)(iVar19 + 0x56) & 1) + 1,uVar16 - 0x170);
    *(byte *)(iVar19 + 0x56) = *(byte *)(iVar19 + 0x56) ^ 1;
    moby = (MobyInstance *)
           M1818_002bca98((double)(DAT_007b7e04 * 0.017453292),(double)(DAT_007b7e08 * 0.017453292),
                          (double)DAT_007b7e00,0x4000000000000000,0x400921fb60000000,
                          0x400921fb60000000,param_1,uVar16 - 0x170,&param_1->rotation);
    if (moby == (MobyInstance *)0x0) {
      *(undefined4 *)(iVar19 + 0x60) = 0;
    }
    else {
      *(MobyInstance **)(iVar19 + 0x60) = moby;
      if (g_heroPosition.z + 1.1 < (param_1->pos).z) {
        fVar5 = (moby->pos).x - (param_1->pos).x;
        fVar1 = (moby->pos).y - (param_1->pos).y;
        fVar6 = ABS(fVar5);
        fVar12 = ABS(fVar1);
        *(float *)(puVar14 + 0x18) = fVar5;
        *(float *)((int)puVar14 + 0xc4) = fVar1;
        fVar5 = (param_1->rotation).z;
        *(float *)(puVar14 + 0x19) = fVar6 - fVar12;
        dVar34 = 0.0;
        dVar35 = 0.7853981852531433;
        uVar24 = (ulonglong)(*(uint *)(puVar14 + 0x18) >> 0x1c) & 8 |
                 (ulonglong)(*(uint *)(puVar14 + 0x19) >> 0x1e) & 2 |
                 (ulonglong)(*(uint *)((int)puVar14 + 0xc4) >> 0x1d) & 4;
        fVar1 = ABS(*(float *)(puVar14 + 0x18));
        if (*(float *)(puVar14 + 0x19) - 0.0 < 0.0) {
          fVar1 = fVar12;
        }
        fVar12 = *(float *)(&g_atanQuadrantTable + (int)(uVar24 << 2));
        fVar2 = ABS(*(float *)((int)puVar14 + 0xc4));
        if (*(float *)(puVar14 + 0x19) - 0.0 < 0.0) {
          fVar2 = fVar6;
        }
        fVar6 = *(float *)(((uint)(uVar24 << 2) | 0x735900) + 4);
        dVar27 = dVar34;
        if (0.0 < fVar1) {
          lVar17 = uVar16 - 0x1e0;
          lVar25 = uVar16 - 0x94;
          lVar22 = uVar16 - 0xa4;
          lVar26 = 2;
          fVar1 = (fVar2 - fVar1) / (fVar2 + fVar1);
          fVar2 = fVar1 * fVar1;
          *(float *)(puVar14 + 0x2b) = fVar1;
          *(float *)(puVar14 + 0x2a) = fVar1;
          *(float *)((int)puVar14 + 0x154) = fVar1;
          *(float *)((int)puVar14 + 0x14c) = fVar1;
          fVar1 = fVar2 * fVar2;
          *(float *)(puVar14 + 0x2a) = *(float *)(puVar14 + 0x2a) * fVar2;
          *(float *)((int)puVar14 + 0x154) = *(float *)((int)puVar14 + 0x154) * fVar1;
          *(float *)(puVar14 + 0x2b) = *(float *)(puVar14 + 0x2b) * fVar1 * fVar2;
          do {
            *(float *)((int)lVar17 + 0x14c) = *(float *)((int)lVar17 + 0x13c) * fVar1 * fVar1;
            iVar20 = (int)lVar22;
            lVar22 = lVar22 + 8;
            lVar17 = lVar17 + 8;
            *(float *)((int)lVar25 + 4) = *(float *)(iVar20 + 4) * fVar1 * fVar1;
            lVar25 = lVar25 + 8;
            lVar26 = lVar26 + -1;
          } while (lVar26 != 0);
          lVar26 = 4;
          lVar25 = uVar16 - 0xa4;
          pfVar23 = (float *)&DAT_007358e0;
          lVar17 = lVar18;
          lVar22 = lVar25;
          do {
            fVar1 = *pfVar23;
            fVar2 = pfVar23[1];
            pfVar23 = pfVar23 + 2;
            *(float *)((int)lVar17 + 0x14c) = *(float *)((int)lVar17 + 0x14c) * fVar1;
            lVar17 = lVar17 + 8;
            *(float *)((int)lVar22 + 4) = *(float *)((int)lVar22 + 4) * fVar2;
            lVar22 = lVar22 + 8;
            lVar26 = lVar26 + -1;
          } while (lVar26 != 0);
          lVar22 = 2;
          lVar17 = lVar18;
          do {
            iVar20 = (int)lVar17;
            iVar15 = (int)lVar25;
            lVar17 = lVar17 + 0x10;
            lVar25 = lVar25 + 0x10;
            dVar27 = (double)((float)(dVar27 + (double)*(float *)(iVar20 + 0x14c)) +
                              *(float *)(iVar15 + 4) + *(float *)(iVar15 + 8) +
                             *(float *)(iVar15 + 0xc));
            lVar22 = lVar22 + -1;
          } while (lVar22 != 0);
          dVar27 = (double)((float)(dVar27 + 0.7853981852531433) * fVar12 + fVar6);
        }
        dVar27 = (double)FastSubRots(fVar5,(float)dVar27);
        if ((dVar27 < 0.5235987901687622) && (g_gameMode != GAME_MODE_SCENE)) {
          dVar37 = (double)(moby->pos).x;
          dVar36 = (double)(moby->pos).y;
          dVar27 = (double)(moby->pos).z;
          iVar20 = MB_GetPvarsIfMobyHasThem(moby);
          uVar7 = *(undefined4 *)((int)puVar14 + 0x8c);
          if (iVar20 == 0) {
            dVar33 = (double)DAT_007b7e10;
            dVar28 = dVar27;
          }
          else {
            dVar28 = (double)*(float *)(iVar20 + 0x10);
            dVar33 = dVar27;
          }
          fVar1 = (float)(dVar36 - (double)*(float *)((int)puVar14 + 0x84));
          fVar12 = (float)(dVar37 - (double)*(float *)(puVar14 + 0x10));
          fVar6 = (float)((double)(float)(dVar33 + dVar28) - (double)*(float *)(puVar14 + 0x11));
          dVar30 = (double)SQRT(fVar6 * fVar6 + fVar12 * fVar12 + fVar1 * fVar1);
          fVar5 = (float)((double)DAT_007b7e0c / dVar30);
          dVar27 = dVar34;
          if (dVar34 - dVar30 < 0.0) {
            dVar27 = (double)(fVar1 * fVar5);
          }
          dVar29 = dVar34;
          if (dVar34 - dVar30 < 0.0) {
            dVar29 = (double)(fVar12 * fVar5);
          }
          if (dVar30 - dVar34 < 0.0) {
            dVar27 = (double)(fVar1 * fVar5);
          }
          if (dVar30 - dVar34 < 0.0) {
            dVar29 = (double)(fVar12 * fVar5);
          }
          fVar1 = (float)((double)*(float *)((int)puVar14 + 0x84) + dVar27);
          fVar12 = (float)((double)*(float *)(puVar14 + 0x10) + dVar29);
          dVar27 = dVar34;
          if (dVar34 - dVar30 < 0.0) {
            dVar27 = (double)(fVar6 * fVar5);
          }
          fVar2 = (float)(dVar36 - (double)fVar1);
          fVar3 = (float)(dVar37 - (double)fVar12);
          if (dVar30 - dVar34 < 0.0) {
            dVar27 = (double)(fVar6 * fVar5);
          }
          dVar29 = ABS((double)fVar2);
          dVar30 = ABS((double)fVar3);
          fVar5 = (float)((double)*(float *)(puVar14 + 0x11) + dVar27);
          *(float *)((int)puVar14 + 0xb4) = fVar3;
          *(float *)(puVar14 + 0x17) = fVar2;
          *(float *)(puVar14 + 0x10) = fVar12;
          *(float *)((int)puVar14 + 0x84) = fVar1;
          *(float *)((int)puVar14 + 0xbc) = (float)(dVar30 - dVar29);
          *(float *)(puVar14 + 0x11) = fVar5;
          uVar24 = (ulonglong)(*(uint *)((int)puVar14 + 0xb4) >> 0x1c) & 8 |
                   (ulonglong)(*(uint *)((int)puVar14 + 0xbc) >> 0x1e) & 2 |
                   (ulonglong)(*(uint *)(puVar14 + 0x17) >> 0x1d) & 4;
          dVar27 = ABS((double)*(float *)((int)puVar14 + 0xb4));
          if ((double)*(float *)((int)puVar14 + 0xbc) - dVar34 < 0.0) {
            dVar27 = dVar29;
          }
          fVar6 = *(float *)(&g_atanQuadrantTable + (int)(uVar24 << 2));
          dVar32 = ABS((double)*(float *)(puVar14 + 0x17));
          if ((double)*(float *)((int)puVar14 + 0xbc) - dVar34 < 0.0) {
            dVar32 = dVar30;
          }
          fVar8 = *(float *)(((uint)(uVar24 << 2) | 0x735900) + 4);
          dVar31 = dVar34;
          if (dVar34 < dVar27) {
            lVar17 = uVar16 - 0x1e0;
            lVar22 = uVar16 - 0xc4;
            lVar25 = uVar16 - 0xb4;
            lVar26 = 2;
            fVar4 = (float)(dVar32 - dVar27) / (float)(dVar32 + dVar27);
            fVar9 = fVar4 * fVar4;
            *(float *)(puVar14 + 0x27) = fVar4;
            *(float *)(puVar14 + 0x26) = fVar4;
            *(float *)((int)puVar14 + 0x134) = fVar4;
            *(float *)((int)puVar14 + 300) = fVar4;
            fVar4 = fVar9 * fVar9;
            *(float *)(puVar14 + 0x26) = *(float *)(puVar14 + 0x26) * fVar9;
            *(float *)((int)puVar14 + 0x134) = *(float *)((int)puVar14 + 0x134) * fVar4;
            *(float *)(puVar14 + 0x27) = *(float *)(puVar14 + 0x27) * fVar4 * fVar9;
            do {
              *(float *)((int)lVar17 + 300) = *(float *)((int)lVar17 + 0x11c) * fVar4 * fVar4;
              iVar20 = (int)lVar22;
              lVar17 = lVar17 + 8;
              lVar22 = lVar22 + 8;
              *(float *)((int)lVar25 + 4) = *(float *)(iVar20 + 4) * fVar4 * fVar4;
              lVar25 = lVar25 + 8;
              lVar26 = lVar26 + -1;
            } while (lVar26 != 0);
            lVar26 = 4;
            lVar25 = uVar16 - 0xc4;
            pfVar23 = (float *)&DAT_007358e0;
            lVar17 = lVar18;
            lVar22 = lVar25;
            do {
              fVar4 = *pfVar23;
              fVar9 = pfVar23[1];
              pfVar23 = pfVar23 + 2;
              *(float *)((int)lVar17 + 300) = *(float *)((int)lVar17 + 300) * fVar4;
              lVar17 = lVar17 + 8;
              *(float *)((int)lVar22 + 4) = *(float *)((int)lVar22 + 4) * fVar9;
              lVar22 = lVar22 + 8;
              lVar26 = lVar26 + -1;
            } while (lVar26 != 0);
            lVar22 = 2;
            lVar17 = lVar18;
            dVar27 = dVar34;
            do {
              iVar20 = (int)lVar17;
              lVar17 = lVar17 + 0x10;
              iVar15 = (int)lVar25;
              lVar25 = lVar25 + 0x10;
              dVar27 = (double)((float)(dVar27 + (double)*(float *)(iVar20 + 300)) +
                                *(float *)(iVar15 + 4) + *(float *)(iVar15 + 8) +
                               *(float *)(iVar15 + 0xc));
              lVar22 = lVar22 + -1;
            } while (lVar22 != 0);
            dVar31 = (double)((float)(dVar27 + dVar35) * fVar6 + fVar8);
          }
          fVar6 = (float)((double)fVar1 - dVar36);
          fVar8 = (float)((double)fVar12 - dVar37);
          fVar4 = (float)((double)(float)(dVar33 + dVar28) - (double)fVar5);
          *(float *)((int)puVar14 + 0xac) = fVar4;
          dVar37 = ABS((double)fVar4);
          fVar6 = SQRT(fVar8 * fVar8 + fVar6 * fVar6);
          dVar36 = ABS((double)fVar6);
          *(float *)(puVar14 + 0x15) = fVar6;
          *(float *)(puVar14 + 0x16) = (float)(dVar36 - dVar37);
          uVar24 = (ulonglong)(*(uint *)(puVar14 + 0x15) >> 0x1c) & 8 |
                   (ulonglong)(*(uint *)(puVar14 + 0x16) >> 0x1e) & 2 |
                   (ulonglong)(*(uint *)((int)puVar14 + 0xac) >> 0x1d) & 4;
          dVar27 = ABS((double)*(float *)(puVar14 + 0x15));
          if ((double)*(float *)(puVar14 + 0x16) - dVar34 < 0.0) {
            dVar27 = dVar37;
          }
          fVar8 = *(float *)(&g_atanQuadrantTable + (int)(uVar24 << 2));
          dVar28 = ABS((double)*(float *)((int)puVar14 + 0xac));
          if ((double)*(float *)(puVar14 + 0x16) - dVar34 < 0.0) {
            dVar28 = dVar36;
          }
          fVar9 = *(float *)(((uint)(uVar24 << 2) | 0x735900) + 4);
          dVar33 = dVar34;
          if (dVar34 < dVar27) {
            lVar17 = uVar16 - 0x1e0;
            lVar25 = uVar16 - 0xd4;
            lVar22 = uVar16 - 0xe4;
            lVar26 = 2;
            fVar10 = (float)(dVar28 - dVar27) / (float)(dVar28 + dVar27);
            fVar11 = fVar10 * fVar10;
            *(float *)(puVar14 + 0x23) = fVar10;
            *(float *)(puVar14 + 0x22) = fVar10;
            *(float *)((int)puVar14 + 0x114) = fVar10;
            *(float *)((int)puVar14 + 0x10c) = fVar10;
            fVar10 = fVar11 * fVar11;
            *(float *)(puVar14 + 0x22) = *(float *)(puVar14 + 0x22) * fVar11;
            *(float *)((int)puVar14 + 0x114) = *(float *)((int)puVar14 + 0x114) * fVar10;
            *(float *)(puVar14 + 0x23) = *(float *)(puVar14 + 0x23) * fVar10 * fVar11;
            do {
              *(float *)((int)lVar17 + 0x10c) = *(float *)((int)lVar17 + 0xfc) * fVar10 * fVar10;
              iVar20 = (int)lVar22;
              lVar22 = lVar22 + 8;
              lVar17 = lVar17 + 8;
              *(float *)((int)lVar25 + 4) = *(float *)(iVar20 + 4) * fVar10 * fVar10;
              lVar25 = lVar25 + 8;
              lVar26 = lVar26 + -1;
            } while (lVar26 != 0);
            lVar26 = 4;
            lVar25 = uVar16 - 0xe4;
            pfVar23 = (float *)&DAT_007358e0;
            lVar17 = lVar18;
            lVar22 = lVar25;
            do {
              fVar10 = *pfVar23;
              fVar11 = pfVar23[1];
              pfVar23 = pfVar23 + 2;
              *(float *)((int)lVar17 + 0x10c) = *(float *)((int)lVar17 + 0x10c) * fVar10;
              lVar17 = lVar17 + 8;
              *(float *)((int)lVar22 + 4) = *(float *)((int)lVar22 + 4) * fVar11;
              lVar22 = lVar22 + 8;
              lVar26 = lVar26 + -1;
            } while (lVar26 != 0);
            lVar22 = 2;
            lVar17 = lVar18;
            dVar27 = dVar34;
            do {
              iVar20 = (int)lVar17;
              iVar15 = (int)lVar25;
              lVar17 = lVar17 + 0x10;
              lVar25 = lVar25 + 0x10;
              dVar27 = (double)((float)(dVar27 + (double)*(float *)(iVar20 + 0x10c)) +
                                *(float *)(iVar15 + 4) + *(float *)(iVar15 + 8) +
                               *(float *)(iVar15 + 0xc));
              lVar22 = lVar22 + -1;
            } while (lVar22 != 0);
            dVar33 = (double)((float)(dVar27 + dVar35) * fVar8 + fVar9);
          }
          *(float *)((int)puVar14 + 0x9c) = fVar3;
          *(float *)((int)puVar14 + 0xa4) = (float)(dVar30 - dVar29);
          *(float *)(puVar14 + 0x14) = fVar2;
          uVar24 = (ulonglong)(*(uint *)((int)puVar14 + 0x9c) >> 0x1c) & 8 |
                   (ulonglong)(*(uint *)((int)puVar14 + 0xa4) >> 0x1e) & 2 |
                   (ulonglong)(*(uint *)(puVar14 + 0x14) >> 0x1d) & 4;
          dVar27 = ABS((double)*(float *)((int)puVar14 + 0x9c));
          if ((double)*(float *)((int)puVar14 + 0xa4) - dVar34 < 0.0) {
            dVar27 = dVar29;
          }
          fVar3 = *(float *)(&g_atanQuadrantTable + (int)(uVar24 << 2));
          fVar2 = *(float *)(((uint)(uVar24 << 2) | 0x735900) + 4);
          dVar28 = ABS((double)*(float *)(puVar14 + 0x14));
          if ((double)*(float *)((int)puVar14 + 0xa4) - dVar34 < 0.0) {
            dVar28 = dVar30;
          }
          dVar30 = dVar34;
          if (dVar34 < dVar27) {
            lVar17 = uVar16 - 0x1e0;
            lVar22 = uVar16 - 0x104;
            lVar25 = uVar16 - 0xf4;
            lVar26 = 2;
            fVar8 = (float)(dVar28 - dVar27) / (float)(dVar28 + dVar27);
            fVar9 = fVar8 * fVar8;
            *(float *)(puVar14 + 0x1f) = fVar8;
            *(float *)(puVar14 + 0x1e) = fVar8;
            *(float *)((int)puVar14 + 0xf4) = fVar8;
            *(float *)((int)puVar14 + 0xec) = fVar8;
            fVar8 = fVar9 * fVar9;
            *(float *)(puVar14 + 0x1e) = *(float *)(puVar14 + 0x1e) * fVar9;
            *(float *)((int)puVar14 + 0xf4) = *(float *)((int)puVar14 + 0xf4) * fVar8;
            *(float *)(puVar14 + 0x1f) = *(float *)(puVar14 + 0x1f) * fVar8 * fVar9;
            do {
              *(float *)((int)lVar17 + 0xec) = *(float *)((int)lVar17 + 0xdc) * fVar8 * fVar8;
              iVar20 = (int)lVar22;
              lVar17 = lVar17 + 8;
              lVar22 = lVar22 + 8;
              *(float *)((int)lVar25 + 4) = *(float *)(iVar20 + 4) * fVar8 * fVar8;
              lVar25 = lVar25 + 8;
              lVar26 = lVar26 + -1;
            } while (lVar26 != 0);
            lVar26 = 4;
            lVar25 = uVar16 - 0x104;
            pfVar23 = (float *)&DAT_007358e0;
            lVar17 = lVar18;
            lVar22 = lVar25;
            do {
              fVar8 = *pfVar23;
              fVar9 = pfVar23[1];
              pfVar23 = pfVar23 + 2;
              *(float *)((int)lVar17 + 0xec) = *(float *)((int)lVar17 + 0xec) * fVar8;
              lVar17 = lVar17 + 8;
              *(float *)((int)lVar22 + 4) = *(float *)((int)lVar22 + 4) * fVar9;
              lVar22 = lVar22 + 8;
              lVar26 = lVar26 + -1;
            } while (lVar26 != 0);
            lVar22 = 2;
            lVar17 = lVar18;
            dVar27 = dVar34;
            do {
              iVar20 = (int)lVar17;
              lVar17 = lVar17 + 0x10;
              iVar15 = (int)lVar25;
              lVar25 = lVar25 + 0x10;
              dVar27 = (double)((float)(dVar27 + (double)*(float *)(iVar20 + 0xec)) +
                                *(float *)(iVar15 + 4) + *(float *)(iVar15 + 8) +
                               *(float *)(iVar15 + 0xc));
              lVar22 = lVar22 + -1;
            } while (lVar22 != 0);
            dVar30 = (double)((float)(dVar27 + dVar35) * fVar3 + fVar2);
          }
          *(float *)((int)puVar14 + 0x94) = fVar4;
          *(float *)(puVar14 + 0x12) = fVar6;
          *(float *)(puVar14 + 0x13) = (float)(dVar36 - dVar37);
          uVar24 = (ulonglong)(*(uint *)(puVar14 + 0x12) >> 0x1c) & 8 |
                   (ulonglong)(*(uint *)(puVar14 + 0x13) >> 0x1e) & 2 |
                   (ulonglong)(*(uint *)((int)puVar14 + 0x94) >> 0x1d) & 4;
          uVar21 = uVar24 << 2 | 0x735900;
          dVar27 = ABS((double)*(float *)((int)puVar14 + 0x94));
          if ((double)*(float *)(puVar14 + 0x13) - dVar34 < 0.0) {
            dVar27 = dVar36;
          }
          fVar6 = *(float *)(&g_atanQuadrantTable + (int)(uVar24 << 2));
          dVar36 = ABS((double)*(float *)(puVar14 + 0x12));
          if ((double)*(float *)(puVar14 + 0x13) - dVar34 < 0.0) {
            dVar36 = dVar37;
          }
          fVar2 = *(float *)((int)uVar21 + 4);
          if (dVar34 < dVar36) {
            lVar17 = uVar16 - 0x1e0;
            lVar25 = uVar16 - 0x114;
            lVar22 = uVar16 - 0x124;
            lVar26 = 2;
            fVar3 = (float)(dVar27 - dVar36) / (float)(dVar27 + dVar36);
            fVar8 = fVar3 * fVar3;
            *(float *)(puVar14 + 0x1b) = fVar3;
            *(float *)(puVar14 + 0x1a) = fVar3;
            *(float *)((int)puVar14 + 0xd4) = fVar3;
            *(float *)((int)puVar14 + 0xcc) = fVar3;
            fVar3 = fVar8 * fVar8;
            *(float *)(puVar14 + 0x1a) = *(float *)(puVar14 + 0x1a) * fVar8;
            *(float *)((int)puVar14 + 0xd4) = *(float *)((int)puVar14 + 0xd4) * fVar3;
            *(float *)(puVar14 + 0x1b) = *(float *)(puVar14 + 0x1b) * fVar3 * fVar8;
            do {
              *(float *)((int)lVar17 + 0xcc) = *(float *)((int)lVar17 + 0xbc) * fVar3 * fVar3;
              iVar20 = (int)lVar22;
              lVar22 = lVar22 + 8;
              lVar17 = lVar17 + 8;
              *(float *)((int)lVar25 + 4) = *(float *)(iVar20 + 4) * fVar3 * fVar3;
              lVar25 = lVar25 + 8;
              lVar26 = lVar26 + -1;
            } while (lVar26 != 0);
            lVar26 = 4;
            lVar25 = uVar16 - 0x124;
            uVar21 = ZEXT48(&DAT_007358e0);
            lVar17 = lVar18;
            lVar22 = lVar25;
            do {
              pfVar23 = (float *)uVar21;
              fVar3 = pfVar23[1];
              uVar21 = uVar21 + 8;
              *(float *)((int)lVar17 + 0xcc) = *(float *)((int)lVar17 + 0xcc) * *pfVar23;
              lVar17 = lVar17 + 8;
              *(float *)((int)lVar22 + 4) = *(float *)((int)lVar22 + 4) * fVar3;
              lVar22 = lVar22 + 8;
              lVar26 = lVar26 + -1;
            } while (lVar26 != 0);
            lVar17 = 2;
            do {
              iVar20 = (int)lVar18;
              iVar15 = (int)lVar25;
              lVar18 = lVar18 + 0x10;
              lVar25 = lVar25 + 0x10;
              dVar34 = (double)((float)(dVar34 + (double)*(float *)(iVar20 + 0xcc)) +
                                *(float *)(iVar15 + 4) + *(float *)(iVar15 + 8) +
                               *(float *)(iVar15 + 0xc));
              lVar17 = lVar17 + -1;
            } while (lVar17 != 0);
            dVar34 = (double)((float)(dVar34 + dVar35) * fVar6 + fVar2);
          }
          *(float *)(puVar14 + 8) = fVar12;
          *(float *)(puVar14 + 9) = fVar5;
          *(float *)((int)puVar14 + 0x44) = fVar1;
          *(undefined4 *)((int)puVar14 + 0x4c) = uVar7;
          M1633_002a5158(dVar31,-dVar33,dVar30,-dVar34,param_1,uVar21,puVar14[8],puVar14[9]);
          PlayMobySound(0,0,param_1);
          auVar39 = ZEXT416(0xffffffff);
          auVar39 = auVar39 | auVar39 << 0x20 | auVar39 << 0x40 | auVar39 << 0x60;
          auVar40 = vectorShiftLeftIntegerWord(auVar39,auVar39);
          auVar39 = loadVectorLeftIndexed(0x7dfc,0x7b0000);
          auVar38 = vectorConvertFromSignedFixedPointWord(auVar39,0);
          auVar39 = loadVectorLeftIndexed(0x1c,0x2bd0ec);
          auVar39 = auVar39 >> 0x60 & (GPiece<16>)0xffffffff;
          auVar41 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
          auVar39 = vectorAddFloatingPoint
                              (auVar38,auVar39 | auVar39 << 0x20 | auVar39 << 0x40 | auVar39 << 0x60
                              );
          auVar39 = vectorMultiplyAddFloatingPoint(auVar41,auVar39,auVar40);
          auVar39 = vectorConvertToSignedFixedPointWordSaturate(auVar39,0);
          auVar39 = vectorSplatHalfWord(auVar39,1);
          uVar13 = storeVectorElementHalfWordIndexed(auVar39,0x54,param_2);
          *(undefined2 *)(iVar19 + 0x54) = uVar13;
          *(int *)(iVar19 + 0x5c) = *(int *)(iVar19 + 0x5c) + 1;
        }
      }
    }
  }
  return;
}


// 0x02bdc98 (0xc54 bytes)
// inlined: FastAtan2 @0x2bde04, FastAtan2 @0x2be01c, FastAtan2 @0x2be21c, FastAtan2 @0x2be63c
void M1818_002bdc98(int param_1,float *param_2)

{
  char cVar1;
  char cVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  short sVar8;
  ulonglong *puVar9;
  int iVar10;
  float fVar11;
  ulonglong uVar12;
  longlong lVar13;
  longlong lVar14;
  int iVar15;
  longlong lVar16;
  float *pfVar17;
  ulonglong uVar18;
  longlong lVar19;
  ulonglong unaff_r29;
  ulonglong unaff_r30;
  ulonglong unaff_r31;
  ulonglong in_LR;
  longlong lVar20;
  double dVar21;
  double dVar22;
  double dVar23;
  ulonglong in_f27;
  double dVar24;
  ulonglong in_f28;
  double dVar25;
  ulonglong in_f29;
  double dVar26;
  ulonglong in_f30;
  double dVar27;
  ulonglong in_f31;
  double dVar28;
  float fVar29;
  
  uVar12 = ZEXT48(&stack0x00000000);
  lVar14 = uVar12 - 0x170;
  puVar9 = (ulonglong *)lVar14;
  *puVar9 = uVar12;
  puVar9[0x30] = in_LR;
  puVar9[0x29] = in_f27;
  puVar9[0x2a] = in_f28;
  puVar9[0x2b] = in_f29;
  puVar9[0x2c] = in_f30;
  puVar9[0x2d] = in_f31;
  fVar29 = *param_2;
  puVar9[0x27] = unaff_r30;
  fVar3 = *(float *)(param_1 + 0x10);
  puVar9[0x28] = unaff_r31;
  fVar4 = *(float *)(param_1 + 0x14);
  fVar29 = fVar29 - fVar3;
  dVar26 = (double)fVar29;
  cVar1 = *(char *)(param_1 + 0x20);
  cVar2 = *(char *)(param_1 + 0xbc);
  fVar7 = param_2[1] - fVar4;
  dVar25 = (double)fVar7;
  dVar28 = (double)(param_2[2] - *(float *)(param_1 + 0x18));
  puVar9[0x26] = unaff_r29;
  fVar5 = g_heroPosition.x;
  fVar6 = g_heroPosition.y;
  if (cVar1 == '\x06') {
    fVar5 = param_2[0xc];
    fVar6 = param_2[0xd];
  }
  dVar27 = 0.7853981852531433;
  dVar24 = (double)SQRT((fVar3 - fVar5) * (fVar3 - fVar5) + (fVar4 - fVar6) * (fVar4 - fVar6));
  if (cVar2 == '\0') {
    *(float *)((int)puVar9 + 0x94) = fVar29;
    *(float *)(puVar9 + 0x13) = fVar7;
    *(float *)((int)puVar9 + 0x9c) = (float)(ABS(dVar26) - ABS(dVar25));
    dVar27 = 0.0;
    uVar18 = (ulonglong)(*(uint *)((int)puVar9 + 0x94) >> 0x1c) & 8 |
             (ulonglong)(*(uint *)((int)puVar9 + 0x9c) >> 0x1e) & 2 |
             (ulonglong)(*(uint *)(puVar9 + 0x13) >> 0x1d) & 4;
    dVar28 = ABS((double)*(float *)((int)puVar9 + 0x94));
    if (*(float *)((int)puVar9 + 0x9c) - 0.0 < 0.0) {
      dVar28 = ABS(dVar25);
    }
    fVar3 = *(float *)(&g_atanQuadrantTable + (int)(uVar18 << 2));
    fVar29 = *(float *)(((uint)(uVar18 << 2) | 0x735900) + 4);
    dVar25 = ABS((double)*(float *)(puVar9 + 0x13));
    if (*(float *)((int)puVar9 + 0x9c) - 0.0 < 0.0) {
      dVar25 = ABS(dVar26);
    }
    if (0.0 < dVar28) {
      lVar13 = uVar12 - 0x160;
      lVar16 = uVar12 - 0x70;
      lVar19 = uVar12 - 0x60;
      lVar20 = 2;
      fVar4 = (float)(dVar25 - dVar28) / (float)(dVar25 + dVar28);
      fVar5 = fVar4 * fVar4;
      *(float *)((int)puVar9 + 0x10c) = fVar4;
      *(float *)((int)puVar9 + 0x104) = fVar4;
      *(float *)(puVar9 + 0x21) = fVar4;
      *(float *)(puVar9 + 0x20) = fVar4;
      fVar4 = fVar5 * fVar5;
      *(float *)((int)puVar9 + 0x104) = *(float *)((int)puVar9 + 0x104) * fVar5;
      *(float *)(puVar9 + 0x21) = *(float *)(puVar9 + 0x21) * fVar4;
      *(float *)((int)puVar9 + 0x10c) = *(float *)((int)puVar9 + 0x10c) * fVar4 * fVar5;
      do {
        *(float *)((int)lVar13 + 0x100) = *(float *)((int)lVar13 + 0xf0) * fVar4 * fVar4;
        iVar15 = (int)lVar16;
        lVar13 = lVar13 + 8;
        lVar16 = lVar16 + 8;
        *(float *)((int)lVar19 + 4) = *(float *)(iVar15 + 4) * fVar4 * fVar4;
        lVar19 = lVar19 + 8;
        lVar20 = lVar20 + -1;
      } while (lVar20 != 0);
      lVar20 = 4;
      lVar19 = uVar12 - 0x70;
      pfVar17 = (float *)&DAT_007358e0;
      lVar13 = lVar14;
      lVar16 = lVar19;
      do {
        fVar4 = *pfVar17;
        fVar5 = pfVar17[1];
        pfVar17 = pfVar17 + 2;
        *(float *)((int)lVar13 + 0x100) = *(float *)((int)lVar13 + 0x100) * fVar4;
        lVar13 = lVar13 + 8;
        *(float *)((int)lVar16 + 4) = *(float *)((int)lVar16 + 4) * fVar5;
        lVar16 = lVar16 + 8;
        lVar20 = lVar20 + -1;
      } while (lVar20 != 0);
      lVar13 = 2;
      do {
        iVar15 = (int)lVar14;
        iVar10 = (int)lVar19;
        lVar14 = lVar14 + 0x10;
        lVar19 = lVar19 + 0x10;
        dVar27 = (double)((float)(dVar27 + (double)*(float *)(iVar15 + 0x100)) +
                          *(float *)(iVar10 + 4) + *(float *)(iVar10 + 8) + *(float *)(iVar10 + 0xc)
                         );
        lVar13 = lVar13 + -1;
      } while (lVar13 != 0);
      dVar27 = (double)((float)(dVar27 + 0.7853981852531433) * fVar3 + fVar29);
    }
    OrganicDeltAngSpeed
              (dVar27,(double)(g_FrameTimeSq * 6.2831855),(double)(g_FrameTimeSq * 3.1415927),
               (double)(g_FrameTime * 11.519173),param_1,&DAT_00720000,&DAT_010c5168);
    if (1.2999999523162842 < dVar24) {
      *(undefined1 *)(param_1 + 0xbc) = 2;
    }
  }
  else if (cVar2 == '\x02') {
    fVar5 = param_2[0x18];
    if (fVar5 == 0.0) {
      *(float *)(puVar9 + 0x11) = fVar29;
      *(float *)((int)puVar9 + 0x8c) = fVar7;
      *(float *)(puVar9 + 0x12) = (float)(ABS(dVar26) - ABS(dVar25));
      dVar22 = 0.0;
      uVar18 = (ulonglong)(*(uint *)(puVar9 + 0x11) >> 0x1c) & 8 |
               (ulonglong)(*(uint *)(puVar9 + 0x12) >> 0x1e) & 2 |
               (ulonglong)(*(uint *)((int)puVar9 + 0x8c) >> 0x1d) & 4;
      dVar23 = ABS((double)*(float *)(puVar9 + 0x11));
      if (*(float *)(puVar9 + 0x12) - 0.0 < 0.0) {
        dVar23 = ABS(dVar25);
      }
      fVar3 = *(float *)(&g_atanQuadrantTable + (int)(uVar18 << 2));
      fVar29 = *(float *)(((uint)(uVar18 << 2) | 0x735900) + 4);
      dVar21 = ABS((double)*(float *)((int)puVar9 + 0x8c));
      if (*(float *)(puVar9 + 0x12) - 0.0 < 0.0) {
        dVar21 = ABS(dVar26);
      }
      if (0.0 < dVar23) {
        lVar13 = uVar12 - 0x160;
        lVar16 = uVar12 - 0x90;
        lVar19 = uVar12 - 0x80;
        lVar20 = 2;
        fVar4 = (float)(dVar21 - dVar23) / (float)(dVar21 + dVar23);
        fVar5 = fVar4 * fVar4;
        *(float *)((int)puVar9 + 0xec) = fVar4;
        *(float *)((int)puVar9 + 0xe4) = fVar4;
        *(float *)(puVar9 + 0x1d) = fVar4;
        *(float *)(puVar9 + 0x1c) = fVar4;
        fVar4 = fVar5 * fVar5;
        *(float *)((int)puVar9 + 0xe4) = *(float *)((int)puVar9 + 0xe4) * fVar5;
        *(float *)(puVar9 + 0x1d) = *(float *)(puVar9 + 0x1d) * fVar4;
        *(float *)((int)puVar9 + 0xec) = *(float *)((int)puVar9 + 0xec) * fVar4 * fVar5;
        do {
          *(float *)((int)lVar13 + 0xe0) = *(float *)((int)lVar13 + 0xd0) * fVar4 * fVar4;
          iVar15 = (int)lVar16;
          lVar13 = lVar13 + 8;
          lVar16 = lVar16 + 8;
          *(float *)((int)lVar19 + 4) = *(float *)(iVar15 + 4) * fVar4 * fVar4;
          lVar19 = lVar19 + 8;
          lVar20 = lVar20 + -1;
        } while (lVar20 != 0);
        lVar20 = 4;
        lVar19 = uVar12 - 0x90;
        pfVar17 = (float *)&DAT_007358e0;
        lVar13 = lVar14;
        lVar16 = lVar19;
        do {
          fVar4 = *pfVar17;
          fVar5 = pfVar17[1];
          pfVar17 = pfVar17 + 2;
          *(float *)((int)lVar13 + 0xe0) = *(float *)((int)lVar13 + 0xe0) * fVar4;
          lVar13 = lVar13 + 8;
          *(float *)((int)lVar16 + 4) = *(float *)((int)lVar16 + 4) * fVar5;
          lVar16 = lVar16 + 8;
          lVar20 = lVar20 + -1;
        } while (lVar20 != 0);
        lVar16 = 2;
        lVar13 = lVar14;
        do {
          iVar15 = (int)lVar13;
          iVar10 = (int)lVar19;
          lVar13 = lVar13 + 0x10;
          lVar19 = lVar19 + 0x10;
          dVar22 = (double)((float)(dVar22 + (double)*(float *)(iVar15 + 0xe0)) +
                            *(float *)(iVar10 + 4) + *(float *)(iVar10 + 8) +
                           *(float *)(iVar10 + 0xc));
          lVar16 = lVar16 + -1;
        } while (lVar16 != 0);
        dVar22 = (double)((float)(dVar22 + 0.7853981852531433) * fVar3 + fVar29);
      }
      OrganicDeltAngSpeed
                (dVar22,(double)(g_FrameTimeSq * 6.2831855),(double)(g_FrameTimeSq * 3.1415927),
                 (double)(g_FrameTime * 11.519173),param_1,&DAT_00720000,&DAT_010c5168);
    }
    else {
      fVar3 = *(float *)((int)fVar5 + 0x10) - fVar3;
      fVar4 = *(float *)((int)fVar5 + 0x14) - fVar4;
      fVar7 = ABS(fVar3);
      fVar5 = ABS(fVar4);
      *(float *)((int)puVar9 + 0x7c) = fVar3;
      *(float *)(puVar9 + 0x10) = fVar4;
      *(float *)((int)puVar9 + 0x84) = fVar7 - fVar5;
      dVar23 = 0.0;
      uVar18 = (ulonglong)(*(uint *)((int)puVar9 + 0x7c) >> 0x1c) & 8 |
               (ulonglong)(*(uint *)((int)puVar9 + 0x84) >> 0x1e) & 2 |
               (ulonglong)(*(uint *)(puVar9 + 0x10) >> 0x1d) & 4;
      fVar29 = ABS(*(float *)((int)puVar9 + 0x7c));
      if (*(float *)((int)puVar9 + 0x84) - 0.0 < 0.0) {
        fVar29 = fVar5;
      }
      fVar4 = *(float *)(&g_atanQuadrantTable + (int)(uVar18 << 2));
      fVar3 = *(float *)(((uint)(uVar18 << 2) | 0x735900) + 4);
      fVar5 = ABS(*(float *)(puVar9 + 0x10));
      if (*(float *)((int)puVar9 + 0x84) - 0.0 < 0.0) {
        fVar5 = fVar7;
      }
      if (0.0 < fVar29) {
        lVar13 = uVar12 - 0x160;
        lVar16 = uVar12 - 0xb0;
        lVar19 = uVar12 - 0xa0;
        lVar20 = 2;
        fVar29 = (fVar5 - fVar29) / (fVar5 + fVar29);
        fVar5 = fVar29 * fVar29;
        *(float *)((int)puVar9 + 0xcc) = fVar29;
        *(float *)((int)puVar9 + 0xc4) = fVar29;
        *(float *)(puVar9 + 0x19) = fVar29;
        *(float *)(puVar9 + 0x18) = fVar29;
        fVar29 = fVar5 * fVar5;
        *(float *)((int)puVar9 + 0xc4) = *(float *)((int)puVar9 + 0xc4) * fVar5;
        *(float *)(puVar9 + 0x19) = *(float *)(puVar9 + 0x19) * fVar29;
        *(float *)((int)puVar9 + 0xcc) = *(float *)((int)puVar9 + 0xcc) * fVar29 * fVar5;
        do {
          *(float *)((int)lVar13 + 0xc0) = *(float *)((int)lVar13 + 0xb0) * fVar29 * fVar29;
          iVar15 = (int)lVar16;
          lVar13 = lVar13 + 8;
          lVar16 = lVar16 + 8;
          *(float *)((int)lVar19 + 4) = *(float *)(iVar15 + 4) * fVar29 * fVar29;
          lVar19 = lVar19 + 8;
          lVar20 = lVar20 + -1;
        } while (lVar20 != 0);
        lVar20 = 4;
        lVar19 = uVar12 - 0xb0;
        pfVar17 = (float *)&DAT_007358e0;
        lVar13 = lVar14;
        lVar16 = lVar19;
        do {
          fVar29 = *pfVar17;
          fVar5 = pfVar17[1];
          pfVar17 = pfVar17 + 2;
          *(float *)((int)lVar13 + 0xc0) = *(float *)((int)lVar13 + 0xc0) * fVar29;
          lVar13 = lVar13 + 8;
          *(float *)((int)lVar16 + 4) = *(float *)((int)lVar16 + 4) * fVar5;
          lVar16 = lVar16 + 8;
          lVar20 = lVar20 + -1;
        } while (lVar20 != 0);
        lVar16 = 2;
        lVar13 = lVar14;
        do {
          iVar15 = (int)lVar13;
          iVar10 = (int)lVar19;
          lVar13 = lVar13 + 0x10;
          lVar19 = lVar19 + 0x10;
          dVar23 = (double)((float)(dVar23 + (double)*(float *)(iVar15 + 0xc0)) +
                            *(float *)(iVar10 + 4) + *(float *)(iVar10 + 8) +
                           *(float *)(iVar10 + 0xc));
          lVar16 = lVar16 + -1;
        } while (lVar16 != 0);
        dVar23 = (double)((float)(dVar23 + 0.7853981852531433) * fVar4 + fVar3);
      }
      OrganicDeltAngSpeed
                (dVar23,(double)(DAT_007b7e40 * 0.017453292 * g_FrameTimeSq),
                 (double)(DAT_007b7e44 * 0.017453292 * g_FrameTimeSq),
                 (double)(DAT_007b7e48 * 0.017453292 * g_FrameTime),param_1,0x10c0000,
                 &DAT_010c5168);
    }
    dVar23 = (double)(DAT_0071f408 * 0.04);
    if (dVar24 <= 1.2999999523162842) {
      fVar29 = 0.25;
    }
    else {
      fVar29 = 0.13;
    }
    dVar22 = (double)(DAT_0071f40c * fVar29);
    fVar29 = (float)((double)(float)(dVar26 * dVar23 - (double)param_2[4]) * dVar22 +
                    (double)param_2[4]);
    fVar3 = (float)((double)(float)(dVar25 * dVar23 - (double)param_2[5]) * dVar22 +
                   (double)param_2[5]);
    fVar4 = (float)((double)(float)((double)(float)(dVar28 * dVar23 - (double)param_2[6]) * dVar22)
                    * (double)(DAT_0071f408 * -0.100000024 + 1.0) + (double)param_2[6]);
    param_2[4] = fVar29;
    param_2[5] = fVar3;
    param_2[6] = fVar4;
    if (*(char *)(param_1 + 0x20) == '\x06') {
      fVar5 = SQRT(fVar4 * fVar4 + fVar29 * fVar29 + fVar3 * fVar3);
      if (g_FrameTime * 2.7 < fVar5) {
        fVar5 = (g_FrameTime * 2.7) / fVar5;
        param_2[4] = fVar29 * fVar5;
        param_2[5] = fVar3 * fVar5;
        param_2[6] = fVar4 * fVar5;
      }
    }
    iVar15 = MB_MoveAndCollide2
                       (0x3ff0000000000000,(double)DAT_010c5184,param_1,param_2 + 4,0x10c0000,
                        DAT_010c5154,&DAT_010c5154,0);
    fVar4 = animationSpeed;
    fVar29 = param_2[5];
    fVar3 = param_2[4];
    if (iVar15 == 0) {
      *(undefined2 *)(param_2 + 0x14) = 0;
    }
    else if (SQRT(param_2[6] * param_2[6] + fVar3 * fVar3 + fVar29 * fVar29) < 0.005) {
      sVar8 = *(short *)(param_2 + 0x14);
      *(short *)(param_2 + 0x14) = sVar8 + 1;
      puVar9[0x24] = (longlong)(int)(fVar4 * 20.5);
      if ((*(int *)((int)puVar9 + 0x124) < (int)(short)(sVar8 + 1)) &&
         (*(char *)(param_1 + 0x31) == '\0')) {
        *(float *)(param_1 + 0x10) = *param_2;
        *(float *)(param_1 + 0x14) = param_2[1];
        *(undefined2 *)(param_2 + 0x14) = 0;
        *(float *)(param_1 + 0x18) = param_2[2];
        *(float *)(param_1 + 0x1c) = param_2[3];
      }
    }
    if (dVar24 < 1.100000023841858) {
      fVar4 = g_heroPosition.x - *(float *)(param_1 + 0x10);
      fVar5 = g_heroPosition.y - *(float *)(param_1 + 0x14);
      fVar6 = ABS(fVar4);
      fVar7 = ABS(fVar5);
      *(float *)(puVar9 + 0xe) = fVar4;
      *(float *)((int)puVar9 + 0x74) = fVar5;
      *(float *)(puVar9 + 0xf) = fVar6 - fVar7;
      dVar25 = 0.0;
      uVar18 = (ulonglong)(*(uint *)(puVar9 + 0xe) >> 0x1c) & 8 |
               (ulonglong)(*(uint *)(puVar9 + 0xf) >> 0x1e) & 2 |
               (ulonglong)(*(uint *)((int)puVar9 + 0x74) >> 0x1d) & 4;
      fVar4 = ABS(*(float *)(puVar9 + 0xe));
      if (*(float *)(puVar9 + 0xf) - 0.0 < 0.0) {
        fVar4 = fVar7;
      }
      fVar7 = *(float *)(&g_atanQuadrantTable + (int)(uVar18 << 2));
      fVar5 = *(float *)(((uint)(uVar18 << 2) | 0x735900) + 4);
      fVar11 = ABS(*(float *)((int)puVar9 + 0x74));
      if (*(float *)(puVar9 + 0xf) - 0.0 < 0.0) {
        fVar11 = fVar6;
      }
      if (0.0 < fVar4) {
        lVar13 = uVar12 - 0x160;
        lVar16 = uVar12 - 0xd0;
        lVar19 = uVar12 - 0xc0;
        lVar20 = 2;
        fVar4 = (fVar11 - fVar4) / (fVar11 + fVar4);
        fVar6 = fVar4 * fVar4;
        *(float *)((int)puVar9 + 0xac) = fVar4;
        *(float *)((int)puVar9 + 0xa4) = fVar4;
        *(float *)(puVar9 + 0x15) = fVar4;
        *(float *)(puVar9 + 0x14) = fVar4;
        fVar4 = fVar6 * fVar6;
        *(float *)((int)puVar9 + 0xa4) = *(float *)((int)puVar9 + 0xa4) * fVar6;
        *(float *)(puVar9 + 0x15) = *(float *)(puVar9 + 0x15) * fVar4;
        *(float *)((int)puVar9 + 0xac) = *(float *)((int)puVar9 + 0xac) * fVar4 * fVar6;
        do {
          *(float *)((int)lVar13 + 0xa0) = *(float *)((int)lVar13 + 0x90) * fVar4 * fVar4;
          iVar15 = (int)lVar16;
          lVar13 = lVar13 + 8;
          lVar16 = lVar16 + 8;
          *(float *)((int)lVar19 + 4) = *(float *)(iVar15 + 4) * fVar4 * fVar4;
          lVar19 = lVar19 + 8;
          lVar20 = lVar20 + -1;
        } while (lVar20 != 0);
        lVar20 = 4;
        lVar19 = uVar12 - 0xd0;
        pfVar17 = (float *)&DAT_007358e0;
        lVar13 = lVar14;
        lVar16 = lVar19;
        do {
          fVar4 = *pfVar17;
          fVar6 = pfVar17[1];
          pfVar17 = pfVar17 + 2;
          *(float *)((int)lVar13 + 0xa0) = *(float *)((int)lVar13 + 0xa0) * fVar4;
          lVar13 = lVar13 + 8;
          *(float *)((int)lVar16 + 4) = *(float *)((int)lVar16 + 4) * fVar6;
          lVar16 = lVar16 + 8;
          lVar20 = lVar20 + -1;
        } while (lVar20 != 0);
        lVar13 = 2;
        do {
          iVar15 = (int)lVar14;
          iVar10 = (int)lVar19;
          lVar14 = lVar14 + 0x10;
          lVar19 = lVar19 + 0x10;
          dVar25 = (double)((float)(dVar25 + (double)*(float *)(iVar15 + 0xa0)) +
                            *(float *)(iVar10 + 4) + *(float *)(iVar10 + 8) +
                           *(float *)(iVar10 + 0xc));
          lVar13 = lVar13 + -1;
        } while (lVar13 != 0);
        dVar25 = (double)((float)(dVar25 + dVar27) * fVar7 + fVar5);
      }
      fVar4 = (float)(dVar25 + 1.570796251296997);
      dVar26 = (double)(float)(3.141592502593994 - dVar25);
      if (dVar25 - (double)(float)(3.141592502593994 - dVar25) < 0.0) {
        dVar26 = dVar25;
      }
      fVar5 = 3.1415925 - fVar4;
      if (fVar4 - (3.1415925 - fVar4) < 0.0) {
        fVar5 = fVar4;
      }
      dVar28 = (double)(float)(-3.141592502593994 - dVar25);
      if ((double)(float)(-3.141592502593994 - dVar25) - dVar26 < 0.0) {
        dVar28 = dVar26;
      }
      fVar7 = -3.1415925 - fVar4;
      if ((-3.1415925 - fVar4) - fVar5 < 0.0) {
        fVar7 = fVar5;
      }
      dVar26 = (double)(float)(dVar28 * dVar28);
      fVar6 = fVar7 * fVar7;
      dVar25 = (double)(float)(dVar26 * (double)(float)(dVar26 * dVar28));
      fVar4 = fVar6 * fVar6 * fVar7;
      dVar27 = (double)(float)(dVar26 * dVar25);
      fVar5 = fVar6 * fVar4;
      param_2[4] = -((float)(1.100000023841858 - dVar24) *
                     (fVar6 * fVar5 * 2.601887e-06 +
                     fVar5 * -0.0001980741 +
                     fVar4 * 0.0083330255 + fVar6 * fVar7 * -0.16666657 + fVar7) *
                     DAT_0071f40c * 0.1 - fVar3);
      param_2[5] = -((float)(1.100000023841858 - dVar24) *
                     ((float)(dVar26 * dVar27) * 2.601887e-06 +
                     (float)(dVar27 * -0.0001980741071747616 +
                            (double)(float)(dVar25 * 0.008333025500178337 +
                                           (double)(float)((double)(float)(dVar26 * dVar28) *
                                                           -0.16666656732559204 + dVar28)))) *
                     DAT_0071f40c * 0.1 - fVar29);
    }
  }
  else {
    *(undefined1 *)(param_1 + 0xbc) = 0;
    if (1.2999999523162842 < dVar24) {
      *(undefined1 *)(param_1 + 0xbc) = 2;
    }
  }
  dVar25 = (double)*(float *)(param_1 + 0x40);
  fVar29 = MB_WrapRot(DAT_010c5168 * DAT_007b7e4c);
  *(float *)(param_1 + 0x40) =
       (float)((double)(fVar29 - *(float *)(param_1 + 0x40)) * (double)DAT_007b7e54 + dVar25);
  dVar25 = (double)*(float *)(param_1 + 0x44);
  fVar29 = MB_WrapRot
                     (DAT_007b7e50 *
                      SQRT(param_2[6] * param_2[6] +
                           param_2[4] * param_2[4] + param_2[5] * param_2[5]));
  *(float *)(param_1 + 0x44) =
       (float)((double)(fVar29 - *(float *)(param_1 + 0x44)) * (double)DAT_007b7e58 + dVar25);
  return;
}


// 0x02be8f8 (0x100 bytes)
void M1818_002be8f8(int param_1)

{
  GPiece<16> auStack_40;
  GPiece<24> local_30;
  
  if (*(char *)(param_1 + 0x31) != '\0') {
    MB_randRangeFloat(1.0,2.0);
    GetBonePosition(param_1,0,auStack_40);
    SpawnPart_74(param_1,auStack_40,local_30,&DAT_007b7e5c,1);
    SpawnPart_74(param_1,auStack_40,local_30,&DAT_007b7e6c,1);
    SpawnPart_74(param_1,auStack_40,local_30,&DAT_007b7e7c,1);
  }
  return;
}


// 0x02bea00 (0x80 bytes)
void M1818_002bea00(int param_1)

{
  int iVar1;
  ulonglong uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  uVar2 = (ulonglong)*(uint *)(param_1 + 0x78);
  iVar1 = 0;
  uVar3 = 0x3fb99999a0000000;
  uVar4 = 0x3fb47ae140000000;
  do {
    MB_DrawGlowFX(uVar3,uVar4,uVar2 + 0x70,0x2528aa28);
    iVar1 = iVar1 + 1;
    uVar2 = uVar2 + 0x10;
  } while (iVar1 < 2);
  return;
}


// 0x02bea80 (0x7c bytes)
void M1818_002bea80(MobyInstance *param_1)

{
  int iVar1;
  ulonglong uVar2;
  
  iVar1 = 0;
  uVar2 = ZEXT48(param_1->pVar);
  do {
    GetBonePosition(param_1,iVar1 + 3,uVar2 + 0x70);
    iVar1 = iVar1 + 1;
    uVar2 = uVar2 + 0x10;
  } while (iVar1 < 2);
  RegisterMobyDraw(&PTR_M1818_002bea00_0070afe8,param_1);
  return;
}


// 0x02beb68 (0x1fcc bytes)
// inlined: FastAtan2 @0x2bec98, FastAtan2 @0x2bee7c, FastAtan2 @0x2bf62c, FastAtan2 @0x2bfc24, FastAtan2 @0x2c0830
// strings: 0096c074: 'None' | 00655ad4: 'mouse already completed\n' | 00655af4: 'no start house! killing mouse\n'

/* Moby 1818 */

void UpdateMoby_1818(MobyInstance *moby)

{
  byte bVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  f32 fVar6;
  f32 fVar7;
  float fVar8;
  ushort uVar9;
  short sVar10;
  float *pfVar11;
  undefined2 uVar12;
  undefined4 uVar13;
  ulonglong *puVar14;
  float fVar15;
  int iVar16;
  MobyInstance *pMVar17;
  ulonglong uVar18;
  ulonglong uVar19;
  int iVar21;
  float fVar22;
  undefined8 uVar20;
  longlong lVar23;
  float *pfVar25;
  longlong lVar24;
  ulonglong unaff_r25;
  ulonglong unaff_r26;
  ulonglong unaff_r27;
  ulonglong unaff_r28;
  longlong lVar26;
  ulonglong unaff_r29;
  ulonglong uVar27;
  ulonglong unaff_r30;
  longlong lVar28;
  ulonglong unaff_r31;
  ulonglong in_LR;
  longlong lVar29;
  undefined8 uVar30;
  double dVar31;
  double dVar32;
  ulonglong in_f31;
  GPiece<16> auVar33;
  GPiece<16> auVar34;
  GPiece<16> auVar35;
  GPiece<16> auVar36;
  
  uVar18 = ZEXT48(&stack0x00000000);
  lVar26 = uVar18 - 0x210;
  puVar14 = (ulonglong *)lVar26;
  *puVar14 = uVar18;
  puVar14[0x44] = in_LR;
  puVar14[0x41] = in_f31;
  puVar14[0x40] = unaff_r31;
  puVar14[0x3f] = unaff_r30;
  puVar14[0x3e] = unaff_r29;
  puVar14[0x3d] = unaff_r28;
  puVar14[0x3c] = unaff_r27;
  puVar14[0x3b] = unaff_r26;
  puVar14[0x3a] = unaff_r25;
  if (moby != (MobyInstance *)0x0) {
    pfVar11 = (float *)moby->pVar;
    uVar27 = ZEXT48(pfVar11);
    if (pfVar11 != (float *)0x0) {
      fVar22 = pfVar11[0x12];
      if (fVar22 != -NAN) {
        if (moby->state < 5) {
          fVar2 = g_heroPosition.x - g_MobyInstance[(int)fVar22].pos.x;
          fVar4 = g_heroPosition.y - g_MobyInstance[(int)fVar22].pos.y;
          fVar5 = ABS(fVar2);
          fVar3 = ABS(fVar4);
          *(float *)((int)puVar14 + 0x104) = fVar2;
          *(float *)(puVar14 + 0x21) = fVar4;
          *(float *)((int)puVar14 + 0x10c) = fVar5 - fVar3;
          fVar2 = 0.0;
          uVar19 = (ulonglong)(*(uint *)((int)puVar14 + 0x104) >> 0x1c) & 8 |
                   (ulonglong)(*(uint *)((int)puVar14 + 0x10c) >> 0x1e) & 2 |
                   (ulonglong)(*(uint *)(puVar14 + 0x21) >> 0x1d) & 4;
          fVar4 = ABS(*(float *)((int)puVar14 + 0x104));
          if (*(float *)((int)puVar14 + 0x10c) - 0.0 < 0.0) {
            fVar4 = fVar3;
          }
          fVar8 = *(float *)(&g_atanQuadrantTable + (int)(uVar19 << 2));
          fVar3 = *(float *)(((uint)(uVar19 << 2) | 0x735900) + 4);
          fVar15 = ABS(*(float *)(puVar14 + 0x21));
          if (*(float *)((int)puVar14 + 0x10c) - 0.0 < 0.0) {
            fVar15 = fVar5;
          }
          if (0.0 < fVar4) {
            lVar28 = uVar18 - 0x200;
            lVar23 = uVar18 - 0x94;
            lVar24 = uVar18 - 0x84;
            lVar29 = 2;
            fVar4 = (fVar15 - fVar4) / (fVar15 + fVar4);
            fVar5 = fVar4 * fVar4;
            *(float *)(puVar14 + 0x31) = fVar4;
            *(float *)(puVar14 + 0x30) = fVar4;
            *(float *)((int)puVar14 + 0x184) = fVar4;
            *(float *)((int)puVar14 + 0x17c) = fVar4;
            fVar4 = fVar5 * fVar5;
            *(float *)(puVar14 + 0x30) = *(float *)(puVar14 + 0x30) * fVar5;
            *(float *)((int)puVar14 + 0x184) = *(float *)((int)puVar14 + 0x184) * fVar4;
            *(float *)(puVar14 + 0x31) = *(float *)(puVar14 + 0x31) * fVar4 * fVar5;
            do {
              *(float *)((int)lVar28 + 0x17c) = *(float *)((int)lVar28 + 0x16c) * fVar4 * fVar4;
              iVar21 = (int)lVar23;
              lVar28 = lVar28 + 8;
              lVar23 = lVar23 + 8;
              *(float *)((int)lVar24 + 4) = *(float *)(iVar21 + 4) * fVar4 * fVar4;
              lVar24 = lVar24 + 8;
              lVar29 = lVar29 + -1;
            } while (lVar29 != 0);
            lVar29 = 4;
            lVar24 = uVar18 - 0x94;
            pfVar25 = (float *)&DAT_007358e0;
            lVar28 = lVar26;
            lVar23 = lVar24;
            do {
              fVar4 = *pfVar25;
              fVar5 = pfVar25[1];
              pfVar25 = pfVar25 + 2;
              *(float *)((int)lVar28 + 0x17c) = *(float *)((int)lVar28 + 0x17c) * fVar4;
              lVar28 = lVar28 + 8;
              *(float *)((int)lVar23 + 4) = *(float *)((int)lVar23 + 4) * fVar5;
              lVar23 = lVar23 + 8;
              lVar29 = lVar29 + -1;
            } while (lVar29 != 0);
            lVar23 = 2;
            lVar28 = lVar26;
            do {
              iVar21 = (int)lVar28;
              iVar16 = (int)lVar24;
              lVar28 = lVar28 + 0x10;
              lVar24 = lVar24 + 0x10;
              fVar2 = fVar2 + *(float *)(iVar21 + 0x17c) + *(float *)(iVar16 + 4) +
                      *(float *)(iVar16 + 8) + *(float *)(iVar16 + 0xc);
              lVar23 = lVar23 + -1;
            } while (lVar23 != 0);
            fVar2 = (fVar2 + 0.7853982) * fVar8 + fVar3;
          }
        }
        else {
          fVar2 = (moby->pos).x - g_MobyInstance[(int)fVar22].pos.x;
          fVar4 = (moby->pos).y - g_MobyInstance[(int)fVar22].pos.y;
          fVar5 = ABS(fVar2);
          fVar3 = ABS(fVar4);
          *(float *)(puVar14 + 0x22) = fVar2;
          *(float *)((int)puVar14 + 0x114) = fVar4;
          *(float *)(puVar14 + 0x23) = fVar5 - fVar3;
          fVar2 = 0.0;
          uVar19 = (ulonglong)(*(uint *)(puVar14 + 0x22) >> 0x1c) & 8 |
                   (ulonglong)(*(uint *)(puVar14 + 0x23) >> 0x1e) & 2 |
                   (ulonglong)(*(uint *)((int)puVar14 + 0x114) >> 0x1d) & 4;
          fVar4 = ABS(*(float *)(puVar14 + 0x22));
          if (*(float *)(puVar14 + 0x23) - 0.0 < 0.0) {
            fVar4 = fVar3;
          }
          fVar8 = *(float *)(&g_atanQuadrantTable + (int)(uVar19 << 2));
          fVar3 = *(float *)(((uint)(uVar19 << 2) | 0x735900) + 4);
          fVar15 = ABS(*(float *)((int)puVar14 + 0x114));
          if (*(float *)(puVar14 + 0x23) - 0.0 < 0.0) {
            fVar15 = fVar5;
          }
          if (0.0 < fVar4) {
            lVar28 = uVar18 - 0x200;
            lVar24 = uVar18 - 100;
            lVar23 = uVar18 - 0x74;
            lVar29 = 2;
            fVar4 = (fVar15 - fVar4) / (fVar15 + fVar4);
            fVar5 = fVar4 * fVar4;
            *(float *)(puVar14 + 0x35) = fVar4;
            *(float *)(puVar14 + 0x34) = fVar4;
            *(float *)((int)puVar14 + 0x1a4) = fVar4;
            *(float *)((int)puVar14 + 0x19c) = fVar4;
            fVar4 = fVar5 * fVar5;
            *(float *)(puVar14 + 0x34) = *(float *)(puVar14 + 0x34) * fVar5;
            *(float *)((int)puVar14 + 0x1a4) = *(float *)((int)puVar14 + 0x1a4) * fVar4;
            *(float *)(puVar14 + 0x35) = *(float *)(puVar14 + 0x35) * fVar4 * fVar5;
            do {
              *(float *)((int)lVar28 + 0x19c) = *(float *)((int)lVar28 + 0x18c) * fVar4 * fVar4;
              iVar21 = (int)lVar23;
              lVar23 = lVar23 + 8;
              lVar28 = lVar28 + 8;
              *(float *)((int)lVar24 + 4) = *(float *)(iVar21 + 4) * fVar4 * fVar4;
              lVar24 = lVar24 + 8;
              lVar29 = lVar29 + -1;
            } while (lVar29 != 0);
            lVar29 = 4;
            lVar24 = uVar18 - 0x74;
            pfVar25 = (float *)&DAT_007358e0;
            lVar28 = lVar26;
            lVar23 = lVar24;
            do {
              fVar4 = *pfVar25;
              fVar5 = pfVar25[1];
              pfVar25 = pfVar25 + 2;
              *(float *)((int)lVar28 + 0x19c) = *(float *)((int)lVar28 + 0x19c) * fVar4;
              lVar28 = lVar28 + 8;
              *(float *)((int)lVar23 + 4) = *(float *)((int)lVar23 + 4) * fVar5;
              lVar23 = lVar23 + 8;
              lVar29 = lVar29 + -1;
            } while (lVar29 != 0);
            lVar23 = 2;
            lVar28 = lVar26;
            do {
              iVar21 = (int)lVar28;
              lVar28 = lVar28 + 0x10;
              iVar16 = (int)lVar24;
              lVar24 = lVar24 + 0x10;
              fVar2 = fVar2 + *(float *)(iVar21 + 0x19c) + *(float *)(iVar16 + 4) +
                      *(float *)(iVar16 + 8) + *(float *)(iVar16 + 0xc);
              lVar23 = lVar23 + -1;
            } while (lVar23 != 0);
            fVar2 = (fVar2 + 0.7853982) * fVar8 + fVar3;
          }
        }
        *(float *)g_MobyInstance[(int)fVar22].pVar = fVar2;
        fVar22 = pfVar11[0x12];
      }
      if (fVar22 != -NAN) {
        g_MobyInstance[(int)fVar22].collision = (ushort *)0x0;
      }
      bVar1 = moby->state;
      if (2 < bVar1) {
        if (Cheats[0] == '\0') {
          if (*(char *)((int)pfVar11 + 0x91) != '\0') {
            DetachManipulator(moby,pfVar11 + 0x24);
          }
        }
        else {
          if (*(char *)((int)pfVar11 + 0x91) == '\0') {
            AttachManipulator(moby,5,pfVar11 + 0x24);
          }
          pfVar11[0x2c] = 2.1;
          pfVar11[0x2d] = 2.1;
          pfVar11[0x2e] = 2.1;
        }
        iVar21 = 0;
        uVar19 = ZEXT48(moby->pVar);
        do {
          GetBonePosition(moby,iVar21 + 3,uVar19 + 0x70);
          iVar21 = iVar21 + 1;
          uVar19 = uVar19 + 0x10;
        } while (iVar21 < 2);
        RegisterMobyDraw(&PTR_M1818_002bea00_0070afe8,moby);
        bVar1 = moby->state;
      }
      if (bVar1 == 7) {
        fVar22 = pfVar11[0x19];
        if (((fVar22 != -NAN) && (g_SoundChannels[(int)fVar22].pMoby == moby)) &&
           (g_SoundChannels[(int)fVar22].state != '\0')) {
          sound_Kill((int)fVar22);
        }
        pfVar11[0x19] = -NAN;
        *(undefined1 *)(pfVar11 + 4) = 0;
        *(undefined1 *)((int)pfVar11 + 0x11) = 0;
        *(undefined1 *)((int)pfVar11 + 0x12) = 0;
        *(undefined1 *)((int)pfVar11 + 0x13) = 0;
        *(undefined1 *)(pfVar11 + 5) = 0;
        *(undefined1 *)((int)pfVar11 + 0x15) = 0;
        *(undefined1 *)((int)pfVar11 + 0x16) = 0;
        *(undefined1 *)((int)pfVar11 + 0x17) = 0;
        *(undefined1 *)(pfVar11 + 6) = 0;
        *(undefined1 *)((int)pfVar11 + 0x19) = 0;
        *(undefined1 *)((int)pfVar11 + 0x1a) = 0;
        *(undefined1 *)((int)pfVar11 + 0x1b) = 0;
        *(undefined1 *)(pfVar11 + 7) = 0;
        *(undefined1 *)((int)pfVar11 + 0x1d) = 0;
        *(undefined1 *)((int)pfVar11 + 0x1e) = 0;
        *(undefined1 *)((int)pfVar11 + 0x1f) = 0;
        pMVar17 = g_MobyInstance;
        fVar22 = pfVar11[0x12];
        *pfVar11 = g_MobyInstance[(int)fVar22].pos.x;
        pfVar11[1] = pMVar17[(int)fVar22].pos.y;
        pfVar11[2] = pMVar17[(int)fVar22].pos.z;
        pfVar11[3] = pMVar17[(int)fVar22].pos.w;
        DAT_010c51a4 = (MobyInstance *)0x0;
        fVar22 = *pfVar11 - (moby->pos).x;
        fVar2 = pfVar11[1] - (moby->pos).y;
        fVar5 = ABS(fVar22);
        *(float *)(puVar14 + 0x1c) = fVar22;
        fVar4 = ABS(fVar2);
        *(float *)((int)puVar14 + 0xe4) = fVar2;
        *(float *)(puVar14 + 0x1d) = fVar5 - fVar4;
        dVar31 = 0.0;
        uVar27 = (ulonglong)(*(uint *)(puVar14 + 0x1c) >> 0x1c) & 8 |
                 (ulonglong)(*(uint *)(puVar14 + 0x1d) >> 0x1e) & 2 |
                 (ulonglong)(*(uint *)((int)puVar14 + 0xe4) >> 0x1d) & 4;
        fVar22 = ABS(*(float *)(puVar14 + 0x1c));
        if (*(float *)(puVar14 + 0x1d) - 0.0 < 0.0) {
          fVar22 = fVar4;
        }
        fVar4 = *(float *)(&g_atanQuadrantTable + (int)(uVar27 << 2));
        fVar2 = *(float *)(((uint)(uVar27 << 2) | 0x735900) + 4);
        fVar3 = ABS(*(float *)((int)puVar14 + 0xe4));
        if (*(float *)(puVar14 + 0x1d) - 0.0 < 0.0) {
          fVar3 = fVar5;
        }
        if (0.0 < fVar22) {
          lVar28 = uVar18 - 0x200;
          lVar24 = uVar18 - 0xe4;
          lVar23 = uVar18 - 0xf4;
          lVar29 = 2;
          fVar22 = (fVar3 - fVar22) / (fVar3 + fVar22);
          fVar5 = fVar22 * fVar22;
          *(float *)(puVar14 + 0x25) = fVar22;
          *(float *)(puVar14 + 0x24) = fVar22;
          *(float *)((int)puVar14 + 0x124) = fVar22;
          *(float *)((int)puVar14 + 0x11c) = fVar22;
          fVar22 = fVar5 * fVar5;
          *(float *)(puVar14 + 0x24) = *(float *)(puVar14 + 0x24) * fVar5;
          *(float *)((int)puVar14 + 0x124) = *(float *)((int)puVar14 + 0x124) * fVar22;
          *(float *)(puVar14 + 0x25) = *(float *)(puVar14 + 0x25) * fVar22 * fVar5;
          do {
            *(float *)((int)lVar28 + 0x11c) = *(float *)((int)lVar28 + 0x10c) * fVar22 * fVar22;
            iVar21 = (int)lVar23;
            lVar23 = lVar23 + 8;
            lVar28 = lVar28 + 8;
            *(float *)((int)lVar24 + 4) = *(float *)(iVar21 + 4) * fVar22 * fVar22;
            lVar24 = lVar24 + 8;
            lVar29 = lVar29 + -1;
          } while (lVar29 != 0);
          lVar29 = 4;
          lVar24 = uVar18 - 0xf4;
          pfVar25 = (float *)&DAT_007358e0;
          lVar28 = lVar26;
          lVar23 = lVar24;
          do {
            fVar22 = *pfVar25;
            fVar5 = pfVar25[1];
            pfVar25 = pfVar25 + 2;
            *(float *)((int)lVar28 + 0x11c) = *(float *)((int)lVar28 + 0x11c) * fVar22;
            lVar28 = lVar28 + 8;
            *(float *)((int)lVar23 + 4) = *(float *)((int)lVar23 + 4) * fVar5;
            lVar23 = lVar23 + 8;
            lVar29 = lVar29 + -1;
          } while (lVar29 != 0);
          lVar28 = 2;
          do {
            iVar21 = (int)lVar26;
            lVar26 = lVar26 + 0x10;
            iVar16 = (int)lVar24;
            lVar24 = lVar24 + 0x10;
            dVar31 = (double)((float)(dVar31 + (double)*(float *)(iVar21 + 0x11c)) +
                              *(float *)(iVar16 + 4) + *(float *)(iVar16 + 8) +
                             *(float *)(iVar16 + 0xc));
            lVar28 = lVar28 + -1;
          } while (lVar28 != 0);
          dVar31 = (double)((float)(dVar31 + 0.7853981852531433) * fVar4 + fVar2);
        }
        OrganicDeltAngSpeed
                  (dVar31,(double)(g_FrameTimeSq * 6.2831855),(double)(g_FrameTimeSq * 3.1415927),
                   (double)(g_FrameTime * 11.519173),moby,&DAT_010c5154,&DAT_010c5168);
        if (moby->animationId != '\0') {
          puVar14[0x38] = (longlong)(int)(animationSpeed * 6.5);
          MB_SetAnimation(moby,0,0,*(undefined4 *)((int)puVar14 + 0x1c4));
        }
        g_MobyInstance[(int)pfVar11[0x12]].setByGroup = '\x01';
        moby->drawDistance = 0;
        moby->state = '\x01';
      }
      else if (bVar1 == 6) {
        fVar22 = pfVar11[0x19];
        if (((fVar22 != -NAN) && (g_SoundChannels[(int)fVar22].pMoby == moby)) &&
           (g_SoundChannels[(int)fVar22].state != '\0')) {
          sound_Kill((int)fVar22);
        }
        pfVar11[0x19] = -NAN;
        iVar21 = FastDecTimerS16(uVar27 + 0x52);
        if (iVar21 == 0) {
          *(undefined4 *)(puVar14 + 0x16) = 0;
          *(undefined4 *)((int)puVar14 + 0xb4) = 0;
          fVar6 = (moby->pos).x;
          *(undefined4 *)(puVar14 + 0x17) = 0;
          *(undefined4 *)((int)puVar14 + 0xbc) = 0;
          fVar7 = (moby->pos).y;
          *(f32 *)(puVar14 + 0x14) = fVar6;
          fVar6 = (moby->pos).z;
          *(f32 *)((int)puVar14 + 0xa4) = fVar7;
          fVar7 = (moby->pos).w;
          *(f32 *)(puVar14 + 0x15) = fVar6;
          *(f32 *)((int)puVar14 + 0xac) = fVar7;
          MB_RandomizeVector(DAT_007b7e2c,(float *)(uVar18 - 0x170));
          rand();
          rand();
          rand();
          rand();
          uVar20 = MB_randRange(DAT_007b7e24,DAT_007b7e28);
          uVar30 = MB_randRangeFloat(DAT_007b7e30,DAT_007b7e34);
          SpawnPart_53
                    (uVar30,0x3f50624de0000000,(double)(DAT_007b7e3c * g_FrameTimeSq),uVar18 - 0x170,
                     uVar20);
          iVar21 = 0x80 / DAT_007b7e20;
          moby->modeBits = moby->modeBits | DRAW_TRANSPARENT_WEIRD;
          moby->alpha = moby->alpha - (char)iVar21;
          dVar31 = (double)FastWrapRot
                                     ((moby->rotation).z,g_FrameTime * 25.132742);
          (moby->rotation).z = (float)dVar31;
        }
        else {
          moby->alpha = -0x80;
          (moby->pos).x = pfVar11[0xc];
          (moby->pos).y = pfVar11[0xd];
          (moby->pos).z = pfVar11[0xe];
          (moby->pos).w = pfVar11[0xf];
          *pfVar11 = pfVar11[0xc];
          pfVar11[1] = pfVar11[0xd];
          pfVar11[2] = pfVar11[0xe];
          pfVar11[3] = pfVar11[0xf];
          *(undefined1 *)(pfVar11 + 4) = 0;
          *(undefined1 *)((int)pfVar11 + 0x11) = 0;
          *(undefined1 *)((int)pfVar11 + 0x12) = 0;
          *(undefined1 *)((int)pfVar11 + 0x13) = 0;
          *(undefined1 *)(pfVar11 + 5) = 0;
          *(undefined1 *)((int)pfVar11 + 0x15) = 0;
          *(undefined1 *)((int)pfVar11 + 0x16) = 0;
          *(undefined1 *)((int)pfVar11 + 0x17) = 0;
          *(undefined1 *)(pfVar11 + 6) = 0;
          *(undefined1 *)((int)pfVar11 + 0x19) = 0;
          *(undefined1 *)((int)pfVar11 + 0x1a) = 0;
          *(undefined1 *)((int)pfVar11 + 0x1b) = 0;
          *(undefined1 *)(pfVar11 + 7) = 0;
          *(undefined1 *)((int)pfVar11 + 0x1d) = 0;
          *(undefined1 *)((int)pfVar11 + 0x1e) = 0;
          *(undefined1 *)((int)pfVar11 + 0x1f) = 0;
          moby->state = '\a';
          moby->modeBits =
               moby->modeBits &
               (MIRROR|CAN_BE_DAMAGED|HIDE_BACKFACES|CAN_BE_AUTO_TARGETED|DISABLE_Z_WRITE|
                DRAW_SHADOW|LOCK_ROTATION|NO_DRAW|UNK_40|HAS_SPECIAL_VARS|HAS_GLOW|TRANSPARENT|
                NO_POST_UPDATE|NO_UPDATE|DISABLED);
        }
      }
      else if (bVar1 == 5) {
        if ((g_SoundChannels[(int)pfVar11[0x19]].pMoby != moby) ||
           (g_SoundChannels[(int)pfVar11[0x19]].state == '\0')) {
          pfVar11[0x19] = -NAN;
          fVar22 = (float)PlayMobySound(1,4,moby);
          pfVar11[0x19] = fVar22;
        }
        fVar22 = animationSpeed;
        sVar10 = *(short *)((int)pfVar11 + 0x52);
        puVar14[0x38] = (longlong)(int)(animationSpeed * 20.5);
        if (((int)sVar10 == *(int *)((int)puVar14 + 0x1c4)) ||
           (DAT_007b7e18 + -5 < (int)pfVar11[0x17])) {
          if (moby->animationId != '\x02') {
            puVar14[0x38] = (longlong)(int)(fVar22 * 5.5);
            MB_SetAnimation(moby,2,0,*(undefined4 *)((int)puVar14 + 0x1c4));
          }
        }
        else if ((*(int *)((int)puVar14 + 0x1c4) < (int)sVar10) && ((moby->field43_0x70 & 2U) != 0))
        {
          if (moby->animationId != '\x01') {
            iVar21 = MB_randRange(7,0xc);
            puVar14[0x38] = (longlong)iVar21;
            puVar14[0x38] = (longlong)(int)(animationSpeed * ((float)(longlong)puVar14[0x38] + 0.5))
            ;
            MB_SetAnimation(moby,1,0,*(undefined4 *)((int)puVar14 + 0x1c4));
          }
          dVar31 = (double)MB_randRangeFloat(0.95,1.05);
          moby->unk58 = (float)dVar31;
        }
        if (((((DAT_0096ae10 == 0) || (DAT_0096ae38 != 5)) ||
             (g_heroStateType == 0x14 || g_heroStateType == 0x16)) ||
            ((g_heroType != '\0' || (*(short *)((int)GameCamera.pCurrentUpdCam + 0x86) == 0x14))))
           || ((iVar21 = FastDecTimerS32(uVar27 + 0x58), iVar21 != 0 ||
               (DAT_007b7e18 <= (int)pfVar11[0x17])))) {
          *(undefined1 *)(pfVar11 + 4) = 0;
          *(undefined1 *)((int)pfVar11 + 0x11) = 0;
          *(undefined1 *)((int)pfVar11 + 0x12) = 0;
          *(undefined1 *)((int)pfVar11 + 0x13) = 0;
          *(undefined1 *)(pfVar11 + 5) = 0;
          *(undefined1 *)((int)pfVar11 + 0x15) = 0;
          *(undefined1 *)((int)pfVar11 + 0x16) = 0;
          *(undefined1 *)((int)pfVar11 + 0x17) = 0;
          *(undefined1 *)(pfVar11 + 6) = 0;
          *(undefined1 *)((int)pfVar11 + 0x19) = 0;
          *(undefined1 *)((int)pfVar11 + 0x1a) = 0;
          *(undefined1 *)((int)pfVar11 + 0x1b) = 0;
          *(undefined1 *)(pfVar11 + 7) = 0;
          *(undefined1 *)((int)pfVar11 + 0x1d) = 0;
          *(undefined1 *)((int)pfVar11 + 0x1e) = 0;
          *(undefined1 *)((int)pfVar11 + 0x1f) = 0;
          fVar22 = pfVar11[0x19];
          *(short *)((int)pfVar11 + 0x52) = (short)DAT_007b7e20;
          if (((fVar22 != -NAN) && (g_SoundChannels[(int)fVar22].pMoby == moby)) &&
             (g_SoundChannels[(int)fVar22].state != '\0')) {
            sound_Kill((int)fVar22);
          }
          pfVar11[0x19] = -NAN;
          PlayMobySound(2,0,moby);
          moby->state = '\x06';
          if (pfVar11[0x12] != -NAN) {
            g_MobyInstance[(int)pfVar11[0x12]].setByGroup = '\x05';
          }
        }
        else {
          M1818_002bc960(moby,uVar27);
          M1818_002bdc98(moby,uVar27);
        }
        M1818_002bd110(moby,uVar27);
      }
      else if (bVar1 == 4) {
        if ((g_SoundChannels[(int)pfVar11[0x19]].pMoby != moby) ||
           (g_SoundChannels[(int)pfVar11[0x19]].state == '\0')) {
          pfVar11[0x19] = -NAN;
          fVar22 = (float)PlayMobySound(1,4,moby);
          pfVar11[0x19] = fVar22;
        }
        TransitionMovement(0,1);
        moby->modeBits =
             moby->modeBits &
             (MIRROR|CAN_BE_DAMAGED|HIDE_BACKFACES|CAN_BE_AUTO_TARGETED|DISABLE_Z_WRITE|DRAW_SHADOW|
              DRAW_TRANSPARENT_WEIRD|LOCK_ROTATION|NO_DRAW|HAS_SPECIAL_VARS|HAS_GLOW|TRANSPARENT|
              NO_POST_UPDATE|NO_UPDATE);
        fVar22 = pfVar11[0x12];
        if (fVar22 != -NAN) {
          g_MobyInstance[(int)fVar22].modeBits =
               g_MobyInstance[(int)fVar22].modeBits &
               (MIRROR|CAN_BE_DAMAGED|HIDE_BACKFACES|CAN_BE_AUTO_TARGETED|DISABLE_Z_WRITE|
                DRAW_SHADOW|DRAW_TRANSPARENT_WEIRD|LOCK_ROTATION|NO_DRAW|HAS_SPECIAL_VARS|HAS_GLOW|
                TRANSPARENT|NO_POST_UPDATE|NO_UPDATE);
        }
        moby->state = '\x05';
      }
      else if (bVar1 == 3) {
        if ((g_SoundChannels[(int)pfVar11[0x19]].pMoby != moby) ||
           (g_SoundChannels[(int)pfVar11[0x19]].state == '\0')) {
          pfVar11[0x19] = -NAN;
          fVar22 = (float)PlayMobySound(1,4,moby);
          pfVar11[0x19] = fVar22;
        }
        fVar22 = (moby->pos).y - pfVar11[0xd];
        fVar2 = (moby->pos).x - pfVar11[0xc];
        if ((SQRT(fVar2 * fVar2 + fVar22 * fVar22) <= 0.6) || (*(short *)((int)pfVar11 + 0x52) != 0)
           ) {
          M1818_002bc878(moby,uVar27);
          fVar22 = *pfVar11 - (moby->pos).x;
          fVar2 = pfVar11[1] - (moby->pos).y;
          fVar5 = ABS(fVar22);
          fVar4 = ABS(fVar2);
          *(float *)((int)puVar14 + 0xec) = fVar22;
          *(float *)(puVar14 + 0x1e) = fVar2;
          *(float *)((int)puVar14 + 0xf4) = fVar5 - fVar4;
          dVar31 = 0.0;
          uVar19 = (ulonglong)(*(uint *)((int)puVar14 + 0xec) >> 0x1c) & 8 |
                   (ulonglong)(*(uint *)((int)puVar14 + 0xf4) >> 0x1e) & 2 |
                   (ulonglong)(*(uint *)(puVar14 + 0x1e) >> 0x1d) & 4;
          fVar22 = ABS(*(float *)((int)puVar14 + 0xec));
          if (*(float *)((int)puVar14 + 0xf4) - 0.0 < 0.0) {
            fVar22 = fVar4;
          }
          fVar4 = *(float *)(&g_atanQuadrantTable + (int)(uVar19 << 2));
          fVar2 = *(float *)(((uint)(uVar19 << 2) | 0x735900) + 4);
          fVar3 = ABS(*(float *)(puVar14 + 0x1e));
          if (*(float *)((int)puVar14 + 0xf4) - 0.0 < 0.0) {
            fVar3 = fVar5;
          }
          if (0.0 < fVar22) {
            lVar28 = uVar18 - 0x200;
            lVar24 = uVar18 - 0xc4;
            lVar23 = uVar18 - 0xd4;
            lVar29 = 2;
            fVar22 = (fVar3 - fVar22) / (fVar3 + fVar22);
            fVar5 = fVar22 * fVar22;
            *(float *)(puVar14 + 0x29) = fVar22;
            *(float *)(puVar14 + 0x28) = fVar22;
            *(float *)((int)puVar14 + 0x144) = fVar22;
            *(float *)((int)puVar14 + 0x13c) = fVar22;
            fVar22 = fVar5 * fVar5;
            *(float *)(puVar14 + 0x28) = *(float *)(puVar14 + 0x28) * fVar5;
            *(float *)((int)puVar14 + 0x144) = *(float *)((int)puVar14 + 0x144) * fVar22;
            *(float *)(puVar14 + 0x29) = *(float *)(puVar14 + 0x29) * fVar22 * fVar5;
            do {
              *(float *)((int)lVar28 + 0x13c) = *(float *)((int)lVar28 + 300) * fVar22 * fVar22;
              iVar21 = (int)lVar23;
              lVar23 = lVar23 + 8;
              lVar28 = lVar28 + 8;
              *(float *)((int)lVar24 + 4) = *(float *)(iVar21 + 4) * fVar22 * fVar22;
              lVar24 = lVar24 + 8;
              lVar29 = lVar29 + -1;
            } while (lVar29 != 0);
            lVar29 = 4;
            lVar24 = uVar18 - 0xd4;
            pfVar25 = (float *)&DAT_007358e0;
            lVar28 = lVar26;
            lVar23 = lVar24;
            do {
              fVar22 = *pfVar25;
              fVar5 = pfVar25[1];
              pfVar25 = pfVar25 + 2;
              *(float *)((int)lVar28 + 0x13c) = *(float *)((int)lVar28 + 0x13c) * fVar22;
              lVar28 = lVar28 + 8;
              *(float *)((int)lVar23 + 4) = *(float *)((int)lVar23 + 4) * fVar5;
              lVar23 = lVar23 + 8;
              lVar29 = lVar29 + -1;
            } while (lVar29 != 0);
            lVar28 = 2;
            do {
              iVar21 = (int)lVar26;
              lVar26 = lVar26 + 0x10;
              iVar16 = (int)lVar24;
              lVar24 = lVar24 + 0x10;
              dVar31 = (double)((float)(dVar31 + (double)*(float *)(iVar21 + 0x13c)) +
                                *(float *)(iVar16 + 4) + *(float *)(iVar16 + 8) +
                               *(float *)(iVar16 + 0xc));
              lVar28 = lVar28 + -1;
            } while (lVar28 != 0);
            dVar31 = (double)((float)(dVar31 + 0.7853981852531433) * fVar4 + fVar2);
          }
          OrganicDeltAngSpeed
                    (dVar31,(double)(g_FrameTimeSq * 6.2831855),(double)(g_FrameTimeSq * 3.1415927),
                     (double)(g_FrameTime * 11.519173),moby,&DAT_00720000,&DAT_010c5168);
          pfVar11[6] = 0.0;
          uVar19 = MB_UpdateNavMoveTurning(moby,&DAT_010c5154,uVar27,uVar27 + 0x10);
        }
        else {
          DAT_010c5158 = 0x3f333333;
          M1818_002bc960(moby,uVar27);
          M1818_002bdc98(moby,uVar27);
          uVar19 = 0;
          if (0x14 < *(short *)(pfVar11 + 0x14)) {
            uVar19 = 2;
          }
        }
        if (((uVar19 & 6) != 0) ||
           (fVar22 = (moby->pos).y - pfVar11[1], fVar2 = (moby->pos).x - *pfVar11,
           fVar4 = (moby->pos).z - pfVar11[2],
           SQRT(fVar4 * fVar4 + fVar2 * fVar2 + fVar22 * fVar22) < 0.25)) {
          if (moby->animationId != '\x02') {
            puVar14[0x38] = (longlong)(int)(animationSpeed * 10.5);
            MB_SetAnimation(moby,2,0,*(undefined4 *)((int)puVar14 + 0x1c4));
          }
          auVar33 = ZEXT416(0xffffffff);
          auVar33 = auVar33 | auVar33 << 0x20 | auVar33 << 0x40 | auVar33 << 0x60;
          *(undefined1 *)(pfVar11 + 4) = 0;
          *(undefined1 *)((int)pfVar11 + 0x11) = 0;
          *(undefined1 *)((int)pfVar11 + 0x12) = 0;
          *(undefined1 *)((int)pfVar11 + 0x13) = 0;
          *(undefined1 *)(pfVar11 + 5) = 0;
          *(undefined1 *)((int)pfVar11 + 0x15) = 0;
          *(undefined1 *)((int)pfVar11 + 0x16) = 0;
          *(undefined1 *)((int)pfVar11 + 0x17) = 0;
          *(undefined1 *)(pfVar11 + 6) = 0;
          *(undefined1 *)((int)pfVar11 + 0x19) = 0;
          *(undefined1 *)((int)pfVar11 + 0x1a) = 0;
          *(undefined1 *)((int)pfVar11 + 0x1b) = 0;
          *(undefined1 *)(pfVar11 + 7) = 0;
          *(undefined1 *)((int)pfVar11 + 0x1d) = 0;
          *(undefined1 *)((int)pfVar11 + 0x1e) = 0;
          *(undefined1 *)((int)pfVar11 + 0x1f) = 0;
          moby->state = '\x04';
          auVar34 = vectorShiftLeftIntegerWord(auVar33,auVar33);
          auVar33 = loadVectorLeftIndexed(0x44,0x2beafc);
          auVar33 = auVar33 >> 0x60 & (GPiece<16>)0xffffffff;
          auVar35 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
          auVar33 = vectorMultiplyAddFloatingPoint
                              (auVar35,auVar33 | auVar33 << 0x20 | auVar33 << 0x40 | auVar33 << 0x60
                               ,auVar34);
          auVar33 = vectorConvertToSignedFixedPointWordSaturate(auVar33,0);
          auVar33 = vectorSplatHalfWord(auVar33,1);
          uVar12 = storeVectorElementHalfWordIndexed(auVar33,0x52,uVar27);
          *(undefined2 *)((int)pfVar11 + 0x52) = uVar12;
        }
        if ((moby->field43_0x70 & 2U) != 0) {
          if (moby->animationId != '\x01') {
            iVar21 = MB_randRange(7,0xc);
            puVar14[0x38] = (longlong)iVar21;
            puVar14[0x38] = (longlong)(int)(animationSpeed * ((float)(longlong)puVar14[0x38] + 0.5))
            ;
            MB_SetAnimation(moby,1,0,*(undefined4 *)((int)puVar14 + 0x1c4));
          }
          dVar31 = (double)MB_randRangeFloat(0.95,1.05);
          moby->unk58 = (float)dVar31;
        }
      }
      else if (bVar1 == 2) {
        if (pfVar11[0x12] == -NAN) {
          *(undefined2 *)((int)pfVar11 + 0x52) = 0;
          moby->drawDistance = 0xff;
          if (moby->animationId != '\0') {
            puVar14[0x38] = (longlong)(int)(animationSpeed * 20.5);
            MB_SetAnimation(moby,0,0,*(undefined4 *)((int)puVar14 + 0x1c4));
          }
          if (pfVar11[0x19] == -NAN) {
            fVar22 = (float)PlayMobySound(1,4,moby);
            pfVar11[0x19] = fVar22;
          }
          moby->state = '\x03';
        }
        else if (g_MobyInstance[(int)pfVar11[0x12]].state == '\x05') {
          if (moby->animationId != '\0') {
            puVar14[0x38] = (longlong)(int)(animationSpeed * 10.5);
            MB_SetAnimation(moby,0,0,*(undefined4 *)((int)puVar14 + 0x1c4));
          }
          moby->state = '\x03';
          *(undefined2 *)((int)pfVar11 + 0x52) = 0;
          moby->drawDistance = 0xff;
        }
      }
      else if (bVar1 == 1) {
        if ((UnlockableItems.sonicSummoner != '\0') && (DAT_0096ae38 == 5)) {
          auVar33 = ZEXT416(0xffffffff);
          auVar33 = auVar33 | auVar33 << 0x20 | auVar33 << 0x40 | auVar33 << 0x60;
          pfVar11[0x17] = 0.0;
          fVar22 = animationSpeed;
          auVar35 = vectorShiftLeftIntegerWord(auVar33,auVar33);
          auVar33 = loadVectorLeftIndexed(0x7e14,0x7b0000);
          auVar34 = vectorConvertFromSignedFixedPointWord(auVar33,0);
          auVar33 = loadVectorLeftIndexed(0x2c,0x2beafc);
          auVar33 = auVar33 >> 0x60 & (GPiece<16>)0xffffffff;
          auVar36 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
          dVar31 = 0.5;
          auVar33 = vectorAddFloatingPoint
                              (auVar34,auVar33 | auVar33 << 0x20 | auVar33 << 0x40 | auVar33 << 0x60
                              );
          auVar33 = vectorMultiplyAddFloatingPoint(auVar36,auVar33,auVar35);
          auVar33 = vectorConvertToSignedFixedPointWordSaturate(auVar33,0);
          auVar33 = auVar33 >> 0x60 & (GPiece<16>)0xffffffff;
          uVar13 = storeVectorElementWordIndexed
                             (auVar33 | auVar33 << 0x20 | auVar33 << 0x40 | auVar33 << 0x60,0x58,
                              uVar27);
          *(undefined4 *)((uint)(pfVar11 + 0x16) & 0xfffffffc) = uVar13;
          if ((moby->enabled != '\0') &&
             (((moby->field43_0x70 & 2U) != 0 && (moby->animationId != '\x02')))) {
            puVar14[0x38] = (longlong)(int)(fVar22 * 10.5);
            MB_SetAnimation(moby,2,0,*(undefined4 *)((int)puVar14 + 0x1c4));
          }
          if (pfVar11[0x12] != -NAN) {
            iVar21 = MB_IsPntInCuboid(&g_heroPosition,(longlong)(int)pfVar11[0x10]);
            g_MobyInstance[(int)pfVar11[0x12]].setByGroup =
                 ((byte)(ZERO_MASK(iVar21)) & 0xfe) + 3;
          }
          if ((DAT_0096ae10 != 0) && (DAT_0096ae38 == 5)) {
            fVar22 = g_heroPosition.x - (moby->pos).x;
            fVar2 = g_heroPosition.y - (moby->pos).y;
            fVar5 = ABS(fVar22);
            fVar4 = ABS(fVar2);
            *(float *)(puVar14 + 0x1f) = fVar22;
            *(float *)((int)puVar14 + 0xfc) = fVar2;
            *(float *)(puVar14 + 0x20) = fVar5 - fVar4;
            dVar32 = 0.0;
            uVar19 = (ulonglong)(*(uint *)(puVar14 + 0x1f) >> 0x1c) & 8 |
                     (ulonglong)(*(uint *)(puVar14 + 0x20) >> 0x1e) & 2 |
                     (ulonglong)(*(uint *)((int)puVar14 + 0xfc) >> 0x1d) & 4;
            fVar22 = ABS(*(float *)(puVar14 + 0x1f));
            if (*(float *)(puVar14 + 0x20) - 0.0 < 0.0) {
              fVar22 = fVar4;
            }
            fVar4 = *(float *)(&g_atanQuadrantTable + (int)(uVar19 << 2));
            fVar2 = *(float *)(((uint)(uVar19 << 2) | 0x735900) + 4);
            fVar3 = ABS(*(float *)((int)puVar14 + 0xfc));
            if (*(float *)(puVar14 + 0x20) - 0.0 < 0.0) {
              fVar3 = fVar5;
            }
            if (0.0 < fVar22) {
              lVar28 = uVar18 - 0x200;
              lVar24 = uVar18 - 0xa4;
              lVar23 = uVar18 - 0xb4;
              lVar29 = 2;
              fVar22 = (fVar3 - fVar22) / (fVar3 + fVar22);
              fVar5 = fVar22 * fVar22;
              *(float *)(puVar14 + 0x2d) = fVar22;
              *(float *)(puVar14 + 0x2c) = fVar22;
              *(float *)((int)puVar14 + 0x164) = fVar22;
              *(float *)((int)puVar14 + 0x15c) = fVar22;
              fVar22 = fVar5 * fVar5;
              *(float *)(puVar14 + 0x2c) = *(float *)(puVar14 + 0x2c) * fVar5;
              *(float *)((int)puVar14 + 0x164) = *(float *)((int)puVar14 + 0x164) * fVar22;
              *(float *)(puVar14 + 0x2d) = *(float *)(puVar14 + 0x2d) * fVar22 * fVar5;
              do {
                *(float *)((int)lVar28 + 0x15c) = *(float *)((int)lVar28 + 0x14c) * fVar22 * fVar22;
                iVar21 = (int)lVar23;
                lVar23 = lVar23 + 8;
                lVar28 = lVar28 + 8;
                *(float *)((int)lVar24 + 4) = *(float *)(iVar21 + 4) * fVar22 * fVar22;
                lVar24 = lVar24 + 8;
                lVar29 = lVar29 + -1;
              } while (lVar29 != 0);
              lVar29 = 4;
              lVar24 = uVar18 - 0xb4;
              pfVar25 = (float *)&DAT_007358e0;
              lVar28 = lVar26;
              lVar23 = lVar24;
              do {
                fVar22 = *pfVar25;
                fVar5 = pfVar25[1];
                pfVar25 = pfVar25 + 2;
                *(float *)((int)lVar28 + 0x15c) = *(float *)((int)lVar28 + 0x15c) * fVar22;
                lVar28 = lVar28 + 8;
                *(float *)((int)lVar23 + 4) = *(float *)((int)lVar23 + 4) * fVar5;
                lVar23 = lVar23 + 8;
                lVar29 = lVar29 + -1;
              } while (lVar29 != 0);
              lVar28 = 2;
              do {
                iVar21 = (int)lVar26;
                lVar26 = lVar26 + 0x10;
                iVar16 = (int)lVar24;
                lVar24 = lVar24 + 0x10;
                dVar32 = (double)((float)(dVar32 + (double)*(float *)(iVar21 + 0x15c)) +
                                  *(float *)(iVar16 + 4) + *(float *)(iVar16 + 8) +
                                 *(float *)(iVar16 + 0xc));
                lVar28 = lVar28 + -1;
              } while (lVar28 != 0);
              dVar32 = (double)((float)(dVar32 + 0.7853981852531433) * fVar4 + fVar2);
            }
            OrganicDeltAngSpeed
                      (dVar32,(double)(g_FrameTimeSq * 6.2831855),(double)(g_FrameTimeSq * 3.1415927),
                       (double)(g_FrameTime * 11.519173),moby,&DAT_00720000,&DAT_010c5168)
            ;
            pMVar17 = g_MobyInstance;
            fVar4 = g_heroPosition.x;
            fVar2 = pfVar11[0x12];
            *(f32 *)(puVar14 + 0x10) = g_MobyInstance[(int)fVar2].pos.x;
            *(f32 *)((int)puVar14 + 0x84) = pMVar17[(int)fVar2].pos.y;
            fVar22 = pMVar17[(int)fVar2].pos.z;
            *(float *)(puVar14 + 0x11) = fVar22;
            fVar5 = g_heroPosition.y;
            *(f32 *)((int)puVar14 + 0x8c) = pMVar17[(int)fVar2].pos.w;
            *(float *)(puVar14 + 0x12) = fVar4;
            fVar2 = g_heroPosition.z;
            *(float *)((int)puVar14 + 0x94) = fVar5;
            fVar4 = g_heroPosition.w;
            *(float *)(puVar14 + 0x13) = fVar2;
            *(float *)((int)puVar14 + 0x9c) = fVar4;
            *(float *)(puVar14 + 0x11) = (float)((double)fVar22 + dVar31);
            *(float *)(puVar14 + 0x13) = fVar2 + 0.2;
            iVar21 = MB_IsPntInCuboid(&g_heroPosition,(longlong)(int)pfVar11[0x10]);
            if ((iVar21 != 0) &&
               ((iVar21 = CollLine(uVar18 - 400,uVar18 - 0x180,0,moby,0), iVar21 == 0 ||
                (g_CollOutput.pMoby == g_heroMobyPtr)))) {
              M1818_002bc878(moby,uVar27);
              if ((DAT_0096ae10 != 0) &&
                 ((*(short *)(DAT_0096ae10 + 0xa6) == 0x1b1 &&
                  (*(char *)(DAT_0096ae10 + 0x20) != -3 && *(char *)(DAT_0096ae10 + 0x20) != -2))))
              {
                *(undefined1 *)(DAT_0096ae10 + 0x20) = 1;
              }
              DAT_010c51a4 = moby;
              TransitionMovement(0x1f,0);
              Hero_TransAnim((float)(longlong)(animationSpeed * 6.5),0,0);
              if (pfVar11[0x12] == -NAN) {
                moby->drawDistance = 0xff;
                if (moby->animationId != '\0') {
                  puVar14[0x38] = (longlong)(int)(animationSpeed * 10.5);
                  MB_SetAnimation(moby,0,0,*(undefined4 *)((int)puVar14 + 0x1c4));
                }
                moby->state = '\x03';
              }
              else {
                g_MobyInstance[(int)pfVar11[0x12]].setByGroup = '\x05';
                moby->state = '\x02';
              }
            }
          }
        }
      }
      else if (bVar1 == 0) {
        *(undefined1 *)pfVar11 = 0;
        *(undefined1 *)((int)pfVar11 + 1) = 0;
        *(undefined1 *)((int)pfVar11 + 2) = 0;
        *(undefined1 *)((int)pfVar11 + 3) = 0;
        *(undefined1 *)(pfVar11 + 1) = 0;
        *(undefined1 *)((int)pfVar11 + 5) = 0;
        *(undefined1 *)((int)pfVar11 + 6) = 0;
        *(undefined1 *)((int)pfVar11 + 7) = 0;
        *(undefined1 *)(pfVar11 + 2) = 0;
        *(undefined1 *)((int)pfVar11 + 9) = 0;
        *(undefined1 *)((int)pfVar11 + 10) = 0;
        *(undefined1 *)((int)pfVar11 + 0xb) = 0;
        *(undefined1 *)(pfVar11 + 3) = 0;
        *(undefined1 *)((int)pfVar11 + 0xd) = 0;
        *(undefined1 *)((int)pfVar11 + 0xe) = 0;
        *(undefined1 *)((int)pfVar11 + 0xf) = 0;
        *(undefined1 *)(pfVar11 + 4) = 0;
        *(undefined1 *)((int)pfVar11 + 0x11) = 0;
        *(undefined1 *)((int)pfVar11 + 0x12) = 0;
        *(undefined1 *)((int)pfVar11 + 0x13) = 0;
        *(undefined1 *)(pfVar11 + 5) = 0;
        *(undefined1 *)((int)pfVar11 + 0x15) = 0;
        *(undefined1 *)((int)pfVar11 + 0x16) = 0;
        *(undefined1 *)((int)pfVar11 + 0x17) = 0;
        *(undefined1 *)(pfVar11 + 6) = 0;
        *(undefined1 *)((int)pfVar11 + 0x19) = 0;
        *(undefined1 *)((int)pfVar11 + 0x1a) = 0;
        *(undefined1 *)((int)pfVar11 + 0x1b) = 0;
        *(undefined1 *)(pfVar11 + 7) = 0;
        *(undefined1 *)((int)pfVar11 + 0x1d) = 0;
        *(undefined1 *)((int)pfVar11 + 0x1e) = 0;
        *(undefined1 *)((int)pfVar11 + 0x1f) = 0;
        *(undefined2 *)(pfVar11 + 0x14) = 0;
        *(undefined2 *)((int)pfVar11 + 0x52) = 0;
        if (moby->animationId != '\0') {
          puVar14[0x38] = (longlong)(int)(animationSpeed * 10.5);
          MB_SetAnimation(moby,0,0,*(undefined4 *)((int)puVar14 + 0x1c4));
        }
        moby->updateDistance = -1;
        moby->drawDistance = 0xff;
        pMVar17 = g_MobyInstance;
        fVar22 = pfVar11[0x12];
        if (fVar22 == -NAN) {
          printf("no start house! killing mouse\n");
          DeleteMoby(moby);
          return;
        }
        fVar2 = g_MobyInstance[(int)fVar22].pos.x;
        (moby->pos).x = fVar2;
        (moby->pos).y = pMVar17[(int)fVar22].pos.y;
        fVar4 = pMVar17[(int)fVar22].pos.z;
        (moby->pos).z = fVar4;
        (moby->pos).w = pMVar17[(int)fVar22].pos.w;
        uVar9 = moby->uid;
        (moby->pos).z = fVar4 + 0.02;
        if (((&g_Checkpoint.objState[0])[(short)uVar9] != '\0') ||
           ((*(uint *)(&g_LevelObjBits +
                      Level * 0x100 + (int)((longlong)((int)(short)uVar9 >> 5) << 2)) &
            1 << (uVar9 & 0x1f)) != 0)) {
          printf("mouse already completed\n");
          DeleteMoby(moby);
          return;
        }
        pfVar11[8] = fVar2;
        pfVar11[9] = (moby->pos).y;
        pfVar11[10] = (moby->pos).z;
        pfVar11[0xb] = (moby->pos).w;
        pfVar11[0xc] = (moby->pos).x;
        pfVar11[0xd] = (moby->pos).y;
        pfVar11[0xe] = (moby->pos).z;
        pfVar11[0xf] = (moby->pos).w;
        MB_InitDefaultParams((float *)&DAT_010c5154);
        DAT_010c515c = 0x3e19999a;
        DAT_010c5160 = 0x3e19999a;
        DAT_010c5168 = DAT_0071f408 * 0.4;
        DAT_010c518c = DAT_010c518c | 8;
        auVar33 = ZEXT416(0xffffffff);
        auVar33 = auVar33 | auVar33 << 0x20 | auVar33 << 0x40 | auVar33 << 0x60;
        DAT_010c5164 = DAT_0071f408 * 0.01;
        auVar34 = vectorShiftLeftIntegerWord(auVar33,auVar33);
        DAT_010c5178 = g_FrameTime * 2.7;
        DAT_010c5154 = 500;
        DAT_010c5158 = 0x3e99999a;
        DAT_010c5184 = 0x3ba3d70a;
        DAT_010c5190 = g_FrameTimeSq * 6.2831855;
        auVar35 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
        DAT_010c5194 = g_FrameTimeSq * 3.1415927;
        DAT_010c5198 = g_FrameTime * 11.519173;
        auVar33 = loadVectorLeftIndexed(0x28,0x2beafc);
        auVar33 = auVar33 >> 0x60 & (GPiece<16>)0xffffffff;
        auVar33 = vectorMultiplyAddFloatingPoint
                            (auVar35,auVar33 | auVar33 << 0x20 | auVar33 << 0x40 | auVar33 << 0x60,
                             auVar34);
        auVar33 = vectorConvertToSignedFixedPointWordSaturate(auVar33,0);
        auVar33 = auVar33 >> 0x60 & (GPiece<16>)0xffffffff;
        DAT_010c519c = storeVectorElementWordIndexed
                                 (auVar33 | auVar33 << 0x20 | auVar33 << 0x40 | auVar33 << 0x60,0x48
                                  ,0x10c5154);
        DAT_010c517c = 0x40490fdb;
        DAT_010c5170 = DAT_010c5164;
        moby->state = '\x01';
        moby->drawDistance = 0;
      }
      if ((1 < moby->state) && (MB_RegisterLameShadow(0.3,moby), moby->enabled != '\0')) {
        *(undefined4 *)(puVar14 + 0x1a) = 0;
        *(undefined4 *)((int)puVar14 + 0xd4) = 0;
        *(undefined4 *)(puVar14 + 0x1b) = 0;
        *(undefined4 *)((int)puVar14 + 0xdc) = 0;
        dVar31 = (double)MB_randRangeFloat(1.0,2.0);
        lVar28 = uVar18 - 0x150;
        *(float *)(puVar14 + 0x1b) = -(float)(dVar31 * (double)g_FrameTime);
        GetBonePosition(moby,0,lVar28);
        lVar26 = uVar18 - 0x140;
        SpawnPart_74(moby,lVar28,lVar26,&DAT_007b7e5c,1);
        SpawnPart_74(moby,lVar28,lVar26,&DAT_007b7e6c,1);
        SpawnPart_74(moby,lVar28,lVar26,&DAT_007b7e7c,1);
      }
      fVar22 = pfVar11[0x12];
      if (fVar22 != -NAN) {
        g_MobyInstance[(int)fVar22].collision = (g_MobyInstance[(int)fVar22].pClass)->collision;
      }
    }
  }
  return;
}


