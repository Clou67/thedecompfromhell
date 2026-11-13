// game/update/moby656.cpp -- reconstructed from NPEA00385 EBOOT
// STATUS: NOT STARTED (raw Ghidra output)
// 6 functions, 0x406458-0x407850
#include "game/update/moby656.h"
#include "game/camera.h"
#include "game/collproc.h"
#include "game/draw.h"
#include "game/hero.h"
#include "game/hud.h"
#include "game/mobyfunc.h"
#include "game/mobyutil.h"
#include "game/partupd.h"
#include "game/update.h"
#include "game/update/moby655.h"
#include "game/vuchain.h"
#include "idol/fastfunc.h"

// 0x0406458 (0x318 bytes)
void M656_00406458(void)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  undefined8 uVar5;
  int iVar6;
  double dVar7;
  double dVar8;
  GPiece<32> local_30;
  
  DrawRoundedRect
            (DAT_00854a38 + DAT_00854a44,DAT_00854a48 + DAT_00854a38,DAT_00854a34 + DAT_00854a4c,
             DAT_00854a34 + DAT_00854a50,DAT_00854a54);
  dVar7 = (double)FastIntToDouble(worldUpdateTime % 0x3c);
  fVar1 = (float)(dVar7 * 0.01666666753590107) * 6.28318;
  fVar2 = 3.1415925 - fVar1;
  if (fVar1 - (3.1415925 - fVar1) < 0.0) {
    fVar2 = fVar1;
  }
  fVar3 = -3.1415925 - fVar1;
  if ((-3.1415925 - fVar1) - fVar2 < 0.0) {
    fVar3 = fVar2;
  }
  dVar7 = 1.0;
  fVar1 = fVar3 * fVar3;
  fVar2 = fVar1 * fVar1 * fVar3;
  fVar4 = fVar1 * fVar2;
  dVar8 = (double)((fVar1 * fVar4 * 2.601887e-06 +
                   fVar4 * -0.0001980741 +
                   fVar2 * 0.0083330255 + fVar1 * fVar3 * -0.16666657 + fVar3) * 3.0 + 0.5);
  if ((dVar8 <= 1.0) && (dVar7 = dVar8, dVar8 < 0.0)) {
    dVar7 = 0.0;
  }
  uVar5 = FastLerpColor(dVar7,DAT_00854a3c,DAT_00854a40);
  iVar6 = MB_randInt(10);
  FastDoubleToInt((double)(longlong)iVar6);
  FontPrintLargeCenter(DAT_00854a34,DAT_00854a38,uVar5,local_30,8);
  return;
}


