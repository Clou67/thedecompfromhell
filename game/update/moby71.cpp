// game/update/moby71.cpp -- reconstructed from NPEA00385 EBOOT
// STATUS: NOT STARTED (raw Ghidra output)
// 4 functions, 0x42b640-0x42de78
#include "game/update/moby71.h"
#include "game/camera.h"
#include "game/collproc.h"
#include "game/draw.h"
#include "game/hero.h"
#include "game/mobyfunc.h"
#include "game/mobyutil.h"
#include "game/pad.h"
#include "game/partupd.h"
#include "game/sound.h"
#include "game/update/moby13.h"
#include "game/update/moby58.h"
#include "game/update/moby709.h"
#include "idol/fastfunc.h"
#include "idol/mathfunc.h"

// 0x042b640 (0x5e0 bytes)
// inlined: FastAtan2 @0x42b788, FastAtan2 @0x42b8d8
void M71_0042b640(int param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  ulonglong *puVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  longlong lVar10;
  longlong lVar11;
  float *pfVar13;
  longlong lVar12;
  longlong lVar14;
  ulonglong unaff_r27;
  ulonglong unaff_r28;
  int iVar15;
  ulonglong unaff_r29;
  ulonglong unaff_r30;
  int iVar16;
  ulonglong unaff_r31;
  ulonglong in_LR;
  longlong lVar17;
  double dVar18;
  double dVar19;
  ulonglong in_f23;
  ulonglong in_f24;
  ulonglong in_f25;
  ulonglong in_f26;
  double dVar20;
  undefined8 uVar21;
  ulonglong in_f27;
  double dVar22;
  ulonglong in_f28;
  double dVar23;
  undefined8 uVar24;
  ulonglong in_f29;
  undefined8 uVar25;
  ulonglong in_f30;
  double dVar26;
  ulonglong in_f31;
  double dVar27;
  
  uVar8 = ZEXT48(&stack0x00000000);
  lVar11 = uVar8 - 0x160;
  puVar7 = (ulonglong *)lVar11;
  *puVar7 = uVar8;
  puVar7[0x2e] = in_LR;
  puVar7[0x23] = in_f23;
  puVar7[0x24] = in_f24;
  puVar7[0x25] = in_f25;
  puVar7[0x26] = in_f26;
  puVar7[0x27] = in_f27;
  puVar7[0x28] = in_f28;
  puVar7[0x29] = in_f29;
  puVar7[0x2a] = in_f30;
  puVar7[0x2b] = in_f31;
  puVar7[0x20] = unaff_r29;
  fVar2 = g_CollOutput.ip.z;
  fVar6 = GameCamera.posZ;
  fVar4 = GameCamera.posY - g_CollOutput.ip.y;
  fVar5 = GameCamera.posX - g_CollOutput.ip.x;
  puVar7[0x22] = unaff_r31;
  fVar6 = fVar6 - fVar2;
  *(float *)(puVar7 + 0xe) = fVar5;
  *(float *)((int)puVar7 + 0x74) = fVar4;
  *(char (*) [4])((int)puVar7 + 0x7c) = GameCamera.field8_0x14c;
  *(float *)(puVar7 + 0xf) = fVar6;
  *(float *)((int)puVar7 + 0x94) = fVar6;
  fVar2 = SQRT(fVar5 * fVar5 + fVar4 * fVar4);
  fVar1 = ABS(fVar2);
  *(float *)(puVar7 + 0x12) = fVar2;
  *(float *)(puVar7 + 0x13) = fVar1 - ABS(fVar6);
  dVar26 = 0.0;
  uVar9 = (ulonglong)(*(uint *)(puVar7 + 0x12) >> 0x1c) & 8 |
          (ulonglong)(*(uint *)(puVar7 + 0x13) >> 0x1e) & 2 |
          (ulonglong)(*(uint *)((int)puVar7 + 0x94) >> 0x1d) & 4;
  fVar2 = ABS(*(float *)(puVar7 + 0x12));
  if (*(float *)(puVar7 + 0x13) - 0.0 < 0.0) {
    fVar2 = ABS(fVar6);
  }
  fVar6 = *(float *)(&g_atanQuadrantTable + (int)(uVar9 << 2));
  fVar3 = ABS(*(float *)((int)puVar7 + 0x94));
  if (*(float *)(puVar7 + 0x13) - 0.0 < 0.0) {
    fVar3 = fVar1;
  }
  fVar1 = *(float *)(((uint)(uVar9 << 2) | 0x735900) + 4);
  puVar7[0x21] = unaff_r30;
  puVar7[0x1f] = unaff_r28;
  puVar7[0x1e] = unaff_r27;
  dVar27 = dVar26;
  if (0.0 < fVar2) {
    lVar10 = uVar8 - 0x150;
    lVar14 = uVar8 - 0x94;
    lVar12 = uVar8 - 0xa4;
    lVar17 = 2;
    fVar2 = (fVar3 - fVar2) / (fVar3 + fVar2);
    fVar3 = fVar2 * fVar2;
    *(float *)(puVar7 + 0x19) = fVar2;
    *(float *)(puVar7 + 0x18) = fVar2;
    *(float *)((int)puVar7 + 0xc4) = fVar2;
    *(float *)((int)puVar7 + 0xbc) = fVar2;
    fVar2 = fVar3 * fVar3;
    *(float *)(puVar7 + 0x18) = *(float *)(puVar7 + 0x18) * fVar3;
    *(float *)((int)puVar7 + 0xc4) = *(float *)((int)puVar7 + 0xc4) * fVar2;
    *(float *)(puVar7 + 0x19) = *(float *)(puVar7 + 0x19) * fVar2 * fVar3;
    do {
      *(float *)((int)lVar10 + 0xbc) = *(float *)((int)lVar10 + 0xac) * fVar2 * fVar2;
      iVar15 = (int)lVar12;
      lVar12 = lVar12 + 8;
      lVar10 = lVar10 + 8;
      *(float *)((int)lVar14 + 4) = *(float *)(iVar15 + 4) * fVar2 * fVar2;
      lVar14 = lVar14 + 8;
      lVar17 = lVar17 + -1;
    } while (lVar17 != 0);
    lVar17 = 4;
    lVar14 = uVar8 - 0xa4;
    pfVar13 = (float *)&DAT_007358e0;
    lVar10 = lVar11;
    lVar12 = lVar14;
    do {
      fVar2 = *pfVar13;
      fVar3 = pfVar13[1];
      pfVar13 = pfVar13 + 2;
      *(float *)((int)lVar10 + 0xbc) = *(float *)((int)lVar10 + 0xbc) * fVar2;
      lVar10 = lVar10 + 8;
      *(float *)((int)lVar12 + 4) = *(float *)((int)lVar12 + 4) * fVar3;
      lVar12 = lVar12 + 8;
      lVar17 = lVar17 + -1;
    } while (lVar17 != 0);
    lVar12 = 2;
    lVar10 = lVar11;
    do {
      iVar15 = (int)lVar10;
      iVar16 = (int)lVar14;
      lVar10 = lVar10 + 0x10;
      lVar14 = lVar14 + 0x10;
      dVar27 = (double)((float)(dVar27 + (double)*(float *)(iVar15 + 0xbc)) + *(float *)(iVar16 + 4)
                        + *(float *)(iVar16 + 8) + *(float *)(iVar16 + 0xc));
      lVar12 = lVar12 + -1;
    } while (lVar12 != 0);
    dVar27 = (double)((float)(dVar27 + 0.7853981852531433) * fVar6 + fVar1);
  }
  fVar5 = ABS(fVar5);
  fVar4 = ABS(fVar4);
  dVar27 = -dVar27;
  fVar6 = fVar5;
  if ((fVar5 - fVar4) - 0.0 < 0.0) {
    fVar6 = fVar4;
  }
  if ((fVar5 - fVar4) - 0.0 < 0.0) {
    fVar4 = fVar5;
  }
  if (0.0 < fVar6) {
    lVar10 = uVar8 - 0x150;
    lVar14 = uVar8 - 0xb4;
    lVar12 = uVar8 - 0xc4;
    lVar17 = 2;
    fVar4 = (fVar4 - fVar6) / (fVar4 + fVar6);
    fVar5 = fVar4 * fVar4;
    *(float *)(puVar7 + 0x15) = fVar4;
    *(float *)(puVar7 + 0x14) = fVar4;
    *(float *)((int)puVar7 + 0xa4) = fVar4;
    *(float *)((int)puVar7 + 0x9c) = fVar4;
    fVar4 = fVar5 * fVar5;
    *(float *)(puVar7 + 0x14) = *(float *)(puVar7 + 0x14) * fVar5;
    *(float *)((int)puVar7 + 0xa4) = *(float *)((int)puVar7 + 0xa4) * fVar4;
    *(float *)(puVar7 + 0x15) = *(float *)(puVar7 + 0x15) * fVar4 * fVar5;
    do {
      *(float *)((int)lVar10 + 0x9c) = *(float *)((int)lVar10 + 0x8c) * fVar4 * fVar4;
      iVar15 = (int)lVar12;
      lVar12 = lVar12 + 8;
      lVar10 = lVar10 + 8;
      *(float *)((int)lVar14 + 4) = *(float *)(iVar15 + 4) * fVar4 * fVar4;
      lVar14 = lVar14 + 8;
      lVar17 = lVar17 + -1;
    } while (lVar17 != 0);
    pfVar13 = (float *)&DAT_007358e0;
    lVar10 = uVar8 - 0xc4;
    lVar12 = 4;
    do {
      fVar4 = *pfVar13;
      fVar5 = pfVar13[1];
      pfVar13 = pfVar13 + 2;
      *(float *)((int)lVar11 + 0x9c) = *(float *)((int)lVar11 + 0x9c) * fVar4;
      lVar11 = lVar11 + 8;
      *(float *)((int)lVar10 + 4) = *(float *)((int)lVar10 + 4) * fVar5;
      lVar10 = lVar10 + 8;
      lVar12 = lVar12 + -1;
    } while (lVar12 != 0);
  }
  iVar15 = 0;
  iVar16 = 0;
  uVar25 = 0x400921fb60000000;
  dVar23 = 0.20000000298023224;
  dVar22 = 1.0;
  dVar20 = 3.0;
  do {
    dVar18 = (double)MB_randRangeSigned(dVar26,uVar25);
    dVar18 = (double)FastWrapRot((float)dVar18,(float)dVar27);
    dVar19 = (double)MB_randRangeSigned(dVar26,uVar25);
    dVar19 = (double)FastWrapRot((float)dVar19,(float)dVar27);
    MB_SphericalToVector
              ((float)dVar23,(float)dVar19,(float)dVar18,(float *)(uVar8 - 0xf0));
    dVar18 = (double)MB_randRangeFloat((float)dVar22,(float)dVar20);
    fVar2 = g_CollOutput.ip.z;
    fVar6 = g_CollOutput.ip.y;
    fVar5 = g_CollOutput.ip.x;
    fVar4 = (float)((double)*(float *)((int)puVar7 + 0x74) * dVar18);
    *(undefined4 *)((int)puVar7 + 0x8c) = *(undefined4 *)((int)puVar7 + 0x7c);
    *(float *)(puVar7 + 0x10) = (float)((double)*(float *)(puVar7 + 0xe) * dVar18);
    *(float *)((int)puVar7 + 0x84) = fVar4;
    *(float *)(puVar7 + 0x11) = (float)((double)*(float *)(puVar7 + 0xf) * dVar18);
    *(float *)(puVar7 + 0x10) = (float)((double)*(float *)(puVar7 + 0xe) * dVar18) + fVar5;
    *(float *)((int)puVar7 + 0x84) = fVar4 + fVar6;
    *(float *)(puVar7 + 0x11) = (float)((double)*(float *)(puVar7 + 0xf) * dVar18) + fVar2;
    SpawnPart_19(uVar8 - 0xe0,uVar8 - 0xf0);
    iVar15 = iVar15 + 1;
  } while (iVar15 < 0x14);
  uVar24 = 0x3fb99999a0000000;
  dVar23 = 0.05000000074505806;
  uVar21 = 0x40d3880000000000;
  dVar22 = 10.5;
  dVar20 = 20.5;
  do {
    dVar18 = (double)MB_randRangeSigned(dVar26,uVar24);
    *(float *)(puVar7 + 0x10) = (float)((double)g_CollOutput.ip.x + dVar18);
    dVar18 = (double)MB_randRangeSigned(dVar26,uVar24);
    *(float *)((int)puVar7 + 0x84) = (float)((double)g_CollOutput.ip.y + dVar18);
    dVar18 = (double)MB_randRangeSigned(dVar26,uVar24);
    *(float *)(puVar7 + 0x11) = (float)((double)g_CollOutput.ip.z + dVar18);
    dVar18 = (double)MB_randRangeSigned(dVar26,uVar25);
    dVar18 = (double)FastWrapRot((float)dVar18,(float)dVar27);
    dVar19 = (double)MB_randRangeSigned(dVar26,uVar25);
    dVar19 = (double)FastWrapRot((float)dVar19,(float)dVar27);
    MB_SphericalToVector
              ((float)dVar23,(float)dVar19,(float)dVar18,(float *)(uVar8 - 0xf0));
    dVar18 = (double)animationSpeed;
    puVar7[0x1c] = (longlong)(int)(dVar18 * dVar22);
    puVar7[0x1c] = (longlong)(int)(dVar18 * dVar20);
    MB_randRange(*(undefined4 *)((int)puVar7 + 0xe4),*(undefined4 *)((int)puVar7 + 0xe4));
    SpawnPart_21(uVar21,uVar8 - 0xe0,uVar8 - 0xf0,0x4f007fff,0x1fffffff);
    iVar16 = iVar16 + 1;
  } while (iVar16 < 10);
  if (*(short *)(*(int *)(param_1 + 0x78) + 0x78) == 0x2b) {
    M711_0042b390(0xa10960,10);
  }
  return;
}


