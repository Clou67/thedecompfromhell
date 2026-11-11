// game/update/moby8.cpp -- reconstructed from NPEA00385 EBOOT
// STATUS: NOT STARTED (raw Ghidra output)
// 9 functions, 0x461680-0x463ef0
#include "game/update/moby8.h"
#include "game/camera.h"
#include "game/collproc.h"
#include "game/debug.h"
#include "game/draw.h"
#include "game/hero.h"
#include "game/mobyfunc.h"
#include "game/mobyutil.h"
#include "game/partupd.h"
#include "game/sound.h"
#include "game/update/moby303.h"
#include "game/update/moby794.h"
#include "game/update/moby800.h"
#include "idol/fastfunc.h"

// 0x0461680 (0x15c bytes)
double M794_00461680(MobyInstance *param_1)

{
  void *pvVar1;
  undefined2 uVar2;
  int iVar3;
  ulonglong uVar4;
  undefined8 in_LR;
  double dVar5;
  GPiece<16> auVar6;
  GPiece<16> auVar7;
  GPiece<16> auVar8;
  GPiece<16> auVar9;
  float fVar10;
  
  pvVar1 = param_1->pVar;
  uVar4 = ZEXT48(pvVar1);
  MB_BobMotion
            (DAT_00873e60,DAT_00873e64,param_1,(float *)((int)pvVar1 + 0x1a0),
             (float *)((int)pvVar1 + 0x1a4));
  dVar5 = (double)MB_SwingMotion
                            ((double)DAT_00873e68,(double)DAT_00873e6c,(double)DAT_00873e70,param_1,
                             uVar4 + 0x1a8,uVar4 + 0x1ac);
  if (param_1->state == '\x01') {
    iVar3 = FastDecTimerS16(uVar4 + 0x1b4);
    dVar5 = (double)*(float *)((int)pvVar1 + 0x1b0);
    if (iVar3 != 0) {
      auVar7 = ZEXT416(0xffffffff);
      auVar7 = auVar7 | auVar7 << 0x20 | auVar7 << 0x40 | auVar7 << 0x60;
      auVar8 = vectorShiftLeftIntegerWord(auVar7,auVar7);
      auVar7 = loadVectorLeftIndexed(0x3e74,0x870000);
      auVar6 = vectorConvertFromSignedFixedPointWord(auVar7,0);
      auVar7 = loadVectorLeftIndexed(in_LR,0x461678);
      auVar7 = auVar7 >> 0x60 & (GPiece<16>)0xffffffff;
      auVar9 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
      auVar7 = vectorAddFloatingPoint
                         (auVar6,auVar7 | auVar7 << 0x20 | auVar7 << 0x40 | auVar7 << 0x60);
      auVar7 = vectorMultiplyAddFloatingPoint(auVar9,auVar7,auVar8);
      auVar7 = vectorConvertToSignedFixedPointWordSaturate(auVar7,0);
      auVar7 = vectorSplatHalfWord(auVar7,1);
      uVar2 = storeVectorElementHalfWordIndexed(auVar7,0x1b4,uVar4);
      *(undefined2 *)((int)pvVar1 + 0x1b4) = uVar2;
      dVar5 = (double)DAT_00873e78;
      iVar3 = MB_randInt(2);
      if (iVar3 != 0) {
        dVar5 = -dVar5;
      }
      dVar5 = (double)FastWrapRot((param_1->rotation).z,(float)dVar5);
      *(float *)((int)pvVar1 + 0x1b0) = (float)dVar5;
    }
    fVar10 = AccelDelt((float)dVar5,DAT_00873e7c,DAT_00873e80,DAT_00873e84,
                                 &(param_1->rotation).z,0x870000,(float *)((int)pvVar1 + 0x1b8));
    dVar5 = (double)fVar10;
  }
  return dVar5;
}


// 0x04617e0 (0x154 bytes)
double M8_004617e0(double param_1,double param_2,double param_3,int param_4)

{
  int iVar1;
  Spline *pSVar2;
  Vec4 *pVVar3;
  int iVar4;
  undefined4 *unused;
  undefined8 in_r7;
  double dVar5;
  float fVar6;
  float local_40;
  float local_3c;
  float local_38;
  
  iVar1 = *(int *)(param_4 + 0x78);
  pSVar2 = Splines[*(int *)(iVar1 + 0x204)];
  if (*(short *)(iVar1 + 0x208) == 0) {
    iVar4 = MB_PathMoveDist
                      ((double)(float)((double)(float)((double)g_FrameTime * param_2) *
                                      param_3),pSVar2,&local_40,iVar1 + 0x80,iVar1 + 0x8c,in_r7,0);
    if (iVar4 != 0) {
      *(undefined2 *)(iVar1 + 0x208) = 1;
    }
  }
  else {
    pVVar3 = pSVar2->points + pSVar2->cnt + -1;
    local_40 = pVVar3->x;
    local_3c = pVVar3->y;
    local_38 = pVVar3->z;
  }
  unused = &DAT_004617dc;
  dVar5 = 0.0;
  AccelDelt(local_40,(float)param_1,DAT_00873eb4,0.0,(float *)(param_4 + 0x10),0x4617dc,
                      (float *)(iVar1 + 0x194));
  AccelDelt(local_3c,(float)param_1,DAT_00873eb4,(float)dVar5,(float *)(param_4 + 0x14),
                      (int)unused,(float *)(iVar1 + 0x198));
  fVar6 = AccelDelt(local_38,(float)param_1,DAT_00873eb4,(float)dVar5,
                              (float *)(param_4 + 0x18),(int)unused,(float *)(iVar1 + 0x19c));
  return (double)fVar6;
}


// 0x0461938 (0x154 bytes)
double M8_00461938(int param_1)

{
  int iVar1;
  Vec4 *pVVar2;
  ulonglong uVar3;
  longlong lVar4;
  int iVar5;
  Spline *pSVar6;
  double dVar7;
  double dVar8;
  float fVar9;
  float local_40;
  float local_3c;
  float local_38;
  
  uVar3 = ZEXT48(&stack0x00000000);
  iVar1 = *(int *)(param_1 + 0x78);
  dVar7 = 0.0;
  pSVar6 = Splines[*(int *)(iVar1 + 0x78)];
  dVar8 = dVar7;
  for (iVar5 = *(int *)(iVar1 + 0x84); 0 < iVar5; iVar5 = iVar5 + -1) {
    pVVar2 = pSVar6->points;
    pSVar6 = (Spline *)pSVar6->points;
    dVar8 = (double)(float)(dVar8 + (double)pVVar2->w);
  }
  lVar4 = uVar3 - 0x40;
  MB_PathMoveDist
            ((double)(((float)(dVar8 + (double)*(float *)(iVar1 + 0x1cc)) /
                      *(float *)(iVar1 + 0x16c)) * *(float *)(iVar1 + 400)),
             Splines[*(int *)(iVar1 + 0x74)],lVar4,uVar3 - 0x30,uVar3 - 0x2c,Splines,
             *(undefined2 *)(iVar1 + 0x8a));
  iVar5 = (int)lVar4;
  AccelDelt(local_40,DAT_00873e58,DAT_00873e5c,(float)dVar7,(float *)(param_1 + 0x10),
                      iVar5,(float *)(iVar1 + 0x194));
  AccelDelt(local_3c,DAT_00873e58,DAT_00873e5c,(float)dVar7,(float *)(param_1 + 0x14),
                      iVar5,(float *)(iVar1 + 0x198));
  fVar9 = AccelDelt(local_38,DAT_00873e58,DAT_00873e5c,(float)dVar7,
                              (float *)(param_1 + 0x18),iVar5,(float *)(iVar1 + 0x19c));
  return (double)fVar9;
}


// 0x0461a90 (0x138 bytes)
double M8_00461a90(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  longlong lVar4;
  int unused;
  double dVar5;
  double dVar6;
  float fVar7;
  float local_50;
  float local_4c;
  float local_48;
  
  iVar1 = *(int *)(param_1 + 0x78);
  lVar4 = ZEXT48(&stack0x00000000) - 0x50;
  dVar6 = (double)*(float *)(iVar1 + 0x1cc);
  uVar2 = *(undefined4 *)(iVar1 + 0x84);
  iVar3 = MB_PathMoveDist
                    ((double)*(float *)(iVar1 + 0x168),Splines[*(int *)(iVar1 + 0x78)],lVar4,
                     iVar1 + 0x84,iVar1 + 0x1cc,*(int *)(iVar1 + 0x78) * 4,
                     *(undefined2 *)(iVar1 + 0x8a));
  dVar5 = 0.0;
  unused = (int)lVar4;
  AccelDelt(local_50,DAT_00873e58,DAT_00873e5c,0.0,(float *)(iVar1 + 0x170),unused,
                      (float *)(iVar1 + 0x180));
  AccelDelt(local_4c,DAT_00873e58,DAT_00873e5c,(float)dVar5,(float *)(iVar1 + 0x174),
                      unused,(float *)(iVar1 + 0x184));
  fVar7 = AccelDelt(local_48,DAT_00873e58,DAT_00873e5c,(float)dVar5,
                              (float *)(iVar1 + 0x178),unused,(float *)(iVar1 + 0x188));
  dVar5 = (double)fVar7;
  if ((*(short *)(iVar1 + 0x8a) == 0) && (iVar3 != 0)) {
    *(undefined4 *)(iVar1 + 0x84) = uVar2;
    dVar5 = -(double)*(float *)(iVar1 + 0x168);
    *(float *)(iVar1 + 0x1cc) = (float)dVar6;
    *(float *)(iVar1 + 0x168) = (float)dVar5;
  }
  return dVar5;
}


