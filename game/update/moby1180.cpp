// game/update/moby1180.cpp -- reconstructed from NPEA00385 EBOOT
// STATUS: NOT STARTED (raw Ghidra output)
// 4 functions, 0x1eebe4-0x1eede4
#include "game/update/moby1180.h"
#include "game/hero.h"
#include "game/map.h"
#include "game/mobyfunc.h"
#include "game/mobyutil.h"
#include "game/sound.h"
#include "game/update.h"
#include "game/update/moby1118.h"
#include "idol/fastfunc.h"

// 0x01eebe4 (0x28 bytes)
undefined8 M1180_001eebe4(int param_1)

{
  undefined8 uVar1;
  
  if ((*(short *)(param_1 + 0xa6) == 0x49b) && (*(char *)(param_1 + 0x20) == '\x02')) {
    uVar1 = 1;
  }
  else {
    uVar1 = 0;
  }
  return uVar1;
}


// 0x01eec10 (0x3c bytes)
void FUN_001eec10(int param_1)

{
  if ((*(short *)(param_1 + 0xa6) == 0x49b) && (*(char *)(param_1 + 0x20) == '\x02')) {
    *(undefined1 *)(param_1 + 0x20) = 1;
    *(float *)(param_1 + 0x18) = *(float *)(param_1 + 0x18) + 1.5;
  }
  return;
}


// 0x01eec4c (0x14 bytes)
void M1180_001eec4c(void)

{
  DAT_00765e88 = 0x10000;
  return;
}


// 0x01eec70 (0x174 bytes)
/* Moby 1180 */

void UpdateMoby_1180(MobyInstance *moby)

{
  byte bVar1;
  f32 fVar2;
  int *piVar3;
  int iVar4;
  double dVar5;
  float fVar6;
  
  bVar1 = moby->state;
  piVar3 = (int *)moby->pVar;
  if (bVar1 == 0) {
    moby->updateDistance = -1;
    fVar2 = (moby->rotation).z;
    moby->state = '\x01';
    piVar3[2] = (int)fVar2;
  }
  else if (bVar1 < 2) {
    iVar4 = M1180_001eebe4(g_MobyInstance + *piVar3);
    if (iVar4 != 0) {
      if (worldUpdateTime < 0xb) {
        moby->state = '\x03';
        dVar5 = (double)FastWrapRot((float)piVar3[2],1.0471976);
        (moby->rotation).z = (float)dVar5;
      }
      else {
        g_MiscLevelFlags.field91_0x5b = 1;
        moby->state = '\x02';
        PlayMobySound(0,0,moby);
      }
    }
  }
  else if (bVar1 < 3) {
    dVar5 = (double)FastWrapRot((float)piVar3[2],1.0471976);
    fVar6 = OrganicDeltAng
                      ((float)dVar5,DAT_0071f418 * 0.34906584,DAT_0071f418 * 0.34906584,
                       g_FrameTime * 0.7853982,&(moby->rotation).z,0x720000,
                       (float *)(piVar3 + 1));
    if (fVar6 == 0.0) {
      moby->state = '\x03';
    }
  }
  return;
}


