// game/update/moby58.cpp -- reconstructed from NPEA00385 EBOOT
// STATUS: NOT STARTED (raw Ghidra output)
// 6 functions, 0x2ea758-0x2ebd50
// shared update function UpdateMoby_a_lot_5; registered for oClasses 58, 59, 61, 204, 213, 214, 222, 223, 225, 226, 1006, 1438, 1447, 1449
#include "game/update/moby58.h"
#include "game/boot.h"
#include "game/collproc.h"
#include "game/debug.h"
#include "game/draw.h"
#include "game/hero.h"
#include "game/hud.h"
#include "game/mobyfunc.h"
#include "game/mobyproc.h"
#include "game/mobyutil.h"
#include "game/partupd.h"
#include "game/pause.h"
#include "game/sound.h"
#include "game/update.h"
#include "game/vendor.h"
#include "idol/fastfunc.h"

// 0x02ea758 (0x19c bytes)
MobyInstance * FUN_002ea758(f32 *param_1,longlong param_2,uint param_3,undefined4 param_4)

{
  f32 fVar1;
  uint *puVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  MobyInstance *pMVar5;
  GPiece<16> auVar6;
  GPiece<16> auVar7;
  GPiece<16> auVar8;
  
  pMVar5 = (MobyInstance *)0x0;
  uVar4 = 0x70;
  auVar7.piece<0,4>() = param_4;
  auVar7.piece<4,4>() = param_4;
  auVar7.piece<8,4>() = param_4;
  auVar7.piece<12,4>() = param_4;
  if (0 < (short)*(MOBY_OCLASSES *)
                  (&DAT_0072103a + (uint)param_2 * 0x10 + (int)(param_2 * -0xf) * -4)) {
    pMVar5 = CreateMoby
                       (*(MOBY_OCLASSES *)
                         (&DAT_0072103a + (uint)param_2 * 0x10 + (int)(param_2 * -0xf) * -4));
    if (pMVar5 != (MobyInstance *)0x0) {
      pMVar5->updateDistance = -1;
      pMVar5->enabled = '\x01';
      pMVar5->state = '\x01';
      pMVar5->setByGroup = '\0';
      puVar2 = (uint *)pMVar5->pVar;
      (pMVar5->pos).x = *param_1;
      fVar1 = param_1[1];
      pMVar5->drawDistance = 0xff;
      (pMVar5->pos).y = fVar1;
      (pMVar5->pos).z = param_1[2];
      (pMVar5->pos).w = param_1[3];
      if (param_3 == 0xffffffff) {
        param_3 = (uint)*(ushort *)(&DAT_00737d3c + (int)(param_2 << 3) * 3);
      }
      auVar6 = vectorConvertFromSignedFixedPointWord(auVar7,0);
      auVar7 = ZEXT416(0xffffffff);
      auVar7 = auVar7 | auVar7 << 0x20 | auVar7 << 0x40 | auVar7 << 0x60;
      *puVar2 = param_3;
      puVar2[2] = (uint)param_2;
      auVar8 = vectorShiftLeftIntegerWord(auVar7,auVar7);
      uVar3 = storeVectorElementWordIndexed(auVar6,0xc,ZEXT48(puVar2));
      *(undefined4 *)((uint)(puVar2 + 3) & 0xfffffffc) = uVar3;
      auVar7 = loadVectorLeftIndexed(uVar4,0x2ea750);
      auVar6 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
      auVar7 = auVar7 >> 0x60 & (GPiece<16>)0xffffffff;
      fVar1 = (pMVar5->pos).z;
      auVar7 = vectorMultiplyAddFloatingPoint
                         (auVar6,auVar7 | auVar7 << 0x20 | auVar7 << 0x40 | auVar7 << 0x60,auVar8);
      auVar7 = vectorConvertToSignedFixedPointWordSaturate(auVar7,0);
      auVar7 = auVar7 >> 0x60 & (GPiece<16>)0xffffffff;
      uVar3 = storeVectorElementWordIndexed
                        (auVar7 | auVar7 << 0x20 | auVar7 << 0x40 | auVar7 << 0x60,0x20,
                         ZEXT48(puVar2));
      *(undefined4 *)((uint)(puVar2 + 8) & 0xfffffffc) = uVar3;
      puVar2[10] = (uint)fVar1;
      UpdateMobyTransform(pMVar5);
      MB_CopyHeroLights(pMVar5);
    }
  }
  return pMVar5;
}


