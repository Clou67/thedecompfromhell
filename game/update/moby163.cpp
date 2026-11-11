// game/update/moby163.cpp -- reconstructed from NPEA00385 EBOOT
// STATUS: NOT STARTED (raw Ghidra output)
// 1 functions, 0x2a4420-0x2a4e7c
#include "game/update/moby163.h"
#include "game/camera.h"
#include "game/help.h"
#include "game/hero.h"
#include "game/mobyfunc.h"
#include "game/mobyutil.h"
#include "game/pad.h"
#include "game/sound.h"
#include "game/update/moby172.h"
#include "idol/fastfunc.h"

// 0x02a4420 (0xa5c bytes)
// inlined: FastAtan2 @0x2a4670, FastAtan2 @0x2a4808, FastAtan2 @0x2a4ae4
/* Moby 163 */

void UpdateMoby_163(MobyInstance *moby)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  int *piVar8;
  float fVar9;
  undefined4 uVar10;
  ulonglong *puVar11;
  int iVar12;
  uint uVar13;
  short sVar14;
  ushort uVar15;
  ulonglong uVar16;
  int iVar19;
  longlong lVar17;
  longlong lVar18;
  longlong lVar20;
  longlong lVar21;
  ulonglong uVar22;
  float *pfVar23;
  ulonglong unaff_r27;
  ulonglong unaff_r28;
  ulonglong unaff_r29;
  ulonglong unaff_r30;
  ulonglong unaff_r31;
  ulonglong in_LR;
  longlong lVar24;
  double dVar25;
  double dVar26;
  double dVar27;
  double dVar28;
  double dVar29;
  ulonglong in_f27;
  ulonglong in_f28;
  ulonglong in_f29;
  ulonglong in_f30;
  double dVar30;
  double dVar31;
  ulonglong in_f31;
  double dVar32;
  GPiece<16> auVar33;
  GPiece<16> auVar34;
  GPiece<16> auVar35;
  
  uVar16 = ZEXT48(&stack0x00000000);
  lVar18 = uVar16 - 0x160;
  puVar11 = (ulonglong *)lVar18;
  *puVar11 = uVar16;
  puVar11[0x2e] = in_LR;
  puVar11[0x27] = in_f27;
  puVar11[0x28] = in_f28;
  puVar11[0x29] = in_f29;
  puVar11[0x2a] = in_f30;
  puVar11[0x2b] = in_f31;
  puVar11[0x26] = unaff_r31;
  puVar11[0x25] = unaff_r30;
  puVar11[0x24] = unaff_r29;
  puVar11[0x23] = unaff_r28;
  puVar11[0x22] = unaff_r27;
  if (moby != (MobyInstance *)0x0) {
    piVar8 = (int *)moby->pVar;
    FastDecTimerS32(ZEXT48(piVar8));
    if ((((((((g_Pad.buttonsPressedThisFrame & DAT_0096ad80) != 0) && (*piVar8 == 0)) &&
           (piVar8[1] == 0)) &&
          ((DAT_0096bd8c == '\0' && (g_heroStateType != 2 && g_heroStateType != 7)))) &&
         ((((g_heroStateType != 3 &&
            ((g_heroStateType != 4 && (g_heroStateType != 5)))) &&
           (g_heroStateType != 6)) &&
          ((((g_heroStateType != 0x10 && (g_heroStateType != 0xe)) &&
            (g_heroStateType != 9)) &&
           (((g_heroStateType != 10 && (g_heroStateType != 0xb)) &&
            ((g_heroStateType < 0xd &&
             ((g_heroState != ANIM_TARGET_WALK && g_heroState != MOVEMENT_LOCKED &&
              (g_heroState != TURRET_PLANE_UI)))))))))))) &&
        (((GameCamera.pCurrentUpdCam == (void *)0x0 ||
          (*(short *)((int)GameCamera.pCurrentUpdCam + 0x86) != 5)) && (g_framesGroundedCnt != 0))))
       && ((g_standingOnMoby == 0 ||
           ((*(short *)(g_standingOnMoby + 0xa6) != 0x13e &&
            (*(short *)(g_standingOnMoby + 0xa6) != 0x46f)))))) {
      iVar19 = hero_ConsumeAmmo(-1,1);
      fVar2 = DAT_0096a368;
      fVar9 = GameCamera.orientMtx.forward.z;
      fVar5 = GameCamera.orientMtx.forward.y;
      fVar4 = GameCamera.orientMtx.forward.x;
      if (iVar19 == 0) {
        if ((g_Pad.buttonsPressedThisFrame & DAT_0096ad80) != 0) {
          PlayMobySound(0,0,moby);
        }
      }
      else {
        dVar32 = (double)DAT_0096a368;
        dVar30 = 0.0;
        if ((g_heroState == FIRST_PERSON_VIEW) && ((g_heroMobyPtr->modeBits & DISABLED) != NONE)) {
          fVar1 = ABS(GameCamera.orientMtx.forward.x);
          fVar3 = ABS(GameCamera.orientMtx.forward.y);
          uVar13 = (uint)GameCamera.orientMtx.forward.y >> 0x1d;
          *(float *)(puVar11 + 0x12) = fVar1 - fVar3;
          uVar22 = (ulonglong)((uint)fVar4 >> 0x1c) & 8 |
                   (ulonglong)(*(uint *)(puVar11 + 0x12) >> 0x1e) & 2 | (ulonglong)uVar13 & 4;
          fVar2 = fVar1;
          if (*(float *)(puVar11 + 0x12) - 0.0 < 0.0) {
            fVar2 = fVar3;
          }
          fVar6 = *(float *)(&g_atanQuadrantTable + (int)(uVar22 << 2));
          if (*(float *)(puVar11 + 0x12) - 0.0 < 0.0) {
            fVar3 = fVar1;
          }
          fVar1 = *(float *)(((uint)(uVar22 << 2) | 0x735900) + 4);
          dVar32 = dVar30;
          if (0.0 < fVar2) {
            lVar17 = uVar16 - 0x150;
            lVar21 = uVar16 - 0x7c;
            lVar20 = uVar16 - 0x8c;
            lVar24 = 2;
            fVar2 = (fVar3 - fVar2) / (fVar3 + fVar2);
            fVar3 = fVar2 * fVar2;
            *(float *)(puVar11 + 0x1c) = fVar2;
            *(float *)(puVar11 + 0x1b) = fVar2;
            *(float *)((int)puVar11 + 0xdc) = fVar2;
            *(float *)((int)puVar11 + 0xd4) = fVar2;
            fVar2 = fVar3 * fVar3;
            *(float *)(puVar11 + 0x1b) = *(float *)(puVar11 + 0x1b) * fVar3;
            *(float *)((int)puVar11 + 0xdc) = *(float *)((int)puVar11 + 0xdc) * fVar2;
            *(float *)(puVar11 + 0x1c) = *(float *)(puVar11 + 0x1c) * fVar2 * fVar3;
            do {
              *(float *)((int)lVar17 + 0xd4) = *(float *)((int)lVar17 + 0xc4) * fVar2 * fVar2;
              iVar19 = (int)lVar20;
              lVar20 = lVar20 + 8;
              lVar17 = lVar17 + 8;
              *(float *)((int)lVar21 + 4) = *(float *)(iVar19 + 4) * fVar2 * fVar2;
              lVar21 = lVar21 + 8;
              lVar24 = lVar24 + -1;
            } while (lVar24 != 0);
            lVar24 = 4;
            lVar21 = uVar16 - 0x8c;
            pfVar23 = (float *)&DAT_007358e0;
            lVar17 = lVar18;
            lVar20 = lVar21;
            do {
              fVar2 = *pfVar23;
              fVar3 = pfVar23[1];
              pfVar23 = pfVar23 + 2;
              *(float *)((int)lVar17 + 0xd4) = *(float *)((int)lVar17 + 0xd4) * fVar2;
              lVar17 = lVar17 + 8;
              *(float *)((int)lVar20 + 4) = *(float *)((int)lVar20 + 4) * fVar3;
              lVar20 = lVar20 + 8;
              lVar24 = lVar24 + -1;
            } while (lVar24 != 0);
            lVar20 = 2;
            lVar17 = lVar18;
            do {
              iVar19 = (int)lVar17;
              iVar12 = (int)lVar21;
              lVar17 = lVar17 + 0x10;
              lVar21 = lVar21 + 0x10;
              dVar32 = (double)((float)(dVar32 + (double)*(float *)(iVar19 + 0xd4)) +
                                *(float *)(iVar12 + 4) + *(float *)(iVar12 + 8) +
                               *(float *)(iVar12 + 0xc));
              lVar20 = lVar20 + -1;
            } while (lVar20 != 0);
            dVar32 = (double)((float)(dVar32 + 0.7853981852531433) * fVar6 + fVar1);
          }
          fVar3 = ABS(fVar9);
          fVar5 = fVar4 * fVar4 + fVar5 * fVar5;
          fVar2 = SQRT(fVar5);
          fVar1 = ABS(fVar2);
          *(float *)(puVar11 + 0x11) = fVar2;
          *(float *)((int)puVar11 + 0x8c) = fVar1 - fVar3;
          uVar22 = (ulonglong)(*(uint *)(puVar11 + 0x11) >> 0x1c) & 8 |
                   (ulonglong)(*(uint *)((int)puVar11 + 0x8c) >> 0x1e) & 2 |
                   (ulonglong)((uint)fVar9 >> 0x1d) & 4;
          fVar2 = ABS(*(float *)(puVar11 + 0x11));
          if (*(float *)((int)puVar11 + 0x8c) - 0.0 < 0.0) {
            fVar2 = fVar3;
          }
          fVar7 = *(float *)(&g_atanQuadrantTable + (int)(uVar22 << 2));
          fVar6 = *(float *)(((uint)(uVar22 << 2) | 0x735900) + 4);
          if (*(float *)((int)puVar11 + 0x8c) - 0.0 < 0.0) {
            fVar3 = fVar1;
          }
          dVar31 = dVar30;
          if (0.0 < fVar2) {
            lVar17 = uVar16 - 0x150;
            lVar21 = uVar16 - 0x9c;
            lVar20 = uVar16 - 0xac;
            lVar24 = 2;
            fVar2 = (fVar3 - fVar2) / (fVar3 + fVar2);
            fVar3 = fVar2 * fVar2;
            *(float *)(puVar11 + 0x18) = fVar2;
            *(float *)(puVar11 + 0x17) = fVar2;
            *(float *)((int)puVar11 + 0xbc) = fVar2;
            *(float *)((int)puVar11 + 0xb4) = fVar2;
            fVar2 = fVar3 * fVar3;
            *(float *)(puVar11 + 0x17) = *(float *)(puVar11 + 0x17) * fVar3;
            *(float *)((int)puVar11 + 0xbc) = *(float *)((int)puVar11 + 0xbc) * fVar2;
            *(float *)(puVar11 + 0x18) = *(float *)(puVar11 + 0x18) * fVar2 * fVar3;
            do {
              *(float *)((int)lVar17 + 0xb4) = *(float *)((int)lVar17 + 0xa4) * fVar2 * fVar2;
              iVar19 = (int)lVar20;
              lVar20 = lVar20 + 8;
              lVar17 = lVar17 + 8;
              *(float *)((int)lVar21 + 4) = *(float *)(iVar19 + 4) * fVar2 * fVar2;
              lVar21 = lVar21 + 8;
              lVar24 = lVar24 + -1;
            } while (lVar24 != 0);
            lVar24 = 4;
            lVar21 = uVar16 - 0xac;
            pfVar23 = (float *)&DAT_007358e0;
            lVar17 = lVar18;
            lVar20 = lVar21;
            do {
              fVar2 = *pfVar23;
              fVar3 = pfVar23[1];
              pfVar23 = pfVar23 + 2;
              *(float *)((int)lVar17 + 0xb4) = *(float *)((int)lVar17 + 0xb4) * fVar2;
              lVar17 = lVar17 + 8;
              *(float *)((int)lVar20 + 4) = *(float *)((int)lVar20 + 4) * fVar3;
              lVar20 = lVar20 + 8;
              lVar24 = lVar24 + -1;
            } while (lVar24 != 0);
            lVar17 = 2;
            do {
              iVar19 = (int)lVar18;
              iVar12 = (int)lVar21;
              lVar18 = lVar18 + 0x10;
              lVar21 = lVar21 + 0x10;
              dVar31 = (double)((float)(dVar31 + (double)*(float *)(iVar19 + 0xb4)) +
                                *(float *)(iVar12 + 4) + *(float *)(iVar12 + 8) +
                               *(float *)(iVar12 + 0xc));
              lVar17 = lVar17 + -1;
            } while (lVar17 != 0);
            dVar31 = (double)((float)(dVar31 + 0.7853981852531433) * fVar7 + fVar6);
          }
          fVar2 = GameCamera.orientMtx.forward.w;
          fVar5 = SQRT(fVar9 * fVar9 + fVar5);
          if (fVar5 == 0.0) {
            *(float *)(puVar11 + 0xe) = fVar4;
            *(float *)((int)puVar11 + 0x74) = GameCamera.orientMtx.forward.y;
            *(float *)(puVar11 + 0xf) = GameCamera.orientMtx.forward.z;
            fVar2 = GameCamera.orientMtx.forward.w;
            *(undefined4 *)(puVar11 + 0xf) = 0;
            *(undefined4 *)((int)puVar11 + 0x74) = 0;
            *(undefined4 *)(puVar11 + 0xe) = 0;
            dVar25 = dVar30;
            dVar26 = dVar30;
            dVar27 = dVar30;
          }
          else {
            fVar5 = 0.3 / fVar5;
            dVar27 = (double)(fVar4 * fVar5);
            fVar9 = GameCamera.orientMtx.forward.y * fVar5;
            dVar25 = (double)fVar9;
            fVar3 = GameCamera.orientMtx.forward.z * fVar5;
            dVar26 = (double)fVar3;
            *(float *)(puVar11 + 0xe) = fVar4 * fVar5;
            *(float *)((int)puVar11 + 0x74) = fVar9;
            *(float *)(puVar11 + 0xf) = fVar3;
          }
          fVar1 = GameCamera.orientMtx.up.z;
          fVar3 = GameCamera.orientMtx.up.y;
          fVar9 = GameCamera.orientMtx.up.x;
          fVar4 = GameCamera.orientMtx.up.y * GameCamera.orientMtx.up.y;
          *(float *)((int)puVar11 + 0x7c) = fVar2;
          fVar4 = SQRT(fVar1 * fVar1 + fVar9 * fVar9 + fVar4);
          fVar5 = -0.35 / fVar4;
          dVar29 = dVar30;
          if (0.0 - fVar4 < 0.0) {
            dVar29 = (double)(fVar1 * fVar5);
          }
          dVar28 = dVar30;
          if (0.0 - fVar4 < 0.0) {
            dVar28 = (double)(fVar3 * fVar5);
          }
          if (0.0 - fVar4 < 0.0) {
            dVar30 = (double)(fVar9 * fVar5);
          }
          if (fVar4 - 0.0 < 0.0) {
            dVar29 = (double)(fVar1 * fVar5);
          }
          if (fVar4 - 0.0 < 0.0) {
            dVar28 = (double)(fVar3 * fVar5);
          }
          if (fVar4 - 0.0 < 0.0) {
            dVar30 = (double)(fVar9 * fVar5);
          }
          fVar9 = (float)(dVar26 + dVar29) + GameCamera.posZ;
          fVar5 = (float)(dVar25 + dVar28) + GameCamera.posY;
          fVar4 = (float)(dVar27 + dVar30) + GameCamera.posX;
          *(float *)(puVar11 + 0xf) = (float)(dVar26 + dVar29);
          *(float *)((int)puVar11 + 0x74) = (float)(dVar25 + dVar28);
          *(float *)(puVar11 + 0xe) = (float)(dVar27 + dVar30);
          *(float *)(puVar11 + 0xf) = fVar9;
          *(float *)((int)puVar11 + 0x74) = fVar5;
          *(float *)(puVar11 + 0xe) = fVar4;
          dVar30 = -dVar31;
        }
        else if (DAT_0096bfa8 == 1) {
          fVar4 = (moby->transform).v1.y;
          fVar5 = (moby->transform).v1.x;
          fVar9 = (moby->transform).v1.z;
          fVar3 = ABS((moby->transform).v1.z);
          fVar4 = SQRT(fVar5 * fVar5 + fVar4 * fVar4);
          fVar1 = ABS(fVar4);
          *(float *)(puVar11 + 0x10) = fVar4;
          *(float *)((int)puVar11 + 0x84) = fVar1 - fVar3;
          uVar22 = (ulonglong)(*(uint *)(puVar11 + 0x10) >> 0x1c) & 8 |
                   (ulonglong)(*(uint *)((int)puVar11 + 0x84) >> 0x1e) & 2 |
                   (ulonglong)((uint)fVar9 >> 0x1d) & 4;
          fVar4 = *(float *)(&g_atanQuadrantTable + (int)(uVar22 << 2));
          fVar5 = ABS(*(float *)(puVar11 + 0x10));
          if (*(float *)((int)puVar11 + 0x84) - 0.0 < 0.0) {
            fVar5 = fVar3;
          }
          fVar9 = *(float *)(((uint)(uVar22 << 2) | 0x735900) + 4);
          if (*(float *)((int)puVar11 + 0x84) - 0.0 < 0.0) {
            fVar3 = fVar1;
          }
          if (0.0 < fVar5) {
            lVar17 = uVar16 - 0x150;
            lVar20 = uVar16 - 0xcc;
            lVar21 = uVar16 - 0xbc;
            lVar24 = 2;
            fVar5 = (fVar3 - fVar5) / (fVar3 + fVar5);
            fVar3 = fVar5 * fVar5;
            *(float *)(puVar11 + 0x14) = fVar5;
            *(float *)(puVar11 + 0x13) = fVar5;
            *(float *)((int)puVar11 + 0x9c) = fVar5;
            *(float *)((int)puVar11 + 0x94) = fVar5;
            fVar5 = fVar3 * fVar3;
            *(float *)(puVar11 + 0x13) = *(float *)(puVar11 + 0x13) * fVar3;
            *(float *)((int)puVar11 + 0x9c) = *(float *)((int)puVar11 + 0x9c) * fVar5;
            *(float *)(puVar11 + 0x14) = *(float *)(puVar11 + 0x14) * fVar5 * fVar3;
            do {
              *(float *)((int)lVar17 + 0x94) = *(float *)((int)lVar17 + 0x84) * fVar5 * fVar5;
              iVar19 = (int)lVar20;
              lVar17 = lVar17 + 8;
              lVar20 = lVar20 + 8;
              *(float *)((int)lVar21 + 4) = *(float *)(iVar19 + 4) * fVar5 * fVar5;
              lVar21 = lVar21 + 8;
              lVar24 = lVar24 + -1;
            } while (lVar24 != 0);
            lVar24 = 4;
            lVar21 = uVar16 - 0xcc;
            pfVar23 = (float *)&DAT_007358e0;
            lVar17 = lVar18;
            lVar20 = lVar21;
            do {
              fVar5 = *pfVar23;
              fVar3 = pfVar23[1];
              pfVar23 = pfVar23 + 2;
              *(float *)((int)lVar17 + 0x94) = *(float *)((int)lVar17 + 0x94) * fVar5;
              lVar17 = lVar17 + 8;
              *(float *)((int)lVar20 + 4) = *(float *)((int)lVar20 + 4) * fVar3;
              lVar20 = lVar20 + 8;
              lVar24 = lVar24 + -1;
            } while (lVar24 != 0);
            lVar17 = 2;
            do {
              iVar19 = (int)lVar18;
              iVar12 = (int)lVar21;
              lVar18 = lVar18 + 0x10;
              lVar21 = lVar21 + 0x10;
              dVar30 = (double)((float)(dVar30 + (double)*(float *)(iVar19 + 0x94)) +
                                *(float *)(iVar12 + 4) + *(float *)(iVar12 + 8) +
                               *(float *)(iVar12 + 0xc));
              lVar17 = lVar17 + -1;
            } while (lVar17 != 0);
            dVar30 = (double)((float)(dVar30 + 0.7853981852531433) * fVar4 + fVar9);
          }
          MB_SphericalToVector(0.6,fVar2,(float)-dVar30,(float *)(puVar11 + 0xe));
          fVar4 = (moby->pos).y;
          fVar5 = (moby->pos).z;
          *(float *)(puVar11 + 0xe) = *(float *)(puVar11 + 0xe) + (moby->pos).x;
          *(float *)((int)puVar11 + 0x74) = *(float *)((int)puVar11 + 0x74) + fVar4;
          *(float *)(puVar11 + 0xf) = *(float *)(puVar11 + 0xf) + fVar5;
        }
        else {
          MB_SphericalToVector(0.6,DAT_0096a368,-0.0,(float *)(puVar11 + 0xe));
          fVar4 = (moby->pos).y;
          fVar5 = (moby->pos).z;
          *(float *)(puVar11 + 0xe) = *(float *)(puVar11 + 0xe) + (moby->pos).x;
          *(float *)((int)puVar11 + 0x74) = *(float *)((int)puVar11 + 0x74) + fVar4;
          *(float *)(puVar11 + 0xf) = *(float *)(puVar11 + 0xf) + fVar5;
        }
        if (moby->animationId != '\x03') {
          MB_SetAnimation(moby,3,0,0);
        }
        Help_Suspend();
        iVar19 = FUN_002ae5d8(dVar32,dVar30,moby,uVar16 - 0xf0);
        piVar8[1] = iVar19;
        uVar15 = DAT_00a0fd8e;
        if (DAT_00a0fd8c != -1) {
          DAT_00a0fd8c = DAT_00a0fd8c + 1;
        }
        puVar11[0x1f] = (longlong)g_GameFrameCount;
        auVar33 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
        puVar11[0x1f] = (longlong)(int)(animationSpeed * ((float)(longlong)puVar11[0x1f] + 0.5));
        iVar19 = *(int *)((int)puVar11 + 0xfc);
        if ((int)(uint)uVar15 < iVar19 / 600) {
          sVar14 = (short)(iVar19 >> 0x1f);
          DAT_00a0fd8e = ((short)(iVar19 / 600) + sVar14) -
                         ((short)((short)(iVar19 / 0x2580000) + sVar14) >> 0xf);
        }
        auVar34 = ZEXT416(0xffffffff);
        auVar34 = auVar34 | auVar34 << 0x20 | auVar34 << 0x40 | auVar34 << 0x60;
        auVar35 = vectorShiftLeftIntegerWord(auVar34,auVar34);
        DAT_00a0fd90 = DAT_00a0fd90 | 1 << (Level & 0x3f) | 0x80000000;
        auVar34 = loadVectorLeftIndexed(0x1c,0x2a4400);
        auVar34 = auVar34 >> 0x60 & (GPiece<16>)0xffffffff;
        auVar33 = vectorMultiplyAddFloatingPoint
                            (auVar33,auVar34 | auVar34 << 0x20 | auVar34 << 0x40 | auVar34 << 0x60,
                             auVar35);
        auVar33 = vectorConvertToSignedFixedPointWordSaturate(auVar33,0);
        auVar33 = auVar33 >> 0x60 & (GPiece<16>)0xffffffff;
        uVar10 = storeVectorElementWordIndexed
                           (auVar33 | auVar33 << 0x20 | auVar33 << 0x40 | auVar33 << 0x60,0,
                            ZEXT48(piVar8));
        *(undefined4 *)((uint)piVar8 & 0xfffffffc) = uVar10;
      }
    }
    if (((moby->field43_0x70 & 2U) != 0) && (moby->animationId != '\x01')) {
      MB_SetAnimation(moby,1,0,0);
    }
    moby->modeBits = moby->modeBits | NO_POST_UPDATE;
  }
  return;
}


