// game/update/moby807.cpp -- reconstructed from NPEA00385 EBOOT
// STATUS: NOT STARTED (raw Ghidra output)
// 5 functions, 0x4687d8-0x46a680
#include "game/update/moby807.h"
#include "game/camera.h"
#include "game/collproc.h"
#include "game/draw.h"
#include "game/hero.h"
#include "game/hud.h"
#include "game/mobyfunc.h"
#include "game/mobyutil.h"
#include "game/update/moby806.h"
#include "game/update/moby849.h"
#include "game/vuchain.h"
#include "idol/fastfunc.h"

// 0x04687d8 (0x9ac bytes)
// inlined: FastRSqrt @0x4689d8, FastRSqrt @0x468a7c
void M807_004687d8(int param_1)

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
  undefined4 uVar16;
  undefined4 uVar17;
  float fVar18;
  ulonglong *puVar19;
  int iVar20;
  undefined *puVar21;
  char acVar22 [4];
  ulonglong uVar23;
  ulonglong uVar24;
  undefined8 uVar25;
  float *pfVar26;
  int iVar27;
  uint uVar28;
  float *pfVar29;
  short *psVar30;
  ulonglong unaff_r21;
  ulonglong unaff_r22;
  ulonglong unaff_r23;
  ulonglong unaff_r24;
  longlong lVar31;
  float *pfVar32;
  ulonglong unaff_r25;
  int iVar33;
  ulonglong unaff_r26;
  short *psVar34;
  ulonglong unaff_r27;
  ulonglong unaff_r28;
  ulonglong unaff_r29;
  ulonglong unaff_r30;
  ulonglong unaff_r31;
  int iVar35;
  ulonglong in_LR;
  longlong lVar36;
  double dVar37;
  double dVar38;
  double dVar39;
  double dVar40;
  double dVar41;
  ulonglong in_f25;
  ulonglong in_f26;
  ulonglong in_f27;
  ulonglong in_f28;
  ulonglong in_f29;
  double dVar42;
  ulonglong in_f30;
  double dVar43;
  ulonglong in_f31;
  double dVar44;
  double dVar45;
  
  uVar23 = ZEXT48(&stack0x00000000);
  puVar19 = (ulonglong *)(uVar23 - 0x1d0);
  *puVar19 = uVar23;
  puVar19[0x3c] = in_LR;
  puVar19[0x33] = in_f25;
  puVar19[0x34] = in_f26;
  puVar19[0x35] = in_f27;
  puVar19[0x36] = in_f28;
  puVar19[0x37] = in_f29;
  puVar19[0x38] = in_f30;
  puVar19[0x39] = in_f31;
  puVar19[0x31] = unaff_r30;
  puVar19[0x30] = unaff_r29;
  puVar19[0x32] = unaff_r31;
  uVar16 = DAT_008774fc;
  pfVar32 = *(float **)(param_1 + 0x78);
  dVar44 = (double)DAT_00874c48;
  fVar1 = *pfVar32;
  puVar19[0x2f] = unaff_r28;
  puVar19[0x2e] = unaff_r27;
  puVar19[0x2d] = unaff_r26;
  puVar19[0x2c] = unaff_r25;
  puVar19[0x2b] = unaff_r24;
  puVar19[0x2a] = unaff_r23;
  puVar19[0x29] = unaff_r22;
  puVar19[0x28] = unaff_r21;
  dVar45 = (double)(float)((double)fVar1 / dVar44);
  uVar24 = GetEffectTex((double)fVar1,uVar16);
  puVar19[0x25] = uVar24;
  uVar24 = SCE_GS_SET_TEX1(0,0,1,1,1,0,0xff90);
  puVar19[0x26] = uVar24;
  uVar24 = SCE_GS_SET_CLAMP(0,0,0,0,0,0);
  puVar19[0x24] = uVar24;
  uVar24 = idol_draw::PackCmd(DAT_010cde1c,DAT_008774f0,DAT_010cde20,DAT_008774f4,DAT_008774f8);
  puVar19[0x27] = uVar24;
  uVar25 = idol_draw::Blend(1,0,0,3,0,0,1,2);
  SetGSReg(0x16,uVar25);
  fVar1 = *(float *)(param_1 + 0x10);
  fVar2 = *(float *)(param_1 + 0x14);
  *(float *)(puVar19 + 0x14) = fVar1;
  *(float *)((int)puVar19 + 0xa4) = fVar2;
  fVar5 = DAT_010ccf58;
  fVar6 = GameCamera.posZ;
  fVar4 = GameCamera.posY;
  fVar3 = GameCamera.posX;
  dVar43 = 0.5;
  fVar18 = *(float *)(param_1 + 0x18) + 0.5;
  fVar1 = fVar1 + DAT_010ccf50;
  fVar2 = fVar2 + DAT_010ccf54;
  *(float *)(puVar19 + 0x15) = fVar18;
  fVar18 = fVar18 + *pfVar32;
  fVar4 = fVar4 - fVar2;
  fVar3 = fVar3 - fVar1;
  fVar5 = fVar18 + fVar5;
  *(float *)(puVar19 + 0x15) = fVar18;
  *(float *)(puVar19 + 0x14) = fVar1;
  *(undefined4 *)((int)puVar19 + 0xac) = 0x3f800000;
  *(float *)((int)puVar19 + 0xa4) = fVar2;
  fVar6 = fVar6 - fVar5;
  *(float *)(puVar19 + 0x15) = fVar5;
  acVar22 = GameCamera.field8_0x14c;
  dVar42 = 0.0;
  fVar1 = fVar6 * fVar6 + fVar3 * fVar3 + fVar4 * fVar4;
  dVar44 = dVar42;
  dVar40 = dVar42;
  dVar41 = dVar42;
  if (SQRT(fVar1) != 0.0) {
    fVar2 = 1.0 / SQRT(fVar1);
    fVar2 = -(fVar1 * fVar2 * fVar2 - 1.0) * fVar2 * 0.5 + fVar2;
    fVar2 = -(fVar1 * fVar2 * fVar2 - 1.0) * fVar2 * 0.5 + fVar2;
    fVar2 = -(fVar1 * fVar2 * fVar2 - 1.0) * fVar2 * 0.5 + fVar2;
    dVar41 = (double)(fVar3 * fVar2);
    dVar40 = (double)(fVar4 * fVar2);
    dVar44 = (double)(fVar6 * fVar2);
  }
  fVar18 = pfVar32[3];
  *(float *)(puVar19 + 0xe) = (float)dVar41;
  *(float *)((int)puVar19 + 0x74) = (float)dVar40;
  *(float *)(puVar19 + 0xf) = (float)dVar44;
  *(char (*) [4])((int)puVar19 + 0x7c) = acVar22;
  fVar1 = (float)((double)*(float *)((int)fVar18 + 0xe8) * dVar41 -
                 (double)(float)((double)*(float *)((int)fVar18 + 0xe0) * dVar44));
  fVar2 = (float)((double)*(float *)((int)fVar18 + 0xe4) * dVar44 -
                 (double)(float)((double)*(float *)((int)fVar18 + 0xe8) * dVar40));
  fVar18 = (float)((double)*(float *)((int)fVar18 + 0xe0) * dVar40 -
                  (double)(float)((double)*(float *)((int)fVar18 + 0xe4) * dVar41));
  *(undefined4 *)((int)puVar19 + 0x8c) = 0;
  fVar3 = fVar18 * fVar18 + fVar2 * fVar2 + fVar1 * fVar1;
  dVar37 = dVar42;
  dVar38 = dVar42;
  dVar39 = dVar42;
  if (SQRT(fVar3) != 0.0) {
    fVar4 = 1.0 / SQRT(fVar3);
    fVar4 = -(fVar3 * fVar4 * fVar4 - 1.0) * fVar4 * 0.5 + fVar4;
    fVar4 = -(fVar3 * fVar4 * fVar4 - 1.0) * fVar4 * 0.5 + fVar4;
    fVar4 = -(fVar3 * fVar4 * fVar4 - 1.0) * fVar4 * 0.5 + fVar4;
    dVar39 = (double)(fVar2 * fVar4);
    dVar38 = (double)(fVar1 * fVar4);
    dVar37 = (double)(fVar18 * fVar4);
  }
  *(float *)(puVar19 + 0x10) = (float)dVar39;
  *(float *)((int)puVar19 + 0x84) = (float)dVar38;
  *(float *)(puVar19 + 0x11) = (float)dVar37;
  *(undefined4 *)((int)puVar19 + 0x9c) = 0;
  *(float *)(puVar19 + 0x12) = (float)(dVar40 * dVar37 - (double)(float)(dVar44 * dVar38));
  *(float *)((int)puVar19 + 0x94) = (float)(dVar44 * dVar39 - (double)(float)(dVar41 * dVar37));
  *(float *)(puVar19 + 0x13) = (float)(dVar41 * dVar38 - (double)(float)(dVar40 * dVar39));
  uVar17 = DAT_00877500;
  uVar16 = DAT_008774fc;
  *(undefined4 *)((int)puVar19 + 0xfc) = DAT_00877500;
  *(undefined4 *)(puVar19 + 0x1f) = uVar17;
  *(undefined4 *)((int)puVar19 + 0xf4) = uVar17;
  *(undefined4 *)(puVar19 + 0x1e) = uVar17;
  uVar25 = GetEffectTex(uVar16);
  SetGSReg(0x18,uVar25);
  uVar25 = idol_draw::PackCmd(0,1,0,1,0x80);
  SetGSReg(3,uVar25);
  uVar25 = SCE_GS_SET_CLAMP(0,0,0,0,0,0);
  SetGSReg(6,uVar25);
  uVar25 = SCE_GS_SET_TEX1(0,0,1,1,1,0,0xff90);
  SetGSReg(0x1a,uVar25);
  uVar25 = FUN_00502e50(0);
  SetGSReg(8,uVar25);
  STUB_00071170();
  fVar1 = *(float *)(puVar19 + 0xe);
  fVar2 = *(float *)(puVar19 + 0x10);
  fVar18 = *(float *)(puVar19 + 0x12);
  fVar3 = *(float *)(puVar19 + 0x14);
  pfVar29 = (float *)&DAT_010cd084;
  fVar4 = *(float *)((int)puVar19 + 0x74);
  fVar5 = *(float *)((int)puVar19 + 0x84);
  pfVar26 = (float *)&DAT_00874d10;
  fVar6 = *(float *)((int)puVar19 + 0x94);
  fVar7 = *(float *)((int)puVar19 + 0xa4);
  lVar36 = 0x122;
  fVar8 = *(float *)(puVar19 + 0xf);
  fVar9 = *(float *)(puVar19 + 0x11);
  fVar10 = *(float *)(puVar19 + 0x13);
  fVar11 = *(float *)(puVar19 + 0x15);
  do {
    fVar12 = pfVar26[1];
    fVar13 = *pfVar26;
    fVar14 = pfVar26[2];
    fVar15 = pfVar26[3];
    pfVar26 = pfVar26 + 4;
    *pfVar29 = fVar15 * fVar3 + fVar14 * fVar18 + fVar13 * fVar1 + fVar12 * fVar2;
    pfVar29[1] = fVar15 * fVar7 + fVar14 * fVar6 + fVar13 * fVar4 + fVar12 * fVar5;
    pfVar29[2] = fVar15 * fVar11 + fVar14 * fVar10 + fVar13 * fVar8 + fVar12 * fVar9;
    pfVar29 = pfVar29 + 3;
    lVar36 = lVar36 + -1;
  } while (lVar36 != 0);
  DrawMeshSet(0x94,&DAT_010cd084,&DAT_00876840,&DAT_00875f30,9);
  DrawMeshSet(0x6d,&DAT_010cd75c,&DAT_00876a88,&DAT_008763c0,9);
  DrawMeshSet(0x24,&DAT_010cdc6c,&DAT_00876c38,&DAT_00876720,9);
  uVar24 = GetEffectTex(0xb);
  puVar19[0x25] = uVar24;
  uVar24 = idol_draw::PackCmd(0,2,0,1,0x80);
  puVar19[0x27] = uVar24;
  iVar27 = FastDoubleToInt((double)(float)(dVar45 * 64.0 + 128.0));
  *(undefined4 *)((int)puVar19 + 0xfc) = 0;
  puVar21 = PTR_DAT_00877508;
  psVar34 = &DAT_008772d0;
  iVar33 = 0;
  iVar27 = iVar27 + DAT_010ccf70;
  *(undefined4 *)(puVar19 + 0x1f) = 0;
  uVar28 = iVar27 * 0x1000000 | (uint)puVar21;
  *(uint *)((int)puVar19 + 0xf4) = uVar28;
  *(uint *)(puVar19 + 0x1e) = uVar28;
  do {
    iVar27 = 0;
    lVar36 = uVar23 - 0x120;
    psVar30 = psVar34;
    do {
      pfVar26 = (float *)lVar36;
      iVar35 = (int)((longlong)*psVar30 << 4);
      if (iVar27 < 2) {
        *pfVar26 = *(float *)(iVar35 + 0x876cd0) * DAT_00877504;
        pfVar26[1] = *(float *)(iVar35 + 0x876cd4) * DAT_00877504;
        fVar1 = *(float *)(iVar35 + 0x876cd8);
        fVar2 = *(float *)(iVar35 + 0x876cdc);
        fVar18 = DAT_00877504;
      }
      else {
        fVar18 = DAT_00877514 * DAT_00877504;
        *pfVar26 = *(float *)(iVar35 + 0x876cd0) * fVar18;
        pfVar26[1] = *(float *)(iVar35 + 0x876cd4) * fVar18;
        fVar1 = *(float *)(iVar35 + 0x876cd8);
        fVar2 = *(float *)(iVar35 + 0x876cdc);
      }
      iVar27 = iVar27 + 1;
      pfVar26[3] = fVar2;
      psVar30 = psVar30 + 1;
      pfVar26[2] = fVar1 * fVar18;
      lVar36 = lVar36 + 0x10;
    } while (iVar27 < 4);
    *(undefined4 *)(puVar19 + 0x20) = 0x3f000000;
    *(undefined4 *)((int)puVar19 + 0x104) = 0x3f000000;
    *(undefined4 *)(puVar19 + 0x21) = 0x3f000000;
    *(undefined4 *)((int)puVar19 + 0x10c) = 0x3f000000;
    *(undefined4 *)(puVar19 + 0x22) = 0x3f000000;
    *(undefined4 *)((int)puVar19 + 0x114) = 0x3f800000;
    uVar16 = EffectTexHeaders;
    *(undefined4 *)(puVar19 + 0x23) = 0x3f000000;
    *(undefined4 *)((int)puVar19 + 0x11c) = 0x3f800000;
    FastDrawQuad(uVar23 - 0x120,uVar23 - 0x160,0,uVar16,9);
    iVar33 = iVar33 + 1;
    psVar34 = psVar34 + 4;
  } while (iVar33 < 0x20);
  if (*(char *)(param_1 + 0x20) == '\x01') {
    uVar24 = GetEffectTex(DAT_0087750c);
    puVar19[0x25] = uVar24;
    uVar24 = idol_draw::PackCmd(0,1,0,1,0x80);
    puVar19[0x27] = uVar24;
    fVar1 = pfVar32[3];
    *(undefined4 *)((int)puVar19 + 0xfc) = 0x107f7f7f;
    *(undefined4 *)(puVar19 + 0x1f) = 0x107f7f7f;
    *(undefined4 *)((int)puVar19 + 0xf4) = 0x107f7f7f;
    *(undefined4 *)(puVar19 + 0x1e) = 0x107f7f7f;
    *(undefined4 *)(puVar19 + 0xe) = *(undefined4 *)((int)fVar1 + 0xc0);
    *(undefined4 *)((int)puVar19 + 0x74) = *(undefined4 *)((int)fVar1 + 0xc4);
    *(undefined4 *)(puVar19 + 0xf) = *(undefined4 *)((int)fVar1 + 200);
    *(undefined4 *)((int)puVar19 + 0x7c) = *(undefined4 *)((int)fVar1 + 0xcc);
    *(undefined4 *)(puVar19 + 0x10) = *(undefined4 *)((int)fVar1 + 0xd0);
    *(undefined4 *)((int)puVar19 + 0x84) = *(undefined4 *)((int)fVar1 + 0xd4);
    *(undefined4 *)(puVar19 + 0x11) = *(undefined4 *)((int)fVar1 + 0xd8);
    *(undefined4 *)((int)puVar19 + 0x8c) = *(undefined4 *)((int)fVar1 + 0xdc);
    *(undefined4 *)(puVar19 + 0x12) = *(undefined4 *)((int)fVar1 + 0xe0);
    uVar16 = *(undefined4 *)(param_1 + 0x18);
    *(undefined4 *)((int)puVar19 + 0x94) = *(undefined4 *)((int)fVar1 + 0xe4);
    iVar33 = 0;
    iVar27 = 0;
    *(undefined4 *)(puVar19 + 0x13) = *(undefined4 *)((int)fVar1 + 0xe8);
    uVar17 = *(undefined4 *)((int)fVar1 + 0xec);
    *(undefined4 *)(puVar19 + 0x15) = uVar16;
    *(undefined4 *)((int)puVar19 + 0x9c) = uVar17;
    do {
      uVar25 = 0x4020000000000000;
      lVar31 = uVar23 - 0x120;
      iVar35 = 0;
      psVar34 = (short *)((int)&DAT_008774d0 + iVar27);
      lVar36 = uVar23 - 0x1d0;
      do {
        fVar1 = *(float *)((int)puVar19 + 0x84);
        iVar20 = (int)((longlong)*psVar34 << 4);
        fVar2 = *(float *)(iVar20 + 0x8773d4);
        fVar18 = *(float *)(iVar20 + 0x8773d0);
        fVar3 = *(float *)((int)puVar19 + 0x74);
        fVar4 = *(float *)((int)puVar19 + 0x8c);
        fVar5 = *(float *)(iVar20 + 0x8773d8);
        fVar6 = *(float *)((int)puVar19 + 0x7c);
        fVar7 = *(float *)((int)puVar19 + 0x94);
        fVar8 = *(float *)(iVar20 + 0x8773dc);
        fVar9 = *(float *)((int)puVar19 + 0x9c);
        fVar10 = *(float *)((int)puVar19 + 0xa4);
        fVar11 = *(float *)((int)puVar19 + 0xac);
        fVar12 = *(float *)(puVar19 + 0x14) * fVar8 +
                 *(float *)(puVar19 + 0x12) * fVar5 +
                 *(float *)(puVar19 + 0xe) * fVar18 + *(float *)(puVar19 + 0x10) * fVar2;
        fVar13 = *(float *)(puVar19 + 0x15) * fVar8 +
                 *(float *)(puVar19 + 0x13) * fVar5 +
                 *(float *)(puVar19 + 0xf) * fVar18 + *(float *)(puVar19 + 0x11) * fVar2;
        pfVar32 = (float *)lVar31;
        *pfVar32 = fVar12;
        pfVar32[1] = fVar10 * fVar8 + fVar7 * fVar5 + fVar3 * fVar18 + fVar1 * fVar2;
        pfVar32[2] = fVar13;
        pfVar32[3] = fVar11 * fVar8 + fVar9 * fVar5 + fVar6 * fVar18 + fVar4 * fVar2;
        fVar13 = fVar13 - GameCamera.posZ;
        fVar12 = fVar12 - GameCamera.posX;
        dVar45 = (double)SQRT(fVar12 * fVar12 + fVar13 * fVar13);
        dVar40 = (double)(fVar12 * (float)((double)DAT_00877510 / dVar45));
        dVar41 = (double)(fVar13 * (float)((double)DAT_00877510 / dVar45));
        dVar44 = dVar42;
        if (dVar42 - dVar45 < 0.0) {
          dVar44 = dVar40;
        }
        dVar37 = dVar42;
        if (dVar42 - dVar45 < 0.0) {
          dVar37 = dVar41;
        }
        if (dVar45 - dVar42 < 0.0) {
          dVar44 = dVar40;
        }
        if (dVar45 - dVar42 < 0.0) {
          dVar37 = dVar41;
        }
        fVar1 = (float)(dVar44 * dVar43 + dVar43);
        iVar20 = (int)lVar36;
        *(float *)(iVar20 + 0x100) = fVar1;
        dVar44 = (double)FastFMod((double)fVar1,uVar25);
        *(float *)(iVar20 + 0x100) = (float)dVar44;
        fVar1 = (float)(dVar37 * dVar43 + dVar43);
        *(float *)(iVar20 + 0x104) = fVar1;
        dVar44 = (double)FastFMod((double)fVar1,uVar25);
        iVar35 = iVar35 + 1;
        *(float *)(iVar20 + 0x104) = (float)dVar44;
        psVar34 = psVar34 + 1;
        lVar31 = lVar31 + 0x10;
        lVar36 = lVar36 + 8;
      } while (iVar35 < 4);
      FastDrawQuad(uVar23 - 0x120,0,0,EffectTexHeaders,9);
      iVar33 = iVar33 + 1;
      iVar27 = iVar27 + 8;
    } while (iVar33 < 4);
  }
  uVar25 = idol_draw::Blend(1,5,0x60,3,0,0,1,2);
  SetGSReg(0x16,uVar25);
  return;
}


