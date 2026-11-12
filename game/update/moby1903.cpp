// game/update/moby1903.cpp -- reconstructed from NPEA00385 EBOOT
// STATUS: NOT STARTED (raw Ghidra output)
// 11 functions, 0x2d47e8-0x2d5ad0
#include "game/update/moby1903.h"
#include "game/camera.h"
#include "game/draw.h"
#include "game/hud.h"
#include "game/mesh.h"
#include "game/mobyfunc.h"
#include "game/mobyutil.h"
#include "game/vuchain.h"
#include "idol/fastfunc.h"
#include "idol/mUnk.h"
#include "idol/tiefunc.h"

// 0x02d47e8 (0x14 bytes)
void M1903_002d47e8(void)

{
  DAT_007ca594 = 0x10000;
  return;
}


// 0x02d4800 (0xf0 bytes)
void M1903_002d4800(int param_1)

{
  int iVar1;
  undefined **ppuVar2;
  undefined4 *puVar3;
  undefined **ppuVar4;
  undefined **ppuVar5;
  
  iVar1 = 0;
  ppuVar2 = &PTR_DAT_007cdac0;
  ppuVar4 = &PTR_DAT_007cdab0;
  puVar3 = &DAT_007ca618;
  ppuVar5 = &PTR_DAT_007cdae0;
  do {
    AddUVOffsets(&DAT_010b6050,*ppuVar2,*puVar3,&DAT_010b6018 + param_1 * 2);
    DrawMeshSet(*puVar3,*ppuVar4,*ppuVar5,&DAT_010b6050,9);
    iVar1 = iVar1 + 1;
    ppuVar2 = ppuVar2 + 1;
    puVar3 = puVar3 + 1;
    ppuVar4 = ppuVar4 + 1;
    ppuVar5 = ppuVar5 + 1;
  } while (iVar1 < 4);
  return;
}


// 0x02d48f0 (0xf0 bytes)
void M1903_002d48f0(int param_1)

{
  int iVar1;
  undefined **ppuVar2;
  undefined4 *puVar3;
  undefined **ppuVar4;
  undefined **ppuVar5;
  
  iVar1 = 0;
  ppuVar2 = &PTR_DAT_007d87d0;
  ppuVar4 = &PTR_DAT_007d87b0;
  puVar3 = &DAT_007d2b78;
  ppuVar5 = &PTR_PTR_007d8810;
  do {
    AddUVOffsets(&DAT_010b6050,*ppuVar2,*puVar3,&DAT_010b6030 + param_1 * 2);
    DrawMeshSet(*puVar3,*ppuVar4,*ppuVar5,&DAT_010b6050,9);
    iVar1 = iVar1 + 1;
    ppuVar2 = ppuVar2 + 1;
    puVar3 = puVar3 + 1;
    ppuVar4 = ppuVar4 + 1;
    ppuVar5 = ppuVar5 + 1;
  } while (iVar1 < 8);
  return;
}


// 0x02d49e0 (0xf0 bytes)
void M1903_002d49e0(int param_1)

{
  int iVar1;
  undefined **ppuVar2;
  undefined4 *puVar3;
  undefined **ppuVar4;
  undefined **ppuVar5;
  
  iVar1 = 0;
  ppuVar2 = &PTR_DAT_007d2af4;
  ppuVar4 = &PTR_DAT_007d2ac8;
  puVar3 = &DAT_007cdaf0;
  ppuVar5 = &PTR_PTR_007d2b4c;
  do {
    AddUVOffsets(&DAT_010b6050,*ppuVar2,*puVar3,&DAT_010b6040 + param_1 * 2);
    DrawMeshSet(*puVar3,*ppuVar4,*ppuVar5,&DAT_010b6050,9);
    iVar1 = iVar1 + 1;
    ppuVar2 = ppuVar2 + 1;
    puVar3 = puVar3 + 1;
    ppuVar4 = ppuVar4 + 1;
    ppuVar5 = ppuVar5 + 1;
  } while (iVar1 < 0xb);
  return;
}


// 0x02d4ad0 (0x698 bytes)
void M1903_002d4ad0(void)

