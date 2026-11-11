// game/update/moby1234.cpp -- reconstructed from NPEA00385 EBOOT
// STATUS: NOT STARTED (raw Ghidra output)
// 3 functions, 0x217798-0x218488
#include "game/update/moby1234.h"
#include "game/camera.h"
#include "game/collproc.h"
#include "game/hero.h"
#include "game/mobyfunc.h"
#include "game/mobyutil.h"
#include "game/update.h"
#include "game/update/moby1238.h"
#include "idol/fastfunc.h"

// 0x0217798 (0x70 bytes)
void M1234_00217798(int param_1)

{
  int iVar1;
  void *pvVar2;
  undefined4 uVar3;
  undefined8 in_r0;
  GPiece<16> auVar4;
  GPiece<16> auVar5;
  GPiece<16> auVar6;
  
  iVar1 = *(int *)(*(int *)(param_1 + 0x78) + 0xd4);
  if (iVar1 != -1) {
    pvVar2 = g_MobyInstance[iVar1].pVar;
    if (*(int *)((int)pvVar2 + 0xe8) == 0) {
      auVar4 = ZEXT416(0xffffffff);
      auVar4 = auVar4 | auVar4 << 0x20 | auVar4 << 0x40 | auVar4 << 0x60;
      auVar5 = vectorShiftLeftIntegerWord(auVar4,auVar4);
      auVar4 = loadVectorLeftIndexed(in_r0,0x217790);
      auVar6 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
      auVar4 = auVar4 >> 0x60 & (GPiece<16>)0xffffffff;
      auVar4 = vectorMultiplyAddFloatingPoint
                         (auVar6,auVar4 | auVar4 << 0x20 | auVar4 << 0x40 | auVar4 << 0x60,auVar5);
      auVar4 = vectorConvertToSignedFixedPointWordSaturate(auVar4,0);
      auVar4 = auVar4 >> 0x60 & (GPiece<16>)0xffffffff;
      uVar3 = storeVectorElementWordIndexed
                        (auVar4 | auVar4 << 0x20 | auVar4 << 0x40 | auVar4 << 0x60,0xe8,
                         ZEXT48(pvVar2));
      *(undefined4 *)((int)pvVar2 + 0xe8U & 0xfffffffc) = uVar3;
    }
  }
  return;
}


// 0x0217820 (0x270 bytes)
void M1234_00217820(MobyInstance *param_1)

{
  void *pvVar1;
  Spline *pSVar2;
  float fVar3;
  float fVar4;
  undefined4 uVar5;
  int iVar6;
  ulonglong uVar7;
  double dVar8;
  int local_20;
  float local_1c;
  
  pvVar1 = param_1->pVar;
  uVar7 = ZEXT48(pvVar1);
  if (param_1->state == '\0') {
    return;
  }
  param_1->scale = param_1->pClass->gScale * DAT_00768708;
  dVar8 = 0.0;
  local_1c = 0.0;
  uVar5 = MB_damage(param_1,0x330000,0);
  iVar6 = MB_HandleDamage(param_1,uVar5,uVar7 + 0x20,0,&local_20,&local_1c,0,4);
  if (local_20 == 1) goto LAB_00217940;
  fVar3 = *(float *)((int)pvVar1 + 0x20) - local_1c;
  *(float *)((int)pvVar1 + 0x20) = fVar3;
  if ((double)fVar3 <= dVar8) {
LAB_00217920:
    param_1->state = '\x06';
    *(undefined1 *)((int)pvVar1 + 0x67) = 0xf0;
  }
  else if (iVar6 < 3) {
    if ((-1 < iVar6) && (0 < iVar6)) goto LAB_00217920;
  }
  else if (iVar6 < 0xb) {
    if (iVar6 < 9) {
      *(undefined1 *)((int)pvVar1 + 0x67) = 0x78;
    }
    else {
      *(undefined1 *)((int)pvVar1 + 0x67) = 0xfa;
    }
  }
  MB_UpdateLightsTransition(param_1,uVar7 + 0x60);
LAB_00217940:
  param_1->damage = -1;
  MB_ColorDyingMoby(param_1,uVar7 + 0x60);
  if (*(int *)((int)pvVar1 + 0xdc) == 0) {
    if (param_1->state == '\x01') {
      uVar5 = 0x40c00000;
    }
    else {
      uVar5 = 0x41a00000;
      if (param_1->state == '\x02') {
        uVar5 = 0x41000000;
      }
    }
  }
  else {
    uVar5 = 0x42200000;
  }
  *(undefined4 *)((int)pvVar1 + 0xe0) = uVar5;
  pSVar2 = Splines[*(int *)((int)pvVar1 + 0xd0)];
  iVar6 = MB_getTargetInArea(param_1,uVar7 + 0x70,pSVar2,0,0,pSVar2->points,pSVar2->cnt);
  if ((iVar6 != 2) &&
     ((fVar3 = (param_1->pos).y - *(float *)((int)pvVar1 + 0x74),
      fVar4 = (param_1->pos).x - *(float *)((int)pvVar1 + 0x70),
      *(float *)((int)pvVar1 + 0xe0) < SQRT(fVar4 * fVar4 + fVar3 * fVar3) ||
      (4.0 < ABS((param_1->pos).z - *(float *)((int)pvVar1 + 0x78)))))) {
    *(undefined4 *)((int)pvVar1 + 0xb4) = 2;
  }
  if (*(int *)((int)pvVar1 + 0xb0) == 0) {
    *(MobyInstance **)((int)pvVar1 + 0xb0) = g_heroMobyPtr;
  }
  return;
}


