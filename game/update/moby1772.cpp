// game/update/moby1772.cpp -- reconstructed from NPEA00385 EBOOT
// STATUS: NOT STARTED (raw Ghidra output)
// 7 functions, 0x2b77e8-0x2b9490
#include <math.h>
#include "game/update/moby1772.h"
#include "game/camera.h"
#include "game/collproc.h"
#include "game/draw.h"
#include "game/hero.h"
#include "game/hud.h"
#include "game/mobyfunc.h"
#include "game/mobyutil.h"
#include "game/partupd.h"
#include "game/update.h"
#include "game/update/moby177.h"
#include "game/vuchain.h"
#include "idol/fastfunc.h"

// 0x02b77e8 (0x538 bytes)
// inlined: FastRSqrt @0x2b799c
void M1772_002b77e8(int param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  ulonglong *puVar10;
  float fVar11;
  float fVar12;
  undefined *puVar13;
  ulonglong uVar14;
  ulonglong uVar15;
  longlong lVar16;
  longlong lVar17;
  undefined4 *puVar18;
  undefined4 *puVar19;
  undefined4 *puVar20;
  float *pfVar22;
  longlong lVar21;
  ulonglong unaff_r26;
  ulonglong unaff_r27;
  undefined4 *puVar23;
  ulonglong unaff_r28;
  ulonglong unaff_r29;
  ulonglong unaff_r30;
  float *pfVar24;
  ulonglong unaff_r31;
  longlong lVar25;
  float *pfVar26;
  ulonglong in_LR;
  longlong lVar27;
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
  ulonglong in_f18;
  ulonglong in_f19;
  ulonglong in_f20;
  ulonglong in_f21;
  double dVar38;
  ulonglong in_f22;
  ulonglong in_f23;
  ulonglong in_f24;
  double dVar39;
  ulonglong in_f25;
  double dVar40;
  ulonglong in_f26;
  double dVar41;
  ulonglong in_f27;
  double dVar42;
  ulonglong in_f28;
  double dVar43;
  ulonglong in_f29;
  double dVar44;
  ulonglong in_f30;
  double dVar45;
  ulonglong in_f31;
  double dVar46;
  
  uVar14 = ZEXT48(&stack0x00000000);
  lVar17 = uVar14 - 0x1a0;
  puVar10 = (ulonglong *)lVar17;
  *puVar10 = uVar14;
  puVar10[0x36] = in_LR;
  puVar10[0x26] = in_f18;
  puVar10[0x27] = in_f19;
  puVar10[0x28] = in_f20;
  puVar10[0x29] = in_f21;
  puVar10[0x2a] = in_f22;
  puVar10[0x2b] = in_f23;
  puVar10[0x2c] = in_f24;
  puVar10[0x2d] = in_f25;
  puVar10[0x2e] = in_f26;
  puVar10[0x2f] = in_f27;
  puVar10[0x30] = in_f28;
  puVar10[0x31] = in_f29;
  puVar10[0x32] = in_f30;
  puVar10[0x33] = in_f31;
  puVar10[0x24] = unaff_r30;
  pfVar26 = *(float **)(param_1 + 0x78);
  puVar10[0x25] = unaff_r31;
  puVar10[0x23] = unaff_r29;
  puVar10[0x22] = unaff_r28;
  puVar10[0x21] = unaff_r27;
  puVar10[0x20] = unaff_r26;
  uVar15 = GetEffectTex(0xb);
  puVar10[0x1d] = uVar15;
  uVar15 = idol_draw::PackCmd(0,2,0,1,0x80);
  puVar10[0x1f] = uVar15;
  uVar15 = SCE_GS_SET_TEX1(0,0,1,1,1,0,0xff90);
  puVar10[0x1e] = uVar15;
  uVar15 = SCE_GS_SET_CLAMP(0,0,0,0,0,0);
  fVar4 = pfVar26[1];
  fVar5 = *pfVar26;
  dVar30 = (double)GameCamera.posY;
  dVar28 = (double)GameCamera.posX;
  fVar1 = (float)(dVar30 - (double)fVar4);
  fVar2 = (float)(dVar28 - (double)fVar5);
  dVar31 = (double)GameCamera.posZ;
  fVar6 = pfVar26[2];
  fVar3 = (float)(dVar31 - (double)fVar6);
  puVar10[0x1c] = uVar15;
  uVar7 = DAT_007b78d0;
  dVar39 = 0.0;
  dVar40 = (double)(float)GameCamera.posW;
  fVar11 = SQRT(fVar3 * fVar3 + fVar2 * fVar2 + fVar1 * fVar1);
  fVar12 = 0.3 / fVar11;
  dVar38 = dVar39;
  if (0.0 - fVar11 < 0.0) {
    dVar38 = (double)(fVar1 * fVar12);
  }
  dVar44 = dVar39;
  if (0.0 - fVar11 < 0.0) {
    dVar44 = (double)(fVar2 * fVar12);
  }
  dVar32 = dVar39;
  if (0.0 - fVar11 < 0.0) {
    dVar32 = (double)(fVar3 * fVar12);
  }
  if (fVar11 - 0.0 < 0.0) {
    dVar38 = (double)(fVar1 * fVar12);
  }
  if (fVar11 - 0.0 < 0.0) {
    dVar44 = (double)(fVar2 * fVar12);
  }
  if (fVar11 - 0.0 < 0.0) {
    dVar32 = (double)(fVar3 * fVar12);
  }
  dVar45 = (double)(float)(dVar38 + (double)fVar4);
  dVar46 = (double)(float)(dVar44 + (double)fVar5);
  dVar44 = (double)(float)(dVar32 + (double)fVar6);
  fVar1 = (float)(dVar30 - dVar45);
  fVar2 = (float)(dVar28 - dVar46);
  fVar3 = (float)(dVar31 - dVar44);
  fVar4 = fVar3 * fVar3 + fVar2 * fVar2 + fVar1 * fVar1;
  dVar38 = dVar39;
  dVar28 = dVar39;
  dVar30 = dVar39;
  if (SQRT(fVar4) != 0.0) {
    fVar5 = 1.0 / SQRT(fVar4);
    fVar5 = -(fVar4 * fVar5 * fVar5 - 1.0) * fVar5 * 0.5 + fVar5;
    fVar5 = -(fVar4 * fVar5 * fVar5 - 1.0) * fVar5 * 0.5 + fVar5;
    fVar5 = -(fVar4 * fVar5 * fVar5 - 1.0) * fVar5 * 0.5 + fVar5;
    dVar38 = (double)(fVar2 * fVar5);
    dVar28 = (double)(fVar1 * fVar5);
    dVar30 = (double)(fVar3 * fVar5);
  }
  fVar1 = (float)((double)g_heroGravityDir.z * dVar38 -
                 (double)(float)((double)g_heroGravityDir.x * dVar30));
  fVar2 = (float)((double)g_heroGravityDir.y * dVar30 - (double)(float)((double)g_heroGravityDir.z * dVar28));
  fVar3 = (float)((double)g_heroGravityDir.x * dVar28 -
                 (double)(float)((double)g_heroGravityDir.y * dVar38));
  *(undefined4 *)((int)puVar10 + 0xbc) = DAT_007b78d0;
  *(undefined4 *)(puVar10 + 0x17) = uVar7;
  *(undefined4 *)((int)puVar10 + 0xb4) = uVar7;
  *(undefined4 *)(puVar10 + 0x16) = uVar7;
  fVar4 = SQRT(fVar3 * fVar3 + fVar2 * fVar2 + fVar1 * fVar1);
  fVar5 = -1.0 / fVar4;
  dVar31 = dVar39;
  if (0.0 - fVar4 < 0.0) {
    dVar31 = (double)(fVar2 * fVar5);
  }
  dVar32 = dVar39;
  if (0.0 - fVar4 < 0.0) {
    dVar32 = (double)(fVar1 * fVar5);
  }
  dVar34 = dVar39;
  if (0.0 - fVar4 < 0.0) {
    dVar34 = (double)(fVar3 * fVar5);
  }
  if (fVar4 - 0.0 < 0.0) {
    dVar31 = (double)(fVar2 * fVar5);
  }
  if (fVar4 - 0.0 < 0.0) {
    dVar32 = (double)(fVar1 * fVar5);
  }
  if (fVar4 - 0.0 < 0.0) {
    dVar34 = (double)(fVar3 * fVar5);
  }
  dVar41 = (double)(float)(dVar38 * dVar32 - (double)(float)(dVar28 * dVar31));
  dVar43 = (double)(float)(dVar28 * dVar34 - (double)(float)(dVar30 * dVar32));
  dVar42 = (double)(float)(dVar30 * dVar31 - (double)(float)(dVar38 * dVar34));
  dVar29 = (double)MB_randRangeSigned(0,0x3f999999a0000000);
  puVar18 = &DAT_007b78b0;
  lVar25 = uVar14 - 0x130;
  dVar29 = (double)(float)((double)DAT_007b78d8 + dVar29);
  pfVar24 = (float *)&DAT_007b7870;
  puVar23 = &DAT_007b78b4;
  lVar27 = 4;
  lVar16 = lVar17;
  lVar21 = lVar25;
  puVar20 = puVar23;
  puVar19 = puVar18;
  pfVar26 = pfVar24;
  do {
    fVar2 = *pfVar26;
    fVar1 = (float)((double)fVar2 * dVar29);
    dVar33 = (double)fVar1;
    pfVar22 = (float *)lVar21;
    *pfVar22 = fVar1;
    dVar35 = (double)pfVar26[1];
    pfVar22[1] = (float)(dVar35 * dVar29);
    dVar36 = (double)(float)((double)pfVar26[2] * dVar29);
    pfVar22[2] = (float)((double)pfVar26[2] * dVar29);
    dVar37 = (double)pfVar26[3];
    pfVar26 = pfVar26 + 4;
    pfVar22[3] = (float)((double)fVar2 * (double)(float)(dVar29 * dVar40) + dVar37);
    *pfVar22 = (float)(dVar37 * dVar46 +
                      (double)(float)(dVar36 * dVar43 +
                                     (double)(float)(dVar33 * dVar38 +
                                                    (double)(float)(dVar35 * (double)(float)(dVar29 
                                                  * dVar31)))));
    pfVar22[1] = (float)(dVar37 * dVar45 +
                        (double)(float)(dVar36 * dVar42 +
                                       (double)(float)(dVar33 * dVar28 +
                                                      (double)(float)(dVar35 * (double)(float)(
                                                  dVar29 * dVar32)))));
    pfVar22[2] = (float)(dVar37 * dVar44 +
                        (double)(float)(dVar36 * dVar41 +
                                       (double)(float)(dVar33 * dVar30 +
                                                      (double)(float)(dVar35 * (double)(float)(
                                                  dVar29 * dVar34)))));
    uVar7 = *puVar19;
    lVar21 = lVar21 + 0x10;
    uVar8 = *puVar20;
    puVar19 = puVar19 + 2;
    *(undefined4 *)((int)lVar16 + 0xc0) = uVar7;
    puVar20 = puVar20 + 2;
    *(undefined4 *)((int)lVar16 + 0xc4) = uVar8;
    lVar16 = lVar16 + 8;
    lVar27 = lVar27 + -1;
  } while (lVar27 != 0);
  FastDrawQuad(uVar14 - 0x130,0,0,EffectTexHeaders,9);
  puVar13 = PTR_DAT_007b7824;
  *(undefined **)((int)puVar10 + 0xbc) = PTR_DAT_007b7824;
  *(undefined **)(puVar10 + 0x17) = puVar13;
  *(undefined **)((int)puVar10 + 0xb4) = puVar13;
  *(undefined **)(puVar10 + 0x16) = puVar13;
  dVar39 = (double)MB_randRangeSigned(dVar39,0x3fa99999a0000000);
  uVar7 = EffectTexHeaders;
  lVar16 = 4;
  dVar39 = (double)(float)((double)DAT_007b78dc + dVar39);
  do {
    fVar2 = *pfVar24;
    fVar1 = (float)((double)fVar2 * dVar39);
    dVar29 = (double)fVar1;
    pfVar26 = (float *)lVar25;
    *pfVar26 = fVar1;
    dVar33 = (double)pfVar24[1];
    pfVar26[1] = (float)(dVar33 * dVar39);
    dVar35 = (double)(float)((double)pfVar24[2] * dVar39);
    pfVar26[2] = (float)((double)pfVar24[2] * dVar39);
    dVar36 = (double)pfVar24[3];
    pfVar24 = pfVar24 + 4;
    pfVar26[3] = (float)((double)fVar2 * (double)(float)(dVar39 * dVar40) + dVar36);
    *pfVar26 = (float)(dVar36 * dVar46 +
                      (double)(float)(dVar35 * dVar43 +
                                     (double)(float)(dVar29 * dVar38 +
                                                    (double)(float)(dVar33 * (double)(float)(dVar39 
                                                  * dVar31)))));
    pfVar26[1] = (float)(dVar36 * dVar45 +
                        (double)(float)(dVar35 * dVar42 +
                                       (double)(float)(dVar29 * dVar28 +
                                                      (double)(float)(dVar33 * (double)(float)(
                                                  dVar39 * dVar32)))));
    pfVar26[2] = (float)(dVar36 * dVar44 +
                        (double)(float)(dVar35 * dVar41 +
                                       (double)(float)(dVar29 * dVar30 +
                                                      (double)(float)(dVar33 * (double)(float)(
                                                  dVar39 * dVar34)))));
    uVar8 = *puVar18;
    lVar25 = lVar25 + 0x10;
    uVar9 = *puVar23;
    puVar18 = puVar18 + 2;
    *(undefined4 *)((int)lVar17 + 0xc0) = uVar8;
    puVar23 = puVar23 + 2;
    *(undefined4 *)((int)lVar17 + 0xc4) = uVar9;
    lVar17 = lVar17 + 8;
    lVar16 = lVar16 + -1;
  } while (lVar16 != 0);
  FastDrawQuad(uVar14 - 0x130,0,0,uVar7,9);
  return;
}


