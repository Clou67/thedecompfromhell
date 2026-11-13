// game/update/moby617.cpp -- reconstructed from NPEA00385 EBOOT
// STATUS: NOT STARTED (raw Ghidra output)
// 10 functions, 0x3deb50-0x3e21b4
#include "game/update/moby617.h"
#include "game/camera.h"
#include "game/collproc.h"
#include "game/draw.h"
#include "game/hud.h"
#include "game/mobyfunc.h"
#include "game/mobyutil.h"
#include "game/update.h"
#include "game/update/moby615.h"
#include "game/vuchain.h"
#include "idol/fastfunc.h"
#include "idol/mUnk.h"

// 0x03deb50 (0x400 bytes)
void M617_003deb50
               (double param_1,undefined8 param_2,double param_3,double param_4)

{
  undefined8 in_r7;
  int iVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  double dVar16;
  double dVar17;
  GPiece<32> local_100;
  GPiece<16> local_e0;
  GPiece<40> local_d0;
  
  dVar2 = (double)FastDiffRots(param_2,param_1);
  dVar2 = (double)(float)(dVar2 * 0.20000000298023224);
  iVar1 = 0;
  dVar9 = 1.570796251296997;
  dVar10 = 3.141592502593994;
  dVar16 = (double)(float)(param_3 * 16.0);
  dVar11 = -3.141592502593994;
  dVar17 = (double)(float)(param_4 * 16.0);
  dVar12 = -0.16666656732559204;
  dVar13 = 0.008333025500178337;
  dVar14 = -0.0001980741071747616;
  dVar15 = 2.601886990305502e-06;
  do {
    dVar3 = (double)FastWrapRot((float)param_1,(float)((double)(longlong)iVar1 * dVar2));
    iVar1 = iVar1 + 1;
    dVar4 = (double)FastWrapRot((float)param_1,(float)((double)(longlong)iVar1 * dVar2));
    dVar6 = (double)(float)(dVar3 + dVar9);
    dVar5 = (double)(float)(dVar10 - dVar6);
    if (dVar6 - (double)(float)(dVar10 - dVar6) < 0.0) {
      dVar5 = dVar6;
    }
    dVar8 = (double)(float)(dVar11 - dVar6);
    if ((double)(float)(dVar11 - dVar6) - dVar5 < 0.0) {
      dVar8 = dVar5;
    }
    dVar5 = (double)(float)(dVar8 * dVar8);
    dVar7 = (double)(float)(dVar5 * (double)(float)(dVar5 * dVar8));
    dVar6 = (double)(float)(dVar5 * dVar7);
    dVar6 = (double)(float)((double)(float)(dVar5 * dVar6) * dVar15 +
                           (double)(float)(dVar6 * dVar14 +
                                          (double)(float)(dVar7 * dVar13 +
                                                         (double)(float)((double)(float)(dVar5 * 
                                                  dVar8) * dVar12 + dVar8))));
    FastDoubleToInt((double)(float)(dVar6 * dVar16));
    dVar5 = (double)(float)(dVar10 - dVar3);
    if (dVar3 - (double)(float)(dVar10 - dVar3) < 0.0) {
      dVar5 = dVar3;
    }
    dVar8 = (double)(float)(dVar11 - dVar3);
    if ((double)(float)(dVar11 - dVar3) - dVar5 < 0.0) {
      dVar8 = dVar5;
    }
    dVar5 = (double)(float)(dVar8 * dVar8);
    dVar7 = (double)(float)(dVar5 * (double)(float)(dVar5 * dVar8));
    dVar3 = (double)(float)(dVar5 * dVar7);
    dVar5 = (double)(float)((double)(float)(dVar5 * dVar3) * dVar15 +
                           (double)(float)(dVar3 * dVar14 +
                                          (double)(float)(dVar7 * dVar13 +
                                                         (double)(float)((double)(float)(dVar5 * 
                                                  dVar8) * dVar12 + dVar8))));
    FastDoubleToInt((double)(float)(dVar5 * dVar16));
    FastDoubleToInt((double)(float)(dVar6 * dVar17));
    FastDoubleToInt((double)(float)(dVar5 * dVar17));
    dVar3 = (double)(float)(dVar4 + dVar9);
    dVar5 = (double)(float)(dVar10 - dVar3);
    if (dVar3 - (double)(float)(dVar10 - dVar3) < 0.0) {
      dVar5 = dVar3;
    }
    dVar6 = (double)(float)(dVar11 - dVar3);
    if ((double)(float)(dVar11 - dVar3) - dVar5 < 0.0) {
      dVar6 = dVar5;
    }
    dVar5 = (double)(float)(dVar6 * dVar6);
    dVar8 = (double)(float)(dVar5 * (double)(float)(dVar5 * dVar6));
    dVar3 = (double)(float)(dVar5 * dVar8);
    dVar3 = (double)(float)((double)(float)(dVar5 * dVar3) * dVar15 +
                           (double)(float)(dVar3 * dVar14 +
                                          (double)(float)(dVar8 * dVar13 +
                                                         (double)(float)((double)(float)(dVar5 * 
                                                  dVar6) * dVar12 + dVar6))));
    FastDoubleToInt((double)(float)(dVar3 * dVar16));
    dVar5 = (double)(float)(dVar10 - dVar4);
    if (dVar4 - (double)(float)(dVar10 - dVar4) < 0.0) {
      dVar5 = dVar4;
    }
    dVar6 = (double)(float)(dVar11 - dVar4);
    if ((double)(float)(dVar11 - dVar4) - dVar5 < 0.0) {
      dVar6 = dVar5;
    }
    dVar5 = (double)(float)(dVar6 * dVar6);
    dVar8 = (double)(float)(dVar5 * (double)(float)(dVar5 * dVar6));
    dVar4 = (double)(float)(dVar5 * dVar8);
    dVar5 = (double)(float)((double)(float)(dVar5 * dVar4) * dVar15 +
                           (double)(float)(dVar4 * dVar14 +
                                          (double)(float)(dVar8 * dVar13 +
                                                         (double)(float)((double)(float)(dVar5 * 
                                                  dVar6) * dVar12 + dVar6))));
    FastDoubleToInt((double)(float)(dVar5 * dVar16));
    FastDoubleToInt((double)(float)(dVar3 * dVar17));
    FastDoubleToInt((double)(float)(dVar5 * dVar17));
    DrawScreenQuad(local_100,local_d0,local_e0,in_r7,1);
  } while (iVar1 < 5);
  return;
}


