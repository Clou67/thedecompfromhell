// game/update/moby1443.cpp -- reconstructed from NPEA00385 EBOOT
// STATUS: NOT STARTED (raw Ghidra output)
// 6 functions, 0x27f6fc-0x27ffec
// shared update function UpdateMoby_{1443_1890}; registered for oClasses 1443, 1890
#include "game/update/moby1443.h"
#include "game/collproc.h"
#include "game/draw.h"
#include "game/hero.h"
#include "game/hud.h"
#include "game/mobyfunc.h"
#include "game/mobyutil.h"
#include "game/sound.h"
#include "idol/fastfunc.h"

// 0x027f6fc (0x14 bytes)
void M1890_0027f6fc(void)

{
  DAT_007aa98c = 0x10000;
  return;
}


// 0x027f710 (0x70 bytes)
undefined8 M1890_0027f710(longlong param_1)

{
  ushort uVar1;
  undefined8 uVar2;
  ushort *puVar3;
  
  puVar3 = *(ushort **)((int)&g_MobyGroups + (int)(param_1 << 2));
  if (puVar3 == (ushort *)0x0) {
    uVar2 = 0;
  }
  else {
    do {
      if (g_MobyInstance[*puVar3 & 0x7fff].setByGroup == '\0') {
        return 0;
      }
      uVar1 = *puVar3;
      puVar3 = puVar3 + 1;
    } while (-1 < (short)uVar1);
    uVar2 = 1;
  }
  return uVar2;
}


// 0x027f788 (0xec bytes)
ushort * M1890_0027f788(longlong param_1)

{
  float fVar1;
  ushort uVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  ushort *puVar6;
  MobyInstance *pMVar7;
  MobyInstance *pMoby;
  
  fVar1 = 50000.0;
  puVar6 = *(ushort **)((int)&g_MobyGroups + (int)(param_1 << 2));
  if (puVar6 != (ushort *)0x0) {
    pMoby = (MobyInstance *)0x0;
    do {
      pMVar7 = g_MobyInstance + (*puVar6 & 0x7fff);
      if (pMVar7->oClass != GRINDRAIL_BARRIER) {
        fVar4 = g_heroPosition.y - (pMVar7->pos).y;
        fVar3 = g_heroPosition.x - (pMVar7->pos).x;
        fVar5 = g_heroPosition.z - (pMVar7->pos).z;
        fVar3 = SQRT(fVar5 * fVar5 + fVar3 * fVar3 + fVar4 * fVar4);
        if (fVar3 < fVar1) {
          fVar1 = fVar3;
          pMoby = pMVar7;
        }
      }
      uVar2 = *puVar6;
      puVar6 = puVar6 + 1;
    } while (-1 < (short)uVar2);
    if (pMoby != (MobyInstance *)0x0) {
      puVar6 = (ushort *)PlayMobySound(0,0,pMoby);
    }
  }
  return puVar6;
}


// shared update function, registered for oClasses 1443, 1890
// 0x027f880 (0x2ac bytes)
/* Moby 1443
   Moby 1890 */

void UpdateMoby_1443(MobyInstance *moby)

