// game/update/moby35.cpp -- reconstructed from NPEA00385 EBOOT
// STATUS: NOT STARTED (raw Ghidra output)
// 3 functions, 0x352e88-0x354148
#include "game/update/moby35.h"
#include "game/camera.h"
#include "game/hero.h"
#include "game/mobyfunc.h"
#include "game/mobyutil.h"
#include "game/partupd.h"
#include "game/sound.h"
#include "game/update/camera5.h"
#include "game/update/moby775.h"
#include "idol/fastfunc.h"

// 0x0352e88 (0x314 bytes)
void M35_00352e88(undefined8 param_1,Vec4 *param_2)

{
  float fVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int iVar5;
  undefined2 uVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  undefined8 uVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  double dVar16;
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
  float local_b0;
  float local_ac;
  float local_a8;
  float local_a0;
  float local_9c;
  float local_98;
  
  dVar17 = 3.0;
  iVar2 = FUN_00456478(0x4008000000000000,param_2);
  if (iVar2 != 0) {
    *(undefined1 *)(iVar2 + 0x23) = 0x70;
  }
  dVar18 = 0.0;
  dVar19 = 1.570796251296997;
  iVar2 = 0;
  dVar20 = 3.141592502593994;
  dVar21 = -3.141592502593994;
  dVar22 = -0.16666656732559204;
  dVar23 = 0.008333025500178337;
  dVar24 = -0.0001980741071747616;
  dVar25 = 2.601886990305502e-06;
  dVar26 = 6.5;
  do {
    dVar7 = (double)MB_randRot();
    dVar8 = (double)MB_randRangeFloat
                              ((float)dVar18,(float)((double)g_FrameTime * dVar17));
    dVar11 = (double)(float)(dVar7 + dVar19);
    dVar9 = (double)(float)(dVar20 - dVar7);
    if (dVar7 - (double)(float)(dVar20 - dVar7) < 0.0) {
      dVar9 = dVar7;
    }
    dVar13 = (double)(float)(dVar20 - dVar11);
    if (dVar11 - (double)(float)(dVar20 - dVar11) < 0.0) {
      dVar13 = dVar11;
    }
    dVar12 = (double)(float)(dVar21 - dVar7);
    if ((double)(float)(dVar21 - dVar7) - dVar9 < 0.0) {
      dVar12 = dVar9;
    }
    dVar9 = (double)(float)(dVar21 - dVar11);
    if ((double)(float)(dVar21 - dVar11) - dVar13 < 0.0) {
      dVar9 = dVar13;
    }
    dVar7 = (double)(float)(dVar12 * dVar12);
    dVar11 = (double)(float)(dVar9 * dVar9);
    dVar15 = (double)(float)(dVar7 * (double)(float)(dVar7 * dVar12));
    dVar13 = (double)(float)(dVar11 * (double)(float)(dVar11 * dVar9));
    dVar14 = (double)(float)(dVar7 * dVar15);
    dVar16 = (double)(float)(dVar11 * dVar13);
    local_ac = (float)((double)(float)((double)(float)(dVar7 * dVar14) * dVar25 +
                                      (double)(float)(dVar14 * dVar24 +
                                                     (double)(float)(dVar15 * dVar23 +
                                                                    (double)(float)((double)(float)(
                                                  dVar7 * dVar12) * dVar22 + dVar12)))) * dVar8);
    local_b0 = (float)((double)(float)((double)(float)(dVar11 * dVar16) * dVar25 +
                                      (double)(float)(dVar16 * dVar24 +
                                                     (double)(float)(dVar13 * dVar23 +
                                                                    (double)(float)((double)(float)(
                                                  dVar11 * dVar9) * dVar22 + dVar9)))) * dVar8);
    dVar9 = (double)MB_randRangeFloat
                              ((float)((double)g_FrameTime * dVar17),
                               (float)((double)g_FrameTime * dVar26));
    local_a8 = (float)dVar9;
    uVar3 = MB_randRange(0x5a,0x78);
    uVar4 = MB_randInt(2);
    SpawnPart_35(param_2,&local_b0,uVar4,uVar3);
    iVar2 = iVar2 + 1;
  } while (iVar2 < 0x10);
  iVar2 = 0;
  dVar17 = 1.0;
  dVar18 = 0.05000000074505806;
  dVar19 = 0.699999988079071;
  dVar20 = 30.0;
  dVar21 = 60.0;
  do {
    MB_randSphere(dVar17,dVar17,&local_a0);
    local_a0 = local_a0 + param_2->x;
    local_9c = local_9c + param_2->y;
    local_98 = (float)((double)DAT_00e5aa98 + dVar18);
    uVar10 = MB_randRangeFloat((float)dVar19,(float)dVar17);
    fVar1 = -2.0;
    if (iVar2 == 0) {
      fVar1 = 2.0;
    }
    iVar5 = SpawnPart_46(uVar10,(double)fVar1,&local_a0,&DAT_00a15d30);
    if (iVar5 != 0) {
      dVar22 = (double)MB_randRangeFloat((float)dVar20,(float)dVar21);
      uVar6 = FastDoubleToInt((double)(float)(dVar22 * (double)animationSpeed));
      *(undefined2 *)(iVar5 + 10) = uVar6;
    }
    iVar2 = iVar2 + 1;
  } while (iVar2 < 0x10);
  return;
}


