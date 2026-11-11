// game/update/moby309.cpp -- reconstructed from NPEA00385 EBOOT
// STATUS: NOT STARTED (raw Ghidra output)
// 5 functions, 0x33bfc0-0x33cdb4
#include "game/update/moby309.h"
#include "game/camera.h"
#include "game/hero.h"
#include "game/mobyfunc.h"
#include "game/mobyutil.h"
#include "game/partupd.h"
#include "game/sound.h"
#include "game/update/moby639.h"
#include "idol/fastfunc.h"

// 0x033bfc0 (0x548 bytes)
// inlined: FastRSqrt @0x33c1e4, FastRSqrt @0x33c3dc, FastRSqrt @0x33c458
void M309_0033bfc0(MobyInstance *param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  void *pvVar5;
  MobyClass *pMVar6;
  undefined4 uVar7;
  int iVar8;
  undefined4 *unused;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  double dVar16;
  GPiece<16> auVar17;
  GPiece<16> auVar18;
  GPiece<16> auVar19;
  float local_60;
  float local_5c;
  float local_58;
  undefined4 local_54;
  float local_50 [5];
  float local_3c;
  undefined4 local_38;
  undefined4 local_34;
  
  pvVar5 = param_1->pVar;
  dVar16 = 0.0;
  local_50[0] = 0.0;
  local_50[1] = 0.0;
  dVar15 = 1.0;
  local_50[2] = 1.0;
  local_50[3] = 1.0;
  if (((g_standingOnMoby == param_1) && (g_framesNotGrounded == 0)) ||
     ((DAT_0096a1d8 == param_1 && (g_heroStateType == 3)))) {
    param_1->setByGroup = '\x01';
    fVar2 = g_heroPosition.x - (param_1->pos).x;
    if (ABS(fVar2) < 0.1) {
      if (ABS(g_heroPosition.y - (param_1->pos).y) < 0.1) {
        local_60 = 0.0;
        local_5c = 0.0;
        local_58 = 1.0;
        local_54 = 0x3f800000;
        goto LAB_0033c258;
      }
    }
    fVar3 = g_heroPosition.y - (param_1->pos).y;
    fVar4 = DAT_00811df4 + (g_heroPosition.z - (param_1->pos).z);
    fVar1 = SQRT(fVar4 * fVar4 + fVar2 * fVar2 + fVar3 * fVar3);
    if (fVar1 == 0.0) {
      local_60 = 0.0;
      local_5c = 0.0;
      local_58 = 1.0;
      local_54 = 0x3f800000;
    }
    else {
      fVar4 = fVar4 / fVar1;
      local_50[4] = -fVar3;
      local_38 = 0;
      local_34 = 0;
      fVar3 = fVar4;
      if (fVar4 - 0.0 < 0.0) {
        fVar3 = ABS(fVar4);
      }
      dVar13 = dVar15;
      if (fVar4 - 0.0 < 0.0) {
        dVar13 = -1.0;
      }
      dVar14 = (double)(1.0 - fVar3);
      if ((double)(1.0 - fVar3) - 0.0 < 0.0) {
        dVar14 = dVar16;
      }
      fVar3 = -(float)(-(double)((fVar3 * fVar3 * fVar3 * DAT_007358cc +
                                 fVar3 * fVar3 * DAT_007358c8 + fVar3 * DAT_007358c4 + DAT_007358c0)
                                 * (float)SQRT(dVar14) - 1.5707964) * dVar13 - 1.5707963705062866);
      if (DAT_00811df0 * 0.017453292 - fVar3 < 0.0) {
        fVar3 = DAT_00811df0 * 0.017453292;
      }
      local_3c = fVar2;
      MB_RotateQuatAxisAngle(fVar3,&local_60,local_50);
      dVar9 = (double)(local_58 * local_58 + local_60 * local_60 + local_5c * local_5c);
      dVar13 = dVar16;
      dVar14 = dVar16;
      dVar12 = dVar16;
      if ((double)(float)SQRT(dVar9) != dVar16) {
        dVar13 = 1.0 / SQRT(dVar9);
        dVar13 = (double)(float)(-(double)(float)((double)(float)(dVar9 * dVar13) * dVar13 - dVar15)
                                 * (double)(float)(dVar13 * 0.5) + dVar13);
        dVar13 = (double)(float)(-(double)(float)((double)(float)(dVar9 * dVar13) * dVar13 - dVar15)
                                 * (double)(float)(dVar13 * 0.5) + dVar13);
        fVar2 = (float)(-(double)(float)((double)(float)(dVar9 * dVar13) * dVar13 - dVar15) *
                        (double)(float)(dVar13 * 0.5) + dVar13);
        dVar12 = (double)(local_60 * fVar2);
        dVar14 = (double)(local_5c * fVar2);
        dVar13 = (double)(local_58 * fVar2);
      }
      local_60 = (float)dVar12;
      local_5c = (float)dVar14;
      local_58 = (float)dVar13;
    }
  }
  else {
    local_60 = 0.0;
    local_5c = 0.0;
    local_58 = 1.0;
    local_54 = 0x3f800000;
    param_1->setByGroup = '\0';
  }
LAB_0033c258:
  iVar8 = FastDecTimerS32(ZEXT48(pvVar5) + 0x70);
  if ((iVar8 != 0) &&
     (((0.1 < ABS((param_1->transform).v2.x - local_60) ||
       (0.1 < ABS((param_1->transform).v2.y - local_5c))) ||
      (0.1 < ABS((param_1->transform).v2.z - local_58))))) {
    auVar17 = ZEXT416(0xffffffff);
    auVar17 = auVar17 | auVar17 << 0x20 | auVar17 << 0x40 | auVar17 << 0x60;
    auVar18 = vectorShiftLeftIntegerWord(auVar17,auVar17);
    auVar17 = loadVectorLeftIndexed(0x1c,0x33bf90);
    auVar17 = auVar17 >> 0x60 & (GPiece<16>)0xffffffff;
    auVar19 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
    auVar17 = vectorMultiplyAddFloatingPoint
                        (auVar19,auVar17 | auVar17 << 0x20 | auVar17 << 0x40 | auVar17 << 0x60,
                         auVar18);
    auVar17 = vectorConvertToSignedFixedPointWordSaturate(auVar17,0);
    auVar17 = auVar17 >> 0x60 & (GPiece<16>)0xffffffff;
    uVar7 = storeVectorElementWordIndexed
                      (auVar17 | auVar17 << 0x20 | auVar17 << 0x40 | auVar17 << 0x60,0x70,
                       ZEXT48(pvVar5));
    *(undefined4 *)((int)pvVar5 + 0x70U & 0xfffffffc) = uVar7;
    dVar13 = 2.0;
    pMVar6 = param_1->pClass;
    (param_1->pos).z = (param_1->pos).z + 2.0;
    sound_Play(pMVar6->SoundDefs,8,param_1,&(param_1->pos).x,0x400);
    (param_1->pos).z = (float)((double)(param_1->pos).z - dVar13);
  }
  unused = &DAT_0033bf90;
  dVar14 = 0.004999999888241291;
  dVar13 = 0.20000000298023224;
  AccelDelt(local_60,0.005,0.2,(float)dVar16,&(param_1->transform).v2.x,0x33bf90,
                      (float *)((int)pvVar5 + 0x60));
  AccelDelt(local_5c,(float)dVar14,(float)dVar13,(float)dVar16,&(param_1->transform).v2.y,
                      (int)unused,(float *)((int)pvVar5 + 100));
  AccelDelt(local_58,(float)dVar14,(float)dVar13,(float)dVar16,&(param_1->transform).v2.z,
                      (int)unused,(float *)((int)pvVar5 + 0x68));
  fVar2 = (param_1->transform).v2.y;
  fVar3 = (param_1->transform).v2.x;
  fVar4 = (param_1->transform).v2.z;
  dVar9 = (double)(fVar4 * fVar4 + fVar3 * fVar3 + fVar2 * fVar2);
  dVar13 = dVar16;
  dVar14 = dVar16;
  dVar12 = dVar16;
  if ((double)(float)SQRT(dVar9) != dVar16) {
    dVar13 = 1.0 / SQRT(dVar9);
    dVar13 = (double)(float)(-(double)(float)((double)(float)(dVar9 * dVar13) * dVar13 - dVar15) *
                             (double)(float)(dVar13 * 0.5) + dVar13);
    dVar13 = (double)(float)(-(double)(float)((double)(float)(dVar9 * dVar13) * dVar13 - dVar15) *
                             (double)(float)(dVar13 * 0.5) + dVar13);
    fVar1 = (float)(-(double)(float)((double)(float)(dVar9 * dVar13) * dVar13 - dVar15) *
                    (double)(float)(dVar13 * 0.5) + dVar13);
    dVar12 = (double)(fVar3 * fVar1);
    dVar14 = (double)(fVar2 * fVar1);
    dVar13 = (double)(fVar4 * fVar1);
  }
  (param_1->transform).v2.x = (float)dVar12;
  (param_1->transform).v2.y = (float)dVar14;
  (param_1->transform).v2.z = (float)dVar13;
  dVar10 = (double)(float)(dVar13 * dVar13 + --(double)(float)(dVar14 * dVar14));
  dVar9 = dVar16;
  dVar11 = dVar16;
  if ((double)(float)SQRT(dVar10) != dVar16) {
    dVar9 = 1.0 / SQRT(dVar10);
    dVar9 = (double)(float)(-(double)(float)((double)(float)(dVar10 * dVar9) * dVar9 - dVar15) *
                            (double)(float)(dVar9 * 0.5) + dVar9);
    dVar9 = (double)(float)(-(double)(float)((double)(float)(dVar10 * dVar9) * dVar9 - dVar15) *
                            (double)(float)(dVar9 * 0.5) + dVar9);
    dVar15 = (double)(float)(-(double)(float)((double)(float)(dVar10 * dVar9) * dVar9 - dVar15) *
                             (double)(float)(dVar9 * 0.5) + dVar9);
    dVar11 = (double)(float)(dVar13 * dVar15);
    dVar9 = -(double)(float)(dVar14 * dVar15);
  }
  (param_1->transform).v1.x = 0.0;
  (param_1->transform).v1.y = (float)dVar11;
  (param_1->transform).v1.z = (float)dVar9;
  (param_1->transform).v0.w = 0.0;
  (param_1->transform).v1.w = 0.0;
  (param_1->transform).v0.y = (float)(dVar9 * dVar12 - dVar16);
  (param_1->transform).v2.w = 0.0;
  (param_1->transform).v0.x = (float)(dVar11 * dVar13 - (double)(float)(dVar9 * dVar14));
  (param_1->transform).v0.z = (float)(dVar16 * dVar14 - (double)(float)(dVar11 * dVar12));
  return;
}


