// game/update/moby212.cpp -- reconstructed from NPEA00385 EBOOT
// STATUS: NOT STARTED (raw Ghidra output)
// 9 functions, 0x2ef9c8-0x2f1994
// shared update function UpdateMoby_{212_1412}; registered for oClasses 212, 1412
#include <stdlib.h>
#include "game/update/moby212.h"
#include "game/camera.h"
#include "game/collproc.h"
#include "game/draw.h"
#include "game/hero.h"
#include "game/hud.h"
#include "game/lights.h"
#include "game/mobyfunc.h"
#include "game/mobyproc.h"
#include "game/mobyutil.h"
#include "game/sound.h"
#include "game/update.h"
#include "game/update/moby1262.h"
#include "game/update/moby211.h"
#include "idol/fastfunc.h"

// 0x02ef9c8 (0x5fc bytes)
// inlined: FastAtan2 @0x2efb98, FastAtan2 @0x2efe04
void M1412_002ef9c8(int param_1)

{
  longlong lVar1;
  byte bVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  ushort uVar7;
  void *pvVar8;
  int iVar9;
  int iVar10;
  undefined4 uVar11;
  ulonglong *puVar12;
  int iVar13;
  int iVar14;
  float fVar15;
  ulonglong uVar16;
  float *pfVar17;
  ulonglong uVar18;
  longlong lVar19;
  longlong lVar20;
  longlong lVar21;
  ulonglong unaff_r25;
  ulonglong unaff_r26;
  ulonglong unaff_r27;
  ulonglong unaff_r28;
  MobyInstance *pMVar22;
  int iVar23;
  ulonglong unaff_r29;
  ushort *puVar24;
  ulonglong unaff_r30;
  longlong lVar25;
  int iVar26;
  ulonglong unaff_r31;
  ulonglong in_LR;
  longlong lVar27;
  double dVar28;
  double dVar29;
  double dVar30;
  ulonglong in_f30;
  double dVar31;
  ulonglong in_f31;
  double dVar32;
  
  uVar16 = ZEXT48(&stack0x00000000);
  lVar1 = uVar16 - 0x160;
  puVar12 = (ulonglong *)lVar1;
  *puVar12 = uVar16;
  puVar12[0x2e] = in_LR;
  puVar12[0x2a] = in_f30;
  puVar12[0x2b] = in_f31;
  puVar12[0x29] = unaff_r31;
  bVar2 = *(byte *)(param_1 + 0x21);
  puVar12[0x27] = unaff_r29;
  puVar24 = (ushort *)(&g_MobyGroups)[bVar2];
  puVar12[0x28] = unaff_r30;
  puVar12[0x26] = unaff_r28;
  puVar12[0x25] = unaff_r27;
  puVar12[0x24] = unaff_r26;
  puVar12[0x23] = unaff_r25;
  if (puVar24 != (ushort *)0x0) {
    lVar25 = 0;
    do {
      pMVar22 = g_MobyInstance + (*puVar24 & 0x7fff);
      pvVar8 = pMVar22->pVar;
      dVar32 = 0.7853981852531433;
      iVar23 = *(int *)(DAT_00a1a85c + *(int *)((int)pvVar8 + 0x60) * 0x20 + 0x10);
      if (DAT_0096a240 == iVar23) {
        dVar31 = 0.0;
        *(undefined4 *)((int)puVar12 + 0xa4) = 0;
        MB_PathFollowToPos
                  (0x4034000000000000,0x4014000000000000,0,iVar23,
                   ZEXT48(Splines[*(int *)((int)pvVar8 + 0x88)]) + 0x10,uVar16 - 0xe0,uVar16 - 0xc0,
                   uVar16 - 0xbc,Splines,0);
        iVar26 = iVar23 + *(int *)(puVar12 + 0x14) * 0x10;
        fVar5 = *(float *)(iVar26 + 0x40) - *(float *)(iVar26 + 0x10);
        fVar3 = *(float *)(iVar26 + 0x44) - *(float *)(iVar26 + 0x14);
        dVar29 = ABS((double)fVar5);
        dVar30 = ABS((double)fVar3);
        *(float *)((int)puVar12 + 0xb4) = fVar5;
        *(float *)(puVar12 + 0x17) = fVar3;
        *(undefined4 *)(puVar12 + 0x12) = 0;
        *(undefined4 *)((int)puVar12 + 0x94) = 0;
        *(float *)((int)puVar12 + 0xbc) = (float)(dVar29 - dVar30);
        uVar18 = (ulonglong)(*(uint *)((int)puVar12 + 0xb4) >> 0x1c) & 8 |
                 (ulonglong)(*(uint *)((int)puVar12 + 0xbc) >> 0x1e) & 2 |
                 (ulonglong)(*(uint *)(puVar12 + 0x17) >> 0x1d) & 4;
        dVar28 = ABS((double)*(float *)((int)puVar12 + 0xb4));
        if ((double)*(float *)((int)puVar12 + 0xbc) - dVar31 < 0.0) {
          dVar28 = dVar30;
        }
        fVar5 = *(float *)(&g_atanQuadrantTable + (int)(uVar18 << 2));
        dVar30 = ABS((double)*(float *)(puVar12 + 0x17));
        if ((double)*(float *)((int)puVar12 + 0xbc) - dVar31 < 0.0) {
          dVar30 = dVar29;
        }
        fVar3 = *(float *)(((uint)(uVar18 << 2) | 0x735900) + 4);
        if (dVar31 < dVar28) {
          lVar19 = uVar16 - 0x150;
          lVar20 = uVar16 - 0x74;
          lVar21 = uVar16 - 100;
          lVar27 = 2;
          fVar6 = (float)(dVar30 - dVar28) / (float)(dVar30 + dVar28);
          fVar4 = fVar6 * fVar6;
          *(float *)(puVar12 + 0x1f) = fVar6;
          *(float *)(puVar12 + 0x1e) = fVar6;
          *(float *)((int)puVar12 + 0xf4) = fVar6;
          *(float *)((int)puVar12 + 0xec) = fVar6;
          fVar6 = fVar4 * fVar4;
          *(float *)(puVar12 + 0x1e) = *(float *)(puVar12 + 0x1e) * fVar4;
          *(float *)((int)puVar12 + 0xf4) = *(float *)((int)puVar12 + 0xf4) * fVar6;
          *(float *)(puVar12 + 0x1f) = *(float *)(puVar12 + 0x1f) * fVar6 * fVar4;
          do {
            *(float *)((int)lVar19 + 0xec) = *(float *)((int)lVar19 + 0xdc) * fVar6 * fVar6;
            iVar26 = (int)lVar20;
            lVar19 = lVar19 + 8;
            lVar20 = lVar20 + 8;
            *(float *)((int)lVar21 + 4) = *(float *)(iVar26 + 4) * fVar6 * fVar6;
            lVar21 = lVar21 + 8;
            lVar27 = lVar27 + -1;
          } while (lVar27 != 0);
          lVar27 = 4;
          lVar21 = uVar16 - 0x74;
          pfVar17 = (float *)&DAT_007358e0;
          lVar19 = lVar1;
          lVar20 = lVar21;
          do {
            fVar6 = *pfVar17;
            fVar4 = pfVar17[1];
            pfVar17 = pfVar17 + 2;
            *(float *)((int)lVar19 + 0xec) = *(float *)((int)lVar19 + 0xec) * fVar6;
            lVar19 = lVar19 + 8;
            *(float *)((int)lVar20 + 4) = *(float *)((int)lVar20 + 4) * fVar4;
            lVar20 = lVar20 + 8;
            lVar27 = lVar27 + -1;
          } while (lVar27 != 0);
          lVar20 = 2;
          lVar19 = lVar1;
          do {
            iVar26 = (int)lVar19;
            iVar9 = (int)lVar21;
            lVar19 = lVar19 + 0x10;
            lVar21 = lVar21 + 0x10;
            dVar31 = (double)((float)(dVar31 + (double)*(float *)(iVar26 + 0xec)) +
                              *(float *)(iVar9 + 4) + *(float *)(iVar9 + 8) +
                             *(float *)(iVar9 + 0xc));
            lVar20 = lVar20 + -1;
          } while (lVar20 != 0);
          dVar31 = (double)((float)(dVar31 + dVar32) * fVar5 + fVar3);
        }
        dVar28 = (double)FastWrapRot((float)dVar31,-1.5707964);
        DAT_0096a244 = *(int *)(puVar12 + 0x14);
        *(float *)(puVar12 + 0x13) = (float)dVar28;
        *(undefined4 *)((int)puVar12 + 0x9c) = 0;
        DAT_0096a248 = 0;
        Hero_Warp((float *)(iVar23 + DAT_0096a244 * 0x10 + 0x10),(float *)(puVar12 + 0x12),
                        0x28,0);
      }
      lVar19 = lVar25 << 2;
      uVar7 = *puVar24;
      lVar25 = (longlong)(short)((short)lVar25 + 1);
      puVar24 = puVar24 + 1;
      *(MobyInstance **)((int)puVar12 + (int)lVar19 + 0xc0) = pMVar22;
    } while (-1 < (short)uVar7);
    iVar26 = 0;
    iVar23 = 0;
    lVar25 = lVar1;
    do {
      iVar9 = *(int *)((int)lVar25 + 0xc0);
      iVar10 = *(int *)(iVar9 + 0x78);
      uVar11 = *(undefined4 *)(DAT_00a1a85c + *(int *)(iVar10 + 0x60) * 0x20 + 0x10);
      *(undefined1 *)(iVar9 + 0x20) = 6;
      fVar5 = g_heroPosition.x - *(float *)(param_1 + 0x10);
      fVar3 = g_heroPosition.y - *(float *)(param_1 + 0x14);
      fVar4 = ABS(fVar5);
      fVar6 = ABS(fVar3);
      *(float *)(puVar12 + 0x15) = fVar5;
      *(float *)((int)puVar12 + 0xac) = fVar3;
      *(float *)(puVar12 + 0x16) = fVar4 - fVar6;
      dVar28 = 0.0;
      uVar18 = (ulonglong)(*(uint *)(puVar12 + 0x15) >> 0x1c) & 8 |
               (ulonglong)(*(uint *)(puVar12 + 0x16) >> 0x1e) & 2 |
               (ulonglong)(*(uint *)((int)puVar12 + 0xac) >> 0x1d) & 4;
      fVar5 = ABS(*(float *)(puVar12 + 0x15));
      if (*(float *)(puVar12 + 0x16) - 0.0 < 0.0) {
        fVar5 = fVar6;
      }
      fVar6 = *(float *)(&g_atanQuadrantTable + (int)(uVar18 << 2));
      fVar3 = *(float *)(((uint)(uVar18 << 2) | 0x735900) + 4);
      fVar15 = ABS(*(float *)((int)puVar12 + 0xac));
      if (*(float *)(puVar12 + 0x16) - 0.0 < 0.0) {
        fVar15 = fVar4;
      }
      if (0.0 < fVar5) {
        lVar19 = uVar16 - 0x150;
        lVar21 = uVar16 - 0x84;
        lVar20 = uVar16 - 0x94;
        lVar27 = 2;
        fVar5 = (fVar15 - fVar5) / (fVar15 + fVar5);
        fVar4 = fVar5 * fVar5;
        *(float *)(puVar12 + 0x1b) = fVar5;
        *(float *)(puVar12 + 0x1a) = fVar5;
        *(float *)((int)puVar12 + 0xd4) = fVar5;
        *(float *)((int)puVar12 + 0xcc) = fVar5;
        fVar5 = fVar4 * fVar4;
        *(float *)(puVar12 + 0x1a) = *(float *)(puVar12 + 0x1a) * fVar4;
        *(float *)((int)puVar12 + 0xd4) = *(float *)((int)puVar12 + 0xd4) * fVar5;
        *(float *)(puVar12 + 0x1b) = *(float *)(puVar12 + 0x1b) * fVar5 * fVar4;
        do {
          *(float *)((int)lVar19 + 0xcc) = *(float *)((int)lVar19 + 0xbc) * fVar5 * fVar5;
          iVar13 = (int)lVar20;
          lVar20 = lVar20 + 8;
          lVar19 = lVar19 + 8;
          *(float *)((int)lVar21 + 4) = *(float *)(iVar13 + 4) * fVar5 * fVar5;
          lVar21 = lVar21 + 8;
          lVar27 = lVar27 + -1;
        } while (lVar27 != 0);
        lVar27 = 4;
        lVar21 = uVar16 - 0x94;
        pfVar17 = (float *)&DAT_007358e0;
        lVar19 = lVar1;
        lVar20 = lVar21;
        do {
          fVar5 = *pfVar17;
          fVar4 = pfVar17[1];
          pfVar17 = pfVar17 + 2;
          *(float *)((int)lVar19 + 0xcc) = *(float *)((int)lVar19 + 0xcc) * fVar5;
          lVar19 = lVar19 + 8;
          *(float *)((int)lVar20 + 4) = *(float *)((int)lVar20 + 4) * fVar4;
          lVar20 = lVar20 + 8;
          lVar27 = lVar27 + -1;
        } while (lVar27 != 0);
        lVar20 = 2;
        lVar19 = lVar1;
        do {
          iVar13 = (int)lVar19;
          lVar19 = lVar19 + 0x10;
          iVar14 = (int)lVar21;
          lVar21 = lVar21 + 0x10;
          dVar28 = (double)((float)(dVar28 + (double)*(float *)(iVar13 + 0xcc)) +
                            *(float *)(iVar14 + 4) + *(float *)(iVar14 + 8) +
                           *(float *)(iVar14 + 0xc));
          lVar20 = lVar20 + -1;
        } while (lVar20 != 0);
        dVar28 = (double)((float)(dVar28 + dVar32) * fVar6 + fVar3);
      }
      *(float *)(iVar9 + 0x48) = (float)dVar28;
      *(int *)(iVar10 + 100) = DAT_0096a244;
      *(undefined4 *)(iVar10 + 0x68) = DAT_0096a248;
      MB_PathMoveDist
                (-(double)DAT_007fec0c,uVar11,iVar9 + 0x10,iVar10 + 100,iVar10 + 0x68,0x800000,0);
      *(undefined4 *)(iVar10 + 0x9c) = 0;
      *(undefined4 *)(iVar10 + 0x98) = 0;
      *(undefined4 *)(iVar10 + 0x94) = 0;
      *(undefined4 *)(iVar10 + 0x90) = 0;
      *(int *)(iVar10 + 0xf8) = iVar23;
      *(int *)(iVar10 + 0xfc) = iVar23 + 1;
      if (*(int *)(iVar10 + 0xf0) != -1) {
        DeletePointLight(*(int *)(iVar10 + 0xf0));
        *(undefined4 *)(iVar10 + 0xf0) = 0xffffffff;
      }
      iVar26 = iVar26 + 1;
      iVar23 = iVar23 + 2;
      lVar25 = lVar25 + 4;
    } while (iVar26 < 3);
  }
  return;
}