{
  byte bVar1;
  ushort uVar2;
  void *pvVar3;
  undefined4 uVar4;
  float fVar5;
  int iVar6;
  ushort *puVar7;
  void *pvVar8;
  float *pfVar9;
  double dVar10;
  double dVar11;
  
  bVar1 = moby->state;
  pvVar3 = moby->pVar;
  if (bVar1 == 0) {
    moby->state = '\x01';
    moby->updateDistance = -1;
  }
  else if (bVar1 < 2) {
    fVar5 = DAT_007aa9b4 * g_FrameTime + *(float *)((int)pvVar3 + 0xc);
    *(float *)((int)pvVar3 + 0xc) = fVar5;
    if (1.0 < fVar5) {
      *(float *)((int)pvVar3 + 0xc) = fVar5 + -1.0;
    }
    iVar6 = IsMobyPlayingSound(moby,*(int *)((int)pvVar3 + 0x24));
    if (iVar6 == 0) {
      iVar6 = PlayMobySound(0,4,moby);
      *(int *)((int)pvVar3 + 0x24) = iVar6;
    }
    dVar11 = 0.01745329238474369;
    dVar10 = (double)FastWrapRot
                               (*(float *)((int)pvVar3 + 8),
                                DAT_007aa9b0 * 0.017453292 * g_FrameTime);
    iVar6 = 0;
    *(float *)((int)pvVar3 + 8) = (float)dVar10;
    pfVar9 = (float *)&DAT_007aa9b8;
    pvVar8 = pvVar3;
    do {
      dVar10 = (double)FastWrapRot
                                 (*(float *)((int)pvVar8 + 0x10),
                                  (float)((double)*pfVar9 * dVar11) * g_FrameTime);
      iVar6 = iVar6 + 1;
      *(float *)((int)pvVar8 + 0x10) = (float)dVar10;
      pfVar9 = pfVar9 + 1;
      pvVar8 = (void *)((int)pvVar8 + 4);
    } while (iVar6 < 4);
    if (moby->enabled != '\0') {
      RegisterMobyDraw(&PTR_M1890_0027fb48_0070a6c0,moby);
    }
    if ((*(int *)((int)pvVar3 + 0x20) != -1) &&
       (puVar7 = (ushort *)(&g_MobyGroups)[*(int *)((int)pvVar3 + 0x20)],
       puVar7 != (ushort *)0x0)) {
      do {
        if (g_MobyInstance[*puVar7 & 0x7fff].setByGroup == '\0') {
          return;
        }
        uVar2 = *puVar7;
        puVar7 = puVar7 + 1;
      } while (-1 < (short)uVar2);
      moby->state = '\x02';
      uVar4 = *(undefined4 *)((int)pvVar3 + 0x20);
      moby->collision = (ushort *)0x0;
      M1890_0027f788(uVar4);
    }
  }
  else if (bVar1 < 3) {
    puVar7 = (ushort *)(&g_MobyGroups)[*(int *)((int)pvVar3 + 0x20)];
    if (puVar7 == (ushort *)0x0) {
LAB_0027fae8:
      moby->state = '\x01';
      moby->collision = moby->pClass->collision;
    }
    else {
      do {
        if (g_MobyInstance[*puVar7 & 0x7fff].setByGroup == '\0') goto LAB_0027fae8;
        uVar2 = *puVar7;
        puVar7 = puVar7 + 1;
      } while (-1 < (short)uVar2);
    }
  }
  return;
}


// 0x027fb48 (0x490 bytes)
void M1890_0027fb48(int param_1)

