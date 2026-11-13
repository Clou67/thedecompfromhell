// game/update/camera13.cpp -- reconstructed from NPEA00385 EBOOT
// STATUS: NOT STARTED (raw Ghidra output)
// 12 functions, 0x39294-0x3a810
#include "game/update/camera13.h"
#include "game/camera.h"
#include "game/collproc.h"
#include "game/hero.h"
#include "game/mobyfunc.h"
#include "game/mobyutil.h"
#include "game/pad.h"
#include "game/update/camera0.h"
#include "idol/fastfunc.h"

// 0x0039294 (0x14 bytes)
void SECTION_HEADER_CAMERA13(void)

{
  DAT_0071d81c = 0x10000;
  return;
}


// 0x00392c8 (0x114 bytes)
void Cam13_000392c8(int param_1)

{
  float fVar1;
  int iVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  
  iVar2 = *(int *)(param_1 + 0x70);
  dVar6 = (double)Cam_InterpAngles((double)*(float *)(iVar2 + 0xa4),(double)DAT_0096a1c4,
                                   (double)DAT_0071d840,(double)DAT_0071d844,0,&g_heroMtx,
                                   &DAT_00720000,iVar2 + 0xa8);
  *(float *)(iVar2 + 0xa4) = (float)dVar6;
  fVar1 = (float)(dVar6 + 1.570796251296997);
  dVar8 = (double)(float)(3.141592502593994 - dVar6);
  if (dVar6 - (double)(float)(3.141592502593994 - dVar6) < 0.0) {
    dVar8 = dVar6;
  }
  fVar3 = 3.1415925 - fVar1;
  if (fVar1 - (3.1415925 - fVar1) < 0.0) {
    fVar3 = fVar1;
  }
  dVar7 = (double)(float)(-3.141592502593994 - dVar6);
  if ((double)(float)(-3.141592502593994 - dVar6) - dVar8 < 0.0) {
    dVar7 = dVar8;
  }
  *(undefined4 *)(iVar2 + 0x78) = 0;
  fVar4 = -3.1415925 - fVar1;
  if ((-3.1415925 - fVar1) - fVar3 < 0.0) {
    fVar4 = fVar3;
  }
  dVar6 = (double)(float)(dVar7 * dVar7);
  fVar5 = fVar4 * fVar4;
  dVar9 = (double)(float)(dVar6 * (double)(float)(dVar6 * dVar7));
  fVar1 = fVar5 * fVar5 * fVar4;
  dVar8 = (double)(float)(dVar6 * dVar9);
  fVar3 = fVar5 * fVar1;
  *(float *)(iVar2 + 0x74) =
       (float)(dVar6 * dVar8) * 2.601887e-06 +
       (float)(dVar8 * -0.0001980741071747616 +
              (double)(float)(dVar9 * 0.008333025500178337 +
                             (double)(float)((double)(float)(dVar6 * dVar7) * -0.16666656732559204 +
                                            dVar7)));
  *(float *)(iVar2 + 0x70) =
       fVar5 * fVar3 * 2.601887e-06 +
       fVar3 * -0.0001980741 + fVar1 * 0.0083330255 + fVar5 * fVar4 * -0.16666657 + fVar4;
  return;
}


// 0x00393e8 (0x100 bytes)
void ____Cam13_InterpPosToHero(float *param_1)

{
  float fVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  float fVar5;
  
  fVar1 = param_1[0x1c];
  dVar4 = 0.004999999888241291;
  dVar3 = 0.20000000298023224;
  dVar2 = 0.0;
  fVar5 = Cam_InterpValues(*(float *)((int)fVar1 + 0x30),g_heroPosition.x,0.005,0.2,0.0,param_1);
  *(float *)((int)fVar1 + 0x30) = fVar5;
  fVar5 = Cam_InterpValues(*(float *)((int)fVar1 + 0x34),g_heroPosition.y,(float)dVar4,(float)dVar3,
                           (float)dVar2,param_1);
  *(float *)((int)fVar1 + 0x34) = fVar5;
  fVar5 = Cam_InterpValues(*(float *)((int)fVar1 + 0x38),g_heroPosition.z,(float)dVar4,(float)dVar3,
                           (float)dVar2,param_1);
  *(float *)((int)fVar1 + 0x30) = g_heroFrameMove.x + *(float *)((int)fVar1 + 0x30);
  *(float *)((int)fVar1 + 0x34) = g_heroFrameMove.y + *(float *)((int)fVar1 + 0x34);
  *(float *)((int)fVar1 + 0x38) = g_heroFrameMove.z + fVar5;
  *(undefined4 *)((int)fVar1 + 0x3c) = g_heroFrameMove.w;
  return;
}


