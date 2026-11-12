// game/update/moby1178.cpp -- reconstructed from NPEA00385 EBOOT
// STATUS: NOT STARTED (raw Ghidra output)
// 2 functions, 0x1ee008-0x1ee690
#include "game/update/moby1178.h"
#include "game/camera.h"
#include "game/hero.h"
#include "game/mobyfunc.h"
#include "game/mobyutil.h"
#include "idol/fastfunc.h"

// 0x01ee008 (0x38c bytes)
void M1178_001ee008
               (double param_1,longlong param_2,longlong param_3,undefined8 param_4,float *param_5)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  int iVar6;
  int iVar7;
  int *piVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  int iVar15;
  int iVar16;
  double dVar17;
  
  dVar17 = (double)DAT_00765da8;
  fVar1 = 3.14159;
  piVar8 = *(int **)((int)Splines + (int)(param_2 << 2));
  iVar6 = *piVar8;
  fVar2 = (float)((double)(float)(param_1 + 1.0) / dVar17) * 3.14159;
  fVar5 = fVar1;
  if ((fVar2 <= 3.14159) && (fVar5 = fVar2, fVar2 < -3.14159)) {
    fVar5 = -3.14159;
  }
  fVar5 = fVar5 + 1.5707963;
  fVar2 = 3.1415925 - fVar5;
  if (fVar5 - (3.1415925 - fVar5) < 0.0) {
    fVar2 = fVar5;
  }
  fVar12 = -3.1415925 - fVar5;
  if ((-3.1415925 - fVar5) - fVar2 < 0.0) {
    fVar12 = fVar2;
  }
  fVar5 = fVar12 * fVar12;
  fVar2 = (float)(param_1 / dVar17) * 3.14159;
  fVar11 = fVar5 * fVar5 * fVar12;
  fVar3 = fVar5 * fVar11;
  fVar12 = (fVar5 * fVar3 * 2.601887e-06 +
            fVar3 * -0.0001980741 + fVar11 * 0.0083330255 + fVar5 * fVar12 * -0.16666657 + fVar12 +
           1.0) * 0.5;
  fVar5 = fVar1;
  if ((fVar2 <= 3.14159) && (fVar5 = fVar2, fVar2 < -3.14159)) {
    fVar5 = -3.14159;
  }
  fVar5 = fVar5 + 1.5707963;
  fVar2 = 3.1415925 - fVar5;
  if (fVar5 - (3.1415925 - fVar5) < 0.0) {
    fVar2 = fVar5;
  }
  fVar11 = -3.1415925 - fVar5;
  if ((-3.1415925 - fVar5) - fVar2 < 0.0) {
    fVar11 = fVar2;
  }
  fVar4 = fVar11 * fVar11;
  fVar3 = fVar4 * fVar4 * fVar11;
  fVar2 = (float)((double)(float)(1.0 - param_1) / dVar17) * 3.14159;
  fVar5 = fVar4 * fVar3;
  fVar11 = (fVar4 * fVar5 * 2.601887e-06 +
            fVar5 * -0.0001980741 + fVar3 * 0.0083330255 + fVar4 * fVar11 * -0.16666657 + fVar11 +
           1.0) * 0.5;
  fVar5 = fVar1;
  if ((fVar2 <= 3.14159) && (fVar5 = fVar2, fVar2 < -3.14159)) {
    fVar5 = -3.14159;
  }
  fVar5 = fVar5 + 1.5707963;
  fVar2 = 3.1415925 - fVar5;
  if (fVar5 - (3.1415925 - fVar5) < 0.0) {
    fVar2 = fVar5;
  }
  fVar3 = -3.1415925 - fVar5;
  if ((-3.1415925 - fVar5) - fVar2 < 0.0) {
    fVar3 = fVar2;
  }
  fVar5 = fVar3 * fVar3;
  fVar4 = fVar5 * fVar5 * fVar3;
  fVar2 = (float)((double)(float)(2.0 - param_1) / dVar17) * 3.14159;
  fVar9 = fVar5 * fVar4;
  fVar5 = (fVar5 * fVar9 * 2.601887e-06 +
           fVar9 * -0.0001980741 + fVar4 * 0.0083330255 + fVar5 * fVar3 * -0.16666657 + fVar3 + 1.0)
          * 0.5;
  if ((fVar2 <= 3.14159) && (fVar1 = fVar2, fVar2 < -3.14159)) {
    fVar1 = -3.14159;
  }
  fVar1 = fVar1 + 1.5707963;
  iVar15 = (int)param_3;
  iVar16 = iVar15 + iVar6 + -1;
  iVar16 = iVar16 - (iVar16 / iVar6) * iVar6;
  fVar2 = 3.1415925 - fVar1;
  if (fVar1 - (3.1415925 - fVar1) < 0.0) {
    fVar2 = fVar1;
  }
  iVar6 = (int)(param_3 << 4);
  fVar3 = -3.1415925 - fVar1;
  if ((-3.1415925 - fVar1) - fVar2 < 0.0) {
    fVar3 = fVar2;
  }
  fVar4 = fVar3 * fVar3;
  fVar9 = fVar4 * fVar4 * fVar3;
  fVar10 = fVar4 * fVar9;
  fVar1 = (float)piVar8[iVar16 * 4 + 4];
  iVar7 = *piVar8;
  *param_5 = fVar1 * fVar12;
  fVar2 = (float)piVar8[iVar16 * 4 + 5];
  fVar9 = (fVar4 * fVar10 * 2.601887e-06 +
           fVar10 * -0.0001980741 + fVar9 * 0.0083330255 + fVar4 * fVar3 * -0.16666657 + fVar3 + 1.0
          ) * 0.5;
  param_5[1] = fVar2 * fVar12;
  fVar3 = (float)piVar8[iVar16 * 4 + 6];
  param_5[2] = fVar3 * fVar12;
  fVar14 = 1.0 / (fVar12 + fVar11 + fVar5 + fVar9);
  fVar4 = (float)piVar8[iVar16 * 4 + 7];
  iVar16 = (iVar15 + 1) - ((iVar15 + 1) / iVar7) * iVar7;
  param_5[3] = fVar4;
  fVar13 = *(float *)((int)piVar8 + iVar6 + 0x10) * fVar11 + fVar1 * fVar12;
  fVar10 = *(float *)((int)piVar8 + iVar6 + 0x14) * fVar11 + fVar2 * fVar12;
  fVar12 = *(float *)((int)piVar8 + iVar6 + 0x18) * fVar11 + fVar3 * fVar12;
  *param_5 = fVar13;
  param_5[1] = fVar10;
  iVar6 = (iVar15 + 2) - ((iVar15 + 2) / iVar7) * iVar7;
  param_5[2] = fVar12;
  fVar13 = (float)piVar8[iVar16 * 4 + 4] * fVar5 + fVar13;
  fVar10 = (float)piVar8[iVar16 * 4 + 5] * fVar5 + fVar10;
  fVar12 = (float)piVar8[iVar16 * 4 + 6] * fVar5 + fVar12;
  *param_5 = fVar13;
  param_5[1] = fVar10;
  param_5[2] = fVar12;
  fVar1 = (float)piVar8[iVar6 * 4 + 4];
  fVar2 = (float)piVar8[iVar6 * 4 + 5];
  fVar5 = (float)piVar8[iVar6 * 4 + 6];
  param_5[3] = fVar4;
  *param_5 = (fVar1 * fVar9 + fVar13) * fVar14;
  param_5[1] = (fVar2 * fVar9 + fVar10) * fVar14;
  param_5[2] = (fVar5 * fVar9 + fVar12) * fVar14;
  return;
}


