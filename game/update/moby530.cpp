// game/update/moby530.cpp -- reconstructed from NPEA00385 EBOOT
// STATUS: NOT STARTED (raw Ghidra output)
// 3 functions, 0x3abc80-0x3ac61c
#include "game/update/moby530.h"
#include "game/camera.h"
#include "game/collproc.h"
#include "game/draw.h"
#include "game/freeze.h"
#include "game/hero.h"
#include "game/hud.h"
#include "game/initspace.h"
#include "game/mobyfunc.h"
#include "game/mobyutil.h"
#include "idol/fastfunc.h"

// 0x03abc80 (0x14 bytes)
void M530_003abc80(void)

{
  DAT_008437e8 = 0x10000;
  return;
}


// 0x03abcb8 (0x88c bytes)
// inlined: FastRSqrt @0x3ac018, FastRSqrt @0x3ac12c
void M530_003abcb8(int param_1)

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
  undefined4 uVar17;
  short sVar18;
  float *pfVar19;
  ulonglong *puVar20;
  int iVar21;
  ulonglong uVar22;
  ulonglong uVar23;
  float *pfVar25;
  undefined4 *puVar26;
  longlong lVar24;
  undefined4 *puVar28;
  longlong lVar27;
  float *pfVar29;
  undefined4 *puVar30;
  short *psVar31;
  float *pfVar32;
  float *pfVar33;
  float *pfVar34;
  float *pfVar35;
  float *pfVar36;
  int iVar37;
  ulonglong unaff_r27;
  short *psVar38;
  ulonglong unaff_r28;
  ulonglong unaff_r29;
  ulonglong unaff_r30;
  undefined4 *puVar39;
  ulonglong unaff_r31;
  int iVar40;
  ulonglong in_LR;
  longlong lVar41;
  double dVar42;
  double dVar43;
  double dVar44;
  double dVar45;
  double dVar46;
  double dVar47;
  double dVar48;
  double dVar49;
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
  ulonglong in_f26;
  ulonglong in_f27;
  ulonglong in_f28;
  ulonglong in_f29;
  double dVar50;
  ulonglong in_f30;
  ulonglong in_f31;
  double dVar51;
  GPiece<16> auVar52;
  GPiece<16> auVar53;
  GPiece<16> auVar54;
  
  uVar22 = ZEXT48(&stack0x00000000);
  puVar20 = (ulonglong *)(uVar22 - 0x1f0);
  *puVar20 = uVar22;
  puVar20[0x40] = in_LR;
  puVar20[0x2c] = in_f14;
  puVar20[0x2d] = in_f15;
  puVar20[0x2e] = in_f16;
  puVar20[0x2f] = in_f17;
  puVar20[0x30] = in_f18;
  puVar20[0x31] = in_f19;
  puVar20[0x32] = in_f20;
  puVar20[0x33] = in_f21;
  puVar20[0x34] = in_f22;
  puVar20[0x35] = in_f23;
  puVar20[0x36] = in_f24;
  puVar20[0x37] = in_f25;
  puVar20[0x38] = in_f26;
  puVar20[0x39] = in_f27;
  puVar20[0x3a] = in_f28;
  puVar20[0x3b] = in_f29;
  puVar20[0x3c] = in_f30;
  puVar20[0x3d] = in_f31;
  puVar20[0x2a] = unaff_r30;
  puVar20[0x2b] = unaff_r31;
  puVar20[0x29] = unaff_r29;
  uVar17 = DAT_0084550c;
  pfVar19 = *(float **)(param_1 + 0x78);
  puVar20[0x28] = unaff_r28;
  puVar20[0x27] = unaff_r27;
  uVar23 = GetEffectTex(uVar17);
  puVar20[0x1d] = uVar23;
  uVar23 = SCE_GS_SET_TEX1(0,0,1,1,1,0,0xff90);
  puVar20[0x1e] = uVar23;
  uVar23 = SCE_GS_SET_CLAMP(0,0,0,0,0,0);
  puVar20[0x1c] = uVar23;
  uVar23 = idol_draw::PackCmd(DAT_010c9f30,DAT_00845500,DAT_010c9f34,DAT_00845504,DAT_00845508);
  puVar20[0x1f] = uVar23;
  uVar17 = DAT_00845510;
  fVar1 = *(float *)(param_1 + 0x10);
  *(undefined4 *)((int)puVar20 + 0xbc) = DAT_00845510;
  *(undefined4 *)(puVar20 + 0x17) = uVar17;
  *(undefined4 *)((int)puVar20 + 0xb4) = uVar17;
  *(undefined4 *)(puVar20 + 0x16) = uVar17;
  iVar40 = 0;
  if (((ABS(GameCamera.posX - fVar1) < 16.0) &&
      (ABS(GameCamera.posY - *(float *)(param_1 + 0x14)) < 16.0)) ||
     (*(char *)(param_1 + 0x20) == '\x01')) {
    *(undefined1 *)(param_1 + 0xbc) = 1;
    FastDecTimerS32(ZEXT48(pfVar19) + 0x40);
    dVar42 = (double)FastIntToDouble(pfVar19[0x10]);
    puVar20[0x24] = (longlong)(int)(animationSpeed * 60.5);
    dVar43 = (double)FastIntToDouble(*(undefined4 *)((int)puVar20 + 0x124));
    dVar50 = 0.0;
    dVar44 = (double)GameCamera.posX;
    dVar45 = (double)GameCamera.posY;
    pfVar25 = (float *)&DAT_010c9c00;
    pfVar34 = (float *)&DAT_010c98d0;
    iVar37 = 0;
    puVar20[0x20] = (ulonglong)(double)GameCamera.posZ;
    puVar20[0x22] = (ulonglong)dVar44;
    pfVar33 = (float *)&DAT_010c9270;
    puVar20[0x21] = (ulonglong)dVar45;
    pfVar35 = (float *)&DAT_00843810;
    pfVar36 = (float *)&DAT_00844a00;
    puVar20[0x23] = 0x3fb99999a0000000;
    pfVar29 = (float *)&DAT_010c9c04;
    pfVar32 = (float *)&DAT_010c98d4;
    do {
      fVar2 = pfVar35[1];
      fVar3 = *pfVar35;
      fVar4 = pfVar35[2];
      fVar5 = pfVar35[3];
      fVar6 = pfVar19[6];
      fVar7 = pfVar19[2];
      fVar8 = pfVar19[10];
      fVar9 = pfVar19[0xe];
      fVar10 = pfVar19[3];
      fVar11 = pfVar19[7];
      fVar12 = pfVar19[0xb];
      fVar14 = pfVar19[0xc] * fVar5 + pfVar19[8] * fVar4 + *pfVar19 * fVar3 + pfVar19[4] * fVar2;
      fVar1 = pfVar19[0xd] * fVar5 + pfVar19[9] * fVar4 + pfVar19[1] * fVar3 + pfVar19[5] * fVar2;
      fVar13 = pfVar19[0xf];
      *pfVar33 = fVar14;
      pfVar33[1] = fVar1;
      fVar1 = (float)((double)fVar1 - (double)puVar20[0x21]);
      fVar8 = fVar9 * fVar5 + fVar8 * fVar4 + fVar7 * fVar3 + fVar6 * fVar2;
      fVar6 = (float)((double)fVar14 - (double)puVar20[0x22]);
      fVar7 = (float)((double)fVar8 - (double)puVar20[0x20]);
      pfVar33[2] = fVar8;
      fVar8 = fVar7 * fVar7 + fVar6 * fVar6 + fVar1 * fVar1;
      pfVar33[3] = fVar13 * fVar5 + fVar12 * fVar4 + fVar10 * fVar3 + fVar11 * fVar2;
      dVar44 = dVar50;
      dVar45 = dVar50;
      dVar51 = dVar50;
      if (SQRT(fVar8) != 0.0) {
        fVar2 = 1.0 / SQRT(fVar8);
        fVar2 = -(fVar8 * fVar2 * fVar2 - 1.0) * fVar2 * 0.5 + fVar2;
        fVar2 = -(fVar8 * fVar2 * fVar2 - 1.0) * fVar2 * 0.5 + fVar2;
        fVar2 = -(fVar8 * fVar2 * fVar2 - 1.0) * fVar2 * 0.5 + fVar2;
        dVar51 = (double)(fVar6 * fVar2);
        dVar44 = (double)(fVar1 * fVar2);
        dVar45 = (double)(fVar7 * fVar2);
      }
      fVar1 = pfVar36[1];
      fVar6 = *pfVar36;
      fVar7 = pfVar36[2];
      fVar2 = pfVar36[3];
      fVar4 = pfVar19[0xd] * fVar2 + pfVar19[9] * fVar7 + pfVar19[1] * fVar6 + pfVar19[5] * fVar1;
      fVar3 = pfVar19[0xc] * fVar2 + pfVar19[8] * fVar7 + *pfVar19 * fVar6 + pfVar19[4] * fVar1;
      fVar6 = pfVar19[0xe] * fVar2 + pfVar19[10] * fVar7 + pfVar19[2] * fVar6 + pfVar19[6] * fVar1;
      dVar46 = (double)SQRT(fVar6 * fVar6 + fVar3 * fVar3 + fVar4 * fVar4);
      fVar1 = (float)((double)puVar20[0x23] / dVar46);
      dVar47 = dVar50;
      if (0.0 - dVar46 < 0.0) {
        dVar47 = (double)(fVar4 * fVar1);
      }
      dVar48 = dVar50;
      if (0.0 - dVar46 < 0.0) {
        dVar48 = (double)(fVar3 * fVar1);
      }
      dVar49 = dVar50;
      if (0.0 - dVar46 < 0.0) {
        dVar49 = (double)(fVar6 * fVar1);
      }
      if (dVar46 - 0.0 < 0.0) {
        dVar47 = (double)(fVar4 * fVar1);
      }
      if (dVar46 - 0.0 < 0.0) {
        dVar48 = (double)(fVar3 * fVar1);
      }
      if (dVar46 - 0.0 < 0.0) {
        dVar49 = (double)(fVar6 * fVar1);
      }
      dVar46 = (double)((float)(dVar49 * dVar45 +
                               (double)(float)(dVar48 * dVar51 + (double)(float)(dVar47 * dVar44)))
                       * 2.0);
      fVar1 = -(float)(dVar47 * dVar46 - dVar44);
      fVar2 = -(float)(dVar48 * dVar46 - dVar51);
      fVar6 = -(float)(dVar49 * dVar46 - dVar45);
      fVar7 = fVar6 * fVar6 + fVar2 * fVar2 + fVar1 * fVar1;
      dVar44 = dVar50;
      dVar45 = dVar50;
      dVar51 = dVar50;
      if (SQRT(fVar7) != 0.0) {
        fVar3 = 1.0 / SQRT(fVar7);
        fVar3 = -(fVar7 * fVar3 * fVar3 - 1.0) * fVar3 * 0.5 + fVar3;
        fVar3 = -(fVar7 * fVar3 * fVar3 - 1.0) * fVar3 * 0.5 + fVar3;
        fVar3 = -(fVar7 * fVar3 * fVar3 - 1.0) * fVar3 * 0.5 + fVar3;
        dVar45 = (double)(fVar3 * fVar2);
        dVar44 = (double)(fVar3 * fVar1);
        dVar51 = (double)(fVar3 * fVar6);
      }
      dVar51 = (double)(SQRT((float)(dVar51 + 1.0) * 2.0) * 2.0);
      fVar1 = (float)(dVar45 / dVar51) + 0.5;
      fVar6 = (float)(dVar44 / dVar51) + 0.5;
      if ((*(char *)(param_1 + 0x20) == '\x01') || (pfVar19[0x10] == 0.0)) {
        *pfVar34 = fVar1;
        *pfVar32 = fVar6;
      }
      else {
        fVar7 = *pfVar29;
        *pfVar34 = (*pfVar25 - fVar1) * (float)(dVar42 / dVar43) + fVar1;
        *pfVar32 = (fVar7 - fVar6) * (float)(dVar42 / dVar43) + fVar6;
      }
      iVar37 = iVar37 + 1;
      pfVar33 = pfVar33 + 4;
      pfVar35 = pfVar35 + 4;
      pfVar36 = pfVar36 + 4;
      pfVar25 = pfVar25 + 2;
      pfVar34 = pfVar34 + 2;
      pfVar29 = pfVar29 + 2;
      pfVar32 = pfVar32 + 2;
    } while (iVar37 < 0x66);
    if (*(char *)(param_1 + 0x20) == '\x01') {
      *(undefined1 *)(param_1 + 0x20) = 2;
    }
  }
  else {
    if (*(char *)(param_1 + 0xbc) == '\x01') {
      *(undefined1 *)(param_1 + 0xbc) = 0;
      puVar39 = &DAT_010c98d0;
      puVar26 = &DAT_010c9c00;
      iVar37 = 0;
      pfVar25 = (float *)&DAT_010c9270;
      pfVar34 = (float *)&DAT_00843810;
      puVar28 = &DAT_010c98d4;
      puVar30 = &DAT_010c9c04;
      do {
        uVar17 = *puVar28;
        *puVar26 = *puVar39;
        *puVar30 = uVar17;
        fVar1 = pfVar34[1];
        fVar6 = pfVar19[5];
        fVar7 = *pfVar34;
        fVar2 = pfVar19[6];
        fVar3 = pfVar19[1];
        fVar4 = pfVar19[7];
        fVar5 = pfVar19[2];
        iVar37 = iVar37 + 1;
        puVar39 = puVar39 + 2;
        fVar8 = pfVar34[2];
        fVar9 = pfVar19[3];
        fVar10 = pfVar19[9];
        fVar11 = pfVar19[10];
        fVar12 = pfVar34[3];
        puVar26 = puVar26 + 2;
        fVar13 = pfVar19[0xb];
        puVar28 = puVar28 + 2;
        fVar14 = pfVar19[0xd];
        puVar30 = puVar30 + 2;
        pfVar34 = pfVar34 + 4;
        fVar15 = pfVar19[0xe];
        fVar16 = pfVar19[0xf];
        *pfVar25 = pfVar19[0xc] * fVar12 +
                   pfVar19[8] * fVar8 + *pfVar19 * fVar7 + pfVar19[4] * fVar1;
        pfVar25[1] = fVar14 * fVar12 + fVar10 * fVar8 + fVar3 * fVar7 + fVar6 * fVar1;
        pfVar25[2] = fVar15 * fVar12 + fVar11 * fVar8 + fVar5 * fVar7 + fVar2 * fVar1;
        pfVar25[3] = fVar16 * fVar12 + fVar13 * fVar8 + fVar9 * fVar7 + fVar4 * fVar1;
        pfVar25 = pfVar25 + 4;
      } while (iVar37 < 0x66);
    }
    else {
      pfVar25 = (float *)&DAT_010c9270;
      pfVar34 = (float *)&DAT_00843810;
      lVar24 = 0x66;
      do {
        fVar1 = pfVar34[1];
        fVar6 = pfVar19[5];
        fVar7 = *pfVar34;
        fVar2 = pfVar19[6];
        fVar3 = pfVar19[1];
        fVar4 = pfVar19[7];
        fVar5 = pfVar19[2];
        fVar8 = pfVar34[2];
        fVar9 = pfVar19[3];
        fVar10 = pfVar19[9];
        fVar11 = pfVar19[10];
        fVar12 = pfVar34[3];
        fVar13 = pfVar19[0xb];
        pfVar34 = pfVar34 + 4;
        fVar14 = pfVar19[0xd];
        fVar15 = pfVar19[0xe];
        fVar16 = pfVar19[0xf];
        *pfVar25 = pfVar19[0xc] * fVar12 +
                   pfVar19[8] * fVar8 + *pfVar19 * fVar7 + pfVar19[4] * fVar1;
        pfVar25[1] = fVar14 * fVar12 + fVar10 * fVar8 + fVar3 * fVar7 + fVar6 * fVar1;
        pfVar25[2] = fVar15 * fVar12 + fVar11 * fVar8 + fVar5 * fVar7 + fVar2 * fVar1;
        pfVar25[3] = fVar16 * fVar12 + fVar13 * fVar8 + fVar9 * fVar7 + fVar4 * fVar1;
        pfVar25 = pfVar25 + 4;
        lVar24 = lVar24 + -1;
      } while (lVar24 != 0);
    }
    auVar52 = ZEXT416(0xffffffff);
    auVar52 = auVar52 | auVar52 << 0x20 | auVar52 << 0x40 | auVar52 << 0x60;
    auVar53 = vectorShiftLeftIntegerWord(auVar52,auVar52);
    auVar52 = loadVectorLeftIndexed(4,0x3abc98);
    auVar52 = auVar52 >> 0x60 & (GPiece<16>)0xffffffff;
    auVar54 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
    auVar52 = vectorMultiplyAddFloatingPoint
                        (auVar54,auVar52 | auVar52 << 0x20 | auVar52 << 0x40 | auVar52 << 0x60,
                         auVar53);
    auVar52 = vectorConvertToSignedFixedPointWordSaturate(auVar52,0);
    auVar52 = auVar52 >> 0x60 & (GPiece<16>)0xffffffff;
    uVar17 = storeVectorElementWordIndexed
                       (auVar52 | auVar52 << 0x20 | auVar52 << 0x40 | auVar52 << 0x60,0x40,
                        ZEXT48(pfVar19));
    *(undefined4 *)((uint)(pfVar19 + 0x10) & 0xfffffffc) = uVar17;
  }
  psVar38 = &DAT_00843e70;
  do {
    lVar27 = uVar22 - 0x180;
    lVar41 = 4;
    lVar24 = uVar22 - 0x1f0;
    psVar31 = psVar38;
    do {
      sVar18 = *psVar31;
      psVar31 = psVar31 + 3;
      iVar21 = (int)((longlong)sVar18 << 4);
      iVar37 = (int)((longlong)sVar18 << 3);
      puVar26 = (undefined4 *)lVar27;
      *puVar26 = *(undefined4 *)((int)&DAT_010c9270 + iVar21);
      puVar26[1] = *(undefined4 *)((int)&DAT_010c9274 + iVar21);
      puVar26[2] = *(undefined4 *)((int)&DAT_010c9278 + iVar21);
      puVar26[3] = *(undefined4 *)((int)&DAT_010c927c + iVar21);
      uVar17 = *(undefined4 *)((int)&DAT_010c98d4 + iVar37);
      lVar27 = lVar27 + 0x10;
      *(undefined4 *)((int)lVar24 + 0xc0) = *(undefined4 *)((int)&DAT_010c98d0 + iVar37);
      *(undefined4 *)((int)lVar24 + 0xc4) = uVar17;
      lVar24 = lVar24 + 8;
      lVar41 = lVar41 + -1;
    } while (lVar41 != 0);
    FastDrawQuad(uVar22 - 0x180,0,0,EffectTexHeaders,9);
    iVar40 = iVar40 + 1;
    psVar38 = psVar38 + 0xc;
  } while (iVar40 < 0x4a);
  return;
}