// 0x042bc38 (0x1b8 bytes)
void M71_ClosestMobyDistance(int param_1)

{
  MobyInstance *moby;
  float fVar1;
  float fVar2;
  float fVar3;
  MobyInstance *pMVar4;
  int iVar5;
  bool bVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  undefined8 uVar12;
  
  if (MobyUpdateChainStart != (MobyInstance *)0x0) {
    dVar8 = 2.700000047683716;
    dVar9 = -30.0;
    dVar10 = 30.0;
    dVar11 = 0.01745329238474369;
    uVar12 = 0;
    moby = MobyUpdateChainStart;
    do {
      pMVar4 = g_heroMobyPtr;
      if (moby->state == 0xfd || moby->state == 0xfe) {
        return;
      }
      if ((moby->pClass == (MobyClass *)0x0) || ((short)moby->pClass->mode_bits != 0x13)) {
        bVar6 = MB_isAmmo(moby);
        if ((bVar6) &&
           (fVar1 = (moby->pos).y - *(float *)(param_1 + 0x14),
           fVar2 = (moby->pos).x - *(float *)(param_1 + 0x10),
           fVar3 = (moby->pos).z - *(float *)(param_1 + 0x18),
           (double)SQRT(fVar3 * fVar3 + fVar2 * fVar2 + fVar1 * fVar1) < dVar8)) {
          iVar5 = M1449_CollectAmmo(moby);
          goto joined_r0x0042bdac;
        }
      }
      else {
        fVar1 = (moby->pos).y - *(float *)(param_1 + 0x14);
        fVar2 = (moby->pos).x - *(float *)(param_1 + 0x10);
        fVar3 = (moby->pos).z - *(float *)(param_1 + 0x18);
        if ((double)SQRT(fVar3 * fVar3 + fVar2 * fVar2 + fVar1 * fVar1) < dVar8) {
          dVar7 = (double)MB_randRangeFloat((float)dVar9,(float)dVar10);
          iVar5 = M16_00240f38((double)(float)(dVar7 * dVar11),uVar12,moby,pMVar4);
joined_r0x0042bdac:
          if (iVar5 != 0) {
            return;
          }
        }
      }
      moby = (MobyInstance *)moby->pChain;
    } while (moby != (MobyInstance *)0x0);
  }
  return;
}


