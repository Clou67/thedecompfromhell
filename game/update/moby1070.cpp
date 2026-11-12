// game/update/moby1070.cpp -- reconstructed from NPEA00385 EBOOT
// STATUS: NOT STARTED (raw Ghidra output)
// 2 functions, 0x1b3df4-0x1b4100
#include "game/update/moby1070.h"
#include "game/hero.h"
#include "game/mobyfunc.h"
#include "game/mobyutil.h"
#include "idol/fastfunc.h"

// 0x01b3df4 (0x14 bytes)
void M1070_001b3df4(void)

{
  DAT_00757d28 = 0x10000;
  return;
}


// 0x01b3e18 (0x2e8 bytes)
/* Moby 1070 */

void UpdateMoby_1070(MobyInstance *moby)

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
  fVar2 = DAT_00757d64 * 0.017453292 * g_FrameTimeSq * DAT_00757d54 * *(float *)((int)pvVar3 + 0x60)
          + DAT_00757d60 * 0.017453292 * g_FrameTimeSq * DAT_00757d50 * local_ac +
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
    fVar2 = (float)((double)DAT_00757d5c * dVar11) * g_FrameTimeSq *
            DAT_00757d4c *
            (float)((double)local_70 * dVar4 +
                   (double)(local_80 * (float)(dVar6 - dVar5) +
                           local_a0 * (float)(dVar9 - dVar7) + local_90 * (float)(dVar10 - dVar8)));
    if ((*(float *)((int)pvVar3 + 0x60) * fVar2 < 0.0) && ((moby->rotation).y * fVar2 < 0.0)) {
      fVar2 = fVar2 * 2.0;
    }
    if (0.0 <= fVar2) {
      fVar2 = (float)((double)DAT_00757d58 * dVar11) * g_FrameTimeSq + fVar2;
    }
    else {
      fVar2 = -((float)((double)DAT_00757d58 * dVar11) * g_FrameTimeSq - fVar2);
    }
    fVar2 = *(float *)((int)pvVar3 + 0x60) + fVar2;
    *(float *)((int)pvVar3 + 0x60) = fVar2;
    if (((float)((double)DAT_00757d68 * dVar11) < ABS((moby->rotation).y)) &&
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


