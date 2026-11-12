// game/skyproc.cpp -- reconstructed from NPEA00385 EBOOT
// STATUS: NOT STARTED (raw Ghidra output)
// 6 functions, 0x15aa0c-0x15b574
#include <math.h>
#include "game/skyproc.h"
#include "game/draw.h"
#include "game/hero.h"
#include "game/hud.h"
#include "game/partproc.h"
#include "game/pause.h"
#include "game/skyfunc.h"
#include "game/vendor.h"
#include "idol/idol_draw.h"
#include "idol/mUnk.h"
#include "idol/tiefunc.h"

// 0x015aa0c (0x14 bytes)
void SECTION_HEADER_SKYPROC(void)

{
  DAT_00731b48 = 0x10000;
  return;
}


// 0x015aa80 (0xadc bytes)
void SkySpriteProc(void)

{
  longlong lVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  short sVar5;
  undefined4 uVar6;
  uint uVar7;
  GPiece<16> auVar8;
  GPiece<16> auVar9;
  GPiece<16> auVar10;
  ulonglong *puVar11;
  int iVar12;
  RsxCmd RVar13;
  RenderingStep *pRVar14;
  SKY *pSVar15;
  ulonglong uVar16;
  int iVar18;
  int iVar19;
  undefined8 uVar17;
  undefined4 *puVar20;
  undefined4 *puVar21;
  RsxCmd *pRVar22;
  longlong lVar23;
  longlong lVar24;
  longlong lVar25;
  ulonglong unaff_r21;
  ulonglong unaff_r22;
  ulonglong unaff_r23;
  char *pcVar26;
  ulonglong unaff_r24;
  ulonglong unaff_r25;
  ulonglong unaff_r26;
  ulonglong unaff_r27;
  ulonglong unaff_r28;
  ulonglong unaff_r29;
  ulonglong uVar27;
  RsxCmd *pRVar28;
  ulonglong unaff_r30;
  ulonglong uVar29;
  ulonglong unaff_r31;
  int iVar30;
  ulonglong in_LR;
  longlong lVar31;
  double dVar32;
  double dVar33;
  double extraout_f1;
  double dVar34;
  double dVar35;
  double dVar36;
  double dVar37;
  double dVar38;
  double dVar39;
  double dVar40;
  double dVar41;
  double dVar42;
  double dVar43;
  double dVar44;
  double dVar45;
  double dVar46;
  double dVar47;
  ulonglong in_f17;
  ulonglong in_f18;
  ulonglong in_f19;
  ulonglong in_f20;
  ulonglong in_f21;
  ulonglong in_f22;
  ulonglong in_f23;
  ulonglong in_f24;
  ulonglong in_f25;
  ulonglong in_f26;
  ulonglong in_f27;
  ulonglong in_f28;
  ulonglong in_f29;
  ulonglong in_f30;
  ulonglong in_f31;
  double dVar48;
  GPiece<16> auVar49;
  GPiece<16> auVar50;
  GPiece<16> auVar51;
  GPiece<16> auVar52;
  
  uVar16 = ZEXT48(&stack0x00000000);
  lVar1 = uVar16 - 800;
  puVar11 = (ulonglong *)lVar1;
  *puVar11 = uVar16;
  puVar11[0x66] = in_LR;
  puVar11[0x55] = in_f17;
  puVar11[0x56] = in_f18;
  puVar11[0x57] = in_f19;
  puVar11[0x58] = in_f20;
  puVar11[0x59] = in_f21;
  puVar11[0x5a] = in_f22;
  puVar11[0x5b] = in_f23;
  puVar11[0x5c] = in_f24;
  puVar11[0x5d] = in_f25;
  puVar11[0x5e] = in_f26;
  puVar11[0x5f] = in_f27;
  puVar11[0x60] = in_f28;
  puVar11[0x61] = in_f29;
  puVar11[0x62] = in_f30;
  puVar11[99] = in_f31;
  iVar18 = DAT_00902e9c;
  auVar49 = *(undefined1 (*) [16])(DAT_00902e9c + 0xa0U & 0xfffffff0);
  auVar52 = *(undefined1 (*) [16])(DAT_00902e9c + 0xb0U & 0xfffffff0);
  auVar8 = auVar49 >> 0x60 & (GPiece<16>)0xffffffff;
  auVar9 = auVar52 >> 0x60 & (GPiece<16>)0xffffffff;
  auVar50 = auVar49 >> 0x40 & (GPiece<16>)0xffffffff;
  auVar49 = auVar49 >> 0x20 & (GPiece<16>)0xffffffff;
  *(undefined1 (*) [16])(puVar11 + 0x2a) = auVar8 | auVar8 << 0x20 | auVar8 << 0x40 | auVar8 << 0x60
  ;
  auVar51 = *(undefined1 (*) [16])(iVar18 + 0xc0U & 0xfffffff0);
  dVar32 = (double)*(float *)(puVar11 + 0x2a);
  auVar8 = auVar51 >> 0x60 & (GPiece<16>)0xffffffff;
  auVar10 = auVar51 >> 0x40 & (GPiece<16>)0xffffffff;
  *(undefined1 (*) [16])(puVar11 + 0x2a) = auVar9 | auVar9 << 0x20 | auVar9 << 0x40 | auVar9 << 0x60
  ;
  dVar34 = (double)*(float *)(puVar11 + 0x2a);
  auVar9 = auVar52 >> 0x40 & (GPiece<16>)0xffffffff;
  auVar52 = auVar52 >> 0x20 & (GPiece<16>)0xffffffff;
  *(undefined1 (*) [16])(puVar11 + 0x2a) = auVar8 | auVar8 << 0x20 | auVar8 << 0x40 | auVar8 << 0x60
  ;
  dVar35 = (double)*(float *)(puVar11 + 0x2a);
  auVar8 = auVar51 >> 0x20 & (GPiece<16>)0xffffffff;
  *(undefined1 (*) [16])(puVar11 + 0x2a) =
       auVar50 | auVar50 << 0x20 | auVar50 << 0x40 | auVar50 << 0x60;
  dVar37 = (double)*(float *)(puVar11 + 0x2a);
  *(undefined1 (*) [16])(puVar11 + 0x2a) = auVar9 | auVar9 << 0x20 | auVar9 << 0x40 | auVar9 << 0x60
  ;
  dVar38 = (double)*(float *)(puVar11 + 0x2a);
  *(undefined1 (*) [16])(puVar11 + 0x2a) =
       auVar10 | auVar10 << 0x20 | auVar10 << 0x40 | auVar10 << 0x60;
  dVar41 = (double)*(float *)(puVar11 + 0x2a);
  *(undefined1 (*) [16])(puVar11 + 0x2a) =
       auVar49 | auVar49 << 0x20 | auVar49 << 0x40 | auVar49 << 0x60;
  dVar42 = (double)*(float *)(puVar11 + 0x2a);
  dVar36 = (double)SQRT((float)(dVar35 * dVar35 +
                               (double)(float)(dVar32 * dVar32 + (double)(float)(dVar34 * dVar34))))
  ;
  *(undefined1 (*) [16])(puVar11 + 0x2a) =
       auVar52 | auVar52 << 0x20 | auVar52 << 0x40 | auVar52 << 0x60;
  dVar43 = (double)*(float *)(puVar11 + 0x2a);
  *(undefined1 (*) [16])(puVar11 + 0x2a) = auVar8 | auVar8 << 0x20 | auVar8 << 0x40 | auVar8 << 0x60
  ;
  puVar11[0x4f] = unaff_r26;
  dVar47 = (double)*(float *)(puVar11 + 0x2a);
  puVar11[0x54] = unaff_r31;
  iVar30 = 0;
  puVar11[0x4b] = unaff_r22;
  auVar50 = *(undefined1 (*) [16])(iVar18 + 0x20U & 0xfffffff0);
  auVar8 = auVar50 >> 0x60 & (GPiece<16>)0xffffffff;
  dVar40 = (double)SQRT((float)(dVar41 * dVar41 +
                               (double)(float)(dVar37 * dVar37 + (double)(float)(dVar38 * dVar38))))
  ;
  auVar9 = auVar50 >> 0x40 & (GPiece<16>)0xffffffff;
  *(undefined1 (*) [16])(puVar11 + 0x2a) = auVar8 | auVar8 << 0x20 | auVar8 << 0x40 | auVar8 << 0x60
  ;
  auVar8 = auVar50 >> 0x20 & (GPiece<16>)0xffffffff;
  dVar45 = (double)SQRT((float)(dVar47 * dVar47 +
                               (double)(float)(dVar42 * dVar42 + (double)(float)(dVar43 * dVar43))))
  ;
  dVar33 = dVar35;
  if (0.0 - dVar36 < 0.0) {
    dVar33 = (double)(float)(dVar35 / dVar36);
  }
  dVar44 = dVar34;
  if (0.0 - dVar36 < 0.0) {
    dVar44 = (double)(float)(dVar34 / dVar36);
  }
  dVar46 = dVar32;
  if (0.0 - dVar36 < 0.0) {
    dVar46 = (double)(float)(dVar32 / dVar36);
  }
  dVar48 = dVar41;
  if (0.0 - dVar40 < 0.0) {
    dVar48 = (double)(float)(dVar41 / dVar40);
  }
  dVar39 = dVar38;
  if (0.0 - dVar40 < 0.0) {
    dVar39 = (double)(float)(dVar38 / dVar40);
  }
  if (dVar36 - 0.0 < 0.0) {
    dVar33 = (double)(float)(dVar35 / dVar36);
  }
  if (dVar36 - 0.0 < 0.0) {
    dVar44 = (double)(float)(dVar34 / dVar36);
  }
  if (dVar36 - 0.0 < 0.0) {
    dVar46 = (double)(float)(dVar32 / dVar36);
  }
  dVar32 = dVar37;
  if (0.0 - dVar40 < 0.0) {
    dVar32 = (double)(float)(dVar37 / dVar40);
  }
  fVar3 = *(float *)(puVar11 + 0x2a);
  *(undefined1 (*) [16])(puVar11 + 0x2a) = auVar9 | auVar9 << 0x20 | auVar9 << 0x40 | auVar9 << 0x60
  ;
  if (dVar40 - 0.0 < 0.0) {
    dVar48 = (double)(float)(dVar41 / dVar40);
  }
  if (dVar40 - 0.0 < 0.0) {
    dVar39 = (double)(float)(dVar38 / dVar40);
  }
  puVar11[0x46] = (ulonglong)dVar33;
  puVar11[0x45] = (ulonglong)dVar44;
  puVar11[0x44] = (ulonglong)dVar46;
  dVar33 = dVar47;
  if (0.0 - dVar45 < 0.0) {
    dVar33 = (double)(float)(dVar47 / dVar45);
  }
  if (dVar40 - 0.0 < 0.0) {
    dVar32 = (double)(float)(dVar37 / dVar40);
  }
  dVar34 = dVar43;
  if (0.0 - dVar45 < 0.0) {
    dVar34 = (double)(float)(dVar43 / dVar45);
  }
  puVar11[0x43] = (ulonglong)dVar48;
  puVar11[0x42] = (ulonglong)dVar39;
  if (dVar45 - 0.0 < 0.0) {
    dVar33 = (double)(float)(dVar47 / dVar45);
  }
  fVar4 = *(float *)(puVar11 + 0x2a);
  *(undefined1 (*) [16])(puVar11 + 0x2a) = auVar8 | auVar8 << 0x20 | auVar8 << 0x40 | auVar8 << 0x60
  ;
  puVar11[0x41] = (ulonglong)dVar32;
  puVar11[0x4c] = unaff_r23;
  pSVar15 = Sky;
  if (dVar45 - 0.0 < 0.0) {
    dVar34 = (double)(float)(dVar43 / dVar45);
  }
  puVar11[0x49] = (ulonglong)(double)fVar3;
  dVar32 = dVar42;
  if (0.0 - dVar45 < 0.0) {
    dVar32 = (double)(float)(dVar42 / dVar45);
  }
  puVar11[0x40] = (ulonglong)dVar33;
  puVar11[0x3f] = (ulonglong)dVar34;
  puVar11[0x48] = (ulonglong)(double)fVar4;
  sVar5 = pSVar15->sprite_cnt;
  pcVar26 = (char *)pSVar15->tex_defs;
  if (dVar45 - 0.0 < 0.0) {
    dVar32 = (double)(float)(dVar42 / dVar45);
  }
  puVar11[0x3e] = (ulonglong)dVar32;
  puVar11[0x53] = unaff_r30;
  puVar11[0x52] = unaff_r29;
  puVar11[0x51] = unaff_r28;
  puVar11[0x50] = unaff_r27;
  puVar11[0x4e] = unaff_r25;
  puVar11[0x4d] = unaff_r24;
  puVar11[0x4a] = unaff_r21;
  puVar11[0x47] = (ulonglong)(double)*(float *)(puVar11 + 0x2a);
  if (sVar5 != 0) {
    dVar33 = (double)puVar11[0x40];
    dVar32 = (double)puVar11[0x3f];
    dVar34 = (double)puVar11[0x46];
    dVar35 = (double)puVar11[0x45];
    dVar36 = (double)puVar11[0x44];
    dVar37 = (double)puVar11[0x3e];
    dVar38 = (double)puVar11[0x43];
    dVar40 = (double)puVar11[0x42];
    dVar41 = (double)puVar11[0x41];
    puVar11[0x3d] = (ulonglong)(double)(float)(dVar32 * dVar34);
    puVar11[0x3c] = (ulonglong)(double)(float)(dVar33 * dVar35);
    puVar11[0x3b] = (ulonglong)(double)(float)(dVar33 * dVar36);
    puVar11[0x3a] = (ulonglong)(double)(float)(dVar37 * dVar34);
    puVar11[0x39] = (ulonglong)(double)(float)(dVar37 * dVar35);
    puVar11[0x38] = (ulonglong)(double)(float)(dVar32 * dVar36);
    puVar11[0x37] = (ulonglong)(double)(float)(dVar37 * dVar36);
    puVar11[0x36] = (ulonglong)(double)(float)(dVar32 * dVar35);
    puVar11[0x35] = (ulonglong)(double)(float)(dVar33 * dVar34);
    puVar11[0x34] = (ulonglong)(double)(float)(dVar32 * dVar38);
    puVar11[0x33] = (ulonglong)(double)(float)(dVar33 * dVar40);
    puVar11[0x32] = (ulonglong)(double)(float)(dVar33 * dVar41);
    puVar11[0x31] = (ulonglong)(double)(float)(dVar37 * dVar38);
    puVar11[0x30] = (ulonglong)(double)(float)(dVar37 * dVar40);
    puVar11[0x2f] = (ulonglong)(double)(float)(dVar32 * dVar41);
    puVar11[0x2e] = (ulonglong)(double)(float)(dVar37 * dVar41);
    puVar11[0x2d] = (ulonglong)(double)(float)(dVar32 * dVar40);
    puVar11[0x2c] = (ulonglong)(double)(float)(dVar33 * dVar38);
    do {
      uVar29 = (ulonglong)(byte)pcVar26[3];
      puVar11[0x24] = 1;
      puVar11[0x27] = uVar29;
      uVar6 = *(undefined4 *)(pcVar26 + 4);
      *(undefined4 *)((int)puVar11 + 0xfc) = uVar6;
      *(undefined4 *)(puVar11 + 0x1f) = uVar6;
      *(undefined4 *)((int)puVar11 + 0xf4) = uVar6;
      *(undefined4 *)(puVar11 + 0x1e) = uVar6;
      iVar18 = GetSkyTex((uint)(byte)pcVar26[2]);
      puVar11[0x25] = (longlong)iVar18;
      iVar19 = GetSkyTex((uint)(byte)pcVar26[2]);
      puVar11[0x26] = (longlong)iVar19;
      *(undefined4 *)(puVar11 + 0x20) = 0;
      *(undefined4 *)(puVar11 + 0x22) = 0;
      *(undefined4 *)(puVar11 + 0x21) = 0x3f800000;
      *(undefined4 *)(puVar11 + 0x23) = 0x3f800000;
      *(undefined4 *)((int)puVar11 + 0x104) = 0;
      *(undefined4 *)((int)puVar11 + 0x10c) = 0;
      *(undefined4 *)((int)puVar11 + 0x114) = 0x3f800000;
      *(undefined4 *)((int)puVar11 + 0x11c) = 0x3f800000;
      fVar3 = 0.4;
      if (*pcVar26 == '\0') {
        fVar3 = 0.5;
      }
      dVar48 = (double)fVar3;
      dVar40 = 0.5;
      dVar32 = (double)(((*(float *)(pcVar26 + 8) + 32.0) * 3.1415927 * 0.0078125 + 1.5707964) * 0.5
                       );
      uVar17 = _FSin(dVar32,&DAT_0015aa20,0);
      dVar33 = extraout_f1;
      dVar32 = (double)_FSin(dVar32,uVar17,1);
      dVar41 = (double)(float)(dVar33 * (double)puVar11[0x3f]);
      dVar42 = (double)(float)(dVar33 * (double)puVar11[0x3e]);
      dVar44 = (double)(float)(dVar33 * (double)puVar11[0x40]);
      dVar34 = -(double)(float)(dVar33 * (double)puVar11[0x3c] -
                               (double)(float)(dVar32 * (double)puVar11[0x44] +
                                              (double)(float)(dVar33 * (double)puVar11[0x3d])));
      dVar37 = -(double)(float)(dVar33 * (double)puVar11[0x38] -
                               (double)(float)(dVar32 * (double)puVar11[0x46] +
                                              (double)(float)(dVar33 * (double)puVar11[0x39])));
      dVar36 = -(double)(float)(dVar33 * (double)puVar11[0x3a] -
                               (double)(float)(dVar32 * (double)puVar11[0x45] +
                                              (double)(float)(dVar33 * (double)puVar11[0x3b])));
      dVar43 = (double)(float)(dVar33 * (double)puVar11[0x35] +
                              (double)(float)(dVar33 * (double)puVar11[0x37] +
                                             (double)(float)(dVar33 * (double)puVar11[0x36])));
      dVar46 = -(double)(float)(dVar33 * (double)puVar11[0x33] -
                               (double)(float)(dVar32 * (double)puVar11[0x41] +
                                              (double)(float)(dVar33 * (double)puVar11[0x34])));
      dVar45 = -(double)(float)(dVar33 * (double)puVar11[0x2f] -
                               (double)(float)(dVar32 * (double)puVar11[0x43] +
                                              (double)(float)(dVar33 * (double)puVar11[0x30])));
      dVar47 = -(double)(float)(dVar33 * (double)puVar11[0x31] -
                               (double)(float)(dVar32 * (double)puVar11[0x42] +
                                              (double)(float)(dVar33 * (double)puVar11[0x32])));
      dVar33 = (double)(float)(dVar33 * (double)puVar11[0x2c] +
                              (double)(float)(dVar33 * (double)puVar11[0x2e] +
                                             (double)(float)(dVar33 * (double)puVar11[0x2d])));
      dVar38 = (double)(float)((double)(float)(dVar41 * dVar37 +
                                              -(double)(float)(dVar44 * dVar36 -
                                                              (double)(float)(dVar42 * dVar43 +
                                                                             (double)(float)(dVar32 
                                                  * dVar34)))) * dVar48);
      dVar35 = (double)(float)((double)(float)(dVar44 * dVar34 +
                                              -(double)(float)(dVar42 * dVar37 -
                                                              (double)(float)(dVar41 * dVar43 +
                                                                             (double)(float)(dVar32 
                                                  * dVar36)))) * dVar48);
      dVar34 = (double)(float)((double)(float)(dVar42 * dVar36 +
                                              -(double)(float)(dVar41 * dVar34 -
                                                              (double)(float)(dVar44 * dVar43 +
                                                                             (double)(float)(dVar32 
                                                  * dVar37)))) * dVar48);
      dVar36 = (double)(float)((double)(float)(dVar41 * dVar45 +
                                              -(double)(float)(dVar44 * dVar47 -
                                                              (double)(float)(dVar42 * dVar33 +
                                                                             (double)(float)(dVar32 
                                                  * dVar46)))) * dVar48);
      dVar37 = (double)(float)((double)(float)(dVar44 * dVar46 +
                                              -(double)(float)(dVar42 * dVar45 -
                                                              (double)(float)(dVar41 * dVar33 +
                                                                             (double)(float)(dVar32 
                                                  * dVar47)))) * dVar48);
      dVar33 = (double)(float)((double)(float)(dVar42 * dVar47 +
                                              -(double)(float)(dVar41 * dVar46 -
                                                              (double)(float)(dVar44 * dVar33 +
                                                                             (double)(float)(dVar32 
                                                  * dVar45)))) * dVar48);
      dVar41 = -(double)(float)(dVar36 * dVar40 -
                               -(double)(float)(dVar38 * dVar40 -
                                               (double)(float)((double)*(float *)(pcVar26 + 0x10) +
                                                              (double)puVar11[0x49])));
      dVar42 = -(double)(float)(dVar37 * dVar40 -
                               -(double)(float)(dVar35 * dVar40 -
                                               (double)(float)((double)*(float *)(pcVar26 + 0x14) +
                                                              (double)puVar11[0x48])));
      dVar32 = -(double)(float)(dVar33 * dVar40 -
                               -(double)(float)(dVar34 * dVar40 -
                                               (double)(float)((double)*(float *)(pcVar26 + 0x18) +
                                                              (double)puVar11[0x47])));
      fVar3 = (float)(dVar41 + dVar38);
      fVar4 = (float)(dVar42 + dVar35);
      *(float *)(puVar11 + 0x16) = (float)dVar41;
      fVar2 = (float)(dVar32 + dVar34);
      *(float *)((int)puVar11 + 0xb4) = (float)dVar42;
      *(float *)(puVar11 + 0x17) = (float)dVar32;
      *(float *)(puVar11 + 0x18) = fVar3;
      *(float *)((int)puVar11 + 0xc4) = fVar4;
      *(float *)(puVar11 + 0x19) = fVar2;
      *(undefined4 *)((int)puVar11 + 0xec) = 0x3f800000;
      *(undefined4 *)((int)puVar11 + 0xdc) = 0x3f800000;
      *(undefined4 *)((int)puVar11 + 0xcc) = 0x3f800000;
      fVar3 = (float)((double)(float)((double)fVar3 + dVar36) - dVar38);
      fVar4 = (float)((double)(float)((double)fVar4 + dVar37) - dVar35);
      fVar2 = (float)((double)(float)((double)fVar2 + dVar33) - dVar34);
      *(float *)(puVar11 + 0x1a) = fVar3;
      *(float *)((int)puVar11 + 0xd4) = fVar4;
      *(float *)(puVar11 + 0x1b) = fVar2;
      *(undefined4 *)((int)puVar11 + 0xbc) = 0x3f800000;
      *(float *)(puVar11 + 0x1c) = (float)((double)fVar3 + dVar38);
      *(float *)((int)puVar11 + 0xe4) = (float)((double)fVar4 + dVar35);
      *(float *)(puVar11 + 0x1d) = (float)((double)fVar2 + dVar34);
      iVar19 = g_viewMtxPtr;
      pRVar14 = ForwardPass;
      uVar27 = (ulonglong)EffectTexHeaders;
      idol_draw::BindVertexProgram(g_viewMtxPtr,ForwardPass,5);
      idol_draw::BindFragmentProgram(iVar19,pRVar14,6);
      puVar20 = (undefined4 *)idol::AllocateMemAlign(FrameHeap,0x60,0x10);
      lVar31 = 4;
      lVar23 = lVar1;
      lVar24 = lVar1;
      lVar25 = lVar1;
      puVar21 = puVar20;
      do {
        iVar12 = (int)lVar23;
        *puVar21 = *(undefined4 *)(iVar12 + 0xb0);
        puVar21[1] = *(undefined4 *)(iVar12 + 0xb4);
        lVar23 = lVar23 + 0x10;
        puVar21[2] = *(undefined4 *)(iVar12 + 0xb8);
        iVar12 = (int)lVar24;
        puVar21[3] = *(undefined4 *)(iVar12 + 0x100);
        lVar24 = lVar24 + 8;
        puVar21[4] = *(undefined4 *)(iVar12 + 0x104);
        uVar7 = *(uint *)((int)lVar25 + 0xf0);
        lVar25 = lVar25 + 4;
        puVar21[5] = uVar7 >> 0x18 | uVar7 >> 8 & 0xff00 | uVar7 << 0x18 | (uVar7 & 0xff00) << 8;
        puVar21 = puVar21 + 6;
        lVar31 = lVar31 + -1;
      } while (lVar31 != 0);
      if (uVar29 != 0) {
        idol_draw::DrawDepth(pRVar14,uVar29);
      }
      FUN_004d6704(1,uVar16 - 0x1e0,uVar16 - 0x1dc);
      FUN_004d676c(pRVar14,0,uVar27 + (longlong)iVar18 * 0x24 & 0xffffffff,
                   *(undefined4 *)(puVar11 + 0x28),*(undefined4 *)((int)puVar11 + 0x144));
      idol_draw::ResetPassState(pRVar14);
      *pRVar14->command = NV4097_SET_VERTEX_DATA_ARRAY_FORMAT_x1;
      pRVar14->command[1] = 0x1832;
      pRVar22 = pRVar14->command;
      pRVar14->command = pRVar22 + 2;
      pRVar22[2] = 0x41744;
      pRVar14->command[1] = 0x1822;
      pRVar22 = pRVar14->command;
      pRVar14->command = pRVar22 + 2;
      pRVar22[2] = 0x4174c;
      pRVar14->command[1] = 0x1844;
      pRVar22 = pRVar14->command;
      pRVar14->command = pRVar22 + 2;
      iVar18 = *(int *)(iVar19 + 0x4a8);
      pRVar22[2] = NV4097_SET_VERTEX_DATA_ARRAY_OFFSET_x1;
      RVar13 = (int)puVar20 - iVar18;
      pRVar14->command[1] = RVar13 | 0x80000000;
      pRVar22 = pRVar14->command;
      lVar23 = uVar16 - 0x2b0;
      pRVar14->command = pRVar22 + 2;
      pRVar22[2] = 0x41684;
      pRVar14->command[1] = RVar13 + 0xc | 0x80000000;
      pRVar22 = pRVar14->command;
      lVar24 = 8;
      pRVar14->command = pRVar22 + 2;
      pRVar22[2] = 0x4168c;
      pRVar14->command[1] = RVar13 + 0x14 | 0x80000000;
      pRVar22 = pRVar14->command;
      pRVar14->command = pRVar22 + 2;
      *(undefined4 *)((int)puVar11 + 0x7c) = 0;
      *(undefined4 *)(puVar11 + 0xf) = 0;
      *(undefined4 *)((int)puVar11 + 0x74) = 0;
      *(undefined4 *)(puVar11 + 0xe) = 0x3f800000;
      *(undefined4 *)((int)puVar11 + 0x8c) = 0;
      *(undefined4 *)(puVar11 + 0x11) = 0;
      *(undefined4 *)((int)puVar11 + 0x84) = 0x3f800000;
      *(undefined4 *)(puVar11 + 0x10) = 0;
      *(undefined4 *)((int)puVar11 + 0x9c) = 0;
      *(undefined4 *)(puVar11 + 0x13) = 0x3f800000;
      *(undefined4 *)((int)puVar11 + 0x94) = 0;
      *(undefined4 *)(puVar11 + 0x12) = 0;
      *(undefined4 *)((int)puVar11 + 0xac) = 0x3f800000;
      *(undefined4 *)(puVar11 + 0x15) = 0;
      *(undefined4 *)((int)puVar11 + 0xa4) = 0;
      *(undefined4 *)(puVar11 + 0x14) = 0;
      pRVar22[2] = 0x441efc;
      pRVar14->command[1] = 4;
      pRVar22 = pRVar14->command + 2;
      pRVar14->command = pRVar22;
      do {
        pRVar28 = (RsxCmd *)lVar23;
        *pRVar22 = *pRVar28;
        pRVar22 = pRVar14->command;
        pRVar14->command = pRVar22 + 1;
        lVar23 = lVar23 + 8;
        pRVar22[1] = pRVar28[1];
        pRVar28 = pRVar14->command;
        pRVar22 = pRVar28 + 1;
        pRVar14->command = pRVar22;
        lVar24 = lVar24 + -1;
      } while (lVar24 != 0);
      pRVar28[1] = 0x400c1714;
      pRVar14->command[1] = 0;
      pRVar14->command[2] = 0;
      iVar30 = iVar30 + 1;
      pcVar26 = pcVar26 + 0x20;
      pRVar14->command[3] = 0;
      pRVar14->command[4] = NV4097_SET_BEGIN_END_x1;
      pRVar14->command[5] = 6;
      pRVar22 = pRVar14->command;
      pRVar14->command = pRVar22 + 7;
      pRVar22[6] = 0x40041814;
      pRVar22 = pRVar14->command;
      pRVar14->command = pRVar22 + 1;
      *pRVar22 = 0x3000000;
      *pRVar14->command = NV4097_SET_BEGIN_END_x1;
      pRVar14->command[1] = 0;
      pRVar22 = pRVar14->command;
      pRVar14->command = pRVar22 + 2;
      pRVar22[2] = NV4097_SET_VERTEX_DATA_ARRAY_FORMAT_x1;
      pRVar14->command[1] = 2;
      pRVar22 = pRVar14->command;
      pRVar14->command = pRVar22 + 2;
      pRVar22[2] = 0x41744;
      pRVar14->command[1] = 2;
      pRVar22 = pRVar14->command;
      pRVar14->command = pRVar22 + 2;
      pRVar22[2] = 0x4174c;
      pRVar14->command[1] = 2;
      pRVar14->command = pRVar14->command + 2;
    } while (iVar30 < (int)(uint)(ushort)Sky->sprite_cnt);
  }
  pRVar14 = ForwardPass;
  *ForwardPass->command = NV4097_SET_BLEND_FUNC_SFACTOR_x2;
  pRVar14->command[1] = 0x3020302;
  pRVar14->command[2] = 0x3030303;
  pRVar14->command = pRVar14->command + 3;
  return;
}


// 0x015b55c (0x8 bytes)
undefined8 STUB_0015b55c(...)

{
  return 0;
}


// 0x015b564 (0x8 bytes)
undefined8 STUB_0015b564(...)

{
  return 0;
}


// 0x015b56c (0x4 bytes)
void STUB_0015b56c(...)

{
  return;
}


// 0x015b570 (0x4 bytes)
void STUB_0015b570(...)

{
  return;
}


