// game/update/moby1292.cpp -- reconstructed from NPEA00385 EBOOT
// STATUS: NOT STARTED (raw Ghidra output)
// 3 functions, 0x23e6bc-0x23efc4
#include "game/update/moby1292.h"
#include "game/collproc.h"
#include "game/hero.h"
#include "game/lights.h"
#include "game/main.h"
#include "game/mobyfunc.h"
#include "game/mobyproc.h"
#include "game/mobyutil.h"
#include "game/partupd.h"
#include "idol/fastfunc.h"

// 0x023e6bc (0x14 bytes)
void M1292_0023e6bc(void)

{
  DAT_0078df28 = 0x10000;
  return;
}


// 0x023e6e0 (0x494 bytes)
// inlined: FastAtan2 @0x23e894, FastAtan2 @0x23ea34
MobyInstance *
FUN_0023e6e0(float *param_1,f32 *param_2,float param_3,float param_4,undefined4 param_5,
            float param_6)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  undefined4 uVar7;
  ulonglong *puVar8;
  int iVar9;
  int iVar10;
  undefined8 uVar11;
  ulonglong uVar12;
  MobyInstance *pMVar15;
  longlong lVar13;
  longlong lVar14;
  longlong lVar16;
  float *pfVar17;
  float *pfVar19;
  longlong lVar18;
  ulonglong uVar20;
  ulonglong unaff_r26;
  ulonglong unaff_r27;
  ulonglong unaff_r28;
  ulonglong unaff_r29;
  ulonglong unaff_r30;
  ulonglong unaff_r31;
  ulonglong in_LR;
  longlong lVar21;
  GPiece<16> auVar22;
  GPiece<16> auVar23;
  GPiece<16> auVar24;
  
  uVar12 = ZEXT48(&stack0x00000000);
  lVar14 = uVar12 - 0x110;
  puVar8 = (ulonglong *)lVar14;
  *puVar8 = uVar12;
  puVar8[0x24] = in_LR;
  puVar8[0x21] = unaff_r31;
  *(undefined4 *)(puVar8 + 0x18) = param_5;
  uVar11 = 0xc0;
  *(undefined4 *)((int)puVar8 + 0xc4) = param_5;
  puVar8[0x1d] = unaff_r27;
  *(undefined4 *)(puVar8 + 0x19) = param_5;
  puVar8[0x1f] = unaff_r29;
  puVar8[0x1e] = unaff_r28;
  *(undefined4 *)((int)puVar8 + 0xcc) = param_5;
  puVar8[0x20] = unaff_r30;
  puVar8[0x1c] = unaff_r26;
  auVar24 = *(undefined1 (*) [16])(puVar8 + 0x18);
  pMVar15 = CreateMoby(0x50c);
  if (pMVar15 != (MobyInstance *)0x0) {
    auVar22 = vectorConvertFromSignedFixedPointWord(auVar24,0);
    pMVar15->updateDistance = -1;
    pMVar15->drawDistance = 0x7e;
    pMVar15->enabled = '\x01';
    pMVar15->state = '\x01';
    pfVar17 = (float *)pMVar15->pVar;
    (pMVar15->pos).x = *param_2;
    (pMVar15->pos).y = param_2[1];
    auVar24 = ZEXT416(0xffffffff);
    auVar23 = auVar24 | auVar24 << 0x20 | auVar24 << 0x40 | auVar24 << 0x60;
    (pMVar15->pos).z = param_2[2];
    (pMVar15->pos).w = param_2[3];
    fVar5 = *param_1;
    fVar1 = *param_1;
    *pfVar17 = fVar1;
    fVar6 = param_1[1];
    fVar2 = param_1[1];
    fVar1 = ABS(fVar1);
    pfVar17[1] = fVar2;
    pfVar17[2] = param_1[2];
    pfVar17[3] = param_1[3];
    auVar24 = loadVectorLeftIndexed(uVar11,0x23e6d0);
    auVar24 = auVar24 >> 0x60 & (GPiece<16>)0xffffffff;
    fVar2 = ABS(fVar2);
    auVar24 = vectorAddFloatingPoint
                        (auVar22,auVar24 | auVar24 << 0x20 | auVar24 << 0x40 | auVar24 << 0x60);
    auVar22 = vectorShiftLeftIntegerWord(auVar23,auVar23);
    auVar23 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
    auVar24 = vectorMultiplyAddFloatingPoint(auVar23,auVar24,auVar22);
    auVar24 = vectorConvertToSignedFixedPointWordSaturate(auVar24,0);
    auVar24 = auVar24 >> 0x60 & (GPiece<16>)0xffffffff;
    uVar7 = storeVectorElementWordIndexed
                      (auVar24 | auVar24 << 0x20 | auVar24 << 0x40 | auVar24 << 0x60,0x18,
                       ZEXT48(pfVar17));
    *(undefined4 *)((uint)(pfVar17 + 6) & 0xfffffffc) = uVar7;
    pfVar17[4] = param_3;
    pfVar17[5] = param_4;
    fVar3 = 0.0;
    pfVar17[10] = 0.0;
    pfVar17[0xb] = param_6;
    *(float *)(puVar8 + 0xf) = fVar1 - fVar2;
    uVar20 = (ulonglong)((uint)fVar5 >> 0x1c) & 8 |
             (ulonglong)(*(uint *)(puVar8 + 0xf) >> 0x1e) & 2 | (ulonglong)((uint)fVar6 >> 0x1d) & 4
    ;
    fVar5 = *(float *)(&g_atanQuadrantTable + (int)(uVar20 << 2));
    fVar6 = fVar1;
    if (*(float *)(puVar8 + 0xf) - 0.0 < 0.0) {
      fVar6 = fVar2;
    }
    if (*(float *)(puVar8 + 0xf) - 0.0 < 0.0) {
      fVar2 = fVar1;
    }
    fVar1 = *(float *)(((uint)(uVar20 << 2) | 0x735900) + 4);
    fVar4 = fVar3;
    if (0.0 < fVar6) {
      lVar13 = uVar12 - 0x100;
      lVar16 = uVar12 - 0x74;
      lVar18 = uVar12 - 100;
      lVar21 = 2;
      fVar2 = (fVar2 - fVar6) / (fVar2 + fVar6);
      fVar6 = fVar2 * fVar2;
      *(float *)(puVar8 + 0x15) = fVar2;
      *(float *)(puVar8 + 0x14) = fVar2;
      *(float *)((int)puVar8 + 0xa4) = fVar2;
      *(float *)((int)puVar8 + 0x9c) = fVar2;
      fVar2 = fVar6 * fVar6;
      *(float *)(puVar8 + 0x14) = *(float *)(puVar8 + 0x14) * fVar6;
      *(float *)((int)puVar8 + 0xa4) = *(float *)((int)puVar8 + 0xa4) * fVar2;
      *(float *)(puVar8 + 0x15) = *(float *)(puVar8 + 0x15) * fVar2 * fVar6;
      do {
        *(float *)((int)lVar13 + 0x9c) = *(float *)((int)lVar13 + 0x8c) * fVar2 * fVar2;
        iVar9 = (int)lVar16;
        lVar13 = lVar13 + 8;
        lVar16 = lVar16 + 8;
        *(float *)((int)lVar18 + 4) = *(float *)(iVar9 + 4) * fVar2 * fVar2;
        lVar18 = lVar18 + 8;
        lVar21 = lVar21 + -1;
      } while (lVar21 != 0);
      lVar18 = uVar12 - 0x74;
      pfVar19 = (float *)&DAT_007358e0;
      lVar21 = 4;
      lVar13 = lVar14;
      lVar16 = lVar18;
      do {
        fVar2 = *pfVar19;
        fVar6 = pfVar19[1];
        pfVar19 = pfVar19 + 2;
        *(float *)((int)lVar13 + 0x9c) = *(float *)((int)lVar13 + 0x9c) * fVar2;
        lVar13 = lVar13 + 8;
        *(float *)((int)lVar16 + 4) = *(float *)((int)lVar16 + 4) * fVar6;
        lVar16 = lVar16 + 8;
        lVar21 = lVar21 + -1;
      } while (lVar21 != 0);
      lVar16 = 2;
      lVar13 = lVar14;
      fVar2 = fVar3;
      do {
        iVar9 = (int)lVar13;
        lVar13 = lVar13 + 0x10;
        iVar10 = (int)lVar18;
        lVar18 = lVar18 + 0x10;
        fVar2 = fVar2 + *(float *)(iVar9 + 0x9c) + *(float *)(iVar10 + 4) + *(float *)(iVar10 + 8) +
                *(float *)(iVar10 + 0xc);
        lVar16 = lVar16 + -1;
      } while (lVar16 != 0);
      fVar4 = (fVar2 + 0.7853982) * fVar5 + fVar1;
    }
    (pMVar15->rotation).z = fVar4;
    fVar1 = pfVar17[2];
    fVar5 = ABS(pfVar17[2]);
    fVar2 = SQRT(*pfVar17 * *pfVar17 + pfVar17[1] * pfVar17[1]);
    fVar6 = ABS(fVar2);
    *(float *)(puVar8 + 0xe) = fVar2;
    *(float *)((int)puVar8 + 0x74) = fVar6 - fVar5;
    uVar20 = (ulonglong)(*(uint *)(puVar8 + 0xe) >> 0x1c) & 8 |
             (ulonglong)(*(uint *)((int)puVar8 + 0x74) >> 0x1e) & 2 |
             (ulonglong)((uint)fVar1 >> 0x1d) & 4;
    fVar1 = *(float *)(&g_atanQuadrantTable + (int)(uVar20 << 2));
    fVar2 = ABS(*(float *)(puVar8 + 0xe));
    if (*(float *)((int)puVar8 + 0x74) - 0.0 < 0.0) {
      fVar2 = fVar5;
    }
    fVar4 = *(float *)(((uint)(uVar20 << 2) | 0x735900) + 4);
    if (*(float *)((int)puVar8 + 0x74) - 0.0 < 0.0) {
      fVar5 = fVar6;
    }
    if (0.0 < fVar2) {
      lVar13 = uVar12 - 0x100;
      lVar16 = uVar12 - 0x94;
      lVar18 = uVar12 - 0x84;
      lVar21 = 2;
      fVar2 = (fVar5 - fVar2) / (fVar5 + fVar2);
      fVar5 = fVar2 * fVar2;
      *(float *)(puVar8 + 0x11) = fVar2;
      *(float *)(puVar8 + 0x10) = fVar2;
      *(float *)((int)puVar8 + 0x84) = fVar2;
      *(float *)((int)puVar8 + 0x7c) = fVar2;
      fVar2 = fVar5 * fVar5;
      *(float *)(puVar8 + 0x10) = *(float *)(puVar8 + 0x10) * fVar5;
      *(float *)((int)puVar8 + 0x84) = *(float *)((int)puVar8 + 0x84) * fVar2;
      *(float *)(puVar8 + 0x11) = *(float *)(puVar8 + 0x11) * fVar2 * fVar5;
      do {
        *(float *)((int)lVar13 + 0x7c) = *(float *)((int)lVar13 + 0x6c) * fVar2 * fVar2;
        iVar9 = (int)lVar16;
        lVar13 = lVar13 + 8;
        lVar16 = lVar16 + 8;
        *(float *)((int)lVar18 + 4) = *(float *)(iVar9 + 4) * fVar2 * fVar2;
        lVar18 = lVar18 + 8;
        lVar21 = lVar21 + -1;
      } while (lVar21 != 0);
      lVar18 = uVar12 - 0x94;
      pfVar17 = (float *)&DAT_007358e0;
      lVar21 = 4;
      lVar13 = lVar14;
      lVar16 = lVar18;
      do {
        fVar2 = *pfVar17;
        fVar5 = pfVar17[1];
        pfVar17 = pfVar17 + 2;
        *(float *)((int)lVar13 + 0x7c) = *(float *)((int)lVar13 + 0x7c) * fVar2;
        lVar13 = lVar13 + 8;
        *(float *)((int)lVar16 + 4) = *(float *)((int)lVar16 + 4) * fVar5;
        lVar16 = lVar16 + 8;
        lVar21 = lVar21 + -1;
      } while (lVar21 != 0);
      lVar13 = 2;
      do {
        iVar9 = (int)lVar14;
        iVar10 = (int)lVar18;
        lVar14 = lVar14 + 0x10;
        lVar18 = lVar18 + 0x10;
        fVar3 = fVar3 + *(float *)(iVar9 + 0x7c) + *(float *)(iVar10 + 4) + *(float *)(iVar10 + 8) +
                *(float *)(iVar10 + 0xc);
        lVar13 = lVar13 + -1;
      } while (lVar13 != 0);
      fVar3 = (fVar3 + 0.7853982) * fVar1 + fVar4;
    }
    (pMVar15->rotation).y = -fVar3;
    UpdateMobyTransform(pMVar15);
  }
  return pMVar15;
}


