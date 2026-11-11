// game/update/moby1133.cpp -- reconstructed from NPEA00385 EBOOT
// STATUS: NOT STARTED (raw Ghidra output)
// 2 functions, 0x1d8e34-0x1d9104
#include "game/update/moby1133.h"
#include "game/hero.h"
#include "game/mobyfunc.h"
#include "game/mobyutil.h"
#include "game/sound.h"
#include "idol/fastfunc.h"

// 0x01d8e34 (0x14 bytes)
void M1133_001d8e34(void)

{
  DAT_007648e4 = 0x10000;
  return;
}


// 0x01d8e68 (0x29c bytes)
/* Moby 1133 */

void UpdateMoby_1133(MobyInstance *moby)

{
  u8 uVar1;
  byte bVar2;
  int *piVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  MobyInstance *pMVar8;
  double dVar9;
  
  piVar3 = (int *)moby->pVar;
  if (piVar3 != (int *)0x0) {
    uVar1 = moby->state;
    if (uVar1 == '\x04') {
      if ((((*piVar3 != -1) && (g_MobyInstance + *piVar3 != (MobyInstance *)0x0)) &&
          (bVar2 = g_MobyInstance[*piVar3].state, bVar2 != 0xfd && bVar2 != 0xfe)) &&
         ((uint)bVar2 != piVar3[1])) {
        dVar9 = (double)FastDiffRots((double)(moby->rotation).y,(double)(float)piVar3[5]);
        (moby->rotation).y = (float)dVar9;
        if (dVar9 <= 0.0) {
          return;
        }
        (moby->rotation).y = 0.0;
        piVar3[6] = 0;
        moby->state = '\x01';
        return;
      }
      PlayMobySound(0,0,moby);
      moby->state = '\x02';
    }
    else if (uVar1 == '\x03') {
      fVar4 = (moby->rotation).y + 1.5707963;
      fVar5 = 3.1415925 - fVar4;
      if (fVar4 - (3.1415925 - fVar4) < 0.0) {
        fVar5 = fVar4;
      }
      fVar6 = -3.1415925 - fVar4;
      if ((-3.1415925 - fVar4) - fVar5 < 0.0) {
        fVar6 = fVar5;
      }
      fVar4 = fVar6 * fVar6;
      fVar5 = fVar4 * fVar4 * fVar6;
      fVar7 = fVar4 * fVar5;
      dVar9 = (double)FastWrapRot
                                ((float)piVar3[6],
                                 (float)piVar3[3] * g_FrameTime *
                                 (fVar4 * fVar7 * 2.601887e-06 +
                                 fVar7 * -0.0001980741 +
                                 fVar5 * 0.0083330255 + fVar4 * fVar6 * -0.16666657 + fVar6));
      piVar3[6] = (int)(float)dVar9;
      dVar9 = (double)FastWrapRot((moby->rotation).y,(float)dVar9);
      (moby->rotation).y = (float)dVar9;
      pMVar8 = g_MobyInstance + *piVar3;
      piVar3[6] = (int)((float)piVar3[6] * (float)piVar3[4]);
      if (((pMVar8 != (MobyInstance *)0x0) &&
          (bVar2 = pMVar8->state, bVar2 != 0xfd && bVar2 != 0xfe)) && ((uint)bVar2 == piVar3[2])) {
        moby->state = '\x04';
      }
    }
    else if (uVar1 == '\x01') {
      if (((*piVar3 != -1) && (g_MobyInstance + *piVar3 != (MobyInstance *)0x0)) &&
         ((bVar2 = g_MobyInstance[*piVar3].state, bVar2 != 0xfd && bVar2 != 0xfe &&
          ((uint)bVar2 != piVar3[1])))) {
        return;
      }
      fVar4 = (float)piVar3[3] * g_FrameTime;
      piVar3[6] = (int)fVar4;
      (moby->rotation).y = fVar4;
      PlayMobySound(0,0,moby);
      moby->state = '\x03';
    }
    else if (uVar1 == '\0') {
      (moby->rotation).y = 0.0;
      moby->state = '\x01';
      piVar3[6] = 0;
    }
  }
  return;
}


