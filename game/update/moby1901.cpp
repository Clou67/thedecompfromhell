// game/update/moby1901.cpp -- reconstructed from NPEA00385 EBOOT
// STATUS: NOT STARTED (raw Ghidra output)
// 5 functions, 0x2d3d88-0x2d47e8
#include "game/update/moby1901.h"
#include "game/camera.h"
#include "game/collproc.h"
#include "game/draw.h"
#include "game/hud.h"
#include "game/mesh.h"
#include "game/mobyfunc.h"
#include "game/mobyutil.h"
#include "game/vuchain.h"
#include "idol/fastfunc.h"
#include "idol/mUnk.h"
#include "idol/shrubfunc.h"

// 0x02d3d88 (0x14 bytes)
void M1901_002d3d88(void)

{
  DAT_007bd758 = 0x10000;
  return;
}


// 0x02d3da8 (0x220 bytes)
void M1901_002d3da8
               (double param_1,double param_2,double param_3,double param_4,int param_5,int param_6,
               int *param_7)

{
  uint uVar1;
  int iVar5;
  ulonglong uVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  int in_r10;
  int iVar6;
  int iVar7;
  int iVar8;
  int *piVar9;
  int iVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  
  iVar6 = 0;
  if (0 < param_6) {
    iVar10 = 0;
    dVar15 = 255.0;
    piVar9 = param_7;
    do {
      iVar7 = 0;
      if (0 < *piVar9) {
        iVar8 = 0;
        do {
          uVar1 = *(uint *)(*(int *)(param_5 + iVar10) + iVar8);
          if (in_r10 == 0) {
            dVar11 = (double)FastIntToDouble(uVar1 & 0xff);
            dVar12 = (double)FastIntToDouble(uVar1 >> 8 & 0xff);
            dVar13 = (double)FastIntToDouble(uVar1 >> 0x10 & 0xff);
            dVar14 = (double)FastIntToDouble(uVar1 >> 0x18);
          }
          else {
            dVar14 = (double)FastIntToDouble(uVar1 >> 0x18);
            dVar12 = dVar15;
            dVar13 = dVar15;
            dVar11 = dVar15;
          }
          dVar14 = (double)(float)(dVar14 * param_4);
          dVar13 = (double)(float)(dVar13 * param_3);
          dVar12 = (double)(float)(dVar12 * param_2);
          iVar5 = FastDoubleToInt((double)(float)(dVar11 * param_1));
          uVar2 = FastDoubleToInt(dVar14);
          uVar3 = FastDoubleToInt(dVar13);
          uVar4 = FastDoubleToInt(dVar12);
          iVar7 = iVar7 + 1;
          *(int *)(*(int *)(param_5 + iVar10) + iVar8) =
               (int)((uVar2 & 0xffffffff) << 0x18) + (int)((uVar3 & 0xffffffff) << 0x10) +
               (int)((uVar4 & 0xffffffff) << 8) + iVar5;
          iVar8 = iVar8 + 4;
        } while (iVar7 < *(int *)((int)param_7 + iVar10));
      }
      iVar6 = iVar6 + 1;
      piVar9 = piVar9 + 1;
      iVar10 = iVar10 + 4;
    } while (iVar6 < param_6);
  }
  return;
}


// 0x02d3fc8 (0xf0 bytes)
void M1901_002d3fc8(int param_1)

{
  int iVar1;
  undefined **ppuVar2;
  undefined4 *puVar3;
  undefined **ppuVar4;
  undefined **ppuVar5;
  
  iVar1 = 0;
  ppuVar2 = &PTR_DAT_007ca50c;
  ppuVar4 = &PTR_DAT_007ca4f8;
  puVar3 = &DAT_007c74f0;
  ppuVar5 = &PTR_DAT_007ca534;
  do {
    AddUVOffsets(&DAT_010b5050,*ppuVar2,*puVar3,&DAT_010b5ff0 + param_1 * 2);
    DrawMeshSet(*puVar3,*ppuVar4,*ppuVar5,&DAT_010b5050,0x98);
    iVar1 = iVar1 + 1;
    ppuVar2 = ppuVar2 + 1;
    puVar3 = puVar3 + 1;
    ppuVar4 = ppuVar4 + 1;
    ppuVar5 = ppuVar5 + 1;
  } while (iVar1 < 5);
  return;
}


