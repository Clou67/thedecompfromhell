// game/update/moby1470.cpp -- reconstructed from NPEA00385 EBOOT
// STATUS: NOT STARTED (raw Ghidra output)
// 2 functions, 0x286aa0-0x287764
#include <stdio.h>
#include "game/update/moby1470.h"
#include "game/camera.h"
#include "game/debug.h"
#include "game/help.h"
#include "game/hero.h"
#include "game/mobyfunc.h"
#include "game/mobyutil.h"
#include "game/pause.h"
#include "game/space.h"
#include "game/update/camera0.h"
#include "idol/fastfunc.h"

// 0x0286aa0 (0x14 bytes)
void M1470_00286aa0(void)

{
  DAT_007aadbc = 0x10000;
  return;
}


// 0x0286ae0 (0xc84 bytes)
// inlined: FastAtan2 @0x287368, FastAtan2 @0x2875f8
// strings: 0096c08c: 'None' | 006558ac: 'magnacut cuboid error: detect:%d hero:%d init:%d end:%d \n'

/* Moby 1470 */

undefined4 * UpdateMoby_1470(MobyInstance *moby)

{
  byte bVar1;
  char cVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  void *pvVar7;
  undefined4 uVar8;
  ulonglong *puVar9;
  float fVar10;
  MobyInstance *pMVar11;
  MobyInstance *pMVar12;
  int iVar15;
  int iVar16;
  undefined4 *puVar17;
  int iVar18;
  longlong lVar13;
  longlong lVar14;
  float *pfVar20;
  longlong lVar19;
  longlong lVar21;
  ulonglong unaff_r23;
  ulonglong unaff_r24;
  ulonglong uVar22;
  ulonglong unaff_r25;
  ulonglong unaff_r26;
  ulonglong unaff_r27;
  ulonglong unaff_r28;
  ulonglong unaff_r29;
  ulonglong uVar23;
  ulonglong unaff_r30;
  ulonglong uVar24;
  ulonglong unaff_r31;
  ulonglong in_LR;
  longlong lVar25;
  double dVar26;
  double dVar27;
  double dVar28;
  ulonglong in_f30;
  double dVar29;
  ulonglong in_f31;
  double dVar30;
  GPiece<16> auVar31;
  GPiece<16> auVar32;
  GPiece<16> auVar33;
  
  uVar22 = ZEXT48(&stack0x00000000);
  lVar14 = uVar22 - 0x130;
  puVar9 = (ulonglong *)lVar14;
  *puVar9 = uVar22;
  puVar9[0x28] = in_LR;
  puVar9[0x24] = in_f30;
  puVar9[0x25] = in_f31;
  puVar9[0x22] = unaff_r30;
  puVar9[0x23] = unaff_r31;
  pvVar7 = moby->pVar;
  uVar24 = ZEXT48(pvVar7);
  iVar15 = *(int *)((int)pvVar7 + 0x6c);
  puVar9[0x21] = unaff_r29;
  puVar9[0x20] = unaff_r28;
  puVar9[0x1f] = unaff_r27;
  puVar9[0x1e] = unaff_r26;
  puVar9[0x1d] = unaff_r25;
  puVar9[0x1c] = unaff_r24;
  puVar9[0x1b] = unaff_r23;
  if (iVar15 < 1) {
    if (((-1 < iVar15) &&
        (iVar15 = MB_IsPntInCuboid(&g_heroPosition,(longlong)*(int *)((int)pvVar7 + 0x60))
        , iVar15 != 0)) && (g_heroStateType == 0x11)) {
      *(undefined4 *)((int)pvVar7 + 0x6c) = 1;
    }
  }
  else if (iVar15 < 2) {
    if (g_heroState == UNDERWATER_DAMAGE) {
      *(undefined4 *)((int)pvVar7 + 0x6c) = 0;
    }
    else if (g_heroState == TURRET_PLANE_UI) {
      *(undefined4 *)((int)pvVar7 + 0x6c) = 0;
    }
    else {
      iVar15 = MB_IsPntInCuboid(&g_heroPosition,(longlong)*(int *)((int)pvVar7 + 100));
      if ((iVar15 != 0) ||
         (iVar15 = MB_IsPntInCuboid
                             (&g_heroPosition,(longlong)*(int *)((int)pvVar7 + 0x68)), iVar15 != 0))
      {
        MB_UnlockSkillPoint(0x1c);
      }
    }
  }
  if (g_SkillPoints[0x1b] == '\0') {
    iVar15 = 0;
    do {
      iVar16 = *(int *)((int)pvVar7 + 0x70);
      if (((g_MobyInstance[iVar16].oClass == SENTRY_BOT) ||
          (g_MobyInstance[iVar16].oClass == ROBOT_DOG_0566)) &&
         ((g_MobyInstance[iVar16].state < 0x80 &&
          (iVar16 = MB_IsPntInCuboid
                              ((Vec4 *)&g_MobyInstance[iVar16].pos,
                               (longlong)*(int *)((int)pvVar7 + 0x78)), iVar16 == 0)))) {
        *(int *)((int)pvVar7 + 0x74) = *(int *)((int)pvVar7 + 0x74) + 1;
      }
      pMVar12 = MobyInstancePermEnd;
      pMVar11 = g_MobyInstance;
      iVar16 = *(int *)((int)pvVar7 + 0x70) + 1;
      *(int *)((int)pvVar7 + 0x70) = iVar16;
      if (pMVar12 <= pMVar11 + iVar16) {
        if (*(int *)((int)pvVar7 + 0x74) == 0) {
          MB_UnlockSkillPoint(0x1b);
        }
        *(undefined4 *)((int)pvVar7 + 0x70) = 0;
        *(undefined4 *)((int)pvVar7 + 0x74) = 0;
      }
      iVar15 = iVar15 + 1;
    } while (iVar15 < 0x1e);
  }
  bVar1 = moby->state;
  puVar17 = (undefined4 *)(uint)bVar1;
  if (bVar1 < 2) {
    if (bVar1 == 0) {
      auVar31 = ZEXT416(0xffffffff);
      auVar31 = auVar31 | auVar31 << 0x20 | auVar31 << 0x40 | auVar31 << 0x60;
      moby->updateDistance = -1;
      auVar32 = vectorShiftLeftIntegerWord(auVar31,auVar31);
      auVar31 = loadVectorLeftIndexed(4,0x286ab8);
      auVar31 = auVar31 >> 0x60 & (GPiece<16>)0xffffffff;
      auVar33 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
      iVar15 = *(int *)((int)pvVar7 + 0x44);
      auVar31 = vectorMultiplyAddFloatingPoint
                          (auVar33,auVar31 | auVar31 << 0x20 | auVar31 << 0x40 | auVar31 << 0x60,
                           auVar32);
      auVar31 = vectorConvertToSignedFixedPointWordSaturate(auVar31,0);
      auVar31 = auVar31 >> 0x60 & (GPiece<16>)0xffffffff;
      uVar8 = storeVectorElementWordIndexed
                        (auVar31 | auVar31 << 0x20 | auVar31 << 0x40 | auVar31 << 0x60,0x38,uVar24);
      *(undefined4 *)((int)pvVar7 + 0x38U & 0xfffffffc) = uVar8;
      *(undefined1 *)((int)pvVar7 + 0x4c) = 0;
      if (((iVar15 == -1) || (*(int *)((int)pvVar7 + 0x40) == -1)) ||
         ((*(int *)((int)pvVar7 + 0x3c) == -1 || (*(int *)((int)pvVar7 + 0x48) == -1)))) {
        printf("magnacut cuboid error: detect:%d hero:%d init:%d end:%d \n",
                     *(undefined4 *)((int)pvVar7 + 0x3c),*(undefined4 *)((int)pvVar7 + 0x48),
                     *(undefined4 *)((int)pvVar7 + 0x40),iVar15);
        *(undefined1 *)((int)pvVar7 + 0x4c) = 1;
      }
      puVar17 = (undefined4 *)0x1;
      moby->state = '\x01';
    }
    else {
      uVar23 = 0xffffffffffffffff;
      iVar16 = 0;
      iVar15 = -1;
      uVar22 = uVar24;
      do {
        iVar18 = MB_IsPntInCuboid(&g_heroPosition,(longlong)*(int *)uVar22);
        if (iVar18 != 0) {
          iVar18 = *(int *)((int)pvVar7 + iVar16 * 4);
          if (*(int *)((int)pvVar7 + 0x30) != iVar18) {
            uVar23 = (ulonglong)*(uint *)((int)pvVar7 + iVar16 * 4 + 0x10);
            iVar15 = iVar18;
          }
          iVar16 = *(int *)((int)pvVar7 + 0xc) + 1;
          goto LAB_00286e58;
        }
        iVar16 = iVar16 + 1;
        uVar22 = uVar22 + 4;
      } while (iVar16 < 1);
      iVar16 = 0;
      *(undefined4 *)((int)pvVar7 + 0x30) = 0xffffffff;
LAB_00286e58:
      *(int *)((int)pvVar7 + 0xc) = iVar16;
      if ((((int)uVar23 == -1) ||
          ((((iVar18 = (int)&(g_MobyInstance->bSphere).x + (int)(uVar23 << 8), iVar18 != 0 &&
             (*(short *)(iVar18 + 0xa6) == 0x4e)) &&
            (cVar2 = *(char *)(iVar18 + 0x20), cVar2 != -3 && cVar2 != -2)) && (cVar2 != '\x03'))))
         && ((*(int *)((int)pvVar7 + 0x38) < iVar16 && iVar15 != -1 &&
             (((((g_heroStateType == 0 || (g_heroStateType == 1)) ||
                (g_heroStateType == 9)) &&
               ((g_HelpState == 0 && (g_HelpCurId == -1)))) &&
              (UnlockableItems.hologuise != '\0')))))) {
        auVar31 = ZEXT416(0xffffffff);
        auVar31 = auVar31 | auVar31 << 0x20 | auVar31 << 0x40 | auVar31 << 0x60;
        auVar32 = vectorShiftLeftIntegerWord(auVar31,auVar31);
        auVar31 = loadVectorLeftIndexed(8,0x286ab8);
        auVar31 = auVar31 >> 0x60 & (GPiece<16>)0xffffffff;
        auVar33 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
        auVar31 = vectorMultiplyAddFloatingPoint
                            (auVar33,auVar31 | auVar31 << 0x20 | auVar31 << 0x40 | auVar31 << 0x60,
                             auVar32);
        auVar31 = vectorConvertToSignedFixedPointWordSaturate(auVar31,0);
        auVar31 = auVar31 >> 0x60 & (GPiece<16>)0xffffffff;
        uVar8 = storeVectorElementWordIndexed
                          (auVar31 | auVar31 << 0x20 | auVar31 << 0x40 | auVar31 << 0x60,0x38,uVar24
                          );
        *(undefined4 *)((int)pvVar7 + 0x38U & 0xfffffffc) = uVar8;
        if ((CHAR_ARRAY_00a1000c.piece<1004,4>() & 0x80000000) == 0) {
          Help_QueueMessage(STR_WHILE_WEARING_THE_HOLOGUISE_0x3A9A,0x7d);
        }
        *(undefined4 *)((int)pvVar7 + 0xc) = 0;
        *(int *)((int)pvVar7 + 0x30) = iVar15;
      }
      iVar15 = MB_IsPntInCuboid(&g_heroPosition,(longlong)*(int *)((int)pvVar7 + 0x20));
      if ((((iVar15 != 0) && (g_HelpState == 0)) && (g_HelpCurId == -1)) &&
         ((UnlockableItems.hydroPack == '\0' &&
          ((CHAR_ARRAY_00a1000c.piece<1044,4>() & 1 << (Level & 0x3f)) == 0)))) {
        Help_QueueMessage(STR_YOU_WILL_NEED_A_0x3A9D,0x82);
      }
      iVar16 = 0;
      iVar15 = -1;
      uVar22 = uVar24;
      do {
        iVar18 = MB_IsPntInCuboid(&g_heroPosition,(longlong)*(int *)((int)uVar22 + 0x20));
        if (iVar18 != 0) {
          iVar18 = *(int *)((int)pvVar7 + 0x2c) + 1;
          iVar15 = *(int *)((int)pvVar7 + iVar16 * 4 + 0x20);
          *(int *)((int)pvVar7 + 0x2c) = iVar18;
          iVar15 = iVar15 + ((uint)(ZERO_MASK((iVar15 - *(int *)((int)pvVar7 + 0x30)))
                                   ) & -iVar15 - 1U);
          if (g_heroState != HYDRO_PACK_MOVING) goto LAB_002870a0;
          break;
        }
        iVar16 = iVar16 + 1;
        uVar22 = uVar22 + 4;
      } while (iVar16 < 3);
      iVar18 = 0;
      *(undefined4 *)((int)pvVar7 + 0x2c) = 0;
      *(undefined4 *)((int)pvVar7 + 0x30) = 0xffffffff;
LAB_002870a0:
      puVar9[0x19] = (longlong)(int)(animationSpeed * 3600.5);
      if (((*(int *)((int)puVar9 + 0xcc) < iVar18 && iVar15 != -1) &&
          (iVar16 = Hero_IsSwimming(), iVar16 != 0)) &&
         ((g_HelpState == 0 &&
          ((g_HelpCurId == -1 && (UnlockableItems.hydroPack != '\0')))))) {
        Help_QueueMessage(STR_NOW_THAT_YOU_HAVE_0x4E2E,0x78);
        *(int *)((int)pvVar7 + 0x30) = iVar15;
        *(undefined4 *)((int)pvVar7 + 0x2c) = 0;
      }
      if ((*(int *)((int)pvVar7 + 0x58) != 0xff) &&
         (g_LevelFlags[Level][*(int *)((int)pvVar7 + 0x58)] == -1)) {
        *(undefined1 *)((int)pvVar7 + 0x4c) = 1;
      }
      puVar17 = (undefined4 *)(uint)*(byte *)((int)pvVar7 + 0x4c);
      if (*(byte *)((int)pvVar7 + 0x4c) == 0) {
        puVar17 = (undefined4 *)
                  MB_IsPntInCuboid(&g_heroPosition,(longlong)*(int *)((int)pvVar7 + 0x3c))
        ;
        if (puVar17 != (undefined4 *)0x0) {
          Help_Kill();
          if ((CHAR_ARRAY_00a1000c.piece<1116,4>() & 0x80000000) == 0) {
            Help_QueueMessage(STR_THE_GUNFIRE_FROM_THOSE_0x4268,0x8b);
          }
          if ((g_HelpState != 0) ||
             (puVar17 = (undefined4 *)g_HelpCurId, g_HelpCurId != -1)) {
            auVar31 = ZEXT416(0xffffffff);
            auVar31 = auVar31 | auVar31 << 0x20 | auVar31 << 0x40 | auVar31 << 0x60;
            *(undefined4 *)((int)pvVar7 + 0x50) = 0;
            auVar32 = vectorShiftLeftIntegerWord(auVar31,auVar31);
            moby->state = '\x02';
            auVar31 = loadVectorLeftIndexed(0x10,0x286ab8);
            auVar31 = auVar31 >> 0x60 & (GPiece<16>)0xffffffff;
            auVar33 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
            auVar31 = vectorMultiplyAddFloatingPoint
                                (auVar33,auVar31 | auVar31 << 0x20 | auVar31 << 0x40 |
                                         auVar31 << 0x60,auVar32);
            auVar31 = vectorConvertToSignedFixedPointWordSaturate(auVar31,0);
            auVar31 = auVar31 >> 0x60 & (GPiece<16>)0xffffffff;
            uVar8 = storeVectorElementWordIndexed
                              (auVar31 | auVar31 << 0x20 | auVar31 << 0x40 | auVar31 << 0x60,0x5c,
                               uVar24);
            *(undefined4 *)((int)pvVar7 + 0x5cU & 0xfffffffc) = uVar8;
            puVar17 = (undefined4 *)TransitionMovement(0x72,0);
          }
        }
      }
    }
  }
  else {
    dVar30 = 0.7853981852531433;
    if (bVar1 < 3) {
      Cam0_DisableUserCam();
      dVar29 = 0.0;
      Cam0_ForceLookAtPos(0x3f9aceea00000000,0,&Cuboids[*(int *)((int)pvVar7 + 0x44)].pos);
      fVar10 = Cuboids[*(int *)((int)pvVar7 + 0x44)].pos.x - GameCamera.posX;
      fVar6 = Cuboids[*(int *)((int)pvVar7 + 0x44)].pos.y - GameCamera.posY;
      dVar26 = ABS((double)fVar10);
      dVar27 = ABS((double)fVar6);
      *(float *)((int)puVar9 + 0x7c) = fVar10;
      *(float *)(puVar9 + 0x10) = fVar6;
      fVar10 = GameCamera.rot.radius;
      *(float *)((int)puVar9 + 0x84) = (float)(dVar26 - dVar27);
      uVar23 = (ulonglong)(*(uint *)((int)puVar9 + 0x7c) >> 0x1c) & 8 |
               (ulonglong)(*(uint *)((int)puVar9 + 0x84) >> 0x1e) & 2 |
               (ulonglong)(*(uint *)(puVar9 + 0x10) >> 0x1d) & 4;
      dVar28 = ABS((double)*(float *)((int)puVar9 + 0x7c));
      if ((double)*(float *)((int)puVar9 + 0x84) - dVar29 < 0.0) {
        dVar28 = dVar27;
      }
      fVar6 = *(float *)(&g_atanQuadrantTable + (int)(uVar23 << 2));
      dVar27 = ABS((double)*(float *)(puVar9 + 0x10));
      if ((double)*(float *)((int)puVar9 + 0x84) - dVar29 < 0.0) {
        dVar27 = dVar26;
      }
      fVar3 = *(float *)(((uint)(uVar23 << 2) | 0x735900) + 4);
      if (dVar29 < dVar28) {
        lVar13 = uVar22 - 0x120;
        lVar19 = uVar22 - 0x88;
        lVar21 = uVar22 - 0x78;
        lVar25 = 2;
        fVar4 = (float)(dVar27 - dVar28) / (float)(dVar27 + dVar28);
        fVar5 = fVar4 * fVar4;
        *(float *)((int)puVar9 + 0xb4) = fVar4;
        *(float *)((int)puVar9 + 0xac) = fVar4;
        *(float *)(puVar9 + 0x16) = fVar4;
        *(float *)(puVar9 + 0x15) = fVar4;
        fVar4 = fVar5 * fVar5;
        *(float *)((int)puVar9 + 0xac) = *(float *)((int)puVar9 + 0xac) * fVar5;
        *(float *)(puVar9 + 0x16) = *(float *)(puVar9 + 0x16) * fVar4;
        *(float *)((int)puVar9 + 0xb4) = *(float *)((int)puVar9 + 0xb4) * fVar4 * fVar5;
        do {
          *(float *)((int)lVar13 + 0xa8) = *(float *)((int)lVar13 + 0x98) * fVar4 * fVar4;
          iVar15 = (int)lVar19;
          lVar13 = lVar13 + 8;
          lVar19 = lVar19 + 8;
          *(float *)((int)lVar21 + 4) = *(float *)(iVar15 + 4) * fVar4 * fVar4;
          lVar21 = lVar21 + 8;
          lVar25 = lVar25 + -1;
        } while (lVar25 != 0);
        lVar25 = 4;
        lVar21 = uVar22 - 0x88;
        pfVar20 = (float *)&DAT_007358e0;
        lVar13 = lVar14;
        lVar19 = lVar21;
        do {
          fVar4 = *pfVar20;
          fVar5 = pfVar20[1];
          pfVar20 = pfVar20 + 2;
          *(float *)((int)lVar13 + 0xa8) = *(float *)((int)lVar13 + 0xa8) * fVar4;
          lVar13 = lVar13 + 8;
          *(float *)((int)lVar19 + 4) = *(float *)((int)lVar19 + 4) * fVar5;
          lVar19 = lVar19 + 8;
          lVar25 = lVar25 + -1;
        } while (lVar25 != 0);
        lVar13 = 2;
        do {
          iVar15 = (int)lVar14;
          iVar16 = (int)lVar21;
          lVar14 = lVar14 + 0x10;
          lVar21 = lVar21 + 0x10;
          dVar29 = (double)((float)(dVar29 + (double)*(float *)(iVar15 + 0xa8)) +
                            *(float *)(iVar16 + 4) + *(float *)(iVar16 + 8) +
                           *(float *)(iVar16 + 0xc));
          lVar13 = lVar13 + -1;
        } while (lVar13 != 0);
        dVar29 = (double)((float)(dVar29 + dVar30) * fVar6 + fVar3);
      }
      dVar30 = (double)FastSubRots(fVar10,(float)dVar29);
      puVar17 = &DAT_00286ab8;
      if (dVar30 < 0.03490658476948738) {
        auVar31 = ZEXT416(0xffffffff);
        auVar31 = auVar31 | auVar31 << 0x20 | auVar31 << 0x40 | auVar31 << 0x60;
        moby->state = '\x03';
        auVar32 = vectorShiftLeftIntegerWord(auVar31,auVar31);
        auVar31 = loadVectorLeftIndexed(0x20,0x286ab8);
        puVar17 = (undefined4 *)0x5c;
        auVar31 = auVar31 >> 0x60 & (GPiece<16>)0xffffffff;
        auVar33 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
        auVar31 = vectorMultiplyAddFloatingPoint
                            (auVar33,auVar31 | auVar31 << 0x20 | auVar31 << 0x40 | auVar31 << 0x60,
                             auVar32);
        auVar31 = vectorConvertToSignedFixedPointWordSaturate(auVar31,0);
        auVar31 = auVar31 >> 0x60 & (GPiece<16>)0xffffffff;
        uVar8 = storeVectorElementWordIndexed
                          (auVar31 | auVar31 << 0x20 | auVar31 << 0x40 | auVar31 << 0x60,0x5c,uVar24
                          );
        *(undefined4 *)((int)pvVar7 + 0x5cU & 0xfffffffc) = uVar8;
      }
    }
    else if (bVar1 < 4) {
      Cam0_DisableUserCam();
      puVar17 = (undefined4 *)FastDecTimerS32(uVar24 + 0x5c);
      if (puVar17 != (undefined4 *)0x0) {
        dVar29 = 0.0;
        Cam0_ForceLookAtPos
                  (0x3f9aceea00000000,0,&Cuboids[*(int *)((int)pvVar7 + 0x40)].pos);
        fVar10 = Cuboids[*(int *)((int)pvVar7 + 0x40)].pos.x - GameCamera.posX;
        fVar6 = Cuboids[*(int *)((int)pvVar7 + 0x40)].pos.y - GameCamera.posY;
        dVar26 = ABS((double)fVar10);
        dVar27 = ABS((double)fVar6);
        *(float *)(puVar9 + 0xe) = fVar10;
        *(float *)((int)puVar9 + 0x74) = fVar6;
        fVar10 = GameCamera.rot.radius;
        *(float *)(puVar9 + 0xf) = (float)(dVar26 - dVar27);
        uVar24 = (ulonglong)(*(uint *)(puVar9 + 0xe) >> 0x1c) & 8 |
                 (ulonglong)(*(uint *)(puVar9 + 0xf) >> 0x1e) & 2 |
                 (ulonglong)(*(uint *)((int)puVar9 + 0x74) >> 0x1d) & 4;
        dVar28 = ABS((double)*(float *)(puVar9 + 0xe));
        if ((double)*(float *)(puVar9 + 0xf) - dVar29 < 0.0) {
          dVar28 = dVar27;
        }
        fVar6 = *(float *)(&g_atanQuadrantTable + (int)(uVar24 << 2));
        dVar27 = ABS((double)*(float *)((int)puVar9 + 0x74));
        if ((double)*(float *)(puVar9 + 0xf) - dVar29 < 0.0) {
          dVar27 = dVar26;
        }
        fVar3 = *(float *)(((uint)(uVar24 << 2) | 0x735900) + 4);
        if (dVar29 < dVar28) {
          lVar13 = uVar22 - 0x120;
          lVar19 = uVar22 - 0xa8;
          lVar21 = uVar22 - 0x98;
          lVar25 = 2;
          fVar4 = (float)(dVar27 - dVar28) / (float)(dVar27 + dVar28);
          fVar5 = fVar4 * fVar4;
          *(float *)((int)puVar9 + 0x94) = fVar4;
          *(float *)((int)puVar9 + 0x8c) = fVar4;
          *(float *)(puVar9 + 0x12) = fVar4;
          *(float *)(puVar9 + 0x11) = fVar4;
          fVar4 = fVar5 * fVar5;
          *(float *)((int)puVar9 + 0x8c) = *(float *)((int)puVar9 + 0x8c) * fVar5;
          *(float *)(puVar9 + 0x12) = *(float *)(puVar9 + 0x12) * fVar4;
          *(float *)((int)puVar9 + 0x94) = *(float *)((int)puVar9 + 0x94) * fVar4 * fVar5;
          do {
            *(float *)((int)lVar13 + 0x88) = *(float *)((int)lVar13 + 0x78) * fVar4 * fVar4;
            iVar15 = (int)lVar19;
            lVar13 = lVar13 + 8;
            lVar19 = lVar19 + 8;
            *(float *)((int)lVar21 + 4) = *(float *)(iVar15 + 4) * fVar4 * fVar4;
            lVar21 = lVar21 + 8;
            lVar25 = lVar25 + -1;
          } while (lVar25 != 0);
          lVar25 = 4;
          lVar21 = uVar22 - 0xa8;
          pfVar20 = (float *)&DAT_007358e0;
          lVar13 = lVar14;
          lVar19 = lVar21;
          do {
            fVar4 = *pfVar20;
            fVar5 = pfVar20[1];
            pfVar20 = pfVar20 + 2;
            *(float *)((int)lVar13 + 0x88) = *(float *)((int)lVar13 + 0x88) * fVar4;
            lVar13 = lVar13 + 8;
            *(float *)((int)lVar19 + 4) = *(float *)((int)lVar19 + 4) * fVar5;
            lVar19 = lVar19 + 8;
            lVar25 = lVar25 + -1;
          } while (lVar25 != 0);
          lVar13 = 2;
          do {
            iVar15 = (int)lVar14;
            iVar16 = (int)lVar21;
            lVar14 = lVar14 + 0x10;
            lVar21 = lVar21 + 0x10;
            dVar29 = (double)((float)(dVar29 + (double)*(float *)(iVar15 + 0x88)) +
                              *(float *)(iVar16 + 4) + *(float *)(iVar16 + 8) +
                             *(float *)(iVar16 + 0xc));
            lVar13 = lVar13 + -1;
          } while (lVar13 != 0);
          dVar29 = (double)((float)(dVar29 + dVar30) * fVar6 + fVar3);
        }
        dVar30 = (double)FastSubRots(fVar10,(float)dVar29);
        puVar17 = &DAT_00286ab8;
        if (dVar30 < 0.03490658476948738) {
          Hero_TransitionToDefault();
          puVar17 = (undefined4 *)0x1;
          *(undefined1 *)((int)pvVar7 + 0x4c) = 1;
          moby->state = '\x01';
        }
      }
    }
  }
  return puVar17;
}