{
  RenderingStep *pRVar1;
  undefined8 uVar2;
  longlong lVar3;
  undefined **ppuVar4;
  undefined **ppuVar5;
  undefined **ppuVar6;
  undefined **ppuVar7;
  undefined **ppuVar8;
  undefined4 *puVar9;
  undefined4 *puVar10;
  int iVar11;
  undefined **ppuVar12;
  int iVar13;
  
  uVar2 = idol_draw::PackCmd(0,1,0,1,0x80);
  SetGSReg(3,uVar2);
  uVar2 = SCE_GS_SET_CLAMP(0,0,0,0,0,0);
  SetGSReg(6,uVar2);
  uVar2 = SCE_GS_SET_TEX1(0,0,1,1,1,0,0xff90);
  SetGSReg(0x1a,uVar2);
  uVar2 = idol_draw::Blend(1,0,0x3f,1,0,0,1,2);
  SetGSReg(0x16,uVar2);
  iVar11 = EffectTexHeaders;
  pRVar1 = ForwardPass;
  lVar3 = GetEffectTex(0x16);
  FUN_004d6bb0(pRVar1,0,iVar11 + (int)(lVar3 << 5) + (int)(lVar3 << 2));
  STUB_00071170();
  uVar2 = GetEffectTex(0x2c);
  SetGSReg(0x18,uVar2);
  uVar2 = idol_draw::PackCmd(0,1,0,1,DAT_007ca5d0);
  SetGSReg(3,uVar2);
  iVar13 = 0;
  ppuVar6 = &PTR_DAT_007cdab0;
  ppuVar5 = &PTR_DAT_007cdac0;
  puVar9 = &DAT_007ca618;
  ppuVar4 = &PTR_DAT_007cdae0;
  iVar11 = 0;
  ppuVar12 = ppuVar5;
  ppuVar8 = ppuVar6;
  ppuVar7 = ppuVar4;
  puVar10 = puVar9;
  do {
    AddUVOffsets(&DAT_010b6050,*ppuVar12,*puVar10,&DAT_010b6018);
    DrawMeshSet(*puVar10,*ppuVar8,*ppuVar7,&DAT_010b6050,9);
    iVar13 = iVar13 + 1;
    ppuVar12 = ppuVar12 + 1;
    puVar10 = puVar10 + 1;
    ppuVar8 = ppuVar8 + 1;
    ppuVar7 = ppuVar7 + 1;
  } while (iVar13 < 4);
  if (DAT_010b6010 != 0) {
    uVar2 = GetEffectTex(0x29);
    SetGSReg(0x18,uVar2);
    uVar2 = idol_draw::PackCmd(0,2,2,1,(int)(DAT_007ca5d4 * (uint)DAT_010b6010) >> 8);
    SetGSReg(3,uVar2);
    iVar13 = 0;
    ppuVar12 = ppuVar5;
    ppuVar8 = ppuVar6;
    ppuVar7 = ppuVar4;
    puVar10 = puVar9;
    do {
      AddUVOffsets(&DAT_010b6050,*ppuVar12,*puVar10,&DAT_010b6020);
      DrawMeshSet(*puVar10,*ppuVar8,*ppuVar7,&DAT_010b6050,9);
      iVar13 = iVar13 + 1;
      ppuVar12 = ppuVar12 + 1;
      puVar10 = puVar10 + 1;
      ppuVar8 = ppuVar8 + 1;
      ppuVar7 = ppuVar7 + 1;
    } while (iVar13 < 4);
    uVar2 = idol_draw::PackCmd(2,0,2,1,(int)(DAT_007ca5d4 * (uint)DAT_010b6010) >> 8);
    SetGSReg(3,uVar2);
    iVar13 = 0;
    do {
      AddUVOffsets(&DAT_010b6050,*ppuVar5,*puVar9,&DAT_010b6028);
      DrawMeshSet(*puVar9,*ppuVar6,*ppuVar4,&DAT_010b6050,9);
      iVar13 = iVar13 + 1;
      ppuVar5 = ppuVar5 + 1;
      puVar9 = puVar9 + 1;
      ppuVar6 = ppuVar6 + 1;
      ppuVar4 = ppuVar4 + 1;
    } while (iVar13 < 4);
  }
  uVar2 = GetEffectTex(0x2a);
  SetGSReg(0x18,uVar2);
  uVar2 = idol_draw::PackCmd(0,2,0,1,DAT_007ca604);
  SetGSReg(3,uVar2);
  ppuVar6 = &PTR_DAT_007d87d0;
  ppuVar4 = &PTR_DAT_007d87b0;
  puVar9 = &DAT_007d2b78;
  ppuVar5 = &PTR_PTR_007d8810;
  iVar13 = 0;
  ppuVar12 = ppuVar6;
  ppuVar8 = ppuVar4;
  ppuVar7 = ppuVar5;
  puVar10 = puVar9;
  do {
    AddUVOffsets(&DAT_010b6050,*ppuVar12,*puVar10,&DAT_010b6030);
    DrawMeshSet(*puVar10,*ppuVar8,*ppuVar7,&DAT_010b6050,9);
    iVar13 = iVar13 + 1;
    ppuVar12 = ppuVar12 + 1;
    puVar10 = puVar10 + 1;
    ppuVar8 = ppuVar8 + 1;
    ppuVar7 = ppuVar7 + 1;
  } while (iVar13 < 8);
  uVar2 = idol_draw::PackCmd(0,2,0,1,DAT_007ca608);
  SetGSReg(3,uVar2);
  iVar13 = 0;
  do {
    AddUVOffsets(&DAT_010b6050,*ppuVar6,*puVar9,&DAT_010b6038);
    DrawMeshSet(*puVar9,*ppuVar4,*ppuVar5,&DAT_010b6050,9);
    iVar13 = iVar13 + 1;
    ppuVar6 = ppuVar6 + 1;
    puVar9 = puVar9 + 1;
    ppuVar4 = ppuVar4 + 1;
    ppuVar5 = ppuVar5 + 1;
  } while (iVar13 < 8);
  uVar2 = GetEffectTex(0x2b);
  SetGSReg(0x18,uVar2);
  uVar2 = idol_draw::PackCmd(0,2,0,1,DAT_007ca614);
  SetGSReg(3,uVar2);
  ppuVar12 = &PTR_PTR_007d2b4c;
  ppuVar7 = &PTR_DAT_007d2af4;
  puVar10 = &DAT_007cdaf0;
  ppuVar8 = &PTR_DAT_007d2ac8;
  do {
    AddUVOffsets(&DAT_010b6050,*ppuVar7,*puVar10,&DAT_010b6040);
    DrawMeshSet(*puVar10,*ppuVar8,*ppuVar12,&DAT_010b6050,9);
    iVar11 = iVar11 + 1;
    ppuVar7 = ppuVar7 + 1;
    puVar10 = puVar10 + 1;
    ppuVar8 = ppuVar8 + 1;
    ppuVar12 = ppuVar12 + 1;
  } while (iVar11 < 0xb);
  uVar2 = idol_draw::Blend(1,5,0x60,3,0,0,1,2);
  SetGSReg(0x16,uVar2);
  return;
}


