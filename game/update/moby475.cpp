// game/update/moby475.cpp -- reconstructed from NPEA00385 EBOOT
// STATUS: NOT STARTED (raw Ghidra output)
// 3 functions, 0x39a180-0x39a6fc
#include "game/update/moby475.h"
#include "game/camera.h"
#include "game/draw.h"
#include "game/hero.h"
#include "game/hud.h"
#include "game/mobyfunc.h"
#include "game/mobyutil.h"
#include "game/space.h"
#include "game/update.h"
#include "idol/fastfunc.h"

// 0x039a180 (0x540 bytes)
void M475_0039a180(int param_1)

{
  longlong lVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  undefined4 uVar5;
  int iVar6;
  ulonglong *puVar7;
  Cuboid *pCVar8;
  int iVar9;
  float fVar10;
  undefined4 uVar11;
  ulonglong uVar12;
  int iVar14;
  undefined4 uVar15;
  ulonglong uVar13;
  int iVar16;
  longlong lVar17;
  longlong lVar18;
  longlong lVar19;
  undefined4 *puVar20;
  undefined4 *puVar21;
  float *pfVar22;
  undefined4 *puVar23;
  ulonglong unaff_r23;
  ulonglong unaff_r24;
  longlong lVar24;
  ulonglong unaff_r25;
  ulonglong unaff_r26;
  undefined4 *puVar25;
  ulonglong unaff_r27;
  longlong lVar26;
  undefined4 *puVar27;
  ulonglong unaff_r28;
  ulonglong unaff_r29;
  ulonglong unaff_r30;
  ulonglong unaff_r31;
  ulonglong in_LR;
  double dVar28;
  double dVar29;
  ulonglong in_f30;
  ulonglong in_f31;
  double dVar30;
  
  uVar12 = ZEXT48(&stack0x00000000);
  lVar1 = uVar12 - 0x200;
  puVar7 = (ulonglong *)lVar1;
  *puVar7 = uVar12;
  puVar7[0x42] = in_LR;
  puVar7[0x3e] = in_f30;
  puVar7[0x3f] = in_f31;
  puVar7[0x3d] = unaff_r31;
  iVar6 = *(int *)(param_1 + 0x78);
  pCVar8 = Cuboids + *(int *)(iVar6 + 0x60);
  fVar2 = (pCVar8->matrix).v0.y;
  fVar3 = (pCVar8->matrix).v0.x;
  fVar4 = (pCVar8->matrix).v0.z;
  puVar7[0x3b] = unaff_r29;
  dVar30 = (double)(SQRT(fVar4 * fVar4 + fVar3 * fVar3 + fVar2 * fVar2) * 2.001);
  puVar7[0x3c] = unaff_r30;
  puVar7[0x3a] = unaff_r28;
  puVar7[0x39] = unaff_r27;
  puVar7[0x38] = unaff_r26;
  puVar7[0x37] = unaff_r25;
  puVar7[0x36] = unaff_r24;
  puVar7[0x35] = unaff_r23;
  iVar14 = FastDoubleToInt(dVar30);
  fVar2 = *(float *)(iVar6 + 0x70) + *(float *)(iVar6 + 0x6c);
  dVar30 = (double)(float)(2.0 / dVar30);
  *(float *)(iVar6 + 0x70) = fVar2;
  if (fVar2 <= 1.0) {
    if (fVar2 < 0.0) {
      *(float *)(iVar6 + 0x70) = fVar2 + 1.0;
    }
  }
  else {
    *(float *)(iVar6 + 0x70) = fVar2 - 1.0;
  }
  iVar9 = worldUpdateTime;
  puVar7[0x32] = (longlong)(int)(animationSpeed * 120.5);
  iVar16 = *(int *)((int)puVar7 + 0x194);
  dVar28 = (double)FastIntToDouble(iVar9 - (iVar9 / iVar16) * iVar16);
  dVar29 = (double)FastIntToDouble(iVar16);
  fVar2 = (float)(dVar28 / dVar29) * 6.28318 - 3.14159;
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
  fVar10 = fVar2 * fVar3;
  uVar15 = FastLerpColor
                     ((double)((fVar2 * fVar10 * 2.601887e-06 +
                               fVar10 * -0.0001980741 +
                               fVar3 * 0.0083330255 + fVar2 * fVar4 * -0.16666657 + fVar4) * 0.5 +
                              0.5),DAT_00842ea4,DAT_00842ea8);
  uVar11 = DAT_00842eac;
  uVar13 = GetEffectTex(DAT_00842e94);
  puVar7[0x1d] = uVar13;
  uVar13 = STUB_00502fd4_RET_0(0,0,1,1,1,0,0xff90);
  puVar7[0x1e] = uVar13;
  uVar13 = FUN_00502f08(0,0,0,0,0,0);
  puVar7[0x1c] = uVar13;
  uVar13 = idol_draw::PackCmd(DAT_010c9248,DAT_00842e9c,DAT_010c924c,DAT_00842ea0,0x80);
  puVar7[0x1f] = uVar13;
  uVar13 = GetEffectTex(DAT_00842e98);
  puVar7[0x2f] = uVar13;
  uVar13 = STUB_00502fd4_RET_0(0,0,1,1,1,0,0xff90);
  puVar7[0x30] = uVar13;
  uVar13 = FUN_00502f08(0,0,0,0,0,0);
  uVar5 = DAT_010c9248;
  puVar7[0x2e] = uVar13;
  uVar13 = idol_draw::PackCmd(uVar5,DAT_00842e9c,DAT_010c924c,DAT_00842ea0,0x80);
  puVar7[0x31] = uVar13;
  iVar16 = 0;
  puVar23 = &DAT_00842ed4;
  lVar26 = uVar12 - 400;
  puVar25 = &DAT_00842ef0;
  puVar20 = &DAT_00842eb0;
  puVar21 = &DAT_00842eb4;
  lVar24 = uVar12 - 0x100;
  pfVar22 = (float *)&DAT_00842ed0;
  lVar17 = lVar1;
  lVar18 = lVar1;
  lVar19 = lVar1;
  do {
    uVar5 = *puVar21;
    iVar9 = (int)lVar17;
    *(undefined4 *)(iVar9 + 0xc0) = *puVar20;
    *(undefined4 *)(iVar9 + 0xc4) = uVar5;
    fVar2 = *pfVar22;
    fVar3 = *(float *)(iVar6 + 0x70);
    uVar5 = *puVar23;
    *(undefined4 *)((int)lVar18 + 0xb0) = uVar15;
    *(undefined4 *)(iVar9 + 0x154) = uVar5;
    *(undefined4 *)((int)lVar18 + 0x140) = uVar11;
    *(float *)(iVar9 + 0x150) = fVar2 - fVar3;
    puVar27 = (undefined4 *)lVar26;
    *puVar27 = *puVar25;
    puVar27[1] = puVar25[1];
    puVar27[2] = puVar25[2];
    puVar27[3] = puVar25[3];
    puVar27 = (undefined4 *)lVar24;
    *puVar27 = *puVar25;
    puVar27[1] = puVar25[1];
    puVar27[2] = puVar25[2];
    puVar27[3] = puVar25[3];
    if (iVar16 < 2) {
      iVar9 = (int)lVar19;
      *(float *)(iVar9 + 0x70) = (float)((double)*(float *)(iVar9 + 0x70) - dVar30);
      *(float *)(iVar9 + 0x100) = (float)((double)*(float *)(iVar9 + 0x100) - dVar30);
    }
    iVar16 = iVar16 + 1;
    puVar20 = puVar20 + 2;
    lVar24 = lVar24 + 0x10;
    puVar21 = puVar21 + 2;
    lVar17 = lVar17 + 8;
    pfVar22 = pfVar22 + 2;
    lVar18 = lVar18 + 4;
    puVar23 = puVar23 + 2;
    lVar26 = lVar26 + 0x10;
    puVar25 = puVar25 + 4;
    lVar19 = lVar19 + 0x10;
  } while (iVar16 < 4);
  iVar16 = 0;
  if (0 < iVar14 + 2) {
    do {
      if (iVar16 == 0) {
        *(undefined4 *)((int)puVar7 + 0xb4) = 0;
        *(undefined4 *)(puVar7 + 0x16) = 0;
        *(undefined4 *)((int)puVar7 + 0x144) = 0;
        *(undefined4 *)(puVar7 + 0x28) = 0;
      }
      else if (iVar16 == iVar14 + 1) {
        *(undefined4 *)((int)puVar7 + 0xbc) = 0;
        *(undefined4 *)(puVar7 + 0x17) = 0;
        *(undefined4 *)((int)puVar7 + 0x14c) = 0;
        *(undefined4 *)(puVar7 + 0x29) = 0;
      }
      else if (iVar16 == 1) {
        *(undefined4 *)((int)puVar7 + 0xb4) = uVar15;
        *(undefined4 *)(puVar7 + 0x16) = uVar15;
        *(undefined4 *)((int)puVar7 + 0x144) = uVar11;
        *(undefined4 *)(puVar7 + 0x28) = uVar11;
      }
      FastDrawQuad(uVar12 - 400,Cuboids + *(int *)(iVar6 + 0x60),0,EffectTexHeaders,9);
      FastDrawQuad(uVar12 - 0x100,Cuboids + *(int *)(iVar6 + 0x60),0,EffectTexHeaders,9);
      lVar18 = 4;
      lVar17 = lVar1;
      do {
        iVar9 = (int)lVar17;
        *(float *)(iVar9 + 0x70) = (float)((double)*(float *)(iVar9 + 0x70) + dVar30);
        *(float *)(iVar9 + 0x100) = (float)((double)*(float *)(iVar9 + 0x100) + dVar30);
        lVar17 = lVar17 + 0x10;
        lVar18 = lVar18 + -1;
      } while (lVar18 != 0);
      iVar16 = iVar16 + 1;
    } while (iVar16 < iVar14 + 2);
  }
  return;
}


// 0x039a6c0 (0x14 bytes)
void M475_0039a6c0(void)

{
  DAT_00842f7c = 0x10000;
  return;
}


// 0x039a6d8 (0x24 bytes)
/* Moby 475 */

void UpdateMoby_475(MobyInstance *moby)

{
  DeleteMoby(moby);
  return;
}


