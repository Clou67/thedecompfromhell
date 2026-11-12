// game/update/sound6.cpp -- reconstructed from NPEA00385 EBOOT
// STATUS: NOT STARTED (raw Ghidra output)
// 1 functions, 0x1807e8-0x18095c
#include "game/update/sound6.h"
#include "game/hero.h"
#include "game/mobyfunc.h"
#include "game/mobyutil.h"
#include "game/music.h"

// 0x01807e8 (0x174 bytes)
void UpdateSound_6(int param_1)

{
  int *piVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  short sVar6;
  short sVar7;
  
  piVar1 = *(int **)(param_1 + 8);
  sVar7 = *(short *)(piVar1 + 3);
  if ((sVar7 != -1) || (*(short *)((int)piVar1 + 0xe) != -1)) {
    fVar2 = g_heroPosition.y - *(float *)(param_1 + 0x44);
    fVar3 = g_heroPosition.x - *(float *)(param_1 + 0x40);
    fVar4 = g_heroPosition.z - *(float *)(param_1 + 0x48);
    fVar5 = *(float *)(param_1 + 0x70) * fVar4 +
            *(float *)(param_1 + 0x50) * fVar3 + *(float *)(param_1 + 0x60) * fVar2;
    if ((1.0 < ABS(fVar5)) ||
       ((1.0 < ABS(*(float *)(param_1 + 0x74) * fVar4 +
                   *(float *)(param_1 + 0x54) * fVar3 + *(float *)(param_1 + 100) * fVar2) ||
        (1.0 < ABS(*(float *)(param_1 + 0x78) * fVar4 +
                   *(float *)(param_1 + 0x58) * fVar3 + *(float *)(param_1 + 0x68) * fVar2))))) {
      if (piVar1[2] != 0) {
        sVar6 = *(short *)((int)piVar1 + 0xe);
        if (*(short *)((int)piVar1 + 0xe) == -1) {
          *(short *)((int)piVar1 + 0xe) = sVar7;
          sVar6 = sVar7;
        }
        if (sVar7 == -1) {
          *(short *)(piVar1 + 3) = sVar6;
          sVar7 = sVar6;
        }
        if (fVar5 <= 0.0) {
          music_SetTransition(*piVar1,(int)sVar7);
        }
        else {
          music_SetTransition(piVar1[1],(int)sVar6);
        }
        piVar1[2] = 0;
      }
    }
    else {
      piVar1[2] = 1;
    }
  }
  return;
}