// 0x0469184 (0x14 bytes)
void M807_00469184(void)

{
  DAT_00877564 = 0x10000;
  return;
}


// 0x04691b8 (0x3a4 bytes)
// inlined: FastAtan2 @0x4692b8
double M807_004691b8(int param_1,float *param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  undefined4 uVar5;
  float fVar6;
  int iVar7;
  ulonglong *puVar8;
  int iVar9;
  ulonglong uVar10;
  longlong lVar11;
  longlong lVar12;
  longlong lVar13;
  float *pfVar14;
  int iVar15;
  ulonglong uVar16;
  longlong lVar17;
  ulonglong unaff_r27;
  ulonglong unaff_r28;
  ulonglong unaff_r29;
  ulonglong unaff_r30;
  ulonglong unaff_r31;
  ulonglong in_LR;
  longlong lVar18;
  double dVar19;
  double dVar20;
  double dVar21;
  ulonglong in_f29;
  double dVar22;
  ulonglong in_f30;
  double dVar23;
  ulonglong in_f31;
  double dVar24;
  
  uVar10 = ZEXT48(&stack0x00000000);
  lVar12 = uVar10 - 0xf0;
  puVar8 = (ulonglong *)lVar12;
  *puVar8 = uVar10;
  puVar8[0x20] = in_LR;
  puVar8[0x1b] = in_f29;
  puVar8[0x1c] = in_f30;
  puVar8[0x1d] = in_f31;
  fVar1 = *param_2 - *(float *)(param_1 + 0x10);
  fVar4 = param_2[1] - *(float *)(param_1 + 0x14);
  puVar8[0x1a] = unaff_r31;
  puVar8[0x19] = unaff_r30;
  fVar2 = ABS(fVar1);
  fVar6 = ABS(fVar4);
  *(float *)((int)puVar8 + 0x84) = fVar1;
  puVar8[0x18] = unaff_r29;
  *(float *)(puVar8 + 0x11) = fVar4;
  iVar7 = *(int *)(param_1 + 0x78);
  *(float *)((int)puVar8 + 0x8c) = fVar2 - fVar6;
  dVar23 = 0.0;
  fVar1 = *(float *)(iVar7 + 0x1f8);
  uVar16 = (ulonglong)(*(uint *)((int)puVar8 + 0x84) >> 0x1c) & 8 |
           (ulonglong)(*(uint *)((int)puVar8 + 0x8c) >> 0x1e) & 2 |
           (ulonglong)(*(uint *)(puVar8 + 0x11) >> 0x1d) & 4;
  fVar4 = ABS(*(float *)((int)puVar8 + 0x84));
  if (*(float *)((int)puVar8 + 0x8c) - 0.0 < 0.0) {
    fVar4 = fVar6;
  }
  fVar6 = *(float *)(&g_atanQuadrantTable + (int)(uVar16 << 2));
  fVar3 = ABS(*(float *)(puVar8 + 0x11));
  if (*(float *)((int)puVar8 + 0x8c) - 0.0 < 0.0) {
    fVar3 = fVar2;
  }
  fVar2 = *(float *)(((uint)(uVar16 << 2) | 0x735900) + 4);
  puVar8[0x17] = unaff_r28;
  puVar8[0x16] = unaff_r27;
  dVar19 = dVar23;
  if (0.0 < fVar4) {
    lVar11 = uVar10 - 0xe0;
    lVar17 = uVar10 - 0x50;
    lVar13 = uVar10 - 0x60;
    lVar18 = 2;
    fVar4 = (fVar3 - fVar4) / (fVar3 + fVar4);
    fVar3 = fVar4 * fVar4;
    *(float *)((int)puVar8 + 0x9c) = fVar4;
    *(float *)((int)puVar8 + 0x94) = fVar4;
    *(float *)(puVar8 + 0x13) = fVar4;
    *(float *)(puVar8 + 0x12) = fVar4;
    fVar4 = fVar3 * fVar3;
    *(float *)((int)puVar8 + 0x94) = *(float *)((int)puVar8 + 0x94) * fVar3;
    *(float *)(puVar8 + 0x13) = *(float *)(puVar8 + 0x13) * fVar4;
    *(float *)((int)puVar8 + 0x9c) = *(float *)((int)puVar8 + 0x9c) * fVar4 * fVar3;
    do {
      *(float *)((int)lVar11 + 0x90) = *(float *)((int)lVar11 + 0x80) * fVar4 * fVar4;
      iVar15 = (int)lVar13;
      lVar13 = lVar13 + 8;
      lVar11 = lVar11 + 8;
      *(float *)((int)lVar17 + 4) = *(float *)(iVar15 + 4) * fVar4 * fVar4;
      lVar17 = lVar17 + 8;
      lVar18 = lVar18 + -1;
    } while (lVar18 != 0);
    lVar18 = 4;
    lVar17 = uVar10 - 0x60;
    pfVar14 = (float *)&DAT_007358e0;
    lVar11 = lVar12;
    lVar13 = lVar17;
    do {
      fVar4 = *pfVar14;
      fVar3 = pfVar14[1];
      pfVar14 = pfVar14 + 2;
      *(float *)((int)lVar11 + 0x90) = *(float *)((int)lVar11 + 0x90) * fVar4;
      lVar11 = lVar11 + 8;
      *(float *)((int)lVar13 + 4) = *(float *)((int)lVar13 + 4) * fVar3;
      lVar13 = lVar13 + 8;
      lVar18 = lVar18 + -1;
    } while (lVar18 != 0);
    lVar11 = 2;
    do {
      iVar15 = (int)lVar12;
      iVar9 = (int)lVar17;
      lVar12 = lVar12 + 0x10;
      lVar17 = lVar17 + 0x10;
      dVar19 = (double)((float)(dVar19 + (double)*(float *)(iVar15 + 0x90)) + *(float *)(iVar9 + 4)
                        + *(float *)(iVar9 + 8) + *(float *)(iVar9 + 0xc));
      lVar11 = lVar11 + -1;
    } while (lVar11 != 0);
    dVar19 = (double)((float)(dVar19 + 0.7853981852531433) * fVar6 + fVar2);
  }
  dVar19 = (double)FastWrapRot((float)dVar19,fVar1);
  fVar4 = *(float *)(param_1 + 0x14) - param_2[1];
  dVar22 = (double)*(float *)(param_1 + 0x18);
  fVar6 = *(float *)(param_1 + 0x10) - *param_2;
  fVar1 = param_2[2];
  iVar15 = 0x470000;
  *(undefined4 *)(puVar8 + 0x10) = 0;
  dVar24 = (double)SQRT((float)(dVar22 - (double)fVar1) * (float)(dVar22 - (double)fVar1) +
                        fVar6 * fVar6 + fVar4 * fVar4);
  OrganicDeltAng
            ((float)dVar19,DAT_0071f418 * 12.566371,DAT_0071f418 * 12.566371,
             g_FrameTime * 12.566371,(float *)(param_1 + 0x48),0x470000,
             (float *)(iVar7 + 0x1f0));
  OrganicDelt
            ((float)dVar24,DAT_0071f418 * 8.0,DAT_0071f418 * 12.0,g_FrameTime * 4.0,
             (float *)(puVar8 + 0x10),iVar15,(float *)(iVar7 + 500));
  fVar1 = *(float *)(param_1 + 0xc4);
  fVar4 = *(float *)(param_1 + 0xc0);
  fVar6 = *(float *)(param_1 + 200);
  dVar19 = (double)SQRT(fVar6 * fVar6 + fVar4 * fVar4 + fVar1 * fVar1);
  if (dVar19 == dVar23) {
    uVar5 = *(undefined4 *)(param_1 + 0xcc);
    dVar19 = dVar23;
    dVar20 = dVar23;
    dVar21 = dVar23;
  }
  else {
    fVar2 = (float)((double)*(float *)(iVar7 + 500) / dVar19);
    uVar5 = *(undefined4 *)(param_1 + 0xcc);
    dVar21 = (double)(fVar4 * fVar2);
    dVar20 = (double)(fVar1 * fVar2);
    dVar19 = (double)(fVar6 * fVar2);
  }
  *(float *)(puVar8 + 0xe) = (float)dVar21;
  *(float *)((int)puVar8 + 0x74) = (float)dVar20;
  *(float *)(puVar8 + 0xf) = (float)dVar19;
  *(undefined4 *)((int)puVar8 + 0x7c) = uVar5;
  *(float *)(puVar8 + 0xf) = -(DAT_0071f418 * 10.0 - *(float *)(iVar7 + 0x1fc));
  MB_MoveAndCollide(0x3fe0000000000000,0x3fe0000000000000,dVar23,param_1,uVar10 - 0x80);
  *(float *)(iVar7 + 0x1fc) = (float)(dVar22 - (double)*(float *)(param_1 + 0x18));
  return dVar24;
}