// 0x0461bc8 (0x2f8 bytes)
void M8_00461bc8(int param_1)

{
  int iVar1;
  Spline *pSVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  int iVar6;
  int iVar7;
  float *pfVar8;
  Spline *pSVar9;
  int iVar10;
  
  iVar1 = *(int *)(param_1 + 0x78);
  *(undefined4 *)(iVar1 + 0x16c) = 0;
  pSVar2 = Splines[*(int *)(iVar1 + 0x78)];
  iVar7 = pSVar2->cnt;
  if (0 < iVar7) {
    pSVar9 = pSVar2;
    iVar10 = 0;
    do {
      iVar6 = iVar10 + 1;
      pfVar8 = (float *)((int)pSVar2 + ((iVar6 - (iVar6 / iVar7) * iVar7) * 4 + 4) * 4);
      fVar3 = pSVar9->points[0].y - pfVar8[1];
      fVar4 = pSVar9->points[0].x - *pfVar8;
      fVar5 = pSVar9->points[0].z - pfVar8[2];
      fVar3 = SQRT(fVar5 * fVar5 + fVar4 * fVar4 + fVar3 * fVar3);
      pSVar9->points[0].w = fVar3;
      iVar7 = pSVar2->cnt;
      if (iVar10 != iVar7 + -1) {
        *(float *)(iVar1 + 0x16c) = *(float *)(iVar1 + 0x16c) + fVar3;
        iVar7 = pSVar2->cnt;
      }
      pSVar9 = (Spline *)pSVar9->points;
      iVar10 = iVar6;
    } while (iVar6 < iVar7);
  }
  iVar10 = 0;
  *(undefined4 *)(iVar1 + 400) = 0;
  pSVar2 = Splines[*(int *)(iVar1 + 0x74)];
  iVar7 = pSVar2->cnt;
  pSVar9 = pSVar2;
  if (0 < iVar7) {
    do {
      iVar6 = iVar10 + 1;
      pfVar8 = (float *)((int)pSVar2 + ((iVar6 - (iVar6 / iVar7) * iVar7) * 4 + 4) * 4);
      fVar3 = pSVar9->points[0].y - pfVar8[1];
      fVar4 = pSVar9->points[0].x - *pfVar8;
      fVar5 = pSVar9->points[0].z - pfVar8[2];
      fVar3 = SQRT(fVar5 * fVar5 + fVar4 * fVar4 + fVar3 * fVar3);
      pSVar9->points[0].w = fVar3;
      iVar7 = pSVar2->cnt;
      if (iVar10 != iVar7 + -1) {
        *(float *)(iVar1 + 400) = *(float *)(iVar1 + 400) + fVar3;
        iVar7 = pSVar2->cnt;
      }
      pSVar9 = (Spline *)pSVar9->points;
      iVar10 = iVar6;
    } while (iVar6 < iVar7);
  }
  iVar10 = 0;
  pSVar2 = Splines[*(int *)(iVar1 + 0x204)];
  iVar7 = pSVar2->cnt;
  pSVar9 = pSVar2;
  if (0 < iVar7) {
    do {
      iVar10 = iVar10 + 1;
      pfVar8 = (float *)((int)pSVar2 + ((iVar10 - (iVar10 / iVar7) * iVar7) * 4 + 4) * 4);
      fVar3 = pSVar9->points[0].y - pfVar8[1];
      fVar4 = pSVar9->points[0].x - *pfVar8;
      fVar5 = pSVar9->points[0].z - pfVar8[2];
      pSVar9->points[0].w = SQRT(fVar5 * fVar5 + fVar4 * fVar4 + fVar3 * fVar3);
      iVar7 = pSVar2->cnt;
      pSVar9 = (Spline *)pSVar9->points;
    } while (iVar10 < iVar7);
  }
  if (*(int *)(iVar1 + 0x210) == 0) {
    *(undefined4 *)(iVar1 + 0x80) = 0;
    *(undefined4 *)(iVar1 + 0x84) = 0;
    *(undefined4 *)(iVar1 + 0x8c) = 0;
    *(undefined4 *)(iVar1 + 0x1cc) = 0;
  }
  else {
    pSVar2 = Splines[*(int *)(iVar1 + 0x78)];
    *(undefined4 *)(iVar1 + 0x84) = 0;
    *(undefined4 *)(iVar1 + 0x1cc) = 0;
    MB_PathMoveDist
              ((double)(*(float *)(iVar1 + 0x210) * *(float *)(iVar1 + 0x16c)),pSVar2,param_1 + 0x10
               ,iVar1 + 0x84,iVar1 + 0x1cc,Splines,*(undefined2 *)(iVar1 + 0x8a));
    *(undefined4 *)(iVar1 + 0x80) = 0;
    *(undefined4 *)(iVar1 + 0x8c) = 0;
    MB_PathMoveDist
              ((double)(*(float *)(iVar1 + 0x210) * *(float *)(iVar1 + 400)),pSVar2,param_1 + 0x10,
               iVar1 + 0x80,iVar1 + 0x8c);
  }
  return;
}


// 0x0461ec0 (0x4c bytes)
int M794_00461ec0(int param_1)

{
  short sVar1;
  short *psVar2;
  int iVar3;
  
  psVar2 = (short *)(&g_MobyGroups)[*(byte *)(param_1 + 0x21)];
  if (psVar2 == (short *)0x0) {
    iVar3 = 0;
  }
  else {
    iVar3 = 0;
    do {
      sVar1 = *psVar2;
      iVar3 = iVar3 + 1;
      psVar2 = psVar2 + 1;
    } while (-1 < sVar1);
  }
  return iVar3;
}


// 0x0461f10 (0x1b0 bytes)
void M8_00461f10(MobyInstance *param_1)

{
  MobyModeBit MVar1;
  void *pvVar2;
  float fVar3;
  undefined4 uVar4;
  int iVar5;
  ulonglong uVar6;
  double dVar7;
  int local_20;
  float local_1c;
  
  pvVar2 = param_1->pVar;
  uVar6 = ZEXT48(pvVar2);
  dVar7 = 0.0;
  local_1c = 0.0;
  uVar4 = MB_damage(param_1,0x330000,0);
  iVar5 = MB_HandleDamage(param_1,uVar4,uVar6 + 0x20,0,&local_20,&local_1c,0,4);
  if ((local_20 != 1) && (param_1->state < 7)) {
    MVar1 = param_1->modeBits;
    fVar3 = *(float *)((int)pvVar2 + 0x20) - local_1c;
    *(float *)((int)pvVar2 + 0x20) = fVar3;
    if ((double)fVar3 <= dVar7) {
      iVar5 = 1;
    }
    if (param_1->state == '\x01') {
      param_1->state = '\x02';
    }
    if (local_20 == 3) {
      param_1->setByGroup = '\x01';
    }
    if (iVar5 < 3) {
      if ((-1 < iVar5) && (0 < iVar5)) {
        param_1->state = '\a';
        param_1->modeBits =
             MVar1 & (MIRROR|CAN_BE_DAMAGED|HIDE_BACKFACES|DISABLE_Z_WRITE|DRAW_SHADOW|
                      DRAW_TRANSPARENT_WEIRD|LOCK_ROTATION|NO_DRAW|UNK_40|HAS_SPECIAL_VARS|HAS_GLOW|
                      TRANSPARENT|NO_POST_UPDATE|NO_UPDATE|DISABLED);
        MB_SpawnBoltsFromCrate(param_1,0,0xffffffffffffffff);
      }
    }
    else if (iVar5 < 0xb) {
      if (iVar5 < 9) {
        *(undefined1 *)((int)pvVar2 + 0x67) = 200;
        MB_SetAnimation(param_1,1,0,5);
      }
      else {
        *(undefined1 *)((int)pvVar2 + 0x67) = 100;
        MB_SetAnimation(param_1,1,0,5);
      }
    }
    MB_UpdateLightsTransition(param_1,uVar6 + 0x60);
  }
  param_1->damage = -1;
  MB_ColorDyingMoby(param_1,uVar6 + 0x60);
  return;
}


