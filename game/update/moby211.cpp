// game/update/moby211.cpp -- reconstructed from NPEA00385 EBOOT
// STATUS: NOT STARTED (raw Ghidra output)
// 7 functions, 0x2ed724-0x2ef9b4
#include <string.h>
#include "game/update/moby211.h"
#include "game/camera.h"
#include "game/collproc.h"
#include "game/draw.h"
#include "game/hero.h"
#include "game/lights.h"
#include "game/mobyfunc.h"
#include "game/mobyutil.h"
#include "game/partupd.h"
#include "game/update/moby113.h"
#include "game/update/moby327.h"
#include "game/update/moby404.h"
#include "idol/fastfunc.h"

// 0x02ed724 (0x14 bytes)
void M211_002ed724(void)

{
  DAT_007febdc = 0x10000;
  return;
}


// 0x02ed768 (0x368 bytes)
void M211_002ed768(void *param_1)

{
  char cVar1;
  int iVar2;
  undefined2 uVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  ulonglong uVar12;
  int iVar14;
  undefined8 uVar13;
  int iVar15;
  int iVar16;
  double dVar17;
  double dVar18;
  double dVar19;
  double dVar20;
  double dVar21;
  GPiece<16> auVar22;
  GPiece<16> auVar23;
  GPiece<16> auVar24;
  Vec4 local_a0;
  Vec4 aVStack_90 [3];
  
  iVar2 = *(int *)((int)param_1 + 0x78);
  GetBonePosition(param_1,1,&local_a0);
  fVar4 = local_a0.y - GameCamera.posY;
  fVar7 = local_a0.x - GameCamera.posX;
  fVar5 = local_a0.z - GameCamera.posZ;
  fVar6 = SQRT(fVar5 * fVar5 + fVar7 * fVar7 + fVar4 * fVar4);
  fVar9 = 0.0;
  fVar11 = -0.5 / fVar6;
  fVar8 = fVar9;
  if (0.0 - fVar6 < 0.0) {
    fVar8 = fVar7 * fVar11;
  }
  fVar10 = fVar9;
  if (0.0 - fVar6 < 0.0) {
    fVar10 = fVar4 * fVar11;
  }
  if (0.0 - fVar6 < 0.0) {
    fVar9 = fVar5 * fVar11;
  }
  if (fVar6 - 0.0 < 0.0) {
    fVar8 = fVar7 * fVar11;
  }
  if (fVar6 - 0.0 < 0.0) {
    fVar10 = fVar4 * fVar11;
  }
  if (fVar6 - 0.0 < 0.0) {
    fVar9 = fVar5 * fVar11;
  }
  *(float *)(iVar2 + 0xe0) = local_a0.x + fVar8;
  *(float *)(iVar2 + 0xe4) = local_a0.y + fVar10;
  *(float *)(iVar2 + 0xe8) = local_a0.z + fVar9;
  *(float *)(iVar2 + 0xec) = local_a0.w;
  cVar1 = *(char *)((int)param_1 + 0x20);
  if (((cVar1 == '\x03') || (cVar1 == '\x04')) || (cVar1 == '\x05')) {
    uVar12 = (ulonglong)*(uint *)(iVar2 + 0xf0);
    if (*(uint *)(iVar2 + 0xf0) == 0xffffffff) {
      uVar12 = CreatePointLight2
                         (DAT_007fec34,0,0x3fe0000000000000,0x3fe0000000000000,0x3ff0000000000000,
                          &local_a0);
      *(int *)(iVar2 + 0xf0) = (int)uVar12;
    }
    if (-1 < (int)uVar12) {
      iVar14 = (int)(uVar12 << 5);
      *(float *)((int)&PointLights[0].pos.x + iVar14) = local_a0.x;
      *(float *)((int)&PointLights[0].pos.y + iVar14) = local_a0.y;
      *(float *)((int)&PointLights[0].pos.z + iVar14) = local_a0.z + 1.0;
      *(float *)((int)&PointLights[0].pos.w + iVar14) = DAT_007fec34;
    }
  }
  MB_randVector(0.004999999888241291,0.029999999329447746,aVStack_90);
  iVar14 = SpawnPart_69(&local_a0,aVStack_90,0x7f,param_1);
  if (iVar14 != 0) {
    dVar17 = (double)MB_randRangeFloat(6000.0,32000.0);
    *(float *)(iVar14 + 0xc) = (float)dVar17;
  }
  dVar17 = 80000.0;
  dVar19 = 120000.0;
  iVar14 = 0;
  auVar24 = loadVectorLeftIndexed(0x28,0x2ed738);
  dVar20 = 2.5;
  auVar24 = auVar24 >> 0x60 & (GPiece<16>)0xffffffff;
  auVar24 = auVar24 | auVar24 << 0x20 | auVar24 << 0x40 | auVar24 << 0x60;
  dVar21 = 1.0;
  do {
    uVar13 = SpawnPart_69(&local_a0,&DAT_00a15d30,0x7f,param_1);
    iVar16 = (int)uVar13;
    if (iVar16 != 0) {
      if ((iVar14 == 2) && (iVar15 = MB_randInt(8), iVar15 == 0)) {
        dVar18 = 180000.0;
      }
      else {
        dVar18 = (double)MB_randRangeFloat((float)dVar17,(float)dVar19);
      }
      auVar22 = ZEXT416(0xffffffff);
      auVar22 = auVar22 | auVar22 << 0x20 | auVar22 << 0x40 | auVar22 << 0x60;
      *(float *)(iVar16 + 0xc) = (float)dVar18;
      auVar22 = vectorShiftLeftIntegerWord(auVar22,auVar22);
      auVar23 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
      dVar18 = (double)animationSpeed;
      auVar22 = vectorMultiplyAddFloatingPoint(auVar23,auVar24,auVar22);
      auVar22 = vectorConvertToSignedFixedPointWordSaturate(auVar22,0);
      auVar22 = vectorSplatHalfWord(auVar22,1);
      uVar3 = storeVectorElementHalfWordIndexed(auVar22,10,uVar13);
      *(undefined2 *)(iVar16 + 10) = uVar3;
      dVar18 = (double)FastIntToDouble((short)(int)(dVar18 * dVar20));
      *(undefined2 *)(iVar16 + 0x36) = 3;
      *(undefined **)(iVar16 + 0x38) = &DAT_007f7f7f;
      *(float *)(iVar16 + 0x30) = (float)(dVar21 / dVar18);
    }
    iVar14 = iVar14 + 1;
  } while (iVar14 < 3);
  GetBonePosition(param_1,6,iVar2 + 0x200);
  RegisterPostDraw(&PTR_M1412_002effe0_0070b7b8,param_1);
  return;
}


