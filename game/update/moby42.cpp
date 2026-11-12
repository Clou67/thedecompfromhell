// game/update/moby42.cpp -- reconstructed from NPEA00385 EBOOT
// STATUS: NOT STARTED (raw Ghidra output)
// 5 functions, 0x3a8068-0x3a9ab8
// shared update function UpdateMoby_a_lot_10; registered for oClasses 42, 51, 60, 330, 797, 845, 1330, 1339, 1340
#include <stdio.h>
#include "game/update/moby42.h"
#include "game/camera.h"
#include "game/collproc.h"
#include "game/hero.h"
#include "game/mUnk.h"
#include "game/mobyfunc.h"
#include "game/mobyutil.h"
#include "game/partupd.h"
#include "game/path.h"
#include "game/sound.h"
#include "game/update.h"
#include "game/update/moby121.h"
#include "idol/fastfunc.h"
#include "idol/mathfunc.h"

// 0x03a8068 (0xe0 bytes)
int M1340_003a8068(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  float fVar4;
  bool bVar5;
  int iVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  
  iVar1 = *(int *)(param_1 + 0x78);
  bVar5 = MB_isCrate(param_1);
  if (bVar5) {
    iVar2 = *(int *)(iVar1 + 0xa0);
    iVar6 = 0;
    if (iVar2 != 0) {
      dVar8 = 0.5;
      dVar9 = 0.05000000074505806;
      do {
        iVar3 = iVar2;
        dVar7 = (double)*(float *)(iVar1 + 0xb0);
        fVar4 = *(float *)(iVar3 + 0x18) - *(float *)(param_1 + 0x18);
        if (fVar4 < (float)(dVar7 * dVar8)) {
          return iVar6;
        }
        if ((float)(dVar7 + dVar9) < fVar4) {
          return iVar6;
        }
        bVar5 = MB_isCrate(param_1);
        if (!bVar5) {
          return iVar6;
        }
        iVar6 = iVar6 + 1;
        iVar2 = *(int *)(*(int *)(iVar3 + 0x78) + 0xa0);
        param_1 = iVar3;
      } while (iVar2 != 0);
    }
  }
  else {
    iVar6 = 0;
  }
  return iVar6;
}


// 0x03a8148 (0x14 bytes)
void M1340_003a8148(void)

{
  DAT_0084360c = 0x10000;
  return;
}


// 0x03a8168 (0xe4 bytes)
void M1340_003a8168(int param_1,float *param_2)

{
  float fVar1;
  float fVar2;
  int iVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float local_50;
  float local_4c;
  float local_48;
  
  iVar3 = *(int *)(param_1 + 0x78);
  if ((*(int *)(iVar3 + 0x130) != 0) || (*(int *)(iVar3 + 0x134) != 0)) {
    FastEulerToMtx1(&local_50,param_1 + 0x40);
    fVar1 = *(float *)(iVar3 + 0x130);
    fVar5 = local_50 * local_4c - local_4c * local_50;
    fVar4 = (local_48 - 1.0) * local_50 - local_50 * local_48;
    fVar6 = local_4c * local_48 - (local_48 - 1.0) * local_4c;
    fVar2 = *(float *)(iVar3 + 0x134);
    param_2[2] = (fVar6 * local_4c - fVar4 * local_50) * fVar2 + fVar5 * fVar1 + param_2[2];
    *param_2 = (fVar4 * local_48 - fVar5 * local_4c) * fVar2 + fVar6 * fVar1 + *param_2;
    param_2[1] = (fVar5 * local_50 - fVar6 * local_48) * fVar2 + fVar4 * fVar1 + param_2[1];
  }
  return;
}


// shared update function, registered for oClasses 42, 51, 60, 330, 797, 845, 1330, 1339, 1340
// 0x03a82b8 (0x17ec bytes)
// inlined: FastRSqrt @0x3a8dd4, FastRSqrt @0x3a94c8
// strings: 006569d0: 'WARNING moby class %d instance %d has no path!\n'

/* Moby 42
   Moby 51
   Moby 60
   Moby 330
   Moby 797
   Moby 845
   Moby 1330
   Moby 1339
   Moby 1340 */

void UpdateMoby_42(MobyInstance *moby)

