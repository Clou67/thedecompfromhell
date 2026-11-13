// game/update/moby190.cpp -- reconstructed from NPEA00385 EBOOT
// STATUS: NOT STARTED (raw Ghidra output)
// 4 functions, 0x2d2290-0x2d3d88
#include "game/update/moby190.h"
#include "game/camera.h"
#include "game/collproc.h"
#include "game/draw.h"
#include "game/hero.h"
#include "game/mobyfunc.h"
#include "game/mobyutil.h"
#include "game/pad.h"
#include "game/pause.h"
#include "game/update/moby19.h"
#include "game/update/moby74.h"
#include "game/water.h"
#include "idol/fastfunc.h"

// 0x02d2290 (0x30 bytes)
void M190_002d2290(void)

{
  WaterTile_DrawAll(&DAT_010a2440,0x11);
  return;
}


// 0x02d22c0 (0x14 bytes)
void M190_002d22c0(void)

{
  DAT_007bd6e8 = 0x10000;
  return;
}


// 0x02d2308 (0x400 bytes)
// inlined: FastAtan2 @0x2d24d4
void M190_002d2308
               (double param_1,double param_2,double param_3,float *param_4,float *param_5,
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
  float fVar14;
  float fVar15;
  float fVar16;
  int iVar17;
  int iVar18;
  ulonglong uVar19;
  longlong lVar20;
  longlong lVar21;
  ulonglong uVar22;
  longlong lVar23;
  longlong lVar24;
  float *pfVar25;
  longlong lVar26;
  double dVar27;
  ulonglong in_f20;
  ulonglong in_f21;
  ulonglong in_f22;
  ulonglong in_f23;
  ulonglong in_f24;
  ulonglong in_f25;
  ulonglong in_f26;
  ulonglong in_f27;
  ulonglong in_f28;
  ulonglong in_f29;
  ulonglong in_f30;
  double dVar28;
  ulonglong in_f31;
  
  uVar19 = ZEXT48(&stack0x00000000);
  lVar20 = uVar19 - 0xc0;
  puVar8 = (ulonglong *)lVar20;
  *puVar8 = uVar19;
  puVar8[0xc] = in_f20;
  puVar8[0xd] = in_f21;
  puVar8[0xe] = in_f22;
  puVar8[0xf] = in_f23;
  puVar8[0x10] = in_f24;
  puVar8[0x11] = in_f25;
  puVar8[0x12] = in_f26;
  puVar8[0x13] = in_f27;
  puVar8[0x14] = in_f28;
  puVar8[0x15] = in_f29;
  puVar8[0x16] = in_f30;
  puVar8[0x17] = in_f31;
  fVar1 = param_4[1];
  fVar2 = param_5[1];
  fVar3 = *param_4;
  fVar9 = fVar2 - fVar1;
  fVar4 = *param_5;
  fVar5 = param_4[2];
  fVar13 = fVar4 - fVar3;
  fVar6 = param_5[2];
  fVar11 = fVar6 - fVar5;
  fVar7 = 0.0;
  fVar15 = SQRT(fVar11 * fVar11 + fVar13 * fVar13 + fVar9 * fVar9);
  dVar28 = (double)SQRT((fVar5 - fVar6) * (fVar5 - fVar6) +
                        (fVar3 - fVar4) * (fVar3 - fVar4) + (fVar1 - fVar2) * (fVar1 - fVar2));
  fVar14 = (float)(param_3 - 0.009999999776482582) / fVar15;
  fVar16 = (float)(param_1 * param_3) * 0.5;
  fVar10 = fVar7;
  if (0.0 - fVar15 < 0.0) {
    fVar10 = fVar14 * fVar9;
  }
  fVar12 = fVar7;
  if (0.0 - fVar15 < 0.0) {
    fVar12 = fVar14 * fVar13;
  }
  if (fVar15 - 0.0 < 0.0) {
    fVar10 = fVar14 * fVar9;
  }
  if (fVar15 - 0.0 < 0.0) {
    fVar12 = fVar14 * fVar13;
  }
  if (param_3 - dVar28 < 0.0) {
    fVar2 = fVar10 + fVar1;
  }
  if (param_3 - dVar28 < 0.0) {
    fVar4 = fVar12 + fVar3;
  }
  fVar9 = fVar7;
  if (0.0 - fVar15 < 0.0) {
    fVar9 = fVar14 * fVar11;
  }
  if (fVar15 - 0.0 < 0.0) {
    fVar9 = fVar14 * fVar11;
  }
  fVar11 = ABS(fVar2 - fVar1);
  fVar10 = ABS(fVar4 - fVar3);
  *(float *)(puVar8 + 6) = fVar4 - fVar3;
  *(float *)((int)puVar8 + 0x34) = fVar2 - fVar1;
  if (param_3 - dVar28 < 0.0) {
    fVar6 = fVar9 + fVar5;
  }
  *(float *)(puVar8 + 7) = fVar10 - fVar11;
  dVar28 = (double)SQRT((fVar3 - fVar4) * (fVar3 - fVar4) + (fVar1 - fVar2) * (fVar1 - fVar2));
  uVar22 = (ulonglong)(*(uint *)(puVar8 + 6) >> 0x1c) & 8 |
           (ulonglong)(*(uint *)(puVar8 + 7) >> 0x1e) & 2 |
           (ulonglong)(*(uint *)((int)puVar8 + 0x34) >> 0x1d) & 4;
  fVar1 = ABS(*(float *)(puVar8 + 6));
  if (*(float *)(puVar8 + 7) - 0.0 < 0.0) {
    fVar1 = fVar11;
  }
  fVar2 = *(float *)(&g_atanQuadrantTable + (int)(uVar22 << 2));
  fVar3 = ABS(*(float *)((int)puVar8 + 0x34));
  if (*(float *)(puVar8 + 7) - 0.0 < 0.0) {
    fVar3 = fVar10;
  }
  fVar4 = *(float *)(((uint)(uVar22 << 2) | 0x735900) + 4);
  if (0.0 < fVar1) {
    lVar24 = uVar19 - 0xb0;
    lVar21 = uVar19 - 0x74;
    lVar23 = uVar19 - 0x84;
    lVar26 = 2;
    fVar1 = (fVar3 - fVar1) / (fVar3 + fVar1);
    fVar3 = fVar1 * fVar1;
    *(float *)(puVar8 + 9) = fVar1;
    *(float *)(puVar8 + 8) = fVar1;
    *(float *)((int)puVar8 + 0x44) = fVar1;
    *(float *)((int)puVar8 + 0x3c) = fVar1;
    fVar1 = fVar3 * fVar3;
    *(float *)(puVar8 + 8) = *(float *)(puVar8 + 8) * fVar3;
    *(float *)((int)puVar8 + 0x44) = *(float *)((int)puVar8 + 0x44) * fVar1;
    *(float *)(puVar8 + 9) = *(float *)(puVar8 + 9) * fVar1 * fVar3;
    do {
      *(float *)((int)lVar24 + 0x3c) = *(float *)((int)lVar24 + 0x2c) * fVar1 * fVar1;
      iVar17 = (int)lVar23;
      lVar23 = lVar23 + 8;
      lVar24 = lVar24 + 8;
      *(float *)((int)lVar21 + 4) = *(float *)(iVar17 + 4) * fVar1 * fVar1;
      lVar21 = lVar21 + 8;
      lVar26 = lVar26 + -1;
    } while (lVar26 != 0);
    lVar24 = uVar19 - 0x84;
    lVar26 = 4;
    pfVar25 = (float *)&DAT_007358e0;
    lVar21 = lVar24;
    lVar23 = lVar20;
    do {
      fVar1 = *pfVar25;
      fVar3 = pfVar25[1];
      pfVar25 = pfVar25 + 2;
      *(float *)((int)lVar23 + 0x3c) = *(float *)((int)lVar23 + 0x3c) * fVar1;
      lVar23 = lVar23 + 8;
      *(float *)((int)lVar21 + 4) = *(float *)((int)lVar21 + 4) * fVar3;
      lVar21 = lVar21 + 8;
      lVar26 = lVar26 + -1;
    } while (lVar26 != 0);
    lVar21 = 2;
    do {
      iVar17 = (int)lVar20;
      iVar18 = (int)lVar24;
      lVar20 = lVar20 + 0x10;
      lVar24 = lVar24 + 0x10;
      fVar7 = fVar7 + *(float *)(iVar17 + 0x3c) + *(float *)(iVar18 + 4) + *(float *)(iVar18 + 8) +
              *(float *)(iVar18 + 0xc);
      lVar21 = lVar21 + -1;
    } while (lVar21 != 0);
    fVar7 = (fVar7 + 0.7853982) * fVar2 + fVar4;
  }
  if (dVar28 - param_2 < 0.0) {
    dVar28 = param_2;
  }
  dVar27 = (double)(float)(dVar28 - 0.009999999776482582);
  if ((double)(fVar6 - fVar5) - dVar28 < 0.0) {
    dVar27 = (double)(fVar6 - fVar5);
  }
  fVar1 = fVar7 + 1.5707963;
  fVar3 = (float)((double)(float)(dVar28 * param_1) * dVar28) / ((float)(dVar28 - dVar27) * 2.0);
  fVar2 = 3.1415925 - fVar7;
  if (fVar7 - (3.1415925 - fVar7) < 0.0) {
    fVar2 = fVar7;
  }
  fVar4 = 3.1415925 - fVar1;
  if (fVar1 - (3.1415925 - fVar1) < 0.0) {
    fVar4 = fVar1;
  }
  fVar5 = -3.1415925 - fVar7;
  if ((-3.1415925 - fVar7) - fVar2 < 0.0) {
    fVar5 = fVar2;
  }
  fVar2 = -3.1415925 - fVar1;
  if ((-3.1415925 - fVar1) - fVar4 < 0.0) {
    fVar2 = fVar4;
  }
  fVar1 = fVar5 * fVar5;
  fVar4 = fVar2 * fVar2;
  if (fVar16 - fVar3 < 0.0) {
    fVar3 = fVar16;
  }
  fVar3 = SQRT(fVar3);
  fVar6 = fVar4 * fVar4 * fVar2;
  fVar9 = fVar1 * fVar1 * fVar5;
  fVar7 = fVar4 * fVar6;
  fVar10 = fVar1 * fVar9;
  param_6[2] = fVar3;
  *param_6 = (fVar4 * fVar7 * 2.601887e-06 +
             fVar7 * -0.0001980741 + fVar6 * 0.0083330255 + fVar4 * fVar2 * -0.16666657 + fVar2) *
             fVar3;
  param_6[1] = (fVar1 * fVar10 * 2.601887e-06 +
               fVar10 * -0.0001980741 + fVar9 * 0.0083330255 + fVar1 * fVar5 * -0.16666657 + fVar5)
               * fVar3;
  return;
}