// 0x02effe0 (0x5b4 bytes)
// inlined: FastRSqrt @0x2f00b0, FastRSqrt @0x2f038c
void M1412_002effe0(int param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  int iVar9;
  float fVar10;
  undefined4 uVar11;
  float *pfVar12;
  float *pfVar13;
  float *pfVar14;
  float *pfVar15;
  longlong lVar16;
  double dVar17;
  double dVar18;
  double dVar19;
  double dVar20;
  double dVar21;
  double dVar22;
  double dVar23;
  double dVar24;
  double dVar25;
  double dVar26;
  double dVar27;
  double dVar28;
  double dVar29;
  double dVar30;
  double dVar31;
  double dVar32;
  double dVar33;
  double dVar34;
  double dVar35;
  float local_150 [38];
  
  iVar9 = *(int *)(param_1 + 0x78);
  dVar34 = (double)*(float *)(iVar9 + 0xe4);
  dVar35 = (double)*(float *)(iVar9 + 0xe0);
  fVar5 = (float)((double)GameCamera.posY - dVar34);
  dVar33 = (double)*(float *)(iVar9 + 0xe8);
  fVar6 = (float)((double)GameCamera.posX - dVar35);
  fVar7 = (float)((double)GameCamera.posZ - dVar33);
  dVar27 = 0.0;
  dVar28 = 1.0;
  dVar31 = (double)(float)GameCamera.field8_0x14c;
  fVar8 = fVar7 * fVar7 + fVar6 * fVar6 + fVar5 * fVar5;
  dVar23 = dVar27;
  dVar24 = dVar27;
  dVar25 = dVar27;
  if (SQRT(fVar8) != 0.0) {
    fVar1 = 1.0 / SQRT(fVar8);
    fVar1 = -(fVar8 * fVar1 * fVar1 - 1.0) * fVar1 * 0.5 + fVar1;
    fVar1 = -(fVar8 * fVar1 * fVar1 - 1.0) * fVar1 * 0.5 + fVar1;
    fVar1 = -(fVar8 * fVar1 * fVar1 - 1.0) * fVar1 * 0.5 + fVar1;
    dVar25 = (double)(fVar6 * fVar1);
    dVar24 = (double)(fVar5 * fVar1);
    dVar23 = (double)(fVar7 * fVar1);
  }
  fVar5 = (float)((double)DAT_00969f78 * dVar25 -
                 (double)(float)((double)g_heroGravityDir * dVar23));
  fVar6 = (float)((double)DAT_00969f74 * dVar23 - (double)(float)((double)DAT_00969f78 * dVar24));
  fVar7 = (float)((double)g_heroGravityDir * dVar24 -
                 (double)(float)((double)DAT_00969f74 * dVar25));
  dVar26 = -1.0;
  fVar8 = SQRT(fVar7 * fVar7 + fVar6 * fVar6 + fVar5 * fVar5);
  fVar1 = -1.0 / fVar8;
  dVar17 = dVar27;
  if (0.0 - fVar8 < 0.0) {
    dVar17 = (double)(fVar6 * fVar1);
  }
  dVar18 = dVar27;
  if (0.0 - fVar8 < 0.0) {
    dVar18 = (double)(fVar5 * fVar1);
  }
  dVar19 = dVar27;
  if (0.0 - fVar8 < 0.0) {
    dVar19 = (double)(fVar7 * fVar1);
  }
  if (fVar8 - 0.0 < 0.0) {
    dVar17 = (double)(fVar6 * fVar1);
  }
  if (fVar8 - 0.0 < 0.0) {
    dVar18 = (double)(fVar5 * fVar1);
  }
  if (fVar8 - 0.0 < 0.0) {
    dVar19 = (double)(fVar7 * fVar1);
  }
  dVar29 = (double)(float)(dVar25 * dVar18 - (double)(float)(dVar24 * dVar17));
  dVar32 = (double)(float)(dVar24 * dVar19 - (double)(float)(dVar23 * dVar18));
  dVar30 = (double)(float)(dVar23 * dVar17 - (double)(float)(dVar25 * dVar19));
  GetEffectTex(0xb);
  idol_draw::PackCmd(0,2,0,1,0x80);
  STUB_00502fd4_RET_0(0,0,1,1,1,0,0xff90);
  FUN_00502f08(1,1,0,0,0,0);
  pfVar14 = (float *)&DAT_007fec40;
  lVar16 = 4;
  pfVar15 = local_150;
  pfVar13 = pfVar14;
  pfVar12 = pfVar15;
  do {
    fVar6 = *pfVar13;
    fVar5 = (float)((double)fVar6 * 0.4000000059604645);
    dVar20 = (double)fVar5;
    *pfVar12 = fVar5;
    fVar5 = pfVar13[1];
    pfVar12[1] = fVar5 * 0.4;
    dVar21 = (double)(pfVar13[2] * 0.4);
    pfVar12[2] = pfVar13[2] * 0.4;
    dVar22 = (double)pfVar13[3];
    pfVar13 = pfVar13 + 4;
    pfVar12[3] = (float)((double)fVar6 * (double)(float)(dVar31 * 0.4000000059604645) + dVar22);
    *pfVar12 = (float)(dVar22 * dVar35 +
                      (double)(float)(dVar21 * dVar32 +
                                     (double)(float)(dVar20 * dVar25 +
                                                    (double)(fVar5 * (float)(dVar17 * 
                                                  0.4000000059604645)))));
    pfVar12[1] = (float)(dVar22 * dVar34 +
                        (double)(float)(dVar21 * dVar30 +
                                       (double)(float)(dVar20 * dVar24 +
                                                      (double)(fVar5 * (float)(dVar18 * 
                                                  0.4000000059604645)))));
    pfVar12[2] = (float)(dVar22 * dVar33 +
                        (double)(float)(dVar21 * dVar29 +
                                       (double)(float)(dVar20 * dVar23 +
                                                      (double)(fVar5 * (float)(dVar19 * 
                                                  0.4000000059604645)))));
    pfVar12 = pfVar12 + 4;
    lVar16 = lVar16 + -1;
  } while (lVar16 != 0);
  FastDrawQuad(local_150,0,0,EffectTexHeaders,9);
  uVar11 = EffectTexHeaders;
  fVar5 = *(float *)(iVar9 + 0x204);
  fVar6 = *(float *)(iVar9 + 0x200);
  fVar1 = GameCamera.posY - fVar5;
  fVar7 = *(float *)(iVar9 + 0x208);
  fVar4 = GameCamera.posX - fVar6;
  fVar3 = GameCamera.posZ - fVar7;
  fVar8 = *(float *)(iVar9 + 0x20c);
  dVar31 = (double)(fVar3 * fVar3 + fVar4 * fVar4 + fVar1 * fVar1);
  dVar23 = dVar27;
  dVar24 = dVar27;
  dVar25 = dVar27;
  if ((double)(float)SQRT(dVar31) != dVar27) {
    dVar23 = 1.0 / SQRT(dVar31);
    dVar23 = (double)(float)(-(double)(float)((double)(float)(dVar31 * dVar23) * dVar23 - dVar28) *
                             (double)(float)(dVar23 * 0.5) + dVar23);
    dVar23 = (double)(float)(-(double)(float)((double)(float)(dVar31 * dVar23) * dVar23 - dVar28) *
                             (double)(float)(dVar23 * 0.5) + dVar23);
    fVar2 = (float)(-(double)(float)((double)(float)(dVar31 * dVar23) * dVar23 - dVar28) *
                    (double)(float)(dVar23 * 0.5) + dVar23);
    dVar25 = (double)(fVar4 * fVar2);
    dVar24 = (double)(fVar1 * fVar2);
    dVar23 = (double)(fVar3 * fVar2);
  }
  fVar3 = (float)((double)DAT_00969f78 * dVar25 -
                 (double)(float)((double)g_heroGravityDir * dVar23));
  fVar4 = (float)((double)DAT_00969f74 * dVar23 - (double)(float)((double)DAT_00969f78 * dVar24));
  fVar2 = (float)((double)g_heroGravityDir * dVar24 -
                 (double)(float)((double)DAT_00969f74 * dVar25));
  lVar16 = 4;
  dVar28 = (double)SQRT(fVar2 * fVar2 + fVar4 * fVar4 + fVar3 * fVar3);
  fVar10 = (float)GameCamera.field8_0x14c * 0.2;
  fVar1 = (float)(dVar26 / dVar28);
  dVar31 = dVar27;
  if (dVar27 - dVar28 < 0.0) {
    dVar31 = (double)(fVar4 * fVar1);
  }
  dVar33 = dVar27;
  if (dVar27 - dVar28 < 0.0) {
    dVar33 = (double)(fVar3 * fVar1);
  }
  dVar34 = dVar27;
  if (dVar27 - dVar28 < 0.0) {
    dVar34 = (double)(fVar2 * fVar1);
  }
  if (dVar28 - dVar27 < 0.0) {
    dVar31 = (double)(fVar4 * fVar1);
  }
  if (dVar28 - dVar27 < 0.0) {
    dVar33 = (double)(fVar3 * fVar1);
  }
  if (dVar28 - dVar27 < 0.0) {
    dVar34 = (double)(fVar2 * fVar1);
  }
  do {
    fVar1 = *pfVar14;
    fVar3 = fVar1 * 0.2;
    dVar27 = (double)fVar3;
    *pfVar15 = fVar3;
    fVar3 = pfVar14[1];
    pfVar15[1] = fVar3 * 0.2;
    fVar2 = pfVar14[2] * 0.2;
    pfVar15[2] = fVar2;
    fVar4 = pfVar14[3];
    pfVar14 = pfVar14 + 4;
    pfVar15[3] = fVar4 * fVar8 + fVar1 * fVar10;
    *pfVar15 = fVar4 * fVar6 +
               fVar2 * (float)(dVar24 * dVar34 - (double)(float)(dVar23 * dVar33)) +
               (float)(dVar27 * dVar25 + (double)(fVar3 * (float)(dVar31 * 0.20000000298023224)));
    pfVar15[1] = fVar4 * fVar5 +
                 fVar2 * (float)(dVar23 * dVar31 - (double)(float)(dVar25 * dVar34)) +
                 (float)(dVar27 * dVar24 + (double)(fVar3 * (float)(dVar33 * 0.20000000298023224)));
    pfVar15[2] = fVar4 * fVar7 +
                 fVar2 * (float)(dVar25 * dVar33 - (double)(float)(dVar24 * dVar31)) +
                 (float)(dVar27 * dVar23 + (double)(fVar3 * (float)(dVar34 * 0.20000000298023224)));
    pfVar15 = pfVar15 + 4;
    lVar16 = lVar16 + -1;
  } while (lVar16 != 0);
  FastDrawQuad(local_150,0,0,uVar11,9);
  return;
}