// 0x01ee3a8 (0x2e8 bytes)
/* Moby 1178 */

void UpdateMoby_1178(MobyInstance *moby)

{
  bool bVar1;
  float fVar2;
  void *pvVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  Vec4 local_c0;
  f32 local_b0;
  float local_ac;
  f32 local_a8;
  f32 local_a4;
  float local_a0;
  float local_90;
  float local_80;
  float local_70;
  
  local_c0.x = -(moby->pos).x;
  local_c0.y = -(moby->pos).y;
  local_c0.z = -(moby->pos).z;
  pvVar3 = moby->pVar;
  local_c0.w = (moby->pos).w;
  local_b0 = (moby->rotation).x;
  local_ac = (moby->rotation).y;
  local_a8 = (moby->rotation).z;
  local_a4 = (moby->rotation).w;
  *(undefined4 *)((int)pvVar3 + 0x5c) = 1;
  dVar11 = 0.01745329238474369;
  bVar1 = g_standingOnMoby == moby;
  fVar2 = DAT_00765dc4 * 0.017453292 * g_FrameTimeSq * DAT_00765db4 * *(float *)((int)pvVar3 + 0x60)
          + DAT_00765dc0 * 0.017453292 * g_FrameTimeSq * DAT_00765db0 * local_ac +
            *(float *)((int)pvVar3 + 0x60);
  *(float *)((int)pvVar3 + 0x60) = fVar2;
  if ((bVar1) && (g_framesNotGrounded == 0)) {
    dVar10 = (double)g_heroPosition.y;
    dVar9 = (double)g_heroPosition.x;
    dVar8 = (double)(moby->pos).y;
    dVar7 = (double)(moby->pos).x;
    dVar6 = (double)g_heroPosition.z;
    dVar5 = (double)(moby->pos).z;
    dVar4 = (double)g_heroPosition.w;
    FastNormalizeRMtx4(ZEXT48(&stack0x00000000) - 0xa0,(longlong)(int)moby + 0xc0);
    fVar2 = (float)((double)DAT_00765dbc * dVar11) * g_FrameTimeSq *
            DAT_00765dac *
            (float)((double)local_70 * dVar4 +
                   (double)(local_80 * (float)(dVar6 - dVar5) +
                           local_a0 * (float)(dVar9 - dVar7) + local_90 * (float)(dVar10 - dVar8)));
    if ((*(float *)((int)pvVar3 + 0x60) * fVar2 < 0.0) && ((moby->rotation).y * fVar2 < 0.0)) {
      fVar2 = fVar2 * 2.0;
    }
    if (0.0 <= fVar2) {
      fVar2 = (float)((double)DAT_00765db8 * dVar11) * g_FrameTimeSq + fVar2;
    }
    else {
      fVar2 = -((float)((double)DAT_00765db8 * dVar11) * g_FrameTimeSq - fVar2);
    }
    fVar2 = *(float *)((int)pvVar3 + 0x60) + fVar2;
    *(float *)((int)pvVar3 + 0x60) = fVar2;
    if (((float)((double)DAT_00765dc8 * dVar11) < ABS((moby->rotation).y)) &&
       ((g_heroStateType == 0 || (g_heroStateType == 1)))) {
      TransitionMovement(6,1);
      fVar2 = *(float *)((int)pvVar3 + 0x60);
    }
  }
  dVar11 = (double)FastWrapRot((moby->rotation).y,fVar2);
  local_c0.x = local_c0.x + (moby->pos).x;
  local_c0.y = local_c0.y + (moby->pos).y;
  fVar2 = (moby->pos).z;
  (moby->rotation).y = (float)dVar11;
  local_c0.z = local_c0.z + fVar2;
  MB_GetOrientation
            ((MobyInstance *)((int)pvVar3 + 0x20),&local_c0,ZEXT48(&stack0x00000000) - 0xb0,
             (longlong)(int)moby + 0x40);
  return;
}


