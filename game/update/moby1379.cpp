// game/update/moby1379.cpp -- reconstructed from NPEA00385 EBOOT
// STATUS: NOT STARTED (raw Ghidra output)
// 21 functions, 0x25e1a8-0x265a10
#include <math.h>
#include <stdio.h>
#include "game/update/moby1379.h"
#include "game/camera.h"
#include "game/collproc.h"
#include "game/debug.h"
#include "game/draw.h"
#include "game/freeze.h"
#include "game/help.h"
#include "game/hero.h"
#include "game/hud.h"
#include "game/mobyfunc.h"
#include "game/mobyproc.h"
#include "game/mobyutil.h"
#include "game/music.h"
#include "game/pad.h"
#include "game/partupd.h"
#include "game/respawn.h"
#include "game/sound.h"
#include "game/space.h"
#include "game/update.h"
#include "game/update/camera5.h"
#include "game/update/moby1009.h"
#include "game/update/moby1160.h"
#include "game/update/moby1242.h"
#include "game/update/moby1357.h"
#include "game/update/moby291.h"
#include "game/update/moby295.h"
#include "game/update/moby335.h"
#include "game/vendor.h"
#include "game/vuchain.h"
#include "idol/fastfunc.h"
#include "idol/mUnk.h"

// 0x025e1a8 (0x5e0 bytes)
void M1379_0025e1a8(int param_1)

{
  longlong lVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  float fVar4;
  GPiece<16> auVar5;
  ulonglong *puVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  longlong lVar9;
  ulonglong uVar10;
  int iVar11;
  longlong lVar12;
  undefined4 *puVar13;
  undefined4 *puVar14;
  longlong lVar15;
  undefined4 *puVar17;
  longlong lVar16;
  longlong lVar18;
  ulonglong unaff_r17;
  float *pfVar19;
  ulonglong unaff_r18;
  int iVar20;
  ulonglong unaff_r19;
  ulonglong unaff_r20;
  ulonglong unaff_r21;
  ulonglong unaff_r22;
  ulonglong unaff_r23;
  float *pfVar21;
  ulonglong unaff_r24;
  int *piVar22;
  ulonglong unaff_r25;
  float *pfVar23;
  ulonglong unaff_r26;
  ulonglong unaff_r27;
  int iVar24;
  ulonglong unaff_r28;
  ulonglong unaff_r29;
  int iVar25;
  ulonglong unaff_r30;
  ulonglong unaff_r31;
  int iVar26;
  ulonglong in_LR;
  longlong lVar27;
  longlong lVar28;
  double dVar29;
  double dVar30;
  double dVar31;
  double dVar32;
  ulonglong in_f21;
  double dVar33;
  ulonglong in_f22;
  double dVar34;
  ulonglong in_f23;
  double dVar35;
  ulonglong in_f24;
  double dVar36;
  ulonglong in_f25;
  double dVar37;
  ulonglong in_f26;
  double dVar38;
  ulonglong in_f27;
  double dVar39;
  ulonglong in_f28;
  double dVar40;
  ulonglong in_f29;
  double dVar41;
  ulonglong in_f30;
  double dVar42;
  ulonglong in_f31;
  double dVar43;
  GPiece<16> auVar44;
  GPiece<16> auVar45;
  GPiece<16> auVar46;
  GPiece<16> auVar47;
  GPiece<16> auVar48;
  GPiece<16> auVar49;
  GPiece<16> auVar50;
  GPiece<16> auVar51;
  
  uVar7 = ZEXT48(&stack0x00000000);
  lVar1 = uVar7 - 0x2a0;
  puVar6 = (ulonglong *)lVar1;
  *puVar6 = uVar7;
  puVar6[0x56] = in_LR;
  puVar6[0x49] = in_f21;
  puVar6[0x4a] = in_f22;
  puVar6[0x4b] = in_f23;
  puVar6[0x4c] = in_f24;
  puVar6[0x4d] = in_f25;
  puVar6[0x4e] = in_f26;
  puVar6[0x4f] = in_f27;
  puVar6[0x50] = in_f28;
  puVar6[0x51] = in_f29;
  puVar6[0x52] = in_f30;
  puVar6[0x53] = in_f31;
  puVar6[0x47] = unaff_r30;
  puVar6[0x48] = unaff_r31;
  puVar6[0x46] = unaff_r29;
  puVar6[0x45] = unaff_r28;
  puVar6[0x44] = unaff_r27;
  puVar6[0x43] = unaff_r26;
  puVar6[0x42] = unaff_r25;
  puVar6[0x41] = unaff_r24;
  puVar6[0x40] = unaff_r23;
  puVar6[0x3f] = unaff_r22;
  puVar6[0x3e] = unaff_r21;
  puVar6[0x3d] = unaff_r20;
  puVar6[0x3c] = unaff_r19;
  puVar6[0x3b] = unaff_r18;
  puVar6[0x3a] = unaff_r17;
  pfVar19 = *(float **)(param_1 + 0x78);
  FastMtxCopyNoTranslate(uVar7 - 0x230,param_1 + 0xc0);
  uVar2 = *(undefined4 *)(param_1 + 0x14);
  *(undefined4 *)(puVar6 + 0x14) = *(undefined4 *)(param_1 + 0x10);
  uVar3 = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)((int)puVar6 + 0xa4) = uVar2;
  *(undefined4 *)(puVar6 + 0x15) = uVar3;
  *(undefined4 *)((int)puVar6 + 0xac) = 0x3f800000;
  uVar8 = GetEffectTex(0x2c);
  puVar6[0x25] = uVar8;
  uVar8 = STUB_00502fd4_RET_0(0,0,1,1,1,0,0xff90);
  puVar6[0x26] = uVar8;
  uVar8 = FUN_00502f08(0,0,0,0,0,0);
  puVar6[0x24] = uVar8;
  uVar8 = GetEffectTex(0x2c);
  puVar6[0x37] = uVar8;
  uVar8 = STUB_00502fd4_RET_0(0,0,1,1,1,0,0xff90);
  puVar6[0x38] = uVar8;
  uVar8 = FUN_00502f08(0,0,0,0,0,0);
  puVar6[0x36] = uVar8;
  *(undefined4 *)((int)puVar6 + 0x18c) = 0;
  *(undefined4 *)((int)puVar6 + 0x184) = 0;
  lVar12 = uVar7 - 0x1f0;
  puVar14 = &DAT_0079c240;
  lVar15 = uVar7 - 0x160;
  puVar17 = &DAT_0079c200;
  lVar27 = 4;
  lVar9 = lVar1;
  do {
    puVar13 = (undefined4 *)lVar12;
    *puVar13 = *puVar14;
    puVar13[1] = puVar14[1];
    puVar13[2] = puVar14[2];
    puVar13[3] = puVar14[3];
    puVar13 = (undefined4 *)lVar15;
    *puVar13 = *puVar17;
    puVar13[1] = puVar17[1];
    puVar13[2] = puVar17[2];
    puVar13[3] = puVar17[3];
    iVar20 = (int)lVar9;
    lVar12 = lVar12 + 0x10;
    puVar14 = puVar14 + 4;
    lVar15 = lVar15 + 0x10;
    puVar17 = puVar17 + 4;
    *(float *)(iVar20 + 0xb0) = *(float *)(iVar20 + 0xb0) * *pfVar19;
    *(float *)(iVar20 + 0x140) = *(float *)(iVar20 + 0x140) * *pfVar19;
    *(float *)(iVar20 + 0xb8) = *(float *)(iVar20 + 0xb8) * pfVar19[1];
    *(float *)(iVar20 + 0x148) = *(float *)(iVar20 + 0x148) * pfVar19[1];
    lVar9 = lVar9 + 0x10;
    lVar27 = lVar27 + -1;
  } while (lVar27 != 0);
  if (0 < DAT_0079c110) {
    iVar24 = 0;
    uVar8 = 0;
    iVar20 = 0;
    do {
      iVar26 = (int)((uVar8 & 1) << 2);
      uVar10 = idol_draw::PackCmd(*(undefined4 *)((int)&DAT_0079c1b4 + iVar26),
                                  *(undefined4 *)((int)&DAT_0079c1bc + iVar26),
                                  *(undefined4 *)((int)&DAT_0079c1c4 + iVar26),
                                  *(undefined4 *)((int)&DAT_0079c1cc + iVar26),0x80);
      uVar2 = *(undefined4 *)((int)&DAT_0079c1b4 + iVar26);
      puVar6[0x27] = uVar10;
      uVar10 = idol_draw::PackCmd(uVar2,*(undefined4 *)((int)&DAT_0079c1bc + iVar26),
                                  *(undefined4 *)((int)&DAT_0079c1c4 + iVar26),
                                  *(undefined4 *)((int)&DAT_0079c1cc + iVar26),0x80);
      puVar6[0x39] = uVar10;
      uVar2 = *(undefined4 *)((int)&DAT_0079c114 + iVar24);
      iVar26 = 0;
      *(undefined4 *)(puVar6 + 0x31) = uVar2;
      *(undefined4 *)(puVar6 + 0x30) = uVar2;
      *(undefined4 *)((int)puVar6 + 0xfc) = uVar2;
      *(undefined4 *)(puVar6 + 0x1f) = uVar2;
      pfVar19 = (float *)&DAT_0079c1d4;
      *(undefined4 *)((int)puVar6 + 0xf4) = uVar2;
      *(undefined4 *)(puVar6 + 0x1e) = uVar2;
      dVar43 = 360.0;
      dVar42 = 180.0;
      dVar41 = 0.01745329238474369;
      dVar40 = 1.570796251296997;
      dVar39 = 3.141592502593994;
      dVar38 = -3.141592502593994;
      dVar37 = -0.16666656732559204;
      dVar36 = 0.008333025500178337;
      dVar35 = -0.0001980741071747616;
      dVar34 = 2.601886990305502e-06;
      dVar33 = 0.125;
      lVar9 = lVar1;
      do {
        iVar25 = 0;
        pfVar23 = (float *)((int)&DAT_0079c134 + iVar20);
        piVar22 = (int *)((int)&DAT_0079c174 + iVar20);
        lVar12 = lVar9;
        pfVar21 = pfVar19;
        do {
          iVar11 = FastDoubleToInt((double)(float)((double)*pfVar23 * dVar43));
          dVar29 = (double)FastIntToDouble
                                     (DAT_0159c330 - (DAT_0159c330 / iVar11) * iVar11);
          fVar4 = *pfVar21;
          dVar29 = (double)(float)((double)(float)(dVar29 / (double)*pfVar23) - dVar42);
          if (*piVar22 == 0) {
            dVar30 = (double)(float)(dVar29 * dVar41);
            dVar29 = (double)(float)(dVar39 - dVar30);
            if (dVar30 - (double)(float)(dVar39 - dVar30) < 0.0) {
              dVar29 = dVar30;
            }
            dVar31 = (double)(float)(dVar38 - dVar30);
            if ((double)(float)(dVar38 - dVar30) - dVar29 < 0.0) {
              dVar31 = dVar29;
            }
          }
          else {
            dVar30 = (double)(float)(dVar29 * dVar41 + dVar40);
            dVar29 = (double)(float)(dVar39 - dVar30);
            if (dVar30 - (double)(float)(dVar39 - dVar30) < 0.0) {
              dVar29 = dVar30;
            }
            dVar31 = (double)(float)(dVar38 - dVar30);
            if ((double)(float)(dVar38 - dVar30) - dVar29 < 0.0) {
              dVar31 = dVar29;
            }
          }
          dVar29 = (double)(float)(dVar31 * dVar31);
          iVar25 = iVar25 + 1;
          pfVar23 = pfVar23 + 1;
          piVar22 = piVar22 + 1;
          pfVar21 = pfVar21 + 1;
          dVar32 = (double)(float)(dVar29 * (double)(float)(dVar29 * dVar31));
          dVar30 = (double)(float)(dVar29 * dVar32);
          *(float *)((int)lVar12 + 0x100) =
               (float)((double)(float)((double)(float)(dVar29 * dVar30) * dVar34 +
                                      (double)(float)(dVar30 * dVar35 +
                                                     (double)(float)(dVar32 * dVar36 +
                                                                    (double)(float)((double)(float)(
                                                  dVar29 * dVar31) * dVar37 + dVar31)))) * dVar33 +
                      (double)fVar4);
          lVar12 = lVar12 + 4;
        } while (iVar25 < 2);
        iVar26 = iVar26 + 1;
        pfVar19 = pfVar19 + 2;
        lVar9 = lVar9 + 8;
      } while (iVar26 < 4);
      auVar44 = ZEXT416(0);
      auVar45 = auVar44 | auVar44 << 0x20 | auVar44 << 0x40 | auVar44 << 0x60;
      auVar44 = loadVectorLeftIndexed(0x28,0x25e174);
      lVar28 = 2;
      auVar44 = auVar44 >> 0x60 & (GPiece<16>)0xffffffff;
      auVar44 = auVar44 | auVar44 << 0x20 | auVar44 << 0x40 | auVar44 << 0x60;
      lVar27 = uVar7 - 0x110;
      lVar15 = uVar7 - 0x198;
      lVar9 = uVar7 - 0x108;
      lVar16 = uVar7 - 0x188;
      lVar12 = uVar7 - 0xf8;
      lVar18 = uVar7 - 0x100;
      do {
        auVar47 = vectorConvertFromSignedFixedPointWord(auVar45,0);
        auVar49 = loadVectorLeftIndexed(in_LR,lVar15);
        auVar51 = loadVectorLeftIndexed(in_LR,lVar16);
        lVar15 = lVar15 + 4;
        auVar50 = auVar49 >> 0x60 & (GPiece<16>)0xffffffff;
        lVar16 = lVar16 + 4;
        auVar5 = auVar51 >> 0x60 & (GPiece<16>)0xffffffff;
        auVar48.piece<0,4>() = auVar45.piece<0,4>() + 1;
        auVar48.piece<8,8>() = auVar45.piece<8,8>();
        auVar48.piece<4,4>() = auVar45.piece<4,4>() + 1;
        auVar46.piece<0,8>() = auVar48.piece<0,8>();
        auVar46.piece<12,4>() = auVar45.piece<12,4>();
        auVar46.piece<8,4>() = auVar45.piece<8,4>() + 1;
        auVar45.piece<0,12>() = auVar46.piece<0,12>();
        auVar45.piece<12,4>() = auVar46.piece<12,4>() + 1;
        uVar2 = storeVectorElementWordIndexed
                          (auVar50 | auVar50 << 0x20 | auVar50 << 0x40 | auVar50 << 0x60,0,lVar27);
        *(undefined4 *)lVar27 = uVar2;
        lVar27 = lVar27 + 4;
        auVar50 = vectorMultiplyAddFloatingPoint(auVar47,auVar44,auVar49);
        auVar48 = vectorMultiplyAddFloatingPoint(auVar47,auVar44,auVar51);
        auVar50 = auVar50 >> 0x60 & (GPiece<16>)0xffffffff;
        auVar48 = auVar48 >> 0x60 & (GPiece<16>)0xffffffff;
        uVar2 = storeVectorElementWordIndexed
                          (auVar50 | auVar50 << 0x20 | auVar50 << 0x40 | auVar50 << 0x60,0,lVar9);
        *(undefined4 *)lVar9 = uVar2;
        uVar2 = storeVectorElementWordIndexed
                          (auVar5 | auVar5 << 0x20 | auVar5 << 0x40 | auVar5 << 0x60,0,lVar18);
        *(undefined4 *)lVar18 = uVar2;
        uVar2 = storeVectorElementWordIndexed
                          (auVar48 | auVar48 << 0x20 | auVar48 << 0x40 | auVar48 << 0x60,0,lVar12);
        *(undefined4 *)lVar12 = uVar2;
        lVar9 = lVar9 + 4;
        lVar12 = lVar12 + 4;
        lVar18 = lVar18 + 4;
        lVar28 = lVar28 + -1;
      } while (lVar28 != 0);
      FastDrawQuad(uVar7 - 0x1f0,uVar7 - 0x230,0,EffectTexHeaders,9);
      FastDrawQuad(uVar7 - 0x160,uVar7 - 0x230,0,EffectTexHeaders,9);
      lVar12 = 4;
      lVar9 = lVar1;
      do {
        iVar26 = (int)lVar9;
        *(float *)(iVar26 + 0xb4) = *(float *)(iVar26 + 0xb4) + 0.1;
        *(float *)(iVar26 + 0x144) = *(float *)(iVar26 + 0x144) + 0.1;
        lVar9 = lVar9 + 0x10;
        lVar12 = lVar12 + -1;
      } while (lVar12 != 0);
      uVar8 = uVar8 + 1;
      iVar20 = iVar20 + 8;
      iVar24 = iVar24 + 4;
    } while ((int)uVar8 < DAT_0079c110);
  }
  return;
}


// 0x025e788 (0x14 bytes)
void M1379_0025e788(void)

{
  DAT_0079c2cc = 0x10000;
  return;
}


// 0x025e7a0 (0x4 bytes)
void M1379_0025e7a0(void)

{
  return;
}


// 0x025e7a4 (0x2a8 bytes)
void M1379_DrawShapeScaled
               (double param_1,double param_2,double param_3,longlong param_4,int param_5)

{
  undefined4 uVar1;
  RenderingStep *pRVar2;
  int iVar3;
  undefined8 uVar4;
  int iVar5;
  ulonglong in_r8;
  longlong lVar6;
  GPiece<16> auVar7;
  GPiece<16> auVar8;
  GPiece<16> auVar9;
  GPiece<16> auVar10;
  GPiece<16> auVar11;
  GPiece<16> auVar12;
  
  iVar3 = EffectTexHeaders;
  auVar12.piece<0,4>() = (float)param_2;
  auVar12.piece<4,4>() = (float)param_2;
  auVar12.piece<8,4>() = (float)param_2;
  auVar12.piece<12,4>() = (float)param_2;
  auVar11.piece<0,4>() = (float)param_1;
  auVar11.piece<4,4>() = (float)param_1;
  auVar11.piece<8,4>() = (float)param_1;
  auVar11.piece<12,4>() = (float)param_1;
  uVar4 = 0x70;
  auVar10.piece<0,4>() = (float)param_3;
  auVar10.piece<4,4>() = (float)param_3;
  auVar10.piece<8,4>() = (float)param_3;
  auVar10.piece<12,4>() = (float)param_3;
  iVar5 = GetEffectTex(0x16);
  idol_draw::SetTextureUnitRegs(HUD_Pass,0,iVar3 + iVar5 * 0x24);
  idol_draw::ResetPassState(HUD_Pass);
  pRVar2 = HUD_Pass;
  *HUD_Pass->command = 0x41948;
  pRVar2->command[1] =
       (RsxCmd)((in_r8 >> 8 & 0xff) << 8) |
       (RsxCmd)((in_r8 >> 0x18 & 0xff) << 0x18) | (RsxCmd)((in_r8 >> 0x10 & 0xff) << 0x10) |
       (RsxCmd)in_r8 & 0xff;
  pRVar2->command = pRVar2->command + 2;
  pRVar2 = HUD_Pass;
  *HUD_Pass->command = 0x400c1714;
  pRVar2->command[1] = 0;
  pRVar2->command[2] = 0;
  pRVar2->command[3] = 0;
  pRVar2->command[4] = NV4097_SET_BEGIN_END_x1;
  pRVar2->command[5] = 6;
  pRVar2->command = pRVar2->command + 6;
  if (0 < param_5) {
    auVar7 = ZEXT416(0xfffffff0);
    auVar7 = auVar7 | auVar7 << 0x20 | auVar7 << 0x40 | auVar7 << 0x60;
    lVar6 = param_4 + 2;
    do {
      pRVar2 = HUD_Pass;
      auVar8 = loadVectorLeftIndexed(uVar4,param_4);
      auVar9 = loadVectorLeftIndexed(uVar4,lVar6);
      auVar8 = vectorShiftRightAlgebraicWord(auVar8,auVar7);
      auVar9 = vectorShiftRightAlgebraicWord(auVar9,auVar7);
      auVar8 = vectorConvertFromSignedFixedPointWord(auVar8,0);
      auVar9 = vectorConvertFromSignedFixedPointWord(auVar9,0);
      param_5 = param_5 + -1;
      lVar6 = lVar6 + 4;
      *HUD_Pass->command = 0x41904;
      param_4 = param_4 + 4;
      pRVar2->command[1] = 0;
      auVar8 = vectorMultiplyAddFloatingPoint(auVar8,auVar10,auVar11);
      auVar9 = vectorMultiplyAddFloatingPoint(auVar9,auVar10,auVar12);
      pRVar2->command = pRVar2->command + 2;
      pRVar2 = HUD_Pass;
      auVar8 = auVar8 >> 0x60 & (GPiece<16>)0xffffffff;
      auVar9 = auVar9 >> 0x60 & (GPiece<16>)0xffffffff;
      *HUD_Pass->command = NV4097_SET_VERTEX_DATA2F_M_x2;
      uVar1 = storeVectorElementWordIndexed
                        (auVar8 | auVar8 << 0x20 | auVar8 << 0x40 | auVar8 << 0x60,4,
                         ZEXT48(pRVar2->command));
      *(undefined4 *)((uint)(pRVar2->command + 1) & 0xfffffffc) = uVar1;
      uVar1 = storeVectorElementWordIndexed
                        (auVar9 | auVar9 << 0x20 | auVar9 << 0x40 | auVar9 << 0x60,8,
                         ZEXT48(pRVar2->command));
      *(undefined4 *)((uint)(pRVar2->command + 2) & 0xfffffffc) = uVar1;
      pRVar2->command = pRVar2->command + 3;
    } while (0 < param_5);
  }
  pRVar2 = HUD_Pass;
  *HUD_Pass->command = NV4097_SET_BEGIN_END_x1;
  pRVar2->command[1] = 0;
  pRVar2->command = pRVar2->command + 2;
  return;
}


// 0x025ea4c (0x314 bytes)
void M1379_DrawShapeRotated
               (double param_1,double param_2,double param_3,double param_4,longlong param_5,
               int param_6)

{
  longlong lVar1;
  RsxCmd *pRVar2;
  undefined4 uVar3;
  ulonglong *puVar4;
  RenderingStep *pRVar5;
  int iVar6;
  undefined8 uVar7;
  ulonglong uVar8;
  int iVar9;
  ulonglong in_r8;
  ulonglong unaff_r24;
  ulonglong unaff_r25;
  ulonglong unaff_r26;
  ulonglong unaff_r27;
  ulonglong unaff_r28;
  ulonglong unaff_r29;
  ulonglong unaff_r30;
  longlong lVar10;
  ulonglong unaff_r31;
  ulonglong in_LR;
  ulonglong in_f31;
  GPiece<16> auVar11;
  GPiece<16> auVar12;
  GPiece<16> auVar13;
  GPiece<16> auVar14;
  GPiece<16> auVar15;
  GPiece<16> auVar16;
  GPiece<16> auVar17;
  GPiece<16> auVar18;
  GPiece<16> auVar19;
  GPiece<16> auVar20;
  GPiece<16> auVar21;
  GPiece<16> auVar22;
  GPiece<16> auVar23;
  
  uVar8 = ZEXT48(&stack0x00000000);
  lVar1 = uVar8 - 0x150;
  puVar4 = (ulonglong *)lVar1;
  *puVar4 = uVar8;
  puVar4[0x2c] = in_LR;
  puVar4[0x29] = in_f31;
  puVar4[0x28] = unaff_r31;
  puVar4[0x27] = unaff_r30;
  *(float *)(puVar4 + 0x18) = (float)param_2;
  *(float *)((int)puVar4 + 0xc4) = (float)param_2;
  *(float *)(puVar4 + 0x19) = (float)param_2;
  *(float *)((int)puVar4 + 0xcc) = (float)param_2;
  puVar4[0x25] = unaff_r28;
  puVar4[0x24] = unaff_r27;
  puVar4[0x23] = unaff_r26;
  puVar4[0x21] = unaff_r24;
  iVar6 = EffectTexHeaders;
  puVar4[0x22] = unaff_r25;
  auVar23 = *(undefined1 (*) [16])(puVar4 + 0x18);
  *(float *)(puVar4 + 0x18) = (float)param_1;
  *(float *)((int)puVar4 + 0xc4) = (float)param_1;
  *(float *)(puVar4 + 0x19) = (float)param_1;
  *(float *)((int)puVar4 + 0xcc) = (float)param_1;
  auVar22 = *(undefined1 (*) [16])(puVar4 + 0x18);
  uVar7 = 0xc0;
  *(float *)(puVar4 + 0x18) = (float)param_3;
  *(float *)((int)puVar4 + 0xc4) = (float)param_3;
  *(float *)(puVar4 + 0x19) = (float)param_3;
  *(float *)((int)puVar4 + 0xcc) = (float)param_3;
  puVar4[0x26] = unaff_r29;
  auVar21 = *(undefined1 (*) [16])(puVar4 + 0x18);
  iVar9 = GetEffectTex(0x16);
  idol_draw::SetTextureUnitRegs(HUD_Pass,0,iVar6 + iVar9 * 0x24);
  idol_draw::ResetPassState(HUD_Pass);
  pRVar5 = HUD_Pass;
  *HUD_Pass->command = 0x41948;
  pRVar5->command[1] =
       (RsxCmd)((in_r8 >> 8 & 0xff) << 8) |
       (RsxCmd)((in_r8 >> 0x18 & 0xff) << 0x18) | (RsxCmd)((in_r8 >> 0x10 & 0xff) << 0x10) |
       (RsxCmd)in_r8 & 0xff;
  pRVar5->command = pRVar5->command + 2;
  pRVar5 = HUD_Pass;
  *HUD_Pass->command = 0x400c1714;
  pRVar5->command[1] = 0;
  pRVar5->command[2] = 0;
  pRVar5->command[3] = 0;
  pRVar5->command[4] = NV4097_SET_BEGIN_END_x1;
  pRVar5->command[5] = 6;
  pRVar2 = pRVar5->command;
  *(undefined4 *)(puVar4 + 0xe) = 0;
  *(undefined4 *)((int)puVar4 + 0x74) = 0;
  *(undefined4 *)((int)puVar4 + 0x7c) = 0;
  pRVar5->command = pRVar2 + 6;
  *(float *)(puVar4 + 0xf) = (float)param_4;
  FastEulerToMtx1(uVar8 - 0xd0,uVar8 - 0xe0);
  if (0 < param_6) {
    auVar11 = ZEXT416(0xfffffff0);
    auVar11 = auVar11 | auVar11 << 0x20 | auVar11 << 0x40 | auVar11 << 0x60;
    auVar15 = loadVectorLeftIndexed(0x80,lVar1);
    auVar14 = loadVectorLeftIndexed(0x90,lVar1);
    auVar13 = loadVectorLeftIndexed(0x84,lVar1);
    lVar10 = param_5 + 2;
    auVar12 = loadVectorLeftIndexed(0x94,lVar1);
    do {
      pRVar5 = HUD_Pass;
      auVar18 = loadVectorLeftIndexed(uVar7,lVar10);
      auVar17 = ZEXT416(0xffffffff);
      auVar16 = auVar17 | auVar17 << 0x20 | auVar17 << 0x40 | auVar17 << 0x60;
      auVar18 = vectorShiftRightAlgebraicWord(auVar18,auVar11);
      auVar19 = loadVectorLeftIndexed(uVar7,param_5);
      auVar17 = ZEXT416(0xffffffff);
      auVar20 = auVar17 | auVar17 << 0x20 | auVar17 << 0x40 | auVar17 << 0x60;
      auVar17 = vectorShiftLeftIntegerWord(auVar16,auVar16);
      auVar16 = vectorConvertFromSignedFixedPointWord(auVar18,0);
      auVar18 = vectorShiftRightAlgebraicWord(auVar19,auVar11);
      auVar19 = vectorShiftLeftIntegerWord(auVar20,auVar20);
      auVar18 = vectorConvertFromSignedFixedPointWord(auVar18,0);
      param_6 = param_6 + -1;
      lVar10 = lVar10 + 4;
      param_5 = param_5 + 4;
      *HUD_Pass->command = 0x41904;
      auVar17 = vectorMultiplyAddFloatingPoint(auVar16,auVar14,auVar17);
      auVar16 = vectorMultiplyAddFloatingPoint(auVar16,auVar12,auVar19);
      pRVar5->command[1] = 0;
      auVar17 = vectorMultiplyAddFloatingPoint(auVar18,auVar15,auVar17);
      auVar16 = vectorMultiplyAddFloatingPoint(auVar18,auVar13,auVar16);
      pRVar5->command = pRVar5->command + 2;
      pRVar5 = HUD_Pass;
      auVar17 = vectorMultiplyAddFloatingPoint(auVar17,auVar21,auVar22);
      auVar16 = vectorMultiplyAddFloatingPoint(auVar16,auVar21,auVar23);
      *HUD_Pass->command = NV4097_SET_VERTEX_DATA2F_M_x2;
      auVar17 = auVar17 >> 0x60 & (GPiece<16>)0xffffffff;
      auVar16 = auVar16 >> 0x60 & (GPiece<16>)0xffffffff;
      uVar3 = storeVectorElementWordIndexed
                        (auVar17 | auVar17 << 0x20 | auVar17 << 0x40 | auVar17 << 0x60,4,
                         ZEXT48(pRVar5->command));
      *(undefined4 *)((uint)(pRVar5->command + 1) & 0xfffffffc) = uVar3;
      uVar3 = storeVectorElementWordIndexed
                        (auVar16 | auVar16 << 0x20 | auVar16 << 0x40 | auVar16 << 0x60,8,
                         ZEXT48(pRVar5->command));
      *(undefined4 *)((uint)(pRVar5->command + 2) & 0xfffffffc) = uVar3;
      pRVar5->command = pRVar5->command + 3;
    } while (0 < param_6);
  }
  pRVar5 = HUD_Pass;
  *HUD_Pass->command = NV4097_SET_BEGIN_END_x1;
  pRVar5->command[1] = 0;
  pRVar5->command = pRVar5->command + 2;
  return;
}