// 0x03def78 (0x3f0 bytes)
void M617_003def78(double param_1,double param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  undefined8 uVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  GPiece<16> local_100;
  float local_f0;
  float local_ec;
  float local_e0;
  float local_dc;
  float local_d0;
  float local_cc;
  float local_c0;
  float local_bc;
  GPiece<32> local_b0;
  GPiece<16> local_90;
  GPiece<24> local_80;
  
  dVar14 = 3.141592502593994;
  fVar1 = (float)(param_1 + 1.570796251296997);
  dVar13 = -3.141592502593994;
  dVar12 = -0.16666656732559204;
  dVar11 = 0.008333025500178337;
  dVar10 = -0.0001980741071747616;
  dVar9 = 2.601886990305502e-06;
  dVar8 = 16.0;
  fVar2 = 3.1415925 - fVar1;
  if (fVar1 - (3.1415925 - fVar1) < 0.0) {
    fVar2 = fVar1;
  }
  fVar3 = -3.1415925 - fVar1;
  if ((-3.1415925 - fVar1) - fVar2 < 0.0) {
    fVar3 = fVar2;
  }
  fVar4 = fVar3 * fVar3;
  fVar1 = fVar4 * fVar4 * fVar3;
  fVar2 = fVar4 * fVar1;
  FastDoubleToInt
            ((double)((float)((double)(fVar4 * fVar2 * 2.601887e-06 +
                                      fVar2 * -0.0001980741 +
                                      fVar1 * 0.0083330255 + fVar4 * fVar3 * -0.16666657 + fVar3) *
                             param_2) * 16.0));
  dVar6 = (double)(float)(dVar14 - param_1);
  if (param_1 - (double)(float)(dVar14 - param_1) < 0.0) {
    dVar6 = param_1;
  }
  dVar14 = (double)(float)(dVar13 - param_1);
  if ((double)(float)(dVar13 - param_1) - dVar6 < 0.0) {
    dVar14 = dVar6;
  }
  dVar13 = (double)(float)(dVar14 * dVar14);
  dVar7 = (double)(float)(dVar13 * (double)(float)(dVar13 * dVar14));
  dVar6 = (double)(float)(dVar13 * dVar7);
  FastDoubleToInt
            ((double)(float)((double)(float)((double)(float)((double)(float)(dVar13 * dVar6) * dVar9
                                                            + (double)(float)(dVar6 * dVar10 +
                                                                             (double)(float)(dVar7 *
                                                                                             dVar11 
                                                  + (double)(float)((double)(float)(dVar13 * dVar14)
                                                                    * dVar12 + dVar14)))) * param_2)
                            * dVar8));
  FastEulerToMtx1(&local_f0,local_100);
  FastVecMtx4Mul(&local_f0,&local_f0,&DAT_010caff0);
  FastDoubleToInt((double)(float)((double)local_f0 * dVar8));
  FastDoubleToInt((double)(float)((double)local_ec * dVar8));
  FastDoubleToInt((double)(float)((double)local_e0 * dVar8));
  FastDoubleToInt((double)(float)((double)local_dc * dVar8));
  FastDoubleToInt((double)(float)((double)local_d0 * dVar8));
  FastDoubleToInt((double)(float)((double)local_cc * dVar8));
  FastDoubleToInt((double)(float)((double)local_c0 * dVar8));
  FastDoubleToInt((double)(float)((double)local_bc * dVar8));
  uVar5 = GetEffectTex(DAT_00853b70 + 0x29);
  DrawScreenQuad(local_b0,local_80,local_90,uVar5,1);
  DrawScreenQuad(local_b0,local_80,local_90,uVar5,1);
  return;
}


// 0x03df398 (0x544 bytes)
void M617_003df398(double param_1,double param_2,double param_3)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  undefined8 uVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  GPiece<32> local_f0;
  GPiece<16> local_d0;
  GPiece<40> local_c0;
  
  FastDoubleToInt((double)((float)(longlong)worldUpdateTime * DAT_00853bb4));
  fVar1 = (float)(param_1 + 1.570796251296997);
  dVar7 = (double)(float)(3.141592502593994 - param_1);
  if (param_1 - (double)(float)(3.141592502593994 - param_1) < 0.0) {
    dVar7 = param_1;
  }
  fVar2 = 3.1415925 - fVar1;
  if (fVar1 - (3.1415925 - fVar1) < 0.0) {
    fVar2 = fVar1;
  }
  dVar6 = (double)(float)(-3.141592502593994 - param_1);
  if ((double)(float)(-3.141592502593994 - param_1) - dVar7 < 0.0) {
    dVar6 = dVar7;
  }
  dVar7 = (double)(float)(dVar6 * dVar6);
  fVar3 = -3.1415925 - fVar1;
  if ((-3.1415925 - fVar1) - fVar2 < 0.0) {
    fVar3 = fVar2;
  }
  fVar4 = fVar3 * fVar3;
  dVar8 = (double)(float)(dVar7 * (double)(float)(dVar7 * dVar6));
  dVar9 = (double)(float)(dVar7 * dVar8);
  fVar2 = fVar4 * fVar4 * fVar3;
  fVar1 = fVar4 * fVar2;
  dVar15 = (double)((float)(dVar7 * dVar9) * 2.601887e-06 +
                   (float)(dVar9 * -0.0001980741071747616 +
                          (double)(float)(dVar8 * 0.008333025500178337 +
                                         (double)(float)((double)(float)(dVar7 * dVar6) *
                                                         -0.16666656732559204 + dVar6))));
  dVar14 = (double)(fVar4 * fVar1 * 2.601887e-06 +
                   fVar1 * -0.0001980741 +
                   fVar2 * 0.0083330255 + fVar4 * fVar3 * -0.16666657 + fVar3);
  dVar7 = (double)(float)(dVar15 * 2.0);
  dVar6 = (double)(float)(dVar14 * 2.0);
  dVar13 = (double)(float)(dVar14 * param_2 + dVar7);
  dVar12 = (double)(float)(dVar14 * param_3 - dVar7);
  dVar11 = (double)(float)(dVar14 * param_3 + dVar7);
  dVar10 = (double)(float)(dVar15 * param_2 + dVar6);
  dVar9 = (double)(float)(dVar15 * param_2 - dVar6);
  dVar8 = (double)(float)(dVar15 * param_3 + dVar6);
  dVar6 = (double)(float)(dVar15 * param_3 - dVar6);
  FastDoubleToInt((double)(float)(dVar14 * param_2 - dVar7));
  FastDoubleToInt(dVar10);
  FastDoubleToInt(dVar13);
  FastDoubleToInt(dVar9);
  FastDoubleToInt(dVar12);
  FastDoubleToInt(dVar8);
  FastDoubleToInt(dVar11);
  FastDoubleToInt(dVar6);
  uVar5 = GetEffectTex(DAT_00853bb8);
  DrawScreenQuad(local_f0,local_c0,local_d0,uVar5,0);
  dVar7 = (double)(float)(dVar14 * 5.0);
  dVar6 = (double)(float)(dVar15 * 5.0);
  dVar10 = (double)(float)(dVar15 * param_2 + dVar7);
  dVar9 = (double)(float)(dVar15 * param_2 - dVar7);
  dVar8 = (double)(float)(dVar15 * param_3 + dVar7);
  dVar12 = (double)(float)(dVar15 * param_3 - dVar7);
  dVar7 = (double)(float)(dVar14 * param_3 - dVar6);
  dVar11 = (double)(float)(dVar14 * param_2 + dVar6);
  dVar13 = (double)(float)(dVar14 * param_3 + dVar6);
  FastDoubleToInt((double)(float)(dVar14 * param_2 - dVar6));
  FastDoubleToInt(dVar10);
  FastDoubleToInt(dVar11);
  FastDoubleToInt(dVar9);
  FastDoubleToInt(dVar7);
  FastDoubleToInt(dVar8);
  FastDoubleToInt(dVar13);
  FastDoubleToInt(dVar12);
  DrawScreenQuad(local_f0,local_c0,local_d0,uVar5,0);
  return;
}


