// game/update/moby1919.cpp -- reconstructed from NPEA00385 EBOOT
// STATUS: NOT STARTED (raw Ghidra output)
// 11 functions, 0x2d9678-0x2da9ec
#include "game/update/moby1919.h"
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

// 0x02d9678 (0xf0 bytes)
void M1919_002d9678(int param_1)

{
  int iVar1;
  undefined **ppuVar2;
  undefined4 *puVar3;
  undefined **ppuVar4;
  undefined **ppuVar5;
  
  iVar1 = 0;
  ppuVar2 = &PTR_DAT_007f17b4;
  ppuVar4 = &PTR_DAT_007f1770;
  puVar3 = &DAT_007e3f90;
  ppuVar5 = &PTR_DAT_007f183c;
  do {
    AddUVOffsets(&DAT_010b8c70,*ppuVar2,*puVar3,&DAT_010b8c38 + param_1 * 2);
    DrawMeshSet(*puVar3,*ppuVar4,*ppuVar5,&DAT_010b8c70,9);
    iVar1 = iVar1 + 1;
    ppuVar2 = ppuVar2 + 1;
    puVar3 = puVar3 + 1;
    ppuVar4 = ppuVar4 + 1;
    ppuVar5 = ppuVar5 + 1;
  } while (iVar1 < 0x11);
  return;
}


// 0x02d9768 (0xf0 bytes)
void M1919_002d9768(int param_1)

{
  int iVar1;
  undefined **ppuVar2;
  undefined4 *puVar3;
  undefined **ppuVar4;
  undefined **ppuVar5;
  
  iVar1 = 0;
  ppuVar2 = &PTR_DAT_007e3f24;
  ppuVar4 = &PTR_DAT_007e3f00;
  puVar3 = &DAT_007dcde8;
  ppuVar5 = &PTR_DAT_007e3f6c;
  do {
    AddUVOffsets(&DAT_010b8c70,*ppuVar2,*puVar3,&DAT_010b8c50 + param_1 * 2);
    DrawMeshSet(*puVar3,*ppuVar4,*ppuVar5,&DAT_010b8c70,9);
    iVar1 = iVar1 + 1;
    ppuVar2 = ppuVar2 + 1;
    puVar3 = puVar3 + 1;
    ppuVar4 = ppuVar4 + 1;
    ppuVar5 = ppuVar5 + 1;
  } while (iVar1 < 9);
  return;
}


// 0x02d9858 (0xf0 bytes)
void M1919_002d9858(int param_1)

{
  int iVar1;
  undefined **ppuVar2;
  undefined4 *puVar3;
  undefined **ppuVar4;
  undefined **ppuVar5;
  
  iVar1 = 0;
  ppuVar2 = &PTR_DAT_007f3d0c;
  ppuVar4 = &PTR_DAT_007f3cf8;
  puVar3 = &DAT_007f1880;
  ppuVar5 = &PTR_DAT_007f3d34;
  do {
    AddUVOffsets(&DAT_010b8c70,*ppuVar2,*puVar3,&DAT_010b8c60 + param_1 * 2);
    DrawMeshSet(*puVar3,*ppuVar4,*ppuVar5,&DAT_010b8c70,9);
    iVar1 = iVar1 + 1;
    ppuVar2 = ppuVar2 + 1;
    puVar3 = puVar3 + 1;
    ppuVar4 = ppuVar4 + 1;
    ppuVar5 = ppuVar5 + 1;
  } while (iVar1 < 5);
  return;
}


// 0x02d9948 (0x72c bytes)
void M1919_002d9948(int param_1)

