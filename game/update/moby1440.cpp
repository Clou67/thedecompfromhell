// game/update/moby1440.cpp -- reconstructed from NPEA00385 EBOOT
// STATUS: NOT STARTED (raw Ghidra output)
// 4 functions, 0x27caec-0x27ecbc
#include "game/update/moby1440.h"
#include "game/boot.h"
#include "game/camera.h"
#include "game/collproc.h"
#include "game/draw.h"
#include "game/hero.h"
#include "game/mobyfunc.h"
#include "game/mobyutil.h"
#include "game/partupd.h"
#include "game/update/moby1474.h"
#include "idol/fastfunc.h"

// 0x027caec (0x14 bytes)
void M1440_0027caec(void)

{
  DAT_007aa794 = 0x10000;
  return;
}


// 0x027cb28 (0x208 bytes)
void M1440_0027cb28(void *param_1)

{
  undefined2 uVar1;
  int iVar3;
  undefined8 uVar2;
  int iVar4;
  int iVar5;
  int iVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  GPiece<16> auVar12;
  GPiece<16> auVar13;
  GPiece<16> auVar14;
  Vec4 aVStack_80 [3];
  
  iVar3 = *(int *)((int)param_1 + 0x78);
  iVar6 = iVar3 + 0x1c0;
  GetBonePosition(param_1,1,iVar6);
  *(float *)(iVar3 + 0x1c8) = *(float *)(iVar3 + 0x1c8) - 0.333;
  MB_randVector(0.004999999888241291,0.029999999329447746,aVStack_80);
  iVar3 = SpawnPart_69(iVar6,aVStack_80,0x7f,param_1);
  if (iVar3 != 0) {
    dVar7 = (double)MB_randRangeFloat(6000.0,32000.0);
    *(float *)(iVar3 + 0xc) = (float)dVar7;
  }
  dVar7 = 80000.0;
  dVar9 = 120000.0;
  dVar10 = 2.5;
  iVar3 = 0;
  auVar14 = loadVectorLeftIndexed(0x1c,0x27cb00);
  dVar11 = 1.0;
  auVar14 = auVar14 >> 0x60 & (GPiece<16>)0xffffffff;
  auVar14 = auVar14 | auVar14 << 0x20 | auVar14 << 0x40 | auVar14 << 0x60;
  do {
    uVar2 = SpawnPart_69(iVar6,&DAT_00a15d30,0x7f,param_1);
    iVar5 = (int)uVar2;
    if (iVar5 != 0) {
      if ((iVar3 == 2) && (iVar4 = MB_randInt(8), iVar4 == 0)) {
        dVar8 = 180000.0;
      }
      else {
        dVar8 = (double)MB_randRangeFloat((float)dVar7,(float)dVar9);
      }
      auVar12 = ZEXT416(0xffffffff);
      auVar12 = auVar12 | auVar12 << 0x20 | auVar12 << 0x40 | auVar12 << 0x60;
      *(float *)(iVar5 + 0xc) = (float)dVar8;
      auVar12 = vectorShiftLeftIntegerWord(auVar12,auVar12);
      auVar13 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
      dVar8 = (double)animationSpeed;
      auVar12 = vectorMultiplyAddFloatingPoint(auVar13,auVar14,auVar12);
      auVar12 = vectorConvertToSignedFixedPointWordSaturate(auVar12,0);
      auVar12 = vectorSplatHalfWord(auVar12,1);
      uVar1 = storeVectorElementHalfWordIndexed(auVar12,10,uVar2);
      *(undefined2 *)(iVar5 + 10) = uVar1;
      dVar8 = (double)FastIntToDouble((short)(int)(dVar8 * dVar10));
      *(undefined2 *)(iVar5 + 0x36) = 3;
      *(undefined **)(iVar5 + 0x38) = &DAT_007f7f7f;
      *(float *)(iVar5 + 0x30) = (float)(dVar11 / dVar8);
    }
    iVar3 = iVar3 + 1;
  } while (iVar3 < 3);
  RegisterPostDraw(&PTR_M1441_0027ecd0_0070a670,param_1);
  return;
}


// 0x027cd50 (0x70c bytes)
// inlined: FastAtan2 @0x27d0b4
void M1440_0027cd50(MobyInstance *param_1)

