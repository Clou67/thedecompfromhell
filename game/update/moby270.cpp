// game/update/moby270.cpp -- reconstructed from NPEA00385 EBOOT
// STATUS: NOT STARTED (raw Ghidra output)
// 5 functions, 0x320b50-0x32399c
#include <math.h>
#include "game/update/moby270.h"
#include "game/collproc.h"
#include "game/hero.h"
#include "game/lights.h"
#include "game/main.h"
#include "game/mobyfunc.h"
#include "game/mobyproc.h"
#include "game/mobyutil.h"
#include "game/partupd.h"
#include "game/pause.h"
#include "game/sound.h"
#include "game/update/moby121.h"
#include "game/update/moby428.h"
#include "game/update/moby849.h"
#include "idol/fastfunc.h"
#include "idol/mathfunc.h"
#include "idol/xUnk.h"

// 0x0320b50 (0x60 bytes)
void M270_00320b50(int param_1)

{
  if (param_1 != 0) {
    *(undefined4 *)(param_1 + 0x78) = 0;
    *(undefined4 *)(param_1 + 0x84) = 4;
    *(undefined4 *)(param_1 + 0x88) = 3;
    *(undefined4 *)(param_1 + 0x8c) = 0x3f200000;
    *(undefined4 *)(param_1 + 0x7c) = 0x3d4ccccd;
    *(undefined4 *)(param_1 + 0x80) = 0x3f5ced91;
    *(undefined2 *)(param_1 + 0x9c) = 0xffff;
    *(undefined2 *)(param_1 + 0x9e) = 0xffff;
    *(undefined4 *)(param_1 + 0xa0) = 0xffffffff;
    *(undefined4 *)(param_1 + 0xa4) = 0xffffffff;
    *(undefined4 *)(param_1 + 0xa8) = 0xffffffff;
    *(undefined4 *)(param_1 + 0xac) = 0xffffffff;
  }
  return;
}


// 0x0320bf8 (0xaac bytes)
// inlined: FastAtan2 @0x320dc0, FastAtan2 @0x321064, FastAtan2 @0x3211f0
longlong SpawnMoby_270_Chicken(MobyInstance *param_1)