// shared update function, registered for oClasses 58, 59, 61, 204, 213, 214, 222, 223, 225, 226, 1006, 1438, 1447, 1449
// 0x02ea970 (0xa80 bytes)
/* Moby 58
   Moby 59
   Moby 61
   Moby 204
   Moby 213
   Moby 214
   Moby 222
   Moby 223
   Moby 225
   Moby 226
   Moby 1006
   Moby 1438
   Moby 1447
   Moby 1449 */

void UpdateMoby_58(MobyInstance *moby)

{
  longlong lVar1;
  float fVar2;
  u8 uVar3;
  f32 fVar4;
  float fVar5;
  f32 fVar6;
  float fVar7;
  float fVar8;
  int *piVar9;
  MobyClass *pMVar10;
  uint uVar11;
  undefined2 uVar12;
  undefined4 uVar13;
  ulonglong *puVar14;
  float fVar15;
  longlong lVar16;
  int iVar18;
  char cVar19;
  ulonglong uVar17;
  int arg;
  s8 sVar20;
  short sVar21;
  uint uVar22;
  ulonglong unaff_r28;
  ulonglong unaff_r29;
  ulonglong unaff_r30;
  ulonglong unaff_r31;
  ulonglong in_LR;
  double dVar23;
  double dVar24;
  double dVar25;
  double dVar26;
  ulonglong in_f30;
  ulonglong in_f31;
  double dVar27;
  double dVar28;
  GPiece<16> auVar29;
  GPiece<16> auVar30;
  GPiece<16> auVar31;
  
  lVar16 = (longlong)(int)moby;
  uVar17 = ZEXT48(&stack0x00000000);
  lVar1 = uVar17 - 0xe0;
  puVar14 = (ulonglong *)lVar1;
  *puVar14 = uVar17;
  puVar14[0x1e] = in_LR;
  puVar14[0x1a] = in_f30;
  puVar14[0x1b] = in_f31;
  puVar14[0x19] = unaff_r31;
  puVar14[0x18] = unaff_r30;
  piVar9 = (int *)moby->pVar;
  puVar14[0x17] = unaff_r29;
  puVar14[0x16] = unaff_r28;
  FastDecTimerS32(ZEXT48(piVar9) + 0x20);
  uVar3 = moby->state;
  fVar4 = (moby->pos).y;
  fVar5 = (moby->pos).z;
  fVar6 = (moby->pos).w;
  if (((uVar3 == '\x01') || (uVar3 == '\x04')) || (uVar3 == '\x03')) {
    if (SQRT((float)piVar9[6] * (float)piVar9[6] +
             (float)piVar9[4] * (float)piVar9[4] + (float)piVar9[5] * (float)piVar9[5]) != 0.0) {
      *(f32 *)(puVar14 + 0xe) = (moby->pos).x;
      *(f32 *)((int)puVar14 + 0x74) = fVar4;
      *(f32 *)((int)puVar14 + 0x7c) = fVar6;
      dVar27 = 0.5;
      *(float *)(puVar14 + 0xf) = fVar5 + 0.5;
      iVar18 = CollSphere(0x3fd99999a0000000,uVar17 - 0x70,&DAT_002ea8f4,2,0);
      if (iVar18 != 0) {
        (moby->pos).x = g_CollOutput.push.x;
        (moby->pos).y = g_CollOutput.push.y;
        dVar23 = (double)g_CollOutput.push.z;
        (moby->pos).w = g_CollOutput.push.w;
        (moby->pos).z = (float)(dVar23 - dVar27);
      }
    }
    piVar9[6] = (int)-(DAT_0071f418 * 4.9 - (float)piVar9[6]);
    fVar8 = DAT_0071f418;
    fVar5 = (moby->pos).y;
    fVar7 = (moby->pos).z;
    fVar4 = (moby->pos).w;
    *(float *)(puVar14 + 0x10) = (moby->pos).x + (float)piVar9[4];
    *(float *)((int)puVar14 + 0x84) = fVar5 + (float)piVar9[5];
    fVar5 = (float)piVar9[6];
    *(f32 *)((int)puVar14 + 0x8c) = fVar4;
    *(float *)(puVar14 + 0x11) = fVar7 + fVar5;
    piVar9[6] = (int)-(fVar8 * 4.9 - (float)piVar9[6]);
    fVar4 = (moby->pos).y;
    *(f32 *)(puVar14 + 0xe) = (moby->pos).x;
    fVar6 = (moby->pos).w;
    *(f32 *)((int)puVar14 + 0x74) = fVar4;
    *(f32 *)((int)puVar14 + 0x7c) = fVar6;
    *(float *)(puVar14 + 0xf) = (moby->pos).z + 0.1;
    iVar18 = CollLine(uVar17 - 0x70,uVar17 - 0x60,2,0,0);
    if (iVar18 == 0) {
      fVar4 = *(f32 *)((int)puVar14 + 0x84);
      (moby->pos).x = *(f32 *)(puVar14 + 0x10);
      fVar6 = *(f32 *)(puVar14 + 0x11);
      (moby->pos).y = fVar4;
      fVar4 = *(f32 *)((int)puVar14 + 0x8c);
      (moby->pos).z = fVar6;
      (moby->pos).w = fVar4;
    }
    else {
      piVar9[7] = 0;
      piVar9[6] = 0;
      piVar9[5] = 0;
      piVar9[4] = 0;
      (moby->pos).x = g_CollOutput.ip.x;
      (moby->pos).y = g_CollOutput.ip.y;
      (moby->pos).z = g_CollOutput.ip.z;
      (moby->pos).w = g_CollOutput.ip.w;
    }
  }
  fVar5 = animationSpeed;
  uVar3 = moby->state;
  if (uVar3 == '\x04') {
    fVar5 = moby->pClass->gScale;
    fVar7 = DAT_0071f408 * 0.03 * (fVar5 - moby->scale) + moby->scale;
    moby->scale = fVar7;
    if ((fVar5 - fVar7) / fVar5 < 0.01) {
      moby->scale = fVar5;
      moby->state = '\x01';
      moby->collision = moby->pClass->collision;
    }
  }
  else if (uVar3 == '\x03') {
    puVar14[0x13] = (longlong)(worldUpdateTime % 0x3c);
    auVar29 = ZEXT416(0xfffffff8);
    fVar5 = ((float)(longlong)puVar14[0x13] * 0.016666668 * 6.28318 - 3.14159) + 1.5707963;
    fVar7 = 3.1415925 - fVar5;
    if (fVar5 - (3.1415925 - fVar5) < 0.0) {
      fVar7 = fVar5;
    }
    auVar30 = loadVectorLeftIndexed(0x23,lVar16);
    auVar29 = vectorShiftRightWord
                        (auVar30,auVar29 | auVar29 << 0x20 | auVar29 << 0x40 | auVar29 << 0x60);
    auVar29 = vectorConvertFromUnsignedFixedPointWord(auVar29,0);
    fVar8 = -3.1415925 - fVar5;
    if ((-3.1415925 - fVar5) - fVar7 < 0.0) {
      fVar8 = fVar7;
    }
    auVar29 = auVar29 >> 0x60 & (GPiece<16>)0xffffffff;
    fVar5 = fVar8 * fVar8;
    uVar13 = storeVectorElementWordIndexed
                       (auVar29 | auVar29 << 0x20 | auVar29 << 0x40 | auVar29 << 0x60,0x90,lVar1);
    *(undefined4 *)(puVar14 + 0x12) = uVar13;
    fVar7 = fVar5 * fVar5 * fVar8;
    fVar2 = fVar5 * fVar7;
    iVar18 = FastDoubleToInt
                       ((double)((fVar5 * fVar2 * 2.601887e-06 +
                                 fVar2 * -0.0001980741 +
                                 fVar7 * 0.0083330255 + fVar5 * fVar8 * -0.16666657 + fVar8) * 5.0 +
                                5.0));
    puVar14[0x13] = (longlong)(iVar18 + 10);
    uVar17 = puVar14[0x13];
    puVar14[0x13] = (longlong)(int)(animationSpeed * 30.5);
    puVar14[0x13] = (longlong)(0x80 / *(int *)((int)puVar14 + 0x9c));
    Delt((float)(longlong)uVar17,(float)(longlong)puVar14[0x13],(float *)(puVar14 + 0x12))
    ;
    sVar20 = FastDoubleToInt((double)*(float *)(puVar14 + 0x12));
    moby->alpha = sVar20;
    dVar27 = (double)MB_BSphereGap(lVar16,g_heroMobyPtr);
    if ((0.0 <= dVar27) ||
       ((int)(&currentAmmoArray.field0_0x0)[piVar9[2]] <
        (int)(uint)(ushort)(&DAT_00737d3e)[piVar9[2] * 0xc])) {
      moby->state = '\x01';
    }
  }
  else if (uVar3 == '\x02') {
    dVar28 = 0.0;
    dVar23 = 24.0;
    Delt(0.0,DAT_0071f418 * 24.0,(float *)(piVar9 + 9));
    (moby->pos).z = (moby->pos).z + (float)piVar9[9];
    fVar5 = g_FrameTime;
    dVar27 = (double)DAT_0071f418;
    *(float *)((int)puVar14 + 0x94) =
         SQRT((float)piVar9[6] * (float)piVar9[6] +
              (float)piVar9[4] * (float)piVar9[4] + (float)piVar9[5] * (float)piVar9[5]);
    Delt(fVar5 * 64.0,(float)(dVar27 * dVar23),(float *)((int)puVar14 + 0x94));
    fVar5 = g_heroCGPos - (moby->pos).x;
    piVar9[4] = (int)fVar5;
    fVar7 = DAT_00969db4 - (moby->pos).y;
    piVar9[5] = (int)fVar7;
    fVar8 = DAT_00969db8 - (moby->pos).z;
    piVar9[6] = (int)fVar8;
    piVar9[7] = DAT_00969dbc;
    if (moby->scale != 0.0) {
      dVar27 = (double)*(float *)((int)puVar14 + 0x94);
      dVar23 = (double)SQRT(fVar8 * fVar8 + fVar5 * fVar5 + fVar7 * fVar7);
      if (dVar27 <= dVar23) {
        fVar2 = (float)(dVar27 / dVar23);
        pMVar10 = moby->pClass;
        dVar25 = dVar28;
        if (dVar28 - dVar23 < 0.0) {
          dVar25 = (double)(fVar7 * fVar2);
        }
        dVar26 = dVar28;
        if (dVar28 - dVar23 < 0.0) {
          dVar26 = (double)(fVar5 * fVar2);
        }
        dVar24 = dVar28;
        if (dVar28 - dVar23 < 0.0) {
          dVar24 = (double)(fVar8 * fVar2);
        }
        if (dVar23 - dVar28 < 0.0) {
          dVar25 = (double)(fVar7 * fVar2);
        }
        if (dVar23 - dVar28 < 0.0) {
          dVar26 = (double)(fVar5 * fVar2);
        }
        if (dVar23 - dVar28 < 0.0) {
          dVar24 = (double)(fVar8 * fVar2);
        }
        piVar9[5] = (int)(float)dVar25;
        piVar9[4] = (int)(float)dVar26;
        piVar9[6] = (int)(float)dVar24;
        fVar5 = (float)((double)(moby->pos).x + dVar26);
        (moby->pos).x = fVar5;
        fVar2 = (moby->pos).y + (float)piVar9[5];
        (moby->pos).y = fVar2;
        fVar15 = (moby->pos).z + (float)piVar9[6];
        (moby->pos).z = fVar15;
        fVar2 = fVar2 - DAT_00969db4;
        fVar5 = fVar5 - g_heroCGPos;
        fVar15 = fVar15 - DAT_00969db8;
        fVar7 = 1.0;
        fVar8 = pMVar10->gScale;
        fVar5 = SQRT(fVar15 * fVar15 + fVar5 * fVar5 + fVar2 * fVar2) /
                (float)((double)(longlong)(animationSpeed * 30.5) * dVar27 + 0.009999999776482582);
        if ((fVar5 <= 1.0) && (fVar7 = fVar5, fVar5 < 0.3)) {
          fVar7 = 0.3;
        }
        Delt(fVar8 * fVar7,fVar8 * 0.1,&moby->scale);
        return;
      }
    }
    DeleteMoby(moby);
  }
  else if (uVar3 == '\x01') {
    auVar29 = ZEXT416(0xfffffff8);
    auVar30 = loadVectorLeftIndexed(0x23,lVar16);
    auVar29 = vectorShiftRightWord
                        (auVar30,auVar29 | auVar29 << 0x20 | auVar29 << 0x40 | auVar29 << 0x60);
    auVar29 = vectorConvertFromUnsignedFixedPointWord(auVar29,0);
    auVar29 = auVar29 >> 0x60 & (GPiece<16>)0xffffffff;
    uVar13 = storeVectorElementWordIndexed
                       (auVar29 | auVar29 << 0x20 | auVar29 << 0x40 | auVar29 << 0x60,0x90,lVar1);
    *(undefined4 *)(puVar14 + 0x12) = uVar13;
    puVar14[0x13] = (longlong)(int)(fVar5 * 30.5);
    puVar14[0x13] = (longlong)(0x80 / *(int *)((int)puVar14 + 0x9c));
    Delt(128.0,(float)(longlong)puVar14[0x13],(float *)(puVar14 + 0x12));
    cVar19 = FastDoubleToInt((double)*(float *)(puVar14 + 0x12));
    moby->alpha = cVar19;
    if ((piVar9[8] < 1) &&
       (SQRT((float)piVar9[6] * (float)piVar9[6] +
             (float)piVar9[4] * (float)piVar9[4] + (float)piVar9[5] * (float)piVar9[5]) == 0.0)) {
      fVar5 = (moby->pos).z;
      uVar22 = 1;
      if ((DAT_0096bf6c < ABS(fVar5 - g_heroPosition.z)) ||
         (fVar7 = (moby->pos).y - g_heroPosition.y, fVar8 = (moby->pos).x - g_heroPosition.x,
         DAT_0096bf68 < SQRT(fVar8 * fVar8 + fVar7 * fVar7))) {
        uVar22 = 0;
      }
      iVar18 = piVar9[2];
      uVar11 = (&currentAmmoArray.field0_0x0)[iVar18];
      uVar22 = (uint)((longlong)
                      ((longlong)(int)uVar11 - (ulonglong)(ushort)(&DAT_00737d3e)[iVar18 * 0xc]) >>
                     0x3f) & uVar22;
      if (fVar5 < (float)piVar9[10] - 2.0) {
        uVar22 = 1;
      }
      if ((g_heroHealth == 0) || (uVar22 == 0)) {
        if (cVar19 != -1) {
          moby->alpha = cVar19 + '\x01';
        }
        dVar27 = (double)MB_BSphereGap(lVar16,g_heroMobyPtr);
        if (dVar27 <= -0.20000000298023224) {
          auVar29 = ZEXT416(0xffffffff);
          auVar29 = auVar29 | auVar29 << 0x20 | auVar29 << 0x40 | auVar29 << 0x60;
          moby->state = '\x03';
          auVar30 = vectorShiftLeftIntegerWord(auVar29,auVar29);
          auVar29 = loadVectorLeftIndexed(0x34,0x2ea8f4);
          auVar29 = auVar29 >> 0x60 & (GPiece<16>)0xffffffff;
          auVar31 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
          auVar29 = vectorMultiplyAddFloatingPoint
                              (auVar31,auVar29 | auVar29 << 0x20 | auVar29 << 0x40 | auVar29 << 0x60
                               ,auVar30);
          auVar29 = vectorConvertToSignedFixedPointWordSaturate(auVar29,0);
          auVar29 = vectorSplatHalfWord(auVar29,1);
          uVar12 = storeVectorElementHalfWordIndexed(auVar29,6,ZEXT48(piVar9));
          *(undefined2 *)((int)piVar9 + 6) = uVar12;
        }
      }
      else {
        hero_GiveAmmo(iVar18,*piVar9);
        uVar22 = piVar9[2];
        uVar17 = (ulonglong)uVar22;
        if ((int)uVar11 < (int)(&currentAmmoArray.field0_0x0)[uVar22]) {
          arg = (&currentAmmoArray.field0_0x0)[uVar22] - uVar11;
          iVar18 = (int)(uVar17 * -0xf);
          if (arg == 1) {
            sVar21 = *(short *)((int)&DAT_00721034 + uVar22 * 0x10 + iVar18 * -4 + 2);
          }
          else {
            sVar21 = *(short *)(&DAT_00721034 + (uVar22 * 4 - iVar18));
          }
          MB_ToastMessageFmt((int)sVar21,arg,-1);
          uVar17 = (ulonglong)(uint)piVar9[2];
        }
        iVar18 = (int)(uVar17 << 2);
        *(uint *)(&DAT_00a0f5b0 + iVar18) =
             *(int *)(&DAT_00a0f5b0 + iVar18) +
             (*(int *)((int)&currentAmmoArray.field0_0x0 + iVar18) - uVar11);
        moby->state = '\x02';
        moby->scale = moby->scale * (DAT_0071f408 * 0.20000005 + 1.0);
        piVar9[7] = 0;
        piVar9[6] = 0;
        piVar9[5] = 0;
        piVar9[4] = 0;
        piVar9[9] = (int)(g_FrameTime * 8.0);
        iVar18 = worldUpdateTime - DAT_010bb410;
        puVar14[0x13] = (longlong)(int)(animationSpeed * 10.5);
        if (*(int *)((int)puVar14 + 0x9c) < iVar18 + (iVar18 >> 0x1f & iVar18 * -2)) {
          sound_MobyPlay_oClass(0,0,moby,0xd5);
          DAT_010bb410 = worldUpdateTime;
        }
      }
    }
  }
  else if (uVar3 == '\0') {
    moby->state = '\x01';
  }
  return;
}