// 0x00394e8 (0xa0 bytes)
void Cam13_000394e8(int param_1,float *param_2)

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
  int iVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  
  iVar11 = *(int *)(param_1 + 0x70);
  fVar1 = *(float *)(iVar11 + 0x54);
  fVar2 = *(float *)(iVar11 + 0x30);
  fVar3 = *(float *)(iVar11 + 0x34);
  fVar12 = (float)GameCamera.camStatics.heroUpActual.x * fVar1;
  fVar4 = *(float *)(iVar11 + 0x38);
  fVar21 = (float)GameCamera.camStatics.heroUpActual.y * fVar1;
  fVar1 = (float)GameCamera.camStatics.heroUpActual.z * fVar1;
  fVar5 = *(float *)(iVar11 + 0x70);
  fVar6 = *(float *)(iVar11 + 0x74);
  fVar7 = *(float *)(iVar11 + 0x78);
  fVar8 = *(float *)(iVar11 + 0x60);
  fVar19 = (float)GameCamera.camStatics.heroUpActual.y * fVar5;
  fVar17 = (float)GameCamera.camStatics.heroUpActual.z * fVar6;
  fVar9 = *(float *)(iVar11 + 0x68);
  fVar13 = (float)GameCamera.camStatics.heroUpActual.x * fVar7;
  fVar10 = *(float *)(iVar11 + 100);
  fVar14 = (float)GameCamera.camStatics.heroUpActual.x * fVar6;
  fVar20 = (float)GameCamera.camStatics.heroUpActual.y * fVar7;
  fVar18 = (float)GameCamera.camStatics.heroUpActual.z * fVar5;
  fVar15 = (float)GameCamera.camStatics.heroUpActual.x * fVar9;
  fVar16 = (float)GameCamera.camStatics.heroUpActual.y * fVar9;
  fVar9 = (float)GameCamera.camStatics.heroUpActual.z * fVar9;
  param_2[3] = *(float *)(iVar11 + 0x3c);
  *param_2 = (fVar20 - fVar17) * fVar10 + fVar15 + fVar5 * fVar8 + fVar12 + fVar2;
  param_2[1] = (fVar18 - fVar13) * fVar10 + fVar16 + fVar6 * fVar8 + fVar21 + fVar3;
  param_2[2] = (fVar14 - fVar19) * fVar10 + fVar9 + fVar7 * fVar8 + fVar1 + fVar4;
  return;
}


// 0x00395c0 (0x6b0 bytes)
// inlined: FastRSqrt @0x3991c, FastRSqrt @0x39a68, FastRSqrt @0x39af4, FastRSqrt @0x39b58
// strings: 000395a8: '@tvE_q' (raw) | 00039978: '<`<#W$' (raw)