// 0x03df8dc (0x114 bytes)
void M617_003df8dc(void)

{
  undefined8 uVar1;
  int iVar2;
  GPiece<32> local_70;
  GPiece<16> local_50;
  GPiece<24> local_40;
  
  iVar2 = 0;
  do {
    uVar1 = GetEffectTex(DAT_00853b70 + 0x28);
    DrawScreenQuad(local_70,local_40,local_50,uVar1,1);
    iVar2 = iVar2 + 1;
  } while (iVar2 < 4);
  return;
}


// 0x03dfa30 (0x1854 bytes)
void M617_003dfa30(int param_1)

{
  uint uVar1;
  int *piVar2;
  int *piVar3;
  bool bVar4;
  RenderingStep *pRVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  int iVar8;
  int iVar9;
  undefined4 uVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  int iVar15;
  int iVar16;
  int iVar17;
  int iVar18;
  int iVar19;
  int iVar20;
  int iVar21;
  int iVar22;
  int iVar23;
  double dVar24;
  double dVar25;
  double dVar26;
  double dVar27;
  double dVar28;
  double dVar29;
  double dVar30;
  double dVar31;
  double dVar32;
  double dVar33;
  double dVar34;
  double dVar35;
  double dVar36;
  double dVar37;
  double dVar38;
  double dVar39;
  GPiece<32> local_140;
  GPiece<16> local_120;
  GPiece<40> local_110;
  
  pRVar5 = HUD_Pass;
  *HUD_Pass->command = NV4097_SET_ALPHA_TEST_ENABLE_x1;
  pRVar5->command[1] = 1;
  pRVar5->command = pRVar5->command + 2;
  idol_draw::DrawDepth(HUD_Pass,0x44);
  iVar23 = *(int *)(param_1 + 0x78);
  uVar6 = idol_draw::Blend(1,5,0x80,3,0,0,1,2);
  SetGSReg(0x16,uVar6);
  uVar6 = GetEffectTex(0x10);
  iVar9 = 0;
  iVar18 = 0;
  do {
    uVar7 = GetEffectTex(DAT_00853b70 + 0x28);
    DrawScreenQuad(local_140,local_110,local_120,uVar7,1);
    iVar9 = iVar9 + 1;
  } while (iVar9 < 4);
  iVar8 = 0;
  iVar9 = iVar23;
  do {
    if (*(int *)(iVar9 + 0xb0) != 0) {
      *(undefined4 *)(iVar9 + 0xb0) = 1;
    }
    iVar8 = iVar8 + 1;
    iVar9 = iVar9 + 4;
  } while (iVar8 < 0xc);
  iVar22 = 0;
  iVar21 = 0;
  dVar33 = 0.3141592741012573;
  uVar1 = (int)*(uint *)(iVar23 + 0xe4) >> 0x1f;
  iVar8 = 0;
  iVar9 = (uVar1 >> 1 ^ *(uint *)(iVar23 + 0xe4)) - uVar1;
  if (iVar9 < 0x3ea0d97d) {
    if (iVar9 < -0x3ea0d97c) {
      if (*(int *)(iVar23 + 0xe0) == 1) {
        iVar22 = -1;
      }
      else if (*(int *)(iVar23 + 0xe0) == 2) {
        iVar21 = -1;
      }
      else {
        iVar8 = -1;
      }
    }
  }
  else if (*(int *)(iVar23 + 0xe0) == 1) {
    iVar22 = 1;
  }
  else if (*(int *)(iVar23 + 0xe0) == 2) {
    iVar21 = 1;
  }
  else {
    iVar8 = 1;
  }
  iVar20 = 0;
  dVar37 = 0.01745329238474369;
  iVar15 = iVar23 + 0x80;
  iVar19 = 0;
  iVar14 = iVar23 + 0xb0;
  iVar17 = iVar23 + 0x20;
  iVar16 = iVar23 + 0x50;
  iVar9 = iVar22;
  do {
    dVar38 = -0.3141592741012573;
    dVar24 = dVar38;
    if (*(int *)(iVar23 + 0xe0) == 1) {
      dVar24 = (double)FastWrapRot(-0.31415927,*(float *)(iVar23 + 0xe4));
    }
    dVar24 = (double)FastWrapRot((float)dVar24,(float)((double)(longlong)iVar19 * dVar37))
    ;
    iVar11 = iVar20 + *(int *)(iVar23 + 0x14);
    piVar2 = (int *)((iVar11 % 0xc) * 4 + iVar17);
    if (*piVar2 == 2) {
      iVar13 = (iVar20 + *(int *)(iVar23 + 0x18) + iVar22) - iVar21;
      if (*(int *)((iVar13 % 0xc) * 4 + iVar16) == 0) {
        iVar12 = (iVar20 + *(int *)(iVar23 + 0x1c) + iVar22) - iVar8;
        if (*(int *)((iVar12 % 0xc) * 4 + iVar15) == 0) {
          if (*(int *)(((iVar12 + 6) % 0xc) * 4 + iVar15) == 0) {
            if (*(int *)(((iVar13 + 6) % 0xc) * 4 + iVar16) == 0) {
              if (*(int *)(((iVar11 + 6) % 0xc) * 4 + iVar17) == 0) {
                bVar4 = false;
                piVar3 = (int *)(((iVar9 + 6) % 0xc) * 4 + iVar14);
                dVar35 = (double)(longlong)-DAT_00853bb0;
                if (*piVar3 != 0) {
                  *piVar2 = 3;
                  *piVar3 = 2;
                }
              }
              else {
                bVar4 = true;
                dVar35 = (double)(longlong)-DAT_00853ba4;
              }
            }
            else {
              bVar4 = true;
              dVar35 = (double)(longlong)-DAT_00853b98;
            }
          }
          else {
            bVar4 = true;
            dVar35 = (double)(longlong)-DAT_00853b8c;
          }
        }
        else {
          bVar4 = true;
          dVar35 = (double)(longlong)DAT_00853b8c;
        }
      }
      else {
        bVar4 = true;
        dVar35 = (double)(longlong)DAT_00853b98;
      }
      uVar7 = FastWrapRot((float)dVar24,(float)dVar33);
      M617_003df398(uVar7,(double)(longlong)DAT_00853ba4,dVar35);
      if (bVar4) {
        uVar7 = FastWrapRot((float)dVar24,(float)dVar33);
        M617_003df398(uVar7,dVar35,(double)(longlong)DAT_00853ba4);
      }
    }
    iVar20 = iVar20 + 1;
    iVar19 = iVar19 + 0x1e;
    iVar9 = iVar9 + 1;
  } while (iVar20 < 0xc);
  iVar20 = 0;
  iVar19 = 0;
  iVar9 = iVar21;
  do {
    dVar24 = dVar38;
    if (*(int *)(iVar23 + 0xe0) == 2) {
      dVar24 = (double)FastWrapRot((float)dVar38,*(float *)(iVar23 + 0xe4));
    }
    dVar24 = (double)FastWrapRot((float)dVar24,(float)((double)(longlong)iVar19 * dVar37))
    ;
    iVar11 = iVar20 + *(int *)(iVar23 + 0x18);
    piVar2 = (int *)((iVar11 % 0xc) * 4 + iVar16);
    if (*piVar2 == 2) {
      iVar13 = (iVar20 + *(int *)(iVar23 + 0x1c) + iVar21) - iVar8;
      if (*(int *)((iVar13 % 0xc) * 4 + iVar15) == 0) {
        if (*(int *)(((iVar13 + 6) % 0xc) * 4 + iVar15) == 0) {
          if (*(int *)(((iVar11 + 6) % 0xc) * 4 + iVar16) == 0) {
            if (*(int *)(((((iVar20 + *(int *)(iVar23 + 0x14) + iVar21) - iVar22) + 6) % 0xc) * 4 +
                        iVar17) == 0) {
              bVar4 = false;
              piVar3 = (int *)(((iVar9 + 6) % 0xc) * 4 + iVar14);
              dVar35 = (double)(longlong)-DAT_00853bb0;
              if (*piVar3 != 0) {
                *piVar2 = 3;
                *piVar3 = 2;
              }
            }
            else {
              bVar4 = true;
              dVar35 = (double)(longlong)-DAT_00853ba4;
            }
          }
          else {
            bVar4 = true;
            dVar35 = (double)(longlong)-DAT_00853b98;
          }
        }
        else {
          bVar4 = true;
          dVar35 = (double)(longlong)-DAT_00853b8c;
        }
      }
      else {
        bVar4 = true;
        dVar35 = (double)(longlong)DAT_00853b8c;
      }
      uVar7 = FastWrapRot((float)dVar24,(float)dVar33);
      M617_003df398(uVar7,(double)(longlong)DAT_00853b98,dVar35);
      if (bVar4) {
        uVar7 = FastWrapRot((float)dVar24,(float)dVar33);
        M617_003df398(uVar7,dVar35,(double)(longlong)DAT_00853b98);
      }
    }
    iVar20 = iVar20 + 1;
    iVar19 = iVar19 + 0x1e;
    iVar9 = iVar9 + 1;
  } while (iVar20 < 0xc);
  iVar20 = 0;
  iVar19 = 0;
  iVar9 = iVar8;
  do {
    dVar24 = dVar38;
    if (*(int *)(iVar23 + 0xe0) == 3) {
      dVar24 = (double)FastWrapRot((float)dVar38,*(float *)(iVar23 + 0xe4));
    }
    dVar24 = (double)FastWrapRot((float)dVar24,(float)((double)(longlong)iVar19 * dVar37))
    ;
    iVar11 = iVar20 + *(int *)(iVar23 + 0x1c);
    piVar2 = (int *)((iVar11 % 0xc) * 4 + iVar15);
    if (*piVar2 == 2) {
      if (*(int *)(((iVar11 + 6) % 0xc) * 4 + iVar15) == 0) {
        if (*(int *)(((((iVar20 + *(int *)(iVar23 + 0x18) + iVar8) - iVar21) + 6) % 0xc) * 4 +
                    iVar16) == 0) {
          if (*(int *)(((((iVar20 + *(int *)(iVar23 + 0x14) + iVar8) - iVar22) + 6) % 0xc) * 4 +
                      iVar17) == 0) {
            bVar4 = false;
            piVar3 = (int *)(((iVar9 + 6) % 0xc) * 4 + iVar14);
            dVar35 = (double)(longlong)-DAT_00853bb0;
            if (*piVar3 != 0) {
              *piVar2 = 3;
              *piVar3 = 2;
            }
          }
          else {
            bVar4 = true;
            dVar35 = (double)(longlong)-DAT_00853ba4;
          }
        }
        else {
          bVar4 = true;
          dVar35 = (double)(longlong)-DAT_00853b98;
        }
      }
      else {
        bVar4 = true;
        dVar35 = (double)(longlong)-DAT_00853b8c;
      }
      uVar7 = FastWrapRot((float)dVar24,(float)dVar33);
      M617_003df398(uVar7,(double)(longlong)DAT_00853b8c,dVar35);
      if (bVar4) {
        uVar7 = FastWrapRot((float)dVar24,(float)dVar33);
        M617_003df398(uVar7,dVar35,(double)(longlong)DAT_00853b8c);
      }
    }
    iVar20 = iVar20 + 1;
    iVar19 = iVar19 + 0x1e;
    iVar9 = iVar9 + 1;
  } while (iVar20 < 0xc);
  dVar36 = 3.141592502593994;
  dVar34 = -3.141592502593994;
  iVar8 = 0;
  dVar32 = -0.16666656732559204;
  dVar31 = 0.008333025500178337;
  dVar30 = -0.0001980741071747616;
  iVar9 = 0;
  dVar35 = 2.601886990305502e-06;
  dVar38 = 0.5;
  dVar24 = 0.5235987901687622;
  dVar33 = 0.2617993950843811;
  do {
    dVar39 = -0.2617993950843811;
    dVar26 = dVar39;
    if (*(int *)(iVar23 + 0xe0) == 1) {
      dVar25 = (double)(float)((double)(longlong)(((int)worldUpdateTime % 0x3c) * 6) * dVar37);
      dVar28 = (double)(float)(dVar36 - dVar25);
      if (dVar25 - (double)(float)(dVar36 - dVar25) < 0.0) {
        dVar28 = dVar25;
      }
      dVar27 = (double)(float)(dVar34 - dVar25);
      if ((double)(float)(dVar34 - dVar25) - dVar28 < 0.0) {
        dVar27 = dVar28;
      }
      dVar28 = (double)(float)(dVar27 * dVar27);
      dVar29 = (double)(float)(dVar28 * (double)(float)(dVar28 * dVar27));
      dVar25 = (double)(float)(dVar28 * dVar29);
      FastLerpColor
                ((double)(float)((double)(float)((double)(float)(dVar28 * dVar25) * dVar35 +
                                                (double)(float)(dVar25 * dVar30 +
                                                               (double)(float)(dVar29 * dVar31 +
                                                                              (double)(float)((
                                                  double)(float)(dVar28 * dVar27) * dVar32 + dVar27)
                                                  ))) * dVar38 + dVar38),DAT_00853c90,
                 DAT_00853c90 & 0xffffff);
      if (*(int *)(iVar23 + 0xe4) != 0) {
        dVar26 = (double)FastWrapRot((float)dVar26,*(float *)(iVar23 + 0xe4));
      }
    }
    dVar26 = (double)FastWrapRot((float)dVar26,(float)((double)(longlong)iVar9 * dVar37));
    uVar7 = FastWrapRot((float)dVar26,(float)dVar24);
    M617_003deb50(dVar26,uVar7,(double)(longlong)DAT_00853ba0,(double)(longlong)DAT_00853b9c);
    iVar21 = *(int *)(((iVar8 + *(int *)(iVar23 + 0x14)) % 0xc) * 4 + iVar17);
    if (iVar21 != 0) {
      if (iVar21 < 3) {
        if (iVar21 == 2) {
          uVar7 = FastWrapRot((float)dVar26,(float)dVar33);
          M617_003def78(uVar7,(double)(longlong)DAT_00853ba4,(longlong)DAT_00853ba4,&DAT_00850000,
                        uVar6,DAT_00853c94,1);
        }
        else {
          uVar7 = FastWrapRot((float)dVar26,(float)dVar33);
          M617_003def78(uVar7,(double)(longlong)DAT_00853ba4,(longlong)DAT_00853ba4,&DAT_00850000,
                        uVar6,DAT_00853c94,2);
        }
      }
      else {
        uVar7 = FastWrapRot((float)dVar26,(float)dVar33);
        M617_003def78(uVar7,(double)(longlong)DAT_00853ba4,(longlong)DAT_00853ba4,&DAT_00850000,
                      uVar6,DAT_00853c94,0);
        *(undefined4 *)(((iVar8 + *(int *)(iVar23 + 0x14)) % 0xc) * 4 + iVar17) = 2;
      }
    }
    iVar8 = iVar8 + 1;
    iVar9 = iVar9 + 0x1e;
  } while (iVar8 < 0xc);
  iVar8 = 0;
  iVar9 = 0;
  do {
    dVar26 = dVar39;
    if (*(int *)(iVar23 + 0xe0) == 2) {
      dVar25 = (double)(float)((double)(longlong)(((int)worldUpdateTime % 0x3c) * 6) * dVar37);
      dVar28 = (double)(float)(dVar36 - dVar25);
      if (dVar25 - (double)(float)(dVar36 - dVar25) < 0.0) {
        dVar28 = dVar25;
      }
      dVar27 = (double)(float)(dVar34 - dVar25);
      if ((double)(float)(dVar34 - dVar25) - dVar28 < 0.0) {
        dVar27 = dVar28;
      }
      dVar28 = (double)(float)(dVar27 * dVar27);
      dVar29 = (double)(float)(dVar28 * (double)(float)(dVar28 * dVar27));
      dVar25 = (double)(float)(dVar28 * dVar29);
      FastLerpColor
                ((double)(float)((double)(float)((double)(float)(dVar28 * dVar25) * dVar35 +
                                                (double)(float)(dVar25 * dVar30 +
                                                               (double)(float)(dVar29 * dVar31 +
                                                                              (double)(float)((
                                                  double)(float)(dVar28 * dVar27) * dVar32 + dVar27)
                                                  ))) * dVar38 + dVar38),DAT_00853c90,
                 DAT_00853c90 & 0xffffff);
      if (*(int *)(iVar23 + 0xe4) != 0) {
        dVar26 = (double)FastWrapRot((float)dVar26,*(float *)(iVar23 + 0xe4));
      }
    }
    dVar26 = (double)FastWrapRot((float)dVar26,(float)((double)(longlong)iVar9 * dVar37));
    uVar7 = FastWrapRot((float)dVar26,(float)dVar24);
    M617_003deb50(dVar26,uVar7,(double)(longlong)DAT_00853b94,(double)(longlong)DAT_00853b90);
    iVar21 = *(int *)(((iVar8 + *(int *)(iVar23 + 0x18)) % 0xc) * 4 + iVar16);
    if (iVar21 != 0) {
      if (iVar21 < 3) {
        if (iVar21 == 2) {
          uVar7 = FastWrapRot((float)dVar26,(float)dVar33);
          M617_003def78(uVar7,(double)(longlong)DAT_00853b98,(longlong)DAT_00853b98,&DAT_00850000,
                        uVar6,DAT_00853c94,1);
        }
        else {
          uVar7 = FastWrapRot((float)dVar26,(float)dVar33);
          M617_003def78(uVar7,(double)(longlong)DAT_00853b98,(longlong)DAT_00853b98,&DAT_00850000,
                        uVar6,DAT_00853c94,2);
        }
      }
      else {
        uVar7 = FastWrapRot((float)dVar26,(float)dVar33);
        M617_003def78(uVar7,(double)(longlong)DAT_00853b98,(longlong)DAT_00853b98,&DAT_00850000,
                      uVar6,DAT_00853c94,0);
        *(undefined4 *)(((iVar8 + *(int *)(iVar23 + 0x18)) % 0xc) * 4 + iVar16) = 2;
      }
    }
    iVar8 = iVar8 + 1;
    iVar9 = iVar9 + 0x1e;
  } while (iVar8 < 0xc);
  iVar8 = 0;
  iVar9 = 0;
  do {
    dVar26 = dVar39;
    if (*(int *)(iVar23 + 0xe0) == 3) {
      dVar25 = (double)(float)((double)(longlong)(((int)worldUpdateTime % 0x3c) * 6) * dVar37);
      dVar28 = (double)(float)(dVar36 - dVar25);
      if (dVar25 - (double)(float)(dVar36 - dVar25) < 0.0) {
        dVar28 = dVar25;
      }
      dVar27 = (double)(float)(dVar34 - dVar25);
      if ((double)(float)(dVar34 - dVar25) - dVar28 < 0.0) {
        dVar27 = dVar28;
      }
      dVar28 = (double)(float)(dVar27 * dVar27);
      dVar29 = (double)(float)(dVar28 * (double)(float)(dVar28 * dVar27));
      dVar25 = (double)(float)(dVar28 * dVar29);
      FastLerpColor
                ((double)(float)((double)(float)((double)(float)(dVar28 * dVar25) * dVar35 +
                                                (double)(float)(dVar25 * dVar30 +
                                                               (double)(float)(dVar29 * dVar31 +
                                                                              (double)(float)((
                                                  double)(float)(dVar28 * dVar27) * dVar32 + dVar27)
                                                  ))) * dVar38 + dVar38),DAT_00853c90,
                 DAT_00853c90 & 0xffffff);
      if (*(int *)(iVar23 + 0xe4) != 0) {
        dVar26 = (double)FastWrapRot((float)dVar26,*(float *)(iVar23 + 0xe4));
      }
    }
    dVar26 = (double)FastWrapRot((float)dVar26,(float)((double)(longlong)iVar9 * dVar37));
    uVar7 = FastWrapRot((float)dVar26,(float)dVar24);
    M617_003deb50(dVar26,uVar7,(double)(longlong)DAT_00853b88,(double)(longlong)DAT_00853b84);
    iVar21 = *(int *)(((iVar8 + *(int *)(iVar23 + 0x1c)) % 0xc) * 4 + iVar15);
    if (iVar21 != 0) {
      if (iVar21 < 3) {
        if (iVar21 == 2) {
          uVar7 = FastWrapRot((float)dVar26,(float)dVar33);
          M617_003def78(uVar7,(double)(longlong)DAT_00853b8c,(longlong)DAT_00853b8c,&DAT_00850000,
                        uVar6,DAT_00853c94,1);
        }
        else {
          uVar7 = FastWrapRot((float)dVar26,(float)dVar33);
          M617_003def78(uVar7,(double)(longlong)DAT_00853b8c,(longlong)DAT_00853b8c,&DAT_00850000,
                        uVar6,DAT_00853c94,2);
        }
      }
      else {
        uVar7 = FastWrapRot((float)dVar26,(float)dVar33);
        M617_003def78(uVar7,(double)(longlong)DAT_00853b8c,(longlong)DAT_00853b8c,&DAT_00850000,
                      uVar6,DAT_00853c94,0);
        *(undefined4 *)(((iVar8 + *(int *)(iVar23 + 0x1c)) % 0xc) * 4 + iVar15) = 2;
      }
    }
    iVar8 = iVar8 + 1;
    iVar9 = iVar9 + 0x1e;
  } while (iVar8 < 0xc);
  dVar24 = -0.0872664600610733;
  iVar9 = 0;
  dVar33 = 0.1745329201221466;
  do {
    dVar38 = (double)FastWrapRot((float)dVar24,(float)((double)(longlong)iVar9 * dVar37));
    uVar6 = FastWrapRot((float)dVar38,(float)dVar33);
    if (*(int *)(iVar23 + 0xb0) != 0) {
      uVar10 = DAT_00853cb0;
      if ((*(int *)(iVar23 + 0xb0) != 2) && (uVar10 = DAT_00853ca8, (worldUpdateTime & 0x20) != 0))
      {
        uVar10 = DAT_00853cac;
      }
      M617_003deb50(dVar38,uVar6,(double)(longlong)DAT_00853bac,(double)(longlong)DAT_00853ba8,
                    uVar10);
    }
    iVar18 = iVar18 + 1;
    iVar9 = iVar9 + 0x1e;
    iVar23 = iVar23 + 4;
  } while (iVar18 < 0xc);
  uVar6 = idol_draw::Blend(1,5,0x60,3,0,0,1,2);
  SetGSReg(0x16,uVar6);
  return;
}


