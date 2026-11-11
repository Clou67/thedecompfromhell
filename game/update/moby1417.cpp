// game/update/moby1417.cpp -- reconstructed from NPEA00385 EBOOT
// STATUS: NOT STARTED (raw Ghidra output)
// 4 functions, 0x271700-0x272c00
#include <stdio.h>
#include "game/update/moby1417.h"
#include "game/camera.h"
#include "game/collproc.h"
#include "game/hero.h"
#include "game/mobyfunc.h"
#include "game/mobyproc.h"
#include "game/mobyutil.h"
#include "game/sound.h"
#include "game/update/camera7.h"
#include "game/update/moby1357.h"
#include "idol/fastfunc.h"

// 0x0271700 (0x14 bytes)
void M1417_00271700(void)

{
  DAT_007a21fc = 0x10000;
  return;
}


// 0x0271740 (0x838 bytes)
// inlined: FastAtan2 @0x271bd4, FastAtan2 @0x271dbc
undefined8 M1417_00271740(MobyInstance *param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  undefined2 uVar7;
  MobyModeBit MVar8;
  void *pvVar9;
  f32 fVar10;
  uint uVar11;
  ulonglong *puVar12;
  int iVar13;
  MobyInstance *pMVar14;
  ulonglong uVar15;
  int iVar19;
  undefined8 uVar16;
  longlong lVar17;
  longlong lVar18;
  undefined *unused;
  float *pfVar21;
  longlong lVar20;
  ulonglong uVar22;
  longlong lVar23;
  ulonglong unaff_r27;
  ulonglong unaff_r28;
  ulonglong unaff_r29;
  ulonglong unaff_r30;
  ulonglong unaff_r31;
  ulonglong in_LR;
  longlong lVar24;
  double dVar25;
  double dVar26;
  ulonglong in_f24;
  ulonglong in_f25;
  double dVar27;
  ulonglong in_f26;
  double dVar28;
  double dVar29;
  ulonglong in_f27;
  ulonglong in_f28;
  double dVar30;
  ulonglong in_f29;
  double dVar31;
  ulonglong in_f30;
  double dVar32;
  ulonglong in_f31;
  double dVar33;
  
  uVar15 = ZEXT48(&stack0x00000000);
  lVar18 = uVar15 - 0x140;
  puVar12 = (ulonglong *)lVar18;
  *puVar12 = uVar15;
  puVar12[0x2a] = in_LR;
  puVar12[0x20] = in_f24;
  puVar12[0x21] = in_f25;
  puVar12[0x22] = in_f26;
  puVar12[0x23] = in_f27;
  puVar12[0x24] = in_f28;
  puVar12[0x25] = in_f29;
  puVar12[0x26] = in_f30;
  puVar12[0x27] = in_f31;
  puVar12[0x1f] = unaff_r31;
  puVar12[0x1d] = unaff_r29;
  puVar12[0x1e] = unaff_r30;
  pvVar9 = param_1->pVar;
  iVar19 = *(int *)((int)pvVar9 + 0x78);
  uVar7 = *(undefined2 *)((int)pvVar9 + 0x8e);
  fVar1 = *(float *)((int)pvVar9 + 200) * g_FrameTime;
  puVar12[0x1c] = unaff_r28;
  puVar12[0x1b] = unaff_r27;
  iVar19 = MB_PathMoveDist
                     ((double)fVar1,Splines[iVar19],uVar15 - 0xd0,(int)pvVar9 + 0x70,
                      (int)pvVar9 + 0x74,iVar19 * 4,uVar7);
  fVar1 = g_FrameTime;
  fVar10 = (param_1->pos).z;
  uVar11 = (int)fVar10 >> 0x1f;
  if (((*(short *)((int)pvVar9 + 0x8e) == 0) && (iVar19 != 0)) ||
     ((int)((uVar11 >> 1 ^ (uint)fVar10) - uVar11) <=
      (int)(FLOAT_ORDER(DAT_007a225c))))
  {
    MB_SpawnExplosionSparks
              (0x4014000000000000,0x402a000000000000,param_1,&param_1->pos,&DAT_00271718,
               0xffffffffffffffff);
    param_1->state = '\x03';
    iVar19 = *(int *)((int)pvVar9 + 0xa0);
    param_1->modeBits = param_1->modeBits | (UNK_40|DISABLED);
    param_1->collision = (ushort *)0x0;
    pMVar14 = g_MobyInstance;
    if (-1 < iVar19) {
      MVar8 = g_MobyInstance[iVar19].modeBits;
      g_MobyInstance[iVar19].pos.z = 5.0;
      pMVar14[iVar19].pos.y = 5.0;
      pMVar14[iVar19].pos.x = 5.0;
      pMVar14[iVar19].modeBits = MVar8 | (UNK_40|DISABLED);
    }
    iVar19 = *(int *)((int)pvVar9 + 0x7c);
    if (((iVar19 != -1) && (g_SoundChannels[iVar19].pMoby == param_1)) &&
       (g_SoundChannels[iVar19].state != '\0')) {
      sound_Kill(iVar19);
    }
    uVar16 = 0;
    *(undefined4 *)((int)pvVar9 + 0x7c) = 0xffffffff;
  }
  else {
    if (((g_heroState == PULLING_GREEN_SWINGSHOT) || (g_heroState == UNK_26)) &&
       ((-1 < *(int *)((int)pvVar9 + 0xa0) &&
        (DAT_0096a644 == g_MobyInstance + *(int *)((int)pvVar9 + 0xa0))))) {
      unused = &DAT_007a0000;
      fVar5 = *(float *)((int)pvVar9 + 0xb8) * DAT_0071f40c + *(float *)((int)pvVar9 + 0xb4);
      *(float *)((int)pvVar9 + 0xb4) = fVar5;
      fVar1 = fVar1 * DAT_007a2250;
      if (fVar1 < fVar5) {
        *(float *)((int)pvVar9 + 0xb4) = fVar1;
        fVar5 = fVar1;
      }
      fVar5 = *(float *)((int)pvVar9 + 0xb0) + fVar5;
      *(float *)((int)pvVar9 + 0xb0) = fVar5;
    }
    else if (((g_heroStateType == 0xe) && (-1 < *(int *)((int)pvVar9 + 0xa0))) &&
            (DAT_0096a674 == g_MobyInstance + *(int *)((int)pvVar9 + 0xa0))) {
      unused = &DAT_007a0000;
      fVar5 = *(float *)((int)pvVar9 + 0xb8) * DAT_0071f40c + *(float *)((int)pvVar9 + 0xb4);
      *(float *)((int)pvVar9 + 0xb4) = fVar5;
      fVar1 = fVar1 * DAT_007a2250;
      if (fVar1 < fVar5) {
        *(float *)((int)pvVar9 + 0xb4) = fVar1;
        fVar5 = fVar1;
      }
      fVar5 = *(float *)((int)pvVar9 + 0xb0) + fVar5;
      *(float *)((int)pvVar9 + 0xb0) = fVar5;
    }
    else {
      unused = (undefined *)0x0;
      *(undefined4 *)((int)pvVar9 + 0xb4) = 0;
      fVar5 = -(fVar1 * DAT_007a2258 - *(float *)((int)pvVar9 + 0xb0));
      *(float *)((int)pvVar9 + 0xb0) = fVar5;
      if (fVar5 < 0.0) {
        *(undefined4 *)((int)pvVar9 + 0xb0) = 0;
        fVar5 = 0.0;
      }
    }
    fVar1 = *(float *)(puVar12 + 0xf);
    *(float *)(puVar12 + 0xf) = fVar1 - fVar5;
    if (fVar1 - fVar5 < 10.0) {
      *(undefined4 *)(puVar12 + 0xf) = 0x41200000;
    }
    dVar27 = 0.0;
    AccelDelt(*(float *)(puVar12 + 0xe),DAT_007a223c,DAT_007a2240,0.0,&(param_1->pos).x,
                        (int)unused,(float *)((int)pvVar9 + 0x80));
    AccelDelt(*(float *)((int)puVar12 + 0x74),DAT_007a223c,DAT_007a2240,(float)dVar27,
                        &(param_1->pos).y,(int)unused,(float *)((int)pvVar9 + 0x84));
    AccelDelt(*(float *)(puVar12 + 0xf),DAT_007a223c,DAT_007a2240,(float)dVar27,
                        &(param_1->pos).z,(int)unused,(float *)((int)pvVar9 + 0x88));
    fVar5 = *(float *)(puVar12 + 0xe) - (param_1->pos).x;
    dVar31 = (double)fVar5;
    dVar32 = (double)*(float *)(puVar12 + 0xf);
    fVar2 = *(float *)((int)puVar12 + 0x74) - (param_1->pos).y;
    dVar30 = (double)fVar2;
    dVar33 = (double)(param_1->pos).z;
    fVar1 = (param_1->rotation).z;
    dVar28 = ABS(dVar31);
    if ((0.009999999776482582 < dVar28) && (dVar25 = ABS(dVar30), 0.009999999776482582 < dVar25)) {
      *(float *)((int)puVar12 + 0x8c) = fVar5;
      *(float *)(puVar12 + 0x12) = fVar2;
      *(float *)((int)puVar12 + 0x94) = (float)(dVar28 - dVar25);
      uVar22 = (ulonglong)(*(uint *)((int)puVar12 + 0x8c) >> 0x1c) & 8 |
               (ulonglong)(*(uint *)((int)puVar12 + 0x94) >> 0x1e) & 2 |
               (ulonglong)(*(uint *)(puVar12 + 0x12) >> 0x1d) & 4;
      dVar26 = ABS((double)*(float *)((int)puVar12 + 0x8c));
      if ((double)*(float *)((int)puVar12 + 0x94) - dVar27 < 0.0) {
        dVar26 = dVar25;
      }
      fVar5 = *(float *)(&g_atanQuadrantTable + (int)(uVar22 << 2));
      dVar25 = ABS((double)*(float *)(puVar12 + 0x12));
      if ((double)*(float *)((int)puVar12 + 0x94) - dVar27 < 0.0) {
        dVar25 = dVar28;
      }
      fVar2 = *(float *)(((uint)(uVar22 << 2) | 0x735900) + 4);
      dVar29 = 0.7853981852531433;
      dVar28 = dVar27;
      if (dVar27 < dVar26) {
        lVar17 = uVar15 - 0x130;
        lVar20 = uVar15 - 0x88;
        lVar23 = uVar15 - 0x78;
        lVar24 = 2;
        fVar6 = (float)(dVar25 - dVar26) / (float)(dVar25 + dVar26);
        fVar3 = fVar6 * fVar6;
        *(float *)((int)puVar12 + 0xc4) = fVar6;
        *(float *)((int)puVar12 + 0xbc) = fVar6;
        *(float *)(puVar12 + 0x18) = fVar6;
        *(float *)(puVar12 + 0x17) = fVar6;
        fVar6 = fVar3 * fVar3;
        *(float *)((int)puVar12 + 0xbc) = *(float *)((int)puVar12 + 0xbc) * fVar3;
        *(float *)(puVar12 + 0x18) = *(float *)(puVar12 + 0x18) * fVar6;
        *(float *)((int)puVar12 + 0xc4) = *(float *)((int)puVar12 + 0xc4) * fVar6 * fVar3;
        do {
          *(float *)((int)lVar17 + 0xb8) = *(float *)((int)lVar17 + 0xa8) * fVar6 * fVar6;
          iVar19 = (int)lVar20;
          lVar17 = lVar17 + 8;
          lVar20 = lVar20 + 8;
          *(float *)((int)lVar23 + 4) = *(float *)(iVar19 + 4) * fVar6 * fVar6;
          lVar23 = lVar23 + 8;
          lVar24 = lVar24 + -1;
        } while (lVar24 != 0);
        lVar24 = 4;
        lVar23 = uVar15 - 0x88;
        pfVar21 = (float *)&DAT_007358e0;
        lVar17 = lVar18;
        lVar20 = lVar23;
        do {
          fVar6 = *pfVar21;
          fVar3 = pfVar21[1];
          pfVar21 = pfVar21 + 2;
          *(float *)((int)lVar17 + 0xb8) = *(float *)((int)lVar17 + 0xb8) * fVar6;
          lVar17 = lVar17 + 8;
          *(float *)((int)lVar20 + 4) = *(float *)((int)lVar20 + 4) * fVar3;
          lVar20 = lVar20 + 8;
          lVar24 = lVar24 + -1;
        } while (lVar24 != 0);
        lVar20 = 2;
        lVar17 = lVar18;
        do {
          iVar19 = (int)lVar17;
          lVar17 = lVar17 + 0x10;
          iVar13 = (int)lVar23;
          lVar23 = lVar23 + 0x10;
          dVar28 = (double)((float)(dVar28 + (double)*(float *)(iVar19 + 0xb8)) +
                            *(float *)(iVar13 + 4) + *(float *)(iVar13 + 8) +
                           *(float *)(iVar13 + 0xc));
          lVar20 = lVar20 + -1;
        } while (lVar20 != 0);
        dVar28 = (double)((float)(dVar28 + 0.7853981852531433) * fVar5 + fVar2);
      }
      dVar25 = (double)FastDiffRots((double)fVar1,dVar28);
      OrganicDeltAngSpeed(dVar28,(double)DAT_007a223c,(double)DAT_007a2240,dVar27,param_1)
      ;
      fVar2 = DAT_007a2240;
      fVar5 = DAT_007a223c;
      dVar26 = ABS((double)(float)(dVar32 - dVar33));
      *(float *)((int)puVar12 + 0x84) = (float)(dVar32 - dVar33);
      fVar1 = SQRT((float)(dVar31 * dVar31 + (double)(float)(dVar30 * dVar30)));
      dVar28 = ABS((double)fVar1);
      *(float *)(puVar12 + 0x10) = fVar1;
      *(float *)(puVar12 + 0x11) = (float)(dVar28 - dVar26);
      uVar22 = (ulonglong)(*(uint *)(puVar12 + 0x10) >> 0x1c) & 8 |
               (ulonglong)(*(uint *)(puVar12 + 0x11) >> 0x1e) & 2 |
               (ulonglong)(*(uint *)((int)puVar12 + 0x84) >> 0x1d) & 4;
      pfVar21 = (float *)((uint)(uVar22 << 2) | 0x735900);
      dVar33 = ABS((double)*(float *)(puVar12 + 0x10));
      if ((double)*(float *)(puVar12 + 0x11) - dVar27 < 0.0) {
        dVar33 = dVar26;
      }
      fVar6 = *(float *)(&g_atanQuadrantTable + (int)(uVar22 << 2));
      fVar1 = pfVar21[1];
      dVar30 = ABS((double)*(float *)((int)puVar12 + 0x84));
      if ((double)*(float *)(puVar12 + 0x11) - dVar27 < 0.0) {
        dVar30 = dVar28;
      }
      dVar28 = dVar27;
      if (dVar27 < dVar33) {
        lVar17 = uVar15 - 0x130;
        lVar20 = uVar15 - 0xa8;
        lVar23 = uVar15 - 0x98;
        lVar24 = 2;
        fVar3 = (float)(dVar30 - dVar33) / (float)(dVar30 + dVar33);
        fVar4 = fVar3 * fVar3;
        *(float *)((int)puVar12 + 0xa4) = fVar3;
        *(float *)((int)puVar12 + 0x9c) = fVar3;
        *(float *)(puVar12 + 0x14) = fVar3;
        *(float *)(puVar12 + 0x13) = fVar3;
        fVar3 = fVar4 * fVar4;
        *(float *)((int)puVar12 + 0x9c) = *(float *)((int)puVar12 + 0x9c) * fVar4;
        *(float *)(puVar12 + 0x14) = *(float *)(puVar12 + 0x14) * fVar3;
        *(float *)((int)puVar12 + 0xa4) = *(float *)((int)puVar12 + 0xa4) * fVar3 * fVar4;
        do {
          *(float *)((int)lVar17 + 0x98) = *(float *)((int)lVar17 + 0x88) * fVar3 * fVar3;
          iVar19 = (int)lVar20;
          lVar17 = lVar17 + 8;
          lVar20 = lVar20 + 8;
          *(float *)((int)lVar23 + 4) = *(float *)(iVar19 + 4) * fVar3 * fVar3;
          lVar23 = lVar23 + 8;
          lVar24 = lVar24 + -1;
        } while (lVar24 != 0);
        lVar24 = 4;
        lVar23 = uVar15 - 0xa8;
        pfVar21 = (float *)&DAT_007358e0;
        lVar17 = lVar18;
        lVar20 = lVar23;
        do {
          fVar3 = *pfVar21;
          fVar4 = pfVar21[1];
          pfVar21 = pfVar21 + 2;
          *(float *)((int)lVar17 + 0x98) = *(float *)((int)lVar17 + 0x98) * fVar3;
          lVar17 = lVar17 + 8;
          *(float *)((int)lVar20 + 4) = *(float *)((int)lVar20 + 4) * fVar4;
          lVar20 = lVar20 + 8;
          lVar24 = lVar24 + -1;
        } while (lVar24 != 0);
        lVar17 = 2;
        dVar33 = dVar27;
        do {
          iVar19 = (int)lVar18;
          lVar18 = lVar18 + 0x10;
          iVar13 = (int)lVar23;
          lVar23 = lVar23 + 0x10;
          dVar33 = (double)((float)(dVar33 + (double)*(float *)(iVar19 + 0x98)) +
                            *(float *)(iVar13 + 4) + *(float *)(iVar13 + 8) +
                           *(float *)(iVar13 + 0xc));
          lVar17 = lVar17 + -1;
        } while (lVar17 != 0);
        dVar28 = (double)((float)(dVar33 + dVar29) * fVar6 + fVar1);
      }
      AccelDelt((float)-dVar28,fVar5,fVar2,(float)dVar27,&(param_1->rotation).y,
                          (int)pfVar21,(float *)((int)pvVar9 + 0x94));
      fVar1 = (float)(dVar25 / (double)DAT_007a2248);
      if (1.0 - (float)(dVar25 / (double)DAT_007a2248) < 0.0) {
        fVar1 = 1.0;
      }
      if (fVar1 - -1.0 < 0.0) {
        fVar1 = -1.0;
      }
      AccelDelt(DAT_007a2244 * fVar1,0.003,DAT_007a2240,(float)dVar27,
                          &(param_1->rotation).x,0x271718,(float *)((int)pvVar9 + 0x90));
    }
    uVar16 = 1;
  }
  return uVar16;
}


