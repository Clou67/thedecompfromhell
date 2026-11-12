// game/update/moby688.cpp -- reconstructed from NPEA00385 EBOOT
// STATUS: NOT STARTED (raw Ghidra output)
// 24 functions, 0x415ec4-0x41be44
#include <stdio.h>
#include "game/update/moby688.h"
#include "game/boot.h"
#include "game/camera.h"
#include "game/collproc.h"
#include "game/debug.h"
#include "game/draw.h"
#include "game/freeze.h"
#include "game/help.h"
#include "game/hero.h"
#include "game/hud.h"
#include "game/mobyfunc.h"
#include "game/mobyutil.h"
#include "game/pad.h"
#include "game/partupd.h"
#include "game/path.h"
#include "game/respawn.h"
#include "game/sound.h"
#include "game/space.h"
#include "game/update.h"
#include "game/update/camera0.h"
#include "game/update/camera5.h"
#include "game/update/moby1009.h"
#include "game/update/moby1160.h"
#include "game/update/moby1242.h"
#include "game/update/moby1379.h"
#include "game/update/moby1511.h"
#include "game/update/moby295.h"
#include "game/update/moby42.h"
#include "game/update/moby617.h"
#include "game/update/moby686.h"
#include "game/vendor.h"
#include "idol/fastfunc.h"
#include "idol/mUnk.h"

// 0x0415ec4 (0x14 bytes)
void M688_00415ec4(void)

{
  DAT_0085741c = 0x10000;
  return;
}


// 0x0415f18 (0xd5c bytes)
// strings: 00657164: 'WARNING moby class %d instance %d has no path!\n'

/* Moby 688 */

void M688_00415f18(MobyInstance *moby)

{
  longlong lVar1;
  float fVar2;
  undefined4 uVar3;
  MOBY_OCLASSES MVar4;
  short sVar5;
  void *pvVar6;
  f32 fVar7;
  void *pvVar8;
  int *piVar9;
  Spline *pSVar10;
  undefined2 uVar11;
  ulonglong *puVar12;
  float fVar13;
  float fVar14;
  Vec4 *pVVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  Cuboid *pCVar19;
  ulonglong uVar20;
  longlong lVar21;
  int iVar24;
  uint uVar25;
  undefined8 uVar22;
  s8 sVar30;
  longlong lVar23;
  int iVar26;
  int iVar27;
  int iVar28;
  int iVar29;
  ulonglong uVar31;
  longlong lVar32;
  ulonglong uVar33;
  Spline *pSVar34;
  ushort uVar35;
  MobyInstance *pMVar36;
  ulonglong unaff_r19;
  longlong lVar37;
  ulonglong unaff_r20;
  ulonglong unaff_r21;
  ulonglong unaff_r22;
  ulonglong unaff_r23;
  ulonglong unaff_r24;
  ulonglong unaff_r25;
  longlong lVar38;
  ulonglong unaff_r26;
  ulonglong unaff_r27;
  ulonglong unaff_r28;
  ulonglong unaff_r29;
  int iVar39;
  ulonglong unaff_r30;
  ulonglong uVar40;
  ulonglong unaff_r31;
  ulonglong in_LR;
  double dVar41;
  double dVar42;
  double dVar43;
  ulonglong in_f26;
  ulonglong in_f27;
  ulonglong in_f28;
  ulonglong in_f29;
  double dVar44;
  ulonglong in_f30;
  double dVar45;
  ulonglong in_f31;
  double dVar46;
  GPiece<16> auVar47;
  GPiece<16> auVar48;
  GPiece<16> auVar49;
  GPiece<16> auVar50;
  
  lVar21 = (longlong)(int)moby;
  uVar20 = ZEXT48(&stack0x00000000);
  lVar1 = uVar20 - 0x1c0;
  puVar12 = (ulonglong *)lVar1;
  *puVar12 = uVar20;
  puVar12[0x3a] = in_LR;
  puVar12[0x32] = in_f26;
  puVar12[0x33] = in_f27;
  puVar12[0x34] = in_f28;
  puVar12[0x35] = in_f29;
  puVar12[0x36] = in_f30;
  puVar12[0x37] = in_f31;
  puVar12[0x31] = unaff_r31;
  puVar12[0x2e] = unaff_r28;
  puVar12[0x29] = unaff_r23;
  fVar18 = DAT_00857448;
  fVar2 = (moby->pos).y - GameCamera.posY;
  fVar13 = (moby->pos).x - GameCamera.posX;
  dVar45 = 1.0;
  fVar14 = (moby->pos).z - GameCamera.posZ;
  fVar17 = 1.0 - DAT_00857440;
  fVar16 = DAT_00857444 - DAT_00857448;
  puVar12[0x2f] = unaff_r29;
  puVar12[0x30] = unaff_r30;
  iVar39 = 0;
  pvVar6 = moby->pVar;
  uVar40 = ZEXT48(pvVar6);
  fVar17 = fVar17 / fVar16;
  puVar12[0x2d] = unaff_r27;
  puVar12[0x2c] = unaff_r26;
  puVar12[0x2b] = unaff_r25;
  puVar12[0x2a] = unaff_r24;
  puVar12[0x28] = unaff_r22;
  puVar12[0x27] = unaff_r21;
  puVar12[0x26] = unaff_r20;
  puVar12[0x25] = unaff_r19;
  dVar46 = (double)(-(fVar17 * SQRT(fVar14 * fVar14 + fVar13 * fVar13 + fVar2 * fVar2)) +
                   (1.0 - -(fVar17 * fVar18)));
  iVar24 = MB_damage(lVar21,0x800000,0);
  moby->damage = -1;
  if (iVar24 != 0) {
    MB_UnlockSkillPoint(0);
    FastVecSub(uVar20 - 0xf0,uVar40 + 0xd0,uVar40 + 0xe0);
    *(undefined4 *)(puVar12 + 0x18) = *(undefined4 *)(puVar12 + 0x1a);
    *(undefined4 *)((int)puVar12 + 0xc4) = *(undefined4 *)((int)puVar12 + 0xd4);
    *(undefined4 *)(puVar12 + 0x19) = *(undefined4 *)(puVar12 + 0x1b);
    *(undefined4 *)((int)puVar12 + 0xcc) = *(undefined4 *)((int)puVar12 + 0xdc);
    dVar45 = 2.0;
    puVar12[0x12] = 1;
    puVar12[0x14] = 1;
    puVar12[0x15] = 1;
    puVar12[0x16] = 0xffffffffffffffff;
    puVar12[0x17] = 0;
    MB_genericExplosion
              (0,0,0x4010000000000000,0x4000000000000000,0x40f86a0000000000,0x4008000000000000,
               0x402e000000000000,lVar21,uVar20 - 0x100,lVar21 + 0x10,1,0xffffffffffffffff,0x14,3,4)
    ;
    FUN_0028e510((double)(float)(dVar46 * dVar45),lVar21,uVar20 - 0x100);
    do {
      iVar24 = *(int *)((int)uVar40 + 0x140);
      if (iVar24 != -1) {
        DeleteMoby(g_MobyInstance + iVar24);
      }
      iVar39 = iVar39 + 1;
      uVar40 = uVar40 + 4;
    } while (iVar39 < 4);
    DeleteMoby(moby);
    return;
  }
  do {
    if (moby->state == '\0') {
      if (*(int *)((int)pvVar6 + 0x74) == -1) {
        uVar25 = (int)moby - (int)g_MobyInstance;
        puVar12[0x22] =
             (longlong)(int)(((int)uVar25 >> 8) + (uint)((int)uVar25 < 0 && (uVar25 & 0xff) != 0));
        MVar4 = moby->oClass;
        uVar22 = FastDoubleToInt((double)(longlong)puVar12[0x22]);
        printf("WARNING moby class %d instance %d has no path!\n",MVar4,uVar22);
      }
      else {
        pSVar10 = Splines[*(int *)((int)pvVar6 + 0x74)];
        *(float *)((int)pvVar6 + 0xfc) = *(float *)((int)pvVar6 + 0xfc) * 2.0;
        iVar24 = pSVar10->cnt;
        pVVar15 = pSVar10->points + iVar24 + -1;
        fVar2 = pSVar10->points[0].y - pVVar15->y;
        fVar13 = pSVar10->points[0].x - pVVar15->x;
        fVar14 = pSVar10->points[0].z - pVVar15->z;
        if (SQRT(fVar14 * fVar14 + fVar13 * fVar13 + fVar2 * fVar2) < 0.5) {
          iVar24 = iVar24 + -1;
          pSVar10->cnt = iVar24;
        }
        iVar26 = 0;
        iVar28 = 0;
        uVar31 = uVar40;
        pSVar34 = pSVar10;
        if (0 < iVar24) {
          do {
            uVar33 = uVar31;
            if (pSVar34->points[0].w == 1.0) {
              iVar28 = iVar28 + 1;
              uVar33 = uVar31 + 1;
              *(char *)((int)uVar31 + 0x180) = (char)iVar26;
              if (3 < iVar28) break;
              iVar24 = pSVar10->cnt;
            }
            iVar26 = iVar26 + 1;
            uVar31 = uVar33;
            pSVar34 = (Spline *)pSVar34->points;
          } while (iVar26 < iVar24);
        }
        *(undefined2 *)((int)pvVar6 + 0x186) = 0xffff;
        *(undefined4 *)((int)pvVar6 + 0x16c) = 0xffffffff;
        fVar2 = moby->scale;
        *(undefined2 *)((int)pvVar6 + 0x184) = 0;
        *(float *)((int)pvVar6 + 0x178) = fVar2;
        *(undefined4 *)((int)pvVar6 + 0x17c) = *(undefined4 *)((int)pvVar6 + 0xfc);
      }
      moby->updateDistance = -1;
      moby->drawDistance = 0xff;
    }
    if (dVar45 - dVar46 < 0.0) {
      dVar46 = dVar45;
    }
    if (dVar46 - (double)DAT_00857440 < 0.0) {
      dVar46 = (double)DAT_00857440;
    }
    moby->scale = (float)((double)*(float *)((int)pvVar6 + 0x178) * dVar46);
    *(float *)((int)pvVar6 + 0xfc) = (float)((double)*(float *)((int)pvVar6 + 0x17c) * dVar46);
    fVar7 = (moby->pos).z;
    uVar25 = (int)fVar7 >> 0x1f;
    iVar24 = (uVar25 >> 1 ^ (uint)fVar7) - uVar25;
    if (iVar24 < 0x432f0000) {
      if ((iVar24 < 0x42fa0001) || (iVar24 >= 0x432f0000)) {
        if (iVar24 < 0x42fa0001) {
          moby->alpha = -0x80;
        }
      }
      else {
        sVar30 = FastDoubleToInt((double)((175.0 - (moby->pos).z) * 128.0 * 0.02));
        moby->alpha = sVar30;
      }
    }
    else {
      moby->alpha = '\0';
    }
    if (*(int *)((int)pvVar6 + 0x170) == -1) {
      UpdateMoby_42(moby);
    }
    else {
      if (moby->state == '\0') {
        UpdateMoby_42(moby);
      }
      if ((*(short *)((int)pvVar6 + 0x186) == -1) &&
         (iVar24 = MB_IsPntInCuboid
                             (&g_heroPosition,(longlong)*(int *)((int)pvVar6 + 0x170)), iVar24 != 0)
         ) {
        uVar35 = moby->uid;
        if (((&g_Checkpoint.objState[0])[(short)uVar35] != '\0') ||
           ((*(uint *)(&g_LevelObjBits +
                      Level * 0x100 + (int)((longlong)((int)(short)uVar35 >> 5) << 2)) &
            1 << (uVar35 & 0x1f)) != 0)) {
          auVar47 = loadVectorLeftIndexed(0x2c,0x415ed8);
          auVar47 = auVar47 >> 0x60 & (GPiece<16>)0xffffffff;
          do {
            iVar24 = *(int *)((int)uVar40 + 0x1f0);
            if ((((iVar24 != -1) &&
                 (pMVar36 = g_MobyInstance + iVar24, pMVar36 != (MobyInstance *)0x0)) &&
                (pMVar36->oClass == BIRDBOT)) && (pMVar36->state != 0xfd && pMVar36->state != 0xfe))
            {
              auVar48 = ZEXT416(0xffffffff);
              auVar48 = auVar48 | auVar48 << 0x20 | auVar48 << 0x40 | auVar48 << 0x60;
              pvVar6 = pMVar36->pVar;
              auVar48 = vectorShiftLeftIntegerWord(auVar48,auVar48);
              *(undefined4 *)((int)pvVar6 + 0x1e8) = 1;
              auVar49 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
              auVar48 = vectorMultiplyAddFloatingPoint
                                  (auVar49,auVar47 | auVar47 << 0x20 | auVar47 << 0x40 |
                                           auVar47 << 0x60,auVar48);
              auVar48 = vectorConvertToSignedFixedPointWordSaturate(auVar48,0);
              auVar48 = vectorSplatHalfWord(auVar48,1);
              uVar11 = storeVectorElementHalfWordIndexed(auVar48,0x1ec,ZEXT48(pvVar6));
              *(undefined2 *)((int)pvVar6 + 0x1ec) = uVar11;
            }
            iVar39 = iVar39 + 1;
            uVar40 = uVar40 + 4;
          } while (iVar39 < 4);
          DeleteMoby(moby);
          return;
        }
        iVar24 = *(int *)((int)pvVar6 + 0x174);
        moby->modeBits =
             moby->modeBits &
             (MIRROR|CAN_BE_DAMAGED|HIDE_BACKFACES|CAN_BE_AUTO_TARGETED|DISABLE_Z_WRITE|DRAW_SHADOW|
              DRAW_TRANSPARENT_WEIRD|LOCK_ROTATION|NO_DRAW|HAS_SPECIAL_VARS|HAS_GLOW|TRANSPARENT|
              NO_POST_UPDATE|NO_UPDATE);
        if (iVar24 != -1) {
          TransitionMovement(0x72,0);
          SetCameraPosition
                    (&Cuboids[*(int *)((int)pvVar6 + 0x174)].pos,
                     &Cuboids[*(int *)((int)pvVar6 + 0x174)].rot,0,0,0);
          moby->collision = (ushort *)0x0;
          auVar47 = ZEXT416(0xffffffff);
          auVar47 = auVar47 | auVar47 << 0x20 | auVar47 << 0x40 | auVar47 << 0x60;
          LetterBoxOn = 1;
          moby->modeBits =
               moby->modeBits &
               (MIRROR|CAN_BE_DAMAGED|HIDE_BACKFACES|DISABLE_Z_WRITE|DRAW_SHADOW|
                DRAW_TRANSPARENT_WEIRD|LOCK_ROTATION|NO_DRAW|UNK_40|HAS_SPECIAL_VARS|HAS_GLOW|
                TRANSPARENT|NO_POST_UPDATE|NO_UPDATE|DISABLED);
          auVar48 = vectorShiftLeftIntegerWord(auVar47,auVar47);
          auVar47 = loadVectorLeftIndexed(0x30,0x415ed8);
          auVar47 = auVar47 >> 0x60 & (GPiece<16>)0xffffffff;
          auVar49 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
          auVar47 = vectorMultiplyAddFloatingPoint
                              (auVar49,auVar47 | auVar47 << 0x20 | auVar47 << 0x40 | auVar47 << 0x60
                               ,auVar48);
          auVar47 = vectorConvertToSignedFixedPointWordSaturate(auVar47,0);
          auVar47 = vectorSplatHalfWord(auVar47,1);
          uVar11 = storeVectorElementHalfWordIndexed(auVar47,0x186,uVar40);
          *(undefined2 *)((int)pvVar6 + 0x186) = uVar11;
        }
      }
      else {
        if (*(short *)((int)pvVar6 + 0x186) == -1) {
          moby->modeBits = moby->modeBits | (UNK_40|DISABLED);
          return;
        }
        iVar24 = FastDecTimerS16(uVar40 + 0x186);
        if (iVar24 != 0) {
          Camera_DeactivateMobyDrivenCam(0);
          TransitionMovement(0,1);
          uVar35 = moby->uid;
          iVar39 = (int)((longlong)((int)(short)uVar35 >> 5) << 2);
          LetterBoxOn = 0;
          iVar24 = (int)((longlong)((int)(short)uVar35 >> 5) << 2);
          uVar25 = *(uint *)(&g_CheckpointBits + iVar24);
          *(uint *)(&g_LevelObjBits + Level * 0x100 + iVar39) =
               *(uint *)(&g_LevelObjBits + Level * 0x100 + iVar39) | 1 << (uVar35 & 0x1f);
          *(uint *)(&g_CheckpointBits + iVar24) = uVar25 | 1 << (uVar35 & 0x1f);
          DeleteMoby(moby);
          return;
        }
        sVar5 = *(short *)((int)pvVar6 + 0x186);
        auVar47 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
        puVar12[0x22] = (longlong)(int)(animationSpeed * 60.5);
        pMVar36 = g_MobyInstance;
        if ((int)sVar5 == *(int *)((int)puVar12 + 0x114)) {
          auVar48 = ZEXT416(0xffffffff);
          auVar48 = auVar48 | auVar48 << 0x20 | auVar48 << 0x40 | auVar48 << 0x60;
          auVar50 = loadVectorLeftIndexed(0x2c,0x415ed8);
          auVar49 = vectorShiftLeftIntegerWord(auVar48,auVar48);
          iVar24 = 0;
          auVar48 = auVar50 >> 0x60 & (GPiece<16>)0xffffffff;
          auVar47 = vectorMultiplyAddFloatingPoint
                              (auVar47,auVar48 | auVar48 << 0x20 | auVar48 << 0x40 | auVar48 << 0x60
                               ,auVar49);
          auVar47 = vectorConvertToSignedFixedPointWordSaturate(auVar47,0);
          auVar47 = vectorSplatHalfWord(auVar47,1);
          uVar31 = uVar40;
          do {
            iVar28 = *(int *)((int)uVar31 + 0x1f0);
            if ((iVar28 != -1) && (pMVar36[iVar28].oClass == BIRDBOT)) {
              pvVar8 = pMVar36[iVar28].pVar;
              *(undefined4 *)((int)pvVar8 + 0x1e8) = 1;
              uVar11 = storeVectorElementHalfWordIndexed(auVar47,0x1ec,ZEXT48(pvVar8));
              *(undefined2 *)((int)pvVar8 + 0x1ec) = uVar11;
            }
            iVar24 = iVar24 + 1;
            uVar31 = uVar31 + 4;
          } while (iVar24 < 4);
        }
        UpdateMoby_42(moby);
      }
    }
    iVar24 = *(int *)((int)pvVar6 + 0x16c);
    iVar28 = *(int *)((int)pvVar6 + 0x60);
    moby->modeBits = moby->modeBits | CAN_BE_AUTO_TARGETED;
    *(undefined1 *)((int)pvVar6 + 0x2b) = 1;
    *(undefined1 *)((int)pvVar6 + 0x2c) = 0x2f;
    if (iVar24 != iVar28) {
      lVar23 = (ZERO_MASK(((uint)*(byte *)((int)pvVar6 + 0x180) - iVar28)) & 1U) - 1;
      lVar23 = lVar23 + (ZERO_MASK(((uint)*(byte *)((int)pvVar6 + 0x181) - iVar28)) &
                        1U - lVar23);
      lVar23 = lVar23 + (ZERO_MASK(((uint)*(byte *)((int)pvVar6 + 0x182) - iVar28)) &
                        2U - lVar23);
      lVar23 = lVar23 + (ZERO_MASK(((uint)*(byte *)((int)pvVar6 + 0x183) - iVar28)) &
                        3U - lVar23);
      iVar24 = (int)lVar23;
      if (iVar24 != -1) {
        *(undefined4 *)(puVar12 + 0x1e) = 0xffffffff;
        *(undefined4 *)((int)puVar12 + 0xf4) = 0xffffffff;
        *(undefined4 *)(puVar12 + 0x1f) = 0xffffffff;
        lVar38 = 0;
        *(undefined4 *)((int)puVar12 + 0xfc) = 0xffffffff;
        *(undefined4 *)(puVar12 + 0x20) = 0xffffffff;
        iVar28 = 0;
        *(undefined4 *)((int)puVar12 + 0x104) = 0xffffffff;
        uVar31 = lVar23 * 0x10 + uVar40 + 400 & 0xffffffff;
        *(undefined4 *)(puVar12 + 0x21) = 0xffffffff;
        *(undefined4 *)((int)puVar12 + 0x10c) = 0xffffffff;
        do {
          iVar26 = *(int *)uVar31;
          if (iVar26 != -1) {
            iVar27 = (int)(lVar38 << 2);
            lVar38 = (longlong)((int)lVar38 + 1);
            *(int *)((int)puVar12 + iVar27 + 0xf0) = iVar26;
            *(int *)((int)puVar12 + iVar27 + 0x100) = iVar26;
          }
          iVar28 = iVar28 + 1;
          uVar31 = uVar31 + 4;
        } while (iVar28 < 4);
        iVar28 = (int)lVar38;
        if (iVar28 == 0) {
          return;
        }
        iVar26 = MB_IsPntInCuboid
                           ((Vec4 *)&GameCamera.posX,(longlong)*(int *)((int)pvVar6 + 0x188));
        if (iVar26 != 0) {
          return;
        }
        lVar37 = lVar38 + -1;
        lVar23 = lVar38;
        if (-1 < (int)lVar37) {
          uVar31 = lVar37 * 4 + lVar1 & 0xffffffff;
          do {
            iVar26 = CollLine(0x951500,&Cuboids[*(int *)((int)uVar31 + 0xf0)].pos,0x86,
                                        lVar21,0);
            if ((iVar26 != 0) &&
               ((g_CollOutput.pMoby == (MobyInstance *)0x0 || (g_CollOutput.pMoby != moby)))) {
              *(undefined4 *)((int)puVar12 + (int)(lVar37 << 2) + 0x100) = 0xffffffff;
              lVar23 = (longlong)(iVar28 + -1);
              break;
            }
            lVar37 = lVar37 + -1;
            uVar31 = uVar31 - 4;
          } while (-1 < (int)lVar37);
        }
        if (((int)lVar23 != 0) &&
           (iVar26 = 0, lVar37 = lVar1, lVar32 = lVar1, lVar38 = lVar23, 0 < iVar28)) {
          do {
            iVar27 = *(int *)((int)lVar37 + 0x100);
            lVar23 = lVar32;
            if (iVar27 != -1) {
              lVar23 = lVar32 + 4;
              *(int *)((int)lVar32 + 0xf0) = iVar27;
            }
            iVar26 = iVar26 + 1;
            lVar37 = lVar37 + 4;
            lVar32 = lVar23;
          } while (iVar26 < iVar28);
        }
        if ((int)lVar38 != 0) {
          lVar23 = MB_randInt(lVar38);
          uVar35 = *(ushort *)((int)pvVar6 + 0x184) ^ 1;
          uVar25 = *(uint *)((int)puVar12 + (int)(lVar23 << 2) + 0xf0);
          *(ushort *)((int)pvVar6 + 0x184) = uVar35;
          GetBonePosition(lVar21,uVar35,uVar20 - 0xe0);
          iVar28 = (int)(((ulonglong)uVar25 & 0x1ffffff) << 7);
          fVar2 = *(float *)((int)&(Cuboids->pos).y + iVar28) - *(float *)((int)puVar12 + 0xe4);
          fVar13 = *(float *)((int)&(Cuboids->pos).x + iVar28) - *(float *)(puVar12 + 0x1c);
          fVar14 = *(float *)((int)&(Cuboids->pos).z + iVar28) - *(float *)(puVar12 + 0x1d);
          dVar42 = 0.0;
          dVar44 = (double)*(float *)((int)&(Cuboids->pos).w + iVar28);
          fVar16 = SQRT(fVar14 * fVar14 + fVar13 * fVar13 + fVar2 * fVar2);
          fVar17 = (g_FrameTime * 160.0) / fVar16;
          dVar41 = dVar42;
          if (0.0 - fVar16 < 0.0) {
            dVar41 = (double)(fVar14 * fVar17);
          }
          dVar43 = dVar42;
          if (0.0 - fVar16 < 0.0) {
            dVar43 = (double)(fVar13 * fVar17);
          }
          if (0.0 - fVar16 < 0.0) {
            dVar42 = (double)(fVar2 * fVar17);
          }
          if (fVar16 - 0.0 < 0.0) {
            dVar41 = (double)(fVar14 * fVar17);
          }
          if (fVar16 - 0.0 < 0.0) {
            dVar43 = (double)(fVar13 * fVar17);
          }
          if (fVar16 - 0.0 < 0.0) {
            dVar42 = (double)(fVar2 * fVar17);
          }
          iVar27 = MB_IsPntInCuboid
                             (&g_heroPosition,(longlong)*(int *)((int)pvVar6 + 0x18c));
          pCVar19 = Cuboids;
          *(undefined4 *)(puVar12 + 8) = *(undefined4 *)(puVar12 + 0x1c);
          *(undefined4 *)(puVar12 + 9) = *(undefined4 *)(puVar12 + 0x1d);
          *(float *)(puVar12 + 10) = (float)dVar43;
          iVar26 = *(int *)((int)pvVar6 + 0x170);
          *(float *)(puVar12 + 0xb) = (float)dVar41;
          *(undefined4 *)(puVar12 + 0xc) = *(undefined4 *)((int)&(pCVar19->pos).x + iVar28);
          *(undefined4 *)(puVar12 + 0xd) = *(undefined4 *)((int)&(pCVar19->pos).z + iVar28);
          *(undefined4 *)((int)puVar12 + 0x44) = *(undefined4 *)((int)puVar12 + 0xe4);
          *(undefined4 *)((int)puVar12 + 0x4c) = *(undefined4 *)((int)puVar12 + 0xec);
          *(float *)((int)puVar12 + 0x54) = (float)dVar42;
          *(float *)((int)puVar12 + 0x5c) = (float)dVar44;
          *(undefined4 *)((int)puVar12 + 100) = *(undefined4 *)((int)&(pCVar19->pos).y + iVar28);
          uVar3 = *(undefined4 *)((int)&(pCVar19->pos).w + iVar28);
          puVar12[0xe] = (longlong)iVar27;
          *(undefined4 *)((int)puVar12 + 0x6c) = uVar3;
          puVar12[0xf] = (ulonglong)(LZCOUNT(iVar26 + 1) << 0x20) >> 0x25 ^ 1;
          iVar28 = M686_00414688(lVar21,puVar12[0xc],puVar12[8],puVar12[9],puVar12[10],puVar12[0xb],
                                 puVar12[0xc],puVar12[0xd]);
          if (iVar28 != 0) {
            iVar28 = *(int *)(iVar28 + 0x78);
            iVar26 = 0;
            iVar27 = 0;
            *(uint *)((int)pvVar6 + 0x16c) = (uint)*(byte *)((int)pvVar6 + iVar24 + 0x180);
            uVar31 = uVar40;
            do {
              iVar24 = *(int *)((int)uVar31 + 0x1d0);
              if ((iVar24 != -1) && (g_MobyInstance[iVar24].oClass == 700)) {
                piVar9 = (int *)g_MobyInstance[iVar24].pVar;
                iVar24 = iVar28;
                if (((*(short *)(piVar9 + 1) == 0) &&
                    (((*piVar9 == 0 && (iVar29 = MB_randInt(100), iVar29 < 100)) &&
                     (iVar29 = MB_IsPntInCuboid(&g_heroPosition,(longlong)piVar9[2]),
                     iVar29 != 0)))) &&
                   (iVar29 = MB_IsPntInCuboid
                                       ((Vec4 *)&GameCamera.posX,(longlong)piVar9[2]), iVar29 != 0))
                {
                  iVar24 = iVar28 + 4;
                  iVar27 = iVar27 + 1;
                  *(undefined4 *)(iVar28 + 0x20) = *(undefined4 *)((int)uVar31 + 0x1d0);
                }
                iVar28 = iVar24;
                if (3 < iVar27) break;
              }
              iVar26 = iVar26 + 1;
              uVar31 = uVar31 + 4;
            } while (iVar26 < 8);
          }
        }
      }
    }
    fVar2 = animationSpeed;
    sVar5 = *(short *)((int)pvVar6 + 0x186);
    puVar12[0x22] = (longlong)(int)(animationSpeed * 510.5);
    puVar12[0x22] = (longlong)(int)(fVar2 * 120.5);
    if ((int)sVar5 <= *(int *)((int)puVar12 + 0x114) - *(int *)((int)puVar12 + 0x114)) {
      return;
    }
  } while( true );
}


