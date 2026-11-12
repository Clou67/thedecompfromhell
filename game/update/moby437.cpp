// game/update/moby437.cpp -- reconstructed from NPEA00385 EBOOT
// STATUS: NOT STARTED (raw Ghidra output)
// 9 functions, 0x375fd0-0x37a288
#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include "game/update/moby437.h"
#include "game/collproc.h"
#include "game/freeze.h"
#include "game/hero.h"
#include "game/mobyfunc.h"
#include "game/mobyutil.h"
#include "game/partupd.h"
#include "game/path.h"
#include "game/respawn.h"
#include "game/update/moby1633.h"
#include "game/update/moby1818.h"
#include "idol/fastfunc.h"

// 0x0375fd0 (0x14 bytes)
void M437_00375fd0(void)

{
  DAT_0084184c = 0x10000;
  return;
}


// 0x0375ff8 (0xd8 bytes)
void M437_00375ff8(undefined8 param_1,float *param_2)

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


// 0x03760e8 (0x1bc bytes)
// inlined: FastRSqrt @0x3761a0
void M437_003760e8(undefined8 param_1,float *param_2)

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
  double dVar13;
  
  fVar1 = (g_heroMobyPtr->transform).v1.y;
  fVar2 = (g_heroMobyPtr->transform).v1.x;
  fVar3 = (g_heroMobyPtr->transform).v1.z;
  fVar9 = 0.0;
  fVar4 = (g_heroMobyPtr->transform).v2.x;
  fVar5 = (g_heroMobyPtr->transform).v2.y;
  fVar6 = (g_heroMobyPtr->transform).v2.z;
  fVar8 = SQRT(fVar3 * fVar3 + fVar2 * fVar2 + fVar1 * fVar1);
  if (fVar8 == 0.0) {
    fVar7 = (g_heroMobyPtr->transform).v1.w;
    fVar3 = fVar9;
    fVar1 = fVar9;
    fVar2 = fVar9;
  }
  else {
    fVar8 = 1.1 / fVar8;
    fVar7 = (g_heroMobyPtr->transform).v1.w;
    fVar2 = fVar2 * fVar8;
    fVar1 = fVar1 * fVar8;
    fVar3 = fVar3 * fVar8;
  }
  fVar11 = fVar6 * fVar6 + fVar4 * fVar4 + fVar5 * fVar5;
  fVar8 = fVar9;
  fVar10 = fVar9;
  if (SQRT(fVar11) != 0.0) {
    fVar9 = 1.0 / SQRT(fVar11);
    fVar9 = -(fVar11 * fVar9 * fVar9 - 1.0) * fVar9 * 0.5 + fVar9;
    fVar9 = -(fVar11 * fVar9 * fVar9 - 1.0) * fVar9 * 0.5 + fVar9;
    fVar9 = -(fVar11 * fVar9 * fVar9 - 1.0) * fVar9 * 0.5 + fVar9;
    fVar10 = fVar4 * fVar9;
    fVar8 = fVar5 * fVar9;
    fVar9 = fVar6 * fVar9;
  }
  param_2[3] = fVar7;
  *param_2 = fVar2 + fVar10;
  param_2[1] = fVar1 + fVar8;
  param_2[2] = fVar3 + fVar9;
  *param_2 = fVar2 + fVar10 + g_heroPosition.x;
  param_2[1] = fVar1 + fVar8 + g_heroPosition.y;
  fVar1 = fVar3 + fVar9 + g_heroPosition.z;
  if (param_2[0x1a] == 0.0) {
    dVar13 = (double)DAT_010c515c;
    param_2[2] = fVar1;
    iVar12 = CollLineValidate
                       (dVar13,0x4000000000000000,param_2,&DAT_003760d0,&DAT_010c5154,param_1,0);
    if (iVar12 != 0) {
      param_2[2] = g_CollOutput.ip.z;
    }
  }
  else {
    param_2[2] = fVar1 + 1.0;
  }
  return;
}


// 0x03762b8 (0x26c bytes)
// inlined: FastAtan2 @0x3763e8
undefined8 M437_003762b8(undefined8 param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  ulonglong *puVar9;
  float fVar10;
  int iVar11;
  ulonglong uVar12;
  int iVar15;
  ulonglong uVar13;
  longlong lVar14;
  longlong lVar16;
  longlong lVar17;
  longlong lVar18;
  float *pfVar19;
  ulonglong in_LR;
  longlong lVar20;
  
  uVar12 = ZEXT48(&stack0x00000000);
  lVar14 = uVar12 - 0xc0;
  puVar9 = (ulonglong *)lVar14;
  *puVar9 = uVar12;
  puVar9[0x1a] = in_LR;
  uVar1 = *param_2;
  *(undefined4 *)(puVar9 + 0xe) = uVar1;
  uVar2 = param_2[1];
  *(undefined4 *)((int)puVar9 + 0x74) = uVar2;
  uVar3 = param_2[3];
  fVar4 = (float)param_2[2];
  *(undefined4 *)((int)puVar9 + 0x7c) = uVar3;
  *(undefined4 *)(puVar9 + 0x10) = uVar1;
  *(undefined4 *)((int)puVar9 + 0x84) = uVar2;
  *(undefined4 *)((int)puVar9 + 0x8c) = uVar3;
  *(float *)(puVar9 + 0xf) = fVar4 + 1.0;
  *(float *)(puVar9 + 0x11) = fVar4 - 1.0;
  iVar15 = CollLine(uVar12 - 0x50,uVar12 - 0x40,2,param_1,0);
  fVar4 = g_CollOutput.normal.z;
  if (iVar15 != 0) {
    fVar7 = ABS(g_CollOutput.normal.z);
    fVar5 = SQRT(g_CollOutput.normal.x * g_CollOutput.normal.x +
                 g_CollOutput.normal.y * g_CollOutput.normal.y);
    fVar6 = ABS(fVar5);
    *(float *)(puVar9 + 0x12) = fVar5;
    *(float *)((int)puVar9 + 0x94) = fVar7 - fVar6;
    fVar5 = 0.0;
    uVar13 = (ulonglong)((uint)fVar4 >> 0x1c) & 8 |
             (ulonglong)(*(uint *)((int)puVar9 + 0x94) >> 0x1e) & 2 |
             (ulonglong)(*(uint *)(puVar9 + 0x12) >> 0x1d) & 4;
    fVar4 = fVar7;
    if (*(float *)((int)puVar9 + 0x94) - 0.0 < 0.0) {
      fVar4 = fVar6;
    }
    fVar8 = *(float *)(&g_atanQuadrantTable + (int)(uVar13 << 2));
    fVar6 = *(float *)(((uint)(uVar13 << 2) | 0x735900) + 4);
    fVar10 = ABS(*(float *)(puVar9 + 0x12));
    if (*(float *)((int)puVar9 + 0x94) - 0.0 < 0.0) {
      fVar10 = fVar7;
    }
    if (0.0 < fVar4) {
      lVar18 = uVar12 - 0xb0;
      lVar16 = uVar12 - 0x18;
      lVar17 = uVar12 - 0x28;
      lVar20 = 2;
      fVar4 = (fVar10 - fVar4) / (fVar10 + fVar4);
      fVar7 = fVar4 * fVar4;
      *(float *)((int)puVar9 + 0xa4) = fVar4;
      *(float *)((int)puVar9 + 0x9c) = fVar4;
      *(float *)(puVar9 + 0x14) = fVar4;
      *(float *)(puVar9 + 0x13) = fVar4;
      fVar4 = fVar7 * fVar7;
      *(float *)((int)puVar9 + 0x9c) = *(float *)((int)puVar9 + 0x9c) * fVar7;
      *(float *)(puVar9 + 0x14) = *(float *)(puVar9 + 0x14) * fVar4;
      *(float *)((int)puVar9 + 0xa4) = *(float *)((int)puVar9 + 0xa4) * fVar4 * fVar7;
      do {
        *(float *)((int)lVar18 + 0x98) = *(float *)((int)lVar18 + 0x88) * fVar4 * fVar4;
        iVar15 = (int)lVar17;
        lVar17 = lVar17 + 8;
        lVar18 = lVar18 + 8;
        *(float *)((int)lVar16 + 4) = *(float *)(iVar15 + 4) * fVar4 * fVar4;
        lVar16 = lVar16 + 8;
        lVar20 = lVar20 + -1;
      } while (lVar20 != 0);
      lVar18 = uVar12 - 0x28;
      lVar20 = 4;
      pfVar19 = (float *)&DAT_007358e0;
      lVar16 = lVar18;
      lVar17 = lVar14;
      do {
        fVar4 = *pfVar19;
        fVar7 = pfVar19[1];
        pfVar19 = pfVar19 + 2;
        *(float *)((int)lVar17 + 0x98) = *(float *)((int)lVar17 + 0x98) * fVar4;
        lVar17 = lVar17 + 8;
        *(float *)((int)lVar16 + 4) = *(float *)((int)lVar16 + 4) * fVar7;
        lVar16 = lVar16 + 8;
        lVar20 = lVar20 + -1;
      } while (lVar20 != 0);
      lVar16 = 2;
      do {
        iVar15 = (int)lVar14;
        iVar11 = (int)lVar18;
        lVar14 = lVar14 + 0x10;
        lVar18 = lVar18 + 0x10;
        fVar5 = fVar5 + *(float *)(iVar15 + 0x98) + *(float *)(iVar11 + 4) + *(float *)(iVar11 + 8)
                + *(float *)(iVar11 + 0xc);
        lVar16 = lVar16 + -1;
      } while (lVar16 != 0);
      fVar5 = (fVar5 + 0.7853982) * fVar8 + fVar6;
    }
    if (fVar5 < 0.5) {
      return 1;
    }
  }
  return 0;
}


// 0x0376538 (0x98 bytes)
void M437_00376538(undefined8 param_1,int param_2)

{
  undefined4 uVar1;
  
  *(float *)(param_2 + 0x18) = -(DAT_0071f418 * 29.7 - *(float *)(param_2 + 0x18));
  uVar1 = DAT_010c5154;
  *(float *)(param_2 + 0x10) = *(float *)(param_2 + 0x10) * (DAT_0071f408 * -0.050000012 + 1.0);
  *(float *)(param_2 + 0x14) = *(float *)(param_2 + 0x14) * (DAT_0071f408 * -0.050000012 + 1.0);
  MB_MoveAndCollide2
            (0x3fd3333340000000,(double)DAT_010c5184,param_1,param_2 + 0x10,&DAT_00376524,uVar1,
             &DAT_00720000,0);
  return;
}


// 0x03765e0 (0x648 bytes)
// inlined: FastAtan2 @0x3767fc, FastAtan2 @0x3769d8
// strings: 003765d0: 'Nnk(' (raw)