void Cam13_000395c0(int param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  undefined4 uVar4;
  float fVar5;
  int iVar6;
  float fVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  float *speed;
  int iVar11;
  float *outQuat;
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
  undefined8 uVar22;
  float fVar23;
  float fVar24;
  undefined4 local_c0;
  undefined4 local_bc;
  undefined4 local_b8;
  undefined4 local_b4;
  GPiece<16> local_b0;
  
  fVar5 = g_Pad.sticks.x;
  iVar6 = *(int *)(param_1 + 0x70);
  uVar22 = 0x3fd0000000000000;
  outQuat = (float *)(iVar6 + 0x60);
  dVar21 = (double)*(float *)(iVar6 + 0x60);
  dVar20 = (double)*(float *)(iVar6 + 100);
  dVar19 = (double)*(float *)(iVar6 + 0x68);
  dVar18 = (double)*(float *)(iVar6 + 0x6c);
  dVar16 = (double)g_Pad.sticks.x;
  speed = (float *)STUB_0002ed78((double)*(float *)(iVar6 + 0x90),0x3fd0000000000000,param_1,
                                       iVar6 + 0xb0);
  dVar14 = 0.009999999776482582;
  dVar13 = 0.20000000298023224;
  dVar17 = 0.0;
  fVar23 = Cam_InterpValues(*(float *)(iVar6 + 0x90),(float)dVar16,0.01,0.2,0.0,speed);
  *(float *)(iVar6 + 0x90) = fVar23;
  dVar12 = 0.03490658476948738;
  dVar16 = 1.0;
  MB_RotateQuatAxisAngle(fVar23 * 0.034906585,outQuat,outQuat);
  fVar23 = g_Pad.sticks.y;
  fVar24 = Cam_InterpValues(*(float *)(iVar6 + 0x98),g_Pad.sticks.y,(float)dVar14,(float)dVar13,
                            (float)dVar17,&g_Pad.sticks.x);
  dVar15 = (double)(float)((double)fVar24 * dVar12);
  *(float *)(iVar6 + 0x98) = fVar24;
  dVar13 = (double)FastWrapRot(*(float *)(iVar6 + 0xa0),(float)((double)fVar24 * dVar12));
  dVar14 = ABS(dVar13);
  dVar12 = dVar17;
  if (dVar14 <= 0.7853981852531433) {
    if (0.5235987901687622 < dVar14) {
      fVar24 = (float)(dVar15 * (double)(ABS((float)(0.7853981852531433 - dVar14)) * 3.8197186));
      dVar15 = (double)fVar24;
      dVar13 = (double)FastWrapRot(*(float *)(iVar6 + 0xa0),fVar24);
      dVar12 = dVar17;
    }
    *(float *)(iVar6 + 0xa0) = (float)dVar13;
    dVar17 = dVar15;
  }
  MB_RotateQuatAxisAngle((float)dVar17,outQuat,outQuat);
  if ((*(int *)(iVar6 + 0x90) != 0) || (*(int *)(iVar6 + 0x98) != 0)) {
    if (speed == (float *)0x0) {
      Cam13_000394e8(param_1,&local_c0);
      dVar14 = (double)*(float *)(param_1 + 0x30);
      dVar13 = (double)*(float *)(param_1 + 0x34);
      dVar17 = (double)*(float *)(param_1 + 0x38);
      dVar15 = (double)*(float *)(param_1 + 0x3c);
      *(undefined4 *)(param_1 + 0x30) = local_c0;
      *(undefined4 *)(param_1 + 0x34) = local_bc;
      *(undefined4 *)(param_1 + 0x38) = local_b8;
      *(undefined4 *)(param_1 + 0x3c) = local_b4;
      iVar11 = STUB_0002ed78((double)*(float *)(iVar6 + 0x90),uVar22,param_1,iVar6 + 0xb0);
      if (iVar11 == 1) {
        *(float *)(iVar6 + 0x60) = (float)dVar21;
        *(float *)(iVar6 + 100) = (float)dVar20;
        *(float *)(iVar6 + 0x68) = (float)dVar19;
        *(float *)(iVar6 + 0x6c) = (float)dVar18;
        *(float *)(param_1 + 0x30) = (float)dVar14;
        *(float *)(param_1 + 0x34) = (float)dVar13;
        *(float *)(param_1 + 0x38) = (float)dVar17;
        *(float *)(param_1 + 0x3c) = (float)dVar15;
      }
    }
    iVar11 = *(int *)(param_1 + 0x70);
    if ((0x3c23d70a < (*(uint *)(iVar6 + 0x90) & 0x7fffffff)) ||
       (0x3c23d70a < (*(uint *)(iVar6 + 0x98) & 0x7fffffff))) {
      fVar24 = *(float *)(iVar11 + 0x54);
      fVar3 = ((float)GameCamera.camStatics.heroUpActual.y * fVar24 + *(float *)(iVar11 + 0x34)) -
              *(float *)(param_1 + 0x34);
      fVar7 = ((float)GameCamera.camStatics.heroUpActual.x * fVar24 + *(float *)(iVar11 + 0x30)) -
              *(float *)(param_1 + 0x30);
      fVar24 = ((float)GameCamera.camStatics.heroUpActual.z * fVar24 + *(float *)(iVar11 + 0x38)) -
               *(float *)(param_1 + 0x38);
      uVar4 = *(undefined4 *)(iVar11 + 0x3c);
      dVar15 = (double)(fVar24 * fVar24 + fVar7 * fVar7 + fVar3 * fVar3);
      dVar17 = dVar12;
      dVar13 = dVar12;
      dVar14 = dVar12;
      if ((double)(float)SQRT(dVar15) != dVar12) {
        dVar17 = 1.0 / SQRT(dVar15);
        dVar17 = (double)(float)(-(double)(float)((double)(float)(dVar15 * dVar17) * dVar17 - dVar16
                                                 ) * (double)(float)(dVar17 * 0.5) + dVar17);
        dVar17 = (double)(float)(-(double)(float)((double)(float)(dVar15 * dVar17) * dVar17 - dVar16
                                                 ) * (double)(float)(dVar17 * 0.5) + dVar17);
        fVar1 = (float)(-(double)(float)((double)(float)(dVar15 * dVar17) * dVar17 - dVar16) *
                        (double)(float)(dVar17 * 0.5) + dVar17);
        dVar14 = (double)(fVar7 * fVar1);
        dVar13 = (double)(fVar3 * fVar1);
        dVar17 = (double)(fVar24 * fVar1);
      }
      *(float *)(iVar6 + 0x80) = (float)dVar14;
      *(float *)(iVar6 + 0x84) = (float)dVar13;
      *(float *)(iVar6 + 0x88) = (float)dVar17;
      *(undefined4 *)(iVar6 + 0x8c) = uVar4;
    }
  }
  if (((uint)ABS(fVar5) < 0x3c23d70a) && ((uint)ABS(fVar23) < 0x3c23d70a)) {
    dVar18 = 0.5;
    MB_QuatBetweenVecs(0x3fa99999a0000000,outQuat,outQuat,local_b0,&DAT_00039588,0);
    uVar10 = GameCamera.camStatics.heroUpActual.z;
    uVar9 = GameCamera.camStatics.heroUpActual.y;
    uVar8 = GameCamera.camStatics.heroUpActual.x;
    iVar11 = *(int *)(param_1 + 0x70);
    fVar5 = *(float *)(iVar11 + 0x54);
    fVar3 = ((float)GameCamera.camStatics.heroUpActual.y * fVar5 + *(float *)(iVar11 + 0x34)) -
            *(float *)(param_1 + 0x34);
    fVar7 = ((float)GameCamera.camStatics.heroUpActual.x * fVar5 + *(float *)(iVar11 + 0x30)) -
            *(float *)(param_1 + 0x30);
    fVar1 = ((float)GameCamera.camStatics.heroUpActual.z * fVar5 + *(float *)(iVar11 + 0x38)) -
            *(float *)(param_1 + 0x38);
    uVar4 = *(undefined4 *)(iVar11 + 0x3c);
    fVar5 = *(float *)(iVar6 + 0x60);
    fVar23 = *(float *)(iVar6 + 100);
    fVar24 = *(float *)(iVar6 + 0x68);
    dVar15 = (double)(fVar1 * fVar1 + fVar7 * fVar7 + fVar3 * fVar3);
    dVar17 = dVar12;
    dVar13 = dVar12;
    dVar14 = dVar12;
    if ((double)(float)SQRT(dVar15) != dVar12) {
      dVar17 = 1.0 / SQRT(dVar15);
      dVar17 = (double)(float)(-(double)(float)((double)(float)(dVar15 * dVar17) * dVar17 - dVar16)
                               * (double)(float)(dVar18 * dVar17) + dVar17);
      dVar17 = (double)(float)(-(double)(float)((double)(float)(dVar15 * dVar17) * dVar17 - dVar16)
                               * (double)(float)(dVar18 * dVar17) + dVar17);
      fVar2 = (float)(-(double)(float)((double)(float)(dVar15 * dVar17) * dVar17 - dVar16) *
                      (double)(float)(dVar18 * dVar17) + dVar17);
      dVar14 = (double)(fVar7 * fVar2);
      dVar13 = (double)(fVar3 * fVar2);
      dVar17 = (double)(fVar1 * fVar2);
    }
    fVar3 = fVar23 * (float)GameCamera.camStatics.heroUpActual.y;
    *(float *)(iVar6 + 0x84) = (float)dVar13;
    *(float *)(iVar6 + 0x88) = (float)dVar17;
    *(float *)(iVar6 + 0x80) = (float)dVar14;
    *(undefined4 *)(iVar6 + 0x8c) = uVar4;
    fVar3 = fVar24 * (float)uVar10 + fVar5 * (float)uVar8 + fVar3;
    fVar7 = -((float)uVar9 * fVar3 - fVar23);
    fVar1 = -((float)uVar8 * fVar3 - fVar5);
    fVar3 = -((float)uVar10 * fVar3 - fVar24);
    dVar15 = (double)(fVar3 * fVar3 + fVar1 * fVar1 + fVar7 * fVar7);
    dVar17 = dVar12;
    dVar13 = dVar12;
    dVar14 = dVar12;
    if ((double)(float)SQRT(dVar15) != dVar12) {
      dVar17 = 1.0 / SQRT(dVar15);
      dVar17 = (double)(float)(-(double)(float)((double)(float)(dVar15 * dVar17) * dVar17 - dVar16)
                               * (double)(float)(dVar18 * dVar17) + dVar17);
      dVar17 = (double)(float)(-(double)(float)((double)(float)(dVar15 * dVar17) * dVar17 - dVar16)
                               * (double)(float)(dVar18 * dVar17) + dVar17);
      fVar2 = (float)(-(double)(float)((double)(float)(dVar15 * dVar17) * dVar17 - dVar16) *
                      (double)(float)(dVar18 * dVar17) + dVar17);
      dVar17 = (double)(fVar1 * fVar2);
      dVar13 = (double)(fVar7 * fVar2);
      dVar14 = (double)(fVar3 * fVar2);
    }
    dVar21 = (double)(fVar24 * fVar24 + fVar5 * fVar5 + fVar23 * fVar23);
    dVar15 = dVar12;
    dVar19 = dVar12;
    dVar20 = dVar12;
    if ((double)(float)SQRT(dVar21) != dVar12) {
      dVar15 = 1.0 / SQRT(dVar21);
      dVar15 = (double)(float)(-(double)(float)((double)(float)(dVar21 * dVar15) * dVar15 - dVar16)
                               * (double)(float)(dVar18 * dVar15) + dVar15);
      dVar15 = (double)(float)(-(double)(float)((double)(float)(dVar21 * dVar15) * dVar15 - dVar16)
                               * (double)(float)(dVar18 * dVar15) + dVar15);
      fVar3 = (float)(-(double)(float)((double)(float)(dVar21 * dVar15) * dVar15 - dVar16) *
                      (double)(float)(dVar18 * dVar15) + dVar15);
      dVar15 = (double)(fVar5 * fVar3);
      dVar19 = (double)(fVar23 * fVar3);
      dVar20 = (double)(fVar24 * fVar3);
    }
    dVar13 = (double)(float)(dVar14 * dVar20 +
                            (double)(float)(dVar17 * dVar15 + (double)(float)(dVar13 * dVar19)));
    dVar17 = dVar13;
    if (dVar13 - dVar12 < 0.0) {
      dVar17 = ABS(dVar13);
    }
    dVar14 = (double)(float)(dVar16 - dVar17);
    if ((double)(float)(dVar16 - dVar17) - dVar12 < 0.0) {
      dVar14 = dVar12;
    }
    if (dVar13 - dVar12 < 0.0) {
      dVar16 = -1.0;
    }
    *(float *)(iVar6 + 0xa0) =
         (float)(-(double)(((float)((double)(float)(dVar17 * dVar17) * dVar17) * DAT_007358cc +
                           (float)((double)(float)(dVar17 * dVar17) * (double)DAT_007358c8 +
                                  (double)(float)(dVar17 * (double)DAT_007358c4 +
                                                 (double)DAT_007358c0))) * (float)SQRT(dVar14) -
                          1.5707964) * dVar16 - 1.5707963705062866);
  }
  return;
}


