// game/update/moby563.cpp -- reconstructed from NPEA00385 EBOOT
// STATUS: NOT STARTED (raw Ghidra output)
// 4 functions, 0x3b81e4-0x3ba6fc
#include <math.h>
#include "game/update/moby563.h"
#include "game/camera.h"
#include "game/collproc.h"
#include "game/hero.h"
#include "game/mobyfunc.h"
#include "game/mobyutil.h"
#include "game/partupd.h"
#include "game/update/moby1516.h"
#include "game/walk.h"
#include "idol/fastfunc.h"
#include "idol/mathfunc.h"
#include "idol/xUnk.h"

// 0x03b81e4 (0x14 bytes)
void M563_003b81e4(void)

{
  DAT_00845b3c = 0x10000;
  return;
}


// 0x03b8208 (0x218 bytes)
void M563_003b8208(MobyInstance *param_1)

{
  void *pvVar1;
  float fVar2;
  
  pvVar1 = param_1->pVar;
  *(undefined4 *)((int)pvVar1 + 0x1d0) = *(undefined4 *)((int)param_1->pClass[1].gif_usage + 0x14);
  *(undefined4 *)((int)pvVar1 + 0x1d4) = *(undefined4 *)((int)param_1->pClass[1].gif_usage + 0x14);
  *(undefined4 *)((int)pvVar1 + 0x1d8) = *(undefined4 *)((int)param_1->pClass[1].gif_usage + 0x14);
  *(undefined4 *)((int)pvVar1 + 0x1dc) = *(undefined4 *)((int)param_1->pClass[1].gif_usage + 0x14);
  *(undefined4 *)((int)pvVar1 + 0x1e0) = *(undefined4 *)((int)param_1->pClass[1].gif_usage + 0x14);
  *(undefined4 *)((int)pvVar1 + 0x1e4) = *(undefined4 *)((int)param_1->pClass[1].gif_usage + 0x14);
  *(undefined4 *)((int)pvVar1 + 0x1e8) = *(undefined4 *)((int)param_1->pClass[1].gif_usage + 0x14);
  *(undefined4 *)((int)pvVar1 + 0x1ec) =
       *(undefined4 *)(*(int *)&param_1->pClass[1].pakcet_cnt_0 + 0x14);
  *(undefined4 *)((int)pvVar1 + 0x1f0) = *(undefined4 *)((int)param_1->pClass[1].gif_usage + 0x14);
  *(undefined4 *)((int)pvVar1 + 500) = *(undefined4 *)((int)param_1->pClass[1].gif_usage + 0x14);
  *(undefined4 *)((int)pvVar1 + 0x1f8) = *(undefined4 *)((int)param_1->pClass[1].gif_usage + 0x14);
  *(undefined4 *)((int)pvVar1 + 0x1fc) = *(undefined4 *)((int)param_1->pClass[1].gif_usage + 0x14);
  *(undefined4 *)((int)pvVar1 + 0x200) = *(undefined4 *)((int)param_1->pClass[1].gif_usage + 0x14);
  walk_SetupTwistVals(param_1,(w_2legData *)((int)pvVar1 + 0x160));
  fVar2 = DAT_0071f418;
  *(float *)((int)pvVar1 + 0x23c) = DAT_0071f418 * 9.8;
  *(float *)((int)pvVar1 + 0x22c) = fVar2 * 3.1415927;
  *(float *)((int)pvVar1 + 0x230) = fVar2 * 6.2831855;
  *(float *)((int)pvVar1 + 0x234) = g_FrameTime * 6.2831855;
  *(undefined1 *)((int)pvVar1 + 0x210) = 0;
  *(undefined1 *)((int)pvVar1 + 0x211) = 0;
  *(undefined1 *)((int)pvVar1 + 0x212) = 0xff;
  *(undefined1 *)((int)pvVar1 + 0x213) = 0x10;
  *(undefined1 *)((int)pvVar1 + 0x214) = 7;
  *(undefined1 *)((int)pvVar1 + 0x215) = 7;
  *(undefined1 *)((int)pvVar1 + 0x250) = 10;
  *(undefined1 *)((int)pvVar1 + 0x251) = 8;
  *(undefined1 *)((int)pvVar1 + 0x253) = 0xc;
  *(undefined1 *)((int)pvVar1 + 0x252) = 0xe;
  *(undefined1 *)((int)pvVar1 + 0x300) = 0xb;
  *(undefined1 *)((int)pvVar1 + 0x301) = 9;
  *(undefined1 *)((int)pvVar1 + 0x303) = 0xd;
  *(undefined1 *)((int)pvVar1 + 0x302) = 0xf;
  *(undefined4 *)((int)pvVar1 + 0x240) = 0x3f000000;
  *(float *)((int)pvVar1 + 0x224) = fVar2 * 10.0;
  walk_init2LegAnim(param_1,(w_2legData *)((int)pvVar1 + 0x160));
  return;
}


// 0x03b8438 (0xd8 bytes)
void M563_003b8438(undefined8 param_1)

{
  undefined8 uVar1;
  GPiece<16> auStack_50;
  GPiece<24> local_40;
  
  uVar1 = 0;
  GetBonePosition(0,param_1,0xc,auStack_50);
  MB_genericExplosion
            (uVar1,uVar1,0x4000000000000000,0x3ff0000000000000,0x40f86a0000000000,0x3ff0000000000000
             ,0x402e000000000000,param_1,local_40,auStack_50,1,0xffffffffffffffff,10,3,4);
  return;
}


// 0x03b85b8 (0x2144 bytes)
// strings: 003b856c: '?333A(' (raw)

/* WARNING: Type propagation algorithm not settling */
/* Moby 563 */

void UpdateMoby_563(void *this_,MobyInstance *moby)