// 0x02d5170 (0x220 bytes)
void M1903_002d5170
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


// 0x02d53b8 (0x14c bytes)
void M1903_002d53b8
               (double param_1,double param_2,double param_3,float *param_4,undefined8 param_5,
               undefined8 param_6,float *param_7)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  
  fVar1 = (float)((double)DAT_0071f424 * param_1 + (double)*param_7);
  *param_7 = fVar1;
  if (1.0 < fVar1) {
    fVar1 = fVar1 - 2.0;
    *param_7 = fVar1;
  }
  if (fVar1 < -1.0) {
    fVar1 = fVar1 + 2.0;
    *param_7 = fVar1;
  }
  fVar2 = (float)((double)DAT_0071f424 * param_2 + (double)param_7[1]);
  param_7[1] = fVar2;
  if (1.0 < fVar2) {
    fVar2 = fVar2 - 2.0;
    param_7[1] = fVar2;
  }
  if (fVar2 < -1.0) {
    param_7[1] = fVar2 + 2.0;
  }
  fVar1 = fVar1 * 3.1415927;
  fVar2 = 3.1415925 - fVar1;
  if (fVar1 - (3.1415925 - fVar1) < 0.0) {
    fVar2 = fVar1;
  }
  fVar3 = -3.1415925 - fVar1;
  if ((-3.1415925 - fVar1) - fVar2 < 0.0) {
    fVar3 = fVar2;
  }
  fVar1 = fVar3 * fVar3;
  fVar2 = fVar1 * fVar1 * fVar3;
  fVar4 = fVar1 * fVar2;
  *param_4 = (float)((double)(fVar1 * fVar4 * 2.601887e-06 +
                             fVar4 * -0.0001980741 +
                             fVar2 * 0.0083330255 + fVar1 * fVar3 * -0.16666657 + fVar3) * param_3);
  fVar1 = param_7[1] * 3.1415927;
  fVar2 = 3.1415925 - fVar1;
  if (fVar1 - (3.1415925 - fVar1) < 0.0) {
    fVar2 = fVar1;
  }
  fVar3 = -3.1415925 - fVar1;
  if ((-3.1415925 - fVar1) - fVar2 < 0.0) {
    fVar3 = fVar2;
  }
  fVar1 = fVar3 * fVar3;
  fVar2 = fVar1 * fVar1 * fVar3;
  fVar4 = fVar1 * fVar2;
  param_4[1] = (float)((double)(fVar1 * fVar4 * 2.601887e-06 +
                               fVar4 * -0.0001980741 +
                               fVar2 * 0.0083330255 + fVar1 * fVar3 * -0.16666657 + fVar3) * param_3
                      );
  return;
}


