// game/update/moby868.cpp -- reconstructed from NPEA00385 EBOOT
// STATUS: NOT STARTED (raw Ghidra output)
// 4 functions, 0x4a70c0-0x4a7994
// shared update function UpdateMoby_{868_905_928}; registered for oClasses 868, 905, 928
#include "game/update/moby868.h"
#include "game/camera.h"
#include "game/hero.h"
#include "game/mobyfunc.h"
#include "game/mobyutil.h"
#include "game/sound.h"
#include "idol/fastfunc.h"

// 0x04a70c0 (0x14 bytes)
void M928_004a70c0(void)

{
  DAT_008f3e0c = 0x10000;
  return;
}


// 0x04a70d8 (0x4 bytes)
void M928_004a70d8(void)

{
  return;
}


// shared update function, registered for oClasses 868, 905, 928
// 0x04a70f0 (0x890 bytes)
/* Moby 868
   Moby 905
   Moby 928 */

void UpdateMoby_868(MobyInstance *moby)

{
  uint uVar1;
  u8 uVar2;
  float fVar3;
  float fVar4;
  void *pvVar5;
  int *piVar6;
  Spline *pSVar7;
  undefined4 uVar8;
  float *pfVar9;
  float fVar10;
  float fVar11;
  ulonglong uVar12;
  int iVar13;
  int iVar14;
  longlong lVar15;
  char cVar16;
  int iVar17;
  ulonglong uVar18;
  double dVar19;
  double dVar20;
  double dVar21;
  double dVar22;
  double dVar23;
  double dVar24;
  GPiece<16> auVar25;
  GPiece<16> auVar26;
  GPiece<16> auVar27;
  GPiece<16> auVar28;
  Vec4 local_b0;
  f32 local_a0;
  f32 local_9c;
  f32 local_98;
  f32 local_94;
  float local_90;
  float local_8c;
  float local_88;
  undefined4 local_84;
  float local_80;
  float local_7c;
  float local_78;
  undefined4 local_74;
  f32 local_70;
  f32 local_6c;
  f32 local_68;
  f32 local_64;
  longlong local_60;
  
  uVar12 = ZEXT48(&stack0x00000000);
  fVar3 = (moby->pos).x;
  local_b0.x = -fVar3;
  local_b0.y = -(moby->pos).y;
  local_b0.z = -(moby->pos).z;
  pvVar5 = moby->pVar;
  uVar18 = ZEXT48(pvVar5);
  local_b0.w = (moby->pos).w;
  local_a0 = (moby->rotation).x;
  local_9c = (moby->rotation).y;
  local_98 = (moby->rotation).z;
  local_94 = (moby->rotation).w;
  uVar2 = moby->state;
  if (uVar2 == '\x04') {
    iVar14 = FastDecTimerS32(uVar18 + 0xe8);
    if (iVar14 != 0) {
      moby->state = '\x03';
    }
  }
  else if (uVar2 == '\x03') {
    piVar6 = *(int **)((int)pvVar5 + 0xc0);
    iVar14 = *piVar6;
    iVar17 = *(int *)((int)pvVar5 + 0xb0) + iVar14 + (int)*(char *)((int)pvVar5 + 0xb4);
    iVar17 = iVar17 - (iVar17 / iVar14) * iVar14;
    *(float *)((int)pvVar5 + 0xa0) = (float)piVar6[iVar17 * 4 + 4] - fVar3;
    iVar13 = iVar17 + ((uint)(ZERO_MASK(*(int *)((int)pvVar5 + 0x108))) &
                      (iVar14 + -1) - iVar17);
    *(float *)((int)pvVar5 + 0xa4) = (float)piVar6[iVar17 * 4 + 5] - (moby->pos).y;
    *(float *)((int)pvVar5 + 0xa8) = (float)piVar6[iVar17 * 4 + 6] - (moby->pos).z;
    *(int *)((int)pvVar5 + 0xac) = piVar6[iVar17 * 4 + 7];
    fVar4 = (moby->pos).y - (float)piVar6[iVar13 * 4 + 5];
    fVar10 = (moby->pos).x - (float)piVar6[iVar13 * 4 + 4];
    fVar11 = (moby->pos).z - (float)piVar6[iVar13 * 4 + 6];
    fVar3 = *(float *)((int)pvVar5 + 0xf4);
    if (fVar3 <= SQRT(fVar11 * fVar11 + fVar10 * fVar10 + fVar4 * fVar4)) {
      fVar4 = *(float *)((int)pvVar5 + 0xec);
      Delt(fVar4 * g_FrameTime,((fVar4 * fVar4) / fVar3) * g_FrameTimeSq * 0.5,
                     (float *)((int)pvVar5 + 0xe4U));
    }
    else {
      Delt(g_FrameTime * 0.5,
                     ((*(float *)((int)pvVar5 + 0xec) * *(float *)((int)pvVar5 + 0xec)) / fVar3) *
                     g_FrameTimeSq * 0.5,(float *)((int)pvVar5 + 0xe4U));
    }
    ClampVec3Magnitude
              ((double)*(float *)((int)pvVar5 + 0xe4),(Vec4 *)((int)pvVar5 + 0xa0));
    fVar3 = (moby->pos).x + *(float *)((int)pvVar5 + 0xa0);
    (moby->pos).x = fVar3;
    fVar4 = (moby->pos).y + *(float *)((int)pvVar5 + 0xa4);
    (moby->pos).y = fVar4;
    fVar10 = (moby->pos).z + *(float *)((int)pvVar5 + 0xa8);
    (moby->pos).z = fVar10;
    iVar13 = *(int *)((int)pvVar5 + 0xc0) + iVar17 * 0x10;
    fVar4 = fVar4 - *(float *)(iVar13 + 0x14);
    fVar3 = fVar3 - *(float *)(iVar13 + 0x10);
    fVar10 = fVar10 - *(float *)(iVar13 + 0x18);
    if ((SQRT(fVar10 * fVar10 + fVar3 * fVar3 + fVar4 * fVar4) <
         *(float *)((int)pvVar5 + 0xe4) * 2.0) &&
       (((*(int *)((int)pvVar5 + 0xb0) = iVar17, iVar17 == iVar14 + -1 ||
         (*(int *)((int)pvVar5 + 0x108) != 0)) && (0 < *(int *)((int)pvVar5 + 0xf0))))) {
      iVar14 = *(int *)((int)pvVar5 + 0x104);
      if (((iVar14 != -1) && (g_SoundChannels[iVar14].pMoby == moby)) &&
         (g_SoundChannels[iVar14].state != '\0')) {
        sound_Kill(iVar14);
      }
      auVar26 = ZEXT416(0xffffffff);
      auVar26 = auVar26 | auVar26 << 0x20 | auVar26 << 0x40 | auVar26 << 0x60;
      *(undefined4 *)((int)pvVar5 + 0x104) = 0xffffffff;
      auVar27 = vectorShiftLeftIntegerWord(auVar26,auVar26);
      moby->state = '\x04';
      auVar26 = loadVectorLeftIndexed(0xf0,uVar18);
      auVar25 = loadVectorRightIndexed(0x100,uVar18);
      auVar25 = vectorConvertFromSignedFixedPointWord(auVar26 | auVar25,0);
      auVar26 = loadVectorLeftIndexed(0xc,0x4a70dc);
      auVar26 = auVar26 >> 0x60 & (GPiece<16>)0xffffffff;
      auVar28 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
      auVar26 = vectorAddFloatingPoint
                          (auVar25,auVar26 | auVar26 << 0x20 | auVar26 << 0x40 | auVar26 << 0x60);
      auVar26 = vectorMultiplyAddFloatingPoint(auVar28,auVar26,auVar27);
      auVar26 = vectorConvertToSignedFixedPointWordSaturate(auVar26,0);
      auVar26 = auVar26 >> 0x60 & (GPiece<16>)0xffffffff;
      uVar8 = storeVectorElementWordIndexed
                        (auVar26 | auVar26 << 0x20 | auVar26 << 0x40 | auVar26 << 0x60,0xe8,uVar18);
      *(undefined4 *)((int)pvVar5 + 0xe8U & 0xfffffffc) = uVar8;
    }
  }
  else if (uVar2 == '\x02') {
    iVar14 = FastDecTimerS32(uVar18 + 0xe8);
    if (iVar14 != 0) {
      *(undefined4 *)((int)pvVar5 + 0x10c) = 0;
      moby->state = '\x01';
    }
  }
  else if (uVar2 == '\x01') {
    dVar24 = (double)*(float *)((int)pvVar5 + 0x114);
    dVar23 = 0.0;
    dVar19 = dVar23;
    if (((moby->oClass == MOVING_PLATFORM_MEDIUM) || (moby->oClass == MOVING_PLATFORM_SMALL)) &&
       (iVar14 = IsMobyPlayingSound(moby,*(int *)((int)pvVar5 + 0x104)), iVar14 == 0)) {
      iVar14 = sound_MobyPlay_oClass(0,4,moby,0x389);
      *(int *)((int)pvVar5 + 0x104) = iVar14;
    }
    iVar14 = *(int *)((int)pvVar5 + 0x10c) + 1;
    *(int *)((int)pvVar5 + 0x10c) = iVar14;
    dVar22 = 240.5;
    uVar1 = (uint)(animationSpeed * 240.5);
    local_60 = (longlong)(int)uVar1;
    if ((int)(((int)uVar1 >> 1) + (uint)((int)uVar1 < 0 && (uVar1 & 1) != 0)) < iVar14) {
      iVar14 = uVar1 - iVar14;
      dVar24 = -dVar24;
      dVar19 = (double)*(float *)((int)pvVar5 + 0x110);
    }
    dVar20 = (double)FastIntToDouble(iVar14 * iVar14);
    piVar6 = *(int **)((int)pvVar5 + 0xc0);
    dVar19 = (double)(float)((double)(float)(dVar24 * 0.5) * dVar20 + dVar19);
    if (*(char *)((int)pvVar5 + 0xb4) < '\0') {
      dVar19 = (double)(float)((double)*(float *)((int)pvVar5 + 0x110) - dVar19);
    }
    FastVecSub(uVar12 - 0x80,piVar6 + *piVar6 * 4,piVar6 + 4);
    local_84 = local_74;
    dVar24 = (double)SQRT(local_78 * local_78 + local_80 * local_80 + local_7c * local_7c);
    fVar3 = (float)(dVar19 / dVar24);
    dVar19 = dVar23;
    if (dVar23 - dVar24 < 0.0) {
      dVar19 = (double)(local_80 * fVar3);
    }
    dVar20 = dVar23;
    if (dVar23 - dVar24 < 0.0) {
      dVar20 = (double)(local_7c * fVar3);
    }
    dVar21 = dVar23;
    if (dVar23 - dVar24 < 0.0) {
      dVar21 = (double)(local_78 * fVar3);
    }
    if (dVar24 - dVar23 < 0.0) {
      dVar19 = (double)(local_80 * fVar3);
    }
    if (dVar24 - dVar23 < 0.0) {
      dVar20 = (double)(local_7c * fVar3);
    }
    if (dVar24 - dVar23 < 0.0) {
      dVar21 = (double)(local_78 * fVar3);
    }
    local_90 = (float)dVar19;
    local_8c = (float)dVar20;
    local_88 = (float)dVar21;
    FastVecAdd
              (uVar12 - 0x70,(ulonglong)*(uint *)((int)pvVar5 + 0xc0) + 0x10,uVar12 - 0x90);
    (moby->pos).x = local_70;
    (moby->pos).y = local_6c;
    (moby->pos).z = local_68;
    (moby->pos).w = local_64;
    local_60 = (longlong)(int)((double)animationSpeed * dVar22);
    if ((int)((double)animationSpeed * dVar22) <= *(int *)((int)pvVar5 + 0x10c)) {
      iVar14 = *(int *)((int)pvVar5 + 0x104);
      *(char *)((int)pvVar5 + 0xb4) = -*(char *)((int)pvVar5 + 0xb4);
      if (((iVar14 != -1) && (g_SoundChannels[iVar14].pMoby == moby)) &&
         (g_SoundChannels[iVar14].state != '\0')) {
        sound_Kill(iVar14);
      }
      auVar26 = ZEXT416(0xffffffff);
      auVar26 = auVar26 | auVar26 << 0x20 | auVar26 << 0x40 | auVar26 << 0x60;
      *(undefined4 *)((int)pvVar5 + 0x104) = 0xffffffff;
      auVar27 = vectorShiftLeftIntegerWord(auVar26,auVar26);
      moby->state = '\x02';
      auVar26 = loadVectorLeftIndexed(0xf0,uVar18);
      auVar25 = loadVectorRightIndexed(0x100,uVar18);
      auVar25 = vectorConvertFromSignedFixedPointWord(auVar26 | auVar25,0);
      auVar26 = loadVectorLeftIndexed(0xc,0x4a70dc);
      auVar26 = auVar26 >> 0x60 & (GPiece<16>)0xffffffff;
      auVar28 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
      auVar26 = vectorAddFloatingPoint
                          (auVar25,auVar26 | auVar26 << 0x20 | auVar26 << 0x40 | auVar26 << 0x60);
      auVar26 = vectorMultiplyAddFloatingPoint(auVar28,auVar26,auVar27);
      auVar26 = vectorConvertToSignedFixedPointWordSaturate(auVar26,0);
      auVar26 = auVar26 >> 0x60 & (GPiece<16>)0xffffffff;
      uVar8 = storeVectorElementWordIndexed
                        (auVar26 | auVar26 << 0x20 | auVar26 << 0x40 | auVar26 << 0x60,0xe8,uVar18);
      *(undefined4 *)((int)pvVar5 + 0xe8U & 0xfffffffc) = uVar8;
    }
  }
  else if (uVar2 == '\0') {
    pSVar7 = Splines[*(int *)((int)pvVar5 + 0xe0)];
    cVar16 = ((byte)(ZERO_MASK(*(int *)((int)pvVar5 + 0xf8))) & 2) - 1;
    *(Spline **)((int)pvVar5 + 0xc0) = pSVar7;
    lVar15 = 0;
    *(char *)((int)pvVar5 + 0xb4) = cVar16;
    if (-1 < cVar16) {
      lVar15 = (ulonglong)(uint)pSVar7->cnt - 1;
    }
    iVar14 = (int)(lVar15 << 4);
    iVar13 = 0;
    (moby->pos).x = *(f32 *)((int)&pSVar7->points[0].x + iVar14);
    (moby->pos).y = *(f32 *)((int)&pSVar7->points[0].y + iVar14);
    (moby->pos).z = *(f32 *)((int)&pSVar7->points[0].z + iVar14);
    (moby->pos).w = *(f32 *)((int)&pSVar7->points[0].w + iVar14);
    if (-1 < *(char *)((int)pvVar5 + 0xb4)) {
      iVar13 = **(int **)((int)pvVar5 + 0xc0) + -1;
    }
    *(int *)((int)pvVar5 + 0xb0) = iVar13;
    fVar3 = moby->pClass->gScale;
    *(undefined4 *)((int)pvVar5 + 0x104) = 0xffffffff;
    moby->scale = fVar3 * *(float *)((int)pvVar5 + 0xfc);
    iVar14 = FastDecTimerS32(uVar18 + 0x100);
    if (iVar14 != 0) {
      piVar6 = *(int **)((int)pvVar5 + 0xc0);
      pfVar9 = (float *)(piVar6 + *piVar6 * 4);
      *(float *)((int)pvVar5 + 0x110) =
           SQRT(((float)piVar6[6] - pfVar9[2]) * ((float)piVar6[6] - pfVar9[2]) +
                ((float)piVar6[4] - *pfVar9) * ((float)piVar6[4] - *pfVar9) +
                ((float)piVar6[5] - pfVar9[1]) * ((float)piVar6[5] - pfVar9[1]));
      iVar14 = (int)(animationSpeed * 240.5);
      local_60 = (longlong)iVar14;
      dVar19 = (double)FastIntToDouble(iVar14 * iVar14);
      *(undefined4 *)((int)pvVar5 + 0x10c) = 0;
      *(float *)((int)pvVar5 + 0x114) =
           (float)((double)(*(float *)((int)pvVar5 + 0x110) * 4.0) / dVar19);
      moby->state = '\x01';
    }
  }
  local_b0.x = local_b0.x + (moby->pos).x;
  local_b0.y = local_b0.y + (moby->pos).y;
  local_b0.z = local_b0.z + (moby->pos).z;
  MB_GetOrientation
            ((MobyInstance *)((int)pvVar5 + 0x60),&local_b0,uVar12 - 0xa0,(longlong)(int)moby + 0x40
            );
  return;
}


// 0x04a7980 (0x14 bytes)
void M928_004a7980(void)

{
  DAT_008f3e7c = 0x10000;
  return;
}