// 0x02f0594 (0x14 bytes)
void M1412_002f0594(void)

{
  DAT_007feccc = 0x10000;
  return;
}


// 0x02f05c0 (0x294 bytes)
MobyInstance *
M1412_002f05c0
          (double param_1,int param_2,f32 *param_3,undefined4 *param_4,undefined8 param_5,
          undefined2 param_6)

{
  f32 fVar1;
  undefined4 uVar2;
  short sVar3;
  undefined4 *puVar4;
  undefined2 uVar5;
  MobyInstance *pMVar6;
  int iVar7;
  int iVar8;
  undefined8 in_LR;
  double dVar9;
  double dVar10;
  GPiece<16> auVar11;
  GPiece<16> auVar12;
  GPiece<16> auVar13;
  
  pMVar6 = CreateMoby(ASTEROID_0584);
  if (pMVar6 != (MobyInstance *)0x0) {
    pMVar6->updateDistance = -1;
    sVar3 = *(short *)(param_2 + 0x32);
    pMVar6->enabled = '\x01';
    pMVar6->state = '\x02';
    pMVar6->setByGroup = '\0';
    pMVar6->field45_0x72 = '\0';
    puVar4 = (undefined4 *)pMVar6->pVar;
    (pMVar6->pos).x = *param_3;
    auVar11 = ZEXT416(0xffffffff);
    auVar11 = auVar11 | auVar11 << 0x20 | auVar11 << 0x40 | auVar11 << 0x60;
    (pMVar6->pos).y = param_3[1];
    (pMVar6->pos).z = param_3[2];
    fVar1 = param_3[3];
    pMVar6->drawDistance = sVar3;
    (pMVar6->pos).w = fVar1;
    auVar12 = vectorShiftLeftIntegerWord(auVar11,auVar11);
    *puVar4 = *param_4;
    puVar4[1] = param_4[1];
    puVar4[2] = param_4[2];
    uVar2 = param_4[3];
    puVar4[0x12] = param_2;
    puVar4[3] = uVar2;
    pMVar6->scale = (float)param_1;
    puVar4[0x10] = 1;
    auVar11 = loadVectorLeftIndexed(in_LR,0x2f05a8);
    auVar13 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
    auVar11 = auVar11 >> 0x60 & (GPiece<16>)0xffffffff;
    auVar11 = vectorMultiplyAddFloatingPoint
                        (auVar13,auVar11 | auVar11 << 0x20 | auVar11 << 0x40 | auVar11 << 0x60,
                         auVar12);
    auVar11 = vectorConvertToSignedFixedPointWordSaturate(auVar11,0);
    auVar11 = vectorSplatHalfWord(auVar11,1);
    uVar5 = storeVectorElementHalfWordIndexed(auVar11,0x4c,ZEXT48(puVar4));
    *(undefined2 *)(puVar4 + 0x13) = uVar5;
    *(undefined2 *)((int)puVar4 + 0x4e) = param_6;
    pMVar6->collision = (ushort *)0x0;
    dVar9 = (double)MB_randRangeFloat(-30.0,30.0);
    dVar10 = 0.01745329238474369;
    dVar9 = (double)((float)(dVar9 * 0.01745329238474369) * g_FrameTime);
    iVar7 = rand();
    iVar7 = iVar7 % 3;
    if (iVar7 < 1) {
      if (-1 < iVar7) {
        puVar4[0xc] = (float)dVar9;
      }
    }
    else if (iVar7 < 2) {
      puVar4[0xd] = (float)dVar9;
    }
    else if (iVar7 < 3) {
      puVar4[0xe] = (float)dVar9;
    }
    dVar9 = (double)MB_randRangeFloat(-180.0,180.0);
    dVar9 = (double)((float)(dVar9 * dVar10) * g_FrameTime);
    iVar8 = rand();
    iVar7 = iVar8 / 3 + (iVar8 >> 0x1f);
    iVar8 = iVar8 + (iVar7 - (iVar7 >> 0x1f)) * -3;
    if (iVar8 < 1) {
      if (-1 < iVar8) {
        puVar4[0xc] = (float)dVar9;
      }
    }
    else if (iVar8 < 2) {
      puVar4[0xd] = (float)dVar9;
    }
    else if (iVar8 < 3) {
      puVar4[0xe] = (float)dVar9;
    }
    dVar9 = (double)MB_randRot();
    (pMVar6->rotation).x = (float)dVar9;
    dVar9 = (double)MB_randRot();
    (pMVar6->rotation).y = (float)dVar9;
    dVar9 = (double)MB_randRot();
    (pMVar6->rotation).z = (float)dVar9;
    UpdateMobyTransform(pMVar6);
    MB_CopyHeroLights(pMVar6);
  }
  return pMVar6;
}


