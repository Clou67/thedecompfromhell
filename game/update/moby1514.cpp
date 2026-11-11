// game/update/moby1514.cpp -- reconstructed from NPEA00385 EBOOT
// STATUS: NOT STARTED (raw Ghidra output)
// 3 functions, 0x290e8c-0x29125c
#include "game/update/moby1514.h"
#include "game/draw.h"
#include "game/hero.h"
#include "game/hud.h"
#include "game/mobyfunc.h"
#include "game/mobyutil.h"
#include "game/update/moby1513.h"
#include "idol/fastfunc.h"

// 0x0290e8c (0x3b4 bytes)
void M1514_00290e8c(int param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  float fVar3;
  float fVar4;
  int iVar5;
  ulonglong *puVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  longlong lVar9;
  longlong lVar10;
  undefined4 *puVar11;
  undefined4 *puVar12;
  longlong lVar13;
  ulonglong unaff_r23;
  ulonglong unaff_r24;
  ulonglong unaff_r25;
  int iVar14;
  ulonglong unaff_r26;
  int iVar15;
  ulonglong unaff_r27;
  int iVar16;
  ulonglong unaff_r28;
  ulonglong unaff_r29;
  ulonglong unaff_r30;
  ulonglong unaff_r31;
  ulonglong in_LR;
  longlong lVar17;
  ulonglong in_f30;
  double dVar18;
  ulonglong in_f31;
  double dVar19;
  
  uVar7 = ZEXT48(&stack0x00000000);
  lVar13 = uVar7 - 0x1e0;
  puVar6 = (ulonglong *)lVar13;
  *puVar6 = uVar7;
  puVar6[0x3e] = in_LR;
  puVar6[0x3a] = in_f30;
  puVar6[0x3b] = in_f31;
  puVar6[0x38] = unaff_r30;
  uVar1 = DAT_007ab3d0;
  iVar5 = *(int *)(param_1 + 0x78);
  puVar6[0x39] = unaff_r31;
  puVar6[0x37] = unaff_r29;
  puVar6[0x36] = unaff_r28;
  puVar6[0x35] = unaff_r27;
  puVar6[0x34] = unaff_r26;
  puVar6[0x33] = unaff_r25;
  puVar6[0x32] = unaff_r24;
  puVar6[0x31] = unaff_r23;
  uVar8 = GetEffectTex(uVar1);
  puVar6[0x2d] = uVar8;
  uVar8 = STUB_00502fd4_RET_0(0,0,1,1,1,0,0xff90);
  puVar6[0x2e] = uVar8;
  uVar8 = FUN_00502f08(0,0,0,0,0,0);
  puVar6[0x2c] = uVar8;
  uVar8 = idol_draw::PackCmd(DAT_00fadb50,DAT_007ab3c8,DAT_00fadb54,DAT_007ab3cc,0x80);
  puVar6[0x2f] = uVar8;
  lVar10 = uVar7 - 0xa0;
  lVar9 = uVar7 - 0x9c;
  lVar17 = 2;
  puVar12 = &DAT_007ab3a8;
  puVar11 = &DAT_007ab3ac;
  do {
    uVar1 = *puVar11;
    *(undefined4 *)((int)lVar13 + 0x140) = *puVar12;
    uVar2 = puVar12[2];
    *(undefined4 *)((int)lVar13 + 0x144) = uVar1;
    uVar1 = puVar11[2];
    puVar12 = puVar12 + 4;
    *(undefined4 *)((int)lVar10 + 8) = uVar2;
    puVar11 = puVar11 + 4;
    *(undefined4 *)((int)lVar9 + 8) = uVar1;
    lVar10 = lVar10 + 0x10;
    lVar9 = lVar9 + 0x10;
    lVar13 = lVar13 + 0x10;
    lVar17 = lVar17 + -1;
  } while (lVar17 != 0);
  iVar14 = 0;
  iVar16 = iVar5;
  do {
    iVar15 = iVar16 + 0x10;
    FastEulerToMtx1(uVar7 - 0x170,iVar15);
    *(undefined4 *)(puVar6 + 0x14) = *(undefined4 *)(iVar5 + 0x50);
    *(undefined4 *)((int)puVar6 + 0xa4) = *(undefined4 *)(iVar5 + 0x54);
    *(undefined4 *)(puVar6 + 0x15) = *(undefined4 *)(iVar5 + 0x58);
    *(undefined4 *)((int)puVar6 + 0xac) = *(undefined4 *)(iVar5 + 0x5c);
    uVar1 = *(undefined4 *)(iVar5 + 0x40);
    *(undefined4 *)((int)puVar6 + 0xac) = 0x3f800000;
    *(undefined4 *)(puVar6 + 0x15) = uVar1;
    *(float *)(iVar16 + 0x10) = -*(float *)(iVar16 + 0x10);
    FastEulerToMtx1(uVar7 - 0x130,iVar15);
    *(undefined4 *)(puVar6 + 0x1c) = *(undefined4 *)(puVar6 + 0x14);
    *(undefined4 *)((int)puVar6 + 0xe4) = *(undefined4 *)((int)puVar6 + 0xa4);
    *(undefined4 *)(puVar6 + 0x1d) = *(undefined4 *)(puVar6 + 0x15);
    *(undefined4 *)((int)puVar6 + 0xec) = *(undefined4 *)((int)puVar6 + 0xac);
    fVar3 = *(float *)(iVar16 + 0x10);
    *(undefined4 *)(puVar6 + 0x26) = DAT_007ab398;
    uVar1 = DAT_007ab398;
    *(float *)(iVar16 + 0x10) = -fVar3;
    puVar11 = &DAT_00fada80;
    *(undefined4 *)((int)puVar6 + 0x134) = uVar1;
    uVar1 = DAT_007ab398;
    dVar19 = (double)DAT_007ab384;
    iVar16 = 0;
    *(undefined4 *)(puVar6 + 0x27) = DAT_007ab398;
    *(undefined4 *)((int)puVar6 + 0x13c) = uVar1;
    *(float *)(puVar6 + 0x16) = -*(float *)(puVar6 + 0x16);
    *(float *)((int)puVar6 + 0xb4) = -*(float *)((int)puVar6 + 0xb4);
    *(float *)(puVar6 + 0x17) = -*(float *)(puVar6 + 0x17);
    *(float *)(puVar6 + 0x18) = -*(float *)(puVar6 + 0x18);
    *(float *)((int)puVar6 + 0xc4) = -*(float *)((int)puVar6 + 0xc4);
    *(float *)(puVar6 + 0x19) = -*(float *)(puVar6 + 0x19);
    dVar18 = (double)*(float *)(iVar5 + 0x4c);
    dVar19 = (double)(float)(dVar18 - dVar19);
    do {
      fVar3 = (float)puVar11[1];
      iVar16 = iVar16 + 1;
      *(float *)((int)puVar6 + 0xf4) = (float)((double)fVar3 * dVar19);
      fVar4 = (float)puVar11[2];
      *(undefined4 *)((int)puVar6 + 0xfc) = 0x3f800000;
      *(undefined4 *)(puVar6 + 0x1e) = 0x3d4ccccd;
      *(float *)((int)puVar6 + 0x104) = (float)((double)fVar3 * dVar18);
      *(undefined4 *)((int)puVar6 + 0x10c) = 0x3f800000;
      *(undefined4 *)(puVar6 + 0x20) = 0xbd4ccccd;
      *(float *)(puVar6 + 0x1f) = (float)((double)fVar4 * dVar19);
      *(float *)(puVar6 + 0x21) = (float)((double)fVar4 * dVar18);
      uVar1 = EffectTexHeaders;
      fVar3 = (float)(&DAT_00fada84)[(iVar16 % 0xd) * 4];
      *(float *)((int)puVar6 + 0x114) = (float)((double)fVar3 * dVar19);
      fVar4 = (float)(&DAT_00fada88)[(iVar16 % 0xd) * 4];
      *(undefined4 *)((int)puVar6 + 0x11c) = 0x3f800000;
      *(undefined4 *)(puVar6 + 0x22) = 0x3d4ccccd;
      *(float *)((int)puVar6 + 0x124) = (float)((double)fVar3 * dVar18);
      *(undefined4 *)((int)puVar6 + 300) = 0x3f800000;
      *(undefined4 *)(puVar6 + 0x24) = 0xbd4ccccd;
      *(float *)(puVar6 + 0x23) = (float)((double)fVar4 * dVar19);
      *(float *)(puVar6 + 0x25) = (float)((double)fVar4 * dVar18);
      FastDrawQuad(uVar7 - 0xf0,uVar7 - 0x170,0,uVar1,9);
      FastDrawQuad(uVar7 - 0xf0,uVar7 - 0x130,0,EffectTexHeaders,9);
      puVar11 = puVar11 + 4;
    } while (iVar16 < 0xd);
    iVar14 = iVar14 + 1;
    iVar16 = iVar15;
  } while (iVar14 < 3);
  return;
}


// 0x0291240 (0x14 bytes)
void M1514_00291240(void)

{
  DAT_007ab420 = 0x10000;
  return;
}


// 0x0291258 (0x4 bytes)
/* Moby 1514 */

MobyInstance * UpdateMoby_1514(MobyInstance *moby)

{
  return moby;
}


