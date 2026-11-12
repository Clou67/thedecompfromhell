// game/update/moby1564.cpp -- reconstructed from NPEA00385 EBOOT
// STATUS: NOT STARTED (raw Ghidra output)
// 5 functions, 0x29bde8-0x29d5e4
#include "game/update/moby1564.h"
#include "game/camera.h"
#include "game/draw.h"
#include "game/hero.h"
#include "game/hud.h"
#include "game/initspace.h"
#include "game/mobyfunc.h"
#include "game/mobyutil.h"
#include "game/space.h"
#include "game/update.h"
#include "game/update/moby1424.h"
#include "game/update/moby1563.h"
#include "game/vuchain.h"
#include "idol/fastfunc.h"

// 0x029bde8 (0x654 bytes)
// inlined: FastRSqrt @0x29c090, FastRSqrt @0x29c100
void M1564_0029bde8(void)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  undefined4 uVar5;
  undefined8 uVar6;
  float *pfVar7;
  float *pfVar8;
  float *pfVar9;
  float *pfVar10;
  longlong lVar11;
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
  double dVar24;
  double dVar25;
  double dVar26;
  double dVar27;
  double dVar28;
  double dVar29;
  float local_130 [40];
  
  dVar23 = 0.5;
  if (g_SpaceSceneFrame ==
      (int)(animationSpeed * (float)((double)(longlong)(DAT_007ab918 + 1) + 0.5))) {
    DAT_00fadbb0 = 1.0;
    DAT_00fadbb4 = 0.0;
    DAT_00fadbb8 = 0.15;
    if (g_SceneId == 7) {
      DAT_00fadbb8 = -0.15;
    }
    DAT_00fadbbc = 1.0;
  }
  GetEffectTex(0xb);
  SCE_GS_SET_TEX1(0,0,1,1,1,0,0xff90);
  SCE_GS_SET_CLAMP(0,0,0,0,0,0);
  idol_draw::PackCmd(0,2,0,1,0x80);
  uVar6 = FUN_00502e50(0);
  SetGSReg(8,uVar6);
  uVar6 = FUN_00502f98(1,0,0,1,0,0,1,2);
  SetGSReg(0x16,uVar6);
  dVar22 = 0.0;
  dVar27 = (double)(float)((double)(GameCamera.orientMtx.up.y * DAT_00fadbb8 +
                                   GameCamera.orientMtx.forward.y * DAT_00fadbb0 +
                                   GameCamera.orientMtx.right.y * DAT_00fadbb4) +
                          (double)GameCamera.posY);
  dVar28 = (double)(float)((double)(GameCamera.orientMtx.up.x * DAT_00fadbb8 +
                                   GameCamera.orientMtx.forward.x * DAT_00fadbb0 +
                                   GameCamera.orientMtx.right.x * DAT_00fadbb4) +
                          (double)GameCamera.posX);
  dVar26 = (double)(float)((double)(GameCamera.orientMtx.up.z * DAT_00fadbb8 +
                                   GameCamera.orientMtx.forward.z * DAT_00fadbb0 +
                                   GameCamera.orientMtx.right.z * DAT_00fadbb4) +
                          (double)GameCamera.posZ);
  fVar2 = (float)(dVar27 - (double)GameCamera.posY);
  fVar3 = (float)(dVar28 - (double)GameCamera.posX);
  fVar4 = (float)(dVar26 - (double)GameCamera.posZ);
  dVar16 = (double)(fVar4 * fVar4 + fVar3 * fVar3 + fVar2 * fVar2);
  dVar29 = (double)(GameCamera.orientMtx.up.w * DAT_00fadbb8 +
                    GameCamera.orientMtx.forward.w * DAT_00fadbb0 +
                    GameCamera.orientMtx.right.w * DAT_00fadbb4 + DAT_00fadbbc);
  dVar17 = dVar22;
  dVar19 = dVar22;
  dVar20 = dVar22;
  if ((float)SQRT(dVar16) != 0.0) {
    dVar17 = 1.0 / SQRT(dVar16);
    dVar17 = (double)(float)(-(double)(float)((double)(float)(dVar16 * dVar17) * dVar17 - 1.0) *
                             (double)(float)(dVar23 * dVar17) + dVar17);
    dVar17 = (double)(float)(-(double)(float)((double)(float)(dVar16 * dVar17) * dVar17 - 1.0) *
                             (double)(float)(dVar23 * dVar17) + dVar17);
    fVar1 = (float)(-(double)(float)((double)(float)(dVar16 * dVar17) * dVar17 - 1.0) *
                    (double)(float)(dVar23 * dVar17) + dVar17);
    dVar17 = (double)(fVar3 * fVar1);
    dVar19 = (double)(fVar2 * fVar1);
    dVar20 = (double)(fVar4 * fVar1);
  }
  dVar12 = (double)(float)(dVar17 * dVar17 + --(double)(float)(dVar19 * dVar19));
  dVar16 = dVar22;
  dVar21 = dVar22;
  if ((float)SQRT(dVar12) != 0.0) {
    dVar16 = 1.0 / SQRT(dVar12);
    dVar16 = (double)(float)(-(double)(float)((double)(float)(dVar12 * dVar16) * dVar16 - 1.0) *
                             (double)(float)(dVar23 * dVar16) + dVar16);
    dVar16 = (double)(float)(-(double)(float)((double)(float)(dVar12 * dVar16) * dVar16 - 1.0) *
                             (double)(float)(dVar23 * dVar16) + dVar16);
    dVar16 = (double)(float)(-(double)(float)((double)(float)(dVar12 * dVar16) * dVar16 - 1.0) *
                             (double)(float)(dVar23 * dVar16) + dVar16);
    dVar21 = (double)(float)(dVar17 * dVar16);
    dVar16 = -(double)(float)(dVar19 * dVar16);
  }
  dVar24 = (double)(float)(dVar20 * dVar16 - 0.0);
  pfVar10 = local_130;
  pfVar9 = (float *)&DAT_007ab980;
  lVar11 = 4;
  dVar25 = (double)(float)(dVar19 * 0.0 - (double)(float)(dVar20 * dVar21));
  dVar12 = (double)(float)(dVar17 * dVar21 - (double)(float)(dVar19 * dVar16));
  pfVar8 = pfVar9;
  pfVar7 = pfVar10;
  do {
    dVar13 = (double)(*pfVar8 * DAT_00fadb80);
    *pfVar7 = *pfVar8 * DAT_00fadb80;
    dVar14 = (double)(pfVar8[1] * DAT_00fadb80);
    pfVar7[1] = pfVar8[1] * DAT_00fadb80;
    dVar15 = (double)(pfVar8[2] * DAT_00fadb80);
    pfVar7[2] = pfVar8[2] * DAT_00fadb80;
    dVar18 = (double)pfVar8[3];
    pfVar8 = pfVar8 + 4;
    pfVar7[3] = (float)(dVar18 * dVar29 + (double)(float)(dVar13 * dVar29));
    pfVar7[2] = (float)(dVar18 * dVar26 +
                       (double)(float)(dVar15 * dVar12 + (double)(float)(dVar13 * dVar20 + 0.0)));
    *pfVar7 = (float)(dVar18 * dVar28 +
                     (double)(float)(dVar15 * dVar25 +
                                    (double)(float)(dVar13 * dVar17 +
                                                   (double)(float)(dVar14 * dVar16))));
    pfVar7[1] = (float)(dVar18 * dVar27 +
                       (double)(float)(dVar15 * dVar24 +
                                      (double)(float)(dVar13 * dVar19 +
                                                     (double)(float)(dVar14 * dVar21))));
    pfVar7 = pfVar7 + 4;
    lVar11 = lVar11 + -1;
  } while (lVar11 != 0);
  FastDrawQuad(local_130,0,0,EffectTexHeaders,9);
  uVar5 = EffectTexHeaders;
  lVar11 = 4;
  pfVar8 = pfVar9;
  pfVar7 = pfVar10;
  do {
    fVar2 = DAT_00fadb80 * 0.75;
    dVar14 = (double)(*pfVar8 * fVar2);
    *pfVar7 = *pfVar8 * fVar2;
    dVar15 = (double)(pfVar8[1] * fVar2);
    pfVar7[1] = pfVar8[1] * fVar2;
    dVar13 = (double)(pfVar8[2] * fVar2);
    pfVar7[2] = pfVar8[2] * fVar2;
    dVar18 = (double)pfVar8[3];
    pfVar8 = pfVar8 + 4;
    pfVar7[3] = (float)(dVar18 * dVar29 + (double)(float)(dVar14 * dVar29));
    pfVar7[2] = (float)(dVar18 * dVar26 +
                       (double)(float)(dVar13 * dVar12 + (double)(float)(dVar14 * dVar20 + dVar22)))
    ;
    *pfVar7 = (float)(dVar18 * dVar28 +
                     (double)(float)(dVar13 * dVar25 +
                                    (double)(float)(dVar14 * dVar17 +
                                                   (double)(float)(dVar15 * dVar16))));
    pfVar7[1] = (float)(dVar18 * dVar27 +
                       (double)(float)(dVar13 * dVar24 +
                                      (double)(float)(dVar14 * dVar19 +
                                                     (double)(float)(dVar15 * dVar21))));
    pfVar7 = pfVar7 + 4;
    lVar11 = lVar11 + -1;
  } while (lVar11 != 0);
  FastDrawQuad(local_130,0,0,uVar5,9);
  uVar5 = EffectTexHeaders;
  lVar11 = 4;
  do {
    fVar2 = (float)((double)DAT_00fadb80 * dVar23);
    dVar14 = (double)(*pfVar9 * fVar2);
    *pfVar10 = *pfVar9 * fVar2;
    dVar15 = (double)(pfVar9[1] * fVar2);
    pfVar10[1] = pfVar9[1] * fVar2;
    dVar13 = (double)(pfVar9[2] * fVar2);
    pfVar10[2] = pfVar9[2] * fVar2;
    dVar18 = (double)pfVar9[3];
    pfVar9 = pfVar9 + 4;
    pfVar10[3] = (float)(dVar18 * dVar29 + (double)(float)(dVar14 * dVar29));
    pfVar10[2] = (float)(dVar18 * dVar26 +
                        (double)(float)(dVar13 * dVar12 + (double)(float)(dVar14 * dVar20 + dVar22))
                        );
    *pfVar10 = (float)(dVar18 * dVar28 +
                      (double)(float)(dVar13 * dVar25 +
                                     (double)(float)(dVar14 * dVar17 +
                                                    (double)(float)(dVar15 * dVar16))));
    pfVar10[1] = (float)(dVar18 * dVar27 +
                        (double)(float)(dVar13 * dVar24 +
                                       (double)(float)(dVar14 * dVar19 +
                                                      (double)(float)(dVar15 * dVar21))));
    pfVar10 = pfVar10 + 4;
    lVar11 = lVar11 + -1;
  } while (lVar11 != 0);
  FastDrawQuad(local_130,0,0,uVar5,9);
  return;
}


