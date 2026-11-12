// game/update/moby438.cpp -- reconstructed from NPEA00385 EBOOT
// STATUS: NOT STARTED (raw Ghidra output)
// 4 functions, 0x37a2b8-0x37af90
#include "game/update/moby438.h"
#include "game/camera.h"
#include "game/collproc.h"
#include "game/hero.h"
#include "game/mobyfunc.h"
#include "game/mobyutil.h"
#include "game/partupd.h"
#include "game/update/moby1300.h"
#include "idol/fastfunc.h"

// 0x037a2b8 (0x23c bytes)
void M438_0037a2b8(int param_1)

{
  longlong lVar1;
  longlong lVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
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
  Vec4 local_90;
  
  lVar2 = 1000;
  dVar12 = 0.0;
  dVar13 = 3.0;
  dVar14 = 1.570796251296997;
  dVar15 = 3.141592502593994;
  dVar16 = -3.141592502593994;
  dVar17 = -0.16666656732559204;
  dVar18 = 0.008333025500178337;
  dVar19 = -0.0001980741071747616;
  dVar20 = 2.601886990305502e-06;
  dVar21 = 4.0;
  dVar22 = 12.0;
  do {
    lVar1 = (longlong)(int)lVar2;
    lVar1 = (lVar1 + -0x32 >> 0x3f &
            (lVar1 + -0x14 >> 0x3f & (lVar1 + -5 >> 0x3f & 0xfffffffffffffffcU) - 0xf) - 0x1e) +
            0x32;
    lVar2 = lVar2 - lVar1;
    dVar3 = (double)MB_randRot();
    dVar4 = (double)MB_randRangeFloat((float)dVar12,(float)dVar13);
    dVar6 = (double)(float)(dVar3 + dVar14);
    dVar5 = (double)(float)(dVar15 - dVar3);
    if (dVar3 - (double)(float)(dVar15 - dVar3) < 0.0) {
      dVar5 = dVar3;
    }
    dVar8 = (double)(float)(dVar15 - dVar6);
    if (dVar6 - (double)(float)(dVar15 - dVar6) < 0.0) {
      dVar8 = dVar6;
    }
    dVar7 = (double)(float)(dVar16 - dVar3);
    if ((double)(float)(dVar16 - dVar3) - dVar5 < 0.0) {
      dVar7 = dVar5;
    }
    dVar5 = (double)(float)(dVar16 - dVar6);
    if ((double)(float)(dVar16 - dVar6) - dVar8 < 0.0) {
      dVar5 = dVar8;
    }
    dVar3 = (double)(float)(dVar7 * dVar7);
    local_90.z = *(float *)(param_1 + 0x18);
    dVar6 = (double)(float)(dVar5 * dVar5);
    dVar10 = (double)(float)(dVar3 * (double)(float)(dVar3 * dVar7));
    dVar8 = (double)(float)(dVar6 * (double)(float)(dVar6 * dVar5));
    dVar9 = (double)(float)(dVar3 * dVar10);
    dVar11 = (double)(float)(dVar6 * dVar8);
    local_90.y = (float)((double)(float)((double)(float)(dVar3 * dVar9) * dVar20 +
                                        (double)(float)(dVar9 * dVar19 +
                                                       (double)(float)(dVar10 * dVar18 +
                                                                      (double)(float)((double)(float
                                                  )(dVar3 * dVar7) * dVar17 + dVar7)))) * dVar4 +
                        (double)*(float *)(param_1 + 0x14));
    local_90.x = (float)((double)(float)((double)(float)(dVar6 * dVar11) * dVar20 +
                                        (double)(float)(dVar11 * dVar19 +
                                                       (double)(float)(dVar8 * dVar18 +
                                                                      (double)(float)((double)(float
                                                  )(dVar6 * dVar5) * dVar17 + dVar5)))) * dVar4 +
                        (double)*(float *)(param_1 + 0x10));
    dVar5 = (double)MB_randRangeFloat((float)dVar21,(float)dVar22);
    local_90.z = (float)((double)local_90.z + dVar5);
    MB_SpawnBolts(param_1,&local_90,&DAT_00a15d30,0,(uint)lVar1,0);
  } while (0 < (int)lVar2);
  return;
}


// 0x037a4f4 (0x14 bytes)
void M438_0037a4f4(void)

{
  DAT_0084190c = 0x10000;
  return;
}