// 0x025ed68 (0x84 bytes)
void M1379_0025ed68
               (double param_1,double param_2,double param_3,double param_4,double param_5)

{
  Sprite_DrawRotated((float)param_1,(float)param_2,param_3,param_4,param_5,0.0,0.0);
  return;
}


// 0x025edf8 (0x228 bytes)
void M1379_0025edf8
               (double param_1,double param_2,double param_3,double param_4)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  
  GetEffectTex(0x2e);
  dVar2 = 0.0;
  dVar4 = (double)(float)(param_3 * 20.0);
  Sprite_DrawRotated((float)param_1,(float)param_2,dVar4,dVar4,param_4,0.0,0.0);
  dVar3 = 1.5707963705062866;
  dVar1 = (double)FastWrapRot((float)param_4,1.5707964);
  Sprite_DrawRotated((float)param_1,(float)param_2,dVar4,dVar4,dVar1,dVar2,dVar2);
  dVar1 = (double)FastWrapRot((float)dVar1,(float)dVar3);
  Sprite_DrawRotated((float)param_1,(float)param_2,dVar4,dVar4,dVar1,dVar2,dVar2);
  dVar1 = (double)FastWrapRot((float)dVar1,(float)dVar3);
  Sprite_DrawRotated((float)param_1,(float)param_2,dVar4,dVar4,dVar1,dVar2,dVar2);
  return;
}


// 0x025f028 (0xe0 bytes)
void M1379_WorldToScreen
               (undefined8 param_1,undefined4 *param_2,int *param_3,int param_4)

{
  undefined4 uVar1;
  int iVar2;
  double dVar3;
  float local_50;
  float local_4c;
  
  ScreenPosFromWorldSpace(&local_50,param_1);
  dVar3 = 0.0625;
  uVar1 = FastDoubleToInt
                    ((double)((local_50 - (float)(longlong)SCREEN_PROJECTION_MAP_X) * 0.0625));
  *param_2 = uVar1;
  iVar2 = FastDoubleToInt
                    ((double)(float)((double)(local_4c - (float)(longlong)SCREEN_PROJECTION_MAP_Y) *
                                    dVar3));
  *param_3 = iVar2 + param_4;
  return;
}


// 0x025f120 (0x284 bytes)
void M1379_0025f120
               (undefined8 param_1,int param_2,float *param_3,int param_4,undefined8 param_5,
               undefined8 param_6,ulonglong param_7)

{
  float fVar1;
  uint uVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  int iVar6;
  int iVar7;
  double dVar8;
  double dVar9;
  GPiece<16> auStack_b0;
  float local_a0;
  float local_9c;
  float local_98;
  float local_90;
  float local_8c;
  float local_88;
  float local_70;
  float local_6c;
  float local_68;
  
  dVar8 = (double)*(float *)(param_2 + 8);
  uVar2 = (int)*(uint *)(param_2 + 4) >> 0x1f;
  iVar6 = (uVar2 >> 1 ^ *(uint *)(param_2 + 4)) - uVar2;
  if ((0x3fc90fdb < iVar6) || (iVar6 < -0x3fc90fdb)) {
    dVar8 = -dVar8;
  }
  FastDiffRots(0x3ff921fb60000000,dVar8);
  FastEulerToMtx1(&local_a0,auStack_b0);
  fVar3 = *(float *)(param_4 + 0x14) - param_3[1];
  fVar4 = *(float *)(param_4 + 0x10) - *param_3;
  fVar1 = *(float *)(param_4 + 0x1c);
  dVar8 = (double)((local_6c * fVar1 + local_9c * fVar4 + local_8c * fVar3) * 0.14285715);
  fVar5 = (local_70 * fVar1 + local_a0 * fVar4 + local_90 * fVar3) * 0.14285715;
  fVar1 = (local_68 * fVar1 + local_98 * fVar4 + local_88 * fVar3) * 0.14285715;
  dVar9 = (double)SQRT(fVar1 * fVar1 + fVar5 * fVar5 + (float)(dVar8 * dVar8));
  iVar6 = FastDoubleToInt();
  iVar7 = FastDoubleToInt(-dVar8);
  if (dVar9 < 46.0) {
    if (38.0 < dVar9) {
      dVar9 = (double)(float)(46.0 - dVar9);
      dVar8 = (double)FastIntToDouble(param_7 >> 0x18 & 0xff);
      FastDoubleToInt((double)((float)(dVar8 * dVar9) * 0.125));
    }
    dVar8 = (double)FastDiffRots
                              ((double)*(float *)(param_4 + 0x48),(double)*(float *)(param_2 + 8));
    M1379_DrawShapeRotated
              ((double)(longlong)(iVar6 + 0x1b0),
               (double)(longlong)(iVar7 + g_ScreenHeight + -0x50),param_1,-dVar8,param_5,
               param_6);
  }
  return;
}


// 0x025f3c8 (0x4e0 bytes)
void M1379_0025f3c8(undefined8 param_1,int param_2)

{
  uint uVar1;
  int iVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  GPiece<16> local_110;
  GPiece<16> local_100;
  float local_f0 [4];
  float local_e0 [4];
  float local_d0 [6];
  
  iVar2 = 1;
  dVar3 = 0.019999999552965164;
  dVar4 = 0.009999999776482582;
  dVar5 = 6.0;
  dVar6 = 7.0;
  do {
    GetBonePosition(param_1,iVar2,local_100);
    MB_RandomizeVector
              ((float)((double)*(float *)(param_2 + 0xc4) * dVar3 + dVar3),local_f0);
    MB_RandomizeVector
              ((float)((double)*(float *)(param_2 + 0xc4) * dVar3 + dVar3),local_e0);
    MB_RandomizeVector
              ((float)((double)*(float *)(param_2 + 0xc4) * dVar4 + dVar3),local_d0);
    MB_randRangeFloat((float)dVar5,(float)dVar6);
    SpawnPart_74(param_1,local_f0,local_110,&DAT_0079c5f0,1);
    MB_randRangeFloat((float)dVar5,(float)dVar6);
    SpawnPart_74(param_1,local_e0,local_110,&DAT_0079c600,1);
    MB_randRangeFloat((float)dVar5,(float)dVar6);
    SpawnPart_74(param_1,local_d0,local_110,&DAT_0079c610,1);
    uVar1 = (int)*(uint *)(param_2 + 0xc4) >> 0x1f;
    if (0x3f000000 < (int)((uVar1 >> 1 ^ *(uint *)(param_2 + 0xc4)) - uVar1)) {
      MB_RandomizeVector
                ((float)((double)*(float *)(param_2 + 0xc4) * dVar3 + dVar4),local_f0);
      MB_RandomizeVector
                ((float)((double)*(float *)(param_2 + 0xc4) * dVar3 + dVar4),local_e0);
      MB_RandomizeVector
                ((float)((double)*(float *)(param_2 + 0xc4) * dVar4 + dVar4),local_d0);
      MB_randRangeFloat((float)dVar5,(float)dVar6);
      SpawnPart_74(param_1,local_f0,local_110,&DAT_0079c5f0,1);
      MB_randRangeFloat((float)dVar5,(float)dVar6);
      SpawnPart_74(param_1,local_e0,local_110,&DAT_0079c600,1);
      MB_randRangeFloat((float)dVar5,(float)dVar6);
      SpawnPart_74(param_1,local_d0,local_110,&DAT_0079c610,1);
      MB_randRangeFloat((float)dVar5,(float)dVar6);
      SpawnPart_74(param_1,local_f0,local_110,&DAT_0079c620,1);
      MB_randRangeFloat((float)dVar5,(float)dVar6);
      SpawnPart_74(param_1,local_100,local_110,&DAT_0079c630,1);
    }
    iVar2 = iVar2 + 1;
  } while (iVar2 < 3);
  return;
}


// 0x025f8c0 (0x2a0 bytes)
// strings: 0096c074: 'None'

void M1379_DrawRadarIcon
               (undefined8 param_1,float *param_2,int param_3,longlong param_4,ulonglong param_5,
               int param_6)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  double dVar8;
  double dVar9;
  GPiece<16> auStack_a0;
  float local_90;
  float local_8c;
  float local_88;
  float local_80;
  float local_7c;
  float local_78;
  float local_60;
  float local_5c;
  float local_58;
  
  FastDiffRots(0x3ff921fb60000000);
  FastEulerToMtx1(&local_90,auStack_a0);
  fVar2 = *(float *)(param_3 + 0x14) - param_2[1];
  fVar3 = *(float *)(param_3 + 0x10) - *param_2;
  fVar1 = *(float *)(param_3 + 0x1c);
  dVar8 = (double)((local_5c * fVar1 + local_8c * fVar3 + local_7c * fVar2) * 0.071428575);
  fVar4 = (local_60 * fVar1 + local_90 * fVar3 + local_80 * fVar2) * 0.071428575;
  fVar1 = (local_58 * fVar1 + local_88 * fVar3 + local_78 * fVar2) * 0.071428575;
  dVar9 = (double)SQRT(fVar1 * fVar1 + fVar4 * fVar4 + (float)(dVar8 * dVar8));
  iVar6 = FastDoubleToInt
                    ((double)((float)(longlong)
                                     (int)(((uint)(ZERO_MASK((uint)(byte)Cheats[4])
                                                  ) & 2) - 1) * fVar4));
  iVar7 = FastDoubleToInt(-dVar8);
  if (dVar9 < 46.0) {
    if (38.0 < dVar9) {
      dVar9 = (double)(float)(46.0 - dVar9);
      dVar8 = (double)FastIntToDouble(param_5 >> 0x18 & 0xff);
      FastDoubleToInt((double)((float)(dVar8 * dVar9) * 0.125));
    }
    iVar5 = (int)(param_4 << 4);
    iVar7 = iVar7 + g_ScreenHeight;
    GetEffectTex(param_6 + *(short *)(iVar5 + 0x79c640) + 0x28);
    Sprite_DrawShapeWrapper
              ((iVar6 - *(short *)(iVar5 + 0x79c64c)) + 0x1b0,
               (iVar7 - *(short *)(iVar5 + 0x79c64e)) + -0x50,*(undefined2 *)(iVar5 + 0x79c646),
               *(undefined2 *)(iVar5 + 0x79c648),*(undefined2 *)(iVar5 + 0x79c642),
               *(undefined2 *)(iVar5 + 0x79c644),*(undefined2 *)(iVar5 + 0x79c646),
               *(undefined2 *)(iVar5 + 0x79c648));
  }
  return;
}