// 0x02edb38 (0x14a0 bytes)
// inlined: FastAtan2 @0x2eddf8, FastRSqrt @0x2edffc, FastRSqrt @0x2ee078, FastRSqrt @0x2ee0f4, FastAtan2 @0x2ee36c, FastRSqrt @0x2ee620, FastRSqrt @0x2ee69c, FastRSqrt @0x2ee77c, FastRSqrt @0x2ee7ec, FastRSqrt @0x2ee85c, FastAtan2 @0x2eee1c
void M211_002edb38(int param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  short sVar11;
  uint uVar12;
  uint uVar13;
  undefined4 uVar14;
  ulonglong *puVar15;
  int iVar16;
  ulonglong uVar17;
  int iVar20;
  undefined8 uVar18;
  undefined2 uVar21;
  longlong lVar19;
  ulonglong uVar22;
  float *pfVar24;
  longlong lVar23;
  int iVar26;
  char cVar27;
  longlong lVar25;
  undefined8 in_r8;
  ulonglong unaff_r24;
  ulonglong unaff_r25;
  ulonglong unaff_r26;
  ulonglong unaff_r27;
  ulonglong unaff_r28;
  longlong lVar28;
  ulonglong unaff_r29;
  ulonglong unaff_r30;
  ulonglong uVar29;
  ulonglong unaff_r31;
  ulonglong in_LR;
  longlong lVar30;
  double dVar31;
  double dVar32;
  double dVar33;
  double dVar34;
  ulonglong in_f20;
  ulonglong in_f21;
  ulonglong in_f22;
  double dVar35;
  ulonglong in_f23;
  double dVar36;
  ulonglong in_f24;
  double dVar37;
  ulonglong in_f25;
  ulonglong in_f26;
  double dVar38;
  ulonglong in_f27;
  double dVar39;
  ulonglong in_f28;
  double dVar40;
  ulonglong in_f29;
  ulonglong in_f30;
  double dVar41;
  double dVar42;
  ulonglong in_f31;
  double dVar43;
  double dVar44;
  GPiece<16> auVar45;
  GPiece<16> auVar46;
  GPiece<16> auVar47;
  GPiece<16> auVar48;
  
  uVar17 = ZEXT48(&stack0x00000000);
  lVar19 = uVar17 - 0x460;
  puVar15 = (ulonglong *)lVar19;
  *puVar15 = uVar17;
  puVar15[0x8e] = in_LR;
  puVar15[0x80] = in_f20;
  puVar15[0x81] = in_f21;
  puVar15[0x82] = in_f22;
  puVar15[0x83] = in_f23;
  puVar15[0x84] = in_f24;
  puVar15[0x85] = in_f25;
  puVar15[0x86] = in_f26;
  puVar15[0x87] = in_f27;
  puVar15[0x88] = in_f28;
  puVar15[0x89] = in_f29;
  puVar15[0x8a] = in_f30;
  puVar15[0x8b] = in_f31;
  puVar15[0x7f] = unaff_r31;
  puVar15[0x7e] = unaff_r30;
  uVar12 = *(uint *)(param_1 + 0x78);
  uVar29 = (ulonglong)uVar12;
  sVar11 = *(short *)(uVar12 + 0x8e);
  iVar20 = *(int *)(uVar12 + 100);
  iVar16 = DAT_00a1a85c + *(int *)(uVar12 + 0x60) * 0x20;
  puVar15[0x7d] = unaff_r29;
  puVar15[0x7c] = unaff_r28;
  puVar15[0x7b] = unaff_r27;
  puVar15[0x7a] = unaff_r26;
  puVar15[0x79] = unaff_r25;
  puVar15[0x78] = unaff_r24;
  iVar16 = *(int *)(iVar16 + 0x10);
  if (sVar11 <= iVar20) {
    fVar2 = 0.0;
    if (sVar11 < iVar20) {
      iVar20 = iVar20 - sVar11;
      iVar26 = iVar16 + sVar11 * 0x10;
      do {
        iVar20 = iVar20 + -1;
        pfVar24 = (float *)(iVar26 + 0x1c);
        iVar26 = iVar26 + 0x10;
        fVar2 = fVar2 + *pfVar24;
      } while (0 < iVar20);
    }
    fVar2 = (fVar2 + *(float *)(uVar12 + 0x68)) / *(float *)(uVar12 + 0x78);
    if (1.0 - fVar2 < 0.0) {
      fVar2 = 1.0;
    }
    *(float *)(uVar12 + 0x74) = (-3.0 - DAT_007fec0c) * fVar2 + DAT_007fec0c;
  }
  lVar28 = uVar17 - 0x3e0;
  *(undefined4 *)(uVar12 + 100) = 0;
  dVar36 = 0.0;
  *(undefined4 *)(uVar12 + 0x68) = 0;
  MB_PathFollowToPos
            (0x4034000000000000,0x4014000000000000,0,iVar16,&g_heroPosition,lVar28,uVar29 + 100,
             uVar29 + 0x68,in_r8,0);
  MB_PathMoveDist
            (-(double)*(float *)(uVar12 + 0x74),iVar16,lVar28,uVar29 + 100,uVar29 + 0x68);
  dVar43 = 0.009999999776482582;
  dVar41 = 0.20000000298023224;
  iVar20 = (int)lVar28;
  AccelDelt(*(float *)(puVar15 + 0x10),0.01,0.2,(float)dVar36,(float *)(param_1 + 0x10),
                      iVar20,(float *)(uVar12 + 0x90));
  AccelDelt(*(float *)((int)puVar15 + 0x84),(float)dVar43,(float)dVar41,(float)dVar36,
                      (float *)(param_1 + 0x14),iVar20,(float *)(uVar12 + 0x94));
  AccelDelt(*(float *)(puVar15 + 0x11),(float)dVar43,(float)dVar41,(float)dVar36,
                      (float *)(param_1 + 0x18),iVar20,(float *)(uVar12 + 0x98));
  iVar20 = iVar16 + *(int *)(uVar12 + 100) * 0x10;
  fVar2 = *(float *)(iVar20 + 0x60) - *(float *)(iVar20 + 0x10);
  fVar3 = *(float *)(iVar20 + 100) - *(float *)(iVar20 + 0x14);
  dVar43 = ABS((double)fVar2);
  dVar34 = ABS((double)fVar3);
  *(float *)(puVar15 + 0x68) = fVar2;
  *(float *)((int)puVar15 + 0x344) = fVar3;
  *(float *)(puVar15 + 0x69) = (float)(dVar43 - dVar34);
  cVar27 = *(char *)(param_1 + 0xbc);
  dVar44 = 0.7853981852531433;
  uVar22 = (ulonglong)(*(uint *)(puVar15 + 0x68) >> 0x1c) & 8 |
           (ulonglong)(*(uint *)(puVar15 + 0x69) >> 0x1e) & 2 |
           (ulonglong)(*(uint *)((int)puVar15 + 0x344) >> 0x1d) & 4;
  dVar41 = ABS((double)*(float *)(puVar15 + 0x68));
  if ((double)*(float *)(puVar15 + 0x69) - dVar36 < 0.0) {
    dVar41 = dVar34;
  }
  fVar2 = *(float *)(&g_atanQuadrantTable + (int)(uVar22 << 2));
  dVar34 = ABS((double)*(float *)((int)puVar15 + 0x344));
  if ((double)*(float *)(puVar15 + 0x69) - dVar36 < 0.0) {
    dVar34 = dVar43;
  }
  fVar3 = *(float *)(((uint)(uVar22 << 2) | 0x735900) + 4);
  dVar43 = dVar36;
  if (dVar36 < dVar41) {
    lVar28 = uVar17 - 0x450;
    lVar25 = uVar17 - 0xc4;
    lVar23 = uVar17 - 0xd4;
    lVar30 = 2;
    fVar4 = (float)(dVar34 - dVar41) / (float)(dVar34 + dVar41);
    fVar5 = fVar4 * fVar4;
    *(float *)(puVar15 + 0x73) = fVar4;
    *(float *)(puVar15 + 0x72) = fVar4;
    *(float *)((int)puVar15 + 0x394) = fVar4;
    *(float *)((int)puVar15 + 0x38c) = fVar4;
    fVar4 = fVar5 * fVar5;
    *(float *)(puVar15 + 0x72) = *(float *)(puVar15 + 0x72) * fVar5;
    *(float *)((int)puVar15 + 0x394) = *(float *)((int)puVar15 + 0x394) * fVar4;
    *(float *)(puVar15 + 0x73) = *(float *)(puVar15 + 0x73) * fVar4 * fVar5;
    do {
      *(float *)((int)lVar28 + 0x38c) = *(float *)((int)lVar28 + 0x37c) * fVar4 * fVar4;
      iVar20 = (int)lVar23;
      lVar23 = lVar23 + 8;
      lVar28 = lVar28 + 8;
      *(float *)((int)lVar25 + 4) = *(float *)(iVar20 + 4) * fVar4 * fVar4;
      lVar25 = lVar25 + 8;
      lVar30 = lVar30 + -1;
    } while (lVar30 != 0);
    lVar30 = 4;
    lVar25 = uVar17 - 0xd4;
    pfVar24 = (float *)&DAT_007358e0;
    lVar28 = lVar19;
    lVar23 = lVar25;
    do {
      fVar4 = *pfVar24;
      fVar5 = pfVar24[1];
      pfVar24 = pfVar24 + 2;
      *(float *)((int)lVar28 + 0x38c) = *(float *)((int)lVar28 + 0x38c) * fVar4;
      lVar28 = lVar28 + 8;
      *(float *)((int)lVar23 + 4) = *(float *)((int)lVar23 + 4) * fVar5;
      lVar23 = lVar23 + 8;
      lVar30 = lVar30 + -1;
    } while (lVar30 != 0);
    lVar23 = 2;
    lVar28 = lVar19;
    dVar41 = dVar36;
    do {
      iVar20 = (int)lVar28;
      iVar26 = (int)lVar25;
      lVar28 = lVar28 + 0x10;
      lVar25 = lVar25 + 0x10;
      dVar41 = (double)((float)(dVar41 + (double)*(float *)(iVar20 + 0x38c)) +
                        *(float *)(iVar26 + 4) + *(float *)(iVar26 + 8) + *(float *)(iVar26 + 0xc));
      lVar23 = lVar23 + -1;
    } while (lVar23 != 0);
    dVar43 = (double)((float)(dVar41 + 0.7853981852531433) * fVar2 + fVar3);
  }
  *(float *)(param_1 + 0x48) = (float)dVar43;
  if (cVar27 == '\x05') {
    iVar20 = FastDecTimerS32(uVar29 + 0x1c8);
    cVar27 = *(char *)(param_1 + 0xbc);
    if (iVar20 != 0) {
      cVar27 = '\x01';
      *(undefined1 *)(param_1 + 0xbc) = 1;
    }
  }
  if (cVar27 == '\x01') {
    auVar46 = ZEXT416(0xffffffff);
    auVar46 = auVar46 | auVar46 << 0x20 | auVar46 << 0x40 | auVar46 << 0x60;
    auVar47 = vectorShiftLeftIntegerWord(auVar46,auVar46);
    auVar46 = loadVectorLeftIndexed(0xffffffffffffec10,0x800000);
    auVar45 = vectorConvertFromSignedFixedPointWord(auVar46,0);
    auVar46 = loadVectorLeftIndexed(0x20,0x2edad0);
    auVar46 = auVar46 >> 0x60 & (GPiece<16>)0xffffffff;
    auVar48 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
    dVar42 = 0.5;
    auVar46 = vectorAddFloatingPoint
                        (auVar45,auVar46 | auVar46 << 0x20 | auVar46 << 0x40 | auVar46 << 0x60);
    auVar46 = vectorMultiplyAddFloatingPoint(auVar48,auVar46,auVar47);
    auVar46 = vectorConvertToSignedFixedPointWordSaturate(auVar46,0);
    auVar46 = auVar46 >> 0x60 & (GPiece<16>)0xffffffff;
    uVar14 = storeVectorElementWordIndexed
                       (auVar46 | auVar46 << 0x20 | auVar46 << 0x40 | auVar46 << 0x60,0x1c0,uVar29);
    *(undefined4 *)(uVar12 + 0x1c0 & 0xfffffffc) = uVar14;
    *(undefined4 *)(uVar12 + 0x1c4) = 0;
    *(undefined1 *)(param_1 + 0xbc) = 2;
    GetBoneTransformations(param_1,4,uVar17 - 0x340);
    GetBoneTransformations(param_1,5,uVar17 - 0x300);
    fVar2 = *(float *)((int)puVar15 + 0x164);
    fVar3 = *(float *)(puVar15 + 0x2c);
    fVar4 = *(float *)(puVar15 + 0x2d);
    fVar5 = *(float *)(puVar15 + 0x2e);
    fVar6 = *(float *)((int)puVar15 + 0x174);
    fVar7 = *(float *)(puVar15 + 0x2f);
    fVar8 = *(float *)(puVar15 + 0x30);
    fVar9 = *(float *)((int)puVar15 + 0x184);
    fVar10 = *(float *)(puVar15 + 0x31);
    dVar31 = (double)(fVar4 * fVar4 + fVar3 * fVar3 + fVar2 * fVar2);
    dVar41 = dVar36;
    dVar43 = dVar36;
    dVar34 = dVar36;
    if ((double)(float)SQRT(dVar31) != dVar36) {
      dVar41 = 1.0 / SQRT(dVar31);
      dVar41 = (double)(float)(-(double)(float)((double)(float)(dVar31 * dVar41) * dVar41 - 1.0) *
                               (double)(float)(dVar42 * dVar41) + dVar41);
      dVar41 = (double)(float)(-(double)(float)((double)(float)(dVar31 * dVar41) * dVar41 - 1.0) *
                               (double)(float)(dVar42 * dVar41) + dVar41);
      fVar1 = (float)(-(double)(float)((double)(float)(dVar31 * dVar41) * dVar41 - 1.0) *
                      (double)(float)(dVar42 * dVar41) + dVar41);
      dVar34 = (double)(fVar3 * fVar1);
      dVar43 = (double)(fVar2 * fVar1);
      dVar41 = (double)(fVar4 * fVar1);
    }
    *(float *)(puVar15 + 0x2d) = (float)dVar41;
    *(float *)(puVar15 + 0x2c) = (float)dVar34;
    *(float *)((int)puVar15 + 0x164) = (float)dVar43;
    dVar31 = (double)(fVar7 * fVar7 + fVar5 * fVar5 + fVar6 * fVar6);
    dVar41 = dVar36;
    dVar43 = dVar36;
    dVar34 = dVar36;
    if ((double)(float)SQRT(dVar31) != dVar36) {
      dVar41 = 1.0 / SQRT(dVar31);
      dVar41 = (double)(float)(-(double)(float)((double)(float)(dVar31 * dVar41) * dVar41 - 1.0) *
                               (double)(float)(dVar42 * dVar41) + dVar41);
      dVar41 = (double)(float)(-(double)(float)((double)(float)(dVar31 * dVar41) * dVar41 - 1.0) *
                               (double)(float)(dVar42 * dVar41) + dVar41);
      fVar2 = (float)(-(double)(float)((double)(float)(dVar31 * dVar41) * dVar41 - 1.0) *
                      (double)(float)(dVar42 * dVar41) + dVar41);
      dVar34 = (double)(fVar5 * fVar2);
      dVar43 = (double)(fVar6 * fVar2);
      dVar41 = (double)(fVar7 * fVar2);
    }
    *(float *)(puVar15 + 0x2f) = (float)dVar41;
    *(float *)((int)puVar15 + 0x174) = (float)dVar43;
    *(float *)(puVar15 + 0x2e) = (float)dVar34;
    dVar31 = (double)(fVar10 * fVar10 + fVar8 * fVar8 + fVar9 * fVar9);
    dVar41 = dVar36;
    dVar43 = dVar36;
    dVar34 = dVar36;
    if ((double)(float)SQRT(dVar31) != dVar36) {
      dVar41 = 1.0 / SQRT(dVar31);
      dVar41 = (double)(float)(-(double)(float)((double)(float)(dVar31 * dVar41) * dVar41 - 1.0) *
                               (double)(float)(dVar42 * dVar41) + dVar41);
      dVar41 = (double)(float)(-(double)(float)((double)(float)(dVar31 * dVar41) * dVar41 - 1.0) *
                               (double)(float)(dVar42 * dVar41) + dVar41);
      fVar2 = (float)(-(double)(float)((double)(float)(dVar31 * dVar41) * dVar41 - 1.0) *
                      (double)(float)(dVar42 * dVar41) + dVar41);
      dVar34 = (double)(fVar8 * fVar2);
      dVar43 = (double)(fVar9 * fVar2);
      dVar41 = (double)(fVar10 * fVar2);
    }
    *(float *)(puVar15 + 0x30) = (float)dVar34;
    *(float *)((int)puVar15 + 0x184) = (float)dVar43;
    *(float *)(puVar15 + 0x31) = (float)dVar41;
    FastNormalizeRMtx4(uVar17 - 0x2c0,uVar17 - 0x300);
    *(undefined4 *)(puVar15 + 0x3b) = 0;
    *(undefined4 *)((int)puVar15 + 0x1d4) = 0;
    *(undefined4 *)(puVar15 + 0x3a) = 0;
    *(undefined4 *)((int)puVar15 + 0x1dc) = 0x3f800000;
    FastVecMtx4Mul(uVar17 - 0x280,uVar17 - 0x2c0,uVar17 - 0x340);
    MB_MtxToQuat((float *)(uVar12 + 0x1d0),(float *)(uVar17 - 0x280));
    cVar27 = *(char *)(param_1 + 0xbc);
  }
  dVar41 = (double)*(float *)(param_1 + 0x48);
  if (((cVar27 == '\x02') || (cVar27 == '\x03')) || (cVar27 == '\x04')) {
    GetBoneTransformations(param_1,0,uVar29 + 0xa0);
    dVar42 = 1.0;
    dVar34 = dVar42;
    dVar41 = (double)FastIntToDouble(*(undefined4 *)(uVar12 + 0x1c0));
    puVar15[0x76] = (longlong)DAT_007fec10;
    dVar35 = 0.5;
    puVar15[0x76] = (longlong)(int)(animationSpeed * (float)((double)(longlong)puVar15[0x76] + 0.5))
    ;
    dVar43 = (double)FastIntToDouble(*(undefined4 *)((int)puVar15 + 0x3b4));
    dVar31 = (double)DAT_007fec14;
    uVar14 = *(undefined4 *)(uVar12 + 100);
    *(undefined4 *)(puVar15 + 100) = uVar14;
    *(undefined4 *)((int)puVar15 + 0x324) = *(undefined4 *)(uVar12 + 0x68);
    MB_PathMoveDist
              ((double)(float)((double)(float)(dVar42 - dVar31) * (double)(float)(dVar41 / dVar43) +
                              dVar31),iVar16,uVar17 - 0x3d0,uVar17 - 0x140,uVar17 - 0x13c,uVar14,0);
    *(undefined4 *)(uVar12 + 0x1e0) = *(undefined4 *)(puVar15 + 0x12);
    *(undefined4 *)(uVar12 + 0x1e4) = *(undefined4 *)((int)puVar15 + 0x94);
    *(undefined4 *)(uVar12 + 0x1e8) = *(undefined4 *)(puVar15 + 0x13);
    *(undefined4 *)(uVar12 + 0x1ec) = *(undefined4 *)((int)puVar15 + 0x9c);
    fVar2 = *(float *)(puVar15 + 0x12) - *(float *)(param_1 + 0x10);
    dVar39 = (double)fVar2;
    fVar3 = *(float *)((int)puVar15 + 0x94) - *(float *)(param_1 + 0x14);
    dVar38 = (double)fVar3;
    *(float *)((int)puVar15 + 0x334) = fVar2;
    *(float *)(puVar15 + 0x67) = fVar3;
    dVar40 = (double)*(float *)((int)puVar15 + 0x9c);
    dVar31 = (double)(*(float *)(puVar15 + 0x13) - *(float *)(param_1 + 0x18));
    *(float *)((int)puVar15 + 0x33c) = (float)(ABS(dVar39) - ABS(dVar38));
    fVar2 = *(float *)(param_1 + 0x48);
    uVar22 = (ulonglong)(*(uint *)((int)puVar15 + 0x334) >> 0x1c) & 8 |
             (ulonglong)(*(uint *)((int)puVar15 + 0x33c) >> 0x1e) & 2 |
             (ulonglong)(*(uint *)(puVar15 + 0x67) >> 0x1d) & 4;
    dVar43 = ABS((double)*(float *)((int)puVar15 + 0x334));
    if ((double)*(float *)((int)puVar15 + 0x33c) - dVar36 < 0.0) {
      dVar43 = ABS(dVar38);
    }
    fVar3 = *(float *)(&g_atanQuadrantTable + (int)(uVar22 << 2));
    dVar32 = ABS((double)*(float *)(puVar15 + 0x67));
    if ((double)*(float *)((int)puVar15 + 0x33c) - dVar36 < 0.0) {
      dVar32 = ABS(dVar39);
    }
    fVar4 = *(float *)(((uint)(uVar22 << 2) | 0x735900) + 4);
    dVar41 = dVar36;
    if (dVar36 < dVar43) {
      lVar28 = uVar17 - 0x450;
      lVar23 = uVar17 - 0xf4;
      lVar25 = uVar17 - 0xe4;
      lVar30 = 2;
      fVar5 = (float)(dVar32 - dVar43) / (float)(dVar32 + dVar43);
      fVar6 = fVar5 * fVar5;
      *(float *)(puVar15 + 0x6f) = fVar5;
      *(float *)(puVar15 + 0x6e) = fVar5;
      *(float *)((int)puVar15 + 0x374) = fVar5;
      *(float *)((int)puVar15 + 0x36c) = fVar5;
      fVar5 = fVar6 * fVar6;
      *(float *)(puVar15 + 0x6e) = *(float *)(puVar15 + 0x6e) * fVar6;
      *(float *)((int)puVar15 + 0x374) = *(float *)((int)puVar15 + 0x374) * fVar5;
      *(float *)(puVar15 + 0x6f) = *(float *)(puVar15 + 0x6f) * fVar5 * fVar6;
      do {
        *(float *)((int)lVar28 + 0x36c) = *(float *)((int)lVar28 + 0x35c) * fVar5 * fVar5;
        iVar20 = (int)lVar23;
        lVar28 = lVar28 + 8;
        lVar23 = lVar23 + 8;
        *(float *)((int)lVar25 + 4) = *(float *)(iVar20 + 4) * fVar5 * fVar5;
        lVar25 = lVar25 + 8;
        lVar30 = lVar30 + -1;
      } while (lVar30 != 0);
      lVar30 = 4;
      lVar25 = uVar17 - 0xf4;
      pfVar24 = (float *)&DAT_007358e0;
      lVar28 = lVar19;
      lVar23 = lVar25;
      do {
        fVar5 = *pfVar24;
        fVar6 = pfVar24[1];
        pfVar24 = pfVar24 + 2;
        *(float *)((int)lVar28 + 0x36c) = *(float *)((int)lVar28 + 0x36c) * fVar5;
        lVar28 = lVar28 + 8;
        *(float *)((int)lVar23 + 4) = *(float *)((int)lVar23 + 4) * fVar6;
        lVar23 = lVar23 + 8;
        lVar30 = lVar30 + -1;
      } while (lVar30 != 0);
      lVar23 = 2;
      lVar28 = lVar19;
      do {
        iVar20 = (int)lVar28;
        lVar28 = lVar28 + 0x10;
        iVar16 = (int)lVar25;
        lVar25 = lVar25 + 0x10;
        dVar41 = (double)((float)(dVar41 + (double)*(float *)(iVar20 + 0x36c)) +
                          *(float *)(iVar16 + 4) + *(float *)(iVar16 + 8) + *(float *)(iVar16 + 0xc)
                         );
        lVar23 = lVar23 + -1;
      } while (lVar23 != 0);
      dVar41 = (double)((float)(dVar41 + dVar44) * fVar3 + fVar4);
    }
    dVar32 = (double)FastDiffRots(dVar41,(double)fVar2);
    fVar2 = animationSpeed;
    dVar43 = 1.2217304706573486;
    if ((dVar32 <= 1.2217304706573486) && (dVar43 = dVar32, dVar32 < -1.2217304706573486)) {
      dVar43 = -1.2217304706573486;
    }
    iVar20 = *(int *)(uVar12 + 0x1c4) + 1;
    *(int *)(uVar12 + 0x1c4) = iVar20;
    dVar32 = 30.5;
    puVar15[0x76] = (longlong)(int)(fVar2 * 30.5);
    if (*(int *)((int)puVar15 + 0x3b4) < iVar20) {
      if (*(char *)(param_1 + 0xbc) == '\x04') {
        *(undefined1 *)(param_1 + 0xbc) = 0;
      }
      else {
        FUN_0024d2e4(param_1,3,1);
        *(undefined1 *)(param_1 + 0xbc) = 3;
      }
      auVar46 = ZEXT416(0xffffffff);
      auVar46 = auVar46 | auVar46 << 0x20 | auVar46 << 0x40 | auVar46 << 0x60;
      auVar45 = vectorShiftLeftIntegerWord(auVar46,auVar46);
      auVar46 = loadVectorLeftIndexed(0x2c,0x2edad0);
      auVar46 = auVar46 >> 0x60 & (GPiece<16>)0xffffffff;
      auVar47 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
      auVar46 = vectorMultiplyAddFloatingPoint
                          (auVar47,auVar46 | auVar46 << 0x20 | auVar46 << 0x40 | auVar46 << 0x60,
                           auVar45);
      auVar46 = vectorConvertToSignedFixedPointWordSaturate(auVar46,0);
      puVar15[0x76] = (longlong)(int)((double)animationSpeed * dVar32);
      auVar46 = auVar46 >> 0x60 & (GPiece<16>)0xffffffff;
      iVar20 = *(int *)((int)puVar15 + 0x3b4);
      uVar14 = storeVectorElementWordIndexed
                         (auVar46 | auVar46 << 0x20 | auVar46 << 0x40 | auVar46 << 0x60,0x1c4,uVar29
                         );
      *(undefined4 *)(uVar12 + 0x1c4 & 0xfffffffc) = uVar14;
    }
    if ((*(char *)(param_1 + 0xbc) == '\x02') || (*(char *)(param_1 + 0xbc) == '\x04')) {
      dVar34 = (double)FastIntToDouble(iVar20);
      puVar15[0x76] = (longlong)(int)((double)animationSpeed * dVar32);
      dVar32 = (double)FastIntToDouble(*(undefined4 *)((int)puVar15 + 0x3b4));
      dVar34 = (double)(float)(dVar34 / dVar32);
      if (*(char *)(param_1 + 0xbc) == '\x04') {
        dVar34 = (double)(float)(dVar42 - dVar34);
      }
      dVar43 = (double)(float)(dVar34 * dVar43);
    }
    FastQuaternionToEuler(dVar43,uVar29 + 0x150,2);
    GetBonePosition(param_1,4,uVar17 - 0x3c0);
    dVar33 = (double)(float)(dVar31 * dVar31 +
                            (double)(float)(dVar39 * dVar39 + (double)(float)(dVar38 * dVar38)));
    dVar43 = dVar36;
    dVar32 = dVar36;
    dVar37 = dVar36;
    if ((double)(float)SQRT(dVar33) != dVar36) {
      dVar43 = 1.0 / SQRT(dVar33);
      dVar43 = (double)(float)(-(double)(float)((double)(float)(dVar33 * dVar43) * dVar43 - dVar42)
                               * (double)(float)(dVar35 * dVar43) + dVar43);
      dVar43 = (double)(float)(-(double)(float)((double)(float)(dVar33 * dVar43) * dVar43 - dVar42)
                               * (double)(float)(dVar35 * dVar43) + dVar43);
      dVar37 = (double)(float)(-(double)(float)((double)(float)(dVar33 * dVar43) * dVar43 - dVar42)
                               * (double)(float)(dVar35 * dVar43) + dVar43);
      dVar32 = (double)(float)(dVar39 * dVar37);
      dVar43 = (double)(float)(dVar38 * dVar37);
      dVar37 = (double)(float)(dVar31 * dVar37);
    }
    *(float *)((int)puVar15 + 0x23c) = (float)dVar40;
    *(float *)(puVar15 + 0x46) = (float)dVar32;
    *(float *)((int)puVar15 + 0x234) = (float)dVar43;
    *(float *)(puVar15 + 0x47) = (float)dVar37;
    *(undefined4 *)((int)puVar15 + 0x24c) = 0;
    dVar39 = (double)(float)(dVar32 * dVar32 + --(double)(float)(dVar43 * dVar43));
    dVar31 = dVar36;
    dVar38 = dVar36;
    if ((double)(float)SQRT(dVar39) != dVar36) {
      dVar31 = 1.0 / SQRT(dVar39);
      dVar31 = (double)(float)(-(double)(float)((double)(float)(dVar39 * dVar31) * dVar31 - dVar42)
                               * (double)(float)(dVar35 * dVar31) + dVar31);
      dVar31 = (double)(float)(-(double)(float)((double)(float)(dVar39 * dVar31) * dVar31 - dVar42)
                               * (double)(float)(dVar35 * dVar31) + dVar31);
      dVar31 = (double)(float)(-(double)(float)((double)(float)(dVar39 * dVar31) * dVar31 - dVar42)
                               * (double)(float)(dVar35 * dVar31) + dVar31);
      dVar38 = (double)(float)(dVar32 * dVar31);
      dVar31 = -(double)(float)(dVar43 * dVar31);
    }
    *(float *)(puVar15 + 0x48) = (float)dVar31;
    *(float *)((int)puVar15 + 0x244) = (float)dVar38;
    *(undefined4 *)(puVar15 + 0x49) = 0;
    *(undefined4 *)((int)puVar15 + 0x22c) = 0;
    *(undefined4 *)(puVar15 + 0x4b) = 0;
    *(float *)((int)puVar15 + 0x224) = (float)(dVar37 * dVar31 - dVar36);
    *(undefined4 *)((int)puVar15 + 0x254) = 0;
    *(undefined4 *)(puVar15 + 0x4a) = 0;
    *(float *)((int)puVar15 + 0x25c) = (float)dVar42;
    *(float *)(puVar15 + 0x44) = (float)(dVar43 * dVar36 - (double)(float)(dVar37 * dVar38));
    *(float *)(puVar15 + 0x45) = (float)(dVar32 * dVar38 - (double)(float)(dVar43 * dVar31));
    GetBoneTransformations(param_1,5,uVar17 - 0x200);
    fVar2 = *(float *)((int)puVar15 + 0x264);
    fVar3 = *(float *)(puVar15 + 0x4c);
    fVar4 = *(float *)(puVar15 + 0x4d);
    fVar5 = *(float *)(puVar15 + 0x4e);
    fVar6 = *(float *)((int)puVar15 + 0x274);
    fVar7 = *(float *)(puVar15 + 0x4f);
    fVar8 = *(float *)(puVar15 + 0x50);
    fVar9 = *(float *)((int)puVar15 + 0x284);
    fVar10 = *(float *)(puVar15 + 0x51);
    dVar39 = (double)(fVar4 * fVar4 + fVar3 * fVar3 + fVar2 * fVar2);
    dVar43 = dVar36;
    dVar31 = dVar36;
    dVar38 = dVar36;
    if ((double)(float)SQRT(dVar39) != dVar36) {
      dVar43 = 1.0 / SQRT(dVar39);
      dVar43 = (double)(float)(-(double)(float)((double)(float)(dVar39 * dVar43) * dVar43 - dVar42)
                               * (double)(float)(dVar35 * dVar43) + dVar43);
      dVar43 = (double)(float)(-(double)(float)((double)(float)(dVar39 * dVar43) * dVar43 - dVar42)
                               * (double)(float)(dVar35 * dVar43) + dVar43);
      fVar1 = (float)(-(double)(float)((double)(float)(dVar39 * dVar43) * dVar43 - dVar42) *
                      (double)(float)(dVar35 * dVar43) + dVar43);
      dVar38 = (double)(fVar3 * fVar1);
      dVar31 = (double)(fVar2 * fVar1);
      dVar43 = (double)(fVar4 * fVar1);
    }
    *(float *)(puVar15 + 0x4d) = (float)dVar43;
    *(float *)(puVar15 + 0x4c) = (float)dVar38;
    *(float *)((int)puVar15 + 0x264) = (float)dVar31;
    dVar39 = (double)(fVar7 * fVar7 + fVar5 * fVar5 + fVar6 * fVar6);
    dVar43 = dVar36;
    dVar31 = dVar36;
    dVar38 = dVar36;
    if ((double)(float)SQRT(dVar39) != dVar36) {
      dVar43 = 1.0 / SQRT(dVar39);
      dVar43 = (double)(float)(-(double)(float)((double)(float)(dVar39 * dVar43) * dVar43 - dVar42)
                               * (double)(float)(dVar35 * dVar43) + dVar43);
      dVar43 = (double)(float)(-(double)(float)((double)(float)(dVar39 * dVar43) * dVar43 - dVar42)
                               * (double)(float)(dVar35 * dVar43) + dVar43);
      fVar2 = (float)(-(double)(float)((double)(float)(dVar39 * dVar43) * dVar43 - dVar42) *
                      (double)(float)(dVar35 * dVar43) + dVar43);
      dVar38 = (double)(fVar5 * fVar2);
      dVar31 = (double)(fVar6 * fVar2);
      dVar43 = (double)(fVar7 * fVar2);
    }
    *(float *)(puVar15 + 0x4f) = (float)dVar43;
    *(float *)((int)puVar15 + 0x274) = (float)dVar31;
    *(float *)(puVar15 + 0x4e) = (float)dVar38;
    dVar39 = (double)(fVar10 * fVar10 + fVar8 * fVar8 + fVar9 * fVar9);
    dVar43 = dVar36;
    dVar31 = dVar36;
    dVar38 = dVar36;
    if ((double)(float)SQRT(dVar39) != dVar36) {
      dVar43 = 1.0 / SQRT(dVar39);
      dVar43 = (double)(float)(-(double)(float)((double)(float)(dVar39 * dVar43) * dVar43 - dVar42)
                               * (double)(float)(dVar35 * dVar43) + dVar43);
      dVar43 = (double)(float)(-(double)(float)((double)(float)(dVar39 * dVar43) * dVar43 - dVar42)
                               * (double)(float)(dVar35 * dVar43) + dVar43);
      fVar2 = (float)(-(double)(float)((double)(float)(dVar39 * dVar43) * dVar43 - dVar42) *
                      (double)(float)(dVar35 * dVar43) + dVar43);
      dVar38 = (double)(fVar8 * fVar2);
      dVar31 = (double)(fVar9 * fVar2);
      dVar43 = (double)(fVar10 * fVar2);
    }
    *(float *)(puVar15 + 0x50) = (float)dVar38;
    *(float *)((int)puVar15 + 0x284) = (float)dVar31;
    *(float *)(puVar15 + 0x51) = (float)dVar43;
    FastNormalizeRMtx4(uVar17 - 0x1c0,uVar17 - 0x200);
    *(float *)((int)puVar15 + 0x2dc) = (float)dVar42;
    *(undefined4 *)(puVar15 + 0x5b) = 0;
    *(undefined4 *)((int)puVar15 + 0x2d4) = 0;
    *(undefined4 *)(puVar15 + 0x5a) = 0;
    FastVecMtx4Mul(uVar17 - 0x180,uVar17 - 0x1c0,uVar17 - 0x240);
    dVar43 = (double)(512.0 / *(float *)(param_1 + 0x2c));
    MB_MtxToQuat((float *)(puVar15 + 0x16),(float *)(uVar17 - 0x180));
    if ((*(char *)(param_1 + 0xbc) == '\x02') || (*(char *)(param_1 + 0xbc) == '\x04')) {
      FastSlerp(dVar34,uVar29 + 400,uVar29 + 0x1d0,uVar17 - 0x3b0);
    }
    else {
      *(undefined4 *)(uVar12 + 400) = *(undefined4 *)(puVar15 + 0x16);
      *(undefined4 *)(uVar12 + 0x194) = *(undefined4 *)((int)puVar15 + 0xb4);
      *(undefined4 *)(uVar12 + 0x198) = *(undefined4 *)(puVar15 + 0x17);
      *(undefined4 *)(uVar12 + 0x19c) = *(undefined4 *)((int)puVar15 + 0xbc);
    }
    *(undefined1 *)(uVar12 + 0x183) = 1;
    *(float *)(uVar12 + 0x18c) = (float)dVar42;
    *(float *)(puVar15 + 0x18) = (float)dVar42;
    *(float *)((int)puVar15 + 0xc4) = (float)dVar42;
    *(float *)(puVar15 + 0x19) = (float)dVar42;
    *(float *)((int)puVar15 + 0xcc) = (float)dVar42;
    memcpy((void *)(uVar12 + 0x1a0),puVar15 + 0x18,0x10);
    *(float *)(uVar12 + 0x1b4) = (float)dVar43;
    *(float *)(uVar12 + 0x1bc) = (float)dVar42;
    *(undefined4 *)(uVar12 + 0x1b0) = 0;
    *(undefined4 *)(uVar12 + 0x1b8) = 0;
    iVar20 = FastDecTimerS32(uVar29 + 0x1c0);
    if (iVar20 != 0) {
      *(undefined1 *)(param_1 + 0xbc) = 4;
      *(undefined4 *)(uVar12 + 0x1c4) = 0;
    }
    fVar2 = DAT_007fec18;
    cVar27 = *(char *)(param_1 + 0xbc);
    if (cVar27 == '\x03') {
      iVar20 = FUN_0024d50c(param_1,uVar29 + 0xa0,uVar29 + 0x1e0);
      if (iVar20 == 0) {
        FUN_0024d2e4(param_1,3,1);
      }
      fVar2 = *(float *)(param_1 + 0x48);
      fVar3 = fVar2 + 1.5707963;
      fVar4 = 3.1415925 - fVar2;
      if (fVar2 - (3.1415925 - fVar2) < 0.0) {
        fVar4 = fVar2;
      }
      fVar5 = 3.1415925 - fVar3;
      if (fVar3 - (3.1415925 - fVar3) < 0.0) {
        fVar5 = fVar3;
      }
      fVar6 = -3.1415925 - fVar2;
      if ((-3.1415925 - fVar2) - fVar4 < 0.0) {
        fVar6 = fVar4;
      }
      *(float *)(puVar15 + 0x1f) = (float)dVar42;
      fVar2 = -3.1415925 - fVar3;
      if ((-3.1415925 - fVar3) - fVar5 < 0.0) {
        fVar2 = fVar5;
      }
      fVar3 = fVar6 * fVar6;
      uVar21 = *(undefined2 *)(param_1 + 0xa6);
      *(undefined4 *)((int)puVar15 + 0xfc) = 0x45afdf66;
      *(undefined1 *)(puVar15 + 0x21) = 0;
      *(undefined1 *)((int)puVar15 + 0x109) = 1;
      *(undefined2 *)((int)puVar15 + 0x10a) = uVar21;
      fVar4 = fVar2 * fVar2;
      fVar8 = fVar3 * fVar3 * fVar6;
      fVar5 = fVar4 * fVar4 * fVar2;
      fVar9 = fVar3 * fVar8;
      fVar7 = fVar4 * fVar5;
      *(float *)((int)puVar15 + 0xf4) =
           fVar3 * fVar9 * 2.601887e-06 +
           fVar9 * -0.0001980741 + fVar8 * 0.0083330255 + fVar3 * fVar6 * -0.16666657 + fVar6;
      *(float *)((int)puVar15 + 0x10c) = (float)dVar42;
      *(undefined4 *)(puVar15 + 0x22) = 1;
      *(undefined4 *)((int)puVar15 + 0x104) = 0x10001;
      *(int *)(puVar15 + 0x20) = param_1;
      *(float *)(puVar15 + 0x1e) =
           fVar4 * fVar7 * 2.601887e-06 +
           fVar7 * -0.0001980741 + fVar5 * 0.0083330255 + fVar4 * fVar2 * -0.16666657 + fVar2;
      CollLine(uVar29 + 0xd0,uVar29 + 0x1e0,9,param_1,uVar17 - 0x370);
    }
    else if ((cVar27 == '\x02') || (cVar27 == '\x04')) {
      fVar3 = *(float *)(uVar12 + 0xa0) * DAT_007fec18;
      *(float *)(puVar15 + 0x1a) = fVar3;
      fVar4 = *(float *)(uVar12 + 0xa4) * fVar2;
      *(float *)((int)puVar15 + 0xd4) = fVar4;
      fVar2 = *(float *)(uVar12 + 0xa8) * fVar2;
      *(float *)(puVar15 + 0x1b) = fVar2;
      *(undefined4 *)((int)puVar15 + 0xdc) = *(undefined4 *)(uVar12 + 0xac);
      *(float *)(puVar15 + 0x1a) = fVar3 + *(float *)(uVar12 + 0xd0);
      *(float *)((int)puVar15 + 0xd4) = fVar4 + *(float *)(uVar12 + 0xd4);
      *(float *)(puVar15 + 0x1b) = fVar2 + *(float *)(uVar12 + 0xd8);
      uVar18 = SpawnPart_69(uVar17 - 0x390,&DAT_00a15d30,0x7f,param_1);
      iVar20 = (int)uVar18;
      if (iVar20 != 0) {
        *(float *)(iVar20 + 0xc) = (float)((double)(DAT_007fec1c - 1000.0) * dVar34 + 1000.0);
        uVar21 = FastDoubleToInt((double)(float)(dVar34 * 111.0 + 16.0));
        *(undefined2 *)(iVar20 + 0x34) = uVar21;
        auVar46 = ZEXT416(0xffffffff);
        auVar45 = auVar46 | auVar46 << 0x20 | auVar46 << 0x40 | auVar46 << 0x60;
        *(undefined2 *)(iVar20 + 0x36) = 1;
        auVar46 = loadVectorLeftIndexed(0x5c,0x2edad0);
        auVar45 = vectorShiftLeftIntegerWord(auVar45,auVar45);
        auVar46 = auVar46 >> 0x60 & (GPiece<16>)0xffffffff;
        auVar47 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
        auVar46 = vectorMultiplyAddFloatingPoint
                            (auVar47,auVar46 | auVar46 << 0x20 | auVar46 << 0x40 | auVar46 << 0x60,
                             auVar45);
        auVar46 = vectorConvertToSignedFixedPointWordSaturate(auVar46,0);
        puVar15[0x76] = (longlong)(int)(animationSpeed * 4.5);
        auVar46 = vectorSplatHalfWord(auVar46,1);
        uVar14 = *(undefined4 *)((int)puVar15 + 0x3b4);
        uVar21 = storeVectorElementHalfWordIndexed(auVar46,10,uVar18);
        *(undefined2 *)(iVar20 + 10) = uVar21;
        dVar43 = (double)FastIntToDouble((short)uVar14);
        *(undefined **)(iVar20 + 0x38) = &DAT_007f7f7f;
        *(float *)(iVar20 + 0x30) = (float)(dVar42 / dVar43);
      }
      uVar14 = *(undefined4 *)(uVar12 + 0xd0);
      *(undefined4 *)(puVar15 + 0x1c) = uVar14;
      *(undefined4 *)((int)puVar15 + 0xe4) = *(undefined4 *)(uVar12 + 0xd4);
      fVar2 = *(float *)(uVar12 + 0xd8);
      *(float *)(puVar15 + 0x1d) = fVar2;
      *(undefined4 *)((int)puVar15 + 0xec) = *(undefined4 *)(uVar12 + 0xdc);
      fVar3 = DAT_007fec20;
      uVar13 = *(uint *)(uVar12 + 0xf0);
      uVar22 = (ulonglong)uVar13;
      *(float *)(puVar15 + 0x1d) = (float)((double)fVar2 - dVar35);
      fVar2 = (float)((double)(fVar3 - 0.1) * dVar34 + 0.10000000149011612);
      dVar43 = (double)fVar2;
      if (uVar13 == 0xffffffff) {
        uVar22 = CreatePointLight2
                           (fVar2,dVar36,(double)DAT_007fec24,(double)DAT_007fec28,
                            (double)DAT_007fec2c,(Vec4 *)(puVar15 + 0x1c));
        uVar14 = *(undefined4 *)(puVar15 + 0x1c);
        *(int *)(uVar12 + 0xf0) = (int)uVar22;
      }
      if (-1 < (int)uVar22) {
        iVar20 = (int)(uVar22 << 5);
        *(undefined4 *)((int)&PointLights[0].pos.x + iVar20) = uVar14;
        *(undefined4 *)((int)&PointLights[0].pos.y + iVar20) = *(undefined4 *)((int)puVar15 + 0xe4);
        uVar14 = *(undefined4 *)(puVar15 + 0x1d);
        *(float *)((int)&PointLights[0].pos.w + iVar20) = (float)dVar43;
        *(undefined4 *)((int)&PointLights[0].pos.z + iVar20) = uVar14;
        *(float *)((int)&PointLights[0].color.x + iVar20) = DAT_007fec24;
        *(float *)((int)&PointLights[0].color.y + iVar20) = DAT_007fec28;
        *(float *)((int)&PointLights[0].color.z + iVar20) = DAT_007fec2c;
      }
    }
    else if (*(int *)(uVar12 + 0xf0) != -1) {
      DeletePointLight(*(int *)(uVar12 + 0xf0));
      *(undefined4 *)(uVar12 + 0xf0) = 0xffffffff;
    }
  }
  else if (*(int *)(uVar12 + 0xf0) != -1) {
    DeletePointLight(*(int *)(uVar12 + 0xf0));
    *(undefined4 *)(uVar12 + 0xf0) = 0xffffffff;
  }
  fVar2 = g_heroPosition.x - *(float *)(param_1 + 0x10);
  fVar3 = g_heroPosition.y - *(float *)(param_1 + 0x14);
  dVar34 = ABS((double)fVar2);
  dVar31 = ABS((double)fVar3);
  *(float *)(puVar15 + 0x65) = fVar2;
  *(float *)((int)puVar15 + 0x32c) = fVar3;
  *(float *)(puVar15 + 0x66) = (float)(dVar34 - dVar31);
  uVar22 = (ulonglong)(*(uint *)(puVar15 + 0x65) >> 0x1c) & 8 |
           (ulonglong)(*(uint *)(puVar15 + 0x66) >> 0x1e) & 2 |
           (ulonglong)(*(uint *)((int)puVar15 + 0x32c) >> 0x1d) & 4;
  dVar43 = ABS((double)*(float *)(puVar15 + 0x65));
  if ((double)*(float *)(puVar15 + 0x66) - dVar36 < 0.0) {
    dVar43 = dVar31;
  }
  fVar2 = *(float *)(&g_atanQuadrantTable + (int)(uVar22 << 2));
  dVar31 = ABS((double)*(float *)((int)puVar15 + 0x32c));
  if ((double)*(float *)(puVar15 + 0x66) - dVar36 < 0.0) {
    dVar31 = dVar34;
  }
  fVar3 = *(float *)(((uint)(uVar22 << 2) | 0x735900) + 4);
  if (dVar36 < dVar43) {
    lVar28 = uVar17 - 0x450;
    lVar23 = uVar17 - 0x114;
    lVar25 = uVar17 - 0x104;
    lVar30 = 2;
    fVar4 = (float)(dVar31 - dVar43) / (float)(dVar31 + dVar43);
    fVar5 = fVar4 * fVar4;
    *(float *)(puVar15 + 0x6b) = fVar4;
    *(float *)(puVar15 + 0x6a) = fVar4;
    *(float *)((int)puVar15 + 0x354) = fVar4;
    *(float *)((int)puVar15 + 0x34c) = fVar4;
    fVar4 = fVar5 * fVar5;
    *(float *)(puVar15 + 0x6a) = *(float *)(puVar15 + 0x6a) * fVar5;
    *(float *)((int)puVar15 + 0x354) = *(float *)((int)puVar15 + 0x354) * fVar4;
    *(float *)(puVar15 + 0x6b) = *(float *)(puVar15 + 0x6b) * fVar4 * fVar5;
    do {
      *(float *)((int)lVar28 + 0x34c) = *(float *)((int)lVar28 + 0x33c) * fVar4 * fVar4;
      iVar20 = (int)lVar23;
      lVar28 = lVar28 + 8;
      lVar23 = lVar23 + 8;
      *(float *)((int)lVar25 + 4) = *(float *)(iVar20 + 4) * fVar4 * fVar4;
      lVar25 = lVar25 + 8;
      lVar30 = lVar30 + -1;
    } while (lVar30 != 0);
    lVar30 = 4;
    lVar25 = uVar17 - 0x114;
    pfVar24 = (float *)&DAT_007358e0;
    lVar28 = lVar19;
    lVar23 = lVar25;
    do {
      fVar4 = *pfVar24;
      fVar5 = pfVar24[1];
      pfVar24 = pfVar24 + 2;
      *(float *)((int)lVar28 + 0x34c) = *(float *)((int)lVar28 + 0x34c) * fVar4;
      lVar28 = lVar28 + 8;
      *(float *)((int)lVar23 + 4) = *(float *)((int)lVar23 + 4) * fVar5;
      lVar23 = lVar23 + 8;
      lVar30 = lVar30 + -1;
    } while (lVar30 != 0);
    lVar28 = 2;
    do {
      iVar20 = (int)lVar19;
      iVar16 = (int)lVar25;
      lVar19 = lVar19 + 0x10;
      lVar25 = lVar25 + 0x10;
      dVar36 = (double)((float)(dVar36 + (double)*(float *)(iVar20 + 0x34c)) +
                        *(float *)(iVar16 + 4) + *(float *)(iVar16 + 8) + *(float *)(iVar16 + 0xc));
      lVar28 = lVar28 + -1;
    } while (lVar28 != 0);
    dVar36 = (double)((float)(dVar36 + dVar44) * fVar2 + fVar3);
  }
  dVar43 = (double)FastDiffRots(dVar36,dVar41);
  dVar41 = 1.2217304706573486;
  if ((dVar43 <= 1.2217304706573486) && (dVar41 = dVar43, dVar43 < -1.2217304706573486)) {
    dVar41 = -1.2217304706573486;
  }
  FastQuaternionToEuler(dVar41,uVar29 + 0x110,2);
  return;
}