{
  int *piVar1;
  bool bVar2;
  RenderingStep *pRVar3;
  undefined8 uVar4;
  longlong lVar5;
  int iVar6;
  undefined **ppuVar7;
  undefined **ppuVar8;
  undefined **ppuVar9;
  undefined **ppuVar10;
  undefined4 *puVar11;
  undefined **ppuVar12;
  undefined4 *puVar13;
  undefined **ppuVar14;
  int iVar15;
  
  piVar1 = *(int **)(param_1 + 0x78);
  bVar2 = false;
  iVar15 = 0;
  uVar4 = idol_draw::PackCmd(0,1,0,1,0x80);
  SetGSReg(3,uVar4);
  uVar4 = FUN_00502f08(0,0,0,0,0,0);
  SetGSReg(6,uVar4);
  uVar4 = STUB_00502fd4_RET_0(0,0,1,1,1,0,0xff90);
  SetGSReg(0x1a,uVar4);
  uVar4 = idol_draw::Blend(1,0,0x3f,1,0,0,1,2);
  SetGSReg(0x16,uVar4);
  iVar6 = EffectTexHeaders;
  pRVar3 = ForwardPass;
  lVar5 = GetEffectTex(0x16);
  FUN_004d6bb0(pRVar3,0,iVar6 + (int)(lVar5 << 5) + (int)(lVar5 << 2));
  STUB_00071170();
  if ((((0x437f0000 <
         (int)(((uint)((int)GameCamera.posZ >> 0x1f) >> 1 ^ (uint)GameCamera.posZ) -
              ((int)GameCamera.posZ >> 0x1f))) ||
       (iVar6 = MB_IsPntInCuboid((Vec4 *)&GameCamera.posX,(longlong)*piVar1), iVar6 != 0))
      || (iVar6 = MB_IsPntInCuboid((Vec4 *)&GameCamera.posX,(longlong)piVar1[1]),
         iVar6 != 0)) ||
     (iVar6 = MB_IsPntInCuboid((Vec4 *)&GameCamera.posX,(longlong)piVar1[2]), iVar6 != 0))
  {
    bVar2 = true;
    uVar4 = GetEffectTex(0x2c);
    SetGSReg(0x18,uVar4);
    uVar4 = idol_draw::PackCmd(0,1,0,1,DAT_007dcda0);
    SetGSReg(3,uVar4);
    iVar6 = 0;
    ppuVar12 = &PTR_DAT_007f1770;
    ppuVar14 = &PTR_DAT_007f17b4;
    ppuVar10 = &PTR_DAT_007f183c;
    puVar13 = &DAT_007e3f90;
    do {
      AddUVOffsets(&DAT_010b8c70,*ppuVar14,*puVar13,&DAT_010b8c38);
      DrawMeshSet(*puVar13,*ppuVar12,*ppuVar10,&DAT_010b8c70,9);
      iVar6 = iVar6 + 1;
      ppuVar14 = ppuVar14 + 1;
      puVar13 = puVar13 + 1;
      ppuVar12 = ppuVar12 + 1;
      ppuVar10 = ppuVar10 + 1;
    } while (iVar6 < 0x11);
  }
  if (DAT_010b8c30 != 0 && bVar2) {
    uVar4 = GetEffectTex(0x29);
    SetGSReg(0x18,uVar4);
    uVar4 = idol_draw::PackCmd(0,2,2,1,(int)(DAT_007dcda4 * (uint)DAT_010b8c30) >> 8);
    SetGSReg(3,uVar4);
    ppuVar9 = &PTR_DAT_007f1770;
    ppuVar7 = &PTR_DAT_007f17b4;
    ppuVar8 = &PTR_DAT_007f183c;
    puVar11 = &DAT_007e3f90;
    iVar6 = 0;
    ppuVar10 = ppuVar7;
    ppuVar12 = ppuVar9;
    ppuVar14 = ppuVar8;
    puVar13 = puVar11;
    do {
      AddUVOffsets(&DAT_010b8c70,*ppuVar10,*puVar13,&DAT_010b8c40);
      DrawMeshSet(*puVar13,*ppuVar12,*ppuVar14,&DAT_010b8c70,9);
      iVar6 = iVar6 + 1;
      ppuVar10 = ppuVar10 + 1;
      puVar13 = puVar13 + 1;
      ppuVar12 = ppuVar12 + 1;
      ppuVar14 = ppuVar14 + 1;
    } while (iVar6 < 0x11);
    uVar4 = idol_draw::PackCmd(2,0,2,1,(int)(DAT_007dcda4 * (uint)DAT_010b8c30) >> 8);
    SetGSReg(3,uVar4);
    iVar6 = 0;
    do {
      AddUVOffsets(&DAT_010b8c70,*ppuVar7,*puVar11,&DAT_010b8c48);
      DrawMeshSet(*puVar11,*ppuVar9,*ppuVar8,&DAT_010b8c70,9);
      iVar6 = iVar6 + 1;
      ppuVar7 = ppuVar7 + 1;
      puVar11 = puVar11 + 1;
      ppuVar9 = ppuVar9 + 1;
      ppuVar8 = ppuVar8 + 1;
    } while (iVar6 < 0x11);
  }
  uVar4 = GetEffectTex(0x2a);
  SetGSReg(0x18,uVar4);
  uVar4 = idol_draw::PackCmd(0,2,0,1,DAT_007dcdd4);
  SetGSReg(3,uVar4);
  ppuVar8 = &PTR_DAT_007e3f24;
  ppuVar7 = &PTR_DAT_007e3f00;
  puVar11 = &DAT_007dcde8;
  ppuVar9 = &PTR_DAT_007e3f6c;
  iVar6 = 0;
  ppuVar10 = ppuVar8;
  ppuVar12 = ppuVar7;
  ppuVar14 = ppuVar9;
  puVar13 = puVar11;
  do {
    AddUVOffsets(&DAT_010b8c70,*ppuVar10,*puVar13,&DAT_010b8c50);
    DrawMeshSet(*puVar13,*ppuVar12,*ppuVar14,&DAT_010b8c70,9);
    iVar6 = iVar6 + 1;
    ppuVar10 = ppuVar10 + 1;
    puVar13 = puVar13 + 1;
    ppuVar12 = ppuVar12 + 1;
    ppuVar14 = ppuVar14 + 1;
  } while (iVar6 < 9);
  uVar4 = idol_draw::PackCmd(0,2,0,1,DAT_007dcdd8);
  SetGSReg(3,uVar4);
  iVar6 = 0;
  do {
    AddUVOffsets(&DAT_010b8c70,*ppuVar8,*puVar11,&DAT_010b8c58);
    DrawMeshSet(*puVar11,*ppuVar7,*ppuVar9,&DAT_010b8c70,9);
    iVar6 = iVar6 + 1;
    ppuVar8 = ppuVar8 + 1;
    puVar11 = puVar11 + 1;
    ppuVar7 = ppuVar7 + 1;
    ppuVar9 = ppuVar9 + 1;
  } while (iVar6 < 9);
  if (bVar2) {
    uVar4 = GetEffectTex(0x2b);
    SetGSReg(0x18,uVar4);
    uVar4 = idol_draw::PackCmd(0,2,0,1,DAT_007dcde4);
    SetGSReg(3,uVar4);
    ppuVar14 = &PTR_DAT_007f3d0c;
    ppuVar10 = &PTR_DAT_007f3d34;
    puVar13 = &DAT_007f1880;
    ppuVar12 = &PTR_DAT_007f3cf8;
    do {
      AddUVOffsets(&DAT_010b8c70,*ppuVar14,*puVar13,&DAT_010b8c60);
      DrawMeshSet(*puVar13,*ppuVar12,*ppuVar10,&DAT_010b8c70,9);
      iVar15 = iVar15 + 1;
      ppuVar14 = ppuVar14 + 1;
      puVar13 = puVar13 + 1;
      ppuVar12 = ppuVar12 + 1;
      ppuVar10 = ppuVar10 + 1;
    } while (iVar15 < 5);
  }
  return;
}


