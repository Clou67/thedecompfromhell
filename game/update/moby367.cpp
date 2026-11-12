// game/update/moby367.cpp -- reconstructed from NPEA00385 EBOOT
// STATUS: NOT STARTED (raw Ghidra output)
// 2 functions, 0x354f08-0x35511c
#include "game/update/moby367.h"
#include "game/hero.h"
#include "game/mobyfunc.h"
#include "game/mobyutil.h"

// 0x0354f08 (0x14 bytes)
void M367_00354f08(void)

{
  DAT_00840478 = 0x10000;
  return;
}


// 0x0354f30 (0x1ec bytes)
/* Moby 367 */

void UpdateMoby_367(MobyInstance *moby)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float *pfVar7;
  
  pfVar7 = (float *)moby->pVar;
  if (moby->state == '\0') {
    *pfVar7 = (moby->pos).x;
    pfVar7[1] = (moby->pos).y;
    pfVar7[2] = (moby->pos).z;
    pfVar7[3] = (moby->pos).w;
    fVar1 = (moby->transform).v1.y;
    fVar2 = (moby->transform).v1.x;
    fVar3 = (moby->transform).v1.z;
    fVar4 = 0.0;
    fVar1 = SQRT(fVar3 * fVar3 + fVar2 * fVar2 + fVar1 * fVar1);
    if (fVar1 == 0.0) {
      pfVar7[4] = fVar2;
      pfVar7[5] = (moby->transform).v1.y;
      pfVar7[6] = (moby->transform).v1.z;
      fVar1 = (moby->transform).v1.w;
      pfVar7[6] = 0.0;
      pfVar7[5] = 0.0;
      pfVar7[4] = 0.0;
      fVar3 = fVar4;
      fVar2 = fVar4;
    }
    else {
      fVar4 = 11.0 / fVar1;
      fVar2 = fVar2 * fVar4;
      pfVar7[4] = fVar2;
      fVar3 = (moby->transform).v1.y * fVar4;
      pfVar7[5] = fVar3;
      fVar4 = (moby->transform).v1.z * fVar4;
      pfVar7[6] = fVar4;
      fVar1 = (moby->transform).v1.w;
    }
    pfVar7[7] = fVar1;
    pfVar7[4] = fVar2 + (moby->pos).x;
    pfVar7[5] = fVar3 + (moby->pos).y;
    pfVar7[6] = fVar4 + (moby->pos).z;
    moby->state = '\x01';
  }
  else if (moby->state == '\x02') {
    OrganicDelt
              (pfVar7[10],g_FrameTimeSq * 10.0,g_FrameTimeSq * 10.0,g_FrameTime * 20.0,
               pfVar7 + 8,0x720000,pfVar7 + 9);
    fVar1 = pfVar7[8];
    fVar2 = pfVar7[5];
    fVar3 = pfVar7[1];
    fVar4 = pfVar7[6];
    fVar5 = pfVar7[2];
    fVar6 = pfVar7[7];
    (moby->pos).x = fVar1 * (pfVar7[4] - *pfVar7) + *pfVar7;
    (moby->pos).y = fVar1 * (fVar2 - fVar3) + pfVar7[1];
    fVar2 = pfVar7[2];
    (moby->pos).w = fVar6;
    (moby->pos).z = fVar1 * (fVar4 - fVar5) + fVar2;
    if (pfVar7[8] == pfVar7[10]) {
      moby->state = '\x01';
    }
  }
  return;
}