// 0x02f0898 (0x428 bytes)
void M1412_002f0898(double param_1,MobyInstance *param_2,undefined8 param_3)

{
  float fVar1;
  undefined2 uVar2;
  float fVar3;
  float fVar4;
  float *pfVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  int iVar9;
  short sVar10;
  int iVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  double dVar16;
  double dVar17;
  GPiece<16> auVar18;
  GPiece<16> auVar19;
  GPiece<16> auVar20;
  undefined4 local_a0 [4];
  GPiece<16> local_90;
  
  fVar1 = (param_2->pos).y - g_heroPosition.y;
  fVar3 = (param_2->pos).x - g_heroPosition.x;
  fVar4 = (param_2->pos).z - g_heroPosition.z;
  dVar17 = 10.0;
  dVar14 = (double)(float)(param_1 * 10.0);
  fVar1 = SQRT(fVar4 * fVar4 + fVar3 * fVar3 + fVar1 * fVar1);
  dVar13 = dVar14;
  if (20.0 - fVar1 < 0.0) {
    dVar13 = 0.0;
  }
  dVar15 = (double)(float)(param_1 * 7.0);
  if (20.0 - fVar1 < 0.0) {
    dVar15 = 0.0;
  }
  PlayMobySound(0,0,param_2);
  pfVar5 = (float *)param_3;
  if (*(short *)(pfVar5 + 0x13) == 0) {
    uVar6 = FastDoubleToInt(dVar14);
    uVar7 = FastDoubleToInt((double)(float)(param_1 * 3.0));
    uVar8 = FastDoubleToInt((double)(float)(param_1 * 16.0));
    MB_genericExplosion
              (dVar15,dVar13,(double)(float)(param_1 * 4.0),(double)(float)(param_1 * 2.0),
               0x4022000000000000,0x3ff0000000000000,(double)(float)(param_1 * 15.0),param_2,
               &DAT_007350c0,0,0,1,uVar6,uVar7,uVar8);
  }
  param_2->field45_0x72 = '\0';
  if (*(short *)((int)pfVar5 + 0x4e) < 1) {
    if (pfVar5[0x10] == 0.0) {
      param_2->enabled = '\0';
      param_2->collision = (ushort *)0x0;
      param_2->state = '\x04';
      fVar1 = pfVar5[0xb];
      param_2->modeBits = param_2->modeBits | DISABLED;
      param_2->scale = fVar1;
    }
    else {
      DeleteMoby(param_2);
    }
  }
  else {
    dVar13 = 0.25;
    dVar14 = 0.75;
    dVar15 = 5.0;
    dVar16 = 0.20000000298023224;
    for (iVar11 = 0; iVar9 = MB_randRange(1,2), iVar11 < iVar9; iVar11 = iVar11 + 1) {
      dVar12 = (double)MB_randRangeFloat((float)dVar13,(float)dVar14);
      dVar12 = (double)(float)((double)param_2->scale * dVar12);
      MB_randSphere
                ((double)(float)((double)g_FrameTime * dVar15),
                 (double)(float)((double)g_FrameTime * dVar17),local_a0);
      *pfVar5 = (float)((double)*pfVar5 * dVar14);
      pfVar5[1] = (float)((double)pfVar5[1] * dVar14);
      pfVar5[2] = (float)((double)pfVar5[2] * dVar14);
      M1412_002f05c0(dVar12,param_2,local_90,local_a0,*(short *)((int)pfVar5 + 0x4e),
                     (longlong)*(short *)((int)pfVar5 + 0x4e) + -1);
      fVar1 = (float)((double)param_2->scale - dVar12);
      sVar10 = *(short *)((int)pfVar5 + 0x4e) + -1;
      *(short *)((int)pfVar5 + 0x4e) = sVar10;
      param_2->scale = fVar1;
      if ((sVar10 == 0) || ((double)(fVar1 / param_2->pClass->gScale) <= dVar16)) break;
    }
    auVar18 = ZEXT416(0xffffffff);
    auVar18 = auVar18 | auVar18 << 0x20 | auVar18 << 0x40 | auVar18 << 0x60;
    param_2->collision = (ushort *)0x0;
    auVar19 = vectorShiftLeftIntegerWord(auVar18,auVar18);
    auVar18 = loadVectorLeftIndexed(0x40,0x2f0854);
    auVar18 = auVar18 >> 0x60 & (GPiece<16>)0xffffffff;
    auVar20 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
    auVar18 = vectorMultiplyAddFloatingPoint
                        (auVar20,auVar18 | auVar18 << 0x20 | auVar18 << 0x40 | auVar18 << 0x60,
                         auVar19);
    auVar18 = vectorConvertToSignedFixedPointWordSaturate(auVar18,0);
    auVar18 = vectorSplatHalfWord(auVar18,1);
    uVar2 = storeVectorElementHalfWordIndexed(auVar18,0x4c,param_3);
    *(undefined2 *)(pfVar5 + 0x13) = uVar2;
  }
  return;
}