// 0x0039c98 (0x304 bytes)
// inlined: FastRSqrt @0x39e30, FastRSqrt @0x39f04
void Cam13_00039c98(float *param_1)

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
  float fVar11;
  float fVar12;
  float fVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  undefined4 uVar17;
  undefined4 uVar18;
  
  uVar18 = GameCamera.camStatics.heroUpActual.z;
  uVar17 = GameCamera.camStatics.heroUpActual.y;
  uVar16 = GameCamera.camStatics.heroUpActual.x;
  uVar15 = GameCamera.camStatics.heroUp.z;
  uVar14 = GameCamera.camStatics.heroUp.y;
  fVar13 = GameCamera.camStatics.heroUp.x;
  fVar1 = DAT_0096a1c4 + 1.5707963;
  fVar4 = 3.1415925 - DAT_0096a1c4;
  if (DAT_0096a1c4 - (3.1415925 - DAT_0096a1c4) < 0.0) {
    fVar4 = DAT_0096a1c4;
  }
  fVar2 = 3.1415925 - fVar1;
  if (fVar1 - (3.1415925 - fVar1) < 0.0) {
    fVar2 = fVar1;
  }
  fVar6 = param_1[0x1c];
  fVar5 = -3.1415925 - DAT_0096a1c4;
  if ((-3.1415925 - DAT_0096a1c4) - fVar4 < 0.0) {
    fVar5 = fVar4;
  }
  fVar8 = fVar5 * fVar5;
  fVar4 = -3.1415925 - fVar1;
  if ((-3.1415925 - fVar1) - fVar2 < 0.0) {
    fVar4 = fVar2;
  }
  fVar1 = *(float *)((int)fVar6 + 100);
  fVar2 = *(float *)((int)fVar6 + 0x60);
  fVar7 = fVar4 * fVar4;
  fVar9 = fVar8 * fVar8 * fVar5;
  fVar10 = fVar8 * fVar9;
  fVar11 = fVar7 * fVar7 * fVar4;
  fVar3 = *(float *)((int)fVar6 + 0x68);
  fVar12 = fVar7 * fVar11;
  fVar8 = fVar8 * fVar10 * 2.601887e-06 +
          fVar10 * -0.0001980741 + fVar9 * 0.0083330255 + fVar8 * fVar5 * -0.16666657 + fVar5;
  fVar9 = (float)GameCamera.camStatics.heroUpActual.z * fVar8;
  fVar5 = fVar7 * fVar12 * 2.601887e-06 +
          fVar12 * -0.0001980741 + fVar11 * 0.0083330255 + fVar7 * fVar4 * -0.16666657 + fVar4;
  *(float *)((int)fVar6 + 0x74) = fVar8;
  fVar4 = 0.0;
  *(undefined4 *)((int)fVar6 + 0x78) = 0;
  *(float *)((int)fVar6 + 0x70) = fVar5;
  fVar7 = *(float *)((int)fVar6 + 0x30) + (float)uVar16 * fVar3 + fVar5 * fVar2 + -(fVar9 * fVar1);
  param_1[0xc] = fVar7;
  fVar9 = *(float *)((int)fVar6 + 0x34) +
          (float)uVar17 * fVar3 + fVar8 * fVar2 + (float)uVar18 * fVar5 * fVar1;
  param_1[0xd] = fVar9;
  fVar1 = ((float)uVar16 * fVar8 - (float)uVar17 * fVar5) * fVar1 +
          (float)uVar18 * fVar3 + *(float *)((int)fVar6 + 0x38);
  param_1[0xe] = fVar1;
  param_1[0xf] = *(float *)((int)fVar6 + 0x3c);
  fVar9 = *(float *)((int)fVar6 + 0x34) - fVar9;
  fVar7 = *(float *)((int)fVar6 + 0x30) - fVar7;
  fVar1 = *(float *)((int)fVar6 + 0x38) - fVar1;
  fVar3 = fVar1 * fVar1 + fVar7 * fVar7 + fVar9 * fVar9;
  fVar2 = fVar4;
  fVar5 = fVar4;
  fVar8 = fVar4;
  if (SQRT(fVar3) != 0.0) {
    fVar8 = 1.0 / SQRT(fVar3);
    fVar8 = -(fVar3 * fVar8 * fVar8 - 1.0) * fVar8 * 0.5 + fVar8;
    fVar8 = -(fVar3 * fVar8 * fVar8 - 1.0) * fVar8 * 0.5 + fVar8;
    fVar8 = -(fVar3 * fVar8 * fVar8 - 1.0) * fVar8 * 0.5 + fVar8;
    fVar2 = fVar7 * fVar8;
    fVar5 = fVar9 * fVar8;
    fVar8 = fVar1 * fVar8;
  }
  *(float *)((int)fVar6 + 0x84) = fVar5;
  *(float *)((int)fVar6 + 0x88) = fVar8;
  *(float *)((int)fVar6 + 0x80) = fVar2;
  *(undefined4 *)((int)fVar6 + 0x8c) = *(undefined4 *)((int)fVar6 + 0x3c);
  *param_1 = fVar2;
  fVar1 = *(float *)((int)fVar6 + 0x84);
  param_1[1] = fVar1;
  fVar5 = *(float *)((int)fVar6 + 0x88);
  fVar7 = fVar13 * fVar1 - (float)uVar14 * fVar2;
  param_1[2] = fVar5;
  fVar6 = *(float *)((int)fVar6 + 0x8c);
  param_1[0x10] = fVar2;
  fVar8 = (float)uVar14 * fVar5 - (float)uVar15 * fVar1;
  fVar3 = (float)uVar15 * fVar2 - fVar13 * fVar5;
  param_1[3] = fVar6;
  param_1[0x11] = fVar1;
  param_1[0x12] = fVar5;
  param_1[0x13] = fVar6;
  param_1[7] = 0.0;
  fVar9 = fVar7 * fVar7 + fVar8 * fVar8 + fVar3 * fVar3;
  fVar13 = fVar4;
  fVar6 = fVar4;
  if (SQRT(fVar9) != 0.0) {
    fVar13 = 1.0 / SQRT(fVar9);
    fVar13 = -(fVar9 * fVar13 * fVar13 - 1.0) * fVar13 * 0.5 + fVar13;
    fVar13 = -(fVar9 * fVar13 * fVar13 - 1.0) * fVar13 * 0.5 + fVar13;
    fVar13 = -(fVar9 * fVar13 * fVar13 - 1.0) * fVar13 * 0.5 + fVar13;
    fVar4 = fVar8 * fVar13;
    fVar6 = fVar3 * fVar13;
    fVar13 = fVar7 * fVar13;
  }
  param_1[4] = fVar4;
  param_1[5] = fVar6;
  param_1[6] = fVar13;
  param_1[0xb] = 0.0;
  param_1[8] = fVar1 * fVar13 - fVar5 * fVar6;
  param_1[9] = fVar5 * fVar4 - fVar2 * fVar13;
  param_1[10] = fVar2 * fVar6 - fVar1 * fVar4;
  return;
}