// 0x02d2780 (0x1608 bytes)
// inlined: FastAtan2 @0x2d2ba8, FastAtan2 @0x2d2dac, FastAtan2 @0x2d2f90, FastAtan2 @0x2d317c, FastAtan2 @0x2d3318, FastAtan2 @0x2d34a8, FastAtan2 @0x2d3890
/* Moby 190 */

void UpdateMoby_190(MobyInstance *moby)

{
  u8 uVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  void *pvVar11;
  uint uVar12;
  ulonglong *puVar13;
  short sVar14;
  char acVar15 [4];
  bool bVar16;
  float fVar17;
  MobyInstance *pMVar18;
  ushort uVar19;
  ulonglong uVar20;
  int iVar22;
  int iVar23;
  longlong lVar21;
  undefined4 uVar24;
  PlayerState PVar26;
  float *pfVar27;
  longlong lVar25;
  CONTROLLER_INPUT CVar28;
  ulonglong uVar29;
  longlong lVar30;
  longlong lVar31;
  ulonglong unaff_r24;
  ulonglong unaff_r25;
  ulonglong unaff_r26;
  ulonglong unaff_r27;
  ulonglong unaff_r28;
  ulonglong unaff_r29;
  ulonglong unaff_r30;
  ulonglong uVar32;
  ulonglong unaff_r31;
  ulonglong in_LR;
  longlong lVar33;
  double dVar34;
  double dVar35;
  double dVar36;
  double dVar37;
  double dVar38;
  double dVar39;
  ulonglong in_f17;
  ulonglong in_f18;
  double dVar40;
  ulonglong in_f19;
  double dVar41;
  ulonglong in_f20;
  double dVar42;
  ulonglong in_f21;
  double dVar43;
  ulonglong in_f22;
  double dVar44;
  ulonglong in_f23;
  double dVar45;
  ulonglong in_f24;
  double dVar46;
  ulonglong in_f25;
  double dVar47;
  ulonglong in_f26;
  double dVar48;
  ulonglong in_f27;
  ulonglong in_f28;
  double dVar49;
  ulonglong in_f29;
  double dVar50;
  ulonglong in_f30;
  double dVar51;
  double dVar52;
  ulonglong in_f31;
  double dVar53;
  double dVar54;
  GPiece<16> auVar55;
  GPiece<16> auVar56;
  GPiece<16> auVar57;
  
  uVar20 = ZEXT48(&stack0x00000000);
  lVar21 = uVar20 - 0x350;
  puVar13 = (ulonglong *)lVar21;
  *puVar13 = uVar20;
  puVar13[0x6c] = in_LR;
  puVar13[0x5b] = in_f17;
  puVar13[0x5c] = in_f18;
  puVar13[0x5d] = in_f19;
  puVar13[0x5e] = in_f20;
  puVar13[0x5f] = in_f21;
  puVar13[0x60] = in_f22;
  puVar13[0x61] = in_f23;
  puVar13[0x62] = in_f24;
  puVar13[99] = in_f25;
  puVar13[100] = in_f26;
  puVar13[0x65] = in_f27;
  puVar13[0x66] = in_f28;
  puVar13[0x67] = in_f29;
  puVar13[0x68] = in_f30;
  puVar13[0x69] = in_f31;
  puVar13[0x5a] = unaff_r31;
  puVar13[0x59] = unaff_r30;
  puVar13[0x58] = unaff_r29;
  puVar13[0x57] = unaff_r28;
  puVar13[0x56] = unaff_r27;
  puVar13[0x55] = unaff_r26;
  puVar13[0x54] = unaff_r25;
  puVar13[0x53] = unaff_r24;
  if (moby == (MobyInstance *)0x0) {
    return;
  }
  pvVar11 = moby->pVar;
  uVar32 = ZEXT48(pvVar11);
  if (*(int *)((int)pvVar11 + 0x5c) < 3) {
    *(int *)((int)pvVar11 + 0x5c) = *(int *)((int)pvVar11 + 0x5c) + 1;
    return;
  }
  dVar53 = -0.09000000357627869;
  dVar51 = -0.019999999552965164;
  FastApplyTransform((Vec4 *)(uVar20 - 0x280),(Vec4 *)&GameCamera);
  FastNormalizeRMtx4(uVar20 - 0x210,uVar20 - 0x280);
  if (pvVar11 == (void *)0x0) {
    return;
  }
  GetBonePosition(moby,0,uVar20 - 0x2e0);
  GetBoneTransformations(moby,0,uVar20 - 0x250);
  fVar2 = *(float *)((int)puVar13 + 0x124);
  fVar3 = *(float *)((int)puVar13 + 0x114);
  fVar4 = *(float *)(puVar13 + 0x25);
  fVar5 = *(float *)(puVar13 + 0x23);
  iVar23 = *(int *)((int)pvVar11 + 0x50);
  *(float *)((int)pvVar11 + 0x40) =
       *(float *)(puVar13 + 0xe) +
       (float)((double)*(float *)(puVar13 + 0x22) * dVar53 +
              (double)(float)((double)*(float *)(puVar13 + 0x24) * dVar51));
  *(float *)((int)pvVar11 + 0x44) =
       *(float *)((int)puVar13 + 0x74) +
       (float)((double)fVar3 * dVar53 + (double)(float)((double)fVar2 * dVar51));
  *(float *)((int)pvVar11 + 0x48) =
       *(float *)(puVar13 + 0xf) +
       (float)((double)fVar5 * dVar53 + (double)(float)((double)fVar4 * dVar51));
  *(undefined4 *)((int)pvVar11 + 0x4c) = *(undefined4 *)((int)puVar13 + 0x7c);
  if (iVar23 != 0) {
    *(undefined4 *)(iVar23 + 0x98) = 1;
    iVar23 = *(int *)((int)pvVar11 + 0x50);
  }
  if (((iVar23 == 0) || (*(char *)(iVar23 + 0x20) == -2)) || (*(char *)(iVar23 + 0x20) == -3)) {
    *(undefined4 *)((int)pvVar11 + 0x50) = 0;
  }
  if (g_heroState == FIRST_PERSON_VIEW) {
    TransitionMovement(0x1e,1);
  }
  iVar22 = FastDecTimerS32(uVar32 + 0x58);
  PVar26 = g_heroState;
  CVar28 = DAT_0096ad80;
  iVar23 = DAT_00969e9c;
  if (((iVar22 != 0) && (DAT_0096bd8c == '\0')) &&
     ((((DAT_0096bd88 != '\0' &&
        (puVar13[0x50] = (longlong)(int)(animationSpeed * 17.5),
        iVar23 == *(int *)((int)puVar13 + 0x284))) ||
       ((PVar26 == WEAPON_FIRST_PERSON_VIEW && (g_Pad.buttonsPressedThisFrame & CVar28) != 0 &&
        (iVar23 = Hero_GetWeaponAmmo(-1), PVar26 = g_heroState, iVar23 != 0)))) ||
      ((iVar23 = g_heroStateTimer, PVar26 == THROWING_ITEM &&
       (puVar13[0x50] = (longlong)(int)(animationSpeed * 16.5),
       iVar23 == *(int *)((int)puVar13 + 0x284))))))) {
    Hero_PlaySound(0x1a,0);
    hero_ConsumeAmmo(-1,1);
    moby->state = '\x03';
  }
  fVar2 = DAT_0096a350;
  if ((*(int *)((int)pvVar11 + 0x50) != 0) && (DAT_0096bd8c == '\0')) {
    uVar24 = *(undefined4 *)(*(int *)((int)pvVar11 + 0x50) + 0x78);
    dVar51 = 0.0;
    if (g_goldWeaponsArray.mineGlove == '\0') {
      fVar3 = 4.0;
      if ((g_Pad.downButtons & (L1|L2)) != 0) {
        fVar3 = 6.0;
      }
    }
    else {
      fVar3 = 4.0;
      if ((g_Pad.downButtons & (L1|L2)) != 0) {
        fVar3 = 12.0;
      }
    }
    fVar5 = ABS(DAT_0096a350);
    fVar4 = ABS(DAT_0096a354);
    uVar12 = (uint)DAT_0096a354 >> 0x1d;
    dVar48 = -0.3619680106639862;
    fVar3 = g_FrameTime * fVar3;
    dVar54 = (double)(DAT_0096a320 * fVar3);
    dVar52 = (double)(DAT_0096a324 * fVar3);
    *(float *)((int)puVar13 + 0x19c) = fVar5 - fVar4;
    dVar50 = (double)(DAT_0096a328 * fVar3);
    dVar53 = 0.7853981852531433;
    dVar49 = (double)(DAT_0096a32c * fVar3);
    uVar29 = (ulonglong)((uint)fVar2 >> 0x1c) & 8 |
             (ulonglong)(*(uint *)((int)puVar13 + 0x19c) >> 0x1e) & 2 | (ulonglong)uVar12 & 4;
    fVar2 = *(float *)(&g_atanQuadrantTable + (int)(uVar29 << 2));
    fVar3 = fVar5;
    if (*(float *)((int)puVar13 + 0x19c) - 0.0 < 0.0) {
      fVar3 = fVar4;
    }
    if (*(float *)((int)puVar13 + 0x19c) - 0.0 < 0.0) {
      fVar4 = fVar5;
    }
    fVar5 = *(float *)(((uint)(uVar29 << 2) | 0x735900) + 4);
    dVar34 = dVar51;
    if (0.0 < fVar3) {
      lVar25 = uVar20 - 0x340;
      lVar30 = uVar20 - 0xf0;
      lVar31 = uVar20 - 0xe0;
      lVar33 = 2;
      fVar3 = (fVar4 - fVar3) / (fVar4 + fVar3);
      fVar4 = fVar3 * fVar3;
      *(float *)((int)puVar13 + 0x26c) = fVar3;
      *(float *)((int)puVar13 + 0x264) = fVar3;
      *(float *)(puVar13 + 0x4d) = fVar3;
      *(float *)(puVar13 + 0x4c) = fVar3;
      fVar3 = fVar4 * fVar4;
      *(float *)((int)puVar13 + 0x264) = *(float *)((int)puVar13 + 0x264) * fVar4;
      *(float *)(puVar13 + 0x4d) = *(float *)(puVar13 + 0x4d) * fVar3;
      *(float *)((int)puVar13 + 0x26c) = *(float *)((int)puVar13 + 0x26c) * fVar3 * fVar4;
      do {
        *(float *)((int)lVar25 + 0x260) = *(float *)((int)lVar25 + 0x250) * fVar3 * fVar3;
        iVar23 = (int)lVar30;
        lVar25 = lVar25 + 8;
        lVar30 = lVar30 + 8;
        *(float *)((int)lVar31 + 4) = *(float *)(iVar23 + 4) * fVar3 * fVar3;
        lVar31 = lVar31 + 8;
        lVar33 = lVar33 + -1;
      } while (lVar33 != 0);
      lVar33 = 4;
      lVar31 = uVar20 - 0xf0;
      pfVar27 = (float *)&DAT_007358e0;
      lVar25 = lVar21;
      lVar30 = lVar31;
      do {
        fVar3 = *pfVar27;
        fVar4 = pfVar27[1];
        pfVar27 = pfVar27 + 2;
        *(float *)((int)lVar25 + 0x260) = *(float *)((int)lVar25 + 0x260) * fVar3;
        lVar25 = lVar25 + 8;
        *(float *)((int)lVar30 + 4) = *(float *)((int)lVar30 + 4) * fVar4;
        lVar30 = lVar30 + 8;
        lVar33 = lVar33 + -1;
      } while (lVar33 != 0);
      lVar30 = 2;
      lVar25 = lVar21;
      do {
        iVar23 = (int)lVar25;
        lVar25 = lVar25 + 0x10;
        iVar22 = (int)lVar31;
        lVar31 = lVar31 + 0x10;
        dVar34 = (double)((float)(dVar34 + (double)*(float *)(iVar23 + 0x260)) +
                          *(float *)(iVar22 + 4) + *(float *)(iVar22 + 8) + *(float *)(iVar22 + 0xc)
                         );
        lVar30 = lVar30 + -1;
      } while (lVar30 != 0);
      dVar34 = (double)((float)(dVar34 + 0.7853981852531433) * fVar2 + fVar5);
    }
    dVar34 = (double)FastWrapRot(-0.361968,(float)dVar34);
    fVar4 = DAT_0096a350;
    dVar47 = 1.570796251296997;
    dVar46 = 3.141592502593994;
    fVar2 = (float)(dVar34 + 1.570796251296997);
    dVar45 = -3.141592502593994;
    dVar37 = ABS((double)DAT_0096a350);
    dVar44 = -0.16666656732559204;
    dVar34 = ABS((double)DAT_0096a354);
    dVar43 = 0.008333025500178337;
    dVar42 = -0.0001980741071747616;
    dVar41 = 2.601886990305502e-06;
    dVar40 = 0.8590390086174011;
    uVar12 = (uint)DAT_0096a354 >> 0x1d;
    fVar3 = 3.1415925 - fVar2;
    if (fVar2 - (3.1415925 - fVar2) < 0.0) {
      fVar3 = fVar2;
    }
    *(float *)(puVar13 + 0x33) = (float)(dVar37 - dVar34);
    fVar5 = -3.1415925 - fVar2;
    if ((-3.1415925 - fVar2) - fVar3 < 0.0) {
      fVar5 = fVar3;
    }
    fVar6 = fVar5 * fVar5;
    uVar29 = (ulonglong)((uint)fVar4 >> 0x1c) & 8 |
             (ulonglong)(*(uint *)(puVar13 + 0x33) >> 0x1e) & 2 | (ulonglong)uVar12 & 4;
    fVar2 = fVar6 * fVar6 * fVar5;
    fVar3 = fVar6 * fVar2;
    dVar39 = dVar37;
    if ((double)*(float *)(puVar13 + 0x33) - dVar51 < 0.0) {
      dVar39 = dVar34;
    }
    if ((double)*(float *)(puVar13 + 0x33) - dVar51 < 0.0) {
      dVar34 = dVar37;
    }
    *(float *)(puVar13 + 0x10) =
         (fVar6 * fVar3 * 2.601887e-06 +
         fVar3 * -0.0001980741 + fVar2 * 0.0083330255 + fVar6 * fVar5 * -0.16666657 + fVar5) *
         0.859039;
    fVar3 = *(float *)(&g_atanQuadrantTable + (int)(uVar29 << 2));
    fVar2 = *(float *)(((uint)(uVar29 << 2) | 0x735900) + 4);
    dVar37 = dVar51;
    if (dVar51 < dVar39) {
      lVar25 = uVar20 - 0x340;
      lVar31 = uVar20 - 0x100;
      lVar30 = uVar20 - 0x110;
      lVar33 = 2;
      fVar4 = (float)(dVar34 - dVar39) / (float)(dVar34 + dVar39);
      fVar5 = fVar4 * fVar4;
      *(float *)((int)puVar13 + 0x24c) = fVar4;
      *(float *)((int)puVar13 + 0x244) = fVar4;
      *(float *)(puVar13 + 0x49) = fVar4;
      *(float *)(puVar13 + 0x48) = fVar4;
      fVar4 = fVar5 * fVar5;
      *(float *)((int)puVar13 + 0x244) = *(float *)((int)puVar13 + 0x244) * fVar5;
      *(float *)(puVar13 + 0x49) = *(float *)(puVar13 + 0x49) * fVar4;
      *(float *)((int)puVar13 + 0x24c) = *(float *)((int)puVar13 + 0x24c) * fVar4 * fVar5;
      do {
        *(float *)((int)lVar25 + 0x240) = *(float *)((int)lVar25 + 0x230) * fVar4 * fVar4;
        iVar23 = (int)lVar30;
        lVar30 = lVar30 + 8;
        lVar25 = lVar25 + 8;
        *(float *)((int)lVar31 + 4) = *(float *)(iVar23 + 4) * fVar4 * fVar4;
        lVar31 = lVar31 + 8;
        lVar33 = lVar33 + -1;
      } while (lVar33 != 0);
      lVar33 = 4;
      lVar31 = uVar20 - 0x110;
      pfVar27 = (float *)&DAT_007358e0;
      lVar25 = lVar21;
      lVar30 = lVar31;
      do {
        fVar4 = *pfVar27;
        fVar5 = pfVar27[1];
        pfVar27 = pfVar27 + 2;
        *(float *)((int)lVar25 + 0x240) = *(float *)((int)lVar25 + 0x240) * fVar4;
        lVar25 = lVar25 + 8;
        *(float *)((int)lVar30 + 4) = *(float *)((int)lVar30 + 4) * fVar5;
        lVar30 = lVar30 + 8;
        lVar33 = lVar33 + -1;
      } while (lVar33 != 0);
      lVar30 = 2;
      lVar25 = lVar21;
      dVar34 = dVar51;
      do {
        iVar23 = (int)lVar25;
        iVar22 = (int)lVar31;
        lVar25 = lVar25 + 0x10;
        lVar31 = lVar31 + 0x10;
        dVar34 = (double)((float)(dVar34 + (double)*(float *)(iVar23 + 0x240)) +
                          *(float *)(iVar22 + 4) + *(float *)(iVar22 + 8) + *(float *)(iVar22 + 0xc)
                         );
        lVar30 = lVar30 + -1;
      } while (lVar30 != 0);
      dVar37 = (double)((float)(dVar34 + dVar53) * fVar3 + fVar2);
    }
    dVar37 = (double)FastWrapRot((float)dVar48,(float)dVar37);
    fVar2 = g_heroPosition.y;
    fVar3 = g_heroPosition.x;
    dVar39 = ABS(dVar54);
    dVar34 = ABS(dVar52);
    dVar48 = (double)(float)(dVar46 - dVar37);
    if (dVar37 - (double)(float)(dVar46 - dVar37) < 0.0) {
      dVar48 = dVar37;
    }
    dVar38 = dVar39;
    if ((double)(float)(dVar39 - dVar34) - dVar51 < 0.0) {
      dVar38 = dVar34;
    }
    dVar35 = (double)(float)(dVar45 - dVar37);
    if ((double)(float)(dVar45 - dVar37) - dVar48 < 0.0) {
      dVar35 = dVar48;
    }
    fVar5 = *(float *)(puVar13 + 0x10);
    *(undefined4 *)(puVar13 + 0x11) = 0;
    dVar37 = (double)(float)(dVar35 * dVar35);
    dVar36 = (double)(float)(dVar37 * (double)(float)(dVar37 * dVar35));
    dVar48 = (double)(float)(dVar37 * dVar36);
    *(float *)(puVar13 + 0x10) = fVar5 + fVar3;
    fVar17 = g_heroPosition.z;
    bVar16 = g_goldWeaponsArray.mineGlove;
    fVar6 = *(float *)(puVar13 + 0x2c);
    fVar7 = *(float *)((int)puVar13 + 0x164);
    fVar8 = *(float *)(puVar13 + 0x2d);
    fVar9 = *(float *)((int)puVar13 + 0x16c);
    fVar4 = (float)((double)(float)((double)(float)(dVar37 * dVar48) * dVar41 +
                                   (double)(float)(dVar48 * dVar42 +
                                                  (double)(float)(dVar36 * dVar43 +
                                                                 (double)(float)((double)(float)(
                                                  dVar37 * dVar35) * dVar44 + dVar35)))) * dVar40);
    fVar2 = fVar4 + fVar2;
    if ((double)(float)(dVar39 - dVar34) - dVar51 < 0.0) {
      dVar34 = dVar39;
    }
    *(float *)((int)puVar13 + 0x84) = fVar4;
    *(float *)((int)puVar13 + 0x84) = fVar2;
    *(float *)(puVar13 + 0x11) = fVar17 + 0.49082;
    if (dVar51 < dVar38) {
      lVar25 = uVar20 - 0x340;
      lVar30 = uVar20 - 0x130;
      lVar31 = uVar20 - 0x120;
      lVar33 = 2;
      fVar4 = (float)(dVar34 - dVar38) / (float)(dVar34 + dVar38);
      fVar10 = fVar4 * fVar4;
      *(float *)((int)puVar13 + 0x22c) = fVar4;
      *(float *)((int)puVar13 + 0x224) = fVar4;
      *(float *)(puVar13 + 0x45) = fVar4;
      *(float *)(puVar13 + 0x44) = fVar4;
      fVar4 = fVar10 * fVar10;
      *(float *)((int)puVar13 + 0x224) = *(float *)((int)puVar13 + 0x224) * fVar10;
      *(float *)(puVar13 + 0x45) = *(float *)(puVar13 + 0x45) * fVar4;
      *(float *)((int)puVar13 + 0x22c) = *(float *)((int)puVar13 + 0x22c) * fVar4 * fVar10;
      do {
        *(float *)((int)lVar25 + 0x220) = *(float *)((int)lVar25 + 0x210) * fVar4 * fVar4;
        iVar23 = (int)lVar30;
        lVar25 = lVar25 + 8;
        lVar30 = lVar30 + 8;
        *(float *)((int)lVar31 + 4) = *(float *)(iVar23 + 4) * fVar4 * fVar4;
        lVar31 = lVar31 + 8;
        lVar33 = lVar33 + -1;
      } while (lVar33 != 0);
      pfVar27 = (float *)&DAT_007358e0;
      lVar30 = uVar20 - 0x130;
      lVar31 = 4;
      lVar25 = lVar21;
      do {
        fVar4 = *pfVar27;
        fVar10 = pfVar27[1];
        pfVar27 = pfVar27 + 2;
        *(float *)((int)lVar25 + 0x220) = *(float *)((int)lVar25 + 0x220) * fVar4;
        lVar25 = lVar25 + 8;
        *(float *)((int)lVar30 + 4) = *(float *)((int)lVar30 + 4) * fVar10;
        lVar30 = lVar30 + 8;
        lVar31 = lVar31 + -1;
      } while (lVar31 != 0);
    }
    fVar4 = animationSpeed;
    *(float *)((int)puVar13 + 0x9c) = (float)dVar49;
    dVar48 = (double)(fVar4 * 60.0);
    CVar28 = g_Pad.downButtons & (L1|L2);
    *(float *)(puVar13 + 0x12) = (float)(dVar54 * dVar48 + (double)(fVar5 + fVar3));
    *(float *)((int)puVar13 + 0x94) = (float)(dVar52 * dVar48 + (double)fVar2);
    *(float *)(puVar13 + 0x13) = (float)(dVar50 * dVar48 + (double)(fVar17 + 0.49082));
    pMVar18 = g_heroMobyPtr;
    if (CVar28 != 0) {
      if (bVar16 == '\0') {
        fVar2 = 6.0;
      }
      else {
        fVar2 = 12.0;
      }
      fVar6 = fVar6 * fVar2;
      fVar7 = fVar7 * fVar2;
      *(float *)(puVar13 + 0x14) = fVar6;
      *(float *)((int)puVar13 + 0xa4) = fVar7;
      *(float *)(puVar13 + 0x15) = fVar8 * fVar2;
      *(float *)((int)puVar13 + 0xac) = fVar9 * fVar2;
      fVar2 = (pMVar18->rotation).z;
      *(float *)((int)puVar13 + 0x18c) = fVar6;
      *(float *)(puVar13 + 0x32) = fVar7;
      *(float *)((int)puVar13 + 0x194) = (float)(ABS((double)fVar6) - ABS((double)fVar7));
      uVar29 = (ulonglong)(*(uint *)((int)puVar13 + 0x18c) >> 0x1c) & 8 |
               (ulonglong)(*(uint *)((int)puVar13 + 0x194) >> 0x1e) & 2 |
               (ulonglong)(*(uint *)(puVar13 + 0x32) >> 0x1d) & 4;
      dVar48 = ABS((double)*(float *)((int)puVar13 + 0x18c));
      if ((double)*(float *)((int)puVar13 + 0x194) - dVar51 < 0.0) {
        dVar48 = ABS((double)fVar7);
      }
      fVar3 = *(float *)(&g_atanQuadrantTable + (int)(uVar29 << 2));
      dVar49 = ABS((double)*(float *)(puVar13 + 0x32));
      if ((double)*(float *)((int)puVar13 + 0x194) - dVar51 < 0.0) {
        dVar49 = ABS((double)fVar6);
      }
      fVar4 = *(float *)(((uint)(uVar29 << 2) | 0x735900) + 4);
      dVar50 = dVar51;
      if (dVar51 < dVar48) {
        lVar25 = uVar20 - 0x340;
        lVar31 = uVar20 - 0x140;
        lVar30 = uVar20 - 0x150;
        lVar33 = 2;
        fVar5 = (float)(dVar49 - dVar48) / (float)(dVar49 + dVar48);
        fVar6 = fVar5 * fVar5;
        *(float *)((int)puVar13 + 0x20c) = fVar5;
        *(float *)((int)puVar13 + 0x204) = fVar5;
        *(float *)(puVar13 + 0x41) = fVar5;
        *(float *)(puVar13 + 0x40) = fVar5;
        fVar5 = fVar6 * fVar6;
        *(float *)((int)puVar13 + 0x204) = *(float *)((int)puVar13 + 0x204) * fVar6;
        *(float *)(puVar13 + 0x41) = *(float *)(puVar13 + 0x41) * fVar5;
        *(float *)((int)puVar13 + 0x20c) = *(float *)((int)puVar13 + 0x20c) * fVar5 * fVar6;
        do {
          *(float *)((int)lVar25 + 0x200) = *(float *)((int)lVar25 + 0x1f0) * fVar5 * fVar5;
          iVar23 = (int)lVar30;
          lVar30 = lVar30 + 8;
          lVar25 = lVar25 + 8;
          *(float *)((int)lVar31 + 4) = *(float *)(iVar23 + 4) * fVar5 * fVar5;
          lVar31 = lVar31 + 8;
          lVar33 = lVar33 + -1;
        } while (lVar33 != 0);
        lVar33 = 4;
        lVar31 = uVar20 - 0x150;
        pfVar27 = (float *)&DAT_007358e0;
        lVar25 = lVar21;
        lVar30 = lVar31;
        do {
          fVar5 = *pfVar27;
          fVar6 = pfVar27[1];
          pfVar27 = pfVar27 + 2;
          *(float *)((int)lVar25 + 0x200) = *(float *)((int)lVar25 + 0x200) * fVar5;
          lVar25 = lVar25 + 8;
          *(float *)((int)lVar30 + 4) = *(float *)((int)lVar30 + 4) * fVar6;
          lVar30 = lVar30 + 8;
          lVar33 = lVar33 + -1;
        } while (lVar33 != 0);
        lVar30 = 2;
        lVar25 = lVar21;
        dVar48 = dVar51;
        do {
          iVar23 = (int)lVar25;
          iVar22 = (int)lVar31;
          lVar25 = lVar25 + 0x10;
          lVar31 = lVar31 + 0x10;
          dVar48 = (double)((float)(dVar48 + (double)*(float *)(iVar23 + 0x200)) +
                            *(float *)(iVar22 + 4) + *(float *)(iVar22 + 8) +
                           *(float *)(iVar22 + 0xc));
          lVar30 = lVar30 + -1;
        } while (lVar30 != 0);
        dVar50 = (double)((float)(dVar48 + dVar53) * fVar3 + fVar4);
      }
      FastDiffRots((double)fVar2,dVar50);
      dVar50 = (double)*(float *)(puVar13 + 0x14);
      dVar52 = (double)*(float *)((int)puVar13 + 0xa4);
      dVar54 = ABS(dVar50);
      dVar48 = ABS(dVar52);
      uVar12 = *(uint *)(puVar13 + 0x15);
      *(float *)(puVar13 + 0x31) = (float)(dVar54 - dVar48);
      bVar16 = g_goldWeaponsArray.mineGlove;
      CVar28 = g_Pad.downButtons;
      fVar2 = *(float *)(puVar13 + 0x15);
      uVar29 = (ulonglong)(*(uint *)(puVar13 + 0x14) >> 0x1c) & 8 |
               (ulonglong)(*(uint *)(puVar13 + 0x31) >> 0x1e) & 2 |
               (ulonglong)(*(uint *)((int)puVar13 + 0xa4) >> 0x1d) & 4;
      dVar49 = dVar54;
      if ((double)*(float *)(puVar13 + 0x31) - dVar51 < 0.0) {
        dVar49 = dVar48;
      }
      fVar3 = *(float *)(&g_atanQuadrantTable + (int)(uVar29 << 2));
      if ((double)*(float *)(puVar13 + 0x31) - dVar51 < 0.0) {
        dVar48 = dVar54;
      }
      fVar4 = *(float *)(((uint)(uVar29 << 2) | 0x735900) + 4);
      dVar54 = dVar51;
      if (dVar51 < dVar49) {
        lVar25 = uVar20 - 0x340;
        lVar30 = uVar20 - 0x170;
        lVar31 = uVar20 - 0x160;
        lVar33 = 2;
        fVar5 = (float)(dVar48 - dVar49) / (float)(dVar48 + dVar49);
        fVar6 = fVar5 * fVar5;
        *(float *)((int)puVar13 + 0x1ec) = fVar5;
        *(float *)((int)puVar13 + 0x1e4) = fVar5;
        *(float *)(puVar13 + 0x3d) = fVar5;
        *(float *)(puVar13 + 0x3c) = fVar5;
        fVar5 = fVar6 * fVar6;
        *(float *)((int)puVar13 + 0x1e4) = *(float *)((int)puVar13 + 0x1e4) * fVar6;
        *(float *)(puVar13 + 0x3d) = *(float *)(puVar13 + 0x3d) * fVar5;
        *(float *)((int)puVar13 + 0x1ec) = *(float *)((int)puVar13 + 0x1ec) * fVar5 * fVar6;
        do {
          *(float *)((int)lVar25 + 0x1e0) = *(float *)((int)lVar25 + 0x1d0) * fVar5 * fVar5;
          iVar23 = (int)lVar30;
          lVar25 = lVar25 + 8;
          lVar30 = lVar30 + 8;
          *(float *)((int)lVar31 + 4) = *(float *)(iVar23 + 4) * fVar5 * fVar5;
          lVar31 = lVar31 + 8;
          lVar33 = lVar33 + -1;
        } while (lVar33 != 0);
        lVar33 = 4;
        lVar31 = uVar20 - 0x170;
        pfVar27 = (float *)&DAT_007358e0;
        lVar25 = lVar21;
        lVar30 = lVar31;
        do {
          fVar5 = *pfVar27;
          fVar6 = pfVar27[1];
          pfVar27 = pfVar27 + 2;
          *(float *)((int)lVar25 + 0x1e0) = *(float *)((int)lVar25 + 0x1e0) * fVar5;
          lVar25 = lVar25 + 8;
          *(float *)((int)lVar30 + 4) = *(float *)((int)lVar30 + 4) * fVar6;
          lVar30 = lVar30 + 8;
          lVar33 = lVar33 + -1;
        } while (lVar33 != 0);
        lVar30 = 2;
        lVar25 = lVar21;
        dVar48 = dVar51;
        do {
          iVar23 = (int)lVar25;
          iVar22 = (int)lVar31;
          lVar25 = lVar25 + 0x10;
          lVar31 = lVar31 + 0x10;
          dVar48 = (double)((float)(dVar48 + (double)*(float *)(iVar23 + 0x1e0)) +
                            *(float *)(iVar22 + 4) + *(float *)(iVar22 + 8) +
                           *(float *)(iVar22 + 0xc));
          lVar30 = lVar30 + -1;
        } while (lVar30 != 0);
        dVar54 = (double)((float)(dVar48 + dVar53) * fVar3 + fVar4);
      }
      dVar48 = ABS((double)fVar2);
      fVar2 = SQRT((float)(dVar50 * dVar50 + (double)(float)(dVar52 * dVar52)));
      dVar50 = ABS((double)fVar2);
      *(float *)(puVar13 + 0x30) = fVar2;
      *(float *)((int)puVar13 + 0x184) = (float)(dVar50 - dVar48);
      uVar29 = (ulonglong)(*(uint *)(puVar13 + 0x30) >> 0x1c) & 8 |
               (ulonglong)(*(uint *)((int)puVar13 + 0x184) >> 0x1e) & 2 |
               (ulonglong)(uVar12 >> 0x1d) & 4;
      dVar49 = ABS((double)*(float *)(puVar13 + 0x30));
      if ((double)*(float *)((int)puVar13 + 0x184) - dVar51 < 0.0) {
        dVar49 = dVar48;
      }
      fVar2 = *(float *)(&g_atanQuadrantTable + (int)(uVar29 << 2));
      if ((double)*(float *)((int)puVar13 + 0x184) - dVar51 < 0.0) {
        dVar48 = dVar50;
      }
      fVar3 = *(float *)(((uint)(uVar29 << 2) | 0x735900) + 4);
      dVar50 = dVar51;
      if (dVar51 < dVar49) {
        lVar25 = uVar20 - 0x340;
        lVar30 = uVar20 - 400;
        lVar31 = uVar20 - 0x180;
        lVar33 = 2;
        fVar4 = (float)(dVar48 - dVar49) / (float)(dVar48 + dVar49);
        fVar5 = fVar4 * fVar4;
        *(float *)((int)puVar13 + 0x1cc) = fVar4;
        *(float *)((int)puVar13 + 0x1c4) = fVar4;
        *(float *)(puVar13 + 0x39) = fVar4;
        *(float *)(puVar13 + 0x38) = fVar4;
        fVar4 = fVar5 * fVar5;
        *(float *)((int)puVar13 + 0x1c4) = *(float *)((int)puVar13 + 0x1c4) * fVar5;
        *(float *)(puVar13 + 0x39) = *(float *)(puVar13 + 0x39) * fVar4;
        *(float *)((int)puVar13 + 0x1cc) = *(float *)((int)puVar13 + 0x1cc) * fVar4 * fVar5;
        do {
          *(float *)((int)lVar25 + 0x1c0) = *(float *)((int)lVar25 + 0x1b0) * fVar4 * fVar4;
          iVar23 = (int)lVar30;
          lVar25 = lVar25 + 8;
          lVar30 = lVar30 + 8;
          *(float *)((int)lVar31 + 4) = *(float *)(iVar23 + 4) * fVar4 * fVar4;
          lVar31 = lVar31 + 8;
          lVar33 = lVar33 + -1;
        } while (lVar33 != 0);
        lVar33 = 4;
        lVar31 = uVar20 - 400;
        pfVar27 = (float *)&DAT_007358e0;
        lVar25 = lVar21;
        lVar30 = lVar31;
        do {
          fVar4 = *pfVar27;
          fVar5 = pfVar27[1];
          pfVar27 = pfVar27 + 2;
          *(float *)((int)lVar25 + 0x1c0) = *(float *)((int)lVar25 + 0x1c0) * fVar4;
          lVar25 = lVar25 + 8;
          *(float *)((int)lVar30 + 4) = *(float *)((int)lVar30 + 4) * fVar5;
          lVar30 = lVar30 + 8;
          lVar33 = lVar33 + -1;
        } while (lVar33 != 0);
        lVar30 = 2;
        lVar25 = lVar21;
        dVar48 = dVar51;
        do {
          iVar23 = (int)lVar25;
          lVar25 = lVar25 + 0x10;
          iVar22 = (int)lVar31;
          lVar31 = lVar31 + 0x10;
          dVar48 = (double)((float)(dVar48 + (double)*(float *)(iVar23 + 0x1c0)) +
                            *(float *)(iVar22 + 4) + *(float *)(iVar22 + 8) +
                           *(float *)(iVar22 + 0xc));
          lVar30 = lVar30 + -1;
        } while (lVar30 != 0);
        dVar50 = (double)((float)(dVar48 + dVar53) * fVar2 + fVar3);
      }
      if (0.593411922454834 - dVar50 < 0.0) {
        dVar50 = 0.593411922454834;
      }
      if (dVar50 - -1.3962633609771729 < 0.0) {
        dVar50 = -1.3962633609771729;
      }
      if (bVar16 == '\0') {
        fVar2 = 4.0;
        if ((CVar28 & (L1|L2)) != 0) {
          fVar2 = 6.0;
        }
      }
      else {
        fVar2 = 4.0;
        if ((CVar28 & (L1|L2)) != 0) {
          fVar2 = 12.0;
        }
      }
      MB_SphericalToVector(fVar2,(float)dVar54,(float)dVar50,(float *)(puVar13 + 0x14));
      dVar48 = (double)SQRT(*(float *)(puVar13 + 0x14) * *(float *)(puVar13 + 0x14) +
                            *(float *)((int)puVar13 + 0xa4) * *(float *)((int)puVar13 + 0xa4));
      dVar53 = 0.009999999776482582;
      if (dVar51 - dVar48 < 0.0) {
        dVar53 = dVar48;
      }
      if (dVar48 - dVar51 < 0.0) {
        dVar53 = dVar48;
      }
      if (g_goldWeaponsArray.mineGlove == '\0') {
        fVar2 = 4.0;
        if ((g_Pad.downButtons & (L1|L2)) != 0) {
          fVar2 = 6.0;
        }
      }
      else {
        fVar2 = 4.0;
        if ((g_Pad.downButtons & (L1|L2)) != 0) {
          fVar2 = 12.0;
        }
      }
      fVar2 = SQRT(g_FrameTimeSq * 9.8 * fVar2 * 0.5);
      dVar48 = (double)((fVar2 * 2.0 * fVar2 *
                        (float)(1.0 - (double)(float)((double)*(float *)(puVar13 + 0x15) / dVar53)))
                       / (g_FrameTimeSq * 9.8));
      fVar2 = (float)((double)(float)((double)*(float *)(puVar13 + 0x15) / dVar53) * dVar48);
      dVar53 = (double)fVar2;
      if (dVar51 < dVar48) {
        dVar50 = (double)(float)(dVar54 + dVar47);
        dVar49 = (double)(float)(dVar46 - dVar54);
        if (dVar54 - (double)(float)(dVar46 - dVar54) < 0.0) {
          dVar49 = dVar54;
        }
        dVar52 = (double)(float)(dVar46 - dVar50);
        if (dVar50 - (double)(float)(dVar46 - dVar50) < 0.0) {
          dVar52 = dVar50;
        }
        dVar34 = (double)(float)(dVar45 - dVar54);
        if ((double)(float)(dVar45 - dVar54) - dVar49 < 0.0) {
          dVar34 = dVar49;
        }
        dVar49 = (double)(float)(dVar45 - dVar50);
        if ((double)(float)(dVar45 - dVar50) - dVar52 < 0.0) {
          dVar49 = dVar52;
        }
        dVar52 = (double)(float)(dVar34 * dVar34);
        dVar37 = (double)(float)(dVar49 * dVar49);
        dVar47 = (double)(float)(dVar52 * (double)(float)(dVar52 * dVar34));
        dVar40 = (double)(float)(dVar37 * (double)(float)(dVar37 * dVar49));
        dVar46 = (double)(float)(dVar52 * dVar47);
        dVar39 = (double)(float)(dVar37 * dVar40);
        dVar45 = (double)GameCamera.posX;
        dVar50 = (double)GameCamera.posY;
        dVar54 = (double)GameCamera.posZ;
        *(float *)(puVar13 + 0x15) = fVar2;
        acVar15 = GameCamera.posW;
        fVar2 = (float)((double)(float)((double)(float)(dVar52 * dVar46) * dVar41 +
                                       (double)(float)(dVar46 * dVar42 +
                                                      (double)(float)(dVar47 * dVar43 +
                                                                     (double)(float)((double)(float)
                                                  (dVar52 * dVar34) * dVar44 + dVar34)))) * dVar48);
        dVar52 = (double)fVar2;
        fVar3 = (float)((double)(float)((double)(float)(dVar37 * dVar39) * dVar41 +
                                       (double)(float)(dVar39 * dVar42 +
                                                      (double)(float)(dVar40 * dVar43 +
                                                                     (double)(float)((double)(float)
                                                  (dVar37 * dVar49) * dVar44 + dVar49)))) * dVar48);
        dVar48 = (double)fVar3;
        *(float *)((int)puVar13 + 0xa4) = fVar2;
        *(float *)(puVar13 + 0x17) = (float)(dVar54 + dVar53);
        *(char (*) [4])((int)puVar13 + 0xbc) = acVar15;
        *(float *)(puVar13 + 0x14) = fVar3;
        *(float *)((int)puVar13 + 0xb4) = (float)(dVar50 + dVar52);
        *(float *)(puVar13 + 0x16) = (float)(dVar45 + dVar48);
        iVar23 = CollLine(0x951500,uVar20 - 0x2a0,2,moby,0);
        fVar2 = g_CollOutput.ip.y;
        if ((iVar23 == 0) || (g_CollOutput.pMoby == g_heroMobyPtr)) {
          fVar2 = (float)(dVar48 * 5.0) + GameCamera.posX;
          fVar3 = (float)(dVar52 * 5.0) + GameCamera.posY;
          fVar4 = (float)(dVar53 * 5.0) + GameCamera.posZ;
          *(float *)(puVar13 + 0x12) = (float)(dVar48 * 5.0);
          *(float *)((int)puVar13 + 0x94) = (float)(dVar52 * 5.0);
          *(float *)(puVar13 + 0x13) = (float)(dVar53 * 5.0);
          *(float *)(puVar13 + 0x12) = fVar2;
          *(float *)((int)puVar13 + 0x94) = fVar3;
          *(float *)(puVar13 + 0x13) = fVar4;
        }
        else {
          fVar3 = g_CollOutput.ip.x - *(float *)(puVar13 + 0x10);
          *(float *)(puVar13 + 0x12) = g_CollOutput.ip.x;
          fVar4 = g_CollOutput.ip.z;
          *(float *)((int)puVar13 + 0x94) = fVar2;
          fVar5 = g_CollOutput.ip.w;
          *(float *)(puVar13 + 0x13) = fVar4;
          *(float *)((int)puVar13 + 0x9c) = fVar5;
          dVar49 = ABS((double)fVar3);
          dVar53 = ABS((double)(fVar2 - *(float *)((int)puVar13 + 0x84)));
          dVar48 = dVar49;
          if ((double)(float)(dVar49 - dVar53) - dVar51 < 0.0) {
            dVar48 = dVar53;
          }
          if ((double)(float)(dVar49 - dVar53) - dVar51 < 0.0) {
            dVar53 = dVar49;
          }
          if (dVar51 < dVar48) {
            lVar25 = uVar20 - 0x340;
            lVar30 = uVar20 - 0x1b0;
            lVar31 = uVar20 - 0x1a0;
            lVar33 = 2;
            fVar2 = (float)(dVar53 - dVar48) / (float)(dVar53 + dVar48);
            fVar3 = fVar2 * fVar2;
            *(float *)((int)puVar13 + 0x1ac) = fVar2;
            *(float *)((int)puVar13 + 0x1a4) = fVar2;
            *(float *)(puVar13 + 0x35) = fVar2;
            *(float *)(puVar13 + 0x34) = fVar2;
            fVar2 = fVar3 * fVar3;
            *(float *)((int)puVar13 + 0x1a4) = *(float *)((int)puVar13 + 0x1a4) * fVar3;
            *(float *)(puVar13 + 0x35) = *(float *)(puVar13 + 0x35) * fVar2;
            *(float *)((int)puVar13 + 0x1ac) = *(float *)((int)puVar13 + 0x1ac) * fVar2 * fVar3;
            do {
              *(float *)((int)lVar25 + 0x1a0) = *(float *)((int)lVar25 + 400) * fVar2 * fVar2;
              iVar23 = (int)lVar30;
              lVar25 = lVar25 + 8;
              lVar30 = lVar30 + 8;
              *(float *)((int)lVar31 + 4) = *(float *)(iVar23 + 4) * fVar2 * fVar2;
              lVar31 = lVar31 + 8;
              lVar33 = lVar33 + -1;
            } while (lVar33 != 0);
            pfVar27 = (float *)&DAT_007358e0;
            lVar25 = uVar20 - 0x1b0;
            lVar30 = 4;
            do {
              fVar2 = *pfVar27;
              fVar3 = pfVar27[1];
              pfVar27 = pfVar27 + 2;
              *(float *)((int)lVar21 + 0x1a0) = *(float *)((int)lVar21 + 0x1a0) * fVar2;
              lVar21 = lVar21 + 8;
              *(float *)((int)lVar25 + 4) = *(float *)((int)lVar25 + 4) * fVar3;
              lVar25 = lVar25 + 8;
              lVar30 = lVar30 + -1;
            } while (lVar30 != 0);
          }
        }
      }
    }
    if (g_goldWeaponsArray.mineGlove == '\0') {
      dVar51 = 4.0;
      if ((g_Pad.downButtons & (L1|L2)) != 0) {
        dVar51 = 6.0;
      }
    }
    else {
      fVar2 = 4.0;
      if ((g_Pad.downButtons & (L1|L2)) != 0) {
        fVar2 = 12.0;
      }
      dVar51 = (double)fVar2;
    }
    M190_002d2308
              ((double)(g_FrameTimeSq * 9.8),0x3ff0000000000000,dVar51,uVar20 - 0x2d0,uVar20 - 0x2c0,
               uVar24);
  }
  uVar1 = moby->state;
  if (uVar1 == '\x06') {
    if (*(MobyInstance **)((int)pvVar11 + 0x50) != (MobyInstance *)0x0) {
      DeleteMoby(*(MobyInstance **)((int)pvVar11 + 0x50));
      *(undefined4 *)((int)pvVar11 + 0x50) = 0;
    }
  }
  else if (uVar1 == '\x05') {
    moby->state = '\x06';
  }
  else if (uVar1 == '\x04') {
    if ((g_heroState != THROWING_ITEM) && (DAT_0096bd88 == '\0')) {
      moby->state = '\x02';
    }
  }
  else if (uVar1 == '\x03') {
    iVar23 = *(int *)((int)pvVar11 + 0x50);
    if (iVar23 != 0) {
      FUN_0043ce28(uVar20 - 0x2d0,iVar23,*(undefined4 *)(iVar23 + 0x78));
      uVar19 = DAT_00a0fdae;
      if (DAT_00a0fdac != -1) {
        DAT_00a0fdac = DAT_00a0fdac + 1;
      }
      puVar13[0x50] = (longlong)g_GameFrameCount;
      puVar13[0x50] = (longlong)(int)(animationSpeed * ((float)(longlong)puVar13[0x50] + 0.5));
      iVar23 = *(int *)((int)puVar13 + 0x284);
      if ((int)(uint)uVar19 < iVar23 / 600) {
        sVar14 = (short)(iVar23 >> 0x1f);
        DAT_00a0fdae = ((short)(iVar23 / 600) + sVar14) -
                       ((short)((short)(iVar23 / 0x2580000) + sVar14) >> 0xf);
      }
      DAT_00a0fdb0 = DAT_00a0fdb0 | 1 << (Level & 0x3f) | 0x80000000;
      MB_AddMobyToDynamicGroup(*(MobyInstance **)((int)pvVar11 + 0x50),&DAT_00a51ee8,0x3f)
      ;
      auVar55 = ZEXT416(0xffffffff);
      auVar55 = auVar55 | auVar55 << 0x20 | auVar55 << 0x40 | auVar55 << 0x60;
      *(undefined4 *)((int)pvVar11 + 0x50) = 0;
      auVar56 = vectorShiftLeftIntegerWord(auVar55,auVar55);
      auVar55 = loadVectorLeftIndexed(0x70,0x2d2708);
      auVar55 = auVar55 >> 0x60 & (GPiece<16>)0xffffffff;
      auVar57 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
      auVar55 = vectorMultiplyAddFloatingPoint
                          (auVar57,auVar55 | auVar55 << 0x20 | auVar55 << 0x40 | auVar55 << 0x60,
                           auVar56);
      auVar55 = vectorConvertToSignedFixedPointWordSaturate(auVar55,0);
      auVar55 = auVar55 >> 0x60 & (GPiece<16>)0xffffffff;
      uVar24 = storeVectorElementWordIndexed
                         (auVar55 | auVar55 << 0x20 | auVar55 << 0x40 | auVar55 << 0x60,0x54,uVar32)
      ;
      *(undefined4 *)((int)pvVar11 + 0x54U & 0xfffffffc) = uVar24;
    }
    auVar55 = ZEXT416(0xffffffff);
    auVar55 = auVar55 | auVar55 << 0x20 | auVar55 << 0x40 | auVar55 << 0x60;
    moby->state = '\x04';
    auVar56 = vectorShiftLeftIntegerWord(auVar55,auVar55);
    auVar55 = loadVectorLeftIndexed(0x74,0x2d2708);
    auVar55 = auVar55 >> 0x60 & (GPiece<16>)0xffffffff;
    auVar57 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
    auVar55 = vectorMultiplyAddFloatingPoint
                        (auVar57,auVar55 | auVar55 << 0x20 | auVar55 << 0x40 | auVar55 << 0x60,
                         auVar56);
    auVar55 = vectorConvertToSignedFixedPointWordSaturate(auVar55,0);
    auVar55 = auVar55 >> 0x60 & (GPiece<16>)0xffffffff;
    uVar24 = storeVectorElementWordIndexed
                       (auVar55 | auVar55 << 0x20 | auVar55 << 0x40 | auVar55 << 0x60,0x58,uVar32);
    *(undefined4 *)((int)pvVar11 + 0x58U & 0xfffffffc) = uVar24;
  }
  else if (uVar1 != '\x02') {
    if (uVar1 != '\x01') {
      if (uVar1 != '\0') goto LAB_002d3c9c;
      *(undefined4 *)((int)pvVar11 + 0x50) = 0;
      moby->state = (char)(ZERO_MASK(((byte)moby->field43_0x70 & 2))) + '\x02';
    }
    if ((moby->field43_0x70 & 2U) != 0) {
      moby->state = '\x02';
    }
  }
LAB_002d3c9c:
  FastDecTimerS32(uVar32 + 0x54);
  iVar23 = *(int *)((int)pvVar11 + 0x50);
  if (iVar23 == 0) {
    if ((*(int *)((int)pvVar11 + 0x54) == 0) && (iVar23 = Hero_GetWeaponAmmo(-1), iVar23 != 0)
       ) {
      *(undefined4 *)((int)puVar13 + 0xcc) = 0;
      *(undefined4 *)(puVar13 + 0x19) = 0;
      *(undefined4 *)((int)puVar13 + 0xc4) = 0;
      *(undefined4 *)(puVar13 + 0x18) = 0;
      uVar24 = Spawn_Moby74_MineBall(moby,uVar32 + 0x40,uVar20 - 0x290);
      *(undefined4 *)((int)pvVar11 + 0x50) = uVar24;
    }
  }
  else {
    *(undefined4 *)(iVar23 + 0x10) = *(undefined4 *)((int)pvVar11 + 0x40);
    *(undefined4 *)(iVar23 + 0x14) = *(undefined4 *)((int)pvVar11 + 0x44);
    *(undefined4 *)(iVar23 + 0x18) = *(undefined4 *)((int)pvVar11 + 0x48);
    *(undefined4 *)(iVar23 + 0x1c) = *(undefined4 *)((int)pvVar11 + 0x4c);
  }
  return;
}


