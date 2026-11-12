// game/draw.cpp -- reconstructed from NPEA00385 EBOOT
// STATUS: NOT STARTED (raw Ghidra output)
// 165 functions, 0x6565c-0x78140
#include <math.h>
#include <stdio.h>
#include <string.h>
#include "game/draw.h"
#include "game/boot.h"
#include "game/camera.h"
#include "game/debug.h"
#include "game/freeze.h"
#include "game/help.h"
#include "game/hero.h"
#include "game/hud.h"
#include "game/initsky.h"
#include "game/initspace.h"
#include "game/lights.h"
#include "game/loaders.h"
#include "game/mUnk.h"
#include "game/main.h"
#include "game/memcard.h"
#include "game/mesh.h"
#include "game/mobyfunc.h"
#include "game/mobyproc.h"
#include "game/mobyutil.h"
#include "game/partproc.h"
#include "game/pause.h"
#include "game/rUnk.h"
#include "game/skyfunc.h"
#include "game/space.h"
#include "game/update.h"
#include "game/vuchain.h"
#include "game/water.h"
#include "idol/fastfunc.h"
#include "idol/idol_draw.h"
#include "idol/mUnk.h"
#include "idol/mathfunc.h"
#include "idol/shrubfunc.h"
#include "idol/tfragfunc.h"
#include "idol/tiefunc.h"
#include "sdk/fios.h"
#include "sdk/libgcm_cmd/marker.h"
#include "sdk/mUnk4.h"
#include "sdk/sce.h"

// 0x006565c (0x14 bytes)
void SECTION_HEADER_DRAW(void)

{
  DAT_0071eeac = 0x10000;
  return;
}


// 0x0065670 (0x48 bytes)
void ResetFrameBufferInfo(void)

{
  FlushCache(0);
  SetFrameBufferInfo(0x200,0x1a0,0x200,0x1c0,0,0);
  return;
}


// 0x00656b8 (0x104 bytes)
void ResetFrameBufferForCutscene(void)

{
  undefined4 uVar1;
  
  g_CutscenePlaying = 1;
  DAT_00e5aa70 = 0;
  STUB_001754e0();
  STUB_00503070(1);
  STUB_000e9138();
  STUB_0050307c(0,0xb,(ZERO_MASK(Cutscene)) + 0xd,9);
  STUB_00503080();
  VU1_initChain();
  uVar1 = g_GsRamBase;
  g_pPacket = 0;
  FlushCache(0);
  SetFrameBufferInfo(0x200,0x1a0,0x200,0x1c0,0,0);
  g_GsRamBase = uVar1;
  VU1_initChain();
  STUB_001754dc();
  return;
}


// 0x00657c8 (0x1b0 bytes)
int CheckBSphere(float *bsphere)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double in_f9;
  
  dVar7 = (double)bsphere[3];
  fVar2 = -(GameCamera.posY * 1024.0 - bsphere[1]);
  fVar3 = -(GameCamera.posX * 1024.0 - *bsphere);
  fVar4 = -(GameCamera.posZ * 1024.0 - bsphere[2]);
  fVar1 = (float)(dVar7 - in_f9);
  fVar6 = GameCamera.mtx0.v2.x * fVar4 + GameCamera.mtx0.v0.x * fVar3 + GameCamera.mtx0.v1.x * fVar2
  ;
  fVar5 = GameCamera.mtx0.v2.y * fVar4 + GameCamera.mtx0.v0.y * fVar3 + GameCamera.mtx0.v1.y * fVar2
  ;
  dVar8 = (double)(GameCamera.mtx0.v3.z * fVar1 +
                  GameCamera.mtx0.v2.z * fVar4 +
                  GameCamera.mtx0.v0.z * fVar3 + GameCamera.mtx0.v1.z * fVar2);
  dVar9 = (double)(GameCamera.mtx0.v3.x * fVar1 + fVar6);
  dVar10 = (double)(GameCamera.mtx0.v3.y * fVar1 + fVar5);
  if (g_ViewContext.nearClip <= (float)(dVar8 + dVar7)) {
    if ((float)(dVar8 - dVar7) <= g_ViewContext.farClip) {
      if (dVar9 - 0.0 < 0.0) {
        dVar9 = -(double)(GameCamera.mtx0.v3.x * fVar1 + fVar6);
      }
      if (dVar10 - 0.0 < 0.0) {
        dVar10 = -(double)(GameCamera.mtx0.v3.y * fVar1 + fVar5);
      }
      if ((float)(dVar8 * (double)g_ViewContext.xratio) <
          -(float)(dVar7 * (double)g_ViewContext.xradpad - dVar9)) {
        return -1;
      }
      if ((float)(dVar8 * (double)g_ViewContext.yratio) <
          -(float)(dVar7 * (double)g_ViewContext.yradpad - dVar10)) {
        return -1;
      }
      if ((float)(dVar8 - dVar7) <= g_ViewContext.nearClip) {
        return 0;
      }
      if (g_ViewContext.farClip <= (float)(dVar8 + dVar7)) {
        return 0;
      }
      if ((float)(dVar8 * (double)g_ViewContext.xratio) * 3.0 <=
          (float)(dVar7 * (double)g_ViewContext.xradpad + dVar9)) {
        return 0;
      }
      if ((float)(dVar8 * (double)g_ViewContext.yratio) * 3.0 <=
          (float)(dVar7 * (double)g_ViewContext.yradpad + dVar10)) {
        return 0;
      }
      return 1;
    }
  }
  return -1;
}


// 0x0065a00 (0x684 bytes)
// inlined: FastAtan2 @0x65adc
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void UploadViewMatricesToPasses(void)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  code *pcVar5;
  RenderingStep *pRVar6;
  undefined4 uVar7;
  ulonglong *puVar8;
  float fVar9;
  int iVar10;
  int *piVar11;
  float fVar12;
  longlong lVar13;
  undefined4 *puVar14;
  int iVar15;
  int *piVar16;
  longlong lVar17;
  longlong lVar18;
  RsxCmd *pRVar20;
  ulonglong uVar19;
  ulonglong uVar21;
  longlong lVar22;
  float *pfVar23;
  longlong lVar24;
  ulonglong uVar25;
  RsxCmd *pRVar27;
  ulonglong uVar26;
  RenderingStep **ppRVar28;
  int *piVar29;
  ulonglong unaff_r28;
  ulonglong unaff_r29;
  ulonglong unaff_r30;
  ulonglong unaff_r31;
  ulonglong in_LR;
  longlong lVar30;
  GPiece<16> auVar31;
  GPiece<16> auVar32;
  GPiece<16> auVar33;
  GPiece<16> auVar34;
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
  GPiece<16> auVar45;
  GPiece<16> auVar46;
  GPiece<16> auVar47;
  GPiece<16> auVar48;
  GPiece<16> auVar49;
  undefined4 in_vr31_32_0;
  undefined4 in_vr31_32_1;
  undefined4 in_vr31_32_2;
  undefined4 in_vr31_32_3;
  GPiece<16> auVar50;
  
  uVar19 = ZEXT48(&stack0x00000000);
  lVar18 = uVar19 - 0x240;
  puVar8 = (ulonglong *)lVar18;
  *puVar8 = uVar19;
  puVar8[0x4a] = in_LR;
  lVar13 = uVar19 - 0x30;
  puVar14 = (undefined4 *)lVar13;
  puVar14[3] = in_vr31_32_3;
  puVar14[2] = in_vr31_32_2;
  puVar14[1] = in_vr31_32_1;
  *puVar14 = in_vr31_32_0;
  puVar8[0x47] = unaff_r31;
  fVar4 = g_ViewContext.yratio;
  *(undefined4 *)(puVar8 + 0x3c) = 0x3f800000;
  piVar11 = g_pIdolDraw;
  fVar2 = ABS(fVar4);
  *(float *)((int)puVar8 + 0x1e4) = 1.0 - fVar2;
  fVar12 = FLOAT_0095d1c8;
  fVar9 = 0.0;
  puVar14 = *(undefined4 **)(*piVar11 + 0x20);
  uVar21 = (ulonglong)(*(uint *)((int)puVar8 + 0x1e4) >> 0x1e) & 2 |
           (ulonglong)((uint)fVar4 >> 0x1d) & 4;
  fVar4 = *(float *)(&g_atanQuadrantTable + (int)(uVar21 << 2));
  fVar3 = ABS(*(float *)(puVar8 + 0x3c));
  if (*(float *)((int)puVar8 + 0x1e4) - 0.0 < 0.0) {
    fVar3 = fVar2;
  }
  fVar1 = *(float *)(((uint)(uVar21 << 2) | 0x735900) + 4);
  if (*(float *)((int)puVar8 + 0x1e4) - 0.0 < 0.0) {
    fVar2 = 1.0;
  }
  puVar8[0x46] = unaff_r30;
  puVar8[0x45] = unaff_r29;
  puVar8[0x44] = unaff_r28;
  if (0.0 < fVar3) {
    lVar17 = uVar19 - 0x230;
    lVar22 = uVar19 - 0x58;
    lVar24 = uVar19 - 0x48;
    lVar30 = 2;
    fVar2 = (fVar2 - fVar3) / (fVar2 + fVar3);
    fVar3 = fVar2 * fVar2;
    *(float *)((int)puVar8 + 500) = fVar2;
    *(float *)((int)puVar8 + 0x1ec) = fVar2;
    *(float *)(puVar8 + 0x3e) = fVar2;
    *(float *)(puVar8 + 0x3d) = fVar2;
    fVar2 = fVar3 * fVar3;
    *(float *)((int)puVar8 + 0x1ec) = *(float *)((int)puVar8 + 0x1ec) * fVar3;
    *(float *)(puVar8 + 0x3e) = *(float *)(puVar8 + 0x3e) * fVar2;
    *(float *)((int)puVar8 + 500) = *(float *)((int)puVar8 + 500) * fVar2 * fVar3;
    do {
      *(float *)((int)lVar17 + 0x1e8) = *(float *)((int)lVar17 + 0x1d8) * fVar2 * fVar2;
      iVar15 = (int)lVar22;
      lVar17 = lVar17 + 8;
      lVar22 = lVar22 + 8;
      *(float *)((int)lVar24 + 4) = *(float *)(iVar15 + 4) * fVar2 * fVar2;
      lVar24 = lVar24 + 8;
      lVar30 = lVar30 + -1;
    } while (lVar30 != 0);
    lVar30 = 4;
    lVar24 = uVar19 - 0x58;
    pfVar23 = (float *)&DAT_007358e0;
    lVar17 = lVar18;
    lVar22 = lVar24;
    do {
      fVar2 = *pfVar23;
      fVar3 = pfVar23[1];
      pfVar23 = pfVar23 + 2;
      *(float *)((int)lVar17 + 0x1e8) = *(float *)((int)lVar17 + 0x1e8) * fVar2;
      lVar17 = lVar17 + 8;
      *(float *)((int)lVar22 + 4) = *(float *)((int)lVar22 + 4) * fVar3;
      lVar22 = lVar22 + 8;
      lVar30 = lVar30 + -1;
    } while (lVar30 != 0);
    lVar17 = 2;
    do {
      iVar15 = (int)lVar18;
      iVar10 = (int)lVar24;
      lVar18 = lVar18 + 0x10;
      lVar24 = lVar24 + 0x10;
      fVar9 = fVar9 + *(float *)(iVar15 + 0x1e8) + *(float *)(iVar10 + 4) + *(float *)(iVar10 + 8) +
              *(float *)(iVar10 + 0xc);
      lVar17 = lVar17 + -1;
    } while (lVar17 != 0);
    fVar9 = (fVar9 + 0.7853982) * fVar4 + fVar1;
  }
  pcVar5 = (code *)*puVar14;
  puVar8[5] = ZEXT48(&TOC_BASE);
  (*pcVar5)((double)(fVar9 * 57.295776 * fVar12),0x3fb99999a0000000,0x4092c00000000000,piVar11);
  auVar36 = _DAT_000659b0;
  auVar34 = _DAT_000659a0;
  auVar43 = ZEXT416(0);
  auVar31 = auVar43 | auVar43 << 0x20 | auVar43 << 0x40 | auVar43 << 0x60;
  auVar32 = loadVectorLeftIndexed(0x13c0,0x950000);
  auVar33 = loadVectorLeftIndexed(0x20,0x9513c0);
  auVar35 = loadVectorLeftIndexed(4,0x9513c0);
  auVar37 = loadVectorLeftIndexed(0x10,0x9513c0);
  auVar38 = loadVectorLeftIndexed(0x14,0x9513c0);
  auVar39 = loadVectorLeftIndexed(0x24,0x9513c0);
  auVar40 = loadVectorLeftIndexed(8,0x9513c0);
  auVar41 = loadVectorLeftIndexed(0x18,0x9513c0);
  auVar42 = loadVectorLeftIndexed(0x28,0x9513c0);
  auVar43 = loadVectorLeftIndexed(0x140,0x9513c0);
  auVar44 = loadVectorLeftIndexed(0x144,0x9513c0);
  auVar45 = loadVectorLeftIndexed(0x148,0x9513c0);
  auVar46 = loadVectorLeftIndexed(lVar13,0x65980);
  auVar44 = vectorPermute(auVar43,auVar44,_DAT_000659a0);
  auVar43 = auVar46 >> 0x60 & (GPiece<16>)0xffffffff;
  auVar46 = vectorPermute(auVar32,auVar37,_DAT_000659a0);
  auVar48 = vectorPermute(auVar35,auVar38,_DAT_000659a0);
  auVar43 = vectorPermute(auVar45,auVar43 | auVar43 << 0x20 | auVar43 << 0x40 | auVar43 << 0x60,
                          _DAT_000659a0);
  auVar32 = vectorPermute(auVar32,auVar35,_DAT_000659a0);
  auVar50 = vectorPermute(auVar40,auVar41,_DAT_000659a0);
  auVar35 = vectorPermute(auVar44,auVar43,_DAT_000659b0);
  auVar40 = vectorPermute(auVar40,*(undefined1 (*) [16])(puVar8 + 0xe),_DAT_000659a0);
  auVar37 = vectorPermute(auVar37,auVar38,_DAT_000659a0);
  auVar47 = vectorPermute(auVar33,auVar31,_DAT_000659a0);
  auVar49 = vectorPermute(auVar39,auVar31,_DAT_000659a0);
  auVar38 = vectorPermute(auVar41,*(undefined1 (*) [16])(puVar8 + 0x10),_DAT_000659a0);
  auVar43 = vectorPermute(auVar42,auVar31,_DAT_000659a0);
  auVar31 = vectorPermute(auVar32,auVar40,_DAT_000659b0);
  auVar32 = vectorPermute(auVar33,auVar39,_DAT_000659a0);
  auVar39 = vectorPermute(auVar42,*(undefined1 (*) [16])(puVar8 + 0x12),_DAT_000659a0);
  auVar33 = vectorPermute(auVar37,auVar38,_DAT_000659b0);
  auVar37 = vectorPermute(auVar46,auVar47,_DAT_000659b0);
  auVar43 = vectorPermute(auVar50,auVar43,_DAT_000659b0);
  auVar38 = vectorPermute(auVar48,auVar49,_DAT_000659b0);
  auVar32 = vectorPermute(auVar32,auVar39,_DAT_000659b0);
  *(undefined1 (*) [16])(puVar8 + 0x16) = auVar31;
  *(undefined1 (*) [16])(puVar8 + 0x22) = auVar35;
  *(undefined1 (*) [16])(puVar8 + 0x18) = auVar33;
  *(undefined1 (*) [16])(puVar8 + 0x20) = auVar43;
  *(undefined1 (*) [16])(puVar8 + 0x1e) = auVar38;
  *(undefined1 (*) [16])(puVar8 + 0x1a) = auVar32;
  *(undefined1 (*) [16])(puVar8 + 0x1c) = auVar37;
  iVar15 = *piVar11;
  puVar8[5] = puVar8[5];
  auVar43 = vectorPermute(auVar45,*(undefined1 (*) [16])(puVar8 + 0x14),auVar34);
  vectorPermute(auVar44,auVar43,auVar36);
  pcVar5 = (code *)**(undefined4 **)(iVar15 + 0x24);
  (*pcVar5)(piVar11,uVar19 - 0x160,*(undefined4 **)(iVar15 + 0x24),pcVar5,uVar19 - 400);
  auVar31 = vectorMergeHighWord(*(undefined1 (*) [16])((uint)(piVar11 + 0x38) & 0xfffffff0),
                                *(undefined1 (*) [16])((uint)(piVar11 + 0x40) & 0xfffffff0));
  auVar32 = vectorMergeHighWord(*(undefined1 (*) [16])((uint)(piVar11 + 0x3c) & 0xfffffff0),
                                *(undefined1 (*) [16])((uint)(piVar11 + 0x44) & 0xfffffff0));
  auVar43 = vectorMergeLowWord(*(undefined1 (*) [16])((uint)(piVar11 + 0x38) & 0xfffffff0),
                               *(undefined1 (*) [16])((uint)(piVar11 + 0x40) & 0xfffffff0));
  auVar34 = vectorMergeLowWord(*(undefined1 (*) [16])((uint)(piVar11 + 0x3c) & 0xfffffff0),
                               *(undefined1 (*) [16])((uint)(piVar11 + 0x44) & 0xfffffff0));
  auVar36 = vectorMergeHighWord(auVar31,auVar32);
  auVar31 = vectorMergeLowWord(auVar31,auVar32);
  auVar32 = vectorMergeHighWord(auVar43,auVar34);
  auVar43 = vectorMergeLowWord(auVar43,auVar34);
  *(undefined1 (*) [16])(puVar8 + 0x24) = auVar36;
  *(undefined1 (*) [16])(puVar8 + 0x26) = auVar31;
  iVar15 = 0;
  *(undefined1 (*) [16])(puVar8 + 0x28) = auVar32;
  *(undefined1 (*) [16])(puVar8 + 0x2a) = auVar43;
  auVar31 = vectorMergeHighWord(*(undefined1 (*) [16])((uint)(piVar11 + 0x28) & 0xfffffff0),
                                *(undefined1 (*) [16])((uint)(piVar11 + 0x30) & 0xfffffff0));
  ppRVar28 = &DepthPass;
  auVar43 = vectorMergeLowWord(*(undefined1 (*) [16])((uint)(piVar11 + 0x28) & 0xfffffff0),
                               *(undefined1 (*) [16])((uint)(piVar11 + 0x30) & 0xfffffff0));
  auVar34 = vectorMergeHighWord(*(undefined1 (*) [16])((uint)(piVar11 + 0x2c) & 0xfffffff0),
                                *(undefined1 (*) [16])((uint)(piVar11 + 0x34) & 0xfffffff0));
  auVar36 = vectorMergeLowWord(*(undefined1 (*) [16])((uint)(piVar11 + 0x2c) & 0xfffffff0),
                               *(undefined1 (*) [16])((uint)(piVar11 + 0x34) & 0xfffffff0));
  auVar32 = vectorMergeHighWord(auVar31,auVar34);
  auVar34 = vectorMergeLowWord(auVar31,auVar34);
  auVar31 = vectorMergeHighWord(auVar43,auVar36);
  auVar43 = vectorMergeLowWord(auVar43,auVar36);
  *(undefined1 (*) [16])(puVar8 + 0x2c) = auVar32;
  *(undefined1 (*) [16])(puVar8 + 0x2e) = auVar34;
  *(undefined1 (*) [16])(puVar8 + 0x30) = auVar31;
  *(undefined1 (*) [16])(puVar8 + 0x32) = auVar43;
  do {
    pRVar6 = *ppRVar28;
    lVar18 = uVar19 - 0x120;
    lVar13 = 8;
    *pRVar6->command = 0x441efc;
    pRVar6->command[1] = 0;
    pRVar27 = pRVar6->command + 2;
    pRVar6->command = pRVar27;
    do {
      pRVar20 = (RsxCmd *)lVar18;
      *pRVar27 = *pRVar20;
      pRVar27 = pRVar6->command;
      pRVar6->command = pRVar27 + 1;
      lVar18 = lVar18 + 8;
      pRVar27[1] = pRVar20[1];
      pRVar27 = pRVar6->command + 1;
      pRVar6->command = pRVar27;
      lVar13 = lVar13 + -1;
    } while (lVar13 != 0);
    pRVar6 = *ppRVar28;
    lVar18 = uVar19 - 0xe0;
    lVar13 = 8;
    *pRVar6->command = 0x441efc;
    pRVar6->command[1] = 8;
    pRVar27 = pRVar6->command + 2;
    pRVar6->command = pRVar27;
    do {
      pRVar20 = (RsxCmd *)lVar18;
      *pRVar27 = *pRVar20;
      pRVar27 = pRVar6->command;
      pRVar6->command = pRVar27 + 1;
      lVar18 = lVar18 + 8;
      pRVar27[1] = pRVar20[1];
      pRVar27 = pRVar6->command + 1;
      pRVar6->command = pRVar27;
      lVar13 = lVar13 + -1;
    } while (lVar13 != 0);
    iVar15 = iVar15 + 1;
    ppRVar28 = ppRVar28 + 1;
  } while (iVar15 < 0xb);
  lVar13 = 8;
  *(undefined4 *)((int)puVar8 + 0x1ac) = 0;
  *(undefined4 *)(puVar8 + 0x35) = 0;
  *(undefined4 *)((int)puVar8 + 0x1a4) = 0;
  *(undefined4 *)(puVar8 + 0x34) = 0x3f800000;
  *(undefined4 *)((int)puVar8 + 0x1bc) = 0;
  *(undefined4 *)(puVar8 + 0x37) = 0;
  *(undefined4 *)((int)puVar8 + 0x1b4) = 0x3f800000;
  *(undefined4 *)(puVar8 + 0x36) = 0;
  pRVar6 = DepthPass;
  *(undefined4 *)((int)puVar8 + 0x1cc) = 0;
  *(undefined4 *)(puVar8 + 0x39) = 0x3f800000;
  *(undefined4 *)((int)puVar8 + 0x1c4) = 0;
  *(undefined4 *)(puVar8 + 0x38) = 0;
  *(undefined4 *)((int)puVar8 + 0x1dc) = 0x3f800000;
  *(undefined4 *)(puVar8 + 0x3b) = 0;
  *(undefined4 *)((int)puVar8 + 0x1d4) = 0;
  *(undefined4 *)(puVar8 + 0x3a) = 0;
  lVar18 = uVar19 - 0xa0;
  *pRVar6->command = 0x441efc;
  pRVar6->command[1] = 4;
  pRVar27 = pRVar6->command + 2;
  pRVar6->command = pRVar27;
  do {
    pRVar20 = (RsxCmd *)lVar18;
    *pRVar27 = *pRVar20;
    pRVar27 = pRVar6->command;
    pRVar6->command = pRVar27 + 1;
    lVar18 = lVar18 + 8;
    pRVar27[1] = pRVar20[1];
    pRVar27 = pRVar6->command + 1;
    pRVar6->command = pRVar27;
    lVar13 = lVar13 + -1;
  } while (lVar13 != 0);
  uVar19 = ZEXT48(&g_FrustumPlanes[0].x);
  uVar21 = ZEXT48(&g_FrustumPlanes[0].y);
  uVar25 = ZEXT48(&g_FrustumPlanes[0].z);
  uVar26 = ZEXT48(&g_FrustumPlanes[0].w);
  lVar18 = 6;
  piVar16 = piVar11;
  do {
    piVar29 = piVar16 + 200;
    piVar16 = piVar16 + 4;
    auVar43 = auRam00000000 >> 0x60 & (GPiece<16>)0xffffffff;
    uVar7 = storeVectorElementWordIndexed
                      (auVar43 | auVar43 << 0x20 | auVar43 << 0x40 | auVar43 << 0x60,0,uVar19);
    *(undefined4 *)uVar19 = uVar7;
    uVar19 = uVar19 + 0x10;
    auVar43 = auRam00000000 >> 0x40 & (GPiece<16>)0xffffffff;
    uVar7 = storeVectorElementWordIndexed
                      (auVar43 | auVar43 << 0x20 | auVar43 << 0x40 | auVar43 << 0x60,0,uVar21);
    *(undefined4 *)uVar21 = uVar7;
    uVar21 = uVar21 + 0x10;
    auVar43 = *(undefined1 (*) [16])((uint)piVar29 & 0xfffffff0) >> 0x20 &
              (GPiece<16>)0xffffffff;
    uVar7 = storeVectorElementWordIndexed
                      (auVar43 | auVar43 << 0x20 | auVar43 << 0x40 | auVar43 << 0x60,0,uVar25);
    *(undefined4 *)uVar25 = uVar7;
    uVar25 = uVar25 + 0x10;
    auVar43 = *(undefined1 (*) [16])((uint)piVar29 & 0xfffffff0) & (GPiece<16>)0xffffffff;
    uVar7 = storeVectorElementWordIndexed
                      (auVar43 | auVar43 << 0x20 | auVar43 << 0x40 | auVar43 << 0x60,0,uVar26);
    *(undefined4 *)uVar26 = uVar7;
    uVar26 = uVar26 + 0x10;
    lVar18 = lVar18 + -1;
  } while (lVar18 != 0);
  auVar36 = *(undefined1 (*) [16])((uint)(piVar11 + 0xe0) & 0xfffffff0);
  auVar43 = auVar36 >> 0x60 & (GPiece<16>)0xffffffff;
  auVar34 = auVar36 >> 0x40 & (GPiece<16>)0xffffffff;
  auVar36 = auVar36 >> 0x20 & (GPiece<16>)0xffffffff;
  DAT_00a24608 = storeVectorElementWordIndexed
                           (auVar43 | auVar43 << 0x20 | auVar43 << 0x40 | auVar43 << 0x60,0x4608,
                            0xa20000);
  DAT_00a2460c = storeVectorElementWordIndexed
                           (auVar34 | auVar34 << 0x20 | auVar34 << 0x40 | auVar34 << 0x60,4,0xa24608
                           );
  DAT_00a24610 = storeVectorElementWordIndexed
                           (auVar36 | auVar36 << 0x20 | auVar36 << 0x40 | auVar36 << 0x60,8,0xa24608
                           );
  return;
}


// 0x0066088 (0x504 bytes)
void ComposeCameraMatrix(void)

{
  undefined8 uVar1;
  double extraout_f1;
  double extraout_f1_00;
  double extraout_f1_01;
  double extraout_f1_02;
  double extraout_f1_03;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  float local_e0;
  float local_dc;
  float local_d8;
  float local_d4;
  float local_d0;
  float local_cc;
  float local_c8;
  float local_c4;
  float local_c0;
  float local_bc;
  float local_b8;
  float local_b4;
  float local_a0;
  float local_9c;
  float local_98;
  float local_90;
  float local_8c;
  float local_88;
  float local_80;
  float local_7c;
  float local_78;
  
  if (ControlMode == 0) {
    local_e0 = GameCamera.orientMtx.forward.x;
    local_dc = GameCamera.orientMtx.forward.y;
    local_d8 = GameCamera.orientMtx.forward.z;
    local_d4 = GameCamera.orientMtx.forward.w;
    local_d0 = GameCamera.orientMtx.right.x;
    local_cc = GameCamera.orientMtx.right.y;
    local_c8 = GameCamera.orientMtx.right.z;
    local_c4 = GameCamera.orientMtx.right.w;
    local_c0 = GameCamera.orientMtx.up.x;
    local_bc = GameCamera.orientMtx.up.y;
    local_b8 = GameCamera.orientMtx.up.z;
    local_b4 = GameCamera.orientMtx.up.w;
  }
  else {
    uVar1 = _FSin((double)GameCamera.rot.azimuth,ControlMode,0);
    dVar9 = extraout_f1;
    uVar1 = _FSin((double)GameCamera.rot.azimuth,uVar1,1);
    dVar8 = extraout_f1_00;
    uVar1 = _FSin((double)GameCamera.rot.elevation,uVar1,0);
    dVar7 = extraout_f1_01;
    uVar1 = _FSin((double)GameCamera.rot.elevation,uVar1,1);
    dVar6 = extraout_f1_02;
    uVar1 = _FSin((double)GameCamera.rot.radius,uVar1,0);
    dVar5 = extraout_f1_03;
    dVar2 = (double)_FSin((double)GameCamera.rot.radius,uVar1,1);
    dVar4 = (double)(float)(dVar7 * dVar5);
    dVar3 = (double)(float)(dVar2 * dVar7);
    memcpy(&local_a0,&DAT_0071f028,0x40);
    local_a0 = (float)(dVar6 * dVar2);
    local_9c = (float)(dVar6 * dVar5);
    local_88 = (float)(dVar6 * dVar9);
    local_78 = (float)(dVar8 * dVar6);
    local_90 = (float)(dVar9 * dVar3 - (double)(float)(dVar8 * dVar5));
    local_8c = (float)(dVar9 * dVar4 + (double)(float)(dVar8 * dVar2));
    local_80 = (float)(dVar8 * dVar3 + (double)(float)(dVar9 * dVar5));
    local_7c = (float)(dVar8 * dVar4 - (double)(float)(dVar2 * dVar9));
    local_98 = (float)-dVar7;
    memcpy(&local_e0,&local_a0,0x40);
  }
  GameCamera.mtx0.v0.x = -local_d0;
  GameCamera.mtx0.v1.x = -local_cc;
  GameCamera.mtx0.v2.x = -local_c8;
  GameCamera.mtx0.v0.y = -local_c0;
  GameCamera.mtx0.v1.y = -local_bc;
  GameCamera.mtx0.v2.y = -local_b8;
  GameCamera.mtx0.v3.x = 0.0;
  GameCamera.mtx0.v0.z = local_e0;
  GameCamera.mtx0.v3.y = 0.0;
  GameCamera.mtx0.v1.z = local_dc;
  GameCamera.mtx0.v2.z = local_d8;
  GameCamera.mtx0.v3.z = 0.0;
  GameCamera.mtx0.v0.w = 0.0;
  GameCamera.mtx0.v1.w = 0.0;
  GameCamera.mtx0.v2.w = 0.0;
  GameCamera.mtx0.v3.w = 1.0;
  FastVecMtx4Mul(0x951400,0x95d040,&GameCamera);
  FastVecMtx4Mul(0x951440,0x95d080,&GameCamera);
  GameCamera.mtx2.v0.x = GameCamera.mtx2.v0.w * g_ViewContext.hvdf[0] + GameCamera.mtx2.v0.x;
  GameCamera.mtx2.v0.y = GameCamera.mtx2.v0.w * g_ViewContext.hvdf[1] + GameCamera.mtx2.v0.y;
  GameCamera.mtx2.v0.z = GameCamera.mtx2.v0.w * g_ViewContext.hvdf[2] + GameCamera.mtx2.v0.z;
  GameCamera.mtx2.v1.x = GameCamera.mtx2.v1.w * g_ViewContext.hvdf[0] + GameCamera.mtx2.v1.x;
  GameCamera.mtx2.v1.y = GameCamera.mtx2.v1.w * g_ViewContext.hvdf[1] + GameCamera.mtx2.v1.y;
  GameCamera.mtx2.v1.z = GameCamera.mtx2.v1.w * g_ViewContext.hvdf[2] + GameCamera.mtx2.v1.z;
  GameCamera.mtx2.v2.x = GameCamera.mtx2.v2.w * g_ViewContext.hvdf[0] + GameCamera.mtx2.v2.x;
  GameCamera.mtx2.v2.y = GameCamera.mtx2.v2.w * g_ViewContext.hvdf[1] + GameCamera.mtx2.v2.y;
  GameCamera.mtx2.v2.z = GameCamera.mtx2.v2.w * g_ViewContext.hvdf[2] + GameCamera.mtx2.v2.z;
  GameCamera.mtx2.v3.x = GameCamera.mtx2.v3.w * g_ViewContext.hvdf[0] + GameCamera.mtx2.v3.x;
  GameCamera.mtx2.v3.y = GameCamera.mtx2.v3.w * g_ViewContext.hvdf[1] + GameCamera.mtx2.v3.y;
  GameCamera.mtx2.v3.z = GameCamera.mtx2.v3.w * g_ViewContext.hvdf[2] + GameCamera.mtx2.v3.z;
  FastVecMtx4Mul(0x951480,0x95d0c0,&GameCamera);
  GameCamera.mtx4.v0.x = g_ViewContext.hMtx.forward.x * g_ViewContext.guardX;
  GameCamera.mtx4.v0.y = g_ViewContext.hMtx.forward.y * g_ViewContext.guardX;
  GameCamera.mtx4.v0.z = g_ViewContext.hMtx.forward.z * g_ViewContext.guardX;
  GameCamera.mtx4.v0.w = g_ViewContext.hMtx.forward.w * g_ViewContext.guardX;
  GameCamera.mtx4.v1.x = g_ViewContext.hMtx.right.x * g_ViewContext.guardX;
  GameCamera.mtx4.v1.y = g_ViewContext.hMtx.right.y * g_ViewContext.guardX;
  GameCamera.mtx4.v1.z = g_ViewContext.hMtx.right.z * g_ViewContext.guardX;
  GameCamera.mtx4.v1.w = g_ViewContext.hMtx.right.w * g_ViewContext.guardX;
  GameCamera.mtx4.v2.x = g_ViewContext.hMtx.up.x;
  GameCamera.mtx4.v2.y = g_ViewContext.hMtx.up.y;
  GameCamera.mtx4.v2.z = g_ViewContext.hMtx.up.z;
  GameCamera.mtx4.v2.w = g_ViewContext.hMtx.up.w;
  GameCamera.mtx4.v3.x = g_ViewContext.hMtx.position.x;
  GameCamera.mtx4.v3.y = g_ViewContext.hMtx.position.y;
  GameCamera.mtx4.v3.z = g_ViewContext.hMtx.position.z;
  GameCamera.mtx4.v3.w = g_ViewContext.hMtx.position.w;
  FastVecMtx4Mul(0x9514c0,0x9514c0,&GameCamera);
  DAT_0095d200 = GameCamera.mtx0.v0.x;
  DAT_0095d204 = GameCamera.mtx0.v0.y;
  DAT_0095d208 = GameCamera.mtx0.v0.z;
  DAT_0095d20c = GameCamera.mtx0.v0.w;
  DAT_0095d210 = GameCamera.mtx0.v1.x;
  DAT_0095d214 = GameCamera.mtx0.v1.y;
  DAT_0095d218 = GameCamera.mtx0.v1.z;
  DAT_0095d21c = GameCamera.mtx0.v1.w;
  DAT_0095d220 = GameCamera.mtx0.v2.x;
  DAT_0095d224 = GameCamera.mtx0.v2.y;
  DAT_0095d228 = GameCamera.mtx0.v2.z;
  DAT_0095d22c = GameCamera.mtx0.v2.w;
  CameraCollPos.x = GameCamera.posX * 1024.0;
  CameraCollPos.y = GameCamera.posY * 1024.0;
  CameraCollPos.z = GameCamera.posZ * 1024.0;
  CameraCollPos.w = 1024.0;
  DAT_0159c340 = GameCamera.posX;
  DAT_0159c344 = GameCamera.posY;
  DAT_0159c348 = GameCamera.posZ;
  DAT_0159c34c[0] = GameCamera.field8_0x14c[0];
  DAT_0159c34c[1] = GameCamera.field8_0x14c[1];
  DAT_0159c34c[2] = GameCamera.field8_0x14c[2];
  DAT_0159c34c[3] = GameCamera.field8_0x14c[3];
  UploadViewMatricesToPasses();
  return;
}


// 0x0066598 (0x278 bytes)
void RebuildSharedWaveTables(void)

{
  RsxCmd RVar1;
  undefined4 uVar2;
  RenderingStep *pRVar3;
  RenderingStep *pRVar4;
  uint uVar5;
  RsxCmd *pRVar6;
  RsxCmd *pRVar7;
  ulonglong uVar8;
  RsxCmd *pRVar9;
  RsxCmd *pRVar10;
  longlong lVar11;
  GPiece<16> auVar12;
  GPiece<16> auVar13;
  GPiece<16> auVar14;
  GPiece<16> auVar15;
  GPiece<16> auVar16;
  GPiece<16> auVar17;
  GPiece<16> auVar18;
  GPiece<16> auVar19;
  RsxCmd local_20 [6];
  
  uVar5 = DAT_00a15f64;
  uVar8 = (ulonglong)DAT_00a15f64;
  if (DAT_00a15f64 != 0) {
    auVar18 = ZEXT416(0xffffffff);
    auVar12 = auVar18 | auVar18 << 0x20 | auVar18 << 0x40 | auVar18 << 0x60;
    auVar18 = ZEXT416(0xffffffff);
    auVar16 = auVar18 | auVar18 << 0x20 | auVar18 << 0x40 | auVar18 << 0x60;
    auVar18 = ZEXT416(0xffffffff);
    auVar18 = auVar18 | auVar18 << 0x20 | auVar18 << 0x40 | auVar18 << 0x60;
    auVar13 = vectorShiftLeftIntegerWord(auVar12,auVar12);
    auVar17 = vectorShiftLeftIntegerWord(auVar16,auVar16);
    auVar19 = vectorShiftLeftIntegerWord(auVar18,auVar18);
    *(float *)(DAT_00a15f64 + 0x20) = g_ViewContext.fogNearDist * 0.0009765625;
    auVar18 = loadVectorLeftIndexed(0x230,0x95cf80);
    auVar16 = loadVectorLeftIndexed(0x234,0x95cf80);
    auVar12 = vectorConvertFromSignedFixedPointWord(auVar18,0);
    auVar16 = vectorConvertFromSignedFixedPointWord(auVar16,0);
    *(float *)(uVar5 + 0x24) = g_ViewContext.fogFarDist * 0.0009765625;
    auVar18 = loadVectorLeftIndexed(4,0x6658c);
    auVar18 = auVar18 >> 0x60 & (GPiece<16>)0xffffffff;
    auVar14 = auVar18 | auVar18 << 0x20 | auVar18 << 0x40 | auVar18 << 0x60;
    auVar15 = loadVectorLeftIndexed(0x238,0x95cf80);
    auVar18 = vectorMultiplyAddFloatingPoint(auVar12,auVar14,auVar13);
    pRVar6 = local_20;
    lVar11 = 2;
    *(float *)(uVar5 + 0x28) = -(g_ViewContext.fogNearIntensity * 0.003921569 - 1.0);
    auVar18 = auVar18 >> 0x60 & (GPiece<16>)0xffffffff;
    auVar13 = vectorConvertFromSignedFixedPointWord(auVar15,0);
    auVar12 = vectorMultiplyAddFloatingPoint(auVar16,auVar14,auVar17);
    auVar16 = vectorMultiplyAddFloatingPoint(auVar13,auVar14,auVar19);
    *(float *)(uVar5 + 0x2c) = -(g_ViewContext.fogFarIntensity * 0.003921569 - 1.0);
    auVar12 = auVar12 >> 0x60 & (GPiece<16>)0xffffffff;
    uVar2 = storeVectorElementWordIndexed
                      (auVar18 | auVar18 << 0x20 | auVar18 << 0x40 | auVar18 << 0x60,0x10,uVar8);
    *(undefined4 *)(uVar5 + 0x10 & 0xfffffffc) = uVar2;
    uVar2 = storeVectorElementWordIndexed
                      (auVar12 | auVar12 << 0x20 | auVar12 << 0x40 | auVar12 << 0x60,0x14,uVar8);
    *(undefined4 *)(uVar5 + 0x14 & 0xfffffffc) = uVar2;
    auVar18 = auVar16 >> 0x60 & (GPiece<16>)0xffffffff;
    uVar2 = storeVectorElementWordIndexed
                      (auVar18 | auVar18 << 0x20 | auVar18 << 0x40 | auVar18 << 0x60,0x18,uVar8);
    *(undefined4 *)(uVar5 + 0x18 & 0xfffffffc) = uVar2;
    pRVar3 = ForwardPass;
    pRVar10 = ForwardPass->command;
    pRVar7 = pRVar10 + 2;
    *pRVar10 = NV4097_SET_TRANSFORM_CONSTANT_LOAD_x5;
    pRVar10[1] = 0x13;
    pRVar3->command = pRVar7;
    pRVar10 = pRVar6;
    do {
      pRVar9 = pRVar3->command;
      RVar1 = *pRVar10;
      pRVar3->command = pRVar9 + 1;
      *pRVar7 = RVar1;
      pRVar7 = pRVar10 + 1;
      pRVar10 = pRVar10 + 2;
      pRVar9[1] = *pRVar7;
      pRVar7 = pRVar3->command + 1;
      pRVar3->command = pRVar7;
      pRVar4 = ForwardPass;
      lVar11 = lVar11 + -1;
    } while (lVar11 != 0);
    lVar11 = 2;
    pRVar9 = (RsxCmd *)(DAT_00a15f64 + 0x10);
    pRVar10 = ForwardPass->command;
    pRVar7 = pRVar10 + 2;
    *pRVar10 = NV4097_SET_TRANSFORM_CONSTANT_LOAD_x5;
    pRVar10[1] = 0x14;
    pRVar4->command = pRVar7;
    do {
      pRVar10 = pRVar4->command;
      RVar1 = *pRVar9;
      pRVar4->command = pRVar10 + 1;
      *pRVar7 = RVar1;
      pRVar7 = pRVar9 + 1;
      pRVar9 = pRVar9 + 2;
      pRVar10[1] = *pRVar7;
      pRVar7 = pRVar4->command + 1;
      pRVar4->command = pRVar7;
      pRVar3 = OceanForwardPass;
      lVar11 = lVar11 + -1;
    } while (lVar11 != 0);
    lVar11 = 2;
    pRVar10 = OceanForwardPass->command;
    pRVar7 = pRVar10 + 2;
    *pRVar10 = NV4097_SET_TRANSFORM_CONSTANT_LOAD_x5;
    pRVar10[1] = 0x13;
    pRVar3->command = pRVar7;
    do {
      pRVar10 = pRVar3->command;
      RVar1 = *pRVar6;
      pRVar3->command = pRVar10 + 1;
      *pRVar7 = RVar1;
      pRVar7 = pRVar6 + 1;
      pRVar6 = pRVar6 + 2;
      pRVar10[1] = *pRVar7;
      pRVar7 = pRVar3->command + 1;
      pRVar3->command = pRVar7;
      pRVar4 = OceanForwardPass;
      lVar11 = lVar11 + -1;
    } while (lVar11 != 0);
    lVar11 = 2;
    pRVar7 = (RsxCmd *)(DAT_00a15f64 + 0x10);
    pRVar10 = OceanForwardPass->command;
    *pRVar10 = NV4097_SET_TRANSFORM_CONSTANT_LOAD_x5;
    pRVar6 = pRVar10 + 2;
    pRVar10[1] = 0x14;
    pRVar4->command = pRVar6;
    do {
      pRVar10 = pRVar4->command;
      RVar1 = *pRVar7;
      pRVar4->command = pRVar10 + 1;
      *pRVar6 = RVar1;
      pRVar6 = pRVar7 + 1;
      pRVar7 = pRVar7 + 2;
      pRVar10[1] = *pRVar6;
      pRVar6 = pRVar4->command + 1;
      pRVar4->command = pRVar6;
      lVar11 = lVar11 + -1;
    } while (lVar11 != 0);
  }
  return;
}


// 0x00668d0 (0x1008 bytes)
// inlined: FastAtan2 @0x66a98, FastAtan2 @0x66c90, FastAtan2 @0x66e68, FastAtan2 @0x67010, FastAtan2 @0x6702c
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void UpdateViewContext(void)

{
  bool bVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  ulonglong *puVar10;
  int iVar11;
  int iVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  ulonglong uVar16;
  longlong lVar17;
  longlong lVar18;
  longlong lVar19;
  ulonglong uVar20;
  float *pfVar21;
  longlong lVar22;
  ulonglong unaff_r25;
  ulonglong unaff_r26;
  ulonglong unaff_r27;
  ulonglong unaff_r28;
  ulonglong unaff_r29;
  ulonglong unaff_r30;
  ulonglong unaff_r31;
  ulonglong in_LR;
  longlong lVar23;
  double dVar24;
  double dVar25;
  double dVar26;
  double dVar27;
  ulonglong in_f14;
  ulonglong in_f15;
  ulonglong in_f16;
  ulonglong in_f17;
  ulonglong in_f18;
  ulonglong in_f19;
  ulonglong in_f20;
  ulonglong in_f21;
  ulonglong in_f22;
  ulonglong in_f23;
  ulonglong in_f24;
  ulonglong in_f25;
  double dVar28;
  ulonglong in_f26;
  ulonglong in_f27;
  ulonglong in_f28;
  ulonglong in_f29;
  ulonglong in_f30;
  ulonglong in_f31;
  double dVar29;
  GPiece<16> auVar30;
  GPiece<16> auVar31;
  GPiece<16> auVar32;
  GPiece<16> auVar33;
  GPiece<16> auVar34;
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
  GPiece<16> auVar45;
  GPiece<16> auVar46;
  GPiece<16> auVar47;
  GPiece<16> auVar48;
  GPiece<16> auVar49;
  GPiece<16> auVar50;
  GPiece<16> auVar51;
  GPiece<16> auVar52;
  GPiece<16> auVar53;
  GPiece<16> auVar54;
  
  uVar16 = ZEXT48(&stack0x00000000);
  lVar18 = uVar16 - 0x220;
  puVar10 = (ulonglong *)lVar18;
  *puVar10 = uVar16;
  puVar10[0x46] = in_LR;
  puVar10[0x32] = in_f14;
  puVar10[0x33] = in_f15;
  puVar10[0x34] = in_f16;
  puVar10[0x35] = in_f17;
  puVar10[0x36] = in_f18;
  puVar10[0x37] = in_f19;
  puVar10[0x38] = in_f20;
  puVar10[0x39] = in_f21;
  puVar10[0x3a] = in_f22;
  puVar10[0x3b] = in_f23;
  puVar10[0x3c] = in_f24;
  puVar10[0x3d] = in_f25;
  puVar10[0x3e] = in_f26;
  puVar10[0x3f] = in_f27;
  puVar10[0x40] = in_f28;
  puVar10[0x41] = in_f29;
  puVar10[0x42] = in_f30;
  puVar10[0x43] = in_f31;
  puVar10[0x31] = unaff_r31;
  DAT_00735fe0 = g_ViewContext.fogFarIntensity;
  fVar15 = g_ViewContext.fogNearIntensity;
  fVar13 = g_ViewContext.fogFarDist;
  fVar14 = g_ViewContext.fogNearDist;
  fVar5 = g_ViewContext.yclip;
  fVar9 = g_ViewContext.xclip;
  fVar4 = g_ViewContext.ypix;
  fVar2 = g_ViewContext.xpix;
  DAT_0095d27c = g_ViewContext.pad_1C4[0xe];
  DAT_0095d278 = g_ViewContext.pad_1C4[0xd];
  DAT_0095d26c = g_ViewContext.pad_1C4[10];
  g_ViewContext.pad_1C4[0xb] = (u32)g_ViewContext.farClip;
  g_ViewContext.pad_1C4[0xc] = (u32)g_ViewContext.nearClip;
  bVar1 = Cutscene == 0;
  puVar10[0x30] = unaff_r30;
  puVar10[0x2f] = unaff_r29;
  puVar10[0x2e] = unaff_r28;
  puVar10[0x2d] = unaff_r27;
  puVar10[0x2c] = unaff_r26;
  puVar10[0x2b] = unaff_r25;
  DAT_00735d58 = g_ViewContext.fogNearIntensity;
  fVar8 = g_ViewContext.xratio;
  if (bVar1) {
    fVar3 = 0.775;
  }
  else {
    fVar3 = 0.756;
  }
  dVar26 = (double)g_ViewContext.xratio;
  g_ViewContext.pad_1C4[3] = (u32)(fVar9 / fVar2);
  g_ViewContext.pad_1C4[4] = (u32)(fVar5 / fVar4);
  fVar2 = (float)(dVar26 * (double)fVar3);
  dVar29 = 1.0;
  g_ViewContext.xclipratio = (float)g_ViewContext.pad_1C4[3];
  g_ViewContext.yclipratio = (float)g_ViewContext.pad_1C4[4];
  g_ViewContext.yratio = fVar2;
  *(undefined4 *)((int)puVar10 + 0x94) = 0x3f800000;
  *(float *)(puVar10 + 0x13) = fVar8;
  *(float *)((int)puVar10 + 0x9c) = (float)(1.0 - ABS(dVar26));
  dVar27 = 0.0;
  uVar20 = (ulonglong)(*(uint *)((int)puVar10 + 0x9c) >> 0x1e) & 2 |
           (ulonglong)(*(uint *)(puVar10 + 0x13) >> 0x1d) & 4;
  fVar8 = *(float *)(&g_atanQuadrantTable + (int)(uVar20 << 2));
  dVar28 = ABS((double)*(float *)((int)puVar10 + 0x94));
  if (*(float *)((int)puVar10 + 0x9c) - 0.0 < 0.0) {
    dVar28 = ABS(dVar26);
  }
  fVar4 = *(float *)(((uint)(uVar20 << 2) | 0x735900) + 4);
  dVar24 = ABS((double)*(float *)(puVar10 + 0x13));
  if (*(float *)((int)puVar10 + 0x9c) - 0.0 < 0.0) {
    dVar24 = dVar29;
  }
  dVar25 = dVar27;
  if (0.0 < dVar28) {
    lVar17 = uVar16 - 0x210;
    lVar19 = uVar16 - 0x120;
    lVar22 = uVar16 - 0x110;
    lVar23 = 2;
    fVar9 = (float)(dVar24 - dVar28) / (float)(dVar24 + dVar28);
    fVar5 = fVar9 * fVar9;
    *(float *)(puVar10 + 0x20) = fVar9;
    *(float *)((int)puVar10 + 0x104) = fVar9;
    *(float *)(puVar10 + 0x21) = fVar9;
    *(float *)((int)puVar10 + 0x10c) = fVar9;
    fVar9 = fVar5 * fVar5;
    *(float *)((int)puVar10 + 0x104) = *(float *)((int)puVar10 + 0x104) * fVar5;
    *(float *)(puVar10 + 0x21) = *(float *)(puVar10 + 0x21) * fVar9;
    *(float *)((int)puVar10 + 0x10c) = *(float *)((int)puVar10 + 0x10c) * fVar9 * fVar5;
    do {
      *(float *)((int)lVar17 + 0x100) = *(float *)((int)lVar17 + 0xf0) * fVar9 * fVar9;
      iVar11 = (int)lVar19;
      lVar17 = lVar17 + 8;
      lVar19 = lVar19 + 8;
      *(float *)((int)lVar22 + 4) = *(float *)(iVar11 + 4) * fVar9 * fVar9;
      lVar22 = lVar22 + 8;
      lVar23 = lVar23 + -1;
    } while (lVar23 != 0);
    lVar23 = 4;
    lVar22 = uVar16 - 0x120;
    pfVar21 = (float *)&DAT_007358e0;
    lVar17 = lVar18;
    lVar19 = lVar22;
    do {
      fVar9 = *pfVar21;
      fVar5 = pfVar21[1];
      pfVar21 = pfVar21 + 2;
      *(float *)((int)lVar17 + 0x100) = *(float *)((int)lVar17 + 0x100) * fVar9;
      lVar17 = lVar17 + 8;
      *(float *)((int)lVar19 + 4) = *(float *)((int)lVar19 + 4) * fVar5;
      lVar19 = lVar19 + 8;
      lVar23 = lVar23 + -1;
    } while (lVar23 != 0);
    lVar19 = 2;
    lVar17 = lVar18;
    dVar28 = dVar27;
    do {
      iVar11 = (int)lVar17;
      lVar17 = lVar17 + 0x10;
      iVar12 = (int)lVar22;
      lVar22 = lVar22 + 0x10;
      dVar28 = (double)((float)(dVar28 + (double)*(float *)(iVar11 + 0x100)) +
                        *(float *)(iVar12 + 4) + *(float *)(iVar12 + 8) + *(float *)(iVar12 + 0xc));
      lVar19 = lVar19 + -1;
    } while (lVar19 != 0);
    dVar25 = (double)((float)(dVar28 + 0.7853981852531433) * fVar8 + fVar4);
  }
  dVar28 = ABS((double)fVar2);
  fVar8 = (float)(dVar25 + 1.570796251296997);
  *(undefined4 *)(puVar10 + 0x11) = 0x3f800000;
  fVar4 = 3.1415925 - fVar8;
  if (fVar8 - (3.1415925 - fVar8) < 0.0) {
    fVar4 = fVar8;
  }
  fVar9 = -3.1415925 - fVar8;
  if ((-3.1415925 - fVar8) - fVar4 < 0.0) {
    fVar9 = fVar4;
  }
  fVar8 = fVar9 * fVar9;
  fVar4 = fVar8 * fVar8 * fVar9;
  fVar5 = fVar8 * fVar4;
  *(float *)(puVar10 + 0x12) = (float)(1.0 - dVar28);
  *(float *)((int)puVar10 + 0x8c) = fVar2;
  g_ViewContext.pad_1C4[7] =
       (u32)(1.0 / (fVar8 * fVar5 * 2.601887e-06 +
                   fVar5 * -0.0001980741 +
                   fVar4 * 0.0083330255 + fVar8 * fVar9 * -0.16666657 + fVar9));
  uVar20 = (ulonglong)(*(uint *)(puVar10 + 0x12) >> 0x1e) & 2 |
           (ulonglong)(*(uint *)((int)puVar10 + 0x8c) >> 0x1d) & 4;
  dVar24 = ABS((double)*(float *)(puVar10 + 0x11));
  if (*(float *)(puVar10 + 0x12) - 0.0 < 0.0) {
    dVar24 = dVar28;
  }
  dVar28 = ABS((double)*(float *)((int)puVar10 + 0x8c));
  if (*(float *)(puVar10 + 0x12) - 0.0 < 0.0) {
    dVar28 = dVar29;
  }
  fVar4 = *(float *)(&g_atanQuadrantTable + (int)(uVar20 << 2));
  fVar8 = *(float *)(((uint)(uVar20 << 2) | 0x735900) + 4);
  dVar25 = dVar27;
  g_ViewContext.xradpad = (float)g_ViewContext.pad_1C4[7];
  if (0.0 < dVar24) {
    lVar17 = uVar16 - 0x210;
    lVar19 = uVar16 - 0x140;
    lVar22 = uVar16 - 0x130;
    lVar23 = 2;
    fVar9 = (float)(dVar28 - dVar24) / (float)(dVar28 + dVar24);
    fVar5 = fVar9 * fVar9;
    *(float *)(puVar10 + 0x1c) = fVar9;
    *(float *)((int)puVar10 + 0xe4) = fVar9;
    *(float *)(puVar10 + 0x1d) = fVar9;
    *(float *)((int)puVar10 + 0xec) = fVar9;
    fVar9 = fVar5 * fVar5;
    *(float *)((int)puVar10 + 0xe4) = *(float *)((int)puVar10 + 0xe4) * fVar5;
    *(float *)(puVar10 + 0x1d) = *(float *)(puVar10 + 0x1d) * fVar9;
    *(float *)((int)puVar10 + 0xec) = *(float *)((int)puVar10 + 0xec) * fVar9 * fVar5;
    do {
      *(float *)((int)lVar17 + 0xe0) = *(float *)((int)lVar17 + 0xd0) * fVar9 * fVar9;
      iVar11 = (int)lVar19;
      lVar17 = lVar17 + 8;
      lVar19 = lVar19 + 8;
      *(float *)((int)lVar22 + 4) = *(float *)(iVar11 + 4) * fVar9 * fVar9;
      lVar22 = lVar22 + 8;
      lVar23 = lVar23 + -1;
    } while (lVar23 != 0);
    lVar23 = 4;
    lVar22 = uVar16 - 0x140;
    pfVar21 = (float *)&DAT_007358e0;
    lVar17 = lVar18;
    lVar19 = lVar22;
    do {
      fVar9 = *pfVar21;
      fVar5 = pfVar21[1];
      pfVar21 = pfVar21 + 2;
      *(float *)((int)lVar17 + 0xe0) = *(float *)((int)lVar17 + 0xe0) * fVar9;
      lVar17 = lVar17 + 8;
      *(float *)((int)lVar19 + 4) = *(float *)((int)lVar19 + 4) * fVar5;
      lVar19 = lVar19 + 8;
      lVar23 = lVar23 + -1;
    } while (lVar23 != 0);
    lVar19 = 2;
    lVar17 = lVar18;
    dVar28 = dVar27;
    do {
      iVar11 = (int)lVar17;
      lVar17 = lVar17 + 0x10;
      iVar12 = (int)lVar22;
      lVar22 = lVar22 + 0x10;
      dVar28 = (double)((float)(dVar28 + (double)*(float *)(iVar11 + 0xe0)) + *(float *)(iVar12 + 4)
                        + *(float *)(iVar12 + 8) + *(float *)(iVar12 + 0xc));
      lVar19 = lVar19 + -1;
    } while (lVar19 != 0);
    dVar25 = (double)((float)(dVar28 + 0.7853981852531433) * fVar4 + fVar8);
  }
  fVar8 = (float)(dVar25 + 1.570796251296997);
  fVar4 = (float)(dVar26 * (double)(float)g_ViewContext.pad_1C4[3]);
  *(undefined4 *)((int)puVar10 + 0x7c) = 0x3f800000;
  dVar28 = ABS((double)fVar4);
  fVar9 = 3.1415925 - fVar8;
  if (fVar8 - (3.1415925 - fVar8) < 0.0) {
    fVar9 = fVar8;
  }
  *(float *)((int)puVar10 + 0x84) = (float)(1.0 - dVar28);
  *(float *)(puVar10 + 0x10) = fVar4;
  fVar4 = -3.1415925 - fVar8;
  if ((-3.1415925 - fVar8) - fVar9 < 0.0) {
    fVar4 = fVar9;
  }
  fVar5 = fVar4 * fVar4;
  fVar9 = fVar5 * fVar5 * fVar4;
  fVar8 = fVar5 * fVar9;
  g_ViewContext.pad_1C4[8] =
       (u32)(1.0 / (fVar5 * fVar8 * 2.601887e-06 +
                   fVar8 * -0.0001980741 +
                   fVar9 * 0.0083330255 + fVar5 * fVar4 * -0.16666657 + fVar4));
  uVar20 = (ulonglong)(*(uint *)((int)puVar10 + 0x84) >> 0x1e) & 2 |
           (ulonglong)(*(uint *)(puVar10 + 0x10) >> 0x1d) & 4;
  dVar26 = ABS((double)*(float *)((int)puVar10 + 0x7c));
  if (*(float *)((int)puVar10 + 0x84) - 0.0 < 0.0) {
    dVar26 = dVar28;
  }
  dVar28 = ABS((double)*(float *)(puVar10 + 0x10));
  if (*(float *)((int)puVar10 + 0x84) - 0.0 < 0.0) {
    dVar28 = dVar29;
  }
  fVar4 = *(float *)(&g_atanQuadrantTable + (int)(uVar20 << 2));
  fVar8 = *(float *)(((uint)(uVar20 << 2) | 0x735900) + 4);
  dVar24 = dVar27;
  g_ViewContext.yradpad = (float)g_ViewContext.pad_1C4[8];
  if (0.0 < dVar26) {
    lVar17 = uVar16 - 0x210;
    lVar19 = uVar16 - 0x160;
    lVar22 = uVar16 - 0x150;
    lVar23 = 2;
    fVar9 = (float)(dVar28 - dVar26) / (float)(dVar28 + dVar26);
    fVar5 = fVar9 * fVar9;
    *(float *)(puVar10 + 0x18) = fVar9;
    *(float *)((int)puVar10 + 0xc4) = fVar9;
    *(float *)(puVar10 + 0x19) = fVar9;
    *(float *)((int)puVar10 + 0xcc) = fVar9;
    fVar9 = fVar5 * fVar5;
    *(float *)((int)puVar10 + 0xc4) = *(float *)((int)puVar10 + 0xc4) * fVar5;
    *(float *)(puVar10 + 0x19) = *(float *)(puVar10 + 0x19) * fVar9;
    *(float *)((int)puVar10 + 0xcc) = *(float *)((int)puVar10 + 0xcc) * fVar9 * fVar5;
    do {
      *(float *)((int)lVar17 + 0xc0) = *(float *)((int)lVar17 + 0xb0) * fVar9 * fVar9;
      iVar11 = (int)lVar19;
      lVar17 = lVar17 + 8;
      lVar19 = lVar19 + 8;
      *(float *)((int)lVar22 + 4) = *(float *)(iVar11 + 4) * fVar9 * fVar9;
      lVar22 = lVar22 + 8;
      lVar23 = lVar23 + -1;
    } while (lVar23 != 0);
    lVar23 = 4;
    lVar22 = uVar16 - 0x160;
    pfVar21 = (float *)&DAT_007358e0;
    lVar17 = lVar18;
    lVar19 = lVar22;
    do {
      fVar9 = *pfVar21;
      fVar5 = pfVar21[1];
      pfVar21 = pfVar21 + 2;
      *(float *)((int)lVar17 + 0xc0) = *(float *)((int)lVar17 + 0xc0) * fVar9;
      lVar17 = lVar17 + 8;
      *(float *)((int)lVar19 + 4) = *(float *)((int)lVar19 + 4) * fVar5;
      lVar19 = lVar19 + 8;
      lVar23 = lVar23 + -1;
    } while (lVar23 != 0);
    lVar19 = 2;
    lVar17 = lVar18;
    dVar28 = dVar27;
    do {
      iVar11 = (int)lVar17;
      lVar17 = lVar17 + 0x10;
      iVar12 = (int)lVar22;
      lVar22 = lVar22 + 0x10;
      dVar28 = (double)((float)(dVar28 + (double)*(float *)(iVar11 + 0xc0)) + *(float *)(iVar12 + 4)
                        + *(float *)(iVar12 + 8) + *(float *)(iVar12 + 0xc));
      lVar19 = lVar19 + -1;
    } while (lVar19 != 0);
    dVar24 = (double)((float)(dVar28 + 0.7853981852531433) * fVar4 + fVar8);
  }
  fVar8 = (float)(dVar24 + 1.570796251296997);
  fVar2 = (float)((double)fVar2 * (double)(float)g_ViewContext.pad_1C4[4]);
  *(undefined4 *)(puVar10 + 0xe) = 0x3f800000;
  dVar28 = ABS((double)fVar2);
  fVar4 = 3.1415925 - fVar8;
  if (fVar8 - (3.1415925 - fVar8) < 0.0) {
    fVar4 = fVar8;
  }
  *(float *)(puVar10 + 0xf) = (float)(1.0 - dVar28);
  *(float *)((int)puVar10 + 0x74) = fVar2;
  fVar2 = -3.1415925 - fVar8;
  if ((-3.1415925 - fVar8) - fVar4 < 0.0) {
    fVar2 = fVar4;
  }
  uVar20 = (ulonglong)(*(uint *)(puVar10 + 0xf) >> 0x1e) & 2 |
           (ulonglong)(*(uint *)((int)puVar10 + 0x74) >> 0x1d) & 4;
  fVar8 = fVar2 * fVar2;
  dVar26 = ABS((double)*(float *)(puVar10 + 0xe));
  if (*(float *)(puVar10 + 0xf) - 0.0 < 0.0) {
    dVar26 = dVar28;
  }
  fVar9 = *(float *)(&g_atanQuadrantTable + (int)(uVar20 << 2));
  fVar5 = fVar8 * fVar8 * fVar2;
  fVar3 = fVar8 * fVar5;
  fVar4 = *(float *)(((uint)(uVar20 << 2) | 0x735900) + 4);
  dVar28 = ABS((double)*(float *)((int)puVar10 + 0x74));
  if (*(float *)(puVar10 + 0xf) - 0.0 < 0.0) {
    dVar28 = dVar29;
  }
  if (0.0 < dVar26) {
    lVar23 = 2;
    fVar6 = (float)(dVar28 - dVar26) / (float)(dVar28 + dVar26);
    fVar7 = fVar6 * fVar6;
    *(float *)(puVar10 + 0x14) = fVar6;
    *(float *)((int)puVar10 + 0xa4) = fVar6;
    *(float *)(puVar10 + 0x15) = fVar6;
    *(float *)((int)puVar10 + 0xac) = fVar6;
    lVar22 = uVar16 - 0x210;
    fVar6 = fVar7 * fVar7;
    lVar17 = uVar16 - 0x180;
    lVar19 = uVar16 - 0x170;
    *(float *)((int)puVar10 + 0xa4) = *(float *)((int)puVar10 + 0xa4) * fVar7;
    *(float *)(puVar10 + 0x15) = *(float *)(puVar10 + 0x15) * fVar6;
    *(float *)((int)puVar10 + 0xac) = *(float *)((int)puVar10 + 0xac) * fVar6 * fVar7;
    do {
      *(float *)((int)lVar22 + 0xa0) = *(float *)((int)lVar22 + 0x90) * fVar6 * fVar6;
      iVar11 = (int)lVar17;
      lVar22 = lVar22 + 8;
      lVar17 = lVar17 + 8;
      *(float *)((int)lVar19 + 4) = *(float *)(iVar11 + 4) * fVar6 * fVar6;
      lVar19 = lVar19 + 8;
      lVar23 = lVar23 + -1;
    } while (lVar23 != 0);
    lVar23 = 4;
    lVar22 = uVar16 - 0x180;
    pfVar21 = (float *)&DAT_007358e0;
    lVar17 = lVar18;
    lVar19 = lVar22;
    do {
      fVar6 = *pfVar21;
      fVar7 = pfVar21[1];
      pfVar21 = pfVar21 + 2;
      *(float *)((int)lVar17 + 0xa0) = *(float *)((int)lVar17 + 0xa0) * fVar6;
      lVar17 = lVar17 + 8;
      *(float *)((int)lVar19 + 4) = *(float *)((int)lVar19 + 4) * fVar7;
      lVar19 = lVar19 + 8;
      lVar23 = lVar23 + -1;
    } while (lVar23 != 0);
    lVar17 = 2;
    do {
      iVar11 = (int)lVar18;
      iVar12 = (int)lVar22;
      lVar18 = lVar18 + 0x10;
      lVar22 = lVar22 + 0x10;
      dVar27 = (double)((float)(dVar27 + (double)*(float *)(iVar11 + 0xa0)) + *(float *)(iVar12 + 4)
                        + *(float *)(iVar12 + 8) + *(float *)(iVar12 + 0xc));
      lVar17 = lVar17 + -1;
    } while (lVar17 != 0);
    dVar27 = (double)((float)(dVar27 + 0.7853981852531433) * fVar9 + fVar4);
  }
  fVar4 = (float)(dVar27 + 1.570796251296997);
  fVar6 = fVar13 - fVar14;
  DAT_00735d50 = ((DAT_00735fe0 - fVar15) * (float)g_ViewContext.pad_1C4[0xc]) / fVar6;
  fVar9 = 3.1415925 - fVar4;
  if (fVar4 - (3.1415925 - fVar4) < 0.0) {
    fVar9 = fVar4;
  }
  g_ViewContext.fog1 = (fVar15 * fVar13 - DAT_00735fe0 * fVar14) / fVar6;
  fVar13 = -3.1415925 - fVar4;
  if ((-3.1415925 - fVar4) - fVar9 < 0.0) {
    fVar13 = fVar9;
  }
  fVar4 = fVar13 * fVar13;
  fVar9 = fVar4 * fVar4 * fVar13;
  fVar7 = fVar4 * fVar9;
  g_ViewContext.pad_1C4[6] = (u32)(float)(1.0 / (double)(float)g_ViewContext.pad_1C4[4]);
  g_ViewContext.pad_1C4[5] = (u32)(float)(1.0 / (double)(float)g_ViewContext.pad_1C4[3]);
  g_ViewContext.pad_1C4[9] =
       (u32)(((1.0 / (fVar8 * fVar3 * 2.601887e-06 +
                     fVar3 * -0.0001980741 +
                     fVar5 * 0.0083330255 + fVar8 * fVar2 * -0.16666657 + fVar2)) /
              (float)g_ViewContext.pad_1C4[7] +
             (1.0 / (fVar4 * fVar7 * 2.601887e-06 +
                    fVar7 * -0.0001980741 +
                    fVar9 * 0.0083330255 + fVar4 * fVar13 * -0.16666657 + fVar13)) /
             (float)g_ViewContext.pad_1C4[8]) * 0.5);
  fRam0095d24c = g_ViewContext.yradpad;
  fRam0095d248 = g_ViewContext.xradpad;
  fRam0095d244 = g_ViewContext.yratio;
  _DAT_0095d240 = g_ViewContext.xratio;
  DAT_0095d270 = (float)g_ViewContext.pad_1C4[0xb];
  DAT_0095d274 = (float)g_ViewContext.pad_1C4[0xc];
  g_ViewContext.fogMult = (DAT_00735fe0 - fVar15) / (fVar6 * 0.0009765625);
  DAT_00735d54 = DAT_00735fe0;
  DAT_00735fe4 = DAT_00735d58;
  DAT_00736030 = DAT_00735fe0;
  DAT_00736034 = DAT_00735d58;
  DAT_00735fdc = 0x437effff;
  DAT_0073602c = 0x437effff;
  g_ViewContext.fogAdd = -(fVar14 * 0.0009765625 * g_ViewContext.fogMult - fVar15);
  DAT_00735fd8 = DAT_00735d50;
  DAT_00736028 = DAT_00735d50;
  DAT_00737c70 = DAT_00735d50;
  DAT_0073adf0 = DAT_00735d50;
  g_ViewContext.perspScale = DAT_00735d50;
  DAT_0095d250 = (float)g_ViewContext.pad_1C4[3];
  DAT_0095d254 = (float)g_ViewContext.pad_1C4[4];
  DAT_0095d258 = (float)g_ViewContext.pad_1C4[5];
  DAT_0095d25c = (float)g_ViewContext.pad_1C4[6];
  DAT_0095d260 = (float)g_ViewContext.pad_1C4[7];
  DAT_0095d264 = (float)g_ViewContext.pad_1C4[8];
  DAT_0095d268 = (float)g_ViewContext.pad_1C4[9];
  DAT_00e574e0 = DAT_00735d50;
  ____Draw_SetupFogTable();
  DAT_00e572d0 = 0x361fc873;
  DAT_00e572d4 = 0xb61fc873;
  DAT_00e572d8 = 0x3f000000;
  dVar28 = (double)g_ViewContext.nearClip;
  dVar26 = (double)g_ViewContext.farClip;
  DAT_00e572dc = g_ViewContext.xpix / (float)((double)g_ViewContext.xratio * 210000.0);
  g_ViewContext.fMtx.forward.y = 0.0;
  g_ViewContext.fMtx.forward.z = 0.0;
  g_ViewContext.fMtx.forward.w = 0.0;
  g_ViewContext.fMtx.right.x = 0.0;
  g_ViewContext.fMtx.right.z = 0.0;
  g_ViewContext.fMtx.right.w = 0.0;
  g_ViewContext.fMtx.up.x = 0.0;
  g_ViewContext.fMtx.up.y = 0.0;
  g_ViewContext.fMtx.forward.x = g_ViewContext.xpix / (float)((double)g_ViewContext.xratio * dVar28);
  g_ViewContext.fMtx.right.y = g_ViewContext.ypix / (float)((double)g_ViewContext.yratio * dVar28);
  fVar8 = (float)(dVar28 * (double)(float)(dVar26 - dVar28));
  dVar27 = -8388080.0;
  g_ViewContext.fMtx.position.x = 0.0;
  g_ViewContext.fMtx.position.y = 0.0;
  g_ViewContext.fMtx.up.w = (float)(dVar29 / dVar28) * g_ViewContext.perspScale;
  g_ViewContext.fMtx.up.z = ((float)(dVar26 + dVar28) / fVar8) * -8.38808e+06;
  g_ViewContext.fMtx.position.w = 0.0;
  g_ViewContext.fMtx.position.z =
       ((float)((double)(float)(dVar28 * -2.0) * dVar26) / fVar8) * -8.38808e+06;
  FastMemCopy32(0x95d080,0x95d040,0x40);
  g_ViewContext.nfMtx.up.w = (float)(dVar29 / (double)g_ViewContext.nearClip);
  FastMemCopy32(0x95d0c0,0x95d080,0x40);
  auVar31 = ZEXT416(0xffffffff);
  auVar35 = auVar31 | auVar31 << 0x20 | auVar31 << 0x40 | auVar31 << 0x60;
  auVar31 = ZEXT416(0xffffffff);
  auVar37 = auVar31 | auVar31 << 0x20 | auVar31 << 0x40 | auVar31 << 0x60;
  auVar31 = ZEXT416(0xffffffff);
  auVar42 = auVar31 | auVar31 << 0x20 | auVar31 << 0x40 | auVar31 << 0x60;
  auVar31 = ZEXT416(0xffffffff);
  auVar39 = auVar31 | auVar31 << 0x20 | auVar31 << 0x40 | auVar31 << 0x60;
  auVar36 = vectorShiftLeftIntegerWord(auVar35,auVar35);
  auVar30 = loadVectorLeftIndexed(0x208,0x95cf80);
  auVar31 = loadVectorLeftIndexed(0x44,0x66810);
  auVar33 = loadVectorLeftIndexed(0x20c,0x95cf80);
  auVar35 = vectorReciprocalEstimateFloatingPoint(auVar30);
  auVar34 = vectorReciprocalEstimateFloatingPoint(auVar33);
  auVar31 = auVar31 >> 0x60 & (GPiece<16>)0xffffffff;
  auVar32 = auVar31 | auVar31 << 0x20 | auVar31 << 0x40 | auVar31 << 0x60;
  auVar37 = vectorShiftLeftIntegerWord(auVar37,auVar37);
  auVar39 = vectorShiftLeftIntegerWord(auVar39,auVar39);
  auVar31 = ZEXT416(0xffffffff);
  auVar53 = auVar31 | auVar31 << 0x20 | auVar31 << 0x40 | auVar31 << 0x60;
  auVar31 = vectorNegativeMultiplySubtractFloatingPoint(auVar35,auVar30,auVar32);
  auVar40 = vectorNegativeMultiplySubtractFloatingPoint(auVar34,auVar33,auVar32);
  auVar36 = vectorMultiplyAddFloatingPoint(auVar35,auVar31,auVar36);
  auVar34 = vectorMultiplyAddFloatingPoint(auVar34,auVar40,auVar37);
  auVar38 = loadVectorLeftIndexed(0x210,0x95cf80);
  auVar37 = vectorShiftLeftIntegerWord(auVar42,auVar42);
  auVar40 = vectorReciprocalEstimateFloatingPoint(auVar38);
  auVar31 = ZEXT416(0xffffffff);
  auVar42 = auVar31 | auVar31 << 0x20 | auVar31 << 0x40 | auVar31 << 0x60;
  auVar45 = loadVectorLeftIndexed(0xc0,0x95cf80);
  auVar46 = loadVectorLeftIndexed(0x140,0x95cf80);
  auVar35 = vectorReciprocalEstimateFloatingPoint(auVar45);
  auVar43 = vectorNegativeMultiplySubtractFloatingPoint(auVar36,auVar30,auVar32);
  auVar31 = vectorNegativeMultiplySubtractFloatingPoint(auVar34,auVar33,auVar32);
  auVar41 = vectorShiftLeftIntegerWord(auVar42,auVar42);
  auVar47 = vectorNegativeMultiplySubtractFloatingPoint(auVar40,auVar38,auVar32);
  auVar36 = vectorMultiplyAddFloatingPoint(auVar36,auVar43,auVar39);
  auVar34 = vectorMultiplyAddFloatingPoint(auVar34,auVar31,auVar37);
  auVar31 = ZEXT416(0xffffffff);
  auVar42 = auVar31 | auVar31 << 0x20 | auVar31 << 0x40 | auVar31 << 0x60;
  auVar48 = vectorNegativeMultiplySubtractFloatingPoint(auVar35,auVar45,auVar32);
  auVar37 = loadVectorLeftIndexed(0xd4,0x95cf80);
  auVar31 = ZEXT416(0xffffffff);
  auVar39 = auVar31 | auVar31 << 0x20 | auVar31 << 0x40 | auVar31 << 0x60;
  auVar49 = vectorReciprocalEstimateFloatingPoint(auVar37);
  auVar43 = vectorShiftLeftIntegerWord(auVar42,auVar42);
  auVar31 = ZEXT416(0xffffffff);
  auVar44 = auVar31 | auVar31 << 0x20 | auVar31 << 0x40 | auVar31 << 0x60;
  auVar42 = vectorShiftLeftIntegerWord(auVar39,auVar39);
  auVar50 = loadVectorLeftIndexed(0x154,0x95cf80);
  auVar43 = vectorMultiplyAddFloatingPoint(auVar40,auVar47,auVar43);
  auVar31 = ZEXT416(0xffffffff);
  auVar31 = auVar31 | auVar31 << 0x20 | auVar31 << 0x40 | auVar31 << 0x60;
  auVar40 = vectorNegativeMultiplySubtractFloatingPoint(auVar36,auVar30,auVar32);
  auVar47 = vectorShiftLeftIntegerWord(auVar44,auVar44);
  auVar44 = vectorNegativeMultiplySubtractFloatingPoint(auVar34,auVar33,auVar32);
  auVar31 = vectorShiftLeftIntegerWord(auVar31,auVar31);
  auVar39 = vectorMultiplyAddFloatingPoint(auVar35,auVar48,auVar31);
  auVar31 = ZEXT416(0xffffffff);
  auVar35 = auVar31 | auVar31 << 0x20 | auVar31 << 0x40 | auVar31 << 0x60;
  auVar48 = vectorNegativeMultiplySubtractFloatingPoint(auVar43,auVar38,auVar32);
  auVar40 = vectorMultiplyAddFloatingPoint(auVar36,auVar40,auVar41);
  auVar42 = vectorMultiplyAddFloatingPoint(auVar34,auVar44,auVar42);
  auVar41 = vectorShiftLeftIntegerWord(auVar53,auVar53);
  auVar36 = vectorNegativeMultiplySubtractFloatingPoint(auVar49,auVar37,auVar32);
  auVar31 = ZEXT416(0xffffffff);
  auVar31 = auVar31 | auVar31 << 0x20 | auVar31 << 0x40 | auVar31 << 0x60;
  auVar53 = loadVectorLeftIndexed(0x200,0x95cf80);
  auVar35 = vectorShiftLeftIntegerWord(auVar35,auVar35);
  auVar54 = vectorReciprocalEstimateFloatingPoint(auVar53);
  auVar34 = vectorShiftLeftIntegerWord(auVar31,auVar31);
  auVar44 = vectorMultiplyAddFloatingPoint(auVar43,auVar48,auVar35);
  auVar31 = ZEXT416(0xffffffff);
  auVar31 = auVar31 | auVar31 << 0x20 | auVar31 << 0x40 | auVar31 << 0x60;
  auVar46 = vectorMultiplyAddFloatingPoint(auVar40,auVar46,auVar47);
  auVar35 = auVar40 >> 0x60 & (GPiece<16>)0xffffffff;
  auVar47 = vectorMultiplyAddFloatingPoint(auVar42,auVar50,auVar41);
  auVar48 = vectorNegativeMultiplySubtractFloatingPoint(auVar39,auVar45,auVar32);
  auVar43 = vectorMultiplyAddFloatingPoint(auVar49,auVar36,auVar34);
  auVar49 = vectorShiftLeftIntegerWord(auVar31,auVar31);
  auVar41 = loadVectorLeftIndexed(0x204,0x95cf80);
  auVar31 = ZEXT416(0xffffffff);
  auVar34 = auVar31 | auVar31 << 0x20 | auVar31 << 0x40 | auVar31 << 0x60;
  auVar31 = ZEXT416(0xffffffff);
  auVar31 = auVar31 | auVar31 << 0x20 | auVar31 << 0x40 | auVar31 << 0x60;
  g_ViewContext.pad_1B0[2] = (u32)(float)(dVar27 / (double)g_ViewContext.fMtx.up.z);
  auVar36 = auVar42 >> 0x60 & (GPiece<16>)0xffffffff;
  auVar50 = vectorShiftLeftIntegerWord(auVar34,auVar34);
  auVar51 = vectorShiftLeftIntegerWord(auVar31,auVar31);
  auVar31 = auVar46 >> 0x60 & (GPiece<16>)0xffffffff;
  auVar34 = auVar47 >> 0x60 & (GPiece<16>)0xffffffff;
  g_ViewContext.hMtx.forward.x =
       (float)storeVectorElementWordIndexed
                        (auVar31 | auVar31 << 0x20 | auVar31 << 0x40 | auVar31 << 0x60,0x140,
                         0x95cf80);
  g_ViewContext.hMtx.right.y =
       (float)storeVectorElementWordIndexed
                        (auVar34 | auVar34 << 0x20 | auVar34 << 0x40 | auVar34 << 0x60,0x154,
                         0x95cf80);
  auVar31 = ZEXT416(0xffffffff);
  auVar31 = auVar31 | auVar31 << 0x20 | auVar31 << 0x40 | auVar31 << 0x60;
  auVar34 = vectorMultiplyAddFloatingPoint(auVar39,auVar48,auVar49);
  auVar48 = vectorReciprocalEstimateFloatingPoint(auVar41);
  auVar47 = vectorNegativeMultiplySubtractFloatingPoint(auVar54,auVar53,auVar32);
  auVar49 = vectorNegativeMultiplySubtractFloatingPoint(auVar44,auVar38,auVar32);
  auVar39 = vectorShiftLeftIntegerWord(auVar31,auVar31);
  auVar46 = vectorNegativeMultiplySubtractFloatingPoint(auVar43,auVar37,auVar32);
  g_ViewContext.pad_180[0] =
       storeVectorElementWordIndexed
                 (auVar35 | auVar35 << 0x20 | auVar35 << 0x40 | auVar35 << 0x60,0x180,0x95cf80);
  auVar31 = ZEXT416(0xffffffff);
  auVar52 = auVar31 | auVar31 << 0x20 | auVar31 << 0x40 | auVar31 << 0x60;
  g_ViewContext.pad_180[1] =
       storeVectorElementWordIndexed
                 (auVar36 | auVar36 << 0x20 | auVar36 << 0x40 | auVar36 << 0x60,0x184,0x95cf80);
  g_ViewContext.hMtx.up.z = g_ViewContext.hMtx.up.z * -1.1921679e-07;
  g_ViewContext.hMtx.position.z = g_ViewContext.hMtx.position.z * -1.1921679e-07;
  g_ViewContext.pad_180[2] = 0xb4000210;
  auVar45 = vectorNegativeMultiplySubtractFloatingPoint(auVar34,auVar45,auVar32);
  auVar47 = vectorMultiplyAddFloatingPoint(auVar54,auVar47,auVar39);
  auVar44 = vectorMultiplyAddFloatingPoint(auVar44,auVar49,auVar50);
  auVar49 = vectorNegativeMultiplySubtractFloatingPoint(auVar48,auVar41,auVar32);
  auVar31 = ZEXT416(0xffffffff);
  auVar35 = auVar31 | auVar31 << 0x20 | auVar31 << 0x40 | auVar31 << 0x60;
  auVar43 = vectorMultiplyAddFloatingPoint(auVar43,auVar46,auVar51);
  auVar31 = ZEXT416(0xffffffff);
  auVar51 = auVar31 | auVar31 << 0x20 | auVar31 << 0x40 | auVar31 << 0x60;
  auVar36 = vectorShiftLeftIntegerWord(auVar52,auVar52);
  auVar31 = ZEXT416(0xffffffff);
  auVar39 = auVar31 | auVar31 << 0x20 | auVar31 << 0x40 | auVar31 << 0x60;
  auVar31 = vectorShiftLeftIntegerWord(auVar35,auVar35);
  auVar35 = auVar30 >> 0x60 & (GPiece<16>)0xffffffff;
  auVar50 = vectorShiftLeftIntegerWord(auVar39,auVar39);
  auVar46 = vectorMultiplyAddFloatingPoint(auVar34,auVar45,auVar36);
  auVar39 = vectorNegativeMultiplySubtractFloatingPoint(auVar47,auVar53,auVar32);
  auVar36 = auVar44 >> 0x60 & (GPiece<16>)0xffffffff;
  auVar45 = vectorMultiplyAddFloatingPoint(auVar48,auVar49,auVar31);
  auVar34 = vectorNegativeMultiplySubtractFloatingPoint(auVar43,auVar37,auVar32);
  auVar31 = ZEXT416(0xffffffff);
  auVar37 = auVar31 | auVar31 << 0x20 | auVar31 << 0x40 | auVar31 << 0x60;
  auVar31 = auVar33 >> 0x60 & (GPiece<16>)0xffffffff;
  g_ViewContext.pad_180[3] =
       storeVectorElementWordIndexed
                 (auVar36 | auVar36 << 0x20 | auVar36 << 0x40 | auVar36 << 0x60,0x18c,0x95cf80);
  auVar36 = vectorShiftLeftIntegerWord(auVar37,auVar37);
  auVar37 = vectorShiftLeftIntegerWord(auVar51,auVar51);
  auVar46 = vectorMultiplyAddFloatingPoint(auVar46,auVar30,auVar50);
  auVar47 = vectorMultiplyAddFloatingPoint(auVar47,auVar39,auVar36);
  g_ViewContext.fontClipScale.x =
       (float)storeVectorElementWordIndexed
                        (auVar35 | auVar35 << 0x20 | auVar35 << 0x40 | auVar35 << 0x60,400,0x95cf80)
  ;
  auVar36 = vectorNegativeMultiplySubtractFloatingPoint(auVar45,auVar41,auVar32);
  auVar37 = vectorMultiplyAddFloatingPoint(auVar43,auVar34,auVar37);
  g_ViewContext.fontClipScale.y =
       (float)storeVectorElementWordIndexed
                        (auVar31 | auVar31 << 0x20 | auVar31 << 0x40 | auVar31 << 0x60,0x194,
                         0x95cf80);
  auVar31 = ZEXT416(0xffffffff);
  auVar35 = auVar31 | auVar31 << 0x20 | auVar31 << 0x40 | auVar31 << 0x60;
  auVar31 = ZEXT416(0xffffffff);
  auVar34 = auVar31 | auVar31 << 0x20 | auVar31 << 0x40 | auVar31 << 0x60;
  auVar31 = ZEXT416(0xffffffff);
  auVar43 = auVar31 | auVar31 << 0x20 | auVar31 << 0x40 | auVar31 << 0x60;
  auVar31 = auVar38 >> 0x60 & (GPiece<16>)0xffffffff;
  auVar49 = auVar31 | auVar31 << 0x20 | auVar31 << 0x40 | auVar31 << 0x60;
  auVar31 = vectorShiftLeftIntegerWord(auVar35,auVar35);
  auVar39 = vectorShiftLeftIntegerWord(auVar34,auVar34);
  g_ViewContext.fontClipScale.z = -8.38808e+06;
  auVar35 = auVar46 >> 0x60 & (GPiece<16>)0xffffffff;
  g_ViewContext.fontClipScale.w = (float)storeVectorElementWordIndexed(auVar49,0x19c,0x95cf80);
  auVar34 = vectorMultiplyAddFloatingPoint(auVar45,auVar36,auVar31);
  auVar36 = vectorMultiplyAddFloatingPoint(auVar37,auVar33,auVar39);
  auVar31 = ZEXT416(0xffffffff);
  auVar39 = auVar31 | auVar31 << 0x20 | auVar31 << 0x40 | auVar31 << 0x60;
  auVar46 = vectorNegativeMultiplySubtractFloatingPoint(auVar47,auVar53,auVar32);
  auVar37 = vectorShiftLeftIntegerWord(auVar43,auVar43);
  g_ViewContext.pad_1B0[0] =
       storeVectorElementWordIndexed
                 (auVar35 | auVar35 << 0x20 | auVar35 << 0x40 | auVar35 << 0x60,0x1b0,0x95cf80);
  auVar31 = ZEXT416(0xffffffff);
  auVar31 = auVar31 | auVar31 << 0x20 | auVar31 << 0x40 | auVar31 << 0x60;
  auVar45 = vectorShiftLeftIntegerWord(auVar39,auVar39);
  auVar48 = loadVectorLeftIndexed(0x214,0x95cf80);
  auVar43 = vectorShiftLeftIntegerWord(auVar31,auVar31);
  auVar35 = auVar48 >> 0x60 & (GPiece<16>)0xffffffff;
  auVar39 = vectorNegativeMultiplySubtractFloatingPoint(auVar34,auVar41,auVar32);
  auVar36 = auVar36 >> 0x60 & (GPiece<16>)0xffffffff;
  auVar32 = vectorMultiplyAddFloatingPoint(auVar47,auVar46,auVar37);
  auVar31 = ZEXT416(0xffffffff);
  auVar31 = auVar31 | auVar31 << 0x20 | auVar31 << 0x40 | auVar31 << 0x60;
  auVar37 = vectorShiftLeftIntegerWord(auVar31,auVar31);
  g_ViewContext.pad_1B0[1] =
       storeVectorElementWordIndexed
                 (auVar36 | auVar36 << 0x20 | auVar36 << 0x40 | auVar36 << 0x60,0x1b4,0x95cf80);
  g_ViewContext.pad_1B0[3] = storeVectorElementWordIndexed(auVar49,0x1bc,0x95cf80);
  g_ViewContext.hvdf[0] = 2048.0;
  g_ViewContext.hvdf[1] = 2048.0;
  auVar36 = vectorMultiplyAddFloatingPoint(auVar34,auVar39,auVar45);
  g_ViewContext.hvdf[3] =
       (float)storeVectorElementWordIndexed
                        (auVar35 | auVar35 << 0x20 | auVar35 << 0x40 | auVar35 << 0x60,0x1ac,
                         0x95cf80);
  g_ViewContext.hvdf[2] = 8388112.0;
  auVar34 = vectorMultiplyAddFloatingPoint(auVar32,auVar30,auVar43);
  auVar31 = auVar38 >> 0x60 & (GPiece<16>)0xff;
  auVar39 = auVar31 | auVar31 << 8 | auVar31 << 0x10 | auVar31 << 0x18 | auVar31 << 0x20 |
            auVar31 << 0x28 | auVar31 << 0x30 | auVar31 << 0x38 | auVar31 << 0x40 | auVar31 << 0x48
            | auVar31 << 0x50 | auVar31 << 0x58 | auVar31 << 0x60 | auVar31 << 0x68 |
            auVar31 << 0x70 | auVar31 << 0x78;
  auVar36 = vectorMultiplyAddFloatingPoint(auVar36,auVar33,auVar37);
  auVar31 = auVar34 >> 0x60 & (GPiece<16>)0xffffffff;
  auVar32 = auVar31 | auVar31 << 0x20 | auVar31 << 0x40 | auVar31 << 0x60;
  g_ViewContext.guardX = (float)storeVectorElementWordIndexed(auVar32,0x1c0,0x95cf80);
  auVar31 = auVar36 >> 0x60 & (GPiece<16>)0xffffffff;
  auVar37 = auVar31 | auVar31 << 0x20 | auVar31 << 0x40 | auVar31 << 0x60;
  g_ViewContext.pad_1C4[0] = storeVectorElementWordIndexed(auVar37,0x1c4,0x95cf80);
  g_ViewContext.pad_1C4[1] = 0x3f800000;
  g_ViewContext.pad_1C4[2] = 0x3f800000;
  g_ViewContext.pad_00[0].piece<0,1>() = SUB41(g_ViewContext.fogFarIntensity,0);
  g_ViewContext.pad_00[0].piece<1,1>() = 0;
  g_ViewContext.pad_00[0].piece<2,1>() = 0xe;
  g_ViewContext.pad_00[0].piece<3,1>() = 0;
  auVar35[0] = g_ViewContext.field_40.up.x.piece<0,1>();
  auVar35[1] = g_ViewContext.field_40.up.x.piece<1,1>();
  auVar35[2] = g_ViewContext.field_40.up.x.piece<2,1>();
  auVar35[3] = g_ViewContext.field_40.up.x.piece<3,1>();
  auVar35.piece<4,4>() = g_ViewContext.field_40.up.y;
  auVar35.piece<8,4>() = g_ViewContext.field_40.up.z;
  auVar35.piece<12,4>() = g_ViewContext.field_40.up.w;
  g_ViewContext.field_40.up.x.piece<0,1>() = storeVectorElementByteIndexed(auVar39,0x60,0x95cf80);
  g_ViewContext.field_40.up.x.piece<1,1>() = 0;
  g_ViewContext.field_40.up.x.piece<2,1>() = 0x12;
  g_ViewContext.field_40.up.x.piece<3,1>() = 0;
  g_ViewContext.field_40.position.x.piece<0,1>() = storeVectorElementByteIndexed(auVar39,0x70,0x95cf80);
  g_ViewContext.field_40.position.x.piece<1,1>() = 0;
  g_ViewContext.field_40.position.x.piece<2,1>() = 0x12;
  g_ViewContext.field_40.position.x.piece<3,1>() = 0;
  g_ViewContext.pad_80[0].piece<0,1>() = storeVectorElementByteIndexed(auVar39,0x80,0x95cf80);
  g_ViewContext.pad_80[0].piece<1,1>() = 0;
  g_ViewContext.pad_80[0].piece<2,1>() = 0x41;
  g_ViewContext.pad_80[0].piece<3,1>() = 0;
  g_ViewContext.pad_80[4].piece<0,1>() = storeVectorElementByteIndexed(auVar39,0x90,0x95cf80);
  g_ViewContext.pad_80[4].piece<1,1>() = 0;
  g_ViewContext.pad_80[4].piece<2,1>() = 0x41;
  g_ViewContext.pad_80[4].piece<3,1>() = 0;
  auVar31 = loadVectorLeftIndexed(0x4c,0x66810);
  auVar31 = auVar31 >> 0x60 & (GPiece<16>)0xffffffff;
  auVar31 = vectorPermute(auVar38,auVar31 | auVar31 << 0x20 | auVar31 << 0x40 | auVar31 << 0x60,
                          _DAT_00066860);
  g_ViewContext.pad_00.piece<16,16>() = vectorPermute(auVar31,auVar35,_DAT_00066870);
  auVar31 = loadVectorLeftIndexed(8,0x66810);
  auVar35 = vectorPermute(auVar34,auVar36,_DAT_00066880);
  auVar31 = auVar31 >> 0x60 & (GPiece<16>)0xffffffff;
  _DAT_00735cf0 =
       vectorPermute(auVar35,auVar31 | auVar31 << 0x20 | auVar31 << 0x40 | auVar31 << 0x60,
                     _DAT_00066890);
  auVar31 = loadVectorLeftIndexed(0x48,0x66810);
  auVar31 = auVar31 >> 0x60 & (GPiece<16>)0xffffffff;
  auVar36 = vectorPermute(auVar40,auVar42,_DAT_000668a0);
  auVar35 = vectorPermute(auVar30,auVar33,_DAT_000668a0);
  auVar31 = vectorPermute(auVar31 | auVar31 << 0x20 | auVar31 << 0x40 | auVar31 << 0x60,auVar44,
                          _DAT_000668a0);
  _DAT_00735db0 = vectorPermute(auVar36,auVar31,_DAT_00066890);
  auVar31 = loadVectorLeftIndexed(0x3c,0x66810);
  auVar31 = auVar31 >> 0x60 & (GPiece<16>)0xffffffff;
  auVar31 = vectorPermute(auVar31 | auVar31 << 0x20 | auVar31 << 0x40 | auVar31 << 0x60,auVar38,
                          _DAT_000668a0);
  _DAT_00735ce0 = (Vec4)vectorPermute(auVar35,auVar31,_DAT_00066890);
  _DAT_00735cd0 = (Vec4)vectorPermute(_DAT_000668b0,auVar48,_DAT_000668c0);
  DAT_00735de0 = storeVectorElementWordIndexed(auVar32,0xa0,0x735d40);
  DAT_00735de4 = storeVectorElementWordIndexed(auVar37,0xa4,0x735d40);
  _DAT_00735da0 = _DAT_00735cd0;
  _DAT_00735dc0 = _DAT_00735ce0;
  _DAT_00736040 = _DAT_00735ce0;
  _DAT_00736050 = _DAT_00735cd0;
  g_ViewContext.pad_00.piece<32,16>() = _DAT_00735cf0;
  g_ViewContext.pad_00.piece<48,16>() = _DAT_00735db0;
  g_ViewContext.field_40.forward = _DAT_00735ce0;
  g_ViewContext.field_40.right = _DAT_00735cd0;
  RebuildSharedWaveTables();
  return;
}


// 0x00678d8 (0xec bytes)
void UpdateFog(void)

{
  byte g;
  byte b;
  byte r;
  
  if (GameCamera.camUnderWater == 0) {
    PartClipDist = 0x1f4000;
    r = levelFog.r;
    g = levelFog.g;
    b = levelFog.b;
    g_ViewContext.fogNearDist = LevelFogNearDist;
    g_ViewContext.fogFarDist = LevelFogFarDist;
    g_ViewContext.fogNearIntensity = LevelFogNearIntensity;
    g_ViewContext.fogFarIntensity = LevelFogFarIntensity;
  }
  else {
    PartClipDist = 0x40000;
    r = WaterFog.r;
    g = WaterFog.g;
    b = WaterFog.b;
    g_ViewContext.fogNearDist = WaterFogNearDist;
    g_ViewContext.fogFarDist = WaterFogFarDist;
    g_ViewContext.fogNearIntensity = WaterFogNearIntensity;
    g_ViewContext.fogFarIntensity = WaterFogFarIntensity;
  }
  g_ViewContext.fogR = (int)r;
  g_ViewContext.fogG = (int)g;
  g_ViewContext.fogB = (int)b;
  UpdateViewContext();
  LevelFogMode = 0;
  return;
}


// 0x00679c4 (0xe4 bytes)
char * ParseOcclGrid(int x,int y,int z)

{
  int iVar1;
  ushort *puVar2;
  
                    /* WARNING: Load size is inaccurate */
  iVar1 = z - (uint)*(ushort *)((int)OcclGrid + 4);
  if (((-1 < iVar1) && (iVar1 < (int)(uint)*(ushort *)((int)OcclGrid + 6))) &&
     (iVar1 = *(int *)((int)OcclGrid + iVar1 * 4 + 8), iVar1 != 0)) {
    puVar2 = (ushort *)((int)OcclGrid + iVar1);
    iVar1 = y - (uint)*puVar2;
    if (((-1 < iVar1) && (iVar1 < (int)(uint)puVar2[1])) && (*(int *)(puVar2 + iVar1 * 2 + 2) != 0))
    {
      puVar2 = (ushort *)((int)OcclGrid + *(int *)(puVar2 + iVar1 * 2 + 2));
      iVar1 = x - (uint)*puVar2;
      if (((-1 < iVar1) && (iVar1 < (int)(uint)puVar2[1])) && (puVar2[iVar1 + 2] != 0xffff)) {
        return (char *)((int)OcclGrid + (uint)puVar2[iVar1 + 2] * 0x80 + *OcclGrid);
      }
    }
  }
  return (char *)0x0;
}


// 0x0067ab0 (0xd0 bytes)
char * GetOcclGridFromPair(int x0,int y0,int z0,int x1,int y1,int z1,float interp)

{
  char *pcVar1;
  
  if (0.5 <= interp) {
    pcVar1 = ParseOcclGrid(x1,y1,z1);
    if (pcVar1 == (char *)0x0) {
      pcVar1 = ParseOcclGrid(x0,y0,z0);
    }
  }
  else {
    pcVar1 = ParseOcclGrid(x0,y0,z0);
    if (pcVar1 == (char *)0x0) {
      pcVar1 = ParseOcclGrid(x1,y1,z1);
    }
  }
  return pcVar1;
}


// 0x0067b90 (0x558 bytes)
void BuildOcclVisibility(void)

{
  undefined8 x;
  undefined8 y;
  int z;
  char *pcVar1;
  char *pcVar2;
  char *pcVar3;
  int y_00;
  undefined *puVar4;
  double dVar5;
  double dVar6;
  double OCCL_SCALE;
  int x_00;
  
  OCCL_SCALE = 0.25;
  x = FastDoubleToInt((double)(GameCamera.posX * 0.25));
  y = FastDoubleToInt((double)(float)((double)GameCamera.posY * OCCL_SCALE));
  z = FastDoubleToInt((double)(float)((double)GameCamera.posZ * OCCL_SCALE));
  x_00 = (int)x;
  y_00 = (int)y;
  pcVar1 = ParseOcclGrid(x_00,y_00,z);
  if (pcVar1 == (char *)0x0) {
    OcclInvalidGridGp = 1;
    puVar4 = (undefined *)0x0;
    if (OcclMode == 0) {
      dVar5 = (double)FastIntToDouble(x);
      dVar6 = 0.5;
      if (0.5 <= (float)((double)GameCamera.posX * OCCL_SCALE - dVar5)) {
        pcVar1 = ParseOcclGrid(x_00 + 1,y_00,z);
        if (pcVar1 == (char *)0x0) {
          pcVar1 = ParseOcclGrid(x_00 + -1,y_00,z);
        }
      }
      else {
        pcVar1 = ParseOcclGrid(x_00 + -1,y_00,z);
        if (pcVar1 == (char *)0x0) {
          pcVar1 = ParseOcclGrid(x_00 + 1,y_00,z);
        }
      }
      dVar5 = (double)FastIntToDouble(y);
      if (dVar6 <= (double)(float)((double)GameCamera.posY * OCCL_SCALE - dVar5)) {
        pcVar2 = ParseOcclGrid(x_00,y_00 + 1,z);
        if (pcVar2 == (char *)0x0) {
          pcVar2 = ParseOcclGrid(x_00,y_00 + -1,z);
        }
      }
      else {
        pcVar2 = ParseOcclGrid(x_00,y_00 + -1,z);
        if (pcVar2 == (char *)0x0) {
          pcVar2 = ParseOcclGrid(x_00,y_00 + 1,z);
        }
      }
      dVar5 = (double)FastIntToDouble();
      if (dVar6 <= (double)(float)((double)GameCamera.posZ * OCCL_SCALE - dVar5)) {
        pcVar3 = ParseOcclGrid(x_00,y_00,z + 1);
        if (pcVar3 == (char *)0x0) {
          pcVar3 = ParseOcclGrid(x_00,y_00,z + -1);
        }
      }
      else {
        pcVar3 = ParseOcclGrid(x_00,y_00,z + -1);
        if (pcVar3 == (char *)0x0) {
          pcVar3 = ParseOcclGrid(x_00,y_00,z + 1);
        }
      }
      if (((pcVar1 != (char *)0x0) || (pcVar2 != (char *)0x0)) || (pcVar3 != (char *)0x0)) {
        puVar4 = OcclVisibilityMerged;
        FastMemSetZero(OcclVisibilityMerged,0x80);
        if (pcVar1 != (char *)0x0) {
          FastMemOr16(OcclVisibilityMerged,OcclVisibilityMerged,pcVar1,0x80);
        }
        if (pcVar2 != (char *)0x0) {
          FastMemOr16(OcclVisibilityMerged,OcclVisibilityMerged,pcVar2,0x80);
        }
        if (pcVar3 != (char *)0x0) {
          FastMemOr16(OcclVisibilityMerged,OcclVisibilityMerged,pcVar3,0x80);
        }
        OcclPreviousGrid = OcclVisibilityMerged;
        FastMemCopy(OcclVisibility,OcclVisibilityMerged,0x80);
      }
    }
    if (puVar4 == (undefined *)0x0) {
      if (OcclMode < 1) {
        if (-1 < OcclMode) {
          if ((ControlMode == 0) && (OcclPreviousGrid != (char *)0x0)) {
            FastMemCopy(OcclVisibility,OcclPreviousGrid,0x80);
          }
          else {
            FastMemSet(OcclVisibility,0xffffffffffffffff,0x80);
          }
        }
      }
      else if (OcclMode < 2) {
        FastMemSet(OcclVisibility,0xffffffffffffffff,0x80);
      }
      else if (OcclMode < 3) {
        if (OcclOct == (void *)0x0) {
          if ((ControlMode == 0) && (OcclPreviousGrid != (char *)0x0)) {
            FastMemCopy(OcclVisibility,OcclPreviousGrid,0x80);
          }
          else {
            FastMemSet(OcclVisibility,0xffffffffffffffff,0x80);
          }
        }
        else {
                    /* WARNING: Load size is inaccurate */
          FastMemCopy
                    (OcclVisibility,
                     ZEXT48(OcclOct) +
                     ((ulonglong)(0.0 < GameCamera.posX - *OcclOct) << 2 |
                     (ulonglong)(0.0 < GameCamera.posY - *(float *)((int)OcclOct + 4)) << 1 |
                     (ulonglong)(0.0 < GameCamera.posZ - *(float *)((int)OcclOct + 8))) * 0x80 +
                     0x10 & 0xffffffff,0x80);
        }
      }
    }
  }
  else {
    OcclInvalidGridGp = 0;
    FastMemCopy(OcclVisibility,pcVar1,0x80);
    OcclPreviousGrid = pcVar1;
  }
  OcclVisibility[0x7f] = OcclVisibility[0x7f] | 0x80;
  return;
}


// 0x00680e8 (0x6c bytes)
void UpdateOcclusion(int param_1)

{
  if (OcclUpdate == 0) {
    FastMemSet(OcclVisibility,0xffffffffffffffff,0x80);
  }
  else if (OcclUpdate == 2) {
    BuildOcclVisibility();
  }
  *(undefined **)(DAT_00902e9c + 0x41c) = OcclVisibility;
  return;
}


// 0x0068160 (0x15c bytes)
void InitViewContext(void)

{
  double dVar1;
  double dVar2;
  
  g_ScreenWidth = (int)g_FrameBufWidth;
  g_ScreenHalfWidth = g_ScreenWidth >> 1;
  DAT_00966b18 = g_ScreenHalfWidth * 0x10 + 0x8000;
  g_ScreenHeight = (int)g_FrameBufHeight;
  g_ScreenHalfHeight = g_ScreenHeight >> 1;
  SCREEN_PROJECTION_MAP_X = (undefined4)((0x800U - (longlong)g_ScreenHalfWidth & 0xffffffff) << 4);
  DAT_00966b1c = g_ScreenHalfHeight * 0x10 + 0x8000;
  SCREEN_PROJECTION_MAP_Y = (undefined4)((0x800U - (longlong)g_ScreenHalfHeight & 0xffffffff) << 4);
  DAT_00966b20 = *(undefined4 *)(g_pIdolDraw + 4);
  DAT_00966b24 = *(undefined4 *)(g_pIdolDraw + 8);
  g_ViewContext.nearClip = 32.0;
  g_ViewContext.farClip = 745472.0;
  g_ViewContext.xratio = 0.63;
  dVar1 = (double)FastIntToDouble();
  dVar2 = 0.5;
  g_ViewContext.xpix = (float)(dVar1 * 0.5);
  dVar1 = (double)FastIntToDouble(g_FrameBufHeight);
  g_ViewContext.ypix = (float)(dVar1 * dVar2);
  g_ViewContext.fogNearDist = 0.0;
  g_ViewContext.fogFarDist = 524288.0;
  g_ViewContext.fogNearIntensity = 255.0;
  g_ViewContext.fogFarIntensity = 0.0;
  FLOAT_0095d1c8 = 2.0;
  g_ViewContext.xclip = g_ViewContext.xpix * 4.0;
  g_ViewContext.yclip = (float)(dVar1 * dVar2) * 4.0;
  return;
}


// 0x00682c8 (0x144 bytes)
void SetUserViewContext
               (int width,int height,float xratio,float fogNearDist,float fogFarDist,
               float fogNearIntensity,float fogFarIntensity)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  
  dVar5 = (double)fogNearIntensity;
  dVar6 = (double)fogFarIntensity;
  dVar2 = (double)fogNearDist;
  dVar4 = (double)fogFarDist;
  g_ScreenHalfWidth = width >> 1;
  g_ScreenHalfHeight = height >> 1;
  SCREEN_PROJECTION_MAP_X = (undefined4)((0x800U - (longlong)g_ScreenHalfWidth & 0xffffffff) << 4);
  SCREEN_PROJECTION_MAP_Y = (undefined4)((0x800U - (longlong)g_ScreenHalfHeight & 0xffffffff) << 4);
  DAT_00966b18 = g_ScreenHalfWidth * 0x10 + 0x8000;
  DAT_00966b1c = g_ScreenHalfHeight * 0x10 + 0x8000;
  g_ViewContext.nearClip = 32.0;
  g_ViewContext.farClip = 524288.0;
  g_ViewContext.xratio = xratio;
  g_ScreenWidth = width;
  g_ScreenHeight = height;
  dVar1 = (double)FastIntToDouble();
  dVar3 = 0.5;
  g_ViewContext.xpix = (float)(dVar1 * 0.5);
  dVar1 = (double)FastIntToDouble(height);
  g_ViewContext.ypix = (float)(dVar1 * dVar3);
  g_ViewContext.fogNearDist = (float)dVar2;
  g_ViewContext.xclip = g_ViewContext.xpix * 4.0;
  g_ViewContext.yclip = g_ViewContext.ypix * 4.0;
  g_ViewContext.fogFarDist = (float)dVar4;
  g_ViewContext.fogNearIntensity = (float)dVar5;
  g_ViewContext.fogFarIntensity = (float)dVar6;
  UpdateViewContext();
  return;
}


// 0x006840c (0x90 bytes)
void ResetDrawGlobals(void)

{
  g_MobyFuncListCount = 0;
  g_PostDrawCount = 0;
  g_NumLameShadows = 0;
  g_PreDrawCount = 0;
  DAT_0095cae0 = 0;
  g_PostPreDrawCount = 0;
  DAT_0095ccf0 = 0;
  LetterBoxOn = 0;
  LetterBoxPixels = 0;
  ScreenColorEffectEnabled = 0;
  DAT_0095cf20 = 0;
  g_ScreenInsertEffect = 0;
  OcclMode = 0;
  WaterTiles = (WaterTile *)0x0;
  WaterTileBoxes = (WaterTileBox *)0x0;
  WaterTileCnt = 0;
  WaterPlaneActive = 0;
  return;
}


// 0x006849c (0x4 bytes)
void STUB_0006849c(...)

{
  return;
}


// 0x00684a0 (0x4 bytes)
void STUB_000684a0(...)

{
  return;
}


// 0x00684a4 (0xbc bytes)
void UpdateOcclusion(int param_1)

{
  int *piVar1;
  
  piVar1 = g_pIdolDraw;
  ComposeCameraMatrix();
  if (param_1 != '\0') {
    if (OcclUpdate == 0) {
      FastMemSet(OcclVisibility,0xffffffffffffffff,0x80);
    }
    else if (OcclUpdate == 2) {
      BuildOcclVisibility();
    }
    *(undefined **)(DAT_00902e9c + 0x41c) = OcclVisibility;
  }
  (*(code *)**(undefined4 **)(*piVar1 + 0x14))(piVar1);
  return;
}


// 0x0068560 (0x64 bytes)
void Render_DispatchJob(void)

{
  idol_draw::Spurs_FlushAndSwapQueue(&DAT_01111700);
  OcclMode = 0;
  (*(code *)**(undefined4 **)(*g_pIdolDraw + 0x18))(g_pIdolDraw);
  return;
}


// 0x00685c4 (0x1c bytes)
int GetEffectTex(int param_1)

{
  return *(undefined4 *)(TexInfo + (int)(param_1 << 2));
}


// 0x00685e0 (0x2bc bytes)
void DrawFullScreenQuad(int rgba,void *tex)

{
  uint uVar1;
  RenderingStep *pRVar2;
  undefined4 uVar3;
  
  uVar3 = g_pIdolDraw;
  FUN_004deab8(g_pIdolDraw,g_FrameBufWidth,g_FrameBufHeight);
  uVar1 = *(uint *)((int)tex + 0x18);
  idol_draw::BindTexture(HUD_Pass,0,tex,TexSamplerFlags);
  idol_draw::ResetPassState(HUD_Pass);
  pRVar2 = HUD_Pass;
  *HUD_Pass->command = 0x41948;
  pRVar2->command[1] =
       (rgba >> 8 & 0xffU) << 8 | (rgba >> 0x10 & 0xffU) << 0x10 | rgba & 0xff000000 | rgba & 0xff;
  pRVar2->command = pRVar2->command + 2;
  pRVar2 = HUD_Pass;
  *HUD_Pass->command = 0x400c1714;
  pRVar2->command[1] = 0;
  pRVar2->command[2] = 0;
  pRVar2->command[3] = 0;
  pRVar2->command[4] = NV4097_SET_BEGIN_END_x1;
  pRVar2->command[5] = 8;
  pRVar2->command = pRVar2->command + 6;
  pRVar2 = HUD_Pass;
  *HUD_Pass->command = 0x41904;
  pRVar2->command[1] = 0;
  pRVar2->command = pRVar2->command + 2;
  pRVar2 = HUD_Pass;
  *HUD_Pass->command = NV4097_SET_VERTEX_DATA2S_M_x1;
  pRVar2->command[1] = 0;
  pRVar2->command = pRVar2->command + 2;
  pRVar2 = HUD_Pass;
  *HUD_Pass->command = 0x41904;
  pRVar2->command[1] = uVar1 << 0x10;
  pRVar2->command = pRVar2->command + 2;
  pRVar2 = HUD_Pass;
  *HUD_Pass->command = NV4097_SET_VERTEX_DATA2S_M_x1;
  pRVar2->command[1] = 0x1a00000;
  pRVar2->command = pRVar2->command + 2;
  pRVar2 = HUD_Pass;
  *HUD_Pass->command = 0x41904;
  pRVar2->command[1] = uVar1 << 0x10 | uVar1 >> 0x10;
  pRVar2->command = pRVar2->command + 2;
  pRVar2 = HUD_Pass;
  *HUD_Pass->command = NV4097_SET_VERTEX_DATA2S_M_x1;
  pRVar2->command[1] = 0x1a00200;
  pRVar2->command = pRVar2->command + 2;
  pRVar2 = HUD_Pass;
  *HUD_Pass->command = 0x41904;
  pRVar2->command[1] = uVar1 >> 0x10;
  pRVar2->command = pRVar2->command + 2;
  pRVar2 = HUD_Pass;
  *HUD_Pass->command = NV4097_SET_VERTEX_DATA2S_M_x1;
  pRVar2->command[1] = 0x200;
  pRVar2->command = pRVar2->command + 2;
  pRVar2 = HUD_Pass;
  *HUD_Pass->command = NV4097_SET_BEGIN_END_x1;
  pRVar2->command[1] = 0;
  pRVar2->command = pRVar2->command + 2;
  FUN_004d86b0(uVar3);
  return;
}


// 0x006889c (0x354 bytes)
void Sprite_DrawShape(int param_1,int param_2,int param_3,int param_4,int param_5,int param_6,int param_7,int param_8,u32 param_9,void *param_10)

{
  RsxCmd *pRVar1;
  ulonglong uVar2;
  RsxCmd RVar3;
  RsxCmd RVar4;
  RenderingStep *pRVar5;
  ulonglong in_stack_00000070;
  void *in_stack_0000007c;
  
  if (((param_1 == 0 && param_3 == 0x200) && ((int)param_2 == 0)) && ((int)param_4 == 0x1a0)) {
    DrawFullScreenQuad((RsxCmd)in_stack_00000070,in_stack_0000007c);
  }
  else {
    uVar2 = (param_8 + param_6) * 2;
    idol_draw::BindTexture(HUD_Pass,0,in_stack_0000007c,TexSamplerFlags);
    idol_draw::ResetPassState(HUD_Pass);
    pRVar5 = HUD_Pass;
    *HUD_Pass->command = 0x41948;
    pRVar1 = pRVar5->command;
    pRVar1[1] = (RsxCmd)((in_stack_00000070 >> 8 & 0xff) << 8) |
                (RsxCmd)((in_stack_00000070 >> 0x18 & 0xff) << 0x18) |
                (RsxCmd)((in_stack_00000070 >> 0x10 & 0xff) << 0x10) |
                (RsxCmd)in_stack_00000070 & 0xff;
    pRVar5->command = pRVar1 + 2;
    pRVar5 = HUD_Pass;
    *HUD_Pass->command = 0x400c1714;
    pRVar5->command[1] = 0;
    pRVar5->command[2] = 0;
    pRVar5->command[3] = 0;
    pRVar5->command[4] = NV4097_SET_BEGIN_END_x1;
    pRVar1 = pRVar5->command;
    pRVar1[5] = 8;
    pRVar5->command = pRVar1 + 6;
    pRVar5 = HUD_Pass;
    RVar3 = (RsxCmd)(param_5 << 1) & 0xfffe;
    *HUD_Pass->command = 0x41904;
    pRVar1 = pRVar5->command;
    pRVar1[1] = (RsxCmd)((param_6 << 1 & 0xfffffffeU) << 0x10) | RVar3;
    pRVar5->command = pRVar1 + 2;
    pRVar5 = HUD_Pass;
    *HUD_Pass->command = NV4097_SET_VERTEX_DATA2S_M_x1;
    pRVar1 = pRVar5->command;
    pRVar1[1] = (RsxCmd)((param_2 & 0xffffffff) << 0x10) | param_1 & 0xffff;
    pRVar5->command = pRVar1 + 2;
    pRVar5 = HUD_Pass;
    RVar4 = param_3 + param_1 & 0xffff;
    *HUD_Pass->command = 0x41904;
    pRVar1 = pRVar5->command;
    pRVar1[1] = (RsxCmd)((uVar2 & 0xfffffffe) << 0x10) | RVar3;
    pRVar5->command = pRVar1 + 2;
    pRVar5 = HUD_Pass;
    RVar3 = ((int)param_5 + param_7) * 2 & 0xfffe;
    *HUD_Pass->command = NV4097_SET_VERTEX_DATA2S_M_x1;
    pRVar1 = pRVar5->command;
    pRVar1[1] = (RsxCmd)((param_4 + param_2 & 0xffffffff) << 0x10) | param_1 & 0xffff;
    pRVar5->command = pRVar1 + 2;
    pRVar5 = HUD_Pass;
    *HUD_Pass->command = 0x41904;
    pRVar1 = pRVar5->command;
    pRVar1[1] = (RsxCmd)((uVar2 & 0xfffffffe) << 0x10) | RVar3;
    pRVar5->command = pRVar1 + 2;
    pRVar5 = HUD_Pass;
    *HUD_Pass->command = NV4097_SET_VERTEX_DATA2S_M_x1;
    pRVar1 = pRVar5->command;
    pRVar1[1] = (RsxCmd)((param_4 + param_2 & 0xffffffff) << 0x10) | RVar4;
    pRVar5->command = pRVar1 + 2;
    pRVar5 = HUD_Pass;
    *HUD_Pass->command = 0x41904;
    pRVar1 = pRVar5->command;
    pRVar1[1] = (RsxCmd)((param_6 << 1 & 0xfffffffeU) << 0x10) | RVar3;
    pRVar5->command = pRVar1 + 2;
    pRVar5 = HUD_Pass;
    *HUD_Pass->command = NV4097_SET_VERTEX_DATA2S_M_x1;
    pRVar1 = pRVar5->command;
    pRVar1[1] = (RsxCmd)((param_2 & 0xffffffff) << 0x10) | RVar4;
    pRVar5->command = pRVar1 + 2;
    pRVar5 = HUD_Pass;
    *HUD_Pass->command = NV4097_SET_BEGIN_END_x1;
    pRVar1 = pRVar5->command;
    pRVar1[1] = 0;
    pRVar5->command = pRVar1 + 2;
  }
  return;
}


// 0x0068bf0 (0x78 bytes)
void Sprite_DrawShapeF(double param_1,double param_2,double param_3,double param_4)

{
  Sprite_DrawShape((int)param_1,(int)param_2,(int)param_3,(int)param_4);
  return;
}


// 0x0068c70 (0x3e4 bytes)
void FontPrintJapanese_unk2
               (double param_1,double param_2,double param_3,undefined8 param_4,undefined8 param_5,
               undefined4 param_6,int param_7,int param_8,undefined8 param_9,undefined8 param_10,
               int param_11)

{
  int iVar1;
  double dVar2;
  byte bVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  double dVar8;
  
  if (DAT_0095ee18 == 0) {
    DAT_0071ef98 = param_6;
  }
  iVar7 = 0;
  if (param_8 != 0) {
    iVar1 = (int)(param_3 * 16.0);
    dVar2 = param_3 * 24.0;
    do {
      bVar3 = *(byte *)(param_7 + iVar7);
      if (bVar3 == 0) {
        return;
      }
      if ((bVar3 < 8) || (0xf < bVar3)) {
        dVar8 = (double)FastIntToDouble(*(undefined1 *)(param_11 + (uint)bVar3 * 4 + 2));
        bVar3 = *(byte *)(param_7 + iVar7);
        iVar6 = (uint)bVar3 * 4;
        if (*(char *)(param_11 + iVar6 + 3) != '\0') {
          iVar4 = param_11 + (uint)bVar3 * 4;
          if (bVar3 < 0x20) {
            Sprite_DrawShape((int)param_1,(int)(dVar8 * param_3 + param_2),(int)dVar2,iVar1,
                             *(undefined1 *)(param_11 + iVar6),*(undefined1 *)(iVar4 + 1),0x18,0x10)
            ;
          }
          else {
            if ((0xbc < bVar3) && (bVar3 < 0xbf)) {
              bVar3 = *(byte *)(param_7 + iVar7 + -1);
              iVar5 = param_11 + (bVar3 + 0x80) * 4;
              Sprite_DrawShape((int)((double)(longlong)
                                             ((int)*(char *)(iVar5 + 3) -
                                             (int)*(char *)(param_11 + (uint)bVar3 * 4 + 3)) *
                                     param_3 + param_1),
                               (int)((double)(longlong)(int)*(char *)(iVar5 + 2) * param_3 + param_2
                                    ),iVar1,iVar1,*(undefined1 *)(param_11 + iVar6),
                               *(undefined1 *)(iVar4 + 1),0x10,0x10);
              param_1 = (double)(float)((double)(longlong)
                                                (int)(((int)*(char *)(iVar5 + 3) -
                                                      (int)*(char *)(param_11 +
                                                                     (uint)*(byte *)(param_7 + iVar7
                                                                                    + -1) * 4 + 3))
                                                      + ((*(byte *)(param_7 + iVar7) -
                                                                       0xbe == 0)) + 4) * param_3 +
                                       param_1);
              goto LAB_00068ffc;
            }
            if (0x20 < bVar3) {
              Sprite_DrawShape((int)param_1,(int)(dVar8 * param_3 + param_2),iVar1,iVar1,
                               *(undefined1 *)(param_11 + (uint)bVar3 * 4),
                               *(undefined1 *)(iVar4 + 1),0x10,0x10);
            }
          }
          dVar8 = (double)FastIntToDouble
                                    (*(undefined1 *)
                                      (param_11 + (uint)*(byte *)(param_7 + iVar7) * 4 + 3));
          param_1 = (double)(float)(dVar8 * param_3 + param_1);
        }
      }
LAB_00068ffc:
      iVar7 = iVar7 + 1;
    } while (iVar7 != param_8);
  }
  return;
}


// 0x0069058 (0x7c bytes)
int FontLenScaledWithTableNoKern
              (double param_1,int param_2,int param_3,undefined8 param_4,int param_5)

{
  byte *pbVar1;
  int iVar2;
  double dVar3;
  
  iVar2 = 0;
  dVar3 = 0.0;
  if (param_3 != 0) {
    do {
      pbVar1 = (byte *)(param_2 + iVar2);
      if (*pbVar1 == 0) break;
      iVar2 = iVar2 + 1;
      dVar3 = (double)(float)((double)(longlong)(int)*(char *)(param_5 + (uint)*pbVar1 * 4 + 3) *
                              param_1 + dVar3);
    } while (iVar2 != param_3);
  }
  return (int)dVar3;
}


// 0x00690e0 (0x5ac bytes)
void FontPrintOptJapanese
               (double param_1,undefined8 param_2,undefined4 param_3,int param_4,int param_5,
               undefined8 param_6,longlong param_7)

{
  byte bVar1;
  ushort uVar2;
  short sVar3;
  undefined4 uVar4;
  undefined2 uVar5;
  GPiece<16> auVar6;
  ulonglong *puVar7;
  int iVar8;
  int iVar9;
  int iVar11;
  longlong lVar10;
  int iVar12;
  ulonglong uVar13;
  short sVar14;
  short sVar15;
  short sVar17;
  int iVar16;
  longlong lVar18;
  int iVar19;
  short sVar20;
  ulonglong unaff_r20;
  ulonglong unaff_r21;
  longlong lVar21;
  ulonglong unaff_r22;
  ulonglong unaff_r23;
  longlong lVar22;
  ulonglong unaff_r24;
  ulonglong unaff_r25;
  int iVar23;
  ulonglong unaff_r26;
  int iVar24;
  ulonglong unaff_r27;
  ulonglong unaff_r28;
  ulonglong unaff_r29;
  ulonglong unaff_r30;
  ulonglong unaff_r31;
  ulonglong in_LR;
  double dVar25;
  ulonglong uVar26;
  ulonglong uVar27;
  ulonglong in_f31;
  GPiece<16> auVar28;
  GPiece<16> auVar29;
  GPiece<16> auVar30;
  
  lVar22 = ZEXT48(&stack0x00000000) - 0x1d0;
  puVar7 = (ulonglong *)lVar22;
  *puVar7 = ZEXT48(&stack0x00000000);
  puVar7[0x3c] = in_LR;
  puVar7[0x39] = in_f31;
  puVar7[0x38] = unaff_r31;
  *(float *)(puVar7 + 0x26) = (float)param_1;
  *(float *)((int)puVar7 + 0x134) = (float)param_1;
  *(float *)(puVar7 + 0x27) = (float)param_1;
  puVar7[0x36] = unaff_r29;
  puVar7[0x31] = unaff_r24;
  *(float *)((int)puVar7 + 0x13c) = (float)param_1;
  puVar7[0x37] = unaff_r30;
  iVar8 = (int)param_2;
  uVar2 = *(ushort *)(iVar8 + 0x12);
  sVar14 = *(short *)(iVar8 + 0x10);
  sVar3 = *(short *)(iVar8 + 10);
  puVar7[0x35] = unaff_r28;
  auVar30 = *(undefined1 (*) [16])(puVar7 + 0x26);
  puVar7[0x34] = unaff_r27;
  puVar7[0x33] = unaff_r26;
  puVar7[0x32] = unaff_r25;
  puVar7[0x30] = unaff_r23;
  puVar7[0x2f] = unaff_r22;
  puVar7[0x2e] = unaff_r21;
  puVar7[0x2d] = unaff_r20;
  DAT_0095ee18 = 1;
  if ((uVar2 & 1) == 0) {
    iVar11 = (int)*(short *)(iVar8 + 6) - (int)*(short *)(iVar8 + 8);
  }
  else {
    lVar10 = (longlong)*(short *)(iVar8 + 8);
    lVar18 = (longlong)*(short *)(iVar8 + 4);
    lVar21 = *(short *)(iVar8 + 6) - lVar10;
    iVar11 = (int)(((lVar10 + (lVar21 - (lVar10 - lVar18) >> 0x3f & *(short *)(iVar8 + 6) - lVar10))
                    - (lVar18 + (lVar21 - (lVar10 - lVar18) >> 0x3f & lVar10 - lVar18)) &
                   0xffffffffU) << 1);
  }
  iVar24 = 0;
  iVar16 = 0;
  sVar15 = 0;
  lVar10 = lVar22;
  iVar9 = 0;
  if (param_5 != 0) {
    while (iVar24 = iVar9, *(char *)(param_4 + iVar16) != '\0') {
      iVar9 = (int)lVar10;
      sVar17 = (short)iVar16;
      *(short *)(iVar9 + 0x70) = sVar17;
      lVar18 = 0;
      *(short *)(iVar9 + 0xf0) = sVar15;
      iVar19 = iVar16;
      if (0 < iVar11) {
        do {
          bVar1 = *(byte *)(param_4 + iVar16);
          if ((bVar1 == 0x20) || (bVar1 < 0x10)) {
            iVar19 = iVar16;
          }
          if (((g_FontColorsEnabled != 0) && (7 < bVar1)) && (bVar1 < 0x10)) {
            sVar15 = bVar1 - 8;
          }
          if ((bVar1 == 0) || (bVar1 == 1)) break;
          iVar16 = iVar16 + 1;
          bVar1 = *(byte *)((int)param_7 + (uint)bVar1 * 4 + 3);
          lVar21 = lVar18 + (char)bVar1;
          lVar18 = lVar21 + (ZERO_MASK((uint)bVar1) & lVar18 - lVar21);
        } while ((int)lVar18 < iVar11);
      }
      sVar20 = (short)iVar19;
      *(short *)(iVar9 + 0xb0) = sVar20;
      if (sVar20 == sVar17) {
        sVar20 = (short)iVar16;
        *(short *)(iVar9 + 0xb0) = sVar20;
      }
      bVar1 = *(byte *)(param_4 + sVar20);
      if ((bVar1 == 0x20) || (bVar1 < 0x10)) {
        *(short *)(iVar9 + 0xb0) = sVar20 + -1;
      }
      iVar24 = iVar24 + 1;
      if ((bVar1 == 0) ||
         (iVar16 = sVar20 + 1, lVar10 = lVar10 + 2, iVar9 = iVar24, iVar16 == param_5)) break;
    }
  }
  *(undefined2 *)(iVar8 + 0xc) = 0;
  *(short *)(iVar8 + 0xe) = (short)iVar24 * sVar14;
  lVar10 = (longlong)sVar3 - (longlong)(sVar14 * iVar24 >> 1);
  iVar11 = 0;
  if (0 < iVar24) {
    lVar10 = lVar10 + (ZERO_MASK((uVar2 & 2)) & sVar3 - lVar10);
    do {
      iVar9 = (int)lVar22;
      iVar12 = 0;
      auVar28 = ZEXT416(0);
      auVar28 = auVar28 | auVar28 << 0x20 | auVar28 << 0x40 | auVar28 << 0x60;
      dVar25 = 0.0;
      iVar16 = *(short *)(iVar9 + 0x70) + param_4;
      iVar19 = ((int)*(short *)(iVar9 + 0xb0) - (int)*(short *)(iVar9 + 0x70)) + 1;
      if (iVar19 != 0) {
        auVar6 = ZEXT416(0xfffffff8);
        do {
          auVar28 = auVar28 >> 0x60 & (GPiece<16>)0xffffffff;
          auVar28 = auVar28 | auVar28 << 0x20 | auVar28 << 0x40 | auVar28 << 0x60;
          if (*(byte *)(iVar16 + iVar12) == 0) break;
          uVar13 = param_7 + (ulonglong)*(byte *)(iVar16 + iVar12) * 4;
          iVar12 = iVar12 + 1;
          auVar29 = loadVectorLeftIndexed(3,uVar13 & 0xffffffff);
          auVar29 = vectorShiftRightAlgebraicWord
                              (auVar29,auVar6 | auVar6 << 0x20 | auVar6 << 0x40 | auVar6 << 0x60);
          puVar7[0x28] = (longlong)(int)*(char *)((int)uVar13 + 3);
          auVar29 = vectorConvertFromSignedFixedPointWord(auVar29,0);
          auVar28 = vectorMultiplyAddFloatingPoint(auVar29,auVar30,auVar28);
          dVar25 = (double)(float)((double)(longlong)puVar7[0x28] * param_1 + dVar25);
        } while (iVar12 != iVar19);
      }
      sVar14 = *(short *)(iVar8 + 0xc);
      auVar28 = auVar28 >> 0x60 & (GPiece<16>)0xffffffff;
      auVar28 = vectorConvertToSignedFixedPointWordSaturate
                          (auVar28 | auVar28 << 0x20 | auVar28 << 0x40 | auVar28 << 0x60,0);
      puVar7[0x28] = (longlong)(int)dVar25;
      iVar12 = *(int *)((int)puVar7 + 0x144);
      if (sVar14 < iVar12) {
        auVar28 = vectorSplatHalfWord(auVar28,1);
        uVar5 = storeVectorElementHalfWordIndexed(auVar28,0xc,param_2);
        *(undefined2 *)(iVar8 + 0xc) = uVar5;
      }
      uVar2 = *(ushort *)(iVar8 + 0x12);
      if ((uVar2 & 4) == 0) {
        iVar23 = (int)lVar10;
        iVar12 = iVar12 >> 1;
        DAT_0071ef98 = param_3;
        if ((uVar2 & 8) == 0) {
          if ((uVar2 & 1) == 0) {
            puVar7[0x28] = (longlong)(int)*(short *)(iVar8 + 8);
            lVar18 = (longlong)*(short *)(iVar9 + 0xf0) << 2;
            uVar4 = *(undefined4 *)((int)&DAT_0071ef98 + (int)lVar18);
            uVar13 = puVar7[0x28];
            puVar7[0x28] = (longlong)iVar23;
            FontPrintJapanese_unk2
                      ((double)(longlong)uVar13,(double)(longlong)puVar7[0x28],param_1,lVar18,iVar16
                       ,uVar4,iVar16,iVar19,(longlong)iVar23,param_6,param_7);
          }
          else {
            puVar7[0x28] = (longlong)(*(short *)(iVar8 + 8) - iVar12);
            uVar4 = *(undefined4 *)
                     ((int)&DAT_0071ef98 + (int)((longlong)*(short *)(iVar9 + 0xf0) << 2));
            uVar13 = puVar7[0x28];
            puVar7[0x28] = (longlong)iVar23;
            FontPrintJapanese_unk2
                      ((double)(longlong)uVar13,(double)(longlong)puVar7[0x28],param_1,iVar19,iVar16
                       ,uVar4,iVar16,iVar19,(longlong)iVar23,param_6,param_7);
          }
        }
        else {
          if ((uVar2 & 1) == 0) {
            sVar14 = *(short *)(iVar8 + 0x14);
            iVar12 = (int)*(short *)(iVar8 + 8);
          }
          else {
            sVar14 = *(short *)(iVar8 + 0x14);
            iVar12 = *(short *)(iVar8 + 8) - iVar12;
          }
          puVar7[0x28] = (longlong)(int)sVar14;
          sVar14 = *(short *)(iVar8 + 0x16);
          sVar3 = *(short *)(iVar9 + 0xf0);
          uVar13 = puVar7[0x28];
          puVar7[0x28] = (longlong)iVar12;
          uVar26 = puVar7[0x28];
          puVar7[0x28] = (longlong)iVar23;
          uVar4 = *(undefined4 *)((int)&DAT_0071ef98 + (int)((longlong)sVar3 << 2));
          uVar27 = puVar7[0x28];
          puVar7[0x28] = (longlong)(int)sVar14;
          FontPrintJapanese_unk2
                    ((double)((float)(longlong)uVar13 * 0.0625 + (float)(longlong)uVar26),
                     (double)((float)(longlong)puVar7[0x28] * 0.0625 + (float)(longlong)uVar27),
                     param_1,iVar19,iVar16,uVar4,iVar16,iVar19,(longlong)(int)sVar14,param_6,param_7
                    );
        }
      }
      iVar11 = iVar11 + 1;
      lVar22 = lVar22 + 2;
      lVar10 = lVar10 + *(short *)(iVar8 + 0x10);
    } while (iVar11 < iVar24);
  }
  DAT_0095ee18 = 0;
  return;
}


// 0x006968c (0x378 bytes)
void DrawSpriteFont(double param_1,double param_2,double param_3,double param_4)

{
  ulonglong uVar1;
  RsxCmd RVar2;
  RenderingStep *pRVar3;
  undefined4 *puVar4;
  ulonglong in_r7;
  ulonglong in_r8;
  int in_r9;
  longlong in_r10;
  double dVar5;
  double dVar6;
  ulonglong in_stack_00000070;
  longlong in_stack_00000078;
  undefined4 local_90;
  uint local_8c;
  undefined4 local_88;
  undefined4 local_84;
  undefined4 local_80;
  undefined4 local_7c;
  undefined4 local_78;
  undefined4 local_74;
  undefined4 local_70;
  
  dVar6 = (double)(float)(param_3 + param_1);
  dVar5 = (double)(float)(param_4 + param_2);
  puVar4 = (undefined4 *)
           (EffectTexHeaders + (int)(in_stack_00000078 << 5) + (int)(in_stack_00000078 << 2));
  uVar1 = (in_r10 + in_r8) * 2;
  local_90 = *puVar4;
  local_88 = puVar4[2];
  local_84 = puVar4[3];
  local_80 = puVar4[4];
  local_7c = puVar4[5];
  local_8c = puVar4[1] & 0xffff | 0x14000;
  local_78 = puVar4[6];
  local_74 = puVar4[7];
  local_70 = puVar4[8];
  FUN_004d6bb0(HUD_Pass,0,&local_90);
  idol_draw::ResetPassState(HUD_Pass);
  pRVar3 = HUD_Pass;
  *HUD_Pass->command = 0x41948;
  pRVar3->command[1] =
       (RsxCmd)((in_stack_00000070 >> 8 & 0xff) << 8) |
       (RsxCmd)((in_stack_00000070 >> 0x18 & 0xff) << 0x18) |
       (RsxCmd)((in_stack_00000070 >> 0x10 & 0xff) << 0x10) | (RsxCmd)in_stack_00000070 & 0xff;
  pRVar3->command = pRVar3->command + 2;
  pRVar3 = HUD_Pass;
  *HUD_Pass->command = 0x400c1714;
  pRVar3->command[1] = 0;
  pRVar3->command[2] = 0;
  pRVar3->command[3] = 0;
  pRVar3->command[4] = NV4097_SET_BEGIN_END_x1;
  pRVar3->command[5] = 8;
  RVar2 = (RsxCmd)((in_r7 & 0xffffffff) << 1) & 0xfffe;
  pRVar3->command = pRVar3->command + 6;
  pRVar3 = HUD_Pass;
  *HUD_Pass->command = 0x41904;
  pRVar3->command[1] = (RsxCmd)((in_r8 & 0xffffffff) << 0x11) | RVar2;
  pRVar3->command = pRVar3->command + 2;
  pRVar3 = HUD_Pass;
  *HUD_Pass->command = NV4097_SET_VERTEX_DATA2F_M_x2;
  pRVar3->command[1] = (RsxCmd)(float)param_1;
  pRVar3->command[2] = (RsxCmd)(float)param_2;
  pRVar3->command = pRVar3->command + 3;
  pRVar3 = HUD_Pass;
  *HUD_Pass->command = 0x41904;
  pRVar3->command[1] = (RsxCmd)((uVar1 & 0xfffffffe) << 0x10) | RVar2;
  RVar2 = ((int)in_r7 + in_r9) * 2 & 0xfffe;
  pRVar3->command = pRVar3->command + 2;
  pRVar3 = HUD_Pass;
  *HUD_Pass->command = NV4097_SET_VERTEX_DATA2F_M_x2;
  pRVar3->command[1] = (RsxCmd)(float)param_1;
  pRVar3->command[2] = (RsxCmd)(float)dVar5;
  pRVar3->command = pRVar3->command + 3;
  pRVar3 = HUD_Pass;
  *HUD_Pass->command = 0x41904;
  pRVar3->command[1] = (RsxCmd)((uVar1 & 0xfffffffe) << 0x10) | RVar2;
  pRVar3->command = pRVar3->command + 2;
  pRVar3 = HUD_Pass;
  *HUD_Pass->command = NV4097_SET_VERTEX_DATA2F_M_x2;
  pRVar3->command[1] = (RsxCmd)(float)dVar6;
  pRVar3->command[2] = (RsxCmd)(float)dVar5;
  pRVar3->command = pRVar3->command + 3;
  pRVar3 = HUD_Pass;
  *HUD_Pass->command = 0x41904;
  pRVar3->command[1] = (RsxCmd)((in_r8 & 0xffffffff) << 0x11) | RVar2;
  pRVar3->command = pRVar3->command + 2;
  pRVar3 = HUD_Pass;
  *HUD_Pass->command = NV4097_SET_VERTEX_DATA2F_M_x2;
  pRVar3->command[1] = (RsxCmd)(float)dVar6;
  pRVar3->command[2] = (RsxCmd)(float)param_2;
  pRVar3->command = pRVar3->command + 3;
  pRVar3 = HUD_Pass;
  *HUD_Pass->command = NV4097_SET_BEGIN_END_x1;
  pRVar3->command[1] = 0;
  pRVar3->command = pRVar3->command + 2;
  return;
}


// 0x0069a04 (0x40 bytes)
void DrawSpriteFont_thunk(void)

{
  DrawSpriteFont();
  return;
}


// 0x0069a50 (0x34c bytes)
void FontPrint_unk3
               (double param_1,double param_2,double param_3,undefined8 param_4,undefined8 param_5,
               undefined4 param_6,int param_7,int param_8,undefined8 param_9,undefined8 param_10,
               int param_11)

{
  int iVar1;
  undefined8 uVar2;
  byte bVar3;
  int iVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  
  uVar2 = idol_draw::PackCmd(0,1,0,1,0);
  SetGSReg(3,uVar2);
  uVar2 = idol_draw::Blend(1,5,4,0,0,0,0,1);
  SetGSReg(0x16,uVar2);
  if (DAT_0095ee18 == 0) {
    DAT_0071ef98 = param_6;
  }
  iVar4 = 0;
  dVar8 = (double)(float)(param_3 * 16.0);
  if (param_8 != 0) {
    dVar9 = (double)(float)(param_3 * 24.0);
    do {
      bVar3 = *(byte *)(param_7 + iVar4);
      if (bVar3 == 0) {
        return;
      }
      if (((bVar3 < 8) || (0xf < bVar3)) &&
         (iVar1 = param_11 + (uint)bVar3 * 4, *(char *)(iVar1 + 3) != '\0')) {
        dVar5 = (double)FastIntToDouble(*(undefined1 *)(iVar1 + 2));
        bVar3 = *(byte *)(param_7 + iVar4);
        if ((0x7f < bVar3) && (bVar3 < 0xa8)) {
          iVar1 = param_11 + (bVar3 + 0x40) * 4;
          dVar6 = (double)FastIntToDouble(*(undefined1 *)(iVar1 + 3));
          dVar7 = (double)FastIntToDouble(*(undefined1 *)(iVar1 + 2));
          DrawSpriteFont((double)(float)(dVar6 * param_3 + param_1),
                         (double)(float)(dVar7 * param_3 + param_2),dVar8,dVar8);
          bVar3 = *(byte *)(param_7 + iVar4);
        }
        dVar5 = (double)(float)(dVar5 * param_3 + param_2);
        if (bVar3 < 0x20) {
          DrawSpriteFont(param_1,dVar5,dVar9,dVar8);
        }
        else if (0x20 < bVar3) {
          DrawSpriteFont(param_1,dVar5,dVar8,dVar8);
        }
        dVar5 = (double)FastIntToDouble
                                  (*(undefined1 *)
                                    (param_11 + (uint)*(byte *)(param_7 + iVar4) * 4 + 3));
        param_1 = (double)(float)(dVar5 * param_3 + param_1);
      }
      iVar4 = iVar4 + 1;
    } while (iVar4 != param_8);
  }
  return;
}


// 0x0069db8 (0x750 bytes)
void FontPrintOptWestern(float param_1,FontWindow *param_2,u32 param_3,const char *param_4,int param_5,int param_6,void *param_7)

{
  byte bVar1;
  ushort uVar2;
  ushort uVar3;
  undefined4 uVar4;
  undefined2 uVar5;
  GPiece<16> auVar6;
  ulonglong *puVar7;
  int iVar8;
  int iVar9;
  bool bVar10;
  undefined4 *puVar11;
  short sVar15;
  int iVar13;
  ulonglong uVar12;
  int iVar14;
  longlong lVar16;
  longlong lVar17;
  int iVar18;
  short sVar19;
  int iVar20;
  short sVar21;
  longlong lVar22;
  ulonglong unaff_r14;
  ulonglong unaff_r15;
  ulonglong unaff_r16;
  ulonglong unaff_r17;
  ulonglong unaff_r18;
  ulonglong unaff_r19;
  ulonglong unaff_r20;
  ulonglong unaff_r21;
  ulonglong unaff_r22;
  longlong lVar23;
  ulonglong unaff_r23;
  ulonglong unaff_r24;
  ulonglong unaff_r25;
  longlong lVar24;
  ulonglong unaff_r26;
  ulonglong unaff_r27;
  ulonglong unaff_r28;
  ulonglong unaff_r29;
  ulonglong unaff_r30;
  longlong lVar25;
  int iVar28;
  longlong lVar26;
  longlong lVar27;
  ulonglong unaff_r31;
  longlong lVar29;
  ulonglong uVar30;
  int iVar31;
  ulonglong in_LR;
  double dVar32;
  ulonglong uVar33;
  ulonglong in_f31;
  double dVar34;
  GPiece<16> auVar35;
  GPiece<16> auVar36;
  undefined4 in_vr31_32_0;
  undefined4 in_vr31_32_1;
  undefined4 in_vr31_32_2;
  undefined4 in_vr31_32_3;
  GPiece<16> auVar37;
  
  uVar12 = ZEXT48(&stack0x00000000);
  lVar27 = uVar12 - 0x210;
  puVar7 = (ulonglong *)lVar27;
  *puVar7 = uVar12;
  puVar7[0x44] = in_LR;
  puVar7[0x41] = in_f31;
  puVar7[0x30] = unaff_r15;
  puVar11 = (undefined4 *)(uVar12 - 0xb0);
  puVar11[3] = in_vr31_32_3;
  puVar11[2] = in_vr31_32_2;
  puVar11[1] = in_vr31_32_1;
  *puVar11 = in_vr31_32_0;
  puVar7[0x31] = unaff_r16;
  puVar7[0x2f] = unaff_r14;
  iVar8 = (int)param_2;
  uVar2 = *(ushort *)(iVar8 + 0x12);
  puVar7[0x38] = unaff_r23;
  DAT_0095ee18 = 1;
  puVar7[0x33] = unaff_r18;
  uVar3 = *(ushort *)(iVar8 + 10);
  puVar7[0x28] = (ulonglong)*(ushort *)(iVar8 + 0x10);
  puVar7[0x3d] = unaff_r28;
  puVar7[0x3c] = unaff_r27;
  puVar7[0x34] = unaff_r19;
  puVar7[0x29] = (ulonglong)uVar3;
  puVar7[0x40] = unaff_r31;
  puVar7[0x3f] = unaff_r30;
  puVar7[0x3e] = unaff_r29;
  puVar7[0x3b] = unaff_r26;
  puVar7[0x3a] = unaff_r25;
  puVar7[0x39] = unaff_r24;
  puVar7[0x37] = unaff_r22;
  puVar7[0x36] = unaff_r21;
  puVar7[0x35] = unaff_r20;
  puVar7[0x32] = unaff_r17;
  if ((uVar2 & 1) == 0) {
    lVar25 = (longlong)*(short *)(iVar8 + 6) - (longlong)*(short *)(iVar8 + 8);
  }
  else {
    lVar25 = (longlong)*(short *)(iVar8 + 8);
    lVar16 = (longlong)*(short *)(iVar8 + 4);
    lVar26 = *(short *)(iVar8 + 6) - lVar25;
    lVar25 = ((lVar25 + (lVar26 - (lVar25 - lVar16) >> 0x3f & *(short *)(iVar8 + 6) - lVar25)) -
              (lVar16 + (lVar26 - (lVar25 - lVar16) >> 0x3f & lVar25 - lVar16)) & 0x7fffffffU) << 1;
  }
  dVar34 = 1.0;
  if (0.001 < ABS((float)(param_1 - 1.0))) {
    *(float *)(puVar7 + 0x26) = (float)param_1;
    *(float *)((int)puVar7 + 0x134) = (float)param_1;
    *(float *)(puVar7 + 0x27) = (float)param_1;
    *(float *)((int)puVar7 + 0x13c) = (float)param_1;
    auVar37 = *(undefined1 (*) [16])(puVar7 + 0x26);
    dVar34 = param_1;
    goto LAB_00069fb0;
  }
  if (g_Language < 4) {
    if (1 < g_Language) {
      if (g_Language < 3) {
        dVar34 = 0.8999999761581421;
        auVar37 = loadVectorLeftIndexed(8,0x69d9c);
        auVar37 = auVar37 >> 0x60 & (GPiece<16>)0xffffffff;
        auVar37 = auVar37 | auVar37 << 0x20 | auVar37 << 0x40 | auVar37 << 0x60;
      }
      else {
        dVar34 = 0.8999999761581421;
        auVar37 = loadVectorLeftIndexed(8,0x69d9c);
        auVar37 = auVar37 >> 0x60 & (GPiece<16>)0xffffffff;
        auVar37 = auVar37 | auVar37 << 0x20 | auVar37 << 0x40 | auVar37 << 0x60;
        if ((uVar2 & 0x10) != 0) {
          dVar34 = 0.7999999523162842;
          auVar37 = loadVectorLeftIndexed(0xc,0x69d9c);
          auVar37 = auVar37 >> 0x60 & (GPiece<16>)0xffffffff;
          auVar37 = auVar37 | auVar37 << 0x20 | auVar37 << 0x40 | auVar37 << 0x60;
        }
      }
      goto LAB_00069fb0;
    }
  }
  else {
    if (g_Language < 5) {
      dVar34 = 0.8999999761581421;
      auVar37 = loadVectorLeftIndexed(8,0x69d9c);
      auVar37 = auVar37 >> 0x60 & (GPiece<16>)0xffffffff;
      auVar37 = auVar37 | auVar37 << 0x20 | auVar37 << 0x40 | auVar37 << 0x60;
      goto LAB_00069fb0;
    }
    if (g_Language < 6) {
      dVar34 = 0.8999999761581421;
      auVar37 = loadVectorLeftIndexed(8,0x69d9c);
      auVar37 = auVar37 >> 0x60 & (GPiece<16>)0xffffffff;
      auVar37 = auVar37 | auVar37 << 0x20 | auVar37 << 0x40 | auVar37 << 0x60;
      goto LAB_00069fb0;
    }
  }
  auVar37 = loadVectorLeftIndexed(uVar12 - 0xb0,0x69d9c);
  auVar37 = auVar37 >> 0x60 & (GPiece<16>)0xffffffff;
  auVar37 = auVar37 | auVar37 << 0x20 | auVar37 << 0x40 | auVar37 << 0x60;
LAB_00069fb0:
  sVar19 = 0;
  bVar10 = false;
  lVar23 = 0;
  lVar16 = 0;
  lVar26 = lVar25;
  do {
    iVar13 = 0;
    lVar24 = 0;
    iVar28 = (int)lVar26;
    lVar17 = lVar16;
    lVar29 = lVar27;
    if (param_5 != 0) {
      while (lVar17 = lVar16, *(char *)(param_4 + iVar13) != '\0') {
        iVar9 = (int)lVar29;
        sVar15 = (short)iVar13;
        *(short *)(iVar9 + 0x70) = sVar15;
        lVar17 = 0;
        *(short *)(iVar9 + 0xf0) = sVar19;
        iVar20 = iVar13;
        if (0 < iVar28) {
          do {
            bVar1 = *(byte *)(param_4 + iVar13);
            if ((bVar1 == 0x20) || (bVar1 < 0x10)) {
              iVar20 = iVar13;
            }
            if (((g_FontColorsEnabled != 0) && (7 < bVar1)) && (bVar1 < 0x10)) {
              sVar19 = bVar1 - 8;
            }
            if ((bVar1 == 0) || (bVar1 == 1)) break;
            iVar13 = iVar13 + 1;
            bVar1 = *(byte *)((int)param_7 + (uint)bVar1 * 4 + 3);
            puVar7[0x2a] = (longlong)(int)(char)bVar1;
            puVar7[0x2a] = (longlong)(int)((double)(longlong)puVar7[0x2a] * dVar34);
            lVar22 = lVar17 + (ulonglong)*(uint *)((int)puVar7 + 0x154);
            lVar17 = lVar22 + (ZERO_MASK((uint)bVar1) & lVar17 - lVar22);
          } while ((int)lVar17 < iVar28);
        }
        sVar21 = (short)iVar20;
        *(short *)(iVar9 + 0xb0) = sVar21;
        if (sVar21 == sVar15) {
          sVar21 = (short)iVar13;
          *(short *)(iVar9 + 0xb0) = sVar21;
        }
        bVar1 = *(byte *)(param_4 + sVar21);
        if ((bVar1 == 0x20) || (bVar1 < 0x10)) {
          *(short *)(iVar9 + 0xb0) = sVar21 + -1;
        }
        lVar24 = lVar24 + 1;
        if ((bVar1 == 0) ||
           (iVar13 = sVar21 + 1, lVar17 = lVar16, lVar29 = lVar29 + 2, iVar13 == param_5)) break;
      }
    }
    iVar13 = (int)lVar24;
    if ((bVar10) || (iVar13 < 2)) {
LAB_0006a184:
      uVar12 = puVar7[0x28];
      uVar30 = puVar7[0x29];
      *(undefined2 *)(iVar8 + 0xc) = 0;
      *(short *)(iVar8 + 0xe) = (short)lVar24 * (short)uVar12;
      iVar28 = 0;
      lVar25 = (longlong)(short)uVar30 - (longlong)((short)uVar12 * iVar13 >> 1);
      if (0 < iVar13) {
        lVar25 = lVar25 + (ZERO_MASK((uVar2 & 2)) & (short)uVar30 - lVar25);
        do {
          iVar9 = (int)lVar27;
          iVar18 = 0;
          auVar35 = ZEXT416(0);
          auVar35 = auVar35 | auVar35 << 0x20 | auVar35 << 0x40 | auVar35 << 0x60;
          dVar32 = 0.0;
          iVar14 = *(short *)(iVar9 + 0x70) + param_4;
          iVar20 = ((int)*(short *)(iVar9 + 0xb0) - (int)*(short *)(iVar9 + 0x70)) + 1;
          if (iVar20 != 0) {
            auVar6 = ZEXT416(0xfffffff8);
            do {
              auVar35 = auVar35 >> 0x60 & (GPiece<16>)0xffffffff;
              auVar35 = auVar35 | auVar35 << 0x20 | auVar35 << 0x40 | auVar35 << 0x60;
              if (*(byte *)(iVar14 + iVar18) == 0) break;
              uVar12 = param_7 + (ulonglong)*(byte *)(iVar14 + iVar18) * 4;
              iVar18 = iVar18 + 1;
              puVar7[0x2a] = (longlong)(int)*(char *)((int)uVar12 + 3);
              auVar36 = loadVectorLeftIndexed(3,uVar12 & 0xffffffff);
              auVar36 = vectorShiftRightAlgebraicWord
                                  (auVar36,auVar6 | auVar6 << 0x20 | auVar6 << 0x40 | auVar6 << 0x60
                                  );
              auVar36 = vectorConvertFromSignedFixedPointWord(auVar36,0);
              auVar35 = vectorMultiplyAddFloatingPoint(auVar36,auVar37,auVar35);
              dVar32 = (double)(float)((double)(longlong)puVar7[0x2a] * dVar34 + dVar32);
            } while (iVar18 != iVar20);
          }
          auVar35 = auVar35 >> 0x60 & (GPiece<16>)0xffffffff;
          sVar19 = *(short *)(iVar8 + 0xc);
          auVar35 = vectorConvertToSignedFixedPointWordSaturate
                              (auVar35 | auVar35 << 0x20 | auVar35 << 0x40 | auVar35 << 0x60,0);
          puVar7[0x2a] = (longlong)(int)dVar32;
          iVar18 = *(int *)((int)puVar7 + 0x154);
          if (sVar19 < iVar18) {
            auVar35 = vectorSplatHalfWord(auVar35,1);
            uVar5 = storeVectorElementHalfWordIndexed(auVar35,0xc,param_2);
            *(undefined2 *)(iVar8 + 0xc) = uVar5;
          }
          uVar2 = *(ushort *)(iVar8 + 0x12);
          if ((uVar2 & 4) == 0) {
            iVar31 = (int)lVar25;
            iVar18 = iVar18 >> 1;
            DAT_0071ef98 = param_3;
            if ((uVar2 & 8) == 0) {
              if ((uVar2 & 1) == 0) {
                puVar7[0x2a] = (longlong)(int)*(short *)(iVar8 + 8);
                uVar4 = *(undefined4 *)
                         ((int)&DAT_0071ef98 + (int)((longlong)*(short *)(iVar9 + 0xf0) << 2));
                uVar12 = puVar7[0x2a];
                puVar7[0x2a] = (longlong)iVar31;
                FontPrint_unk3((double)(longlong)uVar12,(double)(longlong)puVar7[0x2a],dVar34,iVar20
                               ,iVar14,uVar4,iVar14,iVar20,(longlong)iVar31,param_6,param_7);
              }
              else {
                puVar7[0x2a] = (longlong)(*(short *)(iVar8 + 8) - iVar18);
                lVar16 = (longlong)*(short *)(iVar9 + 0xf0) << 2;
                uVar4 = *(undefined4 *)((int)&DAT_0071ef98 + (int)lVar16);
                uVar12 = puVar7[0x2a];
                puVar7[0x2a] = (longlong)iVar31;
                FontPrint_unk3((double)(longlong)uVar12,(double)(longlong)puVar7[0x2a],dVar34,lVar16
                               ,iVar14,uVar4,iVar14,iVar20,(longlong)iVar31,param_6,param_7);
              }
            }
            else {
              if ((uVar2 & 1) == 0) {
                sVar19 = *(short *)(iVar8 + 0x14);
                iVar18 = (int)*(short *)(iVar8 + 8);
              }
              else {
                sVar19 = *(short *)(iVar8 + 0x14);
                iVar18 = *(short *)(iVar8 + 8) - iVar18;
              }
              puVar7[0x2a] = (longlong)(int)sVar19;
              sVar19 = *(short *)(iVar8 + 0x16);
              sVar15 = *(short *)(iVar9 + 0xf0);
              uVar12 = puVar7[0x2a];
              puVar7[0x2a] = (longlong)iVar18;
              uVar30 = puVar7[0x2a];
              puVar7[0x2a] = (longlong)iVar31;
              uVar4 = *(undefined4 *)((int)&DAT_0071ef98 + (int)((longlong)sVar15 << 2));
              uVar33 = puVar7[0x2a];
              puVar7[0x2a] = (longlong)(int)sVar19;
              FontPrint_unk3((double)((float)(longlong)uVar12 * 0.0625 + (float)(longlong)uVar30),
                             (double)((float)(longlong)puVar7[0x2a] * 0.0625 +
                                     (float)(longlong)uVar33),dVar34,iVar20,iVar14,uVar4,iVar14,
                             iVar20,(longlong)(int)sVar19,param_6,param_7);
            }
          }
          iVar28 = iVar28 + 1;
          lVar27 = lVar27 + 2;
          lVar25 = lVar25 + *(short *)(iVar8 + 0x10);
        } while (iVar28 < iVar13);
      }
      DAT_0095ee18 = 0;
      return;
    }
    lVar23 = lVar23 + (ZERO_MASK((int)lVar23) & lVar24 - lVar23);
    lVar16 = lVar17;
    if ((int)lVar23 < iVar13) {
      bVar10 = true;
      lVar26 = lVar25;
    }
    else {
      if (iVar28 / 3 <= (int)lVar17) goto LAB_0006a184;
      lVar26 = lVar26 + -0x10;
    }
  } while( true );
}


// 0x006a510 (0xb4 bytes)
void FontPrintMediumOpt(FontWindow *param_1,u32 param_2,const char *param_3,int param_4)

{
                    /* Is used in cheats menu
                       "No cheats activated" */
  if (g_JapaneseMode) {
    FontPrintOptJapanese
              (0x3ff0000000000000,param_1,param_2,param_3,param_4,*(undefined4 *)(TexInfo + 4),
               &JapaneseGlyphs);
  }
  else {
    FontPrintOptWestern(param_1,param_2,param_3,param_4,*(undefined4 *)(TexInfo + 4),
                        &MediumWesternGlyphs);
  }
  return;
}


// 0x006a5c4 (0x70 bytes)
void Sprite_DrawShapeWrapper(int param_1,int param_2,int param_3,int param_4,int param_5,int param_6,int param_7,int param_8,u32 param_9,int param_10)

{
  Sprite_DrawShape();
  return;
}


// 0x006a634 (0xe4 bytes)
void DrawRectOverlay(int top,int bot,int left,int right,int color)

{
  if (((top == 0 && bot == 0x1a0) && (left == 0)) && (right == 0x200)) {
    DrawFullScreenQuad(color,(void *)(EffectTexHeaders + *(int *)(TexInfo + 0x58) * 0x24));
  }
  else {
    Sprite_DrawShape(left,top,right - left,bot - top,0,0,0x10,0x10);
  }
  return;
}


// 0x006a718 (0x578 bytes)
void DrawRoundedRect(short param_1,short param_2,short param_3,short param_4,int param_5)

{
  uint rgba;
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  
  rgba = param_5 << 0x18 | 0x40404;
  iVar9 = (int)param_1;
  iVar1 = (int)param_3;
  iVar8 = (int)param_4;
  if (((iVar9 == 0 && param_2 == 0x1a0) && (iVar1 == 0)) && (iVar8 == 0x200)) {
    DrawFullScreenQuad(rgba,(void *)(EffectTexHeaders + *(int *)(TexInfo + 0x58) * 0x24));
  }
  else {
    Sprite_DrawShape(param_3,param_1,iVar8 - iVar1,param_2 - iVar9,0,0,0x10,0x10);
  }
  iVar7 = iVar9 + 1;
  iVar6 = param_2 + -1;
  iVar2 = iVar1 + -2;
  if (((iVar7 == 0 && iVar6 == 0x1a0) && (iVar2 == 0)) && (iVar1 == 0x200)) {
    DrawFullScreenQuad(rgba,(void *)(EffectTexHeaders + *(int *)(TexInfo + 0x58) * 0x24));
  }
  else {
    Sprite_DrawShape(iVar2,iVar7,iVar1 - iVar2,iVar6 - iVar7,0,0,0x10,0x10);
  }
  iVar5 = iVar9 + 2;
  iVar4 = param_2 + -2;
  iVar3 = iVar1 + -3;
  if (((iVar5 == 0 && iVar4 == 0x1a0) && (iVar3 == 0)) && (iVar2 == 0x200)) {
    DrawFullScreenQuad(rgba,(void *)(EffectTexHeaders + *(int *)(TexInfo + 0x58) * 0x24));
  }
  else {
    Sprite_DrawShape(iVar3,iVar5,iVar2 - iVar3,iVar4 - iVar5,0,0,0x10,0x10);
  }
  iVar9 = iVar9 + 4;
  param_2 = param_2 + -4;
  iVar1 = iVar1 + -4;
  if (((iVar9 == 0 && param_2 == 0x1a0) && (iVar1 == 0)) && (iVar3 == 0x200)) {
    DrawFullScreenQuad(rgba,(void *)(EffectTexHeaders + *(int *)(TexInfo + 0x58) * 0x24));
  }
  else {
    Sprite_DrawShape(iVar1,iVar9,iVar3 - iVar1,param_2 - iVar9,0,0,0x10,0x10);
  }
  iVar1 = iVar8 + 2;
  if (((iVar7 == 0) && (iVar6 == 0x1a0)) && ((iVar8 == 0 && (iVar1 == 0x200)))) {
    DrawFullScreenQuad(rgba,(void *)(EffectTexHeaders + *(int *)(TexInfo + 0x58) * 0x24));
  }
  else {
    Sprite_DrawShape(param_4,iVar7,iVar1 - iVar8,iVar6 - iVar7,0,0,0x10,0x10);
  }
  iVar2 = iVar8 + 3;
  if (((iVar5 == 0) && (iVar4 == 0x1a0)) && ((iVar1 == 0 && (iVar2 == 0x200)))) {
    DrawFullScreenQuad(rgba,(void *)(EffectTexHeaders + *(int *)(TexInfo + 0x58) * 0x24));
  }
  else {
    Sprite_DrawShape(iVar1,iVar5,iVar2 - iVar1,iVar4 - iVar5,0,0,0x10,0x10);
  }
  if ((((iVar9 == 0) && (param_2 == 0x1a0)) && (iVar2 == 0)) && (iVar8 + 4 == 0x200)) {
    DrawFullScreenQuad(rgba,(void *)(EffectTexHeaders + *(int *)(TexInfo + 0x58) * 0x24));
  }
  else {
    Sprite_DrawShape(iVar2,iVar9,(iVar8 + 4) - iVar2,param_2 - iVar9,0,0,0x10,0x10);
  }
  return;
}


// 0x006ac90 (0x3c bytes)
void SetFontWindow(FontWindow *window,int win_top,int win_bot,int win_left,int win_right,
                        int text_x,int text_y,int line_spacing,int flags)

{
  short in_stack_00000076;
  
  window->win_top = (short)win_top;
  window->win_bot = (short)win_bot;
  window->win_left = (short)win_left;
  window->win_right = (short)win_right;
  window->text_x = (short)text_x;
  window->text_y = (short)text_y;
  window->line_spacing = (short)line_spacing;
  window->flags = in_stack_00000076;
  window->max_width = 0;
  window->max_height = 0;
  window->sub_pixel_x = 0;
  window->sub_pixel_y = 0;
  return;
}


// 0x006accc (0x74 bytes)
undefined8 ShouldForceSubtitles(void)

{
  undefined8 uVar1;
  
  if (g_Language < 2 || 5 < g_Language) {
    if ((g_SceneId == 4) && (Level == Novalis)) {
      uVar1 = 1;
    }
    else if ((g_SceneId == 0) && (Level == Aridia)) {
      uVar1 = 1;
    }
    else {
      uVar1 = 0;
    }
  }
  else {
    uVar1 = 1;
  }
  return uVar1;
}


// 0x006ad48 (0x460 bytes)
// strings: 00651fa4: 'Fammi vedere la trivella....tieni!'

/* WARNING: Removing unreachable block (ram,0x0006b030) */

void DrawSubtitles(void)

{
  short sVar1;
  short sVar2;
  longlong lVar3;
  int iVar4;
  ulonglong uVar5;
  char *__s;
  ulonglong uVar6;
  short *psVar7;
  undefined8 uVar8;
  char local_110 [128];
  GPiece<24> local_90;
  
  uVar6 = ZEXT48(g_SubtitleTable);
  if (g_SubtitleTable != (short *)0x0) {
    lVar3 = 0;
    if ((1 < (int)g_Language) && ((int)g_Language < 6)) {
      lVar3 = (ulonglong)g_Language - 1;
    }
    if (-1 < *g_SubtitleTable) {
      uVar5 = uVar6 + ((ZERO_MASK((uint)g_JapaneseMode) & lVar3 - 5U) + 5) * 2 &
              0xffffffff;
      do {
        psVar7 = (short *)uVar6;
        sVar1 = *psVar7;
        if ((sVar1 <= g_SpaceSceneFrame) &&
           (sVar2 = psVar7[1], g_SpaceSceneFrame <= sVar2)) {
          __s = (char *)((int)g_SubtitleTable + (int)*(short *)((int)uVar5 + 4));
          memset(local_110,0x20,0x80);
          if ((Level == Hoven) &&
             ((((g_Language == 5 && (g_SceneId == 2)) && (sVar1 == 0x38b)) &&
              (sVar2 == 0x3d3)))) {
            __s = local_110;
            snprintf(__s,"Fammi vedere la trivella....tieni!");
          }
          if (*__s != '\0') {
            uVar8 = 0x3ff0000000000000;
            if (g_JapaneseMode == false) {
              FontPrintOptWestern(0x3ff0000000000000,local_90,0x80b0b0b0,__s,0xffffffffffffffff,
                                  *(undefined4 *)(TexInfo + 4),&MediumWesternGlyphs);
            }
            else {
              FontPrintOptJapanese
                        (0x3ff0000000000000,local_90,0x80b0b0b0,__s,0xffffffffffffffff,
                         *(undefined4 *)(TexInfo + 4),&JapaneseGlyphs);
            }
            iVar4 = 0;
            if (((0 < (int)g_Language && (int)g_Language < 6) && (Level == Veldin2)) &&
               ((g_SceneId == 2 && ((*psVar7 == 0x340 && (psVar7[1] == 0xa03)))))) {
              iVar4 = 1;
            }
            DrawRoundedRect(0x14f - (((uint)(ZERO_MASK(iVar4)) & 0xffffffec) + 0x14
                                    ),0x159,0x28,0x1d8,0x60);
            if (g_JapaneseMode == false) {
              FontPrintOptWestern(uVar8,local_90,0x80b0b0b0,__s,0xffffffffffffffff,
                                  *(undefined4 *)(TexInfo + 4),&MediumWesternGlyphs);
              return;
            }
            FontPrintOptJapanese
                      (uVar8,local_90,0x80b0b0b0,__s,0xffffffffffffffff,*(undefined4 *)(TexInfo + 4)
                       ,&JapaneseGlyphs);
            return;
          }
        }
        uVar5 = uVar5 + 0x10;
        uVar6 = uVar6 + 0x10;
      } while (-1 < psVar7[8]);
    }
  }
  return;
}


// 0x006b1a8 (0x44 bytes)
void UpdateLetterBox(void)

{
  if (LetterBoxOn == 0) {
    if (LetterBoxPixels != 0) {
      LetterBoxPixels = LetterBoxPixels + -1;
    }
  }
  else if (LetterBoxPixels < 0x18) {
    LetterBoxPixels = LetterBoxPixels + 1;
  }
  return;
}


// 0x006b1f8 (0x3ac bytes)
void DrawScreenEffect(void)

{
  RsxCmd *pRVar1;
  int iVar2;
  RenderingStep *pRVar3;
  undefined4 uVar4;
  short sVar5;
  longlong lVar6;
  int iVar7;
  int iVar8;
  
  uVar4 = g_pIdolDraw;
  FUN_004deab8(g_pIdolDraw,g_FrameBufWidth,g_FrameBufHeight);
  sVar5 = g_FrameBufHeight;
  lVar6 = (longlong)g_FrameBufHeight;
  if (*(ulonglong *)(ScreenColorEffectNow + 8) != 0) {
    SetGSReg(3,*(ulonglong *)(ScreenColorEffectNow + 8) & 0xff000000ff);
  }
  iVar7 = (int)sVar5;
  if ((*(uint *)(ScreenColorEffectNow + 4) & 0xff000000) != 0) {
    if (iVar7 == 0x1a0 && g_FrameBufWidth == 0x200) {
      DrawFullScreenQuad(*(uint *)(ScreenColorEffectNow + 4),
                         (void *)(EffectTexHeaders + *(int *)(TexInfo + 0x58) * 0x24));
    }
    else {
      Sprite_DrawShape(0,0,g_FrameBufWidth,lVar6,0,0,0x10,0x10);
    }
  }
  iVar8 = 0;
  if (0 < iVar7) {
    lVar6 = lVar6 + -1;
    do {
      if (*(ulonglong *)(ScreenColorEffectNow + 0x18) != 0) {
        SetGSReg(3,*(ulonglong *)(ScreenColorEffectNow + 0x18) & 0xff000000ff);
      }
      iVar2 = (int)lVar6;
      if ((*(uint *)(ScreenColorEffectNow + 0x14) & 0xff000000) != 0) {
        Sprite_DrawShape(0xfffffffffffffed4,iVar8,(longlong)g_FrameBufWidth + 600,
                         (iVar2 + ((uint)((iVar8 + *(int *)(ScreenColorEffectNow + 0x10)) - lVar6 >>
                                         0x3f) &
                                  (iVar8 + *(int *)(ScreenColorEffectNow + 0x10)) - iVar2)) - iVar8,
                         0,0,0x10,0x10);
      }
      iVar8 = iVar8 + *(int *)(ScreenColorEffectNow + 0x10);
      if (*(ulonglong *)(ScreenColorEffectNow + 0x28) != 0) {
        SetGSReg(3,*(ulonglong *)(ScreenColorEffectNow + 0x28) & 0xff000000ff);
      }
      if ((*(uint *)(ScreenColorEffectNow + 0x24) & 0xff000000) != 0) {
        Sprite_DrawShape(0xfffffffffffffed4,iVar8,(longlong)g_FrameBufWidth + 600,
                         (iVar2 + ((uint)((iVar8 + *(int *)(ScreenColorEffectNow + 0x20)) - lVar6 >>
                                         0x3f) &
                                  (iVar8 + *(int *)(ScreenColorEffectNow + 0x20)) - iVar2)) - iVar8,
                         0,0,0x10,0x10);
      }
      iVar8 = iVar8 + *(int *)(ScreenColorEffectNow + 0x20);
    } while (iVar8 < iVar7);
  }
  pRVar1 = HUD_Pass->command;
  HUD_Pass->command = pRVar1 + 2;
  pRVar3 = HUD_Pass;
  *pRVar1 = NV4097_SET_BLEND_EQUATION_x1;
  pRVar1[1] = 0x80068006;
  pRVar1 = pRVar3->command;
  *pRVar1 = NV4097_SET_BLEND_FUNC_SFACTOR_x2;
  pRVar1[1] = 0x3020302;
  pRVar1[2] = 0x3030303;
  pRVar3->command = pRVar1 + 3;
  FUN_004d86b0(uVar4);
  return;
}


// 0x006b5a4 (0x38 bytes)
void DrawScreenOverlayTex(int r,int g,int b,int a,void *tex)

{
  DrawFullScreenQuad(a << 0x18 | (b & 0xffU) << 0x10 | (g & 0xffU) << 8 | r & 0xffU,tex);
  return;
}


// 0x006b5dc (0x5c bytes)
void DrawScreenOverlay(int r,int g,int b,int a)

{
  DrawFullScreenQuad(a << 0x18 | (b & 0xffU) << 0x10 | (g & 0xffU) << 8 | r & 0xffU,
                     (void *)(EffectTexHeaders + *(int *)(TexInfo + 0x58) * 0x24));
  return;
}


// 0x006b638 (0xdc bytes)
// strings: 00651fc8: 'PostDraw'


void ExecutePostDraws(void)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  int iVar3;
  
  if (g_PostDrawCount != 0) {
    idol_draw::RsxCmd_DebugStr_Marker(ForwardPass,"PostDraw");
  }
  iVar3 = 0;
  if (0 < g_PostDrawCount) {
    puVar1 = &g_PostDrawFuncs;
    puVar2 = &g_PostDrawArgs;
    do {
      (**(code **)*puVar1)(*puVar2);
      iVar3 = iVar3 + 1;
      puVar1 = puVar1 + 1;
      puVar2 = puVar2 + 1;
    } while (iVar3 < g_PostDrawCount);
  }
  if (g_PostDrawCount != 0) {
    idol_draw::RsxCmd_WritePass(ForwardPass);
  }
  return;
}


// 0x006b714 (0x94 bytes)
void ExecuteRegisteredMobyFuncs(void)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  
  iVar1 = 0;
  if (0 < g_MobyFuncListCount) {
    puVar2 = &g_MobyFuncList;
    puVar3 = &g_MobyFuncListArgs;
    do {
      (**(code **)*puVar2)(*puVar3);
      iVar1 = iVar1 + 1;
      puVar2 = puVar2 + 1;
      puVar3 = puVar3 + 1;
    } while (iVar1 < g_MobyFuncListCount);
  }
  return;
}


// 0x006b7a8 (0xdc bytes)
// strings: 00651fd4: 'PostPreDraw'


void ExecutePostPreDraws(void)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  int iVar3;
  
  if (g_PostPreDrawCount != 0) {
    idol_draw::RsxCmd_DebugStr_Marker(ForwardPass,"PostPreDraw");
  }
  iVar3 = 0;
  if (0 < g_PostPreDrawCount) {
    puVar1 = &g_PostPreDrawFuncs;
    puVar2 = &g_PostPreDrawArgs;
    do {
      (**(code **)*puVar1)(*puVar2);
      iVar3 = iVar3 + 1;
      puVar1 = puVar1 + 1;
      puVar2 = puVar2 + 1;
    } while (iVar3 < g_PostPreDrawCount);
  }
  if (g_PostPreDrawCount != 0) {
    idol_draw::RsxCmd_WritePass(ForwardPass);
  }
  return;
}


// 0x006b890 (0x200 bytes)
void DrawScreenInsertEffect(void *effect)

{
  undefined4 uVar1;
  undefined8 uVar2;
  
  uVar1 = g_pIdolDraw;
  FUN_004deab8(g_pIdolDraw,g_FrameBufWidth,g_FrameBufHeight);
  if (*(ulonglong *)((int)effect + 8) != 0) {
    SetGSReg(3,*(ulonglong *)((int)effect + 8) & 0xff000000ff);
  }
  if ((*(uint *)((int)effect + 4) & 0xff000000) != 0) {
    uVar2 = VU1_addGSregister(GSmem.zbuf >> 0xd,1,1);
    SetGSReg(0x21,uVar2);
    if ((g_FrameBufHeight == 0x1a0) && (g_FrameBufWidth == 0x200)) {
      DrawFullScreenQuad(*(int *)((int)effect + 4),
                         (void *)(EffectTexHeaders + *(int *)(TexInfo + 0x58) * 0x24));
    }
    else {
      Sprite_DrawShape(0,0,g_FrameBufWidth,g_FrameBufHeight,0,0,0x10,0x10);
    }
    uVar2 = VU1_addGSregister(GSmem.zbuf >> 0xd,1,0);
    SetGSReg(0x21,uVar2);
  }
  if (*(longlong *)((int)effect + 8) != 0) {
    uVar2 = idol_draw::PackCmd(0,1,0,1,0x80);
    SetGSReg(3,uVar2);
  }
  FUN_004d86b0(uVar1);
  return;
}


// 0x006ba90 (0xdc bytes)
// strings: 00651fe0: 'PreDraw'


void ExecutePreDraws(void)

{
  undefined4 *puVar1;
  MobyInstance **ppMVar2;
  int iVar3;
  
  if (g_PreDrawCount != 0) {
    idol_draw::RsxCmd_DebugStr_Marker(ForwardPass,"PreDraw");
  }
  iVar3 = 0;
  if (0 < g_PreDrawCount) {
    puVar1 = &CurrentOceanSubmitter;
    ppMVar2 = &WaterMoby;
    do {
      (**(code **)*puVar1)(*ppMVar2);
      iVar3 = iVar3 + 1;
      puVar1 = puVar1 + 1;
      ppMVar2 = ppMVar2 + 1;
    } while (iVar3 < g_PreDrawCount);
  }
  if (g_PreDrawCount != 0) {
    idol_draw::RsxCmd_WritePass(ForwardPass);
  }
  return;
}


// 0x006bb78 (0x8a8 bytes)
// strings: 00651fe0: 'PreDraw' | 00651fd4: 'PostPreDraw' | 00651fc8: 'PostDraw' | 00651fe8: 'screen overlays'

void DefaultDraw(void)

{
  RenderingStep *pRVar1;
  undefined8 uVar2;
  ulonglong uVar3;
  MobyInstance **ppMVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  int iVar7;
  GPiece<4> auStack_50;
  undefined4 local_4c;
  undefined4 local_48;
  GPiece<4> auStack_44;
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 local_34;
  byte g;
  byte r;
  byte b;
  
  CleanAnimationCache();
  RebuildSharedWaveTables();
  idol_draw::InitFrameRenderState
            (&DAT_01111700,DirectionalLights,0x10,PointLights,8,&g_HeroLightDir,4);
  if ((g_RenderFlags & Tfrags) != 0) {
    FUN_0050b08c(&TEX_BASE,&local_38);
    FUN_004ec8a4(&DAT_01111700,local_34,local_38);
    FUN_0050bfd4(&local_38);
  }
  if ((g_RenderFlags & Ties) != 0) {
    FUN_0050c020(&TEX_BASE,auStack_50);
    FUN_004ecc84(&DAT_01111700,local_4c,local_48);
  }
  if ((g_RenderFlags & Shrubs) != 0) {
    FUN_00508738(&TEX_BASE,auStack_44);
    FUN_004ed144(&DAT_01111700,local_40,local_3c);
  }
  if ((g_RenderFlags & Sky) != 0) {
    if (g_FrontEnd == '\0') {
      InitSky();
    }
    else {
      SkyLevelGeneric();
    }
  }
  if ((g_RenderFlags & Tfrags) != 0) {
    DrawTfrag(&TEX_BASE,&local_38);
  }
  if ((g_RenderFlags & Ties) != 0) {
    DrawTie(&TEX_BASE,auStack_50);
  }
  if ((g_DebugEnables[0xd] != 0) && (g_PreDrawCount != 0)) {
    idol_draw::RsxCmd_DebugStr_Marker(ForwardPass,"PreDraw");
    iVar7 = 0;
    if (0 < g_PreDrawCount) {
      puVar5 = &CurrentOceanSubmitter;
      ppMVar4 = &WaterMoby;
      do {
        (**(code **)*puVar5)(*ppMVar4);
        iVar7 = iVar7 + 1;
        puVar5 = puVar5 + 1;
        ppMVar4 = ppMVar4 + 1;
      } while (iVar7 < g_PreDrawCount);
    }
    if (g_PreDrawCount != 0) {
      idol_draw::RsxCmd_WritePass(ForwardPass);
    }
  }
  if ((g_RenderFlags & Shrubs) != 0) {
    DrawShrub(&TEX_BASE,auStack_44);
  }
  if (g_ScreenInsertEffect != '\0') {
    DrawScreenInsertEffect(&g_ScreenInsertEffect);
  }
  if ((g_DebugEnables[0xd] != 0) && (g_PostPreDrawCount != 0)) {
    idol_draw::RsxCmd_DebugStr_Marker(ForwardPass,"PostPreDraw");
    iVar7 = 0;
    if (0 < g_PostPreDrawCount) {
      puVar6 = &g_PostPreDrawFuncs;
      puVar5 = &g_PostPreDrawArgs;
      do {
        (**(code **)*puVar6)(*puVar5);
        iVar7 = iVar7 + 1;
        puVar6 = puVar6 + 1;
        puVar5 = puVar5 + 1;
      } while (iVar7 < g_PostPreDrawCount);
    }
    if (g_PostPreDrawCount != 0) {
      idol_draw::RsxCmd_WritePass(ForwardPass);
    }
  }
  DrawMobys();
  if (((g_RenderFlags & Ocean) != 0) && (g_DebugEnables[0xd] != 0)) {
    if (g_MobyFuncListCount != 0) {
      iVar7 = 0;
      if (0 < g_MobyFuncListCount) {
        puVar6 = &g_MobyFuncList;
        puVar5 = &g_MobyFuncListArgs;
        do {
          (**(code **)*puVar6)(*puVar5);
          iVar7 = iVar7 + 1;
          puVar6 = puVar6 + 1;
          puVar5 = puVar5 + 1;
        } while (iVar7 < g_MobyFuncListCount);
      }
    }
    Camera_DrawReticule();
  }
  if (g_DebugEnables[0xe] != 0) {
    DrawParts();
  }
  if (g_DebugEnables[0xf] != 0) {
    if (g_PostDrawCount != 0) {
      idol_draw::RsxCmd_DebugStr_Marker(ForwardPass,"PostDraw");
      iVar7 = 0;
      if (0 < g_PostDrawCount) {
        puVar6 = &g_PostDrawFuncs;
        puVar5 = &g_PostDrawArgs;
        do {
          (**(code **)*puVar6)(*puVar5);
          iVar7 = iVar7 + 1;
          puVar6 = puVar6 + 1;
          puVar5 = puVar5 + 1;
        } while (iVar7 < g_PostDrawCount);
      }
      if (g_PostDrawCount != 0) {
        idol_draw::RsxCmd_WritePass(ForwardPass);
      }
    }
    if (g_gameMode == GAME_MODE_NORMAL) {
      ImpactSprite_Draw();
    }
    TargetCrosshairDraw();
  }
  pRVar1 = HUD_Pass;
                    /* Handles screen overlays such as when you're underwater */
  if ((g_RenderFlags & Screen_Overlays) != 0) {
    if (g_DebugEnables[0x11] != 0) {
      uVar2 = idol_draw::PackCmd(0,1,0,1,0x80);
      idol_draw::DrawDepth(pRVar1,uVar2);
      if (GameCamera.camUnderWater != 0) {
        DrawFullScreenQuad(CONCAT13(DAT_0073a963,
                                    CONCAT12(DAT_0073a962,CONCAT11(DAT_0073a961,DAT_0073a960))),
                           (void *)(EffectTexHeaders + *(int *)(TexInfo + 0x58) * 0x24));
      }
      if (0 < (int)SceneScreenFade) {
        if (0x3f800000 <
            (int)(FLOAT_ORDER(SceneScreenFade))) {
          SceneScreenFade = 1.0;
        }
        uVar3 = FastDoubleToInt((double)(SceneScreenFade * 128.0));
        DrawFullScreenQuad((int)((uVar3 & 0xffffffff) << 0x18),
                           (void *)(EffectTexHeaders + *(int *)(TexInfo + 0x58) * 0x24));
      }
      if (0 < (int)g_SceneFlash) {
        if (0x3f800000 <
            (int)(FLOAT_ORDER(g_SceneFlash))) {
          g_SceneFlash = 1.0;
        }
        uVar3 = FastDoubleToInt((double)(g_SceneFlash * 128.0));
        DrawFullScreenQuad((uint)((uVar3 & 0xffffffff) << 0x18) | 0xffffff,
                           (void *)(EffectTexHeaders + *(int *)(TexInfo + 0x58) * 0x24));
      }
      if ((ScreenColorEffectEnabled != '\0') && (ScreenColorEffectNow != (undefined *)0x0)) {
        DrawScreenEffect();
      }
    }
    STUB_00065630("screen overlays",10);
  }
  if (((g_RenderFlags & HUD) != 0) && (g_DebugEnables[0x10] != 0)) {
    DrawGameplayHud();
    Help_Draw();
    if (LetterBoxOn == 0) {
      if (LetterBoxPixels != 0) {
        LetterBoxPixels = LetterBoxPixels + -1;
      }
    }
    else if (LetterBoxPixels < 0x18) {
      LetterBoxPixels = LetterBoxPixels + 1;
    }
  }
  if ((g_gameMode == GAME_MODE_SCENE) && (DAT_00969c78 != '\0')) {
    DrawSubtitles();
  }
  if (GameCamera.camUnderWater == 0) {
    PartClipDist = 0x1f4000;
    b = levelFog.b;
    g = levelFog.g;
    r = levelFog.r;
    g_ViewContext.fogFarIntensity = LevelFogFarIntensity;
    g_ViewContext.fogNearIntensity = LevelFogNearIntensity;
    g_ViewContext.fogFarDist = LevelFogFarDist;
    g_ViewContext.fogNearDist = LevelFogNearDist;
  }
  else {
    PartClipDist = 0x40000;
    b = WaterFog.b;
    g = WaterFog.g;
    r = WaterFog.r;
    g_ViewContext.fogFarIntensity = WaterFogFarIntensity;
    g_ViewContext.fogNearIntensity = WaterFogNearIntensity;
    g_ViewContext.fogFarDist = WaterFogFarDist;
    g_ViewContext.fogNearDist = WaterFogNearDist;
  }
  g_ViewContext.fogR = (int)r;
  g_ViewContext.fogG = (int)g;
  g_ViewContext.fogB = (int)b;
  UpdateViewContext();
  LevelFogMode = 0;
  return;
}


// 0x006c424 (0x70 bytes)
void SetupDefaultDraw(void)

{
  if ((g_CutscenePlaying == 0) && (g_HeroIsOutOfBounds == '\0')) {
    g_RenderFlags = 0x100ff;
    if (g_gameMode == GAME_MODE_PAUSE) {
      g_RenderFlags = 0x7f;
    }
    DefaultDraw();
  }
  return;
}


// 0x006c494 (0x44 bytes)
void SetupDefaultDrawMovie(void)

{
  if (g_CutscenePlaying == 0) {
    STUB_00078100();
    g_RenderFlags = 0x7f;
    DefaultDraw();
  }
  return;
}


// 0x006c4d8 (0x80 bytes)
void SetupDefaultDrawFreeze(void)

{
  gameMode_t gVar1;
  
  if (g_CutscenePlaying == 0) {
    gVar1 = GetFreezePrevGameMode();
    if (gVar1 == GAME_MODE_NORMAL) {
      STUB_00078100();
      g_RenderFlags = 0x100ff;
      DefaultDraw();
    }
    else {
      gVar1 = GetFreezePrevGameMode();
      if (gVar1 == GAME_MODE_PAUSE) {
        DrawPauseMenu(1);
      }
    }
    DrawDialogText();
  }
  return;
}


// 0x006c558 (0x84 bytes)
void InitLevelRenderState(void)

{
  if (g_CutscenePlaying == 0) {
    DAT_010ee2f0 = 0xffffffff;
    idol_draw::InitFrameRenderState
              (&DAT_01111700,DirectionalLights,0x10,PointLights,8,&g_HeroLightDir,4);
    DrawPauseMenu(0);
  }
  return;
}


// 0x006c5dc (0x10 bytes)
void EnableFontColors(void)

{
  g_FontColorsEnabled = 1;
  return;
}


// 0x006c5ec (0x2e4 bytes)
void FontPrintJapanese
               (int param_1,int param_2,undefined4 param_3,int param_4,int param_5,
               undefined8 param_6,int param_7)

{
  byte bVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  
  if (DAT_0095ee18 == 0) {
    DAT_0071ef98 = param_3;
  }
  iVar5 = 0;
  if (param_5 != 0) {
    do {
      bVar1 = *(byte *)(param_4 + iVar5);
      if (bVar1 == 0) {
        return;
      }
      iVar3 = (uint)bVar1 * 4;
      if (((bVar1 < 8) || (0xf < bVar1)) && (iVar4 = param_7 + iVar3, *(char *)(iVar4 + 3) != '\0'))
      {
        if (bVar1 < 0x20) {
          Sprite_DrawShape(param_1,param_2 + *(char *)(iVar4 + 2),0x18,0x10,
                           *(undefined1 *)(param_7 + iVar3),*(undefined1 *)(iVar4 + 1),0x18,0x10);
        }
        else {
          if ((0xbc < bVar1) && (bVar1 < 0xbf)) {
            bVar1 = *(byte *)(param_4 + iVar5 + -1);
            iVar2 = param_7 + (bVar1 + 0x80) * 4;
            Sprite_DrawShape((param_1 - *(char *)(param_7 + (uint)bVar1 * 4 + 3)) +
                             (int)*(char *)(iVar2 + 3),param_2 + *(char *)(iVar2 + 2),0x10,0x10,
                             *(undefined1 *)(param_7 + iVar3),*(undefined1 *)(iVar4 + 1),0x10,0x10);
            param_1 = ((int)*(char *)(iVar2 + 3) -
                      (int)*(char *)(param_7 + (uint)*(byte *)(param_4 + iVar5 + -1) * 4 + 3)) +
                      ((*(byte *)(param_4 + iVar5) == 0xbe)) + param_1 + 4;
            goto LAB_0006c884;
          }
          if (0x20 < bVar1) {
            Sprite_DrawShape(param_1,param_2 + *(char *)(iVar4 + 2),0x10,0x10,
                             *(undefined1 *)(param_7 + iVar3),*(undefined1 *)(iVar4 + 1),0x10,0x10);
          }
        }
        param_1 = param_1 + *(char *)(param_7 + (uint)*(byte *)(param_4 + iVar5) * 4 + 3);
      }
LAB_0006c884:
      iVar5 = iVar5 + 1;
    } while (iVar5 != param_5);
  }
  return;
}


// 0x006c8d0 (0x33c bytes)
void FontPrint(int param_1,int param_2,undefined4 param_3,int param_4,int param_5,
                    undefined8 param_6,int param_7)

{
  byte bVar1;
  undefined8 uVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  
  uVar2 = idol_draw::PackCmd(0,1,0,1,0);
  SetGSReg(3,uVar2);
  uVar2 = idol_draw::Blend(1,5,4,0,0,0,0,1);
  SetGSReg(0x16,uVar2);
  if (DAT_0095ee18 == 0) {
    DAT_0071ef98 = param_3;
  }
  iVar6 = 0;
  if (param_5 != 0) {
    do {
      bVar1 = *(byte *)(param_4 + iVar6);
      uVar3 = (uint)bVar1;
      if (bVar1 == 0) {
        return;
      }
      if ((0xf < bVar1 || bVar1 < 8) && (*(char *)(param_7 + (uint)bVar1 * 4 + 3) != '\0')) {
        if ((char)bVar1 < -0x58) {
          iVar4 = (uVar3 + 0x40) * 4;
          iVar5 = param_7 + iVar4;
          Sprite_DrawShape(param_1 + *(char *)(iVar5 + 3),param_2 + *(char *)(iVar5 + 2),0x10,0x10,
                           *(undefined1 *)(param_7 + iVar4),*(undefined1 *)(iVar5 + 1),0x10,0x10);
          uVar3 = (uint)*(byte *)(param_4 + iVar6);
        }
        iVar5 = uVar3 * 4;
        iVar4 = param_7 + iVar5;
        if (uVar3 < 0x20) {
          Sprite_DrawShape(param_1,param_2 + *(char *)(iVar4 + 2),0x18,0x10,
                           *(undefined1 *)(param_7 + iVar5),*(undefined1 *)(iVar4 + 1),0x18,0x10);
        }
        else if (0x20 < uVar3) {
          Sprite_DrawShape(param_1,param_2 + *(char *)(iVar4 + 2),0x10,0x10,
                           *(undefined1 *)(param_7 + iVar5),*(undefined1 *)(iVar4 + 1),0x10,0x10);
        }
        param_1 = param_1 + *(char *)(param_7 + (uint)*(byte *)(param_4 + iVar6) * 4 + 3);
      }
      iVar6 = iVar6 + 1;
    } while (iVar6 != param_5);
  }
  return;
}


// 0x006cc0c (0xa8 bytes)
void FontPrintMediumLeft
               (undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
               undefined8 param_5)

{
  if (g_JapaneseMode) {
    FontPrintJapanese(param_1,param_2,param_3,param_4,param_5,*(undefined4 *)(TexInfo + 4),
                      &JapaneseGlyphs);
  }
  else {
    FontPrint(param_1,param_2,param_3,param_4,param_5,*(undefined4 *)(TexInfo + 4),
              &MediumWesternGlyphs);
  }
  return;
}


// 0x006ccb4 (0x10 bytes)
void DisableFontColors(void)

{
  g_FontColorsEnabled = 0;
  return;
}


// 0x006ccc4 (0xbc bytes)
int FontLenWithTable(char *s,int len,void *glyphs)

{
  char cVar1;
  byte bVar2;
  int iVar3;
  int iVar4;
  
  iVar4 = 0;
  iVar3 = 0;
  if (len != 0) {
    do {
      bVar2 = s[iVar4];
      if (bVar2 == 0) {
        return iVar3;
      }
      cVar1 = *(char *)((int)glyphs + (uint)bVar2 * 4 + 3);
      if (cVar1 != '\0') {
        if ((bVar2 < 0xbd) || (0xbe < bVar2)) {
          iVar3 = iVar3 + cVar1;
        }
        else {
          iVar3 = ((int)*(char *)((int)glyphs + (uint)(byte)s[iVar4 + -1] * 4 + 0x203) -
                  (int)*(char *)((int)glyphs + (uint)(byte)s[iVar4 + -1] * 4 + 3)) +
                  ((bVar2 == 0xbe)) + iVar3 + 4;
        }
      }
      iVar4 = iVar4 + 1;
    } while (iVar4 != len);
  }
  return iVar3;
}


// 0x006cd80 (0x68 bytes)
int FontLenWithTableNoKern(char *s,int len,void *glyphs)

{
  byte bVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = 0;
  iVar3 = 0;
  if (len != 0) {
    do {
      bVar1 = s[iVar2];
      if (bVar1 == 0) {
        return iVar3;
      }
      if (*(char *)((int)glyphs + (uint)bVar1 * 4 + 3) != '\0') {
        iVar3 = iVar3 + *(char *)((int)glyphs + (uint)bVar1 * 4 + 3);
      }
      iVar2 = iVar2 + 1;
    } while (iVar2 != len);
  }
  return iVar3;
}


// 0x006cde8 (0xb0 bytes)
int FontLen(char *s,int len)

{
  byte bVar1;
  int iVar2;
  int iVar3;
  
  if (g_JapaneseMode) {
    iVar2 = FontLenWithTable(s,len,&JapaneseGlyphs);
  }
  else {
    iVar3 = 0;
    iVar2 = 0;
    if (len != 0) {
      do {
        bVar1 = s[iVar3];
        if (bVar1 == 0) {
          return iVar2;
        }
        if ((&DAT_007368b3)[(uint)bVar1 * 4] != '\0') {
          iVar2 = iVar2 + (char)(&DAT_007368b3)[(uint)bVar1 * 4];
        }
        iVar3 = iVar3 + 1;
      } while (iVar3 != len);
    }
  }
  return iVar2;
}


// 0x006cea0 (0x2dc bytes)
void DrawFancyTextWithBox
               (double param_1,double param_2,longlong param_3,int param_4,int param_5,
               undefined8 param_6,undefined8 param_7,char *param_8)

{
  uint uVar1;
  byte bVar2;
  int iVar5;
  longlong lVar3;
  undefined8 uVar4;
  int iVar6;
  int iVar7;
  
  if (g_JapaneseMode) {
    iVar5 = FontLenWithTable(param_8,-1,&JapaneseGlyphs);
  }
  else {
    iVar6 = 0;
    iVar5 = 0;
    do {
      bVar2 = param_8[iVar6];
      if (bVar2 == 0) break;
      if ((&DAT_007368b3)[(uint)bVar2 * 4] != '\0') {
        iVar5 = iVar5 + (char)(&DAT_007368b3)[(uint)bVar2 * 4];
      }
      iVar6 = iVar6 + 1;
    } while (iVar6 != -1);
  }
  uVar1 = (uint)((double)(longlong)iVar5 * param_1);
  lVar3 = param_3;
  if (param_5 < 0) {
    if (-2 < param_5) {
      lVar3 = (ulonglong)uVar1 + param_3;
    }
  }
  else if (param_5 < 1) {
    lVar3 = param_3 + ((int)uVar1 >> 1);
    param_3 = (longlong)((int)param_3 - ((int)uVar1 >> 1));
  }
  else if (param_5 < 2) {
    param_3 = (longlong)(int)((int)param_3 - uVar1);
  }
  iVar6 = (int)param_3;
  uVar4 = FastDoubleToInt((double)(float)(param_1 * 112.0));
  Hud_DrawTextBox(iVar6 + -0x20,param_4 + -0xe,((int)lVar3 - iVar6) + 0x40,0x1c,uVar4);
  g_FontColorsEnabled = 0;
  iVar5 = (int)(param_2 * 128.0) * 0x1000000;
  iVar7 = iVar5 + 0xe0e0e0;
  if (g_JapaneseMode == false) {
    FontPrint();
  }
  else {
    FontPrintJapanese(iVar6 + 1,param_4 + -7,iVar5,param_8,0xffffffffffffffff,
                      *(undefined4 *)(TexInfo + 4),&JapaneseGlyphs);
  }
  if (g_JapaneseMode == false) {
    FontPrint(param_3,param_4 + -8,iVar7,param_8,0xffffffffffffffff,*(undefined4 *)(TexInfo + 4),
              &MediumWesternGlyphs);
  }
  else {
    FontPrintJapanese(param_3,param_4 + -8,iVar7,param_8,0xffffffffffffffff,
                      *(undefined4 *)(TexInfo + 4),&JapaneseGlyphs);
  }
  g_FontColorsEnabled = 1;
  return;
}


// 0x006d190 (0x3f8 bytes)
void DrawTimedHelpMsg(undefined8 param_1,int param_2)

{
  char cVar1;
  short sVar2;
  int *piVar3;
  char *pcVar4;
  char *pcVar5;
  int iVar6;
  char *pcVar7;
  longlong lVar8;
  byte in_cr6;
  double dVar9;
  double dVar10;
  GPiece<16> auVar11;
  GPiece<16> auVar12;
  GPiece<16> auVar13;
  GPiece<16> auVar14;
  GPiece<16> auVar15;
  GPiece<16> auVar16;
  char local_150 [288];
  
  auVar11 = ZEXT416(0xfffffff0);
  auVar11 = auVar11 | auVar11 << 0x20 | auVar11 << 0x40 | auVar11 << 0x60;
  piVar3 = (int *)param_1;
  sVar2 = *(short *)(piVar3 + 2);
  auVar13 = loadVectorLeftIndexed(8,param_1);
  auVar12 = loadVectorLeftIndexed(10,param_1);
  auVar14 = vectorShiftRightAlgebraicWord(auVar13,auVar11);
  auVar11 = vectorShiftRightAlgebraicWord(auVar12,auVar11);
  iVar6 = (int)sVar2 + (int)*(short *)((int)piVar3 + 10);
  auVar15.piece<0,4>() = auVar14.piece<0,4>() + auVar11.piece<0,4>();
  auVar15.piece<8,8>() = auVar11.piece<8,8>();
  auVar15.piece<4,4>() = auVar14.piece<4,4>() + auVar11.piece<4,4>();
  auVar13.piece<0,8>() = auVar15.piece<0,8>();
  auVar13.piece<12,4>() = auVar11.piece<12,4>();
  auVar13.piece<8,4>() = auVar14.piece<8,4>() + auVar11.piece<8,4>();
  auVar12.piece<0,12>() = auVar13.piece<0,12>();
  auVar12.piece<12,4>() = auVar14.piece<12,4>() + auVar13.piece<12,4>();
  auVar11.piece<0,4>() = param_2;
  auVar11.piece<4,4>() = param_2;
  auVar11.piece<8,4>() = param_2;
  auVar11.piece<12,4>() = param_2;
  if (param_2 <= iVar6 && sVar2 <= param_2) {
    dVar9 = 1.0;
    dVar10 = dVar9;
    if (param_2 < sVar2 + 0x10) {
      dVar10 = (double)((float)(longlong)(param_2 - sVar2) * 0.0625);
    }
    if (iVar6 + -8 < param_2) {
      dVar10 = (double)((float)(longlong)(iVar6 - param_2) * 0.125);
    }
    if (param_2 < sVar2 + 0x20) {
      auVar14 = vectorSubtractUnsignedWordModulo(auVar11,auVar14);
      auVar13 = ZEXT416(0xffffffff);
      auVar15 = auVar13 | auVar13 << 0x20 | auVar13 << 0x40 | auVar13 << 0x60;
      auVar13 = loadVectorLeftIndexed(0xc,0x6d17c);
      auVar16 = vectorShiftLeftIntegerWord(auVar15,auVar15);
      auVar15 = auVar13 >> 0x60 & (GPiece<16>)0xffffffff;
      auVar13 = ZEXT416(0);
      auVar14 = vectorSubtractUnsignedWordModulo
                          (auVar14,auVar15 | auVar15 << 0x20 | auVar15 << 0x40 | auVar15 << 0x60);
      auVar15 = loadVectorLeftIndexed(4,0x6d17c);
      auVar15 = auVar15 >> 0x60 & (GPiece<16>)0xffffffff;
      auVar14 = vectorConvertFromSignedFixedPointWord(auVar14,0);
      auVar15 = vectorMultiplyAddFloatingPoint
                          (auVar14,auVar15 | auVar15 << 0x20 | auVar15 << 0x40 | auVar15 << 0x60,
                           auVar16);
      dVar9 = (double)((float)(longlong)((param_2 - sVar2) + -0x10) * 0.0625);
      auVar15 = auVar15 >> 0x60 & (GPiece<16>)0xffffffff;
      vectorCompareGreaterThanOrEqualToFloatingPoint
                (auVar15 | auVar15 << 0x20 | auVar15 << 0x40 | auVar15 << 0x60,
                 auVar13 | auVar13 << 0x20 | auVar13 << 0x40 | auVar13 << 0x60);
      if ((bool)(in_cr6 >> 1 & 1)) {
        dVar9 = 0.0;
      }
    }
    if (iVar6 + -0x10 < param_2) {
      auVar13 = vectorSubtractUnsignedWordModulo(auVar12,auVar11);
      auVar11 = ZEXT416(8);
      auVar12 = ZEXT416(0);
      auVar13 = vectorSubtractUnsignedWordModulo
                          (auVar13,auVar11 | auVar11 << 0x20 | auVar11 << 0x40 | auVar11 << 0x60);
      auVar11 = ZEXT416(0xffffffff);
      auVar11 = auVar11 | auVar11 << 0x20 | auVar11 << 0x40 | auVar11 << 0x60;
      auVar13 = vectorConvertFromSignedFixedPointWord(auVar13,0);
      auVar14 = loadVectorLeftIndexed(8,0x6d17c);
      auVar15 = vectorShiftLeftIntegerWord(auVar11,auVar11);
      auVar11 = auVar14 >> 0x60 & (GPiece<16>)0xffffffff;
      auVar11 = vectorMultiplyAddFloatingPoint
                          (auVar13,auVar11 | auVar11 << 0x20 | auVar11 << 0x40 | auVar11 << 0x60,
                           auVar15);
      auVar11 = auVar11 >> 0x60 & (GPiece<16>)0xffffffff;
      dVar9 = (double)((float)(longlong)((iVar6 - param_2) + -8) * 0.125);
      vectorCompareGreaterThanOrEqualToFloatingPoint
                (auVar11 | auVar11 << 0x20 | auVar11 << 0x40 | auVar11 << 0x60,
                 auVar12 | auVar12 << 0x20 | auVar12 << 0x40 | auVar12 << 0x60);
      if ((bool)(in_cr6 >> 1 & 1)) {
        dVar9 = 0.0;
      }
    }
    pcVar4 = (char *)help_msg_string_by_index
                               (*piVar3 + (int)((longlong)*piVar3 + -0x5136 >> 0x3f));
    if (*(short *)((int)piVar3 + 0xe) == 1) {
      cVar1 = *pcVar4;
      pcVar5 = local_150;
      while (cVar1 != '\0') {
        if (*pcVar4 == '\x01') {
          *pcVar5 = ' ';
          pcVar5[1] = '-';
          pcVar5[2] = ' ';
          cVar1 = *pcVar4;
          while (cVar1 == '\x01') {
            pcVar4 = pcVar4 + 1;
            cVar1 = *pcVar4;
          }
          pcVar7 = pcVar5 + 3;
          if (*pcVar4 == '\0') {
            pcVar7 = pcVar5;
          }
        }
        else {
          cVar1 = *pcVar4;
          pcVar4 = pcVar4 + 1;
          *pcVar5 = cVar1;
          pcVar7 = pcVar5 + 1;
        }
        pcVar5 = pcVar7;
        cVar1 = *pcVar4;
      }
      *pcVar5 = '\0';
      DrawFancyTextWithBox
                (dVar10,dVar9,*(undefined2 *)(piVar3 + 1),*(undefined2 *)((int)piVar3 + 6),
                 *(undefined2 *)(piVar3 + 3));
    }
    else {
      lVar8 = (longlong)*(short *)((int)piVar3 + 6);
      cVar1 = *pcVar4;
      pcVar5 = local_150;
      while (cVar1 != '\0') {
        if (*pcVar4 == '\x01') {
          *pcVar5 = '\0';
          DrawFancyTextWithBox
                    (dVar10,dVar9,*(undefined2 *)(piVar3 + 1),lVar8,*(undefined2 *)(piVar3 + 3));
          lVar8 = (longlong)((int)lVar8 + 0x1a);
          cVar1 = *pcVar4;
          while (cVar1 == '\x01') {
            pcVar4 = pcVar4 + 1;
            cVar1 = *pcVar4;
          }
          pcVar5 = local_150;
          if (*pcVar4 == '\0') break;
        }
        else {
          cVar1 = *pcVar4;
          pcVar4 = pcVar4 + 1;
          *pcVar5 = cVar1;
          pcVar5 = pcVar5 + 1;
        }
        cVar1 = *pcVar4;
      }
      if (local_150 < pcVar5) {
        *pcVar5 = '\0';
        DrawFancyTextWithBox
                  (dVar10,dVar9,*(undefined2 *)(piVar3 + 1),lVar8,*(undefined2 *)(piVar3 + 3));
      }
    }
  }
  return;
}


// 0x006d590 (0x174 bytes)
void DrawSomeOverlay(void)

{
  int *piVar1;
  ulonglong uVar2;
  int iVar3;
  undefined4 *puVar4;
  
  if (g_CutscenePlaying == 0) {
    TexSamplerFlags = 5;
    Sprite_DrawShape(0,0,0x200,0x1a0,0,0,0x100,0xd0);
    if (0 < (int)SceneScreenFade) {
      if (0x3f800000 <
          (int)(FLOAT_ORDER(SceneScreenFade))) {
        SceneScreenFade = 1.0;
      }
      uVar2 = FastDoubleToInt((double)(SceneScreenFade * 128.0));
      DrawFullScreenQuad((int)((uVar2 & 0xffffffff) << 0x18),
                         (void *)(EffectTexHeaders + *(int *)(TexInfo + 0x58) * 0x24));
    }
    puVar4 = &DAT_0071fbdc;
    if (-1 < DAT_0071fbdc) {
      iVar3 = 0;
      do {
        DrawTimedHelpMsg(puVar4,DAT_00a15c22);
        puVar4 = puVar4 + 4;
        piVar1 = (int *)(&DAT_0071fbec + iVar3);
        iVar3 = iVar3 + 0x10;
      } while (-1 < *piVar1);
    }
  }
  return;
}


// 0x006d704 (0x4 bytes)
void STUB_0006d704(...)

{
  return;
}


// 0x006d708 (0x4 bytes)
void STUB_0006d708(...)

{
  return;
}


// 0x006d70c (0x14 bytes)
int GetEffectTexAddr(int param_1)

{
  return g_PartTexBaseIndex + param_1;
}


// 0x006d720 (0x40 bytes)
void RegisterFuncForMoby(void **function,MobyInstance *moby)

{
  undefined4 *puVar1;
  int iVar2;
  
  iVar2 = g_MobyFuncListCount;
  if (g_MobyFuncListCount < 0x40) {
    puVar1 = &g_MobyFuncList + g_MobyFuncListCount;
    g_MobyFuncListCount = g_MobyFuncListCount + 1;
    *puVar1 = function;
    (&g_MobyFuncListArgs)[iVar2] = moby;
  }
  return;
}


// 0x006d760 (0x40 bytes)
void RegisterOceanUpdate(undefined4 param_1,MobyInstance *param_2)

{
  undefined4 *puVar1;
  int iVar2;
  
  iVar2 = g_PreDrawCount;
  if (g_PreDrawCount < 0x40) {
    puVar1 = &CurrentOceanSubmitter + g_PreDrawCount;
    g_PreDrawCount = g_PreDrawCount + 1;
    *puVar1 = param_1;
    (&WaterMoby)[iVar2] = param_2;
  }
  return;
}


// 0x006d7a0 (0x40 bytes)
void RegisterPostPreDraw(void *func,void *arg)

{
  undefined4 *puVar1;
  int iVar2;
  
  iVar2 = g_PostPreDrawCount;
  if (g_PostPreDrawCount < 0x40) {
    puVar1 = &g_PostPreDrawFuncs + g_PostPreDrawCount;
    g_PostPreDrawCount = g_PostPreDrawCount + 1;
    *puVar1 = func;
    (&g_PostPreDrawArgs)[iVar2] = arg;
  }
  return;
}


// 0x006d7e0 (0x40 bytes)
void RegisterPostDraw(void *func,void *arg)

{
  undefined4 *puVar1;
  int iVar2;
  
  iVar2 = g_PostDrawCount;
  if (g_PostDrawCount < 0x40) {
    puVar1 = &g_PostDrawFuncs + g_PostDrawCount;
    g_PostDrawCount = g_PostDrawCount + 1;
    *puVar1 = func;
    (&g_PostDrawArgs)[iVar2] = arg;
  }
  return;
}


// 0x006d830 (0x290 bytes)
// inlined: FastRSqrt @0x6d984
void DrawLameShadows(void)

{
  longlong lVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  ulonglong *puVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  int iVar12;
  uint *puVar13;
  ulonglong uVar14;
  ulonglong uVar15;
  undefined4 *puVar16;
  undefined4 *puVar17;
  longlong lVar18;
  float *pfVar19;
  longlong lVar20;
  float *pfVar21;
  ulonglong unaff_r27;
  int iVar22;
  ulonglong unaff_r28;
  int iVar23;
  ulonglong unaff_r29;
  ulonglong unaff_r30;
  ulonglong unaff_r31;
  ulonglong in_LR;
  longlong lVar24;
  
  uVar14 = ZEXT48(&stack0x00000000);
  lVar1 = uVar14 - 0x130;
  puVar7 = (ulonglong *)lVar1;
  *puVar7 = uVar14;
  puVar7[0x28] = in_LR;
  puVar7[0x23] = unaff_r29;
  puVar13 = TexInfo;
  puVar7[0x25] = unaff_r31;
  puVar7[0x24] = unaff_r30;
  puVar7[0x22] = unaff_r28;
  puVar7[0x21] = unaff_r27;
  puVar7[0x1d] = (ulonglong)*puVar13;
  uVar15 = SCE_GS_SET_TEX1(0,0,1,1,1,0,0xff90);
  puVar7[0x1e] = uVar15;
  uVar15 = SCE_GS_SET_CLAMP(1,1,0,0,0,0);
  puVar7[0x1c] = uVar15;
  uVar15 = idol_draw::PackCmd(0,1,0,1,0x80);
  puVar7[0x1f] = uVar15;
  iVar23 = 0;
  puVar16 = &DAT_0071ef48;
  puVar17 = &DAT_0071ef4c;
  lVar24 = 4;
  lVar18 = lVar1;
  lVar20 = lVar1;
  do {
    uVar2 = *puVar16;
    uVar3 = *puVar17;
    puVar16 = puVar16 + 4;
    *(undefined4 *)((int)lVar20 + 0xc0) = uVar2;
    puVar17 = puVar17 + 4;
    *(undefined4 *)((int)lVar20 + 0xc4) = uVar3;
    *(undefined4 *)((int)lVar18 + 0xb0) = 0x40808080;
    lVar20 = lVar20 + 8;
    lVar18 = lVar18 + 4;
    lVar24 = lVar24 + -1;
  } while (lVar24 != 0);
  iVar22 = 0;
  if (0 < g_NumLameShadows) {
    do {
      fVar4 = *(float *)((int)&DAT_0095e604 + iVar23);
      fVar5 = *(float *)((int)&DAT_0095e600 + iVar23);
      fVar6 = *(float *)((int)&DAT_0095e608 + iVar23);
      fVar9 = 0.0;
      fVar11 = fVar6 * fVar6 + fVar5 * fVar5 + fVar4 * fVar4;
      fVar10 = fVar9;
      fVar8 = fVar9;
      if (SQRT(fVar11) != 0.0) {
        fVar10 = 1.0 / SQRT(fVar11);
        fVar10 = -(fVar11 * fVar10 * fVar10 - 1.0) * fVar10 * 0.5 + fVar10;
        fVar10 = -(fVar11 * fVar10 * fVar10 - 1.0) * fVar10 * 0.5 + fVar10;
        fVar10 = -(fVar11 * fVar10 * fVar10 - 1.0) * fVar10 * 0.5 + fVar10;
        fVar9 = fVar5 * fVar10;
        fVar8 = fVar4 * fVar10;
        fVar10 = fVar6 * fVar10;
      }
      fVar4 = *(float *)((int)&DAT_0095e5fc + iVar23);
      pfVar19 = (float *)&DAT_0071ef44;
      lVar24 = 4;
      lVar20 = uVar14 - 0xc0;
      lVar18 = lVar1;
      pfVar21 = (float *)&DAT_0071ef40;
      do {
        fVar5 = *pfVar19;
        fVar6 = *pfVar21;
        puVar17 = (undefined4 *)lVar20;
        *puVar17 = *(undefined4 *)((int)&g_LameShadows + iVar23);
        puVar17[1] = *(undefined4 *)((int)&DAT_0095e5f4 + iVar23);
        puVar17[2] = *(undefined4 *)((int)&DAT_0095e5f8 + iVar23);
        fVar11 = fVar6 * fVar9 + fVar5 * fVar8;
        puVar17[3] = *(undefined4 *)((int)&DAT_0095e5fc + iVar23);
        fVar5 = *pfVar21;
        lVar20 = lVar20 + 0x10;
        fVar6 = *pfVar19;
        pfVar21 = pfVar21 + 4;
        iVar12 = (int)lVar18;
        pfVar19 = pfVar19 + 4;
        *(float *)(iVar12 + 0x78) = -(fVar11 * fVar10 * fVar4 - *(float *)(iVar12 + 0x78));
        *(float *)(iVar12 + 0x70) = -(fVar11 * fVar9 - fVar5) * fVar4 + *(float *)(iVar12 + 0x70);
        *(float *)(iVar12 + 0x74) = -(fVar11 * fVar8 - fVar6) * fVar4 + *(float *)(iVar12 + 0x74);
        lVar18 = lVar18 + 0x10;
        lVar24 = lVar24 + -1;
      } while (lVar24 != 0);
      FastDrawQuad(uVar14 - 0xc0,0,0,EffectTexHeaders,9);
      iVar22 = iVar22 + 1;
      iVar23 = iVar23 + 0x20;
    } while (iVar22 < g_NumLameShadows);
  }
  return;
}


// 0x006dad0 (0x598 bytes)
void FadeToBlack(int param_1)

{
  ushort uVar1;
  ushort uVar2;
  RsxCmd *pRVar3;
  RenderingStep *pRVar4;
  int *piVar5;
  undefined8 uVar6;
  GPiece<16> in_vs34;
  GPiece<16> auVar7;
  GPiece<16> auVar8;
  GPiece<16> auVar9;
  GPiece<16> auVar10;
  GPiece<16> auVar11;
  GPiece<16> auVar12;
  GPiece<16> auVar13;
  GPiece<16> auVar14;
  GPiece<16> auVar15;
  GPiece<16> auVar16;
  GPiece<16> auVar17;
  GPiece<16> auVar18;
  GPiece<16> auVar19;
  
  piVar5 = g_pIdolDraw;
  uVar6 = 0x70;
  auVar14.piece<0,4>() = param_1;
  auVar14.piece<4,4>() = param_1;
  auVar14.piece<8,4>() = param_1;
  auVar14.piece<12,4>() = param_1;
  if (g_pIdolDraw[0x6a3] == 0) {
    idol_draw::Spurs_FlushAndSwapQueue(&DAT_01111700);
    FUN_004edcfc(&DAT_01111700);
    if ((piVar5[0x128] == 1) && ((piVar5[0x69b] & 1U) != 0)) {
      (*(code *)**(undefined4 **)(*piVar5 + 0x18))(piVar5);
    }
    param_1 = param_1 + -1;
    auVar18 = ZEXT416(1);
    auVar18 = auVar18 | auVar18 << 0x20 | auVar18 << 0x40 | auVar18 << 0x60;
    if (-1 < param_1) {
      auVar17 = vectorSubtractUnsignedWordModulo(auVar14,auVar18);
      auVar14 = loadVectorLeftIndexed(uVar6,0x6dac0);
      auVar16 = loadVectorLeftIndexed(4,0x6dac0);
      auVar19 = loadVectorLeftIndexed(8,0x6dac0);
      auVar14 = auVar14 >> 0x60 & (GPiece<16>)0xffffffff;
      auVar15 = auVar14 | auVar14 << 0x20 | auVar14 << 0x40 | auVar14 << 0x60;
      auVar14 = auVar16 >> 0x60 & (GPiece<16>)0xffffffff;
      auVar16 = auVar14 | auVar14 << 0x20 | auVar14 << 0x40 | auVar14 << 0x60;
      auVar14 = auVar19 >> 0x60 & (GPiece<16>)0xffffffff;
      auVar14 = auVar14 | auVar14 << 0x20 | auVar14 << 0x40 | auVar14 << 0x60;
      do {
        auVar19.piece<0,4>() = auVar17.piece<0,4>() + auVar18.piece<0,4>();
        auVar19.piece<8,8>() = in_vs34.piece<8,8>();
        auVar19.piece<4,4>() = auVar17.piece<4,4>() + auVar18.piece<4,4>();
        auVar7.piece<0,8>() = auVar19.piece<0,8>();
        auVar7.piece<8,4>() = auVar17.piece<8,4>() + auVar18.piece<8,4>();
        auVar7.piece<12,4>() = auVar17.piece<12,4>() + auVar18.piece<12,4>();
        auVar19 = ZEXT416(0xffffffff);
        auVar8 = auVar19 | auVar19 << 0x20 | auVar19 << 0x40 | auVar19 << 0x60;
        auVar19 = ZEXT416(0xffffffff);
        auVar19 = auVar19 | auVar19 << 0x20 | auVar19 << 0x40 | auVar19 << 0x60;
        auVar7 = vectorConvertFromSignedFixedPointWord(auVar7,0);
        auVar8 = vectorShiftLeftIntegerWord(auVar8,auVar8);
        auVar10 = vectorConvertFromSignedFixedPointWord(auVar17,0);
        auVar9 = vectorShiftLeftIntegerWord(auVar19,auVar19);
        auVar19 = ZEXT416(0xffffffff);
        auVar11 = auVar19 | auVar19 << 0x20 | auVar19 << 0x40 | auVar19 << 0x60;
        auVar19 = ZEXT416(0xffffffff);
        auVar12 = auVar19 | auVar19 << 0x20 | auVar19 << 0x40 | auVar19 << 0x60;
        auVar19 = vectorShiftLeftIntegerWord(auVar11,auVar11);
        auVar13 = vectorShiftLeftIntegerWord(auVar12,auVar12);
        auVar11 = vectorReciprocalEstimateFloatingPoint(auVar7);
        auVar10 = vectorMultiplyAddFloatingPoint(auVar10,auVar15,auVar19);
        auVar19 = ZEXT416(0xffffffff);
        auVar19 = auVar19 | auVar19 << 0x20 | auVar19 << 0x40 | auVar19 << 0x60;
        auVar12 = vectorNegativeMultiplySubtractFloatingPoint(auVar11,auVar7,auVar14);
        auVar8 = vectorMultiplyAddFloatingPoint(auVar11,auVar12,auVar8);
        auVar11 = vectorShiftLeftIntegerWord(auVar19,auVar19);
        auVar19 = ZEXT416(0xffffffff);
        auVar19 = auVar19 | auVar19 << 0x20 | auVar19 << 0x40 | auVar19 << 0x60;
        auVar12 = vectorShiftLeftIntegerWord(auVar19,auVar19);
        auVar19 = vectorNegativeMultiplySubtractFloatingPoint(auVar8,auVar7,auVar14);
        auVar8 = vectorMultiplyAddFloatingPoint(auVar8,auVar19,auVar9);
        auVar19 = vectorNegativeMultiplySubtractFloatingPoint(auVar8,auVar7,auVar14);
        auVar19 = vectorMultiplyAddFloatingPoint(auVar8,auVar19,auVar13);
        auVar19 = vectorMultiplyAddFloatingPoint(auVar19,auVar10,auVar11);
        in_vs34 = vectorMultiplyAddFloatingPoint(auVar19,auVar16,auVar12);
        DAT_008fa550 = storeVectorElementWordIndexed(in_vs34,0xffffffffffffa550,0x900000);
        (*(code *)**(undefined4 **)(*piVar5 + 0x18))(piVar5);
        if (piVar5[0x128] == 1) {
          (*(code *)**(undefined4 **)(*piVar5 + 0x18))(piVar5);
        }
        param_1 = param_1 + -1;
        auVar17 = vectorSubtractUnsignedWordModulo(auVar17,auVar18);
        g_MainLoopFrames = g_MainLoopFrames + 1;
      } while (-1 < param_1);
    }
    g_MainLoopFrames = g_MainLoopFrames + 1;
    (*(code *)**(undefined4 **)(*piVar5 + 0x10))(piVar5,DepthPass,piVar5[1],piVar5[2]);
    pRVar4 = DepthPass;
    *DepthPass->command = NV4097_SET_CONTEXT_DMA_COLOR_A_x1;
    pRVar4->command[1] = *(byte *)(piVar5 + 0x6fa) + 0xfeed0000;
    pRVar3 = pRVar4->command;
    pRVar4->command = pRVar3 + 2;
    pRVar3[2] = NV4097_SET_CONTEXT_DMA_COLOR_B_x1;
    pRVar4->command[1] = *(byte *)((int)piVar5 + 0x1be9) + 0xfeed0000;
    pRVar3 = pRVar4->command;
    pRVar4->command = pRVar3 + 2;
    pRVar3[2] = NV4097_SET_CONTEXT_DMA_COLOR_C_x2;
    pRVar4->command[1] = *(byte *)((int)piVar5 + 0x1bea) + 0xfeed0000;
    pRVar4->command[2] = *(byte *)((int)piVar5 + 0x1beb) + 0xfeed0000;
    pRVar3 = pRVar4->command;
    pRVar4->command = pRVar3 + 3;
    pRVar3[3] = NV4097_SET_CONTEXT_DMA_ZETA_x1;
    pRVar4->command[1] = *(byte *)((int)piVar5 + 0x1c0d) + 0xfeed0000;
    pRVar3 = pRVar4->command;
    pRVar4->command = pRVar3 + 2;
    uVar1 = *(ushort *)(piVar5 + 0x706);
    uVar2 = *(ushort *)((int)piVar5 + 0x1c1a);
    pRVar3[2] = (RsxCmd)&DAT_00180208;
    pRVar4->command[1] =
         (uint)*(byte *)((int)piVar5 + 0x1be6) | (uint)*(byte *)(piVar5 + 0x703) << 5 |
         (uint)*(byte *)(piVar5 + 0x6f9) << 8 | (uint)*(byte *)((int)piVar5 + 0x1be5) << 0xc |
         (RsxCmd)((0x1fU - LZCOUNT((uint)uVar1) & 0xffffffff) << 0x10) |
         (RsxCmd)((0x1fU - LZCOUNT((uint)uVar2) & 0xffffffff) << 0x18);
    pRVar4->command[2] = piVar5[0x6ff];
    pRVar4->command[3] = piVar5[0x6fb];
    pRVar4->command[4] = piVar5[0x704];
    pRVar4->command[5] = piVar5[0x6fc];
    pRVar4->command[6] = piVar5[0x700];
    pRVar3 = pRVar4->command;
    pRVar4->command = pRVar3 + 7;
    pRVar3[7] = NV4097_SET_SURFACE_PITCH_Z_x1;
    pRVar4->command[1] = piVar5[0x705];
    pRVar3 = pRVar4->command;
    pRVar4->command = pRVar3 + 2;
    pRVar3[2] = NV4097_SET_SURFACE_PITCH_C_x4;
    pRVar4->command[1] = piVar5[0x701];
    pRVar4->command[2] = piVar5[0x702];
    pRVar4->command[3] = piVar5[0x6fd];
    pRVar4->command[4] = piVar5[0x6fe];
    pRVar3 = pRVar4->command;
    pRVar4->command = pRVar3 + 5;
    pRVar3[5] = NV4097_SET_SURFACE_COLOR_TARGET_x1;
    pRVar4->command[1] = (uint)*(byte *)((int)piVar5 + 0x1be7);
    pRVar3 = pRVar4->command;
    pRVar4->command = pRVar3 + 2;
    pRVar3[2] = NV4097_SET_WINDOW_OFFSET_x1;
    pRVar4->command[1] =
         CONCAT22(*(undefined2 *)((int)piVar5 + 0x1c1e),*(undefined2 *)(piVar5 + 0x707));
    pRVar3 = pRVar4->command;
    pRVar4->command = pRVar3 + 2;
    pRVar3[2] = NV4097_SET_SURFACE_CLIP_HORIZONTAL_x2;
    pRVar4->command[1] = CONCAT22(*(undefined2 *)(piVar5 + 0x706),*(undefined2 *)(piVar5 + 0x707));
    pRVar4->command[2] =
         CONCAT22(*(undefined2 *)((int)piVar5 + 0x1c1a),*(undefined2 *)((int)piVar5 + 0x1c1e));
    pRVar3 = pRVar4->command;
    pRVar4->command = pRVar3 + 3;
    pRVar3[3] = NV4097_SET_SHADER_WINDOW_x1;
    pRVar4->command[1] =
         (uint)*(ushort *)((int)piVar5 + 0x1c1a) - (*(ushort *)((int)piVar5 + 0x1c1a) >> 0xc & 1) |
         0x1000;
    pRVar4->command = pRVar4->command + 2;
    pRVar4 = DepthPass;
    *DepthPass->command = NV4097_SET_COLOR_CLEAR_VALUE_x1;
    pRVar4->command[1] = 0;
    pRVar4->command = pRVar4->command + 2;
    pRVar4 = DepthPass;
    *DepthPass->command = NV4097_CLEAR_SURFACE_x1;
    pRVar4->command[1] = 0xf0;
    pRVar3 = pRVar4->command;
    pRVar4->command = pRVar3 + 2;
    pRVar3[2] = NV4097_NO_OPERATION_x1;
    pRVar4->command[1] = 0;
    pRVar4->command = pRVar4->command + 2;
    DAT_008fa550 = 0x3f800000;
  }
  return;
}


// 0x006e068 (0x70 bytes)
void Draw_FlushAndPresent(void)

{
  int iVar1;
  
  iVar1 = g_pIdolDraw;
  idol_draw::Spurs_FlushAndSwapQueue(&DAT_01111700);
  FUN_004edcfc(&DAT_01111700);
  idol_draw::Gfx_Present(iVar1,iVar1 + 0x1fe0);
  FUN_004d5e48(*(undefined4 *)(iVar1 + 0x1a74));
  return;
}


// 0x006e0d8 (0x644 bytes)
void DrawRenderTargetToScreen(void)

{
  byte bVar1;
  byte bVar2;
  byte bVar3;
  byte bVar4;
  byte bVar5;
  ushort uVar6;
  RsxCmd RVar7;
  RsxCmd RVar8;
  RsxCmd RVar9;
  RsxCmd *pRVar10;
  RsxCmd RVar11;
  RenderingStep *pRVar12;
  int iVar13;
  
  iVar13 = g_pIdolDraw;
  pRVar12 = ForwardPass;
  *ForwardPass->command = NV4097_SET_DEPTH_TEST_ENABLE_x1;
  pRVar12->command[1] = 0;
  pRVar12->command = pRVar12->command + 2;
  pRVar12 = ForwardPass;
  *ForwardPass->command = NV4097_SET_DEPTH_MASK_x1;
  pRVar12->command[1] = 0;
  pRVar12->command = pRVar12->command + 2;
  pRVar12 = ForwardPass;
  *ForwardPass->command = NV4097_SET_STENCIL_MASK_x1;
  pRVar12->command[1] = 0;
  pRVar12->command = pRVar12->command + 2;
  pRVar12 = ForwardPass;
  *ForwardPass->command = NV4097_SET_BLEND_ENABLE_x1;
  pRVar12->command[1] = 0;
  pRVar12->command = pRVar12->command + 2;
  pRVar12 = ForwardPass;
  *ForwardPass->command = NV4097_SET_ALPHA_TEST_ENABLE_x1;
  pRVar12->command[1] = 0;
  RVar7 = *(RsxCmd *)(iVar13 + 0x206c);
  pRVar12->command = pRVar12->command + 2;
  pRVar12 = ForwardPass;
  bVar1 = *(byte *)(iVar13 + 0x2066);
  bVar2 = *(byte *)(iVar13 + 0x2059);
  bVar3 = *(byte *)(iVar13 + 0x2058);
  bVar4 = *(byte *)(iVar13 + 0x205b);
  bVar5 = *(byte *)(iVar13 + 0x205a);
  RVar11 = *(RsxCmd *)(iVar13 + 0x2060);
  RVar8 = *(RsxCmd *)(iVar13 + 0x205c);
  RVar9 = *(RsxCmd *)(iVar13 + 0x2068);
  uVar6 = *(ushort *)(iVar13 + 0x2064);
  *ForwardPass->command = (RsxCmd)&DAT_00081a00;
  pRVar12->command[1] = RVar7;
  pRVar12->command[2] =
       (uint)bVar2 << 0x10 | bVar1 + 1 | 8 | (uint)bVar3 << 8 | (uint)bVar4 << 2 | (uint)bVar5 << 4;
  pRVar10 = pRVar12->command;
  pRVar12->command = pRVar10 + 3;
  pRVar10[3] = NV4097_SET_TEXTURE_IMAGE_RECT_x1;
  pRVar12->command[1] = RVar11;
  pRVar10 = pRVar12->command;
  pRVar12->command = pRVar10 + 2;
  pRVar10[2] = (RsxCmd)&DAT_00041840;
  pRVar12->command[1] = RVar9 | (uint)uVar6 << 0x14;
  pRVar10 = pRVar12->command;
  pRVar12->command = pRVar10 + 2;
  pRVar10[2] = NV4097_SET_TEXTURE_CONTROL1_x1;
  pRVar12->command[1] = RVar8;
  pRVar12->command = pRVar12->command + 2;
  pRVar12 = ForwardPass;
  *ForwardPass->command = NV4097_SET_TEXTURE_CONTROL0_x1;
  pRVar12->command[1] = 0x80000000;
  pRVar12->command = pRVar12->command + 2;
  pRVar12 = ForwardPass;
  *ForwardPass->command = NV4097_SET_TEXTURE_ADDRESS_x1;
  pRVar12->command[1] = 0x40030303;
  pRVar12->command = pRVar12->command + 2;
  pRVar12 = ForwardPass;
  *ForwardPass->command = NV4097_SET_TEXTURE_FILTER_x1;
  pRVar12->command[1] = 0x2022000;
  pRVar12->command = pRVar12->command + 2;
  idol_draw::BindVertexProgram(iVar13,ForwardPass,0);
  idol_draw::BindFragmentProgram(iVar13,ForwardPass,0);
  pRVar12 = ForwardPass;
  *ForwardPass->command = NV4097_SET_VERTEX_DATA_ARRAY_FORMAT_x1;
  pRVar12->command[1] = 2;
  pRVar10 = pRVar12->command;
  pRVar12->command = pRVar10 + 2;
  pRVar10[2] = NV4097_SET_VERTEX_DATA_ARRAY_OFFSET_x1;
  pRVar12->command[1] = 0;
  pRVar12->command = pRVar12->command + 2;
  pRVar12 = ForwardPass;
  *ForwardPass->command = 0x41744;
  pRVar12->command[1] = 2;
  pRVar10 = pRVar12->command;
  pRVar12->command = pRVar10 + 2;
  pRVar10[2] = 0x41684;
  pRVar12->command[1] = 0;
  pRVar12->command = pRVar12->command + 2;
  pRVar12 = ForwardPass;
  *ForwardPass->command = 0x41748;
  pRVar12->command[1] = 2;
  pRVar10 = pRVar12->command;
  pRVar12->command = pRVar10 + 2;
  pRVar10[2] = 0x41688;
  pRVar12->command[1] = 0;
  pRVar12->command = pRVar12->command + 2;
  pRVar12 = ForwardPass;
  *ForwardPass->command = 0x4174c;
  pRVar12->command[1] = 2;
  pRVar10 = pRVar12->command;
  pRVar12->command = pRVar10 + 2;
  pRVar10[2] = 0x4168c;
  pRVar12->command[1] = 0;
  pRVar12->command = pRVar12->command + 2;
  pRVar12 = ForwardPass;
  *ForwardPass->command = 0x400c1714;
  pRVar12->command[1] = 0;
  pRVar12->command[2] = 0;
  pRVar12->command[3] = 0;
  pRVar12->command[4] = NV4097_SET_BEGIN_END_x1;
  pRVar12->command[5] = 8;
  pRVar12->command = pRVar12->command + 6;
  pRVar12 = ForwardPass;
  *ForwardPass->command = 0xc1510;
  pRVar12->command[1] = 0;
  pRVar12->command[2] = 0;
  pRVar12->command[3] = 0x3f800000;
  pRVar12->command = pRVar12->command + 4;
  pRVar12 = ForwardPass;
  *ForwardPass->command = NV4097_SET_VERTEX_DATA2F_M_x2;
  pRVar12->command[1] = 0xbf800000;
  pRVar12->command[2] = 0x3f800000;
  pRVar12->command = pRVar12->command + 3;
  pRVar12 = ForwardPass;
  *ForwardPass->command = 0xc1510;
  pRVar12->command[1] = 0;
  pRVar12->command[2] = 0x3f800000;
  pRVar12->command[3] = 0x3f800000;
  pRVar12->command = pRVar12->command + 4;
  pRVar12 = ForwardPass;
  *ForwardPass->command = NV4097_SET_VERTEX_DATA2F_M_x2;
  pRVar12->command[1] = 0xbf800000;
  pRVar12->command[2] = 0xbf800000;
  pRVar12->command = pRVar12->command + 3;
  pRVar12 = ForwardPass;
  *ForwardPass->command = 0xc1510;
  pRVar12->command[1] = 0x3f800000;
  pRVar12->command[2] = 0x3f800000;
  pRVar12->command[3] = 0x3f800000;
  pRVar12->command = pRVar12->command + 4;
  pRVar12 = ForwardPass;
  *ForwardPass->command = NV4097_SET_VERTEX_DATA2F_M_x2;
  pRVar12->command[1] = 0x3f800000;
  pRVar12->command[2] = 0xbf800000;
  pRVar12->command = pRVar12->command + 3;
  pRVar12 = ForwardPass;
  *ForwardPass->command = 0xc1510;
  pRVar12->command[1] = 0x3f800000;
  pRVar12->command[2] = 0;
  pRVar12->command[3] = 0x3f800000;
  pRVar12->command = pRVar12->command + 4;
  pRVar12 = ForwardPass;
  *ForwardPass->command = NV4097_SET_VERTEX_DATA2F_M_x2;
  pRVar12->command[1] = 0x3f800000;
  pRVar12->command[2] = 0x3f800000;
  pRVar12->command = pRVar12->command + 3;
  pRVar12 = ForwardPass;
  *ForwardPass->command = NV4097_SET_BEGIN_END_x1;
  pRVar12->command[1] = 0;
  pRVar12->command = pRVar12->command + 2;
  pRVar12 = ForwardPass;
  *ForwardPass->command = NV4097_SET_DEPTH_TEST_ENABLE_x1;
  pRVar12->command[1] = 1;
  pRVar12->command = pRVar12->command + 2;
  pRVar12 = ForwardPass;
  *ForwardPass->command = NV4097_SET_DEPTH_MASK_x1;
  pRVar12->command[1] = 1;
  pRVar12->command = pRVar12->command + 2;
  pRVar12 = ForwardPass;
  *ForwardPass->command = NV4097_SET_BLEND_ENABLE_x1;
  pRVar12->command[1] = 1;
  pRVar12->command = pRVar12->command + 2;
  return;
}


// 0x006e71c (0x4 bytes)
void STUB_0006e71c(...)

{
  return;
}


// 0x006e740 (0x598 bytes)
void Sprite_DrawRotated
               (float param_1,float param_2,double param_3,double param_4,double param_5,
               double param_6,double param_7)

{
  float fVar1;
  RsxCmd *pRVar2;
  RsxCmd *pRVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  RsxCmd RVar7;
  RsxCmd RVar8;
  RenderingStep *pRVar9;
  undefined4 *puVar10;
  ulonglong in_r8;
  ulonglong in_r9;
  longlong in_r10;
  ulonglong uVar11;
  ulonglong uVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  double dVar16;
  double dVar17;
  double dVar18;
  double dVar19;
  double dVar20;
  RsxCmd in_stack_0000007c;
  uint in_stack_00000084;
  uint in_stack_0000008c;
  char in_stack_000000a7;
  undefined4 local_110;
  uint local_10c;
  undefined4 local_108;
  undefined4 local_104;
  undefined4 local_100;
  undefined4 local_fc;
  undefined4 local_f8;
  undefined4 local_f4;
  undefined4 local_f0;
  
  fVar1 = (float)(param_5 + 1.570796251296997);
  uVar11 = (in_r9 & 0x7fffffff) * 2;
  dVar13 = (double)(float)(3.141592502593994 - param_5);
  if (param_5 - (double)(float)(3.141592502593994 - param_5) < 0.0) {
    dVar13 = param_5;
  }
  fVar4 = 3.1415925 - fVar1;
  if (fVar1 - (3.1415925 - fVar1) < 0.0) {
    fVar4 = fVar1;
  }
  dVar14 = (double)(float)(-3.141592502593994 - param_5);
  if ((double)(float)(-3.141592502593994 - param_5) - dVar13 < 0.0) {
    dVar14 = dVar13;
  }
  dVar13 = (double)(float)(dVar14 * dVar14);
  fVar5 = -3.1415925 - fVar1;
  if ((-3.1415925 - fVar1) - fVar4 < 0.0) {
    fVar5 = fVar4;
  }
  fVar6 = fVar5 * fVar5;
  RVar8 = (RsxCmd)((in_r8 & 0x7fffffff) << 1);
  dVar20 = (double)(float)(dVar13 * (double)(float)(dVar13 * dVar14));
  dVar19 = (double)(float)(dVar13 * dVar20);
  fVar4 = fVar6 * fVar6 * fVar5;
  uVar12 = uVar11 + (ZERO_MASK((in_stack_0000008c & 0xff)) &
                    (in_r9 & 0x7fffffff) * -2);
  fVar1 = fVar6 * fVar4;
  dVar13 = (double)((float)(dVar13 * dVar19) * 2.601887e-06 +
                   (float)(dVar19 * -0.0001980741071747616 +
                          (double)(float)(dVar20 * 0.008333025500178337 +
                                         (double)(float)((double)(float)(dVar13 * dVar14) *
                                                         -0.16666656732559204 + dVar14))));
  dVar16 = (double)(float)(1.0 - param_6);
  uVar11 = ZERO_MASK((in_stack_0000008c & 0xff)) & uVar11;
  dVar20 = (double)(float)(param_4 * dVar13);
  dVar19 = (double)(float)(param_3 * dVar13);
  dVar13 = (double)(fVar6 * fVar1 * 2.601887e-06 +
                   fVar1 * -0.0001980741 +
                   fVar4 * 0.0083330255 + fVar6 * fVar5 * -0.16666657 + fVar5);
  puVar10 = (undefined4 *)(EffectTexHeaders + (int)(in_r10 << 5) + (int)(in_r10 << 2));
  dVar14 = (double)(float)(param_4 * dVar13);
  dVar17 = (double)(float)(param_3 * dVar13);
  local_110 = *puVar10;
  local_108 = puVar10[2];
  local_104 = puVar10[3];
  dVar15 = (double)(float)((double)(float)(1.0 - param_7) * dVar20 + (double)param_1);
  fVar4 = -(float)(dVar19 * param_6);
  fVar1 = (float)((double)(float)(1.0 - param_7) * dVar14 + (double)param_2);
  local_10c = puVar10[1] & 0xffff | 0x14000;
  local_100 = puVar10[4];
  dVar13 = -(double)(float)(dVar20 * param_7 - (double)param_1);
  fVar5 = -(float)(dVar14 * param_7 - (double)param_2);
  local_fc = puVar10[5];
  fVar6 = -(float)(dVar19 * dVar16);
  local_f8 = puVar10[6];
  local_f4 = puVar10[7];
  dVar14 = -(double)(float)(dVar16 * dVar17 - dVar15);
  dVar20 = (double)(fVar1 + fVar4);
  dVar19 = (double)(float)(param_6 * dVar17 + dVar15);
  local_f0 = puVar10[8];
  dVar15 = -(double)(float)(dVar16 * dVar17 - dVar13);
  dVar18 = (double)(fVar5 + fVar4);
  dVar17 = (double)(float)(param_6 * dVar17 + dVar13);
  dVar13 = (double)(fVar1 - fVar6);
  dVar16 = (double)(fVar5 - fVar6);
  FUN_004d6bb0(HUD_Pass,0,&local_110);
  idol_draw::ResetPassState(HUD_Pass);
  pRVar2 = HUD_Pass->command;
  RVar7 = RVar8 + ((uint)(ZERO_MASK((in_stack_00000084 & 0xff))) & -RVar8) & 0xffff
  ;
  HUD_Pass->command = pRVar2 + 2;
  pRVar9 = HUD_Pass;
  pRVar3 = HUD_Pass->command;
  *pRVar2 = 0x41948;
  pRVar2[1] = ((int)in_stack_0000007c >> 8 & 0xffU) << 8 |
              ((int)in_stack_0000007c >> 0x10 & 0xffU) << 0x10 | in_stack_0000007c & 0xff000000 |
              in_stack_0000007c & 0xff;
  *pRVar3 = 0x400c1714;
  pRVar9->command = pRVar3 + 6;
  pRVar9 = HUD_Pass;
  pRVar3[1] = 0;
  pRVar3[2] = 0;
  pRVar3[3] = 0;
  pRVar3[4] = NV4097_SET_BEGIN_END_x1;
  pRVar2 = pRVar9->command;
  pRVar3[5] = 8;
  *pRVar2 = 0x41904;
  pRVar2[1] = (RsxCmd)((uVar12 & 0xffffffff) << 0x10) | RVar7;
  pRVar9->command = pRVar2 + 2;
  if (in_stack_000000a7 != '\0') {
    FUN_004e3178(g_pIdolDraw);
  }
  pRVar9 = HUD_Pass;
  pRVar2 = HUD_Pass->command;
  pRVar2[1] = (RsxCmd)(float)dVar14;
  pRVar3 = pRVar9->command;
  *pRVar2 = NV4097_SET_VERTEX_DATA2F_M_x2;
  pRVar3[2] = (RsxCmd)(float)dVar13;
  pRVar9->command = pRVar3 + 3;
  pRVar9 = HUD_Pass;
  pRVar2 = HUD_Pass->command;
  *pRVar2 = 0x41904;
  pRVar2[1] = (RsxCmd)(uVar11 << 0x10) | RVar7;
  pRVar9->command = pRVar2 + 2;
  if (in_stack_000000a7 != '\0') {
    FUN_004e3178(g_pIdolDraw);
  }
  pRVar9 = HUD_Pass;
  RVar7 = (RsxCmd)(ZERO_MASK((in_stack_00000084 & 0xff))) & RVar8 & 0xffff;
  pRVar2 = HUD_Pass->command;
  pRVar2[1] = (RsxCmd)(float)dVar15;
  pRVar3 = pRVar9->command;
  *pRVar2 = NV4097_SET_VERTEX_DATA2F_M_x2;
  pRVar3[2] = (RsxCmd)(float)dVar16;
  pRVar9->command = pRVar3 + 3;
  pRVar9 = HUD_Pass;
  pRVar2 = HUD_Pass->command;
  *pRVar2 = 0x41904;
  pRVar2[1] = (RsxCmd)(uVar11 << 0x10) | RVar7;
  pRVar9->command = pRVar2 + 2;
  if (in_stack_000000a7 != '\0') {
    FUN_004e3178(g_pIdolDraw);
  }
  pRVar9 = HUD_Pass;
  pRVar2 = HUD_Pass->command;
  pRVar2[1] = (RsxCmd)(float)dVar17;
  pRVar3 = pRVar9->command;
  *pRVar2 = NV4097_SET_VERTEX_DATA2F_M_x2;
  pRVar3[2] = (RsxCmd)(float)dVar18;
  pRVar9->command = pRVar3 + 3;
  pRVar9 = HUD_Pass;
  pRVar2 = HUD_Pass->command;
  *pRVar2 = 0x41904;
  pRVar2[1] = (RsxCmd)((uVar12 & 0xffffffff) << 0x10) | RVar7;
  pRVar9->command = pRVar2 + 2;
  if (in_stack_000000a7 != '\0') {
    FUN_004e3178(g_pIdolDraw);
  }
  pRVar9 = HUD_Pass;
  pRVar2 = HUD_Pass->command;
  pRVar2[1] = (RsxCmd)(float)dVar19;
  pRVar3 = pRVar9->command;
  *pRVar2 = NV4097_SET_VERTEX_DATA2F_M_x2;
  pRVar3[2] = (RsxCmd)(float)dVar20;
  pRVar9->command = pRVar3 + 3;
  pRVar9 = HUD_Pass;
  pRVar2 = HUD_Pass->command;
  *pRVar2 = NV4097_SET_BEGIN_END_x1;
  pRVar2[1] = 0;
  pRVar9->command = pRVar2 + 2;
  return;
}


// 0x006ecf8 (0x3a8 bytes)
void DrawTexturedQuadHud(int param_1,int param_2,undefined8 param_3,int param_4,int param_5)

{
  RsxCmd *pRVar1;
  uint uVar2;
  RsxCmd RVar3;
  int iVar4;
  undefined4 uVar5;
  ulonglong *puVar6;
  RenderingStep *pRVar7;
  undefined8 uVar8;
  longlong lVar9;
  longlong lVar10;
  ulonglong unaff_r28;
  ulonglong unaff_r29;
  ulonglong unaff_r30;
  ulonglong unaff_r31;
  ulonglong in_LR;
  longlong lVar11;
  ulonglong uVar12;
  ulonglong uVar13;
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
  GPiece<16> auVar24;
  GPiece<16> auVar25;
  GPiece<16> auVar26;
  GPiece<16> auVar27;
  
  lVar9 = ZEXT48(&stack0x00000000) - 0xb0;
  puVar6 = (ulonglong *)lVar9;
  *puVar6 = ZEXT48(&stack0x00000000);
  puVar6[0x18] = in_LR;
  puVar6[0x13] = unaff_r29;
  puVar6[0x14] = unaff_r30;
  uVar8 = 0;
  puVar6[0x15] = unaff_r31;
  puVar6[0x12] = unaff_r28;
  if (param_5 != 0) {
    uVar8 = 5;
  }
  idol_draw::BindTexture(HUD_Pass,0,EffectTexHeaders + param_4 * 0x24,uVar8);
  idol_draw::ResetPassState(HUD_Pass);
  pRVar7 = HUD_Pass;
  *HUD_Pass->command = 0x400c1714;
  pRVar7->command[1] = 0;
  pRVar7->command[2] = 0;
  pRVar7->command[3] = 0;
  pRVar7->command[4] = NV4097_SET_BEGIN_END_x1;
  pRVar1 = pRVar7->command;
  *(undefined4 *)(puVar6 + 0xe) = 0;
  *(undefined4 *)((int)puVar6 + 0x74) = 1;
  *(undefined4 *)(puVar6 + 0xf) = 3;
  pRVar1[5] = 8;
  pRVar1 = pRVar7->command;
  *(undefined4 *)((int)puVar6 + 0x7c) = 2;
  pRVar7->command = pRVar1 + 6;
  auVar20 = loadVectorLeftIndexed(4,0x6ecd8);
  auVar18 = loadVectorLeftIndexed(8,0x6ecd8);
  auVar16 = loadVectorLeftIndexed(0x10,0x6ecd8);
  auVar20 = auVar20 >> 0x60 & (GPiece<16>)0xffffffff;
  auVar21 = auVar20 | auVar20 << 0x20 | auVar20 << 0x40 | auVar20 << 0x60;
  auVar20 = auVar18 >> 0x60 & (GPiece<16>)0xffffffff;
  auVar19 = auVar20 | auVar20 << 0x20 | auVar20 << 0x40 | auVar20 << 0x60;
  auVar20 = loadVectorLeftIndexed(0xc,0x6ecd8);
  auVar15 = loadVectorLeftIndexed(0x14,0x6ecd8);
  lVar11 = 4;
  auVar18 = loadVectorLeftIndexed(0x18,0x6ecd8);
  auVar20 = auVar20 >> 0x60 & (GPiece<16>)0xffffffff;
  auVar17 = auVar20 | auVar20 << 0x20 | auVar20 << 0x40 | auVar20 << 0x60;
  auVar20 = auVar16 >> 0x60 & (GPiece<16>)0xffffffff;
  auVar16 = auVar20 | auVar20 << 0x20 | auVar20 << 0x40 | auVar20 << 0x60;
  auVar20 = auVar15 >> 0x60 & (GPiece<16>)0xffffffff;
  auVar15 = auVar20 | auVar20 << 0x20 | auVar20 << 0x40 | auVar20 << 0x60;
  auVar20 = auVar18 >> 0x60 & (GPiece<16>)0xffffffff;
  do {
    uVar2 = *(uint *)((int)lVar9 + 0x70);
    auVar18 = ZEXT416(0xfffffff8);
    lVar10 = ((ulonglong)uVar2 & 0x3fffffff) << 2;
    auVar22 = ZEXT416(0xfffffff0);
    auVar14 = ZEXT416(0xffffffff);
    auVar25 = auVar14 | auVar14 << 0x20 | auVar14 << 0x40 | auVar14 << 0x60;
    auVar14 = ZEXT416(0xffffffff);
    auVar27 = auVar14 | auVar14 << 0x20 | auVar14 << 0x40 | auVar14 << 0x60;
    auVar14 = ZEXT416(0xffffffff);
    auVar14 = auVar14 | auVar14 << 0x20 | auVar14 << 0x40 | auVar14 << 0x60;
    auVar23 = loadVectorLeftIndexed(lVar10,param_3);
    auVar26 = vectorShiftLeftIntegerWord(auVar25,auVar25);
    auVar18 = vectorRotateLeftIntegerWord
                        (auVar23,auVar18 | auVar18 << 0x20 | auVar18 << 0x40 | auVar18 << 0x60);
    auVar25 = vectorRotateLeftIntegerWord
                        (auVar23,auVar22 | auVar22 << 0x20 | auVar22 << 0x40 | auVar22 << 0x60);
    auVar24 = vectorLogicalAnd(auVar23,auVar16);
    auVar23 = vectorShiftRightWord(auVar23,auVar15);
    auVar22 = vectorLogicalAnd(auVar18,auVar16);
    auVar25 = vectorLogicalAnd(auVar25,auVar16);
    auVar24 = vectorConvertFromUnsignedFixedPointWord(auVar24,0);
    auVar27 = vectorShiftLeftIntegerWord(auVar27,auVar27);
    auVar23 = vectorConvertFromUnsignedFixedPointWord(auVar23,0);
    auVar18 = ZEXT416(0xffffffff);
    auVar18 = auVar18 | auVar18 << 0x20 | auVar18 << 0x40 | auVar18 << 0x60;
    auVar22 = vectorConvertFromUnsignedFixedPointWord(auVar22,0);
    auVar25 = vectorConvertFromUnsignedFixedPointWord(auVar25,0);
    uVar8 = *(undefined8 *)(param_1 + uVar2 * 8);
    auVar24 = vectorMultiplyAddFloatingPoint(auVar24,auVar21,auVar27);
    auVar27 = vectorShiftLeftIntegerWord(auVar18,auVar18);
    auVar22 = vectorMultiplyAddFloatingPoint(auVar22,auVar21,auVar26);
    auVar18 = vectorShiftLeftIntegerWord(auVar14,auVar14);
    auVar23 = vectorMultiplyAddFloatingPoint(auVar23,auVar21,auVar27);
    auVar14 = vectorMultiplyAddFloatingPoint(auVar25,auVar21,auVar18);
    puVar6[0x10] = (longlong)(int)(((uint)uVar8 & 0xffff) - SCREEN_PROJECTION_MAP_X);
    auVar25 = vectorCompareGreaterThanFloatingPoint(auVar24,auVar19);
    uVar12 = puVar6[0x10];
    auVar18 = vectorCompareGreaterThanFloatingPoint(auVar22,auVar19);
    auVar25 = vectorConditionalSelect(auVar24,auVar19,auVar25);
    auVar22 = vectorConditionalSelect(auVar22,auVar19,auVar18);
    auVar18 = vectorCompareGreaterThanFloatingPoint(auVar23,auVar19);
    auVar24 = vectorAddFloatingPoint(auVar25,auVar17);
    auVar26 = vectorCompareGreaterThanFloatingPoint(auVar14,auVar19);
    auVar22 = vectorAddFloatingPoint(auVar22,auVar17);
    auVar25 = vectorConditionalSelect(auVar23,auVar19,auVar18);
    auVar18 = vectorConditionalSelect(auVar14,auVar19,auVar26);
    auVar25 = vectorAddFloatingPoint(auVar25,auVar17);
    auVar14 = vectorAddFloatingPoint(auVar18,auVar17);
    puVar6[0x10] = (longlong)
                   (int)(((uint)((ulonglong)uVar8 >> 0x10) & 0xffff) - SCREEN_PROJECTION_MAP_Y);
    pRVar7 = HUD_Pass;
    uVar2 = *(uint *)(param_2 + (int)lVar10);
    uVar13 = puVar6[0x10];
    auVar23 = vectorCompareGreaterThanFloatingPoint(auVar24,auVar19);
    auVar18 = vectorCompareGreaterThanFloatingPoint(auVar22,auVar19);
    auVar23 = vectorConditionalSelect(auVar24,auVar19,auVar23);
    auVar18 = vectorConditionalSelect(auVar22,auVar19,auVar18);
    auVar23 = vectorConvertToSignedFixedPointWordSaturate(auVar23,0);
    auVar24 = vectorCompareGreaterThanFloatingPoint(auVar14,auVar19);
    auVar22 = vectorConvertToSignedFixedPointWordSaturate(auVar18,0);
    auVar18 = vectorConditionalSelect(auVar14,auVar19,auVar24);
    auVar14 = vectorCompareGreaterThanFloatingPoint(auVar25,auVar19);
    *HUD_Pass->command = 0x41948;
    auVar25 = vectorConditionalSelect(auVar25,auVar19,auVar14);
    auVar14 = vectorConvertToSignedFixedPointWordSaturate(auVar18,0);
    auVar18 = ZEXT416(8);
    auVar25 = vectorConvertToSignedFixedPointWordSaturate(auVar25,0);
    auVar18 = vectorShiftLeftIntegerWord
                        (auVar22,auVar18 | auVar18 << 0x20 | auVar18 << 0x40 | auVar18 << 0x60);
    auVar22 = vectorShiftLeftIntegerWord
                        (auVar14,auVar20 | auVar20 << 0x20 | auVar20 << 0x40 | auVar20 << 0x60);
    auVar14 = vectorShiftLeftIntegerWord(auVar25,auVar15);
    lVar9 = lVar9 + 4;
    auVar18 = (auVar23 | auVar18 | auVar22 | auVar14) >> 0x60 & (GPiece<16>)0xffffffff;
    uVar5 = storeVectorElementWordIndexed
                      (auVar18 | auVar18 << 0x20 | auVar18 << 0x40 | auVar18 << 0x60,4,
                       ZEXT48(pRVar7->command));
    *(undefined4 *)((uint)(pRVar7->command + 1) & 0xfffffffc) = uVar5;
    pRVar7->command = pRVar7->command + 2;
    pRVar7 = HUD_Pass;
    *HUD_Pass->command = 0x41904;
    pRVar1 = pRVar7->command;
    puVar6[0x10] = (longlong)(int)((float)(longlong)uVar12 * 0.0625);
    pRVar1[1] = ((int)uVar2 >> 0x10 & 0xfff8U) << 0xd | (int)(short)((ushort)(uVar2 >> 3) & 0x1fff);
    pRVar7->command = pRVar7->command + 2;
    pRVar7 = HUD_Pass;
    RVar3 = *(RsxCmd *)((int)puVar6 + 0x84);
    puVar6[0x10] = (longlong)(int)((float)(longlong)uVar13 * 0.0625);
    iVar4 = *(int *)((int)puVar6 + 0x84);
    *pRVar7->command = NV4097_SET_VERTEX_DATA2S_M_x1;
    pRVar7->command[1] = iVar4 << 0x10 | RVar3 & 0xffff;
    pRVar7->command = pRVar7->command + 2;
    pRVar7 = HUD_Pass;
    lVar11 = lVar11 + -1;
  } while (lVar11 != 0);
  *HUD_Pass->command = NV4097_SET_BEGIN_END_x1;
  pRVar7->command[1] = 0;
  pRVar7->command = pRVar7->command + 2;
  return;
}


// 0x006f0a0 (0x710 bytes)
void DrawTextBox(int param_1,int param_2,int param_3,int param_4,u32 param_5)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  
  iVar9 = (int)param_1;
  iVar2 = (int)param_3;
  if (((iVar9 == 0 && param_2 == 0x1a0) && (iVar2 == 0)) && (param_4 == 0x200)) {
    DrawFullScreenQuad(param_5 & 0xff000000 | 4,
                       (void *)(EffectTexHeaders + *(int *)(TexInfo + 0x58) * 0x24));
  }
  else {
    Sprite_DrawShape(param_3,param_1,param_4 - iVar2,param_2 - iVar9,0,0,0x10,0x10);
  }
  iVar1 = iVar9 + -1;
  iVar8 = iVar9 + 1;
  iVar7 = iVar2 + 3;
  iVar6 = param_4 + 5;
  if (((iVar1 == 0 && iVar8 == 0x1a0) && (iVar7 == 0)) && (iVar6 == 0x200)) {
    DrawFullScreenQuad(param_5,(void *)(EffectTexHeaders + *(int *)(TexInfo + 0x58) * 0x24));
  }
  else {
    Sprite_DrawShape(iVar7,iVar1,iVar6 - iVar7,iVar8 - iVar1,0,0,0x10,0x10);
  }
  iVar1 = iVar9 + -3;
  iVar4 = iVar9 + -5;
  iVar3 = iVar2 + -1;
  iVar5 = param_4 + -3;
  if (((iVar1 == 0 && iVar4 == 0x1a0) && (iVar3 == 0)) && (iVar5 == 0x200)) {
    DrawFullScreenQuad(param_5,(void *)(EffectTexHeaders + *(int *)(TexInfo + 0x58) * 0x24));
  }
  else {
    Sprite_DrawShape(iVar3,iVar1,iVar5 - iVar3,iVar4 - iVar1,0,0,0x10,0x10);
  }
  iVar1 = param_2 + -3;
  if (((iVar4 == 0 && iVar1 == 0x1a0) && (iVar3 == 0)) && (iVar2 + 1 == 0x200)) {
    DrawFullScreenQuad(param_5,(void *)(EffectTexHeaders + *(int *)(TexInfo + 0x58) * 0x24));
  }
  else {
    Sprite_DrawShape(iVar3,iVar4,(iVar2 + 1) - iVar3,iVar1 - iVar4,0,0,0x10,0x10);
  }
  iVar9 = iVar9 + 3;
  iVar4 = param_2 + 1;
  iVar3 = iVar2 + -3;
  if (((iVar9 == 0 && iVar4 == 0x1a0) && (iVar3 == 0)) && (iVar2 + -5 == 0x200)) {
    DrawFullScreenQuad(param_5,(void *)(EffectTexHeaders + *(int *)(TexInfo + 0x58) * 0x24));
  }
  else {
    Sprite_DrawShape(iVar3,iVar9,(iVar2 + -5) - iVar3,iVar4 - iVar9,0,0,0x10,0x10);
  }
  iVar2 = param_2 + -1;
  if (((iVar2 == 0) && (iVar4 == 0x1a0)) && ((iVar3 == 0 && (iVar5 == 0x200)))) {
    DrawFullScreenQuad(param_5,(void *)(EffectTexHeaders + *(int *)(TexInfo + 0x58) * 0x24));
  }
  else {
    Sprite_DrawShape(iVar3,iVar2,iVar5 - iVar3,iVar4 - iVar2,0,0,0x10,0x10);
  }
  iVar2 = param_2 + 3;
  iVar3 = param_4 + 1;
  if (((iVar2 == 0 && param_2 + 5 == 0x1a0) && (iVar7 == 0)) && (iVar3 == 0x200)) {
    DrawFullScreenQuad(param_5,(void *)(EffectTexHeaders + *(int *)(TexInfo + 0x58) * 0x24));
  }
  else {
    Sprite_DrawShape(iVar7,iVar2,iVar3 - iVar7,(param_2 + 5) - iVar2,0,0,0x10,0x10);
  }
  iVar7 = param_4 + -1;
  if (((iVar9 == 0) && (iVar2 == 0x1a0)) && ((iVar7 == 0 && (iVar3 == 0x200)))) {
    DrawFullScreenQuad(param_5,(void *)(EffectTexHeaders + *(int *)(TexInfo + 0x58) * 0x24));
  }
  else {
    Sprite_DrawShape(iVar7,iVar9,iVar3 - iVar7,iVar2 - iVar9,0,0,0x10,0x10);
  }
  param_4 = param_4 + 3;
  if (((iVar8 == 0) && (iVar1 == 0x1a0)) && ((param_4 == 0 && (iVar6 == 0x200)))) {
    DrawFullScreenQuad(param_5,(void *)(EffectTexHeaders + *(int *)(TexInfo + 0x58) * 0x24));
  }
  else {
    Sprite_DrawShape(param_4,iVar8,iVar6 - param_4,iVar1 - iVar8,0,0,0x10,0x10);
  }
  return;
}


// 0x006f7b0 (0xb0 bytes)
int FontLenSmall(char *s,int len)

{
  byte bVar1;
  int iVar2;
  int iVar3;
  
  if (g_JapaneseMode) {
    iVar2 = FontLenWithTable(s,len,&JapaneseGlyphs);
  }
  else {
    iVar3 = 0;
    iVar2 = 0;
    if (len != 0) {
      do {
        bVar1 = s[iVar3];
        if (bVar1 == 0) {
          return iVar2;
        }
        if ((&DAT_00736c53)[(uint)bVar1 * 4] != '\0') {
          iVar2 = iVar2 + (char)(&DAT_00736c53)[(uint)bVar1 * 4];
        }
        iVar3 = iVar3 + 1;
      } while (iVar3 != len);
    }
  }
  return iVar2;
}


// 0x006f860 (0xb0 bytes)
int FontLenLarge(char *s,int len)

{
  byte bVar1;
  int iVar2;
  int iVar3;
  
  if (g_JapaneseMode) {
    iVar2 = FontLenWithTable(s,len,&JapaneseGlyphs);
  }
  else {
    iVar3 = 0;
    iVar2 = 0;
    if (len != 0) {
      do {
        bVar1 = s[iVar3];
        if (bVar1 == 0) {
          return iVar2;
        }
        if ((&DAT_00736ff3)[(uint)bVar1 * 4] != '\0') {
          iVar2 = iVar2 + (char)(&DAT_00736ff3)[(uint)bVar1 * 4];
        }
        iVar3 = iVar3 + 1;
      } while (iVar3 != len);
    }
  }
  return iVar2;
}


// 0x006f918 (0xe4 bytes)
int FontLenScaledWithTable
              (double param_1,int param_2,int param_3,undefined8 param_4,int param_5)

{
  char cVar1;
  byte bVar2;
  byte bVar3;
  int iVar4;
  int iVar5;
  double dVar6;
  
  iVar5 = 0;
  dVar6 = 0.0;
  if (param_3 != 0) {
    do {
      bVar3 = *(byte *)(param_2 + iVar5);
      if (bVar3 == 0) break;
      cVar1 = *(char *)(param_5 + (uint)bVar3 * 4 + 3);
      if (cVar1 != '\0') {
        if ((bVar3 < 0xbd) || (0xbe < bVar3)) {
          iVar4 = (int)cVar1;
        }
        else {
          bVar2 = *(byte *)(param_2 + iVar5 + -1);
          iVar4 = ((int)*(char *)(param_5 + (uint)bVar2 * 4 + 0x203) -
                  (int)*(char *)(param_5 + (uint)bVar2 * 4 + 3)) +
                  ((bVar3 == 0xbe)) + 4;
        }
        dVar6 = (double)(float)((double)(longlong)iVar4 * param_1 + dVar6);
      }
      iVar5 = iVar5 + 1;
    } while (iVar5 != param_3);
  }
  return (int)dVar6;
}


// 0x006fa00 (0xc4 bytes)
int FontLenScaled(double param_1,int param_2,undefined8 param_3)

{
  byte *pbVar1;
  int iVar2;
  double dVar3;
  
  if (g_JapaneseMode) {
    iVar2 = FontLenScaledWithTable(param_2,param_3,param_2,&JapaneseGlyphs);
  }
  else {
    iVar2 = 0;
    dVar3 = 0.0;
    if ((int)param_3 != 0) {
      do {
        pbVar1 = (byte *)(param_2 + iVar2);
        if (*pbVar1 == 0) break;
        iVar2 = iVar2 + 1;
        dVar3 = (double)(float)((double)(longlong)(int)(char)(&DAT_007368b3)[(uint)*pbVar1 * 4] *
                                param_1 + dVar3);
      } while (iVar2 != (int)param_3);
    }
    iVar2 = (int)dVar3;
  }
  return iVar2;
}


// 0x006fac8 (0xc4 bytes)
int FontLenScaledSmall(double param_1,int param_2,undefined8 param_3)

{
  byte *pbVar1;
  int iVar2;
  double dVar3;
  
  if (g_JapaneseMode) {
    iVar2 = FontLenScaledWithTable(param_2,param_3,param_2,&JapaneseGlyphs);
  }
  else {
    iVar2 = 0;
    dVar3 = 0.0;
    if ((int)param_3 != 0) {
      do {
        pbVar1 = (byte *)(param_2 + iVar2);
        if (*pbVar1 == 0) break;
        iVar2 = iVar2 + 1;
        dVar3 = (double)(float)((double)(longlong)(int)(char)(&DAT_00736c53)[(uint)*pbVar1 * 4] *
                                param_1 + dVar3);
      } while (iVar2 != (int)param_3);
    }
    iVar2 = (int)dVar3;
  }
  return iVar2;
}


// 0x006fb90 (0xc4 bytes)
int FontLenScaledLarge(double param_1,int param_2,undefined8 param_3)

{
  byte *pbVar1;
  int iVar2;
  double dVar3;
  
  if (g_JapaneseMode) {
    iVar2 = FontLenScaledWithTable(param_2,param_3,param_2,&JapaneseGlyphs);
  }
  else {
    iVar2 = 0;
    dVar3 = 0.0;
    if ((int)param_3 != 0) {
      do {
        pbVar1 = (byte *)(param_2 + iVar2);
        if (*pbVar1 == 0) break;
        iVar2 = iVar2 + 1;
        dVar3 = (double)(float)((double)(longlong)(int)(char)(&DAT_00736ff3)[(uint)*pbVar1 * 4] *
                                param_1 + dVar3);
      } while (iVar2 != (int)param_3);
    }
    iVar2 = (int)dVar3;
  }
  return iVar2;
}


// 0x006fc54 (0xa8 bytes)
void FontPrintSmallLeft
               (undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
               undefined8 param_5)

{
  if (g_JapaneseMode) {
    FontPrintJapanese(param_1,param_2,param_3,param_4,param_5,*(undefined4 *)(TexInfo + 4),
                      &JapaneseGlyphs);
  }
  else {
    FontPrint(param_1,param_2,param_3,param_4,param_5,*(undefined4 *)(TexInfo + 8),&Glyphs);
  }
  return;
}


// 0x006fcfc (0xa8 bytes)
void FontPrintLarge
               (undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
               undefined8 param_5)

{
  if (g_JapaneseMode) {
    FontPrintJapanese(param_1,param_2,param_3,param_4,param_5,*(undefined4 *)(TexInfo + 4),
                      &JapaneseGlyphs);
  }
  else {
    FontPrint(param_1,param_2,param_3,param_4,param_5,*(undefined4 *)(TexInfo + 0xc),
              &LargeWesternGlyphs);
  }
  return;
}


// 0x006fda4 (0xa0 bytes)
void FontPrint_unk(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  if (g_JapaneseMode) {
    FontPrintJapanese_unk2(param_1,param_2,param_3);
  }
  else {
    FontPrint_unk3(param_1,param_2,param_3);
  }
  return;
}


// 0x006fe44 (0xa0 bytes)
void FontPrintScaled(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  if (g_JapaneseMode) {
    FontPrintJapanese_unk2(param_1,param_2,param_3);
  }
  else {
    FontPrint_unk3(param_1,param_2,param_3);
  }
  return;
}


// 0x006fee4 (0xa0 bytes)
void FontPrintScaled_v2(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  if (g_JapaneseMode) {
    FontPrintJapanese_unk2(param_1,param_2,param_3);
  }
  else {
    FontPrint_unk3(param_1,param_2,param_3);
  }
  return;
}


// 0x006ff88 (0x1a8 bytes)
void FontPrintRightWithScale
               (double param_1,int param_2,int param_3,undefined8 param_4,int param_5,
               undefined8 param_6)

{
  byte *pbVar1;
  longlong lVar2;
  int iVar3;
  double dVar4;
  
  if (g_JapaneseMode) {
    iVar3 = FontLenScaledWithTable(param_1,param_5,param_6,param_4,&JapaneseGlyphs);
  }
  else {
    iVar3 = 0;
    dVar4 = 0.0;
    if ((int)param_6 != 0) {
      do {
        pbVar1 = (byte *)(param_5 + iVar3);
        if (*pbVar1 == 0) break;
        iVar3 = iVar3 + 1;
        dVar4 = (double)(float)((double)(longlong)(int)(char)(&DAT_007368b3)[(uint)*pbVar1 * 4] *
                                param_1 + dVar4);
      } while (iVar3 != (int)param_6);
    }
    iVar3 = (int)dVar4;
  }
  lVar2 = (longlong)(param_2 - iVar3);
  if (g_JapaneseMode == false) {
    FontPrint_unk3((double)lVar2,(double)(longlong)param_3,param_1,TexInfo,lVar2,param_4,param_5,
                   param_6);
  }
  else {
    FontPrintJapanese_unk2
              ((double)lVar2,(double)(longlong)param_3,param_1,TexInfo,lVar2,param_4,param_5,param_6
              );
  }
  return;
}


// 0x0070130 (0x14c bytes)
void FontPrintMediumRight
               (int param_1,undefined8 param_2,undefined8 param_3,char *param_4,undefined8 param_5)

{
  byte bVar1;
  int iVar2;
  int len;
  int iVar3;
  
  len = (int)param_5;
  if (g_JapaneseMode) {
    iVar2 = FontLenWithTable(param_4,len,&JapaneseGlyphs);
  }
  else {
    iVar3 = 0;
    iVar2 = 0;
    if (len != 0) {
      do {
        bVar1 = param_4[iVar3];
        if (bVar1 == 0) break;
        if ((&DAT_007368b3)[(uint)bVar1 * 4] != '\0') {
          iVar2 = iVar2 + (char)(&DAT_007368b3)[(uint)bVar1 * 4];
        }
        iVar3 = iVar3 + 1;
      } while (iVar3 != len);
    }
  }
  if (g_JapaneseMode == false) {
    FontPrint(param_1 - iVar2,param_2,param_3,param_4,param_5,*(undefined4 *)(TexInfo + 4),
              &MediumWesternGlyphs);
  }
  else {
    FontPrintJapanese(param_1 - iVar2,param_2,param_3,param_4,param_5,*(undefined4 *)(TexInfo + 4),
                      &JapaneseGlyphs);
  }
  return;
}


// 0x007027c (0x14c bytes)
void FontPrintSmallRight
               (int param_1,undefined8 param_2,undefined8 param_3,char *param_4,undefined8 param_5)

{
  byte bVar1;
  int iVar2;
  int len;
  int iVar3;
  
  len = (int)param_5;
  if (g_JapaneseMode) {
    iVar2 = FontLenWithTable(param_4,len,&JapaneseGlyphs);
  }
  else {
    iVar3 = 0;
    iVar2 = 0;
    if (len != 0) {
      do {
        bVar1 = param_4[iVar3];
        if (bVar1 == 0) break;
        if ((&DAT_00736c53)[(uint)bVar1 * 4] != '\0') {
          iVar2 = iVar2 + (char)(&DAT_00736c53)[(uint)bVar1 * 4];
        }
        iVar3 = iVar3 + 1;
      } while (iVar3 != len);
    }
  }
  if (g_JapaneseMode == false) {
    FontPrint(param_1 - iVar2,param_2,param_3,param_4,param_5,*(undefined4 *)(TexInfo + 8),&Glyphs);
  }
  else {
    FontPrintJapanese(param_1 - iVar2,param_2,param_3,param_4,param_5,*(undefined4 *)(TexInfo + 4),
                      &JapaneseGlyphs);
  }
  return;
}


// 0x00703c8 (0x14c bytes)
void FontPrintLargeRight
               (int param_1,undefined8 param_2,undefined8 param_3,char *param_4,undefined8 param_5)

{
  byte bVar1;
  int iVar2;
  int len;
  int iVar3;
  
  len = (int)param_5;
  if (g_JapaneseMode) {
    iVar2 = FontLenWithTable(param_4,len,&JapaneseGlyphs);
  }
  else {
    iVar3 = 0;
    iVar2 = 0;
    if (len != 0) {
      do {
        bVar1 = param_4[iVar3];
        if (bVar1 == 0) break;
        if ((&DAT_00736ff3)[(uint)bVar1 * 4] != '\0') {
          iVar2 = iVar2 + (char)(&DAT_00736ff3)[(uint)bVar1 * 4];
        }
        iVar3 = iVar3 + 1;
      } while (iVar3 != len);
    }
  }
  if (g_JapaneseMode == false) {
    FontPrint(param_1 - iVar2,param_2,param_3,param_4,param_5,*(undefined4 *)(TexInfo + 0xc),
              &LargeWesternGlyphs);
  }
  else {
    FontPrintJapanese(param_1 - iVar2,param_2,param_3,param_4,param_5,*(undefined4 *)(TexInfo + 4),
                      &JapaneseGlyphs);
  }
  return;
}


// 0x0070514 (0x164 bytes)
int FontPrintMediumCenter(int param_1,int param_2,u32 param_3,const char *param_4,int param_5)

{
  byte bVar1;
  int iVar2;
  int iVar3;
  int len;
  int iVar4;
  
  len = (int)param_5;
  if (g_JapaneseMode) {
    iVar3 = FontLenWithTable(param_4,len,&JapaneseGlyphs);
  }
  else {
    iVar4 = 0;
    iVar3 = 0;
    iVar2 = 0;
    if (len != 0) {
      do {
        iVar3 = iVar2;
        bVar1 = param_4[iVar4];
        if (bVar1 == 0) break;
        if ((&DAT_007368b3)[(uint)bVar1 * 4] != '\0') {
          iVar3 = iVar3 + (char)(&DAT_007368b3)[(uint)bVar1 * 4];
        }
        iVar4 = iVar4 + 1;
        iVar2 = iVar3;
      } while (iVar4 != len);
    }
  }
  param_1 = param_1 - (iVar3 >> 1);
  if (g_JapaneseMode == false) {
    FontPrint(param_1,param_2,param_3,param_4,param_5,*(undefined4 *)(TexInfo + 4),
              &MediumWesternGlyphs);
  }
  else {
    FontPrintJapanese(param_1,param_2,param_3,param_4,param_5,*(undefined4 *)(TexInfo + 4),
                      &JapaneseGlyphs);
  }
  return param_1;
}


// 0x0070680 (0x1b4 bytes)
int FontPrintCenterScaled
              (double param_1,int param_2,int param_3,undefined8 param_4,int param_5,
              undefined8 param_6)

{
  byte *pbVar1;
  int iVar2;
  double dVar3;
  
  if (g_JapaneseMode) {
    iVar2 = FontLenScaledWithTable(param_1,param_5,param_6,param_4,&JapaneseGlyphs);
  }
  else {
    iVar2 = 0;
    dVar3 = 0.0;
    if ((int)param_6 != 0) {
      do {
        pbVar1 = (byte *)(param_5 + iVar2);
        if (*pbVar1 == 0) break;
        iVar2 = iVar2 + 1;
        dVar3 = (double)(float)((double)(longlong)(int)(char)(&DAT_007368b3)[(uint)*pbVar1 * 4] *
                                param_1 + dVar3);
      } while (iVar2 != (int)param_6);
    }
    iVar2 = (int)dVar3;
  }
  param_2 = param_2 - (iVar2 >> 1);
  dVar3 = (double)(longlong)param_2;
  if (g_JapaneseMode == false) {
    FontPrint_unk3(dVar3,(double)(longlong)param_3,param_1,TexInfo,CHAR_ARRAY_00a0feec + 0x114,
                   param_4,param_5,param_6);
  }
  else {
    FontPrintJapanese_unk2
              (dVar3,(double)(longlong)param_3,param_1,TexInfo,CHAR_ARRAY_00a0feec + 0x114,param_4,
               param_5,param_6);
  }
  return param_2;
}


// 0x0070834 (0x164 bytes)
int FontPrintSmallCenter
              (int param_1,undefined8 param_2,undefined8 param_3,char *param_4,undefined8 param_5)

{
  byte bVar1;
  int iVar2;
  int iVar3;
  int len;
  int iVar4;
  
  len = (int)param_5;
  if (g_JapaneseMode) {
    iVar3 = FontLenWithTable(param_4,len,&JapaneseGlyphs);
  }
  else {
    iVar4 = 0;
    iVar3 = 0;
    iVar2 = 0;
    if (len != 0) {
      do {
        iVar3 = iVar2;
        bVar1 = param_4[iVar4];
        if (bVar1 == 0) break;
        if ((&DAT_00736c53)[(uint)bVar1 * 4] != '\0') {
          iVar3 = iVar3 + (char)(&DAT_00736c53)[(uint)bVar1 * 4];
        }
        iVar4 = iVar4 + 1;
        iVar2 = iVar3;
      } while (iVar4 != len);
    }
  }
  param_1 = param_1 - (iVar3 >> 1);
  if (g_JapaneseMode == false) {
    FontPrint(param_1,param_2,param_3,param_4,param_5,*(undefined4 *)(TexInfo + 8),&Glyphs);
  }
  else {
    FontPrintJapanese(param_1,param_2,param_3,param_4,param_5,*(undefined4 *)(TexInfo + 4),
                      &JapaneseGlyphs);
  }
  return param_1;
}


// 0x0070998 (0x164 bytes)
int FontPrintLargeCenter
              (int param_1,undefined8 param_2,undefined8 param_3,char *param_4,undefined8 param_5)

{
  byte bVar1;
  int iVar2;
  int iVar3;
  int len;
  int iVar4;
  
  len = (int)param_5;
  if (g_JapaneseMode) {
    iVar3 = FontLenWithTable(param_4,len,&JapaneseGlyphs);
  }
  else {
    iVar4 = 0;
    iVar3 = 0;
    iVar2 = 0;
    if (len != 0) {
      do {
        iVar3 = iVar2;
        bVar1 = param_4[iVar4];
        if (bVar1 == 0) break;
        if ((&DAT_00736ff3)[(uint)bVar1 * 4] != '\0') {
          iVar3 = iVar3 + (char)(&DAT_00736ff3)[(uint)bVar1 * 4];
        }
        iVar4 = iVar4 + 1;
        iVar2 = iVar3;
      } while (iVar4 != len);
    }
  }
  param_1 = param_1 - (iVar3 >> 1);
  if (g_JapaneseMode == false) {
    FontPrint(param_1,param_2,param_3,param_4,param_5,*(undefined4 *)(TexInfo + 0xc),
              &LargeWesternGlyphs);
  }
  else {
    FontPrintJapanese(param_1,param_2,param_3,param_4,param_5,*(undefined4 *)(TexInfo + 4),
                      &JapaneseGlyphs);
  }
  return param_1;
}


// 0x0070b00 (0x1ac bytes)
void FontPrintCenterScaledMedium
               (double param_1,int param_2,int param_3,undefined8 param_4,int param_5,
               undefined8 param_6)

{
  byte *pbVar1;
  longlong lVar2;
  int iVar3;
  double dVar4;
  
  if (g_JapaneseMode) {
    iVar3 = FontLenScaledWithTable(param_1,param_5,param_6,param_4,&JapaneseGlyphs);
  }
  else {
    iVar3 = 0;
    dVar4 = 0.0;
    if ((int)param_6 != 0) {
      do {
        pbVar1 = (byte *)(param_5 + iVar3);
        if (*pbVar1 == 0) break;
        iVar3 = iVar3 + 1;
        dVar4 = (double)(float)((double)(longlong)(int)(char)(&DAT_007368b3)[(uint)*pbVar1 * 4] *
                                param_1 + dVar4);
      } while (iVar3 != (int)param_6);
    }
    iVar3 = (int)dVar4;
  }
  lVar2 = (longlong)(param_2 - (iVar3 >> 1));
  if (g_JapaneseMode == false) {
    FontPrint_unk3((double)lVar2,(double)(longlong)param_3,param_1,TexInfo,lVar2,param_4,param_5,
                   param_6);
  }
  else {
    FontPrintJapanese_unk2
              ((double)lVar2,(double)(longlong)param_3,param_1,TexInfo,lVar2,param_4,param_5,param_6
              );
  }
  return;
}


// 0x0070cb0 (0x1ac bytes)
void FontPrintCenterScaledSmall
               (double param_1,int param_2,int param_3,undefined8 param_4,int param_5,
               undefined8 param_6)

{
  byte *pbVar1;
  longlong lVar2;
  int iVar3;
  double dVar4;
  
  if (g_JapaneseMode) {
    iVar3 = FontLenScaledWithTable(param_1,param_5,param_6,param_4,&JapaneseGlyphs);
  }
  else {
    iVar3 = 0;
    dVar4 = 0.0;
    if ((int)param_6 != 0) {
      do {
        pbVar1 = (byte *)(param_5 + iVar3);
        if (*pbVar1 == 0) break;
        iVar3 = iVar3 + 1;
        dVar4 = (double)(float)((double)(longlong)(int)(char)(&DAT_00736c53)[(uint)*pbVar1 * 4] *
                                param_1 + dVar4);
      } while (iVar3 != (int)param_6);
    }
    iVar3 = (int)dVar4;
  }
  lVar2 = (longlong)(param_2 - (iVar3 >> 1));
  if (g_JapaneseMode == false) {
    FontPrint_unk3((double)lVar2,(double)(longlong)param_3,param_1,TexInfo,lVar2,param_4,param_5,
                   param_6);
  }
  else {
    FontPrintJapanese_unk2
              ((double)lVar2,(double)(longlong)param_3,param_1,TexInfo,lVar2,param_4,param_5,param_6
              );
  }
  return;
}


// 0x0070e60 (0x1ac bytes)
void FontPrintCenterScaledLarge
               (double param_1,int param_2,int param_3,undefined8 param_4,int param_5,
               undefined8 param_6)

{
  byte *pbVar1;
  longlong lVar2;
  int iVar3;
  double dVar4;
  
  if (g_JapaneseMode) {
    iVar3 = FontLenScaledWithTable(param_1,param_5,param_6,param_4,&JapaneseGlyphs);
  }
  else {
    iVar3 = 0;
    dVar4 = 0.0;
    if ((int)param_6 != 0) {
      do {
        pbVar1 = (byte *)(param_5 + iVar3);
        if (*pbVar1 == 0) break;
        iVar3 = iVar3 + 1;
        dVar4 = (double)(float)((double)(longlong)(int)(char)(&DAT_00736ff3)[(uint)*pbVar1 * 4] *
                                param_1 + dVar4);
      } while (iVar3 != (int)param_6);
    }
    iVar3 = (int)dVar4;
  }
  lVar2 = (longlong)(param_2 - (iVar3 >> 1));
  if (g_JapaneseMode == false) {
    FontPrint_unk3((double)lVar2,(double)(longlong)param_3,param_1,TexInfo,lVar2,param_4,param_5,
                   param_6);
  }
  else {
    FontPrintJapanese_unk2
              ((double)lVar2,(double)(longlong)param_3,param_1,TexInfo,lVar2,param_4,param_5,param_6
              );
  }
  return;
}


// 0x007100c (0xa8 bytes)
void FontPrintOpt(float param_1,FontWindow *param_2,u32 param_3,const char *param_4,int param_5)

{
  if (g_JapaneseMode) {
    FontPrintOptJapanese
              (param_1,param_2,param_3,param_4,*(undefined4 *)(TexInfo + 4),&JapaneseGlyphs);
  }
  else {
    FontPrintOptWestern(param_1,param_2,param_3,param_4,*(undefined4 *)(TexInfo + 8),&Glyphs);
  }
  return;
}


// 0x00710b8 (0xb4 bytes)
void FontPrintOptLarge
               (undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  if (g_JapaneseMode) {
    FontPrintOptJapanese
              (0x3ff0000000000000,param_1,param_2,param_3,param_4,*(undefined4 *)(TexInfo + 4),
               &JapaneseGlyphs);
  }
  else {
    FontPrintOptWestern(param_1,param_2,param_3,param_4,*(undefined4 *)(TexInfo + 0xc),
                        &LargeWesternGlyphs);
  }
  return;
}


// 0x007116c (0x4 bytes)
void STUB_0007116c(...)

{
  return;
}


// 0x0071170 (0x4 bytes)
void STUB_00071170(...)

{
  return;
}


// 0x0071180 (0x940 bytes)
void SetScreenResolution
               (double param_1,uint param_2,uint param_3,undefined8 param_4,undefined8 param_5,
               RsxCmd param_6)

{
  longlong lVar1;
  int iVar2;
  RsxCmd RVar3;
  RsxCmd RVar4;
  uint uVar5;
  undefined4 uVar6;
  ulonglong *puVar7;
  RsxCmd RVar8;
  int iVar9;
  RenderingStep *pRVar10;
  RenderingStep *pRVar11;
  int iVar12;
  undefined8 uVar13;
  ulonglong uVar14;
  RsxCmd RVar15;
  longlong lVar16;
  RsxCmd *pRVar17;
  ulonglong unaff_r23;
  ulonglong unaff_r24;
  ulonglong unaff_r25;
  ulonglong unaff_r26;
  ulonglong unaff_r27;
  ulonglong unaff_r28;
  ulonglong unaff_r29;
  RsxCmd *pRVar18;
  ulonglong unaff_r30;
  ulonglong unaff_r31;
  ulonglong in_LR;
  longlong lVar19;
  longlong lVar20;
  double dVar21;
  double dVar22;
  ulonglong in_f31;
  GPiece<16> auVar23;
  GPiece<16> auVar24;
  GPiece<16> auVar25;
  GPiece<16> auVar26;
  GPiece<16> auVar27;
  
  uVar14 = ZEXT48(&stack0x00000000);
  lVar1 = uVar14 - 0x140;
  puVar7 = (ulonglong *)lVar1;
  *puVar7 = uVar14;
  puVar7[0x2a] = in_LR;
  puVar7[0x27] = in_f31;
  *(uint *)(puVar7 + 0x18) = param_3;
  *(uint *)((int)puVar7 + 0xc4) = param_3;
  puVar7[0x26] = unaff_r31;
  *(uint *)(puVar7 + 0x19) = param_3;
  puVar7[0x25] = unaff_r30;
  *(uint *)((int)puVar7 + 0xcc) = param_3;
  puVar7[0x22] = unaff_r27;
  RVar4 = 1 << (param_3 & 0x3f);
  puVar7[0x24] = unaff_r29;
  auVar26 = ZEXT416(1);
  auVar26 = auVar26 | auVar26 << 0x20 | auVar26 << 0x40 | auVar26 << 0x60;
  puVar7[0x21] = unaff_r26;
  puVar7[0x20] = unaff_r25;
  uVar5 = 1 << (param_2 & 0x3f);
  puVar7[0x23] = unaff_r28;
  auVar27 = *(undefined1 (*) [16])(puVar7 + 0x18);
  g_ScreenHalfHeight = (int)RVar4 >> 1;
  *(uint *)(puVar7 + 0x18) = param_2;
  uVar13 = 0xc0;
  *(uint *)((int)puVar7 + 0xc4) = param_2;
  *(uint *)(puVar7 + 0x19) = param_2;
  *(uint *)((int)puVar7 + 0xcc) = param_2;
  iVar9 = g_ScreenHalfHeight * 0x10;
  auVar27 = vectorShiftLeftIntegerWord(auVar26,auVar27);
  SCREEN_PROJECTION_MAP_Y = (undefined4)((0x800U - (longlong)g_ScreenHalfHeight & 0xffffffff) << 4);
  g_ScreenHalfWidth = (int)uVar5 >> 1;
  FLOAT_0095d1c8 = 1.0;
  auVar26 = vectorShiftLeftIntegerWord(auVar26,*(undefined1 (*) [16])(puVar7 + 0x18));
  puVar7[0x1f] = unaff_r24;
  SCREEN_PROJECTION_MAP_X = (undefined4)((0x800U - (longlong)g_ScreenHalfWidth & 0xffffffff) << 4);
  DAT_00966b18 = g_ScreenHalfWidth * 0x10 + 0x8000;
  g_ScreenWidth = uVar5;
  g_ScreenHeight = RVar4;
  puVar7[0x1e] = unaff_r23;
  DAT_00966b1c = iVar9 + 0x8000;
  g_ViewContext.nearClip = 32.0;
  g_ViewContext.farClip = 524288.0;
  g_ViewContext.xratio = (float)param_1;
  dVar21 = (double)FastIntToDouble();
  dVar22 = 0.5;
  g_ViewContext.xpix = (float)(dVar21 * 0.5);
  dVar21 = (double)FastIntToDouble(RVar4);
  g_ViewContext.ypix = (float)(dVar21 * dVar22);
  g_ViewContext.fogNearDist = 0.0;
  g_ViewContext.xclip = g_ViewContext.xpix * 4.0;
  g_ViewContext.yclip = g_ViewContext.ypix * 4.0;
  g_ViewContext.fogFarDist = 524288.0;
  g_ViewContext.fogNearIntensity = 255.0;
  g_ViewContext.fogFarIntensity = 0.0;
  UpdateViewContext();
  UploadViewMatricesToPasses();
  iVar12 = g_pIdolDraw;
  DAT_00966b8c = (undefined2)uVar5;
  DAT_00966b8e = (undefined2)RVar4;
  lVar19 = 3;
  *(int *)(g_pIdolDraw + 0x22d8) = *(int *)(g_pIdolDraw + 0x22d8) + 1;
  *(undefined4 *)(puVar7 + 0x10) = 0;
  *(undefined4 *)((int)puVar7 + 0x84) = 0;
  *(undefined4 *)((int)puVar7 + 0x8c) = 0;
  *(undefined4 *)(puVar7 + 0x12) = 0;
  *(undefined4 *)((int)puVar7 + 0x94) = 0;
  *(undefined4 *)((int)puVar7 + 0x9c) = 0;
  *(undefined4 *)(puVar7 + 0x14) = 0;
  *(undefined4 *)((int)puVar7 + 0xa4) = 0;
  *(undefined4 *)(puVar7 + 0x15) = 0;
  *(undefined4 *)((int)puVar7 + 0xac) = 0;
  *(undefined4 *)(puVar7 + 0x16) = 0;
  *(undefined4 *)((int)puVar7 + 0xb4) = 0;
  *(undefined4 *)(puVar7 + 0x17) = 0;
  *(undefined1 *)((int)puVar7 + 0x82) = 8;
  *(undefined1 *)((int)puVar7 + 0x83) = 1;
  *(undefined1 *)((int)puVar7 + 0x84) = 0;
  iVar9 = *(int *)(iVar12 + 0x2288);
  iVar2 = *(int *)(iVar12 + 0x4ac);
  RVar15 = (RsxCmd)(((ulonglong)uVar5 & 0x3fffffff) << 2);
  *(RsxCmd *)(puVar7 + 0x13) = RVar15;
  *(int *)(puVar7 + 0x11) = iVar9 - iVar2;
  lVar16 = lVar1;
  lVar20 = lVar1;
  do {
    *(undefined1 *)((int)lVar20 + 0x85) = 0;
    *(undefined4 *)((int)lVar16 + 0x8c) = 0;
    *(undefined4 *)((int)lVar16 + 0x9c) = 0x40;
    pRVar10 = HUD_Pass;
    lVar19 = lVar19 + -1;
    lVar16 = lVar16 + 4;
    lVar20 = lVar20 + 1;
  } while (lVar19 != 0);
  RVar3 = *(RsxCmd *)(puVar7 + 0x11);
  DAT_0095ee24 = 0x30303;
  DAT_0095ee20 = 0x1a529;
  DAT_0095ee38 = RVar15 | NV4097_SET_OBJECT_x4;
  DAT_0095ee28 = 0x80010000;
  RVar8 = uVar5 << 0x10;
  DAT_0095ee2c = 0xaae4;
  DAT_0095ee3c = 0;
  DAT_0095ee34 = RVar8 | RVar4;
  DAT_0095ee30 = 0x2062000;
  DAT_0095ee3d = 0xff;
  DAT_0095ee1c = RVar3;
  *HUD_Pass->command = NV4097_SET_CONTEXT_DMA_COLOR_A_x1;
  pRVar10->command[1] = *(byte *)((int)puVar7 + 0x84) + 0xfeed0000;
  pRVar18 = pRVar10->command;
  pRVar10->command = pRVar18 + 2;
  pRVar18[2] = NV4097_SET_CONTEXT_DMA_COLOR_B_x1;
  pRVar10->command[1] = *(byte *)((int)puVar7 + 0x85) + 0xfeed0000;
  pRVar18 = pRVar10->command;
  pRVar10->command = pRVar18 + 2;
  pRVar18[2] = NV4097_SET_CONTEXT_DMA_COLOR_C_x2;
  pRVar10->command[1] = *(byte *)((int)puVar7 + 0x86) + 0xfeed0000;
  pRVar10->command[2] = *(byte *)((int)puVar7 + 0x87) + 0xfeed0000;
  pRVar18 = pRVar10->command;
  pRVar10->command = pRVar18 + 3;
  pRVar18[3] = NV4097_SET_CONTEXT_DMA_ZETA_x1;
  pRVar10->command[1] = 0xfeed0000;
  pRVar18 = pRVar10->command;
  pRVar10->command = pRVar18 + 2;
  pRVar18[2] = (RsxCmd)&DAT_00180208;
  pRVar10->command[1] =
       (RsxCmd)((0x1fU - LZCOUNT(uVar5 & 0xffff) & 0xffffffff) << 0x10) |
       *(byte *)((int)puVar7 + 0x82) | 0x140 |
       (RsxCmd)((0x1fU - LZCOUNT(RVar4 & 0xffff) & 0xffffffff) << 0x18);
  pRVar10->command[2] = *(RsxCmd *)(puVar7 + 0x13);
  pRVar10->command[3] = RVar3;
  pRVar10->command[4] = (iVar9 + RVar4 * uVar5 * 4) - iVar2;
  pRVar10->command[5] = *(RsxCmd *)((int)puVar7 + 0x8c);
  pRVar10->command[6] = *(RsxCmd *)((int)puVar7 + 0x9c);
  pRVar18 = pRVar10->command;
  pRVar10->command = pRVar18 + 7;
  pRVar18[7] = NV4097_SET_SURFACE_PITCH_Z_x1;
  pRVar10->command[1] = RVar15;
  pRVar18 = pRVar10->command;
  pRVar10->command = pRVar18 + 2;
  pRVar18[2] = NV4097_SET_SURFACE_PITCH_C_x4;
  pRVar10->command[1] = *(RsxCmd *)(puVar7 + 0x14);
  pRVar10->command[2] = *(RsxCmd *)((int)puVar7 + 0xa4);
  pRVar10->command[3] = *(RsxCmd *)(puVar7 + 0x12);
  pRVar10->command[4] = *(RsxCmd *)((int)puVar7 + 0x94);
  pRVar18 = pRVar10->command;
  pRVar10->command = pRVar18 + 5;
  pRVar18[5] = NV4097_SET_SURFACE_COLOR_TARGET_x1;
  pRVar10->command[1] = (uint)*(byte *)((int)puVar7 + 0x83);
  pRVar18 = pRVar10->command;
  pRVar10->command = pRVar18 + 2;
  pRVar18[2] = NV4097_SET_WINDOW_OFFSET_x1;
  pRVar10->command[1] = 0;
  pRVar18 = pRVar10->command;
  pRVar10->command = pRVar18 + 2;
  pRVar18[2] = NV4097_SET_SURFACE_CLIP_HORIZONTAL_x2;
  pRVar10->command[1] = uVar5 << 0x10;
  pRVar10->command[2] = RVar4 << 0x10;
  pRVar18 = pRVar10->command;
  pRVar10->command = pRVar18 + 3;
  pRVar18[3] = NV4097_SET_SHADER_WINDOW_x1;
  pRVar10->command[1] = (RVar4 & 0xffff) - (RVar4 >> 0xc & 1) | 0x1000;
  pRVar10->command = pRVar10->command + 2;
  pRVar10 = HUD_Pass;
  *HUD_Pass->command = NV4097_SET_COLOR_CLEAR_VALUE_x1;
  pRVar10->command[1] = param_6;
  pRVar10->command = pRVar10->command + 2;
  pRVar10 = HUD_Pass;
  auVar23 = vectorConvertFromUnsignedFixedPointWord(auVar26,0);
  auVar26 = ZEXT416(0xffffffff);
  auVar24 = auVar26 | auVar26 << 0x20 | auVar26 << 0x40 | auVar26 << 0x60;
  auVar25 = vectorConvertFromUnsignedFixedPointWord(auVar27,0);
  *HUD_Pass->command = NV4097_SET_ZSTENCIL_CLEAR_VALUE_x1;
  pRVar10->command[1] = 0xffffff00;
  pRVar10->command = pRVar10->command + 2;
  pRVar10 = HUD_Pass;
  auVar26 = ZEXT416(0xffffffff);
  auVar26 = auVar26 | auVar26 << 0x20 | auVar26 << 0x40 | auVar26 << 0x60;
  auVar27 = vectorShiftLeftIntegerWord(auVar24,auVar24);
  auVar24 = vectorShiftLeftIntegerWord(auVar26,auVar26);
  *HUD_Pass->command = NV4097_SET_DEPTH_MASK_x1;
  pRVar10->command[1] = 1;
  pRVar10->command = pRVar10->command + 2;
  pRVar10 = HUD_Pass;
  *HUD_Pass->command = NV4097_SET_DEPTH_TEST_ENABLE_x1;
  pRVar10->command[1] = 1;
  pRVar10->command = pRVar10->command + 2;
  pRVar10 = HUD_Pass;
  *HUD_Pass->command = NV4097_SET_BLEND_ENABLE_x1;
  pRVar10->command[1] = 1;
  pRVar10->command = pRVar10->command + 2;
  pRVar10 = HUD_Pass;
  *HUD_Pass->command = NV4097_INVALIDATE_L2_x1;
  pRVar10->command[1] = 1;
  pRVar10->command = pRVar10->command + 2;
  auVar26 = loadVectorLeftIndexed(uVar13,0x71174);
  auVar26 = auVar26 >> 0x60 & (GPiece<16>)0xffffffff;
  auVar26 = auVar26 | auVar26 << 0x20 | auVar26 << 0x40 | auVar26 << 0x60;
  auVar23 = vectorMultiplyAddFloatingPoint(auVar23,auVar26,auVar27);
  auVar27 = vectorMultiplyAddFloatingPoint(auVar25,auVar26,auVar24);
  auVar26 = ZEXT416(0xffffffff);
  auVar26 = auVar26 | auVar26 << 0x20 | auVar26 << 0x40 | auVar26 << 0x60;
  auVar24 = vectorShiftLeftIntegerWord(auVar26,auVar26);
  auVar26 = auVar23 >> 0x60 & (GPiece<16>)0xffffffff;
  auVar23 = auVar26 | auVar26 << 0x20 | auVar26 << 0x40 | auVar26 << 0x60;
  auVar26 = auVar27 >> 0x60 & (GPiece<16>)0xffffffff;
  auVar27 = auVar26 | auVar26 << 0x20 | auVar26 << 0x40 | auVar26 << 0x60;
  uVar6 = storeVectorElementWordIndexed(auVar23,0x70,lVar1);
  *(undefined4 *)(puVar7 + 0xe) = uVar6;
  uVar6 = storeVectorElementWordIndexed(auVar27,0x74,lVar1);
  *(undefined4 *)((int)puVar7 + 0x74) = uVar6;
  uVar6 = storeVectorElementWordIndexed(auVar23,0x78,lVar1);
  *(undefined4 *)(puVar7 + 0xf) = uVar6;
  pRVar10 = HUD_Pass;
  auVar26 = loadVectorLeftIndexed(8,0x71174);
  auVar26 = auVar26 >> 0x60 & (GPiece<16>)0xffffffff;
  lVar20 = 2;
  auVar26 = vectorMultiplyAddFloatingPoint
                      (auVar25,auVar26 | auVar26 << 0x20 | auVar26 << 0x40 | auVar26 << 0x60,auVar24
                      );
  lVar16 = uVar14 - 0xd0;
  auVar26 = auVar26 >> 0x60 & (GPiece<16>)0xffffffff;
  auVar26 = auVar26 | auVar26 << 0x20 | auVar26 << 0x40 | auVar26 << 0x60;
  uVar6 = storeVectorElementWordIndexed(auVar26,0x7c,lVar1);
  *(undefined4 *)((int)puVar7 + 0x7c) = uVar6;
  *pRVar10->command = NV4097_SET_TRANSFORM_CONSTANT_LOAD_x5;
  pRVar10->command[1] = 0x12;
  pRVar18 = pRVar10->command + 2;
  pRVar10->command = pRVar18;
  do {
    pRVar17 = (RsxCmd *)lVar16;
    *pRVar18 = *pRVar17;
    pRVar18 = pRVar10->command;
    pRVar10->command = pRVar18 + 1;
    lVar16 = lVar16 + 8;
    pRVar18[1] = pRVar17[1];
    pRVar18 = pRVar10->command + 1;
    pRVar10->command = pRVar18;
    pRVar11 = HUD_Pass;
    lVar20 = lVar20 + -1;
  } while (lVar20 != 0);
  *HUD_Pass->command = (RsxCmd)&DAT_00080a00;
  pRVar11->command[1] = RVar8;
  pRVar11->command[2] = RVar4 << 0x10;
  pRVar18 = pRVar11->command;
  pRVar11->command = pRVar18 + 3;
  pRVar18[3] = NV4097_SET_CLIP_MIN_x2;
  pRVar11->command[1] = 0;
  pRVar11->command[2] = 0x3f800000;
  pRVar18 = pRVar11->command;
  pRVar11->command = pRVar18 + 3;
  pRVar18[3] = NV4097_SET_VIEWPORT_OFFSET_x8;
  uVar6 = storeVectorElementWordIndexed(auVar23,4,ZEXT48(pRVar11->command));
  *(undefined4 *)((uint)(pRVar11->command + 1) & 0xfffffffc) = uVar6;
  uVar6 = storeVectorElementWordIndexed(auVar27,8,ZEXT48(pRVar11->command));
  *(undefined4 *)((uint)(pRVar11->command + 2) & 0xfffffffc) = uVar6;
  pRVar11->command[3] = 0x3f000000;
  pRVar11->command[4] = 0;
  uVar6 = storeVectorElementWordIndexed(auVar23,0x14,ZEXT48(pRVar11->command));
  *(undefined4 *)((uint)(pRVar11->command + 5) & 0xfffffffc) = uVar6;
  uVar6 = storeVectorElementWordIndexed(auVar26,0x18,ZEXT48(pRVar11->command));
  *(undefined4 *)((uint)(pRVar11->command + 6) & 0xfffffffc) = uVar6;
  pRVar11->command[7] = 0x3f000000;
  pRVar11->command[8] = 0;
  pRVar18 = pRVar11->command;
  pRVar11->command = pRVar18 + 9;
  pRVar18[9] = NV4097_SET_VIEWPORT_OFFSET_x8;
  uVar6 = storeVectorElementWordIndexed(auVar23,4,ZEXT48(pRVar11->command));
  *(undefined4 *)((uint)(pRVar11->command + 1) & 0xfffffffc) = uVar6;
  uVar6 = storeVectorElementWordIndexed(auVar27,8,ZEXT48(pRVar11->command));
  *(undefined4 *)((uint)(pRVar11->command + 2) & 0xfffffffc) = uVar6;
  pRVar11->command[3] = 0x3f000000;
  pRVar11->command[4] = 0;
  uVar6 = storeVectorElementWordIndexed(auVar23,0x14,ZEXT48(pRVar11->command));
  *(undefined4 *)((uint)(pRVar11->command + 5) & 0xfffffffc) = uVar6;
  uVar6 = storeVectorElementWordIndexed(auVar26,0x18,ZEXT48(pRVar11->command));
  *(undefined4 *)((uint)(pRVar11->command + 6) & 0xfffffffc) = uVar6;
  pRVar11->command[7] = 0x3f000000;
  pRVar11->command[8] = 0;
  pRVar11->command = pRVar11->command + 9;
  pRVar10 = HUD_Pass;
  *HUD_Pass->command = NV4097_SET_SCISSOR_HORIZONTAL_x2;
  pRVar10->command[1] = RVar8;
  pRVar10->command[2] = RVar4 << 0x10;
  pRVar10->command = pRVar10->command + 3;
  idol_draw::BindVertexProgram(iVar12,HUD_Pass,0xc);
  idol_draw::BindFragmentProgram(iVar12,HUD_Pass,0xc);
  pRVar10 = HUD_Pass;
  *HUD_Pass->command = NV4097_CLEAR_SURFACE_x1;
  pRVar10->command[1] = 0xf3;
  pRVar18 = pRVar10->command;
  pRVar10->command = pRVar18 + 2;
  pRVar18[2] = NV4097_NO_OPERATION_x1;
  pRVar10->command[1] = 0;
  pRVar10->command = pRVar10->command + 2;
  uVar13 = FUN_00502f98(0,0,0,0,0,0,1,1);
  SetGSReg(0x16,uVar13);
  uVar13 = idol_draw::PackCmd(0,1,0,1,0x80);
  SetGSReg(3,uVar13);
  return;
}


// 0x0071ac0 (0x4b0 bytes)
void ResetHUDPass(void)

{
  ushort uVar1;
  ushort uVar2;
  RsxCmd *pRVar3;
  int iVar4;
  int iVar5;
  RenderingStep *pRVar6;
  int *piVar7;
  
  STUB_000780fc();
  InitViewContext();
  UpdateViewContext();
  piVar7 = g_pIdolDraw;
  pRVar6 = HUD_Pass;
  pRVar3 = HUD_Pass->command;
  g_pIdolDraw[0x8b6] = g_pIdolDraw[0x8b6] + -1;
  *pRVar3 = NV4097_SET_CONTEXT_DMA_COLOR_A_x1;
  pRVar6->command[1] = *(byte *)(piVar7 + 0x6fa) + 0xfeed0000;
  pRVar3 = pRVar6->command;
  pRVar6->command = pRVar3 + 2;
  pRVar3[2] = NV4097_SET_CONTEXT_DMA_COLOR_B_x1;
  pRVar6->command[1] = *(byte *)((int)piVar7 + 0x1be9) + 0xfeed0000;
  pRVar3 = pRVar6->command;
  pRVar6->command = pRVar3 + 2;
  pRVar3[2] = NV4097_SET_CONTEXT_DMA_COLOR_C_x2;
  pRVar6->command[1] = *(byte *)((int)piVar7 + 0x1bea) + 0xfeed0000;
  pRVar6->command[2] = *(byte *)((int)piVar7 + 0x1beb) + 0xfeed0000;
  pRVar3 = pRVar6->command;
  pRVar6->command = pRVar3 + 3;
  pRVar3[3] = NV4097_SET_CONTEXT_DMA_ZETA_x1;
  pRVar6->command[1] = *(byte *)((int)piVar7 + 0x1c0d) + 0xfeed0000;
  pRVar3 = pRVar6->command;
  pRVar6->command = pRVar3 + 2;
  uVar1 = *(ushort *)(piVar7 + 0x706);
  uVar2 = *(ushort *)((int)piVar7 + 0x1c1a);
  pRVar3[2] = (RsxCmd)&DAT_00180208;
  pRVar6->command[1] =
       (uint)*(byte *)((int)piVar7 + 0x1be6) | (uint)*(byte *)(piVar7 + 0x703) << 5 |
       (uint)*(byte *)(piVar7 + 0x6f9) << 8 | (uint)*(byte *)((int)piVar7 + 0x1be5) << 0xc |
       (RsxCmd)((0x1fU - LZCOUNT((uint)uVar1) & 0xffffffff) << 0x10) |
       (RsxCmd)((0x1fU - LZCOUNT((uint)uVar2) & 0xffffffff) << 0x18);
  pRVar6->command[2] = piVar7[0x6ff];
  pRVar6->command[3] = piVar7[0x6fb];
  pRVar6->command[4] = piVar7[0x704];
  pRVar6->command[5] = piVar7[0x6fc];
  pRVar6->command[6] = piVar7[0x700];
  pRVar3 = pRVar6->command;
  pRVar6->command = pRVar3 + 7;
  pRVar3[7] = NV4097_SET_SURFACE_PITCH_Z_x1;
  pRVar6->command[1] = piVar7[0x705];
  pRVar3 = pRVar6->command;
  pRVar6->command = pRVar3 + 2;
  pRVar3[2] = NV4097_SET_SURFACE_PITCH_C_x4;
  pRVar6->command[1] = piVar7[0x701];
  pRVar6->command[2] = piVar7[0x702];
  pRVar6->command[3] = piVar7[0x6fd];
  pRVar6->command[4] = piVar7[0x6fe];
  pRVar3 = pRVar6->command;
  pRVar6->command = pRVar3 + 5;
  pRVar3[5] = NV4097_SET_SURFACE_COLOR_TARGET_x1;
  pRVar6->command[1] = (uint)*(byte *)((int)piVar7 + 0x1be7);
  pRVar3 = pRVar6->command;
  pRVar6->command = pRVar3 + 2;
  pRVar3[2] = NV4097_SET_WINDOW_OFFSET_x1;
  pRVar6->command[1] =
       CONCAT22(*(undefined2 *)((int)piVar7 + 0x1c1e),*(undefined2 *)(piVar7 + 0x707));
  pRVar3 = pRVar6->command;
  pRVar6->command = pRVar3 + 2;
  pRVar3[2] = NV4097_SET_SURFACE_CLIP_HORIZONTAL_x2;
  pRVar6->command[1] = CONCAT22(*(undefined2 *)(piVar7 + 0x706),*(undefined2 *)(piVar7 + 0x707));
  pRVar6->command[2] =
       CONCAT22(*(undefined2 *)((int)piVar7 + 0x1c1a),*(undefined2 *)((int)piVar7 + 0x1c1e));
  pRVar3 = pRVar6->command;
  pRVar6->command = pRVar3 + 3;
  pRVar3[3] = NV4097_SET_SHADER_WINDOW_x1;
  pRVar6->command[1] =
       (uint)*(ushort *)((int)piVar7 + 0x1c1a) - (*(ushort *)((int)piVar7 + 0x1c1a) >> 0xc & 1) |
       0x1000;
  pRVar6->command = pRVar6->command + 2;
  FUN_004d86b0(piVar7);
  idol_draw::BindVertexProgram(piVar7,HUD_Pass,0xc);
  idol_draw::BindFragmentProgram(piVar7,HUD_Pass,0xc);
  pRVar6 = HUD_Pass;
  *HUD_Pass->command = NV4097_SET_DEPTH_MASK_x1;
  pRVar6->command[1] = 0;
  pRVar6->command = pRVar6->command + 2;
  pRVar6 = HUD_Pass;
  *HUD_Pass->command = NV4097_SET_DEPTH_TEST_ENABLE_x1;
  pRVar6->command[1] = 0;
  pRVar6->command = pRVar6->command + 2;
  pRVar6 = HUD_Pass;
  *HUD_Pass->command = NV4097_SET_BLEND_ENABLE_x1;
  pRVar6->command[1] = 1;
  pRVar6->command = pRVar6->command + 2;
  pRVar6 = HUD_Pass;
  *HUD_Pass->command = NV4097_SET_BLEND_EQUATION_x1;
  pRVar6->command[1] = 0x80068006;
  pRVar6->command = pRVar6->command + 2;
  pRVar6 = HUD_Pass;
  *HUD_Pass->command = NV4097_SET_BLEND_FUNC_SFACTOR_x2;
  pRVar6->command[1] = 0x3020302;
  pRVar6->command[2] = 0x3030303;
  pRVar6->command = pRVar6->command + 3;
  pRVar6 = HUD_Pass;
  *HUD_Pass->command = NV4097_SET_ALPHA_TEST_ENABLE_x1;
  pRVar6->command[1] = 0;
  iVar4 = piVar7[1];
  iVar5 = piVar7[2];
  pRVar6->command = pRVar6->command + 2;
  (*(code *)**(undefined4 **)(*piVar7 + 0x10))(piVar7,HUD_Pass,iVar4,iVar5);
  pRVar6 = HUD_Pass;
  memset(HUD_Pass + 1,0,0x90);
  memset(&pRVar6[8].command,0xff,0x48);
  pRVar6[9].field7_0x10 = 0;
  pRVar6[9].callback = (undefined *)0x0;
  ComposeCameraMatrix();
  return;
}


// 0x0071f70 (0x130 bytes)
void ____Draw_FogBlendPass(void)

{
  undefined8 uVar1;
  
  if (g_EffectTableCnt != 0) {
    uVar1 = SCE_GS_SET_CLAMP(1,1,0,0,0,0);
    SetGSReg(6,uVar1);
    uVar1 = SCE_GS_SET_TEX1(1,0,1,1,0,0,0);
    SetGSReg(0x1a,uVar1);
    uVar1 = idol_draw::Blend(1,0,0x3f,1,0,0,1,2);
    SetGSReg(0x16,uVar1);
    uVar1 = FUN_0050302c(1);
    SetGSReg(8,uVar1);
    STUB_00074cec();
    DAT_0095cd40 = 0xbd23d70a;
    STUB_00074ce8();
    DAT_0095cd40 = 0;
    uVar1 = FUN_0050302c(0);
    SetGSReg(8,uVar1);
  }
  return;
}


// 0x00720a0 (0x88 bytes)
void InitAlphaPal(void)

{
  uint uVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  
  uVar2 = 0;
  do {
    uVar1 = (uint)uVar2;
    uVar3 = uVar2 & 0xe7 | 0x10;
    uVar3 = uVar3 + (ZERO_MASK((uVar1 & 8)) & (uVar2 & 0xe7) - uVar3);
    uVar4 = uVar3 | 8;
    uVar2 = (ulonglong)(int)(uVar1 + 1);
    *(int *)(&DAT_0095ea14 +
            (int)((uVar4 + (ZERO_MASK((uVar1 & 0x10)) & uVar3 - uVar4) & 0xffffffff
                  ) << 2)) = ((int)uVar1 >> 1) << 0x18;
  } while ((int)(uVar1 + 1) < 0x100);
  return;
}


// 0x0072128 (0xd4 bytes)
void InitScreenEffects(void)

{
  DAT_0071f004 = 0x10000;
  DAT_0071eed8 = idol_draw::PackCmd(2,0,0,1,0x1f);
  DAT_0071eee8 = idol_draw::PackCmd(2,0,0,1,0x1f);
  DAT_0071ef08 = idol_draw::PackCmd(2,0,0,1,0x1f);
  DAT_0071ef18 = idol_draw::PackCmd(2,0,0,1,0x1f);
  ScreenColorEffectLevel = ScreenColorEffectNow;
  return;
}


// 0x0072200 (0x8 bytes)
undefined8 STUB_00072200_RET_0(...)

{
  return 0;
}


// 0x0072208 (0x4 bytes)
void STUB_00072208(...)

{
  return;
}


// 0x007220c (0x8 bytes)
undefined8 STUB_0007220c_RET_0(...)

{
  return 0;
}


// 0x0072214 (0x8 bytes)
undefined8 STUB_00072214_RET_0(...)

{
  return 0;
}


// 0x007221c (0x4 bytes)
void STUB_0007221c(...)

{
  return;
}


// 0x0072220 (0x8 bytes)
undefined8 STUB_00072220_RET_0(...)

{
  return 0;
}


// 0x0072230 (0x10 bytes)
undefined8 STUB_00072230_RET_0(...)

{
  return 0;
}


// 0x0072280 (0x508 bytes)
void FastDrawQuad(undefined4 *param_1,uint param_2,undefined8 param_3,longlong param_4,
                       ulonglong param_5)

{
  int iVar1;
  RenderingStep *pRVar2;
  undefined4 *puVar3;
  RsxCmd RVar4;
  RsxCmd *pRVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  uint uVar8;
  undefined4 *puVar9;
  undefined4 *puVar10;
  RsxCmd *pRVar11;
  undefined4 *puVar12;
  RsxCmd *pRVar13;
  longlong lVar14;
  GPiece<16> auVar15;
  GPiece<16> auVar16;
  GPiece<16> auVar17;
  GPiece<16> auVar18;
  GPiece<16> auVar19;
  RsxCmd local_d0 [16];
  RsxCmd local_90 [16];
  undefined4 local_50;
  undefined4 local_4c [3];
  
  iVar1 = g_pIdolDraw;
  pRVar2 = *(RenderingStep **)((int)&DepthPass + ((uint)((param_5 & 0xffffffff) << 2) & 0x3c));
  idol_draw::BindVertexProgram(g_pIdolDraw,pRVar2,5);
  idol_draw::BindFragmentProgram(iVar1,pRVar2,6);
  puVar6 = (undefined4 *)idol::AllocateMemAlign(FrameHeap,0x60,0x10);
  lVar14 = 4;
  puVar12 = param_1;
  puVar9 = param_1;
  puVar10 = param_1;
  puVar7 = puVar6;
  do {
    *puVar7 = *puVar12;
    puVar7[1] = puVar12[1];
    puVar3 = puVar12 + 2;
    puVar12 = puVar12 + 4;
    puVar7[2] = *puVar3;
    puVar7[3] = puVar9[0x14];
    puVar3 = puVar9 + 0x15;
    puVar9 = puVar9 + 2;
    puVar7[4] = *puVar3;
    uVar8 = puVar10[0x10];
    puVar10 = puVar10 + 1;
    puVar7[5] = uVar8 >> 0x18 | uVar8 >> 8 & 0xff00 | uVar8 << 0x18 | (uVar8 & 0xff00) << 8;
    puVar7 = puVar7 + 6;
    lVar14 = lVar14 + -1;
  } while (lVar14 != 0);
  if (*(longlong *)(param_1 + 0x22) != 0) {
    idol_draw::DrawDepth(pRVar2,*(longlong *)(param_1 + 0x22));
  }
  FUN_004d6704(*(undefined8 *)(param_1 + 0x1c),&local_50,local_4c);
  FUN_004d676c(pRVar2,0,param_4 + *(longlong *)(param_1 + 0x1e) * 0x24 & 0xffffffff,local_50,
               local_4c[0]);
  idol_draw::ResetPassState(pRVar2);
  *pRVar2->command = NV4097_SET_VERTEX_DATA_ARRAY_FORMAT_x1;
  pRVar2->command[1] = 0x1832;
  pRVar11 = pRVar2->command;
  pRVar2->command = pRVar11 + 2;
  pRVar11[2] = 0x41744;
  pRVar2->command[1] = 0x1822;
  pRVar11 = pRVar2->command;
  pRVar2->command = pRVar11 + 2;
  pRVar11[2] = 0x4174c;
  pRVar2->command[1] = 0x1844;
  pRVar11 = pRVar2->command;
  pRVar2->command = pRVar11 + 2;
  iVar1 = *(int *)(iVar1 + 0x4a8);
  pRVar11[2] = NV4097_SET_VERTEX_DATA_ARRAY_OFFSET_x1;
  RVar4 = (int)puVar6 - iVar1;
  pRVar2->command[1] = RVar4 | 0x80000000;
  pRVar11 = pRVar2->command;
  pRVar2->command = pRVar11 + 2;
  pRVar11[2] = 0x41684;
  pRVar2->command[1] = RVar4 + 0xc | 0x80000000;
  pRVar11 = pRVar2->command;
  pRVar2->command = pRVar11 + 2;
  pRVar11[2] = 0x4168c;
  pRVar2->command[1] = RVar4 + 0x14 | 0x80000000;
  pRVar11 = pRVar2->command;
  pRVar2->command = pRVar11 + 2;
  if (param_2 == 0) {
    pRVar13 = local_90;
    pRVar11[2] = 0x441efc;
    lVar14 = 8;
    pRVar2->command[1] = 4;
    pRVar11 = pRVar2->command + 2;
    pRVar2->command = pRVar11;
    do {
      *pRVar11 = *pRVar13;
      pRVar11 = pRVar2->command;
      pRVar2->command = pRVar11 + 1;
      pRVar5 = pRVar13 + 1;
      pRVar13 = pRVar13 + 2;
      pRVar11[1] = *pRVar5;
      pRVar11 = pRVar2->command + 1;
      pRVar2->command = pRVar11;
      lVar14 = lVar14 + -1;
    } while (lVar14 != 0);
  }
  else {
    *(undefined4 *)(param_2 + 0x2c) = 0;
    *(undefined4 *)(param_2 + 0x1c) = 0;
    *(undefined4 *)(param_2 + 0xc) = 0;
    *(undefined4 *)(param_2 + 0x3c) = 0x3f800000;
    auVar15 = *(undefined1 (*) [16])(param_2 + 0x20 & 0xfffffff0);
    auVar17 = *(undefined1 (*) [16])(param_2 + 0x10 & 0xfffffff0);
    auVar18 = vectorMergeHighWord(*(undefined1 (*) [16])(param_2 & 0xfffffff0),auVar15);
    auVar19 = *(undefined1 (*) [16])(param_2 + 0x30 & 0xfffffff0);
    pRVar13 = local_d0;
    auVar15 = vectorMergeLowWord(*(undefined1 (*) [16])(param_2 & 0xfffffff0),auVar15);
    auVar16 = vectorMergeHighWord(auVar17,auVar19);
    auVar17 = vectorMergeLowWord(auVar17,auVar19);
    vectorMergeHighWord(auVar18,auVar16);
    vectorMergeLowWord(auVar18,auVar16);
    vectorMergeHighWord(auVar15,auVar17);
    vectorMergeLowWord(auVar15,auVar17);
    uVar8 = 0;
    pRVar11[2] = 0x441efc;
    pRVar2->command[1] = 4;
    pRVar11 = pRVar2->command + 2;
    pRVar2->command = pRVar11;
    do {
      uVar8 = uVar8 + 1;
      *pRVar11 = *pRVar13;
      pRVar13 = pRVar13 + 1;
      pRVar11 = pRVar2->command + 1;
      pRVar2->command = pRVar11;
    } while (uVar8 < 0x10);
  }
  *pRVar11 = 0x400c1714;
  pRVar2->command[1] = 0;
  pRVar2->command[2] = 0;
  pRVar2->command[3] = 0;
  pRVar2->command[4] = NV4097_SET_BEGIN_END_x1;
  pRVar2->command[5] = 6;
  pRVar11 = pRVar2->command;
  pRVar2->command = pRVar11 + 7;
  pRVar11[6] = 0x40041814;
  pRVar11 = pRVar2->command;
  pRVar2->command = pRVar11 + 1;
  *pRVar11 = 0x3000000;
  *pRVar2->command = NV4097_SET_BEGIN_END_x1;
  pRVar2->command[1] = 0;
  pRVar11 = pRVar2->command;
  pRVar2->command = pRVar11 + 2;
  pRVar11[2] = NV4097_SET_VERTEX_DATA_ARRAY_FORMAT_x1;
  pRVar2->command[1] = 2;
  pRVar11 = pRVar2->command;
  pRVar2->command = pRVar11 + 2;
  pRVar11[2] = 0x41744;
  pRVar2->command[1] = 2;
  pRVar11 = pRVar2->command;
  pRVar2->command = pRVar11 + 2;
  pRVar11[2] = 0x4174c;
  pRVar2->command[1] = 2;
  pRVar2->command = pRVar2->command + 2;
  return;
}


// 0x0072788 (0x4 bytes)
void STUB_00072788(...)

{
  return;
}


// 0x007278c (0x390 bytes)
void FastDrawStrip_DL(longlong param_1,int param_2)

{
  RsxCmd *pRVar1;
  RsxCmd RVar2;
  RenderingStep *pRVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  int iVar6;
  ulonglong uVar7;
  RsxCmd RVar9;
  ulonglong uVar8;
  ulonglong uVar10;
  
  iVar6 = g_pIdolDraw;
  pRVar3 = DL_Pass;
  idol_draw::BindVertexProgram(g_pIdolDraw,DL_Pass,10);
  idol_draw::BindFragmentProgram(iVar6,pRVar3,0xb);
  *pRVar3->command = NV4097_SET_VERTEX_DATA_ARRAY_FORMAT_x1;
  pRVar3->command[1] = 0x2032;
  pRVar1 = pRVar3->command;
  pRVar3->command = pRVar1 + 2;
  pRVar1[2] = 0x41744;
  pRVar3->command[1] = 0x2022;
  pRVar1 = pRVar3->command;
  pRVar3->command = pRVar1 + 2;
  pRVar1[2] = 0x41748;
  pRVar3->command[1] = 0x2022;
  pRVar1 = pRVar3->command;
  pRVar3->command = pRVar1 + 2;
  pRVar1[2] = 0x4174c;
  pRVar3->command[1] = 0x2044;
  pRVar1 = pRVar3->command;
  pRVar3->command = pRVar1 + 2;
  iVar6 = *(int *)(iVar6 + 0x4a8);
  pRVar1[2] = NV4097_SET_VERTEX_DATA_ARRAY_OFFSET_x1;
  RVar9 = param_2 - iVar6;
  pRVar3->command[1] = RVar9 | 0x80000000;
  pRVar1 = pRVar3->command;
  pRVar3->command = pRVar1 + 2;
  pRVar1[2] = 0x41684;
  pRVar3->command[1] = RVar9 + 0xc | 0x80000000;
  pRVar1 = pRVar3->command;
  pRVar3->command = pRVar1 + 2;
  pRVar1[2] = 0x41688;
  pRVar3->command[1] = RVar9 + 0x14 | 0x80000000;
  pRVar1 = pRVar3->command;
  pRVar3->command = pRVar1 + 2;
  pRVar1[2] = 0x4168c;
  pRVar3->command[1] = RVar9 + 0x1c | 0x80000000;
  pRVar1 = pRVar3->command;
  uVar10 = (param_1 - 0x100U & (longlong)((int)(param_1 - 0x100U) >> 0x1f)) + 0x100;
  pRVar3->command = pRVar1 + 2;
  pRVar1[2] = 0x400c1714;
  uVar4 = param_1 - uVar10 & ~(longlong)((int)(param_1 - uVar10) >> 0x1f);
  uVar7 = (uVar4 << 0x20) >> 0x28;
  pRVar3->command[1] = 0;
  uVar5 = uVar4 - (uVar4 & 0xffffff00);
  iVar6 = (int)uVar5;
  pRVar3->command[2] = 0;
  pRVar3->command[3] = 0;
  pRVar3->command[4] = NV4097_SET_BEGIN_END_x1;
  pRVar3->command[5] = 6;
  pRVar1 = pRVar3->command;
  pRVar1[6] = (((uint)uVar4 >> 8) + ((iVar6 != 0)) +
              (((int)uVar10 != 0))) * 0x40000 | 0x40001814;
  pRVar3->command = pRVar1 + 7;
  uVar8 = 0;
  if ((int)uVar10 != 0) {
    pRVar1 = pRVar3->command;
    pRVar3->command = pRVar1 + 1;
    *pRVar1 = (int)((uVar10 & 0xffffffff) << 0x18) - 0x1000000;
    uVar8 = uVar10;
  }
  RVar9 = (RsxCmd)uVar8;
  if ((uint)uVar4 >> 8 != 0) {
    do {
      pRVar1 = pRVar3->command;
      RVar2 = (RsxCmd)uVar8;
      uVar7 = uVar7 - 1;
      uVar8 = uVar8 + 0x100;
      RVar9 = (RsxCmd)uVar8;
      pRVar3->command = pRVar1 + 1;
      *pRVar1 = RVar2 | 0xff000000;
    } while (0 < (int)uVar7);
  }
  if (iVar6 != 0) {
    pRVar1 = pRVar3->command;
    pRVar3->command = pRVar1 + 1;
    *pRVar1 = RVar9 | (int)((uVar5 & 0xffffffff) << 0x18) - 0x1000000;
  }
  *pRVar3->command = NV4097_SET_BEGIN_END_x1;
  pRVar3->command[1] = 0;
  pRVar1 = pRVar3->command;
  pRVar3->command = pRVar1 + 2;
  pRVar1[2] = NV4097_SET_VERTEX_DATA_ARRAY_FORMAT_x1;
  pRVar3->command[1] = 2;
  pRVar1 = pRVar3->command;
  pRVar3->command = pRVar1 + 2;
  pRVar1[2] = 0x41744;
  pRVar3->command[1] = 2;
  pRVar1 = pRVar3->command;
  pRVar3->command = pRVar1 + 2;
  pRVar1[2] = 0x41748;
  pRVar3->command[1] = 2;
  pRVar1 = pRVar3->command;
  pRVar3->command = pRVar1 + 2;
  pRVar1[2] = 0x4174c;
  pRVar3->command[1] = 2;
  pRVar3->command = pRVar3->command + 2;
  return;
}


// 0x0072b1c (0x2c0 bytes)
void FastDrawStrip_DLNoState(int param_1,void *param_2)

{
  RsxCmd *pRVar1;
  RsxCmd RVar2;
  RenderingStep *pRVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  int iVar6;
  ulonglong uVar7;
  RsxCmd RVar9;
  ulonglong uVar8;
  ulonglong uVar10;
  
  iVar6 = g_pIdolDraw;
  pRVar3 = DL_Pass;
  *DL_Pass->command = NV4097_SET_VERTEX_DATA_ARRAY_FORMAT_x1;
  pRVar3->command[1] = 0x2032;
  pRVar1 = pRVar3->command;
  pRVar3->command = pRVar1 + 2;
  pRVar1[2] = 0x41744;
  pRVar3->command[1] = 0x2022;
  pRVar1 = pRVar3->command;
  pRVar3->command = pRVar1 + 2;
  pRVar1[2] = 0x4174c;
  pRVar3->command[1] = 0x2044;
  pRVar1 = pRVar3->command;
  pRVar3->command = pRVar1 + 2;
  iVar6 = *(int *)(iVar6 + 0x4a8);
  pRVar1[2] = NV4097_SET_VERTEX_DATA_ARRAY_OFFSET_x1;
  RVar9 = param_2 - iVar6;
  pRVar3->command[1] = RVar9 | 0x80000000;
  pRVar1 = pRVar3->command;
  pRVar3->command = pRVar1 + 2;
  pRVar1[2] = 0x41684;
  pRVar3->command[1] = RVar9 + 0x14 | 0x80000000;
  pRVar1 = pRVar3->command;
  pRVar3->command = pRVar1 + 2;
  pRVar1[2] = 0x4168c;
  uVar10 = (param_1 - 0x100U & (longlong)((int)(param_1 - 0x100U) >> 0x1f)) + 0x100;
  pRVar3->command[1] = RVar9 + 0x1c | 0x80000000;
  pRVar1 = pRVar3->command;
  uVar4 = param_1 - uVar10 & ~(longlong)((int)(param_1 - uVar10) >> 0x1f);
  pRVar3->command = pRVar1 + 2;
  pRVar1[2] = 0x400c1714;
  uVar7 = (uVar4 << 0x20) >> 0x28;
  uVar5 = uVar4 - (uVar4 & 0xffffff00);
  iVar6 = (int)uVar5;
  pRVar3->command[1] = 0;
  pRVar3->command[2] = 0;
  pRVar3->command[3] = 0;
  pRVar3->command[4] = NV4097_SET_BEGIN_END_x1;
  pRVar3->command[5] = 6;
  pRVar1 = pRVar3->command;
  pRVar1[6] = (((uint)uVar4 >> 8) + ((iVar6 != 0)) +
              (((int)uVar10 != 0))) * 0x40000 | 0x40001814;
  pRVar3->command = pRVar1 + 7;
  uVar8 = 0;
  if ((int)uVar10 != 0) {
    pRVar1 = pRVar3->command;
    pRVar3->command = pRVar1 + 1;
    *pRVar1 = (int)((uVar10 & 0xffffffff) << 0x18) - 0x1000000;
    uVar8 = uVar10;
  }
  RVar9 = (RsxCmd)uVar8;
  if ((uint)uVar4 >> 8 != 0) {
    do {
      pRVar1 = pRVar3->command;
      RVar2 = (RsxCmd)uVar8;
      uVar7 = uVar7 - 1;
      uVar8 = uVar8 + 0x100;
      RVar9 = (RsxCmd)uVar8;
      pRVar3->command = pRVar1 + 1;
      *pRVar1 = RVar2 | 0xff000000;
    } while (0 < (int)uVar7);
  }
  if (iVar6 != 0) {
    pRVar1 = pRVar3->command;
    pRVar3->command = pRVar1 + 1;
    *pRVar1 = RVar9 | (int)((uVar5 & 0xffffffff) << 0x18) - 0x1000000;
  }
  *pRVar3->command = NV4097_SET_BEGIN_END_x1;
  pRVar3->command[1] = 0;
  pRVar1 = pRVar3->command;
  pRVar3->command = pRVar1 + 2;
  pRVar1[2] = NV4097_SET_VERTEX_DATA_ARRAY_FORMAT_x1;
  pRVar3->command[1] = 2;
  pRVar1 = pRVar3->command;
  pRVar3->command = pRVar1 + 2;
  pRVar1[2] = 0x41744;
  pRVar3->command[1] = 2;
  pRVar1 = pRVar3->command;
  pRVar3->command = pRVar1 + 2;
  pRVar1[2] = 0x4174c;
  pRVar3->command[1] = 2;
  pRVar3->command = pRVar3->command + 2;
  return;
}


// 0x0072ddc (0x394 bytes)
void FastDrawStrip_Pass(int param_1,void *param_2,int param_3)

{
  int iVar1;
  int iVar2;
  uint *puVar3;
  int *piVar4;
  int iVar5;
  uint uVar6;
  ulonglong uVar7;
  uint uVar9;
  ulonglong uVar8;
  ulonglong uVar10;
  ulonglong uVar11;
  ulonglong uVar12;
  int iVar13;
  
  iVar2 = g_pIdolDraw;
  if (((int)param_3 == 2) || ((int)param_3 == 9)) {
    iVar1 = (int)(param_3 << 2);
    idol_draw::BindVertexProgram(g_pIdolDraw,*(undefined4 *)((int)&DepthPass + iVar1),4);
    idol_draw::BindFragmentProgram(iVar2,*(undefined4 *)((int)&DepthPass + iVar1),6);
  }
  iVar5 = (int)(param_3 << 2);
  iVar13 = *(int *)((int)&DepthPass + iVar5);
  **(undefined4 **)(iVar13 + 8) = 0x41740;
  iVar1 = *(int *)(iVar13 + 8);
  *(undefined4 *)(iVar1 + 4) = 0x2032;
  *(int *)(iVar13 + 8) = iVar1 + 8;
  iVar13 = *(int *)((int)&DepthPass + iVar5);
  **(undefined4 **)(iVar13 + 8) = 0x41744;
  iVar1 = *(int *)(iVar13 + 8);
  *(undefined4 *)(iVar1 + 4) = 0x2022;
  *(int *)(iVar13 + 8) = iVar1 + 8;
  iVar13 = *(int *)((int)&DepthPass + iVar5);
  **(undefined4 **)(iVar13 + 8) = 0x4174c;
  iVar1 = *(int *)(iVar13 + 8);
  *(undefined4 *)(iVar1 + 4) = 0x2044;
  *(int *)(iVar13 + 8) = iVar1 + 8;
  iVar1 = *(int *)((int)&DepthPass + iVar5);
  uVar9 = param_2 - *(int *)(iVar2 + 0x4a8);
  **(undefined4 **)(iVar1 + 8) = 0x41680;
  iVar2 = *(int *)(iVar1 + 8);
  *(uint *)(iVar2 + 4) = uVar9 | 0x80000000;
  *(int *)(iVar1 + 8) = iVar2 + 8;
  iVar1 = *(int *)((int)&DepthPass + iVar5);
  **(undefined4 **)(iVar1 + 8) = 0x41684;
  iVar2 = *(int *)(iVar1 + 8);
  *(uint *)(iVar2 + 4) = uVar9 + 0xc | 0x80000000;
  *(int *)(iVar1 + 8) = iVar2 + 8;
  iVar1 = *(int *)((int)&DepthPass + iVar5);
  **(undefined4 **)(iVar1 + 8) = 0x4168c;
  iVar2 = *(int *)(iVar1 + 8);
  *(uint *)(iVar2 + 4) = uVar9 + 0x1c | 0x80000000;
  *(int *)(iVar1 + 8) = iVar2 + 8;
  iVar1 = *(int *)((int)&DepthPass + iVar5);
  **(undefined4 **)(iVar1 + 8) = 0x400c1714;
  *(undefined4 *)(*(int *)(iVar1 + 8) + 4) = 0;
  uVar10 = (param_1 - 0x100U & (longlong)((int)(param_1 - 0x100U) >> 0x1f)) + 0x100;
  *(undefined4 *)(*(int *)(iVar1 + 8) + 8) = 0;
  *(undefined4 *)(*(int *)(iVar1 + 8) + 0xc) = 0;
  uVar11 = param_1 - uVar10 & ~(longlong)((int)(param_1 - uVar10) >> 0x1f);
  *(undefined4 *)(*(int *)(iVar1 + 8) + 0x10) = 0x41808;
  iVar2 = *(int *)(iVar1 + 8);
  uVar7 = (uVar11 << 0x20) >> 0x28;
  uVar12 = uVar11 - (uVar11 & 0xffffff00);
  iVar13 = (int)uVar12;
  *(undefined4 *)(iVar2 + 0x14) = 6;
  *(int *)(iVar1 + 8) = iVar2 + 0x18;
  iVar2 = *(int *)((int)&DepthPass + iVar5);
  puVar3 = *(uint **)(iVar2 + 8);
  *(uint **)(iVar2 + 8) = puVar3 + 1;
  *puVar3 = (((uint)uVar11 >> 8) + ((iVar13 != 0)) +
            (((int)uVar10 != 0))) * 0x40000 | 0x40001814;
  uVar8 = 0;
  if ((int)uVar10 != 0) {
    piVar4 = *(int **)(iVar2 + 8);
    *piVar4 = (int)((uVar10 & 0xffffffff) << 0x18) + -0x1000000;
    *(int **)(iVar2 + 8) = piVar4 + 1;
    uVar8 = uVar10;
  }
  uVar9 = (uint)uVar8;
  if ((uint)uVar11 >> 8 != 0) {
    do {
      puVar3 = *(uint **)(iVar2 + 8);
      uVar6 = (uint)uVar8;
      uVar7 = uVar7 - 1;
      uVar8 = uVar8 + 0x100;
      uVar9 = (uint)uVar8;
      *puVar3 = uVar6 | 0xff000000;
      *(uint **)(iVar2 + 8) = puVar3 + 1;
    } while (0 < (int)uVar7);
  }
  if (iVar13 != 0) {
    puVar3 = *(uint **)(iVar2 + 8);
    *puVar3 = uVar9 | (int)((uVar12 & 0xffffffff) << 0x18) - 0x1000000U;
    *(uint **)(iVar2 + 8) = puVar3 + 1;
  }
  iVar1 = *(int *)((int)&DepthPass + iVar5);
  **(undefined4 **)(iVar1 + 8) = 0x41808;
  iVar2 = *(int *)(iVar1 + 8);
  *(undefined4 *)(iVar2 + 4) = 0;
  *(int *)(iVar1 + 8) = iVar2 + 8;
  iVar1 = *(int *)((int)&DepthPass + iVar5);
  **(undefined4 **)(iVar1 + 8) = 0x41740;
  iVar2 = *(int *)(iVar1 + 8);
  *(undefined4 *)(iVar2 + 4) = 2;
  *(int *)(iVar1 + 8) = iVar2 + 8;
  iVar1 = *(int *)((int)&DepthPass + iVar5);
  **(undefined4 **)(iVar1 + 8) = 0x41744;
  iVar2 = *(int *)(iVar1 + 8);
  *(undefined4 *)(iVar2 + 4) = 2;
  *(int *)(iVar1 + 8) = iVar2 + 8;
  iVar1 = *(int *)((int)&DepthPass + iVar5);
  **(undefined4 **)(iVar1 + 8) = 0x4174c;
  iVar2 = *(int *)(iVar1 + 8);
  *(undefined4 *)(iVar2 + 4) = 2;
  *(int *)(iVar1 + 8) = iVar2 + 8;
  return;
}


// 0x00731c8 (0x4b0 bytes)
void DrawTexturedStrips(int param_1,Vec3 *param_2,u32 *param_3,Vec2 *param_4,Vec2 *param_5,int param_6,int param_7,u64 param_8)

{
  undefined4 uVar1;
  GPiece<16> auVar2;
  GPiece<16> auVar3;
  GPiece<16> auVar4;
  RsxCmd *pRVar5;
  RenderingStep *pRVar6;
  RenderingStep *pRVar7;
  int iVar8;
  longlong lVar9;
  undefined4 *puVar10;
  int iVar11;
  RsxCmd *pRVar13;
  longlong lVar12;
  RsxCmd *pRVar15;
  ulonglong uVar14;
  RsxCmd *pRVar16;
  undefined8 in_LR;
  longlong lVar17;
  GPiece<16> auVar18;
  GPiece<16> auVar19;
  GPiece<16> auVar20;
  GPiece<16> auVar21;
  GPiece<16> auVar22;
  GPiece<16> auVar23;
  GPiece<16> auVar24;
  GPiece<16> auVar25;
  GPiece<16> auVar26;
  GPiece<16> auVar27;
  GPiece<16> auVar28;
  GPiece<16> auVar29;
  GPiece<16> auVar30;
  GPiece<16> auVar31;
  GPiece<16> auVar32;
  undefined8 in_stack_00000070;
  RsxCmd local_a0 [18];
  
  lVar9 = idol::AllocateMemAlign(FrameHeap,(int)((param_1 & 0xffffffff) << 5),0x10);
  pRVar7 = DL_Pass;
  pRVar15 = local_a0;
  lVar17 = 8;
  *DL_Pass->command = 0x441efc;
  pRVar7->command[1] = 4;
  pRVar16 = pRVar7->command + 2;
  pRVar7->command = pRVar16;
  pRVar13 = pRVar15;
  do {
    *pRVar16 = *pRVar13;
    pRVar16 = pRVar7->command;
    pRVar7->command = pRVar16 + 1;
    pRVar5 = pRVar13 + 1;
    pRVar13 = pRVar13 + 2;
    pRVar16[1] = *pRVar5;
    pRVar16 = pRVar7->command + 1;
    pRVar7->command = pRVar16;
    pRVar6 = DL_DepthPass;
    lVar17 = lVar17 + -1;
  } while (lVar17 != 0);
  lVar17 = 8;
  *DL_DepthPass->command = 0x441efc;
  pRVar6->command[1] = 4;
  pRVar13 = pRVar6->command + 2;
  pRVar6->command = pRVar13;
  do {
    *pRVar13 = *pRVar15;
    pRVar13 = pRVar6->command;
    pRVar6->command = pRVar13 + 1;
    pRVar16 = pRVar15 + 1;
    pRVar15 = pRVar15 + 2;
    pRVar13[1] = *pRVar16;
    pRVar13 = pRVar6->command + 1;
    pRVar6->command = pRVar13;
    lVar17 = lVar17 + -1;
  } while (lVar17 != 0);
  if (0 < (int)param_1) {
    auVar2 = ZEXT416(0xfffffff8);
    auVar3 = ZEXT416(0xfffffff0);
    auVar4 = ZEXT416(8);
    auVar20 = loadVectorLeftIndexed(0x40,0x73170);
    auVar23 = loadVectorLeftIndexed(0x48,0x73170);
    auVar22 = loadVectorLeftIndexed(0x44,0x73170);
    auVar24 = loadVectorLeftIndexed(0x4c,0x73170);
    auVar25 = loadVectorLeftIndexed(0x50,0x73170);
    auVar20 = auVar20 >> 0x60 & (GPiece<16>)0xffffffff;
    auVar21 = auVar20 | auVar20 << 0x20 | auVar20 << 0x40 | auVar20 << 0x60;
    lVar12 = lVar9 + 0x1c;
    auVar26 = loadVectorLeftIndexed(0x54,0x73170);
    auVar20 = auVar22 >> 0x60 & (GPiece<16>)0xffffffff;
    auVar22 = auVar20 | auVar20 << 0x20 | auVar20 << 0x40 | auVar20 << 0x60;
    auVar20 = auVar23 >> 0x60 & (GPiece<16>)0xffffffff;
    auVar23 = auVar20 | auVar20 << 0x20 | auVar20 << 0x40 | auVar20 << 0x60;
    auVar20 = auVar24 >> 0x60 & (GPiece<16>)0xffffffff;
    auVar24 = auVar20 | auVar20 << 0x20 | auVar20 << 0x40 | auVar20 << 0x60;
    auVar20 = auVar25 >> 0x60 & (GPiece<16>)0xffffffff;
    auVar25 = auVar20 | auVar20 << 0x20 | auVar20 << 0x40 | auVar20 << 0x60;
    auVar20 = auVar26 >> 0x60 & (GPiece<16>)0xffffffff;
    lVar17 = lVar9;
    uVar14 = param_1;
    do {
      puVar10 = (undefined4 *)lVar17;
      *puVar10 = *param_2;
      puVar10[1] = param_2[1];
      auVar26 = ZEXT416(0xffffffff);
      auVar18 = auVar26 | auVar26 << 0x20 | auVar26 << 0x40 | auVar26 << 0x60;
      puVar10[2] = param_2[2];
      auVar26 = ZEXT416(0xffffffff);
      auVar29 = auVar26 | auVar26 << 0x20 | auVar26 << 0x40 | auVar26 << 0x60;
      puVar10[3] = *param_4;
      auVar26 = ZEXT416(0xffffffff);
      auVar26 = auVar26 | auVar26 << 0x20 | auVar26 << 0x40 | auVar26 << 0x60;
      puVar10[4] = param_4[1];
      auVar19 = vectorShiftLeftIntegerWord(auVar18,auVar18);
      puVar10[5] = *param_5;
      auVar30 = vectorShiftLeftIntegerWord(auVar29,auVar29);
      puVar10[6] = param_5[1];
      auVar18 = loadVectorLeftIndexed(in_LR,param_3);
      auVar31 = vectorShiftLeftIntegerWord(auVar26,auVar26);
      auVar27 = vectorRotateLeftIntegerWord
                          (auVar18,auVar2 | auVar2 << 0x20 | auVar2 << 0x40 | auVar2 << 0x60);
      auVar28 = vectorRotateLeftIntegerWord
                          (auVar18,auVar3 | auVar3 << 0x20 | auVar3 << 0x40 | auVar3 << 0x60);
      auVar26 = vectorLogicalAnd(auVar18,auVar24);
      auVar29 = vectorShiftRightWord(auVar18,auVar25);
      auVar27 = vectorLogicalAnd(auVar27,auVar24);
      auVar28 = vectorLogicalAnd(auVar28,auVar24);
      auVar18 = vectorConvertFromUnsignedFixedPointWord(auVar26,0);
      auVar29 = vectorConvertFromUnsignedFixedPointWord(auVar29,0);
      auVar26 = ZEXT416(0xffffffff);
      auVar32 = auVar26 | auVar26 << 0x20 | auVar26 << 0x40 | auVar26 << 0x60;
      auVar27 = vectorConvertFromUnsignedFixedPointWord(auVar27,0);
      auVar28 = vectorConvertFromUnsignedFixedPointWord(auVar28,0);
      uVar14 = uVar14 - 1;
      lVar17 = lVar17 + 0x20;
      param_2 = param_2 + 3;
      param_3 = param_3 + 4;
      param_4 = param_4 + 2;
      auVar26 = vectorMultiplyAddFloatingPoint(auVar18,auVar21,auVar30);
      auVar27 = vectorMultiplyAddFloatingPoint(auVar27,auVar21,auVar19);
      auVar28 = vectorMultiplyAddFloatingPoint(auVar28,auVar21,auVar31);
      auVar18 = vectorShiftLeftIntegerWord(auVar32,auVar32);
      param_5 = param_5 + 2;
      auVar19 = vectorMultiplyAddFloatingPoint(auVar29,auVar21,auVar18);
      auVar18 = vectorCompareGreaterThanFloatingPoint(auVar26,auVar22);
      auVar29 = vectorCompareGreaterThanFloatingPoint(auVar27,auVar22);
      auVar30 = vectorCompareGreaterThanFloatingPoint(auVar28,auVar22);
      auVar26 = vectorConditionalSelect(auVar26,auVar22,auVar18);
      auVar29 = vectorConditionalSelect(auVar27,auVar22,auVar29);
      auVar27 = vectorConditionalSelect(auVar28,auVar22,auVar30);
      auVar18 = vectorCompareGreaterThanFloatingPoint(auVar19,auVar22);
      auVar26 = vectorAddFloatingPoint(auVar26,auVar23);
      auVar29 = vectorAddFloatingPoint(auVar29,auVar23);
      auVar18 = vectorConditionalSelect(auVar19,auVar22,auVar18);
      auVar27 = vectorAddFloatingPoint(auVar27,auVar23);
      auVar19 = vectorAddFloatingPoint(auVar18,auVar23);
      auVar18 = vectorCompareGreaterThanFloatingPoint(auVar29,auVar22);
      auVar29 = vectorConditionalSelect(auVar29,auVar22,auVar18);
      auVar18 = vectorCompareGreaterThanFloatingPoint(auVar26,auVar22);
      auVar28 = vectorCompareGreaterThanFloatingPoint(auVar27,auVar22);
      auVar26 = vectorConditionalSelect(auVar26,auVar22,auVar18);
      auVar27 = vectorConditionalSelect(auVar27,auVar22,auVar28);
      auVar29 = vectorConvertToSignedFixedPointWordSaturate(auVar29,0);
      auVar18 = vectorCompareGreaterThanFloatingPoint(auVar19,auVar22);
      auVar18 = vectorConditionalSelect(auVar19,auVar22,auVar18);
      auVar26 = vectorConvertToSignedFixedPointWordSaturate(auVar26,0);
      auVar27 = vectorConvertToSignedFixedPointWordSaturate(auVar27,0);
      auVar18 = vectorConvertToSignedFixedPointWordSaturate(auVar18,0);
      auVar19 = vectorShiftLeftIntegerWord
                          (auVar29,auVar4 | auVar4 << 0x20 | auVar4 << 0x40 | auVar4 << 0x60);
      auVar29 = vectorShiftLeftIntegerWord
                          (auVar27,auVar20 | auVar20 << 0x20 | auVar20 << 0x40 | auVar20 << 0x60);
      auVar18 = vectorShiftLeftIntegerWord(auVar18,auVar25);
      auVar26 = (auVar26 | auVar19 | auVar29 | auVar18) >> 0x60 & (GPiece<16>)0xffffffff;
      uVar1 = storeVectorElementWordIndexed
                        (auVar26 | auVar26 << 0x20 | auVar26 << 0x40 | auVar26 << 0x60,0,lVar12);
      *(undefined4 *)((uint)lVar12 & 0xfffffffc) = uVar1;
      lVar12 = lVar12 + 0x20;
    } while (0 < (int)uVar14);
  }
  idol_draw::DrawDepth(DL_DepthPass,0);
  pRVar7 = DL_DepthPass;
  *DL_DepthPass->command = NV4097_SET_ALPHA_TEST_ENABLE_x1;
  pRVar7->command[1] = 0;
  pRVar7->command = pRVar7->command + 2;
  idol_draw::DrawDepth(DL_Pass,0);
  pRVar7 = DL_Pass;
  *DL_Pass->command = NV4097_SET_ALPHA_TEST_ENABLE_x1;
  pRVar7->command[1] = 0;
  pRVar7->command = pRVar7->command + 2;
  iVar8 = EffectTexHeaders;
  pRVar7 = DL_Pass;
  iVar11 = GetEffectTex(param_6);
  FUN_004d676c(pRVar7,0,iVar8 + iVar11 * 0x24,1,1);
  FastDrawStrip_Pass(param_1,lVar9,9);
  FastDrawStrip_Pass(param_1,lVar9,8);
  idol_draw::DrawDepth(DL_Pass,in_stack_00000070);
  iVar8 = EffectTexHeaders;
  pRVar7 = DL_Pass;
  iVar11 = GetEffectTex(param_7);
  FUN_004d676c(pRVar7,0,iVar8 + iVar11 * 0x24,1,1);
  FastDrawStrip_DLNoState(param_1,lVar9);
  return;
}


// 0x0073678 (0x390 bytes)
void FastDrawStrip2UV_Pass(longlong param_1,int param_2,longlong param_3)

{
  uint *puVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  int iVar8;
  ulonglong uVar9;
  uint uVar11;
  ulonglong uVar10;
  ulonglong uVar12;
  
  iVar8 = g_pIdolDraw;
  iVar4 = (int)(param_3 << 2);
  idol_draw::BindVertexProgram(g_pIdolDraw,*(undefined4 *)((int)&DepthPass + iVar4),7);
  idol_draw::BindFragmentProgram(iVar8,*(undefined4 *)((int)&DepthPass + iVar4),7);
  iVar3 = *(int *)((int)&DepthPass + iVar4);
  **(undefined4 **)(iVar3 + 8) = 0x41740;
  *(undefined4 *)(*(int *)(iVar3 + 8) + 4) = 0x2832;
  *(int *)(iVar3 + 8) = *(int *)(iVar3 + 8) + 8;
  iVar3 = *(int *)((int)&DepthPass + iVar4);
  **(undefined4 **)(iVar3 + 8) = 0x41744;
  *(undefined4 *)(*(int *)(iVar3 + 8) + 4) = 0x2832;
  *(int *)(iVar3 + 8) = *(int *)(iVar3 + 8) + 8;
  iVar3 = *(int *)((int)&DepthPass + iVar4);
  **(undefined4 **)(iVar3 + 8) = 0x4174c;
  *(undefined4 *)(*(int *)(iVar3 + 8) + 4) = 0x2844;
  *(int *)(iVar3 + 8) = *(int *)(iVar3 + 8) + 8;
  iVar3 = *(int *)((int)&DepthPass + iVar4);
  uVar11 = param_2 - *(int *)(iVar8 + 0x4a8);
  **(undefined4 **)(iVar3 + 8) = 0x41680;
  *(uint *)(*(int *)(iVar3 + 8) + 4) = uVar11 | 0x80000000;
  *(int *)(iVar3 + 8) = *(int *)(iVar3 + 8) + 8;
  iVar3 = *(int *)((int)&DepthPass + iVar4);
  **(undefined4 **)(iVar3 + 8) = 0x41684;
  *(uint *)(*(int *)(iVar3 + 8) + 4) = uVar11 + 0x18 | 0x80000000;
  *(int *)(iVar3 + 8) = *(int *)(iVar3 + 8) + 8;
  iVar3 = *(int *)((int)&DepthPass + iVar4);
  **(undefined4 **)(iVar3 + 8) = 0x4168c;
  *(uint *)(*(int *)(iVar3 + 8) + 4) = uVar11 + 0x24 | 0x80000000;
  *(int *)(iVar3 + 8) = *(int *)(iVar3 + 8) + 8;
  iVar3 = *(int *)((int)&DepthPass + iVar4);
  **(undefined4 **)(iVar3 + 8) = 0x400c1714;
  uVar12 = (param_1 - 0x100U & (longlong)((int)(param_1 - 0x100U) >> 0x1f)) + 0x100;
  *(undefined4 *)(*(int *)(iVar3 + 8) + 4) = 0;
  *(undefined4 *)(*(int *)(iVar3 + 8) + 8) = 0;
  *(undefined4 *)(*(int *)(iVar3 + 8) + 0xc) = 0;
  *(undefined4 *)(*(int *)(iVar3 + 8) + 0x10) = 0x41808;
  uVar6 = param_1 - uVar12 & ~(longlong)((int)(param_1 - uVar12) >> 0x1f);
  uVar9 = (uVar6 << 0x20) >> 0x28;
  uVar7 = uVar6 - (uVar6 & 0xffffff00);
  *(undefined4 *)(*(int *)(iVar3 + 8) + 0x14) = 6;
  iVar8 = (int)uVar7;
  *(int *)(iVar3 + 8) = *(int *)(iVar3 + 8) + 0x18;
  iVar3 = *(int *)((int)&DepthPass + iVar4);
  puVar1 = *(uint **)(iVar3 + 8);
  *(uint **)(iVar3 + 8) = puVar1 + 1;
  *puVar1 = (((uint)uVar6 >> 8) + ((iVar8 != 0)) +
            (((int)uVar12 != 0))) * 0x40000 | 0x40001814;
  uVar10 = 0;
  if ((int)uVar12 != 0) {
    piVar2 = *(int **)(iVar3 + 8);
    *(int **)(iVar3 + 8) = piVar2 + 1;
    *piVar2 = (int)((uVar12 & 0xffffffff) << 0x18) + -0x1000000;
    uVar10 = uVar12;
  }
  uVar11 = (uint)uVar10;
  if ((uint)uVar6 >> 8 != 0) {
    do {
      puVar1 = *(uint **)(iVar3 + 8);
      uVar5 = (uint)uVar10;
      uVar9 = uVar9 - 1;
      uVar10 = uVar10 + 0x100;
      uVar11 = (uint)uVar10;
      *(uint **)(iVar3 + 8) = puVar1 + 1;
      *puVar1 = uVar5 | 0xff000000;
    } while (0 < (int)uVar9);
  }
  if (iVar8 != 0) {
    puVar1 = *(uint **)(iVar3 + 8);
    *(uint **)(iVar3 + 8) = puVar1 + 1;
    *puVar1 = uVar11 | (int)((uVar7 & 0xffffffff) << 0x18) - 0x1000000U;
  }
  iVar3 = *(int *)((int)&DepthPass + iVar4);
  **(undefined4 **)(iVar3 + 8) = 0x41808;
  *(undefined4 *)(*(int *)(iVar3 + 8) + 4) = 0;
  *(int *)(iVar3 + 8) = *(int *)(iVar3 + 8) + 8;
  iVar3 = *(int *)((int)&DepthPass + iVar4);
  **(undefined4 **)(iVar3 + 8) = 0x41740;
  *(undefined4 *)(*(int *)(iVar3 + 8) + 4) = 2;
  *(int *)(iVar3 + 8) = *(int *)(iVar3 + 8) + 8;
  iVar3 = *(int *)((int)&DepthPass + iVar4);
  **(undefined4 **)(iVar3 + 8) = 0x41744;
  *(undefined4 *)(*(int *)(iVar3 + 8) + 4) = 2;
  *(int *)(iVar3 + 8) = *(int *)(iVar3 + 8) + 8;
  iVar3 = *(int *)((int)&DepthPass + iVar4);
  **(undefined4 **)(iVar3 + 8) = 0x4174c;
  *(undefined4 *)(*(int *)(iVar3 + 8) + 4) = 2;
  *(int *)(iVar3 + 8) = *(int *)(iVar3 + 8) + 8;
  return;
}


// 0x0073a08 (0x390 bytes)
void FastDrawStrip2UV_PassNoState(longlong param_1,int param_2,longlong param_3)

{
  int iVar1;
  int iVar2;
  uint *puVar3;
  int *piVar4;
  int iVar5;
  uint uVar6;
  ulonglong uVar7;
  uint uVar9;
  ulonglong uVar8;
  ulonglong uVar10;
  ulonglong uVar11;
  ulonglong uVar12;
  int iVar13;
  
  iVar2 = g_pIdolDraw;
  if (((int)param_3 == 2) || ((int)param_3 == 9)) {
    iVar1 = (int)(param_3 << 2);
    idol_draw::BindVertexProgram(g_pIdolDraw,*(undefined4 *)((int)&DepthPass + iVar1),7);
    idol_draw::BindFragmentProgram(iVar2,*(undefined4 *)((int)&DepthPass + iVar1),7);
  }
  iVar5 = (int)(param_3 << 2);
  iVar13 = *(int *)((int)&DepthPass + iVar5);
  **(undefined4 **)(iVar13 + 8) = 0x41740;
  iVar1 = *(int *)(iVar13 + 8);
  *(undefined4 *)(iVar1 + 4) = 0x2832;
  *(int *)(iVar13 + 8) = iVar1 + 8;
  iVar13 = *(int *)((int)&DepthPass + iVar5);
  **(undefined4 **)(iVar13 + 8) = 0x41744;
  iVar1 = *(int *)(iVar13 + 8);
  *(undefined4 *)(iVar1 + 4) = 0x2832;
  *(int *)(iVar13 + 8) = iVar1 + 8;
  iVar13 = *(int *)((int)&DepthPass + iVar5);
  **(undefined4 **)(iVar13 + 8) = 0x4174c;
  iVar1 = *(int *)(iVar13 + 8);
  *(undefined4 *)(iVar1 + 4) = 0x2844;
  *(int *)(iVar13 + 8) = iVar1 + 8;
  iVar1 = *(int *)((int)&DepthPass + iVar5);
  uVar9 = param_2 - *(int *)(iVar2 + 0x4a8);
  **(undefined4 **)(iVar1 + 8) = 0x41680;
  iVar2 = *(int *)(iVar1 + 8);
  *(uint *)(iVar2 + 4) = uVar9 | 0x80000000;
  *(int *)(iVar1 + 8) = iVar2 + 8;
  iVar1 = *(int *)((int)&DepthPass + iVar5);
  **(undefined4 **)(iVar1 + 8) = 0x41684;
  iVar2 = *(int *)(iVar1 + 8);
  *(uint *)(iVar2 + 4) = uVar9 + 0xc | 0x80000000;
  *(int *)(iVar1 + 8) = iVar2 + 8;
  iVar1 = *(int *)((int)&DepthPass + iVar5);
  **(undefined4 **)(iVar1 + 8) = 0x4168c;
  iVar2 = *(int *)(iVar1 + 8);
  *(uint *)(iVar2 + 4) = uVar9 + 0x24 | 0x80000000;
  *(int *)(iVar1 + 8) = iVar2 + 8;
  iVar1 = *(int *)((int)&DepthPass + iVar5);
  **(undefined4 **)(iVar1 + 8) = 0x400c1714;
  *(undefined4 *)(*(int *)(iVar1 + 8) + 4) = 0;
  uVar10 = (param_1 - 0x100U & (longlong)((int)(param_1 - 0x100U) >> 0x1f)) + 0x100;
  *(undefined4 *)(*(int *)(iVar1 + 8) + 8) = 0;
  *(undefined4 *)(*(int *)(iVar1 + 8) + 0xc) = 0;
  uVar11 = param_1 - uVar10 & ~(longlong)((int)(param_1 - uVar10) >> 0x1f);
  uVar7 = (uVar11 << 0x20) >> 0x28;
  *(undefined4 *)(*(int *)(iVar1 + 8) + 0x10) = 0x41808;
  iVar2 = *(int *)(iVar1 + 8);
  uVar12 = uVar11 - (uVar11 & 0xffffff00);
  iVar13 = (int)uVar12;
  *(undefined4 *)(iVar2 + 0x14) = 6;
  *(int *)(iVar1 + 8) = iVar2 + 0x18;
  iVar2 = *(int *)((int)&DepthPass + iVar5);
  puVar3 = *(uint **)(iVar2 + 8);
  *puVar3 = (((uint)uVar11 >> 8) + ((iVar13 != 0)) +
            (((int)uVar10 != 0))) * 0x40000 | 0x40001814;
  *(uint **)(iVar2 + 8) = puVar3 + 1;
  uVar8 = 0;
  if ((int)uVar10 != 0) {
    piVar4 = *(int **)(iVar2 + 8);
    *piVar4 = (int)((uVar10 & 0xffffffff) << 0x18) + -0x1000000;
    *(int **)(iVar2 + 8) = piVar4 + 1;
    uVar8 = uVar10;
  }
  uVar9 = (uint)uVar8;
  if ((uint)uVar11 >> 8 != 0) {
    do {
      puVar3 = *(uint **)(iVar2 + 8);
      uVar6 = (uint)uVar8;
      uVar7 = uVar7 - 1;
      uVar8 = uVar8 + 0x100;
      uVar9 = (uint)uVar8;
      *puVar3 = uVar6 | 0xff000000;
      *(uint **)(iVar2 + 8) = puVar3 + 1;
    } while (0 < (int)uVar7);
  }
  if (iVar13 != 0) {
    puVar3 = *(uint **)(iVar2 + 8);
    *puVar3 = uVar9 | (int)((uVar12 & 0xffffffff) << 0x18) - 0x1000000U;
    *(uint **)(iVar2 + 8) = puVar3 + 1;
  }
  iVar1 = *(int *)((int)&DepthPass + iVar5);
  **(undefined4 **)(iVar1 + 8) = 0x41808;
  iVar2 = *(int *)(iVar1 + 8);
  *(undefined4 *)(iVar2 + 4) = 0;
  *(int *)(iVar1 + 8) = iVar2 + 8;
  iVar1 = *(int *)((int)&DepthPass + iVar5);
  **(undefined4 **)(iVar1 + 8) = 0x41740;
  iVar2 = *(int *)(iVar1 + 8);
  *(undefined4 *)(iVar2 + 4) = 2;
  *(int *)(iVar1 + 8) = iVar2 + 8;
  iVar1 = *(int *)((int)&DepthPass + iVar5);
  **(undefined4 **)(iVar1 + 8) = 0x41744;
  iVar2 = *(int *)(iVar1 + 8);
  *(undefined4 *)(iVar2 + 4) = 2;
  *(int *)(iVar1 + 8) = iVar2 + 8;
  iVar1 = *(int *)((int)&DepthPass + iVar5);
  **(undefined4 **)(iVar1 + 8) = 0x4174c;
  iVar2 = *(int *)(iVar1 + 8);
  *(undefined4 *)(iVar2 + 4) = 2;
  *(int *)(iVar1 + 8) = iVar2 + 8;
  return;
}


// 0x0073de0 (0x330 bytes)
void DrawLavaStrips
               (double param_1,longlong param_2,undefined4 *param_3,uint *param_4,
               undefined4 *param_5,undefined4 *param_6,undefined4 param_7,undefined4 param_8,
               undefined8 param_9)

{
  uint uVar1;
  RenderingStep *pRVar2;
  RsxCmd *pRVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  int iVar6;
  RsxCmd *pRVar7;
  int iVar8;
  undefined4 *puVar9;
  RsxCmd *pRVar10;
  longlong lVar11;
  undefined8 in_stack_00000070;
  int in_stack_00000084;
  RsxCmd local_c0 [16];
  
  puVar5 = (undefined4 *)
           idol::AllocateMemAlign(FrameHeap,(int)(param_2 << 5) + (int)(param_2 << 3),0x10);
  iVar8 = EffectTexHeaders;
  pRVar2 = (&DepthPass)[in_stack_00000084];
  iVar6 = GetEffectTex(param_7);
  FUN_004d676c(pRVar2,0,iVar8 + iVar6 * 0x24,1,1);
  iVar8 = EffectTexHeaders;
  if ((in_stack_00000084 == 2) || (in_stack_00000084 == 9)) {
    pRVar2 = (&DepthPass)[in_stack_00000084];
    iVar6 = GetEffectTex(param_8);
    FUN_004d676c(pRVar2,1,iVar8 + iVar6 * 0x24,1,1);
  }
  pRVar2 = (&DepthPass)[in_stack_00000084];
  *pRVar2->command = 0x441efc;
  pRVar10 = local_c0;
  lVar11 = 8;
  pRVar2->command[1] = 4;
  pRVar7 = pRVar2->command + 2;
  pRVar2->command = pRVar7;
  do {
    *pRVar7 = *pRVar10;
    pRVar7 = pRVar2->command;
    pRVar2->command = pRVar7 + 1;
    pRVar3 = pRVar10 + 1;
    pRVar10 = pRVar10 + 2;
    pRVar7[1] = *pRVar3;
    pRVar7 = pRVar2->command + 1;
    pRVar2->command = pRVar7;
    lVar11 = lVar11 + -1;
  } while (lVar11 != 0);
  iVar8 = (int)param_2;
  lVar11 = param_2;
  puVar9 = puVar5;
  while (0 < iVar8) {
    lVar11 = lVar11 + -1;
    *puVar9 = *param_3;
    puVar9[1] = param_3[1];
    puVar4 = param_3 + 2;
    param_3 = param_3 + 3;
    puVar9[2] = *puVar4;
    uVar1 = *param_4;
    puVar9[3] = *param_5;
    param_4 = param_4 + 4;
    puVar9[4] = param_5[1];
    param_5 = param_5 + 2;
    puVar9[6] = *param_6;
    puVar4 = param_6 + 1;
    param_6 = param_6 + 2;
    puVar9[7] = *puVar4;
    puVar9[8] = (float)param_1;
    puVar9[5] = (float)param_1;
    puVar9[9] = uVar1 >> 0x18 | uVar1 >> 8 & 0xff00 | uVar1 << 0x18 | (uVar1 & 0xff00) << 8;
    puVar9 = puVar9 + 10;
    iVar8 = (int)lVar11;
  }
  idol_draw::DrawDepth((&DepthPass)[in_stack_00000084],param_9);
  FastDrawStrip2UV_PassNoState(param_2,puVar5,in_stack_00000084);
  if ((in_stack_00000084 == 2) || (in_stack_00000084 == 9)) {
    idol_draw::DrawDepth((&DepthPass)[in_stack_00000084],in_stack_00000070);
    FastDrawStrip2UV_Pass(param_2,puVar5,in_stack_00000084);
  }
  return;
}


// 0x0074150 (0x450 bytes)
void FastDrawStripColor(int param_1,void *param_2,int param_3)

{
  undefined4 uVar1;
  int iVar2;
  uint *puVar3;
  int *piVar4;
  int iVar5;
  uint uVar6;
  undefined4 *puVar8;
  ulonglong uVar7;
  uint uVar10;
  ulonglong uVar9;
  undefined4 *puVar12;
  ulonglong uVar11;
  int iVar13;
  ulonglong uVar14;
  ulonglong uVar15;
  int iVar16;
  longlong lVar17;
  undefined4 local_70 [16];
  
  iVar2 = g_pIdolDraw;
  iVar5 = (int)(param_3 << 2);
  idol_draw::ResetPassState(*(undefined4 *)((int)&DepthPass + iVar5));
  iVar13 = (int)param_3;
  if ((iVar13 == 2) || (iVar13 == 9)) {
    idol_draw::BindVertexProgram(iVar2,*(undefined4 *)((int)&DepthPass + iVar5),4);
    idol_draw::BindFragmentProgram(iVar2,*(undefined4 *)((int)&DepthPass + iVar5),6);
  }
  else if ((iVar13 == 0) || (iVar13 == 8)) {
    iVar13 = *(int *)((int)&DepthPass + iVar5);
    **(undefined4 **)(iVar13 + 8) = 0x441efc;
    puVar12 = local_70;
    lVar17 = 8;
    *(undefined4 *)(*(int *)(iVar13 + 8) + 4) = 4;
    puVar8 = (undefined4 *)(*(int *)(iVar13 + 8) + 8);
    *(undefined4 **)(iVar13 + 8) = puVar8;
    do {
      *puVar8 = *puVar12;
      iVar16 = *(int *)(iVar13 + 8);
      uVar1 = puVar12[1];
      puVar12 = puVar12 + 2;
      *(int *)(iVar13 + 8) = iVar16 + 4;
      *(undefined4 *)(iVar16 + 4) = uVar1;
      puVar8 = (undefined4 *)(*(int *)(iVar13 + 8) + 4);
      *(undefined4 **)(iVar13 + 8) = puVar8;
      lVar17 = lVar17 + -1;
    } while (lVar17 != 0);
  }
  iVar16 = *(int *)((int)&DepthPass + iVar5);
  **(undefined4 **)(iVar16 + 8) = 0x41740;
  iVar13 = *(int *)(iVar16 + 8);
  *(undefined4 *)(iVar13 + 4) = 0x1832;
  *(int *)(iVar16 + 8) = iVar13 + 8;
  iVar16 = *(int *)((int)&DepthPass + iVar5);
  **(undefined4 **)(iVar16 + 8) = 0x41744;
  iVar13 = *(int *)(iVar16 + 8);
  *(undefined4 *)(iVar13 + 4) = 0x1822;
  *(int *)(iVar16 + 8) = iVar13 + 8;
  iVar16 = *(int *)((int)&DepthPass + iVar5);
  **(undefined4 **)(iVar16 + 8) = 0x4174c;
  iVar13 = *(int *)(iVar16 + 8);
  *(undefined4 *)(iVar13 + 4) = 0x1844;
  *(int *)(iVar16 + 8) = iVar13 + 8;
  iVar13 = *(int *)((int)&DepthPass + iVar5);
  uVar10 = param_2 - *(int *)(iVar2 + 0x4a8);
  **(undefined4 **)(iVar13 + 8) = 0x41680;
  iVar2 = *(int *)(iVar13 + 8);
  *(uint *)(iVar2 + 4) = uVar10 | 0x80000000;
  *(int *)(iVar13 + 8) = iVar2 + 8;
  iVar13 = *(int *)((int)&DepthPass + iVar5);
  **(undefined4 **)(iVar13 + 8) = 0x41684;
  iVar2 = *(int *)(iVar13 + 8);
  *(uint *)(iVar2 + 4) = uVar10 + 0xc | 0x80000000;
  *(int *)(iVar13 + 8) = iVar2 + 8;
  iVar13 = *(int *)((int)&DepthPass + iVar5);
  **(undefined4 **)(iVar13 + 8) = 0x4168c;
  iVar2 = *(int *)(iVar13 + 8);
  *(uint *)(iVar2 + 4) = uVar10 + 0x14 | 0x80000000;
  *(int *)(iVar13 + 8) = iVar2 + 8;
  iVar13 = *(int *)((int)&DepthPass + iVar5);
  **(undefined4 **)(iVar13 + 8) = 0x400c1714;
  *(undefined4 *)(*(int *)(iVar13 + 8) + 4) = 0;
  uVar11 = (param_1 - 0x100U & (longlong)((int)(param_1 - 0x100U) >> 0x1f)) + 0x100;
  *(undefined4 *)(*(int *)(iVar13 + 8) + 8) = 0;
  *(undefined4 *)(*(int *)(iVar13 + 8) + 0xc) = 0;
  uVar14 = param_1 - uVar11 & ~(longlong)((int)(param_1 - uVar11) >> 0x1f);
  uVar7 = (uVar14 << 0x20) >> 0x28;
  *(undefined4 *)(*(int *)(iVar13 + 8) + 0x10) = 0x41808;
  iVar2 = *(int *)(iVar13 + 8);
  uVar15 = uVar14 - (uVar14 & 0xffffff00);
  iVar16 = (int)uVar15;
  *(undefined4 *)(iVar2 + 0x14) = 6;
  *(int *)(iVar13 + 8) = iVar2 + 0x18;
  iVar2 = *(int *)((int)&DepthPass + iVar5);
  puVar3 = *(uint **)(iVar2 + 8);
  *puVar3 = (((uint)uVar14 >> 8) + ((iVar16 != 0)) +
            (((int)uVar11 != 0))) * 0x40000 | 0x40001814;
  *(uint **)(iVar2 + 8) = puVar3 + 1;
  uVar9 = 0;
  if ((int)uVar11 != 0) {
    piVar4 = *(int **)(iVar2 + 8);
    *piVar4 = (int)((uVar11 & 0xffffffff) << 0x18) + -0x1000000;
    *(int **)(iVar2 + 8) = piVar4 + 1;
    uVar9 = uVar11;
  }
  uVar10 = (uint)uVar9;
  if ((uint)uVar14 >> 8 != 0) {
    do {
      puVar3 = *(uint **)(iVar2 + 8);
      uVar6 = (uint)uVar9;
      uVar7 = uVar7 - 1;
      uVar9 = uVar9 + 0x100;
      uVar10 = (uint)uVar9;
      *puVar3 = uVar6 | 0xff000000;
      *(uint **)(iVar2 + 8) = puVar3 + 1;
    } while (0 < (int)uVar7);
  }
  if (iVar16 != 0) {
    puVar3 = *(uint **)(iVar2 + 8);
    *puVar3 = uVar10 | (int)((uVar15 & 0xffffffff) << 0x18) - 0x1000000U;
    *(uint **)(iVar2 + 8) = puVar3 + 1;
  }
  iVar13 = *(int *)((int)&DepthPass + iVar5);
  **(undefined4 **)(iVar13 + 8) = 0x41808;
  iVar2 = *(int *)(iVar13 + 8);
  *(undefined4 *)(iVar2 + 4) = 0;
  *(int *)(iVar13 + 8) = iVar2 + 8;
  iVar13 = *(int *)((int)&DepthPass + iVar5);
  **(undefined4 **)(iVar13 + 8) = 0x41740;
  iVar2 = *(int *)(iVar13 + 8);
  *(undefined4 *)(iVar2 + 4) = 2;
  *(int *)(iVar13 + 8) = iVar2 + 8;
  iVar13 = *(int *)((int)&DepthPass + iVar5);
  **(undefined4 **)(iVar13 + 8) = 0x41744;
  iVar2 = *(int *)(iVar13 + 8);
  *(undefined4 *)(iVar2 + 4) = 2;
  *(int *)(iVar13 + 8) = iVar2 + 8;
  iVar2 = *(int *)((int)&DepthPass + iVar5);
  **(undefined4 **)(iVar2 + 8) = 0x4174c;
  iVar5 = *(int *)(iVar2 + 8);
  *(undefined4 *)(iVar5 + 4) = 2;
  *(int *)(iVar2 + 8) = iVar5 + 8;
  return;
}


// 0x00745a0 (0x1c bytes)
bool ____Draw_IsFlagMode2(ulonglong param_1)

{
  return (param_1 & 0x30) == 0x20;
}


// 0x00745bc (0x48 bytes)
undefined8 ____Draw_IsBlendModeMatch(ulonglong param_1)

{
  undefined8 uVar1;
  
  uVar1 = 0;
  if (((((param_1 & 3) == 0) && (((uint)(param_1 >> 2) & 3) == 1)) &&
      (((uint)(param_1 >> 6) & 3) == 1)) &&
     (((param_1 >> 4 & 3) == 0 || (((uint)(param_1 >> 4) & 3) == 2)))) {
    uVar1 = 1;
  }
  return uVar1;
}


// 0x0074604 (0x13c bytes)
void DrawMeshSet(ulonglong param_1,undefined4 *param_2,uint *param_3,undefined4 *param_4,
                      ulonglong param_5)

{
  undefined4 uVar1;
  uint uVar2;
  undefined4 *puVar3;
  undefined4 *puVar5;
  ulonglong uVar4;
  undefined4 *puVar6;
  ulonglong uVar7;
  
  uVar7 = (param_5 << 0x20) >> 0x24 & 0xf;
  puVar5 = (undefined4 *)idol::AllocateMemAlign(FrameHeap,(int)(param_1 << 3) * 3,0x10);
  uVar4 = 0;
  puVar6 = puVar5;
  if ((int)param_1 != 0) {
    do {
      uVar4 = uVar4 + 1;
      uVar2 = *param_3;
      *puVar6 = *param_2;
      puVar6[1] = param_2[1];
      param_3 = param_3 + 1;
      puVar3 = param_2 + 2;
      param_2 = param_2 + 3;
      puVar6[2] = *puVar3;
      puVar6[3] = *param_4;
      uVar1 = param_4[1];
      puVar6[5] = uVar2 >> 0x18 | uVar2 >> 8 & 0xff00 | uVar2 << 0x18 | (uVar2 & 0xff00) << 8;
      param_4 = param_4 + 2;
      puVar6[4] = uVar1;
      puVar6 = puVar6 + 6;
    } while ((uVar4 & 0xffffffff) < (param_1 & 0xffffffff));
  }
  if ((int)(param_5 & 0xf) != 0) {
    FastDrawStripColor(param_1,puVar5,param_5 & 0xf);
  }
  if ((int)uVar7 != 0) {
    FastDrawStripColor(param_1,puVar5,uVar7);
  }
  return;
}


// 0x0074780 (0x460 bytes)
void FastDrawStripFog(int param_1,void *param_2,int param_3)

{
  int iVar1;
  uint *puVar2;
  int *piVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  undefined4 *puVar8;
  ulonglong uVar7;
  uint uVar10;
  ulonglong uVar9;
  undefined4 *puVar12;
  ulonglong uVar11;
  int iVar13;
  ulonglong uVar14;
  ulonglong uVar15;
  int iVar16;
  longlong lVar17;
  undefined4 local_70 [16];
  
  iVar16 = g_pIdolDraw;
  iVar5 = (int)(param_3 << 2);
  iVar4 = *(int *)((int)&DepthPass + iVar5);
  puVar12 = local_70;
  iVar13 = (int)param_3;
  **(undefined4 **)(iVar4 + 8) = 0x441efc;
  lVar17 = 8;
  *(undefined4 *)(*(int *)(iVar4 + 8) + 4) = 4;
  puVar8 = (undefined4 *)(*(int *)(iVar4 + 8) + 8);
  *(undefined4 **)(iVar4 + 8) = puVar8;
  do {
    *puVar8 = *puVar12;
    iVar1 = *(int *)(iVar4 + 8);
    *(int *)(iVar4 + 8) = iVar1 + 4;
    puVar8 = puVar12 + 1;
    puVar12 = puVar12 + 2;
    *(undefined4 *)(iVar1 + 4) = *puVar8;
    puVar8 = (undefined4 *)(*(int *)(iVar4 + 8) + 4);
    *(undefined4 **)(iVar4 + 8) = puVar8;
    lVar17 = lVar17 + -1;
  } while (lVar17 != 0);
  if (((iVar13 == 1) || (iVar13 == 2)) || (iVar13 == 9)) {
    idol_draw::BindVertexProgram(iVar16,*(undefined4 *)((int)&DepthPass + iVar5),7);
    idol_draw::BindFragmentProgram(iVar16,*(undefined4 *)((int)&DepthPass + iVar5),7);
  }
  iVar4 = *(int *)((int)&DepthPass + iVar5);
  **(undefined4 **)(iVar4 + 8) = 0x41740;
  *(undefined4 *)(*(int *)(iVar4 + 8) + 4) = 0x1c32;
  *(int *)(iVar4 + 8) = *(int *)(iVar4 + 8) + 8;
  iVar4 = *(int *)((int)&DepthPass + iVar5);
  **(undefined4 **)(iVar4 + 8) = 0x41744;
  *(undefined4 *)(*(int *)(iVar4 + 8) + 4) = 0x1c32;
  *(int *)(iVar4 + 8) = *(int *)(iVar4 + 8) + 8;
  iVar4 = *(int *)((int)&DepthPass + iVar5);
  **(undefined4 **)(iVar4 + 8) = 0x4174c;
  *(undefined4 *)(*(int *)(iVar4 + 8) + 4) = 0x1c44;
  *(int *)(iVar4 + 8) = *(int *)(iVar4 + 8) + 8;
  iVar4 = *(int *)((int)&DepthPass + iVar5);
  uVar10 = param_2 - *(int *)(iVar16 + 0x4a8);
  **(undefined4 **)(iVar4 + 8) = 0x41680;
  *(uint *)(*(int *)(iVar4 + 8) + 4) = uVar10 | 0x80000000;
  *(int *)(iVar4 + 8) = *(int *)(iVar4 + 8) + 8;
  iVar4 = *(int *)((int)&DepthPass + iVar5);
  **(undefined4 **)(iVar4 + 8) = 0x41684;
  *(uint *)(*(int *)(iVar4 + 8) + 4) = uVar10 + 0xc | 0x80000000;
  *(int *)(iVar4 + 8) = *(int *)(iVar4 + 8) + 8;
  iVar4 = *(int *)((int)&DepthPass + iVar5);
  **(undefined4 **)(iVar4 + 8) = 0x4168c;
  *(uint *)(*(int *)(iVar4 + 8) + 4) = uVar10 + 0x18 | 0x80000000;
  *(int *)(iVar4 + 8) = *(int *)(iVar4 + 8) + 8;
  iVar4 = *(int *)((int)&DepthPass + iVar5);
  **(undefined4 **)(iVar4 + 8) = 0x400c1714;
  *(undefined4 *)(*(int *)(iVar4 + 8) + 4) = 0;
  *(undefined4 *)(*(int *)(iVar4 + 8) + 8) = 0;
  uVar11 = (param_1 - 0x100U & (longlong)((int)(param_1 - 0x100U) >> 0x1f)) + 0x100;
  *(undefined4 *)(*(int *)(iVar4 + 8) + 0xc) = 0;
  uVar14 = param_1 - uVar11 & ~(longlong)((int)(param_1 - uVar11) >> 0x1f);
  *(undefined4 *)(*(int *)(iVar4 + 8) + 0x10) = 0x41808;
  uVar7 = (uVar14 << 0x20) >> 0x28;
  uVar15 = uVar14 - (uVar14 & 0xffffff00);
  iVar16 = (int)uVar15;
  *(undefined4 *)(*(int *)(iVar4 + 8) + 0x14) = 6;
  *(int *)(iVar4 + 8) = *(int *)(iVar4 + 8) + 0x18;
  iVar4 = *(int *)((int)&DepthPass + iVar5);
  puVar2 = *(uint **)(iVar4 + 8);
  *(uint **)(iVar4 + 8) = puVar2 + 1;
  *puVar2 = (((uint)uVar14 >> 8) + ((iVar16 != 0)) +
            (((int)uVar11 != 0))) * 0x40000 | 0x40001814;
  uVar9 = 0;
  if ((int)uVar11 != 0) {
    piVar3 = *(int **)(iVar4 + 8);
    *(int **)(iVar4 + 8) = piVar3 + 1;
    *piVar3 = (int)((uVar11 & 0xffffffff) << 0x18) + -0x1000000;
    uVar9 = uVar11;
  }
  uVar10 = (uint)uVar9;
  if ((uint)uVar14 >> 8 != 0) {
    do {
      puVar2 = *(uint **)(iVar4 + 8);
      uVar6 = (uint)uVar9;
      uVar7 = uVar7 - 1;
      uVar9 = uVar9 + 0x100;
      uVar10 = (uint)uVar9;
      *(uint **)(iVar4 + 8) = puVar2 + 1;
      *puVar2 = uVar6 | 0xff000000;
    } while (0 < (int)uVar7);
  }
  if (iVar16 != 0) {
    puVar2 = *(uint **)(iVar4 + 8);
    *(uint **)(iVar4 + 8) = puVar2 + 1;
    *puVar2 = uVar10 | (int)((uVar15 & 0xffffffff) << 0x18) - 0x1000000U;
  }
  iVar4 = *(int *)((int)&DepthPass + iVar5);
  **(undefined4 **)(iVar4 + 8) = 0x41808;
  *(undefined4 *)(*(int *)(iVar4 + 8) + 4) = 0;
  *(int *)(iVar4 + 8) = *(int *)(iVar4 + 8) + 8;
  iVar4 = *(int *)((int)&DepthPass + iVar5);
  **(undefined4 **)(iVar4 + 8) = 0x41740;
  *(undefined4 *)(*(int *)(iVar4 + 8) + 4) = 2;
  *(int *)(iVar4 + 8) = *(int *)(iVar4 + 8) + 8;
  iVar4 = *(int *)((int)&DepthPass + iVar5);
  **(undefined4 **)(iVar4 + 8) = 0x41744;
  *(undefined4 *)(*(int *)(iVar4 + 8) + 4) = 2;
  *(int *)(iVar4 + 8) = *(int *)(iVar4 + 8) + 8;
  iVar4 = *(int *)((int)&DepthPass + iVar5);
  **(undefined4 **)(iVar4 + 8) = 0x4174c;
  *(undefined4 *)(*(int *)(iVar4 + 8) + 4) = 2;
  *(int *)(iVar4 + 8) = *(int *)(iVar4 + 8) + 8;
  return;
}


// 0x0074be0 (0x108 bytes)
void DrawOceanStrip(float param_1,int param_2,Vec3 *param_3,u32 *param_4,Vec2 *param_5)

{
  undefined4 uVar1;
  uint uVar2;
  undefined4 *puVar3;
  undefined4 *puVar5;
  ulonglong uVar4;
  undefined4 *puVar6;
  
  puVar5 = (undefined4 *)
           idol::AllocateMemAlign(FrameHeap,(int)(param_2 << 5) - (int)(param_2 << 2),0x10);
  uVar4 = 0;
  puVar6 = puVar5;
  if ((int)param_2 != 0) {
    do {
      uVar4 = uVar4 + 1;
      *puVar6 = *param_3;
      uVar2 = *param_4;
      puVar6[1] = param_3[1];
      param_4 = param_4 + 1;
      puVar3 = param_3 + 2;
      param_3 = param_3 + 3;
      puVar6[2] = *puVar3;
      puVar6[3] = *param_5;
      uVar1 = param_5[1];
      puVar6[5] = (float)param_1;
      param_5 = param_5 + 2;
      puVar6[4] = uVar1;
      puVar6[6] = uVar2 >> 0x18 | uVar2 >> 8 & 0xff00 | uVar2 << 0x18 | (uVar2 & 0xff00) << 8;
      puVar6 = puVar6 + 7;
    } while ((uVar4 & 0xffffffff) < (param_2 & 0xffffffff));
  }
  FastDrawStripFog(param_2,puVar5,9);
  return;
}


// 0x0074ce8 (0x4 bytes)
void STUB_00074ce8(...)

{
  return;
}


// 0x0074cec (0x4 bytes)
void STUB_00074cec(...)

{
  return;
}


// 0x0074cf0 (0xc8 bytes)
int ImpactSprite_Add
              (double param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
              undefined2 param_5)

{
  int iVar1;
  double dVar2;
  undefined4 uStack00000030;
  undefined4 uStack00000034;
  undefined4 uStack00000038;
  undefined4 uStack0000003c;
  
  iVar1 = 0;
  uStack00000034 = (undefined4)param_2;
  uStack0000003c = (undefined4)param_3;
  uStack00000030 = (undefined4)((ulonglong)param_2 >> 0x20);
  uStack00000038 = (undefined4)((ulonglong)param_3 >> 0x20);
  do {
    if ((short)(&DAT_0095ee50)[iVar1 * 0x10] < 1) {
      (&DAT_0095ee50)[iVar1 * 0x10] = 0x18;
      *(undefined2 *)(&DAT_0095ee54 + iVar1 * 0x20) = param_5;
      (&DAT_0095ee40)[iVar1 * 8] = uStack00000030;
      (&DAT_0095ee44)[iVar1 * 8] = uStack00000034;
      (&DAT_0095ee48)[iVar1 * 8] = uStack00000038;
      (&DAT_0095ee4c)[iVar1 * 8] = uStack0000003c;
      (&DAT_0095ee5c)[iVar1 * 8] = (float)param_1;
      _uStack00000030 = param_2;
      _uStack00000038 = param_3;
      dVar2 = (double)MB_randRot();
      (&DAT_0095ee58)[iVar1 * 8] = (float)dVar2;
      return iVar1;
    }
    iVar1 = iVar1 + 1;
  } while (iVar1 < 0x20);
  return -1;
}


// 0x0074dc0 (0xec bytes)
void ImpactSprite_Update(void)

{
  short sVar1;
  short sVar2;
  int iVar3;
  short *psVar4;
  undefined4 *puVar5;
  double dVar6;
  double dVar7;
  
  psVar4 = &DAT_0095ee50;
  iVar3 = 0;
  puVar5 = &DAT_0095ee40;
  dVar7 = 5.235987663269043;
  do {
    if (0 < *psVar4) {
      dVar6 = (double)FastDiffRots
                                ((double)(float)puVar5[6],
                                 (double)(float)((double)g_FrameTime * dVar7));
      puVar5[6] = (float)dVar6;
      if (*(short *)(puVar5 + 4) < 0xd) {
        sVar2 = *(short *)((int)puVar5 + 0x12) + -5;
      }
      else {
        sVar2 = *(short *)((int)puVar5 + 0x12) + 5;
      }
      sVar1 = *(short *)(puVar5 + 4) + -1;
      *(short *)((int)puVar5 + 0x12) = sVar2;
      *(short *)(puVar5 + 4) = sVar1;
      if (sVar1 < 1) {
        FastMemSet(puVar5,0,0x20);
      }
    }
    iVar3 = iVar3 + 1;
    psVar4 = psVar4 + 0x10;
    puVar5 = puVar5 + 8;
  } while (iVar3 < 0x20);
  return;
}


// 0x0074fa0 (0x92c bytes)
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void ImpactSprite_Draw(void)

{
  longlong lVar1;
  ushort uVar2;
  ulonglong *puVar3;
  RenderingStep *pRVar4;
  int iVar5;
  longlong lVar6;
  undefined4 *puVar7;
  ulonglong uVar8;
  undefined8 uVar9;
  int iVar11;
  ulonglong uVar10;
  ulonglong unaff_r20;
  ulonglong unaff_r21;
  ulonglong unaff_r22;
  ulonglong uVar12;
  ulonglong unaff_r23;
  ulonglong uVar13;
  ulonglong unaff_r24;
  ulonglong uVar14;
  ulonglong unaff_r25;
  ulonglong unaff_r26;
  ulonglong uVar15;
  ulonglong unaff_r27;
  short *psVar16;
  ulonglong unaff_r28;
  ulonglong unaff_r29;
  ulonglong unaff_r30;
  undefined *puVar17;
  ulonglong unaff_r31;
  int iVar18;
  ulonglong in_LR;
  double dVar19;
  ulonglong in_f28;
  double dVar20;
  ulonglong in_f29;
  double dVar21;
  ulonglong in_f30;
  double dVar22;
  ulonglong in_f31;
  undefined4 uVar23;
  undefined4 uVar25;
  undefined4 uVar26;
  GPiece<16> auVar24;
  GPiece<16> auVar27;
  GPiece<16> auVar28;
  GPiece<16> auVar29;
  GPiece<16> auVar30;
  GPiece<16> auVar31;
  GPiece<16> auVar32;
  GPiece<16> auVar33;
  GPiece<16> auVar34;
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
  GPiece<16> auVar45;
  GPiece<16> auVar46;
  GPiece<16> auVar47;
  GPiece<16> auVar48;
  GPiece<16> auVar49;
  undefined4 in_vr31_32_0;
  undefined4 in_vr31_32_1;
  undefined4 in_vr31_32_2;
  undefined4 in_vr31_32_3;
  
  uVar8 = ZEXT48(&stack0x00000000);
  lVar1 = uVar8 - 0x390;
  puVar3 = (ulonglong *)lVar1;
  *puVar3 = uVar8;
  puVar3[0x74] = in_LR;
  puVar3[0x6e] = in_f28;
  puVar3[0x6f] = in_f29;
  puVar3[0x70] = in_f30;
  puVar3[0x71] = in_f31;
  lVar6 = uVar8 - 0x90;
  puVar7 = (undefined4 *)lVar6;
  puVar7[3] = in_vr31_32_3;
  puVar7[2] = in_vr31_32_2;
  puVar7[1] = in_vr31_32_1;
  *puVar7 = in_vr31_32_0;
  puVar3[0x6b] = unaff_r29;
  puVar3[0x6c] = unaff_r30;
  puVar3[0x6d] = unaff_r31;
  iVar5 = DAT_00902e9c;
  puVar3[0x6a] = unaff_r28;
  pRVar4 = DL_Pass;
  puVar3[0x69] = unaff_r27;
  puVar3[0x68] = unaff_r26;
  puVar3[0x67] = unaff_r25;
  puVar3[0x66] = unaff_r24;
  puVar3[0x65] = unaff_r23;
  puVar3[100] = unaff_r22;
  puVar3[99] = unaff_r21;
  puVar3[0x62] = unaff_r20;
  uVar9 = idol_draw::PackCmd(0,2,0,1,0x80);
  idol_draw::DrawDepth(pRVar4,uVar9);
  iVar18 = EffectTexHeaders;
  pRVar4 = DL_Pass;
  iVar11 = GetEffectTex(0x13);
  FUN_004d676c(pRVar4,0,iVar18 + iVar11 * 0x24,3,3);
  auVar49 = _DAT_00074ee0;
  auVar45 = _DAT_00074ed0;
  auVar46 = _DAT_00074ec0;
  auVar24 = *(undefined1 (*) [16])(iVar5 + 0xa0U & 0xfffffff0);
  auVar27 = *(undefined1 (*) [16])(iVar5 + 0xb0U & 0xfffffff0);
  auVar28 = *(undefined1 (*) [16])(iVar5 + 0xc0U & 0xfffffff0);
  auVar29 = *(undefined1 (*) [16])(iVar5 + 0xd0U & 0xfffffff0);
  auVar30 = vectorPermute(auVar24,auVar28,_DAT_00074eb0);
  auVar32 = vectorPermute(auVar27,auVar29,_DAT_00074eb0);
  auVar33 = vectorPermute(auVar27,auVar28,_DAT_00074eb0);
  auVar35 = vectorPermute(auVar29,auVar24,_DAT_00074eb0);
  auVar47 = vectorMergeHighWord(auVar30,auVar32);
  auVar30 = ZEXT416(0);
  auVar31 = auVar30 | auVar30 << 0x20 | auVar30 << 0x40 | auVar30 << 0x60;
  auVar35 = vectorPermute(auVar33,auVar35,_DAT_00074ed0);
  auVar33 = vectorPermute(auVar24,auVar28,_DAT_00074f00);
  auVar36 = vectorMultiplyAddFloatingPoint(auVar47,auVar47,auVar31);
  auVar38 = vectorPermute(auVar27,auVar29,_DAT_00074f00);
  auVar30 = vectorPermute(auVar28,auVar29,_DAT_00074eb0);
  auVar32 = vectorPermute(auVar24,auVar28,_DAT_00074f10);
  auVar48 = vectorMergeHighWord(auVar33,auVar38);
  auVar38 = vectorPermute(auVar27,auVar29,_DAT_00074f10);
  auVar33 = vectorPermute(auVar24,auVar27,_DAT_00074eb0);
  auVar44 = vectorPermute(auVar29,auVar24,_DAT_00074f10);
  auVar39 = vectorPermute(auVar27,auVar28,_DAT_00074f00);
  auVar38 = vectorMergeHighWord(auVar32,auVar38);
  auVar33 = vectorPermute(auVar30,auVar33,_DAT_00074ed0);
  auVar35 = vectorMultiplyAddFloatingPoint(auVar35,auVar35,auVar36);
  auVar32 = vectorPermute(auVar27,auVar28,_DAT_00074f10);
  auVar36 = vectorMultiplyAddFloatingPoint(auVar48,auVar48,auVar31);
  auVar43 = vectorMultiplyAddFloatingPoint(auVar38,auVar38,auVar31);
  auVar30 = vectorPermute(auVar29,auVar24,_DAT_00074f00);
  auVar32 = vectorPermute(auVar32,auVar44,_DAT_00074ed0);
  auVar39 = vectorPermute(auVar39,auVar30,_DAT_00074ed0);
  auVar30 = vectorPermute(auVar28,auVar29,_DAT_00074f00);
  auVar28 = vectorPermute(auVar28,auVar29,_DAT_00074f10);
  auVar29 = vectorPermute(auVar24,auVar27,_DAT_00074f00);
  auVar24 = vectorPermute(auVar24,auVar27,_DAT_00074f10);
  auVar33 = vectorMultiplyAddFloatingPoint(auVar33,auVar33,auVar35);
  auVar35 = vectorMultiplyAddFloatingPoint(auVar39,auVar39,auVar36);
  auVar27 = vectorMultiplyAddFloatingPoint(auVar32,auVar32,auVar43);
  auVar24 = vectorPermute(auVar28,auVar24,_DAT_00074ed0);
  auVar28 = vectorPermute(auVar30,auVar29,_DAT_00074ed0);
  auVar30 = loadVectorLeftIndexed(0x40,0x74eb0);
  auVar32 = loadVectorLeftIndexed(0x44,0x74eb0);
  auVar30 = auVar30 >> 0x60 & (GPiece<16>)0xffffffff;
  auVar44 = auVar30 | auVar30 << 0x20 | auVar30 << 0x40 | auVar30 << 0x60;
  auVar30 = auVar32 >> 0x60 & (GPiece<16>)0xffffffff;
  auVar43 = auVar30 | auVar30 << 0x20 | auVar30 << 0x40 | auVar30 << 0x60;
  auVar30 = auVar33 >> 0x60 & (GPiece<16>)0xffffffff;
  auVar32 = auVar30 | auVar30 << 0x20 | auVar30 << 0x40 | auVar30 << 0x60;
  auVar30 = vectorMultiplyAddFloatingPoint(auVar28,auVar28,auVar35);
  auVar33 = vectorMultiplyAddFloatingPoint(auVar24,auVar24,auVar27);
  auVar27 = vectorReciprocalSquareRootEstimateFloatingPoint(auVar32);
  auVar30 = auVar30 >> 0x60 & (GPiece<16>)0xffffffff;
  auVar24 = auVar30 | auVar30 << 0x20 | auVar30 << 0x40 | auVar30 << 0x60;
  auVar30 = auVar33 >> 0x60 & (GPiece<16>)0xffffffff;
  auVar33 = auVar30 | auVar30 << 0x20 | auVar30 << 0x40 | auVar30 << 0x60;
  auVar28 = vectorReciprocalSquareRootEstimateFloatingPoint(auVar24);
  auVar30 = vectorMultiplyAddFloatingPoint(auVar27,auVar32,auVar31);
  auVar35 = vectorReciprocalSquareRootEstimateFloatingPoint(auVar33);
  auVar29 = vectorMultiplyAddFloatingPoint(auVar27,auVar44,auVar31);
  iVar18 = 0;
  uVar15 = ZEXT48(&DAT_0095ee40);
  psVar16 = &DAT_0095ee50;
  auVar30 = vectorNegativeMultiplySubtractFloatingPoint(auVar27,auVar30,auVar43);
  auVar24 = vectorMultiplyAddFloatingPoint(auVar28,auVar24,auVar31);
  auVar36 = vectorMultiplyAddFloatingPoint(auVar28,auVar44,auVar31);
  auVar32 = vectorMultiplyAddFloatingPoint(auVar35,auVar33,auVar31);
  auVar39 = vectorMultiplyAddFloatingPoint(auVar35,auVar44,auVar31);
  uVar14 = ZEXT48(&DAT_0095ee44);
  uVar13 = ZEXT48(&DAT_0095ee48);
  uVar12 = ZEXT48(&DAT_0095ee58);
  auVar30 = vectorMultiplyAddFloatingPoint(auVar30,auVar29,auVar27);
  auVar33 = vectorNegativeMultiplySubtractFloatingPoint(auVar28,auVar24,auVar43);
  auVar32 = vectorNegativeMultiplySubtractFloatingPoint(auVar35,auVar32,auVar43);
  auVar24 = vectorCompareEqualToFloatingPoint(auVar30,auVar30);
  auVar33 = vectorMultiplyAddFloatingPoint(auVar33,auVar36,auVar28);
  auVar30 = vectorConditionalSelect(auVar27,auVar30,auVar24);
  auVar36 = vectorMultiplyAddFloatingPoint(auVar47,auVar30,auVar31);
  auVar30 = vectorMultiplyAddFloatingPoint(auVar32,auVar39,auVar35);
  puVar7 = (undefined4 *)(iVar5 + 0x20U & 0xfffffff0);
  uVar26 = puVar7[2];
  uVar25 = puVar7[1];
  uVar23 = *puVar7;
  *(undefined4 *)((int)puVar3 + 0x23c) = puVar7[3];
  *(undefined4 *)(puVar3 + 0x47) = uVar26;
  *(undefined4 *)((int)puVar3 + 0x234) = uVar25;
  *(undefined4 *)(puVar3 + 0x46) = uVar23;
  auVar32 = vectorCompareEqualToFloatingPoint(auVar33,auVar33);
  auVar33 = vectorConditionalSelect(auVar28,auVar33,auVar32);
  auVar32 = vectorCompareEqualToFloatingPoint(auVar30,auVar30);
  auVar39 = vectorMultiplyAddFloatingPoint(auVar48,auVar33,auVar31);
  auVar30 = vectorConditionalSelect(auVar35,auVar30,auVar32);
  auVar32 = loadVectorLeftIndexed(0x78,0x74eb0);
  auVar33 = loadVectorLeftIndexed(0x84,0x74eb0);
  auVar27 = vectorMultiplyAddFloatingPoint(auVar38,auVar30,auVar31);
  auVar24 = loadVectorLeftIndexed(0x80,0x74eb0);
  auVar30 = auVar32 >> 0x60 & (GPiece<16>)0xffffffff;
  auVar28 = loadVectorLeftIndexed(0x88,0x74eb0);
  auVar32 = auVar24 >> 0x60 & (GPiece<16>)0xffffffff;
  auVar33 = auVar33 >> 0x60 & (GPiece<16>)0xffffffff;
  auVar24 = auVar28 >> 0x60 & (GPiece<16>)0xffffffff;
  *(undefined1 (*) [16])(puVar3 + 0x48) = auVar27;
  auVar27 = loadVectorLeftIndexed(0x8c,0x74eb0);
  dVar22 = 0.015625;
  dVar21 = 0.47999998927116394;
  *(undefined1 (*) [16])(puVar3 + 0x24) =
       auVar30 | auVar30 << 0x20 | auVar30 << 0x40 | auVar30 << 0x60;
  auVar28 = loadVectorLeftIndexed(0x90,0x74eb0);
  dVar20 = 0.0;
  *(undefined1 (*) [16])(puVar3 + 0x44) =
       auVar32 | auVar32 << 0x20 | auVar32 << 0x40 | auVar32 << 0x60;
  auVar29 = loadVectorLeftIndexed(0x94,0x74eb0);
  auVar30 = auVar27 >> 0x60 & (GPiece<16>)0xffffffff;
  *(undefined1 (*) [16])(puVar3 + 0x42) =
       auVar33 | auVar33 << 0x20 | auVar33 << 0x40 | auVar33 << 0x60;
  auVar32 = auVar28 >> 0x60 & (GPiece<16>)0xffffffff;
  auVar33 = auVar29 >> 0x60 & (GPiece<16>)0xffffffff;
  auVar35 = loadVectorLeftIndexed(0x7c,0x74eb0);
  auVar27 = loadVectorLeftIndexed(0x98,0x74eb0);
  auVar28 = loadVectorLeftIndexed(0x9c,0x74eb0);
  auVar27 = auVar27 >> 0x60 & (GPiece<16>)0xffffffff;
  *(undefined1 (*) [16])(puVar3 + 0x40) =
       auVar24 | auVar24 << 0x20 | auVar24 << 0x40 | auVar24 << 0x60;
  auVar24 = auVar28 >> 0x60 & (GPiece<16>)0xffffffff;
  *(undefined1 (*) [16])(puVar3 + 0x3e) =
       auVar30 | auVar30 << 0x20 | auVar30 << 0x40 | auVar30 << 0x60;
  *(undefined1 (*) [16])(puVar3 + 0x3c) =
       auVar32 | auVar32 << 0x20 | auVar32 << 0x40 | auVar32 << 0x60;
  *(undefined1 (*) [16])(puVar3 + 0x3a) =
       auVar33 | auVar33 << 0x20 | auVar33 << 0x40 | auVar33 << 0x60;
  auVar30 = loadVectorLeftIndexed(0xa0,0x74eb0);
  *(undefined1 (*) [16])(puVar3 + 0x38) =
       auVar27 | auVar27 << 0x20 | auVar27 << 0x40 | auVar27 << 0x60;
  auVar32 = _DAT_00074f70;
  auVar30 = auVar30 >> 0x60 & (GPiece<16>)0xffffffff;
  *(undefined1 (*) [16])(puVar3 + 0x36) =
       auVar24 | auVar24 << 0x20 | auVar24 << 0x40 | auVar24 << 0x60;
  auVar33 = _DAT_00074f80;
  auVar24 = vectorPermute(auVar36,auVar36,_DAT_00074f80);
  auVar28 = vectorPermute(auVar36,auVar36,auVar32);
  auVar29 = vectorPermute(auVar36,auVar36,auVar46);
  *(undefined1 (*) [16])(puVar3 + 0x34) =
       auVar30 | auVar30 << 0x20 | auVar30 << 0x40 | auVar30 << 0x60;
  auVar38 = *(undefined1 (*) [16])(puVar3 + 0xe);
  auVar30 = vectorPermute(auVar39,auVar39,auVar33);
  *(undefined4 *)((int)puVar3 + 0x19c) = 0xffffffff;
  *(undefined4 *)(puVar3 + 0x33) = 0;
  *(undefined4 *)((int)puVar3 + 0x194) = 0;
  *(undefined4 *)(puVar3 + 0x32) = 0;
  auVar27 = vectorPermute(auVar39,auVar39,auVar32);
  auVar31 = vectorPermute(auVar39,auVar39,auVar46);
  *(undefined1 (*) [16])(puVar3 + 0x30) = auVar24;
  *(undefined1 (*) [16])(puVar3 + 0x2e) = auVar28;
  *(undefined1 (*) [16])(puVar3 + 0x2c) = auVar29;
  auVar24 = _DAT_00074f90;
  *(undefined1 (*) [16])(puVar3 + 0x2a) = auVar30;
  *(undefined1 (*) [16])(puVar3 + 0x28) = auVar27;
  auVar30 = auVar35 >> 0x60 & (GPiece<16>)0xffffffff;
  auVar30 = auVar30 | auVar30 << 0x20 | auVar30 << 0x40 | auVar30 << 0x60;
  *(undefined1 (*) [16])(puVar3 + 0x26) = auVar31;
  do {
    if (0 < *psVar16) {
      auVar29 = loadVectorLeftIndexed(lVar6,uVar15);
      auVar28 = loadVectorLeftIndexed(lVar6,uVar14);
      auVar31 = loadVectorLeftIndexed(lVar6,uVar13);
      auVar27 = vectorPermute(auVar29,auVar28,auVar24);
      auVar35 = vectorPermute(auVar31,auVar38,auVar24);
      auVar47 = vectorPermute(auVar27,auVar35,auVar45);
      auVar27 = ZEXT416(0);
      auVar35 = auVar27 | auVar27 << 0x20 | auVar27 << 0x40 | auVar27 << 0x60;
      auVar38 = vectorSubtractFloatingPoint(*(undefined1 (*) [16])(puVar3 + 0x46),auVar47);
      auVar27 = auVar31 >> 0x60 & (GPiece<16>)0xffffffff;
      auVar28 = auVar28 >> 0x60 & (GPiece<16>)0xffffffff;
      auVar29 = auVar29 >> 0x60 & (GPiece<16>)0xffffffff;
      uVar23 = storeVectorElementWordIndexed
                         (auVar27 | auVar27 << 0x20 | auVar27 << 0x40 | auVar27 << 0x60,0x78,lVar1);
      *(undefined4 *)(puVar3 + 0xf) = uVar23;
      uVar23 = storeVectorElementWordIndexed
                         (auVar28 | auVar28 << 0x20 | auVar28 << 0x40 | auVar28 << 0x60,0x74,lVar1);
      *(undefined4 *)((int)puVar3 + 0x74) = uVar23;
      uVar23 = storeVectorElementWordIndexed
                         (auVar29 | auVar29 << 0x20 | auVar29 << 0x40 | auVar29 << 0x60,0x70,lVar1);
      *(undefined4 *)(puVar3 + 0xe) = uVar23;
      auVar27 = vectorMultiplyAddFloatingPoint(auVar38,auVar38,auVar35);
      auVar28 = vectorPermute(auVar38,auVar38,auVar46);
      auVar29 = vectorPermute(auVar38,auVar38,auVar49);
      auVar27 = vectorMultiplyAddFloatingPoint(auVar28,auVar28,auVar27);
      auVar27 = vectorMultiplyAddFloatingPoint(auVar29,auVar29,auVar27);
      auVar27 = auVar27 >> 0x60 & (GPiece<16>)0xffffffff;
      auVar27 = auVar27 | auVar27 << 0x20 | auVar27 << 0x40 | auVar27 << 0x60;
      auVar29 = vectorReciprocalSquareRootEstimateFloatingPoint(auVar27);
      auVar27 = vectorMultiplyAddFloatingPoint(auVar29,auVar27,auVar35);
      auVar28 = vectorMultiplyAddFloatingPoint(auVar29,auVar44,auVar35);
      auVar27 = vectorNegativeMultiplySubtractFloatingPoint(auVar29,auVar27,auVar43);
      auVar28 = vectorMultiplyAddFloatingPoint(auVar27,auVar28,auVar29);
      auVar27 = vectorCompareEqualToFloatingPoint(auVar28,auVar28);
      auVar27 = vectorConditionalSelect(auVar29,auVar28,auVar27);
      auVar27 = vectorMultiplyAddFloatingPoint(auVar38,auVar27,auVar35);
      auVar27 = vectorMultiplyAddFloatingPoint(auVar27,auVar43,auVar35);
      auVar38 = vectorAddFloatingPoint(auVar47,auVar27);
      *(undefined1 (*) [16])(puVar3 + 0xe) = auVar38;
      uVar2 = *(ushort *)((int)uVar15 + 0x12);
      puVar17 = &DAT_00808080 + (uint)uVar2 * 0x1000000;
      dVar19 = (double)FastIntToDouble((longlong)(short)uVar2 + 0x10);
      dVar19 = (double)(float)((double)((float)(dVar19 * dVar22) * *(float *)((int)uVar15 + 0x1c)) *
                              dVar21);
      if (dVar20 < dVar19) {
        puVar3[0x1e] = 1;
        *(undefined **)((int)puVar3 + 0xcc) = puVar17;
        *(undefined **)(puVar3 + 0x19) = puVar17;
        *(undefined **)((int)puVar3 + 0xc4) = puVar17;
        *(undefined **)(puVar3 + 0x18) = puVar17;
        uVar10 = GetEffectTex(0x13);
        puVar3[0x1f] = uVar10;
        *(undefined4 *)(puVar3 + 0x1a) = 0;
        *(undefined4 *)(puVar3 + 0x1c) = 0;
        *(undefined4 *)((int)puVar3 + 0xd4) = 0;
        *(undefined4 *)(puVar3 + 0x1b) = 0x3f800000;
        *(undefined4 *)(puVar3 + 0x1d) = 0x3f800000;
        auVar27 = ZEXT416(0xffffffff);
        auVar27 = auVar27 | auVar27 << 0x20 | auVar27 << 0x40 | auVar27 << 0x60;
        *(undefined4 *)((int)puVar3 + 0xdc) = 0;
        *(undefined4 *)((int)puVar3 + 0xe4) = 0x3f800000;
        *(undefined4 *)((int)puVar3 + 0xec) = 0x3f800000;
        auVar28 = vectorShiftLeftIntegerWord(auVar27,auVar27);
        puVar3[0x21] = 0;
        auVar29 = loadVectorLeftIndexed(lVar6,uVar12);
        auVar27 = ZEXT416(0);
        auVar47 = auVar27 | auVar27 << 0x20 | auVar27 << 0x40 | auVar27 << 0x60;
        auVar28 = vectorMultiplyAddFloatingPoint
                            (auVar29,*(undefined1 (*) [16])(puVar3 + 0x24),auVar28);
        auVar27 = ZEXT416(3);
        auVar28 = auVar28 >> 0x60 & (GPiece<16>)0xffffffff;
        auVar29 = vectorMultiplyAddFloatingPoint
                            (auVar28 | auVar28 << 0x20 | auVar28 << 0x40 | auVar28 << 0x60,auVar44,
                             auVar47);
        auVar28 = ZEXT416(2);
        auVar28 = auVar28 | auVar28 << 0x20 | auVar28 << 0x40 | auVar28 << 0x60;
        auVar31 = vectorMultiplyAddFloatingPoint
                            (auVar29,*(undefined1 (*) [16])(puVar3 + 0x44),auVar47);
        auVar35 = vectorConditionalSelect(auVar44,auVar31,auVar30);
        auVar31 = vectorAddFloatingPoint(auVar31,auVar35);
        auVar31 = vectorConvertToSignedFixedPointWordSaturate(auVar31,0);
        auVar35 = vectorConvertFromSignedFixedPointWord(auVar31,0);
        auVar31 = vectorLogicalAnd(auVar31,auVar27 | auVar27 << 0x20 | auVar27 << 0x40 |
                                           auVar27 << 0x60);
        auVar27 = ZEXT416(1);
        auVar40 = auVar27 | auVar27 << 0x20 | auVar27 << 0x40 | auVar27 << 0x60;
        auVar27 = vectorNegativeMultiplySubtractFloatingPoint
                            (auVar35,*(undefined1 (*) [16])(puVar3 + 0x42),auVar29);
        auVar29 = vectorNegativeMultiplySubtractFloatingPoint
                            (auVar35,*(undefined1 (*) [16])(puVar3 + 0x40),auVar27);
        auVar27.piece<0,4>() = auVar40.piece<0,4>() + auVar31.piece<0,4>();
        auVar27.piece<8,8>() = SUB168(*(undefined1 (*) [16])(puVar3 + 0x40),0);
        auVar27.piece<4,4>() = auVar40.piece<4,4>() + auVar31.piece<4,4>();
        auVar35.piece<0,8>() = auVar27.piece<0,8>();
        auVar35.piece<8,4>() = auVar40.piece<8,4>() + auVar31.piece<8,4>();
        auVar35.piece<12,4>() = auVar40.piece<12,4>() + auVar31.piece<12,4>();
        auVar48 = vectorLogicalAnd(auVar31,auVar40);
        auVar27 = vectorLogicalAnd(auVar31,auVar28);
        auVar41 = vectorLogicalAnd(auVar35,auVar40);
        auVar34 = vectorCompareEqualToUnsignedWord(auVar48,auVar47);
        auVar31 = vectorCompareEqualToUnsignedWord(auVar27,auVar47);
        auVar28 = vectorLogicalAnd(auVar35,auVar28);
        auVar27 = vectorMultiplyAddFloatingPoint(auVar29,auVar29,auVar47);
        auVar35 = vectorCompareEqualToUnsignedWord(auVar28,auVar47);
        auVar28 = vectorMultiplyAddFloatingPoint
                            (*(undefined1 (*) [16])(puVar3 + 0x3e),auVar27,
                             *(undefined1 (*) [16])(puVar3 + 0x3c));
        auVar48 = vectorMultiplyAddFloatingPoint
                            (*(undefined1 (*) [16])(puVar3 + 0x3a),auVar27,
                             *(undefined1 (*) [16])(puVar3 + 0x38));
        auVar40 = vectorMultiplyAddFloatingPoint(auVar27,auVar29,auVar47);
        auVar41 = vectorCompareEqualToUnsignedWord(auVar41,auVar47);
        auVar28 = vectorMultiplyAddFloatingPoint
                            (auVar28,auVar27,*(undefined1 (*) [16])(puVar3 + 0x36));
        auVar48 = vectorMultiplyAddFloatingPoint
                            (auVar48,auVar27,*(undefined1 (*) [16])(puVar3 + 0x34));
        auVar28 = vectorMultiplyAddFloatingPoint(auVar28,auVar27,auVar43);
        auVar27 = vectorMultiplyAddFloatingPoint(auVar48,auVar40,auVar29);
        auVar29 = vectorConditionalSelect(auVar28,auVar27,auVar34);
        auVar27 = vectorConditionalSelect(auVar28,auVar27,auVar41);
        auVar28 = vectorConditionalSelect(auVar30 ^ auVar29,auVar29,auVar31);
        auVar27 = vectorConditionalSelect(auVar30 ^ auVar27,auVar27,auVar35);
        auVar28 = vectorMultiplyAddFloatingPoint
                            (*(undefined1 (*) [16])(puVar3 + 0x48),auVar28,auVar47);
        lVar6 = 0x110;
        auVar29 = vectorConditionalSelect(auVar28,auVar27,*(undefined1 (*) [16])(puVar3 + 0x32));
        auVar28 = vectorMultiplyAddFloatingPoint(auVar29,auVar36,auVar47);
        auVar31 = vectorPermute(auVar29,auVar29,auVar46);
        auVar27 = auVar29 & (GPiece<16>)0xffffffff;
        auVar48 = auVar27 | auVar27 << 0x20 | auVar27 << 0x40 | auVar27 << 0x60;
        auVar42 = vectorMultiplyAddFloatingPoint(auVar29,auVar39,auVar47);
        auVar41 = vectorPermute(auVar29,auVar29,auVar32);
        auVar37 = vectorPermute(auVar29,auVar29,auVar33);
        auVar40 = vectorMultiplyAddFloatingPoint(auVar48,auVar36,auVar47);
        auVar27 = vectorMultiplyAddFloatingPoint(auVar48,auVar39,auVar47);
        auVar35 = vectorMultiplyAddFloatingPoint
                            (auVar31,*(undefined1 (*) [16])(puVar3 + 0x2c),auVar28);
        auVar28 = vectorPermute(auVar28,auVar28,auVar49);
        auVar34 = vectorMultiplyAddFloatingPoint
                            (auVar31,*(undefined1 (*) [16])(puVar3 + 0x26),auVar42);
        auVar42 = vectorPermute(auVar42,auVar42,auVar49);
        auVar31 = vectorMultiplyAddFloatingPoint
                            (auVar41,*(undefined1 (*) [16])(puVar3 + 0x30),auVar40);
        *(float *)(puVar3 + 0x22) = (float)dVar19;
        auVar28 = vectorAddFloatingPoint(auVar28,auVar35);
        auVar40 = vectorMultiplyAddFloatingPoint
                            (auVar41,*(undefined1 (*) [16])(puVar3 + 0x2a),auVar27);
        auVar34 = vectorAddFloatingPoint(auVar42,auVar34);
        auVar35 = vectorNegativeMultiplySubtractFloatingPoint
                            (auVar37,*(undefined1 (*) [16])(puVar3 + 0x2e),auVar31);
        *(float *)((int)puVar3 + 0x114) = (float)dVar19;
        *(float *)(puVar3 + 0x23) = (float)dVar19;
        *(float *)((int)puVar3 + 0x11c) = (float)dVar19;
        auVar27 = auVar28 >> 0x60 & (GPiece<16>)0xffffffff;
        auVar40 = vectorNegativeMultiplySubtractFloatingPoint
                            (auVar37,*(undefined1 (*) [16])(puVar3 + 0x28),auVar40);
        auVar28 = auVar34 >> 0x60 & (GPiece<16>)0xffffffff;
        auVar31 = vectorMultiplyAddFloatingPoint
                            (auVar27 | auVar27 << 0x20 | auVar27 << 0x40 | auVar27 << 0x60,auVar29,
                             auVar47);
        auVar42 = vectorPermute(auVar35,auVar35,auVar33);
        auVar27 = vectorMultiplyAddFloatingPoint
                            (auVar28 | auVar28 << 0x20 | auVar28 << 0x40 | auVar28 << 0x60,auVar29,
                             auVar47);
        auVar34 = vectorPermute(auVar35,auVar35,auVar32);
        auVar28 = vectorMultiplyAddFloatingPoint(auVar48,auVar35,auVar31);
        auVar29 = vectorPermute(auVar40,auVar40,auVar33);
        auVar27 = vectorMultiplyAddFloatingPoint(auVar48,auVar40,auVar27);
        auVar31 = vectorPermute(auVar40,auVar40,auVar32);
        auVar28 = vectorMultiplyAddFloatingPoint(auVar41,auVar42,auVar28);
        auVar27 = vectorMultiplyAddFloatingPoint(auVar41,auVar29,auVar27);
        auVar28 = vectorNegativeMultiplySubtractFloatingPoint(auVar37,auVar34,auVar28);
        auVar27 = vectorNegativeMultiplySubtractFloatingPoint(auVar37,auVar31,auVar27);
        auVar35 = vectorMultiplyAddFloatingPoint
                            (auVar28,*(undefined1 (*) [16])(puVar3 + 0x22),auVar47);
        auVar31 = vectorMultiplyAddFloatingPoint
                            (auVar27,*(undefined1 (*) [16])(puVar3 + 0x22),auVar47);
        auVar27 = vectorMultiplyAddFloatingPoint(auVar35,auVar44,auVar47);
        auVar28 = vectorMultiplyAddFloatingPoint(auVar31,auVar44,auVar47);
        auVar27 = vectorSubtractFloatingPoint(auVar38,auVar27);
        auVar29 = vectorSubtractFloatingPoint(auVar27,auVar28);
        auVar38 = vectorAddFloatingPoint(auVar29,auVar35);
        auVar27 = auVar29 >> 0x60 & (GPiece<16>)0xffffffff;
        auVar28 = auVar29 >> 0x40 & (GPiece<16>)0xffffffff;
        auVar29 = auVar29 >> 0x20 & (GPiece<16>)0xffffffff;
        uVar23 = storeVectorElementWordIndexed
                           (auVar27 | auVar27 << 0x20 | auVar27 << 0x40 | auVar27 << 0x60,0x80,lVar1
                           );
        *(undefined4 *)(puVar3 + 0x10) = uVar23;
        uVar23 = storeVectorElementWordIndexed
                           (auVar28 | auVar28 << 0x20 | auVar28 << 0x40 | auVar28 << 0x60,0x84,lVar1
                           );
        *(undefined4 *)((int)puVar3 + 0x84) = uVar23;
        uVar23 = storeVectorElementWordIndexed
                           (auVar29 | auVar29 << 0x20 | auVar29 << 0x40 | auVar29 << 0x60,0x88,lVar1
                           );
        *(undefined4 *)(puVar3 + 0x11) = uVar23;
        auVar31 = vectorAddFloatingPoint(auVar38,auVar31);
        auVar27 = auVar38 >> 0x60 & (GPiece<16>)0xffffffff;
        auVar28 = auVar38 >> 0x40 & (GPiece<16>)0xffffffff;
        auVar29 = auVar38 >> 0x20 & (GPiece<16>)0xffffffff;
        uVar23 = storeVectorElementWordIndexed
                           (auVar27 | auVar27 << 0x20 | auVar27 << 0x40 | auVar27 << 0x60,0x90,lVar1
                           );
        *(undefined4 *)(puVar3 + 0x12) = uVar23;
        uVar23 = storeVectorElementWordIndexed
                           (auVar28 | auVar28 << 0x20 | auVar28 << 0x40 | auVar28 << 0x60,0x94,lVar1
                           );
        *(undefined4 *)((int)puVar3 + 0x94) = uVar23;
        uVar23 = storeVectorElementWordIndexed
                           (auVar29 | auVar29 << 0x20 | auVar29 << 0x40 | auVar29 << 0x60,0x98,lVar1
                           );
        *(undefined4 *)(puVar3 + 0x13) = uVar23;
        iVar5 = EffectTexHeaders;
        auVar29 = vectorSubtractFloatingPoint(auVar31,auVar35);
        auVar38 = vectorAddFloatingPoint(auVar29,auVar35);
        auVar27 = auVar29 >> 0x60 & (GPiece<16>)0xffffffff;
        auVar28 = auVar29 >> 0x40 & (GPiece<16>)0xffffffff;
        auVar29 = auVar29 >> 0x20 & (GPiece<16>)0xffffffff;
        uVar23 = storeVectorElementWordIndexed
                           (auVar27 | auVar27 << 0x20 | auVar27 << 0x40 | auVar27 << 0x60,0xa0,lVar1
                           );
        *(undefined4 *)(puVar3 + 0x14) = uVar23;
        uVar23 = storeVectorElementWordIndexed
                           (auVar28 | auVar28 << 0x20 | auVar28 << 0x40 | auVar28 << 0x60,0xa4,lVar1
                           );
        *(undefined4 *)((int)puVar3 + 0xa4) = uVar23;
        uVar23 = storeVectorElementWordIndexed
                           (auVar29 | auVar29 << 0x20 | auVar29 << 0x40 | auVar29 << 0x60,0xa8,lVar1
                           );
        *(undefined4 *)(puVar3 + 0x15) = uVar23;
        auVar27 = auVar38 >> 0x60 & (GPiece<16>)0xffffffff;
        auVar28 = auVar38 >> 0x40 & (GPiece<16>)0xffffffff;
        auVar29 = auVar38 >> 0x20 & (GPiece<16>)0xffffffff;
        *(undefined1 (*) [16])(puVar3 + 0xe) = auVar38;
        uVar23 = storeVectorElementWordIndexed
                           (auVar27 | auVar27 << 0x20 | auVar27 << 0x40 | auVar27 << 0x60,0xb0,lVar1
                           );
        *(undefined4 *)(puVar3 + 0x16) = uVar23;
        uVar23 = storeVectorElementWordIndexed
                           (auVar28 | auVar28 << 0x20 | auVar28 << 0x40 | auVar28 << 0x60,0xb4,lVar1
                           );
        *(undefined4 *)((int)puVar3 + 0xb4) = uVar23;
        uVar23 = storeVectorElementWordIndexed
                           (auVar29 | auVar29 << 0x20 | auVar29 << 0x40 | auVar29 << 0x60,0xb8,lVar1
                           );
        *(undefined4 *)(puVar3 + 0x17) = uVar23;
        *(undefined4 *)((int)puVar3 + 0xbc) = 0x3f800000;
        *(undefined4 *)((int)puVar3 + 0xac) = 0x3f800000;
        *(undefined4 *)((int)puVar3 + 0x9c) = 0x3f800000;
        *(undefined4 *)((int)puVar3 + 0x8c) = 0x3f800000;
        FastDrawQuad(uVar8 - 0x310,0,1,iVar5,9);
      }
    }
    pRVar4 = DL_Pass;
    iVar18 = iVar18 + 1;
    psVar16 = psVar16 + 0x10;
    uVar14 = uVar14 + 0x20;
    uVar13 = uVar13 + 0x20;
    uVar12 = uVar12 + 0x20;
    uVar15 = uVar15 + 0x20;
  } while (iVar18 < 0x20);
  uVar9 = idol_draw::PackCmd(0,1,0,1,0x80);
  idol_draw::DrawDepth(pRVar4,uVar9);
  return;
}


// 0x00758cc (0x1e0 bytes)
void DrawWaterPatch_A(int *param_1)

{
  short sVar1;
  short sVar2;
  short sVar3;
  int iVar4;
  ulonglong uVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  
  if (*(short *)(param_1 + 1) != 0) {
    uVar5 = (ulonglong)DAT_0071f070;
    DAT_0071f070 = (uint)(1 - uVar5);
    STUB_000e9130(*(undefined4 *)*param_1,*(short *)(*param_1 + 0xe) >> 4,
                        *(undefined4 *)(&DAT_0071f074 + (int)((1 - uVar5 & 0xffffffff) << 2)));
    iVar7 = 0;
    if (0 < *(short *)(param_1 + 1)) {
      iVar8 = 0;
      do {
        iVar6 = *param_1 + iVar8;
        iVar4 = *(int *)(&DAT_0071f074 + DAT_0071f070 * 4);
        sVar1 = *(short *)(iVar6 + 0xc);
        sVar2 = *(short *)(iVar6 + 8);
        sVar3 = *(short *)(iVar6 + 10);
        STUB_000e9134();
        uVar5 = (ulonglong)DAT_0071f070;
        iVar7 = iVar7 + 1;
        DAT_0071f070 = (uint)(1 - uVar5);
        if (iVar7 < *(short *)(param_1 + 1)) {
          STUB_000e9130(*(undefined4 *)(*param_1 + iVar8 + 0x10),
                              *(short *)(*param_1 + iVar8 + 0x1e) >> 4,
                              *(undefined4 *)(&DAT_0071f074 + (int)((1 - uVar5 & 0xffffffff) << 2)))
          ;
        }
        STUB_00077c60(iVar4 + sVar2,&DAT_70002000,*(undefined2 *)(*param_1 + iVar8 + 4));
        STUB_00077c68(*(undefined2 *)(*param_1 + iVar8 + 6),iVar4 + sVar1,iVar4 + sVar3,
                            &DAT_70002000);
        iVar8 = iVar8 + 0x10;
      } while (iVar7 < *(short *)(param_1 + 1));
    }
  }
  return;
}


// 0x0075aac (0x1f0 bytes)
void DrawWaterPatch_B(int *param_1)

{
  short sVar1;
  short sVar2;
  short sVar3;
  int iVar4;
  ulonglong uVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  
  if (*(short *)(param_1 + 1) != 0) {
    uVar5 = (ulonglong)DAT_0071f070;
    DAT_0071f070 = (uint)(1 - uVar5);
    STUB_000e9130(*(undefined4 *)*param_1,*(short *)(*param_1 + 0xe) >> 4,
                        *(undefined4 *)(&DAT_0071f074 + (int)((1 - uVar5 & 0xffffffff) << 2)));
    iVar7 = 0;
    if (0 < *(short *)(param_1 + 1)) {
      iVar8 = 0;
      do {
        iVar6 = *param_1 + iVar8;
        iVar4 = *(int *)(&DAT_0071f074 + DAT_0071f070 * 4);
        sVar1 = *(short *)(iVar6 + 0xc);
        sVar2 = *(short *)(iVar6 + 8);
        sVar3 = *(short *)(iVar6 + 10);
        STUB_000e9134();
        uVar5 = (ulonglong)DAT_0071f070;
        iVar7 = iVar7 + 1;
        DAT_0071f070 = (uint)(1 - uVar5);
        if (iVar7 < *(short *)(param_1 + 1)) {
          STUB_000e9130(*(undefined4 *)(*param_1 + iVar8 + 0x10),
                              *(short *)(*param_1 + iVar8 + 0x1e) >> 4,
                              *(undefined4 *)(&DAT_0071f074 + (int)((1 - uVar5 & 0xffffffff) << 2)))
          ;
        }
        STUB_00077c64(iVar4 + sVar2,&DAT_70002000,iVar4 + sVar3,0x70003000,
                            *(undefined2 *)(*param_1 + iVar8 + 4));
        STUB_00077c6c(*(undefined2 *)(*param_1 + iVar8 + 6),iVar4 + sVar1,0x70003000,
                            &DAT_70002000);
        iVar8 = iVar8 + 0x10;
      } while (iVar7 < *(short *)(param_1 + 1));
    }
  }
  return;
}


// 0x0075cc8 (0x208 bytes)
void AnimateWaveUVs(int *param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  short *psVar12;
  short sVar14;
  short *psVar13;
  short *psVar15;
  int iVar16;
  
  sVar14 = *(short *)(param_1 + 1);
  iVar10 = *param_1;
  if (sVar14 != 0) {
    iVar11 = 0;
    psVar12 = &DAT_0095f240;
    fVar1 = (float)(longlong)(int)(worldUpdateTime & 0x3fff) * 6.28 * 6.1035156e-05 - 3.14;
    fVar2 = fVar1 + 1.5707963;
    fVar3 = 3.1415925 - fVar1;
    if (fVar1 - (3.1415925 - fVar1) < 0.0) {
      fVar3 = fVar1;
    }
    fVar5 = 3.1415925 - fVar2;
    if (fVar2 - (3.1415925 - fVar2) < 0.0) {
      fVar5 = fVar2;
    }
    fVar4 = -3.1415925 - fVar1;
    if ((-3.1415925 - fVar1) - fVar3 < 0.0) {
      fVar4 = fVar3;
    }
    fVar1 = -3.1415925 - fVar2;
    if ((-3.1415925 - fVar2) - fVar5 < 0.0) {
      fVar1 = fVar5;
    }
    fVar2 = fVar4 * fVar4;
    fVar3 = fVar1 * fVar1;
    fVar7 = fVar2 * fVar2 * fVar4;
    fVar5 = fVar3 * fVar3 * fVar1;
    fVar8 = fVar2 * fVar7;
    fVar6 = fVar3 * fVar5;
    if (0 < sVar14) {
      iVar9 = 0;
      do {
        iVar16 = 0;
        psVar15 = (short *)(*(int *)(iVar10 + iVar9) + (int)*(short *)(iVar10 + iVar9 + 10));
        psVar13 = psVar12;
        if (0 < *(short *)(iVar10 + iVar9 + 4)) {
          do {
            iVar10 = *param_1;
            psVar12 = psVar13 + 2;
            iVar16 = iVar16 + 1;
            *psVar15 = *psVar13 +
                       (short)(int)((fVar3 * fVar6 * 2.601887e-06 +
                                    fVar6 * -0.0001980741 +
                                    fVar5 * 0.0083330255 + fVar3 * fVar1 * -0.16666657 + fVar1) *
                                   4096.0) + 0x1000;
            psVar15[1] = psVar13[1] +
                         (short)(int)((fVar2 * fVar8 * 2.601887e-06 +
                                      fVar8 * -0.0001980741 +
                                      fVar7 * 0.0083330255 + fVar2 * fVar4 * -0.16666657 + fVar4) *
                                     4096.0) + 0x1000;
            psVar13 = psVar13 + 2;
            psVar15 = psVar15 + 2;
          } while (iVar16 < *(short *)(iVar10 + iVar9 + 4));
          sVar14 = *(short *)(param_1 + 1);
        }
        iVar11 = iVar11 + 1;
        iVar9 = iVar9 + 0x10;
      } while (iVar11 < sVar14);
    }
  }
  return;
}


// 0x0075ed0 (0xe0 bytes)
void ____Water_CopyPatchUVs(int *param_1,undefined2 *param_2)

{
  int iVar1;
  short sVar3;
  undefined2 *puVar2;
  int iVar4;
  int iVar5;
  undefined2 *puVar6;
  int iVar7;
  
  sVar3 = *(short *)(param_1 + 1);
  if ((sVar3 != 0) && (iVar7 = 0, 0 < sVar3)) {
    iVar4 = *param_1;
    iVar1 = 0;
    do {
      iVar5 = 0;
      puVar6 = (undefined2 *)(*(int *)(iVar4 + iVar1) + (int)*(short *)(iVar4 + iVar1 + 10));
      puVar2 = param_2;
      if (0 < *(short *)(iVar4 + iVar1 + 4)) {
        do {
          iVar4 = *param_1;
          iVar5 = iVar5 + 1;
          *puVar2 = *puVar6;
          puVar2[1] = puVar6[1];
          param_2 = puVar2 + 2;
          puVar6 = puVar6 + 2;
          puVar2 = puVar2 + 2;
        } while (iVar5 < *(short *)(iVar4 + iVar1 + 4));
        sVar3 = *(short *)(param_1 + 1);
      }
      iVar7 = iVar7 + 1;
      iVar1 = iVar1 + 0x10;
    } while (iVar7 < sVar3);
  }
  return;
}


// 0x0075fb0 (0x34 bytes)
void DrawWaterPatch(int param_1)

{
  if (*(short *)(param_1 + 6) == 0) {
    DrawWaterPatch_A();
  }
  else {
    DrawWaterPatch_B();
  }
  return;
}


// 0x0075ff0 (0x338 bytes)
void ____Water_ComputeWaveGrid(double param_1,double param_2,double param_3)

{
  undefined2 uVar1;
  short sVar2;
  short sVar3;
  int iVar4;
  ulonglong uVar5;
  short *psVar6;
  int in_r6;
  ulonglong in_r7;
  ulonglong uVar7;
  undefined4 *in_r8;
  undefined4 *in_r9;
  ulonglong uVar8;
  longlong lVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  ulonglong uVar13;
  longlong lVar14;
  longlong lVar15;
  GPiece<16> auVar16;
  GPiece<16> auVar17;
  GPiece<16> auVar18;
  GPiece<16> auVar19;
  GPiece<16> auVar20;
  GPiece<16> auVar21;
  GPiece<16> auVar22;
  GPiece<16> auVar24;
  GPiece<16> auVar25;
  GPiece<16> auVar26;
  GPiece<16> auVar28;
  GPiece<16> auVar29;
  GPiece<16> auVar30;
  GPiece<16> auVar31;
  GPiece<16> auVar23;
  GPiece<16> auVar27;
  
  auVar18 = ZEXT416(0);
  auVar16 = auVar18 | auVar18 << 0x20 | auVar18 << 0x40 | auVar18 << 0x60;
  iVar4 = 0;
  auVar25.piece<0,4>() = (float)param_2;
  auVar25.piece<4,4>() = (float)param_2;
  auVar25.piece<8,4>() = (float)param_2;
  auVar25.piece<12,4>() = (float)param_2;
  uVar7 = 0;
  auVar18 = ZEXT416(8);
  auVar24 = auVar18 | auVar18 << 0x20 | auVar18 << 0x40 | auVar18 << 0x60;
  auVar19.piece<0,4>() = (float)param_1;
  auVar19.piece<4,4>() = (float)param_1;
  auVar19.piece<8,4>() = (float)param_1;
  auVar19.piece<12,4>() = (float)param_1;
  *(short *)((int)in_r9 + 6) = (short)in_r6;
  *(undefined2 *)(in_r9 + 1) = 1;
  *in_r9 = in_r8;
  *in_r8 = (int)in_r7;
  *(undefined2 *)(in_r8 + 1) = 0x100;
  *(undefined2 *)((int)in_r8 + 6) = 0xe1;
  *(undefined2 *)(in_r8 + 2) = 0;
  auVar29 = loadVectorLeftIndexed(0x30,0x75fe4);
  auVar18.piece<0,4>() = (float)param_3;
  auVar18.piece<4,4>() = (float)param_3;
  auVar18.piece<8,4>() = (float)param_3;
  auVar18.piece<12,4>() = (float)param_3;
  auVar17 = vectorConvertToSignedFixedPointWordSaturate(auVar18,0);
  auVar18 = auVar29 >> 0x60 & (GPiece<16>)0xffffffff;
  auVar29 = auVar18 | auVar18 << 0x20 | auVar18 << 0x40 | auVar18 << 0x60;
  auVar18 = vectorSplatHalfWord(auVar17,1);
  uVar5 = in_r7;
  auVar17 = auVar16;
  do {
    auVar20 = vectorSubtractUnsignedWordModulo(auVar17,auVar24);
    auVar20 = vectorConvertFromSignedFixedPointWord(auVar20,0);
    lVar9 = uVar5 + 2;
    lVar14 = 0x10;
    auVar20 = vectorMultiplyAddFloatingPoint(auVar20,auVar29,auVar25);
    auVar20 = vectorConvertToSignedFixedPointWordSaturate(auVar20,0);
    auVar21 = vectorSplatHalfWord(auVar20,1);
    lVar15 = uVar5 + 4;
    uVar13 = uVar5;
    auVar20 = auVar16;
    do {
      auVar30 = vectorSubtractUnsignedWordModulo(auVar20,auVar24);
      auVar28.piece<0,4>() = auVar20.piece<0,4>() + 1;
      auVar28.piece<8,8>() = auVar20.piece<8,8>();
      auVar28.piece<4,4>() = auVar20.piece<4,4>() + 1;
      auVar31.piece<0,8>() = auVar28.piece<0,8>();
      auVar31.piece<12,4>() = auVar20.piece<12,4>();
      auVar31.piece<8,4>() = auVar20.piece<8,4>() + 1;
      auVar20.piece<0,12>() = auVar31.piece<0,12>();
      auVar20.piece<12,4>() = auVar31.piece<12,4>() + 1;
      auVar31 = vectorConvertFromSignedFixedPointWord(auVar30,0);
      auVar31 = vectorMultiplyAddFloatingPoint(auVar31,auVar29,auVar19);
      auVar31 = vectorConvertToSignedFixedPointWordSaturate(auVar31,0);
      auVar31 = vectorSplatHalfWord(auVar31,1);
      uVar1 = storeVectorElementHalfWordIndexed(auVar31,0,uVar13);
      *(undefined2 *)uVar13 = uVar1;
      uVar1 = storeVectorElementHalfWordIndexed(auVar21,0,lVar9);
      *(undefined2 *)lVar9 = uVar1;
      uVar1 = storeVectorElementHalfWordIndexed(auVar18,0,lVar15);
      *(undefined2 *)lVar15 = uVar1;
      lVar9 = lVar9 + 6;
      uVar5 = uVar13 + 6;
      lVar14 = lVar14 + -1;
      lVar15 = lVar15 + 6;
      uVar13 = uVar13 + 6;
    } while (lVar14 != 0);
    iVar4 = iVar4 + 1;
    auVar21.piece<0,4>() = auVar17.piece<0,4>() + 1;
    auVar21.piece<8,8>() = auVar17.piece<8,8>();
    auVar21.piece<4,4>() = auVar17.piece<4,4>() + 1;
    auVar30.piece<0,8>() = auVar21.piece<0,8>();
    auVar30.piece<12,4>() = auVar17.piece<12,4>();
    auVar30.piece<8,4>() = auVar17.piece<8,4>() + 1;
    auVar17.piece<0,12>() = auVar30.piece<0,12>();
    auVar17.piece<12,4>() = auVar30.piece<12,4>() + 1;
  } while (iVar4 < 0x10);
  sVar2 = (short)in_r7;
  iVar4 = 0;
  *(short *)((int)in_r8 + 10) = (short)uVar5 - sVar2;
  auVar18 = loadVectorLeftIndexed(4,0x75fe4);
  iVar11 = 0;
  auVar18 = auVar18 >> 0x60 & (GPiece<16>)0xffffffff;
  auVar18 = auVar18 | auVar18 << 0x20 | auVar18 << 0x40 | auVar18 << 0x60;
  auVar24 = auVar16;
  do {
    auVar19 = vectorConvertFromSignedFixedPointWord(auVar24,0);
    auVar25 = ZEXT416(0xffffffff);
    auVar25 = auVar25 | auVar25 << 0x20 | auVar25 << 0x40 | auVar25 << 0x60;
    iVar12 = 0;
    auVar25 = vectorShiftLeftIntegerWord(auVar25,auVar25);
    auVar25 = vectorMultiplyAddFloatingPoint(auVar19,auVar18,auVar25);
    auVar25 = vectorConvertToSignedFixedPointWordSaturate(auVar25,0);
    auVar25 = vectorSplatHalfWord(auVar25,1);
    uVar13 = uVar5;
    auVar29 = auVar16;
    iVar10 = iVar11;
    do {
      auVar17 = vectorConvertFromSignedFixedPointWord(auVar29,0);
      auVar19 = ZEXT416(0xffffffff);
      auVar19 = auVar19 | auVar19 << 0x20 | auVar19 << 0x40 | auVar19 << 0x60;
      auVar19 = vectorShiftLeftIntegerWord(auVar19,auVar19);
      auVar19 = vectorMultiplyAddFloatingPoint(auVar17,auVar18,auVar19);
      auVar19 = vectorConvertToSignedFixedPointWordSaturate(auVar19,0);
      psVar6 = (short *)uVar5;
      if (in_r6 == 0) {
        if ((((iVar12 == 0) || (iVar4 == 0)) || (iVar12 == 0xf)) || (iVar4 == 0xf)) {
          *psVar6 = 0x6060;
          *(undefined2 *)((int)uVar13 + 2) = 0x8060;
          uVar5 = uVar13;
        }
        else {
          sVar3 = (short)iVar10 + (short)(iVar10 / 0x50) * -0x50;
          psVar6[1] = sVar3 + -0x7fd0;
          *psVar6 = sVar3 * 0x101 + 0x3030;
        }
      }
      else {
        auVar19 = vectorSplatHalfWord(auVar19,1);
        sVar3 = storeVectorElementHalfWordIndexed(auVar19,0,uVar5);
        *psVar6 = sVar3;
        sVar3 = storeVectorElementHalfWordIndexed(auVar25,2,uVar5);
        psVar6[1] = sVar3;
      }
      iVar12 = iVar12 + 1;
      auVar26.piece<0,4>() = auVar29.piece<0,4>() + 1;
      auVar26.piece<8,8>() = auVar29.piece<8,8>();
      auVar26.piece<4,4>() = auVar29.piece<4,4>() + 1;
      auVar27.piece<0,8>() = auVar26.piece<0,8>();
      auVar27.piece<12,4>() = auVar29.piece<12,4>();
      auVar27.piece<8,4>() = auVar29.piece<8,4>() + 1;
      auVar29.piece<0,12>() = auVar27.piece<0,12>();
      auVar29.piece<12,4>() = auVar27.piece<12,4>() + 1;
      uVar5 = uVar5 + 4;
      iVar10 = iVar10 + 5;
      uVar13 = uVar13 + 4;
    } while (iVar12 < 0x10);
    iVar4 = iVar4 + 1;
    auVar22.piece<0,4>() = auVar24.piece<0,4>() + 1;
    auVar22.piece<8,8>() = auVar24.piece<8,8>();
    auVar22.piece<4,4>() = auVar24.piece<4,4>() + 1;
    auVar23.piece<0,8>() = auVar22.piece<0,8>();
    auVar23.piece<12,4>() = auVar24.piece<12,4>();
    auVar23.piece<8,4>() = auVar24.piece<8,4>() + 1;
    auVar24.piece<0,12>() = auVar23.piece<0,12>();
    auVar24.piece<12,4>() = auVar23.piece<12,4>() + 1;
    iVar11 = iVar11 + 0x17;
  } while (iVar4 < 0x10);
  iVar4 = 0;
  *(short *)(in_r8 + 3) = (short)uVar5 - sVar2;
  do {
    lVar15 = 0xf;
    uVar13 = uVar7;
    uVar8 = uVar5;
    do {
      *(ushort *)uVar8 = (ushort)((uVar13 + 1 & 0xffffffff) << 8) | (ushort)uVar13 & 0xff;
      uVar5 = uVar8 + 4;
      ((ushort *)uVar8)[1] =
           (ushort)((uVar13 + 0x11 & 0xffffffff) << 8) | (ushort)uVar13 + 0x10 & 0xff;
      lVar15 = lVar15 + -1;
      uVar13 = uVar13 + 1;
      uVar8 = uVar8 + 4;
    } while (lVar15 != 0);
    iVar4 = iVar4 + 1;
    uVar7 = uVar7 + 0x10;
  } while (iVar4 < 0xf);
  for (; (uVar5 & 0xf) != 0; uVar5 = uVar5 + 2) {
  }
  *(short *)((int)in_r8 + 0xe) = (short)uVar5 - sVar2;
  return;
}


// 0x0076328 (0x128 bytes)
void ____Water_SetPassTextures(undefined8 param_1,undefined8 param_2)

{
  RenderingStep *pRVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = EffectTexHeaders;
  pRVar1 = ForwardPass;
  iVar3 = GetEffectTex();
  FUN_004d676c(pRVar1,0,iVar2 + iVar3 * 0x24,1,1);
  iVar2 = EffectTexHeaders;
  pRVar1 = ForwardPass;
  iVar3 = GetEffectTex(param_2);
  FUN_004d676c(pRVar1,1,iVar2 + iVar3 * 0x24,1,1);
  iVar2 = EffectTexHeaders;
  pRVar1 = DepthPass;
  iVar3 = GetEffectTex(param_1);
  FUN_004d676c(pRVar1,0,iVar2 + iVar3 * 0x24,1,1);
  return;
}


// 0x0076458 (0x128 bytes)
void ____Water_InitPatches(void)

{
  undefined2 *puVar1;
  int iVar2;
  int iVar3;
  undefined2 *puVar4;
  int iVar5;
  int *piVar6;
  undefined2 *puVar7;
  undefined2 *puVar8;
  undefined8 uVar9;
  
  uVar9 = 0;
  ____Water_ComputeWaveGrid(0,0,0xc028000000000000);
  ____Water_ComputeWaveGrid(uVar9,uVar9,uVar9);
  puVar4 = &DAT_0095f240;
  if (DAT_0096366c != 0) {
    iVar3 = 0;
    iVar2 = (int)DAT_0096366c;
    piVar6 = DAT_00963668;
    if (0 < iVar2) {
      do {
        puVar8 = (undefined2 *)(*piVar6 + (int)*(short *)((int)piVar6 + 10));
        iVar5 = (int)*(short *)(piVar6 + 1);
        puVar7 = puVar4;
        if (0 < *(short *)(piVar6 + 1)) {
          do {
            iVar5 = iVar5 + -1;
            *puVar7 = *puVar8;
            puVar1 = puVar8 + 1;
            puVar8 = puVar8 + 2;
            puVar4 = puVar7 + 2;
            puVar7[1] = *puVar1;
            puVar7 = puVar7 + 2;
          } while (0 < iVar5);
        }
        iVar3 = iVar3 + 1;
        piVar6 = piVar6 + 4;
      } while (iVar3 < iVar2);
    }
  }
  return;
}


// 0x0076580 (0x344 bytes)
void DrawWater(void)

{
  uint uVar1;
  RenderingStep *pRVar2;
  int iVar3;
  undefined1 uVar6;
  int iVar5;
  undefined8 uVar4;
  uint uVar7;
  int iVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  
  uVar1 = worldUpdateTime / 0x32;
  uVar7 = uVar1 + 1;
  iVar8 = uVar1 + (((int)uVar1 >> 2) + (uint)((int)uVar1 < 0 && (uVar1 & 3) != 0)) * -4 + 0x28;
  AnimateWaveUVs(&DAT_00963668);
  dVar9 = (double)g_ViewContext.fogNearDist;
  dVar10 = (double)g_ViewContext.fogFarDist;
  dVar11 = (double)g_ViewContext.fogNearIntensity;
  dVar12 = (double)g_ViewContext.fogFarIntensity;
  SetGSReg(10,FUN_00606060);
  g_ViewContext.fogFarDist = 143360.0;
  g_ViewContext.fogNearDist = 10000.0;
  g_ViewContext.fogNearIntensity = 160.0;
  g_ViewContext.fogFarIntensity = 0.0;
  UpdateViewContext();
  ComposeCameraMatrix();
  *g_pPacket = 5;
  g_pPacket[1] = 0x80;
  g_pPacket[2] = 0;
  uVar6 = Gs_DmaTagByte(5,0);
  g_pPacket[3] = uVar6;
  g_pPacket = g_pPacket + 0x10;
  if (DAT_00961656 == 0) {
    DrawWaterPatch_A();
  }
  else {
    DrawWaterPatch_B();
  }
  iVar3 = EffectTexHeaders;
  pRVar2 = ForwardPass;
  iVar5 = GetEffectTex(iVar8);
  FUN_004d676c(pRVar2,0,iVar3 + iVar5 * 0x24,1,1);
  iVar3 = EffectTexHeaders;
  pRVar2 = ForwardPass;
  iVar5 = GetEffectTex(uVar1 + (((int)uVar7 >> 2) + (uint)((int)uVar7 < 0 && (uVar7 & 3) != 0)) * -4
                       + 0x29);
  FUN_004d676c(pRVar2,1,iVar3 + iVar5 * 0x24,1,1);
  iVar3 = EffectTexHeaders;
  pRVar2 = DepthPass;
  iVar8 = GetEffectTex(iVar8);
  FUN_004d676c(pRVar2,0,iVar3 + iVar8 * 0x24,1,1);
  *g_pPacket = 5;
  g_pPacket[1] = 0xd0;
  g_pPacket[2] = 0;
  uVar6 = Gs_DmaTagByte(5,0);
  g_pPacket[3] = uVar6;
  g_pPacket = g_pPacket + 0x10;
  if (DAT_0096366e == 0) {
    DrawWaterPatch_A(&DAT_00963668);
  }
  else {
    DrawWaterPatch_B(&DAT_00963668);
  }
  g_ViewContext.fogNearDist = (float)dVar9;
  g_ViewContext.fogFarDist = (float)dVar10;
  g_ViewContext.fogNearIntensity = (float)dVar11;
  g_ViewContext.fogFarIntensity = (float)dVar12;
  uVar4 = FUN_00503024(g_ViewContext.fogR,g_ViewContext.fogG,g_ViewContext.fogB);
  SetGSReg(10,uVar4);
  UpdateViewContext();
  ComposeCameraMatrix();
  return;
}


// 0x00768e8 (0x748 bytes)
void ____Draw_EffectStrip_M401(undefined8 param_1,undefined8 param_2)

{
  double dVar1;
  double dVar2;
  uint uVar3;
  undefined1 *puVar4;
  undefined8 uVar5;
  undefined1 uVar6;
  int iVar7;
  int iVar8;
  longlong lVar9;
  int iVar10;
  undefined8 *puVar11;
  ulonglong uVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  double dVar16;
  double dVar17;
  double dVar18;
  double dVar19;
  
  dVar16 = 1.0;
  dVar14 = (double)(GameCamera.mtx0.v2.z + GameCamera.mtx0.v3.z);
  uVar5 = GetEffectTex(param_2);
  SetGSReg(0x18,uVar5);
  uVar5 = SCE_GS_SET_TEX1(0,0,1,1,1,0,0xff90);
  SetGSReg(0x1a,uVar5);
  uVar5 = SCE_GS_SET_CLAMP(0,1,0,0,0,0);
  SetGSReg(6,uVar5);
  uVar5 = idol_draw::PackCmd(0,1,0,1,0x80);
  SetGSReg(3,uVar5);
  iVar10 = 0;
  *g_pPacket = 0x7d;
  g_pPacket[1] = 0;
  g_pPacket[2] = 0;
  uVar6 = Gs_DmaTagByte(0x7d,0);
  g_pPacket[3] = uVar6;
  puVar4 = g_pPacket;
  g_pPacket = g_pPacket + 0x10;
  uVar5 = SCE_GIF_SET_TAG(1,0,0,0,0,3);
  *(undefined8 *)(puVar4 + 0x10) = uVar5;
  *(undefined8 *)(puVar4 + 0x18) = 0xeeee;
  uVar5 = idol_draw::Blend(0,5,1,0,0,0,1,2);
  *(undefined8 *)(puVar4 + 0x20) = uVar5;
  *(undefined8 *)(puVar4 + 0x28) = 0x16;
  uVar5 = VU1_addGSregister(GSmem.zbuf >> 0xd,1,1);
  *(undefined8 *)(puVar4 + 0x30) = uVar5;
  *(undefined8 *)(puVar4 + 0x38) = 0x21;
  uVar5 = SCE_GS_SET_PRIM(0xf,0,1,0,1,0,0,0);
  *(undefined8 *)(puVar4 + 0x40) = uVar5;
  *(undefined8 *)(puVar4 + 0x48) = 0xe;
  uVar5 = SCE_GIF_SET_TAG(0x30,1,0,0,1,5);
  *(undefined8 *)(puVar4 + 0x50) = uVar5;
  dVar19 = (double)(float)(dVar16 - dVar14);
  uVar3 = worldUpdateTime >> 3;
  *(undefined8 *)(puVar4 + 0x58) = 0x42421;
  uVar12 = 10;
  iVar7 = 0;
  dVar17 = 0.00390625;
  dVar18 = 0.0625;
  puVar11 = (undefined8 *)(puVar4 + 0x60);
  dVar15 = -(double)((GameCamera.rot.radius + 3.14) * 4.0 * 0.15923566 - 4.0);
  dVar13 = (double)(float)((double)(longlong)(int)(uVar3 & 0xff) * 0.00390625 + dVar15);
  iVar8 = 0x50;
  do {
    uVar5 = FUN_00502f74_RET_0(0x80,0x80,0x80,0x60,0x3a83126f);
    *puVar11 = uVar5;
    dVar2 = dVar19 * 0.0010000000474974513;
    dVar1 = (double)(float)((double)(longlong)iVar7 + dVar16) * dVar18 + dVar13;
    uVar5 = FUN_00503034((float)((double)(longlong)iVar7 * dVar18 + dVar13) * 0.001,
                         -(float)(dVar14 * 0.0010000000474974513));
    *(undefined8 *)(puVar4 + iVar8 + 0x18) = uVar5;
    uVar5 = SCE_GS_SET_XYZ(iVar10 + 0x7000,0x7200,0);
    *(undefined8 *)(puVar4 + iVar8 + 0x20) = uVar5;
    uVar5 = FUN_00503034((float)dVar1 * 0.001,(float)dVar2);
    *(undefined8 *)(puVar4 + iVar8 + 0x28) = uVar5;
    uVar5 = SCE_GS_SET_XYZ(iVar10 + 0x7200,0x8df0,16000);
    iVar7 = iVar7 + 1;
    uVar12 = uVar12 + 5;
    puVar11 = puVar11 + 5;
    *(undefined8 *)(puVar4 + iVar8 + 0x30) = uVar5;
    iVar10 = iVar10 + 0x200;
    iVar8 = iVar8 + 0x28;
  } while (iVar7 < 0x10);
  iVar7 = 0;
  lVar9 = (uVar12 & 0x1fffffff) << 3;
  iVar8 = 0;
  dVar13 = (double)(float)((double)(float)((double)(longlong)
                                                   (int)((worldUpdateTime >> 4) + 0x5aU & 0xff) *
                                           dVar17 + 1.5) + dVar15);
  do {
    uVar5 = FUN_00502f74_RET_0(0x80,0x80,0x80,0x60,0x3ada740e);
    iVar10 = (int)lVar9;
    *(undefined8 *)(puVar4 + iVar10 + 0x10) = uVar5;
    dVar2 = dVar19 * 0.0016666667070239782;
    dVar1 = (double)(float)((double)(longlong)iVar8 + dVar16) * dVar18 + dVar13;
    uVar5 = FUN_00503034((float)((double)(longlong)iVar8 * dVar18 + dVar13) * 0.0016666667,
                         -(float)(dVar14 * 0.0016666667070239782));
    *(undefined8 *)(puVar4 + iVar10 + 0x18) = uVar5;
    uVar5 = SCE_GS_SET_XYZ(iVar7 + 0x7000,0x7200,0);
    *(undefined8 *)(puVar4 + iVar10 + 0x20) = uVar5;
    uVar5 = FUN_00503034((float)dVar1 * 0.0016666667,(float)dVar2);
    *(undefined8 *)(puVar4 + iVar10 + 0x28) = uVar5;
    uVar5 = SCE_GS_SET_XYZ(iVar7 + 0x7200,0x8df0,0x2580);
    iVar8 = iVar8 + 1;
    uVar12 = uVar12 + 5;
    lVar9 = lVar9 + 0x28;
    iVar7 = iVar7 + 0x200;
    *(undefined8 *)(puVar4 + iVar10 + 0x30) = uVar5;
  } while (iVar8 < 0x10);
  lVar9 = (uVar12 & 0x1fffffff) << 3;
  iVar7 = 0;
  iVar8 = 0;
  dVar13 = (double)(float)((double)(float)((double)(longlong)
                                                   (int)((worldUpdateTime >> 5) + 0xb4U & 0xff) *
                                           dVar17 + 3.0) + dVar15);
  do {
    uVar5 = FUN_00502f74_RET_0(0x80,0x80,0x80,0x60,0x3b5a740e);
    iVar10 = (int)lVar9;
    *(undefined8 *)(puVar4 + iVar10 + 0x10) = uVar5;
    dVar17 = dVar19 * 0.0033333334140479565;
    dVar15 = (double)(float)((double)(longlong)iVar8 + dVar16) * dVar18 + dVar13;
    uVar5 = FUN_00503034((float)((double)(longlong)iVar8 * dVar18 + dVar13) * 0.0033333334,
                         -(float)(dVar14 * 0.0033333334140479565));
    *(undefined8 *)(puVar4 + iVar10 + 0x18) = uVar5;
    uVar5 = SCE_GS_SET_XYZ(iVar7 + 0x7000,0x7200,0);
    *(undefined8 *)(puVar4 + iVar10 + 0x20) = uVar5;
    uVar5 = FUN_00503034((float)dVar15 * 0.0033333334,(float)dVar17);
    *(undefined8 *)(puVar4 + iVar10 + 0x28) = uVar5;
    uVar5 = SCE_GS_SET_XYZ(iVar7 + 0x7200,0x8df0,0x12c0);
    iVar8 = iVar8 + 1;
    lVar9 = lVar9 + 0x28;
    iVar7 = iVar7 + 0x200;
    *(undefined8 *)(puVar4 + iVar10 + 0x30) = uVar5;
  } while (iVar8 < 0x10);
  g_pPacket = g_pPacket + 2000;
  return;
}


// 0x0077048 (0x454 bytes)
void DrawsFlowingLava
               (undefined8 param_1,int param_2,int param_3,undefined8 param_4,undefined8 param_5)

{
  undefined4 uVar1;
  uint *puVar2;
  short *psVar3;
  int *piVar4;
  int iVar5;
  RenderingStep *pRVar6;
  ulonglong uVar7;
  int iVar8;
  undefined4 *puVar9;
  int iVar10;
  undefined4 *puVar11;
  ulonglong uVar12;
  undefined4 *puVar13;
  int iVar14;
  short sVar15;
  int iVar16;
  int iVar17;
  uint uVar18;
  longlong lVar19;
  double dVar20;
  double dVar21;
  
  STUB_00071170();
  idol_draw::PackCmd(0,1,2,1,0x80);
  idol_draw::PackCmd(0,1,2,1,0x60);
  iVar10 = 0;
  lVar19 = 0x100;
  uVar7 = 0;
  dVar21 = -(double)((float)(longlong)(int)(worldUpdateTime & 0x7ff) * 0.00048828125 - 1.0);
  dVar20 = (double)(float)(dVar21 * 2.0 + 0.5);
  do {
    uVar12 = uVar7 & 0xf;
    uVar7 = uVar7 + 0x89;
    uVar12 = uVar12 * 0x20200 - 0x7f878f90;
    puVar2 = (uint *)(g_ScratchBuf + iVar10);
    iVar10 = iVar10 + 1;
    *puVar2 = (uint)(byte)(uVar12 >> 0x18) | (uint)uVar12 >> 8 & 0xff00 |
              (uint)((uVar12 & 0xffffffff) << 8) & 0xff0000 | (uint)((uVar12 & 0xffffffff) << 0x18);
    pRVar6 = ForwardPass;
    lVar19 = lVar19 + -1;
  } while (lVar19 != 0);
  *ForwardPass->command = NV4097_SET_ALPHA_TEST_ENABLE_x1;
  pRVar6->command[1] = 0;
  pRVar6->command = pRVar6->command + 2;
  idol_draw::DrawDepth(ForwardPass,0);
  pRVar6 = DepthPass;
  *DepthPass->command = NV4097_SET_ALPHA_TEST_ENABLE_x1;
  pRVar6->command[1] = 0;
  pRVar6->command = pRVar6->command + 2;
  idol_draw::DrawDepth(DepthPass,0);
  uVar18 = 0;
  iVar10 = param_2;
  if (0 < param_3) {
    do {
      iVar8 = FastCheckBsphereInView(0x4070000000000000,iVar10);
      if ((iVar8 != -1) && (iVar8 = 0, 0 < *(int *)(iVar10 + 0x1c))) {
        iVar16 = 0;
        do {
          iVar5 = (int)(((ulonglong)uVar18 & 0x3ffffff) << 6);
          psVar3 = (short *)(iVar5 + param_2 + 0x20 + iVar16);
          sVar15 = *psVar3;
          iVar17 = (int)*(short *)(iVar5 + param_2 + 0x22 + iVar16) - (int)sVar15;
          puVar9 = (undefined4 *)(*(int *)(iVar5 + param_2 + 0x14) + sVar15 * 8);
          puVar11 = (undefined4 *)(g_ScratchBuf + 0x1000);
          puVar13 = (undefined4 *)(g_ScratchBuf + 0x2000);
          iVar14 = iVar17;
          if (0 < iVar17) {
            do {
              uVar1 = *puVar9;
              *puVar13 = uVar1;
              *puVar11 = uVar1;
              iVar14 = iVar14 + -1;
              puVar11[1] = (float)((double)(float)puVar9[1] + dVar21);
              puVar13[1] = (float)((double)(float)puVar9[1] + dVar20);
              puVar13 = puVar13 + 2;
              puVar11 = puVar11 + 2;
              puVar9 = puVar9 + 2;
            } while (0 < iVar14);
            sVar15 = *psVar3;
          }
          piVar4 = (int *)(iVar5 + param_2 + 0x10);
          DrawLavaStrips(param_1,iVar17,*piVar4 + sVar15 * 0xc,g_ScratchBuf,g_ScratchBuf + 0x1000,
                         g_ScratchBuf + 0x2000,param_4,param_5,0);
          DrawLavaStrips(param_1,iVar17,*piVar4 + *psVar3 * 0xc,g_ScratchBuf,g_ScratchBuf + 0x1000,
                         g_ScratchBuf + 0x2000,param_4,param_5,0);
          iVar8 = iVar8 + 1;
          iVar16 = iVar16 + 2;
        } while (iVar8 < *(int *)(iVar5 + param_2 + 0x1c));
      }
      uVar18 = uVar18 + 1;
      iVar10 = iVar10 + 0x40;
    } while ((int)uVar18 < param_3);
  }
  pRVar6 = ForwardPass;
  *ForwardPass->command = NV4097_SET_ALPHA_TEST_ENABLE_x1;
  pRVar6->command[1] = 1;
  pRVar6->command = pRVar6->command + 2;
  pRVar6 = DepthPass;
  *DepthPass->command = NV4097_SET_ALPHA_TEST_ENABLE_x1;
  pRVar6->command[1] = 1;
  pRVar6->command = pRVar6->command + 2;
  return;
}


// 0x00774b8 (0x318 bytes)
void ____Draw_ScrollingTexStrips
               (int param_1,int param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  int iVar2;
  int iVar3;
  float *pfVar4;
  float *pfVar5;
  float *pfVar6;
  int iVar7;
  short sVar8;
  short *psVar9;
  short *psVar10;
  int *piVar11;
  int *piVar12;
  int *piVar13;
  int *piVar14;
  short *psVar15;
  short *psVar16;
  int iVar17;
  undefined8 uVar18;
  double dVar19;
  double dVar20;
  double dVar21;
  
  uVar1 = idol_draw::PackCmd(0,1,2,1,0x20);
  idol_draw::PackCmd(0,1,2,1,0x20);
  STUB_00071170();
  iVar17 = 0;
  dVar21 = -(double)((float)(longlong)(int)(worldUpdateTime & 0x1ff) * 0.001953125 - 1.0);
  dVar20 = (double)(float)(dVar21 * 2.0 + 0.5);
  dVar19 = -(double)((float)(longlong)(int)(worldUpdateTime & 0x7ff) * 0.00048828125 - 1.0);
  if (0 < param_2) {
    piVar14 = (int *)(param_1 + 0x14);
    piVar13 = (int *)(param_1 + 0x10);
    piVar12 = (int *)(param_1 + 0x18);
    piVar11 = (int *)(param_1 + 0x1c);
    psVar10 = (short *)(param_1 + 0x22);
    uVar18 = 0x4070000000000000;
    psVar9 = (short *)(param_1 + 0x20);
    do {
      iVar2 = FastCheckBsphereInView(uVar18,param_1);
      if ((iVar2 != -1) &&
         (iVar2 = 0, psVar15 = psVar9, psVar16 = psVar10, 0 < *(int *)(param_1 + 0x1c))) {
        do {
          sVar8 = *psVar15;
          iVar3 = (int)*psVar16 - (int)sVar8;
          pfVar4 = (float *)(*piVar14 + sVar8 * 8);
          pfVar6 = (float *)&DAT_70002000;
          pfVar5 = (float *)&DAT_70001000;
          iVar7 = iVar3;
          if (0 < iVar3) {
            do {
              iVar7 = iVar7 + -1;
              *pfVar5 = (float)((double)*pfVar4 + dVar19);
              *pfVar6 = (float)((double)*pfVar4 - dVar19);
              pfVar5[1] = (float)((double)pfVar4[1] + dVar21);
              pfVar6[1] = (float)((double)pfVar4[1] + dVar20);
              pfVar5 = pfVar5 + 2;
              pfVar6 = pfVar6 + 2;
              pfVar4 = pfVar4 + 2;
            } while (0 < iVar7);
            sVar8 = *psVar15;
          }
          DrawTexturedStrips(iVar3,*piVar13 + sVar8 * 0xc,*piVar12 + sVar8 * 4,
                             (ulonglong)g_ScratchBuf + 0x1000,(ulonglong)g_ScratchBuf + 0x2000,
                             param_3,param_4,uVar1);
          iVar2 = iVar2 + 1;
          psVar15 = psVar15 + 1;
          psVar16 = psVar16 + 1;
        } while (iVar2 < *piVar11);
      }
      iVar17 = iVar17 + 1;
      piVar14 = piVar14 + 0x10;
      param_1 = param_1 + 0x40;
      piVar13 = piVar13 + 0x10;
      piVar12 = piVar12 + 0x10;
      piVar11 = piVar11 + 0x10;
      psVar10 = psVar10 + 0x20;
      psVar9 = psVar9 + 0x20;
    } while (iVar17 < param_2);
  }
  return;
}


// 0x00777d0 (0x48c bytes)
void ____Draw_InitGsRegPresets_777d0(void)

{
  DAT_0071f28c = 0x10000;
  DAT_0071f080 = SCE_GIF_SET_TAG(1,1,0,0,0,4);
  DAT_0071f090 = SCE_GS_SET_TEX1(0,0,1,1,1,0,0xff90);
  DAT_0071f0a0 = SCE_GS_SET_CLAMP(1,1,0,0,0,0);
  DAT_0071f0b0 = idol_draw::Blend(1,5,0x60,3,0,0,1,2);
  DAT_0071f0c0 = idol_draw::PackCmd(0,1,2,1,0x50);
  DAT_0071f0d0 = SCE_GIF_SET_TAG(1,1,0,0,0,4);
  DAT_0071f0e0 = SCE_GS_SET_TEX1(0,0,1,1,1,0,0xff90);
  DAT_0071f0f0 = SCE_GS_SET_CLAMP(0,0,0,0,0,0);
  DAT_0071f100 = idol_draw::Blend(0,5,1,0,0,0,1,2);
  DAT_0071f110 = idol_draw::PackCmd(0,1,2,1,0x50);
  DAT_0071f120 = SCE_GIF_SET_TAG(1,1,0,0,0,8);
  DAT_0071f130 = FUN_00502f98(0,0,0,0,0,0,1,2);
  DAT_0071f140 = FUN_00502f98(0,0,0,0,0,0,1,2);
  DAT_0071f150 = SCE_GS_SET_TEX1(0,0,1,1,1,0,0xff90);
  DAT_0071f160 = SCE_GS_SET_CLAMP(0,0,0,0,0,0);
  DAT_0071f170 = idol_draw::PackCmd(0,1,2,1,0x80);
  DAT_0071f180 = SCE_GS_SET_TEX1(0,0,1,1,1,0,0xff90);
  DAT_0071f190 = SCE_GS_SET_CLAMP(0,0,0,0,0,0);
  DAT_0071f1a0 = idol_draw::PackCmd(0,1,2,1,0x60);
  DAT_0071f1b0 = SCE_GIF_SET_TAG(1,1,0,0,0,8);
  DAT_0071f1c0 = FUN_00502f98(0,0,0,0,0,0,1,2);
  DAT_0071f1d0 = FUN_00502f98(0,0,0,0,0,0,1,2);
  DAT_0071f1e0 = SCE_GS_SET_TEX1(0,0,1,1,1,0,0xff90);
  DAT_0071f1f0 = SCE_GS_SET_CLAMP(0,0,0,0,0,0);
  DAT_0071f200 = idol_draw::PackCmd(0,1,2,1,0x20);
  DAT_0071f210 = SCE_GS_SET_TEX1(0,0,1,1,1,0,0xff90);
  DAT_0071f220 = SCE_GS_SET_CLAMP(0,0,0,0,0,0);
  DAT_0071f230 = idol_draw::PackCmd(0,1,2,1,0x20);
  return;
}


// 0x0077c60 (0x4 bytes)
void STUB_00077c60(...)

{
  return;
}


// 0x0077c64 (0x4 bytes)
void STUB_00077c64(...)

{
  return;
}


// 0x0077c68 (0x4 bytes)
void STUB_00077c68(...)

{
  return;
}


// 0x0077c6c (0x4 bytes)
void STUB_00077c6c(...)

{
  return;
}


// 0x0077c88 (0x410 bytes)
void DrawColorGradientStrip(int *param_1,float *param_2)

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
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  int iVar18;
  float *pfVar20;
  ulonglong uVar19;
  int iVar21;
  float fVar22;
  float *pfVar23;
  float *pfVar24;
  int iVar25;
  int iVar26;
  double dVar27;
  double dVar28;
  double dVar29;
  double dVar30;
  double dVar31;
  double dVar32;
  double dVar33;
  
  pfVar20 = (float *)idol::AllocateMemAlign
                               (FrameHeap,
                                (int)(((ulonglong)(uint)param_1[5] & 0x1fffffff) << 6) +
                                (int)(((ulonglong)(uint)param_1[5] & 0x1fffffff) << 7),0x10);
  iVar21 = param_1[1];
  iVar25 = 0;
  dVar29 = 1.0;
  dVar28 = -0.05000000074505806;
  dVar30 = 0.05000000074505806;
  dVar31 = (double)(float)param_1[7];
  iVar26 = 0;
  dVar32 = (double)(float)(1.0 / (double)(longlong)(*param_1 - iVar21));
  dVar33 = (double)(float)(1.0 / (double)(longlong)iVar21);
  do {
    iVar18 = *(int *)(param_1[2] + iVar26);
    if (iVar21 < iVar18) {
      dVar27 = (double)(float)((double)(longlong)(iVar18 - iVar21) * dVar32);
    }
    else {
      dVar27 = -(double)(float)((double)(longlong)iVar18 * dVar33 - dVar29);
    }
    uVar19 = FastLerpColor(dVar27,param_1[3],param_1[4]);
    iVar21 = 0;
    fVar1 = 255.0;
    fVar3 = (float)(uVar19 & 0xff) * 2.0;
    fVar22 = (float)((uVar19 << 0x20) >> 0x28 & 0xff) * 2.0;
    if (255.0 - fVar3 < 0.0) {
      fVar3 = fVar1;
    }
    fVar2 = (float)((uVar19 << 0x20) >> 0x30 & 0xff) * 2.0;
    if (255.0 - fVar22 < 0.0) {
      fVar22 = fVar1;
    }
    if (255.0 - fVar2 < 0.0) {
      fVar2 = fVar1;
    }
    fVar5 = (float)((uVar19 << 0x20) >> 0x38) + 0.5;
    fVar4 = fVar3 + 0.5;
    if (255.0 - (fVar3 + 0.5) < 0.0) {
      fVar4 = fVar1;
    }
    fVar3 = (float)param_1[8];
    uVar19 = (ulonglong)(uint)param_1[5];
    if (255.0 - fVar5 < 0.0) {
      fVar5 = fVar1;
    }
    fVar6 = fVar22 + 0.5;
    if (255.0 - (fVar22 + 0.5) < 0.0) {
      fVar6 = fVar1;
    }
    fVar22 = fVar2 + 0.5;
    if (255.0 - (fVar2 + 0.5) < 0.0) {
      fVar22 = fVar1;
    }
    fVar22 = (float)((int)fVar5 | (int)fVar22 << 8 | (int)fVar6 << 0x10 | (int)fVar4 << 0x18);
    pfVar23 = pfVar20;
    pfVar24 = pfVar20;
    if (0 < param_1[5]) {
      do {
        fVar4 = param_2[4];
        fVar5 = param_2[5];
        pfVar24 = (float *)(param_1[6] + ((int)uVar19 * iVar25 + iVar21) * 0x10);
        fVar6 = *param_2;
        fVar7 = param_2[6];
        fVar3 = (float)((double)fVar3 + dVar31);
        iVar21 = iVar21 + 1;
        fVar8 = pfVar24[1];
        fVar9 = *pfVar24;
        fVar10 = param_2[0xc];
        fVar11 = param_2[1];
        fVar1 = (float)((double)pfVar24[2] + dVar28);
        fVar12 = param_2[0xd];
        fVar13 = param_2[2];
        fVar2 = (float)((double)pfVar24[2] + dVar30);
        fVar14 = param_2[8];
        fVar15 = param_2[0xe];
        fVar16 = param_2[9];
        fVar17 = param_2[10];
        pfVar23[3] = fVar3;
        pfVar23[4] = 0.0;
        pfVar23[5] = fVar22;
        *pfVar23 = fVar4 * fVar8 + fVar14 * fVar1 + fVar6 * fVar9 + fVar10;
        pfVar23[1] = fVar5 * fVar8 + fVar16 * fVar1 + fVar11 * fVar9 + fVar12;
        pfVar23[2] = fVar7 * fVar8 + fVar17 * fVar1 + fVar13 * fVar9 + fVar15;
        pfVar23[6] = fVar14 * fVar2 + fVar6 * fVar9 + fVar4 * fVar8 + fVar10;
        pfVar24 = pfVar23 + 0xc;
        pfVar23[7] = fVar16 * fVar2 + fVar11 * fVar9 + fVar5 * fVar8 + fVar12;
        pfVar23[8] = fVar17 * fVar2 + fVar13 * fVar9 + fVar7 * fVar8 + fVar15;
        pfVar23[9] = fVar3;
        pfVar23[10] = 1.0;
        pfVar23[0xb] = fVar22;
        uVar19 = (ulonglong)(uint)param_1[5];
        pfVar23 = pfVar24;
      } while (iVar21 < param_1[5]);
    }
    FastDrawStripColor((int)(uVar19 << 1),pfVar20,9);
    iVar25 = iVar25 + 1;
    iVar21 = param_1[1];
    iVar26 = iVar26 + 4;
    pfVar20 = pfVar24;
  } while (iVar25 < 4);
  return;
}


// 0x0078098 (0x5c bytes)
void SetFrameBufferInfo
               (short param_1,short param_2,undefined2 param_3,undefined2 param_4,undefined2 param_5
               ,undefined2 param_6)

{
  DAT_00966b84 = param_3;
  DAT_00966bc0 = &DAT_00966b40;
  DAT_00966b9c = 0;
  DAT_00966b86 = param_4;
  DAT_00966b88 = 0x12;
  DAT_00966b94 = param_5;
  DAT_00966b96 = param_6;
  g_FrameBufWidth = param_1;
  g_FrameBufHeight = param_2;
  DAT_00966b80 = 0x12;
  DAT_00966b90 = 0x12;
  DAT_00966b98 = 0x24;
  return;
}


// 0x00780f4 (0x4 bytes)
void STUB_000780f4(...)

{
  return;
}


// 0x00780f8 (0x4 bytes)
void STUB_000780f8(...)

{
  return;
}


// 0x00780fc (0x4 bytes)
void STUB_000780fc(...)

{
  return;
}


// 0x0078100 (0x4 bytes)
void STUB_00078100(...)

{
  return;
}


// 0x0078104 (0x4 bytes)
void STUB_00078104(...)

{
  return;
}


// 0x0078108 (0x28 bytes)
void SetFrameBufferTexLog2Size(int log2w,int log2h,int zbuf)

{
  DAT_00966b92 = (short)(zbuf >> 0xd);
  DAT_00966b8c = (short)(1 << (log2w & 0x3fU));
  DAT_00966b8e = (short)(1 << (log2h & 0x3fU));
  return;
}


// 0x0078130 (0x4 bytes)
void STUB_00078130(...)

{
  return;
}


// 0x0078134 (0x4 bytes)
void STUB_00078134(...)

{
  return;
}


// 0x0078138 (0x4 bytes)
void STUB_00078138(...)

{
  return;
}


// 0x007813c (0x4 bytes)
void STUB_0007813c(...)

{
  return;
}