// 0x02da078 (0x220 bytes)
void M1919_002da078
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


// 0x02da2c0 (0x14c bytes)
void M1919_002da2c0
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


// 0x02da418 (0xb8 bytes)
void M1919_002da418(longlong param_1)

{
  int iVar1;
  float fVar2;
  float fVar3;
  
  fVar3 = DAT_0071f424;
  iVar1 = (int)(param_1 << 3);
  fVar2 = *(float *)(&DAT_007dcdac + iVar1) * DAT_0071f424 + *(float *)((int)&DAT_010b8c38 + iVar1);
  *(float *)((int)&DAT_010b8c38 + iVar1) = fVar2;
  if (1.0 < fVar2) {
    fVar2 = fVar2 - 1.0;
    *(float *)((int)&DAT_010b8c38 + iVar1) = fVar2;
  }
  if (fVar2 < -1.0) {
    *(float *)((int)&DAT_010b8c38 + iVar1) = fVar2 + 1.0;
  }
  fVar2 = *(float *)(&DAT_007dcdb0 + iVar1) * fVar3 + *(float *)((int)&DAT_010b8c3c + iVar1);
  *(float *)((int)&DAT_010b8c3c + iVar1) = fVar2;
  if (1.0 < fVar2) {
    fVar2 = fVar2 - 1.0;
    *(float *)((int)&DAT_010b8c3c + iVar1) = fVar2;
  }
  if (fVar2 < -1.0) {
    *(float *)((int)&DAT_010b8c3c + iVar1) = fVar2 + 1.0;
  }
  return;
}


