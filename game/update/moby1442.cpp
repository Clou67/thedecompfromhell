// game/update/moby1442.cpp -- reconstructed from NPEA00385 EBOOT
// STATUS: NOT STARTED (raw Ghidra output)
// 3 functions, 0x27f360-0x27f6fc
#include "game/update/moby1442.h"
#include "game/collproc.h"
#include "game/hero.h"
#include "game/mobyfunc.h"
#include "game/mobyutil.h"
#include "game/sound.h"
#include "idol/fastfunc.h"

// 0x027f360 (0x14 bytes)
void M1442_0027f360(void)

{
  DAT_007aa900 = 0x10000;
  return;
}


// 0x027f378 (0x24 bytes)
void M1442_0027f378(int param_1)

{
  **(undefined4 **)(param_1 + 0x78) = 0xc0490fda;
  *(undefined1 *)(param_1 + 0xbc) = 1;
  *(undefined1 *)(param_1 + 0x20) = 2;
  return;
}


// 0x027f3d0 (0x32c bytes)
/* Moby 1442 */

void UpdateMoby_1442(MobyInstance *moby)

{
  float fVar1;
  float fVar2;
  float *pfVar3;
  float fVar4;
  float fVar5;
  int iVar6;
  uint uVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  
  pfVar3 = (float *)moby->pVar;
  if (moby->state == 0) {
    moby->state = '\x01';
    dVar8 = (double)MB_randRot();
    *pfVar3 = (float)dVar8;
  }
  else if (moby->state < 2) {
    iVar6 = FastDecTimerS32(pfVar3 + 1);
    if (iVar6 != 0) {
      fVar1 = (moby->pos).y;
      fVar2 = (moby->pos).x;
      fVar4 = fVar1 - g_heroPosition.y;
      fVar5 = fVar2 - g_heroPosition.x;
      if ((SQRT(fVar5 * fVar5 + fVar4 * fVar4) < 4.0) && (g_heroState == GRINDRAIL_USE)) {
        if (((DAT_0096a288 != -1) &&
            (fVar4 = ((moby->transform).v1.y * DAT_007aa934 +
                     (moby->transform).v2.y * DAT_007aa938 +
                     (moby->transform).v0.y * DAT_007aa930 + fVar1) - g_heroPosition.y,
            fVar1 = ((moby->transform).v1.x * DAT_007aa934 +
                    (moby->transform).v2.x * DAT_007aa938 +
                    (moby->transform).v0.x * DAT_007aa930 + fVar2) - g_heroPosition.x,
            fVar2 = ((moby->transform).v2.z * DAT_007aa938 +
                     (moby->transform).v0.z * DAT_007aa930 + (moby->transform).v1.z * DAT_007aa934 +
                    (moby->pos).z) - g_heroPosition.z,
            fVar5 = DAT_00969d40 * fVar2 + g_heroGravityMtx * fVar1 + DAT_00969d30 * fVar4,
            ABS(DAT_00969d44 * fVar2 + DAT_00969d24 * fVar1 + DAT_00969d34 * fVar4) < 0.1)) &&
           (((0.0 < fVar5 && (DAT_0096a288 == 3)) || ((fVar5 < 0.0 && (DAT_0096a288 == 2)))))) {
          *(undefined4 *)moby->pVar = 0xc0490fda;
          moby->setByGroup = '\x01';
          moby->state = '\x02';
          PlayMobySound(1,0,moby);
        }
      }
    }
    iVar6 = MB_damage(moby,0x330000,0);
    if (iVar6 != 0) {
      *(undefined4 *)moby->pVar = 0xc0490fda;
      moby->setByGroup = '\x01';
      moby->state = '\x02';
      PlayMobySound(0,0,moby);
      moby->damage = -1;
    }
  }
  dVar9 = (double)FastWrapRot(*pfVar3,g_FrameTime * 12.566371);
  *pfVar3 = (float)dVar9;
  dVar8 = (double)(float)(3.141592502593994 - dVar9);
  if (dVar9 - (double)(float)(3.141592502593994 - dVar9) < 0.0) {
    dVar8 = dVar9;
  }
  dVar10 = (double)(float)(-3.141592502593994 - dVar9);
  if ((double)(float)(-3.141592502593994 - dVar9) - dVar8 < 0.0) {
    dVar10 = dVar8;
  }
  dVar8 = (double)(float)(dVar10 * dVar10);
  dVar11 = (double)(float)(dVar8 * (double)(float)(dVar8 * dVar10));
  dVar9 = (double)(float)(dVar8 * dVar11);
  dVar8 = (double)(((float)(dVar8 * dVar9) * 2.601887e-06 +
                    (float)(dVar9 * -0.0001980741071747616 +
                           (double)(float)(dVar11 * 0.008333025500178337 +
                                          (double)(float)((double)(float)(dVar8 * dVar10) *
                                                          -0.16666656732559204 + dVar10))) + 1.0) *
                  0.5);
  if (moby->setByGroup == '\0') {
    uVar7 = FastLerpColor(dVar8,0xffffffff80202080,0xffffffff80202020);
  }
  else {
    uVar7 = FastLerpColor(dVar8,0xffffffff80208020,0xffffffff80202020);
  }
  moby->field60_0x90 = uVar7;
  return;
}


