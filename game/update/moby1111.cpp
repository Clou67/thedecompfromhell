// game/update/moby1111.cpp -- reconstructed from NPEA00385 EBOOT
// STATUS: NOT STARTED (raw Ghidra output)
// 4 functions, 0x1d0f18-0x1d216c
#include <string.h>
#include "game/update/moby1111.h"
#include "game/camera.h"
#include "game/draw.h"
#include "game/hero.h"
#include "game/hud.h"
#include "game/mobyfunc.h"
#include "game/mobyutil.h"
#include "game/partproc.h"
#include "game/update.h"
#include "idol/fastfunc.h"
#include "idol/mUnk.h"

// 0x01d0f18 (0xc bytes)
double M1111_001d0f18(void)

{
  return (double)DAT_00ef1a90;
}


// 0x01d0f24 (0xc bytes)
void FUN_001d0f24(double param_1)

{
  DAT_00ef1a94 = (float)param_1;
  return;
}


// 0x01d0f60 (0xcfc bytes)
// inlined: FastRSqrt @0x1d11c0, FastRSqrt @0x1d121c
void M1111_Pokitaru_Ocean(int param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  undefined4 *puVar6;
  undefined4 uVar7;
  ulonglong *puVar8;
  float fVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  RenderingStep *pRVar13;
  float fVar14;
  PlayerState PVar15;
  undefined8 uVar16;
  int iVar19;
  longlong lVar17;
  undefined4 uVar20;
  undefined8 uVar18;
  int iVar21;
  longlong lVar22;
  float *pfVar23;
  ulonglong unaff_r15;
  ulonglong unaff_r16;
  ulonglong unaff_r17;
  ulonglong unaff_r18;
  ulonglong unaff_r19;
  ulonglong unaff_r20;
  ulonglong unaff_r21;
  ulonglong unaff_r22;
  int iVar24;
  ulonglong unaff_r23;
  ulonglong uVar25;
  int iVar26;
  ulonglong unaff_r24;
  ulonglong unaff_r25;
  ulonglong unaff_r26;
  int iVar27;
  ulonglong unaff_r27;
  ulonglong unaff_r28;
  ulonglong unaff_r29;
  ulonglong uVar28;
  ulonglong unaff_r30;
  ulonglong unaff_r31;
  ulonglong in_LR;
  longlong lVar29;
  double dVar30;
  double dVar31;
  double dVar32;
  double dVar33;
  double dVar34;
  double dVar35;
  ulonglong in_f14;
  ulonglong in_f15;
  ulonglong in_f16;
  ulonglong in_f17;
  double dVar36;
  ulonglong in_f18;
  ulonglong in_f19;
  ulonglong in_f20;
  ulonglong in_f21;
  ulonglong in_f22;
  double dVar37;
  ulonglong in_f23;
  double dVar38;
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
  double dVar46;
  double dVar47;
  ulonglong in_f31;
  double dVar48;
  
  uVar28 = ZEXT48(&stack0x00000000);
  lVar17 = uVar28 - 0x280;
  puVar8 = (ulonglong *)lVar17;
  *puVar8 = uVar28;
  puVar8[0x52] = in_LR;
  puVar8[0x3e] = in_f14;
  puVar8[0x3f] = in_f15;
  puVar8[0x40] = in_f16;
  puVar8[0x41] = in_f17;
  puVar8[0x42] = in_f18;
  puVar8[0x43] = in_f19;
  puVar8[0x44] = in_f20;
  puVar8[0x45] = in_f21;
  puVar8[0x46] = in_f22;
  puVar8[0x47] = in_f23;
  puVar8[0x48] = in_f24;
  puVar8[0x49] = in_f25;
  puVar8[0x4a] = in_f26;
  puVar8[0x4b] = in_f27;
  puVar8[0x4c] = in_f28;
  puVar8[0x4d] = in_f29;
  puVar8[0x4e] = in_f30;
  puVar8[0x4f] = in_f31;
  puVar8[0x37] = unaff_r25;
  puVar8[0x3b] = unaff_r29;
  puVar8[0x3d] = unaff_r31;
  puVar6 = *(undefined4 **)(param_1 + 0x78);
  puVar8[0x33] = unaff_r21;
  fVar1 = g_ViewContext.fogFarIntensity;
  *(float *)(puVar8 + 0x2c) = g_ViewContext.fogNearIntensity;
  PVar15 = g_heroState;
  *(float *)((int)puVar8 + 0x15c) = fVar1;
  puVar8[0x3c] = unaff_r30;
  puVar8[0x3a] = unaff_r28;
  puVar8[0x39] = unaff_r27;
  puVar8[0x38] = unaff_r26;
  puVar8[0x36] = unaff_r24;
  puVar8[0x35] = unaff_r23;
  puVar8[0x34] = unaff_r22;
  puVar8[0x32] = unaff_r20;
  puVar8[0x31] = unaff_r19;
  puVar8[0x30] = unaff_r18;
  puVar8[0x2f] = unaff_r17;
  puVar8[0x2e] = unaff_r16;
  puVar8[0x2d] = unaff_r15;
  pRVar13 = DL_Pass;
  if ((PVar15 != VISIBOMB_CONTROL) && (DAT_0071eed0 == '\0')) {
    g_ViewContext.fogNearIntensity = 255.0;
    g_ViewContext.fogFarIntensity = 249.9;
  }
  memset(DL_Pass + 1,0,0x90);
  memset(&pRVar13[8].command,0xff,0x48);
  pRVar13[9].field7_0x10 = 0;
  pRVar13[9].callback = (undefined *)0x0;
  uVar16 = idol_draw::PackCmd(0,1,0,1,0x32);
  idol_draw::DrawDepth(pRVar13,uVar16);
  uVar16 = idol_draw::Blend(1,0,0x3f,1,0,0,1,2);
  FUN_004d6634(pRVar13,uVar16);
  uVar16 = SCE_GS_SET_CLAMP(0,0,0,0,0,0);
  FUN_004d6704(uVar16,uVar28 - 0x140,uVar28 - 0x13c);
  iVar27 = EffectTexHeaders;
  iVar19 = GetEffectTex(0x16);
  FUN_004d676c(pRVar13,0,iVar27 + iVar19 * 0x24,*(undefined4 *)(puVar8 + 0x28),
               *(undefined4 *)((int)puVar8 + 0x144));
  fVar14 = GameCamera.posZ;
  fVar5 = GameCamera.posY;
  fVar4 = GameCamera.posX;
  dVar36 = 0.0;
  dVar48 = 1.0;
  fVar1 = (float)puVar6[10];
  fVar2 = GameCamera.orientMtx.forward.x * GameCamera.orientMtx.forward.x +
          GameCamera.orientMtx.forward.y * GameCamera.orientMtx.forward.y;
  fVar3 = GameCamera.orientMtx.forward.w + 1.0;
  dVar34 = dVar36;
  dVar35 = dVar36;
  if (SQRT(fVar2) != 0.0) {
    fVar9 = 1.0 / SQRT(fVar2);
    fVar9 = -(fVar2 * fVar9 * fVar9 - 1.0) * fVar9 * 0.5 + fVar9;
    fVar9 = -(fVar2 * fVar9 * fVar9 - 1.0) * fVar9 * 0.5 + fVar9;
    fVar9 = -(fVar2 * fVar9 * fVar9 - 1.0) * fVar9 * 0.5 + fVar9;
    dVar35 = (double)(GameCamera.orientMtx.forward.x * fVar9);
    dVar34 = (double)(GameCamera.orientMtx.forward.y * fVar9);
  }
  fVar2 = GameCamera.orientMtx.right.x * GameCamera.orientMtx.right.x +
          GameCamera.orientMtx.right.y * GameCamera.orientMtx.right.y;
  dVar31 = dVar36;
  dVar33 = dVar36;
  if (SQRT(fVar2) != 0.0) {
    fVar9 = 1.0 / SQRT(fVar2);
    fVar9 = -(fVar2 * fVar9 * fVar9 - 1.0) * fVar9 * 0.5 + fVar9;
    fVar9 = -(fVar2 * fVar9 * fVar9 - 1.0) * fVar9 * 0.5 + fVar9;
    fVar9 = -(fVar2 * fVar9 * fVar9 - 1.0) * fVar9 * 0.5 + fVar9;
    dVar33 = (double)(GameCamera.orientMtx.right.x * fVar9);
    dVar31 = (double)(GameCamera.orientMtx.right.y * fVar9);
  }
  *(undefined4 *)(puVar8 + 0xf) = 0;
  *(float *)((int)puVar8 + 0x7c) = fVar3;
  fVar2 = SQRT((float)(dVar35 * dVar35 + (double)(float)(dVar34 * dVar34)) + 0.0);
  lVar22 = uVar28 - 0x210;
  lVar29 = 4;
  fVar9 = SQRT((float)(dVar33 * dVar33 + (double)(float)(dVar31 * dVar31)) + 0.0);
  dVar38 = (double)(float)(dVar34 * (double)(-75.0 / fVar2));
  dVar32 = (double)(float)(dVar35 * (double)(-75.0 / fVar2));
  dVar46 = dVar36;
  if (0.0 - fVar2 < 0.0) {
    dVar46 = dVar38;
  }
  dVar37 = dVar36;
  if (0.0 - fVar2 < 0.0) {
    dVar37 = dVar32;
  }
  if (fVar2 - 0.0 < 0.0) {
    dVar46 = dVar38;
  }
  if (fVar2 - 0.0 < 0.0) {
    dVar37 = dVar32;
  }
  dVar32 = (double)(float)(dVar34 * (double)(fVar1 / fVar2));
  dVar35 = (double)(float)(dVar35 * (double)(fVar1 / fVar2));
  dVar45 = (double)(float)(dVar31 * (double)(-87.0 / fVar9));
  dVar38 = (double)(float)(dVar33 * (double)(-87.0 / fVar9));
  dVar34 = dVar36;
  if (0.0 - fVar9 < 0.0) {
    dVar34 = dVar45;
  }
  dVar39 = dVar36;
  if (0.0 - fVar9 < 0.0) {
    dVar39 = dVar38;
  }
  if (fVar9 - 0.0 < 0.0) {
    dVar34 = dVar45;
  }
  if (fVar9 - 0.0 < 0.0) {
    dVar39 = dVar38;
  }
  dVar38 = dVar36;
  if (0.0 - fVar2 < 0.0) {
    dVar38 = dVar32;
  }
  *(float *)((int)puVar8 + 0x74) = (float)(dVar46 + dVar34);
  *(float *)(puVar8 + 0xe) = (float)(dVar37 + dVar39);
  *(undefined4 *)(puVar8 + 0x13) = 0;
  *(float *)((int)puVar8 + 0x9c) = fVar3;
  if (fVar2 - 0.0 < 0.0) {
    dVar38 = dVar32;
  }
  dVar45 = (double)(float)(dVar31 * (double)(87.0 / fVar9));
  dVar32 = (double)(float)(dVar33 * (double)(87.0 / fVar9));
  dVar34 = dVar36;
  if (0.0 - fVar9 < 0.0) {
    dVar34 = dVar45;
  }
  dVar39 = dVar36;
  if (0.0 - fVar9 < 0.0) {
    dVar39 = dVar32;
  }
  if (fVar9 - 0.0 < 0.0) {
    dVar34 = dVar45;
  }
  if (fVar9 - 0.0 < 0.0) {
    dVar39 = dVar32;
  }
  dVar32 = dVar36;
  if (0.0 - fVar2 < 0.0) {
    dVar32 = dVar35;
  }
  *(float *)((int)puVar8 + 0x94) = (float)(dVar46 + dVar34);
  *(float *)(puVar8 + 0x12) = (float)(dVar37 + dVar39);
  *(undefined4 *)(puVar8 + 0x11) = 0;
  *(float *)((int)puVar8 + 0x8c) = fVar3;
  if (fVar2 - 0.0 < 0.0) {
    dVar32 = dVar35;
  }
  dVar46 = (double)(float)(dVar31 * (double)(-750.0 / fVar9));
  dVar35 = (double)(float)(dVar33 * (double)(-750.0 / fVar9));
  dVar34 = dVar36;
  if (0.0 - fVar9 < 0.0) {
    dVar34 = dVar46;
  }
  dVar37 = dVar36;
  if (0.0 - fVar9 < 0.0) {
    dVar37 = dVar35;
  }
  if (fVar9 - 0.0 < 0.0) {
    dVar34 = dVar46;
  }
  if (fVar9 - 0.0 < 0.0) {
    dVar37 = dVar35;
  }
  *(float *)((int)puVar8 + 0x84) = (float)(dVar38 + dVar34);
  *(float *)(puVar8 + 0x10) = (float)(dVar32 + dVar37);
  *(undefined4 *)(puVar8 + 0x15) = 0;
  *(float *)((int)puVar8 + 0xac) = fVar3;
  dVar35 = (double)(float)(dVar31 * (double)(750.0 / fVar9));
  dVar31 = (double)(float)(dVar33 * (double)(750.0 / fVar9));
  dVar34 = dVar36;
  if (0.0 - fVar9 < 0.0) {
    dVar34 = dVar35;
  }
  dVar33 = dVar36;
  if (0.0 - fVar9 < 0.0) {
    dVar33 = dVar31;
  }
  if (fVar9 - 0.0 < 0.0) {
    dVar34 = dVar35;
  }
  if (fVar9 - 0.0 < 0.0) {
    dVar33 = dVar31;
  }
  *(float *)((int)puVar8 + 0xa4) = (float)(dVar38 + dVar34);
  *(float *)(puVar8 + 0x14) = (float)(dVar32 + dVar33);
  do {
    pfVar23 = (float *)lVar22;
    *pfVar23 = *pfVar23 + fVar4;
    pfVar23[1] = pfVar23[1] + fVar5;
    pfVar23[2] = pfVar23[2] + fVar14;
    lVar22 = lVar22 + 0x10;
    *(float *)((int)lVar17 + 0x78) = DAT_00ef1a90;
    lVar17 = lVar17 + 0x10;
    lVar29 = lVar29 + -1;
  } while (lVar29 != 0);
  dVar39 = (double)*(float *)(puVar8 + 0xe);
  uVar25 = 0;
  *(float *)(puVar8 + 0x2a) = *(float *)(puVar8 + 0x10);
  dVar40 = (double)*(float *)((int)puVar8 + 0x74);
  *(float *)((int)puVar8 + 0x14c) = *(float *)((int)puVar8 + 0x84);
  dVar41 = (double)*(float *)(puVar8 + 0xf);
  dVar34 = (double)*(float *)(puVar8 + 0x14);
  *(float *)(puVar8 + 0x29) = *(float *)(puVar8 + 0x11);
  dVar42 = (double)*(float *)(puVar8 + 0x12);
  dVar35 = (double)*(float *)((int)puVar8 + 0xa4);
  dVar43 = (double)*(float *)((int)puVar8 + 0x94);
  dVar31 = (double)*(float *)(puVar8 + 0x15);
  dVar44 = (double)*(float *)(puVar8 + 0x13);
  dVar47 = 0.10000000149011612;
  dVar33 = (double)((float)((double)*(float *)(puVar8 + 0x10) - dVar39) * 0.1);
  *(undefined4 *)(puVar8 + 0x2b) = *(undefined4 *)((int)puVar8 + 0x8c);
  dVar46 = (double)((float)((double)*(float *)((int)puVar8 + 0x84) - dVar40) * 0.1);
  *(undefined4 *)((int)puVar8 + 0x154) = *(undefined4 *)((int)puVar8 + 0xac);
  dVar32 = (double)((float)((double)*(float *)(puVar8 + 0x11) - dVar41) * 0.1);
  dVar38 = (double)((float)(dVar34 - dVar42) * 0.1);
  dVar37 = (double)((float)(dVar35 - dVar43) * 0.1);
  dVar45 = (double)((float)(dVar31 - dVar44) * 0.1);
  do {
    *(float *)((int)puVar8 + 0x164) = (float)dVar31;
    dVar31 = (double)FastIntToDouble(uVar25);
    dVar30 = (double)FastIntToDouble(uVar25);
    uVar20 = FastLerpColor((double)(float)(dVar30 * dVar47),*puVar6,puVar6[1]);
    iVar27 = (int)((uVar25 & 0xffffffff) << 2);
    iVar19 = (int)((uVar25 & 0xffffffff) << 3);
    iVar21 = (int)uVar25 * 0xc;
    *(undefined4 *)(&DAT_00ef1d98 + iVar27) = uVar20;
    iVar26 = (int)uVar25 + 2;
    *(undefined4 *)(&DAT_00ef22a0 + iVar19) = 0;
    *(undefined4 *)(&DAT_00ef22a4 + iVar19) = 0;
    *(undefined4 *)(&DAT_00ef22a8 + iVar19) = 0;
    uVar25 = (ulonglong)iVar26;
    *(float *)(&DAT_00ef1a98 + iVar21) = (float)(dVar31 * dVar33 + dVar39);
    *(float *)(&DAT_00ef1a9c + iVar21) = (float)(dVar31 * dVar46 + dVar40);
    *(float *)(&DAT_00ef1aa0 + iVar21) = (float)(dVar31 * dVar32 + dVar41);
    *(undefined4 *)(&DAT_00ef1d9c + iVar27) = uVar20;
    *(undefined4 *)(&DAT_00ef22ac + iVar19) = 0;
    *(float *)(&DAT_00ef1aa4 + iVar21) = (float)(dVar31 * dVar38 + dVar42);
    *(float *)(&DAT_00ef1aa8 + iVar21) = (float)(dVar31 * dVar37 + dVar43);
    *(float *)(&DAT_00ef1aac + iVar21) = (float)(dVar31 * dVar45 + dVar44);
    dVar31 = (double)*(float *)((int)puVar8 + 0x164);
  } while (iVar26 < 0xc);
  DrawMeshSet(0xc,&DAT_00ef1a98,&DAT_00ef1d98,&DAT_00ef22a0,9);
  uVar25 = GetEffectTex(0x16);
  puVar8[0x25] = uVar25;
  uVar25 = SCE_GS_SET_TEX1(0,0,1,1,1,0,0xff90);
  puVar8[0x26] = uVar25;
  uVar25 = SCE_GS_SET_CLAMP(0,0,0,0,0,0);
  puVar8[0x24] = uVar25;
  uVar25 = idol_draw::PackCmd(0,1,0,1,0x80);
  fVar3 = GameCamera.posZ;
  fVar1 = (float)puVar6[5];
  fVar2 = GameCamera.posZ - (float)puVar6[9];
  puVar8[0x27] = uVar25;
  if (((fVar1 < fVar2) && (g_heroState != VISIBOMB_CONTROL)) && (DAT_0071eed0 == '\0')) {
    *(undefined4 *)(puVar8 + 0x20) = 0;
    *(undefined4 *)((int)puVar8 + 0x104) = 0;
    *(undefined4 *)(puVar8 + 0x21) = 0;
    uVar20 = puVar6[1];
    *(undefined4 *)((int)puVar8 + 0x10c) = 0;
    *(undefined4 *)(puVar8 + 0x22) = 0;
    *(undefined4 *)((int)puVar8 + 0x114) = 0;
    *(undefined4 *)(puVar8 + 0x23) = 0;
    *(undefined4 *)(puVar8 + 0x1e) = uVar20;
    *(undefined4 *)((int)puVar8 + 0x11c) = 0;
    uVar7 = puVar6[2];
    *(undefined4 *)(puVar8 + 0x16) = *(undefined4 *)(puVar8 + 0x2a);
    *(undefined4 *)((int)puVar8 + 0xb4) = *(undefined4 *)((int)puVar8 + 0x14c);
    *(undefined4 *)(puVar8 + 0x17) = *(undefined4 *)(puVar8 + 0x29);
    *(undefined4 *)((int)puVar8 + 0xbc) = *(undefined4 *)(puVar8 + 0x2b);
    *(undefined4 *)(puVar8 + 0x18) = *(undefined4 *)(puVar8 + 0x2a);
    *(undefined4 *)((int)puVar8 + 0xc4) = *(undefined4 *)((int)puVar8 + 0x14c);
    *(undefined4 *)(puVar8 + 0x19) = *(undefined4 *)(puVar8 + 0x29);
    *(undefined4 *)((int)puVar8 + 0xcc) = *(undefined4 *)(puVar8 + 0x2b);
    fVar1 = (float)puVar6[9];
    *(float *)(puVar8 + 0x1a) = (float)dVar34;
    *(float *)((int)puVar8 + 0xd4) = (float)dVar35;
    *(float *)(puVar8 + 0x1b) = (float)dVar31;
    *(undefined4 *)((int)puVar8 + 0xdc) = *(undefined4 *)((int)puVar8 + 0x154);
    *(undefined4 *)((int)puVar8 + 0xf4) = uVar7;
    *(float *)(puVar8 + 0x1c) = (float)dVar34;
    *(float *)((int)puVar8 + 0xe4) = (float)dVar35;
    *(float *)(puVar8 + 0x1d) = (float)dVar31;
    *(undefined4 *)((int)puVar8 + 0xec) = *(undefined4 *)((int)puVar8 + 0x154);
    *(undefined4 *)(puVar8 + 0x1f) = uVar20;
    *(float *)(puVar8 + 0x19) = fVar3 - fVar1;
    *(undefined4 *)((int)puVar8 + 0xfc) = uVar7;
    iVar27 = EffectTexHeaders;
    *(float *)(puVar8 + 0x1d) = fVar3 - (float)puVar6[9];
    FastDrawQuad(uVar28 - 0x1d0,0,0,iVar27,9);
  }
  uVar16 = idol_draw::PackCmd(0,2,0,1,0x80);
  idol_draw::DrawDepth(pRVar13,uVar16);
  uVar16 = idol_draw::Blend(1,0,0x3f,1,0,0,1,2);
  FUN_004d6634(pRVar13,uVar16);
  uVar16 = SCE_GS_SET_CLAMP(0,0,0,0,0,0);
  FUN_004d6704(uVar16,uVar28 - 0x140,uVar28 - 0x13c);
  uVar20 = puVar6[4];
  dVar34 = (double)(float)(dVar48 - (double)((GameCamera.posZ - DAT_00ef1a90) / (float)puVar6[0xb]))
  ;
  if (dVar48 - dVar34 < 0.0) {
    dVar34 = dVar48;
  }
  if (dVar36 <= dVar34) {
    uVar16 = FastLerpColor(dVar34,0,puVar6[3]);
    uVar18 = FastLerpColor(dVar34,0,uVar20);
    iVar27 = 0;
    do {
      iVar19 = EffectTexHeaders;
      iVar21 = GetEffectTex(puVar6[7] + iVar27 + 0x28);
      FUN_004d676c(pRVar13,0,iVar19 + iVar21 * 0x24,*(undefined4 *)(puVar8 + 0x28),
                   *(undefined4 *)((int)puVar8 + 0x144));
      dVar34 = (double)(float)puVar6[6];
      dVar36 = -2.0;
      dVar35 = 2.0;
      dVar31 = (double)(float)(dVar34 * -2.0);
      if (dVar31 < (double)(float)(dVar34 * 2.0)) {
        do {
          dVar33 = (double)(float)(dVar34 * dVar36);
          uVar28 = 0;
          if (dVar33 < (double)(float)(dVar34 * dVar35)) {
            uVar28 = 0;
            dVar46 = (double)(float)(dVar31 + dVar48);
            do {
              fVar14 = DAT_00ef1a90;
              fVar4 = (float)(&DAT_007643ec)[iVar27];
              iVar19 = (int)((uVar28 & 0xffffffff) << 3);
              fVar5 = (float)(&DAT_00ef1a80)[iVar27 * 2];
              dVar32 = (double)GameCamera.posX;
              dVar38 = (double)GameCamera.posY;
              fVar2 = (float)(&DAT_00ef1a84)[iVar27 * 2];
              iVar12 = (int)uVar28;
              iVar21 = iVar12 * 0xc;
              fVar1 = (float)((double)(float)(dVar33 + dVar32) + dVar48);
              iVar11 = (int)((uVar28 + 2 & 0xffffffff) << 3);
              iVar26 = (int)(uVar28 + 2) * 0xc;
              iVar24 = iVar12 + 4;
              *(float *)(&DAT_00ef24a0 + iVar19) =
                   (float)(dVar33 / (double)(float)(dVar34 * dVar35)) * fVar4 + fVar5;
              fVar3 = (float)puVar6[6];
              *(float *)(&DAT_00ef1e98 + iVar21) = fVar1;
              *(float *)(&DAT_00ef1e9c + iVar21) = (float)(dVar38 + dVar46);
              *(float *)(&DAT_00ef1ea0 + iVar21) = fVar14;
              iVar21 = (int)((uVar28 + 1 & 0xffffffff) << 3);
              iVar10 = (int)(uVar28 + 1) * 0xc;
              *(float *)(&DAT_00ef24a4 + iVar19) =
                   (float)(dVar31 / (double)(float)((double)fVar3 * dVar35)) * fVar4 + fVar2;
              *(float *)(&DAT_00ef24a0 + iVar21) =
                   (float)(dVar33 / (double)(float)((double)(float)puVar6[6] * dVar35)) * fVar4 +
                   fVar5;
              fVar3 = (float)puVar6[6];
              *(float *)(&DAT_00ef1e98 + iVar10) = fVar1;
              iVar19 = (int)((uVar28 + 3 & 0xffffffff) << 3);
              *(float *)(&DAT_00ef24a4 + iVar21) =
                   ((float)((double)fVar3 + dVar31) / (float)((double)fVar3 * dVar35)) * fVar4 +
                   fVar2;
              fVar1 = (float)puVar6[6];
              *(float *)(&DAT_00ef1ea0 + iVar10) = fVar14;
              *(float *)(&DAT_00ef1e9c + iVar10) =
                   (float)((double)(float)((double)(float)((double)fVar1 + dVar31) + dVar38) +
                          dVar48);
              iVar21 = (int)(uVar28 + 3) * 0xc;
              *(float *)(&DAT_00ef24a0 + iVar11) =
                   ((float)(dVar33 + (double)(float)puVar6[6]) /
                   (float)((double)(float)puVar6[6] * dVar35)) * fVar4 + fVar5;
              *(float *)(&DAT_00ef24a4 + iVar11) =
                   (float)(dVar31 / (double)(float)((double)(float)puVar6[6] * dVar35)) * fVar4 +
                   fVar2;
              fVar1 = (float)puVar6[6];
              *(float *)(&DAT_00ef1e9c + iVar26) = (float)(dVar38 + dVar46);
              *(float *)(&DAT_00ef1ea0 + iVar26) = fVar14;
              *(float *)(&DAT_00ef1e98 + iVar26) =
                   (float)((double)(float)((double)(float)(dVar33 + (double)fVar1) + dVar32) +
                          dVar48);
              *(float *)(&DAT_00ef24a0 + iVar19) =
                   ((float)(dVar33 + (double)(float)puVar6[6]) /
                   (float)((double)(float)puVar6[6] * dVar35)) * fVar4 + fVar5;
              *(float *)(&DAT_00ef24a4 + iVar19) =
                   ((float)((double)(float)puVar6[6] + dVar31) /
                   (float)((double)(float)puVar6[6] * dVar35)) * fVar4 + fVar2;
              *(float *)(&DAT_00ef1e98 + iVar21) =
                   (float)((double)(float)((double)(float)(dVar33 + (double)(float)puVar6[6]) +
                                          dVar32) + dVar48);
              fVar1 = (float)puVar6[6];
              *(float *)(&DAT_00ef1ea0 + iVar21) = fVar14;
              *(float *)(&DAT_00ef1e9c + iVar21) =
                   (float)((double)(float)((double)(float)((double)fVar1 + dVar31) + dVar38) +
                          dVar48);
              if (iVar12 < iVar24) {
                lVar22 = (uVar28 & 0x3fffffff) << 2;
                lVar17 = uVar28 * 0xc;
                do {
                  dVar34 = (double)(SQRT((float)((double)*(float *)(&DAT_00ef1e98 + (int)lVar17) -
                                                dVar32) *
                                         (float)((double)*(float *)(&DAT_00ef1e98 + (int)lVar17) -
                                                dVar32) +
                                         (float)((double)*(float *)(&DAT_00ef1e9c + (int)lVar17) -
                                                dVar38) *
                                         (float)((double)*(float *)(&DAT_00ef1e9c + (int)lVar17) -
                                                dVar38)) /
                                   (float)((double)(float)puVar6[6] * dVar35));
                  if (dVar48 - dVar34 < 0.0) {
                    dVar34 = dVar48;
                  }
                  uVar20 = FastLerpColor(dVar34,uVar16,uVar18);
                  iVar19 = (int)lVar22;
                  dVar32 = (double)GameCamera.posX;
                  uVar28 = uVar28 + 1;
                  dVar38 = (double)GameCamera.posY;
                  lVar22 = lVar22 + 4;
                  lVar17 = lVar17 + 0xc;
                  *(undefined4 *)(&DAT_00ef2198 + iVar19) = uVar20;
                } while ((int)uVar28 < iVar24);
              }
              dVar34 = (double)(float)puVar6[6];
              uVar28 = (ulonglong)iVar24;
              dVar33 = (double)(float)(dVar33 + dVar34);
            } while (dVar33 < (double)(float)(dVar34 * dVar35));
          }
          DrawMeshSet(uVar28,&DAT_00ef1e98,&DAT_00ef2198,&DAT_00ef24a0,9);
          dVar34 = (double)(float)puVar6[6];
          dVar31 = (double)(float)(dVar31 + dVar34);
        } while (dVar31 < (double)(float)(dVar34 * dVar35));
      }
      iVar27 = iVar27 + 1;
    } while (iVar27 < 2);
  }
  g_ViewContext.fogNearIntensity = *(float *)(puVar8 + 0x2c);
  g_ViewContext.fogFarIntensity = *(float *)((int)puVar8 + 0x15c);
  return;
}