// 0x0406790 (0x538 bytes)
// inlined: FastRSqrt @0x406944
void M656_00406790(int param_1)

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
  int iVar10;
  ulonglong *puVar11;
  float fVar12;
  float fVar13;
  undefined *puVar14;
  ulonglong uVar15;
  ulonglong uVar16;
  longlong lVar17;
  longlong lVar18;
  undefined4 *puVar19;
  undefined4 *puVar20;
  undefined4 *puVar21;
  float *pfVar23;
  longlong lVar22;
  ulonglong unaff_r26;
  ulonglong unaff_r27;
  ulonglong unaff_r28;
  undefined4 *puVar24;
  ulonglong unaff_r29;
  ulonglong unaff_r30;
  float *pfVar25;
  ulonglong unaff_r31;
  longlong lVar26;
  float *pfVar27;
  ulonglong in_LR;
  longlong lVar28;
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
  ulonglong in_f18;
  ulonglong in_f19;
  ulonglong in_f20;
  ulonglong in_f21;
  double dVar39;
  ulonglong in_f22;
  ulonglong in_f23;
  ulonglong in_f24;
  double dVar40;
  ulonglong in_f25;
  double dVar41;
  ulonglong in_f26;
  double dVar42;
  ulonglong in_f27;
  double dVar43;
  ulonglong in_f28;
  double dVar44;
  ulonglong in_f29;
  double dVar45;
  ulonglong in_f30;
  double dVar46;
  ulonglong in_f31;
  double dVar47;
  
  uVar15 = ZEXT48(&stack0x00000000);
  lVar18 = uVar15 - 0x1a0;
  puVar11 = (ulonglong *)lVar18;
  *puVar11 = uVar15;
  puVar11[0x36] = in_LR;
  puVar11[0x26] = in_f18;
  puVar11[0x27] = in_f19;
  puVar11[0x28] = in_f20;
  puVar11[0x29] = in_f21;
  puVar11[0x2a] = in_f22;
  puVar11[0x2b] = in_f23;
  puVar11[0x2c] = in_f24;
  puVar11[0x2d] = in_f25;
  puVar11[0x2e] = in_f26;
  puVar11[0x2f] = in_f27;
  puVar11[0x30] = in_f28;
  puVar11[0x31] = in_f29;
  puVar11[0x32] = in_f30;
  puVar11[0x33] = in_f31;
  puVar11[0x24] = unaff_r30;
  iVar10 = *(int *)(param_1 + 0x78);
  puVar11[0x25] = unaff_r31;
  puVar11[0x23] = unaff_r29;
  puVar11[0x22] = unaff_r28;
  puVar11[0x21] = unaff_r27;
  puVar11[0x20] = unaff_r26;
  uVar16 = GetEffectTex(0xb);
  puVar11[0x1d] = uVar16;
  uVar16 = idol_draw::PackCmd(0,2,0,1,0x80);
  puVar11[0x1f] = uVar16;
  uVar16 = SCE_GS_SET_TEX1(0,0,1,1,1,0,0xff90);
  puVar11[0x1e] = uVar16;
  uVar16 = SCE_GS_SET_CLAMP(0,0,0,0,0,0);
  fVar4 = *(float *)(iVar10 + 0xf4);
  fVar5 = *(float *)(iVar10 + 0xf0);
  dVar31 = (double)GameCamera.posY;
  dVar29 = (double)GameCamera.posX;
  fVar1 = (float)(dVar31 - (double)fVar4);
  fVar2 = (float)(dVar29 - (double)fVar5);
  dVar32 = (double)GameCamera.posZ;
  fVar6 = *(float *)(iVar10 + 0xf8);
  fVar3 = (float)(dVar32 - (double)fVar6);
  puVar11[0x1c] = uVar16;
  uVar7 = DAT_00854b60;
  dVar40 = 0.0;
  dVar41 = (double)(float)GameCamera.posW;
  fVar12 = SQRT(fVar3 * fVar3 + fVar2 * fVar2 + fVar1 * fVar1);
  fVar13 = 0.3 / fVar12;
  dVar39 = dVar40;
  if (0.0 - fVar12 < 0.0) {
    dVar39 = (double)(fVar1 * fVar13);
  }
  dVar45 = dVar40;
  if (0.0 - fVar12 < 0.0) {
    dVar45 = (double)(fVar2 * fVar13);
  }
  dVar33 = dVar40;
  if (0.0 - fVar12 < 0.0) {
    dVar33 = (double)(fVar3 * fVar13);
  }
  if (fVar12 - 0.0 < 0.0) {
    dVar39 = (double)(fVar1 * fVar13);
  }
  if (fVar12 - 0.0 < 0.0) {
    dVar45 = (double)(fVar2 * fVar13);
  }
  if (fVar12 - 0.0 < 0.0) {
    dVar33 = (double)(fVar3 * fVar13);
  }
  dVar46 = (double)(float)(dVar39 + (double)fVar4);
  dVar47 = (double)(float)(dVar45 + (double)fVar5);
  dVar45 = (double)(float)(dVar33 + (double)fVar6);
  fVar1 = (float)(dVar31 - dVar46);
  fVar2 = (float)(dVar29 - dVar47);
  fVar3 = (float)(dVar32 - dVar45);
  fVar4 = fVar3 * fVar3 + fVar2 * fVar2 + fVar1 * fVar1;
  dVar39 = dVar40;
  dVar29 = dVar40;
  dVar31 = dVar40;
  if (SQRT(fVar4) != 0.0) {
    fVar5 = 1.0 / SQRT(fVar4);
    fVar5 = -(fVar4 * fVar5 * fVar5 - 1.0) * fVar5 * 0.5 + fVar5;
    fVar5 = -(fVar4 * fVar5 * fVar5 - 1.0) * fVar5 * 0.5 + fVar5;
    fVar5 = -(fVar4 * fVar5 * fVar5 - 1.0) * fVar5 * 0.5 + fVar5;
    dVar39 = (double)(fVar2 * fVar5);
    dVar29 = (double)(fVar1 * fVar5);
    dVar31 = (double)(fVar3 * fVar5);
  }
  fVar1 = (float)((double)g_heroGravityDir.z * dVar39 -
                 (double)(float)((double)g_heroGravityDir.x * dVar31));
  fVar2 = (float)((double)g_heroGravityDir.y * dVar31 - (double)(float)((double)g_heroGravityDir.z * dVar29));
  fVar3 = (float)((double)g_heroGravityDir.x * dVar29 -
                 (double)(float)((double)g_heroGravityDir.y * dVar39));
  *(undefined4 *)((int)puVar11 + 0xbc) = DAT_00854b60;
  *(undefined4 *)(puVar11 + 0x17) = uVar7;
  *(undefined4 *)((int)puVar11 + 0xb4) = uVar7;
  *(undefined4 *)(puVar11 + 0x16) = uVar7;
  fVar4 = SQRT(fVar3 * fVar3 + fVar2 * fVar2 + fVar1 * fVar1);
  fVar5 = -1.0 / fVar4;
  dVar32 = dVar40;
  if (0.0 - fVar4 < 0.0) {
    dVar32 = (double)(fVar2 * fVar5);
  }
  dVar33 = dVar40;
  if (0.0 - fVar4 < 0.0) {
    dVar33 = (double)(fVar1 * fVar5);
  }
  dVar35 = dVar40;
  if (0.0 - fVar4 < 0.0) {
    dVar35 = (double)(fVar3 * fVar5);
  }
  if (fVar4 - 0.0 < 0.0) {
    dVar32 = (double)(fVar2 * fVar5);
  }
  if (fVar4 - 0.0 < 0.0) {
    dVar33 = (double)(fVar1 * fVar5);
  }
  if (fVar4 - 0.0 < 0.0) {
    dVar35 = (double)(fVar3 * fVar5);
  }
  dVar42 = (double)(float)(dVar39 * dVar33 - (double)(float)(dVar29 * dVar32));
  dVar44 = (double)(float)(dVar29 * dVar35 - (double)(float)(dVar31 * dVar33));
  dVar43 = (double)(float)(dVar31 * dVar32 - (double)(float)(dVar39 * dVar35));
  dVar30 = (double)MB_randRangeSigned(0,0x3f999999a0000000);
  puVar19 = &DAT_00854b40;
  lVar26 = uVar15 - 0x130;
  dVar30 = (double)(float)((double)DAT_00854b68 + dVar30);
  pfVar25 = (float *)&DAT_00854b00;
  puVar24 = &DAT_00854b44;
  lVar28 = 4;
  lVar17 = lVar18;
  lVar22 = lVar26;
  puVar21 = puVar24;
  puVar20 = puVar19;
  pfVar27 = pfVar25;
  do {
    fVar2 = *pfVar27;
    fVar1 = (float)((double)fVar2 * dVar30);
    dVar34 = (double)fVar1;
    pfVar23 = (float *)lVar22;
    *pfVar23 = fVar1;
    dVar36 = (double)pfVar27[1];
    pfVar23[1] = (float)(dVar36 * dVar30);
    dVar37 = (double)(float)((double)pfVar27[2] * dVar30);
    pfVar23[2] = (float)((double)pfVar27[2] * dVar30);
    dVar38 = (double)pfVar27[3];
    pfVar27 = pfVar27 + 4;
    pfVar23[3] = (float)((double)fVar2 * (double)(float)(dVar30 * dVar41) + dVar38);
    *pfVar23 = (float)(dVar38 * dVar47 +
                      (double)(float)(dVar37 * dVar44 +
                                     (double)(float)(dVar34 * dVar39 +
                                                    (double)(float)(dVar36 * (double)(float)(dVar30 
                                                  * dVar32)))));
    pfVar23[1] = (float)(dVar38 * dVar46 +
                        (double)(float)(dVar37 * dVar43 +
                                       (double)(float)(dVar34 * dVar29 +
                                                      (double)(float)(dVar36 * (double)(float)(
                                                  dVar30 * dVar33)))));
    pfVar23[2] = (float)(dVar38 * dVar45 +
                        (double)(float)(dVar37 * dVar42 +
                                       (double)(float)(dVar34 * dVar31 +
                                                      (double)(float)(dVar36 * (double)(float)(
                                                  dVar30 * dVar35)))));
    uVar7 = *puVar20;
    lVar22 = lVar22 + 0x10;
    uVar8 = *puVar21;
    puVar20 = puVar20 + 2;
    *(undefined4 *)((int)lVar17 + 0xc0) = uVar7;
    puVar21 = puVar21 + 2;
    *(undefined4 *)((int)lVar17 + 0xc4) = uVar8;
    lVar17 = lVar17 + 8;
    lVar28 = lVar28 + -1;
  } while (lVar28 != 0);
  FastDrawQuad(uVar15 - 0x130,0,0,EffectTexHeaders,9);
  puVar14 = PTR_DAT_00854aac;
  *(undefined **)((int)puVar11 + 0xbc) = PTR_DAT_00854aac;
  *(undefined **)(puVar11 + 0x17) = puVar14;
  *(undefined **)((int)puVar11 + 0xb4) = puVar14;
  *(undefined **)(puVar11 + 0x16) = puVar14;
  dVar40 = (double)MB_randRangeSigned(dVar40,0x3fa99999a0000000);
  uVar7 = EffectTexHeaders;
  lVar17 = 4;
  dVar40 = (double)(float)((double)DAT_00854b6c + dVar40);
  do {
    fVar2 = *pfVar25;
    fVar1 = (float)((double)fVar2 * dVar40);
    dVar30 = (double)fVar1;
    pfVar27 = (float *)lVar26;
    *pfVar27 = fVar1;
    dVar34 = (double)pfVar25[1];
    pfVar27[1] = (float)(dVar34 * dVar40);
    dVar36 = (double)(float)((double)pfVar25[2] * dVar40);
    pfVar27[2] = (float)((double)pfVar25[2] * dVar40);
    dVar37 = (double)pfVar25[3];
    pfVar25 = pfVar25 + 4;
    pfVar27[3] = (float)((double)fVar2 * (double)(float)(dVar40 * dVar41) + dVar37);
    *pfVar27 = (float)(dVar37 * dVar47 +
                      (double)(float)(dVar36 * dVar44 +
                                     (double)(float)(dVar30 * dVar39 +
                                                    (double)(float)(dVar34 * (double)(float)(dVar40 
                                                  * dVar32)))));
    pfVar27[1] = (float)(dVar37 * dVar46 +
                        (double)(float)(dVar36 * dVar43 +
                                       (double)(float)(dVar30 * dVar29 +
                                                      (double)(float)(dVar34 * (double)(float)(
                                                  dVar40 * dVar33)))));
    pfVar27[2] = (float)(dVar37 * dVar45 +
                        (double)(float)(dVar36 * dVar42 +
                                       (double)(float)(dVar30 * dVar31 +
                                                      (double)(float)(dVar34 * (double)(float)(
                                                  dVar40 * dVar35)))));
    uVar8 = *puVar19;
    lVar26 = lVar26 + 0x10;
    uVar9 = *puVar24;
    puVar19 = puVar19 + 2;
    *(undefined4 *)((int)lVar18 + 0xc0) = uVar8;
    puVar24 = puVar24 + 2;
    *(undefined4 *)((int)lVar18 + 0xc4) = uVar9;
    lVar18 = lVar18 + 8;
    lVar17 = lVar17 + -1;
  } while (lVar17 != 0);
  FastDrawQuad(uVar15 - 0x130,0,0,uVar7,9);
  return;
}


