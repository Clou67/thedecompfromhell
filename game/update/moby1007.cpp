// game/update/moby1007.cpp -- reconstructed from NPEA00385 EBOOT
// STATUS: NOT STARTED (raw Ghidra output)
// 1 functions, 0x183f38-0x184104
#include "game/update/moby1007.h"
#include "game/camera.h"
#include "game/collproc.h"
#include "game/hero.h"
#include "game/mobyfunc.h"
#include "game/mobyutil.h"
#include "idol/fastfunc.h"

// 0x0183f38 (0x1cc bytes)
/* Moby 1007 */

void UpdateMoby_1007(MobyInstance *moby)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  void *pvVar9;
  double dVar10;
  double dVar11;
  
  pvVar9 = GameCamera.pCurrentUpdCam;
  if (GameCamera.pCurrentUpdCam == (void *)0x0) {
    (moby->pos).z = 5.0;
    (moby->pos).y = 5.0;
    (moby->pos).x = 5.0;
  }
  else {
    fVar1 = *(float *)((int)GameCamera.pCurrentUpdCam + 0x30);
    (moby->pos).x = fVar1;
    fVar2 = *(float *)((int)pvVar9 + 0x34);
    (moby->pos).y = fVar2;
    fVar3 = *(float *)((int)pvVar9 + 0x38);
    (moby->pos).z = fVar3;
    (moby->pos).w = *(f32 *)((int)pvVar9 + 0x3c);
    fVar2 = fVar2 - g_heroPosition.y;
    fVar1 = fVar1 - g_heroPosition.x;
    fVar4 = (g_heroMobyPtr->transform).v2.y;
    fVar5 = (g_heroMobyPtr->transform).v2.x;
    fVar3 = fVar3 - g_heroPosition.z;
    fVar6 = (g_heroMobyPtr->transform).v2.z;
    fVar7 = fVar3 * fVar6 + fVar1 * fVar5 + fVar2 * fVar4;
    fVar1 = -(fVar5 * fVar7 - fVar1);
    fVar2 = -(fVar4 * fVar7 - fVar2);
    fVar3 = -(fVar6 * fVar7 - fVar3);
    if (ABS(fVar7) < 2.5) {
      dVar11 = 0.10000000149011612;
      if (((SQRT(fVar3 * fVar3 + fVar1 * fVar1 + fVar2 * fVar2) < 0.1) ||
          (dVar10 = (double)FastSubRots(g_heroRotation.z,GameCamera.rot.radius),
          dVar10 < 2.356194496154785)) ||
         (DAT_00969e44 < (float)((double)g_FrameTime * dVar11))) {
        (moby->pos).z = 15.0;
        (moby->pos).y = 15.0;
        (moby->pos).x = 15.0;
      }
      else {
        fVar1 = (moby->pos).y;
        fVar2 = (moby->pos).x;
        fVar3 = (g_heroMobyPtr->transform).v2.y;
        fVar4 = (g_heroMobyPtr->transform).v2.x;
        fVar5 = (moby->pos).z;
        fVar6 = (g_heroMobyPtr->transform).v2.z;
        fVar7 = fVar5 * fVar6 + fVar2 * fVar4 + fVar1 * fVar3;
        fVar8 = g_heroPosition.z * fVar6 + g_heroPosition.x * fVar4 + g_heroPosition.y * fVar3;
        if (g_heroStateType != 0x11) {
          (moby->pos).x = fVar4 * fVar8 + -(fVar4 * fVar7 - fVar2);
          (moby->pos).y = fVar3 * fVar8 + -(fVar3 * fVar7 - fVar1);
          (moby->pos).z = fVar6 * fVar8 + -(fVar6 * fVar7 - fVar5);
        }
      }
    }
  }
  return;
}


