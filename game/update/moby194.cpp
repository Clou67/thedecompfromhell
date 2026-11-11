// game/update/moby194.cpp -- reconstructed from NPEA00385 EBOOT
// STATUS: NOT STARTED (raw Ghidra output)
// 3 functions, 0x2de770-0x2e2e70
#include <math.h>
#include "game/update/moby194.h"
#include "game/camera.h"
#include "game/collproc.h"
#include "game/hero.h"
#include "game/mobyfunc.h"
#include "game/mobyproc.h"
#include "game/mobyutil.h"
#include "game/partupd.h"
#include "game/path.h"
#include "game/update/moby156.h"
#include "idol/fastfunc.h"
#include "idol/mathfunc.h"
#include "idol/xUnk.h"

// 0x02de770 (0x14 bytes)
void M194_002de770(void)

{
  DAT_007f3f08 = 0x10000;
  return;
}


// 0x02de788 (0xdc bytes)
MobyInstance * M194_002de788(f32 *param_1,int param_2,undefined8 param_3)

{
  byte bVar1;
  f32 fVar2;
  MobyInstance *pMVar4;
  undefined8 uVar3;
  
  pMVar4 = CreateMoby(0xc2);
  if (pMVar4 != (MobyInstance *)0x0) {
    pMVar4->updateDistance = -1;
    pMVar4->drawDistance = 0x7e;
    fVar2 = *(f32 *)(param_2 + 0x48);
    pMVar4->enabled = '\x01';
    uVar3 = *(undefined8 *)(param_2 + 0x38);
    (pMVar4->rotation).z = fVar2;
    pMVar4->color = (int)((ulonglong)uVar3 >> 0x20);
    pMVar4->light = (int)uVar3;
    (pMVar4->pos).x = *param_1;
    bVar1 = pMVar4->animationId;
    (pMVar4->pos).y = param_1[1];
    (pMVar4->pos).z = param_1[2];
    (pMVar4->pos).w = param_1[3];
    if ((uint)bVar1 != (uint)param_3) {
      MB_SetAnimation(pMVar4,param_3,0,3);
    }
    UpdateMobyTransform(pMVar4);
  }
  return pMVar4;
}


// 0x02de920 (0x4550 bytes)
/* Moby 194 */

ulonglong UpdateMoby_194(MobyInstance *moby)