// 0x04620c8 (0x10c bytes)
void M794_004620c8(int param_1)

{
  int iVar1;
  uint uVar2;
  longlong lVar3;
  uint *puVar4;
  uint *puVar5;
  longlong lVar6;
  int iVar7;
  
  iVar1 = *(int *)(param_1 + 0x78);
  *(float *)(iVar1 + 0x164) = *(float *)(iVar1 + 0x164) + 0.5;
  lVar3 = FastDoubleToInt();
  uVar2 = (int)*(uint *)(iVar1 + 0x164) >> 0x1f;
  if (0x3f7fffff < (int)((uVar2 >> 1 ^ *(uint *)(iVar1 + 0x164)) - uVar2)) {
    *(undefined4 *)(iVar1 + 0x164) = 0;
  }
  iVar1 = DAT_00873ecc;
  iVar7 = 0;
  if (0 < DAT_00873ecc) {
    puVar5 = &DAT_00874680;
    puVar4 = &DAT_00874538;
    do {
      if (*puVar5 != 0) {
        lVar6 = (ulonglong)*puVar5 + lVar3;
        lVar6 = lVar6 + (0x90 - (longlong)(int)lVar6 >> 0x3f & 0xffffffffffffff80U);
        uVar2 = *puVar4;
        *puVar5 = (uint)lVar6;
        *puVar4 = (uint)((lVar6 + (0x50 - (longlong)(int)(uint)lVar6 >> 0x3f & lVar6 * -2 + 0xa0U) &
                         0xffffffff) << 0x18) | uVar2 & 0xffffff;
      }
      iVar7 = iVar7 + 1;
      puVar5 = puVar5 + 1;
      puVar4 = puVar4 + 1;
    } while (iVar7 < iVar1);
  }
  return;
}


// 0x0462258 (0x1c98 bytes)
/* Moby 8 */

void UpdateMoby_8(MobyInstance *moby)