// 0x03ac544 (0xd8 bytes)
/* Moby 530 */

void UpdateMoby_530(MobyInstance *moby)

{
  void *pvVar1;
  
  pvVar1 = moby->pVar;
  if (moby->state == '\0') {
    moby->state = '\x01';
    moby->setByGroup = '\x01';
    *(undefined4 *)((int)pvVar1 + 0x40) = 0;
  }
  if ((g_gameMode == GAME_MODE_SCENE) && ((g_SceneId < 3 || (g_SceneId == 4)))) {
    moby->enabled = '\0';
    moby->modeBits = moby->modeBits | DISABLED;
  }
  else {
    moby->enabled = '\x01';
    moby->modeBits =
         moby->modeBits &
         (MIRROR|CAN_BE_DAMAGED|HIDE_BACKFACES|CAN_BE_AUTO_TARGETED|DISABLE_Z_WRITE|DRAW_SHADOW|
          DRAW_TRANSPARENT_WEIRD|LOCK_ROTATION|NO_DRAW|UNK_40|HAS_SPECIAL_VARS|HAS_GLOW|TRANSPARENT|
          NO_POST_UPDATE|NO_UPDATE);
  }
  GetBoneTransformations(moby,0,pvVar1);
  if (moby->enabled != '\0') {
    RegisterPostDraw(&PTR_M530_003abcb8_0070d0b8,moby);
  }
  return;
}


