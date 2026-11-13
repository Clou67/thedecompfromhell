// game/update/moby768.cpp -- reconstructed from NPEA00385 EBOOT
// STATUS: NOT STARTED (raw Ghidra output)
// 2 functions, 0x4537a0-0x453b78
// shared update function UpdateMoby_{768_769}; registered for oClasses 768, 769
#include "game/update/moby768.h"
#include "game/camera.h"
#include "game/collproc.h"
#include "game/hero.h"
#include "game/mobyfunc.h"
#include "game/mobyutil.h"
#include "game/sound.h"

// shared update function, registered for oClasses 768, 769
// 0x04537a0 (0x3c4 bytes)
/* Moby 768
   Moby 769 */

void UpdateMoby_768(MobyInstance *moby)

{
  bool bVar1;
  u8 uVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float *pfVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  
  uVar2 = moby->state;
  pfVar7 = (float *)moby->pVar;
  if (uVar2 == '\x04') {
    if ((pfVar7[5] <=
         SQRT((*pfVar7 - g_heroPosition.x) * (*pfVar7 - g_heroPosition.x) +
              (pfVar7[1] - g_heroPosition.y) * (pfVar7[1] - g_heroPosition.y))) ||
       (2.0 <= ABS((moby->pos).z - g_heroPosition.z))) {
      fVar3 = pfVar7[4] - 1.0 / (animationSpeed * 20.0);
      pfVar7[4] = fVar3;
      if (fVar3 <= 0.0) {
        pfVar7[4] = 0.0;
        moby->state = '\x01';
      }
    }
    else {
      moby->state = '\x02';
    }
  }
  else if (uVar2 == '\x03') {
    fVar3 = pfVar7[1] - g_heroPosition.y;
    fVar4 = *pfVar7 - g_heroPosition.x;
    if (((pfVar7[5] * 1.1 < SQRT(fVar4 * fVar4 + fVar3 * fVar3)) &&
        (fVar3 = pfVar7[1] - GameCamera.posY, fVar4 = *pfVar7 - GameCamera.posX,
        pfVar7[5] * 1.1 < SQRT(fVar4 * fVar4 + fVar3 * fVar3))) &&
       (moby->state = '\x04', moby->oClass == DOOR_LEFT)) {
      PlayMobySound(0,0,moby);
    }
  }
  else if (uVar2 == '\x02') {
    fVar3 = pfVar7[4] + 1.0 / (animationSpeed * 20.0);
    pfVar7[4] = fVar3;
    if (1.0 <= fVar3) {
      pfVar7[4] = 1.0;
      moby->state = '\x03';
    }
  }
  else if (uVar2 == '\x01') {
    if (((SQRT((*pfVar7 - g_heroPosition.x) * (*pfVar7 - g_heroPosition.x) +
               (pfVar7[1] - g_heroPosition.y) * (pfVar7[1] - g_heroPosition.y)) < pfVar7[5]) &&
        (ABS((moby->pos).z - g_heroPosition.z) < 2.0)) &&
       (moby->state = '\x02', moby->oClass == DOOR_LEFT)) {
      PlayMobySound(0,0,moby);
    }
  }
  else if (uVar2 == '\0') {
    *pfVar7 = (moby->pos).x;
    pfVar7[1] = (moby->pos).y;
    pfVar7[2] = (moby->pos).z;
    fVar3 = (moby->pos).w;
    pfVar7[4] = 0.0;
    pfVar7[3] = fVar3;
    moby->state = '\x01';
  }
  fVar3 = (moby->rotation).z;
  fVar4 = fVar3 + 1.5707963;
  fVar5 = 3.1415925 - fVar4;
  if (fVar4 - (3.1415925 - fVar4) < 0.0) {
    fVar5 = fVar4;
  }
  fVar10 = -3.1415925 - fVar4;
  if ((-3.1415925 - fVar4) - fVar5 < 0.0) {
    fVar10 = fVar5;
  }
  fVar4 = -2.0;
  fVar5 = pfVar7[4];
  bVar1 = moby->oClass == DOOR_LEFT;
  fVar11 = fVar10 * fVar10;
  fVar12 = fVar11 * fVar11 * fVar10;
  fVar13 = fVar11 * fVar12;
  fVar6 = fVar4;
  if (bVar1) {
    fVar6 = 2.0;
  }
  fVar8 = 3.1415925 - fVar3;
  if (fVar3 - (3.1415925 - fVar3) < 0.0) {
    fVar8 = fVar3;
  }
  fVar9 = -3.1415925 - fVar3;
  if ((-3.1415925 - fVar3) - fVar8 < 0.0) {
    fVar9 = fVar8;
  }
  fVar3 = fVar9 * fVar9;
  fVar8 = fVar3 * fVar3 * fVar9;
  fVar14 = fVar3 * fVar8;
  if (bVar1) {
    fVar4 = 2.0;
  }
  (moby->pos).x =
       (fVar11 * fVar13 * 2.601887e-06 +
       fVar13 * -0.0001980741 + fVar12 * 0.0083330255 + fVar11 * fVar10 * -0.16666657 + fVar10) *
       fVar5 * fVar6 + *pfVar7;
  (moby->pos).y =
       (fVar3 * fVar14 * 2.601887e-06 +
       fVar14 * -0.0001980741 + fVar8 * 0.0083330255 + fVar3 * fVar9 * -0.16666657 + fVar9) * fVar5
       * fVar4 + pfVar7[1];
  return;
}


// 0x0453b64 (0x14 bytes)
void M769_00453b64(void)

{
  DAT_0087362c = 0x10000;
  return;
}