// 0x0416c74 (0x14 bytes)
void M688_00416c74(void)

{
  DAT_00857498 = 0x10000;
  return;
}


// 0x0416c90 (0x1e8 bytes)
void M688_00416c90(int param_1,int param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  MobyInstance *pMVar12;
  
  uVar6 = (int)*(uint *)(param_1 + 0x10) >> 0x1f;
  uVar7 = (int)*(uint *)(param_1 + 0x14) >> 0x1f;
  fVar1 = 10.0;
  uVar8 = (int)*(uint *)(param_1 + 0x18) >> 0x1f;
  fVar2 = *(float *)(param_2 + 0x10);
  fVar3 = *(float *)(param_2 + 0x14);
  fVar4 = *(float *)(param_2 + 0x18);
  g_heroPosition.w = *(float *)(param_1 + 0x1c);
  fVar9 = *(float *)(param_1 + 0x10);
  if ((int)((uVar6 >> 1 ^ *(uint *)(param_1 + 0x10)) - uVar6) < 0x41200000) {
    *(undefined4 *)(param_1 + 0x10) = 0x41200000;
    fVar9 = fVar1;
  }
  fVar5 = 1013.0;
  if (1013.0 < fVar9) {
    *(undefined4 *)(param_1 + 0x10) = 0x447d4000;
    fVar9 = fVar5;
  }
  fVar11 = *(float *)(param_1 + 0x14);
  if ((int)((uVar7 >> 1 ^ *(uint *)(param_1 + 0x14)) - uVar7) < 0x41200000) {
    *(undefined4 *)(param_1 + 0x14) = 0x41200000;
    fVar11 = fVar1;
  }
  if (1013.0 < fVar11) {
    *(undefined4 *)(param_1 + 0x14) = 0x447d4000;
    fVar11 = fVar5;
  }
  fVar10 = *(float *)(param_1 + 0x18);
  if ((int)((uVar8 >> 1 ^ *(uint *)(param_1 + 0x18)) - uVar8) < 0x41200000) {
    *(undefined4 *)(param_1 + 0x18) = 0x41200000;
    fVar10 = fVar1;
  }
  if (1013.0 < fVar10) {
    *(undefined4 *)(param_1 + 0x18) = 0x447d4000;
    fVar10 = fVar5;
  }
  pMVar12 = g_heroMobyPtr;
  g_heroPosition.x =
       fVar9 - (*(float *)(param_1 + 0xe0) * fVar4 +
               *(float *)(param_1 + 0xc0) * fVar2 + *(float *)(param_1 + 0xd0) * fVar3);
  g_heroPosition.y =
       fVar11 - (*(float *)(param_1 + 0xe4) * fVar4 +
                *(float *)(param_1 + 0xc4) * fVar2 + *(float *)(param_1 + 0xd4) * fVar3);
  g_heroPosition.z =
       fVar10 - (*(float *)(param_1 + 0xe8) * fVar4 +
                *(float *)(param_1 + 200) * fVar2 + *(float *)(param_1 + 0xd8) * fVar3);
  (g_heroMobyPtr->rotation).x = *(f32 *)(param_1 + 0x40);
  (pMVar12->rotation).y = *(f32 *)(param_1 + 0x44);
  (pMVar12->rotation).z = *(f32 *)(param_1 + 0x48);
  (pMVar12->rotation).w = *(f32 *)(param_1 + 0x4c);
  g_heroRotation.x = *(float *)(param_1 + 0x40);
  g_heroRotation.y = *(float *)(param_1 + 0x44);
  g_heroRotation.z = *(float *)(param_1 + 0x48);
  g_heroRotation.w = *(float *)(param_1 + 0x4c);
  return;
}


// 0x0416e80 (0x3a0 bytes)
void M688_00416e80(double param_1,int param_2,int param_3)

{
  float fVar1;
  byte bVar2;
  float fVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  
  bVar2 = *(byte *)(param_2 + 0x20);
  fVar1 = DAT_00857530;
  if (bVar2 == 7) {
    fVar1 = DAT_00857540;
  }
  dVar6 = (double)(float)((double)((g_Pad.sticks.z - g_Pad.unk014) + g_Pad.unk010) * param_1);
  dVar5 = (double)(float)((double)((g_Pad.sticks.w - g_Pad.unk018) + g_Pad.unk01c) * param_1);
  dVar7 = param_1;
  if ((dVar6 <= param_1) && (dVar7 = dVar6, dVar6 < -param_1)) {
    dVar7 = -param_1;
  }
  if ((dVar5 <= param_1) && (dVar6 = -param_1, param_1 = dVar5, dVar5 < dVar6)) {
    param_1 = dVar6;
  }
  fVar3 = DAT_00857520;
  if ((g_Pad.downButtons & L3) != 0) {
    dVar7 = (double)(DAT_00857568 * (float)(dVar7 / (double)DAT_00857560));
    param_1 = (double)(DAT_00857564 * (float)(param_1 / (double)DAT_00857558));
    fVar1 = DAT_00857534;
    fVar3 = DAT_00857524;
  }
  dVar5 = (double)fVar3;
  if ((bVar2 != 6) && (4 < bVar2)) {
    if (bVar2 == 7) {
      AccelDelt((float)param_1,DAT_00857538 * DAT_0071f40c,DAT_0085753c * DAT_0071f40c,
                          DAT_0071f408 * fVar1,(float *)(param_3 + 0x40),0x850000,
                          (float *)(param_3 + 0x24));
      dVar4 = 0.01745329238474369;
      dVar6 = (double)FastDiffRots
                                ((double)*(float *)(param_2 + 0x44),
                                 (double)(DAT_0085755c * 0.017453292 * g_FrameTime *
                                         *(float *)(param_3 + 0x40)));
      *(float *)(param_2 + 0x44) = (float)dVar6;
      fVar1 = (float)((double)DAT_008574f8 * dVar4);
      if (dVar6 <= (double)fVar1) {
        fVar1 = (float)((double)DAT_008574f8 * -0.01745329238474369);
        if (dVar6 < (double)fVar1) {
          *(float *)(param_2 + 0x44) = fVar1;
        }
      }
      else {
        *(float *)(param_2 + 0x44) = fVar1;
      }
    }
    else {
      AccelDelt((float)param_1,DAT_00857528 * DAT_0071f40c,DAT_0085752c * DAT_0071f40c,
                          DAT_0071f408 * fVar1,(float *)(param_3 + 0x40),0x850000,
                          (float *)(param_3 + 0x24));
      dVar4 = 0.01745329238474369;
      dVar6 = (double)FastDiffRots
                                ((double)*(float *)(param_2 + 0x44),
                                 (double)(DAT_00857558 * 0.017453292 * g_FrameTime *
                                         *(float *)(param_3 + 0x40)));
      *(float *)(param_2 + 0x44) = (float)dVar6;
      fVar1 = (float)((double)DAT_008574f4 * dVar4);
      if (dVar6 <= (double)fVar1) {
        fVar1 = (float)((double)DAT_008574f4 * -0.01745329238474369);
        if (dVar6 < (double)fVar1) {
          *(float *)(param_2 + 0x44) = fVar1;
        }
      }
      else {
        *(float *)(param_2 + 0x44) = fVar1;
      }
    }
  }
  AccelDelt((float)dVar7,DAT_00857518 * DAT_0071f40c,DAT_0085751c * DAT_0071f40c,
                      (float)((double)DAT_0071f408 * dVar5),(float *)(param_3 + 0x3c),0x850000,
                      (float *)(param_3 + 0x28));
  AccelDeltAng
            ((double)(*(float *)(param_3 + 0x3c) * DAT_00857548),(double)DAT_0085754c,
             (double)DAT_00857550,(double)DAT_00857554,param_2 + 0x40,&DAT_00850000,param_3 + 0x20);
  dVar7 = (double)FastDiffRots
                            ((double)*(float *)(param_2 + 0x48),
                             (double)(DAT_00857560 * 0.017453292 * g_FrameTime *
                                     *(float *)(param_3 + 0x3c)));
  *(float *)(param_2 + 0x48) = (float)dVar7;
  return;
}


