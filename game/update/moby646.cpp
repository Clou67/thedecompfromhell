// game/update/moby646.cpp -- reconstructed from NPEA00385 EBOOT
// STATUS: NOT STARTED (raw Ghidra output)
// 8 functions, 0x400670-0x400f38
// shared update function UpdateMoby_{646_752}; registered for oClasses 646, 752
#include "game/update/moby646.h"
#include "game/camera.h"
#include "game/hero.h"
#include "game/mobyfunc.h"
#include "game/mobyutil.h"
#include "game/sound.h"
#include "idol/fastfunc.h"

// 0x0400670 (0x1d8 bytes)
void FUN_00400670(int param_1,undefined4 *param_2,undefined4 *param_3,undefined4 *param_4,
                 undefined4 *param_5,undefined4 *param_6,undefined4 param_7,undefined4 param_8)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  GPiece<16> auVar3;
  GPiece<16> auVar4;
  GPiece<16> auVar5;
  GPiece<16> auVar6;
  GPiece<16> auVar7;
  GPiece<16> auVar8;
  GPiece<16> auVar9;
  GPiece<16> auVar10;
  GPiece<16> auVar11;
  undefined4 in_stack_00000074;
  
  puVar1 = *(undefined4 **)(param_1 + 0x78);
  auVar3.piece<0,4>() = param_8;
  auVar3.piece<4,4>() = param_8;
  auVar3.piece<8,4>() = param_8;
  auVar3.piece<12,4>() = param_8;
  auVar6 = ZEXT416(0xffffffff);
  auVar5 = auVar6 | auVar6 << 0x20 | auVar6 << 0x40 | auVar6 << 0x60;
  auVar6.piece<0,4>() = param_7;
  auVar6.piece<4,4>() = param_7;
  auVar6.piece<8,4>() = param_7;
  auVar6.piece<12,4>() = param_7;
  puVar1[0x18] = 0;
  puVar1[0x19] = 0;
  *puVar1 = *param_2;
  puVar1[1] = param_2[1];
  puVar1[2] = param_2[2];
  puVar1[3] = param_2[3];
  puVar1[4] = *param_3;
  puVar1[5] = param_3[1];
  puVar1[6] = param_3[2];
  puVar1[7] = param_3[3];
  puVar1[8] = *param_4;
  puVar1[9] = param_4[1];
  puVar1[10] = param_4[2];
  puVar1[0xb] = param_4[3];
  puVar1[0xc] = *param_5;
  puVar1[0xd] = param_5[1];
  auVar4 = vectorConvertFromSignedFixedPointWord(auVar6,0);
  puVar1[0xe] = param_5[2];
  puVar1[0xf] = param_5[3];
  puVar1[0x10] = *param_6;
  puVar1[0x11] = param_6[1];
  puVar1[0x12] = param_6[2];
  puVar1[0x13] = param_6[3];
  *(undefined1 *)(param_1 + 0x20) = 2;
  auVar5 = vectorShiftLeftIntegerWord(auVar5,auVar5);
  auVar3 = vectorConvertFromSignedFixedPointWord(auVar3,0);
  auVar6 = ZEXT416(0xffffffff);
  auVar9 = auVar6 | auVar6 << 0x20 | auVar6 << 0x40 | auVar6 << 0x60;
  auVar6 = ZEXT416(0xffffffff);
  auVar11 = auVar6 | auVar6 << 0x20 | auVar6 << 0x40 | auVar6 << 0x60;
  auVar10 = vectorShiftLeftIntegerWord(auVar9,auVar9);
  puVar1[0x1a] = g_FrameTimeSq * 0.333;
  auVar6 = loadVectorLeftIndexed(4,0x400660);
  auVar7 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
  auVar6 = auVar6 >> 0x60 & (GPiece<16>)0xffffffff;
  auVar9 = auVar6 | auVar6 << 0x20 | auVar6 << 0x40 | auVar6 << 0x60;
  auVar6 = loadVectorLeftIndexed(8,0x400660);
  auVar4 = vectorAddFloatingPoint(auVar4,auVar9);
  auVar6 = auVar6 >> 0x60 & (GPiece<16>)0xffffffff;
  auVar8 = auVar6 | auVar6 << 0x20 | auVar6 << 0x40 | auVar6 << 0x60;
  auVar3 = vectorAddFloatingPoint(auVar3,auVar9);
  auVar6 = ZEXT416(0xffffffff);
  auVar6 = auVar6 | auVar6 << 0x20 | auVar6 << 0x40 | auVar6 << 0x60;
  auVar9 = vectorShiftLeftIntegerWord(auVar6,auVar6);
  auVar4 = vectorMultiplyAddFloatingPoint(auVar7,auVar4,auVar5);
  auVar6 = ZEXT416(0xffffffff);
  auVar5 = auVar6 | auVar6 << 0x20 | auVar6 << 0x40 | auVar6 << 0x60;
  auVar6 = vectorMultiplyAddFloatingPoint(auVar7,auVar3,auVar9);
  auVar9 = vectorShiftLeftIntegerWord(auVar11,auVar11);
  auVar5 = vectorShiftLeftIntegerWord(auVar5,auVar5);
  auVar3 = vectorConvertToSignedFixedPointWordSaturate(auVar4,0);
  auVar6 = vectorConvertToSignedFixedPointWordSaturate(auVar6,0);
  auVar7 = vectorConvertFromSignedFixedPointWord(auVar3,0);
  auVar6 = auVar6 >> 0x60 & (GPiece<16>)0xffffffff;
  auVar3 = auVar3 >> 0x60 & (GPiece<16>)0xffffffff;
  auVar4 = vectorReciprocalEstimateFloatingPoint(auVar7);
  auVar11 = vectorNegativeMultiplySubtractFloatingPoint(auVar4,auVar7,auVar8);
  auVar4 = vectorMultiplyAddFloatingPoint(auVar4,auVar11,auVar5);
  auVar5 = vectorNegativeMultiplySubtractFloatingPoint(auVar4,auVar7,auVar8);
  auVar4 = vectorMultiplyAddFloatingPoint(auVar4,auVar5,auVar10);
  auVar5 = vectorNegativeMultiplySubtractFloatingPoint(auVar4,auVar7,auVar8);
  auVar4 = vectorMultiplyAddFloatingPoint(auVar4,auVar5,auVar9);
  auVar4 = auVar4 >> 0x60 & (GPiece<16>)0xffffffff;
  uVar2 = storeVectorElementWordIndexed
                    (auVar4 | auVar4 << 0x20 | auVar4 << 0x40 | auVar4 << 0x60,0x70,ZEXT48(puVar1));
  *(undefined4 *)((uint)(puVar1 + 0x1c) & 0xfffffffc) = uVar2;
  uVar2 = storeVectorElementWordIndexed
                    (auVar6 | auVar6 << 0x20 | auVar6 << 0x40 | auVar6 << 0x60,0x74,ZEXT48(puVar1));
  *(undefined4 *)((uint)(puVar1 + 0x1d) & 0xfffffffc) = uVar2;
  puVar1[0x1e] = in_stack_00000074;
  DAT_00969ea0 = storeVectorElementWordIndexed
                           (auVar3 | auVar3 << 0x20 | auVar3 << 0x40 | auVar3 << 0x60,0x1c0,0x969ce0
                           );
  return;
}