// 0x03531d0 (0x250 bytes)
void M35_003531d0(int param_1)

{
  float fVar1;
  int iVar2;
  undefined2 uVar3;
  int iVar4;
  undefined4 uVar5;
  double dVar6;
  double dVar7;
  undefined8 uVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  double dVar16;
  double dVar17;
  GPiece<16> auVar18;
  GPiece<16> auVar19;
  GPiece<16> auVar20;
  GPiece<32> local_b0;
  
  iVar2 = *(int *)(param_1 + 0x78);
  iVar4 = FastDecTimerS32(iVar2 + 0x84);
  if (iVar4 != 0) {
    dVar9 = 3.1415927410125732;
    dVar10 = -0.785398006439209;
    dVar11 = 0.785398006439209;
    dVar12 = -0.5;
    dVar13 = 0.5;
    iVar4 = 0;
    dVar14 = 0.699999988079071;
    dVar15 = 1.0;
    dVar16 = 3.0;
    auVar20 = loadVectorLeftIndexed(0x20,0x35319c);
    dVar17 = 5.0;
    auVar20 = auVar20 >> 0x60 & (GPiece<16>)0xffffffff;
    auVar20 = auVar20 | auVar20 << 0x20 | auVar20 << 0x40 | auVar20 << 0x60;
    do {
      dVar6 = (double)FastWrapRot(*(float *)(param_1 + 0x48),(float)dVar9);
      dVar7 = (double)MB_randRangeFloat((float)dVar10,(float)dVar11);
      FastWrapRot((float)dVar6,(float)dVar7);
      MB_randRangeFloat((float)dVar12,(float)dVar13);
      uVar8 = MB_randRangeFloat((float)dVar14,(float)dVar15);
      fVar1 = -2.0;
      if (iVar4 == 0) {
        fVar1 = 2.0;
      }
      uVar8 = SpawnPart_46(uVar8,(double)fVar1,local_b0,&DAT_00a15d30);
      if ((int)uVar8 != 0) {
        auVar18 = ZEXT416(0xffffffff);
        auVar18 = auVar18 | auVar18 << 0x20 | auVar18 << 0x40 | auVar18 << 0x60;
        auVar18 = vectorShiftLeftIntegerWord(auVar18,auVar18);
        auVar19 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
        auVar18 = vectorMultiplyAddFloatingPoint(auVar19,auVar20,auVar18);
        auVar18 = vectorConvertToSignedFixedPointWordSaturate(auVar18,0);
        auVar18 = vectorSplatHalfWord(auVar18,1);
        uVar3 = storeVectorElementHalfWordIndexed(auVar18,10,uVar8);
        *(undefined2 *)((int)uVar8 + 10) = uVar3;
      }
      MB_randRangeFloat((float)dVar16,(float)dVar17);
      uVar5 = FastDoubleToInt();
      iVar4 = iVar4 + 1;
      *(undefined4 *)(iVar2 + 0x84) = uVar5;
    } while (iVar4 < 2);
  }
  return;
}


// 0x0353470 (0xcd8 bytes)
// inlined: FastAtan2 @0x353738
/* Moby 35 */

double UpdateMoby_35(MobyInstance *moby)

