// game/update/moby702.cpp -- reconstructed from NPEA00385 EBOOT
// STATUS: NOT STARTED (raw Ghidra output)
// 2 functions, 0x428f68-0x429228
#include "game/update/moby702.h"
#include "game/camera.h"
#include "game/mobyfunc.h"
#include "game/mobyutil.h"
#include "game/partupd.h"
#include "game/sound.h"
#include "idol/fastfunc.h"

// 0x0428f68 (0x14 bytes)
void M702_00428f68(void)

{
  DAT_00857b60 = 0x10000;
  return;
}


// 0x0428f88 (0x2a0 bytes)
/* Moby 702 */

void UpdateMoby_702(MobyInstance *moby)

{
  void *pvVar1;
  longlong lVar2;
  int iVar3;
  GPiece<16> local_a0;
  GPiece<16> local_90;
  GPiece<64> auStack_80;
  
  lVar2 = (longlong)(int)moby;
  pvVar1 = moby->pVar;
  if (moby->state == 0) {
    *(undefined4 *)((int)pvVar1 + 0x10) = 0xffffffff;
    iVar3 = FastDecTimerS32((int)pvVar1 + 0xc);
    if (iVar3 != 0) {
      *(undefined4 *)((int)pvVar1 + 0xc) = *(undefined4 *)((int)pvVar1 + 4);
      moby->state = '\x01';
    }
  }
  else if (moby->state < 2) {
    FastEulerToMtx1(auStack_80,lVar2 + 0x40);
    SpawnPart_40(local_a0,local_90,0x40,lVar2);
    SpawnPart_40(local_a0,local_90,0x40,lVar2);
    SpawnPart_40(local_a0,local_90,0x40,lVar2);
    iVar3 = IsMobyPlayingSound(moby,*(int *)((int)pvVar1 + 0x10));
    if (iVar3 == 0) {
      iVar3 = sound_MobyPlay_oClass(0,4,moby,0x519);
      *(int *)((int)pvVar1 + 0x10) = iVar3;
    }
    iVar3 = FastDecTimerS32((int)pvVar1 + 0xc);
    if (iVar3 != 0) {
      *(undefined4 *)((int)pvVar1 + 0xc) = *(undefined4 *)((int)pvVar1 + 8);
      moby->state = '\0';
      iVar3 = *(int *)((int)pvVar1 + 0x10);
      if (((iVar3 != -1) && (g_SoundChannels[iVar3].pMoby == moby)) &&
         (g_SoundChannels[iVar3].state != '\0')) {
        sound_Kill(iVar3);
      }
      *(undefined4 *)((int)pvVar1 + 0x10) = 0xffffffff;
    }
  }
  return;
}


