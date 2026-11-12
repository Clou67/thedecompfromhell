// game/update/moby439.cpp -- reconstructed from NPEA00385 EBOOT
// STATUS: NOT STARTED (raw Ghidra output)
// 8 functions, 0x37af90-0x37c1b8
#include "game/update/moby439.h"
#include "game/help.h"
#include "game/hero.h"
#include "game/map.h"
#include "game/mobyfunc.h"
#include "game/mobyproc.h"
#include "game/mobyutil.h"
#include "game/partupd.h"
#include "game/update.h"
#include "game/update/moby1118.h"
#include "idol/fastfunc.h"

// 0x037af90 (0x14 bytes)
void M439_0037af90(void)

{
  DAT_008419bc = 0x10000;
  return;
}


// 0x037afa8 (0xbc bytes)
MobyInstance * FUN_0037afa8(int param_1)

{
  f32 fVar1;
  f32 fVar2;
  MobyInstance *pMVar3;
  undefined8 uVar4;
  
  pMVar3 = CreateMoby(HOVERBOARD_01B7);
  if (pMVar3 != (MobyInstance *)0x0) {
    pMVar3->updateDistance = -1;
    pMVar3->drawDistance = 0xff;
    pMVar3->enabled = '\x01';
    fVar1 = *(f32 *)(param_1 + 0x10);
    pMVar3->state = '\x02';
    fVar2 = *(f32 *)(param_1 + 0x14);
    (pMVar3->pos).x = fVar1;
    fVar1 = *(f32 *)(param_1 + 0x18);
    (pMVar3->pos).y = fVar2;
    fVar2 = *(f32 *)(param_1 + 0x1c);
    (pMVar3->pos).z = fVar1;
    fVar1 = *(f32 *)(param_1 + 0x40);
    (pMVar3->pos).w = fVar2;
    fVar2 = *(f32 *)(param_1 + 0x44);
    (pMVar3->rotation).x = fVar1;
    fVar1 = *(f32 *)(param_1 + 0x48);
    (pMVar3->rotation).y = fVar2;
    fVar2 = *(f32 *)(param_1 + 0x4c);
    (pMVar3->rotation).z = fVar1;
    uVar4 = *(undefined8 *)(param_1 + 0x38);
    (pMVar3->rotation).w = fVar2;
    pMVar3->color = (int)((ulonglong)uVar4 >> 0x20);
    pMVar3->light = (int)uVar4;
    UpdateMobyTransform(pMVar3);
  }
  return pMVar3;
}


// 0x037b090 (0x4d8 bytes)
// strings: 00a0feec: 'None'

/* Moby 439 */

void UpdateMoby_439(MobyInstance *moby)

