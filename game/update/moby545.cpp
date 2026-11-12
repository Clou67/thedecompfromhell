// game/update/moby545.cpp -- reconstructed from NPEA00385 EBOOT
// STATUS: NOT STARTED (raw Ghidra output)
// 3 functions, 0x3aff7c-0x3b1300
#include "game/update/moby545.h"
#include "game/collproc.h"
#include "game/hero.h"
#include "game/mobyfunc.h"
#include "game/mobyproc.h"
#include "game/mobyutil.h"
#include "game/partupd.h"
#include "game/sound.h"
#include "game/update/moby455.h"
#include "idol/fastfunc.h"

// 0x03aff7c (0x14 bytes)
void M545_003aff7c(void)

{
  DAT_008456ac = 0x10000;
  return;
}


// 0x03affa0 (0x1a0 bytes)
MobyInstance *
FUN_003affa0(undefined4 param_1,f32 *param_2,undefined4 *param_3,undefined2 param_4,
            undefined4 param_5)

{
  short sVar1;
  undefined4 *puVar2;
  undefined2 uVar3;
  MobyInstance *pMVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  GPiece<16> auVar8;
  GPiece<16> auVar9;
  GPiece<16> auVar10;
  
  pMVar4 = CreateMoby(BOMB_0221);
  if (pMVar4 != (MobyInstance *)0x0) {
    puVar2 = (undefined4 *)pMVar4->pVar;
    puVar2[4] = param_1;
    (pMVar4->pos).x = *param_2;
    (pMVar4->pos).y = param_2[1];
    (pMVar4->pos).z = param_2[2];
    (pMVar4->pos).w = param_2[3];
    *puVar2 = *param_3;
    puVar2[1] = param_3[1];
    puVar2[2] = param_3[2];
    puVar2[3] = param_3[3];
    dVar7 = -3.1415927410125732;
    dVar6 = 3.1415927410125732;
    dVar5 = (double)MB_randRangeFloat(-3.1415927,3.1415927);
    (pMVar4->rotation).x = (float)dVar5;
    dVar5 = (double)MB_randRangeFloat((float)dVar7,(float)dVar6);
    (pMVar4->rotation).y = (float)dVar5;
    auVar8 = ZEXT416(0xffffffff);
    auVar8 = auVar8 | auVar8 << 0x20 | auVar8 << 0x40 | auVar8 << 0x60;
    puVar2[6] = 0;
    auVar10 = loadVectorLeftIndexed(8,0x3aff90);
    auVar9 = vectorShiftLeftIntegerWord(auVar8,auVar8);
    auVar8 = auVar10 >> 0x60 & (GPiece<16>)0xffffffff;
    auVar10 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
    auVar8 = vectorMultiplyAddFloatingPoint
                       (auVar10,auVar8 | auVar8 << 0x20 | auVar8 << 0x40 | auVar8 << 0x60,auVar9);
    auVar8 = vectorConvertToSignedFixedPointWordSaturate(auVar8,0);
    auVar8 = vectorSplatHalfWord(auVar8,1);
    uVar3 = storeVectorElementHalfWordIndexed(auVar8,0x14,ZEXT48(puVar2));
    *(undefined2 *)(puVar2 + 5) = uVar3;
    *(undefined2 *)((int)puVar2 + 0x16) = param_4;
    pMVar4->updateDistance = *(char *)(puVar2[4] + 0x30);
    sVar1 = *(short *)(puVar2[4] + 0x32);
    pMVar4->enabled = '\x01';
    pMVar4->drawDistance = sVar1;
    pMVar4->state = '\0';
    pMVar4->scale = pMVar4->pClass->gScale * 0.001;
    puVar2[8] = 0;
    puVar2[7] = param_5;
    UpdateMobyTransform(pMVar4);
  }
  return pMVar4;
}


// 0x03b0198 (0x1168 bytes)
// inlined: FastAtan2 @0x3b051c, FastAtan2 @0x3b0774, FastAtan2 @0x3b0ae4, FastAtan2 @0x3b0d34
/* Moby 545 */

void UpdateMoby_545(MobyInstance *moby)

