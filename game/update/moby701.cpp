// game/update/moby701.cpp -- reconstructed from NPEA00385 EBOOT
// STATUS: NOT STARTED (raw Ghidra output)
// 2 functions, 0x428570-0x428f68
#include "game/update/moby701.h"
#include "game/camera.h"
#include "game/collproc.h"
#include "game/draw.h"
#include "game/hero.h"
#include "game/mobyfunc.h"
#include "game/mobyutil.h"
#include "game/path.h"
#include "game/respawn.h"
#include "game/sound.h"
#include "game/update/camera0.h"
#include "game/update/camera5.h"
#include "game/update/moby200.h"
#include "game/update/moby617.h"
#include "idol/fastfunc.h"

// 0x0428570 (0xc8 bytes)
void M701_00428570(int param_1)

{
  float afStack_20 [4];
  
  MB_RotateQuatAxisAngle
            (DAT_010ccce0,afStack_20,(float *)(Cuboids + *(int *)(*(int *)(param_1 + 0x78) + 0x80)))
  ;
  Cam0_ForceLookAtDir(0x3fc1df46a0000000,0,afStack_20);
  Cam0_SetCamDist((double)DAT_00857b04,(double)DAT_00857b10,&DAT_00850000,0);
  Cam0_SetCamHeight((double)DAT_00857b08,(double)DAT_00857b10);
  Cam0_SetCamOfsZ((double)DAT_00857b0c,(double)DAT_00857b10,&DAT_00850000,0);
  return;
}


// 0x0428698 (0x8d0 bytes)
/* Moby 701 */

undefined4 * UpdateMoby_701(MobyInstance *moby)

