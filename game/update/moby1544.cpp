// game/update/moby1544.cpp -- reconstructed from NPEA00385 EBOOT
// STATUS: NOT STARTED (raw Ghidra output)
// 5 functions, 0x296444-0x29739c
#include "game/update/moby1544.h"
#include "game/camera.h"
#include "game/hero.h"
#include "game/mobyfunc.h"
#include "game/mobyutil.h"
#include "game/partupd.h"
#include "idol/fastfunc.h"

// 0x0296444 (0x14 bytes)
void M1544_00296444(void)

{
  DAT_007ab68c = 0x10000;
  return;
}


// 0x0296468 (0x374 bytes)
void M1544_00296468(float *param_1,undefined2 *param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int iVar8;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined2 uVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  GPiece<16> local_a0;
  GPiece<16> local_90;
  GPiece<32> auStack_80;
  
  if (SQRT((GameCamera.posZ - param_1[2]) * (GameCamera.posZ - param_1[2]) +
           (GameCamera.posX - *param_1) * (GameCamera.posX - *param_1) +
           (GameCamera.posY - param_1[1]) * (GameCamera.posY - param_1[1])) <= 32.0) {
    iVar8 = FastCheckBsphereInView(local_a0);
    if (((iVar8 != -1) || (iVar8 = MB_randInt(3), iVar8 == 0)) &&
       (iVar8 = FastDecTimerS16(param_2), iVar8 != 0)) {
      dVar11 = 0.0;
      MB_randSphere(0,(double)(DAT_007ab708 * g_FrameTime),auStack_80);
      MB_randRangeFloat(DAT_007ab70c,DAT_007ab710);
      MB_randRangeFloat(DAT_007ab714,DAT_007ab718);
      dVar12 = 1.0;
      dVar10 = (double)MB_randRangeFloat(1.0 - DAT_007ab728,DAT_007ab728 + 1.0);
      uVar3 = FastDoubleToInt((double)(float)((double)(longlong)DAT_007ab71c * dVar10));
      uVar4 = FastDoubleToInt((double)(float)((double)(longlong)DAT_007ab720 * dVar10));
      uVar5 = FastDoubleToInt((double)(float)((double)(longlong)DAT_007ab724 * dVar10));
      uVar2 = DAT_007ab730;
      uVar1 = DAT_007ab72c;
      MB_randRangeFloat((float)dVar11,(float)dVar12);
      uVar6 = FastLerpColor(uVar1,uVar2);
      uVar2 = DAT_007ab738;
      uVar1 = DAT_007ab734;
      MB_randRangeFloat((float)dVar11,(float)dVar12);
      uVar7 = FastLerpColor(uVar1,uVar2);
      SpawnPart_2(param_1,local_90,auStack_80,uVar6,uVar7,uVar3,uVar4,uVar5);
      MB_randRangeFloat((float)(longlong)DAT_007ab73c,(float)(longlong)DAT_007ab740);
      uVar9 = FastDoubleToInt();
      *param_2 = uVar9;
    }
  }
  return;
}


// 0x02967f0 (0x420 bytes)
void M1544_002967f0
               (double param_1,undefined4 param_2,undefined8 param_3,undefined2 *param_4,
               short *param_5)