// 0x0271f80 (0x2ac bytes)
// inlined: FastAtan2 @0x272100
void M1417_00271f80(int param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  int iVar6;
  Spline *pSVar7;
  ulonglong *puVar8;
  ulonglong uVar9;
  int iVar11;
  longlong lVar10;
  longlong lVar12;
  Spline *pSVar15;
  ulonglong uVar13;
  longlong lVar14;
  int iVar17;
  longlong lVar16;
  float *pfVar18;
  longlong lVar19;
  
  uVar9 = ZEXT48(&stack0x00000000);
  lVar10 = uVar9 - 0x60;
  puVar8 = (ulonglong *)lVar10;
  *puVar8 = uVar9;
  iVar6 = *(int *)(param_1 + 0x78);
  iVar17 = 0;
  pSVar7 = Splines[*(int *)(iVar6 + 0x78)];
  iVar11 = pSVar7->cnt;
  pSVar15 = pSVar7;
  if (0 < iVar11) {
    do {
      iVar17 = iVar17 + 1;
      pfVar18 = (float *)((int)pSVar7 + ((iVar17 - (iVar17 / iVar11) * iVar11) * 4 + 4) * 4);
      fVar1 = pSVar15->points[0].y - pfVar18[1];
      fVar2 = pSVar15->points[0].x - *pfVar18;
      fVar3 = pSVar15->points[0].z - pfVar18[2];
      iVar11 = pSVar7->cnt;
      pSVar15->points[0].w = SQRT(fVar3 * fVar3 + fVar2 * fVar2 + fVar1 * fVar1);
      pSVar15 = (Spline *)pSVar15->points;
    } while (iVar17 < iVar11);
  }
  *(undefined4 *)(iVar6 + 0x70) = 0;
  fVar1 = 0.0;
  *(undefined4 *)(iVar6 + 0x74) = 0;
  fVar2 = pSVar7->points[0].x;
  *(float *)(param_1 + 0x10) = fVar2;
  fVar3 = pSVar7->points[0].y;
  *(float *)(param_1 + 0x14) = fVar3;
  *(float *)(param_1 + 0x18) = pSVar7->points[0].z;
  *(float *)(param_1 + 0x1c) = pSVar7->points[0].w;
  fVar2 = pSVar7->points[1].x - fVar2;
  fVar3 = pSVar7->points[1].y - fVar3;
  fVar4 = ABS(fVar2);
  fVar5 = ABS(fVar3);
  *(float *)(puVar8 + 6) = fVar2;
  *(float *)((int)puVar8 + 0x34) = fVar3;
  *(float *)(puVar8 + 7) = fVar4 - fVar5;
  uVar13 = (ulonglong)(*(uint *)(puVar8 + 6) >> 0x1c) & 8 |
           (ulonglong)(*(uint *)(puVar8 + 7) >> 0x1e) & 2 |
           (ulonglong)(*(uint *)((int)puVar8 + 0x34) >> 0x1d) & 4;
  fVar2 = ABS(*(float *)(puVar8 + 6));
  if (*(float *)(puVar8 + 7) - 0.0 < 0.0) {
    fVar2 = fVar5;
  }
  fVar3 = *(float *)(&g_atanQuadrantTable + (int)(uVar13 << 2));
  fVar5 = ABS(*(float *)((int)puVar8 + 0x34));
  if (*(float *)(puVar8 + 7) - 0.0 < 0.0) {
    fVar5 = fVar4;
  }
  fVar4 = *(float *)(((uint)(uVar13 << 2) | 0x735900) + 4);
  if (0.0 < fVar2) {
    lVar16 = uVar9 - 0x50;
    lVar14 = uVar9 - 0x24;
    lVar12 = uVar9 - 0x14;
    lVar19 = 2;
    fVar2 = (fVar5 - fVar2) / (fVar5 + fVar2);
    fVar5 = fVar2 * fVar2;
    *(float *)(puVar8 + 9) = fVar2;
    *(float *)(puVar8 + 8) = fVar2;
    *(float *)((int)puVar8 + 0x44) = fVar2;
    *(float *)((int)puVar8 + 0x3c) = fVar2;
    fVar2 = fVar5 * fVar5;
    *(float *)(puVar8 + 8) = *(float *)(puVar8 + 8) * fVar5;
    *(float *)((int)puVar8 + 0x44) = *(float *)((int)puVar8 + 0x44) * fVar2;
    *(float *)(puVar8 + 9) = *(float *)(puVar8 + 9) * fVar2 * fVar5;
    do {
      *(float *)((int)lVar16 + 0x3c) = *(float *)((int)lVar16 + 0x2c) * fVar2 * fVar2;
      iVar11 = (int)lVar14;
      lVar16 = lVar16 + 8;
      lVar14 = lVar14 + 8;
      *(float *)((int)lVar12 + 4) = *(float *)(iVar11 + 4) * fVar2 * fVar2;
      lVar12 = lVar12 + 8;
      lVar19 = lVar19 + -1;
    } while (lVar19 != 0);
    lVar16 = uVar9 - 0x24;
    pfVar18 = (float *)&DAT_007358e0;
    lVar19 = 4;
    lVar12 = lVar16;
    lVar14 = lVar10;
    do {
      fVar2 = *pfVar18;
      fVar5 = pfVar18[1];
      pfVar18 = pfVar18 + 2;
      *(float *)((int)lVar14 + 0x3c) = *(float *)((int)lVar14 + 0x3c) * fVar2;
      lVar14 = lVar14 + 8;
      *(float *)((int)lVar12 + 4) = *(float *)((int)lVar12 + 4) * fVar5;
      lVar12 = lVar12 + 8;
      lVar19 = lVar19 + -1;
    } while (lVar19 != 0);
    lVar12 = 2;
    do {
      iVar11 = (int)lVar10;
      lVar10 = lVar10 + 0x10;
      iVar17 = (int)lVar16;
      lVar16 = lVar16 + 0x10;
      fVar1 = fVar1 + *(float *)(iVar11 + 0x3c) + *(float *)(iVar17 + 4) + *(float *)(iVar17 + 8) +
              *(float *)(iVar17 + 0xc);
      lVar12 = lVar12 + -1;
    } while (lVar12 != 0);
    fVar1 = (fVar1 + 0.7853982) * fVar3 + fVar4;
  }
  *(float *)(param_1 + 0x48) = fVar1;
  *(undefined4 *)(iVar6 + 0x88) = 0;
  *(undefined4 *)(iVar6 + 0x84) = 0;
  *(undefined4 *)(iVar6 + 0x80) = 0;
  *(undefined4 *)(iVar6 + 0x98) = 0;
  *(undefined4 *)(iVar6 + 0x94) = 0;
  *(undefined4 *)(iVar6 + 0x90) = 0;
  return;
}