// 0x025fbd0 (0x12cc bytes)
// inlined: FastAtan2 @0x26082c, FastAtan2 @0x260a38, FastAtan2 @0x260c18
int M1379_ScanTargets
              (ulonglong param_1,int param_2,undefined8 param_3,undefined8 param_4)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  int iVar5;
  ulonglong *puVar6;
  bool bVar7;
  undefined4 uVar8;
  ulonglong uVar9;
  int iVar12;
  int iVar13;
  int iVar14;
  short sVar15;
  longlong lVar10;
  longlong lVar11;
  float *pfVar17;
  longlong lVar16;
  ulonglong uVar18;
  longlong lVar19;
  int in_r10;
  ulonglong unaff_r14;
  ulonglong unaff_r15;
  int iVar20;
  ulonglong unaff_r16;
  ulonglong unaff_r17;
  int iVar21;
  ulonglong unaff_r18;
  ulonglong unaff_r19;
  int iVar22;
  ulonglong unaff_r20;
  ulonglong unaff_r21;
  ulonglong unaff_r22;
  ulonglong unaff_r23;
  ulonglong unaff_r24;
  ulonglong unaff_r25;
  ulonglong unaff_r26;
  ulonglong unaff_r27;
  ulonglong unaff_r28;
  int iVar23;
  ulonglong unaff_r29;
  int iVar24;
  ulonglong unaff_r30;
  ulonglong unaff_r31;
  ulonglong in_LR;
  longlong lVar25;
  double dVar26;
  ulonglong uVar27;
  double dVar28;
  ulonglong in_f21;
  ulonglong in_f22;
  ulonglong in_f23;
  undefined8 uVar29;
  ulonglong in_f24;
  undefined8 uVar30;
  ulonglong in_f25;
  double dVar31;
  ulonglong in_f26;
  undefined8 uVar32;
  ulonglong in_f27;
  double dVar33;
  ulonglong in_f28;
  undefined8 uVar34;
  double dVar35;
  ulonglong in_f29;
  double dVar36;
  double dVar37;
  ulonglong in_f30;
  double dVar38;
  ulonglong in_f31;
  double dVar39;
  float fVar40;
  
  uVar9 = ZEXT48(&stack0x00000000);
  lVar11 = uVar9 - 0x2c0;
  puVar6 = (ulonglong *)lVar11;
  *puVar6 = uVar9;
  puVar6[0x5a] = in_LR;
  puVar6[0x4d] = in_f21;
  puVar6[0x4e] = in_f22;
  puVar6[0x4f] = in_f23;
  puVar6[0x50] = in_f24;
  puVar6[0x51] = in_f25;
  puVar6[0x52] = in_f26;
  puVar6[0x53] = in_f27;
  puVar6[0x54] = in_f28;
  puVar6[0x55] = in_f29;
  puVar6[0x56] = in_f30;
  puVar6[0x57] = in_f31;
  puVar6[0x40] = unaff_r19;
  *(undefined4 *)(param_2 + 0xe8) = 0;
  puVar6[0x48] = unaff_r27;
  dVar39 = 100000.0;
  puVar6[0x3c] = unaff_r15;
  iVar5 = MobyUpdateChainStart;
  iVar20 = 0;
  puVar6[0x46] = unaff_r25;
  iVar22 = 0x7fffffff;
  puVar6[0x35] = (ulonglong)*(uint *)((int)puVar6 + 0x334);
  puVar6[0x44] = unaff_r23;
  puVar6[0x36] = param_1;
  puVar6[0x45] = unaff_r24;
  puVar6[0x3d] = unaff_r16;
  puVar6[0x4c] = unaff_r31;
  puVar6[0x4b] = unaff_r30;
  puVar6[0x4a] = unaff_r29;
  puVar6[0x49] = unaff_r28;
  puVar6[0x47] = unaff_r26;
  puVar6[0x43] = unaff_r22;
  puVar6[0x42] = unaff_r21;
  puVar6[0x41] = unaff_r20;
  puVar6[0x3f] = unaff_r18;
  puVar6[0x3e] = unaff_r17;
  puVar6[0x3b] = unaff_r14;
  if (iVar5 != 0) {
    iVar20 = 0;
    iVar21 = 0;
    dVar38 = 0.0625;
    dVar36 = 0.0007812500116415322;
    uVar34 = 0x3ff0000000000000;
    dVar33 = 0.05000000074505806;
    uVar32 = 0x3ff4ccccc0000000;
    bVar7 = false;
    dVar31 = 4.0;
    uVar30 = 0x4000000000000000;
    uVar29 = 0x4004000000000000;
    do {
      if (((((*(ushort *)(iVar5 + 0x34) & 0x1000) != 0) && (*(char *)(iVar5 + 0x31) != '\0')) &&
          (*(int *)(iVar5 + 0x24) != 0)) && (*(short *)(*(int *)(iVar5 + 0x24) + 0x46) == 5)) {
        ScreenPosFromWorldSpace(uVar9 - 0x1f0,iVar5 + 0x10);
        puVar6[0x37] = (longlong)SCREEN_PROJECTION_MAP_X;
        iVar12 = FastDoubleToInt
                           ((double)(float)((double)(*(float *)(puVar6 + 0x1a) -
                                                    (float)(longlong)puVar6[0x37]) * dVar38));
        puVar6[0x37] = (longlong)SCREEN_PROJECTION_MAP_Y;
        iVar13 = FastDoubleToInt
                           ((double)(float)((double)(*(float *)((int)puVar6 + 0xd4) -
                                                    (float)(longlong)puVar6[0x37]) * dVar38));
        fVar1 = GameCamera.orientMtx.right.y;
        fVar2 = GameCamera.orientMtx.right.x;
        *(float *)(puVar6 + 0xe) = GameCamera.orientMtx.right.x;
        fVar4 = GameCamera.orientMtx.right.z;
        *(float *)((int)puVar6 + 0x74) = fVar1;
        fVar3 = GameCamera.orientMtx.right.w;
        *(float *)(puVar6 + 0xf) = fVar4;
        *(float *)((int)puVar6 + 0x7c) = fVar3;
        fVar40 = *(float *)(iVar5 + 0xc);
        *(float *)((int)puVar6 + 0x7c) = fVar3;
        fVar40 = (float)((double)fVar40 * dVar36);
        iVar23 = iVar12 - *(int *)(param_2 + 0xe0);
        iVar24 = iVar13 - *(int *)(param_2 + 0xe4);
        fVar1 = fVar1 * fVar40;
        fVar4 = fVar4 * fVar40;
        iVar23 = iVar23 * ((iVar23 >> 0x1f & 0xfffffffeU) + 1);
        *(float *)(puVar6 + 0xe) = fVar2 * fVar40;
        *(float *)((int)puVar6 + 0x74) = fVar1;
        *(float *)(puVar6 + 0xf) = fVar4;
        *(float *)(puVar6 + 0xe) = fVar2 * fVar40 + *(float *)(iVar5 + 0x10);
        *(float *)((int)puVar6 + 0x74) = fVar1 + *(float *)(iVar5 + 0x14);
        fVar40 = *(float *)(iVar5 + 0x18);
        puVar6[0x39] = (longlong)iVar24 * (longlong)(int)((iVar24 >> 0x1f & 0xfffffffeU) + 1);
        *(float *)(puVar6 + 0xf) = fVar4 + fVar40;
        ScreenPosFromWorldSpace(uVar9 - 0x200,uVar9 - 0x250);
        puVar6[0x37] = (longlong)SCREEN_PROJECTION_MAP_X;
        iVar24 = FastDoubleToInt
                           ((double)(float)((double)(*(float *)(puVar6 + 0x18) -
                                                    (float)(longlong)puVar6[0x37]) * dVar38));
        puVar6[0x37] = (longlong)SCREEN_PROJECTION_MAP_Y;
        iVar14 = FastDoubleToInt
                           ((double)(float)((double)(*(float *)((int)puVar6 + 0xc4) -
                                                    (float)(longlong)puVar6[0x37]) * dVar38));
        dVar26 = (double)FastIntToDouble
                                   ((iVar24 - iVar12) * (iVar24 - iVar12) +
                                    (iVar14 - iVar13) * (iVar14 - iVar13));
        iVar12 = FastDoubleToInt((double)(float)SQRT(dVar26));
        if ((iVar23 < iVar12 + 0x1c) && (iVar13 = (int)puVar6[0x39], iVar13 < iVar12 + 0x1c)) {
          if (in_r10 == 0) {
            if ((iVar5 != (int)puVar6[0x35]) &&
               (iVar12 = iVar23 * iVar23 + iVar13 * iVar13, iVar12 < iVar22)) {
              iVar20 = iVar5;
              iVar22 = iVar12;
            }
          }
          else if (iVar5 == in_r10) {
            iVar20 = iVar5;
            iVar22 = 0;
          }
        }
      }
      sVar15 = *(short *)(iVar5 + 0xa6);
      if (sVar15 < 399) {
        if (sVar15 < 0x184) {
          if (sVar15 == 0x15b) {
            *(undefined4 *)(puVar6 + 0x12) = *(undefined4 *)(iVar5 + 0x10);
            *(undefined4 *)((int)puVar6 + 0x94) = *(undefined4 *)(iVar5 + 0x14);
            fVar40 = *(float *)(iVar5 + 0x18);
            *(float *)(puVar6 + 0x13) = fVar40;
            *(undefined4 *)((int)puVar6 + 0x9c) = *(undefined4 *)(iVar5 + 0x1c);
            *(float *)(puVar6 + 0x13) = (float)((double)fVar40 + dVar31);
            ScreenPosFromWorldSpace(uVar9 - 0x240,uVar9 - 0x230);
            if (*(char *)(iVar5 + 0x31) != '\0') {
              puVar6[0x37] = (longlong)SCREEN_PROJECTION_MAP_X;
              uVar8 = worldUpdateTime;
              uVar18 = puVar6[0x37];
              puVar6[0x37] = (longlong)SCREEN_PROJECTION_MAP_Y;
              dVar37 = (double)(float)((double)(*(float *)(puVar6 + 0x10) - (float)(longlong)uVar18)
                                      * dVar38);
              dVar26 = (double)(*(float *)((int)puVar6 + 0x84) - (float)(longlong)puVar6[0x37]);
              dVar35 = (double)(float)(dVar26 * dVar38);
              dVar26 = (double)FastIntToDouble(dVar26,uVar8);
              fVar40 = MB_WrapRot((float)(dVar26 * dVar33));
              M1379_DrawShapeRotated(dVar37,dVar35,uVar30,(double)fVar40,&DAT_0079c578,0x1e);
              puVar6[0x37] = (longlong)SCREEN_PROJECTION_MAP_X;
              uVar8 = worldUpdateTime;
              uVar18 = puVar6[0x37];
              puVar6[0x37] = (longlong)SCREEN_PROJECTION_MAP_Y;
              dVar37 = (double)(float)((double)(*(float *)(puVar6 + 0x10) - (float)(longlong)uVar18)
                                      * dVar38);
              dVar26 = (double)(*(float *)((int)puVar6 + 0x84) - (float)(longlong)puVar6[0x37]);
              dVar35 = (double)(float)(dVar26 * dVar38);
              dVar26 = (double)FastIntToDouble(dVar26,uVar8);
              fVar40 = MB_WrapRot((float)(dVar26 * dVar33));
              M1379_DrawShapeRotated(dVar37,dVar35,uVar29,-(double)fVar40,&DAT_0079c578,0x1e);
              bVar7 = true;
            }
            fVar40 = *(float *)(iVar5 + 0x14) - g_heroPosition.y;
            fVar1 = *(float *)(iVar5 + 0x10) - g_heroPosition.x;
            fVar4 = *(float *)(iVar5 + 0x18) - g_heroPosition.z;
            dVar26 = (double)SQRT(fVar4 * fVar4 + fVar1 * fVar1 + fVar40 * fVar40);
            if (dVar26 < dVar39) {
              dVar39 = dVar26;
              iVar21 = iVar5;
            }
            M1379_DrawRadarIcon(param_4,uVar9 - 0x230,iVar5,0,0x70808080,
                                *(undefined4 *)(param_2 + 0x104));
            *(int *)(param_2 + 0xe8) = *(int *)(param_2 + 0xe8) + 1;
          }
          else if (sVar15 == 0xe4) {
LAB_00260074:
            M1379_DrawRadarIcon(param_4,param_3,iVar5,2,0x70808080,*(undefined4 *)(param_2 + 0x104))
            ;
          }
          else if (sVar15 == 0xe0) {
LAB_0026004c:
            M1379_DrawRadarIcon(param_4,param_3,iVar5,2,0x70808080,*(undefined4 *)(param_2 + 0x104))
            ;
          }
          else {
            if (sVar15 == 0x6f) goto LAB_00260460;
            if (sVar15 == 0x53) {
              M1379_DrawRadarIcon(param_4,param_3,iVar5,1,0x70007080,
                                  *(undefined4 *)(param_2 + 0x104));
            }
            else {
              if (sVar15 != 0x52) goto LAB_00260634;
              M1379_DrawRadarIcon(param_4,param_3,iVar5,1,0x70004080,
                                  *(undefined4 *)(param_2 + 0x104));
            }
          }
        }
        else {
          if (sVar15 < 0x185) goto LAB_002600ec;
          if (0x18c < sVar15) goto LAB_00260634;
        }
      }
      else if (sVar15 < 0x4be) {
        if (sVar15 < 0x192) {
          if (sVar15 < 0x191) goto LAB_00260674;
        }
        else if (sVar15 != 0x3eb) goto LAB_00260634;
LAB_002600ec:
        ScreenPosFromWorldSpace(uVar9 - 0x240,iVar5 + 0x10);
        iVar12 = SCREEN_PROJECTION_MAP_Y;
        sVar15 = *(short *)(iVar5 + 0xa6);
        if ((sVar15 != 0x184) && (*(char *)(iVar5 + 0x31) != '\0')) {
          puVar6[0x37] = (longlong)SCREEN_PROJECTION_MAP_X;
          uVar8 = worldUpdateTime;
          uVar18 = puVar6[0x37];
          puVar6[0x37] = (longlong)iVar12;
          dVar37 = (double)(float)((double)(*(float *)(puVar6 + 0x10) - (float)(longlong)uVar18) *
                                  dVar38);
          dVar26 = (double)(*(float *)((int)puVar6 + 0x84) - (float)(longlong)puVar6[0x37]);
          dVar35 = (double)(float)(dVar26 * dVar38);
          dVar26 = (double)FastIntToDouble(dVar26,uVar8);
          fVar40 = MB_WrapRot((float)(dVar26 * dVar33));
          M1379_DrawShapeRotated(dVar37,dVar35,uVar34,(double)fVar40,&DAT_0079c578,0x1e);
          uVar18 = (ulonglong)SCREEN_PROJECTION_MAP_Y;
          puVar6[0x37] = (longlong)SCREEN_PROJECTION_MAP_X;
          uVar8 = worldUpdateTime;
          uVar27 = puVar6[0x37];
          puVar6[0x37] = uVar18;
          dVar37 = (double)(float)((double)(*(float *)(puVar6 + 0x10) - (float)(longlong)uVar27) *
                                  dVar38);
          dVar26 = (double)(*(float *)((int)puVar6 + 0x84) - (float)(longlong)puVar6[0x37]);
          dVar35 = (double)(float)(dVar26 * dVar38);
          dVar26 = (double)FastIntToDouble(dVar26,uVar8);
          fVar40 = MB_WrapRot((float)(dVar26 * dVar33));
          M1379_DrawShapeRotated(dVar37,dVar35,uVar32,-(double)fVar40,&DAT_0079c578,0x1e);
          sVar15 = *(short *)(iVar5 + 0xa6);
        }
        if (sVar15 != 0x191) {
          *(int *)(param_2 + 0xe8) = *(int *)(param_2 + 0xe8) + 1;
        }
        M1379_DrawRadarIcon(param_4,param_3,iVar5,0,0x70808080,*(undefined4 *)(param_2 + 0x104));
      }
      else {
        if (sVar15 < 0x4c4) {
          if (sVar15 < 0x4c0) {
            if (sVar15 < 0x4bf) {
LAB_00260460:
              if ((*(ushort *)(iVar5 + 0x34) & 1) == 0) {
                ScreenPosFromWorldSpace(uVar9 - 0x240,iVar5 + 0x10);
                iVar12 = SCREEN_PROJECTION_MAP_Y;
                if (*(char *)(iVar5 + 0x31) != '\0') {
                  puVar6[0x37] = (longlong)SCREEN_PROJECTION_MAP_X;
                  uVar8 = worldUpdateTime;
                  uVar18 = puVar6[0x37];
                  puVar6[0x37] = (longlong)iVar12;
                  dVar37 = (double)(float)((double)(*(float *)(puVar6 + 0x10) -
                                                   (float)(longlong)uVar18) * dVar38);
                  dVar26 = (double)(*(float *)((int)puVar6 + 0x84) - (float)(longlong)puVar6[0x37]);
                  dVar35 = (double)(float)(dVar26 * dVar38);
                  dVar26 = (double)FastIntToDouble(dVar26,uVar8);
                  fVar40 = MB_WrapRot((float)(dVar26 * dVar33));
                  M1379_DrawShapeRotated(dVar37,dVar35,uVar34,-(double)fVar40,&DAT_0079c578,0x1e);
                }
                M1379_DrawRadarIcon(param_4,param_3,iVar5,1,0x70808080,
                                    *(undefined4 *)(param_2 + 0x104));
              }
            }
            else if (((*(ushort *)(iVar5 + 0x34) & 1) == 0) && (1 < *(byte *)(iVar5 + 0x20))) {
              ScreenPosFromWorldSpace(uVar9 - 0x240,iVar5 + 0x10);
              iVar12 = SCREEN_PROJECTION_MAP_Y;
              if (*(char *)(iVar5 + 0x31) != '\0') {
                puVar6[0x37] = (longlong)SCREEN_PROJECTION_MAP_X;
                uVar8 = worldUpdateTime;
                uVar18 = puVar6[0x37];
                puVar6[0x37] = (longlong)iVar12;
                dVar37 = (double)(float)((double)(*(float *)(puVar6 + 0x10) -
                                                 (float)(longlong)uVar18) * dVar38);
                dVar26 = (double)(*(float *)((int)puVar6 + 0x84) - (float)(longlong)puVar6[0x37]);
                dVar35 = (double)(float)(dVar26 * dVar38);
                dVar26 = (double)FastIntToDouble(dVar26,uVar8);
                fVar40 = MB_WrapRot((float)(dVar26 * dVar33));
                M1379_DrawShapeRotated(dVar37,dVar35,uVar34,-(double)fVar40,&DAT_0079c578,0x1e);
              }
              M1379_DrawRadarIcon(param_4,param_3,iVar5,1,0x70808080,
                                  *(undefined4 *)(param_2 + 0x104));
            }
            goto LAB_00260674;
          }
          if (sVar15 == 0x4c2) goto LAB_0026004c;
        }
        else if (sVar15 < 0x534) {
          if (sVar15 < 0x504) {
            if (sVar15 < 0x4c5) goto LAB_00260074;
          }
          else if (sVar15 < 0x505) goto LAB_002600ec;
        }
        else if (sVar15 < 0x53b) goto LAB_00260674;
LAB_00260634:
        if ((*(int *)(iVar5 + 0x24) != 0) && (*(short *)(*(int *)(iVar5 + 0x24) + 0x46) == 5)) {
          M1379_DrawRadarIcon(param_4,param_3,iVar5,1,0x70808080,*(undefined4 *)(param_2 + 0x104));
        }
      }
LAB_00260674:
      iVar5 = *(int *)(iVar5 + 0x28);
    } while (iVar5 != 0);
    if ((!bVar7) && (iVar21 != 0)) {
      *(undefined4 *)(puVar6 + 0x16) = *(undefined4 *)(iVar21 + 0x10);
      *(undefined4 *)((int)puVar6 + 0xb4) = *(undefined4 *)(iVar21 + 0x14);
      fVar40 = *(float *)(iVar21 + 0x18);
      *(float *)(puVar6 + 0x17) = fVar40;
      *(undefined4 *)((int)puVar6 + 0xbc) = *(undefined4 *)(iVar21 + 0x1c);
      *(float *)(puVar6 + 0x17) = (float)((double)fVar40 + dVar31);
      ScreenPosFromWorldSpace(uVar9 - 0x220,uVar9 - 0x210);
      FastNormalizeRMtx4(uVar9 - 0x1e0,0x951710);
      fVar40 = *(float *)(iVar21 + 0x14) - g_heroPosition.y;
      fVar1 = *(float *)(iVar21 + 0x10) - g_heroPosition.x;
      fVar4 = *(float *)(iVar21 + 0x18) - g_heroPosition.z;
      dVar36 = 0.0;
      fVar2 = -(*(float *)(puVar6 + 0x23) * *(float *)(iVar21 + 0x1c) +
               *(float *)(puVar6 + 0x21) * fVar4 +
               *(float *)(puVar6 + 0x1d) * fVar1 + *(float *)(puVar6 + 0x1f) * fVar40);
      fVar40 = -(*(float *)((int)puVar6 + 0x114) * *(float *)(iVar21 + 0x1c) +
                *(float *)((int)puVar6 + 0x104) * fVar4 +
                *(float *)((int)puVar6 + 0xe4) * fVar1 + *(float *)((int)puVar6 + 0xf4) * fVar40);
      fVar1 = SQRT(fVar40 * fVar40 + fVar2 * fVar2);
      dVar33 = (double)(fVar2 * (160.0 / fVar1));
      dVar31 = (double)(fVar40 * (160.0 / fVar1));
      dVar39 = dVar36;
      if (0.0 - fVar1 < 0.0) {
        dVar39 = dVar33;
      }
      dVar38 = dVar36;
      if (0.0 - fVar1 < 0.0) {
        dVar38 = dVar31;
      }
      if (fVar1 - 0.0 < 0.0) {
        dVar39 = dVar33;
      }
      if (fVar1 - 0.0 < 0.0) {
        dVar38 = dVar31;
      }
      *(float *)(puVar6 + 0x27) = (float)dVar38;
      *(float *)((int)puVar6 + 0x13c) = (float)dVar39;
      *(float *)(puVar6 + 0x28) = (float)(ABS(dVar38) - ABS(dVar39));
      dVar33 = 0.7853981852531433;
      uVar18 = (ulonglong)(*(uint *)(puVar6 + 0x27) >> 0x1c) & 8 |
               (ulonglong)(*(uint *)(puVar6 + 0x28) >> 0x1e) & 2 |
               (ulonglong)(*(uint *)((int)puVar6 + 0x13c) >> 0x1d) & 4;
      dVar31 = ABS((double)*(float *)(puVar6 + 0x27));
      if (*(float *)(puVar6 + 0x28) - 0.0 < 0.0) {
        dVar31 = ABS(dVar39);
      }
      fVar40 = *(float *)(&g_atanQuadrantTable + (int)(uVar18 << 2));
      dVar26 = ABS((double)*(float *)((int)puVar6 + 0x13c));
      if (*(float *)(puVar6 + 0x28) - 0.0 < 0.0) {
        dVar26 = ABS(dVar38);
      }
      fVar1 = *(float *)(((uint)(uVar18 << 2) | 0x735900) + 4);
      dVar35 = dVar36;
      if (0.0 < dVar31) {
        lVar10 = uVar9 - 0x2b0;
        lVar19 = uVar9 - 300;
        lVar16 = uVar9 - 0x13c;
        lVar25 = 2;
        fVar4 = (float)(dVar26 - dVar31) / (float)(dVar26 + dVar31);
        fVar2 = fVar4 * fVar4;
        *(float *)(puVar6 + 0x32) = fVar4;
        *(float *)(puVar6 + 0x31) = fVar4;
        *(float *)((int)puVar6 + 0x18c) = fVar4;
        *(float *)((int)puVar6 + 0x184) = fVar4;
        fVar4 = fVar2 * fVar2;
        *(float *)(puVar6 + 0x31) = *(float *)(puVar6 + 0x31) * fVar2;
        *(float *)((int)puVar6 + 0x18c) = *(float *)((int)puVar6 + 0x18c) * fVar4;
        *(float *)(puVar6 + 0x32) = *(float *)(puVar6 + 0x32) * fVar4 * fVar2;
        do {
          *(float *)((int)lVar10 + 0x184) = *(float *)((int)lVar10 + 0x174) * fVar4 * fVar4;
          iVar5 = (int)lVar16;
          lVar16 = lVar16 + 8;
          lVar10 = lVar10 + 8;
          *(float *)((int)lVar19 + 4) = *(float *)(iVar5 + 4) * fVar4 * fVar4;
          lVar19 = lVar19 + 8;
          lVar25 = lVar25 + -1;
        } while (lVar25 != 0);
        lVar25 = 4;
        lVar19 = uVar9 - 0x13c;
        pfVar17 = (float *)&DAT_007358e0;
        lVar10 = lVar11;
        lVar16 = lVar19;
        do {
          fVar4 = *pfVar17;
          fVar2 = pfVar17[1];
          pfVar17 = pfVar17 + 2;
          *(float *)((int)lVar10 + 0x184) = *(float *)((int)lVar10 + 0x184) * fVar4;
          lVar10 = lVar10 + 8;
          *(float *)((int)lVar16 + 4) = *(float *)((int)lVar16 + 4) * fVar2;
          lVar16 = lVar16 + 8;
          lVar25 = lVar25 + -1;
        } while (lVar25 != 0);
        lVar16 = 2;
        lVar10 = lVar11;
        dVar31 = dVar36;
        do {
          iVar5 = (int)lVar10;
          iVar22 = (int)lVar19;
          lVar10 = lVar10 + 0x10;
          lVar19 = lVar19 + 0x10;
          dVar31 = (double)((float)(dVar31 + (double)*(float *)(iVar5 + 0x184)) +
                            *(float *)(iVar22 + 4) + *(float *)(iVar22 + 8) +
                           *(float *)(iVar22 + 0xc));
          lVar16 = lVar16 + -1;
        } while (lVar16 != 0);
        dVar35 = (double)((float)(dVar31 + 0.7853981852531433) * fVar40 + fVar1);
      }
      uVar29 = FastWrapRot((float)dVar35,1.5707964);
      iVar5 = (int)puVar6[0x36];
      fVar1 = *(float *)(iVar21 + 0x10) - *(float *)(iVar5 + 0x10);
      fVar2 = *(float *)(iVar21 + 0x14) - *(float *)(iVar5 + 0x14);
      fVar3 = *(float *)(iVar5 + 0x14) - *(float *)(iVar21 + 0x14);
      fVar4 = *(float *)(iVar5 + 0x10) - *(float *)(iVar21 + 0x10);
      fVar40 = *(float *)(iVar21 + 0x18);
      dVar26 = ABS((double)fVar1);
      dVar31 = ABS((double)fVar2);
      *(float *)((int)puVar6 + 300) = fVar1;
      *(float *)(puVar6 + 0x26) = fVar2;
      fVar40 = *(float *)(iVar5 + 0x18) - fVar40;
      dVar37 = (double)(float)(dVar38 + 256.0);
      *(float *)((int)puVar6 + 0x134) = (float)(dVar26 - dVar31);
      fVar1 = *(float *)(param_2 + 0x38);
      uVar18 = (ulonglong)(*(uint *)((int)puVar6 + 300) >> 0x1c) & 8 |
               (ulonglong)(*(uint *)((int)puVar6 + 0x134) >> 0x1e) & 2 |
               (ulonglong)(*(uint *)(puVar6 + 0x26) >> 0x1d) & 4;
      dVar35 = (double)(float)(dVar39 + 208.0);
      dVar38 = (double)SQRT(fVar40 * fVar40 + fVar4 * fVar4 + fVar3 * fVar3);
      fVar4 = *(float *)(&g_atanQuadrantTable + (int)(uVar18 << 2));
      fVar40 = *(float *)(((uint)(uVar18 << 2) | 0x735900) + 4);
      dVar39 = ABS((double)*(float *)((int)puVar6 + 300));
      if ((double)*(float *)((int)puVar6 + 0x134) - dVar36 < 0.0) {
        dVar39 = dVar31;
      }
      dVar31 = ABS((double)*(float *)(puVar6 + 0x26));
      if ((double)*(float *)((int)puVar6 + 0x134) - dVar36 < 0.0) {
        dVar31 = dVar26;
      }
      dVar26 = dVar36;
      if (dVar36 < dVar39) {
        lVar10 = uVar9 - 0x2b0;
        lVar16 = uVar9 - 0x15c;
        lVar19 = uVar9 - 0x14c;
        lVar25 = 2;
        fVar2 = (float)(dVar31 - dVar39) / (float)(dVar31 + dVar39);
        fVar3 = fVar2 * fVar2;
        *(float *)(puVar6 + 0x2e) = fVar2;
        *(float *)(puVar6 + 0x2d) = fVar2;
        *(float *)((int)puVar6 + 0x16c) = fVar2;
        *(float *)((int)puVar6 + 0x164) = fVar2;
        fVar2 = fVar3 * fVar3;
        *(float *)(puVar6 + 0x2d) = *(float *)(puVar6 + 0x2d) * fVar3;
        *(float *)((int)puVar6 + 0x16c) = *(float *)((int)puVar6 + 0x16c) * fVar2;
        *(float *)(puVar6 + 0x2e) = *(float *)(puVar6 + 0x2e) * fVar2 * fVar3;
        do {
          *(float *)((int)lVar10 + 0x164) = *(float *)((int)lVar10 + 0x154) * fVar2 * fVar2;
          iVar22 = (int)lVar16;
          lVar10 = lVar10 + 8;
          lVar16 = lVar16 + 8;
          *(float *)((int)lVar19 + 4) = *(float *)(iVar22 + 4) * fVar2 * fVar2;
          lVar19 = lVar19 + 8;
          lVar25 = lVar25 + -1;
        } while (lVar25 != 0);
        lVar25 = 4;
        lVar19 = uVar9 - 0x15c;
        pfVar17 = (float *)&DAT_007358e0;
        lVar10 = lVar11;
        lVar16 = lVar19;
        do {
          fVar2 = *pfVar17;
          fVar3 = pfVar17[1];
          pfVar17 = pfVar17 + 2;
          *(float *)((int)lVar10 + 0x164) = *(float *)((int)lVar10 + 0x164) * fVar2;
          lVar10 = lVar10 + 8;
          *(float *)((int)lVar16 + 4) = *(float *)((int)lVar16 + 4) * fVar3;
          lVar16 = lVar16 + 8;
          lVar25 = lVar25 + -1;
        } while (lVar25 != 0);
        lVar16 = 2;
        lVar10 = lVar11;
        dVar39 = dVar36;
        do {
          iVar22 = (int)lVar10;
          lVar10 = lVar10 + 0x10;
          iVar12 = (int)lVar19;
          lVar19 = lVar19 + 0x10;
          dVar39 = (double)((float)(dVar39 + (double)*(float *)(iVar22 + 0x164)) +
                            *(float *)(iVar12 + 4) + *(float *)(iVar12 + 8) +
                           *(float *)(iVar12 + 0xc));
          lVar16 = lVar16 + -1;
        } while (lVar16 != 0);
        dVar26 = (double)((float)(dVar39 + dVar33) * fVar4 + fVar40);
      }
      dVar31 = (double)FastDiffRots(dVar26,(double)fVar1);
      fVar1 = *(float *)(iVar5 + 0x14) - *(float *)(iVar21 + 0x14);
      fVar4 = *(float *)(iVar5 + 0x10) - *(float *)(iVar21 + 0x10);
      dVar31 = ABS(dVar31);
      fVar2 = *(float *)(iVar21 + 0x18) - *(float *)(iVar5 + 0x18);
      dVar28 = ABS((double)fVar2);
      fVar40 = *(float *)(param_2 + 0x34);
      *(float *)((int)puVar6 + 0x124) = fVar2;
      fVar1 = SQRT(fVar4 * fVar4 + fVar1 * fVar1);
      dVar26 = ABS((double)fVar1);
      *(float *)(puVar6 + 0x24) = fVar1;
      *(float *)(puVar6 + 0x25) = (float)(dVar26 - dVar28);
      uVar18 = (ulonglong)(*(uint *)(puVar6 + 0x24) >> 0x1c) & 8 |
               (ulonglong)(*(uint *)(puVar6 + 0x25) >> 0x1e) & 2 |
               (ulonglong)(*(uint *)((int)puVar6 + 0x124) >> 0x1d) & 4;
      dVar39 = ABS((double)*(float *)(puVar6 + 0x24));
      if ((double)*(float *)(puVar6 + 0x25) - dVar36 < 0.0) {
        dVar39 = dVar28;
      }
      fVar1 = *(float *)(&g_atanQuadrantTable + (int)(uVar18 << 2));
      dVar28 = ABS((double)*(float *)((int)puVar6 + 0x124));
      if ((double)*(float *)(puVar6 + 0x25) - dVar36 < 0.0) {
        dVar28 = dVar26;
      }
      fVar4 = *(float *)(((uint)(uVar18 << 2) | 0x735900) + 4);
      if (dVar36 < dVar39) {
        lVar10 = uVar9 - 0x2b0;
        lVar16 = uVar9 - 0x17c;
        lVar19 = uVar9 - 0x16c;
        lVar25 = 2;
        fVar2 = (float)(dVar28 - dVar39) / (float)(dVar28 + dVar39);
        fVar3 = fVar2 * fVar2;
        *(float *)(puVar6 + 0x2a) = fVar2;
        *(float *)(puVar6 + 0x29) = fVar2;
        *(float *)((int)puVar6 + 0x14c) = fVar2;
        *(float *)((int)puVar6 + 0x144) = fVar2;
        fVar2 = fVar3 * fVar3;
        *(float *)(puVar6 + 0x29) = *(float *)(puVar6 + 0x29) * fVar3;
        *(float *)((int)puVar6 + 0x14c) = *(float *)((int)puVar6 + 0x14c) * fVar2;
        *(float *)(puVar6 + 0x2a) = *(float *)(puVar6 + 0x2a) * fVar2 * fVar3;
        do {
          *(float *)((int)lVar10 + 0x144) = *(float *)((int)lVar10 + 0x134) * fVar2 * fVar2;
          iVar5 = (int)lVar16;
          lVar10 = lVar10 + 8;
          lVar16 = lVar16 + 8;
          *(float *)((int)lVar19 + 4) = *(float *)(iVar5 + 4) * fVar2 * fVar2;
          lVar19 = lVar19 + 8;
          lVar25 = lVar25 + -1;
        } while (lVar25 != 0);
        lVar25 = 4;
        lVar19 = uVar9 - 0x17c;
        pfVar17 = (float *)&DAT_007358e0;
        lVar10 = lVar11;
        lVar16 = lVar19;
        do {
          fVar2 = *pfVar17;
          fVar3 = pfVar17[1];
          pfVar17 = pfVar17 + 2;
          *(float *)((int)lVar10 + 0x144) = *(float *)((int)lVar10 + 0x144) * fVar2;
          lVar10 = lVar10 + 8;
          *(float *)((int)lVar16 + 4) = *(float *)((int)lVar16 + 4) * fVar3;
          lVar16 = lVar16 + 8;
          lVar25 = lVar25 + -1;
        } while (lVar25 != 0);
        lVar10 = 2;
        do {
          iVar5 = (int)lVar11;
          iVar22 = (int)lVar19;
          lVar11 = lVar11 + 0x10;
          lVar19 = lVar19 + 0x10;
          dVar36 = (double)((float)(dVar36 + (double)*(float *)(iVar5 + 0x144)) +
                            *(float *)(iVar22 + 4) + *(float *)(iVar22 + 8) +
                           *(float *)(iVar22 + 0xc));
          lVar10 = lVar10 + -1;
        } while (lVar10 != 0);
        dVar36 = (double)((float)(dVar36 + dVar33) * fVar1 + fVar4);
      }
      dVar39 = (double)FastDiffRots(-dVar36,(double)fVar40);
      dVar31 = (double)FastWrapRot
                                 (*(float *)(param_2 + 0x114),
                                  0.1 / (SQRT((float)(dVar31 * dVar31 +
                                                     (double)(float)(ABS(dVar39) * ABS(dVar39)))) *
                                        0.31830987));
      dVar39 = (double)(float)(3.141592502593994 - dVar31);
      if (dVar31 - (double)(float)(3.141592502593994 - dVar31) < 0.0) {
        dVar39 = dVar31;
      }
      dVar33 = (double)(float)(-3.141592502593994 - dVar31);
      if ((double)(float)(-3.141592502593994 - dVar31) - dVar39 < 0.0) {
        dVar33 = dVar39;
      }
      *(float *)(param_2 + 0x114) = (float)dVar31;
      dVar39 = (double)(float)(dVar33 * dVar33);
      dVar36 = (double)(float)(dVar39 * (double)(float)(dVar39 * dVar33));
      dVar31 = (double)(float)(dVar39 * dVar36);
      FastDoubleToInt
                ((double)(((float)(dVar39 * dVar31) * 2.601887e-06 +
                           (float)(dVar31 * -0.0001980741071747616 +
                                  (double)(float)(dVar36 * 0.008333025500178337 +
                                                 (double)(float)((double)(float)(dVar39 * dVar33) *
                                                                 -0.16666656732559204 + dVar33))) +
                          1.4) * 53.0));
      M1379_DrawShapeRotated
                (dVar37,dVar35,(double)((float)(240.0 / dVar38) + 1.5),uVar29,&DAT_0079c490,3);
    }
  }
  return iVar20;
}


// 0x0260ea8 (0x2b8 bytes)
void M1379_UpdateTargetLock(undefined8 param_1,int param_2)

{
  float fVar1;
  int iVar2;
  int iVar3;
  GPiece<32> local_40;
  
  if (g_gameMode != GAME_MODE_FREEZE && g_gameMode != GAME_MODE_PAUSE) {
    FastDecTimerS32(param_2 + 0x8c);
  }
  if (((((*(int *)(param_2 + 0x8c) == 0) || (iVar3 = *(int *)(param_2 + 0x88), iVar3 == 0)) ||
       ((int)*(short *)(iVar3 + 0xa6) != *(int *)(param_2 + 0x128))) ||
      ((*(char *)(iVar3 + 0x20) == -3 || *(char *)(iVar3 + 0x20) == -2 ||
       (*(char *)(iVar3 + 0x31) == '\0')))) ||
     (((g_Pad.repeat & 0x2000) != 0 || (DAT_0096b2d6 == '\0')))) {
    *(undefined4 *)(param_2 + 0xec) = 0;
    *(undefined4 *)(param_2 + 0x88) = 0;
    *(undefined4 *)(param_2 + 0x128) = 0xffffffff;
  }
  iVar2 = M1379_ScanTargets(0x3fc921fb60000000,0x3fc921fb60000000,0x406fe00000000000,param_1,param_2
                            ,0x951500,local_40);
  iVar3 = *(int *)(param_2 + 0x88);
  if (((iVar2 != iVar3) && (500 < *(int *)(param_2 + 0x8c))) || (DAT_0096b2d6 == '\0')) {
    *(undefined4 *)(param_2 + 0xec) = 0;
    *(undefined4 *)(param_2 + 0x88) = 0;
    iVar3 = 0;
    *(undefined4 *)(param_2 + 0x128) = 0xffffffff;
  }
  if ((iVar2 != 0) &&
     (((iVar3 == 0 || ((*(short *)(iVar3 + 0xa6) != 0x3eb && (*(short *)(iVar2 + 0xa6) == 0x3eb))))
      && (DAT_0096b2d6 != '\0')))) {
    *(int *)(param_2 + 0x88) = iVar2;
    *(int *)(param_2 + 0x128) = (int)*(short *)(iVar2 + 0xa6);
    *(undefined4 *)(param_2 + 0x8c) = DAT_0079c478;
    iVar3 = iVar2;
  }
  fVar1 = animationSpeed;
  if (iVar2 == iVar3) {
    *(undefined4 *)(param_2 + 0x118) = 0;
  }
  else {
    iVar2 = *(int *)(param_2 + 0x118) + 1;
    *(int *)(param_2 + 0x118) = iVar2;
    if ((int)(fVar1 * 60.5) < iVar2) {
      *(undefined4 *)(param_2 + 0xec) = 0;
      *(undefined4 *)(param_2 + 0x88) = 0;
      *(undefined4 *)(param_2 + 0x128) = 0xffffffff;
      return;
    }
  }
  if (((iVar3 != 0) && (*(int *)(param_2 + 0x84) == 0)) &&
     (((int)*(short *)(iVar3 + 0xa6) != *(int *)(param_2 + 0x128) ||
      ((*(char *)(iVar3 + 0x20) == -2 || (*(char *)(iVar3 + 0x20) == -3)))))) {
    *(undefined4 *)(param_2 + 0x88) = 0;
    *(undefined4 *)(param_2 + 0x128) = 0xffffffff;
  }
  return;
}


// 0x02611a0 (0x828 bytes)
// strings: 0065556c: 'minHealth'

void M1379_Hud_Draw(int param_1)

