// game/update/moby827.cpp -- reconstructed from NPEA00385 EBOOT
// STATUS: NOT STARTED (raw Ghidra output)
// 8 functions, 0x479880-0x47ca50
#include "game/update/moby827.h"
#include "game/camera.h"
#include "game/collproc.h"
#include "game/freeze.h"
#include "game/hero.h"
#include "game/map.h"
#include "game/mobyfunc.h"
#include "game/mobyproc.h"
#include "game/mobyutil.h"
#include "game/partupd.h"
#include "game/sound.h"
#include "game/update.h"
#include "game/update/moby1488.h"
#include "game/update/moby849.h"
#include "game/update/moby859.h"
#include "idol/fastfunc.h"
#include "idol/mathfunc.h"
#include "idol/xUnk.h"

// 0x0479880 (0x2ec bytes)
void M827_00479880
               (double param_1,double param_2,int param_3,float *param_4,undefined8 param_5,
               undefined8 param_6,int param_7)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  int iVar6;
  int iVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  GPiece<16> local_60;
  GPiece<16> local_50;
  
  fVar2 = *(float *)(param_3 + 0xe4);
  fVar3 = *(float *)(param_3 + 0xe0);
  fVar4 = *(float *)(param_3 + 0xe8);
  dVar12 = 0.0;
  dVar9 = (double)SQRT(fVar4 * fVar4 + fVar3 * fVar3 + fVar2 * fVar2);
  fVar1 = (float)(param_1 / dVar9);
  fVar5 = *param_4;
  dVar10 = dVar12;
  if (0.0 - dVar9 < 0.0) {
    dVar10 = (double)(fVar2 * fVar1);
  }
  dVar13 = dVar12;
  if (0.0 - dVar9 < 0.0) {
    dVar13 = (double)(fVar3 * fVar1);
  }
  dVar14 = dVar12;
  if (0.0 - dVar9 < 0.0) {
    dVar14 = (double)(fVar4 * fVar1);
  }
  if (dVar9 - 0.0 < 0.0) {
    dVar10 = (double)(fVar2 * fVar1);
  }
  if (dVar9 - 0.0 < 0.0) {
    dVar13 = (double)(fVar3 * fVar1);
  }
  if (dVar9 - 0.0 < 0.0) {
    dVar14 = (double)(fVar4 * fVar1);
  }
  fVar1 = SQRT((float)(dVar14 * dVar14 +
                      (double)(float)(dVar13 * dVar13 + (double)(float)(dVar10 * dVar10))));
  dVar8 = (double)(-g_FrameTime / fVar1);
  dVar9 = dVar12;
  if (0.0 - fVar1 < 0.0) {
    dVar9 = (double)(float)(dVar8 * dVar10);
  }
  dVar11 = dVar12;
  if (0.0 - fVar1 < 0.0) {
    dVar11 = (double)(float)(dVar8 * dVar14);
  }
  if (0.0 - fVar1 < 0.0) {
    dVar12 = (double)(float)(dVar8 * dVar13);
  }
  if (fVar1 - 0.0 < 0.0) {
    dVar9 = (double)(float)(dVar8 * dVar10);
  }
  if (fVar1 - 0.0 < 0.0) {
    dVar11 = (double)(float)(dVar8 * dVar14);
  }
  if (fVar1 - 0.0 < 0.0) {
    dVar12 = (double)(float)(dVar8 * dVar13);
  }
  param_4[1] = (float)((double)param_4[1] + dVar9);
  param_4[2] = (float)((double)param_4[2] + dVar11);
  *param_4 = (float)((double)fVar5 + dVar12);
  *(float *)(param_3 + 0x10) = *(float *)(param_3 + 0x10) + (float)((double)fVar5 + dVar12);
  *(float *)(param_3 + 0x14) = *(float *)(param_3 + 0x14) + param_4[1];
  *(float *)(param_3 + 0x18) = *(float *)(param_3 + 0x18) + param_4[2];
  if ((param_2 < (double)SQRT(param_4[2] * param_4[2] +
                              *param_4 * *param_4 + param_4[1] * param_4[1])) &&
     (iVar6 = CollLine(local_60,local_50,0,param_3,0), iVar6 != 0)) {
    dVar12 = (double)g_CollOutput.ip.x;
    dVar9 = (double)g_CollOutput.ip.y;
    dVar8 = (double)g_CollOutput.ip.z;
    *(float *)(param_3 + 0x1c) = g_CollOutput.ip.w;
    *(float *)(param_3 + 0x10) = (float)(dVar12 - dVar13);
    *(float *)(param_3 + 0x14) = (float)(dVar9 - dVar10);
    *(float *)(param_3 + 0x18) = (float)(dVar8 - dVar14);
  }
  iVar6 = 0;
  do {
    iVar7 = CollSphere(param_2,local_50);
    if (iVar7 == 0) break;
    dVar12 = (double)g_CollOutput.push.x;
    dVar9 = (double)g_CollOutput.push.y;
    iVar6 = iVar6 + 1;
    dVar8 = (double)g_CollOutput.push.z;
    *(float *)(param_3 + 0x1c) = g_CollOutput.push.w;
    *(float *)(param_3 + 0x10) = (float)(dVar12 - dVar13);
    *(float *)(param_3 + 0x14) = (float)(dVar9 - dVar10);
    *(float *)(param_3 + 0x18) = (float)(dVar8 - dVar14);
  } while (iVar6 < 6);
  if (param_7 != 0) {
    MB_PushOutOfSplineWalls
              (0x3fe0000000000000,*(undefined4 *)(*(int *)(param_3 + 0x78) + 0x1ec),
               *(int *)(param_3 + 0x78),param_3 + 0x10,param_3 + 0x10);
  }
  return;
}


// 0x0479b78 (0x294 bytes)
// inlined: FastRSqrt @0x479bfc, FastRSqrt @0x479ce4
void M827_00479b78(longlong param_1)

{
  GPiece<16> auStack_a0;
  GPiece<16> auStack_90;
  GPiece<56> local_80;
  
  MB_TransformToQuat(auStack_a0,param_1 + 0xc0);
  MB_TransformToQuat(auStack_90,local_80);
  FastSlerp((double)DAT_00877b0c,auStack_a0,auStack_a0,auStack_90);
  FastQuaternionToMtx4(auStack_a0,param_1 + 0xc0);
  return;
}


// 0x0479e20 (0x160 bytes)
// inlined: FastRSqrt @0x479e80
void M827_00479e20(void)

{
  GPiece<16> local_30;
  GPiece<32> local_20;
  
  CollLine(local_20,local_30,2,0,0);
  return;
}


// 0x0479fa8 (0x380 bytes)
void M827_00479fa8(MobyInstance *param_1)