// 0x0039fc0 (0x2d8 bytes)
// inlined: FastRSqrt @0x3a0f8, FastRSqrt @0x3a15c
void InitCamera_13(float *param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  undefined4 *puVar6;
  undefined4 uVar7;
  MobyInstance *pMVar8;
  int iVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  double dVar16;
  
  pMVar8 = g_heroMobyPtr;
  fVar5 = param_1[0x1c];
  *(undefined4 *)((int)fVar5 + 0x54) = 0x3fc00000;
  *(MobyInstance **)((int)fVar5 + 0x50) = pMVar8;
  dVar16 = 0.0;
  *(undefined4 *)((int)fVar5 + 0x4c) = 0;
  *(undefined4 *)((int)fVar5 + 0x48) = 0;
  *(undefined4 *)((int)fVar5 + 0x44) = 0;
  *(undefined4 *)((int)fVar5 + 0x40) = 0;
  *(float *)((int)fVar5 + 0x30) = g_heroPosition.x;
  puVar6 = (undefined4 *)param_1[0x1c];
  *(float *)((int)fVar5 + 0x34) = g_heroPosition.y;
  *(float *)((int)fVar5 + 0x38) = g_heroPosition.z;
  *(float *)((int)fVar5 + 0x3c) = g_heroPosition.w;
  puVar6[0x18] = 0x40947ae1;
  puVar6[0x19] = 0;
  dVar15 = 0.5;
  puVar6[0x1a] = 0x3f000000;
  puVar6[0x1b] = 0;
  puVar6[4] = 0x3d75c28f;
  puVar6[5] = 0x3e333333;
  puVar6[6] = 0;
  puVar6[3] = 0;
  puVar6[2] = 0;
  puVar6[1] = 0;
  *puVar6 = 0;
  uVar7 = DAT_0096a1c4;
  puVar6[0x2a] = 0;
  puVar6[0x29] = uVar7;
  puVar6[0x28] = 0;
  puVar6[0x24] = 0;
  puVar6[0x25] = 0;
  puVar6[0x26] = 0;
  puVar6[0x27] = 0;
  Cam13_00039c98(param_1);
  *(undefined2 *)((int)param_1 + 0x7e) = 0;
  GameCamera.blender.reqType = '\x02';
  fVar5 = *(float *)((int)GameCamera.pLastUpdCam + 4);
                    /* WARNING: Load size is inaccurate */
  fVar2 = *GameCamera.pLastUpdCam;
  fVar3 = *param_1;
  fVar4 = param_1[1];
  dVar12 = (double)(fVar2 * fVar2 + fVar5 * fVar5);
  dVar10 = dVar16;
  dVar11 = dVar16;
  if ((double)(float)SQRT(dVar12) != dVar16) {
    dVar10 = 1.0 / SQRT(dVar12);
    dVar10 = (double)(float)(-(double)(float)((double)(float)(dVar12 * dVar10) * dVar10 - 1.0) *
                             (double)(float)(dVar15 * dVar10) + dVar10);
    dVar10 = (double)(float)(-(double)(float)((double)(float)(dVar12 * dVar10) * dVar10 - 1.0) *
                             (double)(float)(dVar15 * dVar10) + dVar10);
    fVar1 = (float)(-(double)(float)((double)(float)(dVar12 * dVar10) * dVar10 - 1.0) *
                    (double)(float)(dVar15 * dVar10) + dVar10);
    dVar11 = (double)(fVar2 * fVar1);
    dVar10 = (double)(fVar5 * fVar1);
  }
  dVar13 = (double)(fVar3 * fVar3 + fVar4 * fVar4);
  dVar12 = dVar16;
  dVar14 = dVar16;
  if ((double)(float)SQRT(dVar13) != dVar16) {
    dVar12 = 1.0 / SQRT(dVar13);
    dVar12 = (double)(float)(-(double)(float)((double)(float)(dVar13 * dVar12) * dVar12 - 1.0) *
                             (double)(float)(dVar15 * dVar12) + dVar12);
    dVar12 = (double)(float)(-(double)(float)((double)(float)(dVar13 * dVar12) * dVar12 - 1.0) *
                             (double)(float)(dVar15 * dVar12) + dVar12);
    fVar5 = (float)(-(double)(float)((double)(float)(dVar13 * dVar12) * dVar12 - 1.0) *
                    (double)(float)(dVar15 * dVar12) + dVar12);
    dVar14 = (double)(fVar3 * fVar5);
    dVar12 = (double)(fVar4 * fVar5);
  }
  dVar11 = (double)(float)(dVar14 * dVar11 + (double)(float)(dVar12 * dVar10));
  dVar10 = dVar11;
  if (dVar11 - dVar16 < 0.0) {
    dVar10 = ABS(dVar11);
  }
  dVar12 = (double)(float)(1.0 - dVar10);
  if ((double)(float)(1.0 - dVar10) - dVar16 < 0.0) {
    dVar12 = dVar16;
  }
  fVar5 = animationSpeed * 40.5;
  fVar2 = 1.0;
  if (dVar11 - dVar16 < 0.0) {
    fVar2 = -1.0;
  }
  dVar10 = -(double)(-(((float)((double)(float)(dVar10 * dVar10) * dVar10) * DAT_007358cc +
                       (float)((double)(float)(dVar10 * dVar10) * (double)DAT_007358c8 +
                              (double)(float)(dVar10 * (double)DAT_007358c4 + (double)DAT_007358c0))
                       ) * (float)SQRT(dVar12) - 1.5707964) * fVar2 - 1.5707964);
  dVar11 = (double)(float)(dVar10 * 0.31830987334251404);
  dVar10 = (double)FastIntToDouble(dVar10,(int)(animationSpeed * 50.5));
  iVar9 = FastDoubleToInt((double)(float)(dVar10 * dVar11));
  GameCamera.blender.blendData.polarData.reqInterpFrames = (int)fVar5 + iVar9;
  return;
}