{
  u8 uVar1;
  undefined4 uVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  f32 fVar7;
  MobyModeBit MVar8;
  void *pvVar9;
  uint uVar10;
  uint uVar11;
  MobyInstance *pMVar12;
  Spline *pSVar13;
  undefined2 uVar14;
  ulonglong *puVar15;
  int iVar16;
  MobyInstance *pMVar17;
  ulonglong uVar18;
  int iVar19;
  longlong lVar20;
  ulonglong uVar21;
  longlong lVar22;
  longlong lVar23;
  longlong lVar24;
  float *pfVar25;
  ulonglong unaff_r28;
  ulonglong unaff_r29;
  ulonglong unaff_r30;
  ulonglong uVar26;
  ulonglong unaff_r31;
  ulonglong in_LR;
  longlong lVar27;
  double dVar28;
  double dVar29;
  double dVar30;
  ulonglong in_f31;
  double dVar31;
  GPiece<16> auVar32;
  GPiece<16> auVar33;
  GPiece<16> auVar34;
  
  uVar18 = ZEXT48(&stack0x00000000);
  lVar20 = uVar18 - 0xe0;
  puVar15 = (ulonglong *)lVar20;
  *puVar15 = uVar18;
  puVar15[0x1e] = in_LR;
  puVar15[0x1b] = in_f31;
  puVar15[0x1a] = unaff_r31;
  uVar1 = param_1->state;
  puVar15[0x19] = unaff_r30;
  pvVar9 = param_1->pVar;
  uVar26 = ZEXT48(pvVar9);
  puVar15[0x18] = unaff_r29;
  puVar15[0x17] = unaff_r28;
  if (uVar1 != '\0') {
    if (*(int *)((int)pvVar9 + 0x38) != 0) {
      *(undefined4 *)((int)pvVar9 + 0x38) = 0;
      iVar19 = MB_randRange(0xb4,300);
      puVar15[0x15] = (longlong)iVar19;
      puVar15[0x15] = (longlong)(int)(animationSpeed * ((float)(longlong)puVar15[0x15] + 0.5));
      *(short *)((int)pvVar9 + 0x1da) = (short)*(undefined4 *)((int)puVar15 + 0xac);
    }
    FastDecTimerS16(uVar26 + 0x1da);
    dVar31 = 0.0;
    *(undefined4 *)((int)puVar15 + 0x74) = 0;
    iVar19 = MB_damage(param_1,0x330000,0);
    MB_HandleDamage(param_1,iVar19,uVar26 + 0x20,0,puVar15 + 0xe,(int)puVar15 + 0x74,0,4);
    if (((*(int *)(puVar15 + 0xe) != 1) && (param_1->state != '\b')) &&
       (*(int *)((int)puVar15 + 0x74) != 0)) {
      fVar5 = *(float *)((int)pvVar9 + 0x20) - *(float *)((int)puVar15 + 0x74);
      *(undefined4 *)((int)pvVar9 + 0x90) = 0x200;
      *(float *)((int)pvVar9 + 0x20) = fVar5;
      *(undefined4 *)((int)pvVar9 + 0x98) = 0x3f000000;
      fVar6 = DAT_0071f418;
      *(float *)((int)pvVar9 + 0x80) = DAT_007aa7c4 * DAT_0071f418;
      *(float *)((int)pvVar9 + 0x84) = DAT_007aa7c8 * fVar6;
      fVar4 = DAT_007aa7d0;
      fVar3 = DAT_007aa7cc;
      fVar6 = g_FrameTime;
      *(undefined1 *)((int)pvVar9 + 0xad) = 0;
      *(float *)((int)pvVar9 + 0xbc) = fVar6 * 2.0;
      if (dVar31 < (double)fVar5) {
        *(undefined4 *)((int)pvVar9 + 0x94) = 9;
        *(float *)((int)pvVar9 + 0x8c) = fVar4 * fVar6 * 0.5;
        *(float *)((int)pvVar9 + 0x88) = fVar3 * fVar6 * 0.35;
        uVar2 = *(undefined4 *)(iVar19 + 0x18);
        *(undefined4 *)(puVar15 + 6) = *(undefined4 *)(iVar19 + 0x10);
        *(undefined4 *)(puVar15 + 7) = uVar2;
        uVar2 = *(undefined4 *)(iVar19 + 0x1c);
        *(undefined4 *)((int)puVar15 + 0x34) = *(undefined4 *)(iVar19 + 0x14);
        *(undefined4 *)((int)puVar15 + 0x3c) = uVar2;
        MB_VecAtan2Angles(puVar15[6],puVar15[7],uVar18 - 100,uVar26 + 0x88,uVar26 + 0x8c);
        uVar10 = *(uint *)(iVar19 + 0x10);
        uVar11 = *(uint *)(iVar19 + 0x14);
        dVar29 = ABS((double)*(float *)(iVar19 + 0x10));
        dVar30 = ABS((double)*(float *)(iVar19 + 0x14));
        *(float *)(puVar15 + 0x10) = (float)(dVar29 - dVar30);
        uVar21 = (ulonglong)(uVar10 >> 0x1c) & 8 |
                 (ulonglong)(*(uint *)(puVar15 + 0x10) >> 0x1e) & 2 |
                 (ulonglong)(uVar11 >> 0x1d) & 4;
        lVar22 = uVar21 << 2;
        dVar28 = dVar29;
        if ((double)*(float *)(puVar15 + 0x10) - dVar31 < 0.0) {
          dVar28 = dVar30;
        }
        fVar6 = *(float *)(&g_atanQuadrantTable + (int)lVar22);
        fVar5 = *(float *)(((uint)(uVar21 << 2) | 0x735900) + 4);
        if ((double)*(float *)(puVar15 + 0x10) - dVar31 < 0.0) {
          dVar30 = dVar29;
        }
        if (dVar31 < dVar28) {
          lVar24 = uVar18 - 0xd0;
          lVar22 = uVar18 - 0x4c;
          lVar23 = uVar18 - 0x5c;
          lVar27 = 2;
          fVar3 = (float)(dVar30 - dVar28) / (float)(dVar30 + dVar28);
          fVar4 = fVar3 * fVar3;
          *(float *)(puVar15 + 0x12) = fVar3;
          *(float *)(puVar15 + 0x11) = fVar3;
          *(float *)((int)puVar15 + 0x8c) = fVar3;
          *(float *)((int)puVar15 + 0x84) = fVar3;
          fVar3 = fVar4 * fVar4;
          *(float *)(puVar15 + 0x11) = *(float *)(puVar15 + 0x11) * fVar4;
          *(float *)((int)puVar15 + 0x8c) = *(float *)((int)puVar15 + 0x8c) * fVar3;
          *(float *)(puVar15 + 0x12) = *(float *)(puVar15 + 0x12) * fVar3 * fVar4;
          do {
            *(float *)((int)lVar24 + 0x84) = *(float *)((int)lVar24 + 0x74) * fVar3 * fVar3;
            iVar19 = (int)lVar23;
            lVar23 = lVar23 + 8;
            lVar24 = lVar24 + 8;
            *(float *)((int)lVar22 + 4) = *(float *)(iVar19 + 4) * fVar3 * fVar3;
            lVar22 = lVar22 + 8;
            lVar27 = lVar27 + -1;
          } while (lVar27 != 0);
          lVar22 = uVar18 - 0x5c;
          lVar27 = 4;
          pfVar25 = (float *)&DAT_007358e0;
          lVar23 = lVar22;
          lVar24 = lVar20;
          do {
            fVar3 = *pfVar25;
            fVar4 = pfVar25[1];
            pfVar25 = pfVar25 + 2;
            *(float *)((int)lVar24 + 0x84) = *(float *)((int)lVar24 + 0x84) * fVar3;
            lVar24 = lVar24 + 8;
            *(float *)((int)lVar23 + 4) = *(float *)((int)lVar23 + 4) * fVar4;
            lVar23 = lVar23 + 8;
            lVar27 = lVar27 + -1;
          } while (lVar27 != 0);
          lVar23 = 2;
          do {
            iVar19 = (int)lVar20;
            iVar16 = (int)lVar22;
            lVar20 = lVar20 + 0x10;
            lVar22 = lVar22 + 0x10;
            dVar31 = (double)((float)(dVar31 + (double)*(float *)(iVar19 + 0x84)) +
                              *(float *)(iVar16 + 4) + *(float *)(iVar16 + 8) +
                             *(float *)(iVar16 + 0xc));
            lVar23 = lVar23 + -1;
          } while (lVar23 != 0);
          dVar31 = (double)((float)(dVar31 + 0.7853981852531433) * fVar6 + fVar5);
        }
        MB_StartKick(dVar31,param_1,uVar26 + 0x70,lVar22,8,1,0);
        auVar32 = ZEXT416(0xffffffff);
        auVar32 = auVar32 | auVar32 << 0x20 | auVar32 << 0x40 | auVar32 << 0x60;
        *(undefined4 *)((int)pvVar9 + 0xc0) = 0xbf800000;
        *(undefined4 *)((int)pvVar9 + 0xc4) = 0xbf800000;
        param_1->state = '\a';
        auVar33 = vectorShiftLeftIntegerWord(auVar32,auVar32);
        *(undefined1 *)((int)pvVar9 + 0x67) = 0xfa;
        auVar32 = loadVectorLeftIndexed(0x14,0x27cd30);
        auVar32 = auVar32 >> 0x60 & (GPiece<16>)0xffffffff;
        auVar34 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
        auVar32 = vectorMultiplyAddFloatingPoint
                            (auVar34,auVar32 | auVar32 << 0x20 | auVar32 << 0x40 | auVar32 << 0x60,
                             auVar33);
        auVar32 = vectorConvertToSignedFixedPointWordSaturate(auVar32,0);
        auVar32 = vectorSplatHalfWord(auVar32,1);
        uVar14 = storeVectorElementHalfWordIndexed(auVar32,0x26,uVar26);
        *(undefined2 *)((int)pvVar9 + 0x26) = uVar14;
        MB_UpdateLightsTransition(param_1,uVar26 + 0x60);
      }
      else {
        *(float *)((int)pvVar9 + 0x8c) = fVar4 * fVar6;
        *(float *)((int)pvVar9 + 0x88) = fVar3 * fVar6;
        MVar8 = param_1->modeBits;
        *(undefined4 *)((int)pvVar9 + 0x94) = 0x29;
        param_1->modeBits =
             MVar8 & (MIRROR|CAN_BE_DAMAGED|HIDE_BACKFACES|DISABLE_Z_WRITE|DRAW_SHADOW|
                      DRAW_TRANSPARENT_WEIRD|LOCK_ROTATION|NO_DRAW|UNK_40|HAS_SPECIAL_VARS|HAS_GLOW|
                      TRANSPARENT|NO_POST_UPDATE|NO_UPDATE|DISABLED);
        uVar2 = *(undefined4 *)(iVar19 + 0x18);
        *(undefined4 *)(puVar15 + 6) = *(undefined4 *)(iVar19 + 0x10);
        *(undefined4 *)(puVar15 + 7) = uVar2;
        uVar2 = *(undefined4 *)(iVar19 + 0x1c);
        *(undefined4 *)((int)puVar15 + 0x34) = *(undefined4 *)(iVar19 + 0x14);
        *(undefined4 *)((int)puVar15 + 0x3c) = uVar2;
        MB_VecAtan2Angles(puVar15[6],puVar15[7],uVar18 - 0x68,uVar26 + 0x88,uVar26 + 0x8c)
        ;
        MB_StartKick((double)*(float *)(puVar15 + 0xf),param_1,uVar26 + 0x70);
        *(undefined4 *)((int)pvVar9 + 0xc0) = 0x40e00000;
        param_1->collision = (ushort *)0x0;
        *(undefined4 *)((int)pvVar9 + 0xc4) = 0x41800000;
        param_1->state = '\b';
        *(undefined1 *)((int)pvVar9 + 0x67) = 0x78;
        MB_UpdateLightsTransition(param_1,uVar26 + 0x60);
        MB_SpawnBoltsFromCrate(param_1,0,0xffffffffffffffff);
      }
      FUN_00288888(param_1);
    }
    param_1->damage = -1;
    MB_ColorDyingMoby(param_1,uVar26 + 0x60);
    if (param_1->state == '\x01') {
      pSVar13 = Splines[*(int *)((int)pvVar9 + 0x1b4)];
      MB_getTargetInArea
                (0x4050000000000000,param_1,uVar26 + 0xd0,pSVar13,0,0,pSVar13->points,pSVar13->cnt);
    }
    else if (param_1->state != '\x05') {
      fVar5 = DAT_007aa7c0;
      if (*(short *)((int)pvVar9 + 0x1da) != 0) {
        fVar5 = 37.0;
      }
      dVar31 = (double)fVar5;
      iVar19 = MB_getTarget(dVar31,param_1);
      if ((iVar19 != 2) &&
         (fVar5 = (param_1->pos).y - *(float *)((int)pvVar9 + 0xd4),
         fVar6 = (param_1->pos).x - *(float *)((int)pvVar9 + 0xd0),
         dVar31 < (double)SQRT(fVar6 * fVar6 + fVar5 * fVar5))) {
        *(undefined4 *)((int)pvVar9 + 0x114) = 2;
      }
    }
    pMVar17 = g_heroMobyPtr;
    pMVar12 = *(MobyInstance **)((int)pvVar9 + 0x110);
    if (*(MobyInstance **)((int)pvVar9 + 0x110) == (MobyInstance *)0x0) {
      *(float *)((int)pvVar9 + 0xd0) = g_heroPosition.x;
      fVar5 = g_heroPosition.y;
      *(MobyInstance **)((int)pvVar9 + 0x110) = pMVar17;
      *(float *)((int)pvVar9 + 0xd4) = fVar5;
      *(float *)((int)pvVar9 + 0xd8) = g_heroPosition.z;
      *(float *)((int)pvVar9 + 0xdc) = g_heroPosition.w;
      pMVar12 = pMVar17;
    }
    if (-1 < *(int *)((int)pvVar9 + 0x1bc)) {
      pMVar17 = g_MobyInstance + *(int *)((int)pvVar9 + 0x1bc);
      if (((pMVar17 == (MobyInstance *)0x0) || (pMVar17->state == 0xfe)) || (pMVar17->state == 0xfd)
         ) {
        *(undefined4 *)((int)pvVar9 + 0x1bc) = 0xffffffff;
      }
      else {
        fVar5 = (param_1->pos).y;
        fVar3 = fVar5 - (pMVar17->pos).y;
        fVar6 = (param_1->pos).x;
        fVar5 = fVar5 - (pMVar12->pos).y;
        fVar4 = fVar6 - (pMVar17->pos).x;
        fVar6 = fVar6 - (pMVar12->pos).x;
        if (SQRT(fVar4 * fVar4 + fVar3 * fVar3) < SQRT(fVar6 * fVar6 + fVar5 * fVar5)) {
          *(MobyInstance **)((int)pvVar9 + 0x110) = pMVar17;
          *(f32 *)((int)pvVar9 + 0xd0) = (pMVar17->pos).x;
          *(f32 *)((int)pvVar9 + 0xd4) = (pMVar17->pos).y;
          *(f32 *)((int)pvVar9 + 0xd8) = (pMVar17->pos).z;
          fVar7 = (pMVar17->pos).w;
          *(undefined4 *)((int)pvVar9 + 0x114) = 1;
          *(f32 *)((int)pvVar9 + 0xdc) = fVar7;
        }
      }
    }
  }
  return;
}


