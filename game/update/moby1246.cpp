// game/update/moby1246.cpp -- reconstructed from NPEA00385 EBOOT
// STATUS: NOT STARTED (raw Ghidra output)
// 8 functions, 0x2247e4-0x227994
#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include "game/update/moby1246.h"
#include "game/camera.h"
#include "game/collproc.h"
#include "game/draw.h"
#include "game/hero.h"
#include "game/mobyfunc.h"
#include "game/mobyutil.h"
#include "game/partupd.h"
#include "game/update/moby1077.h"
#include "game/update/moby1242.h"
#include "game/update/moby849.h"
#include "idol/fastfunc.h"
#include "idol/mathfunc.h"
#include "idol/xUnk.h"
#include "sdk/xUnk5.h"

// 0x02247e4 (0x78 bytes)
void FUN_002247e4(int param_1,undefined4 *param_2,undefined4 *param_3,int param_4,undefined4 param_5
                 )

{
  *(undefined4 *)(param_1 + 0x10) = *param_2;
  *(undefined4 *)(param_1 + 0x14) = param_2[1];
  *(undefined4 *)(param_1 + 0x18) = param_2[2];
  *(undefined4 *)(param_1 + 0x1c) = param_2[3];
  *(undefined4 *)(param_1 + 0x40) = *param_3;
  *(undefined4 *)(param_1 + 0x44) = param_3[1];
  *(undefined4 *)(param_1 + 0x48) = param_3[2];
  *(undefined4 *)(param_1 + 0x4c) = param_3[3];
  *(byte *)(param_1 + 0x20) = ((byte)(ZERO_MASK(param_4)) & 10) + 3;
  *(undefined4 *)(*(int *)(param_1 + 0x78) + 0xe8) = param_5;
  return;
}


// 0x022485c (0x1a4 bytes)
// strings: 006550bc: '  Those Blarg ships have polluted these oceans.' | 006550ec: 'If you can defeat the mutated see life and help' | 0065511c: "me get to my boat, I'll take you to jet plane, " | 0065514c: 'so we can destroy those ships. '

void M1246_0022485c(void)

{
  char acStack_70 [80];
  
  DrawRoundedRect
            (DAT_0076d238 + DAT_0076d244,DAT_0076d248 + DAT_0076d238,DAT_0076d234 + DAT_0076d24c,
             DAT_0076d234 + DAT_0076d250,DAT_0076d254);
  snprintf(acStack_70,"  Those Blarg ships have polluted these oceans.");
  FontPrintMediumCenter(DAT_0076d234,DAT_0076d238,DAT_0076d23c,acStack_70,0x2f);
  snprintf(acStack_70,"If you can defeat the mutated see life and help");
  FontPrintMediumCenter(DAT_0076d234,DAT_0076d238 + 0xc,DAT_0076d23c,acStack_70,0x2f);
  snprintf(acStack_70,"me get to my boat, I\'ll take you to jet plane, ");
  FontPrintMediumCenter(DAT_0076d234,DAT_0076d238 + 0x18,DAT_0076d23c,acStack_70,0x2f);
  snprintf(acStack_70,"so we can destroy those ships. ");
  FontPrintMediumCenter(DAT_0076d234,DAT_0076d238 + 0x24,DAT_0076d23c,acStack_70,0x1f);
  return;
}


// 0x0224a00 (0x1a4 bytes)
// strings: 0065516c: '  Thanks for helping me out! Looks like the    ' | 0065519c: 'hangar doors are closed. Maybe you could get an' | 006551cc: "upgrade at Bob's RoboShack to help you use that" | 006551fc: 'stomp switch.'

void M1246_00224a00(void)

{
  char acStack_70 [80];
  
  DrawRoundedRect
            (DAT_0076d238 + DAT_0076d244,DAT_0076d248 + DAT_0076d238,DAT_0076d234 + DAT_0076d24c,
             DAT_0076d234 + DAT_0076d250,DAT_0076d254);
  snprintf(acStack_70,"  Thanks for helping me out! Looks like the    ");
  FontPrintMediumCenter(DAT_0076d234,DAT_0076d238,DAT_0076d23c,acStack_70,0x2f);
  snprintf(acStack_70,"hangar doors are closed. Maybe you could get an");
  FontPrintMediumCenter(DAT_0076d234,DAT_0076d238 + 0xc,DAT_0076d23c,acStack_70,0x2f);
  snprintf(acStack_70,"upgrade at Bob\'s RoboShack to help you use that");
  FontPrintMediumCenter(DAT_0076d234,DAT_0076d238 + 0x18,DAT_0076d23c,acStack_70,0x2f);
  snprintf(acStack_70,"stomp switch.");
  FontPrintMediumCenter(DAT_0076d234,DAT_0076d238 + 0x24,DAT_0076d23c,acStack_70,0xd);
  return;
}


// 0x0224ba4 (0x14 bytes)
void M1246_00224ba4(void)

{
  DAT_0076d2a4 = 0x10000;
  return;
}


// 0x0224bf8 (0x394 bytes)
// inlined: FastAtan2 @0x224cd8
void M1246_00224bf8(MobyInstance *param_1,float *param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  void *pvVar7;
  ulonglong *puVar8;
  float fVar9;
  int iVar10;
  int iVar11;
  float fVar12;
  ulonglong uVar13;
  longlong lVar14;
  ulonglong uVar15;
  longlong lVar16;
  longlong lVar17;
  longlong lVar18;
  float *pfVar19;
  ulonglong unaff_r30;
  ulonglong unaff_r31;
  ulonglong in_LR;
  longlong lVar20;
  double dVar21;
  
  uVar13 = ZEXT48(&stack0x00000000);
  lVar14 = uVar13 - 0xd0;
  puVar8 = (ulonglong *)lVar14;
  *puVar8 = uVar13;
  puVar8[0x1c] = in_LR;
  fVar1 = *param_2 - (param_1->pos).x;
  fVar2 = param_2[1] - (param_1->pos).y;
  puVar8[0x19] = unaff_r31;
  fVar4 = ABS(fVar1);
  fVar3 = ABS(fVar2);
  *(float *)(puVar8 + 0x12) = fVar1;
  puVar8[0x18] = unaff_r30;
  *(float *)((int)puVar8 + 0x94) = fVar2;
  pvVar7 = param_1->pVar;
  *(float *)(puVar8 + 0x13) = fVar4 - fVar3;
  fVar1 = 0.0;
  fVar2 = *(float *)((int)pvVar7 + 0x24c);
  uVar15 = (ulonglong)(*(uint *)(puVar8 + 0x12) >> 0x1c) & 8 |
           (ulonglong)(*(uint *)(puVar8 + 0x13) >> 0x1e) & 2 |
           (ulonglong)(*(uint *)((int)puVar8 + 0x94) >> 0x1d) & 4;
  fVar5 = ABS(*(float *)(puVar8 + 0x12));
  if (*(float *)(puVar8 + 0x13) - 0.0 < 0.0) {
    fVar5 = fVar3;
  }
  fVar6 = *(float *)(&g_atanQuadrantTable + (int)(uVar15 << 2));
  fVar3 = *(float *)(((uint)(uVar15 << 2) | 0x735900) + 4);
  fVar9 = ABS(*(float *)((int)puVar8 + 0x94));
  if (*(float *)(puVar8 + 0x13) - 0.0 < 0.0) {
    fVar9 = fVar4;
  }
  if (0.0 < fVar5) {
    lVar18 = uVar13 - 0xc0;
    lVar16 = uVar13 - 0x24;
    lVar17 = uVar13 - 0x34;
    lVar20 = 2;
    fVar4 = (fVar9 - fVar5) / (fVar9 + fVar5);
    fVar5 = fVar4 * fVar4;
    *(float *)(puVar8 + 0x15) = fVar4;
    *(float *)(puVar8 + 0x14) = fVar4;
    *(float *)((int)puVar8 + 0xa4) = fVar4;
    *(float *)((int)puVar8 + 0x9c) = fVar4;
    fVar4 = fVar5 * fVar5;
    *(float *)(puVar8 + 0x14) = *(float *)(puVar8 + 0x14) * fVar5;
    *(float *)((int)puVar8 + 0xa4) = *(float *)((int)puVar8 + 0xa4) * fVar4;
    *(float *)(puVar8 + 0x15) = *(float *)(puVar8 + 0x15) * fVar4 * fVar5;
    do {
      *(float *)((int)lVar18 + 0x9c) = *(float *)((int)lVar18 + 0x8c) * fVar4 * fVar4;
      iVar10 = (int)lVar17;
      lVar17 = lVar17 + 8;
      lVar18 = lVar18 + 8;
      *(float *)((int)lVar16 + 4) = *(float *)(iVar10 + 4) * fVar4 * fVar4;
      lVar16 = lVar16 + 8;
      lVar20 = lVar20 + -1;
    } while (lVar20 != 0);
    lVar18 = uVar13 - 0x34;
    lVar20 = 4;
    pfVar19 = (float *)&DAT_007358e0;
    lVar16 = lVar18;
    lVar17 = lVar14;
    do {
      fVar4 = *pfVar19;
      fVar5 = pfVar19[1];
      pfVar19 = pfVar19 + 2;
      *(float *)((int)lVar17 + 0x9c) = *(float *)((int)lVar17 + 0x9c) * fVar4;
      lVar17 = lVar17 + 8;
      *(float *)((int)lVar16 + 4) = *(float *)((int)lVar16 + 4) * fVar5;
      lVar16 = lVar16 + 8;
      lVar20 = lVar20 + -1;
    } while (lVar20 != 0);
    lVar16 = 2;
    do {
      iVar10 = (int)lVar14;
      iVar11 = (int)lVar18;
      lVar14 = lVar14 + 0x10;
      lVar18 = lVar18 + 0x10;
      fVar1 = fVar1 + *(float *)(iVar10 + 0x9c) + *(float *)(iVar11 + 4) + *(float *)(iVar11 + 8) +
              *(float *)(iVar11 + 0xc);
      lVar16 = lVar16 + -1;
    } while (lVar16 != 0);
    fVar1 = (fVar1 + 0.7853982) * fVar6 + fVar3;
  }
  dVar21 = (double)FastWrapRot(fVar1,fVar2);
  OrganicDeltAng
            ((float)dVar21,DAT_0071f418 * 8.726646,DAT_0071f418 * 8.726646,
             g_FrameTime * 12.566371,&(param_1->rotation).z,0x224bb8,
             (float *)((int)pvVar7 + 0x250));
  dVar21 = (double)BlendAnimFrame(param_1);
  if (((param_1->updateId == param_1->animationId) && (8.0 < dVar21)) && (dVar21 < 22.0)) {
    *(float *)((int)pvVar7 + 0x1a4) = DAT_0076d2f8 * g_FrameTime;
    fVar1 = (param_1->rotation).z;
    fVar2 = fVar1 + 1.5707963;
    fVar4 = 3.1415925 - fVar1;
    if (fVar1 - (3.1415925 - fVar1) < 0.0) {
      fVar4 = fVar1;
    }
    fVar5 = 3.1415925 - fVar2;
    if (fVar2 - (3.1415925 - fVar2) < 0.0) {
      fVar5 = fVar2;
    }
    fVar3 = -3.1415925 - fVar1;
    if ((-3.1415925 - fVar1) - fVar4 < 0.0) {
      fVar3 = fVar4;
    }
    fVar1 = -3.1415925 - fVar2;
    if ((-3.1415925 - fVar2) - fVar5 < 0.0) {
      fVar1 = fVar5;
    }
    fVar2 = fVar3 * fVar3;
    fVar4 = fVar1 * fVar1;
    fVar9 = fVar2 * fVar2 * fVar3;
    *(undefined4 *)(puVar8 + 0xf) = 0;
    fVar5 = fVar4 * fVar4 * fVar1;
    fVar12 = fVar2 * fVar9;
    fVar6 = fVar4 * fVar5;
    *(float *)((int)puVar8 + 0x74) =
         (fVar2 * fVar12 * 2.601887e-06 +
         fVar12 * -0.0001980741 + fVar9 * 0.0083330255 + fVar2 * fVar3 * -0.16666657 + fVar3) * 2.0;
    *(float *)(puVar8 + 0xe) =
         (fVar4 * fVar6 * 2.601887e-06 +
         fVar6 * -0.0001980741 + fVar5 * 0.0083330255 + fVar4 * fVar1 * -0.16666657 + fVar1) * 2.0;
    MB_UpdateNavMove
              (0x3ff0000000000000,param_1,(MobyInstance *)((int)pvVar7 + 0x180),puVar8 + 0xe,
               puVar8 + 0x10);
  }
  return;
}