// 0x02b7d30 (0x7e4 bytes)
// inlined: FastRSqrt @0x2b7f8c, FastRSqrt @0x2b80a4, FastRSqrt @0x2b834c
void M1772_002b7d30(void)

{
  undefined8 uVar1;
  int in_r9;
  int iVar2;
  GPiece<144> local_1d0;
  GPiece<152> local_140;
  
  GetEffectTex(DAT_007b7864);
  idol_draw::PackCmd(0,2,0,1,0x80);
  SCE_GS_SET_TEX1(0,0,1,1,1,0,0xff90);
  SCE_GS_SET_CLAMP(0,0,0,0,0,0);
  GetEffectTex(DAT_007b7868);
  in_r9 = in_r9 + -1;
  iVar2 = 1;
  if (1 < in_r9) {
    do {
      FastDrawQuad(local_1d0,0,0,EffectTexHeaders,9);
      iVar2 = iVar2 + 1;
    } while (iVar2 < in_r9);
  }
  if (0 < in_r9) {
    iVar2 = 0;
    do {
      FastDrawQuad(local_140,0,0,EffectTexHeaders,9);
      iVar2 = iVar2 + 1;
    } while (iVar2 < in_r9);
  }
  uVar1 = idol_draw::Blend(1,5,0x60,3,0,0,1,2);
  SetGSReg(0x16,uVar1);
  return;
}