// 0x042be08 (0x284 bytes)
// inlined: FastAtan2 @0x42bebc
void M71_0042be08(float *param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  ulonglong *puVar6;
  int iVar7;
  int iVar8;
  ulonglong uVar9;
  longlong lVar10;
  longlong lVar11;
  longlong lVar12;
  ulonglong uVar13;
  longlong lVar14;
  float *pfVar15;
  ulonglong unaff_r31;
  ulonglong in_LR;
  longlong lVar16;
  double dVar17;
  double dVar18;
  double dVar19;
  double dVar20;
  ulonglong in_f31;
  double dVar21;
  
  uVar9 = ZEXT48(&stack0x00000000);
  lVar10 = uVar9 - 0xb0;
  puVar6 = (ulonglong *)lVar10;
  *puVar6 = uVar9;
  puVar6[0x18] = in_LR;
  puVar6[0x15] = in_f31;
  fVar4 = *param_1;
  fVar5 = param_1[1];
  puVar6[0x14] = unaff_r31;
  fVar1 = ABS(*param_1);
  fVar3 = ABS(param_1[1]);
  *(float *)(puVar6 + 0xe) = fVar1 - fVar3;
  dVar21 = 0.0;
  uVar13 = (ulonglong)((uint)fVar4 >> 0x1c) & 8 |
           (ulonglong)(*(uint *)(puVar6 + 0xe) >> 0x1e) & 2 | (ulonglong)((uint)fVar5 >> 0x1d) & 4;
  fVar4 = *(float *)(&g_atanQuadrantTable + (int)(uVar13 << 2));
  fVar5 = fVar1;
  if (*(float *)(puVar6 + 0xe) - 0.0 < 0.0) {
    fVar5 = fVar3;
  }
  fVar2 = *(float *)(((uint)(uVar13 << 2) | 0x735900) + 4);
  if (*(float *)(puVar6 + 0xe) - 0.0 < 0.0) {
    fVar3 = fVar1;
  }
  dVar17 = dVar21;
  if (0.0 < fVar5) {
    lVar14 = uVar9 - 0xa0;
    lVar12 = uVar9 - 0x3c;
    lVar11 = uVar9 - 0x2c;
    lVar16 = 2;
    fVar5 = (fVar3 - fVar5) / (fVar3 + fVar5);
    fVar3 = fVar5 * fVar5;
    *(float *)(puVar6 + 0x10) = fVar5;
    *(float *)(puVar6 + 0xf) = fVar5;
    *(float *)((int)puVar6 + 0x7c) = fVar5;
    *(float *)((int)puVar6 + 0x74) = fVar5;
    fVar5 = fVar3 * fVar3;
    *(float *)(puVar6 + 0xf) = *(float *)(puVar6 + 0xf) * fVar3;
    *(float *)((int)puVar6 + 0x7c) = *(float *)((int)puVar6 + 0x7c) * fVar5;
    *(float *)(puVar6 + 0x10) = *(float *)(puVar6 + 0x10) * fVar5 * fVar3;
    do {
      *(float *)((int)lVar14 + 0x74) = *(float *)((int)lVar14 + 100) * fVar5 * fVar5;
      iVar7 = (int)lVar12;
      lVar14 = lVar14 + 8;
      lVar12 = lVar12 + 8;
      *(float *)((int)lVar11 + 4) = *(float *)(iVar7 + 4) * fVar5 * fVar5;
      lVar11 = lVar11 + 8;
      lVar16 = lVar16 + -1;
    } while (lVar16 != 0);
    lVar14 = uVar9 - 0x3c;
    pfVar15 = (float *)&DAT_007358e0;
    lVar16 = 4;
    lVar11 = lVar14;
    lVar12 = lVar10;
    do {
      fVar5 = *pfVar15;
      fVar3 = pfVar15[1];
      pfVar15 = pfVar15 + 2;
      *(float *)((int)lVar12 + 0x74) = *(float *)((int)lVar12 + 0x74) * fVar5;
      lVar12 = lVar12 + 8;
      *(float *)((int)lVar11 + 4) = *(float *)((int)lVar11 + 4) * fVar3;
      lVar11 = lVar11 + 8;
      lVar16 = lVar16 + -1;
    } while (lVar16 != 0);
    lVar11 = 2;
    do {
      iVar7 = (int)lVar10;
      iVar8 = (int)lVar14;
      lVar10 = lVar10 + 0x10;
      lVar14 = lVar14 + 0x10;
      dVar17 = (double)((float)(dVar17 + (double)*(float *)(iVar7 + 0x74)) + *(float *)(iVar8 + 4) +
                        *(float *)(iVar8 + 8) + *(float *)(iVar8 + 0xc));
      lVar11 = lVar11 + -1;
    } while (lVar11 != 0);
    dVar17 = (double)((float)(dVar17 + 0.7853981852531433) * fVar4 + fVar2);
  }
  dVar17 = (double)FastSubRots(g_heroRotation.z,(float)dVar17);
  fVar4 = param_1[1];
  fVar5 = *param_1;
  fVar3 = param_1[2];
  if (1.832595705986023 - dVar17 < 0.0) {
    dVar17 = 1.832595705986023;
  }
  dVar20 = (double)SQRT(fVar3 * fVar3 + fVar5 * fVar5 + fVar4 * fVar4);
  fVar1 = (float)((double)(float)(dVar20 * (double)((float)(1.832595705986023 - dVar17) * 0.5456741
                                                    * 0.3 + 0.7)) / dVar20);
  dVar17 = dVar21;
  if (dVar21 - dVar20 < 0.0) {
    dVar17 = (double)(fVar5 * fVar1);
  }
  dVar19 = dVar21;
  if (dVar21 - dVar20 < 0.0) {
    dVar19 = (double)(fVar4 * fVar1);
  }
  dVar18 = dVar21;
  if (dVar21 - dVar20 < 0.0) {
    dVar18 = (double)(fVar3 * fVar1);
  }
  if (dVar20 - dVar21 < 0.0) {
    dVar17 = (double)(fVar5 * fVar1);
  }
  if (dVar20 - dVar21 < 0.0) {
    dVar19 = (double)(fVar4 * fVar1);
  }
  if (dVar20 - dVar21 < 0.0) {
    dVar18 = (double)(fVar3 * fVar1);
  }
  *param_1 = (float)dVar17;
  param_1[1] = (float)dVar19;
  param_1[2] = (float)dVar18;
  return;
}


// 0x042c150 (0x1d28 bytes)
/* Moby 71 */