// 0x0224f8c (0x94 bytes)
short M1246_00224f8c(int param_1)

{
  ushort uVar1;
  ushort *puVar2;
  short sVar3;
  
  if (*(byte *)(param_1 + 0x21) == 0xff) {
    sVar3 = 0;
  }
  else {
    puVar2 = (ushort *)(&g_MobyGroups)[*(byte *)(param_1 + 0x21)];
    if (puVar2 == (ushort *)0x0) {
      sVar3 = 0;
    }
    else {
      sVar3 = 0;
      do {
        if ((g_MobyInstance[*puVar2 & 0x7fff].oClass == PUFFOID) &&
           (0xc < g_MobyInstance[*puVar2 & 0x7fff].state &&
            g_MobyInstance[*puVar2 & 0x7fff].state < 0x12)) {
          sVar3 = sVar3 + 1;
        }
        uVar1 = *puVar2;
        puVar2 = puVar2 + 1;
      } while (-1 < (short)uVar1);
    }
  }
  return sVar3;
}


// 0x0225048 (0xa78 bytes)
// inlined: FastAtan2 @0x225418, FastAtan2 @0x2256c8
void M1246_00225048(MobyInstance *param_1)

{
  u8 uVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  MobyClass *pMVar6;
  void *pvVar7;
  Spline *pSVar8;
  ulonglong *puVar9;
  int iVar10;
  MobyInstance *pMVar11;
  ulonglong uVar12;
  int iVar15;
  int iVar16;
  undefined4 uVar17;
  longlong lVar13;
  longlong lVar14;
  float *pfVar19;
  longlong lVar18;
  ulonglong uVar20;
  longlong lVar21;
  ulonglong unaff_r28;
  ulonglong unaff_r29;
  ulonglong unaff_r30;
  ulonglong uVar22;
  ulonglong unaff_r31;
  ulonglong in_LR;
  longlong lVar23;
  double dVar24;
  double dVar25;
  double dVar26;
  ulonglong in_f31;
  double dVar27;
  
  uVar12 = ZEXT48(&stack0x00000000);
  lVar14 = uVar12 - 0x110;
  puVar9 = (ulonglong *)lVar14;
  *puVar9 = uVar12;
  puVar9[0x24] = in_LR;
  puVar9[0x21] = in_f31;
  puVar9[0x20] = unaff_r31;
  pMVar6 = param_1->pClass;
  puVar9[0x1f] = unaff_r30;
  pvVar7 = param_1->pVar;
  uVar22 = ZEXT48(pvVar7);
  iVar15 = *(int *)((int)pvVar7 + 0x254);
  param_1->scale = pMVar6->gScale * DAT_0076d2c8;
  fVar5 = DAT_0076d2f8 * g_FrameTime;
  puVar9[0x1e] = unaff_r29;
  puVar9[0x1d] = unaff_r28;
  *(float *)((int)pvVar7 + 0x1a4) = fVar5;
  if (((((iVar15 != -1) && (uVar1 = param_1->state, uVar1 != '\t' && uVar1 != '\v')) &&
       (uVar1 != '\x12')) && ((uVar1 != '\x11' && (uVar1 != '\0')))) &&
     ((uVar1 != '\f' && ((uVar1 != '\r' && ((param_1->pos).z < g_MobyInstance[iVar15].pos.z + 0.5)))))
     ) {
    MB_SpawnExplosionSparks2
              (0x3fe0000000000000,0x4024000000000000,param_1,&param_1->pos,&DAT_00225020,
               0xffffffffffffffff);
    DeleteMoby(param_1);
  }
  if ((param_1->state == '\f') && (*(int *)((int)pvVar7 + 0x254) != -1)) {
    iVar15 = FUN_001b6870(g_MobyInstance + *(int *)((int)pvVar7 + 0x254));
    if ((iVar15 != 0) && (param_1->enabled == '\0')) {
      DeleteMoby(param_1);
      return;
    }
    if (1 < g_MobyInstance[*(int *)((int)pvVar7 + 0x254)].state) {
      param_1->modeBits =
           param_1->modeBits &
           (MIRROR|CAN_BE_DAMAGED|HIDE_BACKFACES|CAN_BE_AUTO_TARGETED|DISABLE_Z_WRITE|DRAW_SHADOW|
            DRAW_TRANSPARENT_WEIRD|LOCK_ROTATION|NO_DRAW|UNK_40|HAS_SPECIAL_VARS|HAS_GLOW|
            TRANSPARENT|NO_POST_UPDATE|NO_UPDATE);
      param_1->enabled = '\x01';
      param_1->collision = param_1->pClass->collision;
    }
  }
  dVar27 = 0.0;
  *(undefined4 *)((int)puVar9 + 0x74) = 0;
  iVar15 = MB_damage(param_1,0x330000,0);
  iVar16 = MB_HandleDamage
                     (param_1,iVar15,uVar22 + 0x20,0,puVar9 + 0xe,(int)puVar9 + 0x74,0,4);
  if ((*(int *)(puVar9 + 0xe) != 1) && (param_1->state != '\v')) {
    fVar5 = *(float *)((int)pvVar7 + 0x20) - *(float *)((int)puVar9 + 0x74);
    *(float *)((int)pvVar7 + 0x20) = fVar5;
    iVar16 = iVar16 + ((uint)(ZERO_MASK((0x47 - (uint)*(ushort *)(*(int *)(iVar15 + 0x20) + 0xa6)))) & 3U - iVar16);
    if ((double)fVar5 <= dVar27) {
      iVar16 = 1;
    }
    uVar17 = FastDoubleToInt(0x4080000000000000);
    *(undefined4 *)((int)pvVar7 + 0x148) = 0x3e4ccccd;
    fVar2 = DAT_0076d2cc;
    fVar5 = DAT_0071f418;
    *(undefined4 *)((int)pvVar7 + 0x140) = uVar17;
    *(undefined4 *)((int)pvVar7 + 0x134) = 0;
    *(undefined1 *)((int)pvVar7 + 0x15d) = 0;
    *(undefined4 *)((int)pvVar7 + 0x144) = 9;
    *(float *)((int)pvVar7 + 0x130) = fVar2 * fVar5;
    fVar5 = g_FrameTime;
    if (iVar16 < 3) {
      if ((-1 < iVar16) && (0 < iVar16)) {
        fVar5 = DAT_0076d2cc * DAT_0071f418;
        param_1->modeBits =
             param_1->modeBits &
             (MIRROR|CAN_BE_DAMAGED|HIDE_BACKFACES|DISABLE_Z_WRITE|DRAW_SHADOW|
              DRAW_TRANSPARENT_WEIRD|LOCK_ROTATION|NO_DRAW|UNK_40|HAS_SPECIAL_VARS|HAS_GLOW|
              TRANSPARENT|NO_POST_UPDATE|NO_UPDATE|DISABLED);
        *(float *)((int)pvVar7 + 0x130) = fVar5;
        fVar5 = g_FrameTime;
        *(float *)((int)pvVar7 + 0x138) = DAT_0076d2dc * g_FrameTime;
        fVar2 = DAT_0076d2d8;
        *(undefined4 *)((int)pvVar7 + 0x170) = 0x40f00000;
        *(undefined4 *)((int)pvVar7 + 0x174) = 0x41300000;
        *(float *)((int)pvVar7 + 0x13c) = fVar2 * fVar5;
        fVar5 = (param_1->pos).x - *(float *)(*(int *)(iVar15 + 0x20) + 0x10);
        fVar2 = (param_1->pos).y - *(float *)(*(int *)(iVar15 + 0x20) + 0x14);
        dVar24 = ABS((double)fVar5);
        dVar25 = ABS((double)fVar2);
        *(float *)(puVar9 + 0x10) = fVar5;
        *(float *)((int)puVar9 + 0x84) = fVar2;
        *(float *)(puVar9 + 0x11) = (float)(dVar24 - dVar25);
        uVar20 = (ulonglong)(*(uint *)(puVar9 + 0x10) >> 0x1c) & 8 |
                 (ulonglong)(*(uint *)(puVar9 + 0x11) >> 0x1e) & 2 |
                 (ulonglong)(*(uint *)((int)puVar9 + 0x84) >> 0x1d) & 4;
        dVar26 = ABS((double)*(float *)(puVar9 + 0x10));
        if ((double)*(float *)(puVar9 + 0x11) - dVar27 < 0.0) {
          dVar26 = dVar25;
        }
        fVar5 = *(float *)(&g_atanQuadrantTable + (int)(uVar20 << 2));
        dVar25 = ABS((double)*(float *)((int)puVar9 + 0x84));
        if ((double)*(float *)(puVar9 + 0x11) - dVar27 < 0.0) {
          dVar25 = dVar24;
        }
        fVar2 = *(float *)(((uint)(uVar20 << 2) | 0x735900) + 4);
        if (dVar27 < dVar26) {
          lVar13 = uVar12 - 0x100;
          lVar18 = uVar12 - 0x78;
          lVar21 = uVar12 - 0x68;
          lVar23 = 2;
          fVar4 = (float)(dVar25 - dVar26) / (float)(dVar25 + dVar26);
          fVar3 = fVar4 * fVar4;
          *(float *)((int)puVar9 + 0xa4) = fVar4;
          *(float *)((int)puVar9 + 0x9c) = fVar4;
          *(float *)(puVar9 + 0x14) = fVar4;
          *(float *)(puVar9 + 0x13) = fVar4;
          fVar4 = fVar3 * fVar3;
          *(float *)((int)puVar9 + 0x9c) = *(float *)((int)puVar9 + 0x9c) * fVar3;
          *(float *)(puVar9 + 0x14) = *(float *)(puVar9 + 0x14) * fVar4;
          *(float *)((int)puVar9 + 0xa4) = *(float *)((int)puVar9 + 0xa4) * fVar4 * fVar3;
          do {
            *(float *)((int)lVar13 + 0x98) = *(float *)((int)lVar13 + 0x88) * fVar4 * fVar4;
            iVar16 = (int)lVar18;
            lVar13 = lVar13 + 8;
            lVar18 = lVar18 + 8;
            *(float *)((int)lVar21 + 4) = *(float *)(iVar16 + 4) * fVar4 * fVar4;
            lVar21 = lVar21 + 8;
            lVar23 = lVar23 + -1;
          } while (lVar23 != 0);
          lVar23 = 4;
          lVar21 = uVar12 - 0x78;
          pfVar19 = (float *)&DAT_007358e0;
          lVar13 = lVar14;
          lVar18 = lVar21;
          do {
            fVar4 = *pfVar19;
            fVar3 = pfVar19[1];
            pfVar19 = pfVar19 + 2;
            *(float *)((int)lVar13 + 0x98) = *(float *)((int)lVar13 + 0x98) * fVar4;
            lVar13 = lVar13 + 8;
            *(float *)((int)lVar18 + 4) = *(float *)((int)lVar18 + 4) * fVar3;
            lVar18 = lVar18 + 8;
            lVar23 = lVar23 + -1;
          } while (lVar23 != 0);
          lVar13 = 2;
          do {
            iVar16 = (int)lVar14;
            iVar10 = (int)lVar21;
            lVar14 = lVar14 + 0x10;
            lVar21 = lVar21 + 0x10;
            dVar27 = (double)((float)(dVar27 + (double)*(float *)(iVar16 + 0x98)) +
                              *(float *)(iVar10 + 4) + *(float *)(iVar10 + 8) +
                             *(float *)(iVar10 + 0xc));
            lVar13 = lVar13 + -1;
          } while (lVar13 != 0);
          dVar27 = (double)((float)(dVar27 + 0.7853981852531433) * fVar5 + fVar2);
        }
        *(float *)((int)puVar9 + 0x7c) = (float)dVar27;
        uVar17 = *(undefined4 *)(iVar15 + 0x18);
        *(undefined4 *)(puVar9 + 6) = *(undefined4 *)(iVar15 + 0x10);
        *(undefined4 *)(puVar9 + 7) = uVar17;
        uVar17 = *(undefined4 *)(iVar15 + 0x1c);
        *(undefined4 *)((int)puVar9 + 0x34) = *(undefined4 *)(iVar15 + 0x14);
        *(undefined4 *)((int)puVar9 + 0x3c) = uVar17;
        MB_VecAtan2Angles(puVar9[6],puVar9[7],uVar12 - 0x94,uVar22 + 0x138,uVar22 + 0x13c)
        ;
        MB_StartKick((double)*(float *)((int)puVar9 + 0x7c),param_1,uVar22 + 0x120);
        param_1->state = ((byte)((longlong)((ulonglong)param_1->state - 0xc) >> 0x3f) & 0xf9) + 0x12
        ;
        *(undefined1 *)((int)pvVar7 + 0x117) = 0xf0;
        MB_SpawnBoltsFromCrate(param_1,0,0xffffffffffffffff);
      }
    }
    else if (iVar16 < 0xb) {
      if (iVar16 < 9) {
        *(float *)((int)pvVar7 + 0x138) = DAT_0076d2d4 * g_FrameTime;
        fVar2 = DAT_0076d2d0;
        *(undefined4 *)((int)pvVar7 + 0x170) = 0x40f00000;
        *(undefined4 *)((int)pvVar7 + 0x174) = 0x41300000;
        *(float *)((int)pvVar7 + 0x13c) = fVar2 * fVar5;
        fVar5 = (param_1->pos).x - *(float *)(*(int *)(iVar15 + 0x20) + 0x10);
        fVar2 = (param_1->pos).y - *(float *)(*(int *)(iVar15 + 0x20) + 0x14);
        dVar24 = ABS((double)fVar5);
        dVar25 = ABS((double)fVar2);
        *(float *)((int)puVar9 + 0x8c) = fVar5;
        *(float *)(puVar9 + 0x12) = fVar2;
        *(float *)((int)puVar9 + 0x94) = (float)(dVar24 - dVar25);
        uVar20 = (ulonglong)(*(uint *)((int)puVar9 + 0x8c) >> 0x1c) & 8 |
                 (ulonglong)(*(uint *)((int)puVar9 + 0x94) >> 0x1e) & 2 |
                 (ulonglong)(*(uint *)(puVar9 + 0x12) >> 0x1d) & 4;
        dVar26 = ABS((double)*(float *)((int)puVar9 + 0x8c));
        if ((double)*(float *)((int)puVar9 + 0x94) - dVar27 < 0.0) {
          dVar26 = dVar25;
        }
        fVar5 = *(float *)(&g_atanQuadrantTable + (int)(uVar20 << 2));
        dVar25 = ABS((double)*(float *)(puVar9 + 0x12));
        if ((double)*(float *)((int)puVar9 + 0x94) - dVar27 < 0.0) {
          dVar25 = dVar24;
        }
        fVar2 = *(float *)(((uint)(uVar20 << 2) | 0x735900) + 4);
        if (dVar27 < dVar26) {
          lVar13 = uVar12 - 0x100;
          lVar18 = uVar12 - 0x58;
          lVar21 = uVar12 - 0x48;
          lVar23 = 2;
          fVar4 = (float)(dVar25 - dVar26) / (float)(dVar25 + dVar26);
          fVar3 = fVar4 * fVar4;
          *(float *)((int)puVar9 + 0xc4) = fVar4;
          *(float *)((int)puVar9 + 0xbc) = fVar4;
          *(float *)(puVar9 + 0x18) = fVar4;
          *(float *)(puVar9 + 0x17) = fVar4;
          fVar4 = fVar3 * fVar3;
          *(float *)((int)puVar9 + 0xbc) = *(float *)((int)puVar9 + 0xbc) * fVar3;
          *(float *)(puVar9 + 0x18) = *(float *)(puVar9 + 0x18) * fVar4;
          *(float *)((int)puVar9 + 0xc4) = *(float *)((int)puVar9 + 0xc4) * fVar4 * fVar3;
          do {
            *(float *)((int)lVar13 + 0xb8) = *(float *)((int)lVar13 + 0xa8) * fVar4 * fVar4;
            iVar16 = (int)lVar18;
            lVar13 = lVar13 + 8;
            lVar18 = lVar18 + 8;
            *(float *)((int)lVar21 + 4) = *(float *)(iVar16 + 4) * fVar4 * fVar4;
            lVar21 = lVar21 + 8;
            lVar23 = lVar23 + -1;
          } while (lVar23 != 0);
          lVar23 = 4;
          lVar21 = uVar12 - 0x58;
          pfVar19 = (float *)&DAT_007358e0;
          lVar13 = lVar14;
          lVar18 = lVar21;
          do {
            fVar4 = *pfVar19;
            fVar3 = pfVar19[1];
            pfVar19 = pfVar19 + 2;
            *(float *)((int)lVar13 + 0xb8) = *(float *)((int)lVar13 + 0xb8) * fVar4;
            lVar13 = lVar13 + 8;
            *(float *)((int)lVar18 + 4) = *(float *)((int)lVar18 + 4) * fVar3;
            lVar18 = lVar18 + 8;
            lVar23 = lVar23 + -1;
          } while (lVar23 != 0);
          lVar13 = 2;
          do {
            iVar16 = (int)lVar14;
            iVar10 = (int)lVar21;
            lVar14 = lVar14 + 0x10;
            lVar21 = lVar21 + 0x10;
            dVar27 = (double)((float)(dVar27 + (double)*(float *)(iVar16 + 0xb8)) +
                              *(float *)(iVar10 + 4) + *(float *)(iVar10 + 8) +
                             *(float *)(iVar10 + 0xc));
            lVar13 = lVar13 + -1;
          } while (lVar13 != 0);
          dVar27 = (double)((float)(dVar27 + 0.7853981852531433) * fVar5 + fVar2);
        }
        *(float *)(puVar9 + 0xf) = (float)dVar27;
        uVar17 = *(undefined4 *)(iVar15 + 0x18);
        *(undefined4 *)(puVar9 + 6) = *(undefined4 *)(iVar15 + 0x10);
        *(undefined4 *)(puVar9 + 7) = uVar17;
        uVar17 = *(undefined4 *)(iVar15 + 0x1c);
        *(undefined4 *)((int)puVar9 + 0x34) = *(undefined4 *)(iVar15 + 0x14);
        *(undefined4 *)((int)puVar9 + 0x3c) = uVar17;
        MB_VecAtan2Angles(puVar9[6],puVar9[7],uVar12 - 0x98,uVar22 + 0x138,uVar22 + 0x13c)
        ;
        MB_StartKick((double)*(float *)(puVar9 + 0xf),param_1,uVar22 + 0x120);
        param_1->state = ((byte)((longlong)((ulonglong)param_1->state - 0xc) >> 0x3f) & 0xf8) + 0x11
        ;
        *(undefined1 *)((int)pvVar7 + 0x117) = 0x78;
      }
      else {
        *(undefined1 *)((int)pvVar7 + 0x117) = 0xfa;
      }
    }
    MB_UpdateLightsTransition(param_1,uVar22 + 0x110);
  }
  param_1->damage = -1;
  MB_ColorDyingMoby(param_1,uVar22 + 0x110);
  if ((*(int *)((int)pvVar7 + 0x244) != 0) &&
     (((param_1->state == '\x02' ||
       ((param_1->state == '\x03' && ((param_1->field43_0x70 & 2U) != 0)))) &&
      (param_1->state = '\n', param_1->animationId != '\x02')))) {
    puVar9[0x1b] = (longlong)(int)(animationSpeed * 10.5);
    MB_SetAnimation(param_1,2,0,*(undefined4 *)((int)puVar9 + 0xdc));
  }
  if (*(int *)((int)pvVar7 + 0x38) != 0) {
    dVar27 = (double)MB_randRangeFloat(180.0,240.0);
    uVar17 = FastDoubleToInt((double)(float)(dVar27 * (double)animationSpeed));
    *(undefined4 *)((int)pvVar7 + 0x244) = uVar17;
    *(undefined4 *)((int)pvVar7 + 0x38) = 0;
  }
  FastDecTimerS32(uVar22 + 0x244);
  if (*(int *)((int)pvVar7 + 0x244) == 0) {
    fVar5 = *(float *)((int)pvVar7 + 0x23c);
  }
  else {
    fVar5 = *(float *)((int)pvVar7 + 0x23c) + 64.0;
  }
  *(float *)((int)pvVar7 + 0x248) = fVar5;
  pSVar8 = Splines[*(int *)((int)pvVar7 + 0x230)];
  iVar15 = MB_getTargetInArea
                     (param_1,uVar22 + 0x1d0,pSVar8,0,0,pSVar8->points,pSVar8->cnt);
  if (iVar15 != 2) {
    if (param_1->state == '\x01') {
      pSVar8 = Splines[*(int *)((int)pvVar7 + 0x234)];
      fVar5 = pSVar8->points[1].x;
      fVar2 = pSVar8->points[1].y;
      fVar4 = pSVar8->points[1].z;
    }
    else {
      fVar5 = (param_1->pos).x;
      fVar2 = (param_1->pos).y;
      fVar4 = (param_1->pos).z;
    }
    fVar2 = fVar2 - *(float *)((int)pvVar7 + 0x1d4);
    fVar5 = fVar5 - *(float *)((int)pvVar7 + 0x1d0);
    if ((*(float *)((int)pvVar7 + 0x248) < SQRT(fVar5 * fVar5 + fVar2 * fVar2)) ||
       (3.0 < fVar4 - *(float *)((int)pvVar7 + 0x1d8))) {
      *(undefined4 *)((int)pvVar7 + 0x214) = 2;
    }
  }
  pMVar11 = g_heroMobyPtr;
  if (*(int *)((int)pvVar7 + 0x210) == 0) {
    *(float *)((int)pvVar7 + 0x1d0) = g_heroPosition.x;
    fVar5 = g_heroPosition.y;
    *(MobyInstance **)((int)pvVar7 + 0x210) = pMVar11;
    *(float *)((int)pvVar7 + 0x1d4) = fVar5;
    *(float *)((int)pvVar7 + 0x1d8) = g_heroPosition.z;
    *(float *)((int)pvVar7 + 0x1dc) = g_heroPosition.w;
  }
  return;
}


