// game/update/moby1107.cpp -- reconstructed from NPEA00385 EBOOT
// STATUS: NOT STARTED (raw Ghidra output)
// 3 functions, 0x1c90b0-0x1c9524
#include "game/update/moby1107.h"
#include "game/boot.h"
#include "game/collproc.h"
#include "game/draw.h"
#include "game/hero.h"
#include "game/hud.h"
#include "game/mobyfunc.h"
#include "game/mobyutil.h"
#include "game/update/moby1106.h"
#include "game/vuchain.h"
#include "idol/fastfunc.h"

// 0x01c90b0 (0x450 bytes)
void M1107_001c90b0(void)

{
  float fVar1;
  short sVar2;
  ulonglong *puVar3;
  int iVar4;
  int iVar5;
  undefined4 uVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  undefined8 uVar9;
  undefined4 *puVar11;
  undefined4 *puVar12;
  longlong lVar10;
  undefined4 *puVar14;
  longlong lVar13;
  uint uVar15;
  ulonglong unaff_r27;
  ulonglong unaff_r28;
  int iVar16;
  ulonglong unaff_r29;
  ulonglong unaff_r30;
  int iVar17;
  ulonglong unaff_r31;
  ulonglong in_LR;
  longlong lVar18;
  double dVar19;
  ulonglong in_f28;
  ulonglong in_f29;
  double dVar20;
  ulonglong in_f30;
  double dVar21;
  ulonglong in_f31;
  double dVar22;
  
  uVar7 = ZEXT48(&stack0x00000000);
  puVar3 = (ulonglong *)(uVar7 - 0x150);
  *puVar3 = uVar7;
  puVar3[0x2c] = in_LR;
  puVar3[0x26] = in_f28;
  puVar3[0x27] = in_f29;
  puVar3[0x28] = in_f30;
  puVar3[0x29] = in_f31;
  puVar3[0x23] = unaff_r29;
  puVar3[0x25] = unaff_r31;
  puVar3[0x24] = unaff_r30;
  puVar3[0x22] = unaff_r28;
  puVar3[0x21] = unaff_r27;
  uVar8 = GetEffectTex(0x15);
  puVar3[0x1d] = uVar8;
  uVar8 = SCE_GS_SET_TEX1(0,0,1,1,1,0,0xff90);
  puVar3[0x1e] = uVar8;
  uVar8 = SCE_GS_SET_CLAMP(0,0,0,0,0,0);
  puVar3[0x1c] = uVar8;
  uVar8 = idol_draw::PackCmd(0,2,0,1,0x80);
  puVar3[0x1f] = uVar8;
  fVar1 = DAT_00eef9e8;
  DAT_00eef9e8 = DAT_00eef9e8 + 0.001;
  dVar22 = 7.0;
  if (7.0 < DAT_00eef9e8) {
    DAT_00eef9e8 = DAT_00eef9e8 - 7.0;
  }
  dVar21 = 0.30000001192092896;
  dVar20 = (double)(fVar1 + 0.3);
  uVar9 = idol_draw::Blend(1,5,1,3,0,0,1,2);
  SetGSReg(0x16,uVar9);
  uVar9 = VU1_addGSregister(GSmem.zbuf >> 0xd,1,1);
  SetGSReg(0x21,uVar9);
  uVar8 = 1;
  do {
    dVar19 = (double)DAT_00eef9ec;
    DAT_00eef9ec = (float)(dVar19 + (double)DAT_00764018);
    if (dVar22 < (double)DAT_00eef9ec) {
      DAT_00eef9ec = (float)((double)DAT_00eef9ec - dVar22);
    }
    iVar16 = 0;
    iVar17 = 0;
    do {
      iVar16 = iVar16 + 1;
      iVar5 = (int)uVar8;
      iVar4 = iVar5 * 0x140;
      puVar11 = (undefined4 *)((int)&DAT_00ef0dd0 + iVar4 + iVar17);
      *(undefined4 *)(puVar3 + 0xe) = *puVar11;
      *(undefined4 *)((int)puVar3 + 0x74) = puVar11[1];
      *(undefined4 *)(puVar3 + 0xf) = puVar11[2];
      *(undefined4 *)((int)puVar3 + 0x7c) = puVar11[3];
      puVar12 = &DAT_00ef0dd0 + (iVar16 % 0x14) * 4 + iVar5 * 0x50;
      puVar14 = (undefined4 *)(iVar17 + 0xef0c90 + iVar4);
      puVar11 = (undefined4 *)((iVar16 % 0x14) * 0x10 + 0xef0c90 + iVar4);
      *(undefined4 *)(puVar3 + 0x10) = *puVar12;
      *(undefined4 *)((int)puVar3 + 0x84) = puVar12[1];
      iVar4 = (int)((uVar8 & 0xffffffff) << 1);
      *(undefined4 *)(puVar3 + 0x11) = puVar12[2];
      *(undefined4 *)((int)puVar3 + 0x8c) = puVar12[3];
      *(undefined4 *)(puVar3 + 0x12) = *puVar14;
      *(undefined4 *)((int)puVar3 + 0x94) = puVar14[1];
      *(undefined4 *)(puVar3 + 0x13) = puVar14[2];
      *(undefined4 *)((int)puVar3 + 0x9c) = puVar14[3];
      *(undefined4 *)(puVar3 + 0x14) = *puVar11;
      *(undefined4 *)((int)puVar3 + 0xa4) = puVar11[1];
      sVar2 = *(short *)((int)&DAT_00ef0db8 + iVar4);
      *(undefined4 *)(puVar3 + 0x15) = puVar11[2];
      *(undefined4 *)((int)puVar3 + 0xac) = puVar11[3];
      lVar18 = 2;
      lVar10 = uVar7 - 0x150;
      do {
        lVar13 = (longlong)sVar2;
        lVar13 = lVar13 + (lVar13 >> 0x3f & -lVar13);
        sVar2 = *(short *)(iVar4 + 0xef0db6);
        uVar15 = (uint)((lVar13 + (0x40 - lVar13 >> 0x3f & 0x40U - lVar13) & 0xffffffff) << 0x18) |
                 0x404040;
        *(uint *)((int)lVar10 + 0xb0) = uVar15;
        *(uint *)((int)lVar10 + 0xb4) = uVar15;
        lVar10 = lVar10 + 8;
        lVar18 = lVar18 + -1;
      } while (lVar18 != 0);
      if (iVar5 == 1) {
        *(undefined4 *)((int)puVar3 + 0xbc) = 0x20404040;
        *(undefined4 *)(puVar3 + 0x17) = 0x20404040;
      }
      else if (iVar5 == 9) {
        *(undefined4 *)((int)puVar3 + 0xb4) = 0x404040;
        *(undefined4 *)(puVar3 + 0x16) = 0x404040;
      }
      *(float *)(puVar3 + 0x18) = (float)dVar20;
      *(float *)((int)puVar3 + 0xc4) = (float)dVar19;
      *(float *)(puVar3 + 0x19) = (float)dVar20;
      *(float *)((int)puVar3 + 0xd4) = (float)dVar19;
      fVar1 = (float)(dVar19 + 0.05000000074505806);
      dVar19 = (double)fVar1;
      *(float *)(puVar3 + 0x1a) = (float)(dVar20 - dVar21);
      *(float *)(puVar3 + 0x1b) = (float)(dVar20 - dVar21);
      uVar6 = EffectTexHeaders;
      *(float *)((int)puVar3 + 0xcc) = fVar1;
      *(float *)((int)puVar3 + 0xdc) = fVar1;
      FastDrawQuad(uVar7 - 0xe0,0,0,uVar6,9);
      iVar17 = iVar17 + 0x10;
    } while (iVar16 < 0x14);
    uVar8 = uVar8 + 1;
    dVar20 = (double)(float)(dVar20 + dVar21);
  } while ((int)uVar8 < 10);
  uVar9 = VU1_addGSregister(GSmem.zbuf >> 0xd,1,0);
  SetGSReg(0x21,uVar9);
  uVar9 = idol_draw::Blend(1,5,0x60,3,0,0,1,2);
  SetGSReg(0x16,uVar9);
  return;
}


// 0x01c9500 (0x14 bytes)
void M1107_001c9500(void)

{
  DAT_007641ac = 0x10000;
  return;
}


// 0x01c9520 (0x4 bytes)
/* Moby 1107 */

MobyInstance * UpdateMoby_1107(MobyInstance *moby)

{
  return moby;
}


