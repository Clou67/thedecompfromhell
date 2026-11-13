// game/update/moby319.cpp -- reconstructed from NPEA00385 EBOOT
// STATUS: NOT STARTED (raw Ghidra output)
// 3 functions, 0x3411d0-0x341574
#include "game/update/moby319.h"
#include "game/collproc.h"
#include "game/draw.h"
#include "game/hero.h"
#include "game/hud.h"
#include "game/mobyfunc.h"
#include "game/mobyutil.h"
#include "idol/fastfunc.h"

// 0x03411d0 (0x38c bytes)
void M319_003411d0(int param_1)

{
  longlong lVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  float fVar4;
  int iVar5;
  ulonglong *puVar6;
  int iVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  ulonglong uVar15;
  ulonglong uVar16;
  undefined4 *puVar17;
  int iVar18;
  undefined4 *puVar19;
  longlong lVar20;
  longlong lVar21;
  uint uVar22;
  ulonglong unaff_r28;
  ulonglong unaff_r29;
  ulonglong unaff_r30;
  ulonglong unaff_r31;
  ulonglong in_LR;
  longlong lVar23;
  double dVar24;
  ulonglong in_f27;
  ulonglong in_f28;
  ulonglong in_f29;
  ulonglong in_f30;
  ulonglong in_f31;
  double dVar25;
  
  uVar15 = ZEXT48(&stack0x00000000);
  lVar1 = uVar15 - 0x1a0;
  puVar6 = (ulonglong *)lVar1;
  *puVar6 = uVar15;
  puVar6[0x36] = in_LR;
  puVar6[0x2f] = in_f27;
  puVar6[0x30] = in_f28;
  puVar6[0x31] = in_f29;
  puVar6[0x32] = in_f30;
  puVar6[0x33] = in_f31;
  puVar6[0x2d] = unaff_r30;
  puVar6[0x2e] = unaff_r31;
  puVar6[0x2c] = unaff_r29;
  puVar6[0x2b] = unaff_r28;
  iVar5 = *(int *)(param_1 + 0x78);
  FastMtxCopyNoTranslate(uVar15 - 0x130,param_1 + 0xc0);
  uVar2 = *(undefined4 *)(param_1 + 0x14);
  *(undefined4 *)(puVar6 + 0x14) = *(undefined4 *)(param_1 + 0x10);
  uVar3 = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)((int)puVar6 + 0xa4) = uVar2;
  uVar2 = *(undefined4 *)(param_1 + 0x1c);
  *(undefined4 *)(puVar6 + 0x15) = uVar3;
  uVar3 = DAT_0083bc68;
  *(undefined4 *)((int)puVar6 + 0xac) = uVar2;
  uVar16 = GetEffectTex(uVar3);
  puVar6[0x25] = uVar16;
  uVar16 = SCE_GS_SET_TEX1(0,0,1,1,1,0,0xff90);
  puVar6[0x26] = uVar16;
  uVar16 = SCE_GS_SET_CLAMP(0,0,0,0,0,0);
  puVar6[0x24] = uVar16;
  uVar16 = idol_draw::PackCmd(DAT_010c1080,DAT_0083bc60,DAT_010c1084,DAT_0083bc64,0x80);
  puVar6[0x27] = uVar16;
  puVar19 = &DAT_0083bc70;
  puVar17 = &DAT_0083bc74;
  lVar23 = 4;
  lVar20 = lVar1;
  lVar21 = lVar1;
  do {
    uVar2 = *puVar17;
    *(undefined4 *)((int)lVar21 + 0x100) = *puVar19;
    uVar3 = DAT_0083bc6c;
    puVar19 = puVar19 + 2;
    puVar17 = puVar17 + 2;
    *(undefined4 *)((int)lVar21 + 0x104) = uVar2;
    *(undefined4 *)((int)lVar20 + 0xf0) = uVar3;
    lVar21 = lVar21 + 8;
    lVar20 = lVar20 + 4;
    lVar23 = lVar23 + -1;
  } while (lVar23 != 0);
  dVar25 = 0.10000000149011612;
  uVar22 = (int)*(uint *)(iVar5 + 0x3c) >> 0x1f;
  iVar18 = (uVar22 >> 1 ^ *(uint *)(iVar5 + 0x3c)) - uVar22;
  if (iVar18 < 0x3f933333) {
    dVar25 = 1.0;
    dVar24 = (double)((1.15 - *(float *)(iVar5 + 0x3c)) * 2.0);
    if ((dVar24 <= 1.0) && (dVar25 = dVar24, dVar24 < 0.0)) {
      dVar25 = 0.0;
    }
    dVar25 = (double)(float)(dVar25 + 0.10000000149011612);
    g_heroInvisible = (byte)((ulonglong)((longlong)iVar18 + -0x3f266666) >> 0x3f);
  }
  iVar18 = 0;
  do {
    uVar22 = 0;
    lVar20 = lVar1;
    do {
      puVar6[0x28] = (longlong)
                     (int)(((int)uVar22 >> 1) + (uint)((int)uVar22 < 0 && (uVar22 & 1) != 0) +
                          iVar18);
      fVar4 = (float)(longlong)puVar6[0x28] * 0.19634938 - 3.14159;
      fVar8 = fVar4 + 1.5707963;
      fVar9 = 3.1415925 - fVar4;
      if (fVar4 - (3.1415925 - fVar4) < 0.0) {
        fVar9 = fVar4;
      }
      fVar11 = 3.1415925 - fVar8;
      if (fVar8 - (3.1415925 - fVar8) < 0.0) {
        fVar11 = fVar8;
      }
      fVar10 = -3.1415925 - fVar4;
      if ((-3.1415925 - fVar4) - fVar9 < 0.0) {
        fVar10 = fVar9;
      }
      fVar4 = -3.1415925 - fVar8;
      if ((-3.1415925 - fVar8) - fVar11 < 0.0) {
        fVar4 = fVar11;
      }
      fVar8 = fVar10 * fVar10;
      fVar9 = fVar4 * fVar4;
      fVar13 = fVar8 * fVar8 * fVar10;
      fVar11 = fVar9 * fVar9 * fVar4;
      fVar14 = fVar8 * fVar13;
      fVar12 = fVar9 * fVar11;
      iVar7 = (int)lVar20;
      *(float *)(iVar7 + 0xb0) =
           (fVar9 * fVar12 * 2.601887e-06 +
           fVar12 * -0.0001980741 + fVar11 * 0.0083330255 + fVar9 * fVar4 * -0.16666657 + fVar4) *
           *(float *)(iVar5 + 0x3c);
      fVar4 = *(float *)(iVar5 + 0x3c);
      *(undefined4 *)(iVar7 + 0xb8) = 0;
      *(float *)(iVar7 + 0xb4) =
           (fVar8 * fVar14 * 2.601887e-06 +
           fVar14 * -0.0001980741 + fVar13 * 0.0083330255 + fVar8 * fVar10 * -0.16666657 + fVar10) *
           fVar4;
      if ((uVar22 & 1) == 0) {
        fVar4 = (float)((double)DAT_0083bc90 - dVar25);
        fVar8 = 0.0;
      }
      else {
        fVar4 = 0.0;
        fVar8 = (float)((double)DAT_0083bc90 + dVar25);
      }
      uVar22 = uVar22 + 1;
      *(undefined4 *)(iVar7 + 0xbc) = 0x3f800000;
      *(float *)(iVar7 + 0xb8) = fVar8 + fVar4;
      lVar20 = lVar20 + 0x10;
    } while ((int)uVar22 < 4);
    FastDrawQuad(uVar15 - 0xf0,uVar15 - 0x130,0,EffectTexHeaders,9);
    iVar18 = iVar18 + 1;
  } while (iVar18 < 0x20);
  return;
}


// 0x034155c (0x14 bytes)
void M319_0034155c(void)

{
  DAT_0083bce8 = 0x10000;
  return;
}


// 0x0341570 (0x4 bytes)
/* Moby 319 */

MobyInstance * UpdateMoby_319(MobyInstance *moby)

{
  return moby;
}