{
  undefined4 uVar1;
  undefined4 uVar2;
  short sVar9;
  int iVar8;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined2 uVar10;
  double dVar11;
  double dVar12;
  GPiece<16> local_a0;
  GPiece<16> local_90;
  GPiece<32> auStack_80;
  
  if (*param_5 < 0) {
    sVar9 = *param_5 + 1;
    *param_5 = sVar9;
    if (sVar9 != 0) {
      return;
    }
    MB_randRangeFloat((float)(longlong)DAT_007ab780,(float)(longlong)DAT_007ab784);
    sVar9 = FastDoubleToInt();
    *param_5 = sVar9;
  }
  else {
    iVar8 = FastDecTimerS16(param_5);
    if (iVar8 != 0) {
      MB_randRangeFloat((float)(longlong)DAT_007ab788,(float)(longlong)DAT_007ab78c);
      sVar9 = FastDoubleToInt();
      *param_5 = -sVar9;
      return;
    }
  }
  iVar8 = FastCheckBsphereInView(0x4040000000000000,local_a0);
  if ((iVar8 != -1) && (iVar8 = FastDecTimerS16(param_4), iVar8 != 0)) {
    dVar12 = 1.0;
    dVar11 = (double)MB_randRangeFloat(1.0 - DAT_007ab764,DAT_007ab764 + 1.0);
    uVar3 = FastDoubleToInt((double)(float)((double)(longlong)DAT_007ab75c * dVar11));
    uVar4 = FastDoubleToInt((double)(float)((double)(longlong)DAT_007ab760 * dVar11));
    uVar5 = FastDoubleToInt
                      ((double)(float)((double)(SQRT((float)(param_1 * 2.0) /
                                                     (DAT_007ab744 * DAT_0071f418)) * DAT_007ab794)
                                      * dVar11));
    dVar11 = 0.0;
    MB_randSphere(0,(double)(DAT_007ab748 * g_FrameTime),auStack_80);
    MB_randRangeFloat(DAT_007ab74c,DAT_007ab750);
    MB_randRangeFloat(DAT_007ab754,DAT_007ab758);
    uVar2 = DAT_007ab76c;
    uVar1 = DAT_007ab768;
    MB_randRangeFloat((float)dVar11,(float)dVar12);
    uVar6 = FastLerpColor(uVar1,uVar2);
    uVar2 = DAT_007ab774;
    uVar1 = DAT_007ab770;
    MB_randRangeFloat((float)dVar11,(float)dVar12);
    uVar7 = FastLerpColor(uVar1,uVar2);
    SpawnPart_2(param_2,local_90,auStack_80,uVar6,uVar7,uVar3,uVar5,uVar4);
    MB_randRangeFloat((float)(longlong)DAT_007ab778,(float)(longlong)DAT_007ab77c);
    uVar10 = FastDoubleToInt();
    *param_4 = uVar10;
  }
  return;
}


// 0x0296c20 (0x440 bytes)
void M1544_00296c20(float *param_1,undefined2 *param_2,short *param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  short sVar9;
  int iVar8;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined2 uVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  GPiece<16> local_a0;
  GPiece<16> local_90;
  GPiece<32> auStack_80;
  
  if (*param_3 < 0) {
    sVar9 = *param_3 + 1;
    *param_3 = sVar9;
    if (sVar9 != 0) {
      return;
    }
    MB_randRangeFloat((float)(longlong)DAT_007ab6f4,(float)(longlong)DAT_007ab6f8);
    sVar9 = FastDoubleToInt();
    *param_3 = sVar9;
  }
  else {
    iVar8 = FastDecTimerS16(param_3);
    if (iVar8 != 0) {
      MB_randRangeFloat((float)(longlong)DAT_007ab6fc,(float)(longlong)DAT_007ab700);
      sVar9 = FastDoubleToInt();
      *param_3 = -sVar9;
      return;
    }
  }
  if ((SQRT((GameCamera.posZ - param_1[2]) * (GameCamera.posZ - param_1[2]) +
            (GameCamera.posX - *param_1) * (GameCamera.posX - *param_1) +
            (GameCamera.posY - param_1[1]) * (GameCamera.posY - param_1[1])) <= 32.0) &&
     (((iVar8 = FastCheckBsphereInView(local_a0), iVar8 != -1 ||
       (iVar8 = MB_randInt(3), iVar8 == 0)) &&
      (iVar8 = FastDecTimerS16(param_2), iVar8 != 0)))) {
    dVar13 = 0.0;
    MB_randSphere(0,(double)(DAT_007ab6b8 * g_FrameTime),auStack_80);
    MB_randRangeFloat(DAT_007ab6bc,DAT_007ab6c0);
    MB_randRangeFloat(DAT_007ab6c4,DAT_007ab6c8);
    dVar12 = 1.0;
    dVar11 = (double)MB_randRangeFloat(1.0 - DAT_007ab6d8,DAT_007ab6d8 + 1.0);
    uVar3 = FastDoubleToInt((double)(float)((double)(longlong)DAT_007ab6cc * dVar11));
    uVar4 = FastDoubleToInt((double)(float)((double)(longlong)DAT_007ab6d0 * dVar11));
    uVar5 = FastDoubleToInt((double)(float)((double)(longlong)DAT_007ab6d4 * dVar11));
    uVar2 = DAT_007ab6e0;
    uVar1 = DAT_007ab6dc;
    MB_randRangeFloat((float)dVar13,(float)dVar12);
    uVar6 = FastLerpColor(uVar1,uVar2);
    uVar2 = DAT_007ab6e8;
    uVar1 = DAT_007ab6e4;
    MB_randRangeFloat((float)dVar13,(float)dVar12);
    uVar7 = FastLerpColor(uVar1,uVar2);
    SpawnPart_2(param_1,local_90,auStack_80,uVar6,uVar7,uVar3,uVar4,uVar5);
    MB_randRangeFloat((float)(longlong)DAT_007ab6ec,(float)(longlong)DAT_007ab6f0);
    uVar10 = FastDoubleToInt();
    *param_2 = uVar10;
  }
  return;
}