// 0x02d5510 (0xb8 bytes)
void M1903_002d5510(longlong param_1)

{
  int iVar1;
  float fVar2;
  float fVar3;
  
  fVar3 = DAT_0071f424;
  iVar1 = (int)(param_1 << 3);
  fVar2 = *(float *)(&DAT_007ca5dc + iVar1) * DAT_0071f424 + *(float *)((int)&DAT_010b6018 + iVar1);
  *(float *)((int)&DAT_010b6018 + iVar1) = fVar2;
  if (1.0 < fVar2) {
    fVar2 = fVar2 - 1.0;
    *(float *)((int)&DAT_010b6018 + iVar1) = fVar2;
  }
  if (fVar2 < -1.0) {
    *(float *)((int)&DAT_010b6018 + iVar1) = fVar2 + 1.0;
  }
  fVar2 = *(float *)(&DAT_007ca5e0 + iVar1) * fVar3 + *(float *)((int)&DAT_010b601c + iVar1);
  *(float *)((int)&DAT_010b601c + iVar1) = fVar2;
  if (1.0 < fVar2) {
    fVar2 = fVar2 - 1.0;
    *(float *)((int)&DAT_010b601c + iVar1) = fVar2;
  }
  if (fVar2 < -1.0) {
    *(float *)((int)&DAT_010b601c + iVar1) = fVar2 + 1.0;
  }
  return;
}


// 0x02d55d0 (0xb8 bytes)
void M1903_002d55d0(longlong param_1)

{
  int iVar1;
  float fVar2;
  float fVar3;
  
  fVar3 = DAT_0071f424;
  iVar1 = (int)(param_1 << 3);
  fVar2 = *(float *)(&DAT_007ca5f4 + iVar1) * DAT_0071f424 + *(float *)((int)&DAT_010b6030 + iVar1);
  *(float *)((int)&DAT_010b6030 + iVar1) = fVar2;
  if (1.0 < fVar2) {
    fVar2 = fVar2 - 1.0;
    *(float *)((int)&DAT_010b6030 + iVar1) = fVar2;
  }
  if (fVar2 < -1.0) {
    *(float *)((int)&DAT_010b6030 + iVar1) = fVar2 + 1.0;
  }
  fVar2 = *(float *)(&DAT_007ca5f8 + iVar1) * fVar3 + *(float *)((int)&DAT_010b6034 + iVar1);
  *(float *)((int)&DAT_010b6034 + iVar1) = fVar2;
  if (1.0 < fVar2) {
    fVar2 = fVar2 - 1.0;
    *(float *)((int)&DAT_010b6034 + iVar1) = fVar2;
  }
  if (fVar2 < -1.0) {
    *(float *)((int)&DAT_010b6034 + iVar1) = fVar2 + 1.0;
  }
  return;
}


// 0x02d5690 (0xb8 bytes)
void M1903_002d5690(longlong param_1)

{
  int iVar1;
  float fVar2;
  float fVar3;
  
  fVar3 = DAT_0071f424;
  iVar1 = (int)(param_1 << 3);
  fVar2 = *(float *)(&DAT_007ca60c + iVar1) * DAT_0071f424 + *(float *)((int)&DAT_010b6040 + iVar1);
  *(float *)((int)&DAT_010b6040 + iVar1) = fVar2;
  if (1.0 < fVar2) {
    fVar2 = fVar2 - 1.0;
    *(float *)((int)&DAT_010b6040 + iVar1) = fVar2;
  }
  if (fVar2 < -1.0) {
    *(float *)((int)&DAT_010b6040 + iVar1) = fVar2 + 1.0;
  }
  fVar2 = *(float *)(&DAT_007ca610 + iVar1) * fVar3 + *(float *)((int)&DAT_010b6044 + iVar1);
  *(float *)((int)&DAT_010b6044 + iVar1) = fVar2;
  if (1.0 < fVar2) {
    fVar2 = fVar2 - 1.0;
    *(float *)((int)&DAT_010b6044 + iVar1) = fVar2;
  }
  if (fVar2 < -1.0) {
    *(float *)((int)&DAT_010b6044 + iVar1) = fVar2 + 1.0;
  }
  return;
}


