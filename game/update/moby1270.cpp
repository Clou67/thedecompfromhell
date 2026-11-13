// game/update/moby1270.cpp -- reconstructed from NPEA00385 EBOOT
// STATUS: NOT STARTED (raw Ghidra output)
// 4 functions, 0x236684-0x2373b0
#include "game/update/moby1270.h"
#include "game/camera.h"
#include "game/collproc.h"
#include "game/hero.h"
#include "game/mobyfunc.h"
#include "game/mobyutil.h"
#include "game/sound.h"
#include "game/update/camera5.h"
#include "idol/fastfunc.h"

// 0x0236684 (0x14 bytes)
void M1270_00236684(void)

{
  DAT_0078d9fc = 0x10000;
  return;
}


// 0x0236698 (0xf0 bytes)
void M1270_00236698(int param_1)

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
  float fVar14;
  float fVar15;
  int iVar16;
  Spline *pSVar17;
  float *pfVar18;
  Spline *pSVar19;
  longlong lVar20;
  
  iVar16 = *(int *)(param_1 + 0x78);
  fVar1 = *(float *)(param_1 + 0xc0);
  lVar20 = 8;
  fVar2 = *(float *)(param_1 + 0xd0);
  pfVar18 = (float *)&DAT_0078da20;
  fVar3 = *(float *)(param_1 + 0xe0);
  fVar4 = *(float *)(param_1 + 0xc4);
  fVar5 = *(float *)(param_1 + 0xd4);
  pSVar17 = Splines[*(int *)(iVar16 + 0x80)];
  fVar6 = *(float *)(param_1 + 0xe4);
  fVar7 = *(float *)(param_1 + 200);
  fVar8 = *(float *)(param_1 + 0xd8);
  fVar9 = *(float *)(param_1 + 0xe8);
  fVar10 = *(float *)(param_1 + 0x10);
  fVar11 = *(float *)(param_1 + 0x14);
  fVar12 = *(float *)(param_1 + 0x18);
  pSVar19 = pSVar17;
  do {
    fVar13 = *pfVar18;
    fVar14 = pfVar18[2];
    fVar15 = pfVar18[1];
    pSVar19->points[0].w = 1.0;
    pfVar18 = pfVar18 + 4;
    pSVar19->points[0].x = fVar15 * fVar2 + fVar14 * fVar3 + fVar13 * fVar1 + fVar10;
    pSVar19->points[0].y = fVar15 * fVar5 + fVar14 * fVar6 + fVar13 * fVar4 + fVar11;
    pSVar19->points[0].z = fVar15 * fVar8 + fVar14 * fVar9 + fVar13 * fVar7 + fVar12;
    pSVar19 = (Spline *)pSVar19->points;
    lVar20 = lVar20 + -1;
  } while (lVar20 != 0);
  pSVar17->cnt = 7;
  DAT_0096bfba = (short)*(undefined4 *)(iVar16 + 0x80);
  return;
}