{
  float fVar1;
  float fVar2;
  float fVar3;
  byte bVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  MobyModeBit MVar8;
  void *pvVar9;
  f32 fVar10;
  Spline *pSVar11;
  uint uVar12;
  ulonglong *puVar13;
  int iVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  ulonglong uVar19;
  longlong lVar20;
  undefined4 uVar21;
  int iVar22;
  ulonglong uVar23;
  longlong lVar24;
  longlong lVar25;
  longlong lVar26;
  float *pfVar27;
  longlong lVar28;
  ulonglong unaff_r27;
  ulonglong unaff_r28;
  ulonglong unaff_r29;
  ulonglong unaff_r30;
  ulonglong uVar29;
  ulonglong unaff_r31;
  ulonglong in_LR;
  longlong lVar30;
  double dVar31;
  double extraout_f1;
  double dVar32;
  double dVar33;
  double dVar34;
  double dVar35;
  ulonglong in_f28;
  ulonglong in_f29;
  double dVar36;
  ulonglong in_f30;
  double dVar37;
  ulonglong in_f31;
  double dVar38;
  GPiece<16> auVar39;
  GPiece<16> auVar40;
  GPiece<16> auVar41;
  float fVar42;
  
  lVar20 = (longlong)(int)moby;
  uVar19 = ZEXT48(&stack0x00000000);
  lVar25 = uVar19 - 0x120;
  puVar13 = (ulonglong *)lVar25;
  *puVar13 = uVar19;
  puVar13[0x26] = in_LR;
  puVar13[0x20] = in_f28;
  puVar13[0x21] = in_f29;
  puVar13[0x22] = in_f30;
  puVar13[0x23] = in_f31;
  puVar13[0x1f] = unaff_r31;
  puVar13[0x1e] = unaff_r30;
  bVar4 = moby->state;
  pvVar9 = moby->pVar;
  uVar29 = ZEXT48(pvVar9);
  fVar42 = (moby->pos).x;
  fVar5 = (moby->pos).y;
  dVar31 = (double)fVar5;
  fVar6 = (moby->pos).w;
  puVar13[0x1d] = unaff_r29;
  puVar13[0x1c] = unaff_r28;
  puVar13[0x1b] = unaff_r27;
  fVar2 = g_heroPosition.z;
  fVar7 = g_heroPosition.y;
  if (bVar4 < 2) {
    if (bVar4 == 0) {
      if (*(int *)((int)pvVar9 + 100) == 0) {
        if (*(int *)((int)pvVar9 + 0x60) == -1) {
          dVar31 = (double)DeleteMoby(moby);
        }
        else {
          uVar21 = MB_randInt(Splines[*(int *)((int)pvVar9 + 0x60)]->cnt);
          *(undefined4 *)((int)pvVar9 + 0x68) = uVar21;
          fVar42 = animationSpeed;
          auVar39 = ZEXT416(0xffffffff);
          auVar39 = auVar39 | auVar39 << 0x20 | auVar39 << 0x40 | auVar39 << 0x60;
          auVar40 = vectorShiftLeftIntegerWord(auVar39,auVar39);
          auVar39 = loadVectorLeftIndexed(4,0x353420);
          auVar39 = auVar39 >> 0x60 & (GPiece<16>)0xffffffff;
          auVar41 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
          auVar39 = vectorMultiplyAddFloatingPoint
                              (auVar41,auVar39 | auVar39 << 0x20 | auVar39 << 0x40 | auVar39 << 0x60
                               ,auVar40);
          auVar39 = vectorConvertToSignedFixedPointWordSaturate(auVar39,0);
          auVar39 = auVar39 >> 0x60 & (GPiece<16>)0xffffffff;
          uVar21 = storeVectorElementWordIndexed
                             (auVar39 | auVar39 << 0x20 | auVar39 << 0x40 | auVar39 << 0x60,0x6c,
                              uVar29);
          *(undefined4 *)((int)pvVar9 + 0x6cU & 0xfffffffc) = uVar21;
          if (moby->animationId != '\x01') {
            puVar13[0x18] = (longlong)(int)(fVar42 * 10.5);
            MB_SetAnimation(lVar20,1,0,*(undefined4 *)((int)puVar13 + 0xc4));
          }
          fVar42 = Splines[*(int *)((int)pvVar9 + 0x60)]->points[0].z - DAT_00840348;
          dVar31 = (double)fVar42;
          (moby->pos).z = fVar42;
          *(float *)((int)pvVar9 + 0x80) = fVar42;
          moby->state = '\x01';
        }
      }
      else {
        MVar8 = moby->modeBits;
        auVar39 = ZEXT416(0xffffffff);
        auVar39 = auVar39 | auVar39 << 0x20 | auVar39 << 0x40 | auVar39 << 0x60;
        moby->state = '\x02';
        fVar42 = (moby->pos).z;
        dVar31 = (double)fVar42;
        moby->updateDistance = -1;
        *(float *)((int)pvVar9 + 0x74) = fVar42;
        auVar40 = vectorShiftLeftIntegerWord(auVar39,auVar39);
        moby->modeBits = MVar8 | DISABLED;
        auVar39 = loadVectorLeftIndexed(in_LR,0x353420);
        auVar41 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
        auVar39 = auVar39 >> 0x60 & (GPiece<16>)0xffffffff;
        auVar39 = vectorMultiplyAddFloatingPoint
                            (auVar41,auVar39 | auVar39 << 0x20 | auVar39 << 0x40 | auVar39 << 0x60,
                             auVar40);
        auVar39 = vectorConvertToSignedFixedPointWordSaturate(auVar39,0);
        auVar39 = auVar39 >> 0x60 & (GPiece<16>)0xffffffff;
        uVar21 = storeVectorElementWordIndexed
                           (auVar39 | auVar39 << 0x20 | auVar39 << 0x40 | auVar39 << 0x60,0x7c,
                            uVar29);
        *(undefined4 *)((int)pvVar9 + 0x7cU & 0xfffffffc) = uVar21;
      }
    }
    else {
      iVar22 = *(int *)((int)pvVar9 + 0x68);
      pSVar11 = Splines[*(int *)((int)pvVar9 + 0x60)];
      dVar38 = (double)pSVar11->points[iVar22].x;
      dVar37 = (double)pSVar11->points[iVar22].y;
      fVar42 = (float)(dVar38 - (double)fVar42);
      dVar36 = (double)pSVar11->points[iVar22].z;
      fVar6 = ABS(fVar42);
      fVar5 = ABS((float)(dVar37 - dVar31));
      *(float *)(puVar13 + 0x12) = fVar42;
      *(float *)((int)puVar13 + 0x94) = (float)(dVar37 - dVar31);
      *(float *)(puVar13 + 0x13) = fVar6 - fVar5;
      dVar31 = 0.0;
      uVar23 = (ulonglong)(*(uint *)(puVar13 + 0x12) >> 0x1c) & 8 |
               (ulonglong)(*(uint *)(puVar13 + 0x13) >> 0x1e) & 2 |
               (ulonglong)(*(uint *)((int)puVar13 + 0x94) >> 0x1d) & 4;
      fVar42 = ABS(*(float *)(puVar13 + 0x12));
      if (*(float *)(puVar13 + 0x13) - 0.0 < 0.0) {
        fVar42 = fVar5;
      }
      fVar7 = *(float *)(&g_atanQuadrantTable + (int)(uVar23 << 2));
      fVar5 = *(float *)(((uint)(uVar23 << 2) | 0x735900) + 4);
      fVar2 = ABS(*(float *)((int)puVar13 + 0x94));
      if (*(float *)(puVar13 + 0x13) - 0.0 < 0.0) {
        fVar2 = fVar6;
      }
      dVar34 = dVar31;
      if (0.0 < fVar42) {
        lVar24 = uVar19 - 0x110;
        lVar26 = uVar19 - 0x84;
        lVar28 = uVar19 - 0x74;
        lVar30 = 2;
        fVar42 = (fVar2 - fVar42) / (fVar2 + fVar42);
        fVar6 = fVar42 * fVar42;
        *(float *)(puVar13 + 0x15) = fVar42;
        *(float *)(puVar13 + 0x14) = fVar42;
        *(float *)((int)puVar13 + 0xa4) = fVar42;
        *(float *)((int)puVar13 + 0x9c) = fVar42;
        fVar42 = fVar6 * fVar6;
        *(float *)(puVar13 + 0x14) = *(float *)(puVar13 + 0x14) * fVar6;
        *(float *)((int)puVar13 + 0xa4) = *(float *)((int)puVar13 + 0xa4) * fVar42;
        *(float *)(puVar13 + 0x15) = *(float *)(puVar13 + 0x15) * fVar42 * fVar6;
        do {
          *(float *)((int)lVar24 + 0x9c) = *(float *)((int)lVar24 + 0x8c) * fVar42 * fVar42;
          iVar22 = (int)lVar26;
          lVar24 = lVar24 + 8;
          lVar26 = lVar26 + 8;
          *(float *)((int)lVar28 + 4) = *(float *)(iVar22 + 4) * fVar42 * fVar42;
          lVar28 = lVar28 + 8;
          lVar30 = lVar30 + -1;
        } while (lVar30 != 0);
        lVar30 = 4;
        lVar28 = uVar19 - 0x84;
        pfVar27 = (float *)&DAT_007358e0;
        lVar24 = lVar25;
        lVar26 = lVar28;
        do {
          fVar42 = *pfVar27;
          fVar6 = pfVar27[1];
          pfVar27 = pfVar27 + 2;
          *(float *)((int)lVar24 + 0x9c) = *(float *)((int)lVar24 + 0x9c) * fVar42;
          lVar24 = lVar24 + 8;
          *(float *)((int)lVar26 + 4) = *(float *)((int)lVar26 + 4) * fVar6;
          lVar26 = lVar26 + 8;
          lVar30 = lVar30 + -1;
        } while (lVar30 != 0);
        lVar24 = 2;
        do {
          iVar22 = (int)lVar25;
          lVar25 = lVar25 + 0x10;
          iVar14 = (int)lVar28;
          lVar28 = lVar28 + 0x10;
          dVar34 = (double)((float)(dVar34 + (double)*(float *)(iVar22 + 0x9c)) +
                            *(float *)(iVar14 + 4) + *(float *)(iVar14 + 8) +
                           *(float *)(iVar14 + 0xc));
          lVar24 = lVar24 + -1;
        } while (lVar24 != 0);
        dVar34 = (double)((float)(dVar34 + 0.7853981852531433) * fVar7 + fVar5);
      }
      OrganicDeltAng
                ((float)dVar34,DAT_0071f418 * 3.1415927,DAT_0071f418 * 3.1415927,
                 g_FrameTime * 3.1415927,&(moby->rotation).z,0x720000,
                 (float *)((int)pvVar9 + 0x70));
      fVar5 = (moby->transform).v0.y;
      fVar6 = (moby->transform).v0.x;
      fVar7 = (moby->transform).v0.z;
      dVar35 = (double)SQRT(fVar7 * fVar7 + fVar6 * fVar6 + fVar5 * fVar5);
      fVar42 = (float)((double)(g_FrameTime * 3.0) / dVar35);
      dVar34 = dVar31;
      if (dVar31 - dVar35 < 0.0) {
        dVar34 = (double)(fVar5 * fVar42);
      }
      dVar32 = dVar31;
      if (dVar31 - dVar35 < 0.0) {
        dVar32 = (double)(fVar6 * fVar42);
      }
      dVar33 = dVar31;
      if (dVar31 - dVar35 < 0.0) {
        dVar33 = (double)(fVar7 * fVar42);
      }
      if (dVar35 - dVar31 < 0.0) {
        dVar34 = (double)(fVar5 * fVar42);
      }
      if (dVar35 - dVar31 < 0.0) {
        dVar32 = (double)(fVar6 * fVar42);
      }
      if (dVar35 - dVar31 < 0.0) {
        dVar33 = (double)(fVar7 * fVar42);
      }
      fVar42 = (float)((double)(moby->pos).y + dVar34);
      fVar5 = (float)((double)(moby->pos).x + dVar32);
      fVar6 = (float)((double)(moby->pos).z + dVar33);
      fVar7 = (float)((double)fVar42 - dVar37);
      fVar2 = (float)((double)fVar5 - dVar38);
      fVar3 = (float)((double)fVar6 - dVar36);
      (moby->pos).x = fVar5;
      (moby->pos).y = fVar42;
      (moby->pos).z = fVar6;
      if ((SQRT(fVar3 * fVar3 + fVar2 * fVar2 + fVar7 * fVar7) < 3.0) ||
         (iVar22 = FastDecTimerS32(uVar29 + 0x6c), iVar22 != 0)) {
        iVar22 = MB_randInt(Splines[*(int *)((int)pvVar9 + 0x60)]->cnt);
        iVar22 = *(int *)((int)pvVar9 + 0x68) + iVar22;
        auVar39 = ZEXT416(0xffffffff);
        auVar39 = auVar39 | auVar39 << 0x20 | auVar39 << 0x40 | auVar39 << 0x60;
        auVar40 = vectorShiftLeftIntegerWord(auVar39,auVar39);
        *(int *)((int)pvVar9 + 0x68) =
             iVar22 - (iVar22 / Splines[*(int *)((int)pvVar9 + 0x60)]->cnt) *
                      Splines[*(int *)((int)pvVar9 + 0x60)]->cnt;
        auVar39 = loadVectorLeftIndexed(4,0x353420);
        auVar41 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
        auVar39 = auVar39 >> 0x60 & (GPiece<16>)0xffffffff;
        auVar39 = vectorMultiplyAddFloatingPoint
                            (auVar41,auVar39 | auVar39 << 0x20 | auVar39 << 0x40 | auVar39 << 0x60,
                             auVar40);
        auVar39 = vectorConvertToSignedFixedPointWordSaturate(auVar39,0);
        auVar39 = auVar39 >> 0x60 & (GPiece<16>)0xffffffff;
        uVar21 = storeVectorElementWordIndexed
                           (auVar39 | auVar39 << 0x20 | auVar39 << 0x40 | auVar39 << 0x60,0x6c,
                            uVar29);
        *(undefined4 *)((int)pvVar9 + 0x6cU & 0xfffffffc) = uVar21;
      }
      if (((g_heroStateType != 0x12) && (g_heroState != WATER_JUMP)) ||
         (fVar42 = (moby->pos).y - g_heroPosition.y, fVar5 = (moby->pos).x - g_heroPosition.x,
         8.0 <= SQRT(fVar5 * fVar5 + fVar42 * fVar42))) {
        dVar37 = 0.5;
        dVar31 = (double)DAT_00e5aa98;
        dVar36 = (double)DAT_00840348;
        M35_003531d0(lVar20);
      }
      else {
        dVar31 = (double)DAT_00e5aa98;
        dVar36 = (double)DAT_00840348;
        dVar37 = 2.0;
      }
      fVar42 = OrganicDelt
                         ((float)((double)(float)(dVar31 - dVar36) - dVar37),DAT_0071f418 * 2.0,
                          DAT_0071f418 * 2.0,g_FrameTime * 2.0,&(moby->pos).z,0x720000,
                          (float *)((int)pvVar9 + 0x78));
      dVar31 = (double)fVar42;
    }
  }
  else if (bVar4 < 3) {
    FastDecTimerS32(uVar29 + 0x7c);
    dVar31 = ABS((double)(g_heroWaterZ - *(float *)((int)pvVar9 + 0x74)));
    if ((0.33000001311302185 <= dVar31) || (g_heroStateType != 0x12)) {
      if (g_heroState != WATER_JUMP) {
        iVar22 = PointInsideComplexPoly
                           (&g_heroPosition,(Vec4 *)Splines[*(int *)((int)pvVar9 + 0x60)]->points,
                            Splines[*(int *)((int)pvVar9 + 0x60)]->cnt);
        if (iVar22 == 0) {
          auVar39 = loadVectorLeftIndexed(0x38,0x353420);
          auVar40 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
          auVar39 = auVar39 >> 0x60 & (GPiece<16>)0xffffffff;
          auVar39 = auVar39 | auVar39 << 0x20 | auVar39 << 0x40 | auVar39 << 0x60;
        }
        else {
          auVar39 = loadVectorLeftIndexed(4,0x353420);
          auVar39 = auVar39 >> 0x60 & (GPiece<16>)0xffffffff;
          auVar39 = auVar39 | auVar39 << 0x20 | auVar39 << 0x40 | auVar39 << 0x60;
          auVar40 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
        }
        auVar41 = ZEXT416(0xffffffff);
        auVar41 = auVar41 | auVar41 << 0x20 | auVar41 << 0x40 | auVar41 << 0x60;
        auVar40 = auVar40 >> 0x60 & (GPiece<16>)0xffffffff;
        auVar41 = vectorShiftLeftIntegerWord(auVar41,auVar41);
        auVar39 = vectorMultiplyAddFloatingPoint
                            (auVar40 | auVar40 << 0x20 | auVar40 << 0x40 | auVar40 << 0x60,auVar39,
                             auVar41);
        auVar39 = vectorConvertToSignedFixedPointWordSaturate(auVar39,0);
        uVar21 = storeVectorElementWordIndexed(auVar39,0x7c,uVar29);
        *(undefined4 *)((int)pvVar9 + 0x7cU & 0xfffffffc) = uVar21;
        dVar31 = extraout_f1;
      }
    }
    else if (*(int *)((int)pvVar9 + 0x7c) == 0) {
      (moby->rotation).y = -1.553343;
      dVar31 = (double)FastWrapRot(GameCamera.rot.radius,1.5707964);
      (moby->rotation).z = (float)dVar31;
      FastEulerToMtx(lVar20 + 0xc0,lVar20 + 0x40);
      fVar16 = g_heroPosition.x;
      fVar42 = (moby->transform).v2.y;
      fVar5 = (moby->transform).v2.x;
      fVar6 = (moby->transform).v2.z;
      (moby->pos).x = g_heroPosition.x;
      fVar17 = g_heroPosition.y;
      (moby->pos).y = g_heroPosition.y;
      fVar18 = g_heroPosition.z;
      (moby->pos).z = g_heroPosition.z;
      (moby->pos).w = g_heroPosition.w;
      fVar2 = 0.0;
      fVar7 = SQRT(fVar6 * fVar6 + fVar5 * fVar5 + fVar42 * fVar42);
      fVar1 = DAT_00840348 / fVar7;
      fVar3 = fVar2;
      if (0.0 - fVar7 < 0.0) {
        fVar3 = fVar42 * fVar1;
      }
      fVar15 = fVar2;
      if (0.0 - fVar7 < 0.0) {
        fVar15 = fVar5 * fVar1;
      }
      if (0.0 - fVar7 < 0.0) {
        fVar2 = fVar6 * fVar1;
      }
      if (fVar7 - 0.0 < 0.0) {
        fVar3 = fVar42 * fVar1;
      }
      if (fVar7 - 0.0 < 0.0) {
        fVar15 = fVar5 * fVar1;
      }
      if (fVar7 - 0.0 < 0.0) {
        fVar2 = fVar6 * fVar1;
      }
      (moby->pos).y = fVar17 - fVar3;
      (moby->pos).x = fVar16 - fVar15;
      (moby->pos).z = (fVar18 - fVar2) - 2.0;
      *(float *)((int)pvVar9 + 0x78) = g_FrameTime * 10.0;
      moby->modeBits =
           moby->modeBits &
           (MIRROR|CAN_BE_DAMAGED|HIDE_BACKFACES|CAN_BE_AUTO_TARGETED|DISABLE_Z_WRITE|DRAW_SHADOW|
            DRAW_TRANSPARENT_WEIRD|LOCK_ROTATION|NO_DRAW|UNK_40|HAS_SPECIAL_VARS|HAS_GLOW|
            TRANSPARENT|NO_POST_UPDATE|NO_UPDATE);
      if (moby->animationId != '\x02') {
        puVar13[0x18] = (longlong)(int)(animationSpeed * 5.5);
        MB_SetAnimation(lVar20,2,0,*(undefined4 *)((int)puVar13 + 0xc4));
      }
      moby->state = '\x03';
      moby->setByGroup = '\0';
      dVar31 = (double)SetCameraPosition(0x951500,0x951510,0,0,0);
    }
  }
  else if (bVar4 < 4) {
    fVar10 = (moby->pos).z;
    fVar3 = (moby->pos).z;
    uVar12 = (int)fVar10 >> 0x1f;
    if (((int)(FLOAT_ORDER(g_heroWaterZ)) < (int)((uVar12 >> 1 ^ (uint)fVar10) - uVar12)) ||
       (*(int *)((int)pvVar9 + 0x78) < 0)) {
      dVar31 = 20.0;
      if (g_heroState == MOVEMENT_LOCKED) {
        g_heroPosition.z = fVar3 + 20.0;
        g_heroInvisible = 1;
        g_heroPosition.x = fVar42;
        g_heroPosition.y = fVar5;
        g_heroPosition.w = fVar6;
      }
      else {
        *(float *)(puVar13 + 0xe) = g_heroPosition.x;
        *(float *)((int)puVar13 + 0x74) = fVar7;
        fVar42 = g_heroPosition.w;
        *(float *)(puVar13 + 0xf) = fVar2;
        fVar5 = g_heroWaterZ;
        *(float *)((int)puVar13 + 0x7c) = fVar42;
        *(float *)(puVar13 + 0xf) = fVar5;
        M35_00352e88(lVar20,uVar19 - 0xb0);
        Hero_Warp(&g_heroPosition.x,&g_heroRotation.x,0x72,0);
        g_heroPosition.z = (float)((double)g_heroPosition.z + dVar31);
        g_heroInvisible = 1;
        fVar3 = (moby->pos).z;
      }
    }
    (moby->pos).z = fVar3 + *(float *)((int)pvVar9 + 0x78);
    fVar5 = DAT_0071f418;
    dVar31 = -(double)(DAT_0071f418 * 10.0 - *(float *)((int)pvVar9 + 0x78));
    *(float *)((int)pvVar9 + 0x78) = (float)dVar31;
    fVar42 = (moby->pos).z;
    if (dVar31 < (double)(g_FrameTime * 2.0)) {
      fVar42 = (moby->transform).v2.y;
      fVar6 = (moby->transform).v2.x;
      fVar7 = (moby->transform).v2.z;
      dVar36 = 0.0;
      fVar2 = SQRT(fVar7 * fVar7 + fVar6 * fVar6 + fVar42 * fVar42);
      fVar3 = DAT_00840348 / fVar2;
      dVar31 = dVar36;
      if (0.0 - fVar2 < 0.0) {
        dVar31 = (double)(fVar7 * fVar3);
      }
      dVar37 = dVar36;
      if (0.0 - fVar2 < 0.0) {
        dVar37 = (double)(fVar42 * fVar3);
      }
      dVar38 = dVar36;
      if (0.0 - fVar2 < 0.0) {
        dVar38 = (double)(fVar6 * fVar3);
      }
      if (fVar2 - 0.0 < 0.0) {
        dVar31 = (double)(fVar7 * fVar3);
      }
      if (fVar2 - 0.0 < 0.0) {
        dVar37 = (double)(fVar42 * fVar3);
      }
      if (fVar2 - 0.0 < 0.0) {
        dVar38 = (double)(fVar6 * fVar3);
      }
      fVar42 = OrganicDeltAng
                         (1.553343,fVar5 * 12.566371,fVar5 * 12.566371,
                          g_FrameTime * 25.132742,&(moby->rotation).y,0x353420,
                          (float *)((int)pvVar9 + 0x70));
      FastEulerToMtx((double)fVar42,lVar20 + 0xc0,lVar20 + 0x40);
      fVar5 = (moby->transform).v2.y;
      fVar6 = (moby->transform).v2.x;
      fVar7 = (moby->transform).v2.z;
      dVar35 = (double)SQRT(fVar7 * fVar7 + fVar6 * fVar6 + fVar5 * fVar5);
      fVar42 = (float)((double)DAT_00840348 / dVar35);
      dVar34 = dVar36;
      if (dVar36 - dVar35 < 0.0) {
        dVar34 = (double)(fVar7 * fVar42);
      }
      dVar32 = dVar36;
      if (dVar36 - dVar35 < 0.0) {
        dVar32 = (double)(fVar5 * fVar42);
      }
      dVar33 = dVar36;
      if (dVar36 - dVar35 < 0.0) {
        dVar33 = (double)(fVar6 * fVar42);
      }
      if (dVar35 - dVar36 < 0.0) {
        dVar34 = (double)(fVar7 * fVar42);
      }
      if (dVar35 - dVar36 < 0.0) {
        dVar32 = (double)(fVar5 * fVar42);
      }
      if (dVar35 - dVar36 < 0.0) {
        dVar33 = (double)(fVar6 * fVar42);
      }
      fVar42 = (moby->pos).z - (float)(dVar34 - dVar31);
      (moby->pos).z = fVar42;
      (moby->pos).y = (moby->pos).y - (float)(dVar32 - dVar37);
      (moby->pos).x = (moby->pos).x - (float)(dVar33 - dVar38);
      dVar31 = (double)*(float *)((int)pvVar9 + 0x78);
    }
    dVar36 = (double)fVar42;
    dVar37 = 0.0;
    if (((dVar31 < 0.0) && (dVar36 < (double)g_heroWaterZ)) && (moby->setByGroup == '\0')) {
      moby->setByGroup = '\x01';
      PlayMobySound(0,0,moby);
      fVar42 = (moby->transform).v2.y;
      fVar5 = (moby->transform).v2.x;
      fVar6 = (moby->transform).v2.z;
      fVar7 = (moby->pos).x;
      fVar2 = (moby->pos).y;
      fVar3 = (moby->pos).z;
      dVar31 = (double)SQRT(fVar6 * fVar6 + fVar5 * fVar5 + fVar42 * fVar42);
      if (dVar31 == dVar37) {
        fVar42 = (moby->transform).v2.w;
        dVar31 = dVar37;
        dVar36 = dVar37;
        dVar38 = dVar37;
      }
      else {
        fVar1 = (float)((double)DAT_00840348 / dVar31);
        dVar36 = (double)(fVar42 * fVar1);
        dVar31 = (double)(fVar5 * fVar1);
        fVar42 = (moby->transform).v2.w;
        dVar38 = (double)(fVar6 * fVar1);
      }
      *(float *)((int)puVar13 + 0x8c) = fVar42;
      fVar42 = g_heroWaterZ;
      *(float *)(puVar13 + 0x10) = (float)(dVar31 + (double)fVar7);
      *(float *)((int)puVar13 + 0x84) = (float)(dVar36 + (double)fVar2);
      *(float *)(puVar13 + 0x11) = (float)(dVar38 + (double)fVar3);
      *(float *)(puVar13 + 0x11) = fVar42;
      M35_00352e88(lVar20,uVar19 - 0xa0);
      dVar31 = (double)*(float *)((int)pvVar9 + 0x78);
      dVar36 = (double)(moby->pos).z;
    }
    if ((dVar31 < dVar37) &&
       (dVar31 = (double)(*(float *)((int)pvVar9 + 0x74) - 8.0), dVar36 < dVar31)) {
      dVar31 = (double)HandleHeroDeath();
    }
    if (((moby->field43_0x70 & 2U) != 0) && (moby->animationId != '\x01')) {
      puVar13[0x18] = (longlong)(int)(animationSpeed * 10.5);
      dVar31 = (double)MB_SetAnimation(lVar20,1,0,*(undefined4 *)((int)puVar13 + 0xc4));
    }
  }
  return dVar31;
}


