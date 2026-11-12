// game/update/moby457.cpp -- reconstructed from NPEA00385 EBOOT
// STATUS: NOT STARTED (raw Ghidra output)
// 4 functions, 0x38c84c-0x38e938
#include <stdlib.h>
#include "game/update/moby457.h"
#include "game/collproc.h"
#include "game/hero.h"
#include "game/mobyfunc.h"
#include "game/mobyproc.h"
#include "game/mobyutil.h"
#include "game/partupd.h"
#include "game/sound.h"
#include "game/update/moby121.h"
#include "idol/fastfunc.h"

// 0x038c84c (0x14 bytes)
void M457_0038c84c(void)

{
  DAT_00842180 = 0x10000;
  return;
}


// 0x038c8a0 (0x440 bytes)
MobyInstance *
FUN_0038c8a0(double param_1,double param_2,double param_3,f32 param_4,f32 *param_5,
            MobyInstance *param_6)

{
  f32 fVar1;
  float fVar2;
  f32 *pfVar3;
  undefined4 uVar4;
  MobyInstance *pMoby;
  int iVar5;
  double dVar6;
  double dVar7;
  undefined8 uVar8;
  double dVar9;
  GPiece<16> auVar10;
  GPiece<16> auVar11;
  GPiece<16> auVar12;
  float afStack_80 [4];
  GPiece<16> local_70;
  GPiece<24> local_60;
  
  pMoby = CreateMoby(ROCKET_01C9);
  if (pMoby != (MobyInstance *)0x0) {
    pfVar3 = (f32 *)pMoby->pVar;
    pMoby->updateDistance = -1;
    pMoby->drawDistance = 0xff;
    pMoby->enabled = '\x01';
    pMoby->state = '\0';
    (pMoby->rotation).z = (float)param_2;
    (pMoby->rotation).y = (float)param_3;
    pfVar3[8] = param_4;
    (pMoby->pos).x = *param_5;
    (pMoby->pos).y = param_5[1];
    (pMoby->pos).z = param_5[2];
    (pMoby->pos).w = param_5[3];
    pfVar3[4] = *param_5;
    pfVar3[5] = param_5[1];
    pfVar3[6] = param_5[2];
    pfVar3[7] = param_5[3];
    uVar8 = 0;
    pfVar3[0xd] = 0.0;
    pfVar3[0xe] = 0.0;
    pfVar3[0xc] = 0.0;
    pfVar3[10] = (f32)param_6;
    pMoby->scale = pMoby->pClass->gScale * 0.25;
    if (param_6 != (MobyInstance *)0x0) {
      pfVar3[0x16] = (f32)(int)(short)param_6->oClass;
      iVar5 = MB_GetPvarsIfMobyHasThem(param_6);
      fVar1 = (param_6->pos).x;
      if (iVar5 != 0) {
        *(ushort *)(iVar5 + 0x1e) = *(ushort *)(iVar5 + 0x1e) | 0x80;
      }
      *pfVar3 = fVar1;
      pfVar3[1] = (param_6->pos).y;
      fVar2 = (param_6->pos).z;
      pfVar3[2] = fVar2;
      fVar1 = (param_6->pos).w;
      pfVar3[0xb] = (float)param_1;
      pfVar3[3] = fVar1;
      pfVar3[2] = (float)((double)fVar2 + param_1);
    }
    auVar10 = ZEXT416(0xffffffff);
    auVar10 = auVar10 | auVar10 << 0x20 | auVar10 << 0x40 | auVar10 << 0x60;
    auVar11 = vectorShiftLeftIntegerWord(auVar10,auVar10);
    auVar10 = loadVectorLeftIndexed(8,0x38c860);
    auVar10 = auVar10 >> 0x60 & (GPiece<16>)0xffffffff;
    auVar12 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
    auVar10 = vectorMultiplyAddFloatingPoint
                        (auVar12,auVar10 | auVar10 << 0x20 | auVar10 << 0x40 | auVar10 << 0x60,
                         auVar11);
    auVar10 = vectorConvertToSignedFixedPointWordSaturate(auVar10,0);
    auVar10 = auVar10 >> 0x60 & (GPiece<16>)0xffffffff;
    uVar4 = storeVectorElementWordIndexed
                      (auVar10 | auVar10 << 0x20 | auVar10 << 0x40 | auVar10 << 0x60,0x24,
                       ZEXT48(pfVar3));
    *(undefined4 *)((uint)(pfVar3 + 9) & 0xfffffffc) = uVar4;
    pfVar3[0x11] = 0.0;
    dVar9 = -3.1415927410125732;
    dVar7 = 3.1415927410125732;
    dVar6 = (double)MB_randRangeFloat(-3.1415927,3.1415927);
    pfVar3[0x12] = (float)dVar6;
    dVar6 = (double)MB_randRangeFloat((float)dVar9,(float)dVar7);
    pfVar3[0x13] = (float)dVar6;
    dVar6 = (double)MB_randRangeFloat(DAT_0071f408 * -0.00967,DAT_0071f408 * 0.00967);
    pfVar3[0x14] = (float)dVar6;
    dVar6 = (double)MB_randRangeFloat(DAT_0071f408 * -0.02406,DAT_0071f408 * 0.02406);
    pfVar3[0x15] = (float)dVar6;
    UpdateMobyTransform(pMoby);
    PlayMobySound(1,0,pMoby);
    iVar5 = CollLine(local_70,param_5,0,g_heroMobyPtr,0);
    if (iVar5 != 0) {
      pMoby->setByGroup = '\x02';
      (pMoby->pos).x = g_CollOutput.ip.x;
      (pMoby->pos).y = g_CollOutput.ip.y;
      (pMoby->pos).z = g_CollOutput.ip.z;
      fVar2 = (pMoby->rotation).z;
      (pMoby->pos).w = g_CollOutput.ip.w;
      MB_SphericalToVector(pfVar3[0xc],fVar2,-(pMoby->rotation).y,afStack_80);
      FastVecReflect(local_60,afStack_80,0xa10980);
      MB_genericExplosion
                (uVar8,uVar8,0x4010000000000000,0x4000000000000000,0x4022000000000000,
                 0x3ff0000000000000,0x402e000000000000,pMoby,local_60,0,&DAT_0038c860,
                 0xffffffffffffffff,10,3,9);
      DeleteMoby(pMoby);
      pMoby = (MobyInstance *)0x0;
    }
  }
  return pMoby;
}


// 0x038ccf0 (0x55c bytes)
// inlined: FastAtan2 @0x38cecc, FastAtan2 @0x38d08c
// strings: 0038cce0: 'Nnk(' (raw)