// 0x02367c0 (0x388 bytes)
// inlined: FastAtan2 @0x236a3c
void M1270_002367c0(int param_1,float *param_2,float *param_3)

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
  ulonglong *puVar11;
  float fVar12;
  float fVar13;
  int iVar14;
  int iVar15;
  ulonglong uVar16;
  longlong lVar17;
  longlong lVar18;
  ulonglong uVar19;
  longlong lVar20;
  longlong lVar21;
  float *pfVar22;
  longlong lVar23;
  
  uVar16 = ZEXT48(&stack0x00000000);
  lVar17 = uVar16 - 0x60;
  puVar11 = (ulonglong *)lVar17;
  *puVar11 = uVar16;
  fVar1 = 0.0;
  param_3[3] = 0.0;
  param_3[2] = 0.0;
  param_3[1] = 0.0;
  *param_3 = 0.0;
  fVar2 = *(float *)(param_1 + 0x44);
  if (((*(byte *)(param_1 + 0xbc) < 2) || ((*(byte *)(param_1 + 0xbc) & 1) == 0)) &&
     ((*(byte *)(param_1 + 0x20) < 2 || ((*(byte *)(param_1 + 0x20) & 1) == 0)))) {
    fVar2 = -fVar2;
    fVar3 = 1.5707964;
  }
  else {
    fVar3 = -1.5707964;
  }
  *param_3 = fVar2;
  fVar2 = fVar3 + 1.5707963;
  fVar4 = 3.1415925 - fVar3;
  if (fVar3 - (3.1415925 - fVar3) < 0.0) {
    fVar4 = fVar3;
  }
  fVar5 = 3.1415925 - fVar2;
  if (fVar2 - (3.1415925 - fVar2) < 0.0) {
    fVar5 = fVar2;
  }
  fVar6 = -3.1415925 - fVar3;
  if ((-3.1415925 - fVar3) - fVar4 < 0.0) {
    fVar6 = fVar4;
  }
  fVar3 = -3.1415925 - fVar2;
  if ((-3.1415925 - fVar2) - fVar5 < 0.0) {
    fVar3 = fVar5;
  }
  fVar2 = fVar6 * fVar6;
  fVar4 = fVar3 * fVar3;
  fVar8 = fVar2 * fVar2 * fVar6;
  fVar5 = fVar4 * fVar4 * fVar3;
  fVar9 = fVar2 * fVar8;
  fVar7 = fVar4 * fVar5;
  fVar12 = (fVar2 * fVar9 * 2.601887e-06 +
           fVar9 * -0.0001980741 + fVar8 * 0.0083330255 + fVar2 * fVar6 * -0.16666657 + fVar6) *
           2.25;
  fVar13 = (fVar4 * fVar7 * 2.601887e-06 +
           fVar7 * -0.0001980741 + fVar5 * 0.0083330255 + fVar4 * fVar3 * -0.16666657 + fVar3) *
           2.25;
  param_2[1] = fVar12;
  param_2[2] = 1.5;
  *param_2 = fVar13;
  fVar2 = *(float *)(param_1 + 0xd4);
  fVar3 = *(float *)(param_1 + 0xd8);
  fVar4 = *(float *)(param_1 + 0xc4);
  fVar5 = *(float *)(param_1 + 0xcc);
  fVar6 = *(float *)(param_1 + 200);
  fVar7 = *(float *)(param_1 + 0xe4);
  fVar8 = *(float *)(param_1 + 0xe8);
  fVar9 = *(float *)(param_1 + 0xec);
  fVar10 = *(float *)(param_1 + 0xdc);
  *param_2 = *(float *)(param_1 + 0xe0) * 1.5 +
             *(float *)(param_1 + 0xc0) * fVar13 + *(float *)(param_1 + 0xd0) * fVar12;
  param_2[1] = fVar7 * 1.5 + fVar4 * fVar13 + fVar2 * fVar12;
  param_2[2] = fVar8 * 1.5 + fVar6 * fVar13 + fVar3 * fVar12;
  param_2[3] = fVar10 * fVar12 + fVar9 * 1.5 + fVar5 * fVar13 + param_2[3];
  fVar2 = *param_2 + *(float *)(param_1 + 0x10);
  *param_2 = fVar2;
  fVar5 = param_2[1] + *(float *)(param_1 + 0x14);
  param_2[1] = fVar5;
  param_2[2] = param_2[2] + *(float *)(param_1 + 0x18);
  fVar2 = g_heroCGPos - fVar2;
  fVar5 = DAT_00969db4 - fVar5;
  fVar3 = ABS(fVar2);
  fVar4 = ABS(fVar5);
  *(float *)(puVar11 + 6) = fVar2;
  *(float *)((int)puVar11 + 0x34) = fVar5;
  *(float *)(puVar11 + 7) = fVar3 - fVar4;
  uVar19 = (ulonglong)(*(uint *)(puVar11 + 6) >> 0x1c) & 8 |
           (ulonglong)(*(uint *)(puVar11 + 7) >> 0x1e) & 2 |
           (ulonglong)(*(uint *)((int)puVar11 + 0x34) >> 0x1d) & 4;
  fVar2 = ABS(*(float *)(puVar11 + 6));
  if (*(float *)(puVar11 + 7) - 0.0 < 0.0) {
    fVar2 = fVar4;
  }
  fVar5 = *(float *)(&g_atanQuadrantTable + (int)(uVar19 << 2));
  fVar4 = *(float *)(((uint)(uVar19 << 2) | 0x735900) + 4);
  fVar6 = ABS(*(float *)((int)puVar11 + 0x34));
  if (*(float *)(puVar11 + 7) - 0.0 < 0.0) {
    fVar6 = fVar3;
  }
  if (0.0 < fVar2) {
    lVar21 = uVar16 - 0x50;
    lVar18 = uVar16 - 0x14;
    lVar20 = uVar16 - 0x24;
    lVar23 = 2;
    fVar2 = (fVar6 - fVar2) / (fVar6 + fVar2);
    fVar3 = fVar2 * fVar2;
    *(float *)(puVar11 + 9) = fVar2;
    *(float *)(puVar11 + 8) = fVar2;
    *(float *)((int)puVar11 + 0x44) = fVar2;
    *(float *)((int)puVar11 + 0x3c) = fVar2;
    fVar2 = fVar3 * fVar3;
    *(float *)(puVar11 + 8) = *(float *)(puVar11 + 8) * fVar3;
    *(float *)((int)puVar11 + 0x44) = *(float *)((int)puVar11 + 0x44) * fVar2;
    *(float *)(puVar11 + 9) = *(float *)(puVar11 + 9) * fVar2 * fVar3;
    do {
      *(float *)((int)lVar21 + 0x3c) = *(float *)((int)lVar21 + 0x2c) * fVar2 * fVar2;
      iVar14 = (int)lVar20;
      lVar20 = lVar20 + 8;
      lVar21 = lVar21 + 8;
      *(float *)((int)lVar18 + 4) = *(float *)(iVar14 + 4) * fVar2 * fVar2;
      lVar18 = lVar18 + 8;
      lVar23 = lVar23 + -1;
    } while (lVar23 != 0);
    lVar21 = uVar16 - 0x24;
    lVar23 = 4;
    pfVar22 = (float *)&DAT_007358e0;
    lVar18 = lVar21;
    lVar20 = lVar17;
    do {
      fVar2 = *pfVar22;
      fVar3 = pfVar22[1];
      pfVar22 = pfVar22 + 2;
      *(float *)((int)lVar20 + 0x3c) = *(float *)((int)lVar20 + 0x3c) * fVar2;
      lVar20 = lVar20 + 8;
      *(float *)((int)lVar18 + 4) = *(float *)((int)lVar18 + 4) * fVar3;
      lVar18 = lVar18 + 8;
      lVar23 = lVar23 + -1;
    } while (lVar23 != 0);
    lVar18 = 2;
    do {
      iVar14 = (int)lVar17;
      iVar15 = (int)lVar21;
      lVar17 = lVar17 + 0x10;
      lVar21 = lVar21 + 0x10;
      fVar1 = fVar1 + *(float *)(iVar14 + 0x3c) + *(float *)(iVar15 + 4) + *(float *)(iVar15 + 8) +
              *(float *)(iVar15 + 0xc);
      lVar18 = lVar18 + -1;
    } while (lVar18 != 0);
    fVar1 = (fVar1 + 0.7853982) * fVar5 + fVar4;
  }
  param_3[2] = fVar1;
  return;
}


