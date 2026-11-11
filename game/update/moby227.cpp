// game/update/moby227.cpp -- reconstructed from NPEA00385 EBOOT
// STATUS: NOT STARTED (raw Ghidra output)
// 2 functions, 0x2fa200-0x2fbc94
#include "game/update/moby227.h"
#include "game/collproc.h"
#include "game/hero.h"
#include "game/mobyfunc.h"
#include "game/mobyproc.h"
#include "game/mobyutil.h"
#include "game/update/moby224.h"
#include "game/update/moby229.h"
#include "game/update/moby243.h"
#include "idol/fastfunc.h"
#include "idol/mathfunc.h"

// 0x02fa200 (0x49c bytes)
// inlined: FastAtan2 @0x2fa348, FastAtan2 @0x2fa51c
MobyInstance *
M227_002fa200(MobyInstance *param_1,int param_2,MobyInstance *param_3)

{
  longlong lVar1;
  byte bVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  ushort uVar7;
  ulonglong *puVar8;
  int iVar9;
  int iVar10;
  ulonglong uVar11;
  longlong lVar12;
  float *pfVar14;
  longlong lVar13;
  ulonglong uVar15;
  longlong lVar16;
  ulonglong unaff_r25;
  ulonglong unaff_r26;
  ulonglong unaff_r27;
  MobyInstance *pMVar17;
  ulonglong unaff_r28;
  ushort *puVar18;
  ulonglong unaff_r29;
  ulonglong unaff_r30;
  ulonglong unaff_r31;
  ulonglong in_LR;
  longlong lVar19;
  double dVar20;
  double dVar21;
  double dVar22;
  ulonglong in_f30;
  ulonglong in_f31;
  double dVar23;
  double dVar24;
  
  uVar11 = ZEXT48(&stack0x00000000);
  lVar1 = uVar11 - 0x110;
  puVar8 = (ulonglong *)lVar1;
  *puVar8 = uVar11;
  puVar8[0x24] = in_LR;
  puVar8[0x20] = in_f30;
  puVar8[0x21] = in_f31;
  puVar8[0x1a] = unaff_r26;
  puVar8[0x1f] = unaff_r31;
  puVar8[0x19] = unaff_r25;
  puVar8[0x1e] = unaff_r30;
  puVar8[0x1d] = unaff_r29;
  dVar23 = 0.0;
  puVar8[0x1c] = unaff_r28;
  iVar9 = g_NumMobyGroups;
  bVar2 = param_1->group;
  puVar8[0x1b] = unaff_r27;
  if (((int)(uint)bVar2 < iVar9) && (bVar2 != 0xff)) {
    puVar18 = (ushort *)(&g_MobyGroups)[bVar2];
    dVar24 = dVar23;
    if (param_2 != 0) {
      fVar6 = g_heroPosition.x - (param_1->pos).x;
      fVar5 = g_heroPosition.y - (param_1->pos).y;
      fVar3 = ABS(fVar6);
      fVar4 = ABS(fVar5);
      *(float *)((int)puVar8 + 0x7c) = fVar6;
      *(float *)(puVar8 + 0x10) = fVar5;
      *(float *)((int)puVar8 + 0x84) = fVar3 - fVar4;
      uVar15 = (ulonglong)(*(uint *)((int)puVar8 + 0x7c) >> 0x1c) & 8 |
               (ulonglong)(*(uint *)((int)puVar8 + 0x84) >> 0x1e) & 2 |
               (ulonglong)(*(uint *)(puVar8 + 0x10) >> 0x1d) & 4;
      fVar6 = ABS(*(float *)((int)puVar8 + 0x7c));
      if (*(float *)((int)puVar8 + 0x84) - 0.0 < 0.0) {
        fVar6 = fVar4;
      }
      fVar5 = *(float *)(&g_atanQuadrantTable + (int)(uVar15 << 2));
      fVar4 = ABS(*(float *)(puVar8 + 0x10));
      if (*(float *)((int)puVar8 + 0x84) - 0.0 < 0.0) {
        fVar4 = fVar3;
      }
      fVar3 = *(float *)(((uint)(uVar15 << 2) | 0x735900) + 4);
      if (0.0 < fVar6) {
        lVar12 = uVar11 - 0x100;
        lVar16 = uVar11 - 0x58;
        lVar13 = uVar11 - 0x68;
        lVar19 = 2;
        fVar6 = (fVar4 - fVar6) / (fVar4 + fVar6);
        fVar4 = fVar6 * fVar6;
        *(float *)(puVar8 + 0x15) = fVar6;
        *(float *)((int)puVar8 + 0xac) = fVar6;
        *(float *)(puVar8 + 0x16) = fVar6;
        *(float *)((int)puVar8 + 0xb4) = fVar6;
        fVar6 = fVar4 * fVar4;
        *(float *)((int)puVar8 + 0xac) = *(float *)((int)puVar8 + 0xac) * fVar4;
        *(float *)(puVar8 + 0x16) = *(float *)(puVar8 + 0x16) * fVar6;
        *(float *)((int)puVar8 + 0xb4) = *(float *)((int)puVar8 + 0xb4) * fVar6 * fVar4;
        do {
          *(float *)((int)lVar12 + 0xa8) = *(float *)((int)lVar12 + 0x98) * fVar6 * fVar6;
          iVar9 = (int)lVar13;
          lVar13 = lVar13 + 8;
          lVar12 = lVar12 + 8;
          *(float *)((int)lVar16 + 4) = *(float *)(iVar9 + 4) * fVar6 * fVar6;
          lVar16 = lVar16 + 8;
          lVar19 = lVar19 + -1;
        } while (lVar19 != 0);
        lVar19 = 4;
        lVar16 = uVar11 - 0x68;
        pfVar14 = (float *)&DAT_007358e0;
        lVar12 = lVar1;
        lVar13 = lVar16;
        do {
          fVar6 = *pfVar14;
          fVar4 = pfVar14[1];
          pfVar14 = pfVar14 + 2;
          *(float *)((int)lVar12 + 0xa8) = *(float *)((int)lVar12 + 0xa8) * fVar6;
          lVar12 = lVar12 + 8;
          *(float *)((int)lVar13 + 4) = *(float *)((int)lVar13 + 4) * fVar4;
          lVar13 = lVar13 + 8;
          lVar19 = lVar19 + -1;
        } while (lVar19 != 0);
        lVar13 = 2;
        lVar12 = lVar1;
        do {
          iVar9 = (int)lVar12;
          iVar10 = (int)lVar16;
          lVar12 = lVar12 + 0x10;
          lVar16 = lVar16 + 0x10;
          dVar24 = (double)((float)(dVar24 + (double)*(float *)(iVar9 + 0xa8)) +
                            *(float *)(iVar10 + 4) + *(float *)(iVar10 + 8) +
                           *(float *)(iVar10 + 0xc));
          lVar13 = lVar13 + -1;
        } while (lVar13 != 0);
        dVar24 = (double)((float)(dVar24 + 0.7853981852531433) * fVar5 + fVar3);
      }
    }
    do {
      pMVar17 = g_MobyInstance + (*puVar18 & 0x7fff);
      if (param_2 != 0) {
        fVar6 = (pMVar17->pos).x - (param_1->pos).x;
        fVar5 = (pMVar17->pos).y - (param_1->pos).y;
        dVar20 = ABS((double)fVar6);
        dVar22 = ABS((double)fVar5);
        *(float *)(puVar8 + 0xe) = fVar6;
        *(float *)((int)puVar8 + 0x74) = fVar5;
        *(float *)(puVar8 + 0xf) = (float)(dVar20 - dVar22);
        uVar15 = (ulonglong)(*(uint *)(puVar8 + 0xe) >> 0x1c) & 8 |
                 (ulonglong)(*(uint *)(puVar8 + 0xf) >> 0x1e) & 2 |
                 (ulonglong)(*(uint *)((int)puVar8 + 0x74) >> 0x1d) & 4;
        dVar21 = ABS((double)*(float *)(puVar8 + 0xe));
        if ((double)*(float *)(puVar8 + 0xf) - dVar23 < 0.0) {
          dVar21 = dVar22;
        }
        fVar6 = *(float *)(&g_atanQuadrantTable + (int)(uVar15 << 2));
        dVar22 = ABS((double)*(float *)((int)puVar8 + 0x74));
        if ((double)*(float *)(puVar8 + 0xf) - dVar23 < 0.0) {
          dVar22 = dVar20;
        }
        fVar5 = *(float *)(((uint)(uVar15 << 2) | 0x735900) + 4);
        dVar20 = dVar23;
        if (dVar23 < dVar21) {
          lVar12 = uVar11 - 0x100;
          lVar16 = uVar11 - 0x78;
          lVar13 = uVar11 - 0x88;
          lVar19 = 2;
          fVar4 = (float)(dVar22 - dVar21) / (float)(dVar22 + dVar21);
          fVar3 = fVar4 * fVar4;
          *(float *)(puVar8 + 0x11) = fVar4;
          *(float *)((int)puVar8 + 0x8c) = fVar4;
          *(float *)(puVar8 + 0x12) = fVar4;
          *(float *)((int)puVar8 + 0x94) = fVar4;
          fVar4 = fVar3 * fVar3;
          *(float *)((int)puVar8 + 0x8c) = *(float *)((int)puVar8 + 0x8c) * fVar3;
          *(float *)(puVar8 + 0x12) = *(float *)(puVar8 + 0x12) * fVar4;
          *(float *)((int)puVar8 + 0x94) = *(float *)((int)puVar8 + 0x94) * fVar4 * fVar3;
          do {
            *(float *)((int)lVar12 + 0x88) = *(float *)((int)lVar12 + 0x78) * fVar4 * fVar4;
            iVar9 = (int)lVar13;
            lVar13 = lVar13 + 8;
            lVar12 = lVar12 + 8;
            *(float *)((int)lVar16 + 4) = *(float *)(iVar9 + 4) * fVar4 * fVar4;
            lVar16 = lVar16 + 8;
            lVar19 = lVar19 + -1;
          } while (lVar19 != 0);
          lVar19 = 4;
          lVar16 = uVar11 - 0x88;
          pfVar14 = (float *)&DAT_007358e0;
          lVar12 = lVar1;
          lVar13 = lVar16;
          do {
            fVar4 = *pfVar14;
            fVar3 = pfVar14[1];
            pfVar14 = pfVar14 + 2;
            *(float *)((int)lVar12 + 0x88) = *(float *)((int)lVar12 + 0x88) * fVar4;
            lVar12 = lVar12 + 8;
            *(float *)((int)lVar13 + 4) = *(float *)((int)lVar13 + 4) * fVar3;
            lVar13 = lVar13 + 8;
            lVar19 = lVar19 + -1;
          } while (lVar19 != 0);
          lVar13 = 2;
          lVar12 = lVar1;
          dVar21 = dVar23;
          do {
            iVar9 = (int)lVar12;
            iVar10 = (int)lVar16;
            lVar12 = lVar12 + 0x10;
            lVar16 = lVar16 + 0x10;
            dVar21 = (double)((float)(dVar21 + (double)*(float *)(iVar9 + 0x88)) +
                              *(float *)(iVar10 + 4) + *(float *)(iVar10 + 8) +
                             *(float *)(iVar10 + 0xc));
            lVar13 = lVar13 + -1;
          } while (lVar13 != 0);
          dVar20 = (double)((float)(dVar21 + 0.7853981852531433) * fVar6 + fVar5);
        }
        FastSubRots((float)dVar20,(float)dVar24);
      }
      if (((param_1 != pMVar17) && (param_3 != pMVar17)) && (pMVar17->oClass != 0xe3)) {
        return pMVar17;
      }
      uVar7 = *puVar18;
      puVar18 = puVar18 + 1;
    } while (-1 < (short)uVar7);
    trapWord(4,0,0);
  }
  return (MobyInstance *)0x0;
}


