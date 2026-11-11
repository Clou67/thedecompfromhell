// game/update/moby691.cpp -- reconstructed from NPEA00385 EBOOT
// STATUS: NOT STARTED (raw Ghidra output)
// 3 functions, 0x41f770-0x421eec
#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include "game/update/moby691.h"
#include "game/camera.h"
#include "game/collproc.h"
#include "game/hero.h"
#include "game/mobyfunc.h"
#include "game/mobyutil.h"
#include "game/path.h"
#include "game/update/moby334.h"
#include "game/update/moby829.h"
#include "game/update/moby859.h"
#include "idol/fastfunc.h"
#include "idol/mathfunc.h"
#include "idol/xUnk.h"

// 0x041f770 (0x2a4 bytes)
// strings: 0065723c: 'bad path! %d\n'

longlong M691_0041f770
                   (int param_1,int param_2,Vec4 *param_3,char param_4,undefined4 *param_5)

{
  int iVar1;
  Spline *spline;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  int iVar6;
  int iVar7;
  longlong lVar8;
  longlong lVar9;
  longlong lVar10;
  double dVar11;
  
  iVar1 = *(int *)(param_2 + 0x174);
  if (iVar1 == -1) {
    printf("bad path! %d\n",0xffffffffffffffff);
    lVar8 = -1;
  }
  else {
    lVar8 = -1;
    spline = Splines[iVar1];
    if (spline == (Spline *)0x0) {
      printf("bad path! %d\n",iVar1);
    }
    else {
      dVar11 = 0.0;
      iVar6 = PathFindClosestPnt(0.0,(Vec4 *)(param_1 + 0x10),spline);
      lVar8 = (longlong)iVar6;
      *(int *)(param_2 + 0x180) = iVar6;
      iVar1 = spline->cnt;
      iVar7 = iVar6 + iVar1 + -1;
      lVar10 = (longlong)(iVar7 - (iVar7 / iVar1) * iVar1);
      lVar9 = (longlong)((iVar6 + 1) - ((iVar6 + 1) / iVar1) * iVar1);
      if (*(char *)(param_2 + 399) == '\0') {
        iVar1 = (int)(lVar9 << 4);
        iVar6 = (int)(lVar10 << 4);
        fVar2 = param_3->y - *(float *)((int)&spline->points[0].y + iVar1);
        fVar3 = param_3->y - *(float *)((int)&spline->points[0].y + iVar6);
        fVar4 = param_3->x - *(float *)((int)&spline->points[0].x + iVar1);
        fVar5 = param_3->x - *(float *)((int)&spline->points[0].x + iVar6);
        fVar2 = SQRT(fVar4 * fVar4 + fVar2 * fVar2);
        fVar3 = SQRT(fVar5 * fVar5 + fVar3 * fVar3);
        if (param_4 == '\0') {
          if ((fVar3 < fVar2) || (*(char *)(param_2 + 0x18d) == '\x01')) {
            *(undefined1 *)(param_2 + 0x18d) = 1;
            lVar8 = lVar9;
          }
          else if ((fVar2 < fVar3) || (*(char *)(param_2 + 0x18d) == -1)) {
            *(undefined1 *)(param_2 + 0x18d) = 0xff;
            lVar8 = lVar10;
          }
        }
        else if ((fVar2 < fVar3) || (*(char *)(param_2 + 0x18d) == '\x01')) {
          *(undefined1 *)(param_2 + 0x18d) = 1;
          lVar8 = lVar9;
        }
        else if ((fVar3 < fVar2) || (*(char *)(param_2 + 0x18d) == -1)) {
          *(undefined1 *)(param_2 + 0x18d) = 0xff;
          lVar8 = lVar10;
        }
      }
      else {
        iVar6 = PathFindClosestPnt((float)dVar11,param_3,spline);
        iVar1 = *(int *)(param_2 + 0x180);
        if (iVar6 < iVar1) {
          *(undefined1 *)(param_2 + 0x18d) = 0xff;
          lVar8 = lVar10;
        }
        else if (iVar1 < iVar6) {
          *(undefined1 *)(param_2 + 0x18d) = 1;
          lVar8 = lVar9;
        }
        else {
          lVar8 = (longlong)iVar1;
        }
      }
      if (((int)lVar8 != -1) && (param_5 != (undefined4 *)0x0)) {
        iVar1 = (int)(lVar8 << 4);
        *param_5 = *(undefined4 *)((int)&spline->points[0].x + iVar1);
        param_5[1] = *(undefined4 *)((int)&spline->points[0].y + iVar1);
        param_5[2] = *(undefined4 *)((int)&spline->points[0].z + iVar1);
        param_5[3] = *(undefined4 *)((int)&spline->points[0].w + iVar1);
      }
    }
  }
  return lVar8;
}


// 0x041fa18 (0x130 bytes)
// strings: 0065723c: 'bad path! %d\n'

longlong M691_0041fa18
                   (int param_1,int param_2,undefined8 param_3,float *param_4)

{
  Spline *spline;
  int iVar1;
  longlong lVar2;
  
  iVar1 = *(int *)(param_2 + 0x174);
  if (iVar1 == -1) {
    printf("bad path! %d\n",0xffffffffffffffff);
    lVar2 = -1;
  }
  else {
    lVar2 = -1;
    spline = Splines[iVar1];
    if (spline == (Spline *)0x0) {
      printf("bad path! %d\n",iVar1);
    }
    else {
      iVar1 = PathFindClosestPnt(0.0,(Vec4 *)(param_1 + 0x10),spline);
      *(int *)(param_2 + 0x180) = iVar1;
      lVar2 = (longlong)((iVar1 + 1) - ((iVar1 + 1) / spline->cnt) * spline->cnt);
      lVar2 = lVar2 + (lVar2 - iVar1 >> 0x3f & iVar1 - lVar2);
      iVar1 = (int)lVar2;
      if ((iVar1 != -1) && (param_4 != (float *)0x0)) {
        *param_4 = spline->points[iVar1].x;
        param_4[1] = spline->points[iVar1].y;
        param_4[2] = spline->points[iVar1].z;
        param_4[3] = spline->points[iVar1].w;
      }
    }
  }
  return lVar2;
}


// 0x041fb90 (0x235c bytes)
/* Moby 691 */

void UpdateMoby_691(void *this_,MobyInstance *moby)