// 0x0217af8 (0x990 bytes)
// inlined: FastAtan2 @0x217cac, FastAtan2 @0x218160
/* Moby 1234 */

double UpdateMoby_1234(MobyInstance *moby)

{
  u8 uVar1;
  float fVar2;
  float fVar3;
  f32 fVar4;
  f32 fVar5;
  float fVar6;
  float fVar7;
  MobyModeBit MVar8;
  void *pvVar9;
  undefined4 uVar10;
  ulonglong *puVar11;
  int iVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  ulonglong uVar18;
  longlong lVar19;
  int iVar20;
  longlong lVar21;
  longlong lVar22;
  longlong lVar23;
  float *pfVar24;
  longlong lVar25;
  ulonglong unaff_r28;
  ulonglong unaff_r29;
  ulonglong uVar26;
  ulonglong unaff_r30;
  ulonglong unaff_r31;
  ulonglong in_LR;
  longlong lVar27;
  double dVar28;
  double extraout_f1;
  double extraout_f1_00;
  double dVar29;
  double dVar30;
  double dVar31;
  double dVar32;
  ulonglong in_f31;
  double dVar33;
  GPiece<16> auVar34;
  GPiece<16> auVar35;
  GPiece<16> auVar36;
  float fVar37;
  
  lVar19 = (longlong)(int)moby;
  uVar18 = ZEXT48(&stack0x00000000);
  lVar22 = uVar18 - 0x180;
  puVar11 = (ulonglong *)lVar22;
  *puVar11 = uVar18;
  puVar11[0x32] = in_LR;
  puVar11[0x2f] = in_f31;
  puVar11[0x2e] = unaff_r31;
  puVar11[0x2c] = unaff_r29;
  puVar11[0x2d] = unaff_r30;
  puVar11[0x2b] = unaff_r28;
  pvVar9 = moby->pVar;
  uVar26 = ZEXT48(pvVar9);
  dVar28 = (double)M1234_00217820();
  uVar1 = moby->state;
  iVar20 = *(int *)((int)pvVar9 + 0xb0);
  if (uVar1 == '\x06') {
    *(undefined4 *)((int)puVar11 + 0xfc) = 0;
    *(undefined4 *)(puVar11 + 0x1f) = 0;
    *(undefined4 *)((int)puVar11 + 0xf4) = 0;
    *(undefined4 *)(puVar11 + 0x1e) = 0;
    puVar11[0x12] = 0xffffffffffffffff;
    puVar11[0x14] = 1;
    puVar11[0x15] = 1;
    puVar11[0x16] = 0xffffffffffffffff;
    puVar11[0x17] = 0;
    MB_genericExplosion
              (0,0,0x4010000000000000,0x4000000000000000,0x4022000000000000,0x3ff0000000000000,
               0x402e000000000000,lVar19,uVar18 - 0x90,lVar19 + 0x10,&DAT_00217a90,0,10,3,0x10);
    dVar28 = (double)DeleteMoby(moby);
  }
  else if (uVar1 == '\x05') {
    if (*(int *)((int)pvVar9 + 0xb4) != 2) {
      moby->state = '\x04';
    }
  }
  else if (uVar1 == '\x04') {
    dVar29 = (double)FastWrapRot
                               (*(float *)((int)pvVar9 + 0xf0),g_FrameTime * 3.1415927);
    *(float *)((int)pvVar9 + 0xf0) = (float)dVar29;
    fVar37 = *(float *)(iVar20 + 0x10) - (moby->pos).x;
    fVar2 = *(float *)(iVar20 + 0x14) - (moby->pos).y;
    fVar3 = ABS(fVar37);
    fVar7 = ABS(fVar2);
    dVar28 = (double)(float)(3.141592502593994 - dVar29);
    if (dVar29 - (double)(float)(3.141592502593994 - dVar29) < 0.0) {
      dVar28 = dVar29;
    }
    dVar33 = (double)(float)(-3.141592502593994 - dVar29);
    if ((double)(float)(-3.141592502593994 - dVar29) - dVar28 < 0.0) {
      dVar33 = dVar28;
    }
    *(float *)(puVar11 + 0x20) = fVar37;
    *(float *)((int)puVar11 + 0x104) = fVar2;
    *(float *)(puVar11 + 0x21) = fVar3 - fVar7;
    dVar29 = 0.0;
    dVar28 = (double)(float)(dVar33 * dVar33);
    uVar26 = (ulonglong)(*(uint *)(puVar11 + 0x20) >> 0x1c) & 8 |
             (ulonglong)(*(uint *)(puVar11 + 0x21) >> 0x1e) & 2 |
             (ulonglong)(*(uint *)((int)puVar11 + 0x104) >> 0x1d) & 4;
    dVar32 = (double)(float)(dVar28 * (double)(float)(dVar28 * dVar33));
    dVar31 = (double)(float)(dVar28 * dVar32);
    fVar37 = ABS(*(float *)(puVar11 + 0x20));
    if (*(float *)(puVar11 + 0x21) - 0.0 < 0.0) {
      fVar37 = fVar7;
    }
    fVar7 = *(float *)(&g_atanQuadrantTable + (int)(uVar26 << 2));
    fVar2 = *(float *)(((uint)(uVar26 << 2) | 0x735900) + 4);
    fVar6 = ABS(*(float *)((int)puVar11 + 0x104));
    if (*(float *)(puVar11 + 0x21) - 0.0 < 0.0) {
      fVar6 = fVar3;
    }
    dVar30 = dVar29;
    if (0.0 < fVar37) {
      lVar21 = uVar18 - 0x170;
      lVar25 = uVar18 - 0x58;
      lVar23 = uVar18 - 0x68;
      lVar27 = 2;
      fVar37 = (fVar6 - fVar37) / (fVar6 + fVar37);
      fVar3 = fVar37 * fVar37;
      *(float *)((int)puVar11 + 0x124) = fVar37;
      *(float *)((int)puVar11 + 0x11c) = fVar37;
      *(float *)(puVar11 + 0x24) = fVar37;
      *(float *)(puVar11 + 0x23) = fVar37;
      fVar37 = fVar3 * fVar3;
      *(float *)((int)puVar11 + 0x11c) = *(float *)((int)puVar11 + 0x11c) * fVar3;
      *(float *)(puVar11 + 0x24) = *(float *)(puVar11 + 0x24) * fVar37;
      *(float *)((int)puVar11 + 0x124) = *(float *)((int)puVar11 + 0x124) * fVar37 * fVar3;
      do {
        *(float *)((int)lVar21 + 0x118) = *(float *)((int)lVar21 + 0x108) * fVar37 * fVar37;
        iVar20 = (int)lVar23;
        lVar23 = lVar23 + 8;
        lVar21 = lVar21 + 8;
        *(float *)((int)lVar25 + 4) = *(float *)(iVar20 + 4) * fVar37 * fVar37;
        lVar25 = lVar25 + 8;
        lVar27 = lVar27 + -1;
      } while (lVar27 != 0);
      lVar27 = 4;
      lVar25 = uVar18 - 0x68;
      pfVar24 = (float *)&DAT_007358e0;
      lVar21 = lVar22;
      lVar23 = lVar25;
      do {
        fVar37 = *pfVar24;
        fVar3 = pfVar24[1];
        pfVar24 = pfVar24 + 2;
        *(float *)((int)lVar21 + 0x118) = *(float *)((int)lVar21 + 0x118) * fVar37;
        lVar21 = lVar21 + 8;
        *(float *)((int)lVar23 + 4) = *(float *)((int)lVar23 + 4) * fVar3;
        lVar23 = lVar23 + 8;
        lVar27 = lVar27 + -1;
      } while (lVar27 != 0);
      lVar21 = 2;
      do {
        iVar20 = (int)lVar22;
        iVar12 = (int)lVar25;
        lVar22 = lVar22 + 0x10;
        lVar25 = lVar25 + 0x10;
        dVar30 = (double)((float)(dVar30 + (double)*(float *)(iVar20 + 0x118)) +
                          *(float *)(iVar12 + 4) + *(float *)(iVar12 + 8) + *(float *)(iVar12 + 0xc)
                         );
        lVar21 = lVar21 + -1;
      } while (lVar21 != 0);
      dVar30 = (double)((float)(dVar30 + 0.7853981852531433) * fVar7 + fVar2);
    }
    dVar28 = (double)FastWrapRot
                               (((float)(dVar28 * dVar31) * 2.601887e-06 +
                                (float)(dVar31 * -0.0001980741071747616 +
                                       (double)(float)(dVar32 * 0.008333025500178337 +
                                                      (double)(float)((double)(float)(dVar28 * 
                                                  dVar33) * -0.16666656732559204 + dVar33)))) *
                                0.17453292,(float)dVar30);
    fVar37 = OrganicDeltAng
                       ((float)dVar28,DAT_0071f418 * 12.566371,DAT_0071f418 * 25.132742,
                        g_FrameTime * 6.2831855,&(moby->rotation).z,0x217a90,
                        (float *)((int)pvVar9 + 0xe4));
    dVar28 = (double)fVar37;
    if (worldUpdateTime == (worldUpdateTime / DAT_00768710) * DAT_00768710) {
      fVar37 = (moby->transform).v0.y;
      fVar2 = (moby->transform).v0.x;
      fVar7 = (moby->transform).v0.z;
      fVar4 = (moby->pos).y;
      *(f32 *)(puVar11 + 0x1a) = (moby->pos).x;
      fVar5 = (moby->pos).w;
      *(f32 *)((int)puVar11 + 0xd4) = fVar4;
      *(f32 *)((int)puVar11 + 0xdc) = fVar5;
      fVar3 = DAT_00768714 * g_FrameTime;
      dVar28 = (double)SQRT(fVar7 * fVar7 + fVar2 * fVar2 + fVar37 * fVar37);
      *(float *)(puVar11 + 0x1b) = (moby->pos).z - 0.5;
      if (dVar28 == dVar29) {
        fVar6 = (moby->transform).v0.w;
        dVar28 = dVar29;
        dVar33 = dVar29;
      }
      else {
        fVar3 = (float)((double)fVar3 / dVar28);
        fVar6 = (moby->transform).v0.w;
        dVar28 = (double)(fVar2 * fVar3);
        dVar29 = (double)(fVar37 * fVar3);
        dVar33 = (double)(fVar7 * fVar3);
      }
      *(float *)(puVar11 + 0x1c) = (float)dVar28;
      *(float *)((int)puVar11 + 0xe4) = (float)dVar29;
      *(float *)(puVar11 + 0x1d) = (float)dVar33;
      *(float *)((int)puVar11 + 0xec) = fVar6;
      *(float *)(puVar11 + 0x1d) = -0.5 / (8.0 / (DAT_00768714 * g_FrameTime));
      dVar28 = (double)FUN_0021a098(uVar18 - 0xb0,uVar18 - 0xa0,lVar19);
    }
    if (*(int *)((int)pvVar9 + 0xb4) == 2) {
      moby->state = '\x05';
    }
  }
  else if (uVar1 == '\x03') {
    (moby->pos).z = g_FrameTime * 0.5 + (moby->pos).z;
    dVar29 = 6.2831854820251465;
    dVar28 = (double)FastWrapRot((moby->rotation).z,g_FrameTime * 6.2831855);
    (moby->rotation).z = (float)dVar28;
    *(float *)((int)pvVar9 + 0xe4) = (float)((double)g_FrameTime * dVar29);
    iVar20 = FastDecTimerS32(uVar26 + 0xec);
    dVar28 = extraout_f1_00;
    if (iVar20 != 0) {
      moby->state = '\x04';
    }
  }
  else if (uVar1 == '\x02') {
    fVar37 = *(float *)((int)pvVar9 + 0xc0) - (moby->pos).x;
    fVar2 = *(float *)((int)pvVar9 + 0xc4) - (moby->pos).y;
    fVar3 = ABS(fVar37);
    fVar7 = ABS(fVar2);
    *(float *)((int)puVar11 + 0x10c) = fVar37;
    *(float *)(puVar11 + 0x22) = fVar2;
    *(float *)((int)puVar11 + 0x114) = fVar3 - fVar7;
    dVar28 = 0.0;
    uVar26 = (ulonglong)(*(uint *)((int)puVar11 + 0x10c) >> 0x1c) & 8 |
             (ulonglong)(*(uint *)((int)puVar11 + 0x114) >> 0x1e) & 2 |
             (ulonglong)(*(uint *)(puVar11 + 0x22) >> 0x1d) & 4;
    fVar37 = ABS(*(float *)((int)puVar11 + 0x10c));
    if (*(float *)((int)puVar11 + 0x114) - 0.0 < 0.0) {
      fVar37 = fVar7;
    }
    fVar7 = *(float *)(&g_atanQuadrantTable + (int)(uVar26 << 2));
    fVar2 = *(float *)(((uint)(uVar26 << 2) | 0x735900) + 4);
    fVar6 = ABS(*(float *)(puVar11 + 0x22));
    if (*(float *)((int)puVar11 + 0x114) - 0.0 < 0.0) {
      fVar6 = fVar3;
    }
    dVar29 = dVar28;
    if (0.0 < fVar37) {
      lVar21 = uVar18 - 0x170;
      lVar23 = uVar18 - 0x48;
      lVar25 = uVar18 - 0x38;
      lVar27 = 2;
      fVar37 = (fVar6 - fVar37) / (fVar6 + fVar37);
      fVar3 = fVar37 * fVar37;
      *(float *)((int)puVar11 + 0x144) = fVar37;
      *(float *)((int)puVar11 + 0x13c) = fVar37;
      *(float *)(puVar11 + 0x28) = fVar37;
      *(float *)(puVar11 + 0x27) = fVar37;
      fVar37 = fVar3 * fVar3;
      *(float *)((int)puVar11 + 0x13c) = *(float *)((int)puVar11 + 0x13c) * fVar3;
      *(float *)(puVar11 + 0x28) = *(float *)(puVar11 + 0x28) * fVar37;
      *(float *)((int)puVar11 + 0x144) = *(float *)((int)puVar11 + 0x144) * fVar37 * fVar3;
      do {
        *(float *)((int)lVar21 + 0x138) = *(float *)((int)lVar21 + 0x128) * fVar37 * fVar37;
        iVar20 = (int)lVar23;
        lVar21 = lVar21 + 8;
        lVar23 = lVar23 + 8;
        *(float *)((int)lVar25 + 4) = *(float *)(iVar20 + 4) * fVar37 * fVar37;
        lVar25 = lVar25 + 8;
        lVar27 = lVar27 + -1;
      } while (lVar27 != 0);
      lVar27 = 4;
      lVar25 = uVar18 - 0x48;
      pfVar24 = (float *)&DAT_007358e0;
      lVar21 = lVar22;
      lVar23 = lVar25;
      do {
        fVar37 = *pfVar24;
        fVar3 = pfVar24[1];
        pfVar24 = pfVar24 + 2;
        *(float *)((int)lVar21 + 0x138) = *(float *)((int)lVar21 + 0x138) * fVar37;
        lVar21 = lVar21 + 8;
        *(float *)((int)lVar23 + 4) = *(float *)((int)lVar23 + 4) * fVar3;
        lVar23 = lVar23 + 8;
        lVar27 = lVar27 + -1;
      } while (lVar27 != 0);
      lVar21 = 2;
      do {
        iVar20 = (int)lVar22;
        lVar22 = lVar22 + 0x10;
        iVar12 = (int)lVar25;
        lVar25 = lVar25 + 0x10;
        dVar29 = (double)((float)(dVar29 + (double)*(float *)(iVar20 + 0x138)) +
                          *(float *)(iVar12 + 4) + *(float *)(iVar12 + 8) + *(float *)(iVar12 + 0xc)
                         );
        lVar21 = lVar21 + -1;
      } while (lVar21 != 0);
      dVar29 = (double)((float)(dVar29 + 0.7853981852531433) * fVar7 + fVar2);
    }
    OrganicDeltAng
              ((float)dVar29,DAT_0071f418 * 4.712389,DAT_0071f418 * 4.712389,
               g_FrameTime * 10.12291,&(moby->rotation).z,0x720000,
               (float *)((int)pvVar9 + 0xe4));
    fVar37 = (moby->rotation).z;
    fVar2 = fVar37 + 1.5707963;
    fVar7 = 3.1415925 - fVar37;
    if (fVar37 - (3.1415925 - fVar37) < 0.0) {
      fVar7 = fVar37;
    }
    fVar3 = 3.1415925 - fVar2;
    if (fVar2 - (3.1415925 - fVar2) < 0.0) {
      fVar3 = fVar2;
    }
    fVar6 = -3.1415925 - fVar37;
    if ((-3.1415925 - fVar37) - fVar7 < 0.0) {
      fVar6 = fVar7;
    }
    fVar37 = -3.1415925 - fVar2;
    if ((-3.1415925 - fVar2) - fVar3 < 0.0) {
      fVar37 = fVar3;
    }
    fVar2 = fVar6 * fVar6;
    fVar7 = fVar37 * fVar37;
    fVar14 = fVar2 * fVar2 * fVar6;
    fVar3 = fVar7 * fVar7 * fVar37;
    fVar15 = fVar2 * fVar14;
    fVar16 = DAT_0076870c * g_FrameTime;
    fVar17 = DAT_0076870c * g_FrameTime;
    *(undefined4 *)(puVar11 + 0x19) = 0;
    fVar13 = fVar7 * fVar3;
    *(float *)((int)puVar11 + 0xc4) =
         fVar17 * (fVar2 * fVar15 * 2.601887e-06 +
                  fVar15 * -0.0001980741 +
                  fVar14 * 0.0083330255 + fVar2 * fVar6 * -0.16666657 + fVar6);
    *(float *)(puVar11 + 0x18) =
         fVar16 * (fVar7 * fVar13 * 2.601887e-06 +
                  fVar13 * -0.0001980741 +
                  fVar3 * 0.0083330255 + fVar7 * fVar37 * -0.16666657 + fVar37);
    dVar28 = (double)MB_MoveAndCollide
                               (dVar28,0x3fe0000000000000,dVar28,lVar19,uVar18 - 0xc0);
    if (*(int *)((int)pvVar9 + 0xb4) != 2) {
      moby->state = '\x04';
    }
  }
  else if (uVar1 == '\x01') {
    if ((*(int *)((int)pvVar9 + 0xb4) != 2) ||
       (iVar20 = FastDecTimerS32(uVar26 + 0xe8), dVar28 = extraout_f1, iVar20 == 2)) {
      auVar35 = ZEXT416(0xffffffff);
      auVar35 = auVar35 | auVar35 << 0x20 | auVar35 << 0x40 | auVar35 << 0x60;
      auVar36 = vectorShiftLeftIntegerWord(auVar35,auVar35);
      auVar35 = loadVectorLeftIndexed(0x34,0x217a90);
      auVar35 = auVar35 >> 0x60 & (GPiece<16>)0xffffffff;
      auVar34 = auVar35 | auVar35 << 0x20 | auVar35 << 0x40 | auVar35 << 0x60;
      auVar35 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
      auVar35 = vectorMultiplyAddFloatingPoint(auVar35,auVar34,auVar36);
      auVar35 = vectorConvertToSignedFixedPointWordSaturate(auVar35,0);
      auVar35 = auVar35 >> 0x60 & (GPiece<16>)0xffffffff;
      uVar10 = storeVectorElementWordIndexed
                         (auVar35 | auVar35 << 0x20 | auVar35 << 0x40 | auVar35 << 0x60,0xec,uVar26)
      ;
      *(undefined4 *)((int)pvVar9 + 0xecU & 0xfffffffc) = uVar10;
      moby->state = '\x03';
      iVar20 = *(int *)((int)moby->pVar + 0xd4);
      if (iVar20 != -1) {
        pvVar9 = g_MobyInstance[iVar20].pVar;
        if (*(int *)((int)pvVar9 + 0xe8) == 0) {
          auVar35 = ZEXT416(0xffffffff);
          auVar35 = auVar35 | auVar35 << 0x20 | auVar35 << 0x40 | auVar35 << 0x60;
          auVar35 = vectorShiftLeftIntegerWord(auVar35,auVar35);
          auVar36 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
          auVar35 = vectorMultiplyAddFloatingPoint(auVar36,auVar34,auVar35);
          auVar35 = vectorConvertToSignedFixedPointWordSaturate(auVar35,0);
          auVar35 = auVar35 >> 0x60 & (GPiece<16>)0xffffffff;
          uVar10 = storeVectorElementWordIndexed
                             (auVar35 | auVar35 << 0x20 | auVar35 << 0x40 | auVar35 << 0x60,0xe8,
                              ZEXT48(pvVar9));
          *(undefined4 *)((int)pvVar9 + 0xe8U & 0xfffffffc) = uVar10;
        }
      }
    }
  }
  else if (uVar1 == '\0') {
    *(f32 *)((int)pvVar9 + 0xc0) = (moby->pos).x;
    MVar8 = moby->modeBits;
    *(f32 *)((int)pvVar9 + 0xc4) = (moby->pos).y;
    *(f32 *)((int)pvVar9 + 200) = (moby->pos).z;
    fVar37 = (moby->pos).w;
    dVar28 = (double)fVar37;
    *(undefined4 *)((int)pvVar9 + 0x20) = 0x40000000;
    *(float *)((int)pvVar9 + 0xcc) = fVar37;
    moby->modeBits = MVar8 | (CAN_BE_DAMAGED|CAN_BE_AUTO_TARGETED);
    *(undefined2 *)((int)pvVar9 + 0x24) = 2;
    *(undefined1 *)((int)pvVar9 + 0x28) = 1;
    if (*(int *)((int)pvVar9 + 0xd8) == 0) {
      moby->state = '\x01';
    }
    else {
      fVar37 = (moby->pos).z;
      moby->state = '\x02';
      fVar37 = fVar37 + 1.0;
      dVar28 = (double)fVar37;
      (moby->pos).z = fVar37;
    }
  }
  return dVar28;
}


