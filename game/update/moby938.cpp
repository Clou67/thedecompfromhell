// game/update/moby938.cpp -- reconstructed from NPEA00385 EBOOT
// STATUS: NOT STARTED (raw Ghidra output)
// 4 functions, 0x4c2b00-0x4c467c
#include "game/update/moby938.h"
#include "game/collproc.h"
#include "game/hero.h"
#include "game/mobyfunc.h"
#include "game/mobyproc.h"
#include "game/mobyutil.h"
#include "game/partupd.h"
#include "game/sound.h"
#include "game/update/moby121.h"
#include "game/update/moby998.h"
#include "idol/fastfunc.h"

// 0x04c2b00 (0x14 bytes)
void M938_004c2b00(void)

{
  DAT_008f4c3c = 0x10000;
  return;
}


// 0x04c2b28 (0x17c bytes)
MobyInstance * FUN_004c2b28(undefined4 param_1,f32 *param_2,undefined4 *param_3)

{
  float fVar1;
  undefined4 *puVar2;
  undefined2 uVar3;
  MobyInstance *pMVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  GPiece<16> auVar8;
  GPiece<16> auVar9;
  GPiece<16> auVar10;
  
  pMVar4 = CreateMoby(BOMB_03AA);
  if (pMVar4 != (MobyInstance *)0x0) {
    puVar2 = (undefined4 *)pMVar4->pVar;
    pMVar4->updateDistance = -1;
    pMVar4->drawDistance = 0x7f;
    pMVar4->enabled = '\x01';
    pMVar4->state = '\0';
    *(undefined2 *)((int)puVar2 + 0x16) = 0;
    puVar2[4] = param_1;
    (pMVar4->pos).x = *param_2;
    (pMVar4->pos).y = param_2[1];
    fVar1 = param_2[2];
    (pMVar4->pos).z = fVar1;
    (pMVar4->pos).w = param_2[3];
    (pMVar4->pos).z = fVar1 + DAT_008f4c60;
    *puVar2 = *param_3;
    puVar2[1] = param_3[1];
    puVar2[2] = param_3[2];
    puVar2[3] = param_3[3];
    dVar7 = 1.0471975803375244;
    dVar6 = 3.1415927410125732;
    dVar5 = (double)MB_randRangeFloat
                              (g_FrameTime * 1.0471976,g_FrameTime * 3.1415927);
    puVar2[6] = (float)dVar5;
    dVar5 = (double)MB_randRangeFloat
                              ((float)((double)g_FrameTime * dVar7),
                               (float)((double)g_FrameTime * dVar6));
    auVar8 = ZEXT416(0xffffffff);
    auVar8 = auVar8 | auVar8 << 0x20 | auVar8 << 0x40 | auVar8 << 0x60;
    puVar2[7] = (float)dVar5;
    auVar10 = loadVectorLeftIndexed(8,0x4c2b18);
    auVar9 = vectorShiftLeftIntegerWord(auVar8,auVar8);
    auVar8 = auVar10 >> 0x60 & (GPiece<16>)0xffffffff;
    auVar10 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
    auVar8 = vectorMultiplyAddFloatingPoint
                       (auVar10,auVar8 | auVar8 << 0x20 | auVar8 << 0x40 | auVar8 << 0x60,auVar9);
    auVar8 = vectorConvertToSignedFixedPointWordSaturate(auVar8,0);
    auVar8 = vectorSplatHalfWord(auVar8,1);
    uVar3 = storeVectorElementHalfWordIndexed(auVar8,0x14,ZEXT48(puVar2));
    *(undefined2 *)(puVar2 + 5) = uVar3;
    UpdateMobyTransform(pMVar4);
  }
  return pMVar4;
}


// 0x04c2ce8 (0xcf8 bytes)
// inlined: FastAtan2 @0x4c3024, FastAtan2 @0x4c31e0, FastRSqrt @0x4c343c, FastAtan2 @0x4c36ac, FastAtan2 @0x4c3870
// strings: 004c2cd0: '=VwP_q' (raw)

