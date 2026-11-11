// game/update/moby841.cpp -- reconstructed from NPEA00385 EBOOT
// STATUS: NOT STARTED (raw Ghidra output)
// 3 functions, 0x481ca8-0x48243c
#include "game/update/moby841.h"
#include "game/camera.h"
#include "game/debug.h"
#include "game/draw.h"
#include "game/hero.h"
#include "game/hud.h"
#include "game/mobyfunc.h"
#include "game/mobyutil.h"
#include "game/space.h"
#include "game/update.h"
#include "idol/fastfunc.h"

// 0x0481ca8 (0x444 bytes)
void M841_00481ca8(int param_1)

{
  undefined4 uVar1;
  float fVar2;
  f32 fVar3;
  ushort uVar4;
  ulonglong *puVar5;
  int iVar6;
  uint uVar7;
  MobyInstance *pMVar8;
  ulonglong uVar9;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined8 uVar10;
  int iVar13;
  int iVar14;
  undefined4 *puVar15;
  undefined4 *puVar16;
  undefined4 *puVar17;
  ulonglong uVar18;
  undefined4 *puVar19;
  undefined4 *puVar20;
  ulonglong uVar21;
  ulonglong unaff_r23;
  ulonglong uVar22;
  ulonglong unaff_r24;
  longlong lVar23;
  ulonglong unaff_r25;
  ulonglong uVar24;
  ulonglong unaff_r26;
  int iVar26;
  longlong lVar25;
  ulonglong unaff_r27;
  ulonglong unaff_r28;
  longlong lVar27;
  ulonglong unaff_r29;
  ulonglong unaff_r30;
  ulonglong unaff_r31;
  ushort *puVar28;
  ulonglong in_LR;
  double dVar29;
  double dVar30;
  ulonglong uVar31;
  double dVar32;
  double dVar33;
  double dVar34;
  ulonglong in_f30;
  ulonglong in_f31;
  
  uVar9 = ZEXT48(&stack0x00000000);
  puVar5 = (ulonglong *)(uVar9 - 0x6c0);
  *puVar5 = uVar9;
  puVar5[0xda] = in_LR;
  puVar5[0xd6] = in_f30;
  puVar5[0xd7] = in_f31;
  puVar5[0xd4] = unaff_r30;
  puVar5[0xd5] = unaff_r31;
  uVar7 = worldUpdateTime;
  puVar5[0xd3] = unaff_r29;
  puVar5[0xd2] = unaff_r28;
  puVar5[0xd1] = unaff_r27;
  puVar5[0xd0] = unaff_r26;
  puVar5[0xcf] = unaff_r25;
  puVar5[0xce] = unaff_r24;
  puVar5[0xcd] = unaff_r23;
  dVar29 = (double)FastIntToDouble(uVar7 & 0x3f);
  dVar29 = (double)((float)(dVar29 * 0.01587301678955555) * 6.28318);
  lVar27 = 0;
  do {
    dVar32 = (double)(float)(3.141592502593994 - dVar29);
    if (dVar29 - (double)(float)(3.141592502593994 - dVar29) < 0.0) {
      dVar32 = dVar29;
    }
    dVar30 = (double)(float)(-3.141592502593994 - dVar29);
    if ((double)(float)(-3.141592502593994 - dVar29) - dVar32 < 0.0) {
      dVar30 = dVar32;
    }
    dVar32 = (double)(float)(dVar30 * dVar30);
    dVar34 = (double)(float)(dVar32 * (double)(float)(dVar32 * dVar30));
    dVar33 = (double)(float)(dVar32 * dVar34);
    dVar32 = (double)(((float)(dVar32 * dVar33) * 2.601887e-06 +
                       (float)(dVar33 * -0.0001980741071747616 +
                              (double)(float)(dVar34 * 0.008333025500178337 +
                                             (double)(float)((double)(float)(dVar32 * dVar30) *
                                                             -0.16666656732559204 + dVar30))) + 1.0)
                     * 0.5);
    uVar11 = FastLerpColor(dVar32,DAT_008ace20,DAT_008ace24);
    uVar12 = FastLerpColor(dVar32,DAT_008ace28,DAT_008ace2c);
    dVar29 = (double)FastWrapRot((float)dVar29,1.2566371);
    iVar26 = 0;
    lVar23 = uVar9 - 0x6c0;
    do {
      uVar10 = GetEffectTex(DAT_008ace88);
      uVar22 = lVar23 + lVar27 * 0x90;
      uVar18 = uVar22 & 0xffffffff;
      iVar13 = (int)uVar22;
      *(undefined8 *)(iVar13 + 0x128) = uVar10;
      uVar10 = STUB_00502fd4_RET_0(0,0,1,1,1,0,0xff90);
      *(undefined8 *)(iVar13 + 0x130) = uVar10;
      uVar10 = FUN_00502f08(0,0,0,0,0,0);
      *(undefined8 *)(iVar13 + 0x120) = uVar10;
      uVar10 = idol_draw::PackCmd(DAT_010d9d48,DAT_008ace50,DAT_010d9d4c,DAT_008ace54,0x80);
      *(undefined8 *)(iVar13 + 0x138) = uVar10;
      iVar14 = (int)(lVar27 + 1);
      iVar13 = 0;
      puVar5[0xca] = (longlong)iVar14;
      puVar17 = &DAT_008ace90;
      puVar15 = &DAT_008ace64;
      puVar16 = &DAT_008ace68;
      puVar20 = (undefined4 *)0x8aced0;
      uVar22 = uVar22 + 0xb0 & 0xffffffff;
      uVar31 = puVar5[0xca];
      uVar21 = uVar18;
      uVar24 = uVar18;
      do {
        uVar1 = *puVar16;
        *(undefined4 *)((int)uVar24 + 0x100) = *puVar15;
        *(undefined4 *)((int)uVar24 + 0x104) = uVar1;
        iVar6 = (int)uVar21;
        puVar19 = (undefined4 *)uVar22;
        if (iVar26 == 0) {
          *(undefined4 *)((int)uVar18 + 0xf0) = uVar12;
          *puVar19 = *puVar20;
          puVar19[1] = puVar20[1];
          puVar19[2] = puVar20[2];
          puVar19[3] = puVar20[3];
          fVar2 = *(float *)(iVar6 + 0xb8);
        }
        else {
          *(undefined4 *)((int)uVar18 + 0xf0) = uVar11;
          *puVar19 = *puVar17;
          puVar19[1] = puVar17[1];
          puVar19[2] = puVar17[2];
          puVar19[3] = puVar17[3];
          fVar2 = *(float *)(iVar6 + 0xb8);
        }
        iVar13 = iVar13 + 1;
        uVar22 = uVar22 + 0x10;
        puVar15 = puVar15 + 2;
        uVar24 = uVar24 + 8;
        puVar20 = puVar20 + 4;
        puVar16 = puVar16 + 2;
        uVar18 = uVar18 + 4;
        puVar17 = puVar17 + 4;
        *(float *)(iVar6 + 0xb8) = fVar2 + (float)(longlong)uVar31;
        uVar21 = uVar21 + 0x10;
      } while (iVar13 < 4);
      iVar26 = iVar26 + 1;
      lVar23 = lVar23 + 0x2d0;
    } while (iVar26 < 2);
    lVar27 = lVar27 + 1;
  } while (iVar14 < 5);
  lVar27 = uVar9 - 0x650;
  puVar28 = (ushort *)(&g_MobyGroups)[*(byte *)(param_1 + 0x21)];
  do {
    uVar7 = *puVar28 & 0x7fff;
    if ((g_MobyInstance[uVar7].oClass == ELECTRIC_GATE) && (g_MobyInstance[uVar7].state == '\x01')) {
      FastMtxCopyNoTranslate(lVar27,&g_MobyInstance[uVar7].transform);
      pMVar8 = g_MobyInstance;
      lVar25 = uVar9 - 0x610;
      lVar23 = uVar9 - 0x340;
      iVar26 = 0;
      *(f32 *)(puVar5 + 0x14) = g_MobyInstance[uVar7].pos.x;
      *(f32 *)((int)puVar5 + 0xa4) = pMVar8[uVar7].pos.y;
      fVar3 = pMVar8[uVar7].pos.z;
      *(undefined4 *)((int)puVar5 + 0xac) = 0x3f800000;
      *(f32 *)(puVar5 + 0x15) = fVar3;
      do {
        FastDrawQuad(lVar25,lVar27,0,EffectTexHeaders,9);
        FastDrawQuad(lVar23,lVar27,0,EffectTexHeaders,9);
        iVar26 = iVar26 + 1;
        lVar25 = lVar25 + 0x90;
        lVar23 = lVar23 + 0x90;
      } while (iVar26 < 5);
    }
    uVar4 = *puVar28;
    puVar28 = puVar28 + 1;
  } while (-1 < (short)uVar4);
  return;
}