// 0x02d40b8 (0x47c bytes)
void M1901_002d40b8(int param_1)

{
  int *piVar1;
  RenderingStep *pRVar2;
  undefined8 uVar3;
  int iVar4;
  int iVar5;
  undefined4 *puVar6;
  undefined **ppuVar7;
  undefined **ppuVar8;
  undefined4 *puVar9;
  undefined **ppuVar10;
  undefined **ppuVar11;
  undefined **ppuVar12;
  undefined **ppuVar13;
  
  piVar1 = *(int **)(param_1 + 0x78);
  STUB_00071170();
  uVar3 = idol_draw::PackCmd(0,1,2,1,0x7f);
  SetGSReg(3,uVar3);
  uVar3 = SCE_GS_SET_CLAMP(0,0,0,0,0,0);
  SetGSReg(6,uVar3);
  uVar3 = SCE_GS_SET_TEX1(0,0,1,1,1,0,0xff90);
  SetGSReg(0x1a,uVar3);
  uVar3 = idol_draw::Blend(0,5,0x60,3,0,0,1,2);
  SetGSReg(0x16,uVar3);
  idol_draw::DrawDepth(DL_DepthPass,0);
  pRVar2 = DL_DepthPass;
  *DL_DepthPass->command = NV4097_SET_ALPHA_TEST_ENABLE_x1;
  pRVar2->command[1] = 0;
  pRVar2->command = pRVar2->command + 2;
  idol_draw::DrawDepth(DL_Pass,0);
  pRVar2 = DL_Pass;
  *DL_Pass->command = NV4097_SET_ALPHA_TEST_ENABLE_x1;
  pRVar2->command[1] = 0;
  iVar4 = *piVar1;
  pRVar2->command = pRVar2->command + 2;
  iVar4 = MB_IsPntInCuboid((Vec4 *)&GameCamera.posX,(longlong)iVar4);
  if (iVar4 != 0) {
    uVar3 = GetEffectTex(0x2c);
    SetGSReg(0x18,uVar3);
    iVar4 = EffectTexHeaders;
    pRVar2 = DL_DepthPass;
    iVar5 = GetEffectTex(0x2c);
    FUN_004d676c(pRVar2,0,iVar4 + iVar5 * 0x24,1,1);
    iVar4 = EffectTexHeaders;
    pRVar2 = DL_Pass;
    iVar5 = GetEffectTex(0x2c);
    FUN_004d676c(pRVar2,0,iVar4 + iVar5 * 0x24,1,1);
    iVar4 = 0;
    ppuVar7 = &PTR_DAT_007c7478;
    ppuVar11 = &PTR_DAT_007c7450;
    ppuVar12 = &PTR_DAT_007c74c8;
    puVar9 = &DAT_007bd7a0;
    do {
      AddUVOffsets(&DAT_010b5050,*ppuVar7,*puVar9,&DAT_010b6000);
      DrawMeshSet(*puVar9,*ppuVar11,*ppuVar12,&DAT_010b5050,0x89);
      iVar4 = iVar4 + 1;
      ppuVar7 = ppuVar7 + 1;
      puVar9 = puVar9 + 1;
      ppuVar11 = ppuVar11 + 1;
      ppuVar12 = ppuVar12 + 1;
    } while (iVar4 < 10);
  }
  uVar3 = GetEffectTex(0x2f);
  SetGSReg(0x18,uVar3);
  ppuVar13 = &PTR_DAT_007ca50c;
  ppuVar10 = &PTR_DAT_007ca4f8;
  puVar6 = &DAT_007c74f0;
  ppuVar8 = &PTR_DAT_007ca534;
  iVar4 = 0;
  ppuVar7 = ppuVar13;
  ppuVar11 = ppuVar10;
  ppuVar12 = ppuVar8;
  puVar9 = puVar6;
  do {
    AddUVOffsets(&DAT_010b5050,*ppuVar7,*puVar9,&DAT_010b5ff0);
    DrawMeshSet(*puVar9,*ppuVar11,*ppuVar12,&DAT_010b5050,0x98);
    iVar4 = iVar4 + 1;
    ppuVar7 = ppuVar7 + 1;
    puVar9 = puVar9 + 1;
    ppuVar11 = ppuVar11 + 1;
    ppuVar12 = ppuVar12 + 1;
  } while (iVar4 < 5);
  uVar3 = idol_draw::PackCmd(0,2,2,1,DAT_007bd784);
  SetGSReg(3,uVar3);
  uVar3 = GetEffectTex(0x30);
  SetGSReg(0x18,uVar3);
  iVar4 = 0;
  do {
    AddUVOffsets(&DAT_010b5050,*ppuVar13,*puVar6,&DAT_010b5ff8);
    DrawMeshSet(*puVar6,*ppuVar10,*ppuVar8,&DAT_010b5050,0x98);
    iVar4 = iVar4 + 1;
    ppuVar13 = ppuVar13 + 1;
    puVar6 = puVar6 + 1;
    ppuVar10 = ppuVar10 + 1;
    ppuVar8 = ppuVar8 + 1;
  } while (iVar4 < 5);
  return;
}