// 0x023eb98 (0x42c bytes)
/* Moby 1292 */

void UpdateMoby_1292(MobyInstance *moby)

{
  byte bVar1;
  char cVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float *impact;
  float fVar6;
  longlong lVar7;
  int iVar8;
  double dVar9;
  GPiece<16> local_80;
  GPiece<16> local_70;
  GPiece<16> local_60;
  GPiece<32> auStack_50;
  
  lVar7 = (longlong)(int)moby;
  bVar1 = moby->state;
  impact = (float *)moby->pVar;
  if (bVar1 < 2) {
    if (bVar1 != 0) {
      fVar3 = (moby->pos).x;
      fVar4 = (moby->pos).y;
      fVar5 = (moby->pos).z;
      if (((impact[5] == 0.0) || (cVar2 = *(char *)((int)impact[5] + 0x20), cVar2 == -2)) ||
         (cVar2 == -3)) {
        moby->state = '\x02';
      }
      if (((int)(FLOAT_ORDER(g_PerfLoad)) < 0x3f666666) &&
         ((int)(FLOAT_ORDER(g_FrameLoad)) < 0x3f666666)) {
        MB_randRangeFloat(0.95,0.985);
        FastVecAddSelf(auStack_50,local_60,lVar7 + 0x10);
        iVar8 = MB_randRange(0xf,0x14);
        dVar9 = 0.5;
        fVar3 = animationSpeed * (float)((double)(longlong)iVar8 + 0.5);
        iVar8 = MB_randRange(7,10);
        SpawnPart_4
                  (local_60,local_70,0x6f00afff,0xff,(int)fVar3,0x28,
                   (int)(animationSpeed * (float)((double)(longlong)iVar8 + dVar9)),1);
        fVar3 = (moby->pos).x;
        fVar4 = (moby->pos).y;
        fVar5 = (moby->pos).z;
      }
      fVar6 = impact[4];
      (moby->pos).x = fVar3 + *impact;
      (moby->pos).y = fVar4 + impact[1];
      (moby->pos).z = fVar5 + impact[2];
      iVar8 = CollLine(lVar7 + 0x10,local_80,0x10,fVar6,0);
      if ((iVar8 != 0) && (g_CollOutput.pMoby != (MobyInstance *)impact[4])) {
        if (g_CollOutput.pMoby != (MobyInstance *)0x0) {
          CollDamageMobyDirect
                    (1.0,g_CollOutput.pMoby,moby,0x10001,0x10000,&g_CollOutput.ip.x,impact);
        }
        moby->state = '\x02';
      }
      iVar8 = FastDecTimerS32(impact + 6);
      if (iVar8 != 0) {
        moby->state = '\x02';
      }
    }
  }
  else if (bVar1 < 3) {
    if ((((int)(FLOAT_ORDER(g_PerfLoad)) < 0x3f59999a) &&
        ((int)(FLOAT_ORDER(g_FrameLoad)
              ) < 0x3f59999a)) || (impact[0xb] == 1.4013e-45)) {
      MB_SpawnExplosionSparks
                (0x3fd0000000000000,0x402a000000000000,lVar7,lVar7 + 0x10,&DAT_0023eb74,
                 0xffffffffffffffff);
    }
    else {
      MB_SpawnExplosionSparks
                (0x3fd0000000000000,0,lVar7,lVar7 + 0x10,&DAT_0023eb74,0xffffffffffffffff);
    }
    DeleteMoby(moby);
  }
  return;
}