// 0x03e12b0 (0x318 bytes)
void M617_003e12b0(double param_1,double param_2,double param_3)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  undefined8 uVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  double dVar16;
  double dVar17;
  GPiece<32> local_c0;
  GPiece<16> local_a0;
  GPiece<24> local_90;
  
  dVar17 = 1.570796251296997;
  dVar16 = 3.141592502593994;
  fVar1 = (float)(param_1 + 1.570796251296997);
  dVar15 = -3.141592502593994;
  dVar11 = -0.16666656732559204;
  dVar14 = 0.008333025500178337;
  dVar13 = -0.0001980741071747616;
  dVar12 = 2.601886990305502e-06;
  fVar2 = 3.1415925 - fVar1;
  if (fVar1 - (3.1415925 - fVar1) < 0.0) {
    fVar2 = fVar1;
  }
  dVar9 = 16.0;
  fVar3 = -3.1415925 - fVar1;
  if ((-3.1415925 - fVar1) - fVar2 < 0.0) {
    fVar3 = fVar2;
  }
  fVar4 = fVar3 * fVar3;
  fVar1 = fVar4 * fVar4 * fVar3;
  fVar2 = fVar4 * fVar1;
  FastDoubleToInt
            ((double)((float)((double)(fVar4 * fVar2 * 2.601887e-06 +
                                      fVar2 * -0.0001980741 +
                                      fVar1 * 0.0083330255 + fVar4 * fVar3 * -0.16666657 + fVar3) *
                             param_3) * 16.0));
  dVar7 = (double)(float)(dVar16 - param_1);
  if (param_1 - (double)(float)(dVar16 - param_1) < 0.0) {
    dVar7 = param_1;
  }
  dVar6 = (double)(float)(dVar15 - param_1);
  if ((double)(float)(dVar15 - param_1) - dVar7 < 0.0) {
    dVar6 = dVar7;
  }
  dVar7 = (double)(float)(dVar6 * dVar6);
  dVar10 = (double)(float)(dVar7 * (double)(float)(dVar7 * dVar6));
  dVar8 = (double)(float)(dVar7 * dVar10);
  FastDoubleToInt
            ((double)(float)((double)(float)((double)(float)((double)(float)(dVar7 * dVar8) * dVar12
                                                            + (double)(float)(dVar8 * dVar13 +
                                                                             (double)(float)(dVar10 
                                                  * dVar14 +
                                                  (double)(float)((double)(float)(dVar7 * dVar6) *
                                                                  dVar11 + dVar6)))) * param_3) *
                            dVar9));
  dVar7 = (double)(float)(param_2 + dVar17);
  dVar17 = (double)(float)(dVar16 - dVar7);
  if (dVar7 - (double)(float)(dVar16 - dVar7) < 0.0) {
    dVar17 = dVar7;
  }
  dVar6 = (double)(float)(dVar15 - dVar7);
  if ((double)(float)(dVar15 - dVar7) - dVar17 < 0.0) {
    dVar6 = dVar17;
  }
  dVar17 = (double)(float)(dVar6 * dVar6);
  dVar8 = (double)(float)(dVar17 * (double)(float)(dVar17 * dVar6));
  dVar7 = (double)(float)(dVar17 * dVar8);
  FastDoubleToInt
            ((double)(float)((double)(float)((double)(float)((double)(float)(dVar17 * dVar7) *
                                                             dVar12 + (double)(float)(dVar7 * dVar13
                                                                                     + (double)(
                                                  float)(dVar8 * dVar14 +
                                                        (double)(float)((double)(float)(dVar17 * 
                                                  dVar6) * dVar11 + dVar6)))) * param_3) * dVar9));
  dVar17 = (double)(float)(dVar16 - param_2);
  if (param_2 - (double)(float)(dVar16 - param_2) < 0.0) {
    dVar17 = param_2;
  }
  dVar16 = (double)(float)(dVar15 - param_2);
  if ((double)(float)(dVar15 - param_2) - dVar17 < 0.0) {
    dVar16 = dVar17;
  }
  dVar15 = (double)(float)(dVar16 * dVar16);
  dVar7 = (double)(float)(dVar15 * (double)(float)(dVar15 * dVar16));
  dVar17 = (double)(float)(dVar15 * dVar7);
  FastDoubleToInt
            ((double)(float)((double)(float)((double)(float)((double)(float)(dVar15 * dVar17) *
                                                             dVar12 + (double)(float)(dVar17 * 
                                                  dVar13 + (double)(float)(dVar7 * dVar14 +
                                                                          (double)(float)((double)(
                                                  float)(dVar15 * dVar16) * dVar11 + dVar16)))) *
                                            param_3) * dVar9));
  uVar5 = GetEffectTex(DAT_00853b70 + 0x28);
  DrawScreenQuad(local_c0,local_90,local_a0,uVar5,1);
  return;
}