// 0x0417220 (0xf4 bytes)
void M688_00417220(int param_1)

{
  int iVar1;
  double dVar2;
  
  iVar1 = *(int *)(param_1 + 0x78);
  dVar2 = (double)FastIntToDouble((longlong)g_FrameBufHeight + -0x40);
  dVar2 = (double)((float)(dVar2 * -(double)(DAT_0085750c * g_FrameTime -
                                            *(float *)(iVar1 + 0x34))) /
                  (DAT_00857514 * g_FrameTime - DAT_0085750c * g_FrameTime));
  DrawRectOverlay
            (0x1e,g_FrameBufHeight + -0x1e,g_FrameBufWidth + -0x32,
             g_FrameBufWidth + -0x1e,0x60800000);
  iVar1 = FastDoubleToInt(dVar2);
  DrawRectOverlay
            ((g_FrameBufHeight - iVar1) + -0x20,g_FrameBufHeight + -0x20,
             g_FrameBufWidth + -0x30,g_FrameBufWidth + -0x20,0x40000080);
  return;
}


// 0x0417370 (0x13b4 bytes)
// strings: 004186c0: '=@0`0a' (raw)

/* Moby 689 */

void UpdateMoby_689(MobyInstance *moby)

{
  int iVar1;
  byte bVar2;
  float fVar3;
  float *out;
  f32 fVar4;
  uint uVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  MobyInstance *pMVar15;
  longlong lVar16;
  ulonglong uVar17;
  longlong lVar18;
  int iVar19;
  double dVar20;
  double dVar21;
  double dVar22;
  double dVar23;
  undefined8 uVar24;
  undefined8 uVar25;
  undefined8 uVar26;
  undefined4 uVar27;
  undefined4 uVar28;
  undefined4 uVar29;
  undefined4 uVar30;
  undefined4 uVar31;
  undefined4 uVar32;
  undefined4 uVar33;
  undefined4 uVar34;
  undefined4 uVar35;
  undefined4 uVar36;
  undefined4 uVar37;
  float local_90;
  float local_8c;
  float local_88;
  float local_80;
  float local_7c;
  float local_78;
  float local_70;
  float local_6c;
  float local_68;
  float local_64;
  GPiece<16> auStack_60;
  longlong local_50;
  
  pMVar15 = g_heroMobyPtr;
  lVar16 = (longlong)(int)moby;
  bVar2 = moby->state;
  out = (float *)moby->pVar;
  if (bVar2 < 5) {
    if (bVar2 < 2) {
      if (bVar2 == 0) {
        (moby->pos).z = (moby->pos).z + DAT_008574bc;
        GetBonePosition(pMVar15,0xb,out + 4);
        out[4] = out[4] - g_heroPosition.x;
        out[5] = out[5] - g_heroPosition.y;
        out[6] = out[6] - g_heroPosition.z;
        if (moby->animationId != '\0') {
          MB_SetAnimation(lVar16,0,0,10);
        }
        moby->state = '\x01';
      }
      else {
        dVar20 = (double)FastWrapRot
                                   ((moby->rotation).z,
                                    DAT_008574c0 * 0.017453292 * g_FrameTime);
        (moby->rotation).z = (float)dVar20;
        fVar3 = (moby->pos).y - g_heroPosition.y;
        fVar8 = (moby->pos).x - g_heroPosition.x;
        if (SQRT(fVar8 * fVar8 + fVar3 * fVar3) < DAT_008574c4) {
          if (moby->animationId != '\0') {
            MB_SetAnimation(lVar16,0,0,10);
          }
          moby->state = '\x02';
        }
      }
    }
    else if (bVar2 < 3) {
      puVar6 = (undefined4 *)((uint)&(g_heroMobyPtr->transform).v1 & 0xfffffff0);
      uVar30 = puVar6[3];
      uVar29 = puVar6[2];
      uVar28 = puVar6[1];
      uVar27 = *puVar6;
      puVar6 = (undefined4 *)((uint)&(g_heroMobyPtr->transform).v2 & 0xfffffff0);
      uVar34 = puVar6[3];
      uVar33 = puVar6[2];
      uVar32 = puVar6[1];
      uVar31 = *puVar6;
      puVar6 = (undefined4 *)((uint)&g_heroMobyPtr->transform & 0xfffffff0);
      uVar37 = puVar6[2];
      uVar36 = puVar6[1];
      uVar35 = *puVar6;
      puVar7 = (undefined4 *)((uint)&moby->transform & 0xfffffff0);
      puVar7[3] = puVar6[3];
      puVar7[2] = uVar37;
      puVar7[1] = uVar36;
      *puVar7 = uVar35;
      puVar6 = (undefined4 *)((uint)&(moby->transform).v1 & 0xfffffff0);
      puVar6[3] = uVar30;
      puVar6[2] = uVar29;
      puVar6[1] = uVar28;
      *puVar6 = uVar27;
      puVar6 = (undefined4 *)((uint)&(moby->transform).v2 & 0xfffffff0);
      puVar6[3] = uVar34;
      puVar6[2] = uVar33;
      puVar6[1] = uVar32;
      *puVar6 = uVar31;
      pMVar15 = g_heroMobyPtr;
      (moby->rotation).x = (g_heroMobyPtr->rotation).x;
      (moby->rotation).y = (pMVar15->rotation).y;
      (moby->rotation).z = (pMVar15->rotation).z;
      (moby->rotation).w = (pMVar15->rotation).w;
      GetBonePosition(pMVar15,0xb,lVar16 + 0x10);
      if ((g_Pad.buttonsPressedThisFrame & TRIANGLE) == 0) {
        if (((g_Pad.buttonsPressedThisFrame & CIRCLE) != 0) && (g_framesNotGrounded != 0)) {
          out[0xc] = DAT_008574cc;
          TransitionMovement(0x32,1);
          g_heroMobyPtr->collisionMesh = (float *)0xffffffff;
          (moby->rotation).y = DAT_008574dc * 0.017453292;
          fVar3 = g_FrameTime * 5.0;
          *(undefined1 *)out = 0;
          *(undefined1 *)((int)out + 1) = 0;
          *(undefined1 *)((int)out + 2) = 0;
          *(undefined1 *)((int)out + 3) = 0;
          *(undefined1 *)(out + 1) = 0;
          *(undefined1 *)((int)out + 5) = 0;
          *(undefined1 *)((int)out + 6) = 0;
          *(undefined1 *)((int)out + 7) = 0;
          *(undefined1 *)(out + 2) = 0;
          *(undefined1 *)((int)out + 9) = 0;
          *(undefined1 *)((int)out + 10) = 0;
          *(undefined1 *)((int)out + 0xb) = 0;
          *(undefined1 *)(out + 3) = 0;
          *(undefined1 *)((int)out + 0xd) = 0;
          *(undefined1 *)((int)out + 0xe) = 0;
          *(undefined1 *)((int)out + 0xf) = 0;
          out[0xd] = fVar3 * 0.72;
          uVar17 = (ulonglong)moby->animationId;
          if (moby->animationId != 1) {
            uVar17 = MB_SetAnimation(lVar16,1,0,10);
          }
          out[0xe] = (moby->pos).z;
          Cam0_SetCamOfsZ(0x3fc99999a0000000,0x3f747ae140000000,uVar17,0);
          out[0x11] = 0.0;
          DAT_010cc8d4 = DAT_0071d508;
          DAT_010cc8d8 = DAT_0071d50c;
          DAT_0071d508 = DAT_008575b0;
          DAT_0071d50c = DAT_008575b4;
          moby->state = '\x04';
        }
      }
      else {
        if (moby->animationId != '\0') {
          MB_SetAnimation(lVar16,0,0,10);
        }
        moby->state = '\x03';
      }
    }
    else if (bVar2 < 4) {
      fVar3 = (moby->pos).y - g_heroPosition.y;
      fVar8 = (moby->pos).x - g_heroPosition.x;
      if (DAT_008574c8 < SQRT(fVar8 * fVar8 + fVar3 * fVar3)) {
        if (moby->animationId != '\0') {
          MB_SetAnimation(lVar16,0,0,10);
        }
        moby->state = '\x01';
      }
    }
    else {
      fVar3 = (moby->rotation).y;
      fVar8 = 3.1415925 - fVar3;
      if (fVar3 - (3.1415925 - fVar3) < 0.0) {
        fVar8 = fVar3;
      }
      fVar9 = -3.1415925 - fVar3;
      if ((-3.1415925 - fVar3) - fVar8 < 0.0) {
        fVar9 = fVar8;
      }
      fVar3 = fVar9 * fVar9;
      fVar8 = fVar3 * fVar3 * fVar9;
      fVar10 = fVar3 * fVar8;
      out[2] = -((fVar3 * fVar10 * 2.601887e-06 +
                 fVar10 * -0.0001980741 + fVar8 * 0.0083330255 + fVar3 * fVar9 * -0.16666657 + fVar9
                 ) * out[0xd]);
      fVar3 = (moby->rotation).y + 1.5707963;
      fVar8 = (moby->rotation).z + 1.5707963;
      fVar9 = 3.1415925 - fVar3;
      if (fVar3 - (3.1415925 - fVar3) < 0.0) {
        fVar9 = fVar3;
      }
      fVar10 = 3.1415925 - fVar8;
      if (fVar8 - (3.1415925 - fVar8) < 0.0) {
        fVar10 = fVar8;
      }
      fVar13 = -3.1415925 - fVar3;
      if ((-3.1415925 - fVar3) - fVar9 < 0.0) {
        fVar13 = fVar9;
      }
      fVar3 = -3.1415925 - fVar8;
      if ((-3.1415925 - fVar8) - fVar10 < 0.0) {
        fVar3 = fVar10;
      }
      fVar14 = fVar13 * fVar13;
      fVar8 = fVar3 * fVar3;
      fVar12 = fVar14 * fVar14 * fVar13;
      fVar9 = fVar8 * fVar8 * fVar3;
      fVar11 = fVar14 * fVar12;
      fVar10 = fVar8 * fVar9;
      fVar13 = out[0xd] *
               (fVar14 * fVar11 * 2.601887e-06 +
               fVar11 * -0.0001980741 +
               fVar12 * 0.0083330255 + fVar14 * fVar13 * -0.16666657 + fVar13);
      fVar8 = fVar13 * (fVar8 * fVar10 * 2.601887e-06 +
                       fVar10 * -0.0001980741 +
                       fVar9 * 0.0083330255 + fVar8 * fVar3 * -0.16666657 + fVar3);
      *out = fVar8;
      iVar19 = DAT_008574d0;
      fVar3 = (moby->rotation).z;
      lVar18 = (longlong)DAT_008574d0;
      fVar9 = 3.1415925 - fVar3;
      if (fVar3 - (3.1415925 - fVar3) < 0.0) {
        fVar9 = fVar3;
      }
      fVar10 = -3.1415925 - fVar3;
      if ((-3.1415925 - fVar3) - fVar9 < 0.0) {
        fVar10 = fVar9;
      }
      fVar3 = fVar10 * fVar10;
      fVar9 = fVar3 * fVar3 * fVar10;
      fVar11 = fVar3 * fVar9;
      out[1] = fVar13 * (fVar3 * fVar11 * 2.601887e-06 +
                        fVar11 * -0.0001980741 +
                        fVar9 * 0.0083330255 + fVar3 * fVar10 * -0.16666657 + fVar10);
      dVar20 = 0.5;
      iVar1 = (int)(animationSpeed * (float)((double)lVar18 + 0.5));
      local_50 = (longlong)iVar1;
      if ((int)out[0xc] <= iVar1) {
        iVar19 = (int)(animationSpeed * (float)((double)(longlong)(iVar19 - (int)out[0xc]) + 0.5));
        local_50 = (longlong)iVar19;
        dVar21 = (double)FastIntToDouble(iVar19);
        dVar22 = (double)FastIntToDouble(DAT_008574d0);
        dVar23 = (double)(float)(dVar21 / dVar22);
        out[0x11] = (float)(dVar21 / dVar22);
        dVar21 = 1.0;
        if (dVar23 <= 1.0) {
          if (dVar23 < 0.0) {
            out[0x11] = 0.0;
            dVar23 = 0.0;
          }
        }
        else {
          out[0x11] = 1.0;
          dVar23 = dVar21;
        }
        M688_00416e80(dVar23,lVar16,out);
        fVar3 = (float)(dVar21 - (double)out[0x11]);
        *out = *out * fVar3;
        out[1] = out[1] * fVar3;
        out[2] = out[2] * fVar3;
        MB_SphericalToVector(out[0xd],(moby->rotation).z,-(moby->rotation).y,&local_90);
        fVar3 = out[0x11];
        local_8c = local_8c * fVar3;
        local_90 = local_90 * fVar3;
        local_88 = local_88 * fVar3;
        fVar8 = *out + local_90;
        *out = fVar8;
        out[1] = out[1] + local_8c;
        out[2] = out[2] + local_88;
      }
      (moby->pos).x = (moby->pos).x + fVar8;
      pMVar15 = g_heroMobyPtr;
      (moby->pos).y = (moby->pos).y + out[1];
      (moby->pos).z = (moby->pos).z + out[2];
      iVar19 = CollSphere((double)DAT_008574e0,lVar16 + 0x10,&DAT_00850000,2,pMVar15);
      if (iVar19 == 0) {
        if (((g_Pad.unk0a8 & 0x20) == 0) ||
           (iVar19 = (int)(animationSpeed * (float)((double)(longlong)DAT_008574d4 + dVar20)),
           local_50 = (longlong)iVar19, (int)out[0xc] <= iVar19)) {
          M688_00416c90(lVar16,out);
          fVar3 = DAT_008574e8 * DAT_0071f418 + out[0xd];
          out[0xd] = fVar3;
          fVar9 = g_FrameTime;
          fVar8 = animationSpeed;
          if (DAT_008574e4 * g_FrameTime < fVar3) {
            out[0xd] = DAT_008574e4 * g_FrameTime;
          }
          dVar23 = 0.01745329238474369;
          iVar19 = (int)(fVar8 * (float)((double)(longlong)((int)DAT_008574cc - DAT_008574d8) +
                                        dVar20));
          local_50 = (longlong)iVar19;
          if ((int)out[0xc] < iVar19) {
            dVar20 = (double)FastDiffRots
                                       ((double)(moby->rotation).y,
                                        (double)(DAT_008574ec * 0.017453292 * fVar9));
            (moby->rotation).y = (float)dVar20;
          }
          if ((int)(moby->rotation).y < 0) {
            (moby->rotation).y = 0.0;
          }
          iVar19 = FastDecTimerS32(out + 0xc);
          if (iVar19 != 0) {
            if (moby->animationId != '\x02') {
              MB_SetAnimation(lVar16,2,0,10);
            }
            Hero_TransAnim(15.0,0x13,0);
            out[8] = 0.0;
            fVar3 = g_FrameTime;
            dVar20 = (double)DAT_008574ec;
            out[10] = 0.0;
            out[9] = -((float)(dVar20 * dVar23) * fVar3);
            moby->state = '\x05';
          }
        }
        else {
          Hero_TransAnim(15.0,0xb,0);
          out[0xc] = 0.0;
          if (moby->animationId != '\x03') {
            MB_SetAnimation(lVar16,3,0,10);
          }
          moby->state = '\b';
        }
      }
      else {
        (moby->pos).x = g_CollOutput.push.x;
        (moby->pos).y = g_CollOutput.push.y;
        (moby->pos).z = g_CollOutput.push.z;
        (moby->pos).w = g_CollOutput.push.w;
        M688_00416c90(lVar16,out);
        out[0xc] = 0.0;
        TransitionMovement(0,1);
        if (moby->animationId != '\0') {
          MB_SetAnimation(lVar16,0,0,10);
        }
        moby->state = '\x02';
      }
    }
  }
  else if (bVar2 < 8) {
    if (bVar2 < 6) {
      dVar20 = 1.0;
      M688_00416e80(0x3ff0000000000000,lVar16,out);
      fVar3 = (moby->pos).z;
      if (DAT_00857510 < fVar3 - out[0xe]) {
        dVar21 = (double)((DAT_00857508 + (out[0xe] - fVar3)) / (DAT_00857508 - DAT_00857510));
        dVar23 = dVar20;
        if ((dVar21 <= dVar20) && (dVar23 = dVar21, dVar21 < 0.0)) {
          dVar23 = 0.0;
        }
        fVar8 = DAT_00857514 * g_FrameTime;
        fVar3 = (((float)(dVar20 - dVar23) * (DAT_0085750c * g_FrameTime - fVar8) + fVar8)
                - out[0xd]) * 0.1 + out[0xd];
        out[0xd] = fVar3;
        if (fVar8 < fVar3) {
          out[0xd] = fVar8;
          fVar3 = fVar8;
        }
      }
      else {
        fVar3 = (DAT_00857514 * g_FrameTime - out[0xd]) * 0.1 + out[0xd];
        out[0xd] = fVar3;
      }
      uVar5 = (int)out[0x11] >> 0x1f;
      if ((int)((uVar5 >> 1 ^ (uint)out[0x11]) - uVar5) < 0x3f800000) {
        fVar8 = out[0x11] + DAT_008575ac;
        out[0x11] = fVar8;
        if (dVar20 < (double)fVar8) {
          out[0x11] = 1.0;
        }
        MB_SphericalToVector(fVar3,(moby->rotation).z,-(moby->rotation).y,&local_80);
        dVar23 = (double)out[0x11];
        fVar3 = (float)(dVar20 - dVar23);
        *out = *out * fVar3;
        out[1] = out[1] * fVar3;
        out[2] = out[2] * fVar3;
        local_7c = (float)((double)local_7c * dVar23);
        local_80 = (float)((double)local_80 * dVar23);
        local_78 = (float)((double)local_78 * dVar23);
        fVar3 = *out + local_80;
        *out = fVar3;
        out[1] = out[1] + local_7c;
        out[2] = out[2] + local_78;
      }
      else {
        MB_SphericalToVector(fVar3,(moby->rotation).z,-(moby->rotation).y,out);
        fVar3 = *out;
      }
      (moby->pos).x = (moby->pos).x + fVar3;
      (moby->pos).y = (moby->pos).y + out[1];
      (moby->pos).z = (moby->pos).z + out[2];
      M688_00416c90(lVar16,out);
      if (DAT_00857508 < (moby->pos).z - out[0xe]) {
        if (moby->animationId != '\x03') {
          MB_SetAnimation(lVar16,3,0,3);
        }
        Hero_TransAnim(15.0,0x35,0);
        out[0xc] = DAT_0085756c;
        fVar3 = 0.0;
        out[0x10] = 0.0;
        dVar20 = (double)(moby->rotation).y;
        if ((double)(DAT_00857574 * 0.017453292) < dVar20) {
          dVar20 = (double)FastDiffRots((double)(DAT_00857574 * 0.017453292),dVar20);
          dVar23 = (double)FastIntToDouble(DAT_0085756c);
          fVar3 = (float)(dVar20 / dVar23);
        }
        out[0x12] = fVar3;
        moby->state = '\x06';
      }
      iVar19 = CollSphere
                         ((double)DAT_008574e0,lVar16 + 0x10,&DAT_00850000,2,g_heroMobyPtr);
      if (iVar19 != 0) {
        out[0xc] = 0.0;
        DAT_0071d508 = DAT_010cc8d4;
        DAT_0071d50c = DAT_010cc8d8;
        TransitionMovement(0,1);
        if (moby->animationId != '\0') {
          MB_SetAnimation(lVar16,0,0,10);
        }
        moby->state = '\x02';
      }
    }
    else if (bVar2 < 7) {
      iVar19 = FastDecTimerS32(out + 0xc);
      if (iVar19 != 0) {
        out[0xc] = DAT_00857578;
        moby->state = '\a';
      }
      out[2] = out[2] + -(DAT_00857570 * DAT_0071f418);
      (moby->pos).x = (moby->pos).x + *out;
      (moby->pos).y = (moby->pos).y + out[1];
      (moby->pos).z = (moby->pos).z + out[2];
      out[0xd] = SQRT(out[2] * out[2] + *out * *out + out[1] * out[1]);
      FastIntToDouble(out[0xc]);
      FastIntToDouble(DAT_0085756c);
      uVar24 = 0x3ff0000000000000;
      dVar20 = (double)FastWrapRot((moby->rotation).y,out[0x12]);
      (moby->rotation).y = (float)dVar20;
      M688_00416e80(uVar24,lVar16,out);
      M688_00416c90(lVar16,out);
      iVar19 = CollSphere
                         ((double)DAT_008574e0,lVar16 + 0x10,&DAT_00850000,2,g_heroMobyPtr);
      if (iVar19 != 0) {
        DAT_0071d508 = DAT_010cc8d4;
        DAT_0071d50c = DAT_010cc8d8;
        TransitionMovement(0,1);
        if (moby->animationId != '\0') {
          MB_SetAnimation(lVar16,0,0,10);
        }
        moby->state = '\x02';
      }
    }
    else {
      if (((moby->rotation).y <= DAT_010cc8d0 * 0.017453292) ||
         (DAT_00857508 <= (moby->pos).z - out[0xe])) {
        iVar19 = FastDecTimerS32(out + 0xc);
        if (iVar19 != 0) {
          Hero_TransAnim(15.0,0xb,0);
          moby->state = '\b';
        }
      }
      else {
        Hero_TransAnim(15.0,0x13,0);
        if (moby->animationId != '\x02') {
          MB_SetAnimation(lVar16,2,0,10);
        }
        out[0x11] = 0.0;
        moby->state = '\x05';
      }
      out[2] = out[2] + -(DAT_00857570 * DAT_0071f418);
      (moby->pos).x = (moby->pos).x + *out;
      (moby->pos).y = (moby->pos).y + out[1];
      (moby->pos).z = (moby->pos).z + out[2];
      out[0xd] = SQRT(out[2] * out[2] + *out * *out + out[1] * out[1]);
      M688_00416e80(0x3ff0000000000000,lVar16,out);
      M688_00416c90(lVar16,out);
      iVar19 = CollSphere
                         ((double)DAT_008574e0,lVar16 + 0x10,&DAT_00850000,2,g_heroMobyPtr);
      if (iVar19 != 0) {
        DAT_0071d508 = DAT_010cc8d4;
        DAT_0071d50c = DAT_010cc8d8;
        out[0xc] = 0.0;
        TransitionMovement(0,1);
        if (moby->animationId != '\0') {
          MB_SetAnimation(lVar16,0,0,10);
        }
        moby->state = '\x02';
      }
    }
  }
  else if (bVar2 < 9) {
    dVar20 = (double)FastWrapRot
                               ((moby->rotation).z,
                                DAT_0085757c * 0.017453292 * g_FrameTime);
    (moby->rotation).z = (float)dVar20;
    out[2] = out[2] + -(DAT_00857570 * DAT_0071f418);
    (moby->pos).x = (moby->pos).x + *out;
    (moby->pos).y = (moby->pos).y + out[1];
    (moby->pos).z = (moby->pos).z + out[2];
    M688_00416c90(lVar16,out);
    fVar4 = (moby->pos).z;
    uVar5 = (int)fVar4 >> 0x1f;
    if ((int)((uVar5 >> 1 ^ (uint)fVar4) - uVar5) < 0x41400000) {
      HandleHeroDeath();
    }
    iVar19 = CollSphere((double)DAT_008574e0,lVar16 + 0x10,&DAT_00850000,2,g_heroMobyPtr);
    if (iVar19 != 0) {
      DAT_0071d508 = DAT_010cc8d4;
      DAT_0071d50c = DAT_010cc8d8;
      out[0xc] = 0.0;
      TransitionMovement(0,1);
      if (moby->animationId != '\0') {
        MB_SetAnimation(lVar16,0,0,10);
      }
      moby->state = '\x02';
    }
  }
  fVar4 = (moby->pos).x;
  uVar5 = (int)fVar4 >> 0x1f;
  fVar3 = 10.0;
  fVar8 = (moby->pos).x;
  if ((int)((uVar5 >> 1 ^ (uint)fVar4) - uVar5) < 0x41200000) {
    (moby->pos).x = 10.0;
    fVar8 = fVar3;
  }
  if (1013.0 < fVar8) {
    (moby->pos).x = 1013.0;
  }
  fVar4 = (moby->pos).y;
  uVar5 = (int)fVar4 >> 0x1f;
  fVar8 = (moby->pos).y;
  if ((int)((uVar5 >> 1 ^ (uint)fVar4) - uVar5) < 0x41200000) {
    (moby->pos).y = 10.0;
    fVar8 = fVar3;
  }
  if (1013.0 < fVar8) {
    (moby->pos).y = 1013.0;
  }
  fVar4 = (moby->pos).z;
  uVar5 = (int)fVar4 >> 0x1f;
  fVar8 = (moby->pos).z;
  if ((int)((uVar5 >> 1 ^ (uint)fVar4) - uVar5) < 0x41200000) {
    (moby->pos).z = 10.0;
    fVar8 = fVar3;
  }
  if (1013.0 < fVar8) {
    (moby->pos).z = 1013.0;
  }
  if (3 < moby->state) {
    RegisterFuncForMoby(&PTR_M688_00417220_0070e0d8,moby);
    local_70 = *out * 0.25;
    local_6c = out[1] * 0.25;
    local_68 = out[2] * 0.25;
    local_64 = out[3];
    iVar19 = 0;
    uVar24 = 0x3ff0000000000000;
    uVar25 = 0x3ff028f5c0000000;
    uVar26 = 0x40dd4c0000000000;
    do {
      GetBonePosition(lVar16,iVar19,auStack_60);
      fVar3 = 0.0;
      if (5 < moby->state) {
        fVar3 = 0.07;
      }
      SpawnPart_23((double)fVar3,uVar24,uVar25,uVar26,auStack_60);
      iVar19 = iVar19 + 1;
    } while (iVar19 < 5);
  }
  return;
}


