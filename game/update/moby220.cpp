// game/update/moby220.cpp -- reconstructed from NPEA00385 EBOOT
// STATUS: NOT STARTED (raw Ghidra output)
// 2 functions, 0x2f7c68-0x2f8bf4
#include "game/update/moby220.h"
#include "game/camera.h"
#include "game/collproc.h"
#include "game/hero.h"
#include "game/mobyfunc.h"
#include "game/mobyutil.h"
#include "game/path.h"
#include "game/update/moby156.h"
#include "idol/fastfunc.h"
#include "idol/mathfunc.h"

// 0x02f7c68 (0x14 bytes)
void M220_002f7c68(void)

{
  DAT_007fef9c = 0x10000;
  return;
}


// 0x02f7cf8 (0xefc bytes)
/* Moby 220 */

void UpdateMoby_220(MobyInstance *moby)

{
  u8 uVar1;
  float fVar2;
  KickVars *kv;
  int *piVar3;
  undefined4 uVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  int iVar11;
  int iVar12;
  uint uVar13;
  float fVar14;
  int iVar15;
  ulonglong uVar16;
  undefined8 uVar17;
  double dVar18;
  double dVar19;
  double dVar20;
  GPiece<16> auVar21;
  GPiece<16> auVar22;
  GPiece<16> auVar23;
  GPiece<16> local_d0;
  GPiece<16> auStack_c0;
  undefined4 local_b0 [4];
  GPiece<16> local_a0;
  float local_90;
  float local_8c;
  undefined4 local_88;
  f32 local_80;
  f32 local_7c;
  float local_78;
  f32 local_74;
  int local_70;
  int local_6c;
  int local_68;
  int local_64;
  GPiece<16> auStack_60;
  
  kv = (KickVars *)moby->pVar;
  uVar16 = ZEXT48(kv);
  iVar11 = MB_damage(moby,0x10000,0);
  if ((iVar11 != 0) && (moby->state != '\x02' && moby->state != 'c')) {
    kv->flag = 1;
    kv->grav = 0.008;
    kv->drag = 0.0005;
    fVar14 = g_FrameTime;
    iVar11 = kv[2].radius + -1;
    kv->xySpeed = g_FrameTime * 10.0;
    kv->type = '\0';
    kv[2].radius = iVar11;
    kv->zSpeed = fVar14 * 4.0;
    if (iVar11 == 0) {
      fVar14 = (moby->pos).z;
      moby->state = 'c';
      (moby->pos).z = fVar14 + 0.1;
      FUN_005e8338((double)((moby->pos).x - g_heroPosition.x),
                   (double)((moby->pos).y - g_heroPosition.y));
      MB_StartKick(moby,uVar16);
    }
    else {
      fVar14 = (moby->pos).z;
      moby->state = '\x02';
      (moby->pos).z = fVar14 + 0.1;
      FUN_005e8338((double)((moby->pos).x - g_heroPosition.x),
                   (double)((moby->pos).y - g_heroPosition.y));
      MB_StartKick(moby,uVar16);
    }
  }
  uVar1 = moby->state;
  moby->damage = -1;
  if (uVar1 == 'c') {
    uVar13 = MB_UpdateKick(moby,kv);
    if ((uVar13 & 0x40) != 0) {
      DeleteMoby(moby);
    }
  }
  else if (uVar1 == '\x06') {
    piVar3 = (int *)kv[2].kickVel[0];
    iVar11 = *piVar3;
    iVar12 = (int)kv[1].peakFrame + iVar11 + (int)(char)kv[1].field_0x54;
    fVar14 = (float)(iVar12 - (iVar12 / iVar11) * iVar11);
    local_70 = piVar3[(int)fVar14 * 4 + 4];
    local_6c = piVar3[(int)fVar14 * 4 + 5];
    local_68 = piVar3[(int)fVar14 * 4 + 6];
    local_64 = piVar3[(int)fVar14 * 4 + 7];
    kv[1].flag = (int)(g_FrameTime * 8.5);
    iVar11 = MB_UpdateNavMoveTurning(moby,uVar16 + 0x60,&local_70,auStack_60);
    if (iVar11 != 0) {
      piVar3 = (int *)kv[2].kickVel[0];
      kv[1].peakFrame = fVar14;
      iVar11 = *piVar3;
      iVar12 = (int)fVar14 + iVar11 + (int)(char)kv[1].field_0x54;
      iVar15 = ((int)fVar14 + iVar11) - (int)(char)kv[1].field_0x54;
      dVar18 = (double)FUN_005e8338((double)(g_heroPosition.x - (moby->pos).x),
                                    (double)(g_heroPosition.y - (moby->pos).y));
      iVar12 = (int)kv[2].kickVel[0] + (iVar12 - (iVar12 / iVar11) * iVar11) * 0x10;
      dVar19 = (double)FUN_005e8338((double)(*(float *)(iVar12 + 0x10) - (moby->pos).x),
                                    (double)(*(float *)(iVar12 + 0x14) - (moby->pos).y));
      iVar11 = (int)kv[2].kickVel[0] + (iVar15 - (iVar15 / iVar11) * iVar11) * 0x10;
      dVar20 = (double)FUN_005e8338((double)(*(float *)(iVar11 + 0x10) - (moby->pos).x),
                                    (double)(*(float *)(iVar11 + 0x14) - (moby->pos).y));
      dVar19 = (double)FastSubRots((float)dVar19,(float)dVar18);
      dVar18 = (double)FastSubRots((float)dVar20,(float)dVar18);
      if (dVar19 < dVar18) {
        kv[1].field_0x54 = -kv[1].field_0x54;
      }
    }
    fVar14 = (moby->pos).y - g_heroPosition.y;
    fVar2 = (moby->pos).x - g_heroPosition.x;
    if ((14.0 < SQRT(fVar2 * fVar2 + fVar14 * fVar14)) &&
       (moby->state = '\x01', moby->animationId != '\0')) {
      MB_SetAnimation(moby,0,0,3);
    }
  }
  else if (uVar1 == '\x05') {
    fVar14 = (moby->pos).y - g_heroPosition.y;
    fVar2 = (moby->pos).x - g_heroPosition.x;
    fVar14 = SQRT(fVar2 * fVar2 + fVar14 * fVar14);
    if (5.0 <= fVar14) {
      if ((fVar14 < 16.0) && (moby->state = '\x01', moby->animationId != '\0')) {
        MB_SetAnimation(moby,0,0,3);
      }
    }
    else {
      moby->state = '\x04';
      if (moby->animationId != '\x04') {
        MB_SetAnimation(moby,4,0,3);
      }
    }
    iVar11 = FastDecTimerS32(uVar16 + 0xe4);
    if ((iVar11 != 0) && (moby->state = '\x03', moby->animationId != '\a')) {
      MB_SetAnimation(moby,7,0,3);
    }
  }
  else if (uVar1 == '\x04') {
    uVar17 = FUN_005e8338((double)(g_heroPosition.x - (moby->pos).x),
                          (double)(g_heroPosition.y - (moby->pos).y));
    OrganicDeltAngSpeed
              (uVar17,0x3f947ae140000000,0x3fd3333340000000,0x3fc0000000000000,moby,&DAT_002f7c80,
               uVar16 + 0xe8);
    if ((((moby->updateId == moby->animationId) &&
         (dVar18 = (double)BlendAnimFrame(moby), 16.0 <= dVar18)) &&
        (dVar18 = (double)BlendAnimFrame(moby), dVar18 < 21.0)) &&
       (ABS((moby->pos).z - g_heroPosition.z) < 0.2)) {
      fVar14 = (moby->pos).y;
      fVar2 = (moby->pos).x;
      fVar5 = fVar14 - g_heroPosition.y;
      fVar7 = fVar2 - g_heroPosition.x;
      if (SQRT(fVar7 * fVar7 + fVar5 * fVar5) < 5.0) {
        dVar18 = (double)FUN_005e8338((double)(g_heroPosition.x - fVar2),
                                      (double)(g_heroPosition.y - fVar14));
        dVar18 = (double)FastSubRots((float)dVar18,(moby->rotation).z);
        if (dVar18 < 0.20943951606750488) {
          fVar14 = (moby->rotation).z;
          fVar2 = fVar14 + 1.5707963;
          fVar5 = 3.1415925 - fVar14;
          if (fVar14 - (3.1415925 - fVar14) < 0.0) {
            fVar5 = fVar14;
          }
          fVar7 = 3.1415925 - fVar2;
          if (fVar2 - (3.1415925 - fVar2) < 0.0) {
            fVar7 = fVar2;
          }
          fVar6 = -3.1415925 - fVar14;
          if ((-3.1415925 - fVar14) - fVar5 < 0.0) {
            fVar6 = fVar5;
          }
          local_88 = 0;
          fVar14 = -3.1415925 - fVar2;
          if ((-3.1415925 - fVar2) - fVar7 < 0.0) {
            fVar14 = fVar7;
          }
          fVar2 = fVar6 * fVar6;
          fVar5 = fVar14 * fVar14;
          fVar9 = fVar2 * fVar2 * fVar6;
          fVar7 = fVar5 * fVar5 * fVar14;
          fVar10 = fVar2 * fVar9;
          fVar8 = fVar5 * fVar7;
          local_8c = fVar2 * fVar10 * 2.601887e-06 +
                     fVar10 * -0.0001980741 +
                     fVar9 * 0.0083330255 + fVar2 * fVar6 * -0.16666657 + fVar6;
          local_90 = fVar5 * fVar8 * 2.601887e-06 +
                     fVar8 * -0.0001980741 +
                     fVar7 * 0.0083330255 + fVar5 * fVar14 * -0.16666657 + fVar14;
          local_80 = (g_heroMobyPtr->pos).x;
          local_7c = (g_heroMobyPtr->pos).y;
          local_74 = (g_heroMobyPtr->pos).w;
          local_78 = (g_heroMobyPtr->pos).z + 0.75;
          CollDamageMobyDirect(1.0,g_heroMobyPtr,moby,1,0x2f7c80,&local_80,&local_90);
        }
      }
    }
    if (((moby->field43_0x70 & 2U) != 0) && (moby->state = '\x06', moby->animationId != '\x01')) {
      MB_SetAnimation(moby,1,0,3);
    }
  }
  else if (uVar1 == '\x03') {
    uVar17 = FUN_005e8338((double)(g_heroPosition.x - (moby->pos).x),
                          (double)(g_heroPosition.y - (moby->pos).y));
    OrganicDeltAngSpeed
              (uVar17,0x3f947ae140000000,0x3fd3333340000000,0x3fc0000000000000,moby);
    fVar14 = (moby->pos).y - g_heroPosition.y;
    fVar2 = (moby->pos).x - g_heroPosition.x;
    if ((SQRT(fVar2 * fVar2 + fVar14 * fVar14) < 5.0) &&
       (moby->state = '\x04', moby->animationId != '\x04')) {
      MB_SetAnimation(moby,4,0,3);
    }
    uVar1 = moby->animationId;
    if (((moby->updateId == uVar1) && ((moby->field43_0x70 & 2U) != 0)) && (uVar1 == '\a')) {
      if (uVar1 != '\b') {
        MB_SetAnimation(moby,8,0,3);
      }
      auVar21 = ZEXT416(0xffffffff);
      auVar21 = auVar21 | auVar21 << 0x20 | auVar21 << 0x40 | auVar21 << 0x60;
      auVar22 = vectorShiftLeftIntegerWord(auVar21,auVar21);
      auVar21 = loadVectorLeftIndexed(0x24,0x2f7c80);
      auVar21 = auVar21 >> 0x60 & (GPiece<16>)0xffffffff;
      auVar23 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
      auVar21 = vectorMultiplyAddFloatingPoint
                          (auVar23,auVar21 | auVar21 << 0x20 | auVar21 << 0x40 | auVar21 << 0x60,
                           auVar22);
      auVar21 = vectorConvertToSignedFixedPointWordSaturate(auVar21,0);
      auVar21 = auVar21 >> 0x60 & (GPiece<16>)0xffffffff;
      uVar4 = storeVectorElementWordIndexed
                        (auVar21 | auVar21 << 0x20 | auVar21 << 0x40 | auVar21 << 0x60,0xe4,uVar16);
      *(undefined4 *)((uint)&kv[2].flag & 0xfffffffc) = uVar4;
    }
    else if (moby->updateId == uVar1) {
      if (uVar1 != '\b') {
        if (((moby->field43_0x70 & 2U) != 0) && (uVar1 == '\t')) {
          auVar21 = ZEXT416(0xffffffff);
          auVar21 = auVar21 | auVar21 << 0x20 | auVar21 << 0x40 | auVar21 << 0x60;
          auVar22 = vectorShiftLeftIntegerWord(auVar21,auVar21);
          auVar21 = loadVectorLeftIndexed(0x24,0x2f7c80);
          auVar21 = auVar21 >> 0x60 & (GPiece<16>)0xffffffff;
          auVar23 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
          auVar21 = vectorMultiplyAddFloatingPoint
                              (auVar23,auVar21 | auVar21 << 0x20 | auVar21 << 0x40 | auVar21 << 0x60
                               ,auVar22);
          auVar21 = vectorConvertToSignedFixedPointWordSaturate(auVar21,0);
          auVar21 = auVar21 >> 0x60 & (GPiece<16>)0xffffffff;
          uVar4 = storeVectorElementWordIndexed
                            (auVar21 | auVar21 << 0x20 | auVar21 << 0x40 | auVar21 << 0x60,0xe4,
                             uVar16);
          *(undefined4 *)((uint)&kv[2].flag & 0xfffffffc) = uVar4;
          moby->state = '\x05';
          if (moby->animationId != '\x03') {
            MB_SetAnimation(moby,3,0,3);
          }
        }
      }
      else {
        iVar11 = kv[2].flag + -1;
        kv[2].flag = iVar11;
        if ((iVar11 == 0) && (moby->animationId != '\t')) {
          MB_SetAnimation(moby,9,0,3);
        }
        dVar18 = (double)BlendAnimFrame(moby);
        if (((dVar18 == 40.0) || (dVar18 == 48.0)) || (dVar18 == 32.0)) {
          uVar17 = 0;
          GetBonePosition(moby,1,local_b0);
          iVar11 = FUN_00299400(uVar17,local_a0,local_b0);
          *(undefined1 *)(iVar11 + 0x20) = 1;
        }
      }
    }
  }
  else if (uVar1 == '\x02') {
    uVar13 = MB_UpdateKick(moby,kv);
    if ((uVar13 & 0x40) != 0) {
      if (moby->animationId != '\x01') {
        MB_SetAnimation(moby,1,0,3);
      }
      moby->state = '\x06';
      fVar14 = (float)PathFindClosestPnt(0.0,(Vec4 *)&moby->pos,(Spline *)kv[2].kickVel[0]);
      piVar3 = (int *)kv[2].kickVel[0];
      kv[1].peakFrame = fVar14;
      iVar11 = *piVar3;
      iVar12 = (int)fVar14 + iVar11 + (int)(char)kv[1].field_0x54;
      iVar15 = ((int)fVar14 + iVar11) - (int)(char)kv[1].field_0x54;
      dVar18 = (double)FUN_005e8338((double)(g_heroPosition.x - (moby->pos).x),
                                    (double)(g_heroPosition.y - (moby->pos).y));
      iVar12 = (int)kv[2].kickVel[0] + (iVar12 - (iVar12 / iVar11) * iVar11) * 0x10;
      dVar19 = (double)FUN_005e8338((double)(*(float *)(iVar12 + 0x10) - (moby->pos).x),
                                    (double)(*(float *)(iVar12 + 0x14) - (moby->pos).y));
      iVar11 = (int)kv[2].kickVel[0] + (iVar15 - (iVar15 / iVar11) * iVar11) * 0x10;
      dVar20 = (double)FUN_005e8338((double)(*(float *)(iVar11 + 0x10) - (moby->pos).x),
                                    (double)(*(float *)(iVar11 + 0x14) - (moby->pos).y));
      dVar19 = (double)FastSubRots((float)dVar19,(float)dVar18);
      dVar18 = (double)FastSubRots((float)dVar20,(float)dVar18);
      if (dVar19 < dVar18) {
        kv[1].field_0x54 = -kv[1].field_0x54;
      }
    }
  }
  else if (uVar1 == '\x01') {
    iVar11 = *(int *)kv[2].kickVel[0];
    iVar15 = (int)kv[1].peakFrame + iVar11 + (int)(char)kv[1].field_0x54;
    kv[1].flag = (int)(g_FrameTime * 2.0);
    iVar12 = MB_UpdateNavMoveTurning(moby,uVar16 + 0x60,local_d0,auStack_c0);
    if (iVar12 != 0) {
      kv[1].peakFrame = (float)(iVar15 - (iVar15 / iVar11) * iVar11);
    }
    fVar14 = (moby->pos).y - g_heroPosition.y;
    fVar2 = (moby->pos).x - g_heroPosition.x;
    if ((SQRT(fVar2 * fVar2 + fVar14 * fVar14) < 14.0) &&
       (moby->state = '\x03', moby->animationId != '\a')) {
      MB_SetAnimation(moby,7,0,3);
    }
  }
  else if (uVar1 == '\0') {
    InitFollower((PathFollower *)&kv[1].peakFrame);
    MB_InitDefaultParams(kv[1].kickVel);
    kv[1].kickVel[3] = 2.0;
    kv[1].faceSpeed = 0.2;
    kv[1].kickActive = '=';
    kv[1].type = 'L';
    kv[1].stage = -0x3333;
    kv[1].faceAng = 0.3;
    fVar14 = g_FrameTime;
    kv[1].kickVel[0] = 1.27378e-42;
    kv[1].flag = (int)(fVar14 * 2.0);
    moby->state = '\x01';
    if (moby->animationId != '\0') {
      MB_SetAnimation(moby,0,0,3);
    }
  }
  return;
}