undefined8
M938_004c2ce8
          (MobyInstance *param_1,float *param_2,undefined8 param_3,undefined8 param_4)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  short sVar7;
  ulonglong *puVar8;
  int iVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  ulonglong uVar14;
  int iVar18;
  ulonglong uVar15;
  longlong lVar16;
  longlong lVar17;
  float *pfVar20;
  longlong lVar19;
  longlong lVar21;
  ulonglong unaff_r26;
  ulonglong unaff_r27;
  ulonglong unaff_r28;
  ulonglong unaff_r29;
  ulonglong unaff_r30;
  ulonglong unaff_r31;
  ulonglong in_LR;
  longlong lVar22;
  double dVar23;
  double dVar24;
  double dVar25;
  double dVar26;
  double dVar27;
  ulonglong in_f28;
  ulonglong in_f29;
  ulonglong in_f30;
  double dVar28;
  ulonglong in_f31;
  double dVar29;
  undefined8 uVar30;
  undefined8 uStack00000040;
  undefined8 uStack00000048;
  
  uVar14 = ZEXT48(&stack0x00000000);
  lVar17 = uVar14 - 0x170;
  puVar8 = (ulonglong *)lVar17;
  *puVar8 = uVar14;
  puVar8[0x30] = in_LR;
  puVar8[0x2a] = in_f28;
  puVar8[0x2b] = in_f29;
  puVar8[0x2c] = in_f30;
  puVar8[0x2d] = in_f31;
  puVar8[0x29] = unaff_r31;
  puVar8[0x28] = unaff_r30;
  sVar7 = *(short *)(param_2 + 5);
  puVar8[0x26] = unaff_r28;
  puVar8[0x27] = unaff_r29;
  puVar8[0x25] = unaff_r27;
  puVar8[0x24] = unaff_r26;
  if (sVar7 != 0) {
    return 0;
  }
  uStack00000040 = param_3;
  uStack00000048 = param_4;
  iVar18 = CollLine(uVar14 + 0x40 & 0xffffffff,&param_1->pos,0x10,param_1,0);
  if (iVar18 != 0) {
    if (g_CollOutput.pMoby != (MobyInstance *)0x0) {
      fVar1 = (param_1->pos).x - ((g_CollOutput.pMoby)->pos).x;
      fVar6 = (param_1->pos).y - ((g_CollOutput.pMoby)->pos).y;
      dVar25 = (double)g_CollOutput.ip.x;
      fVar2 = (param_1->pos).z - ((g_CollOutput.pMoby)->pos).z;
      g_CollOutput.normal.w = (param_1->pos).w;
      g_CollOutput.normal.x = fVar1;
      g_CollOutput.normal.y = fVar6;
      g_CollOutput.normal.z = fVar2;
      (param_1->pos).x = g_CollOutput.ip.x;
      dVar26 = (double)g_CollOutput.ip.y;
      (param_1->pos).y = g_CollOutput.ip.y;
      dVar27 = (double)g_CollOutput.ip.z;
      fVar4 = SQRT(fVar2 * fVar2 + fVar1 * fVar1 + fVar6 * fVar6);
      (param_1->pos).z = g_CollOutput.ip.z;
      (param_1->pos).w = g_CollOutput.ip.w;
      dVar28 = 0.0;
      fVar5 = (g_FrameTimeSq * 9.7) / fVar4;
      dVar24 = dVar28;
      if (0.0 - fVar4 < 0.0) {
        dVar24 = (double)(fVar2 * fVar5);
      }
      dVar29 = dVar28;
      if (0.0 - fVar4 < 0.0) {
        dVar29 = (double)(fVar6 * fVar5);
      }
      dVar23 = dVar28;
      if (0.0 - fVar4 < 0.0) {
        dVar23 = (double)(fVar1 * fVar5);
      }
      if (fVar4 - 0.0 < 0.0) {
        dVar24 = (double)(fVar2 * fVar5);
      }
      if (fVar4 - 0.0 < 0.0) {
        dVar29 = (double)(fVar6 * fVar5);
      }
      if (fVar4 - 0.0 < 0.0) {
        dVar23 = (double)(fVar1 * fVar5);
      }
      (param_1->pos).z = (float)(dVar27 + dVar24);
      (param_1->pos).y = (float)(dVar26 + dVar29);
      (param_1->pos).x = (float)(dVar25 + dVar23);
      FastVecReflect(param_2,param_2,0xa10980);
      *param_2 = *param_2 * 0.35;
      param_2[1] = param_2[1] * 0.35;
      param_2[2] = param_2[2] * 0.35;
      fVar4 = g_CollOutput.normal.z;
      fVar1 = (param_1->rotation).z;
      fVar6 = fVar1 + 1.5707963;
      fVar2 = 3.1415925 - fVar1;
      if (fVar1 - (3.1415925 - fVar1) < 0.0) {
        fVar2 = fVar1;
      }
      fVar5 = 3.1415925 - fVar6;
      if (fVar6 - (3.1415925 - fVar6) < 0.0) {
        fVar5 = fVar6;
      }
      fVar3 = -3.1415925 - fVar1;
      if ((-3.1415925 - fVar1) - fVar2 < 0.0) {
        fVar3 = fVar2;
      }
      fVar1 = -3.1415925 - fVar6;
      if ((-3.1415925 - fVar6) - fVar5 < 0.0) {
        fVar1 = fVar5;
      }
      fVar6 = fVar3 * fVar3;
      dVar25 = (double)g_CollOutput.normal.z;
      fVar2 = fVar1 * fVar1;
      fVar11 = fVar6 * fVar6 * fVar3;
      fVar5 = fVar2 * fVar2 * fVar1;
      fVar12 = fVar6 * fVar11;
      fVar10 = fVar2 * fVar5;
      fVar6 = fVar6 * fVar12 * 2.601887e-06 +
              fVar12 * -0.0001980741 + fVar11 * 0.0083330255 + fVar6 * fVar3 * -0.16666657 + fVar3;
      fVar1 = fVar2 * fVar10 * 2.601887e-06 +
              fVar10 * -0.0001980741 + fVar5 * 0.0083330255 + fVar2 * fVar1 * -0.16666657 + fVar1;
      dVar29 = (double)(g_CollOutput.normal.x * fVar1 + g_CollOutput.normal.y * fVar6);
      fVar6 = g_CollOutput.normal.y * fVar1 - g_CollOutput.normal.x * fVar6;
      fVar1 = (param_1->rotation).x;
      dVar26 = ABS((double)fVar6);
      *(float *)((int)puVar8 + 0x94) = fVar6;
      fVar6 = SQRT((float)(dVar29 * dVar29 + (double)(float)(dVar25 * dVar25)));
      dVar27 = ABS((double)fVar6);
      *(float *)(puVar8 + 0x12) = fVar6;
      *(float *)(puVar8 + 0x13) = (float)(dVar27 - dVar26);
      uVar15 = (ulonglong)(*(uint *)(puVar8 + 0x12) >> 0x1c) & 8 |
               (ulonglong)(*(uint *)(puVar8 + 0x13) >> 0x1e) & 2 |
               (ulonglong)(*(uint *)((int)puVar8 + 0x94) >> 0x1d) & 4;
      dVar24 = ABS((double)*(float *)(puVar8 + 0x12));
      if ((double)*(float *)(puVar8 + 0x13) - dVar28 < 0.0) {
        dVar24 = dVar26;
      }
      fVar6 = *(float *)(&g_atanQuadrantTable + (int)(uVar15 << 2));
      dVar26 = ABS((double)*(float *)((int)puVar8 + 0x94));
      if ((double)*(float *)(puVar8 + 0x13) - dVar28 < 0.0) {
        dVar26 = dVar27;
      }
      fVar2 = *(float *)(((uint)(uVar15 << 2) | 0x735900) + 4);
      dVar27 = dVar28;
      if (dVar28 < dVar24) {
        lVar16 = uVar14 - 0x160;
        lVar21 = uVar14 - 100;
        lVar19 = uVar14 - 0x74;
        lVar22 = 2;
        fVar5 = (float)(dVar26 - dVar24) / (float)(dVar26 + dVar24);
        fVar3 = fVar5 * fVar5;
        *(float *)(puVar8 + 0x21) = fVar5;
        *(float *)(puVar8 + 0x20) = fVar5;
        *(float *)((int)puVar8 + 0x104) = fVar5;
        *(float *)((int)puVar8 + 0xfc) = fVar5;
        fVar5 = fVar3 * fVar3;
        *(float *)(puVar8 + 0x20) = *(float *)(puVar8 + 0x20) * fVar3;
        *(float *)((int)puVar8 + 0x104) = *(float *)((int)puVar8 + 0x104) * fVar5;
        *(float *)(puVar8 + 0x21) = *(float *)(puVar8 + 0x21) * fVar5 * fVar3;
        do {
          *(float *)((int)lVar16 + 0xfc) = *(float *)((int)lVar16 + 0xec) * fVar5 * fVar5;
          iVar18 = (int)lVar19;
          lVar19 = lVar19 + 8;
          lVar16 = lVar16 + 8;
          *(float *)((int)lVar21 + 4) = *(float *)(iVar18 + 4) * fVar5 * fVar5;
          lVar21 = lVar21 + 8;
          lVar22 = lVar22 + -1;
        } while (lVar22 != 0);
        lVar22 = 4;
        lVar21 = uVar14 - 0x74;
        pfVar20 = (float *)&DAT_007358e0;
        lVar16 = lVar17;
        lVar19 = lVar21;
        do {
          fVar5 = *pfVar20;
          fVar3 = pfVar20[1];
          pfVar20 = pfVar20 + 2;
          *(float *)((int)lVar16 + 0xfc) = *(float *)((int)lVar16 + 0xfc) * fVar5;
          lVar16 = lVar16 + 8;
          *(float *)((int)lVar19 + 4) = *(float *)((int)lVar19 + 4) * fVar3;
          lVar19 = lVar19 + 8;
          lVar22 = lVar22 + -1;
        } while (lVar22 != 0);
        lVar19 = 2;
        lVar16 = lVar17;
        dVar24 = dVar28;
        do {
          iVar18 = (int)lVar16;
          iVar9 = (int)lVar21;
          lVar16 = lVar16 + 0x10;
          lVar21 = lVar21 + 0x10;
          dVar24 = (double)((float)(dVar24 + (double)*(float *)(iVar18 + 0xfc)) +
                            *(float *)(iVar9 + 4) + *(float *)(iVar9 + 8) + *(float *)(iVar9 + 0xc))
          ;
          lVar19 = lVar19 + -1;
        } while (lVar19 != 0);
        dVar27 = (double)((float)(dVar24 + 0.7853981852531433) * fVar6 + fVar2);
      }
      uVar30 = 0x3faaceea00000000;
      dVar24 = (double)FUN_004d04e0((double)fVar1,-dVar27,0x3faaceea00000000);
      dVar25 = ABS(dVar25);
      *(float *)(puVar8 + 0x11) = (float)dVar29;
      (param_1->rotation).x = (float)dVar24;
      fVar1 = (param_1->rotation).y;
      *(float *)((int)puVar8 + 0x8c) = (float)(dVar25 - ABS(dVar29));
      uVar15 = (ulonglong)((uint)fVar4 >> 0x1c) & 8 |
               (ulonglong)(*(uint *)((int)puVar8 + 0x8c) >> 0x1e) & 2 |
               (ulonglong)(*(uint *)(puVar8 + 0x11) >> 0x1d) & 4;
      fVar6 = *(float *)(&g_atanQuadrantTable + (int)(uVar15 << 2));
      dVar24 = dVar25;
      if ((double)*(float *)((int)puVar8 + 0x8c) - dVar28 < 0.0) {
        dVar24 = ABS(dVar29);
      }
      dVar26 = ABS((double)*(float *)(puVar8 + 0x11));
      if ((double)*(float *)((int)puVar8 + 0x8c) - dVar28 < 0.0) {
        dVar26 = dVar25;
      }
      fVar2 = *(float *)(((uint)(uVar15 << 2) | 0x735900) + 4);
      if (dVar28 < dVar24) {
        lVar16 = uVar14 - 0x160;
        lVar19 = uVar14 - 0x94;
        lVar21 = uVar14 - 0x84;
        lVar22 = 2;
        fVar4 = (float)(dVar26 - dVar24) / (float)(dVar26 + dVar24);
        fVar5 = fVar4 * fVar4;
        *(float *)(puVar8 + 0x1d) = fVar4;
        *(float *)(puVar8 + 0x1c) = fVar4;
        *(float *)((int)puVar8 + 0xe4) = fVar4;
        *(float *)((int)puVar8 + 0xdc) = fVar4;
        fVar4 = fVar5 * fVar5;
        *(float *)(puVar8 + 0x1c) = *(float *)(puVar8 + 0x1c) * fVar5;
        *(float *)((int)puVar8 + 0xe4) = *(float *)((int)puVar8 + 0xe4) * fVar4;
        *(float *)(puVar8 + 0x1d) = *(float *)(puVar8 + 0x1d) * fVar4 * fVar5;
        do {
          *(float *)((int)lVar16 + 0xdc) = *(float *)((int)lVar16 + 0xcc) * fVar4 * fVar4;
          iVar18 = (int)lVar19;
          lVar16 = lVar16 + 8;
          lVar19 = lVar19 + 8;
          *(float *)((int)lVar21 + 4) = *(float *)(iVar18 + 4) * fVar4 * fVar4;
          lVar21 = lVar21 + 8;
          lVar22 = lVar22 + -1;
        } while (lVar22 != 0);
        lVar22 = 4;
        lVar21 = uVar14 - 0x94;
        pfVar20 = (float *)&DAT_007358e0;
        lVar16 = lVar17;
        lVar19 = lVar21;
        do {
          fVar4 = *pfVar20;
          fVar5 = pfVar20[1];
          pfVar20 = pfVar20 + 2;
          *(float *)((int)lVar16 + 0xdc) = *(float *)((int)lVar16 + 0xdc) * fVar4;
          lVar16 = lVar16 + 8;
          *(float *)((int)lVar19 + 4) = *(float *)((int)lVar19 + 4) * fVar5;
          lVar19 = lVar19 + 8;
          lVar22 = lVar22 + -1;
        } while (lVar22 != 0);
        lVar16 = 2;
        do {
          iVar18 = (int)lVar17;
          iVar9 = (int)lVar21;
          lVar17 = lVar17 + 0x10;
          lVar21 = lVar21 + 0x10;
          dVar28 = (double)((float)(dVar28 + (double)*(float *)(iVar18 + 0xdc)) +
                            *(float *)(iVar9 + 4) + *(float *)(iVar9 + 8) + *(float *)(iVar9 + 0xc))
          ;
          lVar16 = lVar16 + -1;
        } while (lVar16 != 0);
        dVar28 = (double)((float)(dVar28 + 0.7853981852531433) * fVar6 + fVar2);
      }
      dVar24 = (double)FUN_004d04e0((double)fVar1,dVar28,uVar30);
      (param_1->rotation).y = (float)dVar24;
      PlayMobySound(1,0,param_1);
      return 1;
    }
    if (0 < g_CollOutput.poly) {
      dVar25 = (double)g_CollOutput.ip.x;
      (param_1->pos).x = g_CollOutput.ip.x;
      dVar26 = (double)g_CollOutput.ip.y;
      (param_1->pos).y = g_CollOutput.ip.y;
      dVar27 = (double)g_CollOutput.ip.z;
      (param_1->pos).z = g_CollOutput.ip.z;
      (param_1->pos).w = g_CollOutput.ip.w;
      dVar28 = 0.0;
      fVar1 = SQRT(g_CollOutput.normal.z * g_CollOutput.normal.z +
                   g_CollOutput.normal.x * g_CollOutput.normal.x +
                   g_CollOutput.normal.y * g_CollOutput.normal.y);
      fVar6 = (g_FrameTimeSq * 9.7) / fVar1;
      dVar24 = dVar28;
      if (0.0 - fVar1 < 0.0) {
        dVar24 = (double)(g_CollOutput.normal.z * fVar6);
      }
      dVar29 = dVar28;
      if (0.0 - fVar1 < 0.0) {
        dVar29 = (double)(g_CollOutput.normal.y * fVar6);
      }
      dVar23 = dVar28;
      if (0.0 - fVar1 < 0.0) {
        dVar23 = (double)(g_CollOutput.normal.x * fVar6);
      }
      if (fVar1 - 0.0 < 0.0) {
        dVar24 = (double)(g_CollOutput.normal.z * fVar6);
      }
      if (fVar1 - 0.0 < 0.0) {
        dVar29 = (double)(g_CollOutput.normal.y * fVar6);
      }
      if (fVar1 - 0.0 < 0.0) {
        dVar23 = (double)(g_CollOutput.normal.x * fVar6);
      }
      (param_1->pos).z = (float)(dVar27 + dVar24);
      (param_1->pos).y = (float)(dVar26 + dVar29);
      (param_1->pos).x = (float)(dVar25 + dVar23);
      FastVecReflect(param_2,param_2,0xa10980);
      *param_2 = *param_2 * 0.5;
      param_2[1] = param_2[1] * 0.5;
      param_2[2] = param_2[2] * 0.5;
      dVar25 = (double)g_CollOutput.normal.z;
      fVar1 = (float)(dVar25 * dVar25 +
                     (double)(g_CollOutput.normal.x * g_CollOutput.normal.x +
                             g_CollOutput.normal.y * g_CollOutput.normal.y));
      dVar24 = dVar28;
      if ((double)SQRT(fVar1) != dVar28) {
        fVar6 = 1.0 / SQRT(fVar1);
        fVar6 = -(fVar1 * fVar6 * fVar6 - 1.0) * fVar6 * 0.5 + fVar6;
        fVar6 = -(fVar1 * fVar6 * fVar6 - 1.0) * fVar6 * 0.5 + fVar6;
        dVar24 = (double)(float)(dVar25 * (double)(-(fVar1 * fVar6 * fVar6 - 1.0) * fVar6 * 0.5 +
                                                  fVar6));
      }
      fVar1 = g_CollOutput.normal.y;
      fVar6 = g_CollOutput.normal.x;
      if (0.7070000171661377 < dVar24) {
        dVar24 = (double)GetGroundZ(0x3fe0000000000000,&param_1->pos,0);
        fVar1 = g_CollOutput.normal.y;
        fVar6 = g_CollOutput.normal.x;
        fVar3 = param_2[2];
        fVar2 = param_2[2];
        dVar25 = (double)g_CollOutput.normal.z;
        fVar4 = *param_2;
        fVar5 = param_2[1];
        if ((double)(param_1->pos).z < dVar24) {
          (param_1->pos).z = (float)dVar24;
        }
        if ((int)fVar3 < 0) {
          fVar2 = fVar2 * -0.4;
          param_2[2] = fVar2;
        }
        if (SQRT(fVar2 * fVar2 + fVar4 * fVar4 + fVar5 * fVar5) < g_FrameTime) {
          param_2[3] = 0.0;
          param_2[2] = 0.0;
          param_2[1] = 0.0;
          *param_2 = 0.0;
          return 3;
        }
      }
      fVar2 = (param_1->rotation).z;
      fVar4 = fVar2 + 1.5707963;
      fVar5 = 3.1415925 - fVar2;
      if (fVar2 - (3.1415925 - fVar2) < 0.0) {
        fVar5 = fVar2;
      }
      fVar3 = 3.1415925 - fVar4;
      if (fVar4 - (3.1415925 - fVar4) < 0.0) {
        fVar3 = fVar4;
      }
      fVar10 = -3.1415925 - fVar2;
      if ((-3.1415925 - fVar2) - fVar5 < 0.0) {
        fVar10 = fVar5;
      }
      fVar2 = -3.1415925 - fVar4;
      if ((-3.1415925 - fVar4) - fVar3 < 0.0) {
        fVar2 = fVar3;
      }
      fVar4 = fVar10 * fVar10;
      fVar5 = fVar2 * fVar2;
      fVar12 = fVar4 * fVar4 * fVar10;
      fVar3 = fVar5 * fVar5 * fVar2;
      fVar13 = fVar4 * fVar12;
      fVar11 = fVar5 * fVar3;
      fVar4 = fVar4 * fVar13 * 2.601887e-06 +
              fVar13 * -0.0001980741 + fVar12 * 0.0083330255 + fVar4 * fVar10 * -0.16666657 + fVar10
      ;
      fVar2 = fVar5 * fVar11 * 2.601887e-06 +
              fVar11 * -0.0001980741 + fVar3 * 0.0083330255 + fVar5 * fVar2 * -0.16666657 + fVar2;
      dVar29 = (double)(fVar6 * fVar2 + fVar1 * fVar4);
      fVar2 = fVar1 * fVar2 - fVar6 * fVar4;
      fVar6 = SQRT((float)(dVar29 * dVar29 + (double)(float)(dVar25 * dVar25)));
      *(float *)(puVar8 + 0x10) = fVar2;
      fVar1 = (param_1->rotation).x;
      dVar26 = ABS((double)fVar2);
      dVar27 = ABS((double)fVar6);
      *(float *)((int)puVar8 + 0x7c) = fVar6;
      *(float *)((int)puVar8 + 0x84) = (float)(dVar27 - dVar26);
      uVar15 = (ulonglong)(*(uint *)((int)puVar8 + 0x7c) >> 0x1c) & 8 |
               (ulonglong)(*(uint *)((int)puVar8 + 0x84) >> 0x1e) & 2 |
               (ulonglong)(*(uint *)(puVar8 + 0x10) >> 0x1d) & 4;
      dVar24 = ABS((double)*(float *)((int)puVar8 + 0x7c));
      if ((double)*(float *)((int)puVar8 + 0x84) - dVar28 < 0.0) {
        dVar24 = dVar26;
      }
      fVar6 = *(float *)(&g_atanQuadrantTable + (int)(uVar15 << 2));
      dVar26 = ABS((double)*(float *)(puVar8 + 0x10));
      if ((double)*(float *)((int)puVar8 + 0x84) - dVar28 < 0.0) {
        dVar26 = dVar27;
      }
      fVar2 = *(float *)(((uint)(uVar15 << 2) | 0x735900) + 4);
      dVar27 = dVar28;
      if (dVar28 < dVar24) {
        lVar16 = uVar14 - 0x160;
        lVar21 = uVar14 - 0xa4;
        lVar19 = uVar14 - 0xb4;
        lVar22 = 2;
        fVar4 = (float)(dVar26 - dVar24) / (float)(dVar26 + dVar24);
        fVar5 = fVar4 * fVar4;
        *(float *)(puVar8 + 0x19) = fVar4;
        *(float *)(puVar8 + 0x18) = fVar4;
        *(float *)((int)puVar8 + 0xc4) = fVar4;
        *(float *)((int)puVar8 + 0xbc) = fVar4;
        fVar4 = fVar5 * fVar5;
        *(float *)(puVar8 + 0x18) = *(float *)(puVar8 + 0x18) * fVar5;
        *(float *)((int)puVar8 + 0xc4) = *(float *)((int)puVar8 + 0xc4) * fVar4;
        *(float *)(puVar8 + 0x19) = *(float *)(puVar8 + 0x19) * fVar4 * fVar5;
        do {
          *(float *)((int)lVar16 + 0xbc) = *(float *)((int)lVar16 + 0xac) * fVar4 * fVar4;
          iVar18 = (int)lVar19;
          lVar19 = lVar19 + 8;
          lVar16 = lVar16 + 8;
          *(float *)((int)lVar21 + 4) = *(float *)(iVar18 + 4) * fVar4 * fVar4;
          lVar21 = lVar21 + 8;
          lVar22 = lVar22 + -1;
        } while (lVar22 != 0);
        lVar22 = 4;
        lVar21 = uVar14 - 0xb4;
        pfVar20 = (float *)&DAT_007358e0;
        lVar16 = lVar17;
        lVar19 = lVar21;
        do {
          fVar4 = *pfVar20;
          fVar5 = pfVar20[1];
          pfVar20 = pfVar20 + 2;
          *(float *)((int)lVar16 + 0xbc) = *(float *)((int)lVar16 + 0xbc) * fVar4;
          lVar16 = lVar16 + 8;
          *(float *)((int)lVar19 + 4) = *(float *)((int)lVar19 + 4) * fVar5;
          lVar19 = lVar19 + 8;
          lVar22 = lVar22 + -1;
        } while (lVar22 != 0);
        lVar19 = 2;
        lVar16 = lVar17;
        dVar24 = dVar28;
        do {
          iVar18 = (int)lVar16;
          iVar9 = (int)lVar21;
          lVar16 = lVar16 + 0x10;
          lVar21 = lVar21 + 0x10;
          dVar24 = (double)((float)(dVar24 + (double)*(float *)(iVar18 + 0xbc)) +
                            *(float *)(iVar9 + 4) + *(float *)(iVar9 + 8) + *(float *)(iVar9 + 0xc))
          ;
          lVar19 = lVar19 + -1;
        } while (lVar19 != 0);
        dVar27 = (double)((float)(dVar24 + 0.7853981852531433) * fVar6 + fVar2);
      }
      uVar30 = 0x3faaceea00000000;
      dVar24 = (double)FUN_004d04e0((double)fVar1,-dVar27,0x3faaceea00000000);
      *(float *)(puVar8 + 0xe) = (float)dVar25;
      *(float *)((int)puVar8 + 0x74) = (float)dVar29;
      (param_1->rotation).x = (float)dVar24;
      fVar1 = (param_1->rotation).y;
      *(float *)(puVar8 + 0xf) = (float)(ABS(dVar25) - ABS(dVar29));
      uVar15 = (ulonglong)(*(uint *)(puVar8 + 0xe) >> 0x1c) & 8 |
               (ulonglong)(*(uint *)(puVar8 + 0xf) >> 0x1e) & 2 |
               (ulonglong)(*(uint *)((int)puVar8 + 0x74) >> 0x1d) & 4;
      dVar24 = ABS((double)*(float *)(puVar8 + 0xe));
      if ((double)*(float *)(puVar8 + 0xf) - dVar28 < 0.0) {
        dVar24 = ABS(dVar29);
      }
      fVar6 = *(float *)(&g_atanQuadrantTable + (int)(uVar15 << 2));
      dVar26 = ABS((double)*(float *)((int)puVar8 + 0x74));
      if ((double)*(float *)(puVar8 + 0xf) - dVar28 < 0.0) {
        dVar26 = ABS(dVar25);
      }
      fVar2 = *(float *)(((uint)(uVar15 << 2) | 0x735900) + 4);
      if (dVar28 < dVar24) {
        lVar16 = uVar14 - 0x160;
        lVar19 = uVar14 - 0xd4;
        lVar21 = uVar14 - 0xc4;
        lVar22 = 2;
        fVar4 = (float)(dVar26 - dVar24) / (float)(dVar26 + dVar24);
        fVar5 = fVar4 * fVar4;
        *(float *)(puVar8 + 0x15) = fVar4;
        *(float *)(puVar8 + 0x14) = fVar4;
        *(float *)((int)puVar8 + 0xa4) = fVar4;
        *(float *)((int)puVar8 + 0x9c) = fVar4;
        fVar4 = fVar5 * fVar5;
        *(float *)(puVar8 + 0x14) = *(float *)(puVar8 + 0x14) * fVar5;
        *(float *)((int)puVar8 + 0xa4) = *(float *)((int)puVar8 + 0xa4) * fVar4;
        *(float *)(puVar8 + 0x15) = *(float *)(puVar8 + 0x15) * fVar4 * fVar5;
        do {
          *(float *)((int)lVar16 + 0x9c) = *(float *)((int)lVar16 + 0x8c) * fVar4 * fVar4;
          iVar18 = (int)lVar19;
          lVar16 = lVar16 + 8;
          lVar19 = lVar19 + 8;
          *(float *)((int)lVar21 + 4) = *(float *)(iVar18 + 4) * fVar4 * fVar4;
          lVar21 = lVar21 + 8;
          lVar22 = lVar22 + -1;
        } while (lVar22 != 0);
        lVar22 = 4;
        lVar21 = uVar14 - 0xd4;
        pfVar20 = (float *)&DAT_007358e0;
        lVar16 = lVar17;
        lVar19 = lVar21;
        do {
          fVar4 = *pfVar20;
          fVar5 = pfVar20[1];
          pfVar20 = pfVar20 + 2;
          *(float *)((int)lVar16 + 0x9c) = *(float *)((int)lVar16 + 0x9c) * fVar4;
          lVar16 = lVar16 + 8;
          *(float *)((int)lVar19 + 4) = *(float *)((int)lVar19 + 4) * fVar5;
          lVar19 = lVar19 + 8;
          lVar22 = lVar22 + -1;
        } while (lVar22 != 0);
        lVar16 = 2;
        do {
          iVar18 = (int)lVar17;
          iVar9 = (int)lVar21;
          lVar17 = lVar17 + 0x10;
          lVar21 = lVar21 + 0x10;
          dVar28 = (double)((float)(dVar28 + (double)*(float *)(iVar18 + 0x9c)) +
                            *(float *)(iVar9 + 4) + *(float *)(iVar9 + 8) + *(float *)(iVar9 + 0xc))
          ;
          lVar16 = lVar16 + -1;
        } while (lVar16 != 0);
        dVar28 = (double)((float)(dVar28 + 0.7853981852531433) * fVar6 + fVar2);
      }
      dVar24 = (double)FUN_004d04e0((double)fVar1,dVar28,uVar30);
      (param_1->rotation).y = (float)dVar24;
      PlayMobySound(1,0,param_1);
      return 2;
    }
  }
  return 0;
}