// 0x0272248 (0x9b8 bytes)
// inlined: FastAtan2 @0x272988
// strings: 00655798: 'Flying Car (moby1417) with no flyPath. UID: %d - RAR\n' | 006557d0: 'Flying Car (moby1417) with a flyPath that has no points. UID: %d - RAR\n'

/* Moby 1417 */

void UpdateMoby_1417_FlyingCar(MobyInstance *moby)

{
  byte bVar1;
  u8 uVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  MobyModeBit MVar8;
  void *pvVar9;
  void *pvVar10;
  Spline *pSVar11;
  undefined2 uVar12;
  undefined4 uVar13;
  ulonglong *puVar14;
  float fVar15;
  MobyInstance *pMVar16;
  int iVar17;
  ulonglong uVar18;
  int iVar21;
  longlong lVar19;
  longlong lVar20;
  longlong lVar22;
  float *pfVar23;
  longlong lVar24;
  ulonglong unaff_r29;
  ulonglong unaff_r30;
  ulonglong uVar25;
  ulonglong unaff_r31;
  ulonglong in_LR;
  longlong lVar26;
  GPiece<16> auVar27;
  GPiece<16> auVar28;
  GPiece<16> auVar29;
  GPiece<16> auVar30;
  
  lVar19 = (longlong)(int)moby;
  uVar18 = ZEXT48(&stack0x00000000);
  lVar20 = uVar18 - 0xc0;
  puVar14 = (ulonglong *)lVar20;
  *puVar14 = uVar18;
  puVar14[0x1a] = in_LR;
  puVar14[0x17] = unaff_r31;
  puVar14[0x16] = unaff_r30;
  puVar14[0x15] = unaff_r29;
  pvVar9 = moby->pVar;
  uVar25 = ZEXT48(pvVar9);
  iVar21 = MB_damage(lVar19,0x800000,0);
  moby->damage = -1;
  if ((iVar21 != 0) && (moby->state != '\x03')) {
    moby->state = '\x03';
    MB_SpawnExplosionSparks
              (0x4014000000000000,0x402a000000000000,lVar19,lVar19 + 0x10,&DAT_0027222c,
               0xffffffffffffffff);
    iVar21 = *(int *)((int)pvVar9 + 0xa0);
    moby->collision = (ushort *)0x0;
    moby->modeBits = moby->modeBits | (UNK_40|DISABLED);
    pMVar16 = g_MobyInstance;
    if (-1 < iVar21) {
      MVar8 = g_MobyInstance[iVar21].modeBits;
      g_MobyInstance[iVar21].pos.z = 5.0;
      pMVar16[iVar21].pos.y = 5.0;
      pMVar16[iVar21].pos.x = 5.0;
      pMVar16[iVar21].modeBits = MVar8 | (UNK_40|DISABLED);
    }
    iVar21 = *(int *)((int)pvVar9 + 0x7c);
    if (((iVar21 != -1) && (g_SoundChannels[iVar21].pMoby == moby)) &&
       (g_SoundChannels[iVar21].state != '\0')) {
      sound_Kill(iVar21);
    }
    *(undefined4 *)((int)pvVar9 + 0x7c) = 0xffffffff;
  }
  bVar1 = moby->state;
  if (bVar1 < 2) {
    if (bVar1 == 0) {
      if (*(int *)((int)pvVar9 + 0x78) == -1) {
        printf("Flying Car (moby1417) with no flyPath. UID: %d - RAR\n",moby->uid);
        DeleteMoby(moby);
        return;
      }
      if (Splines[*(int *)((int)pvVar9 + 0x78)]->cnt == 0) {
        printf("Flying Car (moby1417) with a flyPath that has no points. UID: %d - RAR\n",
                     moby->uid);
        DeleteMoby(moby);
        return;
      }
      M1417_00271f80(lVar19);
      auVar28 = ZEXT416(0xffffffff);
      auVar28 = auVar28 | auVar28 << 0x20 | auVar28 << 0x40 | auVar28 << 0x60;
      moby->state = '\x02';
      moby->updateDistance = -1;
      *(undefined4 *)((int)pvVar9 + 0x7c) = 0xffffffff;
      moby->drawDistance = 0xff;
      auVar29 = vectorShiftLeftIntegerWord(auVar28,auVar28);
      auVar28 = loadVectorLeftIndexed(0x224c,0x7a0000);
      auVar27 = vectorConvertFromSignedFixedPointWord(auVar28,0);
      auVar28 = loadVectorLeftIndexed(8,0x27222c);
      auVar28 = auVar28 >> 0x60 & (GPiece<16>)0xffffffff;
      auVar30 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
      iVar21 = *(int *)((int)pvVar9 + 0xa0);
      auVar28 = vectorAddFloatingPoint
                          (auVar27,auVar28 | auVar28 << 0x20 | auVar28 << 0x40 | auVar28 << 0x60);
      auVar28 = vectorMultiplyAddFloatingPoint(auVar30,auVar28,auVar29);
      auVar28 = vectorConvertToSignedFixedPointWordSaturate(auVar28,0);
      auVar28 = vectorSplatHalfWord(auVar28,1);
      uVar12 = storeVectorElementHalfWordIndexed(auVar28,0x8c,uVar25);
      *(undefined2 *)((int)pvVar9 + 0x8c) = uVar12;
      *(undefined4 *)((int)pvVar9 + 0xb0) = 0;
      *(undefined4 *)((int)pvVar9 + 0xb4) = 0;
      *(undefined4 *)((int)pvVar9 + 0xbc) = 0;
      *(undefined4 *)((int)pvVar9 + 0xc0) = 0;
      *(undefined4 *)((int)pvVar9 + 0xcc) = 0;
      pMVar16 = g_MobyInstance;
      if (-1 < iVar21) {
        g_MobyInstance[iVar21].drawDistance = moby->drawDistance;
        pMVar16[iVar21].updateDistance = moby->updateDistance;
      }
      FastMemSet(uVar25 + 0xd0,0,0x40);
      AttachManipulator(moby,0,(int)(uVar25 + 0xd0));
      MB_UpdateLightsTransition(lVar19,uVar25 + 0x60);
      if (-1 < *(int *)((int)pvVar9 + 0xc4)) {
        iVar21 = *(int *)((int)pvVar9 + 0xa0);
        moby->collision = (ushort *)0x0;
        moby->modeBits = moby->modeBits | (UNK_40|DISABLED);
        if (-1 < iVar21) {
          g_MobyInstance[iVar21].modeBits = g_MobyInstance[iVar21].modeBits | (UNK_40|DISABLED);
        }
        moby->state = '\x01';
      }
    }
    else {
      iVar21 = MB_IsPntInCuboid(&g_heroPosition,(longlong)*(int *)((int)pvVar9 + 0xc4));
      if (iVar21 != 0) {
        iVar21 = *(int *)((int)pvVar9 + 0xa0);
        moby->modeBits =
             moby->modeBits &
             (MIRROR|CAN_BE_DAMAGED|HIDE_BACKFACES|CAN_BE_AUTO_TARGETED|DISABLE_Z_WRITE|DRAW_SHADOW|
              DRAW_TRANSPARENT_WEIRD|LOCK_ROTATION|NO_DRAW|HAS_SPECIAL_VARS|HAS_GLOW|TRANSPARENT|
              NO_POST_UPDATE|NO_UPDATE);
        moby->collision = moby->pClass->collision;
        if (-1 < iVar21) {
          g_MobyInstance[iVar21].modeBits =
               g_MobyInstance[iVar21].modeBits &
               (MIRROR|CAN_BE_DAMAGED|HIDE_BACKFACES|CAN_BE_AUTO_TARGETED|DISABLE_Z_WRITE|
                DRAW_SHADOW|DRAW_TRANSPARENT_WEIRD|LOCK_ROTATION|NO_DRAW|HAS_SPECIAL_VARS|HAS_GLOW|
                TRANSPARENT|NO_POST_UPDATE|NO_UPDATE);
        }
        moby->state = '\x02';
      }
    }
  }
  else if (bVar1 < 3) {
    *(undefined1 *)((int)pvVar9 + 0xd2) = 1;
    *(undefined4 *)((int)pvVar9 + 0xf8) = 0x38d1b717;
    *(undefined4 *)((int)pvVar9 + 0xf4) = 0x38d1b717;
    *(undefined4 *)((int)pvVar9 + 0xf0) = 0x38d1b717;
    MB_SwingMotion
              ((double)DAT_007a2260,(double)DAT_007a2264,(double)DAT_007a2268,lVar19,uVar25 + 0xbc,
               uVar25 + 0xc0);
    iVar21 = M1417_00271740(lVar19);
    if ((iVar21 != 0) && (-1 < *(int *)((int)pvVar9 + 0xa0))) {
      fVar3 = *(float *)((int)pvVar9 + 0xa4);
      pMVar16 = g_MobyInstance + *(int *)((int)pvVar9 + 0xa0);
      fVar15 = (moby->transform).v0.x * fVar3 + (moby->pos).x;
      fVar4 = (moby->transform).v0.y;
      fVar5 = (moby->transform).v0.z;
      (pMVar16->pos).x = fVar15;
      fVar7 = fVar4 * fVar3 + (moby->pos).y;
      (pMVar16->pos).y = fVar7;
      fVar6 = fVar5 * fVar3 + (moby->pos).z;
      (pMVar16->pos).z = fVar6;
      (pMVar16->pos).w = (moby->pos).w;
      fVar3 = *(float *)((int)pvVar9 + 0xa8);
      fVar15 = (moby->transform).v1.x * fVar3 + fVar15;
      fVar7 = (moby->transform).v1.y * fVar3 + fVar7;
      fVar6 = (moby->transform).v1.z * fVar3 + fVar6;
      (pMVar16->pos).x = fVar15;
      (pMVar16->pos).y = fVar7;
      (pMVar16->pos).z = fVar6;
      fVar3 = *(float *)((int)pvVar9 + 0xac);
      fVar4 = (moby->transform).v2.y;
      fVar5 = (moby->transform).v2.z;
      (pMVar16->pos).x = (moby->transform).v2.x * fVar3 + fVar15;
      (pMVar16->pos).y = fVar4 * fVar3 + fVar7;
      (pMVar16->pos).z = fVar5 * fVar3 + fVar6;
      if (((g_heroStateType == 0xd) && (DAT_0096a644 == pMVar16)) ||
         ((g_heroStateType == 0xe && (DAT_0096a674 == pMVar16)))) {
        Cam7_SetTargetMoby(lVar19);
        auVar28 = ZEXT416(0xffffffff);
        auVar28 = auVar28 | auVar28 << 0x20 | auVar28 << 0x40 | auVar28 << 0x60;
        auVar27 = vectorShiftLeftIntegerWord(auVar28,auVar28);
        auVar28 = loadVectorLeftIndexed(0xc,0x27222c);
        auVar28 = auVar28 >> 0x60 & (GPiece<16>)0xffffffff;
        auVar29 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
        auVar28 = vectorMultiplyAddFloatingPoint
                            (auVar29,auVar28 | auVar28 << 0x20 | auVar28 << 0x40 | auVar28 << 0x60,
                             auVar27);
        auVar28 = vectorConvertToSignedFixedPointWordSaturate(auVar28,0);
        auVar28 = auVar28 >> 0x60 & (GPiece<16>)0xffffffff;
        uVar13 = storeVectorElementWordIndexed
                           (auVar28 | auVar28 << 0x20 | auVar28 << 0x40 | auVar28 << 0x60,0xcc,
                            uVar25);
        *(undefined4 *)((int)pvVar9 + 0xccU & 0xfffffffc) = uVar13;
      }
      else {
        FastDecTimerS32(uVar25 + 0xcc);
        if (*(int *)((int)pvVar9 + 0xcc) == 0) {
          pvVar10 = pMVar16->pVar;
          *(undefined4 *)((int)pvVar10 + 0x20) = 0;
          if (pMVar16->oClass == SWINGSHOT_SWING) {
            *(undefined4 *)((int)pvVar10 + 0x20) = 0x42200000;
            *(undefined4 *)((int)pvVar10 + 0x24) = 0x3c23d70a;
            *(undefined4 *)((int)pvVar10 + 0x28) = 0x3e4ccccd;
            *(float *)((int)pvVar10 + 0x2c) = g_FrameTime * 24.0;
          }
        }
        else {
          *(undefined4 *)((int)pMVar16->pVar + 0x20) = 0x40000000;
        }
      }
    }
  }
  else if ((bVar1 < 4) && (iVar21 = FastDecTimerS16(uVar25 + 0x8c), iVar21 != 0)) {
    pSVar11 = Splines[*(int *)((int)pvVar9 + 0x78)];
    SetColorOfMoby
              (moby,(ulonglong)*(byte *)((int)pvVar9 + 100),(ulonglong)*(byte *)((int)pvVar9 + 0x65)
               ,(ulonglong)*(byte *)((int)pvVar9 + 0x66));
    auVar28 = ZEXT416(0xffffffff);
    auVar29 = auVar28 | auVar28 << 0x20 | auVar28 << 0x40 | auVar28 << 0x60;
    moby->modeBits =
         moby->modeBits &
         (MIRROR|CAN_BE_DAMAGED|HIDE_BACKFACES|CAN_BE_AUTO_TARGETED|DISABLE_Z_WRITE|DRAW_SHADOW|
          DRAW_TRANSPARENT_WEIRD|LOCK_ROTATION|NO_DRAW|HAS_SPECIAL_VARS|HAS_GLOW|TRANSPARENT|
          NO_POST_UPDATE|NO_UPDATE);
    auVar28 = loadVectorLeftIndexed(0x224c,0x7a0000);
    auVar27 = vectorConvertFromSignedFixedPointWord(auVar28,0);
    auVar29 = vectorShiftLeftIntegerWord(auVar29,auVar29);
    moby->collision = moby->pClass->collision;
    auVar28 = loadVectorLeftIndexed(8,0x27222c);
    auVar28 = auVar28 >> 0x60 & (GPiece<16>)0xffffffff;
    auVar30 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
    auVar28 = vectorAddFloatingPoint
                        (auVar27,auVar28 | auVar28 << 0x20 | auVar28 << 0x40 | auVar28 << 0x60);
    auVar28 = vectorMultiplyAddFloatingPoint(auVar30,auVar28,auVar29);
    auVar28 = vectorConvertToSignedFixedPointWordSaturate(auVar28,0);
    auVar28 = vectorSplatHalfWord(auVar28,1);
    uVar12 = storeVectorElementHalfWordIndexed(auVar28,0x8c,uVar25);
    *(undefined2 *)((int)pvVar9 + 0x8c) = uVar12;
    moby->state = '\x02';
    *(undefined4 *)((int)pvVar9 + 0x70) = 0;
    fVar3 = 0.0;
    *(undefined4 *)((int)pvVar9 + 0x74) = 0;
    fVar4 = pSVar11->points[0].x;
    (moby->pos).x = fVar4;
    fVar5 = pSVar11->points[0].y;
    (moby->pos).y = fVar5;
    (moby->pos).z = pSVar11->points[0].z;
    (moby->pos).w = pSVar11->points[0].w;
    fVar4 = pSVar11->points[1].x - fVar4;
    fVar5 = pSVar11->points[1].y - fVar5;
    fVar6 = ABS(fVar4);
    fVar7 = ABS(fVar5);
    *(float *)(puVar14 + 0xe) = fVar4;
    *(float *)((int)puVar14 + 0x74) = fVar5;
    *(float *)(puVar14 + 0xf) = fVar6 - fVar7;
    uVar25 = (ulonglong)(*(uint *)(puVar14 + 0xe) >> 0x1c) & 8 |
             (ulonglong)(*(uint *)(puVar14 + 0xf) >> 0x1e) & 2 |
             (ulonglong)(*(uint *)((int)puVar14 + 0x74) >> 0x1d) & 4;
    fVar4 = ABS(*(float *)(puVar14 + 0xe));
    if (*(float *)(puVar14 + 0xf) - 0.0 < 0.0) {
      fVar4 = fVar7;
    }
    fVar5 = *(float *)(&g_atanQuadrantTable + (int)(uVar25 << 2));
    fVar7 = ABS(*(float *)((int)puVar14 + 0x74));
    if (*(float *)(puVar14 + 0xf) - 0.0 < 0.0) {
      fVar7 = fVar6;
    }
    fVar6 = *(float *)(((uint)(uVar25 << 2) | 0x735900) + 4);
    if (0.0 < fVar4) {
      lVar19 = uVar18 - 0xb0;
      lVar22 = uVar18 - 0x44;
      lVar24 = uVar18 - 0x34;
      lVar26 = 2;
      fVar4 = (fVar7 - fVar4) / (fVar7 + fVar4);
      fVar7 = fVar4 * fVar4;
      *(float *)(puVar14 + 0x11) = fVar4;
      *(float *)(puVar14 + 0x10) = fVar4;
      *(float *)((int)puVar14 + 0x84) = fVar4;
      *(float *)((int)puVar14 + 0x7c) = fVar4;
      fVar4 = fVar7 * fVar7;
      *(float *)(puVar14 + 0x10) = *(float *)(puVar14 + 0x10) * fVar7;
      *(float *)((int)puVar14 + 0x84) = *(float *)((int)puVar14 + 0x84) * fVar4;
      *(float *)(puVar14 + 0x11) = *(float *)(puVar14 + 0x11) * fVar4 * fVar7;
      do {
        *(float *)((int)lVar19 + 0x7c) = *(float *)((int)lVar19 + 0x6c) * fVar4 * fVar4;
        iVar21 = (int)lVar22;
        lVar19 = lVar19 + 8;
        lVar22 = lVar22 + 8;
        *(float *)((int)lVar24 + 4) = *(float *)(iVar21 + 4) * fVar4 * fVar4;
        lVar24 = lVar24 + 8;
        lVar26 = lVar26 + -1;
      } while (lVar26 != 0);
      lVar26 = 4;
      lVar24 = uVar18 - 0x44;
      pfVar23 = (float *)&DAT_007358e0;
      lVar19 = lVar20;
      lVar22 = lVar24;
      do {
        fVar4 = *pfVar23;
        fVar7 = pfVar23[1];
        pfVar23 = pfVar23 + 2;
        *(float *)((int)lVar19 + 0x7c) = *(float *)((int)lVar19 + 0x7c) * fVar4;
        lVar19 = lVar19 + 8;
        *(float *)((int)lVar22 + 4) = *(float *)((int)lVar22 + 4) * fVar7;
        lVar22 = lVar22 + 8;
        lVar26 = lVar26 + -1;
      } while (lVar26 != 0);
      lVar19 = 2;
      do {
        iVar21 = (int)lVar20;
        lVar20 = lVar20 + 0x10;
        iVar17 = (int)lVar24;
        lVar24 = lVar24 + 0x10;
        fVar3 = fVar3 + *(float *)(iVar21 + 0x7c) + *(float *)(iVar17 + 4) + *(float *)(iVar17 + 8)
                + *(float *)(iVar17 + 0xc);
        lVar19 = lVar19 + -1;
      } while (lVar19 != 0);
      fVar3 = (fVar3 + 0.7853982) * fVar5 + fVar6;
    }
    (moby->rotation).z = fVar3;
    *(undefined4 *)((int)pvVar9 + 0x88) = 0;
    *(undefined4 *)((int)pvVar9 + 0x84) = 0;
    iVar21 = *(int *)((int)pvVar9 + 0xa0);
    *(undefined4 *)((int)pvVar9 + 0x80) = 0;
    *(undefined4 *)((int)pvVar9 + 0x98) = 0;
    *(undefined4 *)((int)pvVar9 + 0x94) = 0;
    *(undefined4 *)((int)pvVar9 + 0x90) = 0;
    pMVar16 = g_MobyInstance;
    if (-1 < iVar21) {
      g_MobyInstance[iVar21].modeBits =
           g_MobyInstance[iVar21].modeBits &
           (MIRROR|CAN_BE_DAMAGED|HIDE_BACKFACES|CAN_BE_AUTO_TARGETED|DISABLE_Z_WRITE|DRAW_SHADOW|
            DRAW_TRANSPARENT_WEIRD|LOCK_ROTATION|NO_DRAW|HAS_SPECIAL_VARS|HAS_GLOW|TRANSPARENT|
            NO_POST_UPDATE|NO_UPDATE);
      fVar3 = *(float *)((int)pvVar9 + 0xa4);
      fVar15 = (moby->transform).v0.x * fVar3 + (moby->pos).x;
      fVar4 = (moby->transform).v0.y;
      fVar5 = (moby->transform).v0.z;
      pMVar16[iVar21].pos.x = fVar15;
      fVar7 = fVar4 * fVar3 + (moby->pos).y;
      pMVar16[iVar21].pos.y = fVar7;
      fVar6 = fVar5 * fVar3 + (moby->pos).z;
      pMVar16[iVar21].pos.z = fVar6;
      pMVar16[iVar21].pos.w = (moby->pos).w;
      fVar3 = *(float *)((int)pvVar9 + 0xa8);
      fVar15 = (moby->transform).v1.x * fVar3 + fVar15;
      fVar7 = (moby->transform).v1.y * fVar3 + fVar7;
      fVar6 = (moby->transform).v1.z * fVar3 + fVar6;
      pMVar16[iVar21].pos.x = fVar15;
      pMVar16[iVar21].pos.y = fVar7;
      pMVar16[iVar21].pos.z = fVar6;
      fVar3 = *(float *)((int)pvVar9 + 0xac);
      fVar4 = (moby->transform).v2.y;
      fVar5 = (moby->transform).v2.z;
      pMVar16[iVar21].pos.x = (moby->transform).v2.x * fVar3 + fVar15;
      pMVar16[iVar21].pos.y = fVar4 * fVar3 + fVar7;
      pMVar16[iVar21].pos.z = fVar5 * fVar3 + fVar6;
    }
    if (-1 < *(int *)((int)pvVar9 + 0xc4)) {
      moby->collision = (ushort *)0x0;
      moby->state = '\x01';
      moby->modeBits = moby->modeBits | (UNK_40|DISABLED);
    }
  }
  uVar2 = moby->state;
  if (((uVar2 != '\x03' && uVar2 != '\0') && (uVar2 != '\x01')) &&
     (iVar21 = IsMobyPlayingSound(moby,*(int *)((int)pvVar9 + 0x7c)), iVar21 == 0)) {
    iVar21 = PlayMobySound(0,4,moby);
    *(int *)((int)pvVar9 + 0x7c) = iVar21;
  }
  return;
}


