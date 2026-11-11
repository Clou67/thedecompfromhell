// game/update/moby208.cpp -- reconstructed from NPEA00385 EBOOT
// STATUS: NOT STARTED (raw Ghidra output)
// 2 functions, 0x2ebd98-0x2ed158
#include "game/update/moby208.h"
#include "game/camera.h"
#include "game/collproc.h"
#include "game/draw.h"
#include "game/hero.h"
#include "game/mobyfunc.h"
#include "game/mobyutil.h"
#include "game/pad.h"
#include "game/partupd.h"
#include "game/sound.h"
#include "game/update/moby209.h"

// 0x02ebd98 (0x13ac bytes)
/* Moby 208 */

MobyInstance * UpdateMoby_208(MobyInstance *moby)

{
  byte bVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  void *pvVar6;
  undefined4 *puVar7;
  undefined4 *puVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  MobyInstance *pMVar16;
  int iVar17;
  MobyInstance *pMVar18;
  int iVar19;
  int iVar20;
  double dVar21;
  double dVar22;
  double dVar23;
  double dVar24;
  double dVar25;
  undefined4 uVar26;
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
  GPiece<16> local_a0;
  GPiece<16> local_90;
  float local_80;
  float local_7c;
  float local_78;
  undefined4 local_74;
  float local_70;
  float local_6c;
  float local_68;
  undefined4 local_64;
  
  pMVar18 = moby;
  if (moby != (MobyInstance *)0x0) {
    pMVar18 = (MobyInstance *)g_heroState;
    if (g_heroState == FIRST_PERSON_VIEW) {
      pMVar18 = (MobyInstance *)TransitionMovement(0x1e,1);
    }
    pvVar6 = moby->pVar;
    if (pvVar6 != (void *)0x0) {
      iVar19 = *(int *)((int)pvVar6 + 0x14);
      iVar20 = 0;
      if (iVar19 == 0) {
        iVar19 = M208_002ed160((double)(g_FrameTime * 24.0),moby);
        *(int *)((int)pvVar6 + 0x14) = iVar19;
      }
      if (iVar19 != 0) {
        iVar20 = *(int *)(iVar19 + 0x78);
      }
      if (((g_heroState == FIRST_PERSON_VIEW) || (g_heroState == WEAPON_FIRST_PERSON_VIEW)) &&
         (1 < g_heroStateTimer)) {
        DrawTargetCrosshair(1.0,moby,0xff0000ff,4);
        if ((DAT_0096a648 == 0) || (DAT_0096a644 == (MobyInstance *)0x0)) {
          if (DAT_0096a670 != 0) {
            DrawTargetCrosshair(0.5,moby,0xff00ff00,4);
          }
        }
        else {
          DrawTargetCrosshair(0.5,moby,0xff00ff00,0x2ebd50);
        }
      }
      iVar19 = DAT_0096a674;
      pMVar16 = DAT_0096a644;
      bVar1 = moby->state;
      pMVar18 = (MobyInstance *)(uint)bVar1;
      if (bVar1 < 8) {
        if (bVar1 < 4) {
          if (bVar1 < 2) {
            if ((moby->field43_0x70 & 2U) != 0) {
              if (moby->animationId != '\x01') {
                MB_SetAnimation(moby,1,0,(int)(animationSpeed * 10.5));
              }
              moby->state = '\x01';
            }
            if (*(uint *)((int)pvVar6 + 0x14) != 0) {
              GetBonePosition(moby,0,(ulonglong)*(uint *)((int)pvVar6 + 0x14) + 0x10);
              iVar19 = *(int *)((int)pvVar6 + 0x14);
              puVar7 = (undefined4 *)((uint)&moby->transform & 0xfffffff0);
              uVar28 = puVar7[2];
              uVar27 = puVar7[1];
              uVar26 = *puVar7;
              puVar8 = (undefined4 *)((uint)&(moby->transform).v1 & 0xfffffff0);
              uVar32 = puVar8[3];
              uVar31 = puVar8[2];
              uVar30 = puVar8[1];
              uVar29 = *puVar8;
              puVar8 = (undefined4 *)((uint)&(moby->transform).v2 & 0xfffffff0);
              uVar36 = puVar8[3];
              uVar35 = puVar8[2];
              uVar34 = puVar8[1];
              uVar33 = *puVar8;
              puVar8 = (undefined4 *)(iVar19 + 0xc0U & 0xfffffff0);
              puVar8[3] = puVar7[3];
              puVar8[2] = uVar28;
              puVar8[1] = uVar27;
              *puVar8 = uVar26;
              puVar7 = (undefined4 *)(iVar19 + 0xd0U & 0xfffffff0);
              puVar7[3] = uVar32;
              puVar7[2] = uVar31;
              puVar7[1] = uVar30;
              *puVar7 = uVar29;
              puVar7 = (undefined4 *)(iVar19 + 0xe0U & 0xfffffff0);
              puVar7[3] = uVar36;
              puVar7[2] = uVar35;
              puVar7[1] = uVar34;
              *puVar7 = uVar33;
            }
            if (((g_heroState == THROWING_GREEN_SWINGSHOT) ||
                ((g_heroStateType == 0xf && (DAT_0096a294 != 0)))) && (iVar20 != 0)) {
              *(undefined4 *)((int)pvVar6 + 0x1c) = 0x3f800000;
              *(undefined4 *)((int)pvVar6 + 0x20) = 0x3e8f5c29;
              *(undefined4 *)((int)pvVar6 + 0x18) = 0;
              *(float *)(iVar20 + 4) = g_FrameTime * 24.0;
              if (moby->animationId != '\x03') {
                MB_SetAnimation(moby,3,0,(int)(animationSpeed * 10.5));
              }
              PlayMobySound(0,0,moby);
              moby->state = '\x02';
            }
            fVar3 = animationSpeed;
            pMVar18 = (MobyInstance *)g_heroState;
            if (g_heroState == SWINGING_YELLOW_SWINGSHOT && iVar20 != 0) {
              iVar19 = *(int *)((int)pvVar6 + 0x14);
              fVar4 = *(float *)(DAT_0096a674 + 0x14) - *(float *)(iVar19 + 0x14);
              fVar9 = *(float *)(DAT_0096a674 + 0x10) - *(float *)(iVar19 + 0x10);
              fVar5 = *(float *)(DAT_0096a674 + 0x18) - *(float *)(iVar19 + 0x18);
              fVar2 = 7.5;
              if (DAT_0096ad90 < (int)(animationSpeed * 30.5)) {
                fVar2 = 5.5;
              }
              *(float *)(iVar20 + 4) =
                   SQRT(fVar5 * fVar5 + fVar9 * fVar9 + fVar4 * fVar4) /
                   (float)(longlong)(animationSpeed * fVar2);
              *(undefined4 *)((int)pvVar6 + 0x20) = 0x3e8f5c29;
              *(undefined4 *)((int)pvVar6 + 0x1c) = 0x3f800000;
              *(undefined4 *)((int)pvVar6 + 0x18) = 0;
              if (moby->animationId != '\x03') {
                MB_SetAnimation(moby,3,0,(int)(fVar3 * 10.5));
              }
              PlayMobySound(0,0,moby);
              pMVar18 = (MobyInstance *)0x9;
              moby->state = '\t';
            }
          }
          else if (bVar1 < 3) {
            RegisterFuncForMoby(&PTR_M1449_002eb6d8_0070b750,moby);
            if (((moby->field43_0x70 & 2U) != 0) && (moby->animationId != '\x04')) {
              MB_SetAnimation(moby,4,0,(int)(animationSpeed * 10.5));
            }
            iVar19 = *(int *)((int)pvVar6 + 0x14);
            dVar22 = (double)*(float *)(iVar20 + 4);
            dVar25 = (double)((DAT_0096a644->pos).x - *(float *)(iVar19 + 0x10));
            dVar24 = (double)((DAT_0096a644->pos).y - *(float *)(iVar19 + 0x14));
            dVar23 = (double)((DAT_0096a644->pos).z - *(float *)(iVar19 + 0x18));
            if (g_heroStateType == 0xf) {
              dVar22 = (double)(float)(dVar22 + (double)DAT_0096a254);
            }
            else if (((DAT_0096bd74 == 4) || (DAT_0096bd74 == 2)) &&
                    (0x40000000 <
                     (int)(FLOAT_ORDER(g_heroGroundDist)))) {
              dVar22 = (double)(g_FrameTime * 48.0);
            }
            iVar19 = CollLine(local_a0,&DAT_0096a644->pos,2,0,0);
            pMVar18 = DAT_0096a644;
            if (iVar19 == 0) {
              iVar19 = *(int *)((int)pvVar6 + 0x14);
              fVar9 = *(float *)(iVar19 + 0x14) - (DAT_0096a644->pos).y;
              fVar3 = (DAT_0096a644->pos).x;
              fVar4 = *(float *)(iVar19 + 0x10) - fVar3;
              fVar2 = *(float *)(iVar19 + 0x18) - (DAT_0096a644->pos).z;
              if ((double)SQRT(fVar2 * fVar2 + fVar4 * fVar4 + fVar9 * fVar9) <= dVar22) {
                *(float *)(iVar19 + 0x10) = fVar3;
                *(f32 *)(iVar19 + 0x14) = (pMVar18->pos).y;
                *(f32 *)(iVar19 + 0x18) = (pMVar18->pos).z;
                *(f32 *)(iVar19 + 0x1c) = (pMVar18->pos).w;
                moby->state = '\x03';
              }
              else {
                pMVar18 = (MobyInstance *)&DAT_002ebd50;
                fVar2 = 0.0;
                dVar21 = (double)SQRT((float)(dVar23 * dVar23 +
                                             (double)(float)(dVar25 * dVar25 +
                                                            (double)(float)(dVar24 * dVar24))));
                dVar22 = (double)(float)(dVar22 / dVar21);
                fVar3 = fVar2;
                if (0.0 - dVar21 < 0.0) {
                  fVar3 = (float)(dVar23 * dVar22);
                }
                fVar4 = fVar2;
                if (0.0 - dVar21 < 0.0) {
                  fVar4 = (float)(dVar24 * dVar22);
                }
                if (0.0 - dVar21 < 0.0) {
                  fVar2 = (float)(dVar25 * dVar22);
                }
                if (dVar21 - 0.0 < 0.0) {
                  fVar3 = (float)(dVar23 * dVar22);
                }
                if (dVar21 - 0.0 < 0.0) {
                  fVar4 = (float)(dVar24 * dVar22);
                }
                if (dVar21 - 0.0 < 0.0) {
                  fVar2 = (float)(dVar25 * dVar22);
                }
                *(float *)(iVar19 + 0x18) = *(float *)(iVar19 + 0x18) + fVar3;
                *(float *)(iVar19 + 0x14) = *(float *)(iVar19 + 0x14) + fVar4;
                *(float *)(iVar19 + 0x10) = *(float *)(iVar19 + 0x10) + fVar2;
              }
            }
            else {
              if ((int)(FLOAT_ORDER(g_heroGroundDist)) < 0x3f000001) {
                TransitionMovement(0,0);
                iVar19 = Hero_GetIdleAnim(0);
                Hero_TransAnim((float)(longlong)(animationSpeed * 14.5),iVar19,0);
              }
              else {
                TransitionMovement(6,1);
              }
              pMVar18 = (MobyInstance *)0x6;
              moby->state = '\x06';
            }
          }
          else {
            PlayMobySound(1,0,moby);
            RegisterFuncForMoby(&PTR_M1449_002eb6d8_0070b750,moby);
            pMVar18 = DAT_0096a644;
            iVar19 = *(int *)((int)pvVar6 + 0x14);
            *(f32 *)(iVar19 + 0x10) = (DAT_0096a644->pos).x;
            *(f32 *)(iVar19 + 0x14) = (pMVar18->pos).y;
            *(f32 *)(iVar19 + 0x18) = (pMVar18->pos).z;
            *(f32 *)(iVar19 + 0x1c) = (pMVar18->pos).w;
            moby->state = '\x04';
          }
        }
        else if (bVar1 < 6) {
          if (bVar1 < 5) {
            GetBonePosition(moby,0,local_90);
            iVar19 = CollLine(local_90,&DAT_0096a644->pos,2,0,0);
            if (iVar19 == 0) {
              if (((moby->field43_0x70 & 2U) != 0) && (moby->animationId != '\x04')) {
                MB_SetAnimation(moby,4,0,(int)(animationSpeed * 10.5));
              }
              RegisterFuncForMoby(&PTR_M1449_002eb6d8_0070b750,moby);
              pMVar18 = (MobyInstance *)&DAT_002ebd50;
              fVar3 = *(float *)((int)pvVar6 + 0x20) * (DAT_0071f408 * -0.100000024 + 1.0);
              *(float *)((int)pvVar6 + 0x20) = fVar3;
              *(float *)((int)pvVar6 + 0x18) = *(float *)((int)pvVar6 + 0x18) + 0.6981317;
              if (fVar3 < 0.16800001) {
                DAT_0096a294 = 0;
                iVar19 = *(int *)((int)pvVar6 + 0x14);
                if ((iVar19 == 0) ||
                   (fVar3 = *(float *)(iVar19 + 0x14) - g_heroPosition.y,
                   fVar2 = *(float *)(iVar19 + 0x10) - g_heroPosition.x,
                   fVar4 = *(float *)(iVar19 + 0x18) - g_heroPosition.z,
                   SQRT(fVar4 * fVar4 + fVar2 * fVar2 + fVar3 * fVar3) <= 3.5)) {
                  TransitionMovement(0,1);
                  pMVar18 = (MobyInstance *)0x6;
                  moby->state = '\x06';
                }
                else if ((g_Pad.downButtons & DAT_0096ad80) == 0) {
                  DAT_0096a668 = 1;
                  TransitionMovement(0,0);
                  iVar19 = Hero_GetIdleAnim(0);
                  Hero_TransAnim((float)(longlong)(animationSpeed * 14.5),iVar19,0);
                  pMVar18 = (MobyInstance *)0x6;
                  moby->state = '\x06';
                }
                else {
                  PlayMobySound(2,0,moby);
                  if (DAT_0096a658 == 0) {
                    TransitionMovement(0x25,1);
                  }
                  else {
                    TransitionMovement(0x26,1);
                  }
                  pMVar18 = (MobyInstance *)0x5;
                  moby->state = '\x05';
                }
              }
            }
            else {
              if (g_framesNotGrounded == 0) {
                TransitionMovement(0,1);
              }
              else {
                TransitionMovement(6,1);
              }
              pMVar18 = (MobyInstance *)0x6;
              moby->state = '\x06';
            }
          }
          else {
            iVar19 = *(int *)((int)pvVar6 + 0x14);
            *(f32 *)(iVar19 + 0x10) = (DAT_0096a644->pos).x;
            *(f32 *)(iVar19 + 0x14) = (pMVar16->pos).y;
            *(f32 *)(iVar19 + 0x18) = (pMVar16->pos).z;
            *(f32 *)(iVar19 + 0x1c) = (pMVar16->pos).w;
            if (((moby->field43_0x70 & 2U) != 0) && (moby->animationId != '\x04')) {
              MB_SetAnimation(moby,4,0,(int)(animationSpeed * 10.5));
            }
            *(float *)((int)pvVar6 + 0x20) =
                 *(float *)((int)pvVar6 + 0x20) * (DAT_0071f408 * -0.100000024 + 1.0);
            *(float *)((int)pvVar6 + 0x18) = *(float *)((int)pvVar6 + 0x18) + 0.6981317;
            pMVar18 = (MobyInstance *)RegisterFuncForMoby(&PTR_M1449_002eb6d8_0070b750,moby);
            if ((g_heroState != PULLING_GREEN_SWINGSHOT) && (g_heroState != UNK_26)) {
              pMVar18 = (MobyInstance *)0x6;
              moby->state = '\x06';
            }
          }
        }
        else if (bVar1 < 7) {
          RegisterFuncForMoby(&PTR_M1449_002eb6d8_0070b750,moby);
          pMVar18 = (MobyInstance *)0x7;
          *(float *)(iVar20 + 4) = g_FrameTime * 80.0;
          moby->state = '\a';
        }
        else {
          GetBonePosition(moby,0,&local_80);
          iVar19 = *(int *)((int)pvVar6 + 0x14);
          fVar3 = *(float *)(iVar19 + 0x14);
          fVar2 = *(float *)(iVar19 + 0x10);
          fVar4 = *(float *)(iVar19 + 0x18);
          fVar9 = local_7c - fVar3;
          fVar12 = local_78 - fVar4;
          fVar5 = local_80 - fVar2;
          if (SQRT((fVar4 - local_78) * (fVar4 - local_78) +
                   (fVar2 - local_80) * (fVar2 - local_80) + (fVar3 - local_7c) * (fVar3 - local_7c)
                  ) <= *(float *)(iVar20 + 4)) {
            *(float *)(iVar19 + 0x10) = local_80;
            *(float *)(iVar19 + 0x14) = local_7c;
            *(float *)(iVar19 + 0x18) = local_78;
            *(undefined4 *)(iVar19 + 0x1c) = local_74;
            if (moby->animationId != '\x01') {
              MB_SetAnimation(moby,1,0,(int)(animationSpeed * 10.5));
            }
            pMVar18 = (MobyInstance *)0x1;
            moby->state = '\x01';
          }
          else {
            fVar11 = 0.0;
            fVar10 = SQRT(fVar12 * fVar12 + fVar5 * fVar5 + fVar9 * fVar9);
            fVar15 = *(float *)(iVar20 + 4) / fVar10;
            fVar14 = fVar11;
            if (0.0 - fVar10 < 0.0) {
              fVar14 = fVar12 * fVar15;
            }
            fVar13 = fVar11;
            if (0.0 - fVar10 < 0.0) {
              fVar13 = fVar9 * fVar15;
            }
            if (0.0 - fVar10 < 0.0) {
              fVar11 = fVar5 * fVar15;
            }
            if (fVar10 - 0.0 < 0.0) {
              fVar14 = fVar12 * fVar15;
            }
            if (fVar10 - 0.0 < 0.0) {
              fVar13 = fVar9 * fVar15;
            }
            if (fVar10 - 0.0 < 0.0) {
              fVar11 = fVar5 * fVar15;
            }
            *(float *)(iVar19 + 0x18) = fVar4 + fVar14;
            *(float *)(iVar19 + 0x14) = fVar3 + fVar13;
            *(float *)(iVar19 + 0x10) = fVar2 + fVar11;
            pMVar18 = (MobyInstance *)RegisterFuncForMoby(&PTR_M1449_002eb6d8_0070b750,moby);
          }
        }
      }
      else if (bVar1 == 0xe) {
        if (((moby->field43_0x70 & 2U) != 0) && (moby->animationId != '\x04')) {
          MB_SetAnimation(moby,4,0,(int)(animationSpeed * 10.5));
        }
        GetBonePosition(moby,0,&local_70);
        iVar19 = *(int *)((int)pvVar6 + 0x14);
        fVar3 = *(float *)(iVar19 + 0x14);
        fVar2 = *(float *)(iVar19 + 0x10);
        fVar4 = *(float *)(iVar19 + 0x18);
        fVar9 = local_6c - fVar3;
        fVar12 = local_68 - fVar4;
        fVar5 = local_70 - fVar2;
        if (SQRT((fVar4 - local_68) * (fVar4 - local_68) +
                 (fVar2 - local_70) * (fVar2 - local_70) + (fVar3 - local_6c) * (fVar3 - local_6c))
            <= *(float *)(iVar20 + 4)) {
          *(float *)(iVar19 + 0x10) = local_70;
          *(float *)(iVar19 + 0x14) = local_6c;
          *(float *)(iVar19 + 0x18) = local_68;
          *(undefined4 *)(iVar19 + 0x1c) = local_64;
          if (moby->animationId != '\x01') {
            MB_SetAnimation(moby,1,0,(int)(animationSpeed * 10.5));
          }
          moby->state = '\x01';
        }
        else {
          fVar11 = 0.0;
          fVar10 = SQRT(fVar12 * fVar12 + fVar5 * fVar5 + fVar9 * fVar9);
          fVar15 = *(float *)(iVar20 + 4) / fVar10;
          fVar14 = fVar11;
          if (0.0 - fVar10 < 0.0) {
            fVar14 = fVar12 * fVar15;
          }
          fVar13 = fVar11;
          if (0.0 - fVar10 < 0.0) {
            fVar13 = fVar9 * fVar15;
          }
          if (0.0 - fVar10 < 0.0) {
            fVar11 = fVar5 * fVar15;
          }
          if (fVar10 - 0.0 < 0.0) {
            fVar14 = fVar12 * fVar15;
          }
          if (fVar10 - 0.0 < 0.0) {
            fVar13 = fVar9 * fVar15;
          }
          if (fVar10 - 0.0 < 0.0) {
            fVar11 = fVar5 * fVar15;
          }
          *(float *)(iVar19 + 0x18) = fVar4 + fVar14;
          *(float *)(iVar19 + 0x14) = fVar3 + fVar13;
          *(float *)(iVar19 + 0x10) = fVar2 + fVar11;
          RegisterFuncForMoby(&PTR_M1449_002eb6d8_0070b750,moby);
        }
        pMVar18 = (MobyInstance *)g_heroState;
        if (g_heroState == SWINGING_YELLOW_SWINGSHOT && iVar20 != 0) {
          iVar19 = *(int *)((int)pvVar6 + 0x14);
          fVar3 = *(float *)(DAT_0096a674 + 0x14) - *(float *)(iVar19 + 0x14);
          fVar2 = *(float *)(DAT_0096a674 + 0x10) - *(float *)(iVar19 + 0x10);
          fVar4 = *(float *)(DAT_0096a674 + 0x18) - *(float *)(iVar19 + 0x18);
          *(float *)(iVar20 + 4) = SQRT(fVar4 * fVar4 + fVar2 * fVar2 + fVar3 * fVar3) * 0.1;
          *(undefined4 *)((int)pvVar6 + 0x20) = 0;
          *(undefined4 *)((int)pvVar6 + 0x1c) = 0x3f800000;
          *(undefined4 *)((int)pvVar6 + 0x18) = 0;
          if (moby->animationId != '\x03') {
            MB_SetAnimation(moby,3,0,(int)(animationSpeed * 10.5));
          }
          pMVar18 = (MobyInstance *)0x9;
          moby->state = '\t';
        }
      }
      else if (bVar1 == 0xd) {
        if (((moby->field43_0x70 & 2U) != 0) && (moby->animationId != '\x04')) {
          MB_SetAnimation(moby,4,0,(int)(animationSpeed * 10.5));
        }
        RegisterFuncForMoby(&PTR_M1449_002eb6d8_0070b750,moby);
        pMVar18 = (MobyInstance *)0xe;
        *(float *)(iVar20 + 4) = g_FrameTime * 80.0;
        moby->state = '\x0e';
      }
      else if (bVar1 == 0xc) {
        if (DAT_0096a674 != 0) {
          iVar20 = *(int *)((int)pvVar6 + 0x14);
          *(undefined4 *)(iVar20 + 0x10) = *(undefined4 *)(DAT_0096a674 + 0x10);
          *(undefined4 *)(iVar20 + 0x14) = *(undefined4 *)(iVar19 + 0x14);
          *(undefined4 *)(iVar20 + 0x18) = *(undefined4 *)(iVar19 + 0x18);
          *(undefined4 *)(iVar20 + 0x1c) = *(undefined4 *)(iVar19 + 0x1c);
        }
        if (((moby->field43_0x70 & 2U) != 0) && (moby->animationId != '\x04')) {
          MB_SetAnimation(moby,4,0,(int)(animationSpeed * 10.5));
        }
        *(float *)((int)pvVar6 + 0x20) =
             *(float *)((int)pvVar6 + 0x20) * (DAT_0071f408 * -0.6 + 1.0);
        *(float *)((int)pvVar6 + 0x18) = *(float *)((int)pvVar6 + 0x18) + 0.6981317;
        RegisterFuncForMoby(&PTR_M1449_002eb6d8_0070b750,moby);
        pMVar18 = (MobyInstance *)g_heroState;
        if (g_heroState != SWINGING_YELLOW_SWINGSHOT) {
          pMVar18 = (MobyInstance *)0xd;
          moby->state = '\r';
        }
      }
      else if (bVar1 == 0xb) {
        if (((moby->field43_0x70 & 2U) != 0) && (moby->animationId != '\x04')) {
          MB_SetAnimation(moby,4,0,(int)(animationSpeed * 10.5));
        }
        RegisterFuncForMoby(&PTR_M1449_002eb6d8_0070b750,moby);
        pMVar18 = (MobyInstance *)&DAT_002ebd50;
        fVar3 = *(float *)((int)pvVar6 + 0x20) * (DAT_0071f408 * -0.6 + 1.0);
        *(float *)((int)pvVar6 + 0x20) = fVar3;
        *(float *)((int)pvVar6 + 0x18) = *(float *)((int)pvVar6 + 0x18) + 0.6981317;
        if (fVar3 < 0.16800001) {
          pMVar18 = (MobyInstance *)0x1;
          DAT_0096a67c = 1;
          moby->state = '\f';
        }
      }
      else if (bVar1 == 10) {
        RegisterFuncForMoby(&PTR_M1449_002eb6d8_0070b750,moby);
        pMVar18 = (MobyInstance *)0xb;
        moby->state = '\v';
      }
      else if (bVar1 == 9) {
        RegisterFuncForMoby(&PTR_M1449_002eb6d8_0070b750,moby);
        if (((moby->field43_0x70 & 2U) != 0) && (moby->animationId != '\x04')) {
          MB_SetAnimation(moby,4,0,(int)(animationSpeed * 10.5));
        }
        iVar17 = DAT_0096a674;
        iVar19 = *(int *)((int)pvVar6 + 0x14);
        fVar3 = *(float *)(DAT_0096a674 + 0x14) - *(float *)(iVar19 + 0x14);
        fVar2 = *(float *)(DAT_0096a674 + 0x10) - *(float *)(iVar19 + 0x10);
        fVar4 = *(float *)(DAT_0096a674 + 0x18) - *(float *)(iVar19 + 0x18);
        fVar9 = SQRT(fVar4 * fVar4 + fVar2 * fVar2 + fVar3 * fVar3);
        if (fVar9 <= *(float *)(iVar20 + 4)) {
          *(float *)(iVar19 + 0x10) = *(float *)(DAT_0096a674 + 0x10);
          *(undefined4 *)(iVar19 + 0x14) = *(undefined4 *)(iVar17 + 0x14);
          *(undefined4 *)(iVar19 + 0x18) = *(undefined4 *)(iVar17 + 0x18);
          *(undefined4 *)(iVar19 + 0x1c) = *(undefined4 *)(iVar17 + 0x1c);
          moby->state = '\v';
          pMVar18 = (MobyInstance *)PlayMobySound(1,0,moby);
        }
        else {
          fVar10 = *(float *)(iVar20 + 4) / fVar9;
          pMVar18 = (MobyInstance *)&DAT_002ebd50;
          fVar5 = 0.0;
          fVar12 = fVar5;
          if (0.0 - fVar9 < 0.0) {
            fVar12 = fVar4 * fVar10;
          }
          fVar11 = fVar5;
          if (0.0 - fVar9 < 0.0) {
            fVar11 = fVar3 * fVar10;
          }
          if (0.0 - fVar9 < 0.0) {
            fVar5 = fVar2 * fVar10;
          }
          if (fVar9 - 0.0 < 0.0) {
            fVar12 = fVar4 * fVar10;
          }
          if (fVar9 - 0.0 < 0.0) {
            fVar11 = fVar3 * fVar10;
          }
          if (fVar9 - 0.0 < 0.0) {
            fVar5 = fVar2 * fVar10;
          }
          *(float *)(iVar19 + 0x18) = *(float *)(iVar19 + 0x18) + fVar12;
          *(float *)(iVar19 + 0x14) = *(float *)(iVar19 + 0x14) + fVar11;
          *(float *)(iVar19 + 0x10) = *(float *)(iVar19 + 0x10) + fVar5;
        }
      }
    }
  }
  return pMVar18;
}


// 0x02ed144 (0x14 bytes)
void M209_002ed144(void)

{
  DAT_007feb6c = 0x10000;
  return;
}


