// game/update/moby410.cpp -- reconstructed from NPEA00385 EBOOT
// STATUS: NOT STARTED (raw Ghidra output)
// 3 functions, 0x366190-0x3667a0
#include "game/update/moby410.h"
#include "game/hero.h"
#include "game/mobyfunc.h"
#include "game/mobyutil.h"
#include "game/update/moby327.h"
#include "idol/fastfunc.h"

// 0x0366190 (0x454 bytes)
// inlined: FastAtan2 @0x366324, FastAtan2 @0x3664c4
void FUN_00366190(float param_1,f32 *param_2,float *param_3,undefined2 param_4)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  undefined2 uVar6;
  ulonglong *puVar7;
  float fVar8;
  int iVar9;
  int iVar10;
  ulonglong uVar11;
  MobyInstance *pMVar12;
  undefined8 uVar13;
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
  GPiece<16> auVar21;
  GPiece<16> auVar22;
  GPiece<16> auVar23;
  
  uVar11 = ZEXT48(&stack0x00000000);
  lVar15 = uVar11 - 0xe0;
  puVar7 = (ulonglong *)lVar15;
  *puVar7 = uVar11;
  puVar7[0x1e] = in_LR;
  puVar7[0x1b] = unaff_r31;
  puVar7[0x19] = unaff_r29;
  puVar7[0x18] = unaff_r28;
  puVar7[0x1a] = unaff_r30;
  pMVar12 = CreateMoby(ROCKET_0029);
  if (pMVar12 != (MobyInstance *)0x0) {
    pMVar12->updateDistance = -1;
    pMVar12->drawDistance = 0xff;
    pMVar12->enabled = '\x01';
    uVar13 = *(undefined8 *)((int)param_1 + 0x38);
    pMVar12->state = '\0';
    pMVar12->color = (int)((ulonglong)uVar13 >> 0x20);
    pMVar12->light = (int)uVar13;
    pfVar18 = (float *)pMVar12->pVar;
    auVar21 = ZEXT416(0xffffffff);
    auVar21 = auVar21 | auVar21 << 0x20 | auVar21 << 0x40 | auVar21 << 0x60;
    auVar22 = vectorShiftLeftIntegerWord(auVar21,auVar21);
    pMVar12->scale = pMVar12->scale * 3.0;
    (pMVar12->pos).x = *param_2;
    (pMVar12->pos).y = param_2[1];
    (pMVar12->pos).z = param_2[2];
    (pMVar12->pos).w = param_2[3];
    *pfVar18 = *param_3;
    pfVar18[1] = param_3[1];
    pfVar18[2] = param_3[2];
    pfVar18[3] = param_3[3];
    auVar21 = loadVectorLeftIndexed(4,0x366180);
    auVar23 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
    auVar21 = auVar21 >> 0x60 & (GPiece<16>)0xffffffff;
    auVar21 = vectorMultiplyAddFloatingPoint
                        (auVar23,auVar21 | auVar21 << 0x20 | auVar21 << 0x40 | auVar21 << 0x60,
                         auVar22);
    auVar21 = vectorConvertToSignedFixedPointWordSaturate(auVar21,0);
    auVar21 = vectorSplatHalfWord(auVar21,1);
    uVar6 = storeVectorElementHalfWordIndexed(auVar21,0x10,ZEXT48(pfVar18));
    *(undefined2 *)(pfVar18 + 4) = uVar6;
    *(undefined2 *)((int)pfVar18 + 0x12) = param_4;
    pfVar18[5] = param_1;
    fVar4 = *param_3;
    fVar5 = param_3[1];
    fVar2 = ABS(*param_3);
    fVar8 = ABS(param_3[1]);
    *(float *)(puVar7 + 0xf) = fVar2 - fVar8;
    fVar1 = 0.0;
    uVar16 = (ulonglong)((uint)fVar4 >> 0x1c) & 8 |
             (ulonglong)(*(uint *)(puVar7 + 0xf) >> 0x1e) & 2 | (ulonglong)((uint)fVar5 >> 0x1d) & 4
    ;
    fVar4 = fVar2;
    if (*(float *)(puVar7 + 0xf) - 0.0 < 0.0) {
      fVar4 = fVar8;
    }
    fVar3 = *(float *)(&g_atanQuadrantTable + (int)(uVar16 << 2));
    fVar5 = *(float *)(((uint)(uVar16 << 2) | 0x735900) + 4);
    if (*(float *)(puVar7 + 0xf) - 0.0 < 0.0) {
      fVar8 = fVar2;
    }
    fVar2 = fVar1;
    if (0.0 < fVar4) {
      lVar14 = uVar11 - 0xd0;
      lVar17 = uVar11 - 0x44;
      lVar19 = uVar11 - 0x34;
      lVar20 = 2;
      fVar4 = (fVar8 - fVar4) / (fVar8 + fVar4);
      fVar2 = fVar4 * fVar4;
      *(float *)(puVar7 + 0x15) = fVar4;
      *(float *)(puVar7 + 0x14) = fVar4;
      *(float *)((int)puVar7 + 0xa4) = fVar4;
      *(float *)((int)puVar7 + 0x9c) = fVar4;
      fVar4 = fVar2 * fVar2;
      *(float *)(puVar7 + 0x14) = *(float *)(puVar7 + 0x14) * fVar2;
      *(float *)((int)puVar7 + 0xa4) = *(float *)((int)puVar7 + 0xa4) * fVar4;
      *(float *)(puVar7 + 0x15) = *(float *)(puVar7 + 0x15) * fVar4 * fVar2;
      do {
        *(float *)((int)lVar14 + 0x9c) = *(float *)((int)lVar14 + 0x8c) * fVar4 * fVar4;
        iVar9 = (int)lVar17;
        lVar14 = lVar14 + 8;
        lVar17 = lVar17 + 8;
        *(float *)((int)lVar19 + 4) = *(float *)(iVar9 + 4) * fVar4 * fVar4;
        lVar19 = lVar19 + 8;
        lVar20 = lVar20 + -1;
      } while (lVar20 != 0);
      lVar19 = uVar11 - 0x44;
      pfVar18 = (float *)&DAT_007358e0;
      lVar20 = 4;
      lVar14 = lVar15;
      lVar17 = lVar19;
      do {
        fVar4 = *pfVar18;
        fVar2 = pfVar18[1];
        pfVar18 = pfVar18 + 2;
        *(float *)((int)lVar14 + 0x9c) = *(float *)((int)lVar14 + 0x9c) * fVar4;
        lVar14 = lVar14 + 8;
        *(float *)((int)lVar17 + 4) = *(float *)((int)lVar17 + 4) * fVar2;
        lVar17 = lVar17 + 8;
        lVar20 = lVar20 + -1;
      } while (lVar20 != 0);
      lVar17 = 2;
      lVar14 = lVar15;
      fVar4 = fVar1;
      do {
        iVar9 = (int)lVar14;
        lVar14 = lVar14 + 0x10;
        iVar10 = (int)lVar19;
        lVar19 = lVar19 + 0x10;
        fVar4 = fVar4 + *(float *)(iVar9 + 0x9c) + *(float *)(iVar10 + 4) + *(float *)(iVar10 + 8) +
                *(float *)(iVar10 + 0xc);
        lVar17 = lVar17 + -1;
      } while (lVar17 != 0);
      fVar2 = (fVar4 + 0.7853982) * fVar3 + fVar5;
    }
    (pMVar12->rotation).z = fVar2;
    fVar4 = param_3[2];
    fVar2 = ABS(param_3[2]);
    fVar5 = SQRT(*param_3 * *param_3 + param_3[1] * param_3[1]);
    fVar8 = ABS(fVar5);
    *(float *)(puVar7 + 0xe) = fVar5;
    *(float *)((int)puVar7 + 0x74) = fVar8 - fVar2;
    uVar16 = (ulonglong)(*(uint *)(puVar7 + 0xe) >> 0x1c) & 8 |
             (ulonglong)(*(uint *)((int)puVar7 + 0x74) >> 0x1e) & 2 |
             (ulonglong)((uint)fVar4 >> 0x1d) & 4;
    fVar4 = *(float *)(&g_atanQuadrantTable + (int)(uVar16 << 2));
    fVar5 = ABS(*(float *)(puVar7 + 0xe));
    if (*(float *)((int)puVar7 + 0x74) - 0.0 < 0.0) {
      fVar5 = fVar2;
    }
    fVar3 = *(float *)(((uint)(uVar16 << 2) | 0x735900) + 4);
    if (*(float *)((int)puVar7 + 0x74) - 0.0 < 0.0) {
      fVar2 = fVar8;
    }
    if (0.0 < fVar5) {
      lVar14 = uVar11 - 0xd0;
      lVar17 = uVar11 - 100;
      lVar19 = uVar11 - 0x54;
      lVar20 = 2;
      fVar5 = (fVar2 - fVar5) / (fVar2 + fVar5);
      fVar2 = fVar5 * fVar5;
      *(float *)(puVar7 + 0x11) = fVar5;
      *(float *)(puVar7 + 0x10) = fVar5;
      *(float *)((int)puVar7 + 0x84) = fVar5;
      *(float *)((int)puVar7 + 0x7c) = fVar5;
      fVar5 = fVar2 * fVar2;
      *(float *)(puVar7 + 0x10) = *(float *)(puVar7 + 0x10) * fVar2;
      *(float *)((int)puVar7 + 0x84) = *(float *)((int)puVar7 + 0x84) * fVar5;
      *(float *)(puVar7 + 0x11) = *(float *)(puVar7 + 0x11) * fVar5 * fVar2;
      do {
        *(float *)((int)lVar14 + 0x7c) = *(float *)((int)lVar14 + 0x6c) * fVar5 * fVar5;
        iVar9 = (int)lVar17;
        lVar14 = lVar14 + 8;
        lVar17 = lVar17 + 8;
        *(float *)((int)lVar19 + 4) = *(float *)(iVar9 + 4) * fVar5 * fVar5;
        lVar19 = lVar19 + 8;
        lVar20 = lVar20 + -1;
      } while (lVar20 != 0);
      lVar19 = uVar11 - 100;
      pfVar18 = (float *)&DAT_007358e0;
      lVar20 = 4;
      lVar14 = lVar15;
      lVar17 = lVar19;
      do {
        fVar5 = *pfVar18;
        fVar2 = pfVar18[1];
        pfVar18 = pfVar18 + 2;
        *(float *)((int)lVar14 + 0x7c) = *(float *)((int)lVar14 + 0x7c) * fVar5;
        lVar14 = lVar14 + 8;
        *(float *)((int)lVar17 + 4) = *(float *)((int)lVar17 + 4) * fVar2;
        lVar17 = lVar17 + 8;
        lVar20 = lVar20 + -1;
      } while (lVar20 != 0);
      lVar14 = 2;
      do {
        iVar9 = (int)lVar15;
        iVar10 = (int)lVar19;
        lVar15 = lVar15 + 0x10;
        lVar19 = lVar19 + 0x10;
        fVar1 = fVar1 + *(float *)(iVar9 + 0x7c) + *(float *)(iVar10 + 4) + *(float *)(iVar10 + 8) +
                *(float *)(iVar10 + 0xc);
        lVar14 = lVar14 + -1;
      } while (lVar14 != 0);
      fVar1 = (fVar1 + 0.7853982) * fVar4 + fVar3;
    }
    (pMVar12->rotation).y = -fVar1;
  }
  return;
}