// 0x033c510 (0x168 bytes)
/* Moby 309 */

void UpdateMoby_309(MobyInstance *moby)

{
  float fVar1;
  void *pvVar2;
  undefined4 *puVar3;
  
  pvVar2 = moby->pVar;
  if (moby->state == '\0') {
    fVar1 = (moby->pos).z;
    moby->modeBits = moby->modeBits | LOCK_ROTATION;
    moby->state = '\x01';
    moby->setByGroup = '\0';
    *(undefined4 *)((int)pvVar2 + 0x5c) = 1;
    *(undefined4 *)((int)pvVar2 + 0x70) = 0;
    (moby->pos).z = fVar1 + 0.35;
    *(undefined1 *)((int)pvVar2 + 0x60) = 0;
    *(undefined1 *)((int)pvVar2 + 0x61) = 0;
    *(undefined1 *)((int)pvVar2 + 0x62) = 0;
    *(undefined1 *)((int)pvVar2 + 99) = 0;
    *(undefined1 *)((int)pvVar2 + 100) = 0;
    *(undefined1 *)((int)pvVar2 + 0x65) = 0;
    *(undefined1 *)((int)pvVar2 + 0x66) = 0;
    *(undefined1 *)((int)pvVar2 + 0x67) = 0;
    *(undefined1 *)((int)pvVar2 + 0x68) = 0;
    *(undefined1 *)((int)pvVar2 + 0x69) = 0;
    *(undefined1 *)((int)pvVar2 + 0x6a) = 0;
    *(undefined1 *)((int)pvVar2 + 0x6b) = 0;
    *(undefined1 *)((int)pvVar2 + 0x6c) = 0;
    *(undefined1 *)((int)pvVar2 + 0x6d) = 0;
    *(undefined1 *)((int)pvVar2 + 0x6e) = 0;
    *(undefined1 *)((int)pvVar2 + 0x6f) = 0;
    puVar3 = (undefined4 *)((uint)&moby->rotation & 0xfffffff0);
    puVar3[3] = 0;
    puVar3[2] = 0;
    puVar3[1] = 0;
    *puVar3 = 0;
  }
  M309_0033bfc0((double)DAT_00811dec,0x4020000000000000,(longlong)(int)moby);
  MB_GetOrientation
            ((MobyInstance *)((int)pvVar2 + 0x20),(Vec4 *)&DAT_00a15d30,
             ZEXT48(&stack0x00000000) - 0x30,(longlong)(int)moby + 0x40);
  return;
}