// 0x03e15f0 (0x380 bytes)
void M617_003e15f0(double param_1,double param_2,double param_3)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  undefined8 in_r6;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  double dVar16;
  double dVar17;
  GPiece<32> local_d0;
  GPiece<16> local_b0;
  GPiece<16> local_a0;
  
  dVar17 = -param_1;
  dVar16 = 1.570796251296997;
  dVar15 = 3.141592502593994;
  dVar14 = -3.141592502593994;
  dVar9 = -0.16666656732559204;
  dVar13 = 0.008333025500178337;
  fVar1 = (float)(dVar17 + 1.570796251296997);
  dVar12 = -0.0001980741071747616;
  dVar11 = 2.601886990305502e-06;
  fVar2 = 3.1415925 - fVar1;
  if (fVar1 - (3.1415925 - fVar1) < 0.0) {
    fVar2 = fVar1;
  }
  dVar7 = 16.0;
  fVar3 = -3.1415925 - fVar1;
  if ((-3.1415925 - fVar1) - fVar2 < 0.0) {
    fVar3 = fVar2;
  }
  fVar4 = fVar3 * fVar3;
  fVar1 = fVar4 * fVar4 * fVar3;
  fVar2 = fVar4 * fVar1;
  dVar10 = (double)(fVar4 * fVar2 * 2.601887e-06 +
                   fVar2 * -0.0001980741 +
                   fVar1 * 0.0083330255 + fVar4 * fVar3 * -0.16666657 + fVar3);
  FastDoubleToInt((double)((float)(dVar10 * param_2) * 16.0));
  dVar6 = (double)(float)(dVar15 - dVar17);
  if (dVar17 - (double)(float)(dVar15 - dVar17) < 0.0) {
    dVar6 = dVar17;
  }
  dVar5 = (double)(float)(dVar14 - dVar17);
  if ((double)(float)(dVar14 - dVar17) - dVar6 < 0.0) {
    dVar5 = dVar6;
  }
  dVar17 = (double)(float)(dVar5 * dVar5);
  dVar8 = (double)(float)(dVar17 * (double)(float)(dVar17 * dVar5));
  dVar6 = (double)(float)(dVar17 * dVar8);
  dVar17 = (double)(float)((double)(float)(dVar17 * dVar6) * dVar11 +
                          (double)(float)(dVar6 * dVar12 +
                                         (double)(float)(dVar8 * dVar13 +
                                                        (double)(float)((double)(float)(dVar17 * 
                                                  dVar5) * dVar9 + dVar5))));
  FastDoubleToInt((double)(float)((double)(float)(dVar17 * param_2) * dVar7));
  FastDoubleToInt((double)(float)((double)(float)(dVar10 * param_3) * dVar7));
  FastDoubleToInt((double)(float)((double)(float)(dVar17 * param_3) * dVar7));
  dVar17 = (double)(float)(param_1 + dVar16);
  dVar16 = (double)(float)(dVar15 - dVar17);
  if (dVar17 - (double)(float)(dVar15 - dVar17) < 0.0) {
    dVar16 = dVar17;
  }
  dVar6 = (double)(float)(dVar14 - dVar17);
  if ((double)(float)(dVar14 - dVar17) - dVar16 < 0.0) {
    dVar6 = dVar16;
  }
  dVar16 = (double)(float)(dVar6 * dVar6);
  dVar10 = (double)(float)(dVar16 * (double)(float)(dVar16 * dVar6));
  dVar17 = (double)(float)(dVar16 * dVar10);
  dVar17 = (double)(float)((double)(float)(dVar16 * dVar17) * dVar11 +
                          (double)(float)(dVar17 * dVar12 +
                                         (double)(float)(dVar10 * dVar13 +
                                                        (double)(float)((double)(float)(dVar16 * 
                                                  dVar6) * dVar9 + dVar6))));
  FastDoubleToInt((double)(float)((double)(float)(dVar17 * param_2) * dVar7));
  dVar16 = (double)(float)(dVar15 - param_1);
  if (param_1 - (double)(float)(dVar15 - param_1) < 0.0) {
    dVar16 = param_1;
  }
  dVar15 = (double)(float)(dVar14 - param_1);
  if ((double)(float)(dVar14 - param_1) - dVar16 < 0.0) {
    dVar15 = dVar16;
  }
  dVar14 = (double)(float)(dVar15 * dVar15);
  dVar6 = (double)(float)(dVar14 * (double)(float)(dVar14 * dVar15));
  dVar16 = (double)(float)(dVar14 * dVar6);
  dVar9 = (double)(float)((double)(float)(dVar14 * dVar16) * dVar11 +
                         (double)(float)(dVar16 * dVar12 +
                                        (double)(float)(dVar6 * dVar13 +
                                                       (double)(float)((double)(float)(dVar14 * 
                                                  dVar15) * dVar9 + dVar15))));
  FastDoubleToInt((double)(float)((double)(float)(dVar9 * param_2) * dVar7));
  FastDoubleToInt((double)(float)((double)(float)(dVar17 * param_3) * dVar7));
  FastDoubleToInt((double)(float)((double)(float)(dVar9 * param_3) * dVar7));
  DrawScreenQuad(local_d0,local_a0,local_b0,in_r6,1);
  return;
}


