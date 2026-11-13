// game/update/moby420.cpp -- reconstructed from NPEA00385 EBOOT
// STATUS: NOT STARTED (raw Ghidra output)
// 2 functions, 0x367dc4-0x367f3c
#include "game/update/moby420.h"
#include "game/collproc.h"
#include "game/mobyfunc.h"
#include "game/mobyutil.h"
#include "game/sound.h"

// 0x0367dc4 (0x14 bytes)
void M420_00367dc4(void)

{
  DAT_00840edc = 0x10000;
  return;
}


// 0x0367de0 (0x15c bytes)
/* Moby 420 */

undefined4 * UpdateMoby_420(MobyInstance *moby)

{
  float fVar1;
  int *piVar2;
  int iVar3;
  GPiece<16> auVar4;
  float fVar5;
  float fVar6;
  MobyInstance *pMVar7;
  undefined4 *puVar8;
  byte in_cr6;
  double dVar9;
  GPiece<16> auVar10;
  
  piVar2 = (int *)moby->pVar;
  fVar1 = (moby->pos).z;
  if (moby->state == '\0') {
    (moby->rotation).x = 1.5707964;
    dVar9 = (double)MB_randRot();
    (moby->rotation).z = (float)dVar9;
    moby->state = '\x01';
    fVar1 = (moby->pos).z + 0.1;
    (moby->pos).z = fVar1;
  }
  pMVar7 = g_MobyInstance;
  iVar3 = *piVar2;
  if (g_MobyInstance[iVar3].state == '\0') {
    puVar8 = (undefined4 *)0x40;
    moby->drawDistance = 0x40;
  }
  else {
    fVar5 = g_MobyInstance[iVar3].pos.y - (moby->pos).y;
    fVar6 = g_MobyInstance[iVar3].pos.x - (moby->pos).x;
    fVar1 = g_MobyInstance[iVar3].pos.z - fVar1;
    puVar8 = &DAT_00367dd8;
    if (SQRT(fVar1 * fVar1 + fVar6 * fVar6 + fVar5 * fVar5) < 0.5) {
      puVar8 = (undefined4 *)0x32;
      auVar4 = ZEXT416(0xfffffff0);
      auVar10 = loadVectorLeftIndexed(0x32,(longlong)(int)moby);
      auVar10 = vectorShiftRightAlgebraicWord
                          (auVar10,auVar4 | auVar4 << 0x20 | auVar4 << 0x40 | auVar4 << 0x60);
      auVar4 = ZEXT416(0);
      auVar10 = vectorConvertFromSignedFixedPointWord(auVar10,0);
      auVar10 = auVar10 >> 0x60 & (GPiece<16>)0xffffffff;
      vectorCompareEqualToFloatingPoint
                (auVar10 | auVar10 << 0x20 | auVar10 << 0x40 | auVar10 << 0x60,
                 auVar4 | auVar4 << 0x20 | auVar4 << 0x40 | auVar4 << 0x60);
      if ((bool)(in_cr6 >> 1 & 1)) {
        iVar3 = *piVar2;
        moby->drawDistance = 0;
        *(int *)((int)pMVar7[iVar3].pVar + 0x14) = *(int *)((int)pMVar7[iVar3].pVar + 0x14) + 1;
        puVar8 = (undefined4 *)PlayMobySound(0,0,moby);
      }
    }
  }
  return puVar8;
}