// 0x033c678 (0x14 bytes)
void M309_0033c678(void)

{
  DAT_00811e44 = 0x10000;
  return;
}


// 0x033c6e0 (0x3e4 bytes)
void M31_0033c6e0(double param_1,int param_2,float *param_3)

{
  float fVar1;
  undefined1 uVar2;
  undefined2 uVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  int iVar7;
  int iVar8;
  double dVar9;
  double dVar10;
  undefined8 uVar11;
  double dVar12;
  double dVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  GPiece<16> auVar18;
  GPiece<16> auVar19;
  GPiece<16> auVar20;
  float local_c0;
  float local_bc;
  float local_b8;
  undefined4 local_b4;
  float local_b0;
  float local_ac;
  float local_a8;
  float local_a4;
  float local_a0;
  float local_9c;
  float local_98;
  undefined4 local_94;
  float afStack_90 [4];
  float local_80;
  float local_7c;
  float local_78;
  float local_74;
  longlong local_70;
  
  dVar9 = (double)FastWrapRot((float)param_1,*(float *)(param_2 + 0x48));
  fVar1 = (float)(dVar9 + 1.570796251296997);
  iVar8 = 0;
  dVar12 = (double)(float)(3.141592502593994 - dVar9);
  if (dVar9 - (double)(float)(3.141592502593994 - dVar9) < 0.0) {
    dVar12 = dVar9;
  }
  fVar4 = 3.1415925 - fVar1;
  if (fVar1 - (3.1415925 - fVar1) < 0.0) {
    fVar4 = fVar1;
  }
  dVar10 = (double)(float)(-3.141592502593994 - dVar9);
  if ((double)(float)(-3.141592502593994 - dVar9) - dVar12 < 0.0) {
    dVar10 = dVar12;
  }
  fVar5 = -3.1415925 - fVar1;
  if ((-3.1415925 - fVar1) - fVar4 < 0.0) {
    fVar5 = fVar4;
  }
  dVar9 = (double)(float)(dVar10 * dVar10);
  fVar6 = fVar5 * fVar5;
  dVar13 = (double)(float)(dVar9 * (double)(float)(dVar9 * dVar10));
  fVar1 = fVar6 * fVar6 * fVar5;
  dVar12 = (double)(float)(dVar9 * dVar13);
  fVar4 = fVar6 * fVar1;
  local_a8 = param_3[2];
  local_a4 = param_3[3];
  local_bc = ((float)(dVar9 * dVar12) * 2.601887e-06 +
             (float)(dVar12 * -0.0001980741071747616 +
                    (double)(float)(dVar13 * 0.008333025500178337 +
                                   (double)(float)((double)(float)(dVar9 * dVar10) *
                                                   -0.16666656732559204 + dVar10)))) * 0.8;
  local_c0 = (fVar6 * fVar4 * 2.601887e-06 +
             fVar4 * -0.0001980741 + fVar1 * 0.0083330255 + fVar6 * fVar5 * -0.16666657 + fVar5) *
             0.8;
  local_ac = param_3[1] + local_bc;
  local_b0 = *param_3 + local_c0;
  uVar16 = 0;
  local_b8 = 0.0;
  dVar12 = 40000.0;
  dVar9 = 150000.0;
  uVar17 = 0x3fc99999a0000000;
  uVar14 = 0x3ff0000000000000;
  uVar15 = 0x3ff028f5c0000000;
  auVar20 = loadVectorLeftIndexed(0x38,0x33c690);
  auVar20 = auVar20 >> 0x60 & (GPiece<16>)0xffffffff;
  auVar20 = auVar20 | auVar20 << 0x20 | auVar20 << 0x40 | auVar20 << 0x60;
  do {
    MB_randInt(2);
    MB_randInt(2);
    uVar11 = MB_randRangeFloat((float)dVar12,(float)dVar9);
    MB_randRange(10,0x7f);
    uVar11 = SpawnPart_23(uVar17,uVar14,uVar15,uVar11,&local_b0);
    iVar7 = (int)uVar11;
    if (iVar7 != 0) {
      auVar18 = ZEXT416(0xffffffff);
      auVar18 = auVar18 | auVar18 << 0x20 | auVar18 << 0x40 | auVar18 << 0x60;
      auVar18 = vectorShiftLeftIntegerWord(auVar18,auVar18);
      auVar19 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
      auVar18 = vectorMultiplyAddFloatingPoint(auVar19,auVar20,auVar18);
      auVar18 = vectorConvertToSignedFixedPointWordSaturate(auVar18,0);
      auVar19 = vectorSplatHalfWord(auVar18,1);
      auVar18 = auVar18 >> 0x60 & (GPiece<16>)0xff;
      uVar3 = storeVectorElementHalfWordIndexed(auVar19,10,uVar11);
      *(undefined2 *)(iVar7 + 10) = uVar3;
      *(undefined4 *)(iVar7 + 0x24) = 2;
      *(undefined1 *)(iVar7 + 0x2a) = 0x7f;
      uVar2 = storeVectorElementByteIndexed
                        (auVar18 | auVar18 << 8 | auVar18 << 0x10 | auVar18 << 0x18 |
                         auVar18 << 0x20 | auVar18 << 0x28 | auVar18 << 0x30 | auVar18 << 0x38 |
                         auVar18 << 0x40 | auVar18 << 0x48 | auVar18 << 0x50 | auVar18 << 0x58 |
                         auVar18 << 0x60 | auVar18 << 0x68 | auVar18 << 0x70 | auVar18 << 0x78,0x2b,
                         uVar11);
      *(undefined1 *)(iVar7 + 0x2b) = uVar2;
    }
    iVar8 = iVar8 + 1;
  } while (iVar8 < 6);
  local_a0 = local_c0;
  local_9c = local_bc;
  local_98 = local_b8;
  local_94 = local_b4;
  local_c0 = local_c0 * 0.0625;
  local_bc = local_bc * 0.0625;
  local_b8 = local_b8 * 0.0625;
  dVar12 = (double)MB_randRangeFloat(0.025,0.06);
  iVar8 = 0;
  local_b8 = (float)dVar12;
  local_80 = local_b0;
  local_7c = local_ac;
  local_78 = local_a8;
  local_74 = local_a4;
  uVar14 = 0x3fe0000000000000;
  dVar12 = 0.6283000111579895;
  do {
    dVar9 = (double)MB_randRangeSigned(uVar16,uVar14);
    local_70 = (longlong)iVar8;
    MB_RotateQuatAxisAngle
              ((float)((double)local_70 * dVar12 + dVar9),afStack_90,&local_c0);
    dVar9 = (double)MB_randRangeSigned(uVar16,uVar17);
    local_b0 = (float)((double)local_80 + dVar9);
    dVar9 = (double)MB_randRangeSigned(uVar16,uVar17);
    local_ac = (float)((double)local_7c + dVar9);
    dVar9 = (double)MB_randRangeSigned(uVar16,uVar17);
    local_a8 = (float)((double)local_78 + dVar9);
    SpawnPart_19(&local_b0,afStack_90);
    iVar8 = iVar8 + 1;
  } while (iVar8 < 0x10);
  FUN_003fda38(&DAT_00811ed0,&local_80,0,0);
  return;
}