// 0x02eefd8 (0x68 bytes)
void M211_002eefd8(int param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0x78);
  MB_PathMoveDist
            ((double)(g_FrameTime * DAT_007fec04),
             *(undefined4 *)(DAT_00a1a85c + *(int *)(iVar1 + 0x60) * 0x20 + 0x10),param_1 + 0x10,
             iVar1 + 100,iVar1 + 0x68,iVar1,0);
  return;
}


// 0x02ef040 (0x10c bytes)
longlong M211_002ef040(int param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  int iVar8;
  int iVar9;
  Spline *pSVar10;
  int iVar11;
  double dVar12;
  
  iVar8 = *(int *)(param_1 + 0x78);
  iVar9 = *(int *)(DAT_00a1a85c + *(int *)(iVar8 + 0x60) * 0x20 + 0x10);
  iVar11 = FastDecTimerS32(iVar8 + 0x6c);
  dVar12 = (double)FastIntToDouble(*(undefined4 *)(iVar8 + 0x6c));
  fVar1 = (float)(dVar12 * (double)*(float *)(iVar8 + 0x70));
  fVar2 = *(float *)(iVar9 + 0x10);
  fVar3 = *(float *)(iVar9 + 0x14);
  fVar4 = *(float *)(iVar9 + 0x18);
  pSVar10 = Splines[*(int *)(iVar8 + 0x84)];
  fVar5 = pSVar10->points[0].x;
  fVar6 = pSVar10->points[0].y;
  fVar7 = pSVar10->points[0].z;
  *(float *)(param_1 + 0x1c) = pSVar10->points[0].w;
  *(float *)(param_1 + 0x10) = fVar1 * (fVar5 - fVar2) + fVar2;
  *(float *)(param_1 + 0x14) = fVar1 * (fVar6 - fVar3) + fVar3;
  *(float *)(param_1 + 0x18) = fVar1 * (fVar7 - fVar4) + fVar4;
  return (ZERO_MASK(iVar11)) + 1;
}