// 0x03665e4 (0x14 bytes)
void M410_003665e4(void)

{
  DAT_00840c4c = 0x10000;
  return;
}


// 0x0366628 (0x178 bytes)
/* Moby 410 */

void UpdateMoby_410(MobyInstance *moby)

{
  float fVar1;
  float *pfVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  double dVar6;
  
  if ((moby != (MobyInstance *)0x0) && (pfVar2 = (float *)moby->pVar, pfVar2 != (float *)0x0)) {
    dVar6 = (double)FUN_00342d38((longlong)(int)moby + 0x10);
    fVar1 = pfVar2[1];
    fVar3 = (moby->pos).z + fVar1;
    if (fVar3 - (float)(dVar6 + (double)*pfVar2) < 0.0) {
      fVar1 = ((float)(dVar6 + (double)*pfVar2) - fVar3) * 0.2 + fVar1;
    }
    fVar1 = -(g_FrameTimeSq * 9.8 - fVar1);
    pfVar2[1] = fVar1;
    (moby->pos).z = (moby->pos).z + fVar1;
    dVar6 = (double)FastWrapRot(pfVar2[2],0.01);
    pfVar2[2] = (float)dVar6;
    dVar6 = (double)FastWrapRot((float)dVar6,0.017);
    fVar1 = pfVar2[2];
    fVar3 = 3.1415925 - fVar1;
    if (fVar1 - (3.1415925 - fVar1) < 0.0) {
      fVar3 = fVar1;
    }
    fVar4 = -3.1415925 - fVar1;
    if ((-3.1415925 - fVar1) - fVar3 < 0.0) {
      fVar4 = fVar3;
    }
    pfVar2[3] = (float)dVar6;
    fVar1 = fVar4 * fVar4;
    fVar3 = fVar1 * fVar1 * fVar4;
    fVar5 = fVar1 * fVar3;
    (moby->rotation).x =
         (fVar1 * fVar5 * 2.601887e-06 +
         fVar5 * -0.0001980741 + fVar3 * 0.0083330255 + fVar1 * fVar4 * -0.16666657 + fVar4) * 0.15;
    fVar1 = pfVar2[3];
    fVar3 = 3.1415925 - fVar1;
    if (fVar1 - (3.1415925 - fVar1) < 0.0) {
      fVar3 = fVar1;
    }
    fVar4 = -3.1415925 - fVar1;
    if ((-3.1415925 - fVar1) - fVar3 < 0.0) {
      fVar4 = fVar3;
    }
    fVar1 = fVar4 * fVar4;
    fVar3 = fVar1 * fVar1 * fVar4;
    fVar5 = fVar1 * fVar3;
    (moby->rotation).y =
         (fVar1 * fVar5 * 2.601887e-06 +
         fVar5 * -0.0001980741 + fVar3 * 0.0083330255 + fVar1 * fVar4 * -0.16666657 + fVar4) * 0.15;
  }
  return;
}


