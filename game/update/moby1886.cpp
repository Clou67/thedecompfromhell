// game/update/moby1886.cpp -- reconstructed from NPEA00385 EBOOT
// STATUS: NOT STARTED (raw Ghidra output)
// 3 functions, 0x2cf208-0x2d0610
#include "game/update/moby1886.h"
#include "game/collproc.h"
#include "game/hero.h"
#include "game/mobyfunc.h"
#include "game/mobyproc.h"
#include "game/mobyutil.h"
#include "game/partupd.h"
#include "game/sound.h"
#include "game/update/moby1885.h"
#include "idol/fastfunc.h"

// 0x02cf208 (0x198 bytes)
MobyInstance *
M1885_002cf208
          (undefined4 param_1,f32 *param_2,undefined4 *param_3,undefined1 param_4,undefined1 param_5
          )

{
  undefined4 *puVar1;
  undefined2 uVar2;
  MobyInstance *pMVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  GPiece<16> auVar7;
  GPiece<16> auVar8;
  GPiece<16> auVar9;
  
  pMVar3 = CreateMoby(SPAWNER_EGG);
  if (pMVar3 != (MobyInstance *)0x0) {
    puVar1 = (undefined4 *)pMVar3->pVar;
    puVar1[4] = param_1;
    (pMVar3->pos).x = *param_2;
    (pMVar3->pos).y = param_2[1];
    (pMVar3->pos).z = param_2[2];
    (pMVar3->pos).w = param_2[3];
    *puVar1 = *param_3;
    puVar1[1] = param_3[1];
    puVar1[2] = param_3[2];
    puVar1[3] = param_3[3];
    dVar6 = -3.1415927410125732;
    dVar5 = 3.1415927410125732;
    dVar4 = (double)MB_randRangeFloat(-3.1415927,3.1415927);
    (pMVar3->rotation).x = (float)dVar4;
    dVar4 = (double)MB_randRangeFloat((float)dVar6,(float)dVar5);
    (pMVar3->rotation).y = (float)dVar4;
    auVar7 = ZEXT416(0xffffffff);
    auVar7 = auVar7 | auVar7 << 0x20 | auVar7 << 0x40 | auVar7 << 0x60;
    puVar1[5] = 0;
    auVar9 = loadVectorLeftIndexed(8,0x2cf1f8);
    auVar8 = vectorShiftLeftIntegerWord(auVar7,auVar7);
    auVar7 = auVar9 >> 0x60 & (GPiece<16>)0xffffffff;
    auVar9 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
    auVar7 = vectorMultiplyAddFloatingPoint
                       (auVar9,auVar7 | auVar7 << 0x20 | auVar7 << 0x40 | auVar7 << 0x60,auVar8);
    auVar7 = vectorConvertToSignedFixedPointWordSaturate(auVar7,0);
    auVar7 = vectorSplatHalfWord(auVar7,1);
    uVar2 = storeVectorElementHalfWordIndexed(auVar7,0x18,ZEXT48(puVar1));
    *(undefined2 *)(puVar1 + 6) = uVar2;
    pMVar3->updateDistance = -1;
    pMVar3->drawDistance = 0x40;
    pMVar3->enabled = '\x01';
    pMVar3->state = '\0';
    pMVar3->scale = pMVar3->pClass->gScale * 0.3;
    *(undefined1 *)((int)puVar1 + 0x1b) = 0;
    *(undefined1 *)((int)puVar1 + 0x1a) = param_4;
    *(undefined1 *)(puVar1 + 7) = param_5;
    UpdateMobyTransform(pMVar3);
  }
  return pMVar3;
}


// 0x02cf3a0 (0x6c bytes)
void M1886_002cf3a0(MobyInstance *param_1,int param_2)

{
  int iVar1;
  
  iVar1 = *(int *)(param_2 + 0x10);
  if (((iVar1 != 0) && (*(short *)(iVar1 + 0xa6) == 0x75d)) &&
     (*(char *)(iVar1 + 0x20) != -3 && *(char *)(iVar1 + 0x20) != -2)) {
    *(undefined4 *)(*(int *)(iVar1 + 0x78) + (uint)*(byte *)(param_2 + 0x1c) * 4 + 0xb0) = 0;
  }
  DeleteMoby(param_1);
  return;
}


// 0x02cf460 (0x11b0 bytes)
// inlined: FastAtan2 @0x2cf7a0, FastAtan2 @0x2cf9f8, FastAtan2 @0x2cfd68, FastAtan2 @0x2cffb8
/* Moby 1886 */

void UpdateMoby_1886(MobyInstance *moby)