{
  char cVar1;
  float fVar2;
  float fVar3;
  f32 fVar4;
  f32 fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  MobyModeBit MVar10;
  void *pvVar11;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  ulonglong *puVar15;
  int iVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  bool bVar21;
  ulonglong uVar22;
  longlong lVar23;
  longlong lVar24;
  longlong lVar25;
  undefined2 uVar27;
  int iVar26;
  ulonglong uVar28;
  float *pfVar30;
  longlong lVar29;
  longlong lVar31;
  ulonglong unaff_r26;
  ulonglong unaff_r27;
  ulonglong unaff_r28;
  ulonglong unaff_r29;
  ulonglong unaff_r30;
  ulonglong unaff_r31;
  ulonglong in_LR;
  longlong lVar32;
  double dVar33;
  double dVar34;
  double dVar35;
  double dVar36;
  double dVar37;
  double dVar38;
  ulonglong in_f30;
  ulonglong in_f31;
  double dVar39;
  MobyInstance *pMoby;
  
  uVar22 = ZEXT48(&stack0x00000000);
  lVar25 = uVar22 - 0x140;
  puVar15 = (ulonglong *)lVar25;
  *puVar15 = uVar22;
  puVar15[0x2a] = in_LR;
  puVar15[0x26] = in_f30;
  puVar15[0x27] = in_f31;
  puVar15[0x25] = unaff_r31;
  puVar15[0x24] = unaff_r30;
  puVar15[0x23] = unaff_r29;
  puVar15[0x22] = unaff_r28;
  puVar15[0x21] = unaff_r27;
  puVar15[0x20] = unaff_r26;
  pMoby = CreateMoby(MORPH_O_RAY_CHICKEN);
  lVar23 = (longlong)(int)pMoby;
  if (pMoby == (MobyInstance *)0x0) {
    return lVar23;
  }
  MVar10 = param_1->modeBits;
  pvVar11 = pMoby->pVar;
  pMoby->updateDistance = '\x7f';
  pMoby->drawDistance = 0x7f;
  pMoby->enabled = '\x01';
  if ((MVar10 & HAS_SPECIAL_VARS) == NONE) {
    uVar12 = param_1->light;
    pMoby->color = param_1->color;
    pMoby->light = uVar12;
  }
  else {
    iVar26 = *(int *)((int)param_1->pVar + 0xc);
    if (iVar26 == 0) {
      uVar12 = param_1->light;
      pMoby->color = param_1->color;
      pMoby->light = uVar12;
    }
    else {
      SetColorOfMoby
                (pMoby,(ulonglong)*(byte *)(iVar26 + 4),(ulonglong)*(byte *)(iVar26 + 5),
                 (ulonglong)*(byte *)(iVar26 + 6));
    }
  }
  dVar33 = (double)MB_randRangeFloat(0.85,1.15);
  fVar2 = (param_1->pos).x;
  pMoby->unk58 = (float)dVar33;
  fVar3 = (param_1->pos).y;
  (pMoby->pos).x = fVar2;
  fVar4 = (param_1->pos).z;
  (pMoby->pos).y = fVar3;
  fVar5 = (param_1->pos).w;
  (pMoby->pos).z = fVar4;
  (pMoby->pos).w = fVar5;
  dVar33 = 0.0;
  (pMoby->rotation).w = 0.0;
  (pMoby->rotation).z = 0.0;
  (pMoby->rotation).y = 0.0;
  (pMoby->rotation).x = 0.0;
  fVar2 = fVar2 - g_heroPosition.x;
  fVar3 = fVar3 - g_heroPosition.y;
  fVar6 = ABS(fVar2);
  fVar7 = ABS(fVar3);
  *(float *)((int)puVar15 + 0x84) = fVar2;
  *(float *)(puVar15 + 0x11) = fVar3;
  *(float *)((int)puVar15 + 0x8c) = fVar6 - fVar7;
  dVar39 = 0.7853981852531433;
  uVar28 = (ulonglong)(*(uint *)((int)puVar15 + 0x84) >> 0x1c) & 8 |
           (ulonglong)(*(uint *)((int)puVar15 + 0x8c) >> 0x1e) & 2 |
           (ulonglong)(*(uint *)(puVar15 + 0x11) >> 0x1d) & 4;
  fVar2 = ABS(*(float *)((int)puVar15 + 0x84));
  if (*(float *)((int)puVar15 + 0x8c) - 0.0 < 0.0) {
    fVar2 = fVar7;
  }
  fVar3 = *(float *)(&g_atanQuadrantTable + (int)(uVar28 << 2));
  fVar7 = ABS(*(float *)(puVar15 + 0x11));
  if (*(float *)((int)puVar15 + 0x8c) - 0.0 < 0.0) {
    fVar7 = fVar6;
  }
  fVar6 = *(float *)(((uint)(uVar28 << 2) | 0x735900) + 4);
  dVar34 = dVar33;
  if (0.0 < fVar2) {
    lVar24 = uVar22 - 0x130;
    lVar31 = uVar22 - 0x60;
    lVar29 = uVar22 - 0x70;
    lVar32 = 2;
    fVar2 = (fVar7 - fVar2) / (fVar7 + fVar2);
    fVar7 = fVar2 * fVar2;
    *(float *)((int)puVar15 + 0xdc) = fVar2;
    *(float *)((int)puVar15 + 0xd4) = fVar2;
    *(float *)(puVar15 + 0x1b) = fVar2;
    *(float *)(puVar15 + 0x1a) = fVar2;
    fVar2 = fVar7 * fVar7;
    *(float *)((int)puVar15 + 0xd4) = *(float *)((int)puVar15 + 0xd4) * fVar7;
    *(float *)(puVar15 + 0x1b) = *(float *)(puVar15 + 0x1b) * fVar2;
    *(float *)((int)puVar15 + 0xdc) = *(float *)((int)puVar15 + 0xdc) * fVar2 * fVar7;
    do {
      *(float *)((int)lVar24 + 0xd0) = *(float *)((int)lVar24 + 0xc0) * fVar2 * fVar2;
      iVar26 = (int)lVar29;
      lVar29 = lVar29 + 8;
      lVar24 = lVar24 + 8;
      *(float *)((int)lVar31 + 4) = *(float *)(iVar26 + 4) * fVar2 * fVar2;
      lVar31 = lVar31 + 8;
      lVar32 = lVar32 + -1;
    } while (lVar32 != 0);
    lVar32 = 4;
    lVar31 = uVar22 - 0x70;
    pfVar30 = (float *)&DAT_007358e0;
    lVar24 = lVar25;
    lVar29 = lVar31;
    do {
      fVar2 = *pfVar30;
      fVar7 = pfVar30[1];
      pfVar30 = pfVar30 + 2;
      *(float *)((int)lVar24 + 0xd0) = *(float *)((int)lVar24 + 0xd0) * fVar2;
      lVar24 = lVar24 + 8;
      *(float *)((int)lVar29 + 4) = *(float *)((int)lVar29 + 4) * fVar7;
      lVar29 = lVar29 + 8;
      lVar32 = lVar32 + -1;
    } while (lVar32 != 0);
    lVar29 = 2;
    lVar24 = lVar25;
    do {
      iVar26 = (int)lVar24;
      iVar16 = (int)lVar31;
      lVar24 = lVar24 + 0x10;
      lVar31 = lVar31 + 0x10;
      dVar34 = (double)((float)(dVar34 + (double)*(float *)(iVar26 + 0xd0)) + *(float *)(iVar16 + 4)
                        + *(float *)(iVar16 + 8) + *(float *)(iVar16 + 0xc));
      lVar29 = lVar29 + -1;
    } while (lVar29 != 0);
    dVar34 = (double)((float)(dVar34 + 0.7853981852531433) * fVar3 + fVar6);
  }
  (pMoby->rotation).z = (float)dVar34;
  dVar34 = (double)GetGroundZ(0x3fe0000000000000,lVar23 + 0x10,0);
  fVar3 = g_CollOutput.normal.z;
  fVar2 = g_CollOutput.ip.z;
  if ((double)(pMoby->pos).z <= dVar34) {
    fVar7 = (pMoby->rotation).z;
    fVar6 = fVar7 + 1.5707963;
    fVar8 = 3.1415925 - fVar7;
    if (fVar7 - (3.1415925 - fVar7) < 0.0) {
      fVar8 = fVar7;
    }
    fVar9 = 3.1415925 - fVar6;
    if (fVar6 - (3.1415925 - fVar6) < 0.0) {
      fVar9 = fVar6;
    }
    fVar17 = -3.1415925 - fVar7;
    if ((-3.1415925 - fVar7) - fVar8 < 0.0) {
      fVar17 = fVar8;
    }
    fVar7 = -3.1415925 - fVar6;
    if ((-3.1415925 - fVar6) - fVar9 < 0.0) {
      fVar7 = fVar9;
    }
    fVar6 = fVar17 * fVar17;
    dVar35 = (double)g_CollOutput.normal.z;
    fVar8 = fVar7 * fVar7;
    fVar19 = fVar6 * fVar6 * fVar17;
    fVar9 = fVar8 * fVar8 * fVar7;
    fVar20 = fVar6 * fVar19;
    fVar18 = fVar8 * fVar9;
    fVar17 = fVar6 * fVar20 * 2.601887e-06 +
             fVar20 * -0.0001980741 + fVar19 * 0.0083330255 + fVar6 * fVar17 * -0.16666657 + fVar17;
    fVar7 = fVar8 * fVar18 * 2.601887e-06 +
            fVar18 * -0.0001980741 + fVar9 * 0.0083330255 + fVar8 * fVar7 * -0.16666657 + fVar7;
    fVar6 = g_CollOutput.normal.x * fVar7 + g_CollOutput.normal.y * fVar17;
    dVar36 = (double)fVar6;
    fVar7 = g_CollOutput.normal.y * fVar7 - g_CollOutput.normal.x * fVar17;
    dVar37 = ABS((double)fVar7);
    *(float *)((int)puVar15 + 0x7c) = fVar7;
    fVar7 = SQRT((float)(dVar36 * dVar36 + (double)(float)(dVar35 * dVar35)));
    uVar12 = *(uint *)((int)puVar15 + 0x7c);
    dVar38 = ABS((double)fVar7);
    *(float *)(puVar15 + 0xf) = fVar7;
    *(float *)(puVar15 + 0x10) = (float)(dVar38 - dVar37);
    uVar13 = *(uint *)(puVar15 + 0xf);
    uVar14 = *(uint *)(puVar15 + 0x10);
    (pMoby->pos).z = fVar2;
    uVar28 = (ulonglong)(uVar13 >> 0x1c) & 8 |
             (ulonglong)(uVar14 >> 0x1e) & 2 | (ulonglong)(uVar12 >> 0x1d) & 4;
    fVar2 = *(float *)(&g_atanQuadrantTable + (int)(uVar28 << 2));
    dVar34 = ABS((double)*(float *)(puVar15 + 0xf));
    if ((double)*(float *)(puVar15 + 0x10) - dVar33 < 0.0) {
      dVar34 = dVar37;
    }
    fVar7 = *(float *)(((uint)(uVar28 << 2) | 0x735900) + 4);
    dVar37 = ABS((double)*(float *)((int)puVar15 + 0x7c));
    if ((double)*(float *)(puVar15 + 0x10) - dVar33 < 0.0) {
      dVar37 = dVar38;
    }
    dVar38 = dVar33;
    if (dVar33 < dVar34) {
      lVar24 = uVar22 - 0x130;
      lVar29 = uVar22 - 0x90;
      lVar31 = uVar22 - 0x80;
      lVar32 = 2;
      fVar8 = (float)(dVar37 - dVar34) / (float)(dVar37 + dVar34);
      fVar9 = fVar8 * fVar8;
      *(float *)((int)puVar15 + 0xbc) = fVar8;
      *(float *)((int)puVar15 + 0xb4) = fVar8;
      *(float *)(puVar15 + 0x17) = fVar8;
      *(float *)(puVar15 + 0x16) = fVar8;
      fVar8 = fVar9 * fVar9;
      *(float *)((int)puVar15 + 0xb4) = *(float *)((int)puVar15 + 0xb4) * fVar9;
      *(float *)(puVar15 + 0x17) = *(float *)(puVar15 + 0x17) * fVar8;
      *(float *)((int)puVar15 + 0xbc) = *(float *)((int)puVar15 + 0xbc) * fVar8 * fVar9;
      do {
        *(float *)((int)lVar24 + 0xb0) = *(float *)((int)lVar24 + 0xa0) * fVar8 * fVar8;
        iVar26 = (int)lVar29;
        lVar24 = lVar24 + 8;
        lVar29 = lVar29 + 8;
        *(float *)((int)lVar31 + 4) = *(float *)(iVar26 + 4) * fVar8 * fVar8;
        lVar31 = lVar31 + 8;
        lVar32 = lVar32 + -1;
      } while (lVar32 != 0);
      lVar32 = 4;
      lVar31 = uVar22 - 0x90;
      pfVar30 = (float *)&DAT_007358e0;
      lVar24 = lVar25;
      lVar29 = lVar31;
      do {
        fVar8 = *pfVar30;
        fVar9 = pfVar30[1];
        pfVar30 = pfVar30 + 2;
        *(float *)((int)lVar24 + 0xb0) = *(float *)((int)lVar24 + 0xb0) * fVar8;
        lVar24 = lVar24 + 8;
        *(float *)((int)lVar29 + 4) = *(float *)((int)lVar29 + 4) * fVar9;
        lVar29 = lVar29 + 8;
        lVar32 = lVar32 + -1;
      } while (lVar32 != 0);
      lVar29 = 2;
      lVar24 = lVar25;
      dVar34 = dVar33;
      do {
        iVar26 = (int)lVar24;
        lVar24 = lVar24 + 0x10;
        iVar16 = (int)lVar31;
        lVar31 = lVar31 + 0x10;
        dVar34 = (double)((float)(dVar34 + (double)*(float *)(iVar26 + 0xb0)) +
                          *(float *)(iVar16 + 4) + *(float *)(iVar16 + 8) + *(float *)(iVar16 + 0xc)
                         );
        lVar29 = lVar29 + -1;
      } while (lVar29 != 0);
      dVar38 = (double)((float)(dVar34 + dVar39) * fVar2 + fVar7);
    }
    dVar35 = ABS(dVar35);
    (pMoby->rotation).x = (float)-dVar38;
    *(float *)(puVar15 + 0xe) = fVar6;
    *(float *)((int)puVar15 + 0x74) = (float)(dVar35 - ABS(dVar36));
    uVar28 = (ulonglong)((uint)fVar3 >> 0x1c) & 8 |
             (ulonglong)(*(uint *)((int)puVar15 + 0x74) >> 0x1e) & 2 |
             (ulonglong)(*(uint *)(puVar15 + 0xe) >> 0x1d) & 4;
    dVar34 = dVar35;
    if ((double)*(float *)((int)puVar15 + 0x74) - dVar33 < 0.0) {
      dVar34 = ABS(dVar36);
    }
    dVar36 = ABS((double)*(float *)(puVar15 + 0xe));
    if ((double)*(float *)((int)puVar15 + 0x74) - dVar33 < 0.0) {
      dVar36 = dVar35;
    }
    fVar3 = *(float *)(&g_atanQuadrantTable + (int)(uVar28 << 2));
    fVar2 = *(float *)(((uint)(uVar28 << 2) | 0x735900) + 4);
    dVar35 = dVar33;
    if (dVar33 < dVar34) {
      lVar24 = uVar22 - 0x130;
      lVar31 = uVar22 - 0xa0;
      lVar29 = uVar22 - 0xb0;
      lVar32 = 2;
      fVar7 = (float)(dVar36 - dVar34) / (float)(dVar36 + dVar34);
      fVar6 = fVar7 * fVar7;
      *(float *)((int)puVar15 + 0x9c) = fVar7;
      *(float *)((int)puVar15 + 0x94) = fVar7;
      *(float *)(puVar15 + 0x13) = fVar7;
      *(float *)(puVar15 + 0x12) = fVar7;
      fVar7 = fVar6 * fVar6;
      *(float *)((int)puVar15 + 0x94) = *(float *)((int)puVar15 + 0x94) * fVar6;
      *(float *)(puVar15 + 0x13) = *(float *)(puVar15 + 0x13) * fVar7;
      *(float *)((int)puVar15 + 0x9c) = *(float *)((int)puVar15 + 0x9c) * fVar7 * fVar6;
      do {
        *(float *)((int)lVar24 + 0x90) = *(float *)((int)lVar24 + 0x80) * fVar7 * fVar7;
        iVar26 = (int)lVar29;
        lVar29 = lVar29 + 8;
        lVar24 = lVar24 + 8;
        *(float *)((int)lVar31 + 4) = *(float *)(iVar26 + 4) * fVar7 * fVar7;
        lVar31 = lVar31 + 8;
        lVar32 = lVar32 + -1;
      } while (lVar32 != 0);
      lVar32 = 4;
      lVar31 = uVar22 - 0xb0;
      pfVar30 = (float *)&DAT_007358e0;
      lVar24 = lVar25;
      lVar29 = lVar31;
      do {
        fVar7 = *pfVar30;
        fVar6 = pfVar30[1];
        pfVar30 = pfVar30 + 2;
        *(float *)((int)lVar24 + 0x90) = *(float *)((int)lVar24 + 0x90) * fVar7;
        lVar24 = lVar24 + 8;
        *(float *)((int)lVar29 + 4) = *(float *)((int)lVar29 + 4) * fVar6;
        lVar29 = lVar29 + 8;
        lVar32 = lVar32 + -1;
      } while (lVar32 != 0);
      lVar24 = 2;
      dVar34 = dVar33;
      do {
        iVar26 = (int)lVar25;
        iVar16 = (int)lVar31;
        lVar25 = lVar25 + 0x10;
        lVar31 = lVar31 + 0x10;
        dVar34 = (double)((float)(dVar34 + (double)*(float *)(iVar26 + 0x90)) +
                          *(float *)(iVar16 + 4) + *(float *)(iVar16 + 8) + *(float *)(iVar16 + 0xc)
                         );
        lVar24 = lVar24 + -1;
      } while (lVar24 != 0);
      dVar35 = (double)((float)(dVar34 + dVar39) * fVar3 + fVar2);
    }
    (pMoby->rotation).y = (float)dVar35;
  }
  pMoby->collision = pMoby->pClass->collision;
  PlayMobySound(1,0,pMoby);
  pMoby->state = '\x01';
  *(undefined2 *)((int)pvVar11 + 0x66) = 0;
  fVar2 = animationSpeed;
  puVar15[0x1e] = (longlong)(int)(animationSpeed * 120.5);
  puVar15[0x1e] = (longlong)(int)(fVar2 * 300.5);
  uVar27 = MB_randRange
                     (*(undefined4 *)((int)puVar15 + 0xf4),*(undefined4 *)((int)puVar15 + 0xf4));
  *(undefined2 *)((int)pvVar11 + 100) = uVar27;
  dVar39 = (double)FastIntToDouble(g_goldWeaponsArray.morphORay);
  *(undefined4 *)((int)pvVar11 + 0x70) = 0xffffffff;
  *(float *)((int)pvVar11 + 0x78) = (float)(dVar39 * 3.0 + 1.0);
  bVar21 = g_goldWeaponsArray.morphORay;
  *(uint *)((int)pvVar11 + 0x74) = (uint)g_goldWeaponsArray.morphORay;
  pMoby->setByGroup = bVar21;
  MB_SpawnBoltsFromCrate(param_1,0,0xffffffffffffffff);
  iVar26 = MB_GetPvarsIfMobyHasThem(param_1);
  if ((iVar26 == 0) || (*(char *)(iVar26 + 0xe) != '\x01')) {
    DeleteMoby(param_1);
  }
  else {
    *(undefined1 *)(iVar26 + 0xe) = 2;
  }
  puVar15[0x1e] = (longlong)(int)(animationSpeed * 15.5);
  SpawnPart_5(0x412e848000000000,dVar33,lVar23 + 0x10,0x7f,0x7f,0x7f);
  FastMemSet(pvVar11,0,0x20);
  iVar26 = (&DAT_010bb494)[DAT_010bca30];
  if ((iVar26 != 0) && (*(short *)(iVar26 + 0xa6) == 0x10e)) {
    cVar1 = *(char *)(iVar26 + 0x20);
    if (cVar1 != -3 && cVar1 != -2) {
      if (cVar1 == '\x05') {
        *(undefined4 *)((int)pvVar11 + 0x78) = 0;
        pMoby->modeBits =
             pMoby->modeBits &
             (MIRROR|CAN_BE_DAMAGED|HIDE_BACKFACES|CAN_BE_AUTO_TARGETED|DISABLE_Z_WRITE|DRAW_SHADOW|
              DRAW_TRANSPARENT_WEIRD|LOCK_ROTATION|NO_DRAW|UNK_40|HAS_GLOW|TRANSPARENT|
              NO_POST_UPDATE|NO_UPDATE|DISABLED);
      }
      else if (*(int *)((int)pvVar11 + 0x74) == 0) {
        iVar26 = DAT_010bca30 * 0x60;
        *(int *)((int)pvVar11 + 0x14) = DAT_010bca30 * 0xb0 + 0x10bb4f0;
        *(int *)((int)pvVar11 + 0x10) = iVar26 + 0x10bc2b0;
        pMoby->modeBits = pMoby->modeBits | (CAN_BE_AUTO_TARGETED|HAS_SPECIAL_VARS);
        *(undefined **)(*(int *)((int)pvVar11 + 0x14) + 0x70) = &DAT_008000c0;
      }
      *(undefined4 *)(*(int *)((&DAT_010bb494)[DAT_010bca30] + 0x78) + 0x70) = 1;
      goto LAB_003215a4;
    }
  }
  if (*(int *)((int)pvVar11 + 0x74) == 0) {
    iVar26 = DAT_010bca30 * 0x60;
    *(int *)((int)pvVar11 + 0x14) = DAT_010bca30 * 0xb0 + 0x10bb4f0;
    *(int *)((int)pvVar11 + 0x10) = iVar26 + 0x10bc2b0;
    pMoby->modeBits = pMoby->modeBits | (CAN_BE_AUTO_TARGETED|HAS_SPECIAL_VARS);
    *(undefined **)(*(int *)((int)pvVar11 + 0x14) + 0x70) = &DAT_008000c0;
  }
LAB_003215a4:
  iVar26 = *(int *)((int)pvVar11 + 0x14);
  if (iVar26 != 0) {
    *(undefined4 *)(iVar26 + 0x78) = 0;
    *(undefined4 *)(iVar26 + 0x84) = 4;
    *(undefined4 *)(iVar26 + 0x88) = 3;
    *(undefined4 *)(iVar26 + 0x8c) = 0x3f200000;
    *(undefined4 *)(iVar26 + 0x7c) = 0x3d4ccccd;
    *(undefined4 *)(iVar26 + 0x80) = 0x3f5ced91;
    *(undefined2 *)(iVar26 + 0x9c) = 0xffff;
    *(undefined2 *)(iVar26 + 0x9e) = 0xffff;
    *(undefined4 *)(iVar26 + 0xa0) = 0xffffffff;
    *(undefined4 *)(iVar26 + 0xa4) = 0xffffffff;
    *(undefined4 *)(iVar26 + 0xa8) = 0xffffffff;
    *(undefined4 *)(iVar26 + 0xac) = 0xffffffff;
  }
  (&DAT_010bb494)[DAT_010bca30] = pMoby;
  DAT_010bca30 = (DAT_010bca30 + 1) % 0x14;
  if (*(int *)((int)pvVar11 + 0x74) != 0) {
    pMoby->modeBits =
         pMoby->modeBits &
         (MIRROR|CAN_BE_DAMAGED|HIDE_BACKFACES|CAN_BE_AUTO_TARGETED|DISABLE_Z_WRITE|DRAW_SHADOW|
          DRAW_TRANSPARENT_WEIRD|LOCK_ROTATION|NO_DRAW|UNK_40|HAS_GLOW|TRANSPARENT|NO_POST_UPDATE|
          NO_UPDATE|DISABLED);
  }
  UpdateMobyTransform(pMoby);
  return lVar23;
}