{
  bool bVar1;
  byte bVar2;
  float fVar3;
  float fVar4;
  f32 fVar5;
  float fVar6;
  float *pfVar7;
  float *pfVar8;
  ushort *puVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  f32 fVar12;
  uint uVar13;
  uint uVar14;
  ulonglong *puVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  int iVar19;
  MobyInstance *pMVar20;
  ulonglong uVar21;
  int iVar24;
  longlong lVar22;
  longlong lVar23;
  float *pfVar26;
  longlong lVar25;
  ulonglong uVar27;
  longlong lVar28;
  ulonglong unaff_r24;
  ulonglong unaff_r25;
  ulonglong unaff_r26;
  ulonglong unaff_r27;
  ulonglong unaff_r28;
  ulonglong unaff_r29;
  ulonglong unaff_r30;
  ulonglong unaff_r31;
  ulonglong in_LR;
  longlong lVar29;
  longlong lVar30;
  double dVar31;
  double dVar32;
  double dVar33;
  double dVar34;
  double dVar35;
  ulonglong in_f31;
  double dVar36;
  float fVar37;
  
  lVar22 = (longlong)(int)moby;
  uVar21 = ZEXT48(&stack0x00000000);
  lVar23 = uVar21 - 0x180;
  puVar15 = (ulonglong *)lVar23;
  *puVar15 = uVar21;
  puVar15[0x32] = in_LR;
  puVar15[0x2f] = in_f31;
  puVar15[0x2e] = unaff_r31;
  puVar15[0x2d] = unaff_r30;
  puVar15[0x2c] = unaff_r29;
  puVar15[0x2b] = unaff_r28;
  puVar15[0x2a] = unaff_r27;
  puVar15[0x29] = unaff_r26;
  puVar15[0x28] = unaff_r25;
  puVar15[0x27] = unaff_r24;
  if ((moby != (MobyInstance *)0x0) && (pfVar7 = (float *)moby->pVar, pfVar7 != (float *)0x0)) {
    FastDecTimerS32(pfVar7 + 8);
    fVar37 = (moby->pos).x;
    fVar3 = (moby->pos).y;
    *(float *)(puVar15 + 0xe) = fVar37;
    fVar4 = (moby->pos).z;
    *(float *)((int)puVar15 + 0x74) = fVar3;
    fVar5 = (moby->pos).w;
    bVar2 = moby->state;
    *(float *)(puVar15 + 0xf) = fVar4;
    *(f32 *)((int)puVar15 + 0x7c) = fVar5;
    if (bVar2 == 0) {
      moby->scale = DAT_0071f408 * 0.05 * (moby->pClass->gScale - moby->scale) + moby->scale;
      fVar37 = fVar37 + *pfVar7;
      (moby->pos).x = fVar37;
      fVar3 = fVar3 + pfVar7[1];
      (moby->pos).y = fVar3;
      fVar4 = fVar4 + pfVar7[2];
      (moby->pos).z = fVar4;
      fVar6 = *pfVar7;
      dVar36 = 0.0;
      fVar16 = SQRT(pfVar7[2] * pfVar7[2] + fVar6 * fVar6 + pfVar7[1] * pfVar7[1]);
      if (fVar16 == 0.0) {
        *(float *)(puVar15 + 0x10) = fVar6;
        *(float *)((int)puVar15 + 0x84) = pfVar7[1];
        *(float *)(puVar15 + 0x11) = pfVar7[2];
        fVar6 = pfVar7[3];
        dVar32 = dVar36;
        dVar35 = dVar36;
        dVar33 = dVar36;
      }
      else {
        fVar16 = 0.2 / fVar16;
        dVar32 = (double)(fVar6 * fVar16);
        *(float *)(puVar15 + 0x10) = fVar6 * fVar16;
        dVar35 = (double)(pfVar7[1] * fVar16);
        *(float *)((int)puVar15 + 0x84) = pfVar7[1] * fVar16;
        dVar33 = (double)(pfVar7[2] * fVar16);
        *(float *)(puVar15 + 0x11) = pfVar7[2] * fVar16;
        fVar6 = pfVar7[3];
      }
      *(float *)((int)puVar15 + 0x8c) = fVar6;
      pfVar8 = moby->collisionMesh;
      puVar9 = moby->collision;
      *(float *)(puVar15 + 0x10) = (float)(dVar32 + (double)fVar37);
      *(float *)((int)puVar15 + 0x84) = (float)(dVar35 + (double)fVar3);
      *(float *)(puVar15 + 0x11) = (float)(dVar33 + (double)fVar4);
      uVar10 = *(undefined4 *)((int)pfVar7[4] + 0x98);
      uVar11 = *(undefined4 *)((int)pfVar7[4] + 0x94);
      moby->collisionMesh = (float *)0xffffffff;
      *(undefined4 *)((int)pfVar7[4] + 0x98) = 0xffffffff;
      moby->collision = (ushort *)0x0;
      *(undefined4 *)((int)pfVar7[4] + 0x94) = 0;
      iVar24 = CollLine(uVar21 - 0x110,uVar21 - 0x100,4,lVar22,0);
      fVar37 = (moby->pos).x;
      fVar3 = (moby->pos).y;
      fVar4 = (moby->pos).z;
      if (iVar24 != 0) {
        fVar16 = g_CollOutput.ip.y - *(float *)((int)puVar15 + 0x84);
        fVar17 = g_CollOutput.ip.x - *(float *)(puVar15 + 0x10);
        fVar18 = g_CollOutput.ip.z - *(float *)(puVar15 + 0x11);
        *(float *)(puVar15 + 0x10) = fVar17;
        *(float *)((int)puVar15 + 0x84) = fVar16;
        fVar6 = g_CollOutput.ip.w;
        *(float *)(puVar15 + 0x11) = fVar18;
        *(float *)((int)puVar15 + 0x8c) = fVar6;
        pMVar20 = g_CollOutput.pMoby;
        bVar1 = g_CollOutput.pMoby == (MobyInstance *)0x0;
        dVar35 = (double)SQRT(fVar18 * fVar18 + fVar17 * fVar17 + fVar16 * fVar16);
        fVar6 = (float)(0.2150000035762787 / dVar35);
        dVar32 = dVar36;
        if (dVar36 - dVar35 < 0.0) {
          dVar32 = (double)(fVar17 * fVar6);
        }
        dVar33 = dVar36;
        if (dVar36 - dVar35 < 0.0) {
          dVar33 = (double)(fVar16 * fVar6);
        }
        dVar31 = dVar36;
        if (dVar36 - dVar35 < 0.0) {
          dVar31 = (double)(fVar18 * fVar6);
        }
        if (dVar35 - dVar36 < 0.0) {
          dVar32 = (double)(fVar17 * fVar6);
        }
        if (dVar35 - dVar36 < 0.0) {
          dVar33 = (double)(fVar16 * fVar6);
        }
        if (dVar35 - dVar36 < 0.0) {
          dVar31 = (double)(fVar18 * fVar6);
        }
        *(float *)(puVar15 + 0x10) = (float)dVar32;
        *(float *)((int)puVar15 + 0x84) = (float)dVar33;
        *(float *)(puVar15 + 0x11) = (float)dVar31;
        (moby->pos).x = (float)((double)fVar37 + dVar32);
        (moby->pos).y = (float)((double)fVar3 + dVar33);
        (moby->pos).z = (float)((double)fVar4 + dVar31);
        if (bVar1) {
          FastVecReflect(pfVar7,pfVar7,0xa10980);
          fVar3 = g_CollOutput.normal.z;
          dVar35 = ABS((double)g_CollOutput.normal.z);
          fVar37 = SQRT(g_CollOutput.normal.x * g_CollOutput.normal.x +
                        g_CollOutput.normal.y * g_CollOutput.normal.y);
          dVar33 = ABS((double)fVar37);
          *(float *)(puVar15 + 0x15) = fVar37;
          *(float *)((int)puVar15 + 0xac) = (float)(dVar35 - dVar33);
          uVar27 = (ulonglong)((uint)fVar3 >> 0x1c) & 8 |
                   (ulonglong)(*(uint *)((int)puVar15 + 0xac) >> 0x1e) & 2 |
                   (ulonglong)(*(uint *)(puVar15 + 0x15) >> 0x1d) & 4;
          dVar32 = dVar35;
          if ((double)*(float *)((int)puVar15 + 0xac) - dVar36 < 0.0) {
            dVar32 = dVar33;
          }
          fVar37 = *(float *)(&g_atanQuadrantTable + (int)(uVar27 << 2));
          dVar33 = ABS((double)*(float *)(puVar15 + 0x15));
          if ((double)*(float *)((int)puVar15 + 0xac) - dVar36 < 0.0) {
            dVar33 = dVar35;
          }
          fVar3 = *(float *)(((uint)(uVar27 << 2) | 0x735900) + 4);
          dVar35 = dVar36;
          if (dVar36 < dVar32) {
            lVar25 = uVar21 - 0x170;
            lVar30 = uVar21 - 0x60;
            lVar28 = uVar21 - 0x70;
            lVar29 = 2;
            fVar4 = (float)(dVar33 - dVar32) / (float)(dVar33 + dVar32);
            fVar6 = fVar4 * fVar4;
            *(float *)((int)puVar15 + 0x11c) = fVar4;
            *(float *)((int)puVar15 + 0x114) = fVar4;
            *(float *)(puVar15 + 0x23) = fVar4;
            *(float *)(puVar15 + 0x22) = fVar4;
            fVar4 = fVar6 * fVar6;
            *(float *)((int)puVar15 + 0x114) = *(float *)((int)puVar15 + 0x114) * fVar6;
            *(float *)(puVar15 + 0x23) = *(float *)(puVar15 + 0x23) * fVar4;
            *(float *)((int)puVar15 + 0x11c) = *(float *)((int)puVar15 + 0x11c) * fVar4 * fVar6;
            do {
              *(float *)((int)lVar25 + 0x110) = *(float *)((int)lVar25 + 0x100) * fVar4 * fVar4;
              iVar24 = (int)lVar28;
              lVar28 = lVar28 + 8;
              lVar25 = lVar25 + 8;
              *(float *)((int)lVar30 + 4) = *(float *)(iVar24 + 4) * fVar4 * fVar4;
              lVar30 = lVar30 + 8;
              lVar29 = lVar29 + -1;
            } while (lVar29 != 0);
            lVar29 = 4;
            lVar30 = uVar21 - 0x70;
            pfVar26 = (float *)&DAT_007358e0;
            lVar25 = lVar23;
            lVar28 = lVar30;
            do {
              fVar4 = *pfVar26;
              fVar6 = pfVar26[1];
              pfVar26 = pfVar26 + 2;
              *(float *)((int)lVar25 + 0x110) = *(float *)((int)lVar25 + 0x110) * fVar4;
              lVar25 = lVar25 + 8;
              *(float *)((int)lVar28 + 4) = *(float *)((int)lVar28 + 4) * fVar6;
              lVar28 = lVar28 + 8;
              lVar29 = lVar29 + -1;
            } while (lVar29 != 0);
            lVar28 = 2;
            lVar25 = lVar23;
            dVar32 = dVar36;
            do {
              iVar24 = (int)lVar25;
              iVar19 = (int)lVar30;
              lVar25 = lVar25 + 0x10;
              lVar30 = lVar30 + 0x10;
              dVar32 = (double)((float)(dVar32 + (double)*(float *)(iVar24 + 0x110)) +
                                *(float *)(iVar19 + 4) + *(float *)(iVar19 + 8) +
                               *(float *)(iVar19 + 0xc));
              lVar28 = lVar28 + -1;
            } while (lVar28 != 0);
            dVar35 = (double)((float)(dVar32 + 0.7853981852531433) * fVar37 + fVar3);
          }
          if ((dVar35 < 0.6981316804885864) && (iVar24 = CollHotspot(), iVar24 == -1)) {
            fVar37 = pfVar7[1] * 0.5;
            fVar3 = *pfVar7 * 0.5;
            fVar4 = pfVar7[2] * 0.5;
            *pfVar7 = fVar3;
            pfVar7[1] = fVar37;
            pfVar7[2] = fVar4;
            if (SQRT(fVar4 * fVar4 + fVar3 * fVar3 + fVar37 * fVar37) < 0.025) {
              moby->state = '\x01';
            }
          }
        }
        else if (pMVar20->oClass == BOMB_0221) {
          dVar32 = (double)MB_randRangeFloat(0.9,1.1);
          pfVar7[2] = (float)((double)pfVar7[2] * dVar32);
        }
        else {
          FastVecReflect(pfVar7,pfVar7,0xa10980);
          fVar3 = g_CollOutput.normal.z;
          dVar35 = ABS((double)g_CollOutput.normal.z);
          fVar37 = SQRT(g_CollOutput.normal.x * g_CollOutput.normal.x +
                        g_CollOutput.normal.y * g_CollOutput.normal.y);
          dVar33 = ABS((double)fVar37);
          *(float *)(puVar15 + 0x14) = fVar37;
          *(float *)((int)puVar15 + 0xa4) = (float)(dVar35 - dVar33);
          uVar27 = (ulonglong)((uint)fVar3 >> 0x1c) & 8 |
                   (ulonglong)(*(uint *)((int)puVar15 + 0xa4) >> 0x1e) & 2 |
                   (ulonglong)(*(uint *)(puVar15 + 0x14) >> 0x1d) & 4;
          dVar32 = dVar35;
          if ((double)*(float *)((int)puVar15 + 0xa4) - dVar36 < 0.0) {
            dVar32 = dVar33;
          }
          fVar37 = *(float *)(&g_atanQuadrantTable + (int)(uVar27 << 2));
          dVar33 = ABS((double)*(float *)(puVar15 + 0x14));
          if ((double)*(float *)((int)puVar15 + 0xa4) - dVar36 < 0.0) {
            dVar33 = dVar35;
          }
          fVar3 = *(float *)(((uint)(uVar27 << 2) | 0x735900) + 4);
          dVar35 = dVar36;
          if (dVar36 < dVar32) {
            lVar25 = uVar21 - 0x170;
            lVar30 = uVar21 - 0x80;
            lVar28 = uVar21 - 0x90;
            lVar29 = 2;
            fVar4 = (float)(dVar33 - dVar32) / (float)(dVar33 + dVar32);
            fVar6 = fVar4 * fVar4;
            *(float *)((int)puVar15 + 0xfc) = fVar4;
            *(float *)((int)puVar15 + 0xf4) = fVar4;
            *(float *)(puVar15 + 0x1f) = fVar4;
            *(float *)(puVar15 + 0x1e) = fVar4;
            fVar4 = fVar6 * fVar6;
            *(float *)((int)puVar15 + 0xf4) = *(float *)((int)puVar15 + 0xf4) * fVar6;
            *(float *)(puVar15 + 0x1f) = *(float *)(puVar15 + 0x1f) * fVar4;
            *(float *)((int)puVar15 + 0xfc) = *(float *)((int)puVar15 + 0xfc) * fVar4 * fVar6;
            do {
              *(float *)((int)lVar25 + 0xf0) = *(float *)((int)lVar25 + 0xe0) * fVar4 * fVar4;
              iVar24 = (int)lVar28;
              lVar28 = lVar28 + 8;
              lVar25 = lVar25 + 8;
              *(float *)((int)lVar30 + 4) = *(float *)(iVar24 + 4) * fVar4 * fVar4;
              lVar30 = lVar30 + 8;
              lVar29 = lVar29 + -1;
            } while (lVar29 != 0);
            lVar29 = 4;
            lVar30 = uVar21 - 0x90;
            pfVar26 = (float *)&DAT_007358e0;
            lVar25 = lVar23;
            lVar28 = lVar30;
            do {
              fVar4 = *pfVar26;
              fVar6 = pfVar26[1];
              pfVar26 = pfVar26 + 2;
              *(float *)((int)lVar25 + 0xf0) = *(float *)((int)lVar25 + 0xf0) * fVar4;
              lVar25 = lVar25 + 8;
              *(float *)((int)lVar28 + 4) = *(float *)((int)lVar28 + 4) * fVar6;
              lVar28 = lVar28 + 8;
              lVar29 = lVar29 + -1;
            } while (lVar29 != 0);
            lVar28 = 2;
            lVar25 = lVar23;
            dVar32 = dVar36;
            do {
              iVar24 = (int)lVar25;
              iVar19 = (int)lVar30;
              lVar25 = lVar25 + 0x10;
              lVar30 = lVar30 + 0x10;
              dVar32 = (double)((float)(dVar32 + (double)*(float *)(iVar24 + 0xf0)) +
                                *(float *)(iVar19 + 4) + *(float *)(iVar19 + 8) +
                               *(float *)(iVar19 + 0xc));
              lVar28 = lVar28 + -1;
            } while (lVar28 != 0);
            dVar35 = (double)((float)(dVar32 + 0.7853981852531433) * fVar37 + fVar3);
          }
          if ((dVar35 < 0.6981316804885864) && (iVar24 = CollHotspot(), iVar24 == -1)) {
            *pfVar7 = *pfVar7 * 1.2;
            pfVar7[1] = pfVar7[1] * 1.2;
            pfVar7[2] = pfVar7[2] * 1.2;
          }
        }
        if (pfVar7[8] == 0.0) {
          PlayMobySound(0,0,moby);
          pfVar7[8] = 1.68156e-44;
        }
      }
      iVar24 = CollSphere(0x3fc99999a0000000,lVar22 + 0x10,&DAT_003b0140,4,lVar22);
      pMVar20 = MobyUpdateChainStart;
      if (iVar24 != 0) {
        fVar4 = g_CollOutput.ip.y - g_CollOutput.push.y;
        dVar35 = (double)g_CollOutput.push.x;
        fVar3 = (float)((double)g_CollOutput.ip.x - dVar35);
        fVar6 = g_CollOutput.ip.z - g_CollOutput.push.z;
        *(float *)(puVar15 + 0x10) = fVar3;
        *(float *)((int)puVar15 + 0x84) = fVar4;
        fVar37 = g_CollOutput.ip.w;
        *(float *)(puVar15 + 0x11) = fVar6;
        *(float *)((int)puVar15 + 0x8c) = fVar37;
        pMVar20 = g_CollOutput.pMoby;
        dVar33 = (double)SQRT(fVar6 * fVar6 + fVar3 * fVar3 + fVar4 * fVar4);
        bVar1 = g_CollOutput.pMoby == (MobyInstance *)0x0;
        fVar37 = (float)(0.014999999664723873 / dVar33);
        dVar32 = dVar36;
        if (dVar36 - dVar33 < 0.0) {
          dVar32 = (double)(fVar3 * fVar37);
        }
        dVar31 = dVar36;
        if (dVar36 - dVar33 < 0.0) {
          dVar31 = (double)(fVar4 * fVar37);
        }
        dVar34 = dVar36;
        if (dVar36 - dVar33 < 0.0) {
          dVar34 = (double)(fVar6 * fVar37);
        }
        if (dVar33 - dVar36 < 0.0) {
          dVar32 = (double)(fVar3 * fVar37);
        }
        if (dVar33 - dVar36 < 0.0) {
          dVar31 = (double)(fVar4 * fVar37);
        }
        if (dVar33 - dVar36 < 0.0) {
          dVar34 = (double)(fVar6 * fVar37);
        }
        *(float *)(puVar15 + 0x10) = (float)dVar32;
        *(float *)((int)puVar15 + 0x84) = (float)dVar31;
        *(float *)(puVar15 + 0x11) = (float)dVar34;
        (moby->pos).x = (float)(dVar35 + dVar32);
        (moby->pos).y = (float)((double)g_CollOutput.push.y + dVar31);
        (moby->pos).z = (float)((double)g_CollOutput.push.z + dVar34);
        (moby->pos).w = g_CollOutput.push.w;
        if (bVar1) {
          FastVecReflect(pfVar7,pfVar7,0xa10980);
          fVar3 = g_CollOutput.normal.z;
          dVar35 = ABS((double)g_CollOutput.normal.z);
          fVar37 = SQRT(g_CollOutput.normal.x * g_CollOutput.normal.x +
                        g_CollOutput.normal.y * g_CollOutput.normal.y);
          dVar33 = ABS((double)fVar37);
          *(float *)(puVar15 + 0x13) = fVar37;
          *(float *)((int)puVar15 + 0x9c) = (float)(dVar35 - dVar33);
          uVar27 = (ulonglong)((uint)fVar3 >> 0x1c) & 8 |
                   (ulonglong)(*(uint *)((int)puVar15 + 0x9c) >> 0x1e) & 2 |
                   (ulonglong)(*(uint *)(puVar15 + 0x13) >> 0x1d) & 4;
          dVar32 = dVar35;
          if ((double)*(float *)((int)puVar15 + 0x9c) - dVar36 < 0.0) {
            dVar32 = dVar33;
          }
          fVar37 = *(float *)(&g_atanQuadrantTable + (int)(uVar27 << 2));
          dVar33 = ABS((double)*(float *)(puVar15 + 0x13));
          if ((double)*(float *)((int)puVar15 + 0x9c) - dVar36 < 0.0) {
            dVar33 = dVar35;
          }
          fVar3 = *(float *)(((uint)(uVar27 << 2) | 0x735900) + 4);
          if (dVar36 < dVar32) {
            lVar22 = uVar21 - 0x170;
            lVar28 = uVar21 - 0xa0;
            lVar25 = uVar21 - 0xb0;
            lVar30 = 2;
            fVar4 = (float)(dVar33 - dVar32) / (float)(dVar33 + dVar32);
            fVar6 = fVar4 * fVar4;
            *(float *)((int)puVar15 + 0xdc) = fVar4;
            *(float *)((int)puVar15 + 0xd4) = fVar4;
            *(float *)(puVar15 + 0x1b) = fVar4;
            *(float *)(puVar15 + 0x1a) = fVar4;
            fVar4 = fVar6 * fVar6;
            *(float *)((int)puVar15 + 0xd4) = *(float *)((int)puVar15 + 0xd4) * fVar6;
            *(float *)(puVar15 + 0x1b) = *(float *)(puVar15 + 0x1b) * fVar4;
            *(float *)((int)puVar15 + 0xdc) = *(float *)((int)puVar15 + 0xdc) * fVar4 * fVar6;
            do {
              *(float *)((int)lVar22 + 0xd0) = *(float *)((int)lVar22 + 0xc0) * fVar4 * fVar4;
              iVar24 = (int)lVar25;
              lVar25 = lVar25 + 8;
              lVar22 = lVar22 + 8;
              *(float *)((int)lVar28 + 4) = *(float *)(iVar24 + 4) * fVar4 * fVar4;
              lVar28 = lVar28 + 8;
              lVar30 = lVar30 + -1;
            } while (lVar30 != 0);
            lVar30 = 4;
            lVar28 = uVar21 - 0xb0;
            pfVar26 = (float *)&DAT_007358e0;
            lVar22 = lVar23;
            lVar25 = lVar28;
            do {
              fVar4 = *pfVar26;
              fVar6 = pfVar26[1];
              pfVar26 = pfVar26 + 2;
              *(float *)((int)lVar22 + 0xd0) = *(float *)((int)lVar22 + 0xd0) * fVar4;
              lVar22 = lVar22 + 8;
              *(float *)((int)lVar25 + 4) = *(float *)((int)lVar25 + 4) * fVar6;
              lVar25 = lVar25 + 8;
              lVar30 = lVar30 + -1;
            } while (lVar30 != 0);
            lVar22 = 2;
            do {
              iVar24 = (int)lVar23;
              iVar19 = (int)lVar28;
              lVar23 = lVar23 + 0x10;
              lVar28 = lVar28 + 0x10;
              dVar36 = (double)((float)(dVar36 + (double)*(float *)(iVar24 + 0xd0)) +
                                *(float *)(iVar19 + 4) + *(float *)(iVar19 + 8) +
                               *(float *)(iVar19 + 0xc));
              lVar22 = lVar22 + -1;
            } while (lVar22 != 0);
            dVar36 = (double)((float)(dVar36 + 0.7853981852531433) * fVar37 + fVar3);
          }
          if ((dVar36 < 0.6981316804885864) && (iVar24 = CollHotspot(), iVar24 == -1)) {
            fVar37 = pfVar7[1] * 0.5;
            fVar3 = *pfVar7 * 0.5;
            fVar4 = pfVar7[2] * 0.5;
            *pfVar7 = fVar3;
            pfVar7[1] = fVar37;
            pfVar7[2] = fVar4;
            if (SQRT(fVar4 * fVar4 + fVar3 * fVar3 + fVar37 * fVar37) < 0.025) {
              moby->state = '\x01';
            }
          }
        }
        else if (pMVar20->oClass == BOMB_0221) {
          dVar36 = (double)MB_randRangeFloat(0.9,1.1);
          pfVar7[2] = (float)((double)pfVar7[2] * dVar36);
        }
        else {
          FastVecReflect(pfVar7,pfVar7,0xa10980);
          fVar3 = g_CollOutput.normal.z;
          dVar35 = ABS((double)g_CollOutput.normal.z);
          fVar37 = SQRT(g_CollOutput.normal.x * g_CollOutput.normal.x +
                        g_CollOutput.normal.y * g_CollOutput.normal.y);
          dVar33 = ABS((double)fVar37);
          *(float *)(puVar15 + 0x12) = fVar37;
          *(float *)((int)puVar15 + 0x94) = (float)(dVar35 - dVar33);
          uVar27 = (ulonglong)((uint)fVar3 >> 0x1c) & 8 |
                   (ulonglong)(*(uint *)((int)puVar15 + 0x94) >> 0x1e) & 2 |
                   (ulonglong)(*(uint *)(puVar15 + 0x12) >> 0x1d) & 4;
          dVar32 = dVar35;
          if ((double)*(float *)((int)puVar15 + 0x94) - dVar36 < 0.0) {
            dVar32 = dVar33;
          }
          fVar37 = *(float *)(&g_atanQuadrantTable + (int)(uVar27 << 2));
          dVar33 = ABS((double)*(float *)(puVar15 + 0x12));
          if ((double)*(float *)((int)puVar15 + 0x94) - dVar36 < 0.0) {
            dVar33 = dVar35;
          }
          fVar3 = *(float *)(((uint)(uVar27 << 2) | 0x735900) + 4);
          if (dVar36 < dVar32) {
            lVar22 = uVar21 - 0x170;
            lVar28 = uVar21 - 0xc0;
            lVar25 = uVar21 - 0xd0;
            lVar30 = 2;
            fVar4 = (float)(dVar33 - dVar32) / (float)(dVar33 + dVar32);
            fVar6 = fVar4 * fVar4;
            *(float *)((int)puVar15 + 0xbc) = fVar4;
            *(float *)((int)puVar15 + 0xb4) = fVar4;
            *(float *)(puVar15 + 0x17) = fVar4;
            *(float *)(puVar15 + 0x16) = fVar4;
            fVar4 = fVar6 * fVar6;
            *(float *)((int)puVar15 + 0xb4) = *(float *)((int)puVar15 + 0xb4) * fVar6;
            *(float *)(puVar15 + 0x17) = *(float *)(puVar15 + 0x17) * fVar4;
            *(float *)((int)puVar15 + 0xbc) = *(float *)((int)puVar15 + 0xbc) * fVar4 * fVar6;
            do {
              *(float *)((int)lVar22 + 0xb0) = *(float *)((int)lVar22 + 0xa0) * fVar4 * fVar4;
              iVar24 = (int)lVar25;
              lVar25 = lVar25 + 8;
              lVar22 = lVar22 + 8;
              *(float *)((int)lVar28 + 4) = *(float *)(iVar24 + 4) * fVar4 * fVar4;
              lVar28 = lVar28 + 8;
              lVar30 = lVar30 + -1;
            } while (lVar30 != 0);
            lVar30 = 4;
            lVar28 = uVar21 - 0xd0;
            pfVar26 = (float *)&DAT_007358e0;
            lVar22 = lVar23;
            lVar25 = lVar28;
            do {
              fVar4 = *pfVar26;
              fVar6 = pfVar26[1];
              pfVar26 = pfVar26 + 2;
              *(float *)((int)lVar22 + 0xb0) = *(float *)((int)lVar22 + 0xb0) * fVar4;
              lVar22 = lVar22 + 8;
              *(float *)((int)lVar25 + 4) = *(float *)((int)lVar25 + 4) * fVar6;
              lVar25 = lVar25 + 8;
              lVar30 = lVar30 + -1;
            } while (lVar30 != 0);
            lVar22 = 2;
            do {
              iVar24 = (int)lVar23;
              iVar19 = (int)lVar28;
              lVar23 = lVar23 + 0x10;
              lVar28 = lVar28 + 0x10;
              dVar36 = (double)((float)(dVar36 + (double)*(float *)(iVar24 + 0xb0)) +
                                *(float *)(iVar19 + 4) + *(float *)(iVar19 + 8) +
                               *(float *)(iVar19 + 0xc));
              lVar22 = lVar22 + -1;
            } while (lVar22 != 0);
            dVar36 = (double)((float)(dVar36 + 0.7853981852531433) * fVar37 + fVar3);
          }
          if ((dVar36 < 0.6981316804885864) && (iVar24 = CollHotspot(), iVar24 == -1)) {
            *pfVar7 = *pfVar7 * 1.2;
            pfVar7[1] = pfVar7[1] * 1.2;
            pfVar7[2] = pfVar7[2] * 1.2;
          }
        }
        pMVar20 = MobyUpdateChainStart;
        if (pfVar7[8] == 0.0) {
          PlayMobySound(0,0,moby);
          pfVar7[8] = 1.68156e-44;
          pMVar20 = MobyUpdateChainStart;
        }
      }
      for (; pMVar20 != (MobyInstance *)0x0; pMVar20 = (MobyInstance *)pMVar20->pChain) {
        if ((pMVar20 != moby) && (pMVar20->state != 0xfd && pMVar20->state != 0xfe)) {
          fVar37 = (moby->pos).y;
          fVar3 = (moby->pos).x;
          fVar4 = fVar37 - (pMVar20->pos).y;
          fVar6 = fVar3 - (pMVar20->pos).x;
          fVar16 = SQRT(fVar6 * fVar6 + fVar4 * fVar4);
          if (fVar16 < 1.8) {
            fVar16 = (1.8 - fVar16) * (DAT_0071f408 * -0.5 + 1.0);
            (moby->pos).x = fVar6 * fVar16 + fVar3;
            (moby->pos).y = fVar4 * fVar16 + fVar37;
          }
        }
      }
      iVar24 = FastDecTimerS16(pfVar7 + 5);
      if (iVar24 != 0) {
        moby->state = '\x02';
      }
      fVar37 = MB_WrapRot(*pfVar7);
      (moby->rotation).x = fVar37;
      fVar37 = MB_WrapRot(pfVar7[1]);
      (moby->rotation).y = fVar37;
      moby->collisionMesh = pfVar8;
      *(undefined4 *)((int)pfVar7[4] + 0x98) = uVar10;
      moby->collision = puVar9;
      *(undefined4 *)((int)pfVar7[4] + 0x94) = uVar11;
      pfVar7[2] = -(g_FrameTimeSq * 9.8 - pfVar7[2]);
      (moby->rotation).x = DAT_0071f408 * 0.01 + (moby->rotation).x;
      (moby->rotation).y = DAT_0071f408 * 0.02 + (moby->rotation).y;
    }
    else if (bVar2 < 2) {
      dVar36 = (double)GetGroundZ(0x3fe0000000000000,lVar22 + 0x10,0);
      (moby->pos).z = (float)(dVar36 + 0.20000000298023224);
      (moby->pos).w = 0.0;
      fVar37 = pfVar7[4];
      *(f32 *)(puVar15 + 8) = (moby->pos).x;
      fVar5 = (moby->pos).y;
      *(float *)(puVar15 + 9) = (float)(dVar36 + 0.20000000298023224);
      *(f32 *)((int)puVar15 + 0x44) = fVar5;
      *(undefined4 *)((int)puVar15 + 0x4c) = 0;
      fVar37 = (float)FUN_0038a248(fVar37);
      pfVar7[6] = fVar37;
      moby->state = '\x02';
    }
    else if (bVar2 < 3) {
      fVar37 = -(DAT_0071f408 * 0.05 * moby->scale - moby->scale);
      moby->scale = fVar37;
      fVar3 = pfVar7[6];
      if ((fVar3 != 0.0) && (((uint)pfVar7[7] & 4) != 0)) {
        *(float *)((int)fVar3 + 0x2c) =
             DAT_0071f408 * 0.05 *
             (*(float *)(*(int *)((int)fVar3 + 0x24) + 0x24) - *(float *)((int)fVar3 + 0x2c)) +
             *(float *)((int)fVar3 + 0x2c);
        fVar37 = moby->scale;
      }
      if (fVar37 < DAT_0071f408 * 0.05 * moby->pClass->gScale) {
        moby->scale = 0.0001;
        fVar37 = pfVar7[6];
        if ((((fVar37 == 0.0) ||
             (*(char *)((int)fVar37 + 0x20) == -3 || *(char *)((int)fVar37 + 0x20) == -2)) ||
            (((uint)pfVar7[7] & 4) == 0)) ||
           (*(float *)(*(int *)((int)fVar37 + 0x24) + 0x24) - 0.01 <= *(float *)((int)fVar37 + 0x2c)
           )) {
          DeleteMoby(moby);
          return;
        }
      }
    }
    MB_RegisterLameShadow((moby->scale * 0.3) / moby->pClass->gScale,moby);
    fVar5 = (moby->pos).z;
    fVar12 = (moby->pos).y;
    uVar13 = (int)fVar5 >> 0x1f;
    fVar37 = 5.0;
    uVar14 = (int)fVar12 >> 0x1f;
    iVar24 = (uVar13 >> 1 ^ (uint)fVar5) - uVar13;
    if ((iVar24 < 0x40a00000) || (0x43fa0000 < iVar24)) {
      DeleteMoby(moby);
    }
    else {
      fVar5 = (moby->pos).x;
      uVar13 = (int)fVar5 >> 0x1f;
      fVar3 = (moby->pos).x;
      if ((int)((uVar13 >> 1 ^ (uint)fVar5) - uVar13) < 0x40a00000) {
        (moby->pos).x = 5.0;
        fVar3 = fVar37;
      }
      if (1018.0 < fVar3) {
        (moby->pos).x = 1018.0;
      }
      fVar3 = (moby->pos).y;
      if ((int)((uVar14 >> 1 ^ (uint)fVar12) - uVar14) < 0x40a00000) {
        (moby->pos).y = 5.0;
        fVar3 = fVar37;
      }
      if (1018.0 < fVar3) {
        (moby->pos).y = 1018.0;
      }
      fVar3 = (moby->pos).z;
      if (iVar24 < 0x40a00000) {
        (moby->pos).z = 5.0;
        fVar3 = fVar37;
      }
      if (1018.0 < fVar3) {
        (moby->pos).z = 1018.0;
      }
    }
  }
  return;
}


