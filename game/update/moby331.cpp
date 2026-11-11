// game/update/moby331.cpp -- reconstructed from NPEA00385 EBOOT
// STATUS: NOT STARTED (raw Ghidra output)
// 2 functions, 0x34570c-0x345748
#include "game/update/moby331.h"
#include "game/mobyfunc.h"
#include "game/mobyutil.h"

// 0x034570c (0x14 bytes)
void M331_0034570c(void)

{
  DAT_0083fbc0 = 0x10000;
  return;
}


// 0x0345720 (0x28 bytes)
/* Moby 331 */

void UpdateMoby_331(MobyInstance *moby)

{
  if (moby < MobyInstancePermEnd) {
    moby->unk58 = 0.0;
    moby->modeBits = moby->modeBits | UNK_40;
  }
  return;
}


