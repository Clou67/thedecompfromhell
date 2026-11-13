// game/update/moby1380.cpp -- reconstructed from NPEA00385 EBOOT
// STATUS: NOT STARTED (raw Ghidra output)
// 4 functions, 0x265a10-0x2666e8
#include "game/update/moby1380.h"
#include "game/camera.h"
#include "game/collproc.h"
#include "game/hero.h"
#include "game/mobyfunc.h"
#include "game/mobyutil.h"
#include "game/sound.h"
#include "game/update/camera5.h"
#include "idol/fastfunc.h"

// 0x0265a10 (0x14 bytes)
void M1380_00265a10(void)

{
  DAT_0079c6cc = 0x10000;
  return;
}


// 0x0265a28 (0xfc bytes)
void M1380_00265a28(int param_1)

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
  float *pfVar17;
  Spline *pSVar18;
  longlong lVar19;
  
  iVar16 = *(int *)(param_1 + 0x78);
  if ((g_onMagnerail != 0) && (g_standingOnMoby == param_1)) {
    fVar1 = *(float *)(param_1 + 0xc0);
    fVar2 = *(float *)(param_1 + 0xd0);
    fVar3 = *(float *)(param_1 + 0xe0);
    pfVar17 = (float *)&DAT_0079c6f0;
    fVar4 = *(float *)(param_1 + 0xc4);
    lVar19 = 0xb;
    pSVar18 = Splines[*(int *)(iVar16 + 0x80)];
    fVar5 = *(float *)(param_1 + 0xd4);
    fVar6 = *(float *)(param_1 + 0xe4);
    fVar7 = *(float *)(param_1 + 200);
    fVar8 = *(float *)(param_1 + 0xd8);
    fVar9 = *(float *)(param_1 + 0xe8);
    fVar10 = *(float *)(param_1 + 0x10);
    fVar11 = *(float *)(param_1 + 0x14);
    fVar12 = *(float *)(param_1 + 0x18);
    do {
      fVar13 = *pfVar17;
      fVar14 = pfVar17[2];
      fVar15 = pfVar17[1];
      pSVar18->points[0].w = 1.0;
      pfVar17 = pfVar17 + 4;
      pSVar18->points[0].x = fVar15 * fVar2 + fVar14 * fVar3 + fVar13 * fVar1 + fVar10;
      pSVar18->points[0].y = fVar15 * fVar5 + fVar14 * fVar6 + fVar13 * fVar4 + fVar11;
      pSVar18->points[0].z = fVar15 * fVar8 + fVar14 * fVar9 + fVar13 * fVar7 + fVar12;
      pSVar18 = (Spline *)pSVar18->points;
      lVar19 = lVar19 + -1;
    } while (lVar19 != 0);
    DAT_0096bfba = (undefined2)*(undefined4 *)(iVar16 + 0x80);
  }
  return;
}