// 0x0400848 (0xc bytes)
double FUN_00400848(int param_1)

{
  return (double)*(float *)(*(int *)(param_1 + 0x78) + 0x60);
}


// 0x0400854 (0x54 bytes)
longlong FUN_00400854(int param_1)

{
  ulonglong uVar1;
  
  uVar1 = ZERO_MASK((3 - (uint)*(byte *)(param_1 + 0x20))) & 2;
  return uVar1 + (ZERO_MASK((2 - (uint)*(byte *)(param_1 + 0x20))) & 1 - uVar1);
}


// 0x04008a8 (0x110 bytes)
void M752_004008a8(double param_1,int *param_2,float *param_3)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  longlong lVar7;
  int iVar8;
  int iVar9;
  
  lVar7 = FastDoubleToInt((double)(float)((double)(longlong)(*param_2 + -1) * param_1));
  iVar9 = *param_2 + -1;
  iVar8 = *param_2 + -2;
  iVar8 = iVar8 + ((uint)(lVar7 - iVar9 >> 0x3f) & (int)lVar7 - iVar8);
  fVar2 = (float)param_2[iVar8 * 4 + 9];
  fVar3 = (float)param_2[iVar8 * 4 + 5];
  fVar4 = (float)param_2[iVar8 * 4 + 10];
  fVar5 = (float)param_2[iVar8 * 4 + 6];
  fVar6 = (float)param_2[iVar8 * 4 + 0xb];
  fVar1 = (float)((double)(longlong)iVar9 * param_1 - (double)(longlong)(int)lVar7);
  *param_3 = fVar1 * ((float)param_2[iVar8 * 4 + 8] - (float)param_2[iVar8 * 4 + 4]) +
             (float)param_2[iVar8 * 4 + 4];
  param_3[1] = fVar1 * (fVar2 - fVar3) + (float)param_2[iVar8 * 4 + 5];
  fVar2 = (float)param_2[iVar8 * 4 + 6];
  param_3[3] = fVar6;
  param_3[2] = fVar1 * (fVar4 - fVar5) + fVar2;
  return;
}


// 0x04009b8 (0x14 bytes)
void M752_004009b8(void)

{
  DAT_008547b0 = 0x10000;
  return;
}


