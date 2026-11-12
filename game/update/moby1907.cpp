// game/update/moby1907.cpp -- reconstructed from NPEA00385 EBOOT
// STATUS: NOT STARTED (raw Ghidra output)
// 14 functions, 0x2d6f28-0x2d7c4c
#include "game/update/moby1907.h"
#include "game/camera.h"
#include "game/draw.h"
#include "game/hero.h"
#include "game/hud.h"
#include "game/mobyfunc.h"
#include "game/mobyutil.h"
#include "game/update/moby849.h"
#include "game/vuchain.h"
#include "idol/fastfunc.h"

// 0x02d6f28 (0x1d4 bytes)
undefined8 FUN_002d6f28(double param_1,longlong param_2,float *param_3,float *param_4)

{
  float fVar1;
  ushort uVar2;
  void *pvVar3;
  float fVar4;
  uint uVar5;
  float fVar6;
  float fVar7;
  MobyInstance *pMVar8;
  MobyInstance *pMVar9;
  ushort *puVar10;
  double dVar11;
  
  pMVar9 = g_MobyInstance;
  puVar10 = *(ushort **)((int)&g_MobyGroups + (int)(param_2 << 2));
  if (puVar10 != (ushort *)0x0) {
    do {
      uVar5 = *puVar10 & 0x7fff;
      if ((g_MobyInstance[uVar5].oClass == GADGEBOT_0772) && (g_MobyInstance[uVar5].state == '\b')) {
        pMVar8 = g_MobyInstance + uVar5;
        pvVar3 = g_MobyInstance[uVar5].pVar;
        g_MobyInstance[uVar5].collision = (g_MobyInstance[uVar5].pClass)->collision;
        pMVar9[uVar5].modeBits =
             pMVar8->modeBits &
             (MIRROR|CAN_BE_DAMAGED|HIDE_BACKFACES|CAN_BE_AUTO_TARGETED|DISABLE_Z_WRITE|DRAW_SHADOW|
              DRAW_TRANSPARENT_WEIRD|LOCK_ROTATION|NO_DRAW|HAS_SPECIAL_VARS|HAS_GLOW|TRANSPARENT|
              NO_POST_UPDATE|NO_UPDATE) | CAN_BE_AUTO_TARGETED;
        pMVar9[uVar5].pos.x = *param_3;
        pMVar9[uVar5].pos.y = param_3[1];
        pMVar9[uVar5].pos.z = param_3[2];
        fVar1 = param_3[3];
        pMVar9[uVar5].state = '\x01';
        pMVar9[uVar5].pos.w = fVar1;
        *(undefined4 *)((int)pvVar3 + 500) = 0x3f800000;
        fVar1 = *param_4 - *param_3;
        *(float *)((int)pvVar3 + 0x1d0) = fVar1;
        fVar4 = param_4[1] - param_3[1];
        *(float *)((int)pvVar3 + 0x1d4) = fVar4;
        dVar11 = (double)SQRT(fVar1 * fVar1 + fVar4 * fVar4);
        *(float *)((int)pvVar3 + 0x1d8) = param_4[2] - param_3[2];
        *(float *)((int)pvVar3 + 0x1dc) = param_4[3];
        *(undefined4 *)((int)pvVar3 + 0x1d8) = 0;
        fVar1 = fVar1 * (float)(param_1 / dVar11);
        fVar4 = fVar4 * (float)(param_1 / dVar11);
        fVar6 = 0.0;
        if (0.0 - dVar11 < 0.0) {
          fVar6 = fVar1;
        }
        fVar7 = 0.0;
        if (0.0 - dVar11 < 0.0) {
          fVar7 = fVar4;
        }
        if (dVar11 - 0.0 < 0.0) {
          fVar6 = fVar1;
        }
        if (dVar11 - 0.0 < 0.0) {
          fVar7 = fVar4;
        }
        *(float *)((int)pvVar3 + 0x1d0) = fVar6;
        *(float *)((int)pvVar3 + 0x1d4) = fVar7;
        dVar11 = (double)MB_computeLobVelocity
                                   (param_1,(double)(DAT_0071f418 * -10.0),param_3,param_4,param_4,0
                                    ,0);
        *(float *)((int)pvVar3 + 0x1d8) = (float)dVar11;
        dVar11 = (double)MB_randRangeSigned(0x402e000000000000,0x4046800000000000);
        *(float *)((int)pvVar3 + 0x1ec) = (float)(dVar11 * 0.01745329238474369);
        return 1;
      }
      uVar2 = *puVar10;
      puVar10 = puVar10 + 1;
    } while (-1 < (short)uVar2);
  }
  return 0;
}