// 0x0418724 (0x14 bytes)
void M688_00418724(void)

{
  DAT_00857604 = 0x10000;
  return;
}


// 0x0418738 (0x4 bytes)
void M688_00418738(void)

{
  return;
}


// 0x041873c (0x2a8 bytes)
void M688_0041873c
               (double param_1,double param_2,double param_3,longlong param_4,int param_5)

{
  undefined4 uVar1;
  RenderingStep *pRVar2;
  int iVar3;
  undefined8 uVar4;
  int iVar5;
  ulonglong in_r8;
  longlong lVar6;
  GPiece<16> auVar7;
  GPiece<16> auVar8;
  GPiece<16> auVar9;
  GPiece<16> auVar10;
  GPiece<16> auVar11;
  GPiece<16> auVar12;
  
  iVar3 = EffectTexHeaders;
  auVar12.piece<0,4>() = (float)param_2;
  auVar12.piece<4,4>() = (float)param_2;
  auVar12.piece<8,4>() = (float)param_2;
  auVar12.piece<12,4>() = (float)param_2;
  auVar11.piece<0,4>() = (float)param_1;
  auVar11.piece<4,4>() = (float)param_1;
  auVar11.piece<8,4>() = (float)param_1;
  auVar11.piece<12,4>() = (float)param_1;
  uVar4 = 0x70;
  auVar10.piece<0,4>() = (float)param_3;
  auVar10.piece<4,4>() = (float)param_3;
  auVar10.piece<8,4>() = (float)param_3;
  auVar10.piece<12,4>() = (float)param_3;
  iVar5 = GetEffectTex(0x16);
  idol_draw::SetTextureUnitRegs(HUD_Pass,0,iVar3 + iVar5 * 0x24);
  idol_draw::ResetPassState(HUD_Pass);
  pRVar2 = HUD_Pass;
  *HUD_Pass->command = 0x41948;
  pRVar2->command[1] =
       (RsxCmd)((in_r8 >> 8 & 0xff) << 8) |
       (RsxCmd)((in_r8 >> 0x18 & 0xff) << 0x18) | (RsxCmd)((in_r8 >> 0x10 & 0xff) << 0x10) |
       (RsxCmd)in_r8 & 0xff;
  pRVar2->command = pRVar2->command + 2;
  pRVar2 = HUD_Pass;
  *HUD_Pass->command = 0x400c1714;
  pRVar2->command[1] = 0;
  pRVar2->command[2] = 0;
  pRVar2->command[3] = 0;
  pRVar2->command[4] = NV4097_SET_BEGIN_END_x1;
  pRVar2->command[5] = 6;
  pRVar2->command = pRVar2->command + 6;
  if (0 < param_5) {
    auVar7 = ZEXT416(0xfffffff0);
    auVar7 = auVar7 | auVar7 << 0x20 | auVar7 << 0x40 | auVar7 << 0x60;
    lVar6 = param_4 + 2;
    do {
      pRVar2 = HUD_Pass;
      auVar8 = loadVectorLeftIndexed(uVar4,param_4);
      auVar9 = loadVectorLeftIndexed(uVar4,lVar6);
      auVar8 = vectorShiftRightAlgebraicWord(auVar8,auVar7);
      auVar9 = vectorShiftRightAlgebraicWord(auVar9,auVar7);
      auVar8 = vectorConvertFromSignedFixedPointWord(auVar8,0);
      auVar9 = vectorConvertFromSignedFixedPointWord(auVar9,0);
      param_5 = param_5 + -1;
      lVar6 = lVar6 + 4;
      *HUD_Pass->command = 0x41904;
      param_4 = param_4 + 4;
      pRVar2->command[1] = 0;
      auVar8 = vectorMultiplyAddFloatingPoint(auVar8,auVar10,auVar11);
      auVar9 = vectorMultiplyAddFloatingPoint(auVar9,auVar10,auVar12);
      pRVar2->command = pRVar2->command + 2;
      pRVar2 = HUD_Pass;
      auVar8 = auVar8 >> 0x60 & (GPiece<16>)0xffffffff;
      auVar9 = auVar9 >> 0x60 & (GPiece<16>)0xffffffff;
      *HUD_Pass->command = NV4097_SET_VERTEX_DATA2F_M_x2;
      uVar1 = storeVectorElementWordIndexed
                        (auVar8 | auVar8 << 0x20 | auVar8 << 0x40 | auVar8 << 0x60,4,
                         ZEXT48(pRVar2->command));
      *(undefined4 *)((uint)(pRVar2->command + 1) & 0xfffffffc) = uVar1;
      uVar1 = storeVectorElementWordIndexed
                        (auVar9 | auVar9 << 0x20 | auVar9 << 0x40 | auVar9 << 0x60,8,
                         ZEXT48(pRVar2->command));
      *(undefined4 *)((uint)(pRVar2->command + 2) & 0xfffffffc) = uVar1;
      pRVar2->command = pRVar2->command + 3;
    } while (0 < param_5);
  }
  pRVar2 = HUD_Pass;
  *HUD_Pass->command = NV4097_SET_BEGIN_END_x1;
  pRVar2->command[1] = 0;
  pRVar2->command = pRVar2->command + 2;
  return;
}


// 0x04189e4 (0x314 bytes)
void M688_004189e4
               (double param_1,double param_2,double param_3,double param_4,longlong param_5,
               int param_6)