{
  byte bVar1;
  char cVar2;
  float fVar3;
  float *pfVar4;
  undefined4 uVar5;
  ulonglong *puVar6;
  float fVar7;
  float fVar8;
  undefined4 uVar9;
  int iVar10;
  ulonglong uVar11;
  undefined8 uVar12;
  ulonglong unaff_r26;
  ulonglong unaff_r27;
  ulonglong unaff_r28;
  ulonglong unaff_r29;
  ulonglong unaff_r30;
  ulonglong unaff_r31;
  ulonglong in_LR;
  ulonglong in_f28;
  double dVar13;
  ulonglong in_f29;
  double dVar14;
  ulonglong in_f30;
  double dVar15;
  ulonglong in_f31;
  double dVar16;
  GPiece<16> auVar17;
  
  uVar11 = ZEXT48(&stack0x00000000);
  puVar6 = (ulonglong *)(uVar11 - 0x100);
  *puVar6 = uVar11;
  puVar6[0x22] = in_LR;
  puVar6[0x1c] = in_f28;
  puVar6[0x1d] = in_f29;
  puVar6[0x1e] = in_f30;
  puVar6[0x1f] = in_f31;
  puVar6[0x1b] = unaff_r31;
  bVar1 = moby->state;
  puVar6[0x1a] = unaff_r30;
  pfVar4 = (float *)moby->pVar;
  puVar6[0x19] = unaff_r29;
  puVar6[0x18] = unaff_r28;
  puVar6[0x17] = unaff_r27;
  puVar6[0x16] = unaff_r26;
  iVar10 = DAT_00969e7c;
  if (bVar1 == 0) {
    fVar3 = g_heroPosition.y - (moby->pos).y;
    fVar7 = g_heroPosition.x - (moby->pos).x;
    fVar8 = g_heroPosition.z - (moby->pos).z;
    if (((SQRT(fVar8 * fVar8 + fVar7 * fVar7 + fVar3 * fVar3) < 5.5) && (3 < (int)worldUpdateTime))
       && (g_heroStateType != 0x16 && g_heroStateType != 0x15)) {
      g_heroBoardMoby = moby;
      TransitionMovement(0x6b,1);
      if (pfVar4[0x14] == 0.0) {
        pfVar4[4] = (moby->pos).x;
        pfVar4[5] = (moby->pos).y;
        pfVar4[6] = (moby->pos).z;
        pfVar4[7] = (moby->pos).w;
      }
      moby->state = '\x01';
      moby->updateDistance = -1;
    }
  }
  else if (bVar1 < 2) {
    if (((((pfVar4[0x14] == 0.0) && (g_MiscLevelFlags.Zoomerator != false)) &&
         (CHAR_ARRAY_00a0feec.piece<240,2>() == 0)) &&
        ((DAT_00a1a864 != 0 &&
         (puVar6[0x14] = (longlong)(int)(animationSpeed * 1200.5),
         *(int *)((int)puVar6 + 0xa4) < iVar10)))) && (HelpData.piece<760,2>() == 0)) {
      Help_QueueMessage(STR_TO_PERFORM_TRICKS_HOLD_0x138F,0x5f);
    }
    if (g_heroStateType != 0x16) {
      moby->updateDistance = '\x10';
      if (pfVar4[0x14] == 0.0) {
        (moby->pos).x = pfVar4[4];
        (moby->pos).y = pfVar4[5];
        (moby->pos).z = pfVar4[6];
        (moby->pos).w = pfVar4[7];
      }
      moby->state = '\0';
    }
  }
  fVar3 = (moby->pos).x;
  dVar14 = (double)((moby->pos).y - pfVar4[1]);
  dVar13 = (double)(fVar3 - *pfVar4);
  dVar16 = (double)(moby->pos).w;
  dVar15 = (double)((moby->pos).z - pfVar4[2]);
  *pfVar4 = fVar3;
  pfVar4[1] = (moby->pos).y;
  pfVar4[2] = (moby->pos).z;
  pfVar4[3] = (moby->pos).w;
  if ((moby->setByGroup != '\x02') &&
     (SQRT((float)(dVar15 * dVar15 +
                  (double)(float)(dVar13 * dVar13 + (double)(float)(dVar14 * dVar14)))) < 2.0)) {
    GetBonePosition(moby,worldUpdateTime & 1,uVar11 - 0x90);
    MB_randRot();
    cVar2 = moby->setByGroup;
    *(float *)(puVar6 + 0x10) = (float)dVar13;
    auVar17 = loadVectorLeftIndexed(0x1a0c,0x840000);
    *(float *)((int)puVar6 + 0x84) = (float)dVar14;
    auVar17 = vectorConvertFromSignedFixedPointWord(auVar17,0);
    *(float *)(puVar6 + 0x11) = (float)dVar15;
    auVar17 = auVar17 >> 0x60 & (GPiece<16>)0xffffffff;
    uVar5 = storeVectorElementWordIndexed
                      (auVar17 | auVar17 << 0x20 | auVar17 << 0x40 | auVar17 << 0x60,0x8c,
                       uVar11 - 0x100);
    *(undefined4 *)((int)puVar6 + 0x8c) = uVar5;
    uVar9 = DAT_008419f4;
    uVar5 = DAT_008419f0;
    fVar3 = animationSpeed;
    if (cVar2 == '\0') {
      puVar6[0x14] = (longlong)(int)(animationSpeed * 10.5);
      puVar6[0x14] = (longlong)(int)(fVar3 * 13.5);
      uVar12 = MB_randRange
                         (*(undefined4 *)((int)puVar6 + 0xa4),*(undefined4 *)((int)puVar6 + 0xa4));
      SpawnPart_4(uVar11 - 0x90,uVar11 - 0x80,uVar5,uVar9,uVar12,0xf,0xf,1);
    }
    else {
      *(float *)((int)puVar6 + 0x9c) = (float)dVar16;
      fVar3 = animationSpeed;
      *(float *)(puVar6 + 0x12) = (float)(dVar13 * 0.9200000166893005);
      *(float *)((int)puVar6 + 0x94) = (float)(dVar14 * 0.9200000166893005);
      *(float *)(puVar6 + 0x13) = (float)(dVar15 * 0.9200000166893005);
      uVar5 = DAT_008419f4;
      puVar6[0x14] = (longlong)(int)(fVar3 * 15.5);
      puVar6[0x14] = (longlong)(int)(fVar3 * 18.5);
      uVar12 = MB_randRange
                         (*(undefined4 *)((int)puVar6 + 0xa4),*(undefined4 *)((int)puVar6 + 0xa4));
      SpawnPart_4(uVar11 - 0x90,uVar11 - 0x70,0x5032f0d2,uVar5,uVar12,0x1e,0x14,1);
      uVar9 = DAT_008419f4;
      uVar5 = DAT_008419f0;
      dVar13 = (double)animationSpeed;
      uVar12 = 0x40cd4c0000000000;
      puVar6[0x14] = (longlong)(int)(dVar13 * 8.5);
      puVar6[0x14] = (longlong)(int)(dVar13 * 17.5);
      MB_randRange
                ((longlong)(int)(dVar13 * 17.5),dVar13,0x40cd4c0000000000,
                 *(undefined4 *)((int)puVar6 + 0xa4),*(undefined4 *)((int)puVar6 + 0xa4));
      SpawnPart_21(uVar12,uVar11 - 0x90,uVar11 - 0x80,uVar5,uVar9);
    }
  }
  moby->setByGroup = '\0';
  return;
}