// 0x029c460 (0x258 bytes)
void M1564_0029c460(undefined8 param_1)

{
  int iVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  undefined8 uVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  GPiece<16> local_b0;
  GPiece<88> auStack_a0;
  
  dVar9 = 0.5;
  iVar1 = (int)(animationSpeed * (float)((double)(longlong)DAT_007aa0c0 + 0.5));
  dVar7 = (double)FastIntToDouble(worldUpdateTime - (worldUpdateTime / iVar1) * iVar1);
  dVar8 = (double)FastIntToDouble(iVar1);
  fVar2 = (float)(dVar7 / dVar8) * 6.18318 - 3.14159;
  fVar3 = 3.1415925 - fVar2;
  if (fVar2 - (3.1415925 - fVar2) < 0.0) {
    fVar3 = fVar2;
  }
  fVar4 = -3.1415925 - fVar2;
  if ((-3.1415925 - fVar2) - fVar3 < 0.0) {
    fVar4 = fVar3;
  }
  fVar2 = fVar4 * fVar4;
  fVar3 = fVar2 * fVar2 * fVar4;
  fVar5 = fVar2 * fVar3;
  uVar6 = FastLerpColor
                    ((double)(float)((double)(fVar2 * fVar5 * 2.601887e-06 +
                                             fVar5 * -0.0001980741 +
                                             fVar3 * 0.0083330255 +
                                             fVar2 * fVar4 * -0.16666657 + fVar4) * dVar9 + dVar9),
                     DAT_007aa0b8,DAT_007aa0bc);
  GetBoneTransformations(param_1,1,auStack_a0);
  MB_DrawGlowFX((double)DAT_007aa0b0,(double)DAT_007aa0b4,local_b0,uVar6);
  GetBoneTransformations(param_1,2,auStack_a0);
  MB_DrawGlowFX((double)DAT_007aa0b0,(double)DAT_007aa0b4,local_b0,uVar6);
  return;
}