{
  longlong lVar1;
  RsxCmd *pRVar2;
  undefined4 uVar3;
  ulonglong *puVar4;
  RenderingStep *pRVar5;
  int iVar6;
  undefined8 uVar7;
  ulonglong uVar8;
  int iVar9;
  ulonglong in_r8;
  ulonglong unaff_r24;
  ulonglong unaff_r25;
  ulonglong unaff_r26;
  ulonglong unaff_r27;
  ulonglong unaff_r28;
  ulonglong unaff_r29;
  ulonglong unaff_r30;
  longlong lVar10;
  ulonglong unaff_r31;
  ulonglong in_LR;
  ulonglong in_f31;
  GPiece<16> auVar11;
  GPiece<16> auVar12;
  GPiece<16> auVar13;
  GPiece<16> auVar14;
  GPiece<16> auVar15;
  GPiece<16> auVar16;
  GPiece<16> auVar17;
  GPiece<16> auVar18;
  GPiece<16> auVar19;
  GPiece<16> auVar20;
  GPiece<16> auVar21;
  GPiece<16> auVar22;
  GPiece<16> auVar23;
  
  uVar8 = ZEXT48(&stack0x00000000);
  lVar1 = uVar8 - 0x150;
  puVar4 = (ulonglong *)lVar1;
  *puVar4 = uVar8;
  puVar4[0x2c] = in_LR;
  puVar4[0x29] = in_f31;
  puVar4[0x28] = unaff_r31;
  puVar4[0x27] = unaff_r30;
  *(float *)(puVar4 + 0x18) = (float)param_2;
  *(float *)((int)puVar4 + 0xc4) = (float)param_2;
  *(float *)(puVar4 + 0x19) = (float)param_2;
  *(float *)((int)puVar4 + 0xcc) = (float)param_2;
  puVar4[0x25] = unaff_r28;
  puVar4[0x24] = unaff_r27;
  puVar4[0x23] = unaff_r26;
  puVar4[0x21] = unaff_r24;
  iVar6 = EffectTexHeaders;
  puVar4[0x22] = unaff_r25;
  auVar23 = *(undefined1 (*) [16])(puVar4 + 0x18);
  *(float *)(puVar4 + 0x18) = (float)param_1;
  *(float *)((int)puVar4 + 0xc4) = (float)param_1;
  *(float *)(puVar4 + 0x19) = (float)param_1;
  *(float *)((int)puVar4 + 0xcc) = (float)param_1;
  auVar22 = *(undefined1 (*) [16])(puVar4 + 0x18);
  uVar7 = 0xc0;
  *(float *)(puVar4 + 0x18) = (float)param_3;
  *(float *)((int)puVar4 + 0xc4) = (float)param_3;
  *(float *)(puVar4 + 0x19) = (float)param_3;
  *(float *)((int)puVar4 + 0xcc) = (float)param_3;
  puVar4[0x26] = unaff_r29;
  auVar21 = *(undefined1 (*) [16])(puVar4 + 0x18);
  iVar9 = GetEffectTex(0x16);
  idol_draw::SetTextureUnitRegs(HUD_Pass,0,iVar6 + iVar9 * 0x24);
  idol_draw::ResetPassState(HUD_Pass);
  pRVar5 = HUD_Pass;
  *HUD_Pass->command = 0x41948;
  pRVar5->command[1] =
       (RsxCmd)((in_r8 >> 8 & 0xff) << 8) |
       (RsxCmd)((in_r8 >> 0x18 & 0xff) << 0x18) | (RsxCmd)((in_r8 >> 0x10 & 0xff) << 0x10) |
       (RsxCmd)in_r8 & 0xff;
  pRVar5->command = pRVar5->command + 2;
  pRVar5 = HUD_Pass;
  *HUD_Pass->command = 0x400c1714;
  pRVar5->command[1] = 0;
  pRVar5->command[2] = 0;
  pRVar5->command[3] = 0;
  pRVar5->command[4] = NV4097_SET_BEGIN_END_x1;
  pRVar5->command[5] = 6;
  pRVar2 = pRVar5->command;
  *(undefined4 *)(puVar4 + 0xe) = 0;
  *(undefined4 *)((int)puVar4 + 0x74) = 0;
  *(undefined4 *)((int)puVar4 + 0x7c) = 0;
  pRVar5->command = pRVar2 + 6;
  *(float *)(puVar4 + 0xf) = (float)param_4;
  FastEulerToMtx1(uVar8 - 0xd0,uVar8 - 0xe0);
  if (0 < param_6) {
    auVar11 = ZEXT416(0xfffffff0);
    auVar11 = auVar11 | auVar11 << 0x20 | auVar11 << 0x40 | auVar11 << 0x60;
    auVar15 = loadVectorLeftIndexed(0x80,lVar1);
    auVar14 = loadVectorLeftIndexed(0x90,lVar1);
    auVar13 = loadVectorLeftIndexed(0x84,lVar1);
    lVar10 = param_5 + 2;
    auVar12 = loadVectorLeftIndexed(0x94,lVar1);
    do {
      pRVar5 = HUD_Pass;
      auVar18 = loadVectorLeftIndexed(uVar7,lVar10);
      auVar17 = ZEXT416(0xffffffff);
      auVar16 = auVar17 | auVar17 << 0x20 | auVar17 << 0x40 | auVar17 << 0x60;
      auVar18 = vectorShiftRightAlgebraicWord(auVar18,auVar11);
      auVar19 = loadVectorLeftIndexed(uVar7,param_5);
      auVar17 = ZEXT416(0xffffffff);
      auVar20 = auVar17 | auVar17 << 0x20 | auVar17 << 0x40 | auVar17 << 0x60;
      auVar17 = vectorShiftLeftIntegerWord(auVar16,auVar16);
      auVar16 = vectorConvertFromSignedFixedPointWord(auVar18,0);
      auVar18 = vectorShiftRightAlgebraicWord(auVar19,auVar11);
      auVar19 = vectorShiftLeftIntegerWord(auVar20,auVar20);
      auVar18 = vectorConvertFromSignedFixedPointWord(auVar18,0);
      param_6 = param_6 + -1;
      lVar10 = lVar10 + 4;
      param_5 = param_5 + 4;
      *HUD_Pass->command = 0x41904;
      auVar17 = vectorMultiplyAddFloatingPoint(auVar16,auVar14,auVar17);
      auVar16 = vectorMultiplyAddFloatingPoint(auVar16,auVar12,auVar19);
      pRVar5->command[1] = 0;
      auVar17 = vectorMultiplyAddFloatingPoint(auVar18,auVar15,auVar17);
      auVar16 = vectorMultiplyAddFloatingPoint(auVar18,auVar13,auVar16);
      pRVar5->command = pRVar5->command + 2;
      pRVar5 = HUD_Pass;
      auVar17 = vectorMultiplyAddFloatingPoint(auVar17,auVar21,auVar22);
      auVar16 = vectorMultiplyAddFloatingPoint(auVar16,auVar21,auVar23);
      *HUD_Pass->command = NV4097_SET_VERTEX_DATA2F_M_x2;
      auVar17 = auVar17 >> 0x60 & (GPiece<16>)0xffffffff;
      auVar16 = auVar16 >> 0x60 & (GPiece<16>)0xffffffff;
      uVar3 = storeVectorElementWordIndexed
                        (auVar17 | auVar17 << 0x20 | auVar17 << 0x40 | auVar17 << 0x60,4,
                         ZEXT48(pRVar5->command));
      *(undefined4 *)((uint)(pRVar5->command + 1) & 0xfffffffc) = uVar3;
      uVar3 = storeVectorElementWordIndexed
                        (auVar16 | auVar16 << 0x20 | auVar16 << 0x40 | auVar16 << 0x60,8,
                         ZEXT48(pRVar5->command));
      *(undefined4 *)((uint)(pRVar5->command + 2) & 0xfffffffc) = uVar3;
      pRVar5->command = pRVar5->command + 3;
    } while (0 < param_6);
  }
  pRVar5 = HUD_Pass;
  *HUD_Pass->command = NV4097_SET_BEGIN_END_x1;
  pRVar5->command[1] = 0;
  pRVar5->command = pRVar5->command + 2;
  return;
}


// 0x0418d00 (0x84 bytes)
void M688_00418d00
               (double param_1,double param_2,double param_3,double param_4,double param_5)

{
  Sprite_DrawRotated((float)param_1,(float)param_2,param_3,param_4,param_5,0.0,0.0);
  return;
}


// 0x0418d90 (0x228 bytes)
void M688_00418d90(double param_1,double param_2,double param_3,double param_4)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  
  GetEffectTex(0x37);
  dVar2 = 0.0;
  dVar4 = (double)(float)(param_3 * 20.0);
  Sprite_DrawRotated((float)param_1,(float)param_2,dVar4,dVar4,param_4,0.0,0.0);
  dVar3 = 1.5707963705062866;
  dVar1 = (double)FastWrapRot((float)param_4,1.5707964);
  Sprite_DrawRotated((float)param_1,(float)param_2,dVar4,dVar4,dVar1,dVar2,dVar2);
  dVar1 = (double)FastWrapRot((float)dVar1,(float)dVar3);
  Sprite_DrawRotated((float)param_1,(float)param_2,dVar4,dVar4,dVar1,dVar2,dVar2);
  dVar1 = (double)FastWrapRot((float)dVar1,(float)dVar3);
  Sprite_DrawRotated((float)param_1,(float)param_2,dVar4,dVar4,dVar1,dVar2,dVar2);
  return;
}


// 0x0418fc0 (0xe0 bytes)
void M688_00418fc0
               (undefined8 param_1,undefined4 *param_2,int *param_3,int param_4)

{
  undefined4 uVar1;
  int iVar2;
  double dVar3;
  float local_50;
  float local_4c;
  
  ScreenPosFromWorldSpace(&local_50,param_1);
  dVar3 = 0.0625;
  uVar1 = FastDoubleToInt
                    ((double)((local_50 - (float)(longlong)SCREEN_PROJECTION_MAP_X) * 0.0625));
  *param_2 = uVar1;
  iVar2 = FastDoubleToInt
                    ((double)(float)((double)(local_4c - (float)(longlong)SCREEN_PROJECTION_MAP_Y) *
                                    dVar3));
  *param_3 = iVar2 + param_4;
  return;
}


// 0x04190b8 (0x284 bytes)
void M688_004190b8
               (undefined8 param_1,int param_2,float *param_3,int param_4,undefined8 param_5,
               undefined8 param_6,ulonglong param_7)

{
  float fVar1;
  uint uVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  int iVar6;
  int iVar7;
  double dVar8;
  double dVar9;
  GPiece<16> auStack_b0;
  float local_a0;
  float local_9c;
  float local_98;
  float local_90;
  float local_8c;
  float local_88;
  float local_70;
  float local_6c;
  float local_68;
  
  dVar8 = (double)*(float *)(param_2 + 8);
  uVar2 = (int)*(uint *)(param_2 + 4) >> 0x1f;
  iVar6 = (uVar2 >> 1 ^ *(uint *)(param_2 + 4)) - uVar2;
  if ((0x3fc90fdb < iVar6) || (iVar6 < -0x3fc90fdb)) {
    dVar8 = -dVar8;
  }
  FastDiffRots(0x3ff921fb60000000,dVar8);
  FastEulerToMtx1(&local_a0,auStack_b0);
  fVar3 = *(float *)(param_4 + 0x14) - param_3[1];
  fVar4 = *(float *)(param_4 + 0x10) - *param_3;
  fVar1 = *(float *)(param_4 + 0x1c);
  dVar8 = (double)((local_6c * fVar1 + local_9c * fVar4 + local_8c * fVar3) * 0.14285715);
  fVar5 = (local_70 * fVar1 + local_a0 * fVar4 + local_90 * fVar3) * 0.14285715;
  fVar1 = (local_68 * fVar1 + local_98 * fVar4 + local_88 * fVar3) * 0.14285715;
  dVar9 = (double)SQRT(fVar1 * fVar1 + fVar5 * fVar5 + (float)(dVar8 * dVar8));
  iVar6 = FastDoubleToInt();
  iVar7 = FastDoubleToInt(-dVar8);
  if (dVar9 < 46.0) {
    if (38.0 < dVar9) {
      dVar9 = (double)(float)(46.0 - dVar9);
      dVar8 = (double)FastIntToDouble(param_7 >> 0x18 & 0xff);
      FastDoubleToInt((double)((float)(dVar8 * dVar9) * 0.125));
    }
    dVar8 = (double)FastDiffRots
                              ((double)*(float *)(param_4 + 0x48),(double)*(float *)(param_2 + 8));
    M688_004189e4((double)(longlong)(iVar6 + 0x1b0),
                  (double)(longlong)(iVar7 + g_ScreenHeight + -0x50),param_1,-dVar8,param_5,
                  param_6);
  }
  return;
}


// 0x0419368 (0x4f0 bytes)
void M69_00419368(undefined8 param_1,int param_2)

{
  uint uVar1;
  int iVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  GPiece<16> local_110;
  GPiece<16> local_100;
  float local_f0 [4];
  float local_e0 [4];
  float local_d0 [4];
  
  iVar2 = 1;
  dVar3 = 0.019999999552965164;
  dVar4 = 0.009999999776482582;
  dVar5 = 6.0;
  dVar6 = 7.0;
  do {
    GetBonePosition(param_1,iVar2,local_100);
    MB_RandomizeVector
              ((float)((double)*(float *)(param_2 + 0xc4) * dVar3 + dVar3),local_f0);
    MB_RandomizeVector
              ((float)((double)*(float *)(param_2 + 0xc4) * dVar3 + dVar3),local_e0);
    MB_RandomizeVector
              ((float)((double)*(float *)(param_2 + 0xc4) * dVar4 + dVar3),local_d0);
    MB_randRangeFloat((float)dVar5,(float)dVar6);
    SpawnPart_74(param_1,local_f0,local_110,&DAT_00857794,1);
    MB_randRangeFloat((float)dVar5,(float)dVar6);
    SpawnPart_74(param_1,local_e0,local_110,&DAT_008577a4,1);
    MB_randRangeFloat((float)dVar5,(float)dVar6);
    SpawnPart_74(param_1,local_d0,local_110,&DAT_008577b4,1);
    uVar1 = (int)*(uint *)(param_2 + 0xc4) >> 0x1f;
    if (0x3f000000 < (int)((uVar1 >> 1 ^ *(uint *)(param_2 + 0xc4)) - uVar1)) {
      MB_RandomizeVector
                ((float)((double)*(float *)(param_2 + 0xc4) * dVar3 + dVar4),local_f0);
      MB_RandomizeVector
                ((float)((double)*(float *)(param_2 + 0xc4) * dVar3 + dVar4),local_e0);
      MB_RandomizeVector
                ((float)((double)*(float *)(param_2 + 0xc4) * dVar4 + dVar4),local_d0);
      MB_randRangeFloat((float)dVar5,(float)dVar6);
      SpawnPart_74(param_1,local_f0,local_110,&DAT_00857794,1);
      MB_randRangeFloat((float)dVar5,(float)dVar6);
      SpawnPart_74(param_1,local_e0,local_110,&DAT_008577a4,1);
      MB_randRangeFloat((float)dVar5,(float)dVar6);
      SpawnPart_74(param_1,local_d0,local_110,&DAT_008577b4,1);
      MB_randRangeFloat((float)dVar5,(float)dVar6);
      SpawnPart_74(param_1,local_f0,local_110,&DAT_008577c4,1);
      MB_randRangeFloat((float)dVar5,(float)dVar6);
      SpawnPart_74(param_1,local_100,local_110,&DAT_008577d4,1);
    }
    iVar2 = iVar2 + 1;
  } while (iVar2 < 3);
  return;
}


// 0x0419870 (0x254 bytes)
void M688_00419870
               (undefined8 param_1,float *param_2,int param_3,longlong param_4,ulonglong param_5,
               int param_6)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  double dVar8;
  double dVar9;
  GPiece<16> auStack_90;
  float local_80;
  float local_7c;
  float local_78;
  float local_70;
  float local_6c;
  float local_68;
  float local_50;
  float local_4c;
  float local_48;
  
  FastDiffRots(0x3ff921fb60000000);
  FastEulerToMtx1(&local_80,auStack_90);
  fVar2 = *(float *)(param_3 + 0x14) - param_2[1];
  fVar3 = *(float *)(param_3 + 0x10) - *param_2;
  fVar1 = *(float *)(param_3 + 0x1c);
  dVar8 = (double)((local_4c * fVar1 + local_7c * fVar3 + local_6c * fVar2) * 0.071428575);
  fVar4 = (local_50 * fVar1 + local_80 * fVar3 + local_70 * fVar2) * 0.071428575;
  fVar1 = (local_48 * fVar1 + local_78 * fVar3 + local_68 * fVar2) * 0.071428575;
  dVar9 = (double)SQRT(fVar1 * fVar1 + fVar4 * fVar4 + (float)(dVar8 * dVar8));
  iVar6 = FastDoubleToInt();
  iVar7 = FastDoubleToInt(-dVar8);
  if (dVar9 < 46.0) {
    if (38.0 < dVar9) {
      dVar9 = (double)(float)(46.0 - dVar9);
      dVar8 = (double)FastIntToDouble(param_5 >> 0x18 & 0xff);
      FastDoubleToInt((double)((float)(dVar8 * dVar9) * 0.125));
    }
    iVar5 = (int)(param_4 << 4);
    iVar7 = iVar7 + g_ScreenHeight;
    GetEffectTex(param_6 + *(short *)(iVar5 + 0x8577e4) + 0x28);
    Sprite_DrawShapeWrapper
              ((iVar6 - *(short *)(iVar5 + 0x8577f0)) + 0x1b0,
               (iVar7 - *(short *)(iVar5 + 0x8577f2)) + -0x50,*(undefined2 *)(iVar5 + 0x8577ea),
               *(undefined2 *)(iVar5 + 0x8577ec),*(undefined2 *)(iVar5 + 0x8577e6),
               *(undefined2 *)(iVar5 + 0x8577e8),*(undefined2 *)(iVar5 + 0x8577ea),
               *(undefined2 *)(iVar5 + 0x8577ec));
  }
  return;
}


// 0x0419b20 (0x11e0 bytes)
// inlined: FastAtan2 @0x41a2cc, FastAtan2 @0x41a4d4, FastAtan2 @0x41a6b0
int M688_00419b20(int param_1,int param_2,undefined8 param_3,undefined8 param_4)

