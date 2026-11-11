// game/update/moby1138.cpp -- reconstructed from NPEA00385 EBOOT
// STATUS: NOT STARTED (raw Ghidra output)
// 5 functions, 0x1db948-0x1dbf58
#include "game/update/moby1138.h"
#include "game/draw.h"
#include "game/freeze.h"
#include "game/hero.h"
#include "game/hud.h"
#include "game/mobyfunc.h"
#include "game/mobyutil.h"
#include "game/pause.h"
#include "game/sound.h"
#include "idol/fastfunc.h"

// 0x01db948 (0x3a0 bytes)
void M1138_001db948(int param_1)

{
  longlong lVar1;
  byte bVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  float fVar5;
  int iVar6;
  ulonglong *puVar7;
  int iVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  ulonglong uVar16;
  ulonglong uVar17;
  undefined4 *puVar18;
  int iVar19;
  undefined4 *puVar20;
  longlong lVar21;
  uint uVar22;
  longlong lVar23;
  ulonglong unaff_r28;
  ulonglong unaff_r29;
  ulonglong unaff_r30;
  ulonglong unaff_r31;
  ulonglong in_LR;
  longlong lVar24;
  double dVar25;
  ulonglong in_f27;
  ulonglong in_f28;
  ulonglong in_f29;
  ulonglong in_f30;
  ulonglong in_f31;
  double dVar26;
  
  uVar16 = ZEXT48(&stack0x00000000);
  lVar1 = uVar16 - 0x1a0;
  puVar7 = (ulonglong *)lVar1;
  *puVar7 = uVar16;
  puVar7[0x36] = in_LR;
  puVar7[0x2f] = in_f27;
  puVar7[0x30] = in_f28;
  puVar7[0x31] = in_f29;
  puVar7[0x32] = in_f30;
  puVar7[0x33] = in_f31;
  puVar7[0x2b] = unaff_r28;
  puVar7[0x2e] = unaff_r31;
  puVar7[0x2c] = unaff_r29;
  puVar7[0x2d] = unaff_r30;
  iVar6 = *(int *)(param_1 + 0x78);
  FastMtxCopyNoTranslate(uVar16 - 0x130,param_1 + 0xc0);
  uVar3 = *(undefined4 *)(param_1 + 0x14);
  *(undefined4 *)(puVar7 + 0x14) = *(undefined4 *)(param_1 + 0x10);
  uVar4 = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)((int)puVar7 + 0xa4) = uVar3;
  uVar3 = *(undefined4 *)(param_1 + 0x1c);
  *(undefined4 *)(puVar7 + 0x15) = uVar4;
  uVar4 = DAT_00764a04;
  *(undefined4 *)((int)puVar7 + 0xac) = uVar3;
  uVar17 = GetEffectTex(uVar4);
  puVar7[0x25] = uVar17;
  uVar17 = STUB_00502fd4_RET_0(0,0,1,1,1,0,0xff90);
  puVar7[0x26] = uVar17;
  uVar17 = FUN_00502f08(0,0,0,0,0,0);
  puVar7[0x24] = uVar17;
  uVar17 = idol_draw::PackCmd(DAT_00ef26e8,DAT_007649fc,DAT_00ef26ec,DAT_00764a00,0x80);
  puVar7[0x27] = uVar17;
  bVar2 = *(byte *)(param_1 + 0x20);
  puVar20 = &DAT_00764a0c;
  puVar18 = &DAT_00764a10;
  lVar24 = 4;
  lVar21 = lVar1;
  lVar23 = lVar1;
  do {
    uVar3 = *puVar20;
    uVar4 = *puVar18;
    puVar20 = puVar20 + 2;
    *(undefined4 *)((int)lVar23 + 0x100) = uVar3;
    uVar3 = DAT_00764a08;
    puVar18 = puVar18 + 2;
    *(undefined4 *)((int)lVar23 + 0x104) = uVar4;
    *(undefined4 *)((int)lVar21 + 0xf0) = uVar3;
    lVar23 = lVar23 + 8;
    lVar21 = lVar21 + 4;
    lVar24 = lVar24 + -1;
  } while (lVar24 != 0);
  dVar26 = 0.10000000149011612;
  uVar22 = (int)*(uint *)(iVar6 + 0x34) >> 0x1f;
  iVar19 = (uVar22 >> 1 ^ *(uint *)(iVar6 + 0x34)) - uVar22;
  if (iVar19 < 0x3f933333) {
    dVar26 = 1.0;
    dVar25 = (double)((1.15 - *(float *)(iVar6 + 0x34)) * 2.0);
    if ((dVar25 <= 1.0) && (dVar26 = dVar25, dVar25 < 0.0)) {
      dVar26 = 0.0;
    }
    dVar26 = (double)(float)(dVar26 + 0.10000000149011612);
    if ((bVar2 < 7) || (8 < bVar2)) {
      g_heroInvisible = (byte)((ulonglong)((longlong)iVar19 + -0x3f266666) >> 0x3f);
    }
  }
  iVar19 = 0;
  do {
    uVar22 = 0;
    lVar21 = lVar1;
    do {
      puVar7[0x28] = (longlong)
                     (int)(((int)uVar22 >> 1) + (uint)((int)uVar22 < 0 && (uVar22 & 1) != 0) +
                          iVar19);
      fVar5 = (float)(longlong)puVar7[0x28] * 0.19634938 - 3.14159;
      fVar9 = fVar5 + 1.5707963;
      fVar10 = 3.1415925 - fVar5;
      if (fVar5 - (3.1415925 - fVar5) < 0.0) {
        fVar10 = fVar5;
      }
      fVar12 = 3.1415925 - fVar9;
      if (fVar9 - (3.1415925 - fVar9) < 0.0) {
        fVar12 = fVar9;
      }
      fVar11 = -3.1415925 - fVar5;
      if ((-3.1415925 - fVar5) - fVar10 < 0.0) {
        fVar11 = fVar10;
      }
      fVar5 = -3.1415925 - fVar9;
      if ((-3.1415925 - fVar9) - fVar12 < 0.0) {
        fVar5 = fVar12;
      }
      fVar9 = fVar11 * fVar11;
      fVar10 = fVar5 * fVar5;
      fVar14 = fVar9 * fVar9 * fVar11;
      fVar12 = fVar10 * fVar10 * fVar5;
      fVar15 = fVar9 * fVar14;
      fVar13 = fVar10 * fVar12;
      iVar8 = (int)lVar21;
      *(float *)(iVar8 + 0xb0) =
           (fVar10 * fVar13 * 2.601887e-06 +
           fVar13 * -0.0001980741 + fVar12 * 0.0083330255 + fVar10 * fVar5 * -0.16666657 + fVar5) *
           *(float *)(iVar6 + 0x34);
      fVar5 = *(float *)(iVar6 + 0x34);
      *(undefined4 *)(iVar8 + 0xb8) = 0;
      *(float *)(iVar8 + 0xb4) =
           (fVar9 * fVar15 * 2.601887e-06 +
           fVar15 * -0.0001980741 + fVar14 * 0.0083330255 + fVar9 * fVar11 * -0.16666657 + fVar11) *
           fVar5;
      if ((uVar22 & 1) == 0) {
        fVar5 = (float)((double)DAT_00764a2c - dVar26);
        fVar9 = 0.0;
      }
      else {
        fVar5 = 0.0;
        fVar9 = (float)((double)DAT_00764a2c + dVar26);
      }
      uVar22 = uVar22 + 1;
      *(undefined4 *)(iVar8 + 0xbc) = 0x3f800000;
      *(float *)(iVar8 + 0xb8) = fVar9 + fVar5;
      lVar21 = lVar21 + 0x10;
    } while ((int)uVar22 < 4);
    FastDrawQuad(uVar16 - 0xf0,uVar16 - 0x130,0,EffectTexHeaders,9);
    iVar19 = iVar19 + 1;
  } while (iVar19 < 0x20);
  return;
}


