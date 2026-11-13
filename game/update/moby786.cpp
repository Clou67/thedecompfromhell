// game/update/moby786.cpp -- reconstructed from NPEA00385 EBOOT
// STATUS: NOT STARTED (raw Ghidra output)
// 4 functions, 0x45aa28-0x45c4b8
#include "game/update/moby786.h"
#include "game/camera.h"
#include "game/collproc.h"
#include "game/draw.h"
#include "game/freeze.h"
#include "game/help.h"
#include "game/hero.h"
#include "game/hud.h"
#include "game/main.h"
#include "game/memcard.h"
#include "game/mission.h"
#include "game/mobyfunc.h"
#include "game/mobyproc.h"
#include "game/mobyutil.h"
#include "game/respawn.h"
#include "game/space.h"
#include "game/update.h"
#include "game/update/camera5.h"
#include "game/update/moby1130.h"
#include "game/vendor.h"
#include "idol/fastfunc.h"
#include "idol/mUnk.h"

// 0x045aa28 (0x5d4 bytes)
void M786_0045aa28(int param_1)

{
  longlong lVar1;
  undefined4 uVar2;
  float fVar3;
  int iVar4;
  GPiece<16> auVar5;
  ulonglong *puVar6;
  undefined4 *puVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  longlong lVar10;
  undefined4 *puVar12;
  ulonglong uVar11;
  undefined4 uVar13;
  int iVar14;
  undefined4 *puVar15;
  longlong lVar16;
  undefined4 *puVar18;
  longlong lVar17;
  longlong lVar19;
  longlong lVar20;
  ulonglong unaff_r16;
  float *pfVar21;
  ulonglong unaff_r17;
  int iVar22;
  ulonglong unaff_r18;
  ulonglong unaff_r19;
  ulonglong unaff_r20;
  ulonglong unaff_r21;
  ulonglong unaff_r22;
  float *pfVar23;
  ulonglong unaff_r23;
  int *piVar24;
  ulonglong unaff_r24;
  float *pfVar25;
  ulonglong unaff_r25;
  ulonglong unaff_r26;
  int iVar26;
  ulonglong unaff_r27;
  ulonglong unaff_r28;
  int iVar27;
  ulonglong unaff_r29;
  ulonglong unaff_r30;
  int iVar28;
  ulonglong unaff_r31;
  ulonglong in_LR;
  longlong lVar29;
  longlong lVar30;
  double dVar31;
  double dVar32;
  double dVar33;
  double dVar34;
  ulonglong in_f21;
  double dVar35;
  ulonglong in_f22;
  double dVar36;
  ulonglong in_f23;
  double dVar37;
  ulonglong in_f24;
  double dVar38;
  ulonglong in_f25;
  double dVar39;
  ulonglong in_f26;
  double dVar40;
  ulonglong in_f27;
  double dVar41;
  ulonglong in_f28;
  double dVar42;
  ulonglong in_f29;
  double dVar43;
  ulonglong in_f30;
  double dVar44;
  ulonglong in_f31;
  double dVar45;
  GPiece<16> auVar46;
  GPiece<16> auVar47;
  GPiece<16> auVar48;
  GPiece<16> auVar49;
  GPiece<16> auVar50;
  GPiece<16> auVar51;
  GPiece<16> auVar52;
  GPiece<16> auVar53;
  
  uVar8 = ZEXT48(&stack0x00000000);
  lVar1 = uVar8 - 0x2c0;
  puVar6 = (ulonglong *)lVar1;
  *puVar6 = uVar8;
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
  puVar6[0x4b] = unaff_r30;
  puVar6[0x4c] = unaff_r31;
  puVar6[0x4a] = unaff_r29;
  puVar6[0x49] = unaff_r28;
  puVar6[0x48] = unaff_r27;
  puVar6[0x47] = unaff_r26;
  puVar6[0x46] = unaff_r25;
  puVar6[0x45] = unaff_r24;
  puVar6[0x44] = unaff_r23;
  puVar6[0x43] = unaff_r22;
  puVar6[0x42] = unaff_r21;
  puVar6[0x41] = unaff_r20;
  puVar6[0x40] = unaff_r19;
  puVar6[0x3f] = unaff_r18;
  puVar6[0x3e] = unaff_r17;
  puVar6[0x3d] = unaff_r16;
  iVar4 = *(int *)(param_1 + 0x78);
  FastMtxCopyNoTranslate(uVar8 - 0x250,param_1 + 0xc0);
  uVar13 = *(undefined4 *)(param_1 + 0x14);
  *(undefined4 *)(puVar6 + 0x14) = *(undefined4 *)(param_1 + 0x10);
  uVar2 = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)((int)puVar6 + 0xa4) = uVar13;
  *(undefined4 *)(puVar6 + 0x15) = uVar2;
  *(undefined4 *)((int)puVar6 + 0xac) = 0x3f800000;
  uVar9 = GetEffectTex(0x2c);
  puVar6[0x25] = uVar9;
  uVar9 = SCE_GS_SET_TEX1(0,0,1,1,1,0,0xff90);
  puVar6[0x26] = uVar9;
  uVar9 = SCE_GS_SET_CLAMP(0,0,0,0,0,0);
  puVar6[0x24] = uVar9;
  uVar9 = GetEffectTex(0x2c);
  puVar6[0x37] = uVar9;
  uVar9 = SCE_GS_SET_TEX1(0,0,1,1,1,0,0xff90);
  puVar6[0x38] = uVar9;
  uVar9 = SCE_GS_SET_CLAMP(0,0,0,0,0,0);
  puVar6[0x36] = uVar9;
  *(undefined4 *)((int)puVar6 + 0x18c) = 0;
  lVar10 = uVar8 - 0x210;
  *(undefined4 *)((int)puVar6 + 0x184) = 0;
  puVar15 = &DAT_00873aa0;
  lVar16 = uVar8 - 0x180;
  puVar18 = &DAT_00873a60;
  lVar29 = 4;
  do {
    puVar12 = (undefined4 *)lVar10;
    *puVar12 = *puVar15;
    puVar12[1] = puVar15[1];
    puVar12[2] = puVar15[2];
    puVar7 = puVar15 + 3;
    puVar15 = puVar15 + 4;
    puVar12[3] = *puVar7;
    lVar10 = lVar10 + 0x10;
    puVar12 = (undefined4 *)lVar16;
    *puVar12 = *puVar18;
    puVar12[1] = puVar18[1];
    puVar12[2] = puVar18[2];
    puVar7 = puVar18 + 3;
    puVar18 = puVar18 + 4;
    puVar12[3] = *puVar7;
    lVar16 = lVar16 + 0x10;
    lVar29 = lVar29 + -1;
  } while (lVar29 != 0);
  iVar26 = 0;
  uVar9 = 0;
  iVar22 = 0;
  do {
    iVar28 = (int)((uVar9 & 1) << 2);
    uVar11 = idol_draw::PackCmd(*(undefined4 *)((int)&DAT_00873a20 + iVar28),
                                *(undefined4 *)((int)&DAT_00873a28 + iVar28),
                                *(undefined4 *)((int)&DAT_00873a30 + iVar28),
                                *(undefined4 *)((int)&DAT_00873a38 + iVar28),0x80);
    uVar13 = *(undefined4 *)((int)&DAT_00873a20 + iVar28);
    puVar6[0x27] = uVar11;
    uVar11 = idol_draw::PackCmd(uVar13,*(undefined4 *)((int)&DAT_00873a28 + iVar28),
                                *(undefined4 *)((int)&DAT_00873a30 + iVar28),
                                *(undefined4 *)((int)&DAT_00873a38 + iVar28),0x80);
    puVar6[0x39] = uVar11;
    iVar28 = *(int *)(iVar4 + 0x14);
    if (iVar28 == 0) {
      uVar13 = *(undefined4 *)((int)&DAT_00873980 + iVar26);
    }
    else {
      puVar6[0x3a] = (longlong)iVar28;
      uVar13 = FastLerpColor
                         ((double)((float)(longlong)puVar6[0x3a] * 0.016666668),
                          *(undefined4 *)((int)&DAT_00873980 + iVar26),0);
    }
    *(undefined4 *)(puVar6 + 0x31) = uVar13;
    *(undefined4 *)(puVar6 + 0x30) = uVar13;
    *(undefined4 *)((int)puVar6 + 0xfc) = uVar13;
    *(undefined4 *)(puVar6 + 0x1f) = uVar13;
    *(undefined4 *)((int)puVar6 + 0xf4) = uVar13;
    *(undefined4 *)(puVar6 + 0x1e) = uVar13;
    dVar45 = 360.0;
    iVar28 = 0;
    dVar44 = 180.0;
    dVar43 = 0.01745329238474369;
    pfVar21 = (float *)&DAT_00873a40;
    dVar42 = 1.570796251296997;
    dVar41 = 3.141592502593994;
    dVar40 = -3.141592502593994;
    dVar39 = -0.16666656732559204;
    dVar38 = 0.008333025500178337;
    dVar37 = -0.0001980741071747616;
    dVar36 = 2.601886990305502e-06;
    dVar35 = 0.125;
    lVar10 = lVar1;
    do {
      iVar27 = 0;
      pfVar25 = (float *)((int)&DAT_008739a0 + iVar22);
      piVar24 = (int *)((int)&DAT_008739e0 + iVar22);
      lVar16 = lVar10;
      pfVar23 = pfVar21;
      do {
        iVar14 = FastDoubleToInt((double)(float)((double)*pfVar25 * dVar45));
        dVar31 = (double)FastIntToDouble(g_MainLoopFrames - (g_MainLoopFrames / iVar14) * iVar14);
        fVar3 = *pfVar23;
        dVar31 = (double)(float)((double)(float)(dVar31 / (double)*pfVar25) - dVar44);
        if (*piVar24 == 0) {
          dVar32 = (double)(float)(dVar31 * dVar43);
          dVar31 = (double)(float)(dVar41 - dVar32);
          if (dVar32 - (double)(float)(dVar41 - dVar32) < 0.0) {
            dVar31 = dVar32;
          }
          dVar33 = (double)(float)(dVar40 - dVar32);
          if ((double)(float)(dVar40 - dVar32) - dVar31 < 0.0) {
            dVar33 = dVar31;
          }
        }
        else {
          dVar32 = (double)(float)(dVar31 * dVar43 + dVar42);
          dVar31 = (double)(float)(dVar41 - dVar32);
          if (dVar32 - (double)(float)(dVar41 - dVar32) < 0.0) {
            dVar31 = dVar32;
          }
          dVar33 = (double)(float)(dVar40 - dVar32);
          if ((double)(float)(dVar40 - dVar32) - dVar31 < 0.0) {
            dVar33 = dVar31;
          }
        }
        dVar31 = (double)(float)(dVar33 * dVar33);
        iVar27 = iVar27 + 1;
        pfVar25 = pfVar25 + 1;
        piVar24 = piVar24 + 1;
        pfVar23 = pfVar23 + 1;
        dVar34 = (double)(float)(dVar31 * (double)(float)(dVar31 * dVar33));
        dVar32 = (double)(float)(dVar31 * dVar34);
        *(float *)((int)lVar16 + 0x100) =
             (float)((double)(float)((double)(float)(dVar31 * dVar32) * dVar36 +
                                    (double)(float)(dVar32 * dVar37 +
                                                   (double)(float)(dVar34 * dVar38 +
                                                                  (double)(float)((double)(float)(
                                                  dVar31 * dVar33) * dVar39 + dVar33)))) * dVar35 +
                    (double)fVar3);
        lVar16 = lVar16 + 4;
      } while (iVar27 < 2);
      iVar28 = iVar28 + 1;
      lVar10 = lVar10 + 8;
      pfVar21 = pfVar21 + 2;
    } while (iVar28 < 4);
    auVar46 = ZEXT416(0);
    auVar47 = auVar46 | auVar46 << 0x20 | auVar46 << 0x40 | auVar46 << 0x60;
    auVar46 = loadVectorLeftIndexed(0x2c,0x45a9f4);
    auVar46 = auVar46 >> 0x60 & (GPiece<16>)0xffffffff;
    auVar46 = auVar46 | auVar46 << 0x20 | auVar46 << 0x40 | auVar46 << 0x60;
    lVar30 = 2;
    lVar16 = uVar8 - 0x118;
    lVar29 = uVar8 - 0x1b8;
    lVar19 = uVar8 - 0x1a8;
    lVar10 = uVar8 - 0x128;
    lVar17 = uVar8 - 0x130;
    lVar20 = uVar8 - 0x120;
    do {
      auVar49 = vectorConvertFromSignedFixedPointWord(auVar47,0);
      auVar51 = loadVectorLeftIndexed(in_LR,lVar29);
      auVar53 = loadVectorLeftIndexed(in_LR,lVar19);
      auVar52 = auVar51 >> 0x60 & (GPiece<16>)0xffffffff;
      lVar29 = lVar29 + 4;
      auVar5 = auVar53 >> 0x60 & (GPiece<16>)0xffffffff;
      lVar19 = lVar19 + 4;
      auVar50.piece<0,4>() = auVar47.piece<0,4>() + 1;
      auVar50.piece<8,8>() = auVar47.piece<8,8>();
      auVar50.piece<4,4>() = auVar47.piece<4,4>() + 1;
      auVar48.piece<0,8>() = auVar50.piece<0,8>();
      auVar48.piece<12,4>() = auVar47.piece<12,4>();
      auVar48.piece<8,4>() = auVar47.piece<8,4>() + 1;
      auVar47.piece<0,12>() = auVar48.piece<0,12>();
      auVar47.piece<12,4>() = auVar48.piece<12,4>() + 1;
      uVar13 = storeVectorElementWordIndexed
                         (auVar52 | auVar52 << 0x20 | auVar52 << 0x40 | auVar52 << 0x60,0,lVar17);
      *(undefined4 *)lVar17 = uVar13;
      lVar17 = lVar17 + 4;
      auVar52 = vectorMultiplyAddFloatingPoint(auVar49,auVar46,auVar51);
      auVar50 = vectorMultiplyAddFloatingPoint(auVar49,auVar46,auVar53);
      auVar52 = auVar52 >> 0x60 & (GPiece<16>)0xffffffff;
      auVar50 = auVar50 >> 0x60 & (GPiece<16>)0xffffffff;
      uVar13 = storeVectorElementWordIndexed
                         (auVar52 | auVar52 << 0x20 | auVar52 << 0x40 | auVar52 << 0x60,0,lVar10);
      *(undefined4 *)lVar10 = uVar13;
      uVar13 = storeVectorElementWordIndexed
                         (auVar5 | auVar5 << 0x20 | auVar5 << 0x40 | auVar5 << 0x60,0,lVar20);
      *(undefined4 *)lVar20 = uVar13;
      lVar10 = lVar10 + 4;
      uVar13 = storeVectorElementWordIndexed
                         (auVar50 | auVar50 << 0x20 | auVar50 << 0x40 | auVar50 << 0x60,0,lVar16);
      *(undefined4 *)lVar16 = uVar13;
      lVar20 = lVar20 + 4;
      lVar16 = lVar16 + 4;
      lVar30 = lVar30 + -1;
    } while (lVar30 != 0);
    FastDrawQuad(uVar8 - 0x210,uVar8 - 0x250,0,EffectTexHeaders,9);
    FastDrawQuad(uVar8 - 0x180,uVar8 - 0x250,0,EffectTexHeaders,9);
    lVar16 = 4;
    lVar10 = lVar1;
    do {
      iVar28 = (int)lVar10;
      *(float *)(iVar28 + 0xb0) = *(float *)(iVar28 + 0xb0) + 0.1;
      *(float *)(iVar28 + 0x140) = *(float *)(iVar28 + 0x140) + 0.1;
      lVar10 = lVar10 + 0x10;
      lVar16 = lVar16 + -1;
    } while (lVar16 != 0);
    uVar9 = uVar9 + 1;
    iVar22 = iVar22 + 8;
    iVar26 = iVar26 + 4;
  } while ((int)uVar9 < 6);
  return;
}