// 0x0406cd8 (0x7e4 bytes)
// inlined: FastRSqrt @0x406f34, FastRSqrt @0x40704c, FastRSqrt @0x4072f4
void M656_00406cd8(void)

{
  undefined8 uVar1;
  int in_r9;
  int iVar2;
  GPiece<144> local_1d0;
  GPiece<152> local_140;
  
  GetEffectTex(DAT_00854af0);
  idol_draw::PackCmd(0,2,0,1,0x80);
  SCE_GS_SET_TEX1(0,0,1,1,1,0,0xff90);
  SCE_GS_SET_CLAMP(0,0,0,0,0,0);
  GetEffectTex(DAT_00854af4);
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


// 0x04074c8 (0x1d0 bytes)
void M656_004074c8(undefined8 param_1)

{
  undefined8 uVar1;
  
  DAT_010cc074 = -(DAT_0071f408 * DAT_00854aa4 - DAT_010cc074);
  if (DAT_010cc074 <= -8.0) {
    DAT_010cc074 = DAT_010cc074 + 8.0;
  }
  M656_00406cd8((double)DAT_00854ab0,(double)DAT_00854ab4,(double)DAT_00854ae8,&DAT_010cbc00,
                DAT_00854a90,DAT_00854a98);
  M656_00406cd8((double)DAT_00854ac0,(double)DAT_00854ac4,(double)DAT_00854aec,&DAT_010cbd40,
                DAT_00854ab8,DAT_00854abc);
  uVar1 = 0x3fc99999a0000000;
  M656_00406cd8((double)DAT_00854ac0,(double)DAT_00854ac4,0x3fc99999a0000000,&DAT_010cc080,
                DAT_010cc1c8,DAT_010cc1c8);
  M656_00406cd8((double)DAT_00854ac0,(double)DAT_00854ac4,uVar1,&DAT_010cc0d0,DAT_010cc1ca,
                DAT_010cc1ca);
  M656_00406cd8((double)DAT_00854ac0,(double)DAT_00854ac4,uVar1,&DAT_010cc120,DAT_010cc1cc,
                DAT_010cc1cc);
  M656_00406cd8((double)DAT_00854ac0,(double)DAT_00854ac4,uVar1,&DAT_010cc170,DAT_010cc1ce,
                DAT_010cc1ce);
  M656_00406790(param_1);
  return;
}


// 0x0407698 (0x14 bytes)
void M656_00407698(void)

{
  DAT_00854bbc = 0x10000;
  return;
}


// 0x04076b8 (0x198 bytes)
/* Moby 656 */

void UpdateMoby_656(MobyInstance *moby)

{
  byte bVar1;
  longlong lVar2;
  char cVar4;
  int iVar3;
  double dVar5;
  
  lVar2 = (longlong)(int)moby;
  bVar1 = moby->animationId;
  if (bVar1 < 2) {
    if (bVar1 == 0) {
      if ((moby->field43_0x70 & 2U) != 0) {
        MB_SetAnimation(lVar2,1,0,0);
        dVar5 = (double)MB_randRangeFloat(180.0,240.0);
        cVar4 = FastDoubleToInt((double)(float)(dVar5 * (double)animationSpeed));
        moby->setByGroup = cVar4;
      }
    }
    else {
      iVar3 = FastDecTimerS8(lVar2 + 0xbc);
      if ((iVar3 != 0) && (moby->animationId != '\x02')) {
        MB_SetAnimation(lVar2,2,0,0);
      }
    }
  }
  else if (bVar1 < 3) {
    if ((moby->field43_0x70 & 2U) != 0) {
      if (bVar1 != 3) {
        MB_SetAnimation(lVar2,3,0,0);
      }
      dVar5 = (double)MB_randRangeFloat(180.0,240.0);
      cVar4 = FastDoubleToInt((double)(float)(dVar5 * (double)animationSpeed));
      moby->setByGroup = cVar4;
    }
  }
  else if (((bVar1 < 4) && (iVar3 = FastDecTimerS8(lVar2 + 0xbc), iVar3 != 0)) &&
          (moby->animationId != '\0')) {
    MB_SetAnimation(lVar2,0,0,0);
  }
  return;
}