{
  byte bVar1;
  float fVar2;
  float fVar3;
  ushort uVar4;
  KickVars *kv;
  int *piVar5;
  undefined2 uVar6;
  int iVar8;
  ulonglong uVar7;
  int iVar9;
  uint uVar10;
  int iVar11;
  short sVar12;
  u8 uVar13;
  int in_r6;
  MobyClass *pMVar14;
  ulonglong uVar15;
  longlong lVar16;
  longlong lVar17;
  byte bVar18;
  undefined8 in_LR;
  undefined8 uVar19;
  double dVar20;
  double extraout_f1;
  double extraout_f1_00;
  double extraout_f1_01;
  double extraout_f1_02;
  double extraout_f1_03;
  double extraout_f1_04;
  double dVar21;
  double extraout_f1_05;
  double extraout_f1_06;
  double dVar22;
  double dVar23;
  double dVar24;
  double dVar25;
  GPiece<16> auVar26;
  GPiece<16> auVar27;
  GPiece<16> auVar28;
  GPiece<16> auVar29;
  GPiece<16> auVar30;
  GPiece<16> auVar31;
  GPiece<16> auVar32;
  GPiece<16> auVar33;
  GPiece<16> auVar34;
  float local_2e0;
  float local_2dc;
  undefined4 local_2d8;
  float afStack_2d0 [2];
  float local_2c8;
  GPiece<8> auStack_2c0;
  float local_2b8;
  float local_2b0;
  float local_2ac;
  undefined4 local_2a8;
  GPiece<16> auStack_2a0;
  undefined4 local_290;
  undefined4 local_28c;
  undefined4 local_288;
  undefined4 local_284;
  float local_280;
  float local_27c;
  undefined4 local_278;
  float local_270;
  float local_26c;
  undefined4 local_268;
  float afStack_260 [2];
  float local_258;
  float local_250;
  float local_24c;
  undefined4 local_248;
  float local_240;
  float local_23c;
  undefined4 local_238;
  float afStack_230 [2];
  float local_228;
  float local_220;
  float local_21c;
  undefined4 local_218;
  float local_210;
  float local_20c;
  undefined4 local_208;
  float local_200;
  float local_1fc;
  undefined4 local_1f8;
  float afStack_1f0 [2];
  float local_1e8;
  float local_1e0;
  float local_1dc;
  undefined4 local_1d8;
  GPiece<8> auStack_1d0;
  float local_1c8;
  undefined4 local_1c0;
  undefined4 local_1bc;
  undefined4 local_1b8;
  undefined4 local_1b4;
  int local_1b0;
  int local_1ac;
  int local_1a8;
  int local_1a4;
  GPiece<8> auStack_1a0;
  float local_198;
  undefined4 local_190;
  undefined4 local_18c;
  undefined4 local_188;
  undefined4 local_184;
  float local_180;
  float local_17c;
  float local_178;
  GPiece<8> auStack_170;
  float local_168;
  undefined4 local_160;
  undefined4 local_15c;
  undefined4 local_158;
  undefined4 local_154;
  float local_150 [4];
  float afStack_140 [2];
  float local_138;
  float local_130;
  float local_12c;
  undefined4 local_128;
  float local_120;
  float local_11c;
  undefined4 local_118;
  float local_110;
  float local_10c;
  undefined4 local_108;
  float afStack_100 [2];
  float local_f8;
  float local_f0;
  float local_ec;
  undefined4 local_e8;
  float local_e0;
  float local_dc;
  undefined4 local_d8;
  float local_d0;
  float local_cc;
  undefined4 local_c8;
  float afStack_c0 [2];
  float local_b8;
  float local_b0;
  float local_ac;
  undefined4 local_a8;
  longlong local_a0;
  
  lVar17 = (longlong)(int)moby;
  kv = (KickVars *)moby->pVar;
  uVar15 = ZEXT48(kv);
  iVar8 = MB_damage(lVar17,0x10000,0);
  sVar12 = *(short *)((int)&kv[1].drag + 2);
  if (sVar12 < 5) {
    if (sVar12 < 2) {
      if (-1 < sVar12) {
        if (sVar12 < 1) {
          if ((iVar8 != 0) && (moby->state < 0x7f && moby->state != 3)) {
            FUN_005e8338((double)((moby->pos).x - g_heroPosition.x),
                         (double)((moby->pos).y - g_heroPosition.y));
            in_r6 = 6;
            MB_StartKick(lVar17,uVar15);
            moby->state = '\x7f';
          }
        }
        else if ((iVar8 != 0) && (moby->state < 0x7f)) {
          FUN_005e8338((double)((moby->pos).x - g_heroPosition.x),
                       (double)((moby->pos).y - g_heroPosition.y));
          in_r6 = 6;
          MB_StartKick(lVar17,uVar15);
          moby->state = '\x7f';
        }
      }
    }
    else if (sVar12 < 3) {
      if ((iVar8 != 0) && (uVar13 = moby->state, uVar13 != '\x7f' && uVar13 != '\x18')) {
        if (uVar13 == '\x19') {
          *(undefined2 *)&kv[1].drag = 0;
        }
        else {
          FUN_005e8338((double)((moby->pos).x - g_heroPosition.x),
                       (double)((moby->pos).y - g_heroPosition.y));
          in_r6 = 6;
          MB_StartKick(lVar17,uVar15);
          sVar12 = *(short *)&kv[1].xySpeed + -1;
          *(short *)&kv[1].xySpeed = sVar12;
          if (sVar12 == 0) {
            moby->state = '\x7f';
          }
          else {
            moby->state = '\x18';
            *(undefined2 *)&kv[1].drag = 0;
          }
        }
      }
    }
    else if (sVar12 < 4) {
      if ((iVar8 != 0) && (moby->state != '\x7f' && moby->state != '\"')) {
        sVar12 = *(short *)&kv[1].xySpeed + -1;
        *(short *)&kv[1].xySpeed = sVar12;
        if (sVar12 == 0) {
          moby->state = '\x7f';
          FUN_005e8338((double)((moby->pos).x - g_heroPosition.x),
                       (double)((moby->pos).y - g_heroPosition.y));
          in_r6 = 6;
          MB_StartKick(lVar17,uVar15);
        }
        else {
          moby->state = '\"';
          FUN_005e8338((double)((moby->pos).x - g_heroPosition.x),
                       (double)((moby->pos).y - g_heroPosition.y));
          in_r6 = 5;
          MB_StartKick(lVar17,uVar15);
        }
      }
    }
    else if (((iVar8 != 0) && (uVar13 = moby->state, uVar13 != ',' && uVar13 != '-')) &&
            (uVar13 != '\x7f')) {
      sVar12 = *(short *)&kv[1].xySpeed + -1;
      *(short *)&kv[1].xySpeed = sVar12;
      if (sVar12 == 0) {
        moby->state = '\x7f';
        FUN_005e8338((double)((moby->pos).x - g_heroPosition.x),
                     (double)((moby->pos).y - g_heroPosition.y));
        in_r6 = 6;
        MB_StartKick(lVar17,uVar15);
      }
      else {
        moby->state = ',';
        FUN_005e8338((double)((moby->pos).x - g_heroPosition.x),
                     (double)((moby->pos).y - g_heroPosition.y));
        in_r6 = 5;
        MB_StartKick(lVar17,uVar15);
      }
    }
  }
  else if (sVar12 == 10) {
    if ((iVar8 != 0) && (moby->state != '\x7f' && moby->state != 'h')) {
      sVar12 = *(short *)&kv[1].xySpeed + -1;
      *(short *)&kv[1].xySpeed = sVar12;
      if (sVar12 == 0) {
        kv->flag = 1;
        kv->xySpeed = 0.15;
        kv->grav = 0.008;
        kv->drag = 0.0005;
        kv->zSpeed = 0.125;
        kv->type = '\0';
        moby->state = '\x7f';
        FUN_005e8338((double)((moby->pos).x - g_heroPosition.x),
                     (double)((moby->pos).y - g_heroPosition.y));
        in_r6 = 6;
        MB_StartKick(lVar17,uVar15);
      }
      else {
        kv->flag = 1;
        kv->grav = 0.008;
        kv->zSpeed = 0.125;
        kv->drag = 0.0005;
        kv->xySpeed = 0.15;
        kv->type = '\0';
        moby->state = 'h';
        FUN_005e8338((double)((moby->pos).x - g_heroPosition.x),
                     (double)((moby->pos).y - g_heroPosition.y));
        in_r6 = 5;
        MB_StartKick(lVar17,uVar15);
      }
    }
  }
  else if (sVar12 == 9) {
    if (((iVar8 != 0) && (uVar13 = moby->state, uVar13 != '\x7f' && uVar13 != ']')) &&
       ((g_heroState != WRENCH_ATTACK || (uVar13 != '\\')))) {
      sVar12 = *(short *)&kv[1].xySpeed + -1;
      *(short *)&kv[1].xySpeed = sVar12;
      if (sVar12 == 0) {
        fVar3 = (moby->pos).z;
        moby->state = '\x7f';
        (moby->pos).z = fVar3 + 0.25;
        FUN_005e8338((double)((moby->pos).x - g_heroPosition.x),
                     (double)((moby->pos).y - g_heroPosition.y));
        in_r6 = 6;
        MB_StartKick(lVar17,uVar15);
      }
      else {
        fVar3 = (moby->pos).z;
        moby->state = ']';
        (moby->pos).z = fVar3 + 0.25;
        FUN_005e8338((double)((moby->pos).x - g_heroPosition.x),
                     (double)((moby->pos).y - g_heroPosition.y));
        in_r6 = 5;
        MB_StartKick(lVar17,uVar15);
      }
    }
  }
  else if (sVar12 == 8) {
    if ((iVar8 != 0) && (moby->state != '\x7f' && moby->state != 'S')) {
      sVar12 = *(short *)&kv[1].xySpeed + -1;
      *(short *)&kv[1].xySpeed = sVar12;
      if (sVar12 == 0) {
        moby->state = '\x7f';
        FUN_005e8338((double)((moby->pos).x - g_heroPosition.x),
                     (double)((moby->pos).y - g_heroPosition.y));
        in_r6 = 6;
        MB_StartKick(lVar17,uVar15);
      }
      else {
        moby->state = 'S';
        FUN_005e8338((double)((moby->pos).x - g_heroPosition.x),
                     (double)((moby->pos).y - g_heroPosition.y));
        in_r6 = 5;
        MB_StartKick(lVar17,uVar15);
      }
    }
  }
  else if (sVar12 == 7) {
    if ((iVar8 != 0) && (moby->state != '\x7f')) {
      moby->state = '\x7f';
      FUN_005e8338((double)((moby->pos).x - g_heroPosition.x),
                   (double)((moby->pos).y - g_heroPosition.y));
      in_r6 = 6;
      MB_StartKick(lVar17,uVar15);
    }
  }
  else if (sVar12 == 6) {
    if ((iVar8 != 0) && (moby->state < 0x7f)) {
      fVar3 = (moby->pos).x;
      fVar2 = (moby->pos).y;
      moby->scale = moby->pClass->gScale;
      FUN_005e8338((double)(fVar3 - g_heroPosition.x),(double)(fVar2 - g_heroPosition.y));
      in_r6 = 6;
      MB_StartKick(lVar17,uVar15);
      moby->state = '\x7f';
    }
  }
  else if (((sVar12 == 5) && (iVar8 != 0)) && (moby->state < 0x7f)) {
    (moby->pos).z = (moby->pos).z + 2.0;
    FUN_005e8338((double)((moby->pos).x - g_heroPosition.x),
                 (double)((moby->pos).y - g_heroPosition.y));
    in_r6 = 6;
    MB_StartKick(lVar17,uVar15);
    moby->state = '\x7f';
  }
  bVar1 = moby->state;
  uVar7 = (ulonglong)bVar1;
  moby->damage = -1;
  bVar18 = (bVar1 == 10) << 1;
  if (0x32 < bVar1) {
    if (0x52 < bVar1) {
      if (0x65 < bVar1) {
        if (bVar1 == 0x7f) {
          uVar10 = MB_UpdateKick(moby,kv);
          if ((int)((ulonglong)uVar10 & 0x40) == 0) {
            return (ulonglong)uVar10 & 0x40;
          }
          uVar15 = DeleteMoby(moby);
          return uVar15;
        }
        if (bVar1 == 0x69) {
          dVar20 = (double)BlendAnimFrame(moby);
          bVar18 = moby->animationId;
          if ((12.0 <= dVar20) && (dVar20 <= 40.0)) {
            local_a0 = (longlong)(int)*(short *)((int)&kv[1].xySpeed + 2);
            dVar23 = 1.0471975803375244;
            dVar20 = (double)cosf((float)((double)local_a0 * 1.0471975803375244 +
                                                   (double)(moby->rotation).z));
            dVar25 = 0.10000000149011612;
            local_a0 = (longlong)(int)*(short *)((int)&kv[1].xySpeed + 2);
            local_b0 = (float)((double)(DAT_0071f408 * 0.1) * dVar20);
            dVar20 = (double)FUN_005e8128((double)(float)((double)local_a0 * dVar23 +
                                                         (double)(moby->rotation).z));
            local_a8 = 0;
            local_ac = (float)((double)(float)((double)DAT_0071f408 * dVar25) * dVar20);
            uVar15 = FUN_005e7f54(lVar17 + 0x10,lVar17 + 0x10,&local_b0);
            return uVar15;
          }
          if (dVar20 < 40.0) {
            return (ulonglong)bVar18;
          }
          moby->state = 'e';
          if (bVar18 == 3) {
            return (ulonglong)bVar18;
          }
          uVar15 = MB_SetAnimation(lVar17,3,0,3);
          return uVar15;
        }
        if (bVar1 == 0x68) {
          uVar10 = MB_UpdateKick(moby,kv);
          if ((int)((ulonglong)uVar10 & 0x40) == 0) {
            return (ulonglong)uVar10 & 0x40;
          }
          uVar15 = M194_002de788(lVar17 + 0x10,lVar17,2);
          iVar8 = (int)uVar15;
          if (iVar8 == 0) {
            return uVar15;
          }
          iVar9 = *(int *)(iVar8 + 0x78);
          if (moby->animationId != '\x02') {
            MB_SetAnimation(lVar17,2,10,3);
          }
          moby->state = 'i';
          *(undefined1 *)(iVar8 + 0x20) = 0x69;
          uVar6 = *(undefined2 *)&kv[1].xySpeed;
          *(undefined2 *)(iVar9 + 0x76) = 10;
          *(undefined2 *)(iVar9 + 0x78) = uVar6;
          if (*(short *)&kv[1].xySpeed == 2) {
            fVar3 = moby->pClass->gScale * 0.6666667;
            moby->scale = fVar3;
            *(float *)(iVar8 + 0x2c) = fVar3;
          }
          else if (*(short *)&kv[1].xySpeed == 1) {
            fVar3 = moby->pClass->gScale * 0.5;
            moby->scale = fVar3;
            *(float *)(iVar8 + 0x2c) = fVar3;
          }
          uVar15 = MB_randInt(0x100);
          if ((uVar15 & 1) != 0) {
            *(undefined2 *)((int)&kv[1].xySpeed + 2) = 1;
            *(undefined2 *)(iVar9 + 0x7a) = 0xffff;
            return 1;
          }
          *(undefined2 *)((int)&kv[1].xySpeed + 2) = 0xffff;
          *(undefined2 *)(iVar9 + 0x7a) = 1;
          return 0xffffffffffffffff;
        }
        if (bVar1 == 0x67) {
          dVar20 = (double)FUN_005e8588(lVar17 + 0x10,&g_heroPosition);
          if (((((moby->updateId == moby->animationId) &&
                (dVar25 = (double)BlendAnimFrame(moby), 16.0 <= dVar25)) &&
               (dVar25 = (double)BlendAnimFrame(moby), dVar25 < 21.0)) &&
              (ABS((moby->pos).z - g_heroPosition.z) < 0.2)) &&
             ((((dVar20 < 4.0 && (*(short *)&kv[1].xySpeed == 3)) ||
               ((dVar20 < 3.0 && (*(short *)&kv[1].xySpeed == 2)))) ||
              ((dVar20 < 2.0 && (*(short *)&kv[1].xySpeed == 1)))))) {
            dVar25 = (double)GameCamera.rot.radius;
            dVar20 = (double)FUN_005e8338((double)((moby->pos).x - GameCamera.posX),
                                          (double)((moby->pos).y - GameCamera.posY));
            dVar20 = (double)FastSubRots((float)dVar25,(float)dVar20);
            if (dVar20 < 36.0) {
              dVar20 = (double)FUN_005e8338((double)(g_heroPosition.x - (moby->pos).x),
                                            (double)(g_heroPosition.y - (moby->pos).y));
              dVar20 = (double)FastSubRots((float)dVar20,(moby->rotation).z);
              if (dVar20 < 0.10471975803375244) {
                dVar20 = (double)cosf((moby->rotation).z);
                local_d0 = (float)dVar20;
                dVar20 = (double)FUN_005e8128((double)(moby->rotation).z);
                local_cc = (float)dVar20;
                local_c8 = 0;
                FUN_005e7e98(afStack_c0,&g_heroMobyPtr->pos);
                local_b8 = local_b8 + 0.75;
                CollDamageMobyDirect
                          (1.0,g_heroMobyPtr,moby,1,0x2de864,afStack_c0,&local_d0);
              }
            }
          }
          uVar15 = (ulonglong)(byte)moby->field43_0x70 & 2;
          if ((int)uVar15 == 0) {
            return uVar15;
          }
          moby->state = 'e';
          if (moby->animationId == '\x03') {
            return 0x65;
          }
          uVar15 = MB_SetAnimation(lVar17,3,0,3);
          return uVar15;
        }
        if (bVar1 != 0x66) {
          return uVar7;
        }
        dVar20 = (double)FUN_005e8338((double)(g_heroPosition.x - (moby->pos).x),
                                      (double)(g_heroPosition.y - (moby->pos).y));
        dVar23 = (double)(float)(dVar20 - (double)(moby->rotation).z);
        uVar19 = FUN_005e8338((double)(g_heroPosition.x - (moby->pos).x),
                              (double)(g_heroPosition.y - (moby->pos).y));
        OrganicDeltAngSpeed
                  (uVar19,0x3f947ae140000000,0x3fd3333340000000,0x3fb99999a0000000,lVar17);
        dVar20 = (double)cosf((moby->rotation).z);
        local_a0 = (longlong)(int)*(short *)&kv[1].xySpeed;
        dVar25 = 0.05000000074505806;
        local_e0 = (float)((double)((float)((double)local_a0 * 0.05000000074505806) * DAT_0071f408)
                          * dVar20);
        dVar20 = (double)FUN_005e8128((double)(moby->rotation).z);
        local_a0 = (longlong)(int)*(short *)&kv[1].xySpeed;
        local_d8 = 0;
        lVar16 = lVar17 + 0x10;
        local_dc = (float)((double)((float)((double)local_a0 * dVar25) * DAT_0071f408) * dVar20);
        FUN_005e7f54(lVar16,lVar16,&local_e0);
        dVar20 = (double)FUN_005e8588(lVar16,&g_heroPosition);
        if (((((dVar20 < 4.0) && (*(short *)&kv[1].xySpeed == 3)) ||
             ((dVar20 = (double)FUN_005e8588(lVar16,&g_heroPosition), dVar20 < 3.0 &&
              (*(short *)&kv[1].xySpeed == 2)))) ||
            ((dVar20 = (double)FUN_005e8588(lVar16,&g_heroPosition), dVar20 < 2.0 &&
             (*(short *)&kv[1].xySpeed == 1)))) &&
           ((dVar23 < 0.20000000298023224 && (-0.20000000298023224 < dVar23)))) {
          moby->state = 'g';
          if (moby->animationId == '\x04') {
            return 0x67;
          }
          uVar15 = MB_SetAnimation(lVar17,4,0,3);
          return uVar15;
        }
        dVar20 = (double)FUN_005e8588(lVar16,&g_heroPosition);
        if (dVar20 <= 16.0) {
          return ZEXT48(&DAT_002de864);
        }
        moby->state = 'e';
        if (moby->animationId == '\x03') {
          return 0x65;
        }
        uVar15 = MB_SetAnimation(lVar17,3,0,3);
        return uVar15;
      }
      if (bVar1 == 0x65) {
        dVar20 = (double)FUN_005e8338((double)(g_heroPosition.x - (moby->pos).x),
                                      (double)(g_heroPosition.y - (moby->pos).y));
        dVar20 = (double)(float)(dVar20 - (double)(moby->rotation).z);
        uVar19 = FUN_005e8338((double)(g_heroPosition.x - (moby->pos).x),
                              (double)(g_heroPosition.y - (moby->pos).y));
        OrganicDeltAngSpeed
                  (uVar19,0x3f947ae140000000,0x3fd3333340000000,0x3fb99999a0000000,lVar17);
        uVar15 = FUN_005e8588(lVar17 + 0x10,&g_heroPosition);
        if (15.0 <= extraout_f1_06) {
          return uVar15;
        }
        if (0.20000000298023224 <= dVar20) {
          return ZEXT48(&DAT_002de864);
        }
        if (dVar20 <= -0.20000000298023224) {
          return ZEXT48(&DAT_002de864);
        }
        moby->state = 'f';
        if (moby->animationId == '\x01') {
          return 0x66;
        }
        uVar15 = MB_SetAnimation(lVar17,1,0,3);
        return uVar15;
      }
      if (bVar1 == 0x5d) {
        uVar10 = MB_UpdateKick(moby,kv);
        if ((int)((ulonglong)uVar10 & 0x40) == 0) {
          return (ulonglong)uVar10 & 0x40;
        }
        if (moby->animationId != '\x03') {
          MB_SetAnimation(lVar17,3,0,3);
        }
        uVar15 = idol::GetAnimDuration(0x1e);
        *(short *)&kv[1].drag = (short)uVar15;
        moby->state = '[';
        return uVar15;
      }
      if (bVar1 == 0x5c) {
        lVar16 = lVar17 + 0x10;
        dVar20 = (double)FUN_005e8588(lVar16,uVar15 + 0x60);
        dVar25 = 4.0;
        if ((double)(g_FrameTime * 4.0) < dVar20) {
          dVar20 = (double)FUN_005e8338((double)(kv[1].kickVel[0] - (moby->pos).x),
                                        (double)(kv[1].kickVel[1] - (moby->pos).y));
          dVar20 = (double)cosf((float)dVar20);
          local_120 = (float)((double)(float)((double)g_FrameTime * dVar25) * dVar20);
          FUN_005e8338((double)(kv[1].kickVel[0] - (moby->pos).x),
                       (double)(kv[1].kickVel[1] - (moby->pos).y));
          dVar20 = (double)FUN_005e8128();
          in_r6 = 0;
          local_118 = 0;
          local_11c = (float)((double)(float)((double)g_FrameTime * dVar25) * dVar20);
          FUN_005e7f54(lVar16,&local_120,lVar16);
        }
        dVar20 = (double)FUN_005e8588(lVar16,&g_heroPosition);
        if ((dVar20 < dVar25) && (g_heroState != TAKING_DAMAGE)) {
          dVar20 = (double)cosf((moby->rotation).z);
          dVar25 = 2.0;
          local_110 = (float)(dVar20 * 2.0);
          dVar20 = (double)FUN_005e8128((double)(moby->rotation).z);
          local_10c = (float)(dVar20 * dVar25);
          local_108 = 0;
          FUN_005e7e98(afStack_100,&g_heroMobyPtr->pos);
          local_f8 = local_f8 + 0.75;
          CollDamageMobyDirect(1.0,g_heroMobyPtr,moby,1,in_r6,afStack_100,&local_110);
          dVar20 = (double)FUN_005e8338((double)(g_heroPosition.x - (moby->pos).x),
                                        (double)(g_heroPosition.y - (moby->pos).y));
          dVar20 = (double)cosf((float)dVar20);
          local_f0 = (float)dVar20;
          FUN_005e8338((double)(g_heroPosition.x - (moby->pos).x),
                       (double)(g_heroPosition.y - (moby->pos).y));
          dVar20 = (double)FUN_005e8128();
          local_ec = (float)dVar20;
          local_e8 = 0;
          FUN_005e7f54(uVar15 + 0x60,lVar16,&local_f0);
          auVar26 = ZEXT416(0xffffffff);
          auVar28 = auVar26 | auVar26 << 0x20 | auVar26 << 0x40 | auVar26 << 0x60;
          auVar26 = ZEXT416(0xfffffff0);
          auVar29 = loadVectorLeftIndexed(0x1c,0x2de864);
          auVar27 = vectorShiftLeftIntegerWord(auVar28,auVar28);
          auVar29 = auVar29 >> 0x60 & (GPiece<16>)0xffffffff;
          auVar30 = loadVectorLeftIndexed(0xfffffffffffff408,0x720000);
          auVar28 = ZEXT416(0xffffffff);
          auVar31 = auVar28 | auVar28 << 0x20 | auVar28 << 0x40 | auVar28 << 0x60;
          auVar29 = vectorMultiplyAddFloatingPoint
                              (auVar30,auVar29 | auVar29 << 0x20 | auVar29 << 0x40 | auVar29 << 0x60
                               ,auVar27);
          auVar27 = loadVectorLeftIndexed(in_LR,0x2de864);
          auVar28 = ZEXT416(0xffffffff);
          auVar30 = auVar28 | auVar28 << 0x20 | auVar28 << 0x40 | auVar28 << 0x60;
          auVar28 = auVar27 >> 0x60 & (GPiece<16>)0xffffffff;
          auVar27 = auVar28 | auVar28 << 0x20 | auVar28 << 0x40 | auVar28 << 0x60;
          auVar32 = loadVectorLeftIndexed(0x74,uVar15);
          auVar33 = loadVectorRightIndexed(0x84,uVar15);
          auVar30 = vectorShiftLeftIntegerWord(auVar30,auVar30);
          auVar31 = vectorShiftLeftIntegerWord(auVar31,auVar31);
          auVar28 = ZEXT416(0xffffffff);
          auVar34 = auVar28 | auVar28 << 0x20 | auVar28 << 0x40 | auVar28 << 0x60;
          auVar28 = vectorReciprocalEstimateFloatingPoint(auVar29);
          auVar26 = vectorShiftRightAlgebraicWord
                              (auVar32 | auVar33,
                               auVar26 | auVar26 << 0x20 | auVar26 << 0x40 | auVar26 << 0x60);
          auVar32 = vectorNegativeMultiplySubtractFloatingPoint(auVar28,auVar29,auVar27);
          auVar28 = vectorMultiplyAddFloatingPoint(auVar28,auVar32,auVar30);
          auVar26 = vectorConvertFromSignedFixedPointWord(auVar26,0);
          auVar32 = vectorShiftLeftIntegerWord(auVar34,auVar34);
          auVar30 = vectorNegativeMultiplySubtractFloatingPoint(auVar28,auVar29,auVar27);
          auVar26 = auVar26 >> 0x60 & (GPiece<16>)0xffffffff;
          auVar30 = vectorMultiplyAddFloatingPoint(auVar28,auVar30,auVar31);
          auVar28 = vectorNegativeMultiplySubtractFloatingPoint(auVar30,auVar29,auVar27);
          auVar29 = vectorMultiplyAddFloatingPoint(auVar30,auVar28,auVar32);
          auVar28 = auVar29 >> 0x60 & (GPiece<16>)0xffffffff;
          vectorCompareGreaterThanOrEqualToFloatingPoint
                    (auVar26 | auVar26 << 0x20 | auVar26 << 0x40 | auVar26 << 0x60,
                     auVar28 | auVar28 << 0x20 | auVar28 << 0x40 | auVar28 << 0x60);
          if (!(bool)(bVar18 >> 1 & 1)) {
            return 0x74;
          }
          auVar26 = vectorConvertToSignedFixedPointWordSaturate(auVar29,0);
          auVar26 = vectorSplatHalfWord(auVar26,1);
          uVar6 = storeVectorElementHalfWordIndexed(auVar26,0x74,uVar15);
          *(undefined2 *)&kv[1].drag = uVar6;
          return 0x74;
        }
        dVar20 = (double)FUN_005e8588(lVar16,&g_heroPosition);
        if ((dVar20 <= 14.0) || ((moby->field43_0x70 & 2U) == 0)) {
          uVar15 = (ulonglong)*(ushort *)&kv[1].drag - 1;
          sVar12 = (short)uVar15;
          *(short *)&kv[1].drag = sVar12;
          if (sVar12 != 0) {
            return uVar15;
          }
        }
        moby->state = '[';
        if (moby->animationId != '\x03') {
          MB_SetAnimation(lVar17,3,0,3);
        }
        fVar3 = (moby->pos).z;
        *(undefined2 *)&kv[1].drag = 0x78;
        (moby->pos).z = fVar3 + 2.5;
        return ZEXT48(&DAT_002de864);
      }
      if (bVar1 == 0x5b) {
        uVar19 = FUN_005e8338((double)(g_heroPosition.x - (moby->pos).x),
                              (double)(g_heroPosition.y - (moby->pos).y));
        OrganicDeltAngSpeed
                  (uVar19,0x3f947ae140000000,0x3fd3333340000000,0x3fb99999a0000000,lVar17,
                   &DAT_002de864,uVar15 + 0x70);
        if (0 < *(short *)&kv[1].drag) {
          *(short *)&kv[1].drag = *(short *)&kv[1].drag + -1;
        }
        dVar20 = (double)FUN_005e8588(lVar17 + 0x10,&g_heroPosition);
        if (14.0 <= dVar20) {
          return ZEXT48(&DAT_002de864);
        }
        if (*(ushort *)&kv[1].drag != 0) {
          return (ulonglong)*(ushort *)&kv[1].drag;
        }
        FUN_005e7e98(uVar15 + 0x60,&g_heroPosition);
        moby->state = '\\';
        if (moby->animationId != '\x0e') {
          MB_SetAnimation(lVar17,0xe,0,3);
        }
        *(undefined2 *)&kv[1].drag = 300;
        (moby->pos).z = (moby->pos).z - 2.5;
        return 300;
      }
      if (bVar1 != 0x53) {
        return uVar7;
      }
      uVar10 = MB_UpdateKick(moby,kv);
      if ((int)((ulonglong)uVar10 & 0x40) == 0) {
        return (ulonglong)uVar10 & 0x40;
      }
      if (moby->animationId != '\x03') {
        MB_SetAnimation(lVar17,3,0,3);
      }
      moby->state = 'Q';
      return 0x51;
    }
    if (0x3e < bVar1) {
      if (bVar1 == 0x52) {
        uVar19 = FUN_005e8338((double)(g_heroPosition.x - (moby->pos).x),
                              (double)(g_heroPosition.y - (moby->pos).y));
        OrganicDeltAngSpeed
                  (uVar19,0x3f947ae140000000,0x3fd3333340000000,0x3fb99999a0000000,lVar17);
        dVar20 = (double)FUN_005e8588(lVar17 + 0x10,&g_heroPosition);
        dVar25 = 3.0;
        if ((3.0 <= dVar20) || (dVar20 = (double)BlendAnimFrame(moby), dVar20 != 103.0)) {
          dVar20 = (double)FUN_005e8588(lVar17 + 0x10,&g_heroPosition);
          if ((dVar25 < dVar20) &&
             (((moby->field43_0x70 & 2U) != 0 && (moby->state = 'Q', moby->animationId != '\x03'))))
          {
            MB_SetAnimation(lVar17,3,0,3);
          }
        }
        else {
          cosf((moby->rotation).z);
          local_150[0] = 0.0;
          FUN_005e8128((double)(moby->rotation).z);
          local_150[1] = 0.0;
          local_150[2] = 24.0;
          FUN_005e7e98(afStack_140,&g_heroMobyPtr->pos);
          *(undefined2 *)&kv[1].drag = 0x1e;
          local_138 = local_138 + 0.75;
          CollDamageMobyDirect(1.0,g_heroMobyPtr,moby,1,0x2de864,afStack_140,local_150);
        }
        auVar26 = ZEXT416(0xfffffff0);
        auVar28 = loadVectorLeftIndexed(0x74,uVar15);
        auVar29 = loadVectorRightIndexed(0x84,uVar15);
        auVar26 = vectorShiftRightAlgebraicWord
                            (auVar28 | auVar29,
                             auVar26 | auVar26 << 0x20 | auVar26 << 0x40 | auVar26 << 0x60);
        if (*(short *)&kv[1].drag < 1) {
          return (longlong)*(short *)&kv[1].drag;
        }
        auVar28 = vectorConvertFromSignedFixedPointWord(auVar26,0);
        auVar26 = loadVectorLeftIndexed(0xa8,0x2de864);
        auVar29 = loadVectorLeftIndexed(0x88,0x969ce0);
        auVar26 = auVar26 >> 0x60 & (GPiece<16>)0xffffffff;
        auVar26 = vectorMultiplyAddFloatingPoint
                            (auVar28,auVar26 | auVar26 << 0x20 | auVar26 << 0x40 | auVar26 << 0x60,
                             auVar29);
        auVar26 = auVar26 >> 0x60 & (GPiece<16>)0xffffffff;
        g_heroPosition.z =
             (float)storeVectorElementWordIndexed
                              (auVar26 | auVar26 << 0x20 | auVar26 << 0x40 | auVar26 << 0x60,0x88,
                               0x969ce0);
        dVar20 = (double)cosf((moby->rotation).z);
        local_a0 = (longlong)(int)*(short *)&kv[1].drag;
        dVar25 = 0.009999999776482582;
        local_130 = (float)(dVar20 * (double)local_a0) * 0.01;
        dVar20 = (double)FUN_005e8128((double)(moby->rotation).z);
        local_a0 = (longlong)(int)*(short *)&kv[1].drag;
        local_128 = 0;
        local_12c = (float)((double)(float)(dVar20 * (double)local_a0) * dVar25);
        FUN_005e7f54(&g_heroPosition,&g_heroPosition,&local_130);
        uVar15 = (ulonglong)*(ushort *)&kv[1].drag - 1;
        *(short *)&kv[1].drag = (short)uVar15;
        return uVar15;
      }
      if (bVar1 == 0x51) {
        uVar19 = FUN_005e8338((double)(g_heroPosition.x - (moby->pos).x),
                              (double)(g_heroPosition.y - (moby->pos).y));
        OrganicDeltAngSpeed
                  (uVar19,0x3f947ae140000000,0x3fd3333340000000,0x3fb99999a0000000,lVar17);
        uVar15 = FUN_005e8588(lVar17 + 0x10,&g_heroPosition);
        if (3.0 <= extraout_f1_05) {
          return uVar15;
        }
        moby->state = 'R';
        if (moby->animationId == '\r') {
          return 0x52;
        }
        uVar15 = MB_SetAnimation(lVar17,0xd,0,3);
        return uVar15;
      }
      if (bVar1 == 0x48) {
        uVar19 = FUN_005e8338((double)(g_heroPosition.x - (moby->pos).x),
                              (double)(g_heroPosition.y - (moby->pos).y));
        OrganicDeltAngSpeed
                  (uVar19,0x3f947ae140000000,0x3fd3333340000000,0x3f20624de0000000,lVar17,
                   &DAT_002de864,uVar15 + 0x70);
        if ((moby->updateId == moby->animationId) &&
           (dVar20 = (double)BlendAnimFrame(moby), dVar20 == 33.0)) {
          uVar19 = 0;
          local_160 = 0;
          local_15c = 0;
          local_158 = 0;
          local_154 = 0x3f800000;
          FUN_005e7e98(auStack_170,lVar17 + 0x10);
          dVar24 = 0.5;
          iVar9 = -4;
          iVar8 = -0x20;
          local_168 = local_168 + 0.5;
          dVar23 = 0.01745329238474369;
          dVar25 = 2.0;
          dVar20 = 0.15000000596046448;
          do {
            local_a0 = (longlong)iVar8;
            dVar22 = (double)local_a0;
            dVar21 = (double)cosf((float)(dVar22 * dVar23 + (double)(moby->rotation).z));
            local_180 = (float)(dVar21 * dVar25);
            dVar21 = (double)FUN_005e8128((double)(float)(dVar22 * dVar23 +
                                                         (double)(moby->rotation).z));
            local_17c = (float)(dVar21 * dVar25);
            local_178 = 0.0;
            FUN_005e7f54(&local_180,&local_180,lVar17 + 0x10);
            local_178 = (float)((double)local_178 + dVar24);
            iVar11 = FUN_00299400(uVar19,&local_160,&local_180);
            dVar21 = (double)cosf((float)(dVar22 * dVar23 + (double)(moby->rotation).z));
            *(float *)(*(int *)(iVar11 + 0x78) + 0x20) =
                 (float)((double)(float)((double)DAT_0071f408 * dVar20) * dVar21);
            dVar21 = (double)FUN_005e8128((double)(float)(dVar22 * dVar23 +
                                                         (double)(moby->rotation).z));
            iVar9 = iVar9 + 1;
            iVar8 = iVar8 + 8;
            *(float *)(*(int *)(iVar11 + 0x78) + 0x24) =
                 (float)((double)(float)((double)DAT_0071f408 * dVar20) * dVar21);
            *(undefined4 *)(*(int *)(iVar11 + 0x78) + 0x28) = 0;
            *(undefined1 *)(iVar11 + 0x20) = 1;
          } while (iVar9 < 5);
        }
        if (g_heroState != TAKING_DAMAGE) {
          dVar20 = (double)FUN_005e8588(lVar17 + 0x10,&g_heroPosition);
          if (dVar20 <= 20.0) {
            return ZEXT48(&DAT_002de864);
          }
        }
        uVar15 = (ulonglong)(byte)moby->field43_0x70 & 2;
        if ((int)uVar15 == 0) {
          return uVar15;
        }
        moby->state = 'G';
        if (moby->animationId == '\x03') {
          return 0x47;
        }
        uVar15 = MB_SetAnimation(lVar17,3,0,3);
        return uVar15;
      }
      if (bVar1 != 0x47) {
        if (bVar1 != 0x3f) {
          return uVar7;
        }
        dVar20 = (double)BlendAnimFrame(moby);
        uVar19 = FUN_005e8338((double)(g_heroPosition.x - (moby->pos).x),
                              (double)(g_heroPosition.y - (moby->pos).y));
        OrganicDeltAngSpeed
                  (uVar19,0x3f947ae140000000,0x3fd3333340000000,0x3fb99999a0000000,lVar17);
        pMVar14 = moby->pClass;
        if (((dVar20 < 12.0) || (30.0 <= dVar20)) || (moby->updateId != '\x02')) {
          if ((dVar20 == 30.0) && (moby->updateId == '\x02')) {
            piVar5 = (int *)kv[1].xyBounceDamp;
            iVar8 = *piVar5;
            iVar9 = kv[1].radius + iVar8 + (int)*(char *)&kv[1].flag;
            iVar9 = iVar9 - (iVar9 / iVar8) * iVar8;
            local_1b0 = piVar5[iVar9 * 4 + 4];
            local_1ac = piVar5[iVar9 * 4 + 5];
            local_1a8 = piVar5[iVar9 * 4 + 6];
            local_1a4 = piVar5[iVar9 * 4 + 7];
            kv[1].radius = iVar9;
            FUN_005e7e98(lVar17 + 0x10,&local_1b0);
            pMVar14 = moby->pClass;
          }
          else if ((30.0 < dVar20) && ((dVar20 <= 48.0 && (moby->updateId == '\x02')))) {
            moby->scale = pMVar14->gScale * (float)(dVar20 - 30.0) * 0.055555556;
          }
        }
        else {
          moby->scale = pMVar14->gScale * (float)(30.0 - dVar20) * 0.055555556;
        }
        uVar15 = (ulonglong)(byte)moby->field43_0x70 & 2;
        if ((int)uVar15 == 0) {
          return uVar15;
        }
        moby->state = '=';
        moby->scale = pMVar14->gScale;
        if (moby->animationId == 3) {
          return (ulonglong)moby->animationId;
        }
        uVar15 = MB_SetAnimation(lVar17,3,0,3);
        return uVar15;
      }
      uVar19 = FUN_005e8338((double)(g_heroPosition.x - (moby->pos).x),
                            (double)(g_heroPosition.y - (moby->pos).y));
      OrganicDeltAngSpeed
                (uVar19,0x3f947ae140000000,0x3fd3333340000000,0x3fb99999a0000000,lVar17);
      uVar15 = FUN_005e8588(lVar17 + 0x10,&g_heroPosition);
      if (16.0 <= extraout_f1_04) {
        return uVar15;
      }
      moby->state = 'H';
      if (moby->animationId == '\f') {
        return 0x48;
      }
      uVar15 = MB_SetAnimation(lVar17,0xc,0,3);
      return uVar15;
    }
    if (bVar1 < 0x36) {
      if (bVar1 < 0x34) {
        dVar20 = (double)FUN_005e8338((double)(g_heroPosition.x - (moby->pos).x),
                                      (double)(g_heroPosition.y - (moby->pos).y));
        dVar20 = (double)(float)(dVar20 - (double)(moby->rotation).z);
        uVar19 = FUN_005e8338((double)(g_heroPosition.x - (moby->pos).x),
                              (double)(g_heroPosition.y - (moby->pos).y));
        OrganicDeltAngSpeed
                  (uVar19,0x3f947ae140000000,0x3fd3333340000000,0x3fb99999a0000000,lVar17);
        uVar15 = FUN_005e8588(lVar17 + 0x10,&g_heroPosition);
        if (15.0 <= extraout_f1_03) {
          return uVar15;
        }
        if (0.20000000298023224 <= dVar20) {
          return ZEXT48(&DAT_002de864);
        }
        if (dVar20 <= -0.20000000298023224) {
          return ZEXT48(&DAT_002de864);
        }
        moby->state = '4';
        return 0x34;
      }
      if (bVar1 < 0x35) {
        dVar20 = (double)FUN_005e8338((double)(g_heroPosition.x - (moby->pos).x),
                                      (double)(g_heroPosition.y - (moby->pos).y));
        dVar23 = (double)(float)(dVar20 - (double)(moby->rotation).z);
        uVar19 = FUN_005e8338((double)(g_heroPosition.x - (moby->pos).x),
                              (double)(g_heroPosition.y - (moby->pos).y));
        OrganicDeltAngSpeed
                  (uVar19,0x3f947ae140000000,0x3fd3333340000000,0x3fb99999a0000000,lVar17);
        dVar20 = (double)cosf((moby->rotation).z);
        dVar25 = 0.02500000037252903;
        local_1e0 = (float)((double)(DAT_0071f408 * 0.025) * dVar20);
        dVar20 = (double)FUN_005e8128((double)(moby->rotation).z);
        lVar17 = lVar17 + 0x10;
        local_1d8 = 0;
        local_1dc = (float)((double)(float)((double)DAT_0071f408 * dVar25) * dVar20);
        FUN_005e7f54(lVar17,lVar17,&local_1e0);
        dVar20 = (double)FUN_005e8588(lVar17,&g_heroPosition);
        if (((dVar20 < 1.5) && (dVar23 < 0.20000000298023224)) && (-0.20000000298023224 < dVar23)) {
          moby->state = '5';
          return 0x35;
        }
        dVar20 = (double)FUN_005e8588(lVar17,&g_heroPosition);
        if (dVar20 <= 16.0) {
          return ZEXT48(&DAT_002de864);
        }
        moby->state = '3';
        return 0x33;
      }
      uVar19 = FUN_005e8338((double)(g_heroPosition.x - (moby->pos).x),
                            (double)(g_heroPosition.y - (moby->pos).y));
      dVar20 = 0.10000000149011612;
      OrganicDeltAngSpeed
                (uVar19,0x3f947ae140000000,0x3fd3333340000000,0x3fb99999a0000000,lVar17,
                 &DAT_002de864,uVar15 + 0x70);
      sVar12 = *(short *)&kv[1].drag;
      *(short *)&kv[1].drag = sVar12 + 1;
      if (0x3c < sVar12) {
        uVar19 = 0;
        local_1c0 = 0;
        local_1bc = 0;
        local_1b8 = 0;
        local_1b4 = 0x3f800000;
        GetBonePosition(0,lVar17,1,auStack_1d0);
        local_1c8 = local_1c8 - 0.2;
        iVar8 = FUN_00299400(uVar19,&local_1c0,auStack_1d0);
        FUN_005e81f0(&local_1c0,&g_heroPosition,auStack_1d0);
        FUN_005e7f98((double)(float)((double)DAT_0071f408 * dVar20),
                     (ulonglong)*(uint *)(iVar8 + 0x78) + 0x20,&local_1c0);
        *(undefined1 *)(iVar8 + 0x20) = 1;
        *(undefined2 *)&kv[1].drag = 0;
      }
      dVar20 = (double)FUN_005e8588(lVar17 + 0x10,&g_heroPosition);
      if (dVar20 <= 3.0) {
        return ZEXT48(&DAT_002de864);
      }
      moby->state = '3';
      *(undefined2 *)&kv[1].drag = 0;
      return 0x33;
    }
    if (bVar1 < 0x3d) {
      return uVar7;
    }
    if (bVar1 < 0x3e) {
      uVar19 = FUN_005e8338((double)(g_heroPosition.x - (moby->pos).x),
                            (double)(g_heroPosition.y - (moby->pos).y));
      OrganicDeltAngSpeed
                (uVar19,0x3f947ae140000000,0x3fd3333340000000,0x3fb99999a0000000,lVar17);
      dVar20 = (double)FUN_005e8588(lVar17 + 0x10,&g_heroPosition);
      if (dVar20 < 8.0) {
        moby->state = '?';
        if (moby->animationId == '\x02') {
          return 0x3f;
        }
        uVar15 = MB_SetAnimation(lVar17,2,0,3);
        return uVar15;
      }
      dVar20 = (double)FUN_005e8588(lVar17 + 0x10,&g_heroPosition);
      if (16.0 <= dVar20) {
        return ZEXT48(&DAT_002de864);
      }
      moby->state = '>';
      if (moby->animationId == '\a') {
        return 0x3e;
      }
      uVar15 = MB_SetAnimation(lVar17,7,0,3);
      return uVar15;
    }
    uVar19 = FUN_005e8338((double)(g_heroPosition.x - (moby->pos).x),
                          (double)(g_heroPosition.y - (moby->pos).y));
    OrganicDeltAngSpeed
              (uVar19,0x3f947ae140000000,0x3fd3333340000000,0x3fb99999a0000000,lVar17,&DAT_002de864,
               uVar15 + 0x70);
    uVar13 = moby->animationId;
    if (((moby->updateId == uVar13) && ((moby->field43_0x70 & 2U) != 0)) && (uVar13 == '\a')) {
      MB_SetAnimation(lVar17,8,0,3);
    }
    else {
      if (((moby->updateId == uVar13) &&
          ((dVar20 = (double)BlendAnimFrame(moby), dVar20 == 40.0 ||
           (dVar20 = (double)BlendAnimFrame(moby), dVar20 == 55.0)))) &&
         (moby->animationId == '\b')) {
        dVar25 = (double)GameCamera.rot.radius;
        dVar20 = (double)FUN_005e8338((double)((moby->pos).x - GameCamera.posX),
                                      (double)((moby->pos).y - GameCamera.posY));
        dVar20 = (double)FastSubRots((float)dVar25,(float)dVar20);
        if (dVar20 < 36.0) {
          uVar19 = 0;
          local_190 = 0;
          local_18c = 0;
          local_188 = 0;
          local_184 = 0x3f800000;
          GetBonePosition(0,lVar17,1,auStack_1a0);
          local_198 = local_198 + 0.2;
          iVar8 = FUN_00299400(uVar19,&local_190,auStack_1a0);
          dVar20 = (double)cosf((moby->rotation).z);
          dVar25 = 0.15000000596046448;
          *(float *)(*(int *)(iVar8 + 0x78) + 0x20) =
               (float)((double)(DAT_0071f408 * 0.15) * dVar20);
          dVar20 = (double)FUN_005e8128((double)(moby->rotation).z);
          *(float *)(*(int *)(iVar8 + 0x78) + 0x24) =
               (float)((double)(float)((double)DAT_0071f408 * dVar25) * dVar20);
          *(undefined4 *)(*(int *)(iVar8 + 0x78) + 0x28) = 0;
          *(undefined1 *)(iVar8 + 0x20) = 1;
          goto LAB_002e1ae8;
        }
      }
      if (((moby->updateId == moby->animationId) && ((moby->field43_0x70 & 2U) != 0)) &&
         (moby->animationId == '\t')) {
        *(undefined2 *)&kv[1].drag = 0;
        moby->state = '=';
        if (moby->animationId != '\x03') {
          MB_SetAnimation(lVar17,3,0,3);
        }
      }
    }
LAB_002e1ae8:
    if (((moby->animationId == '\b') && ((moby->field43_0x70 & 2U) != 0)) &&
       (moby->animationId != '\t')) {
      MB_SetAnimation(lVar17,9,0,3);
    }
    dVar20 = (double)FUN_005e8588(lVar17 + 0x10,&g_heroPosition);
    uVar15 = ZEXT48(&DAT_002de864);
    if (dVar20 < 8.0) {
      uVar15 = 0x3f;
      moby->state = '?';
      if (moby->animationId != '\x02') {
        uVar15 = MB_SetAnimation(lVar17,2,0,3);
      }
    }
    return uVar15;
  }
  if (0x18 < bVar1) {
    if (bVar1 < 0x24) {
      if (bVar1 == 0x23) {
        dVar20 = (double)BlendAnimFrame(moby);
        bVar18 = moby->animationId;
        if ((12.0 <= dVar20) && (dVar20 <= 40.0)) {
          local_a0 = (longlong)(int)*(short *)((int)&kv[1].xySpeed + 2);
          dVar23 = 1.0471975803375244;
          dVar20 = (double)cosf((float)((double)local_a0 * 1.0471975803375244 +
                                                 (double)(moby->rotation).z));
          dVar25 = 0.10000000149011612;
          local_a0 = (longlong)(int)*(short *)((int)&kv[1].xySpeed + 2);
          local_220 = (float)((double)(DAT_0071f408 * 0.1) * dVar20);
          dVar20 = (double)FUN_005e8128((double)(float)((double)local_a0 * dVar23 +
                                                       (double)(moby->rotation).z));
          local_218 = 0;
          local_21c = (float)((double)(float)((double)DAT_0071f408 * dVar25) * dVar20);
          uVar15 = FUN_005e7f54(lVar17 + 0x10,lVar17 + 0x10,&local_220);
          return uVar15;
        }
        if (dVar20 < 40.0) {
          return (ulonglong)bVar18;
        }
        moby->state = '\x1f';
        if (bVar18 == 3) {
          return (ulonglong)bVar18;
        }
        uVar15 = MB_SetAnimation(lVar17,3,0,3);
        return uVar15;
      }
      if (bVar1 == 0x22) {
        uVar10 = MB_UpdateKick(moby,kv);
        if ((int)((ulonglong)uVar10 & 0x40) == 0) {
          return (ulonglong)uVar10 & 0x40;
        }
        *(undefined2 *)&kv[1].drag = 0;
        if (moby->animationId != '\x02') {
          MB_SetAnimation(lVar17,2,10,3);
        }
        moby->state = '#';
        uVar10 = MB_randInt(0x100);
        uVar15 = (ZERO_MASK((uVar10 & 1)) & 0xfffffffffffffffeU) + 1;
        *(short *)((int)&kv[1].xySpeed + 2) = (short)uVar15;
        return uVar15;
      }
      if (bVar1 == 0x21) {
        if ((((moby->updateId == moby->animationId) &&
             (dVar20 = (double)BlendAnimFrame(moby), 16.0 <= dVar20)) &&
            (dVar20 = (double)BlendAnimFrame(moby), dVar20 < 21.0)) &&
           ((ABS((moby->pos).z - g_heroPosition.z) < 0.2 &&
            (dVar20 = (double)FUN_005e8588(lVar17 + 0x10,&g_heroPosition), dVar20 < 4.0)))) {
          dVar25 = (double)GameCamera.rot.radius;
          dVar20 = (double)FUN_005e8338((double)((moby->pos).x - GameCamera.posX),
                                        (double)((moby->pos).y - GameCamera.posY));
          dVar20 = (double)FastSubRots((float)dVar25,(float)dVar20);
          if (dVar20 < 36.0) {
            dVar20 = (double)FUN_005e8338((double)(g_heroPosition.x - (moby->pos).x),
                                          (double)(g_heroPosition.y - (moby->pos).y));
            dVar20 = (double)FastSubRots((float)dVar20,(moby->rotation).z);
            if (dVar20 < 0.10471975803375244) {
              dVar20 = (double)cosf((moby->rotation).z);
              local_240 = (float)dVar20;
              dVar20 = (double)FUN_005e8128((double)(moby->rotation).z);
              local_23c = (float)dVar20;
              local_238 = 0;
              FUN_005e7e98(afStack_230,&g_heroMobyPtr->pos);
              local_228 = local_228 + 0.75;
              CollDamageMobyDirect
                        (1.0,g_heroMobyPtr,moby,1,0x2de864,afStack_230,&local_240);
            }
          }
        }
        uVar15 = (ulonglong)(byte)moby->field43_0x70 & 2;
        if ((int)uVar15 == 0) {
          return uVar15;
        }
        moby->state = '\x1f';
        if (moby->animationId == '\x03') {
          return 0x1f;
        }
        uVar15 = MB_SetAnimation(lVar17,3,0,3);
        return uVar15;
      }
      if (bVar1 != 0x20) {
        if (bVar1 != 0x1f) {
          if (bVar1 != 0x19) {
            return uVar7;
          }
          sVar12 = *(short *)&kv[1].drag;
          *(short *)&kv[1].drag = sVar12 + 1;
          if (sVar12 < 0x79) {
            return (longlong)sVar12;
          }
          moby->state = '\x15';
          if (moby->animationId == '\x03') {
            return 0x15;
          }
          uVar15 = MB_SetAnimation(lVar17,3,0,3);
          return uVar15;
        }
        dVar20 = (double)FUN_005e8338((double)(g_heroPosition.x - (moby->pos).x),
                                      (double)(g_heroPosition.y - (moby->pos).y));
        dVar20 = (double)(float)(dVar20 - (double)(moby->rotation).z);
        uVar19 = FUN_005e8338((double)(g_heroPosition.x - (moby->pos).x),
                              (double)(g_heroPosition.y - (moby->pos).y));
        OrganicDeltAngSpeed
                  (uVar19,0x3f947ae140000000,0x3fd3333340000000,0x3fb99999a0000000,lVar17);
        uVar15 = FUN_005e8588(lVar17 + 0x10,&g_heroPosition);
        if (15.0 <= extraout_f1_01) {
          return uVar15;
        }
        if (0.20000000298023224 <= dVar20) {
          return ZEXT48(&DAT_002de864);
        }
        if (dVar20 <= -0.20000000298023224) {
          return ZEXT48(&DAT_002de864);
        }
        moby->state = ' ';
        if (moby->animationId == '\x01') {
          return 0x20;
        }
        uVar15 = MB_SetAnimation(lVar17,1,0,3);
        return uVar15;
      }
      dVar20 = (double)FUN_005e8338((double)(g_heroPosition.x - (moby->pos).x),
                                    (double)(g_heroPosition.y - (moby->pos).y));
      dVar23 = (double)(float)(dVar20 - (double)(moby->rotation).z);
      uVar19 = FUN_005e8338((double)(g_heroPosition.x - (moby->pos).x),
                            (double)(g_heroPosition.y - (moby->pos).y));
      OrganicDeltAngSpeed
                (uVar19,0x3f947ae140000000,0x3fd3333340000000,0x3fb99999a0000000,lVar17);
      dVar20 = (double)cosf((moby->rotation).z);
      dVar25 = 0.15000000596046448;
      local_250 = (float)((double)(DAT_0071f408 * 0.15) * dVar20);
      dVar20 = (double)FUN_005e8128((double)(moby->rotation).z);
      lVar16 = lVar17 + 0x10;
      local_248 = 0;
      local_24c = (float)((double)(float)((double)DAT_0071f408 * dVar25) * dVar20);
      FUN_005e7f54(lVar16,lVar16,&local_250);
      dVar20 = (double)FUN_005e8588(lVar16,&g_heroPosition);
      if (((dVar20 < 4.0) && (dVar23 < 0.20000000298023224)) && (-0.20000000298023224 < dVar23)) {
        moby->state = '!';
        if (moby->animationId == '\x04') {
          return 0x21;
        }
        uVar15 = MB_SetAnimation(lVar17,4,0,3);
        return uVar15;
      }
      dVar20 = (double)FUN_005e8588(lVar16,&g_heroPosition);
      if (dVar20 <= 16.0) {
        return ZEXT48(&DAT_002de864);
      }
      moby->state = '\x1f';
      if (moby->animationId == '\x03') {
        return 0x1f;
      }
      uVar15 = MB_SetAnimation(lVar17,3,0,3);
      return uVar15;
    }
    dVar20 = 6.2831854820251465;
    if (bVar1 == 0x2d) {
      dVar25 = (double)FUN_005e8338((double)(g_heroPosition.x - (moby->pos).x),
                                    (double)(g_heroPosition.y - (moby->pos).y));
      dVar25 = (double)((float)(dVar25 - (double)(g_heroMobyPtr->rotation).z) - 3.1415927);
      if (-3.1415927410125732 <= dVar25) {
        if (3.1415927410125732 < dVar25) {
          dVar25 = (double)(float)(dVar25 - dVar20);
        }
      }
      else {
        dVar25 = (double)(float)(dVar25 + dVar20);
      }
      if ((dVar25 <= 1.5707963705062866) && (-1.5707963705062866 <= dVar25)) {
        return ZEXT48(&DAT_002de864);
      }
      moby->state = ')';
      if (moby->animationId == '\x03') {
        return 0x29;
      }
      uVar15 = MB_SetAnimation(lVar17,3,0,10);
      return uVar15;
    }
    if (bVar1 == 0x2c) {
      uVar10 = MB_UpdateKick(moby,kv);
      if ((int)((ulonglong)uVar10 & 0x40) == 0) {
        return (ulonglong)uVar10 & 0x40;
      }
      *(undefined2 *)&kv[1].drag = 0;
      if (moby->animationId != '\n') {
        MB_SetAnimation(lVar17,10,0,10);
      }
      moby->state = '-';
      return 0x2d;
    }
    if (bVar1 == 0x2b) {
      dVar25 = (double)FUN_005e8338((double)(g_heroPosition.x - (moby->pos).x),
                                    (double)(g_heroPosition.y - (moby->pos).y));
      dVar25 = (double)((float)(dVar25 - (double)(g_heroMobyPtr->rotation).z) - 3.1415927);
      if (-3.1415927410125732 <= dVar25) {
        if (3.1415927410125732 < dVar25) {
          dVar25 = (double)(float)(dVar25 - dVar20);
        }
      }
      else {
        dVar25 = (double)(float)(dVar25 + dVar20);
      }
      if ((1.5707963705062866 <= dVar25) || (dVar25 <= -1.5707963705062866)) {
        *(undefined2 *)((int)&kv[1].xySpeed + 2) = 0;
      }
      else {
        sVar12 = *(short *)((int)&kv[1].xySpeed + 2);
        *(short *)((int)&kv[1].xySpeed + 2) = sVar12 + 1;
        if ((0x1e < sVar12) && (moby->state = '-', moby->animationId != '\n')) {
          MB_SetAnimation(lVar17,10,0,10);
        }
      }
      if ((((moby->updateId == moby->animationId) &&
           (dVar20 = (double)BlendAnimFrame(moby), 16.0 <= dVar20)) &&
          (dVar20 = (double)BlendAnimFrame(moby), dVar20 < 21.0)) &&
         ((ABS((moby->pos).z - g_heroPosition.z) < 0.2 &&
          (dVar20 = (double)FUN_005e8588(lVar17 + 0x10,&g_heroPosition), dVar20 < 4.0)))) {
        dVar25 = (double)GameCamera.rot.radius;
        dVar20 = (double)FUN_005e8338((double)((moby->pos).x - GameCamera.posX),
                                      (double)((moby->pos).y - GameCamera.posY));
        dVar20 = (double)FastSubRots((float)dVar25,(float)dVar20);
        if (dVar20 < 36.0) {
          dVar20 = (double)FUN_005e8338((double)(g_heroPosition.x - (moby->pos).x),
                                        (double)(g_heroPosition.y - (moby->pos).y));
          dVar20 = (double)FastSubRots((float)dVar20,(moby->rotation).z);
          if (dVar20 < 0.10471975803375244) {
            dVar20 = (double)cosf((moby->rotation).z);
            local_200 = (float)dVar20;
            dVar20 = (double)FUN_005e8128((double)(moby->rotation).z);
            local_1fc = (float)dVar20;
            local_1f8 = 0;
            FUN_005e7e98(afStack_1f0,&g_heroMobyPtr->pos);
            local_1e8 = local_1e8 + 0.75;
            CollDamageMobyDirect(1.0,g_heroMobyPtr,moby,1,0x2de864,afStack_1f0,&local_200)
            ;
          }
        }
      }
      uVar15 = (ulonglong)(byte)moby->field43_0x70 & 2;
      if ((int)uVar15 == 0) {
        return uVar15;
      }
      moby->state = ')';
      if (moby->animationId == '\x03') {
        return 0x29;
      }
      uVar15 = MB_SetAnimation(lVar17,3,0,3);
      return uVar15;
    }
    if (bVar1 == 0x2a) {
      dVar25 = (double)FUN_005e8338((double)(g_heroPosition.x - (moby->pos).x),
                                    (double)(g_heroPosition.y - (moby->pos).y));
      dVar23 = (double)FUN_005e8338((double)(g_heroPosition.x - (moby->pos).x),
                                    (double)(g_heroPosition.y - (moby->pos).y));
      dVar23 = (double)(float)(dVar23 - (double)(moby->rotation).z);
      dVar25 = (double)((float)(dVar25 - (double)(g_heroMobyPtr->rotation).z) - 3.1415927);
      if (-3.1415927410125732 <= dVar25) {
        if (3.1415927410125732 < dVar25) {
          dVar25 = (double)(float)(dVar25 - dVar20);
        }
      }
      else {
        dVar25 = (double)(float)(dVar25 + dVar20);
      }
      if ((1.5707963705062866 <= dVar25) || (dVar25 <= -1.5707963705062866)) {
        *(undefined2 *)((int)&kv[1].xySpeed + 2) = 0;
      }
      else {
        sVar12 = *(short *)((int)&kv[1].xySpeed + 2);
        *(short *)((int)&kv[1].xySpeed + 2) = sVar12 + 1;
        if ((0x1e < sVar12) && (moby->state = '-', moby->animationId != '\n')) {
          MB_SetAnimation(lVar17,10,0,10);
        }
      }
      uVar19 = FUN_005e8338((double)(g_heroPosition.x - (moby->pos).x),
                            (double)(g_heroPosition.y - (moby->pos).y));
      OrganicDeltAngSpeed
                (uVar19,0x3f947ae140000000,0x3fd3333340000000,0x3fb99999a0000000,lVar17);
      dVar20 = (double)cosf((moby->rotation).z);
      dVar25 = 0.02500000037252903;
      local_210 = (float)((double)(DAT_0071f408 * 0.025) * dVar20);
      dVar20 = (double)FUN_005e8128((double)(moby->rotation).z);
      lVar16 = lVar17 + 0x10;
      local_208 = 0;
      local_20c = (float)((double)(float)((double)DAT_0071f408 * dVar25) * dVar20);
      FUN_005e7f54(lVar16,lVar16,&local_210);
      dVar20 = (double)FUN_005e8588(lVar16,&g_heroPosition);
      if (((dVar20 < 4.0) && (dVar23 < 0.20000000298023224)) && (-0.20000000298023224 < dVar23)) {
        moby->state = '+';
        if (moby->animationId == '\x04') {
          return 0x2b;
        }
        uVar15 = MB_SetAnimation(lVar17,4,0,3);
        return uVar15;
      }
      dVar20 = (double)FUN_005e8588(lVar16,&g_heroPosition);
      if (dVar20 <= 16.0) {
        return ZEXT48(&DAT_002de864);
      }
      moby->state = ')';
      if (moby->animationId == '\x03') {
        return 0x29;
      }
      uVar15 = MB_SetAnimation(lVar17,3,0,3);
      return uVar15;
    }
    if (bVar1 != 0x29) {
      return uVar7;
    }
    dVar25 = (double)FUN_005e8338((double)(g_heroPosition.x - (moby->pos).x),
                                  (double)(g_heroPosition.y - (moby->pos).y));
    dVar23 = (double)FUN_005e8338((double)(g_heroPosition.x - (moby->pos).x),
                                  (double)(g_heroPosition.y - (moby->pos).y));
    dVar23 = (double)(float)(dVar23 - (double)(moby->rotation).z);
    dVar25 = (double)((float)(dVar25 - (double)(g_heroMobyPtr->rotation).z) - 3.1415927);
    if (-3.1415927410125732 <= dVar25) {
      if (3.1415927410125732 < dVar25) {
        dVar25 = (double)(float)(dVar25 - dVar20);
      }
    }
    else {
      dVar25 = (double)(float)(dVar25 + dVar20);
    }
    if ((1.5707963705062866 <= dVar25) || (dVar25 <= -1.5707963705062866)) {
      *(undefined2 *)((int)&kv[1].xySpeed + 2) = 0;
    }
    else {
      sVar12 = *(short *)((int)&kv[1].xySpeed + 2);
      *(short *)((int)&kv[1].xySpeed + 2) = sVar12 + 1;
      if ((0x1e < sVar12) && (moby->state = '-', moby->animationId != '\n')) {
        MB_SetAnimation(lVar17,10,0,10);
      }
    }
    uVar19 = FUN_005e8338((double)(g_heroPosition.x - (moby->pos).x),
                          (double)(g_heroPosition.y - (moby->pos).y));
    OrganicDeltAngSpeed
              (uVar19,0x3f947ae140000000,0x3fd3333340000000,0x3fb99999a0000000,lVar17);
    uVar15 = FUN_005e8588(lVar17 + 0x10,&g_heroPosition);
    if (15.0 <= extraout_f1_02) {
      return uVar15;
    }
    if (0.20000000298023224 <= dVar23) {
      return ZEXT48(&DAT_002de864);
    }
    if (dVar23 <= -0.20000000298023224) {
      return ZEXT48(&DAT_002de864);
    }
    moby->state = '*';
    if (moby->animationId == '\0') {
      return 0x2a;
    }
    uVar15 = MB_SetAnimation(lVar17,0,0,3);
    return uVar15;
  }
  if (bVar1 < 0xb) {
    if (1 < bVar1) {
      if (bVar1 < 3) {
        if (((moby->updateId == moby->animationId) &&
            (dVar20 = (double)BlendAnimFrame(moby), 16.0 <= dVar20)) &&
           ((dVar20 = (double)BlendAnimFrame(moby), dVar20 < 21.0 &&
            ((ABS((moby->pos).z - g_heroPosition.z) < 0.2 &&
             (dVar20 = (double)FUN_005e8588(lVar17 + 0x10,&g_heroPosition), dVar20 < 4.0)))))) {
          dVar25 = (double)GameCamera.rot.radius;
          dVar20 = (double)FUN_005e8338((double)((moby->pos).x - GameCamera.posX),
                                        (double)((moby->pos).y - GameCamera.posY));
          dVar20 = (double)FastSubRots((float)dVar25,(float)dVar20);
          if (dVar20 < 36.0) {
            dVar20 = (double)FUN_005e8338((double)(g_heroPosition.x - (moby->pos).x),
                                          (double)(g_heroPosition.y - (moby->pos).y));
            dVar20 = (double)FastSubRots((float)dVar20,(moby->rotation).z);
            if (dVar20 < 0.10471975803375244) {
              dVar20 = (double)cosf((moby->rotation).z);
              local_2e0 = (float)dVar20;
              dVar20 = (double)FUN_005e8128((double)(moby->rotation).z);
              local_2dc = (float)dVar20;
              local_2d8 = 0;
              FUN_005e7e98(afStack_2d0,&g_heroMobyPtr->pos);
              local_2c8 = local_2c8 + 0.75;
              CollDamageMobyDirect
                        (1.0,g_heroMobyPtr,moby,1,0x2de864,afStack_2d0,&local_2e0);
            }
          }
        }
        uVar15 = (ulonglong)(byte)moby->field43_0x70 & 2;
        if ((int)uVar15 == 0) {
          return uVar15;
        }
        moby->state = '\x01';
        *(undefined2 *)&kv[1].drag = 0;
        if (moby->animationId == 3) {
          return (ulonglong)moby->animationId;
        }
        uVar15 = MB_SetAnimation(lVar17,3,0,3);
        return uVar15;
      }
      if (3 < bVar1) {
        return uVar7;
      }
      uVar15 = (ulonglong)(byte)moby->field43_0x70 & 2;
      if ((int)uVar15 == 0) {
        return uVar15;
      }
      moby->state = '\x01';
      if (moby->animationId == '\x03') {
        return 1;
      }
      uVar15 = MB_SetAnimation(lVar17,3,0,3);
      return uVar15;
    }
    if (bVar1 != 0) {
      uVar19 = FUN_005e8338((double)(g_heroPosition.x - (moby->pos).x),
                            (double)(g_heroPosition.y - (moby->pos).y));
      OrganicDeltAngSpeed
                (uVar19,0x3f947ae140000000,0x3fd3333340000000,0x3fb99999a0000000,lVar17);
      dVar20 = (double)FUN_005e8588(lVar17 + 0x10,&g_heroPosition);
      if (((dVar20 < 4.0) &&
          (sVar12 = *(short *)&kv[1].drag, *(short *)&kv[1].drag = sVar12 + 1, 0x3c < sVar12)) &&
         (moby->state = '\x02', moby->animationId != '\x04')) {
        MB_SetAnimation(lVar17,4,0,3);
      }
      dVar20 = (double)FUN_005e8588(lVar17 + 0x10,&g_heroPosition);
      if (10.0 <= dVar20) {
        return ZEXT48(&DAT_002de864);
      }
      if (((g_heroState != HYPER_STRIKE && g_heroState != WRENCH_ATTACK) &&
          (g_heroState != CROUCH_WRENCH_THROW)) && (g_heroState != UNK_17)) {
        return ZEXT48(&DAT_002de864);
      }
      moby->state = '\x03';
      if (moby->animationId == '\x02') {
        return 3;
      }
      uVar15 = MB_SetAnimation(lVar17,2,0,3);
      return uVar15;
    }
    kv->flag = 1;
    uVar4 = *(ushort *)((int)&kv[1].drag + 2);
    kv->xySpeed = 0.1;
    kv->grav = 0.008;
    kv->drag = 0.0005;
    kv->zSpeed = 0.1;
    kv->type = '\0';
    if (uVar4 == 0) {
      moby->state = '\x01';
      if (moby->animationId == '\x03') {
        return 1;
      }
      uVar15 = MB_SetAnimation(lVar17,3,0,3);
      return uVar15;
    }
    if (uVar4 == 1) {
      moby->state = '\v';
      if (moby->animationId == '\x03') {
        return 0xb;
      }
      uVar15 = MB_SetAnimation(lVar17,3,0,3);
      return uVar15;
    }
    if (uVar4 == 2) {
      moby->state = '\x15';
      if (moby->animationId != '\x03') {
        MB_SetAnimation(lVar17,3,0,3);
      }
      *(undefined2 *)&kv[1].xySpeed = 2;
      return 2;
    }
    if (uVar4 == 3) {
      moby->state = '\x1f';
      if (moby->animationId != '\x03') {
        MB_SetAnimation(lVar17,3,0,3);
      }
      *(undefined2 *)&kv[1].xySpeed = 3;
      return 3;
    }
    if (uVar4 == 4) {
      moby->state = ')';
      if (moby->animationId != '\x03') {
        MB_SetAnimation(lVar17,3,0,3);
      }
      *(undefined2 *)&kv[1].xySpeed = 1;
      return 1;
    }
    if (uVar4 == 5) {
      moby->state = '3';
      moby->scale = moby->pClass->gScale * 0.6666667;
      if (moby->animationId == 0xb) {
        return (ulonglong)moby->animationId;
      }
      uVar15 = MB_SetAnimation(lVar17,0xb,0,3);
      return uVar15;
    }
    if (uVar4 == 6) {
      moby->state = '=';
      moby->modeBits = moby->modeBits | MIRROR;
      if (moby->animationId != '\x03') {
        MB_SetAnimation(lVar17,3,0,3);
      }
      InitFollower((PathFollower *)&kv[1].radius);
      kv[1].radius = 0;
      uVar15 = FUN_005e7e98(lVar17 + 0x10,(ulonglong)(uint)kv[1].xyBounceDamp + 0x10);
      return uVar15;
    }
    if (uVar4 == 7) {
      moby->state = 'G';
      if (moby->animationId == '\x03') {
        return 0x47;
      }
      uVar15 = MB_SetAnimation(lVar17,3,0,3);
      return uVar15;
    }
    if (uVar4 == 8) {
      moby->state = 'Q';
      *(undefined2 *)&kv[1].xySpeed = 8;
      if (moby->animationId == 3) {
        return (ulonglong)moby->animationId;
      }
      uVar15 = MB_SetAnimation(lVar17,3,0,3);
      return uVar15;
    }
    if (uVar4 == 9) {
      moby->state = '[';
      if (moby->animationId != '\x03') {
        MB_SetAnimation(lVar17,3,0,3);
      }
      *(undefined2 *)&kv[1].xySpeed = 3;
      *(undefined2 *)&kv[1].drag = 0x78;
      return 3;
    }
    if (uVar4 != 10) {
      return (ulonglong)uVar4;
    }
    moby->state = 'e';
    if (moby->animationId != '\x03') {
      MB_SetAnimation(lVar17,3,0,3);
    }
    *(undefined2 *)&kv[1].xySpeed = 3;
    return 3;
  }
  if (bVar1 == 0x18) {
    uVar10 = MB_UpdateKick(moby,kv);
    if ((int)((ulonglong)uVar10 & 0x40) == 0) {
      return (ulonglong)uVar10 & 0x40;
    }
    *(undefined2 *)&kv[1].drag = 0;
    if (moby->animationId != '\n') {
      MB_SetAnimation(lVar17,10,0,3);
    }
    moby->state = '\x19';
    return 0x19;
  }
  if (bVar1 == 0x17) {
    if (((moby->updateId == moby->animationId) &&
        (dVar20 = (double)BlendAnimFrame(moby), 16.0 <= dVar20)) &&
       ((dVar20 = (double)BlendAnimFrame(moby), dVar20 < 21.0 &&
        ((ABS((moby->pos).z - g_heroPosition.z) < 0.2 &&
         (dVar20 = (double)FUN_005e8588(lVar17 + 0x10,&g_heroPosition), dVar20 < 4.0)))))) {
      dVar25 = (double)GameCamera.rot.radius;
      dVar20 = (double)FUN_005e8338((double)((moby->pos).x - GameCamera.posX),
                                    (double)((moby->pos).y - GameCamera.posY));
      dVar20 = (double)FastSubRots((float)dVar25,(float)dVar20);
      if (dVar20 < 36.0) {
        dVar20 = (double)FUN_005e8338((double)(g_heroPosition.x - (moby->pos).x),
                                      (double)(g_heroPosition.y - (moby->pos).y));
        dVar20 = (double)FastSubRots((float)dVar20,(moby->rotation).z);
        if (dVar20 < 0.10471975803375244) {
          dVar20 = (double)cosf((moby->rotation).z);
          local_270 = (float)dVar20;
          dVar20 = (double)FUN_005e8128((double)(moby->rotation).z);
          local_26c = (float)dVar20;
          local_268 = 0;
          FUN_005e7e98(afStack_260,&g_heroMobyPtr->pos);
          local_258 = local_258 + 0.75;
          CollDamageMobyDirect(1.0,g_heroMobyPtr,moby,1,0x2de864,afStack_260,&local_270);
        }
      }
    }
    uVar15 = (ulonglong)(byte)moby->field43_0x70 & 2;
    if ((int)uVar15 == 0) {
      return uVar15;
    }
    moby->state = '\x15';
    if (moby->animationId == '\x03') {
      return 0x15;
    }
    uVar15 = MB_SetAnimation(lVar17,3,0,3);
    return uVar15;
  }
  if (bVar1 == 0x16) {
    dVar20 = (double)FUN_005e8338((double)(g_heroPosition.x - (moby->pos).x),
                                  (double)(g_heroPosition.y - (moby->pos).y));
    dVar23 = (double)(float)(dVar20 - (double)(moby->rotation).z);
    uVar19 = FUN_005e8338((double)(g_heroPosition.x - (moby->pos).x),
                          (double)(g_heroPosition.y - (moby->pos).y));
    OrganicDeltAngSpeed
              (uVar19,0x3f947ae140000000,0x3fd3333340000000,0x3fb99999a0000000,lVar17);
    dVar20 = (double)cosf((moby->rotation).z);
    dVar25 = 0.15000000596046448;
    local_280 = (float)((double)(DAT_0071f408 * 0.15) * dVar20);
    dVar20 = (double)FUN_005e8128((double)(moby->rotation).z);
    lVar16 = lVar17 + 0x10;
    local_278 = 0;
    local_27c = (float)((double)(float)((double)DAT_0071f408 * dVar25) * dVar20);
    FUN_005e7f54(lVar16,lVar16,&local_280);
    dVar20 = (double)FUN_005e8588(lVar16,&g_heroPosition);
    if (((dVar20 < 2.0) && (dVar23 < 0.20000000298023224)) && (-0.20000000298023224 < dVar23)) {
      moby->state = '\x17';
      if (moby->animationId == '\x04') {
        return 0x17;
      }
      uVar15 = MB_SetAnimation(lVar17,4,0,3);
      return uVar15;
    }
    dVar20 = (double)FUN_005e8588(lVar16,&g_heroPosition);
    if (dVar20 <= 16.0) {
      return ZEXT48(&DAT_002de864);
    }
    moby->state = '\x15';
    if (moby->animationId == '\x03') {
      return 0x15;
    }
    uVar15 = MB_SetAnimation(lVar17,3,0,3);
    return uVar15;
  }
  if (bVar1 == 0x15) {
    dVar20 = (double)FUN_005e8338((double)(g_heroPosition.x - (moby->pos).x),
                                  (double)(g_heroPosition.y - (moby->pos).y));
    dVar20 = (double)(float)(dVar20 - (double)(moby->rotation).z);
    uVar19 = FUN_005e8338((double)(g_heroPosition.x - (moby->pos).x),
                          (double)(g_heroPosition.y - (moby->pos).y));
    OrganicDeltAngSpeed
              (uVar19,0x3f947ae140000000,0x3fd3333340000000,0x3fb99999a0000000,lVar17);
    uVar15 = FUN_005e8588(lVar17 + 0x10,&g_heroPosition);
    if (15.0 <= extraout_f1_00) {
      return uVar15;
    }
    if (0.20000000298023224 <= dVar20) {
      return ZEXT48(&DAT_002de864);
    }
    if (dVar20 <= -0.20000000298023224) {
      return ZEXT48(&DAT_002de864);
    }
    moby->state = '\x16';
    if (moby->animationId == '\x01') {
      return 0x16;
    }
    uVar15 = MB_SetAnimation(lVar17,1,0,3);
    return uVar15;
  }
  if (bVar1 != 0xc) {
    if (bVar1 != 0xb) {
      return uVar7;
    }
    dVar20 = (double)FUN_005e8338((double)(g_heroPosition.x - (moby->pos).x),
                                  (double)(g_heroPosition.y - (moby->pos).y));
    dVar20 = (double)(float)(dVar20 - (double)(moby->rotation).z);
    uVar19 = FUN_005e8338((double)(g_heroPosition.x - (moby->pos).x),
                          (double)(g_heroPosition.y - (moby->pos).y));
    OrganicDeltAngSpeed
              (uVar19,0x3f947ae140000000,0x3fd3333340000000,0x3fb99999a0000000,lVar17);
    uVar15 = FUN_005e8588(lVar17 + 0x10,&g_heroPosition);
    if (15.0 <= extraout_f1) {
      return uVar15;
    }
    if (0.20000000298023224 <= dVar20) {
      return ZEXT48(&DAT_002de864);
    }
    if (dVar20 <= -0.20000000298023224) {
      return ZEXT48(&DAT_002de864);
    }
    sVar12 = *(short *)&kv[1].drag;
    *(short *)&kv[1].drag = sVar12 + 1;
    if (sVar12 < 0x15) {
      return (longlong)sVar12;
    }
    *(undefined2 *)&kv[1].drag = 0;
    moby->state = '\f';
    if (moby->animationId == 8) {
      return (ulonglong)moby->animationId;
    }
    uVar15 = MB_SetAnimation(lVar17,8,0,3);
    return uVar15;
  }
  uVar19 = FUN_005e8338((double)(g_heroPosition.x - (moby->pos).x),
                        (double)(g_heroPosition.y - (moby->pos).y));
  OrganicDeltAngSpeed
            (uVar19,0x3f947ae140000000,0x3fd3333340000000,0x3f20624de0000000,lVar17,&DAT_002de864,
             uVar15 + 0x70);
  uVar13 = moby->animationId;
  if (((moby->updateId == uVar13) && ((moby->field43_0x70 & 2U) != 0)) && (uVar13 == '\a')) {
    if (uVar13 != '\b') {
      MB_SetAnimation(lVar17,8,0,3);
    }
    goto LAB_002dfe18;
  }
  if (moby->updateId == uVar13) {
    dVar20 = (double)BlendAnimFrame(moby);
    uVar13 = moby->animationId;
    if (dVar20 != 40.0) {
      dVar20 = (double)BlendAnimFrame(moby);
      uVar13 = moby->animationId;
      if (dVar20 != 55.0) goto LAB_002dfdc0;
    }
    if (uVar13 == '\b') {
      uVar19 = 0;
      local_290 = 0;
      local_28c = 0;
      local_288 = 0;
      local_284 = 0x3f800000;
      GetBonePosition(0,lVar17,1,auStack_2c0);
      local_2b8 = local_2b8 + 0.2;
      dVar23 = 1.5707963705062866;
      dVar20 = (double)cosf((moby->rotation).z + 1.5707964);
      dVar25 = 0.5;
      local_2b0 = (float)(dVar20 * 0.5);
      dVar20 = (double)FUN_005e8128((double)(float)((double)(moby->rotation).z + dVar23));
      local_2ac = (float)(dVar20 * dVar25);
      local_2a8 = 0;
      FUN_005e7f54(auStack_2a0,&local_2b0,auStack_2c0);
      iVar8 = FUN_00299400(uVar19,&local_290,auStack_2a0);
      dVar23 = 0.1745329201221466;
      dVar20 = (double)cosf((moby->rotation).z + 0.17453292);
      dVar25 = 0.15000000596046448;
      *(float *)(*(int *)(iVar8 + 0x78) + 0x20) = (float)((double)(DAT_0071f408 * 0.15) * dVar20);
      dVar20 = (double)FUN_005e8128((double)(float)((double)(moby->rotation).z + dVar23));
      *(float *)(*(int *)(iVar8 + 0x78) + 0x24) =
           (float)((double)(float)((double)DAT_0071f408 * dVar25) * dVar20);
      *(undefined4 *)(*(int *)(iVar8 + 0x78) + 0x28) = 0;
      *(undefined1 *)(iVar8 + 0x20) = 1;
      FUN_005e81f0(auStack_2a0,auStack_2c0,&local_2b0);
      iVar9 = FUN_00299400(uVar19,&local_290,auStack_2a0);
      dVar20 = (double)cosf((float)((double)(moby->rotation).z - dVar23));
      *(float *)(*(int *)(iVar9 + 0x78) + 0x20) =
           (float)((double)(float)((double)DAT_0071f408 * dVar25) * dVar20);
      dVar20 = (double)FUN_005e8128((double)(float)((double)(moby->rotation).z - dVar23));
      *(float *)(*(int *)(iVar9 + 0x78) + 0x24) =
           (float)((double)(float)((double)DAT_0071f408 * dVar25) * dVar20);
      iVar8 = *(int *)(iVar9 + 0x78);
      *(undefined4 *)(iVar8 + 0x28) = 0;
      *(undefined1 *)(iVar9 + 0x20) = 1;
      iVar8 = FUN_00299400(uVar19,&local_290,auStack_2c0,iVar8,lVar17,0x20ffff);
      dVar20 = (double)cosf((moby->rotation).z);
      *(float *)(*(int *)(iVar8 + 0x78) + 0x20) =
           (float)((double)(float)((double)DAT_0071f408 * dVar25) * dVar20);
      dVar20 = (double)FUN_005e8128((double)(moby->rotation).z);
      *(float *)(*(int *)(iVar8 + 0x78) + 0x24) =
           (float)((double)(float)((double)DAT_0071f408 * dVar25) * dVar20);
      *(undefined4 *)(*(int *)(iVar8 + 0x78) + 0x28) = 0;
      *(undefined1 *)(iVar8 + 0x20) = 1;
      goto LAB_002dfe18;
    }
  }
LAB_002dfdc0:
  if ((moby->updateId == uVar13) && (uVar13 == '\t' && (moby->field43_0x70 & 2U) != 0)) {
    *(undefined2 *)&kv[1].drag = 0;
    moby->state = '\v';
    if (moby->animationId != '\x03') {
      MB_SetAnimation(lVar17,3,0,3);
    }
  }
LAB_002dfe18:
  sVar12 = *(short *)&kv[1].drag;
  *(short *)&kv[1].drag = sVar12 + 1;
  bVar18 = moby->animationId;
  uVar15 = (ulonglong)bVar18;
  if ((sVar12 < 0xd3) && (uVar15 = (ulonglong)g_heroState, g_heroState != TAKING_DAMAGE)) {
    return uVar15;
  }
  if (bVar18 != 8) {
    return uVar15;
  }
  uVar15 = (ulonglong)(byte)moby->field43_0x70 & 2;
  if ((int)uVar15 == 0) {
    return uVar15;
  }
  if (bVar18 == 9) {
    return uVar15;
  }
  uVar15 = MB_SetAnimation(lVar17,9,0,3);
  return uVar15;
}


