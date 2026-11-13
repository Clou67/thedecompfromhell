// game/update/moby1953.cpp -- reconstructed from NPEA00385 EBOOT
// STATUS: NOT STARTED (raw Ghidra output)
// 3 functions, 0x2e44d0-0x2e4ac8
#include "game/update/moby1953.h"
#include "game/camera.h"
#include "game/collproc.h"
#include "game/draw.h"
#include "game/mobyfunc.h"
#include "game/mobyutil.h"
#include "game/vuchain.h"
#include "idol/fastfunc.h"

// 0x02e44d0 (0x21c bytes)
// inlined: FastRSqrt @0x2e455c, FastRSqrt @0x2e45cc, FastRSqrt @0x2e4650
void M1953_002e44d0
               (int param_1,float *param_2,float *param_3,undefined8 param_4,float *param_5)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  int iVar12;
  
  iVar12 = 0;
  if (0 < param_1) {
    fVar1 = 0.0;
    do {
      fVar2 = param_3[1] - GameCamera.posY;
      fVar3 = *param_3 - GameCamera.posX;
      fVar8 = param_3[2] - GameCamera.posZ;
      fVar4 = fVar8 * fVar8 + fVar3 * fVar3 + fVar2 * fVar2;
      fVar6 = fVar1;
      fVar5 = fVar1;
      fVar7 = fVar1;
      if (SQRT(fVar4) != 0.0) {
        fVar5 = 1.0 / SQRT(fVar4);
        fVar5 = -(fVar4 * fVar5 * fVar5 - 1.0) * fVar5 * 0.5 + fVar5;
        fVar5 = -(fVar4 * fVar5 * fVar5 - 1.0) * fVar5 * 0.5 + fVar5;
        fVar5 = -(fVar4 * fVar5 * fVar5 - 1.0) * fVar5 * 0.5 + fVar5;
        fVar6 = fVar3 * fVar5;
        fVar7 = fVar2 * fVar5;
        fVar5 = fVar8 * fVar5;
      }
      fVar2 = param_2[1];
      fVar3 = *param_2;
      fVar4 = param_2[2];
      fVar11 = fVar4 * fVar4 + fVar3 * fVar3 + fVar2 * fVar2;
      fVar9 = fVar1;
      fVar10 = fVar1;
      fVar8 = fVar1;
      if (SQRT(fVar11) != 0.0) {
        fVar8 = 1.0 / SQRT(fVar11);
        fVar8 = -(fVar11 * fVar8 * fVar8 - 1.0) * fVar8 * 0.5 + fVar8;
        fVar8 = -(fVar11 * fVar8 * fVar8 - 1.0) * fVar8 * 0.5 + fVar8;
        fVar8 = -(fVar11 * fVar8 * fVar8 - 1.0) * fVar8 * 0.5 + fVar8;
        fVar9 = fVar8 * fVar3;
        fVar10 = fVar8 * fVar2;
        fVar8 = fVar8 * fVar4;
      }
      fVar2 = (fVar5 * fVar8 + fVar6 * fVar9 + fVar7 * fVar10) * 2.0;
      fVar3 = -(fVar2 * fVar10 - fVar7);
      fVar9 = -(fVar2 * fVar9 - fVar6);
      fVar2 = -(fVar2 * fVar8 - fVar5);
      fVar4 = fVar2 * fVar2 + fVar9 * fVar9 + fVar3 * fVar3;
      fVar5 = fVar1;
      fVar6 = fVar1;
      fVar7 = fVar1;
      if (SQRT(fVar4) != 0.0) {
        fVar7 = 1.0 / SQRT(fVar4);
        fVar7 = -(fVar4 * fVar7 * fVar7 - 1.0) * fVar7 * 0.5 + fVar7;
        fVar7 = -(fVar4 * fVar7 * fVar7 - 1.0) * fVar7 * 0.5 + fVar7;
        fVar7 = -(fVar4 * fVar7 * fVar7 - 1.0) * fVar7 * 0.5 + fVar7;
        fVar5 = fVar7 * fVar9;
        fVar6 = fVar7 * fVar3;
        fVar7 = fVar7 * fVar2;
      }
      iVar12 = iVar12 + 1;
      param_3 = param_3 + 3;
      param_2 = param_2 + 3;
      fVar7 = SQRT((fVar7 + 1.0) * (fVar7 + 1.0) + fVar5 * fVar5 + fVar6 * fVar6) * 2.0;
      *param_5 = (fVar5 / fVar7 + 0.5) * 2.0;
      param_5[1] = (fVar6 / fVar7 + 0.5) * 2.0;
      param_5 = param_5 + 2;
    } while (iVar12 < param_1);
  }
  return;
}


// 0x02e46f0 (0x1dc bytes)
void M1953_002e46f0(void)