ulonglong UpdateMoby_71(MobyInstance *moby)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  byte bVar5;
  byte bVar6;
  char cVar7;
  void *pvVar8;
  undefined4 uVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  MobyInstance *pMVar13;
  PlayerState PVar14;
  longlong lVar15;
  int iVar18;
  longlong lVar16;
  u8 uVar20;
  short sVar19;
  f32 *val;
  bool bVar21;
  ulonglong uVar17;
  uint uVar22;
  undefined4 *puVar23;
  ulonglong uVar24;
  int iVar25;
  byte bVar26;
  double dVar27;
  double dVar28;
  double dVar29;
  double extraout_f1;
  double extraout_f1_00;
  double dVar30;
  double dVar31;
  double dVar32;
  double dVar33;
  double dVar34;
  undefined8 uVar35;
  double dVar36;
  double dVar37;
  double dVar38;
  double dVar39;
  double dVar40;
  undefined8 uVar41;
  double dVar42;
  GPiece<16> auVar43;
  GPiece<16> auVar44;
  GPiece<16> auVar45;
  GPiece<16> auVar46;
  float local_220 [4];
  GPiece<16> local_210;
  GPiece<16> local_200;
  GPiece<16> local_1f0;
  GPiece<16> local_1e0;
  float local_1d0;
  float local_1cc;
  float local_1c8;
  float local_1c0;
  float local_1bc;
  float local_1b8;
  undefined4 local_1b4;
  float local_1b0;
  float local_1ac;
  float local_1a8;
  undefined4 local_1a4;
  float local_1a0;
  float local_19c;
  float local_198;
  float local_190;
  float local_18c;
  float local_188;
  undefined4 local_184;
  float local_180;
  float local_17c;
  float local_178;
  f32 local_174;
  float local_170;
  float local_16c;
  float local_168;
  undefined4 local_164;
  GPiece<16> local_160;
  float local_150;
  float local_14c;
  float local_148;
  float afStack_140 [4];
  float local_130;
  float local_12c;
  float local_128;
  undefined4 local_124;
  undefined1 local_118;
  undefined1 local_117;
  MOBY_OCLASSES local_116;
  GPiece<8> auStack_100;
  undefined4 local_f8;
  undefined4 local_f4;
  undefined1 local_e8;
  undefined1 local_e7;
  ushort local_e6;
  longlong local_d0;
  
  PVar14 = g_heroState;
  lVar15 = (longlong)(int)moby;
  pvVar8 = moby->pVar;
  uVar24 = ZEXT48(pvVar8);
  DAT_0096ad8c = 0;
  if (DAT_0096ad94 == 3) {
    DAT_0096ad8c = 0;
    return (ulonglong)DAT_0096ad94;
  }
  bVar5 = moby->state;
  bVar26 = (bVar5 == 0xb) << 1;
  if (9 < bVar5) {
    if (0xb < bVar5) {
      DAT_0096ad8c = 0;
      return (ulonglong)bVar5;
    }
    UpdateMotionBlur(&DAT_0096b490,0);
    pMVar13 = g_heroMobyPtr;
    moby->field80_0xb8 = g_heroMobyPtr;
    DAT_0096ad8c = 2;
    if ((moby->state == '\n') && (DAT_0096befc == -1)) {
      DAT_0096befc = PlayMobySound(0xe,4,pMVar13);
    }
    dVar27 = 0.0;
    MB_RotateMoby(0,0,(double)(g_FrameTime * 24.434608),lVar15);
    if ((DAT_0096a744 != 0) && (iVar18 = FastDecTimerS32(uVar24 + 0x6c), iVar18 != 0)) {
      DAT_0096a744 = 0;
    }
    if (g_heroGravityMode == '\0') {
      dVar42 = (double)GetGroundZ(0x3fe0000000000000,lVar15 + 0x10,0);
      dVar39 = (double)(moby->pos).z;
      if ((float)(dVar39 - dVar42) < 0.8) {
        val = &(moby->pos).z;
        fVar1 = (float)(dVar42 + 0.550000011920929);
        if ((double)fVar1 <= dVar39) {
          Delt(fVar1,g_FrameTime,val);
        }
        else {
          Delt(fVar1,g_FrameTime * 4.0,val);
        }
      }
    }
    local_180 = (moby->pos).x;
    local_17c = (moby->pos).y;
    local_178 = (moby->pos).z;
    local_174 = (moby->pos).w;
    if (moby->state == '\n') {
      fVar10 = DAT_00969e20 * 0.7 + local_180;
      fVar12 = DAT_00969e24 * 0.7 + local_17c;
      fVar11 = DAT_00969e28 * 0.7 + local_178;
      (moby->pos).x = fVar10;
      (moby->pos).y = fVar12;
      (moby->pos).z = fVar11;
      fVar2 = *(float *)((int)pvVar8 + 0x44);
      fVar3 = *(float *)((int)pvVar8 + 0x40);
      fVar4 = *(float *)((int)pvVar8 + 0x48);
      dVar39 = (double)SQRT(fVar4 * fVar4 + fVar3 * fVar3 + fVar2 * fVar2);
      fVar1 = (float)((double)*(float *)((int)pvVar8 + 0x60) / dVar39);
      dVar42 = dVar27;
      if (dVar27 - dVar39 < 0.0) {
        dVar42 = (double)(fVar4 * fVar1);
      }
      dVar28 = dVar27;
      if (dVar27 - dVar39 < 0.0) {
        dVar28 = (double)(fVar2 * fVar1);
      }
      dVar30 = dVar27;
      if (dVar27 - dVar39 < 0.0) {
        dVar30 = (double)(fVar3 * fVar1);
      }
      if (dVar39 - dVar27 < 0.0) {
        dVar42 = (double)(fVar4 * fVar1);
      }
      if (dVar39 - dVar27 < 0.0) {
        dVar28 = (double)(fVar2 * fVar1);
      }
      if (dVar39 - dVar27 < 0.0) {
        dVar30 = (double)(fVar3 * fVar1);
      }
      (moby->pos).z = (float)((double)fVar11 + dVar42);
      (moby->pos).y = (float)((double)fVar12 + dVar28);
      (moby->pos).x = (float)((double)fVar10 + dVar30);
      fVar1 = DAT_0071f41c * 170.0 + *(float *)((int)pvVar8 + 100);
      *(float *)((int)pvVar8 + 100) = fVar1;
      Delt((float)dVar27,fVar1,(float *)((int)pvVar8 + 0x60));
      if (*(int *)((int)pvVar8 + 0x60) == 0) {
        moby->state = '\v';
      }
    }
    else {
      M71_ClosestMobyDistance(lVar15);
      dVar30 = (double)(DAT_0096ad54 - (moby->pos).y);
      dVar36 = (double)(DAT_0096ad50 - (moby->pos).x);
      dVar28 = (double)(DAT_0096ad58 - (moby->pos).z);
      fVar1 = g_FrameTimeSq * 0.9 + *(float *)((int)pvVar8 + 100);
      dVar39 = (double)SQRT((float)(dVar28 * dVar28 +
                                   (double)(float)(dVar36 * dVar36 +
                                                  (double)(float)(dVar30 * dVar30))));
      *(float *)((int)pvVar8 + 100) = fVar1;
      fVar1 = *(float *)((int)pvVar8 + 0x60) + fVar1;
      dVar42 = (double)fVar1;
      *(float *)((int)pvVar8 + 0x60) = fVar1;
      if (((float)(dVar39 / dVar42) < (float)(longlong)(animationSpeed * 5.5)) &&
         (moby->animationId != '\x01')) {
        iVar18 = (int)(animationSpeed * 5.5);
        local_d0 = (longlong)iVar18;
        MB_SetAnimation(lVar15,1,0,iVar18);
        dVar42 = (double)*(float *)((int)pvVar8 + 0x60);
      }
      dVar37 = dVar42;
      if (dVar39 <= dVar42) {
        *(float *)((int)pvVar8 + 0x60) = (float)dVar39;
        dVar37 = dVar39;
      }
      dVar38 = (double)(float)(dVar37 / dVar39);
      dVar37 = dVar27;
      if (dVar27 - dVar39 < 0.0) {
        dVar37 = (double)(float)(dVar38 * dVar28);
      }
      dVar40 = dVar27;
      if (dVar27 - dVar39 < 0.0) {
        dVar40 = (double)(float)(dVar38 * dVar30);
      }
      dVar29 = dVar27;
      if (dVar27 - dVar39 < 0.0) {
        dVar29 = (double)(float)(dVar38 * dVar36);
      }
      if (dVar39 - dVar27 < 0.0) {
        dVar37 = (double)(float)(dVar38 * dVar28);
      }
      if (dVar39 - dVar27 < 0.0) {
        dVar40 = (double)(float)(dVar38 * dVar30);
      }
      if (dVar39 - dVar27 < 0.0) {
        dVar29 = (double)(float)(dVar38 * dVar36);
      }
      (moby->pos).z = (float)((double)(moby->pos).z + dVar37);
      (moby->pos).y = (float)((double)(moby->pos).y + dVar40);
      (moby->pos).x = (float)((double)(moby->pos).x + dVar29);
      if (((float)(dVar39 / (double)*(float *)((int)pvVar8 + 0x60)) <
           (float)(longlong)(animationSpeed * 4.5)) && (DAT_0096a790 != -1)) {
        ____Hero_SetTimer_96a798(2);
        DAT_0096a794 = 0x1a;
        if ((DAT_0096befc != -1) &&
           ((g_SoundChannels[DAT_0096befc].pMoby == g_heroMobyPtr &&
            (g_SoundChannels[DAT_0096befc].state != '\0')))) {
          sound_Kill(DAT_0096befc);
        }
        DAT_0096befc = -1;
      }
      if (dVar39 <= dVar42) {
        Hero_PlaySound(5,0);
        if (((DAT_0096befc != -1) && (g_SoundChannels[DAT_0096befc].pMoby == g_heroMobyPtr))
           && (g_SoundChannels[DAT_0096befc].state != '\0')) {
          sound_Kill(DAT_0096befc);
        }
        DAT_0096befc = -1;
        DeleteMotionBlur(&DAT_0096b490);
        DAT_0096ad8a = 0;
        moby->state = '\0';
      }
    }
    iVar18 = CollLine(&local_180,lVar15 + 0x10,2,0,0);
    if (((((iVar18 != 0) && (iVar18 = CollHotspot(), iVar18 != 0)) &&
         ((g_CollOutput.pMoby == (MobyInstance *)0x0 ||
          (bVar21 = MB_isCrate(g_CollOutput.pMoby), !bVar21)))) && (g_CollOutput.poly != 0))
       || (*(short *)((int)pvVar8 + 0x76) != 0)) {
      bVar21 = DAT_0096a744 == 0;
      *(undefined2 *)((int)pvVar8 + 0x76) = 0;
      if (bVar21) {
        auVar43 = ZEXT416(0xffffffff);
        auVar43 = auVar43 | auVar43 << 0x20 | auVar43 << 0x40 | auVar43 << 0x60;
        auVar44 = vectorShiftLeftIntegerWord(auVar43,auVar43);
        auVar43 = loadVectorLeftIndexed(0x94,0x42c08c);
        auVar43 = auVar43 >> 0x60 & (GPiece<16>)0xffffffff;
        auVar45 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
        auVar43 = vectorMultiplyAddFloatingPoint
                            (auVar45,auVar43 | auVar43 << 0x20 | auVar43 << 0x40 | auVar43 << 0x60,
                             auVar44);
        auVar43 = vectorConvertToSignedFixedPointWordSaturate(auVar43,0);
        auVar43 = auVar43 >> 0x60 & (GPiece<16>)0xffffffff;
        uVar9 = storeVectorElementWordIndexed
                          (auVar43 | auVar43 << 0x20 | auVar43 << 0x40 | auVar43 << 0x60,0x6c,uVar24
                          );
        *(undefined4 *)((int)pvVar8 + 0x6cU & 0xfffffffc) = uVar9;
        DAT_0096a744 = 1;
        PlayMobySound(2,0,moby);
      }
      if (moby->state == '\n') {
        M71_0042b640(lVar15);
        *(float *)((int)pvVar8 + 0x60) = *(float *)((int)pvVar8 + 0x60) * 0.5;
        moby->state = '\v';
      }
    }
    fVar1 = 1.2;
    if (moby->state == '\v') {
      fVar1 = -0.37;
    }
    local_170 = *(float *)((int)pvVar8 + 0x40);
    dVar42 = (double)SQRT(*(float *)((int)pvVar8 + 0x48) * *(float *)((int)pvVar8 + 0x48) +
                          local_170 * local_170 +
                          *(float *)((int)pvVar8 + 0x44) * *(float *)((int)pvVar8 + 0x44));
    if (dVar42 == dVar27) {
      local_164 = *(undefined4 *)((int)pvVar8 + 0x4c);
      local_168 = 0.0;
      local_16c = 0.0;
      local_170 = 0.0;
    }
    else {
      local_168 = (float)((double)fVar1 / dVar42);
      local_170 = local_170 * local_168;
      local_16c = *(float *)((int)pvVar8 + 0x44) * local_168;
      local_168 = *(float *)((int)pvVar8 + 0x48) * local_168;
      local_164 = *(undefined4 *)((int)pvVar8 + 0x4c);
    }
    SetCollDamIn(0x3ff0000000000000,auStack_100,lVar15,0x10000);
    local_e8 = 0;
    local_f8 = 0x3f800000;
    local_e6 = (short)DAT_0096a75c + 1;
    local_f4 = 0x45afdf66;
    local_e7 = 1;
    GetBonePosition(lVar15,1,local_160);
    uVar41 = 0x3fd99999a0000000;
    uVar17 = CollMobySphere(0x3fd99999a0000000,local_160);
    if ((int)uVar17 == 0) {
      GetBonePosition(lVar15,0,local_160);
      uVar17 = CollMobySphere(uVar41,local_160);
    }
    if ((int)uVar17 == 0) {
      return uVar17;
    }
    if (DAT_0096a744 != 0) {
      return (ulonglong)DAT_0096a744;
    }
    if (g_CollOutput.pMoby == (MobyInstance *)0x0) {
      return ZEXT48(g_CollOutput.pMoby);
    }
    if (((g_CollOutput.pMoby)->pClass != (MobyClass *)0x0) &&
       ((short)(g_CollOutput.pMoby)->pClass->mode_bits == 0x14)) {
      return ZEXT48(g_CollOutput.pMoby);
    }
    iVar18 = MB_GetPvarsIfMobyHasThem(g_CollOutput.pMoby);
    if ((iVar18 != 0) &&
       ((1 < *(short *)(iVar18 + 0x1c) && ((int)*(short *)(iVar18 + 0x14) == (uint)local_e6)))) {
      return (longlong)*(short *)(iVar18 + 0x14);
    }
    Lerp_vec4(0.5,&local_150);
    dVar40 = 0.10000000149011612;
    iVar18 = 0;
    dVar38 = 2.0;
    dVar37 = 0.3490658402442932;
    dVar36 = 1.535889744758606;
    dVar30 = 0.05000000074505806;
    uVar35 = 0x3fc3333340000000;
    dVar28 = 30.5;
    uVar41 = 0x3f689374c0000000;
    dVar39 = 0.07000000029802322;
    dVar42 = 0.699999988079071;
    do {
      dVar29 = (double)MB_randRangeFloat((float)dVar40,(float)dVar38);
      MB_randInt(2);
      dVar31 = (double)MB_randRot();
      dVar32 = (double)MB_randRangeFloat((float)dVar37,(float)dVar36);
      dVar33 = (double)MB_randRangeFloat((float)dVar30,(float)dVar40);
      MB_SphericalToVector((float)dVar33,(float)dVar31,(float)dVar32,afStack_140);
      dVar31 = (double)MB_randRangeSigned(dVar27,uVar35);
      local_150 = (float)((double)local_150 + dVar31);
      dVar31 = (double)MB_randRangeSigned(dVar27,uVar35);
      local_14c = (float)((double)local_14c + dVar31);
      dVar31 = (double)MB_randRangeSigned(dVar27,uVar35);
      local_148 = (float)((double)local_148 + dVar31);
      local_d0 = (longlong)(int)((double)animationSpeed * dVar28);
      SpawnPart_53
                ((double)(float)(dVar29 * dVar40),dVar29,uVar41,&local_150,
                 (int)((double)animationSpeed * dVar28));
      local_d0 = (longlong)(int)((double)animationSpeed * dVar28);
      SpawnPart_53
                ((double)(float)(dVar29 * dVar39),(double)(float)(dVar29 * dVar42),uVar41,&local_150
                 ,(int)((double)animationSpeed * dVar28));
      iVar18 = iVar18 + 1;
    } while (iVar18 < 5);
    auVar43 = ZEXT416(0xffffffff);
    auVar43 = auVar43 | auVar43 << 0x20 | auVar43 << 0x40 | auVar43 << 0x60;
    auVar44 = vectorShiftLeftIntegerWord(auVar43,auVar43);
    auVar43 = loadVectorLeftIndexed(0x94,0x42c08c);
    auVar45 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
    auVar43 = auVar43 >> 0x60 & (GPiece<16>)0xffffffff;
    auVar43 = vectorMultiplyAddFloatingPoint
                        (auVar45,auVar43 | auVar43 << 0x20 | auVar43 << 0x40 | auVar43 << 0x60,
                         auVar44);
    auVar43 = vectorConvertToSignedFixedPointWordSaturate(auVar43,0);
    auVar43 = auVar43 >> 0x60 & (GPiece<16>)0xffffffff;
    uVar9 = storeVectorElementWordIndexed
                      (auVar43 | auVar43 << 0x20 | auVar43 << 0x40 | auVar43 << 0x60,0x6c,uVar24);
    *(undefined4 *)((int)pvVar8 + 0x6cU & 0xfffffffc) = uVar9;
    iVar18 = 0;
    DAT_0096a744 = 1;
    if (g_CollOutput.pMoby != (MobyInstance *)0x0) {
      iVar18 = MB_GetPvarsIfMobyHasThem(g_CollOutput.pMoby);
    }
    iVar25 = 0;
    if ((iVar18 != 0) && (iVar25 = 0, *(char *)(iVar18 + 9) == '\x01')) {
      iVar25 = 1;
    }
    iVar18 = PlayMobySound(iVar25,0,moby);
    return (longlong)iVar18;
  }
  if (bVar5 != 0) {
    DAT_0096ad8c = 0;
    return (ulonglong)bVar5;
  }
  moby->field80_0xb8 = g_heroMobyPtr;
  if (PVar14 == FIRST_PERSON_VIEW) {
    if ((g_Pad.downButtons & (R1|R2)) != 0) {
      DrawTargetCrosshair(1.0,moby,0xff917267,0x42c08c);
    }
    *(undefined2 *)((int)pvVar8 + 0x7e) = 0;
    MB_SphericalToVector(10.0,GameCamera.rot.radius,-GameCamera.rot.elevation,local_220);
    iVar18 = CollLine(0x951500,local_220,4,g_heroMobyPtr,0);
    fVar1 = g_CollOutput.ip.x;
    if (iVar18 != 0) {
      *(undefined2 *)((int)pvVar8 + 0x7e) = 1;
      *(float *)((int)pvVar8 + 0x50) = fVar1;
      *(float *)((int)pvVar8 + 0x54) = g_CollOutput.ip.y;
      *(float *)((int)pvVar8 + 0x58) = g_CollOutput.ip.z;
      *(float *)((int)pvVar8 + 0x5c) = g_CollOutput.ip.w;
    }
  }
  RegisterPostDraw(&PTR_M711_0042ab78_0070e310,moby);
  bVar5 = moby->animationId;
  bVar6 = moby->field43_0x70;
  if (bVar5 != 0) {
    if (bVar5 == 0xe) {
      if ((int)((ulonglong)bVar6 & 2) == 0) {
        return (ulonglong)bVar6 & 2;
      }
      local_d0 = (longlong)(int)(animationSpeed * 5.5);
      uVar24 = MB_SetAnimation(lVar15,1,0,(int)(animationSpeed * 5.5));
      return uVar24;
    }
    if (DAT_0096bd8e != '\0') {
      if ((bVar5 != 0x10) && (bVar5 != 0xf)) {
        local_d0 = (longlong)(int)(animationSpeed * 4.5);
        uVar24 = MB_SetAnimation(lVar15,0xf,0,(int)(animationSpeed * 4.5));
        return uVar24;
      }
      if ((bVar6 & 2) == 0) {
        return (ulonglong)bVar5;
      }
      if (bVar5 != 0xf) {
        return (ulonglong)bVar5;
      }
      local_d0 = (longlong)(int)(animationSpeed * 5.5);
      uVar24 = MB_SetAnimation(lVar15,0x10,0,(int)(animationSpeed * 5.5));
      return uVar24;
    }
    if ((bVar5 == 0x10) || (bVar5 == 0xf)) {
      local_d0 = (longlong)(int)(animationSpeed * 2.5);
      uVar24 = MB_SetAnimation(lVar15,0xe,0,(int)(animationSpeed * 2.5));
      return uVar24;
    }
  }
  if ((g_heroState != BOLT_CRANK_TURNING && (bVar6 & 2) != 0) && (bVar5 != 1)) {
    local_d0 = (longlong)(int)(animationSpeed * 5.5);
    MB_SetAnimation(lVar15,1,0,(int)(animationSpeed * 5.5));
  }
  pMVar13 = g_heroMobyPtr;
  if (g_heroState == BOLT_CRANK_TURNING) {
    lVar16 = (ZERO_MASK((0x40 - (uint)g_heroMobyPtr->animationId)) & 8U) + 0xb;
    uVar20 = (u8)lVar16;
    iVar18 = (int)lVar16;
    bVar26 = (iVar18 == 0x13) << 1;
    if (g_heroMobyPtr->animationId == 0x41) {
      uVar20 = '\x12';
    }
    else if ((iVar18 != 0x13) && (iVar18 != 0x12)) {
      local_d0 = (longlong)(int)(animationSpeed * 7.5);
      MB_SetAnimation(lVar15,lVar16,0,(int)(animationSpeed * 7.5));
      goto LAB_0042c630;
    }
    moby->updateId = uVar20;
    moby->animationId = uVar20;
    moby->animationBlend = pMVar13->animationBlend;
    moby->previousAnimationFrame = pMVar13->previousAnimationFrame;
    cVar7 = pMVar13->animationFrame;
    moby->animationFrame = cVar7;
    if (pMVar13->updateId != pMVar13->animationId) {
      moby->previousAnimationFrame = cVar7;
    }
    UpdateMobyFrameData(moby);
  }
  else if ((DAT_0096bd70 == 0x3b) && (g_heroStateTimer == 1)) {
    local_d0 = (longlong)(int)(animationSpeed * 17.5);
    MB_SetAnimation(lVar15,1,0,(int)(animationSpeed * 17.5));
  }