{
  longlong lVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  ushort uVar6;
  int iVar7;
  int iVar8;
  ulonglong *puVar9;
  undefined4 uVar10;
  ulonglong uVar11;
  int iVar13;
  int iVar14;
  int iVar15;
  int iVar16;
  short sVar17;
  longlong lVar12;
  float *pfVar19;
  longlong lVar18;
  longlong lVar20;
  int in_r10;
  ulonglong unaff_r17;
  ulonglong unaff_r18;
  ulonglong unaff_r19;
  ulonglong unaff_r20;
  ulonglong unaff_r21;
  int iVar21;
  ulonglong unaff_r22;
  int iVar22;
  ulonglong unaff_r23;
  ulonglong unaff_r24;
  int iVar23;
  ulonglong unaff_r25;
  int iVar24;
  ulonglong unaff_r26;
  ulonglong unaff_r27;
  ulonglong unaff_r28;
  ulonglong unaff_r29;
  ulonglong unaff_r30;
  ulonglong unaff_r31;
  ulonglong in_LR;
  longlong lVar25;
  ulonglong uVar26;
  ulonglong uVar27;
  double dVar28;
  double dVar29;
  double dVar30;
  ulonglong in_f25;
  ulonglong in_f26;
  ulonglong in_f27;
  ulonglong in_f28;
  ulonglong in_f29;
  double dVar31;
  double dVar32;
  double dVar33;
  ulonglong in_f30;
  double dVar34;
  double dVar35;
  ulonglong in_f31;
  double dVar36;
  double dVar37;
  undefined8 uVar38;
  float fVar39;
  
  uVar11 = ZEXT48(&stack0x00000000);
  lVar1 = uVar11 - 0x240;
  puVar9 = (ulonglong *)lVar1;
  *puVar9 = uVar11;
  puVar9[0x4a] = in_LR;
  puVar9[0x41] = in_f25;
  puVar9[0x42] = in_f26;
  puVar9[0x43] = in_f27;
  puVar9[0x44] = in_f28;
  puVar9[0x45] = in_f29;
  puVar9[0x46] = in_f30;
  puVar9[0x47] = in_f31;
  puVar9[0x35] = unaff_r20;
  puVar9[0x39] = unaff_r24;
  puVar9[0x38] = unaff_r23;
  puVar9[0x3a] = unaff_r25;
  iVar8 = MobyUpdateChainStart;
  iVar24 = 0;
  *(undefined4 *)(param_2 + 0xe8) = 0;
  puVar9[0x3b] = unaff_r26;
  iVar23 = 0x7fffffff;
  puVar9[0x40] = unaff_r31;
  iVar7 = *(int *)((int)puVar9 + 0x2b4);
  puVar9[0x3f] = unaff_r30;
  puVar9[0x3e] = unaff_r29;
  puVar9[0x3d] = unaff_r28;
  puVar9[0x3c] = unaff_r27;
  puVar9[0x37] = unaff_r22;
  puVar9[0x36] = unaff_r21;
  puVar9[0x34] = unaff_r19;
  puVar9[0x33] = unaff_r18;
  puVar9[0x32] = unaff_r17;
  if (iVar8 != 0) {
    iVar24 = 0;
    do {
      uVar6 = *(ushort *)(iVar8 + 0x34);
      if ((((((uVar6 & 0x1000) != 0) && ((uVar6 & 1) == 0)) && ((uVar6 & 2) == 0)) &&
          ((*(char *)(iVar8 + 0x31) != '\0' && (*(int *)(iVar8 + 0x24) != 0)))) &&
         (*(short *)(*(int *)(iVar8 + 0x24) + 0x46) == 5)) {
        ScreenPosFromWorldSpace(uVar11 - 0x1a0,iVar8 + 0x10);
        puVar9[0x2f] = (longlong)SCREEN_PROJECTION_MAP_X;
        dVar36 = 0.0625;
        iVar13 = FastDoubleToInt
                           ((double)((*(float *)(puVar9 + 0x14) - (float)(longlong)puVar9[0x2f]) *
                                    0.0625));
        puVar9[0x2f] = (longlong)SCREEN_PROJECTION_MAP_Y;
        iVar14 = FastDoubleToInt
                           ((double)(float)((double)(*(float *)((int)puVar9 + 0xa4) -
                                                    (float)(longlong)puVar9[0x2f]) * dVar36));
        fVar2 = GameCamera.orientMtx.right.y;
        fVar3 = GameCamera.orientMtx.right.x;
        *(float *)(puVar9 + 0xe) = GameCamera.orientMtx.right.x;
        fVar5 = GameCamera.orientMtx.right.z;
        *(float *)((int)puVar9 + 0x74) = fVar2;
        fVar4 = GameCamera.orientMtx.right.w;
        *(float *)(puVar9 + 0xf) = fVar5;
        *(float *)((int)puVar9 + 0x7c) = fVar4;
        fVar39 = *(float *)(iVar8 + 0xc);
        *(float *)((int)puVar9 + 0x7c) = fVar4;
        fVar39 = fVar39 * 0.00078125;
        iVar22 = iVar13 - *(int *)(param_2 + 0xe0);
        iVar21 = iVar14 - *(int *)(param_2 + 0xe4);
        fVar2 = fVar2 * fVar39;
        fVar5 = fVar5 * fVar39;
        iVar22 = iVar22 * ((iVar22 >> 0x1f & 0xfffffffeU) + 1);
        *(float *)(puVar9 + 0xe) = fVar3 * fVar39;
        *(float *)((int)puVar9 + 0x74) = fVar2;
        *(float *)(puVar9 + 0xf) = fVar5;
        iVar21 = iVar21 * ((iVar21 >> 0x1f & 0xfffffffeU) + 1);
        *(float *)(puVar9 + 0xe) = fVar3 * fVar39 + *(float *)(iVar8 + 0x10);
        *(float *)((int)puVar9 + 0x74) = fVar2 + *(float *)(iVar8 + 0x14);
        *(float *)(puVar9 + 0xf) = fVar5 + *(float *)(iVar8 + 0x18);
        ScreenPosFromWorldSpace(uVar11 - 0x1b0,uVar11 - 0x1d0);
        puVar9[0x2f] = (longlong)SCREEN_PROJECTION_MAP_X;
        iVar15 = FastDoubleToInt
                           ((double)(float)((double)(*(float *)(puVar9 + 0x12) -
                                                    (float)(longlong)puVar9[0x2f]) * dVar36));
        puVar9[0x2f] = (longlong)SCREEN_PROJECTION_MAP_Y;
        iVar16 = FastDoubleToInt
                           ((double)(float)((double)(*(float *)((int)puVar9 + 0x94) -
                                                    (float)(longlong)puVar9[0x2f]) * dVar36));
        dVar36 = (double)FastIntToDouble
                                   ((iVar15 - iVar13) * (iVar15 - iVar13) +
                                    (iVar16 - iVar14) * (iVar16 - iVar14));
        iVar13 = FastDoubleToInt((double)(float)SQRT(dVar36));
        if ((iVar22 < iVar13 + 0x1c) && (iVar21 < iVar13 + 0x1c)) {
          if (in_r10 == 0) {
            if ((iVar8 != iVar7) && (iVar13 = iVar22 * iVar22 + iVar21 * iVar21, iVar13 < iVar23)) {
              iVar24 = iVar8;
              iVar23 = iVar13;
            }
          }
          else if (iVar8 == in_r10) {
            iVar24 = iVar8;
            iVar23 = 0;
          }
        }
      }
      sVar17 = *(short *)(iVar8 + 0xa6);
      if (sVar17 < 0x191) {
        if (sVar17 < 0x184) {
          if (sVar17 == 0xe4) {
LAB_00419f50:
            M688_00419870(param_4,param_3,iVar8,2,0x75808080,*(undefined4 *)(param_2 + 0x104));
          }
          else if (sVar17 == 0xe0) {
LAB_00419f28:
            M688_00419870(param_4,param_3,iVar8,2,0x75808080,*(undefined4 *)(param_2 + 0x104));
          }
          else if (sVar17 == 0x6f) {
LAB_0041aa58:
            if ((*(ushort *)(iVar8 + 0x34) & 1) == 0) {
              ScreenPosFromWorldSpace(uVar11 - 0x1c0,iVar8 + 0x10);
              if (*(char *)(iVar8 + 0x31) != '\0') {
                puVar9[0x2f] = (longlong)SCREEN_PROJECTION_MAP_X;
                uVar27 = puVar9[0x2f];
                puVar9[0x2f] = (longlong)SCREEN_PROJECTION_MAP_Y;
                uVar38 = 0x3ff0000000000000;
                dVar35 = (double)((*(float *)(puVar9 + 0x10) - (float)(longlong)uVar27) * 0.0625);
                dVar36 = (double)(*(float *)((int)puVar9 + 0x84) - (float)(longlong)puVar9[0x2f]);
                dVar33 = (double)(float)(dVar36 * 0.0625);
                dVar36 = (double)FastIntToDouble
                                           (0x3fb0000000000000,dVar36,worldUpdateTime);
                fVar39 = MB_WrapRot((float)(dVar36 * 0.05000000074505806));
                M688_004189e4(dVar35,dVar33,uVar38,-(double)fVar39,&DAT_0085771c,0x1e);
              }
              M688_00419870(param_4,param_3,iVar8,1,0x75808080,*(undefined4 *)(param_2 + 0x104));
            }
          }
          else if (sVar17 == 0x53) {
            M688_00419870(param_4,param_3,iVar8,1,0x75007080,*(undefined4 *)(param_2 + 0x104));
          }
          else if (sVar17 == 0x52) {
            M688_00419870(param_4,param_3,iVar8,1,0x75004080,*(undefined4 *)(param_2 + 0x104));
          }
        }
        else if ((sVar17 < 0x18d) && (sVar17 < 0x185)) goto LAB_00419fc8;
      }
      else if (sVar17 < 0x4bf) {
        if (sVar17 < 0x192) {
LAB_00419fc8:
          ScreenPosFromWorldSpace(uVar11 - 0x1c0,iVar8 + 0x10);
          sVar17 = *(short *)(iVar8 + 0xa6);
          if ((sVar17 != 0x184) && (*(char *)(iVar8 + 0x31) != '\0')) {
            puVar9[0x2f] = (longlong)SCREEN_PROJECTION_MAP_X;
            dVar37 = 0.0625;
            uVar27 = puVar9[0x2f];
            puVar9[0x2f] = (longlong)SCREEN_PROJECTION_MAP_Y;
            uVar38 = 0x3ff0000000000000;
            dVar31 = (double)((*(float *)(puVar9 + 0x10) - (float)(longlong)uVar27) * 0.0625);
            dVar36 = (double)(*(float *)((int)puVar9 + 0x84) - (float)(longlong)puVar9[0x2f]);
            dVar35 = (double)(float)(dVar36 * 0.0625);
            dVar36 = (double)FastIntToDouble(dVar36,worldUpdateTime);
            dVar33 = 0.05000000074505806;
            fVar39 = MB_WrapRot((float)(dVar36 * 0.05000000074505806));
            M688_004189e4(dVar31,dVar35,uVar38,(double)fVar39,&DAT_0085771c,0x1e);
            uVar27 = (ulonglong)SCREEN_PROJECTION_MAP_Y;
            puVar9[0x2f] = (longlong)SCREEN_PROJECTION_MAP_X;
            uVar10 = worldUpdateTime;
            uVar26 = puVar9[0x2f];
            puVar9[0x2f] = uVar27;
            uVar38 = 0x3ff4ccccc0000000;
            dVar35 = (double)(float)((double)(*(float *)(puVar9 + 0x10) - (float)(longlong)uVar26) *
                                    dVar37);
            dVar36 = (double)(*(float *)((int)puVar9 + 0x84) - (float)(longlong)puVar9[0x2f]);
            dVar31 = (double)(float)(dVar36 * dVar37);
            dVar36 = (double)FastIntToDouble(dVar36,uVar10);
            fVar39 = MB_WrapRot((float)(dVar36 * dVar33));
            M688_004189e4(dVar35,dVar31,uVar38,-(double)fVar39,&DAT_0085771c,0x1e);
            sVar17 = *(short *)(iVar8 + 0xa6);
          }
          if (sVar17 != 0x191) {
            if (*(char *)(iVar8 + 0x31) == '\0') {
              FastNormalizeRMtx4(uVar11 - 400,0x951710);
              fVar39 = *(float *)(iVar8 + 0x14) - g_heroPosition.y;
              fVar2 = *(float *)(iVar8 + 0x10) - g_heroPosition.x;
              fVar5 = *(float *)(iVar8 + 0x18) - g_heroPosition.z;
              dVar31 = 0.0;
              fVar3 = -(*(float *)(puVar9 + 0x1d) * *(float *)(iVar8 + 0x1c) +
                       *(float *)(puVar9 + 0x1b) * fVar5 +
                       *(float *)(puVar9 + 0x17) * fVar2 + *(float *)(puVar9 + 0x19) * fVar39);
              fVar39 = -(*(float *)((int)puVar9 + 0xe4) * *(float *)(iVar8 + 0x1c) +
                        *(float *)((int)puVar9 + 0xd4) * fVar5 +
                        *(float *)((int)puVar9 + 0xb4) * fVar2 +
                        *(float *)((int)puVar9 + 0xc4) * fVar39);
              fVar2 = SQRT(fVar39 * fVar39 + fVar3 * fVar3);
              dVar35 = (double)(fVar3 * (160.0 / fVar2));
              dVar33 = (double)(fVar39 * (160.0 / fVar2));
              dVar36 = dVar31;
              if (0.0 - fVar2 < 0.0) {
                dVar36 = dVar35;
              }
              dVar37 = dVar31;
              if (0.0 - fVar2 < 0.0) {
                dVar37 = dVar33;
              }
              if (fVar2 - 0.0 < 0.0) {
                dVar36 = dVar35;
              }
              if (fVar2 - 0.0 < 0.0) {
                dVar37 = dVar33;
              }
              *(float *)(puVar9 + 0x21) = (float)dVar37;
              *(float *)((int)puVar9 + 0x10c) = (float)dVar36;
              *(float *)(puVar9 + 0x22) = (float)(ABS(dVar37) - ABS(dVar36));
              dVar35 = 0.7853981852531433;
              uVar27 = (ulonglong)(*(uint *)(puVar9 + 0x21) >> 0x1c) & 8 |
                       (ulonglong)(*(uint *)(puVar9 + 0x22) >> 0x1e) & 2 |
                       (ulonglong)(*(uint *)((int)puVar9 + 0x10c) >> 0x1d) & 4;
              fVar39 = *(float *)(&g_atanQuadrantTable + (int)(uVar27 << 2));
              dVar33 = ABS((double)*(float *)(puVar9 + 0x21));
              if (*(float *)(puVar9 + 0x22) - 0.0 < 0.0) {
                dVar33 = ABS(dVar36);
              }
              fVar2 = *(float *)(((uint)(uVar27 << 2) | 0x735900) + 4);
              dVar29 = ABS((double)*(float *)((int)puVar9 + 0x10c));
              if (*(float *)(puVar9 + 0x22) - 0.0 < 0.0) {
                dVar29 = ABS(dVar37);
              }
              dVar32 = dVar31;
              if (0.0 < dVar33) {
                lVar12 = uVar11 - 0x230;
                lVar20 = uVar11 - 0xdc;
                lVar18 = uVar11 - 0xec;
                lVar25 = 2;
                fVar5 = (float)(dVar29 - dVar33) / (float)(dVar29 + dVar33);
                fVar3 = fVar5 * fVar5;
                *(float *)(puVar9 + 0x2c) = fVar5;
                *(float *)(puVar9 + 0x2b) = fVar5;
                *(float *)((int)puVar9 + 0x15c) = fVar5;
                *(float *)((int)puVar9 + 0x154) = fVar5;
                fVar5 = fVar3 * fVar3;
                *(float *)(puVar9 + 0x2b) = *(float *)(puVar9 + 0x2b) * fVar3;
                *(float *)((int)puVar9 + 0x15c) = *(float *)((int)puVar9 + 0x15c) * fVar5;
                *(float *)(puVar9 + 0x2c) = *(float *)(puVar9 + 0x2c) * fVar5 * fVar3;
                do {
                  *(float *)((int)lVar12 + 0x154) = *(float *)((int)lVar12 + 0x144) * fVar5 * fVar5;
                  iVar13 = (int)lVar18;
                  lVar18 = lVar18 + 8;
                  lVar12 = lVar12 + 8;
                  *(float *)((int)lVar20 + 4) = *(float *)(iVar13 + 4) * fVar5 * fVar5;
                  lVar20 = lVar20 + 8;
                  lVar25 = lVar25 + -1;
                } while (lVar25 != 0);
                lVar25 = 4;
                lVar20 = uVar11 - 0xec;
                pfVar19 = (float *)&DAT_007358e0;
                lVar12 = lVar1;
                lVar18 = lVar20;
                do {
                  fVar5 = *pfVar19;
                  fVar3 = pfVar19[1];
                  pfVar19 = pfVar19 + 2;
                  *(float *)((int)lVar12 + 0x154) = *(float *)((int)lVar12 + 0x154) * fVar5;
                  lVar12 = lVar12 + 8;
                  *(float *)((int)lVar18 + 4) = *(float *)((int)lVar18 + 4) * fVar3;
                  lVar18 = lVar18 + 8;
                  lVar25 = lVar25 + -1;
                } while (lVar25 != 0);
                lVar18 = 2;
                lVar12 = lVar1;
                dVar33 = dVar31;
                do {
                  iVar13 = (int)lVar12;
                  iVar14 = (int)lVar20;
                  lVar12 = lVar12 + 0x10;
                  lVar20 = lVar20 + 0x10;
                  dVar33 = (double)((float)(dVar33 + (double)*(float *)(iVar13 + 0x154)) +
                                    *(float *)(iVar14 + 4) + *(float *)(iVar14 + 8) +
                                   *(float *)(iVar14 + 0xc));
                  lVar18 = lVar18 + -1;
                } while (lVar18 != 0);
                dVar32 = (double)((float)(dVar33 + 0.7853981852531433) * fVar39 + fVar2);
              }
              uVar38 = FastWrapRot((float)dVar32,1.5707964);
              fVar2 = *(float *)(iVar8 + 0x10) - *(float *)(param_1 + 0x10);
              fVar5 = *(float *)(param_1 + 0x10) - *(float *)(iVar8 + 0x10);
              fVar3 = *(float *)(iVar8 + 0x14) - *(float *)(param_1 + 0x14);
              fVar4 = *(float *)(param_1 + 0x14) - *(float *)(iVar8 + 0x14);
              fVar39 = *(float *)(iVar8 + 0x18);
              dVar29 = ABS((double)fVar2);
              dVar33 = ABS((double)fVar3);
              *(float *)((int)puVar9 + 0xfc) = fVar2;
              *(float *)(puVar9 + 0x20) = fVar3;
              fVar39 = *(float *)(param_1 + 0x18) - fVar39;
              dVar34 = (double)(float)(dVar37 + 256.0);
              *(float *)((int)puVar9 + 0x104) = (float)(dVar29 - dVar33);
              uVar27 = (ulonglong)(*(uint *)((int)puVar9 + 0xfc) >> 0x1c) & 8 |
                       (ulonglong)(*(uint *)((int)puVar9 + 0x104) >> 0x1e) & 2 |
                       (ulonglong)(*(uint *)(puVar9 + 0x20) >> 0x1d) & 4;
              fVar2 = *(float *)(param_2 + 0x38);
              dVar32 = (double)(float)(dVar36 + 208.0);
              dVar37 = (double)SQRT(fVar39 * fVar39 + fVar5 * fVar5 + fVar4 * fVar4);
              fVar5 = *(float *)(&g_atanQuadrantTable + (int)(uVar27 << 2));
              fVar39 = *(float *)(((uint)(uVar27 << 2) | 0x735900) + 4);
              dVar36 = ABS((double)*(float *)((int)puVar9 + 0xfc));
              if ((double)*(float *)((int)puVar9 + 0x104) - dVar31 < 0.0) {
                dVar36 = dVar33;
              }
              dVar33 = ABS((double)*(float *)(puVar9 + 0x20));
              if ((double)*(float *)((int)puVar9 + 0x104) - dVar31 < 0.0) {
                dVar33 = dVar29;
              }
              dVar29 = dVar31;
              if (dVar31 < dVar36) {
                lVar12 = uVar11 - 0x230;
                lVar20 = uVar11 - 0xfc;
                lVar18 = uVar11 - 0x10c;
                lVar25 = 2;
                fVar3 = (float)(dVar33 - dVar36) / (float)(dVar33 + dVar36);
                fVar4 = fVar3 * fVar3;
                *(float *)(puVar9 + 0x28) = fVar3;
                *(float *)(puVar9 + 0x27) = fVar3;
                *(float *)((int)puVar9 + 0x13c) = fVar3;
                *(float *)((int)puVar9 + 0x134) = fVar3;
                fVar3 = fVar4 * fVar4;
                *(float *)(puVar9 + 0x27) = *(float *)(puVar9 + 0x27) * fVar4;
                *(float *)((int)puVar9 + 0x13c) = *(float *)((int)puVar9 + 0x13c) * fVar3;
                *(float *)(puVar9 + 0x28) = *(float *)(puVar9 + 0x28) * fVar3 * fVar4;
                do {
                  *(float *)((int)lVar12 + 0x134) = *(float *)((int)lVar12 + 0x124) * fVar3 * fVar3;
                  iVar13 = (int)lVar18;
                  lVar18 = lVar18 + 8;
                  lVar12 = lVar12 + 8;
                  *(float *)((int)lVar20 + 4) = *(float *)(iVar13 + 4) * fVar3 * fVar3;
                  lVar20 = lVar20 + 8;
                  lVar25 = lVar25 + -1;
                } while (lVar25 != 0);
                lVar25 = 4;
                lVar20 = uVar11 - 0x10c;
                pfVar19 = (float *)&DAT_007358e0;
                lVar12 = lVar1;
                lVar18 = lVar20;
                do {
                  fVar3 = *pfVar19;
                  fVar4 = pfVar19[1];
                  pfVar19 = pfVar19 + 2;
                  *(float *)((int)lVar12 + 0x134) = *(float *)((int)lVar12 + 0x134) * fVar3;
                  lVar12 = lVar12 + 8;
                  *(float *)((int)lVar18 + 4) = *(float *)((int)lVar18 + 4) * fVar4;
                  lVar18 = lVar18 + 8;
                  lVar25 = lVar25 + -1;
                } while (lVar25 != 0);
                lVar18 = 2;
                lVar12 = lVar1;
                dVar36 = dVar31;
                do {
                  iVar13 = (int)lVar12;
                  iVar14 = (int)lVar20;
                  lVar12 = lVar12 + 0x10;
                  lVar20 = lVar20 + 0x10;
                  dVar36 = (double)((float)(dVar36 + (double)*(float *)(iVar13 + 0x134)) +
                                    *(float *)(iVar14 + 4) + *(float *)(iVar14 + 8) +
                                   *(float *)(iVar14 + 0xc));
                  lVar18 = lVar18 + -1;
                } while (lVar18 != 0);
                dVar29 = (double)((float)(dVar36 + dVar35) * fVar5 + fVar39);
              }
              dVar33 = (double)FastDiffRots(dVar29,(double)fVar2);
              fVar39 = *(float *)(param_1 + 0x14) - *(float *)(iVar8 + 0x14);
              fVar2 = *(float *)(param_1 + 0x10) - *(float *)(iVar8 + 0x10);
              dVar33 = ABS(dVar33);
              fVar5 = *(float *)(iVar8 + 0x18) - *(float *)(param_1 + 0x18);
              fVar2 = SQRT(fVar2 * fVar2 + fVar39 * fVar39);
              fVar39 = *(float *)(param_2 + 0x34);
              *(float *)((int)puVar9 + 0xf4) = fVar5;
              dVar28 = ABS((double)fVar5);
              dVar29 = ABS((double)fVar2);
              *(float *)(puVar9 + 0x1e) = fVar2;
              *(float *)(puVar9 + 0x1f) = (float)(dVar29 - dVar28);
              uVar27 = (ulonglong)(*(uint *)(puVar9 + 0x1e) >> 0x1c) & 8 |
                       (ulonglong)(*(uint *)(puVar9 + 0x1f) >> 0x1e) & 2 |
                       (ulonglong)(*(uint *)((int)puVar9 + 0xf4) >> 0x1d) & 4;
              dVar36 = ABS((double)*(float *)(puVar9 + 0x1e));
              if ((double)*(float *)(puVar9 + 0x1f) - dVar31 < 0.0) {
                dVar36 = dVar28;
              }
              fVar2 = *(float *)(&g_atanQuadrantTable + (int)(uVar27 << 2));
              dVar28 = ABS((double)*(float *)((int)puVar9 + 0xf4));
              if ((double)*(float *)(puVar9 + 0x1f) - dVar31 < 0.0) {
                dVar28 = dVar29;
              }
              fVar5 = *(float *)(((uint)(uVar27 << 2) | 0x735900) + 4);
              if (dVar31 < dVar36) {
                lVar12 = uVar11 - 0x230;
                lVar18 = uVar11 - 300;
                lVar20 = uVar11 - 0x11c;
                lVar25 = 2;
                fVar3 = (float)(dVar28 - dVar36) / (float)(dVar28 + dVar36);
                fVar4 = fVar3 * fVar3;
                *(float *)(puVar9 + 0x24) = fVar3;
                *(float *)(puVar9 + 0x23) = fVar3;
                *(float *)((int)puVar9 + 0x11c) = fVar3;
                *(float *)((int)puVar9 + 0x114) = fVar3;
                fVar3 = fVar4 * fVar4;
                *(float *)(puVar9 + 0x23) = *(float *)(puVar9 + 0x23) * fVar4;
                *(float *)((int)puVar9 + 0x11c) = *(float *)((int)puVar9 + 0x11c) * fVar3;
                *(float *)(puVar9 + 0x24) = *(float *)(puVar9 + 0x24) * fVar3 * fVar4;
                do {
                  *(float *)((int)lVar12 + 0x114) = *(float *)((int)lVar12 + 0x104) * fVar3 * fVar3;
                  iVar13 = (int)lVar18;
                  lVar12 = lVar12 + 8;
                  lVar18 = lVar18 + 8;
                  *(float *)((int)lVar20 + 4) = *(float *)(iVar13 + 4) * fVar3 * fVar3;
                  lVar20 = lVar20 + 8;
                  lVar25 = lVar25 + -1;
                } while (lVar25 != 0);
                lVar25 = 4;
                lVar20 = uVar11 - 300;
                pfVar19 = (float *)&DAT_007358e0;
                lVar12 = lVar1;
                lVar18 = lVar20;
                do {
                  fVar3 = *pfVar19;
                  fVar4 = pfVar19[1];
                  pfVar19 = pfVar19 + 2;
                  *(float *)((int)lVar12 + 0x114) = *(float *)((int)lVar12 + 0x114) * fVar3;
                  lVar12 = lVar12 + 8;
                  *(float *)((int)lVar18 + 4) = *(float *)((int)lVar18 + 4) * fVar4;
                  lVar18 = lVar18 + 8;
                  lVar25 = lVar25 + -1;
                } while (lVar25 != 0);
                lVar18 = 2;
                lVar12 = lVar1;
                do {
                  iVar13 = (int)lVar12;
                  iVar14 = (int)lVar20;
                  lVar12 = lVar12 + 0x10;
                  lVar20 = lVar20 + 0x10;
                  dVar31 = (double)((float)(dVar31 + (double)*(float *)(iVar13 + 0x114)) +
                                    *(float *)(iVar14 + 4) + *(float *)(iVar14 + 8) +
                                   *(float *)(iVar14 + 0xc));
                  lVar18 = lVar18 + -1;
                } while (lVar18 != 0);
                dVar31 = (double)((float)(dVar31 + dVar35) * fVar2 + fVar5);
              }
              dVar31 = (double)FastDiffRots(-dVar31,(double)fVar39);
              dVar31 = ABS(dVar31);
              dVar29 = (double)FastWrapRot
                                         (*(float *)(param_2 + 0x114),
                                          0.1 / (SQRT((float)(dVar33 * dVar33 +
                                                             (double)(float)(dVar31 * dVar31))) *
                                                0.31830987));
              dVar36 = (double)(float)(3.141592502593994 - dVar29);
              if (dVar29 - (double)(float)(3.141592502593994 - dVar29) < 0.0) {
                dVar36 = dVar29;
              }
              dVar28 = (double)(float)(-3.141592502593994 - dVar29);
              if ((double)(float)(-3.141592502593994 - dVar29) - dVar36 < 0.0) {
                dVar28 = dVar36;
              }
              *(float *)(param_2 + 0x114) = (float)dVar29;
              dVar36 = (double)(float)(dVar28 * dVar28);
              dVar30 = (double)(float)(dVar36 * (double)(float)(dVar36 * dVar28));
              dVar29 = (double)(float)(dVar36 * dVar30);
              uVar27 = FastDoubleToInt
                                 ((double)(((float)(dVar36 * dVar29) * 2.601887e-06 +
                                            (float)(dVar29 * -0.0001980741071747616 +
                                                   (double)(float)(dVar30 * 0.008333025500178337 +
                                                                  (double)(float)((double)(float)(
                                                  dVar36 * dVar28) * -0.16666656732559204 + dVar28))
                                                  ) + 1.4) * 53.0));
              if ((dVar35 <= dVar33) || (dVar35 <= dVar31)) {
                M688_004189e4(dVar34,dVar32,(double)((float)(240.0 / dVar37) + 1.5),uVar38,
                              &DAT_00857634,3,(uVar27 & 0xff) << 0x18 | 0x8000);
              }
              else {
                puVar9[0x2f] = (longlong)SCREEN_PROJECTION_MAP_X;
                dVar37 = 0.0625;
                uVar27 = puVar9[0x2f];
                puVar9[0x2f] = (longlong)SCREEN_PROJECTION_MAP_Y;
                uVar38 = 0x3ff0000000000000;
                dVar31 = (double)((*(float *)(puVar9 + 0x10) - (float)(longlong)uVar27) * 0.0625);
                dVar36 = (double)(*(float *)((int)puVar9 + 0x84) - (float)(longlong)puVar9[0x2f]);
                dVar35 = (double)(float)(dVar36 * 0.0625);
                dVar36 = (double)FastIntToDouble(dVar36,worldUpdateTime);
                dVar33 = 0.05000000074505806;
                fVar39 = MB_WrapRot((float)(dVar36 * 0.05000000074505806));
                M688_004189e4(dVar31,dVar35,uVar38,(double)fVar39,&DAT_0085771c,0x1e);
                uVar27 = (ulonglong)SCREEN_PROJECTION_MAP_Y;
                puVar9[0x2f] = (longlong)SCREEN_PROJECTION_MAP_X;
                uVar10 = worldUpdateTime;
                uVar26 = puVar9[0x2f];
                puVar9[0x2f] = uVar27;
                uVar38 = 0x3ff4ccccc0000000;
                dVar35 = (double)(float)((double)(*(float *)(puVar9 + 0x10) -
                                                 (float)(longlong)uVar26) * dVar37);
                dVar36 = (double)(*(float *)((int)puVar9 + 0x84) - (float)(longlong)puVar9[0x2f]);
                dVar31 = (double)(float)(dVar36 * dVar37);
                dVar36 = (double)FastIntToDouble(dVar36,uVar10);
                fVar39 = MB_WrapRot((float)(dVar36 * dVar33));
                M688_004189e4(dVar35,dVar31,uVar38,-(double)fVar39,&DAT_0085771c,0x1e);
              }
            }
            M688_00419870(param_4,param_3,iVar8,0,0x75808080,*(undefined4 *)(param_2 + 0x104));
            sVar17 = *(short *)(iVar8 + 0xa6);
          }
          if (sVar17 != 0x191) {
            *(int *)(param_2 + 0xe8) = *(int *)(param_2 + 0xe8) + 1;
          }
        }
        else if (sVar17 < 0x3ec) {
          if (0x3ea < sVar17) goto LAB_00419fc8;
        }
        else if (0x4bd < sVar17) goto LAB_0041aa58;
      }
      else if (sVar17 < 0x4c5) {
        if (sVar17 < 0x4c0) {
          if (((*(ushort *)(iVar8 + 0x34) & 1) == 0) && (1 < *(byte *)(iVar8 + 0x20))) {
            ScreenPosFromWorldSpace(uVar11 - 0x1c0,iVar8 + 0x10);
            if (*(char *)(iVar8 + 0x31) != '\0') {
              puVar9[0x2f] = (longlong)SCREEN_PROJECTION_MAP_X;
              uVar27 = puVar9[0x2f];
              puVar9[0x2f] = (longlong)SCREEN_PROJECTION_MAP_Y;
              uVar38 = 0x3ff0000000000000;
              dVar35 = (double)((*(float *)(puVar9 + 0x10) - (float)(longlong)uVar27) * 0.0625);
              dVar36 = (double)(*(float *)((int)puVar9 + 0x84) - (float)(longlong)puVar9[0x2f]);
              dVar33 = (double)(float)(dVar36 * 0.0625);
              dVar36 = (double)FastIntToDouble(0x3fb0000000000000,dVar36,worldUpdateTime);
              fVar39 = MB_WrapRot((float)(dVar36 * 0.05000000074505806));
              M688_004189e4(dVar35,dVar33,uVar38,-(double)fVar39,&DAT_0085771c,0x1e);
            }
            M688_00419870(param_4,param_3,iVar8,1,0x75808080,*(undefined4 *)(param_2 + 0x104));
          }
        }
        else if (sVar17 < 0x4c3) {
          if (0x4c1 < sVar17) goto LAB_00419f28;
        }
        else if (0x4c3 < sVar17) goto LAB_00419f50;
      }
      else if ((sVar17 < 0x534) && (sVar17 == 0x504)) goto LAB_00419fc8;
      iVar8 = *(int *)(iVar8 + 0x28);
    } while (iVar8 != 0);
  }
  return iVar24;
}