// 0x037b568 (0x14 bytes)
void M439_0037b568(void)

{
  DAT_00841a60 = 0x10000;
  return;
}


// 0x037b5b0 (0x618 bytes)
// inlined: FastAtan2 @0x37b720, FastAtan2 @0x37b8d4
void M44_0037b5b0(int param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  int iVar5;
  int iVar6;
  ulonglong *puVar7;
  int iVar8;
  ulonglong uVar9;
  longlong lVar10;
  longlong lVar11;
  longlong lVar12;
  float *pfVar13;
  ulonglong uVar14;
  longlong lVar15;
  ulonglong unaff_r29;
  char cVar16;
  ulonglong unaff_r30;
  ulonglong unaff_r31;
  ulonglong in_LR;
  longlong lVar17;
  double dVar18;
  double dVar19;
  double dVar20;
  ulonglong in_f26;
  double dVar21;
  ulonglong in_f27;
  double dVar22;
  ulonglong in_f28;
  double dVar23;
  ulonglong in_f29;
  double dVar24;
  ulonglong in_f30;
  double dVar25;
  ulonglong in_f31;
  double dVar26;
  
  uVar9 = ZEXT48(&stack0x00000000);
  lVar11 = uVar9 - 0x110;
  puVar7 = (ulonglong *)lVar11;
  *puVar7 = uVar9;
  puVar7[0x24] = in_LR;
  puVar7[0x1c] = in_f26;
  puVar7[0x1d] = in_f27;
  puVar7[0x1e] = in_f28;
  puVar7[0x1f] = in_f29;
  puVar7[0x20] = in_f30;
  puVar7[0x21] = in_f31;
  puVar7[0x1a] = unaff_r30;
  puVar7[0x1b] = unaff_r31;
  iVar5 = *(int *)(param_1 + 0x78);
  puVar7[0x19] = unaff_r29;
  cVar16 = *(char *)(param_1 + 0x20);
  if ((*(short *)(iVar5 + 0x194) == 0) || (iVar6 = *(int *)(iVar5 + 400), iVar6 == 0)) {
    if ((*(short *)(iVar5 + 0x19c) == 0) || (iVar6 = *(int *)(iVar5 + 0x198), iVar6 == 0)) {
      if (*(char *)(iVar5 + 0x19f) == '\0') {
        dVar26 = 0.0;
        dVar19 = dVar26;
        goto LAB_0037baac;
      }
      fVar1 = *(float *)(iVar5 + 0x100);
      fVar2 = *(float *)(iVar5 + 0x104);
      dVar26 = (double)*(float *)(iVar5 + 0x108);
    }
    else {
      fVar1 = *(float *)(iVar6 + 0x10);
      fVar2 = *(float *)(iVar6 + 0x14);
      dVar26 = (double)*(float *)(iVar6 + 0x18);
    }
  }
  else {
    fVar1 = *(float *)(iVar6 + 0x10);
    fVar2 = *(float *)(iVar6 + 0x14);
    dVar26 = (double)*(float *)(iVar6 + 0x18);
  }
  fVar1 = fVar1 - *(float *)(param_1 + 0x10);
  dVar24 = (double)fVar1;
  fVar2 = fVar2 - *(float *)(param_1 + 0x14);
  dVar23 = (double)fVar2;
  *(float *)((int)puVar7 + 0x7c) = fVar1;
  *(float *)(puVar7 + 0x10) = fVar2;
  dVar25 = (double)(*(float *)(param_1 + 0x18) + 1.0);
  *(float *)((int)puVar7 + 0x84) = (float)(ABS(dVar24) - ABS(dVar23));
  dVar21 = 0.0;
  dVar22 = 0.7853981852531433;
  uVar14 = (ulonglong)(*(uint *)((int)puVar7 + 0x7c) >> 0x1c) & 8 |
           (ulonglong)(*(uint *)((int)puVar7 + 0x84) >> 0x1e) & 2 |
           (ulonglong)(*(uint *)(puVar7 + 0x10) >> 0x1d) & 4;
  fVar1 = *(float *)(&g_atanQuadrantTable + (int)(uVar14 << 2));
  dVar19 = ABS((double)*(float *)((int)puVar7 + 0x7c));
  if (*(float *)((int)puVar7 + 0x84) - 0.0 < 0.0) {
    dVar19 = ABS(dVar23);
  }
  dVar20 = ABS((double)*(float *)(puVar7 + 0x10));
  if (*(float *)((int)puVar7 + 0x84) - 0.0 < 0.0) {
    dVar20 = ABS(dVar24);
  }
  fVar2 = *(float *)(((uint)(uVar14 << 2) | 0x735900) + 4);
  dVar18 = dVar21;
  if (0.0 < dVar19) {
    lVar10 = uVar9 - 0x100;
    lVar12 = uVar9 - 0x68;
    lVar15 = uVar9 - 0x58;
    lVar17 = 2;
    fVar3 = (float)(dVar20 - dVar19) / (float)(dVar20 + dVar19);
    fVar4 = fVar3 * fVar3;
    *(float *)((int)puVar7 + 0xb4) = fVar3;
    *(float *)((int)puVar7 + 0xac) = fVar3;
    *(float *)(puVar7 + 0x16) = fVar3;
    *(float *)(puVar7 + 0x15) = fVar3;
    fVar3 = fVar4 * fVar4;
    *(float *)((int)puVar7 + 0xac) = *(float *)((int)puVar7 + 0xac) * fVar4;
    *(float *)(puVar7 + 0x16) = *(float *)(puVar7 + 0x16) * fVar3;
    *(float *)((int)puVar7 + 0xb4) = *(float *)((int)puVar7 + 0xb4) * fVar3 * fVar4;
    do {
      *(float *)((int)lVar10 + 0xa8) = *(float *)((int)lVar10 + 0x98) * fVar3 * fVar3;
      iVar6 = (int)lVar12;
      lVar10 = lVar10 + 8;
      lVar12 = lVar12 + 8;
      *(float *)((int)lVar15 + 4) = *(float *)(iVar6 + 4) * fVar3 * fVar3;
      lVar15 = lVar15 + 8;
      lVar17 = lVar17 + -1;
    } while (lVar17 != 0);
    lVar17 = 4;
    lVar15 = uVar9 - 0x68;
    pfVar13 = (float *)&DAT_007358e0;
    lVar10 = lVar11;
    lVar12 = lVar15;
    do {
      fVar3 = *pfVar13;
      fVar4 = pfVar13[1];
      pfVar13 = pfVar13 + 2;
      *(float *)((int)lVar10 + 0xa8) = *(float *)((int)lVar10 + 0xa8) * fVar3;
      lVar10 = lVar10 + 8;
      *(float *)((int)lVar12 + 4) = *(float *)((int)lVar12 + 4) * fVar4;
      lVar12 = lVar12 + 8;
      lVar17 = lVar17 + -1;
    } while (lVar17 != 0);
    lVar12 = 2;
    lVar10 = lVar11;
    dVar19 = dVar21;
    do {
      iVar6 = (int)lVar10;
      lVar10 = lVar10 + 0x10;
      iVar8 = (int)lVar15;
      lVar15 = lVar15 + 0x10;
      dVar19 = (double)((float)(dVar19 + (double)*(float *)(iVar6 + 0xa8)) + *(float *)(iVar8 + 4) +
                        *(float *)(iVar8 + 8) + *(float *)(iVar8 + 0xc));
      lVar12 = lVar12 + -1;
    } while (lVar12 != 0);
    dVar18 = (double)((float)(dVar19 + 0.7853981852531433) * fVar1 + fVar2);
  }
  dVar19 = (double)FastDiffRots(dVar18,(double)*(float *)(param_1 + 0x48));
  dVar20 = ABS((double)(float)(dVar26 - dVar25));
  *(float *)((int)puVar7 + 0x74) = (float)(dVar26 - dVar25);
  cVar16 = *(char *)(param_1 + 0x20);
  fVar1 = SQRT((float)(dVar24 * dVar24 + (double)(float)(dVar23 * dVar23)));
  dVar23 = ABS((double)fVar1);
  *(float *)(puVar7 + 0xe) = fVar1;
  *(float *)(puVar7 + 0xf) = (float)(dVar23 - dVar20);
  uVar14 = (ulonglong)(*(uint *)(puVar7 + 0xe) >> 0x1c) & 8 |
           (ulonglong)(*(uint *)(puVar7 + 0xf) >> 0x1e) & 2 |
           (ulonglong)(*(uint *)((int)puVar7 + 0x74) >> 0x1d) & 4;
  fVar1 = *(float *)(&g_atanQuadrantTable + (int)(uVar14 << 2));
  dVar26 = ABS((double)*(float *)(puVar7 + 0xe));
  if ((double)*(float *)(puVar7 + 0xf) - dVar21 < 0.0) {
    dVar26 = dVar20;
  }
  fVar2 = *(float *)(((uint)(uVar14 << 2) | 0x735900) + 4);
  dVar24 = ABS((double)*(float *)((int)puVar7 + 0x74));
  if ((double)*(float *)(puVar7 + 0xf) - dVar21 < 0.0) {
    dVar24 = dVar23;
  }
  if (dVar21 < dVar26) {
    lVar10 = uVar9 - 0x100;
    lVar15 = uVar9 - 0x78;
    lVar12 = uVar9 - 0x88;
    lVar17 = 2;
    fVar3 = (float)(dVar24 - dVar26) / (float)(dVar24 + dVar26);
    fVar4 = fVar3 * fVar3;
    *(float *)((int)puVar7 + 0x94) = fVar3;
    *(float *)((int)puVar7 + 0x8c) = fVar3;
    *(float *)(puVar7 + 0x12) = fVar3;
    *(float *)(puVar7 + 0x11) = fVar3;
    fVar3 = fVar4 * fVar4;
    *(float *)((int)puVar7 + 0x8c) = *(float *)((int)puVar7 + 0x8c) * fVar4;
    *(float *)(puVar7 + 0x12) = *(float *)(puVar7 + 0x12) * fVar3;
    *(float *)((int)puVar7 + 0x94) = *(float *)((int)puVar7 + 0x94) * fVar3 * fVar4;
    do {
      *(float *)((int)lVar10 + 0x88) = *(float *)((int)lVar10 + 0x78) * fVar3 * fVar3;
      iVar6 = (int)lVar12;
      lVar12 = lVar12 + 8;
      lVar10 = lVar10 + 8;
      *(float *)((int)lVar15 + 4) = *(float *)(iVar6 + 4) * fVar3 * fVar3;
      lVar15 = lVar15 + 8;
      lVar17 = lVar17 + -1;
    } while (lVar17 != 0);
    lVar17 = 4;
    lVar15 = uVar9 - 0x88;
    pfVar13 = (float *)&DAT_007358e0;
    lVar10 = lVar11;
    lVar12 = lVar15;
    do {
      fVar3 = *pfVar13;
      fVar4 = pfVar13[1];
      pfVar13 = pfVar13 + 2;
      *(float *)((int)lVar10 + 0x88) = *(float *)((int)lVar10 + 0x88) * fVar3;
      lVar10 = lVar10 + 8;
      *(float *)((int)lVar12 + 4) = *(float *)((int)lVar12 + 4) * fVar4;
      lVar12 = lVar12 + 8;
      lVar17 = lVar17 + -1;
    } while (lVar17 != 0);
    lVar10 = 2;
    do {
      iVar6 = (int)lVar11;
      iVar8 = (int)lVar15;
      lVar11 = lVar11 + 0x10;
      lVar15 = lVar15 + 0x10;
      dVar21 = (double)((float)(dVar21 + (double)*(float *)(iVar6 + 0x88)) + *(float *)(iVar8 + 4) +
                        *(float *)(iVar8 + 8) + *(float *)(iVar8 + 0xc));
      lVar10 = lVar10 + -1;
    } while (lVar10 != 0);
    dVar21 = (double)((float)(dVar21 + dVar22) * fVar1 + fVar2);
  }
  dVar21 = -dVar21;
  if ((cVar16 == '\x10') || (cVar16 == '\x11')) {
    dVar26 = 1.5707963705062866;
    if ((dVar19 <= 1.5707963705062866) && (dVar26 = dVar19, dVar19 < -1.5707963705062866)) {
      dVar26 = -1.5707963705062866;
    }
  }
  else {
    dVar26 = 1.0471975803375244;
    if ((dVar19 <= 1.0471975803375244) && (dVar26 = dVar19, dVar19 < -1.0471975803375244)) {
      dVar26 = -1.0471975803375244;
    }
  }
  dVar19 = 0.5235987901687622;
  if ((dVar21 <= 0.5235987901687622) && (dVar19 = dVar21, dVar21 < -0.5235987901687622)) {
    dVar19 = -0.5235987901687622;
  }
LAB_0037baac:
  if ((cVar16 == '\x10') || (cVar16 == '\x11')) {
    *(float *)(iVar5 + 0x288) = (float)dVar26;
    if (dVar26 <= 1.0471975803375244) {
      dVar21 = dVar26;
      if (dVar26 < -1.0471975803375244) {
        *(undefined4 *)(iVar5 + 0x288) = 0xbf860a92;
        dVar21 = -1.0471975803375244;
      }
    }
    else {
      *(undefined4 *)(iVar5 + 0x288) = 0x3f860a92;
      dVar21 = 1.0471975803375244;
    }
    dVar21 = dVar26 - dVar21;
  }
  else {
    dVar21 = dVar26 * 0.699999988079071;
    *(float *)(iVar5 + 0x288) = (float)(dVar26 * 0.30000001192092896);
  }
  *(float *)(iVar5 + 0x208) = (float)dVar21;
  *(float *)(iVar5 + 0x204) = (float)dVar19;
  dVar19 = 0.019999999552965164;
  dVar26 = 0.30000001192092896;
  MB_UpdateManipulatorRot
            ((double)(DAT_0071f40c * 0.02),(double)(DAT_0071f40c * 0.3),param_1,iVar5 + 0x1a0,1);
  MB_UpdateManipulatorRot
            ((double)(float)((double)DAT_0071f40c * dVar19),
             (double)(float)((double)DAT_0071f40c * dVar26),param_1,iVar5 + 0x220,0);
  return;
}