// 0x03216b8 (0x2b8 bytes)
int FUN_003216b8(MobyInstance *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  void *pvVar1;
  u16 *puVar2;
  undefined2 uVar3;
  int iVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  GPiece<16> auVar11;
  GPiece<16> auVar12;
  GPiece<16> auVar13;
  f32 fStack00000040;
  f32 fStack00000044;
  f32 fStack00000048;
  f32 fStack0000004c;
  GPiece<16> local_80;
  float afStack_70 [4];
  float local_60 [4];
  
  fStack00000044 = (f32)param_3;
  fStack0000004c = (f32)param_4;
  (param_1->pos).y = fStack00000044;
  (param_1->pos).w = fStack0000004c;
  fStack00000040 = (f32)((ulonglong)param_3 >> 0x20);
  fStack00000048 = (f32)((ulonglong)param_4 >> 0x20);
  (param_1->pos).x = fStack00000040;
  (param_1->pos).z = fStack00000048;
  _fStack00000040 = param_3;
  _fStack00000048 = param_4;
  iVar4 = CollSphere(0x3fc99999a0000000,local_80,&stack0x00000000,0,param_1);
  if (iVar4 == 0) {
    pvVar1 = param_1->pVar;
    *(undefined4 *)((int)pvVar1 + 0x78) = 0x3f800000;
    if (param_1->animationId != '\x02') {
      MB_SetAnimation(param_1,2,0,1);
    }
    auVar11 = ZEXT416(0xffffffff);
    auVar11 = auVar11 | auVar11 << 0x20 | auVar11 << 0x40 | auVar11 << 0x60;
    auVar12 = vectorShiftLeftIntegerWord(auVar11,auVar11);
    param_1->modeBits =
         param_1->modeBits &
         (MIRROR|CAN_BE_DAMAGED|HIDE_BACKFACES|CAN_BE_AUTO_TARGETED|DISABLE_Z_WRITE|DRAW_SHADOW|
          DRAW_TRANSPARENT_WEIRD|LOCK_ROTATION|NO_DRAW|HAS_SPECIAL_VARS|HAS_GLOW|TRANSPARENT|
          NO_POST_UPDATE|NO_UPDATE) | CAN_BE_AUTO_TARGETED;
    puVar2 = param_1->pClass->collision;
    param_1->state = '\x04';
    param_1->collision = puVar2;
    auVar11 = loadVectorLeftIndexed(0x10,0x3216a4);
    auVar11 = auVar11 >> 0x60 & (GPiece<16>)0xffffffff;
    auVar13 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
    iVar4 = 0x66;
    auVar11 = vectorMultiplyAddFloatingPoint
                        (auVar13,auVar11 | auVar11 << 0x20 | auVar11 << 0x40 | auVar11 << 0x60,
                         auVar12);
    auVar11 = vectorConvertToSignedFixedPointWordSaturate(auVar11,0);
    auVar11 = vectorSplatHalfWord(auVar11,1);
    uVar3 = storeVectorElementHalfWordIndexed(auVar11,0x66,ZEXT48(pvVar1));
    *(undefined2 *)((int)pvVar1 + 0x66) = uVar3;
  }
  else {
    iVar4 = 0;
    dVar8 = 0.01745329238474369;
    dVar9 = 3.5;
    dVar10 = 5.5;
    do {
      dVar5 = (double)MB_randRangeFloat(DAT_010bca34,DAT_008000e0);
      dVar6 = (double)MB_randRot();
      dVar7 = (double)MB_randRot();
      MB_SphericalToVector((float)dVar5,(float)dVar6,(float)dVar7,local_60);
      dVar5 = (double)MB_randRangeFloat
                                (DAT_008000d4 * g_FrameTime,
                                 DAT_008000d8 * g_FrameTime);
      dVar6 = (double)MB_randRot();
      MB_SphericalToVector
                ((float)dVar5,(float)dVar6,(float)((double)DAT_008000d0 * dVar8),afStack_70);
      MB_randRangeFloat((float)dVar9,(float)dVar10);
      SpawnMoby_428_Feather(param_1,local_60,afStack_70);
      iVar4 = iVar4 + 1;
    } while (iVar4 < 4);
    iVar4 = PlayMobySound(1,0,param_1);
  }
  return iVar4;
}