// 0x029c6c8 (0x59c bytes)
// inlined: FastRSqrt @0x29c954, FastRSqrt @0x29c9c4
void M1564_0029c6c8(int param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  undefined4 uVar5;
  undefined8 uVar6;
  float *pfVar7;
  float *pfVar8;
  float *pfVar9;
  float *pfVar10;
  longlong lVar11;
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
  double dVar24;
  double dVar25;
  double dVar26;
  double dVar27;
  double dVar28;
  float local_130 [42];
  
  dVar23 = 0.5;
  if (g_SpaceSceneFrame ==
      (int)(animationSpeed * (float)((double)(longlong)(DAT_007ab93c + 1) + 0.5))) {
    DAT_00fadbc0 = 0.0;
    DAT_00fadbc4 = 0.0;
    DAT_00fadbc8 = -45.0;
    DAT_00fadbcc = 1.0;
  }
  GetEffectTex(0xb);
  SCE_GS_SET_TEX1(0,0,1,1,1,0,0xff90);
  SCE_GS_SET_CLAMP(0,0,0,0,0,0);
  idol_draw::PackCmd(0,2,0,1,0x80);
  uVar6 = FUN_00502e50(0);
  SetGSReg(8,uVar6);
  uVar6 = FUN_00502f98(1,0,0,1,0,0,1,2);
  SetGSReg(0x16,uVar6);
  dVar26 = (double)(*(float *)(param_1 + 0xe4) * DAT_00fadbc8 +
                    *(float *)(param_1 + 0xc4) * DAT_00fadbc0 +
                    *(float *)(param_1 + 0xd4) * DAT_00fadbc4 + *(float *)(param_1 + 0x14));
  dVar27 = (double)(*(float *)(param_1 + 0xe0) * DAT_00fadbc8 +
                    *(float *)(param_1 + 0xc0) * DAT_00fadbc0 +
                    *(float *)(param_1 + 0xd0) * DAT_00fadbc4 + *(float *)(param_1 + 0x10));
  dVar25 = (double)(*(float *)(param_1 + 0xe8) * DAT_00fadbc8 +
                    *(float *)(param_1 + 200) * DAT_00fadbc0 +
                    *(float *)(param_1 + 0xd8) * DAT_00fadbc4 + *(float *)(param_1 + 0x18));
  fVar2 = (float)(dVar26 - (double)GameCamera.posY);
  fVar3 = (float)(dVar27 - (double)GameCamera.posX);
  dVar22 = 0.0;
  fVar4 = (float)(dVar25 - (double)GameCamera.posZ);
  dVar16 = (double)(fVar4 * fVar4 + fVar3 * fVar3 + fVar2 * fVar2);
  dVar28 = (double)(*(float *)(param_1 + 0xec) * DAT_00fadbc8 +
                    *(float *)(param_1 + 0xcc) * DAT_00fadbc0 +
                    *(float *)(param_1 + 0xdc) * DAT_00fadbc4 + DAT_00fadbcc);
  dVar17 = dVar22;
  dVar19 = dVar22;
  dVar20 = dVar22;
  if ((float)SQRT(dVar16) != 0.0) {
    dVar17 = 1.0 / SQRT(dVar16);
    dVar17 = (double)(float)(-(double)(float)((double)(float)(dVar16 * dVar17) * dVar17 - 1.0) *
                             (double)(float)(dVar23 * dVar17) + dVar17);
    dVar17 = (double)(float)(-(double)(float)((double)(float)(dVar16 * dVar17) * dVar17 - 1.0) *
                             (double)(float)(dVar23 * dVar17) + dVar17);
    fVar1 = (float)(-(double)(float)((double)(float)(dVar16 * dVar17) * dVar17 - 1.0) *
                    (double)(float)(dVar23 * dVar17) + dVar17);
    dVar17 = (double)(fVar3 * fVar1);
    dVar19 = (double)(fVar2 * fVar1);
    dVar20 = (double)(fVar4 * fVar1);
  }
  dVar12 = (double)(float)(dVar17 * dVar17 + --(double)(float)(dVar19 * dVar19));
  dVar16 = dVar22;
  dVar21 = dVar22;
  if ((float)SQRT(dVar12) != 0.0) {
    dVar16 = 1.0 / SQRT(dVar12);
    dVar16 = (double)(float)(-(double)(float)((double)(float)(dVar12 * dVar16) * dVar16 - 1.0) *
                             (double)(float)(dVar23 * dVar16) + dVar16);
    dVar16 = (double)(float)(-(double)(float)((double)(float)(dVar12 * dVar16) * dVar16 - 1.0) *
                             (double)(float)(dVar23 * dVar16) + dVar16);
    dVar23 = (double)(float)(-(double)(float)((double)(float)(dVar12 * dVar16) * dVar16 - 1.0) *
                             (double)(float)(dVar23 * dVar16) + dVar16);
    dVar21 = (double)(float)(dVar17 * dVar23);
    dVar16 = -(double)(float)(dVar19 * dVar23);
  }
  dVar12 = (double)(float)(dVar20 * dVar16 - 0.0);
  pfVar10 = local_130;
  pfVar9 = (float *)&DAT_007ab980;
  dVar24 = (double)(float)(dVar19 * 0.0 - (double)(float)(dVar20 * dVar21));
  dVar23 = (double)(float)(dVar17 * dVar21 - (double)(float)(dVar19 * dVar16));
  lVar11 = 4;
  pfVar8 = pfVar9;
  pfVar7 = pfVar10;
  do {
    dVar13 = (double)(*pfVar8 * DAT_007ab9d0);
    *pfVar7 = *pfVar8 * DAT_007ab9d0;
    dVar14 = (double)(pfVar8[1] * DAT_007ab9d0);
    pfVar7[1] = pfVar8[1] * DAT_007ab9d0;
    dVar15 = (double)(pfVar8[2] * DAT_007ab9d0);
    pfVar7[2] = pfVar8[2] * DAT_007ab9d0;
    dVar18 = (double)pfVar8[3];
    pfVar8 = pfVar8 + 4;
    pfVar7[3] = (float)(dVar18 * dVar28 + (double)(float)(dVar13 * dVar28));
    pfVar7[2] = (float)(dVar18 * dVar25 +
                       (double)(float)(dVar15 * dVar23 + (double)(float)(dVar13 * dVar20 + 0.0)));
    *pfVar7 = (float)(dVar18 * dVar27 +
                     (double)(float)(dVar15 * dVar24 +
                                    (double)(float)(dVar13 * dVar17 +
                                                   (double)(float)(dVar14 * dVar16))));
    pfVar7[1] = (float)(dVar18 * dVar26 +
                       (double)(float)(dVar15 * dVar12 +
                                      (double)(float)(dVar13 * dVar19 +
                                                     (double)(float)(dVar14 * dVar21))));
    pfVar7 = pfVar7 + 4;
    lVar11 = lVar11 + -1;
  } while (lVar11 != 0);
  FastDrawQuad(local_130,0,0,EffectTexHeaders,9);
  uVar5 = EffectTexHeaders;
  lVar11 = 4;
  do {
    dVar13 = (double)(*pfVar9 * DAT_007ab9d4);
    *pfVar10 = *pfVar9 * DAT_007ab9d4;
    dVar14 = (double)(pfVar9[1] * DAT_007ab9d4);
    pfVar10[1] = pfVar9[1] * DAT_007ab9d4;
    dVar15 = (double)(pfVar9[2] * DAT_007ab9d4);
    pfVar10[2] = pfVar9[2] * DAT_007ab9d4;
    dVar18 = (double)pfVar9[3];
    pfVar9 = pfVar9 + 4;
    pfVar10[3] = (float)(dVar18 * dVar28 + (double)(float)(dVar13 * dVar28));
    pfVar10[2] = (float)(dVar18 * dVar25 +
                        (double)(float)(dVar15 * dVar23 + (double)(float)(dVar13 * dVar20 + dVar22))
                        );
    *pfVar10 = (float)(dVar18 * dVar27 +
                      (double)(float)(dVar15 * dVar24 +
                                     (double)(float)(dVar13 * dVar17 +
                                                    (double)(float)(dVar14 * dVar16))));
    pfVar10[1] = (float)(dVar18 * dVar26 +
                        (double)(float)(dVar15 * dVar12 +
                                       (double)(float)(dVar13 * dVar19 +
                                                      (double)(float)(dVar14 * dVar21))));
    pfVar10 = pfVar10 + 4;
    lVar11 = lVar11 + -1;
  } while (lVar11 != 0);
  FastDrawQuad(local_130,0,0,uVar5,9);
  return;
}