{
  float fVar1;
  float fVar2;
  byte bVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  MOBY_OCLASSES MVar8;
  short sVar9;
  void *pvVar10;
  void *pvVar11;
  u16 *puVar12;
  Spline *pSVar13;
  undefined1 uVar14;
  undefined2 uVar15;
  float fVar16;
  float fVar17;
  Vec4 *pVVar18;
  float *pfVar19;
  MobyInstance *pMVar20;
  bool bVar21;
  longlong lVar22;
  undefined4 *puVar23;
  ulonglong uVar24;
  longlong lVar25;
  int iVar26;
  PathFollower *follower;
  uint uVar27;
  int iVar28;
  double dVar29;
  ulonglong uVar30;
  ulonglong uVar31;
  undefined8 uVar32;
  double dVar33;
  double dVar34;
  double dVar35;
  double dVar36;
  double dVar37;
  double dVar38;
  double dVar39;
  double dVar40;
  undefined8 uVar41;
  GPiece<16> auVar42;
  GPiece<16> auVar43;
  undefined4 in_vr31_32_0;
  undefined4 in_vr31_32_1;
  undefined4 in_vr31_32_2;
  undefined4 in_vr31_32_3;
  GPiece<16> auVar44;
  float fVar45;
  float local_170;
  float local_16c;
  float local_168;
  f32 local_164;
  MobyInstance *local_e0 [2];
  longlong local_d8;
  
  lVar25 = (longlong)(int)moby;
  uVar24 = ZEXT48(&stack0x00000000);
  lVar22 = uVar24 - 0xc0;
  puVar23 = (undefined4 *)lVar22;
  puVar23[3] = in_vr31_32_3;
  puVar23[2] = in_vr31_32_2;
  puVar23[1] = in_vr31_32_1;
  *puVar23 = in_vr31_32_0;
  bVar21 = false;
  pvVar10 = moby->pVar;
  uVar31 = ZEXT48(pvVar10);
  if (moby->oClass != TRAIN_LOCOMOTIVE) {
    FastIntToDouble(moby->drawDistance);
    iVar26 = MB_ScaledVecWrapper(lVar25);
    if (iVar26 == -1) {
      bVar21 = true;
    }
  }
  if (pvVar10 == (void *)0x0) {
    return;
  }
  if (DAT_010c926c != 0) {
    return;
  }
  if ((moby->group != 0xff) && (moby->state != '\x03' && moby->state != '\0')) {
    MB_GetFirstMobyInGroup(local_e0,(uint)(byte)moby->group,'\0','\0');
    if (local_e0[0] == moby) {
      while (pMVar20 = local_e0[0], local_e0[0] != (MobyInstance *)0x0) {
        FastIntToDouble(local_e0[0]->drawDistance);
        iVar26 = MB_ScaledVecWrapper(pMVar20);
        if (iVar26 != -1) goto LAB_003a84a4;
        MB_GetNextMobyInGroup(local_e0,local_e0[0],'\0','\0');
      }
      MB_GetFirstMobyInGroup(local_e0,(uint)(byte)moby->group,'\0','\0');
      if (local_e0[0] != (MobyInstance *)0x0) {
        auVar44 = loadVectorLeftIndexed(lVar22,0x3a824c);
        auVar44 = auVar44 >> 0x60 & (GPiece<16>)0xffffffff;
        auVar44 = auVar44 | auVar44 << 0x20 | auVar44 << 0x40 | auVar44 << 0x60;
        do {
          auVar42 = ZEXT416(0xffffffff);
          auVar42 = auVar42 | auVar42 << 0x20 | auVar42 << 0x40 | auVar42 << 0x60;
          auVar42 = vectorShiftLeftIntegerWord(auVar42,auVar42);
          local_e0[0]->state = '\x03';
          auVar43 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
          auVar42 = vectorMultiplyAddFloatingPoint(auVar43,auVar44,auVar42);
          auVar42 = vectorConvertToSignedFixedPointWordSaturate(auVar42,0);
          auVar42 = vectorSplatHalfWord(auVar42,1);
          uVar15 = storeVectorElementHalfWordIndexed(auVar42,0x11c,ZEXT48(local_e0[0]->pVar));
          *(undefined2 *)((int)local_e0[0]->pVar + 0x11c) = uVar15;
          MB_GetNextMobyInGroup(local_e0,local_e0[0],'\0','\0');
        } while (local_e0[0] != (MobyInstance *)0x0);
      }
    }
  }
LAB_003a84a4:
  MVar8 = moby->oClass;
  if ((((((MVar8 == BATALIA_COMMANDO || MVar8 == 0x33) || (MVar8 == HOVERBOARD_RING)) ||
        (MVar8 == HOVERBOARD_BOOST_PAD)) &&
       ((((worldUpdateTime ^ (int)moby >> 8) & 7) == 0 && (*(short *)((int)pvVar10 + 0x13a) < 1))))
      && (moby->state != '\0')) &&
     (iVar26 = IsMobyPlayingSound(moby,(int)*(short *)((int)pvVar10 + 0x11e)), iVar26 == 0))
  {
    iVar26 = PlayMobySound(0,4,moby);
    *(short *)((int)pvVar10 + 0x11e) = (short)iVar26;
  }
  MVar8 = moby->oClass;
  if (MVar8 != MINE_004A) {
    if ((MVar8 == SUCKCANNON_0044) || (MVar8 == 0x40)) {
      if (*(short *)((int)pvVar10 + 0x138) == -1) {
        iVar26 = MB_randRange
                           ((longlong)*(short *)((int)pvVar10 + 0x13c),
                            (longlong)*(short *)((int)pvVar10 + 0x13c) +
                            (longlong)*(short *)((int)pvVar10 + 0x13e));
        iVar26 = (int)(animationSpeed * ((float)(longlong)iVar26 + 0.5));
        local_d8 = (longlong)iVar26;
        *(short *)((int)pvVar10 + 0x138) = (short)iVar26;
      }
      else {
        iVar26 = FastDecTimerS16(uVar31 + 0x138);
        if (iVar26 != 0) {
          uVar27 = MB_randInt(100);
          PlayMobySound(((uint)(ZERO_MASK((uVar27 & 1))) & 1) + 1,0,moby);
          iVar26 = MB_randRange
                             ((longlong)*(short *)((int)pvVar10 + 0x13c),
                              (longlong)*(short *)((int)pvVar10 + 0x13c) +
                              (longlong)*(short *)((int)pvVar10 + 0x13e));
          iVar26 = (int)(animationSpeed * ((float)(longlong)iVar26 + 0.5));
          local_d8 = (longlong)iVar26;
          *(short *)((int)pvVar10 + 0x138) = (short)iVar26;
        }
      }
      goto LAB_003a87d8;
    }
    if ((MVar8 != 0x3c) && (MVar8 != 0x33)) goto LAB_003a87d8;
  }
  if (*(short *)((int)pvVar10 + 0x138) == -1) {
    iVar26 = MB_randRange
                       ((longlong)*(short *)((int)pvVar10 + 0x13c),
                        (longlong)*(short *)((int)pvVar10 + 0x13c) +
                        (longlong)*(short *)((int)pvVar10 + 0x13e));
    iVar26 = (int)(animationSpeed * ((float)(longlong)iVar26 + 0.5));
    local_d8 = (longlong)iVar26;
    *(short *)((int)pvVar10 + 0x138) = (short)iVar26;
  }
  else {
    iVar26 = FastDecTimerS16(uVar31 + 0x138);
    if (iVar26 != 0) {
      fVar45 = (moby->pos).y - GameCamera.posY;
      fVar16 = (moby->pos).x - GameCamera.posX;
      fVar17 = (moby->pos).z - GameCamera.posZ;
      if (SQRT(fVar17 * fVar17 + fVar16 * fVar16 + fVar45 * fVar45) < 30.0) {
        PlayMobySound(1,0,moby);
      }
      iVar26 = MB_randRange
                         ((longlong)*(short *)((int)pvVar10 + 0x13c),
                          (longlong)*(short *)((int)pvVar10 + 0x13c) +
                          (longlong)*(short *)((int)pvVar10 + 0x13e));
      iVar26 = (int)(animationSpeed * ((float)(longlong)iVar26 + 0.5));
      local_d8 = (longlong)iVar26;
      *(short *)((int)pvVar10 + 0x138) = (short)iVar26;
    }
  }
LAB_003a87d8:
  bVar3 = moby->state;
  follower = (PathFollower *)((int)pvVar10 + 0x60);
  if (bVar3 < 2) {
    if (-1 < (int)(uint)bVar3) {
      if (bVar3 == 0) {
        if (*(int *)((int)pvVar10 + 0x74) == -1) {
          uVar27 = (int)moby - (int)g_MobyInstance;
          local_d8 = (longlong)
                     (int)(((int)uVar27 >> 8) + (uint)((int)uVar27 < 0 && (uVar27 & 0xff) != 0));
          MVar8 = moby->oClass;
          uVar32 = FastDoubleToInt((double)local_d8);
          printf("WARNING moby class %d instance %d has no path!\n",MVar8,uVar32);
        }
        else {
          pSVar13 = Splines[*(int *)((int)pvVar10 + 0x74)];
          pVVar18 = pSVar13->points + pSVar13->cnt + -1;
          fVar45 = pSVar13->points[0].y - pVVar18->y;
          fVar16 = pSVar13->points[0].x - pVVar18->x;
          fVar17 = pSVar13->points[0].z - pVVar18->z;
          if (SQRT(fVar17 * fVar17 + fVar16 * fVar16 + fVar45 * fVar45) < 0.5) {
            pSVar13->cnt = pSVar13->cnt + -1;
          }
        }
        moby->updateDistance = -1;
        *(undefined2 *)((int)pvVar10 + 0x11e) = 0xffff;
        uVar27 = (int)*(uint *)((int)pvVar10 + 0x130) >> 0x1f;
        if (0x43fa0000 < (int)((uVar27 >> 1 ^ *(uint *)((int)pvVar10 + 0x130)) - uVar27)) {
          dVar29 = (double)MB_randRangeFloat(-1.0,1.0);
          *(float *)((int)pvVar10 + 0x130) =
               (float)(dVar29 * (double)*(float *)((int)pvVar10 + 0x130)) * 0.001;
        }
        uVar27 = (int)*(uint *)((int)pvVar10 + 0x134) >> 0x1f;
        if (0x43fa0000 < (int)((uVar27 >> 1 ^ *(uint *)((int)pvVar10 + 0x134)) - uVar27)) {
          dVar29 = (double)MB_randRangeFloat(-1.0,1.0);
          *(float *)((int)pvVar10 + 0x134) =
               (float)(dVar29 * (double)*(float *)((int)pvVar10 + 0x134)) * 0.001;
        }
        if (*(int *)((int)pvVar10 + 0x74) == -1) {
          moby->state = '\x02';
        }
        else {
          uVar27 = (int)moby - (int)g_MobyInstance;
          uVar27 = ((int)uVar27 >> 8) + (uint)((int)uVar27 < 0 && (uVar27 & 0xff) != 0);
          uVar27 = ((int)uVar27 >> 1) + (uint)((int)uVar27 < 0 && (uVar27 & 1) != 0);
          lVar22 = (longlong)((int)uVar27 / 7 + ((int)uVar27 >> 0x1f)) + (ulonglong)(uVar27 >> 0x1f)
          ;
          dVar29 = (double)(lVar22 * 8);
          *(char *)((int)pvVar10 + 0x121) = (char)uVar27 - (SUB81(dVar29,0) - (char)lVar22);
          InitFollower(follower);
          if (*(char *)((int)pvVar10 + 0x65) == '\0') {
            uVar31 = (ulonglong)*(uint *)((int)pvVar10 + 0x60);
            if ((int)*(uint *)((int)pvVar10 + 0x60) < 1) {
              iVar26 = PathFindClosestPnt
                                 (0.0,(Vec4 *)&moby->pos,*(Spline **)((int)pvVar10 + 0x70));
              uVar31 = (ulonglong)iVar26;
              *(int *)((int)pvVar10 + 0x60) = iVar26;
              iVar28 = 0;
              if (-1 < *(char *)((int)pvVar10 + 100)) {
                iVar28 = **(int **)((int)pvVar10 + 0x70) + -1;
              }
              if (iVar26 == iVar28) {
                uVar31 = 0;
                *(undefined4 *)((int)pvVar10 + 0x60) = 0;
              }
            }
            iVar26 = *(int *)((int)pvVar10 + 0x70) + (int)((uVar31 & 0xffffffff) << 4);
            fVar45 = (moby->pos).y - *(float *)(iVar26 + 0x14);
            fVar17 = (moby->pos).x - *(float *)(iVar26 + 0x10);
            fVar16 = (moby->pos).z - *(float *)(iVar26 + 0x18);
            iVar26 = *(int *)((int)pvVar10 + 0x70) + (int)(uVar31 << 4);
            *(float *)((int)pvVar10 + 0x6c) =
                 SQRT(fVar16 * fVar16 + fVar17 * fVar17 + fVar45 * fVar45);
            dVar40 = (double)FUN_005e8338((double)(*(float *)(iVar26 + 0x10) - (moby->pos).x),
                                          (double)(*(float *)(iVar26 + 0x14) - (moby->pos).y));
            *(float *)((int)pvVar10 + 0x78) = (float)dVar40;
            *(undefined4 *)((int)pvVar10 + 0x68) = 0;
            *(undefined4 *)((int)pvVar10 + 0x7c) = 0;
            *(undefined1 *)((int)pvVar10 + 0x65) = 2;
          }
          iVar26 = *(int *)((int)pvVar10 + 0x70) + *(int *)((int)pvVar10 + 0x60) * 0x10;
          *(undefined4 *)((int)pvVar10 + 0xe0) = *(undefined4 *)(iVar26 + 0x10);
          *(undefined4 *)((int)pvVar10 + 0xe4) = *(undefined4 *)(iVar26 + 0x14);
          *(undefined4 *)((int)pvVar10 + 0xe8) = *(undefined4 *)(iVar26 + 0x18);
          *(undefined4 *)((int)pvVar10 + 0xec) = *(undefined4 *)(iVar26 + 0x1c);
          dVar36 = 1.0;
          *(undefined4 *)((int)pvVar10 + 0xf0) = 0x3f800000;
          Spline_CalcTan
                    (*(float *)((int)pvVar10 + 0xf4),*(float *)((int)pvVar10 + 0xf8),
                     (Vec4 *)((int)pvVar10 + 0xa0),follower,0x3f800000,(float)dVar29,0);
          iVar26 = *(int *)((int)pvVar10 + 0x70) + *(int *)((int)pvVar10 + 0x60) * 0x10;
          uVar4 = *(undefined4 *)(iVar26 + 0x10);
          *(undefined4 *)((int)pvVar10 + 0xc0) = uVar4;
          uVar5 = *(undefined4 *)(iVar26 + 0x14);
          *(undefined4 *)((int)pvVar10 + 0xc4) = uVar5;
          uVar6 = *(undefined4 *)(iVar26 + 0x18);
          *(undefined4 *)((int)pvVar10 + 200) = uVar6;
          uVar7 = *(undefined4 *)(iVar26 + 0x1c);
          *(undefined4 *)((int)pvVar10 + 0xb0) = uVar4;
          *(undefined4 *)((int)pvVar10 + 0xcc) = uVar7;
          *(undefined4 *)((int)pvVar10 + 0xb4) = uVar5;
          *(undefined4 *)((int)pvVar10 + 0xb8) = uVar6;
          *(undefined4 *)((int)pvVar10 + 0xbc) = uVar7;
          dVar40 = 0.0;
          (moby->rotation).x = 0.0;
          dVar29 = (double)FUN_005e8338((double)SQRT(*(float *)((int)pvVar10 + 0xa0) *
                                                     *(float *)((int)pvVar10 + 0xa0) +
                                                     *(float *)((int)pvVar10 + 0xa4) *
                                                     *(float *)((int)pvVar10 + 0xa4)),
                                        (double)*(float *)((int)pvVar10 + 0xa8));
          (moby->rotation).y = (float)-dVar29;
          dVar29 = (double)FUN_005e8338((double)*(float *)((int)pvVar10 + 0xa0),
                                        (double)*(float *)((int)pvVar10 + 0xa4));
          (moby->rotation).z = (float)dVar29;
          *(undefined4 *)((int)pvVar10 + 0x104) = 0;
          *(undefined4 *)((int)pvVar10 + 0x10c) = 0;
          (moby->pos).x = *(f32 *)((int)pvVar10 + 0xe0);
          (moby->pos).y = *(f32 *)((int)pvVar10 + 0xe4);
          (moby->pos).z = *(f32 *)((int)pvVar10 + 0xe8);
          (moby->pos).w = *(f32 *)((int)pvVar10 + 0xec);
          M1340_003a8168(lVar25,lVar25 + 0x10);
          uVar27 = *(uint *)((int)pvVar10 + 300);
          uVar32 = 7;
          *(undefined1 *)((int)pvVar10 + 0x121) = 7;
          uVar31 = (ulonglong)((uint)((int)uVar27 >> 0x1f) >> 1 ^ uVar27) -
                   (longlong)((int)uVar27 >> 0x1f);
          if ((int)uVar31 < 0x40c90fdc) {
            uVar31 = (ulonglong)*(uint *)((int)pvVar10 + 0x124);
            if ((*(uint *)((int)pvVar10 + 0x124) != 0) &&
               (uVar31 = 0xffffffffbf800000, uVar27 == 0xbf800000)) {
              dVar29 = (double)MB_randRot();
              *(float *)((int)pvVar10 + 300) = (float)dVar29;
            }
          }
          else {
            *(float *)((int)pvVar10 + 300) = *(float *)((int)pvVar10 + 300) * 0.017453292;
          }
          *(undefined4 *)((int)pvVar10 + 0xd0) = *(undefined4 *)((int)pvVar10 + 0xc0);
          *(undefined4 *)((int)pvVar10 + 0xd4) = *(undefined4 *)((int)pvVar10 + 0xc4);
          *(undefined4 *)((int)pvVar10 + 0xd8) = *(undefined4 *)((int)pvVar10 + 200);
          *(undefined4 *)((int)pvVar10 + 0xdc) = *(undefined4 *)((int)pvVar10 + 0xcc);
          Spline_CalcLen
                    ((double)*(float *)((int)pvVar10 + 0xf4),(double)*(float *)((int)pvVar10 + 0xf8)
                     ,follower,uVar31,uVar32,(ulonglong)*(byte *)((int)pvVar10 + 0x120) & 0x20,
                     lVar25);
          if (((*(byte *)((int)pvVar10 + 0x120) & 0x1e) != 0) &&
             ((*(byte *)((int)pvVar10 + 0x120) & 1) == 0)) {
            uVar31 = 0;
            dVar29 = 0.5;
            do {
              if ((((((uint)*(byte *)((int)pvVar10 + 0x120) & 2 << ((uint)uVar31 & 0x3f)) != 0) &&
                   (iVar26 = *(int *)((int)pvVar10 + (int)((uVar31 & 0xffffffff) << 2) + 0x140),
                   iVar26 != -1)) &&
                  (pMVar20 = g_MobyInstance + iVar26, pMVar20 != (MobyInstance *)0x0)) &&
                 (pvVar11 = pMVar20->pVar, pvVar11 != (void *)0x0)) {
                uVar30 = (uVar31 & 0xfffffff) * 0x10 + (uVar24 - 0x120);
                *(uint *)((int)pvVar11 + 0x70) = *(uint *)((int)pvVar11 + 0x70) | 0x1000;
                GetBonePosition(lVar25,uVar31,uVar30 & 0xffffffff);
                pfVar19 = (float *)uVar30;
                fVar16 = pfVar19[1] - (moby->pos).y;
                fVar17 = *pfVar19 - (moby->pos).x;
                fVar2 = pfVar19[2] - (moby->pos).z;
                fVar45 = pfVar19[3];
                dVar35 = (double)(fVar2 * fVar2 + fVar17 * fVar17 + fVar16 * fVar16);
                dVar37 = dVar40;
                dVar38 = dVar40;
                dVar34 = dVar40;
                if ((double)(float)SQRT(dVar35) != dVar40) {
                  dVar37 = 1.0 / SQRT(dVar35);
                  dVar37 = (double)(float)(-(double)(float)((double)(float)(dVar35 * dVar37) *
                                                            dVar37 - dVar36) *
                                           (double)(float)(dVar37 * dVar29) + dVar37);
                  dVar37 = (double)(float)(-(double)(float)((double)(float)(dVar35 * dVar37) *
                                                            dVar37 - dVar36) *
                                           (double)(float)(dVar37 * dVar29) + dVar37);
                  fVar1 = (float)(-(double)(float)((double)(float)(dVar35 * dVar37) * dVar37 -
                                                  dVar36) * (double)(float)(dVar37 * dVar29) +
                                 dVar37);
                  dVar37 = (double)(fVar17 * fVar1);
                  dVar38 = (double)(fVar16 * fVar1);
                  dVar34 = (double)(fVar2 * fVar1);
                }
                (pMVar20->pos).x = *pfVar19;
                (pMVar20->pos).y = pfVar19[1];
                (pMVar20->pos).z = pfVar19[2];
                (pMVar20->pos).w = pfVar19[3];
                *(float *)((int)pvVar11 + 0x80) = (float)dVar37;
                *(float *)((int)pvVar11 + 0x84) = (float)dVar38;
                *(float *)((int)pvVar11 + 0x88) = (float)dVar34;
                *(float *)((int)pvVar11 + 0x8c) = fVar45;
              }
              iVar26 = (uint)uVar31 + 1;
              uVar31 = (ulonglong)iVar26;
            } while (iVar26 < 4);
          }
          if (*(short *)((int)pvVar10 + 0x11c) < 1) {
            if ((Level == Kerwan) || (Level == Gaspar)) {
              *(undefined2 *)((int)pvVar10 + 0x13a) = 0;
            }
            moby->state = '\x01';
          }
          else {
            moby->state = '\x03';
          }
        }
      }
      else {
        dVar29 = 5.26354424712089e-315;
        uVar27 = (int)*(uint *)((int)pvVar10 + 0xf0) >> 0x1f;
        lVar22 = (longlong)(int)uVar27;
        dVar40 = 1.0;
        if (0x3f7fffff < (int)((uVar27 >> 1 ^ *(uint *)((int)pvVar10 + 0xf0)) - uVar27)) {
          *(float *)((int)pvVar10 + 0xf0) = *(float *)((int)pvVar10 + 0xf0) - 1.0;
          iVar26 = PathFollower_Advance(follower);
          *(undefined4 *)((int)pvVar10 + 0x90) = *(undefined4 *)((int)pvVar10 + 0xa0);
          *(undefined4 *)((int)pvVar10 + 0x94) = *(undefined4 *)((int)pvVar10 + 0xa4);
          *(undefined4 *)((int)pvVar10 + 0x98) = *(undefined4 *)((int)pvVar10 + 0xa8);
          *(undefined4 *)((int)pvVar10 + 0x9c) = *(undefined4 *)((int)pvVar10 + 0xac);
          Spline_CalcTan
                    (*(float *)((int)pvVar10 + 0xf4),*(float *)((int)pvVar10 + 0xf8),
                     (Vec4 *)((int)pvVar10 + 0xa0),follower,lVar22,(float)dVar29,1);
          *(undefined4 *)((int)pvVar10 + 0xb0) = *(undefined4 *)((int)pvVar10 + 0xc0);
          *(undefined4 *)((int)pvVar10 + 0xb4) = *(undefined4 *)((int)pvVar10 + 0xc4);
          *(undefined4 *)((int)pvVar10 + 0xb8) = *(undefined4 *)((int)pvVar10 + 200);
          *(undefined4 *)((int)pvVar10 + 0xbc) = *(undefined4 *)((int)pvVar10 + 0xcc);
          lVar22 = PathFollower_WrapIdx(follower,iVar26 + 1);
          iVar26 = *(int *)((int)pvVar10 + 0x70) + (int)(lVar22 << 4);
          *(undefined4 *)((int)pvVar10 + 0xc0) = *(undefined4 *)(iVar26 + 0x10);
          *(undefined4 *)((int)pvVar10 + 0xc4) = *(undefined4 *)(iVar26 + 0x14);
          *(undefined4 *)((int)pvVar10 + 200) = *(undefined4 *)(iVar26 + 0x18);
          *(undefined4 *)((int)pvVar10 + 0xcc) = *(undefined4 *)(iVar26 + 0x1c);
        }
        fVar45 = *(float *)((int)pvVar10 + 300);
        fVar16 = 3.1415925 - fVar45;
        if (fVar45 - (3.1415925 - fVar45) < 0.0) {
          fVar16 = fVar45;
        }
        fVar17 = -3.1415925 - fVar45;
        if ((-3.1415925 - fVar45) - fVar16 < 0.0) {
          fVar17 = fVar16;
        }
        fVar1 = fVar17 * fVar17;
        fVar16 = fVar1 * fVar1 * fVar17;
        fVar2 = fVar1 * fVar16;
        dVar38 = (double)(*(float *)((int)pvVar10 + 0x124) * DAT_0071f408 *
                          (fVar1 * fVar2 * 2.601887e-06 +
                          fVar2 * -0.0001980741 +
                          fVar16 * 0.0083330255 + fVar1 * fVar17 * -0.16666657 + fVar17) *
                          DAT_0071f408 + *(float *)((int)pvVar10 + 0xfc));
        dVar36 = 0.01745329238474369;
        dVar37 = (double)(float)(dVar38 / (double)*(float *)((int)pvVar10 + 0xbc));
        dVar29 = (double)FastWrapRot
                                   (fVar45,*(float *)((int)pvVar10 + 0x128) * DAT_0071f408 *
                                           0.017453292);
        *(float *)((int)pvVar10 + 300) = (float)dVar29;
        *(undefined4 *)((int)pvVar10 + 0xe0) = *(undefined4 *)((int)pvVar10 + 0xd0);
        *(undefined4 *)((int)pvVar10 + 0xe4) = *(undefined4 *)((int)pvVar10 + 0xd4);
        *(undefined4 *)((int)pvVar10 + 0xe8) = *(undefined4 *)((int)pvVar10 + 0xd8);
        *(undefined4 *)((int)pvVar10 + 0xec) = *(undefined4 *)((int)pvVar10 + 0xdc);
        Spline_Hermite
                  ((float)((double)*(float *)((int)pvVar10 + 0xf0) + dVar37),
                   (Vec4 *)((int)pvVar10 + 0xd0U),(Vec4 *)((int)pvVar10 + 0xb0U),
                   (Vec4 *)((int)pvVar10 + 0xc0U),(Vec4 *)((int)pvVar10 + 0x90U),
                   (Vec4 *)((int)pvVar10 + 0xa0U));
        if (((*(byte *)((int)pvVar10 + 0x120) & 0x40) == 0) &&
           (fVar45 = *(float *)((int)pvVar10 + 0xe4) - *(float *)((int)pvVar10 + 0xd4),
           fVar16 = *(float *)((int)pvVar10 + 0xe0) - *(float *)((int)pvVar10 + 0xd0),
           fVar17 = *(float *)((int)pvVar10 + 0xe8) - *(float *)((int)pvVar10 + 0xd8),
           dVar29 = (double)SQRT(fVar17 * fVar17 + fVar16 * fVar16 + fVar45 * fVar45), dVar29 != 0.0
           )) {
          dVar37 = (double)(float)(dVar37 * (double)(float)(dVar38 / dVar29));
          Spline_Hermite
                    ((float)((double)*(float *)((int)pvVar10 + 0xf0) + dVar37),
                     (Vec4 *)((int)pvVar10 + 0xd0U),(Vec4 *)((int)pvVar10 + 0xb0U),
                     (Vec4 *)((int)pvVar10 + 0xc0U),(Vec4 *)((int)pvVar10 + 0x90U),
                     (Vec4 *)((int)pvVar10 + 0xa0U));
        }
        if (bVar21) {
          (moby->rotation).w = 0.0;
          (moby->rotation).z = 0.0;
          (moby->rotation).y = 0.0;
          (moby->rotation).x = 0.0;
          dVar29 = (double)FUN_005e8338((double)(*(float *)((int)pvVar10 + 0xd0) -
                                                *(float *)((int)pvVar10 + 0xe0)),
                                        (double)(*(float *)((int)pvVar10 + 0xd4) -
                                                *(float *)((int)pvVar10 + 0xe4)));
          (moby->rotation).z = (float)dVar29;
        }
        else {
          local_d8 = (longlong)(int)*(short *)((int)pvVar10 + 0x122);
          dVar38 = (double)(float)((double)local_d8 * dVar36);
          FastDiffRots((double)(moby->rotation).z,dVar38);
          dVar29 = (double)FUN_005e8338((double)(*(float *)((int)pvVar10 + 0xd0) -
                                                *(float *)((int)pvVar10 + 0xe0)),
                                        (double)(*(float *)((int)pvVar10 + 0xd4) -
                                                *(float *)((int)pvVar10 + 0xe4)));
          uVar32 = FastWrapRot((float)dVar29,(float)dVar38);
          dVar29 = (double)FastDiffRots(uVar32,(double)(moby->rotation).z);
          fVar45 = (float)((double)((float)(dVar40 / (double)*(float *)((int)pvVar10 + 0x110)) *
                                   DAT_0071f408) * dVar29);
          dVar39 = (double)fVar45;
          dVar29 = (double)FastWrapRot(fVar45,(moby->rotation).z);
          (moby->rotation).z = (float)dVar29;
          fVar45 = *(float *)((int)pvVar10 + 0xd4) - *(float *)((int)pvVar10 + 0xe4);
          fVar16 = *(float *)((int)pvVar10 + 0xd0) - *(float *)((int)pvVar10 + 0xe0);
          dVar29 = (double)FUN_005e8338((double)SQRT(fVar16 * fVar16 + fVar45 * fVar45),
                                        (double)(*(float *)((int)pvVar10 + 0xd8) -
                                                *(float *)((int)pvVar10 + 0xe8)));
          dVar38 = (double)*(float *)((int)pvVar10 + 0x108);
          dVar35 = 10.0;
          dVar34 = 5.0;
          dVar29 = (double)MB_DeltAngSpeed
                                     ((double)(moby->rotation).y,-dVar29,
                                      (double)((float)((double)(float)(dVar38 * 10.0) * dVar36) *
                                              g_FrameTimeSq),
                                      (double)((float)((double)(float)(dVar38 * 5.0) * dVar36) *
                                              g_FrameTimeSq),
                                      (double)((float)(dVar38 * dVar36) * g_FrameTime));
          (moby->rotation).y = (float)dVar29;
          fVar45 = MB_WrapRot((float)(dVar39 * (double)*(float *)((int)pvVar10 + 0x114)));
          dVar29 = (double)FastDiffRots((double)(moby->rotation).x,(double)fVar45);
          fVar45 = MB_WrapRot((float)(dVar29 * (double)*(float *)((int)pvVar10 + 0x118)));
          dVar29 = (double)*(float *)((int)pvVar10 + 0x100);
          dVar29 = (double)MB_DeltAngSpeed
                                     ((double)(moby->rotation).x,(double)fVar45,
                                      (double)((float)((double)(float)(dVar29 * dVar35) * dVar36) *
                                              g_FrameTimeSq),
                                      (double)((float)((double)(float)(dVar29 * dVar34) * dVar36) *
                                              g_FrameTimeSq),
                                      (double)((float)(dVar29 * dVar36) * g_FrameTime));
          (moby->rotation).x = (float)dVar29;
        }
        *(float *)((int)pvVar10 + 0xf0) = (float)((double)*(float *)((int)pvVar10 + 0xf0) + dVar37);
        (moby->pos).x = *(f32 *)((int)pvVar10 + 0xe0);
        (moby->pos).y = *(f32 *)((int)pvVar10 + 0xe4);
        (moby->pos).z = *(f32 *)((int)pvVar10 + 0xe8);
        (moby->pos).w = *(f32 *)((int)pvVar10 + 0xec);
        if (!bVar21) {
          M1340_003a8168(lVar25,lVar25 + 0x10);
        }
        if ((*(byte *)((int)pvVar10 + 0x120) & 0x1f) != 0) {
          uVar27 = 0;
          iVar26 = 0;
          dVar38 = 0.0;
          dVar37 = 0.5;
          dVar36 = 0.01600000075995922;
          dVar29 = 0.03099999949336052;
          uVar30 = uVar31;
          do {
            if (((uint)*(byte *)((int)pvVar10 + 0x120) & 1 << (uVar27 & 0x3f)) != 0) {
              GetBonePosition(lVar25,iVar26,uVar24 - 0x170);
              iVar26 = iVar26 + 1;
              fVar45 = local_170 - (moby->pos).x;
              fVar16 = local_16c - (moby->pos).y;
              fVar17 = local_168 - (moby->pos).z;
              if ((*(byte *)((int)pvVar10 + 0x120) & 1) == 0) {
                iVar28 = *(int *)((int)uVar30 + 0x13c);
                if (((iVar28 != -1) &&
                    (pMVar20 = g_MobyInstance + iVar28, pMVar20 != (MobyInstance *)0x0)) &&
                   (pvVar11 = pMVar20->pVar, pvVar11 != (void *)0x0)) {
                  dVar33 = (double)(fVar17 * fVar17 + fVar45 * fVar45 + fVar16 * fVar16);
                  dVar34 = dVar38;
                  dVar35 = dVar38;
                  dVar39 = dVar38;
                  if ((double)(float)SQRT(dVar33) != dVar38) {
                    dVar34 = 1.0 / SQRT(dVar33);
                    dVar34 = (double)(float)(-(double)(float)((double)(float)(dVar33 * dVar34) *
                                                              dVar34 - dVar40) *
                                             (double)(float)(dVar34 * dVar37) + dVar34);
                    dVar34 = (double)(float)(-(double)(float)((double)(float)(dVar33 * dVar34) *
                                                              dVar34 - dVar40) *
                                             (double)(float)(dVar34 * dVar37) + dVar34);
                    fVar2 = (float)(-(double)(float)((double)(float)(dVar33 * dVar34) * dVar34 -
                                                    dVar40) * (double)(float)(dVar34 * dVar37) +
                                   dVar34);
                    dVar39 = (double)(fVar45 * fVar2);
                    dVar35 = (double)(fVar16 * fVar2);
                    dVar34 = (double)(fVar17 * fVar2);
                  }
                  *(uint *)((int)pvVar11 + 0x70) = *(uint *)((int)pvVar11 + 0x70) | 0x1000;
                  (pMVar20->pos).x = local_170;
                  (pMVar20->pos).y = local_16c;
                  (pMVar20->pos).z = local_168;
                  (pMVar20->pos).w = local_164;
                  *(float *)((int)pvVar11 + 0x80) = (float)dVar39;
                  *(float *)((int)pvVar11 + 0x84) = (float)dVar35;
                  *(float *)((int)pvVar11 + 0x88) = (float)dVar34;
                  *(f32 *)((int)pvVar11 + 0x8c) = local_164;
                }
              }
              else if (*(char *)((int)pvVar10 + 0x121) == '\0') {
                MB_randRangeFloat((float)dVar36,(float)dVar29);
                SpawnPart_10(uVar24 - 0x170,uVar24 - 0x160);
                MB_randRangeFloat((float)dVar36,(float)dVar29);
                SpawnPart_10(uVar24 - 0x170,uVar24 - 0x160);
              }
            }
            uVar27 = uVar27 + 1;
            uVar30 = uVar30 + 4;
          } while ((int)uVar27 < 5);
          auVar44 = ZEXT416(0xfffffff8);
          auVar42 = loadVectorLeftIndexed(0x121,uVar31);
          auVar44 = vectorShiftRightWord
                              (auVar42,auVar44 | auVar44 << 0x20 | auVar44 << 0x40 | auVar44 << 0x60
                              );
          if (*(char *)((int)pvVar10 + 0x121) == '\0') {
            auVar44 = ZEXT416(0xffffffff);
            auVar44 = auVar44 | auVar44 << 0x20 | auVar44 << 0x40 | auVar44 << 0x60;
            auVar42 = vectorShiftLeftIntegerWord(auVar44,auVar44);
            auVar44 = loadVectorLeftIndexed(0x48,0x3a824c);
            auVar44 = auVar44 >> 0x60 & (GPiece<16>)0xffffffff;
            auVar43 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
            auVar44 = vectorMultiplyAddFloatingPoint
                                (auVar43,auVar44 | auVar44 << 0x20 | auVar44 << 0x40 |
                                         auVar44 << 0x60,auVar42);
            auVar44 = vectorConvertToSignedFixedPointWordSaturate(auVar44,0);
          }
          auVar42 = auVar44 >> 0x60 & (GPiece<16>)0xffffffff;
          auVar44 = ZEXT416(1);
          auVar44 = vectorSubtractUnsignedWordModulo
                              (auVar42 | auVar42 << 0x20 | auVar42 << 0x40 | auVar42 << 0x60,
                               auVar44 | auVar44 << 0x20 | auVar44 << 0x40 | auVar44 << 0x60);
          auVar44 = auVar44 >> 0x60 & (GPiece<16>)0xff;
          uVar14 = storeVectorElementByteIndexed
                             (auVar44 | auVar44 << 8 | auVar44 << 0x10 | auVar44 << 0x18 |
                              auVar44 << 0x20 | auVar44 << 0x28 | auVar44 << 0x30 | auVar44 << 0x38
                              | auVar44 << 0x40 | auVar44 << 0x48 | auVar44 << 0x50 |
                              auVar44 << 0x58 | auVar44 << 0x60 | auVar44 << 0x68 | auVar44 << 0x70
                              | auVar44 << 0x78,0x121,uVar31);
          *(undefined1 *)((int)pvVar10 + 0x121) = uVar14;
        }
        if ((Level == Kerwan) || (Level == Gaspar)) {
          iVar26 = MB_damage(lVar25,0x210000,0);
          if ((iVar26 != 0) &&
             ((*(char *)(iVar26 + 0x28) != '\x02' || (*(char *)(iVar26 + 0x29) != '\x01')))) {
            uVar41 = 0;
            FastVecSub(uVar24 - 0x130,lVar25 + 0x10,uVar24 - 0x180);
            auVar44 = ZEXT416(0xffffffff);
            auVar44 = auVar44 | auVar44 << 0x20 | auVar44 << 0x40 | auVar44 << 0x60;
            auVar42 = vectorShiftLeftIntegerWord(auVar44,auVar44);
            auVar44 = loadVectorLeftIndexed(0x54,0x3a824c);
            auVar43 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
            auVar44 = auVar44 >> 0x60 & (GPiece<16>)0xffffffff;
            uVar32 = 0xffffffffffffffff;
            auVar44 = vectorMultiplyAddFloatingPoint
                                (auVar43,auVar44 | auVar44 << 0x20 | auVar44 << 0x40 |
                                         auVar44 << 0x60,auVar42);
            auVar44 = vectorConvertToSignedFixedPointWordSaturate(auVar44,0);
            auVar44 = vectorSplatHalfWord(auVar44,1);
            uVar15 = storeVectorElementHalfWordIndexed(auVar44,0x13a,uVar31);
            *(undefined2 *)((int)pvVar10 + 0x13a) = uVar15;
            MVar8 = moby->oClass;
            if ((MVar8 == (PLANETBUSTER_MAXIMUS_PART_0500|ROCKET_0032)) ||
               ((MVar8 == 0x53b || (MVar8 == 0x53c)))) {
              uVar32 = 1;
            }
            MB_genericExplosion
                      (uVar41,uVar41,0x4010000000000000,0x4000000000000000,0x40f86a0000000000,
                       0x4008000000000000,0x402e000000000000,lVar25,uVar24 - 0x140,uVar24 - 0x150,
                       uVar32,0xffffffffffffffff,0x14,3,4);
          }
          DAT_00735d00 = &PTR_UpdateMoby_a_lot_10_0070d058;
          moby->damage = -1;
          if (*(short *)((int)pvVar10 + 0x13a) != 0) {
            iVar26 = FastDecTimerS16(uVar31 + 0x13a);
            if ((iVar26 == 0) || (!bVar21)) {
              moby->modeBits = moby->modeBits | (UNK_40|DISABLED);
              sVar9 = *(short *)((int)pvVar10 + 0x11e);
              moby->collision = (ushort *)0x0;
              if ((sVar9 != -1) &&
                 ((iVar26 = (int)((longlong)sVar9 << 7) - (int)((longlong)sVar9 << 4),
                  *(MobyInstance **)((int)g_SoundChannels + iVar26 + 0x18) == moby &&
                  (*(char *)((int)g_SoundChannels + iVar26 + 4) != '\0')))) {
                sound_Kill((int)sVar9);
              }
              *(undefined2 *)((int)pvVar10 + 0x11e) = 0xffff;
              moby->modeBits =
                   moby->modeBits &
                   (MIRROR|CAN_BE_DAMAGED|HIDE_BACKFACES|DISABLE_Z_WRITE|DRAW_SHADOW|
                    DRAW_TRANSPARENT_WEIRD|LOCK_ROTATION|NO_DRAW|UNK_40|HAS_SPECIAL_VARS|HAS_GLOW|
                    TRANSPARENT|NO_POST_UPDATE|NO_UPDATE|DISABLED);
            }
            else {
              puVar12 = moby->pClass->collision;
              moby->modeBits =
                   moby->modeBits &
                   (MIRROR|CAN_BE_DAMAGED|HIDE_BACKFACES|CAN_BE_AUTO_TARGETED|DISABLE_Z_WRITE|
                    DRAW_SHADOW|DRAW_TRANSPARENT_WEIRD|LOCK_ROTATION|NO_DRAW|HAS_SPECIAL_VARS|
                    HAS_GLOW|TRANSPARENT|NO_POST_UPDATE|NO_UPDATE) | CAN_BE_AUTO_TARGETED;
              moby->collision = puVar12;
            }
          }
        }
      }
    }
  }
  else if (bVar3 < 3) {
    if (*(int *)((int)pvVar10 + 0x74) != -1) {
      moby->state = '\0';
      sVar9 = *(short *)((int)pvVar10 + 0x11e);
      if (((sVar9 != -1) &&
          (iVar26 = (int)((longlong)sVar9 << 7) - (int)((longlong)sVar9 << 4),
          *(MobyInstance **)((int)g_SoundChannels + iVar26 + 0x18) == moby)) &&
         (*(char *)((int)g_SoundChannels + iVar26 + 4) != '\0')) {
        sound_Kill((int)sVar9);
      }
      *(undefined2 *)((int)pvVar10 + 0x11e) = 0xffff;
    }
  }
  else if ((bVar3 < 4) && (iVar26 = FastDecTimerS16(uVar31 + 0x11c), iVar26 != 0)) {
    *(undefined2 *)((int)pvVar10 + 0x11c) = 0;
    moby->state = '\x01';
  }
  return;
}


// 0x03a9aa4 (0x14 bytes)
void M1340_003a9aa4(void)

{
  DAT_0084367c = 0x10000;
  return;
}