{
  uint uVar1;
  undefined4 uVar2;
  ulonglong *puVar3;
  undefined4 uVar4;
  byte bVar5;
  undefined8 uVar6;
  ulonglong uVar7;
  undefined8 uVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  ulonglong unaff_r23;
  ulonglong unaff_r24;
  longlong lVar12;
  ulonglong unaff_r25;
  longlong lVar13;
  ulonglong unaff_r26;
  ulonglong unaff_r27;
  ulonglong unaff_r28;
  ulonglong unaff_r29;
  ulonglong unaff_r30;
  ulonglong uVar14;
  ulonglong unaff_r31;
  ulonglong in_LR;
  double dVar15;
  ulonglong uVar16;
  ulonglong in_f27;
  ulonglong in_f28;
  ulonglong in_f29;
  ulonglong in_f30;
  double dVar17;
  ulonglong in_f31;
  double dVar18;
  double dVar19;
  double dVar20;
  GPiece<16> auVar21;
  GPiece<16> auVar22;
  GPiece<16> auVar23;
  GPiece<16> auVar24;
  float fVar25;
  
  uVar16 = ZEXT48(&stack0x00000000);
  puVar3 = (ulonglong *)(uVar16 - 0x150);
  *puVar3 = uVar16;
  puVar3[0x2c] = in_LR;
  puVar3[0x25] = in_f27;
  puVar3[0x26] = in_f28;
  puVar3[0x27] = in_f29;
  puVar3[0x28] = in_f30;
  puVar3[0x29] = in_f31;
  puVar3[0x24] = unaff_r31;
  puVar3[0x22] = unaff_r29;
  puVar3[0x23] = unaff_r30;
  uVar1 = *(uint *)(param_1 + 0x78);
  uVar14 = (ulonglong)uVar1;
  puVar3[0x21] = unaff_r28;
  puVar3[0x20] = unaff_r27;
  puVar3[0x1f] = unaff_r26;
  puVar3[0x1e] = unaff_r25;
  puVar3[0x1d] = unaff_r24;
  puVar3[0x1c] = unaff_r23;
  uVar6 = idol_draw::PackCmd(0,1,0,1,0x80);
  SetGSReg(3,uVar6);
  uVar4 = g_viewMtxPtr;
  idol_draw::BindFragmentProgram(g_viewMtxPtr,HUD_Pass,0xd);
  auVar23 = ZEXT416(0xffffffff);
  auVar23 = auVar23 | auVar23 << 0x20 | auVar23 << 0x40 | auVar23 << 0x60;
  auVar21 = loadVectorLeftIndexed(0xf4,uVar14);
  auVar24 = vectorShiftLeftIntegerWord(auVar23,auVar23);
  auVar22 = loadVectorRightIndexed(0x104,uVar14);
  auVar23 = loadVectorLeftIndexed(in_LR,0x261160);
  auVar23 = auVar23 >> 0x60 & (GPiece<16>)0xffffffff;
  auVar21 = vectorConvertFromSignedFixedPointWord(auVar21 | auVar22,0);
  auVar23 = vectorMultiplyAddFloatingPoint
                      (auVar21,auVar23 | auVar23 << 0x20 | auVar23 << 0x40 | auVar23 << 0x60,auVar24
                      );
  auVar23 = auVar23 >> 0x60 & (GPiece<16>)0xffffffff;
  uVar2 = storeVectorElementWordIndexed
                    (auVar23 | auVar23 << 0x20 | auVar23 << 0x40 | auVar23 << 0x60,0xc0,
                     uVar16 - 0x150);
  *(undefined4 *)(puVar3 + 0x18) = uVar2;
  uVar6 = FUN_004de9c4(uVar4,0xd,"minHealth");
  idol_draw::Gfx_SubmitHudDrawCommands(uVar4,HUD_Pass,0xd,uVar6,uVar16 - 0x90,1);
  uVar7 = GetEffectTex(*(int *)(uVar1 + 0x104) + 0x28);
  iVar9 = g_ScreenHeight;
  puVar3[0xe] = 0x70808080;
  puVar3[0xf] = uVar7;
  Sprite_DrawShapeWrapper(0x170,iVar9 + -0x90,0x80,0x80,0,0,0x80,0x80);
  idol_draw::BindFragmentProgram(uVar4,HUD_Pass,0xc);
  uVar7 = GetEffectTex(*(int *)(uVar1 + 0x104) + 0x29);
  iVar9 = g_ScreenHeight;
  puVar3[0xe] = 0x70808080;
  puVar3[0xf] = uVar7;
  Sprite_DrawShapeWrapper(0x170,iVar9 + -0x90,0x80,0x80,0,0,0x80,0x80);
  uVar6 = idol_draw::PackCmd(0,2,0,1,0x80);
  SetGSReg(3,uVar6);
  M1379_UpdateTargetLock(param_1,uVar14);
  if (*(uint *)(uVar1 + 0x88) != 0) {
    ScreenPosFromWorldSpace(uVar16 - 0xa0,(ulonglong)*(uint *)(uVar1 + 0x88) + 0x10);
    puVar3[0x19] = (longlong)SCREEN_PROJECTION_MAP_X;
    dVar18 = 0.0625;
    uVar6 = FastDoubleToInt
                      ((double)((*(float *)(puVar3 + 0x16) - (float)(longlong)puVar3[0x19]) * 0.0625
                               ));
    puVar3[0x19] = (longlong)SCREEN_PROJECTION_MAP_Y;
    uVar8 = FastDoubleToInt
                      ((double)(float)((double)(*(float *)((int)puVar3 + 0xb4) -
                                               (float)(longlong)puVar3[0x19]) * dVar18));
    if (DAT_0079c47c < *(int *)(uVar1 + 0x8c)) {
      dVar18 = (double)FastIntToDouble(*(int *)(uVar1 + 0x8c) - DAT_0079c47c);
      dVar15 = (double)FastIntToDouble(DAT_0079c480);
      dVar19 = (double)((float)(dVar18 / dVar15) * 5.0 + 1.0);
      dVar18 = (double)((1.0 - (float)(dVar18 / dVar15)) * 2.0);
      dVar15 = 1.0 - dVar18;
      if (dVar15 < 0.0) {
        dVar18 = 1.0;
      }
      FastDoubleToInt
                ((double)(float)(dVar18 * 96.0),0x3ff0000000000000,dVar15,0x4014000000000000);
      uVar6 = FastIntToDouble(uVar6);
      uVar8 = FastIntToDouble(uVar8);
      dVar18 = (double)FastIntToDouble(worldUpdateTime);
      fVar25 = MB_WrapRot((float)(dVar18 * 0.03333333507180214));
      M1379_0025edf8(uVar6,uVar8,dVar19,(double)fVar25);
      *(undefined4 *)(uVar1 + 0xec) = 0;
    }
    else {
      puVar3[0x19] = (longlong)(int)(animationSpeed * 20.5);
      uVar6 = FastIntToDouble(uVar6);
      uVar8 = FastIntToDouble(uVar8);
      M1379_0025edf8(uVar6,uVar8,0x3ff0000000000000,0);
      *(undefined4 *)(uVar1 + 0xec) = *(undefined4 *)(uVar1 + 0x88);
    }
  }
  iVar9 = 0;
  lVar12 = 0x40;
  lVar13 = 0x18;
  if (DAT_0096b2d7 != 0) {
    uVar6 = 0x3fe0000000000000;
    do {
      puVar3[0x19] = (longlong)(int)lVar12;
      bVar5 = DAT_0096b2d6;
      uVar16 = puVar3[0x19];
      puVar3[0x19] = (longlong)(int)lVar13;
      if (iVar9 < (int)(uint)bVar5) {
        M1379_DrawShapeScaled
                  ((double)(longlong)puVar3[0x19],(double)(longlong)uVar16,uVar6,&DAT_0079c49c,0x19)
        ;
      }
      else {
        M1379_DrawShapeScaled
                  ((double)(longlong)puVar3[0x19],(double)(longlong)uVar16,uVar6,&DAT_0079c49c,0x19)
        ;
      }
      iVar11 = ((int)(uint)DAT_0096b2d7 >> 1) - iVar9;
      iVar10 = ((int)(uint)DAT_0096b2d7 >> 1) - iVar9;
      iVar9 = iVar9 + 1;
      lVar12 = lVar12 + (ZERO_MASK(iVar11) & 0x2eU - lVar12) + 0x12;
      lVar13 = lVar13 + (ZERO_MASK(iVar10) & 0x1eU);
    } while (iVar9 < (int)(uint)DAT_0096b2d7);
  }
  iVar9 = *(int *)(uVar1 + 0xe0);
  iVar10 = *(int *)(uVar1 + 0xe4);
  GetEffectTex(0x11);
  puVar3[0x19] = (longlong)iVar9;
  puVar3[0x10] = 0;
  puVar3[0x11] = 0;
  puVar3[0xe] = ZEXT48(&DAT_00fffff3);
  puVar3[0xf] = 0xffffffffff20ff20;
  uVar16 = puVar3[0x19];
  puVar3[0x19] = (longlong)iVar10;
  dVar20 = 40.0;
  dVar17 = 0.0;
  dVar19 = 0.5;
  puVar3[0x14] = 0;
  dVar15 = (double)(longlong)uVar16;
  dVar18 = (double)(longlong)puVar3[0x19];
  Sprite_DrawRotated
            ((float)(longlong)uVar16,(float)(longlong)puVar3[0x19],40.0,40.0,0.0,0.5,0.5);
  GetEffectTex(0x12);
  puVar3[0xe] = ZEXT48(&DAT_00fffff3);
  puVar3[0xf] = 0xffffffffff20ff20;
  puVar3[0x10] = 0;
  puVar3[0x11] = 0;
  puVar3[0x14] = 0;
  Sprite_DrawRotated((float)dVar15,(float)dVar18,dVar20,dVar20,dVar17,dVar19,dVar19);
  GetEffectTex(8);
  puVar3[0xe] = ZEXT48(&DAT_00fffff3);
  puVar3[0xf] = 0xffffffffff20ff20;
  puVar3[0x10] = 0;
  puVar3[0x11] = 0;
  puVar3[0x14] = 0;
  Sprite_DrawRotated((float)dVar15,(float)dVar18,10.0,10.0,dVar17,dVar19,dVar19);
  if (DAT_0096b2dc < DAT_0096b2e0 * 0.1) {
    if ((worldUpdateTime / 0x5a & 1U) != 0) {
      uVar6 = help_msg_string_by_index(STR_WARNING_SHIP_NEEDS_REPAIR);
      FontPrintSmallCenter(0x100,0x186,0x80000080,uVar6,100);
    }
  }
  if (*(char *)(param_1 + 0x20) == '\b') {
    uVar6 = help_msg_string_by_index(STR_MISSION_COMPLETED);
    FontPrintSmallCenter(0x100,200,0x80005080,uVar6,100);
  }
  fVar25 = (DAT_0096b2dc - *(float *)(uVar1 + 0xf0)) * 0.2;
  if (1.0 - ABS(fVar25) < 0.0) {
    fVar25 = fVar25 / ABS(fVar25);
  }
  fVar25 = *(float *)(uVar1 + 0xf0) + fVar25;
  *(float *)(uVar1 + 0xf0) = fVar25;
  iVar9 = FastDoubleToInt((double)((fVar25 * 251.0) / DAT_0096b2e0));
  iVar9 = iVar9 + 2;
  iVar9 = iVar9 + ((uint)(0xfd - (longlong)iVar9 >> 0x3f) & 0xfdU - iVar9);
  *(uint *)(uVar1 + 0xf4) = iVar9 + ((uint)((longlong)iVar9 + -2 >> 0x3f) & 2U - iVar9);
  return;
}


// 0x02619e0 (0x2fc bytes)
void M1379_UpdateGunsMissiles
               (double param_1,double param_2,MobyInstance *param_3,float *param_4)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  int iVar5;
  float fVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  float local_90;
  float local_8c;
  float local_88;
  undefined4 local_84;
  float local_80;
  float local_7c;
  float local_78;
  float local_70;
  float local_6c;
  float local_68;
  undefined4 local_64;
  float local_60;
  float local_5c;
  longlong local_50;
  
  MB_SphericalToVector
            (DAT_0079c37c * DAT_0079c3b0,(float)param_1,(float)param_2,&local_90);
  local_90 = local_90 + *param_4;
  local_8c = local_8c + param_4[1];
  local_88 = local_88 + param_4[2];
  iVar5 = FastDecTimerS32(param_4 + 0x20);
  if ((iVar5 != 0) && ((g_Pad.padDownButtons & 0x84) != 0)) {
    PlayMobySound(3,0,param_3);
    dVar7 = 0.0;
    fVar6 = SQRT(local_88 * local_88 + local_90 * local_90 + local_8c * local_8c);
    fVar1 = 2.2 / fVar6;
    dVar9 = dVar7;
    if (0.0 - fVar6 < 0.0) {
      dVar9 = (double)(local_88 * fVar1);
    }
    dVar8 = dVar7;
    if (0.0 - fVar6 < 0.0) {
      dVar8 = (double)(local_8c * fVar1);
    }
    if (0.0 - fVar6 < 0.0) {
      dVar7 = (double)(local_90 * fVar1);
    }
    if (fVar6 - 0.0 < 0.0) {
      dVar9 = (double)(local_88 * fVar1);
    }
    if (fVar6 - 0.0 < 0.0) {
      dVar8 = (double)(local_8c * fVar1);
    }
    if (fVar6 - 0.0 < 0.0) {
      dVar7 = (double)(local_90 * fVar1);
    }
    GetBonePosition(param_3,(*(byte *)((int)param_4 + 0x61) & 1) + 3,&local_80);
    local_80 = (float)((double)local_80 + dVar7);
    local_7c = (float)((double)local_7c + dVar8);
    local_78 = (float)((double)local_78 + dVar9);
    M1009_00184670
              (0x4069000000000000,0xbff0000000000000,param_3,&local_90,&local_80);
    param_4[0x20] = DAT_0079c380;
    *(byte *)((int)param_4 + 0x61) = *(byte *)((int)param_4 + 0x61) ^ 1;
  }
  fVar4 = 0.0;
  local_64 = local_84;
  fVar3 = SQRT(local_88 * local_88 + local_90 * local_90 + local_8c * local_8c);
  fVar2 = 23.0 / fVar3;
  fVar1 = local_90 * fVar2;
  fVar6 = local_8c * fVar2;
  fVar2 = local_88 * fVar2;
  local_90 = fVar4;
  if (0.0 - fVar3 < 0.0) {
    local_90 = fVar1;
  }
  local_8c = fVar4;
  if (0.0 - fVar3 < 0.0) {
    local_8c = fVar6;
  }
  if (0.0 - fVar3 < 0.0) {
    fVar4 = fVar2;
  }
  if (fVar3 - 0.0 < 0.0) {
    local_90 = fVar1;
  }
  if (fVar3 - 0.0 < 0.0) {
    local_8c = fVar6;
  }
  local_88 = fVar4;
  if (fVar3 - 0.0 < 0.0) {
    local_88 = fVar2;
  }
  local_70 = local_90 + (param_3->pos).x;
  local_6c = local_8c + (param_3->pos).y;
  local_68 = local_88 + (param_3->pos).z;
  ScreenPosFromWorldSpace(&local_60,&local_70);
  local_50 = (longlong)SCREEN_PROJECTION_MAP_X;
  dVar9 = 0.0625;
  fVar6 = (float)FastDoubleToInt((double)((local_60 - (float)local_50) * 0.0625));
  param_4[0x38] = fVar6;
  local_50 = (longlong)SCREEN_PROJECTION_MAP_Y;
  fVar6 = (float)FastDoubleToInt
                           ((double)(float)((double)(local_5c - (float)local_50) * dVar9));
  param_4[0x39] = fVar6;
  return;
}


// 0x0261ce8 (0x1d4 bytes)
void M1379_UpdateMissiles(longlong param_1,int param_2)

{
  ushort uVar1;
  int iVar2;
  GPiece<32> local_50;
  
  iVar2 = FastDecTimerS32(param_2 + 0x84);
  if (((iVar2 != 0) && ((g_Pad.padDownButtons & 0x28) != 0)) && (DAT_0096b2d6 != '\0')) {
    uVar1 = *(short *)(param_2 + 0x6a) + 1U & 3;
    *(ushort *)(param_2 + 0x6a) = uVar1;
    GetBonePosition(param_1,(longlong)(short)uVar1 + 7,local_50);
    iVar2 = Spawn_Moby295
                      ((double)(DAT_0079c384 * DAT_0079c3b0),param_1,local_50,
                       *(undefined4 *)(param_2 + 0xec),param_1 + 0x40,&DAT_00261cdc,
                       (int)(animationSpeed * 300.5));
    if (iVar2 != 0) {
      PlayMobySound(2,0,(MobyInstance *)param_1);
      DAT_0096b2d6 = DAT_0096b2d6 + -1;
      *(undefined4 *)(param_2 + 0x84) = DAT_0079c388;
    }
  }
  return;
}


// 0x0261ec8 (0xcc bytes)
double M1379_BlendByDist
                 (double param_1,double param_2,double param_3,double param_4,double param_5)

{
  char in_r6;
  int in_r9;
  double dVar1;
  double dVar2;
  
  if (param_4 < param_1) {
    dVar2 = (double)((float)(param_1 - param_4) / (float)(param_5 - param_4));
    if (dVar2 - 0.0 < 0.0) {
      dVar2 = 0.0;
    }
    if (1.0 - dVar2 < 0.0) {
      dVar2 = 1.0;
    }
    if (1 < in_r9) {
      in_r9 = in_r9 + -1;
      do {
        in_r9 = in_r9 + -1;
        dVar2 = (double)(float)(dVar2 * dVar2);
      } while (0 < in_r9);
    }
    if (in_r6 == '\0') {
      param_2 = (double)(float)((double)(float)(1.0 - dVar2) * param_2 +
                               (double)(float)(dVar2 * param_3));
    }
    else {
      dVar1 = (double)FastDiffRots(param_3,param_2);
      param_2 = (double)FastWrapRot((float)param_2,(float)(dVar2 * dVar1));
    }
  }
  return param_2;
}


// 0x0261f94 (0x70 bytes)
void M1379_00261f94
               (undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
               undefined8 param_5,undefined8 param_6)

{
  GPiece<16> auStack_30;
  
  GetBonePosition(param_2,param_3,auStack_30);
  CollSphere(param_1,auStack_30,param_3,param_5,param_6);
  return;
}


