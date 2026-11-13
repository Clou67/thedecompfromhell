// game/update/moby409.cpp -- reconstructed from NPEA00385 EBOOT
// STATUS: NOT STARTED (raw Ghidra output)
// 3 functions, 0x1f210-0x20050
#include "game/update/moby409.h"
#include "game/boot.h"
#include "game/camera.h"
#include "game/collproc.h"
#include "game/hero.h"
#include "game/mobyfunc.h"
#include "game/mobyproc.h"
#include "game/mobyutil.h"
#include "game/partupd.h"
#include "idol/fastfunc.h"

// 0x001f210 (0x14 bytes)
void SECTION_HEADER_MOBY409(void)

{
  DAT_0071d108 = 0x10000;
  return;
}


// 0x001f240 (0x4b4 bytes)
// inlined: FastAtan2 @0x1f3b0, FastAtan2 @0x1f550
MobyInstance *
M409_0001f240
          (double param_1,double param_2,double param_3,float *param_4,f32 *param_5,float param_6,
          undefined4 param_7)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float *pfVar5;
  float fVar6;
  float fVar7;
  undefined4 uVar8;
  ulonglong *puVar9;
  int iVar10;
  int iVar11;
  ulonglong uVar12;
  MobyInstance *pMVar13;
  longlong lVar14;
  longlong lVar15;
  ulonglong uVar16;
  float *pfVar18;
  longlong lVar17;
  longlong lVar19;
  ulonglong unaff_r28;
  ulonglong unaff_r29;
  ulonglong unaff_r30;
  ulonglong unaff_r31;
  ulonglong in_LR;
  longlong lVar20;
  ulonglong in_f29;
  ulonglong in_f30;
  ulonglong in_f31;
  GPiece<16> auVar21;
  GPiece<16> auVar22;
  GPiece<16> auVar23;
  GPiece<16> auVar24;
  
  uVar12 = ZEXT48(&stack0x00000000);
  lVar15 = uVar12 - 0x120;
  puVar9 = (ulonglong *)lVar15;
  *puVar9 = uVar12;
  puVar9[0x26] = in_LR;
  puVar9[0x21] = in_f29;
  puVar9[0x22] = in_f30;
  puVar9[0x23] = in_f31;
  puVar9[0x20] = unaff_r31;
  *(undefined4 *)(puVar9 + 0x18) = param_7;
  *(undefined4 *)((int)puVar9 + 0xc4) = param_7;
  puVar9[0x1e] = unaff_r29;
  *(undefined4 *)(puVar9 + 0x19) = param_7;
  *(undefined4 *)((int)puVar9 + 0xcc) = param_7;
  puVar9[0x1f] = unaff_r30;
  puVar9[0x1d] = unaff_r28;
  auVar24 = *(undefined1 (*) [16])(puVar9 + 0x18);
  pMVar13 = CreateMoby(ROCKET_0199);
  if (pMVar13 != (MobyInstance *)0x0) {
    pMVar13->updateDistance = -1;
    pMVar13->drawDistance = 0x7e;
    pMVar13->enabled = '\x01';
    pMVar13->state = '\x01';
    pfVar5 = (float *)pMVar13->pVar;
    (pMVar13->pos).x = *param_5;
    (pMVar13->pos).y = param_5[1];
    (pMVar13->pos).z = param_5[2];
    (pMVar13->pos).w = param_5[3];
    fVar6 = *param_4;
    fVar1 = *param_4;
    *pfVar5 = fVar1;
    fVar7 = param_4[1];
    fVar1 = ABS(fVar1);
    fVar3 = ABS(param_4[1]);
    pfVar5[1] = param_4[1];
    pfVar5[2] = param_4[2];
    pfVar5[3] = param_4[3];
    *(float *)(puVar9 + 0xf) = fVar1 - fVar3;
    fVar2 = 0.0;
    uVar16 = (ulonglong)((uint)fVar6 >> 0x1c) & 8 |
             (ulonglong)(*(uint *)(puVar9 + 0xf) >> 0x1e) & 2 | (ulonglong)((uint)fVar7 >> 0x1d) & 4
    ;
    fVar6 = fVar1;
    if (*(float *)(puVar9 + 0xf) - 0.0 < 0.0) {
      fVar6 = fVar3;
    }
    fVar7 = *(float *)(&g_atanQuadrantTable + (int)(uVar16 << 2));
    if (*(float *)(puVar9 + 0xf) - 0.0 < 0.0) {
      fVar3 = fVar1;
    }
    fVar1 = *(float *)(((uint)(uVar16 << 2) | 0x735900) + 4);
    fVar4 = fVar2;
    if (0.0 < fVar6) {
      lVar14 = uVar12 - 0x110;
      lVar17 = uVar12 - 0x84;
      lVar19 = uVar12 - 0x74;
      lVar20 = 2;
      fVar6 = (fVar3 - fVar6) / (fVar3 + fVar6);
      fVar3 = fVar6 * fVar6;
      *(float *)(puVar9 + 0x15) = fVar6;
      *(float *)(puVar9 + 0x14) = fVar6;
      *(float *)((int)puVar9 + 0xa4) = fVar6;
      *(float *)((int)puVar9 + 0x9c) = fVar6;
      fVar6 = fVar3 * fVar3;
      *(float *)(puVar9 + 0x14) = *(float *)(puVar9 + 0x14) * fVar3;
      *(float *)((int)puVar9 + 0xa4) = *(float *)((int)puVar9 + 0xa4) * fVar6;
      *(float *)(puVar9 + 0x15) = *(float *)(puVar9 + 0x15) * fVar6 * fVar3;
      do {
        *(float *)((int)lVar14 + 0x9c) = *(float *)((int)lVar14 + 0x8c) * fVar6 * fVar6;
        iVar10 = (int)lVar17;
        lVar14 = lVar14 + 8;
        lVar17 = lVar17 + 8;
        *(float *)((int)lVar19 + 4) = *(float *)(iVar10 + 4) * fVar6 * fVar6;
        lVar19 = lVar19 + 8;
        lVar20 = lVar20 + -1;
      } while (lVar20 != 0);
      lVar19 = uVar12 - 0x84;
      pfVar18 = (float *)&DAT_007358e0;
      lVar20 = 4;
      lVar14 = lVar15;
      lVar17 = lVar19;
      do {
        fVar6 = *pfVar18;
        fVar3 = pfVar18[1];
        pfVar18 = pfVar18 + 2;
        *(float *)((int)lVar14 + 0x9c) = *(float *)((int)lVar14 + 0x9c) * fVar6;
        lVar14 = lVar14 + 8;
        *(float *)((int)lVar17 + 4) = *(float *)((int)lVar17 + 4) * fVar3;
        lVar17 = lVar17 + 8;
        lVar20 = lVar20 + -1;
      } while (lVar20 != 0);
      lVar17 = 2;
      lVar14 = lVar15;
      fVar6 = fVar2;
      do {
        iVar10 = (int)lVar14;
        lVar14 = lVar14 + 0x10;
        iVar11 = (int)lVar19;
        lVar19 = lVar19 + 0x10;
        fVar6 = fVar6 + *(float *)(iVar10 + 0x9c) + *(float *)(iVar11 + 4) + *(float *)(iVar11 + 8)
                + *(float *)(iVar11 + 0xc);
        lVar17 = lVar17 + -1;
      } while (lVar17 != 0);
      fVar4 = (fVar6 + 0.7853982) * fVar7 + fVar1;
    }
    (pMVar13->rotation).z = fVar4;
    fVar1 = pfVar5[2];
    fVar7 = ABS(pfVar5[2]);
    fVar6 = SQRT(*pfVar5 * *pfVar5 + pfVar5[1] * pfVar5[1]);
    fVar3 = ABS(fVar6);
    *(float *)(puVar9 + 0xe) = fVar6;
    *(float *)((int)puVar9 + 0x74) = fVar3 - fVar7;
    uVar16 = (ulonglong)(*(uint *)(puVar9 + 0xe) >> 0x1c) & 8 |
             (ulonglong)(*(uint *)((int)puVar9 + 0x74) >> 0x1e) & 2 |
             (ulonglong)((uint)fVar1 >> 0x1d) & 4;
    fVar1 = *(float *)(&g_atanQuadrantTable + (int)(uVar16 << 2));
    fVar6 = ABS(*(float *)(puVar9 + 0xe));
    if (*(float *)((int)puVar9 + 0x74) - 0.0 < 0.0) {
      fVar6 = fVar7;
    }
    fVar4 = *(float *)(((uint)(uVar16 << 2) | 0x735900) + 4);
    if (*(float *)((int)puVar9 + 0x74) - 0.0 < 0.0) {
      fVar7 = fVar3;
    }
    if (0.0 < fVar6) {
      lVar14 = uVar12 - 0x110;
      lVar17 = uVar12 - 0xa4;
      lVar19 = uVar12 - 0x94;
      lVar20 = 2;
      fVar6 = (fVar7 - fVar6) / (fVar7 + fVar6);
      fVar7 = fVar6 * fVar6;
      *(float *)(puVar9 + 0x11) = fVar6;
      *(float *)(puVar9 + 0x10) = fVar6;
      *(float *)((int)puVar9 + 0x84) = fVar6;
      *(float *)((int)puVar9 + 0x7c) = fVar6;
      fVar6 = fVar7 * fVar7;
      *(float *)(puVar9 + 0x10) = *(float *)(puVar9 + 0x10) * fVar7;
      *(float *)((int)puVar9 + 0x84) = *(float *)((int)puVar9 + 0x84) * fVar6;
      *(float *)(puVar9 + 0x11) = *(float *)(puVar9 + 0x11) * fVar6 * fVar7;
      do {
        *(float *)((int)lVar14 + 0x7c) = *(float *)((int)lVar14 + 0x6c) * fVar6 * fVar6;
        iVar10 = (int)lVar17;
        lVar14 = lVar14 + 8;
        lVar17 = lVar17 + 8;
        *(float *)((int)lVar19 + 4) = *(float *)(iVar10 + 4) * fVar6 * fVar6;
        lVar19 = lVar19 + 8;
        lVar20 = lVar20 + -1;
      } while (lVar20 != 0);
      lVar19 = uVar12 - 0xa4;
      pfVar18 = (float *)&DAT_007358e0;
      lVar20 = 4;
      lVar14 = lVar15;
      lVar17 = lVar19;
      do {
        fVar6 = *pfVar18;
        fVar7 = pfVar18[1];
        pfVar18 = pfVar18 + 2;
        *(float *)((int)lVar14 + 0x7c) = *(float *)((int)lVar14 + 0x7c) * fVar6;
        lVar14 = lVar14 + 8;
        *(float *)((int)lVar17 + 4) = *(float *)((int)lVar17 + 4) * fVar7;
        lVar17 = lVar17 + 8;
        lVar20 = lVar20 + -1;
      } while (lVar20 != 0);
      lVar14 = 2;
      do {
        iVar10 = (int)lVar15;
        iVar11 = (int)lVar19;
        lVar15 = lVar15 + 0x10;
        lVar19 = lVar19 + 0x10;
        fVar2 = fVar2 + *(float *)(iVar10 + 0x7c) + *(float *)(iVar11 + 4) + *(float *)(iVar11 + 8)
                + *(float *)(iVar11 + 0xc);
        lVar14 = lVar14 + -1;
      } while (lVar14 != 0);
      fVar2 = (fVar2 + 0.7853982) * fVar1 + fVar4;
    }
    auVar21 = vectorConvertFromSignedFixedPointWord(auVar24,0);
    auVar24 = ZEXT416(0xffffffff);
    auVar24 = auVar24 | auVar24 << 0x20 | auVar24 << 0x40 | auVar24 << 0x60;
    auVar22 = vectorShiftLeftIntegerWord(auVar24,auVar24);
    (pMVar13->rotation).y = -fVar2;
    auVar24 = loadVectorLeftIndexed(8,0x1f230);
    auVar23 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
    auVar24 = auVar24 >> 0x60 & (GPiece<16>)0xffffffff;
    auVar24 = vectorAddFloatingPoint
                        (auVar21,auVar24 | auVar24 << 0x20 | auVar24 << 0x40 | auVar24 << 0x60);
    auVar24 = vectorMultiplyAddFloatingPoint(auVar23,auVar24,auVar22);
    auVar24 = vectorConvertToSignedFixedPointWordSaturate(auVar24,0);
    auVar24 = auVar24 >> 0x60 & (GPiece<16>)0xffffffff;
    uVar8 = storeVectorElementWordIndexed
                      (auVar24 | auVar24 << 0x20 | auVar24 << 0x40 | auVar24 << 0x60,0x14,
                       ZEXT48(pfVar5));
    *(undefined4 *)((uint)(pfVar5 + 5) & 0xfffffffc) = uVar8;
    pfVar5[4] = param_6;
    pfVar5[6] = (float)param_3;
    pfVar5[7] = (float)param_1;
    pfVar5[9] = (float)param_2;
    pfVar5[10] = 0.0;
    UpdateMobyTransform(pMVar13);
  }
  return pMVar13;
}


