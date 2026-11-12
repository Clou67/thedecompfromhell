// game/update/moby877.cpp -- reconstructed from NPEA00385 EBOOT
// STATUS: NOT STARTED (raw Ghidra output)
// 3 functions, 0x49eaa0-0x49f894
#include "game/update/moby877.h"
#include "game/camera.h"
#include "game/hero.h"
#include "game/mobyfunc.h"
#include "game/mobyutil.h"
#include "game/sound.h"
#include "game/space.h"
#include "game/update/camera5.h"
#include "idol/fastfunc.h"

// 0x049eaa0 (0x1d8 bytes)
void M877_0049eaa0(int param_1)

{
  Spline *pSVar1;
  int iVar2;
  Spline *pSVar3;
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
  
  iVar2 = 0;
  pSVar1 = Splines[*(int *)(*(int *)(param_1 + 0x78) + 0x68)];
  dVar4 = 0.0;
  dVar13 = (double)(6.28318 / (float)(longlong)(pSVar1->cnt + -1));
  if (0 < pSVar1->cnt) {
    dVar15 = 1.570796251296997;
    dVar16 = 3.141592502593994;
    dVar17 = -3.141592502593994;
    dVar18 = -0.16666656732559204;
    dVar19 = 0.008333025500178337;
    dVar20 = -0.0001980741071747616;
    dVar21 = 2.601886990305502e-06;
    dVar22 = 3.5;
    dVar14 = dVar4;
    pSVar3 = pSVar1;
    do {
      dVar5 = (double)(float)(dVar4 + dVar15);
      dVar6 = (double)(float)(dVar16 - dVar4);
      if (dVar4 - (double)(float)(dVar16 - dVar4) < 0.0) {
        dVar6 = dVar4;
      }
      dVar8 = (double)(float)(dVar16 - dVar5);
      if (dVar5 - (double)(float)(dVar16 - dVar5) < 0.0) {
        dVar8 = dVar5;
      }
      dVar7 = (double)(float)(dVar17 - dVar4);
      if ((double)(float)(dVar17 - dVar4) - dVar6 < 0.0) {
        dVar7 = dVar6;
      }
      dVar6 = (double)(float)(dVar17 - dVar5);
      if ((double)(float)(dVar17 - dVar5) - dVar8 < 0.0) {
        dVar6 = dVar8;
      }
      dVar5 = (double)(float)(dVar7 * dVar7);
      dVar8 = (double)(float)(dVar6 * dVar6);
      dVar11 = (double)(float)(dVar5 * (double)(float)(dVar5 * dVar7));
      dVar9 = (double)(float)(dVar8 * (double)(float)(dVar8 * dVar6));
      dVar10 = (double)(float)(dVar5 * dVar11);
      dVar12 = (double)(float)(dVar8 * dVar9);
      pSVar3->points[0].x =
           (float)((double)(float)((double)(float)(dVar8 * dVar12) * dVar21 +
                                  (double)(float)(dVar12 * dVar20 +
                                                 (double)(float)(dVar9 * dVar19 +
                                                                (double)(float)((double)(float)(
                                                  dVar8 * dVar6) * dVar18 + dVar6)))) * dVar22 +
                  (double)*(float *)(param_1 + 0x10));
      pSVar3->points[0].y =
           (float)((double)(float)((double)(float)(dVar5 * dVar10) * dVar21 +
                                  (double)(float)(dVar10 * dVar20 +
                                                 (double)(float)(dVar11 * dVar19 +
                                                                (double)(float)((double)(float)(
                                                  dVar5 * dVar7) * dVar18 + dVar7)))) * dVar22 +
                  (double)*(float *)(param_1 + 0x14));
      pSVar3->points[0].z = (float)((double)*(float *)(param_1 + 0x18) + dVar14);
      dVar4 = (double)FastWrapRot((float)dVar4,(float)dVar13);
      iVar2 = iVar2 + 1;
      pSVar3 = (Spline *)pSVar3->points;
    } while (iVar2 < pSVar1->cnt);
  }
  return;
}


// 0x049ec80 (0x10c bytes)
void M877_0049ec80(int param_1,float *param_2,undefined4 *param_3)

