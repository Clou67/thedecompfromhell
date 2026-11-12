// game/update/moby542.cpp -- reconstructed from NPEA00385 EBOOT
// STATUS: NOT STARTED (raw Ghidra output)
// 6 functions, 0x3aef30-0x3aff7c
#include "game/update/moby542.h"
#include "game/draw.h"
#include "game/hero.h"
#include "game/hud.h"
#include "game/mobyfunc.h"
#include "game/mobyproc.h"
#include "game/mobyutil.h"
#include "idol/fastfunc.h"

// 0x03aef30 (0x74 bytes)
void FUN_003aef30(longlong param_1)

{
  MobyModeBit MVar1;
  ushort uVar2;
  uint uVar3;
  MobyInstance *pMVar4;
  ushort *puVar5;
  
  puVar5 = *(ushort **)((int)&g_MobyGroups + (int)(param_1 << 2));
  if (puVar5 != (ushort *)0x0) {
    do {
      do {
        pMVar4 = g_MobyInstance;
        uVar3 = *puVar5 & 0x7fff;
      } while (g_MobyInstance[uVar3].oClass != TEST_DUMMY);
      MVar1 = g_MobyInstance[uVar3].modeBits;
      g_MobyInstance[uVar3].state = '\x02';
      pMVar4[uVar3].enabled = '\x01';
      pMVar4[uVar3].modeBits =
           MVar1 & (MIRROR|CAN_BE_DAMAGED|HIDE_BACKFACES|CAN_BE_AUTO_TARGETED|DISABLE_Z_WRITE|
                    DRAW_SHADOW|DRAW_TRANSPARENT_WEIRD|LOCK_ROTATION|NO_DRAW|UNK_40|HAS_SPECIAL_VARS
                    |HAS_GLOW|TRANSPARENT|NO_POST_UPDATE|NO_UPDATE);
      uVar2 = *puVar5;
      puVar5 = puVar5 + 1;
    } while (-1 < (short)uVar2);
  }
  return;
}


// 0x03aefd0 (0x45c bytes)
// inlined: FastRSqrt @0x3af2b0
void M542_003aefd0(int param_1)

{
  byte bVar1;
  ushort uVar2;
  float *pfVar3;
  float *pfVar4;
  float *pfVar5;
  MobyInstance *pMVar6;
  ushort *puVar7;
  longlong lVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  double dVar16;
  double dVar17;
  double dVar18;
  double dVar19;
  double dVar20;
  GPiece<64> local_150;
  float local_110 [36];
  
  GetEffectTex(0xb);
  idol_draw::PackCmd(0,2,0,1,0x80);
  SCE_GS_SET_TEX1(0,0,1,1,1,0,0xff90);
  SCE_GS_SET_CLAMP(1,1,0,0,0,0);
  pfVar5 = local_110;
  pfVar4 = (float *)&DAT_008455b0;
  dVar13 = 1.0;
  lVar8 = 4;
  bVar1 = *(byte *)(param_1 + 0x21);
  do {
    *pfVar5 = *pfVar4 * 0.2;
    pfVar5[1] = pfVar4[1] * 0.2;
    pfVar5[2] = pfVar4[2] * 0.2;
    pfVar3 = pfVar4 + 3;
    pfVar4 = pfVar4 + 4;
    pfVar5[3] = *pfVar3;
    pfVar5 = pfVar5 + 4;
    lVar8 = lVar8 + -1;
  } while (lVar8 != 0);
  puVar7 = (ushort *)(&g_MobyGroups)[bVar1];
  dVar14 = 3.141592502593994;
  dVar15 = -3.141592502593994;
  dVar16 = -0.16666656732559204;
  dVar17 = 0.008333025500178337;
  dVar18 = -0.0001980741071747616;
  dVar19 = 2.601886990305502e-06;
  dVar20 = 0.5;
  do {
    pMVar6 = g_MobyInstance + (*puVar7 & 0x7fff);
    dVar9 = (double)*(float *)((int)pMVar6->pVar + 0x11c);
    dVar11 = (double)(float)(dVar14 - dVar9);
    if (dVar9 - (double)(float)(dVar14 - dVar9) < 0.0) {
      dVar11 = dVar9;
    }
    dVar10 = (double)(float)(dVar15 - dVar9);
    if ((double)(float)(dVar15 - dVar9) - dVar11 < 0.0) {
      dVar10 = dVar11;
    }
    dVar11 = (double)(float)(dVar10 * dVar10);
    dVar12 = (double)(float)(dVar11 * (double)(float)(dVar11 * dVar10));
    dVar9 = (double)(float)(dVar11 * dVar12);
    FastLerpColor
              ((double)(float)((double)(float)((double)(float)((double)(float)(dVar11 * dVar9) *
                                                               dVar19 + (double)(float)(dVar9 * 
                                                  dVar18 + (double)(float)(dVar12 * dVar17 +
                                                                          (double)(float)((double)(
                                                  float)(dVar11 * dVar10) * dVar16 + dVar10)))) +
                                              dVar13) * dVar20),DAT_008455a4,DAT_008455a8);
    if (((pMVar6 != (MobyInstance *)0x0) && (pMVar6->oClass == TEST_DUMMY)) &&
       (pMVar6->state != 0xfd && pMVar6->state != 0xfe)) {
      FastDrawQuad(local_110,local_150,0,EffectTexHeaders,9);
    }
    uVar2 = *puVar7;
    puVar7 = puVar7 + 1;
  } while (-1 < (short)uVar2);
  return;
}