LAB_0042c630:
  if ((((g_heroState != UNK_BONK && g_heroState != WRENCH_ATTACK) &&
       (g_heroState != GRINDRAIL_WRENCH_ATTACK)) && (g_heroState != MAGNERAMP_ATTACK)) &&
     ((g_heroState != HYPER_STRIKE && (moby->animationId < 6 && 2 < moby->animationId)))) {
    local_d0 = (longlong)(int)(animationSpeed * 4.5);
    MB_SetAnimation(lVar15,1,0,(int)(animationSpeed * 4.5));
  }
  pMVar13 = g_heroMobyPtr;
  if ((g_heroMobyPtr->animationId != g_heroMobyPtr->updateId) ||
     (2 < (int)((uint)(byte)g_heroMobyPtr->animationFrame -
               (uint)(byte)g_heroMobyPtr->previousAnimationFrame))) {
    *(short *)((int)pvVar8 + 0x74) = *(short *)((int)pvVar8 + 0x74) + 1;
  }
  moby->unk58 = g_heroAnimSpeed;
  uVar24 = ZEXT48(&DAT_0072317c) + (ulonglong)DAT_0096a740 * 0x2c & 0xffffffff;
  if ((g_heroStateType != (undefined4 *)0x6) && (g_heroState != GRINDRAIL_WRENCH_ATTACK)) {
    return uVar24;
  }
  bVar21 = true;
  puVar23 = g_heroStateType;
  if (DAT_0096a77c == 0) {
    puVar23 = (undefined4 *)0xaa8;
    auVar43 = loadVectorLeftIndexed(0x1c,uVar24);
    auVar44 = loadVectorRightIndexed(0x2c,uVar24);
    auVar45 = loadVectorLeftIndexed(0xaa8,0x969ce0);
    auVar46 = vectorConvertFromSignedFixedPointWord(auVar43 | auVar44,0);
    auVar43 = auVar45 >> 0x60 & (GPiece<16>)0xffffffff;
    auVar44 = auVar43 | auVar43 << 0x20 | auVar43 << 0x40 | auVar43 << 0x60;
    auVar43 = auVar46 >> 0x60 & (GPiece<16>)0xffffffff;
    vectorCompareGreaterThanOrEqualToFloatingPoint
              (auVar44,auVar43 | auVar43 << 0x20 | auVar43 << 0x40 | auVar43 << 0x60);
    if ((bool)(bVar26 >> 1 & 1)) goto LAB_0042c790;
    auVar43 = loadVectorLeftIndexed(0x20,uVar24);
    auVar45 = loadVectorRightIndexed(0x30,uVar24);
    auVar43 = vectorConvertFromSignedFixedPointWord(auVar43 | auVar45,0);
    auVar43 = auVar43 >> 0x60 & (GPiece<16>)0xffffffff;
    vectorCompareGreaterThanFloatingPoint
              (auVar44,auVar43 | auVar43 << 0x20 | auVar43 << 0x40 | auVar43 << 0x60);
    if (!(bool)(bVar26 >> 1 & 1)) goto LAB_0042c790;
  }
  else {
LAB_0042c790:
    bVar21 = false;
  }
  sVar19 = *(short *)((int)pvVar8 + 0x74);
  lVar16 = (longlong)sVar19;
  if (*(short *)((int)pvVar8 + 0x7c) != sVar19) {
    uVar20 = pMVar13->updateId;
    if (uVar20 == pMVar13->animationId) {
      uVar22 = (int)g_heroAnimFrame >> 0x1f;
      if (uVar20 == '\x17') {
        uVar22 = uVar22 >> 0x1f ^ 1;
      }
      else if (uVar20 == '\x18') {
        uVar22 = uVar22 >> 0x1f ^ 1;
      }
      else if (uVar20 == '\x19') {
        lVar16 = (longlong)(int)uVar22;
        puVar23 = (undefined4 *)(uVar22 >> 1);
        uVar22 = (uint)((ulonglong)
                        ((longlong)(int)(((uint)puVar23 ^ g_heroAnimFrame) - uVar22) +
                        -0x41400000) >> 0x3f) ^ 1;
      }
      else {
        if (uVar20 != '+') goto LAB_0042c880;
        lVar16 = (longlong)(int)uVar22;
        puVar23 = (undefined4 *)(uVar22 >> 1);
        uVar22 = (uint)((ulonglong)
                        ((longlong)(int)(((uint)puVar23 ^ g_heroAnimFrame) - uVar22) +
                        -0x41b80000) >> 0x3f) ^ 1;
      }
      if (uVar22 != 0) {
        *(undefined4 *)((int)pvVar8 + 0x70) = 0x3f800000;
        *(short *)((int)pvVar8 + 0x7c) = sVar19;
      }
    }
  }