// shared update function, registered for oClasses 212, 1412
// 0x02f0cf8 (0x92c bytes)
/* Moby 212
   Moby 1412 */

void UpdateMoby_212(MobyInstance *moby)

{
  u8 uVar1;
  char cVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  short sVar9;
  MobyModeBit MVar10;
  float *pfVar11;
  MobyClass *pMVar12;
  u16 *puVar13;
  f32 fVar14;
  uint uVar15;
  undefined4 uVar16;
  MobyInstance *pMVar17;
  longlong lVar18;
  undefined2 uVar22;
  uint uVar19;
  int iVar20;
  int iVar21;
  ulonglong uVar23;
  double dVar24;
  double dVar25;
  GPiece<16> auVar26;
  GPiece<16> auVar27;
  GPiece<16> auVar28;
  
  lVar18 = (longlong)(int)moby;
  fVar3 = (moby->pos).x;
  fVar4 = (moby->pos).y - g_heroPosition.y;
  fVar5 = fVar3 - g_heroPosition.x;
  pfVar11 = (float *)moby->pVar;
  uVar23 = ZEXT48(pfVar11);
  fVar6 = (moby->pos).z - g_heroPosition.z;
  uVar1 = moby->state;
  dVar24 = (double)SQRT(fVar6 * fVar6 + fVar5 * fVar5 + fVar4 * fVar4);
  if (uVar1 == '\x04') {
    iVar20 = FastCheckBsphereInView
                       ((double)(longlong)(int)moby->drawDistance,uVar23 + 0x10);
    if (iVar20 < 0) {
      (moby->pos).x = pfVar11[4];
      pMVar12 = moby->pClass;
      (moby->pos).y = pfVar11[5];
      MVar10 = moby->modeBits;
      (moby->pos).z = pfVar11[6];
      (moby->pos).w = pfVar11[7];
      puVar13 = pMVar12->collision;
      moby->enabled = '\x01';
      moby->collision = puVar13;
      moby->modeBits =
           MVar10 & (MIRROR|CAN_BE_DAMAGED|HIDE_BACKFACES|CAN_BE_AUTO_TARGETED|DISABLE_Z_WRITE|
                     DRAW_SHADOW|DRAW_TRANSPARENT_WEIRD|LOCK_ROTATION|NO_DRAW|UNK_40|
                     HAS_SPECIAL_VARS|HAS_GLOW|TRANSPARENT|NO_POST_UPDATE|NO_UPDATE);
      moby->state = '\x03';
    }
  }
  else if (uVar1 == '\x03') {
    (moby->pos).x = pfVar11[4];
    (moby->pos).y = pfVar11[5];
    (moby->pos).z = pfVar11[6];
    (moby->pos).w = pfVar11[7];
    *(undefined1 *)(pfVar11 + 0xc) = 0;
    *(undefined1 *)((int)pfVar11 + 0x31) = 0;
    *(undefined1 *)((int)pfVar11 + 0x32) = 0;
    *(undefined1 *)((int)pfVar11 + 0x33) = 0;
    *(undefined1 *)(pfVar11 + 0xd) = 0;
    *(undefined1 *)((int)pfVar11 + 0x35) = 0;
    *(undefined1 *)((int)pfVar11 + 0x36) = 0;
    *(undefined1 *)((int)pfVar11 + 0x37) = 0;
    *(undefined1 *)(pfVar11 + 0xe) = 0;
    *(undefined1 *)((int)pfVar11 + 0x39) = 0;
    *(undefined1 *)((int)pfVar11 + 0x3a) = 0;
    *(undefined1 *)((int)pfVar11 + 0x3b) = 0;
    *(undefined1 *)(pfVar11 + 0xf) = 0;
    *(undefined1 *)((int)pfVar11 + 0x3d) = 0;
    *(undefined1 *)((int)pfVar11 + 0x3e) = 0;
    *(undefined1 *)((int)pfVar11 + 0x3f) = 0;
    dVar24 = (double)MB_randRangeFloat(-30.0,30.0);
    dVar25 = 0.01745329238474369;
    dVar24 = (double)((float)(dVar24 * 0.01745329238474369) * g_FrameTime);
    iVar20 = rand();
    iVar20 = iVar20 % 3;
    if (iVar20 < 1) {
      if (-1 < iVar20) {
        pfVar11[0xc] = (float)dVar24;
      }
    }
    else if (iVar20 < 2) {
      pfVar11[0xd] = (float)dVar24;
    }
    else if (iVar20 < 3) {
      pfVar11[0xe] = (float)dVar24;
    }
    dVar24 = (double)MB_randRangeFloat(-180.0,180.0);
    dVar24 = (double)((float)(dVar24 * dVar25) * g_FrameTime);
    iVar21 = rand();
    iVar20 = iVar21 / 3 + (iVar21 >> 0x1f);
    iVar21 = iVar21 + (iVar20 - (iVar20 >> 0x1f)) * -3;
    if (iVar21 < 1) {
      if (-1 < iVar21) {
        pfVar11[0xc] = (float)dVar24;
      }
    }
    else if (iVar21 < 2) {
      pfVar11[0xd] = (float)dVar24;
    }
    else if (iVar21 < 3) {
      pfVar11[0xe] = (float)dVar24;
    }
    dVar24 = (double)MB_randRot();
    (moby->rotation).x = (float)dVar24;
    dVar24 = (double)MB_randRot();
    (moby->rotation).y = (float)dVar24;
    dVar24 = (double)MB_randRot();
    (moby->rotation).z = (float)dVar24;
    fVar3 = pfVar11[0xb];
    *(undefined1 *)pfVar11 = 0;
    uVar15 = (int)fVar3 >> 0x1f;
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
    moby->scale = pfVar11[0xb];
    fVar4 = moby->pClass->gScale;
    uVar19 = (int)fVar4 >> 0x1f;
    if ((int)((uVar19 >> 1 ^ (uint)fVar4) - uVar19) < (int)((uVar15 >> 1 ^ (uint)fVar3) - uVar15)) {
      moby->field45_0x72 = 'd';
    }
    moby->state = '\x01';
  }
  else if (uVar1 == '\x02') {
    FastDecTimerS16(uVar23 + 0x4c);
    cVar2 = moby->enabled;
    (moby->pos).x = (moby->pos).x + *pfVar11;
    (moby->pos).y = (moby->pos).y + pfVar11[1];
    (moby->pos).z = (moby->pos).z + pfVar11[2];
    if ((cVar2 != '\0') || (dVar24 < 40.0)) {
      if (pfVar11[0x10] == 0.0) {
        auVar26 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
        auVar27 = loadVectorLeftIndexed(0x10,0x2f0cc0);
        auVar27 = auVar27 >> 0x60 & (GPiece<16>)0xffffffff;
        auVar27 = auVar27 | auVar27 << 0x20 | auVar27 << 0x40 | auVar27 << 0x60;
      }
      else {
        auVar26 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
        auVar27 = loadVectorLeftIndexed(0x14,0x2f0cc0);
        auVar27 = auVar27 >> 0x60 & (GPiece<16>)0xffffffff;
        auVar27 = auVar27 | auVar27 << 0x20 | auVar27 << 0x40 | auVar27 << 0x60;
      }
      auVar28 = ZEXT416(0xffffffff);
      auVar28 = auVar28 | auVar28 << 0x20 | auVar28 << 0x40 | auVar28 << 0x60;
      auVar26 = auVar26 >> 0x60 & (GPiece<16>)0xffffffff;
      sVar9 = *(short *)(pfVar11 + 0x13);
      auVar28 = vectorShiftLeftIntegerWord(auVar28,auVar28);
      auVar27 = vectorMultiplyAddFloatingPoint
                          (auVar26 | auVar26 << 0x20 | auVar26 << 0x40 | auVar26 << 0x60,auVar27,
                           auVar28);
      auVar27 = vectorConvertToSignedFixedPointWordSaturate(auVar27,0);
      uVar16 = storeVectorElementWordIndexed(auVar27,0x44,uVar23);
      *(undefined4 *)((uint)(pfVar11 + 0x11) & 0xfffffffc) = uVar16;
      uVar15 = worldUpdateTime;
      if (sVar9 == 0) {
        uVar19 = (int)moby - (int)g_MobyInstance;
        moby->collision = moby->pClass->collision;
        dVar24 = (double)(moby->scale / moby->pClass->gScale);
        if ((((uVar15 ^ ((int)uVar19 >> 8) + (uint)((int)uVar19 < 0 && (uVar19 & 0xff) != 0)) & 1)
             == 0) &&
           (iVar20 = CollSphere
                               ((double)(float)(dVar24 * 6.199999809265137),lVar18 + 0x10,
                                &DAT_002f0cc0,0,lVar18), iVar20 != 0)) {
          if (g_CollOutput.pMoby != (MobyInstance *)pfVar11[0x12]) {
            FastVecReflect(uVar23,uVar23,0xa10980);
            (moby->pos).x = g_CollOutput.push.x;
            (moby->pos).y = g_CollOutput.push.y;
            (moby->pos).z = g_CollOutput.push.z;
            pMVar17 = g_CollOutput.pMoby;
            (moby->pos).w = g_CollOutput.push.w;
            if ((pMVar17 == (MobyInstance *)0x0) || (pMVar17->oClass != ASTEROID_00D4)) {
              M1412_002f0898(dVar24,lVar18,uVar23);
            }
          }
        }
        else {
          iVar20 = MB_damage(lVar18,0x330000,0);
          if ((iVar20 != 0) && (*(short *)(*(int *)(iVar20 + 0x20) + 0xa6) != 0xd4)) {
            fVar3 = *(float *)(iVar20 + 0x14);
            fVar4 = *(float *)(iVar20 + 0x10);
            fVar5 = *(float *)(iVar20 + 0x18);
            fVar6 = moby->scale;
            fVar8 = moby->pClass->gScale;
            fVar7 = SQRT(fVar5 * fVar5 + fVar4 * fVar4 + fVar3 * fVar3);
            if (g_FrameTime * 20.0 < fVar7) {
              fVar7 = (g_FrameTime * 20.0) / fVar7;
              fVar4 = fVar4 * fVar7;
              *(float *)(iVar20 + 0x10) = fVar4;
              *(float *)(iVar20 + 0x14) = fVar3 * fVar7;
              *(float *)(iVar20 + 0x18) = fVar5 * fVar7;
            }
            *pfVar11 = *pfVar11 + fVar4;
            pfVar11[1] = pfVar11[1] + *(float *)(iVar20 + 0x14);
            pfVar11[2] = pfVar11[2] + *(float *)(iVar20 + 0x18);
            M1412_002f0898((double)(fVar6 / fVar8),lVar18,uVar23);
          }
          moby->damage = -1;
        }
      }
    }
    else {
      iVar20 = FastDecTimerS32(uVar23 + 0x44);
      if (iVar20 != 0) {
        if (pfVar11[0x10] == 1.4013e-45) {
          DeleteMoby(moby);
          return;
        }
        moby->enabled = '\0';
        moby->collision = (ushort *)0x0;
        moby->state = '\x04';
        fVar3 = pfVar11[0xb];
        moby->modeBits = moby->modeBits | DISABLED;
        moby->scale = fVar3;
      }
    }
  }
  else if (uVar1 == '\x01') {
    if ((((g_heroState == TURRET_PLANE_UI) && (DAT_0096b2d0 != 0)) &&
        (*(short *)(DAT_0096b2d0 + 0xa6) == 0x45)) && ((moby->enabled != '\0' || (dVar24 < 40.0))))
    {
      dVar24 = (double)MB_randRangeFloat(1.0,10.0);
      fVar3 = pfVar11[9];
      fVar4 = pfVar11[8];
      fVar5 = pfVar11[10];
      fVar6 = 0.0;
      fVar8 = SQRT(fVar5 * fVar5 + fVar4 * fVar4 + fVar3 * fVar3);
      if (fVar8 == 0.0) {
        fVar7 = pfVar11[0xb];
        fVar5 = fVar6;
        fVar3 = fVar6;
      }
      else {
        fVar8 = (float)(dVar24 * (double)g_FrameTime) / fVar8;
        fVar7 = pfVar11[0xb];
        fVar6 = fVar4 * fVar8;
        fVar5 = fVar5 * fVar8;
        fVar3 = fVar3 * fVar8;
      }
      *pfVar11 = fVar6;
      pfVar11[1] = fVar3;
      pfVar11[2] = fVar5;
      pfVar11[3] = fVar7;
      moby->state = '\x02';
    }
  }
  else if (uVar1 == '\0') {
    pfVar11[4] = fVar3;
    pfVar11[5] = (moby->pos).y;
    fVar3 = (moby->pos).z;
    pfVar11[7] = 20.0;
    pfVar11[6] = fVar3;
    pfVar11[8] = (moby->transform).v0.x;
    pfVar11[9] = (moby->transform).v0.y;
    pfVar11[10] = (moby->transform).v0.z;
    pfVar11[0xb] = (moby->transform).v0.w;
    pfVar11[0xb] = moby->scale;
    uVar22 = MB_randRange(2,3);
    *(undefined2 *)((int)pfVar11 + 0x4e) = uVar22;
    uVar15 = (int)moby->scale >> 0x1f;
    fVar3 = moby->pClass->gScale;
    uVar19 = (int)fVar3 >> 0x1f;
    if ((int)((uVar15 >> 1 ^ (uint)moby->scale) - uVar15) <
        (int)((uVar19 >> 1 ^ (uint)fVar3) - uVar19)) {
      moby->field45_0x72 = '\0';
    }
    moby->state = '\x03';
  }
  fVar14 = (moby->pos).x;
  uVar15 = (int)fVar14 >> 0x1f;
  fVar3 = 20.0;
  fVar4 = (moby->pos).x;
  if ((int)((uVar15 >> 1 ^ (uint)fVar14) - uVar15) < 0x41a00000) {
    (moby->pos).x = 20.0;
    fVar4 = fVar3;
  }
  if (1003.0 < fVar4) {
    (moby->pos).x = 1003.0;
  }
  fVar14 = (moby->pos).y;
  uVar15 = (int)fVar14 >> 0x1f;
  fVar4 = (moby->pos).y;
  if ((int)((uVar15 >> 1 ^ (uint)fVar14) - uVar15) < 0x41a00000) {
    (moby->pos).y = 20.0;
    fVar4 = fVar3;
  }
  if (1003.0 < fVar4) {
    (moby->pos).y = 1003.0;
  }
  fVar14 = (moby->pos).z;
  uVar15 = (int)fVar14 >> 0x1f;
  fVar4 = (moby->pos).z;
  if ((int)((uVar15 >> 1 ^ (uint)fVar14) - uVar15) < 0x41a00000) {
    (moby->pos).z = 20.0;
    fVar4 = fVar3;
  }
  if (1003.0 < fVar4) {
    (moby->pos).z = 1003.0;
  }
  dVar24 = (double)FastWrapRot((moby->rotation).x,pfVar11[0xc]);
  (moby->rotation).x = (float)dVar24;
  dVar24 = (double)FastWrapRot((moby->rotation).y,pfVar11[0xd]);
  (moby->rotation).y = (float)dVar24;
  dVar24 = (double)FastWrapRot((moby->rotation).z,pfVar11[0xe]);
  (moby->rotation).z = (float)dVar24;
  return;
}