// 0x029cc78 (0x674 bytes)
// inlined: FastRSqrt @0x29ceb8
void M1564_0029cc78(int param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  ulonglong *puVar4;
  float fVar5;
  int iVar6;
  float *pfVar7;
  float fVar8;
  undefined *puVar9;
  undefined4 uVar10;
  ulonglong uVar11;
  ulonglong uVar12;
  undefined8 uVar13;
  longlong lVar14;
  longlong lVar15;
  undefined4 *puVar17;
  longlong lVar16;
  undefined4 *puVar18;
  undefined4 *puVar19;
  uint uVar20;
  ulonglong unaff_r27;
  ulonglong unaff_r28;
  ulonglong unaff_r29;
  undefined4 *puVar21;
  ulonglong unaff_r30;
  longlong lVar22;
  ulonglong unaff_r31;
  ulonglong in_LR;
  longlong lVar23;
  longlong lVar24;
  double dVar25;
  double dVar26;
  double dVar27;
  double dVar28;
  ulonglong in_f18;
  ulonglong in_f19;
  double dVar29;
  ulonglong in_f20;
  double dVar30;
  double dVar31;
  ulonglong in_f21;
  double dVar32;
  ulonglong in_f22;
  double dVar33;
  ulonglong in_f23;
  double dVar34;
  ulonglong in_f24;
  double dVar35;
  ulonglong in_f25;
  double dVar36;
  ulonglong in_f26;
  double dVar37;
  ulonglong in_f27;
  double dVar38;
  ulonglong in_f28;
  double dVar39;
  ulonglong in_f29;
  double dVar40;
  ulonglong in_f30;
  double dVar41;
  ulonglong in_f31;
  double dVar42;
  
  uVar11 = ZEXT48(&stack0x00000000);
  lVar15 = uVar11 - 0x1e0;
  puVar4 = (ulonglong *)lVar15;
  *puVar4 = uVar11;
  puVar4[0x3e] = in_LR;
  puVar4[0x2e] = in_f18;
  puVar4[0x2f] = in_f19;
  puVar4[0x30] = in_f20;
  puVar4[0x31] = in_f21;
  puVar4[0x32] = in_f22;
  puVar4[0x33] = in_f23;
  puVar4[0x34] = in_f24;
  puVar4[0x35] = in_f25;
  puVar4[0x36] = in_f26;
  puVar4[0x37] = in_f27;
  puVar4[0x38] = in_f28;
  puVar4[0x39] = in_f29;
  puVar4[0x3a] = in_f30;
  puVar4[0x3b] = in_f31;
  puVar4[0x2d] = unaff_r31;
  puVar4[0x2c] = unaff_r30;
  puVar4[0x2b] = unaff_r29;
  puVar4[0x2a] = unaff_r28;
  puVar4[0x29] = unaff_r27;
  uVar12 = GetEffectTex(0xb);
  puVar4[0x25] = uVar12;
  uVar12 = SCE_GS_SET_TEX1(0,0,1,1,1,0,0xff90);
  puVar4[0x26] = uVar12;
  uVar12 = SCE_GS_SET_CLAMP(0,0,0,0,0,0);
  puVar4[0x24] = uVar12;
  uVar12 = idol_draw::PackCmd(0,2,0,1,0x80);
  puVar4[0x27] = uVar12;
  uVar13 = FUN_00502e50(0);
  SetGSReg(8,uVar13);
  uVar13 = FUN_00502f98(1,0,0,1,0,0,1,2);
  SetGSReg(0x16,uVar13);
  dVar38 = (double)(*(float *)(param_1 + 0xe0) * -1.0);
  dVar36 = (double)(*(float *)(param_1 + 0xe8) * -1.0);
  dVar37 = (double)(*(float *)(param_1 + 0xe4) * -1.0);
  dVar39 = (double)(*(float *)(param_1 + 0xe8) * DAT_00fadbc8 +
                    *(float *)(param_1 + 200) * DAT_00fadbc0 +
                    *(float *)(param_1 + 0xd8) * DAT_00fadbc4 + *(float *)(param_1 + 0x18));
  dVar40 = (double)(*(float *)(param_1 + 0xe4) * DAT_00fadbc8 +
                    *(float *)(param_1 + 0xc4) * DAT_00fadbc0 +
                    *(float *)(param_1 + 0xd4) * DAT_00fadbc4 + *(float *)(param_1 + 0x14));
  dVar41 = (double)(*(float *)(param_1 + 0xe0) * DAT_00fadbc8 +
                    *(float *)(param_1 + 0xc0) * DAT_00fadbc0 +
                    *(float *)(param_1 + 0xd0) * DAT_00fadbc4 + *(float *)(param_1 + 0x10));
  fVar1 = (float)(dVar36 * (double)(float)(dVar41 - (double)GameCamera.posX) -
                 (double)(float)(dVar38 * (double)(float)(dVar39 - (double)GameCamera.posZ)));
  fVar2 = (float)(dVar37 * (double)(float)(dVar39 - (double)GameCamera.posZ) -
                 (double)(float)(dVar36 * (double)(float)(dVar40 - (double)GameCamera.posY)));
  fVar3 = (float)(dVar38 * (double)(float)(dVar40 - (double)GameCamera.posY) -
                 (double)(float)(dVar37 * (double)(float)(dVar41 - (double)GameCamera.posX)));
  dVar30 = 0.0;
  fVar5 = fVar3 * fVar3 + fVar2 * fVar2 + fVar1 * fVar1;
  dVar35 = (double)(*(float *)(param_1 + 0xec) * -1.0 + 1.0);
  dVar42 = (double)(*(float *)(param_1 + 0xec) * DAT_00fadbc8 +
                    *(float *)(param_1 + 0xcc) * DAT_00fadbc0 +
                    *(float *)(param_1 + 0xdc) * DAT_00fadbc4 + DAT_00fadbcc);
  dVar29 = dVar30;
  dVar31 = dVar30;
  if (SQRT(fVar5) != 0.0) {
    fVar8 = 1.0 / SQRT(fVar5);
    fVar8 = -(fVar5 * fVar8 * fVar8 - 1.0) * fVar8 * 0.5 + fVar8;
    fVar8 = -(fVar5 * fVar8 * fVar8 - 1.0) * fVar8 * 0.5 + fVar8;
    fVar8 = -(fVar5 * fVar8 * fVar8 - 1.0) * fVar8 * 0.5 + fVar8;
    dVar30 = (double)(fVar2 * fVar8);
    dVar29 = (double)(fVar1 * fVar8);
    dVar31 = (double)(fVar3 * fVar8);
  }
  *(undefined4 *)(puVar4 + 0x20) = 0x3f800000;
  *(undefined4 *)((int)puVar4 + 0x104) = 0x3f800000;
  puVar9 = PTR_DAT_007ab9cc;
  *(undefined4 *)(puVar4 + 0x21) = 0;
  *(undefined4 *)((int)puVar4 + 0x10c) = 0x3f800000;
  uVar20 = (uint)puVar9 | 0xff000000;
  *(undefined4 *)(puVar4 + 0x22) = 0x3f800000;
  lVar22 = uVar11 - 0x170;
  *(undefined4 *)((int)puVar4 + 0x114) = 0;
  puVar21 = &DAT_007ab9f0;
  *(undefined4 *)(puVar4 + 0x23) = 0;
  *(undefined4 *)((int)puVar4 + 0x11c) = 0;
  *(uint *)(puVar4 + 0x1e) = uVar20;
  dVar34 = (double)(float)(dVar29 * dVar36 - (double)(float)(dVar31 * dVar37));
  *(uint *)((int)puVar4 + 0xf4) = uVar20;
  dVar33 = (double)(float)(dVar31 * dVar38 - (double)(float)(dVar30 * dVar36));
  *(uint *)(puVar4 + 0x1f) = uVar20;
  dVar32 = (double)(float)(dVar30 * dVar37 - (double)(float)(dVar29 * dVar38));
  *(uint *)((int)puVar4 + 0xfc) = uVar20;
  fVar2 = DAT_00fadb8c;
  fVar1 = DAT_007ab9dc;
  lVar23 = 4;
  lVar14 = lVar15;
  lVar16 = lVar22;
  puVar19 = puVar21;
  do {
    puVar17 = (undefined4 *)lVar16;
    *puVar17 = *puVar19;
    puVar17[1] = puVar19[1];
    puVar17[2] = puVar19[2];
    puVar18 = puVar19 + 3;
    puVar19 = puVar19 + 4;
    puVar17[3] = *puVar18;
    iVar6 = (int)lVar14;
    lVar16 = lVar16 + 0x10;
    *(float *)(iVar6 + 0x78) = *(float *)(iVar6 + 0x78) * fVar1;
    *(float *)(iVar6 + 0x70) = *(float *)(iVar6 + 0x70) * fVar2;
    lVar14 = lVar14 + 0x10;
    lVar23 = lVar23 + -1;
  } while (lVar23 != 0);
  lVar23 = uVar11 - 0x130;
  lVar24 = 4;
  lVar14 = lVar23;
  lVar16 = lVar22;
  do {
    pfVar7 = (float *)lVar16;
    dVar25 = (double)pfVar7[1];
    dVar26 = (double)*pfVar7;
    dVar27 = (double)pfVar7[2];
    dVar28 = (double)pfVar7[3];
    lVar16 = lVar16 + 0x10;
    pfVar7 = (float *)lVar14;
    pfVar7[3] = (float)(dVar28 * dVar42 + (double)(float)(dVar26 * dVar35));
    *pfVar7 = (float)(dVar28 * dVar41 +
                     (double)(float)(dVar27 * dVar30 +
                                    (double)(float)(dVar26 * dVar38 +
                                                   (double)(float)(dVar25 * dVar34))));
    pfVar7[1] = (float)(dVar28 * dVar40 +
                       (double)(float)(dVar27 * dVar29 +
                                      (double)(float)(dVar26 * dVar37 +
                                                     (double)(float)(dVar25 * dVar33))));
    pfVar7[2] = (float)(dVar28 * dVar39 +
                       (double)(float)(dVar27 * dVar31 +
                                      (double)(float)(dVar26 * dVar36 +
                                                     (double)(float)(dVar25 * dVar32))));
    lVar14 = lVar14 + 0x10;
    lVar24 = lVar24 + -1;
  } while (lVar24 != 0);
  FastDrawQuad(uVar11 - 0x130,0,0,EffectTexHeaders,9);
  fVar2 = DAT_00fadb8c;
  uVar10 = EffectTexHeaders;
  fVar1 = DAT_007ab9e0;
  uVar20 = DAT_007ab9d8 | 0x7f000000;
  lVar24 = 4;
  *(uint *)(puVar4 + 0x1e) = uVar20;
  *(uint *)((int)puVar4 + 0xf4) = uVar20;
  *(uint *)(puVar4 + 0x1f) = uVar20;
  *(uint *)((int)puVar4 + 0xfc) = uVar20;
  lVar14 = lVar15;
  lVar16 = lVar22;
  puVar19 = puVar21;
  do {
    puVar17 = (undefined4 *)lVar16;
    *puVar17 = *puVar19;
    puVar17[1] = puVar19[1];
    puVar17[2] = puVar19[2];
    puVar18 = puVar19 + 3;
    puVar19 = puVar19 + 4;
    puVar17[3] = *puVar18;
    iVar6 = (int)lVar14;
    lVar16 = lVar16 + 0x10;
    *(float *)(iVar6 + 0x78) = *(float *)(iVar6 + 0x78) * fVar1;
    *(float *)(iVar6 + 0x70) = *(float *)(iVar6 + 0x70) * fVar2;
    lVar14 = lVar14 + 0x10;
    lVar24 = lVar24 + -1;
  } while (lVar24 != 0);
  lVar24 = 4;
  lVar14 = lVar23;
  lVar16 = lVar22;
  do {
    pfVar7 = (float *)lVar16;
    dVar25 = (double)pfVar7[1];
    dVar26 = (double)*pfVar7;
    dVar27 = (double)pfVar7[2];
    dVar28 = (double)pfVar7[3];
    lVar16 = lVar16 + 0x10;
    pfVar7 = (float *)lVar14;
    pfVar7[3] = (float)(dVar28 * dVar42 + (double)(float)(dVar26 * dVar35));
    *pfVar7 = (float)(dVar28 * dVar41 +
                     (double)(float)(dVar27 * dVar30 +
                                    (double)(float)(dVar26 * dVar38 +
                                                   (double)(float)(dVar25 * dVar34))));
    pfVar7[1] = (float)(dVar28 * dVar40 +
                       (double)(float)(dVar27 * dVar29 +
                                      (double)(float)(dVar26 * dVar37 +
                                                     (double)(float)(dVar25 * dVar33))));
    pfVar7[2] = (float)(dVar28 * dVar39 +
                       (double)(float)(dVar27 * dVar31 +
                                      (double)(float)(dVar26 * dVar36 +
                                                     (double)(float)(dVar25 * dVar32))));
    lVar14 = lVar14 + 0x10;
    lVar24 = lVar24 + -1;
  } while (lVar24 != 0);
  FastDrawQuad(uVar11 - 0x130,0,0,uVar10,9);
  fVar2 = DAT_00fadb8c;
  uVar10 = EffectTexHeaders;
  fVar1 = DAT_007ab9e4;
  lVar16 = 4;
  uVar20 = DAT_007ab9d8 | 0x7f000000;
  *(uint *)(puVar4 + 0x1e) = uVar20;
  *(uint *)((int)puVar4 + 0xf4) = uVar20;
  *(uint *)(puVar4 + 0x1f) = uVar20;
  *(uint *)((int)puVar4 + 0xfc) = uVar20;
  lVar14 = lVar22;
  do {
    puVar18 = (undefined4 *)lVar14;
    *puVar18 = *puVar21;
    puVar18[1] = puVar21[1];
    puVar18[2] = puVar21[2];
    puVar19 = puVar21 + 3;
    puVar21 = puVar21 + 4;
    puVar18[3] = *puVar19;
    iVar6 = (int)lVar15;
    lVar14 = lVar14 + 0x10;
    *(float *)(iVar6 + 0x78) = *(float *)(iVar6 + 0x78) * fVar1;
    *(float *)(iVar6 + 0x70) = *(float *)(iVar6 + 0x70) * fVar2;
    lVar15 = lVar15 + 0x10;
    lVar16 = lVar16 + -1;
  } while (lVar16 != 0);
  lVar15 = 4;
  do {
    pfVar7 = (float *)lVar22;
    dVar25 = (double)pfVar7[1];
    dVar26 = (double)*pfVar7;
    dVar27 = (double)pfVar7[2];
    dVar28 = (double)pfVar7[3];
    lVar22 = lVar22 + 0x10;
    pfVar7 = (float *)lVar23;
    pfVar7[3] = (float)(dVar28 * dVar42 + (double)(float)(dVar26 * dVar35));
    *pfVar7 = (float)(dVar28 * dVar41 +
                     (double)(float)(dVar27 * dVar30 +
                                    (double)(float)(dVar26 * dVar38 +
                                                   (double)(float)(dVar25 * dVar34))));
    pfVar7[1] = (float)(dVar28 * dVar40 +
                       (double)(float)(dVar27 * dVar29 +
                                      (double)(float)(dVar26 * dVar37 +
                                                     (double)(float)(dVar25 * dVar33))));
    pfVar7[2] = (float)(dVar28 * dVar39 +
                       (double)(float)(dVar27 * dVar31 +
                                      (double)(float)(dVar26 * dVar36 +
                                                     (double)(float)(dVar25 * dVar32))));
    lVar23 = lVar23 + 0x10;
    lVar15 = lVar15 + -1;
  } while (lVar15 != 0);
  FastDrawQuad(uVar11 - 0x130,0,0,uVar10,9);
  return;
}