// 0x041ad10 (0x2b4 bytes)
void M688_0041ad10(undefined8 param_1,int param_2)

{
  short sVar1;
  int iVar2;
  int iVar3;
  GPiece<32> local_40;
  
  if (g_gameMode != GAME_MODE_FREEZE && g_gameMode != GAME_MODE_PAUSE) {
    FastDecTimerS32(param_2 + 0x8c);
  }
  if (((((*(int *)(param_2 + 0x8c) == 0) || (iVar3 = *(int *)(param_2 + 0x88), iVar3 == 0)) ||
       ((int)*(short *)(iVar3 + 0xa6) != *(int *)(param_2 + 0x124))) ||
      ((*(char *)(iVar3 + 0x20) == -3 || *(char *)(iVar3 + 0x20) == -2 ||
       (*(char *)(iVar3 + 0x31) == '\0')))) ||
     (((g_Pad.repeat & 0x2000) != 0 || (DAT_0096b2d6 == '\0')))) {
    *(undefined4 *)(param_2 + 0xec) = 0;
    *(undefined4 *)(param_2 + 0x88) = 0;
    *(undefined4 *)(param_2 + 0x124) = 0xffffffff;
  }
  iVar2 = M688_00419b20(0x3fc921fb60000000,0x3fc921fb60000000,0x406fe00000000000,param_1,param_2,
                        0x951500,local_40);
  iVar3 = *(int *)(param_2 + 0x88);
  if (((iVar2 != iVar3) && (500 < *(int *)(param_2 + 0x8c))) || (DAT_0096b2d6 == '\0')) {
    *(undefined4 *)(param_2 + 0xec) = 0;
    *(undefined4 *)(param_2 + 0x88) = 0;
    iVar3 = 0;
    *(undefined4 *)(param_2 + 0x124) = 0xffffffff;
  }
  if ((iVar2 != 0) &&
     (((iVar3 == 0 || ((*(short *)(iVar3 + 0xa6) != 0x3eb && (*(short *)(iVar2 + 0xa6) == 0x3eb))))
      && (DAT_0096b2d6 != '\0')))) {
    *(int *)(param_2 + 0x88) = iVar2;
    sVar1 = *(short *)(iVar2 + 0xa6);
    *(undefined4 *)(param_2 + 0x8c) = *(undefined4 *)(param_2 + 0x138);
    *(int *)(param_2 + 0x124) = (int)sVar1;
    iVar3 = iVar2;
  }
  if (iVar2 == iVar3) {
    *(undefined4 *)(param_2 + 0x118) = 0;
  }
  else {
    iVar2 = *(int *)(param_2 + 0x118) + 1;
    *(int *)(param_2 + 0x118) = iVar2;
    if ((int)(animationSpeed * 60.5) < iVar2) {
      *(undefined4 *)(param_2 + 0xec) = 0;
      *(undefined4 *)(param_2 + 0x88) = 0;
      *(undefined4 *)(param_2 + 0x124) = 0xffffffff;
      return;
    }
  }
  if (((iVar3 != 0) && (*(int *)(param_2 + 0x84) == 0)) &&
     (((int)*(short *)(iVar3 + 0xa6) != *(int *)(param_2 + 0x124) ||
      ((*(char *)(iVar3 + 0x20) == -2 || (*(char *)(iVar3 + 0x20) == -3)))))) {
    *(undefined4 *)(param_2 + 0x88) = 0;
    *(undefined4 *)(param_2 + 0x124) = 0xffffffff;
  }
  return;
}