// 0x02f1624 (0x14 bytes)
void M1412_002f1624(void)

{
  DAT_007fed3c = 0x10000;
  return;
}


// 0x02f1660 (0x88 bytes)
double M1412_002f1660(double param_1,double param_2,double param_3)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  double dVar5;
  
  fVar1 = (float)(param_3 * 3.1415927410125732 + 1.570796251296997);
  fVar2 = 3.1415925 - fVar1;
  if (fVar1 - (3.1415925 - fVar1) < 0.0) {
    fVar2 = fVar1;
  }
  fVar3 = -3.1415925 - fVar1;
  if ((-3.1415925 - fVar1) - fVar2 < 0.0) {
    fVar3 = fVar2;
  }
  fVar1 = fVar3 * fVar3;
  fVar2 = fVar1 * fVar1 * fVar3;
  fVar4 = fVar1 * fVar2;
  dVar5 = (double)((1.0 - (fVar1 * fVar4 * 2.601887e-06 +
                          fVar4 * -0.0001980741 +
                          fVar2 * 0.0083330255 + fVar1 * fVar3 * -0.16666657 + fVar3)) * 0.5);
  return (double)(float)(param_1 * (double)(float)(1.0 - dVar5) + (double)(float)(param_2 * dVar5));
}


// 0x02f1710 (0x284 bytes)
void M1412_002f1710(int param_1)