// 0x029d2f8 (0x2ec bytes)
/* Moby 1564 */

void UpdateMoby_1564(MobyInstance *moby)

{
  byte bVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  void *pvVar5;
  f32 fVar6;
  Spline *pSVar7;
  uint uVar8;
  uint uVar9;
  undefined4 uVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  Vec4 *pVVar14;
  longlong lVar15;
  int iVar16;
  uint uVar17;
  ulonglong uVar18;
  ulonglong uVar19;
  byte bVar20;
  undefined8 in_LR;
  GPiece<16> auVar21;
  GPiece<16> auVar22;
  GPiece<16> auVar23;
  GPiece<16> auVar24;
  GPiece<16> auVar25;
  GPiece<16> auVar26;
  
  lVar15 = (longlong)(int)moby;
  pvVar5 = moby->pVar;
  uVar18 = ZEXT48(pvVar5);
  bVar1 = moby->state;
  bVar20 = (bVar1 == 1) << 1;
  pSVar7 = Splines[*(int *)((int)pvVar5 + 0x60)];
  uVar19 = ZEXT48(pSVar7);
  if (bVar1 == 0) {
    if (*(int *)((int)pvVar5 + 0x60) == -1) {
      DeleteMoby(moby);
      return;
    }
    fVar2 = pSVar7->points[0].y;
    fVar3 = pSVar7->points[0].x;
    fVar11 = fVar2 - pSVar7->points[1].y;
    fVar4 = pSVar7->points[0].z;
    fVar12 = fVar3 - pSVar7->points[1].x;
    fVar13 = fVar4 - pSVar7->points[1].z;
    pVVar14 = pSVar7->points + pSVar7->cnt + -1;
    fVar2 = fVar2 - pVVar14->y;
    fVar3 = fVar3 - pVVar14->x;
    fVar4 = fVar4 - pVVar14->z;
    fVar11 = SQRT(fVar13 * fVar13 + fVar12 * fVar12 + fVar11 * fVar11);
    *(float *)((int)pvVar5 + 0x74) = (DAT_007aba30 * g_FrameTime) / fVar11;
    *(uint *)((int)pvVar5 + 0x70) =
         (uint)(ABS(fVar11 - SQRT(fVar4 * fVar4 + fVar3 * fVar3 + fVar2 * fVar2)) < 0.1);
    auVar21 = loadVectorLeftIndexed(in_LR,uVar19);
    auVar22 = ZEXT416(0xffffffff);
    auVar24 = auVar22 | auVar22 << 0x20 | auVar22 << 0x40 | auVar22 << 0x60;
    auVar22 = vectorConvertFromSignedFixedPointWord(auVar21,0);
    auVar21 = loadVectorLeftIndexed(0x68,uVar18);
    auVar23 = loadVectorRightIndexed(0x78,uVar18);
    auVar24 = vectorShiftLeftIntegerWord(auVar24,auVar24);
    auVar22 = vectorMultiplyAddFloatingPoint(auVar21 | auVar23,auVar22,auVar24);
    auVar22 = auVar22 >> 0x60 & (GPiece<16>)0xffffffff;
    uVar10 = storeVectorElementWordIndexed
                       (auVar22 | auVar22 << 0x20 | auVar22 << 0x40 | auVar22 << 0x60,0x6c,uVar18);
    *(undefined4 *)((int)pvVar5 + 0x6cU & 0xfffffffc) = uVar10;
    moby->state = '\x01';
    fVar2 = DAT_007aba34;
    moby->updateDistance = -1;
    moby->scale = moby->scale * fVar2;
  }
  else if (1 < bVar1) {
    return;
  }
  fVar6 = (moby->pos).z;
  uVar8 = (int)fVar6 >> 0x1f;
  uVar17 = uVar8 >> 1 ^ (uint)fVar6;
  MB_PathEvalSpline
            ((double)*(float *)((int)pvVar5 + 0x6c),uVar19,uVar17,
             *(undefined4 *)((int)pvVar5 + 0x70),lVar15 + 0x10,lVar15 + 0x40,0);
  fVar2 = (moby->pos).z;
  auVar22 = loadVectorLeftIndexed(in_LR,uVar19);
  auVar23 = vectorConvertFromSignedFixedPointWord(auVar22,0);
  (moby->rotation).y = (moby->rotation).y * 0.5;
  auVar22 = auVar23 >> 0x60 & (GPiece<16>)0xffffffff;
  (moby->pos).z = fVar2 + *(float *)((int)pvVar5 + 100);
  auVar21 = loadVectorLeftIndexed(0x6c,uVar18);
  auVar24 = loadVectorRightIndexed(0x7c,uVar18);
  auVar26 = loadVectorLeftIndexed(0x74,uVar18);
  auVar25 = loadVectorRightIndexed(0x84,uVar18);
  auVar24 = vectorAddFloatingPoint(auVar21 | auVar24,auVar26 | auVar25);
  auVar21 = auVar24 >> 0x60 & (GPiece<16>)0xffffffff;
  auVar21 = auVar21 | auVar21 << 0x20 | auVar21 << 0x40 | auVar21 << 0x60;
  vectorCompareGreaterThanFloatingPoint
            (auVar21,auVar22 | auVar22 << 0x20 | auVar22 << 0x40 | auVar22 << 0x60);
  uVar10 = storeVectorElementWordIndexed(auVar21,0x6c,uVar18);
  *(undefined4 *)((int)pvVar5 + 0x6cU & 0xfffffffc) = uVar10;
  if (!(bool)(bVar20 >> 1 & 1)) {
    auVar22 = vectorSubtractFloatingPoint(auVar24,auVar23);
    auVar22 = auVar22 >> 0x60 & (GPiece<16>)0xffffffff;
    uVar10 = storeVectorElementWordIndexed
                       (auVar22 | auVar22 << 0x20 | auVar22 << 0x40 | auVar22 << 0x60,0x6c,uVar18);
    *(undefined4 *)((int)pvVar5 + 0x6cU & 0xfffffffc) = uVar10;
  }
  if ((moby->field43_0x70 & 2U) != 0) {
    fVar6 = (moby->pos).z;
    uVar9 = (int)fVar6 >> 0x1f;
    if (((int)(uVar17 - uVar8) < (int)((uVar9 >> 1 ^ (uint)fVar6) - uVar9)) ||
       (iVar16 = MB_randInt(3), iVar16 != 0)) {
      if (moby->animationId != '\0') {
        MB_SetAnimation(lVar15,0,0,10);
      }
    }
    else if (moby->animationId != '\x01') {
      MB_SetAnimation(lVar15,1,0,10);
    }
  }
  return;
}


