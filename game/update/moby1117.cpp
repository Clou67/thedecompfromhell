// game/update/moby1117.cpp -- reconstructed from NPEA00385 EBOOT
// STATUS: NOT STARTED (raw Ghidra output)
// 2 functions, 0x1d3ba8-0x1d4010
#include "game/update/moby1117.h"
#include "game/collproc.h"
#include "game/hero.h"
#include "game/mobyfunc.h"
#include "game/mobyutil.h"
#include "game/sound.h"
#include "idol/fastfunc.h"

// 0x01d3ba8 (0x58 bytes)
undefined8 M1117_001d3ba8(int param_1)

{
  if ((g_heroStateType == 3) || (g_heroState == EDGE_JUMP)) {
    if (DAT_0096a1d8 == param_1) {
      return 1;
    }
  }
  else if ((g_framesNotGrounded == 0) && (g_standingOnMoby == param_1)) {
    return 1;
  }
  return 0;
}


// 0x01d3c28 (0x3e8 bytes)
/* Moby 1117 */

void UpdateMoby_1117(MobyInstance *moby)

{
  bool bVar1;
  byte bVar2;
  f32 fVar3;
  float fVar4;
  void *pvVar5;
  float fVar6;
  MobyInstance *pMVar7;
  undefined4 uVar8;
  longlong lVar9;
  double dVar10;
  undefined8 uVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  Vec4 local_50;
  
  pvVar5 = moby->pVar;
  dVar12 = (double)(moby->pos).x;
  dVar13 = (double)(moby->pos).y;
  dVar14 = (double)(moby->pos).z;
  if ((g_heroStateType == 3) || (g_heroState == EDGE_JUMP)) {
    if (DAT_0096a1d8 == moby) goto LAB_001d3cb0;
  }
  else if ((g_framesNotGrounded == 0) && (g_standingOnMoby == moby)) {
LAB_001d3cb0:
    moby->state = '\x02';
  }
  FastDecTimerS32((int)pvVar5 + 0xbc);
  bVar2 = moby->state;
  if (bVar2 < 2) {
    if (bVar2 == 0) {
      uVar11 = 0;
      *(undefined4 *)((int)pvVar5 + 0x20) = 0;
      *(undefined1 *)((int)pvVar5 + 0x28) = 4;
      *(undefined2 *)((int)pvVar5 + 0x24) = 0;
      fVar3 = (moby->pos).z;
      *(undefined2 *)((int)pvVar5 + 0x3e) = 5;
      *(f32 *)((int)pvVar5 + 0xa0) = fVar3;
      dVar10 = (double)MB_randRot();
      *(float *)((int)pvVar5 + 0xa8) = (float)dVar10;
      dVar10 = (double)MB_randRot();
      *(float *)((int)pvVar5 + 0xb4) = (float)dVar10;
      dVar10 = (double)MB_randRot();
      *(float *)((int)pvVar5 + 0xb8) = (float)dVar10;
      dVar10 = (double)MB_randRangeSigned
                                 (uVar11,(double)(g_FrameTime * 0.13962634));
      *(float *)((int)pvVar5 + 0xb0) =
           (float)((double)g_FrameTime * 1.5707963705062866 + dVar10);
      moby->state = '\x01';
    }
    *(undefined4 *)((int)pvVar5 + 0xa4) = 0;
    MB_BobMotion
              (0.1,*(float *)((int)pvVar5 + 0xb0),moby,(float *)((int)pvVar5 + 0xa8),
               (float *)((int)pvVar5 + 0xac));
    MB_SwingMotion
              (0x3fa8209f60000000,(double)(g_FrameTime * 0.34906584),
               (double)(g_FrameTime * 0.5235988),(longlong)(int)moby,(int)pvVar5 + 0xb4,
               (int)pvVar5 + 0xb8);
    goto LAB_001d3f9c;
  }
  if (bVar2 < 3) {
    fVar4 = -(g_FrameTimeSq * 2.0 - *(float *)((int)pvVar5 + 0xa4));
    *(float *)((int)pvVar5 + 0xa4) = fVar4;
    fVar6 = g_FrameTime * -2.0;
    if (fVar4 < fVar6) {
      *(float *)((int)pvVar5 + 0xa4) = fVar6;
      fVar4 = fVar6;
    }
    bVar1 = g_heroStateType != 3;
    (moby->pos).z = (moby->pos).z + fVar4;
    pMVar7 = DAT_0096a1d8;
    if ((((bVar1) && (g_heroState != EDGE_JUMP)) &&
        (pMVar7 = g_standingOnMoby, g_framesNotGrounded != 0)) || (pMVar7 != moby)) {
      moby->state = '\x03';
    }
    if (*(int *)((int)pvVar5 + 0xbc) < 1) {
      PlayMobySound(0,0,moby);
      uVar8 = MB_randRange(0x28,0x3c);
      *(undefined4 *)((int)pvVar5 + 0xbc) = uVar8;
    }
    goto LAB_001d3f9c;
  }
  if (3 < bVar2) goto LAB_001d3f9c;
  fVar4 = *(float *)((int)pvVar5 + 0xa4);
  if (*(int *)((int)pvVar5 + 0xa4) < 0) {
LAB_001d3f0c:
    fVar4 = fVar4 + g_FrameTimeSq;
    *(float *)((int)pvVar5 + 0xa4) = fVar4;
    fVar6 = g_FrameTime * 2.0;
    if (fVar6 < fVar4) {
      *(float *)((int)pvVar5 + 0xa4) = fVar6;
      fVar4 = fVar6;
    }
  }
  else {
    fVar6 = *(float *)((int)pvVar5 + 0xa0) - (moby->pos).z;
    if ((fVar4 * fVar4) / (g_FrameTimeSq * 2.0 * 2.0) < fVar6) goto LAB_001d3f0c;
    if (0.0 < fVar6) {
      fVar4 = fVar4 - (fVar4 * fVar4) / (fVar6 * 2.0);
      *(float *)((int)pvVar5 + 0xa4) = fVar4;
      if (fVar4 < 0.0) {
        *(undefined4 *)((int)pvVar5 + 0xa4) = 0;
        fVar4 = 0.0;
      }
    }
  }
  fVar4 = (moby->pos).z + fVar4;
  (moby->pos).z = fVar4;
  if (*(float *)((int)pvVar5 + 0xa0) <= fVar4) {
    (moby->pos).z = *(float *)((int)pvVar5 + 0xa0);
    moby->state = '\x01';
  }
LAB_001d3f9c:
  lVar9 = (longlong)(int)moby + 0x40;
  local_50.x = (float)((double)(moby->pos).x - dVar12);
  local_50.y = (float)((double)(moby->pos).y - dVar13);
  local_50.w = (moby->pos).w;
  local_50.z = (float)((double)(moby->pos).z - dVar14);
  MB_GetOrientation((MobyInstance *)((int)pvVar5 + 0x60),&local_50,lVar9,lVar9);
  return;
}