{
  float fVar1;
  undefined4 uVar2;
  float fVar3;
  float fVar4;
  ulonglong *puVar5;
  float *pfVar6;
  undefined4 *puVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  longlong lVar10;
  undefined4 uVar12;
  longlong lVar11;
  longlong lVar13;
  undefined4 *puVar14;
  undefined4 *puVar15;
  float *pfVar17;
  longlong lVar16;
  undefined4 *puVar18;
  float *pfVar19;
  ulonglong unaff_r24;
  ulonglong unaff_r25;
  ulonglong unaff_r26;
  longlong lVar20;
  undefined4 *puVar21;
  ulonglong unaff_r27;
  ulonglong unaff_r28;
  ulonglong unaff_r29;
  int iVar22;
  ulonglong unaff_r30;
  int iVar23;
  ulonglong unaff_r31;
  int iVar24;
  ulonglong in_LR;
  longlong lVar25;
  double dVar26;
  double dVar27;
  ulonglong in_f24;
  ulonglong in_f25;
  double dVar28;
  ulonglong in_f26;
  double dVar29;
  ulonglong in_f27;
  double dVar30;
  ulonglong in_f28;
  double dVar31;
  ulonglong in_f29;
  double dVar32;
  ulonglong in_f30;
  ulonglong in_f31;
  double dVar33;
  double dVar34;
  
  uVar8 = ZEXT48(&stack0x00000000);
  lVar11 = uVar8 - 0x1e0;
  puVar5 = (ulonglong *)lVar11;
  *puVar5 = uVar8;
  puVar5[0x3e] = in_LR;
  puVar5[0x34] = in_f24;
  puVar5[0x35] = in_f25;
  puVar5[0x36] = in_f26;
  puVar5[0x37] = in_f27;
  puVar5[0x38] = in_f28;
  puVar5[0x39] = in_f29;
  puVar5[0x3a] = in_f30;
  puVar5[0x3b] = in_f31;
  iVar23 = *(int *)(param_1 + 0x24);
  fVar1 = *(float *)(param_1 + 0x2c);
  puVar5[0x33] = unaff_r31;
  iVar24 = *(int *)(param_1 + 0x78);
  uVar2 = *(undefined4 *)(param_1 + 0x44);
  fVar3 = *(float *)(iVar23 + 0x24);
  *(undefined4 *)(puVar5 + 0xe) = *(undefined4 *)(param_1 + 0x40);
  uVar12 = *(undefined4 *)(param_1 + 0x48);
  *(undefined4 *)((int)puVar5 + 0x74) = uVar2;
  dVar33 = (double)(fVar1 / fVar3);
  uVar2 = *(undefined4 *)(param_1 + 0x4c);
  *(undefined4 *)(puVar5 + 0xf) = uVar12;
  uVar12 = *(undefined4 *)(param_1 + 0x10);
  *(undefined4 *)((int)puVar5 + 0x7c) = uVar2;
  uVar2 = *(undefined4 *)(param_1 + 0x14);
  *(undefined4 *)(puVar5 + 0x16) = uVar12;
  uVar12 = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)((int)puVar5 + 0xb4) = uVar2;
  uVar2 = *(undefined4 *)(param_1 + 0x1c);
  *(undefined4 *)(puVar5 + 0x17) = uVar12;
  *(undefined4 *)((int)puVar5 + 0xbc) = uVar2;
  uVar2 = DAT_007aaa20;
  puVar5[0x32] = unaff_r30;
  puVar5[0x31] = unaff_r29;
  puVar5[0x30] = unaff_r28;
  puVar5[0x2f] = unaff_r27;
  puVar5[0x2e] = unaff_r26;
  puVar5[0x2d] = unaff_r25;
  puVar5[0x2c] = unaff_r24;
  uVar9 = GetEffectTex(uVar2);
  puVar5[0x27] = uVar9;
  uVar9 = SCE_GS_SET_TEX1(0,0,1,1,1,0,0xff90);
  puVar5[0x28] = uVar9;
  uVar9 = SCE_GS_SET_CLAMP(0,0,0,0,0,0);
  puVar5[0x26] = uVar9;
  uVar9 = idol_draw::PackCmd(DAT_00fad0c8,DAT_007aa9d8,DAT_00fad0cc,DAT_007aa9dc,0x80);
  puVar5[0x29] = uVar9;
  lVar20 = uVar8 - 0x120;
  iVar23 = 0;
  puVar15 = &DAT_007aa9e4;
  pfVar19 = (float *)&DAT_007aaa30;
  puVar14 = &DAT_007aa9e0;
  lVar25 = 4;
  lVar10 = lVar11;
  lVar13 = lVar11;
  lVar16 = lVar20;
  do {
    uVar2 = *puVar14;
    uVar12 = *puVar15;
    puVar14 = puVar14 + 2;
    *(undefined4 *)((int)lVar10 + 0x110) = uVar2;
    uVar2 = DAT_007aa9cc;
    puVar15 = puVar15 + 2;
    *(undefined4 *)((int)lVar10 + 0x114) = uVar12;
    *(undefined4 *)((int)lVar13 + 0x100) = uVar2;
    lVar10 = lVar10 + 8;
    fVar1 = *pfVar19;
    lVar13 = lVar13 + 4;
    pfVar17 = (float *)lVar16;
    *pfVar17 = fVar1;
    fVar3 = pfVar19[1];
    pfVar17[1] = fVar3;
    fVar4 = pfVar19[2];
    pfVar17[2] = fVar4;
    pfVar6 = pfVar19 + 3;
    pfVar19 = pfVar19 + 4;
    pfVar17[3] = *pfVar6;
    *pfVar17 = (float)((double)fVar1 * dVar33);
    pfVar17[1] = (float)((double)fVar3 * dVar33);
    pfVar17[2] = (float)((double)fVar4 * dVar33);
    lVar16 = lVar16 + 0x10;
    lVar25 = lVar25 + -1;
  } while (lVar25 != 0);
  dVar33 = (double)FastIntToDouble(DAT_007aaab0);
  dVar34 = (double)(float)(6.2831854820251465 / dVar33);
  dVar26 = (double)FastIntToDouble(DAT_007aaab0);
  dVar33 = (double)*(float *)(iVar24 + 0xc);
  dVar26 = (double)(float)(3.0 / dVar26);
  if (*(int *)(iVar24 + 0xc) < 0) {
    do {
      dVar33 = (double)(float)(dVar33 + 1.0);
    } while (dVar33 < 0.0);
  }
  dVar31 = 1.0;
  for (; 1.0 < dVar33; dVar33 = (double)(float)(dVar33 + -1.0)) {
  }
  iVar22 = 0;
  if (0 < DAT_007aaab0) {
    dVar30 = 0.5;
    dVar29 = 2.0;
    dVar28 = (double)(float)(dVar26 + -1.0);
    do {
      puVar5[0x2a] = (longlong)iVar22;
      dVar27 = (double)FastWrapRot
                                 (*(float *)(iVar24 + 8),
                                  (float)((double)(longlong)puVar5[0x2a] * dVar34));
      *(float *)(puVar5 + 0xe) = (float)dVar27;
      FastEulerToMtx(uVar8 - 0x160,uVar8 - 0x170);
      dVar27 = dVar33;
      if (dVar30 - dVar33 < 0.0) {
        dVar27 = (double)(float)(dVar31 - dVar33);
      }
      uVar12 = FastLerpColor((double)(float)(dVar27 * dVar29),DAT_007aa9c8,DAT_007aa9cc);
      uVar2 = EffectTexHeaders;
      dVar27 = (double)(float)(dVar33 + dVar26);
      *(undefined4 *)((int)puVar5 + 0x104) = uVar12;
      dVar32 = (double)(float)(dVar33 + dVar28);
      *(undefined4 *)(puVar5 + 0x20) = uVar12;
      FastDrawQuad(uVar8 - 0x120,uVar8 - 0x160,0,uVar2,9);
      iVar22 = iVar22 + 1;
      dVar33 = dVar27;
      if (dVar31 - dVar27 < 0.0) {
        dVar33 = dVar32;
      }
    } while (iVar22 < DAT_007aaab0);
  }
  uVar9 = GetEffectTex(DAT_007aaa24);
  puVar5[0x27] = uVar9;
  puVar14 = &DAT_007aaa00;
  puVar15 = &DAT_007aaa04;
  lVar13 = 4;
  puVar18 = &DAT_007aaa70;
  lVar10 = lVar11;
  do {
    uVar2 = *puVar14;
    uVar12 = *puVar15;
    puVar14 = puVar14 + 2;
    *(undefined4 *)((int)lVar11 + 0x110) = uVar2;
    uVar2 = DAT_007aa9d0;
    puVar15 = puVar15 + 2;
    *(undefined4 *)((int)lVar11 + 0x114) = uVar12;
    *(undefined4 *)((int)lVar10 + 0x100) = uVar2;
    lVar11 = lVar11 + 8;
    lVar10 = lVar10 + 4;
    puVar21 = (undefined4 *)lVar20;
    *puVar21 = *puVar18;
    puVar21[1] = puVar18[1];
    puVar21[2] = puVar18[2];
    puVar7 = puVar18 + 3;
    puVar18 = puVar18 + 4;
    puVar21[3] = *puVar7;
    lVar20 = lVar20 + 0x10;
    lVar13 = lVar13 + -1;
  } while (lVar13 != 0);
  do {
    *(undefined4 *)(puVar5 + 0xe) = *(undefined4 *)(iVar24 + 0x10);
    FastEulerToMtx(uVar8 - 0x160,uVar8 - 0x170);
    FastDrawQuad(uVar8 - 0x120,uVar8 - 0x160,0,EffectTexHeaders,9);
    iVar23 = iVar23 + 1;
    iVar24 = iVar24 + 4;
  } while (iVar23 < 4);
  return;
}


// 0x027ffd8 (0x14 bytes)
void M1890_0027ffd8(void)

{
  DAT_007aab00 = 0x10000;
  return;
}