// 0x04820ec (0x14 bytes)
void M841_004820ec(void)

{
  DAT_008acf5c = 0x10000;
  return;
}


// 0x0482108 (0x334 bytes)
/* Moby 841 */

void UpdateMoby_841(MobyInstance *moby)

{
  byte bVar1;
  undefined4 *puVar2;
  float fVar3;
  int iVar4;
  undefined4 uVar5;
  
  puVar2 = (undefined4 *)moby->pVar;
  iVar4 = MB_IsPntInCuboid(&g_heroPosition,(longlong)(int)puVar2[10]);
  bVar1 = moby->state;
  if (iVar4 != 0) {
    g_heroWaterZ = 0x43fa0000;
  }
  if (bVar1 == 0) {
    *(u8 *)(puVar2 + 8) = levelFog.r;
    *(u8 *)((int)puVar2 + 0x21) = levelFog.g;
    *(u8 *)((int)puVar2 + 0x22) = levelFog.b;
    *puVar2 = LevelFogNearDist;
    puVar2[2] = LevelFogFarDist;
    puVar2[1] = LevelFogNearIntensity;
    fVar3 = LevelFogFarIntensity;
    *(undefined1 *)((int)puVar2 + 0x23) = 0x49;
    puVar2[3] = fVar3;
    *(undefined1 *)(puVar2 + 9) = 0x53;
    *(undefined1 *)((int)puVar2 + 0x25) = 0xc;
    puVar2[4] = 0;
    puVar2[6] = 0x47040000;
    puVar2[5] = 0x437f0000;
    puVar2[7] = 0;
    uVar5 = CONCAT13(DAT_0073a963,CONCAT12(DAT_0073a962,CONCAT11(DAT_0073a961,DAT_0073a960)));
    puVar2[0xd] = 0x40408070;
    puVar2[0xc] = uVar5;
    moby->state = '\x01';
  }
  else if (bVar1 < 2) {
    iVar4 = MB_IsPntInCuboid(&g_heroPosition,(longlong)(int)puVar2[0xb]);
    if (iVar4 != 0) {
      levelFog.r = *(u8 *)((int)puVar2 + 0x23);
      levelFog.g = *(u8 *)(puVar2 + 9);
      levelFog.b = *(u8 *)((int)puVar2 + 0x25);
      LevelFogNearDist = puVar2[4];
      LevelFogFarDist = (float)puVar2[6];
      LevelFogNearIntensity = (float)puVar2[5];
      LevelFogFarIntensity = (float)puVar2[7];
      moby->state = '\x02';
    }
  }
  else if ((bVar1 < 3) &&
          (iVar4 = MB_IsPntInCuboid(&g_heroPosition,(longlong)(int)puVar2[10]), iVar4 != 0
          )) {
    levelFog.r = *(u8 *)(puVar2 + 8);
    levelFog.g = *(u8 *)((int)puVar2 + 0x21);
    levelFog.b = *(u8 *)((int)puVar2 + 0x22);
    LevelFogNearDist = *puVar2;
    LevelFogFarDist = (float)puVar2[2];
    LevelFogNearIntensity = (float)puVar2[1];
    LevelFogFarIntensity = (float)puVar2[3];
    moby->state = '\x01';
  }
  iVar4 = MB_IsPntInCuboid(&g_heroPosition,(longlong)(int)puVar2[0xe]);
  if (iVar4 != 0) {
    iVar4 = puVar2[0xe];
    uVar5 = FastLerpColor
                      ((double)((Cuboids[iVar4].imatrix.v2.x *
                                 (g_heroPosition.z - Cuboids[iVar4].pos.z) +
                                 Cuboids[iVar4].imatrix.v0.x *
                                 (g_heroPosition.x - Cuboids[iVar4].pos.x) +
                                 Cuboids[iVar4].imatrix.v1.x *
                                 (g_heroPosition.y - Cuboids[iVar4].pos.y) + 1.0) * 0.5),puVar2[0xc]
                       ,puVar2[0xd]);
    DAT_0073a960 = (undefined1)uVar5;
    DAT_0073a963 = (undefined1)((uint)uVar5 >> 0x18);
    DAT_0073a961 = (undefined1)((uint)uVar5 >> 8);
    DAT_0073a962 = (undefined1)((uint)uVar5 >> 0x10);
  }
  return;
}