// 0x03af42c (0x14 bytes)
void M542_003af42c(void)

{
  DAT_0084563c = 0x10000;
  return;
}


// 0x03af440 (0x90 bytes)
void M542_003af440(int param_1)

{
  int iVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  
  iVar1 = 0;
  puVar4 = *(undefined4 **)(param_1 + 0x78);
  do {
    iVar2 = 0;
    puVar3 = puVar4;
    do {
      if (iVar2 != 0 || iVar1 != 0) {
        UpdateMobyTransform((MobyInstance *)*puVar3);
      }
      iVar2 = iVar2 + 1;
      puVar3 = puVar3 + 1;
    } while (iVar2 < 3);
    iVar1 = iVar1 + 1;
    puVar4 = puVar4 + 3;
  } while (iVar1 < 4);
  return;
}


// 0x03af4f0 (0x390 bytes)
void M542_003af4f0(int param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  int *piVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  int *piVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  double dVar16;
  double dVar17;
  double dVar18;
  double dVar19;
  double dVar20;
  double dVar21;
  double dVar22;
  double dVar23;
  
  piVar5 = *(int **)(param_1 + 0x78);
  uVar8 = 0;
  dVar18 = 1.5707963705062866;
  dVar19 = 0.7853981852531433;
  dVar20 = 3.0;
  dVar21 = 0.0;
  dVar22 = 0.375;
  dVar23 = 1.5;
  piVar9 = piVar5;
  do {
    fVar1 = 1.0;
    if (1 < (int)uVar8) {
      fVar1 = -1.0;
    }
    uVar7 = uVar8 & 1;
    iVar6 = *piVar9;
    fVar2 = (float)piVar5[uVar7 * 4 + 0x14];
    fVar3 = (float)piVar5[uVar7 * 4 + 0x15];
    fVar4 = (float)piVar5[uVar7 * 4 + 0x16];
    *(int *)(iVar6 + 0x10) = piVar5[0x1c];
    dVar17 = (double)(fVar3 * fVar1);
    dVar16 = (double)(fVar2 * fVar1);
    dVar15 = (double)(fVar4 * fVar1);
    *(int *)(iVar6 + 0x14) = piVar5[0x1d];
    *(int *)(iVar6 + 0x18) = piVar5[0x1e];
    *(int *)(iVar6 + 0x1c) = piVar5[0x1f];
    dVar11 = (double)FastAddRots
                               ((float)((double)(longlong)(int)uVar8 * dVar18 +
                                       (double)(float)((double)(float)piVar5[0x10] * dVar19)));
    *(float *)(*piVar9 + 0x40) = (float)dVar11;
    dVar12 = (double)SQRT((float)(dVar15 * dVar15 +
                                 (double)(float)(dVar16 * dVar16 + (double)(float)(dVar17 * dVar17))
                                 ));
    uVar8 = uVar8 + 1;
    iVar6 = *piVar9;
    dVar13 = (double)(float)((double)(float)((double)(float)piVar5[0x12] * dVar20) / dVar12);
    dVar11 = dVar21;
    if (dVar21 - dVar12 < 0.0) {
      dVar11 = (double)(float)(dVar15 * dVar13);
    }
    dVar14 = dVar21;
    if (dVar21 - dVar12 < 0.0) {
      dVar14 = (double)(float)(dVar17 * dVar13);
    }
    dVar10 = dVar21;
    if (dVar21 - dVar12 < 0.0) {
      dVar10 = (double)(float)(dVar16 * dVar13);
    }
    if (dVar12 - dVar21 < 0.0) {
      dVar11 = (double)(float)(dVar15 * dVar13);
    }
    if (dVar12 - dVar21 < 0.0) {
      dVar14 = (double)(float)(dVar17 * dVar13);
    }
    if (dVar12 - dVar21 < 0.0) {
      dVar10 = (double)(float)(dVar16 * dVar13);
    }
    *(float *)(iVar6 + 0x18) = (float)((double)*(float *)(iVar6 + 0x18) + dVar11);
    *(float *)(iVar6 + 0x14) = (float)((double)*(float *)(iVar6 + 0x14) + dVar14);
    *(float *)(iVar6 + 0x10) = (float)((double)*(float *)(iVar6 + 0x10) + dVar10);
    iVar6 = piVar9[1];
    *(int *)(iVar6 + 0x10) = piVar5[0x1c];
    *(int *)(iVar6 + 0x14) = piVar5[0x1d];
    *(int *)(iVar6 + 0x18) = piVar5[0x1e];
    *(int *)(iVar6 + 0x1c) = piVar5[0x1f];
    iVar6 = piVar9[1];
    dVar13 = (double)(float)((double)(float)((double)(float)piVar5[0xe] * dVar22) / dVar12);
    dVar11 = dVar21;
    if (dVar21 - dVar12 < 0.0) {
      dVar11 = (double)(float)(dVar15 * dVar13);
    }
    dVar14 = dVar21;
    if (dVar21 - dVar12 < 0.0) {
      dVar14 = (double)(float)(dVar17 * dVar13);
    }
    dVar10 = dVar21;
    if (dVar21 - dVar12 < 0.0) {
      dVar10 = (double)(float)(dVar16 * dVar13);
    }
    if (dVar12 - dVar21 < 0.0) {
      dVar11 = (double)(float)(dVar15 * dVar13);
    }
    if (dVar12 - dVar21 < 0.0) {
      dVar14 = (double)(float)(dVar17 * dVar13);
    }
    if (dVar12 - dVar21 < 0.0) {
      dVar10 = (double)(float)(dVar16 * dVar13);
    }
    *(float *)(iVar6 + 0x18) = (float)((double)*(float *)(iVar6 + 0x18) + dVar11);
    *(float *)(iVar6 + 0x14) = (float)((double)*(float *)(iVar6 + 0x14) + dVar14);
    *(float *)(iVar6 + 0x10) = (float)((double)*(float *)(iVar6 + 0x10) + dVar10);
    iVar6 = piVar9[1];
    dVar13 = (double)(float)((double)(float)((double)(float)piVar5[0x12] * dVar23) / dVar12);
    dVar11 = dVar21;
    if (dVar21 - dVar12 < 0.0) {
      dVar11 = (double)(float)(dVar15 * dVar13);
    }
    dVar14 = dVar21;
    if (dVar21 - dVar12 < 0.0) {
      dVar14 = (double)(float)(dVar17 * dVar13);
    }
    dVar10 = dVar21;
    if (dVar21 - dVar12 < 0.0) {
      dVar10 = (double)(float)(dVar16 * dVar13);
    }
    if (dVar12 - dVar21 < 0.0) {
      dVar11 = (double)(float)(dVar15 * dVar13);
    }
    if (dVar12 - dVar21 < 0.0) {
      dVar14 = (double)(float)(dVar17 * dVar13);
    }
    if (dVar12 - dVar21 < 0.0) {
      dVar10 = (double)(float)(dVar16 * dVar13);
    }
    *(float *)(iVar6 + 0x18) = (float)((double)*(float *)(iVar6 + 0x18) + dVar11);
    *(float *)(iVar6 + 0x14) = (float)((double)*(float *)(iVar6 + 0x14) + dVar14);
    *(float *)(iVar6 + 0x10) = (float)((double)*(float *)(iVar6 + 0x10) + dVar10);
    iVar6 = piVar9[2];
    *(int *)(iVar6 + 0x10) = piVar5[0x1c];
    *(int *)(iVar6 + 0x14) = piVar5[0x1d];
    *(int *)(iVar6 + 0x18) = piVar5[0x1e];
    *(int *)(iVar6 + 0x1c) = piVar5[0x1f];
    iVar6 = piVar9[2];
    piVar9 = piVar9 + 3;
    dVar13 = (double)(float)((double)(float)((double)(float)piVar5[0x12] * dVar23) / dVar12);
    dVar11 = dVar21;
    if (dVar21 - dVar12 < 0.0) {
      dVar11 = (double)(float)(dVar15 * dVar13);
    }
    dVar14 = dVar21;
    if (dVar21 - dVar12 < 0.0) {
      dVar14 = (double)(float)(dVar17 * dVar13);
    }
    dVar10 = dVar21;
    if (dVar21 - dVar12 < 0.0) {
      dVar10 = (double)(float)(dVar16 * dVar13);
    }
    if (dVar12 - dVar21 < 0.0) {
      dVar11 = (double)(float)(dVar15 * dVar13);
    }
    if (dVar12 - dVar21 < 0.0) {
      dVar14 = (double)(float)(dVar17 * dVar13);
    }
    if (dVar12 - dVar21 < 0.0) {
      dVar10 = (double)(float)(dVar16 * dVar13);
    }
    *(float *)(iVar6 + 0x18) = (float)((double)*(float *)(iVar6 + 0x18) + dVar11);
    *(float *)(iVar6 + 0x14) = (float)((double)*(float *)(iVar6 + 0x14) + dVar14);
    *(float *)(iVar6 + 0x10) = (float)((double)*(float *)(iVar6 + 0x10) + dVar10);
  } while ((int)uVar8 < 4);
  return;
}