// 0x02da4d8 (0xb8 bytes)
void M1919_002da4d8(longlong param_1)

{
  int iVar1;
  float fVar2;
  float fVar3;
  
  fVar3 = DAT_0071f424;
  iVar1 = (int)(param_1 << 3);
  fVar2 = *(float *)(&DAT_007dcdc4 + iVar1) * DAT_0071f424 + *(float *)((int)&DAT_010b8c50 + iVar1);
  *(float *)((int)&DAT_010b8c50 + iVar1) = fVar2;
  if (1.0 < fVar2) {
    fVar2 = fVar2 - 1.0;
    *(float *)((int)&DAT_010b8c50 + iVar1) = fVar2;
  }
  if (fVar2 < -1.0) {
    *(float *)((int)&DAT_010b8c50 + iVar1) = fVar2 + 1.0;
  }
  fVar2 = *(float *)(&DAT_007dcdc8 + iVar1) * fVar3 + *(float *)((int)&DAT_010b8c54 + iVar1);
  *(float *)((int)&DAT_010b8c54 + iVar1) = fVar2;
  if (1.0 < fVar2) {
    fVar2 = fVar2 - 1.0;
    *(float *)((int)&DAT_010b8c54 + iVar1) = fVar2;
  }
  if (fVar2 < -1.0) {
    *(float *)((int)&DAT_010b8c54 + iVar1) = fVar2 + 1.0;
  }
  return;
}


// 0x02da598 (0xb8 bytes)
void M1919_002da598(longlong param_1)

{
  int iVar1;
  float fVar2;
  float fVar3;
  
  fVar3 = DAT_0071f424;
  iVar1 = (int)(param_1 << 3);
  fVar2 = *(float *)(&DAT_007dcddc + iVar1) * DAT_0071f424 + *(float *)((int)&DAT_010b8c60 + iVar1);
  *(float *)((int)&DAT_010b8c60 + iVar1) = fVar2;
  if (1.0 < fVar2) {
    fVar2 = fVar2 - 1.0;
    *(float *)((int)&DAT_010b8c60 + iVar1) = fVar2;
  }
  if (fVar2 < -1.0) {
    *(float *)((int)&DAT_010b8c60 + iVar1) = fVar2 + 1.0;
  }
  fVar2 = *(float *)(&DAT_007dcde0 + iVar1) * fVar3 + *(float *)((int)&DAT_010b8c64 + iVar1);
  *(float *)((int)&DAT_010b8c64 + iVar1) = fVar2;
  if (1.0 < fVar2) {
    fVar2 = fVar2 - 1.0;
    *(float *)((int)&DAT_010b8c64 + iVar1) = fVar2;
  }
  if (fVar2 < -1.0) {
    *(float *)((int)&DAT_010b8c64 + iVar1) = fVar2 + 1.0;
  }
  return;
}


// 0x02da688 (0x350 bytes)
// strings: 002da658: '?fff_q' (raw)

/* Moby 1919 */