// 0x04c3a28 (0xc54 bytes)
// inlined: FastAtan2 @0x4c3cc4, FastAtan2 @0x4c4190
/* Moby 938 */

void UpdateMoby_938(MobyInstance *moby)

{
  byte bVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  undefined4 uVar5;
  float fVar6;
  float fVar7;
  short sVar8;
  f32 fVar9;
  float *pfVar10;
  uint uVar11;
  undefined2 uVar12;
  ulonglong *puVar13;
  int iVar14;
  int iVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  ulonglong uVar20;
  int iVar22;
  undefined8 uVar21;
  ulonglong uVar23;
  longlong lVar24;
  longlong lVar25;
  float *pfVar27;
  longlong lVar26;
  longlong lVar28;
  ulonglong unaff_r29;
  ulonglong unaff_r30;
  ulonglong uVar29;
  ulonglong unaff_r31;
  ulonglong in_LR;
  longlong lVar30;
  longlong lVar31;
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
  GPiece<16> auVar38;
  GPiece<16> auVar39;
  GPiece<16> auVar40;
  
  lVar24 = (longlong)(int)moby;
  uVar20 = ZEXT48(&stack0x00000000);
  lVar25 = uVar20 - 0x180;
  puVar13 = (ulonglong *)lVar25;
  *puVar13 = uVar20;
  puVar13[0x32] = in_LR;
  puVar13[0x2a] = in_f26;
  puVar13[0x2b] = in_f27;
  puVar13[0x2c] = in_f28;
  puVar13[0x2d] = in_f29;
  puVar13[0x2e] = in_f30;
  puVar13[0x2f] = in_f31;
  puVar13[0x29] = unaff_r31;
  puVar13[0x28] = unaff_r30;
  fVar9 = (moby->pos).x;
  pfVar10 = (float *)moby->pVar;
  uVar29 = ZEXT48(pfVar10);
  uVar11 = (int)fVar9 >> 0x1f;
  dVar34 = 1.0;
  dVar35 = (double)(moby->pos).x;
  iVar22 = (uVar11 >> 1 ^ (uint)fVar9) - uVar11;
  puVar13[0x27] = unaff_r29;
  if (((iVar22 < 0x3f800000) || (dVar33 = 511.0, 0x43ff8000 < iVar22)) ||
     (fVar9 = (moby->pos).y, dVar32 = (double)(moby->pos).y, uVar11 = (int)fVar9 >> 0x1f,
     iVar22 = (uVar11 >> 1 ^ (uint)fVar9) - uVar11, 0x43ff8000 < iVar22 || iVar22 < 0x3f800000)) {
LAB_004c3b14:
    DeleteMoby(moby);
    return;
  }
  fVar9 = (moby->pos).z;
  uVar11 = (int)fVar9 >> 0x1f;
  iVar22 = (uVar11 >> 1 ^ (uint)fVar9) - uVar11;
  if ((iVar22 < 0x3f800000) || (0x43ff8000 < iVar22)) goto LAB_004c3b14;
  bVar1 = moby->state;
  fVar6 = (moby->pos).z - DAT_008f4c60;
  dVar37 = (double)fVar6;
  dVar36 = (double)(moby->pos).w;
  (moby->pos).z = fVar6;
  if (bVar1 < 2) {
    if (bVar1 == 0) {
      (moby->pos).x = (float)(dVar35 + (double)*pfVar10);
      (moby->pos).y = (float)(dVar32 + (double)pfVar10[1]);
      (moby->pos).z = (float)(dVar37 + (double)pfVar10[2]);
      pfVar10[2] = -(g_FrameTimeSq * 9.8 - pfVar10[2]);
      iVar22 = MB_damage(lVar24,&DAT_00830000,0);
      if (((iVar22 != 0) && (*(int *)(iVar22 + 0x20) != 0)) &&
         (*(MOBY_OCLASSES *)(*(int *)(iVar22 + 0x20) + 0xa6) != moby->oClass)) {
        if (*(char *)(iVar22 + 0x28) == '\0') {
          fVar6 = (moby->pos).x - g_heroPosition.x;
          fVar3 = (moby->pos).y - g_heroPosition.y;
          fVar4 = ABS(fVar6);
          fVar2 = ABS(fVar3);
          *(float *)(puVar13 + 0x1a) = fVar6;
          *(float *)((int)puVar13 + 0xd4) = fVar3;
          *(float *)(puVar13 + 0x1b) = fVar4 - fVar2;
          fVar6 = 0.0;
          uVar23 = (ulonglong)(*(uint *)(puVar13 + 0x1a) >> 0x1c) & 8 |
                   (ulonglong)(*(uint *)(puVar13 + 0x1b) >> 0x1e) & 2 |
                   (ulonglong)(*(uint *)((int)puVar13 + 0xd4) >> 0x1d) & 4;
          fVar3 = ABS(*(float *)(puVar13 + 0x1a));
          if (*(float *)(puVar13 + 0x1b) - 0.0 < 0.0) {
            fVar3 = fVar2;
          }
          fVar7 = *(float *)(&g_atanQuadrantTable + (int)(uVar23 << 2));
          fVar2 = *(float *)(((uint)(uVar23 << 2) | 0x735900) + 4);
          fVar16 = ABS(*(float *)((int)puVar13 + 0xd4));
          if (*(float *)(puVar13 + 0x1b) - 0.0 < 0.0) {
            fVar16 = fVar4;
          }
          if (0.0 < fVar3) {
            lVar26 = uVar20 - 0x170;
            lVar28 = uVar20 - 0x84;
            lVar31 = uVar20 - 0x74;
            lVar30 = 2;
            fVar3 = (fVar16 - fVar3) / (fVar16 + fVar3);
            fVar4 = fVar3 * fVar3;
            *(float *)(puVar13 + 0x21) = fVar3;
            *(float *)(puVar13 + 0x20) = fVar3;
            *(float *)((int)puVar13 + 0x104) = fVar3;
            *(float *)((int)puVar13 + 0xfc) = fVar3;
            fVar3 = fVar4 * fVar4;
            *(float *)(puVar13 + 0x20) = *(float *)(puVar13 + 0x20) * fVar4;
            *(float *)((int)puVar13 + 0x104) = *(float *)((int)puVar13 + 0x104) * fVar3;
            *(float *)(puVar13 + 0x21) = *(float *)(puVar13 + 0x21) * fVar3 * fVar4;
            do {
              *(float *)((int)lVar26 + 0xfc) = *(float *)((int)lVar26 + 0xec) * fVar3 * fVar3;
              iVar14 = (int)lVar28;
              lVar26 = lVar26 + 8;
              lVar28 = lVar28 + 8;
              *(float *)((int)lVar31 + 4) = *(float *)(iVar14 + 4) * fVar3 * fVar3;
              lVar31 = lVar31 + 8;
              lVar30 = lVar30 + -1;
            } while (lVar30 != 0);
            lVar30 = 4;
            lVar31 = uVar20 - 0x84;
            pfVar27 = (float *)&DAT_007358e0;
            lVar26 = lVar25;
            lVar28 = lVar31;
            do {
              fVar3 = *pfVar27;
              fVar4 = pfVar27[1];
              pfVar27 = pfVar27 + 2;
              *(float *)((int)lVar26 + 0xfc) = *(float *)((int)lVar26 + 0xfc) * fVar3;
              lVar26 = lVar26 + 8;
              *(float *)((int)lVar28 + 4) = *(float *)((int)lVar28 + 4) * fVar4;
              lVar28 = lVar28 + 8;
              lVar30 = lVar30 + -1;
            } while (lVar30 != 0);
            lVar26 = 2;
            do {
              iVar14 = (int)lVar25;
              iVar15 = (int)lVar31;
              lVar25 = lVar25 + 0x10;
              lVar31 = lVar31 + 0x10;
              fVar6 = fVar6 + *(float *)(iVar14 + 0xfc) + *(float *)(iVar15 + 4) +
                      *(float *)(iVar15 + 8) + *(float *)(iVar15 + 0xc);
              lVar26 = lVar26 + -1;
            } while (lVar26 != 0);
            fVar6 = (fVar6 + 0.7853982) * fVar7 + fVar2;
          }
          *(float *)((int)puVar13 + 0xac) = fVar6;
          fVar6 = g_FrameTime * 10.0;
          *(float *)(puVar13 + 0x16) = g_FrameTime * 10.0;
          *(float *)((int)puVar13 + 0xb4) = fVar6;
          uVar5 = *(undefined4 *)(iVar22 + 0x18);
          *(undefined4 *)(puVar13 + 6) = *(undefined4 *)(iVar22 + 0x10);
          *(undefined4 *)(puVar13 + 7) = uVar5;
          uVar5 = *(undefined4 *)(iVar22 + 0x1c);
          *(undefined4 *)((int)puVar13 + 0x34) = *(undefined4 *)(iVar22 + 0x14);
          *(undefined4 *)((int)puVar13 + 0x3c) = uVar5;
          MB_VecAtan2Angles
                    (puVar13[6],puVar13[7],uVar20 - 0xd4,uVar20 - 0xd0,uVar20 - 0xcc);
          fVar6 = *(float *)((int)puVar13 + 0xac);
          fVar4 = fVar6 + 1.5707963;
          auVar39 = ZEXT416(0xffffffff);
          auVar39 = auVar39 | auVar39 << 0x20 | auVar39 << 0x40 | auVar39 << 0x60;
          auVar39 = vectorShiftLeftIntegerWord(auVar39,auVar39);
          fVar3 = 3.1415925 - fVar6;
          if (fVar6 - (3.1415925 - fVar6) < 0.0) {
            fVar3 = fVar6;
          }
          fVar2 = 3.1415925 - fVar4;
          if (fVar4 - (3.1415925 - fVar4) < 0.0) {
            fVar2 = fVar4;
          }
          fVar7 = -3.1415925 - fVar6;
          if ((-3.1415925 - fVar6) - fVar3 < 0.0) {
            fVar7 = fVar3;
          }
          fVar3 = fVar7 * fVar7;
          fVar6 = -3.1415925 - fVar4;
          if ((-3.1415925 - fVar4) - fVar2 < 0.0) {
            fVar6 = fVar2;
          }
          fVar4 = *(float *)(puVar13 + 0x16);
          pfVar10[2] = *(float *)((int)puVar13 + 0xb4);
          fVar2 = fVar6 * fVar6;
          fVar16 = fVar3 * fVar3 * fVar7;
          fVar17 = fVar3 * fVar16;
          fVar18 = fVar2 * fVar2 * fVar6;
          fVar19 = fVar2 * fVar18;
          pfVar10[1] = (fVar3 * fVar17 * 2.601887e-06 +
                       fVar17 * -0.0001980741 +
                       fVar16 * 0.0083330255 + fVar3 * fVar7 * -0.16666657 + fVar7) * fVar4;
          auVar40 = loadVectorLeftIndexed(0x34,0x4c39e0);
          auVar38 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
          auVar40 = auVar40 >> 0x60 & (GPiece<16>)0xffffffff;
          auVar39 = vectorMultiplyAddFloatingPoint
                              (auVar38,auVar40 | auVar40 << 0x20 | auVar40 << 0x40 | auVar40 << 0x60
                               ,auVar39);
          auVar39 = vectorConvertToSignedFixedPointWordSaturate(auVar39,0);
          auVar39 = vectorSplatHalfWord(auVar39,1);
          uVar12 = storeVectorElementHalfWordIndexed(auVar39,0x14,uVar29);
          *(undefined2 *)(pfVar10 + 5) = uVar12;
          *pfVar10 = (fVar2 * fVar19 * 2.601887e-06 +
                     fVar19 * -0.0001980741 +
                     fVar18 * 0.0083330255 + fVar2 * fVar6 * -0.16666657 + fVar6) * fVar4;
          moby->state = '\x02';
        }
        else {
          moby->state = '\x03';
        }
      }
      moby->damage = -1;
      iVar22 = FastDecTimerS16(uVar29 + 0x14);
      if (iVar22 != 0) {
        *(float *)(puVar13 + 8) = (float)dVar35;
        *(float *)(puVar13 + 9) = (float)dVar37;
        *(float *)((int)puVar13 + 0x44) = (float)dVar32;
        *(float *)((int)puVar13 + 0x4c) = (float)dVar36;
        iVar22 = M938_004c2ce8(lVar24,uVar29,puVar13[8],puVar13[9]);
        if (iVar22 == 3) {
          auVar39 = ZEXT416(0xffffffff);
          auVar39 = auVar39 | auVar39 << 0x20 | auVar39 << 0x40 | auVar39 << 0x60;
          auVar40 = vectorShiftLeftIntegerWord(auVar39,auVar39);
          auVar39 = loadVectorLeftIndexed(0x38,0x4c39e0);
          auVar39 = auVar39 >> 0x60 & (GPiece<16>)0xffffffff;
          auVar38 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
          auVar39 = vectorMultiplyAddFloatingPoint
                              (auVar38,auVar39 | auVar39 << 0x20 | auVar39 << 0x40 | auVar39 << 0x60
                               ,auVar40);
          auVar39 = vectorConvertToSignedFixedPointWordSaturate(auVar39,0);
          auVar39 = vectorSplatHalfWord(auVar39,1);
          uVar12 = storeVectorElementHalfWordIndexed(auVar39,0x14,uVar29);
          *(undefined2 *)(pfVar10 + 5) = uVar12;
          moby->state = '\x01';
          goto LAB_004c45b4;
        }
      }
      fVar9 = (moby->pos).z;
      uVar11 = (int)fVar9 >> 0x1f;
      if ((int)((uVar11 >> 1 ^ (uint)fVar9) - uVar11) < 0x40000000) {
        moby->state = '\x03';
      }
    }
    else {
      MB_GetLights(lVar24,uVar20 - 0xe0,uVar20 - 0xdc,uVar20 - 0xd8);
      sVar8 = *(short *)(pfVar10 + 5);
      puVar13[0x24] = (longlong)(int)(animationSpeed * 240.5);
      SetColorOfMoby
                (moby,(longlong)
                      (((*(int *)((int)puVar13 + 0x124) - (int)sVar8) * 0x7f) /
                      *(int *)((int)puVar13 + 0x124)),(longlong)*(int *)((int)puVar13 + 0xa4),
                 (longlong)*(int *)(puVar13 + 0x15));
      iVar22 = FastDecTimerS16(uVar29 + 0x14);
      if (iVar22 == 0) {
        iVar22 = MB_damage(lVar24,&DAT_00830000,0);
        if (((iVar22 != 0) && (*(int *)(iVar22 + 0x20) != 0)) &&
           (*(MOBY_OCLASSES *)(*(int *)(iVar22 + 0x20) + 0xa6) != moby->oClass)) {
          if (*(char *)(iVar22 + 0x28) == '\0') {
            fVar6 = (moby->pos).x - g_heroPosition.x;
            fVar3 = (moby->pos).y - g_heroPosition.y;
            fVar4 = ABS(fVar6);
            fVar2 = ABS(fVar3);
            *(float *)((int)puVar13 + 0xc4) = fVar6;
            *(float *)(puVar13 + 0x19) = fVar3;
            *(float *)((int)puVar13 + 0xcc) = fVar4 - fVar2;
            fVar6 = 0.0;
            uVar23 = (ulonglong)(*(uint *)((int)puVar13 + 0xc4) >> 0x1c) & 8 |
                     (ulonglong)(*(uint *)((int)puVar13 + 0xcc) >> 0x1e) & 2 |
                     (ulonglong)(*(uint *)(puVar13 + 0x19) >> 0x1d) & 4;
            fVar3 = ABS(*(float *)((int)puVar13 + 0xc4));
            if (*(float *)((int)puVar13 + 0xcc) - 0.0 < 0.0) {
              fVar3 = fVar2;
            }
            fVar7 = *(float *)(&g_atanQuadrantTable + (int)(uVar23 << 2));
            fVar2 = *(float *)(((uint)(uVar23 << 2) | 0x735900) + 4);
            fVar16 = ABS(*(float *)(puVar13 + 0x19));
            if (*(float *)((int)puVar13 + 0xcc) - 0.0 < 0.0) {
              fVar16 = fVar4;
            }
            if (0.0 < fVar3) {
              lVar24 = uVar20 - 0x170;
              lVar26 = uVar20 - 0xa4;
              lVar28 = uVar20 - 0x94;
              lVar31 = 2;
              fVar3 = (fVar16 - fVar3) / (fVar16 + fVar3);
              fVar4 = fVar3 * fVar3;
              *(float *)(puVar13 + 0x1d) = fVar3;
              *(float *)(puVar13 + 0x1c) = fVar3;
              *(float *)((int)puVar13 + 0xe4) = fVar3;
              *(float *)((int)puVar13 + 0xdc) = fVar3;
              fVar3 = fVar4 * fVar4;
              *(float *)(puVar13 + 0x1c) = *(float *)(puVar13 + 0x1c) * fVar4;
              *(float *)((int)puVar13 + 0xe4) = *(float *)((int)puVar13 + 0xe4) * fVar3;
              *(float *)(puVar13 + 0x1d) = *(float *)(puVar13 + 0x1d) * fVar3 * fVar4;
              do {
                *(float *)((int)lVar24 + 0xdc) = *(float *)((int)lVar24 + 0xcc) * fVar3 * fVar3;
                iVar14 = (int)lVar26;
                lVar24 = lVar24 + 8;
                lVar26 = lVar26 + 8;
                *(float *)((int)lVar28 + 4) = *(float *)(iVar14 + 4) * fVar3 * fVar3;
                lVar28 = lVar28 + 8;
                lVar31 = lVar31 + -1;
              } while (lVar31 != 0);
              lVar31 = 4;
              lVar28 = uVar20 - 0xa4;
              pfVar27 = (float *)&DAT_007358e0;
              lVar24 = lVar25;
              lVar26 = lVar28;
              do {
                fVar3 = *pfVar27;
                fVar4 = pfVar27[1];
                pfVar27 = pfVar27 + 2;
                *(float *)((int)lVar24 + 0xdc) = *(float *)((int)lVar24 + 0xdc) * fVar3;
                lVar24 = lVar24 + 8;
                *(float *)((int)lVar26 + 4) = *(float *)((int)lVar26 + 4) * fVar4;
                lVar26 = lVar26 + 8;
                lVar31 = lVar31 + -1;
              } while (lVar31 != 0);
              lVar24 = 2;
              do {
                iVar14 = (int)lVar25;
                iVar15 = (int)lVar28;
                lVar25 = lVar25 + 0x10;
                lVar28 = lVar28 + 0x10;
                fVar6 = fVar6 + *(float *)(iVar14 + 0xdc) + *(float *)(iVar15 + 4) +
                        *(float *)(iVar15 + 8) + *(float *)(iVar15 + 0xc);
                lVar24 = lVar24 + -1;
              } while (lVar24 != 0);
              fVar6 = (fVar6 + 0.7853982) * fVar7 + fVar2;
            }
            *(float *)(puVar13 + 0x17) = fVar6;
            fVar6 = g_FrameTime * 10.0;
            *(float *)((int)puVar13 + 0xbc) = g_FrameTime * 10.0;
            *(float *)(puVar13 + 0x18) = fVar6;
            uVar5 = *(undefined4 *)(iVar22 + 0x18);
            *(undefined4 *)(puVar13 + 6) = *(undefined4 *)(iVar22 + 0x10);
            *(undefined4 *)(puVar13 + 7) = uVar5;
            uVar5 = *(undefined4 *)(iVar22 + 0x1c);
            *(undefined4 *)((int)puVar13 + 0x34) = *(undefined4 *)(iVar22 + 0x14);
            *(undefined4 *)((int)puVar13 + 0x3c) = uVar5;
            MB_VecAtan2Angles
                      (puVar13[6],puVar13[7],uVar20 - 200,uVar20 - 0xc4,uVar20 - 0xc0);
            fVar6 = *(float *)(puVar13 + 0x17);
            fVar4 = fVar6 + 1.5707963;
            auVar39 = ZEXT416(0xffffffff);
            auVar39 = auVar39 | auVar39 << 0x20 | auVar39 << 0x40 | auVar39 << 0x60;
            auVar39 = vectorShiftLeftIntegerWord(auVar39,auVar39);
            fVar3 = 3.1415925 - fVar6;
            if (fVar6 - (3.1415925 - fVar6) < 0.0) {
              fVar3 = fVar6;
            }
            fVar2 = 3.1415925 - fVar4;
            if (fVar4 - (3.1415925 - fVar4) < 0.0) {
              fVar2 = fVar4;
            }
            fVar7 = *(float *)((int)puVar13 + 0xbc);
            fVar16 = -3.1415925 - fVar6;
            if ((-3.1415925 - fVar6) - fVar3 < 0.0) {
              fVar16 = fVar3;
            }
            fVar3 = fVar16 * fVar16;
            fVar6 = -3.1415925 - fVar4;
            if ((-3.1415925 - fVar4) - fVar2 < 0.0) {
              fVar6 = fVar2;
            }
            auVar38 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
            pfVar10[2] = *(float *)(puVar13 + 0x18);
            fVar4 = fVar6 * fVar6;
            fVar2 = fVar3 * fVar3 * fVar16;
            fVar17 = fVar3 * fVar2;
            fVar18 = fVar4 * fVar4 * fVar6;
            fVar19 = fVar4 * fVar18;
            pfVar10[1] = (fVar3 * fVar17 * 2.601887e-06 +
                         fVar17 * -0.0001980741 +
                         fVar2 * 0.0083330255 + fVar3 * fVar16 * -0.16666657 + fVar16) * fVar7;
            auVar40 = loadVectorLeftIndexed(0x34,0x4c39e0);
            auVar40 = auVar40 >> 0x60 & (GPiece<16>)0xffffffff;
            auVar39 = vectorMultiplyAddFloatingPoint
                                (auVar38,auVar40 | auVar40 << 0x20 | auVar40 << 0x40 |
                                         auVar40 << 0x60,auVar39);
            auVar39 = vectorConvertToSignedFixedPointWordSaturate(auVar39,0);
            auVar39 = vectorSplatHalfWord(auVar39,1);
            uVar12 = storeVectorElementHalfWordIndexed(auVar39,0x14,uVar29);
            *(undefined2 *)(pfVar10 + 5) = uVar12;
            *pfVar10 = (fVar4 * fVar19 * 2.601887e-06 +
                       fVar19 * -0.0001980741 +
                       fVar18 * 0.0083330255 + fVar4 * fVar6 * -0.16666657 + fVar6) * fVar7;
            moby->state = '\x02';
          }
          else {
            moby->state = '\x03';
          }
        }
        moby->damage = -1;
      }
      else {
        moby->state = '\x03';
      }
    }
    goto LAB_004c45b4;
  }
  if (2 < bVar1) {
    if (bVar1 < 4) {
      uVar21 = CollMobySphere(0x3ff8000000000000,lVar24 + 0x10,0x3f800000,0x10,lVar24,0);
      fVar9 = (moby->pos).z;
      *(f32 *)(puVar13 + 8) = (moby->pos).x;
      *(f32 *)(puVar13 + 9) = fVar9;
      *(f32 *)((int)puVar13 + 0x44) = (moby->pos).y;
      *(f32 *)((int)puVar13 + 0x4c) = (moby->pos).w;
      puVar13[0xf] = 2;
      puVar13[0x10] = 1;
      MB_DamageMobyList
                (dVar34,dVar34,dVar34,lVar24,2,puVar13[8],puVar13[9],&DAT_00a14a00,uVar21,0,
                 &DAT_00810001);
      MB_SpawnExplosionSparks(0x3fe0000000000000,0x402a000000000000,lVar24,lVar24 + 0x10);
      DeleteMoby(moby);
      return;
    }
    goto LAB_004c45b4;
  }
  MB_GetLights(lVar24,uVar20 - 0xe0,uVar20 - 0xdc,uVar20 - 0xd8);
  SetColorOfMoby
            (moby,0xff,(longlong)*(int *)((int)puVar13 + 0xa4),(longlong)*(int *)(puVar13 + 0x15));
  (moby->pos).x = (moby->pos).x + *pfVar10;
  (moby->pos).y = (moby->pos).y + pfVar10[1];
  (moby->pos).z = (moby->pos).z + pfVar10[2];
  pfVar10[2] = -(g_FrameTimeSq * 9.8 - pfVar10[2]);
  iVar22 = FastDecTimerS16(uVar29 + 0x14);
  if (iVar22 == 0) {
LAB_004c44cc:
    fVar9 = (moby->pos).z;
    uVar11 = (int)fVar9 >> 0x1f;
    if (0x3fffffff < (int)((uVar11 >> 1 ^ (uint)fVar9) - uVar11)) goto LAB_004c45b4;
  }
  else {
    *(float *)(puVar13 + 8) = (float)dVar35;
    *(float *)(puVar13 + 9) = (float)dVar37;
    *(float *)((int)puVar13 + 0x44) = (float)dVar32;
    *(float *)((int)puVar13 + 0x4c) = (float)dVar36;
    iVar22 = M938_004c2ce8(lVar24,uVar29,puVar13[8],puVar13[9]);
    if (iVar22 == 0) goto LAB_004c44cc;
  }
  moby->state = '\x03';
LAB_004c45b4:
  fVar9 = (moby->pos).x;
  fVar6 = (moby->pos).z + DAT_008f4c60;
  dVar35 = (double)fVar6;
  uVar11 = (int)fVar9 >> 0x1f;
  iVar22 = (uVar11 >> 1 ^ (uint)fVar9) - uVar11;
  (moby->pos).z = fVar6;
  if (((iVar22 < 0x43ff8001 && 0x3f7fffff < iVar22) &&
      (fVar9 = (moby->pos).y, uVar11 = (int)fVar9 >> 0x1f,
      iVar22 = (uVar11 >> 1 ^ (uint)fVar9) - uVar11, iVar22 < 0x43ff8001 && 0x3f7fffff < iVar22)) &&
     ((dVar34 <= dVar35 && (dVar35 <= dVar33)))) {
    return;
  }
  DeleteMoby(moby);
  return;
}


