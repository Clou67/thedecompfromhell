// game/update/moby1198.cpp -- reconstructed from NPEA00385 EBOOT
// STATUS: NOT STARTED (raw Ghidra output)
// 3 functions, 0x1f6448-0x1f6ee8
#include "game/update/moby1198.h"
#include "game/collproc.h"
#include "game/debug.h"
#include "game/draw.h"
#include "game/hero.h"
#include "game/hud.h"
#include "game/mobyfunc.h"
#include "game/mobyutil.h"
#include "game/sound.h"
#include "game/update/moby320.h"
#include "game/vuchain.h"
#include "idol/fastfunc.h"

// 0x01f6448 (0x43c bytes)
void M1198_001f6448(int param_1)

{
  longlong lVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  undefined4 uVar6;
  int iVar7;
  int iVar8;
  ulonglong *puVar9;
  ulonglong uVar10;
  undefined8 uVar11;
  ulonglong uVar12;
  float *pfVar13;
  undefined4 uVar14;
  float *pfVar15;
  ulonglong unaff_r20;
  longlong lVar16;
  ulonglong unaff_r21;
  longlong lVar17;
  ulonglong unaff_r22;
  longlong lVar18;
  ulonglong unaff_r23;
  ulonglong unaff_r24;
  ulonglong unaff_r25;
  undefined4 *puVar19;
  ulonglong unaff_r26;
  undefined4 *puVar20;
  ulonglong unaff_r27;
  longlong lVar21;
  float *pfVar22;
  ulonglong unaff_r28;
  ulonglong unaff_r29;
  int iVar23;
  ulonglong unaff_r30;
  uint uVar24;
  ulonglong unaff_r31;
  ulonglong in_LR;
  double dVar25;
  double dVar26;
  double dVar27;
  double dVar28;
  double dVar29;
  double dVar30;
  double dVar31;
  double dVar32;
  ulonglong in_f29;
  double dVar33;
  ulonglong in_f30;
  ulonglong in_f31;
  double dVar34;
  
  uVar10 = ZEXT48(&stack0x00000000);
  lVar1 = uVar10 - 0x1c0;
  puVar9 = (ulonglong *)lVar1;
  *puVar9 = uVar10;
  puVar9[0x3a] = in_LR;
  puVar9[0x35] = in_f29;
  puVar9[0x36] = in_f30;
  puVar9[0x37] = in_f31;
  puVar9[0x31] = unaff_r28;
  iVar7 = *(int *)(param_1 + 0x78);
  puVar9[0x34] = unaff_r31;
  puVar9[0x33] = unaff_r30;
  puVar9[0x32] = unaff_r29;
  puVar9[0x30] = unaff_r27;
  puVar9[0x2f] = unaff_r26;
  puVar9[0x2e] = unaff_r25;
  puVar9[0x2d] = unaff_r24;
  puVar9[0x2c] = unaff_r23;
  puVar9[0x2b] = unaff_r22;
  puVar9[0x2a] = unaff_r21;
  puVar9[0x29] = unaff_r20;
  uVar11 = idol_draw::Blend(1,5,0x80,3,0,0,1,2);
  SetGSReg(0x16,uVar11);
  uVar12 = GetEffectTex(DAT_007661e4);
  uVar14 = DAT_007661e4;
  puVar9[0x25] = uVar12;
  GetEffectTex(uVar14);
  uVar12 = SCE_GS_SET_TEX1(0,0,1,1,1,0,0xff90);
  puVar9[0x26] = uVar12;
  uVar12 = SCE_GS_SET_CLAMP(0,0,0,0,0,0);
  puVar9[0x24] = uVar12;
  uVar12 = idol_draw::PackCmd(DAT_00f08e24,DAT_007661d8,DAT_00f08e28,DAT_007661dc,DAT_007661e0);
  puVar9[0x27] = uVar12;
  FastMtx4Identity((float *)(puVar9 + 0xe));
  iVar23 = 0;
  do {
    puVar19 = &DAT_007661f8;
    DAT_00766204 = DAT_00766214;
    dVar33 = 0.0;
    dVar25 = (double)MB_randRangeFloat(0.0,0.2);
    DAT_00766214 = (float)dVar25;
    uVar24 = 0;
    dVar25 = 0.5;
    dVar34 = 0.125;
    puVar20 = &DAT_007661fc;
    lVar21 = uVar10 - 0x110;
    lVar16 = lVar1;
    lVar17 = lVar1;
    lVar18 = lVar1;
    do {
      iVar8 = (((int)uVar24 >> 1) + (uint)((int)uVar24 < 0 && (uVar24 & 1) != 0) + iVar23) * 0x10;
      pfVar15 = (float *)(iVar8 + iVar7 + 0x90);
      pfVar13 = (float *)(iVar8 + iVar7 + 0x9c);
      dVar29 = (double)*pfVar15;
      pfVar22 = (float *)lVar21;
      *pfVar22 = *pfVar15;
      dVar28 = (double)pfVar15[1];
      pfVar22[1] = pfVar15[1];
      dVar27 = (double)pfVar15[2];
      pfVar22[2] = pfVar15[2];
      fVar5 = pfVar15[3];
      pfVar22[3] = fVar5;
      if (uVar24 == (((int)uVar24 >> 1) + (uint)((int)uVar24 < 0 && (uVar24 & 1) != 0)) * 2) {
        uVar14 = FastLerpColor((double)*pfVar13,DAT_007661e8,DAT_007661ec);
      }
      else {
        fVar2 = (float)(dVar28 - (double)*(float *)(iVar7 + 0x74));
        fVar3 = (float)(dVar29 - (double)*(float *)(iVar7 + 0x70));
        fVar4 = (float)(dVar27 - (double)*(float *)(iVar7 + 0x78));
        pfVar22[3] = fVar5;
        dVar32 = (double)SQRT(fVar4 * fVar4 + fVar3 * fVar3 + fVar2 * fVar2);
        fVar5 = (float)(dVar25 / dVar32);
        dVar31 = dVar33;
        if (dVar33 - dVar32 < 0.0) {
          dVar31 = (double)(fVar5 * fVar4);
        }
        dVar30 = dVar33;
        if (dVar33 - dVar32 < 0.0) {
          dVar30 = (double)(fVar5 * fVar2);
        }
        dVar26 = dVar33;
        if (dVar33 - dVar32 < 0.0) {
          dVar26 = (double)(fVar5 * fVar3);
        }
        if (dVar32 - dVar33 < 0.0) {
          dVar31 = (double)(fVar5 * fVar4);
        }
        if (dVar32 - dVar33 < 0.0) {
          dVar30 = (double)(fVar5 * fVar2);
        }
        if (dVar32 - dVar33 < 0.0) {
          dVar26 = (double)(fVar5 * fVar3);
        }
        pfVar22[2] = (float)(dVar27 - dVar31);
        pfVar22[1] = (float)(dVar28 - dVar30);
        *pfVar22 = (float)(dVar29 - dVar26);
        uVar6 = DAT_007661f4;
        uVar14 = DAT_007661f0;
        *(float *)((int)lVar16 + 0xb8) = (float)((double)*(float *)((int)lVar16 + 0xb8) - dVar34);
        uVar14 = FastLerpColor((double)*pfVar13,uVar14,uVar6);
      }
      uVar6 = *puVar19;
      *(undefined4 *)((int)lVar17 + 0xf0) = uVar14;
      uVar24 = uVar24 + 1;
      uVar14 = *puVar20;
      lVar21 = lVar21 + 0x10;
      *(undefined4 *)((int)lVar18 + 0x100) = uVar6;
      *(undefined4 *)((int)lVar18 + 0x104) = uVar14;
      lVar16 = lVar16 + 0x10;
      puVar19 = puVar19 + 2;
      lVar17 = lVar17 + 4;
      puVar20 = puVar20 + 2;
      lVar18 = lVar18 + 8;
    } while ((int)uVar24 < 4);
    FastDrawQuad(uVar10 - 0x110,uVar10 - 0x150,0,EffectTexHeaders,9);
    uVar14 = EffectTexHeaders;
    uVar24 = 0;
    lVar16 = lVar1;
    do {
      if (uVar24 != (((int)uVar24 >> 1) + (uint)((int)uVar24 < 0 && (uVar24 & 1) != 0)) * 2) {
        *(float *)((int)lVar16 + 0xb8) = *(float *)((int)lVar16 + 0xb8) + 0.25;
      }
      uVar24 = uVar24 + 1;
      lVar16 = lVar16 + 0x10;
    } while ((int)uVar24 < 4);
    FastDrawQuad(uVar10 - 0x110,uVar10 - 0x150,0,uVar14,9);
    iVar23 = iVar23 + 1;
  } while (iVar23 < 0xf);
  uVar11 = idol_draw::Blend(1,5,0x60,3,0,0,1,2);
  SetGSReg(0x16,uVar11);
  return;
}