{
  bool bVar1;
  byte bVar2;
  float fVar3;
  float fVar4;
  f32 fVar5;
  float fVar6;
  float *pfVar7;
  MobyInstance *pMVar8;
  MobyClass *pMVar9;
  f32 fVar10;
  uint uVar11;
  uint uVar12;
  ulonglong *puVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  ulonglong uVar17;
  int iVar20;
  longlong lVar18;
  longlong lVar19;
  int iVar21;
  float *pfVar23;
  longlong lVar22;
  ulonglong uVar24;
  longlong lVar25;
  ulonglong unaff_r28;
  ulonglong unaff_r29;
  ulonglong unaff_r30;
  ulonglong unaff_r31;
  ulonglong in_LR;
  longlong lVar26;
  longlong lVar27;
  double dVar28;
  double dVar29;
  double dVar30;
  double dVar31;
  double dVar32;
  ulonglong in_f31;
  double dVar33;
  float fVar34;
  
  lVar18 = (longlong)(int)moby;
  uVar17 = ZEXT48(&stack0x00000000);
  lVar19 = uVar17 - 0x160;
  puVar13 = (ulonglong *)lVar19;
  *puVar13 = uVar17;
  puVar13[0x2e] = in_LR;
  puVar13[0x2b] = in_f31;
  puVar13[0x2a] = unaff_r31;
  puVar13[0x29] = unaff_r30;
  pfVar7 = (float *)moby->pVar;
  puVar13[0x28] = unaff_r29;
  puVar13[0x27] = unaff_r28;
  FastDecTimerU8((int)pfVar7 + 0x1b);
  fVar34 = (moby->pos).x;
  fVar3 = (moby->pos).y;
  *(float *)(puVar13 + 0xe) = fVar34;
  fVar4 = (moby->pos).z;
  *(float *)((int)puVar13 + 0x74) = fVar3;
  fVar5 = (moby->pos).w;
  bVar2 = moby->state;
  *(float *)(puVar13 + 0xf) = fVar4;
  *(f32 *)((int)puVar13 + 0x7c) = fVar5;
  if (bVar2 == 0) {
    moby->scale = DAT_0071f408 * 0.05 * (moby->pClass->gScale - moby->scale) + moby->scale;
    fVar34 = fVar34 + *pfVar7;
    (moby->pos).x = fVar34;
    fVar3 = fVar3 + pfVar7[1];
    (moby->pos).y = fVar3;
    fVar4 = fVar4 + pfVar7[2];
    (moby->pos).z = fVar4;
    fVar6 = *pfVar7;
    dVar33 = 0.0;
    fVar14 = SQRT(pfVar7[2] * pfVar7[2] + fVar6 * fVar6 + pfVar7[1] * pfVar7[1]);
    if (fVar14 == 0.0) {
      *(float *)(puVar13 + 0x10) = fVar6;
      *(float *)((int)puVar13 + 0x84) = pfVar7[1];
      *(float *)(puVar13 + 0x11) = pfVar7[2];
      fVar6 = pfVar7[3];
      dVar29 = dVar33;
      dVar32 = dVar33;
      dVar30 = dVar33;
    }
    else {
      fVar14 = 0.2 / fVar14;
      dVar29 = (double)(fVar6 * fVar14);
      *(float *)(puVar13 + 0x10) = fVar6 * fVar14;
      dVar32 = (double)(pfVar7[1] * fVar14);
      *(float *)((int)puVar13 + 0x84) = pfVar7[1] * fVar14;
      dVar30 = (double)(pfVar7[2] * fVar14);
      *(float *)(puVar13 + 0x11) = pfVar7[2] * fVar14;
      fVar6 = pfVar7[3];
    }
    *(float *)((int)puVar13 + 0x8c) = fVar6;
    moby->collision = (ushort *)0x0;
    fVar6 = pfVar7[4];
    *(float *)(puVar13 + 0x10) = (float)(dVar29 + (double)fVar34);
    *(float *)((int)puVar13 + 0x84) = (float)(dVar32 + (double)fVar3);
    *(float *)(puVar13 + 0x11) = (float)(dVar30 + (double)fVar4);
    *(undefined4 *)((int)fVar6 + 0x94) = 0;
    iVar20 = CollLine(uVar17 - 0xf0,uVar17 - 0xe0,4,lVar18,0);
    fVar34 = (moby->pos).x;
    fVar3 = (moby->pos).y;
    fVar4 = (moby->pos).z;
    if (iVar20 != 0) {
      fVar14 = g_CollOutput.ip.y - *(float *)((int)puVar13 + 0x84);
      fVar15 = g_CollOutput.ip.x - *(float *)(puVar13 + 0x10);
      fVar16 = g_CollOutput.ip.z - *(float *)(puVar13 + 0x11);
      *(float *)(puVar13 + 0x10) = fVar15;
      *(float *)((int)puVar13 + 0x84) = fVar14;
      fVar6 = g_CollOutput.ip.w;
      *(float *)(puVar13 + 0x11) = fVar16;
      *(float *)((int)puVar13 + 0x8c) = fVar6;
      pMVar8 = g_CollOutput.pMoby;
      bVar1 = g_CollOutput.pMoby == (MobyInstance *)0x0;
      dVar32 = (double)SQRT(fVar16 * fVar16 + fVar15 * fVar15 + fVar14 * fVar14);
      fVar6 = (float)(0.2150000035762787 / dVar32);
      dVar29 = dVar33;
      if (dVar33 - dVar32 < 0.0) {
        dVar29 = (double)(fVar15 * fVar6);
      }
      dVar30 = dVar33;
      if (dVar33 - dVar32 < 0.0) {
        dVar30 = (double)(fVar14 * fVar6);
      }
      dVar28 = dVar33;
      if (dVar33 - dVar32 < 0.0) {
        dVar28 = (double)(fVar16 * fVar6);
      }
      if (dVar32 - dVar33 < 0.0) {
        dVar29 = (double)(fVar15 * fVar6);
      }
      if (dVar32 - dVar33 < 0.0) {
        dVar30 = (double)(fVar14 * fVar6);
      }
      if (dVar32 - dVar33 < 0.0) {
        dVar28 = (double)(fVar16 * fVar6);
      }
      *(float *)(puVar13 + 0x10) = (float)dVar29;
      *(float *)((int)puVar13 + 0x84) = (float)dVar30;
      *(float *)(puVar13 + 0x11) = (float)dVar28;
      (moby->pos).x = (float)((double)fVar34 + dVar29);
      (moby->pos).y = (float)((double)fVar3 + dVar30);
      (moby->pos).z = (float)((double)fVar4 + dVar28);
      if (bVar1) {
        FastVecReflect(pfVar7,pfVar7,0xa10980);
        fVar3 = g_CollOutput.normal.z;
        dVar32 = ABS((double)g_CollOutput.normal.z);
        fVar34 = SQRT(g_CollOutput.normal.x * g_CollOutput.normal.x +
                      g_CollOutput.normal.y * g_CollOutput.normal.y);
        dVar30 = ABS((double)fVar34);
        *(float *)(puVar13 + 0x15) = fVar34;
        *(float *)((int)puVar13 + 0xac) = (float)(dVar32 - dVar30);
        uVar24 = (ulonglong)((uint)fVar3 >> 0x1c) & 8 |
                 (ulonglong)(*(uint *)((int)puVar13 + 0xac) >> 0x1e) & 2 |
                 (ulonglong)(*(uint *)(puVar13 + 0x15) >> 0x1d) & 4;
        dVar29 = dVar32;
        if ((double)*(float *)((int)puVar13 + 0xac) - dVar33 < 0.0) {
          dVar29 = dVar30;
        }
        fVar34 = *(float *)(&g_atanQuadrantTable + (int)(uVar24 << 2));
        dVar30 = ABS((double)*(float *)(puVar13 + 0x15));
        if ((double)*(float *)((int)puVar13 + 0xac) - dVar33 < 0.0) {
          dVar30 = dVar32;
        }
        fVar3 = *(float *)(((uint)(uVar24 << 2) | 0x735900) + 4);
        dVar32 = dVar33;
        if (dVar33 < dVar29) {
          lVar22 = uVar17 - 0x150;
          lVar25 = uVar17 - 0x50;
          lVar27 = uVar17 - 0x40;
          lVar26 = 2;
          fVar4 = (float)(dVar30 - dVar29) / (float)(dVar30 + dVar29);
          fVar6 = fVar4 * fVar4;
          *(float *)((int)puVar13 + 0x11c) = fVar4;
          *(float *)((int)puVar13 + 0x114) = fVar4;
          *(float *)(puVar13 + 0x23) = fVar4;
          *(float *)(puVar13 + 0x22) = fVar4;
          fVar4 = fVar6 * fVar6;
          *(float *)((int)puVar13 + 0x114) = *(float *)((int)puVar13 + 0x114) * fVar6;
          *(float *)(puVar13 + 0x23) = *(float *)(puVar13 + 0x23) * fVar4;
          *(float *)((int)puVar13 + 0x11c) = *(float *)((int)puVar13 + 0x11c) * fVar4 * fVar6;
          do {
            *(float *)((int)lVar22 + 0x110) = *(float *)((int)lVar22 + 0x100) * fVar4 * fVar4;
            iVar20 = (int)lVar25;
            lVar22 = lVar22 + 8;
            lVar25 = lVar25 + 8;
            *(float *)((int)lVar27 + 4) = *(float *)(iVar20 + 4) * fVar4 * fVar4;
            lVar27 = lVar27 + 8;
            lVar26 = lVar26 + -1;
          } while (lVar26 != 0);
          lVar26 = 4;
          lVar27 = uVar17 - 0x50;
          pfVar23 = (float *)&DAT_007358e0;
          lVar22 = lVar19;
          lVar25 = lVar27;
          do {
            fVar4 = *pfVar23;
            fVar6 = pfVar23[1];
            pfVar23 = pfVar23 + 2;
            *(float *)((int)lVar22 + 0x110) = *(float *)((int)lVar22 + 0x110) * fVar4;
            lVar22 = lVar22 + 8;
            *(float *)((int)lVar25 + 4) = *(float *)((int)lVar25 + 4) * fVar6;
            lVar25 = lVar25 + 8;
            lVar26 = lVar26 + -1;
          } while (lVar26 != 0);
          lVar25 = 2;
          lVar22 = lVar19;
          dVar29 = dVar33;
          do {
            iVar20 = (int)lVar22;
            lVar22 = lVar22 + 0x10;
            iVar21 = (int)lVar27;
            lVar27 = lVar27 + 0x10;
            dVar29 = (double)((float)(dVar29 + (double)*(float *)(iVar20 + 0x110)) +
                              *(float *)(iVar21 + 4) + *(float *)(iVar21 + 8) +
                             *(float *)(iVar21 + 0xc));
            lVar25 = lVar25 + -1;
          } while (lVar25 != 0);
          dVar32 = (double)((float)(dVar29 + 0.7853981852531433) * fVar34 + fVar3);
        }
        if ((dVar32 < 0.6981316804885864) && (iVar20 = CollHotspot(), iVar20 == -1)) {
          fVar34 = pfVar7[1] * 0.5;
          fVar3 = *pfVar7 * 0.5;
          fVar4 = pfVar7[2] * 0.5;
          *pfVar7 = fVar3;
          pfVar7[1] = fVar34;
          pfVar7[2] = fVar4;
          if (SQRT(fVar4 * fVar4 + fVar3 * fVar3 + fVar34 * fVar34) < 0.025) {
            moby->state = '\x01';
          }
        }
      }
      else if (pMVar8->oClass == SPAWNER_EGG) {
        dVar29 = (double)MB_randRangeFloat(0.9,1.1);
        pfVar7[2] = (float)((double)pfVar7[2] * dVar29);
      }
      else {
        FastVecReflect(pfVar7,pfVar7,0xa10980);
        fVar3 = g_CollOutput.normal.z;
        dVar32 = ABS((double)g_CollOutput.normal.z);
        fVar34 = SQRT(g_CollOutput.normal.x * g_CollOutput.normal.x +
                      g_CollOutput.normal.y * g_CollOutput.normal.y);
        dVar30 = ABS((double)fVar34);
        *(float *)(puVar13 + 0x14) = fVar34;
        *(float *)((int)puVar13 + 0xa4) = (float)(dVar32 - dVar30);
        uVar24 = (ulonglong)((uint)fVar3 >> 0x1c) & 8 |
                 (ulonglong)(*(uint *)((int)puVar13 + 0xa4) >> 0x1e) & 2 |
                 (ulonglong)(*(uint *)(puVar13 + 0x14) >> 0x1d) & 4;
        dVar29 = dVar32;
        if ((double)*(float *)((int)puVar13 + 0xa4) - dVar33 < 0.0) {
          dVar29 = dVar30;
        }
        fVar34 = *(float *)(&g_atanQuadrantTable + (int)(uVar24 << 2));
        dVar30 = ABS((double)*(float *)(puVar13 + 0x14));
        if ((double)*(float *)((int)puVar13 + 0xa4) - dVar33 < 0.0) {
          dVar30 = dVar32;
        }
        fVar3 = *(float *)(((uint)(uVar24 << 2) | 0x735900) + 4);
        dVar32 = dVar33;
        if (dVar33 < dVar29) {
          lVar22 = uVar17 - 0x150;
          lVar25 = uVar17 - 0x70;
          lVar27 = uVar17 - 0x60;
          lVar26 = 2;
          fVar4 = (float)(dVar30 - dVar29) / (float)(dVar30 + dVar29);
          fVar6 = fVar4 * fVar4;
          *(float *)((int)puVar13 + 0xfc) = fVar4;
          *(float *)((int)puVar13 + 0xf4) = fVar4;
          *(float *)(puVar13 + 0x1f) = fVar4;
          *(float *)(puVar13 + 0x1e) = fVar4;
          fVar4 = fVar6 * fVar6;
          *(float *)((int)puVar13 + 0xf4) = *(float *)((int)puVar13 + 0xf4) * fVar6;
          *(float *)(puVar13 + 0x1f) = *(float *)(puVar13 + 0x1f) * fVar4;
          *(float *)((int)puVar13 + 0xfc) = *(float *)((int)puVar13 + 0xfc) * fVar4 * fVar6;
          do {
            *(float *)((int)lVar22 + 0xf0) = *(float *)((int)lVar22 + 0xe0) * fVar4 * fVar4;
            iVar20 = (int)lVar25;
            lVar22 = lVar22 + 8;
            lVar25 = lVar25 + 8;
            *(float *)((int)lVar27 + 4) = *(float *)(iVar20 + 4) * fVar4 * fVar4;
            lVar27 = lVar27 + 8;
            lVar26 = lVar26 + -1;
          } while (lVar26 != 0);
          lVar26 = 4;
          lVar27 = uVar17 - 0x70;
          pfVar23 = (float *)&DAT_007358e0;
          lVar22 = lVar19;
          lVar25 = lVar27;
          do {
            fVar4 = *pfVar23;
            fVar6 = pfVar23[1];
            pfVar23 = pfVar23 + 2;
            *(float *)((int)lVar22 + 0xf0) = *(float *)((int)lVar22 + 0xf0) * fVar4;
            lVar22 = lVar22 + 8;
            *(float *)((int)lVar25 + 4) = *(float *)((int)lVar25 + 4) * fVar6;
            lVar25 = lVar25 + 8;
            lVar26 = lVar26 + -1;
          } while (lVar26 != 0);
          lVar25 = 2;
          lVar22 = lVar19;
          dVar29 = dVar33;
          do {
            iVar20 = (int)lVar22;
            lVar22 = lVar22 + 0x10;
            iVar21 = (int)lVar27;
            lVar27 = lVar27 + 0x10;
            dVar29 = (double)((float)(dVar29 + (double)*(float *)(iVar20 + 0xf0)) +
                              *(float *)(iVar21 + 4) + *(float *)(iVar21 + 8) +
                             *(float *)(iVar21 + 0xc));
            lVar25 = lVar25 + -1;
          } while (lVar25 != 0);
          dVar32 = (double)((float)(dVar29 + 0.7853981852531433) * fVar34 + fVar3);
        }
        if ((dVar32 < 0.6981316804885864) && (iVar20 = CollHotspot(), iVar20 == -1)) {
          *pfVar7 = *pfVar7 * 1.2;
          pfVar7[1] = pfVar7[1] * 1.2;
          pfVar7[2] = pfVar7[2] * 1.2;
        }
      }
      if (*(char *)((int)pfVar7 + 0x1b) == '\0') {
        PlayMobySound(0,0,moby);
        *(undefined1 *)((int)pfVar7 + 0x1b) = 0xc;
      }
    }
    iVar20 = CollSphere(0x3fc99999a0000000,lVar18 + 0x10,&DAT_002cf40c,4,lVar18);
    if (iVar20 != 0) {
      fVar4 = g_CollOutput.ip.y - g_CollOutput.push.y;
      dVar32 = (double)g_CollOutput.push.x;
      fVar3 = (float)((double)g_CollOutput.ip.x - dVar32);
      fVar6 = g_CollOutput.ip.z - g_CollOutput.push.z;
      *(float *)(puVar13 + 0x10) = fVar3;
      *(float *)((int)puVar13 + 0x84) = fVar4;
      fVar34 = g_CollOutput.ip.w;
      *(float *)(puVar13 + 0x11) = fVar6;
      *(float *)((int)puVar13 + 0x8c) = fVar34;
      pMVar8 = g_CollOutput.pMoby;
      bVar1 = g_CollOutput.pMoby == (MobyInstance *)0x0;
      dVar30 = (double)SQRT(fVar6 * fVar6 + fVar3 * fVar3 + fVar4 * fVar4);
      fVar34 = (float)(0.014999999664723873 / dVar30);
      dVar29 = dVar33;
      if (dVar33 - dVar30 < 0.0) {
        dVar29 = (double)(fVar3 * fVar34);
      }
      dVar28 = dVar33;
      if (dVar33 - dVar30 < 0.0) {
        dVar28 = (double)(fVar4 * fVar34);
      }
      dVar31 = dVar33;
      if (dVar33 - dVar30 < 0.0) {
        dVar31 = (double)(fVar6 * fVar34);
      }
      if (dVar30 - dVar33 < 0.0) {
        dVar29 = (double)(fVar3 * fVar34);
      }
      if (dVar30 - dVar33 < 0.0) {
        dVar28 = (double)(fVar4 * fVar34);
      }
      if (dVar30 - dVar33 < 0.0) {
        dVar31 = (double)(fVar6 * fVar34);
      }
      *(float *)(puVar13 + 0x10) = (float)dVar29;
      *(float *)((int)puVar13 + 0x84) = (float)dVar28;
      *(float *)(puVar13 + 0x11) = (float)dVar31;
      (moby->pos).x = (float)(dVar32 + dVar29);
      (moby->pos).y = (float)((double)g_CollOutput.push.y + dVar28);
      (moby->pos).z = (float)((double)g_CollOutput.push.z + dVar31);
      (moby->pos).w = g_CollOutput.push.w;
      if (bVar1) {
        FastVecReflect(pfVar7,pfVar7,0xa10980);
        fVar3 = g_CollOutput.normal.z;
        dVar32 = ABS((double)g_CollOutput.normal.z);
        fVar34 = SQRT(g_CollOutput.normal.x * g_CollOutput.normal.x +
                      g_CollOutput.normal.y * g_CollOutput.normal.y);
        dVar30 = ABS((double)fVar34);
        *(float *)(puVar13 + 0x13) = fVar34;
        *(float *)((int)puVar13 + 0x9c) = (float)(dVar32 - dVar30);
        uVar24 = (ulonglong)((uint)fVar3 >> 0x1c) & 8 |
                 (ulonglong)(*(uint *)((int)puVar13 + 0x9c) >> 0x1e) & 2 |
                 (ulonglong)(*(uint *)(puVar13 + 0x13) >> 0x1d) & 4;
        dVar29 = dVar32;
        if ((double)*(float *)((int)puVar13 + 0x9c) - dVar33 < 0.0) {
          dVar29 = dVar30;
        }
        fVar34 = *(float *)(&g_atanQuadrantTable + (int)(uVar24 << 2));
        dVar30 = ABS((double)*(float *)(puVar13 + 0x13));
        if ((double)*(float *)((int)puVar13 + 0x9c) - dVar33 < 0.0) {
          dVar30 = dVar32;
        }
        fVar3 = *(float *)(((uint)(uVar24 << 2) | 0x735900) + 4);
        if (dVar33 < dVar29) {
          lVar18 = uVar17 - 0x150;
          lVar22 = uVar17 - 0x90;
          lVar25 = uVar17 - 0x80;
          lVar27 = 2;
          fVar4 = (float)(dVar30 - dVar29) / (float)(dVar30 + dVar29);
          fVar6 = fVar4 * fVar4;
          *(float *)((int)puVar13 + 0xdc) = fVar4;
          *(float *)((int)puVar13 + 0xd4) = fVar4;
          *(float *)(puVar13 + 0x1b) = fVar4;
          *(float *)(puVar13 + 0x1a) = fVar4;
          fVar4 = fVar6 * fVar6;
          *(float *)((int)puVar13 + 0xd4) = *(float *)((int)puVar13 + 0xd4) * fVar6;
          *(float *)(puVar13 + 0x1b) = *(float *)(puVar13 + 0x1b) * fVar4;
          *(float *)((int)puVar13 + 0xdc) = *(float *)((int)puVar13 + 0xdc) * fVar4 * fVar6;
          do {
            *(float *)((int)lVar18 + 0xd0) = *(float *)((int)lVar18 + 0xc0) * fVar4 * fVar4;
            iVar20 = (int)lVar22;
            lVar18 = lVar18 + 8;
            lVar22 = lVar22 + 8;
            *(float *)((int)lVar25 + 4) = *(float *)(iVar20 + 4) * fVar4 * fVar4;
            lVar25 = lVar25 + 8;
            lVar27 = lVar27 + -1;
          } while (lVar27 != 0);
          lVar27 = 4;
          lVar25 = uVar17 - 0x90;
          pfVar23 = (float *)&DAT_007358e0;
          lVar18 = lVar19;
          lVar22 = lVar25;
          do {
            fVar4 = *pfVar23;
            fVar6 = pfVar23[1];
            pfVar23 = pfVar23 + 2;
            *(float *)((int)lVar18 + 0xd0) = *(float *)((int)lVar18 + 0xd0) * fVar4;
            lVar18 = lVar18 + 8;
            *(float *)((int)lVar22 + 4) = *(float *)((int)lVar22 + 4) * fVar6;
            lVar22 = lVar22 + 8;
            lVar27 = lVar27 + -1;
          } while (lVar27 != 0);
          lVar18 = 2;
          do {
            iVar20 = (int)lVar19;
            iVar21 = (int)lVar25;
            lVar19 = lVar19 + 0x10;
            lVar25 = lVar25 + 0x10;
            dVar33 = (double)((float)(dVar33 + (double)*(float *)(iVar20 + 0xd0)) +
                              *(float *)(iVar21 + 4) + *(float *)(iVar21 + 8) +
                             *(float *)(iVar21 + 0xc));
            lVar18 = lVar18 + -1;
          } while (lVar18 != 0);
          dVar33 = (double)((float)(dVar33 + 0.7853981852531433) * fVar34 + fVar3);
        }
        if ((dVar33 < 0.6981316804885864) && (iVar20 = CollHotspot(), iVar20 == -1)) {
          fVar34 = pfVar7[1] * 0.5;
          fVar3 = *pfVar7 * 0.5;
          fVar4 = pfVar7[2] * 0.5;
          *pfVar7 = fVar3;
          pfVar7[1] = fVar34;
          pfVar7[2] = fVar4;
          if (SQRT(fVar4 * fVar4 + fVar3 * fVar3 + fVar34 * fVar34) < 0.025) {
            moby->state = '\x01';
          }
        }
      }
      else if (pMVar8->oClass == SPAWNER_EGG) {
        dVar33 = (double)MB_randRangeFloat(0.9,1.1);
        pfVar7[2] = (float)((double)pfVar7[2] * dVar33);
      }
      else {
        FastVecReflect(pfVar7,pfVar7,0xa10980);
        fVar3 = g_CollOutput.normal.z;
        dVar32 = ABS((double)g_CollOutput.normal.z);
        fVar34 = SQRT(g_CollOutput.normal.x * g_CollOutput.normal.x +
                      g_CollOutput.normal.y * g_CollOutput.normal.y);
        dVar30 = ABS((double)fVar34);
        *(float *)(puVar13 + 0x12) = fVar34;
        *(float *)((int)puVar13 + 0x94) = (float)(dVar32 - dVar30);
        uVar24 = (ulonglong)((uint)fVar3 >> 0x1c) & 8 |
                 (ulonglong)(*(uint *)((int)puVar13 + 0x94) >> 0x1e) & 2 |
                 (ulonglong)(*(uint *)(puVar13 + 0x12) >> 0x1d) & 4;
        dVar29 = dVar32;
        if ((double)*(float *)((int)puVar13 + 0x94) - dVar33 < 0.0) {
          dVar29 = dVar30;
        }
        fVar34 = *(float *)(&g_atanQuadrantTable + (int)(uVar24 << 2));
        dVar30 = ABS((double)*(float *)(puVar13 + 0x12));
        if ((double)*(float *)((int)puVar13 + 0x94) - dVar33 < 0.0) {
          dVar30 = dVar32;
        }
        fVar3 = *(float *)(((uint)(uVar24 << 2) | 0x735900) + 4);
        if (dVar33 < dVar29) {
          lVar18 = uVar17 - 0x150;
          lVar22 = uVar17 - 0xb0;
          lVar25 = uVar17 - 0xa0;
          lVar27 = 2;
          fVar4 = (float)(dVar30 - dVar29) / (float)(dVar30 + dVar29);
          fVar6 = fVar4 * fVar4;
          *(float *)((int)puVar13 + 0xbc) = fVar4;
          *(float *)((int)puVar13 + 0xb4) = fVar4;
          *(float *)(puVar13 + 0x17) = fVar4;
          *(float *)(puVar13 + 0x16) = fVar4;
          fVar4 = fVar6 * fVar6;
          *(float *)((int)puVar13 + 0xb4) = *(float *)((int)puVar13 + 0xb4) * fVar6;
          *(float *)(puVar13 + 0x17) = *(float *)(puVar13 + 0x17) * fVar4;
          *(float *)((int)puVar13 + 0xbc) = *(float *)((int)puVar13 + 0xbc) * fVar4 * fVar6;
          do {
            *(float *)((int)lVar18 + 0xb0) = *(float *)((int)lVar18 + 0xa0) * fVar4 * fVar4;
            iVar20 = (int)lVar22;
            lVar18 = lVar18 + 8;
            lVar22 = lVar22 + 8;
            *(float *)((int)lVar25 + 4) = *(float *)(iVar20 + 4) * fVar4 * fVar4;
            lVar25 = lVar25 + 8;
            lVar27 = lVar27 + -1;
          } while (lVar27 != 0);
          lVar27 = 4;
          lVar25 = uVar17 - 0xb0;
          pfVar23 = (float *)&DAT_007358e0;
          lVar18 = lVar19;
          lVar22 = lVar25;
          do {
            fVar4 = *pfVar23;
            fVar6 = pfVar23[1];
            pfVar23 = pfVar23 + 2;
            *(float *)((int)lVar18 + 0xb0) = *(float *)((int)lVar18 + 0xb0) * fVar4;
            lVar18 = lVar18 + 8;
            *(float *)((int)lVar22 + 4) = *(float *)((int)lVar22 + 4) * fVar6;
            lVar22 = lVar22 + 8;
            lVar27 = lVar27 + -1;
          } while (lVar27 != 0);
          lVar18 = 2;
          do {
            iVar20 = (int)lVar19;
            iVar21 = (int)lVar25;
            lVar19 = lVar19 + 0x10;
            lVar25 = lVar25 + 0x10;
            dVar33 = (double)((float)(dVar33 + (double)*(float *)(iVar20 + 0xb0)) +
                              *(float *)(iVar21 + 4) + *(float *)(iVar21 + 8) +
                             *(float *)(iVar21 + 0xc));
            lVar18 = lVar18 + -1;
          } while (lVar18 != 0);
          dVar33 = (double)((float)(dVar33 + 0.7853981852531433) * fVar34 + fVar3);
        }
        if ((dVar33 < 0.6981316804885864) && (iVar20 = CollHotspot(), iVar20 == -1)) {
          *pfVar7 = *pfVar7 * 1.2;
          pfVar7[1] = pfVar7[1] * 1.2;
          pfVar7[2] = pfVar7[2] * 1.2;
        }
      }
      if (*(char *)((int)pfVar7 + 0x1b) == '\0') {
        PlayMobySound(0,0,moby);
        *(undefined1 *)((int)pfVar7 + 0x1b) = 0xc;
      }
    }
    iVar21 = 0;
    iVar20 = *(int *)((int)pfVar7[4] + 0x78);
    do {
      pMVar8 = *(MobyInstance **)(iVar20 + 0xb0);
      if (((pMVar8 != (MobyInstance *)0x0 && pMVar8 != moby) && (pMVar8->oClass == SPAWNER_EGG)) &&
         (pMVar8->state != 0xfd && pMVar8->state != 0xfe)) {
        fVar34 = (moby->pos).y;
        fVar3 = (moby->pos).x;
        fVar4 = fVar34 - (pMVar8->pos).y;
        fVar6 = fVar3 - (pMVar8->pos).x;
        fVar14 = SQRT(fVar6 * fVar6 + fVar4 * fVar4);
        if (fVar14 < 1.8) {
          fVar14 = (1.8 - fVar14) * (DAT_0071f408 * -0.5 + 1.0);
          (moby->pos).x = fVar6 * fVar14 + fVar3;
          (moby->pos).y = fVar4 * fVar14 + fVar34;
        }
      }
      iVar21 = iVar21 + 1;
      iVar20 = iVar20 + 4;
    } while (iVar21 < 0x14);
    iVar20 = FastDecTimerS16(pfVar7 + 6);
    if (iVar20 != 0) {
      moby->state = '\x02';
    }
    fVar34 = MB_WrapRot(*pfVar7);
    (moby->rotation).x = fVar34;
    fVar34 = MB_WrapRot(pfVar7[1]);
    pMVar9 = moby->pClass;
    (moby->rotation).y = fVar34;
    moby->collision = pMVar9->collision;
    *(undefined4 *)((int)pfVar7[4] + 0x94) = *(undefined4 *)(*(int *)((int)pfVar7[4] + 0x24) + 0x10)
    ;
    pfVar7[2] = -(g_FrameTimeSq * 9.8 - pfVar7[2]);
    (moby->rotation).x = DAT_0071f408 * 0.01 + (moby->rotation).x;
    (moby->rotation).y = DAT_0071f408 * 0.02 + (moby->rotation).y;
  }
  else if (bVar2 < 2) {
    dVar33 = (double)GetGroundZ(0x3fe0000000000000,lVar18 + 0x10,0);
    fVar34 = pfVar7[4];
    (moby->pos).z = (float)(dVar33 + 0.20000000298023224);
    *(f32 *)(puVar13 + 8) = (moby->pos).x;
    fVar5 = (moby->pos).y;
    *(float *)(puVar13 + 9) = (float)(dVar33 + 0.20000000298023224);
    (moby->pos).w = 0.0;
    *(f32 *)((int)puVar13 + 0x44) = fVar5;
    *(undefined4 *)((int)puVar13 + 0x4c) = 0;
    fVar34 = (float)FUN_002ce020(fVar34,0,puVar13[8],puVar13[9]);
    pfVar7[5] = fVar34;
    moby->state = '\x02';
  }
  else if (bVar2 < 3) {
    fVar3 = pfVar7[5];
    fVar34 = -(DAT_0071f408 * 0.05 * moby->scale - moby->scale);
    moby->scale = fVar34;
    if ((fVar3 != 0.0) && (*(char *)((int)pfVar7 + 0x1a) != '\0')) {
      *(float *)((int)fVar3 + 0x2c) =
           DAT_0071f408 * 0.05 *
           (*(float *)(*(int *)((int)fVar3 + 0x24) + 0x24) - *(float *)((int)fVar3 + 0x2c)) +
           *(float *)((int)fVar3 + 0x2c);
      fVar34 = moby->scale;
    }
    if (fVar34 < DAT_0071f408 * 0.05 * moby->pClass->gScale) {
      fVar34 = pfVar7[5];
      moby->scale = 0.0001;
      if ((((fVar34 == 0.0) ||
           (*(char *)((int)fVar34 + 0x20) == -3 || *(char *)((int)fVar34 + 0x20) == -2)) ||
          (*(char *)((int)pfVar7 + 0x1a) == '\0')) ||
         (*(float *)(*(int *)((int)fVar34 + 0x24) + 0x24) - 0.01 <= *(float *)((int)fVar34 + 0x2c)))
      {
        fVar34 = pfVar7[4];
        if (((fVar34 != 0.0) && (*(short *)((int)fVar34 + 0xa6) == 0x75d)) &&
           (*(char *)((int)fVar34 + 0x20) != -3 && *(char *)((int)fVar34 + 0x20) != -2)) {
          *(undefined4 *)(*(int *)((int)fVar34 + 0x78) + (uint)*(byte *)(pfVar7 + 7) * 4 + 0xb0) = 0
          ;
        }
        DeleteMoby(moby);
      }
    }
  }
  MB_RegisterLameShadow((moby->scale * 0.3) / moby->pClass->gScale,moby);
  fVar5 = (moby->pos).z;
  fVar10 = (moby->pos).y;
  uVar11 = (int)fVar5 >> 0x1f;
  fVar34 = 5.0;
  uVar12 = (int)fVar10 >> 0x1f;
  iVar20 = (uVar11 >> 1 ^ (uint)fVar5) - uVar11;
  if ((iVar20 < 0x40a00000) || (0x43fa0000 < iVar20)) {
    fVar34 = pfVar7[4];
    if ((fVar34 != 0.0) &&
       ((*(short *)((int)fVar34 + 0xa6) == 0x75d &&
        (*(char *)((int)fVar34 + 0x20) != -3 && *(char *)((int)fVar34 + 0x20) != -2)))) {
      *(undefined4 *)(*(int *)((int)fVar34 + 0x78) + (uint)*(byte *)(pfVar7 + 7) * 4 + 0xb0) = 0;
    }
    DeleteMoby(moby);
  }
  else {
    fVar5 = (moby->pos).x;
    uVar11 = (int)fVar5 >> 0x1f;
    fVar3 = (moby->pos).x;
    if ((int)((uVar11 >> 1 ^ (uint)fVar5) - uVar11) < 0x40a00000) {
      (moby->pos).x = 5.0;
      fVar3 = fVar34;
    }
    if (1018.0 < fVar3) {
      (moby->pos).x = 1018.0;
    }
    fVar3 = (moby->pos).y;
    if ((int)((uVar12 >> 1 ^ (uint)fVar10) - uVar12) < 0x40a00000) {
      (moby->pos).y = 5.0;
      fVar3 = fVar34;
    }
    if (1018.0 < fVar3) {
      (moby->pos).y = 1018.0;
    }
    fVar3 = (moby->pos).z;
    if (iVar20 < 0x40a00000) {
      (moby->pos).z = 5.0;
      fVar3 = fVar34;
    }
    if (1018.0 < fVar3) {
      (moby->pos).z = 1018.0;
    }
  }
  return;
}