// 0x0236ba0 (0x810 bytes)
/* Moby 1270 */

void UpdateMoby_1270(MobyInstance *moby)

{
  bool bVar1;
  byte bVar2;
  u8 uVar3;
  float fVar4;
  float fVar5;
  void *pvVar6;
  uint uVar7;
  undefined4 uVar8;
  float fVar9;
  ulonglong uVar10;
  longlong lVar11;
  int iVar13;
  longlong lVar12;
  longlong lVar14;
  ulonglong uVar15;
  double dVar16;
  double dVar17;
  double dVar18;
  double dVar19;
  GPiece<16> auVar20;
  GPiece<16> auVar21;
  GPiece<16> auVar22;
  Vec4 local_a0;
  f32 local_90;
  f32 local_8c;
  f32 local_88;
  f32 local_84;
  float local_80;
  float local_7c;
  float local_78;
  float local_6c;
  float local_68;
  
  lVar11 = (longlong)(int)moby;
  uVar10 = ZEXT48(&stack0x00000000);
  local_a0.x = -(moby->pos).x;
  fVar4 = (moby->pos).z;
  local_a0.y = -(moby->pos).y;
  pvVar6 = moby->pVar;
  local_a0.z = -fVar4;
  local_a0.w = (moby->pos).w;
  local_90 = (moby->rotation).x;
  local_8c = (moby->rotation).y;
  local_88 = (moby->rotation).z;
  local_84 = (moby->rotation).w;
  dVar19 = 1.0;
  dVar16 = (double)FastWrapRot
                             ((1.0 - (fVar4 - *(float *)((int)pvVar6 + 100)) /
                                     (*(float *)((int)pvVar6 + 0x60) - *(float *)((int)pvVar6 + 100)
                                     )) * 3.1415927,*(float *)((int)pvVar6 + 0x7c) * 0.017453292);
  bVar2 = moby->state;
  (moby->rotation).y = (float)dVar16;
  if (bVar2 < 2) {
    if (bVar2 == 0) {
      dVar16 = (double)MB_randRot();
      *(float *)((int)pvVar6 + 0x78) = (float)dVar16;
      *(undefined4 *)((int)pvVar6 + 0x6c) = 0xffffffff;
      *(undefined4 *)((int)pvVar6 + 0x84) = 0;
      moby->state = '\x04';
    }
    else {
      dVar16 = (double)*(float *)((int)pvVar6 + 0x70);
      OrganicDelt
                ((float)dVar19,g_FrameTimeSq * 4.0,g_FrameTimeSq * 4.0,g_FrameTime * 4.0,
                 (float *)((int)pvVar6 + 0x70),0x720000,(float *)((int)pvVar6 + 0x74));
      uVar7 = (int)*(uint *)((int)pvVar6 + 0x70) >> 0x1f;
      if ((int)((uVar7 >> 1 ^ *(uint *)((int)pvVar6 + 0x70)) - uVar7) < 0x3f800000) {
        dVar19 = (double)((float)(dVar19 - (double)*(float *)((int)pvVar6 + 0x70)) /
                         (float)(dVar19 - dVar16));
        M1270_002367c0(lVar11,uVar10 - 0x80,uVar10 - 0x70);
        local_80 = (float)(dVar19 * (double)(float)((double)GameCamera.posX - (double)local_80) +
                          (double)local_80);
        local_7c = (float)(dVar19 * (double)(float)((double)GameCamera.posY - (double)local_7c) +
                          (double)local_7c);
        local_78 = (float)(dVar19 * (double)(float)((double)GameCamera.posZ - (double)local_78) +
                          (double)local_78);
        dVar16 = (double)FastDiffRots((double)GameCamera.rot.elevation,(double)local_6c);
        dVar16 = (double)FastWrapRot((float)(dVar19 * dVar16),local_6c);
        local_6c = (float)dVar16;
        dVar16 = (double)FastDiffRots((double)GameCamera.rot.radius,(double)local_68);
        dVar16 = (double)FastWrapRot((float)(dVar19 * dVar16),local_68);
        local_68 = (float)dVar16;
        Camera_SetMobyDrivenTargetPos((float *)(uVar10 - 0x80));
        Camera_SetMobyDrivenTargetRot((float *)(uVar10 - 0x70));
      }
      else {
        uVar3 = moby->setByGroup;
        moby->setByGroup = '\x01';
        moby->state = uVar3;
      }
    }
  }
  else if (bVar2 < 6) {
    if (bVar2 < 4) {
      iVar13 = IsMobyPlayingSound(moby,*(int *)((int)pvVar6 + 0x6c));
      if (iVar13 == 0) {
        iVar13 = PlayMobySound(0,4,moby);
        *(int *)((int)pvVar6 + 0x6c) = iVar13;
      }
      if (moby->setByGroup != '\0') {
        M1270_002367c0(lVar11,uVar10 - 0x60,uVar10 - 0x50);
        Camera_SetMobyDrivenTargetPos((float *)(uVar10 - 0x60));
        Camera_SetMobyDrivenTargetRot((float *)(uVar10 - 0x50));
      }
      if (moby->state == '\x02') {
        fVar4 = *(float *)((int)pvVar6 + 0x60);
      }
      else {
        fVar4 = *(float *)((int)pvVar6 + 100);
      }
      dVar16 = (double)fVar4;
      OrganicDelt
                (fVar4,g_FrameTimeSq * 8.0,g_FrameTimeSq * 8.0,g_FrameTime * 40.0,
                 &(moby->pos).z,0x720000,(float *)((int)pvVar6 + 0x68));
      if (ABS((float)((double)(moby->pos).z - dVar16)) == 0.0) {
        auVar20 = ZEXT416(0xffffffff);
        auVar20 = auVar20 | auVar20 << 0x20 | auVar20 << 0x40 | auVar20 << 0x60;
        auVar21 = vectorShiftLeftIntegerWord(auVar20,auVar20);
        auVar20 = loadVectorLeftIndexed(0x1c,0x236b48);
        auVar20 = auVar20 >> 0x60 & (GPiece<16>)0xffffffff;
        auVar22 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
        auVar20 = vectorMultiplyAddFloatingPoint
                            (auVar22,auVar20 | auVar20 << 0x20 | auVar20 << 0x40 | auVar20 << 0x60,
                             auVar21);
        auVar20 = vectorConvertToSignedFixedPointWordSaturate(auVar20,0);
        auVar20 = auVar20 >> 0x60 & (GPiece<16>)0xffffffff;
        uVar8 = storeVectorElementWordIndexed
                          (auVar20 | auVar20 << 0x20 | auVar20 << 0x40 | auVar20 << 0x60,0x84,
                           ZEXT48(pvVar6));
        *(undefined4 *)((int)pvVar6 + 0x84U & 0xfffffffc) = uVar8;
        moby->state = (char)(ZERO_MASK((2 - (uint)moby->state))) + '\a';
        if (moby->setByGroup != '\0') {
          Camera_DeactivateMobyDrivenCam(2);
        }
      }
    }
    else {
      dVar19 = (double)FastWrapRot
                                 (*(float *)((int)pvVar6 + 0x78),g_FrameTime * 6.2831855);
      dVar16 = (double)(float)(3.141592502593994 - dVar19);
      if (dVar19 - (double)(float)(3.141592502593994 - dVar19) < 0.0) {
        dVar16 = dVar19;
      }
      dVar17 = (double)(float)(-3.141592502593994 - dVar19);
      if ((double)(float)(-3.141592502593994 - dVar19) - dVar16 < 0.0) {
        dVar17 = dVar16;
      }
      dVar16 = (double)(float)(dVar17 * dVar17);
      dVar18 = (double)(float)(dVar16 * (double)(float)(dVar16 * dVar17));
      *(float *)((int)pvVar6 + 0x78) = (float)dVar19;
      dVar19 = (double)(float)(dVar16 * dVar18);
      lVar12 = FastDoubleToInt
                         ((double)((((float)(dVar16 * dVar19) * 2.601887e-06 +
                                    (float)(dVar19 * -0.0001980741071747616 +
                                           (double)(float)(dVar18 * 0.008333025500178337 +
                                                          (double)(float)((double)(float)(dVar16 * 
                                                  dVar17) * -0.16666656732559204 + dVar17)))) * 4.0
                                   - 3.0) * 128.0));
      fVar9 = g_heroGroundZ;
      fVar4 = (moby->pos).x;
      fVar5 = (moby->pos).y;
      lVar14 = lVar12 + (lVar12 + -0x20 >> 0x3f & 0x20U - lVar12);
      bVar2 = moby->state;
      uVar15 = lVar14 + (0x80 - lVar12 >> 0x3f & 0x80U - lVar14);
      bVar1 = g_standingOnMoby != moby;
      moby->glowRgba =
           (uint)((uVar15 & 0xffffffff) << 8) | (uint)uVar15 | (uint)((uVar15 & 0xffffffff) << 0x10)
           | 0x80000000;
      if (((bVar1) || (g_framesNotGrounded != 0)) ||
         (0.5 <= SQRT((g_heroPosition.x - fVar4) * (g_heroPosition.x - fVar4) +
                      (g_heroPosition.y - fVar5) * (g_heroPosition.y - fVar5)))) {
        if (bVar2 == 4) {
          fVar4 = SQRT((fVar4 - g_heroPosition.x) * (fVar4 - g_heroPosition.x) +
                       (fVar5 - g_heroPosition.y) * (fVar5 - g_heroPosition.y));
          if (((ABS(fVar9 - *(float *)((int)pvVar6 + 100)) < 2.0) && (fVar4 < 32.0)) &&
             (5.0 < fVar4)) {
            moby->state = '\x03';
            moby->setByGroup = '\0';
            *(float *)((int)pvVar6 + 0x68) = g_FrameTime * -5.0;
          }
        }
        else if (((bVar2 == 5) &&
                 (fVar4 = SQRT((fVar4 - g_heroPosition.x) * (fVar4 - g_heroPosition.x) +
                               (fVar5 - g_heroPosition.y) * (fVar5 - g_heroPosition.y)),
                 ABS(fVar9 - *(float *)((int)pvVar6 + 0x60)) < 2.0)) &&
                ((fVar4 < 32.0 && (5.0 < fVar4)))) {
          moby->state = '\x02';
          moby->setByGroup = '\0';
          *(float *)((int)pvVar6 + 0x68) = g_FrameTime * 5.0;
        }
      }
      else {
        moby->glowRgba = 0x80208020;
        moby->state = '\x01';
        moby->setByGroup = (char)(ZERO_MASK((5 - (uint)bVar2))) + '\x03';
        TransitionMovement(0x72,1);
        SetCameraPosition(0x951500,0x951510,1,0,0);
        *(undefined4 *)((int)pvVar6 + 0x70) = 0;
      }
    }
  }
  else if (bVar2 < 8) {
    if ((*(int *)((int)pvVar6 + 0x84) != 0) &&
       (iVar13 = FastDecTimerS32(ZEXT48(pvVar6) + 0x84), iVar13 != 0)) {
      TransitionMovement(0,0);
    }
    iVar13 = IsMobyPlayingSound(moby,*(int *)((int)pvVar6 + 0x6c));
    if (iVar13 != 0) {
      sound_Kill(*(int *)((int)pvVar6 + 0x6c));
      *(undefined4 *)((int)pvVar6 + 0x6c) = 0xffffffff;
    }
    if (g_standingOnMoby != moby) {
      moby->state = ((byte)(ZERO_MASK((7 - (uint)moby->state))) & 1) + 4;
    }
  }
  local_a0.x = local_a0.x + (moby->pos).x;
  local_a0.y = local_a0.y + (moby->pos).y;
  local_a0.z = local_a0.z + (moby->pos).z;
  MB_GetOrientation
            ((MobyInstance *)((int)pvVar6 + 0x20),&local_a0,uVar10 - 0x90,lVar11 + 0x40);
  return;
}


