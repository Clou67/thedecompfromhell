// game/update/moby192.cpp -- reconstructed from NPEA00385 EBOOT
// STATUS: NOT STARTED (raw Ghidra output)
// 2 functions, 0x2daa30-0x2dbdac
#include "game/update/moby192.h"
#include "game/camera.h"
#include "game/collproc.h"
#include "game/debug.h"
#include "game/hero.h"
#include "game/mobyfunc.h"
#include "game/mobyutil.h"
#include "game/pad.h"
#include "game/update/moby121.h"
#include "idol/fastfunc.h"
#include "idol/mathfunc.h"

// 0x02daa30 (0x574 bytes)
// inlined: FastAtan2 @0x2dabf0
void M192_002daa30
               (double param_1,undefined8 param_2,double param_3,float *param_4,float *param_5,
               float *param_6)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  ulonglong *puVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  int iVar14;
  int iVar15;
  ulonglong uVar16;
  ulonglong uVar17;
  longlong lVar18;
  longlong lVar19;
  longlong lVar20;
  float *pfVar21;
  longlong lVar22;
  ulonglong unaff_r29;
  ulonglong unaff_r30;
  ulonglong unaff_r31;
  ulonglong in_LR;
  longlong lVar23;
  double dVar24;
  double dVar25;
  double dVar26;
  double dVar27;
  double dVar28;
  double dVar29;
  ulonglong in_f28;
  ulonglong in_f29;
  double dVar30;
  ulonglong in_f30;
  ulonglong in_f31;
  
  uVar16 = ZEXT48(&stack0x00000000);
  lVar19 = uVar16 - 0xf0;
  puVar8 = (ulonglong *)lVar19;
  *puVar8 = uVar16;
  puVar8[0x20] = in_LR;
  puVar8[0x1a] = in_f28;
  puVar8[0x1b] = in_f29;
  puVar8[0x1c] = in_f30;
  puVar8[0x1d] = in_f31;
  fVar1 = param_4[1];
  fVar2 = param_5[1];
  fVar3 = *param_4;
  fVar4 = *param_5;
  fVar5 = param_4[2];
  fVar6 = param_5[2];
  puVar8[0x19] = unaff_r31;
  puVar8[0x18] = unaff_r30;
  puVar8[0x17] = unaff_r29;
  if ((double)SQRT((fVar5 - fVar6) * (fVar5 - fVar6) +
                   (fVar3 - fVar4) * (fVar3 - fVar4) + (fVar1 - fVar2) * (fVar1 - fVar2)) <= param_3
     ) {
    fVar7 = param_5[3];
  }
  else {
    fVar2 = fVar2 - fVar1;
    fVar10 = fVar4 - fVar3;
    fVar11 = fVar6 - fVar5;
    fVar4 = 0.0;
    fVar7 = param_5[3];
    fVar13 = SQRT(fVar11 * fVar11 + fVar10 * fVar10 + fVar2 * fVar2);
    fVar12 = (float)(param_3 - 0.009999999776482582) / fVar13;
    fVar6 = fVar4;
    if (0.0 - fVar13 < 0.0) {
      fVar6 = fVar11 * fVar12;
    }
    fVar9 = fVar4;
    if (0.0 - fVar13 < 0.0) {
      fVar9 = fVar2 * fVar12;
    }
    if (0.0 - fVar13 < 0.0) {
      fVar4 = fVar10 * fVar12;
    }
    if (fVar13 - 0.0 < 0.0) {
      fVar6 = fVar11 * fVar12;
    }
    if (fVar13 - 0.0 < 0.0) {
      fVar9 = fVar2 * fVar12;
    }
    if (fVar13 - 0.0 < 0.0) {
      fVar4 = fVar10 * fVar12;
    }
    fVar6 = fVar6 + fVar5;
    fVar2 = fVar9 + fVar1;
    fVar4 = fVar4 + fVar3;
  }
  *(float *)((int)puVar8 + 0x7c) = fVar7;
  fVar7 = ABS(fVar4 - fVar3);
  fVar5 = ABS(fVar2 - fVar1);
  *(float *)(puVar8 + 0x10) = fVar4 - fVar3;
  *(float *)(puVar8 + 0xe) = fVar4;
  *(float *)((int)puVar8 + 0x74) = fVar2;
  *(float *)(puVar8 + 0xf) = fVar6;
  *(float *)((int)puVar8 + 0x84) = fVar2 - fVar1;
  *(float *)(puVar8 + 0x11) = fVar7 - fVar5;
  dVar30 = 0.0;
  uVar17 = (ulonglong)(*(uint *)(puVar8 + 0x10) >> 0x1c) & 8 |
           (ulonglong)(*(uint *)(puVar8 + 0x11) >> 0x1e) & 2 |
           (ulonglong)(*(uint *)((int)puVar8 + 0x84) >> 0x1d) & 4;
  fVar1 = ABS(*(float *)(puVar8 + 0x10));
  if (*(float *)(puVar8 + 0x11) - 0.0 < 0.0) {
    fVar1 = fVar5;
  }
  fVar3 = *(float *)(&g_atanQuadrantTable + (int)(uVar17 << 2));
  fVar2 = *(float *)(((uint)(uVar17 << 2) | 0x735900) + 4);
  fVar4 = ABS(*(float *)((int)puVar8 + 0x84));
  if (*(float *)(puVar8 + 0x11) - 0.0 < 0.0) {
    fVar4 = fVar7;
  }
  dVar24 = dVar30;
  if (0.0 < fVar1) {
    lVar18 = uVar16 - 0xe0;
    lVar20 = uVar16 - 100;
    lVar22 = uVar16 - 0x54;
    lVar23 = 2;
    fVar1 = (fVar4 - fVar1) / (fVar4 + fVar1);
    fVar4 = fVar1 * fVar1;
    *(float *)(puVar8 + 0x13) = fVar1;
    *(float *)(puVar8 + 0x12) = fVar1;
    *(float *)((int)puVar8 + 0x94) = fVar1;
    *(float *)((int)puVar8 + 0x8c) = fVar1;
    fVar1 = fVar4 * fVar4;
    *(float *)(puVar8 + 0x12) = *(float *)(puVar8 + 0x12) * fVar4;
    *(float *)((int)puVar8 + 0x94) = *(float *)((int)puVar8 + 0x94) * fVar1;
    *(float *)(puVar8 + 0x13) = *(float *)(puVar8 + 0x13) * fVar1 * fVar4;
    do {
      *(float *)((int)lVar18 + 0x8c) = *(float *)((int)lVar18 + 0x7c) * fVar1 * fVar1;
      iVar14 = (int)lVar20;
      lVar18 = lVar18 + 8;
      lVar20 = lVar20 + 8;
      *(float *)((int)lVar22 + 4) = *(float *)(iVar14 + 4) * fVar1 * fVar1;
      lVar22 = lVar22 + 8;
      lVar23 = lVar23 + -1;
    } while (lVar23 != 0);
    lVar23 = 4;
    lVar22 = uVar16 - 100;
    pfVar21 = (float *)&DAT_007358e0;
    lVar18 = lVar19;
    lVar20 = lVar22;
    do {
      fVar1 = *pfVar21;
      fVar4 = pfVar21[1];
      pfVar21 = pfVar21 + 2;
      *(float *)((int)lVar18 + 0x8c) = *(float *)((int)lVar18 + 0x8c) * fVar1;
      lVar18 = lVar18 + 8;
      *(float *)((int)lVar20 + 4) = *(float *)((int)lVar20 + 4) * fVar4;
      lVar20 = lVar20 + 8;
      lVar23 = lVar23 + -1;
    } while (lVar23 != 0);
    lVar18 = 2;
    do {
      iVar14 = (int)lVar19;
      iVar15 = (int)lVar22;
      lVar19 = lVar19 + 0x10;
      lVar22 = lVar22 + 0x10;
      dVar24 = (double)((float)(dVar24 + (double)*(float *)(iVar14 + 0x8c)) + *(float *)(iVar15 + 4)
                        + *(float *)(iVar15 + 8) + *(float *)(iVar15 + 0xc));
      lVar18 = lVar18 + -1;
    } while (lVar18 != 0);
    dVar24 = (double)((float)(dVar24 + 0.7853981852531433) * fVar3 + fVar2);
  }
  dVar25 = (double)FastSubRots(g_heroRotation.z,(float)dVar24);
  dVar26 = (double)g_heroRotation.z;
  fVar1 = *param_4;
  if ((0.8726646304130554 < dVar25) ||
     (fVar3 = param_4[1] - *(float *)((int)puVar8 + 0x74), fVar2 = fVar1 - *(float *)(puVar8 + 0xe),
     SQRT(fVar2 * fVar2 + fVar3 * fVar3) < 1.5)) {
    fVar2 = (float)(dVar26 + 1.570796251296997);
    dVar24 = (double)(float)(3.141592502593994 - dVar26);
    if (dVar26 - (double)(float)(3.141592502593994 - dVar26) < 0.0) {
      dVar24 = dVar26;
    }
    fVar3 = 3.1415925 - fVar2;
    if (fVar2 - (3.1415925 - fVar2) < 0.0) {
      fVar3 = fVar2;
    }
    dVar25 = (double)(float)(-3.141592502593994 - dVar26);
    if ((double)(float)(-3.141592502593994 - dVar26) - dVar24 < 0.0) {
      dVar25 = dVar24;
    }
    fVar4 = -3.1415925 - fVar2;
    if ((-3.1415925 - fVar2) - fVar3 < 0.0) {
      fVar4 = fVar3;
    }
    dVar28 = (double)(float)(dVar25 * dVar25);
    fVar5 = fVar4 * fVar4;
    dVar24 = (double)(float)(dVar28 * (double)(float)(dVar28 * dVar25));
    fVar2 = fVar5 * fVar5 * fVar4;
    dVar27 = (double)(float)(dVar28 * dVar24);
    fVar3 = fVar5 * fVar2;
    *(float *)((int)puVar8 + 0x74) =
         ((float)(dVar28 * dVar27) * 2.601887e-06 +
         (float)(dVar27 * -0.0001980741071747616 +
                (double)(float)(dVar24 * 0.008333025500178337 +
                               (double)(float)((double)(float)(dVar28 * dVar25) *
                                               -0.16666656732559204 + dVar25)))) * 1.5 + param_4[1];
    *(float *)(puVar8 + 0xe) =
         (fVar5 * fVar3 * 2.601887e-06 +
         fVar3 * -0.0001980741 + fVar2 * 0.0083330255 + fVar5 * fVar4 * -0.16666657 + fVar4) * 1.5 +
         fVar1;
    dVar24 = dVar26;
  }
  fVar1 = (float)(dVar24 + 1.570796251296997);
  dVar25 = (double)(float)(3.141592502593994 - dVar24);
  if (dVar24 - (double)(float)(3.141592502593994 - dVar24) < 0.0) {
    dVar25 = dVar24;
  }
  fVar2 = 3.1415925 - fVar1;
  if (fVar1 - (3.1415925 - fVar1) < 0.0) {
    fVar2 = fVar1;
  }
  dVar26 = (double)(float)(-3.141592502593994 - dVar24);
  if ((double)(float)(-3.141592502593994 - dVar24) - dVar25 < 0.0) {
    dVar26 = dVar25;
  }
  dVar24 = 8.5;
  dVar25 = (double)(g_FrameTime * 8.5);
  fVar3 = -3.1415925 - fVar1;
  if ((-3.1415925 - fVar1) - fVar2 < 0.0) {
    fVar3 = fVar2;
  }
  dVar27 = (double)(float)(dVar26 * dVar26);
  fVar4 = fVar3 * fVar3;
  dVar29 = (double)(float)(dVar27 * (double)(float)(dVar27 * dVar26));
  param_6[2] = 0.0;
  fVar1 = fVar4 * fVar4 * fVar3;
  dVar28 = (double)(float)(dVar27 * dVar29);
  fVar2 = fVar4 * fVar1;
  param_6[1] = (float)((double)((float)(dVar27 * dVar28) * 2.601887e-06 +
                               (float)(dVar28 * -0.0001980741071747616 +
                                      (double)(float)(dVar29 * 0.008333025500178337 +
                                                     (double)(float)((double)(float)(dVar27 * dVar26
                                                                                    ) *
                                                                     -0.16666656732559204 + dVar26))
                                      )) * dVar25);
  *param_6 = (float)((double)(fVar4 * fVar2 * 2.601887e-06 +
                             fVar2 * -0.0001980741 +
                             fVar1 * 0.0083330255 + fVar4 * fVar3 * -0.16666657 + fVar3) * dVar25);
  dVar26 = (double)MB_computeLobVelocity(dVar25,-param_1,param_4,uVar16 - 0x80);
  param_6[2] = (float)dVar26;
  if ((g_Pad.downButtons & (L1|L2)) != 0) {
    dVar30 = (double)FastIntToDouble(g_goldWeaponsArray.bombGlove);
    dVar26 = (double)param_6[2];
    dVar30 = (double)(float)(dVar30 * 2.5);
  }
  fVar1 = (float)(param_1 * (double)(float)((double)(float)(dVar30 + dVar24) / dVar25)) * 0.5;
  if ((double)fVar1 < dVar26) {
    param_6[2] = fVar1;
  }
  return;
}


