// game/update/moby317.cpp -- reconstructed from NPEA00385 EBOOT
// STATUS: NOT STARTED (raw Ghidra output)
// 3 functions, 0x340168-0x340610
#include "game/update/moby317.h"
#include "game/camera.h"
#include "game/draw.h"
#include "game/mobyfunc.h"
#include "game/mobyutil.h"
#include "game/skyfunc.h"
#include "game/update.h"
#include "game/vuchain.h"
#include "game/water.h"
#include "idol/fastfunc.h"
#include "idol/idol_draw.h"
#include "idol/mUnk.h"
#include "idol/tiefunc.h"

// 0x0340168 (0x14 bytes)
void M317_00340168(void)

{
  DAT_008120c4 = 0x10000;
  return;
}


// 0x0340190 (0x3f4 bytes)
void M317_Gaspar_SubmitOcean(void)

{
  uint uVar1;
  uint uVar2;
  RsxCmd *pRVar3;
  undefined4 *puVar4;
  float *pfVar5;
  float *pfVar6;
  RenderingStep *pRVar7;
  undefined8 uVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  undefined4 *puVar12;
  uint *puVar13;
  uint *puVar14;
  undefined4 *puVar15;
  undefined4 *puVar16;
  longlong lVar17;
  int iVar18;
  longlong lVar19;
  double dVar20;
  
  uVar1 = worldUpdateTime / 0x14;
  DrawsFlowingLava
            ((double)((float)(longlong)worldUpdateTime * 0.05 - (float)(longlong)(int)uVar1),
             &DAT_008324c0,0x6c,(uVar1 & 0xf) + 0x2c,(uVar1 + 1 & 0xf) + 0x2c);
  dVar20 = (double)SubmitZone(&OCEAN_GASPAR);
  OceanFogNearDist = g_ViewContext.fogNearDist;
  OceanFogFarDist = g_ViewContext.fogFarDist;
  OceanFogNearIntensity = g_ViewContext.fogNearIntensity;
  OceanFogFarIntensity = g_ViewContext.fogFarIntensity;
  OceanFogR = g_ViewContext.fogR;
  OceanFogG = g_ViewContext.fogG;
  OceanFogB = g_ViewContext.fogB;
  if (LevelFogMode != 1) {
    g_ViewContext.fogNearDist = OCEAN_GASPAR.fogNearDist;
    g_ViewContext.fogFarDist = OCEAN_GASPAR.fogFarDist;
    g_ViewContext.fogNearIntensity = OCEAN_GASPAR.fogNearIntensity;
    g_ViewContext.fogFarIntensity = OCEAN_GASPAR.fogFarIntensity;
    g_ViewContext.fogR = (int)OCEAN_GASPAR.fogR;
    g_ViewContext.fogG = (int)OCEAN_GASPAR.fogG;
    g_ViewContext.fogB = (int)OCEAN_GASPAR.fogB;
    RebuildSharedWaveTables();
  }
  uVar8 = idol_draw::PackCmd(0,1,2,1,OCEAN_GASPAR.depth);
  SetGSReg(3,uVar8);
  STUB_00071170();
  lVar19 = 0x80;
  iVar9 = 0;
  do {
    puVar14 = g_ScratchBuf;
    *(undefined4 *)((int)g_ScratchBuf + iVar9) = 0x8e7c75ff;
    *(undefined4 *)((int)puVar14 + iVar9 + 4) = 0x8e7c75ff;
    lVar19 = lVar19 + -1;
    iVar9 = iVar9 + 8;
  } while (lVar19 != 0);
  iVar9 = 0;
  iVar18 = 0;
  do {
    iVar10 = FastCheckBsphereInView(0x4070000000000000,&DAT_00835800 + iVar18);
    if (iVar10 != -1) {
      iVar10 = *(int *)((int)&DAT_0083581c + iVar18);
      lVar17 = (longlong)iVar10;
      pfVar5 = *(float **)((int)&PTR_DAT_00835814 + iVar18);
      lVar19 = lVar17;
      pfVar6 = (float *)(g_ScratchBuf + 0x400);
      iVar11 = iVar10;
      while (0 < iVar11) {
        lVar19 = lVar19 + -1;
        *pfVar6 = *pfVar5 * 0.5;
        pfVar6[1] = pfVar5[1] * 0.5;
        pfVar5 = pfVar5 + 2;
        pfVar6 = pfVar6 + 2;
        iVar11 = (int)lVar19;
      }
      puVar12 = (undefined4 *)
                idol::AllocateMemAlign(FrameHeap,(int)(lVar17 << 5) - (int)(lVar17 << 2),0x10);
      puVar15 = *(undefined4 **)((int)&PTR_DAT_00835810 + iVar18);
      puVar13 = g_ScratchBuf + 0x400;
      lVar19 = lVar17;
      puVar14 = g_ScratchBuf;
      puVar16 = puVar12;
      if (iVar10 != 0) {
        do {
          lVar19 = lVar19 + -1;
          *puVar16 = *puVar15;
          uVar2 = *puVar14;
          puVar16[1] = puVar15[1];
          puVar4 = puVar15 + 2;
          puVar15 = puVar15 + 3;
          puVar16[2] = *puVar4;
          puVar16[3] = *puVar13;
          uVar1 = puVar13[1];
          puVar16[5] = (float)dVar20;
          puVar13 = puVar13 + 2;
          puVar16[4] = uVar1;
          puVar16[6] = uVar2 >> 0x18 | uVar2 >> 8 & 0xff00 | uVar2 << 0x18 | (uVar2 & 0xff00) << 8;
          puVar14 = puVar14 + 1;
          puVar16 = puVar16 + 7;
        } while (0 < (int)lVar19);
      }
      pRVar7 = ForwardPass;
      pRVar3 = ForwardPass->command;
      *pRVar3 = NV4097_SET_ALPHA_TEST_ENABLE_x1;
      pRVar7->command = pRVar3 + 2;
      pRVar3[1] = 0;
      idol_draw::DrawDepth(ForwardPass,0);
      pRVar7 = DepthPass;
      pRVar3 = DepthPass->command;
      *pRVar3 = NV4097_SET_ALPHA_TEST_ENABLE_x1;
      pRVar7->command = pRVar3 + 2;
      pRVar3[1] = 0;
      idol_draw::DrawDepth(DepthPass,0);
      FastDrawStripFog(lVar17,puVar12,0);
      FastDrawStripFog(lVar17,puVar12,2);
    }
    iVar9 = iVar9 + 1;
    iVar18 = iVar18 + 0x20;
  } while (iVar9 < 10);
  PopZoneFog(&OCEAN_GASPAR);
  return;
}


// 0x0340588 (0x88 bytes)
/* Moby 317 */

void UpdateMoby_317_GasparOcean(MobyInstance *moby)

{
  if (moby->state == 0) {
    moby->state = '\x01';
    moby->updateDistance = -1;
    OceanPlane_SetDepth(1.0,&OCEAN_GASPAR,ZEXT48(&DAT_00340584),0x80);
  }
  else if (moby->state < 2) {
    RegisterOceanUpdate(&PTR_M317_Gaspar_SubmitOcean_0070c240,moby);
  }
  return;
}


