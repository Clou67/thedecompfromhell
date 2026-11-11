// game/update/moby887.cpp -- reconstructed from NPEA00385 EBOOT
// STATUS: NOT STARTED (raw Ghidra output)
// 3 functions, 0x4a2854-0x4a2b74
#include <math.h>
#include "game/update/moby887.h"
#include "game/debug.h"
#include "game/hero.h"
#include "game/mobyfunc.h"
#include "game/mobyutil.h"

// 0x04a2854 (0x14 bytes)
void M887_004a2854(void)

{
  DAT_008cbfcc = 0x10000;
  return;
}


// 0x04a2878 (0x2e8 bytes)
/* Moby 887 */

void UpdateMoby_887(MobyInstance *moby)

{
  u8 uVar1;
  byte bVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float *pfVar7;
  
  pfVar7 = (float *)moby->pVar;
  if ((moby->levelFlagIdx != 0xff) && (g_LevelFlags[Level][(byte)moby->levelFlagIdx] == -1)) {
    pfVar7[4] = -NAN;
  }
  uVar1 = moby->state;
  if (uVar1 == '\x04') {
    if ((((pfVar7[4] != -NAN) && (g_MobyInstance + (int)pfVar7[4] != (MobyInstance *)0x0)) &&
        (bVar2 = g_MobyInstance[(int)pfVar7[4]].state, bVar2 != 0xfd && bVar2 != 0xfe)) &&
       ((float)(uint)bVar2 != pfVar7[5])) {
      fVar3 = (moby->pos).y;
      fVar4 = (moby->pos).x;
      fVar5 = fVar3 - pfVar7[1];
      fVar6 = fVar4 - *pfVar7;
      if (SQRT(fVar6 * fVar6 + fVar5 * fVar5) <= 0.02) {
        (moby->pos).x = *pfVar7;
        (moby->pos).y = pfVar7[1];
        (moby->pos).z = pfVar7[2];
        fVar3 = pfVar7[3];
        moby->state = '\x01';
        (moby->pos).w = fVar3;
        return;
      }
      fVar5 = (moby->transform).v1.y;
      fVar6 = (moby->transform).v1.z;
      (moby->pos).x = (moby->transform).v1.x * 0.02 + fVar4;
      (moby->pos).y = fVar5 * 0.02 + fVar3;
      (moby->pos).z = fVar6 * 0.02 + (moby->pos).z;
      return;
    }
    moby->state = '\x02';
  }
  else if (uVar1 == '\x03') {
    if (((pfVar7[4] != -NAN) && (g_MobyInstance + (int)pfVar7[4] != (MobyInstance *)0x0)) &&
       ((bVar2 = g_MobyInstance[(int)pfVar7[4]].state, bVar2 != 0xfd && bVar2 != 0xfe &&
        ((float)(uint)bVar2 == pfVar7[6])))) {
      moby->state = '\x04';
    }
  }
  else if (uVar1 == '\x02') {
    if (((pfVar7[4] != -NAN) && (g_MobyInstance + (int)pfVar7[4] != (MobyInstance *)0x0)) &&
       ((bVar2 = g_MobyInstance[(int)pfVar7[4]].state, bVar2 != 0xfd && bVar2 != 0xfe &&
        ((float)(uint)bVar2 == pfVar7[6])))) {
      moby->state = '\x04';
      return;
    }
    fVar3 = (moby->pos).y;
    fVar4 = (moby->pos).x;
    fVar5 = fVar3 - pfVar7[1];
    fVar6 = fVar4 - *pfVar7;
    if (SQRT(fVar6 * fVar6 + fVar5 * fVar5) <= 4.0) {
      fVar5 = (moby->transform).v1.y;
      fVar6 = (moby->transform).v1.z;
      (moby->pos).x = (moby->transform).v1.x * -0.02 + fVar4;
      (moby->pos).y = fVar5 * -0.02 + fVar3;
      (moby->pos).z = fVar6 * -0.02 + (moby->pos).z;
    }
    else {
      moby->state = '\x03';
    }
  }
  else if (uVar1 == '\x01') {
    if ((((pfVar7[4] != -NAN) && (g_MobyInstance + (int)pfVar7[4] != (MobyInstance *)0x0)) &&
        (bVar2 = g_MobyInstance[(int)pfVar7[4]].state, bVar2 != 0xfd && bVar2 != 0xfe)) &&
       ((float)(uint)bVar2 != pfVar7[5])) {
      return;
    }
    moby->state = '\x02';
  }
  else if (uVar1 == '\0') {
    *pfVar7 = (moby->pos).x;
    pfVar7[1] = (moby->pos).y;
    pfVar7[2] = (moby->pos).z;
    pfVar7[3] = (moby->pos).w;
    moby->state = '\x01';
  }
  return;
}


// 0x04a2b60 (0x14 bytes)
void M887_004a2b60(void)

{
  DAT_008cc03c = 0x10000;
  return;
}