// 0x02d70fc (0x7c bytes)
short FUN_002d70fc(longlong param_1)

{
  ushort uVar1;
  ushort *puVar2;
  short sVar3;
  
  puVar2 = *(ushort **)((int)&g_MobyGroups + (int)(param_1 << 2));
  if (puVar2 == (ushort *)0x0) {
    sVar3 = 0;
  }
  else {
    sVar3 = 0;
    do {
      if ((g_MobyInstance[*puVar2 & 0x7fff].oClass == GADGEBOT_0772) &&
         (g_MobyInstance[*puVar2 & 0x7fff].state != '\b')) {
        sVar3 = sVar3 + 1;
      }
      uVar1 = *puVar2;
      puVar2 = puVar2 + 1;
    } while (-1 < (short)uVar1);
  }
  return sVar3;
}


// 0x02d7188 (0x328 bytes)
void M1907_002d7188(int param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  undefined4 uVar4;
  int iVar5;
  ulonglong *puVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  undefined4 *puVar13;
  float fVar14;
  float fVar15;
  ulonglong uVar16;
  ulonglong uVar17;
  undefined4 uVar19;
  longlong lVar18;
  undefined4 *puVar20;
  undefined4 *puVar21;
  longlong lVar22;
  longlong lVar23;
  longlong lVar24;
  uint uVar25;
  ulonglong unaff_r30;
  ulonglong unaff_r31;
  ulonglong in_LR;
  double dVar26;
  double dVar27;
  double dVar28;
  double dVar29;
  ulonglong in_f30;
  double dVar30;
  ulonglong in_f31;
  double dVar31;
  
  uVar16 = ZEXT48(&stack0x00000000);
  lVar22 = uVar16 - 0x160;
  puVar6 = (ulonglong *)lVar22;
  *puVar6 = uVar16;
  puVar6[0x2e] = in_LR;
  puVar6[0x2a] = in_f30;
  puVar6[0x2b] = in_f31;
  puVar6[0x29] = unaff_r31;
  fVar12 = DAT_007d88ec;
  iVar5 = *(int *)(param_1 + 0x78);
  dVar30 = 1.0;
  fVar1 = *(float *)(iVar5 + 500);
  fVar2 = *(float *)(param_1 + 0x10);
  fVar3 = *(float *)(param_1 + 0x14);
  fVar8 = GameCamera.posX - fVar2;
  fVar7 = fVar1 + 1.0 + DAT_007d88e8;
  fVar9 = fVar7 * fVar8;
  fVar10 = fVar7 * (GameCamera.posY - fVar3);
  puVar6[0x28] = unaff_r30;
  fVar12 = (1.0 - fVar1) + fVar12;
  fVar11 = fVar7 * fVar9;
  fVar14 = -(fVar10 * fVar7);
  fVar1 = *(float *)(param_1 + 0x18);
  *(float *)(puVar6 + 0x14) = fVar2;
  fVar2 = SQRT(fVar9 * fVar9 + --(fVar10 * fVar10));
  *(float *)((int)puVar6 + 0xa4) = fVar3;
  fVar15 = DAT_007d88e4;
  uVar19 = *(undefined4 *)(param_1 + 0x1c);
  *(float *)(puVar6 + 0x15) = fVar1;
  *(undefined4 *)((int)puVar6 + 0xac) = uVar19;
  fVar3 = SQRT(fVar14 * fVar14 + --(fVar11 * fVar11));
  fVar14 = fVar12 / fVar2;
  *(float *)(puVar6 + 0x15) = fVar1 - fVar15;
  dVar31 = 0.0;
  *(undefined4 *)((int)puVar6 + 0x9c) = 0;
  *(undefined4 *)((int)puVar6 + 0x94) = 0;
  *(undefined4 *)(puVar6 + 0x12) = 0;
  *(float *)(puVar6 + 0x13) = fVar7;
  *(float *)(puVar6 + 0xe) = fVar8;
  *(undefined4 *)(puVar6 + 0x11) = 0;
  *(undefined4 *)(puVar6 + 0xf) = 0;
  *(undefined4 *)((int)puVar6 + 0x7c) = 0;
  *(undefined4 *)((int)puVar6 + 0x8c) = 0;
  uVar19 = DAT_007d88e0;
  fVar12 = fVar12 / fVar3;
  dVar29 = (double)(fVar9 * fVar14);
  dVar28 = -(double)(fVar10 * fVar14);
  dVar27 = dVar31;
  if (0.0 - fVar2 < 0.0) {
    dVar27 = dVar29;
  }
  dVar26 = dVar31;
  if (0.0 - fVar2 < 0.0) {
    dVar26 = dVar28;
  }
  if (fVar2 - 0.0 < 0.0) {
    dVar27 = dVar29;
  }
  if (fVar2 - 0.0 < 0.0) {
    dVar26 = dVar28;
  }
  *(float *)((int)puVar6 + 0x84) = (float)dVar27;
  dVar29 = -(double)(fVar11 * fVar12);
  dVar28 = -(double)(fVar10 * fVar7 * fVar12);
  *(float *)(puVar6 + 0x10) = (float)dVar26;
  dVar27 = dVar31;
  if (0.0 - fVar3 < 0.0) {
    dVar27 = dVar29;
  }
  dVar26 = dVar31;
  if (0.0 - fVar3 < 0.0) {
    dVar26 = dVar28;
  }
  if (fVar3 - 0.0 < 0.0) {
    dVar27 = dVar29;
  }
  if (fVar3 - 0.0 < 0.0) {
    dVar26 = dVar28;
  }
  *(float *)(puVar6 + 0xe) = (float)dVar27;
  *(float *)((int)puVar6 + 0x74) = (float)dVar26;
  uVar17 = GetEffectTex(uVar19);
  puVar6[0x25] = uVar17;
  uVar17 = SCE_GS_SET_TEX1(0,0,1,1,1,0,0xff90);
  puVar6[0x26] = uVar17;
  uVar17 = SCE_GS_SET_CLAMP(0,0,0,0,0,0);
  puVar6[0x24] = uVar17;
  uVar17 = idol_draw::PackCmd(DAT_010b6ffc,DAT_007d88d0,DAT_010b7000,DAT_007d88d4,0x80);
  puVar6[0x27] = uVar17;
  uVar19 = FastLerpColor((double)*(float *)(iVar5 + 500),DAT_007d88d8,DAT_007d88dc);
  lVar18 = uVar16 - 0xb0;
  uVar25 = 0;
  puVar21 = &DAT_007d88f0;
  puVar20 = &DAT_007d88f4;
  lVar23 = lVar22;
  lVar24 = lVar22;
  do {
    uVar4 = *puVar20;
    *(undefined4 *)((int)lVar24 + 0x100) = *puVar21;
    *(undefined4 *)((int)lVar24 + 0x104) = uVar4;
    puVar13 = (undefined4 *)lVar18;
    puVar13[3] = 0;
    puVar13[2] = 0;
    puVar13[1] = 0;
    *puVar13 = 0;
    dVar27 = dVar31;
    if ((uVar25 & 1) != 0) {
      dVar27 = dVar30;
    }
    iVar5 = (int)lVar23;
    *(float *)(iVar5 + 0xb8) = (float)dVar27;
    dVar27 = -1.0;
    if ((int)uVar25 < 2) {
      dVar27 = dVar30;
    }
    *(float *)(iVar5 + 0xb4) = (float)dVar27;
    uVar25 = uVar25 + 1;
    puVar21 = puVar21 + 2;
    *(undefined4 *)(iVar5 + 0xbc) = 0x3f800000;
    *(undefined4 *)((int)lVar22 + 0xf0) = uVar19;
    puVar20 = puVar20 + 2;
    lVar18 = lVar18 + 0x10;
    lVar24 = lVar24 + 8;
    lVar23 = lVar23 + 0x10;
    lVar22 = lVar22 + 4;
  } while ((int)uVar25 < 4);
  FastDrawQuad(uVar16 - 0xb0,uVar16 - 0xf0,0,EffectTexHeaders,9);
  return;
}