// 0x0469568 (0x2e4 bytes)
void M807_00469568(MobyInstance *param_1)

{
  void *pvVar1;
  Spline *pSVar2;
  float fVar3;
  float fVar4;
  MobyInstance *pMVar5;
  int iVar6;
  ulonglong uVar7;
  int local_30;
  float local_2c;
  float local_28 [4];
  
  pvVar1 = param_1->pVar;
  uVar7 = ZEXT48(pvVar1);
  if (param_1->state != '\0') {
    local_2c = 0.0;
    iVar6 = MB_damage(param_1,0x330000,0);
    MB_HandleDamage(param_1,iVar6,uVar7 + 0x20,0,&local_30,&local_2c,0,4);
    if (((local_30 != 1) && (param_1->state != '\v')) && (local_2c != 0.0)) {
      *(undefined4 *)((int)pvVar1 + 0x98) = 0x3f000000;
      *(float *)((int)pvVar1 + 0x20) = *(float *)((int)pvVar1 + 0x20) - local_2c;
      fVar4 = DAT_0071f418;
      fVar3 = DAT_0087759c * DAT_0071f418;
      *(undefined4 *)((int)pvVar1 + 0x90) = 0x200;
      *(float *)((int)pvVar1 + 0x80) = fVar3;
      *(float *)((int)pvVar1 + 0x84) = DAT_008775a0 * fVar4;
      fVar3 = g_FrameTime;
      *(float *)((int)pvVar1 + 0x88) = DAT_008775a4 * g_FrameTime;
      fVar4 = DAT_008775a8;
      *(undefined1 *)((int)pvVar1 + 0xad) = 0;
      *(float *)((int)pvVar1 + 0x8c) = fVar4 * fVar3;
      *(undefined4 *)((int)pvVar1 + 0x94) = 0x29;
      param_1->modeBits =
           param_1->modeBits &
           (MIRROR|CAN_BE_DAMAGED|HIDE_BACKFACES|DISABLE_Z_WRITE|DRAW_SHADOW|DRAW_TRANSPARENT_WEIRD|
            LOCK_ROTATION|NO_DRAW|UNK_40|HAS_SPECIAL_VARS|HAS_GLOW|TRANSPARENT|NO_POST_UPDATE|
            NO_UPDATE|DISABLED);
      *(float *)((int)pvVar1 + 0xbc) = fVar3 * 2.0;
      MB_VecAtan2Angles
                (*(undefined8 *)(iVar6 + 0x10),*(undefined8 *)(iVar6 + 0x18),local_28,uVar7 + 0x88,
                 uVar7 + 0x8c);
      MB_StartKick((double)local_28[0],param_1,uVar7 + 0x70);
      *(undefined4 *)((int)pvVar1 + 0xc0) = 0x40e00000;
      *(undefined4 *)((int)pvVar1 + 0xc4) = 0x41600000;
      param_1->state = '\v';
      *(undefined1 *)((int)pvVar1 + 0x67) = 0x78;
      MB_UpdateLightsTransition(param_1,uVar7 + 0x60);
      MB_SpawnBoltsFromCrate(param_1,0,0xffffffffffffffff);
    }
    param_1->damage = -1;
    MB_ColorDyingMoby(param_1,uVar7 + 0x60);
    if (param_1->state == '\x03') {
      pSVar2 = Splines[*(int *)((int)pvVar1 + 0x1e4)];
      MB_getTargetInArea
                (0x4050000000000000,param_1,uVar7 + 0x180,pSVar2,0,0,pSVar2->points,pSVar2->cnt);
    }
    else {
      pSVar2 = Splines[*(int *)((int)pvVar1 + 0x1e0)];
      MB_getTargetInArea
                (0x4038000000000000,param_1,uVar7 + 0x180,pSVar2,0,0,pSVar2->points,pSVar2->cnt);
    }
    pMVar5 = g_heroMobyPtr;
    if (*(int *)((int)pvVar1 + 0x1c0) == 0) {
      *(float *)((int)pvVar1 + 0x180) = g_heroPosition.x;
      fVar3 = g_heroPosition.y;
      *(MobyInstance **)((int)pvVar1 + 0x1c0) = pMVar5;
      *(float *)((int)pvVar1 + 0x184) = fVar3;
      *(float *)((int)pvVar1 + 0x188) = g_heroPosition.z;
      *(float *)((int)pvVar1 + 0x18c) = g_heroPosition.w;
    }
  }
  return;
}