// 0x02b8520 (0x1dc bytes)
void M1772_002b8520(undefined8 param_1)

{
  undefined8 uVar1;
  
  DAT_010a06b4 = -(DAT_0071f408 * DAT_007b781c - DAT_010a06b4);
  if (DAT_010a06b4 <= -8.0) {
    DAT_010a06b4 = DAT_010a06b4 + 8.0;
  }
  M1772_002b7d30((double)DAT_007b7828,(double)DAT_007b782c,(double)DAT_007b785c,&DAT_010a0240,
                 DAT_007b7808,DAT_007b7810);
  M1772_002b7d30((double)DAT_007b7838,(double)DAT_007b783c,(double)DAT_007b7860,&DAT_010a0380,
                 DAT_007b7830,DAT_007b7834);
  uVar1 = 0x3fc99999a0000000;
  M1772_002b7d30((double)DAT_007b7838,(double)DAT_007b783c,0x3fc99999a0000000,&DAT_010a06c0,
                 DAT_010a0808,DAT_010a0808);
  M1772_002b7d30((double)DAT_007b7838,(double)DAT_007b783c,uVar1,&DAT_010a0710,DAT_010a080a,
                 DAT_010a080a);
  M1772_002b7d30((double)DAT_007b7838,(double)DAT_007b783c,uVar1,&DAT_010a0760,DAT_010a080c,
                 DAT_010a080c);
  M1772_002b7d30((double)DAT_007b7838,(double)DAT_007b783c,uVar1,&DAT_010a07b0,DAT_010a080e,
                 DAT_010a080e);
  M1772_002b77e8(param_1);
  return;
}


// 0x02b86fc (0x14 bytes)
void M1772_002b86fc(void)

{
  DAT_007b792c = 0x10000;
  return;
}


// 0x02b8748 (0x954 bytes)
void M1772_002b8748(int param_1)