{
  void *pvVar1;
  undefined4 uVar2;
  int iVar3;
  undefined8 in_r8;
  undefined8 in_r9;
  int iVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  GPiece<16> local_c0;
  GPiece<16> local_b0;
  GPiece<16> local_a0;
  
  pvVar1 = param_1->pVar;
  PlayMobySound(4,0,param_1);
  uVar7 = 0x3fe0000000000000;
  iVar4 = 0;
  dVar8 = 1.0;
  dVar9 = 4.0;
  dVar10 = 0.0;
  dVar11 = -0.625;
  dVar12 = 0.625;
  dVar13 = 1.25;
  uVar5 = 0x3fd3333340000000;
  uVar6 = 0x3fe3333340000000;
  do {
    MB_randRangeFloat((float)dVar8,(float)dVar9);
    MB_randRangeFloat((float)dVar11,(float)dVar12);
    MB_randRangeFloat((float)dVar11,(float)dVar12);
    MB_randRangeFloat((float)dVar10,(float)dVar13);
    M1488_0028cce0(uVar5,uVar6,*(undefined4 *)((int)pvVar1 + 0x20c),local_c0,local_b0,&DAT_00a15d30,
                   0x165,in_r8,in_r9,0);
    iVar4 = iVar4 + 1;
  } while (iVar4 < 4);
  iVar4 = 0;
  uVar5 = 0x3fe6666660000000;
  do {
    MB_randRangeFloat((float)dVar8,(float)dVar9);
    MB_randRangeFloat((float)dVar11,(float)dVar12);
    MB_randRangeFloat((float)dVar11,(float)dVar12);
    MB_randRangeFloat((float)dVar10,(float)dVar13);
    uVar2 = *(undefined4 *)((int)pvVar1 + 0x20c);
    iVar3 = MB_randInt(2);
    M1488_0028cce0(uVar7,uVar5,uVar2,local_c0,local_a0,&DAT_00a15d30,iVar3 + 0x166,in_r8,in_r9,0);
    iVar4 = iVar4 + 1;
  } while (iVar4 < 8);
  DeleteMoby(*(MobyInstance **)((int)pvVar1 + 0x20c));
  *(undefined4 *)((int)pvVar1 + 0x20c) = 0;
  return;
}


// 0x047a338 (0x1ac bytes)
// strings: 0047a32c: '?fff' (raw)

void M827_0047a338(void)

{
  float fVar1;
  int iVar3;
  undefined8 uVar2;
  int iVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  undefined8 uVar8;
  double dVar9;
  float afStack_80 [4];
  GPiece<32> local_70;
  
  iVar4 = 0;
  dVar7 = 1.7999999523162842;
  uVar8 = 0;
  dVar9 = 0.5;
  do {
    dVar5 = (double)MB_randRot();
    dVar6 = (double)MB_randRot();
    MB_SphericalToVector
              ((float)((double)g_FrameTime * dVar7),(float)dVar5,(float)dVar6,afStack_80);
    MB_randSphere(uVar8,dVar9,local_70);
    iVar3 = MB_randRange(0x14,0x23);
    fVar1 = animationSpeed * (float)((double)(longlong)iVar3 + dVar9);
    uVar2 = MB_randRange(0x28,0x3c);
    SpawnPart_4(local_70,afStack_80,0x7000a0ff,0xff,(int)fVar1,0x1e,uVar2,1);
    iVar4 = iVar4 + 1;
  } while (iVar4 < 0x14);
  return;
}


// 0x047a518 (0x4d4 bytes)
void M827_0047a518(int param_1,float *param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  int iVar11;
  int iVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  double dVar16;
  double dVar17;
  double dVar18;
  double dVar19;
  float local_d0;
  undefined4 local_cc;
  float local_c8;
  undefined4 local_c4;
  float local_c0;
  float local_bc;
  float local_b8;
  float local_b4;
  float local_b0;
  float local_ac;
  float local_a8;
  float local_a4;
  longlong local_a0;
  
  iVar11 = 0;
  if (0 < DAT_00877b1c) {
    do {
      local_d0 = *(float *)(param_1 + 0x10);
      local_cc = *(undefined4 *)(param_1 + 0x14);
      local_c8 = *(float *)(param_1 + 0x18);
      local_c4 = *(undefined4 *)(param_1 + 0x1c);
      MB_RandomizeVector(DAT_00877b24,&local_d0);
      local_c8 = local_c8 + 0.25;
      dVar13 = (double)MB_randRot();
      dVar14 = (double)MB_randRangeFloat(DAT_00877b30,DAT_00877b34);
      dVar15 = (double)MB_randRangeFloat(DAT_00877b38,DAT_00877b3c);
      dVar18 = 0.0;
      dVar16 = (double)MB_randRangeFloat(0.0,DAT_010d99f0);
      dVar17 = (double)g_FrameTime;
      fVar2 = (float)(dVar16 * dVar17);
      local_b4 = param_2[3];
      fVar1 = (float)(dVar13 + 1.570796251296997);
      local_b8 = (float)(dVar17 * dVar15 + (double)(param_2[2] * fVar2));
      dVar15 = (double)(float)(3.141592502593994 - dVar13);
      if (dVar13 - (double)(float)(3.141592502593994 - dVar13) < 0.0) {
        dVar15 = dVar13;
      }
      fVar3 = 3.1415925 - fVar1;
      if (fVar1 - (3.1415925 - fVar1) < 0.0) {
        fVar3 = fVar1;
      }
      dVar16 = (double)(float)(-3.141592502593994 - dVar13);
      if ((double)(float)(-3.141592502593994 - dVar13) - dVar15 < 0.0) {
        dVar16 = dVar15;
      }
      local_a0 = (longlong)DAT_00877b60;
      fVar4 = -3.1415925 - fVar1;
      if ((-3.1415925 - fVar1) - fVar3 < 0.0) {
        fVar4 = fVar3;
      }
      dVar15 = (double)(float)(dVar16 * dVar16);
      fVar5 = fVar4 * fVar4;
      dVar19 = (double)(float)(dVar15 * (double)(float)(dVar15 * dVar16));
      fVar1 = fVar5 * fVar5 * fVar4;
      dVar13 = (double)(float)(dVar15 * dVar19);
      fVar3 = fVar5 * fVar1;
      local_bc = (float)(dVar17 * dVar14) *
                 ((float)(dVar15 * dVar13) * 2.601887e-06 +
                 (float)(dVar13 * -0.0001980741071747616 +
                        (double)(float)(dVar19 * 0.008333025500178337 +
                                       (double)(float)((double)(float)(dVar15 * dVar16) *
                                                       -0.16666656732559204 + dVar16)))) +
                 param_2[1] * fVar2;
      local_c0 = (float)(dVar17 * dVar14) *
                 (fVar5 * fVar3 * 2.601887e-06 +
                 fVar3 * -0.0001980741 + fVar1 * 0.0083330255 + fVar5 * fVar4 * -0.16666657 + fVar4)
                 + *param_2 * fVar2;
      dVar15 = 0.5;
      iVar12 = 0;
      local_a8 = -(DAT_00877b40 * DAT_0071f418 *
                   (float)(longlong)(animationSpeed * (float)((double)local_a0 + 0.5)) - local_b8);
      local_b0 = local_c0;
      local_ac = local_bc;
      local_a4 = local_b4;
      if (0 < DAT_00877b20) {
        dVar13 = 1.5;
        dVar14 = 1.0;
        dVar16 = 2.5;
        do {
          dVar17 = (double)MB_randRangeFloat((float)dVar15,(float)dVar13);
          local_b4 = (float)((double)DAT_00877b44 * dVar17);
          local_a4 = (float)((double)DAT_00877b48 * dVar17);
          MB_RandomizeVector(DAT_00877b28,&local_d0);
          MB_RandomizeVector(DAT_00877b2c * g_FrameTime,&local_b0);
          uVar7 = DAT_00877b54;
          uVar6 = DAT_00877b4c;
          MB_randRangeFloat((float)dVar18,(float)dVar14);
          uVar8 = FastLerpColor(uVar6,uVar7);
          uVar7 = DAT_00877b58;
          uVar6 = DAT_00877b50;
          MB_randRangeFloat((float)dVar18,(float)dVar14);
          uVar9 = FastLerpColor(uVar6,uVar7);
          fVar1 = animationSpeed * (float)((double)(longlong)DAT_00877b5c + dVar15);
          local_a0 = (longlong)DAT_00877b64;
          fVar2 = animationSpeed * (float)((double)(longlong)DAT_00877b60 + dVar15);
          dVar17 = (double)MB_randRangeFloat
                                     ((float)((double)local_a0 * dVar15),
                                      (float)((double)local_a0 * dVar16));
          uVar10 = FastDoubleToInt((double)(float)(dVar17 * (double)animationSpeed));
          SpawnPart_2
                    (&local_d0,&local_c0,&local_b0,uVar8,uVar9,(int)fVar1,(int)fVar2,uVar10);
          iVar12 = iVar12 + 1;
        } while (iVar12 < DAT_00877b20);
      }
      iVar11 = iVar11 + 1;
    } while (iVar11 < DAT_00877b1c);
  }
  return;
}