// 0x02d5780 (0x350 bytes)
// strings: 002d5750: '?fff_q' (raw)

/* Moby 1903 */

void UpdateMoby_1903(MobyInstance *moby)

{
  int iVar1;
  undefined1 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  double dVar5;
  undefined8 uVar6;
  double dVar7;
  GPiece<16> auVar8;
  GPiece<16> auVar9;
  GPiece<16> local_40;
  
  if (moby->state == 0) {
    if (DAT_010b6014 == 0) {
      uVar6 = 0x3fe6666660000000;
      uVar4 = 0x3ff0000000000000;
      uVar3 = 0x3fe0000000000000;
      M1903_002d5170
                (0x3fe6666660000000,0x3ff0000000000000,0x3fecccccc0000000,0x3fe0000000000000,
                 &PTR_DAT_007cdae0,4,&DAT_007ca618);
      M1903_002d5170
                (uVar3,uVar3,uVar3,uVar4,&PTR_PTR_007d2b4c,0xb,&DAT_007cdaf0);
      M1903_002d5170
                (0x3fd0000000000000,0x3fd0000000000000,0x3fd0000000000000,uVar6,&PTR_PTR_007d8810,8,
                 &DAT_007d2b78);
      DAT_010b6014 = 1;
    }
    auVar9 = ZEXT416(0);
    auVar8 = auVar9 | auVar9 << 0x20 | auVar9 << 0x40 | auVar9 << 0x60;
    moby->state = '\x01';
    DAT_010b6018 = 0;
    DAT_010b601c = 0;
    DAT_010b6020 = 0;
    DAT_010b6024 = 0;
    DAT_010b6028 = 0;
    DAT_010b602c = 0;
    DAT_010b6048 = 0;
    DAT_010b604c = 0;
    DAT_010b6030 = 0;
    DAT_010b6034 = storeVectorElementWordIndexed(auVar8,0x6034,0x10b0000);
    DAT_010b6038 = 0;
    auVar9 = loadVectorLeftIndexed(0x14,0x2d5748);
    auVar9 = auVar9 >> 0x60 & (GPiece<16>)0xffffffff;
    DAT_010b603c = storeVectorElementWordIndexed
                             (auVar9 | auVar9 << 0x20 | auVar9 << 0x40 | auVar9 << 0x60,0,0x10b603c)
    ;
    DAT_010b6040 = 0;
    DAT_010b6044 = storeVectorElementWordIndexed(auVar8,0x6044,0x10b0000);
  }
  else if ((((moby->state < 2) &&
            (0x4329ffff <
             (int)(((uint)((int)GameCamera.posZ >> 0x1f) >> 1 ^ (uint)GameCamera.posZ) -
                  ((int)GameCamera.posZ >> 0x1f)))) &&
           (iVar1 = FastCheckBsphereInView(0x408f400000000000,local_40), -1 < iVar1)) &&
          (0x43340000 <
           (int)(((uint)((int)GameCamera.posZ >> 0x1f) >> 1 ^ (uint)GameCamera.posZ) -
                ((int)GameCamera.posZ >> 0x1f)))) {
    dVar7 = 35.0;
    dVar5 = (double)SQRT((GameCamera.posZ - DAT_007ca5c8) * (GameCamera.posZ - DAT_007ca5c8) +
                         (GameCamera.posX - DAT_007ca5c0) * (GameCamera.posX - DAT_007ca5c0) +
                         (GameCamera.posY - DAT_007ca5c4) * (GameCamera.posY - DAT_007ca5c4));
    uVar2 = DAT_010b6010;
    if (dVar5 <= 35.0) {
      M1903_002d5510(0);
      M1903_002d53b8
                (0x3fe0a3d700000000,0x3fe3d70a40000000,0x3faeb851e0000000,&DAT_010b6020);
      M1903_002d5510(2);
      uVar2 = 0xff;
      if ((15.0 <= dVar5) && (uVar2 = 0, dVar5 < dVar7)) {
        uVar2 = FastDoubleToInt((double)(-((float)(dVar5 - 15.0) * 0.05 - 1.0) * 255.0));
      }
    }
    DAT_010b6010 = uVar2;
    M1903_002d5690(0);
    M1903_002d55d0(0);
    M1903_002d55d0(1);
    RegisterFuncForMoby(&PTR_M1903_002d4ad0_0070b340,moby);
  }
  return;
}