// 0x037bbe8 (0x278 bytes)
undefined8
M44_0037bbe8
          (double param_1,int param_2,int param_3,undefined8 param_4,undefined1 param_5,
          undefined8 param_6)

{
  undefined4 uVar1;
  undefined8 uVar2;
  double dVar3;
  
  uVar2 = 1;
  dVar3 = (double)FastDiffRots((double)*(float *)(param_2 + 0x48),param_1);
  dVar3 = -dVar3;
  uVar1 = *(undefined4 *)(param_2 + 0x48);
  *(float *)(param_3 + 0x174) = (float)param_1;
  *(undefined4 *)(param_3 + 0x170) = uVar1;
  *(undefined4 *)(param_3 + 0x144) = 0;
  *(undefined1 *)(param_3 + 0x15c) = param_5;
  *(char *)(param_3 + 0x15d) = (char)param_6;
  *(float *)(param_3 + 0x178) = (float)dVar3;
  if ((2.094395160675049 < dVar3) || (dVar3 < -2.094395160675049)) {
    *(undefined1 *)(param_2 + 0x20) = 8;
    if (0.0 < dVar3) {
      *(float *)(param_3 + 0x178) = (float)(dVar3 + -6.2831854820251465);
    }
    if (*(char *)(param_2 + 0x53) != '\f') {
      MB_SetAnimation(param_2,0xc,0,(int)(animationSpeed * 10.5));
    }
  }
  else if (-0.7853981852531433 <= dVar3) {
    if (dVar3 <= 0.7853981852531433) {
      *(undefined1 *)(param_2 + 0x20) = param_5;
      if ((uint)*(byte *)(param_2 + 0x53) != (uint)param_6) {
        MB_SetAnimation(param_2,param_6,0,(int)(animationSpeed * 10.5));
      }
      uVar2 = 0;
    }
    else {
      *(undefined1 *)(param_2 + 0x20) = 7;
      if (*(char *)(param_2 + 0x53) != '\v') {
        MB_SetAnimation(param_2,0xb,0,(int)(animationSpeed * 10.5));
      }
    }
  }
  else {
    *(undefined1 *)(param_2 + 0x20) = 6;
    if (*(char *)(param_2 + 0x53) != '\n') {
      MB_SetAnimation(param_2,10,0,(int)(animationSpeed * 10.5));
    }
  }
  return uVar2;
}