// 0x02eb3f0 (0x50 bytes)
bool M1449_002eb3f0(int param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(*(int *)(param_1 + 0x78) + 8);
  return (int)(&currentAmmoArray.field0_0x0)[iVar1] <
         (int)(uint)(ushort)(&DAT_00737d3e)[iVar1 * 0xc];
}


// 0x02eb450 (0x238 bytes)
undefined8 M1449_CollectAmmo(MobyInstance *moby)

{
  int *piVar1;
  uint uVar2;
  undefined8 uVar3;
  int iVar4;
  short sVar6;
  int iVar5;
  double dVar7;
  
  piVar1 = (int *)moby->pVar;
  if (moby->state == '\x02') {
    uVar3 = 0;
  }
  else {
    uVar2 = (&currentAmmoArray.field0_0x0)[piVar1[2]];
    iVar4 = hero_GiveAmmo(piVar1[2],*piVar1);
    iVar5 = piVar1[2];
    dVar7 = (double)(longlong)iVar4;
    if ((int)uVar2 < (int)(&currentAmmoArray.field0_0x0)[iVar5]) {
      iVar4 = (&currentAmmoArray.field0_0x0)[iVar5] - uVar2;
      if (iVar4 == 1) {
        sVar6 = *(short *)((int)&DAT_00721034 + iVar5 * 0x4c + 2);
      }
      else {
        sVar6 = *(short *)(&DAT_00721034 + iVar5 * 0x13);
      }
      MB_ToastMessageFmt((int)sVar6,iVar4,-1);
      if (dVar7 < (double)(longlong)*piVar1) {
        iVar5 = piVar1[2] * 4;
        *(uint *)(&DAT_00a0f5b0 + iVar5) =
             *(int *)(&DAT_00a0f5b0 + iVar5) + ((&currentAmmoArray.field0_0x0)[piVar1[2]] - uVar2);
        moby->state = '\x02';
        moby->scale = moby->scale * (DAT_0071f408 * 0.20000005 + 1.0);
        piVar1[7] = 0;
        piVar1[6] = 0;
        piVar1[5] = 0;
        piVar1[4] = 0;
        iVar5 = DAT_010bb410;
        piVar1[9] = (int)(g_FrameTime * 8.0);
        iVar5 = worldUpdateTime - iVar5;
        if ((int)(animationSpeed * 10.5) < iVar5 + (iVar5 >> 0x1f & iVar5 * -2)) {
          sound_MobyPlay_oClass(0,0,moby,0xd5);
          DAT_010bb410 = worldUpdateTime;
        }
      }
      uVar3 = 1;
    }
    else {
      uVar3 = 0;
    }
  }
  return uVar3;
}