// 0x0262030 (0x6a0 bytes)
// inlined: FastAtan2 @0x26228c
void M1379_00262030(undefined8 param_1,float *param_2,undefined8 param_3)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  uint uVar5;
  undefined4 uVar6;
  ulonglong *puVar7;
  float fVar8;
  int iVar9;
  float fVar10;
  int iVar11;
  float fVar12;
  longlong lVar13;
  undefined4 *puVar14;
  ulonglong uVar15;
  ulonglong uVar16;
  longlong lVar17;
  longlong lVar18;
  longlong lVar19;
  float *pfVar20;
  longlong lVar21;
  Cuboid *pCVar22;
  ulonglong unaff_r28;
  ulonglong unaff_r29;
  ulonglong uVar23;
  ulonglong unaff_r30;
  ulonglong unaff_r31;
  byte in_cr6;
  ulonglong in_LR;
  longlong lVar24;
  undefined8 uVar25;
  double dVar26;
  ulonglong in_f29;
  double dVar27;
  ulonglong in_f30;
  double dVar28;
  ulonglong in_f31;
  double dVar29;
  double dVar30;
  GPiece<16> auVar31;
  GPiece<16> auVar32;
  GPiece<16> auVar33;
  GPiece<16> auVar34;
  GPiece<16> auVar35;
  GPiece<16> auVar36;
  GPiece<16> auVar37;
  undefined4 in_vr31_32_0;
  undefined4 in_vr31_32_1;
  undefined4 in_vr31_32_2;
  undefined4 in_vr31_32_3;
  GPiece<16> auVar38;
  GPiece<16> auVar39;
  
  uVar15 = ZEXT48(&stack0x00000000);
  lVar18 = uVar15 - 0x120;
  puVar7 = (ulonglong *)lVar18;
  *puVar7 = uVar15;
  puVar7[0x26] = in_LR;
  puVar7[0x21] = in_f29;
  puVar7[0x22] = in_f30;
  puVar7[0x23] = in_f31;
  lVar13 = uVar15 - 0x50;
  puVar14 = (undefined4 *)lVar13;
  puVar14[3] = in_vr31_32_3;
  puVar14[2] = in_vr31_32_2;
  puVar14[1] = in_vr31_32_1;
  *puVar14 = in_vr31_32_0;
  auVar31 = ZEXT416(0xffffffff);
  auVar31 = auVar31 | auVar31 << 0x20 | auVar31 << 0x40 | auVar31 << 0x60;
  auVar32 = vectorShiftLeftIntegerWord(auVar31,auVar31);
  auVar31 = loadVectorLeftIndexed(lVar13,0x262004);
  fVar8 = animationSpeed * 60.5;
  auVar31 = auVar31 >> 0x60 & (GPiece<16>)0xffffffff;
  puVar7[0x1e] = unaff_r29;
  auVar33 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
  iVar9 = (int)param_1;
  uVar5 = *(uint *)(iVar9 + 0x78);
  uVar23 = (ulonglong)uVar5;
  auVar32 = vectorMultiplyAddFloatingPoint
                      (auVar33,auVar31 | auVar31 << 0x20 | auVar31 << 0x40 | auVar31 << 0x60,auVar32
                      );
  fVar1 = *(float *)(uVar5 + 100);
  auVar33 = loadVectorLeftIndexed(100,uVar23);
  auVar34 = loadVectorRightIndexed(0x74,uVar23);
  auVar31 = ZEXT416(0xffffffff);
  auVar35 = auVar31 | auVar31 << 0x20 | auVar31 << 0x40 | auVar31 << 0x60;
  fVar2 = *(float *)(uVar5 + 0x10);
  auVar36 = loadVectorLeftIndexed(0x10,uVar23);
  auVar31 = vectorConvertToSignedFixedPointWordSaturate(auVar32,0);
  fVar3 = *(float *)(uVar5 + 0x14);
  auVar32 = vectorShiftLeftIntegerWord(auVar35,auVar35);
  auVar35 = loadVectorRightIndexed(0x20,uVar23);
  fVar4 = *(float *)(iVar9 + 0x10);
  puVar7[0x20] = unaff_r31;
  puVar7[0x1f] = unaff_r30;
  auVar31 = vectorConvertFromSignedFixedPointWord(auVar31,0);
  fVar1 = fVar1 * (float)(longlong)fVar8;
  auVar37 = vectorMultiplyAddFloatingPoint(auVar33 | auVar34,auVar31,auVar32);
  auVar31 = loadVectorLeftIndexed(0x14,uVar23);
  auVar32 = loadVectorRightIndexed(0x24,uVar23);
  auVar33 = loadVectorLeftIndexed(0x10,param_1);
  pCVar22 = Cuboids + *(int *)(uVar5 + 300);
  uVar16 = ZEXT48(pCVar22);
  auVar34 = loadVectorLeftIndexed(0x14,param_1);
  auVar33 = vectorMultiplyAddFloatingPoint(auVar36 | auVar35,auVar37,auVar33);
  auVar31 = vectorMultiplyAddFloatingPoint(auVar31 | auVar32,auVar37,auVar34);
  auVar32 = loadVectorLeftIndexed(0x30,uVar16);
  fVar8 = (fVar2 * fVar1 + fVar4) - (pCVar22->pos).x;
  fVar10 = (fVar3 * fVar1 + *(float *)(iVar9 + 0x14)) - (pCVar22->pos).y;
  auVar33 = vectorSubtractFloatingPoint(auVar33,auVar32);
  auVar32 = loadVectorLeftIndexed(0x34,uVar16);
  auVar35 = loadVectorLeftIndexed(0x18,uVar23);
  auVar32 = vectorSubtractFloatingPoint(auVar31,auVar32);
  auVar36 = loadVectorRightIndexed(0x28,uVar23);
  fVar1 = (pCVar22->matrix).v0.x;
  fVar2 = (pCVar22->matrix).v0.y;
  auVar38 = loadVectorLeftIndexed(0x28,uVar16);
  auVar34 = loadVectorLeftIndexed(0x38,uVar16);
  auVar31 = auVar33 >> 0x60 & (GPiece<16>)0xffffffff;
  auVar32 = auVar32 >> 0x60 & (GPiece<16>)0xffffffff;
  uVar6 = storeVectorElementWordIndexed
                    (auVar31 | auVar31 << 0x20 | auVar31 << 0x40 | auVar31 << 0x60,0x70,lVar18);
  *(undefined4 *)(puVar7 + 0xe) = uVar6;
  auVar33 = vectorAddFloatingPoint(auVar38,auVar34);
  uVar6 = storeVectorElementWordIndexed
                    (auVar32 | auVar32 << 0x20 | auVar32 << 0x40 | auVar32 << 0x60,0x74,lVar18);
  *(undefined4 *)((int)puVar7 + 0x74) = uVar6;
  auVar31 = loadVectorLeftIndexed(0x18,param_1);
  *(float *)(puVar7 + 0xf) = ABS(fVar8) - ABS(fVar10);
  dVar27 = 0.0;
  uVar16 = (ulonglong)(*(uint *)(puVar7 + 0xe) >> 0x1c) & 8 |
           (ulonglong)(*(uint *)(puVar7 + 0xf) >> 0x1e) & 2 |
           (ulonglong)(*(uint *)((int)puVar7 + 0x74) >> 0x1d) & 4;
  auVar31 = vectorMultiplyAddFloatingPoint(auVar35 | auVar36,auVar37,auVar31);
  auVar32 = vectorSubtractFloatingPoint(auVar34,auVar38);
  dVar29 = (double)SQRT(fVar8 * fVar8 + fVar10 * fVar10);
  fVar4 = *(float *)(&g_atanQuadrantTable + (int)(uVar16 << 2));
  fVar3 = *(float *)(((uint)(uVar16 << 2) | 0x735900) + 4);
  fVar12 = ABS(*(float *)(puVar7 + 0xe));
  if (*(float *)(puVar7 + 0xf) - 0.0 < 0.0) {
    fVar12 = ABS(fVar10);
  }
  dVar28 = (double)SQRT(fVar1 * fVar1 + fVar2 * fVar2);
  puVar7[0x1d] = unaff_r28;
  fVar1 = ABS(*(float *)((int)puVar7 + 0x74));
  if (*(float *)(puVar7 + 0xf) - 0.0 < 0.0) {
    fVar1 = ABS(fVar8);
  }
  dVar26 = dVar27;
  if (0.0 < fVar12) {
    lVar17 = uVar15 - 0x110;
    lVar21 = uVar15 - 0x94;
    lVar19 = uVar15 - 0xa4;
    lVar24 = 2;
    fVar1 = (fVar1 - fVar12) / (fVar1 + fVar12);
    fVar2 = fVar1 * fVar1;
    *(float *)(puVar7 + 0x11) = fVar1;
    *(float *)(puVar7 + 0x10) = fVar1;
    *(float *)((int)puVar7 + 0x84) = fVar1;
    *(float *)((int)puVar7 + 0x7c) = fVar1;
    fVar1 = fVar2 * fVar2;
    *(float *)(puVar7 + 0x10) = *(float *)(puVar7 + 0x10) * fVar2;
    *(float *)((int)puVar7 + 0x84) = *(float *)((int)puVar7 + 0x84) * fVar1;
    *(float *)(puVar7 + 0x11) = *(float *)(puVar7 + 0x11) * fVar1 * fVar2;
    do {
      *(float *)((int)lVar17 + 0x7c) = *(float *)((int)lVar17 + 0x6c) * fVar1 * fVar1;
      iVar9 = (int)lVar19;
      lVar19 = lVar19 + 8;
      lVar17 = lVar17 + 8;
      *(float *)((int)lVar21 + 4) = *(float *)(iVar9 + 4) * fVar1 * fVar1;
      lVar21 = lVar21 + 8;
      lVar24 = lVar24 + -1;
    } while (lVar24 != 0);
    lVar24 = 4;
    lVar21 = uVar15 - 0xa4;
    pfVar20 = (float *)&DAT_007358e0;
    lVar17 = lVar18;
    lVar19 = lVar21;
    do {
      fVar1 = *pfVar20;
      fVar2 = pfVar20[1];
      pfVar20 = pfVar20 + 2;
      *(float *)((int)lVar17 + 0x7c) = *(float *)((int)lVar17 + 0x7c) * fVar1;
      lVar17 = lVar17 + 8;
      *(float *)((int)lVar19 + 4) = *(float *)((int)lVar19 + 4) * fVar2;
      lVar19 = lVar19 + 8;
      lVar24 = lVar24 + -1;
    } while (lVar24 != 0);
    lVar17 = 2;
    do {
      iVar9 = (int)lVar18;
      iVar11 = (int)lVar21;
      lVar18 = lVar18 + 0x10;
      lVar21 = lVar21 + 0x10;
      dVar26 = (double)((float)(dVar26 + (double)*(float *)(iVar9 + 0x7c)) + *(float *)(iVar11 + 4)
                        + *(float *)(iVar11 + 8) + *(float *)(iVar11 + 0xc));
      lVar17 = lVar17 + -1;
    } while (lVar17 != 0);
    dVar26 = (double)((float)(dVar26 + 0.7853981852531433) * fVar4 + fVar3);
  }
  uVar25 = FastWrapRot((float)dVar26,3.14159);
  auVar34 = loadVectorLeftIndexed(0x10,0x262004);
  auVar34 = auVar34 >> 0x60 & (GPiece<16>)0xffffffff;
  auVar34 = auVar34 | auVar34 << 0x20 | auVar34 << 0x40 | auVar34 << 0x60;
  if ((double)(float)(dVar28 - 10.0) < dVar29) {
    dVar30 = (double)(((float)(dVar29 - dVar28) + 10.0) * 0.1);
    dVar28 = (double)FastDiffRots(uVar25,(double)*(float *)(uVar5 + 0x38));
    dVar26 = 1.0;
    dVar29 = dVar26;
    if ((dVar30 <= 1.0) && (dVar29 = dVar30, dVar30 < dVar27)) {
      dVar29 = dVar27;
    }
    if (dVar28 <= dVar27) {
      fVar1 = *param_2;
    }
    else {
      fVar1 = *param_2;
      dVar26 = -1.0;
    }
    *param_2 = (float)((double)(float)(dVar26 - (double)fVar1) * dVar29 + (double)fVar1);
    DAT_0096b2ef = DAT_0096b2ef | 2;
  }
  auVar37 = vectorSubtractFloatingPoint(auVar33,auVar34);
  auVar35 = auVar31 >> 0x60 & (GPiece<16>)0xffffffff;
  auVar36 = auVar35 | auVar35 << 0x20 | auVar35 << 0x40 | auVar35 << 0x60;
  auVar35 = auVar37 >> 0x60 & (GPiece<16>)0xffffffff;
  vectorCompareGreaterThanFloatingPoint
            (auVar36,auVar35 | auVar35 << 0x20 | auVar35 << 0x40 | auVar35 << 0x60);
  if ((bool)(in_cr6 >> 1 & 1)) {
    auVar33 = vectorAddFloatingPoint(auVar32,auVar34);
    auVar33 = auVar33 >> 0x60 & (GPiece<16>)0xffffffff;
    vectorCompareGreaterThanOrEqualToFloatingPoint
              (auVar36,auVar33 | auVar33 << 0x20 | auVar33 << 0x40 | auVar33 << 0x60);
    if ((bool)(in_cr6 >> 1 & 1)) {
      auVar33 = vectorSubtractFloatingPoint(auVar32,auVar31);
      auVar31 = ZEXT416(0xffffffff);
      auVar31 = auVar31 | auVar31 << 0x20 | auVar31 << 0x40 | auVar31 << 0x60;
      auVar39 = vectorShiftLeftIntegerWord(auVar31,auVar31);
      auVar31 = loadVectorLeftIndexed(0x14,0x262004);
      auVar35 = loadVectorLeftIndexed(0x34,uVar23);
      auVar32 = auVar31 >> 0x60 & (GPiece<16>)0xffffffff;
      auVar34 = vectorAddFloatingPoint(auVar33,auVar34);
      auVar31 = loadVectorLeftIndexed(0x18,0x262004);
      auVar36 = loadVectorRightIndexed(0x44,uVar23);
      auVar38 = loadVectorLeftIndexed(0x20,0x262004);
      auVar31 = auVar31 >> 0x60 & (GPiece<16>)0xffffffff;
      auVar33 = auVar31 | auVar31 << 0x20 | auVar31 << 0x40 | auVar31 << 0x60;
      auVar31 = ZEXT416(0xffffffff);
      auVar31 = auVar31 | auVar31 << 0x20 | auVar31 << 0x40 | auVar31 << 0x60;
      auVar37 = vectorShiftLeftIntegerWord(auVar31,auVar31);
      auVar39 = vectorMultiplyAddFloatingPoint
                          (auVar34,auVar32 | auVar32 << 0x20 | auVar32 << 0x40 | auVar32 << 0x60,
                           auVar39);
      auVar31 = auVar38 >> 0x60 & (GPiece<16>)0xffffffff;
      auVar32 = loadVectorLeftIndexed(0x24,0x262004);
      auVar32 = auVar32 >> 0x60 & (GPiece<16>)0xffffffff;
      auVar35 = vectorAddFloatingPoint
                          (auVar35 | auVar36,
                           auVar31 | auVar31 << 0x20 | auVar31 << 0x40 | auVar31 << 0x60);
      auVar31 = auVar39 >> 0x60 & (GPiece<16>)0xffffffff;
      auVar34 = auVar31 | auVar31 << 0x20 | auVar31 << 0x40 | auVar31 << 0x60;
      vectorCompareGreaterThanFloatingPoint(auVar34,auVar33);
      auVar32 = vectorMultiplyAddFloatingPoint
                          (auVar35,auVar32 | auVar32 << 0x20 | auVar32 << 0x40 | auVar32 << 0x60,
                           auVar37);
      auVar31 = auVar33;
      if ((bool)(in_cr6 >> 1 & 1)) {
        auVar31 = ZEXT416(0);
        vectorCompareGreaterThanOrEqualToFloatingPoint
                  (auVar34,auVar31 | auVar31 << 0x20 | auVar31 << 0x40 | auVar31 << 0x60);
        auVar31 = auVar39;
        if ((bool)(in_cr6 >> 1 & 1)) {
          auVar31 = ZEXT416(0);
          auVar31 = auVar31 | auVar31 << 0x20 | auVar31 << 0x40 | auVar31 << 0x60;
        }
      }
      auVar34 = auVar32 >> 0x60 & (GPiece<16>)0xffffffff;
      auVar35 = auVar34 | auVar34 << 0x20 | auVar34 << 0x40 | auVar34 << 0x60;
      auVar31 = auVar31 >> 0x60 & (GPiece<16>)0xffffffff;
      vectorCompareGreaterThanFloatingPoint(auVar35,auVar33);
      auVar34 = auVar33;
      if ((bool)(in_cr6 >> 1 & 1)) {
        auVar34 = ZEXT416(0);
        vectorCompareGreaterThanOrEqualToFloatingPoint
                  (auVar35,auVar34 | auVar34 << 0x20 | auVar34 << 0x40 | auVar34 << 0x60);
        auVar34 = auVar32;
        if ((bool)(in_cr6 >> 1 & 1)) {
          auVar32 = ZEXT416(0);
          auVar34 = auVar32 | auVar32 << 0x20 | auVar32 << 0x40 | auVar32 << 0x60;
        }
      }
      auVar34 = auVar34 >> 0x60 & (GPiece<16>)0xffffffff;
      auVar32 = ZEXT416(0xffffffff);
      auVar35 = auVar32 | auVar32 << 0x20 | auVar32 << 0x40 | auVar32 << 0x60;
      auVar36 = loadVectorLeftIndexed(lVar13,param_3);
      auVar32 = vectorSubtractFloatingPoint(auVar33,auVar36);
      auVar33 = vectorShiftLeftIntegerWord(auVar35,auVar35);
      auVar31 = vectorMultiplyAddFloatingPoint
                          (auVar31 | auVar31 << 0x20 | auVar31 << 0x40 | auVar31 << 0x60,
                           auVar34 | auVar34 << 0x20 | auVar34 << 0x40 | auVar34 << 0x60,auVar33);
      auVar31 = vectorMultiplyAddFloatingPoint(auVar32,auVar31,auVar36);
      auVar31 = auVar31 >> 0x60 & (GPiece<16>)0xffffffff;
      uVar6 = storeVectorElementWordIndexed
                        (auVar31 | auVar31 << 0x20 | auVar31 << 0x40 | auVar31 << 0x60,0,param_3);
      *(undefined4 *)((uint)param_3 & 0xfffffffc) = uVar6;
      DAT_0096b2ef = DAT_0096b2ef | 2;
    }
  }
  else {
    auVar32 = vectorSubtractFloatingPoint(auVar31,auVar33);
    auVar31 = ZEXT416(0xffffffff);
    auVar31 = auVar31 | auVar31 << 0x20 | auVar31 << 0x40 | auVar31 << 0x60;
    auVar33 = vectorShiftLeftIntegerWord(auVar31,auVar31);
    auVar31 = loadVectorLeftIndexed(0x14,0x262004);
    auVar35 = loadVectorLeftIndexed(0x34,uVar23);
    auVar31 = auVar31 >> 0x60 & (GPiece<16>)0xffffffff;
    auVar32 = vectorAddFloatingPoint(auVar32,auVar34);
    auVar36 = loadVectorRightIndexed(0x44,uVar23);
    auVar37 = loadVectorLeftIndexed(0x20,0x262004);
    auVar34 = vectorMultiplyAddFloatingPoint
                        (auVar32,auVar31 | auVar31 << 0x20 | auVar31 << 0x40 | auVar31 << 0x60,
                         auVar33);
    auVar31 = auVar37 >> 0x60 & (GPiece<16>)0xffffffff;
    auVar32 = loadVectorLeftIndexed(0x18,0x262004);
    auVar32 = auVar32 >> 0x60 & (GPiece<16>)0xffffffff;
    auVar33 = auVar32 | auVar32 << 0x20 | auVar32 << 0x40 | auVar32 << 0x60;
    auVar36 = vectorSubtractFloatingPoint
                        (auVar31 | auVar31 << 0x20 | auVar31 << 0x40 | auVar31 << 0x60,
                         auVar35 | auVar36);
    auVar31 = ZEXT416(0xffffffff);
    auVar32 = auVar31 | auVar31 << 0x20 | auVar31 << 0x40 | auVar31 << 0x60;
    auVar31 = loadVectorLeftIndexed(0x24,0x262004);
    auVar31 = auVar31 >> 0x60 & (GPiece<16>)0xffffffff;
    auVar35 = vectorShiftLeftIntegerWord(auVar32,auVar32);
    auVar32 = auVar34 >> 0x60 & (GPiece<16>)0xffffffff;
    auVar32 = auVar32 | auVar32 << 0x20 | auVar32 << 0x40 | auVar32 << 0x60;
    vectorCompareGreaterThanFloatingPoint(auVar32,auVar33);
    auVar35 = vectorMultiplyAddFloatingPoint
                        (auVar36,auVar31 | auVar31 << 0x20 | auVar31 << 0x40 | auVar31 << 0x60,
                         auVar35);
    auVar31 = auVar33;
    if ((bool)(in_cr6 >> 1 & 1)) {
      auVar31 = ZEXT416(0);
      vectorCompareGreaterThanOrEqualToFloatingPoint
                (auVar32,auVar31 | auVar31 << 0x20 | auVar31 << 0x40 | auVar31 << 0x60);
      auVar31 = auVar34;
      if ((bool)(in_cr6 >> 1 & 1)) {
        auVar31 = ZEXT416(0);
        auVar31 = auVar31 | auVar31 << 0x20 | auVar31 << 0x40 | auVar31 << 0x60;
      }
    }
    auVar31 = auVar31 >> 0x60 & (GPiece<16>)0xffffffff;
    auVar32 = auVar35 >> 0x60 & (GPiece<16>)0xffffffff;
    auVar32 = auVar32 | auVar32 << 0x20 | auVar32 << 0x40 | auVar32 << 0x60;
    vectorCompareGreaterThanFloatingPoint(auVar32,auVar33);
    if ((bool)(in_cr6 >> 1 & 1)) {
      auVar33 = ZEXT416(0);
      vectorCompareGreaterThanOrEqualToFloatingPoint
                (auVar32,auVar33 | auVar33 << 0x20 | auVar33 << 0x40 | auVar33 << 0x60);
      auVar33 = auVar35;
      if ((bool)(in_cr6 >> 1 & 1)) {
        auVar32 = ZEXT416(0);
        auVar33 = auVar32 | auVar32 << 0x20 | auVar32 << 0x40 | auVar32 << 0x60;
      }
    }
    auVar32 = ZEXT416(0xffffffff);
    auVar34 = auVar32 | auVar32 << 0x20 | auVar32 << 0x40 | auVar32 << 0x60;
    auVar32 = auVar33 >> 0x60 & (GPiece<16>)0xffffffff;
    auVar35 = loadVectorLeftIndexed(lVar13,param_3);
    auVar33 = vectorShiftLeftIntegerWord(auVar34,auVar34);
    auVar34 = loadVectorLeftIndexed(0x1c,0x262004);
    auVar32 = vectorMultiplyAddFloatingPoint
                        (auVar31 | auVar31 << 0x20 | auVar31 << 0x40 | auVar31 << 0x60,
                         auVar32 | auVar32 << 0x20 | auVar32 << 0x40 | auVar32 << 0x60,auVar33);
    auVar31 = auVar34 >> 0x60 & (GPiece<16>)0xffffffff;
    auVar31 = vectorSubtractFloatingPoint
                        (auVar31 | auVar31 << 0x20 | auVar31 << 0x40 | auVar31 << 0x60,auVar35);
    auVar31 = vectorMultiplyAddFloatingPoint(auVar31,auVar32,auVar35);
    auVar31 = auVar31 >> 0x60 & (GPiece<16>)0xffffffff;
    uVar6 = storeVectorElementWordIndexed
                      (auVar31 | auVar31 << 0x20 | auVar31 << 0x40 | auVar31 << 0x60,0,param_3);
    *(undefined4 *)((uint)param_3 & 0xfffffffc) = uVar6;
    DAT_0096b2ef = DAT_0096b2ef | 2;
  }
  return;
}


// 0x0262730 (0x1ac8 bytes)
// inlined: FastAtan2 @0x262d84, FastAtan2 @0x262fb0, FastAtan2 @0x2631ec, FastAtan2 @0x263414, FastRSqrt @0x2635ec, FastAtan2 @0x263c30, FastAtan2 @0x263dfc
// strings: 0079c350: '@&ff=' (raw)

void M1379_UpdateFlight(MobyInstance *param_1,int param_2)