// 0x02d4550 (0x298 bytes)
/* Moby 1901 */

void UpdateMoby_1901(MobyInstance *moby)

{
  float fVar1;
  float fVar2;
  int iVar3;
  undefined4 *puVar4;
  float *pfVar5;
  undefined4 *puVar6;
  float *pfVar7;
  float *pfVar8;
  float *pfVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  
  fVar2 = DAT_0071f424;
  if (moby->state == 0) {
    if (DAT_010b5040 == 0) {
      uVar12 = 0x3fb99999a0000000;
      uVar11 = 0x3fd99999a0000000;
      uVar10 = 0x3fe0000000000000;
      M1901_002d3da8
                (0x3fb99999a0000000,0x3fe0000000000000,0x3fd99999a0000000,0x3fe0000000000000,
                 &PTR_DAT_007ca534,5,&DAT_007c74f0);
      M1901_002d3da8
                (uVar12,0x3fe3333340000000,uVar11,uVar10,&PTR_DAT_007c74c8,10,&DAT_007bd7a0);
      DAT_010b5040 = 1;
    }
    iVar3 = 0;
    moby->state = '\x01';
    puVar6 = &DAT_010b5ff0;
    moby->updateDistance = -1;
    moby->drawDistance = 0xff;
    puVar4 = &DAT_010b5ff4;
    do {
      iVar3 = iVar3 + 1;
      *puVar6 = 0;
      *puVar4 = 0;
      puVar6 = puVar6 + 2;
      puVar4 = puVar4 + 2;
    } while (iVar3 < 2);
  }
  else if (moby->state < 2) {
    pfVar8 = (float *)&DAT_010b5ff0;
    iVar3 = 0;
    pfVar9 = (float *)&DAT_007bd790;
    pfVar5 = (float *)&DAT_010b5ff4;
    pfVar7 = (float *)&DAT_007bd794;
    do {
      fVar1 = *pfVar9 * fVar2 + *pfVar8;
      *pfVar8 = fVar1;
      if (1.0 < fVar1) {
        fVar1 = fVar1 - 1.0;
        *pfVar8 = fVar1;
      }
      if (fVar1 < -1.0) {
        *pfVar8 = fVar1 + 1.0;
      }
      fVar1 = *pfVar7 * fVar2 + *pfVar5;
      *pfVar5 = fVar1;
      if (1.0 < fVar1) {
        fVar1 = fVar1 - 1.0;
        *pfVar5 = fVar1;
      }
      if (fVar1 < -1.0) {
        *pfVar5 = fVar1 + 1.0;
      }
      iVar3 = iVar3 + 1;
      pfVar9 = pfVar9 + 2;
      pfVar8 = pfVar8 + 2;
      pfVar7 = pfVar7 + 2;
      pfVar5 = pfVar5 + 2;
    } while (iVar3 < 2);
    DAT_010b6000 = DAT_007bd788 * fVar2 + DAT_010b6000;
    if (1.0 < DAT_010b6000) {
      DAT_010b6000 = DAT_010b6000 - 1.0;
    }
    if (DAT_010b6000 < -1.0) {
      DAT_010b6000 = DAT_010b6000 + 1.0;
    }
    DAT_010b6004 = DAT_007bd78c * fVar2 + DAT_010b6004;
    if (1.0 < DAT_010b6004) {
      DAT_010b6004 = DAT_010b6004 - 1.0;
    }
    if (DAT_010b6004 < -1.0) {
      DAT_010b6004 = DAT_010b6004 + 1.0;
    }
    RegisterOceanUpdate(&PTR_M1901_002d40b8_0070b310,moby);
  }
  return;
}