// 0x0225b48 (0x1e4c bytes)
/* Moby 1246 */

void UpdateMoby_1246(MobyInstance *moby)

{
  bool bVar1;
  byte bVar2;
  u8 uVar3;
  float fVar4;
  float fVar5;
  MobyModeBit MVar6;
  void *pvVar7;
  f32 fVar8;
  void *pvVar9;
  Spline *pSVar10;
  float fVar11;
  MobyInstance *pMVar12;
  longlong lVar13;
  undefined1 uVar18;
  undefined4 uVar14;
  uint uVar15;
  int iVar16;
  int iVar17;
  MobyInstance *pMVar19;
  longlong lVar20;
  double dVar21;
  double dVar22;
  undefined8 uVar23;
  double dVar24;
  undefined8 uVar25;
  double dVar26;
  double dVar27;
  double dVar28;
  double dVar29;
  double dVar30;
  double dVar31;
  double dVar32;
  undefined8 uVar33;
  float fVar34;
  GPiece<16> local_190;
  GPiece<16> local_180;
  GPiece<16> local_170;
  GPiece<16> local_160;
  GPiece<12> local_150;
  undefined4 local_144;
  GPiece<16> local_140;
  GPiece<16> local_130;
  GPiece<16> local_120;
  GPiece<16> local_110;
  Vec4 local_100;
  float local_f0;
  float local_ec;
  float local_e8;
  GPiece<64> auStack_e0;
  longlong local_a0;
  
  lVar13 = (longlong)(int)moby;
  pvVar7 = moby->pVar;
  if (moby->state != '\x14') {
    *(undefined2 *)((int)pvVar7 + 200) = 0;
    M1246_00225048(lVar13);
  }
  iVar16 = *(int *)((int)pvVar7 + 0x210);
  uVar33 = 0x4004000000000000;
  DoManipulator(0x4004000000000000,moby,0,(Manipulator *)((int)pvVar7 + 0x280));
  if ((moby->enabled != '\0') &&
     (fVar34 = (moby->pos).y - GameCamera.posY, fVar4 = (moby->pos).x - GameCamera.posX,
     fVar11 = (moby->pos).z - GameCamera.posZ,
     SQRT(fVar11 * fVar11 + fVar4 * fVar4 + fVar34 * fVar34) < 28.0)) {
    MB_SetZBoundsFromGround(lVar13);
    moby->shadow = '\x16';
  }
  bVar2 = moby->state;
  if (bVar2 < 0xb) {
    if (bVar2 < 4) {
      if (bVar2 == 0) {
        uVar33 = 0x4000000000000000;
        *(undefined4 *)((int)pvVar7 + 0x20) = 0x40000000;
        *(undefined2 *)((int)pvVar7 + 0x24) = 2;
        *(undefined1 *)((int)pvVar7 + 0x28) = 1;
        *(undefined4 *)((int)pvVar7 + 0x30) = 0x3e800000;
        uVar18 = FastDoubleToInt(0x4020000000000000);
        *(undefined1 *)((int)pvVar7 + 0x58) = uVar18;
        uVar18 = FastDoubleToInt(uVar33);
        *(undefined1 *)((int)pvVar7 + 0x5a) = uVar18;
        *(undefined1 *)((int)pvVar7 + 0x29) = 1;
        *(undefined **)((int)pvVar7 + 0xd0) = &DAT_00f0d2e8;
        MB_InitDefaultParams((float *)((int)pvVar7 + 0x180));
        *(undefined4 *)((int)pvVar7 + 0x18c) = 0x3f000000;
        *(undefined4 *)((int)pvVar7 + 0x188) = 0x3f000000;
        uVar14 = FastDoubleToInt(0x4080000000000000);
        *(undefined4 *)((int)pvVar7 + 0x180) = uVar14;
        *(undefined4 *)((int)pvVar7 + 0x184) = 0x3f000000;
        *(uint *)((int)pvVar7 + 0x1b8) = *(uint *)((int)pvVar7 + 0x1b8) | 0x10;
        uVar15 = rand();
        if ((uVar15 & 1) != 0) {
          moby->modeBits = moby->modeBits | MIRROR;
        }
        if (*(int *)((int)pvVar7 + 0x238) == 2) {
          moby->state = '\x13';
          if (moby->animationId != '\x04') {
            local_a0 = (longlong)(int)(animationSpeed * 10.5);
            MB_SetAnimation(lVar13,4,0,(int)(animationSpeed * 10.5));
          }
          pSVar10 = Splines[*(int *)((int)pvVar7 + 0x234)];
          (moby->pos).x = pSVar10->points[0].x;
          (moby->pos).y = pSVar10->points[0].y;
          (moby->pos).z = pSVar10->points[0].z;
          fVar34 = pSVar10->points[0].w;
          *(undefined4 *)((int)pvVar7 + 0x25c) = 1;
          (moby->pos).w = fVar34;
        }
        else if (*(int *)((int)pvVar7 + 0x238) == 1) {
          moby->state = '\x01';
          iVar16 = *(int *)((int)pvVar7 + 0x234);
          pSVar10 = Splines[iVar16];
          (moby->pos).x = pSVar10->points[0].x;
          (moby->pos).y = pSVar10->points[0].y;
          fVar34 = pSVar10->points[0].z;
          (moby->pos).w = pSVar10->points[0].w;
          pSVar10 = Splines[iVar16];
          (moby->pos).z = fVar34 - 1.0;
          *(float *)((int)pvVar7 + 0x220) = pSVar10->points[1].x;
          *(float *)((int)pvVar7 + 0x224) = pSVar10->points[1].y;
          *(float *)((int)pvVar7 + 0x228) = pSVar10->points[1].z;
          *(float *)((int)pvVar7 + 0x22c) = pSVar10->points[1].w;
        }
        else if (*(int *)((int)pvVar7 + 0x254) < 0) {
          dVar26 = (double)GetGroundZNoWater(lVar13 + 0x10);
          uVar3 = moby->animationId;
          (moby->pos).z = (float)dVar26;
          moby->state = '\x02';
          if (uVar3 != '\0') {
            MB_SetAnimation(lVar13,0,0,5);
          }
          *(f32 *)((int)pvVar7 + 0x220) = (moby->pos).x;
          *(f32 *)((int)pvVar7 + 0x224) = (moby->pos).y;
          *(f32 *)((int)pvVar7 + 0x228) = (moby->pos).z;
          *(f32 *)((int)pvVar7 + 0x22c) = (moby->pos).w;
        }
        else {
          moby->state = '\f';
          dVar26 = (double)MB_randRangeFloat(-3.0,3.0);
          MVar6 = moby->modeBits;
          *(float *)((int)pvVar7 + 600) = (float)dVar26;
          moby->enabled = '\0';
          moby->modeBits = MVar6 | DISABLED;
          moby->collision = (ushort *)0x0;
        }
      }
      else if (bVar2 < 2) {
        dVar26 = (double)FUN_005e8338((double)(Splines[*(int *)((int)pvVar7 + 0x234)]->points[1].x -
                                              (moby->pos).x),
                                      (double)(Splines[*(int *)((int)pvVar7 + 0x234)]->points[1].y -
                                              (moby->pos).y));
        fVar34 = OrganicDeltAng
                           ((float)dVar26,DAT_0071f418 * 8.726646,DAT_0071f418 * 8.726646,
                            g_FrameTime * 12.566371,&(moby->rotation).z,0x720000,
                            (float *)((int)pvVar7 + 0x250));
        if ((*(int *)((int)pvVar7 + 0x214) != 2) &&
           (iVar16 = MB_randInt((double)fVar34,9), iVar16 == 0)) {
          moby->state = '\a';
          if (moby->animationId != '\0') {
            MB_SetAnimation(lVar13,0,0,5);
          }
          pSVar10 = Splines[*(int *)((int)pvVar7 + 0x234)];
          *(float *)((int)pvVar7 + 0x40) = pSVar10->points[1].x - (moby->pos).x;
          *(float *)((int)pvVar7 + 0x44) = pSVar10->points[1].y - (moby->pos).y;
          *(float *)((int)pvVar7 + 0x48) = pSVar10->points[1].z - (moby->pos).z;
          *(float *)((int)pvVar7 + 0x4c) = pSVar10->points[1].w;
          FUN_005e84c0((double)(DAT_0076d2e8 * g_FrameTime),(int)pvVar7 + 0x40,
                       (int)pvVar7 + 0x40);
          dVar26 = (double)MB_computeLobVelocity
                                     ((double)(DAT_0076d2e8 * g_FrameTime),
                                      -(double)(DAT_0076d2ec * DAT_0071f418),lVar13 + 0x10,
                                      ZEXT48(Splines[*(int *)((int)pvVar7 + 0x234)]) + 0x20,
                                      &DAT_00720000,*(int *)((int)pvVar7 + 0x234) * 4,0);
          *(float *)((int)pvVar7 + 0x48) = (float)dVar26;
        }
      }
      else if (bVar2 < 3) {
        if (*(int *)((int)pvVar7 + 0x214) == 2) {
          if (((((moby->field43_0x70 & 2U) != 0) && (iVar16 = MB_randInt(3), iVar16 != 0))
              && (moby->enabled != '\0')) &&
             (fVar34 = (moby->pos).y - GameCamera.posY, fVar4 = (moby->pos).x - GameCamera.posX,
             fVar11 = (moby->pos).z - GameCamera.posZ,
             SQRT(fVar11 * fVar11 + fVar4 * fVar4 + fVar34 * fVar34) < 32.0)) {
            dVar26 = (double)MB_randRot();
            dVar27 = (double)MB_randRangeFloat(1.0,3.0);
            dVar28 = (double)cosf((float)dVar26);
            *(float *)((int)pvVar7 + 0x260) = (float)(dVar28 * dVar27);
            dVar26 = (double)FUN_005e8128(dVar26);
            *(undefined4 *)((int)pvVar7 + 0x268) = *(undefined4 *)((int)pvVar7 + 0x228);
            *(float *)((int)pvVar7 + 0x260) =
                 *(float *)((int)pvVar7 + 0x260) + *(float *)((int)pvVar7 + 0x220);
            *(float *)((int)pvVar7 + 0x264) =
                 (float)(dVar26 * dVar27 + (double)*(float *)((int)pvVar7 + 0x224));
            moby->state = '\x03';
            if (moby->animationId != '\x01') {
              local_a0 = (longlong)(int)(animationSpeed * 10.5);
              MB_SetAnimation(lVar13,1,0,(int)(animationSpeed * 10.5));
            }
          }
        }
        else {
          dVar26 = (double)MB_randRangeFloat(-DAT_0076d2e4,DAT_0076d2e4);
          *(float *)((int)pvVar7 + 0x24c) = (float)(dVar26 * 0.01745329238474369);
          moby->state = '\x04';
          if (moby->animationId != '\x01') {
            local_a0 = (longlong)(int)(animationSpeed * 10.5);
            MB_SetAnimation(lVar13,1,0,(int)(animationSpeed * 10.5));
          }
        }
      }
      else {
        M1246_00224bf8(lVar13,(int)pvVar7 + 0x260);
        if (*(int *)((int)pvVar7 + 0x214) == 2) {
          if ((((moby->field43_0x70 & 2U) != 0) && (iVar16 = MB_randInt(3), iVar16 == 0))
             && (moby->state = '\x02', moby->animationId != '\0')) {
            local_a0 = (longlong)(int)(animationSpeed * 10.5);
            MB_SetAnimation(lVar13,0,0,(int)(animationSpeed * 10.5));
          }
        }
        else {
          dVar26 = (double)MB_randRangeFloat(-DAT_0076d2e4,DAT_0076d2e4);
          *(float *)((int)pvVar7 + 0x24c) = (float)(dVar26 * 0.01745329238474369);
          moby->state = '\x04';
          if (moby->animationId != '\x01') {
            local_a0 = (longlong)(int)(animationSpeed * 10.5);
            MB_SetAnimation(lVar13,1,0,(int)(animationSpeed * 10.5));
          }
        }
      }
    }
    else if (bVar2 < 7) {
      if (bVar2 < 5) {
        if (((moby->field43_0x70 & 2U) == 0) ||
           (fVar34 = (moby->pos).y - *(float *)(iVar16 + 0x14),
           fVar4 = (moby->pos).x - *(float *)(iVar16 + 0x10),
           DAT_0076d2e0 <= SQRT(fVar4 * fVar4 + fVar34 * fVar34))) {
          M1246_00224bf8(lVar13,iVar16 + 0x10);
        }
        else {
          moby->state = '\x05';
          if (moby->animationId != '\x02') {
            local_a0 = (longlong)(int)(animationSpeed * 10.5);
            MB_SetAnimation(lVar13,2,0,(int)(animationSpeed * 10.5));
          }
        }
        if (*(int *)((int)pvVar7 + 0x214) == 2) {
          moby->state = '\x06';
        }
      }
      else if (bVar2 < 6) {
        M1246_00224bf8(lVar13,iVar16 + 0x10);
        if (((moby->field43_0x70 & 2U) == 0) ||
           (fVar34 = (moby->pos).y - *(float *)(iVar16 + 0x14),
           fVar4 = (moby->pos).x - *(float *)(iVar16 + 0x10),
           SQRT(fVar4 * fVar4 + fVar34 * fVar34) <= DAT_0076d2e0)) {
          if (*(int *)((int)pvVar7 + 0x214) == 2) {
            moby->state = '\x06';
          }
        }
        else {
          moby->state = '\x04';
          if (moby->animationId != '\x01') {
            local_a0 = (longlong)(int)(animationSpeed * 10.5);
            MB_SetAnimation(lVar13,1,0,(int)(animationSpeed * 10.5));
          }
        }
        DamageSphereAtPos
                  ((double)(DAT_0076d2c8 * 0.6),0x3ff0000000000000,0x3ff0000000000000,lVar13,
                   local_170,&DAT_00225ac0,1);
      }
      else {
        fVar34 = (moby->pos).y - *(float *)((int)pvVar7 + 0x224);
        fVar4 = (moby->pos).x - *(float *)((int)pvVar7 + 0x220);
        if (1.0 <= SQRT(fVar4 * fVar4 + fVar34 * fVar34)) {
          if (*(int *)((int)pvVar7 + 0x214) == 2) {
            M1246_00224bf8(lVar13,(int)pvVar7 + 0x220);
          }
          else {
            dVar26 = (double)MB_randRangeFloat(-DAT_0076d2e4,DAT_0076d2e4);
            *(float *)((int)pvVar7 + 0x24c) = (float)(dVar26 * 0.01745329238474369);
            moby->state = '\x04';
            if (moby->animationId != '\x01') {
              local_a0 = (longlong)(int)(animationSpeed * 10.5);
              MB_SetAnimation(lVar13,1,0,(int)(animationSpeed * 10.5));
            }
          }
        }
        else {
          moby->state = '\x02';
          if (moby->animationId != '\0') {
            local_a0 = (longlong)(int)(animationSpeed * 10.5);
            MB_SetAnimation(lVar13,0,0,(int)(animationSpeed * 10.5));
          }
        }
        if ((moby->field43_0x70 & 2U) != 0) {
          bVar1 = moby->animationId != '\x01';
          if (bVar1) {
            if (bVar1) {
              MB_SetAnimation(lVar13,1,0,5);
            }
          }
          else if (bVar1) {
            MB_SetAnimation(lVar13,1,0,5);
          }
        }
      }
    }
    else if (bVar2 < 9) {
      (moby->pos).x = (moby->pos).x + *(float *)((int)pvVar7 + 0x40);
      (moby->pos).y = (moby->pos).y + *(float *)((int)pvVar7 + 0x44);
      (moby->pos).z = (moby->pos).z + *(float *)((int)pvVar7 + 0x48);
      fVar34 = -(DAT_0076d2ec * DAT_0071f418 - *(float *)((int)pvVar7 + 0x48));
      *(float *)((int)pvVar7 + 0x48) = fVar34;
      if (fVar34 < 0.0) {
        dVar27 = 1.0;
        dVar26 = (double)GetGroundZ(0x3fe0000000000000,local_190,0);
        if ((double)(moby->pos).z < dVar26) {
          if (moby->state == '\a') {
            (moby->pos).z = (float)dVar26;
            moby->state = '\x02';
          }
          else {
            moby->state = '\x01';
            (moby->pos).z = (float)(dVar26 - dVar27);
          }
        }
      }
    }
    else if (bVar2 < 10) {
      uVar15 = MB_UpdateKick(moby,(KickVars *)((int)pvVar7 + 0x120));
      if ((uVar15 & 0x40) != 0) {
        fVar8 = (moby->pos).z;
        uVar15 = (int)fVar8 >> 0x1f;
        if ((int)((uVar15 >> 1 ^ (uint)fVar8) - uVar15) < 0x435e0000) {
          DeleteMoby(moby);
          return;
        }
        iVar16 = PointInsideComplexPoly
                           ((Vec4 *)&moby->pos,
                            (Vec4 *)Splines[*(int *)((int)pvVar7 + 0x230)]->points,
                            Splines[*(int *)((int)pvVar7 + 0x230)]->cnt);
        if (iVar16 != 0) {
          moby->state = '\x02';
          if (moby->animationId == '\0') {
            return;
          }
          local_a0 = (longlong)(int)(animationSpeed * 10.5);
          MB_SetAnimation(lVar13,0,0,(int)(animationSpeed * 10.5));
          return;
        }
        DeleteMoby(moby);
        return;
      }
      if ((uVar15 & 0x120) != 0) {
        DeleteMoby(moby);
        return;
      }
    }
    else {
      FUN_005e7f98(uVar33,local_180,local_180);
      iVar16 = MB_LineCrossesSpline
                         (*(undefined4 *)((int)pvVar7 + 0x230),lVar13 + 0x10,local_180);
      if (iVar16 == 0) {
        M1246_00224bf8(lVar13,(int)pvVar7 + 0x1d0);
      }
      else {
        dVar26 = (double)FUN_005e8338((double)(*(float *)(*(int *)((int)pvVar7 + 0x210) + 0x10) -
                                              (moby->pos).x),
                                      (double)(*(float *)(*(int *)((int)pvVar7 + 0x210) + 0x14) -
                                              (moby->pos).y));
        OrganicDeltAng
                  ((float)dVar26,DAT_0071f418 * 12.566371,DAT_0071f418 * 12.566371,
                   g_FrameTime * 12.566371,&(moby->rotation).z,0x720000,
                   (float *)((int)pvVar7 + 0x250));
      }
      if ((moby->field43_0x70 & 2U) != 0) {
        if (*(int *)((int)pvVar7 + 0x214) == 2) {
          if (*(int *)((int)pvVar7 + 0x244) == 0) {
            moby->state = '\x06';
          }
        }
        else {
          moby->state = '\x04';
        }
      }
    }
  }
  else if (bVar2 < 0x10) {
    if (bVar2 < 0xd) {
      if (bVar2 < 0xc) {
        uVar15 = MB_UpdateKick(moby,(KickVars *)((int)pvVar7 + 0x120));
        if ((uVar15 & 0x160) != 0) {
          MB_SpawnExplosionSparks2
                    (0x3fe0000000000000,0x4024000000000000,lVar13,lVar13 + 0x10,&DAT_00225ac0,
                     0xffffffffffffffff);
          DeleteMoby(moby);
          return;
        }
      }
      else if ((*(int *)((int)pvVar7 + 0x214) != 2) &&
              (iVar16 = M1246_00224f8c(lVar13), pMVar19 = g_MobyInstance,
              iVar16 < 5)) {
        iVar16 = *(int *)((int)pvVar7 + 0x254);
        pMVar12 = g_MobyInstance + iVar16;
        FastNormalizeRMtx4(auStack_e0,&pMVar12->transform);
        fVar11 = (moby->pos).x - pMVar19[iVar16].pos.x;
        fVar34 = (moby->pos).y;
        fVar4 = pMVar19[iVar16].pos.y;
        FUN_005e825c(local_160,local_160,auStack_e0);
        uVar15 = (int)*(uint *)((int)pvVar7 + 600) >> 0x1f;
        iVar17 = FLOAT_ORDER(fVar11);
        if ((iVar17 < (int)((uVar15 >> 1 ^ *(uint *)((int)pvVar7 + 600)) - uVar15)) &&
           (-0x40466666 < iVar17)) {
          if ((int)(fVar34 - fVar4) < 1) {
            dVar26 = (double)MB_randRangeFloat(-2.0,-1.5);
          }
          else {
            dVar26 = (double)MB_randRangeFloat(1.5,2.0);
          }
          FUN_005e7d64(local_150,local_150,&pMVar12->transform);
          fVar34 = pMVar19[iVar16].pos.x;
          fVar4 = pMVar19[iVar16].pos.y;
          fVar5 = pMVar19[iVar16].pos.z;
          moby->state = '\r';
          if (moby->animationId != '\x01') {
            MB_SetAnimation(lVar13,1,0,5);
          }
          fVar11 = (fVar11 + fVar34) - (moby->pos).x;
          *(float *)((int)pvVar7 + 0x40) = fVar11;
          fVar34 = ((float)dVar26 + fVar4) - (moby->pos).y;
          *(float *)((int)pvVar7 + 0x44) = fVar34;
          fVar4 = (fVar5 + 1.0) - (moby->pos).z;
          *(float *)((int)pvVar7 + 0x48) = fVar4;
          *(undefined4 *)((int)pvVar7 + 0x4c) = local_144;
          moby->unk58 = (DAT_0076d2e8 * g_FrameTime *
                        (float)(longlong)(animationSpeed * 60.5)) /
                        SQRT(fVar4 * fVar4 + fVar11 * fVar11 + fVar34 * fVar34);
          FUN_005e84c0((double)(DAT_0076d2e8 * g_FrameTime),(int)pvVar7 + 0x40,
                       (int)pvVar7 + 0x40);
          dVar26 = (double)MB_computeLobVelocity
                                     ((double)(DAT_0076d2e8 * g_FrameTime),
                                      -(double)(DAT_0076d2ec * DAT_0071f418),lVar13 + 0x10,local_150
                                      ,&PTR_DAT_00770000,&DAT_00720000,0);
          *(float *)((int)pvVar7 + 0x48) = (float)dVar26;
          dVar26 = (double)FUN_005e8338((double)*(float *)((int)pvVar7 + 0x40),
                                        (double)*(float *)((int)pvVar7 + 0x44));
          (moby->rotation).z = (float)dVar26;
        }
      }
    }
    else if (bVar2 < 0xe) {
      fVar34 = (moby->pos).x + *(float *)((int)pvVar7 + 0x40);
      pvVar9 = g_MobyInstance[*(int *)((int)pvVar7 + 0x254)].pVar;
      (moby->pos).x = fVar34;
      fVar4 = (moby->pos).y + *(float *)((int)pvVar7 + 0x44);
      (moby->pos).y = fVar4;
      fVar11 = (moby->pos).z + *(float *)((int)pvVar7 + 0x48);
      (moby->pos).z = fVar11;
      (moby->pos).x = fVar34 + *(float *)((int)pvVar9 + 0x70);
      (moby->pos).y = fVar4 + *(float *)((int)pvVar9 + 0x74);
      (moby->pos).z = fVar11 + *(float *)((int)pvVar9 + 0x78);
      fVar34 = -(DAT_0076d2ec * DAT_0071f418 - *(float *)((int)pvVar7 + 0x48));
      *(float *)((int)pvVar7 + 0x48) = fVar34;
      if ((fVar34 < 0.0) &&
         (dVar26 = (double)GetGroundZ(0x3fe0000000000000,local_140,0),
         (double)(moby->pos).z < dVar26)) {
        moby->unk58 = 1.0;
        moby->state = '\x0e';
      }
    }
    else if (bVar2 < 0xf) {
      MB_PlatformLocalToWorld
                (lVar13,g_MobyInstance + *(int *)((int)pvVar7 + 0x254),lVar13 + 0x10,lVar13 + 0x40,
                 lVar13 + 0x10,lVar13 + 0x40);
      if (*(int *)((int)pvVar7 + 0x214) != 2) {
        dVar26 = (double)MB_randRangeFloat(-DAT_0076d2e4,DAT_0076d2e4);
        *(float *)((int)pvVar7 + 0x24c) = (float)(dVar26 * 0.01745329238474369);
        moby->state = '\x0f';
        if (moby->animationId != '\x01') {
          local_a0 = (longlong)(int)(animationSpeed * 10.5);
          MB_SetAnimation(lVar13,1,0,(int)(animationSpeed * 10.5));
        }
      }
    }
    else {
      MB_PlatformLocalToWorld
                (lVar13,g_MobyInstance + *(int *)((int)pvVar7 + 0x254),lVar13 + 0x10,lVar13 + 0x40,
                 lVar13 + 0x10,lVar13 + 0x40);
      M1246_00224bf8(lVar13,iVar16 + 0x10);
      if ((((moby->field43_0x70 & 2U) != 0) &&
          (fVar34 = (moby->pos).y - *(float *)(iVar16 + 0x14),
          fVar4 = (moby->pos).x - *(float *)(iVar16 + 0x10),
          SQRT(fVar4 * fVar4 + fVar34 * fVar34) < DAT_0076d2e0)) &&
         (moby->state = '\x10', moby->animationId != '\x02')) {
        local_a0 = (longlong)(int)(animationSpeed * 10.5);
        MB_SetAnimation(lVar13,2,0,(int)(animationSpeed * 10.5));
      }
      if (*(int *)((int)pvVar7 + 0x214) == 2) {
        moby->state = '\x0e';
      }
    }
  }
  else if (bVar2 < 0x13) {
    if (bVar2 < 0x11) {
      MB_PlatformLocalToWorld
                (lVar13,g_MobyInstance + *(int *)((int)pvVar7 + 0x254),lVar13 + 0x10,lVar13 + 0x40,
                 lVar13 + 0x10,lVar13 + 0x40);
      M1246_00224bf8(lVar13,iVar16 + 0x10);
      if (((moby->field43_0x70 & 2U) == 0) ||
         (fVar34 = (moby->pos).y - *(float *)(iVar16 + 0x14),
         fVar4 = (moby->pos).x - *(float *)(iVar16 + 0x10),
         SQRT(fVar4 * fVar4 + fVar34 * fVar34) <= DAT_0076d2e0)) {
        if (*(int *)((int)pvVar7 + 0x214) == 2) {
          moby->state = '\x0e';
        }
      }
      else {
        moby->state = '\x0f';
        if (moby->animationId != '\x01') {
          local_a0 = (longlong)(int)(animationSpeed * 10.5);
          MB_SetAnimation(lVar13,1,0,(int)(animationSpeed * 10.5));
        }
      }
      DamageSphereAtPos
                ((double)(DAT_0076d2c8 * 0.6),0x3ff0000000000000,0,lVar13,local_130,&DAT_00225ac0,1)
      ;
    }
    else if (bVar2 < 0x12) {
      lVar20 = lVar13 + 0x10;
      MB_PlatformLocalToWorld
                (lVar13,g_MobyInstance + *(int *)((int)pvVar7 + 0x254),lVar20,lVar13 + 0x40,lVar20,
                 lVar13 + 0x40);
      uVar15 = MB_UpdateKick(moby,(KickVars *)((int)pvVar7 + 0x120));
      if ((uVar15 & 0x40) != 0) {
        fVar8 = (moby->pos).z;
        uVar15 = (int)fVar8 >> 0x1f;
        if ((int)((uVar15 >> 1 ^ (uint)fVar8) - uVar15) < 0x435e0000) {
          DeleteMoby(moby);
          return;
        }
        iVar16 = PointInsideComplexPoly
                           ((Vec4 *)lVar20,(Vec4 *)Splines[*(int *)((int)pvVar7 + 0x230)]->points,
                            Splines[*(int *)((int)pvVar7 + 0x230)]->cnt);
        if (iVar16 != 0) {
          moby->state = '\x0e';
          if (moby->animationId == '\0') {
            return;
          }
          local_a0 = (longlong)(int)(animationSpeed * 10.5);
          MB_SetAnimation(lVar13,0,0,(int)(animationSpeed * 10.5));
          return;
        }
        DeleteMoby(moby);
        return;
      }
      if ((uVar15 & 0x120) != 0) {
        DeleteMoby(moby);
        return;
      }
    }
    else {
      lVar20 = lVar13 + 0x10;
      MB_PlatformLocalToWorld
                (lVar13,g_MobyInstance + *(int *)((int)pvVar7 + 0x254),lVar20,lVar13 + 0x40,lVar20,
                 lVar13 + 0x40);
      uVar15 = MB_UpdateKick(moby,(KickVars *)((int)pvVar7 + 0x120));
      if ((uVar15 & 0x160) != 0) {
        MB_SpawnExplosionSparks2
                  (0x3fe0000000000000,0x4024000000000000,lVar13,lVar20,&DAT_00225ac0,
                   0xffffffffffffffff);
        DeleteMoby(moby);
        return;
      }
    }
  }
  else if (bVar2 < 0x14) {
    pMVar19 = (MobyInstance *)
              (Splines[*(int *)((int)pvVar7 + 0x234)]->points + *(int *)((int)pvVar7 + 0x25c) + -1);
    dVar26 = (double)(pMVar19->pos).z;
    dVar27 = (double)(pMVar19->pos).x;
    dVar28 = (double)(pMVar19->pos).y;
    if ((-1 < *(int *)((int)pvVar7 + 0x254)) &&
       (dVar29 = (double)(g_MobyInstance[*(int *)((int)pvVar7 + 0x254)].pos.z - 1.0),
       pMVar19 = g_MobyInstance, dVar29 < dVar26)) {
      dVar26 = dVar29;
    }
    dVar29 = (double)FUN_005e8338((double)(float)(dVar27 - (double)(moby->pos).x),
                                  (double)(float)(dVar28 - (double)(moby->pos).y));
    OrganicDeltAng
              ((float)dVar29,DAT_0071f418 * 12.566371,DAT_0071f418 * 12.566371,
               g_FrameTime * 12.566371,&(moby->rotation).z,(int)pMVar19,
               (float *)((int)pvVar7 + 0x250));
    cosf((moby->rotation).z);
    FUN_005e8128((double)(moby->rotation).z);
    dVar31 = 4.0;
    MB_MoveAndCollide(0x3fe0000000000000,0x3fe0000000000000,0,lVar13,local_120);
    dVar30 = (double)(moby->pos).y;
    dVar29 = (double)(moby->pos).x;
    fVar34 = (float)(dVar26 - (double)(moby->pos).z);
    if (SQRT(fVar34 * fVar34 +
             (float)(dVar27 - dVar29) * (float)(dVar27 - dVar29) +
             (float)(dVar28 - dVar30) * (float)(dVar28 - dVar30)) < 1.0) {
      iVar16 = *(int *)((int)pvVar7 + 0x25c) + 1;
      dVar29 = (double)(moby->pos).x;
      dVar30 = (double)(moby->pos).y;
      *(int *)((int)pvVar7 + 0x25c) =
           iVar16 - (iVar16 / Splines[*(int *)((int)pvVar7 + 0x234)]->cnt) *
                    Splines[*(int *)((int)pvVar7 + 0x234)]->cnt;
    }
    if (moby->animationBlend == 0.0) {
      bVar2 = moby->animationId;
      dVar26 = (double)SQRT((float)(dVar29 - (double)g_heroPosition.x) *
                            (float)(dVar29 - (double)g_heroPosition.x) +
                            (float)(dVar30 - (double)g_heroPosition.y) *
                            (float)(dVar30 - (double)g_heroPosition.y));
      if (bVar2 < 6) {
        if (3 < bVar2) {
          if (bVar2 < 5) {
            if ((dVar26 < 6.0) && (bVar2 != 5)) {
              local_a0 = (longlong)(int)(animationSpeed * 10.5);
              MB_SetAnimation(lVar13,5,0,(int)(animationSpeed * 10.5));
            }
          }
          else if (bVar2 != 6) {
            local_a0 = (longlong)(int)(animationSpeed * 10.5);
            MB_SetAnimation(lVar13,6,0,(int)(animationSpeed * 10.5));
          }
        }
      }
      else if (bVar2 < 7) {
        if (dVar26 <= 8.0) {
          if (dVar26 < dVar31) {
            DamageSphereAtPos
                      ((double)(DAT_0076d2c8 * 0.55),0x3ff0000000000000,0x3ff0000000000000,lVar13,
                       local_110,0,1);
          }
        }
        else if (bVar2 != 7) {
          local_a0 = (longlong)(int)(animationSpeed * 10.5);
          MB_SetAnimation(lVar13,7,0,(int)(animationSpeed * 10.5));
        }
      }
      else if ((bVar2 < 8) && (bVar2 != 4)) {
        local_a0 = (longlong)(int)(animationSpeed * 10.5);
        MB_SetAnimation(lVar13,4,0,(int)(animationSpeed * 10.5));
      }
    }
  }
  else if (((bVar2 < 0x15) && (*(short *)((int)pvVar7 + 200) != 0)) &&
          (iVar16 = FUN_0048c188(lVar13,(int)pvVar7 + 0x120), iVar16 != 0)) {
    moby->state = moby->setByGroup;
    *(undefined2 *)((int)pvVar7 + 200) = 0;
  }
  uVar33 = 0;
  if ((*(int *)((int)pvVar7 + 0x17c) != 0) &&
     (((uVar3 = moby->state, uVar3 == '\v' || uVar3 == '\t' || (uVar3 == '\x11')) ||
      (uVar3 == '\x12')))) {
    iVar16 = 0;
    dVar32 = 0.20000000298023224;
    dVar31 = 0.800000011920929;
    dVar30 = 1.2999999523162842;
    dVar29 = -0.20000000298023224;
    dVar28 = 0.4000000059604645;
    dVar27 = 2100.0;
    dVar26 = 14700.0;
    uVar25 = 0x406bd00000000000;
    do {
      dVar21 = (double)MB_randRangeSigned(uVar33,dVar32);
      local_100.x = (float)((double)(moby->pos).x + dVar21);
      dVar21 = (double)MB_randRangeSigned(uVar33,dVar32);
      local_100.y = (float)((double)(moby->pos).y + dVar21);
      dVar21 = (double)MB_randRangeSigned(uVar33,dVar32);
      local_100.z = (float)((double)(float)((double)(moby->pos).z + dVar21) + dVar31);
      dVar21 = (double)MB_randRot();
      dVar22 = (double)MB_randRangeFloat((float)dVar32,(float)dVar30);
      dVar24 = (double)(float)(dVar22 * (double)g_FrameTime);
      dVar22 = (double)cosf((float)dVar21);
      local_f0 = (float)(dVar22 * dVar24);
      dVar21 = (double)FUN_005e8128(dVar21);
      local_ec = (float)(dVar21 * dVar24);
      local_e8 = 0.0;
      dVar21 = (double)MB_randRangeFloat((float)dVar29,(float)dVar28);
      local_e8 = (float)(dVar21 * (double)g_FrameTime);
      uVar23 = MB_randRangeFloat((float)dVar27,(float)dVar26);
      SpawnPart_34(uVar23,uVar25,&local_100,&local_f0);
      iVar16 = iVar16 + 1;
    } while (iVar16 < 3);
  }
  return;
}