// 0x041b008 (0x794 bytes)
// strings: 006571a4: 'minHealth'

void M688_0041b008(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  longlong lVar8;
  longlong lVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  float fVar15;
  float local_90;
  float local_8c;
  GPiece<24> local_80;
  
  iVar1 = *(int *)(param_1 + 0x78);
  M688_0041ad10(param_1,iVar1);
  if (*(uint *)(iVar1 + 0x88) != 0) {
    ScreenPosFromWorldSpace(&local_90,(ulonglong)*(uint *)(iVar1 + 0x88) + 0x10);
    dVar12 = 0.0625;
    uVar3 = FastDoubleToInt
                      ((double)((local_90 - (float)(longlong)SCREEN_PROJECTION_MAP_X) * 0.0625));
    uVar4 = FastDoubleToInt
                      ((double)(float)((double)(local_8c - (float)(longlong)SCREEN_PROJECTION_MAP_Y)
                                      * dVar12));
    if ((int)(animationSpeed * 500.5) < *(int *)(iVar1 + 0x8c)) {
      dVar12 = (double)FastIntToDouble
                                 (*(int *)(iVar1 + 0x8c) - (int)(animationSpeed * 500.5));
      dVar10 = (double)FastIntToDouble((int)(animationSpeed * 75.5));
      dVar13 = (double)((float)(dVar12 / dVar10) * 5.0 + 1.0);
      dVar12 = (double)((1.0 - (float)(dVar12 / dVar10)) * 2.0);
      dVar10 = 1.0 - dVar12;
      if (dVar10 < 0.0) {
        dVar12 = 1.0;
      }
      FastDoubleToInt
                ((double)(float)(dVar12 * 96.0),0x3ff0000000000000,dVar10,0x4014000000000000);
      uVar3 = FastIntToDouble(uVar3);
      uVar4 = FastIntToDouble(uVar4);
      dVar12 = (double)FastIntToDouble(worldUpdateTime);
      fVar15 = MB_WrapRot((float)(dVar12 * 0.03333333507180214));
      M688_00418d90(uVar3,uVar4,dVar13,(double)fVar15);
      *(undefined4 *)(iVar1 + 0xec) = 0;
    }
    else {
      uVar3 = FastIntToDouble(uVar3);
      uVar4 = FastIntToDouble(uVar4);
      M688_00418d90(uVar3,uVar4,0x3ff0000000000000,0);
      *(undefined4 *)(iVar1 + 0xec) = *(undefined4 *)(iVar1 + 0x88);
    }
  }
  iVar5 = 0;
  lVar8 = 0x40;
  lVar9 = 0x18;
  if (DAT_0096b2d7 != 0) {
    uVar3 = 0x3fe0000000000000;
    do {
      if (iVar5 < (int)(uint)DAT_0096b2d6) {
        M688_0041873c((double)(longlong)(int)lVar9,(double)(longlong)(int)lVar8,uVar3,&DAT_00857640,
                      0x19);
      }
      else {
        M688_0041873c((double)(longlong)(int)lVar9,(double)(longlong)(int)lVar8,uVar3,&DAT_00857640,
                      0x19);
      }
      iVar7 = ((int)(uint)DAT_0096b2d7 >> 1) - iVar5;
      iVar6 = ((int)(uint)DAT_0096b2d7 >> 1) - iVar5;
      iVar5 = iVar5 + 1;
      lVar8 = lVar8 + (ZERO_MASK(iVar7) & 0x2eU - lVar8) + 0x12;
      lVar9 = lVar9 + (ZERO_MASK(iVar6) & 0x1eU);
    } while (iVar5 < (int)(uint)DAT_0096b2d7);
  }
  iVar5 = *(int *)(iVar1 + 0xe0);
  iVar6 = *(int *)(iVar1 + 0xe4);
  GetEffectTex(0x11);
  dVar14 = 40.0;
  dVar11 = 0.0;
  dVar13 = 0.5;
  dVar10 = (double)(longlong)iVar5;
  dVar12 = (double)(longlong)iVar6;
  Sprite_DrawRotated((float)(longlong)iVar5,(float)(longlong)iVar6,40.0,40.0,0.0,0.5,0.5);
  GetEffectTex(0x12);
  Sprite_DrawRotated((float)dVar10,(float)dVar12,dVar14,dVar14,dVar11,dVar13,dVar13);
  GetEffectTex(8);
  Sprite_DrawRotated((float)dVar10,(float)dVar12,10.0,10.0,dVar11,dVar13,dVar13);
  if (DAT_0096b2dc < DAT_0096b2e0 * 0.1) {
    if ((worldUpdateTime / 0x5a & 1U) != 0) {
      uVar3 = help_msg_string_by_index(STR_WARNING_SHIP_NEEDS_REPAIR);
      FontPrintSmallCenter(0x100,0x186,0x80000080,uVar3,100);
    }
  }
  fVar15 = (DAT_0096b2dc - *(float *)(iVar1 + 0xf0)) * 0.2;
  if (1.0 - ABS(fVar15) < 0.0) {
    fVar15 = fVar15 / ABS(fVar15);
  }
  fVar15 = *(float *)(iVar1 + 0xf0) + fVar15;
  *(float *)(iVar1 + 0xf0) = fVar15;
  iVar5 = FastDoubleToInt((double)((fVar15 * 251.0) / DAT_0096b2e0));
  uVar2 = g_viewMtxPtr;
  iVar5 = iVar5 + 2;
  iVar5 = iVar5 + ((uint)(0xfd - (longlong)iVar5 >> 0x3f) & 0xfdU - iVar5);
  idol_draw::BindFragmentProgram(g_viewMtxPtr,HUD_Pass,0xd);
  uVar3 = FUN_004de9c4(uVar2,0xd,"minHealth");
  idol_draw::Gfx_SubmitHudDrawCommands(uVar2,HUD_Pass,0xd,uVar3,local_80,1);
  GetEffectTex(*(int *)(iVar1 + 0x104) + 0x28);
  Sprite_DrawShapeWrapper(0x170,g_ScreenHeight + -0x90,0x80,0x80,0,0,0x80,0x80);
  idol_draw::BindFragmentProgram(uVar2,HUD_Pass,0xc);
  GetEffectTex(*(int *)(iVar1 + 0x104) + 0x29);
  Sprite_DrawShapeWrapper(0x170,g_ScreenHeight + -0x90,0x80,0x80,0,0,0x80,0x80);
  *(uint *)(iVar1 + 0xf4) = iVar5 + ((uint)((longlong)iVar5 + -2 >> 0x3f) & 2U - iVar5);
  return;
}


// 0x041b7c0 (0x328 bytes)
void M688_0041b7c0
               (double param_1,double param_2,MobyInstance *param_3,longlong param_4)

{
  byte bVar1;
  undefined4 uVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  int iVar7;
  float fVar8;
  float *pfVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  GPiece<16> auVar13;
  GPiece<16> auVar14;
  GPiece<16> auVar15;
  float local_90;
  float local_8c;
  float local_88;
  undefined4 local_84;
  float local_80;
  float local_7c;
  float local_78;
  float local_70;
  float local_6c;
  float local_68;
  undefined4 local_64;
  float local_60;
  float local_5c;
  longlong local_50;
  
  MB_SphericalToVector
            (g_FrameTime * 400.0,(float)param_1,(float)param_2,&local_90);
  pfVar9 = (float *)param_4;
  local_90 = local_90 + *pfVar9;
  local_8c = local_8c + pfVar9[1];
  local_88 = local_88 + pfVar9[2];
  iVar7 = FastDecTimerS32(param_4 + 0x80);
  if ((iVar7 != 0) && ((g_Pad.padDownButtons & 0x84) != 0)) {
    PlayMobySound(3,0,param_3);
    dVar10 = 0.0;
    fVar8 = SQRT(local_88 * local_88 + local_90 * local_90 + local_8c * local_8c);
    fVar3 = 2.2 / fVar8;
    dVar12 = dVar10;
    if (0.0 - fVar8 < 0.0) {
      dVar12 = (double)(local_88 * fVar3);
    }
    dVar11 = dVar10;
    if (0.0 - fVar8 < 0.0) {
      dVar11 = (double)(local_8c * fVar3);
    }
    if (0.0 - fVar8 < 0.0) {
      dVar10 = (double)(local_90 * fVar3);
    }
    if (fVar8 - 0.0 < 0.0) {
      dVar12 = (double)(local_88 * fVar3);
    }
    if (fVar8 - 0.0 < 0.0) {
      dVar11 = (double)(local_8c * fVar3);
    }
    if (fVar8 - 0.0 < 0.0) {
      dVar10 = (double)(local_90 * fVar3);
    }
    GetBonePosition(param_3,(*(byte *)((int)pfVar9 + 0x61) & 1) + 3,&local_80);
    local_80 = (float)((double)local_80 + dVar10);
    local_7c = (float)((double)local_7c + dVar11);
    local_78 = (float)((double)local_78 + dVar12);
    M1009_00184670(0x4069000000000000,0xbff0000000000000,param_3,&local_90,&local_80);
    auVar13 = ZEXT416(0xffffffff);
    auVar13 = auVar13 | auVar13 << 0x20 | auVar13 << 0x40 | auVar13 << 0x60;
    auVar14 = vectorShiftLeftIntegerWord(auVar13,auVar13);
    auVar13 = loadVectorLeftIndexed(0x14,0x41b79c);
    auVar13 = auVar13 >> 0x60 & (GPiece<16>)0xffffffff;
    auVar15 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
    bVar1 = *(byte *)((int)pfVar9 + 0x61);
    auVar13 = vectorMultiplyAddFloatingPoint
                        (auVar15,auVar13 | auVar13 << 0x20 | auVar13 << 0x40 | auVar13 << 0x60,
                         auVar14);
    auVar13 = vectorConvertToSignedFixedPointWordSaturate(auVar13,0);
    auVar13 = auVar13 >> 0x60 & (GPiece<16>)0xffffffff;
    uVar2 = storeVectorElementWordIndexed
                      (auVar13 | auVar13 << 0x20 | auVar13 << 0x40 | auVar13 << 0x60,0x80,param_4);
    *(undefined4 *)((uint)(pfVar9 + 0x20) & 0xfffffffc) = uVar2;
    *(byte *)((int)pfVar9 + 0x61) = bVar1 ^ 1;
  }
  fVar6 = 0.0;
  local_64 = local_84;
  fVar5 = SQRT(local_88 * local_88 + local_90 * local_90 + local_8c * local_8c);
  fVar4 = 23.0 / fVar5;
  fVar3 = local_90 * fVar4;
  fVar8 = local_8c * fVar4;
  fVar4 = local_88 * fVar4;
  local_90 = fVar6;
  if (0.0 - fVar5 < 0.0) {
    local_90 = fVar3;
  }
  local_8c = fVar6;
  if (0.0 - fVar5 < 0.0) {
    local_8c = fVar8;
  }
  if (0.0 - fVar5 < 0.0) {
    fVar6 = fVar4;
  }
  if (fVar5 - 0.0 < 0.0) {
    local_90 = fVar3;
  }
  if (fVar5 - 0.0 < 0.0) {
    local_8c = fVar8;
  }
  local_88 = fVar6;
  if (fVar5 - 0.0 < 0.0) {
    local_88 = fVar4;
  }
  local_70 = local_90 + (param_3->pos).x;
  local_6c = local_8c + (param_3->pos).y;
  local_68 = local_88 + (param_3->pos).z;
  ScreenPosFromWorldSpace(&local_60,&local_70);
  local_50 = (longlong)SCREEN_PROJECTION_MAP_X;
  dVar12 = 0.0625;
  fVar8 = (float)FastDoubleToInt((double)((local_60 - (float)local_50) * 0.0625));
  pfVar9[0x38] = fVar8;
  local_50 = (longlong)SCREEN_PROJECTION_MAP_Y;
  fVar8 = (float)FastDoubleToInt
                           ((double)(float)((double)(local_5c - (float)local_50) * dVar12));
  pfVar9[0x39] = fVar8;
  return;
}


// 0x041bb00 (0x200 bytes)
void M688_0041bb00(longlong param_1,longlong param_2)

{
  undefined4 uVar1;
  ushort uVar2;
  int iVar3;
  int iVar4;
  GPiece<16> auVar5;
  GPiece<16> auVar6;
  GPiece<16> auVar7;
  GPiece<32> local_50;
  
  iVar3 = FastDecTimerS32(param_2 + 0x84);
  if (((iVar3 != 0) && ((g_Pad.padDownButtons & 0x28) != 0)) && (DAT_0096b2d6 != '\0')) {
    iVar3 = (int)param_2;
    uVar2 = *(short *)(iVar3 + 0x6a) + 1U & 3;
    *(ushort *)(iVar3 + 0x6a) = uVar2;
    GetBonePosition(param_1,(longlong)(short)uVar2 + 7,local_50);
    iVar4 = Spawn_Moby295((double)(g_FrameTime * 100.0),param_1,local_50,
                          *(undefined4 *)(iVar3 + 0xec),param_1 + 0x40,&DAT_0041bae8,
                          (int)(animationSpeed * 300.5));
    if (iVar4 != 0) {
      PlayMobySound(2,0,(MobyInstance *)param_1);
      auVar5 = ZEXT416(0xffffffff);
      auVar5 = auVar5 | auVar5 << 0x20 | auVar5 << 0x40 | auVar5 << 0x60;
      DAT_0096b2d6 = DAT_0096b2d6 + -1;
      auVar6 = vectorShiftLeftIntegerWord(auVar5,auVar5);
      auVar5 = loadVectorLeftIndexed(0x10,0x41bae8);
      auVar5 = auVar5 >> 0x60 & (GPiece<16>)0xffffffff;
      auVar7 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
      auVar5 = vectorMultiplyAddFloatingPoint
                         (auVar7,auVar5 | auVar5 << 0x20 | auVar5 << 0x40 | auVar5 << 0x60,auVar6);
      auVar5 = vectorConvertToSignedFixedPointWordSaturate(auVar5,0);
      auVar5 = auVar5 >> 0x60 & (GPiece<16>)0xffffffff;
      uVar1 = storeVectorElementWordIndexed
                        (auVar5 | auVar5 << 0x20 | auVar5 << 0x40 | auVar5 << 0x60,0x84,param_2);
      *(undefined4 *)(iVar3 + 0x84U & 0xfffffffc) = uVar1;
    }
  }
  return;
}


// 0x041bd08 (0xcc bytes)
double M688_0041bd08
                 (double param_1,double param_2,double param_3,double param_4,double param_5)

{
  char in_r6;
  int in_r9;
  double dVar1;
  double dVar2;
  
  if (param_4 < param_1) {
    dVar2 = (double)((float)(param_1 - param_4) / (float)(param_5 - param_4));
    if (dVar2 - 0.0 < 0.0) {
      dVar2 = 0.0;
    }
    if (1.0 - dVar2 < 0.0) {
      dVar2 = 1.0;
    }
    if (1 < in_r9) {
      in_r9 = in_r9 + -1;
      do {
        in_r9 = in_r9 + -1;
        dVar2 = (double)(float)(dVar2 * dVar2);
      } while (0 < in_r9);
    }
    if (in_r6 == '\0') {
      param_2 = (double)(float)((double)(float)(1.0 - dVar2) * param_2 +
                               (double)(float)(dVar2 * param_3));
    }
    else {
      dVar1 = (double)FastDiffRots(param_3,param_2);
      param_2 = (double)FastWrapRot((float)param_2,(float)(dVar2 * dVar1));
    }
  }
  return param_2;
}


// 0x041bdd4 (0x70 bytes)
void M688_0041bdd4
               (undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
               undefined8 param_5,undefined8 param_6)

{
  GPiece<16> auStack_30;
  
  GetBonePosition(param_2,param_3,auStack_30);
  CollSphere(param_1,auStack_30,param_3,param_5,param_6);
  return;
}