MobyInstance *
M457_0038ccf0
          (double param_1,double param_2,double param_3,float *param_4,int param_5)

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
  int iVar9;
  float fVar10;
  ulonglong uVar11;
  int *piVar13;
  longlong lVar12;
  float *pfVar15;
  longlong lVar14;
  ulonglong uVar16;
  longlong lVar17;
  ulonglong unaff_r27;
  ulonglong unaff_r28;
  ulonglong unaff_r29;
  MobyInstance *pMVar18;
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
  double dVar24;
  ulonglong in_f23;
  double dVar25;
  ulonglong in_f24;
  ulonglong in_f25;
  double dVar26;
  ulonglong in_f26;
  double dVar27;
  ulonglong in_f27;
  double dVar28;
  ulonglong in_f28;
  double dVar29;
  ulonglong in_f29;
  ulonglong in_f30;
  ulonglong in_f31;
  
  uVar11 = ZEXT48(&stack0x00000000);
  lVar1 = uVar11 - 0x150;
  puVar7 = (ulonglong *)lVar1;
  *puVar7 = uVar11;
  puVar7[0x2c] = in_LR;
  puVar7[0x1f] = in_f21;
  puVar7[0x20] = in_f22;
  puVar7[0x21] = in_f23;
  puVar7[0x22] = in_f24;
  puVar7[0x23] = in_f25;
  puVar7[0x24] = in_f26;
  puVar7[0x25] = in_f27;
  puVar7[0x26] = in_f28;
  puVar7[0x27] = in_f29;
  puVar7[0x28] = in_f30;
  puVar7[0x29] = in_f31;
  puVar7[0x1c] = unaff_r29;
  pMVar18 = (MobyInstance *)0x0;
  puVar7[0x1e] = unaff_r31;
  puVar7[0x1b] = unaff_r28;
  puVar7[0x1d] = unaff_r30;
  moby = MobyUpdateChainStart;
  puVar7[0x1a] = unaff_r27;
  dVar29 = 1000000000.0;
  for (; moby != (MobyInstance *)0x0; moby = (MobyInstance *)moby->pChain) {
    if (((((moby->drawDistance != 0) &&
          (piVar13 = (int *)MB_GetPvarsIfMobyHasThem(moby),
          (moby->modeBits & CAN_BE_AUTO_TARGETED) != NONE)) && (moby->pClass != (MobyClass *)0x0))
        && (((short)moby->pClass->mode_bits == 5 && (piVar13 != (int *)0x0)))) &&
       (dVar25 = 0.0, 0 < *piVar13)) {
      dVar23 = (double)(moby->pos).y;
      fVar2 = (float)((double)param_4[1] - dVar23);
      dVar24 = (double)(moby->pos).x;
      fVar3 = (float)((double)*param_4 - dVar24);
      dVar28 = (double)SQRT(fVar3 * fVar3 + fVar2 * fVar2);
      if (dVar28 < param_3) {
        fVar2 = (float)(dVar24 - (double)*param_4);
        fVar3 = (float)(dVar23 - (double)param_4[1]);
        fVar4 = (moby->pos).z;
        fVar5 = ABS(fVar2);
        fVar6 = ABS(fVar3);
        *(float *)((int)puVar7 + 0x7c) = fVar2;
        *(float *)(puVar7 + 0x10) = fVar3;
        fVar2 = *(float *)(param_5 + 8);
        dVar27 = (double)(fVar4 + 0.4);
        *(float *)((int)puVar7 + 0x84) = fVar5 - fVar6;
        dVar26 = 0.7853981852531433;
        uVar16 = (ulonglong)(*(uint *)((int)puVar7 + 0x7c) >> 0x1c) & 8 |
                 (ulonglong)(*(uint *)((int)puVar7 + 0x84) >> 0x1e) & 2 |
                 (ulonglong)(*(uint *)(puVar7 + 0x10) >> 0x1d) & 4;
        fVar3 = ABS(*(float *)((int)puVar7 + 0x7c));
        if (*(float *)((int)puVar7 + 0x84) - 0.0 < 0.0) {
          fVar3 = fVar6;
        }
        fVar6 = *(float *)(&g_atanQuadrantTable + (int)(uVar16 << 2));
        fVar4 = *(float *)(((uint)(uVar16 << 2) | 0x735900) + 4);
        fVar10 = ABS(*(float *)(puVar7 + 0x10));
        if (*(float *)((int)puVar7 + 0x84) - 0.0 < 0.0) {
          fVar10 = fVar5;
        }
        dVar20 = dVar25;
        if (0.0 < fVar3) {
          lVar12 = uVar11 - 0x140;
          lVar14 = uVar11 - 0xa8;
          lVar17 = uVar11 - 0x98;
          lVar19 = 2;
          fVar3 = (fVar10 - fVar3) / (fVar10 + fVar3);
          fVar5 = fVar3 * fVar3;
          *(float *)((int)puVar7 + 0xb4) = fVar3;
          *(float *)((int)puVar7 + 0xac) = fVar3;
          *(float *)(puVar7 + 0x16) = fVar3;
          *(float *)(puVar7 + 0x15) = fVar3;
          fVar3 = fVar5 * fVar5;
          *(float *)((int)puVar7 + 0xac) = *(float *)((int)puVar7 + 0xac) * fVar5;
          *(float *)(puVar7 + 0x16) = *(float *)(puVar7 + 0x16) * fVar3;
          *(float *)((int)puVar7 + 0xb4) = *(float *)((int)puVar7 + 0xb4) * fVar3 * fVar5;
          do {
            *(float *)((int)lVar12 + 0xa8) = *(float *)((int)lVar12 + 0x98) * fVar3 * fVar3;
            iVar8 = (int)lVar14;
            lVar12 = lVar12 + 8;
            lVar14 = lVar14 + 8;
            *(float *)((int)lVar17 + 4) = *(float *)(iVar8 + 4) * fVar3 * fVar3;
            lVar17 = lVar17 + 8;
            lVar19 = lVar19 + -1;
          } while (lVar19 != 0);
          lVar17 = uVar11 - 0xa8;
          pfVar15 = (float *)&DAT_007358e0;
          lVar19 = 4;
          lVar12 = lVar1;
          lVar14 = lVar17;
          do {
            fVar3 = *pfVar15;
            fVar5 = pfVar15[1];
            pfVar15 = pfVar15 + 2;
            *(float *)((int)lVar12 + 0xa8) = *(float *)((int)lVar12 + 0xa8) * fVar3;
            lVar12 = lVar12 + 8;
            *(float *)((int)lVar14 + 4) = *(float *)((int)lVar14 + 4) * fVar5;
            lVar14 = lVar14 + 8;
            lVar19 = lVar19 + -1;
          } while (lVar19 != 0);
          lVar14 = 2;
          lVar12 = lVar1;
          do {
            iVar8 = (int)lVar12;
            lVar12 = lVar12 + 0x10;
            iVar9 = (int)lVar17;
            lVar17 = lVar17 + 0x10;
            dVar20 = (double)((float)(dVar20 + (double)*(float *)(iVar8 + 0xa8)) +
                              *(float *)(iVar9 + 4) + *(float *)(iVar9 + 8) +
                             *(float *)(iVar9 + 0xc));
            lVar14 = lVar14 + -1;
          } while (lVar14 != 0);
          dVar20 = (double)((float)(dVar20 + 0.7853981852531433) * fVar6 + fVar4);
        }
        dVar20 = (double)FastSubRots(fVar2,(float)dVar20);
        dVar20 = (double)(float)(dVar20 * dVar20);
        fVar2 = *(float *)(param_5 + 4);
        if (dVar20 < (double)(float)(param_1 * param_1)) {
          fVar3 = param_4[2];
          *(float *)(puVar7 + 0xe) = (float)dVar28;
          dVar21 = ABS((double)(float)(dVar27 - (double)fVar3));
          *(float *)((int)puVar7 + 0x74) = (float)(dVar27 - (double)fVar3);
          *(float *)(puVar7 + 0xf) = (float)(ABS(dVar28) - dVar21);
          uVar16 = (ulonglong)(*(uint *)(puVar7 + 0xe) >> 0x1c) & 8 |
                   (ulonglong)(*(uint *)(puVar7 + 0xf) >> 0x1e) & 2 |
                   (ulonglong)(*(uint *)((int)puVar7 + 0x74) >> 0x1d) & 4;
          dVar22 = ABS((double)*(float *)(puVar7 + 0xe));
          if ((double)*(float *)(puVar7 + 0xf) - dVar25 < 0.0) {
            dVar22 = dVar21;
          }
          fVar3 = *(float *)(&g_atanQuadrantTable + (int)(uVar16 << 2));
          dVar21 = ABS((double)*(float *)((int)puVar7 + 0x74));
          if ((double)*(float *)(puVar7 + 0xf) - dVar25 < 0.0) {
            dVar21 = ABS(dVar28);
          }
          fVar4 = *(float *)(((uint)(uVar16 << 2) | 0x735900) + 4);
          if (dVar25 < dVar22) {
            lVar12 = uVar11 - 0x140;
            lVar14 = uVar11 - 200;
            lVar17 = uVar11 - 0xb8;
            lVar19 = 2;
            fVar6 = (float)(dVar21 - dVar22) / (float)(dVar21 + dVar22);
            fVar5 = fVar6 * fVar6;
            *(float *)((int)puVar7 + 0x94) = fVar6;
            *(float *)((int)puVar7 + 0x8c) = fVar6;
            *(float *)(puVar7 + 0x12) = fVar6;
            *(float *)(puVar7 + 0x11) = fVar6;
            fVar6 = fVar5 * fVar5;
            *(float *)((int)puVar7 + 0x8c) = *(float *)((int)puVar7 + 0x8c) * fVar5;
            *(float *)(puVar7 + 0x12) = *(float *)(puVar7 + 0x12) * fVar6;
            *(float *)((int)puVar7 + 0x94) = *(float *)((int)puVar7 + 0x94) * fVar6 * fVar5;
            do {
              *(float *)((int)lVar12 + 0x88) = *(float *)((int)lVar12 + 0x78) * fVar6 * fVar6;
              iVar8 = (int)lVar14;
              lVar12 = lVar12 + 8;
              lVar14 = lVar14 + 8;
              *(float *)((int)lVar17 + 4) = *(float *)(iVar8 + 4) * fVar6 * fVar6;
              lVar17 = lVar17 + 8;
              lVar19 = lVar19 + -1;
            } while (lVar19 != 0);
            lVar17 = uVar11 - 200;
            pfVar15 = (float *)&DAT_007358e0;
            lVar19 = 4;
            lVar12 = lVar1;
            lVar14 = lVar17;
            do {
              fVar6 = *pfVar15;
              fVar5 = pfVar15[1];
              pfVar15 = pfVar15 + 2;
              *(float *)((int)lVar12 + 0x88) = *(float *)((int)lVar12 + 0x88) * fVar6;
              lVar12 = lVar12 + 8;
              *(float *)((int)lVar14 + 4) = *(float *)((int)lVar14 + 4) * fVar5;
              lVar14 = lVar14 + 8;
              lVar19 = lVar19 + -1;
            } while (lVar19 != 0);
            lVar14 = 2;
            lVar12 = lVar1;
            do {
              iVar8 = (int)lVar12;
              iVar9 = (int)lVar17;
              lVar12 = lVar12 + 0x10;
              lVar17 = lVar17 + 0x10;
              dVar25 = (double)((float)(dVar25 + (double)*(float *)(iVar8 + 0x88)) +
                                *(float *)(iVar9 + 4) + *(float *)(iVar9 + 8) +
                               *(float *)(iVar9 + 0xc));
              lVar14 = lVar14 + -1;
            } while (lVar14 != 0);
            dVar25 = (double)((float)(dVar25 + dVar26) * fVar3 + fVar4);
          }
          dVar25 = (double)FastSubRots(fVar2,(float)dVar25);
          if (((double)(float)(dVar25 * dVar25) < (double)(float)(param_2 * param_2)) &&
             (dVar25 = (double)((float)(dVar20 * (double)(float)(dVar25 * dVar25)) *
                               SQRT(SQRT((float)((double)param_4[2] - dVar27) *
                                         (float)((double)param_4[2] - dVar27) +
                                         (float)((double)*param_4 - dVar24) *
                                         (float)((double)*param_4 - dVar24) +
                                         (float)((double)param_4[1] - dVar23) *
                                         (float)((double)param_4[1] - dVar23)))), dVar25 < dVar29))
          {
            dVar29 = dVar25;
            pMVar18 = moby;
          }
        }
      }
    }
  }
  return pMVar18;
}