// 0x0321970 (0x1c bytes)
bool FUN_00321970(int param_1)

{
  return *(char *)(param_1 + 0x20) == '\x06';
}


// 0x0321a20 (0x1f7c bytes)
// strings: 003219c8: '?333@' (raw)

/* Moby 270 */

void UpdateMoby_270(MobyInstance *moby)

{
  u8 uVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  f32 fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  MobyModeBit MVar9;
  void *pvVar10;
  uint uVar11;
  float fVar12;
  float fVar13;
  undefined8 uVar14;
  longlong lVar15;
  undefined2 uVar21;
  int iVar18;
  undefined4 uVar19;
  longlong lVar16;
  undefined8 uVar17;
  uint uVar20;
  undefined *puVar22;
  ulonglong uVar23;
  double dVar24;
  double dVar25;
  double dVar26;
  double dVar27;
  undefined8 extraout_f1;
  undefined8 extraout_f1_00;
  double dVar28;
  double dVar29;
  double dVar30;
  undefined8 uVar31;
  double dVar32;
  double dVar33;
  double dVar34;
  double dVar35;
  undefined8 uVar36;
  double dVar37;
  GPiece<16> auVar38;
  GPiece<16> auVar39;
  GPiece<16> auVar40;
  GPiece<16> local_140;
  GPiece<16> local_130;
  float afStack_120 [4];
  float local_110 [4];
  GPiece<16> local_100;
  float afStack_f0 [4];
  float local_e0 [4];
  float afStack_d0 [4];
  float local_c0 [4];
  GPiece<32> local_b0;
  
  lVar15 = (longlong)(int)moby;
  pvVar10 = moby->pVar;
  uVar23 = ZEXT48(pvVar10);
  dVar34 = (double)moby->unk58;
  dVar24 = (double)FUN_005e8338((double)((moby->pos).x - g_heroPosition.x),
                                (double)((moby->pos).y - g_heroPosition.y));
  uVar1 = moby->state;
  if (uVar1 == '\0') {
    moby->state = '\x01';
    *(undefined2 *)((int)pvVar10 + 0x66) = 0;
    *(undefined4 *)((int)pvVar10 + 0x70) = 0xffffffff;
    uVar21 = MB_randRange((int)(animationSpeed * 120.5),(int)(animationSpeed * 300.5));
    *(undefined2 *)((int)pvVar10 + 100) = uVar21;
    *(undefined4 *)((int)pvVar10 + 0x78) = 0x3f800000;
    uVar1 = moby->state;
  }
  if (uVar1 == '\x06') {
    return;
  }
  if (g_goldWeaponsArray.morphORay == '\0') {
    DoManipulator
              (0x401eccccc0000000,moby,(longlong)DAT_010bb490,(Manipulator *)((int)pvVar10 + 0x20U))
    ;
  }
  else {
    DoManipulator
              (0x4014000000000000,moby,(longlong)DAT_010bb490,(Manipulator *)((int)pvVar10 + 0x20U))
    ;
  }
  fVar2 = (moby->pos).x;
  fVar3 = (moby->pos).y;
  fVar4 = (moby->pos).z;
  fVar5 = (moby->pos).w;
  if (((-1 < *(int *)((int)pvVar10 + 0x70)) &&
      (iVar18 = FastDecTimerS32(uVar23 + 0x70), iVar18 != 0)) && (moby->enabled == '\0'))
  {
    DeleteMoby(moby);
    return;
  }
  uVar11 = (int)g_PerfLoad >> 0x1f;
  uVar20 = (int)g_FrameLoad >> 0x1f;
  if (*(int *)((int)pvVar10 + 0x70) < 0) {
    if ((0x3f800000 < (int)((uVar11 >> 1 ^ (uint)g_PerfLoad) - uVar11)) ||
       (0x3f800000 < (int)((uVar20 >> 1 ^ g_FrameLoad) - uVar20))) {
      if ((moby->enabled == '\0') && (iVar18 = MB_randInt(9), iVar18 == 0)) {
        uVar19 = 0;
      }
      else {
        uVar19 = MB_randRange(0x1e,0x32);
      }
      *(undefined4 *)((int)pvVar10 + 0x70) = uVar19;
    }
  }
  else {
    if (((0x3f666666 < (int)((uVar11 >> 1 ^ (uint)g_PerfLoad) - uVar11)) ||
        (0x3f666666 < (int)((uVar20 >> 1 ^ g_FrameLoad) - uVar20))) &&
       ((moby->enabled == '\0' && (*(int *)((int)pvVar10 + 0x70) != -1)))) {
      iVar18 = MB_randInt(199);
      if (iVar18 == 0) {
        DeleteMoby(moby);
        return;
      }
      uVar19 = MB_randRange(0x14,0x1e);
      *(undefined4 *)((int)pvVar10 + 0x70) = uVar19;
    }
    if ((1.0 < g_PerfLoad) ||
       (0x3f800000 <
        (int)(FLOAT_ORDER(g_FrameLoad))
       )) {
      if (moby->enabled == '\0') {
        iVar18 = MB_randInt(0x18);
        if (iVar18 == 0) {
          DeleteMoby(moby);
          return;
        }
      }
      else {
        iVar18 = MB_randInt(99);
        if (iVar18 == 0) {
          *(undefined4 *)((int)pvVar10 + 0x78) = 0;
        }
        else {
          uVar19 = MB_randRange(0x14,0x1e);
          *(undefined4 *)((int)pvVar10 + 0x70) = uVar19;
        }
      }
    }
  }
  if (0 < *(int *)((int)pvVar10 + 0x74)) {
    dVar37 = (double)moby->scale;
    dVar25 = (double)FastIntToDouble(*(int *)((int)pvVar10 + 0x74));
    moby->scale = (float)((double)((float)(dVar25 * 3.0 + 1.0) * moby->pClass->gScale - moby->scale)
                          * 0.10000000149011612 + dVar37);
  }
  dVar25 = (double)(moby->scale / moby->pClass->gScale);
  iVar18 = FastDecTimerS32(uVar23 + 0x7c);
  if ((iVar18 != 0) && (iVar18 = MB_damage(lVar15,0xffffffffffffffff,0), iVar18 != 0)) {
    PlayMobySound(1,0,moby);
    auVar38 = ZEXT416(0xffffffff);
    auVar38 = auVar38 | auVar38 << 0x20 | auVar38 << 0x40 | auVar38 << 0x60;
    auVar39 = vectorShiftLeftIntegerWord(auVar38,auVar38);
    *(float *)((int)pvVar10 + 0x78) = *(float *)((int)pvVar10 + 0x78) - *(float *)(iVar18 + 0x2c);
    auVar38 = loadVectorLeftIndexed(0x1c,0x32198c);
    auVar40 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
    auVar38 = auVar38 >> 0x60 & (GPiece<16>)0xffffffff;
    auVar38 = vectorMultiplyAddFloatingPoint
                        (auVar40,auVar38 | auVar38 << 0x20 | auVar38 << 0x40 | auVar38 << 0x60,
                         auVar39);
    auVar38 = vectorConvertToSignedFixedPointWordSaturate(auVar38,0);
    auVar38 = auVar38 >> 0x60 & (GPiece<16>)0xffffffff;
    uVar19 = storeVectorElementWordIndexed
                       (auVar38 | auVar38 << 0x20 | auVar38 << 0x40 | auVar38 << 0x60,0x7c,uVar23);
    *(undefined4 *)((int)pvVar10 + 0x7cU & 0xfffffffc) = uVar19;
  }
  moby->damage = -1;
  uVar11 = (int)*(uint *)((int)pvVar10 + 0x78) >> 0x1f;
  uVar31 = 0x3ff0000000000000;
  if ((int)((uVar11 >> 1 ^ *(uint *)((int)pvVar10 + 0x78)) - uVar11) < 0x3f800000) {
    if (*(int *)((int)pvVar10 + 0x74) == 0) {
      dVar35 = 0.0;
      dVar33 = 0.3700000047683716;
      dVar37 = (double)(float)(dVar25 * 150000.0);
      dVar32 = 0.25;
      dVar30 = 0.5;
      dVar29 = 0.10000000149011612;
      dVar34 = 30.5;
      dVar24 = 57.5;
      for (iVar18 = 0; lVar16 = FastDoubleToInt(dVar25),
          iVar18 < (int)(lVar16 << 4) + (int)(lVar16 << 2); iVar18 = iVar18 + 1) {
        dVar26 = (double)MB_randRangeFloat((float)dVar35,(float)dVar33);
        dVar28 = (double)(float)(dVar26 * dVar25);
        dVar26 = (double)MB_randRot();
        dVar27 = (double)MB_randRot();
        MB_SphericalToVector((float)dVar28,(float)dVar26,(float)dVar27,local_110);
        MB_randRangeFloat((float)dVar32,(float)dVar30);
        dVar26 = (double)MB_randRangeFloat
                                   ((float)((double)g_FrameTime * dVar29),
                                    g_FrameTime);
        dVar28 = (double)(float)(dVar26 * dVar25);
        dVar26 = (double)MB_randRot();
        dVar27 = (double)MB_randRot();
        MB_SphericalToVector((float)dVar28,(float)dVar26,(float)dVar27,afStack_120);
        MB_randRange
                  ((int)((double)animationSpeed * dVar34),(int)((double)animationSpeed * dVar24));
        SpawnPart_22(dVar37,local_110,afStack_120,0x3f7f7f7f,0x2f2f2f);
      }
    }
    else {
      uVar36 = 0x4008000000000000;
      MB_genericExplosion
                (0,0x4000000000000000,0x4010000000000000,0x4008000000000000,0x4022000000000000,
                 0x3ff0000000000000,0x4028000000000000,lVar15,local_100,0,&DAT_0032198c,
                 0xffffffffffffffff,0,0,0);
      uVar17 = CollMobySphere(uVar36,lVar15 + 0x10);
      uVar36.piece<0,4>() = (moby->pos).x;
      uVar36.piece<4,4>() = (moby->pos).y;
      uVar14.piece<0,4>() = (moby->pos).z;
      uVar14.piece<4,4>() = (moby->pos).w;
      MB_DamageMobyList
                (uVar31,uVar31,uVar31,lVar15,2,uVar36,uVar14,&DAT_00a14a00,uVar17,0,&DAT_00830000);
    }
    uVar20 = MB_randRange(5,8);
    iVar18 = FLOAT_ORDER(g_FrameLoad);
    uVar11 = (int)g_PerfLoad >> 0x1f;
    if ((0x3f59999a < iVar18) || (0x3f59999a < (int)((uVar11 >> 1 ^ (uint)g_PerfLoad) - uVar11)))
    {
      if ((iVar18 < 0x3f800001) && ((int)((uVar11 >> 1 ^ (uint)g_PerfLoad) - uVar11) < 0x3f800001)
         ) {
        uVar20 = ((int)uVar20 >> 1) + (uint)((int)uVar20 < 0 && (uVar20 & 1) != 0);
      }
      else {
        uVar20 = 1;
      }
    }
    iVar18 = 0;
    if (0 < (int)uVar20) {
      dVar37 = 0.01745329238474369;
      dVar34 = 3.5;
      dVar24 = 5.5;
      do {
        dVar29 = (double)MB_randRangeFloat(DAT_010bca34,DAT_008000e0);
        dVar32 = (double)(float)(dVar29 * dVar25);
        dVar29 = (double)MB_randRot();
        dVar30 = (double)MB_randRot();
        MB_SphericalToVector((float)dVar32,(float)dVar29,(float)dVar30,local_e0);
        dVar29 = (double)MB_randRangeFloat
                                   (DAT_008000d4 * g_FrameTime,
                                    DAT_008000d8 * g_FrameTime);
        dVar30 = (double)MB_randRot();
        MB_SphericalToVector
                  ((float)dVar29,(float)dVar30,(float)((double)DAT_008000d0 * dVar37),afStack_f0);
        MB_randRangeFloat((float)dVar34,(float)dVar24);
        SpawnMoby_428_Feather(lVar15,local_e0,afStack_f0);
        iVar18 = iVar18 + 1;
      } while (iVar18 < (int)uVar20);
    }
    PlayMobySound(1,0,moby);
    if (-1 < *(int *)((int)pvVar10 + 0x70)) {
      DeleteMoby(moby);
      return;
    }
    MVar9 = moby->modeBits;
    *(undefined4 *)((int)pvVar10 + 0x74) = 0;
    moby->collision = (ushort *)0x0;
    moby->setByGroup = '\0';
    moby->state = '\x06';
    moby->modeBits =
         MVar9 & (MIRROR|CAN_BE_DAMAGED|HIDE_BACKFACES|DISABLE_Z_WRITE|DRAW_SHADOW|
                  DRAW_TRANSPARENT_WEIRD|LOCK_ROTATION|NO_DRAW|UNK_40|HAS_SPECIAL_VARS|HAS_GLOW|
                  TRANSPARENT|NO_POST_UPDATE|NO_UPDATE|DISABLED) | (UNK_40|DISABLED);
    return;
  }
  iVar18 = FastDecTimerS16(uVar23 + 100);
  uVar31 = extraout_f1;
  if (iVar18 != 0) {
    lVar16 = MB_randInt(100);
    PlayMobySound((uint)((ulonglong)(lVar16 + -0x4b) >> 0x3f) ^ 1,0,moby);
    uVar21 = MB_randRange((int)(animationSpeed * 120.5),(int)(animationSpeed * 300.5));
    *(undefined2 *)((int)pvVar10 + 100) = uVar21;
    uVar31 = extraout_f1_00;
  }
  puVar22 = *(undefined **)((int)pvVar10 + 0x70);
  fVar6 = 0.333;
  if (-1 < (int)puVar22) {
    puVar22 = &DAT_00720000;
    uVar31 = 0x4000000000000000;
    fVar6 = (float)((double)(g_FrameTime * 2.0) * dVar25);
  }
  dVar37 = (double)fVar6;
  uVar1 = moby->state;
  if (uVar1 == '\x05') {
    iVar18 = FUN_0048c188(uVar31,lVar15,*(undefined4 *)((int)pvVar10 + 0x10));
    if (iVar18 != 0) {
      moby->state = '\0';
      *(undefined2 *)(*(int *)((int)pvVar10 + 0x14) + 0x68) = 0;
    }
    iVar18 = MB_randInt(4);
    if (iVar18 != 0) {
      return;
    }
    dVar24 = (double)MB_randRangeFloat(DAT_010bca34,DAT_008000e0);
    dVar25 = (double)(float)(dVar24 * dVar25);
    dVar24 = (double)MB_randRot();
    dVar34 = (double)MB_randRot();
    MB_SphericalToVector((float)dVar25,(float)dVar24,(float)dVar34,local_c0);
    dVar24 = (double)MB_randRangeFloat
                               (DAT_008000d4 * g_FrameTime,
                                DAT_008000d8 * g_FrameTime);
    dVar34 = (double)MB_randRot();
    MB_SphericalToVector
              ((float)dVar24,(float)dVar34,DAT_008000d0 * 0.017453292,afStack_d0);
    MB_randRangeFloat(3.5,5.5);
    SpawnMoby_428_Feather(lVar15,local_c0,afStack_d0);
    return;
  }
  if (uVar1 == '\x04') {
    iVar18 = FastDecTimerS16(uVar23 + 0x66);
    if ((iVar18 == 0) ||
       (fVar6 = (moby->pos).y - g_heroPosition.y, fVar7 = (moby->pos).x - g_heroPosition.x,
       SQRT(fVar7 * fVar7 + fVar6 * fVar6) <= (float)(dVar25 * 4.0))) {
      dVar29 = 1.5707963705062866;
      OrganicDeltAngSpeed
                (dVar24,(double)(DAT_0071f418 * 0.7853982),(double)(DAT_0071f418 * 1.5707964),
                 (double)(g_FrameTime * 0.7853982),lVar15);
      cosf((moby->rotation).z);
      FUN_005e8128((double)(moby->rotation).z);
      iVar18 = CollMovingSphere
                         ((double)(float)(dVar25 * 0.20000000298023224),
                          (double)(float)(dVar25 * 0.5),dVar37,0x3fd0c15240000000,lVar15,local_140,
                          local_130);
      if (iVar18 == 0) {
        dVar37 = (double)(moby->rotation).z;
        dVar24 = (double)FUN_005e8338((double)(fVar2 - (moby->pos).x),
                                      (double)(fVar3 - (moby->pos).y));
        dVar24 = (double)FastSubRots((float)dVar37,(float)dVar24);
        if ((dVar29 < dVar24) ||
           (fVar6 = (moby->pos).y - fVar3, fVar7 = (moby->pos).x - fVar2,
           fVar8 = (moby->pos).z - fVar4,
           SQRT(fVar8 * fVar8 + fVar7 * fVar7 + fVar6 * fVar6) <
           (float)(dVar25 * 0.009999999776482582))) {
          moby->state = '\x01';
          uVar21 = MB_randRange
                             ((int)(animationSpeed * 60.5),(int)(animationSpeed * 180.5));
          *(undefined2 *)((int)pvVar10 + 0x66) = uVar21;
          uVar19 = MB_randInt(2);
          MB_SetAnimation
                    (lVar15,(ulonglong)(LZCOUNT(uVar19) << 0x20) >> 0x25,0,
                     (int)(animationSpeed * 5.5));
        }
      }
    }
    else {
      dVar29 = 1.5707963705062866;
      OrganicDeltAngSpeed
                (dVar24,(double)(DAT_0071f418 * 0.7853982),(double)(DAT_0071f418 * 1.5707964),
                 (double)(g_FrameTime * 0.7853982),lVar15);
      cosf((moby->rotation).z);
      FUN_005e8128((double)(moby->rotation).z);
      iVar18 = CollMovingSphere
                         ((double)(float)(dVar25 * 0.20000000298023224),
                          (double)(float)(dVar25 * 0.5),dVar37,0x3fd0c15240000000,lVar15,local_140,
                          local_130);
      if (iVar18 == 0) {
        dVar37 = (double)(moby->rotation).z;
        dVar24 = (double)FUN_005e8338((double)(fVar2 - (moby->pos).x),
                                      (double)(fVar3 - (moby->pos).y));
        dVar24 = (double)FastSubRots((float)dVar37,(float)dVar24);
        if ((dVar29 < dVar24) ||
           (fVar6 = (moby->pos).y - fVar3, fVar7 = (moby->pos).x - fVar2,
           fVar8 = (moby->pos).z - fVar4,
           SQRT(fVar8 * fVar8 + fVar7 * fVar7 + fVar6 * fVar6) <
           (float)(dVar25 * 0.009999999776482582))) {
          moby->state = '\x01';
          uVar21 = MB_randRange
                             ((int)(animationSpeed * 60.5),(int)(animationSpeed * 180.5));
          *(undefined2 *)((int)pvVar10 + 0x66) = uVar21;
          uVar19 = MB_randInt(2);
          MB_SetAnimation
                    (lVar15,(ulonglong)(LZCOUNT(uVar19) << 0x20) >> 0x25,0,
                     (int)(animationSpeed * 5.5));
          goto LAB_00323660;
        }
      }
      moby->state = '\x03';
      MB_SetAnimation(lVar15,3,0,(int)(animationSpeed * 10.5));
    }
LAB_00323660:
    if (iVar18 != 0) {
      (moby->pos).x = fVar2;
      (moby->pos).y = fVar3;
      (moby->pos).z = fVar4;
      (moby->pos).w = fVar5;
      goto LAB_00323780;
    }
  }
  else if (uVar1 == '\x03') {
    fVar6 = (moby->pos).y - g_heroPosition.y;
    fVar7 = (moby->pos).x - g_heroPosition.x;
    fVar6 = SQRT(fVar7 * fVar7 + fVar6 * fVar6);
    if (fVar6 <= (float)(dVar25 * 6.0)) {
      if ((float)(dVar25 * 3.0) <= fVar6) {
        dVar29 = 1.5707963705062866;
        OrganicDeltAngSpeed
                  (dVar24,(double)(DAT_0071f418 * 0.7853982),(double)(DAT_0071f418 * 1.5707964),
                   (double)(g_FrameTime * 0.7853982),lVar15,puVar22,uVar23 + 0x68);
        cosf((moby->rotation).z);
        FUN_005e8128((double)(moby->rotation).z);
        iVar18 = CollMovingSphere
                           ((double)(float)(dVar25 * 0.20000000298023224),
                            (double)(float)(dVar25 * 0.5),dVar37,0x3fd0c15240000000,lVar15,local_140
                            ,local_130);
        if (iVar18 == 0) {
          dVar37 = (double)(moby->rotation).z;
          dVar24 = (double)FUN_005e8338((double)(fVar2 - (moby->pos).x),
                                        (double)(fVar3 - (moby->pos).y));
          dVar24 = (double)FastSubRots((float)dVar37,(float)dVar24);
          if ((dVar29 < dVar24) ||
             (fVar6 = (moby->pos).y - fVar3, fVar7 = (moby->pos).x - fVar2,
             fVar8 = (moby->pos).z - fVar4,
             SQRT(fVar8 * fVar8 + fVar7 * fVar7 + fVar6 * fVar6) <
             (float)(dVar25 * 0.009999999776482582))) {
            moby->state = '\x01';
            uVar21 = MB_randRange
                               ((int)(animationSpeed * 60.5),(int)(animationSpeed * 180.5));
            *(undefined2 *)((int)pvVar10 + 0x66) = uVar21;
            uVar19 = MB_randInt(2);
            MB_SetAnimation
                      (lVar15,(ulonglong)(LZCOUNT(uVar19) << 0x20) >> 0x25,0,
                       (int)(animationSpeed * 5.5));
          }
        }
      }
      else {
        dVar29 = 1.5707963705062866;
        OrganicDeltAngSpeed
                  (dVar24,(double)(DAT_0071f418 * 0.7853982),(double)(DAT_0071f418 * 1.5707964),
                   (double)(g_FrameTime * 0.7853982),lVar15,puVar22,uVar23 + 0x68);
        cosf((moby->rotation).z);
        FUN_005e8128((double)(moby->rotation).z);
        iVar18 = CollMovingSphere
                           ((double)(float)(dVar25 * 0.20000000298023224),
                            (double)(float)(dVar25 * 0.5),dVar37,0x3fd0c15240000000,lVar15,local_140
                            ,local_130);
        if (iVar18 == 0) {
          dVar37 = (double)(moby->rotation).z;
          dVar24 = (double)FUN_005e8338((double)(fVar2 - (moby->pos).x),
                                        (double)(fVar3 - (moby->pos).y));
          dVar24 = (double)FastSubRots((float)dVar37,(float)dVar24);
          if ((dVar29 < dVar24) ||
             (fVar6 = (moby->pos).y - fVar3, fVar7 = (moby->pos).x - fVar2,
             fVar8 = (moby->pos).z - fVar4,
             SQRT(fVar8 * fVar8 + fVar7 * fVar7 + fVar6 * fVar6) <
             (float)(dVar25 * 0.009999999776482582))) {
            moby->state = '\x01';
            uVar21 = MB_randRange
                               ((int)(animationSpeed * 60.5),(int)(animationSpeed * 180.5));
            *(undefined2 *)((int)pvVar10 + 0x66) = uVar21;
            uVar19 = MB_randInt(2);
            MB_SetAnimation
                      (lVar15,(ulonglong)(LZCOUNT(uVar19) << 0x20) >> 0x25,0,
                       (int)(animationSpeed * 5.5));
            goto LAB_00323660;
          }
        }
        moby->state = '\x04';
        MB_SetAnimation(lVar15,2,0,(int)(animationSpeed * 10.5));
      }
      goto LAB_00323660;
    }
    moby->state = '\x01';
    uVar21 = MB_randRange((int)(animationSpeed * 60.5),(int)(animationSpeed * 180.5));
    *(undefined2 *)((int)pvVar10 + 0x66) = uVar21;
    uVar19 = MB_randInt(2);
    MB_SetAnimation
              (lVar15,(ulonglong)(LZCOUNT(uVar19) << 0x20) >> 0x25,0,(int)(animationSpeed * 5.5));
    CollMovingSphere
              ((double)(float)(dVar25 * 0.20000000298023224),(double)(float)(dVar25 * 0.5),dVar37,
               0x3fd0c15240000000,lVar15,local_140,local_140);
  }
  else if (uVar1 == '\x02') {
    OrganicDeltAngSpeed
              (dVar24,(double)(DAT_0071f418 * 0.7853982),(double)(DAT_0071f418 * 1.5707964),
               (double)(g_FrameTime * 0.7853982),lVar15,&DAT_00720000,uVar23 + 0x68);
    uVar31 = 0x3fe0000000000000;
    CollMovingSphere
              ((double)(float)(dVar25 * 0.20000000298023224),(double)(float)(dVar25 * 0.5),dVar37,
               0x3fd0c15240000000,lVar15,local_140,local_140);
    iVar18 = FastDecTimerS16(uVar23 + 0x66);
    fVar6 = (moby->rotation).z;
    if ((iVar18 == 0) ||
       (fVar7 = (moby->pos).y - g_heroPosition.y, fVar8 = (moby->pos).x - g_heroPosition.x,
       (float)(dVar25 * 5.0) <= SQRT(fVar8 * fVar8 + fVar7 * fVar7))) {
      dVar24 = (double)FastSubRots((float)dVar24,fVar6);
      if ((dVar24 < 0.0872664600610733) ||
         (fVar6 = (moby->pos).y - g_heroPosition.y, fVar7 = (moby->pos).x - g_heroPosition.x,
         (float)(dVar25 * 6.0) < SQRT(fVar7 * fVar7 + fVar6 * fVar6))) {
        moby->state = '\x01';
        uVar21 = MB_randRange((int)(animationSpeed * 60.5),(int)(animationSpeed * 180.5));
        *(undefined2 *)((int)pvVar10 + 0x66) = uVar21;
        uVar19 = MB_randInt(2);
        MB_SetAnimation
                  (lVar15,(ulonglong)(LZCOUNT(uVar19) << 0x20) >> 0x25,0,(int)(animationSpeed * 5.5)
                  );
      }
    }
    else {
      cosf(fVar6);
      FUN_005e8128((double)(moby->rotation).z);
      dVar24 = (double)GetGroundZ(uVar31,local_130,0);
      if (ABS((float)(dVar24 - (double)fVar4)) <=
          (float)((double)(g_FrameTime * 2.0) * dVar25)) {
        moby->state = '\x03';
        MB_SetAnimation(lVar15,3,0,(int)(animationSpeed * 10.5));
      }
    }
  }
  else if (uVar1 == '\x01') {
    if ((moby->field43_0x70 & 2U) != 0) {
      uVar19 = MB_randInt(2);
      MB_SetAnimation
                (lVar15,(ulonglong)(LZCOUNT(uVar19) << 0x20) >> 0x25,0,(int)(animationSpeed * 5.5));
    }
    iVar18 = FastDecTimerS16(uVar23 + 0x66);
    fVar6 = (moby->pos).x;
    fVar7 = (moby->pos).y;
    fVar8 = (moby->rotation).z;
    if ((iVar18 != 0) &&
       (fVar13 = fVar7 - g_heroPosition.y, fVar12 = fVar6 - g_heroPosition.x,
       SQRT(fVar12 * fVar12 + fVar13 * fVar13) < (float)(dVar25 * 5.0))) {
      cosf(fVar8);
      FUN_005e8128((double)(moby->rotation).z);
      iVar18 = CollMovingSphere
                         ((double)(float)(dVar25 * 0.20000000298023224),
                          (double)(float)(dVar25 * 0.5),dVar37,0x3fd0c15240000000,lVar15,local_140,
                          local_130);
      if (iVar18 == 0) {
        dVar37 = (double)(moby->rotation).z;
        dVar24 = (double)FUN_005e8338((double)(fVar2 - (moby->pos).x),
                                      (double)(fVar3 - (moby->pos).y));
        dVar24 = (double)FastSubRots((float)dVar37,(float)dVar24);
        if ((1.5707963705062866 <= dVar24) ||
           (fVar6 = (moby->pos).y - fVar3, fVar7 = (moby->pos).x - fVar2,
           fVar8 = (moby->pos).z - fVar4,
           SQRT(fVar8 * fVar8 + fVar7 * fVar7 + fVar6 * fVar6) <=
           (float)(dVar25 * 0.009999999776482582))) {
          uVar21 = MB_randRange
                             ((int)(animationSpeed * 60.5),(int)(animationSpeed * 180.5));
          *(undefined2 *)((int)pvVar10 + 0x66) = uVar21;
          goto LAB_00323660;
        }
      }
      moby->state = '\x03';
      MB_SetAnimation(lVar15,3,0,(int)(animationSpeed * 10.5));
      goto LAB_00323660;
    }
    fVar7 = fVar7 - g_heroPosition.y;
    fVar6 = fVar6 - g_heroPosition.x;
    if (((float)(dVar25 * 5.0) <= SQRT(fVar6 * fVar6 + fVar7 * fVar7)) ||
       (dVar24 = (double)FastSubRots((float)dVar24,fVar8), dVar24 <= 0.5235987901687622))
    {
      CollMovingSphere
                ((double)(float)(dVar25 * 0.20000000298023224),(double)(float)(dVar25 * 0.5),dVar37,
                 0x3fd0c15240000000,lVar15,local_140,local_140);
    }
    else {
      CollMovingSphere
                ((double)(float)(dVar25 * 0.20000000298023224),(double)(float)(dVar25 * 0.5),dVar37,
                 0x3fd0c15240000000,lVar15,local_140,local_140);
      moby->state = '\x02';
      MB_SetAnimation(lVar15,3,0,(int)(animationSpeed * 10.5));
    }
  }
  fVar6 = (moby->pos).y;
  fVar7 = (moby->pos).x;
  fVar3 = fVar3 - fVar6;
  fVar2 = fVar2 - fVar7;
  fVar8 = (moby->pos).z;
  fVar4 = fVar4 - fVar8;
  if ((float)((double)g_FrameTime * dVar25) <
      SQRT(fVar4 * fVar4 + fVar2 * fVar2 + fVar3 * fVar3)) {
    FUN_005e7f98(local_b0,local_b0);
    fVar7 = (moby->pos).x;
    fVar6 = (moby->pos).y;
    fVar8 = (moby->pos).z;
  }
  fVar5 = (moby->pos).w;
  dVar24 = (double)GetGroundZNoWater(local_140);
  if (ABS((float)(dVar24 - (double)(moby->pos).z)) <=
      (float)((double)g_FrameTime * dVar25)) {
    (moby->pos).x = fVar7 + fVar2;
    (moby->pos).y = fVar6 + fVar3;
    (moby->pos).z = fVar8 + fVar4;
    (moby->pos).w = fVar5;
  }
LAB_00323780:
  fVar2 = DAT_0071f418 * 9.8 + *(float *)((int)pvVar10 + 0x6c);
  *(float *)((int)pvVar10 + 0x6c) = fVar2;
  (moby->pos).z = (moby->pos).z - fVar2;
  dVar24 = (double)GetGroundZ(0x3fe0000000000000,lVar15 + 0x10,0);
  dVar37 = (double)(moby->pos).z;
  if ((dVar37 < dVar24) && (dVar24 < (double)(float)(dVar25 * 0.25 + dVar37))) {
    *(undefined4 *)((int)pvVar10 + 0x6c) = 0;
    (moby->pos).z = (float)dVar24;
  }
  iVar18 = CollHotspot();
  if (iVar18 == 0) {
    *(undefined4 *)((int)pvVar10 + 0x78) = 0;
  }
  if (moby->state != '\x05') {
    (moby->pos).z = g_CollOutput.ip.z;
    dVar32 = (double)g_CollOutput.normal.x;
    dVar30 = (double)g_CollOutput.normal.y;
    dVar29 = (double)g_CollOutput.normal.z;
    dVar24 = (double)cosf((moby->rotation).z);
    dVar25 = (double)FUN_005e8128((double)(moby->rotation).z);
    dVar37 = (double)(float)(dVar32 * dVar24 + (double)(float)(dVar30 * dVar25));
    dVar24 = (double)cosf((moby->rotation).z);
    dVar25 = (double)FUN_005e8128((double)(moby->rotation).z);
    dVar24 = (double)FUN_005e8338((double)SQRT((float)(dVar37 * dVar37 +
                                                      (double)(float)(dVar29 * dVar29))),
                                  (double)(float)(dVar30 * dVar24 - (double)(float)(dVar32 * dVar25)
                                                 ));
    dVar24 = -dVar24;
    uVar31 = FUN_005e8338(dVar29,dVar37);
    dVar25 = (double)(moby->rotation).x;
    dVar24 = (double)FastDiffRots(dVar24,dVar25);
    dVar37 = 6.2831854820251465;
    dVar24 = (double)FastWrapRot
                               ((float)dVar25,
                                (float)((double)(g_FrameTime * 6.2831855) * dVar24));
    dVar25 = (double)(moby->rotation).y;
    (moby->rotation).x = (float)dVar24;
    dVar24 = (double)FastDiffRots(uVar31,dVar25);
    dVar24 = (double)FastWrapRot
                               ((float)dVar25,
                                (float)((double)(float)((double)g_FrameTime * dVar37) *
                                       dVar24));
    (moby->rotation).y = (float)dVar24;
  }
  if ((int)(moby->pos).z < 0) {
    DeleteMoby(moby);
  }
  else {
    moby->unk58 = (float)dVar34;
  }
  return;
}


