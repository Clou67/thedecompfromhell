// game/update/moby650.cpp -- reconstructed from NPEA00385 EBOOT
// STATUS: NOT STARTED (raw Ghidra output)
// 3 functions, 0x401de4-0x401f84
#include "game/update/moby650.h"
#include "game/hero.h"
#include "game/map.h"
#include "game/mobyfunc.h"
#include "game/mobyutil.h"
#include "game/sound.h"
#include "game/update.h"
#include "game/update/moby1118.h"
#include "idol/fastfunc.h"

// 0x0401de4 (0x4c bytes)
void M650_00401de4(int param_1)

{
  int iVar1;
  
  if ((*(short *)(param_1 + 0xa6) == 0x41) && (*(char *)(param_1 + 0x20) == '\x01')) {
    g_MiscLevelFlags.field90_0x5a = 1;
    *(undefined1 *)(param_1 + 0x20) = 2;
    iVar1 = *(int *)(*(int *)(param_1 + 0x78) + 8);
    if (iVar1 != 0) {
      *(undefined1 *)(iVar1 + 0x20) = 2;
    }
  }
  return;
}


// 0x0401e30 (0x14 bytes)
void M650_00401e30(void)

{
  DAT_008548c4 = 0x10000;
  return;
}


// 0x0401e50 (0x134 bytes)
/* Moby 650 */

void UpdateMoby_650(MobyInstance *moby)

{
  float fVar1;
  float *pfVar2;
  int iVar3;
  
  pfVar2 = (float *)moby->pVar;
  if (moby->state == 0) {
    fVar1 = (moby->pos).z;
    moby->state = '\x01';
    *pfVar2 = fVar1;
  }
  else if (moby->state < 2) {
    iVar3 = FastDecTimerS32(pfVar2 + 2);
    if (iVar3 == 0) {
      fVar1 = *pfVar2 + DAT_008548e8;
    }
    else {
      if ((iVar3 == 2) &&
         (iVar3 = DAT_010cbbe0 - worldUpdateTime, 3 < iVar3 + (iVar3 >> 0x1f & iVar3 * -2))) {
        DAT_010cbbe0 = worldUpdateTime;
        PlayMobySound(1,0,moby);
      }
      fVar1 = *pfVar2;
    }
    OrganicDelt
              (fVar1,DAT_0071f418 * 10.0,DAT_0071f418 * 10.0,g_FrameTime * 10.0,
               &(moby->pos).z,0x720000,pfVar2 + 1);
  }
  return;
}