// 0x02d74b8 (0x128 bytes)
void M1907_002d74b8(int param_1)

{
  ushort uVar1;
  uint uVar2;
  uint uVar3;
  ushort *puVar4;
  MobyInstance *pMVar5;
  int iVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  GPiece<24> auStack_50;
  
  puVar4 = (ushort *)(&g_MobyGroups)[*(byte *)(param_1 + 0x21)];
  if (puVar4 != (ushort *)0x0) {
    uVar7 = 0x3fc6666660000000;
    uVar8 = 0x3fb47ae140000000;
    do {
      pMVar5 = g_MobyInstance + (*puVar4 & 0x7fff);
      if ((pMVar5->oClass == GADGEBOT_0772) && (pMVar5->state < 6 && pMVar5->state != 0)) {
        uVar2 = pMVar5->glowRgba;
        iVar6 = 2;
        uVar3 = DAT_007d8910 << 0x18;
        do {
          GetBonePosition(pMVar5,iVar6,auStack_50);
          MB_DrawGlowFX(uVar7,uVar8,auStack_50,uVar3 | uVar2 & 0xffffff);
          iVar6 = iVar6 + 1;
        } while (iVar6 < 5);
      }
      uVar1 = *puVar4;
      puVar4 = puVar4 + 1;
    } while (-1 < (short)uVar1);
  }
  return;
}