// 0x01d1c90 (0x4dc bytes)
/* Moby 1111 */

void UpdateMoby_1111(MobyInstance *moby)

{
  float fVar1;
  void *pvVar2;
  uint uVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  int iVar8;
  float *pfVar9;
  float *pfVar10;
  float *pfVar11;
  float *pfVar12;
  float *pfVar13;
  double dVar14;
  double dVar15;
  double dVar16;
  double dVar17;
  double dVar18;
  double dVar19;
  double dVar20;
  double dVar21;
  double dVar22;
  
  fVar4 = DAT_00ef26b4;
  fVar1 = DAT_00ef26b0;
  pvVar2 = moby->pVar;
  if (moby->state == '\0') {
    moby->updateDistance = -1;
    moby->state = '\x01';
    DAT_00ef1a80 = 0;
    DAT_00ef1a84 = 0;
    DAT_00ef1a88 = 0;
    DAT_00ef1a8c = 0;
    DAT_00ef26b0 = GameCamera.posX;
    DAT_00ef26b4 = GameCamera.posY;
    DAT_00ef26b8 = GameCamera.posZ;
    DAT_00ef26bc[0] = GameCamera.field8_0x14c[0];
    DAT_00ef26bc[1] = GameCamera.field8_0x14c[1];
    DAT_00ef26bc[2] = GameCamera.field8_0x14c[2];
    DAT_00ef26bc[3] = GameCamera.field8_0x14c[3];
    DAT_00ef1a94 = *(float *)((int)pvVar2 + 0x14);
  }
  else {
    iVar8 = ((uint)((int)GameCamera.posZ >> 0x1f) >> 1 ^ (uint)GameCamera.posZ) -
            ((int)GameCamera.posZ >> 0x1f);
    if (0x43340000 < iVar8) {
      DAT_0073a960 = 0x28;
      DAT_0073a961 = 0x40;
      DAT_0073a962 = 0x90;
      DAT_0073a963 = 0x40;
      WaterFog.r = '(';
      WaterFog.g = '@';
      WaterFog.b = 0x90;
    }
    DAT_00ef26b0 = GameCamera.posX;
    DAT_00ef26b4 = GameCamera.posY;
    DAT_00ef26b8 = GameCamera.posZ;
    dVar19 = (double)(GameCamera.posX - fVar1);
    DAT_00ef26bc = GameCamera.field8_0x14c;
    dVar20 = (double)(GameCamera.posY - fVar4);
    uVar3 = (int)*(uint *)((int)pvVar2 + 0x20) >> 0x1f;
    if ((int)((uVar3 >> 1 ^ *(uint *)((int)pvVar2 + 0x20)) - uVar3) < iVar8) {
      pfVar11 = (float *)&DAT_00ef1a80;
      iVar8 = 0;
      dVar17 = 2.0;
      pfVar12 = (float *)&DAT_00ef1a84;
      dVar18 = 5.0;
      dVar21 = 1.0;
      pfVar10 = (float *)&DAT_007643ec;
      dVar22 = -1.0;
      pfVar13 = pfVar11;
      pfVar9 = pfVar12;
      do {
        dVar16 = (double)((float)((double)*pfVar10 * dVar17) /
                         (float)((double)*(float *)((int)pvVar2 + 0x18) * dVar18));
        dVar15 = (double)(float)(dVar16 * dVar19);
        dVar16 = (double)(float)(dVar16 * dVar20);
        if (dVar15 != dVar21) {
          FastDoubleToInt(dVar15);
          dVar14 = (double)FastIntToDouble();
          dVar15 = (double)(float)(dVar15 - dVar14);
        }
        if (dVar16 != dVar21) {
          FastDoubleToInt(dVar16);
          dVar14 = (double)FastIntToDouble();
          dVar16 = (double)(float)(dVar16 - dVar14);
        }
        fVar1 = *pfVar9;
        *pfVar13 = (float)((double)*pfVar13 + dVar15);
        *pfVar9 = (float)((double)fVar1 + dVar16);
        dVar15 = (double)*pfVar13;
        uVar3 = (int)*pfVar13 >> 0x1f;
        if (0x3f800000 < (int)((uVar3 >> 1 ^ (uint)*pfVar13) - uVar3)) {
          dVar16 = dVar15 - dVar21;
          dVar15 = (double)(float)dVar16;
          *pfVar13 = (float)dVar16;
        }
        if (dVar15 < dVar22) {
          *pfVar13 = (float)(dVar15 + dVar21);
        }
        dVar15 = (double)*pfVar9;
        uVar3 = (int)*pfVar9 >> 0x1f;
        if (0x3f800000 < (int)((uVar3 >> 1 ^ (uint)*pfVar9) - uVar3)) {
          dVar16 = dVar15 - dVar21;
          dVar15 = (double)(float)dVar16;
          *pfVar9 = (float)dVar16;
        }
        if (dVar15 < dVar22) {
          *pfVar9 = (float)(dVar15 + dVar21);
        }
        iVar8 = iVar8 + 1;
        pfVar10 = pfVar10 + 1;
        pfVar13 = pfVar13 + 2;
        pfVar9 = pfVar9 + 2;
      } while (iVar8 < 2);
      dVar19 = (double)FastIntToDouble(worldUpdateTime % 0x168);
      fVar7 = DAT_0071f424;
      fVar1 = (float)(dVar19 * 0.017444444820284843 - 3.140000104904175);
      iVar8 = 0;
      pfVar13 = (float *)&DAT_007643fc;
      fVar4 = 3.1415925 - fVar1;
      if (fVar1 - (3.1415925 - fVar1) < 0.0) {
        fVar4 = fVar1;
      }
      fVar5 = -3.1415925 - fVar1;
      if ((-3.1415925 - fVar1) - fVar4 < 0.0) {
        fVar5 = fVar4;
      }
      fVar1 = fVar5 * fVar5;
      fVar4 = fVar1 * fVar1 * fVar5;
      WaterPlaneActive = 1;
      fVar6 = fVar1 * fVar4;
      DAT_00e5aa90 = 0x44000000;
      pfVar9 = (float *)&DAT_007643f8;
      DAT_00e5aa94 = 0x44000000;
      DAT_00e5aa9c = 0x44800000;
      DAT_00e5aa98 = (fVar1 * fVar6 * 2.601887e-06 +
                     fVar6 * -0.0001980741 +
                     fVar4 * 0.0083330255 + fVar1 * fVar5 * -0.16666657 + fVar5) * 0.25 +
                     DAT_00ef1a94;
      DAT_00ef1a90 = DAT_00e5aa98;
      do {
        fVar1 = *pfVar9 * fVar7 + *pfVar11;
        dVar19 = (double)fVar1;
        *pfVar11 = fVar1;
        if (dVar21 < dVar19) {
          dVar20 = dVar19 - dVar21;
          dVar19 = (double)(float)dVar20;
          *pfVar11 = (float)dVar20;
        }
        if (dVar19 < dVar22) {
          *pfVar11 = (float)(dVar19 + dVar21);
        }
        fVar1 = *pfVar13 * fVar7 + *pfVar12;
        dVar19 = (double)fVar1;
        *pfVar12 = fVar1;
        if (dVar21 < dVar19) {
          dVar20 = dVar19 - dVar21;
          dVar19 = (double)(float)dVar20;
          *pfVar12 = (float)dVar20;
        }
        if (dVar19 < dVar22) {
          *pfVar12 = (float)(dVar19 + dVar21);
        }
        iVar8 = iVar8 + 1;
        pfVar9 = pfVar9 + 2;
        pfVar11 = pfVar11 + 2;
        pfVar13 = pfVar13 + 2;
        pfVar12 = pfVar12 + 2;
      } while (iVar8 < 2);
      RegisterFuncForMoby(&PTR_M1111_Pokitaru_Ocean_00708d88,moby);
    }
  }
  return;
}