// 0x02eb688 (0x14 bytes)
void M1449_002eb688(void)

{
  DAT_007feafc = 0x10000;
  return;
}


// 0x02eb6d8 (0x678 bytes)
// inlined: FastRSqrt @0x2eb99c
void M1449_002eb6d8(int param_1)

{
  double dVar1;
  int iVar2;
  int iVar3;
  float fVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  float local_1c0;
  float local_1bc;
  float local_1b8;
  GPiece<248> local_1b0;
  
  if ((param_1 != 0) && (iVar2 = *(int *)(param_1 + 0x78), iVar2 != 0)) {
    GetEffectTex(0xf);
    SCE_GS_SET_TEX1(0,0,1,1,1,0,0xff90);
    SCE_GS_SET_CLAMP(1,1,0,0,0,0);
    idol_draw::PackCmd(0,1,0,1,0xff);
    dVar12 = 0.0;
    GetBonePosition(param_1,0,&local_1c0);
    iVar3 = *(int *)(iVar2 + 0x14);
    dVar11 = (double)(local_1bc - *(float *)(iVar3 + 0x14));
    dVar10 = (double)(local_1c0 - *(float *)(iVar3 + 0x10));
    dVar9 = (double)(local_1b8 - *(float *)(iVar3 + 0x18));
    fVar4 = SQRT((float)(dVar9 * dVar9 +
                        (double)(float)(dVar10 * dVar10 + (double)(float)(dVar11 * dVar11))));
    dVar8 = (double)fVar4;
    FastAddRots(*(float *)(iVar2 + 0x18));
    dVar13 = dVar12;
    if (dVar12 < dVar8) {
      do {
        dVar8 = 0.20000000298023224;
        if ((double)(float)((double)fVar4 - dVar12) - 0.20000000298023224 < 0.0) {
          dVar8 = (double)(float)((double)fVar4 - dVar12);
        }
        dVar12 = (double)(float)(dVar8 + dVar12);
        FastAddRots((float)(dVar12 * 3.1415927410125732) / *(float *)(iVar2 + 0x1c));
        dVar5 = (double)SQRT((float)(dVar9 * dVar9 +
                                    (double)(float)(dVar10 * dVar10 +
                                                   (double)(float)(dVar11 * dVar11))));
        dVar7 = (double)(float)(dVar8 / dVar5);
        dVar8 = dVar9 * dVar7;
        dVar1 = dVar11 * dVar7;
        dVar9 = dVar13;
        if (dVar13 - dVar5 < 0.0) {
          dVar9 = (double)(float)dVar8;
        }
        dVar11 = dVar13;
        if (dVar13 - dVar5 < 0.0) {
          dVar11 = (double)(float)dVar1;
        }
        dVar6 = dVar13;
        if (dVar13 - dVar5 < 0.0) {
          dVar6 = (double)(float)(dVar10 * dVar7);
        }
        if (dVar5 - dVar13 < 0.0) {
          dVar9 = (double)(float)dVar8;
        }
        if (dVar5 - dVar13 < 0.0) {
          dVar11 = (double)(float)dVar1;
        }
        if (dVar5 - dVar13 < 0.0) {
          dVar6 = (double)(float)(dVar10 * dVar7);
        }
        FastDrawQuad(local_1b0,0,1,EffectTexHeaders,9);
        dVar10 = (double)(float)dVar6;
      } while (dVar12 < (double)fVar4);
    }
  }
  return;
}