// 0x033cad0 (0x2e4 bytes)
// inlined: FastAtan2 @0x33cc40
bool M31_0033cad0
               (undefined8 param_1,double param_2,double param_3,double param_4,undefined8 param_5,
               undefined8 param_6,undefined8 param_7,undefined8 param_8,undefined8 param_9)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  ulonglong *puVar5;
  int iVar6;
  int iVar7;
  ulonglong uVar8;
  int iVar10;
  longlong lVar9;
  undefined1 *unused;
  ulonglong uVar11;
  longlong lVar12;
  longlong lVar13;
  longlong lVar14;
  float *pfVar15;
  float *in_r8;
  undefined8 in_r9;
  ulonglong unaff_r27;
  ulonglong unaff_r28;
  ulonglong unaff_r29;
  ulonglong unaff_r30;
  ulonglong unaff_r31;
  ulonglong in_LR;
  longlong lVar16;
  double dVar17;
  ulonglong in_f26;
  ulonglong in_f27;
  ulonglong in_f28;
  ulonglong in_f29;
  ulonglong in_f30;
  ulonglong in_f31;
  GPiece<144> local_90;
  
  uVar8 = ZEXT48(&stack0x00000000);
  lVar9 = uVar8 - 0x100;
  puVar5 = (ulonglong *)lVar9;
  *puVar5 = uVar8;
  puVar5[0x22] = in_LR;
  puVar5[0x1a] = in_f26;
  puVar5[0x1b] = in_f27;
  puVar5[0x1c] = in_f28;
  puVar5[0x1d] = in_f29;
  puVar5[0x1e] = in_f30;
  puVar5[0x1f] = in_f31;
  puVar5[0x18] = unaff_r30;
  unused = local_90;
  puVar5[0x15] = unaff_r27;
  puVar5[0x16] = unaff_r28;
  puVar5[0x19] = unaff_r31;
  puVar5[0x17] = unaff_r29;
  iVar10 = MB_PathMoveDist(param_9);
  iVar6 = (int)param_8;
  AccelDelt(*(float *)(puVar5 + 0xe),(float)param_2,(float)param_3,(float)param_4,
                      (float *)(iVar6 + 0x10),(int)unused,in_r8);
  AccelDelt(*(float *)((int)puVar5 + 0x74),(float)param_2,(float)param_3,(float)param_4,
                      (float *)(iVar6 + 0x14),(int)unused,in_r8 + 1);
  AccelDelt(*(float *)(puVar5 + 0xf),(float)param_2,(float)param_3,(float)param_4,
                      (float *)(iVar6 + 0x18),(int)unused,in_r8 + 2);
  fVar3 = *in_r8;
  fVar4 = in_r8[1];
  fVar1 = ABS(*in_r8);
  fVar2 = ABS(in_r8[1]);
  *(float *)(puVar5 + 0x10) = fVar1 - fVar2;
  dVar17 = 0.0;
  uVar11 = (ulonglong)((uint)fVar3 >> 0x1c) & 8 |
           (ulonglong)(*(uint *)(puVar5 + 0x10) >> 0x1e) & 2 | (ulonglong)((uint)fVar4 >> 0x1d) & 4;
  lVar12 = uVar11 << 2;
  fVar3 = fVar1;
  if (*(float *)(puVar5 + 0x10) - 0.0 < 0.0) {
    fVar3 = fVar2;
  }
  fVar4 = *(float *)(&g_atanQuadrantTable + (int)lVar12);
  if (*(float *)(puVar5 + 0x10) - 0.0 < 0.0) {
    fVar2 = fVar1;
  }
  fVar1 = *(float *)(((uint)(uVar11 << 2) | 0x735900) + 4);
  if (0.0 < fVar3) {
    lVar14 = uVar8 - 0xf0;
    lVar13 = uVar8 - 0x7c;
    lVar12 = uVar8 - 0x6c;
    lVar16 = 2;
    fVar3 = (fVar2 - fVar3) / (fVar2 + fVar3);
    fVar2 = fVar3 * fVar3;
    *(float *)(puVar5 + 0x12) = fVar3;
    *(float *)(puVar5 + 0x11) = fVar3;
    *(float *)((int)puVar5 + 0x8c) = fVar3;
    *(float *)((int)puVar5 + 0x84) = fVar3;
    fVar3 = fVar2 * fVar2;
    *(float *)(puVar5 + 0x11) = *(float *)(puVar5 + 0x11) * fVar2;
    *(float *)((int)puVar5 + 0x8c) = *(float *)((int)puVar5 + 0x8c) * fVar3;
    *(float *)(puVar5 + 0x12) = *(float *)(puVar5 + 0x12) * fVar3 * fVar2;
    do {
      *(float *)((int)lVar14 + 0x84) = *(float *)((int)lVar14 + 0x74) * fVar3 * fVar3;
      iVar6 = (int)lVar13;
      lVar14 = lVar14 + 8;
      lVar13 = lVar13 + 8;
      *(float *)((int)lVar12 + 4) = *(float *)(iVar6 + 4) * fVar3 * fVar3;
      lVar12 = lVar12 + 8;
      lVar16 = lVar16 + -1;
    } while (lVar16 != 0);
    lVar12 = uVar8 - 0x7c;
    pfVar15 = (float *)&DAT_007358e0;
    lVar16 = 4;
    lVar13 = lVar12;
    lVar14 = lVar9;
    do {
      fVar3 = *pfVar15;
      fVar2 = pfVar15[1];
      pfVar15 = pfVar15 + 2;
      *(float *)((int)lVar14 + 0x84) = *(float *)((int)lVar14 + 0x84) * fVar3;
      lVar14 = lVar14 + 8;
      *(float *)((int)lVar13 + 4) = *(float *)((int)lVar13 + 4) * fVar2;
      lVar13 = lVar13 + 8;
      lVar16 = lVar16 + -1;
    } while (lVar16 != 0);
    lVar13 = 2;
    do {
      iVar6 = (int)lVar9;
      lVar9 = lVar9 + 0x10;
      iVar7 = (int)lVar12;
      lVar12 = lVar12 + 0x10;
      dVar17 = (double)((float)(dVar17 + (double)*(float *)(iVar6 + 0x84)) + *(float *)(iVar7 + 4) +
                        *(float *)(iVar7 + 8) + *(float *)(iVar7 + 0xc));
      lVar13 = lVar13 + -1;
    } while (lVar13 != 0);
    dVar17 = (double)((float)(dVar17 + 0.7853981852531433) * fVar4 + fVar1);
  }
  OrganicDeltAngSpeed(dVar17,param_5,param_6,param_7,param_8,lVar12,in_r9);
  return iVar10 != 0;
}


