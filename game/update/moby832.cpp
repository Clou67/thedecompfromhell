// game/update/moby832.cpp -- reconstructed from NPEA00385 EBOOT
// STATUS: NOT STARTED (raw Ghidra output)
// 4 functions, 0x47ffac-0x4804b4
#include "game/update/moby832.h"
#include "game/camera.h"
#include "game/collproc.h"
#include "game/draw.h"
#include "game/hero.h"
#include "game/mobyfunc.h"
#include "game/mobyutil.h"
#include "game/update/moby172.h"
#include "game/update/moby831.h"
#include "game/water.h"
#include "idol/fastfunc.h"
#include "idol/mUnk.h"

// 0x047ffac (0x30 bytes)
void M832_0047ffac(void)

{
  WaterTile_DrawAll(&DAT_00877d00,0x30);
  return;
}


// 0x047ffdc (0x14 bytes)
void M832_0047ffdc(void)

{
  DAT_008acc18 = 0x10000;
  return;
}


// 0x0480000 (0x294 bytes)
void M832_00480000(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  uint uVar3;
  uint uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  double dVar15;
  double dVar16;
  double dVar17;
  double dVar18;
  double dVar19;
  double dVar20;
  double dVar21;
  
  uVar4 = DAT_00966b24;
  uVar3 = DAT_00966b20;
  uVar2 = g_pIdolDraw;
  iVar1 = *(int *)(param_1 + 0x78);
  FUN_004deab8(g_pIdolDraw,DAT_00966b20,DAT_00966b24);
  FastIntToDouble(((int)uVar3 >> 1) + (uint)((int)uVar3 < 0 && (uVar3 & 1) != 0));
  FastIntToDouble(((int)uVar4 >> 1) + (uint)((int)uVar4 < 0 && (uVar4 & 1) != 0));
  GetEffectTex(0x1e);
  iVar11 = 0;
  iVar9 = ((int)uVar3 >> 5) + (uint)((int)uVar3 < 0 && (uVar3 & 0x1f) != 0) + 1;
  iVar10 = ((int)uVar4 >> 5) + (uint)((int)uVar4 < 0 && (uVar4 & 0x1f) != 0) + 1;
  if (0 < iVar9) {
    iVar14 = 0;
    dVar18 = 90.5;
    dVar19 = 127.5;
    dVar20 = 16.0;
    do {
      iVar12 = 0;
      if (0 < iVar10) {
        iVar13 = 0;
        dVar21 = (double)(float)((double)(longlong)iVar14 - dVar20);
        do {
          dVar17 = (double)(longlong)iVar13;
          dVar15 = (double)FastIntToDouble
                                     ((int)((double)animationSpeed * dVar18),
                                      (double)(longlong)iVar13,
                                      (int)((double)animationSpeed * dVar18));
          dVar16 = (double)FastIntToDouble(*(undefined4 *)(iVar1 + 0x140));
          FastDoubleToInt((double)(float)((double)(float)(dVar16 * dVar19) / dVar15));
          uVar5 = MB_randInt(0x20);
          uVar6 = MB_randInt(0x20);
          uVar7 = FastDoubleToInt(dVar21);
          uVar8 = FastDoubleToInt((double)(float)(dVar17 - dVar20));
          Sprite_DrawShapeWrapper(uVar7,uVar8,0x20,0x20,uVar5,uVar6,0x20,0x20);
          iVar12 = iVar12 + 1;
          iVar13 = iVar13 + 0x20;
        } while (iVar12 < iVar10);
      }
      iVar11 = iVar11 + 1;
      iVar14 = iVar14 + 0x20;
    } while (iVar11 < iVar9);
  }
  FUN_004d86b0(uVar2);
  return;
}


// 0x0480298 (0x21c bytes)
/* Moby 832 */

void UpdateMoby_832(MobyInstance *moby)

{
  int *piVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int *piVar7;
  
  moby->updateDistance = -1;
  piVar1 = (int *)moby->pVar;
  iVar4 = MobyUpdateChainStart;
  if (g_heroState != VISIBOMB_CONTROL) {
    piVar1[0x50] = 0;
    return;
  }
  while( true ) {
    if (iVar4 == 0) {
      piVar1[0x50] = 0;
      return;
    }
    if (*(short *)(iVar4 + 0xa6) == 0xac) break;
    iVar4 = *(int *)(iVar4 + 0x28);
  }
  iVar6 = 0;
  piVar1[0x50] = piVar1[0x50] + 1;
  piVar7 = piVar1;
  do {
    if ((((*piVar7 != -1) &&
         (uVar2 = (int)*(uint *)(iVar4 + 0x18) >> 0x1f, uVar3 = piVar7[1] >> 0x1f,
         iVar5 = (uVar2 >> 1 ^ *(uint *)(iVar4 + 0x18)) - uVar2,
         (int)((uVar3 >> 1 ^ piVar7[1]) - uVar3) < iVar5)) &&
        (uVar2 = piVar7[2] >> 0x1f, iVar5 < (int)((uVar2 >> 1 ^ piVar7[2]) - uVar2))) &&
       (iVar5 = PointInsideComplexPoly
                          ((Vec4 *)(iVar4 + 0x10),(Vec4 *)Splines[*piVar7]->points,
                           Splines[*piVar7]->cnt), iVar5 != 0)) {
      piVar1[0x50] = 0;
      return;
    }
    iVar5 = MB_IsPntInCuboid((Vec4 *)(iVar4 + 0x10),(longlong)piVar7[3]);
    if (iVar5 != 0) {
      piVar1[0x50] = 0;
      return;
    }
    iVar6 = iVar6 + 1;
    piVar7 = piVar7 + 4;
  } while (iVar6 < 0x14);
  iVar6 = piVar1[0x50];
  if (0 < iVar6) {
    if (ScreenColorEffectEnabled != '\0') {
      RegisterPostDraw(&PTR_M832_00480000_0070eee0,moby);
      iVar6 = piVar1[0x50];
    }
    if ((int)(animationSpeed * 90.5) < iVar6) {
      FUN_002ae9e0(iVar4,*(undefined4 *)(iVar4 + 0x78));
    }
  }
  return;
}


