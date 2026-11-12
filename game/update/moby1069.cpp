// game/update/moby1069.cpp -- reconstructed from NPEA00385 EBOOT
// STATUS: NOT STARTED (raw Ghidra output)
// 8 functions, 0x1b1eb8-0x1b32b8
#include <stdlib.h>
#include "game/update/moby1069.h"
#include "game/debug.h"
#include "game/draw.h"
#include "game/hero.h"
#include "game/hud.h"
#include "game/mobyfunc.h"
#include "game/mobyutil.h"
#include "game/sound.h"
#include "game/vuchain.h"
#include "idol/fastfunc.h"

// 0x01b1eb8 (0x43c bytes)
void M1069_001b1eb8(int param_1)

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
  uVar12 = GetEffectTex(DAT_00757b90);
  uVar14 = DAT_00757b90;
  puVar9[0x25] = uVar12;
  GetEffectTex(uVar14);
  uVar12 = SCE_GS_SET_TEX1(0,0,1,1,1,0,0xff90);
  puVar9[0x26] = uVar12;
  uVar12 = SCE_GS_SET_CLAMP(0,0,0,0,0,0);
  puVar9[0x24] = uVar12;
  uVar12 = idol_draw::PackCmd(DAT_00e62020,DAT_00757b84,DAT_00e62024,DAT_00757b88,DAT_00757b8c);
  puVar9[0x27] = uVar12;
  FastMtx4Identity((float *)(puVar9 + 0xe));
  iVar23 = 0;
  do {
    puVar19 = &DAT_00757b9c;
    DAT_00757ba8 = DAT_00757bb8;
    dVar33 = 0.0;
    dVar25 = (double)MB_randRangeFloat(0.0,0.2);
    DAT_00757bb8 = (float)dVar25;
    uVar24 = 0;
    dVar25 = 0.5;
    dVar34 = 0.125;
    puVar20 = &DAT_00757ba0;
    lVar21 = uVar10 - 0x110;
    lVar16 = lVar1;
    lVar17 = lVar1;
    lVar18 = lVar1;
    do {
      iVar8 = (((int)uVar24 >> 1) + (uint)((int)uVar24 < 0 && (uVar24 & 1) != 0) + iVar23) * 0x10;
      pfVar15 = (float *)(iVar8 + iVar7 + 0x230);
      pfVar13 = (float *)(iVar8 + iVar7 + 0x23c);
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
        uVar14 = FastLerpColor((double)*pfVar13,DAT_00e62028,DAT_00757b94);
      }
      else {
        fVar2 = (float)(dVar28 - (double)*(float *)(iVar7 + 0x214));
        fVar3 = (float)(dVar29 - (double)*(float *)(iVar7 + 0x210));
        fVar4 = (float)(dVar27 - (double)*(float *)(iVar7 + 0x218));
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
        uVar6 = DAT_00e6202c;
        uVar14 = DAT_00757b98;
        *(float *)((int)lVar16 + 0xb8) = (float)((double)*(float *)((int)lVar16 + 0xb8) - dVar34);
        uVar14 = FastLerpColor((double)*pfVar13,uVar6,uVar14);
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


// 0x01b22f4 (0x78 bytes)
void FUN_001b22f4(longlong param_1)

{
  MobyModeBit MVar1;
  ushort uVar2;
  uint uVar3;
  MobyInstance *pMVar4;
  ushort *puVar5;
  
  puVar5 = *(ushort **)((int)&g_MobyGroups + (int)(param_1 << 2));
  if (puVar5 != (ushort *)0x0) {
    do {
      pMVar4 = g_MobyInstance;
      uVar3 = *puVar5 & 0x7fff;
      if (g_MobyInstance[uVar3].state < 0x7f) {
        MVar1 = g_MobyInstance[uVar3].modeBits;
        g_MobyInstance[uVar3].state = '\x11';
        pMVar4[uVar3].collision = (ushort *)0x0;
        pMVar4[uVar3].modeBits =
             MVar1 & (MIRROR|CAN_BE_DAMAGED|HIDE_BACKFACES|DISABLE_Z_WRITE|DRAW_SHADOW|
                      DRAW_TRANSPARENT_WEIRD|LOCK_ROTATION|NO_DRAW|UNK_40|HAS_SPECIAL_VARS|HAS_GLOW|
                      TRANSPARENT|NO_POST_UPDATE|NO_UPDATE|DISABLED) | DISABLED;
      }
      uVar2 = *puVar5;
      puVar5 = puVar5 + 1;
    } while (-1 < (short)uVar2);
  }
  return;
}


// 0x01b236c (0x74 bytes)
void M1069_001b236c(longlong param_1)

{
  MobyModeBit MVar1;
  ushort uVar2;
  uint uVar3;
  MobyInstance *pMVar4;
  MobyInstance *pMVar5;
  ushort *puVar6;
  
  puVar6 = *(ushort **)((int)&g_MobyGroups + (int)(param_1 << 2));
  do {
    pMVar5 = g_MobyInstance;
    uVar3 = *puVar6 & 0x7fff;
    if (g_MobyInstance[uVar3].state == '\x11') {
      pMVar4 = g_MobyInstance + uVar3;
      MVar1 = g_MobyInstance[uVar3].modeBits;
      g_MobyInstance[uVar3].state = '\0';
      pMVar5[uVar3].collision = pMVar4->pClass->collision;
      pMVar5[uVar3].modeBits =
           MVar1 & (MIRROR|CAN_BE_DAMAGED|HIDE_BACKFACES|CAN_BE_AUTO_TARGETED|DISABLE_Z_WRITE|
                    DRAW_SHADOW|DRAW_TRANSPARENT_WEIRD|LOCK_ROTATION|NO_DRAW|UNK_40|HAS_SPECIAL_VARS
                    |HAS_GLOW|TRANSPARENT|NO_POST_UPDATE|NO_UPDATE) | CAN_BE_AUTO_TARGETED;
    }
    uVar2 = *puVar6;
    puVar6 = puVar6 + 1;
  } while (-1 < (short)uVar2);
  return;
}


// 0x01b23e0 (0x14 bytes)
void M1069_001b23e0(void)

{
  DAT_00757c48 = 0x10000;
  return;
}


// 0x01b2480 (0xc2c bytes)
// strings: 001b2430: '@FffAp' (raw) | 001b2440: '@&ff' (raw)

/* Moby 1069 */

void UpdateMoby_1069(MobyInstance *moby)

{
  char cVar1;
  byte bVar2;
  f32 fVar3;
  void *pvVar4;
  f32 fVar5;
  uint uVar6;
  uint uVar7;
  undefined4 uVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  ulonglong uVar12;
  longlong lVar13;
  uint uVar14;
  int iVar15;
  int iVar16;
  undefined *unused1;
  longlong lVar17;
  int iVar18;
  MobyInstance *in_r5;
  longlong lVar19;
  MobyInstance *pMVar20;
  void *pvVar21;
  ulonglong uVar22;
  double dVar23;
  double dVar24;
  double dVar25;
  double dVar26;
  double dVar27;
  double dVar28;
  double dVar29;
  double dVar30;
  double dVar31;
  double dVar32;
  GPiece<16> auVar33;
  GPiece<16> auVar34;
  GPiece<16> auVar35;
  float fVar36;
  float fVar37;
  Vec4 local_c0;
  float local_b0;
  f32 local_ac;
  f32 local_a8;
  f32 local_a4;
  f32 local_a0;
  f32 local_9c;
  f32 local_98;
  f32 local_94;
  float local_90;
  float local_8c;
  float local_88;
  undefined4 local_84;
  longlong local_80;
  
  lVar13 = (longlong)(int)moby;
  uVar12 = ZEXT48(&stack0x00000000);
  pMVar20 = (MobyInstance *)0x0;
  fVar37 = (moby->pos).z;
  pvVar21 = (void *)0x0;
  local_c0.x = -(moby->pos).x;
  local_c0.y = -(moby->pos).y;
  pvVar4 = moby->pVar;
  uVar22 = ZEXT48(pvVar4);
  local_b0 = (moby->rotation).x;
  local_c0.w = (moby->pos).w;
  local_c0.z = -fVar37;
  local_ac = (moby->rotation).y;
  local_a8 = (moby->rotation).z;
  local_a4 = (moby->rotation).w;
  cVar1 = moby->setByGroup;
  if (*(int *)((int)pvVar4 + 0xa0) != -1) {
    pMVar20 = g_MobyInstance + *(int *)((int)pvVar4 + 0xa0);
    pvVar21 = pMVar20->pVar;
    in_r5 = g_MobyInstance;
  }
  fVar36 = local_b0;
  if (cVar1 == '\x02') {
    moby->setByGroup = '\x03';
    moby->state = '\x02';
    *(uint *)((int)pvVar4 + 0xac) = (uint)*(byte *)((int)pvVar4 + 0xbd);
    fVar36 = (moby->rotation).x;
    fVar37 = (moby->pos).z;
    cVar1 = moby->setByGroup;
  }
  bVar2 = moby->state;
  unused1 = (undefined *)(uint)bVar2;
  if (bVar2 == 5) {
    dVar23 = (double)*(float *)((int)pvVar4 + 0xb8);
    dVar25 = (double)(fVar37 + *(float *)((int)pvVar4 + 0xb0));
    if ((g_framesNotGrounded == 0) && (g_standingOnMoby == moby)) {
      iVar15 = *(int *)((int)pvVar4 + 0xac);
      if (iVar15 == 0) {
        PlayMobySound(0,0,moby);
        iVar15 = *(int *)((int)pvVar4 + 0xac);
      }
      auVar33 = ZEXT416(0xffffffff);
      auVar33 = auVar33 | auVar33 << 0x20 | auVar33 << 0x40 | auVar33 << 0x60;
      in_r5 = (MobyInstance *)&DAT_00720000;
      auVar34 = vectorShiftLeftIntegerWord(auVar33,auVar33);
      auVar33 = loadVectorLeftIndexed(0x44,0x1b23f8);
      auVar33 = auVar33 >> 0x60 & (GPiece<16>)0xffffffff;
      auVar35 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
      auVar33 = vectorMultiplyAddFloatingPoint
                          (auVar35,auVar33 | auVar33 << 0x20 | auVar33 << 0x40 | auVar33 << 0x60,
                           auVar34);
      unused1 = (undefined *)(int)(animationSpeed * 90.5);
      local_80 = (longlong)(int)unused1;
      auVar33 = vectorConvertToSignedFixedPointWordSaturate(auVar33,0);
      if (iVar15 < (int)unused1) {
        auVar33 = auVar33 >> 0x60 & (GPiece<16>)0xffffffff;
        uVar8 = storeVectorElementWordIndexed
                          (auVar33 | auVar33 << 0x20 | auVar33 << 0x40 | auVar33 << 0x60,0xac,uVar22
                          );
        *(undefined4 *)((int)pvVar4 + 0xacU & 0xfffffffc) = uVar8;
      }
    }
    if (*(int *)((int)pvVar4 + 0xac) == 0) {
      if (dVar25 < dVar23) {
        fVar37 = 0.9;
        fVar36 = (float)(dVar23 - dVar25) * 0.2;
        if ((fVar36 <= 0.9) && (fVar37 = fVar36, fVar36 < -0.9)) {
          fVar37 = -0.9;
        }
        *(float *)((int)pvVar4 + 0xb0) = *(float *)((int)pvVar4 + 0xb0) + fVar37;
      }
      unused1 = &DAT_00720000;
      fVar37 = -(g_FrameTimeSq * 9.8 - *(float *)((int)pvVar4 + 0xb0));
      *(float *)((int)pvVar4 + 0xb0) = fVar37;
      fVar36 = g_FrameTime * 5.0;
      if (fVar36 < fVar37) {
        *(float *)((int)pvVar4 + 0xb0) = fVar36;
        fVar37 = fVar36;
      }
    }
    else {
      fVar37 = 0.0;
      if (*(float *)((int)pvVar4 + 0xb8) - 2.6 < (moby->pos).z) {
        unused1 = &DAT_00720000;
        fVar37 = g_FrameTime * -0.25;
      }
      *(float *)((int)pvVar4 + 0xb0) = fVar37;
    }
    (moby->pos).z = (moby->pos).z + fVar37;
    dVar23 = (double)FastWrapRot(*(float *)((int)pvVar4 + 0xc0),0.01);
    *(float *)((int)pvVar4 + 0xc0) = (float)dVar23;
    dVar23 = (double)FastWrapRot((float)dVar23,0.017);
    *(float *)((int)pvVar4 + 0xc4) = (float)dVar23;
    fVar37 = *(float *)((int)pvVar4 + 0xc0);
    fVar36 = 3.1415925 - fVar37;
    if (fVar37 - (3.1415925 - fVar37) < 0.0) {
      fVar36 = fVar37;
    }
    dVar25 = (double)(float)(3.141592502593994 - dVar23);
    if (dVar23 - (double)(float)(3.141592502593994 - dVar23) < 0.0) {
      dVar25 = dVar23;
    }
    fVar9 = -3.1415925 - fVar37;
    if ((-3.1415925 - fVar37) - fVar36 < 0.0) {
      fVar9 = fVar36;
    }
    dVar26 = (double)(float)(-3.141592502593994 - dVar23);
    if ((double)(float)(-3.141592502593994 - dVar23) - dVar25 < 0.0) {
      dVar26 = dVar25;
    }
    fVar10 = fVar9 * fVar9;
    dVar25 = (double)(float)(dVar26 * dVar26);
    fVar37 = fVar10 * fVar10 * fVar9;
    dVar27 = (double)(float)(dVar25 * (double)(float)(dVar25 * dVar26));
    fVar36 = fVar10 * fVar37;
    dVar28 = (double)(float)(dVar25 * dVar27);
    dVar23 = (double)((fVar10 * fVar36 * 2.601887e-06 +
                      fVar36 * -0.0001980741 +
                      fVar37 * 0.0083330255 + fVar10 * fVar9 * -0.16666657 + fVar9) * 0.02);
    dVar25 = (double)(((float)(dVar25 * dVar28) * 2.601887e-06 +
                      (float)(dVar28 * -0.0001980741071747616 +
                             (double)(float)(dVar27 * 0.008333025500178337 +
                                            (double)(float)((double)(float)(dVar25 * dVar26) *
                                                            -0.16666656732559204 + dVar26)))) * 0.02
                     );
    if (*(int *)((int)pvVar4 + 0xac) != 0) {
      FastDecTimerS32(uVar22 + 0xac);
      fVar37 = g_heroPosition.y - (moby->pos).y;
      fVar36 = g_heroPosition.x - (moby->pos).x;
      fVar9 = g_heroPosition.z - (moby->pos).z;
      dVar26 = (double)((fVar9 * (moby->transform).v0.z +
                        fVar36 * (moby->transform).v0.x + fVar37 * (moby->transform).v0.y) * 0.03);
      dVar23 = (double)FastWrapRot
                                 ((float)dVar23,
                                  (fVar9 * (moby->transform).v1.z +
                                  fVar36 * (moby->transform).v1.x + fVar37 * (moby->transform).v1.y)
                                  * -0.03);
      dVar23 = (double)FastWrapRot((float)dVar23,(float)dVar26);
      local_a0 = (moby->rotation).x;
      local_9c = (moby->rotation).y;
      lVar17 = uVar12 - 0x90;
      lVar19 = lVar13 + 0x10;
      local_98 = (moby->rotation).z;
      local_94 = (moby->rotation).w;
      dVar26 = (double)(moby->pos).z;
      MB_TransformBetweenFrames(&g_heroPosition,lVar17,lVar19,uVar12 - 0xa0,lVar13 + 0x40)
      ;
      in_r5 = (MobyInstance *)lVar19;
      unused1 = (undefined *)lVar17;
      DAT_00969dd0 = local_90 - g_heroPosition.x;
      DAT_00969dd4 = local_8c - g_heroPosition.y;
      DAT_00969ddc = local_84;
      DAT_00969dd8 = (local_88 - g_heroPosition.z) + (float)((double)(moby->pos).z - dVar26);
    }
    dVar26 = 0.1745329201221466;
    DeltAng((float)dVar23,g_FrameTime * 0.17453292,&(moby->rotation).x,
                      (int)unused1,(int)in_r5,0);
    DeltAng((float)dVar25,(float)((double)g_FrameTime * dVar26),
                      &(moby->rotation).y,(int)unused1,(int)in_r5,0);
    fVar3 = (moby->rotation).x;
    fVar5 = (moby->rotation).y;
    uVar14 = (int)fVar3 >> 0x1f;
    uVar6 = (int)fVar5 >> 0x1f;
    fVar37 = (moby->rotation).x;
    if (0x3f060a92 < (int)((uVar14 >> 1 ^ (uint)fVar3) - uVar14)) {
      (moby->rotation).x = 0.5235988;
      fVar37 = 0.5235988;
    }
    if (fVar37 < -0.5235988) {
      (moby->rotation).x = -0.5235988;
    }
    fVar37 = (moby->rotation).y;
    if (0x3f060a92 < (int)((uVar6 >> 1 ^ (uint)fVar5) - uVar6)) {
      (moby->rotation).y = 0.5235988;
      fVar37 = 0.5235988;
    }
    if (fVar37 < -0.5235988) {
      (moby->rotation).y = -0.5235988;
    }
  }
  else if (bVar2 == 4) {
    if ((1 < *(byte *)((int)pvVar21 + 0xef)) || (pMVar20->state < 0xc)) {
      dVar23 = (double)MB_randRangeFloat
                                 (g_FrameTime,g_FrameTime * 4.0);
      *(float *)((int)pvVar4 + 0xb0) = (float)dVar23;
      dVar23 = (double)MB_randRot();
      *(float *)((int)pvVar4 + 0xc0) = (float)dVar23;
      dVar23 = (double)MB_randRot();
      *(float *)((int)pvVar4 + 0xc4) = (float)dVar23;
      (moby->rotation).x = 0.0;
      (moby->rotation).y = 0.0;
      moby->state = '\x05';
      *(undefined4 *)((int)pvVar4 + 0xac) = 0;
    }
  }
  else if (bVar2 == 3) {
    fVar9 = (1.3962634 - fVar36) * 0.05;
    fVar10 = 3.1415925 - fVar9;
    if (fVar9 - (3.1415925 - fVar9) < 0.0) {
      fVar10 = fVar9;
    }
    fVar11 = -3.1415925 - fVar9;
    if ((-3.1415925 - fVar9) - fVar10 < 0.0) {
      fVar11 = fVar10;
    }
    (moby->rotation).x = fVar36 + fVar9;
    fVar36 = fVar11 * fVar11;
    fVar9 = fVar36 * fVar36 * fVar11;
    fVar10 = fVar36 * fVar9;
    (moby->pos).z =
         -((fVar36 * fVar10 * 2.601887e-06 +
           fVar10 * -0.0001980741 + fVar9 * 0.0083330255 + fVar36 * fVar11 * -0.16666657 + fVar11) *
           3.1 - fVar37);
    fVar37 = -(*(float *)((int)pvVar4 + 0xb4) * g_FrameTimeSq - *(float *)((int)pvVar4 + 0xb0));
    *(float *)((int)pvVar4 + 0xb0) = fVar37;
    fVar37 = (moby->pos).z + fVar37;
    (moby->pos).z = fVar37;
    if (fVar37 < *(float *)((int)pvVar4 + 0xb8) - 15.0) {
      if (*(char *)((int)pvVar4 + 0xbc) == '\0') {
        DeleteMoby(moby);
        return;
      }
      *(undefined4 *)((int)pvVar4 + 0xb0) = 0;
      moby->state = '\x04';
    }
  }
  else if (bVar2 == 2) {
    dVar31 = (double)*(float *)((int)pvVar4 + 0xa4);
    dVar23 = (double)FastIntToDouble(*(undefined4 *)((int)pvVar4 + 0xac));
    fVar36 = MB_WrapRot((float)(dVar23 * 0.75));
    dVar30 = 3.141592502593994;
    dVar29 = -3.141592502593994;
    dVar28 = -0.16666656732559204;
    dVar27 = 0.008333025500178337;
    dVar26 = -0.0001980741071747616;
    dVar25 = 2.601886990305502e-06;
    dVar23 = 0.01745329238474369;
    fVar37 = 3.1415925 - fVar36;
    if (fVar36 - (3.1415925 - fVar36) < 0.0) {
      fVar37 = fVar36;
    }
    fVar9 = -3.1415925 - fVar36;
    if ((-3.1415925 - fVar36) - fVar37 < 0.0) {
      fVar9 = fVar37;
    }
    fVar10 = fVar9 * fVar9;
    fVar37 = fVar10 * fVar10 * fVar9;
    fVar36 = fVar10 * fVar37;
    dVar31 = (double)FastWrapRot
                               ((float)dVar31,
                                (fVar10 * fVar36 * 2.601887e-06 +
                                fVar36 * -0.0001980741 +
                                fVar37 * 0.0083330255 + fVar10 * fVar9 * -0.16666657 + fVar9) *
                                0.017453292);
    (moby->rotation).x = (float)dVar31;
    dVar32 = (double)*(float *)((int)pvVar4 + 0xa8);
    dVar31 = (double)FastIntToDouble(*(undefined4 *)((int)pvVar4 + 0xac));
    fVar37 = MB_WrapRot((float)(dVar31 * 0.8899999856948853));
    dVar24 = (double)(fVar37 + 1.5707963);
    dVar31 = (double)(float)(dVar30 - dVar24);
    if (dVar24 - (double)(float)(dVar30 - dVar24) < 0.0) {
      dVar31 = dVar24;
    }
    dVar30 = (double)(float)(dVar29 - dVar24);
    if ((double)(float)(dVar29 - dVar24) - dVar31 < 0.0) {
      dVar30 = dVar31;
    }
    dVar29 = (double)(float)(dVar30 * dVar30);
    dVar24 = (double)(float)(dVar29 * (double)(float)(dVar29 * dVar30));
    dVar31 = (double)(float)(dVar29 * dVar24);
    dVar23 = (double)FastWrapRot
                               ((float)dVar32,
                                (float)((double)(float)((double)(float)(dVar29 * dVar31) * dVar25 +
                                                       (double)(float)(dVar31 * dVar26 +
                                                                      (double)(float)(dVar24 * 
                                                  dVar27 + (double)(float)((double)(float)(dVar29 * 
                                                  dVar30) * dVar28 + dVar30)))) * dVar23));
    (moby->rotation).y = (float)dVar23;
    iVar15 = FastDecTimerS32(uVar22 + 0xac);
    if (iVar15 != 0) {
      if (*(char *)((int)pvVar4 + 0xbe) != '\0') {
        *(undefined1 *)((int)pvVar21 + 0x19d) = *(undefined1 *)((int)pvVar4 + 0xbf);
        pMVar20->state = '\f';
      }
      moby->state = '\x03';
    }
  }
  else if (bVar2 == 1) {
    if (cVar1 == '\x01') {
      iVar15 = *(int *)((int)pvVar4 + 0xac);
      if (iVar15 == 0) {
        iVar15 = rand();
        iVar15 = iVar15 % 10;
        *(int *)((int)pvVar4 + 0xac) = iVar15;
      }
      if (*(char *)((int)pvVar4 + 0xbe) != '\0') {
        MB_SetGroupField(moby->group,2);
        iVar15 = *(int *)((int)pvVar4 + 0xac);
      }
      dVar31 = (double)*(float *)((int)pvVar4 + 0xa4);
      dVar23 = (double)FastIntToDouble(iVar15);
      fVar36 = MB_WrapRot((float)(dVar23 * 0.75));
      dVar30 = 3.141592502593994;
      dVar29 = -3.141592502593994;
      dVar28 = -0.16666656732559204;
      dVar27 = 0.008333025500178337;
      dVar26 = -0.0001980741071747616;
      dVar25 = 2.601886990305502e-06;
      dVar23 = 0.01745329238474369;
      fVar37 = 3.1415925 - fVar36;
      if (fVar36 - (3.1415925 - fVar36) < 0.0) {
        fVar37 = fVar36;
      }
      fVar9 = -3.1415925 - fVar36;
      if ((-3.1415925 - fVar36) - fVar37 < 0.0) {
        fVar9 = fVar37;
      }
      fVar10 = fVar9 * fVar9;
      fVar37 = fVar10 * fVar10 * fVar9;
      fVar36 = fVar10 * fVar37;
      dVar31 = (double)FastWrapRot
                                 ((float)dVar31,
                                  (fVar10 * fVar36 * 2.601887e-06 +
                                  fVar36 * -0.0001980741 +
                                  fVar37 * 0.0083330255 + fVar10 * fVar9 * -0.16666657 + fVar9) *
                                  0.017453292);
      (moby->rotation).x = (float)dVar31;
      dVar32 = (double)*(float *)((int)pvVar4 + 0xa8);
      dVar31 = (double)FastIntToDouble(*(undefined4 *)((int)pvVar4 + 0xac));
      fVar37 = MB_WrapRot((float)(dVar31 * 0.8899999856948853));
      dVar24 = (double)(fVar37 + 1.5707963);
      dVar31 = (double)(float)(dVar30 - dVar24);
      if (dVar24 - (double)(float)(dVar30 - dVar24) < 0.0) {
        dVar31 = dVar24;
      }
      dVar30 = (double)(float)(dVar29 - dVar24);
      if ((double)(float)(dVar29 - dVar24) - dVar31 < 0.0) {
        dVar30 = dVar31;
      }
      dVar29 = (double)(float)(dVar30 * dVar30);
      dVar24 = (double)(float)(dVar29 * (double)(float)(dVar29 * dVar30));
      dVar31 = (double)(float)(dVar29 * dVar24);
      dVar23 = (double)FastWrapRot
                                 ((float)dVar32,
                                  (float)((double)(float)((double)(float)(dVar29 * dVar31) * dVar25
                                                         + (double)(float)(dVar31 * dVar26 +
                                                                          (double)(float)(dVar24 * 
                                                  dVar27 + (double)(float)((double)(float)(dVar29 * 
                                                  dVar30) * dVar28 + dVar30)))) * dVar23));
      (moby->rotation).y = (float)dVar23;
    }
  }
  else if (bVar2 == 0) {
    *(undefined4 *)((int)pvVar4 + 0x20) = 0;
    *(undefined2 *)((int)pvVar4 + 0x24) = 0;
    *(undefined1 *)((int)pvVar4 + 0x28) = 4;
    *(undefined2 *)((int)pvVar4 + 0x3e) = 0xd;
    uVar14 = rand();
    if ((uVar14 & 1) != 0) {
      dVar23 = (double)FastWrapRot((moby->rotation).z,3.1415927);
      (moby->rotation).z = (float)dVar23;
    }
    *(f32 *)((int)pvVar4 + 0xa4) = (moby->rotation).x;
    fVar3 = (moby->rotation).y;
    *(undefined4 *)((int)pvVar4 + 200) = 0xffffffff;
    *(f32 *)((int)pvVar4 + 0xa8) = fVar3;
    moby->setByGroup = '\0';
    moby->state = '\x01';
    if ((moby->levelFlagIdx != 0xff) && (g_LevelFlags[Level][(byte)moby->levelFlagIdx] == -1)) {
      (moby->pos).z = (moby->pos).z - 5.0;
      if (*(char *)((int)pvVar4 + 0xbc) == '\0') {
        DeleteMoby(moby);
        return;
      }
      moby->state = '\x05';
    }
  }
  if ((moby->state == '\x05') && (iVar15 = FastDecTimerS32(uVar22 + 200), iVar15 != 0)) {
    uVar14 = (int)*(uint *)((int)pvVar4 + 0xcc) >> 0x1f;
    uVar6 = (int)*(uint *)((int)pvVar4 + 0xb8) >> 0x1f;
    fVar3 = (moby->pos).z;
    uVar7 = (int)fVar3 >> 0x1f;
    iVar15 = (uVar14 >> 1 ^ *(uint *)((int)pvVar4 + 0xcc)) - uVar14;
    iVar18 = (uVar6 >> 1 ^ *(uint *)((int)pvVar4 + 0xb8)) - uVar6;
    iVar16 = (uVar7 >> 1 ^ (uint)fVar3) - uVar7;
    if (((iVar18 <= iVar15) && (iVar16 < iVar18)) || ((iVar15 <= iVar18 && (iVar18 < iVar16)))) {
      PlayMobySound(0,0,moby);
      iVar16 = rand();
      iVar15 = (int)(animationSpeed * 20.5);
      local_80 = (longlong)iVar15;
      *(int *)((int)pvVar4 + 200) = (iVar16 - (iVar16 / iVar15) * iVar15) + iVar15;
    }
  }
  *(f32 *)((int)pvVar4 + 0xcc) = (moby->pos).z;
  local_c0.x = local_c0.x + (moby->pos).x;
  local_c0.y = local_c0.y + (moby->pos).y;
  local_c0.z = local_c0.z + (moby->pos).z;
  MB_GetOrientation
            ((MobyInstance *)((int)pvVar4 + 0x60),&local_c0,uVar12 - 0xb0,lVar13 + 0x40);
  return;
}


// 0x01b30ac (0x14 bytes)
void M1069_001b30ac(void)

{
  DAT_00757cb8 = 0x10000;
  return;
}


// 0x01b30e8 (0xc8 bytes)
void M107_001b30e8
               (double param_1,undefined8 param_2,double param_3,double param_4)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  double dVar5;
  double dVar6;
  
  fVar1 = (float)(param_3 / param_4) * 3.1415925 + 1.5707963;
  fVar2 = 3.1415925 - fVar1;
  if (fVar1 - (3.1415925 - fVar1) < 0.0) {
    fVar2 = fVar1;
  }
  fVar3 = -3.1415925 - fVar1;
  if ((-3.1415925 - fVar1) - fVar2 < 0.0) {
    fVar3 = fVar2;
  }
  fVar1 = fVar3 * fVar3;
  fVar2 = fVar1 * fVar1 * fVar3;
  fVar4 = fVar1 * fVar2;
  dVar6 = (double)((fVar1 * fVar4 * 2.601887e-06 +
                    fVar4 * -0.0001980741 +
                    fVar2 * 0.0083330255 + fVar1 * fVar3 * -0.16666657 + fVar3 + 1.0) * 0.5);
  dVar5 = (double)FastDiffRots(param_2,param_1);
  FastWrapRot((float)(dVar5 * dVar6),(float)param_1);
  return;
}


// 0x01b31d8 (0xe0 bytes)
void M107_001b31d8
               (double param_1,double param_2,int param_3,float *param_4,float *param_5)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  
  fVar1 = param_5[1];
  fVar2 = param_4[1];
  fVar3 = param_5[2];
  fVar4 = param_4[2];
  fVar5 = (float)(param_1 / param_2) * 3.1415925 + 1.5707963;
  fVar6 = 3.1415925 - fVar5;
  if (fVar5 - (3.1415925 - fVar5) < 0.0) {
    fVar6 = fVar5;
  }
  fVar7 = -3.1415925 - fVar5;
  if ((-3.1415925 - fVar5) - fVar6 < 0.0) {
    fVar7 = fVar6;
  }
  fVar5 = fVar7 * fVar7;
  fVar6 = fVar5 * fVar5 * fVar7;
  fVar8 = fVar5 * fVar6;
  fVar5 = (fVar5 * fVar8 * 2.601887e-06 +
           fVar8 * -0.0001980741 + fVar6 * 0.0083330255 + fVar5 * fVar7 * -0.16666657 + fVar7 + 1.0)
          * 0.5;
  *(float *)(param_3 + 0x10) = (*param_5 - *param_4) * fVar5 + *param_4;
  *(float *)(param_3 + 0x14) = (fVar1 - fVar2) * fVar5 + param_4[1];
  *(float *)(param_3 + 0x18) = (fVar3 - fVar4) * fVar5 + param_4[2];
  *(float *)(param_3 + 0x1c) = param_4[3];
  return;
}