LAB_0042c880:
  dVar42 = (double)g_heroRotation.z;
  dVar39 = 0.0;
  DAT_0096a700 = DAT_0096a6e0;
  DAT_0096a704 = DAT_0096a6e4;
  DAT_0096a708 = DAT_0096a6e8;
  DAT_0096a70c = DAT_0096a6ec;
  DAT_0096a6f0 = DAT_0096a6d0;
  DAT_0096a6f4 = DAT_0096a6d4;
  DAT_0096a6f8 = DAT_0096a6d8;
  DAT_0096a6fc = DAT_0096a6dc;
  dVar27 = dVar39;
  GetBonePosition(lVar15,1,&DAT_0096a6e0,lVar16,puVar23);
  GetBonePosition(g_heroMobyPtr,0,&DAT_0096a6d0);
  if (((g_heroState == WRENCH_ATTACK) || (g_heroState == MAGNERAMP_ATTACK)) ||
     (g_heroState == GRINDRAIL_WRENCH_ATTACK)) {
    dVar42 = (double)FUN_005e8338((double)(DAT_0096a6e0 - g_heroPosition.x),
                                  (double)(DAT_0096a6e4 - g_heroPosition.y));
    if (*(int *)(&DAT_00723180 + DAT_0096a740 * 0x2c) == 1) {
      dVar42 = (double)FastWrapRot((float)dVar42,-1.5707964);
    }
    else {
      dVar42 = (double)FastWrapRot((float)dVar42,1.5707964);
    }
  }
  fVar2 = DAT_0096a6e4 - DAT_0096a6d4;
  fVar3 = DAT_0096a6e0 - DAT_0096a6d0;
  fVar4 = DAT_0096a6e8 - DAT_0096a6d8;
  dVar30 = (double)SQRT(fVar4 * fVar4 + fVar3 * fVar3 + fVar2 * fVar2);
  fVar1 = (float)((double)(float)(dVar30 + 0.17000000178813934) / dVar30);
  dVar28 = dVar27;
  if (dVar27 - dVar30 < 0.0) {
    dVar28 = (double)(fVar3 * fVar1);
  }
  dVar36 = dVar27;
  if (dVar27 - dVar30 < 0.0) {
    dVar36 = (double)(fVar2 * fVar1);
  }
  dVar37 = dVar27;
  if (dVar27 - dVar30 < 0.0) {
    dVar37 = (double)(fVar4 * fVar1);
  }
  if (dVar30 - dVar27 < 0.0) {
    dVar28 = (double)(fVar3 * fVar1);
  }
  if (dVar30 - dVar27 < 0.0) {
    dVar36 = (double)(fVar2 * fVar1);
  }
  if (dVar30 - dVar27 < 0.0) {
    dVar37 = (double)(fVar4 * fVar1);
  }
  if (((g_heroStateType != (undefined4 *)0xf) && (g_heroState != MAGNERAMP_ATTACK)) &&
     (g_heroState != HYPER_STRIKE)) {
    dVar27 = (double)FUN_005e8338((double)(DAT_0096a6e0 - g_heroPosition.x),
                                  (double)(DAT_0096a6e4 - g_heroPosition.y));
    dVar27 = (double)FastSubRots(g_heroRotation.z,(float)dVar27);
    if (1.5707963705062866 < dVar27) {
      bVar21 = false;
    }
    M71_0042be08(local_210);
    dVar28 = (double)(float)dVar28;
  }
  DAT_0096a6e0 = (float)((double)DAT_0096a6d0 + dVar28);
  DAT_0096a6e4 = DAT_0096a6d4 + (float)dVar36;
  DAT_0096a6e8 = DAT_0096a6d8 + (float)dVar37;
  DAT_0096a6ec = DAT_0096a6dc;
  if (((g_heroState != MAGNERAMP_ATTACK && g_heroState != GRINDRAIL_WRENCH_ATTACK) &&
      (dVar27 < 1.2217304706573486)) &&
     (local_d0 = (longlong)(int)(animationSpeed * 10.5),
     (int)(animationSpeed * 10.5) < g_heroStateTimer)) {
    FUN_005e8338((double)(DAT_0096a6e0 - g_heroPosition.x),(double)(DAT_0096a6e4 - g_heroPosition.y)
                );
    dVar40 = 1.570796251296997;
    dVar38 = 3.141592502593994;
    dVar37 = -3.141592502593994;
    dVar36 = -0.16666656732559204;
    dVar30 = 0.008333025500178337;
    dVar28 = -0.0001980741071747616;
    dVar27 = 2.601886990305502e-06;
    M71_0042be08(local_1e0);
    if ((((DAT_0096a744 == 0) &&
         (iVar18 = CollLine(local_200,local_1f0,2,0,0), iVar18 != 0)) &&
        (iVar18 = CollHotspot(), iVar18 != 0)) &&
       ((g_CollOutput.pMoby == (MobyInstance *)0x0 ||
        (iVar18 = ____MB_IsInvalidOrClass502(), iVar18 != 0)))) {
      DAT_0096a744 = 1;
      PlayMobySound(2,0,moby);
      M71_0042b640(lVar15);
      if (g_CollOutput.pMoby != (MobyInstance *)0x0) {
        dVar29 = (double)(float)(dVar42 + dVar40);
        local_1c8 = (float)dVar39;
        dVar40 = (double)(float)(dVar38 - dVar42);
        if (dVar42 - (double)(float)(dVar38 - dVar42) < 0.0) {
          dVar40 = dVar42;
        }
        dVar31 = (double)(float)(dVar38 - dVar29);
        if (dVar29 - (double)(float)(dVar38 - dVar29) < 0.0) {
          dVar31 = dVar29;
        }
        dVar38 = (double)(float)(dVar37 - dVar42);
        if ((double)(float)(dVar37 - dVar42) - dVar40 < 0.0) {
          dVar38 = dVar40;
        }
        dVar40 = (double)(float)(dVar37 - dVar29);
        if ((double)(float)(dVar37 - dVar29) - dVar31 < 0.0) {
          dVar40 = dVar31;
        }
        dVar37 = (double)(float)(dVar38 * dVar38);
        dVar29 = (double)(float)(dVar40 * dVar40);
        dVar33 = (double)(float)(dVar37 * (double)(float)(dVar37 * dVar38));
        dVar31 = (double)(float)(dVar29 * (double)(float)(dVar29 * dVar40));
        dVar32 = (double)(float)(dVar37 * dVar33);
        dVar34 = (double)(float)(dVar29 * dVar31);
        local_1cc = (float)((double)(float)(dVar37 * dVar32) * dVar27 +
                           (double)(float)(dVar32 * dVar28 +
                                          (double)(float)(dVar33 * dVar30 +
                                                         (double)(float)((double)(float)(dVar37 * 
                                                  dVar38) * dVar36 + dVar38))));
        local_1d0 = (float)((double)(float)(dVar29 * dVar34) * dVar27 +
                           (double)(float)(dVar34 * dVar28 +
                                          (double)(float)(dVar31 * dVar30 +
                                                         (double)(float)((double)(float)(dVar29 * 
                                                  dVar40) * dVar36 + dVar40))));
        CollDamageMobyDirect
                  (1.0,g_CollOutput.pMoby,moby,0x10000,0x42c08c,&g_CollOutput.ip.x,&local_1d0);
      }
    }
  }
  uVar24 = (ulonglong)g_heroState;
  if (g_heroState == HYPER_STRIKE) {
    iVar18 = Hero_MayaFrameTrigger(27.0);
    uVar24 = (ulonglong)iVar18;
    if (iVar18 != 0) {
      PlayMobySound(2,0,moby);
      local_1c0 = DAT_0096a6e0;
      local_1bc = DAT_0096a6e4;
      local_1b8 = DAT_0096a6e8;
      local_1b4 = DAT_0096a6ec;
      local_1b0 = DAT_0096a6e0;
      local_1ac = DAT_0096a6e4;
      local_1a8 = DAT_0096a6e8;
      local_1a4 = DAT_0096a6ec;
      Hero_SubGravity(0.7,&local_1c0,&local_1c0);
      Hero_SubGravity(-0.9,&local_1b0,&local_1b0);
      uVar24 = CollLine(&local_1c0,&local_1b0,2,0,0);
      if ((int)uVar24 != 0) {
        uVar24 = M71_0042b640(lVar15);
      }
    }
  }
  if (!bVar21) {
    return uVar24;
  }
  iVar18 = 1;
  dVar28 = 1.0;
  dVar27 = dVar28;
  if (g_heroState == HYPER_STRIKE) {
    iVar18 = 2;
    dVar27 = 1.5499999523162842;
  }
  local_d0 = (longlong)iVar18;
  fVar1 = (float)(dVar42 + 1.570796251296997);
  dVar30 = (double)(float)(3.141592502593994 - dVar42);
  if (dVar42 - (double)(float)(3.141592502593994 - dVar42) < 0.0) {
    dVar30 = dVar42;
  }
  fVar2 = 3.1415925 - fVar1;
  if (fVar1 - (3.1415925 - fVar1) < 0.0) {
    fVar2 = fVar1;
  }
  dVar36 = (double)(float)(-3.141592502593994 - dVar42);
  if ((double)(float)(-3.141592502593994 - dVar42) - dVar30 < 0.0) {
    dVar36 = dVar30;
  }
  fVar3 = -3.1415925 - fVar1;
  if ((-3.1415925 - fVar1) - fVar2 < 0.0) {
    fVar3 = fVar2;
  }
  dVar30 = (double)(float)(dVar36 * dVar36);
  fVar4 = fVar3 * fVar3;
  dVar37 = (double)(float)(dVar30 * (double)(float)(dVar30 * dVar36));
  fVar1 = fVar4 * fVar4 * fVar3;
  dVar42 = (double)(float)(dVar30 * dVar37);
  fVar2 = fVar4 * fVar1;
  local_19c = (float)(dVar30 * dVar42) * 2.601887e-06 +
              (float)(dVar42 * -0.0001980741071747616 +
                     (double)(float)(dVar37 * 0.008333025500178337 +
                                    (double)(float)((double)(float)(dVar30 * dVar36) *
                                                    -0.16666656732559204 + dVar36)));
  local_198 = (float)dVar39;
  local_1a0 = fVar4 * fVar2 * 2.601887e-06 +
              fVar2 * -0.0001980741 + fVar1 * 0.0083330255 + fVar4 * fVar3 * -0.16666657 + fVar3;
  SetCollDamIn((double)local_d0,&local_130,lVar15,0x10000);
  local_128 = (float)dVar28;
  local_117 = 1;
  local_118 = 0;
  local_124 = 0x45afdf66;
  local_116 = moby->oClass;
  dVar30 = (double)SQRT(local_130 * local_130 + local_12c * local_12c);
  dVar28 = (double)(local_130 * (float)(dVar27 / dVar30));
  dVar42 = (double)(local_12c * (float)(dVar27 / dVar30));
  dVar27 = dVar39;
  if (dVar39 - dVar30 < 0.0) {
    dVar27 = dVar28;
  }
  dVar36 = dVar39;
  if (dVar39 - dVar30 < 0.0) {
    dVar36 = dVar42;
  }
  if (dVar30 - dVar39 < 0.0) {
    dVar27 = dVar28;
  }
  if (dVar30 - dVar39 < 0.0) {
    dVar36 = dVar42;
  }
  local_130 = (float)dVar27;
  local_12c = (float)dVar36;
  iVar18 = MB_CollLineMulti
                     (&DAT_0096a6d0,&DAT_0096a6e0,&DAT_0096a6f0,&DAT_0096a700,g_heroMobyPtr,
                      &local_130,5);
  bVar21 = false;
  if ((iVar18 != 0) && (bVar21 = false, g_CollOutput.pMoby != (MobyInstance *)0x0)) {
    iVar18 = MB_GetPvarsIfMobyHasThem(g_CollOutput.pMoby);
    if ((iVar18 == 0) || ((*(ushort *)(iVar18 + 0x1e) & 2) == 0)) {
      bVar21 = false;
      if (DAT_0096a744 == 0) {
        sVar19 = 0;
        if (g_CollOutput.pMoby != (MobyInstance *)0x0) {
          sVar19 = 0;
          if ((g_CollOutput.pMoby)->pClass != (MobyClass *)0x0) {
            sVar19 = (short)(g_CollOutput.pMoby)->pClass->mode_bits;
          }
        }
        bVar21 = false;
        if (sVar19 != 0x14) {
          iVar18 = 0;
          DAT_0096a744 = 1;
          if (g_CollOutput.pMoby != (MobyInstance *)0x0) {
            iVar18 = MB_GetPvarsIfMobyHasThem(g_CollOutput.pMoby);
          }
          iVar25 = 0;
          if ((iVar18 != 0) && (iVar25 = 0, *(char *)(iVar18 + 9) == '\x01')) {
            iVar25 = 1;
          }
          PlayMobySound(iVar25,0,moby);
          M71_0042b640(lVar15);
          bVar21 = false;
        }
      }
    }
    else {
      bVar21 = true;
    }
  }
  fVar2 = (float)((double)DAT_0096a6e4 - (double)DAT_0096a6d4);
  fVar3 = (float)((double)DAT_0096a6e0 - (double)DAT_0096a6d0);
  fVar4 = (float)((double)DAT_0096a6e8 - (double)DAT_0096a6d8);
  local_184 = DAT_0096a6ec;
  dVar42 = (double)SQRT(fVar4 * fVar4 + fVar3 * fVar3 + fVar2 * fVar2);
  fVar1 = (float)((double)(float)(dVar42 - 0.08500000089406967) / dVar42);
  dVar27 = dVar39;
  if (dVar39 - dVar42 < 0.0) {
    dVar27 = (double)(fVar1 * fVar4);
  }
  dVar28 = dVar39;
  if (dVar39 - dVar42 < 0.0) {
    dVar28 = (double)(fVar1 * fVar2);
  }
  dVar30 = dVar39;
  if (dVar39 - dVar42 < 0.0) {
    dVar30 = (double)(fVar1 * fVar3);
  }
  if (dVar42 - dVar39 < 0.0) {
    dVar27 = (double)(fVar1 * fVar4);
  }
  if (dVar42 - dVar39 < 0.0) {
    dVar28 = (double)(fVar1 * fVar2);
  }
  if (dVar42 - dVar39 < 0.0) {
    dVar30 = (double)(fVar1 * fVar3);
  }
  local_188 = (float)(dVar27 + (double)DAT_0096a6d8);
  local_18c = (float)(dVar28 + (double)DAT_0096a6d4);
  local_190 = (float)(dVar30 + (double)DAT_0096a6d0);
  fVar1 = 0.35;
  puVar23 = g_heroStateType;
  if (g_heroStateType == (undefined4 *)0xf) {
    puVar23 = &DAT_0042c08c;
    fVar1 = 0.7;
  }
  if (g_heroState == HYPER_STRIKE) {
    puVar23 = &DAT_0042c08c;
    fVar1 = 0.47;
  }
  uVar24 = CollMobySphere((double)fVar1,&local_190,puVar23,0,g_heroMobyPtr,&local_130);
  if (((int)uVar24 != 0) &&
     (((g_CollMobyHits == 0 || (*(int *)(g_CollMobyHits + 0x24) == 0)) ||
      (sVar19 = *(short *)(*(int *)(g_CollMobyHits + 0x24) + 0x46), uVar24 = (ulonglong)sVar19,
      sVar19 != 0x12)))) {
    uVar24 = MB_GetPvarsIfMobyHasThem(g_CollOutput.pMoby);
    if (((int)uVar24 != 0) &&
       (uVar24 = (ulonglong)*(ushort *)((int)uVar24 + 0x1e) & 2, (int)uVar24 != 0))
    goto LAB_0042d334;
    if (DAT_0096a744 == 0) {
      iVar18 = 0;
      DAT_0096a744 = 1;
      if (g_CollOutput.pMoby != (MobyInstance *)0x0) {
        iVar18 = MB_GetPvarsIfMobyHasThem(g_CollOutput.pMoby);
      }
      iVar25 = 0;
      if ((iVar18 != 0) && (iVar25 = 0, *(char *)(iVar18 + 9) == '\x01')) {
        iVar25 = 1;
      }
      PlayMobySound(iVar25,0,moby);
      uVar24 = M71_0042b640(lVar15);
    }
  }
  if (!bVar21) {
    return uVar24;
  }
LAB_0042d334:
  TransitionMovement(0x21,1);
  if (g_CollOutput.pMoby == (MobyInstance *)0x0) {
    uVar24 = FastWrapRot(g_heroRotation.z,3.1415927);
    dVar27 = extraout_f1_00;
  }
  else {
    uVar24 = FUN_005e8338((double)(g_heroPosition.x - ((g_CollOutput.pMoby)->pos).x),
                          (double)(g_heroPosition.y - ((g_CollOutput.pMoby)->pos).y));
    dVar27 = extraout_f1;
  }
  DAT_0096a748 = (float)dVar27;
  return uVar24;
}