{
  float fVar1;
  float fVar2;
  float fVar3;
  
  fVar1 = *(float *)(param_1 + 0xc0);
  fVar2 = 0.0;
  fVar3 = SQRT(*(float *)(param_1 + 200) * *(float *)(param_1 + 200) +
               fVar1 * fVar1 + *(float *)(param_1 + 0xc4) * *(float *)(param_1 + 0xc4));
  if (fVar3 == 0.0) {
    *param_2 = fVar1;
    param_2[1] = *(float *)(param_1 + 0xc4);
    param_2[2] = *(float *)(param_1 + 200);
    fVar1 = *(float *)(param_1 + 0xcc);
    param_2[2] = 0.0;
    param_2[3] = fVar1;
    param_2[1] = 0.0;
    *param_2 = 0.0;
    fVar3 = fVar2;
    fVar1 = fVar2;
  }
  else {
    fVar2 = DAT_008c8058 / fVar3;
    fVar1 = fVar1 * fVar2;
    *param_2 = fVar1;
    fVar3 = *(float *)(param_1 + 0xc4) * fVar2;
    param_2[1] = fVar3;
    fVar2 = *(float *)(param_1 + 200) * fVar2;
    param_2[2] = fVar2;
    param_2[3] = *(float *)(param_1 + 0xcc);
  }
  *param_2 = fVar1 + *(float *)(param_1 + 0x10);
  param_2[1] = fVar3 + *(float *)(param_1 + 0x14);
  fVar2 = fVar2 + *(float *)(param_1 + 0x18);
  param_2[2] = fVar2;
  fVar1 = DAT_008c8050;
  param_3[3] = 0;
  param_3[1] = 0;
  *param_3 = 0;
  param_2[2] = fVar2 + fVar1;
  param_3[2] = 0;
  param_3[2] = *(undefined4 *)(param_1 + 0x48);
  param_3[1] = DAT_008c8054 * 0.017453292;
  return;
}


// 0x049ede8 (0xaac bytes)
/* Moby 877 */

void UpdateMoby_877(MobyInstance *moby)