// 0x03e19a0 (0x670 bytes)
void M617_003e19a0(double param_1,double param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined8 uVar7;
  int iVar8;
  int iVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  double dVar16;
  double dVar17;
  double dVar18;
  double dVar19;
  double dVar20;
  double dVar21;
  double dVar22;
  double dVar23;
  GPiece<32> local_100;
  GPiece<16> local_e0;
  GPiece<32> local_d0;
  
  FastDoubleToInt((double)((float)(longlong)worldUpdateTime * DAT_00853bb4));
  uVar6 = DAT_00853ca4;
  uVar5 = DAT_00853ca0;
  dVar22 = 0.0;
  dVar21 = 1.0;
  MB_randRangeFloat(0.0,1.0);
  FastLerpColor(uVar5,uVar6);
  uVar7 = GetEffectTex(DAT_00853bb8);
  iVar8 = MB_randInt(5);
  iVar9 = MB_randInt(5);
  fVar1 = (float)(param_1 + 1.570796251296997);
  dVar11 = (double)(float)(3.141592502593994 - param_1);
  if (param_1 - (double)(float)(3.141592502593994 - param_1) < 0.0) {
    dVar11 = param_1;
  }
  fVar2 = 3.1415925 - fVar1;
  if (fVar1 - (3.1415925 - fVar1) < 0.0) {
    fVar2 = fVar1;
  }
  dVar10 = (double)(float)(-3.141592502593994 - param_1);
  if ((double)(float)(-3.141592502593994 - param_1) - dVar11 < 0.0) {
    dVar10 = dVar11;
  }
  dVar11 = (double)(float)(dVar10 * dVar10);
  fVar3 = -3.1415925 - fVar1;
  if ((-3.1415925 - fVar1) - fVar2 < 0.0) {
    fVar3 = fVar2;
  }
  fVar4 = fVar3 * fVar3;
  dVar12 = (double)(float)(dVar11 * (double)(float)(dVar11 * dVar10));
  dVar13 = (double)(float)(dVar11 * dVar12);
  fVar2 = fVar4 * fVar4 * fVar3;
  fVar1 = fVar4 * fVar2;
  dVar23 = (double)((float)(dVar11 * dVar13) * 2.601887e-06 +
                   (float)(dVar13 * -0.0001980741071747616 +
                          (double)(float)(dVar12 * 0.008333025500178337 +
                                         (double)(float)((double)(float)(dVar11 * dVar10) *
                                                         -0.16666656732559204 + dVar10))));
  dVar12 = (double)(float)(param_2 + (double)(longlong)(iVar8 + 0xf));
  dVar10 = (double)(longlong)((iVar8 - iVar9) + 10);
  dVar20 = (double)(fVar4 * fVar1 * 2.601887e-06 +
                   fVar1 * -0.0001980741 +
                   fVar2 * 0.0083330255 + fVar4 * fVar3 * -0.16666657 + fVar3);
  dVar11 = (double)(float)(dVar23 * dVar10);
  dVar19 = (double)(float)(dVar20 * param_2 - (double)(float)(dVar23 * 5.0));
  dVar10 = (double)(float)(dVar20 * dVar10);
  dVar17 = (double)(float)(dVar20 * dVar12 - dVar11);
  dVar16 = (double)(float)(dVar20 * dVar12 + dVar11);
  dVar18 = (double)(float)(dVar20 * param_2 + (double)(float)(dVar23 * 5.0));
  dVar15 = (double)(float)(dVar23 * param_2 + (double)(float)(dVar20 * 5.0));
  dVar14 = (double)(float)(dVar23 * param_2 - (double)(float)(dVar20 * 5.0));
  dVar13 = (double)(float)(dVar23 * dVar12 + dVar10);
  dVar11 = (double)(float)(dVar23 * dVar12 - dVar10);
  FastDoubleToInt(dVar19);
  FastDoubleToInt(dVar15);
  FastDoubleToInt(dVar18);
  FastDoubleToInt(dVar14);
  FastDoubleToInt(dVar17);
  FastDoubleToInt(dVar13);
  FastDoubleToInt(dVar16);
  FastDoubleToInt(dVar11);
  DrawScreenQuad(local_100,local_d0,local_e0,uVar7,0);
  uVar6 = DAT_00853ca4;
  uVar5 = DAT_00853ca0;
  MB_randRangeFloat((float)dVar22,(float)dVar21);
  FastLerpColor(uVar5,uVar6);
  iVar8 = MB_randInt(5);
  iVar9 = MB_randInt(5);
  dVar11 = (double)(float)(param_2 + (double)(longlong)(iVar8 + 5));
  dVar21 = (double)(longlong)(iVar8 + 5 + iVar9);
  dVar22 = (double)(float)(dVar20 * dVar21);
  dVar21 = (double)(float)(dVar23 * dVar21);
  dVar13 = (double)(float)(dVar23 * dVar11 + dVar22);
  dVar16 = (double)(float)(dVar23 * dVar11 - dVar22);
  dVar12 = (double)(float)(dVar20 * dVar11 - dVar21);
  dVar10 = (double)(float)(dVar20 * dVar11 + dVar21);
  FastDoubleToInt(dVar19,dVar11,dVar21,dVar22);
  FastDoubleToInt(dVar15);
  FastDoubleToInt(dVar18);
  FastDoubleToInt(dVar14);
  FastDoubleToInt(dVar12);
  FastDoubleToInt(dVar13);
  FastDoubleToInt(dVar10);
  FastDoubleToInt(dVar16);
  DrawScreenQuad(local_100,local_d0,local_e0,uVar7,0);
  return;
}