// 0x01f6884 (0x14 bytes)
void M1198_001f6884(void)

{
  DAT_007662a4 = 0x10000;
  return;
}


// 0x01f6900 (0x5e8 bytes)
/* Moby 1198 */

void UpdateMoby_1198(MobyInstance *moby)

{
  int iVar1;
  int iVar2;
  undefined8 uVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  undefined8 uVar9;
  GPiece<16> local_140;
  GPiece<120> local_130;
  
  if ((moby->levelFlagIdx == 0xff) || (g_LevelFlags[Level][(byte)moby->levelFlagIdx] != -1)) {
    iVar1 = MB_damage(moby,0x40000,0);
    if (iVar1 != 0) {
      PlayMobySound(0,0,moby);
      iVar2 = 0;
      uVar9 = 0;
      dVar4 = -0.4000000059604645;
      dVar5 = 0.4000000059604645;
      dVar6 = 0.6000000238418579;
      dVar7 = 0.30000001192092896;
      dVar8 = 8.0;
      do {
        MB_randRangeFloat((float)dVar4,(float)dVar5);
        MB_randRangeFloat(-0.6,(float)dVar6);
        MB_randRangeFloat((float)dVar4,(float)dVar5);
        MB_randRangeFloat((float)dVar7,2.6);
        MB_randRangeFloat(5.0,(float)dVar8);
        MB_randRangeFloat(1.0,1.3);
        FUN_00341590(moby);
        if (iVar2 % 3 == 0) {
          uVar3 = MB_randRangeFloat((float)dVar7,(float)dVar6);
          MB_SpawnExplosionSparks(uVar3,uVar9,moby,local_130);
        }
        iVar2 = iVar2 + 1;
      } while (iVar2 < 0x3c);
      MB_genericExplosion
                (uVar9,uVar9,0x4008000000000000,0x4000000000000000,0x3ff0000000000000,
                 0x3ff0000000000000,0x402e000000000000,moby,iVar1 + 0x10,local_140,
                 0xffffffffffffffff,&DAT_001f6898,10,3,0x10);
      DeleteMoby(moby);
    }
  }
  else {
    DeleteMoby(moby);
  }
  return;
}


