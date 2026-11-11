// game/update/moby575.cpp -- reconstructed from NPEA00385 EBOOT
// STATUS: NOT STARTED (raw Ghidra output)
// 3 functions, 0x3c656c-0x3c7080
#include "game/update/moby575.h"
#include "game/collproc.h"
#include "game/draw.h"
#include "game/hero.h"
#include "game/mobyfunc.h"
#include "game/mobyutil.h"
#include "game/update/camera5.h"
#include "idol/fastfunc.h"

// 0x03c656c (0x14 bytes)
void M575_003c656c(void)

{
  DAT_00846038 = 0x10000;
  return;
}


// 0x03c65c8 (0x668 bytes)
// inlined: FastAtan2 @0x3c690c, FastAtan2 @0x3c6ad0
void M575_003c65c8
               (double param_1,float *param_2,undefined4 *param_3,float *param_4,float *param_5,
               undefined8 param_6)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  uint uVar7;
  uint uVar8;
  ulonglong *puVar9;
  int iVar10;
  int iVar11;
  ulonglong uVar12;
  longlong lVar13;
  longlong lVar14;
  longlong lVar15;
  ulonglong uVar16;
  float *pfVar18;
  longlong lVar17;
  ulonglong unaff_r25;
  ulonglong unaff_r26;
  ulonglong unaff_r27;
  ulonglong unaff_r28;
  ulonglong unaff_r29;
  ulonglong unaff_r30;
  ulonglong unaff_r31;
  ulonglong in_LR;
  longlong lVar19;
  double dVar20;
  double dVar21;
  undefined8 uVar22;
  double dVar23;
  double dVar24;
  double dVar25;
  double dVar26;
  ulonglong in_f21;
  ulonglong in_f22;
  ulonglong in_f23;
  double dVar27;
  ulonglong in_f24;
  double dVar28;
  ulonglong in_f25;
  double dVar29;
  ulonglong in_f26;
  double dVar30;
  ulonglong in_f27;
  double dVar31;
  ulonglong in_f28;
  ulonglong in_f29;
  double dVar32;
  ulonglong in_f30;
  ulonglong in_f31;
  double dVar33;
  float fVar34;
  
  uVar12 = ZEXT48(&stack0x00000000);
  lVar14 = uVar12 - 0x170;
  puVar9 = (ulonglong *)lVar14;
  *puVar9 = uVar12;
  puVar9[0x30] = in_LR;
  puVar9[0x23] = in_f21;
  puVar9[0x24] = in_f22;
  puVar9[0x25] = in_f23;
  puVar9[0x26] = in_f24;
  puVar9[0x27] = in_f25;
  puVar9[0x28] = in_f26;
  puVar9[0x29] = in_f27;
  puVar9[0x2a] = in_f28;
  puVar9[0x2b] = in_f29;
  puVar9[0x2c] = in_f30;
  puVar9[0x2d] = in_f31;
  puVar9[0x1e] = unaff_r27;
  puVar9[0x1f] = unaff_r28;
  puVar9[0x22] = unaff_r31;
  puVar9[0x1d] = unaff_r26;
  puVar9[0x1c] = unaff_r25;
  puVar9[0x20] = unaff_r29;
  dVar33 = 300.5;
  puVar9[0x21] = unaff_r30;
  puVar9[0x19] = (longlong)(int)(animationSpeed * 300.5);
  dVar20 = (double)FastIntToDouble(*(undefined4 *)((int)puVar9 + 0xcc));
  dVar21 = (double)FastIntToDouble(param_6);
  dVar24 = 2.0;
  dVar32 = (double)(float)((double)(float)(dVar21 * 3.1415927410125732) / dVar20);
  fVar34 = MB_WrapRot((float)(dVar32 * 2.0));
  dVar31 = 1.570796251296997;
  dVar30 = 3.141592502593994;
  fVar34 = fVar34 + 1.5707963;
  dVar29 = -3.141592502593994;
  dVar28 = -0.16666656732559204;
  dVar27 = 0.008333025500178337;
  dVar21 = -0.0001980741071747616;
  dVar20 = 2.601886990305502e-06;
  fVar1 = 3.1415925 - fVar34;
  if (fVar34 - (3.1415925 - fVar34) < 0.0) {
    fVar1 = fVar34;
  }
  fVar2 = -3.1415925 - fVar34;
  if ((-3.1415925 - fVar34) - fVar1 < 0.0) {
    fVar2 = fVar1;
  }
  fVar4 = fVar2 * fVar2;
  fVar34 = fVar4 * fVar4 * fVar2;
  fVar1 = fVar4 * fVar34;
  dVar32 = (double)FastWrapRot
                             ((float)dVar32,
                              (1.0 - (fVar4 * fVar1 * 2.601887e-06 +
                                     fVar1 * -0.0001980741 +
                                     fVar34 * 0.0083330255 + fVar4 * fVar2 * -0.16666657 + fVar2)) *
                              0.3926991);
  uVar22 = FastWrapRot((float)(dVar32 * 0.800000011920929),0.6283185);
  dVar32 = (double)FastDiffRots(uVar22,0x3ff921fb60000000);
  dVar32 = (double)FastWrapRot((float)param_1,(float)dVar32);
  puVar9[0x19] = (longlong)(int)((double)animationSpeed * dVar33);
  dVar23 = (double)FastIntToDouble(*(undefined4 *)((int)puVar9 + 0xcc));
  puVar9[0x19] = (longlong)(int)((double)animationSpeed * dVar33);
  dVar33 = (double)FastIntToDouble(*(int *)((int)puVar9 + 0xcc) - (int)param_6);
  dVar25 = (double)(float)(dVar32 + dVar31);
  dVar31 = (double)(float)(dVar30 - dVar32);
  if (dVar32 - (double)(float)(dVar30 - dVar32) < 0.0) {
    dVar31 = dVar32;
  }
  dVar26 = (double)(float)(dVar30 - dVar25);
  if (dVar25 - (double)(float)(dVar30 - dVar25) < 0.0) {
    dVar26 = dVar25;
  }
  dVar30 = (double)(float)(dVar29 - dVar32);
  if ((double)(float)(dVar29 - dVar32) - dVar31 < 0.0) {
    dVar30 = dVar31;
  }
  dVar31 = (double)(float)(dVar29 - dVar25);
  if ((double)(float)(dVar29 - dVar25) - dVar26 < 0.0) {
    dVar31 = dVar26;
  }
  dVar29 = (double)(float)(dVar30 * dVar30);
  dVar32 = (double)(float)(dVar31 * dVar31);
  dVar25 = (double)(float)(dVar29 * (double)(float)(dVar29 * dVar30));
  fVar34 = (float)((double)(float)((double)(float)(dVar33 * 3.0) / dVar23) + dVar24);
  dVar24 = (double)(float)(dVar32 * (double)(float)(dVar32 * dVar31));
  dVar33 = (double)(float)(dVar29 * dVar25);
  dVar23 = (double)(float)(dVar32 * dVar24);
  fVar2 = fVar34 * (float)((double)(float)(dVar29 * dVar33) * dVar20 +
                          (double)(float)(dVar33 * dVar21 +
                                         (double)(float)(dVar25 * dVar27 +
                                                        (double)(float)((double)(float)(dVar29 * 
                                                  dVar30) * dVar28 + dVar30))));
  fVar34 = fVar34 * (float)((double)(float)(dVar32 * dVar23) * dVar20 +
                           (double)(float)(dVar23 * dVar21 +
                                          (double)(float)(dVar24 * dVar27 +
                                                         (double)(float)((double)(float)(dVar32 * 
                                                  dVar31) * dVar28 + dVar31))));
  param_2[1] = fVar2;
  fVar1 = 0.0;
  fVar2 = fVar2 + param_5[1];
  *param_2 = fVar34;
  fVar34 = fVar34 + *param_5;
  param_2[1] = fVar2;
  fVar2 = param_4[1] - fVar2;
  *param_2 = fVar34;
  fVar34 = *param_4 - fVar34;
  fVar6 = ABS(fVar2);
  fVar4 = ABS(fVar34);
  *(float *)((int)puVar9 + 0x7c) = fVar34;
  *(float *)(puVar9 + 0x10) = fVar2;
  param_2[2] = 0.0;
  fVar34 = param_5[2];
  *(float *)((int)puVar9 + 0x84) = fVar4 - fVar6;
  uVar7 = *(uint *)((int)puVar9 + 0x7c);
  fVar2 = *(float *)((int)puVar9 + 0x7c);
  uVar8 = *(uint *)(puVar9 + 0x10);
  param_2[2] = fVar34 + 3.0;
  uVar16 = (ulonglong)(uVar7 >> 0x1c) & 8 |
           (ulonglong)(*(uint *)((int)puVar9 + 0x84) >> 0x1e) & 2 | (ulonglong)(uVar8 >> 0x1d) & 4;
  fVar34 = ABS(fVar2);
  if (*(float *)((int)puVar9 + 0x84) - 0.0 < 0.0) {
    fVar34 = fVar6;
  }
  fVar6 = *(float *)(&g_atanQuadrantTable + (int)(uVar16 << 2));
  fVar2 = *(float *)(((uint)(uVar16 << 2) | 0x735900) + 4);
  fVar3 = ABS(*(float *)(puVar9 + 0x10));
  if (*(float *)((int)puVar9 + 0x84) - 0.0 < 0.0) {
    fVar3 = fVar4;
  }
  fVar4 = fVar1;
  if (0.0 < fVar34) {
    lVar13 = uVar12 - 0x160;
    lVar15 = uVar12 - 200;
    lVar17 = uVar12 - 0xb8;
    lVar19 = 2;
    fVar34 = (fVar3 - fVar34) / (fVar3 + fVar34);
    fVar4 = fVar34 * fVar34;
    *(float *)((int)puVar9 + 0xb4) = fVar34;
    *(float *)((int)puVar9 + 0xac) = fVar34;
    *(float *)(puVar9 + 0x16) = fVar34;
    *(float *)(puVar9 + 0x15) = fVar34;
    fVar34 = fVar4 * fVar4;
    *(float *)((int)puVar9 + 0xac) = *(float *)((int)puVar9 + 0xac) * fVar4;
    *(float *)(puVar9 + 0x16) = *(float *)(puVar9 + 0x16) * fVar34;
    *(float *)((int)puVar9 + 0xb4) = *(float *)((int)puVar9 + 0xb4) * fVar34 * fVar4;
    do {
      *(float *)((int)lVar13 + 0xa8) = *(float *)((int)lVar13 + 0x98) * fVar34 * fVar34;
      iVar10 = (int)lVar15;
      lVar13 = lVar13 + 8;
      lVar15 = lVar15 + 8;
      *(float *)((int)lVar17 + 4) = *(float *)(iVar10 + 4) * fVar34 * fVar34;
      lVar17 = lVar17 + 8;
      lVar19 = lVar19 + -1;
    } while (lVar19 != 0);
    lVar19 = 4;
    lVar17 = uVar12 - 200;
    pfVar18 = (float *)&DAT_007358e0;
    lVar13 = lVar14;
    lVar15 = lVar17;
    do {
      fVar34 = *pfVar18;
      fVar4 = pfVar18[1];
      pfVar18 = pfVar18 + 2;
      *(float *)((int)lVar13 + 0xa8) = *(float *)((int)lVar13 + 0xa8) * fVar34;
      lVar13 = lVar13 + 8;
      *(float *)((int)lVar15 + 4) = *(float *)((int)lVar15 + 4) * fVar4;
      lVar15 = lVar15 + 8;
      lVar19 = lVar19 + -1;
    } while (lVar19 != 0);
    lVar15 = 2;
    lVar13 = lVar14;
    fVar34 = fVar1;
    do {
      iVar10 = (int)lVar13;
      lVar13 = lVar13 + 0x10;
      iVar11 = (int)lVar17;
      lVar17 = lVar17 + 0x10;
      fVar34 = fVar34 + *(float *)(iVar10 + 0xa8) + *(float *)(iVar11 + 4) + *(float *)(iVar11 + 8)
               + *(float *)(iVar11 + 0xc);
      lVar15 = lVar15 + -1;
    } while (lVar15 != 0);
    fVar4 = (fVar34 + 0.7853982) * fVar6 + fVar2;
  }
  fVar34 = param_2[1];
  fVar2 = param_4[1];
  fVar6 = *param_2;
  fVar3 = *param_4;
  param_3[2] = fVar4;
  fVar4 = param_4[2];
  fVar5 = param_2[2];
  fVar34 = SQRT((fVar6 - fVar3) * (fVar6 - fVar3) + (fVar34 - fVar2) * (fVar34 - fVar2));
  *(float *)((int)puVar9 + 0x74) = fVar4 - fVar5;
  fVar4 = ABS(fVar4 - fVar5);
  fVar2 = ABS(fVar34);
  *(float *)(puVar9 + 0xe) = fVar34;
  *(float *)(puVar9 + 0xf) = fVar2 - fVar4;
  uVar16 = (ulonglong)(*(uint *)(puVar9 + 0xe) >> 0x1c) & 8 |
           (ulonglong)(*(uint *)(puVar9 + 0xf) >> 0x1e) & 2 |
           (ulonglong)(*(uint *)((int)puVar9 + 0x74) >> 0x1d) & 4;
  fVar34 = ABS(*(float *)(puVar9 + 0xe));
  if (*(float *)(puVar9 + 0xf) - 0.0 < 0.0) {
    fVar34 = fVar4;
  }
  fVar4 = *(float *)(&g_atanQuadrantTable + (int)(uVar16 << 2));
  fVar6 = ABS(*(float *)((int)puVar9 + 0x74));
  if (*(float *)(puVar9 + 0xf) - 0.0 < 0.0) {
    fVar6 = fVar2;
  }
  fVar2 = *(float *)(((uint)(uVar16 << 2) | 0x735900) + 4);
  if (0.0 < fVar34) {
    lVar13 = uVar12 - 0x160;
    lVar17 = uVar12 - 0xd8;
    lVar15 = uVar12 - 0xe8;
    lVar19 = 2;
    fVar34 = (fVar6 - fVar34) / (fVar6 + fVar34);
    fVar6 = fVar34 * fVar34;
    *(float *)((int)puVar9 + 0x94) = fVar34;
    *(float *)((int)puVar9 + 0x8c) = fVar34;
    *(float *)(puVar9 + 0x12) = fVar34;
    *(float *)(puVar9 + 0x11) = fVar34;
    fVar34 = fVar6 * fVar6;
    *(float *)((int)puVar9 + 0x8c) = *(float *)((int)puVar9 + 0x8c) * fVar6;
    *(float *)(puVar9 + 0x12) = *(float *)(puVar9 + 0x12) * fVar34;
    *(float *)((int)puVar9 + 0x94) = *(float *)((int)puVar9 + 0x94) * fVar34 * fVar6;
    do {
      *(float *)((int)lVar13 + 0x88) = *(float *)((int)lVar13 + 0x78) * fVar34 * fVar34;
      iVar10 = (int)lVar15;
      lVar15 = lVar15 + 8;
      lVar13 = lVar13 + 8;
      *(float *)((int)lVar17 + 4) = *(float *)(iVar10 + 4) * fVar34 * fVar34;
      lVar17 = lVar17 + 8;
      lVar19 = lVar19 + -1;
    } while (lVar19 != 0);
    lVar19 = 4;
    lVar17 = uVar12 - 0xe8;
    pfVar18 = (float *)&DAT_007358e0;
    lVar13 = lVar14;
    lVar15 = lVar17;
    do {
      fVar34 = *pfVar18;
      fVar6 = pfVar18[1];
      pfVar18 = pfVar18 + 2;
      *(float *)((int)lVar13 + 0x88) = *(float *)((int)lVar13 + 0x88) * fVar34;
      lVar13 = lVar13 + 8;
      *(float *)((int)lVar15 + 4) = *(float *)((int)lVar15 + 4) * fVar6;
      lVar15 = lVar15 + 8;
      lVar19 = lVar19 + -1;
    } while (lVar19 != 0);
    lVar13 = 2;
    do {
      iVar10 = (int)lVar14;
      lVar14 = lVar14 + 0x10;
      iVar11 = (int)lVar17;
      lVar17 = lVar17 + 0x10;
      fVar1 = fVar1 + *(float *)(iVar10 + 0x88) + *(float *)(iVar11 + 4) + *(float *)(iVar11 + 8) +
              *(float *)(iVar11 + 0xc);
      lVar13 = lVar13 + -1;
    } while (lVar13 != 0);
    fVar1 = (fVar1 + 0.7853982) * fVar4 + fVar2;
  }
  *param_3 = 0;
  param_3[1] = -fVar1;
  return;
}