// 0x0265b38 (0x29c bytes)
// inlined: FastAtan2 @0x265cc0
void M1380_00265b38(int param_1,float *param_2,undefined4 *param_3)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  ulonglong *puVar6;
  float fVar7;
  int iVar8;
  int iVar9;
  char acVar10 [4];
  ulonglong uVar11;
  longlong lVar12;
  longlong lVar13;
  ulonglong uVar14;
  longlong lVar15;
  longlong lVar16;
  float *pfVar17;
  longlong lVar18;
  
  uVar11 = ZEXT48(&stack0x00000000);
  lVar12 = uVar11 - 0x60;
  puVar6 = (ulonglong *)lVar12;
  *puVar6 = uVar11;
  fVar2 = GameCamera.posX - *(float *)(param_1 + 0x10);
  *param_2 = fVar2;
  fVar5 = GameCamera.posY - *(float *)(param_1 + 0x14);
  param_2[1] = fVar5;
  fVar7 = SQRT(fVar2 * fVar2 + fVar5 * fVar5);
  param_2[2] = GameCamera.posZ - *(float *)(param_1 + 0x18);
  acVar10 = GameCamera.posW;
  *(char (*) [4])(param_2 + 3) = GameCamera.posW;
  fVar1 = 0.0;
  fVar3 = fVar1;
  fVar4 = fVar1;
  if (fVar7 != 0.0) {
    fVar4 = 2.5 / fVar7;
    *(char (*) [4])(param_2 + 3) = acVar10;
    fVar3 = fVar2 * fVar4;
    fVar4 = fVar5 * fVar4;
  }
  *param_2 = fVar3;
  param_2[1] = fVar4;
  param_2[2] = 1.5;
  *param_2 = fVar3 + *(float *)(param_1 + 0x10);
  param_2[1] = fVar4 + *(float *)(param_1 + 0x14);
  fVar2 = *(float *)(param_1 + 0x18);
  param_3[3] = 0;
  param_3[1] = 0;
  *param_3 = 0;
  fVar3 = *param_2;
  param_2[2] = fVar2 + 1.5;
  param_3[2] = 0;
  fVar2 = DAT_00969db4 - param_2[1];
  fVar4 = ABS(g_heroCGPos - fVar3);
  *(float *)(puVar6 + 6) = g_heroCGPos - fVar3;
  fVar3 = ABS(fVar2);
  *(float *)((int)puVar6 + 0x34) = fVar2;
  *(float *)(puVar6 + 7) = fVar4 - fVar3;
  uVar14 = (ulonglong)(*(uint *)(puVar6 + 6) >> 0x1c) & 8 |
           (ulonglong)(*(uint *)(puVar6 + 7) >> 0x1e) & 2 |
           (ulonglong)(*(uint *)((int)puVar6 + 0x34) >> 0x1d) & 4;
  fVar2 = ABS(*(float *)(puVar6 + 6));
  if (*(float *)(puVar6 + 7) - 0.0 < 0.0) {
    fVar2 = fVar3;
  }
  fVar3 = *(float *)(&g_atanQuadrantTable + (int)(uVar14 << 2));
  fVar5 = ABS(*(float *)((int)puVar6 + 0x34));
  if (*(float *)(puVar6 + 7) - 0.0 < 0.0) {
    fVar5 = fVar4;
  }
  fVar4 = *(float *)(((uint)(uVar14 << 2) | 0x735900) + 4);
  if (0.0 < fVar2) {
    lVar16 = uVar11 - 0x50;
    lVar15 = uVar11 - 0x24;
    lVar13 = uVar11 - 0x14;
    lVar18 = 2;
    fVar2 = (fVar5 - fVar2) / (fVar5 + fVar2);
    fVar5 = fVar2 * fVar2;
    *(float *)(puVar6 + 9) = fVar2;
    *(float *)(puVar6 + 8) = fVar2;
    *(float *)((int)puVar6 + 0x44) = fVar2;
    *(float *)((int)puVar6 + 0x3c) = fVar2;
    fVar2 = fVar5 * fVar5;
    *(float *)(puVar6 + 8) = *(float *)(puVar6 + 8) * fVar5;
    *(float *)((int)puVar6 + 0x44) = *(float *)((int)puVar6 + 0x44) * fVar2;
    *(float *)(puVar6 + 9) = *(float *)(puVar6 + 9) * fVar2 * fVar5;
    do {
      *(float *)((int)lVar16 + 0x3c) = *(float *)((int)lVar16 + 0x2c) * fVar2 * fVar2;
      iVar8 = (int)lVar15;
      lVar16 = lVar16 + 8;
      lVar15 = lVar15 + 8;
      *(float *)((int)lVar13 + 4) = *(float *)(iVar8 + 4) * fVar2 * fVar2;
      lVar13 = lVar13 + 8;
      lVar18 = lVar18 + -1;
    } while (lVar18 != 0);
    lVar16 = uVar11 - 0x24;
    pfVar17 = (float *)&DAT_007358e0;
    lVar18 = 4;
    lVar13 = lVar16;
    lVar15 = lVar12;
    do {
      fVar2 = *pfVar17;
      fVar5 = pfVar17[1];
      pfVar17 = pfVar17 + 2;
      *(float *)((int)lVar15 + 0x3c) = *(float *)((int)lVar15 + 0x3c) * fVar2;
      lVar15 = lVar15 + 8;
      *(float *)((int)lVar13 + 4) = *(float *)((int)lVar13 + 4) * fVar5;
      lVar13 = lVar13 + 8;
      lVar18 = lVar18 + -1;
    } while (lVar18 != 0);
    lVar13 = 2;
    do {
      iVar8 = (int)lVar12;
      lVar12 = lVar12 + 0x10;
      iVar9 = (int)lVar16;
      lVar16 = lVar16 + 0x10;
      fVar1 = fVar1 + *(float *)(iVar8 + 0x3c) + *(float *)(iVar9 + 4) + *(float *)(iVar9 + 8) +
              *(float *)(iVar9 + 0xc);
      lVar13 = lVar13 + -1;
    } while (lVar13 != 0);
    fVar1 = (fVar1 + 0.7853982) * fVar3 + fVar4;
  }
  param_3[2] = fVar1;
  param_3[1] = 0;
  return;
}