// 0x047aa38 (0x740 bytes)
// strings: 0047a9f8: '?fff_q' (raw)

void M827_0047aa38(MobyInstance *param_1)

{
  f32 fVar1;
  float fVar2;
  MobyModeBit MVar3;
  void *pvVar4;
  Spline *pSVar5;
  undefined4 uVar6;
  MobyInstance *pMVar7;
  float fVar8;
  undefined4 uVar9;
  int iVar12;
  longlong lVar10;
  int iVar13;
  undefined8 uVar11;
  uint uVar14;
  undefined2 uVar15;
  ulonglong uVar16;
  double dVar17;
  double dVar18;
  double dVar19;
  double dVar20;
  double dVar21;
  GPiece<16> auVar22;
  GPiece<16> auVar23;
  GPiece<16> auVar24;
  float afStack_90 [4];
  GPiece<16> local_80;
  int local_70;
  float local_6c;
  longlong local_68;
  
  pvVar4 = param_1->pVar;
  uVar16 = ZEXT48(pvVar4);
  *(float *)((int)pvVar4 + 0x30) = (param_1->transform).v2.z * 0.25;
  if (((*(int *)((int)pvVar4 + 0x20c) != 0) &&
      (iVar12 = MB_damage(*(int *)((int)pvVar4 + 0x20c),0x330000,0), iVar12 != 0)) &&
     ((*(int *)(iVar12 + 0x20) == 0 || (*(short *)(*(int *)(iVar12 + 0x20) + 0xa6) != 0xaf)))) {
    M827_0047a518(param_1,&DAT_00a15d30);
    M827_00479fa8(param_1);
    MB_SpawnBoltsFromCrate(param_1,0,0xffffffffffffffff);
    DeleteMoby(param_1);
    return;
  }
  dVar19 = 0.0;
  local_6c = 0.0;
  lVar10 = MB_damage(param_1,0x330000,0);
  iVar12 = MB_HandleDamage(param_1,(int)lVar10,uVar16 + 0x20,0,&local_70,&local_6c,0,4);
  if (((local_70 != 1) && (param_1->state != '\x0e')) &&
     ((fVar2 = *(float *)((int)pvVar4 + 0x20) - local_6c, *(float *)((int)pvVar4 + 0x20) = fVar2,
      (double)fVar2 <= dVar19 || ((0 < iVar12 && (iVar12 < 3)))))) {
    MB_SpawnBoltsFromCrate(param_1,0,0xffffffffffffffff);
    M827_0047a518(param_1,lVar10 + 0x10);
    if (*(char *)((int)pvVar4 + 0x14e) == '\x01') {
      iVar12 = 0;
      dVar20 = 1.7999999523162842;
      dVar21 = 0.5;
      do {
        dVar17 = (double)MB_randRot();
        dVar18 = (double)MB_randRot();
        MB_SphericalToVector
                  ((float)((double)g_FrameTime * dVar20),(float)dVar17,(float)dVar18,
                   afStack_90);
        MB_randSphere(dVar19,dVar21,local_80);
        iVar13 = MB_randRange(0x14,0x23);
        iVar13 = (int)(animationSpeed * (float)((double)(longlong)iVar13 + dVar21));
        local_68 = (longlong)iVar13;
        uVar11 = MB_randRange(0x28,0x3c);
        SpawnPart_4(local_80,afStack_90,0x7000a0ff,0xff,iVar13,0x1e,uVar11,1);
        iVar12 = iVar12 + 1;
      } while (iVar12 < 0x14);
      *(undefined1 *)((int)pvVar4 + 0x14e) = 0;
    }
    PlayMobySound(3,0,param_1);
    if (*(int *)((int)pvVar4 + 0x20c) != 0) {
      M827_00479fa8(param_1);
    }
    if (*(short *)((int)pvVar4 + 0x240) == 0) {
      DeleteMoby(param_1);
      return;
    }
    auVar22 = ZEXT416(0xfffffff0);
    auVar23 = loadVectorLeftIndexed(0x24,uVar16);
    auVar24 = loadVectorRightIndexed(0x34,uVar16);
    *(short *)((int)pvVar4 + 0x240) = *(short *)((int)pvVar4 + 0x240) + -1;
    fVar1 = *(f32 *)((int)pvVar4 + 0x210);
    MVar3 = param_1->modeBits;
    auVar22 = vectorShiftRightAlgebraicWord
                        (auVar23 | auVar24,
                         auVar22 | auVar22 << 0x20 | auVar22 << 0x40 | auVar22 << 0x60);
    auVar22 = vectorConvertFromSignedFixedPointWord(auVar22,0);
    auVar22 = auVar22 >> 0x60 & (GPiece<16>)0xffffffff;
    uVar6 = storeVectorElementWordIndexed
                      (auVar22 | auVar22 << 0x20 | auVar22 << 0x40 | auVar22 << 0x60,0x20,uVar16);
    *(undefined4 *)((int)pvVar4 + 0x20U & 0xfffffffc) = uVar6;
    (param_1->pos).x = fVar1;
    (param_1->pos).y = *(f32 *)((int)pvVar4 + 0x214);
    (param_1->pos).z = *(f32 *)((int)pvVar4 + 0x218);
    fVar1 = *(f32 *)((int)pvVar4 + 0x21c);
    param_1->state = '\x0f';
    (param_1->pos).w = fVar1;
    param_1->collision = (ushort *)0x0;
    param_1->modeBits =
         MVar3 & (MIRROR|CAN_BE_DAMAGED|HIDE_BACKFACES|DISABLE_Z_WRITE|DRAW_SHADOW|
                  DRAW_TRANSPARENT_WEIRD|LOCK_ROTATION|NO_DRAW|UNK_40|HAS_SPECIAL_VARS|HAS_GLOW|
                  TRANSPARENT|NO_POST_UPDATE|NO_UPDATE|DISABLED) | (UNK_40|DISABLED);
  }
  param_1->damage = -1;
  dVar20 = (double)FastWrapRot
                             (*(float *)((int)pvVar4 + 0x248),
                              DAT_00877b10 * 0.017453292 * g_FrameTime);
  uVar9 = DAT_00877b18;
  uVar6 = DAT_00877b14;
  dVar19 = (double)(float)(3.141592502593994 - dVar20);
  if (dVar20 - (double)(float)(3.141592502593994 - dVar20) < 0.0) {
    dVar19 = dVar20;
  }
  dVar21 = (double)(float)(-3.141592502593994 - dVar20);
  if ((double)(float)(-3.141592502593994 - dVar20) - dVar19 < 0.0) {
    dVar21 = dVar19;
  }
  *(float *)((int)pvVar4 + 0x248) = (float)dVar20;
  dVar19 = (double)(float)(dVar21 * dVar21);
  dVar17 = (double)(float)(dVar19 * (double)(float)(dVar19 * dVar21));
  dVar20 = (double)(float)(dVar19 * dVar17);
  uVar14 = FastLerpColor
                     ((double)(((float)(dVar19 * dVar20) * 2.601887e-06 +
                                (float)(dVar20 * -0.0001980741071747616 +
                                       (double)(float)(dVar17 * 0.008333025500178337 +
                                                      (double)(float)((double)(float)(dVar19 * 
                                                  dVar21) * -0.16666656732559204 + dVar21))) + 1.0)
                              * 0.5),uVar6,uVar9);
  iVar12 = *(int *)((int)pvVar4 + 0x38);
  param_1->glowRgba = uVar14;
  if (iVar12 != 0) {
    dVar19 = (double)MB_randRangeFloat(180.0,240.0);
    uVar15 = FastDoubleToInt((double)(float)(dVar19 * (double)animationSpeed));
    *(undefined2 *)((int)pvVar4 + 0x1e8) = uVar15;
    *(undefined4 *)((int)pvVar4 + 0x38) = 0;
  }
  FastDecTimerS16(uVar16 + 0x1e8);
  if (*(short *)((int)pvVar4 + 0x1e8) == 0) {
    fVar2 = *(float *)((int)pvVar4 + 0x1dc);
  }
  else {
    fVar2 = *(float *)((int)pvVar4 + 0x1dc) + 6.0;
  }
  *(float *)((int)pvVar4 + 0x1e0) = fVar2;
  pMVar7 = g_MobyInstance;
  if (*(int *)((int)pvVar4 + 0x204) == -1) {
    if (g_heroType == '\x01') {
      if (worldUpdateTime +
          (((int)worldUpdateTime >> 3) +
          (uint)((int)worldUpdateTime < 0 && (worldUpdateTime & 7) != 0)) * -8 ==
          (int)*(short *)((int)pvVar4 + 0x20a)) {
        FUN_00495490(param_1,uVar16 + 0x1c0);
        if (*(int *)((int)pvVar4 + 0x1c0) == 0) {
          *(undefined4 *)((int)pvVar4 + 0x1c4) = 2;
        }
        else {
          iVar12 = PointInsideComplexPoly
                             ((Vec4 *)(*(int *)((int)pvVar4 + 0x1c0) + 0x10),
                              (Vec4 *)Splines[*(int *)((int)pvVar4 + 500)]->points,
                              Splines[*(int *)((int)pvVar4 + 500)]->cnt);
          if (iVar12 == 0) {
            *(undefined4 *)((int)pvVar4 + 0x1c0) = 0;
            *(undefined4 *)((int)pvVar4 + 0x1c4) = 2;
          }
          else {
            iVar12 = *(int *)((int)pvVar4 + 0x1c0);
            if ((*(short *)(iVar12 + 0xa6) != 0x359) ||
               (fVar2 = (param_1->pos).y - *(float *)(iVar12 + 0x14),
               fVar8 = (param_1->pos).x - *(float *)(iVar12 + 0x10),
               SQRT(fVar8 * fVar8 + fVar2 * fVar2) <= 2.0)) {
              *(undefined4 *)((int)pvVar4 + 0x1c4) = 0;
            }
            else {
              *(undefined4 *)((int)pvVar4 + 0x1c0) = 0;
              *(undefined4 *)((int)pvVar4 + 0x1c4) = 2;
            }
          }
        }
      }
    }
    else {
      pSVar5 = Splines[*(int *)((int)pvVar4 + 500)];
      iVar12 = MB_getTargetInArea
                         (param_1,uVar16 + 0x180,pSVar5,0,0,pSVar5->points,pSVar5->cnt);
      if ((iVar12 != 2) &&
         ((fVar2 = *(float *)((int)pvVar4 + 0x214) - *(float *)((int)pvVar4 + 0x184),
          fVar8 = *(float *)((int)pvVar4 + 0x210) - *(float *)((int)pvVar4 + 0x180),
          *(float *)((int)pvVar4 + 0x1e0) < SQRT(fVar8 * fVar8 + fVar2 * fVar2) ||
          (3.0 < ABS((param_1->pos).z - *(float *)((int)pvVar4 + 0x188)))))) {
        *(undefined4 *)((int)pvVar4 + 0x1c4) = 2;
      }
    }
  }
  else {
    *(undefined4 *)((int)pvVar4 + 0x1c4) = 1;
    pMVar7 = pMVar7 + *(int *)((int)pvVar4 + 0x204);
    *(MobyInstance **)((int)pvVar4 + 0x1c0) = pMVar7;
    *(f32 *)((int)pvVar4 + 0x180) = (pMVar7->pos).x;
    *(f32 *)((int)pvVar4 + 0x184) = (pMVar7->pos).y;
    *(f32 *)((int)pvVar4 + 0x188) = (pMVar7->pos).z;
    *(f32 *)((int)pvVar4 + 0x18c) = (pMVar7->pos).w;
  }
  if (*(int *)((int)pvVar4 + 0x1c0) == 0) {
    *(MobyInstance **)((int)pvVar4 + 0x1c0) = g_heroMobyPtr;
  }
  return;
}


