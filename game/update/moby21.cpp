// game/update/moby21.cpp -- reconstructed from NPEA00385 EBOOT
// STATUS: NOT STARTED (raw Ghidra output)
// 3 functions, 0x3108cc-0x31152c
// shared update function UpdateMoby_{21_244}; registered for oClasses 21, 244
#include "game/update/moby21.h"
#include "game/camera.h"
#include "game/collproc.h"
#include "game/hero.h"
#include "game/mobyfunc.h"
#include "game/mobyutil.h"
#include "game/sound.h"
#include "game/update/camera5.h"
#include "idol/fastfunc.h"

// 0x03108cc (0x14 bytes)
void M244_003108cc(void)

{
  DAT_007ff83c = 0x10000;
  return;
}


// 0x0310918 (0x3ac bytes)
// inlined: FastAtan2 @0x310b8c
void M244_00310918(int param_1,float *param_2,undefined4 *param_3)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  ulonglong *puVar6;
  int iVar7;
  int iVar8;
  ulonglong uVar9;
  longlong lVar10;
  longlong lVar11;
  ulonglong uVar12;
  longlong lVar13;
  longlong lVar14;
  float *pfVar15;
  ulonglong unaff_r29;
  ulonglong unaff_r30;
  ulonglong unaff_r31;
  ulonglong in_LR;
  longlong lVar16;
  double dVar17;
  double dVar18;
  double dVar19;
  double dVar20;
  ulonglong in_f30;
  double dVar21;
  ulonglong in_f31;
  double dVar22;
  
  uVar9 = ZEXT48(&stack0x00000000);
  lVar10 = uVar9 - 0xd0;
  puVar6 = (ulonglong *)lVar10;
  *puVar6 = uVar9;
  puVar6[0x1c] = in_LR;
  puVar6[0x18] = in_f30;
  puVar6[0x19] = in_f31;
  puVar6[0x15] = unaff_r29;
  puVar6[0x16] = unaff_r30;
  puVar6[0x17] = unaff_r31;
  dVar21 = 2.5;
  dVar22 = 1.5;
  if (((*(byte *)(param_1 + 0xbc) < 2) || ((*(byte *)(param_1 + 0xbc) & 1) == 0)) &&
     ((*(byte *)(param_1 + 0x20) < 2 || ((*(byte *)(param_1 + 0x20) & 1) == 0)))) {
    dVar17 = (double)FastWrapRot(*(float *)(param_1 + 0x48),1.5707964);
  }
  else {
    dVar17 = (double)FastDiffRots((double)*(float *)(param_1 + 0x48),0x3ff921fb60000000);
  }
  if (*(short *)(param_1 + 0xa6) == 0x15) {
    dVar21 = 2.0;
    dVar22 = 1.2000000476837158;
  }
  fVar1 = (float)(dVar17 + 1.570796251296997);
  dVar19 = (double)(float)(3.141592502593994 - dVar17);
  if (dVar17 - (double)(float)(3.141592502593994 - dVar17) < 0.0) {
    dVar19 = dVar17;
  }
  fVar2 = 3.1415925 - fVar1;
  if (fVar1 - (3.1415925 - fVar1) < 0.0) {
    fVar2 = fVar1;
  }
  dVar18 = (double)(float)(-3.141592502593994 - dVar17);
  if ((double)(float)(-3.141592502593994 - dVar17) - dVar19 < 0.0) {
    dVar18 = dVar19;
  }
  fVar3 = -3.1415925 - fVar1;
  if ((-3.1415925 - fVar1) - fVar2 < 0.0) {
    fVar3 = fVar2;
  }
  dVar17 = (double)(float)(dVar18 * dVar18);
  fVar5 = fVar3 * fVar3;
  dVar20 = (double)(float)(dVar17 * (double)(float)(dVar17 * dVar18));
  fVar2 = fVar5 * fVar5 * fVar3;
  dVar19 = (double)(float)(dVar17 * dVar20);
  fVar4 = fVar5 * fVar2;
  fVar1 = (float)((double)((float)(dVar17 * dVar19) * 2.601887e-06 +
                          (float)(dVar19 * -0.0001980741071747616 +
                                 (double)(float)(dVar20 * 0.008333025500178337 +
                                                (double)(float)((double)(float)(dVar17 * dVar18) *
                                                                -0.16666656732559204 + dVar18)))) *
                 dVar21);
  fVar2 = (float)((double)(fVar5 * fVar4 * 2.601887e-06 +
                          fVar4 * -0.0001980741 +
                          fVar2 * 0.0083330255 + fVar5 * fVar3 * -0.16666657 + fVar3) * dVar21);
  param_2[1] = fVar1;
  fVar3 = 0.0;
  param_2[2] = (float)dVar22;
  *param_2 = fVar2;
  *param_2 = fVar2 + *(float *)(param_1 + 0x10);
  param_2[1] = fVar1 + *(float *)(param_1 + 0x14);
  fVar1 = *(float *)(param_1 + 0x18);
  param_3[3] = 0;
  param_3[1] = 0;
  *param_3 = 0;
  fVar2 = *param_2;
  param_2[2] = (float)(dVar22 + (double)fVar1);
  param_3[2] = 0;
  fVar1 = DAT_00969db4 - param_2[1];
  fVar4 = ABS(g_heroCGPos - fVar2);
  *(float *)(puVar6 + 0xe) = g_heroCGPos - fVar2;
  fVar2 = ABS(fVar1);
  *(float *)((int)puVar6 + 0x74) = fVar1;
  *(float *)(puVar6 + 0xf) = fVar4 - fVar2;
  uVar12 = (ulonglong)(*(uint *)(puVar6 + 0xe) >> 0x1c) & 8 |
           (ulonglong)(*(uint *)(puVar6 + 0xf) >> 0x1e) & 2 |
           (ulonglong)(*(uint *)((int)puVar6 + 0x74) >> 0x1d) & 4;
  fVar1 = ABS(*(float *)(puVar6 + 0xe));
  if (*(float *)(puVar6 + 0xf) - 0.0 < 0.0) {
    fVar1 = fVar2;
  }
  fVar2 = *(float *)(&g_atanQuadrantTable + (int)(uVar12 << 2));
  fVar5 = ABS(*(float *)((int)puVar6 + 0x74));
  if (*(float *)(puVar6 + 0xf) - 0.0 < 0.0) {
    fVar5 = fVar4;
  }
  fVar4 = *(float *)(((uint)(uVar12 << 2) | 0x735900) + 4);
  if (0.0 < fVar1) {
    lVar14 = uVar9 - 0xc0;
    lVar11 = uVar9 - 0x44;
    lVar13 = uVar9 - 0x54;
    lVar16 = 2;
    fVar1 = (fVar5 - fVar1) / (fVar5 + fVar1);
    fVar5 = fVar1 * fVar1;
    *(float *)(puVar6 + 0x11) = fVar1;
    *(float *)(puVar6 + 0x10) = fVar1;
    *(float *)((int)puVar6 + 0x84) = fVar1;
    *(float *)((int)puVar6 + 0x7c) = fVar1;
    fVar1 = fVar5 * fVar5;
    *(float *)(puVar6 + 0x10) = *(float *)(puVar6 + 0x10) * fVar5;
    *(float *)((int)puVar6 + 0x84) = *(float *)((int)puVar6 + 0x84) * fVar1;
    *(float *)(puVar6 + 0x11) = *(float *)(puVar6 + 0x11) * fVar1 * fVar5;
    do {
      *(float *)((int)lVar14 + 0x7c) = *(float *)((int)lVar14 + 0x6c) * fVar1 * fVar1;
      iVar7 = (int)lVar13;
      lVar13 = lVar13 + 8;
      lVar14 = lVar14 + 8;
      *(float *)((int)lVar11 + 4) = *(float *)(iVar7 + 4) * fVar1 * fVar1;
      lVar11 = lVar11 + 8;
      lVar16 = lVar16 + -1;
    } while (lVar16 != 0);
    lVar14 = uVar9 - 0x54;
    lVar16 = 4;
    pfVar15 = (float *)&DAT_007358e0;
    lVar11 = lVar14;
    lVar13 = lVar10;
    do {
      fVar1 = *pfVar15;
      fVar5 = pfVar15[1];
      pfVar15 = pfVar15 + 2;
      *(float *)((int)lVar13 + 0x7c) = *(float *)((int)lVar13 + 0x7c) * fVar1;
      lVar13 = lVar13 + 8;
      *(float *)((int)lVar11 + 4) = *(float *)((int)lVar11 + 4) * fVar5;
      lVar11 = lVar11 + 8;
      lVar16 = lVar16 + -1;
    } while (lVar16 != 0);
    lVar11 = 2;
    do {
      iVar7 = (int)lVar10;
      iVar8 = (int)lVar14;
      lVar10 = lVar10 + 0x10;
      lVar14 = lVar14 + 0x10;
      fVar3 = fVar3 + *(float *)(iVar7 + 0x7c) + *(float *)(iVar8 + 4) + *(float *)(iVar8 + 8) +
              *(float *)(iVar8 + 0xc);
      lVar11 = lVar11 + -1;
    } while (lVar11 != 0);
    fVar3 = (fVar3 + 0.7853982) * fVar2 + fVar4;
  }
  param_3[2] = fVar3;
  param_3[1] = 0;
  return;
}