// 0x01dbce8 (0x50 bytes)
void FUN_001dbce8(MobyInstance *param_1)

{
  if (param_1->state == '\x01') {
    PlayMobySound(0,0,param_1);
    param_1->state = '\a';
  }
  return;
}


// 0x01dbd38 (0x58 bytes)
undefined8 FUN_001dbd38(int param_1)

{
  byte bVar1;
  uint uVar2;
  uint uVar3;
  undefined8 uVar4;
  
  bVar1 = *(byte *)(param_1 + 0x20);
  if (bVar1 < 9 && 6 < bVar1) {
    if ((bVar1 == 8) &&
       (uVar2 = *(uint *)(*(int *)(param_1 + 0x78) + 0x34), uVar3 = (int)uVar2 >> 0x1f,
       0x3e4ccccd < (int)((uVar3 >> 1 ^ uVar2) - uVar3))) {
      uVar4 = 2;
    }
    else {
      uVar4 = 1;
    }
  }
  else {
    uVar4 = 0;
  }
  return uVar4;
}


// 0x01dbd90 (0x14 bytes)
void M1138_001dbd90(void)

{
  DAT_00764a84 = 0x10000;
  return;
}


// 0x01dbdb0 (0x1a8 bytes)
/* Moby 1138 */

void UpdateMoby_1138(MobyInstance *moby)

{
  float fVar1;
  float *pfVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  int iVar8;
  GPiece<16> local_20;
  
  if ((moby->field43_0x70 & 2U) != 0) {
    fVar1 = moby->unk58;
    moby->unk58 = 0.0;
    fVar3 = 1.0;
    if (0.0 - fVar1 < 0.0) {
      fVar3 = 0.0;
    }
    moby->animationBlend = fVar3;
  }
  if (DAT_00a15f39 != '\0') {
    if ((moby->field44_0x71 == '\x02') || (moby->field44_0x71 == '\x04')) {
      (moby->pos).x = 512.0;
    }
  }
  iVar8 = GetMenuScreen();
  if ((iVar8 == 0xf) || (iVar8 == 0x10)) {
    if ((iVar8 == 0xf) && (moby->field44_0x71 == 'm')) {
      (moby->pos).x = 512.0;
      DAT_00ef26f0 = 0xf;
    }
    if (((iVar8 == 0x10) && (DAT_00ef26f0 == 0xf)) && (moby->field44_0x71 == 'm')) {
      (moby->pos).x = 256.0;
      DAT_00ef26f0 = 0x10;
    }
  }
  pfVar2 = (float *)moby->pVar;
  GetMobyJointsWorldPos(moby,4,local_20,pfVar2);
  fVar1 = pfVar2[5] - pfVar2[1];
  fVar3 = pfVar2[9] - pfVar2[1];
  fVar4 = pfVar2[4] - *pfVar2;
  fVar5 = pfVar2[8] - *pfVar2;
  fVar6 = pfVar2[6] - pfVar2[2];
  fVar7 = pfVar2[10] - pfVar2[2];
  pfVar2[0x10] = SQRT(fVar6 * fVar6 + fVar4 * fVar4 + fVar1 * fVar1);
  pfVar2[0x11] = SQRT(fVar7 * fVar7 + fVar5 * fVar5 + fVar3 * fVar3);
  return;
}