{
  bool bVar1;
  char cVar2;
  byte bVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  MOBY_OCLASSES MVar14;
  f32 fVar15;
  uint uVar16;
  uint uVar17;
  ulonglong *puVar18;
  Cuboid *pCVar19;
  float fVar20;
  float fVar21;
  CONTROLLER_INPUT CVar22;
  MobyInstance *pMVar23;
  ulonglong uVar24;
  int iVar27;
  longlong lVar25;
  longlong lVar26;
  int iVar30;
  ulonglong uVar28;
  float *pfVar31;
  longlong lVar29;
  longlong lVar32;
  ulonglong unaff_r24;
  ulonglong unaff_r25;
  ulonglong unaff_r26;
  ulonglong unaff_r27;
  ulonglong unaff_r28;
  ulonglong unaff_r29;
  ulonglong unaff_r30;
  ulonglong unaff_r31;
  ulonglong in_LR;
  longlong lVar33;
  double dVar34;
  undefined8 uVar35;
  undefined8 uVar36;
  double dVar37;
  double dVar38;
  double dVar39;
  double dVar40;
  double dVar41;
  ulonglong in_f20;
  ulonglong in_f21;
  ulonglong in_f22;
  undefined8 uVar42;
  ulonglong in_f23;
  double dVar43;
  ulonglong in_f24;
  ulonglong in_f25;
  double dVar44;
  ulonglong in_f26;
  ulonglong in_f27;
  double dVar45;
  ulonglong in_f28;
  double dVar46;
  ulonglong in_f29;
  double dVar47;
  ulonglong in_f30;
  double dVar48;
  double dVar49;
  ulonglong in_f31;
  double dVar50;
  double dVar51;
  float fVar52;
  
  uVar24 = ZEXT48(&stack0x00000000);
  lVar26 = uVar24 - 0x300;
  puVar18 = (ulonglong *)lVar26;
  *puVar18 = uVar24;
  puVar18[0x62] = in_LR;
  puVar18[0x54] = in_f20;
  puVar18[0x55] = in_f21;
  puVar18[0x56] = in_f22;
  puVar18[0x57] = in_f23;
  puVar18[0x58] = in_f24;
  puVar18[0x59] = in_f25;
  puVar18[0x5a] = in_f26;
  puVar18[0x5b] = in_f27;
  puVar18[0x5c] = in_f28;
  puVar18[0x5d] = in_f29;
  puVar18[0x5e] = in_f30;
  puVar18[0x5f] = in_f31;
  puVar18[0x53] = unaff_r31;
  puVar18[0x52] = unaff_r30;
  dVar43 = 0.0;
  *(undefined4 *)(puVar18 + 0x18) = 0;
  *(undefined4 *)((int)puVar18 + 0xc4) = 0;
  *(undefined4 *)(puVar18 + 0x19) = 0;
  *(undefined4 *)((int)puVar18 + 0xcc) = 0;
  uVar42 = 0x4020000000000000;
  cVar2 = param_1->setByGroup;
  fVar52 = g_FrameTime * 8.0 * DAT_0079c3b0;
  param_1->modeBits =
       param_1->modeBits &
       (MIRROR|CAN_BE_DAMAGED|HIDE_BACKFACES|CAN_BE_AUTO_TARGETED|DISABLE_Z_WRITE|DRAW_SHADOW|
        DRAW_TRANSPARENT_WEIRD|NO_DRAW|UNK_40|HAS_SPECIAL_VARS|HAS_GLOW|TRANSPARENT|NO_POST_UPDATE|
        NO_UPDATE|DISABLED);
  puVar18[0x51] = unaff_r29;
  puVar18[0x50] = unaff_r28;
  puVar18[0x4f] = unaff_r27;
  puVar18[0x4e] = unaff_r26;
  puVar18[0x4d] = unaff_r25;
  puVar18[0x4c] = unaff_r24;
  *(float *)(puVar18 + 0x19) = fVar52;
  fVar4 = DAT_0079c3b0;
  fVar52 = DAT_0079c308;
  if (cVar2 == '\0') {
    if (DAT_0079c310 < *(short *)(param_2 + 0x68)) {
      if ((g_Pad.repeat & 0x40) == 0) {
        if ((g_Pad.unk0b8 & 0x40) != 0) {
          iVar27 = *(int *)(param_2 + 0x10c);
          if (((iVar27 != -1) && (g_SoundChannels[iVar27].pMoby == param_1)) &&
             (g_SoundChannels[iVar27].state != '\0')) {
            sound_Kill(iVar27);
          }
          *(undefined4 *)(param_2 + 0x10c) = 0xffffffff;
        }
      }
      else {
        iVar27 = *(int *)(param_2 + 0x10c);
        if (((iVar27 != -1) && (g_SoundChannels[iVar27].pMoby == param_1)) &&
           (g_SoundChannels[iVar27].state != '\0')) {
          sound_Kill(iVar27);
        }
        *(undefined4 *)(param_2 + 0x10c) = 0xffffffff;
        iVar27 = PlayMobySound(1,4,param_1);
        *(int *)(param_2 + 0x10c) = iVar27;
      }
      if ((g_Pad.padDownButtons & 0x40) == 0) {
        fVar52 = *(float *)(param_2 + 100);
        if (DAT_0079c314 * DAT_0079c3b0 - DAT_0079c30c * DAT_0079c3b0 <= fVar52) {
          fVar4 = DAT_0079c314 * DAT_0079c3b0;
          if (fVar4 < fVar52) {
            fVar4 = (DAT_0079c314 * DAT_0079c3b0 - fVar52) * DAT_0079c320 + fVar52;
          }
        }
        else {
          fVar4 = DAT_0079c30c * DAT_0079c3b0 + fVar52;
        }
        *(float *)(param_2 + 100) = fVar4;
      }
      else {
        fVar52 = DAT_0079c31c * DAT_0079c3b0 + *(float *)(param_2 + 100);
        *(float *)(param_2 + 100) = fVar52;
        if (DAT_0079c318 * DAT_0079c3b0 < fVar52) {
          *(float *)(param_2 + 100) = DAT_0079c318 * DAT_0079c3b0;
        }
      }
    }
    else {
      *(short *)(param_2 + 0x68) = *(short *)(param_2 + 0x68) + 1;
      *(float *)(param_2 + 100) = fVar52 * fVar4 + *(float *)(param_2 + 100);
    }
  }
  else {
    *(undefined4 *)(param_2 + 100) = 0x38d1b717;
  }
  fVar5 = DAT_0096ba04;
  fVar6 = g_heroPadStick;
  fVar4 = DAT_0079c3d4;
  fVar52 = DAT_0079c3c4;
  if (DAT_0079c324 < *(short *)(param_2 + 0x68)) {
    CVar22 = g_Pad.downButtons & L3;
    *(float *)(puVar18 + 0x2a) = g_heroPadStick;
    *(float *)((int)puVar18 + 0x154) = fVar5;
    fVar9 = DAT_0079c3d8;
    fVar8 = DAT_0079c3c8;
    fVar7 = DAT_0079c33c;
    if (CVar22 != 0) {
      fVar5 = fVar5 / DAT_0079c334;
      fVar52 = DAT_0079c340 * (fVar6 / DAT_0079c338);
      *(float *)(puVar18 + 0x2a) = fVar6 / DAT_0079c338;
      *(float *)(puVar18 + 0x2a) = fVar52;
      *(float *)((int)puVar18 + 0x154) = fVar5;
      *(float *)((int)puVar18 + 0x154) = fVar7 * fVar5;
      fVar4 = fVar9;
      fVar52 = fVar8;
    }
    dVar50 = (double)fVar52;
    dVar48 = (double)fVar4;
    M1379_00262030(param_1,uVar24 - 0x1b0,uVar24 - 0x1ac);
    AccelDelt(*(float *)(puVar18 + 0x2a),DAT_0079c3bc,DAT_0079c3c0,(float)dVar50,
                        (float *)(param_2 + 0x6c),0x7a0000,(float *)(param_2 + 0x90));
    AccelDelt(*(float *)((int)puVar18 + 0x154),DAT_0079c3cc,DAT_0079c3d0,(float)dVar48,
                        (float *)(param_2 + 0x70),0x7a0000,(float *)(param_2 + 0x94));
    AccelDeltAng
              ((double)(*(float *)(param_2 + 0x6c) * DAT_0079c39c),(double)DAT_0079c3dc,
               (double)DAT_0079c3e0,(double)DAT_0079c3e4,param_2 + 0x30,&DAT_007a0000,param_2 + 0x98
              );
    dVar48 = (double)FastDiffRots
                               ((double)*(float *)(param_2 + 0x34),
                                (double)(*(float *)(param_2 + 0x70) * DAT_0079c334));
    *(float *)(param_2 + 0x34) = (float)dVar48;
    dVar48 = (double)FastDiffRots
                               ((double)*(float *)(param_2 + 0x38),
                                (double)(*(float *)(param_2 + 0x6c) * DAT_0079c338));
    *(float *)(param_2 + 0x38) = (float)dVar48;
    uVar16 = (int)*(uint *)(param_2 + 0x34) >> 0x1f;
    fVar15 = (param_1->rotation).y;
    uVar17 = (int)fVar15 >> 0x1f;
    iVar30 = (uVar16 >> 1 ^ *(uint *)(param_2 + 0x34)) - uVar16;
    iVar27 = (uVar17 >> 1 ^ (uint)fVar15) - uVar17;
    if (iVar30 < 0x3fb2b8c3) {
      if (iVar30 < -0x3fb2b8c2) {
        *(undefined4 *)(param_2 + 0x34) = 0xbfb2b8c2;
      }
    }
    else {
      *(undefined4 *)(param_2 + 0x34) = 0x3fb2b8c2;
    }
    if (iVar27 < 0x3fb2b8c3) {
      if (iVar27 < -0x3fb2b8c2) {
        (param_1->rotation).y = -1.3962634;
      }
    }
    else {
      (param_1->rotation).y = 1.3962634;
    }
  }
  fVar52 = 310.0;
  fVar4 = 500.0;
  fVar5 = DAT_0079c678;
  fVar6 = DAT_0079c674;
  fVar7 = DAT_0079c670;
  if (*(int *)(param_2 + 0x110) != -1) {
    pCVar19 = Cuboids + *(int *)(param_2 + 0x110);
    fVar52 = (pCVar19->matrix).v2.y;
    fVar6 = (pCVar19->matrix).v0.y + (pCVar19->matrix).v1.y;
    fVar4 = (pCVar19->matrix).v2.x;
    fVar7 = (pCVar19->matrix).v0.x + (pCVar19->matrix).v1.x;
    fVar5 = (pCVar19->matrix).v2.z;
    fVar8 = (pCVar19->matrix).v0.z + (pCVar19->matrix).v1.z;
    fVar52 = SQRT(fVar5 * fVar5 + fVar4 * fVar4 + fVar52 * fVar52);
    fVar4 = SQRT(fVar8 * fVar8 + fVar7 * fVar7 + fVar6 * fVar6);
    fVar5 = (pCVar19->pos).z;
    fVar6 = (pCVar19->pos).y;
    fVar7 = (pCVar19->pos).x;
  }
  dVar51 = (double)fVar52;
  dVar49 = (double)fVar4;
  dVar47 = (double)fVar7;
  dVar46 = (double)fVar6;
  dVar45 = (double)fVar5;
  dVar34 = (double)(param_1->pos).x;
  dVar37 = (double)(param_1->pos).y;
  dVar38 = (double)DAT_0079c670;
  dVar40 = ABS((double)(float)(dVar47 - dVar34));
  dVar39 = ABS((double)(float)(dVar46 - dVar37));
  *(float *)(puVar18 + 0x31) = (float)(dVar47 - dVar34);
  dVar48 = (double)DAT_0079c674;
  *(float *)((int)puVar18 + 0x18c) = (float)(dVar46 - dVar37);
  *(float *)(puVar18 + 0x32) = (float)(dVar40 - dVar39);
  dVar50 = (double)*(float *)(param_2 + 0x38);
  dVar44 = 0.7853981852531433;
  uVar28 = (ulonglong)(*(uint *)(puVar18 + 0x31) >> 0x1c) & 8 |
           (ulonglong)(*(uint *)(puVar18 + 0x32) >> 0x1e) & 2 |
           (ulonglong)(*(uint *)((int)puVar18 + 0x18c) >> 0x1d) & 4;
  dVar38 = (double)SQRT((float)(dVar34 - dVar38) * (float)(dVar34 - dVar38) +
                        (float)(dVar37 - dVar48) * (float)(dVar37 - dVar48));
  dVar48 = ABS((double)*(float *)(puVar18 + 0x31));
  if ((double)*(float *)(puVar18 + 0x32) - dVar43 < 0.0) {
    dVar48 = dVar39;
  }
  fVar52 = *(float *)(&g_atanQuadrantTable + (int)(uVar28 << 2));
  dVar39 = ABS((double)*(float *)((int)puVar18 + 0x18c));
  if ((double)*(float *)(puVar18 + 0x32) - dVar43 < 0.0) {
    dVar39 = dVar40;
  }
  fVar4 = *(float *)(((uint)(uVar28 << 2) | 0x735900) + 4);
  dVar40 = dVar43;
  if (dVar43 < dVar48) {
    lVar25 = uVar24 - 0x2f0;
    lVar29 = uVar24 - 0xcc;
    lVar32 = uVar24 - 0xbc;
    lVar33 = 2;
    fVar5 = (float)(dVar39 - dVar48) / (float)(dVar39 + dVar48);
    fVar6 = fVar5 * fVar5;
    *(float *)(puVar18 + 0x48) = fVar5;
    *(float *)(puVar18 + 0x47) = fVar5;
    *(float *)((int)puVar18 + 0x23c) = fVar5;
    *(float *)((int)puVar18 + 0x234) = fVar5;
    fVar5 = fVar6 * fVar6;
    *(float *)(puVar18 + 0x47) = *(float *)(puVar18 + 0x47) * fVar6;
    *(float *)((int)puVar18 + 0x23c) = *(float *)((int)puVar18 + 0x23c) * fVar5;
    *(float *)(puVar18 + 0x48) = *(float *)(puVar18 + 0x48) * fVar5 * fVar6;
    do {
      *(float *)((int)lVar25 + 0x234) = *(float *)((int)lVar25 + 0x224) * fVar5 * fVar5;
      iVar27 = (int)lVar29;
      lVar25 = lVar25 + 8;
      lVar29 = lVar29 + 8;
      *(float *)((int)lVar32 + 4) = *(float *)(iVar27 + 4) * fVar5 * fVar5;
      lVar32 = lVar32 + 8;
      lVar33 = lVar33 + -1;
    } while (lVar33 != 0);
    lVar33 = 4;
    lVar32 = uVar24 - 0xcc;
    pfVar31 = (float *)&DAT_007358e0;
    lVar25 = lVar26;
    lVar29 = lVar32;
    do {
      fVar5 = *pfVar31;
      fVar6 = pfVar31[1];
      pfVar31 = pfVar31 + 2;
      *(float *)((int)lVar25 + 0x234) = *(float *)((int)lVar25 + 0x234) * fVar5;
      lVar25 = lVar25 + 8;
      *(float *)((int)lVar29 + 4) = *(float *)((int)lVar29 + 4) * fVar6;
      lVar29 = lVar29 + 8;
      lVar33 = lVar33 + -1;
    } while (lVar33 != 0);
    lVar29 = 2;
    lVar25 = lVar26;
    dVar48 = dVar43;
    do {
      iVar27 = (int)lVar25;
      lVar25 = lVar25 + 0x10;
      iVar30 = (int)lVar32;
      lVar32 = lVar32 + 0x10;
      dVar48 = (double)((float)(dVar48 + (double)*(float *)(iVar27 + 0x234)) +
                        *(float *)(iVar30 + 4) + *(float *)(iVar30 + 8) + *(float *)(iVar30 + 0xc));
      lVar29 = lVar29 + -1;
    } while (lVar29 != 0);
    dVar40 = (double)((float)(dVar48 + 0.7853981852531433) * fVar52 + fVar4);
  }
  dVar48 = 50.0;
  if (50.0 < dVar38) {
    dVar34 = (double)((float)(dVar38 - 50.0) / (float)(dVar49 - 50.0));
    if (dVar34 - dVar43 < 0.0) {
      dVar34 = dVar43;
    }
    if (1.0 - dVar34 < 0.0) {
      dVar34 = 1.0;
    }
    fVar52 = (float)(dVar34 * dVar34) * (float)(dVar34 * dVar34);
    fVar52 = fVar52 * fVar52;
    dVar37 = (double)(fVar52 * fVar52);
    dVar34 = (double)FastDiffRots(dVar40,dVar50);
    dVar50 = (double)FastWrapRot((float)dVar50,(float)(dVar37 * dVar34));
    dVar34 = (double)(param_1->pos).x;
    dVar37 = (double)(param_1->pos).y;
  }
  *(float *)(param_2 + 0x38) = (float)dVar50;
  dVar41 = ABS((double)(float)(dVar46 - dVar37));
  dVar40 = ABS((double)(float)(dVar47 - dVar34));
  *(float *)((int)puVar18 + 0x17c) = (float)(dVar47 - dVar34);
  *(float *)(puVar18 + 0x30) = (float)(dVar46 - dVar37);
  dVar39 = (double)(param_1->rotation).z;
  *(float *)((int)puVar18 + 0x184) = (float)(dVar40 - dVar41);
  uVar28 = (ulonglong)(*(uint *)((int)puVar18 + 0x17c) >> 0x1c) & 8 |
           (ulonglong)(*(uint *)((int)puVar18 + 0x184) >> 0x1e) & 2 |
           (ulonglong)(*(uint *)(puVar18 + 0x30) >> 0x1d) & 4;
  dVar50 = ABS((double)*(float *)((int)puVar18 + 0x17c));
  if ((double)*(float *)((int)puVar18 + 0x184) - dVar43 < 0.0) {
    dVar50 = dVar41;
  }
  fVar52 = *(float *)(&g_atanQuadrantTable + (int)(uVar28 << 2));
  dVar41 = ABS((double)*(float *)(puVar18 + 0x30));
  if ((double)*(float *)((int)puVar18 + 0x184) - dVar43 < 0.0) {
    dVar41 = dVar40;
  }
  fVar4 = *(float *)(((uint)(uVar28 << 2) | 0x735900) + 4);
  dVar40 = dVar43;
  if (dVar43 < dVar50) {
    lVar25 = uVar24 - 0x2f0;
    lVar32 = uVar24 - 0xdc;
    lVar29 = uVar24 - 0xec;
    lVar33 = 2;
    fVar5 = (float)(dVar41 - dVar50) / (float)(dVar41 + dVar50);
    fVar6 = fVar5 * fVar5;
    *(float *)(puVar18 + 0x44) = fVar5;
    *(float *)(puVar18 + 0x43) = fVar5;
    *(float *)((int)puVar18 + 0x21c) = fVar5;
    *(float *)((int)puVar18 + 0x214) = fVar5;
    fVar5 = fVar6 * fVar6;
    *(float *)(puVar18 + 0x43) = *(float *)(puVar18 + 0x43) * fVar6;
    *(float *)((int)puVar18 + 0x21c) = *(float *)((int)puVar18 + 0x21c) * fVar5;
    *(float *)(puVar18 + 0x44) = *(float *)(puVar18 + 0x44) * fVar5 * fVar6;
    do {
      *(float *)((int)lVar25 + 0x214) = *(float *)((int)lVar25 + 0x204) * fVar5 * fVar5;
      iVar27 = (int)lVar29;
      lVar29 = lVar29 + 8;
      lVar25 = lVar25 + 8;
      *(float *)((int)lVar32 + 4) = *(float *)(iVar27 + 4) * fVar5 * fVar5;
      lVar32 = lVar32 + 8;
      lVar33 = lVar33 + -1;
    } while (lVar33 != 0);
    lVar33 = 4;
    lVar32 = uVar24 - 0xec;
    pfVar31 = (float *)&DAT_007358e0;
    lVar25 = lVar26;
    lVar29 = lVar32;
    do {
      fVar5 = *pfVar31;
      fVar6 = pfVar31[1];
      pfVar31 = pfVar31 + 2;
      *(float *)((int)lVar25 + 0x214) = *(float *)((int)lVar25 + 0x214) * fVar5;
      lVar25 = lVar25 + 8;
      *(float *)((int)lVar29 + 4) = *(float *)((int)lVar29 + 4) * fVar6;
      lVar29 = lVar29 + 8;
      lVar33 = lVar33 + -1;
    } while (lVar33 != 0);
    lVar29 = 2;
    lVar25 = lVar26;
    dVar50 = dVar43;
    do {
      iVar27 = (int)lVar25;
      iVar30 = (int)lVar32;
      lVar25 = lVar25 + 0x10;
      lVar32 = lVar32 + 0x10;
      dVar50 = (double)((float)(dVar50 + (double)*(float *)(iVar27 + 0x214)) +
                        *(float *)(iVar30 + 4) + *(float *)(iVar30 + 8) + *(float *)(iVar30 + 0xc));
      lVar29 = lVar29 + -1;
    } while (lVar29 != 0);
    dVar40 = (double)((float)(dVar50 + dVar44) * fVar52 + fVar4);
  }
  if (dVar48 < dVar38) {
    dVar50 = (double)((float)(dVar38 - dVar48) / (float)(dVar49 - dVar48));
    if (dVar50 - dVar43 < 0.0) {
      dVar50 = dVar43;
    }
    if (1.0 - dVar50 < 0.0) {
      dVar50 = 1.0;
    }
    fVar52 = (float)(dVar50 * dVar50) * (float)(dVar50 * dVar50);
    fVar52 = fVar52 * fVar52;
    dVar34 = (double)(fVar52 * fVar52);
    dVar50 = (double)FastDiffRots(dVar40,dVar39);
    dVar39 = (double)FastWrapRot((float)dVar39,(float)(dVar34 * dVar50));
    dVar34 = (double)(param_1->pos).x;
    dVar37 = (double)(param_1->pos).y;
  }
  dVar40 = (double)(param_1->pos).z;
  (param_1->rotation).z = (float)dVar39;
  dVar38 = (double)*(float *)(param_2 + 0x34);
  *(float *)((int)puVar18 + 0x174) = (float)(dVar45 - dVar40);
  fVar52 = SQRT((float)(dVar34 - dVar47) * (float)(dVar34 - dVar47) +
                (float)(dVar37 - dVar46) * (float)(dVar37 - dVar46));
  dVar39 = ABS((double)(float)(dVar45 - dVar40));
  dVar49 = ABS((double)fVar52);
  *(float *)(puVar18 + 0x2e) = fVar52;
  *(float *)(puVar18 + 0x2f) = (float)(dVar49 - dVar39);
  uVar28 = (ulonglong)(*(uint *)(puVar18 + 0x2e) >> 0x1c) & 8 |
           (ulonglong)(*(uint *)(puVar18 + 0x2f) >> 0x1e) & 2 |
           (ulonglong)(*(uint *)((int)puVar18 + 0x174) >> 0x1d) & 4;
  dVar50 = ABS((double)*(float *)(puVar18 + 0x2e));
  if ((double)*(float *)(puVar18 + 0x2f) - dVar43 < 0.0) {
    dVar50 = dVar39;
  }
  fVar4 = *(float *)(&g_atanQuadrantTable + (int)(uVar28 << 2));
  fVar52 = *(float *)(((uint)(uVar28 << 2) | 0x735900) + 4);
  dVar41 = ABS((double)*(float *)((int)puVar18 + 0x174));
  if ((double)*(float *)(puVar18 + 0x2f) - dVar43 < 0.0) {
    dVar41 = dVar49;
  }
  dVar49 = dVar43;
  if (dVar43 < dVar50) {
    lVar25 = uVar24 - 0x2f0;
    lVar29 = uVar24 - 0x10c;
    lVar32 = uVar24 - 0xfc;
    lVar33 = 2;
    fVar5 = (float)(dVar41 - dVar50) / (float)(dVar41 + dVar50);
    fVar6 = fVar5 * fVar5;
    *(float *)(puVar18 + 0x40) = fVar5;
    *(float *)(puVar18 + 0x3f) = fVar5;
    *(float *)((int)puVar18 + 0x1fc) = fVar5;
    *(float *)((int)puVar18 + 500) = fVar5;
    fVar5 = fVar6 * fVar6;
    *(float *)(puVar18 + 0x3f) = *(float *)(puVar18 + 0x3f) * fVar6;
    *(float *)((int)puVar18 + 0x1fc) = *(float *)((int)puVar18 + 0x1fc) * fVar5;
    *(float *)(puVar18 + 0x40) = *(float *)(puVar18 + 0x40) * fVar5 * fVar6;
    do {
      *(float *)((int)lVar25 + 500) = *(float *)((int)lVar25 + 0x1e4) * fVar5 * fVar5;
      iVar27 = (int)lVar29;
      lVar25 = lVar25 + 8;
      lVar29 = lVar29 + 8;
      *(float *)((int)lVar32 + 4) = *(float *)(iVar27 + 4) * fVar5 * fVar5;
      lVar32 = lVar32 + 8;
      lVar33 = lVar33 + -1;
    } while (lVar33 != 0);
    lVar33 = 4;
    lVar32 = uVar24 - 0x10c;
    pfVar31 = (float *)&DAT_007358e0;
    lVar25 = lVar26;
    lVar29 = lVar32;
    do {
      fVar5 = *pfVar31;
      fVar6 = pfVar31[1];
      pfVar31 = pfVar31 + 2;
      *(float *)((int)lVar25 + 500) = *(float *)((int)lVar25 + 500) * fVar5;
      lVar25 = lVar25 + 8;
      *(float *)((int)lVar29 + 4) = *(float *)((int)lVar29 + 4) * fVar6;
      lVar29 = lVar29 + 8;
      lVar33 = lVar33 + -1;
    } while (lVar33 != 0);
    lVar29 = 2;
    lVar25 = lVar26;
    dVar50 = dVar43;
    do {
      iVar27 = (int)lVar25;
      lVar25 = lVar25 + 0x10;
      iVar30 = (int)lVar32;
      lVar32 = lVar32 + 0x10;
      dVar50 = (double)((float)(dVar50 + (double)*(float *)(iVar27 + 500)) + *(float *)(iVar30 + 4)
                        + *(float *)(iVar30 + 8) + *(float *)(iVar30 + 0xc));
      lVar29 = lVar29 + -1;
    } while (lVar29 != 0);
    dVar49 = (double)((float)(dVar50 + dVar44) * fVar4 + fVar52);
  }
  if (dVar48 < dVar39) {
    dVar50 = (double)((float)(dVar39 - dVar48) / (float)(dVar51 - dVar48));
    if (dVar50 - dVar43 < 0.0) {
      dVar50 = dVar43;
    }
    if (1.0 - dVar50 < 0.0) {
      dVar50 = 1.0;
    }
    fVar52 = (float)(dVar50 * dVar50) * (float)(dVar50 * dVar50);
    fVar52 = fVar52 * fVar52;
    dVar34 = (double)(fVar52 * fVar52);
    dVar50 = (double)FastDiffRots(-dVar49,dVar38);
    dVar38 = (double)FastWrapRot((float)dVar38,(float)(dVar34 * dVar50));
    dVar40 = (double)(param_1->pos).z;
    dVar34 = (double)(param_1->pos).x;
    dVar37 = (double)(param_1->pos).y;
  }
  fVar52 = SQRT((float)(dVar34 - dVar47) * (float)(dVar34 - dVar47) +
                (float)(dVar37 - dVar46) * (float)(dVar37 - dVar46));
  *(float *)(puVar18 + 0x2d) = (float)(dVar45 - dVar40);
  *(float *)(param_2 + 0x34) = (float)dVar38;
  dVar37 = (double)(param_1->rotation).y;
  dVar34 = ABS((double)(float)(dVar45 - dVar40));
  dVar39 = ABS((double)fVar52);
  *(float *)((int)puVar18 + 0x164) = fVar52;
  *(float *)((int)puVar18 + 0x16c) = (float)(dVar39 - dVar34);
  uVar28 = (ulonglong)(*(uint *)((int)puVar18 + 0x164) >> 0x1c) & 8 |
           (ulonglong)(*(uint *)((int)puVar18 + 0x16c) >> 0x1e) & 2 |
           (ulonglong)(*(uint *)(puVar18 + 0x2d) >> 0x1d) & 4;
  dVar50 = ABS((double)*(float *)((int)puVar18 + 0x164));
  if ((double)*(float *)((int)puVar18 + 0x16c) - dVar43 < 0.0) {
    dVar50 = dVar34;
  }
  fVar52 = *(float *)(&g_atanQuadrantTable + (int)(uVar28 << 2));
  dVar40 = ABS((double)*(float *)(puVar18 + 0x2d));
  if ((double)*(float *)((int)puVar18 + 0x16c) - dVar43 < 0.0) {
    dVar40 = dVar39;
  }
  fVar4 = *(float *)(((uint)(uVar28 << 2) | 0x735900) + 4);
  dVar39 = dVar43;
  if (dVar43 < dVar50) {
    lVar25 = uVar24 - 0x2f0;
    lVar29 = uVar24 - 300;
    lVar32 = uVar24 - 0x11c;
    lVar33 = 2;
    fVar5 = (float)(dVar40 - dVar50) / (float)(dVar40 + dVar50);
    fVar6 = fVar5 * fVar5;
    *(float *)(puVar18 + 0x3c) = fVar5;
    *(float *)(puVar18 + 0x3b) = fVar5;
    *(float *)((int)puVar18 + 0x1dc) = fVar5;
    *(float *)((int)puVar18 + 0x1d4) = fVar5;
    fVar5 = fVar6 * fVar6;
    *(float *)(puVar18 + 0x3b) = *(float *)(puVar18 + 0x3b) * fVar6;
    *(float *)((int)puVar18 + 0x1dc) = *(float *)((int)puVar18 + 0x1dc) * fVar5;
    *(float *)(puVar18 + 0x3c) = *(float *)(puVar18 + 0x3c) * fVar5 * fVar6;
    do {
      *(float *)((int)lVar25 + 0x1d4) = *(float *)((int)lVar25 + 0x1c4) * fVar5 * fVar5;
      iVar27 = (int)lVar29;
      lVar25 = lVar25 + 8;
      lVar29 = lVar29 + 8;
      *(float *)((int)lVar32 + 4) = *(float *)(iVar27 + 4) * fVar5 * fVar5;
      lVar32 = lVar32 + 8;
      lVar33 = lVar33 + -1;
    } while (lVar33 != 0);
    lVar33 = 4;
    lVar32 = uVar24 - 300;
    pfVar31 = (float *)&DAT_007358e0;
    lVar25 = lVar26;
    lVar29 = lVar32;
    do {
      fVar5 = *pfVar31;
      fVar6 = pfVar31[1];
      pfVar31 = pfVar31 + 2;
      *(float *)((int)lVar25 + 0x1d4) = *(float *)((int)lVar25 + 0x1d4) * fVar5;
      lVar25 = lVar25 + 8;
      *(float *)((int)lVar29 + 4) = *(float *)((int)lVar29 + 4) * fVar6;
      lVar29 = lVar29 + 8;
      lVar33 = lVar33 + -1;
    } while (lVar33 != 0);
    lVar29 = 2;
    lVar25 = lVar26;
    dVar50 = dVar43;
    do {
      iVar27 = (int)lVar25;
      lVar25 = lVar25 + 0x10;
      iVar30 = (int)lVar32;
      lVar32 = lVar32 + 0x10;
      dVar50 = (double)((float)(dVar50 + (double)*(float *)(iVar27 + 0x1d4)) +
                        *(float *)(iVar30 + 4) + *(float *)(iVar30 + 8) + *(float *)(iVar30 + 0xc));
      lVar29 = lVar29 + -1;
    } while (lVar29 != 0);
    dVar39 = (double)((float)(dVar50 + dVar44) * fVar52 + fVar4);
  }
  if (dVar48 < dVar34) {
    dVar50 = (double)((float)(dVar34 - dVar48) / (float)(dVar51 - dVar48));
    if (dVar50 - dVar43 < 0.0) {
      dVar50 = dVar43;
    }
    if (1.0 - dVar50 < 0.0) {
      dVar50 = 1.0;
    }
    fVar52 = (float)(dVar50 * dVar50) * (float)(dVar50 * dVar50);
    fVar52 = fVar52 * fVar52;
    dVar34 = (double)(fVar52 * fVar52);
    dVar50 = (double)FastDiffRots(-dVar39,dVar37);
    dVar37 = (double)FastWrapRot((float)dVar37,(float)(dVar34 * dVar50));
    dVar38 = (double)*(float *)(param_2 + 0x34);
  }
  (param_1->rotation).y = (float)dVar37;
  MB_SphericalToVector
            (*(float *)(param_2 + 100),*(float *)(param_2 + 0x38),(float)-dVar38,
             (float *)(puVar18 + 0x1a));
  fVar52 = *(float *)((int)puVar18 + 0xd4);
  fVar4 = *(float *)(puVar18 + 0x1a);
  fVar5 = *(float *)(puVar18 + 0x1b);
  fVar6 = *(float *)(param_2 + 100);
  fVar7 = *(float *)(param_2 + 0x70);
  fVar8 = *(float *)(param_2 + 0x6c);
  fVar9 = (param_1->pos).x;
  fVar10 = (param_1->pos).y;
  fVar11 = (param_1->pos).z;
  cVar2 = param_1->setByGroup;
  bVar3 = *(byte *)(param_2 + 0x60);
  fVar20 = fVar5 * fVar5 + fVar4 * fVar4 + fVar52 * fVar52;
  if ((double)SQRT(fVar20) == dVar43) {
    uVar12 = *(undefined4 *)((int)puVar18 + 0xdc);
    dVar50 = dVar43;
    dVar34 = dVar43;
    dVar37 = dVar43;
  }
  else {
    fVar21 = 1.0 / SQRT(fVar20);
    uVar12 = *(undefined4 *)((int)puVar18 + 0xdc);
    fVar21 = -(fVar20 * fVar21 * fVar21 - 1.0) * fVar21 * 0.5 + fVar21;
    fVar21 = -(fVar20 * fVar21 * fVar21 - 1.0) * fVar21 * 0.5 + fVar21;
    fVar21 = -(fVar20 * fVar21 * fVar21 - 1.0) * fVar21 * 0.5 + fVar21;
    dVar37 = (double)(fVar4 * fVar21);
    dVar34 = (double)(fVar52 * fVar21);
    dVar50 = (double)(fVar5 * fVar21);
  }
  *(float *)(param_2 + 0x10) = (float)dVar37;
  *(float *)(param_2 + 0x14) = (float)dVar34;
  *(float *)(param_2 + 0x18) = (float)dVar50;
  *(undefined4 *)(param_2 + 0x1c) = uVar12;
  if (cVar2 == '\0') {
    (param_1->pos).x = fVar9 + fVar4;
    (param_1->pos).y = fVar10 + fVar52;
    (param_1->pos).z = fVar11 + fVar5;
  }
  dVar50 = (double)(fVar6 - DAT_0079c314);
  fVar52 = DAT_0079c318 - DAT_0079c314;
  *(undefined4 *)((int)puVar18 + 0x10c) = 0;
  *(undefined4 *)((int)puVar18 + 0x114) = 0;
  *(undefined4 *)((int)puVar18 + 0x11c) = 0;
  if (dVar50 - dVar43 < 0.0) {
    dVar50 = dVar43;
  }
  fVar52 = (float)(dVar50 / (double)fVar52);
  dVar38 = (double)fVar52;
  *(float *)(param_2 + 0xc4) = fVar52;
  fVar9 = DAT_0079c424;
  fVar52 = fVar8 * DAT_0079c3a0 * DAT_0079c3ac;
  fVar4 = DAT_0079c350 * DAT_0079c3ac;
  fVar5 = (fVar7 * DAT_0079c44c + DAT_0079c348) * DAT_0079c3ac;
  fVar6 = -(float)((double)DAT_0079c450 * dVar38 - -(double)(fVar7 * DAT_0079c448 - DAT_0079c344)) *
          DAT_0079c3ac;
  *(float *)(puVar18 + 0x22) = DAT_0079c34c * DAT_0079c3ac;
  *(float *)((int)puVar18 + 0x104) = fVar52;
  *(float *)(puVar18 + 0x21) = fVar5;
  *(float *)(puVar18 + 0x23) = fVar4;
  *(float *)(puVar18 + 0x20) = fVar6;
  AccelDelt(*(float *)(puVar18 + (uint)bVar3 * 2 + 0x20),fVar9,DAT_0079c428,DAT_0079c42c,
                      (float *)(param_2 + 0xb4),0x7a0000,(float *)(param_2 + 200));
  AccelDelt(*(float *)((int)puVar18 + (uint)*(byte *)(param_2 + 0x60) * 0x10 + 0x104),
                      DAT_0079c430,DAT_0079c434,DAT_0079c438,(float *)(param_2 + 0xb8),0x7a0000,
                      (float *)(param_2 + 0xcc));
  fVar52 = AccelDelt(*(float *)(puVar18 + (uint)*(byte *)(param_2 + 0x60) * 2 + 0x21),
                               DAT_0079c43c,DAT_0079c440,DAT_0079c444,(float *)(param_2 + 0xbc),
                               0x7a0000,(float *)(param_2 + 0xd0));
  dVar37 = (double)*(float *)(param_2 + 0xb4);
  dVar34 = (double)*(float *)(param_2 + 0xb8);
  dVar50 = (double)*(float *)(param_2 + 0xbc);
  FastEulerToMtx((double)fVar52,uVar24 - 0x1e0,param_2 + 0x30);
  fVar52 = (param_1->pos).x;
  fVar4 = (param_1->pos).y;
  fVar5 = (param_1->pos).z;
  *(f32 *)((int)puVar18 + 0xfc) = (param_1->pos).w;
  *(float *)(puVar18 + 0x1e) =
       fVar52 + (float)((double)*(float *)(puVar18 + 0x28) * dVar50 +
                       (double)(float)((double)*(float *)(puVar18 + 0x24) * dVar37 +
                                      (double)(float)((double)*(float *)(puVar18 + 0x26) * dVar34)))
  ;
  *(float *)((int)puVar18 + 0xf4) =
       fVar4 + (float)((double)*(float *)((int)puVar18 + 0x144) * dVar50 +
                      (double)(float)((double)*(float *)((int)puVar18 + 0x124) * dVar37 +
                                     (double)(float)((double)*(float *)((int)puVar18 + 0x134) *
                                                    dVar34)));
  *(float *)(puVar18 + 0x1f) =
       fVar5 + (float)((double)*(float *)(puVar18 + 0x29) * dVar50 +
                      (double)(float)((double)*(float *)(puVar18 + 0x25) * dVar37 +
                                     (double)(float)((double)*(float *)(puVar18 + 0x27) * dVar34)));
  Camera_SetMobyDrivenTargetPos((float *)(puVar18 + 0x1e));
  uVar35 = FastWrapRot
                     (*(float *)(param_2 + 0x30) * DAT_0079c358,
                      *(float *)(param_2 + 0x6c) * DAT_0079c354);
  uVar36 = FastWrapRot(*(float *)(param_2 + 0x34),DAT_0079c35c);
  uVar36 = FastDiffRots(uVar36,(double)(*(float *)(param_2 + 0x70) * DAT_0079c334));
  dVar50 = (double)*(float *)(param_2 + 0x38);
  AccelDeltAng
            (uVar35,(double)DAT_0079c400,(double)DAT_0079c404,(double)DAT_0079c408,param_2 + 0x20,
             &DAT_007a0000,param_2 + 0xa0);
  AccelDeltAng
            (uVar36,(double)DAT_0079c40c,(double)DAT_0079c410,(double)DAT_0079c414,param_2 + 0x24,
             &DAT_007a0000,param_2 + 0xa4);
  AccelDeltAng
            (dVar50,(double)DAT_0079c418,(double)DAT_0079c41c,(double)DAT_0079c420,param_2 + 0x28,
             &DAT_007a0000,param_2 + 0xa8);
  uVar12 = *(undefined4 *)(param_2 + 0x28);
  *(undefined4 *)(puVar18 + 0x1c) = *(undefined4 *)(param_2 + 0x20);
  uVar13 = *(undefined4 *)(param_2 + 0x24);
  *(undefined4 *)(puVar18 + 0x1d) = uVar12;
  *(undefined4 *)((int)puVar18 + 0xe4) = uVar13;
  Camera_SetMobyDrivenTargetRot((float *)(puVar18 + 0x1c));
  AccelDelt((float)((double)(float)((double)DAT_0079c458 - (double)DAT_0079c454) * dVar38
                             + (double)DAT_0079c454),DAT_0079c45c,DAT_0079c460,DAT_0079c464,
                      (float *)(param_2 + 0xb0),0x7a0000,(float *)(param_2 + 0xc0));
  fVar52 = *(float *)(param_2 + 0xb0) * 0.5;
  fVar5 = fVar52 + 1.5707963;
  fVar4 = 3.1415925 - fVar52;
  if (fVar52 - (3.1415925 - fVar52) < 0.0) {
    fVar4 = fVar52;
  }
  fVar6 = 3.1415925 - fVar5;
  if (fVar5 - (3.1415925 - fVar5) < 0.0) {
    fVar6 = fVar5;
  }
  fVar7 = -3.1415925 - fVar52;
  if ((-3.1415925 - fVar52) - fVar4 < 0.0) {
    fVar7 = fVar4;
  }
  fVar4 = fVar7 * fVar7;
  fVar52 = -3.1415925 - fVar5;
  if ((-3.1415925 - fVar5) - fVar6 < 0.0) {
    fVar52 = fVar6;
  }
  fVar5 = fVar52 * fVar52;
  fVar6 = fVar4 * fVar4 * fVar7;
  fVar8 = fVar4 * fVar6;
  fVar9 = fVar5 * fVar5 * fVar52;
  fVar10 = fVar5 * fVar9;
  g_ViewContext.xratio =
       (fVar4 * fVar8 * 2.601887e-06 +
       fVar8 * -0.0001980741 + fVar6 * 0.0083330255 + fVar4 * fVar7 * -0.16666657 + fVar7) /
       (fVar5 * fVar10 * 2.601887e-06 +
       fVar10 * -0.0001980741 + fVar9 * 0.0083330255 + fVar5 * fVar52 * -0.16666657 + fVar52);
  UpdateViewContext();
  dVar50 = (double)FastWrapRot
                             (*(float *)(param_2 + 0x30),*(float *)(param_2 + 0x6c) * DAT_0079c470);
  (param_1->rotation).x = (float)dVar50;
  dVar50 = (double)FastWrapRot
                             (*(float *)(param_2 + 0x34),
                              -(*(float *)(param_2 + 0x70) * DAT_0079c474));
  (param_1->rotation).y = (float)dVar50;
  dVar50 = (double)FastWrapRot
                             (*(float *)(param_2 + 0x38),
                              -(*(float *)(param_2 + 0x6c) * DAT_00fa3f2c));
  (param_1->rotation).z = (float)dVar50;
  iVar27 = CollSphere(0x3ff3333340000000,&param_1->pos);
  if ((iVar27 != 0) &&
     ((g_CollOutput.pMoby == (MobyInstance *)0x0 ||
      (((MVar14 = (g_CollOutput.pMoby)->oClass, MVar14 != 0x192 && MVar14 != RATCHET &&
        (MVar14 != AMMOCRATE_04C2)) &&
       ((MVar14 != 0x4c3 && ((MVar14 != ROCKET_0052 && (MVar14 != MINE_0053)))))))))) {
    (param_1->pos).x = g_CollOutput.push.x;
    (param_1->pos).y = g_CollOutput.push.y;
    (param_1->pos).z = g_CollOutput.push.z;
    (param_1->pos).w = g_CollOutput.push.w;
    FastVecNormalize(uVar24 - 0x230,uVar24 - 0x230,0xa10980);
    dVar37 = ABS((double)*(float *)(puVar18 + 0x1a));
    dVar50 = ABS((double)*(float *)((int)puVar18 + 0xd4));
    dVar38 = (double)*(float *)(param_2 + 0x38);
    *(float *)(puVar18 + 0x2c) = (float)(dVar37 - dVar50);
    uVar28 = (ulonglong)(*(uint *)(puVar18 + 0x1a) >> 0x1c) & 8 |
             (ulonglong)(*(uint *)(puVar18 + 0x2c) >> 0x1e) & 2 |
             (ulonglong)(*(uint *)((int)puVar18 + 0xd4) >> 0x1d) & 4;
    dVar34 = dVar37;
    if ((double)*(float *)(puVar18 + 0x2c) - dVar43 < 0.0) {
      dVar34 = dVar50;
    }
    fVar52 = *(float *)(&g_atanQuadrantTable + (int)(uVar28 << 2));
    if ((double)*(float *)(puVar18 + 0x2c) - dVar43 < 0.0) {
      dVar50 = dVar37;
    }
    fVar4 = *(float *)(((uint)(uVar28 << 2) | 0x735900) + 4);
    dVar37 = dVar43;
    if (dVar43 < dVar34) {
      lVar25 = uVar24 - 0x2f0;
      lVar32 = uVar24 - 0x13c;
      lVar29 = uVar24 - 0x14c;
      lVar33 = 2;
      fVar5 = (float)(dVar50 - dVar34) / (float)(dVar50 + dVar34);
      fVar6 = fVar5 * fVar5;
      *(float *)(puVar18 + 0x38) = fVar5;
      *(float *)(puVar18 + 0x37) = fVar5;
      *(float *)((int)puVar18 + 0x1bc) = fVar5;
      *(float *)((int)puVar18 + 0x1b4) = fVar5;
      fVar5 = fVar6 * fVar6;
      *(float *)(puVar18 + 0x37) = *(float *)(puVar18 + 0x37) * fVar6;
      *(float *)((int)puVar18 + 0x1bc) = *(float *)((int)puVar18 + 0x1bc) * fVar5;
      *(float *)(puVar18 + 0x38) = *(float *)(puVar18 + 0x38) * fVar5 * fVar6;
      do {
        *(float *)((int)lVar25 + 0x1b4) = *(float *)((int)lVar25 + 0x1a4) * fVar5 * fVar5;
        iVar27 = (int)lVar29;
        lVar29 = lVar29 + 8;
        lVar25 = lVar25 + 8;
        *(float *)((int)lVar32 + 4) = *(float *)(iVar27 + 4) * fVar5 * fVar5;
        lVar32 = lVar32 + 8;
        lVar33 = lVar33 + -1;
      } while (lVar33 != 0);
      lVar33 = 4;
      lVar32 = uVar24 - 0x14c;
      pfVar31 = (float *)&DAT_007358e0;
      lVar25 = lVar26;
      lVar29 = lVar32;
      do {
        fVar5 = *pfVar31;
        fVar6 = pfVar31[1];
        pfVar31 = pfVar31 + 2;
        *(float *)((int)lVar25 + 0x1b4) = *(float *)((int)lVar25 + 0x1b4) * fVar5;
        lVar25 = lVar25 + 8;
        *(float *)((int)lVar29 + 4) = *(float *)((int)lVar29 + 4) * fVar6;
        lVar29 = lVar29 + 8;
        lVar33 = lVar33 + -1;
      } while (lVar33 != 0);
      lVar29 = 2;
      lVar25 = lVar26;
      dVar50 = dVar43;
      do {
        iVar27 = (int)lVar25;
        iVar30 = (int)lVar32;
        lVar25 = lVar25 + 0x10;
        lVar32 = lVar32 + 0x10;
        dVar50 = (double)((float)(dVar50 + (double)*(float *)(iVar27 + 0x1b4)) +
                          *(float *)(iVar30 + 4) + *(float *)(iVar30 + 8) + *(float *)(iVar30 + 0xc)
                         );
        lVar29 = lVar29 + -1;
      } while (lVar29 != 0);
      dVar37 = (double)((float)(dVar50 + dVar44) * fVar52 + fVar4);
    }
    dVar50 = (double)FastDiffRots(dVar37,dVar38);
    dVar50 = (double)FastWrapRot((float)dVar38,(float)(dVar50 * (double)DAT_0079c328));
    fVar52 = *(float *)((int)puVar18 + 0xd4);
    fVar4 = *(float *)(puVar18 + 0x1a);
    *(float *)(param_2 + 0x38) = (float)dVar50;
    dVar38 = (double)*(float *)(param_2 + 0x34);
    dVar50 = ABS((double)*(float *)(puVar18 + 0x1b));
    fVar52 = SQRT(fVar4 * fVar4 + fVar52 * fVar52);
    dVar37 = ABS((double)fVar52);
    *(float *)(puVar18 + 0x2b) = fVar52;
    *(float *)((int)puVar18 + 0x15c) = (float)(dVar37 - dVar50);
    uVar28 = (ulonglong)(*(uint *)(puVar18 + 0x2b) >> 0x1c) & 8 |
             (ulonglong)(*(uint *)((int)puVar18 + 0x15c) >> 0x1e) & 2 |
             (ulonglong)(*(uint *)(puVar18 + 0x1b) >> 0x1d) & 4;
    dVar34 = ABS((double)*(float *)(puVar18 + 0x2b));
    if ((double)*(float *)((int)puVar18 + 0x15c) - dVar43 < 0.0) {
      dVar34 = dVar50;
    }
    fVar4 = *(float *)(&g_atanQuadrantTable + (int)(uVar28 << 2));
    fVar52 = *(float *)(((uint)(uVar28 << 2) | 0x735900) + 4);
    if ((double)*(float *)((int)puVar18 + 0x15c) - dVar43 < 0.0) {
      dVar50 = dVar37;
    }
    dVar37 = dVar43;
    if (dVar43 < dVar34) {
      lVar25 = uVar24 - 0x2f0;
      lVar29 = uVar24 - 0x16c;
      lVar32 = uVar24 - 0x15c;
      lVar33 = 2;
      fVar5 = (float)(dVar50 - dVar34) / (float)(dVar50 + dVar34);
      fVar6 = fVar5 * fVar5;
      *(float *)(puVar18 + 0x34) = fVar5;
      *(float *)(puVar18 + 0x33) = fVar5;
      *(float *)((int)puVar18 + 0x19c) = fVar5;
      *(float *)((int)puVar18 + 0x194) = fVar5;
      fVar5 = fVar6 * fVar6;
      *(float *)(puVar18 + 0x33) = *(float *)(puVar18 + 0x33) * fVar6;
      *(float *)((int)puVar18 + 0x19c) = *(float *)((int)puVar18 + 0x19c) * fVar5;
      *(float *)(puVar18 + 0x34) = *(float *)(puVar18 + 0x34) * fVar5 * fVar6;
      do {
        *(float *)((int)lVar25 + 0x194) = *(float *)((int)lVar25 + 0x184) * fVar5 * fVar5;
        iVar27 = (int)lVar29;
        lVar25 = lVar25 + 8;
        lVar29 = lVar29 + 8;
        *(float *)((int)lVar32 + 4) = *(float *)(iVar27 + 4) * fVar5 * fVar5;
        lVar32 = lVar32 + 8;
        lVar33 = lVar33 + -1;
      } while (lVar33 != 0);
      lVar33 = 4;
      lVar32 = uVar24 - 0x16c;
      pfVar31 = (float *)&DAT_007358e0;
      lVar25 = lVar26;
      lVar29 = lVar32;
      do {
        fVar5 = *pfVar31;
        fVar6 = pfVar31[1];
        pfVar31 = pfVar31 + 2;
        *(float *)((int)lVar25 + 0x194) = *(float *)((int)lVar25 + 0x194) * fVar5;
        lVar25 = lVar25 + 8;
        *(float *)((int)lVar29 + 4) = *(float *)((int)lVar29 + 4) * fVar6;
        lVar29 = lVar29 + 8;
        lVar33 = lVar33 + -1;
      } while (lVar33 != 0);
      lVar25 = 2;
      dVar50 = dVar43;
      do {
        iVar27 = (int)lVar26;
        lVar26 = lVar26 + 0x10;
        iVar30 = (int)lVar32;
        lVar32 = lVar32 + 0x10;
        dVar50 = (double)((float)(dVar50 + (double)*(float *)(iVar27 + 0x194)) +
                          *(float *)(iVar30 + 4) + *(float *)(iVar30 + 8) + *(float *)(iVar30 + 0xc)
                         );
        lVar25 = lVar25 + -1;
      } while (lVar25 != 0);
      dVar37 = (double)((float)(dVar50 + dVar44) * fVar4 + fVar52);
    }
    dVar50 = (double)FastDiffRots(-dVar37,dVar38);
    dVar50 = (double)FastWrapRot((float)dVar38,(float)(dVar50 * (double)DAT_0079c32c));
    *(float *)(param_2 + 0x34) = (float)dVar50;
    pMVar23 = g_CollOutput.pMoby;
    bVar1 = g_CollOutput.pMoby == (MobyInstance *)0x0;
    *(float *)(param_2 + 100) = *(float *)(param_2 + 100) * DAT_0079c36c;
    if ((bVar1) || (pMVar23->oClass == DREKS_FLEET_TURRET)) {
      DAT_0096b2dc = 0.0;
      puVar18[0x12] = 0xffffffffffffffff;
      puVar18[0x14] = 1;
      puVar18[0x15] = 1;
      puVar18[0x16] = 0xffffffffffffffff;
      puVar18[0x17] = 0;
      MB_genericExplosion
                (uVar42,0x4059000000000000,0x4030000000000000,uVar42,0x4022000000000000,
                 0x3ff0000000000000,dVar48,param_1,uVar24 - 0x240,0,0,&DAT_002626d0,0x1e,10,0x18);
      *(short *)(param_2 + 0x62) = (short)DAT_0079c488;
      param_1->state = '\a';
      param_1->modeBits = param_1->modeBits | (UNK_40|DISABLED);
    }
    else if (*(int *)(param_2 + 0xdc) == 0) {
      DAT_0096b2dc = DAT_0096b2dc - DAT_0079c370;
      if ((double)DAT_0096b2dc < dVar43) {
        FastVecNormalize(uVar24 - 0x240,uVar24 - 0x230,0xa10980);
        fVar52 = g_FrameTime;
        fVar4 = *(float *)((int)puVar18 + 0xc4);
        fVar5 = *(float *)(puVar18 + 0x18);
        fVar6 = *(float *)(puVar18 + 0x19);
        dVar34 = (double)SQRT(fVar6 * fVar6 + fVar5 * fVar5 + fVar4 * fVar4);
        puVar18[0x12] = 0xffffffffffffffff;
        puVar18[0x14] = 1;
        puVar18[0x15] = 1;
        puVar18[0x16] = 0xffffffffffffffff;
        puVar18[0x17] = 0;
        fVar52 = (float)((double)(fVar52 * 2.0) / dVar34);
        dVar50 = dVar43;
        if (dVar43 - dVar34 < 0.0) {
          dVar50 = (double)(fVar5 * fVar52);
        }
        dVar37 = dVar43;
        if (dVar43 - dVar34 < 0.0) {
          dVar37 = (double)(fVar4 * fVar52);
        }
        dVar38 = dVar43;
        if (dVar43 - dVar34 < 0.0) {
          dVar38 = (double)(fVar6 * fVar52);
        }
        if (dVar34 - dVar43 < 0.0) {
          dVar50 = (double)(fVar5 * fVar52);
        }
        if (dVar34 - dVar43 < 0.0) {
          dVar37 = (double)(fVar4 * fVar52);
        }
        if (dVar34 - dVar43 < 0.0) {
          dVar38 = (double)(fVar6 * fVar52);
        }
        *(float *)(puVar18 + 0x18) = (float)dVar50;
        *(float *)((int)puVar18 + 0xc4) = (float)dVar37;
        *(float *)(puVar18 + 0x19) = (float)dVar38;
        MB_genericExplosion
                  (uVar42,0x4059000000000000,0x4030000000000000,uVar42,0x4022000000000000,
                   0x3ff0000000000000,dVar48,param_1,uVar24 - 0x240,0,&DAT_002626d0,1,0x1e,10,0x18);
        param_1->state = '\a';
      }
      *(undefined4 *)(param_2 + 0xdc) = DAT_0079c46c;
    }
  }
  RegisterFuncForMoby(&PTR_M1379_Hud_Draw_0070a1b8,param_1);
  M1379_UpdateMissiles(param_1,param_2);
  uVar42 = FastWrapRot
                     (*(float *)(param_2 + 0x28),-(*(float *)(param_2 + 0x6c) * 0.14285715));
  dVar43 = (double)FastWrapRot
                             (*(float *)(param_2 + 0x24),
                              *(float *)(param_2 + 0x70) * -0.14285715 - 0.1);
  M1379_UpdateGunsMissiles(uVar42,-dVar43,param_1,param_2);
  return;
}