{
  u8 uVar1;
  f32 fVar2;
  float fVar3;
  short sVar4;
  void *pvVar5;
  void *pvVar6;
  uint uVar7;
  undefined2 uVar8;
  float fVar9;
  Vec4 *pVVar10;
  longlong lVar11;
  undefined4 *puVar12;
  byte bVar17;
  undefined1 uVar18;
  short sVar16;
  int iVar13;
  int iVar14;
  Spline *pSVar15;
  longlong lVar19;
  uint *puVar21;
  longlong lVar20;
  uint *puVar22;
  ulonglong uVar23;
  ulonglong uVar24;
  ulonglong uVar25;
  short *psVar26;
  double dVar27;
  double extraout_f1;
  double extraout_f1_00;
  double extraout_f1_01;
  double extraout_f1_02;
  double dVar28;
  undefined8 uVar29;
  double dVar30;
  double dVar31;
  undefined8 uVar32;
  double dVar33;
  undefined8 uVar34;
  GPiece<16> auVar35;
  GPiece<16> auVar36;
  GPiece<16> auVar37;
  GPiece<16> auVar38;
  undefined4 in_vr31_32_0;
  undefined4 in_vr31_32_1;
  undefined4 in_vr31_32_2;
  undefined4 in_vr31_32_3;
  float fVar39;
  float local_fc;
  float local_f8;
  undefined4 local_d0;
  undefined4 local_cc;
  undefined4 local_c8;
  float local_b0;
  float local_ac;
  float local_a8;
  float local_a0;
  float local_9c;
  float local_98;
  f32 local_94;
  undefined4 local_90;
  float local_8c;
  undefined4 local_88;
  undefined4 local_84;
  longlong local_80;
  
  lVar19 = (longlong)(int)moby;
  uVar24 = ZEXT48(&stack0x00000000);
  lVar11 = uVar24 - 0x70;
  puVar12 = (undefined4 *)lVar11;
  puVar12[3] = in_vr31_32_3;
  puVar12[2] = in_vr31_32_2;
  puVar12[1] = in_vr31_32_1;
  *puVar12 = in_vr31_32_0;
  pvVar5 = moby->pVar;
  uVar25 = ZEXT48(pvVar5);
  if (*(char *)((int)pvVar5 + 0x2e) == '\x02') {
    *(undefined4 *)((int)pvVar5 + 0x20c) = 0;
    DeleteMoby(moby);
    return;
  }
  if (moby->state == '\b') {
    *(float *)((int)pvVar5 + 0x164) = *(float *)((int)pvVar5 + 0x164) + 0.5;
    lVar11 = FastDoubleToInt();
    uVar7 = (int)*(uint *)((int)pvVar5 + 0x164) >> 0x1f;
    if (0x3f7fffff < (int)((uVar7 >> 1 ^ *(uint *)((int)pvVar5 + 0x164)) - uVar7)) {
      *(undefined4 *)((int)pvVar5 + 0x164) = 0;
    }
    iVar13 = DAT_00873ecc;
    iVar14 = 0;
    if (0 < DAT_00873ecc) {
      puVar21 = &DAT_00874680;
      puVar22 = &DAT_00874538;
      do {
        if (*puVar21 != 0) {
          lVar19 = (ulonglong)*puVar21 + lVar11;
          lVar19 = lVar19 + (0x90 - (longlong)(int)lVar19 >> 0x3f & 0xffffffffffffff80U);
          uVar7 = *puVar22;
          *puVar21 = (uint)lVar19;
          *puVar22 = (uint)((lVar19 + (0x50 - (longlong)(int)(uint)lVar19 >> 0x3f &
                                      lVar19 * -2 + 0xa0U) & 0xffffffff) << 0x18) | uVar7 & 0xffffff
          ;
        }
        iVar14 = iVar14 + 1;
        puVar21 = puVar21 + 1;
        puVar22 = puVar22 + 1;
      } while (iVar14 < iVar13);
    }
    RegisterPostDraw(&PTR_M800_0046573c_0070eb08,moby);
    return;
  }
  *(undefined4 *)((int)pvVar5 + 0x20c) = 0;
  if ((moby->field43_0x70 & 2U) != 0) {
    uVar1 = moby->updateId;
    if (uVar1 == moby->animationId) {
      if (uVar1 == '\x02') {
        MB_SetAnimation(lVar19,3,0,3);
        uVar1 = moby->updateId;
      }
      if (uVar1 == '\x01') {
        MB_SetAnimation(lVar19,2,0,10);
      }
    }
  }
  dVar27 = (double)M8_00461f10(lVar19);
  bVar17 = moby->state;
  if ((bVar17 != 0) && (bVar17 < 7)) {
    fVar39 = (moby->pos).y - GameCamera.posY;
    fVar3 = (moby->pos).x - GameCamera.posX;
    fVar9 = (moby->pos).z - GameCamera.posZ;
    dVar27 = (double)SQRT(fVar9 * fVar9 + fVar3 * fVar3 + fVar39 * fVar39);
    if (dVar27 < 40.0) {
      dVar27 = (double)MB_SetZBoundsFromGround(lVar19);
    }
    *(undefined2 *)((int)pvVar5 + 0x200) = 0;
    bVar17 = moby->state;
  }
  if (4 < bVar17) {
    if (bVar17 < 8) {
      if (bVar17 < 6) {
        pvVar6 = moby->pVar;
        uVar25 = ZEXT48(pvVar6);
        MB_BobMotion
                  (DAT_00873e60,DAT_00873e64,moby,(float *)((int)pvVar6 + 0x1a0),
                   (float *)((int)pvVar6 + 0x1a4));
        MB_SwingMotion
                  ((double)DAT_00873e68,(double)DAT_00873e6c,(double)DAT_00873e70,lVar19,
                   uVar25 + 0x1a8,uVar25 + 0x1ac);
        if (moby->state == '\x01') {
          iVar13 = FastDecTimerS16(uVar25 + 0x1b4);
          dVar27 = (double)*(float *)((int)pvVar6 + 0x1b0);
          if (iVar13 != 0) {
            auVar36 = ZEXT416(0xffffffff);
            auVar36 = auVar36 | auVar36 << 0x20 | auVar36 << 0x40 | auVar36 << 0x60;
            auVar37 = vectorShiftLeftIntegerWord(auVar36,auVar36);
            auVar36 = loadVectorLeftIndexed(0x3e74,0x870000);
            auVar35 = vectorConvertFromSignedFixedPointWord(auVar36,0);
            auVar36 = loadVectorLeftIndexed(lVar11,0x4621d4);
            auVar36 = auVar36 >> 0x60 & (GPiece<16>)0xffffffff;
            auVar38 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
            auVar36 = vectorAddFloatingPoint
                                (auVar35,auVar36 | auVar36 << 0x20 | auVar36 << 0x40 |
                                         auVar36 << 0x60);
            auVar36 = vectorMultiplyAddFloatingPoint(auVar38,auVar36,auVar37);
            auVar36 = vectorConvertToSignedFixedPointWordSaturate(auVar36,0);
            auVar36 = vectorSplatHalfWord(auVar36,1);
            uVar8 = storeVectorElementHalfWordIndexed(auVar36,0x1b4,uVar25);
            *(undefined2 *)((int)pvVar6 + 0x1b4) = uVar8;
            dVar27 = (double)DAT_00873e78;
            iVar13 = MB_randInt(2);
            if (iVar13 != 0) {
              dVar27 = -dVar27;
            }
            dVar27 = (double)FastWrapRot((moby->rotation).z,(float)dVar27);
            *(float *)((int)pvVar6 + 0x1b0) = (float)dVar27;
          }
          AccelDelt((float)dVar27,DAT_00873e7c,DAT_00873e80,DAT_00873e84,
                              &(moby->rotation).z,0x870000,(float *)((int)pvVar6 + 0x1b8));
        }
        uVar34 = 0x4014000000000000;
        dVar27 = (double)M8_004617e0
                                   (0x3f847ae140000000,0x4014000000000000,0xbff0000000000000,lVar19)
        ;
        if (*(short *)((int)pvVar5 + 0x208) != 0) {
          local_90 = 0;
          local_8c = 0.0;
          MB_PathFollowToPos
                    (0x4044000000000000,uVar34,0,Splines[*(int *)((int)pvVar5 + 0x78)],lVar19 + 0x10
                     ,uVar24 - 0xc0,uVar24 - 0x90,uVar24 - 0x8c,&DAT_004621d4,0);
          *(undefined4 *)((int)pvVar5 + 0x84) = local_90;
          dVar27 = (double)local_8c;
          *(undefined2 *)((int)pvVar5 + 0x200) = 0;
          *(float *)((int)pvVar5 + 0x1cc) = local_8c;
          moby->state = '\x06';
        }
      }
      else {
        if (6 < bVar17) {
          auVar36 = ZEXT416(0xffffffff);
          auVar36 = auVar36 | auVar36 << 0x20 | auVar36 << 0x40 | auVar36 << 0x60;
          auVar37 = vectorShiftLeftIntegerWord(auVar36,auVar36);
          auVar36 = loadVectorLeftIndexed(0x3e8c,0x870000);
          auVar35 = vectorConvertFromSignedFixedPointWord(auVar36,0);
          auVar36 = loadVectorLeftIndexed(lVar11,0x4621d4);
          auVar36 = auVar36 >> 0x60 & (GPiece<16>)0xffffffff;
          auVar38 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
          auVar36 = vectorAddFloatingPoint
                              (auVar35,auVar36 | auVar36 << 0x20 | auVar36 << 0x40 | auVar36 << 0x60
                              );
          auVar36 = vectorMultiplyAddFloatingPoint(auVar38,auVar36,auVar37);
          auVar36 = vectorConvertToSignedFixedPointWordSaturate(auVar36,0);
          auVar36 = vectorSplatHalfWord(auVar36,1);
          uVar8 = storeVectorElementHalfWordIndexed(auVar36,0x1f0,uVar25);
          *(undefined2 *)((int)pvVar5 + 0x1f0) = uVar8;
          FUN_00338150(*(undefined4 *)((int)pvVar5 + 0x70));
          iVar13 = *(int *)((int)pvVar5 + 0x1d0);
          if (((iVar13 != -1) && (g_SoundChannels[iVar13].pMoby == moby)) &&
             (g_SoundChannels[iVar13].state != '\0')) {
            sound_Kill(iVar13);
          }
          *(undefined4 *)((int)pvVar5 + 0x1d0) = 0xffffffff;
          dVar33 = 0.0;
          MB_genericExplosion
                    (0,0,0x4010000000000000,0x4000000000000000,0x4022000000000000,0x3ff0000000000000
                     ,0x402e000000000000,lVar19,uVar25 + 0x40,lVar19 + 0x10,0xffffffffffffffff,1,5,2
                     ,4);
          local_94 = (moby->pos).w;
          local_a0 = (moby->pos).x - g_heroPosition.x;
          local_9c = (moby->pos).y - g_heroPosition.y;
          local_98 = 0.0;
          dVar27 = (double)MB_randRangeFloat
                                     (DAT_0071f408 * DAT_00873e90,DAT_0071f408 * DAT_00873e94);
          dVar31 = (double)SQRT(local_98 * local_98 + local_a0 * local_a0 + local_9c * local_9c);
          fVar39 = (float)(dVar27 / dVar31);
          dVar27 = dVar33;
          if (dVar33 - dVar31 < 0.0) {
            dVar27 = (double)(local_a0 * fVar39);
          }
          dVar30 = dVar33;
          if (dVar33 - dVar31 < 0.0) {
            dVar30 = (double)(local_9c * fVar39);
          }
          dVar28 = dVar33;
          if (dVar33 - dVar31 < 0.0) {
            dVar28 = (double)(local_98 * fVar39);
          }
          if (dVar31 - dVar33 < 0.0) {
            dVar27 = (double)(local_a0 * fVar39);
          }
          if (dVar31 - dVar33 < 0.0) {
            dVar30 = (double)(local_9c * fVar39);
          }
          if (dVar31 - dVar33 < 0.0) {
            dVar28 = (double)(local_98 * fVar39);
          }
          local_a0 = (float)dVar27;
          local_9c = (float)dVar30;
          local_98 = (float)dVar28;
          dVar27 = (double)MB_randRangeSigned(0x3fe6571840000000,0x3ff38c3540000000);
          MB_RotateQuatAxisAngle((float)dVar27,(float *)((int)pvVar5 + 0x1e0),&local_a0);
          dVar27 = (double)MB_randRangeFloat
                                     (DAT_0071f408 * DAT_00873e98,DAT_0071f408 * DAT_00873e9c);
          *(float *)((int)pvVar5 + 0x1e8) = (float)dVar27;
          moby->scale = moby->scale * 0.1;
          *(undefined4 *)((int)pvVar5 + 0x140) = 0x41200000;
          *(undefined4 *)((int)pvVar5 + 0x144) = 0x41200000;
          *(undefined4 *)((int)pvVar5 + 0x148) = 0x41200000;
          uVar34 = 0x3fb6571840000000;
          dVar27 = (double)MB_randRangeSigned(dVar33,0x3fb6571840000000);
          *(float *)((int)pvVar5 + 500) = (float)dVar27;
          dVar27 = (double)MB_randRangeSigned(dVar33,uVar34);
          *(float *)((int)pvVar5 + 0x1f8) = (float)dVar27;
          dVar27 = (double)MB_randRangeSigned(dVar33,uVar34);
          *(float *)((int)pvVar5 + 0x1fc) = (float)dVar27;
          uVar34 = 0x3fe921fb60000000;
          dVar31 = (double)(moby->rotation).x;
          dVar27 = (double)MB_randRangeSigned(dVar33,0x3fe921fb60000000);
          dVar27 = (double)FastWrapRot((float)dVar31,(float)dVar27);
          (moby->rotation).x = (float)dVar27;
          dVar31 = (double)(moby->rotation).y;
          dVar27 = (double)MB_randRangeSigned(dVar33,uVar34);
          dVar27 = (double)FastWrapRot((float)dVar31,(float)dVar27);
          (moby->rotation).y = (float)dVar27;
          moby->state = '\t';
          M8_00460d48(lVar19);
          return;
        }
        pvVar6 = moby->pVar;
        uVar23 = ZEXT48(pvVar6);
        MB_BobMotion
                  (DAT_00873e60,DAT_00873e64,moby,(float *)((int)pvVar6 + 0x1a0),
                   (float *)((int)pvVar6 + 0x1a4));
        MB_SwingMotion
                  ((double)DAT_00873e68,(double)DAT_00873e6c,(double)DAT_00873e70,lVar19,
                   uVar23 + 0x1a8,uVar23 + 0x1ac);
        if (moby->state == '\x01') {
          iVar13 = FastDecTimerS16(uVar23 + 0x1b4);
          dVar27 = (double)*(float *)((int)pvVar6 + 0x1b0);
          if (iVar13 != 0) {
            auVar36 = ZEXT416(0xffffffff);
            auVar36 = auVar36 | auVar36 << 0x20 | auVar36 << 0x40 | auVar36 << 0x60;
            auVar37 = vectorShiftLeftIntegerWord(auVar36,auVar36);
            auVar36 = loadVectorLeftIndexed(0x3e74,0x870000);
            auVar35 = vectorConvertFromSignedFixedPointWord(auVar36,0);
            auVar36 = loadVectorLeftIndexed(lVar11,0x4621d4);
            auVar36 = auVar36 >> 0x60 & (GPiece<16>)0xffffffff;
            auVar38 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
            auVar36 = vectorAddFloatingPoint
                                (auVar35,auVar36 | auVar36 << 0x20 | auVar36 << 0x40 |
                                         auVar36 << 0x60);
            auVar36 = vectorMultiplyAddFloatingPoint(auVar38,auVar36,auVar37);
            auVar36 = vectorConvertToSignedFixedPointWordSaturate(auVar36,0);
            auVar36 = vectorSplatHalfWord(auVar36,1);
            uVar8 = storeVectorElementHalfWordIndexed(auVar36,0x1b4,uVar23);
            *(undefined2 *)((int)pvVar6 + 0x1b4) = uVar8;
            dVar27 = (double)DAT_00873e78;
            iVar13 = MB_randInt(2);
            if (iVar13 != 0) {
              dVar27 = -dVar27;
            }
            dVar27 = (double)FastWrapRot((moby->rotation).z,(float)dVar27);
            *(float *)((int)pvVar6 + 0x1b0) = (float)dVar27;
          }
          AccelDelt((float)dVar27,DAT_00873e7c,DAT_00873e80,DAT_00873e84,
                              &(moby->rotation).z,0x870000,(float *)((int)pvVar6 + 0x1b8));
        }
        dVar31 = 0.0;
        pSVar15 = Splines[*(int *)((int)pvVar5 + 0x78)];
        dVar27 = dVar31;
        for (iVar13 = *(int *)((int)pvVar5 + 0x84); 0 < iVar13; iVar13 = iVar13 + -1) {
          pVVar10 = pSVar15->points;
          pSVar15 = (Spline *)pSVar15->points;
          dVar27 = (double)(float)(dVar27 + (double)pVVar10->w);
        }
        lVar11 = uVar24 - 0xb0;
        local_88 = 0;
        lVar20 = ((ulonglong)*(uint *)((int)pvVar5 + 0x74) & 0x3fffffff) << 2;
        local_84 = 0;
        MB_PathMoveDist
                  ((double)(((float)(dVar27 + (double)*(float *)((int)pvVar5 + 0x1cc)) /
                            *(float *)((int)pvVar5 + 0x16c)) * *(float *)((int)pvVar5 + 400)),
                   *(undefined4 *)((int)Splines + (int)lVar20),lVar11,uVar24 - 0x88,uVar24 - 0x84,
                   lVar20,*(undefined2 *)((int)pvVar5 + 0x8a));
        dVar27 = 0.004999999888241291;
        iVar13 = (int)lVar11;
        AccelDelt(local_b0,0.005,DAT_00873e5c,(float)dVar31,&(moby->pos).x,iVar13,
                            (float *)((int)pvVar5 + 0x194));
        AccelDelt(local_ac,(float)dVar27,DAT_00873e5c,(float)dVar31,&(moby->pos).y,iVar13,
                            (float *)((int)pvVar5 + 0x198));
        fVar39 = AccelDelt(local_a8,(float)dVar27,DAT_00873e5c,(float)dVar31,
                                     &(moby->pos).z,iVar13,(float *)((int)pvVar5 + 0x19c));
        M8_00460fd0((double)fVar39,lVar19,0);
        fVar39 = (moby->pos).y - local_ac;
        fVar3 = (moby->pos).x - local_b0;
        fVar9 = (moby->pos).z - local_a8;
        if (SQRT(fVar9 * fVar9 + fVar3 * fVar3 + fVar39 * fVar39) < 0.5) {
          moby->state = '\x01';
        }
        lVar11 = uVar24 - 0xb0;
        MB_PathMoveDist
                  (dVar31,Splines[*(int *)((int)pvVar5 + 0x78)],lVar11,uVar25 + 0x84,uVar25 + 0x1cc)
        ;
        iVar13 = (int)lVar11;
        AccelDelt(local_b0,DAT_00873e58,DAT_00873e5c,(float)dVar31,
                            (float *)((int)pvVar5 + 0x170),iVar13,(float *)((int)pvVar5 + 0x180));
        AccelDelt(local_ac,DAT_00873e58,DAT_00873e5c,(float)dVar31,
                            (float *)((int)pvVar5 + 0x174),iVar13,(float *)((int)pvVar5 + 0x184));
        fVar39 = AccelDelt(local_a8,DAT_00873e58,DAT_00873e5c,(float)dVar31,
                                     (float *)((int)pvVar5 + 0x178),iVar13,
                                     (float *)((int)pvVar5 + 0x188));
        dVar27 = (double)fVar39;
      }
    }
    else if (bVar17 == 9) {
      (moby->pos).x = (moby->pos).x + *(float *)((int)pvVar5 + 0x1e0);
      (moby->pos).y = (moby->pos).y + *(float *)((int)pvVar5 + 0x1e4);
      (moby->pos).z = (moby->pos).z + *(float *)((int)pvVar5 + 0x1e8);
      fVar9 = DAT_0071f408;
      fVar3 = DAT_0071f408 * DAT_00873ea8;
      fVar39 = *(float *)((int)pvVar5 + 0x1e8);
      if (fVar3 < ABS(*(float *)((int)pvVar5 + 0x1e0))) {
        *(float *)((int)pvVar5 + 0x1e0) =
             *(float *)((int)pvVar5 + 0x1e0) * ((DAT_00873ea4 - 1.0) * DAT_0071f408 + 1.0);
      }
      if (fVar3 < ABS(*(float *)((int)pvVar5 + 0x1e4))) {
        *(float *)((int)pvVar5 + 0x1e4) =
             *(float *)((int)pvVar5 + 0x1e4) * ((DAT_00873ea4 - 1.0) * fVar9 + 1.0);
      }
      if (0 < *(int *)((int)pvVar5 + 0x1e8)) {
        fVar39 = fVar39 * ((DAT_00873ea4 - 1.0) * fVar9 + 1.0);
      }
      *(float *)((int)pvVar5 + 0x1e8) = -(DAT_0071f40c * DAT_00873ea0 - fVar39);
      dVar27 = (double)FastWrapRot((moby->rotation).z,*(float *)((int)pvVar5 + 0x1fc));
      (moby->rotation).z = (float)dVar27;
      *(undefined4 *)((int)pvVar5 + 0x140) = 0x41200000;
      *(undefined4 *)((int)pvVar5 + 0x144) = 0x41200000;
      *(undefined4 *)((int)pvVar5 + 0x148) = 0x41200000;
      fVar2 = (moby->pos).x;
      uVar7 = (int)fVar2 >> 0x1f;
      uVar34 = 0x4000000000000000;
      iVar13 = (uVar7 >> 1 ^ (uint)fVar2) - uVar7;
      if ((((0x3fffffff < iVar13) && (iVar13 < 0x447f4001)) &&
          (fVar2 = (moby->pos).y, uVar7 = (int)fVar2 >> 0x1f,
          iVar13 = (uVar7 >> 1 ^ (uint)fVar2) - uVar7, iVar13 < 0x447f4001 && 0x3fffffff < iVar13))
         && ((fVar2 = (moby->pos).z, uVar7 = (int)fVar2 >> 0x1f,
             iVar13 = (uVar7 >> 1 ^ (uint)fVar2) - uVar7, 0x3fffffff < iVar13 &&
             (iVar13 < 0x447f4001)))) {
        iVar13 = FastDecTimerS16(uVar25 + 0x1f0);
        if (iVar13 == 0) {
          lVar11 = lVar19 + 0x10;
          iVar13 = CollSphere(0x3fe0000000000000,lVar11,&DAT_004621d4,0,lVar19);
          if (iVar13 == 0) {
            dVar27 = (double)animationSpeed;
            uVar34 = 0x40ed4c0000000000;
            local_80 = (longlong)(int)(dVar27 * 20.5);
            MB_randRange
                      (local_80,dVar27,0x40ed4c0000000000,(int)(dVar27 * 10.5),(int)(dVar27 * 20.5))
            ;
            SpawnPart_21(uVar34,lVar11,&DAT_00a15d30,0x4f007fff,0x1fffffff);
            dVar31 = 40000.0;
            iVar13 = 0;
            dVar27 = 100000.0;
            uVar32 = 0x3f999999a0000000;
            uVar34 = 0x3ff0000000000000;
            auVar36 = loadVectorLeftIndexed(0x7c,0x4621d4);
            auVar36 = auVar36 >> 0x60 & (GPiece<16>)0xffffffff;
            auVar36 = auVar36 | auVar36 << 0x20 | auVar36 << 0x40 | auVar36 << 0x60;
            do {
              MB_randInt(6);
              MB_randInt(2);
              uVar29 = MB_randRangeFloat((float)dVar31,(float)dVar27);
              MB_randRange(0x30,0xff);
              uVar29 = SpawnPart_23(uVar32,uVar34,uVar34,uVar29,lVar11);
              iVar14 = (int)uVar29;
              if (iVar14 != 0) {
                auVar35 = ZEXT416(0xffffffff);
                auVar35 = auVar35 | auVar35 << 0x20 | auVar35 << 0x40 | auVar35 << 0x60;
                auVar35 = vectorShiftLeftIntegerWord(auVar35,auVar35);
                *(undefined1 *)(iVar14 + 3) = 0x44;
                auVar37 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
                auVar35 = vectorMultiplyAddFloatingPoint(auVar37,auVar36,auVar35);
                auVar35 = vectorConvertToSignedFixedPointWordSaturate(auVar35,0);
                auVar37 = vectorSplatHalfWord(auVar35,1);
                auVar35 = auVar35 >> 0x60 & (GPiece<16>)0xff;
                uVar8 = storeVectorElementHalfWordIndexed(auVar37,10,uVar29);
                *(undefined2 *)(iVar14 + 10) = uVar8;
                *(undefined4 *)(iVar14 + 0x24) = 2;
                *(undefined1 *)(iVar14 + 0x2a) = 0x60;
                uVar18 = storeVectorElementByteIndexed
                                   (auVar35 | auVar35 << 8 | auVar35 << 0x10 | auVar35 << 0x18 |
                                    auVar35 << 0x20 | auVar35 << 0x28 | auVar35 << 0x30 |
                                    auVar35 << 0x38 | auVar35 << 0x40 | auVar35 << 0x48 |
                                    auVar35 << 0x50 | auVar35 << 0x58 | auVar35 << 0x60 |
                                    auVar35 << 0x68 | auVar35 << 0x70 | auVar35 << 0x78,0x2b,uVar29)
                ;
                *(undefined1 *)(iVar14 + 0x2b) = uVar18;
              }
              iVar13 = iVar13 + 1;
            } while (iVar13 < 2);
            M8_00460d48(lVar19);
            return;
          }
        }
        MB_genericExplosion
                  (uVar34,0x3ff0000000000000,uVar34,0x3ff0000000000000,0x4022000000000000,
                   0x3ff0000000000000,0x402e000000000000,lVar19,uVar25 + 0x40,lVar19 + 0x10,5,
                   0xffffffffffffffff,5,2,4);
        DeleteMoby(moby);
        return;
      }
      DeleteMoby(moby);
      return;
    }
    goto LAB_00463dd8;
  }
  if (bVar17 < 2) {
    if (bVar17 == 0) {
      iVar13 = MB_GetPvarsIfMobyHasThem(moby);
      *(undefined1 *)(iVar13 + 0xe) = 1;
      if (*(short *)((int)pvVar5 + 0x1b6) == 1) {
        moby->updateDistance = -1;
        moby->collision = (ushort *)0x0;
        moby->state = '\b';
        moby->modeBits =
             moby->modeBits &
             (MIRROR|CAN_BE_DAMAGED|HIDE_BACKFACES|DISABLE_Z_WRITE|DRAW_SHADOW|
              DRAW_TRANSPARENT_WEIRD|LOCK_ROTATION|NO_DRAW|UNK_40|HAS_SPECIAL_VARS|HAS_GLOW|
              TRANSPARENT|NO_POST_UPDATE|NO_UPDATE|DISABLED) | (UNK_40|DISABLED);
        uVar18 = FastDoubleToInt(0x4031000000000000);
        *(undefined1 *)((int)pvVar5 + 0x58) = uVar18;
        uVar18 = FastDoubleToInt(0x4018000000000000);
        *(undefined1 *)((int)pvVar5 + 0x5a) = uVar18;
        psVar26 = (short *)(&g_MobyGroups)[(byte)moby->group];
        if (psVar26 == (short *)0x0) {
          sVar16 = 0;
        }
        else {
          sVar16 = 0;
          do {
            sVar4 = *psVar26;
            sVar16 = sVar16 + 1;
            psVar26 = psVar26 + 1;
          } while (-1 < sVar4);
        }
        *(short *)((int)pvVar5 + 0x20a) = sVar16;
        return;
      }
      if (*(int *)((int)pvVar5 + 0x74) == -1) {
        DeleteMoby(moby);
        return;
      }
      if (Splines[*(int *)((int)pvVar5 + 0x74)]->cnt == 0) {
        DeleteMoby(moby);
        return;
      }
      if (*(int *)((int)pvVar5 + 0x78) == -1) {
        DeleteMoby(moby);
        return;
      }
      if (Splines[*(int *)((int)pvVar5 + 0x78)]->cnt == 0) {
        DeleteMoby(moby);
        return;
      }
      if (*(int *)((int)pvVar5 + 0x70) < 0) {
        DeleteMoby(moby);
        return;
      }
      if (*(int *)((int)pvVar5 + 0x204) == -1) {
        DeleteMoby(moby);
        return;
      }
      if (Splines[*(int *)((int)pvVar5 + 0x204)]->cnt == 0) {
        DeleteMoby(moby);
        return;
      }
      moby->shadow = ' ';
      *(undefined1 *)((int)pvVar5 + 0x28) = 3;
      *(undefined4 *)((int)pvVar5 + 0x20) = 0x40800000;
      *(undefined2 *)((int)pvVar5 + 0x24) = 4;
      pSVar15 = Splines[*(int *)((int)pvVar5 + 0x74)];
      (moby->pos).x = pSVar15->points[0].x;
      (moby->pos).y = pSVar15->points[0].y;
      (moby->pos).z = pSVar15->points[0].z;
      iVar13 = *(int *)((int)pvVar5 + 0x78);
      (moby->pos).w = pSVar15->points[0].w;
      pSVar15 = Splines[iVar13];
      *(float *)((int)pvVar5 + 0x170) = pSVar15->points[0].x;
      *(float *)((int)pvVar5 + 0x174) = pSVar15->points[0].y;
      *(float *)((int)pvVar5 + 0x178) = pSVar15->points[0].z;
      *(float *)((int)pvVar5 + 0x17c) = pSVar15->points[0].w;
      M8_00461bc8(lVar19);
      *(undefined4 *)((int)pvVar5 + 0x188) = 0;
      *(undefined4 *)((int)pvVar5 + 0x184) = 0;
      *(undefined4 *)((int)pvVar5 + 0x180) = 0;
      *(undefined4 *)((int)pvVar5 + 0x19c) = 0;
      *(undefined4 *)((int)pvVar5 + 0x198) = 0;
      *(undefined4 *)((int)pvVar5 + 0x194) = 0;
      *(undefined4 *)((int)pvVar5 + 0x21c) = 0xbf800000;
      *(undefined4 *)((int)pvVar5 + 0x160) = 0;
      *(undefined4 *)((int)pvVar5 + 0x20c) = 0;
      *(undefined2 *)((int)pvVar5 + 0x88) = 1;
      *(undefined4 *)((int)pvVar5 + 0x164) = 0;
      *(undefined4 *)((int)pvVar5 + 0x1a0) = 0;
      *(undefined4 *)((int)pvVar5 + 0x1a4) = 0;
      *(undefined4 *)((int)pvVar5 + 0x1a8) = 0;
      *(undefined4 *)((int)pvVar5 + 0x1ac) = 0;
      fVar2 = (moby->rotation).z;
      *(undefined2 *)((int)pvVar5 + 0x1b4) = 0;
      *(f32 *)((int)pvVar5 + 0x1b0) = fVar2;
      *(undefined4 *)((int)pvVar5 + 0x1b8) = 0;
      FastMemSet(uVar25 + 0xe0,0,0x40);
      FastMemSet(uVar25 + 0x120,0,0x40);
      AttachManipulator(moby,0,(int)(uVar25 + 0xe0));
      dVar27 = (double)AttachManipulator(moby,1,(int)(uVar25 + 0x120));
      *(undefined4 *)((int)pvVar5 + 0x1c4) = 0;
      *(undefined4 *)((int)pvVar5 + 0x1c8) = 0;
      *(undefined4 *)((int)pvVar5 + 0x18c) = 0;
      moby->state = '\x01';
      moby->setByGroup = '\0';
      goto LAB_00463dd8;
    }
    moby->field60_0x90 = DAT_00873ebc << 8 | DAT_00873eb8 | DAT_00873ec0 << 0x10 | 0xff000000;
    iVar13 = FUN_00338438(*(undefined4 *)((int)pvVar5 + 0x70));
    if (iVar13 != 0) {
      auVar36 = ZEXT416(0xffffffff);
      auVar36 = auVar36 | auVar36 << 0x20 | auVar36 << 0x40 | auVar36 << 0x60;
      moby->state = '\x03';
      auVar37 = vectorShiftLeftIntegerWord(auVar36,auVar36);
      auVar36 = loadVectorLeftIndexed(0x3e88,0x870000);
      auVar35 = vectorConvertFromSignedFixedPointWord(auVar36,0);
      auVar36 = loadVectorLeftIndexed(lVar11,0x4621d4);
      auVar36 = auVar36 >> 0x60 & (GPiece<16>)0xffffffff;
      auVar38 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
      auVar36 = vectorAddFloatingPoint
                          (auVar35,auVar36 | auVar36 << 0x20 | auVar36 << 0x40 | auVar36 << 0x60);
      auVar36 = vectorMultiplyAddFloatingPoint(auVar38,auVar36,auVar37);
      auVar36 = vectorConvertToSignedFixedPointWordSaturate(auVar36,0);
      auVar36 = vectorSplatHalfWord(auVar36,1);
      uVar8 = storeVectorElementHalfWordIndexed(auVar36,0x1f2,uVar25);
      *(undefined2 *)((int)pvVar5 + 0x1f2) = uVar8;
    }
    *(undefined2 *)((int)pvVar5 + 0x200) = 1;
    *(undefined2 *)((int)pvVar5 + 0x202) = 0;
    iVar13 = M8_00460fd0(lVar19,1);
    M8_00461a90(lVar19);
    M8_00461938(lVar19);
    pvVar6 = moby->pVar;
    uVar23 = ZEXT48(pvVar6);
    MB_BobMotion
              (DAT_00873e60,DAT_00873e64,moby,(float *)((int)pvVar6 + 0x1a0),
               (float *)((int)pvVar6 + 0x1a4));
    dVar27 = (double)MB_SwingMotion
                               ((double)DAT_00873e68,(double)DAT_00873e6c,(double)DAT_00873e70,
                                lVar19,uVar23 + 0x1a8,uVar23 + 0x1ac);
    if (moby->state == '\x01') {
      iVar14 = FastDecTimerS16(uVar23 + 0x1b4);
      dVar27 = (double)*(float *)((int)pvVar6 + 0x1b0);
      if (iVar14 != 0) {
        auVar36 = ZEXT416(0xffffffff);
        auVar36 = auVar36 | auVar36 << 0x20 | auVar36 << 0x40 | auVar36 << 0x60;
        auVar37 = vectorShiftLeftIntegerWord(auVar36,auVar36);
        auVar36 = loadVectorLeftIndexed(0x3e74,0x870000);
        auVar35 = vectorConvertFromSignedFixedPointWord(auVar36,0);
        auVar36 = loadVectorLeftIndexed(lVar11,0x4621d4);
        auVar36 = auVar36 >> 0x60 & (GPiece<16>)0xffffffff;
        auVar38 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
        auVar36 = vectorAddFloatingPoint
                            (auVar35,auVar36 | auVar36 << 0x20 | auVar36 << 0x40 | auVar36 << 0x60);
        auVar36 = vectorMultiplyAddFloatingPoint(auVar38,auVar36,auVar37);
        auVar36 = vectorConvertToSignedFixedPointWordSaturate(auVar36,0);
        auVar36 = vectorSplatHalfWord(auVar36,1);
        uVar8 = storeVectorElementHalfWordIndexed(auVar36,0x1b4,uVar23);
        *(undefined2 *)((int)pvVar6 + 0x1b4) = uVar8;
        dVar27 = (double)DAT_00873e78;
        iVar14 = MB_randInt(2);
        if (iVar14 != 0) {
          dVar27 = -dVar27;
        }
        dVar27 = (double)FastWrapRot((moby->rotation).z,(float)dVar27);
        *(float *)((int)pvVar6 + 0x1b0) = (float)dVar27;
      }
      fVar39 = AccelDelt((float)dVar27,DAT_00873e7c,DAT_00873e80,DAT_00873e84,
                                   &(moby->rotation).z,0x870000,(float *)((int)pvVar6 + 0x1b8));
      dVar27 = (double)fVar39;
    }
    if (iVar13 == 0) goto LAB_00463dd8;
    STUB_00065470((double)(*(float *)((int)pvVar5 + 0x214) * 0.8),uVar24 - 0x110);
    dVar27 = 0.47999998927116394;
    STUB_00065470((double)(*(float *)((int)pvVar5 + 0x214) * 0.48),uVar24 - 0x120);
    iVar13 = CollMobySphere
                       ((double)(float)((double)*(float *)((int)pvVar5 + 0x214) * dVar27),
                        uVar24 - 0x120);
    dVar27 = extraout_f1;
    if (((iVar13 == 0) &&
        (iVar13 = CollMobySphere
                            ((double)(*(float *)((int)pvVar5 + 0x214) * 0.9),uVar24 - 0x110,
                             &DAT_004621d4,0,0,0), dVar27 = extraout_f1_00, iVar13 == 0)) ||
       ((g_CollOutput.pMoby != g_heroMobyPtr &&
        ((g_CollOutput.pMoby == (MobyInstance *)0x0 ||
         (((g_CollOutput.pMoby)->oClass != DECOY &&
          ((g_CollOutput.pMoby)->oClass != MORPH_O_RAY_CHICKEN)))))))) goto LAB_00463dd8;
    *(MobyInstance **)((int)pvVar5 + 0x18c) = g_CollOutput.pMoby;
  }
  else if (2 < bVar17) {
    if (bVar17 < 4) {
      iVar13 = *(int *)((int)pvVar5 + 0x18c);
      moby->field60_0x90 = DAT_00873ec8 << 8 | DAT_00873ec4 | DAT_010ccee0 << 0x10 | 0xff000000;
      if (iVar13 == 0) {
        *(undefined4 *)((int)pvVar5 + 0x80) = 0;
        *(undefined4 *)((int)pvVar5 + 0x8c) = 0;
        *(undefined2 *)((int)pvVar5 + 0x208) = 0;
        moby->state = '\x04';
      }
      else {
        *(undefined2 *)((int)pvVar5 + 0x200) = 1;
        *(undefined2 *)((int)pvVar5 + 0x202) = 1;
        M8_00460fd0(lVar19,1);
        iVar13 = *(int *)((int)pvVar5 + 0x18c);
        fVar39 = *(float *)(iVar13 + 0x10);
        local_fc = *(float *)(iVar13 + 0x14);
        fVar3 = *(float *)(iVar13 + 0x18);
        dVar27 = 0.5;
        iVar13 = CollLine(uVar24 - 0x100,uVar24 - 0xf0,0x12,0,0);
        if (iVar13 == 0) {
          local_f8 = (float)((double)(fVar3 + 0.5) - dVar27);
        }
        else {
          local_fc = g_CollOutput.ip.y;
          local_f8 = g_CollOutput.ip.z;
          fVar39 = g_CollOutput.ip.x;
        }
        puVar12 = &DAT_004621d4;
        dVar33 = 0.003000000026077032;
        dVar31 = 0.20000000298023224;
        dVar27 = 0.0;
        AccelDelt(fVar39,0.003,0.2,0.0,(float *)((int)pvVar5 + 0x170),0x4621d4,
                            (float *)((int)pvVar5 + 0x180));
        AccelDelt(local_fc,(float)dVar33,(float)dVar31,(float)dVar27,
                            (float *)((int)pvVar5 + 0x174),(int)puVar12,
                            (float *)((int)pvVar5 + 0x184));
        fVar39 = AccelDelt(local_f8,(float)dVar33,(float)dVar31,(float)dVar27,
                                     (float *)((int)pvVar5 + 0x178),(int)puVar12,
                                     (float *)((int)pvVar5 + 0x188));
        M8_00461938((double)fVar39,lVar19);
        if ((0x7f < *(byte *)(*(int *)((int)pvVar5 + 0x18c) + 0x20)) ||
           (iVar13 = FastDecTimerS16(uVar25 + 0x1f2), iVar13 != 0)) {
          *(undefined4 *)((int)pvVar5 + 0x80) = 0;
          *(undefined4 *)((int)pvVar5 + 0x8c) = 0;
          *(undefined2 *)((int)pvVar5 + 0x208) = 0;
          moby->state = '\x04';
        }
      }
    }
    moby->field60_0x90 = DAT_00873ec8 << 8 | DAT_00873ec4 | DAT_010ccee0 << 0x10 | 0xff000000;
    FastIntToDouble(moby->drawDistance);
    iVar13 = FastCheckBsphereInView(uVar24 - 0xe0);
    dVar27 = extraout_f1_01;
    if (-1 < iVar13) {
      GetBonePosition(lVar19,2,uVar24 - 0xd0);
      *(undefined4 *)((int)pvVar5 + 0x1d4) = local_d0;
      *(undefined4 *)((int)pvVar5 + 0x1d8) = local_cc;
      pvVar6 = moby->pVar;
      uVar24 = ZEXT48(pvVar6);
      *(undefined4 *)((int)pvVar5 + 0x1dc) = local_c8;
      *(uint *)((int)pvVar5 + 0x20c) = *(uint *)((int)pvVar5 + 0x20c) | 8;
      MB_BobMotion
                (DAT_00873e60,DAT_00873e64,moby,(float *)((int)pvVar6 + 0x1a0),
                 (float *)((int)pvVar6 + 0x1a4));
      dVar27 = (double)MB_SwingMotion
                                 ((double)DAT_00873e68,(double)DAT_00873e6c,(double)DAT_00873e70,
                                  lVar19,uVar24 + 0x1a8,uVar24 + 0x1ac);
      if (moby->state == '\x01') {
        iVar13 = FastDecTimerS16(uVar24 + 0x1b4);
        dVar27 = (double)*(float *)((int)pvVar6 + 0x1b0);
        if (iVar13 != 0) {
          auVar36 = ZEXT416(0xffffffff);
          auVar36 = auVar36 | auVar36 << 0x20 | auVar36 << 0x40 | auVar36 << 0x60;
          auVar37 = vectorShiftLeftIntegerWord(auVar36,auVar36);
          auVar36 = loadVectorLeftIndexed(0x3e74,0x870000);
          auVar35 = vectorConvertFromSignedFixedPointWord(auVar36,0);
          auVar36 = loadVectorLeftIndexed(lVar11,0x4621d4);
          auVar36 = auVar36 >> 0x60 & (GPiece<16>)0xffffffff;
          auVar38 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
          auVar36 = vectorAddFloatingPoint
                              (auVar35,auVar36 | auVar36 << 0x20 | auVar36 << 0x40 | auVar36 << 0x60
                              );
          auVar36 = vectorMultiplyAddFloatingPoint(auVar38,auVar36,auVar37);
          auVar36 = vectorConvertToSignedFixedPointWordSaturate(auVar36,0);
          auVar36 = vectorSplatHalfWord(auVar36,1);
          uVar8 = storeVectorElementHalfWordIndexed(auVar36,0x1b4,uVar24);
          *(undefined2 *)((int)pvVar6 + 0x1b4) = uVar8;
          dVar27 = (double)DAT_00873e78;
          iVar13 = MB_randInt(2);
          if (iVar13 != 0) {
            dVar27 = -dVar27;
          }
          dVar27 = (double)FastWrapRot((moby->rotation).z,(float)dVar27);
          *(float *)((int)pvVar6 + 0x1b0) = (float)dVar27;
        }
        fVar39 = AccelDelt((float)dVar27,DAT_00873e7c,DAT_00873e80,DAT_00873e84,
                                     &(moby->rotation).z,0x870000,(float *)((int)pvVar6 + 0x1b8));
        dVar27 = (double)fVar39;
      }
    }
    if (moby->state == '\x04') {
      if (moby->animationId == '\0') {
        MB_SetAnimation(dVar27,lVar19,2,0,5);
      }
      M8_004617e0
                ((double)DAT_00873eb0,(double)DAT_00873eac,0x3ff0000000000000,lVar19);
      dVar27 = 0.0;
      if ((*(int *)((int)pvVar5 + 0x1c0) != 0) || (*(int *)((int)pvVar5 + 0x1bc) != 0)) {
        puVar12 = &DAT_004621d4;
        dVar33 = 0.004000000189989805;
        dVar31 = 0.20000000298023224;
        AccelDelt(0.0,0.004,0.2,0.0,(float *)((int)pvVar5 + 0x1c0),0x4621d4,
                            (float *)((int)pvVar5 + 0x1c8));
        AccelDelt((float)dVar27,(float)dVar33,(float)dVar31,(float)dVar27,
                            (float *)((int)pvVar5 + 0x1bc),(int)puVar12,
                            (float *)((int)pvVar5 + 0x1c4));
        if ((*(uint *)((int)pvVar5 + 0x1c0) & 0x7fffffff) < 0x38d1b717) {
          *(undefined4 *)((int)pvVar5 + 0x1c0) = 0;
        }
        dVar31 = (double)*(float *)((int)pvVar5 + 0x1bc);
        if ((*(uint *)((int)pvVar5 + 0x1bc) & 0x7fffffff) < 0x38d1b717) {
          *(undefined4 *)((int)pvVar5 + 0x1bc) = 0;
          dVar31 = dVar27;
        }
        FastQuaternionToEuler(dVar31,uVar25 + 0xf0,2);
        FastQuaternionToEuler((double)*(float *)((int)pvVar5 + 0x1c0),uVar25 + 0x130,1);
      }
      iVar13 = FUN_003381c0(*(undefined4 *)((int)pvVar5 + 0x70));
      dVar27 = extraout_f1_02;
      if (iVar13 != 0) {
        pSVar15 = Splines[*(int *)((int)pvVar5 + 0x204)];
        moby->state = '\x05';
        iVar13 = pSVar15->cnt;
        *(int *)((int)pvVar5 + 0x80) = iVar13 + -2;
        fVar39 = pSVar15->points[iVar13 + -2].w;
        *(undefined2 *)((int)pvVar5 + 0x208) = 0;
        *(float *)((int)pvVar5 + 0x8c) = fVar39;
        M8_004617e0
                  (0x3f847ae140000000,0x4014000000000000,0xbff0000000000000,lVar19);
        local_80 = (longlong)(int)(animationSpeed * 10.5);
        dVar27 = (double)MB_SetAnimation(lVar19,0,0,(int)(animationSpeed * 10.5));
      }
    }
    goto LAB_00463dd8;
  }
  iVar13 = *(int *)((int)pvVar5 + 0x1d0);
  if (((iVar13 != -1) && (g_SoundChannels[iVar13].pMoby == moby)) &&
     (g_SoundChannels[iVar13].state != '\0')) {
    sound_Kill(iVar13);
  }
  *(undefined4 *)((int)pvVar5 + 0x1d0) = 0xffffffff;
  dVar27 = (double)FUN_00338150(*(undefined4 *)((int)pvVar5 + 0x70));
  auVar36 = ZEXT416(0xffffffff);
  auVar36 = auVar36 | auVar36 << 0x20 | auVar36 << 0x40 | auVar36 << 0x60;
  moby->state = '\x03';
  auVar37 = vectorShiftLeftIntegerWord(auVar36,auVar36);
  auVar36 = loadVectorLeftIndexed(0x3e88,0x870000);
  auVar35 = vectorConvertFromSignedFixedPointWord(auVar36,0);
  auVar36 = loadVectorLeftIndexed(lVar11,0x4621d4);
  auVar36 = auVar36 >> 0x60 & (GPiece<16>)0xffffffff;
  auVar38 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
  auVar36 = vectorAddFloatingPoint
                      (auVar35,auVar36 | auVar36 << 0x20 | auVar36 << 0x40 | auVar36 << 0x60);
  auVar36 = vectorMultiplyAddFloatingPoint(auVar38,auVar36,auVar37);
  auVar36 = vectorConvertToSignedFixedPointWordSaturate(auVar36,0);
  auVar36 = vectorSplatHalfWord(auVar36,1);
  uVar8 = storeVectorElementHalfWordIndexed(auVar36,0x1f2,uVar25);
  *(undefined2 *)((int)pvVar5 + 0x1f2) = uVar8;
LAB_00463dd8:
  bVar17 = moby->state;
  if ((bVar17 < 0x80) && (moby->animationId == '\x01')) {
    if (moby->setByGroup == '\x01') {
      MB_MistDeathEffect(dVar27,lVar19,&DAT_00a15d30,0xffff);
      bVar17 = moby->state;
    }
  }
  else {
    moby->setByGroup = '\0';
  }
  if ((bVar17 == 1) &&
     (iVar13 = IsMobyPlayingSound(moby,*(int *)((int)pvVar5 + 0x1d0)), iVar13 == 0)) {
    iVar13 = PlayMobySound(0,4,moby);
    *(int *)((int)pvVar5 + 0x1d0) = iVar13;
  }
  if (((moby->state == '\x03') || (moby->state == '\x04')) &&
     (iVar13 = IsMobyPlayingSound(moby,*(int *)((int)pvVar5 + 0x1d0)), iVar13 == 0)) {
    iVar13 = PlayMobySound(2,4,moby);
    *(int *)((int)pvVar5 + 0x1d0) = iVar13;
  }
  return;
}