{
  byte bVar1;
  float fVar2;
  ushort uVar3;
  uint uVar4;
  uint uVar5;
  float fVar6;
  float fVar7;
  longlong lVar8;
  undefined4 uVar10;
  float *pfVar11;
  int iVar12;
  undefined2 uVar15;
  undefined8 uVar9;
  int iVar13;
  uint uVar14;
  longlong lVar16;
  ushort *puVar17;
  Spline *spline;
  ulonglong uVar18;
  double dVar19;
  double dVar20;
  double dVar21;
  double dVar22;
  double dVar23;
  double dVar24;
  GPiece<16> auVar25;
  GPiece<16> auVar26;
  GPiece<16> auVar27;
  GPiece<16> auVar28;
  GPiece<16> auStack_1f0;
  GPiece<16> auStack_1e0;
  GPiece<16> auStack_1d0;
  GPiece<16> auStack_1c0;
  GPiece<16> local_1b0;
  GPiece<16> local_1a0;
  GPiece<16> local_190;
  GPiece<16> local_180;
  GPiece<16> local_170;
  GPiece<16> local_160;
  GPiece<16> local_150;
  GPiece<16> local_140;
  GPiece<48> auStack_130;
  GPiece<48> auStack_100;
  Vec4 local_d0 [4];
  int local_90;
  int local_80;
  float local_7c;
  longlong local_78;
  
  lVar8 = (longlong)(int)this_;
  if (this_ == (void *)0x0) {
    return;
  }
  uVar14 = *(uint *)((int)this_ + 0x78);
  uVar18 = (ulonglong)uVar14;
  if (uVar14 == 0) {
    return;
  }
  spline = (Spline *)0x0;
  if (*(int *)(uVar14 + 0x174) != -1) {
    spline = Splines[*(int *)(uVar14 + 0x174)];
    moby = (MobyInstance *)Splines;
  }
  dVar19 = (double)*(float *)(uVar14 + 0x148);
  if ((double)*(float *)(uVar14 + 0x148) - (double)*(float *)(uVar14 + 0x140) < 0.0) {
    dVar19 = (double)*(float *)(uVar14 + 0x140);
  }
  MB_getTarget(dVar19,lVar8,moby,local_d0);
  if (*(int *)(uVar14 + 0x38) != 0) {
    uVar10 = idol::GetAnimDuration(*(undefined4 *)(uVar14 + 0x15c));
    *(undefined4 *)(uVar14 + 0x178) = uVar10;
    *(undefined4 *)(uVar14 + 0x38) = 0;
  }
  FastDecTimerS32(uVar18 + 0x178);
  FastDecTimerS32(uVar18 + 0x17c);
  if (*(char *)((int)this_ + 0x20) != '\x0e') {
    local_7c = 0.0;
    pfVar11 = (float *)MB_damage(lVar8,0x330000,0);
    iVar12 = MB_HandleDamage((MobyInstance *)this_,pfVar11,uVar18 + 0x20,0,&local_80,0,0,4)
    ;
    if (1 < local_80) {
      dVar19 = (double)FUN_005e8338((double)(*(float *)((int)this_ + 0x10) - *pfVar11),
                                    (double)(*(float *)((int)this_ + 0x14) - pfVar11[1]));
      local_7c = (float)dVar19;
      *(undefined4 *)(uVar14 + 0x90) = 0x3e75c28f;
      fVar2 = DAT_0071f418 * 32.0;
      *(undefined4 *)(uVar14 + 0x74) = 0x3a03126f;
      *(float *)(uVar14 + 0x70) = fVar2;
      fVar2 = g_FrameTime;
      *(float *)(uVar14 + 0x78) = g_FrameTime * 9.0;
      *(undefined1 *)(uVar14 + 0x9d) = 0;
      *(undefined4 *)(uVar14 + 0x80) = 0x200;
      *(undefined4 *)(uVar14 + 0x88) = 0x3f000000;
      *(undefined4 *)(uVar14 + 0x84) = 9;
      *(float *)(uVar14 + 0x7c) = fVar2 * 7.0;
    }
    if (iVar12 < 3) {
      if (0 < iVar12) {
        if (iVar12 < 2) {
          *(undefined4 *)(uVar14 + 0x20) = 0;
        }
        else {
          *(undefined4 *)(uVar14 + 0x20) = 0;
        }
      }
    }
    else if (iVar12 < 9) {
      if (iVar12 < 8) {
        MB_VecAtan2Angles
                  (*(undefined8 *)(pfVar11 + 4),*(undefined8 *)(pfVar11 + 6),&local_7c,uVar18 + 0x78
                   ,uVar18 + 0x7c);
        MB_StartKick((double)local_7c,lVar8,uVar18 + 0x60);
        *(undefined4 *)(uVar14 + 0xb0) = 0x40900000;
        *(undefined4 *)(uVar14 + 0xb4) = 0x41100000;
        *(undefined1 *)((int)this_ + 0x20) = 0xd;
      }
      else {
        if (*(char *)((int)this_ + 0x53) != '\r') {
          uVar9 = idol::GetAnimDuration(10);
          MB_SetAnimation(lVar8,0xd,0,uVar9);
        }
        *(undefined1 *)((int)this_ + 0x20) = 0xc;
      }
    }
    else if (iVar12 < 0xb) {
      if (*(char *)((int)this_ + 0x53) != '\x0e') {
        uVar9 = idol::GetAnimDuration(10);
        MB_SetAnimation(lVar8,0xe,0,uVar9);
      }
      *(undefined1 *)((int)this_ + 0x20) = 0xb;
    }
    if (1 < local_80) {
      *(undefined4 *)(uVar14 + 0x178) = 0;
      uVar4 = (int)*(uint *)(uVar14 + 0x20) >> 0x1f;
      uVar5 = (int)pfVar11[0xb] >> 0x1f;
      fVar2 = pfVar11[0xb];
      if ((int)((uVar5 >> 1 ^ (uint)pfVar11[0xb]) - uVar5) <
          (int)((uVar4 >> 1 ^ *(uint *)(uVar14 + 0x20)) - uVar4)) {
        *(undefined1 *)(uVar14 + 0x117) = 0xfa;
        *(float *)(uVar14 + 0x20) = *(float *)(uVar14 + 0x20) - fVar2;
        uVar15 = idol::GetAnimDuration(0x3c);
        *(undefined2 *)(uVar14 + 0x26) = uVar15;
        MB_UpdateLightsTransition(lVar8,uVar18 + 0x110);
      }
      else {
        *(undefined4 *)(uVar14 + 0x20) = 0;
        *(undefined1 *)((int)this_ + 0x20) = 0xe;
        *(ushort *)((int)this_ + 0x34) = *(ushort *)((int)this_ + 0x34) & 0xefff;
        if (((uint)pfVar11[0xc] & 1) != 0) {
          lVar16 = uVar18 + 0x130;
          FUN_005e7e98(lVar16,pfVar11 + 4);
          FUN_005e8e80((double)*(float *)(uVar14 + 0xe4),lVar16,lVar16);
        }
        fVar2 = g_FrameTime;
        *(float *)(uVar14 + 0x78) = g_FrameTime * 9.0;
        *(float *)(uVar14 + 0x7c) = fVar2 * 8.0;
        MB_VecAtan2Angles
                  (*(undefined8 *)(pfVar11 + 4),*(undefined8 *)(pfVar11 + 6),&local_7c,uVar18 + 0x78
                   ,uVar18 + 0x7c);
        MB_StartKick((double)local_7c,lVar8,uVar18 + 0x60);
        *(undefined4 *)(uVar14 + 0xb0) = 0x40400000;
        *(undefined4 *)(uVar14 + 0xb4) = 0x40f00000;
        *(undefined1 *)(uVar14 + 0x117) = 0x78;
        MB_UpdateLightsTransition(lVar8,uVar18 + 0x110);
        if (-1 < *(int *)(uVar14 + 0x1b0)) {
          puVar17 = (ushort *)(&g_MobyGroups)[*(int *)(uVar14 + 0x1b0)];
          do {
            FUN_0047cba4(g_MobyInstance + (*puVar17 & 0x7fff));
            uVar3 = *puVar17;
            puVar17 = puVar17 + 1;
          } while (-1 < (short)uVar3);
        }
      }
    }
    *(undefined1 *)((int)this_ + 0xa4) = 0xff;
  }
  MB_ColorDyingMoby(lVar8,uVar18 + 0x110);
  fVar2 = animationSpeed;
  bVar1 = *(byte *)((int)this_ + 0x20);
  if (bVar1 < 8) {
    if (bVar1 == 7) {
      if ((*(byte *)((int)this_ + 0x70) & 2) != 0) {
        uVar9 = FUN_005e8338((double)(local_d0[0].x - *(float *)((int)this_ + 0x10)),
                             (double)(local_d0[0].y - *(float *)((int)this_ + 0x14)));
        OrganicDeltAngSpeed
                  (uVar9,(double)*(float *)(uVar14 + 0xfc),(double)*(float *)(uVar14 + 0x100),
                   (double)*(float *)(uVar14 + 0x104),lVar8);
        if (*(char *)((int)this_ + 0x53) != '\x01') {
          local_78 = (longlong)(int)(animationSpeed * 10.5);
          MB_SetAnimation(lVar8,1,0,(int)(animationSpeed * 10.5));
        }
        *(undefined1 *)((int)this_ + 0x20) = 3;
      }
    }
    else if (bVar1 == 6) {
      if (*(char *)(uVar14 + 399) == '\0') {
        M691_0041f770(lVar8,uVar18,local_d0,0,auStack_1c0);
      }
      else {
        M691_0041fa18(lVar8,uVar18,local_d0,auStack_1c0);
      }
      *(undefined4 *)(uVar14 + 0xf8) = 10;
      MB_UpdateNavMoveTurning(lVar8,uVar18 + 0xc0,auStack_1c0,uVar18 + 0x130);
      fVar2 = *(float *)((int)this_ + 0x14) - local_d0[0].y;
      fVar6 = *(float *)((int)this_ + 0x10) - local_d0[0].x;
      dVar19 = (double)SQRT(fVar6 * fVar6 + fVar2 * fVar2);
      iVar13 = PathFindClosestPnt(0.0,(Vec4 *)((int)this_ + 0x10),spline);
      iVar12 = (int)((longlong)iVar13 << 4);
      fVar2 = *(float *)((int)this_ + 0x14) - *(float *)((int)&spline->points[0].y + iVar12);
      fVar6 = *(float *)((int)this_ + 0x10) - *(float *)((int)&spline->points[0].x + iVar12);
      fVar2 = SQRT(fVar6 * fVar6 + fVar2 * fVar2);
      if (local_90 == 0) {
        if ((fVar2 < *(float *)(uVar14 + 0xec)) &&
           ((0 < *(int *)((int)&spline->points[0].w + iVar12) ||
            ((*(char *)(uVar14 + 399) == '\x01' && (iVar13 == spline->cnt + -1)))))) {
          if (*(char *)((int)this_ + 0x53) != '\b') {
            local_78 = (longlong)(int)(animationSpeed * 10.5);
            MB_SetAnimation(lVar8,8,0,(int)(animationSpeed * 10.5));
          }
          *(undefined1 *)((int)this_ + 0x20) = 7;
        }
      }
      else if ((((*(char *)(uVar14 + 399) == '\x01') && (iVar13 == spline->cnt + -1)) &&
               (fVar2 < *(float *)(uVar14 + 0xec))) ||
              (((double)*(float *)(uVar14 + 0x154) < dVar19 || (0 < *(int *)(uVar14 + 0x178))))) {
        if (*(char *)((int)this_ + 0x53) != '\b') {
          local_78 = (longlong)(int)(animationSpeed * 10.5);
          MB_SetAnimation(lVar8,8,0,(int)(animationSpeed * 10.5));
        }
        *(undefined1 *)((int)this_ + 0x20) = 7;
      }
    }
    else if (bVar1 == 5) {
      if ((*(byte *)((int)this_ + 0x70) & 2) != 0) {
        if (*(char *)((int)this_ + 0x53) != '\a') {
          local_78 = (longlong)(int)(animationSpeed * 10.5);
          MB_SetAnimation(lVar8,7,0,(int)(animationSpeed * 10.5));
        }
        *(undefined1 *)((int)this_ + 0x20) = 6;
        *(undefined1 *)(uVar14 + 0x18d) = 0;
      }
    }
    else if (bVar1 == 4) {
      M691_0041f770(lVar8,uVar18,local_d0,1,auStack_1d0);
      *(undefined4 *)(uVar14 + 0xf8) = 0;
      MB_UpdateNavMoveTurning(lVar8,uVar18 + 0xc0,auStack_1d0,uVar18 + 0x130);
      fVar2 = *(float *)((int)this_ + 0x14) - local_d0[0].y;
      fVar6 = *(float *)((int)this_ + 0x10) - local_d0[0].x;
      dVar19 = 0.0;
      dVar20 = (double)SQRT(fVar6 * fVar6 + fVar2 * fVar2);
      iVar13 = PathFindClosestPnt(0.0,local_d0,spline);
      iVar12 = PathFindClosestPnt((float)dVar19,(Vec4 *)((int)this_ + 0x10),spline);
      fVar7 = animationSpeed;
      iVar12 = (int)((longlong)iVar12 << 4);
      fVar2 = *(float *)((int)this_ + 0x14) - *(float *)((int)&spline->points[0].y + iVar12);
      fVar6 = *(float *)((int)this_ + 0x10) - *(float *)((int)&spline->points[0].x + iVar12);
      fVar2 = SQRT(fVar6 * fVar6 + fVar2 * fVar2);
      if (local_90 == 0) {
        if ((fVar2 < *(float *)(uVar14 + 0xec)) &&
           (0 < *(int *)((int)&spline->points[0].w + iVar12))) {
          if (*(char *)((int)this_ + 0x53) != '\x01') {
            local_78 = (longlong)(int)(animationSpeed * 10.5);
            MB_SetAnimation(lVar8,1,0,(int)(animationSpeed * 10.5));
          }
          *(undefined1 *)((int)this_ + 0x20) = 3;
        }
      }
      else if ((((dVar20 < (double)*(float *)(uVar14 + 0x14c)) ||
                (*(int *)(uVar14 + 0x180) == iVar13)) ||
               (SQRT(*(float *)(uVar14 + 0x138) * *(float *)(uVar14 + 0x138) +
                     *(float *)(uVar14 + 0x130) * *(float *)(uVar14 + 0x130) +
                     *(float *)(uVar14 + 0x134) * *(float *)(uVar14 + 0x134)) <= 0.0001)) &&
              (fVar2 < *(float *)(uVar14 + 0xec))) {
        if ((double)*(float *)(uVar14 + 0x194) <= dVar20) {
          if ((double)*(float *)(uVar14 + 0x144) <= dVar20) {
            auVar25 = ZEXT416(0xffffffff);
            auVar25 = auVar25 | auVar25 << 0x20 | auVar25 << 0x40 | auVar25 << 0x60;
            auVar27 = vectorShiftLeftIntegerWord(auVar25,auVar25);
            auVar25 = loadVectorLeftIndexed(0x160,uVar18);
            auVar26 = loadVectorRightIndexed(0x170,uVar18);
            auVar26 = vectorConvertFromSignedFixedPointWord(auVar25 | auVar26,0);
            auVar25 = loadVectorLeftIndexed(0x24,0x41fb48);
            auVar25 = auVar25 >> 0x60 & (GPiece<16>)0xffffffff;
            auVar28 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
            auVar25 = vectorAddFloatingPoint
                                (auVar26,auVar25 | auVar25 << 0x20 | auVar25 << 0x40 |
                                         auVar25 << 0x60);
            auVar25 = vectorMultiplyAddFloatingPoint(auVar28,auVar25,auVar27);
            auVar25 = vectorConvertToSignedFixedPointWordSaturate(auVar25,0);
            auVar25 = auVar25 >> 0x60 & (GPiece<16>)0xffffffff;
            uVar10 = storeVectorElementWordIndexed
                               (auVar25 | auVar25 << 0x20 | auVar25 << 0x40 | auVar25 << 0x60,0x17c,
                                uVar18);
            *(undefined4 *)(uVar14 + 0x17c & 0xfffffffc) = uVar10;
            if (*(char *)((int)this_ + 0x53) != '\x01') {
              local_78 = (longlong)(int)(fVar7 * 10.5);
              MB_SetAnimation(lVar8,1,0,(int)(fVar7 * 10.5));
            }
            *(undefined1 *)((int)this_ + 0x20) = 3;
          }
          else {
            auVar25 = ZEXT416(0xffffffff);
            auVar25 = auVar25 | auVar25 << 0x20 | auVar25 << 0x40 | auVar25 << 0x60;
            auVar27 = vectorShiftLeftIntegerWord(auVar25,auVar25);
            auVar25 = loadVectorLeftIndexed(0x160,uVar18);
            auVar26 = loadVectorRightIndexed(0x170,uVar18);
            auVar26 = vectorConvertFromSignedFixedPointWord(auVar25 | auVar26,0);
            auVar25 = loadVectorLeftIndexed(0x24,0x41fb48);
            auVar25 = auVar25 >> 0x60 & (GPiece<16>)0xffffffff;
            auVar28 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
            auVar25 = vectorAddFloatingPoint
                                (auVar26,auVar25 | auVar25 << 0x20 | auVar25 << 0x40 |
                                         auVar25 << 0x60);
            auVar25 = vectorMultiplyAddFloatingPoint(auVar28,auVar25,auVar27);
            auVar25 = vectorConvertToSignedFixedPointWordSaturate(auVar25,0);
            auVar25 = auVar25 >> 0x60 & (GPiece<16>)0xffffffff;
            uVar10 = storeVectorElementWordIndexed
                               (auVar25 | auVar25 << 0x20 | auVar25 << 0x40 | auVar25 << 0x60,0x17c,
                                uVar18);
            *(undefined4 *)(uVar14 + 0x17c & 0xfffffffc) = uVar10;
            if (*(char *)((int)this_ + 0x53) != '\t') {
              local_78 = (longlong)(int)(fVar7 * 10.5);
              MB_SetAnimation(lVar8,9,0,(int)(fVar7 * 10.5));
            }
            *(undefined1 *)((int)this_ + 0x20) = 8;
          }
        }
        else {
          auVar25 = ZEXT416(0xffffffff);
          auVar25 = auVar25 | auVar25 << 0x20 | auVar25 << 0x40 | auVar25 << 0x60;
          auVar27 = vectorShiftLeftIntegerWord(auVar25,auVar25);
          auVar25 = loadVectorLeftIndexed(0x19c,uVar18);
          auVar26 = loadVectorRightIndexed(0x1ac,uVar18);
          auVar26 = vectorConvertFromSignedFixedPointWord(auVar25 | auVar26,0);
          auVar25 = loadVectorLeftIndexed(0x24,0x41fb48);
          auVar25 = auVar25 >> 0x60 & (GPiece<16>)0xffffffff;
          auVar28 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
          auVar25 = vectorAddFloatingPoint
                              (auVar26,auVar25 | auVar25 << 0x20 | auVar25 << 0x40 | auVar25 << 0x60
                              );
          auVar25 = vectorMultiplyAddFloatingPoint(auVar28,auVar25,auVar27);
          auVar25 = vectorConvertToSignedFixedPointWordSaturate(auVar25,0);
          auVar25 = auVar25 >> 0x60 & (GPiece<16>)0xffffffff;
          uVar10 = storeVectorElementWordIndexed
                             (auVar25 | auVar25 << 0x20 | auVar25 << 0x40 | auVar25 << 0x60,0x17c,
                              uVar18);
          *(undefined4 *)(uVar14 + 0x17c & 0xfffffffc) = uVar10;
          if (*(char *)((int)this_ + 0x53) != '\x11') {
            local_78 = (longlong)(int)(fVar7 * 10.5);
            MB_SetAnimation(lVar8,0x11,0,(int)(fVar7 * 10.5));
          }
          *(undefined1 *)((int)this_ + 0x20) = 0xf;
        }
      }
    }
    else if (bVar1 == 3) {
      uVar9 = FUN_005e8338((double)(local_d0[0].x - *(float *)((int)this_ + 0x10)),
                           (double)(local_d0[0].y - *(float *)((int)this_ + 0x14)));
      OrganicDeltAngSpeed
                (uVar9,(double)*(float *)(uVar14 + 0xfc),(double)*(float *)(uVar14 + 0x100),
                 (double)*(float *)(uVar14 + 0x104),lVar8);
      if ((*(byte *)((int)this_ + 0x70) & 2) != 0) {
        iVar13 = rand();
        iVar12 = iVar13 / 3 + (iVar13 >> 0x1f);
        iVar13 = iVar13 + (iVar12 - (iVar12 >> 0x1f)) * -3;
        if (iVar13 < 1) {
          if ((-1 < iVar13) && (*(char *)((int)this_ + 0x53) != '\x01')) {
            uVar9 = idol::GetAnimDuration(10);
            MB_SetAnimation(lVar8,1,0,uVar9);
          }
        }
        else if (iVar13 < 2) {
          if (*(char *)((int)this_ + 0x53) != '\x03') {
            uVar9 = idol::GetAnimDuration(10);
            MB_SetAnimation(lVar8,3,0,uVar9);
          }
        }
        else if ((iVar13 < 3) && (*(char *)((int)this_ + 0x53) != '\x04')) {
          local_78 = (longlong)(int)(animationSpeed * 10.5);
          MB_SetAnimation(lVar8,4,0,(int)(animationSpeed * 10.5));
        }
      }
      if (local_90 != 0) {
        dVar19 = (double)FUN_005e8588(lVar8 + 0x10,local_d0);
        fVar2 = animationSpeed;
        if ((double)*(float *)(uVar14 + 0x194) <= dVar19) {
          if (((double)*(float *)(uVar14 + 0x150) <= dVar19 || spline == (Spline *)0x0) ||
             ((*(char *)(uVar14 + 399) == '\x01' &&
              (iVar12 = PathFindClosestPnt(0.0,(Vec4 *)(lVar8 + 0x10),spline),
              iVar12 == spline->cnt + -1)))) {
            if (dVar19 < (double)*(float *)(uVar14 + 0x144)) {
              if (*(char *)((int)this_ + 0x53) != '\t') {
                local_78 = (longlong)(int)(animationSpeed * 10.5);
                MB_SetAnimation(lVar8,9,0,(int)(animationSpeed * 10.5));
              }
              *(undefined1 *)((int)this_ + 0x20) = 8;
            }
          }
          else {
            if (*(char *)((int)this_ + 0x53) != '\x06') {
              local_78 = (longlong)(int)(animationSpeed * 10.5);
              MB_SetAnimation(lVar8,6,0,(int)(animationSpeed * 10.5));
            }
            *(undefined1 *)((int)this_ + 0x20) = 5;
          }
        }
        else {
          auVar25 = ZEXT416(0xffffffff);
          auVar26 = auVar25 | auVar25 << 0x20 | auVar25 << 0x40 | auVar25 << 0x60;
          auVar25 = loadVectorLeftIndexed(0x19c,uVar18);
          auVar27 = vectorShiftLeftIntegerWord(auVar26,auVar26);
          auVar26 = loadVectorRightIndexed(0x1ac,uVar18);
          auVar26 = vectorConvertFromSignedFixedPointWord(auVar25 | auVar26,0);
          auVar25 = loadVectorLeftIndexed(0x24,0x41fb48);
          auVar25 = auVar25 >> 0x60 & (GPiece<16>)0xffffffff;
          auVar28 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
          auVar25 = vectorAddFloatingPoint
                              (auVar26,auVar25 | auVar25 << 0x20 | auVar25 << 0x40 | auVar25 << 0x60
                              );
          auVar25 = vectorMultiplyAddFloatingPoint(auVar28,auVar25,auVar27);
          auVar25 = vectorConvertToSignedFixedPointWordSaturate(auVar25,0);
          auVar25 = auVar25 >> 0x60 & (GPiece<16>)0xffffffff;
          uVar10 = storeVectorElementWordIndexed
                             (auVar25 | auVar25 << 0x20 | auVar25 << 0x40 | auVar25 << 0x60,0x17c,
                              uVar18);
          *(undefined4 *)(uVar14 + 0x17c & 0xfffffffc) = uVar10;
          if (*(char *)((int)this_ + 0x53) != '\x11') {
            local_78 = (longlong)(int)(fVar2 * 10.5);
            MB_SetAnimation(lVar8,0x11,0,(int)(fVar2 * 10.5));
          }
          *(undefined1 *)((int)this_ + 0x20) = 0xf;
        }
        if (0 < *(int *)(uVar14 + 0x178)) {
          if (*(char *)((int)this_ + 0x53) != '\x05') {
            local_78 = (longlong)(int)(animationSpeed * 10.5);
            MB_SetAnimation(lVar8,5,0,(int)(animationSpeed * 10.5));
          }
          *(undefined1 *)((int)this_ + 0x20) = 4;
        }
      }
    }
    else if (bVar1 == 2) {
      uVar9 = FUN_005e8338((double)(local_d0[0].x - *(float *)((int)this_ + 0x10)),
                           (double)(local_d0[0].y - *(float *)((int)this_ + 0x14)));
      OrganicDeltAngSpeed
                (uVar9,(double)*(float *)(uVar14 + 0xfc),(double)*(float *)(uVar14 + 0x100),
                 (double)*(float *)(uVar14 + 0x104),lVar8);
      if ((*(byte *)((int)this_ + 0x70) & 2) != 0) {
        dVar19 = (double)FUN_005e8588(lVar8 + 0x10,local_d0);
        if (((*(int *)(uVar14 + 0x17c) == 0) && (local_90 != 0)) &&
           (dVar19 < (double)*(float *)(uVar14 + 0x194))) {
          dVar23 = (double)*(float *)((int)this_ + 0x48);
          dVar20 = (double)FUN_005e8338((double)(local_d0[0].x - *(float *)((int)this_ + 0x10)),
                                        (double)(local_d0[0].y - *(float *)((int)this_ + 0x14)));
          dVar20 = (double)FastSubRots((float)dVar23,(float)dVar20);
          if (dVar20 < (double)(*(float *)(uVar14 + 0x170) * 0.017453292)) {
            uVar10 = idol::GetAnimDuration(*(undefined4 *)(uVar14 + 0x19c));
            *(undefined4 *)(uVar14 + 0x17c) = uVar10;
            if (*(char *)((int)this_ + 0x53) != '\x11') {
              uVar9 = idol::GetAnimDuration(10);
              MB_SetAnimation(lVar8,0x11,0,uVar9);
            }
            *(undefined1 *)((int)this_ + 0x20) = 0xf;
            goto LAB_00421e90;
          }
        }
        if (((*(int *)(uVar14 + 0x17c) == 0) && (local_90 != 0)) &&
           (dVar19 < (double)*(float *)(uVar14 + 0x144))) {
          dVar23 = (double)*(float *)((int)this_ + 0x48);
          dVar20 = (double)FUN_005e8338((double)(local_d0[0].x - *(float *)((int)this_ + 0x10)),
                                        (double)(local_d0[0].y - *(float *)((int)this_ + 0x14)));
          dVar20 = (double)FastSubRots((float)dVar23,(float)dVar20);
          if (dVar20 < (double)(*(float *)(uVar14 + 0x170) * 0.017453292)) {
            if (dVar19 <= (double)*(float *)(uVar14 + 0x150)) {
              if ((spline != (Spline *)0x0) &&
                 ((*(char *)(uVar14 + 399) != '\x01' ||
                  (iVar12 = PathFindClosestPnt(0.0,(Vec4 *)(lVar8 + 0x10),spline),
                  iVar12 != spline->cnt + -1)))) {
                if (*(char *)((int)this_ + 0x53) != '\x06') {
                  uVar9 = idol::GetAnimDuration(10);
                  MB_SetAnimation(lVar8,6,0,uVar9);
                }
                *(undefined1 *)((int)this_ + 0x20) = 5;
              }
            }
            else {
              uVar10 = idol::GetAnimDuration(*(undefined4 *)(uVar14 + 0x160));
              *(undefined4 *)(uVar14 + 0x17c) = uVar10;
              if (*(char *)((int)this_ + 0x53) != '\t') {
                uVar9 = idol::GetAnimDuration(10);
                MB_SetAnimation(lVar8,9,0,uVar9);
              }
              *(undefined1 *)((int)this_ + 0x20) = 8;
            }
            goto LAB_00421e90;
          }
        }
        if (*(int *)(uVar14 + 0x178) < 1) {
          if (*(char *)((int)this_ + 0x53) != '\x01') {
            uVar9 = idol::GetAnimDuration(10);
            MB_SetAnimation(lVar8,1,0,uVar9);
          }
          *(undefined1 *)((int)this_ + 0x20) = 3;
        }
        else {
          if (*(char *)((int)this_ + 0x53) != '\x05') {
            uVar9 = idol::GetAnimDuration(10);
            MB_SetAnimation(lVar8,5,0,uVar9);
          }
          *(undefined1 *)((int)this_ + 0x20) = 4;
        }
      }
    }
    else if (bVar1 == 1) {
      uVar9 = FUN_005e8338((double)(local_d0[0].x - *(float *)((int)this_ + 0x10)),
                           (double)(local_d0[0].y - *(float *)((int)this_ + 0x14)));
      OrganicDeltAngSpeed
                (uVar9,(double)*(float *)(uVar14 + 0xfc),(double)*(float *)(uVar14 + 0x100),
                 (double)*(float *)(uVar14 + 0x104),lVar8);
      if ((((local_90 != 0) &&
           (dVar19 = (double)FUN_005e8588(lVar8 + 0x10,local_d0),
           dVar19 < (double)*(float *)(uVar14 + 0x140))) || (0 < *(int *)(uVar14 + 0x178))) &&
         (*(undefined1 *)((int)this_ + 0x20) = 2, *(char *)((int)this_ + 0x53) != '\x02')) {
        uVar9 = idol::GetAnimDuration(10);
        MB_SetAnimation(lVar8,2,0,uVar9);
      }
    }
    else if (bVar1 == 0) {
      *(ushort *)((int)this_ + 0x34) = *(ushort *)((int)this_ + 0x34) | 0x1000;
      *(undefined1 *)(uVar14 + 0x130) = 0;
      *(undefined1 *)(uVar14 + 0x131) = 0;
      *(undefined1 *)(uVar14 + 0x132) = 0;
      *(undefined1 *)(uVar14 + 0x133) = 0;
      *(undefined1 *)(uVar14 + 0x134) = 0;
      *(undefined1 *)(uVar14 + 0x135) = 0;
      *(undefined1 *)(uVar14 + 0x136) = 0;
      *(undefined1 *)(uVar14 + 0x137) = 0;
      *(undefined1 *)(uVar14 + 0x138) = 0;
      *(undefined1 *)(uVar14 + 0x139) = 0;
      *(undefined1 *)(uVar14 + 0x13a) = 0;
      *(undefined1 *)(uVar14 + 0x13b) = 0;
      *(undefined1 *)(uVar14 + 0x13c) = 0;
      *(undefined1 *)(uVar14 + 0x13d) = 0;
      *(undefined1 *)(uVar14 + 0x13e) = 0;
      *(undefined1 *)(uVar14 + 0x13f) = 0;
      lVar16 = lVar8 + 0x10;
      FUN_005e7e98(auStack_1e0,lVar16);
      FUN_005e7e98(auStack_1f0,lVar16);
      iVar12 = CollLine(auStack_1e0,auStack_1f0,2,lVar8,0);
      if (iVar12 != 0) {
        FUN_005e7e98(lVar16,0xa10960);
        *(float *)((int)this_ + 0x18) = *(float *)((int)this_ + 0x18) + 0.01;
      }
      FUN_005e7e98(uVar18 + 0x120,lVar16);
      if (spline != (Spline *)0x0) {
        iVar12 = PathFindClosestPnt(0.0,(Vec4 *)lVar16,spline);
        *(int *)(uVar14 + 0x180) = iVar12;
      }
      if (*(char *)((int)this_ + 0x53) != '\x01') {
        uVar9 = idol::GetAnimDuration(10);
        MB_SetAnimation(lVar8,1,0,uVar9);
      }
      *(undefined1 *)((int)this_ + 0x20) = 1;
    }
  }
  else if (bVar1 == 0xf) {
    uVar9 = FUN_005e8338((double)(local_d0[0].x - *(float *)((int)this_ + 0x10)),
                         (double)(local_d0[0].y - *(float *)((int)this_ + 0x14)));
    OrganicDeltAngSpeed
              (uVar9,(double)(*(float *)(uVar14 + 0xfc) * 2.0),(double)*(float *)(uVar14 + 0x100),
               (double)*(float *)(uVar14 + 0x104),lVar8,&DAT_0041fb48,uVar18 + 0xd4);
    if ((*(char *)((int)this_ + 0x52) == '\x11') &&
       (dVar19 = (double)BlendAnimFrame((MobyInstance *)this_), 10.0 < dVar19)) {
      GetBonePosition(lVar8,0,local_150);
      GetBonePosition(lVar8,1,local_140);
      FUN_005e7f98(0x3ff0000000000000,local_160,local_160);
      SetCollDamIn((double)*(float *)(uVar14 + 0x198),auStack_100,lVar8,1);
      iVar12 = CollMobySphere((double)*(float *)(uVar14 + 0x16c),local_170);
      if ((iVar12 == 0) &&
         (iVar12 = CollMobySphere((double)*(float *)(uVar14 + 0x16c),local_140),
         iVar12 == 0)) {
        CollMobySphere((double)*(float *)(uVar14 + 0x16c),local_150);
      }
    }
    if ((*(byte *)((int)this_ + 0x70) & 2) != 0) {
      if (*(char *)((int)this_ + 0x53) != '\x01') {
        local_78 = (longlong)(int)(animationSpeed * 10.5);
        MB_SetAnimation(lVar8,1,0,(int)(animationSpeed * 10.5));
      }
      *(undefined1 *)((int)this_ + 0x20) = 3;
    }
  }
  else if (bVar1 == 0xe) {
    uVar14 = MB_UpdateKick((MobyInstance *)this_,(KickVars *)(uVar14 + 0x60));
    if ((uVar14 & 0x40) != 0) {
      MB_genericExplosion
                (0,0,0x4000000000000000,0x3ff0000000000000,0x4010000000000000,0x3ff0000000000000,
                 0x401c000000000000,lVar8,uVar18 + 0x130,0,1,0xffffffffffffffff,3,3,5);
      DeleteMoby((MobyInstance *)this_);
      return;
    }
  }
  else if (bVar1 == 0xd) {
    uVar14 = MB_UpdateKick((MobyInstance *)this_,(KickVars *)(uVar14 + 0x60));
    if ((uVar14 & 1) != 0) {
      if (*(char *)((int)this_ + 0x53) != '\x01') {
        local_78 = (longlong)(int)(animationSpeed * 10.5);
        MB_SetAnimation(lVar8,1,0,(int)(animationSpeed * 10.5));
      }
      *(undefined1 *)((int)this_ + 0x20) = 3;
    }
  }
  else if (bVar1 == 0xc) {
    if ((*(byte *)((int)this_ + 0x70) & 2) != 0) {
      if (*(char *)((int)this_ + 0x53) != '\x01') {
        local_78 = (longlong)(int)(animationSpeed * 10.5);
        MB_SetAnimation(lVar8,1,0,(int)(animationSpeed * 10.5));
      }
      *(undefined1 *)((int)this_ + 0x20) = 3;
    }
  }
  else if (bVar1 == 0xb) {
    if ((*(byte *)((int)this_ + 0x70) & 2) != 0) {
      if (*(char *)((int)this_ + 0x53) != '\x01') {
        local_78 = (longlong)(int)(animationSpeed * 10.5);
        MB_SetAnimation(lVar8,1,0,(int)(animationSpeed * 10.5));
      }
      *(undefined1 *)((int)this_ + 0x20) = 3;
    }
  }
  else if (bVar1 == 10) {
    if ((*(byte *)((int)this_ + 0x70) & 2) != 0) {
      fVar6 = *(float *)((int)this_ + 0x14) - local_d0[0].y;
      fVar7 = *(float *)((int)this_ + 0x10) - local_d0[0].x;
      if (((*(int *)(uVar14 + 0x17c) != 0) || (local_90 == 0)) ||
         (*(float *)(uVar14 + 0x194) <= SQRT(fVar7 * fVar7 + fVar6 * fVar6))) {
        if ((spline == (Spline *)0x0) ||
           ((*(char *)(uVar14 + 399) == '\x01' &&
            (iVar12 = PathFindClosestPnt(0.0,(Vec4 *)((int)this_ + 0x10),spline),
            iVar12 == spline->cnt + -1)))) {
          if (*(char *)((int)this_ + 0x53) != '\x01') {
            local_78 = (longlong)(int)(animationSpeed * 10.5);
            MB_SetAnimation(lVar8,1,0,(int)(animationSpeed * 10.5));
          }
          *(undefined1 *)((int)this_ + 0x20) = 3;
        }
        else {
          if (*(char *)((int)this_ + 0x53) != '\x06') {
            local_78 = (longlong)(int)(animationSpeed * 10.5);
            MB_SetAnimation(lVar8,6,0,(int)(animationSpeed * 10.5));
          }
          *(undefined1 *)((int)this_ + 0x20) = 5;
        }
      }
      else {
        auVar25 = ZEXT416(0xffffffff);
        auVar26 = auVar25 | auVar25 << 0x20 | auVar25 << 0x40 | auVar25 << 0x60;
        auVar25 = loadVectorLeftIndexed(0x19c,uVar18);
        auVar27 = vectorShiftLeftIntegerWord(auVar26,auVar26);
        auVar26 = loadVectorRightIndexed(0x1ac,uVar18);
        auVar26 = vectorConvertFromSignedFixedPointWord(auVar25 | auVar26,0);
        auVar25 = loadVectorLeftIndexed(0x24,0x41fb48);
        auVar25 = auVar25 >> 0x60 & (GPiece<16>)0xffffffff;
        auVar28 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
        auVar25 = vectorAddFloatingPoint
                            (auVar26,auVar25 | auVar25 << 0x20 | auVar25 << 0x40 | auVar25 << 0x60);
        auVar25 = vectorMultiplyAddFloatingPoint(auVar28,auVar25,auVar27);
        auVar25 = vectorConvertToSignedFixedPointWordSaturate(auVar25,0);
        auVar25 = auVar25 >> 0x60 & (GPiece<16>)0xffffffff;
        uVar10 = storeVectorElementWordIndexed
                           (auVar25 | auVar25 << 0x20 | auVar25 << 0x40 | auVar25 << 0x60,0x17c,
                            uVar18);
        *(undefined4 *)(uVar14 + 0x17c & 0xfffffffc) = uVar10;
        if (*(char *)((int)this_ + 0x53) != '\x11') {
          local_78 = (longlong)(int)(fVar2 * 10.5);
          MB_SetAnimation(lVar8,0x11,0,(int)(fVar2 * 10.5));
        }
        *(undefined1 *)((int)this_ + 0x20) = 0xf;
      }
    }
  }
  else if (bVar1 == 9) {
    uVar9 = FUN_005e8338((double)(local_d0[0].x - *(float *)((int)this_ + 0x10)),
                         (double)(local_d0[0].y - *(float *)((int)this_ + 0x14)));
    OrganicDeltAngSpeed
              (uVar9,(double)(*(float *)(uVar14 + 0xfc) * 2.0),(double)*(float *)(uVar14 + 0x100),
               (double)*(float *)(uVar14 + 0x104),lVar8,&DAT_0041fb48,uVar18 + 0xd4);
    fVar2 = animationSpeed;
    if ((*(byte *)((int)this_ + 0x70) & 2) != 0) {
      auVar25 = ZEXT416(0xffffffff);
      auVar25 = auVar25 | auVar25 << 0x20 | auVar25 << 0x40 | auVar25 << 0x60;
      auVar27 = vectorShiftLeftIntegerWord(auVar25,auVar25);
      auVar25 = loadVectorLeftIndexed(0x164,uVar18);
      auVar26 = loadVectorRightIndexed(0x174,uVar18);
      auVar26 = vectorConvertFromSignedFixedPointWord(auVar25 | auVar26,0);
      auVar25 = loadVectorLeftIndexed(0x24,0x41fb48);
      auVar25 = auVar25 >> 0x60 & (GPiece<16>)0xffffffff;
      auVar28 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
      auVar25 = vectorAddFloatingPoint
                          (auVar26,auVar25 | auVar25 << 0x20 | auVar25 << 0x40 | auVar25 << 0x60);
      auVar25 = vectorMultiplyAddFloatingPoint(auVar28,auVar25,auVar27);
      auVar25 = vectorConvertToSignedFixedPointWordSaturate(auVar25,0);
      auVar25 = auVar25 >> 0x60 & (GPiece<16>)0xffffffff;
      uVar10 = storeVectorElementWordIndexed
                         (auVar25 | auVar25 << 0x20 | auVar25 << 0x40 | auVar25 << 0x60,0x17c,uVar18
                         );
      *(undefined4 *)(uVar14 + 0x17c & 0xfffffffc) = uVar10;
      if (*(char *)(uVar14 + 0x18e) == '\0') {
        *(undefined1 *)(uVar14 + 0x18e) = 0;
        if (*(char *)((int)this_ + 0x53) != '\x01') {
          iVar12 = (int)(fVar2 * 10.5);
          local_78 = (longlong)iVar12;
          MB_SetAnimation(lVar8,1,0,iVar12);
        }
        *(undefined1 *)((int)this_ + 0x20) = 3;
      }
      else {
        *(undefined1 *)(uVar14 + 0x18e) = 0;
        if (*(char *)((int)this_ + 0x53) != '\f') {
          iVar12 = (int)(fVar2 * 10.5);
          local_78 = (longlong)iVar12;
          MB_SetAnimation(lVar8,0xc,0,iVar12);
        }
        *(undefined1 *)((int)this_ + 0x20) = 10;
      }
    }
  }
  else if (bVar1 == 8) {
    uVar9 = FUN_005e8338((double)(local_d0[0].x - *(float *)((int)this_ + 0x10)),
                         (double)(local_d0[0].y - *(float *)((int)this_ + 0x14)));
    OrganicDeltAngSpeed
              (uVar9,(double)(*(float *)(uVar14 + 0xfc) * 2.0),(double)*(float *)(uVar14 + 0x100),
               (double)*(float *)(uVar14 + 0x104),lVar8,&DAT_0041fb48,uVar18 + 0xd4);
    if (((*(byte *)((int)this_ + 0x70) & 2) != 0) && (*(char *)((int)this_ + 0x53) != '\n')) {
      local_78 = (longlong)(int)(animationSpeed * 10.5);
      MB_SetAnimation(lVar8,10,0,(int)(animationSpeed * 10.5));
    }
    *(undefined1 *)(uVar14 + 0x130) = 0;
    *(undefined1 *)(uVar14 + 0x131) = 0;
    *(undefined1 *)(uVar14 + 0x132) = 0;
    *(undefined1 *)(uVar14 + 0x133) = 0;
    *(undefined1 *)(uVar14 + 0x134) = 0;
    *(undefined1 *)(uVar14 + 0x135) = 0;
    *(undefined1 *)(uVar14 + 0x136) = 0;
    *(undefined1 *)(uVar14 + 0x137) = 0;
    *(undefined1 *)(uVar14 + 0x138) = 0;
    *(undefined1 *)(uVar14 + 0x139) = 0;
    *(undefined1 *)(uVar14 + 0x13a) = 0;
    *(undefined1 *)(uVar14 + 0x13b) = 0;
    *(undefined1 *)(uVar14 + 0x13c) = 0;
    *(undefined1 *)(uVar14 + 0x13d) = 0;
    *(undefined1 *)(uVar14 + 0x13e) = 0;
    *(undefined1 *)(uVar14 + 0x13f) = 0;
    fVar7 = animationSpeed;
    fVar2 = *(float *)((int)this_ + 0x14) - local_d0[0].y;
    fVar6 = *(float *)((int)this_ + 0x10) - local_d0[0].x;
    if (*(float *)(uVar14 + 0x194) <= SQRT(fVar6 * fVar6 + fVar2 * fVar2)) {
      iVar12 = FastDecTimerS32(uVar18 + 0x17c);
      if ((iVar12 != 0) && (*(char *)((int)this_ + 0x52) == '\n')) {
        dVar20 = (double)*(float *)((int)this_ + 0x48);
        dVar19 = (double)FUN_005e8338((double)(local_d0[0].x - *(float *)((int)this_ + 0x10)),
                                      (double)(local_d0[0].y - *(float *)((int)this_ + 0x14)));
        dVar19 = (double)FastSubRots((float)dVar20,(float)dVar19);
        dVar20 = 0.01745329238474369;
        if (dVar19 < (double)(*(float *)(uVar14 + 0x170) * 0.017453292)) {
          fVar2 = *(float *)((int)this_ + 0x14) - local_d0[0].y;
          fVar6 = *(float *)((int)this_ + 0x10) - local_d0[0].x;
          if (*(float *)(uVar14 + 0x144) <= SQRT(fVar6 * fVar6 + fVar2 * fVar2)) {
            if (*(char *)((int)this_ + 0x53) != '\x01') {
              local_78 = (longlong)(int)(animationSpeed * 10.5);
              MB_SetAnimation(lVar8,1,0,(int)(animationSpeed * 10.5));
            }
            *(undefined1 *)((int)this_ + 0x20) = 3;
          }
          else {
            *(undefined1 *)(uVar14 + 0x130) = 0;
            *(undefined1 *)(uVar14 + 0x131) = 0;
            *(undefined1 *)(uVar14 + 0x132) = 0;
            *(undefined1 *)(uVar14 + 0x133) = 0;
            *(undefined1 *)(uVar14 + 0x134) = 0;
            *(undefined1 *)(uVar14 + 0x135) = 0;
            *(undefined1 *)(uVar14 + 0x136) = 0;
            *(undefined1 *)(uVar14 + 0x137) = 0;
            *(undefined1 *)(uVar14 + 0x138) = 0;
            *(undefined1 *)(uVar14 + 0x139) = 0;
            *(undefined1 *)(uVar14 + 0x13a) = 0;
            *(undefined1 *)(uVar14 + 0x13b) = 0;
            *(undefined1 *)(uVar14 + 0x13c) = 0;
            *(undefined1 *)(uVar14 + 0x13d) = 0;
            *(undefined1 *)(uVar14 + 0x13e) = 0;
            *(undefined1 *)(uVar14 + 0x13f) = 0;
            if (*(char *)((int)this_ + 0x53) != '\v') {
              local_78 = (longlong)(int)(animationSpeed * 10.5);
              MB_SetAnimation(lVar8,0xb,0,(int)(animationSpeed * 10.5));
            }
            *(undefined1 *)((int)this_ + 0x20) = 9;
            *(undefined4 *)((int)this_ + 0x58) = 0x3f666666;
            *(undefined1 *)(uVar14 + 0x18e) = 0;
            dVar19 = (double)FastIntToDouble(*(undefined1 *)(uVar14 + 0x18c));
            dVar24 = (double)(float)((double)(float)((double)*(float *)(uVar14 + 0x184) * dVar20) /
                                    dVar19);
            GetBonePosition(lVar8,0,local_1b0);
            dVar22 = 0.0;
            dVar23 = 1.0;
            FUN_005e7f98(0x3ff0000000000000,local_180,local_180);
            SetCollDamIn((double)*(float *)(uVar14 + 0x168),auStack_130,lVar8,1);
            CollMobySphere((double)*(float *)(uVar14 + 0x16c),local_1b0);
            dVar20 = (double)FastWrapRot
                                       (*(float *)((int)this_ + 0x48),
                                        *(float *)(uVar14 + 0x184) * -0.017453292 * 0.5);
            if (dVar22 < dVar19) {
              lVar16 = uVar18 + 0x18e;
              dVar21 = 0.25;
              do {
                dVar20 = (double)FastWrapRot((float)dVar20,(float)dVar24);
                cosf((float)dVar20);
                FUN_005e8128(dVar20);
                FUN_005e7f98((double)(*(float *)(uVar14 + 400) * g_FrameTime),local_1a0,
                             local_1a0);
                iVar12 = *(int *)(uVar14 + 0x1a8);
                if (iVar12 == 4) {
                  FUN_00495778((double)*(float *)(uVar14 + 0x158),dVar23,dVar21,lVar8,local_190,
                               local_1a0,3,lVar16);
                }
                else if (iVar12 == 3) {
                  FUN_00495778((double)*(float *)(uVar14 + 0x158),dVar23,dVar21,lVar8,local_190,
                               local_1a0,2,lVar16);
                }
                else if (iVar12 == 2) {
                  FUN_00495778((double)*(float *)(uVar14 + 0x158),dVar23,
                               (double)(float)((double)*(float *)((int)this_ + 0x18) + dVar21),lVar8,
                               local_190,local_1a0,1,lVar16);
                }
                else if (iVar12 == 1) {
                  FUN_00495778((double)*(float *)(uVar14 + 0x158),dVar23,dVar21,lVar8,local_190,
                               local_1a0,0,lVar16);
                }
                else if (iVar12 == 0) {
                  FUN_003487b8((double)*(float *)(uVar14 + 0x188),(double)*(float *)(uVar14 + 0x158)
                               ,(double)*(float *)(uVar14 + 0x1ac),lVar8);
                }
                dVar22 = (double)(float)(dVar22 + dVar23);
              } while (dVar22 < dVar19);
            }
          }
        }
      }
    }
    else {
      auVar25 = ZEXT416(0xffffffff);
      auVar26 = auVar25 | auVar25 << 0x20 | auVar25 << 0x40 | auVar25 << 0x60;
      auVar25 = loadVectorLeftIndexed(0x19c,uVar18);
      auVar27 = vectorShiftLeftIntegerWord(auVar26,auVar26);
      auVar26 = loadVectorRightIndexed(0x1ac,uVar18);
      auVar26 = vectorConvertFromSignedFixedPointWord(auVar25 | auVar26,0);
      auVar25 = loadVectorLeftIndexed(0x24,0x41fb48);
      auVar25 = auVar25 >> 0x60 & (GPiece<16>)0xffffffff;
      auVar28 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
      auVar25 = vectorAddFloatingPoint
                          (auVar26,auVar25 | auVar25 << 0x20 | auVar25 << 0x40 | auVar25 << 0x60);
      auVar25 = vectorMultiplyAddFloatingPoint(auVar28,auVar25,auVar27);
      auVar25 = vectorConvertToSignedFixedPointWordSaturate(auVar25,0);
      auVar25 = auVar25 >> 0x60 & (GPiece<16>)0xffffffff;
      uVar10 = storeVectorElementWordIndexed
                         (auVar25 | auVar25 << 0x20 | auVar25 << 0x40 | auVar25 << 0x60,0x17c,uVar18
                         );
      *(undefined4 *)(uVar14 + 0x17c & 0xfffffffc) = uVar10;
      if (*(char *)((int)this_ + 0x53) != '\x11') {
        local_78 = (longlong)(int)(fVar7 * 5.5);
        MB_SetAnimation(lVar8,0x11,0,(int)(fVar7 * 5.5));
      }
      *(undefined1 *)((int)this_ + 0x20) = 0xf;
    }
  }
LAB_00421e90:
  MB_RegisterLameShadow(0.5,(MobyInstance *)this_);
  return;
}