// 0x0264238 (0x17d8 bytes)
// inlined: FastAtan2 @0x2644c8, FastAtan2 @0x2646a0, FastAtan2 @0x264b04
// strings: 00655578: 'no final place for jet during victory, so use init pos\n' | 006555b0: 'no final place for hero during victory, so just fall\n'

/* Moby 1379 */

void UpdateMoby_1379_JetFighterFleet(MobyInstance *moby)

{
  u8 uVar1;
  byte bVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float *out;
  MobyClass *pMVar8;
  f32 fVar9;
  uint uVar10;
  undefined2 uVar11;
  ulonglong *puVar12;
  float fVar13;
  int iVar14;
  Cuboid *pCVar15;
  ulonglong uVar16;
  longlong lVar17;
  int iVar20;
  longlong lVar18;
  longlong lVar19;
  float fVar21;
  ulonglong uVar22;
  longlong lVar23;
  float *pfVar24;
  longlong lVar25;
  ulonglong unaff_r26;
  ulonglong unaff_r27;
  ulonglong unaff_r28;
  ulonglong unaff_r29;
  ulonglong unaff_r30;
  ulonglong uVar26;
  ulonglong unaff_r31;
  ulonglong in_LR;
  longlong lVar27;
  double dVar28;
  double dVar29;
  ulonglong in_f29;
  double dVar30;
  ulonglong in_f30;
  double dVar31;
  double dVar32;
  ulonglong in_f31;
  double dVar33;
  undefined8 uVar34;
  GPiece<16> auVar35;
  GPiece<16> auVar36;
  GPiece<16> auVar37;
  GPiece<16> auVar38;
  GPiece<16> auVar39;
  GPiece<16> auVar40;
  GPiece<16> auVar41;
  GPiece<16> auVar42;
  GPiece<16> auVar43;
  GPiece<16> auVar44;
  
  lVar17 = (longlong)(int)moby;
  uVar16 = ZEXT48(&stack0x00000000);
  lVar19 = uVar16 - 0x1a0;
  puVar12 = (ulonglong *)lVar19;
  *puVar12 = uVar16;
  puVar12[0x36] = in_LR;
  puVar12[0x31] = in_f29;
  puVar12[0x32] = in_f30;
  puVar12[0x33] = in_f31;
  puVar12[0x30] = unaff_r31;
  puVar12[0x2f] = unaff_r30;
  puVar12[0x2e] = unaff_r29;
  puVar12[0x2d] = unaff_r28;
  puVar12[0x2c] = unaff_r27;
  puVar12[0x2b] = unaff_r26;
  if (moby != (MobyInstance *)0x0) {
    out = (float *)moby->pVar;
    uVar26 = ZEXT48(out);
    FastDecTimerS32(uVar26 + 0xdc);
    uVar1 = moby->state;
    if ((((uVar1 != '\a') && (uVar1 != '\x01')) && (uVar1 != '\x02')) &&
       ((iVar20 = MB_damage(lVar17,0x30001,0), iVar20 != 0 && (moby->state == '\x04')))) {
      uVar10 = (int)*(uint *)(iVar20 + 0x2c) >> 0x1f;
      if ((int)((uVar10 >> 1 ^ *(uint *)(iVar20 + 0x2c)) - uVar10) <
          (int)(FLOAT_ORDER(DAT_0096b2dc))) {
        DAT_0096b2dc = DAT_0096b2dc - *(float *)(iVar20 + 0x2c);
        if ((*(uint *)(iVar20 + 0x30) & 1) != 0) {
          auVar35 = ZEXT416(0xffffffff);
          auVar35 = auVar35 | auVar35 << 0x20 | auVar35 << 0x40 | auVar35 << 0x60;
          auVar36 = vectorShiftLeftIntegerWord(auVar35,auVar35);
          GameCamera.offset0.amp = 1.0;
          auVar35 = loadVectorLeftIndexed(in_LR,0x2641f8);
          auVar35 = auVar35 >> 0x60 & (GPiece<16>)0xffffffff;
          auVar37 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
          auVar35 = vectorMultiplyAddFloatingPoint
                              (auVar37,auVar35 | auVar35 << 0x20 | auVar35 << 0x40 | auVar35 << 0x60
                               ,auVar36);
          auVar35 = vectorConvertToSignedFixedPointWordSaturate(auVar35,0);
          auVar35 = auVar35 >> 0x60 & (GPiece<16>)0xffffffff;
          GameCamera.offset0.total =
               storeVectorElementWordIndexed
                         (auVar35 | auVar35 << 0x20 | auVar35 << 0x40 | auVar35 << 0x60,0x168,
                          0x9513c0);
          dVar33 = (double)(*(float *)(iVar20 + 0x2c) * DAT_0079c398);
          MB_SphericalToVector(out[0x19],out[0xe],-out[0xd],(float *)(puVar12 + 0x18));
          fVar21 = *(float *)(iVar20 + 0x14);
          fVar3 = *(float *)(iVar20 + 0x10);
          fVar4 = *(float *)(iVar20 + 0x18);
          fVar5 = (moby->pos).x;
          fVar6 = (moby->pos).y;
          fVar7 = (moby->pos).z;
          fVar13 = SQRT(fVar4 * fVar4 + fVar3 * fVar3 + fVar21 * fVar21);
          if (g_FrameTime * 3.0 < fVar13) {
            fVar13 = (g_FrameTime * 3.0) / fVar13;
            fVar3 = fVar3 * fVar13;
            fVar21 = fVar21 * fVar13;
            fVar4 = fVar4 * fVar13;
            *(float *)(iVar20 + 0x10) = fVar3;
            *(float *)(iVar20 + 0x14) = fVar21;
            *(float *)(iVar20 + 0x18) = fVar4;
          }
          (moby->pos).x = fVar5 + fVar3;
          (moby->pos).y = fVar6 + fVar21;
          (moby->pos).z = fVar7 + fVar4;
          FastVecNormalize(uVar16 - 0xe0,uVar16 - 0xe0,iVar20 + 0x10);
          fVar4 = ABS(*(float *)(puVar12 + 0x18));
          fVar3 = ABS(*(float *)((int)puVar12 + 0xc4));
          dVar31 = (double)out[0xe];
          *(float *)(puVar12 + 0x1e) = fVar4 - fVar3;
          dVar30 = 0.0;
          uVar22 = (ulonglong)(*(uint *)(puVar12 + 0x18) >> 0x1c) & 8 |
                   (ulonglong)(*(uint *)(puVar12 + 0x1e) >> 0x1e) & 2 |
                   (ulonglong)(*(uint *)((int)puVar12 + 0xc4) >> 0x1d) & 4;
          fVar21 = fVar4;
          if (*(float *)(puVar12 + 0x1e) - 0.0 < 0.0) {
            fVar21 = fVar3;
          }
          fVar6 = *(float *)(&g_atanQuadrantTable + (int)(uVar22 << 2));
          fVar5 = *(float *)(((uint)(uVar22 << 2) | 0x735900) + 4);
          if (*(float *)(puVar12 + 0x1e) - 0.0 < 0.0) {
            fVar3 = fVar4;
          }
          dVar28 = dVar30;
          if (0.0 < fVar21) {
            lVar18 = uVar16 - 400;
            lVar23 = uVar16 - 0x6c;
            lVar25 = uVar16 - 0x5c;
            lVar27 = 2;
            fVar21 = (fVar3 - fVar21) / (fVar3 + fVar21);
            fVar3 = fVar21 * fVar21;
            *(float *)(puVar12 + 0x28) = fVar21;
            *(float *)(puVar12 + 0x27) = fVar21;
            *(float *)((int)puVar12 + 0x13c) = fVar21;
            *(float *)((int)puVar12 + 0x134) = fVar21;
            fVar21 = fVar3 * fVar3;
            *(float *)(puVar12 + 0x27) = *(float *)(puVar12 + 0x27) * fVar3;
            *(float *)((int)puVar12 + 0x13c) = *(float *)((int)puVar12 + 0x13c) * fVar21;
            *(float *)(puVar12 + 0x28) = *(float *)(puVar12 + 0x28) * fVar21 * fVar3;
            do {
              *(float *)((int)lVar18 + 0x134) = *(float *)((int)lVar18 + 0x124) * fVar21 * fVar21;
              iVar20 = (int)lVar23;
              lVar18 = lVar18 + 8;
              lVar23 = lVar23 + 8;
              *(float *)((int)lVar25 + 4) = *(float *)(iVar20 + 4) * fVar21 * fVar21;
              lVar25 = lVar25 + 8;
              lVar27 = lVar27 + -1;
            } while (lVar27 != 0);
            lVar27 = 4;
            lVar25 = uVar16 - 0x6c;
            pfVar24 = (float *)&DAT_007358e0;
            lVar18 = lVar19;
            lVar23 = lVar25;
            do {
              fVar21 = *pfVar24;
              fVar3 = pfVar24[1];
              pfVar24 = pfVar24 + 2;
              *(float *)((int)lVar18 + 0x134) = *(float *)((int)lVar18 + 0x134) * fVar21;
              lVar18 = lVar18 + 8;
              *(float *)((int)lVar23 + 4) = *(float *)((int)lVar23 + 4) * fVar3;
              lVar23 = lVar23 + 8;
              lVar27 = lVar27 + -1;
            } while (lVar27 != 0);
            lVar23 = 2;
            lVar18 = lVar19;
            do {
              iVar20 = (int)lVar18;
              lVar18 = lVar18 + 0x10;
              iVar14 = (int)lVar25;
              lVar25 = lVar25 + 0x10;
              dVar28 = (double)((float)(dVar28 + (double)*(float *)(iVar20 + 0x134)) +
                                *(float *)(iVar14 + 4) + *(float *)(iVar14 + 8) +
                               *(float *)(iVar14 + 0xc));
              lVar23 = lVar23 + -1;
            } while (lVar23 != 0);
            dVar28 = (double)((float)(dVar28 + 0.7853981852531433) * fVar6 + fVar5);
          }
          dVar28 = (double)FastDiffRots(dVar28,dVar31);
          dVar31 = (double)FastWrapRot
                                     ((float)dVar31,
                                      (float)((double)(float)(dVar28 * (double)DAT_0079c328) *
                                             dVar33));
          out[0xe] = (float)dVar31;
          dVar32 = (double)out[0xd];
          dVar31 = ABS((double)*(float *)(puVar12 + 0x19));
          fVar21 = SQRT(*(float *)(puVar12 + 0x18) * *(float *)(puVar12 + 0x18) +
                        *(float *)((int)puVar12 + 0xc4) * *(float *)((int)puVar12 + 0xc4));
          dVar29 = ABS((double)fVar21);
          *(float *)(puVar12 + 0x1d) = fVar21;
          *(float *)((int)puVar12 + 0xec) = (float)(dVar29 - dVar31);
          uVar22 = (ulonglong)(*(uint *)(puVar12 + 0x1d) >> 0x1c) & 8 |
                   (ulonglong)(*(uint *)((int)puVar12 + 0xec) >> 0x1e) & 2 |
                   (ulonglong)(*(uint *)(puVar12 + 0x19) >> 0x1d) & 4;
          fVar21 = *(float *)(&g_atanQuadrantTable + (int)(uVar22 << 2));
          dVar28 = ABS((double)*(float *)(puVar12 + 0x1d));
          if ((double)*(float *)((int)puVar12 + 0xec) - dVar30 < 0.0) {
            dVar28 = dVar31;
          }
          if ((double)*(float *)((int)puVar12 + 0xec) - dVar30 < 0.0) {
            dVar31 = dVar29;
          }
          fVar3 = *(float *)(((uint)(uVar22 << 2) | 0x735900) + 4);
          if (dVar30 < dVar28) {
            lVar18 = uVar16 - 400;
            lVar23 = uVar16 - 0x8c;
            lVar25 = uVar16 - 0x7c;
            lVar27 = 2;
            fVar4 = (float)(dVar31 - dVar28) / (float)(dVar31 + dVar28);
            fVar5 = fVar4 * fVar4;
            *(float *)(puVar12 + 0x24) = fVar4;
            *(float *)(puVar12 + 0x23) = fVar4;
            *(float *)((int)puVar12 + 0x11c) = fVar4;
            *(float *)((int)puVar12 + 0x114) = fVar4;
            fVar4 = fVar5 * fVar5;
            *(float *)(puVar12 + 0x23) = *(float *)(puVar12 + 0x23) * fVar5;
            *(float *)((int)puVar12 + 0x11c) = *(float *)((int)puVar12 + 0x11c) * fVar4;
            *(float *)(puVar12 + 0x24) = *(float *)(puVar12 + 0x24) * fVar4 * fVar5;
            do {
              *(float *)((int)lVar18 + 0x114) = *(float *)((int)lVar18 + 0x104) * fVar4 * fVar4;
              iVar20 = (int)lVar23;
              lVar18 = lVar18 + 8;
              lVar23 = lVar23 + 8;
              *(float *)((int)lVar25 + 4) = *(float *)(iVar20 + 4) * fVar4 * fVar4;
              lVar25 = lVar25 + 8;
              lVar27 = lVar27 + -1;
            } while (lVar27 != 0);
            lVar27 = 4;
            lVar25 = uVar16 - 0x8c;
            pfVar24 = (float *)&DAT_007358e0;
            lVar18 = lVar19;
            lVar23 = lVar25;
            do {
              fVar4 = *pfVar24;
              fVar5 = pfVar24[1];
              pfVar24 = pfVar24 + 2;
              *(float *)((int)lVar18 + 0x114) = *(float *)((int)lVar18 + 0x114) * fVar4;
              lVar18 = lVar18 + 8;
              *(float *)((int)lVar23 + 4) = *(float *)((int)lVar23 + 4) * fVar5;
              lVar23 = lVar23 + 8;
              lVar27 = lVar27 + -1;
            } while (lVar27 != 0);
            lVar23 = 2;
            lVar18 = lVar19;
            do {
              iVar20 = (int)lVar18;
              iVar14 = (int)lVar25;
              lVar18 = lVar18 + 0x10;
              lVar25 = lVar25 + 0x10;
              dVar30 = (double)((float)(dVar30 + (double)*(float *)(iVar20 + 0x114)) +
                                *(float *)(iVar14 + 4) + *(float *)(iVar14 + 8) +
                               *(float *)(iVar14 + 0xc));
              lVar23 = lVar23 + -1;
            } while (lVar23 != 0);
            dVar30 = (double)((float)(dVar30 + 0.7853981852531433) * fVar21 + fVar3);
          }
          dVar30 = (double)FastDiffRots(dVar30,dVar32);
          dVar33 = (double)FastWrapRot
                                     ((float)dVar32,
                                      (float)((double)(float)(dVar30 * (double)DAT_0079c32c) *
                                             dVar33));
          out[0xd] = (float)dVar33;
        }
      }
      else {
        MB_SphericalToVector(out[0x19],out[0xe],-out[0xd],(float *)(uVar16 - 0xd0));
        auVar35 = ZEXT416(0xffffffff);
        auVar35 = auVar35 | auVar35 << 0x20 | auVar35 << 0x40 | auVar35 << 0x60;
        auVar36 = vectorShiftLeftIntegerWord(auVar35,auVar35);
        GameCamera.offset0.amp = 0.2;
        auVar35 = loadVectorLeftIndexed(0x14,0x2641f8);
        auVar35 = auVar35 >> 0x60 & (GPiece<16>)0xffffffff;
        auVar37 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
        auVar36 = vectorMultiplyAddFloatingPoint
                            (auVar37,auVar35 | auVar35 << 0x20 | auVar35 << 0x40 | auVar35 << 0x60,
                             auVar36);
        auVar35 = ZEXT416(0xffffffff);
        auVar35 = auVar35 | auVar35 << 0x20 | auVar35 << 0x40 | auVar35 << 0x60;
        auVar37 = vectorShiftLeftIntegerWord(auVar35,auVar35);
        auVar35 = vectorConvertToSignedFixedPointWordSaturate(auVar36,0);
        auVar35 = auVar35 >> 0x60 & (GPiece<16>)0xffffffff;
        GameCamera.offset0.total =
             storeVectorElementWordIndexed
                       (auVar35 | auVar35 << 0x20 | auVar35 << 0x40 | auVar35 << 0x60,0x168,0x9513c0
                       );
        uVar34 = 0;
        DAT_0096b2dc = 0.0;
        moby->state = '\a';
        auVar35 = loadVectorLeftIndexed(0x18,0x2641f8);
        auVar36 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
        auVar35 = auVar35 >> 0x60 & (GPiece<16>)0xffffffff;
        auVar35 = vectorMultiplyAddFloatingPoint
                            (auVar36,auVar35 | auVar35 << 0x20 | auVar35 << 0x40 | auVar35 << 0x60,
                             auVar37);
        auVar35 = vectorConvertToSignedFixedPointWordSaturate(auVar35,0);
        auVar35 = vectorSplatHalfWord(auVar35,1);
        uVar11 = storeVectorElementHalfWordIndexed(auVar35,0x62,uVar26);
        *(undefined2 *)((int)out + 0x62) = uVar11;
        g_heroPosition.z = g_heroPosition.z + 0.2;
        g_heroMobyPtr->collisionMesh = (float *)0x0;
        TransitionMovement(0,1);
        DAT_0096b2d0 = (MobyInstance *)0x0;
        DAT_0096b2d4 = ~RATCHET;
        puVar12[0x12] = 0xffffffffffffffff;
        puVar12[0x14] = 1;
        puVar12[0x15] = 1;
        puVar12[0x16] = 0xffffffffffffffff;
        puVar12[0x17] = 0;
        MB_genericExplosion
                  (uVar34,uVar34,0x4010000000000000,0x4000000000000000,0x4022000000000000,
                   0x3ff0000000000000,0x402e000000000000,lVar17,uVar16 - 0xd0,0,0xffffffffffffffff,1
                   ,10,3,0x10);
        moby->modeBits = moby->modeBits | (UNK_40|DISABLED);
      }
    }
    moby->damage = -1;
    if (DAT_0096b2d0 == moby) {
      auVar35 = ZEXT416(0xffffffff);
      auVar36 = auVar35 | auVar35 << 0x20 | auVar35 << 0x40 | auVar35 << 0x60;
      auVar35 = ZEXT416(0xffffffff);
      auVar40 = auVar35 | auVar35 << 0x20 | auVar35 << 0x40 | auVar35 << 0x60;
      auVar39 = vectorShiftLeftIntegerWord(auVar36,auVar36);
      auVar36 = loadVectorLeftIndexed(0xffffffffffffc394,0x7a0000);
      auVar37 = vectorReciprocalEstimateFloatingPoint(auVar36);
      auVar35 = loadVectorLeftIndexed(0x20,0x2641f8);
      auVar35 = auVar35 >> 0x60 & (GPiece<16>)0xffffffff;
      auVar38 = auVar35 | auVar35 << 0x20 | auVar35 << 0x40 | auVar35 << 0x60;
      auVar41 = vectorShiftLeftIntegerWord(auVar40,auVar40);
      auVar35 = ZEXT416(0xffffffff);
      auVar40 = auVar35 | auVar35 << 0x20 | auVar35 << 0x40 | auVar35 << 0x60;
      auVar35 = ZEXT416(0xffffffff);
      auVar44 = auVar35 | auVar35 << 0x20 | auVar35 << 0x40 | auVar35 << 0x60;
      auVar42 = vectorShiftLeftIntegerWord(auVar40,auVar40);
      auVar35 = vectorNegativeMultiplySubtractFloatingPoint(auVar37,auVar36,auVar38);
      auVar37 = vectorMultiplyAddFloatingPoint(auVar37,auVar35,auVar39);
      auVar35 = ZEXT416(0xffffffff);
      auVar35 = auVar35 | auVar35 << 0x20 | auVar35 << 0x40 | auVar35 << 0x60;
      auVar40 = loadVectorLeftIndexed(0x15fc,0x969ce0);
      auVar39 = vectorShiftLeftIntegerWord(auVar35,auVar35);
      auVar35 = loadVectorLeftIndexed(0x30,0x2641f8);
      auVar35 = auVar35 >> 0x60 & (GPiece<16>)0xffffffff;
      auVar43 = vectorNegativeMultiplySubtractFloatingPoint(auVar37,auVar36,auVar38);
      auVar37 = vectorMultiplyAddFloatingPoint(auVar37,auVar43,auVar41);
      auVar41 = vectorShiftLeftIntegerWord(auVar44,auVar44);
      auVar36 = vectorNegativeMultiplySubtractFloatingPoint(auVar37,auVar36,auVar38);
      auVar36 = vectorMultiplyAddFloatingPoint(auVar37,auVar36,auVar39);
      auVar36 = vectorMultiplyAddFloatingPoint(auVar36,auVar40,auVar42);
      auVar35 = vectorMultiplyAddFloatingPoint
                          (auVar36,auVar35 | auVar35 << 0x20 | auVar35 << 0x40 | auVar35 << 0x60,
                           auVar41);
      auVar35 = vectorConvertToSignedFixedPointWordSaturate(auVar35,0);
      auVar35 = auVar35 >> 0x60 & (GPiece<16>)0xffffffff;
      DAT_0096b2e8 = storeVectorElementWordIndexed
                               (auVar35 | auVar35 << 0x20 | auVar35 << 0x40 | auVar35 << 0x60,0x1608
                                ,0x969ce0);
    }
    bVar2 = moby->state;
    if (bVar2 < 5) {
      if (bVar2 < 2) {
        if (bVar2 == 0) {
          moby->state = '\x01';
          *(undefined1 *)(out + 0x18) = 0;
          moby->scale = moby->pClass->gScale;
          out[8] = out[0xc];
          out[9] = out[0xd];
          fVar4 = ABS(g_ViewContext.xratio);
          uVar10 = (uint)g_ViewContext.xratio >> 0x1d;
          *(undefined4 *)(puVar12 + 0x1c) = 0x3f800000;
          *(float *)((int)puVar12 + 0xe4) = 1.0 - fVar4;
          fVar21 = 0.0;
          uVar22 = (ulonglong)(*(uint *)((int)puVar12 + 0xe4) >> 0x1e) & 2 | (ulonglong)uVar10 & 4;
          fVar3 = *(float *)(&g_atanQuadrantTable + (int)(uVar22 << 2));
          fVar5 = ABS(*(float *)(puVar12 + 0x1c));
          if (*(float *)((int)puVar12 + 0xe4) - 0.0 < 0.0) {
            fVar5 = fVar4;
          }
          if (*(float *)((int)puVar12 + 0xe4) - 0.0 < 0.0) {
            fVar4 = 1.0;
          }
          fVar6 = *(float *)(((uint)(uVar22 << 2) | 0x735900) + 4);
          if (0.0 < fVar5) {
            lVar18 = uVar16 - 400;
            lVar25 = uVar16 - 0x9c;
            lVar23 = uVar16 - 0xac;
            lVar27 = 2;
            fVar4 = (fVar4 - fVar5) / (fVar4 + fVar5);
            fVar5 = fVar4 * fVar4;
            *(float *)(puVar12 + 0x20) = fVar4;
            *(float *)(puVar12 + 0x1f) = fVar4;
            *(float *)((int)puVar12 + 0xfc) = fVar4;
            *(float *)((int)puVar12 + 0xf4) = fVar4;
            fVar4 = fVar5 * fVar5;
            *(float *)(puVar12 + 0x1f) = *(float *)(puVar12 + 0x1f) * fVar5;
            *(float *)((int)puVar12 + 0xfc) = *(float *)((int)puVar12 + 0xfc) * fVar4;
            *(float *)(puVar12 + 0x20) = *(float *)(puVar12 + 0x20) * fVar4 * fVar5;
            do {
              *(float *)((int)lVar18 + 0xf4) = *(float *)((int)lVar18 + 0xe4) * fVar4 * fVar4;
              iVar20 = (int)lVar23;
              lVar23 = lVar23 + 8;
              lVar18 = lVar18 + 8;
              *(float *)((int)lVar25 + 4) = *(float *)(iVar20 + 4) * fVar4 * fVar4;
              lVar25 = lVar25 + 8;
              lVar27 = lVar27 + -1;
            } while (lVar27 != 0);
            lVar27 = 4;
            lVar25 = uVar16 - 0xac;
            pfVar24 = (float *)&DAT_007358e0;
            lVar18 = lVar19;
            lVar23 = lVar25;
            do {
              fVar4 = *pfVar24;
              fVar5 = pfVar24[1];
              pfVar24 = pfVar24 + 2;
              *(float *)((int)lVar18 + 0xf4) = *(float *)((int)lVar18 + 0xf4) * fVar4;
              lVar18 = lVar18 + 8;
              *(float *)((int)lVar23 + 4) = *(float *)((int)lVar23 + 4) * fVar5;
              lVar23 = lVar23 + 8;
              lVar27 = lVar27 + -1;
            } while (lVar27 != 0);
            lVar18 = 2;
            do {
              iVar20 = (int)lVar19;
              lVar19 = lVar19 + 0x10;
              iVar14 = (int)lVar25;
              lVar25 = lVar25 + 0x10;
              fVar21 = fVar21 + *(float *)(iVar20 + 0xf4) + *(float *)(iVar14 + 4) +
                       *(float *)(iVar14 + 8) + *(float *)(iVar14 + 0xc);
              lVar18 = lVar18 + -1;
            } while (lVar18 != 0);
            fVar21 = (fVar21 + 0.7853982) * fVar3 + fVar6;
          }
          out[0x30] = 0.0;
          out[0x2b] = fVar21 * 2.0;
          out[0x2c] = fVar21 * 2.0;
          out[0xc] = (moby->rotation).x;
          out[0xd] = (moby->rotation).y;
          out[0xe] = (moby->rotation).z;
          out[0xf] = (moby->rotation).w;
          out[0x14] = (moby->rotation).x;
          out[0x15] = (moby->rotation).y;
          out[0x16] = (moby->rotation).z;
          out[0x17] = (moby->rotation).w;
          out[0x10] = (moby->pos).x;
          out[0x11] = (moby->pos).y;
          out[0x12] = (moby->pos).z;
          out[0x13] = (moby->pos).w;
          DAT_00fa4330 = 1;
          out[0x3e] = 1.4013e-45;
          out[0x3a] = 1.4013e-45;
          if ((moby->levelFlagIdx != 0xff) && (g_LevelFlags[Level][(byte)moby->levelFlagIdx] == -1))
          {
            moby->state = '\t';
          }
          if (0 < (int)out[0x47]) {
            MB_SetGroupActive((int)out[0x47],0,0,0);
          }
          MB_SetClassActive(SPAWN_POINT,1,1,-1);
          out[0x49] = -NAN;
        }
        else {
          dVar33 = (double)MB_BSphereGap(lVar17,g_heroMobyPtr);
          if (((((double)DAT_0079c2f0 <= dVar33) ||
               (g_heroState == VISIBOMB_CONTROL || g_heroState == TURRET_PLANE_UI)) ||
              (g_heroType != '\0')) ||
             ((iVar20 = MB_ShowPersistentMessage(7,0x53e4), iVar20 == 0 ||
              ((g_Pad.buttonsPressedThisFrame & TRIANGLE) == 0)))) {
            if (out[0x4c] != 0.0) {
              Delt(0.0,g_FrameTime * 4.0,out + 0x4c);
              SceneScreenFade = out[0x4c];
            }
          }
          else {
            MB_ClearHelpMessage((MobyInstance *)0x7);
            TransitionMovement(0x32,1);
            moby->state = '\x02';
            out[0x49] = -NAN;
          }
          MB_RegisterLameShadow(DAT_0079c3ac * DAT_0079c364,moby);
        }
      }
      else if (bVar2 < 3) {
        Delt(1.0,g_FrameTime * 4.0,out + 0x4c);
        SceneScreenFade = out[0x4c];
        if (out[0x4c] == 1.0) {
          DAT_0096b2d4 = moby->oClass;
          DAT_0096b2ee = 1;
          DAT_0096b2d6 = (undefined1)DAT_0079c374;
          DAT_0096b2d7 = (undefined1)DAT_0079c378;
          DAT_0096b2dc = DAT_0079c368;
          DAT_0096b2d0 = moby;
          DAT_0096b2d8 = DAT_0096b2d7;
          out[0x3c] = 0.0;
          out[0x3d] = 3.57331e-43;
          DAT_0096b2e4 = 0x42c80000;
          DAT_0096b2e0 = DAT_0079c394;
          DAT_0096b2d9 = 3;
          DAT_0096b2da = 3;
          DAT_0096b2db = 3;
          DAT_0096b2ef = 0;
          music_SetTransition(2,4);
          fVar21 = out[0x48];
          if (fVar21 != -NAN) {
            Hero_Warp(&Cuboids[(int)fVar21].pos.x,&Cuboids[(int)fVar21].rot.x,0x32,1);
            pCVar15 = Cuboids;
            fVar21 = out[0x48];
            (moby->pos).x = Cuboids[(int)fVar21].pos.x;
            (moby->pos).y = pCVar15[(int)fVar21].pos.y;
            (moby->pos).z = pCVar15[(int)fVar21].pos.z;
            (moby->pos).w = pCVar15[(int)fVar21].pos.w;
            fVar21 = out[0x48];
            (moby->rotation).x = pCVar15[(int)fVar21].rot.x;
            (moby->rotation).y = pCVar15[(int)fVar21].rot.y;
            (moby->rotation).z = pCVar15[(int)fVar21].rot.z;
            (moby->rotation).w = pCVar15[(int)fVar21].rot.w;
          }
          MB_RequestHelpMessage((MobyInstance *)0x6,STR_TO_USE_YOUR_BOMB_0x0000);
          SetCameraPosition(lVar17 + 0x10,lVar17 + 0x40,1,0,0);
          fVar21 = DAT_0079c2f4;
          *(undefined2 *)(out + 0x1a) = 0;
          out[0x19] = fVar21;
          out[0x1b] = 0.0;
          out[0x1c] = 0.0;
          out[0x21] = 0.0;
          out[0x20] = 0.0;
          moby->drawDistance = 0xff;
          fVar21 = (moby->rotation).z;
          moby->updateDistance = -1;
          out[10] = fVar21;
          out[0xe] = fVar21;
          fVar3 = DAT_0079c3ac;
          fVar21 = DAT_0079c344;
          out[0x2e] = 0.0;
          out[0x2d] = fVar21 * fVar3;
          out[0x2f] = DAT_0079c348 * fVar3;
          g_heroMobyPtr->collisionMesh = (float *)0xffffffff;
          MB_SphericalToVector(DAT_0079c2f4,out[0xe],-out[0xd],out);
          if (0 < (int)out[0x47]) {
            MB_SetGroupActive((int)out[0x47],1,1,1);
          }
          MB_SetClassActive(SPAWN_POINT,0,0,-1);
          pMVar8 = moby->pClass;
          (moby->pos).z = (moby->pos).z + 3.0;
          moby->scale = pMVar8->gScale * DAT_0079c3ac;
          g_heroInvisible = 1;
          if (out[0x42] == -NAN) {
            fVar21 = (float)PlayMobySound(0,4,moby);
            out[0x42] = fVar21;
          }
          Help_Suspend();
          OcclMode = 2;
          M1379_UpdateFlight(lVar17,uVar26);
          moby->state = '\x04';
        }
      }
      else if (3 < bVar2) {
        MB_RequestHelpMessage((MobyInstance *)0x6,STR_TO_USE_YOUR_BOMB_0x0000);
        OcclMode = 2;
        if ((g_SoundChannels[(int)out[0x42]].pMoby != moby) ||
           (g_SoundChannels[(int)out[0x42]].state == '\0')) {
          out[0x42] = -NAN;
          fVar21 = (float)PlayMobySound(0,4,moby);
          out[0x42] = fVar21;
        }
        M1379_UpdateFlight(lVar17,uVar26);
        if ((int)out[0x3a] < 1) {
          out[0x3e] = DAT_0079c484;
          moby->state = '\b';
        }
        if (out[0x4c] != 0.0) {
          Delt(0.0,g_FrameTime * 4.0,out + 0x4c);
          SceneScreenFade = out[0x4c];
        }
        if ((DAT_0096b2ef & 1) != 0) {
          moby->state = '\x05';
        }
      }
    }
    else if (bVar2 < 8) {
      if (bVar2 < 6) {
        g_heroInvisible = 0;
        g_heroMobyPtr->collisionMesh = (float *)0x0;
        TransitionMovement(0,1);
        Camera_DeactivateMobyDrivenCam(0);
        Hud_SetEntryValueById((int)DAT_0096b2ec,0);
        (moby->pos).x = out[0x10];
        (moby->pos).y = out[0x11];
        (moby->pos).z = out[0x12];
        (moby->pos).w = out[0x13];
        (moby->rotation).x = out[0x14];
        pMVar8 = moby->pClass;
        (moby->rotation).y = out[0x15];
        (moby->rotation).z = out[0x16];
        (moby->rotation).w = out[0x17];
        moby->scale = pMVar8->gScale;
        PostUpdateMobyLockTransform(moby);
        Hero_Warp(&Cuboids[(int)out[0x3f]].pos.x,&Cuboids[(int)out[0x3f]].rot.x,0,1);
        music_SetTransition(0,5);
        fVar21 = out[0x42];
        if (((fVar21 != -NAN) && (g_SoundChannels[(int)fVar21].pMoby == moby)) &&
           (g_SoundChannels[(int)fVar21].state != '\0')) {
          sound_Kill((int)fVar21);
        }
        fVar21 = out[0x43];
        out[0x42] = -NAN;
        if (((fVar21 != -NAN) && (g_SoundChannels[(int)fVar21].pMoby == moby)) &&
           (g_SoundChannels[(int)fVar21].state != '\0')) {
          sound_Kill((int)fVar21);
        }
        out[0x43] = -NAN;
        moby->state = '\x01';
        out[0x4c] = 0.99;
        SceneScreenFade = 0.99;
      }
      else if (6 < bVar2) {
        MB_RequestHelpMessage((MobyInstance *)0x6,STR_TO_USE_YOUR_BOMB_0x0000);
        OcclMode = 2;
        iVar20 = FastDecTimerS16(uVar26 + 0x62);
        if (iVar20 != 0) {
          Help_Resume();
          g_heroMobyPtr->collisionMesh = (float *)0x0;
          HandleHeroDeath();
          Camera_DeactivateMobyDrivenCam(0);
          music_SetTransition(0,5);
          (moby->pos).x = out[0x10];
          (moby->pos).y = out[0x11];
          (moby->pos).z = out[0x12];
          (moby->pos).w = out[0x13];
          (moby->rotation).x = out[0x14];
          (moby->rotation).y = out[0x15];
          (moby->rotation).z = out[0x16];
          (moby->rotation).w = out[0x17];
          PostUpdateMobyLockTransform(moby);
          fVar21 = out[0x42];
          if (((fVar21 != -NAN) && (g_SoundChannels[(int)fVar21].pMoby == moby)) &&
             (g_SoundChannels[(int)fVar21].state != '\0')) {
            sound_Kill((int)fVar21);
          }
          fVar21 = out[0x43];
          out[0x42] = -NAN;
          if (((fVar21 != -NAN) && (g_SoundChannels[(int)fVar21].pMoby == moby)) &&
             (g_SoundChannels[(int)fVar21].state != '\0')) {
            sound_Kill((int)fVar21);
          }
          out[0x43] = -NAN;
          moby->state = '\0';
        }
      }
    }
    else if (bVar2 < 9) {
      MB_RequestHelpMessage((MobyInstance *)0x6,STR_TO_USE_YOUR_BOMB_0x0000);
      OcclMode = 2;
      M1379_UpdateFlight(lVar17,uVar26);
      iVar20 = FastDecTimerS32(uVar26 + 0xf8);
      fVar21 = out[0x4c];
      if (iVar20 != 0) {
        Delt(1.0,g_FrameTime * 4.0,out + 0x4c);
        fVar21 = out[0x4c];
        SceneScreenFade = fVar21;
      }
      if (1.0 <= fVar21) {
        g_heroInvisible = 0;
        g_heroMobyPtr->collisionMesh = (float *)0x0;
        TransitionMovement(0,1);
        Camera_DeactivateMobyDrivenCam(0);
        music_SetTransition(0,5);
        pCVar15 = Cuboids;
        fVar21 = out[0x40];
        if (fVar21 == -NAN) {
          printf("no final place for jet during victory, so use init pos\n");
          (moby->pos).x = out[0x10];
          (moby->pos).y = out[0x11];
          (moby->pos).z = out[0x12];
          (moby->pos).w = out[0x13];
          (moby->rotation).x = out[0x14];
          (moby->rotation).y = out[0x15];
          (moby->rotation).z = out[0x16];
          fVar21 = out[0x17];
        }
        else {
          (moby->pos).x = Cuboids[(int)fVar21].pos.x;
          (moby->pos).y = pCVar15[(int)fVar21].pos.y;
          fVar3 = pCVar15[(int)fVar21].pos.z;
          (moby->pos).z = fVar3;
          (moby->pos).w = pCVar15[(int)fVar21].pos.w;
          fVar21 = out[0x40];
          (moby->rotation).x = pCVar15[(int)fVar21].rot.x;
          (moby->rotation).y = pCVar15[(int)fVar21].rot.y;
          (moby->rotation).z = pCVar15[(int)fVar21].rot.z;
          fVar21 = pCVar15[(int)fVar21].rot.w;
          (moby->pos).z = fVar3 + 0.57318;
        }
        pMVar8 = moby->pClass;
        (moby->rotation).w = fVar21;
        moby->scale = pMVar8->gScale;
        PostUpdateMobyLockTransform(moby);
        if (out[0x3f] == -NAN) {
          printf("no final place for hero during victory, so just fall\n");
        }
        else {
          if (0 < (int)out[0x47]) {
            MB_SetGroupActive((int)out[0x47],0,0,0);
          }
          MB_SetClassActive(SPAWN_POINT,1,1,-1);
          Hero_Warp(&Cuboids[(int)out[0x3f]].pos.x,&Cuboids[(int)out[0x3f]].rot.x,0,1);
        }
        if (moby->levelFlagIdx != -1) {
          SetLevelFlag();
        }
        fVar21 = out[0x42];
        if (((fVar21 != -NAN) && (g_SoundChannels[(int)fVar21].pMoby == moby)) &&
           (g_SoundChannels[(int)fVar21].state != '\0')) {
          sound_Kill((int)fVar21);
        }
        fVar21 = out[0x43];
        out[0x42] = -NAN;
        if (((fVar21 != -NAN) && (g_SoundChannels[(int)fVar21].pMoby == moby)) &&
           (g_SoundChannels[(int)fVar21].state != '\0')) {
          sound_Kill((int)fVar21);
        }
        out[0x43] = -NAN;
        SetSpawnPoint((Vec4 *)&g_heroPosition,(Vec4 *)&g_heroRotation);
        moby->state = '\t';
      }
    }
    else if (bVar2 < 10) {
      if (out[0x4c] == 0.0) {
        DeleteMoby(moby);
        return;
      }
      Delt(0.0,g_FrameTime * 4.0,out + 0x4c);
      SceneScreenFade = out[0x4c];
    }
    fVar9 = (moby->pos).x;
    uVar10 = (int)fVar9 >> 0x1f;
    fVar3 = 15.0;
    fVar21 = (moby->pos).x;
    if ((int)((uVar10 >> 1 ^ (uint)fVar9) - uVar10) < 0x41700000) {
      (moby->pos).x = 15.0;
      fVar21 = fVar3;
    }
    fVar4 = 1008.0;
    if (1008.0 < fVar21) {
      (moby->pos).x = 1008.0;
      fVar21 = fVar4;
    }
    fVar9 = (moby->pos).y;
    uVar10 = (int)fVar9 >> 0x1f;
    fVar5 = (moby->pos).y;
    if ((int)((uVar10 >> 1 ^ (uint)fVar9) - uVar10) < 0x41700000) {
      (moby->pos).y = 15.0;
      fVar5 = fVar3;
    }
    if (1008.0 < fVar5) {
      (moby->pos).y = 1008.0;
      fVar5 = fVar4;
    }
    fVar9 = (moby->pos).z;
    uVar10 = (int)fVar9 >> 0x1f;
    fVar6 = (moby->pos).z;
    if ((int)((uVar10 >> 1 ^ (uint)fVar9) - uVar10) < 0x41700000) {
      (moby->pos).z = 15.0;
      fVar6 = fVar3;
    }
    if (1008.0 < fVar6) {
      (moby->pos).z = 1008.0;
      fVar6 = fVar4;
    }
    bVar2 = moby->state;
    if (bVar2 == 4) {
      g_heroPosition.w = (moby->pos).w;
      g_heroRotation.x = out[0xc];
      g_heroRotation.y = out[0xd];
      g_heroRotation.z = out[0xe];
      g_heroRotation.w = out[0xf];
      g_heroPosition.x = fVar21;
      g_heroPosition.y = fVar5;
      g_heroPosition.z = fVar6;
    }
    if ((2 < bVar2) && (bVar2 < 5)) {
      M1379_0025f3c8(lVar17,uVar26);
    }
  }
  return;
}


