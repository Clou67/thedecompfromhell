// game/update/moby874.cpp -- reconstructed from NPEA00385 EBOOT
// STATUS: NOT STARTED (raw Ghidra output)
// 2 functions, 0x49e520-0x49e580
// shared update function UpdateMoby_{874_1104}; registered for oClasses 874, 1104
#include "game/update/moby874.h"
#include "game/hero.h"
#include "game/mobyfunc.h"
#include "game/mobyutil.h"

// shared update function, registered for oClasses 874, 1104
// 0x049e520 (0x4 bytes)
/* Moby 874
   Moby 1104 */

MobyInstance * UpdateMoby_874(MobyInstance *moby)

{
  return moby;
}


// 0x049e528 (0x58 bytes)
undefined8 M1104_0049e528(int param_1)

{
  if ((g_heroStateType == 3) || (g_heroState == EDGE_JUMP)) {
    if (DAT_0096a1d8 == param_1) {
      return 1;
    }
  }
  else if ((g_framesNotGrounded == 0) && (g_standingOnMoby == param_1)) {
    return 1;
  }
  return 0;
}