{
  longlong lVar1;
  undefined4 uVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float *pfVar6;
  ulonglong *puVar7;
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
  ulonglong uVar18;
  undefined8 uVar19;
  ulonglong uVar20;
  longlong lVar21;
  undefined4 uVar22;
  float *pfVar23;
  float *pfVar24;
  undefined4 *puVar25;
  longlong lVar26;
  longlong lVar27;
  ulonglong unaff_r22;
  ulonglong unaff_r23;
  ulonglong unaff_r24;
  undefined4 *puVar28;
  ulonglong unaff_r25;
  ulonglong unaff_r26;
  ulonglong unaff_r27;
  int iVar29;
  ulonglong unaff_r28;
  float *pfVar30;
  ulonglong unaff_r29;
  ulonglong unaff_r30;
  int iVar31;
  ulonglong unaff_r31;
  ulonglong in_LR;
  longlong lVar32;
  double dVar33;
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
  ulonglong in_f19;
  double dVar45;
  ulonglong in_f20;
  double dVar46;
  ulonglong in_f21;
  double dVar47;
  ulonglong in_f22;
  double dVar48;
  ulonglong in_f23;
  double dVar49;
  ulonglong in_f24;
  double dVar50;
  ulonglong in_f25;
  double dVar51;
  ulonglong in_f26;
  double dVar52;
  ulonglong in_f27;
  double dVar53;
  ulonglong in_f28;
  double dVar54;
  ulonglong in_f29;
  double dVar55;
  ulonglong in_f30;
  double dVar56;
  ulonglong in_f31;
  double dVar57;
  
  uVar18 = ZEXT48(&stack0x00000000);
  lVar1 = uVar18 - 0x220;
  puVar7 = (ulonglong *)lVar1;
  *puVar7 = uVar18;
  puVar7[0x46] = in_LR;
  puVar7[0x37] = in_f19;
  puVar7[0x38] = in_f20;
  puVar7[0x39] = in_f21;
  puVar7[0x3a] = in_f22;
  puVar7[0x3b] = in_f23;
  puVar7[0x3c] = in_f24;
  puVar7[0x3d] = in_f25;
  puVar7[0x3e] = in_f26;
  puVar7[0x3f] = in_f27;
  puVar7[0x40] = in_f28;
  puVar7[0x41] = in_f29;
  puVar7[0x42] = in_f30;
  puVar7[0x43] = in_f31;
  puVar7[0x36] = unaff_r31;
  puVar7[0x35] = unaff_r30;
  pfVar6 = *(float **)(param_1 + 0x78);
  puVar7[0x34] = unaff_r29;
  puVar7[0x33] = unaff_r28;
  puVar7[0x32] = unaff_r27;
  puVar7[0x31] = unaff_r26;
  puVar7[0x30] = unaff_r25;
  puVar7[0x2f] = unaff_r24;
  puVar7[0x2e] = unaff_r23;
  puVar7[0x2d] = unaff_r22;
  uVar19 = idol_draw::Blend(1,0,0x3f,1,0,0,1,2);
  SetGSReg(0x16,uVar19);
  iVar29 = 0;
  g_ViewContext.farClip = 8.192e+06;
  iVar31 = 0;
  pfVar6[5] = -8000.0;
  do {
    fVar15 = GameCamera.posZ;
    fVar14 = GameCamera.posY;
    fVar4 = GameCamera.posX;
    fVar5 = *pfVar6 - GameCamera.posX;
    fVar3 = *pfVar6 - pfVar6[4];
    fVar8 = pfVar6[1] - pfVar6[5];
    fVar13 = pfVar6[2] - pfVar6[6];
    *(float *)(puVar7 + 0xe) = fVar5;
    fVar9 = pfVar6[1] - fVar14;
    *(float *)((int)puVar7 + 0x74) = fVar9;
    fVar11 = fVar3 * fVar9 - fVar8 * fVar5;
    fVar10 = pfVar6[2] - fVar15;
    fVar12 = fVar8 * fVar10 - fVar13 * fVar9;
    *(float *)(puVar7 + 0xf) = fVar10;
    *(float *)((int)puVar7 + 0x7c) = pfVar6[3];
    fVar9 = fVar13 * fVar5 - fVar3 * fVar10;
    fVar4 = pfVar6[4] - fVar4;
    *(float *)(puVar7 + 0x10) = fVar4;
    fVar14 = pfVar6[5] - fVar14;
    *(float *)((int)puVar7 + 0x84) = fVar14;
    fVar17 = 0.0;
    fVar15 = pfVar6[6] - fVar15;
    *(undefined4 *)((int)puVar7 + 0x7c) = 0;
    fVar5 = *(float *)((int)&DAT_007b7a18 + iVar31);
    fVar16 = SQRT(fVar11 * fVar11 + fVar12 * fVar12 + fVar9 * fVar9);
    *(undefined4 *)((int)puVar7 + 0x8c) = 0;
    fVar10 = fVar3 * fVar14 - fVar8 * fVar4;
    fVar8 = fVar8 * fVar15 - fVar13 * fVar14;
    fVar3 = fVar13 * fVar4 - fVar3 * fVar15;
    *(float *)(puVar7 + 0x10) = fVar8;
    *(float *)((int)puVar7 + 0x84) = fVar3;
    *(float *)(puVar7 + 0x11) = fVar10;
    fVar5 = fVar5 / fVar16;
    fVar4 = SQRT(fVar10 * fVar10 + fVar8 * fVar8 + fVar3 * fVar3);
    fVar13 = fVar17;
    if (0.0 - fVar16 < 0.0) {
      fVar13 = fVar12 * fVar5;
    }
    fVar14 = fVar17;
    if (0.0 - fVar16 < 0.0) {
      fVar14 = fVar9 * fVar5;
    }
    fVar15 = fVar17;
    if (0.0 - fVar16 < 0.0) {
      fVar15 = fVar11 * fVar5;
    }
    if (fVar16 - 0.0 < 0.0) {
      fVar13 = fVar12 * fVar5;
    }
    if (fVar16 - 0.0 < 0.0) {
      fVar14 = fVar9 * fVar5;
    }
    if (fVar16 - 0.0 < 0.0) {
      fVar15 = fVar11 * fVar5;
    }
    *(float *)(puVar7 + 0xe) = fVar13;
    *(float *)((int)puVar7 + 0x74) = fVar14;
    *(float *)(puVar7 + 0xf) = fVar15;
    fVar9 = pfVar6[10] / fVar4;
    fVar5 = fVar17;
    if (0.0 - fVar4 < 0.0) {
      fVar5 = fVar8 * fVar9;
    }
    fVar11 = fVar17;
    if (0.0 - fVar4 < 0.0) {
      fVar11 = fVar3 * fVar9;
    }
    if (0.0 - fVar4 < 0.0) {
      fVar17 = fVar10 * fVar9;
    }
    if (fVar4 - 0.0 < 0.0) {
      fVar5 = fVar8 * fVar9;
    }
    if (fVar4 - 0.0 < 0.0) {
      fVar11 = fVar3 * fVar9;
    }
    if (fVar4 - 0.0 < 0.0) {
      fVar17 = fVar10 * fVar9;
    }
    *(float *)(puVar7 + 0x10) = fVar5;
    *(float *)((int)puVar7 + 0x84) = fVar11;
    *(float *)(puVar7 + 0x11) = fVar17;
    uVar20 = SCE_GS_SET_TEX1(0,0,1,1,1,0,0xff90);
    puVar7[0x2a] = uVar20;
    uVar20 = SCE_GS_SET_CLAMP(0,0,0,0,0,0);
    puVar7[0x28] = uVar20;
    uVar20 = idol_draw::PackCmd(0,2,0,1,0x80);
    puVar7[0x2b] = uVar20;
    uVar2 = DAT_007b7950;
    pfVar23 = (float *)&DAT_00655a64;
    *(undefined4 *)((int)puVar7 + 0x11c) = DAT_007b7950;
    *(undefined4 *)(puVar7 + 0x23) = uVar2;
    puVar28 = &DAT_00655a68;
    *(undefined4 *)((int)puVar7 + 0x114) = uVar2;
    *(undefined4 *)(puVar7 + 0x22) = uVar2;
    lVar26 = uVar18 - 0x100;
    lVar27 = uVar18 - 0xfc;
    lVar32 = 2;
    lVar21 = lVar1;
    puVar25 = puVar28;
    pfVar24 = pfVar23;
    do {
      uVar2 = *puVar25;
      *(float *)((int)lVar21 + 0x120) = *pfVar24;
      fVar5 = pfVar24[2];
      *(undefined4 *)((int)lVar21 + 0x124) = uVar2;
      uVar2 = puVar25[2];
      pfVar24 = pfVar24 + 4;
      *(float *)((int)lVar26 + 8) = fVar5;
      puVar25 = puVar25 + 4;
      *(undefined4 *)((int)lVar27 + 8) = uVar2;
      lVar26 = lVar26 + 0x10;
      lVar27 = lVar27 + 0x10;
      lVar21 = lVar21 + 0x10;
      lVar32 = lVar32 + -1;
    } while (lVar32 != 0);
    FastVecSub(uVar18 - 400,pfVar6,uVar18 - 0x1b0);
    *(undefined4 *)(puVar7 + 0x1a) = *(undefined4 *)(puVar7 + 0x12);
    *(undefined4 *)((int)puVar7 + 0xd4) = *(undefined4 *)((int)puVar7 + 0x94);
    *(undefined4 *)(puVar7 + 0x1b) = *(undefined4 *)(puVar7 + 0x13);
    *(undefined4 *)((int)puVar7 + 0xdc) = *(undefined4 *)((int)puVar7 + 0x9c);
    FastVecAdd(uVar18 - 0x180,pfVar6,uVar18 - 0x1b0);
    *(undefined4 *)(puVar7 + 0x1c) = *(undefined4 *)(puVar7 + 0x14);
    *(undefined4 *)((int)puVar7 + 0xe4) = *(undefined4 *)((int)puVar7 + 0xa4);
    *(undefined4 *)(puVar7 + 0x1d) = *(undefined4 *)(puVar7 + 0x15);
    *(undefined4 *)((int)puVar7 + 0xec) = *(undefined4 *)((int)puVar7 + 0xac);
    FastVecSub(uVar18 - 0x170,pfVar6 + 4,uVar18 - 0x1a0);
    *(undefined4 *)(puVar7 + 0x1e) = *(undefined4 *)(puVar7 + 0x16);
    *(undefined4 *)((int)puVar7 + 0xf4) = *(undefined4 *)((int)puVar7 + 0xb4);
    *(undefined4 *)(puVar7 + 0x1f) = *(undefined4 *)(puVar7 + 0x17);
    *(undefined4 *)((int)puVar7 + 0xfc) = *(undefined4 *)((int)puVar7 + 0xbc);
    FastVecAdd(uVar18 - 0x160,pfVar6 + 4,uVar18 - 0x1a0);
    *(undefined4 *)(puVar7 + 0x20) = *(undefined4 *)(puVar7 + 0x18);
    *(undefined4 *)((int)puVar7 + 0x104) = *(undefined4 *)((int)puVar7 + 0xc4);
    *(undefined4 *)(puVar7 + 0x21) = *(undefined4 *)(puVar7 + 0x19);
    *(undefined4 *)((int)puVar7 + 0x10c) = *(undefined4 *)((int)puVar7 + 0xcc);
    uVar20 = GetEffectTex(*(undefined4 *)((int)&DAT_007b79e0 + iVar31));
    puVar7[0x29] = uVar20;
    lVar26 = 4;
    fVar5 = *(float *)((int)&DAT_007b79f4 + iVar31);
    lVar21 = lVar1;
    do {
      fVar3 = *pfVar23;
      uVar2 = *puVar28;
      pfVar23 = pfVar23 + 2;
      puVar28 = puVar28 + 2;
      *(undefined4 *)((int)lVar21 + 0x124) = uVar2;
      *(float *)((int)lVar21 + 0x120) = fVar3 + fVar5;
      uVar2 = EffectTexHeaders;
      lVar21 = lVar21 + 8;
      lVar26 = lVar26 + -1;
    } while (lVar26 != 0);
    *(float *)((int)&DAT_007b79f4 + iVar31) =
         *(float *)((int)&DAT_007b7a08 + iVar31) * DAT_0071f424 + fVar5;
    FastDrawQuad(uVar18 - 0x150,0,0,uVar2,9);
    iVar29 = iVar29 + 1;
    iVar31 = iVar31 + 4;
  } while (iVar29 < 2);
  uVar20 = GetEffectTex(0x2f);
  puVar7[0x29] = uVar20;
  iVar31 = 0;
  dVar57 = 0.5;
  dVar56 = 1000.0;
  dVar55 = 4.71238899230957;
  pfVar30 = (float *)&DAT_007b7968;
  dVar54 = 3.141592502593994;
  dVar53 = -3.141592502593994;
  dVar52 = -0.16666656732559204;
  dVar51 = 0.008333025500178337;
  pfVar23 = (float *)&DAT_010a0830;
  dVar50 = -0.0001980741071747616;
  puVar25 = &DAT_007b7990;
  dVar49 = 2.601886990305502e-06;
  pfVar24 = (float *)&DAT_007b79a4;
  dVar48 = 1.570796251296997;
  dVar47 = 3.1415927410125732;
  dVar46 = 1.5707963705062866;
  puVar28 = &DAT_007b797c;
  do {
    dVar34 = (double)*pfVar30;
    fVar4 = *pfVar23;
    dVar45 = (double)fVar4;
    dVar36 = -(double)(float)(dVar34 * dVar57 - (double)pfVar6[4]);
    *(float *)(puVar7 + 0x1a) = (float)dVar36;
    fVar5 = (float)((double)pfVar6[5] + dVar56);
    *(float *)((int)puVar7 + 0xd4) = fVar5;
    fVar3 = pfVar6[6];
    *(undefined4 *)((int)puVar7 + 0xdc) = 0x3f800000;
    fVar3 = (float)(dVar34 * dVar57 + (double)fVar3);
    *(float *)((int)puVar7 + 0x104) = fVar5;
    *(undefined4 *)((int)puVar7 + 0x10c) = 0x3f800000;
    *(float *)((int)puVar7 + 0xf4) = fVar5;
    *(undefined4 *)((int)puVar7 + 0xfc) = 0x3f800000;
    *(float *)(puVar7 + 0x1c) = (float)dVar36;
    *(float *)((int)puVar7 + 0xe4) = fVar5;
    *(undefined4 *)((int)puVar7 + 0xec) = 0x3f800000;
    *(float *)(puVar7 + 0x1b) = fVar3;
    *(float *)(puVar7 + 0x1f) = fVar3;
    *(float *)(puVar7 + 0x1e) = (float)(dVar36 + dVar34);
    *(float *)(puVar7 + 0x20) = (float)(dVar36 + dVar34);
    *(float *)(puVar7 + 0x1d) = (float)((double)fVar3 + -dVar34);
    *(float *)(puVar7 + 0x21) = (float)((double)fVar3 + -dVar34);
    dVar36 = (double)FastWrapRot(fVar4,(float)dVar55);
    dVar34 = (double)(float)(dVar54 - dVar36);
    if (dVar36 - (double)(float)(dVar54 - dVar36) < 0.0) {
      dVar34 = dVar36;
    }
    dVar35 = (double)(float)(dVar53 - dVar36);
    if ((double)(float)(dVar53 - dVar36) - dVar34 < 0.0) {
      dVar35 = dVar34;
    }
    dVar34 = (double)(float)(dVar35 * dVar35);
    dVar36 = (double)(float)(dVar34 * (double)(float)(dVar34 * dVar35));
    dVar37 = (double)(float)(dVar34 * dVar36);
    *(float *)(puVar7 + 0x24) =
         (float)((double)(float)((double)(float)(dVar34 * dVar37) * dVar49 +
                                (double)(float)(dVar37 * dVar50 +
                                               (double)(float)(dVar36 * dVar51 +
                                                              (double)(float)((double)(float)(dVar34
                                                                                             * 
                                                  dVar35) * dVar52 + dVar35)))) * dVar57 + dVar57);
    dVar34 = (double)FastWrapRot((float)dVar45,(float)dVar55);
    dVar36 = (double)(float)(dVar34 + dVar48);
    dVar34 = (double)(float)(dVar54 - dVar36);
    if (dVar36 - (double)(float)(dVar54 - dVar36) < 0.0) {
      dVar34 = dVar36;
    }
    dVar35 = (double)(float)(dVar53 - dVar36);
    if ((double)(float)(dVar53 - dVar36) - dVar34 < 0.0) {
      dVar35 = dVar34;
    }
    dVar34 = (double)(float)(dVar35 * dVar35);
    dVar36 = (double)(float)(dVar34 * (double)(float)(dVar34 * dVar35));
    dVar37 = (double)(float)(dVar34 * dVar36);
    *(float *)((int)puVar7 + 0x124) =
         (float)((double)(float)((double)(float)(dVar34 * dVar37) * dVar49 +
                                (double)(float)(dVar37 * dVar50 +
                                               (double)(float)(dVar36 * dVar51 +
                                                              (double)(float)((double)(float)(dVar34
                                                                                             * 
                                                  dVar35) * dVar52 + dVar35)))) * dVar57 + dVar57);
    dVar36 = (double)FastWrapRot((float)dVar45,(float)dVar47);
    dVar34 = (double)(float)(dVar54 - dVar36);
    if (dVar36 - (double)(float)(dVar54 - dVar36) < 0.0) {
      dVar34 = dVar36;
    }
    dVar35 = (double)(float)(dVar53 - dVar36);
    if ((double)(float)(dVar53 - dVar36) - dVar34 < 0.0) {
      dVar35 = dVar34;
    }
    dVar34 = (double)(float)(dVar35 * dVar35);
    dVar36 = (double)(float)(dVar34 * (double)(float)(dVar34 * dVar35));
    dVar37 = (double)(float)(dVar34 * dVar36);
    *(float *)(puVar7 + 0x25) =
         (float)((double)(float)((double)(float)(dVar34 * dVar37) * dVar49 +
                                (double)(float)(dVar37 * dVar50 +
                                               (double)(float)(dVar36 * dVar51 +
                                                              (double)(float)((double)(float)(dVar34
                                                                                             * 
                                                  dVar35) * dVar52 + dVar35)))) * dVar57 + dVar57);
    dVar34 = (double)FastWrapRot((float)dVar45,(float)dVar47);
    dVar36 = (double)(float)(dVar34 + dVar48);
    dVar35 = (double)(float)(dVar45 + dVar48);
    dVar34 = (double)(float)(dVar54 - dVar45);
    if (dVar45 - (double)(float)(dVar54 - dVar45) < 0.0) {
      dVar34 = dVar45;
    }
    dVar37 = (double)(float)(dVar54 - dVar36);
    if (dVar36 - (double)(float)(dVar54 - dVar36) < 0.0) {
      dVar37 = dVar36;
    }
    dVar38 = (double)(float)(dVar54 - dVar35);
    if (dVar35 - (double)(float)(dVar54 - dVar35) < 0.0) {
      dVar38 = dVar35;
    }
    dVar33 = (double)(float)(dVar53 - dVar45);
    if ((double)(float)(dVar53 - dVar45) - dVar34 < 0.0) {
      dVar33 = dVar34;
    }
    dVar34 = (double)(float)(dVar53 - dVar36);
    if ((double)(float)(dVar53 - dVar36) - dVar37 < 0.0) {
      dVar34 = dVar37;
    }
    dVar37 = (double)(float)(dVar33 * dVar33);
    dVar36 = (double)(float)(dVar53 - dVar35);
    if ((double)(float)(dVar53 - dVar35) - dVar38 < 0.0) {
      dVar36 = dVar38;
    }
    dVar35 = (double)(float)(dVar34 * dVar34);
    dVar39 = (double)(float)(dVar36 * dVar36);
    dVar41 = (double)(float)(dVar37 * (double)(float)(dVar37 * dVar33));
    dVar43 = (double)(float)(dVar35 * (double)(float)(dVar35 * dVar34));
    dVar40 = (double)(float)(dVar37 * dVar41);
    dVar44 = (double)(float)(dVar39 * (double)(float)(dVar39 * dVar36));
    dVar38 = (double)(float)(dVar35 * dVar43);
    dVar42 = (double)(float)(dVar39 * dVar44);
    *(float *)(puVar7 + 0x26) =
         (float)((double)(float)((double)(float)(dVar37 * dVar40) * dVar49 +
                                (double)(float)(dVar40 * dVar50 +
                                               (double)(float)(dVar41 * dVar51 +
                                                              (double)(float)((double)(float)(dVar37
                                                                                             * 
                                                  dVar33) * dVar52 + dVar33)))) * dVar57 + dVar57);
    *(float *)((int)puVar7 + 300) =
         (float)((double)(float)((double)(float)(dVar35 * dVar38) * dVar49 +
                                (double)(float)(dVar38 * dVar50 +
                                               (double)(float)(dVar43 * dVar51 +
                                                              (double)(float)((double)(float)(dVar35
                                                                                             * 
                                                  dVar34) * dVar52 + dVar34)))) * dVar57 + dVar57);
    *(float *)((int)puVar7 + 0x134) =
         (float)((double)(float)((double)(float)(dVar39 * dVar42) * dVar49 +
                                (double)(float)(dVar42 * dVar50 +
                                               (double)(float)(dVar44 * dVar51 +
                                                              (double)(float)((double)(float)(dVar39
                                                                                             * 
                                                  dVar36) * dVar52 + dVar36)))) * dVar57 + dVar57);
    dVar36 = (double)FastWrapRot((float)dVar45,(float)dVar46);
    dVar34 = (double)(float)(dVar54 - dVar36);
    if (dVar36 - (double)(float)(dVar54 - dVar36) < 0.0) {
      dVar34 = dVar36;
    }
    dVar35 = (double)(float)(dVar53 - dVar36);
    if ((double)(float)(dVar53 - dVar36) - dVar34 < 0.0) {
      dVar35 = dVar34;
    }
    dVar34 = (double)(float)(dVar35 * dVar35);
    dVar36 = (double)(float)(dVar34 * (double)(float)(dVar34 * dVar35));
    dVar37 = (double)(float)(dVar34 * dVar36);
    *(float *)(puVar7 + 0x27) =
         (float)((double)(float)((double)(float)(dVar34 * dVar37) * dVar49 +
                                (double)(float)(dVar37 * dVar50 +
                                               (double)(float)(dVar36 * dVar51 +
                                                              (double)(float)((double)(float)(dVar34
                                                                                             * 
                                                  dVar35) * dVar52 + dVar35)))) * dVar57 + dVar57);
    dVar34 = (double)FastWrapRot((float)dVar45,(float)dVar46);
    dVar36 = (double)(float)(dVar34 + dVar48);
    dVar34 = (double)(float)(dVar54 - dVar36);
    if (dVar36 - (double)(float)(dVar54 - dVar36) < 0.0) {
      dVar34 = dVar36;
    }
    dVar45 = (double)(float)(dVar53 - dVar36);
    if ((double)(float)(dVar53 - dVar36) - dVar34 < 0.0) {
      dVar45 = dVar34;
    }
    fVar5 = *pfVar24;
    uVar2 = *puVar28;
    uVar22 = *puVar25;
    dVar36 = (double)(float)(dVar45 * dVar45);
    dVar35 = (double)(float)(dVar36 * (double)(float)(dVar36 * dVar45));
    dVar34 = (double)(float)(dVar36 * dVar35);
    *(float *)((int)puVar7 + 0x13c) =
         (float)((double)(float)((double)(float)(dVar36 * dVar34) * dVar49 +
                                (double)(float)(dVar34 * dVar50 +
                                               (double)(float)(dVar35 * dVar51 +
                                                              (double)(float)((double)(float)(dVar36
                                                                                             * 
                                                  dVar45) * dVar52 + dVar45)))) * dVar57 + dVar57);
    uVar22 = FastLerpColor((double)fVar5,uVar2,uVar22);
    *(undefined4 *)((int)puVar7 + 0x11c) = uVar22;
    *(undefined4 *)(puVar7 + 0x23) = uVar22;
    *(undefined4 *)((int)puVar7 + 0x114) = uVar22;
    uVar2 = EffectTexHeaders;
    *(undefined4 *)(puVar7 + 0x22) = uVar22;
    FastDrawQuad(uVar18 - 0x150,0,0,uVar2,9);
    iVar31 = iVar31 + 1;
    pfVar30 = pfVar30 + 1;
    pfVar23 = pfVar23 + 1;
    puVar28 = puVar28 + 1;
    puVar25 = puVar25 + 1;
    pfVar24 = pfVar24 + 1;
  } while (iVar31 < 5);
  uVar19 = idol_draw::Blend(1,5,0x60,3,0,0,1,2);
  SetGSReg(0x16,uVar19);
  return;
}