// 0x045affc (0x14 bytes)
void M786_0045affc(void)

{
  DAT_00873b2c = 0x10000;
  return;
}


// 0x045b010 (0xf4 bytes)
// strings: 0096c074: 'None'

void M786_0045b010(int param_1)

{
  short sVar1;
  int iVar2;
  undefined4 *puVar3;
  
  if ((g_gameMode == GAME_MODE_SCENE) && (Cheats[0] != '\0')) {
    iVar2 = 0;
    puVar3 = &DAT_0095cd50;
    sVar1 = g_SpaceSceneMobyCnt.piece<0,2>();
    if (0 < g_SpaceSceneMobyCnt.piece<0,2>()) {
      do {
        if ((((MobyInstance *)puVar3[0x5e])->oClass == *(MOBY_OCLASSES *)(param_1 + 0xa6)) &&
           (DAT_00a1bf81 == '\0')) {
          AttachManipulator((MobyInstance *)puVar3[0x5e],0,&DAT_00a1bf80);
          DAT_00a1bfa0 = 0x40300000;
          DAT_00a1bfa4 = 0x40300000;
          DAT_00a1bfa8 = 0x40300000;
          sVar1 = g_SpaceSceneMobyCnt.piece<0,2>();
        }
        iVar2 = iVar2 + 1;
        puVar3 = puVar3 + 1;
      } while (iVar2 < sVar1);
    }
  }
  return;
}