// 0x001f7a8 (0x8a8 bytes)
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Moby 409 */

void UpdateMoby_409(MobyInstance *moby)

{
  longlong lVar1;
  bool bVar2;
  byte bVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  f32 fVar7;
  float fVar8;
  float *pfVar9;
  float fVar10;
  undefined4 uVar11;
  undefined2 uVar12;
  GPiece<16> auVar13;
  GPiece<16> auVar14;
  ulonglong *puVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  MobyInstance *pMVar22;
  ulonglong uVar23;
  longlong lVar24;
  int iVar26;
  undefined8 uVar25;
  ulonglong unaff_r22;
  ulonglong unaff_r23;
  ulonglong unaff_r24;
  ulonglong unaff_r25;
  ulonglong unaff_r26;
  ulonglong unaff_r27;
  ulonglong unaff_r28;
  longlong lVar27;
  ulonglong unaff_r29;
  longlong lVar28;
  ulonglong unaff_r30;
  ulonglong uVar29;
  ulonglong unaff_r31;
  ulonglong in_LR;
  double dVar30;
  ulonglong in_f31;
  GPiece<16> auVar31;
  GPiece<16> auVar32;
  GPiece<16> auVar33;
  GPiece<16> auVar34;
  GPiece<16> auVar35;
  GPiece<16> auVar36;
  GPiece<16> auVar37;
  GPiece<16> auVar38;
  GPiece<16> auVar39;
  GPiece<16> auVar40;
  
  lVar24 = (longlong)(int)moby;
  uVar23 = ZEXT48(&stack0x00000000);
  lVar1 = uVar23 - 0x1a0;
  puVar15 = (ulonglong *)lVar1;
  *puVar15 = uVar23;
  puVar15[0x36] = in_LR;
  puVar15[0x33] = in_f31;
  puVar15[0x32] = unaff_r31;
  bVar3 = moby->state;
  puVar15[0x31] = unaff_r30;
  pfVar9 = (float *)moby->pVar;
  uVar29 = ZEXT48(pfVar9);
  puVar15[0x30] = unaff_r29;
  puVar15[0x2f] = unaff_r28;
  puVar15[0x2e] = unaff_r27;
  puVar15[0x2d] = unaff_r26;
  puVar15[0x2c] = unaff_r25;
  puVar15[0x2b] = unaff_r24;
  puVar15[0x2a] = unaff_r23;
  puVar15[0x29] = unaff_r22;
  if (bVar3 < 2) {
    if (bVar3 != 0) {
      iVar26 = MB_damage(lVar24,0x230000,0);
      fVar4 = (moby->pos).x;
      fVar5 = (moby->pos).y;
      fVar6 = (moby->pos).z;
      fVar7 = (moby->pos).w;
      fVar8 = (moby->rotation).x;
      if ((iVar26 == 0) || (*(float *)(iVar26 + 0x20) == pfVar9[4])) {
        if ((Level == Hoven) &&
           ((g_heroState == TURRET_PLANE_UI && (fVar10 = pfVar9[4], fVar10 != 0.0)))) {
          if (0x7f < *(byte *)((int)fVar10 + 0x20)) {
            DeleteMoby(moby);
            return;
          }
          if (*(byte *)((int)fVar10 + 0x20) < 2) {
            moby->state = '\x02';
            return;
          }
        }
        *(float *)(puVar15 + 0x18) = fVar4;
        *(float *)((int)puVar15 + 0xc4) = fVar5;
        *(float *)(puVar15 + 0x19) = fVar6;
        *(f32 *)((int)puVar15 + 0xcc) = fVar7;
        (moby->pos).x = fVar4 + *pfVar9;
        (moby->pos).y = fVar5 + pfVar9[1];
        (moby->pos).z = fVar6 + pfVar9[2];
        (moby->rotation).z = pfVar9[7];
        dVar30 = (double)FastWrapRot(fVar8,g_FrameTime * 6.2831855);
        (moby->rotation).x = (float)dVar30;
        fVar4 = *pfVar9;
        fVar5 = SQRT(pfVar9[2] * pfVar9[2] + fVar4 * fVar4 + pfVar9[1] * pfVar9[1]);
        if (fVar5 == 0.0) {
          *(float *)(puVar15 + 0x1a) = fVar4;
          *(float *)((int)puVar15 + 0xd4) = pfVar9[1];
          *(float *)(puVar15 + 0x1b) = pfVar9[2];
          fVar4 = pfVar9[3];
          *(undefined4 *)(puVar15 + 0x1b) = 0;
          *(undefined4 *)((int)puVar15 + 0xd4) = 0;
          *(undefined4 *)(puVar15 + 0x1a) = 0;
        }
        else {
          fVar5 = 0.2 / fVar5;
          *(float *)(puVar15 + 0x1a) = fVar4 * fVar5;
          *(float *)((int)puVar15 + 0xd4) = pfVar9[1] * fVar5;
          *(float *)(puVar15 + 0x1b) = pfVar9[2] * fVar5;
          fVar4 = pfVar9[3];
        }
        *(float *)((int)puVar15 + 0xdc) = fVar4;
        fVar4 = *pfVar9;
        fVar5 = SQRT(pfVar9[2] * pfVar9[2] + fVar4 * fVar4 + pfVar9[1] * pfVar9[1]);
        if (fVar5 == 0.0) {
          *(float *)(puVar15 + 0x1c) = fVar4;
          *(float *)((int)puVar15 + 0xe4) = pfVar9[1];
          *(float *)(puVar15 + 0x1d) = pfVar9[2];
          fVar4 = pfVar9[3];
          *(undefined4 *)(puVar15 + 0x1d) = 0;
          *(undefined4 *)((int)puVar15 + 0xe4) = 0;
          *(undefined4 *)(puVar15 + 0x1c) = 0;
        }
        else {
          fVar5 = -0.2 / fVar5;
          *(float *)(puVar15 + 0x1c) = fVar4 * fVar5;
          *(float *)((int)puVar15 + 0xe4) = pfVar9[1] * fVar5;
          *(float *)(puVar15 + 0x1d) = pfVar9[2] * fVar5;
          fVar4 = pfVar9[3];
        }
        lVar27 = uVar23 - 0xc0;
        lVar28 = lVar24 + 0x10;
        *(float *)((int)puVar15 + 0xec) = fVar4;
        FastVecAddSelf(uVar23 - 0xb0,lVar27,lVar28);
        iVar26 = MB_randRange(0xf,0x16);
        puVar15[0x26] = (longlong)iVar26;
        dVar30 = 0.5;
        puVar15[0x26] =
             (longlong)(int)(animationSpeed * (float)((double)(longlong)puVar15[0x26] + 0.5));
        uVar11 = *(undefined4 *)((int)puVar15 + 0x134);
        uVar25 = MB_randRange(0x14,0x23);
        SpawnPart_4(lVar27,uVar23 - 0xd0,0x6f00afff,0xff,uVar11,0x28,uVar25,1);
        iVar26 = MB_randRange(0x1e,0x3c);
        puVar15[0x26] = (longlong)iVar26;
        puVar15[0x26] =
             (longlong)(int)(animationSpeed * (float)((double)(longlong)puVar15[0x26] + dVar30));
        uVar11 = *(undefined4 *)((int)puVar15 + 0x134);
        uVar25 = MB_randRange(0x32,0x4b);
        SpawnPart_4(lVar27,uVar23 - 0xd0,0x1fffffff,0x4f4f4f,uVar11,0x28,uVar25,0);
        iVar26 = CollLine(lVar28,uVar23 - 0xe0,0,lVar24,0);
        if ((iVar26 != 0) ||
           (iVar26 = CollSphere(0x3fc99999a0000000,lVar28,&DAT_0001f700,0,lVar24),
           iVar26 != 0)) {
          if ((g_CollOutput.pMoby != (MobyInstance *)0x0) &&
             (g_CollOutput.pMoby != (MobyInstance *)pfVar9[4])) {
            iVar26 = 1;
            if (((Level == Hoven) && (g_heroState == TURRET_PLANE_UI)) &&
               (iVar26 = 3, 0xf < DAT_00927130)) {
              iVar26 = 2;
            }
            puVar15[0x26] = (longlong)iVar26;
            SetCollDamIn((double)(longlong)puVar15[0x26],uVar23 - 0xa0,lVar24,0x10003);
            fVar4 = pfVar9[7] + 1.5707963;
            auVar35 = ZEXT416(0xffffffff);
            auVar34 = auVar35 | auVar35 << 0x20 | auVar35 << 0x40 | auVar35 << 0x60;
            auVar35 = ZEXT416(0xffffffff);
            auVar38 = auVar35 | auVar35 << 0x20 | auVar35 << 0x40 | auVar35 << 0x60;
            auVar35 = vectorShiftLeftIntegerWord(auVar34,auVar34);
            fVar5 = 3.1415925 - fVar4;
            if (fVar4 - (3.1415925 - fVar4) < 0.0) {
              fVar5 = fVar4;
            }
            fVar6 = -3.1415925 - fVar4;
            if ((-3.1415925 - fVar4) - fVar5 < 0.0) {
              fVar6 = fVar5;
            }
            auVar34 = loadVectorLeftIndexed(0x18,0x1f700);
            auVar31 = loadVectorLeftIndexed(0x1c,0x1f700);
            auVar39 = auVar34 >> 0x60 & (GPiece<16>)0xffffffff;
            auVar31 = auVar31 >> 0x60 & (GPiece<16>)0xffffffff;
            auVar34 = loadVectorLeftIndexed(0x20,0x1f700);
            fVar4 = fVar6 * fVar6;
            auVar32 = loadVectorLeftIndexed(0x24,0x1f700);
            auVar33 = loadVectorLeftIndexed(0x28,0x1f700);
            auVar13 = auVar34 >> 0x60 & (GPiece<16>)0xffffffff;
            auVar34 = loadVectorLeftIndexed(0x2c,0x1f700);
            auVar32 = auVar32 >> 0x60 & (GPiece<16>)0xffffffff;
            auVar33 = auVar33 >> 0x60 & (GPiece<16>)0xffffffff;
            auVar14 = auVar34 >> 0x60 & (GPiece<16>)0xffffffff;
            fVar5 = fVar4 * fVar4 * fVar6;
            fVar8 = fVar4 * fVar5;
            *(float *)(puVar15 + 0x20) =
                 fVar4 * fVar8 * 2.601887e-06 +
                 fVar8 * -0.0001980741 + fVar5 * 0.0083330255 + fVar4 * fVar6 * -0.16666657 + fVar6;
            pMVar22 = g_CollOutput.pMoby;
            auVar36 = loadVectorLeftIndexed(0x1c,uVar29);
            auVar34 = loadVectorRightIndexed(0x2c,uVar29);
            auVar36 = auVar36 | auVar34;
            auVar34 = ZEXT416(0xffffffff);
            auVar37 = auVar34 | auVar34 << 0x20 | auVar34 << 0x40 | auVar34 << 0x60;
            auVar34 = vectorSubtractFloatingPoint
                                (auVar39 | auVar39 << 0x20 | auVar39 << 0x40 | auVar39 << 0x60,
                                 auVar36);
            auVar31 = vectorSubtractFloatingPoint
                                (auVar31 | auVar31 << 0x20 | auVar31 << 0x40 | auVar31 << 0x60,
                                 auVar36);
            auVar37 = vectorShiftLeftIntegerWord(auVar37,auVar37);
            auVar39 = vectorCompareGreaterThanFloatingPoint(auVar34,auVar36);
            auVar39 = vectorConditionalSelect(auVar34,auVar36,auVar39);
            auVar34 = ZEXT416(0xffffffff);
            auVar40 = auVar34 | auVar34 << 0x20 | auVar34 << 0x40 | auVar34 << 0x60;
            auVar34 = vectorCompareGreaterThanFloatingPoint(auVar39,auVar31);
            auVar34 = vectorConditionalSelect(auVar31,auVar39,auVar34);
            auVar31 = loadVectorLeftIndexed(0xa6,lVar24);
            auVar39 = vectorMultiplyAddFloatingPoint(auVar34,auVar34,auVar35);
            auVar38 = vectorShiftLeftIntegerWord(auVar38,auVar38);
            auVar35 = ZEXT416(0xfffffff0);
            auVar36 = vectorShiftRightWord
                                (auVar31,auVar35 | auVar35 << 0x20 | auVar35 << 0x40 |
                                         auVar35 << 0x60);
            auVar40 = vectorShiftLeftIntegerWord(auVar40,auVar40);
            auVar35 = ZEXT416(0xffffffff);
            auVar31 = auVar35 | auVar35 << 0x20 | auVar35 << 0x40 | auVar35 << 0x60;
            auVar35 = vectorMultiplyAddFloatingPoint(auVar39,auVar34,auVar37);
            auVar37 = vectorShiftLeftIntegerWord(auVar31,auVar31);
            auVar31 = vectorMultiplyAddFloatingPoint(auVar39,auVar35,auVar38);
            auVar35 = vectorMultiplyAddFloatingPoint
                                (auVar35,auVar13 | auVar13 << 0x20 | auVar13 << 0x40 |
                                         auVar13 << 0x60,auVar34);
            auVar38 = vectorMultiplyAddFloatingPoint(auVar39,auVar31,auVar40);
            auVar35 = vectorMultiplyAddFloatingPoint
                                (auVar31,auVar32 | auVar32 << 0x20 | auVar32 << 0x40 |
                                         auVar32 << 0x60,auVar35);
            auVar31 = vectorSplatHalfWord(auVar36,1);
            auVar34 = vectorMultiplyAddFloatingPoint(auVar39,auVar38,auVar37);
            auVar35 = vectorMultiplyAddFloatingPoint
                                (auVar38,auVar33 | auVar33 << 0x20 | auVar33 << 0x40 |
                                         auVar33 << 0x60,auVar35);
            auVar34 = vectorMultiplyAddFloatingPoint
                                (auVar34,auVar14 | auVar14 << 0x20 | auVar14 << 0x40 |
                                         auVar14 << 0x60,auVar35);
            auVar35 = auVar34 >> 0x60 & (GPiece<16>)0xffffffff;
            uVar11 = storeVectorElementWordIndexed
                               (auVar35 | auVar35 << 0x20 | auVar35 << 0x40 | auVar35 << 0x60,0x104,
                                lVar1);
            *(undefined4 *)((int)puVar15 + 0x104) = uVar11;
            *(undefined4 *)(puVar15 + 0x21) = 0x3f800000;
            *(undefined4 *)((int)puVar15 + 0x10c) = 0x45afdf66;
            *(undefined1 *)(puVar15 + 0x23) = 1;
            *(undefined1 *)((int)puVar15 + 0x119) = 1;
            uVar12 = storeVectorElementHalfWordIndexed(auVar31,0x11a,lVar1);
            *(undefined2 *)((int)puVar15 + 0x11a) = uVar12;
            auVar35 = loadVectorLeftIndexed(0x60,0x1f700);
            auVar34 = vectorPermute(auVar34,_DAT_0001f730,_DAT_0001f740);
            auVar35 = auVar35 >> 0x60 & (GPiece<16>)0xffffffff;
            auVar34 = vectorPermute(auVar34,*(undefined1 (*) [16])(puVar15 + 0x20),_DAT_0001f750);
            auVar35 = vectorPermute(auVar36,auVar35 | auVar35 << 0x20 | auVar35 << 0x40 |
                                            auVar35 << 0x60,_DAT_0001f770);
            auVar35 = vectorPermute(auVar35,*(undefined1 (*) [16])(puVar15 + 0x22),_DAT_0001f780);
            *(undefined1 (*) [16])(puVar15 + 8) = auVar34;
            *(undefined4 *)((int)puVar15 + 0x6c) = *(undefined4 *)((int)puVar15 + 300);
            *(undefined4 *)(puVar15 + 0xd) = *(undefined4 *)(puVar15 + 0x25);
            *(undefined4 *)((int)puVar15 + 100) = *(undefined4 *)((int)puVar15 + 0x124);
            *(undefined4 *)(puVar15 + 0xc) = *(undefined4 *)(puVar15 + 0x24);
            *(undefined1 (*) [16])(puVar15 + 10) = auVar35;
            CollDamageMobyDirect
                      (pMVar22,pMVar22,puVar15[8],puVar15[9],puVar15[10],puVar15[0xb],puVar15[0xc],
                       puVar15[0xd]);
          }
          moby->state = '\x02';
        }
        iVar26 = FastDecTimerS32(uVar29 + 0x14);
        if (iVar26 != 0) {
          moby->state = '\x02';
        }
      }
      else {
        moby->state = '\x02';
      }
    }
  }
  else if (bVar3 < 3) {
    fVar4 = (moby->pos).y;
    fVar5 = (moby->pos).x;
    fVar16 = fVar4 - GameCamera.posY;
    fVar6 = (moby->pos).z;
    fVar20 = fVar5 - GameCamera.posX;
    fVar21 = fVar6 - GameCamera.posZ;
    fVar8 = SQRT(fVar21 * fVar21 + fVar20 * fVar20 + fVar16 * fVar16);
    fVar18 = 0.0;
    bVar2 = Level == Hoven;
    fVar10 = 0.4 / fVar8;
    fVar19 = fVar18;
    if (0.0 - fVar8 < 0.0) {
      fVar19 = fVar10 * fVar21;
    }
    fVar17 = fVar18;
    if (0.0 - fVar8 < 0.0) {
      fVar17 = fVar10 * fVar16;
    }
    if (0.0 - fVar8 < 0.0) {
      fVar18 = fVar10 * fVar20;
    }
    if (fVar8 - 0.0 < 0.0) {
      fVar19 = fVar10 * fVar21;
    }
    if (fVar8 - 0.0 < 0.0) {
      fVar17 = fVar10 * fVar16;
    }
    if (fVar8 - 0.0 < 0.0) {
      fVar18 = fVar10 * fVar20;
    }
    (moby->pos).z = fVar6 + fVar19;
    (moby->pos).y = fVar4 + fVar17;
    (moby->pos).x = fVar5 + fVar18;
    if ((bVar2) && (g_heroState == TURRET_PLANE_UI)) {
      puVar15[0x12] = 0xffffffffffffffff;
      puVar15[0x14] = 0;
      puVar15[0x15] = 0;
      puVar15[0x16] = 0xffffffffffffffff;
      puVar15[0x17] = 0;
      MB_genericExplosion
                (0,0,0x3fd3333340000000,0x3fc99999a0000000,0,0x3fc3333340000000,lVar24,&DAT_00a15d30
                 ,0,0,0xffffffffffffffff,3,3,5);
      auVar35 = ZEXT416(0xffffffff);
      auVar35 = auVar35 | auVar35 << 0x20 | auVar35 << 0x40 | auVar35 << 0x60;
      auVar34 = vectorShiftLeftIntegerWord(auVar35,auVar35);
      GameCamera.shake.strength = 0.025;
      auVar35 = loadVectorLeftIndexed(0x9c,0x1f700);
      auVar35 = auVar35 >> 0x60 & (GPiece<16>)0xffffffff;
      auVar38 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
      auVar35 = vectorMultiplyAddFloatingPoint
                          (auVar38,auVar35 | auVar35 << 0x20 | auVar35 << 0x40 | auVar35 << 0x60,
                           auVar34);
      auVar35 = vectorConvertToSignedFixedPointWordSaturate(auVar35,0);
      auVar35 = auVar35 >> 0x60 & (GPiece<16>)0xffffffff;
      GameCamera.shake.time =
           storeVectorElementWordIndexed
                     (auVar35 | auVar35 << 0x20 | auVar35 << 0x40 | auVar35 << 0x60,0x168,0x9513c0);
    }
    else {
      MB_SpawnExplosionSparks
                (0x3fd0000000000000,0x402a000000000000,lVar24,lVar24 + 0x10,&DAT_0001f700,0);
    }
    DeleteMoby(moby);
  }
                    /* WARNING: Read-only address (ram,0x0001f730) is written */
                    /* WARNING: Read-only address (ram,0x0001f740) is written */
                    /* WARNING: Read-only address (ram,0x0001f750) is written */
                    /* WARNING: Read-only address (ram,0x0001f770) is written */
                    /* WARNING: Read-only address (ram,0x0001f780) is written */
  return;
}