// 0x02d75e0 (0x58 bytes)
void M1907_002d75e0(MobyInstance *param_1)

{
  undefined8 uVar1;
  
  uVar1 = M849_MB_Sucking(param_1);
  if ((int)uVar1 == 0) {
    if (param_1->state == '\a') {
      param_1->state = '\x02';
    }
  }
  else {
    param_1->state = '\a';
  }
  return;
}


// 0x02d7638 (0x58 bytes)
void M1907_002d7638(int param_1)

{
  int iVar1;
  
  iVar1 = M849_0048aa70();
  if (iVar1 == 0) {
    if (*(char *)(param_1 + 0x20) == '\a') {
      *(undefined1 *)(param_1 + 0x20) = 2;
    }
  }
  else {
    *(undefined1 *)(param_1 + 0x20) = 7;
  }
  return;
}


// 0x02d7690 (0x58 bytes)
void M1907_002d7690(int param_1)

{
  int iVar1;
  
  iVar1 = M849_0048acb8();
  if (iVar1 == 0) {
    if (*(char *)(param_1 + 0x20) == '\a') {
      *(undefined1 *)(param_1 + 0x20) = 2;
    }
  }
  else {
    *(undefined1 *)(param_1 + 0x20) = 7;
  }
  return;
}


// 0x02d76e8 (0x38 bytes)
void M1907_002d76e8(int param_1)

{
  M849_0048afe8();
  *(undefined1 *)(param_1 + 0x20) = 7;
  return;
}


// 0x02d7720 (0x40 bytes)
longlong M1907_002d7720(int param_1)

{
  longlong lVar1;
  
  if (param_1 == 0) {
    lVar1 = 0;
  }
  else {
    lVar1 = (ulonglong)*(uint *)(param_1 + 0x78) + 0xd0;
    lVar1 = lVar1 + (ZERO_MASK(*(uint *)(param_1 + 0x78)) & -lVar1);
  }
  return lVar1;
}


// 0x02d7768 (0x94 bytes)
void M1907_002d7768(int param_1)

{
  *(undefined1 *)(param_1 + 0x20) = 8;
  if (*(char *)(param_1 + 0x53) != '\0') {
    MB_SetAnimation(param_1,0,0,(int)(animationSpeed * 10.5));
  }
  *(undefined1 *)(param_1 + 0x31) = 0;
  *(undefined4 *)(param_1 + 0x94) = 0;
  *(ushort *)(param_1 + 0x34) = *(ushort *)(param_1 + 0x34) & 0xefff | 1;
  return;
}


// 0x02d77fc (0x14 bytes)
void M1907_002d77fc(void)

{
  DAT_007d8960 = 0x10000;
  return;
}