// 0x045b190 (0x1328 bytes)
// inlined: FastAtan2 @0x45bd08, FastAtan2 @0x45c0b4, FastAtan2 @0x45c268
// strings: 0096c074: 'None' | 00658320: 'McGuffin Surfer'

/* Moby 786 */

void UpdateMoby_786(MobyInstance *moby)

{
  u8 uVar1;
  undefined4 uVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  void *pvVar10;
  int iVar11;
  uint uVar12;
  ulonglong *puVar13;
  uint uVar14;
  gameMode_t gVar15;
  Cuboid *pCVar16;
  ulonglong uVar17;
  MobyInstance *pMVar21;
  ulonglong uVar18;
  int iVar22;
  undefined2 uVar23;
  longlong lVar19;
  longlong lVar20;
  short sVar26;
  float *pfVar25;
  longlong lVar24;
  longlong lVar27;
  ulonglong unaff_r26;
  undefined4 *puVar28;
  ulonglong unaff_r27;
  ulonglong unaff_r28;
  ulonglong unaff_r29;
  ulonglong unaff_r30;
  ulonglong uVar29;
  ulonglong unaff_r31;
  ulonglong in_LR;
  longlong lVar30;
  double dVar31;
  double dVar32;
  ulonglong in_f25;
  ulonglong in_f26;
  ulonglong in_f27;
  ulonglong in_f28;
  ulonglong in_f29;
  double dVar33;
  double dVar34;
  ulonglong in_f30;
  double dVar35;
  double dVar36;
  ulonglong in_f31;
  double dVar37;
  double dVar38;
  GPiece<16> auVar39;
  GPiece<16> auVar40;
  GPiece<16> auVar41;
  
  uVar17 = ZEXT48(&stack0x00000000);
  lVar20 = uVar17 - 0x1d0;
  puVar13 = (ulonglong *)lVar20;
  *puVar13 = uVar17;
  puVar13[0x3c] = in_LR;
  puVar13[0x33] = in_f25;
  puVar13[0x34] = in_f26;
  puVar13[0x35] = in_f27;
  puVar13[0x36] = in_f28;
  puVar13[0x37] = in_f29;
  puVar13[0x38] = in_f30;
  puVar13[0x39] = in_f31;
  puVar13[0x32] = unaff_r31;
  puVar13[0x31] = unaff_r30;
  gVar15 = g_gameMode;
  pvVar10 = moby->pVar;
  uVar29 = ZEXT48(pvVar10);
  puVar13[0x30] = unaff_r29;
  puVar13[0x2f] = unaff_r28;
  puVar13[0x2e] = unaff_r27;
  puVar13[0x2d] = unaff_r26;
  if ((gVar15 == GAME_MODE_SCENE) && (Cheats[0] != '\0')) {
    iVar22 = 0;
    puVar28 = &DAT_0095cd50;
    sVar26 = g_SpaceSceneMobyCnt.piece<0,2>();
    if (0 < g_SpaceSceneMobyCnt.piece<0,2>()) {
      do {
        if ((((MobyInstance *)puVar28[0x5e])->oClass == moby->oClass) && (DAT_00a1bf81 == '\0')) {
          AttachManipulator((MobyInstance *)puVar28[0x5e],0,&DAT_00a1bf80);
          DAT_00a1bfa0 = 0x40300000;
          DAT_00a1bfa4 = 0x40300000;
          DAT_00a1bfa8 = 0x40300000;
          sVar26 = g_SpaceSceneMobyCnt.piece<0,2>();
        }
        iVar22 = iVar22 + 1;
        puVar28 = puVar28 + 1;
      } while (iVar22 < sVar26);
    }
  }
  uVar1 = moby->state;
  if (uVar1 == '\x05') {
    MB_UnlockItem(5,1);
    memcard_Save(0,-1);
    DeleteMoby(moby);
    return;
  }
  if (uVar1 == '\x04') {
    Delt(0.0,0.1,(float *)((int)pvVar10 + 0x17c));
    SceneScreenFade = *(float *)((int)pvVar10 + 0x17c);
    if (*(int *)((int)pvVar10 + 0x17c) == 0) {
      if (*(MobyInstance **)((int)pvVar10 + 0x178) != (MobyInstance *)0x0) {
        DeleteMoby(*(MobyInstance **)((int)pvVar10 + 0x178));
      }
      DeleteMoby(moby);
      return;
    }
  }
  else if (uVar1 == '\x03') {
    dVar37 = 1.0;
    dVar32 = 0.10000000149011612;
    OrganicDelt
              (1.0,g_FrameTimeSq * 0.1,g_FrameTimeSq * 0.25,g_FrameTime * 0.5,
               (float *)((int)pvVar10 + 0x180),0x720000,(float *)((int)pvVar10 + 0x184));
    pCVar16 = Cuboids;
    iVar22 = *(int *)((int)pvVar10 + 0x158);
    iVar11 = *(int *)((int)pvVar10 + 0x15c);
    fVar4 = *(float *)((int)pvVar10 + 0x180);
    fVar5 = Cuboids[iVar22].pos.x;
    fVar7 = Cuboids[iVar11].pos.y;
    fVar8 = Cuboids[iVar22].pos.y;
    fVar6 = Cuboids[iVar11].pos.z;
    fVar9 = Cuboids[iVar22].pos.z;
    fVar3 = Cuboids[iVar11].pos.w;
    *(float *)(puVar13 + 0xe) = fVar4 * (Cuboids[iVar11].pos.x - fVar5) + fVar5;
    *(float *)((int)puVar13 + 0x74) = fVar4 * (fVar7 - fVar8) + pCVar16[iVar22].pos.y;
    fVar5 = pCVar16[iVar22].pos.z;
    *(float *)((int)puVar13 + 0x7c) = fVar3;
    *(float *)(puVar13 + 0xf) = fVar4 * (fVar6 - fVar9) + fVar5;
    dVar36 = (double)pCVar16[iVar22].rot.z;
    dVar34 = (double)pCVar16[iVar22].rot.x;
    dVar33 = (double)pCVar16[iVar22].rot.y;
    dVar35 = (double)pCVar16[iVar11].rot.x;
    dVar31 = (double)pCVar16[iVar11].rot.y;
    dVar38 = (double)FastDiffRots((double)pCVar16[iVar11].rot.z,dVar36);
    dVar38 = (double)FastWrapRot
                               ((float)(dVar38 * (double)*(float *)((int)pvVar10 + 0x180)),
                                (float)dVar36);
    *(float *)(puVar13 + 0x11) = (float)dVar38;
    dVar38 = (double)FastDiffRots(dVar31,dVar33);
    dVar38 = (double)FastWrapRot
                               ((float)(dVar38 * (double)*(float *)((int)pvVar10 + 0x180)),
                                (float)dVar33);
    *(float *)((int)puVar13 + 0x84) = (float)dVar38;
    dVar38 = (double)FastDiffRots(dVar35,dVar34);
    dVar38 = (double)FastWrapRot
                               ((float)(dVar38 * (double)*(float *)((int)pvVar10 + 0x180)),
                                (float)dVar34);
    *(float *)(puVar13 + 0x10) = (float)dVar38;
    Camera_SetMobyDrivenTargetPos((float *)(puVar13 + 0xe));
    Camera_SetMobyDrivenTargetRot((float *)(puVar13 + 0x10));
    uVar12 = (int)*(uint *)((int)pvVar10 + 0x180) >> 0x1f;
    if ((int)((uVar12 >> 1 ^ *(uint *)((int)pvVar10 + 0x180)) - uVar12) < 0x3f800000) {
      Delt(0.0,(float)dVar32,(float *)((int)pvVar10 + 0x17c));
    }
    else {
      Delt((float)dVar37,(float)dVar32,(float *)((int)pvVar10 + 0x17c));
      if (*(int *)((int)pvVar10 + 0x17c) == 0x3f800000) {
        moby->state = '\x04';
        Camera_DeactivateMobyDrivenCam(0);
      }
    }
    SceneScreenFade = *(float *)((int)pvVar10 + 0x17c);
  }
  else if (uVar1 == '\x02') {
    if (g_gameMode == GAME_MODE_SCENE) {
      if (g_SceneHeroWarpPending == '\0') {
        fVar4 = (moby->transform).v0.y;
        fVar5 = (moby->transform).v0.x;
        fVar7 = (moby->transform).v0.z;
        fVar6 = 0.0;
        fVar8 = SQRT(fVar7 * fVar7 + fVar5 * fVar5 + fVar4 * fVar4);
        if (fVar8 == 0.0) {
          g_SceneHeroWarpPos.w = (moby->transform).v0.w;
          fVar4 = fVar6;
          fVar7 = fVar6;
        }
        else {
          fVar8 = 2.5 / fVar8;
          fVar4 = fVar4 * fVar8;
          fVar6 = fVar5 * fVar8;
          g_SceneHeroWarpPos.w = (moby->transform).v0.w;
          fVar7 = fVar7 * fVar8;
        }
        g_SceneHeroWarpPos.x = fVar6 + (moby->pos).x;
        g_SceneHeroWarpPos.y = fVar4 + (moby->pos).y;
        g_SceneHeroWarpPos.z = fVar7 + (moby->pos).z;
        dVar38 = (double)GetGroundZ(0x3fe0000000000000,&g_SceneHeroWarpPos.x,0);
        g_SceneHeroWarpPos.z = (float)dVar38;
        g_SceneHeroWarpRot.w = 0;
        g_SceneHeroWarpRot.z = 0.0;
        g_SceneHeroWarpRot.y = 0;
        g_SceneHeroWarpRot.x = 0;
        dVar38 = (double)FastWrapRot((moby->rotation).z,3.14159);
        g_SceneHeroWarpRot.z = (float)dVar38;
        g_SceneHeroWarpPending = '\x01';
      }
    }
    else {
      moby->state = '\x01';
      if (*(short *)((int)pvVar10 + 4) == 0) {
        SetLevelFlag(moby->levelFlagIdx);
        iVar22 = *(int *)((int)pvVar10 + 0x150);
        if (iVar22 != -1) {
          SetSpawnPoint((Vec4 *)&Cuboids[iVar22].pos,(Vec4 *)&Cuboids[iVar22].rot);
        }
      }
      else if (*(short *)((int)pvVar10 + 4) == 2) {
        moby->enabled = '\0';
        moby->collision = (ushort *)0x0;
        iVar22 = *(int *)((int)pvVar10 + 0x178);
        moby->modeBits = moby->modeBits | DISABLED;
        if (iVar22 != 0) {
          *(ushort *)(iVar22 + 0x34) = *(ushort *)(iVar22 + 0x34) | 1;
          *(undefined1 *)(*(int *)((int)pvVar10 + 0x178) + 0x31) = 0;
        }
        PlayHelpMovie(2);
        moby->state = '\x05';
      }
    }
  }
  else if (uVar1 == '\x01') {
    if ((*(char *)((int)pvVar10 + 8) == '\x01') &&
       (iVar22 = MB_IsPntInCuboid
                           (&g_heroPosition,(longlong)*(int *)((int)pvVar10 + 0x154)), iVar22 != 0))
    {
      uVar2 = 0x437f0000;
    }
    else {
      uVar2 = 0x406ccccd;
    }
    *(undefined4 *)((int)pvVar10 + 0xc) = uVar2;
    iVar22 = FUN_004d3870(moby,uVar29);
    if (iVar22 == 0) {
      if ((UnlockableItems.sonicSummoner == '\0') &&
         (fVar4 = (moby->pos).y - g_heroPosition.y, fVar5 = (moby->pos).x - g_heroPosition.x,
         SQRT(fVar5 * fVar5 + fVar4 * fVar4) < 3.0)) {
        if (HelpData.piece<112,2>() == 0) {
          HelpData[0x70] = '\0';
          HelpData[0x71] = '\x01';
          puVar13[0x2b] = (longlong)g_GameFrameCount;
          uVar23 = HelpData.piece<114,2>();
          puVar13[0x2b] = (longlong)(int)(animationSpeed * ((float)(longlong)puVar13[0x2b] + 0.5));
          iVar22 = *(int *)((int)puVar13 + 0x15c);
          if ((int)(uint)(ushort)uVar23 < iVar22 / 600) {
            sVar26 = (short)(iVar22 >> 0x1f);
            HelpData.piece<114,2>() =
                 ((short)(iVar22 / 600) + sVar26) -
                 ((short)((short)(iVar22 / 0x2580000) + sVar26) >> 0xf);
          }
          HelpData.piece<116,4>() =
               HelpData.piece<116,4>() | 1 << (Level & 0x3f) | 0x80000000;
        }
        else {
          puVar13[0x2b] = (longlong)g_GameFrameCount;
          fVar4 = animationSpeed;
          puVar13[0x2b] = (longlong)(int)(animationSpeed * ((float)(longlong)puVar13[0x2b] + 0.5));
          uVar23 = HelpData.piece<114,2>();
          uVar14 = (uint)(ushort)HelpData.piece<114,2>();
          iVar22 = *(int *)((int)puVar13 + 0x15c);
          uVar12 = (uint)(ushort)HelpData.piece<114,2>();
          puVar13[0x2b] = (longlong)(int)((float)(longlong)(fVar4 * 18.5) * 60.0);
          if ((*(int *)((int)puVar13 + 0x15c) < (int)(iVar22 + uVar12 * -600)) ||
             (uVar14 * 600 == 0)) {
            Help_QueueMessage(STR_IF_YOU_WANT_TO_0x07D4,0xe);
          }
          else if ((int)(uint)(ushort)uVar23 < iVar22 / 600) {
            sVar26 = (short)(iVar22 >> 0x1f);
            HelpData.piece<114,2>() =
                 ((short)(iVar22 / 600) + sVar26) -
                 ((short)((short)(iVar22 / 0x2580000) + sVar26) >> 0xf);
          }
        }
      }
    }
    else {
      MB_SetPointAheadOfMoby(0x40019999a0000000,moby);
      moby->state = '\x02';
    }
    dVar38 = 10.5;
    uVar1 = moby->animationId;
    if (uVar1 == '\0') {
      iVar22 = FastDecTimerS16(uVar29 + 0x172);
      uVar1 = moby->animationId;
      if (iVar22 != 0) {
        dVar31 = (double)MB_randRangeFloat(1200.0,2400.0);
        uVar23 = FastDoubleToInt((double)(float)(dVar31 * (double)animationSpeed));
        *(undefined2 *)((int)pvVar10 + 0x172) = uVar23;
        if (moby->animationId != '\x01') {
          puVar13[0x2b] = (longlong)(int)((double)animationSpeed * dVar38);
          MB_SetAnimation(moby,1,0,*(undefined4 *)((int)puVar13 + 0x15c));
        }
        goto LAB_0045bb14;
      }
    }
    if ((uVar1 == '\x01') && ((moby->field43_0x70 & 2U) != 0)) {
      puVar13[0x2b] = (longlong)(int)((double)animationSpeed * dVar38);
      MB_SetAnimation(moby,0,0,*(undefined4 *)((int)puVar13 + 0x15c));
    }
  }
  else if (uVar1 == '\0') {
    if (CHAR_ARRAY_0096c165[5] != '\0') {
      DeleteMoby(moby);
      return;
    }
    *(char **)((int)pvVar10 + 0x20) = "McGuffin Surfer";
    moby->state = '\x01';
    FUN_004d3720(moby,uVar29);
    MB_SetZBoundsFromPos(moby);
    pMVar21 = CreateMoby(0x38);
    *(MobyInstance **)((int)pvVar10 + 0x178) = pMVar21;
    pMVar21->drawDistance = 0x40;
    *(undefined1 *)(*(int *)((int)pvVar10 + 0x178) + 0x31) = 1;
    *(undefined8 *)(*(int *)((int)pvVar10 + 0x178) + 0x38) = *(undefined8 *)&moby->color;
    *(ushort *)(*(int *)((int)pvVar10 + 0x178) + 0x34) =
         *(ushort *)(*(int *)((int)pvVar10 + 0x178) + 0x34) | 0x100;
  }
LAB_0045bb14:
  if (*(uint *)((int)pvVar10 + 0x178) != 0) {
    GetBonePosition(moby,2,(ulonglong)*(uint *)((int)pvVar10 + 0x178) + 0x10);
    GetBoneTransformations(moby,2,uVar17 - 0x140);
    FastApplyTransform
              ((Vec4 *)(*(int *)((int)pvVar10 + 0x178) + 0xc0),(Vec4 *)(uVar17 - 0x140));
    iVar22 = *(int *)((int)pvVar10 + 0x178);
    fVar4 = *(float *)(iVar22 + 0xd4) * DAT_00873b54;
    fVar5 = *(float *)(iVar22 + 0xd8) * DAT_00873b54;
    fVar7 = *(float *)(iVar22 + 0xc4) * DAT_00873b50;
    fVar8 = *(float *)(iVar22 + 200) * DAT_00873b50;
    fVar6 = *(float *)(iVar22 + 0xe4) * DAT_00873b58;
    fVar9 = *(float *)(iVar22 + 0xe8) * DAT_00873b58;
    *(float *)(iVar22 + 0x10) =
         *(float *)(iVar22 + 0x10) +
         *(float *)(iVar22 + 0xe0) * DAT_00873b58 +
         *(float *)(iVar22 + 0xc0) * DAT_00873b50 + *(float *)(iVar22 + 0xd0) * DAT_00873b54;
    *(float *)(iVar22 + 0x14) = *(float *)(iVar22 + 0x14) + fVar6 + fVar7 + fVar4;
    *(float *)(iVar22 + 0x18) = *(float *)(iVar22 + 0x18) + fVar9 + fVar8 + fVar5;
    UpdateMobyTransform(*(MobyInstance **)((int)pvVar10 + 0x178));
  }
  dVar38 = 0.019999999552965164;
  if (moby->animationId != '\0') goto LAB_0045c40c;
  fVar4 = (moby->pos).y;
  fVar5 = (moby->pos).x;
  fVar7 = fVar4 - g_heroPosition.y;
  fVar8 = fVar5 - g_heroPosition.x;
  if (8.0 <= SQRT(fVar8 * fVar8 + fVar7 * fVar7)) {
LAB_0045beb8:
    if (*(short *)((int)pvVar10 + 0x174) != 0) {
      *(undefined2 *)((int)pvVar10 + 0x174) = 0;
      *(float *)((int)pvVar10 + 0x160) = g_heroCGPos;
      *(float *)((int)pvVar10 + 0x164) = DAT_00969db4;
      *(float *)((int)pvVar10 + 0x168) = DAT_00969db8;
      *(undefined4 *)((int)pvVar10 + 0x16c) = DAT_00969dbc;
    }
  }
  else {
    fVar5 = g_heroCGPos - fVar5;
    fVar4 = DAT_00969db4 - fVar4;
    fVar7 = ABS(fVar5);
    fVar6 = ABS(fVar4);
    *(float *)(puVar13 + 0x1d) = fVar5;
    *(float *)((int)puVar13 + 0xec) = fVar4;
    fVar4 = (moby->rotation).z;
    *(float *)(puVar13 + 0x1e) = fVar7 - fVar6;
    fVar5 = 0.0;
    uVar18 = (ulonglong)(*(uint *)(puVar13 + 0x1d) >> 0x1c) & 8 |
             (ulonglong)(*(uint *)(puVar13 + 0x1e) >> 0x1e) & 2 |
             (ulonglong)(*(uint *)((int)puVar13 + 0xec) >> 0x1d) & 4;
    fVar8 = ABS(*(float *)(puVar13 + 0x1d));
    if (*(float *)(puVar13 + 0x1e) - 0.0 < 0.0) {
      fVar8 = fVar6;
    }
    fVar9 = *(float *)(&g_atanQuadrantTable + (int)(uVar18 << 2));
    fVar6 = *(float *)(((uint)(uVar18 << 2) | 0x735900) + 4);
    fVar3 = ABS(*(float *)((int)puVar13 + 0xec));
    if (*(float *)(puVar13 + 0x1e) - 0.0 < 0.0) {
      fVar3 = fVar7;
    }
    if (0.0 < fVar8) {
      lVar19 = uVar17 - 0x1c0;
      lVar27 = uVar17 - 0x8c;
      lVar24 = uVar17 - 0x9c;
      lVar30 = 2;
      fVar7 = (fVar3 - fVar8) / (fVar3 + fVar8);
      fVar8 = fVar7 * fVar7;
      *(float *)(puVar13 + 0x28) = fVar7;
      *(float *)(puVar13 + 0x27) = fVar7;
      *(float *)((int)puVar13 + 0x13c) = fVar7;
      *(float *)((int)puVar13 + 0x134) = fVar7;
      fVar7 = fVar8 * fVar8;
      *(float *)(puVar13 + 0x27) = *(float *)(puVar13 + 0x27) * fVar8;
      *(float *)((int)puVar13 + 0x13c) = *(float *)((int)puVar13 + 0x13c) * fVar7;
      *(float *)(puVar13 + 0x28) = *(float *)(puVar13 + 0x28) * fVar7 * fVar8;
      do {
        *(float *)((int)lVar19 + 0x134) = *(float *)((int)lVar19 + 0x124) * fVar7 * fVar7;
        iVar22 = (int)lVar24;
        lVar24 = lVar24 + 8;
        lVar19 = lVar19 + 8;
        *(float *)((int)lVar27 + 4) = *(float *)(iVar22 + 4) * fVar7 * fVar7;
        lVar27 = lVar27 + 8;
        lVar30 = lVar30 + -1;
      } while (lVar30 != 0);
      lVar30 = 4;
      lVar27 = uVar17 - 0x9c;
      pfVar25 = (float *)&DAT_007358e0;
      lVar19 = lVar20;
      lVar24 = lVar27;
      do {
        fVar7 = *pfVar25;
        fVar8 = pfVar25[1];
        pfVar25 = pfVar25 + 2;
        *(float *)((int)lVar19 + 0x134) = *(float *)((int)lVar19 + 0x134) * fVar7;
        lVar19 = lVar19 + 8;
        *(float *)((int)lVar24 + 4) = *(float *)((int)lVar24 + 4) * fVar8;
        lVar24 = lVar24 + 8;
        lVar30 = lVar30 + -1;
      } while (lVar30 != 0);
      lVar24 = 2;
      lVar19 = lVar20;
      do {
        iVar22 = (int)lVar19;
        lVar19 = lVar19 + 0x10;
        iVar11 = (int)lVar27;
        lVar27 = lVar27 + 0x10;
        fVar5 = fVar5 + *(float *)(iVar22 + 0x134) + *(float *)(iVar11 + 4) + *(float *)(iVar11 + 8)
                + *(float *)(iVar11 + 0xc);
        lVar24 = lVar24 + -1;
      } while (lVar24 != 0);
      fVar5 = (fVar5 + 0.7853982) * fVar9 + fVar6;
    }
    dVar31 = (double)FastSubRots(fVar4,fVar5);
    if (1.5707963705062866 <= dVar31) goto LAB_0045beb8;
    if (SQRT(DAT_00969de8 * DAT_00969de8 + DAT_00969de0 * DAT_00969de0 + DAT_00969de4 * DAT_00969de4
            ) <= 0.01) {
      FastDecTimerS16(uVar29 + 0x174);
    }
    else {
      auVar39 = ZEXT416(0xffffffff);
      auVar39 = auVar39 | auVar39 << 0x20 | auVar39 << 0x40 | auVar39 << 0x60;
      auVar40 = vectorShiftLeftIntegerWord(auVar39,auVar39);
      auVar39 = loadVectorLeftIndexed(0x54,0x45b104);
      auVar39 = auVar39 >> 0x60 & (GPiece<16>)0xffffffff;
      auVar41 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
      auVar39 = vectorMultiplyAddFloatingPoint
                          (auVar41,auVar39 | auVar39 << 0x20 | auVar39 << 0x40 | auVar39 << 0x60,
                           auVar40);
      auVar39 = vectorConvertToSignedFixedPointWordSaturate(auVar39,0);
      auVar39 = vectorSplatHalfWord(auVar39,1);
      uVar23 = storeVectorElementHalfWordIndexed(auVar39,0x174,uVar29);
      *(undefined2 *)((int)pvVar10 + 0x174) = uVar23;
    }
  }
  iVar22 = FastDecTimerS16(uVar29 + 0x176);
  if (iVar22 != 0) {
    dVar31 = (double)MB_randRangeFloat(180.0,300.0);
    uVar23 = FastDoubleToInt((double)(float)(dVar31 * (double)animationSpeed));
    *(undefined2 *)((int)pvVar10 + 0x176) = uVar23;
    dVar35 = (double)(moby->rotation).z;
    dVar31 = (double)MB_randRangeFloat(-90.0,90.0);
    dVar33 = 0.01745329238474369;
    dVar31 = (double)FastWrapRot((float)dVar35,(float)(dVar31 * 0.01745329238474369));
    dVar35 = (double)MB_randRangeFloat(0.0,30.0);
    MB_SphericalToVector
              (6.0,(float)dVar31,(float)(dVar35 * dVar33),(float *)((int)pvVar10 + 0x160));
    *(float *)((int)pvVar10 + 0x160) = *(float *)((int)pvVar10 + 0x160) + (moby->pos).x;
    *(float *)((int)pvVar10 + 0x164) = *(float *)((int)pvVar10 + 0x164) + (moby->pos).y;
    *(float *)((int)pvVar10 + 0x168) = *(float *)((int)pvVar10 + 0x168) + (moby->pos).z;
  }
  if (*(short *)((int)pvVar10 + 0x174) == 0) {
    fVar4 = *(float *)((int)pvVar10 + 0x160);
    fVar5 = *(float *)((int)pvVar10 + 0x164);
    fVar7 = *(float *)((int)pvVar10 + 0x168);
  }
  else {
    dVar38 = 0.03999999910593033;
    fVar4 = g_heroCGPos;
    fVar5 = DAT_00969db4;
    fVar7 = DAT_00969db8;
  }
  fVar4 = fVar4 - (moby->pos).x;
  dVar36 = (double)fVar4;
  fVar5 = fVar5 - (moby->pos).y;
  dVar34 = (double)fVar5;
  *(float *)((int)puVar13 + 0xdc) = fVar4;
  *(float *)(puVar13 + 0x1c) = fVar5;
  dVar33 = (double)(fVar7 - ((moby->pos).z + 1.0));
  *(float *)((int)puVar13 + 0xe4) = (float)(ABS(dVar36) - ABS(dVar34));
  dVar35 = 0.0;
  uVar18 = (ulonglong)(*(uint *)((int)puVar13 + 0xdc) >> 0x1c) & 8 |
           (ulonglong)(*(uint *)((int)puVar13 + 0xe4) >> 0x1e) & 2 |
           (ulonglong)(*(uint *)(puVar13 + 0x1c) >> 0x1d) & 4;
  dVar31 = ABS((double)*(float *)((int)puVar13 + 0xdc));
  if (*(float *)((int)puVar13 + 0xe4) - 0.0 < 0.0) {
    dVar31 = ABS(dVar34);
  }
  fVar4 = *(float *)(&g_atanQuadrantTable + (int)(uVar18 << 2));
  dVar32 = ABS((double)*(float *)(puVar13 + 0x1c));
  if (*(float *)((int)puVar13 + 0xe4) - 0.0 < 0.0) {
    dVar32 = ABS(dVar36);
  }
  fVar5 = *(float *)(((uint)(uVar18 << 2) | 0x735900) + 4);
  dVar37 = dVar35;
  if (0.0 < dVar31) {
    lVar19 = uVar17 - 0x1c0;
    lVar24 = uVar17 - 0xbc;
    lVar27 = uVar17 - 0xac;
    lVar30 = 2;
    fVar7 = (float)(dVar32 - dVar31) / (float)(dVar32 + dVar31);
    fVar8 = fVar7 * fVar7;
    *(float *)(puVar13 + 0x24) = fVar7;
    *(float *)(puVar13 + 0x23) = fVar7;
    *(float *)((int)puVar13 + 0x11c) = fVar7;
    *(float *)((int)puVar13 + 0x114) = fVar7;
    fVar7 = fVar8 * fVar8;
    *(float *)(puVar13 + 0x23) = *(float *)(puVar13 + 0x23) * fVar8;
    *(float *)((int)puVar13 + 0x11c) = *(float *)((int)puVar13 + 0x11c) * fVar7;
    *(float *)(puVar13 + 0x24) = *(float *)(puVar13 + 0x24) * fVar7 * fVar8;
    do {
      *(float *)((int)lVar19 + 0x114) = *(float *)((int)lVar19 + 0x104) * fVar7 * fVar7;
      iVar22 = (int)lVar24;
      lVar19 = lVar19 + 8;
      lVar24 = lVar24 + 8;
      *(float *)((int)lVar27 + 4) = *(float *)(iVar22 + 4) * fVar7 * fVar7;
      lVar27 = lVar27 + 8;
      lVar30 = lVar30 + -1;
    } while (lVar30 != 0);
    lVar30 = 4;
    lVar27 = uVar17 - 0xbc;
    pfVar25 = (float *)&DAT_007358e0;
    lVar19 = lVar20;
    lVar24 = lVar27;
    do {
      fVar7 = *pfVar25;
      fVar8 = pfVar25[1];
      pfVar25 = pfVar25 + 2;
      *(float *)((int)lVar19 + 0x114) = *(float *)((int)lVar19 + 0x114) * fVar7;
      lVar19 = lVar19 + 8;
      *(float *)((int)lVar24 + 4) = *(float *)((int)lVar24 + 4) * fVar8;
      lVar24 = lVar24 + 8;
      lVar30 = lVar30 + -1;
    } while (lVar30 != 0);
    lVar24 = 2;
    lVar19 = lVar20;
    dVar31 = dVar35;
    do {
      iVar22 = (int)lVar19;
      lVar19 = lVar19 + 0x10;
      iVar11 = (int)lVar27;
      lVar27 = lVar27 + 0x10;
      dVar31 = (double)((float)(dVar31 + (double)*(float *)(iVar22 + 0x114)) +
                        *(float *)(iVar11 + 4) + *(float *)(iVar11 + 8) + *(float *)(iVar11 + 0xc));
      lVar24 = lVar24 + -1;
    } while (lVar24 != 0);
    dVar37 = (double)((float)(dVar31 + 0.7853981852531433) * fVar4 + fVar5);
  }
  dVar32 = (double)FastDiffRots(dVar37,(double)(moby->rotation).z);
  *(float *)((int)puVar13 + 0xd4) = (float)dVar33;
  fVar4 = SQRT((float)(dVar36 * dVar36 + (double)(float)(dVar34 * dVar34)));
  dVar34 = ABS((double)fVar4);
  *(float *)(puVar13 + 0x1a) = fVar4;
  *(float *)(puVar13 + 0x1b) = (float)(dVar34 - ABS(dVar33));
  uVar18 = (ulonglong)(*(uint *)(puVar13 + 0x1a) >> 0x1c) & 8 |
           (ulonglong)(*(uint *)(puVar13 + 0x1b) >> 0x1e) & 2 |
           (ulonglong)(*(uint *)((int)puVar13 + 0xd4) >> 0x1d) & 4;
  dVar31 = ABS((double)*(float *)(puVar13 + 0x1a));
  if ((double)*(float *)(puVar13 + 0x1b) - dVar35 < 0.0) {
    dVar31 = ABS(dVar33);
  }
  fVar5 = *(float *)(&g_atanQuadrantTable + (int)(uVar18 << 2));
  fVar4 = *(float *)(((uint)(uVar18 << 2) | 0x735900) + 4);
  dVar33 = ABS((double)*(float *)((int)puVar13 + 0xd4));
  if ((double)*(float *)(puVar13 + 0x1b) - dVar35 < 0.0) {
    dVar33 = dVar34;
  }
  if (dVar35 < dVar31) {
    lVar19 = uVar17 - 0x1c0;
    lVar27 = uVar17 - 0xcc;
    lVar24 = uVar17 - 0xdc;
    lVar30 = 2;
    fVar7 = (float)(dVar33 - dVar31) / (float)(dVar33 + dVar31);
    fVar8 = fVar7 * fVar7;
    *(float *)(puVar13 + 0x20) = fVar7;
    *(float *)(puVar13 + 0x1f) = fVar7;
    *(float *)((int)puVar13 + 0xfc) = fVar7;
    *(float *)((int)puVar13 + 0xf4) = fVar7;
    fVar7 = fVar8 * fVar8;
    *(float *)(puVar13 + 0x1f) = *(float *)(puVar13 + 0x1f) * fVar8;
    *(float *)((int)puVar13 + 0xfc) = *(float *)((int)puVar13 + 0xfc) * fVar7;
    *(float *)(puVar13 + 0x20) = *(float *)(puVar13 + 0x20) * fVar7 * fVar8;
    do {
      *(float *)((int)lVar19 + 0xf4) = *(float *)((int)lVar19 + 0xe4) * fVar7 * fVar7;
      iVar22 = (int)lVar24;
      lVar24 = lVar24 + 8;
      lVar19 = lVar19 + 8;
      *(float *)((int)lVar27 + 4) = *(float *)(iVar22 + 4) * fVar7 * fVar7;
      lVar27 = lVar27 + 8;
      lVar30 = lVar30 + -1;
    } while (lVar30 != 0);
    lVar30 = 4;
    lVar27 = uVar17 - 0xdc;
    pfVar25 = (float *)&DAT_007358e0;
    lVar19 = lVar20;
    lVar24 = lVar27;
    do {
      fVar7 = *pfVar25;
      fVar8 = pfVar25[1];
      pfVar25 = pfVar25 + 2;
      *(float *)((int)lVar19 + 0xf4) = *(float *)((int)lVar19 + 0xf4) * fVar7;
      lVar19 = lVar19 + 8;
      *(float *)((int)lVar24 + 4) = *(float *)((int)lVar24 + 4) * fVar8;
      lVar24 = lVar24 + 8;
      lVar30 = lVar30 + -1;
    } while (lVar30 != 0);
    lVar19 = 2;
    do {
      iVar22 = (int)lVar20;
      iVar11 = (int)lVar27;
      lVar20 = lVar20 + 0x10;
      lVar27 = lVar27 + 0x10;
      dVar35 = (double)((float)(dVar35 + (double)*(float *)(iVar22 + 0xf4)) + *(float *)(iVar11 + 4)
                        + *(float *)(iVar11 + 8) + *(float *)(iVar11 + 0xc));
      lVar19 = lVar19 + -1;
    } while (lVar19 != 0);
    dVar35 = (double)((float)(dVar35 + 0.7853981852531433) * fVar5 + fVar4);
  }
  dVar35 = -dVar35;
  dVar31 = 1.5707963705062866;
  if ((dVar32 <= 1.5707963705062866) && (dVar31 = dVar32, dVar32 < -1.5707963705062866)) {
    dVar31 = -1.5707963705062866;
  }
  dVar33 = 0.5235987901687622;
  if ((dVar35 <= 0.5235987901687622) && (dVar33 = dVar35, dVar35 < -0.5235987901687622)) {
    dVar33 = -0.5235987901687622;
  }
  *(float *)((int)pvVar10 + 0xa8) = (float)(dVar31 * 0.699999988079071);
  *(float *)((int)pvVar10 + 0xa4) = (float)dVar33;
  *(float *)((int)pvVar10 + 0x128) = (float)(dVar31 * 0.30000001192092896);
LAB_0045c40c:
  if (Cheats[0] != '\0') {
    *(undefined4 *)((int)pvVar10 + 0xb0) = 0x40300000;
  }
  dVar31 = 0.30000001192092896;
  MB_UpdateManipulatorRot
            ((double)(float)((double)DAT_0071f40c * dVar38),
             (double)(float)((double)DAT_0071f40c * 0.30000001192092896),moby,uVar29 + 0x40,0);
  MB_UpdateManipulatorRot
            ((double)(float)((double)DAT_0071f40c * dVar38),
             (double)(float)((double)DAT_0071f40c * dVar31),moby,uVar29 + 0xc0,1);
  return;
}