{
  char cVar1;
  float fVar2;
  float fVar3;
  short sVar4;
  uint uVar5;
  MobyInstance *pMVar6;
  undefined4 uVar7;
  float fVar8;
  longlong lVar9;
  int iVar12;
  int iVar13;
  undefined8 uVar10;
  undefined2 uVar16;
  int iVar14;
  ulonglong uVar11;
  uint uVar15;
  byte bVar17;
  undefined1 *puVar18;
  undefined1 *puVar19;
  longlong lVar20;
  longlong lVar21;
  ulonglong uVar22;
  double dVar23;
  double dVar24;
  double dVar25;
  undefined8 uVar26;
  double dVar27;
  double dVar28;
  double dVar29;
  double dVar30;
  GPiece<16> auStack_2d0;
  GPiece<16> auStack_2c0;
  GPiece<16> auStack_2b0;
  GPiece<16> auStack_2a0;
  GPiece<16> auStack_290;
  GPiece<16> local_280;
  GPiece<16> local_270;
  GPiece<16> local_260;
  GPiece<16> auStack_250;
  Vec4 local_240;
  Vec4 local_230;
  Vec4 VStack_220;
  float afStack_210 [4];
  GPiece<16> local_200;
  GPiece<48> auStack_1f0;
  Vec4 local_1c0 [5];
  GPiece<16> auStack_170;
  GPiece<48> auStack_160;
  GPiece<32> auStack_130;
  GPiece<4> auStack_110;
  float local_10c;
  float local_108 [20];
  longlong local_b8;
  
  lVar9 = (longlong)(int)this_;
  uVar5 = *(uint *)((int)this_ + 0x78);
  uVar22 = (ulonglong)uVar5;
  iVar14 = 0;
  if ((*(int *)(uVar5 + 0x38) == 0) && (*(short *)(uVar5 + 0x3c6) == 0)) {
    fVar2 = *(float *)(uVar5 + 1000);
  }
  else {
    iVar14 = 1;
    fVar2 = *(float *)(uVar5 + 1000) * 2.0;
  }
  MB_getTarget((double)fVar2,lVar9,moby,local_1c0);
  DoManipulator(0x4004000000000000,(MobyInstance *)this_,6,(Manipulator *)(uVar5 + 0x120));
  if ((*(char *)((int)this_ + 0x31) != '\0') &&
     (dVar23 = (double)FUN_005e8548(lVar9 + 0x10,0x951500), dVar23 < 27.0)) {
    MB_SetZBoundsFromGround(lVar9);
    *(undefined1 *)((int)this_ + 0x7f) = 0x15;
  }
  dVar30 = (double)*(float *)((int)this_ + 0x48);
  dVar23 = (double)FUN_005e8338((double)(local_1c0[0].x - *(float *)((int)this_ + 0x10)),
                                (double)(local_1c0[0].y - *(float *)((int)this_ + 0x14)));
  dVar23 = (double)FastSubRots((float)dVar30,(float)dVar23);
  lVar20 = lVar9 + 0x10;
  dVar30 = (double)FUN_005e8588(lVar20,local_1c0);
  dVar24 = (double)BlendAnimFrame((MobyInstance *)this_);
  FUN_005e7e98(auStack_2d0,lVar20);
  FUN_005e7e98(auStack_2c0,lVar20);
  FastDecTimerS16(uVar22 + 0x3c4);
  if ((*(char *)((int)this_ + 0x20) != '\v') && (*(char *)((int)this_ + 0x20) != '\0')) {
    dVar27 = 0.0;
    local_10c = 0.0;
    iVar12 = MB_damage(lVar9,CHAR_ARRAY_00a0feec + 0x114,0);
    iVar13 = MB_HandleDamage
                       ((MobyInstance *)this_,iVar12,uVar22 + 0x20,0,auStack_110,&local_10c,0,4);
    *(undefined4 *)(uVar5 + 0xe0) = 0x15e;
    *(undefined4 *)(uVar5 + 0xe8) = 0x3eb33333;
    if ((iVar12 != 0) &&
       (((local_10c != 0.0 && (*(char *)((int)this_ + 0x20) != '\0')) &&
        (*(short *)(uVar5 + 0x3c4) == 0)))) {
      local_108[1] = 1.0;
      pMVar6 = *(MobyInstance **)(iVar12 + 0x20);
      if (pMVar6 == (MobyInstance *)0x0) {
        dVar25 = (double)FUN_005e8338((double)(*(float *)((int)this_ + 0x10) - g_heroPosition.x),
                                      (double)(*(float *)((int)this_ + 0x14) - g_heroPosition.y));
      }
      else if (pMVar6 == g_currentWeaponMoby) {
        dVar25 = (double)FUN_005e8338((double)(*(float *)((int)this_ + 0x10) - g_heroPosition.x),
                                      (double)(*(float *)((int)this_ + 0x14) - g_heroPosition.y));
      }
      else {
        dVar25 = (double)FUN_005e8338((double)(*(float *)((int)this_ + 0x10) - (pMVar6->pos).x),
                                      (double)(*(float *)((int)this_ + 0x14) - (pMVar6->pos).y));
      }
      fVar8 = DAT_0071f418;
      local_108[0] = (float)dVar25;
      *(float *)(uVar5 + 0xd0) = DAT_0071f418 * 30.0;
      *(float *)(uVar5 + 0xd4) = fVar8 * 10.0;
      fVar3 = g_FrameTime;
      *(undefined1 *)(uVar5 + 0xfd) = 0;
      *(undefined4 *)(uVar5 + 0xe4) = 9;
      *(float *)(uVar5 + 0xd8) = fVar3 * 5.5;
      fVar2 = *(float *)(uVar5 + 0x20) - local_10c;
      *(float *)(uVar5 + 0x20) = fVar2;
      if ((double)fVar2 <= dVar27) {
LAB_003b8924:
        *(float *)(uVar5 + 0xd4) = fVar8 * 17.0;
        *(float *)(uVar5 + 0xd8) = fVar3 * 7.0;
        *(float *)(uVar5 + 0xdc) = fVar3 * 13.0;
        MB_VecAtan2Angles
                  (*(undefined8 *)(iVar12 + 0x10),*(undefined8 *)(iVar12 + 0x18),local_108,
                   uVar22 + 0xd8,uVar22 + 0xdc);
        MB_StartKick((double)local_108[0],lVar9,uVar22 + 0xc0);
        *(undefined4 *)(uVar5 + 0x110) = 0x41600000;
        *(undefined4 *)(uVar5 + 0x114) = 0x41c00000;
        *(undefined1 *)((int)this_ + 0x20) = 0xb;
        MB_SpawnBoltsFromCrate(lVar9,0,0xffffffffffffffff);
        *(undefined1 *)(uVar5 + 0xb7) = 0x78;
        MB_UpdateLightsTransition(lVar9,uVar22 + 0xb0);
        *(float *)(uVar5 + 0x3e4) = (2.0 / (animationSpeed * 15.0)) * 2.0;
      }
      else if (iVar13 < 4) {
        if (0 < iVar13) {
          if (iVar13 < 3) goto LAB_003b8924;
LAB_003b8a0c:
          *(undefined4 *)(uVar5 + 0x3c8) = 0xbf060a92;
          if (((*(char *)((int)this_ + 0x52) != '\x04') || (dVar24 < 16.0)) || (27.0 < dVar24)) {
            *(byte *)((int)this_ + 0xbc) = *(byte *)((int)this_ + 0xbc) | 5;
            uVar10 = idol::GetAnimDuration(3);
            MB_SetAnimation(lVar9,5,0,uVar10);
            Walk_ApplyLegQuatToEuler(uVar22 + 0x160);
            *(undefined1 *)((int)this_ + 0x20) = 9;
            sVar4 = *(short *)(*(int *)(iVar12 + 0x20) + 0xa6);
            if ((sVar4 == 0x131) || (sVar4 == 0xb0)) {
              fVar2 = (2.0 / (animationSpeed * 15.0)) * 0.5;
            }
            else {
              fVar2 = 2.0 / (animationSpeed * 15.0);
            }
            *(float *)(uVar5 + 0x3e4) = fVar2;
            MB_VecAtan2Angles
                      (*(undefined8 *)(iVar12 + 0x10),*(undefined8 *)(iVar12 + 0x18),local_108,
                       uVar22 + 0x3e4,local_108 + 1);
            *(undefined1 *)(uVar5 + 0xb7) = 0x78;
            MB_UpdateLightsTransition(lVar9,uVar22 + 0xb0);
            uVar16 = idol::GetAnimDuration(0xf);
            *(undefined2 *)(uVar5 + 0x3c4) = uVar16;
            uVar16 = idol::GetAnimDuration(0xf0);
            *(undefined2 *)(uVar5 + 0x3c6) = uVar16;
          }
        }
      }
      else if (iVar13 < 7) {
        if (5 < iVar13) goto LAB_003b8a0c;
        uVar10 = idol::GetAnimDuration(10);
        MB_SetAnimation(lVar9,6,0,uVar10);
        Walk_ApplyLegQuatToEuler(uVar22 + 0x160);
        *(undefined1 *)((int)this_ + 0x20) = 1;
        *(float *)(uVar5 + 0x3e4) = 2.0 / (animationSpeed * 15.0);
        MB_VecAtan2Angles
                  (*(undefined8 *)(iVar12 + 0x10),*(undefined8 *)(iVar12 + 0x18),local_108,
                   uVar22 + 0x3e4,local_108 + 1);
        dVar27 = (double)FastWrapRot(3.1415927,local_108[0]);
        *(float *)((int)this_ + 0x48) = (float)dVar27;
        *(undefined1 *)(uVar5 + 0xb7) = 0x78;
        MB_UpdateLightsTransition(lVar9,uVar22 + 0xb0);
        uVar16 = idol::GetAnimDuration(0x1e);
        *(undefined2 *)(uVar5 + 0x3c4) = uVar16;
        uVar16 = idol::GetAnimDuration(0xb4);
        *(undefined2 *)(uVar5 + 0x3c2) = uVar16;
        uVar16 = idol::GetAnimDuration(0xf0);
        *(undefined2 *)(uVar5 + 0x3c6) = uVar16;
      }
    }
  }
  *(undefined1 *)((int)this_ + 0xa4) = 0xff;
  if (*(int *)(uVar5 + 0x38) != 0) {
    uVar16 = idol::GetAnimDuration(0xf0);
    *(undefined2 *)(uVar5 + 0x3c6) = uVar16;
  }
  *(undefined4 *)(uVar5 + 0x38) = 0;
  FastDecTimerS16(uVar22 + 0x3c6);
  if ((((*(char *)((int)this_ + 0x20) == '\b') && (*(char *)((int)this_ + 0x52) == '\x04')) &&
      (16.0 < dVar24)) && (dVar24 < 27.0)) {
    local_108[7] = 0.0;
    local_108[8] = 2.8026e-45;
    local_108[9] = 1.4013e-45;
    local_108[10] = 4.2039e-45;
    local_108[0xb] = 5.60519e-45;
    local_108[0xc] = 7.00649e-45;
    FUN_005e81f0(auStack_1f0,&g_heroPosition,lVar20);
    FUN_005e7f98((double)(g_FrameTime * 5.0),auStack_1f0,auStack_1f0);
    GetMobyJointsWorldPos(lVar9,6,local_108 + 7,auStack_170);
    iVar12 = 0;
    puVar19 = auStack_170;
    puVar18 = auStack_160;
    do {
      CollLine(puVar19,puVar18,9,lVar9,auStack_1f0);
      iVar12 = iVar12 + 1;
      puVar19 = puVar19 + 0x10;
      puVar18 = puVar18 + 0x10;
    } while (iVar12 < 5);
    FUN_005e7f54(auStack_2a0,auStack_170,auStack_130);
    dVar25 = 0.5;
    FUN_005e822c(0x3fe0000000000000,auStack_2a0,auStack_2a0);
    dVar27 = (double)FUN_005e8548(auStack_170,auStack_130);
    CollMobySphere((double)(float)(dVar27 * dVar25),auStack_2a0);
    GetBonePosition(lVar9,0x11,auStack_2a0);
    CollMobySphere(dVar25,auStack_2a0);
  }
  FastDecTimerS16(uVar22 + 0x3c2);
  bVar17 = *(byte *)((int)this_ + 0x20);
  fVar2 = *(float *)((int)this_ + 0x10);
  dVar27 = (double)*(float *)((int)this_ + 0x48);
  fVar3 = *(float *)((int)this_ + 0x14);
  if (5 < bVar17) {
    if (bVar17 == 0xb) {
      uVar15 = MB_UpdateKick((MobyInstance *)this_,(KickVars *)(uVar5 + 0xc0));
      if (((uVar15 & 0x40) != 0) ||
         (uVar15 = (int)*(uint *)((int)this_ + 0x18) >> 0x1f,
         (int)((uVar15 >> 1 ^ *(uint *)((int)this_ + 0x18)) - uVar15) < 0x3f800000)) {
        M563_003b8438(lVar9);
        uVar10 = 0;
        lVar21 = lVar9 + 0x40;
        MB_SpawnDebrisMoby(0,lVar9,0x6cb,lVar20,lVar21,0,0);
        MB_SpawnDebrisMoby(uVar10,lVar9,0x6cc,lVar20,lVar21,0,0);
        MB_SpawnDebrisMoby(uVar10,lVar9,0x6cd,lVar20,lVar21,0,0);
        DeleteMoby((MobyInstance *)this_);
        return;
      }
    }
    else if (bVar17 == 10) {
      if ((*(char *)((int)this_ + 0x52) == '\x10') && ((*(byte *)((int)this_ + 0x70) & 2) != 0)) {
        if (((*(byte *)((int)this_ + 0xbc) & 0x10) == 0) &&
           (iVar14 = PointInsideComplexPoly
                               (local_1c0,(Vec4 *)Splines[*(int *)(uVar5 + 0x3dc)]->points,
                                Splines[*(int *)(uVar5 + 0x3dc)]->cnt), iVar14 != 0)) {
          *(undefined1 *)((int)this_ + 0x20) = 5;
          local_b8 = (longlong)(int)(animationSpeed * 10.5);
          MB_SetAnimation(lVar9,0,0,(int)(animationSpeed * 10.5));
        }
        else {
          *(undefined1 *)((int)this_ + 0x20) = 6;
          local_b8 = (longlong)(int)(animationSpeed * 10.5);
          MB_SetAnimation(lVar9,0,0,(int)(animationSpeed * 10.5));
        }
        *(byte *)((int)this_ + 0xbc) = *(byte *)((int)this_ + 0xbc) & 0xef | 8;
      }
      else {
        if ((*(byte *)((int)this_ + 0xbc) & 0x10) == 0) {
          uVar10 = FUN_005e8338((double)(local_1c0[0].x - fVar2),(double)(local_1c0[0].y - fVar3));
          dVar23 = (double)MB_DeltAngSpeed
                                     (dVar27,uVar10,0x3f9eb851e0000000,0x3fd3333340000000,
                                      (double)(g_FrameTime * 6.4577184));
        }
        else {
          uVar10 = FUN_005e8338((double)(*(float *)(uVar5 + 0x3b0) - fVar2),
                                (double)(*(float *)(uVar5 + 0x3b4) - fVar3));
          dVar23 = (double)MB_DeltAngSpeed
                                     (dVar27,uVar10,(double)(DAT_0071f418 * 3.1415927),
                                      (double)(DAT_0071f418 * 6.2831855),
                                      (double)(g_FrameTime * 4.1887903),&DAT_00720000,
                                      &DAT_00720000,uVar22 + 0x3d0);
        }
        *(float *)((int)this_ + 0x48) = (float)dVar23;
      }
    }
    else if (bVar17 == 9) {
      if ((*(char *)((int)this_ + 0x53) != '\x05') ||
         ((*(char *)((int)this_ + 0x52) == '\x05' && ((*(byte *)((int)this_ + 0x70) & 2) != 0)))) {
        if ((*(byte *)((int)this_ + 0xbc) & 4) == 0) {
          if ((28.0 <= dVar24) || (*(char *)((int)this_ + 0x52) != '\x10')) {
            if (*(int *)(uVar5 + 0x3d8) < 1) {
              *(undefined1 *)((int)this_ + 0x20) = 1;
              *(undefined2 *)(uVar5 + 0x3c2) = 0;
            }
            else {
              fVar2 = -(DAT_0071f418 * 200.0 - *(float *)(uVar5 + 0x3d8));
              *(float *)(uVar5 + 0x3d8) = fVar2;
              MB_SphericalToVector
                        (fVar2,*(float *)(uVar5 + 0x3d4),*(float *)((int)this_ + 0x44),afStack_210);
              FUN_005e7f54(lVar20,lVar20,afStack_210);
              dVar23 = (double)*(float *)((int)this_ + 0x48);
              uVar10 = FUN_005e8338((double)(local_1c0[0].x - *(float *)((int)this_ + 0x10)),
                                    (double)(local_1c0[0].y - *(float *)((int)this_ + 0x14)));
              dVar23 = (double)MB_DeltAngSpeed
                                         (dVar23,uVar10,(double)(DAT_0071f418 * 3.1415927),
                                          (double)(DAT_0071f418 * 6.2831855),
                                          (double)(g_FrameTime * 4.1887903));
              *(float *)((int)this_ + 0x48) = (float)dVar23;
            }
          }
          else {
            fVar2 = DAT_0071f408 * 0.11111111;
            if (*(float *)(uVar5 + 0x3d8) < fVar2) {
              fVar2 = DAT_0071f418 * 20.0 + *(float *)(uVar5 + 0x3d8);
            }
            *(float *)(uVar5 + 0x3d8) = fVar2;
            MB_SphericalToVector
                      (fVar2,*(float *)(uVar5 + 0x3d4),*(float *)((int)this_ + 0x44),afStack_210);
            FUN_005e7f54(lVar20,lVar20,afStack_210);
            dVar23 = (double)*(float *)((int)this_ + 0x48);
            uVar10 = FUN_005e8338((double)(local_1c0[0].x - *(float *)((int)this_ + 0x10)),
                                  (double)(local_1c0[0].y - *(float *)((int)this_ + 0x14)));
            dVar23 = (double)MB_DeltAngSpeed
                                       (dVar23,uVar10,(double)(DAT_0071f418 * 3.1415927),
                                        (double)(DAT_0071f418 * 6.2831855),
                                        (double)(g_FrameTime * 4.1887903),&DAT_00720000,
                                        &DAT_00720000,uVar22 + 0x3d0);
            *(float *)((int)this_ + 0x48) = (float)dVar23;
          }
        }
        else {
          *(byte *)((int)this_ + 0xbc) = *(byte *)((int)this_ + 0xbc) & 0xfb;
          if (*(int *)(uVar5 + 0x3dc) == -1) {
            local_b8 = (longlong)(int)(animationSpeed * 10.5);
            MB_SetAnimation(lVar9,0,0,(int)(animationSpeed * 10.5));
            *(undefined1 *)((int)this_ + 0x20) = 1;
            *(undefined2 *)(uVar5 + 0x3c2) = 0;
          }
          else {
            local_108[2] = 0.5235988;
            local_108[5] = 1.0471976;
            local_108[3] = 0.7853982;
            uVar15 = 0;
            local_108[4] = 0.2617994;
            local_108[6] = 0.0;
            dVar25 = 1.0;
            dVar27 = 6.0;
            dVar24 = dVar25;
            do {
              if ((uVar15 & 1) == 0) {
                uVar11 = MB_randInt(100);
                dVar24 = dVar25;
                if ((uVar11 & 1) != 0) {
                  dVar24 = -1.0;
                }
              }
              else {
                dVar24 = -dVar24;
              }
              dVar29 = (double)(float)(dVar24 * (double)local_108[((int)uVar15 >> 1) + 2]);
              dVar28 = (double)FUN_005e8338((double)(*(float *)((int)this_ + 0x10) - g_heroPosition.x
                                                    ),
                                            (double)(*(float *)((int)this_ + 0x14) - g_heroPosition.y
                                                    ));
              dVar28 = (double)FastWrapRot((float)dVar29,(float)dVar28);
              MB_SphericalToVector
                        ((float)dVar27,(float)dVar28,*(float *)((int)this_ + 0x44),&VStack_220.x);
              FUN_005e7f54(&VStack_220,&VStack_220,lVar20);
              iVar14 = PointInsideComplexPoly
                                 (&VStack_220,(Vec4 *)Splines[*(int *)(uVar5 + 0x3dc)]->points,
                                  Splines[*(int *)(uVar5 + 0x3dc)]->cnt);
              if (iVar14 != 0) {
                local_b8 = (longlong)(int)(animationSpeed * 10.5);
                MB_SetAnimation(lVar9,0x10,0,(int)(animationSpeed * 10.5));
                *(float *)(uVar5 + 0x3d4) = (float)dVar28;
                *(undefined4 *)(uVar5 + 0x3d8) = 0;
                goto LAB_003ba494;
              }
              uVar15 = uVar15 + 1;
            } while ((int)uVar15 < 9);
            if (*(char *)((int)this_ + 0x52) == '\x05') {
              if ((3.0 <= dVar30) || (1.5707963705062866 <= dVar23)) {
                local_b8 = (longlong)(int)(animationSpeed * 10.5);
                MB_SetAnimation(lVar9,0,0,(int)(animationSpeed * 10.5));
                *(undefined1 *)((int)this_ + 0x20) = 1;
              }
              else {
                local_b8 = (longlong)(int)(animationSpeed * 10.5);
                MB_SetAnimation(lVar9,4,0,(int)(animationSpeed * 10.5));
                *(undefined1 *)((int)this_ + 0x20) = 8;
              }
            }
            else {
              local_b8 = (longlong)(int)(animationSpeed * 10.5);
              MB_SetAnimation(lVar9,0,0,(int)(animationSpeed * 10.5));
              *(undefined1 *)((int)this_ + 0x20) = 1;
              *(undefined2 *)(uVar5 + 0x3c2) = 0;
            }
          }
        }
      }
    }
    else if (bVar17 == 8) {
      if ((*(char *)((int)this_ + 0x52) == '\x04') && ((*(byte *)((int)this_ + 0x70) & 2) != 0)) {
        *(undefined2 *)(uVar5 + 0x3c2) = 0;
        local_b8 = (longlong)(int)(animationSpeed * 10.5);
        MB_SetAnimation(lVar9,0,0,(int)(animationSpeed * 10.5));
        *(undefined1 *)((int)this_ + 0x20) = 1;
      }
    }
    else if (bVar17 == 7) {
      if ((3.0 <= dVar30) || (1.5707963705062866 <= dVar23)) {
        walk_Update(0,dVar27,(double)(DAT_0071f418 * 20.0),lVar9,uVar22 + 0x160);
        if (*(char *)(uVar5 + 0x217) == '\0') {
          *(byte *)((int)this_ + 0x20) = ((byte)(ZERO_MASK(iVar14)) & 0xfd) + 4;
        }
      }
      else {
        local_b8 = (longlong)(int)(animationSpeed * 10.5);
        MB_SetAnimation(lVar9,4,0,(int)(animationSpeed * 10.5));
        Walk_ApplyLegQuatToEuler(uVar22 + 0x160);
        *(undefined1 *)((int)this_ + 0x20) = 8;
      }
    }
    else if (bVar17 == 6) {
      bVar17 = *(byte *)((int)this_ + 0xbc);
      if ((bVar17 & 8) != 0) {
        *(byte *)((int)this_ + 0xbc) = bVar17 & 0xf7;
        Walk_ResetLegState(this_,(w_2legData *)(uVar5 + 0x160));
        bVar17 = *(byte *)((int)this_ + 0xbc);
      }
      if ((3.0 <= dVar30) || (1.5707963705062866 <= dVar23)) {
        if ((bVar17 & 8) != 0) {
          *(byte *)((int)this_ + 0xbc) = bVar17 & 0xf7;
          Walk_ResetLegState(this_,(w_2legData *)(uVar5 + 0x160));
        }
        dVar23 = (double)FUN_005e8588(lVar20,uVar22 + 0x3b0);
        if (2.0 <= dVar23) {
          dVar23 = (double)(float)((double)g_FrameTime * 4.0);
          uVar10 = FUN_005e8338((double)(*(float *)(uVar5 + 0x3b0) - *(float *)((int)this_ + 0x10)),
                                (double)(*(float *)(uVar5 + 0x3b4) - *(float *)((int)this_ + 0x14)),
                                (double)g_FrameTime,0x4010000000000000);
          walk_Update(dVar23,uVar10,(double)(DAT_0071f418 * 20.0),lVar9,uVar22 + 0x160);
          if (*(int *)(uVar5 + 0x3dc) != -1) {
            cosf(*(float *)((int)this_ + 0x48));
            FUN_005e8128((double)*(float *)((int)this_ + 0x48));
            FUN_005e7f54(&local_230,&local_230,lVar20);
            iVar14 = PointInsideComplexPoly
                               (&local_230,(Vec4 *)Splines[*(int *)(uVar5 + 0x3dc)]->points,
                                Splines[*(int *)(uVar5 + 0x3dc)]->cnt);
            if (iVar14 == 0) {
              *(undefined4 *)(uVar5 + 0x3d0) = 0;
              local_b8 = (longlong)(int)(animationSpeed * 10.5);
              MB_SetAnimation(lVar9,0x10,0,(int)(animationSpeed * 10.5));
              Walk_ApplyLegQuatToEuler(uVar22 + 0x160);
              *(undefined1 *)((int)this_ + 0x20) = 10;
              *(byte *)((int)this_ + 0xbc) = *(byte *)((int)this_ + 0xbc) | 0x10;
            }
            else {
              iVar14 = PointInsideComplexPoly
                                 (local_1c0,(Vec4 *)Splines[*(int *)(uVar5 + 0x3dc)]->points,
                                  Splines[*(int *)(uVar5 + 0x3dc)]->cnt);
              if (iVar14 != 0) {
                *(undefined1 *)((int)this_ + 0x20) = 7;
              }
            }
          }
        }
        else {
          *(undefined1 *)((int)this_ + 0x20) = 7;
        }
      }
      else {
        local_b8 = (longlong)(int)(animationSpeed * 10.5);
        MB_SetAnimation(lVar9,4,0,(int)(animationSpeed * 10.5));
        Walk_ApplyLegQuatToEuler(uVar22 + 0x160);
        *(undefined1 *)((int)this_ + 0x20) = 8;
      }
    }
    goto LAB_003ba494;
  }
  if (bVar17 == 5) {
    if ((*(byte *)((int)this_ + 0xbc) & 8) != 0) {
      *(byte *)((int)this_ + 0xbc) = *(byte *)((int)this_ + 0xbc) & 0xf7;
      Walk_ResetLegState(this_,(w_2legData *)(uVar5 + 0x160));
      fVar2 = *(float *)((int)this_ + 0x10);
      fVar3 = *(float *)((int)this_ + 0x14);
    }
    lVar21 = uVar22 + 0x160;
    dVar24 = (double)(float)((double)g_FrameTime * 4.0);
    uVar10 = FUN_005e8338((double)(local_1c0[0].x - fVar2),(double)(local_1c0[0].y - fVar3),
                          0x4010000000000000,(double)g_FrameTime);
    walk_Update(dVar24,uVar10,(double)(DAT_0071f418 * 20.0),lVar9,lVar21);
    if ((3.0 <= dVar30) || (1.5707963705062866 <= dVar23)) {
      if (*(int *)(uVar5 + 0x3dc) != -1) {
        cosf(*(float *)((int)this_ + 0x48));
        FUN_005e8128((double)*(float *)((int)this_ + 0x48));
        FUN_005e7f54(&local_240,&local_240,lVar20);
        iVar12 = PointInsideComplexPoly
                           (&local_240,(Vec4 *)Splines[*(int *)(uVar5 + 0x3dc)]->points,
                            Splines[*(int *)(uVar5 + 0x3dc)]->cnt);
        if (iVar12 == 0) {
          if ((iVar14 == 0) ||
             (iVar12 = PointInsideComplexPoly
                                 (local_1c0,(Vec4 *)Splines[*(int *)(uVar5 + 0x3dc)]->points,
                                  Splines[*(int *)(uVar5 + 0x3dc)]->cnt), iVar12 != 0)) {
            iVar12 = PointInsideComplexPoly
                               (local_1c0,(Vec4 *)Splines[*(int *)(uVar5 + 0x3dc)]->points,
                                Splines[*(int *)(uVar5 + 0x3dc)]->cnt);
            if (iVar12 != 0) {
              *(undefined4 *)(uVar5 + 0x3d0) = 0;
              local_b8 = (longlong)(int)(animationSpeed * 10.5);
              MB_SetAnimation(lVar9,0x10,0,(int)(animationSpeed * 10.5));
              Walk_ApplyLegQuatToEuler(lVar21);
              *(undefined1 *)((int)this_ + 0x20) = 10;
            }
          }
          else {
            *(undefined1 *)((int)this_ + 0x20) = 7;
          }
        }
        if ((iVar14 == 0) &&
           (iVar14 = PointInsideComplexPoly
                               (local_1c0,(Vec4 *)Splines[*(int *)(uVar5 + 0x3dc)]->points,
                                Splines[*(int *)(uVar5 + 0x3dc)]->cnt), iVar14 == 0)) {
          *(undefined1 *)((int)this_ + 0x20) = 6;
        }
      }
    }
    else {
      local_b8 = (longlong)(int)(animationSpeed * 10.5);
      MB_SetAnimation(lVar9,4,0,(int)(animationSpeed * 10.5));
      Walk_ApplyLegQuatToEuler(lVar21);
      *(undefined1 *)((int)this_ + 0x20) = 8;
    }
    goto LAB_003ba494;
  }
  if (bVar17 == 4) {
    if (iVar14 == 0) {
      *(undefined1 *)((int)this_ + 0x20) = 1;
    }
    else if ((3.0 <= dVar30) || (1.5707963705062866 <= dVar23)) {
      if ((*(int *)(uVar5 + 0x3dc) == -1) ||
         (iVar14 = PointInsideComplexPoly
                             (local_1c0,(Vec4 *)Splines[*(int *)(uVar5 + 0x3dc)]->points,
                              Splines[*(int *)(uVar5 + 0x3dc)]->cnt), iVar14 != 0)) {
        *(undefined1 *)((int)this_ + 0x20) = 5;
        *(byte *)((int)this_ + 0xbc) = *(byte *)((int)this_ + 0xbc) | 8;
      }
      else if (1.5707963705062866 < dVar23) {
        *(undefined4 *)(uVar5 + 0x3d0) = 0;
        local_b8 = (longlong)(int)(animationSpeed * 10.5);
        MB_SetAnimation(lVar9,0x10,0,(int)(animationSpeed * 10.5));
        Walk_ApplyLegQuatToEuler(uVar22 + 0x160);
        *(undefined1 *)((int)this_ + 0x20) = 10;
      }
    }
    else {
      local_b8 = (longlong)(int)(animationSpeed * 10.5);
      MB_SetAnimation(lVar9,4,0,(int)(animationSpeed * 10.5));
      Walk_ApplyLegQuatToEuler(uVar22 + 0x160);
      *(undefined1 *)((int)this_ + 0x20) = 8;
    }
    goto LAB_003ba494;
  }
  if (bVar17 == 3) {
    if ((*(char *)((int)this_ + 0x52) != '\0') && ((*(byte *)((int)this_ + 0x70) & 2) != 0)) {
      uVar10 = idol::GetAnimDuration(10);
      MB_SetAnimation(lVar9,0xc,0,uVar10);
      dVar24 = (double)MB_randRangeFloat(0.8,1.2);
      *(float *)((int)this_ + 0x58) = (float)dVar24;
    }
    iVar12 = MB_MayaFrameTrigger(36.0,(MobyInstance *)this_);
    if (iVar12 != 0) {
      dVar29 = -1.0;
      iVar12 = 0;
      dVar28 = 1.0;
      dVar25 = 5.0;
      dVar27 = 10.0;
      dVar24 = 3.0;
      uVar26 = 0x3fd6666660000000;
      uVar10 = 0x3fe6666660000000;
      do {
        MB_randRangeFloat((float)dVar29,(float)dVar28);
        MB_randRangeFloat((float)dVar29,(float)dVar28);
        MB_randRangeFloat((float)dVar29,(float)dVar28);
        GetBonePosition(lVar9,0,auStack_290);
        cosf(*(float *)((int)this_ + 0x48));
        MB_randRangeFloat((float)dVar25,(float)dVar27);
        FUN_005e8128((double)*(float *)((int)this_ + 0x48));
        MB_randRangeFloat((float)dVar25,(float)dVar27);
        FUN_005e7f98((double)(float)((double)g_FrameTime * dVar24),local_270,local_270);
        FastVecAddSelf(auStack_250,local_280,local_270);
        MB_randRot();
        MB_randRot();
        MB_randRot();
        FUN_00291320(uVar26,uVar10,lVar9,local_280,auStack_290,local_260,0x5ec);
        iVar12 = iVar12 + 1;
      } while (iVar12 < 0x14);
    }
    if (*(short *)(uVar5 + 0x3c2) == 0) {
      if ((3.0 <= dVar30) || (1.5707963705062866 <= dVar23)) {
        if (iVar14 == 0) {
          fVar2 = *(float *)(uVar5 + 1000);
        }
        else {
          fVar2 = *(float *)(uVar5 + 1000) * 2.0;
        }
        if (dVar30 < (double)fVar2) {
          bVar17 = *(byte *)((int)this_ + 0xbc);
          if ((bVar17 & 1) == 0) {
            *(undefined4 *)(uVar5 + 0x3d0) = 0;
            local_b8 = (longlong)(int)(animationSpeed * 10.5);
            MB_SetAnimation(lVar9,0x10,0,(int)(animationSpeed * 10.5));
            Walk_ApplyLegQuatToEuler(uVar22 + 0x160);
            *(undefined1 *)((int)this_ + 0x20) = 10;
            *(byte *)((int)this_ + 0xbc) = *(byte *)((int)this_ + 0xbc) | 1;
          }
          else {
            if ((iVar14 == 0) && (*(int *)(uVar5 + 0x3dc) != -1)) {
              iVar14 = PointInsideComplexPoly
                                 (local_1c0,(Vec4 *)Splines[*(int *)(uVar5 + 0x3dc)]->points,
                                  Splines[*(int *)(uVar5 + 0x3dc)]->cnt);
              if (iVar14 == 0) goto LAB_003ba494;
              bVar17 = *(byte *)((int)this_ + 0xbc);
            }
            *(undefined1 *)((int)this_ + 0x20) = 5;
            *(byte *)((int)this_ + 0xbc) = bVar17 | 8;
          }
        }
      }
      else {
        local_b8 = (longlong)(int)(animationSpeed * 10.5);
        MB_SetAnimation(lVar9,4,0,(int)(animationSpeed * 10.5));
        *(undefined1 *)((int)this_ + 0x20) = 8;
      }
    }
    goto LAB_003ba494;
  }
  if (bVar17 == 2) {
    if ((*(char *)((int)this_ + 0x52) == '\x02') && ((*(byte *)((int)this_ + 0x70) & 2) != 0)) {
      if ((iVar14 == 0) &&
         ((*(int *)(uVar5 + 0x3dc) != -1 &&
          (iVar14 = PointInsideComplexPoly
                              (local_1c0,(Vec4 *)Splines[*(int *)(uVar5 + 0x3dc)]->points,
                               Splines[*(int *)(uVar5 + 0x3dc)]->cnt), iVar14 == 0)))) {
        uVar10 = idol::GetAnimDuration(10);
        MB_SetAnimation(lVar9,0,0,uVar10);
        *(undefined1 *)((int)this_ + 0x20) = 1;
      }
      else {
        *(undefined1 *)((int)this_ + 0x20) = 5;
        *(byte *)((int)this_ + 0xbc) = *(byte *)((int)this_ + 0xbc) | 8;
      }
    }
    goto LAB_003ba494;
  }
  if (bVar17 != 1) {
    if (bVar17 == 0) {
      *(undefined4 *)(uVar5 + 0x20) = 0x40000000;
      *(undefined2 *)(uVar5 + 0x24) = 2;
      *(undefined1 *)(uVar5 + 0x28) = 1;
      *(undefined4 *)(uVar5 + 0x30) = 0x3f800000;
      *(undefined1 *)(uVar5 + 0x29) = 0;
      *(undefined1 *)((int)this_ + 0xbc) = 0;
      *(undefined4 *)(uVar5 + 0x3e0) = 0;
      *(undefined2 *)(uVar5 + 0x3c6) = 0;
      *(undefined1 *)(uVar5 + 0x58) = 8;
      *(undefined1 *)(uVar5 + 0x5a) = 8;
      FUN_005e7e98(uVar22 + 0x3b0,lVar20);
      if (*(char *)(uVar5 + 0x121) == '\0') {
        AttachManipulator((MobyInstance *)this_,6,(Manipulator *)(uVar5 + 0x120));
      }
      M563_003b8208((MobyInstance *)this_);
      if (*(char *)(uVar5 + 0x3c0) == '\0') {
        *(undefined1 *)((int)this_ + 0x20) = 1;
      }
      else {
        *(undefined1 *)((int)this_ + 0x20) = 3;
        uVar10 = idol::GetAnimDuration(10);
        MB_SetAnimation(lVar9,0xb,0,uVar10);
      }
    }
    goto LAB_003ba494;
  }
  if ((*(byte *)((int)this_ + 0x70) & 2) != 0) {
    if (iVar14 == 0) {
      fVar2 = *(float *)(uVar5 + 1000);
    }
    else {
      fVar2 = *(float *)(uVar5 + 1000) * 2.0;
    }
    if (dVar30 <= (double)fVar2) {
      uVar10 = idol::GetAnimDuration(0x14);
      MB_SetAnimation(lVar9,0,0,uVar10);
    }
    else {
      local_108[0xd] = 0.0;
      local_108[0xe] = 0.0;
      local_108[0xf] = 0.0;
      local_108[0x10] = 0.0;
      local_108[0x11] = 0.0;
      local_108[0x12] = 1.4013e-45;
      lVar21 = MB_randInt(6);
      uVar7 = *(undefined4 *)((int)local_108 + (int)(lVar21 << 2) + 0x34U);
      uVar10 = idol::GetAnimDuration(0x14);
      MB_SetAnimation(lVar9,uVar7,0,uVar10);
    }
  }
  if (*(short *)(uVar5 + 0x3c2) != 0) goto LAB_003ba494;
  if ((3.0 <= dVar30) || (1.5707963705062866 <= dVar23)) {
    if (iVar14 == 0) {
      fVar2 = *(float *)(uVar5 + 1000);
    }
    else {
      fVar2 = *(float *)(uVar5 + 1000) * 2.0;
    }
    if (dVar30 < (double)fVar2) {
      bVar17 = *(byte *)((int)this_ + 0xbc);
      if ((bVar17 & 1) == 0) {
        *(undefined4 *)(uVar5 + 0x3d0) = 0;
        uVar10 = idol::GetAnimDuration(10);
        MB_SetAnimation(lVar9,0x10,0,uVar10);
        Walk_ApplyLegQuatToEuler(uVar22 + 0x160);
        *(undefined1 *)((int)this_ + 0x20) = 10;
        *(byte *)((int)this_ + 0xbc) = *(byte *)((int)this_ + 0xbc) | 1;
      }
      else {
        if ((iVar14 == 0) && (*(int *)(uVar5 + 0x3dc) != -1)) {
          iVar12 = PointInsideComplexPoly
                             (local_1c0,(Vec4 *)Splines[*(int *)(uVar5 + 0x3dc)]->points,
                              Splines[*(int *)(uVar5 + 0x3dc)]->cnt);
          if (iVar12 == 0) goto LAB_003b916c;
          bVar17 = *(byte *)((int)this_ + 0xbc);
        }
        *(undefined1 *)((int)this_ + 0x20) = 5;
        *(byte *)((int)this_ + 0xbc) = bVar17 | 8;
      }
    }
  }
  else {
    uVar10 = idol::GetAnimDuration(10);
    MB_SetAnimation(lVar9,4,0,uVar10);
    *(undefined1 *)((int)this_ + 0x20) = 8;
  }
LAB_003b916c:
  if (((iVar14 == 0) && (dVar23 = (double)FUN_005e8588(lVar20,uVar22 + 0x3b0), 2.0 < dVar23)) &&
     (((double)*(float *)(uVar5 + 1000) < dVar30 ||
      ((*(int *)(uVar5 + 0x3dc) != -1 &&
       (iVar14 = PointInsideComplexPoly
                           (local_1c0,(Vec4 *)Splines[*(int *)(uVar5 + 0x3dc)]->points,
                            Splines[*(int *)(uVar5 + 0x3dc)]->cnt), iVar14 == 0)))))) {
    *(undefined1 *)((int)this_ + 0x20) = 6;
    *(byte *)((int)this_ + 0xbc) = *(byte *)((int)this_ + 0xbc) | 8;
  }
LAB_003ba494:
  MB_ColorDyingMoby(lVar9,uVar22 + 0xb0);
  uVar10 = 0;
  if (0 < *(int *)(uVar5 + 0x3e4)) {
    dVar23 = (double)FUN_005e8338((double)(*(float *)((int)this_ + 0x10) - g_heroPosition.x),
                                  (double)(*(float *)((int)this_ + 0x14) - g_heroPosition.y));
    cosf((float)dVar23);
    FUN_005e8338((double)(*(float *)((int)this_ + 0x10) - g_heroPosition.x),
                 (double)(*(float *)((int)this_ + 0x14) - g_heroPosition.y));
    FUN_005e8128();
    FUN_005e7f54(local_200,local_200,lVar20);
    *(float *)(uVar5 + 0x3e4) =
         *(float *)(uVar5 + 0x3e4) + -2.0 / (animationSpeed * 15.0 * animationSpeed * 15.0);
    CollMovingSphere
              (0x3fd0000000000000,0x3ff0000000000000,0x3fe8000000000000,0x3febecde60000000,lVar9,
               lVar20,local_200);
  }
  *(float *)(uVar5 + 0x3c8) = *(float *)(uVar5 + 0x3c8) * 0.96;
  FastQuaternionToEuler(auStack_2b0,1);
  lVar21 = uVar22 + 0x130;
  FastQuaternionToEuler(uVar10,lVar21,2);
  FastQuaternionMult(lVar21,lVar21,auStack_2b0);
  cVar1 = *(char *)((int)this_ + 0x20);
  if (cVar1 != '\t') {
    *(char *)(uVar5 + 0x3c1) = cVar1;
    cVar1 = *(char *)((int)this_ + 0x20);
  }
  if ((cVar1 != '\x05') && (*(char *)((int)this_ + 0xbc) != '\x06')) {
    fVar2 = DAT_0071f418 * 9.8 + *(float *)(uVar5 + 0x3e0);
    *(float *)(uVar5 + 0x3e0) = fVar2;
    dVar24 = 2.0;
    *(float *)((int)this_ + 0x18) = *(float *)((int)this_ + 0x18) - (fVar2 - 2.0);
    dVar23 = (double)GetGroundZ(0x3fe0000000000000,lVar20,0);
    fVar2 = (float)((double)*(float *)((int)this_ + 0x18) - dVar24);
    dVar30 = (double)fVar2;
    *(float *)((int)this_ + 0x18) = fVar2;
    if (dVar30 < dVar23) {
      *(float *)((int)this_ + 0x18) = (float)dVar23;
      *(undefined4 *)(uVar5 + 0x3e0) = 0;
      dVar30 = (double)*(float *)((int)this_ + 0x18);
    }
    if (dVar30 < dVar24) {
      MB_SpawnBoltsFromCrate(lVar9,0,0xffffffffffffffff);
      DeleteMoby((MobyInstance *)this_);
    }
  }
  return;
}