// 0x02ef158 (0x1a8 bytes)
void M211_002ef158(int param_1)

{
  float fVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined8 in_r8;
  undefined8 uVar5;
  undefined8 uVar6;
  double dVar7;
  GPiece<16> auStack_70;
  GPiece<4> local_60;
  GPiece<12> local_5c;
  
  iVar2 = *(int *)(param_1 + 0x78);
  iVar4 = *(int *)(DAT_00a1a85c + *(int *)(iVar2 + 0x60) * 0x20 + 0x10);
  *(undefined4 *)(iVar2 + 100) = 0;
  dVar7 = 0.0;
  *(undefined4 *)(iVar2 + 0x68) = 0;
  *(undefined4 *)(iVar2 + 0x74) = DAT_007fec0c;
  uVar6 = 0x4034000000000000;
  uVar5 = 0x4014000000000000;
  MB_PathFollowToPos
            (0x4034000000000000,0x4014000000000000,0,iVar4,
             ZEXT48(Splines[*(int *)(iVar2 + 0x88)]) + 0x30,auStack_70,local_5c,local_60,in_r8,0);
  *(undefined2 *)(iVar2 + 0x8c) = 0;
  MB_PathFollowToPos
            (uVar6,uVar5,dVar7,iVar4,ZEXT48(Splines[*(int *)(iVar2 + 0x88)]) + 0x20,auStack_70,
             local_5c,local_60,in_r8,0);
  *(undefined2 *)(iVar2 + 0x8e) = 0;
  *(undefined4 *)(iVar2 + 0x78) = 0;
  iVar3 = (int)*(short *)(iVar2 + 0x8c);
  if (0 < *(short *)(iVar2 + 0x8c)) {
    do {
      iVar3 = iVar3 + -1;
      fVar1 = (float)(dVar7 + (double)*(float *)(iVar4 + 0x1c));
      dVar7 = (double)fVar1;
      iVar4 = iVar4 + 0x10;
      *(float *)(iVar2 + 0x78) = fVar1;
    } while (0 < iVar3);
  }
  return;
}