void UpdateMoby_1919(MobyInstance *moby)

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
    if (DAT_010b8c34 == 0) {
      uVar6 = 0x3fe6666660000000;
      uVar4 = 0x3ff0000000000000;
      uVar3 = 0x3fe0000000000000;
      M1919_002da078
                (0x3fe6666660000000,0x3ff0000000000000,0x3fecccccc0000000,0x3fe0000000000000,
                 &PTR_DAT_007f183c,0x11,&DAT_007e3f90);
      M1919_002da078(uVar3,uVar3,uVar3,uVar4,&PTR_DAT_007f3d34,5,&DAT_007f1880);
      M1919_002da078
                (0x3fd0000000000000,0x3fd0000000000000,0x3fd0000000000000,uVar6,&PTR_DAT_007e3f6c,9,
                 &DAT_007dcde8);
      DAT_010b8c34 = 1;
    }
    auVar9 = ZEXT416(0);
    auVar8 = auVar9 | auVar9 << 0x20 | auVar9 << 0x40 | auVar9 << 0x60;
    moby->state = '\x01';
    DAT_010b8c38 = 0;
    DAT_010b8c3c = 0;
    DAT_010b8c40 = 0;
    DAT_010b8c44 = 0;
    DAT_010b8c48 = 0;
    DAT_010b8c4c = 0;
    DAT_010b8c68 = 0;
    DAT_010b8c6c = 0;
    DAT_010b8c50 = 0;
    DAT_010b8c54 = storeVectorElementWordIndexed(auVar8,0xffffffffffff8c54,0x10c0000);
    DAT_010b8c58 = 0;
    auVar9 = loadVectorLeftIndexed(0x14,0x2da650);
    auVar9 = auVar9 >> 0x60 & (GPiece<16>)0xffffffff;
    DAT_010b8c5c = storeVectorElementWordIndexed
                             (auVar9 | auVar9 << 0x20 | auVar9 << 0x40 | auVar9 << 0x60,0,0x10b8c5c)
    ;
    DAT_010b8c60 = 0;
    DAT_010b8c64 = storeVectorElementWordIndexed(auVar8,0xffffffffffff8c64,0x10c0000);
  }
  else if ((((moby->state < 2) &&
            (0x4329ffff <
             (int)(((uint)((int)GameCamera.posZ >> 0x1f) >> 1 ^ (uint)GameCamera.posZ) -
                  ((int)GameCamera.posZ >> 0x1f)))) &&
           (iVar1 = FastCheckBsphereInView(0x408f400000000000,local_40), -1 < iVar1)) &&
          (0x43340000 <
           (int)(((uint)((int)GameCamera.posZ >> 0x1f) >> 1 ^ (uint)GameCamera.posZ) -
                ((int)GameCamera.posZ >> 0x1f)))) {
    dVar7 = 100.0;
    dVar5 = (double)SQRT((GameCamera.posZ - DAT_007dcd98) * (GameCamera.posZ - DAT_007dcd98) +
                         (GameCamera.posX - DAT_007dcd90) * (GameCamera.posX - DAT_007dcd90) +
                         (GameCamera.posY - DAT_007dcd94) * (GameCamera.posY - DAT_007dcd94));
    uVar2 = DAT_010b8c30;
    if (dVar5 <= 100.0) {
      M1919_002da418(0);
      M1919_002da2c0
                (0x3fe0a3d700000000,0x3fe3d70a40000000,0x3faeb851e0000000,&DAT_010b8c40);
      M1919_002da418(2);
      uVar2 = 0xff;
      if ((80.0 <= dVar5) && (uVar2 = 0, dVar5 < dVar7)) {
        uVar2 = FastDoubleToInt((double)(-((float)(dVar5 - 80.0) * 0.05 - 1.0) * 255.0));
      }
    }
    DAT_010b8c30 = uVar2;
    M1919_002da598(0);
    M1919_002da4d8(0);
    M1919_002da4d8(1);
    RegisterFuncForMoby(&PTR_M1919_002d9948_0070b4a8,moby);
  }
  return;
}


// 0x02da9d8 (0x14 bytes)
void M1919_002da9d8(void)

{
  DAT_007f3d94 = 0x10000;
  return;
}


