// game/update/moby978.cpp -- reconstructed from NPEA00385 EBOOT
// STATUS: NOT STARTED (raw Ghidra output)
// 1 functions, 0x4c74b0-0x4c7640
#include "game/update/moby978.h"
#include "game/hero.h"
#include "game/mobyfunc.h"
#include "game/mobyutil.h"
#include "game/partupd.h"
#include "idol/fastfunc.h"

// 0x04c74b0 (0x190 bytes)
/* Moby 978 */

void UpdateMoby_978(MobyInstance *moby)

{
  byte bVar1;
  float *pfVar2;
  float fVar3;
  int iVar4;
  float afStack_20 [4];
  
  bVar1 = moby->state;
  pfVar2 = (float *)moby->pVar;
  if (bVar1 == 0) {
    moby->updateDistance = -1;
    fVar3 = (float)FastDoubleToInt((double)(animationSpeed * 60.0 * *pfVar2));
    pfVar2[3] = fVar3;
    moby->state = '\x01';
  }
  else if (bVar1 < 2) {
    iVar4 = FastDecTimerS32(pfVar2 + 3);
    if (iVar4 != 0) {
      fVar3 = (float)FastDoubleToInt((double)(animationSpeed * 60.0 * pfVar2[2]));
      pfVar2[3] = fVar3;
      moby->state = '\x02';
    }
  }
  else if (bVar1 < 3) {
    iVar4 = FastDecTimerS32(pfVar2 + 3);
    if (iVar4 == 0) {
      MB_SphericalToVector
                (g_FrameTime * 3.0,(moby->rotation).z,(moby->rotation).y,afStack_20);
      iVar4 = MB_randInt(1);
      if (iVar4 == 0) {
        SpawnPart_42((longlong)(int)moby + 0x10,afStack_20,0,(longlong)(int)moby);
      }
    }
    else {
      fVar3 = (float)FastDoubleToInt((double)(animationSpeed * 60.0 * pfVar2[1]));
      pfVar2[3] = fVar3;
      moby->state = '\x01';
    }
  }
  return;
}