// 0x02db020 (0xd8c bytes)
/* Moby 192 */

void UpdateMoby_192(MobyInstance *moby)

{
  float fVar1;
  u8 uVar2;
  void *pvVar3;
  MobyInstance *moby_00;
  float fVar4;
  float fVar5;
  short sVar6;
  float fVar7;
  int iVar8;
  int iVar9;
  undefined4 uVar10;
  ulonglong uVar11;
  double dVar12;
  double dVar13;
  undefined8 uVar14;
  double dVar15;
  double dVar16;
  double dVar17;
  double dVar18;
  double dVar19;
  double dVar20;
  double dVar21;
  double dVar22;
  double dVar23;
  double dVar24;
  double dVar25;
  double dVar26;
  double dVar27;
  double dVar28;
  double dVar29;
  GPiece<16> auVar30;
  GPiece<16> auVar31;
  GPiece<16> auVar32;
  float local_210;
  float local_20c;
  float local_208;
  undefined4 local_204;
  GPiece<16> local_200;
  float local_1f0;
  float local_1ec;
  float local_1e8;
  GPiece<16> local_1e0;
  GPiece<16> local_1d0;
  float local_1c0;
  float local_1bc;
  float local_1b8;
  undefined4 local_1b4;
  float local_1b0;
  float local_1ac;
  float local_1a8;
  char local_1a4 [4];
  float local_1a0;
  float local_19c;
  float local_198;
  f32 local_194;
  Vec4 aVStack_190 [3];
  GPiece<64> auStack_160;
  GPiece<64> auStack_120;
  longlong local_e0;
  
  if (moby == (MobyInstance *)0x0) {
    return;
  }
  pvVar3 = moby->pVar;
  uVar11 = ZEXT48(pvVar3);
  dVar24 = 0.0;
  FastApplyTransform(aVStack_190,(Vec4 *)&GameCamera);
  FastNormalizeRMtx4(auStack_120,aVStack_190);
  if (pvVar3 == (void *)0x0) {
    return;
  }
  if (*(int *)((int)pvVar3 + 0x58) < 3) {
    *(int *)((int)pvVar3 + 0x58) = *(int *)((int)pvVar3 + 0x58) + 1;
    return;
  }
  GetBonePosition(moby,0,&local_210);
  GetBoneTransformations(moby,0,auStack_160);
  FUN_005e825c(&local_1f0,local_200,auStack_160);
  iVar8 = *(int *)((int)pvVar3 + 0x50);
  *(float *)((int)pvVar3 + 0x40) = local_210 + local_1f0;
  *(float *)((int)pvVar3 + 0x44) = local_20c + local_1ec;
  *(float *)((int)pvVar3 + 0x48) = local_208 + local_1e8;
  *(undefined4 *)((int)pvVar3 + 0x4c) = local_204;
  if (iVar8 != 0) {
    *(undefined4 *)(iVar8 + 0x98) = 1;
    iVar8 = *(int *)((int)pvVar3 + 0x50);
  }
  if (((iVar8 == 0) || (*(char *)(iVar8 + 0x20) == -2)) || (*(char *)(iVar8 + 0x20) == -3)) {
    *(undefined4 *)((int)pvVar3 + 0x50) = 0;
  }
  if (g_heroState == FIRST_PERSON_VIEW) {
    TransitionMovement(0x1e,1);
  }
  iVar8 = FastDecTimerS32(uVar11 + 0x54);
  if (((iVar8 != 0) && (DAT_0096bd8c == '\0')) &&
     ((((DAT_0096bd88 != '\0' &&
        (local_e0 = (longlong)(int)(animationSpeed * 17.5),
        DAT_00969e9c == (int)(animationSpeed * 17.5))) ||
       ((g_heroState == WEAPON_FIRST_PERSON_VIEW && (g_Pad.buttonsPressedThisFrame & DAT_0096ad80) != 0
        && (iVar8 = Hero_GetWeaponAmmo(-1), iVar8 != 0)))) ||
      ((g_heroState == THROWING_ITEM &&
       (local_e0 = (longlong)(int)(animationSpeed * 16.5),
       g_heroStateTimer == (int)(animationSpeed * 16.5))))))) {
    Hero_PlaySound(0x1a,0);
    hero_ConsumeAmmo(-1,1);
    moby->state = '\x03';
  }
  if (*(int *)((int)pvVar3 + 0x50) != 0) {
    uVar10 = *(undefined4 *)(*(int *)((int)pvVar3 + 0x50) + 0x78);
    dVar25 = -0.3619680106639862;
    dVar23 = 1.0;
    dVar29 = 15.0;
    dVar28 = (double)DAT_0096a320;
    dVar26 = (double)DAT_0096a324;
    dVar12 = (double)FUN_005e8338((double)DAT_0096a350,(double)DAT_0096a354);
    dVar12 = (double)FastWrapRot((float)dVar25,(float)dVar12);
    dVar22 = 1.570796251296997;
    dVar21 = 3.141592502593994;
    fVar1 = (float)(dVar12 + 1.570796251296997);
    dVar20 = -3.141592502593994;
    dVar19 = -0.16666656732559204;
    dVar18 = 0.008333025500178337;
    dVar17 = -0.0001980741071747616;
    dVar16 = 2.601886990305502e-06;
    dVar12 = 0.8590390086174011;
    fVar5 = 3.1415925 - fVar1;
    if (fVar1 - (3.1415925 - fVar1) < 0.0) {
      fVar5 = fVar1;
    }
    fVar4 = -3.1415925 - fVar1;
    if ((-3.1415925 - fVar1) - fVar5 < 0.0) {
      fVar4 = fVar5;
    }
    fVar7 = fVar4 * fVar4;
    fVar1 = fVar7 * fVar7 * fVar4;
    fVar5 = fVar7 * fVar1;
    dVar13 = (double)FUN_005e8338((double)DAT_0096a350,(double)DAT_0096a354);
    dVar13 = (double)FastWrapRot((float)dVar25,(float)dVar13);
    dVar25 = (double)(float)(dVar21 - dVar13);
    if (dVar13 - (double)(float)(dVar21 - dVar13) < 0.0) {
      dVar25 = dVar13;
    }
    dVar27 = (double)(float)(dVar20 - dVar13);
    if ((double)(float)(dVar20 - dVar13) - dVar25 < 0.0) {
      dVar27 = dVar25;
    }
    fVar1 = (fVar7 * fVar5 * 2.601887e-06 +
            fVar5 * -0.0001980741 + fVar1 * 0.0083330255 + fVar7 * fVar4 * -0.16666657 + fVar4) *
            0.859039 + g_heroPosition.x;
    dVar25 = (double)(float)(dVar27 * dVar27);
    dVar13 = (double)(float)(dVar25 * (double)(float)(dVar25 * dVar27));
    dVar15 = (double)(float)(dVar25 * dVar13);
    fVar5 = (float)((double)(float)((double)(float)(dVar25 * dVar15) * dVar16 +
                                   (double)(float)(dVar15 * dVar17 +
                                                  (double)(float)(dVar13 * dVar18 +
                                                                 (double)(float)((double)(float)(
                                                  dVar25 * dVar27) * dVar19 + dVar27)))) * dVar12) +
            g_heroPosition.y;
    fVar4 = g_heroPosition.z + 0.49082;
    dVar12 = (double)FUN_005e8338(dVar28,dVar26);
    if ((g_Pad.downButtons & (L1|L2)) != 0) {
      FastIntToDouble(g_goldWeaponsArray.bombGlove);
    }
    dVar25 = 8.5;
    if (((g_Pad.downButtons & (L1|L2)) == 0) || (DAT_0096bd8c != '\0')) {
      DAT_0096a730 = (MobyInstance *)0x0;
      if (DAT_00a49344 != (MobyInstance *)0x0) {
        dVar20 = 0.7853981852531433;
        dVar19 = 4.0;
        dVar18 = 1.5707963705062866;
        dVar17 = 0.9599310755729675;
        dVar16 = 2.0;
        iVar8 = 0;
        moby_00 = DAT_00a49344;
        do {
          iVar9 = MB_GetPvarsIfMobyHasThem(moby_00);
          if (((moby_00->state < 0x80) && (iVar9 != 0)) &&
             ((moby_00->modeBits & CAN_BE_AUTO_TARGETED) != NONE)) {
            local_1a0 = (moby_00->pos).x;
            local_19c = (moby_00->pos).y;
            local_194 = (moby_00->pos).w;
            local_198 = (moby_00->pos).z + *(float *)(iVar9 + 0x10);
            dVar26 = (double)SQRT((fVar1 - local_1a0) * (fVar1 - local_1a0) +
                                  (fVar5 - local_19c) * (fVar5 - local_19c));
            dVar21 = (double)FUN_005e8338((double)(local_1a0 - fVar1),(double)(local_19c - fVar5));
            dVar22 = (double)FUN_005e8338((double)SQRT((fVar1 - local_1a0) * (fVar1 - local_1a0) +
                                                       (fVar5 - local_19c) * (fVar5 - local_19c)),
                                          (double)(local_198 - fVar4));
            dVar23 = (double)FastSubRots((float)dVar12,(float)dVar21);
            if (((dVar23 < dVar20) || ((dVar26 < dVar19 && (dVar23 < dVar18)))) &&
               ((dVar26 < dVar29 &&
                (((dVar22 < dVar17 && ((double)(local_198 - fVar4) < dVar16)) &&
                 (iVar9 = CollLine(0x951500,&local_1a0,6,moby,0), iVar9 == 0)))))) {
              dVar12 = dVar21;
              dVar29 = dVar26;
              DAT_0096a730 = moby_00;
            }
          }
          moby_00 = *(MobyInstance **)((int)&DAT_00a49348 + iVar8);
          iVar8 = iVar8 + 4;
        } while (moby_00 != (MobyInstance *)0x0);
      }
    }
    else {
      local_1c0 = 0.0;
      local_1bc = 0.0;
      local_1b8 = 1.0;
      local_1b4 = 0;
      FUN_005e825c(&local_1c0,&local_1c0,auStack_120);
      dVar29 = (double)(g_heroMobyPtr->rotation).z;
      uVar14 = FUN_005e8338((double)local_1c0,(double)local_1bc);
      FastDiffRots(dVar29,uVar14);
      dVar12 = (double)FUN_005e8338((double)local_1c0,(double)local_1bc);
      dVar29 = (double)FUN_005e8338((double)SQRT(local_1c0 * local_1c0 + local_1bc * local_1bc),
                                    (double)local_1b8);
      if (0.593411922454834 - dVar29 < 0.0) {
        dVar29 = 0.593411922454834;
      }
      if (dVar29 - -1.3962633609771729 < 0.0) {
        dVar29 = -1.3962633609771729;
      }
      dVar26 = dVar24;
      if ((g_Pad.downButtons & (L1|L2)) != 0) {
        dVar24 = (double)FastIntToDouble(g_goldWeaponsArray.bombGlove);
        dVar24 = (double)(float)(dVar24 * 2.5);
      }
      MB_SphericalToVector
                ((float)(dVar24 + dVar25),(float)dVar12,(float)dVar29,&local_1c0);
      dVar29 = (double)DAT_0071f418;
      dVar27 = 11.0;
      dVar13 = (double)(float)(dVar29 * 11.0);
      dVar28 = (double)SQRT(local_1c0 * local_1c0 + local_1bc * local_1bc);
      dVar24 = 0.009999999776482582;
      if (dVar26 - dVar28 < 0.0) {
        dVar24 = dVar28;
      }
      if (dVar28 - dVar26 < 0.0) {
        dVar24 = dVar28;
      }
      dVar28 = (double)(float)((double)local_1b8 / dVar24);
      dVar24 = dVar26;
      if ((g_Pad.downButtons & (L1|L2)) != 0) {
        dVar26 = (double)FastIntToDouble(g_goldWeaponsArray.bombGlove);
        dVar29 = (double)DAT_0071f418;
        dVar26 = (double)(float)(dVar26 * 2.5);
      }
      fVar4 = SQRT((float)(dVar13 * (double)(float)(dVar26 + dVar25)) * 0.5);
      dVar29 = (double)((fVar4 * 2.0 * fVar4 * (float)(dVar23 - dVar28)) / (float)(dVar29 * dVar27))
      ;
      if (dVar24 < dVar29) {
        dVar23 = (double)(float)(dVar12 + dVar22);
        dVar22 = (double)(float)(dVar21 - dVar12);
        if (dVar12 - (double)(float)(dVar21 - dVar12) < 0.0) {
          dVar22 = dVar12;
        }
        dVar26 = (double)(float)(dVar21 - dVar23);
        if (dVar23 - (double)(float)(dVar21 - dVar23) < 0.0) {
          dVar26 = dVar23;
        }
        dVar21 = (double)(float)(dVar20 - dVar12);
        if ((double)(float)(dVar20 - dVar12) - dVar22 < 0.0) {
          dVar21 = dVar22;
        }
        dVar12 = (double)(float)(dVar20 - dVar23);
        if ((double)(float)(dVar20 - dVar23) - dVar26 < 0.0) {
          dVar12 = dVar26;
        }
        dVar20 = (double)(float)(dVar21 * dVar21);
        dVar22 = (double)(float)(dVar12 * dVar12);
        dVar13 = (double)(float)(dVar20 * (double)(float)(dVar20 * dVar21));
        dVar23 = (double)(float)(dVar22 * (double)(float)(dVar22 * dVar12));
        dVar26 = (double)(float)(dVar20 * dVar13);
        dVar27 = (double)(float)(dVar22 * dVar23);
        local_1a8 = GameCamera.posZ + (float)(dVar28 * dVar29);
        local_1bc = (float)((double)(float)((double)(float)(dVar20 * dVar26) * dVar16 +
                                           (double)(float)(dVar26 * dVar17 +
                                                          (double)(float)(dVar13 * dVar18 +
                                                                         (double)(float)((double)(
                                                  float)(dVar20 * dVar21) * dVar19 + dVar21)))) *
                           dVar29);
        local_1c0 = (float)((double)(float)((double)(float)(dVar22 * dVar27) * dVar16 +
                                           (double)(float)(dVar27 * dVar17 +
                                                          (double)(float)(dVar23 * dVar18 +
                                                                         (double)(float)((double)(
                                                  float)(dVar22 * dVar12) * dVar19 + dVar12)))) *
                           dVar29);
        local_1ac = GameCamera.posY + local_1bc;
        local_1a4[0] = GameCamera.field8_0x14c[0];
        local_1a4[1] = GameCamera.field8_0x14c[1];
        local_1a4[2] = GameCamera.field8_0x14c[2];
        local_1a4[3] = GameCamera.field8_0x14c[3];
        local_1b0 = GameCamera.posX + local_1c0;
        local_1b8 = (float)(dVar28 * dVar29);
        iVar8 = CollLine(0x951500,&local_1b0,2,moby,0);
        if ((iVar8 != 0) && (g_CollOutput.pMoby != g_heroMobyPtr)) {
          FUN_005e8338((double)(g_CollOutput.ip.x - fVar1),(double)(g_CollOutput.ip.y - fVar5));
        }
      }
    }
    uVar14 = 0x3ee4f8b580000000;
    dVar29 = (double)(DAT_0071f418 * 11.0);
    if ((g_Pad.downButtons & (L1|L2)) != 0) {
      dVar24 = (double)FastIntToDouble(g_goldWeaponsArray.bombGlove);
      dVar24 = (double)(float)(dVar24 * 2.5);
    }
    M192_002daa30
              (dVar29,uVar14,(double)(float)(dVar24 + dVar25),local_1e0,local_1d0,uVar10);
  }
  uVar2 = moby->state;
  if (uVar2 == '\x06') {
    if (*(MobyInstance **)((int)pvVar3 + 0x50) != (MobyInstance *)0x0) {
      DeleteMoby(*(MobyInstance **)((int)pvVar3 + 0x50));
    }
  }
  else if (uVar2 == '\x05') {
    moby->state = '\x06';
  }
  else if (uVar2 == '\x04') {
    if ((g_heroState != THROWING_ITEM) && (DAT_0096bd88 == '\0')) {
      moby->state = '\x02';
    }
  }
  else if (uVar2 == '\x03') {
    iVar8 = *(int *)((int)pvVar3 + 0x50);
    if (iVar8 == 0) {
      uVar10 = FUN_00200c38(moby,uVar11 + 0x40);
      *(undefined4 *)((int)pvVar3 + 0x50) = uVar10;
    }
    else {
      FUN_00200fd0(local_1e0,iVar8,*(undefined4 *)(iVar8 + 0x78));
      if (DAT_00a0fd74 != -1) {
        DAT_00a0fd74 = DAT_00a0fd74 + 1;
      }
      iVar8 = (int)(animationSpeed * ((float)(longlong)g_GameFrameCount + 0.5));
      local_e0 = (longlong)iVar8;
      if ((int)(uint)DAT_00a0fd76 < iVar8 / 600) {
        sVar6 = (short)(iVar8 >> 0x1f);
        DAT_00a0fd76 = ((short)(iVar8 / 600) + sVar6) -
                       ((short)((short)(iVar8 / 0x2580000) + sVar6) >> 0xf);
      }
      auVar30 = ZEXT416(0xffffffff);
      auVar30 = auVar30 | auVar30 << 0x20 | auVar30 << 0x40 | auVar30 << 0x60;
      auVar31 = vectorShiftLeftIntegerWord(auVar30,auVar30);
      DAT_00a0fd78 = DAT_00a0fd78 | 1 << (Level & 0x3f) | 0x80000000;
      *(undefined4 *)((int)pvVar3 + 0x50) = 0;
      moby->state = '\x04';
      auVar30 = loadVectorLeftIndexed(0x74,0x2dafa4);
      auVar30 = auVar30 >> 0x60 & (GPiece<16>)0xffffffff;
      auVar32 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
      auVar30 = vectorMultiplyAddFloatingPoint
                          (auVar32,auVar30 | auVar30 << 0x20 | auVar30 << 0x40 | auVar30 << 0x60,
                           auVar31);
      auVar30 = vectorConvertToSignedFixedPointWordSaturate(auVar30,0);
      auVar30 = auVar30 >> 0x60 & (GPiece<16>)0xffffffff;
      uVar10 = storeVectorElementWordIndexed
                         (auVar30 | auVar30 << 0x20 | auVar30 << 0x40 | auVar30 << 0x60,0x54,uVar11)
      ;
      *(undefined4 *)((int)pvVar3 + 0x54U & 0xfffffffc) = uVar10;
    }
  }
  else if (uVar2 != '\x02') {
    if (uVar2 != '\x01') {
      if (uVar2 != '\0') goto LAB_002dbcbc;
      *(undefined4 *)((int)pvVar3 + 0x50) = 0;
      moby->state = (char)(ZERO_MASK(((byte)moby->field43_0x70 & 2))) + '\x02';
    }
    if ((moby->field43_0x70 & 2U) != 0) {
      moby->state = '\x02';
    }
  }
LAB_002dbcbc:
  iVar8 = *(int *)((int)pvVar3 + 0x50);
  if (iVar8 == 0) {
    iVar8 = Hero_GetWeaponAmmo(-1);
    if (iVar8 == 0) {
      if (DAT_0096bd88 != '\0') {
        uVar10 = FUN_00200c38(moby,uVar11 + 0x40);
        *(undefined4 *)((int)pvVar3 + 0x50) = uVar10;
      }
    }
    else {
      uVar10 = FUN_00200c38(moby,uVar11 + 0x40);
      *(undefined4 *)((int)pvVar3 + 0x50) = uVar10;
    }
  }
  else {
    *(undefined4 *)(iVar8 + 0x10) = *(undefined4 *)((int)pvVar3 + 0x40);
    *(undefined4 *)(iVar8 + 0x14) = *(undefined4 *)((int)pvVar3 + 0x44);
    *(undefined4 *)(iVar8 + 0x18) = *(undefined4 *)((int)pvVar3 + 0x48);
    *(undefined4 *)(iVar8 + 0x1c) = *(undefined4 *)((int)pvVar3 + 0x4c);
  }
  return;
}