// 0x03af8a0 (0x6dc bytes)
/* Moby 542 */

void UpdateMoby_542(MobyInstance *moby)

{
  u8 uVar1;
  float fVar2;
  uint uVar3;
  undefined4 uVar4;
  int iVar5;
  MobyInstance *pMVar6;
  int iVar7;
  undefined4 *puVar8;
  ulonglong uVar9;
  int *piVar10;
  undefined4 *puVar11;
  ulonglong uVar12;
  int iVar13;
  double dVar14;
  double dVar15;
  GPiece<16> auVar16;
  GPiece<16> auVar17;
  GPiece<16> auVar18;
  float fVar19;
  
  uVar1 = moby->state;
  puVar8 = (undefined4 *)moby->pVar;
  uVar12 = ZEXT48(puVar8);
  if (uVar1 == '\x04') {
    iVar7 = FastDecTimerS32(uVar12 + 0x34);
    if (iVar7 != 0) {
      fVar19 = OrganicDelt
                         (1.0,DAT_0071f418 * 2.0,DAT_0071f418 * 2.0,g_FrameTime * 4.0,
                          (float *)(puVar8 + 0x12),0x720000,(float *)(puVar8 + 0x13));
      uVar3 = (int)puVar8[0x12] >> 0x1f;
      if (0x3f7fffff < (int)((uVar3 >> 1 ^ puVar8[0x12]) - uVar3)) {
        moby->state = '\x05';
      }
      M542_003af4f0((double)fVar19,moby);
      puVar8 = (undefined4 *)moby->pVar;
      iVar7 = 0;
      do {
        iVar13 = 0;
        puVar11 = puVar8;
        do {
          if (iVar13 != 0 || iVar7 != 0) {
            UpdateMobyTransform((MobyInstance *)*puVar11);
          }
          iVar13 = iVar13 + 1;
          puVar11 = puVar11 + 1;
        } while (iVar13 < 3);
        iVar7 = iVar7 + 1;
        puVar8 = puVar8 + 3;
      } while (iVar7 < 4);
    }
  }
  else if (uVar1 == '\x03') {
    iVar7 = FastDecTimerS32(uVar12 + 0x34);
    if (iVar7 != 0) {
      fVar19 = OrganicDelt
                         (1.0,DAT_0071f418 * 2.0,DAT_0071f418 * 2.0,g_FrameTime * 4.0,
                          (float *)(puVar8 + 0x10),0x3af880,(float *)(puVar8 + 0x11));
      uVar3 = (int)puVar8[0x10] >> 0x1f;
      if (0x3f7fffff < (int)((uVar3 >> 1 ^ puVar8[0x10]) - uVar3)) {
        auVar16 = ZEXT416(0xffffffff);
        auVar16 = auVar16 | auVar16 << 0x20 | auVar16 << 0x40 | auVar16 << 0x60;
        moby->state = '\x04';
        auVar17 = vectorShiftLeftIntegerWord(auVar16,auVar16);
        auVar16 = loadVectorLeftIndexed(0x14,0x3af880);
        auVar16 = auVar16 >> 0x60 & (GPiece<16>)0xffffffff;
        auVar18 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
        auVar16 = vectorMultiplyAddFloatingPoint
                            (auVar18,auVar16 | auVar16 << 0x20 | auVar16 << 0x40 | auVar16 << 0x60,
                             auVar17);
        auVar16 = vectorConvertToSignedFixedPointWordSaturate(auVar16,0);
        auVar16 = auVar16 >> 0x60 & (GPiece<16>)0xffffffff;
        uVar4 = storeVectorElementWordIndexed
                          (auVar16 | auVar16 << 0x20 | auVar16 << 0x40 | auVar16 << 0x60,0x34,uVar12
                          );
        *(undefined4 *)((uint)(puVar8 + 0xd) & 0xfffffffc) = uVar4;
      }
      M542_003af4f0((double)fVar19,moby);
      puVar8 = (undefined4 *)moby->pVar;
      iVar7 = 0;
      do {
        iVar13 = 0;
        puVar11 = puVar8;
        do {
          if (iVar13 != 0 || iVar7 != 0) {
            UpdateMobyTransform((MobyInstance *)*puVar11);
          }
          iVar13 = iVar13 + 1;
          puVar11 = puVar11 + 1;
        } while (iVar13 < 3);
        iVar7 = iVar7 + 1;
        puVar8 = puVar8 + 3;
      } while (iVar7 < 4);
    }
  }
  else if (uVar1 == '\x02') {
    fVar19 = OrganicDelt
                       (1.0,DAT_0071f418 * 4.0,DAT_0071f418 * 4.0,g_FrameTime * 8.0,
                        (float *)(puVar8 + 0xe),0x720000,(float *)(puVar8 + 0xf));
    uVar3 = (int)puVar8[0xe] >> 0x1f;
    if (0x3f7fffff < (int)((uVar3 >> 1 ^ puVar8[0xe]) - uVar3)) {
      auVar16 = ZEXT416(0xffffffff);
      auVar16 = auVar16 | auVar16 << 0x20 | auVar16 << 0x40 | auVar16 << 0x60;
      moby->state = '\x03';
      auVar17 = vectorShiftLeftIntegerWord(auVar16,auVar16);
      auVar16 = loadVectorLeftIndexed(0x14,0x3af880);
      auVar16 = auVar16 >> 0x60 & (GPiece<16>)0xffffffff;
      auVar18 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
      auVar16 = vectorMultiplyAddFloatingPoint
                          (auVar18,auVar16 | auVar16 << 0x20 | auVar16 << 0x40 | auVar16 << 0x60,
                           auVar17);
      auVar16 = vectorConvertToSignedFixedPointWordSaturate(auVar16,0);
      auVar16 = auVar16 >> 0x60 & (GPiece<16>)0xffffffff;
      uVar4 = storeVectorElementWordIndexed
                        (auVar16 | auVar16 << 0x20 | auVar16 << 0x40 | auVar16 << 0x60,0x34,uVar12);
      *(undefined4 *)((uint)(puVar8 + 0xd) & 0xfffffffc) = uVar4;
    }
    M542_003af4f0((double)fVar19,moby);
    puVar8 = (undefined4 *)moby->pVar;
    iVar7 = 0;
    do {
      iVar13 = 0;
      puVar11 = puVar8;
      do {
        if (iVar13 != 0 || iVar7 != 0) {
          UpdateMobyTransform((MobyInstance *)*puVar11);
        }
        iVar13 = iVar13 + 1;
        puVar11 = puVar11 + 1;
      } while (iVar13 < 3);
      iVar7 = iVar7 + 1;
      puVar8 = puVar8 + 3;
    } while (iVar7 < 4);
  }
  else if (uVar1 == '\x01') {
    fVar19 = (moby->pos).y - g_heroPosition.y;
    fVar2 = (moby->pos).x - g_heroPosition.x;
    if (SQRT(fVar2 * fVar2 + fVar19 * fVar19) < 3.0) {
      moby->state = '\x02';
    }
  }
  else if (uVar1 == '\0') {
    (moby->rotation).x = 0.0;
    puVar8[0x1c] = (moby->pos).x;
    puVar8[0x1d] = (moby->pos).y;
    puVar8[0x1e] = (moby->pos).z;
    puVar8[0x1f] = (moby->pos).w;
    iVar7 = 1;
    puVar8[0x14] = (moby->transform).v1.x + (moby->transform).v2.x;
    puVar8[0x15] = (moby->transform).v1.y + (moby->transform).v2.y;
    fVar19 = (moby->transform).v1.z;
    fVar2 = (moby->transform).v2.z;
    *puVar8 = moby;
    puVar8[0x16] = fVar19 + fVar2;
    puVar8[0x17] = (moby->transform).v1.w;
    puVar8[0x18] = (moby->transform).v2.x - (moby->transform).v1.x;
    puVar8[0x19] = (moby->transform).v2.y - (moby->transform).v1.y;
    puVar8[0x1a] = (moby->transform).v2.z - (moby->transform).v1.z;
    puVar8[0x1b] = (moby->transform).v2.w;
    dVar15 = 1.5707963705062866;
    uVar9 = uVar12;
    do {
      uVar9 = uVar9 + 0xc;
      pMVar6 = CreateMoby(0x21e);
      piVar10 = (int *)uVar9;
      *piVar10 = (int)pMVar6;
      pMVar6->drawDistance = 0x40;
      *(ushort *)(*piVar10 + 0x34) = *(ushort *)(*piVar10 + 0x34) | 2;
      iVar13 = *piVar10;
      *(f32 *)(iVar13 + 0x10) = (moby->pos).x;
      *(f32 *)(iVar13 + 0x14) = (moby->pos).y;
      *(f32 *)(iVar13 + 0x18) = (moby->pos).z;
      *(f32 *)(iVar13 + 0x1c) = (moby->pos).w;
      iVar13 = *piVar10;
      *(f32 *)(iVar13 + 0x40) = (moby->rotation).x;
      *(f32 *)(iVar13 + 0x44) = (moby->rotation).y;
      *(f32 *)(iVar13 + 0x48) = (moby->rotation).z;
      *(f32 *)(iVar13 + 0x4c) = (moby->rotation).w;
      dVar14 = (double)FastWrapRot
                                 (*(float *)(*piVar10 + 0x40),
                                  (float)((double)(longlong)iVar7 * dVar15));
      iVar7 = iVar7 + 1;
      *(float *)(*piVar10 + 0x40) = (float)dVar14;
    } while (iVar7 < 4);
    iVar7 = 0;
    uVar9 = uVar12;
    do {
      pMVar6 = CreateMoby(0x21f);
      iVar5 = (int)uVar9;
      *(MobyInstance **)(iVar5 + 4) = pMVar6;
      pMVar6->drawDistance = 0x40;
      *(ushort *)(*(int *)(iVar5 + 4) + 0x34) = *(ushort *)(*(int *)(iVar5 + 4) + 0x34) | 2;
      iVar13 = *(int *)(iVar5 + 4);
      *(f32 *)(iVar13 + 0x10) = (moby->pos).x;
      *(f32 *)(iVar13 + 0x14) = (moby->pos).y;
      *(f32 *)(iVar13 + 0x18) = (moby->pos).z;
      *(f32 *)(iVar13 + 0x1c) = (moby->pos).w;
      iVar13 = *(int *)(iVar5 + 4);
      *(f32 *)(iVar13 + 0x40) = (moby->rotation).x;
      *(f32 *)(iVar13 + 0x44) = (moby->rotation).y;
      *(f32 *)(iVar13 + 0x48) = (moby->rotation).z;
      *(f32 *)(iVar13 + 0x4c) = (moby->rotation).w;
      dVar14 = (double)FastWrapRot
                                 (*(float *)(*(int *)(iVar5 + 4) + 0x40),
                                  (float)((double)(longlong)iVar7 * dVar15));
      iVar7 = iVar7 + 1;
      uVar9 = uVar9 + 0xc;
      *(float *)(*(int *)(iVar5 + 4) + 0x40) = (float)dVar14;
    } while (iVar7 < 4);
    iVar7 = 0;
    do {
      pMVar6 = CreateMoby(0x220);
      iVar5 = (int)uVar12;
      *(MobyInstance **)(iVar5 + 8) = pMVar6;
      pMVar6->drawDistance = 0x40;
      *(ushort *)(*(int *)(iVar5 + 8) + 0x34) = *(ushort *)(*(int *)(iVar5 + 8) + 0x34) | 2;
      iVar13 = *(int *)(iVar5 + 8);
      *(f32 *)(iVar13 + 0x10) = (moby->pos).x;
      *(f32 *)(iVar13 + 0x14) = (moby->pos).y;
      *(f32 *)(iVar13 + 0x18) = (moby->pos).z;
      *(f32 *)(iVar13 + 0x1c) = (moby->pos).w;
      iVar13 = *(int *)(iVar5 + 8);
      *(f32 *)(iVar13 + 0x40) = (moby->rotation).x;
      *(f32 *)(iVar13 + 0x44) = (moby->rotation).y;
      *(f32 *)(iVar13 + 0x48) = (moby->rotation).z;
      *(f32 *)(iVar13 + 0x4c) = (moby->rotation).w;
      dVar14 = (double)FastWrapRot
                                 (*(float *)(*(int *)(iVar5 + 8) + 0x40),
                                  (float)((double)(longlong)iVar7 * dVar15));
      iVar7 = iVar7 + 1;
      uVar12 = uVar12 + 0xc;
      *(float *)(*(int *)(iVar5 + 8) + 0x40) = (float)dVar14;
    } while (iVar7 < 4);
    iVar7 = 0;
    puVar8 = (undefined4 *)moby->pVar;
    do {
      iVar13 = 0;
      puVar11 = puVar8;
      do {
        if (iVar13 != 0 || iVar7 != 0) {
          UpdateMobyTransform((MobyInstance *)*puVar11);
        }
        iVar13 = iVar13 + 1;
        puVar11 = puVar11 + 1;
      } while (iVar13 < 3);
      iVar7 = iVar7 + 1;
      puVar8 = puVar8 + 3;
    } while (iVar7 < 4);
    moby->state = '\x01';
  }
  return;
}