{
  float fVar1;
  byte bVar2;
  f32 fVar3;
  ushort uVar4;
  void *pvVar5;
  undefined4 uVar6;
  uint uVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  LevelId LVar11;
  int iVar13;
  longlong lVar12;
  undefined2 uVar15;
  undefined4 *puVar14;
  ulonglong uVar16;
  double dVar17;
  double dVar18;
  double dVar19;
  undefined8 uVar20;
  double dVar21;
  double dVar22;
  double dVar23;
  double dVar24;
  double dVar25;
  double dVar26;
  double dVar27;
  double dVar28;
  GPiece<16> auVar29;
  GPiece<16> auVar30;
  GPiece<16> auVar31;
  GPiece<16> auVar32;
  GPiece<16> auVar33;
  float afStack_d0 [4];
  float afStack_c0 [4];
  undefined4 local_b0 [4];
  longlong local_a0;
  
  pvVar5 = moby->pVar;
  uVar16 = ZEXT48(pvVar5);
  if (moby->state != '\x01') {
    iVar13 = FastDecTimerS16(uVar16 + 0x84);
    if ((iVar13 == 0) && (iVar13 = MB_randInt(100), iVar13 < 5)) {
      dVar28 = -0.5;
      dVar27 = 0.5;
      dVar26 = 0.0;
      dVar17 = (double)MB_randRangeFloat
                                 (g_FrameTime * -0.5,g_FrameTime * 0.5);
      dVar28 = (double)MB_randRangeFloat
                                 ((float)((double)g_FrameTime * dVar28),
                                  (float)((double)g_FrameTime * dVar27));
      dVar18 = (double)MB_randRangeFloat(2.0,3.0);
      dVar19 = (double)MB_randRot();
      fVar1 = (float)(dVar19 + 1.570796251296997);
      dVar27 = (double)(float)(3.141592502593994 - dVar19);
      if (dVar19 - (double)(float)(3.141592502593994 - dVar19) < 0.0) {
        dVar27 = dVar19;
      }
      fVar8 = 3.1415925 - fVar1;
      if (fVar1 - (3.1415925 - fVar1) < 0.0) {
        fVar8 = fVar1;
      }
      dVar24 = (double)(float)(-3.141592502593994 - dVar19);
      if ((double)(float)(-3.141592502593994 - dVar19) - dVar27 < 0.0) {
        dVar24 = dVar27;
      }
      dVar25 = (double)*(float *)((int)pvVar5 + 0x70);
      dVar19 = (double)*(float *)((int)pvVar5 + 0x74);
      dVar27 = (double)*(float *)((int)pvVar5 + 0x78);
      fVar9 = -3.1415925 - fVar1;
      if ((-3.1415925 - fVar1) - fVar8 < 0.0) {
        fVar9 = fVar8;
      }
      dVar22 = (double)(float)(dVar24 * dVar24);
      fVar10 = fVar9 * fVar9;
      dVar23 = (double)(float)(dVar22 * (double)(float)(dVar22 * dVar24));
      fVar1 = fVar10 * fVar10 * fVar9;
      dVar21 = (double)(float)(dVar22 * dVar23);
      fVar8 = fVar10 * fVar1;
      dVar21 = (double)((float)(dVar22 * dVar21) * 2.601887e-06 +
                       (float)(dVar21 * -0.0001980741071747616 +
                              (double)(float)(dVar23 * 0.008333025500178337 +
                                             (double)(float)((double)(float)(dVar22 * dVar24) *
                                                             -0.16666656732559204 + dVar24))));
      dVar24 = (double)(fVar10 * fVar8 * 2.601887e-06 +
                       fVar8 * -0.0001980741 +
                       fVar1 * 0.0083330255 + fVar10 * fVar9 * -0.16666657 + fVar9);
      lVar12 = MB_randInt(3);
      local_b0[2] = 0x2ba;
      local_b0[1] = 0x2b9;
      local_b0[0] = 0x2b8;
      uVar20 = 0x3fa99999a0000000;
      uVar6 = *(undefined4 *)((int)local_b0 + (int)(lVar12 << 2));
      MB_randRange(0x3fa99999a0000000,0xb4,300);
      fVar1 = (float)(dVar24 * dVar18 + dVar25);
      FUN_00425540(uVar20,0x3ff0000000000000,0x3ff0000000000000,0x3fe8000000000000,
                   CONCAT44(fVar1,(float)(dVar21 * dVar18 + dVar19)),CONCAT44((float)dVar27,fVar1),
                   CONCAT44((float)dVar17,(float)dVar28),CONCAT44((float)dVar26,(float)dVar26),uVar6
                  );
    }
  }
  bVar2 = moby->state;
  if (bVar2 == 4) {
    puVar14 = (undefined4 *)(uint)*(ushort *)((int)pvVar5 + 0x84);
    if ((*(ushort *)((int)pvVar5 + 0x84) == 0) &&
       (puVar14 = *(undefined4 **)((int)pvVar5 + 0x8c), puVar14 != (undefined4 *)0xffffffff)) {
      Camera_DeactivateMobyDrivenCam(0);
      TransitionMovement(0,1);
      puVar14 = (undefined4 *)0x960000;
      LetterBoxOn = 0;
      *(undefined4 *)((int)pvVar5 + 0x8c) = 0xffffffff;
    }
  }
  else if (bVar2 == 3) {
    MB_RotateQuatAxisAngle
              (DAT_010ccce0,afStack_d0,(float *)(Cuboids + *(int *)((int)moby->pVar + 0x80)));
    Cam0_ForceLookAtDir(0x3fc1df46a0000000,0,afStack_d0);
    Cam0_SetCamDist((double)DAT_00857b04,(double)DAT_00857b10,&DAT_00850000,0);
    Cam0_SetCamHeight((double)DAT_00857b08,(double)DAT_00857b10);
    Cam0_SetCamOfsZ((double)DAT_00857b0c,(double)DAT_00857b10,&DAT_00850000,0);
    *(float *)((int)pvVar5 + 0x68) = -(g_FrameTimeSq * 30.0 - *(float *)((int)pvVar5 + 0x68));
    (moby->pos).x = (moby->pos).x + *(float *)((int)pvVar5 + 0x60);
    (moby->pos).y = (moby->pos).y + *(float *)((int)pvVar5 + 100);
    (moby->pos).z = (moby->pos).z + *(float *)((int)pvVar5 + 0x68);
    puVar14 = (undefined4 *)FastDecTimerS16(uVar16 + 0x86);
    if (puVar14 != (undefined4 *)0x0) {
      puVar14 = &DAT_00428638;
      dVar27 = 20.0;
      if (20.0 < *(float *)((int)pvVar5 + 0x78) - (moby->pos).z) {
        auVar30 = ZEXT416(0xffffffff);
        auVar30 = auVar30 | auVar30 << 0x20 | auVar30 << 0x40 | auVar30 << 0x60;
        auVar29 = vectorShiftLeftIntegerWord(auVar30,auVar30);
        GameCamera.shake.strength = 0.1;
        auVar30 = loadVectorLeftIndexed(0x5c,0x428638);
        auVar30 = auVar30 >> 0x60 & (GPiece<16>)0xffffffff;
        auVar31 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
        auVar30 = vectorMultiplyAddFloatingPoint
                            (auVar31,auVar30 | auVar30 << 0x20 | auVar30 << 0x40 | auVar30 << 0x60,
                             auVar29);
        auVar30 = vectorConvertToSignedFixedPointWordSaturate(auVar30,0);
        auVar30 = auVar30 >> 0x60 & (GPiece<16>)0xffffffff;
        GameCamera.shake.time =
             storeVectorElementWordIndexed
                       (auVar30 | auVar30 << 0x20 | auVar30 << 0x40 | auVar30 << 0x60,0x168,0x9513c0
                       );
        *(undefined4 *)((int)pvVar5 + 0x6c) = 0;
        *(undefined4 *)((int)pvVar5 + 0x68) = 0;
        *(undefined4 *)((int)pvVar5 + 100) = 0;
        *(undefined4 *)((int)pvVar5 + 0x60) = 0;
        moby->state = '\x04';
        PlayMobySound(0,0,moby);
        LVar11 = Level;
        uVar4 = moby->uid;
        puVar14 = (undefined4 *)(&g_LevelObjBits + ((int)(short)uVar4 >> 5) * 4);
        (moby->pos).z = (float)((double)*(float *)((int)pvVar5 + 0x78) - dVar27);
        iVar13 = (int)((longlong)((int)(short)uVar4 >> 5) << 2);
        uVar7 = *(uint *)(&g_CheckpointBits + iVar13);
        puVar14[LVar11 * 0x40] = puVar14[LVar11 * 0x40] | 1 << (uVar4 & 0x1f);
        *(uint *)(&g_CheckpointBits + iVar13) = uVar7 | 1 << (uVar4 & 0x1f);
      }
    }
  }
  else if (bVar2 == 2) {
    MB_RotateQuatAxisAngle
              (DAT_010ccce0,afStack_c0,(float *)(Cuboids + *(int *)((int)moby->pVar + 0x80)));
    Cam0_ForceLookAtDir(0x3fc1df46a0000000,0,afStack_c0);
    Cam0_SetCamDist((double)DAT_00857b04,(double)DAT_00857b10,&DAT_00850000,0);
    Cam0_SetCamHeight((double)DAT_00857b08,(double)DAT_00857b10);
    Cam0_SetCamOfsZ((double)DAT_00857b0c,(double)DAT_00857b10,&DAT_00850000,0);
    puVar14 = (undefined4 *)FastDecTimerS16(uVar16 + 0x8a);
    if (puVar14 != (undefined4 *)0x0) {
      auVar30 = ZEXT416(0xffffffff);
      auVar29 = auVar30 | auVar30 << 0x20 | auVar30 << 0x40 | auVar30 << 0x60;
      *(undefined4 *)((int)pvVar5 + 0x6c) = 0;
      *(undefined4 *)((int)pvVar5 + 0x68) = 0;
      *(undefined4 *)((int)pvVar5 + 100) = 0;
      *(undefined4 *)((int)pvVar5 + 0x60) = 0;
      auVar30 = loadVectorLeftIndexed(0x54,0x428638);
      puVar14 = (undefined4 *)0x86;
      auVar29 = vectorShiftLeftIntegerWord(auVar29,auVar29);
      auVar30 = auVar30 >> 0x60 & (GPiece<16>)0xffffffff;
      auVar31 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
      auVar30 = vectorMultiplyAddFloatingPoint
                          (auVar31,auVar30 | auVar30 << 0x20 | auVar30 << 0x40 | auVar30 << 0x60,
                           auVar29);
      auVar30 = vectorConvertToSignedFixedPointWordSaturate(auVar30,0);
      auVar30 = vectorSplatHalfWord(auVar30,1);
      uVar15 = storeVectorElementHalfWordIndexed(auVar30,0x86,uVar16);
      *(undefined2 *)((int)pvVar5 + 0x86) = uVar15;
      moby->state = '\x03';
    }
  }
  else {
    puVar14 = (undefined4 *)(uint)bVar2;
    if (bVar2 == 1) {
      iVar13 = *(int *)((int)pvVar5 + 0x80);
      if (iVar13 != -1) {
        fVar1 = Cuboids[iVar13].pos.z;
        uVar7 = (int)fVar1 >> 0x1f;
        puVar14 = &g_heroMtx;
        if (((int)((uVar7 >> 1 ^ (uint)fVar1) - uVar7) <=
             (int)(((uint)((int)g_heroPosition.z >> 0x1f) >> 1 ^ (uint)g_heroPosition.z) -
                  ((int)g_heroPosition.z >> 0x1f))) &&
           (fVar1 = g_heroPosition.y - Cuboids[iVar13].pos.y,
           fVar8 = g_heroPosition.x - Cuboids[iVar13].pos.x,
           SQRT(fVar8 * fVar8 + fVar1 * fVar1) < 10.0)) {
          if ((g_heroStateType < (undefined4 *)0x2) ||
             (puVar14 = g_heroStateType, g_heroStateType == (undefined4 *)0x9)) {
            local_a0 = (longlong)(int)(animationSpeed * 600.5);
            uVar15 = MB_randRange
                               ((int)(animationSpeed * 300.5),(int)(animationSpeed * 600.5));
            auVar29 = loadVectorLeftIndexed(0x88,uVar16);
            auVar31 = loadVectorRightIndexed(0x98,uVar16);
            *(undefined2 *)((int)pvVar5 + 0x84) = uVar15;
            auVar30 = ZEXT416(0xfffffff0);
            auVar32 = loadVectorLeftIndexed(8,0x428638);
            auVar31 = vectorShiftRightAlgebraicWord
                                (auVar29 | auVar31,
                                 auVar30 | auVar30 << 0x20 | auVar30 << 0x40 | auVar30 << 0x60);
            auVar29 = auVar32 >> 0x60 & (GPiece<16>)0xffffffff;
            auVar30 = ZEXT416(0xffffffff);
            auVar32 = auVar30 | auVar30 << 0x20 | auVar30 << 0x40 | auVar30 << 0x60;
            auVar33 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
            auVar30 = vectorConvertFromSignedFixedPointWord(auVar31,0);
            auVar32 = vectorShiftLeftIntegerWord(auVar32,auVar32);
            auVar29 = vectorAddFloatingPoint
                                (auVar30,auVar29 | auVar29 << 0x20 | auVar29 << 0x40 |
                                         auVar29 << 0x60);
            auVar30 = ZEXT416(0xffffffff);
            auVar30 = auVar30 | auVar30 << 0x20 | auVar30 << 0x40 | auVar30 << 0x60;
            auVar31 = vectorShiftLeftIntegerWord(auVar30,auVar30);
            auVar30 = vectorMultiplyAddFloatingPoint(auVar33,auVar29,auVar32);
            auVar30 = vectorConvertToSignedFixedPointWordSaturate(auVar30,0);
            auVar30 = vectorSplatHalfWord(auVar30,1);
            uVar15 = storeVectorElementHalfWordIndexed(auVar30,0x8a,uVar16);
            *(undefined2 *)((int)pvVar5 + 0x8a) = uVar15;
            moby->state = '\x02';
            GameCamera.shake.strength = 0.4;
            auVar30 = loadVectorLeftIndexed(0x4c,0x428638);
            auVar29 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
            auVar30 = auVar30 >> 0x60 & (GPiece<16>)0xffffffff;
            auVar30 = vectorMultiplyAddFloatingPoint
                                (auVar29,auVar30 | auVar30 << 0x20 | auVar30 << 0x40 |
                                         auVar30 << 0x60,auVar31);
            auVar30 = vectorConvertToSignedFixedPointWordSaturate(auVar30,0);
            auVar30 = auVar30 >> 0x60 & (GPiece<16>)0xffffffff;
            GameCamera.shake.time =
                 storeVectorElementWordIndexed
                           (auVar30 | auVar30 << 0x20 | auVar30 << 0x40 | auVar30 << 0x60,0x168,
                            0x9513c0);
            puVar14 = (undefined4 *)PlayMobySound(1,0,moby);
          }
        }
      }
    }
    else if (bVar2 == 0) {
      *(undefined4 *)((int)pvVar5 + 0x20) = 0;
      *(undefined1 *)((int)pvVar5 + 0x28) = 4;
      fVar3 = (moby->pos).x;
      *(undefined2 *)((int)pvVar5 + 0x24) = 0;
      *(f32 *)((int)pvVar5 + 0x70) = fVar3;
      *(undefined2 *)((int)pvVar5 + 0x3e) = 5;
      uVar4 = moby->uid;
      *(f32 *)((int)pvVar5 + 0x74) = (moby->pos).y;
      *(f32 *)((int)pvVar5 + 0x78) = (moby->pos).z;
      *(f32 *)((int)pvVar5 + 0x7c) = (moby->pos).w;
      moby->state = '\x01';
      if (((&g_Checkpoint.objState[0])[(short)uVar4] != '\0') ||
         (puVar14 = (undefined4 *)
                    (*(uint *)(&g_LevelObjBits +
                              Level * 0x100 + (int)((longlong)((int)(short)uVar4 >> 5) << 2)) &
                    1 << (uVar4 & 0x1f)), puVar14 != (undefined4 *)0x0)) {
        *(undefined4 *)((int)pvVar5 + 0x6c) = 0;
        *(undefined4 *)((int)pvVar5 + 0x68) = 0;
        *(undefined4 *)((int)pvVar5 + 100) = 0;
        *(undefined4 *)((int)pvVar5 + 0x60) = 0;
        moby->state = '\x04';
        *(undefined4 *)((int)pvVar5 + 0x8c) = 0xffffffff;
        (moby->pos).z = *(float *)((int)pvVar5 + 0x78) - 20.0;
        puVar14 = (undefined4 *)0xffffffff;
      }
    }
  }
  return puVar14;
}