MobyInstance *
M437_003765e0
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
  ulonglong unaff_r26;
  ulonglong unaff_r27;
  ulonglong unaff_r28;
  MobyInstance *pMVar18;
  ulonglong unaff_r29;
  ulonglong unaff_r30;
  ulonglong unaff_r31;
  ulonglong in_LR;
  longlong lVar19;
  double dVar20;
  double dVar21;
  double dVar22;
  ulonglong in_f21;
  double dVar23;
  ulonglong in_f22;
  ulonglong in_f23;
  double dVar24;
  ulonglong in_f24;
  double dVar25;
  ulonglong in_f25;
  double dVar26;
  ulonglong in_f26;
  ulonglong in_f27;
  ulonglong in_f28;
  ulonglong in_f29;
  ulonglong in_f30;
  ulonglong in_f31;
  
  uVar10 = ZEXT48(&stack0x00000000);
  lVar1 = uVar10 - 0x160;
  puVar7 = (ulonglong *)lVar1;
  *puVar7 = uVar10;
  puVar7[0x2e] = in_LR;
  puVar7[0x21] = in_f21;
  puVar7[0x22] = in_f22;
  puVar7[0x23] = in_f23;
  puVar7[0x24] = in_f24;
  puVar7[0x25] = in_f25;
  puVar7[0x26] = in_f26;
  puVar7[0x27] = in_f27;
  puVar7[0x28] = in_f28;
  puVar7[0x29] = in_f29;
  puVar7[0x2a] = in_f30;
  puVar7[0x2b] = in_f31;
  puVar7[0x1d] = unaff_r28;
  pMVar18 = (MobyInstance *)0x0;
  puVar7[0x20] = unaff_r31;
  puVar7[0x1c] = unaff_r27;
  puVar7[0x1f] = unaff_r30;
  moby = MobyUpdateChainStart;
  puVar7[0x1e] = unaff_r29;
  puVar7[0x1b] = unaff_r26;
  dVar26 = 1000000000.0;
  for (; moby != (MobyInstance *)0x0; moby = (MobyInstance *)moby->pChain) {
    if ((((moby->drawDistance != 0) &&
         (piVar12 = (int *)MB_GetPvarsIfMobyHasThem(moby),
         (moby->modeBits & CAN_BE_AUTO_TARGETED) != NONE)) && (moby->pClass != (MobyClass *)0x0)) &&
       ((((short)moby->pClass->mode_bits == 5 && (piVar12 != (int *)0x0)) &&
        (dVar23 = 0.0, 0 < *piVar12)))) {
      fVar2 = param_8[1];
      fVar5 = fVar2 - (moby->pos).y;
      fVar3 = (moby->pos).x;
      fVar4 = *param_8 - fVar3;
      fVar6 = param_8[2] - (moby->pos).z;
      dVar25 = (double)SQRT(fVar6 * fVar6 + fVar4 * fVar4 + fVar5 * fVar5);
      if (dVar25 < param_3) {
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
        *(float *)((int)puVar7 + 0x94) = fVar6 - fVar4;
        *(float *)(puVar7 + 0xf) = fVar3 + 0.4;
        fVar2 = *(float *)(param_9 + 8);
        dVar24 = 0.7853981852531433;
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
        dVar20 = dVar23;
        if (0.0 < fVar5) {
          lVar11 = uVar10 - 0x150;
          lVar17 = uVar10 - 0x98;
          lVar14 = uVar10 - 0xa8;
          lVar19 = 2;
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
            lVar14 = lVar14 + 8;
            lVar11 = lVar11 + 8;
            *(float *)((int)lVar17 + 4) = *(float *)(iVar13 + 4) * fVar5 * fVar5;
            lVar17 = lVar17 + 8;
            lVar19 = lVar19 + -1;
          } while (lVar19 != 0);
          lVar19 = 4;
          lVar17 = uVar10 - 0xa8;
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
            lVar19 = lVar19 + -1;
          } while (lVar19 != 0);
          lVar14 = 2;
          lVar11 = lVar1;
          do {
            iVar13 = (int)lVar11;
            iVar8 = (int)lVar17;
            lVar11 = lVar11 + 0x10;
            lVar17 = lVar17 + 0x10;
            dVar20 = (double)((float)(dVar20 + (double)*(float *)(iVar13 + 0xb8)) +
                              *(float *)(iVar8 + 4) + *(float *)(iVar8 + 8) +
                             *(float *)(iVar8 + 0xc));
            lVar14 = lVar14 + -1;
          } while (lVar14 != 0);
          dVar20 = (double)((float)(dVar20 + 0.7853981852531433) * fVar3 + fVar4);
        }
        dVar20 = (double)FastSubRots(fVar2,(float)dVar20);
        dVar20 = (double)(float)(dVar20 * dVar20);
        fVar2 = param_8[2];
        fVar3 = *(float *)(param_9 + 4);
        if ((dVar20 < (double)(float)(param_1 * param_1)) ||
           ((dVar25 < param_4 && (dVar20 < (double)(float)(param_5 * param_5))))) {
          *(float *)(puVar7 + 0x10) = (float)dVar25;
          dVar21 = ABS((double)(*(float *)(puVar7 + 0xf) - fVar2));
          *(float *)((int)puVar7 + 0x84) = *(float *)(puVar7 + 0xf) - fVar2;
          *(float *)(puVar7 + 0x11) = (float)(ABS(dVar25) - dVar21);
          uVar16 = (ulonglong)(*(uint *)(puVar7 + 0x10) >> 0x1c) & 8 |
                   (ulonglong)(*(uint *)(puVar7 + 0x11) >> 0x1e) & 2 |
                   (ulonglong)(*(uint *)((int)puVar7 + 0x84) >> 0x1d) & 4;
          dVar22 = ABS((double)*(float *)(puVar7 + 0x10));
          if ((double)*(float *)(puVar7 + 0x11) - dVar23 < 0.0) {
            dVar22 = dVar21;
          }
          fVar2 = *(float *)(&g_atanQuadrantTable + (int)(uVar16 << 2));
          dVar21 = ABS((double)*(float *)((int)puVar7 + 0x84));
          if ((double)*(float *)(puVar7 + 0x11) - dVar23 < 0.0) {
            dVar21 = ABS(dVar25);
          }
          fVar5 = *(float *)(((uint)(uVar16 << 2) | 0x735900) + 4);
          if (dVar23 < dVar22) {
            lVar11 = uVar10 - 0x150;
            lVar14 = uVar10 - 200;
            lVar17 = uVar10 - 0xb8;
            lVar19 = 2;
            fVar4 = (float)(dVar21 - dVar22) / (float)(dVar21 + dVar22);
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
              lVar11 = lVar11 + 8;
              lVar14 = lVar14 + 8;
              *(float *)((int)lVar17 + 4) = *(float *)(iVar13 + 4) * fVar4 * fVar4;
              lVar17 = lVar17 + 8;
              lVar19 = lVar19 + -1;
            } while (lVar19 != 0);
            lVar19 = 4;
            lVar17 = uVar10 - 200;
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
              lVar19 = lVar19 + -1;
            } while (lVar19 != 0);
            lVar14 = 2;
            lVar11 = lVar1;
            do {
              iVar13 = (int)lVar11;
              iVar8 = (int)lVar17;
              lVar11 = lVar11 + 0x10;
              lVar17 = lVar17 + 0x10;
              dVar23 = (double)((float)(dVar23 + (double)*(float *)(iVar13 + 0x98)) +
                                *(float *)(iVar8 + 4) + *(float *)(iVar8 + 8) +
                               *(float *)(iVar8 + 0xc));
              lVar14 = lVar14 + -1;
            } while (lVar14 != 0);
            dVar23 = (double)((float)(dVar23 + dVar24) * fVar2 + fVar5);
          }
          dVar23 = (double)FastSubRots(fVar3,(float)dVar23);
          dVar23 = (double)(float)(dVar23 * dVar23);
          if ((((dVar23 < (double)(float)(param_2 * param_2)) ||
               ((dVar25 < param_4 && (dVar23 < (double)(float)(param_6 * param_6))))) &&
              (fVar2 = param_8[1] - *(float *)((int)puVar7 + 0x74),
              dVar23 = (double)((float)(dVar20 * dVar23) *
                               SQRT(SQRT((param_8[2] - *(float *)(puVar7 + 0xf)) *
                                         (param_8[2] - *(float *)(puVar7 + 0xf)) +
                                         (*param_8 - *(float *)(puVar7 + 0xe)) *
                                         (*param_8 - *(float *)(puVar7 + 0xe)) + fVar2 * fVar2))),
              dVar23 < dVar26)) &&
             ((iVar13 = CollLine(param_8,uVar10 - 0xf0,0,param_7,0), iVar13 == 0 ||
              ((((g_CollOutput.pMoby != (MobyInstance *)0x0 && (g_CollOutput.pMoby != g_heroMobyPtr)) &&
                ((g_CollOutput.pMoby)->pClass != (MobyClass *)0x0)) &&
               ((short)(g_CollOutput.pMoby)->pClass->mode_bits == 5)))))) {
            dVar26 = dVar23;
            pMVar18 = moby;
          }
        }
      }
    }
  }
  return pMVar18;
}