// 0x003a298 (0xa8 bytes)
void ____Cam13_InterpPosToTarget(int param_1)

{
  int iVar1;
  float *speed;
  float fVar2;
  float local_20;
  float local_1c;
  float local_18;
  
  iVar1 = *(int *)(param_1 + 0x70);
  speed = (float *)Cam13_000394e8(param_1,&local_20);
  fVar2 = Cam_InterpValues(*(float *)(param_1 + 0x30),local_20,*(float *)(iVar1 + 0x10),
                           *(float *)(iVar1 + 0x14),*(float *)(iVar1 + 0x18),speed);
  *(float *)(param_1 + 0x30) = fVar2;
  fVar2 = Cam_InterpValues(*(float *)(param_1 + 0x34),local_1c,*(float *)(iVar1 + 0x10),
                           *(float *)(iVar1 + 0x14),*(float *)(iVar1 + 0x18),speed);
  *(float *)(param_1 + 0x34) = fVar2;
  fVar2 = Cam_InterpValues(*(float *)(param_1 + 0x38),local_18,*(float *)(iVar1 + 0x10),
                           *(float *)(iVar1 + 0x14),*(float *)(iVar1 + 0x18),speed);
  *(float *)(param_1 + 0x38) = fVar2;
  return;
}


// 0x003a350 (0x278 bytes)
// inlined: FastRSqrt @0x3a3e0, FastRSqrt @0x3a488, FastRSqrt @0x3a53c
void Cam13_0003a350(float *param_1)

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
  undefined4 uVar11;
  undefined4 uVar12;
  
  uVar12 = GameCamera.camStatics.heroUp.z;
  uVar11 = GameCamera.camStatics.heroUp.y;
  fVar6 = GameCamera.camStatics.heroUp.x;
  fVar3 = param_1[0x1c];
  fVar1 = *(float *)((int)fVar3 + 0x80);
  fVar2 = 0.0;
  fVar4 = *(float *)((int)fVar3 + 0x88) * *(float *)((int)fVar3 + 0x88) +
          fVar1 * fVar1 + *(float *)((int)fVar3 + 0x84) * *(float *)((int)fVar3 + 0x84);
  if (SQRT(fVar4) == 0.0) {
    *param_1 = fVar1;
    param_1[1] = *(float *)((int)fVar3 + 0x84);
    param_1[2] = *(float *)((int)fVar3 + 0x88);
    param_1[3] = *(float *)((int)fVar3 + 0x8c);
    param_1[2] = 0.0;
    param_1[1] = 0.0;
    *param_1 = 0.0;
    fVar3 = param_1[3];
    fVar5 = fVar2;
    fVar4 = fVar2;
    fVar1 = fVar2;
  }
  else {
    fVar5 = 1.0 / SQRT(fVar4);
    fVar5 = -(fVar4 * fVar5 * fVar5 - 1.0) * fVar5 * 0.5 + fVar5;
    fVar5 = -(fVar4 * fVar5 * fVar5 - 1.0) * fVar5 * 0.5 + fVar5;
    fVar5 = -(fVar4 * fVar5 * fVar5 - 1.0) * fVar5 * 0.5 + fVar5;
    fVar1 = fVar1 * fVar5;
    *param_1 = fVar1;
    fVar4 = *(float *)((int)fVar3 + 0x84) * fVar5;
    param_1[1] = fVar4;
    fVar5 = *(float *)((int)fVar3 + 0x88) * fVar5;
    param_1[2] = fVar5;
    fVar3 = *(float *)((int)fVar3 + 0x8c);
    param_1[3] = fVar3;
  }
  fVar7 = fVar5 * fVar5 + fVar1 * fVar1 + fVar4 * fVar4;
  if (SQRT(fVar7) == 0.0) {
    param_1[0x10] = *param_1;
    param_1[0x11] = param_1[1];
    fVar3 = param_1[3];
    param_1[0x12] = param_1[2];
    fVar5 = fVar2;
    fVar1 = fVar2;
    fVar4 = fVar2;
  }
  else {
    fVar8 = 1.0 / SQRT(fVar7);
    fVar8 = -(fVar7 * fVar8 * fVar8 - 1.0) * fVar8 * 0.5 + fVar8;
    fVar8 = -(fVar7 * fVar8 * fVar8 - 1.0) * fVar8 * 0.5 + fVar8;
    fVar8 = -(fVar7 * fVar8 * fVar8 - 1.0) * fVar8 * 0.5 + fVar8;
    fVar1 = fVar1 * fVar8;
    fVar5 = fVar5 * fVar8;
    fVar4 = fVar4 * fVar8;
  }
  param_1[0x13] = fVar3;
  param_1[3] = fVar3;
  param_1[0x10] = fVar1;
  param_1[0x11] = fVar4;
  param_1[0x12] = fVar5;
  fVar8 = (float)uVar12 * fVar1 - fVar6 * fVar5;
  fVar9 = (float)uVar11 * fVar5 - (float)uVar12 * fVar4;
  fVar7 = fVar6 * fVar4 - (float)uVar11 * fVar1;
  *param_1 = fVar1;
  param_1[1] = fVar4;
  param_1[2] = fVar5;
  param_1[7] = 0.0;
  fVar10 = fVar7 * fVar7 + fVar9 * fVar9 + fVar8 * fVar8;
  fVar3 = fVar2;
  fVar6 = fVar2;
  if (SQRT(fVar10) != 0.0) {
    fVar6 = 1.0 / SQRT(fVar10);
    fVar6 = -(fVar10 * fVar6 * fVar6 - 1.0) * fVar6 * 0.5 + fVar6;
    fVar6 = -(fVar10 * fVar6 * fVar6 - 1.0) * fVar6 * 0.5 + fVar6;
    fVar6 = -(fVar10 * fVar6 * fVar6 - 1.0) * fVar6 * 0.5 + fVar6;
    fVar2 = fVar9 * fVar6;
    fVar3 = fVar8 * fVar6;
    fVar6 = fVar7 * fVar6;
  }
  param_1[4] = fVar2;
  param_1[5] = fVar3;
  param_1[6] = fVar6;
  param_1[0xb] = 0.0;
  param_1[8] = fVar4 * fVar6 - fVar5 * fVar3;
  param_1[9] = fVar5 * fVar2 - fVar1 * fVar6;
  param_1[10] = fVar1 * fVar3 - fVar4 * fVar2;
  return;
}