// 0x02b90b8 (0x3c4 bytes)
/* Moby 1772 */

void UpdateMoby_1772(MobyInstance *moby)

{
  f32 *pfVar1;
  undefined4 uVar2;
  float fVar3;
  float fVar4;
  int iVar6;
  ulonglong uVar5;
  float *pfVar7;
  float *pfVar8;
  float *pfVar9;
  longlong lVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  GPiece<16> auVar15;
  GPiece<16> auVar16;
  GPiece<16> auVar17;
  GPiece<16> auVar18;
  GPiece<16> auVar19;
  GPiece<16> auVar20;
  float local_90 [4];
  float afStack_80 [4];
  GPiece<16> local_70;
  f32 local_60;
  f32 local_5c;
  f32 local_58;
  f32 local_54;
  
  pfVar1 = (f32 *)moby->pVar;
  if (pfVar1[0x13] != -NAN) {
    if (((g_heroState == TURRET_PLANE_UI) && (DAT_0096b2d0 != 0)) &&
       (*(short *)(DAT_0096b2d0 + 0xa6) == 0x563)) {
      HeroDeathHeight = 0x41200000;
    }
    else {
      iVar6 = MB_IsPntInCuboid(&g_heroPosition,(longlong)(int)pfVar1[0x13]);
      HeroDeathHeight = 0x41200000;
      if (iVar6 != 0) {
        HeroDeathHeight = 0x43160000;
      }
    }
  }
  if (moby->state == '\0') {
    auVar17 = ZEXT416(0);
    auVar15 = auVar17 | auVar17 << 0x20 | auVar17 << 0x40 | auVar17 << 0x60;
    moby->state = '\x01';
    uVar5 = ZEXT48(&DAT_010a0830);
    auVar17 = loadVectorLeftIndexed(8,0x2b909c);
    lVar10 = 5;
    auVar17 = auVar17 >> 0x60 & (GPiece<16>)0xffffffff;
    do {
      auVar18 = vectorConvertFromSignedFixedPointWord(auVar15,0);
      auVar20 = ZEXT416(0xffffffff);
      auVar19 = auVar20 | auVar20 << 0x20 | auVar20 << 0x40 | auVar20 << 0x60;
      auVar20.piece<0,4>() = auVar15.piece<0,4>() + 1;
      auVar20.piece<8,8>() = auVar15.piece<8,8>();
      auVar20.piece<4,4>() = auVar15.piece<4,4>() + 1;
      auVar16.piece<0,8>() = auVar20.piece<0,8>();
      auVar16.piece<12,4>() = auVar15.piece<12,4>();
      auVar16.piece<8,4>() = auVar15.piece<8,4>() + 1;
      auVar15.piece<0,12>() = auVar16.piece<0,12>();
      auVar15.piece<12,4>() = auVar16.piece<12,4>() + 1;
      auVar20 = vectorShiftLeftIntegerWord(auVar19,auVar19);
      auVar20 = vectorMultiplyAddFloatingPoint
                          (auVar18,auVar17 | auVar17 << 0x20 | auVar17 << 0x40 | auVar17 << 0x60,
                           auVar20);
      uVar2 = storeVectorElementWordIndexed(auVar20,0,uVar5);
      *(undefined4 *)uVar5 = uVar2;
      uVar5 = uVar5 + 4;
      lVar10 = lVar10 + -1;
    } while (lVar10 != 0);
    *pfVar1 = (moby->pos).x;
    pfVar1[1] = (moby->pos).y;
    pfVar1[2] = (moby->pos).z;
    pfVar1[3] = (moby->pos).w;
    dVar13 = 0.0;
    MB_SphericalToVector
              ((DAT_007b7a30 + DAT_007b7a2c) / DAT_007b7a34,(moby->rotation).z,0.0,local_90);
    MB_SphericalToVector
              (DAT_007b7a2c / DAT_007b7a34,pfVar1[0x11],(float)dVar13,afStack_80);
    FastVecAdd(local_70,local_90,afStack_80);
    FastVecAdd(&local_60,pfVar1,local_90);
    pfVar1[4] = local_60;
    pfVar1[5] = local_5c;
    pfVar1[6] = local_58;
    pfVar1[7] = local_54;
    moby->updateDistance = -1;
    pfVar1[4] = pfVar1[4] - 300.0;
  }
  else {
    iVar6 = 0;
    dVar13 = 1.0;
    dVar14 = 0.0;
    pfVar7 = (float *)&DAT_007b79a4;
    pfVar9 = (float *)&DAT_007b79b8;
    pfVar8 = (float *)&DAT_007b79cc;
    do {
      fVar3 = *pfVar8 * *pfVar9 * DAT_0071f424 + *pfVar7;
      dVar11 = (double)fVar3;
      *pfVar7 = fVar3;
      if (1.0 < dVar11) {
        *pfVar7 = 1.0;
        *pfVar9 = -1.0;
        dVar11 = dVar13;
      }
      if (dVar11 < 0.0) {
        *pfVar7 = 0.0;
        *pfVar9 = 1.0;
      }
      iVar6 = iVar6 + 1;
      pfVar8 = pfVar8 + 1;
      pfVar7 = pfVar7 + 1;
      pfVar9 = pfVar9 + 1;
    } while (iVar6 < 5);
    iVar6 = 0;
    pfVar9 = (float *)&DAT_007b7954;
    pfVar7 = (float *)&DAT_010a0830;
    dVar11 = 0.10000000149011612;
    do {
      dVar12 = (double)FastWrapRot
                                 (*pfVar7,(float)((double)*pfVar9 * dVar11) * DAT_0071f424);
      iVar6 = iVar6 + 1;
      *pfVar7 = (float)dVar12;
      fVar3 = DAT_0071f424;
      pfVar9 = pfVar9 + 1;
      pfVar7 = pfVar7 + 1;
    } while (iVar6 < 5);
    pfVar9 = (float *)&DAT_007b79f4;
    pfVar7 = (float *)&DAT_007b7a08;
    iVar6 = 0;
    do {
      fVar4 = *pfVar7 * fVar3 + *pfVar9;
      dVar11 = (double)fVar4;
      *pfVar9 = fVar4;
      if (dVar13 <= dVar11) {
        dVar12 = dVar11 - dVar13;
        dVar11 = (double)(float)dVar12;
        *pfVar9 = (float)dVar12;
      }
      if (dVar11 < dVar14) {
        *pfVar9 = (float)(dVar11 + dVar13);
      }
      iVar6 = iVar6 + 1;
      pfVar7 = pfVar7 + 1;
      pfVar9 = pfVar9 + 1;
    } while (iVar6 < 2);
    RegisterMobyDraw(&PTR_M1772_002b8748_0070aed8,moby);
  }
  return;
}


// 0x02b947c (0x14 bytes)
void M1772_002b947c(void)

{
  DAT_007b7a8c = 0x10000;
  return;
}