// 0x0297068 (0x334 bytes)
/* Moby 1544 */

void UpdateMoby_1544(void *this_,MobyInstance *moby)

{
  byte bVar1;
  longlong lVar2;
  Spline *pSVar3;
  int iVar4;
  int iVar5;
  int *piVar6;
  double dVar7;
  undefined8 uVar8;
  
  lVar2 = (longlong)(int)this_;
  bVar1 = *(byte *)((int)this_ + 0x20);
  piVar6 = *(int **)((int)this_ + 0x78);
  if (bVar1 < 2) {
    if (bVar1 == 0) {
      iVar4 = *piVar6;
      if (iVar4 < 1) {
        if (-1 < iVar4) {
          *(undefined1 *)((int)this_ + 0x20) = 1;
        }
      }
      else if (iVar4 < 2) {
        if (piVar6[1] == -1) {
          dVar7 = (double)GetGroundZ(0x3fe0000000000000,lVar2 + 0x10,0);
          piVar6[0x22] = (int)(float)dVar7;
        }
        else {
          iVar5 = 0;
          iVar4 = Splines[piVar6[1]]->cnt;
          iVar4 = iVar4 + ((uint)(0x20 - (longlong)iVar4 >> 0x3f) & 0x20U - iVar4);
          if (0 < iVar4) {
            uVar8 = 0x3fe0000000000000;
            pSVar3 = Splines[piVar6[1]];
            do {
              dVar7 = (double)GetGroundZ(uVar8,pSVar3->points,0);
              iVar5 = iVar5 + 1;
              pSVar3->points[0].w = (float)dVar7;
              pSVar3 = (Spline *)pSVar3->points;
            } while (iVar5 < iVar4);
          }
        }
        *(undefined1 *)((int)this_ + 0x20) = 2;
      }
      else if (iVar4 < 3) {
        *(undefined1 *)((int)this_ + 0x20) = 3;
      }
    }
    else if (piVar6[1] == -1) {
      M1544_00296c20(lVar2 + 0x10,piVar6 + 2,piVar6 + 0x12);
    }
    else {
      iVar5 = 0;
      pSVar3 = Splines[piVar6[1]];
      iVar4 = pSVar3->cnt;
      iVar4 = iVar4 + ((uint)(0x20 - (longlong)iVar4 >> 0x3f) & 0x20U - iVar4);
      if (0 < iVar4) {
        do {
          pSVar3 = (Spline *)pSVar3->points;
          M1544_00296c20(pSVar3,piVar6 + 2,piVar6 + 0x12);
          iVar5 = iVar5 + 1;
          piVar6 = (int *)((int)piVar6 + 2);
        } while (iVar5 < iVar4);
      }
    }
  }
  else if (bVar1 < 3) {
    if (piVar6[1] == -1) {
      M1544_002967f0
                ((double)(float)piVar6[0x22],lVar2 + 0x10,moby,piVar6 + 2,piVar6 + 0x12);
    }
    else {
      iVar5 = 0;
      iVar4 = Splines[piVar6[1]]->cnt;
      iVar4 = iVar4 + ((uint)(0x20 - (longlong)iVar4 >> 0x3f) & 0x20U - iVar4);
      pSVar3 = Splines[piVar6[1]];
      if (0 < iVar4) {
        do {
          M1544_002967f0
                    ((double)pSVar3->points[0].w,pSVar3->points,pSVar3,piVar6 + 2,piVar6 + 0x12);
          iVar5 = iVar5 + 1;
          piVar6 = (int *)((int)piVar6 + 2);
          pSVar3 = (Spline *)pSVar3->points;
        } while (iVar5 < iVar4);
      }
    }
  }
  else if (bVar1 < 4) {
    if (piVar6[1] == -1) {
      M1544_00296468(lVar2 + 0x10,piVar6 + 2);
    }
    else {
      iVar5 = 0;
      pSVar3 = Splines[piVar6[1]];
      iVar4 = pSVar3->cnt;
      iVar4 = iVar4 + ((uint)(0x20 - (longlong)iVar4 >> 0x3f) & 0x20U - iVar4);
      if (0 < iVar4) {
        do {
          pSVar3 = (Spline *)pSVar3->points;
          M1544_00296468(pSVar3,piVar6 + 2);
          iVar5 = iVar5 + 1;
          piVar6 = (int *)((int)piVar6 + 2);
        } while (iVar5 < iVar4);
      }
    }
  }
  return;
}