// 0x03e2010 (0x14 bytes)
void M617_003e2010(void)

{
  DAT_00853d00 = 0x10000;
  return;
}


// 0x03e2030 (0x184 bytes)
/* Moby 617 */

void UpdateMoby_617(MobyInstance *moby)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  int *piVar8;
  int iVar9;
  float *pfVar10;
  Spline *pSVar11;
  int iVar12;
  int iVar13;
  MobyInstance *pMVar14;
  longlong lVar15;
  longlong lVar16;
  double dVar17;
  double dVar18;
  double dVar19;
  
  pMVar14 = g_MobyInstance;
  piVar8 = (int *)moby->pVar;
  iVar9 = piVar8[1];
  pSVar11 = Splines[piVar8[2]];
  pfVar10 = (float *)g_MobyInstance[*piVar8].pVar;
  dVar17 = (double)FastIntToDouble(pSVar11->cnt + -1);
  dVar19 = 1.0;
  dVar18 = (double)(float)((double)(1.0 - *pfVar10) * dVar17);
  dVar17 = (double)FastFMod(dVar18,0x3ff0000000000000);
  lVar15 = FastDoubleToInt(dVar18);
  lVar16 = lVar15;
  if (dVar17 != 0.0) {
    lVar16 = lVar15 + 1;
  }
  iVar12 = (int)(lVar16 << 4);
  fVar1 = (float)(dVar19 - dVar17);
  iVar13 = (int)(lVar15 << 4);
  fVar2 = *(float *)((int)&pSVar11->points[0].y + iVar12);
  fVar3 = *(float *)((int)&pSVar11->points[0].z + iVar12);
  fVar4 = *(float *)((int)&pSVar11->points[0].y + iVar13);
  fVar5 = *(float *)((int)&pSVar11->points[0].z + iVar13);
  fVar6 = *(float *)((int)&pSVar11->points[0].x + iVar13);
  fVar7 = *(float *)((int)&pSVar11->points[0].x + iVar12);
  (moby->pos).w = *(f32 *)((int)&pSVar11->points[0].w + iVar13);
  fVar6 = fVar6 * fVar1 + (float)((double)fVar7 * dVar17);
  (moby->pos).y = fVar4 * fVar1 + (float)((double)fVar2 * dVar17);
  (moby->pos).z = fVar5 * fVar1 + (float)((double)fVar3 * dVar17);
  (moby->pos).x = fVar6;
  pMVar14[iVar9].pos.x = fVar6;
  pMVar14[iVar9].pos.y = (moby->pos).y;
  pMVar14[iVar9].pos.z = (moby->pos).z;
  pMVar14[iVar9].pos.w = (moby->pos).w;
  return;
}