// 0x02ef340 (0x674 bytes)
/* Moby 211 */

void UpdateMoby_211(MobyInstance *moby)

{
  u8 uVar1;
  float fVar2;
  MobyModeBit MVar3;
  void *pvVar4;
  u16 *puVar5;
  float *pfVar6;
  Spline *pSVar7;
  undefined4 uVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  longlong lVar17;
  int iVar18;
  longlong lVar19;
  ulonglong uVar20;
  undefined8 in_LR;
  double dVar21;
  GPiece<16> auVar22;
  GPiece<16> auVar23;
  GPiece<16> auVar24;
  GPiece<16> auVar25;
  GPiece<32> auStack_40;
  
  lVar17 = (longlong)(int)moby;
  uVar1 = moby->state;
  pvVar4 = moby->pVar;
  uVar20 = ZEXT48(pvVar4);
  if (uVar1 == '\x06') {
    M211_002edb38(lVar17);
    iVar18 = MB_IsPntInCuboid
                       ((Vec4 *)(lVar17 + 0x10),(longlong)*(int *)((int)pvVar4 + 0x1cc));
    if (iVar18 != 0) {
      GetBonePosition(lVar17,2,auStack_40);
      iVar18 = FUN_003426d8(lVar17,auStack_40);
      if (iVar18 != 0) {
        fVar2 = (moby->rotation).z;
        fVar9 = fVar2 + 1.5707963;
        fVar10 = 3.1415925 - fVar2;
        if (fVar2 - (3.1415925 - fVar2) < 0.0) {
          fVar10 = fVar2;
        }
        fVar12 = 3.1415925 - fVar9;
        if (fVar9 - (3.1415925 - fVar9) < 0.0) {
          fVar12 = fVar9;
        }
        fVar11 = -3.1415925 - fVar2;
        if ((-3.1415925 - fVar2) - fVar10 < 0.0) {
          fVar11 = fVar10;
        }
        fVar2 = -3.1415925 - fVar9;
        if ((-3.1415925 - fVar9) - fVar12 < 0.0) {
          fVar2 = fVar12;
        }
        fVar9 = fVar11 * fVar11;
        fVar10 = fVar2 * fVar2;
        fVar14 = fVar9 * fVar9 * fVar11;
        fVar12 = fVar10 * fVar10 * fVar2;
        fVar15 = fVar9 * fVar14;
        fVar16 = DAT_0071f408 * 0.4;
        pfVar6 = *(float **)(iVar18 + 0x78);
        fVar13 = fVar10 * fVar12;
        pfVar6[1] = fVar16 * (fVar9 * fVar15 * 2.601887e-06 +
                             fVar15 * -0.0001980741 +
                             fVar14 * 0.0083330255 + fVar9 * fVar11 * -0.16666657 + fVar11);
        *pfVar6 = fVar16 * (fVar10 * fVar13 * 2.601887e-06 +
                           fVar13 * -0.0001980741 +
                           fVar12 * 0.0083330255 + fVar10 * fVar2 * -0.16666657 + fVar2);
      }
      FUN_00363aa0(lVar17,&DAT_007fec30,0);
      MB_genericExplosion
                (0,0,0x4010000000000000,0x4000000000000000,0x4022000000000000,0x3ff0000000000000,
                 0x402e000000000000,lVar17,uVar20 + 0x40,lVar17 + 0x10,1,5,5,2,4);
      DeleteMoby(moby);
      return;
    }
  }
  else if (uVar1 == '\x05') {
    MB_PathMoveDist
              ((double)(g_FrameTime * DAT_007fec04),
               *(undefined4 *)(DAT_00a1a85c + *(int *)((int)pvVar4 + 0x60) * 0x20 + 0x10),
               lVar17 + 0x10,uVar20 + 100,uVar20 + 0x68,0x800000,0);
  }
  else if (uVar1 == '\x04') {
    iVar18 = M211_002ef040(lVar17);
    if (iVar18 != 0) {
      auVar22 = ZEXT416(0xffffffff);
      auVar22 = auVar22 | auVar22 << 0x20 | auVar22 << 0x40 | auVar22 << 0x60;
      moby->state = '\x05';
      auVar23 = vectorShiftLeftIntegerWord(auVar22,auVar22);
      auVar22 = loadVectorLeftIndexed(0xffffffffffffec08,0x800000);
      auVar24 = vectorConvertFromSignedFixedPointWord(auVar22,0);
      auVar22 = loadVectorLeftIndexed(in_LR,0x2ef300);
      auVar22 = auVar22 >> 0x60 & (GPiece<16>)0xffffffff;
      auVar25 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
      auVar22 = vectorAddFloatingPoint
                          (auVar24,auVar22 | auVar22 << 0x20 | auVar22 << 0x40 | auVar22 << 0x60);
      auVar22 = vectorMultiplyAddFloatingPoint(auVar25,auVar22,auVar23);
      auVar22 = vectorConvertToSignedFixedPointWordSaturate(auVar22,0);
      auVar22 = auVar22 >> 0x60 & (GPiece<16>)0xffffffff;
      uVar8 = storeVectorElementWordIndexed
                        (auVar22 | auVar22 << 0x20 | auVar22 << 0x40 | auVar22 << 0x60,0x6c,uVar20);
      *(undefined4 *)((int)pvVar4 + 0x6cU & 0xfffffffc) = uVar8;
    }
  }
  else {
    if (uVar1 != '\x03') {
      if (uVar1 != '\x02') {
        if (uVar1 == '\x01') {
          if (*(short *)((int)GameCamera.pCurrentUpdCam + 0x86) != 0x14) {
            return;
          }
          auVar22 = ZEXT416(0xffffffff);
          auVar24 = auVar22 | auVar22 << 0x20 | auVar22 << 0x40 | auVar22 << 0x60;
          auVar22 = loadVectorLeftIndexed(0x80,uVar20);
          auVar25 = vectorShiftLeftIntegerWord(auVar24,auVar24);
          auVar24 = loadVectorRightIndexed(0x90,uVar20);
          auVar23 = loadVectorLeftIndexed(in_LR,0x2ef300);
          auVar24 = vectorConvertFromSignedFixedPointWord(auVar22 | auVar24,0);
          auVar22 = auVar23 >> 0x60 & (GPiece<16>)0xffffffff;
          auVar23 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
          auVar22 = vectorAddFloatingPoint
                              (auVar24,auVar22 | auVar22 << 0x20 | auVar22 << 0x40 | auVar22 << 0x60
                              );
          auVar22 = vectorMultiplyAddFloatingPoint(auVar23,auVar22,auVar25);
          auVar22 = vectorConvertToSignedFixedPointWordSaturate(auVar22,0);
          auVar22 = auVar22 >> 0x60 & (GPiece<16>)0xffffffff;
          uVar8 = storeVectorElementWordIndexed
                            (auVar22 | auVar22 << 0x20 | auVar22 << 0x40 | auVar22 << 0x60,0x6c,
                             uVar20);
          *(undefined4 *)((int)pvVar4 + 0x6cU & 0xfffffffc) = uVar8;
          moby->state = '\x02';
          return;
        }
        if (uVar1 == '\0') {
          if (*(int *)((int)pvVar4 + 0x60) == -1) {
            DeleteMoby(moby);
            return;
          }
          if (**(int **)(DAT_00a1a85c + *(int *)((int)pvVar4 + 0x60) * 0x20 + 0x10) == 0) {
            DeleteMoby(moby);
            return;
          }
          if (*(int *)((int)pvVar4 + 0x88) == -1) {
            DeleteMoby(moby);
            return;
          }
          if (Splines[*(int *)((int)pvVar4 + 0x88)]->cnt != 3) {
            DeleteMoby(moby);
            return;
          }
          if (*(int *)((int)pvVar4 + 0x1cc) == -1) {
            DeleteMoby(moby);
            return;
          }
          M211_002ef158(lVar17);
          MVar3 = moby->modeBits;
          moby->collision = (ushort *)0x0;
          moby->state = '\x01';
          *(undefined4 *)((int)pvVar4 + 0xf4) = 0xffffffff;
          *(undefined4 *)((int)pvVar4 + 0xf0) = 0xffffffff;
          moby->modeBits =
               MVar3 & (MIRROR|CAN_BE_DAMAGED|HIDE_BACKFACES|DISABLE_Z_WRITE|DRAW_SHADOW|
                        DRAW_TRANSPARENT_WEIRD|LOCK_ROTATION|NO_DRAW|UNK_40|HAS_SPECIAL_VARS|
                        HAS_GLOW|TRANSPARENT|NO_POST_UPDATE|NO_UPDATE|DISABLED) | (UNK_40|DISABLED);
          FastMemSet(uVar20 + 0x100,0,0x40);
          AttachManipulator(moby,2,(int)(uVar20 + 0x100));
          FastMemSet(uVar20 + 0x140,0,0x40);
          AttachManipulator(moby,3,(int)(uVar20 + 0x140));
          FastMemSet(uVar20 + 0x180,0,0x40);
          AttachManipulator(moby,4,(int)(uVar20 + 0x180));
          return;
        }
        goto LAB_002ef98c;
      }
      iVar18 = FastDecTimerS32(uVar20 + 0x6c);
      if (iVar18 == 0) {
        return;
      }
      moby->modeBits =
           moby->modeBits &
           (MIRROR|CAN_BE_DAMAGED|HIDE_BACKFACES|CAN_BE_AUTO_TARGETED|DISABLE_Z_WRITE|DRAW_SHADOW|
            DRAW_TRANSPARENT_WEIRD|LOCK_ROTATION|NO_DRAW|HAS_SPECIAL_VARS|HAS_GLOW|TRANSPARENT|
            NO_POST_UPDATE|NO_UPDATE) | CAN_BE_AUTO_TARGETED;
      puVar5 = moby->pClass->collision;
      moby->state = '\x03';
      moby->collision = puVar5;
      MB_SetAnimationNoBlend(lVar17,2,0);
      auVar22 = ZEXT416(0xffffffff);
      auVar22 = auVar22 | auVar22 << 0x20 | auVar22 << 0x40 | auVar22 << 0x60;
      lVar19 = (longlong)DAT_007fec00;
      auVar23 = vectorShiftLeftIntegerWord(auVar22,auVar22);
      auVar22 = loadVectorLeftIndexed(in_LR,0x2ef300);
      moby->unk58 = 0.5;
      auVar24 = loadVectorLeftIndexed(0xffffffffffffec00,0x800000);
      auVar22 = auVar22 >> 0x60 & (GPiece<16>)0xffffffff;
      auVar24 = vectorConvertFromSignedFixedPointWord(auVar24,0);
      auVar25 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
      auVar22 = vectorAddFloatingPoint
                          (auVar24,auVar22 | auVar22 << 0x20 | auVar22 << 0x40 | auVar22 << 0x60);
      auVar22 = vectorMultiplyAddFloatingPoint(auVar25,auVar22,auVar23);
      auVar22 = vectorConvertToSignedFixedPointWordSaturate(auVar22,0);
      fVar2 = animationSpeed * ((float)lVar19 + 0.5);
      auVar22 = auVar22 >> 0x60 & (GPiece<16>)0xffffffff;
      uVar8 = storeVectorElementWordIndexed
                        (auVar22 | auVar22 << 0x20 | auVar22 << 0x40 | auVar22 << 0x60,0x6c,uVar20);
      *(undefined4 *)((int)pvVar4 + 0x6cU & 0xfffffffc) = uVar8;
      dVar21 = (double)FastIntToDouble((int)fVar2);
      pSVar7 = Splines[*(int *)((int)pvVar4 + 0x84)];
      *(float *)((int)pvVar4 + 0x70) = (float)(1.0 / dVar21);
      (moby->pos).x = pSVar7->points[0].x;
      (moby->pos).y = pSVar7->points[0].y;
      (moby->pos).z = pSVar7->points[0].z;
      (moby->pos).w = pSVar7->points[0].w;
    }
    dVar21 = (double)BlendAnimFrame(moby);
    if (3.0 <= dVar21) {
      M211_002ef040(lVar17);
    }
    if (((moby->field43_0x70 & 2U) != 0) && (moby->updateId == moby->animationId)) {
      moby->state = '\x04';
      MB_SetAnimation(lVar17,0,0,10);
      moby->unk58 = 1.0;
    }
  }
LAB_002ef98c:
  M211_002ed768(lVar17);
  return;
}