// 0x037a520 (0x36c bytes)
void M438_0037a520(void)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  int iVar8;
  char cVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  GPiece<16> local_90;
  GPiece<16> local_80;
  GPiece<16> local_70;
  GPiece<32> local_60;
  
  dVar11 = 0.0;
  MB_randSphere(0,(double)(DAT_0084193c * g_FrameTime),local_70);
  MB_randRangeFloat(DAT_00841950,DAT_00841954);
  MB_randRangeFloat(DAT_00841958,DAT_0084195c);
  uVar2 = DAT_00841964;
  uVar1 = DAT_00841960;
  dVar10 = 1.0;
  MB_randRangeFloat((float)dVar11,1.0);
  uVar3 = FastLerpColor(uVar1,uVar2);
  uVar2 = DAT_0084196c;
  uVar1 = DAT_00841968;
  MB_randRangeFloat((float)dVar11,(float)dVar10);
  uVar4 = FastLerpColor(uVar1,uVar2);
  dVar11 = (double)MB_randRangeFloat((float)dVar11,(float)dVar10);
  uVar5 = FastDoubleToInt
                    ((double)(animationSpeed *
                             (float)((double)(longlong)DAT_00841940 * dVar11 + dVar10)));
  dVar12 = (double)(longlong)DAT_00841944;
  dVar11 = (double)MB_randRangeFloat(-DAT_0084194c,DAT_0084194c);
  uVar6 = FastDoubleToInt
                    ((double)(animationSpeed * (float)(dVar12 * (double)(float)(dVar11 + dVar10))));
  dVar12 = (double)(longlong)DAT_00841948;
  dVar11 = (double)MB_randRangeFloat(-DAT_0084194c,DAT_0084194c);
  uVar7 = FastDoubleToInt
                    ((double)(animationSpeed * (float)(dVar12 * (double)(float)(dVar11 + dVar10))));
  iVar8 = SpawnPart_2(local_60,local_90,local_80,uVar3,uVar4,uVar5,uVar6,uVar7);
  if (iVar8 != 0) {
    cVar9 = FastDoubleToInt(0x4020000000000000);
    *(char *)(iVar8 + 9) = cVar9 + -0x70;
  }
  return;
}


// 0x037a8b8 (0x6d8 bytes)
// inlined: FastAtan2 @0x37abb4
/* Moby 438 */

void UpdateMoby_438(MobyInstance *moby)