{
  undefined8 uVar1;
  int iVar2;
  int iVar3;
  undefined **ppuVar4;
  undefined **ppuVar5;
  undefined4 *puVar6;
  undefined **ppuVar7;
  undefined **ppuVar8;
  undefined4 *puVar9;
  
  uVar1 = GetEffectTex(0x29);
  SetGSReg(0x18,uVar1);
  uVar1 = idol_draw::PackCmd(0,1,2,1,0x40);
  SetGSReg(3,uVar1);
  uVar1 = SCE_GS_SET_CLAMP(0,0,0,0,0,0);
  SetGSReg(6,uVar1);
  uVar1 = SCE_GS_SET_TEX1(0,0,1,1,1,0,0xff90);
  SetGSReg(0x1a,uVar1);
  STUB_00071170();
  uVar1 = 0x4080000000000000;
  iVar3 = 0;
  ppuVar4 = &PTR_DAT_007fe860;
  puVar6 = &DAT_007fc250;
  ppuVar8 = &PTR_DAT_007fe86c;
  ppuVar5 = &PTR_DAT_007fe854;
  puVar9 = &DAT_010baf30;
  ppuVar7 = &PTR_DAT_007fe848;
  do {
    iVar2 = FastCheckBsphereInView(uVar1,puVar9);
    if (iVar2 != -1) {
      M1953_002e44d0(*puVar6,*ppuVar4,*ppuVar7,*ppuVar5,&DAT_010baf60);
      DrawMeshSet(*puVar6,*ppuVar7,*ppuVar8,&DAT_010baf60,9);
    }
    iVar3 = iVar3 + 1;
    puVar9 = puVar9 + 4;
    ppuVar4 = ppuVar4 + 1;
    ppuVar5 = ppuVar5 + 1;
    puVar6 = puVar6 + 1;
    ppuVar7 = ppuVar7 + 1;
    ppuVar8 = ppuVar8 + 1;
  } while (iVar3 < 3);
  return;
}


// 0x02e48d8 (0x1f0 bytes)
/* Moby 1953 */

void UpdateMoby_1953(MobyInstance *moby)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  int iVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float *pfVar11;
  int *piVar12;
  int iVar13;
  int iVar14;
  int iVar15;
  int iVar16;
  int iVar17;
  
  if (moby->state == 0) {
    iVar14 = 0;
    piVar12 = &DAT_007fc250;
    iVar13 = 0;
    pfVar11 = (float *)&DAT_010baf30;
    do {
      fVar1 = -1024.0;
      fVar2 = 1024.0;
      iVar7 = *piVar12;
      fVar8 = fVar2;
      fVar5 = fVar1;
      fVar9 = fVar2;
      fVar10 = fVar1;
      if (0 < iVar7) {
        iVar17 = 0;
        iVar15 = iVar7;
        do {
          iVar15 = iVar15 + -1;
          iVar16 = *(int *)((int)&PTR_DAT_007fe848 + iVar13) + iVar17;
          fVar6 = *(float *)(*(int *)((int)&PTR_DAT_007fe848 + iVar13) + iVar17);
          iVar17 = iVar17 + 0xc;
          fVar3 = *(float *)(iVar16 + 4);
          fVar4 = *(float *)(iVar16 + 8);
          if (fVar5 - fVar6 < 0.0) {
            fVar5 = fVar6;
          }
          if (fVar6 - fVar8 < 0.0) {
            fVar8 = fVar6;
          }
          if (fVar1 - fVar3 < 0.0) {
            fVar1 = fVar3;
          }
          if (fVar10 - fVar4 < 0.0) {
            fVar10 = fVar4;
          }
          if (fVar3 - fVar2 < 0.0) {
            fVar2 = fVar3;
          }
          if (fVar4 - fVar9 < 0.0) {
            fVar9 = fVar4;
          }
        } while (0 < iVar15);
      }
      pfVar11[3] = 0.0;
      iVar15 = 0;
      fVar8 = (fVar5 + fVar8) * 0.5;
      fVar1 = (fVar1 + fVar2) * 0.5;
      fVar2 = (fVar10 + fVar9) * 0.5;
      *pfVar11 = fVar8;
      pfVar11[1] = fVar1;
      pfVar11[2] = fVar2;
      if (0 < iVar7) {
        iVar17 = 0;
        fVar5 = pfVar11[3];
        do {
          iVar16 = *(int *)((int)&PTR_DAT_007fe848 + iVar13) + iVar17;
          fVar9 = *(float *)(*(int *)((int)&PTR_DAT_007fe848 + iVar13) + iVar17) - fVar8;
          fVar10 = *(float *)(iVar16 + 4) - fVar1;
          fVar3 = *(float *)(iVar16 + 8) - fVar2;
          fVar9 = SQRT(fVar3 * fVar3 + fVar9 * fVar9 + fVar10 * fVar10);
          if (fVar5 < fVar9) {
            pfVar11[3] = fVar9;
            fVar5 = fVar9;
          }
          iVar15 = iVar15 + 1;
          iVar17 = iVar17 + 0xc;
        } while (iVar15 < iVar7);
      }
      iVar14 = iVar14 + 1;
      piVar12 = piVar12 + 1;
      iVar13 = iVar13 + 4;
      pfVar11 = pfVar11 + 4;
    } while (iVar14 < 3);
    moby->state = '\x01';
    moby->drawDistance = 0xff;
    moby->updateDistance = -1;
  }
  else if (moby->state < 2) {
    RegisterMobyDraw(&PTR_M1953_002e46f0_0070b660,moby);
  }
  return;
}