// 0x047b1f0 (0x1860 bytes)
/* Moby 827 */

void UpdateMoby_827(MobyInstance *moby)

{
  bool bVar1;
  byte bVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  short sVar7;
  void *pvVar8;
  Spline *pSVar9;
  float fVar10;
  longlong lVar11;
  undefined1 uVar18;
  MobyInstance *pMVar13;
  undefined8 uVar12;
  Vec4 *pVVar14;
  uint uVar15;
  int iVar16;
  int iVar17;
  longlong lVar19;
  double dVar20;
  double dVar21;
  double dVar22;
  double dVar23;
  double dVar24;
  double dVar25;
  GPiece<16> auStack_150;
  GPiece<16> local_140;
  GPiece<16> local_130;
  GPiece<16> local_120;
  GPiece<16> local_110;
  GPiece<16> local_100;
  GPiece<16> local_f0;
  GPiece<16> local_e0;
  GPiece<16> local_d0;
  GPiece<16> local_c0;
  float local_b0;
  float local_ac;
  float local_a8;
  GPiece<16> local_a0;
  GPiece<16> local_90;
  GPiece<16> local_80;
  GPiece<32> local_70;
  
  lVar11 = (longlong)(int)moby;
  pvVar8 = moby->pVar;
  if (DAT_010d99e8 == 0) {
    if ((g_gameMode == GAME_MODE_SCENE) && ((moby->modeBits & DISABLED) == NONE)) {
      *(undefined2 *)((int)pvVar8 + 0x1ea) = 1;
      moby->modeBits = moby->modeBits | (UNK_40|DISABLED);
    }
    else if ((g_gameMode == GAME_MODE_NORMAL) && (*(short *)((int)pvVar8 + 0x1ea) != 0)) {
      *(undefined2 *)((int)pvVar8 + 0x1ea) = 0;
      moby->modeBits =
           moby->modeBits &
           (MIRROR|CAN_BE_DAMAGED|HIDE_BACKFACES|CAN_BE_AUTO_TARGETED|DISABLE_Z_WRITE|DRAW_SHADOW|
            DRAW_TRANSPARENT_WEIRD|LOCK_ROTATION|NO_DRAW|HAS_SPECIAL_VARS|HAS_GLOW|TRANSPARENT|
            NO_POST_UPDATE|NO_UPDATE);
    }
    if ((moby->state == '\x10') ||
       (((g_MapAlt == 0 || (*(short *)((int)pvVar8 + 0x242) != 0)) &&
        ((g_MapAlt != 0 || (*(short *)((int)pvVar8 + 0x242) == 0)))))) {
      DoManipulator(0x4000ccccc0000000,moby,1,(Manipulator *)((int)pvVar8 + 0x250));
      M827_0047aa38(lVar11);
      if ((moby->enabled != '\0') &&
         (dVar20 = (double)FUN_005e8548(lVar11 + 0x10,0x951500), dVar20 < 14.0)) {
        MB_SetZBoundsFromGround(lVar11);
        moby->shadow = '\v';
      }
      bVar2 = moby->state;
      iVar16 = *(int *)((int)pvVar8 + 0x1c0);
      if (bVar2 < 8) {
        if (bVar2 == 7) {
          if (((moby->field43_0x70 & 2U) != 0) && (moby->state = '\b', moby->animationId != '\x04'))
          {
            MB_SetAnimation(lVar11,4,0,(int)(animationSpeed * 5.5));
          }
        }
        else if (bVar2 == 6) {
          uVar15 = MB_UpdateKick(moby,(KickVars *)((int)pvVar8 + 0x120));
          if ((uVar15 & 1) == 0) {
            if ((uVar15 & 0x120) != 0) {
              MB_SpawnBoltsFromCrate(lVar11,0,0xffffffffffffffff);
              DeleteMoby(moby);
            }
          }
          else {
            moby->state = '\a';
            if (moby->animationId != '\x03') {
              MB_SetAnimation(lVar11,3,0,1);
            }
            moby->animationBlend = 1.0;
            dVar20 = (double)GetGroundZ(0x3fe0000000000000,lVar11 + 0x10,0);
            (moby->pos).z = (float)dVar20;
          }
        }
        else if (bVar2 == 5) {
          M827_00479b78(lVar11,local_120,(int)pvVar8 + 0x120);
          uVar15 = MB_UpdateKick(moby,(KickVars *)((int)pvVar8 + 0x120));
          if ((uVar15 & 1) != 0) {
            moby->state = '\a';
            if (moby->animationId != '\x03') {
              MB_SetAnimation(lVar11,3,0,1);
            }
            moby->animationBlend = 1.0;
            dVar20 = (double)GetGroundZ(0x3fe0000000000000,lVar11 + 0x10,0);
            (moby->pos).z = (float)dVar20;
          }
        }
        else if (bVar2 == 4) {
          pSVar9 = Splines[*(int *)((int)pvVar8 + 0x1f8)];
          iVar16 = (int)((longlong)*(short *)((int)pvVar8 + 0x208) << 4);
          fVar3 = *(float *)((int)&pSVar9->points[0].x + iVar16) - (moby->pos).x;
          fVar4 = *(float *)((int)&pSVar9->points[0].y + iVar16) - (moby->pos).y;
          fVar5 = *(float *)((int)&pSVar9->points[0].z + iVar16) - (moby->pos).z;
          M827_00479e20(lVar11);
          M827_00479b78(lVar11,0xa10980,local_140);
          M827_00479880(0x3fd3333340000000,0x3fd3333340000000,lVar11,local_130);
          fVar6 = (moby->transform).v2.y * fVar5 +
                  (moby->transform).v0.y * fVar3 + (moby->transform).v1.y * fVar4;
          fVar3 = (moby->transform).v2.x * fVar5 +
                  (moby->transform).v0.x * fVar3 + (moby->transform).v1.x * fVar4;
          if (SQRT(fVar3 * fVar3 + fVar6 * fVar6) < 0.5) {
            sVar7 = *(short *)((int)pvVar8 + 0x208);
            uVar15 = Splines[*(int *)((int)pvVar8 + 0x1f8)]->cnt;
            lVar19 = (ulonglong)uVar15 - 2;
            if ((int)sVar7 < (int)lVar19) {
              *(short *)((int)pvVar8 + 0x208) = sVar7 + 1;
            }
            else {
              pVVar14 = Splines[*(int *)((int)pvVar8 + 0x1f8)]->points + (uVar15 - 1);
              fVar3 = pVVar14->x;
              *(float *)((int)pvVar8 + 0x210) = fVar3;
              fVar4 = pVVar14->y;
              *(float *)((int)pvVar8 + 0x214) = fVar4;
              fVar5 = pVVar14->z;
              *(float *)((int)pvVar8 + 0x218) = fVar5;
              fVar6 = pVVar14->w;
              *(float *)((int)pvVar8 + 0x230) = fVar3;
              *(float *)((int)pvVar8 + 0x21c) = fVar6;
              *(float *)((int)pvVar8 + 0x234) = fVar4;
              *(float *)((int)pvVar8 + 0x238) = fVar5;
              *(float *)((int)pvVar8 + 0x23c) = fVar6;
              fVar4 = (moby->pos).y - fVar4;
              fVar3 = (moby->pos).x - fVar3;
              fVar3 = SQRT(fVar3 * fVar3 + fVar4 * fVar4) / (float)(longlong)(animationSpeed * 30.5)
              ;
              *(float *)((int)pvVar8 + 0x138) = fVar3;
              dVar20 = (double)MB_computeLobVelocity
                                         ((double)fVar3,-(double)*(float *)((int)pvVar8 + 0x130),
                                          lVar11 + 0x10,(int)pvVar8 + 0x210,sVar7,lVar19,0);
              *(float *)((int)pvVar8 + 0x13c) = (float)dVar20;
              *(undefined1 *)((int)pvVar8 + 0x15d) = 3;
              *(undefined4 *)((int)pvVar8 + 0x144) = 5;
              FUN_005e8338((double)(*(float *)((int)pvVar8 + 0x210) - (moby->pos).x),
                           (double)(*(float *)((int)pvVar8 + 0x214) - (moby->pos).y));
              MB_StartKick(lVar11,(int)pvVar8 + 0x120);
              moby->state = '\x05';
            }
          }
        }
        else if (bVar2 == 3) {
          FUN_005e81f0(auStack_150,iVar16 + 0x10,lVar11 + 0x10);
          M827_00479e20(lVar11);
          M827_00479b78(lVar11,0xa10980,auStack_150);
          fVar3 = g_heroPosition.y - (moby->pos).y;
          fVar4 = g_heroPosition.x - (moby->pos).x;
          if ((SQRT(fVar4 * fVar4 + fVar3 * fVar3) < *(float *)((int)pvVar8 + 0x24c)) &&
             (moby->state = '\x04', moby->animationId != '\x04')) {
            MB_SetAnimation(lVar11,4,0,(int)(animationSpeed * 5.5));
          }
        }
        else if (bVar2 == 1) {
          dVar20 = (double)FUN_005e8588(lVar11 + 0x10,iVar16 + 0x10);
          if (dVar20 < 4.0) {
            moby->modeBits =
                 moby->modeBits &
                 (MIRROR|CAN_BE_DAMAGED|HIDE_BACKFACES|CAN_BE_AUTO_TARGETED|DISABLE_Z_WRITE|
                  DRAW_SHADOW|DRAW_TRANSPARENT_WEIRD|LOCK_ROTATION|NO_DRAW|HAS_SPECIAL_VARS|HAS_GLOW
                  |TRANSPARENT|NO_POST_UPDATE|NO_UPDATE);
            M827_00479fa8(lVar11);
            moby->state = '\b';
            if (moby->animationId != '\x04') {
              MB_SetAnimation(lVar11,4,0,(int)(animationSpeed * 5.5));
            }
          }
        }
        else if (bVar2 == 0) {
          bVar1 = (int)DAT_010d99ec < 0;
          uVar15 = DAT_010d99ec & 7;
          iVar16 = (int)DAT_010d99ec >> 3;
          sVar7 = (short)DAT_010d99ec;
          DAT_010d99ec = DAT_010d99ec + 1;
          *(ushort *)((int)pvVar8 + 0x20a) =
               sVar7 + ((short)iVar16 + (ushort)(bVar1 && uVar15 != 0)) * -8;
          if (*(short *)((int)pvVar8 + 0x240) != 0) {
            *(short *)&moby->field76_0xb4 =
                 *(short *)&moby->field76_0xb4 / *(short *)((int)pvVar8 + 0x240);
          }
          moby->modeBits = moby->modeBits | LOCK_ROTATION;
          uVar18 = FastDoubleToInt(0x4020000000000000);
          *(undefined1 *)((int)pvVar8 + 0x58) = uVar18;
          uVar18 = FastDoubleToInt(0x40099999a0000000);
          *(undefined1 *)((int)pvVar8 + 0x5a) = uVar18;
          FUN_005e7e98((int)pvVar8 + 0x210,lVar11 + 0x10);
          FUN_005e7e98((int)pvVar8 + 0x230,lVar11 + 0x10);
          FUN_005e7e98((int)pvVar8 + 0x220,lVar11 + 0x40);
          *(undefined2 *)((int)pvVar8 + 0x208) = 0;
          dVar20 = (double)MB_randRangeFloat(0.5,3.0);
          *(float *)((int)pvVar8 + 0x244) = (float)dVar20;
          *(undefined4 *)((int)pvVar8 + 0x148) = 0;
          *(undefined4 *)((int)pvVar8 + 0x140) = 0x200;
          fVar3 = DAT_0071f418;
          *(undefined4 *)((int)pvVar8 + 0x134) = 0;
          *(float *)((int)pvVar8 + 0x130) = fVar3 * 20.0;
          dVar20 = (double)MB_randRot();
          *(float *)((int)pvVar8 + 0x248) = (float)dVar20;
          *(undefined1 *)((int)pvVar8 + 0x29) = 1;
          *(undefined **)((int)pvVar8 + 0xd0) = &DAT_00877afc;
          if (*(short *)((int)pvVar8 + 0x200) == 0) {
            if (*(short *)((int)pvVar8 + 0x202) == 0) {
              if (*(int *)((int)pvVar8 + 0x1f8) < 0) {
                moby->state = '\b';
                if (moby->animationId != '\x04') {
                  uVar12 = MB_randInt
                                     (*(undefined1 *)(*(int *)&moby->pClass[1].joint_cnt + 0x10));
                  MB_SetAnimation(lVar11,4,uVar12,0);
                }
              }
              else {
                moby->state = '\x03';
                if (moby->animationId != '\0') {
                  MB_SetAnimation(lVar11,0,0,0);
                }
              }
            }
            else {
              moby->state = '\x0f';
              moby->collision = (ushort *)0x0;
              moby->modeBits =
                   moby->modeBits &
                   (MIRROR|CAN_BE_DAMAGED|HIDE_BACKFACES|DISABLE_Z_WRITE|DRAW_SHADOW|
                    DRAW_TRANSPARENT_WEIRD|LOCK_ROTATION|NO_DRAW|UNK_40|HAS_SPECIAL_VARS|HAS_GLOW|
                    TRANSPARENT|NO_POST_UPDATE|NO_UPDATE|DISABLED) | (UNK_40|DISABLED);
            }
          }
          else {
            moby->state = '\x01';
            pMVar13 = CreateMoby(BOLT_CRATE);
            *(MobyInstance **)((int)pvVar8 + 0x20c) = pMVar13;
            if (pMVar13 == (MobyInstance *)0x0) {
              DeleteMoby(moby);
            }
            else {
              uVar15 = moby->light;
              pMVar13->color = moby->color;
              pMVar13->light = uVar15;
              *(ushort *)(*(int *)((int)pvVar8 + 0x20c) + 0x34) =
                   *(ushort *)(*(int *)((int)pvVar8 + 0x20c) + 0x34) | 0x4002;
              iVar16 = *(int *)((int)pvVar8 + 0x20c);
              *(f32 *)(iVar16 + 0x10) = (moby->pos).x;
              *(f32 *)(iVar16 + 0x14) = (moby->pos).y;
              *(f32 *)(iVar16 + 0x18) = (moby->pos).z;
              *(f32 *)(iVar16 + 0x1c) = (moby->pos).w;
              iVar16 = *(int *)((int)pvVar8 + 0x20c);
              *(f32 *)(iVar16 + 0x40) = (moby->rotation).x;
              *(f32 *)(iVar16 + 0x44) = (moby->rotation).y;
              *(f32 *)(iVar16 + 0x48) = (moby->rotation).z;
              *(f32 *)(iVar16 + 0x4c) = (moby->rotation).w;
              *(undefined2 *)(*(int *)((int)pvVar8 + 0x20c) + 0x32) = 0x40;
              *(undefined1 *)(*(int *)((int)pvVar8 + 0x20c) + 0x31) = 1;
              UpdateMobyTransform(*(MobyInstance **)((int)pvVar8 + 0x20c));
              moby->modeBits = moby->modeBits | (UNK_40|DISABLED);
            }
          }
        }
      }
      else if (bVar2 == 0x10) {
        iVar16 = FUN_0048c188(lVar11,(int)pvVar8 + 0x120);
        if (iVar16 != 0) {
          moby->state = '\b';
          if (moby->animationId != '\0') {
            MB_SetAnimation(lVar11,0,0,(int)(animationSpeed * 10.5));
          }
          *(undefined2 *)((int)pvVar8 + 200) = 0;
        }
      }
      else if (bVar2 == 0xd) {
        M827_00479e20(lVar11);
        M827_00479b78(lVar11,0xa10980,local_70);
        M827_00479880(0x3fd3333340000000,0x3fd3333340000000,lVar11,local_80);
        fVar3 = (moby->pos).y - *(float *)((int)pvVar8 + 0x214);
        fVar4 = (moby->pos).x - *(float *)((int)pvVar8 + 0x210);
        if (2.0 <= SQRT(fVar4 * fVar4 + fVar3 * fVar3)) {
          if (*(int *)((int)pvVar8 + 0x1c4) == 2) {
            if (*(short *)((int)pvVar8 + 0x1e8) != 0) {
              moby->state = '\n';
            }
          }
          else {
            moby->state = '\t';
          }
        }
        else {
          moby->state = '\b';
          if (moby->animationId != '\x04') {
            MB_SetAnimation(lVar11,4,0,(int)(animationSpeed * 10.5));
          }
        }
      }
      else if (bVar2 == 0xc) {
        FUN_005e8338((double)(*(float *)(iVar16 + 0x10) - (moby->pos).x),
                     (double)(*(float *)(iVar16 + 0x14) - (moby->pos).y));
        FUN_005e8338((double)(*(float *)(iVar16 + 0x10) - (moby->pos).x),
                     (double)(*(float *)(iVar16 + 0x14) - (moby->pos).y));
        M827_00479b78(lVar11,lVar11 + 0xe0,local_90);
        dVar20 = (double)BlendAnimFrame(moby);
        if ((((moby->updateId != moby->animationId) || (dVar20 < 10.0)) || (15.0 < dVar20)) ||
           (g_heroState == CLANK_ATTACK)) {
          if ((((moby->field43_0x70 & 2U) != 0) &&
              (fVar4 = (moby->pos).y - *(float *)(iVar16 + 0x14),
              fVar3 = (moby->pos).x - *(float *)(iVar16 + 0x10),
              2.0 < SQRT(fVar3 * fVar3 + fVar4 * fVar4))) &&
             (moby->state = '\t', moby->animationId != '\x04')) {
            MB_SetAnimation(lVar11,4,0,(int)(animationSpeed * 10.5));
          }
        }
        else {
          M827_00479880(0x3fd3333340000000,0x3fd3333340000000,lVar11,local_a0);
          DamageSphereAtBone
                    (0x3fd54fdf40000000,0x3ff0000000000000,0x3ff0000000000000,lVar11,0,0,1);
        }
      }
      else if (bVar2 == 0xb) {
        if (((moby->field43_0x70 & 2U) != 0) && (moby->state = '\n', moby->animationId != '\x04')) {
          MB_SetAnimation(lVar11,4,0,(int)(animationSpeed * 20.5));
        }
      }
      else if (bVar2 == 10) {
        dVar20 = (double)FUN_005e8338((double)(*(float *)(iVar16 + 0x10) - (moby->pos).x),
                                      (double)(*(float *)(iVar16 + 0x14) - (moby->pos).y));
        FastWrapRot((float)dVar20,*(float *)((int)pvVar8 + 0x1d4));
        M827_00479e20(lVar11);
        M827_00479b78(lVar11,0xa10980,local_c0);
        M827_00479880(0x3fd3333340000000,0x3fd3333340000000,lVar11,local_d0);
        iVar17 = MB_SplineIntersect
                           (*(undefined4 *)((int)pvVar8 + 0x1ec),lVar11 + 0x10,iVar16 + 0x10,
                            &local_b0);
        bVar1 = false;
        fVar3 = (moby->pos).x;
        fVar4 = (moby->pos).y;
        if ((iVar17 != 0) &&
           (fVar10 = fVar4 - local_ac, fVar6 = fVar3 - local_b0, fVar5 = (moby->pos).z - local_a8,
           bVar1 = false,
           SQRT(fVar5 * fVar5 + fVar6 * fVar6 + fVar10 * fVar10) < *(float *)((int)pvVar8 + 0x244)))
        {
          bVar1 = true;
        }
        if (*(short *)((int)pvVar8 + 0x1e8) == 0) {
          moby->state = '\r';
        }
        else if (bVar1) {
          moby->state = '\v';
          if (moby->animationId != '\x06') {
            MB_SetAnimation(lVar11,6,0,(int)(animationSpeed * 10.5));
          }
        }
        else {
          fVar4 = fVar4 - *(float *)(iVar16 + 0x14);
          fVar3 = fVar3 - *(float *)(iVar16 + 0x10);
          if ((SQRT(fVar3 * fVar3 + fVar4 * fVar4) < 2.0) &&
             (moby->state = '\f', moby->animationId != '\x05')) {
            MB_SetAnimation(lVar11,5,0,(int)(animationSpeed * 10.5));
          }
        }
      }
      else if (bVar2 == 9) {
        dVar20 = (double)FUN_005e8338((double)(*(float *)(iVar16 + 0x10) - (moby->pos).x),
                                      (double)(*(float *)(iVar16 + 0x14) - (moby->pos).y));
        FastWrapRot((float)dVar20,*(float *)((int)pvVar8 + 0x1d4));
        M827_00479e20(lVar11);
        M827_00479b78(lVar11,0xa10980,local_e0);
        M827_00479880(0x3fd3333340000000,0x3fd3333340000000,lVar11,local_f0);
        fVar3 = (moby->pos).y - *(float *)(iVar16 + 0x14);
        fVar4 = (moby->pos).x - *(float *)(iVar16 + 0x10);
        if (2.0 <= SQRT(fVar4 * fVar4 + fVar3 * fVar3)) {
          if (*(int *)((int)pvVar8 + 0x1c4) == 2) {
            moby->state = '\r';
          }
        }
        else {
          moby->state = '\f';
          if (moby->animationId != '\x05') {
            MB_SetAnimation(lVar11,5,4,(int)(animationSpeed * 10.5));
          }
        }
      }
      else if (bVar2 == 8) {
        if (moby->enabled != '\0') {
          fVar3 = (moby->pos).y - *(float *)((int)pvVar8 + 0x234);
          fVar4 = (moby->pos).x - *(float *)((int)pvVar8 + 0x230);
          fVar5 = (moby->pos).z - *(float *)((int)pvVar8 + 0x238);
          if ((SQRT(fVar5 * fVar5 + fVar4 * fVar4 + fVar3 * fVar3) < 0.05) ||
             (iVar16 = FastDecTimerS32((int)pvVar8 + 0x1fc), iVar16 != 0)) {
            dVar21 = (double)MB_randRot();
            dVar25 = 0.5;
            dVar22 = (double)MB_randRangeFloat(0.5,2.0);
            fVar3 = (float)(dVar21 + 1.570796251296997);
            dVar20 = (double)(float)(3.141592502593994 - dVar21);
            if (dVar21 - (double)(float)(3.141592502593994 - dVar21) < 0.0) {
              dVar20 = dVar21;
            }
            fVar4 = 3.1415925 - fVar3;
            if (fVar3 - (3.1415925 - fVar3) < 0.0) {
              fVar4 = fVar3;
            }
            dVar23 = (double)(float)(-3.141592502593994 - dVar21);
            if ((double)(float)(-3.141592502593994 - dVar21) - dVar20 < 0.0) {
              dVar23 = dVar20;
            }
            fVar5 = -3.1415925 - fVar3;
            if ((-3.1415925 - fVar3) - fVar4 < 0.0) {
              fVar5 = fVar4;
            }
            dVar21 = (double)(float)(dVar23 * dVar23);
            fVar6 = fVar5 * fVar5;
            dVar24 = (double)(float)(dVar21 * (double)(float)(dVar21 * dVar23));
            fVar3 = fVar6 * fVar6 * fVar5;
            dVar20 = (double)(float)(dVar21 * dVar24);
            *(undefined4 *)((int)pvVar8 + 0x238) = *(undefined4 *)((int)pvVar8 + 0x218);
            *(undefined4 *)((int)pvVar8 + 0x23c) = *(undefined4 *)((int)pvVar8 + 0x21c);
            fVar4 = fVar6 * fVar3;
            *(float *)((int)pvVar8 + 0x234) =
                 (float)((double)((float)(dVar21 * dVar20) * 2.601887e-06 +
                                 (float)(dVar20 * -0.0001980741071747616 +
                                        (double)(float)(dVar24 * 0.008333025500178337 +
                                                       (double)(float)((double)(float)(dVar21 * 
                                                  dVar23) * -0.16666656732559204 + dVar23)))) *
                         dVar22 + (double)*(float *)((int)pvVar8 + 0x214));
            *(float *)((int)pvVar8 + 0x230) =
                 (float)((double)(fVar6 * fVar4 * 2.601887e-06 +
                                 fVar4 * -0.0001980741 +
                                 fVar3 * 0.0083330255 + fVar6 * fVar5 * -0.16666657 + fVar5) *
                         dVar22 + (double)*(float *)((int)pvVar8 + 0x210));
            MB_randRangeFloat(45.0,75.0);
            iVar16 = FastDoubleToInt();
            *(int *)((int)pvVar8 + 0x1fc) =
                 (int)(animationSpeed * (float)((double)(longlong)iVar16 + dVar25));
          }
          M827_00479e20(lVar11);
          M827_00479b78(lVar11,0xa10980,local_100);
          M827_00479880(0x3fd3333340000000,0x3fd3333340000000,lVar11,local_110);
        }
        if ((*(int *)((int)pvVar8 + 0x1c4) == 2) || (iVar16 = MB_randInt(9), iVar16 != 0))
        {
          if (*(short *)((int)pvVar8 + 0x1e8) != 0) {
            dVar20 = (double)MB_randRangeFloat
                                       (-*(float *)((int)pvVar8 + 0x1d8),
                                        *(float *)((int)pvVar8 + 0x1d8));
            *(float *)((int)pvVar8 + 0x1d4) = (float)(dVar20 * 0.01745329238474369);
            moby->state = '\n';
            if (moby->animationId != '\x04') {
              MB_SetAnimation(lVar11,4,0,0);
            }
          }
        }
        else {
          dVar20 = (double)MB_randRangeFloat
                                     (-*(float *)((int)pvVar8 + 0x1d8),
                                      *(float *)((int)pvVar8 + 0x1d8));
          *(float *)((int)pvVar8 + 0x1d4) = (float)(dVar20 * 0.01745329238474369);
          moby->state = '\t';
          if (moby->animationId != '\x04') {
            MB_SetAnimation(lVar11,4,0,0);
          }
        }
      }
    }
  }
  return;
}