// 0x003a5c8 (0x8 bytes)
undefined8 ActivateCamera_13(void)

{
  return 0;
}


// 0x003a5e0 (0x208 bytes)
void UpdateCamera_13(int param_1)

{
  uint uVar1;
  int iVar2;
  float *pfVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  float fVar7;
  float local_50;
  float local_4c;
  float local_48;
  
  uVar1 = *(uint *)(param_1 + 0x70);
  *(float *)(param_1 + 0x30) = g_heroFrameMove.x + *(float *)(param_1 + 0x30);
  *(float *)(param_1 + 0x34) = g_heroFrameMove.y + *(float *)(param_1 + 0x34);
  *(float *)(param_1 + 0x38) = g_heroFrameMove.z + *(float *)(param_1 + 0x38);
  *(undefined4 *)(param_1 + 0x3c) = g_heroFrameMove.w;
  Cam13_000392c8(param_1);
  pfVar3 = (float *)STUB_0002bcf8(param_1,(ulonglong)uVar1 + 0xb0);
  dVar6 = 0.004999999888241291;
  dVar5 = 0.20000000298023224;
  iVar2 = *(int *)(param_1 + 0x70);
  dVar4 = 0.0;
  fVar7 = Cam_InterpValues(*(float *)(iVar2 + 0x30),g_heroPosition.x,0.005,0.2,0.0,pfVar3);
  *(float *)(iVar2 + 0x30) = fVar7;
  fVar7 = Cam_InterpValues(*(float *)(iVar2 + 0x34),g_heroPosition.y,(float)dVar6,(float)dVar5,
                           (float)dVar4,pfVar3);
  *(float *)(iVar2 + 0x34) = fVar7;
  fVar7 = Cam_InterpValues(*(float *)(iVar2 + 0x38),g_heroPosition.z,(float)dVar6,(float)dVar5,
                           (float)dVar4,pfVar3);
  *(float *)(iVar2 + 0x30) = g_heroFrameMove.x + *(float *)(iVar2 + 0x30);
  *(float *)(iVar2 + 0x34) = g_heroFrameMove.y + *(float *)(iVar2 + 0x34);
  *(float *)(iVar2 + 0x38) = g_heroFrameMove.z + fVar7;
  *(undefined4 *)(iVar2 + 0x3c) = g_heroFrameMove.w;
  Cam13_000395c0(param_1);
  iVar2 = *(int *)(param_1 + 0x70);
  pfVar3 = (float *)Cam13_000394e8(param_1,&local_50);
  fVar7 = Cam_InterpValues(*(float *)(param_1 + 0x30),local_50,*(float *)(iVar2 + 0x10),
                           *(float *)(iVar2 + 0x14),*(float *)(iVar2 + 0x18),pfVar3);
  *(float *)(param_1 + 0x30) = fVar7;
  fVar7 = Cam_InterpValues(*(float *)(param_1 + 0x34),local_4c,*(float *)(iVar2 + 0x10),
                           *(float *)(iVar2 + 0x14),*(float *)(iVar2 + 0x18),pfVar3);
  *(float *)(param_1 + 0x34) = fVar7;
  fVar7 = Cam_InterpValues(*(float *)(param_1 + 0x38),local_48,*(float *)(iVar2 + 0x10),
                           *(float *)(iVar2 + 0x14),*(float *)(iVar2 + 0x18),pfVar3);
  *(float *)(param_1 + 0x38) = fVar7;
  Cam13_0003a350(param_1);
  Camera_CollSphereBump(0x3fe0000000000000,param_1 + 0x30);
  return;
}


// 0x003a7e8 (0x28 bytes)
void ExitCamera_13(int param_1)

{
  if (g_HeroRequestedCamType != *(short *)(param_1 + 0x86)) {
    *(undefined2 *)(param_1 + 0x7e) = 3;
  }
  return;
}