// 0x02fa6f0 (0x15a4 bytes)
// strings: 002fa6c0: '?fff' (raw)

/* Moby 227 */

void UpdateMoby_227(MobyInstance *moby)

{
  byte bVar1;
  u8 uVar2;
  float fVar3;
  float fVar4;
  short sVar5;
  void *pvVar6;
  int iVar7;
  f32 fVar8;
  undefined4 uVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  undefined8 uVar16;
  int iVar17;
  float *pfVar18;
  MobyInstance *pMVar19;
  uint uVar20;
  ulonglong uVar21;
  ulonglong uVar22;
  undefined8 in_LR;
  double dVar23;
  double dVar24;
  double dVar25;
  double dVar26;
  double dVar27;
  double dVar28;
  double dVar29;
  double dVar30;
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
  GPiece<16> auVar41;
  GPiece<16> local_130;
  GPiece<16> local_120;
  GPiece<16> local_110;
  GPiece<16> local_100;
  GPiece<16> local_f0;
  GPiece<16> local_e0;
  GPiece<16> local_d0;
  float local_c0;
  float local_bc;
  GPiece<16> local_b0;
  GPiece<16> local_a0;
  GPiece<48> local_90;
  
  pvVar6 = moby->pVar;
  uVar21 = ZEXT48(pvVar6);
  uVar16 = MB_GetPvarsIfMobyHasThem(moby);
  iVar17 = MB_damage(moby,0x30000,0);
  FastDecTimerS32(uVar21 + 0x140);
  pfVar18 = (float *)uVar16;
  if ((((iVar17 != 0) && (*(int *)((int)pvVar6 + 0x140) == 0)) && (moby->state != '\x04')) &&
     ((moby->state != '\x03' ||
      ((moby->updateId == moby->animationId &&
       (*(uint *)((int)pvVar6 + 0x13c) != (uint)g_heroMobyPtr->updateId)))))) {
    *pfVar18 = *pfVar18 - *(float *)(iVar17 + 0x2c);
    moby->damage = -1;
    iVar7 = *(int *)(iVar17 + 0x20);
    fVar3 = *(float *)(iVar17 + 0x2c);
    *(uint *)((int)pvVar6 + 0x13c) = (uint)g_heroMobyPtr->updateId;
    sVar5 = *(short *)(iVar7 + 0xa6);
    iVar17 = FastDoubleToInt((double)(6.0 - fVar3));
    if (iVar17 < 6) {
      if ((int)*pfVar18 < 1) {
        moby->state = '\x04';
        *(undefined4 *)((int)pvVar6 + 100) = 3;
        *(undefined4 *)((int)pvVar6 + 0x58) = 0x3e19999a;
        *(undefined4 *)((int)pvVar6 + 0x50) = 0x3c03126f;
        *(undefined4 *)((int)pvVar6 + 0x5c) = 0x3e000000;
        *(undefined4 *)((int)pvVar6 + 0x54) = 0x3a03126f;
        *(undefined1 *)((int)pvVar6 + 0x7d) = 2;
        if (sVar5 == 0xac) {
          *(undefined4 *)((int)pvVar6 + 0x5c) = 0x3e400000;
          *(undefined4 *)((int)pvVar6 + 0x58) = 0x3e666667;
        }
        FUN_005e8338((double)((moby->pos).x - g_heroPosition.x),
                     (double)((moby->pos).y - g_heroPosition.y));
        MB_StartKick(moby,uVar21 + 0x40);
      }
      else {
        if (moby->state != '\x03') {
          moby->setByGroup = moby->state;
        }
        moby->state = '\x03';
        *(undefined4 *)((int)pvVar6 + 0x50) = 0x3c03126f;
        *(undefined4 *)((int)pvVar6 + 100) = 3;
        *(undefined4 *)((int)pvVar6 + 0x54) = 0x3a03126f;
        *(undefined4 *)((int)pvVar6 + 0x5c) = 0x3e000000;
        *(undefined4 *)((int)pvVar6 + 0x58) = 0x3d4ccccd;
        *(undefined1 *)((int)pvVar6 + 0x7d) = 0;
        FUN_005e8338((double)((moby->pos).x - g_heroPosition.x),
                     (double)((moby->pos).y - g_heroPosition.y));
        MB_StartKick(moby,uVar21 + 0x40);
      }
    }
    else {
      *(undefined1 *)((int)pvVar6 + 0xa7) = 0x40;
      MB_UpdateLightsTransition(moby,uVar21 + 0xa0);
      auVar31 = ZEXT416(0xffffffff);
      auVar31 = auVar31 | auVar31 << 0x20 | auVar31 << 0x40 | auVar31 << 0x60;
      auVar32 = vectorShiftLeftIntegerWord(auVar31,auVar31);
      auVar31 = loadVectorLeftIndexed(4,0x2fa69c);
      auVar31 = auVar31 >> 0x60 & (GPiece<16>)0xffffffff;
      auVar34 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
      auVar31 = vectorMultiplyAddFloatingPoint
                          (auVar34,auVar31 | auVar31 << 0x20 | auVar31 << 0x40 | auVar31 << 0x60,
                           auVar32);
      auVar31 = vectorConvertToSignedFixedPointWordSaturate(auVar31,0);
      auVar31 = auVar31 >> 0x60 & (GPiece<16>)0xffffffff;
      uVar9 = storeVectorElementWordIndexed
                        (auVar31 | auVar31 << 0x20 | auVar31 << 0x40 | auVar31 << 0x60,0x140,uVar21)
      ;
      *(undefined4 *)((int)pvVar6 + 0x140U & 0xfffffffc) = uVar9;
      fVar3 = (moby->pos).x - g_heroPosition.x;
      fVar4 = (moby->pos).y - g_heroPosition.y;
      *(int *)((int)pvVar6 + 0x138) = DAT_010bb448 - DAT_010bb44c;
      dVar23 = (double)FUN_005e8338((double)fVar3,(double)fVar4);
      dVar30 = 3.141592502593994;
      fVar3 = (float)(dVar23 + 1.570796251296997);
      dVar29 = -3.141592502593994;
      dVar28 = -0.16666656732559204;
      dVar27 = 0.008333025500178337;
      dVar26 = -0.0001980741071747616;
      dVar23 = 2.601886990305502e-06;
      fVar4 = 3.1415925 - fVar3;
      if (fVar3 - (3.1415925 - fVar3) < 0.0) {
        fVar4 = fVar3;
      }
      fVar10 = -3.1415925 - fVar3;
      if ((-3.1415925 - fVar3) - fVar4 < 0.0) {
        fVar10 = fVar4;
      }
      fVar12 = fVar10 * fVar10;
      fVar3 = fVar12 * fVar12 * fVar10;
      fVar4 = fVar12 * fVar3;
      fVar3 = (fVar12 * fVar4 * 2.601887e-06 +
              fVar4 * -0.0001980741 + fVar3 * 0.0083330255 + fVar12 * fVar10 * -0.16666657 + fVar10)
              * DAT_007ff0c4;
      dVar24 = (double)FUN_005e8338((double)((moby->pos).x - g_heroPosition.x),
                                    (double)((moby->pos).y - g_heroPosition.y));
      fVar4 = DAT_007ff0c4;
      dVar25 = (double)(float)(dVar30 - dVar24);
      if (dVar24 - (double)(float)(dVar30 - dVar24) < 0.0) {
        dVar25 = dVar24;
      }
      dVar30 = (double)(float)(dVar29 - dVar24);
      if ((double)(float)(dVar29 - dVar24) - dVar25 < 0.0) {
        dVar30 = dVar25;
      }
      dVar25 = (double)(float)(dVar30 * dVar30);
      (moby->pos).x = (moby->pos).x + fVar3;
      dVar24 = (double)(float)(dVar25 * (double)(float)(dVar25 * dVar30));
      dVar29 = (double)(float)(dVar25 * dVar24);
      (moby->pos).y =
           (float)((double)(float)(dVar25 * dVar29) * dVar23 +
                  (double)(float)(dVar29 * dVar26 +
                                 (double)(float)(dVar24 * dVar27 +
                                                (double)(float)((double)(float)(dVar25 * dVar30) *
                                                                dVar28 + dVar30)))) * fVar4 +
           (moby->pos).y;
      iVar17 = STUB_00055ac0_RET_0(local_130,800,0,moby,0);
      if (iVar17 != 0) {
        (moby->pos).x = g_CollOutput.push.x;
        (moby->pos).y = g_CollOutput.push.y;
      }
    }
  }
  fVar3 = g_CollOutput.ip.z;
  bVar1 = moby->state;
  if (bVar1 < 6) {
    if (bVar1 == 5) {
      uVar16 = FUN_005e8338((double)(g_heroPosition.x - (moby->pos).x),
                            (double)(g_heroPosition.y - (moby->pos).y));
      OrganicDeltAngSpeed
                (uVar16,(double)DAT_007ff0e0,(double)DAT_007ff0e4,(double)DAT_007ff0e8,moby,0x800000
                 ,uVar21 + 0x144);
      (moby->pos).z = (moby->pos).z + *(float *)((int)pvVar6 + 0x5c);
      fVar3 = *(float *)((int)pvVar6 + 0x5c) - DAT_010bb454;
      *(float *)((int)pvVar6 + 0x5c) = fVar3;
      if ((fVar3 < 0.0) &&
         (iVar17 = STUB_00055ab8_RET_0(local_e0,local_d0,2,0,0), iVar17 != 0)) {
        fVar3 = (moby->pos).y - g_heroPosition.y;
        fVar4 = (moby->pos).x - g_heroPosition.x;
        if (SQRT(fVar4 * fVar4 + fVar3 * fVar3) < DAT_007ff0cc) {
          moby->state = '\n';
          if (moby->animationId != '\x02') {
            MB_SetAnimationFrame(moby,2,0,5,1);
          }
          iVar17 = M227_002fa200(moby,1,*(undefined4 *)((int)pvVar6 + 0x14c));
          *(int *)((int)pvVar6 + 0x14c) = iVar17;
          if (iVar17 != 0) goto LAB_002fb9e4;
        }
        fVar8 = (moby->pos).z;
        uVar20 = (int)fVar8 >> 0x1f;
        if ((int)((uVar20 >> 1 ^ (uint)fVar8) - uVar20) <=
            (int)(((uint)((int)g_CollOutput.ip.z >> 0x1f) >> 1 ^ (uint)g_CollOutput.ip.z) -
                 ((int)g_CollOutput.ip.z >> 0x1f))) {
          (moby->pos).z = g_CollOutput.ip.z;
          moby->state = '\f';
        }
      }
    }
    else if (bVar1 == 4) {
      uVar20 = MB_UpdateKick(moby,(KickVars *)((int)pvVar6 + 0x40));
      if ((uVar20 & 0x40) != 0) {
        DeleteMoby(moby);
        return;
      }
    }
    else if (bVar1 == 3) {
      moby->damage = -1;
      if ((-1 < (int)*(uint *)((int)pvVar6 + 0x13c)) &&
         (*(uint *)((int)pvVar6 + 0x13c) != (uint)g_heroMobyPtr->updateId)) {
        *(undefined4 *)((int)pvVar6 + 0x13c) = 0xffffffff;
      }
      uVar20 = MB_UpdateKick(moby,(KickVars *)((int)pvVar6 + 0x40));
      if ((uVar20 & 0x40) != 0) {
        *(undefined4 *)((int)pvVar6 + 0x13c) = 0xffffffff;
        moby->state = moby->setByGroup;
        if (moby->animationId != '\r') {
          MB_SetAnimationFrame(moby,0xd,0,1,1);
        }
      }
    }
    else if (bVar1 != 2) {
      if (bVar1 == 1) {
        fVar3 = (moby->pos).y - g_heroPosition.y;
        fVar4 = (moby->pos).x - g_heroPosition.x;
        dVar23 = (double)SQRT(fVar4 * fVar4 + fVar3 * fVar3);
        iVar17 = FastDecTimerS32(uVar21 + 0x15c);
        if (iVar17 != 0) {
          if ((double)DAT_007ff0cc <= dVar23) {
            iVar17 = FastDecTimerS16(uVar21 + 0x14a);
            if ((iVar17 != 0) && (dVar23 < (double)DAT_007ff0c8)) {
              *(undefined4 *)((int)pvVar6 + 0x5c) = DAT_010bb450;
              moby->state = '\x05';
            }
          }
          else {
            moby->state = '\t';
            *(undefined4 *)((int)pvVar6 + 0x5c) = DAT_010bb450;
          }
        }
      }
      else if (bVar1 == 0) {
        if (moby->animationId != '\r') {
          MB_SetAnimationFrame(moby,0xd,0,1,1);
        }
        moby->state = '\x01';
        *(undefined4 *)((int)pvVar6 + 0x130) = 0;
        *(undefined4 *)((int)pvVar6 + 0x134) = 0;
        AttachManipulator(moby,0,(int)pvVar6 + 0xb0);
        AttachManipulator(moby,2,(int)pvVar6 + 0xf0);
        auVar31 = loadVectorLeftIndexed(0xfffffffffffff0bc,0x800000);
        auVar31 = vectorConvertFromSignedFixedPointWord(auVar31,0);
        auVar31 = auVar31 >> 0x60 & (GPiece<16>)0xffffffff;
        uVar9 = storeVectorElementWordIndexed
                          (auVar31 | auVar31 << 0x20 | auVar31 << 0x40 | auVar31 << 0x60,0,uVar16);
        *(undefined4 *)((uint)pfVar18 & 0xfffffffc) = uVar9;
        *(undefined2 *)((int)pvVar6 + 0x14a) = 0;
        *(undefined4 *)((int)pvVar6 + 0x15c) = 0;
        iVar17 = M227_002fa200(moby,0,0);
        if (iVar17 == 0) {
          trapWord(0x1f,in_LR,in_LR);
        }
        else {
          (moby->pos).x = *(f32 *)(iVar17 + 0x10);
          (moby->pos).y = *(f32 *)(iVar17 + 0x14);
          fVar3 = *(float *)(iVar17 + 0x18);
          (moby->pos).z = fVar3;
          (moby->pos).w = *(f32 *)(iVar17 + 0x1c);
          fVar4 = DAT_007ff0d0;
          *(int *)((int)pvVar6 + 0x14c) = iVar17;
          (moby->pos).z = fVar3 - fVar4;
        }
      }
    }
  }
  else if (bVar1 == 0xc) {
    dVar23 = (double)FUN_005e8338((double)(g_heroPosition.x - (moby->pos).x),
                                  (double)(g_heroPosition.y - (moby->pos).y));
    OrganicDeltAngSpeed
              (dVar23,(double)DAT_007ff0e0,(double)DAT_007ff0e4,(double)DAT_007ff0e8,moby,0x800000,
               uVar21 + 0x144);
    dVar23 = (double)FastSubRots((moby->rotation).z,(float)dVar23);
    if (dVar23 < (double)DAT_007ff0d8) {
      moby->state = '\x06';
      *(undefined2 *)((int)pvVar6 + 0x148) = 0;
      if (moby->animationId != '&') {
        MB_SetAnimationFrame(moby,0x26,0,5,1);
      }
    }
  }
  else if (bVar1 == 0xb) {
    iVar17 = *(int *)((int)pvVar6 + 0x14c);
    if (*(int *)((int)pvVar6 + 0x158) != 0) {
      FastDecTimerS32(uVar21 + 0x158);
      dVar23 = (double)FastIntToDouble(DAT_010bb468);
      fVar4 = *(float *)(iVar17 + 0x10);
      fVar3 = (float)((double)(longlong)*(int *)((int)pvVar6 + 0x158) / dVar23);
      (moby->pos).x = (*(float *)((int)pvVar6 + 0x150) - fVar4) * fVar3 + fVar4;
      fVar4 = *(float *)(iVar17 + 0x14);
      (moby->pos).y = (*(float *)((int)pvVar6 + 0x154) - fVar4) * fVar3 + fVar4;
    }
    (moby->pos).z = (moby->pos).z + *(float *)((int)pvVar6 + 0x5c);
    fVar3 = *(float *)((int)pvVar6 + 0x5c) - DAT_010bb45c;
    *(float *)((int)pvVar6 + 0x5c) = fVar3;
    if (((fVar3 < 0.0) &&
        (iVar17 = STUB_00055ab8_RET_0(local_100,local_f0,2,0,0), fVar3 = DAT_007ff0d0,
        iVar17 != 0)) && ((moby->pos).z + DAT_007ff0d0 <= g_CollOutput.ip.z)) {
      *(undefined4 *)((int)pvVar6 + 0x15c) = DAT_010bb474;
      *(short *)((int)pvVar6 + 0x14a) = (short)DAT_010bb460;
      fVar3 = g_CollOutput.ip.z - fVar3;
      moby->state = '\x01';
      uVar2 = moby->animationId;
      (moby->pos).z = fVar3;
      if (uVar2 != '\r') {
        MB_SetAnimationFrame(moby,0xd,0,3,1);
      }
    }
  }
  else if (bVar1 == 10) {
    uVar16 = FUN_005e8338((double)(*(float *)(*(int *)((int)pvVar6 + 0x14c) + 0x10) - (moby->pos).x)
                          ,(double)(*(float *)(*(int *)((int)pvVar6 + 0x14c) + 0x14) - (moby->pos).y
                                   ));
    OrganicDeltAngSpeed
              (uVar16,(double)DAT_007ff0e0,(double)DAT_007ff0e4,(double)DAT_007ff0e8,moby,0x800000,
               uVar21 + 0x144);
    if (moby->animationId != '\x02') {
      MB_SetAnimationFrame(moby,2,0,5,1);
    }
    fVar3 = (moby->rotation).z;
    fVar4 = fVar3 + 1.5707963;
    fVar10 = 3.1415925 - fVar3;
    if (fVar3 - (3.1415925 - fVar3) < 0.0) {
      fVar10 = fVar3;
    }
    fVar12 = 3.1415925 - fVar4;
    if (fVar4 - (3.1415925 - fVar4) < 0.0) {
      fVar12 = fVar4;
    }
    fVar11 = -3.1415925 - fVar3;
    if ((-3.1415925 - fVar3) - fVar10 < 0.0) {
      fVar11 = fVar10;
    }
    fVar3 = -3.1415925 - fVar4;
    if ((-3.1415925 - fVar4) - fVar12 < 0.0) {
      fVar3 = fVar12;
    }
    fVar4 = fVar11 * fVar11;
    fVar10 = fVar3 * fVar3;
    fVar14 = fVar4 * fVar4 * fVar11;
    fVar12 = fVar10 * fVar10 * fVar3;
    fVar15 = fVar4 * fVar14;
    fVar13 = fVar10 * fVar12;
    iVar17 = *(int *)((int)pvVar6 + 0x14c);
    fVar4 = (fVar4 * fVar15 * 2.601887e-06 +
            fVar15 * -0.0001980741 + fVar14 * 0.0083330255 + fVar4 * fVar11 * -0.16666657 + fVar11)
            * DAT_010bb464 + (moby->pos).y;
    fVar3 = (fVar10 * fVar13 * 2.601887e-06 +
            fVar13 * -0.0001980741 + fVar12 * 0.0083330255 + fVar10 * fVar3 * -0.16666657 + fVar3) *
            DAT_010bb464 + (moby->pos).x;
    (moby->pos).y = fVar4;
    (moby->pos).x = fVar3;
    fVar10 = fVar4 - *(float *)(iVar17 + 0x14);
    fVar12 = fVar3 - *(float *)(iVar17 + 0x10);
    if (SQRT(fVar12 * fVar12 + fVar10 * fVar10) < DAT_007ff0d4) {
      if (SQRT((fVar3 - g_heroPosition.x) * (fVar3 - g_heroPosition.x) +
               (fVar4 - g_heroPosition.y) * (fVar4 - g_heroPosition.y)) < DAT_007ff0cc) {
        iVar17 = M227_002fa200(moby,1,iVar17);
        *(int *)((int)pvVar6 + 0x14c) = iVar17;
        if (iVar17 != 0) goto LAB_002fb9e4;
      }
      moby->state = '\v';
      if (moby->animationId != '\r') {
        MB_SetAnimationFrame(moby,0xd,0,5,1);
      }
      *(undefined4 *)((int)pvVar6 + 0x5c) = DAT_010bb458;
      uVar9 = DAT_010bb468;
      *(f32 *)((int)pvVar6 + 0x150) = (moby->pos).x;
      fVar8 = (moby->pos).y;
      *(undefined4 *)((int)pvVar6 + 0x158) = uVar9;
      *(f32 *)((int)pvVar6 + 0x154) = fVar8;
    }
  }
  else if (bVar1 == 9) {
    (moby->pos).z = (moby->pos).z + *(float *)((int)pvVar6 + 0x5c);
    fVar3 = *(float *)((int)pvVar6 + 0x5c) - DAT_010bb454;
    *(float *)((int)pvVar6 + 0x5c) = fVar3;
    if (((fVar3 < 0.0) &&
        (iVar17 = STUB_00055ab8_RET_0(local_120,local_110,2,0,0), iVar17 != 0)) &&
       (fVar8 = (moby->pos).z, uVar20 = (int)fVar8 >> 0x1f,
       (int)((uVar20 >> 1 ^ (uint)fVar8) - uVar20) <=
       (int)(((uint)((int)g_CollOutput.ip.z >> 0x1f) >> 1 ^ (uint)g_CollOutput.ip.z) -
            ((int)g_CollOutput.ip.z >> 0x1f)))) {
      uVar2 = moby->animationId;
      (moby->pos).z = g_CollOutput.ip.z;
      moby->state = '\n';
      if (uVar2 != '\x02') {
        MB_SetAnimationFrame(moby,2,0,5,1);
      }
      iVar17 = M227_002fa200(moby,1,*(undefined4 *)((int)pvVar6 + 0x14c));
      *(int *)((int)pvVar6 + 0x14c) = iVar17;
      if (iVar17 == 0) {
        if (moby->animationId != '\r') {
          MB_SetAnimationFrame(moby,0xd,0,5,1);
        }
        moby->state = '\b';
        *(undefined4 *)((int)pvVar6 + 0x5c) = DAT_010bb458;
      }
    }
  }
  else if (bVar1 == 8) {
    (moby->pos).z = (moby->pos).z + *(float *)((int)pvVar6 + 0x5c);
    fVar3 = *(float *)((int)pvVar6 + 0x5c) - DAT_010bb45c;
    *(float *)((int)pvVar6 + 0x5c) = fVar3;
    if (((fVar3 < 0.0) &&
        (iVar17 = STUB_00055ab8_RET_0(local_a0,local_90,2,0,0), fVar3 = DAT_007ff0d0,
        iVar17 != 0)) && ((moby->pos).z + DAT_007ff0d0 <= g_CollOutput.ip.z)) {
      *(undefined4 *)((int)pvVar6 + 0x15c) = DAT_010bb474;
      *(short *)((int)pvVar6 + 0x14a) = (short)DAT_010bb460;
      fVar3 = g_CollOutput.ip.z - fVar3;
      moby->state = '\x01';
      uVar2 = moby->animationId;
      (moby->pos).z = fVar3;
      if (uVar2 != '\r') {
        MB_SetAnimationFrame(moby,0xd,0,3,1);
      }
    }
  }
  else if (bVar1 == 7) {
    if ((moby->field43_0x70 & 2U) != 0) {
      fVar4 = (moby->pos).y - g_heroPosition.y;
      fVar10 = (moby->pos).x - g_heroPosition.x;
      if (SQRT(fVar10 * fVar10 + fVar4 * fVar4) < DAT_007ff0cc) {
        uVar2 = moby->animationId;
        moby->state = '\n';
        (moby->pos).z = fVar3;
        if (uVar2 != '\x02') {
          MB_SetAnimationFrame(moby,2,0,5,1);
        }
        iVar17 = M227_002fa200(moby,1,*(undefined4 *)((int)pvVar6 + 0x14c));
        *(int *)((int)pvVar6 + 0x14c) = iVar17;
        if (iVar17 != 0) goto LAB_002fb9e4;
      }
      if (moby->animationId != '\r') {
        MB_SetAnimationFrame(moby,0xd,0,5,1);
      }
      moby->state = '\b';
      *(undefined4 *)((int)pvVar6 + 0x5c) = DAT_010bb458;
    }
  }
  else if (bVar1 == 6) {
    uVar16 = FUN_005e8338((double)(g_heroPosition.x - (moby->pos).x),
                          (double)(g_heroPosition.y - (moby->pos).y));
    OrganicDeltAngSpeed
              (uVar16,(double)DAT_007ff0e0,(double)DAT_007ff0e4,(double)DAT_007ff0e8,moby,0x800000,
               uVar21 + 0x144);
    if (((*(short *)((int)pvVar6 + 0x148) == 0) && (moby->updateId == moby->animationId)) &&
       (dVar23 = (double)BlendAnimFrame(moby), 25.0 < dVar23)) {
      GetBonePosition(moby,1,&local_c0);
      FUN_005e8338((double)((g_heroMobyPtr->pos).x - local_c0),
                   (double)((g_heroMobyPtr->pos).y - local_bc));
      MB_computeLobVelocity
                ((double)(DAT_010bb46c * 1.3),(double)(DAT_0071f418 * -9.8),&local_c0,
                 &g_heroMobyPtr->pos);
      pMVar19 = (MobyInstance *)FUN_0030f5c8(moby,&local_c0,local_b0);
      if (pMVar19 != (MobyInstance *)0x0) {
        *(undefined2 *)((int)pvVar6 + 0x148) = 1;
        pMVar19->scale = pMVar19->scale * 1.5;
        SetColorOfMoby(pMVar19,0xff,0xff,0xff);
      }
    }
    if ((moby->field43_0x70 & 2U) != 0) {
      if (moby->animationId != '(') {
        MB_SetAnimationFrame(moby,0x28,0,5,1);
      }
      moby->state = '\a';
    }
  }
LAB_002fb9e4:
  pvVar6 = moby->pVar;
  uVar22 = ZEXT48(pvVar6);
  if (*(char *)((int)pvVar6 + 0xb1) == '\x01') {
    auVar31 = loadVectorLeftIndexed(0x138,uVar22);
    auVar32 = loadVectorRightIndexed(0x148,uVar22);
    if (*(int *)((int)pvVar6 + 0x138) != 0) {
      auVar34 = loadVectorLeftIndexed(0xffffffffffffb448,0x10c0000);
      auVar33 = vectorConvertFromSignedFixedPointWord(auVar34,0);
      auVar34 = ZEXT416(0xffffffff);
      auVar35 = auVar34 | auVar34 << 0x20 | auVar34 << 0x40 | auVar34 << 0x60;
      auVar34 = ZEXT416(0xffffffff);
      auVar39 = auVar34 | auVar34 << 0x20 | auVar34 << 0x40 | auVar34 << 0x60;
      auVar36 = vectorShiftLeftIntegerWord(auVar35,auVar35);
      auVar34 = loadVectorLeftIndexed(0x48,0x2fa69c);
      auVar34 = auVar34 >> 0x60 & (GPiece<16>)0xffffffff;
      auVar38 = auVar34 | auVar34 << 0x20 | auVar34 << 0x40 | auVar34 << 0x60;
      auVar37 = vectorReciprocalEstimateFloatingPoint(auVar33);
      auVar34 = ZEXT416(0xffffffff);
      auVar34 = auVar34 | auVar34 << 0x20 | auVar34 << 0x40 | auVar34 << 0x60;
      auVar35 = vectorConvertFromSignedFixedPointWord(auVar31 | auVar32,0);
      auVar31 = ZEXT416(0xffffffff);
      auVar41 = auVar31 | auVar31 << 0x20 | auVar31 << 0x40 | auVar31 << 0x60;
      auVar40 = vectorShiftLeftIntegerWord(auVar34,auVar34);
      auVar31 = vectorNegativeMultiplySubtractFloatingPoint(auVar37,auVar33,auVar38);
      auVar32 = vectorMultiplyAddFloatingPoint(auVar37,auVar31,auVar36);
      auVar34 = vectorShiftLeftIntegerWord(auVar39,auVar39);
      auVar31 = ZEXT416(0xffffffff);
      auVar31 = auVar31 | auVar31 << 0x20 | auVar31 << 0x40 | auVar31 << 0x60;
      auVar39 = vectorShiftLeftIntegerWord(auVar31,auVar31);
      auVar31 = vectorNegativeMultiplySubtractFloatingPoint(auVar32,auVar33,auVar38);
      auVar36 = vectorMultiplyAddFloatingPoint(auVar32,auVar31,auVar34);
      auVar31 = loadVectorLeftIndexed(0x44,0x2fa69c);
      auVar37 = vectorShiftLeftIntegerWord(auVar41,auVar41);
      auVar32 = auVar31 >> 0x60 & (GPiece<16>)0xffffffff;
      auVar31 = vectorNegativeMultiplySubtractFloatingPoint(auVar36,auVar33,auVar38);
      auVar34 = loadVectorLeftIndexed(0xc,0x2fa69c);
      auVar34 = auVar34 >> 0x60 & (GPiece<16>)0xffffffff;
      auVar36 = vectorMultiplyAddFloatingPoint(auVar36,auVar31,auVar39);
      auVar31 = loadVectorLeftIndexed(0x10,0x2fa69c);
      auVar33 = auVar31 >> 0x60 & (GPiece<16>)0xffffffff;
      auVar31 = ZEXT416(0xffffffff);
      auVar38 = auVar31 | auVar31 << 0x20 | auVar31 << 0x40 | auVar31 << 0x60;
      fVar3 = (float)(longlong)*(int *)((int)pvVar6 + 0x138) *
              (3.1415927 / (float)(longlong)DAT_010bb448);
      auVar31 = vectorMultiplyAddFloatingPoint
                          (auVar36,auVar32 | auVar32 << 0x20 | auVar32 << 0x40 | auVar32 << 0x60,
                           auVar40);
      auVar32 = vectorMultiplyAddFloatingPoint(auVar35,auVar31,auVar37);
      auVar31 = ZEXT416(0xffffffff);
      auVar31 = auVar31 | auVar31 << 0x20 | auVar31 << 0x40 | auVar31 << 0x60;
      auVar35 = vectorShiftLeftIntegerWord(auVar31,auVar31);
      auVar31 = vectorSubtractFloatingPoint
                          (auVar34 | auVar34 << 0x20 | auVar34 << 0x40 | auVar34 << 0x60,auVar32);
      auVar34 = vectorSubtractFloatingPoint
                          (auVar33 | auVar33 << 0x20 | auVar33 << 0x40 | auVar33 << 0x60,auVar32);
      fVar4 = 3.1415925 - fVar3;
      if (fVar3 - (3.1415925 - fVar3) < 0.0) {
        fVar4 = fVar3;
      }
      auVar33 = loadVectorLeftIndexed(0x14,0x2fa69c);
      auVar33 = auVar33 >> 0x60 & (GPiece<16>)0xffffffff;
      auVar36 = vectorCompareGreaterThanFloatingPoint(auVar31,auVar32);
      auVar32 = vectorConditionalSelect(auVar31,auVar32,auVar36);
      auVar31 = ZEXT416(0xffffffff);
      auVar36 = auVar31 | auVar31 << 0x20 | auVar31 << 0x40 | auVar31 << 0x60;
      auVar31 = vectorCompareGreaterThanFloatingPoint(auVar32,auVar34);
      auVar36 = vectorShiftLeftIntegerWord(auVar36,auVar36);
      auVar32 = vectorConditionalSelect(auVar34,auVar32,auVar31);
      auVar31 = ZEXT416(0xffffffff);
      auVar34 = auVar31 | auVar31 << 0x20 | auVar31 << 0x40 | auVar31 << 0x60;
      auVar31 = ZEXT416(0xffffffff);
      auVar31 = auVar31 | auVar31 << 0x20 | auVar31 << 0x40 | auVar31 << 0x60;
      fVar10 = -3.1415925 - fVar3;
      if ((-3.1415925 - fVar3) - fVar4 < 0.0) {
        fVar10 = fVar4;
      }
      auVar34 = vectorShiftLeftIntegerWord(auVar34,auVar34);
      auVar31 = vectorShiftLeftIntegerWord(auVar31,auVar31);
      auVar34 = vectorMultiplyAddFloatingPoint(auVar32,auVar32,auVar34);
      fVar3 = fVar10 * fVar10;
      auVar31 = vectorMultiplyAddFloatingPoint(auVar34,auVar32,auVar31);
      fVar4 = fVar3 * fVar3 * fVar10;
      auVar36 = vectorMultiplyAddFloatingPoint(auVar34,auVar31,auVar36);
      auVar32 = vectorMultiplyAddFloatingPoint
                          (auVar31,auVar33 | auVar33 << 0x20 | auVar33 << 0x40 | auVar33 << 0x60,
                           auVar32);
      auVar31 = loadVectorLeftIndexed(0x18,0x2fa69c);
      auVar31 = auVar31 >> 0x60 & (GPiece<16>)0xffffffff;
      auVar33 = vectorShiftLeftIntegerWord(auVar38,auVar38);
      fVar12 = fVar3 * fVar4;
      auVar35 = vectorMultiplyAddFloatingPoint(auVar34,auVar36,auVar35);
      auVar32 = vectorMultiplyAddFloatingPoint
                          (auVar36,auVar31 | auVar31 << 0x20 | auVar31 << 0x40 | auVar31 << 0x60,
                           auVar32);
      auVar31 = loadVectorLeftIndexed(0x1c,0x2fa69c);
      auVar31 = auVar31 >> 0x60 & (GPiece<16>)0xffffffff;
      auVar34 = vectorMultiplyAddFloatingPoint(auVar34,auVar35,auVar33);
      auVar32 = vectorMultiplyAddFloatingPoint
                          (auVar35,auVar31 | auVar31 << 0x20 | auVar31 << 0x40 | auVar31 << 0x60,
                           auVar32);
      auVar31 = loadVectorLeftIndexed(0x20,0x2fa69c);
      auVar31 = auVar31 >> 0x60 & (GPiece<16>)0xffffffff;
      auVar32 = vectorMultiplyAddFloatingPoint
                          (auVar34,auVar31 | auVar31 << 0x20 | auVar31 << 0x40 | auVar31 << 0x60,
                           auVar32);
      auVar31 = ZEXT416(0xffffffff);
      auVar31 = auVar31 | auVar31 << 0x20 | auVar31 << 0x40 | auVar31 << 0x60;
      auVar34 = loadVectorLeftIndexed(0xfffffffffffff0c0,0x800000);
      auVar31 = vectorShiftLeftIntegerWord(auVar31,auVar31);
      auVar33 = loadVectorLeftIndexed(0x4c,0x2fa69c);
      auVar32 = vectorMultiplyAddFloatingPoint(auVar34,auVar32,auVar31);
      auVar31 = auVar33 >> 0x60 & (GPiece<16>)0xffffffff;
      fVar3 = DAT_007ff0c0 *
              (fVar3 * fVar12 * 2.601887e-06 +
              fVar12 * -0.0001980741 + fVar4 * 0.0083330255 + fVar3 * fVar10 * -0.16666657 + fVar10)
      ;
      auVar31 = (SPLAT(auVar31) ^ auVar32) >> 0x60
                & (GPiece<16>)0xffffffff;
      auVar31 = auVar31 | auVar31 << 0x20 | auVar31 << 0x40 | auVar31 << 0x60;
      uVar9 = storeVectorElementWordIndexed(auVar31,0x134,uVar22);
      *(undefined4 *)((int)pvVar6 + 0x134U & 0xfffffffc) = uVar9;
      uVar9 = storeVectorElementWordIndexed(auVar31,0x130,uVar22);
      *(undefined4 *)((int)pvVar6 + 0x130U & 0xfffffffc) = uVar9;
      FastQuaternionToEuler(-(double)fVar3,uVar22 + 0x100,1);
      FastQuaternionToEuler((double)*(float *)((int)pvVar6 + 0x130),uVar22 + 0xc0,1);
      FastDecTimerS32(uVar22 + 0x138);
    }
  }
  MB_ColorDyingMoby(moby,uVar21 + 0xa0);
  return;
}