// 0x037be68 (0x214 bytes)
// inlined: FastAtan2 @0x37bf48
void M44_0037be68
               (int param_1,undefined8 param_2,float *param_3,undefined8 param_4,undefined8 param_5)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  ulonglong *puVar5;
  int iVar6;
  int iVar7;
  float fVar8;
  ulonglong uVar9;
  longlong lVar10;
  longlong lVar11;
  longlong lVar12;
  longlong lVar13;
  float *pfVar14;
  ulonglong uVar15;
  ulonglong in_LR;
  longlong lVar16;
  double dVar17;
  
  uVar9 = ZEXT48(&stack0x00000000);
  lVar10 = uVar9 - 0xa0;
  puVar5 = (ulonglong *)lVar10;
  *puVar5 = uVar9;
  puVar5[0x16] = in_LR;
  fVar4 = *param_3 - *(float *)(param_1 + 0x10);
  fVar2 = param_3[1] - *(float *)(param_1 + 0x14);
  fVar3 = ABS(fVar4);
  fVar1 = ABS(fVar2);
  *(float *)(puVar5 + 0xe) = fVar4;
  *(float *)((int)puVar5 + 0x74) = fVar2;
  *(float *)(puVar5 + 0xf) = fVar3 - fVar1;
  dVar17 = 0.0;
  uVar15 = (ulonglong)(*(uint *)(puVar5 + 0xe) >> 0x1c) & 8 |
           (ulonglong)(*(uint *)(puVar5 + 0xf) >> 0x1e) & 2 |
           (ulonglong)(*(uint *)((int)puVar5 + 0x74) >> 0x1d) & 4;
  fVar4 = *(float *)(&g_atanQuadrantTable + (int)(uVar15 << 2));
  fVar2 = ABS(*(float *)(puVar5 + 0xe));
  if (*(float *)(puVar5 + 0xf) - 0.0 < 0.0) {
    fVar2 = fVar1;
  }
  fVar1 = *(float *)(((uint)(uVar15 << 2) | 0x735900) + 4);
  fVar8 = ABS(*(float *)((int)puVar5 + 0x74));
  if (*(float *)(puVar5 + 0xf) - 0.0 < 0.0) {
    fVar8 = fVar3;
  }
  if (0.0 < fVar2) {
    lVar13 = uVar9 - 0x90;
    lVar11 = uVar9 - 0x14;
    lVar12 = uVar9 - 0x24;
    lVar16 = 2;
    fVar2 = (fVar8 - fVar2) / (fVar8 + fVar2);
    fVar3 = fVar2 * fVar2;
    *(float *)(puVar5 + 0x11) = fVar2;
    *(float *)(puVar5 + 0x10) = fVar2;
    *(float *)((int)puVar5 + 0x84) = fVar2;
    *(float *)((int)puVar5 + 0x7c) = fVar2;
    fVar2 = fVar3 * fVar3;
    *(float *)(puVar5 + 0x10) = *(float *)(puVar5 + 0x10) * fVar3;
    *(float *)((int)puVar5 + 0x84) = *(float *)((int)puVar5 + 0x84) * fVar2;
    *(float *)(puVar5 + 0x11) = *(float *)(puVar5 + 0x11) * fVar2 * fVar3;
    do {
      *(float *)((int)lVar13 + 0x7c) = *(float *)((int)lVar13 + 0x6c) * fVar2 * fVar2;
      iVar6 = (int)lVar12;
      lVar12 = lVar12 + 8;
      lVar13 = lVar13 + 8;
      *(float *)((int)lVar11 + 4) = *(float *)(iVar6 + 4) * fVar2 * fVar2;
      lVar11 = lVar11 + 8;
      lVar16 = lVar16 + -1;
    } while (lVar16 != 0);
    lVar13 = uVar9 - 0x24;
    lVar16 = 4;
    pfVar14 = (float *)&DAT_007358e0;
    lVar11 = lVar13;
    lVar12 = lVar10;
    do {
      fVar2 = *pfVar14;
      fVar3 = pfVar14[1];
      pfVar14 = pfVar14 + 2;
      *(float *)((int)lVar12 + 0x7c) = *(float *)((int)lVar12 + 0x7c) * fVar2;
      lVar12 = lVar12 + 8;
      *(float *)((int)lVar11 + 4) = *(float *)((int)lVar11 + 4) * fVar3;
      lVar11 = lVar11 + 8;
      lVar16 = lVar16 + -1;
    } while (lVar16 != 0);
    lVar11 = 2;
    do {
      iVar6 = (int)lVar10;
      iVar7 = (int)lVar13;
      lVar10 = lVar10 + 0x10;
      lVar13 = lVar13 + 0x10;
      dVar17 = (double)((float)(dVar17 + (double)*(float *)(iVar6 + 0x7c)) + *(float *)(iVar7 + 4) +
                        *(float *)(iVar7 + 8) + *(float *)(iVar7 + 0xc));
      lVar11 = lVar11 + -1;
    } while (lVar11 != 0);
    dVar17 = (double)((float)(dVar17 + 0.7853981852531433) * fVar4 + fVar1);
  }
  M44_0037bbe8(dVar17,param_1,param_2,param_2,param_4,param_5);
  return;
}