// 0x027d4c8 (0x17f4 bytes)
// inlined: FastAtan2 @0x27d9bc, FastAtan2 @0x27dd38, FastAtan2 @0x27e0b4, FastAtan2 @0x27e320, FastAtan2 @0x27e948
// strings: 0096c074: 'None'

/* Moby 1440 */

void UpdateMoby_1440(MobyInstance *moby)

{
  byte bVar1;
  u8 uVar2;
  u8 uVar3;
  f32 fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  f32 fVar8;
  float fVar9;
  MOBY_OCLASSES MVar10;
  short sVar11;
  void *pvVar12;
  Spline *pSVar13;
  ulonglong *puVar14;
  int iVar15;
  Vec4 *pVVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  bool bVar20;
  ulonglong uVar21;
  longlong lVar22;
  undefined1 uVar25;
  int iVar23;
  uint uVar24;
  undefined4 *unused;
  ulonglong uVar26;
  longlong lVar27;
  longlong lVar28;
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
  ulonglong in_f27;
  double dVar37;
  ulonglong in_f28;
  ulonglong in_f29;
  double dVar38;
  ulonglong in_f30;
  double dVar39;
  double dVar40;
  ulonglong in_f31;
  double dVar41;
  undefined8 uVar42;
  float fVar43;
  
  lVar22 = (longlong)(int)moby;
  uVar21 = ZEXT48(&stack0x00000000);
  lVar28 = uVar21 - 0x260;
  puVar14 = (ulonglong *)lVar28;
  *puVar14 = uVar21;
  puVar14[0x4e] = in_LR;
  puVar14[0x47] = in_f27;
  puVar14[0x48] = in_f28;
  puVar14[0x49] = in_f29;
  puVar14[0x4a] = in_f30;
  puVar14[0x4b] = in_f31;
  puVar14[0x46] = unaff_r31;
  puVar14[0x44] = unaff_r29;
  puVar14[0x45] = unaff_r30;
  puVar14[0x43] = unaff_r28;
  puVar14[0x42] = unaff_r27;
  puVar14[0x41] = unaff_r26;
  pvVar12 = moby->pVar;
  M1440_0027cd50(lVar22);
  iVar23 = *(int *)((int)pvVar12 + 0x110);
  MB_SetScaleCheat(0x4004000000000000,(int)pvVar12 + 0x120);
  if (Cheats[7] != '\0') {
    MB_UpdateManipulatorRot
              ((double)(DAT_0071f40c * 0.03),(double)(DAT_0071f40c * 0.3),lVar22,
               (int)pvVar12 + 0x120,2);
  }
  if ((moby->enabled != '\0') &&
     (fVar43 = (moby->pos).y - GameCamera.posY, fVar6 = (moby->pos).x - GameCamera.posX,
     fVar7 = (moby->pos).z - GameCamera.posZ,
     SQRT(fVar7 * fVar7 + fVar6 * fVar6 + fVar43 * fVar43) < 27.0)) {
    MB_SetZBoundsFromGround(lVar22);
    moby->shadow = '\x15';
  }
  bVar1 = moby->state;
  if (3 < bVar1) {
    if (bVar1 < 7) {
      if (bVar1 < 5) {
        fVar43 = *(float *)(iVar23 + 0x10) - (moby->pos).x;
        fVar6 = *(float *)(iVar23 + 0x14) - (moby->pos).y;
        fVar7 = ABS(fVar43);
        fVar5 = ABS(fVar6);
        *(float *)((int)puVar14 + 300) = fVar43;
        *(float *)(puVar14 + 0x26) = fVar6;
        *(float *)((int)puVar14 + 0x134) = fVar7 - fVar5;
        fVar43 = 0.0;
        uVar26 = (ulonglong)(*(uint *)((int)puVar14 + 300) >> 0x1c) & 8 |
                 (ulonglong)(*(uint *)((int)puVar14 + 0x134) >> 0x1e) & 2 |
                 (ulonglong)(*(uint *)(puVar14 + 0x26) >> 0x1d) & 4;
        fVar6 = ABS(*(float *)((int)puVar14 + 300));
        if (*(float *)((int)puVar14 + 0x134) - 0.0 < 0.0) {
          fVar6 = fVar5;
        }
        fVar9 = *(float *)(&g_atanQuadrantTable + (int)(uVar26 << 2));
        fVar5 = *(float *)(((uint)(uVar26 << 2) | 0x735900) + 4);
        fVar17 = ABS(*(float *)(puVar14 + 0x26));
        if (*(float *)((int)puVar14 + 0x134) - 0.0 < 0.0) {
          fVar17 = fVar7;
        }
        if (0.0 < fVar6) {
          lVar27 = uVar21 - 0x250;
          lVar29 = uVar21 - 0xd0;
          lVar31 = uVar21 - 0xc0;
          lVar32 = 2;
          fVar6 = (fVar17 - fVar6) / (fVar17 + fVar6);
          fVar7 = fVar6 * fVar6;
          *(float *)((int)puVar14 + 0x19c) = fVar6;
          *(float *)((int)puVar14 + 0x194) = fVar6;
          *(float *)(puVar14 + 0x33) = fVar6;
          *(float *)(puVar14 + 0x32) = fVar6;
          fVar6 = fVar7 * fVar7;
          *(float *)((int)puVar14 + 0x194) = *(float *)((int)puVar14 + 0x194) * fVar7;
          *(float *)(puVar14 + 0x33) = *(float *)(puVar14 + 0x33) * fVar6;
          *(float *)((int)puVar14 + 0x19c) = *(float *)((int)puVar14 + 0x19c) * fVar6 * fVar7;
          do {
            *(float *)((int)lVar27 + 400) = *(float *)((int)lVar27 + 0x180) * fVar6 * fVar6;
            iVar23 = (int)lVar29;
            lVar27 = lVar27 + 8;
            lVar29 = lVar29 + 8;
            *(float *)((int)lVar31 + 4) = *(float *)(iVar23 + 4) * fVar6 * fVar6;
            lVar31 = lVar31 + 8;
            lVar32 = lVar32 + -1;
          } while (lVar32 != 0);
          lVar32 = 4;
          lVar31 = uVar21 - 0xd0;
          pfVar30 = (float *)&DAT_007358e0;
          lVar27 = lVar28;
          lVar29 = lVar31;
          do {
            fVar6 = *pfVar30;
            fVar7 = pfVar30[1];
            pfVar30 = pfVar30 + 2;
            *(float *)((int)lVar27 + 400) = *(float *)((int)lVar27 + 400) * fVar6;
            lVar27 = lVar27 + 8;
            *(float *)((int)lVar29 + 4) = *(float *)((int)lVar29 + 4) * fVar7;
            lVar29 = lVar29 + 8;
            lVar32 = lVar32 + -1;
          } while (lVar32 != 0);
          lVar27 = 2;
          do {
            iVar23 = (int)lVar28;
            iVar15 = (int)lVar31;
            lVar28 = lVar28 + 0x10;
            lVar31 = lVar31 + 0x10;
            fVar43 = fVar43 + *(float *)(iVar23 + 400) + *(float *)(iVar15 + 4) +
                     *(float *)(iVar15 + 8) + *(float *)(iVar15 + 0xc);
            lVar27 = lVar27 + -1;
          } while (lVar27 != 0);
          fVar43 = (fVar43 + 0.7853982) * fVar9 + fVar5;
        }
        OrganicDeltAng
                  (fVar43,DAT_0071f418 * 12.566371,DAT_0071f418 * 12.566371,
                   g_FrameTime * 12.566371,&(moby->rotation).z,0x27d45c,
                   (float *)((int)pvVar12 + 0x1d0));
        if ((moby->field43_0x70 & 2U) != 0) {
          *(undefined2 *)((int)pvVar12 + 0x1d8) = 0;
          moby->state = '\x05';
          if (moby->animationId != '\x06') {
            puVar14[0x3e] = (longlong)(int)(animationSpeed * 10.5);
            MB_SetAnimation(lVar22,6,0,*(undefined4 *)((int)puVar14 + 500));
          }
        }
      }
      else if (bVar1 < 6) {
        fVar43 = *(float *)((int)pvVar12 + 0xd0) - (moby->pos).x;
        fVar6 = *(float *)((int)pvVar12 + 0xd4) - (moby->pos).y;
        fVar5 = ABS(fVar43);
        fVar7 = ABS(fVar6);
        *(float *)(puVar14 + 0x24) = fVar43;
        *(float *)((int)puVar14 + 0x124) = fVar6;
        *(float *)(puVar14 + 0x25) = fVar5 - fVar7;
        dVar37 = 0.0;
        uVar26 = (ulonglong)(*(uint *)(puVar14 + 0x24) >> 0x1c) & 8 |
                 (ulonglong)(*(uint *)(puVar14 + 0x25) >> 0x1e) & 2 |
                 (ulonglong)(*(uint *)((int)puVar14 + 0x124) >> 0x1d) & 4;
        fVar43 = ABS(*(float *)(puVar14 + 0x24));
        if (*(float *)(puVar14 + 0x25) - 0.0 < 0.0) {
          fVar43 = fVar7;
        }
        fVar7 = *(float *)(&g_atanQuadrantTable + (int)(uVar26 << 2));
        fVar6 = *(float *)(((uint)(uVar26 << 2) | 0x735900) + 4);
        fVar9 = ABS(*(float *)((int)puVar14 + 0x124));
        if (*(float *)(puVar14 + 0x25) - 0.0 < 0.0) {
          fVar9 = fVar5;
        }
        dVar38 = dVar37;
        if (0.0 < fVar43) {
          lVar27 = uVar21 - 0x250;
          lVar31 = uVar21 - 0xe0;
          lVar29 = uVar21 - 0xf0;
          lVar32 = 2;
          fVar43 = (fVar9 - fVar43) / (fVar9 + fVar43);
          fVar5 = fVar43 * fVar43;
          *(float *)((int)puVar14 + 0x17c) = fVar43;
          *(float *)((int)puVar14 + 0x174) = fVar43;
          *(float *)(puVar14 + 0x2f) = fVar43;
          *(float *)(puVar14 + 0x2e) = fVar43;
          fVar43 = fVar5 * fVar5;
          *(float *)((int)puVar14 + 0x174) = *(float *)((int)puVar14 + 0x174) * fVar5;
          *(float *)(puVar14 + 0x2f) = *(float *)(puVar14 + 0x2f) * fVar43;
          *(float *)((int)puVar14 + 0x17c) = *(float *)((int)puVar14 + 0x17c) * fVar43 * fVar5;
          do {
            *(float *)((int)lVar27 + 0x170) = *(float *)((int)lVar27 + 0x160) * fVar43 * fVar43;
            iVar23 = (int)lVar29;
            lVar29 = lVar29 + 8;
            lVar27 = lVar27 + 8;
            *(float *)((int)lVar31 + 4) = *(float *)(iVar23 + 4) * fVar43 * fVar43;
            lVar31 = lVar31 + 8;
            lVar32 = lVar32 + -1;
          } while (lVar32 != 0);
          lVar32 = 4;
          lVar31 = uVar21 - 0xf0;
          pfVar30 = (float *)&DAT_007358e0;
          lVar27 = lVar28;
          lVar29 = lVar31;
          do {
            fVar43 = *pfVar30;
            fVar5 = pfVar30[1];
            pfVar30 = pfVar30 + 2;
            *(float *)((int)lVar27 + 0x170) = *(float *)((int)lVar27 + 0x170) * fVar43;
            lVar27 = lVar27 + 8;
            *(float *)((int)lVar29 + 4) = *(float *)((int)lVar29 + 4) * fVar5;
            lVar29 = lVar29 + 8;
            lVar32 = lVar32 + -1;
          } while (lVar32 != 0);
          lVar27 = 2;
          do {
            iVar23 = (int)lVar28;
            iVar15 = (int)lVar31;
            lVar28 = lVar28 + 0x10;
            lVar31 = lVar31 + 0x10;
            dVar38 = (double)((float)(dVar38 + (double)*(float *)(iVar23 + 0x170)) +
                              *(float *)(iVar15 + 4) + *(float *)(iVar15 + 8) +
                             *(float *)(iVar15 + 0xc));
            lVar27 = lVar27 + -1;
          } while (lVar27 != 0);
          dVar38 = (double)((float)(dVar38 + 0.7853981852531433) * fVar7 + fVar6);
        }
        if ((moby->modeBits & MIRROR) == NONE) {
          dVar38 = (double)FastDiffRots(dVar38,(double)DAT_007aa7dc);
        }
        else {
          dVar38 = (double)FastWrapRot((float)dVar38,DAT_007aa7dc);
        }
        fVar43 = OrganicDeltAng
                           ((float)dVar38,DAT_0071f418 * 1.5707964,DAT_0071f418 * 1.5707964,
                            g_FrameTime * 12.566371,&(moby->rotation).z,0x720000,
                            (float *)((int)pvVar12 + 0x1d0));
        GetBoneTransformations((double)fVar43,lVar22,0,uVar21 - 400);
        fVar43 = (moby->transform).v0.y;
        fVar6 = (moby->transform).v0.x;
        dVar38 = (double)DAT_007aa7d4;
        *(undefined4 *)(puVar14 + 0x11) = *(undefined4 *)(puVar14 + 0x21);
        dVar33 = (double)SQRT(fVar6 * fVar6 + fVar43 * fVar43);
        fVar7 = (moby->rotation).z;
        *(undefined4 *)((int)puVar14 + 0x8c) = *(undefined4 *)((int)puVar14 + 0x10c);
        *(MobyInstance **)(puVar14 + 0x16) = moby;
        *(undefined4 *)((int)puVar14 + 0xb4) = 0x10000;
        *(undefined4 *)(puVar14 + 0x18) = 1;
        bVar20 = false;
        uVar2 = moby->updateId;
        uVar3 = moby->animationId;
        MVar10 = moby->oClass;
        dVar39 = (double)(fVar43 * (float)(dVar38 / dVar33));
        dVar41 = (double)(fVar6 * (float)(dVar38 / dVar33));
        dVar38 = dVar37;
        if (dVar37 - dVar33 < 0.0) {
          dVar38 = dVar39;
        }
        dVar35 = dVar37;
        if (dVar37 - dVar33 < 0.0) {
          dVar35 = dVar41;
        }
        if (dVar33 - dVar37 < 0.0) {
          dVar38 = dVar39;
        }
        if (dVar33 - dVar37 < 0.0) {
          dVar35 = dVar41;
        }
        *(float *)((int)puVar14 + 0x84) = (float)((double)*(float *)((int)puVar14 + 0x104) + dVar38)
        ;
        *(float *)(puVar14 + 0x10) = (float)((double)*(float *)(puVar14 + 0x20) + dVar35);
        dVar37 = 1.0;
        *(undefined4 *)((int)puVar14 + 0xbc) = 0x3f800000;
        fVar43 = fVar7 + 1.5707963;
        fVar6 = 3.1415925 - fVar7;
        if (fVar7 - (3.1415925 - fVar7) < 0.0) {
          fVar6 = fVar7;
        }
        fVar5 = 3.1415925 - fVar43;
        if (fVar43 - (3.1415925 - fVar43) < 0.0) {
          fVar5 = fVar43;
        }
        fVar9 = -3.1415925 - fVar7;
        if ((-3.1415925 - fVar7) - fVar6 < 0.0) {
          fVar9 = fVar6;
        }
        *(undefined4 *)(puVar14 + 0x15) = 0x3f800000;
        *(undefined4 *)((int)puVar14 + 0xac) = 0x45afdf66;
        *(undefined1 *)(puVar14 + 0x17) = 0;
        fVar6 = -3.1415925 - fVar43;
        if ((-3.1415925 - fVar43) - fVar5 < 0.0) {
          fVar6 = fVar5;
        }
        fVar43 = fVar9 * fVar9;
        *(undefined1 *)((int)puVar14 + 0xb9) = 1;
        *(MOBY_OCLASSES *)((int)puVar14 + 0xba) = MVar10;
        fVar7 = fVar6 * fVar6;
        fVar18 = fVar43 * fVar43 * fVar9;
        fVar5 = fVar7 * fVar7 * fVar6;
        fVar19 = fVar43 * fVar18;
        fVar17 = fVar7 * fVar5;
        *(float *)((int)puVar14 + 0xa4) =
             fVar43 * fVar19 * 2.601887e-06 +
             fVar19 * -0.0001980741 + fVar18 * 0.0083330255 + fVar43 * fVar9 * -0.16666657 + fVar9;
        *(float *)(puVar14 + 0x14) =
             fVar7 * fVar17 * 2.601887e-06 +
             fVar17 * -0.0001980741 + fVar5 * 0.0083330255 + fVar7 * fVar6 * -0.16666657 + fVar6;
        if ((uVar2 == uVar3) && (dVar38 = (double)BlendAnimFrame(moby), dVar37 < dVar38))
        {
          bVar20 = true;
          *(uint *)((int)puVar14 + 0xb4) = *(uint *)((int)puVar14 + 0xb4) | 1;
        }
        fVar4 = (moby->pos).y;
        *(f32 *)(puVar14 + 0x12) = (moby->pos).x;
        fVar8 = (moby->pos).w;
        *(f32 *)((int)puVar14 + 0x94) = fVar4;
        *(f32 *)((int)puVar14 + 0x9c) = fVar8;
        *(float *)(puVar14 + 0x13) = (moby->pos).z + 0.5;
        iVar23 = CollLine(uVar21 - 0x160,uVar21 - 0x1d0,0,lVar22,uVar21 - 0x1c0);
        if (((iVar23 != 0) && (bVar20)) && (g_CollOutput.pMoby == g_heroMobyPtr)) {
          FUN_00288888(lVar22);
          moby->state = '\x06';
          if (moby->animationId != '\a') {
            puVar14[0x3e] = (longlong)(int)(animationSpeed * 10.5);
            MB_SetAnimation(lVar22,7,0,*(undefined4 *)((int)puVar14 + 500));
          }
        }
        iVar23 = CollLine(uVar21 - 0x160,uVar21 - 0x1e0,0,lVar22,uVar21 - 0x1c0);
        fVar43 = g_CollOutput.ip.y;
        if (iVar23 != 0) {
          *(float *)(puVar14 + 0x10) = g_CollOutput.ip.x;
          fVar6 = g_CollOutput.ip.z;
          *(float *)((int)puVar14 + 0x84) = fVar43;
          fVar43 = g_CollOutput.ip.w;
          *(float *)(puVar14 + 0x11) = fVar6;
          *(float *)((int)puVar14 + 0x8c) = fVar43;
          if ((bVar20) && (g_CollOutput.pMoby == g_heroMobyPtr)) {
            FUN_00288888(lVar22);
            moby->state = '\x06';
            if (moby->animationId != '\a') {
              puVar14[0x3e] = (longlong)(int)(animationSpeed * 10.5);
              MB_SetAnimation(lVar22,7,0,*(undefined4 *)((int)puVar14 + 500));
            }
          }
        }
        FUN_00288958(lVar22,uVar21 - 400,uVar21 - 0x1e0);
        if (((moby->field43_0x70 & 2U) != 0) &&
           (sVar11 = *(short *)((int)pvVar12 + 0x1d8), *(short *)((int)pvVar12 + 0x1d8) = sVar11 + 1
           , sVar11 == DAT_007aa7d8)) {
          FUN_00288888(lVar22);
          moby->state = '\x06';
          if (moby->animationId != '\f') {
            puVar14[0x3e] = (longlong)(int)(animationSpeed * 10.5);
            MB_SetAnimation(lVar22,0xc,0,*(undefined4 *)((int)puVar14 + 500));
          }
        }
      }
      else {
        fVar43 = *(float *)(iVar23 + 0x10) - (moby->pos).x;
        fVar6 = *(float *)(iVar23 + 0x14) - (moby->pos).y;
        fVar7 = ABS(fVar43);
        fVar5 = ABS(fVar6);
        *(float *)((int)puVar14 + 0x114) = fVar43;
        *(float *)(puVar14 + 0x23) = fVar6;
        *(float *)((int)puVar14 + 0x11c) = fVar7 - fVar5;
        fVar43 = 0.0;
        uVar26 = (ulonglong)(*(uint *)((int)puVar14 + 0x114) >> 0x1c) & 8 |
                 (ulonglong)(*(uint *)((int)puVar14 + 0x11c) >> 0x1e) & 2 |
                 (ulonglong)(*(uint *)(puVar14 + 0x23) >> 0x1d) & 4;
        fVar6 = ABS(*(float *)((int)puVar14 + 0x114));
        if (*(float *)((int)puVar14 + 0x11c) - 0.0 < 0.0) {
          fVar6 = fVar5;
        }
        fVar9 = *(float *)(&g_atanQuadrantTable + (int)(uVar26 << 2));
        fVar5 = *(float *)(((uint)(uVar26 << 2) | 0x735900) + 4);
        fVar17 = ABS(*(float *)(puVar14 + 0x23));
        if (*(float *)((int)puVar14 + 0x11c) - 0.0 < 0.0) {
          fVar17 = fVar7;
        }
        if (0.0 < fVar6) {
          lVar27 = uVar21 - 0x250;
          lVar31 = uVar21 - 0x100;
          lVar29 = uVar21 - 0x110;
          lVar32 = 2;
          fVar6 = (fVar17 - fVar6) / (fVar17 + fVar6);
          fVar7 = fVar6 * fVar6;
          *(float *)((int)puVar14 + 0x15c) = fVar6;
          *(float *)((int)puVar14 + 0x154) = fVar6;
          *(float *)(puVar14 + 0x2b) = fVar6;
          *(float *)(puVar14 + 0x2a) = fVar6;
          fVar6 = fVar7 * fVar7;
          *(float *)((int)puVar14 + 0x154) = *(float *)((int)puVar14 + 0x154) * fVar7;
          *(float *)(puVar14 + 0x2b) = *(float *)(puVar14 + 0x2b) * fVar6;
          *(float *)((int)puVar14 + 0x15c) = *(float *)((int)puVar14 + 0x15c) * fVar6 * fVar7;
          do {
            *(float *)((int)lVar27 + 0x150) = *(float *)((int)lVar27 + 0x140) * fVar6 * fVar6;
            iVar23 = (int)lVar29;
            lVar29 = lVar29 + 8;
            lVar27 = lVar27 + 8;
            *(float *)((int)lVar31 + 4) = *(float *)(iVar23 + 4) * fVar6 * fVar6;
            lVar31 = lVar31 + 8;
            lVar32 = lVar32 + -1;
          } while (lVar32 != 0);
          lVar32 = 4;
          lVar31 = uVar21 - 0x110;
          pfVar30 = (float *)&DAT_007358e0;
          lVar27 = lVar28;
          lVar29 = lVar31;
          do {
            fVar6 = *pfVar30;
            fVar7 = pfVar30[1];
            pfVar30 = pfVar30 + 2;
            *(float *)((int)lVar27 + 0x150) = *(float *)((int)lVar27 + 0x150) * fVar6;
            lVar27 = lVar27 + 8;
            *(float *)((int)lVar29 + 4) = *(float *)((int)lVar29 + 4) * fVar7;
            lVar29 = lVar29 + 8;
            lVar32 = lVar32 + -1;
          } while (lVar32 != 0);
          lVar27 = 2;
          do {
            iVar23 = (int)lVar28;
            lVar28 = lVar28 + 0x10;
            iVar15 = (int)lVar31;
            lVar31 = lVar31 + 0x10;
            fVar43 = fVar43 + *(float *)(iVar23 + 0x150) + *(float *)(iVar15 + 4) +
                     *(float *)(iVar15 + 8) + *(float *)(iVar15 + 0xc);
            lVar27 = lVar27 + -1;
          } while (lVar27 != 0);
          fVar43 = (fVar43 + 0.7853982) * fVar9 + fVar5;
        }
        OrganicDeltAng
                  (fVar43,DAT_0071f418 * 12.566371,DAT_0071f418 * 12.566371,
                   g_FrameTime * 12.566371,&(moby->rotation).z,0x27d45c,
                   (float *)((int)pvVar12 + 0x1d0));
        if (((moby->field43_0x70 & 2U) != 0) && (moby->state = '\x03', moby->animationId != '\x01'))
        {
          puVar14[0x3e] = (longlong)(int)(animationSpeed * 10.5);
          MB_SetAnimation(lVar22,1,0,*(undefined4 *)((int)puVar14 + 500));
        }
      }
    }
    else if (bVar1 < 8) {
      uVar24 = MB_UpdateKick(moby,(KickVars *)((int)pvVar12 + 0x70));
      if (((uVar24 & 0x140) != 0) && (moby->state = '\x03', moby->animationId != '\x01')) {
        puVar14[0x3e] = (longlong)(int)(animationSpeed * 10.5);
        MB_SetAnimation(lVar22,1,0,*(undefined4 *)((int)puVar14 + 500));
      }
    }
    else if ((bVar1 < 9) &&
            (uVar24 = MB_UpdateKick(moby,(KickVars *)((int)pvVar12 + 0x70)),
            (uVar24 & 0x140) != 0)) {
      lVar27 = lVar22 + 0x10;
      MB_SpawnExplosionSparks(0x3fe8000000000000,0x402a000000000000,lVar22,lVar27);
      MB_SpawnDebris(lVar22,0x7ab,1,0x7ab,1,4,0);
      uVar42 = 0;
      lVar28 = lVar22 + 0x40;
      puVar14[0xe] = ZEXT48(&DAT_00a15d30);
      puVar14[0xf] = ZEXT48(&DAT_00a15d30);
      MB_SpawnDebrisMoby(0,lVar22,0x78d,lVar27,lVar28,0,0);
      puVar14[0xe] = ZEXT48(&DAT_00a15d30);
      puVar14[0xf] = ZEXT48(&DAT_00a15d30);
      MB_SpawnDebrisMoby(uVar42,lVar22,0x78e,lVar27,lVar28,0,0);
      puVar14[0xe] = ZEXT48(&DAT_00a15d30);
      puVar14[0xf] = ZEXT48(&DAT_00a15d30);
      MB_SpawnDebrisMoby(uVar42,lVar22,0x78f,lVar27,lVar28,0,0);
      DeleteMoby(moby);
      return;
    }
    goto LAB_0027ec78;
  }
  if (bVar1 == 0) {
    *(f32 *)((int)pvVar12 + 0x1a0) = (moby->pos).x;
    *(f32 *)((int)pvVar12 + 0x1a4) = (moby->pos).y;
    *(f32 *)((int)pvVar12 + 0x1a8) = (moby->pos).z;
    fVar4 = (moby->pos).w;
    *(undefined4 *)((int)pvVar12 + 0x20) = 0x40000000;
    *(f32 *)((int)pvVar12 + 0x1ac) = fVar4;
    *(undefined2 *)((int)pvVar12 + 0x24) = 2;
    *(undefined1 *)((int)pvVar12 + 0x28) = 1;
    *(undefined1 *)((int)pvVar12 + 0x29) = 0;
    uVar25 = FastDoubleToInt(0x402c000000000000);
    *(undefined1 *)((int)pvVar12 + 0x58) = uVar25;
    uVar25 = FastDoubleToInt(0x4020000000000000);
    *(undefined1 *)((int)pvVar12 + 0x5a) = uVar25;
    *(undefined4 *)((int)pvVar12 + 0x1dc) = 1;
    iVar23 = MB_randInt(2);
    uVar2 = moby->animationId;
    if (iVar23 != 0) {
      moby->modeBits = moby->modeBits | MIRROR;
    }
    if (*(int *)((int)pvVar12 + 0x1b8) < 0) {
      moby->state = '\x03';
      if (uVar2 != '\x01') {
        MB_SetAnimation(lVar22,1,0,5);
      }
    }
    else {
      if (*(int *)((int)pvVar12 + 0x1b4) == -1) {
        DeleteMoby(moby);
        return;
      }
      pSVar13 = Splines[*(int *)((int)pvVar12 + 0x1b8)];
      (moby->pos).x = pSVar13->points[0].x;
      (moby->pos).y = pSVar13->points[0].y;
      (moby->pos).z = pSVar13->points[0].z;
      fVar43 = pSVar13->points[0].w;
      moby->state = '\x01';
      (moby->pos).w = fVar43;
      if (uVar2 != '\x01') {
        MB_SetAnimation(lVar22,1,0,5);
      }
    }
    goto LAB_0027ec78;
  }
  if (1 < bVar1) {
    if (bVar1 < 3) {
      dVar37 = 0.0;
      *(undefined4 *)(puVar14 + 0x22) = 0;
      iVar23 = *(int *)((int)pvVar12 + 0x1dc);
      pSVar13 = Splines[*(int *)((int)pvVar12 + 0x1b8)];
      dVar41 = (double)pSVar13->points[iVar23].x;
      dVar39 = (double)pSVar13->points[iVar23].y;
      fVar43 = (float)(dVar41 - (double)(moby->pos).x);
      dVar38 = (double)pSVar13->points[iVar23].z;
      fVar6 = (float)(dVar39 - (double)(moby->pos).y);
      fVar5 = ABS(fVar43);
      fVar7 = ABS(fVar6);
      *(float *)((int)puVar14 + 0x144) = fVar43;
      *(float *)(puVar14 + 0x29) = fVar6;
      *(float *)((int)puVar14 + 0x14c) = fVar5 - fVar7;
      uVar26 = (ulonglong)(*(uint *)((int)puVar14 + 0x144) >> 0x1c) & 8 |
               (ulonglong)(*(uint *)((int)puVar14 + 0x14c) >> 0x1e) & 2 |
               (ulonglong)(*(uint *)(puVar14 + 0x29) >> 0x1d) & 4;
      fVar43 = ABS(*(float *)((int)puVar14 + 0x144));
      if (*(float *)((int)puVar14 + 0x14c) - 0.0 < 0.0) {
        fVar43 = fVar7;
      }
      fVar7 = *(float *)(&g_atanQuadrantTable + (int)(uVar26 << 2));
      fVar6 = *(float *)(((uint)(uVar26 << 2) | 0x735900) + 4);
      fVar9 = ABS(*(float *)(puVar14 + 0x29));
      if (*(float *)((int)puVar14 + 0x14c) - 0.0 < 0.0) {
        fVar9 = fVar5;
      }
      dVar33 = dVar37;
      if (0.0 < fVar43) {
        lVar27 = uVar21 - 0x250;
        lVar29 = uVar21 - 0x90;
        lVar31 = uVar21 - 0x80;
        lVar32 = 2;
        fVar43 = (fVar9 - fVar43) / (fVar9 + fVar43);
        fVar5 = fVar43 * fVar43;
        *(float *)((int)puVar14 + 0x1dc) = fVar43;
        *(float *)((int)puVar14 + 0x1d4) = fVar43;
        *(float *)(puVar14 + 0x3b) = fVar43;
        *(float *)(puVar14 + 0x3a) = fVar43;
        fVar43 = fVar5 * fVar5;
        *(float *)((int)puVar14 + 0x1d4) = *(float *)((int)puVar14 + 0x1d4) * fVar5;
        *(float *)(puVar14 + 0x3b) = *(float *)(puVar14 + 0x3b) * fVar43;
        *(float *)((int)puVar14 + 0x1dc) = *(float *)((int)puVar14 + 0x1dc) * fVar43 * fVar5;
        do {
          *(float *)((int)lVar27 + 0x1d0) = *(float *)((int)lVar27 + 0x1c0) * fVar43 * fVar43;
          iVar23 = (int)lVar29;
          lVar27 = lVar27 + 8;
          lVar29 = lVar29 + 8;
          *(float *)((int)lVar31 + 4) = *(float *)(iVar23 + 4) * fVar43 * fVar43;
          lVar31 = lVar31 + 8;
          lVar32 = lVar32 + -1;
        } while (lVar32 != 0);
        lVar32 = 4;
        lVar31 = uVar21 - 0x90;
        pfVar30 = (float *)&DAT_007358e0;
        lVar27 = lVar28;
        lVar29 = lVar31;
        do {
          fVar43 = *pfVar30;
          fVar5 = pfVar30[1];
          pfVar30 = pfVar30 + 2;
          *(float *)((int)lVar27 + 0x1d0) = *(float *)((int)lVar27 + 0x1d0) * fVar43;
          lVar27 = lVar27 + 8;
          *(float *)((int)lVar29 + 4) = *(float *)((int)lVar29 + 4) * fVar5;
          lVar29 = lVar29 + 8;
          lVar32 = lVar32 + -1;
        } while (lVar32 != 0);
        lVar27 = 2;
        do {
          iVar23 = (int)lVar28;
          lVar28 = lVar28 + 0x10;
          iVar15 = (int)lVar31;
          lVar31 = lVar31 + 0x10;
          dVar33 = (double)((float)(dVar33 + (double)*(float *)(iVar23 + 0x1d0)) +
                            *(float *)(iVar15 + 4) + *(float *)(iVar15 + 8) +
                           *(float *)(iVar15 + 0xc));
          lVar27 = lVar27 + -1;
        } while (lVar27 != 0);
        dVar33 = (double)((float)(dVar33 + 0.7853981852531433) * fVar7 + fVar6);
      }
      unused = &DAT_00280000;
      OrganicDeltAng
                ((float)dVar33,DAT_0071f418 * 12.566371,DAT_0071f418 * 12.566371,
                 g_FrameTime * 12.566371,&(moby->rotation).z,0x280000,
                 (float *)((int)pvVar12 + 0x1d0));
      dVar33 = (double)(moby->pos).y;
      dVar35 = (double)(moby->pos).x;
      dVar36 = (double)(moby->pos).z;
      dVar40 = (double)(float)(dVar39 - dVar33);
      pVVar16 = pSVar13->points + pSVar13->cnt + -1;
      dVar41 = (double)(float)(dVar41 - dVar35);
      dVar39 = (double)(float)(dVar38 - dVar36);
      fVar43 = (float)(dVar33 - (double)pVVar16->y);
      fVar6 = (float)(dVar35 - (double)pVVar16->x);
      fVar7 = (float)(dVar36 - (double)pVVar16->z);
      OrganicDelt
                (SQRT(fVar7 * fVar7 + fVar6 * fVar6 + fVar43 * fVar43),DAT_0071f418 * 8.0,
                 DAT_0071f418 * 16.0,g_FrameTime * 12.0,(float *)(puVar14 + 0x22),
                 (int)unused,(float *)((int)pvVar12 + 0x1d4));
      dVar38 = (double)SQRT((float)(dVar39 * dVar39 +
                                   (double)(float)(dVar41 * dVar41 +
                                                  (double)(float)(dVar40 * dVar40))));
      if (((dVar38 < (double)(*(float *)((int)pvVar12 + 0x1d4) * 2.0)) &&
          (iVar23 = *(int *)((int)pvVar12 + 0x1dc) + 1, *(int *)((int)pvVar12 + 0x1dc) = iVar23,
          iVar23 == pSVar13->cnt)) && (moby->state = '\x03', moby->animationId != '\x01')) {
        puVar14[0x3e] = (longlong)(int)(animationSpeed * 10.5);
        MB_SetAnimation(lVar22,1,0,*(undefined4 *)((int)puVar14 + 500));
      }
      dVar35 = (double)(float)((double)*(float *)((int)pvVar12 + 0x1d4) / dVar38);
      dVar33 = dVar37;
      if (dVar37 - dVar38 < 0.0) {
        dVar33 = (double)(float)(dVar39 * dVar35);
      }
      dVar36 = dVar37;
      if (dVar37 - dVar38 < 0.0) {
        dVar36 = (double)(float)(dVar40 * dVar35);
      }
      dVar34 = dVar37;
      if (dVar37 - dVar38 < 0.0) {
        dVar34 = (double)(float)(dVar41 * dVar35);
      }
      if (dVar38 - dVar37 < 0.0) {
        dVar33 = (double)(float)(dVar39 * dVar35);
      }
      if (dVar38 - dVar37 < 0.0) {
        dVar36 = (double)(float)(dVar40 * dVar35);
      }
      if (dVar38 - dVar37 < 0.0) {
        dVar34 = (double)(float)(dVar41 * dVar35);
      }
      (moby->pos).z = (float)((double)(moby->pos).z + dVar33);
      (moby->pos).y = (float)((double)(moby->pos).y + dVar36);
      (moby->pos).x = (float)((double)(moby->pos).x + dVar34);
    }
    else {
      fVar43 = *(float *)(iVar23 + 0x10) - (moby->pos).x;
      fVar6 = *(float *)(iVar23 + 0x14) - (moby->pos).y;
      fVar7 = ABS(fVar43);
      fVar5 = ABS(fVar6);
      *(float *)(puVar14 + 0x27) = fVar43;
      *(float *)((int)puVar14 + 0x13c) = fVar6;
      *(float *)(puVar14 + 0x28) = fVar7 - fVar5;
      fVar43 = 0.0;
      uVar26 = (ulonglong)(*(uint *)(puVar14 + 0x27) >> 0x1c) & 8 |
               (ulonglong)(*(uint *)(puVar14 + 0x28) >> 0x1e) & 2 |
               (ulonglong)(*(uint *)((int)puVar14 + 0x13c) >> 0x1d) & 4;
      fVar6 = ABS(*(float *)(puVar14 + 0x27));
      if (*(float *)(puVar14 + 0x28) - 0.0 < 0.0) {
        fVar6 = fVar5;
      }
      fVar9 = *(float *)(&g_atanQuadrantTable + (int)(uVar26 << 2));
      fVar5 = *(float *)(((uint)(uVar26 << 2) | 0x735900) + 4);
      fVar17 = ABS(*(float *)((int)puVar14 + 0x13c));
      if (*(float *)(puVar14 + 0x28) - 0.0 < 0.0) {
        fVar17 = fVar7;
      }
      if (0.0 < fVar6) {
        lVar27 = uVar21 - 0x250;
        lVar31 = uVar21 - 0xa0;
        lVar29 = uVar21 - 0xb0;
        lVar32 = 2;
        fVar6 = (fVar17 - fVar6) / (fVar17 + fVar6);
        fVar7 = fVar6 * fVar6;
        *(float *)((int)puVar14 + 0x1bc) = fVar6;
        *(float *)((int)puVar14 + 0x1b4) = fVar6;
        *(float *)(puVar14 + 0x37) = fVar6;
        *(float *)(puVar14 + 0x36) = fVar6;
        fVar6 = fVar7 * fVar7;
        *(float *)((int)puVar14 + 0x1b4) = *(float *)((int)puVar14 + 0x1b4) * fVar7;
        *(float *)(puVar14 + 0x37) = *(float *)(puVar14 + 0x37) * fVar6;
        *(float *)((int)puVar14 + 0x1bc) = *(float *)((int)puVar14 + 0x1bc) * fVar6 * fVar7;
        do {
          *(float *)((int)lVar27 + 0x1b0) = *(float *)((int)lVar27 + 0x1a0) * fVar6 * fVar6;
          iVar23 = (int)lVar29;
          lVar29 = lVar29 + 8;
          lVar27 = lVar27 + 8;
          *(float *)((int)lVar31 + 4) = *(float *)(iVar23 + 4) * fVar6 * fVar6;
          lVar31 = lVar31 + 8;
          lVar32 = lVar32 + -1;
        } while (lVar32 != 0);
        lVar32 = 4;
        lVar31 = uVar21 - 0xb0;
        pfVar30 = (float *)&DAT_007358e0;
        lVar27 = lVar28;
        lVar29 = lVar31;
        do {
          fVar6 = *pfVar30;
          fVar7 = pfVar30[1];
          pfVar30 = pfVar30 + 2;
          *(float *)((int)lVar27 + 0x1b0) = *(float *)((int)lVar27 + 0x1b0) * fVar6;
          lVar27 = lVar27 + 8;
          *(float *)((int)lVar29 + 4) = *(float *)((int)lVar29 + 4) * fVar7;
          lVar29 = lVar29 + 8;
          lVar32 = lVar32 + -1;
        } while (lVar32 != 0);
        lVar27 = 2;
        do {
          iVar23 = (int)lVar28;
          lVar28 = lVar28 + 0x10;
          iVar15 = (int)lVar31;
          lVar31 = lVar31 + 0x10;
          fVar43 = fVar43 + *(float *)(iVar23 + 0x1b0) + *(float *)(iVar15 + 4) +
                   *(float *)(iVar15 + 8) + *(float *)(iVar15 + 0xc);
          lVar27 = lVar27 + -1;
        } while (lVar27 != 0);
        fVar43 = (fVar43 + 0.7853982) * fVar9 + fVar5;
      }
      OrganicDeltAng
                (fVar43,DAT_0071f418 * 12.566371,DAT_0071f418 * 12.566371,
                 g_FrameTime * 12.566371,&(moby->rotation).z,0x720000,
                 (float *)((int)pvVar12 + 0x1d0));
      fVar43 = (moby->pos).y - g_heroPosition.y;
      fVar6 = (moby->pos).x - g_heroPosition.x;
      if (20.0 <= SQRT(fVar6 * fVar6 + fVar43 * fVar43)) {
        if (((moby->field43_0x70 & 2U) != 0) &&
           (bVar1 = moby->animationId, iVar23 = MB_randInt(2), (uint)bVar1 != iVar23 + 1U)
           ) {
          iVar23 = MB_randInt(2);
          puVar14[0x3e] = (longlong)(int)(animationSpeed * 20.5);
          MB_SetAnimation(lVar22,iVar23 + 1,0,*(undefined4 *)((int)puVar14 + 500));
        }
      }
      else if (moby->animationId != '\x04') {
        puVar14[0x3e] = (longlong)(int)(animationSpeed * 20.5);
        MB_SetAnimation(lVar22,4,0,*(undefined4 *)((int)puVar14 + 500));
      }
      if (((*(int *)((int)pvVar12 + 0x114) != 2) && (iVar23 = FUN_00288730(lVar22,0,0), iVar23 != 0)
          ) && (moby->state = '\x04', moby->animationId != '\x05')) {
        puVar14[0x3e] = (longlong)(int)(animationSpeed * 10.5);
        MB_SetAnimation(lVar22,5,0,*(undefined4 *)((int)puVar14 + 500));
      }
    }
    goto LAB_0027ec78;
  }
  if ((moby->field43_0x70 & 2U) != 0) {
    uVar2 = moby->animationId;
    if (uVar2 == '\x01') {
      iVar23 = MB_randInt(4);
      uVar2 = moby->animationId;
      if (iVar23 == 0) {
        if (uVar2 != '\x02') {
          puVar14[0x3e] = (longlong)(int)(animationSpeed * 20.5);
          MB_SetAnimation(lVar22,2,0,*(undefined4 *)((int)puVar14 + 500));
        }
        goto LAB_0027d860;
      }
    }
    if (uVar2 != '\x01') {
      puVar14[0x3e] = (longlong)(int)(animationSpeed * 20.5);
      MB_SetAnimation(lVar22,1,0,*(undefined4 *)((int)puVar14 + 500));
    }
  }
LAB_0027d860:
  if ((*(int *)((int)pvVar12 + 0x114) != 2) && (moby->state = '\x02', moby->animationId != '\t')) {
    puVar14[0x3e] = (longlong)(int)(animationSpeed * 10.5);
    MB_SetAnimation(lVar22,9,0,*(undefined4 *)((int)puVar14 + 500));
  }
LAB_0027ec78:
  M1440_0027cb28(lVar22);
  return;
}


