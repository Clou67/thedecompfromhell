// game/update/moby1848.cpp -- reconstructed from NPEA00385 EBOOT
// STATUS: NOT STARTED (raw Ghidra output)
// 3 functions, 0x2c4d28-0x2c5230
#include "game/update/moby1848.h"
#include "game/camera.h"
#include "game/draw.h"
#include "game/mobyfunc.h"
#include "game/mobyutil.h"
#include "game/vuchain.h"
#include "idol/fastfunc.h"

// 0x02c4d28 (0x254 bytes)
// inlined: FastRSqrt @0x2c4db8, FastRSqrt @0x2c4e48, FastRSqrt @0x2c4ed8
void M1848_002c4d28
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
      fVar9 = param_3[2] - GameCamera.posZ;
      fVar4 = fVar9 * fVar9 + fVar3 * fVar3 + fVar2 * fVar2;
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
        fVar5 = fVar9 * fVar5;
      }
      fVar2 = *param_2;
      fVar3 = param_2[1];
      fVar4 = param_2[2];
      fVar11 = --(fVar2 * fVar2) + --(fVar3 * fVar3) + --(fVar4 * fVar4);
      fVar9 = fVar1;
      fVar10 = fVar1;
      fVar8 = fVar1;
      if (SQRT(fVar11) != 0.0) {
        fVar8 = 1.0 / SQRT(fVar11);
        fVar8 = -(fVar11 * fVar8 * fVar8 - 1.0) * fVar8 * 0.5 + fVar8;
        fVar8 = -(fVar11 * fVar8 * fVar8 - 1.0) * fVar8 * 0.5 + fVar8;
        fVar8 = -(fVar11 * fVar8 * fVar8 - 1.0) * fVar8 * 0.5 + fVar8;
        fVar9 = -(fVar2 * fVar8);
        fVar10 = -(fVar3 * fVar8);
        fVar8 = -(fVar4 * fVar8);
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
      *param_5 = (fVar5 / fVar7 + 0.5) * 2.0 + DAT_010a0be0;
      param_5[1] = (fVar6 / fVar7 + 0.5) * 2.0 + DAT_010a0be4;
      param_5 = param_5 + 2;
    } while (iVar12 < param_1);
  }
  return;
}


// 0x02c4f7c (0x19c bytes)
void M1848_002c4f7c(void)

{
  undefined8 uVar1;
  int iVar2;
  undefined **ppuVar3;
  undefined **ppuVar4;
  undefined4 *puVar5;
  undefined **ppuVar6;
  undefined **ppuVar7;
  
  uVar1 = GetEffectTex(0x28);
  SetGSReg(0x18,uVar1);
  uVar1 = idol_draw::PackCmd(0,1,2,1,0x20);
  SetGSReg(3,uVar1);
  uVar1 = SCE_GS_SET_CLAMP(0,0,0,0,0,0);
  SetGSReg(6,uVar1);
  uVar1 = SCE_GS_SET_TEX1(0,0,1,1,1,0,0xff90);
  SetGSReg(0x1a,uVar1);
  STUB_00071170();
  iVar2 = 0;
  ppuVar3 = &PTR_DAT_007bd310;
  puVar5 = &DAT_007b8090;
  ppuVar4 = &PTR_DAT_007bd2fc;
  ppuVar7 = &PTR_DAT_007bd324;
  ppuVar6 = &PTR_DAT_007bd2e8;
  do {
    M1848_002c4d28(*puVar5,*ppuVar3,*ppuVar6,*ppuVar4,&DAT_010a0bf0);
    DrawMeshSet(*puVar5,*ppuVar6,*ppuVar7,&DAT_010a0bf0,9);
    iVar2 = iVar2 + 1;
    ppuVar3 = ppuVar3 + 1;
    ppuVar4 = ppuVar4 + 1;
    puVar5 = puVar5 + 1;
    ppuVar6 = ppuVar6 + 1;
    ppuVar7 = ppuVar7 + 1;
  } while (iVar2 < 5);
  return;
}


// 0x02c5128 (0x108 bytes)
/* Moby 1848 */

void UpdateMoby_1848(MobyInstance *moby)

{
  if (moby->state == 0) {
    DAT_010a0be0 = 0.0;
    DAT_010a0be4 = 0.0;
    moby->state = '\x01';
  }
  else if (moby->state < 2) {
    DAT_010a0be0 = DAT_0071f424 * 0.025 + DAT_010a0be0;
    DAT_010a0be4 = DAT_0071f424 * 0.025 + DAT_010a0be4;
    if (1.0 < DAT_010a0be0) {
      DAT_010a0be0 = DAT_010a0be0 - 1.0;
    }
    if (DAT_010a0be0 < -1.0) {
      DAT_010a0be0 = DAT_010a0be0 + 1.0;
    }
    if (1.0 < DAT_010a0be4) {
      DAT_010a0be4 = DAT_010a0be4 - 1.0;
    }
    if (DAT_010a0be4 < -1.0) {
      DAT_010a0be4 = DAT_010a0be4 + 1.0;
    }
    RegisterFuncForMoby(&PTR_M1848_002c4f7c_0070b0a8,moby);
  }
  return;
}