// 0x03c6c48 (0x438 bytes)
/* Moby 575 */

void UpdateMoby_575(MobyInstance *moby)

{
  u8 uVar1;
  void *pvVar2;
  undefined4 uVar3;
  bool bVar4;
  float fVar5;
  longlong lVar6;
  int iVar7;
  ulonglong uVar8;
  double dVar9;
  GPiece<16> auVar10;
  GPiece<16> auVar11;
  GPiece<16> auVar12;
  float local_a0;
  float local_9c;
  float local_98;
  float local_94;
  GPiece<16> auStack_90;
  GPiece<16> auStack_80;
  float local_70;
  float local_6c;
  float local_68;
  float local_64;
  float afStack_60 [4];
  longlong local_50;
  
  lVar6 = (longlong)(int)moby;
  if (moby != (MobyInstance *)0x0) {
    pvVar2 = moby->pVar;
    uVar8 = ZEXT48(pvVar2);
    if (pvVar2 != (void *)0x0) {
      uVar1 = moby->state;
      if (uVar1 != '\x04') {
        if (uVar1 == '\x03') {
          if ((DAT_0096a778 & 2) != 0) {
            Camera_DeactivateMobyDrivenCam(0);
            TransitionMovement(0,1);
            LetterBoxOn = 0;
            moby->state = '\x04';
          }
        }
        else if (uVar1 == '\x02') {
          if (*(int *)((int)pvVar2 + 0x14) == 0) {
            M575_003c65c8
                      ((double)(moby->rotation).z,&local_70,afStack_60,lVar6 + 0x10,lVar6 + 0x10,
                       *(undefined4 *)((int)pvVar2 + 0x10));
            iVar7 = CollSphere(0x3fd32fec60000000,&local_70,&DAT_003c6c30,0,0);
            if (iVar7 != 0) {
              local_70 = g_CollOutput.push.x;
              local_6c = g_CollOutput.push.y;
              local_68 = g_CollOutput.push.z;
              local_64 = g_CollOutput.push.w;
              *(undefined4 *)((int)pvVar2 + 0x14) = 1;
            }
            Camera_SetMobyDrivenTargetPos(&local_70);
            Camera_SetMobyDrivenTargetRot(afStack_60);
          }
          iVar7 = FastDecTimerS32(uVar8 + 0x10);
          if (iVar7 == 0) {
            if ((DAT_0096a778 & 2) != 0) {
              Hero_TransAnim((float)(longlong)(animationSpeed * 6.5),0x47,0);
            }
          }
          else {
            Hero_TransAnim((float)(longlong)(animationSpeed * 6.5),0x48,0);
            moby->state = '\x03';
          }
        }
        else if (uVar1 == '\x01') {
          bVar4 = false;
          if ((g_currentWeaponMoby == (MobyInstance *)0x0) || (g_CurrentWeapon != 0x1a)) {
            *(undefined1 *)((int)pvVar2 + 7) = 0xff;
            *(undefined1 *)((int)pvVar2 + 8) = 0;
          }
          else {
            *(undefined1 *)((int)pvVar2 + 7) = 0;
            bVar4 = true;
            *(undefined1 *)((int)pvVar2 + 8) = 0xff;
          }
          GetBonePosition(lVar6,0,&local_a0);
          if (SQRT((g_heroPosition.x - local_a0) * (g_heroPosition.x - local_a0) +
                   (g_heroPosition.y - local_9c) * (g_heroPosition.y - local_9c)) < 0.4) {
            MB_UpdateLightsTransition(lVar6,uVar8);
            if ((bVar4) && (g_currentWeaponMoby->setByGroup != '\0')) {
              auVar10 = ZEXT416(0xffffffff);
              auVar10 = auVar10 | auVar10 << 0x20 | auVar10 << 0x40 | auVar10 << 0x60;
              auVar11 = vectorShiftLeftIntegerWord(auVar10,auVar10);
              auVar10 = loadVectorLeftIndexed(4,0x3c6c30);
              auVar10 = auVar10 >> 0x60 & (GPiece<16>)0xffffffff;
              auVar12 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
              auVar10 = vectorMultiplyAddFloatingPoint
                                  (auVar12,auVar10 | auVar10 << 0x20 | auVar10 << 0x40 |
                                           auVar10 << 0x60,auVar11);
              fVar5 = animationSpeed * 300.5;
              local_50 = (longlong)(int)fVar5;
              auVar10 = vectorConvertToSignedFixedPointWordSaturate(auVar10,0);
              auVar10 = auVar10 >> 0x60 & (GPiece<16>)0xffffffff;
              uVar3 = storeVectorElementWordIndexed
                                (auVar10 | auVar10 << 0x20 | auVar10 << 0x40 | auVar10 << 0x60,0x10,
                                 uVar8);
              *(undefined4 *)((int)pvVar2 + 0x10U & 0xfffffffc) = uVar3;
              M575_003c65c8
                        ((double)(moby->rotation).z,auStack_90,auStack_80,lVar6 + 0x10,lVar6 + 0x10,
                         (int)fVar5);
              TransitionMovement(0x1f,0);
              Hero_TransAnim((float)(longlong)(animationSpeed * 6.5),0x46,0);
              g_heroPosition.x = local_a0;
              g_heroPosition.y = local_9c;
              g_heroPosition.z = local_98;
              g_heroPosition.w = local_94;
              g_heroRotation.x = (moby->rotation).x;
              g_heroRotation.y = (moby->rotation).y;
              g_heroRotation.z = (moby->rotation).z;
              g_heroRotation.w = (moby->rotation).w;
              dVar9 = (double)FastWrapRot(g_heroRotation.z,3.1415927);
              g_heroRotation.z = (float)dVar9;
              SetCameraPosition(auStack_90,auStack_80,0,0,0);
              LetterBoxOn = 1;
              moby->state = '\x02';
            }
          }
        }
        else if (uVar1 == '\0') {
          *(undefined1 *)((int)pvVar2 + 7) = 0xff;
          moby->state = '\x01';
          *(undefined4 *)((int)pvVar2 + 0x14) = 0;
        }
      }
      MB_ColorDyingMoby(lVar6,uVar8);
    }
  }
  return;
}