// 0x02d7828 (0x228 bytes)
// inlined: FastRSqrt @0x2d78bc, FastRSqrt @0x2d792c, FastRSqrt @0x2d79b0
void M1907_002d7828
               (int param_1,float *param_2,float *param_3,undefined8 param_4,float *param_5)

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
  int iVar12;
  
  iVar12 = 0;
  if (0 < param_1) {
    fVar1 = 0.0;
    do {
      fVar2 = param_3[1] - GameCamera.posY;
      fVar3 = *param_3 - GameCamera.posX;
      fVar8 = param_3[2] - GameCamera.posZ;
      fVar4 = fVar8 * fVar8 + fVar3 * fVar3 + fVar2 * fVar2;
      fVar6 = fVar1;
      fVar5 = fVar1;
      fVar7 = fVar1;
      if (SQRT(fVar4) != 0.0) {
        fVar5 = 1.0 / SQRT(fVar4);
        fVar5 = -(fVar4 * fVar5 * fVar5 - 1.0) * fVar5 * 0.5 + fVar5;
        fVar5 = -(fVar4 * fVar5 * fVar5 - 1.0) * fVar5 * 0.5 + fVar5;
        fVar5 = -(fVar4 * fVar5 * fVar5 - 1.0) * fVar5 * 0.5 + fVar5;
        fVar6 = fVar3 * fVar5;
        fVar7 = fVar2 * fVar5;
        fVar5 = fVar8 * fVar5;
      }
      fVar2 = param_2[1];
      fVar3 = *param_2;
      fVar4 = param_2[2];
      fVar11 = fVar4 * fVar4 + fVar3 * fVar3 + fVar2 * fVar2;
      fVar9 = fVar1;
      fVar10 = fVar1;
      fVar8 = fVar1;
      if (SQRT(fVar11) != 0.0) {
        fVar8 = 1.0 / SQRT(fVar11);
        fVar8 = -(fVar11 * fVar8 * fVar8 - 1.0) * fVar8 * 0.5 + fVar8;
        fVar8 = -(fVar11 * fVar8 * fVar8 - 1.0) * fVar8 * 0.5 + fVar8;
        fVar8 = -(fVar11 * fVar8 * fVar8 - 1.0) * fVar8 * 0.5 + fVar8;
        fVar9 = fVar8 * fVar3;
        fVar10 = fVar8 * fVar2;
        fVar8 = fVar8 * fVar4;
      }
      fVar2 = (fVar5 * fVar8 + fVar6 * fVar9 + fVar7 * fVar10) * 2.0;
      fVar3 = -(fVar2 * fVar10 - fVar7);
      fVar9 = -(fVar2 * fVar9 - fVar6);
      fVar2 = -(fVar2 * fVar8 - fVar5);
      fVar4 = fVar2 * fVar2 + fVar9 * fVar9 + fVar3 * fVar3;
      fVar5 = fVar1;
      fVar6 = fVar1;
      fVar7 = fVar1;
      if (SQRT(fVar4) != 0.0) {
        fVar7 = 1.0 / SQRT(fVar4);
        fVar7 = -(fVar4 * fVar7 * fVar7 - 1.0) * fVar7 * 0.5 + fVar7;
        fVar7 = -(fVar4 * fVar7 * fVar7 - 1.0) * fVar7 * 0.5 + fVar7;
        fVar7 = -(fVar4 * fVar7 * fVar7 - 1.0) * fVar7 * 0.5 + fVar7;
        fVar5 = fVar7 * fVar9;
        fVar6 = fVar7 * fVar3;
        fVar7 = fVar7 * fVar2;
      }
      iVar12 = iVar12 + 1;
      param_3 = param_3 + 3;
      param_2 = param_2 + 3;
      fVar7 = SQRT((fVar7 + 1.0) * (fVar7 + 1.0) + fVar5 * fVar5 + fVar6 * fVar6) * 2.0;
      *param_5 = (fVar5 / fVar7 + 0.5) * 4.0;
      param_5[1] = (fVar6 / fVar7 + 0.5) * 4.0;
      param_5 = param_5 + 2;
    } while (iVar12 < param_1);
  }
  return;
}


// 0x02d7a50 (0x19c bytes)
void M1907_002d7a50(void)

{
  undefined8 uVar1;
  int iVar2;
  undefined **ppuVar3;
  undefined **ppuVar4;
  undefined4 *puVar5;
  undefined **ppuVar6;
  undefined **ppuVar7;
  
  uVar1 = GetEffectTex(0x30);
  SetGSReg(0x18,uVar1);
  uVar1 = idol_draw::PackCmd(0,1,2,1,0x20);
  SetGSReg(3,uVar1);
  uVar1 = SCE_GS_SET_CLAMP(0,0,0,0,0,0);
  SetGSReg(6,uVar1);
  uVar1 = SCE_GS_SET_TEX1(0,0,1,1,1,0,0xff90);
  SetGSReg(0x1a,uVar1);
  STUB_00071170();
  iVar2 = 0;
  ppuVar3 = &PTR_DAT_007d9120;
  puVar5 = &DAT_007d8990;
  ppuVar4 = &PTR_DAT_007d9118;
  ppuVar7 = &PTR_DAT_007d9128;
  ppuVar6 = &PTR_DAT_007d9110;
  do {
    M1907_002d7828(*puVar5,*ppuVar3,*ppuVar6,*ppuVar4,&DAT_010b7010);
    DrawMeshSet(*puVar5,*ppuVar6,*ppuVar7,&DAT_010b7010,9);
    iVar2 = iVar2 + 1;
    ppuVar3 = ppuVar3 + 1;
    ppuVar4 = ppuVar4 + 1;
    puVar5 = puVar5 + 1;
    ppuVar6 = ppuVar6 + 1;
    ppuVar7 = ppuVar7 + 1;
  } while (iVar2 < 2);
  return;
}


// 0x02d7bec (0x60 bytes)
/* Moby 1907 */

void UpdateMoby_1907(MobyInstance *moby)

{
  if (moby->state == 0) {
    moby->state = '\x01';
  }
  else if (moby->state < 2) {
    RegisterFuncForMoby(&PTR_M1907_002d7a50_0070b3f8,moby);
  }
  return;
}