{
  uint uVar1;
  undefined4 uVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  ulonglong uVar7;
  undefined8 in_LR;
  GPiece<16> auVar8;
  GPiece<16> auVar9;
  GPiece<16> auVar10;
  GPiece<16> auVar11;
  GPiece<16> auVar12;
  GPiece<16> auVar13;
  GPiece<16> auVar14;
  GPiece<16> auVar15;
  GPiece<16> auVar16;
  GPiece<16> auVar17;
  GPiece<16> auVar18;
  
  uVar1 = *(uint *)(param_1 + 0x78);
  uVar7 = (ulonglong)uVar1;
  if (*(char *)(uVar1 + 0x111) == '\x01') {
    auVar8 = loadVectorLeftIndexed(0x108,uVar7);
    auVar9 = loadVectorRightIndexed(0x118,uVar7);
    if (*(int *)(uVar1 + 0x108) != 0) {
      auVar10 = loadVectorLeftIndexed(0xffffffffffffb440,0x10c0000);
      auVar11 = vectorConvertFromSignedFixedPointWord(auVar10,0);
      auVar10 = ZEXT416(0xffffffff);
      auVar12 = auVar10 | auVar10 << 0x20 | auVar10 << 0x40 | auVar10 << 0x60;
      auVar10 = ZEXT416(0xffffffff);
      auVar16 = auVar10 | auVar10 << 0x20 | auVar10 << 0x40 | auVar10 << 0x60;
      auVar13 = vectorShiftLeftIntegerWord(auVar12,auVar12);
      auVar10 = loadVectorLeftIndexed(4,0x2f16e8);
      auVar10 = auVar10 >> 0x60 & (GPiece<16>)0xffffffff;
      auVar15 = auVar10 | auVar10 << 0x20 | auVar10 << 0x40 | auVar10 << 0x60;
      auVar14 = vectorReciprocalEstimateFloatingPoint(auVar11);
      auVar10 = ZEXT416(0xffffffff);
      auVar17 = auVar10 | auVar10 << 0x20 | auVar10 << 0x40 | auVar10 << 0x60;
      auVar12 = loadVectorLeftIndexed(in_LR,0x2f16e8);
      auVar10 = ZEXT416(0xffffffff);
      auVar18 = auVar10 | auVar10 << 0x20 | auVar10 << 0x40 | auVar10 << 0x60;
      auVar10 = auVar12 >> 0x60 & (GPiece<16>)0xffffffff;
      auVar12 = vectorConvertFromSignedFixedPointWord(auVar8 | auVar9,0);
      auVar17 = vectorShiftLeftIntegerWord(auVar17,auVar17);
      auVar18 = vectorShiftLeftIntegerWord(auVar18,auVar18);
      auVar8 = vectorNegativeMultiplySubtractFloatingPoint(auVar14,auVar11,auVar15);
      auVar9 = vectorMultiplyAddFloatingPoint(auVar14,auVar8,auVar13);
      auVar13 = vectorShiftLeftIntegerWord(auVar16,auVar16);
      auVar8 = ZEXT416(0xffffffff);
      auVar8 = auVar8 | auVar8 << 0x20 | auVar8 << 0x40 | auVar8 << 0x60;
      auVar14 = vectorShiftLeftIntegerWord(auVar8,auVar8);
      auVar8 = vectorNegativeMultiplySubtractFloatingPoint(auVar9,auVar11,auVar15);
      auVar13 = vectorMultiplyAddFloatingPoint(auVar9,auVar8,auVar13);
      auVar8 = loadVectorLeftIndexed(8,0x2f16e8);
      auVar9 = auVar8 >> 0x60 & (GPiece<16>)0xffffffff;
      auVar8 = ZEXT416(0xffffffff);
      auVar8 = auVar8 | auVar8 << 0x20 | auVar8 << 0x40 | auVar8 << 0x60;
      auVar16 = vectorShiftLeftIntegerWord(auVar8,auVar8);
      auVar8 = vectorNegativeMultiplySubtractFloatingPoint(auVar13,auVar11,auVar15);
      auVar8 = vectorMultiplyAddFloatingPoint(auVar13,auVar8,auVar14);
      auVar11 = loadVectorLeftIndexed(0xc,0x2f16e8);
      auVar11 = auVar11 >> 0x60 & (GPiece<16>)0xffffffff;
      fVar3 = (float)(longlong)*(int *)(uVar1 + 0x108) * (3.1415927 / (float)(longlong)DAT_010bb440)
      ;
      auVar14 = loadVectorLeftIndexed(0x10,0x2f16e8);
      auVar13 = vectorMultiplyAddFloatingPoint
                          (auVar8,auVar10 | auVar10 << 0x20 | auVar10 << 0x40 | auVar10 << 0x60,
                           auVar17);
      auVar10 = auVar14 >> 0x60 & (GPiece<16>)0xffffffff;
      auVar8 = ZEXT416(0xffffffff);
      auVar14 = auVar8 | auVar8 << 0x20 | auVar8 << 0x40 | auVar8 << 0x60;
      auVar8 = vectorMultiplyAddFloatingPoint(auVar12,auVar13,auVar18);
      auVar9 = vectorSubtractFloatingPoint
                         (auVar9 | auVar9 << 0x20 | auVar9 << 0x40 | auVar9 << 0x60,auVar8);
      auVar11 = vectorSubtractFloatingPoint
                          (auVar11 | auVar11 << 0x20 | auVar11 << 0x40 | auVar11 << 0x60,auVar8);
      fVar4 = 3.1415925 - fVar3;
      if (fVar3 - (3.1415925 - fVar3) < 0.0) {
        fVar4 = fVar3;
      }
      auVar12 = vectorCompareGreaterThanFloatingPoint(auVar9,auVar8);
      auVar9 = vectorConditionalSelect(auVar9,auVar8,auVar12);
      auVar8 = ZEXT416(0xffffffff);
      auVar12 = auVar8 | auVar8 << 0x20 | auVar8 << 0x40 | auVar8 << 0x60;
      auVar8 = vectorCompareGreaterThanFloatingPoint(auVar9,auVar11);
      auVar12 = vectorShiftLeftIntegerWord(auVar12,auVar12);
      auVar9 = vectorConditionalSelect(auVar11,auVar9,auVar8);
      auVar8 = ZEXT416(0xffffffff);
      auVar11 = auVar8 | auVar8 << 0x20 | auVar8 << 0x40 | auVar8 << 0x60;
      auVar8 = ZEXT416(0xffffffff);
      auVar8 = auVar8 | auVar8 << 0x20 | auVar8 << 0x40 | auVar8 << 0x60;
      fVar5 = -3.1415925 - fVar3;
      if ((-3.1415925 - fVar3) - fVar4 < 0.0) {
        fVar5 = fVar4;
      }
      auVar11 = vectorShiftLeftIntegerWord(auVar11,auVar11);
      auVar13 = vectorShiftLeftIntegerWord(auVar8,auVar8);
      auVar11 = vectorMultiplyAddFloatingPoint(auVar9,auVar9,auVar11);
      auVar8 = loadVectorLeftIndexed(0x14,0x2f16e8);
      auVar8 = auVar8 >> 0x60 & (GPiece<16>)0xffffffff;
      fVar3 = fVar5 * fVar5;
      auVar13 = vectorMultiplyAddFloatingPoint(auVar11,auVar9,auVar13);
      auVar12 = vectorMultiplyAddFloatingPoint(auVar11,auVar13,auVar12);
      auVar9 = vectorMultiplyAddFloatingPoint
                         (auVar13,auVar10 | auVar10 << 0x20 | auVar10 << 0x40 | auVar10 << 0x60,
                          auVar9);
      auVar13 = loadVectorLeftIndexed(0x18,0x2f16e8);
      auVar10 = vectorShiftLeftIntegerWord(auVar14,auVar14);
      fVar4 = fVar3 * fVar3 * fVar5;
      auVar14 = vectorMultiplyAddFloatingPoint(auVar11,auVar12,auVar16);
      auVar9 = vectorMultiplyAddFloatingPoint
                         (auVar12,auVar8 | auVar8 << 0x20 | auVar8 << 0x40 | auVar8 << 0x60,auVar9);
      auVar8 = auVar13 >> 0x60 & (GPiece<16>)0xffffffff;
      fVar6 = fVar3 * fVar4;
      auVar10 = vectorMultiplyAddFloatingPoint(auVar11,auVar14,auVar10);
      auVar9 = vectorMultiplyAddFloatingPoint
                         (auVar14,auVar8 | auVar8 << 0x20 | auVar8 << 0x40 | auVar8 << 0x60,auVar9);
      auVar8 = loadVectorLeftIndexed(0x1c,0x2f16e8);
      auVar8 = auVar8 >> 0x60 & (GPiece<16>)0xffffffff;
      auVar9 = vectorMultiplyAddFloatingPoint
                         (auVar10,auVar8 | auVar8 << 0x20 | auVar8 << 0x40 | auVar8 << 0x60,auVar9);
      auVar8 = ZEXT416(0xffffffff);
      auVar8 = auVar8 | auVar8 << 0x20 | auVar8 << 0x40 | auVar8 << 0x60;
      auVar10 = loadVectorLeftIndexed(0xffffffffffffed80,0x800000);
      auVar11 = loadVectorLeftIndexed(0x20,0x2f16e8);
      auVar8 = vectorShiftLeftIntegerWord(auVar8,auVar8);
      auVar9 = vectorMultiplyAddFloatingPoint(auVar10,auVar9,auVar8);
      auVar8 = auVar11 >> 0x60 & (GPiece<16>)0xffffffff;
      fVar3 = DAT_007fed80 *
              (fVar3 * fVar6 * 2.601887e-06 +
              fVar6 * -0.0001980741 + fVar4 * 0.0083330255 + fVar3 * fVar5 * -0.16666657 + fVar5);
      auVar8 = (SPLAT(auVar8) ^ auVar9) >> 0x60 &
               (GPiece<16>)0xffffffff;
      auVar8 = auVar8 | auVar8 << 0x20 | auVar8 << 0x40 | auVar8 << 0x60;
      uVar2 = storeVectorElementWordIndexed(auVar8,0x104,uVar7);
      *(undefined4 *)(uVar1 + 0x104 & 0xfffffffc) = uVar2;
      uVar2 = storeVectorElementWordIndexed(auVar8,0x100,uVar7);
      *(undefined4 *)(uVar1 + 0x100 & 0xfffffffc) = uVar2;
      FastQuaternionToEuler(-(double)fVar3,uVar7 + 0x160,1);
      FastQuaternionToEuler((double)*(float *)(uVar1 + 0x100),uVar7 + 0x120,1);
      FastDecTimerS32(uVar7 + 0x108);
    }
  }
  return;
}