{
  bool bVar1;
  byte bVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  void *pvVar6;
  uint uVar7;
  undefined4 uVar8;
  float fVar9;
  short sVar10;
  Cuboid *pCVar11;
  ulonglong uVar12;
  longlong lVar13;
  int iVar15;
  u8 uVar16;
  longlong lVar14;
  longlong lVar17;
  ulonglong uVar18;
  double dVar19;
  double dVar20;
  double dVar21;
  double dVar22;
  double dVar23;
  GPiece<16> auVar24;
  GPiece<16> auVar25;
  GPiece<16> auVar26;
  Vec4 local_a0;
  f32 local_90;
  f32 local_8c;
  f32 local_88;
  f32 local_84;
  longlong local_40;
  
  lVar13 = (longlong)(int)moby;
  uVar12 = ZEXT48(&stack0x00000000);
  local_a0.x = -(moby->pos).x;
  local_a0.y = -(moby->pos).y;
  local_a0.z = -(moby->pos).z;
  pvVar6 = moby->pVar;
  local_a0.w = (moby->pos).w;
  local_90 = (moby->rotation).x;
  local_8c = (moby->rotation).y;
  local_88 = (moby->rotation).z;
  local_84 = (moby->rotation).w;
  bVar2 = moby->state;
  if (bVar2 < 2) {
    if (bVar2 == 0) {
      dVar19 = (double)MB_randRot();
      *(float *)((int)pvVar6 + 0x80) = (float)dVar19;
      *(f32 *)((int)pvVar6 + 0x84) = (moby->rotation).z;
      *(undefined4 *)((int)pvVar6 + 0x74) = 0xffffffff;
      moby->state = '\x03';
    }
    else {
      DAT_0096bfba = (undefined2)*(undefined4 *)((int)pvVar6 + 0x68);
      Delt(1.0,0.133,(float *)((int)pvVar6 + 0x78));
      SceneScreenFade = *(float *)((int)pvVar6 + 0x78);
      if (*(int *)((int)pvVar6 + 0x78) == 0x3f800000) {
        M877_0049ec80(lVar13,uVar12 - 0x80,uVar12 - 0x70);
        SetCameraPosition(uVar12 - 0x80,uVar12 - 0x70,1,0,0);
        moby->state = moby->setByGroup;
        moby->setByGroup = '\x01';
      }
    }
  }
  else if (bVar2 < 6) {
    if (bVar2 < 4) {
      iVar15 = IsMobyPlayingSound(moby,*(int *)((int)pvVar6 + 0x74));
      if (iVar15 == 0) {
        iVar15 = PlayMobySound(0,4,moby);
        *(int *)((int)pvVar6 + 0x74) = iVar15;
      }
      fVar4 = g_FrameTime;
      fVar5 = g_FrameTimeSq;
      if (moby->setByGroup != '\0') {
        DAT_0096bfba = (undefined2)*(undefined4 *)((int)pvVar6 + 0x68);
        Delt(0.0,0.133,(float *)((int)pvVar6 + 0x78));
        SceneScreenFade = *(float *)((int)pvVar6 + 0x78);
        M877_0049ec80(lVar13,uVar12 - 0x60,uVar12 - 0x50);
        Camera_SetMobyDrivenTargetPos((float *)(uVar12 - 0x60));
        Camera_SetMobyDrivenTargetRot((float *)(uVar12 - 0x50));
        fVar5 = 1.0 / (*(float *)((int)pvVar6 + 0x60) - *(float *)((int)pvVar6 + 100));
        if (moby->setByGroup == '\0') {
          fVar3 = 16.0;
        }
        else {
          fVar3 = 6.0;
        }
        fVar4 = g_FrameTime * fVar3 * fVar5;
        fVar5 = g_FrameTimeSq * fVar3 * fVar5;
      }
      fVar3 = 0.0;
      if (moby->state == 2) {
        fVar3 = 1.0;
      }
      dVar20 = (double)fVar3;
      OrganicDelt
                (fVar3,fVar5,fVar5,fVar4,(float *)((int)pvVar6 + 0x70),(uint)moby->state,
                 (float *)((int)pvVar6 + 0x88));
      pCVar11 = Cuboids;
      iVar15 = *(int *)((int)pvVar6 + 0x6c);
      (moby->pos).z =
           (*(float *)((int)pvVar6 + 0x60) - *(float *)((int)pvVar6 + 100)) *
           *(float *)((int)pvVar6 + 0x70) + *(float *)((int)pvVar6 + 100);
      dVar19 = (double)FastDiffRots
                                 ((double)pCVar11[iVar15].rot.z,
                                  (double)*(float *)((int)pvVar6 + 0x84));
      fVar4 = (float)(dVar19 * (double)*(float *)((int)pvVar6 + 0x70));
      (moby->rotation).z = fVar4;
      dVar19 = (double)FastWrapRot(fVar4,*(float *)((int)pvVar6 + 0x84));
      (moby->rotation).z = (float)dVar19;
      if (ABS((float)((double)*(float *)((int)pvVar6 + 0x70) - dVar20)) < 0.01) {
        auVar24 = ZEXT416(0xffffffff);
        auVar24 = auVar24 | auVar24 << 0x20 | auVar24 << 0x40 | auVar24 << 0x60;
        auVar25 = vectorShiftLeftIntegerWord(auVar24,auVar24);
        auVar24 = loadVectorLeftIndexed(0x18,0x49ed8c);
        auVar24 = auVar24 >> 0x60 & (GPiece<16>)0xffffffff;
        auVar26 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
        iVar15 = *(int *)((int)pvVar6 + 0x74);
        auVar24 = vectorMultiplyAddFloatingPoint
                            (auVar26,auVar24 | auVar24 << 0x20 | auVar24 << 0x40 | auVar24 << 0x60,
                             auVar25);
        auVar24 = vectorConvertToSignedFixedPointWordSaturate(auVar24,0);
        auVar24 = auVar24 >> 0x60 & (GPiece<16>)0xffffffff;
        uVar8 = storeVectorElementWordIndexed
                          (auVar24 | auVar24 << 0x20 | auVar24 << 0x40 | auVar24 << 0x60,0x7c,
                           ZEXT48(pvVar6));
        *(undefined4 *)((int)pvVar6 + 0x7cU & 0xfffffffc) = uVar8;
        if (((iVar15 != -1) && (g_SoundChannels[iVar15].pMoby == moby)) &&
           (g_SoundChannels[iVar15].state != '\0')) {
          sound_Kill(iVar15);
        }
        *(undefined4 *)((int)pvVar6 + 0x74) = 0xffffffff;
        uVar7 = (int)*(uint *)((int)pvVar6 + 0x88) >> 0x1f;
        iVar15 = (uVar7 >> 1 ^ *(uint *)((int)pvVar6 + 0x88)) - uVar7;
        if (iVar15 < 0x3aa3d70b) {
          if (iVar15 < -0x3aa3d70a) {
            *(undefined4 *)((int)pvVar6 + 0x88) = 0xbaa3d70a;
          }
        }
        else {
          *(undefined4 *)((int)pvVar6 + 0x88) = 0x3aa3d70a;
        }
        if (moby->setByGroup == '\0') {
          uVar16 = (char)(ZERO_MASK((2 - (uint)moby->state))) + '\x05';
        }
        else {
          uVar16 = (char)(ZERO_MASK((2 - (uint)moby->state))) + '\a';
        }
        moby->state = uVar16;
      }
    }
    else {
      dVar20 = (double)FastWrapRot
                                 (*(float *)((int)pvVar6 + 0x80),g_FrameTime * 6.2831855);
      dVar19 = (double)(float)(3.141592502593994 - dVar20);
      if (dVar20 - (double)(float)(3.141592502593994 - dVar20) < 0.0) {
        dVar19 = dVar20;
      }
      dVar21 = (double)(float)(-3.141592502593994 - dVar20);
      if ((double)(float)(-3.141592502593994 - dVar20) - dVar19 < 0.0) {
        dVar21 = dVar19;
      }
      dVar19 = (double)(float)(dVar21 * dVar21);
      dVar23 = (double)(float)(dVar19 * (double)(float)(dVar19 * dVar21));
      *(float *)((int)pvVar6 + 0x80) = (float)dVar20;
      dVar20 = (double)(float)(dVar19 * dVar23);
      lVar14 = FastDoubleToInt
                         ((double)((((float)(dVar19 * dVar20) * 2.601887e-06 +
                                    (float)(dVar20 * -0.0001980741071747616 +
                                           (double)(float)(dVar23 * 0.008333025500178337 +
                                                          (double)(float)((double)(float)(dVar19 * 
                                                  dVar21) * -0.16666656732559204 + dVar21)))) * 4.0
                                   - 3.0) * 128.0));
      fVar3 = g_heroGroundZ;
      fVar4 = (moby->pos).x;
      fVar5 = (moby->pos).y;
      lVar17 = lVar14 + (lVar14 + -0x20 >> 0x3f & 0x20U - lVar14);
      uVar18 = lVar17 + (0x80 - lVar14 >> 0x3f & 0x80U - lVar17);
      bVar1 = g_standingOnMoby != moby;
      moby->glowRgba =
           (uint)((uVar18 & 0xffffffff) << 8) | (uint)uVar18 | (uint)((uVar18 & 0xffffffff) << 0x10)
           | 0x80000000;
      if (((bVar1) || (g_framesNotGrounded != 0)) ||
         (0.5 <= SQRT((g_heroPosition.x - fVar4) * (g_heroPosition.x - fVar4) +
                      (g_heroPosition.y - fVar5) * (g_heroPosition.y - fVar5)))) {
        if (moby->state == '\x04') {
          fVar4 = SQRT((fVar4 - g_heroPosition.x) * (fVar4 - g_heroPosition.x) +
                       (fVar5 - g_heroPosition.y) * (fVar5 - g_heroPosition.y));
          if (((ABS(fVar3 - *(float *)((int)pvVar6 + 100)) < 2.0) && (fVar4 < 32.0)) &&
             (5.0 < fVar4)) {
            moby->state = '\x03';
            moby->setByGroup = '\0';
          }
        }
        else if (((moby->state == '\x05') &&
                 (fVar4 = SQRT((fVar4 - g_heroPosition.x) * (fVar4 - g_heroPosition.x) +
                               (fVar5 - g_heroPosition.y) * (fVar5 - g_heroPosition.y)),
                 ABS(fVar3 - *(float *)((int)pvVar6 + 0x60)) < 2.0)) &&
                ((fVar4 < 32.0 && (5.0 < fVar4)))) {
          moby->state = '\x02';
          moby->setByGroup = '\0';
        }
      }
      else {
        PlayMobySound(1,0,moby);
        if (*(int *)((int)pvVar6 + 0x68) != -1) {
          M877_0049eaa0(lVar13);
        }
        bVar2 = moby->state;
        moby->glowRgba = 0x80208020;
        moby->state = '\x01';
        moby->setByGroup = (char)(ZERO_MASK((5 - (uint)bVar2))) + '\x03';
        *(undefined4 *)((int)pvVar6 + 0x78) = 0;
      }
    }
  }
  else if (bVar2 < 8) {
    iVar15 = IsMobyPlayingSound(moby,*(int *)((int)pvVar6 + 0x74));
    if (iVar15 != 0) {
      sound_Kill(*(int *)((int)pvVar6 + 0x74));
      *(undefined4 *)((int)pvVar6 + 0x74) = 0xffffffff;
    }
    local_40 = (longlong)(int)(animationSpeed * 30.5);
    if (((int)(animationSpeed * 30.5) < *(int *)((int)pvVar6 + 0x7c)) ||
       (fVar4 = g_heroPosition.y - (moby->pos).y, fVar5 = g_heroPosition.x - (moby->pos).x,
       0.5 < SQRT(fVar5 * fVar5 + fVar4 * fVar4))) {
      FastDecTimerS32(ZEXT48(pvVar6) + 0x7c);
    }
    if (g_standingOnMoby == moby) {
      if (*(int *)((int)pvVar6 + 0x7c) == 0) {
        dVar20 = (double)FastWrapRot
                                   (*(float *)((int)pvVar6 + 0x80),g_FrameTime * 6.2831855
                                   );
        dVar19 = (double)(float)(3.141592502593994 - dVar20);
        if (dVar20 - (double)(float)(3.141592502593994 - dVar20) < 0.0) {
          dVar19 = dVar20;
        }
        dVar21 = (double)(float)(-3.141592502593994 - dVar20);
        if ((double)(float)(-3.141592502593994 - dVar20) - dVar19 < 0.0) {
          dVar21 = dVar19;
        }
        dVar19 = (double)(float)(dVar21 * dVar21);
        dVar22 = (double)(float)(dVar19 * (double)(float)(dVar19 * dVar21));
        dVar23 = (double)(float)(dVar19 * dVar22);
        *(float *)((int)pvVar6 + 0x80) = (float)dVar20;
        lVar14 = FastDoubleToInt
                           ((double)((((float)(dVar19 * dVar23) * 2.601887e-06 +
                                      (float)(dVar23 * -0.0001980741071747616 +
                                             (double)(float)(dVar22 * 0.008333025500178337 +
                                                            (double)(float)((double)(float)(dVar19 *
                                                                                           dVar21) *
                                                                            -0.16666656732559204 +
                                                                           dVar21)))) * 4.0 - 3.0) *
                                    128.0));
        sVar10 = g_framesNotGrounded;
        fVar9 = g_heroPosition.y;
        fVar3 = g_heroPosition.x;
        lVar17 = lVar14 + (lVar14 + -0x20 >> 0x3f & 0x20U - lVar14);
        fVar4 = (moby->pos).x;
        fVar5 = (moby->pos).y;
        bVar1 = g_standingOnMoby == moby;
        uVar18 = lVar17 + (0x80 - lVar14 >> 0x3f & 0x80U - lVar17);
        moby->glowRgba =
             (uint)((uVar18 & 0xffffffff) << 8) | (uint)uVar18 |
             (uint)((uVar18 & 0xffffffff) << 0x10) | 0x80000000;
        if (((bVar1) && (sVar10 == 0)) &&
           (fVar9 = fVar9 - fVar5, fVar3 = fVar3 - fVar4, SQRT(fVar3 * fVar3 + fVar9 * fVar9) < 0.5)
           ) {
          PlayMobySound(1,0,moby);
          moby->glowRgba = 0x80208020;
          moby->state = (char)(ZERO_MASK((7 - (uint)moby->state))) + '\x03';
        }
      }
    }
    else {
      Camera_DeactivateMobyDrivenCam(1);
      moby->state = ((byte)(ZERO_MASK((7 - (uint)moby->state))) & 1) + 4;
    }
  }
  local_a0.x = local_a0.x + (moby->pos).x;
  local_a0.y = local_a0.y + (moby->pos).y;
  local_a0.z = local_a0.z + (moby->pos).z;
  MB_GetOrientation
            ((MobyInstance *)((int)pvVar6 + 0x20),&local_a0,uVar12 - 0x90,lVar13 + 0x40);
  return;
}