// 0x038d2e8 (0x1650 bytes)
// inlined: FastAtan2 @0x38d760, FastAtan2 @0x38d948, FastAtan2 @0x38e120, FastAtan2 @0x38e2e4, FastRSqrt @0x38e474
/* Moby 457 */

void UpdateMoby_457(MobyInstance *moby)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  f32 fVar7;
  f32 fVar8;
  float fVar9;
  MOBY_OCLASSES MVar10;
  float *pfVar11;
  MobyClass *pMVar12;
  float fVar13;
  undefined4 uVar14;
  ulonglong *puVar15;
  int iVar16;
  bool bVar17;
  ulonglong uVar18;
  longlong lVar19;
  int iVar23;
  undefined8 uVar20;
  longlong lVar21;
  longlong lVar22;
  uint uVar24;
  ulonglong uVar25;
  float *pfVar27;
  longlong lVar26;
  ulonglong uVar28;
  longlong lVar29;
  ulonglong unaff_r26;
  ulonglong unaff_r27;
  ulonglong unaff_r28;
  ulonglong unaff_r29;
  ulonglong unaff_r30;
  ulonglong unaff_r31;
  ulonglong in_LR;
  longlong lVar30;
  double dVar31;
  double dVar32;
  double dVar33;
  double dVar34;
  double dVar35;
  double dVar36;
  double dVar37;
  double dVar38;
  double dVar39;
  double dVar40;
  double dVar41;
  double dVar42;
  double dVar43;
  double dVar44;
  ulonglong in_f18;
  ulonglong in_f19;
  ulonglong in_f20;
  ulonglong in_f21;
  double dVar45;
  ulonglong in_f22;
  ulonglong in_f23;
  double dVar46;
  ulonglong in_f24;
  double dVar47;
  ulonglong in_f25;
  double dVar48;
  ulonglong in_f26;
  double dVar49;
  ulonglong in_f27;
  double dVar50;
  ulonglong in_f28;
  double dVar51;
  ulonglong in_f29;
  double dVar52;
  ulonglong in_f30;
  double dVar53;
  ulonglong in_f31;
  double dVar54;
  double dVar55;
  undefined8 uVar56;
  
  lVar19 = (longlong)(int)moby;
  uVar18 = ZEXT48(&stack0x00000000);
  lVar22 = uVar18 - 0x2e0;
  puVar15 = (ulonglong *)lVar22;
  *puVar15 = uVar18;
  puVar15[0x5e] = in_LR;
  puVar15[0x4e] = in_f18;
  puVar15[0x4f] = in_f19;
  puVar15[0x50] = in_f20;
  puVar15[0x51] = in_f21;
  puVar15[0x52] = in_f22;
  puVar15[0x53] = in_f23;
  puVar15[0x54] = in_f24;
  puVar15[0x55] = in_f25;
  puVar15[0x56] = in_f26;
  puVar15[0x57] = in_f27;
  puVar15[0x58] = in_f28;
  puVar15[0x59] = in_f29;
  puVar15[0x5a] = in_f30;
  puVar15[0x5b] = in_f31;
  puVar15[0x4d] = unaff_r31;
  puVar15[0x4c] = unaff_r30;
  puVar15[0x4b] = unaff_r29;
  puVar15[0x4a] = unaff_r28;
  puVar15[0x49] = unaff_r27;
  puVar15[0x48] = unaff_r26;
  if ((moby != (MobyInstance *)0x0) && (pfVar11 = (float *)moby->pVar, pfVar11 != (float *)0x0)) {
    dVar53 = 0.0;
    *(undefined4 *)(puVar15 + 0x1a) = 0;
    *(undefined4 *)((int)puVar15 + 0xd4) = 0;
    *(undefined4 *)(puVar15 + 0x1b) = 0;
    *(undefined4 *)((int)puVar15 + 0xdc) = 0;
    fVar2 = DAT_0071f408;
    pMVar12 = moby->pClass;
    fVar1 = moby->scale;
    *(float *)(puVar15 + 0x1b) = g_FrameTime * 8.0;
    dVar54 = 0.05000000074505806;
    moby->scale = fVar2 * 0.05 * (pMVar12->gScale - fVar1) + fVar1;
    dVar31 = (double)DAT_0071f408;
    dVar52 = 0.10000000149011612;
    fVar2 = (float)(dVar31 * 0.10000000149011612) * (g_FrameTime * 20.0 - pfVar11[0xc]) *
            DAT_0071f40c + pfVar11[0xc];
    pfVar11[0xc] = fVar2;
    fVar3 = animationSpeed;
    fVar1 = pfVar11[9];
    puVar15[0x46] = (longlong)(int)(animationSpeed * 250.5);
    iVar23 = *(int *)((int)puVar15 + 0x234);
    puVar15[0x46] = (longlong)(int)(fVar3 * 5.5);
    if ((int)fVar1 < iVar23 - *(int *)((int)puVar15 + 0x234)) {
      fVar13 = pfVar11[10];
      if ((((fVar13 == 0.0) || ((float)(int)*(short *)((int)fVar13 + 0xa6) != pfVar11[0x16])) ||
          (*(char *)((int)fVar13 + 0x20) == -2)) || (*(char *)((int)fVar13 + 0x20) == -3)) {
        pfVar11[10] = 0.0;
        pfVar11[0x11] = (float)(dVar31 * 0.10000000149011612 + (double)pfVar11[0x11]);
        puVar15[0x46] = (longlong)(int)(fVar3 * 100.5);
        if ((int)fVar1 < iVar23 - *(int *)((int)puVar15 + 0x234)) {
          fVar1 = pfVar11[0x12];
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
          fVar13 = fVar1 * fVar2;
          dVar31 = (double)FastWrapRot
                                     ((moby->rotation).y,
                                      (float)(dVar31 * 0.03999999910593033) *
                                      (fVar1 * fVar13 * 2.601887e-06 +
                                      fVar13 * -0.0001980741 +
                                      fVar2 * 0.0083330255 + fVar1 * fVar3 * -0.16666657 + fVar3));
          (moby->rotation).y = (float)dVar31;
          dVar31 = (double)DAT_0071f408;
        }
        fVar1 = pfVar11[0x12] + 1.5707963;
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
        fVar13 = fVar1 * fVar2;
        dVar31 = (double)FastWrapRot
                                   ((moby->rotation).z,
                                    (float)(dVar31 * dVar54) *
                                    (fVar1 * fVar13 * 2.601887e-06 +
                                    fVar13 * -0.0001980741 +
                                    fVar2 * 0.0083330255 + fVar1 * fVar3 * -0.16666657 + fVar3));
        (moby->rotation).z = (float)dVar31;
      }
      else {
        fVar1 = *(float *)((int)fVar13 + 0x14);
        fVar3 = *(float *)((int)fVar13 + 0x10);
        dVar50 = (double)(fVar1 - pfVar11[1]);
        fVar4 = *(float *)((int)fVar13 + 0x18) + pfVar11[0xb];
        dVar55 = (double)(fVar3 - *pfVar11);
        fVar13 = *(float *)((int)fVar13 + 0x1c);
        dVar36 = (double)(fVar1 - pfVar11[5]);
        dVar54 = (double)(fVar3 - pfVar11[4]);
        *pfVar11 = fVar3;
        pfVar11[1] = fVar1;
        dVar49 = (double)(fVar4 - pfVar11[2]);
        dVar51 = (double)(fVar4 - pfVar11[6]);
        pfVar11[2] = fVar4;
        pfVar11[3] = fVar13;
        fVar1 = fVar2 * fVar2 -
                (float)(dVar49 * dVar49 +
                       (double)(float)(dVar55 * dVar55 + (double)(float)(dVar50 * dVar50)));
        dVar48 = (double)(float)(dVar51 * dVar51 +
                                (double)(float)(dVar54 * dVar54 + (double)(float)(dVar36 * dVar36)))
        ;
        fVar3 = (float)(dVar51 * dVar49 +
                       (double)(float)(dVar54 * dVar55 + (double)(float)(dVar36 * dVar50))) * -2.0;
        fVar2 = fVar1 * 2.0;
        fVar1 = SQRT(fVar3 * fVar3 - -(float)(dVar48 * (double)(fVar1 * 4.0)));
        dVar46 = (double)((fVar1 - fVar3) / fVar2);
        dVar47 = (double)((-fVar3 - fVar1) / fVar2);
        if ((dVar46 <= 0.0) || (dVar47 <= 0.0)) {
          dVar45 = -1.0;
          if (0.0 - dVar47 < 0.0) {
            dVar45 = dVar47;
          }
          if (0.0 - dVar46 < 0.0) {
            dVar45 = dVar46;
          }
        }
        else {
          dVar45 = dVar47;
          if (dVar47 - dVar46 < 0.0) {
            dVar45 = dVar46;
          }
        }
        if (0.0 < dVar45) {
          fVar1 = (float)(dVar45 * dVar55 + dVar54);
          dVar54 = (double)fVar1;
          fVar2 = (float)(dVar45 * dVar50 + dVar36);
          dVar46 = (double)fVar2;
          dVar36 = (double)(float)(dVar45 * dVar49 + dVar51);
          *(float *)((int)puVar15 + 0x1a4) = fVar1;
          *(float *)(puVar15 + 0x35) = fVar2;
          fVar1 = (moby->rotation).z;
          *(float *)((int)puVar15 + 0x1ac) = (float)(ABS(dVar54) - ABS(dVar46));
          uVar25 = (ulonglong)(*(uint *)((int)puVar15 + 0x1a4) >> 0x1c) & 8 |
                   (ulonglong)(*(uint *)((int)puVar15 + 0x1ac) >> 0x1e) & 2 |
                   (ulonglong)(*(uint *)(puVar15 + 0x35) >> 0x1d) & 4;
          uVar28 = uVar25 << 2;
          dVar31 = ABS((double)*(float *)((int)puVar15 + 0x1a4));
          if (*(float *)((int)puVar15 + 0x1ac) - 0.0 < 0.0) {
            dVar31 = ABS(dVar46);
          }
          fVar2 = *(float *)(&g_atanQuadrantTable + (int)uVar28);
          dVar51 = ABS((double)*(float *)(puVar15 + 0x35));
          if (*(float *)((int)puVar15 + 0x1ac) - 0.0 < 0.0) {
            dVar51 = ABS(dVar54);
          }
          fVar3 = *(float *)(((uint)(uVar25 << 2) | 0x735900) + 4);
          dVar47 = dVar53;
          if (0.0 < dVar31) {
            lVar21 = uVar18 - 0x2d0;
            lVar29 = uVar18 - 0xc0;
            lVar26 = uVar18 - 0xd0;
            lVar30 = 2;
            fVar13 = (float)(dVar51 - dVar31) / (float)(dVar51 + dVar31);
            fVar4 = fVar13 * fVar13;
            *(float *)((int)puVar15 + 0x21c) = fVar13;
            *(float *)((int)puVar15 + 0x214) = fVar13;
            *(float *)(puVar15 + 0x43) = fVar13;
            *(float *)(puVar15 + 0x42) = fVar13;
            fVar13 = fVar4 * fVar4;
            *(float *)((int)puVar15 + 0x214) = *(float *)((int)puVar15 + 0x214) * fVar4;
            *(float *)(puVar15 + 0x43) = *(float *)(puVar15 + 0x43) * fVar13;
            *(float *)((int)puVar15 + 0x21c) = *(float *)((int)puVar15 + 0x21c) * fVar13 * fVar4;
            do {
              *(float *)((int)lVar21 + 0x210) = *(float *)((int)lVar21 + 0x200) * fVar13 * fVar13;
              iVar23 = (int)lVar26;
              lVar26 = lVar26 + 8;
              lVar21 = lVar21 + 8;
              *(float *)((int)lVar29 + 4) = *(float *)(iVar23 + 4) * fVar13 * fVar13;
              lVar29 = lVar29 + 8;
              lVar30 = lVar30 + -1;
            } while (lVar30 != 0);
            lVar30 = 4;
            lVar29 = uVar18 - 0xd0;
            uVar28 = ZEXT48(&DAT_007358e0);
            lVar21 = lVar22;
            lVar26 = lVar29;
            do {
              pfVar27 = (float *)uVar28;
              fVar13 = pfVar27[1];
              uVar28 = uVar28 + 8;
              *(float *)((int)lVar21 + 0x210) = *(float *)((int)lVar21 + 0x210) * *pfVar27;
              lVar21 = lVar21 + 8;
              *(float *)((int)lVar26 + 4) = *(float *)((int)lVar26 + 4) * fVar13;
              lVar26 = lVar26 + 8;
              lVar30 = lVar30 + -1;
            } while (lVar30 != 0);
            lVar26 = 2;
            lVar21 = lVar22;
            dVar31 = dVar53;
            do {
              iVar23 = (int)lVar21;
              iVar16 = (int)lVar29;
              lVar21 = lVar21 + 0x10;
              lVar29 = lVar29 + 0x10;
              dVar31 = (double)((float)(dVar31 + (double)*(float *)(iVar23 + 0x210)) +
                                *(float *)(iVar16 + 4) + *(float *)(iVar16 + 8) +
                               *(float *)(iVar16 + 0xc));
              lVar26 = lVar26 + -1;
            } while (lVar26 != 0);
            dVar47 = (double)((float)(dVar31 + 0.7853981852531433) * fVar2 + fVar3);
          }
          dVar49 = 188.4955596923828;
          dVar31 = (double)MB_DeltAngSpeed
                                     ((double)fVar1,dVar47,(double)(g_FrameTimeSq * 188.49556),0,0,
                                      &DAT_0038d24c,uVar28,pfVar11 + 0xd);
          *(float *)((int)puVar15 + 0x19c) = (float)dVar36;
          (moby->rotation).z = (float)dVar31;
          fVar1 = (moby->rotation).y;
          fVar2 = SQRT((float)(dVar54 * dVar54 + (double)(float)(dVar46 * dVar46)));
          dVar54 = (double)g_FrameTimeSq;
          dVar51 = ABS((double)fVar2);
          *(float *)(puVar15 + 0x33) = fVar2;
          *(float *)(puVar15 + 0x34) = (float)(dVar51 - ABS(dVar36));
          uVar28 = (ulonglong)(*(uint *)(puVar15 + 0x33) >> 0x1c) & 8 |
                   (ulonglong)(*(uint *)(puVar15 + 0x34) >> 0x1e) & 2 |
                   (ulonglong)(*(uint *)((int)puVar15 + 0x19c) >> 0x1d) & 4;
          uVar25 = uVar28 << 2 | 0x735900;
          uVar28 = uVar28 << 2;
          dVar31 = ABS((double)*(float *)(puVar15 + 0x33));
          if ((double)*(float *)(puVar15 + 0x34) - dVar53 < 0.0) {
            dVar31 = ABS(dVar36);
          }
          fVar2 = *(float *)(&g_atanQuadrantTable + (int)uVar28);
          dVar36 = ABS((double)*(float *)((int)puVar15 + 0x19c));
          if ((double)*(float *)(puVar15 + 0x34) - dVar53 < 0.0) {
            dVar36 = dVar51;
          }
          fVar3 = *(float *)((int)uVar25 + 4);
          dVar51 = dVar53;
          if (dVar53 < dVar31) {
            lVar21 = uVar18 - 0x2d0;
            lVar29 = uVar18 - 0xe0;
            lVar26 = uVar18 - 0xf0;
            lVar30 = 2;
            fVar13 = (float)(dVar36 - dVar31) / (float)(dVar36 + dVar31);
            fVar4 = fVar13 * fVar13;
            *(float *)((int)puVar15 + 0x1fc) = fVar13;
            *(float *)((int)puVar15 + 500) = fVar13;
            *(float *)(puVar15 + 0x3f) = fVar13;
            *(float *)(puVar15 + 0x3e) = fVar13;
            fVar13 = fVar4 * fVar4;
            *(float *)((int)puVar15 + 500) = *(float *)((int)puVar15 + 500) * fVar4;
            *(float *)(puVar15 + 0x3f) = *(float *)(puVar15 + 0x3f) * fVar13;
            *(float *)((int)puVar15 + 0x1fc) = *(float *)((int)puVar15 + 0x1fc) * fVar13 * fVar4;
            do {
              *(float *)((int)lVar21 + 0x1f0) = *(float *)((int)lVar21 + 0x1e0) * fVar13 * fVar13;
              iVar23 = (int)lVar26;
              lVar26 = lVar26 + 8;
              lVar21 = lVar21 + 8;
              *(float *)((int)lVar29 + 4) = *(float *)(iVar23 + 4) * fVar13 * fVar13;
              lVar29 = lVar29 + 8;
              lVar30 = lVar30 + -1;
            } while (lVar30 != 0);
            lVar30 = 4;
            lVar29 = uVar18 - 0xf0;
            uVar25 = ZEXT48(&DAT_007358e0);
            lVar21 = lVar22;
            lVar26 = lVar29;
            do {
              pfVar27 = (float *)uVar25;
              fVar13 = pfVar27[1];
              uVar25 = uVar25 + 8;
              *(float *)((int)lVar21 + 0x1f0) = *(float *)((int)lVar21 + 0x1f0) * *pfVar27;
              lVar21 = lVar21 + 8;
              *(float *)((int)lVar26 + 4) = *(float *)((int)lVar26 + 4) * fVar13;
              lVar26 = lVar26 + 8;
              lVar30 = lVar30 + -1;
            } while (lVar30 != 0);
            lVar26 = 2;
            lVar21 = lVar22;
            dVar31 = dVar53;
            do {
              iVar23 = (int)lVar21;
              iVar16 = (int)lVar29;
              lVar21 = lVar21 + 0x10;
              lVar29 = lVar29 + 0x10;
              dVar31 = (double)((float)(dVar31 + (double)*(float *)(iVar23 + 0x1f0)) +
                                *(float *)(iVar16 + 4) + *(float *)(iVar16 + 8) +
                               *(float *)(iVar16 + 0xc));
              lVar26 = lVar26 + -1;
            } while (lVar26 != 0);
            uVar28 = ZEXT48(&DAT_0038d24c);
            dVar51 = (double)((float)(dVar31 + 0.7853981852531433) * fVar2 + fVar3);
          }
          dVar31 = (double)MB_DeltAngSpeed
                                     ((double)fVar1,-dVar51,(double)(float)(dVar54 * dVar49),dVar53,
                                      dVar53,uVar28,uVar25,pfVar11 + 0xe);
          (moby->rotation).y = (float)dVar31;
          dVar31 = (double)DAT_0071f408;
        }
        if (6.0 <= (float)SQRT(dVar48)) {
          fVar1 = (float)(dVar31 * dVar52 + (double)pfVar11[0x11]);
        }
        else {
          fVar1 = pfVar11[0x11] * (float)SQRT(dVar48) * 0.16666667;
        }
        pfVar11[0x11] = fVar1;
      }
    }
    MB_SphericalToVector
              (pfVar11[0xc],(moby->rotation).z,-(moby->rotation).y,(float *)(puVar15 + 0x1e));
    *(undefined4 *)(puVar15 + 0x20) = 0;
    *(undefined4 *)((int)puVar15 + 0x104) = 0;
    *(undefined4 *)(puVar15 + 0x21) = 0;
    *(undefined4 *)((int)puVar15 + 0x10c) = 0;
    dVar54 = -1.0;
    dVar51 = 1.0;
    dVar31 = (double)MB_randRangeFloat(-1.0,1.0);
    *(float *)(puVar15 + 0x20) = (float)dVar31;
    dVar31 = (double)MB_randRangeFloat((float)dVar54,(float)dVar51);
    *(float *)((int)puVar15 + 0x104) = (float)dVar31;
    dVar31 = (double)MB_randRangeFloat((float)dVar54,(float)dVar51);
    *(float *)(puVar15 + 0x21) = (float)dVar31;
    dVar31 = (double)MB_randRangeFloat((float)dVar52,0.2);
    fVar4 = g_FrameTime;
    fVar2 = *(float *)((int)puVar15 + 0x104);
    fVar3 = *(float *)(puVar15 + 0x20);
    fVar13 = *(float *)(puVar15 + 0x21);
    dVar36 = (double)SQRT(fVar13 * fVar13 + fVar3 * fVar3 + fVar2 * fVar2);
    dVar54 = (double)g_FrameTime;
    fVar1 = (float)((double)(float)(dVar31 * dVar54) / dVar36);
    dVar31 = dVar53;
    if (dVar53 - dVar36 < 0.0) {
      dVar31 = (double)(fVar3 * fVar1);
    }
    dVar46 = dVar53;
    if (dVar53 - dVar36 < 0.0) {
      dVar46 = (double)(fVar2 * fVar1);
    }
    dVar47 = dVar53;
    if (dVar53 - dVar36 < 0.0) {
      dVar47 = (double)(fVar13 * fVar1);
    }
    if (dVar36 - dVar53 < 0.0) {
      dVar31 = (double)(fVar3 * fVar1);
    }
    if (dVar36 - dVar53 < 0.0) {
      dVar46 = (double)(fVar2 * fVar1);
    }
    if (dVar36 - dVar53 < 0.0) {
      dVar47 = (double)(fVar13 * fVar1);
    }
    *(float *)(puVar15 + 0x20) = (float)dVar31;
    *(float *)((int)puVar15 + 0x104) = (float)dVar46;
    *(float *)(puVar15 + 0x21) = (float)dVar47;
    dVar31 = (double)MB_randRangeFloat((float)(dVar54 * dVar52),fVar4);
    fVar2 = *(float *)((int)puVar15 + 0xf4);
    fVar3 = *(float *)(puVar15 + 0x1e);
    fVar13 = *(float *)(puVar15 + 0x1f);
    *(undefined4 *)((int)puVar15 + 0xec) = *(undefined4 *)((int)puVar15 + 0xfc);
    dVar54 = (double)SQRT(fVar13 * fVar13 + fVar3 * fVar3 + fVar2 * fVar2);
    fVar1 = (float)(-dVar31 / dVar54);
    dVar31 = dVar53;
    if (dVar53 - dVar54 < 0.0) {
      dVar31 = (double)(fVar3 * fVar1);
    }
    dVar36 = dVar53;
    if (dVar53 - dVar54 < 0.0) {
      dVar36 = (double)(fVar2 * fVar1);
    }
    dVar46 = dVar53;
    if (dVar53 - dVar54 < 0.0) {
      dVar46 = (double)(fVar13 * fVar1);
    }
    if (dVar54 - dVar53 < 0.0) {
      dVar31 = (double)(fVar3 * fVar1);
    }
    if (dVar54 - dVar53 < 0.0) {
      dVar36 = (double)(fVar2 * fVar1);
    }
    if (dVar54 - dVar53 < 0.0) {
      dVar46 = (double)(fVar13 * fVar1);
    }
    *(float *)(puVar15 + 0x1c) = (float)dVar31;
    *(float *)((int)puVar15 + 0xe4) = (float)dVar36;
    *(float *)(puVar15 + 0x1d) = (float)dVar46;
    *(float *)(puVar15 + 0x20) = (float)((double)*(float *)(puVar15 + 0x20) + dVar31);
    *(float *)((int)puVar15 + 0x104) = (float)((double)*(float *)((int)puVar15 + 0x104) + dVar36);
    *(float *)(puVar15 + 0x21) = (float)((double)*(float *)(puVar15 + 0x21) + dVar46);
    dVar31 = (double)MB_randRangeFloat((float)dVar53,(float)dVar51);
    fVar2 = *(float *)((int)puVar15 + 0xf4);
    fVar3 = *(float *)(puVar15 + 0x1e);
    fVar13 = *(float *)(puVar15 + 0x1f);
    fVar1 = pfVar11[0xc];
    fVar4 = (moby->pos).x;
    fVar5 = (moby->pos).y;
    fVar6 = (moby->pos).z;
    *(undefined4 *)((int)puVar15 + 0xec) = *(undefined4 *)((int)puVar15 + 0xfc);
    dVar54 = (double)SQRT(fVar13 * fVar13 + fVar3 * fVar3 + fVar2 * fVar2);
    fVar1 = (float)((double)(float)(dVar31 * (double)fVar1) / dVar54);
    dVar31 = dVar53;
    if (dVar53 - dVar54 < 0.0) {
      dVar31 = (double)(fVar13 * fVar1);
    }
    dVar36 = dVar53;
    if (dVar53 - dVar54 < 0.0) {
      dVar36 = (double)(fVar2 * fVar1);
    }
    dVar46 = dVar53;
    if (dVar53 - dVar54 < 0.0) {
      dVar46 = (double)(fVar3 * fVar1);
    }
    if (dVar54 - dVar53 < 0.0) {
      dVar31 = (double)(fVar13 * fVar1);
    }
    if (dVar54 - dVar53 < 0.0) {
      dVar36 = (double)(fVar2 * fVar1);
    }
    if (dVar54 - dVar53 < 0.0) {
      dVar46 = (double)(fVar3 * fVar1);
    }
    *(float *)(puVar15 + 0x1d) = (float)(dVar31 + (double)fVar6);
    *(float *)((int)puVar15 + 0xe4) = (float)(dVar36 + (double)fVar5);
    *(float *)(puVar15 + 0x1c) = (float)(dVar46 + (double)fVar4);
    iVar23 = MB_randRange(0x1c,0x28);
    puVar15[0x46] = (longlong)iVar23;
    dVar55 = 0.5;
    puVar15[0x46] = (longlong)(int)(animationSpeed * (float)((double)(longlong)puVar15[0x46] + 0.5))
    ;
    uVar14 = *(undefined4 *)((int)puVar15 + 0x234);
    uVar20 = MB_randRange(0x28,0x46);
    SpawnPart_4(uVar18 - 0x200,uVar18 - 0x1e0,0x6f00afff,0x100000ff,uVar14,0x28,uVar20,1);
    fVar7 = (moby->pos).y;
    *(f32 *)(puVar15 + 0x18) = (moby->pos).x;
    fVar8 = (moby->pos).z;
    *(f32 *)((int)puVar15 + 0xc4) = fVar7;
    fVar7 = (moby->pos).w;
    *(f32 *)(puVar15 + 0x19) = fVar8;
    *(f32 *)((int)puVar15 + 0xcc) = fVar7;
    pfVar11[4] = pfVar11[4] + *(float *)(puVar15 + 0x1e);
    pfVar11[5] = pfVar11[5] + *(float *)((int)puVar15 + 0xf4);
    pfVar11[6] = pfVar11[6] + *(float *)(puVar15 + 0x1f);
    dVar31 = (double)FastWrapRot(pfVar11[0x12],pfVar11[0x14]);
    pfVar11[0x12] = (float)dVar31;
    dVar54 = (double)FastWrapRot(pfVar11[0x13],pfVar11[0x15]);
    dVar50 = 3.141592502593994;
    dVar49 = -3.141592502593994;
    dVar48 = -0.16666656732559204;
    dVar47 = 0.008333025500178337;
    dVar46 = -0.0001980741071747616;
    dVar36 = 2.601886990305502e-06;
    dVar31 = (double)(float)(3.141592502593994 - dVar54);
    if (dVar54 - (double)(float)(3.141592502593994 - dVar54) < 0.0) {
      dVar31 = dVar54;
    }
    dVar45 = (double)(float)(-3.141592502593994 - dVar54);
    if ((double)(float)(-3.141592502593994 - dVar54) - dVar31 < 0.0) {
      dVar45 = dVar31;
    }
    pfVar11[0x13] = (float)dVar54;
    dVar54 = (double)(float)(dVar45 * dVar45);
    dVar37 = (double)(float)(dVar54 * (double)(float)(dVar54 * dVar45));
    dVar31 = (double)(float)(dVar54 * dVar37);
    dVar31 = (double)FastWrapRot
                               (pfVar11[0x12],
                                ((float)(dVar54 * dVar31) * 2.601887e-06 +
                                (float)(dVar31 * -0.0001980741071747616 +
                                       (double)(float)(dVar37 * 0.008333025500178337 +
                                                      (double)(float)((double)(float)(dVar54 * 
                                                  dVar45) * -0.16666656732559204 + dVar45)))) * 0.15
                               );
    pfVar11[0x12] = (float)dVar31;
    uVar24 = (int)pfVar11[0x11] >> 0x1f;
    fVar1 = pfVar11[0x11];
    if (0x3f666666 < (int)((uVar24 >> 1 ^ (uint)pfVar11[0x11]) - uVar24)) {
      pfVar11[0x11] = 0.9;
      fVar1 = 0.9;
    }
    dVar31 = (double)fVar1;
    bVar17 = false;
    dVar45 = 1.570796251296997;
    dVar54 = 0.699999988079071;
    do {
      dVar33 = (double)pfVar11[0x12];
      dVar32 = (double)(float)((double)pfVar11[0x13] + dVar45);
      dVar35 = (double)(float)(dVar33 + dVar45);
      dVar37 = (double)(float)(dVar50 - dVar33);
      if (dVar33 - (double)(float)(dVar50 - dVar33) < 0.0) {
        dVar37 = dVar33;
      }
      dVar38 = (double)(float)(dVar50 - dVar32);
      if (dVar32 - (double)(float)(dVar50 - dVar32) < 0.0) {
        dVar38 = dVar32;
      }
      dVar39 = (double)(float)(dVar50 - dVar35);
      if (dVar35 - (double)(float)(dVar50 - dVar35) < 0.0) {
        dVar39 = dVar35;
      }
      dVar34 = (double)(float)(dVar49 - dVar33);
      if ((double)(float)(dVar49 - dVar33) - dVar37 < 0.0) {
        dVar34 = dVar37;
      }
      dVar37 = (double)(float)(dVar49 - dVar32);
      if ((double)(float)(dVar49 - dVar32) - dVar38 < 0.0) {
        dVar37 = dVar38;
      }
      dVar33 = (double)(float)(dVar34 * dVar34);
      dVar32 = (double)(float)(dVar49 - dVar35);
      if ((double)(float)(dVar49 - dVar35) - dVar39 < 0.0) {
        dVar32 = dVar39;
      }
      dVar35 = (double)(float)(dVar37 * dVar37);
      dVar39 = (double)(float)(dVar32 * dVar32);
      dVar42 = (double)(float)(dVar33 * (double)(float)(dVar33 * dVar34));
      dVar44 = (double)(float)(dVar35 * (double)(float)(dVar35 * dVar37));
      dVar40 = (double)(float)(dVar33 * dVar42);
      dVar43 = (double)(float)(dVar39 * (double)(float)(dVar39 * dVar32));
      dVar38 = (double)(float)(dVar35 * dVar44);
      dVar41 = (double)(float)(dVar39 * dVar43);
      fVar1 = (float)((double)(float)(dVar35 * dVar38) * dVar36 +
                     (double)(float)(dVar38 * dVar46 +
                                    (double)(float)(dVar44 * dVar47 +
                                                   (double)(float)((double)(float)(dVar35 * dVar37)
                                                                   * dVar48 + dVar37))));
      dVar37 = (double)((float)(dVar31 * (double)(float)((double)(float)(dVar33 * dVar40) * dVar36 +
                                                        (double)(float)(dVar40 * dVar46 +
                                                                       (double)(float)(dVar42 * 
                                                  dVar47 + (double)(float)((double)(float)(dVar33 * 
                                                  dVar34) * dVar48 + dVar34))))) * fVar1);
      dVar31 = (double)((float)(dVar31 * (double)(float)((double)(float)(dVar39 * dVar41) * dVar36 +
                                                        (double)(float)(dVar41 * dVar46 +
                                                                       (double)(float)(dVar43 * 
                                                  dVar47 + (double)(float)((double)(float)(dVar39 * 
                                                  dVar32) * dVar48 + dVar32))))) * fVar1);
      FastEulerToMtx1(uVar18 - 0x1a0,lVar19 + 0x40);
      fVar1 = *(float *)((int)puVar15 + 0x154);
      fVar2 = *(float *)((int)puVar15 + 0x164);
      fVar3 = *(float *)(puVar15 + 0x2b);
      fVar13 = *(float *)(puVar15 + 0x2d);
      (moby->pos).x =
           pfVar11[4] +
           (float)((double)*(float *)(puVar15 + 0x2c) * dVar31 +
                  (double)(float)((double)*(float *)(puVar15 + 0x2a) * dVar37));
      (moby->pos).y =
           pfVar11[5] + (float)((double)fVar2 * dVar31 + (double)(float)((double)fVar1 * dVar37));
      (moby->pos).z =
           pfVar11[6] + (float)((double)fVar13 * dVar31 + (double)(float)((double)fVar3 * dVar37));
      (moby->pos).w = pfVar11[7];
      iVar23 = CollLine(uVar18 - 0x220,lVar19 + 0x10,6,lVar19,0);
      if (iVar23 == 0) {
        if (!bVar17) goto LAB_0038e400;
        break;
      }
      bVar17 = true;
      dVar31 = (double)(float)((double)pfVar11[0x11] * dVar54);
      pfVar11[0x11] = (float)((double)pfVar11[0x11] * dVar54);
    } while (dVar52 < dVar31);
    fVar1 = (moby->pos).x;
    fVar2 = *(float *)(puVar15 + 0x18);
    fVar3 = (moby->pos).y;
    fVar13 = *(float *)((int)puVar15 + 0xc4);
    fVar4 = fVar1 - fVar2;
    fVar5 = fVar3 - fVar13;
    dVar52 = ABS((double)fVar4);
    dVar54 = ABS((double)fVar5);
    *(float *)((int)puVar15 + 0x18c) = fVar4;
    *(float *)(puVar15 + 0x32) = fVar5;
    *(float *)((int)puVar15 + 0x194) = (float)(dVar52 - dVar54);
    uVar28 = (ulonglong)(*(uint *)((int)puVar15 + 0x18c) >> 0x1c) & 8 |
             (ulonglong)(*(uint *)((int)puVar15 + 0x194) >> 0x1e) & 2 |
             (ulonglong)(*(uint *)(puVar15 + 0x32) >> 0x1d) & 4;
    dVar31 = ABS((double)*(float *)((int)puVar15 + 0x18c));
    if ((double)*(float *)((int)puVar15 + 0x194) - dVar53 < 0.0) {
      dVar31 = dVar54;
    }
    fVar4 = *(float *)(&g_atanQuadrantTable + (int)(uVar28 << 2));
    dVar54 = ABS((double)*(float *)(puVar15 + 0x32));
    if ((double)*(float *)((int)puVar15 + 0x194) - dVar53 < 0.0) {
      dVar54 = dVar52;
    }
    fVar5 = *(float *)(((uint)(uVar28 << 2) | 0x735900) + 4);
    dVar52 = dVar53;
    if (dVar53 < dVar31) {
      lVar21 = uVar18 - 0x2d0;
      lVar29 = uVar18 - 0x100;
      lVar26 = uVar18 - 0x110;
      lVar30 = 2;
      fVar6 = (float)(dVar54 - dVar31) / (float)(dVar54 + dVar31);
      fVar9 = fVar6 * fVar6;
      *(float *)((int)puVar15 + 0x1dc) = fVar6;
      *(float *)((int)puVar15 + 0x1d4) = fVar6;
      *(float *)(puVar15 + 0x3b) = fVar6;
      *(float *)(puVar15 + 0x3a) = fVar6;
      fVar6 = fVar9 * fVar9;
      *(float *)((int)puVar15 + 0x1d4) = *(float *)((int)puVar15 + 0x1d4) * fVar9;
      *(float *)(puVar15 + 0x3b) = *(float *)(puVar15 + 0x3b) * fVar6;
      *(float *)((int)puVar15 + 0x1dc) = *(float *)((int)puVar15 + 0x1dc) * fVar6 * fVar9;
      do {
        *(float *)((int)lVar21 + 0x1d0) = *(float *)((int)lVar21 + 0x1c0) * fVar6 * fVar6;
        iVar23 = (int)lVar26;
        lVar26 = lVar26 + 8;
        lVar21 = lVar21 + 8;
        *(float *)((int)lVar29 + 4) = *(float *)(iVar23 + 4) * fVar6 * fVar6;
        lVar29 = lVar29 + 8;
        lVar30 = lVar30 + -1;
      } while (lVar30 != 0);
      lVar30 = 4;
      lVar29 = uVar18 - 0x110;
      pfVar27 = (float *)&DAT_007358e0;
      lVar21 = lVar22;
      lVar26 = lVar29;
      do {
        fVar6 = *pfVar27;
        fVar9 = pfVar27[1];
        pfVar27 = pfVar27 + 2;
        *(float *)((int)lVar21 + 0x1d0) = *(float *)((int)lVar21 + 0x1d0) * fVar6;
        lVar21 = lVar21 + 8;
        *(float *)((int)lVar26 + 4) = *(float *)((int)lVar26 + 4) * fVar9;
        lVar26 = lVar26 + 8;
        lVar30 = lVar30 + -1;
      } while (lVar30 != 0);
      lVar26 = 2;
      lVar21 = lVar22;
      dVar31 = dVar53;
      do {
        iVar23 = (int)lVar21;
        iVar16 = (int)lVar29;
        lVar21 = lVar21 + 0x10;
        lVar29 = lVar29 + 0x10;
        dVar31 = (double)((float)(dVar31 + (double)*(float *)(iVar23 + 0x1d0)) +
                          *(float *)(iVar16 + 4) + *(float *)(iVar16 + 8) + *(float *)(iVar16 + 0xc)
                         );
        lVar26 = lVar26 + -1;
      } while (lVar26 != 0);
      dVar52 = (double)((float)(dVar31 + 0.7853981852531433) * fVar4 + fVar5);
    }
    fVar13 = fVar13 - fVar3;
    fVar2 = fVar2 - fVar1;
    fVar1 = *(float *)(puVar15 + 0x19);
    (moby->rotation).z = (float)dVar52;
    fVar1 = (moby->pos).z - fVar1;
    fVar2 = SQRT(fVar2 * fVar2 + fVar13 * fVar13);
    *(float *)((int)puVar15 + 0x184) = fVar1;
    dVar54 = ABS((double)fVar1);
    dVar52 = ABS((double)fVar2);
    *(float *)(puVar15 + 0x30) = fVar2;
    *(float *)(puVar15 + 0x31) = (float)(dVar52 - dVar54);
    uVar28 = (ulonglong)(*(uint *)(puVar15 + 0x30) >> 0x1c) & 8 |
             (ulonglong)(*(uint *)(puVar15 + 0x31) >> 0x1e) & 2 |
             (ulonglong)(*(uint *)((int)puVar15 + 0x184) >> 0x1d) & 4;
    dVar31 = ABS((double)*(float *)(puVar15 + 0x30));
    if ((double)*(float *)(puVar15 + 0x31) - dVar53 < 0.0) {
      dVar31 = dVar54;
    }
    fVar1 = *(float *)(&g_atanQuadrantTable + (int)(uVar28 << 2));
    dVar54 = ABS((double)*(float *)((int)puVar15 + 0x184));
    if ((double)*(float *)(puVar15 + 0x31) - dVar53 < 0.0) {
      dVar54 = dVar52;
    }
    fVar2 = *(float *)(((uint)(uVar28 << 2) | 0x735900) + 4);
    dVar52 = dVar53;
    if (dVar53 < dVar31) {
      lVar21 = uVar18 - 0x2d0;
      lVar26 = uVar18 - 0x130;
      lVar29 = uVar18 - 0x120;
      lVar30 = 2;
      fVar3 = (float)(dVar54 - dVar31) / (float)(dVar54 + dVar31);
      fVar13 = fVar3 * fVar3;
      *(float *)((int)puVar15 + 0x1bc) = fVar3;
      *(float *)((int)puVar15 + 0x1b4) = fVar3;
      *(float *)(puVar15 + 0x37) = fVar3;
      *(float *)(puVar15 + 0x36) = fVar3;
      fVar3 = fVar13 * fVar13;
      *(float *)((int)puVar15 + 0x1b4) = *(float *)((int)puVar15 + 0x1b4) * fVar13;
      *(float *)(puVar15 + 0x37) = *(float *)(puVar15 + 0x37) * fVar3;
      *(float *)((int)puVar15 + 0x1bc) = *(float *)((int)puVar15 + 0x1bc) * fVar3 * fVar13;
      do {
        *(float *)((int)lVar21 + 0x1b0) = *(float *)((int)lVar21 + 0x1a0) * fVar3 * fVar3;
        iVar23 = (int)lVar26;
        lVar21 = lVar21 + 8;
        lVar26 = lVar26 + 8;
        *(float *)((int)lVar29 + 4) = *(float *)(iVar23 + 4) * fVar3 * fVar3;
        lVar29 = lVar29 + 8;
        lVar30 = lVar30 + -1;
      } while (lVar30 != 0);
      lVar30 = 4;
      lVar29 = uVar18 - 0x130;
      pfVar27 = (float *)&DAT_007358e0;
      lVar21 = lVar22;
      lVar26 = lVar29;
      do {
        fVar3 = *pfVar27;
        fVar13 = pfVar27[1];
        pfVar27 = pfVar27 + 2;
        *(float *)((int)lVar21 + 0x1b0) = *(float *)((int)lVar21 + 0x1b0) * fVar3;
        lVar21 = lVar21 + 8;
        *(float *)((int)lVar26 + 4) = *(float *)((int)lVar26 + 4) * fVar13;
        lVar26 = lVar26 + 8;
        lVar30 = lVar30 + -1;
      } while (lVar30 != 0);
      lVar21 = 2;
      dVar31 = dVar53;
      do {
        iVar23 = (int)lVar22;
        lVar22 = lVar22 + 0x10;
        iVar16 = (int)lVar29;
        lVar29 = lVar29 + 0x10;
        dVar31 = (double)((float)(dVar31 + (double)*(float *)(iVar23 + 0x1b0)) +
                          *(float *)(iVar16 + 4) + *(float *)(iVar16 + 8) + *(float *)(iVar16 + 0xc)
                         );
        lVar21 = lVar21 + -1;
      } while (lVar21 != 0);
      dVar52 = (double)((float)(dVar31 + 0.7853981852531433) * fVar1 + fVar2);
    }
    (moby->rotation).y = (float)-dVar52;
    pfVar11[0xd] = 0.0;
    pfVar11[0xe] = 0.0;
LAB_0038e400:
    if ((((int)(moby->pos).x < 0) || ((int)(moby->pos).y < 0)) || ((int)(moby->pos).z < 0)) {
      DeleteMoby(moby);
    }
    else {
      fVar1 = *(float *)((int)puVar15 + 0xf4);
      fVar2 = *(float *)(puVar15 + 0x1e);
      *(MobyInstance **)(puVar15 + 0x24) = moby;
      *(undefined **)((int)puVar15 + 0x124) = &DAT_00830000;
      dVar54 = (double)(fVar2 * fVar2 + fVar1 * fVar1);
      *(undefined4 *)((int)puVar15 + 300) = 0x40400000;
      *(undefined4 *)(puVar15 + 0x26) = 1;
      dVar31 = dVar53;
      dVar52 = dVar53;
      if ((double)(float)SQRT(dVar54) != dVar53) {
        dVar31 = 1.0 / SQRT(dVar54);
        dVar31 = (double)(float)(-(double)(float)((double)(float)(dVar54 * dVar31) * dVar31 - dVar51
                                                 ) * (double)(float)(dVar55 * dVar31) + dVar31);
        dVar31 = (double)(float)(-(double)(float)((double)(float)(dVar54 * dVar31) * dVar31 - dVar51
                                                 ) * (double)(float)(dVar55 * dVar31) + dVar31);
        fVar3 = (float)(-(double)(float)((double)(float)(dVar54 * dVar31) * dVar31 - dVar51) *
                        (double)(float)(dVar55 * dVar31) + dVar31);
        dVar52 = (double)(fVar2 * fVar3);
        dVar31 = (double)(fVar1 * fVar3);
      }
      *(float *)(puVar15 + 0x22) = (float)dVar52;
      *(float *)((int)puVar15 + 0x114) = (float)dVar31;
      *(undefined4 *)(puVar15 + 0x23) = 0x3f800000;
      *(undefined4 *)((int)puVar15 + 0x11c) = 0x45afdf66;
      MVar10 = moby->oClass;
      *(undefined1 *)(puVar15 + 0x25) = 3;
      *(undefined1 *)((int)puVar15 + 0x129) = 3;
      *(MOBY_OCLASSES *)((int)puVar15 + 0x12a) = MVar10;
      iVar23 = CollLine(uVar18 - 0x220,lVar19 + 0x10,0,lVar19,uVar18 - 0x1d0);
      if (iVar23 == 0) {
        iVar23 = FastDecTimerS32(pfVar11 + 9);
        if ((iVar23 != 0) ||
           (fVar1 = (moby->pos).y - (g_heroMobyPtr->pos).y,
           fVar2 = (moby->pos).x - (g_heroMobyPtr->pos).x,
           200.0 < SQRT(fVar2 * fVar2 + fVar1 * fVar1))) {
          DeleteMoby(moby);
          return;
        }
      }
      else {
        uVar56 = 0x4022000000000000;
        uVar20 = 0x402e000000000000;
        if (g_CollOutput.pMoby == (MobyInstance *)0x0) {
          if (0 < g_CollOutput.poly) {
            moby->setByGroup = '\x01';
            (moby->pos).x = g_CollOutput.ip.x;
            (moby->pos).y = g_CollOutput.ip.y;
            (moby->pos).z = g_CollOutput.ip.z;
            (moby->pos).w = g_CollOutput.ip.w;
            FastVecReflect(uVar18 - 0x210,uVar18 - 0x1f0,0xa10980);
            fVar1 = g_FrameTime;
            fVar2 = *(float *)((int)puVar15 + 0xd4);
            fVar3 = *(float *)(puVar15 + 0x1a);
            fVar13 = *(float *)(puVar15 + 0x1b);
            dVar52 = (double)SQRT(fVar13 * fVar13 + fVar3 * fVar3 + fVar2 * fVar2);
            puVar15[0x12] = 0;
            puVar15[0x14] = 1;
            puVar15[0x15] = 1;
            puVar15[0x16] = 0xffffffffffffffff;
            puVar15[0x17] = 0;
            fVar1 = (float)((double)(fVar1 * 2.0) / dVar52);
            dVar31 = dVar53;
            if (dVar53 - dVar52 < 0.0) {
              dVar31 = (double)(fVar3 * fVar1);
            }
            dVar54 = dVar53;
            if (dVar53 - dVar52 < 0.0) {
              dVar54 = (double)(fVar2 * fVar1);
            }
            dVar36 = dVar53;
            if (dVar53 - dVar52 < 0.0) {
              dVar36 = (double)(fVar13 * fVar1);
            }
            if (dVar52 - dVar53 < 0.0) {
              dVar31 = (double)(fVar3 * fVar1);
            }
            if (dVar52 - dVar53 < 0.0) {
              dVar54 = (double)(fVar2 * fVar1);
            }
            if (dVar52 - dVar53 < 0.0) {
              dVar36 = (double)(fVar13 * fVar1);
            }
            *(float *)(puVar15 + 0x1a) = (float)dVar31;
            *(float *)((int)puVar15 + 0xd4) = (float)dVar54;
            *(float *)(puVar15 + 0x1b) = (float)dVar36;
            MB_genericExplosion
                      (dVar53,dVar51,0x4010000000000000,0x4000000000000000,uVar56,dVar51,uVar20,
                       lVar19,uVar18 - 0x210,0,&DAT_0038d24c,0xffffffffffffffff,10,3,9);
            DeleteMoby(moby);
            return;
          }
        }
        else if (((g_CollOutput.pMoby != g_heroMobyPtr) &&
                 (g_CollOutput.pMoby != (MobyInstance *)pfVar11[8])) &&
                ((g_CollOutput.pMoby)->oClass != RATCHET && (g_CollOutput.pMoby)->oClass != ROCKET_01C9)
                ) {
          moby->setByGroup = '\x02';
          (moby->pos).x = g_CollOutput.ip.x;
          (moby->pos).y = g_CollOutput.ip.y;
          (moby->pos).z = g_CollOutput.ip.z;
          (moby->pos).w = g_CollOutput.ip.w;
          FastVecReflect(uVar18 - 0x210,uVar18 - 0x1f0,0xa10980);
          fVar1 = g_FrameTime;
          fVar2 = *(float *)((int)puVar15 + 0xd4);
          fVar3 = *(float *)(puVar15 + 0x1a);
          fVar13 = *(float *)(puVar15 + 0x1b);
          dVar52 = (double)SQRT(fVar13 * fVar13 + fVar3 * fVar3 + fVar2 * fVar2);
          puVar15[0x12] = 0;
          puVar15[0x14] = 1;
          puVar15[0x15] = 1;
          puVar15[0x16] = 0xffffffffffffffff;
          puVar15[0x17] = 0;
          fVar1 = (float)((double)(fVar1 * 2.0) / dVar52);
          dVar31 = dVar53;
          if (dVar53 - dVar52 < 0.0) {
            dVar31 = (double)(fVar3 * fVar1);
          }
          dVar54 = dVar53;
          if (dVar53 - dVar52 < 0.0) {
            dVar54 = (double)(fVar2 * fVar1);
          }
          dVar36 = dVar53;
          if (dVar53 - dVar52 < 0.0) {
            dVar36 = (double)(fVar13 * fVar1);
          }
          if (dVar52 - dVar53 < 0.0) {
            dVar31 = (double)(fVar3 * fVar1);
          }
          if (dVar52 - dVar53 < 0.0) {
            dVar54 = (double)(fVar2 * fVar1);
          }
          if (dVar52 - dVar53 < 0.0) {
            dVar36 = (double)(fVar13 * fVar1);
          }
          *(float *)(puVar15 + 0x1a) = (float)dVar31;
          *(float *)((int)puVar15 + 0xd4) = (float)dVar54;
          *(float *)(puVar15 + 0x1b) = (float)dVar36;
          MB_genericExplosion
                    (dVar53,dVar53,0x4010000000000000,0x4000000000000000,uVar56,dVar51,uVar20,lVar19
                     ,uVar18 - 0x210,0,&DAT_0038d24c,0xffffffffffffffff,10,3,9);
          DeleteMoby(moby);
          return;
        }
      }
      fVar1 = pfVar11[9];
      puVar15[0x46] = (longlong)(int)(animationSpeed * 32.5);
      if (fVar1 == (float)(((int)fVar1 / *(int *)((int)puVar15 + 0x234)) *
                          *(int *)((int)puVar15 + 0x234))) {
        uVar24 = rand();
        if ((uVar24 & 1) != 0) {
          dVar31 = (double)MB_randRangeFloat(-0.7,-1.5);
          pfVar11[0x14] = (float)((double)pfVar11[0x14] * dVar31);
        }
        uVar24 = rand();
        if ((uVar24 & 1) != 0) {
          dVar31 = (double)MB_randRangeFloat(-0.6,-1.6);
          pfVar11[0x15] = (float)((double)pfVar11[0x15] * dVar31);
        }
      }
    }
  }
  return;
}