// 0x04009d0 (0x4 bytes)
void M752_004009d0(void)

{
  return;
}


// shared update function, registered for oClasses 646, 752
// 0x04009e0 (0x544 bytes)
/* Moby 646
   Moby 752 */

void UpdateMoby_646(MobyInstance *moby)

{
  byte bVar1;
  float fVar2;
  float fVar3;
  void *pvVar4;
  Spline *pSVar5;
  undefined4 uVar6;
  float fVar7;
  float fVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  longlong lVar12;
  char cVar13;
  int iVar14;
  ulonglong uVar15;
  undefined8 in_LR;
  GPiece<16> auVar16;
  GPiece<16> auVar17;
  GPiece<16> auVar18;
  GPiece<16> auVar19;
  Vec4 local_50;
  f32 local_40;
  f32 local_3c;
  f32 local_38;
  f32 local_34;
  
  local_50.x = -(moby->pos).x;
  local_50.y = -(moby->pos).y;
  local_50.z = -(moby->pos).z;
  pvVar4 = moby->pVar;
  uVar15 = ZEXT48(pvVar4);
  local_50.w = (moby->pos).w;
  local_40 = (moby->rotation).x;
  local_3c = (moby->rotation).y;
  local_38 = (moby->rotation).z;
  local_34 = (moby->rotation).w;
  bVar1 = moby->state;
  if (bVar1 == 0) {
    cVar13 = ((byte)(ZERO_MASK(*(int *)((int)pvVar4 + 0xf8))) & 2) - 1;
    pSVar5 = Splines[*(int *)((int)pvVar4 + 0xe0)];
    lVar12 = 0;
    *(Spline **)((int)pvVar4 + 0xc0) = pSVar5;
    *(char *)((int)pvVar4 + 0xb4) = cVar13;
    iVar10 = 0;
    if (-1 < cVar13) {
      lVar12 = (ulonglong)(uint)pSVar5->cnt - 1;
    }
    iVar14 = (int)(lVar12 << 4);
    (moby->pos).x = *(f32 *)((int)&pSVar5->points[0].x + iVar14);
    (moby->pos).y = *(f32 *)((int)&pSVar5->points[0].y + iVar14);
    (moby->pos).z = *(f32 *)((int)&pSVar5->points[0].z + iVar14);
    (moby->pos).w = *(f32 *)((int)&pSVar5->points[0].w + iVar14);
    if (-1 < *(char *)((int)pvVar4 + 0xb4)) {
      iVar10 = **(int **)((int)pvVar4 + 0xc0) + -1;
    }
    *(int *)((int)pvVar4 + 0xb0) = iVar10;
    fVar2 = moby->pClass->gScale;
    *(undefined4 *)((int)pvVar4 + 0x104) = 0xffffffff;
    moby->scale = fVar2 * *(float *)((int)pvVar4 + 0xfc);
    iVar10 = FastDecTimerS32(uVar15 + 0x100);
    if (iVar10 != 0) {
      moby->state = '\x01';
    }
  }
  else if (bVar1 < 2) {
    iVar10 = **(int **)((int)pvVar4 + 0xc0);
    iVar14 = *(int *)((int)pvVar4 + 0xb0) + iVar10 + (int)*(char *)((int)pvVar4 + 0xb4);
    iVar14 = iVar14 - (iVar14 / iVar10) * iVar10;
    if ((moby->oClass == MOVING_PLATFORM_MEDIUM) &&
       (iVar11 = IsMobyPlayingSound(moby,*(int *)((int)pvVar4 + 0x104)), iVar11 == 0)) {
      iVar11 = sound_MobyPlay_oClass(0,4,moby,0x389);
      *(int *)((int)pvVar4 + 0x104) = iVar11;
    }
    iVar11 = *(int *)((int)pvVar4 + 0xc0) + iVar14 * 0x10;
    *(float *)((int)pvVar4 + 0xa0) = *(float *)(iVar11 + 0x10) - (moby->pos).x;
    iVar9 = *(int *)((int)pvVar4 + 0xc0) +
            (iVar14 + ((uint)(ZERO_MASK(*(int *)((int)pvVar4 + 0x108))) &
                      (iVar10 + -1) - iVar14)) * 0x10;
    *(float *)((int)pvVar4 + 0xa4) = *(float *)(iVar11 + 0x14) - (moby->pos).y;
    *(float *)((int)pvVar4 + 0xa8) = *(float *)(iVar11 + 0x18) - (moby->pos).z;
    *(undefined4 *)((int)pvVar4 + 0xac) = *(undefined4 *)(iVar11 + 0x1c);
    fVar3 = (moby->pos).y - *(float *)(iVar9 + 0x14);
    fVar7 = (moby->pos).x - *(float *)(iVar9 + 0x10);
    fVar8 = (moby->pos).z - *(float *)(iVar9 + 0x18);
    fVar2 = *(float *)((int)pvVar4 + 0xf4);
    if (fVar2 <= SQRT(fVar8 * fVar8 + fVar7 * fVar7 + fVar3 * fVar3)) {
      fVar3 = *(float *)((int)pvVar4 + 0xec);
      Delt(fVar3 * g_FrameTime,((fVar3 * fVar3) / fVar2) * g_FrameTimeSq * 0.5,
                     (float *)((int)pvVar4 + 0xe4U));
    }
    else {
      Delt(g_FrameTime * 0.5,
                     ((*(float *)((int)pvVar4 + 0xec) * *(float *)((int)pvVar4 + 0xec)) / fVar2) *
                     g_FrameTimeSq * 0.5,(float *)((int)pvVar4 + 0xe4U));
    }
    ClampVec3Magnitude
              ((double)*(float *)((int)pvVar4 + 0xe4),(Vec4 *)((int)pvVar4 + 0xa0));
    fVar2 = (moby->pos).x + *(float *)((int)pvVar4 + 0xa0);
    (moby->pos).x = fVar2;
    fVar3 = (moby->pos).y + *(float *)((int)pvVar4 + 0xa4);
    (moby->pos).y = fVar3;
    fVar7 = (moby->pos).z + *(float *)((int)pvVar4 + 0xa8);
    (moby->pos).z = fVar7;
    iVar11 = *(int *)((int)pvVar4 + 0xc0) + iVar14 * 0x10;
    fVar3 = fVar3 - *(float *)(iVar11 + 0x14);
    fVar2 = fVar2 - *(float *)(iVar11 + 0x10);
    fVar7 = fVar7 - *(float *)(iVar11 + 0x18);
    if ((SQRT(fVar7 * fVar7 + fVar2 * fVar2 + fVar3 * fVar3) < *(float *)((int)pvVar4 + 0xe4) * 2.0)
       && (((*(int *)((int)pvVar4 + 0xb0) = iVar14, iVar14 == iVar10 + -1 ||
            (*(int *)((int)pvVar4 + 0x108) != 0)) && (0 < *(int *)((int)pvVar4 + 0xf0))))) {
      iVar10 = *(int *)((int)pvVar4 + 0x104);
      if (((iVar10 != -1) && (g_SoundChannels[iVar10].pMoby == moby)) &&
         (g_SoundChannels[iVar10].state != '\0')) {
        sound_Kill(iVar10);
      }
      auVar18 = ZEXT416(0xffffffff);
      auVar18 = auVar18 | auVar18 << 0x20 | auVar18 << 0x40 | auVar18 << 0x60;
      *(undefined4 *)((int)pvVar4 + 0x104) = 0xffffffff;
      auVar19 = vectorShiftLeftIntegerWord(auVar18,auVar18);
      moby->state = '\x02';
      auVar18 = loadVectorLeftIndexed(0xf0,uVar15);
      auVar16 = loadVectorRightIndexed(0x100,uVar15);
      auVar17 = loadVectorLeftIndexed(in_LR,0x4009d4);
      auVar16 = vectorConvertFromSignedFixedPointWord(auVar18 | auVar16,0);
      auVar18 = auVar17 >> 0x60 & (GPiece<16>)0xffffffff;
      auVar17 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
      auVar18 = vectorAddFloatingPoint
                          (auVar16,auVar18 | auVar18 << 0x20 | auVar18 << 0x40 | auVar18 << 0x60);
      auVar18 = vectorMultiplyAddFloatingPoint(auVar17,auVar18,auVar19);
      auVar18 = vectorConvertToSignedFixedPointWordSaturate(auVar18,0);
      auVar18 = auVar18 >> 0x60 & (GPiece<16>)0xffffffff;
      uVar6 = storeVectorElementWordIndexed
                        (auVar18 | auVar18 << 0x20 | auVar18 << 0x40 | auVar18 << 0x60,0xe8,uVar15);
      *(undefined4 *)((int)pvVar4 + 0xe8U & 0xfffffffc) = uVar6;
    }
  }
  else if ((bVar1 < 3) && (iVar10 = FastDecTimerS32(uVar15 + 0xe8), iVar10 != 0)) {
    moby->state = '\x01';
  }
  local_50.x = local_50.x + (moby->pos).x;
  local_50.y = local_50.y + (moby->pos).y;
  local_50.z = local_50.z + (moby->pos).z;
  MB_GetOrientation
            ((MobyInstance *)((int)pvVar4 + 0x60),&local_50,ZEXT48(&stack0x00000000) - 0x40,
             (longlong)(int)moby + 0x40);
  return;
}


// 0x0400f24 (0x14 bytes)
void M752_00400f24(void)

{
  DAT_00854820 = 0x10000;
  return;
}


