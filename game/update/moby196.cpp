// game/update/moby196.cpp -- reconstructed from NPEA00385 EBOOT
// STATUS: NOT STARTED (raw Ghidra output)
// 1 functions, 0x2e4af8-0x2e502c
// shared update function UpdateMoby_{196_197_1958}; registered for oClasses 196, 197, 1958
#include <math.h>
#include "game/update/moby196.h"
#include "game/hero.h"
#include "game/mobyfunc.h"
#include "game/mobyutil.h"
#include "game/sound.h"
#include "idol/fastfunc.h"

// shared update function, registered for oClasses 196, 197, 1958
// 0x02e4af8 (0x534 bytes)
/* Moby 196
   Moby 197
   Moby 1958 */

void UpdateMoby_196(MobyInstance *moby)

{
  u8 uVar1;
  float fVar2;
  float fVar3;
  f32 *pfVar4;
  f32 fVar5;
  MobyClass *pMVar6;
  bool bVar7;
  int iVar8;
  double dVar9;
  GPiece<16> local_60;
  f32 local_50;
  f32 local_4c;
  f32 local_48;
  f32 local_44;
  GPiece<16> local_40;
  f32 local_30;
  f32 local_2c;
  f32 local_28;
  f32 local_24;
  
  bVar7 = false;
  pfVar4 = (f32 *)moby->pVar;
  if ((moby->oClass == DOOR_00C4) || (moby->oClass == UNDERWATER_DOOR)) {
    bVar7 = true;
  }
  fVar5 = pfVar4[4];
  if ((fVar5 == -NAN) && ((pfVar4[6] == -NAN || (pfVar4[7] == -NAN)))) {
    DeleteMoby(moby);
  }
  else {
    uVar1 = moby->state;
    if (uVar1 == '\x06') {
      fVar2 = ((moby->scale * 3.0) / moby->pClass->gScale) * 0.33333334 * g_FrameTime;
      if (ABS(pfVar4[5]) <= fVar2) {
        fVar2 = 0.0;
      }
      else {
        fVar3 = -1.0;
        if (!bVar7) {
          fVar3 = 1.0;
        }
        fVar2 = -(fVar2 * fVar3 - pfVar4[5]);
      }
      pfVar4[5] = fVar2;
      FastVecAdd(&local_30,pfVar4,local_40);
      (moby->pos).x = local_30;
      (moby->pos).y = local_2c;
      (moby->pos).z = local_28;
      (moby->pos).w = local_24;
      if (pfVar4[5] == 0.0) {
        moby->state = '\x04';
      }
    }
    else if (uVar1 == '\x05') {
      iVar8 = MB_IsPntInCuboid(&g_heroPosition,(longlong)(int)pfVar4[7]);
      if (iVar8 == 0) {
        if (bVar7) {
          PlayMobySound(0,0,moby);
        }
        moby->state = '\x06';
      }
    }
    else if (uVar1 == '\x04') {
      pfVar4[5] = 0.0;
      iVar8 = MB_IsPntInCuboid(&g_heroPosition,(longlong)(int)pfVar4[6]);
      if (iVar8 != 0) {
        if (bVar7) {
          PlayMobySound(0,0,moby);
        }
        moby->state = '\x02';
      }
    }
    else if (uVar1 != '\x03') {
      if (uVar1 == '\x02') {
        dVar9 = 3.0;
        fVar2 = -1.0;
        if (!bVar7) {
          fVar2 = 1.0;
        }
        pfVar4[5] = ((moby->scale * 3.0) / moby->pClass->gScale) * 0.33333334 *
                    g_FrameTime * fVar2 + pfVar4[5];
        FastVecAdd(&local_50,pfVar4,local_60);
        fVar2 = moby->scale;
        (moby->pos).x = local_50;
        (moby->pos).y = local_4c;
        pMVar6 = moby->pClass;
        (moby->pos).z = local_48;
        (moby->pos).w = local_44;
        if ((float)((double)fVar2 * dVar9) / pMVar6->gScale < ABS(pfVar4[5])) {
          moby->state = ((byte)(ZERO_MASK((-1 - (int)pfVar4[4]))) & 2) + 3;
        }
      }
      else if (uVar1 == '\x01') {
        if (g_MobyInstance[(int)fVar5].state == '\x04') {
          if (bVar7) {
            PlayMobySound(0,0,moby);
          }
          moby->state = '\x02';
        }
      }
      else if (uVar1 == '\0') {
        *pfVar4 = (moby->pos).x;
        pfVar4[1] = (moby->pos).y;
        pfVar4[2] = (moby->pos).z;
        pfVar4[3] = (moby->pos).w;
        moby->state = ((byte)(ZERO_MASK((int)fVar5)) & 3) + 1;
      }
    }
  }
  return;
}