{
  byte bVar1;
  f32 fVar2;
  f32 fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  int *piVar11;
  Spline *pSVar12;
  uint uVar13;
  undefined4 uVar14;
  ulonglong *puVar15;
  float fVar16;
  ulonglong uVar17;
  longlong lVar18;
  longlong lVar19;
  u16 *puVar20;
  int iVar21;
  int iVar23;
  longlong lVar22;
  longlong lVar24;
  longlong lVar25;
  float *pfVar26;
  ulonglong unaff_r29;
  ulonglong uVar27;
  ulonglong unaff_r30;
  ulonglong uVar28;
  ulonglong unaff_r31;
  byte bVar29;
  ulonglong in_LR;
  longlong lVar30;
  double dVar31;
  double dVar32;
  ulonglong in_f29;
  undefined8 uVar33;
  ulonglong in_f30;
  undefined8 uVar34;
  ulonglong in_f31;
  GPiece<16> auVar35;
  GPiece<16> auVar36;
  GPiece<16> auVar37;
  GPiece<16> auVar38;
  GPiece<16> auVar39;
  GPiece<16> auVar40;
  
  lVar18 = (longlong)(int)moby;
  uVar17 = ZEXT48(&stack0x00000000);
  lVar19 = uVar17 - 0x140;
  puVar15 = (ulonglong *)lVar19;
  *puVar15 = uVar17;
  puVar15[0x2a] = in_LR;
  puVar15[0x25] = in_f29;
  puVar15[0x26] = in_f30;
  puVar15[0x27] = in_f31;
  puVar15[0x24] = unaff_r31;
  puVar15[0x22] = unaff_r29;
  puVar15[0x23] = unaff_r30;
  piVar11 = (int *)moby->pVar;
  uVar28 = ZEXT48(piVar11);
  fVar2 = (moby->pos).y;
  *(f32 *)(puVar15 + 0x18) = (moby->pos).x;
  fVar3 = (moby->pos).z;
  iVar21 = *piVar11;
  *(f32 *)((int)puVar15 + 0xc4) = fVar2;
  iVar23 = iVar21 * 4;
  fVar2 = (moby->pos).w;
  *(f32 *)(puVar15 + 0x19) = fVar3;
  *(f32 *)((int)puVar15 + 0xcc) = fVar2;
  bVar1 = moby->state;
  pSVar12 = Splines[iVar21];
  uVar27 = ZEXT48(pSVar12);
  bVar29 = (bVar1 == 2) << 1;
  if (bVar1 == 0) {
    if (iVar21 == -1) {
      DeleteMoby(moby);
      return;
    }
    fVar4 = pSVar12->points[0].y - pSVar12->points[1].y;
    fVar9 = pSVar12->points[0].x - pSVar12->points[1].x;
    fVar5 = pSVar12->points[0].z - pSVar12->points[1].z;
    auVar35 = ZEXT416(0xffffffff);
    auVar35 = auVar35 | auVar35 << 0x20 | auVar35 << 0x40 | auVar35 << 0x60;
    auVar35 = vectorShiftLeftIntegerWord(auVar35,auVar35);
    fVar7 = DAT_00841930 * g_FrameTime;
    auVar36 = loadVectorLeftIndexed(in_LR,uVar27);
    auVar37 = loadVectorLeftIndexed(4,uVar28);
    auVar36 = vectorConvertFromSignedFixedPointWord(auVar36,0);
    auVar38 = loadVectorRightIndexed(0x14,uVar28);
    auVar35 = vectorMultiplyAddFloatingPoint(auVar37 | auVar38,auVar36,auVar35);
    auVar35 = auVar35 >> 0x60 & (GPiece<16>)0xffffffff;
    uVar14 = storeVectorElementWordIndexed
                       (auVar35 | auVar35 << 0x20 | auVar35 << 0x40 | auVar35 << 0x60,4,uVar28);
    *(undefined4 *)((uint)(piVar11 + 1) & 0xfffffffc) = uVar14;
    piVar11[2] = (int)(fVar7 / SQRT(fVar5 * fVar5 + fVar9 * fVar9 + fVar4 * fVar4));
    dVar31 = (double)MB_randRangeSigned(0,0x4014000000000000);
    piVar11[3] = (int)(float)dVar31;
    iVar23 = 0xff;
    moby->state = '\x01';
    moby->updateDistance = -1;
  }
  else if (1 < bVar1) {
    if (bVar1 < 3) {
      uVar34 = 0x402e000000000000;
      piVar11[6] = (int)-(g_FrameTimeSq * 15.0 - (float)piVar11[6]);
      dVar31 = (double)FastWrapRot((moby->rotation).x,g_FrameTime * 7.330383);
      (moby->rotation).x = (float)((double)(moby->rotation).x + dVar31);
      fVar4 = (moby->pos).x;
      fVar7 = SQRT((float)piVar11[4] * (float)piVar11[4] + (float)piVar11[5] * (float)piVar11[5]);
      fVar9 = (moby->pos).y;
      fVar5 = (moby->pos).z;
      uVar13 = piVar11[6];
      fVar8 = ABS((float)piVar11[6]);
      fVar16 = ABS(fVar7);
      *(float *)(puVar15 + 0x1c) = fVar7;
      *(float *)((int)puVar15 + 0xe4) = fVar16 - fVar8;
      dVar31 = 0.0;
      uVar27 = (ulonglong)(*(uint *)(puVar15 + 0x1c) >> 0x1c) & 8 |
               (ulonglong)(*(uint *)((int)puVar15 + 0xe4) >> 0x1e) & 2 |
               (ulonglong)(uVar13 >> 0x1d) & 4;
      fVar7 = ABS(*(float *)(puVar15 + 0x1c));
      if (*(float *)((int)puVar15 + 0xe4) - 0.0 < 0.0) {
        fVar7 = fVar8;
      }
      fVar10 = *(float *)(&g_atanQuadrantTable + (int)(uVar27 << 2));
      fVar6 = *(float *)(((uint)(uVar27 << 2) | 0x735900) + 4);
      if (*(float *)((int)puVar15 + 0xe4) - 0.0 < 0.0) {
        fVar8 = fVar16;
      }
      dVar32 = dVar31;
      if (0.0 < fVar7) {
        lVar25 = uVar17 - 0x130;
        lVar24 = uVar17 - 0x58;
        lVar22 = uVar17 - 0x48;
        lVar30 = 2;
        fVar7 = (fVar8 - fVar7) / (fVar8 + fVar7);
        fVar8 = fVar7 * fVar7;
        *(float *)((int)puVar15 + 0xf4) = fVar7;
        *(float *)((int)puVar15 + 0xec) = fVar7;
        *(float *)(puVar15 + 0x1e) = fVar7;
        *(float *)(puVar15 + 0x1d) = fVar7;
        fVar7 = fVar8 * fVar8;
        *(float *)((int)puVar15 + 0xec) = *(float *)((int)puVar15 + 0xec) * fVar8;
        *(float *)(puVar15 + 0x1e) = *(float *)(puVar15 + 0x1e) * fVar7;
        *(float *)((int)puVar15 + 0xf4) = *(float *)((int)puVar15 + 0xf4) * fVar7 * fVar8;
        do {
          *(float *)((int)lVar25 + 0xe8) = *(float *)((int)lVar25 + 0xd8) * fVar7 * fVar7;
          iVar21 = (int)lVar24;
          lVar25 = lVar25 + 8;
          lVar24 = lVar24 + 8;
          *(float *)((int)lVar22 + 4) = *(float *)(iVar21 + 4) * fVar7 * fVar7;
          lVar22 = lVar22 + 8;
          lVar30 = lVar30 + -1;
        } while (lVar30 != 0);
        lVar25 = uVar17 - 0x58;
        pfVar26 = (float *)&DAT_007358e0;
        lVar30 = 4;
        lVar22 = lVar25;
        lVar24 = lVar19;
        do {
          fVar7 = *pfVar26;
          fVar8 = pfVar26[1];
          pfVar26 = pfVar26 + 2;
          *(float *)((int)lVar24 + 0xe8) = *(float *)((int)lVar24 + 0xe8) * fVar7;
          lVar24 = lVar24 + 8;
          *(float *)((int)lVar22 + 4) = *(float *)((int)lVar22 + 4) * fVar8;
          lVar22 = lVar22 + 8;
          lVar30 = lVar30 + -1;
        } while (lVar30 != 0);
        lVar22 = 2;
        do {
          iVar21 = (int)lVar19;
          iVar23 = (int)lVar25;
          lVar19 = lVar19 + 0x10;
          lVar25 = lVar25 + 0x10;
          dVar32 = (double)((float)(dVar32 + (double)*(float *)(iVar21 + 0xe8)) +
                            *(float *)(iVar23 + 4) + *(float *)(iVar23 + 8) +
                           *(float *)(iVar23 + 0xc));
          lVar22 = lVar22 + -1;
        } while (lVar22 != 0);
        dVar32 = (double)((float)(dVar32 + 0.7853981852531433) * fVar10 + fVar6);
      }
      (moby->rotation).y = (float)-dVar32;
      (moby->pos).x = fVar4 + (float)piVar11[4];
      (moby->pos).y = fVar9 + (float)piVar11[5];
      fVar5 = fVar5 + (float)piVar11[6];
      (moby->pos).z = fVar5;
      uVar33 = 0x4024000000000000;
      if (fVar5 < 10.0) {
        DeleteMoby(moby);
        return;
      }
      iVar21 = CollSphere(0x3ff4000000000000,lVar18 + 0x10,&DAT_0037a88c,0,lVar18);
      if (iVar21 != 0) {
        puVar15[0x12] = 0xffffffffffffffff;
        puVar15[0x14] = 1;
        puVar15[0x15] = 1;
        puVar15[0x16] = 0xffffffffffffffff;
        puVar15[0x17] = 0;
        MB_genericExplosion
                  (dVar31,dVar31,uVar33,0x4014000000000000,0x4022000000000000,0x3ff0000000000000,
                   uVar34,lVar18,uVar28 + 0x10,lVar18 + 0x10,0,&DAT_0037a88c,0x14,0x28,0x10);
        DeleteMoby(moby);
        return;
      }
    }
    goto LAB_0037adb4;
  }
  MB_PathEvalSpline
            ((double)(float)piVar11[1],uVar27,iVar23,1,lVar18 + 0x10,lVar18 + 0x40,0);
  fVar4 = (moby->pos).z;
  auVar35 = loadVectorLeftIndexed(in_LR,uVar27);
  auVar37 = vectorConvertFromSignedFixedPointWord(auVar35,0);
  (moby->rotation).y = (moby->rotation).y * 0.5;
  auVar35 = auVar37 >> 0x60 & (GPiece<16>)0xffffffff;
  (moby->pos).z = fVar4 + (float)piVar11[3];
  auVar36 = loadVectorLeftIndexed(4,uVar28);
  auVar38 = loadVectorRightIndexed(0x14,uVar28);
  auVar40 = loadVectorLeftIndexed(8,uVar28);
  auVar39 = loadVectorRightIndexed(0x18,uVar28);
  auVar38 = vectorAddFloatingPoint(auVar36 | auVar38,auVar40 | auVar39);
  auVar36 = auVar38 >> 0x60 & (GPiece<16>)0xffffffff;
  auVar36 = auVar36 | auVar36 << 0x20 | auVar36 << 0x40 | auVar36 << 0x60;
  vectorCompareGreaterThanFloatingPoint
            (auVar36,auVar35 | auVar35 << 0x20 | auVar35 << 0x40 | auVar35 << 0x60);
  uVar14 = storeVectorElementWordIndexed(auVar36,4,uVar28);
  *(undefined4 *)((uint)(piVar11 + 1) & 0xfffffffc) = uVar14;
  if (!(bool)(bVar29 >> 1 & 1)) {
    auVar35 = vectorSubtractFloatingPoint(auVar38,auVar37);
    auVar35 = auVar35 >> 0x60 & (GPiece<16>)0xffffffff;
    uVar14 = storeVectorElementWordIndexed
                       (auVar35 | auVar35 << 0x20 | auVar35 << 0x40 | auVar35 << 0x60,4,uVar28);
    *(undefined4 *)((uint)(piVar11 + 1) & 0xfffffffc) = uVar14;
  }
LAB_0037adb4:
  fVar2 = (moby->pos).x;
  uVar13 = (int)fVar2 >> 0x1f;
  if ((((int)((uVar13 >> 1 ^ (uint)fVar2) - uVar13) < 0x40800000) ||
      (fVar2 = (moby->pos).y, uVar13 = (int)fVar2 >> 0x1f,
      (int)((uVar13 >> 1 ^ (uint)fVar2) - uVar13) < 0x40800000)) ||
     (fVar2 = (moby->pos).z, uVar13 = (int)fVar2 >> 0x1f,
     (int)((uVar13 >> 1 ^ (uint)fVar2) - uVar13) < 0x40800000)) {
    puVar20 = (u16 *)0x0;
  }
  else {
    puVar20 = moby->pClass->collision;
  }
  moby->collision = puVar20;
  iVar21 = MB_damage(lVar18,0x10000,0);
  if ((iVar21 != 0) && (moby->state != '\x02')) {
    if (g_heroState == TURRET_PLANE_UI) {
      MB_UnlockSkillPoint(0xc);
    }
    fVar4 = (moby->pos).y;
    fVar9 = (moby->pos).z;
    fVar5 = (moby->pos).x - *(float *)(puVar15 + 0x18);
    *(f32 *)((int)puVar15 + 0xdc) = (moby->pos).w;
    *(float *)((int)puVar15 + 0xd4) = fVar4 - *(float *)((int)puVar15 + 0xc4);
    *(float *)(puVar15 + 0x1b) = fVar9 - *(float *)(puVar15 + 0x19);
    *(float *)(puVar15 + 0x1a) = fVar5;
    piVar11[4] = (int)fVar5;
    piVar11[5] = *(int *)((int)puVar15 + 0xd4);
    fVar4 = *(float *)(puVar15 + 0x1b);
    piVar11[6] = (int)fVar4;
    piVar11[7] = *(int *)((int)puVar15 + 0xdc);
    fVar9 = g_FrameTime;
    puVar15[0x12] = 0xffffffffffffffff;
    puVar15[0x14] = 1;
    puVar15[0x15] = 1;
    puVar15[0x16] = 0xffffffffffffffff;
    puVar15[0x17] = 0;
    piVar11[6] = (int)(fVar9 * 2.0 + fVar4);
    MB_genericExplosion
              (0,0,0x4024000000000000,0x4014000000000000,0x4022000000000000,0x3ff0000000000000,
               0x402e000000000000,lVar18,uVar17 - 0x70,lVar18 + 0x10,&DAT_0037a88c,1,0x14,0x28,0x10)
    ;
    moby->state = '\x02';
  }
  moby->damage = -1;
  if (moby->enabled != '\0') {
    M438_0037a520(lVar18,uVar17 - 0x80);
  }
  return;
}