// 0x0265e20 (0x8c8 bytes)
/* Moby 1380 */

void UpdateMoby_1380(MobyInstance *moby)

{
  byte bVar1;
  u8 uVar2;
  float fVar3;
  void *pvVar4;
  char cVar5;
  MobyInstance *pMVar6;
  short sVar7;
  ulonglong uVar8;
  longlong lVar9;
  uint uVar13;
  int iVar14;
  longlong lVar10;
  longlong lVar11;
  ulonglong uVar12;
  double dVar15;
  double dVar16;
  double dVar17;
  double dVar18;
  double dVar19;
  float fVar20;
  Vec4 local_80;
  f32 local_70;
  f32 local_6c;
  f32 local_68;
  f32 local_64;
  float local_60;
  float local_5c;
  float local_58;
  float local_4c;
  float local_48;
  
  lVar9 = (longlong)(int)moby;
  uVar8 = ZEXT48(&stack0x00000000);
  local_80.x = -(moby->pos).x;
  fVar20 = (moby->pos).z;
  local_80.y = -(moby->pos).y;
  pvVar4 = moby->pVar;
  local_80.z = -fVar20;
  local_80.w = (moby->pos).w;
  local_70 = (moby->rotation).x;
  local_6c = (moby->rotation).y;
  local_68 = (moby->rotation).z;
  local_64 = (moby->rotation).w;
  if (*(int *)((int)pvVar4 + 0x7c) == 0) {
    fVar3 = 1.0;
    fVar20 = 1.0 - (fVar20 - *(float *)((int)pvVar4 + 100)) /
                   (*(float *)((int)pvVar4 + 0x60) - *(float *)((int)pvVar4 + 100));
    if ((fVar20 <= 1.0) && (fVar3 = fVar20, fVar20 < 0.0)) {
      fVar3 = 0.0;
    }
    (moby->rotation).y = fVar3 * 3.1415927;
    fVar20 = MB_WrapRot(fVar3 * 3.1415927);
    (moby->rotation).y = fVar20;
  }
  bVar1 = moby->state;
  if (bVar1 < 4) {
    if (bVar1 == 0) {
      dVar15 = (double)MB_randRot();
      *(float *)((int)pvVar4 + 0x78) = (float)dVar15;
      *(undefined4 *)((int)pvVar4 + 0x6c) = 0xffffffff;
      if (*(int *)((int)pvVar4 + 0x80) == -1) {
        DeleteMoby(moby);
        return;
      }
      if (Splines[*(int *)((int)pvVar4 + 0x80)]->cnt != 0xb) {
        DeleteMoby(moby);
        return;
      }
      moby->state = '\x06';
      goto LAB_00266674;
    }
    if (bVar1 < 2) {
      dVar19 = 1.0;
      dVar15 = (double)*(float *)((int)pvVar4 + 0x70);
      OrganicDelt
                (1.0,g_FrameTimeSq * 4.0,g_FrameTimeSq * 4.0,g_FrameTime * 4.0,
                 (float *)((int)pvVar4 + 0x70),0x720000,(float *)((int)pvVar4 + 0x74));
      uVar13 = (int)*(uint *)((int)pvVar4 + 0x70) >> 0x1f;
      if ((int)((uVar13 >> 1 ^ *(uint *)((int)pvVar4 + 0x70)) - uVar13) < 0x3f800000) {
        dVar19 = (double)((float)(dVar19 - (double)*(float *)((int)pvVar4 + 0x70)) /
                         (float)(dVar19 - dVar15));
        M1380_00265b38(lVar9,uVar8 - 0x60,uVar8 - 0x50);
        local_60 = (float)(dVar19 * (double)(float)((double)GameCamera.posX - (double)local_60) +
                          (double)local_60);
        local_5c = (float)(dVar19 * (double)(float)((double)GameCamera.posY - (double)local_5c) +
                          (double)local_5c);
        local_58 = (float)(dVar19 * (double)(float)((double)GameCamera.posZ - (double)local_58) +
                          (double)local_58);
        dVar15 = (double)FastDiffRots((double)GameCamera.rot.elevation,(double)local_4c);
        dVar15 = (double)FastWrapRot((float)(dVar19 * dVar15),local_4c);
        local_4c = (float)dVar15;
        dVar15 = (double)FastDiffRots((double)GameCamera.rot.radius,(double)local_48);
        dVar15 = (double)FastWrapRot((float)(dVar19 * dVar15),local_48);
        local_48 = (float)dVar15;
        Camera_SetMobyDrivenTargetPos((float *)(uVar8 - 0x60));
        Camera_SetMobyDrivenTargetRot((float *)(uVar8 - 0x50));
      }
      else {
        uVar2 = moby->setByGroup;
        moby->setByGroup = '\x01';
        moby->state = uVar2;
      }
      goto LAB_00266674;
    }
    M1380_00265a28(lVar9);
  }
  else {
    if (7 < bVar1) {
      if (bVar1 < 10) {
        iVar14 = IsMobyPlayingSound(moby,*(int *)((int)pvVar4 + 0x6c));
        if (iVar14 != 0) {
          sound_Kill(*(int *)((int)pvVar4 + 0x6c));
          *(undefined4 *)((int)pvVar4 + 0x6c) = 0xffffffff;
        }
        if (g_standingOnMoby != moby) {
          moby->state = ((byte)(ZERO_MASK((9 - (uint)moby->state))) & 1) + 6;
        }
      }
      goto LAB_00266674;
    }
    if (5 < bVar1) {
      dVar19 = (double)FastWrapRot
                                 (*(float *)((int)pvVar4 + 0x78),g_FrameTime * 6.2831855);
      dVar15 = (double)(float)(3.141592502593994 - dVar19);
      if (dVar19 - (double)(float)(3.141592502593994 - dVar19) < 0.0) {
        dVar15 = dVar19;
      }
      dVar16 = (double)(float)(-3.141592502593994 - dVar19);
      if ((double)(float)(-3.141592502593994 - dVar19) - dVar15 < 0.0) {
        dVar16 = dVar15;
      }
      dVar15 = (double)(float)(dVar16 * dVar16);
      dVar18 = (double)(float)(dVar15 * (double)(float)(dVar15 * dVar16));
      dVar17 = (double)(float)(dVar15 * dVar18);
      *(float *)((int)pvVar4 + 0x78) = (float)dVar19;
      lVar10 = FastDoubleToInt
                         ((double)((((float)(dVar15 * dVar17) * 2.601887e-06 +
                                    (float)(dVar17 * -0.0001980741071747616 +
                                           (double)(float)(dVar18 * 0.008333025500178337 +
                                                          (double)(float)((double)(float)(dVar15 * 
                                                  dVar16) * -0.16666656732559204 + dVar16)))) * 4.0
                                   - 3.0) * 128.0));
      sVar7 = g_onMagnerail;
      pMVar6 = g_standingOnMoby;
      fVar20 = (moby->pos).x;
      fVar3 = (moby->pos).y;
      lVar11 = lVar10 + (lVar10 + -0x20 >> 0x3f & 0x20U - lVar10);
      uVar12 = lVar11 + (0x80 - lVar10 >> 0x3f & 0x80U - lVar11);
      moby->glowRgba =
           (uint)((uVar12 & 0xffffffff) << 8) | (uint)uVar12 | (uint)((uVar12 & 0xffffffff) << 0x10)
           | 0x80000000;
      if ((sVar7 != 0) || (*(int *)((int)pvVar4 + 0x7c) == 0)) {
        if ((pMVar6 != moby) ||
           ((g_framesNotGrounded != 0 ||
            (0.5 <= SQRT((g_heroPosition.x - fVar20) * (g_heroPosition.x - fVar20) +
                         (g_heroPosition.y - fVar3) * (g_heroPosition.y - fVar3)))))) {
          if (moby->state == '\x06') {
            fVar20 = SQRT((fVar20 - g_heroPosition.x) * (fVar20 - g_heroPosition.x) +
                          (fVar3 - g_heroPosition.y) * (fVar3 - g_heroPosition.y));
            if (((ABS(g_heroGroundZ - *(float *)((int)pvVar4 + 100)) <
                  ABS(*(float *)((int)pvVar4 + 0x60) - *(float *)((int)pvVar4 + 100)) * 0.5) &&
                (fVar20 < 32.0)) && (2.0 < fVar20)) {
              moby->state = '\x03';
              moby->setByGroup = '\0';
              *(undefined4 *)((int)pvVar4 + 0x68) = 0;
            }
          }
          else if ((((moby->state == '\a') &&
                    (fVar20 = SQRT((fVar20 - g_heroPosition.x) * (fVar20 - g_heroPosition.x) +
                                   (fVar3 - g_heroPosition.y) * (fVar3 - g_heroPosition.y)),
                    ABS(g_heroGroundZ - *(float *)((int)pvVar4 + 0x60)) <
                    ABS(*(float *)((int)pvVar4 + 0x60) - *(float *)((int)pvVar4 + 100)) * 0.5)) &&
                   (fVar20 < 32.0)) && (2.0 < fVar20)) {
            moby->state = '\x02';
            moby->setByGroup = '\0';
            *(undefined4 *)((int)pvVar4 + 0x68) = 0;
          }
        }
        else {
          PlayMobySound(1,0,moby);
          moby->state = (char)(ZERO_MASK((7 - (uint)moby->state))) + '\x03';
        }
      }
      goto LAB_00266674;
    }
  }
  uVar13 = FastLerpColor(0x3fb99999a0000000,moby->glowRgba,0xffffffff80808040);
  moby->glowRgba = uVar13;
  if ((moby->state == '\x02') && (g_standingOnMoby != moby)) {
    moby->state = '\x04';
  }
  else if ((moby->state == '\x03') && (g_standingOnMoby != moby)) {
    moby->state = '\x05';
  }
  iVar14 = IsMobyPlayingSound(moby,*(int *)((int)pvVar4 + 0x6c));
  if (iVar14 == 0) {
    iVar14 = PlayMobySound(0,4,moby);
    *(int *)((int)pvVar4 + 0x6c) = iVar14;
  }
  if ((moby->state == '\x02') || (moby->state == '\x04')) {
    fVar20 = *(float *)((int)pvVar4 + 0x60);
  }
  else {
    fVar20 = *(float *)((int)pvVar4 + 100);
  }
  dVar15 = (double)fVar20;
  OrganicDelt
            (fVar20,g_FrameTimeSq * 0.3,g_FrameTimeSq * 0.3,g_FrameTime * 3.0,&(moby->pos).z
             ,0x720000,(float *)((int)pvVar4 + 0x68));
  if (ABS((float)((double)(moby->pos).z - dVar15)) == 0.0) {
    bVar1 = moby->state;
    cVar5 = (char)(ZERO_MASK((2 - (uint)bVar1))) + '\t';
    cVar5 = cVar5 + ((byte)(ZERO_MASK((5 - (uint)bVar1))) & 7U - cVar5);
    moby->state = cVar5 + ((byte)(ZERO_MASK((4 - (uint)bVar1))) & 6U - cVar5);
    if (moby->setByGroup != '\0') {
      TransitionMovement(0,0);
    }
    iVar14 = IsMobyPlayingSound(moby,*(int *)((int)pvVar4 + 0x6c));
    if (iVar14 != 0) {
      sound_Kill(*(int *)((int)pvVar4 + 0x6c));
      *(undefined4 *)((int)pvVar4 + 0x6c) = 0xffffffff;
    }
  }
LAB_00266674:
  local_80.x = local_80.x + (moby->pos).x;
  local_80.y = local_80.y + (moby->pos).y;
  local_80.z = local_80.z + (moby->pos).z;
  MB_GetOrientation
            ((MobyInstance *)((int)pvVar4 + 0x20),&local_80,uVar8 - 0x70,lVar9 + 0x40);
  return;
}