// 0x037c07c (0x13c bytes)
undefined8 M44_0037c07c(int param_1)

{
  ushort uVar1;
  int iVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  uint uVar7;
  undefined8 uVar8;
  ushort *puVar9;
  
  iVar2 = *(int *)(*(int *)(param_1 + 0x78) + 0x128);
  if (iVar2 == -1) {
    uVar8 = 0;
  }
  else if (*(int *)((int)g_MobyInstance[iVar2].pVar + 8) == 0) {
    if (*(byte *)(param_1 + 0x21) == 0xff) {
      uVar8 = 1;
    }
    else {
      fVar3 = *(float *)(param_1 + 0x14) - g_MobyInstance[iVar2].pos.y;
      fVar4 = *(float *)(param_1 + 0x10) - g_MobyInstance[iVar2].pos.x;
      puVar9 = (ushort *)(&g_MobyGroups)[*(byte *)(param_1 + 0x21)];
      if (puVar9 == (ushort *)0x0) {
        uVar8 = 1;
      }
      else {
        do {
          uVar7 = *puVar9 & 0x7fff;
          if (g_MobyInstance[uVar7].state == '\x0e') {
            return 0;
          }
          if (((g_MobyInstance[uVar7].setByGroup == '\x01') &&
              (iVar2 = *(int *)((int)g_MobyInstance[uVar7].pVar + 0x128), iVar2 != -1)) &&
             (fVar5 = g_MobyInstance[uVar7].pos.y - g_MobyInstance[iVar2].pos.y,
             fVar6 = g_MobyInstance[uVar7].pos.x - g_MobyInstance[iVar2].pos.x,
             SQRT(fVar6 * fVar6 + fVar5 * fVar5) < SQRT(fVar4 * fVar4 + fVar3 * fVar3))) {
            return 0;
          }
          uVar1 = *puVar9;
          puVar9 = puVar9 + 1;
        } while (-1 < (short)uVar1);
        uVar8 = 1;
      }
    }
  }
  else {
    uVar8 = 0;
  }
  return uVar8;
}