// shared update function, registered for oClasses 21, 244
// 0x0310d18 (0x814 bytes)
/* Moby 21
   Moby 244 */

void UpdateMoby_21(MobyInstance *moby)

{
  bool bVar1;
  byte bVar2;
  u8 uVar3;
  float fVar4;
  float fVar5;
  void *pvVar6;
  uint uVar7;
  ulonglong uVar8;
  longlong lVar9;
  int iVar13;
  longlong lVar10;
  longlong lVar11;
  ulonglong uVar12;
  MobyInstance *pMVar14;
  double dVar15;
  double dVar16;
  double dVar17;
  double dVar18;
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
  
  lVar9 = (longlong)(int)moby;
  uVar8 = ZEXT48(&stack0x00000000);
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
      dVar17 = (double)MB_randRot();
      *(float *)((int)pvVar6 + 0x78) = (float)dVar17;
      *(undefined4 *)((int)pvVar6 + 0x6c) = 0xffffffff;
      moby->state = '\x03';
    }
    else {
      dVar18 = 1.0;
      dVar17 = (double)*(float *)((int)pvVar6 + 0x70);
      OrganicDelt
                (1.0,g_FrameTimeSq * 4.0,g_FrameTimeSq * 4.0,g_FrameTime * 4.0,
                 (float *)((int)pvVar6 + 0x70),0x720000,(float *)((int)pvVar6 + 0x74));
      uVar7 = (int)*(uint *)((int)pvVar6 + 0x70) >> 0x1f;
      if ((int)((uVar7 >> 1 ^ *(uint *)((int)pvVar6 + 0x70)) - uVar7) < 0x3f800000) {
        dVar18 = (double)((float)(dVar18 - (double)*(float *)((int)pvVar6 + 0x70)) /
                         (float)(dVar18 - dVar17));
        M244_00310918(lVar9,uVar8 - 0x80,uVar8 - 0x70);
        local_80 = (float)(dVar18 * (double)(float)((double)GameCamera.posX - (double)local_80) +
                          (double)local_80);
        local_7c = (float)(dVar18 * (double)(float)((double)GameCamera.posY - (double)local_7c) +
                          (double)local_7c);
        local_78 = (float)(dVar18 * (double)(float)((double)GameCamera.posZ - (double)local_78) +
                          (double)local_78);
        dVar17 = (double)FastDiffRots((double)GameCamera.rot.elevation,(double)local_6c);
        dVar17 = (double)FastWrapRot((float)(dVar18 * dVar17),local_6c);
        local_6c = (float)dVar17;
        dVar17 = (double)FastDiffRots((double)GameCamera.rot.radius,(double)local_68);
        dVar17 = (double)FastWrapRot((float)(dVar18 * dVar17),local_68);
        local_68 = (float)dVar17;
        Camera_SetMobyDrivenTargetPos((float *)(uVar8 - 0x80));
        Camera_SetMobyDrivenTargetRot((float *)(uVar8 - 0x70));
      }
      else {
        uVar3 = moby->setByGroup;
        moby->setByGroup = '\x01';
        moby->state = uVar3;
      }
    }
    goto LAB_003114b8;
  }
  if (5 < bVar2) {
    if (bVar2 < 8) {
      iVar13 = IsMobyPlayingSound(moby,*(int *)((int)pvVar6 + 0x6c));
      if (iVar13 != 0) {
        sound_Kill(*(int *)((int)pvVar6 + 0x6c));
        *(undefined4 *)((int)pvVar6 + 0x6c) = 0xffffffff;
      }
      if (((g_standingOnMoby != moby) || (g_framesNotGrounded != 0)) ||
         (fVar4 = g_heroPosition.y - (moby->pos).y, fVar5 = g_heroPosition.x - (moby->pos).x,
         0.5 < SQRT(fVar5 * fVar5 + fVar4 * fVar4))) {
        if (moby->state == '\a') {
          *(undefined1 *)((int)pvVar6 + 0x7c) = 0;
          moby->state = '\x05';
        }
        else {
          *(undefined1 *)((int)pvVar6 + 0x7c) = 0;
          moby->state = '\x04';
        }
      }
    }
    goto LAB_003114b8;
  }
  if (bVar2 < 4) {
    iVar13 = IsMobyPlayingSound(moby,*(int *)((int)pvVar6 + 0x6c));
    if (iVar13 == 0) {
      iVar13 = PlayMobySound(0,4,moby);
      *(int *)((int)pvVar6 + 0x6c) = iVar13;
    }
    if (moby->setByGroup != '\0') {
      M244_00310918(lVar9,uVar8 - 0x60,uVar8 - 0x50);
      Camera_SetMobyDrivenTargetPos((float *)(uVar8 - 0x60));
      Camera_SetMobyDrivenTargetRot((float *)(uVar8 - 0x50));
    }
    if (moby->state == '\x02') {
      fVar4 = *(float *)((int)pvVar6 + 0x60);
    }
    else {
      fVar4 = *(float *)((int)pvVar6 + 100);
    }
    dVar17 = (double)fVar4;
    OrganicDelt
              (fVar4,g_FrameTimeSq * 8.0,g_FrameTimeSq * 8.0,g_FrameTime * 40.0,
               &(moby->pos).z,0x720000,(float *)((int)pvVar6 + 0x68));
    if ((ABS((float)((double)(moby->pos).z - dVar17)) == 0.0) &&
       (moby->state = (char)(ZERO_MASK((2 - (uint)moby->state))) + '\a',
       moby->setByGroup != '\0')) {
      TransitionMovement(0,0);
      Camera_DeactivateMobyDrivenCam(1);
    }
    goto LAB_003114b8;
  }
  dVar18 = (double)FastWrapRot
                             (*(float *)((int)pvVar6 + 0x78),g_FrameTime * 6.2831855);
  dVar17 = (double)(float)(3.141592502593994 - dVar18);
  if (dVar18 - (double)(float)(3.141592502593994 - dVar18) < 0.0) {
    dVar17 = dVar18;
  }
  dVar15 = (double)(float)(-3.141592502593994 - dVar18);
  if ((double)(float)(-3.141592502593994 - dVar18) - dVar17 < 0.0) {
    dVar15 = dVar17;
  }
  dVar17 = (double)(float)(dVar15 * dVar15);
  dVar16 = (double)(float)(dVar17 * (double)(float)(dVar17 * dVar15));
  *(float *)((int)pvVar6 + 0x78) = (float)dVar18;
  dVar18 = (double)(float)(dVar17 * dVar16);
  lVar10 = FastDoubleToInt
                     ((double)((((float)(dVar17 * dVar18) * 2.601887e-06 +
                                (float)(dVar18 * -0.0001980741071747616 +
                                       (double)(float)(dVar16 * 0.008333025500178337 +
                                                      (double)(float)((double)(float)(dVar17 * 
                                                  dVar15) * -0.16666656732559204 + dVar15)))) * 4.0
                               - 3.0) * 128.0));
  pMVar14 = g_standingOnMoby;
  fVar4 = (moby->pos).x;
  fVar5 = (moby->pos).y;
  lVar11 = lVar10 + (lVar10 + -0x20 >> 0x3f & 0x20U - lVar10);
  uVar12 = lVar11 + (0x80 - lVar10 >> 0x3f & 0x80U - lVar11);
  bVar1 = g_standingOnMoby != moby;
  moby->glowRgba =
       (uint)((uVar12 & 0xffffffff) << 8) | (uint)uVar12 | (uint)((uVar12 & 0xffffffff) << 0x10) |
       0x80000000;
  if (((bVar1) || (g_framesNotGrounded != 0)) ||
     (1.1 < SQRT((g_heroPosition.x - fVar4) * (g_heroPosition.x - fVar4) +
                 (g_heroPosition.y - fVar5) * (g_heroPosition.y - fVar5)))) {
    *(undefined1 *)((int)pvVar6 + 0x7c) = 1;
    fVar4 = (moby->pos).x;
    fVar5 = (moby->pos).y;
    pMVar14 = g_standingOnMoby;
LAB_003112bc:
    if ((pMVar14 == moby && g_framesNotGrounded == 0) &&
       (SQRT((g_heroPosition.x - fVar4) * (g_heroPosition.x - fVar4) +
             (g_heroPosition.y - fVar5) * (g_heroPosition.y - fVar5)) < 0.5)) {
      bVar2 = moby->state;
      moby->glowRgba = 0x80208020;
      moby->state = '\x01';
      moby->setByGroup = (char)(ZERO_MASK((5 - (uint)bVar2))) + '\x03';
      TransitionMovement(0x72,1);
      SetCameraPosition(0x951500,0x951510,1,0,0);
      *(undefined4 *)((int)pvVar6 + 0x70) = 0;
      goto LAB_003114b8;
    }
  }
  else if (*(char *)((int)pvVar6 + 0x7c) != '\0') goto LAB_003112bc;
  if (moby->state == '\x04') {
    fVar4 = SQRT((fVar4 - g_heroPosition.x) * (fVar4 - g_heroPosition.x) +
                 (fVar5 - g_heroPosition.y) * (fVar5 - g_heroPosition.y));
    if (((ABS(g_heroGroundZ - *(float *)((int)pvVar6 + 100)) < 2.0) && (fVar4 < 32.0)) &&
       (5.0 < fVar4)) {
      moby->state = '\x03';
      moby->setByGroup = '\0';
      *(float *)((int)pvVar6 + 0x68) = g_FrameTime * -5.0;
    }
  }
  else if ((((moby->state == '\x05') &&
            (fVar4 = SQRT((fVar4 - g_heroPosition.x) * (fVar4 - g_heroPosition.x) +
                          (fVar5 - g_heroPosition.y) * (fVar5 - g_heroPosition.y)),
            ABS(g_heroGroundZ - *(float *)((int)pvVar6 + 0x60)) < 2.0)) && (fVar4 < 32.0)) &&
          (5.0 < fVar4)) {
    moby->state = '\x02';
    moby->setByGroup = '\0';
    *(float *)((int)pvVar6 + 0x68) = g_FrameTime * 5.0;
  }
LAB_003114b8:
  local_a0.x = local_a0.x + (moby->pos).x;
  local_a0.y = local_a0.y + (moby->pos).y;
  local_a0.z = local_a0.z + (moby->pos).z;
  MB_GetOrientation
            ((MobyInstance *)((int)pvVar6 + 0x20),&local_a0,uVar8 - 0x90,lVar9 + 0x40);
  return;
}