// 0x0376c48 (0xb40 bytes)
// inlined: FastAtan2 @0x376e58, FastAtan2 @0x3770ec, FastAtan2 @0x377298, FastAtan2 @0x377424, FastAtan2 @0x3775a8
void M437_00376c48(longlong param_1,longlong param_2)

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
  undefined2 uVar12;
  undefined4 uVar13;
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
  GPiece<16> auVar42;
  
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
  iVar19 = FastDecTimerS16(param_2 + 0x4e);
  if (iVar19 != 0) {
    *(undefined4 *)((int)puVar14 + 0x8c) = 0;
    *(undefined4 *)(puVar14 + 0x11) = 0;
    *(undefined4 *)((int)puVar14 + 0x84) = 0;
    *(undefined4 *)(puVar14 + 0x10) = 0;
    auVar38 = loadVectorLeftIndexed(0x18,param_1);
    auVar39 = loadVectorLeftIndexed(0x10,param_1);
    auVar40 = loadVectorLeftIndexed(0x1884,0x840000);
    auVar42 = loadVectorLeftIndexed(0x14,param_1);
    auVar41 = vectorAddFloatingPoint(auVar38,auVar40);
    auVar39 = auVar39 >> 0x60 & (GPiece<16>)0xffffffff;
    auVar40 = auVar42 >> 0x60 & (GPiece<16>)0xffffffff;
    auVar38 = auVar38 >> 0x60 & (GPiece<16>)0xffffffff;
    uVar13 = storeVectorElementWordIndexed
                       (auVar39 | auVar39 << 0x20 | auVar39 << 0x40 | auVar39 << 0x60,0x80,lVar18);
    *(undefined4 *)(puVar14 + 0x10) = uVar13;
    uVar13 = storeVectorElementWordIndexed
                       (auVar40 | auVar40 << 0x20 | auVar40 << 0x40 | auVar40 << 0x60,0x84,lVar18);
    *(undefined4 *)((int)puVar14 + 0x84) = uVar13;
    uVar13 = storeVectorElementWordIndexed
                       (auVar38 | auVar38 << 0x20 | auVar38 << 0x40 | auVar38 << 0x60,0x88,lVar18);
    *(undefined4 *)(puVar14 + 0x11) = uVar13;
    fVar1 = DAT_0084187c;
    fVar5 = DAT_00841878;
    auVar39 = auVar41 >> 0x60 & (GPiece<16>)0xffffffff;
    uVar13 = storeVectorElementWordIndexed
                       (auVar39 | auVar39 << 0x20 | auVar39 << 0x40 | auVar39 << 0x60,0x88,lVar18);
    *(undefined4 *)(puVar14 + 0x11) = uVar13;
    moby = (MobyInstance *)
           M437_003765e0((double)(fVar5 * 0.017453292),(double)(fVar1 * 0.017453292),
                         (double)DAT_00841874,0x4000000000000000,0x400921fb60000000,
                         0x400921fb60000000,param_1,uVar16 - 0x170,param_1 + 0x40);
    iVar19 = (int)param_2;
    if (moby == (MobyInstance *)0x0) {
      *(undefined4 *)(iVar19 + 0x68) = 0;
    }
    else {
      *(MobyInstance **)(iVar19 + 0x68) = moby;
      iVar20 = (int)param_1;
      if (g_heroPosition.z + 1.1 < *(float *)(iVar20 + 0x18)) {
        fVar5 = (moby->pos).x - *(float *)(iVar20 + 0x10);
        fVar1 = (moby->pos).y - *(float *)(iVar20 + 0x14);
        fVar6 = ABS(fVar5);
        fVar11 = ABS(fVar1);
        *(float *)(puVar14 + 0x18) = fVar5;
        *(float *)((int)puVar14 + 0xc4) = fVar1;
        fVar5 = *(float *)(iVar20 + 0x48);
        *(float *)(puVar14 + 0x19) = fVar6 - fVar11;
        dVar34 = 0.0;
        dVar35 = 0.7853981852531433;
        uVar24 = (ulonglong)(*(uint *)(puVar14 + 0x18) >> 0x1c) & 8 |
                 (ulonglong)(*(uint *)(puVar14 + 0x19) >> 0x1e) & 2 |
                 (ulonglong)(*(uint *)((int)puVar14 + 0xc4) >> 0x1d) & 4;
        fVar1 = ABS(*(float *)(puVar14 + 0x18));
        if (*(float *)(puVar14 + 0x19) - 0.0 < 0.0) {
          fVar1 = fVar11;
        }
        fVar11 = *(float *)(&g_atanQuadrantTable + (int)(uVar24 << 2));
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
          dVar27 = (double)((float)(dVar27 + 0.7853981852531433) * fVar11 + fVar6);
        }
        dVar27 = (double)FastSubRots(fVar5,(float)dVar27);
        if ((dVar27 < 0.5235987901687622) && (g_gameMode != GAME_MODE_SCENE)) {
          dVar37 = (double)(moby->pos).x;
          dVar36 = (double)(moby->pos).y;
          dVar27 = (double)(moby->pos).z;
          iVar20 = MB_GetPvarsIfMobyHasThem(moby);
          uVar13 = *(undefined4 *)((int)puVar14 + 0x8c);
          if (iVar20 == 0) {
            dVar33 = (double)DAT_00841884;
            dVar28 = dVar27;
          }
          else {
            dVar28 = (double)*(float *)(iVar20 + 0x10);
            dVar33 = dVar27;
          }
          fVar1 = (float)(dVar36 - (double)*(float *)((int)puVar14 + 0x84));
          fVar11 = (float)(dVar37 - (double)*(float *)(puVar14 + 0x10));
          fVar6 = (float)((double)(float)(dVar33 + dVar28) - (double)*(float *)(puVar14 + 0x11));
          dVar30 = (double)SQRT(fVar6 * fVar6 + fVar11 * fVar11 + fVar1 * fVar1);
          fVar5 = (float)((double)DAT_00841880 / dVar30);
          dVar27 = dVar34;
          if (dVar34 - dVar30 < 0.0) {
            dVar27 = (double)(fVar1 * fVar5);
          }
          dVar29 = dVar34;
          if (dVar34 - dVar30 < 0.0) {
            dVar29 = (double)(fVar11 * fVar5);
          }
          if (dVar30 - dVar34 < 0.0) {
            dVar27 = (double)(fVar1 * fVar5);
          }
          if (dVar30 - dVar34 < 0.0) {
            dVar29 = (double)(fVar11 * fVar5);
          }
          fVar1 = (float)((double)*(float *)((int)puVar14 + 0x84) + dVar27);
          fVar11 = (float)((double)*(float *)(puVar14 + 0x10) + dVar29);
          dVar27 = dVar34;
          if (dVar34 - dVar30 < 0.0) {
            dVar27 = (double)(fVar6 * fVar5);
          }
          fVar2 = (float)(dVar36 - (double)fVar1);
          fVar3 = (float)(dVar37 - (double)fVar11);
          if (dVar30 - dVar34 < 0.0) {
            dVar27 = (double)(fVar6 * fVar5);
          }
          dVar29 = ABS((double)fVar2);
          dVar30 = ABS((double)fVar3);
          fVar5 = (float)((double)*(float *)(puVar14 + 0x11) + dVar27);
          *(float *)((int)puVar14 + 0xb4) = fVar3;
          *(float *)(puVar14 + 0x17) = fVar2;
          *(float *)(puVar14 + 0x10) = fVar11;
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
          fVar7 = *(float *)(((uint)(uVar24 << 2) | 0x735900) + 4);
          dVar31 = dVar34;
          if (dVar34 < dVar27) {
            lVar17 = uVar16 - 0x1e0;
            lVar22 = uVar16 - 0xc4;
            lVar25 = uVar16 - 0xb4;
            lVar26 = 2;
            fVar4 = (float)(dVar32 - dVar27) / (float)(dVar32 + dVar27);
            fVar8 = fVar4 * fVar4;
            *(float *)(puVar14 + 0x27) = fVar4;
            *(float *)(puVar14 + 0x26) = fVar4;
            *(float *)((int)puVar14 + 0x134) = fVar4;
            *(float *)((int)puVar14 + 300) = fVar4;
            fVar4 = fVar8 * fVar8;
            *(float *)(puVar14 + 0x26) = *(float *)(puVar14 + 0x26) * fVar8;
            *(float *)((int)puVar14 + 0x134) = *(float *)((int)puVar14 + 0x134) * fVar4;
            *(float *)(puVar14 + 0x27) = *(float *)(puVar14 + 0x27) * fVar4 * fVar8;
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
              fVar8 = pfVar23[1];
              pfVar23 = pfVar23 + 2;
              *(float *)((int)lVar17 + 300) = *(float *)((int)lVar17 + 300) * fVar4;
              lVar17 = lVar17 + 8;
              *(float *)((int)lVar22 + 4) = *(float *)((int)lVar22 + 4) * fVar8;
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
            dVar31 = (double)((float)(dVar27 + dVar35) * fVar6 + fVar7);
          }
          fVar6 = (float)((double)fVar1 - dVar36);
          fVar7 = (float)((double)fVar11 - dVar37);
          fVar4 = (float)((double)(float)(dVar33 + dVar28) - (double)fVar5);
          *(float *)((int)puVar14 + 0xac) = fVar4;
          dVar37 = ABS((double)fVar4);
          fVar6 = SQRT(fVar7 * fVar7 + fVar6 * fVar6);
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
          fVar7 = *(float *)(&g_atanQuadrantTable + (int)(uVar24 << 2));
          dVar28 = ABS((double)*(float *)((int)puVar14 + 0xac));
          if ((double)*(float *)(puVar14 + 0x16) - dVar34 < 0.0) {
            dVar28 = dVar36;
          }
          fVar8 = *(float *)(((uint)(uVar24 << 2) | 0x735900) + 4);
          dVar33 = dVar34;
          if (dVar34 < dVar27) {
            lVar17 = uVar16 - 0x1e0;
            lVar25 = uVar16 - 0xd4;
            lVar22 = uVar16 - 0xe4;
            lVar26 = 2;
            fVar9 = (float)(dVar28 - dVar27) / (float)(dVar28 + dVar27);
            fVar10 = fVar9 * fVar9;
            *(float *)(puVar14 + 0x23) = fVar9;
            *(float *)(puVar14 + 0x22) = fVar9;
            *(float *)((int)puVar14 + 0x114) = fVar9;
            *(float *)((int)puVar14 + 0x10c) = fVar9;
            fVar9 = fVar10 * fVar10;
            *(float *)(puVar14 + 0x22) = *(float *)(puVar14 + 0x22) * fVar10;
            *(float *)((int)puVar14 + 0x114) = *(float *)((int)puVar14 + 0x114) * fVar9;
            *(float *)(puVar14 + 0x23) = *(float *)(puVar14 + 0x23) * fVar9 * fVar10;
            do {
              *(float *)((int)lVar17 + 0x10c) = *(float *)((int)lVar17 + 0xfc) * fVar9 * fVar9;
              iVar20 = (int)lVar22;
              lVar22 = lVar22 + 8;
              lVar17 = lVar17 + 8;
              *(float *)((int)lVar25 + 4) = *(float *)(iVar20 + 4) * fVar9 * fVar9;
              lVar25 = lVar25 + 8;
              lVar26 = lVar26 + -1;
            } while (lVar26 != 0);
            lVar26 = 4;
            lVar25 = uVar16 - 0xe4;
            pfVar23 = (float *)&DAT_007358e0;
            lVar17 = lVar18;
            lVar22 = lVar25;
            do {
              fVar9 = *pfVar23;
              fVar10 = pfVar23[1];
              pfVar23 = pfVar23 + 2;
              *(float *)((int)lVar17 + 0x10c) = *(float *)((int)lVar17 + 0x10c) * fVar9;
              lVar17 = lVar17 + 8;
              *(float *)((int)lVar22 + 4) = *(float *)((int)lVar22 + 4) * fVar10;
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
            dVar33 = (double)((float)(dVar27 + dVar35) * fVar7 + fVar8);
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
            fVar7 = (float)(dVar28 - dVar27) / (float)(dVar28 + dVar27);
            fVar8 = fVar7 * fVar7;
            *(float *)(puVar14 + 0x1f) = fVar7;
            *(float *)(puVar14 + 0x1e) = fVar7;
            *(float *)((int)puVar14 + 0xf4) = fVar7;
            *(float *)((int)puVar14 + 0xec) = fVar7;
            fVar7 = fVar8 * fVar8;
            *(float *)(puVar14 + 0x1e) = *(float *)(puVar14 + 0x1e) * fVar8;
            *(float *)((int)puVar14 + 0xf4) = *(float *)((int)puVar14 + 0xf4) * fVar7;
            *(float *)(puVar14 + 0x1f) = *(float *)(puVar14 + 0x1f) * fVar7 * fVar8;
            do {
              *(float *)((int)lVar17 + 0xec) = *(float *)((int)lVar17 + 0xdc) * fVar7 * fVar7;
              iVar20 = (int)lVar22;
              lVar17 = lVar17 + 8;
              lVar22 = lVar22 + 8;
              *(float *)((int)lVar25 + 4) = *(float *)(iVar20 + 4) * fVar7 * fVar7;
              lVar25 = lVar25 + 8;
              lVar26 = lVar26 + -1;
            } while (lVar26 != 0);
            lVar26 = 4;
            lVar25 = uVar16 - 0x104;
            pfVar23 = (float *)&DAT_007358e0;
            lVar17 = lVar18;
            lVar22 = lVar25;
            do {
              fVar7 = *pfVar23;
              fVar8 = pfVar23[1];
              pfVar23 = pfVar23 + 2;
              *(float *)((int)lVar17 + 0xec) = *(float *)((int)lVar17 + 0xec) * fVar7;
              lVar17 = lVar17 + 8;
              *(float *)((int)lVar22 + 4) = *(float *)((int)lVar22 + 4) * fVar8;
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
            fVar7 = fVar3 * fVar3;
            *(float *)(puVar14 + 0x1b) = fVar3;
            *(float *)(puVar14 + 0x1a) = fVar3;
            *(float *)((int)puVar14 + 0xd4) = fVar3;
            *(float *)((int)puVar14 + 0xcc) = fVar3;
            fVar3 = fVar7 * fVar7;
            *(float *)(puVar14 + 0x1a) = *(float *)(puVar14 + 0x1a) * fVar7;
            *(float *)((int)puVar14 + 0xd4) = *(float *)((int)puVar14 + 0xd4) * fVar3;
            *(float *)(puVar14 + 0x1b) = *(float *)(puVar14 + 0x1b) * fVar3 * fVar7;
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
          *(float *)(puVar14 + 8) = fVar11;
          *(float *)(puVar14 + 9) = fVar5;
          *(float *)((int)puVar14 + 0x44) = fVar1;
          *(undefined4 *)((int)puVar14 + 0x4c) = uVar13;
          M1633_002a5158(dVar31,-dVar33,dVar30,-dVar34,param_1,uVar21,puVar14[8],puVar14[9]);
          auVar39 = ZEXT416(0xffffffff);
          auVar39 = auVar39 | auVar39 << 0x20 | auVar39 << 0x40 | auVar39 << 0x60;
          auVar38 = vectorShiftLeftIntegerWord(auVar39,auVar39);
          auVar39 = loadVectorLeftIndexed(0x1870,0x840000);
          auVar40 = vectorConvertFromSignedFixedPointWord(auVar39,0);
          auVar39 = loadVectorLeftIndexed(0x1c,0x376c28);
          auVar39 = auVar39 >> 0x60 & (GPiece<16>)0xffffffff;
          auVar41 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
          auVar39 = vectorAddFloatingPoint
                              (auVar40,auVar39 | auVar39 << 0x20 | auVar39 << 0x40 | auVar39 << 0x60
                              );
          auVar39 = vectorMultiplyAddFloatingPoint(auVar41,auVar39,auVar38);
          auVar39 = vectorConvertToSignedFixedPointWordSaturate(auVar39,0);
          auVar39 = vectorSplatHalfWord(auVar39,1);
          uVar12 = storeVectorElementHalfWordIndexed(auVar39,0x4e,param_2);
          *(undefined2 *)(iVar19 + 0x4e) = uVar12;
          *(int *)(iVar19 + 100) = *(int *)(iVar19 + 100) + 1;
        }
      }
    }
  }
  return;
}


// 0x03777f8 (0xf24 bytes)
// inlined: FastAtan2 @0x377964, FastAtan2 @0x377c74, FastAtan2 @0x377e70, FastAtan2 @0x3784ec
void M437_003777f8(int param_1,float *param_2)

{
  char cVar1;
  byte bVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  ulonglong *puVar7;
  float fVar8;
  float fVar9;
  int iVar10;
  ulonglong uVar11;
  longlong lVar12;
  longlong lVar13;
  int iVar14;
  uint uVar15;
  longlong lVar16;
  float *pfVar17;
  ulonglong uVar18;
  longlong lVar19;
  short sVar20;
  ulonglong unaff_r29;
  ulonglong unaff_r30;
  ulonglong unaff_r31;
  ulonglong in_LR;
  longlong lVar21;
  double dVar22;
  double dVar23;
  double dVar24;
  ulonglong in_f27;
  double dVar25;
  ulonglong in_f28;
  double dVar26;
  ulonglong in_f29;
  double dVar27;
  ulonglong in_f30;
  double dVar28;
  ulonglong in_f31;
  double dVar29;
  
  uVar11 = ZEXT48(&stack0x00000000);
  lVar13 = uVar11 - 0x170;
  puVar7 = (ulonglong *)lVar13;
  *puVar7 = uVar11;
  puVar7[0x30] = in_LR;
  puVar7[0x29] = in_f27;
  puVar7[0x2a] = in_f28;
  puVar7[0x2b] = in_f29;
  puVar7[0x2c] = in_f30;
  puVar7[0x2d] = in_f31;
  fVar3 = *param_2;
  puVar7[0x27] = unaff_r30;
  fVar4 = *(float *)(param_1 + 0x10);
  puVar7[0x28] = unaff_r31;
  fVar5 = *(float *)(param_1 + 0x14);
  fVar3 = fVar3 - fVar4;
  dVar27 = (double)fVar3;
  cVar1 = *(char *)(param_1 + 0x20);
  bVar2 = *(byte *)(param_1 + 0xbc);
  fVar8 = param_2[1] - fVar5;
  dVar26 = (double)fVar8;
  dVar29 = (double)(param_2[2] - *(float *)(param_1 + 0x18));
  puVar7[0x26] = unaff_r29;
  fVar6 = g_heroPosition.x;
  fVar9 = g_heroPosition.y;
  if (cVar1 == '\x06') {
    fVar6 = param_2[0xc];
    fVar9 = param_2[0xd];
  }
  dVar28 = 0.7853981852531433;
  dVar25 = (double)SQRT((fVar4 - fVar6) * (fVar4 - fVar6) + (fVar5 - fVar9) * (fVar5 - fVar9));
  if (bVar2 < 2) {
    if (bVar2 == 0) {
      *(float *)((int)puVar7 + 0x94) = fVar3;
      *(float *)(puVar7 + 0x13) = fVar8;
      *(float *)((int)puVar7 + 0x9c) = (float)(ABS(dVar27) - ABS(dVar26));
      dVar28 = 0.0;
      uVar18 = (ulonglong)(*(uint *)((int)puVar7 + 0x94) >> 0x1c) & 8 |
               (ulonglong)(*(uint *)((int)puVar7 + 0x9c) >> 0x1e) & 2 |
               (ulonglong)(*(uint *)(puVar7 + 0x13) >> 0x1d) & 4;
      dVar29 = ABS((double)*(float *)((int)puVar7 + 0x94));
      if (*(float *)((int)puVar7 + 0x9c) - 0.0 < 0.0) {
        dVar29 = ABS(dVar26);
      }
      fVar4 = *(float *)(&g_atanQuadrantTable + (int)(uVar18 << 2));
      fVar3 = *(float *)(((uint)(uVar18 << 2) | 0x735900) + 4);
      dVar26 = ABS((double)*(float *)(puVar7 + 0x13));
      if (*(float *)((int)puVar7 + 0x9c) - 0.0 < 0.0) {
        dVar26 = ABS(dVar27);
      }
      if (0.0 < dVar29) {
        lVar12 = uVar11 - 0x160;
        lVar16 = uVar11 - 0x70;
        lVar19 = uVar11 - 0x60;
        lVar21 = 2;
        fVar5 = (float)(dVar26 - dVar29) / (float)(dVar26 + dVar29);
        fVar6 = fVar5 * fVar5;
        *(float *)((int)puVar7 + 0x10c) = fVar5;
        *(float *)((int)puVar7 + 0x104) = fVar5;
        *(float *)(puVar7 + 0x21) = fVar5;
        *(float *)(puVar7 + 0x20) = fVar5;
        fVar5 = fVar6 * fVar6;
        *(float *)((int)puVar7 + 0x104) = *(float *)((int)puVar7 + 0x104) * fVar6;
        *(float *)(puVar7 + 0x21) = *(float *)(puVar7 + 0x21) * fVar5;
        *(float *)((int)puVar7 + 0x10c) = *(float *)((int)puVar7 + 0x10c) * fVar5 * fVar6;
        do {
          *(float *)((int)lVar12 + 0x100) = *(float *)((int)lVar12 + 0xf0) * fVar5 * fVar5;
          iVar14 = (int)lVar16;
          lVar12 = lVar12 + 8;
          lVar16 = lVar16 + 8;
          *(float *)((int)lVar19 + 4) = *(float *)(iVar14 + 4) * fVar5 * fVar5;
          lVar19 = lVar19 + 8;
          lVar21 = lVar21 + -1;
        } while (lVar21 != 0);
        lVar21 = 4;
        lVar19 = uVar11 - 0x70;
        pfVar17 = (float *)&DAT_007358e0;
        lVar12 = lVar13;
        lVar16 = lVar19;
        do {
          fVar5 = *pfVar17;
          fVar6 = pfVar17[1];
          pfVar17 = pfVar17 + 2;
          *(float *)((int)lVar12 + 0x100) = *(float *)((int)lVar12 + 0x100) * fVar5;
          lVar12 = lVar12 + 8;
          *(float *)((int)lVar16 + 4) = *(float *)((int)lVar16 + 4) * fVar6;
          lVar16 = lVar16 + 8;
          lVar21 = lVar21 + -1;
        } while (lVar21 != 0);
        lVar12 = 2;
        do {
          iVar14 = (int)lVar13;
          iVar10 = (int)lVar19;
          lVar13 = lVar13 + 0x10;
          lVar19 = lVar19 + 0x10;
          dVar28 = (double)((float)(dVar28 + (double)*(float *)(iVar14 + 0x100)) +
                            *(float *)(iVar10 + 4) + *(float *)(iVar10 + 8) +
                           *(float *)(iVar10 + 0xc));
          lVar12 = lVar12 + -1;
        } while (lVar12 != 0);
        dVar28 = (double)((float)(dVar28 + 0.7853981852531433) * fVar4 + fVar3);
      }
      OrganicDeltAngSpeed
                (dVar28,(double)(DAT_0071f418 * 11.519173),(double)(DAT_0071f418 * 3.1415927),
                 (double)(g_FrameTime * 11.519173),param_1,&DAT_00720000,&DAT_010c5168);
      if ((*(byte *)(param_1 + 0x70) & 2) != 0) {
        *(undefined4 *)(param_1 + 0x58) = 0x3f800000;
        bVar2 = *(byte *)(param_1 + 0x53);
        iVar14 = rand();
        if ((uint)bVar2 != iVar14 % 3) {
          iVar14 = rand();
          puVar7[0x24] = (longlong)(int)(animationSpeed * 20.5);
          MB_SetAnimation(param_1,iVar14 % 3,0,*(undefined4 *)((int)puVar7 + 0x124));
        }
      }
      if (dVar25 <= 1.2999999523162842) {
        return;
      }
      if (*(char *)(param_1 + 0x53) != '\x05') {
        puVar7[0x24] = (longlong)(int)(animationSpeed * 10.5);
        MB_SetAnimation(param_1,5,0,*(undefined4 *)((int)puVar7 + 0x124));
      }
      *(undefined1 *)(param_1 + 0xbc) = 2;
      return;
    }
  }
  else if (bVar2 < 4) {
    fVar6 = param_2[0x1a];
    if (fVar6 == 0.0) {
      *(float *)(puVar7 + 0x11) = fVar3;
      *(float *)((int)puVar7 + 0x8c) = fVar8;
      *(float *)(puVar7 + 0x12) = (float)(ABS(dVar27) - ABS(dVar26));
      dVar23 = 0.0;
      uVar18 = (ulonglong)(*(uint *)(puVar7 + 0x11) >> 0x1c) & 8 |
               (ulonglong)(*(uint *)(puVar7 + 0x12) >> 0x1e) & 2 |
               (ulonglong)(*(uint *)((int)puVar7 + 0x8c) >> 0x1d) & 4;
      dVar24 = ABS((double)*(float *)(puVar7 + 0x11));
      if (*(float *)(puVar7 + 0x12) - 0.0 < 0.0) {
        dVar24 = ABS(dVar26);
      }
      fVar4 = *(float *)(&g_atanQuadrantTable + (int)(uVar18 << 2));
      fVar3 = *(float *)(((uint)(uVar18 << 2) | 0x735900) + 4);
      dVar22 = ABS((double)*(float *)((int)puVar7 + 0x8c));
      if (*(float *)(puVar7 + 0x12) - 0.0 < 0.0) {
        dVar22 = ABS(dVar27);
      }
      if (0.0 < dVar24) {
        lVar12 = uVar11 - 0x160;
        lVar16 = uVar11 - 0x90;
        lVar19 = uVar11 - 0x80;
        lVar21 = 2;
        fVar5 = (float)(dVar22 - dVar24) / (float)(dVar22 + dVar24);
        fVar6 = fVar5 * fVar5;
        *(float *)((int)puVar7 + 0xec) = fVar5;
        *(float *)((int)puVar7 + 0xe4) = fVar5;
        *(float *)(puVar7 + 0x1d) = fVar5;
        *(float *)(puVar7 + 0x1c) = fVar5;
        fVar5 = fVar6 * fVar6;
        *(float *)((int)puVar7 + 0xe4) = *(float *)((int)puVar7 + 0xe4) * fVar6;
        *(float *)(puVar7 + 0x1d) = *(float *)(puVar7 + 0x1d) * fVar5;
        *(float *)((int)puVar7 + 0xec) = *(float *)((int)puVar7 + 0xec) * fVar5 * fVar6;
        do {
          *(float *)((int)lVar12 + 0xe0) = *(float *)((int)lVar12 + 0xd0) * fVar5 * fVar5;
          iVar14 = (int)lVar16;
          lVar12 = lVar12 + 8;
          lVar16 = lVar16 + 8;
          *(float *)((int)lVar19 + 4) = *(float *)(iVar14 + 4) * fVar5 * fVar5;
          lVar19 = lVar19 + 8;
          lVar21 = lVar21 + -1;
        } while (lVar21 != 0);
        lVar21 = 4;
        lVar19 = uVar11 - 0x90;
        pfVar17 = (float *)&DAT_007358e0;
        lVar12 = lVar13;
        lVar16 = lVar19;
        do {
          fVar5 = *pfVar17;
          fVar6 = pfVar17[1];
          pfVar17 = pfVar17 + 2;
          *(float *)((int)lVar12 + 0xe0) = *(float *)((int)lVar12 + 0xe0) * fVar5;
          lVar12 = lVar12 + 8;
          *(float *)((int)lVar16 + 4) = *(float *)((int)lVar16 + 4) * fVar6;
          lVar16 = lVar16 + 8;
          lVar21 = lVar21 + -1;
        } while (lVar21 != 0);
        lVar16 = 2;
        lVar12 = lVar13;
        do {
          iVar14 = (int)lVar12;
          iVar10 = (int)lVar19;
          lVar12 = lVar12 + 0x10;
          lVar19 = lVar19 + 0x10;
          dVar23 = (double)((float)(dVar23 + (double)*(float *)(iVar14 + 0xe0)) +
                            *(float *)(iVar10 + 4) + *(float *)(iVar10 + 8) +
                           *(float *)(iVar10 + 0xc));
          lVar16 = lVar16 + -1;
        } while (lVar16 != 0);
        dVar23 = (double)((float)(dVar23 + 0.7853981852531433) * fVar4 + fVar3);
      }
      OrganicDeltAngSpeed
                (dVar23,(double)(DAT_0071f418 * 11.519173),(double)(DAT_0071f418 * 3.1415927),
                 (double)(g_FrameTime * 11.519173),param_1,&DAT_00720000,&DAT_010c5168);
    }
    else {
      fVar4 = *(float *)((int)fVar6 + 0x10) - fVar4;
      fVar5 = *(float *)((int)fVar6 + 0x14) - fVar5;
      fVar8 = ABS(fVar4);
      fVar6 = ABS(fVar5);
      *(float *)((int)puVar7 + 0x7c) = fVar4;
      *(float *)(puVar7 + 0x10) = fVar5;
      *(float *)((int)puVar7 + 0x84) = fVar8 - fVar6;
      dVar24 = 0.0;
      uVar18 = (ulonglong)(*(uint *)((int)puVar7 + 0x7c) >> 0x1c) & 8 |
               (ulonglong)(*(uint *)((int)puVar7 + 0x84) >> 0x1e) & 2 |
               (ulonglong)(*(uint *)(puVar7 + 0x10) >> 0x1d) & 4;
      fVar3 = ABS(*(float *)((int)puVar7 + 0x7c));
      if (*(float *)((int)puVar7 + 0x84) - 0.0 < 0.0) {
        fVar3 = fVar6;
      }
      fVar5 = *(float *)(&g_atanQuadrantTable + (int)(uVar18 << 2));
      fVar4 = *(float *)(((uint)(uVar18 << 2) | 0x735900) + 4);
      fVar6 = ABS(*(float *)(puVar7 + 0x10));
      if (*(float *)((int)puVar7 + 0x84) - 0.0 < 0.0) {
        fVar6 = fVar8;
      }
      if (0.0 < fVar3) {
        lVar12 = uVar11 - 0x160;
        lVar19 = uVar11 - 0xa0;
        lVar16 = uVar11 - 0xb0;
        lVar21 = 2;
        fVar3 = (fVar6 - fVar3) / (fVar6 + fVar3);
        fVar6 = fVar3 * fVar3;
        *(float *)((int)puVar7 + 0xcc) = fVar3;
        *(float *)((int)puVar7 + 0xc4) = fVar3;
        *(float *)(puVar7 + 0x19) = fVar3;
        *(float *)(puVar7 + 0x18) = fVar3;
        fVar3 = fVar6 * fVar6;
        *(float *)((int)puVar7 + 0xc4) = *(float *)((int)puVar7 + 0xc4) * fVar6;
        *(float *)(puVar7 + 0x19) = *(float *)(puVar7 + 0x19) * fVar3;
        *(float *)((int)puVar7 + 0xcc) = *(float *)((int)puVar7 + 0xcc) * fVar3 * fVar6;
        do {
          *(float *)((int)lVar12 + 0xc0) = *(float *)((int)lVar12 + 0xb0) * fVar3 * fVar3;
          iVar14 = (int)lVar16;
          lVar16 = lVar16 + 8;
          lVar12 = lVar12 + 8;
          *(float *)((int)lVar19 + 4) = *(float *)(iVar14 + 4) * fVar3 * fVar3;
          lVar19 = lVar19 + 8;
          lVar21 = lVar21 + -1;
        } while (lVar21 != 0);
        lVar21 = 4;
        lVar19 = uVar11 - 0xb0;
        pfVar17 = (float *)&DAT_007358e0;
        lVar12 = lVar13;
        lVar16 = lVar19;
        do {
          fVar3 = *pfVar17;
          fVar6 = pfVar17[1];
          pfVar17 = pfVar17 + 2;
          *(float *)((int)lVar12 + 0xc0) = *(float *)((int)lVar12 + 0xc0) * fVar3;
          lVar12 = lVar12 + 8;
          *(float *)((int)lVar16 + 4) = *(float *)((int)lVar16 + 4) * fVar6;
          lVar16 = lVar16 + 8;
          lVar21 = lVar21 + -1;
        } while (lVar21 != 0);
        lVar16 = 2;
        lVar12 = lVar13;
        do {
          iVar14 = (int)lVar12;
          lVar12 = lVar12 + 0x10;
          iVar10 = (int)lVar19;
          lVar19 = lVar19 + 0x10;
          dVar24 = (double)((float)(dVar24 + (double)*(float *)(iVar14 + 0xc0)) +
                            *(float *)(iVar10 + 4) + *(float *)(iVar10 + 8) +
                           *(float *)(iVar10 + 0xc));
          lVar16 = lVar16 + -1;
        } while (lVar16 != 0);
        dVar24 = (double)((float)(dVar24 + 0.7853981852531433) * fVar5 + fVar4);
      }
      OrganicDeltAngSpeed
                (dVar24,(double)(DAT_008418b4 * 0.017453292 * DAT_0071f418),
                 (double)(DAT_008418b8 * 0.017453292 * DAT_0071f418),
                 (double)(DAT_008418bc * 0.017453292 * g_FrameTime),param_1,&DAT_00720000,
                 &DAT_010c5168);
    }
    dVar24 = (double)(DAT_0071f408 * 0.04);
    if (dVar25 <= 1.2999999523162842) {
      fVar3 = 0.25;
    }
    else {
      fVar3 = 0.13;
    }
    dVar23 = (double)(DAT_0071f40c * fVar3);
    fVar3 = (float)((double)(float)(dVar27 * dVar24 - (double)param_2[4]) * dVar23 +
                   (double)param_2[4]);
    fVar4 = (float)((double)(float)(dVar26 * dVar24 - (double)param_2[5]) * dVar23 +
                   (double)param_2[5]);
    fVar5 = (float)((double)(float)((double)(float)(dVar29 * dVar24 - (double)param_2[6]) * dVar23)
                    * (double)(DAT_0071f408 * -0.100000024 + 1.0) + (double)param_2[6]);
    param_2[4] = fVar3;
    param_2[5] = fVar4;
    param_2[6] = fVar5;
    if (*(char *)(param_1 + 0x20) == '\x06') {
      fVar6 = SQRT(fVar5 * fVar5 + fVar3 * fVar3 + fVar4 * fVar4);
      if (g_FrameTime * 2.7 < fVar6) {
        fVar6 = (g_FrameTime * 2.7) / fVar6;
        param_2[4] = fVar3 * fVar6;
        param_2[5] = fVar4 * fVar6;
        param_2[6] = fVar5 * fVar6;
      }
    }
    uVar15 = MB_MoveAndCollide2
                       (0x3ff0000000000000,(double)DAT_010c5184,param_1,param_2 + 4,DAT_010c5154,
                        DAT_010c5154);
    fVar3 = animationSpeed;
    dVar26 = (double)SQRT(param_2[6] * param_2[6] +
                          param_2[4] * param_2[4] + param_2[5] * param_2[5]);
    if (uVar15 == 0) {
      dVar26 = (double)GetGroundZ(0x3fe0000000000000,param_1 + 0x10,0);
      if (DAT_00841890 <= (float)((double)*(float *)(param_1 + 0x18) - dVar26)) {
        if (*(char *)(param_1 + 0x53) != '\x05') {
          puVar7[0x24] = (longlong)(int)(animationSpeed * 7.5);
          MB_SetAnimation(param_1,5,0,*(undefined4 *)((int)puVar7 + 0x124));
        }
        *(undefined2 *)((int)param_2 + 0x4a) = 0;
      }
      else if (*(char *)(param_1 + 0x53) != '\x03') {
        puVar7[0x24] = (longlong)(int)(animationSpeed * 11.5);
        MB_SetAnimation(param_1,3,0,*(undefined4 *)((int)puVar7 + 0x124));
      }
    }
    else {
      dVar27 = 0.004999999888241291;
      if (dVar26 < 0.004999999888241291) {
        sVar20 = *(short *)((int)param_2 + 0x4a) + 1;
        *(short *)((int)param_2 + 0x4a) = sVar20;
        puVar7[0x24] = (longlong)(int)(fVar3 * 20.5);
        if ((*(int *)((int)puVar7 + 0x124) < (int)sVar20) && (*(char *)(param_1 + 0x31) == '\0')) {
          *(float *)(param_1 + 0x10) = *param_2;
          *(float *)(param_1 + 0x14) = param_2[1];
          *(undefined2 *)((int)param_2 + 0x4a) = 0;
          *(float *)(param_1 + 0x18) = param_2[2];
          *(float *)(param_1 + 0x1c) = param_2[3];
        }
      }
      dVar29 = (double)GetGroundZ(0x3fe0000000000000,param_1 + 0x10,0);
      bVar2 = *(byte *)(param_1 + 0x53);
      if (((uVar15 & 2) != 0) ||
         ((float)((double)*(float *)(param_1 + 0x18) - dVar29) < DAT_00841890)) {
        if (dVar27 <= dVar26) {
          if (bVar2 != 3) {
            puVar7[0x24] = (longlong)(int)(animationSpeed * 11.5);
            MB_SetAnimation(param_1,3,0,*(undefined4 *)((int)puVar7 + 0x124));
          }
        }
        else if ((2 < bVar2) && (iVar14 = rand(), (uint)bVar2 != iVar14 % 3)) {
          iVar14 = rand();
          puVar7[0x24] = (longlong)(int)(animationSpeed * 10.5);
          MB_SetAnimation(param_1,iVar14 % 3,0,*(undefined4 *)((int)puVar7 + 0x124));
        }
      }
      else if (bVar2 != 5) {
        puVar7[0x24] = (longlong)(int)(animationSpeed * 7.5);
        MB_SetAnimation(param_1,5,0,*(undefined4 *)((int)puVar7 + 0x124));
      }
    }
    if (*(char *)(param_1 + 0x20) == '\x06') {
      return;
    }
    if (1.100000023841858 <= dVar25) {
      return;
    }
    fVar3 = g_heroPosition.x - *(float *)(param_1 + 0x10);
    fVar4 = g_heroPosition.y - *(float *)(param_1 + 0x14);
    fVar6 = ABS(fVar3);
    fVar5 = ABS(fVar4);
    *(float *)(puVar7 + 0xe) = fVar3;
    *(float *)((int)puVar7 + 0x74) = fVar4;
    *(float *)(puVar7 + 0xf) = fVar6 - fVar5;
    dVar26 = 0.0;
    uVar18 = (ulonglong)(*(uint *)(puVar7 + 0xe) >> 0x1c) & 8 |
             (ulonglong)(*(uint *)(puVar7 + 0xf) >> 0x1e) & 2 |
             (ulonglong)(*(uint *)((int)puVar7 + 0x74) >> 0x1d) & 4;
    fVar3 = ABS(*(float *)(puVar7 + 0xe));
    if (*(float *)(puVar7 + 0xf) - 0.0 < 0.0) {
      fVar3 = fVar5;
    }
    fVar5 = *(float *)(&g_atanQuadrantTable + (int)(uVar18 << 2));
    fVar4 = *(float *)(((uint)(uVar18 << 2) | 0x735900) + 4);
    fVar8 = ABS(*(float *)((int)puVar7 + 0x74));
    if (*(float *)(puVar7 + 0xf) - 0.0 < 0.0) {
      fVar8 = fVar6;
    }
    if (0.0 < fVar3) {
      lVar12 = uVar11 - 0x160;
      lVar16 = uVar11 - 0xd0;
      lVar19 = uVar11 - 0xc0;
      lVar21 = 2;
      fVar3 = (fVar8 - fVar3) / (fVar8 + fVar3);
      fVar6 = fVar3 * fVar3;
      *(float *)((int)puVar7 + 0xac) = fVar3;
      *(float *)((int)puVar7 + 0xa4) = fVar3;
      *(float *)(puVar7 + 0x15) = fVar3;
      *(float *)(puVar7 + 0x14) = fVar3;
      fVar3 = fVar6 * fVar6;
      *(float *)((int)puVar7 + 0xa4) = *(float *)((int)puVar7 + 0xa4) * fVar6;
      *(float *)(puVar7 + 0x15) = *(float *)(puVar7 + 0x15) * fVar3;
      *(float *)((int)puVar7 + 0xac) = *(float *)((int)puVar7 + 0xac) * fVar3 * fVar6;
      do {
        *(float *)((int)lVar12 + 0xa0) = *(float *)((int)lVar12 + 0x90) * fVar3 * fVar3;
        iVar14 = (int)lVar16;
        lVar12 = lVar12 + 8;
        lVar16 = lVar16 + 8;
        *(float *)((int)lVar19 + 4) = *(float *)(iVar14 + 4) * fVar3 * fVar3;
        lVar19 = lVar19 + 8;
        lVar21 = lVar21 + -1;
      } while (lVar21 != 0);
      lVar21 = 4;
      lVar19 = uVar11 - 0xd0;
      pfVar17 = (float *)&DAT_007358e0;
      lVar12 = lVar13;
      lVar16 = lVar19;
      do {
        fVar3 = *pfVar17;
        fVar6 = pfVar17[1];
        pfVar17 = pfVar17 + 2;
        *(float *)((int)lVar12 + 0xa0) = *(float *)((int)lVar12 + 0xa0) * fVar3;
        lVar12 = lVar12 + 8;
        *(float *)((int)lVar16 + 4) = *(float *)((int)lVar16 + 4) * fVar6;
        lVar16 = lVar16 + 8;
        lVar21 = lVar21 + -1;
      } while (lVar21 != 0);
      lVar12 = 2;
      do {
        iVar14 = (int)lVar13;
        iVar10 = (int)lVar19;
        lVar13 = lVar13 + 0x10;
        lVar19 = lVar19 + 0x10;
        dVar26 = (double)((float)(dVar26 + (double)*(float *)(iVar14 + 0xa0)) +
                          *(float *)(iVar10 + 4) + *(float *)(iVar10 + 8) + *(float *)(iVar10 + 0xc)
                         );
        lVar12 = lVar12 + -1;
      } while (lVar12 != 0);
      dVar26 = (double)((float)(dVar26 + dVar28) * fVar5 + fVar4);
    }
    fVar3 = (float)(dVar26 + 1.570796251296997);
    fVar4 = 3.1415925 - fVar3;
    if (fVar3 - (3.1415925 - fVar3) < 0.0) {
      fVar4 = fVar3;
    }
    dVar27 = (double)(float)(3.141592502593994 - dVar26);
    if (dVar26 - (double)(float)(3.141592502593994 - dVar26) < 0.0) {
      dVar27 = dVar26;
    }
    fVar5 = -3.1415925 - fVar3;
    if ((-3.1415925 - fVar3) - fVar4 < 0.0) {
      fVar5 = fVar4;
    }
    dVar29 = (double)(float)(-3.141592502593994 - dVar26);
    if ((double)(float)(-3.141592502593994 - dVar26) - dVar27 < 0.0) {
      dVar29 = dVar27;
    }
    fVar6 = fVar5 * fVar5;
    dVar26 = (double)(float)(dVar29 * dVar29);
    fVar3 = fVar6 * fVar6 * fVar5;
    dVar28 = (double)(float)(dVar26 * (double)(float)(dVar26 * dVar29));
    fVar4 = fVar6 * fVar3;
    dVar27 = (double)(float)(dVar26 * dVar28);
    param_2[4] = -((float)(1.100000023841858 - dVar25) *
                   (fVar6 * fVar4 * 2.601887e-06 +
                   fVar4 * -0.0001980741 +
                   fVar3 * 0.0083330255 + fVar6 * fVar5 * -0.16666657 + fVar5) * DAT_0071f40c * 0.1
                  - param_2[4]);
    param_2[5] = -((float)(1.100000023841858 - dVar25) *
                   ((float)(dVar26 * dVar27) * 2.601887e-06 +
                   (float)(dVar27 * -0.0001980741071747616 +
                          (double)(float)(dVar28 * 0.008333025500178337 +
                                         (double)(float)((double)(float)(dVar26 * dVar29) *
                                                         -0.16666656732559204 + dVar29)))) *
                   DAT_0071f40c * 0.1 - param_2[5]);
    return;
  }
  *(undefined1 *)(param_1 + 0xbc) = 0;
  if (1.2999999523162842 < dVar25) {
    *(undefined1 *)(param_1 + 0xbc) = 2;
  }
  return;
}


// 0x0378778 (0x1b10 bytes)
// inlined: FastAtan2 @0x3788a8, FastAtan2 @0x378a8c, FastAtan2 @0x379248, FastAtan2 @0x379658, FastAtan2 @0x37a030
// strings: 006567f0: 'mouse already completed\n' | 00656810: 'no start house! killing mouse\n'

/* Moby 437 */

void UpdateMoby_437(MobyInstance *moby)

{
  byte bVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  f32 fVar5;
  float fVar6;
  f32 fVar7;
  float fVar8;
  ushort uVar9;
  float *pfVar10;
  float fVar11;
  undefined2 uVar12;
  undefined4 uVar13;
  ulonglong *puVar14;
  float fVar15;
  int iVar16;
  MobyInstance *pMVar17;
  ulonglong uVar18;
  int iVar23;
  longlong lVar19;
  longlong lVar20;
  ulonglong uVar21;
  undefined8 uVar22;
  longlong lVar24;
  float *pfVar26;
  longlong lVar25;
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
  undefined8 uVar29;
  double dVar30;
  double dVar31;
  ulonglong in_f31;
  GPiece<16> auVar32;
  GPiece<16> auVar33;
  GPiece<16> auVar34;
  GPiece<16> auVar35;
  
  uVar21 = ZEXT48(&stack0x00000000);
  lVar20 = uVar21 - 0x210;
  puVar14 = (ulonglong *)lVar20;
  *puVar14 = uVar21;
  puVar14[0x44] = in_LR;
  puVar14[0x41] = in_f31;
  puVar14[0x40] = unaff_r31;
  puVar14[0x3f] = unaff_r30;
  puVar14[0x3e] = unaff_r29;
  puVar14[0x3d] = unaff_r28;
  puVar14[0x3c] = unaff_r27;
  puVar14[0x3b] = unaff_r26;
  puVar14[0x3a] = unaff_r25;
  if (moby == (MobyInstance *)0x0) {
    return;
  }
  pfVar10 = (float *)moby->pVar;
  uVar27 = ZEXT48(pfVar10);
  if (pfVar10 == (float *)0x0) {
    return;
  }
  fVar11 = pfVar10[0x14];
  if (fVar11 != -NAN) {
    if (moby->state < 5) {
      fVar2 = g_heroPosition.x - g_MobyInstance[(int)fVar11].pos.x;
      fVar4 = g_heroPosition.y - g_MobyInstance[(int)fVar11].pos.y;
      fVar6 = ABS(fVar2);
      fVar3 = ABS(fVar4);
      *(float *)(puVar14 + 0x20) = fVar2;
      *(float *)((int)puVar14 + 0x104) = fVar4;
      *(float *)(puVar14 + 0x21) = fVar6 - fVar3;
      fVar2 = 0.0;
      uVar18 = (ulonglong)(*(uint *)(puVar14 + 0x20) >> 0x1c) & 8 |
               (ulonglong)(*(uint *)(puVar14 + 0x21) >> 0x1e) & 2 |
               (ulonglong)(*(uint *)((int)puVar14 + 0x104) >> 0x1d) & 4;
      fVar4 = ABS(*(float *)(puVar14 + 0x20));
      if (*(float *)(puVar14 + 0x21) - 0.0 < 0.0) {
        fVar4 = fVar3;
      }
      fVar8 = *(float *)(&g_atanQuadrantTable + (int)(uVar18 << 2));
      fVar3 = *(float *)(((uint)(uVar18 << 2) | 0x735900) + 4);
      fVar15 = ABS(*(float *)((int)puVar14 + 0x104));
      if (*(float *)(puVar14 + 0x21) - 0.0 < 0.0) {
        fVar15 = fVar6;
      }
      if (0.0 < fVar4) {
        lVar19 = uVar21 - 0x200;
        lVar24 = uVar21 - 0x98;
        lVar25 = uVar21 - 0x88;
        lVar28 = 2;
        fVar4 = (fVar15 - fVar4) / (fVar15 + fVar4);
        fVar6 = fVar4 * fVar4;
        *(float *)((int)puVar14 + 0x184) = fVar4;
        *(float *)((int)puVar14 + 0x17c) = fVar4;
        *(float *)(puVar14 + 0x30) = fVar4;
        *(float *)(puVar14 + 0x2f) = fVar4;
        fVar4 = fVar6 * fVar6;
        *(float *)((int)puVar14 + 0x17c) = *(float *)((int)puVar14 + 0x17c) * fVar6;
        *(float *)(puVar14 + 0x30) = *(float *)(puVar14 + 0x30) * fVar4;
        *(float *)((int)puVar14 + 0x184) = *(float *)((int)puVar14 + 0x184) * fVar4 * fVar6;
        do {
          *(float *)((int)lVar19 + 0x178) = *(float *)((int)lVar19 + 0x168) * fVar4 * fVar4;
          iVar23 = (int)lVar24;
          lVar19 = lVar19 + 8;
          lVar24 = lVar24 + 8;
          *(float *)((int)lVar25 + 4) = *(float *)(iVar23 + 4) * fVar4 * fVar4;
          lVar25 = lVar25 + 8;
          lVar28 = lVar28 + -1;
        } while (lVar28 != 0);
        lVar28 = 4;
        lVar25 = uVar21 - 0x98;
        pfVar26 = (float *)&DAT_007358e0;
        lVar19 = lVar20;
        lVar24 = lVar25;
        do {
          fVar4 = *pfVar26;
          fVar6 = pfVar26[1];
          pfVar26 = pfVar26 + 2;
          *(float *)((int)lVar19 + 0x178) = *(float *)((int)lVar19 + 0x178) * fVar4;
          lVar19 = lVar19 + 8;
          *(float *)((int)lVar24 + 4) = *(float *)((int)lVar24 + 4) * fVar6;
          lVar24 = lVar24 + 8;
          lVar28 = lVar28 + -1;
        } while (lVar28 != 0);
        lVar24 = 2;
        lVar19 = lVar20;
        do {
          iVar23 = (int)lVar19;
          iVar16 = (int)lVar25;
          lVar19 = lVar19 + 0x10;
          lVar25 = lVar25 + 0x10;
          fVar2 = fVar2 + *(float *)(iVar23 + 0x178) + *(float *)(iVar16 + 4) +
                  *(float *)(iVar16 + 8) + *(float *)(iVar16 + 0xc);
          lVar24 = lVar24 + -1;
        } while (lVar24 != 0);
        fVar2 = (fVar2 + 0.7853982) * fVar8 + fVar3;
      }
    }
    else {
      fVar2 = (moby->pos).x - g_MobyInstance[(int)fVar11].pos.x;
      fVar4 = (moby->pos).y - g_MobyInstance[(int)fVar11].pos.y;
      fVar6 = ABS(fVar2);
      fVar3 = ABS(fVar4);
      *(float *)((int)puVar14 + 0x10c) = fVar2;
      *(float *)(puVar14 + 0x22) = fVar4;
      *(float *)((int)puVar14 + 0x114) = fVar6 - fVar3;
      fVar2 = 0.0;
      uVar18 = (ulonglong)(*(uint *)((int)puVar14 + 0x10c) >> 0x1c) & 8 |
               (ulonglong)(*(uint *)((int)puVar14 + 0x114) >> 0x1e) & 2 |
               (ulonglong)(*(uint *)(puVar14 + 0x22) >> 0x1d) & 4;
      fVar4 = ABS(*(float *)((int)puVar14 + 0x10c));
      if (*(float *)((int)puVar14 + 0x114) - 0.0 < 0.0) {
        fVar4 = fVar3;
      }
      fVar8 = *(float *)(&g_atanQuadrantTable + (int)(uVar18 << 2));
      fVar3 = *(float *)(((uint)(uVar18 << 2) | 0x735900) + 4);
      fVar15 = ABS(*(float *)(puVar14 + 0x22));
      if (*(float *)((int)puVar14 + 0x114) - 0.0 < 0.0) {
        fVar15 = fVar6;
      }
      if (0.0 < fVar4) {
        lVar19 = uVar21 - 0x200;
        lVar25 = uVar21 - 0x68;
        lVar24 = uVar21 - 0x78;
        lVar28 = 2;
        fVar4 = (fVar15 - fVar4) / (fVar15 + fVar4);
        fVar6 = fVar4 * fVar4;
        *(float *)((int)puVar14 + 0x1a4) = fVar4;
        *(float *)((int)puVar14 + 0x19c) = fVar4;
        *(float *)(puVar14 + 0x34) = fVar4;
        *(float *)(puVar14 + 0x33) = fVar4;
        fVar4 = fVar6 * fVar6;
        *(float *)((int)puVar14 + 0x19c) = *(float *)((int)puVar14 + 0x19c) * fVar6;
        *(float *)(puVar14 + 0x34) = *(float *)(puVar14 + 0x34) * fVar4;
        *(float *)((int)puVar14 + 0x1a4) = *(float *)((int)puVar14 + 0x1a4) * fVar4 * fVar6;
        do {
          *(float *)((int)lVar19 + 0x198) = *(float *)((int)lVar19 + 0x188) * fVar4 * fVar4;
          iVar23 = (int)lVar24;
          lVar24 = lVar24 + 8;
          lVar19 = lVar19 + 8;
          *(float *)((int)lVar25 + 4) = *(float *)(iVar23 + 4) * fVar4 * fVar4;
          lVar25 = lVar25 + 8;
          lVar28 = lVar28 + -1;
        } while (lVar28 != 0);
        lVar28 = 4;
        lVar25 = uVar21 - 0x78;
        pfVar26 = (float *)&DAT_007358e0;
        lVar19 = lVar20;
        lVar24 = lVar25;
        do {
          fVar4 = *pfVar26;
          fVar6 = pfVar26[1];
          pfVar26 = pfVar26 + 2;
          *(float *)((int)lVar19 + 0x198) = *(float *)((int)lVar19 + 0x198) * fVar4;
          lVar19 = lVar19 + 8;
          *(float *)((int)lVar24 + 4) = *(float *)((int)lVar24 + 4) * fVar6;
          lVar24 = lVar24 + 8;
          lVar28 = lVar28 + -1;
        } while (lVar28 != 0);
        lVar24 = 2;
        lVar19 = lVar20;
        do {
          iVar23 = (int)lVar19;
          lVar19 = lVar19 + 0x10;
          iVar16 = (int)lVar25;
          lVar25 = lVar25 + 0x10;
          fVar2 = fVar2 + *(float *)(iVar23 + 0x198) + *(float *)(iVar16 + 4) +
                  *(float *)(iVar16 + 8) + *(float *)(iVar16 + 0xc);
          lVar24 = lVar24 + -1;
        } while (lVar24 != 0);
        fVar2 = (fVar2 + 0.7853982) * fVar8 + fVar3;
      }
    }
    *(float *)g_MobyInstance[(int)fVar11].pVar = fVar2;
    fVar11 = pfVar10[0x14];
  }
  if (fVar11 != -NAN) {
    g_MobyInstance[(int)fVar11].collision = (ushort *)0x0;
  }
  bVar1 = moby->state;
  if (9 < bVar1) {
    if ((0xf < bVar1) && (0x12 < bVar1)) {
      if (bVar1 < 0x14) {
        fVar11 = DAT_0071f408 * -0.050000012 + 1.0;
        pfVar10[6] = -(DAT_0071f418 * 29.7 - pfVar10[6]);
        pfVar10[4] = pfVar10[4] * fVar11 * fVar11;
        pfVar10[5] = pfVar10[5] * fVar11 * fVar11;
        uVar21 = MB_MoveAndCollide2
                           (0x3fd3333340000000,(double)DAT_010c5184,moby,uVar27 + 0x10,&DAT_0037871c
                            ,DAT_010c5154,&DAT_010c5154,0);
        if ((uVar21 & 2) != 0) {
          *(undefined1 *)(pfVar10 + 4) = 0;
          *(undefined1 *)((int)pfVar10 + 0x11) = 0;
          *(undefined1 *)((int)pfVar10 + 0x12) = 0;
          *(undefined1 *)((int)pfVar10 + 0x13) = 0;
          *(undefined1 *)(pfVar10 + 5) = 0;
          *(undefined1 *)((int)pfVar10 + 0x15) = 0;
          *(undefined1 *)((int)pfVar10 + 0x16) = 0;
          *(undefined1 *)((int)pfVar10 + 0x17) = 0;
          *(undefined1 *)(pfVar10 + 6) = 0;
          *(undefined1 *)((int)pfVar10 + 0x19) = 0;
          *(undefined1 *)((int)pfVar10 + 0x1a) = 0;
          *(undefined1 *)((int)pfVar10 + 0x1b) = 0;
          *(undefined1 *)(pfVar10 + 7) = 0;
          *(undefined1 *)((int)pfVar10 + 0x1d) = 0;
          *(undefined1 *)((int)pfVar10 + 0x1e) = 0;
          *(undefined1 *)((int)pfVar10 + 0x1f) = 0;
          pMVar17 = g_MobyInstance;
          fVar11 = pfVar10[0x14];
          *pfVar10 = g_MobyInstance[(int)fVar11].pos.x;
          pfVar10[1] = pMVar17[(int)fVar11].pos.y;
          pfVar10[2] = pMVar17[(int)fVar11].pos.z;
          pfVar10[3] = pMVar17[(int)fVar11].pos.w;
          moby->state = '\x14';
        }
      }
      else if (bVar1 < 0x15) {
        DAT_010c51a4 = (MobyInstance *)0x0;
        fVar11 = *pfVar10 - (moby->pos).x;
        fVar2 = pfVar10[1] - (moby->pos).y;
        fVar6 = ABS(fVar11);
        fVar4 = ABS(fVar2);
        *(float *)((int)puVar14 + 0xdc) = fVar11;
        *(float *)(puVar14 + 0x1c) = fVar2;
        *(float *)((int)puVar14 + 0xe4) = fVar6 - fVar4;
        dVar31 = 0.0;
        uVar18 = (ulonglong)(*(uint *)((int)puVar14 + 0xdc) >> 0x1c) & 8 |
                 (ulonglong)(*(uint *)((int)puVar14 + 0xe4) >> 0x1e) & 2 |
                 (ulonglong)(*(uint *)(puVar14 + 0x1c) >> 0x1d) & 4;
        fVar11 = ABS(*(float *)((int)puVar14 + 0xdc));
        if (*(float *)((int)puVar14 + 0xe4) - 0.0 < 0.0) {
          fVar11 = fVar4;
        }
        fVar4 = *(float *)(&g_atanQuadrantTable + (int)(uVar18 << 2));
        fVar2 = *(float *)(((uint)(uVar18 << 2) | 0x735900) + 4);
        fVar3 = ABS(*(float *)(puVar14 + 0x1c));
        if (*(float *)((int)puVar14 + 0xe4) - 0.0 < 0.0) {
          fVar3 = fVar6;
        }
        if (0.0 < fVar11) {
          lVar19 = uVar21 - 0x200;
          lVar25 = uVar21 - 0xe8;
          lVar24 = uVar21 - 0xf8;
          lVar28 = 2;
          fVar11 = (fVar3 - fVar11) / (fVar3 + fVar11);
          fVar6 = fVar11 * fVar11;
          *(float *)((int)puVar14 + 0x124) = fVar11;
          *(float *)((int)puVar14 + 0x11c) = fVar11;
          *(float *)(puVar14 + 0x24) = fVar11;
          *(float *)(puVar14 + 0x23) = fVar11;
          fVar11 = fVar6 * fVar6;
          *(float *)((int)puVar14 + 0x11c) = *(float *)((int)puVar14 + 0x11c) * fVar6;
          *(float *)(puVar14 + 0x24) = *(float *)(puVar14 + 0x24) * fVar11;
          *(float *)((int)puVar14 + 0x124) = *(float *)((int)puVar14 + 0x124) * fVar11 * fVar6;
          do {
            *(float *)((int)lVar19 + 0x118) = *(float *)((int)lVar19 + 0x108) * fVar11 * fVar11;
            iVar23 = (int)lVar24;
            lVar24 = lVar24 + 8;
            lVar19 = lVar19 + 8;
            *(float *)((int)lVar25 + 4) = *(float *)(iVar23 + 4) * fVar11 * fVar11;
            lVar25 = lVar25 + 8;
            lVar28 = lVar28 + -1;
          } while (lVar28 != 0);
          lVar28 = 4;
          lVar25 = uVar21 - 0xf8;
          pfVar26 = (float *)&DAT_007358e0;
          lVar19 = lVar20;
          lVar24 = lVar25;
          do {
            fVar11 = *pfVar26;
            fVar6 = pfVar26[1];
            pfVar26 = pfVar26 + 2;
            *(float *)((int)lVar19 + 0x118) = *(float *)((int)lVar19 + 0x118) * fVar11;
            lVar19 = lVar19 + 8;
            *(float *)((int)lVar24 + 4) = *(float *)((int)lVar24 + 4) * fVar6;
            lVar24 = lVar24 + 8;
            lVar28 = lVar28 + -1;
          } while (lVar28 != 0);
          lVar19 = 2;
          do {
            iVar23 = (int)lVar20;
            lVar20 = lVar20 + 0x10;
            iVar16 = (int)lVar25;
            lVar25 = lVar25 + 0x10;
            dVar31 = (double)((float)(dVar31 + (double)*(float *)(iVar23 + 0x118)) +
                              *(float *)(iVar16 + 4) + *(float *)(iVar16 + 8) +
                             *(float *)(iVar16 + 0xc));
            lVar19 = lVar19 + -1;
          } while (lVar19 != 0);
          dVar31 = (double)((float)(dVar31 + 0.7853981852531433) * fVar4 + fVar2);
        }
        OrganicDeltAngSpeed
                  (dVar31,(double)(DAT_0071f418 * 11.519173),(double)(DAT_0071f418 * 3.1415927),
                   (double)(g_FrameTime * 11.519173),moby,&DAT_00720000,&DAT_010c5168);
        dVar31 = (double)(moby->pos).z;
        uVar21 = MB_UpdateNavMoveTurning(moby,&DAT_010c5154,uVar27,uVar27 + 0x10);
        (moby->pos).z = (float)dVar31;
        if ((uVar21 & 4) != 0) {
          if (moby->animationId != '\0') {
            puVar14[0x37] = (longlong)(int)(animationSpeed * 6.5);
            MB_SetAnimation(moby,0,0,*(undefined4 *)((int)puVar14 + 0x1bc));
          }
          g_MobyInstance[(int)pfVar10[0x14]].setByGroup = '\x01';
          moby->drawDistance = 0;
          moby->state = '\x01';
        }
      }
    }
    goto LAB_0037a214;
  }
  if (3 < bVar1) {
    if (bVar1 < 7) {
      if (bVar1 < 5) {
        TransitionMovement(0,1);
        moby->modeBits =
             moby->modeBits &
             (MIRROR|CAN_BE_DAMAGED|HIDE_BACKFACES|CAN_BE_AUTO_TARGETED|DISABLE_Z_WRITE|DRAW_SHADOW|
              DRAW_TRANSPARENT_WEIRD|LOCK_ROTATION|NO_DRAW|HAS_SPECIAL_VARS|HAS_GLOW|TRANSPARENT|
              NO_POST_UPDATE|NO_UPDATE);
        fVar11 = pfVar10[0x14];
        if (fVar11 != -NAN) {
          g_MobyInstance[(int)fVar11].modeBits =
               g_MobyInstance[(int)fVar11].modeBits &
               (MIRROR|CAN_BE_DAMAGED|HIDE_BACKFACES|CAN_BE_AUTO_TARGETED|DISABLE_Z_WRITE|
                DRAW_SHADOW|DRAW_TRANSPARENT_WEIRD|LOCK_ROTATION|NO_DRAW|HAS_SPECIAL_VARS|HAS_GLOW|
                TRANSPARENT|NO_POST_UPDATE|NO_UPDATE);
        }
        moby->state = '\x05';
        if (((DAT_0096ae10 != 0) && (*(short *)(DAT_0096ae10 + 0xa6) == 0x1b1)) &&
           (*(char *)(DAT_0096ae10 + 0x20) != -3 && *(char *)(DAT_0096ae10 + 0x20) != -2)) {
          *(undefined1 *)(pfVar10 + 0x12) = 0xff;
          *(undefined1 *)(DAT_0096ae10 + 0x20) = 2;
        }
      }
      else if (bVar1 < 6) {
        if ((((DAT_0096ae10 == 0) || (DAT_0096ae38 != 5)) ||
            ((g_heroStateType == 0x14 || g_heroStateType == 0x16 ||
             ((g_heroType != '\0' ||
              (iVar23 = FastDecTimerS32(uVar27 + 0x60), iVar23 != 0)))))) ||
           (DAT_0084188c <= (int)pfVar10[0x19])) {
          if (moby->animationId != '\x05') {
            puVar14[0x37] = (longlong)(int)(animationSpeed * 10.5);
            MB_SetAnimation(moby,5,0,*(undefined4 *)((int)puVar14 + 0x1bc));
          }
          *(undefined1 *)(pfVar10 + 4) = 0;
          *(undefined1 *)((int)pfVar10 + 0x11) = 0;
          *(undefined1 *)((int)pfVar10 + 0x12) = 0;
          *(undefined1 *)((int)pfVar10 + 0x13) = 0;
          *(undefined1 *)(pfVar10 + 5) = 0;
          *(undefined1 *)((int)pfVar10 + 0x15) = 0;
          *(undefined1 *)((int)pfVar10 + 0x16) = 0;
          *(undefined1 *)((int)pfVar10 + 0x17) = 0;
          *(undefined1 *)(pfVar10 + 6) = 0;
          *(undefined1 *)((int)pfVar10 + 0x19) = 0;
          *(undefined1 *)((int)pfVar10 + 0x1a) = 0;
          *(undefined1 *)((int)pfVar10 + 0x1b) = 0;
          *(undefined1 *)(pfVar10 + 7) = 0;
          *(undefined1 *)((int)pfVar10 + 0x1d) = 0;
          *(undefined1 *)((int)pfVar10 + 0x1e) = 0;
          *(undefined1 *)((int)pfVar10 + 0x1f) = 0;
          *(short *)(pfVar10 + 0x13) = (short)DAT_00841894;
          moby->state = '\x06';
          if (pfVar10[0x14] != -NAN) {
            g_MobyInstance[(int)pfVar10[0x14]].setByGroup = '\x05';
          }
        }
        else {
          M437_003760e8(moby,uVar27);
          M437_003777f8(moby,uVar27);
        }
        M437_00376c48(moby,uVar27);
      }
      else {
        iVar23 = FastDecTimerS16(uVar27 + 0x4c);
        if (iVar23 == 0) {
          *(undefined4 *)(puVar14 + 0x18) = 0;
          *(undefined4 *)((int)puVar14 + 0xc4) = 0;
          fVar5 = (moby->pos).x;
          *(undefined4 *)(puVar14 + 0x19) = 0;
          *(undefined4 *)((int)puVar14 + 0xcc) = 0;
          fVar7 = (moby->pos).y;
          *(f32 *)(puVar14 + 0x16) = fVar5;
          fVar5 = (moby->pos).z;
          *(f32 *)((int)puVar14 + 0xb4) = fVar7;
          fVar7 = (moby->pos).w;
          *(f32 *)(puVar14 + 0x17) = fVar5;
          *(f32 *)((int)puVar14 + 0xbc) = fVar7;
          MB_RandomizeVector(DAT_008418a0,(float *)(uVar21 - 0x160));
          rand();
          rand();
          rand();
          rand();
          uVar22 = MB_randRange(DAT_00841898,DAT_0084189c);
          uVar29 = MB_randRangeFloat(DAT_008418a4,DAT_008418a8);
          SpawnPart_53
                    (uVar29,0x3f50624de0000000,(double)(DAT_008418b0 * DAT_0071f418),uVar21 - 0x160,
                     uVar22);
          iVar23 = 0x80 / DAT_00841894;
          moby->modeBits = moby->modeBits | DRAW_TRANSPARENT_WEIRD;
          moby->alpha = moby->alpha - (char)iVar23;
          dVar31 = (double)FastWrapRot
                                     ((moby->rotation).z,g_FrameTime * 25.132742);
          (moby->rotation).z = (float)dVar31;
        }
        else {
          moby->alpha = -0x80;
          (moby->pos).x = pfVar10[0xc];
          (moby->pos).y = pfVar10[0xd];
          (moby->pos).z = pfVar10[0xe];
          (moby->pos).w = pfVar10[0xf];
          *pfVar10 = pfVar10[0xc];
          pfVar10[1] = pfVar10[0xd];
          pfVar10[2] = pfVar10[0xe];
          pfVar10[3] = pfVar10[0xf];
          *(undefined1 *)(pfVar10 + 4) = 0;
          *(undefined1 *)((int)pfVar10 + 0x11) = 0;
          *(undefined1 *)((int)pfVar10 + 0x12) = 0;
          *(undefined1 *)((int)pfVar10 + 0x13) = 0;
          *(undefined1 *)(pfVar10 + 5) = 0;
          *(undefined1 *)((int)pfVar10 + 0x15) = 0;
          *(undefined1 *)((int)pfVar10 + 0x16) = 0;
          *(undefined1 *)((int)pfVar10 + 0x17) = 0;
          *(undefined1 *)(pfVar10 + 6) = 0;
          *(undefined1 *)((int)pfVar10 + 0x19) = 0;
          *(undefined1 *)((int)pfVar10 + 0x1a) = 0;
          *(undefined1 *)((int)pfVar10 + 0x1b) = 0;
          *(undefined1 *)(pfVar10 + 7) = 0;
          *(undefined1 *)((int)pfVar10 + 0x1d) = 0;
          *(undefined1 *)((int)pfVar10 + 0x1e) = 0;
          *(undefined1 *)((int)pfVar10 + 0x1f) = 0;
          moby->state = '\x13';
          moby->modeBits =
               moby->modeBits &
               (MIRROR|CAN_BE_DAMAGED|HIDE_BACKFACES|CAN_BE_AUTO_TARGETED|DISABLE_Z_WRITE|
                DRAW_SHADOW|LOCK_ROTATION|NO_DRAW|UNK_40|HAS_SPECIAL_VARS|HAS_GLOW|TRANSPARENT|
                NO_POST_UPDATE|NO_UPDATE|DISABLED);
        }
      }
    }
    goto LAB_0037a214;
  }
  if (bVar1 == 0) {
    *(undefined1 *)pfVar10 = 0;
    *(undefined1 *)((int)pfVar10 + 1) = 0;
    *(undefined1 *)((int)pfVar10 + 2) = 0;
    *(undefined1 *)((int)pfVar10 + 3) = 0;
    *(undefined1 *)(pfVar10 + 1) = 0;
    *(undefined1 *)((int)pfVar10 + 5) = 0;
    *(undefined1 *)((int)pfVar10 + 6) = 0;
    *(undefined1 *)((int)pfVar10 + 7) = 0;
    *(undefined1 *)(pfVar10 + 2) = 0;
    *(undefined1 *)((int)pfVar10 + 9) = 0;
    *(undefined1 *)((int)pfVar10 + 10) = 0;
    *(undefined1 *)((int)pfVar10 + 0xb) = 0;
    *(undefined1 *)(pfVar10 + 3) = 0;
    *(undefined1 *)((int)pfVar10 + 0xd) = 0;
    *(undefined1 *)((int)pfVar10 + 0xe) = 0;
    *(undefined1 *)((int)pfVar10 + 0xf) = 0;
    *(undefined1 *)(pfVar10 + 4) = 0;
    *(undefined1 *)((int)pfVar10 + 0x11) = 0;
    *(undefined1 *)((int)pfVar10 + 0x12) = 0;
    *(undefined1 *)((int)pfVar10 + 0x13) = 0;
    *(undefined1 *)(pfVar10 + 5) = 0;
    *(undefined1 *)((int)pfVar10 + 0x15) = 0;
    *(undefined1 *)((int)pfVar10 + 0x16) = 0;
    *(undefined1 *)((int)pfVar10 + 0x17) = 0;
    *(undefined1 *)(pfVar10 + 6) = 0;
    *(undefined1 *)((int)pfVar10 + 0x19) = 0;
    *(undefined1 *)((int)pfVar10 + 0x1a) = 0;
    *(undefined1 *)((int)pfVar10 + 0x1b) = 0;
    *(undefined1 *)(pfVar10 + 7) = 0;
    *(undefined1 *)((int)pfVar10 + 0x1d) = 0;
    *(undefined1 *)((int)pfVar10 + 0x1e) = 0;
    *(undefined1 *)((int)pfVar10 + 0x1f) = 0;
    *(undefined2 *)((int)pfVar10 + 0x4a) = 0;
    *(undefined2 *)(pfVar10 + 0x13) = 0;
    if (moby->animationId != '\0') {
      puVar14[0x37] = (longlong)(int)(animationSpeed * 10.5);
      MB_SetAnimation(moby,0,0,*(undefined4 *)((int)puVar14 + 0x1bc));
    }
    moby->updateDistance = -1;
    moby->drawDistance = 0xff;
    pMVar17 = g_MobyInstance;
    fVar11 = pfVar10[0x14];
    if (fVar11 == -NAN) {
      printf("no start house! killing mouse\n");
      DeleteMoby(moby);
      return;
    }
    fVar2 = g_MobyInstance[(int)fVar11].pos.x;
    (moby->pos).x = fVar2;
    (moby->pos).y = pMVar17[(int)fVar11].pos.y;
    fVar4 = pMVar17[(int)fVar11].pos.z;
    (moby->pos).z = fVar4;
    (moby->pos).w = pMVar17[(int)fVar11].pos.w;
    uVar9 = moby->uid;
    (moby->pos).z = fVar4 + 0.02;
    if (((&g_Checkpoint.objState[0])[(short)uVar9] != '\0') ||
       ((*(uint *)(&g_LevelObjBits + Level * 0x100 + (int)((longlong)((int)(short)uVar9 >> 5) << 2)) &
        1 << (uVar9 & 0x1f)) != 0)) {
      printf("mouse already completed\n");
      DeleteMoby(moby);
      return;
    }
    pfVar10[8] = fVar2;
    pfVar10[9] = (moby->pos).y;
    pfVar10[10] = (moby->pos).z;
    pfVar10[0xb] = (moby->pos).w;
    pfVar10[0xc] = (moby->pos).x;
    pfVar10[0xd] = (moby->pos).y;
    pfVar10[0xe] = (moby->pos).z;
    pfVar10[0xf] = (moby->pos).w;
    MB_InitDefaultParams((float *)&DAT_010c5154);
    MB_GetCollPrimWorld(moby,0,uVar21 - 0x138,uVar21 - 400,uVar21 - 0x140,uVar21 - 0x13c);
    DAT_010c515c = 0x3e19999a;
    DAT_010c5160 = 0x3e19999a;
    DAT_010c5168 = DAT_0071f408 * 0.4;
    DAT_010c5164 = DAT_0071f408 * 0.01;
    DAT_010c5178 = g_FrameTime * 2.7;
    DAT_010c5170 = DAT_010c5164;
    iVar23 = FastDoubleToInt((double)(*(float *)(puVar14 + 0x1a) * 1024.0));
    DAT_010c5154 = iVar23 + 1;
    DAT_010c518c = DAT_010c518c | 8;
    DAT_010c5158 = 0x3e99999a;
    DAT_010c5184 = 0.005;
    DAT_010c5190 = DAT_0071f418 * 11.519173;
    DAT_010c5198 = g_FrameTime * 11.519173;
    auVar32 = ZEXT416(0xffffffff);
    auVar32 = auVar32 | auVar32 << 0x20 | auVar32 << 0x40 | auVar32 << 0x60;
    auVar34 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
    auVar33 = vectorShiftLeftIntegerWord(auVar32,auVar32);
    DAT_010c5194 = DAT_0071f418 * 3.1415927;
    auVar32 = loadVectorLeftIndexed(0x28,0x37871c);
    auVar32 = auVar32 >> 0x60 & (GPiece<16>)0xffffffff;
    auVar32 = vectorMultiplyAddFloatingPoint
                        (auVar34,auVar32 | auVar32 << 0x20 | auVar32 << 0x40 | auVar32 << 0x60,
                         auVar33);
    auVar32 = vectorConvertToSignedFixedPointWordSaturate(auVar32,0);
    auVar32 = auVar32 >> 0x60 & (GPiece<16>)0xffffffff;
    DAT_010c519c = storeVectorElementWordIndexed
                             (auVar32 | auVar32 << 0x20 | auVar32 << 0x40 | auVar32 << 0x60,0x48,
                              0x10c5154);
    DAT_010c517c = 0x40490fdb;
    moby->state = '\x01';
    moby->drawDistance = 0;
    goto LAB_0037a214;
  }
  if (bVar1 < 2) {
    if ((UnlockableItems.sonicSummoner != '\0') && (DAT_0096ae38 == 5)) {
      auVar32 = ZEXT416(0xffffffff);
      auVar32 = auVar32 | auVar32 << 0x20 | auVar32 << 0x40 | auVar32 << 0x60;
      pfVar10[0x19] = 0.0;
      auVar34 = vectorShiftLeftIntegerWord(auVar32,auVar32);
      auVar32 = loadVectorLeftIndexed(0x1888,0x840000);
      auVar33 = vectorConvertFromSignedFixedPointWord(auVar32,0);
      auVar32 = loadVectorLeftIndexed(0x2c,0x37871c);
      auVar32 = auVar32 >> 0x60 & (GPiece<16>)0xffffffff;
      auVar35 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
      dVar31 = 0.5;
      auVar32 = vectorAddFloatingPoint
                          (auVar33,auVar32 | auVar32 << 0x20 | auVar32 << 0x40 | auVar32 << 0x60);
      auVar32 = vectorMultiplyAddFloatingPoint(auVar35,auVar32,auVar34);
      auVar32 = vectorConvertToSignedFixedPointWordSaturate(auVar32,0);
      auVar32 = auVar32 >> 0x60 & (GPiece<16>)0xffffffff;
      uVar13 = storeVectorElementWordIndexed
                         (auVar32 | auVar32 << 0x20 | auVar32 << 0x40 | auVar32 << 0x60,0x60,uVar27)
      ;
      *(undefined4 *)((uint)(pfVar10 + 0x18) & 0xfffffffc) = uVar13;
      if ((moby->enabled != '\0') &&
         (((moby->field43_0x70 & 2U) != 0 &&
          (bVar1 = moby->animationId, iVar23 = rand(), (uint)bVar1 != iVar23 % 3)))) {
        iVar23 = rand();
        puVar14[0x37] = (longlong)(int)(animationSpeed * 10.5);
        MB_SetAnimation(moby,iVar23 % 3,0,*(undefined4 *)((int)puVar14 + 0x1bc));
      }
      if (pfVar10[0x14] != -NAN) {
        iVar23 = MB_IsPntInCuboid(&g_heroPosition,(longlong)(int)pfVar10[0x10]);
        g_MobyInstance[(int)pfVar10[0x14]].setByGroup =
             ((byte)(ZERO_MASK(iVar23)) & 0xfe) + 3;
      }
      if ((DAT_0096ae10 != 0) && (DAT_0096ae38 == 5)) {
        fVar11 = g_heroPosition.x - (moby->pos).x;
        fVar2 = g_heroPosition.y - (moby->pos).y;
        fVar6 = ABS(fVar11);
        fVar4 = ABS(fVar2);
        *(float *)((int)puVar14 + 0xf4) = fVar11;
        *(float *)(puVar14 + 0x1f) = fVar2;
        *(float *)((int)puVar14 + 0xfc) = fVar6 - fVar4;
        dVar30 = 0.0;
        uVar18 = (ulonglong)(*(uint *)((int)puVar14 + 0xf4) >> 0x1c) & 8 |
                 (ulonglong)(*(uint *)((int)puVar14 + 0xfc) >> 0x1e) & 2 |
                 (ulonglong)(*(uint *)(puVar14 + 0x1f) >> 0x1d) & 4;
        fVar11 = ABS(*(float *)((int)puVar14 + 0xf4));
        if (*(float *)((int)puVar14 + 0xfc) - 0.0 < 0.0) {
          fVar11 = fVar4;
        }
        fVar4 = *(float *)(&g_atanQuadrantTable + (int)(uVar18 << 2));
        fVar2 = *(float *)(((uint)(uVar18 << 2) | 0x735900) + 4);
        fVar3 = ABS(*(float *)(puVar14 + 0x1f));
        if (*(float *)((int)puVar14 + 0xfc) - 0.0 < 0.0) {
          fVar3 = fVar6;
        }
        if (0.0 < fVar11) {
          lVar19 = uVar21 - 0x200;
          lVar24 = uVar21 - 0xb8;
          lVar25 = uVar21 - 0xa8;
          lVar28 = 2;
          fVar11 = (fVar3 - fVar11) / (fVar3 + fVar11);
          fVar6 = fVar11 * fVar11;
          *(float *)((int)puVar14 + 0x164) = fVar11;
          *(float *)((int)puVar14 + 0x15c) = fVar11;
          *(float *)(puVar14 + 0x2c) = fVar11;
          *(float *)(puVar14 + 0x2b) = fVar11;
          fVar11 = fVar6 * fVar6;
          *(float *)((int)puVar14 + 0x15c) = *(float *)((int)puVar14 + 0x15c) * fVar6;
          *(float *)(puVar14 + 0x2c) = *(float *)(puVar14 + 0x2c) * fVar11;
          *(float *)((int)puVar14 + 0x164) = *(float *)((int)puVar14 + 0x164) * fVar11 * fVar6;
          do {
            *(float *)((int)lVar19 + 0x158) = *(float *)((int)lVar19 + 0x148) * fVar11 * fVar11;
            iVar23 = (int)lVar24;
            lVar19 = lVar19 + 8;
            lVar24 = lVar24 + 8;
            *(float *)((int)lVar25 + 4) = *(float *)(iVar23 + 4) * fVar11 * fVar11;
            lVar25 = lVar25 + 8;
            lVar28 = lVar28 + -1;
          } while (lVar28 != 0);
          lVar28 = 4;
          lVar25 = uVar21 - 0xb8;
          pfVar26 = (float *)&DAT_007358e0;
          lVar19 = lVar20;
          lVar24 = lVar25;
          do {
            fVar11 = *pfVar26;
            fVar6 = pfVar26[1];
            pfVar26 = pfVar26 + 2;
            *(float *)((int)lVar19 + 0x158) = *(float *)((int)lVar19 + 0x158) * fVar11;
            lVar19 = lVar19 + 8;
            *(float *)((int)lVar24 + 4) = *(float *)((int)lVar24 + 4) * fVar6;
            lVar24 = lVar24 + 8;
            lVar28 = lVar28 + -1;
          } while (lVar28 != 0);
          lVar19 = 2;
          do {
            iVar23 = (int)lVar20;
            iVar16 = (int)lVar25;
            lVar20 = lVar20 + 0x10;
            lVar25 = lVar25 + 0x10;
            dVar30 = (double)((float)(dVar30 + (double)*(float *)(iVar23 + 0x158)) +
                              *(float *)(iVar16 + 4) + *(float *)(iVar16 + 8) +
                             *(float *)(iVar16 + 0xc));
            lVar19 = lVar19 + -1;
          } while (lVar19 != 0);
          dVar30 = (double)((float)(dVar30 + 0.7853981852531433) * fVar4 + fVar2);
        }
        OrganicDeltAngSpeed
                  (dVar30,(double)(DAT_0071f418 * 11.519173),(double)(DAT_0071f418 * 3.1415927),
                   (double)(g_FrameTime * 11.519173),moby,&DAT_00720000,&DAT_010c5168);
        pMVar17 = g_MobyInstance;
        fVar6 = g_heroPosition.y;
        fVar4 = g_heroPosition.x;
        fVar2 = pfVar10[0x14];
        *(f32 *)(puVar14 + 0x12) = g_MobyInstance[(int)fVar2].pos.x;
        *(f32 *)((int)puVar14 + 0x94) = pMVar17[(int)fVar2].pos.y;
        fVar11 = pMVar17[(int)fVar2].pos.z;
        *(float *)(puVar14 + 0x13) = fVar11;
        fVar5 = pMVar17[(int)fVar2].pos.w;
        *(float *)(puVar14 + 0x14) = fVar4;
        *(f32 *)((int)puVar14 + 0x9c) = fVar5;
        fVar2 = g_heroPosition.z;
        *(float *)((int)puVar14 + 0xa4) = fVar6;
        fVar4 = g_heroPosition.w;
        *(float *)(puVar14 + 0x15) = fVar2;
        *(float *)((int)puVar14 + 0xac) = fVar4;
        *(float *)(puVar14 + 0x13) = (float)((double)fVar11 + dVar31);
        *(float *)(puVar14 + 0x15) = fVar2 + 0.2;
        iVar23 = MB_IsPntInCuboid(&g_heroPosition,(longlong)(int)pfVar10[0x10]);
        if ((iVar23 != 0) &&
           ((iVar23 = CollLine(uVar21 - 0x180,uVar21 - 0x170,0,moby,0), iVar23 == 0 ||
            (g_CollOutput.pMoby == g_heroMobyPtr)))) {
          M437_00375ff8(moby,uVar27);
          if ((DAT_0096ae10 != 0) &&
             ((*(short *)(DAT_0096ae10 + 0xa6) == 0x1b1 &&
              (*(char *)(DAT_0096ae10 + 0x20) != -3 && *(char *)(DAT_0096ae10 + 0x20) != -2)))) {
            *(undefined1 *)(DAT_0096ae10 + 0x20) = 1;
          }
          DAT_010c51a4 = moby;
          TransitionMovement(0x1f,0);
          Hero_TransAnim((float)(longlong)(animationSpeed * 6.5),0,0);
          if (pfVar10[0x14] == -NAN) {
            moby->drawDistance = 0xff;
            moby->state = '\x03';
          }
          else {
            g_MobyInstance[(int)pfVar10[0x14]].setByGroup = '\x05';
            moby->state = '\x02';
          }
        }
      }
    }
    goto LAB_0037a214;
  }
  if (bVar1 < 3) {
    if (pfVar10[0x14] == -NAN) {
      *(undefined2 *)(pfVar10 + 0x13) = 0;
      moby->drawDistance = 0xff;
      moby->state = '\x03';
    }
    else if (g_MobyInstance[(int)pfVar10[0x14]].state == '\x05') {
      moby->state = '\x03';
      *(undefined2 *)(pfVar10 + 0x13) = 0;
      moby->drawDistance = 0xff;
    }
    goto LAB_0037a214;
  }
  M437_00375ff8(moby,uVar27);
  fVar11 = *pfVar10 - (moby->pos).x;
  fVar2 = pfVar10[1] - (moby->pos).y;
  fVar6 = ABS(fVar11);
  fVar4 = ABS(fVar2);
  *(float *)(puVar14 + 0x1d) = fVar11;
  *(float *)((int)puVar14 + 0xec) = fVar2;
  *(float *)(puVar14 + 0x1e) = fVar6 - fVar4;
  dVar31 = 0.0;
  uVar18 = (ulonglong)(*(uint *)(puVar14 + 0x1d) >> 0x1c) & 8 |
           (ulonglong)(*(uint *)(puVar14 + 0x1e) >> 0x1e) & 2 |
           (ulonglong)(*(uint *)((int)puVar14 + 0xec) >> 0x1d) & 4;
  fVar11 = ABS(*(float *)(puVar14 + 0x1d));
  if (*(float *)(puVar14 + 0x1e) - 0.0 < 0.0) {
    fVar11 = fVar4;
  }
  fVar4 = *(float *)(&g_atanQuadrantTable + (int)(uVar18 << 2));
  fVar2 = *(float *)(((uint)(uVar18 << 2) | 0x735900) + 4);
  fVar3 = ABS(*(float *)((int)puVar14 + 0xec));
  if (*(float *)(puVar14 + 0x1e) - 0.0 < 0.0) {
    fVar3 = fVar6;
  }
  if (0.0 < fVar11) {
    lVar19 = uVar21 - 0x200;
    lVar24 = uVar21 - 0xd8;
    lVar25 = uVar21 - 200;
    lVar28 = 2;
    fVar11 = (fVar3 - fVar11) / (fVar3 + fVar11);
    fVar6 = fVar11 * fVar11;
    *(float *)((int)puVar14 + 0x144) = fVar11;
    *(float *)((int)puVar14 + 0x13c) = fVar11;
    *(float *)(puVar14 + 0x28) = fVar11;
    *(float *)(puVar14 + 0x27) = fVar11;
    fVar11 = fVar6 * fVar6;
    *(float *)((int)puVar14 + 0x13c) = *(float *)((int)puVar14 + 0x13c) * fVar6;
    *(float *)(puVar14 + 0x28) = *(float *)(puVar14 + 0x28) * fVar11;
    *(float *)((int)puVar14 + 0x144) = *(float *)((int)puVar14 + 0x144) * fVar11 * fVar6;
    do {
      *(float *)((int)lVar19 + 0x138) = *(float *)((int)lVar19 + 0x128) * fVar11 * fVar11;
      iVar23 = (int)lVar24;
      lVar19 = lVar19 + 8;
      lVar24 = lVar24 + 8;
      *(float *)((int)lVar25 + 4) = *(float *)(iVar23 + 4) * fVar11 * fVar11;
      lVar25 = lVar25 + 8;
      lVar28 = lVar28 + -1;
    } while (lVar28 != 0);
    lVar28 = 4;
    lVar25 = uVar21 - 0xd8;
    pfVar26 = (float *)&DAT_007358e0;
    lVar19 = lVar20;
    lVar24 = lVar25;
    do {
      fVar11 = *pfVar26;
      fVar6 = pfVar26[1];
      pfVar26 = pfVar26 + 2;
      *(float *)((int)lVar19 + 0x138) = *(float *)((int)lVar19 + 0x138) * fVar11;
      lVar19 = lVar19 + 8;
      *(float *)((int)lVar24 + 4) = *(float *)((int)lVar24 + 4) * fVar6;
      lVar24 = lVar24 + 8;
      lVar28 = lVar28 + -1;
    } while (lVar28 != 0);
    lVar19 = 2;
    do {
      iVar23 = (int)lVar20;
      iVar16 = (int)lVar25;
      lVar20 = lVar20 + 0x10;
      lVar25 = lVar25 + 0x10;
      dVar31 = (double)((float)(dVar31 + (double)*(float *)(iVar23 + 0x138)) +
                        *(float *)(iVar16 + 4) + *(float *)(iVar16 + 8) + *(float *)(iVar16 + 0xc));
      lVar19 = lVar19 + -1;
    } while (lVar19 != 0);
    dVar31 = (double)((float)(dVar31 + 0.7853981852531433) * fVar4 + fVar2);
  }
  OrganicDeltAngSpeed
            (dVar31,(double)(DAT_0071f418 * 11.519173),(double)(DAT_0071f418 * 3.1415927),
             (double)(g_FrameTime * 11.519173),moby,&DAT_00720000,&DAT_010c5168);
  uVar21 = MB_UpdateNavMoveTurning(moby,&DAT_010c5154,uVar27,uVar27 + 0x10);
  if ((uVar21 & 6) == 0) {
    fVar11 = (moby->pos).y;
    fVar2 = (moby->pos).x;
    if (SQRT((fVar2 - g_heroPosition.x) * (fVar2 - g_heroPosition.x) +
             (fVar11 - g_heroPosition.y) * (fVar11 - g_heroPosition.y)) < 1.0) goto LAB_0037980c;
  }
  else {
LAB_0037980c:
    auVar32 = ZEXT416(0xffffffff);
    auVar32 = auVar32 | auVar32 << 0x20 | auVar32 << 0x40 | auVar32 << 0x60;
    *(undefined1 *)(pfVar10 + 4) = 0;
    *(undefined1 *)((int)pfVar10 + 0x11) = 0;
    *(undefined1 *)((int)pfVar10 + 0x12) = 0;
    *(undefined1 *)((int)pfVar10 + 0x13) = 0;
    *(undefined1 *)(pfVar10 + 5) = 0;
    *(undefined1 *)((int)pfVar10 + 0x15) = 0;
    *(undefined1 *)((int)pfVar10 + 0x16) = 0;
    *(undefined1 *)((int)pfVar10 + 0x17) = 0;
    *(undefined1 *)(pfVar10 + 6) = 0;
    *(undefined1 *)((int)pfVar10 + 0x19) = 0;
    *(undefined1 *)((int)pfVar10 + 0x1a) = 0;
    *(undefined1 *)((int)pfVar10 + 0x1b) = 0;
    *(undefined1 *)(pfVar10 + 7) = 0;
    *(undefined1 *)((int)pfVar10 + 0x1d) = 0;
    *(undefined1 *)((int)pfVar10 + 0x1e) = 0;
    *(undefined1 *)((int)pfVar10 + 0x1f) = 0;
    moby->state = '\x04';
    auVar33 = vectorShiftLeftIntegerWord(auVar32,auVar32);
    auVar32 = loadVectorLeftIndexed(0x3c,0x37871c);
    auVar32 = auVar32 >> 0x60 & (GPiece<16>)0xffffffff;
    auVar34 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
    auVar32 = vectorMultiplyAddFloatingPoint
                        (auVar34,auVar32 | auVar32 << 0x20 | auVar32 << 0x40 | auVar32 << 0x60,
                         auVar33);
    auVar32 = vectorConvertToSignedFixedPointWordSaturate(auVar32,0);
    auVar32 = vectorSplatHalfWord(auVar32,1);
    uVar12 = storeVectorElementHalfWordIndexed(auVar32,0x4c,uVar27);
    *(undefined2 *)(pfVar10 + 0x13) = uVar12;
    fVar2 = (moby->pos).x;
    fVar11 = (moby->pos).y;
  }
  if (((0.4 < SQRT((fVar2 - pfVar10[0xc]) * (fVar2 - pfVar10[0xc]) +
                   (fVar11 - pfVar10[0xd]) * (fVar11 - pfVar10[0xd]))) &&
      (*(short *)(pfVar10 + 0x13) == 0)) && (DAT_010c5158 = 0x3f333333, moby->animationId != '\x03')
     ) {
    puVar14[0x37] = (longlong)(int)(animationSpeed * 3.5);
    MB_SetAnimation(moby,3,0,*(undefined4 *)((int)puVar14 + 0x1bc));
  }
LAB_0037a214:
  MB_RegisterLameShadow(0.3,moby);
  fVar11 = pfVar10[0x14];
  if (fVar11 != -NAN) {
    g_MobyInstance[(int)fVar11].collision = (g_MobyInstance[(int)fVar11].pClass)->collision;
  }
  return;
}