// 0x0469880 (0xe00 bytes)
// inlined: FastAtan2 @0x469bc8, FastAtan2 @0x46a0bc
/* Moby 807 */

void UpdateMoby_807(MobyInstance *moby)

{
  byte bVar1;
  u8 uVar2;
  f32 fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  void *pvVar8;
  Spline *pSVar9;
  ulonglong *puVar10;
  MobyInstance *pMVar11;
  float fVar12;
  ulonglong uVar13;
  longlong lVar14;
  int iVar15;
  int iVar16;
  uint uVar17;
  Vec4 *pVVar21;
  ulonglong uVar18;
  longlong lVar19;
  longlong lVar20;
  longlong lVar22;
  float *pfVar23;
  longlong lVar24;
  ulonglong unaff_r29;
  ulonglong unaff_r30;
  ulonglong unaff_r31;
  ulonglong in_LR;
  longlong lVar25;
  double dVar26;
  float fVar27;
  
  lVar14 = (longlong)(int)moby;
  uVar13 = ZEXT48(&stack0x00000000);
  lVar20 = uVar13 - 0x100;
  puVar10 = (ulonglong *)lVar20;
  *puVar10 = uVar13;
  puVar10[0x22] = in_LR;
  puVar10[0x1f] = unaff_r31;
  puVar10[0x1e] = unaff_r30;
  puVar10[0x1d] = unaff_r29;
  pvVar8 = moby->pVar;
  M807_00469568();
  bVar1 = moby->state;
  iVar15 = *(int *)((int)pvVar8 + 0x1c0);
  if (bVar1 < 6) {
    if (bVar1 == 5) {
      fVar27 = *(float *)(iVar15 + 0x10) - (moby->pos).x;
      fVar5 = *(float *)(iVar15 + 0x14) - (moby->pos).y;
      fVar6 = ABS(fVar27);
      fVar4 = ABS(fVar5);
      *(float *)(puVar10 + 0x10) = fVar27;
      *(float *)((int)puVar10 + 0x84) = fVar5;
      *(float *)(puVar10 + 0x11) = fVar6 - fVar4;
      fVar27 = 0.0;
      uVar18 = (ulonglong)(*(uint *)(puVar10 + 0x10) >> 0x1c) & 8 |
               (ulonglong)(*(uint *)(puVar10 + 0x11) >> 0x1e) & 2 |
               (ulonglong)(*(uint *)((int)puVar10 + 0x84) >> 0x1d) & 4;
      fVar5 = ABS(*(float *)(puVar10 + 0x10));
      if (*(float *)(puVar10 + 0x11) - 0.0 < 0.0) {
        fVar5 = fVar4;
      }
      fVar7 = *(float *)(&g_atanQuadrantTable + (int)(uVar18 << 2));
      fVar4 = *(float *)(((uint)(uVar18 << 2) | 0x735900) + 4);
      fVar12 = ABS(*(float *)((int)puVar10 + 0x84));
      if (*(float *)(puVar10 + 0x11) - 0.0 < 0.0) {
        fVar12 = fVar6;
      }
      if (0.0 < fVar5) {
        lVar19 = uVar13 - 0xf0;
        lVar22 = uVar13 - 0x68;
        lVar24 = uVar13 - 0x58;
        lVar25 = 2;
        fVar5 = (fVar12 - fVar5) / (fVar12 + fVar5);
        fVar6 = fVar5 * fVar5;
        *(float *)((int)puVar10 + 0xa4) = fVar5;
        *(float *)((int)puVar10 + 0x9c) = fVar5;
        *(float *)(puVar10 + 0x14) = fVar5;
        *(float *)(puVar10 + 0x13) = fVar5;
        fVar5 = fVar6 * fVar6;
        *(float *)((int)puVar10 + 0x9c) = *(float *)((int)puVar10 + 0x9c) * fVar6;
        *(float *)(puVar10 + 0x14) = *(float *)(puVar10 + 0x14) * fVar5;
        *(float *)((int)puVar10 + 0xa4) = *(float *)((int)puVar10 + 0xa4) * fVar5 * fVar6;
        do {
          *(float *)((int)lVar19 + 0x98) = *(float *)((int)lVar19 + 0x88) * fVar5 * fVar5;
          iVar15 = (int)lVar22;
          lVar19 = lVar19 + 8;
          lVar22 = lVar22 + 8;
          *(float *)((int)lVar24 + 4) = *(float *)(iVar15 + 4) * fVar5 * fVar5;
          lVar24 = lVar24 + 8;
          lVar25 = lVar25 + -1;
        } while (lVar25 != 0);
        lVar25 = 4;
        lVar24 = uVar13 - 0x68;
        pfVar23 = (float *)&DAT_007358e0;
        lVar19 = lVar20;
        lVar22 = lVar24;
        do {
          fVar5 = *pfVar23;
          fVar6 = pfVar23[1];
          pfVar23 = pfVar23 + 2;
          *(float *)((int)lVar19 + 0x98) = *(float *)((int)lVar19 + 0x98) * fVar5;
          lVar19 = lVar19 + 8;
          *(float *)((int)lVar22 + 4) = *(float *)((int)lVar22 + 4) * fVar6;
          lVar22 = lVar22 + 8;
          lVar25 = lVar25 + -1;
        } while (lVar25 != 0);
        lVar19 = 2;
        do {
          iVar15 = (int)lVar20;
          iVar16 = (int)lVar24;
          lVar20 = lVar20 + 0x10;
          lVar24 = lVar24 + 0x10;
          fVar27 = fVar27 + *(float *)(iVar15 + 0x98) + *(float *)(iVar16 + 4) +
                   *(float *)(iVar16 + 8) + *(float *)(iVar16 + 0xc);
          lVar19 = lVar19 + -1;
        } while (lVar19 != 0);
        fVar27 = (fVar27 + 0.7853982) * fVar7 + fVar4;
      }
      OrganicDeltAng
                (fVar27,DAT_0071f418 * 12.566371,DAT_0071f418 * 12.566371,
                 g_FrameTime * 12.566371,&(moby->rotation).z,0x46984c,
                 (float *)((int)pvVar8 + 0x1f0));
      if (*(int *)((int)pvVar8 + 0x1c4) != 2) {
        dVar26 = (double)MB_randRangeFloat(-20.0,20.0);
        *(float *)((int)pvVar8 + 0x1f8) = (float)(dVar26 * 0.01745329238474369);
        moby->state = '\x06';
        if (moby->animationId != '\x02') {
          puVar10[0x1b] = (longlong)(int)(animationSpeed * 10.5);
          MB_SetAnimation(lVar14,2,0,*(undefined4 *)((int)puVar10 + 0xdc));
        }
      }
    }
    else if (bVar1 == 4) {
      pSVar9 = Splines[*(int *)((int)pvVar8 + 0x1e8)];
      dVar26 = (double)M807_004691b8
                                 (lVar14,pSVar9->points + *(int *)((int)pvVar8 + 0x200));
      if (1.0 <= dVar26) {
        if ((*(int *)((int)pvVar8 + 0x1c4) != 2) &&
           (moby->state = '\x06', moby->animationId != '\x02')) {
          puVar10[0x1b] = (longlong)(int)(animationSpeed * 10.5);
          MB_SetAnimation(lVar14,2,0,*(undefined4 *)((int)puVar10 + 0xdc));
        }
      }
      else if (*(int *)((int)pvVar8 + 0x200) < pSVar9->cnt + -1) {
        *(int *)((int)pvVar8 + 0x200) = *(int *)((int)pvVar8 + 0x200) + 1;
      }
      else {
        moby->state = '\x05';
        if (moby->animationId != '\0') {
          puVar10[0x1b] = (longlong)(int)(animationSpeed * 10.5);
          MB_SetAnimation(lVar14,0,0,*(undefined4 *)((int)puVar10 + 0xdc));
        }
      }
    }
    else if (bVar1 == 3) {
      if ((*(int *)((int)pvVar8 + 0x1c4) != 2) &&
         (moby->state = '\x04', moby->animationId != '\x02')) {
        puVar10[0x1b] = (longlong)(int)(animationSpeed * 10.5);
        MB_SetAnimation(lVar14,2,0,*(undefined4 *)((int)puVar10 + 0xdc));
      }
    }
    else if (bVar1 == 2) {
      dVar26 = (double)M807_004691b8
                                 (lVar14,Splines[*(int *)((int)pvVar8 + 0x1e8)]->points +
                                         *(int *)((int)pvVar8 + 0x200));
      if ((dVar26 < 1.0) && (moby->state = '\x01', moby->animationId != '\x01')) {
        puVar10[0x1b] = (longlong)(int)(animationSpeed * 10.5);
        MB_SetAnimation(lVar14,1,0,*(undefined4 *)((int)puVar10 + 0xdc));
      }
    }
    else if (bVar1 == 1) {
      pMVar11 = g_MobyInstance + *(int *)((int)pvVar8 + 0x1ec);
      if ((pMVar11 == (MobyInstance *)0x0) || (pMVar11->state == 0xfd || pMVar11->state == 0xfe)) {
        moby->state = '\b';
        if (moby->animationId != '\x02') {
          puVar10[0x1b] = (longlong)(int)(animationSpeed * 10.5);
          MB_SetAnimation(lVar14,2,0,*(undefined4 *)((int)puVar10 + 0xdc));
        }
      }
      else {
        fVar27 = (pMVar11->pos).x - (moby->pos).x;
        fVar5 = (pMVar11->pos).y - (moby->pos).y;
        fVar6 = ABS(fVar27);
        fVar4 = ABS(fVar5);
        *(float *)((int)puVar10 + 0x8c) = fVar27;
        *(float *)(puVar10 + 0x12) = fVar5;
        *(float *)((int)puVar10 + 0x94) = fVar6 - fVar4;
        fVar27 = 0.0;
        uVar18 = (ulonglong)(*(uint *)((int)puVar10 + 0x8c) >> 0x1c) & 8 |
                 (ulonglong)(*(uint *)((int)puVar10 + 0x94) >> 0x1e) & 2 |
                 (ulonglong)(*(uint *)(puVar10 + 0x12) >> 0x1d) & 4;
        fVar5 = ABS(*(float *)((int)puVar10 + 0x8c));
        if (*(float *)((int)puVar10 + 0x94) - 0.0 < 0.0) {
          fVar5 = fVar4;
        }
        fVar7 = *(float *)(&g_atanQuadrantTable + (int)(uVar18 << 2));
        fVar4 = *(float *)(((uint)(uVar18 << 2) | 0x735900) + 4);
        fVar12 = ABS(*(float *)(puVar10 + 0x12));
        if (*(float *)((int)puVar10 + 0x94) - 0.0 < 0.0) {
          fVar12 = fVar6;
        }
        if (0.0 < fVar5) {
          lVar19 = uVar13 - 0xf0;
          lVar24 = uVar13 - 0x38;
          lVar22 = uVar13 - 0x48;
          lVar25 = 2;
          fVar5 = (fVar12 - fVar5) / (fVar12 + fVar5);
          fVar6 = fVar5 * fVar5;
          *(float *)((int)puVar10 + 0xc4) = fVar5;
          *(float *)((int)puVar10 + 0xbc) = fVar5;
          *(float *)(puVar10 + 0x18) = fVar5;
          *(float *)(puVar10 + 0x17) = fVar5;
          fVar5 = fVar6 * fVar6;
          *(float *)((int)puVar10 + 0xbc) = *(float *)((int)puVar10 + 0xbc) * fVar6;
          *(float *)(puVar10 + 0x18) = *(float *)(puVar10 + 0x18) * fVar5;
          *(float *)((int)puVar10 + 0xc4) = *(float *)((int)puVar10 + 0xc4) * fVar5 * fVar6;
          do {
            *(float *)((int)lVar19 + 0xb8) = *(float *)((int)lVar19 + 0xa8) * fVar5 * fVar5;
            iVar15 = (int)lVar22;
            lVar22 = lVar22 + 8;
            lVar19 = lVar19 + 8;
            *(float *)((int)lVar24 + 4) = *(float *)(iVar15 + 4) * fVar5 * fVar5;
            lVar24 = lVar24 + 8;
            lVar25 = lVar25 + -1;
          } while (lVar25 != 0);
          lVar25 = 4;
          lVar24 = uVar13 - 0x48;
          pfVar23 = (float *)&DAT_007358e0;
          lVar19 = lVar20;
          lVar22 = lVar24;
          do {
            fVar5 = *pfVar23;
            fVar6 = pfVar23[1];
            pfVar23 = pfVar23 + 2;
            *(float *)((int)lVar19 + 0xb8) = *(float *)((int)lVar19 + 0xb8) * fVar5;
            lVar19 = lVar19 + 8;
            *(float *)((int)lVar22 + 4) = *(float *)((int)lVar22 + 4) * fVar6;
            lVar22 = lVar22 + 8;
            lVar25 = lVar25 + -1;
          } while (lVar25 != 0);
          lVar19 = 2;
          do {
            iVar15 = (int)lVar20;
            lVar20 = lVar20 + 0x10;
            iVar16 = (int)lVar24;
            lVar24 = lVar24 + 0x10;
            fVar27 = fVar27 + *(float *)(iVar15 + 0xb8) + *(float *)(iVar16 + 4) +
                     *(float *)(iVar16 + 8) + *(float *)(iVar16 + 0xc);
            lVar19 = lVar19 + -1;
          } while (lVar19 != 0);
          fVar27 = (fVar27 + 0.7853982) * fVar7 + fVar4;
        }
        fVar27 = OrganicDeltAng
                           (fVar27,DAT_0071f418 * 12.566371,DAT_0071f418 * 12.566371,
                            g_FrameTime * 12.566371,&(moby->rotation).z,0x46984c,
                            (float *)((int)pvVar8 + 0x1f0));
        if (((moby->field43_0x70 & 2U) != 0) &&
           (iVar15 = MB_randInt((double)fVar27,3), iVar15 == 0)) {
          *(uint *)((int)pvVar8 + 0x200) = *(int *)((int)pvVar8 + 0x200) + 1U & 1;
          moby->state = '\x02';
          if (moby->animationId != '\x02') {
            puVar10[0x1b] = (longlong)(int)(animationSpeed * 10.5);
            MB_SetAnimation(lVar14,2,0,*(undefined4 *)((int)puVar10 + 0xdc));
          }
        }
      }
    }
    else if (bVar1 == 0) {
      *(f32 *)((int)pvVar8 + 0x1d0) = (moby->pos).x;
      *(f32 *)((int)pvVar8 + 0x1d4) = (moby->pos).y;
      iVar15 = *(int *)((int)pvVar8 + 0x1e8);
      *(f32 *)((int)pvVar8 + 0x1d8) = (moby->pos).z;
      fVar3 = (moby->pos).w;
      *(undefined **)((int)pvVar8 + 0x140) = &DAT_00877590;
      *(f32 *)((int)pvVar8 + 0x1dc) = fVar3;
      if (iVar15 < 0) {
        moby->state = '\x05';
      }
      else if (*(int *)((int)pvVar8 + 0x1e4) < 0) {
        if (*(int *)((int)pvVar8 + 0x1ec) < 0) {
          DeleteMoby(moby);
        }
        else {
          *(f32 *)((int)pvVar8 + 0x1d0) = (moby->pos).x;
          pSVar9 = Splines[iVar15];
          *(f32 *)((int)pvVar8 + 0x1d4) = (moby->pos).y;
          *(f32 *)((int)pvVar8 + 0x1d8) = (moby->pos).z;
          *(f32 *)((int)pvVar8 + 0x1dc) = (moby->pos).w;
          (moby->pos).x = pSVar9->points[0].x;
          (moby->pos).y = pSVar9->points[0].y;
          uVar2 = moby->animationId;
          (moby->pos).z = pSVar9->points[0].z;
          fVar27 = pSVar9->points[0].w;
          moby->state = '\x01';
          (moby->pos).w = fVar27;
          if (uVar2 != '\x01') {
            puVar10[0x1b] = (longlong)(int)(animationSpeed * 10.5);
            MB_SetAnimation(lVar14,1,0,*(undefined4 *)((int)puVar10 + 0xdc));
          }
        }
      }
      else {
        pSVar9 = Splines[iVar15];
        pVVar21 = pSVar9->points + pSVar9->cnt + -1;
        *(float *)((int)pvVar8 + 0x1d0) = pVVar21->x;
        *(float *)((int)pvVar8 + 0x1d4) = pVVar21->y;
        *(float *)((int)pvVar8 + 0x1d8) = pVVar21->z;
        *(float *)((int)pvVar8 + 0x1dc) = pVVar21->w;
        (moby->pos).x = pSVar9->points[0].x;
        (moby->pos).y = pSVar9->points[0].y;
        (moby->pos).z = pSVar9->points[0].z;
        fVar27 = pSVar9->points[0].w;
        moby->state = '\x03';
        (moby->pos).w = fVar27;
      }
    }
  }
  else if (bVar1 == 0xb) {
    uVar17 = MB_UpdateKick(moby,(KickVars *)((int)pvVar8 + 0x70));
    if ((uVar17 & 0x140) != 0) {
      MB_SpawnExplosionSparks
                (0x3fe0000000000000,0x402a000000000000,lVar14,lVar14 + 0x10,&DAT_0046984c,
                 0xffffffffffffffff);
      MB_SpawnBoltsFromCrate(lVar14,0,0xffffffffffffffff);
      DeleteMoby(moby);
    }
  }
  else if (bVar1 == 10) {
    uVar17 = MB_UpdateKick(moby,(KickVars *)((int)pvVar8 + 0x70));
    if (((uVar17 & 0x140) != 0) && (moby->state = '\x05', moby->animationId != '\0')) {
      puVar10[0x1b] = (longlong)(int)(animationSpeed * 10.5);
      MB_SetAnimation(lVar14,0,0,*(undefined4 *)((int)puVar10 + 0xdc));
    }
  }
  else if (bVar1 == 9) {
    iVar15 = FUN_0048c188(lVar14,(int)pvVar8 + 0x70);
    if (iVar15 != 0) {
      moby->state = '\x05';
      *(undefined2 *)((int)pvVar8 + 0x138) = 0;
    }
  }
  else if (bVar1 == 8) {
    dVar26 = (double)M807_004691b8(lVar14,(int)pvVar8 + 0x1d0);
    if (1.5 <= dVar26) {
      if ((*(int *)((int)pvVar8 + 0x1c4) != 2) &&
         (moby->state = '\x06', moby->animationId != '\x02')) {
        puVar10[0x1b] = (longlong)(int)(animationSpeed * 10.5);
        MB_SetAnimation(lVar14,2,0,*(undefined4 *)((int)puVar10 + 0xdc));
      }
    }
    else {
      moby->state = '\x05';
      if (moby->animationId != '\0') {
        puVar10[0x1b] = (longlong)(int)(animationSpeed * 10.5);
        MB_SetAnimation(lVar14,0,0,*(undefined4 *)((int)puVar10 + 0xdc));
      }
    }
  }
  else if (bVar1 == 7) {
    iVar16 = MB_MayaFrameTrigger(13.0,moby);
    if (iVar16 == 0) {
      if ((moby->field43_0x70 & 2U) != 0) {
        if (*(int *)((int)pvVar8 + 0x1c4) == 2) {
          moby->state = '\b';
          if (moby->animationId != '\x02') {
            puVar10[0x1b] = (longlong)(int)(animationSpeed * 10.5);
            MB_SetAnimation(lVar14,2,0,*(undefined4 *)((int)puVar10 + 0xdc));
          }
        }
        else {
          fVar27 = (moby->pos).y - *(float *)(iVar15 + 0x14);
          fVar5 = (moby->pos).x - *(float *)(iVar15 + 0x10);
          if ((1.5 < SQRT(fVar5 * fVar5 + fVar27 * fVar27)) &&
             (moby->state = '\x06', moby->animationId != '\x02')) {
            puVar10[0x1b] = (longlong)(int)(animationSpeed * 10.5);
            MB_SetAnimation(lVar14,2,0,*(undefined4 *)((int)puVar10 + 0xdc));
          }
        }
      }
    }
    else {
      puVar10[0xe] = 0;
      DamageSphereAtBone
                (0x3fd54fdf40000000,0x3ff0000000000000,0x3ff0000000000000,lVar14,0,0,1);
    }
  }
  else if (bVar1 == 6) {
    dVar26 = (double)M807_004691b8(lVar14,(int)pvVar8 + 0x180);
    if (1.5 <= dVar26) {
      if ((*(int *)((int)pvVar8 + 0x1c4) == 2) && (moby->state = '\b', moby->animationId != '\x02'))
      {
        puVar10[0x1b] = (longlong)(int)(animationSpeed * 10.5);
        MB_SetAnimation(lVar14,2,0,*(undefined4 *)((int)puVar10 + 0xdc));
      }
    }
    else {
      moby->state = '\a';
      if (moby->animationId != '\x03') {
        puVar10[0x1b] = (longlong)(int)(animationSpeed * 10.5);
        MB_SetAnimation(lVar14,3,0,*(undefined4 *)((int)puVar10 + 0xdc));
      }
    }
  }
  return;
}


