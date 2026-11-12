// game/update/moby31.cpp -- reconstructed from NPEA00385 EBOOT
// STATUS: NOT STARTED (raw Ghidra output)
// 10 functions, 0x33cdb4-0x33f594
#include <stdio.h>
#include "game/update/moby31.h"
#include "game/camera.h"
#include "game/collproc.h"
#include "game/hero.h"
#include "game/mobyfunc.h"
#include "game/mobyutil.h"
#include "game/partupd.h"
#include "game/sound.h"
#include "game/update/moby1196.h"
#include "game/update/moby309.h"
#include "game/update/moby810.h"
#include "idol/fastfunc.h"

// 0x033cdb4 (0x7c bytes)
void M309_0033cdb4(int param_1)

{
  float fVar1;
  int iVar2;
  int iVar3;
  Spline *pSVar4;
  
  iVar2 = *(int *)(param_1 + 0x78);
  if (*(int *)(iVar2 + 0x10c) == 0) {
    pSVar4 = Splines[*(int *)(iVar2 + 0xd0)];
  }
  else {
    pSVar4 = Splines[*(int *)(iVar2 + 0x150)];
  }
  iVar3 = pSVar4->cnt;
  *(int *)(iVar2 + 0xe8) = iVar3 + -2;
  fVar1 = pSVar4->points[iVar3 + -2].w;
  *(undefined4 *)(iVar2 + 0xe4) = 0;
  *(float *)(iVar2 + 0xec) = fVar1;
  *(undefined4 *)(iVar2 + 0xfc) = 0;
  *(undefined4 *)(iVar2 + 0xf8) = 0;
  *(undefined4 *)(iVar2 + 0xf4) = 0;
  *(undefined4 *)(iVar2 + 0xf0) = 0;
  return;
}


// 0x033ce30 (0x98 bytes)
void M309_0033ce30(MobyInstance *param_1)

{
  void *pvVar1;
  int handle;
  
  pvVar1 = param_1->pVar;
  param_1->collision = (ushort *)0x0;
  param_1->modeBits = param_1->modeBits | (UNK_40|DISABLED);
  handle = *(int *)((int)pvVar1 + 0x108);
  if (((handle != -1) && (g_SoundChannels[handle].pMoby == param_1)) &&
     (g_SoundChannels[handle].state != '\0')) {
    sound_Kill(handle);
  }
  *(undefined4 *)((int)pvVar1 + 0x108) = 0xffffffff;
  return;
}


// 0x033ced8 (0x278 bytes)
// inlined: FastAtan2 @0x33d024
void M31_0033ced8(int param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  int iVar6;
  Spline *pSVar7;
  ulonglong *puVar8;
  int iVar9;
  int iVar10;
  ulonglong uVar11;
  longlong lVar12;
  longlong lVar13;
  ulonglong uVar14;
  longlong lVar15;
  longlong lVar16;
  float *pfVar17;
  longlong lVar18;
  
  uVar11 = ZEXT48(&stack0x00000000);
  lVar12 = uVar11 - 0x60;
  puVar8 = (ulonglong *)lVar12;
  *puVar8 = uVar11;
  iVar6 = *(int *)(param_1 + 0x78);
  *(undefined4 *)(iVar6 + 0xe8) = 0;
  fVar1 = 0.0;
  *(undefined4 *)(iVar6 + 0xec) = 0;
  fVar2 = DAT_00811e78;
  *(undefined4 *)(iVar6 + 0x164) = 0;
  *(undefined4 *)(iVar6 + 0x168) = 0;
  *(undefined4 *)(iVar6 + 0x16c) = 0;
  *(undefined4 *)(iVar6 + 0xc0) = 0;
  *(undefined4 *)(iVar6 + 0xc4) = 0;
  *(float *)(iVar6 + 0x160) = fVar2 * 1.5;
  if (*(int *)(iVar6 + 0x10c) == 0) {
    pSVar7 = Splines[*(int *)(iVar6 + 0xd0)];
  }
  else {
    pSVar7 = Splines[*(int *)(iVar6 + 0x150)];
  }
  fVar2 = pSVar7->points[0].x;
  *(float *)(param_1 + 0x10) = fVar2;
  fVar3 = pSVar7->points[0].y;
  *(float *)(param_1 + 0x14) = fVar3;
  *(float *)(param_1 + 0x18) = pSVar7->points[0].z;
  *(float *)(param_1 + 0x1c) = pSVar7->points[0].w;
  fVar2 = pSVar7->points[1].x - fVar2;
  fVar3 = pSVar7->points[1].y - fVar3;
  fVar4 = ABS(fVar2);
  fVar5 = ABS(fVar3);
  *(float *)(puVar8 + 6) = fVar2;
  *(float *)((int)puVar8 + 0x34) = fVar3;
  *(float *)(puVar8 + 7) = fVar4 - fVar5;
  uVar14 = (ulonglong)(*(uint *)(puVar8 + 6) >> 0x1c) & 8 |
           (ulonglong)(*(uint *)(puVar8 + 7) >> 0x1e) & 2 |
           (ulonglong)(*(uint *)((int)puVar8 + 0x34) >> 0x1d) & 4;
  fVar2 = ABS(*(float *)(puVar8 + 6));
  if (*(float *)(puVar8 + 7) - 0.0 < 0.0) {
    fVar2 = fVar5;
  }
  fVar3 = *(float *)(&g_atanQuadrantTable + (int)(uVar14 << 2));
  fVar5 = ABS(*(float *)((int)puVar8 + 0x34));
  if (*(float *)(puVar8 + 7) - 0.0 < 0.0) {
    fVar5 = fVar4;
  }
  fVar4 = *(float *)(((uint)(uVar14 << 2) | 0x735900) + 4);
  if (0.0 < fVar2) {
    lVar16 = uVar11 - 0x50;
    lVar13 = uVar11 - 0x14;
    lVar15 = uVar11 - 0x24;
    lVar18 = 2;
    fVar2 = (fVar5 - fVar2) / (fVar5 + fVar2);
    fVar5 = fVar2 * fVar2;
    *(float *)(puVar8 + 9) = fVar2;
    *(float *)(puVar8 + 8) = fVar2;
    *(float *)((int)puVar8 + 0x44) = fVar2;
    *(float *)((int)puVar8 + 0x3c) = fVar2;
    fVar2 = fVar5 * fVar5;
    *(float *)(puVar8 + 8) = *(float *)(puVar8 + 8) * fVar5;
    *(float *)((int)puVar8 + 0x44) = *(float *)((int)puVar8 + 0x44) * fVar2;
    *(float *)(puVar8 + 9) = *(float *)(puVar8 + 9) * fVar2 * fVar5;
    do {
      *(float *)((int)lVar16 + 0x3c) = *(float *)((int)lVar16 + 0x2c) * fVar2 * fVar2;
      iVar9 = (int)lVar15;
      lVar15 = lVar15 + 8;
      lVar16 = lVar16 + 8;
      *(float *)((int)lVar13 + 4) = *(float *)(iVar9 + 4) * fVar2 * fVar2;
      lVar13 = lVar13 + 8;
      lVar18 = lVar18 + -1;
    } while (lVar18 != 0);
    lVar16 = uVar11 - 0x24;
    lVar18 = 4;
    pfVar17 = (float *)&DAT_007358e0;
    lVar13 = lVar16;
    lVar15 = lVar12;
    do {
      fVar2 = *pfVar17;
      fVar5 = pfVar17[1];
      pfVar17 = pfVar17 + 2;
      *(float *)((int)lVar15 + 0x3c) = *(float *)((int)lVar15 + 0x3c) * fVar2;
      lVar15 = lVar15 + 8;
      *(float *)((int)lVar13 + 4) = *(float *)((int)lVar13 + 4) * fVar5;
      lVar13 = lVar13 + 8;
      lVar18 = lVar18 + -1;
    } while (lVar18 != 0);
    lVar13 = 2;
    do {
      iVar9 = (int)lVar12;
      iVar10 = (int)lVar16;
      lVar12 = lVar12 + 0x10;
      lVar16 = lVar16 + 0x10;
      fVar1 = fVar1 + *(float *)(iVar9 + 0x3c) + *(float *)(iVar10 + 4) + *(float *)(iVar10 + 8) +
              *(float *)(iVar10 + 0xc);
      lVar13 = lVar13 + -1;
    } while (lVar13 != 0);
    fVar1 = (fVar1 + 0.7853982) * fVar3 + fVar4;
  }
  *(float *)(param_1 + 0x48) = fVar1;
  *(undefined4 *)(iVar6 + 0xe4) = 0;
  *(undefined4 *)(iVar6 + 0xfc) = 0;
  *(undefined4 *)(iVar6 + 0xf8) = 0;
  *(undefined4 *)(iVar6 + 0xf4) = 0;
  *(undefined4 *)(iVar6 + 0xf0) = 0;
  return;
}


// 0x033d150 (0x180 bytes)
void M31_0033d150(int param_1)

{
  int iVar1;
  Spline *pSVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  int iVar6;
  Spline *pSVar7;
  
  iVar1 = *(int *)(param_1 + 0x78);
  iVar6 = 0;
  pSVar2 = Splines[*(int *)(iVar1 + 0xd0)];
  pSVar7 = pSVar2;
  if (0 < pSVar2->cnt + -1) {
    do {
      fVar3 = pSVar7->points[0].y - pSVar7->points[1].y;
      fVar4 = pSVar7->points[0].x - pSVar7->points[1].x;
      fVar5 = pSVar7->points[0].z - pSVar7->points[1].z;
      iVar6 = iVar6 + 1;
      pSVar7->points[0].w = SQRT(fVar5 * fVar5 + fVar4 * fVar4 + fVar3 * fVar3);
      pSVar7 = (Spline *)pSVar7->points;
    } while (iVar6 < pSVar2->cnt + -1);
  }
  iVar6 = 0;
  pSVar2 = Splines[*(int *)(iVar1 + 0x150)];
  pSVar7 = pSVar2;
  if (0 < pSVar2->cnt + -1) {
    do {
      fVar3 = pSVar7->points[0].y - pSVar7->points[1].y;
      fVar4 = pSVar7->points[0].x - pSVar7->points[1].x;
      fVar5 = pSVar7->points[0].z - pSVar7->points[1].z;
      iVar6 = iVar6 + 1;
      pSVar7->points[0].w = SQRT(fVar5 * fVar5 + fVar4 * fVar4 + fVar3 * fVar3);
      pSVar7 = (Spline *)pSVar7->points;
    } while (iVar6 < pSVar2->cnt + -1);
  }
  iVar6 = 0;
  pSVar2 = Splines[*(int *)(iVar1 + 0xdc)];
  pSVar7 = pSVar2;
  if (0 < pSVar2->cnt + -1) {
    do {
      fVar3 = pSVar7->points[0].y - pSVar7->points[1].y;
      fVar4 = pSVar7->points[0].x - pSVar7->points[1].x;
      fVar5 = pSVar7->points[0].z - pSVar7->points[1].z;
      iVar6 = iVar6 + 1;
      pSVar7->points[0].w = SQRT(fVar5 * fVar5 + fVar4 * fVar4 + fVar3 * fVar3);
      pSVar7 = (Spline *)pSVar7->points;
    } while (iVar6 < pSVar2->cnt + -1);
  }
  *(undefined4 *)(iVar1 + 0x10c) = 0;
  return;
}


// 0x033d2f8 (0x2bc bytes)
void M31_0033d2f8(int param_1)

{
  float fVar1;
  undefined2 uVar2;
  undefined8 uVar3;
  int iVar4;
  int iVar5;
  undefined1 uVar6;
  int iVar7;
  ulonglong uVar8;
  undefined8 uVar9;
  double dVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  double dVar13;
  undefined8 uVar14;
  GPiece<16> auVar15;
  GPiece<16> auVar16;
  GPiece<16> auVar17;
  GPiece<48> local_80;
  
  if ((1 < *(byte *)(param_1 + 0x20)) && (*(byte *)(param_1 + 0x20) != 9)) {
    iVar5 = 0;
    iVar7 = 0;
    uVar9 = 0x3fc99999a0000000;
    uVar14 = 0x3ff0000000000000;
    uVar11 = 0x3fe8000000000000;
    uVar12 = 0x4103880000000000;
    auVar17 = loadVectorLeftIndexed(0x14,0x33d2d0);
    auVar17 = auVar17 >> 0x60 & (GPiece<16>)0xffffffff;
    auVar17 = auVar17 | auVar17 << 0x20 | auVar17 << 0x40 | auVar17 << 0x60;
    do {
      MB_randInt(0x10);
      MB_randInt(2);
      uVar3 = SpawnPart_23(uVar9,uVar14,uVar11,uVar12,local_80);
      iVar4 = (int)uVar3;
      if (iVar4 != 0) {
        auVar15 = ZEXT416(0xffffffff);
        auVar15 = auVar15 | auVar15 << 0x20 | auVar15 << 0x40 | auVar15 << 0x60;
        auVar15 = vectorShiftLeftIntegerWord(auVar15,auVar15);
        auVar16 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
        auVar15 = vectorMultiplyAddFloatingPoint(auVar16,auVar17,auVar15);
        auVar15 = vectorConvertToSignedFixedPointWordSaturate(auVar15,0);
        auVar16 = vectorSplatHalfWord(auVar15,1);
        auVar15 = auVar15 >> 0x60 & (GPiece<16>)0xff;
        uVar2 = storeVectorElementHalfWordIndexed(auVar16,10,uVar3);
        *(undefined2 *)(iVar4 + 10) = uVar2;
        *(undefined4 *)(iVar4 + 0x24) = 2;
        *(undefined1 *)(iVar4 + 0x2a) = 0x7f;
        uVar6 = storeVectorElementByteIndexed
                          (auVar15 | auVar15 << 8 | auVar15 << 0x10 | auVar15 << 0x18 |
                           auVar15 << 0x20 | auVar15 << 0x28 | auVar15 << 0x30 | auVar15 << 0x38 |
                           auVar15 << 0x40 | auVar15 << 0x48 | auVar15 << 0x50 | auVar15 << 0x58 |
                           auVar15 << 0x60 | auVar15 << 0x68 | auVar15 << 0x70 | auVar15 << 0x78,
                           0x2b,uVar3);
        *(undefined1 *)(iVar4 + 0x2b) = uVar6;
      }
      iVar5 = iVar5 + 1;
    } while (iVar5 < 2);
    uVar8 = (ulonglong)(uint)(int)(animationSpeed * 2.5);
    fVar1 = 100000.0;
    uVar9 = 0x3fa99999a0000000;
    dVar13 = 20000.0;
    do {
      dVar10 = (double)fVar1;
      iVar5 = SpawnPart_23(uVar9,uVar14,uVar14,dVar10,local_80);
      if (iVar5 != 0) {
        *(short *)(iVar5 + 10) = (short)uVar8;
        uVar6 = MB_randInt(0xff);
        *(undefined1 *)(iVar5 + 8) = uVar6;
        *(char *)(iVar5 + 0x2b) = (char)*(undefined2 *)(iVar5 + 10);
        *(undefined4 *)(iVar5 + 0x24) = 2;
        *(undefined1 *)(iVar5 + 0x2a) = 0x7f;
      }
      iVar7 = iVar7 + 1;
      fVar1 = (float)(dVar10 - dVar13);
      uVar8 = uVar8 << 1;
    } while (iVar7 < 3);
  }
  return;
}


// 0x033d5c8 (0x128 bytes)
void M31_0033d5c8(MobyInstance *param_1)

{
  u8 uVar1;
  void *pvVar2;
  double dVar3;
  
  uVar1 = param_1->state;
  pvVar2 = param_1->pVar;
  if ((uVar1 != '\t' && uVar1 != '\0') && (uVar1 != '\x01')) {
    dVar3 = (double)DAT_00811e78;
    if ((uVar1 == '\x02') || ((uVar1 == '\x03' || (uVar1 == '\a')))) {
      dVar3 = (double)(float)(dVar3 * 1.5);
    }
    else {
      AccelDelt(DAT_00811e74,0.002,0.2,0.0,(float *)((int)pvVar2 + 0x168),0x810000,
                          (float *)((int)pvVar2 + 0x16c));
      MB_BobMotion
                (DAT_00811e70,*(float *)((int)pvVar2 + 0x168),param_1,(float *)((int)pvVar2 + 0xc0),
                 (float *)((int)pvVar2 + 0xc4));
    }
    AccelDelt((float)dVar3,0.003,0.2,0.0,(float *)((int)pvVar2 + 0x160),0x33d5b4,
                        (float *)((int)pvVar2 + 0x164));
    MB_SwingMotion
              ((double)*(float *)((int)pvVar2 + 0x160),(double)DAT_00811e7c,(double)DAT_00811e80,
               param_1,(int)pvVar2 + 200,(int)pvVar2 + 0xcc);
  }
  return;
}


// 0x033d6f0 (0x138 bytes)
void M309_0033d6f0
               (undefined8 param_1,double param_2,double param_3,double param_4,undefined8 param_5,
               undefined8 param_6,undefined8 param_7,int param_8,float *param_9)

{
  char cVar1;
  int iVar2;
  float *unused;
  
  cVar1 = *(char *)(param_8 + 0x20);
  if (((cVar1 == '\x05' || cVar1 == '\x04') || (cVar1 == '\x06')) || (cVar1 == '\b')) {
    iVar2 = *(int *)(param_8 + 0x78);
    unused = param_9;
    AccelDelt(*param_9,(float)param_2,(float)param_3,(float)param_4,
                        (float *)(param_8 + 0x10),(int)param_9,(float *)(iVar2 + 0xf0));
    AccelDelt(param_9[1],(float)param_2,(float)param_3,(float)param_4,
                        (float *)(param_8 + 0x14),(int)unused,(float *)(iVar2 + 0xf4));
    AccelDelt(param_9[2],(float)param_2,(float)param_3,(float)param_4,
                        (float *)(param_8 + 0x18),(int)unused,(float *)(iVar2 + 0xf8));
    OrganicDeltAngSpeed(param_1,param_5,param_6,param_7,param_8);
  }
  return;
}


// 0x033d830 (0x9c bytes)
void M309_0033d830(int param_1)

{
  int iVar1;
  Spline *pSVar2;
  
  iVar1 = *(int *)(param_1 + 0x78);
  if ((*(char *)(param_1 + 0x20) != '\t' && *(char *)(param_1 + 0x20) != '\0') &&
     (pSVar2 = Splines[*(int *)(iVar1 + 0xd4)],
     MB_getTargetInArea
               (0x406fe00000000000,param_1,iVar1 + 0x70,pSVar2,0,0,pSVar2->points,pSVar2->cnt),
     *(int *)(iVar1 + 0xb0) == 0)) {
    *(MobyInstance **)(iVar1 + 0xb0) = g_heroMobyPtr;
  }
  return;
}


// 0x033d8d0 (0x1d0 bytes)
void M31_0033d8d0(MobyInstance *param_1)

{
  MOBY_OCLASSES MVar1;
  MobyModeBit MVar2;
  void *pvVar3;
  float fVar4;
  int iVar5;
  ulonglong uVar6;
  double dVar7;
  int local_20;
  float local_1c;
  
  pvVar3 = param_1->pVar;
  uVar6 = ZEXT48(pvVar3);
  if (param_1->state == '\t' || param_1->state == '\0') {
    return;
  }
  param_1->scale = param_1->pClass->gScale;
  dVar7 = 0.0;
  local_1c = 0.0;
  iVar5 = MB_damage(param_1,0x330000,0);
  if (((iVar5 != 0) && (*(int *)(iVar5 + 0x20) != 0)) &&
     ((MVar1 = *(MOBY_OCLASSES *)(*(int *)(iVar5 + 0x20) + 0xa6), MVar1 == param_1->oClass ||
      (MVar1 == (DOOR_LEFT|EXPLOSION_0070))))) {
    iVar5 = 0;
  }
  iVar5 = MB_HandleDamage(param_1,iVar5,uVar6 + 0x20,0,&local_20,&local_1c,0,4);
  if ((local_20 == 1) || (param_1->state == '\t')) goto LAB_0033da6c;
  MVar2 = param_1->modeBits;
  fVar4 = *(float *)((int)pvVar3 + 0x20) - local_1c;
  *(float *)((int)pvVar3 + 0x20) = fVar4;
  if ((double)fVar4 <= dVar7) {
LAB_0033da28:
    param_1->state = '\t';
    param_1->modeBits =
         MVar2 & (MIRROR|CAN_BE_DAMAGED|HIDE_BACKFACES|DISABLE_Z_WRITE|DRAW_SHADOW|
                  DRAW_TRANSPARENT_WEIRD|LOCK_ROTATION|NO_DRAW|UNK_40|HAS_SPECIAL_VARS|HAS_GLOW|
                  TRANSPARENT|NO_POST_UPDATE|NO_UPDATE|DISABLED);
    *(undefined1 *)((int)pvVar3 + 0x67) = 0xfa;
    MB_SpawnBoltsFromCrate(param_1,0,0xffffffffffffffff);
  }
  else if (iVar5 < 3) {
    if ((-1 < iVar5) && (0 < iVar5)) goto LAB_0033da28;
  }
  else if (iVar5 < 0xb) {
    if (iVar5 < 9) {
      MB_SetAnimation(param_1,2,0,5);
      param_1->unk58 = 1.75;
    }
    *(undefined1 *)((int)pvVar3 + 0x67) = 0xfa;
  }
  MB_UpdateLightsTransition(param_1,uVar6 + 0x60);
LAB_0033da6c:
  param_1->damage = -1;
  MB_ColorDyingMoby(param_1,uVar6 + 0x60);
  return;
}


// 0x033dad8 (0x1abc bytes)
// inlined: FastAtan2 @0x33e0a0, FastAtan2 @0x33e4e0, FastAtan2 @0x33ebc0, FastAtan2 @0x33edc8
// strings: 0065623c: 'Hovertank with no introPath. UID: %d\n' | 00656264: 'Hovertank with a intro path that has no points. UID: %d\n' | 006562a4: 'Hovertank with no boundPath. UID: %d\n' | 006562cc: 'Hovertank with a bound path that has no points. UID: %d\n' | 0065630c: 'Hovertank with no bombPath. UID: %d\n' | 00656334: 'Hovertank with a bomb path that has no points. UID: %d\n' | 0065636c: 'Hovertank with no exit Path. UID: %d\n' | 00656394: 'Hovertank with a exit path that has no points. UID: %d\n'

/* Moby 31 */

void UpdateMoby_31(MobyInstance *moby)

{
  byte bVar1;
  u8 uVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  MobyModeBit MVar14;
  void *pvVar15;
  void *pvVar16;
  Spline *pSVar17;
  undefined2 uVar18;
  undefined4 uVar19;
  ulonglong *puVar20;
  int iVar21;
  float fVar22;
  ulonglong uVar23;
  ulonglong uVar24;
  longlong lVar25;
  longlong lVar26;
  int iVar27;
  longlong lVar28;
  uint unused;
  longlong lVar29;
  float *pfVar30;
  Vec4 *pVVar31;
  short sVar32;
  longlong lVar33;
  ulonglong unaff_r23;
  ulonglong unaff_r24;
  ulonglong unaff_r25;
  ulonglong unaff_r26;
  ulonglong unaff_r27;
  ulonglong unaff_r28;
  ulonglong unaff_r29;
  ulonglong uVar34;
  ulonglong unaff_r30;
  ulonglong unaff_r31;
  ulonglong in_LR;
  longlong lVar35;
  undefined8 uVar36;
  ulonglong in_f25;
  double dVar37;
  ulonglong in_f26;
  double dVar38;
  ulonglong in_f27;
  double dVar39;
  ulonglong in_f28;
  double dVar40;
  ulonglong in_f29;
  double dVar41;
  ulonglong in_f30;
  double dVar42;
  ulonglong in_f31;
  double dVar43;
  GPiece<16> auVar44;
  GPiece<16> auVar45;
  GPiece<16> auVar46;
  GPiece<16> auVar47;
  GPiece<16> auVar48;
  GPiece<16> auVar49;
  GPiece<16> auVar50;
  GPiece<16> auVar51;
  GPiece<16> auVar52;
  GPiece<16> auVar53;
  GPiece<16> auVar54;
  GPiece<16> auVar55;
  GPiece<16> auVar56;
  GPiece<16> auVar57;
  GPiece<16> auVar58;
  
  lVar26 = (longlong)(int)moby;
  uVar23 = ZEXT48(&stack0x00000000);
  lVar25 = uVar23 - 0x250;
  puVar20 = (ulonglong *)lVar25;
  *puVar20 = uVar23;
  puVar20[0x4c] = in_LR;
  puVar20[0x43] = in_f25;
  puVar20[0x44] = in_f26;
  puVar20[0x45] = in_f27;
  puVar20[0x46] = in_f28;
  puVar20[0x47] = in_f29;
  puVar20[0x48] = in_f30;
  puVar20[0x49] = in_f31;
  puVar20[0x42] = unaff_r31;
  bVar1 = moby->field43_0x70;
  unused = (uint)bVar1;
  puVar20[0x40] = unaff_r29;
  pvVar15 = moby->pVar;
  uVar34 = ZEXT48(pvVar15);
  puVar20[0x41] = unaff_r30;
  puVar20[0x3f] = unaff_r28;
  puVar20[0x3e] = unaff_r27;
  puVar20[0x3d] = unaff_r26;
  puVar20[0x3c] = unaff_r25;
  puVar20[0x3b] = unaff_r24;
  puVar20[0x3a] = unaff_r23;
  if ((bVar1 & 2) != 0) {
    bVar1 = moby->updateId;
    unused = (uint)moby->animationId;
    if (bVar1 == moby->animationId && bVar1 != 0) {
      if (bVar1 == 2) {
        unused = 0;
        MB_SetAnimation(lVar26,0,0,10);
      }
      else {
        unused = 0;
        MB_SetAnimationNoBlend(lVar26,0,0);
      }
    }
  }
  M31_0033d8d0(lVar26);
  pvVar16 = moby->pVar;
  if ((moby->state != '\0') && (moby->state != '\t')) {
    lVar28 = ZEXT48(pvVar16) + 0x70;
    pSVar17 = Splines[*(int *)((int)pvVar16 + 0xd4)];
    MB_getTargetInArea
              (0x406fe00000000000,lVar26,lVar28,pSVar17,0,0,pSVar17->points,pSVar17->cnt);
    unused = (uint)lVar28;
    if (*(int *)((int)pvVar16 + 0xb0) == 0) {
      *(MobyInstance **)((int)pvVar16 + 0xb0) = g_heroMobyPtr;
    }
  }
  uVar2 = moby->state;
  dVar43 = (double)*(float *)((int)pvVar15 + 0x17c);
  dVar42 = (double)*(float *)((int)pvVar15 + 0x170);
  dVar41 = (double)*(float *)((int)pvVar15 + 0x174);
  dVar40 = (double)*(float *)((int)pvVar15 + 0x178);
  dVar39 = (double)*(float *)((int)pvVar15 + 0x154);
  dVar38 = (double)*(float *)((int)pvVar15 + 0x158);
  dVar37 = (double)*(float *)((int)pvVar15 + 0x15c);
  if (((uVar2 == '\x05' || uVar2 == '\x04') || (uVar2 == '\x06')) || (uVar2 == '\b')) {
    pvVar16 = moby->pVar;
    AccelDelt(*(float *)((int)pvVar15 + 0x180),*(float *)((int)pvVar15 + 0x170),
                        *(float *)((int)pvVar15 + 0x174),*(float *)((int)pvVar15 + 0x178),
                        &(moby->pos).x,unused,(float *)((int)pvVar16 + 0xf0));
    AccelDelt(*(float *)((int)pvVar15 + 0x184),(float)dVar42,(float)dVar41,(float)dVar40,
                        &(moby->pos).y,unused,(float *)((int)pvVar16 + 0xf4));
    AccelDelt(*(float *)((int)pvVar15 + 0x188),(float)dVar42,(float)dVar41,(float)dVar40,
                        &(moby->pos).z,unused,(float *)((int)pvVar16 + 0xf8));
    OrganicDeltAngSpeed(dVar43,dVar39,dVar38,dVar37,lVar26);
  }
  M31_0033d5c8(lVar26);
  M31_0033d2f8(lVar26);
  if (((moby->enabled != '\0') &&
      (fVar3 = (moby->pos).y - GameCamera.posY, fVar4 = (moby->pos).x - GameCamera.posX,
      fVar6 = (moby->pos).z - GameCamera.posZ,
      SQRT(fVar6 * fVar6 + fVar4 * fVar4 + fVar3 * fVar3) < 40.0)) &&
     ((1 < moby->state && (moby->state != 9)))) {
    MB_SetZBoundsFromGround(lVar26);
  }
  bVar1 = moby->state;
  if (bVar1 < 5) {
    if (bVar1 < 2) {
      if (bVar1 == 0) {
        if (*(int *)((int)pvVar15 + 0xd0) == -1) {
          printf("Hovertank with no introPath. UID: %d\n",moby->uid);
          DeleteMoby(moby);
          return;
        }
        pSVar17 = Splines[*(int *)((int)pvVar15 + 0xd0)];
        if (pSVar17->cnt == 0) {
          printf("Hovertank with a intro path that has no points. UID: %d\n",moby->uid);
          DeleteMoby(moby);
          return;
        }
        if (*(int *)((int)pvVar15 + 0xd4) == -1) {
          printf("Hovertank with no boundPath. UID: %d\n",moby->uid);
          DeleteMoby(moby);
          return;
        }
        if (Splines[*(int *)((int)pvVar15 + 0xd4)]->cnt == 0) {
          printf("Hovertank with a bound path that has no points. UID: %d\n",moby->uid);
          DeleteMoby(moby);
          return;
        }
        if (*(int *)((int)pvVar15 + 0xd8) == -1) {
          printf("Hovertank with no bombPath. UID: %d\n",moby->uid);
          DeleteMoby(moby);
          return;
        }
        if (Splines[*(int *)((int)pvVar15 + 0xd8)]->cnt == 0) {
          printf("Hovertank with a bomb path that has no points. UID: %d\n",moby->uid);
          DeleteMoby(moby);
          return;
        }
        if (*(int *)((int)pvVar15 + 0x150) == -1) {
          printf("Hovertank with no exit Path. UID: %d\n",moby->uid);
          DeleteMoby(moby);
          return;
        }
        if (Splines[*(int *)((int)pvVar15 + 0x150)]->cnt == 0) {
          printf("Hovertank with a exit path that has no points. UID: %d\n",moby->uid);
          DeleteMoby(moby);
          return;
        }
        fVar3 = pSVar17->points[0].x;
        (moby->pos).x = fVar3;
        fVar4 = pSVar17->points[0].y;
        (moby->pos).y = fVar4;
        (moby->pos).z = pSVar17->points[0].z;
        iVar27 = *(int *)((int)pvVar15 + 0xd0);
        (moby->pos).w = pSVar17->points[0].w;
        fVar3 = Splines[iVar27]->points[1].x - fVar3;
        fVar4 = Splines[iVar27]->points[1].y - fVar4;
        fVar6 = ABS(fVar3);
        fVar5 = ABS(fVar4);
        *(float *)((int)puVar20 + 0x114) = fVar3;
        *(float *)(puVar20 + 0x23) = fVar4;
        *(float *)((int)puVar20 + 0x11c) = fVar6 - fVar5;
        fVar4 = 0.0;
        uVar24 = (ulonglong)(*(uint *)((int)puVar20 + 0x114) >> 0x1c) & 8 |
                 (ulonglong)(*(uint *)((int)puVar20 + 0x11c) >> 0x1e) & 2 |
                 (ulonglong)(*(uint *)(puVar20 + 0x23) >> 0x1d) & 4;
        fVar3 = ABS(*(float *)((int)puVar20 + 0x114));
        if (*(float *)((int)puVar20 + 0x11c) - 0.0 < 0.0) {
          fVar3 = fVar5;
        }
        fVar13 = *(float *)(&g_atanQuadrantTable + (int)(uVar24 << 2));
        fVar5 = *(float *)(((uint)(uVar24 << 2) | 0x735900) + 4);
        fVar22 = ABS(*(float *)(puVar20 + 0x23));
        if (*(float *)((int)puVar20 + 0x11c) - 0.0 < 0.0) {
          fVar22 = fVar6;
        }
        if (0.0 < fVar3) {
          lVar28 = uVar23 - 0x240;
          lVar29 = uVar23 - 0xd0;
          lVar33 = uVar23 - 0xc0;
          lVar35 = 2;
          fVar3 = (fVar22 - fVar3) / (fVar22 + fVar3);
          fVar6 = fVar3 * fVar3;
          *(float *)((int)puVar20 + 0x18c) = fVar3;
          *(float *)((int)puVar20 + 0x184) = fVar3;
          *(float *)(puVar20 + 0x31) = fVar3;
          *(float *)(puVar20 + 0x30) = fVar3;
          fVar3 = fVar6 * fVar6;
          *(float *)((int)puVar20 + 0x184) = *(float *)((int)puVar20 + 0x184) * fVar6;
          *(float *)(puVar20 + 0x31) = *(float *)(puVar20 + 0x31) * fVar3;
          *(float *)((int)puVar20 + 0x18c) = *(float *)((int)puVar20 + 0x18c) * fVar3 * fVar6;
          do {
            *(float *)((int)lVar28 + 0x180) = *(float *)((int)lVar28 + 0x170) * fVar3 * fVar3;
            iVar27 = (int)lVar29;
            lVar28 = lVar28 + 8;
            lVar29 = lVar29 + 8;
            *(float *)((int)lVar33 + 4) = *(float *)(iVar27 + 4) * fVar3 * fVar3;
            lVar33 = lVar33 + 8;
            lVar35 = lVar35 + -1;
          } while (lVar35 != 0);
          lVar35 = 4;
          lVar33 = uVar23 - 0xd0;
          pfVar30 = (float *)&DAT_007358e0;
          lVar28 = lVar25;
          lVar29 = lVar33;
          do {
            fVar3 = *pfVar30;
            fVar6 = pfVar30[1];
            pfVar30 = pfVar30 + 2;
            *(float *)((int)lVar28 + 0x180) = *(float *)((int)lVar28 + 0x180) * fVar3;
            lVar28 = lVar28 + 8;
            *(float *)((int)lVar29 + 4) = *(float *)((int)lVar29 + 4) * fVar6;
            lVar29 = lVar29 + 8;
            lVar35 = lVar35 + -1;
          } while (lVar35 != 0);
          lVar28 = 2;
          do {
            iVar27 = (int)lVar25;
            iVar21 = (int)lVar33;
            lVar25 = lVar25 + 0x10;
            lVar33 = lVar33 + 0x10;
            fVar4 = fVar4 + *(float *)(iVar27 + 0x180) + *(float *)(iVar21 + 4) +
                    *(float *)(iVar21 + 8) + *(float *)(iVar21 + 0xc);
            lVar28 = lVar28 + -1;
          } while (lVar28 != 0);
          fVar4 = (fVar4 + 0.7853982) * fVar13 + fVar5;
        }
        (moby->rotation).z = fVar4;
        uVar19 = DAT_00811e78;
        *(undefined4 *)((int)pvVar15 + 0x164) = 0;
        *(undefined4 *)((int)pvVar15 + 0x160) = uVar19;
        *(undefined4 *)((int)pvVar15 + 0x168) = 0;
        *(undefined4 *)((int)pvVar15 + 0x16c) = 0;
        M31_0033d150(lVar26);
        MVar14 = moby->modeBits;
        pvVar16 = moby->pVar;
        *(undefined4 *)((int)pvVar15 + 0x108) = 0xffffffff;
        moby->updateDistance = -0x80;
        moby->state = '\x01';
        moby->modeBits = MVar14 | (UNK_40|DISABLED);
        moby->collision = (ushort *)0x0;
        iVar27 = *(int *)((int)pvVar16 + 0x108);
        if (((iVar27 != -1) && (g_SoundChannels[iVar27].pMoby == moby)) &&
           (g_SoundChannels[iVar27].state != '\0')) {
          sound_Kill(iVar27);
        }
        *(undefined4 *)((int)pvVar16 + 0x108) = 0xffffffff;
        FastMemSet(uVar34 + 0x110,0,0x40);
        AttachManipulator(moby,0,(int)(uVar34 + 0x110));
        moby->shadow = ' ';
      }
      else if (*(int *)((int)pvVar15 + 0xb4) != 2) {
        moby->state = '\x02';
        moby->modeBits =
             moby->modeBits &
             (MIRROR|CAN_BE_DAMAGED|HIDE_BACKFACES|CAN_BE_AUTO_TARGETED|DISABLE_Z_WRITE|DRAW_SHADOW|
              DRAW_TRANSPARENT_WEIRD|LOCK_ROTATION|NO_DRAW|HAS_SPECIAL_VARS|HAS_GLOW|TRANSPARENT|
              NO_POST_UPDATE|NO_UPDATE);
        moby->collision = moby->pClass->collision;
        M31_0033ced8(lVar26);
      }
    }
    else if (bVar1 < 3) {
      if (*(int *)((int)pvVar15 + 0x10c) == 0) {
        pSVar17 = Splines[*(int *)((int)pvVar15 + 0xd0)];
      }
      else {
        pSVar17 = Splines[*(int *)((int)pvVar15 + 0x150)];
      }
      if (*(int *)((int)pvVar15 + 0xb4) == 2) {
        moby->state = '\x03';
      }
      else {
        iVar27 = M31_0033cad0
                           ((double)(DAT_0071f408 * DAT_00811e84),(double)DAT_00811eac,
                            (double)DAT_00811eb0,(double)DAT_010bd020,(double)DAT_00811eb4,
                            (double)DAT_00811eb8,(double)DAT_010bd024,lVar26,pSVar17,uVar34 + 0xe8,
                            uVar34 + 0xec);
        fVar22 = DAT_010bd024;
        fVar13 = DAT_010bd020;
        fVar5 = DAT_00811eb8;
        fVar6 = DAT_00811eb4;
        fVar4 = DAT_00811eb0;
        fVar3 = DAT_00811eac;
        if (iVar27 != 0) {
          pVVar31 = pSVar17->points + pSVar17->cnt + -1;
          *(float *)((int)pvVar15 + 0x180) = pVVar31->x;
          *(float *)((int)pvVar15 + 0x184) = pVVar31->y;
          *(float *)((int)pvVar15 + 0x188) = pVVar31->z;
          pSVar17 = Splines[*(int *)((int)pvVar15 + 0xdc)];
          *(float *)((int)pvVar15 + 0x18c) = pVVar31->w;
          if (*(int *)((int)pvVar15 + 0x10c) == 0) {
            fVar7 = pSVar17->points[0].x;
            fVar8 = pSVar17->points[0].y;
            fVar9 = pSVar17->points[pSVar17->cnt + -1].x;
            fVar10 = pSVar17->points[pSVar17->cnt + -1].y;
          }
          else {
            fVar9 = pSVar17->points[0].x;
            fVar10 = pSVar17->points[0].y;
            fVar7 = pSVar17->points[pSVar17->cnt + -1].x;
            fVar8 = pSVar17->points[pSVar17->cnt + -1].y;
          }
          fVar11 = ABS(fVar9 - fVar7);
          fVar12 = ABS(fVar10 - fVar8);
          *(float *)(puVar20 + 0x21) = fVar9 - fVar7;
          *(float *)((int)puVar20 + 0x10c) = fVar10 - fVar8;
          *(float *)(puVar20 + 0x22) = fVar11 - fVar12;
          fVar7 = 0.0;
          uVar34 = (ulonglong)(*(uint *)(puVar20 + 0x21) >> 0x1c) & 8 |
                   (ulonglong)(*(uint *)(puVar20 + 0x22) >> 0x1e) & 2 |
                   (ulonglong)(*(uint *)((int)puVar20 + 0x10c) >> 0x1d) & 4;
          fVar8 = ABS(*(float *)(puVar20 + 0x21));
          if (*(float *)(puVar20 + 0x22) - 0.0 < 0.0) {
            fVar8 = fVar12;
          }
          fVar10 = *(float *)(&g_atanQuadrantTable + (int)(uVar34 << 2));
          fVar9 = *(float *)(((uint)(uVar34 << 2) | 0x735900) + 4);
          fVar12 = ABS(*(float *)((int)puVar20 + 0x10c));
          if (*(float *)(puVar20 + 0x22) - 0.0 < 0.0) {
            fVar12 = fVar11;
          }
          if (0.0 < fVar8) {
            lVar26 = uVar23 - 0x240;
            lVar29 = uVar23 - 0xe0;
            lVar28 = uVar23 - 0xf0;
            lVar33 = 2;
            fVar8 = (fVar12 - fVar8) / (fVar12 + fVar8);
            fVar11 = fVar8 * fVar8;
            *(float *)((int)puVar20 + 0x16c) = fVar8;
            *(float *)((int)puVar20 + 0x164) = fVar8;
            *(float *)(puVar20 + 0x2d) = fVar8;
            *(float *)(puVar20 + 0x2c) = fVar8;
            fVar8 = fVar11 * fVar11;
            *(float *)((int)puVar20 + 0x164) = *(float *)((int)puVar20 + 0x164) * fVar11;
            *(float *)(puVar20 + 0x2d) = *(float *)(puVar20 + 0x2d) * fVar8;
            *(float *)((int)puVar20 + 0x16c) = *(float *)((int)puVar20 + 0x16c) * fVar8 * fVar11;
            do {
              *(float *)((int)lVar26 + 0x160) = *(float *)((int)lVar26 + 0x150) * fVar8 * fVar8;
              iVar27 = (int)lVar28;
              lVar28 = lVar28 + 8;
              lVar26 = lVar26 + 8;
              *(float *)((int)lVar29 + 4) = *(float *)(iVar27 + 4) * fVar8 * fVar8;
              lVar29 = lVar29 + 8;
              lVar33 = lVar33 + -1;
            } while (lVar33 != 0);
            lVar33 = 4;
            lVar29 = uVar23 - 0xf0;
            pfVar30 = (float *)&DAT_007358e0;
            lVar26 = lVar25;
            lVar28 = lVar29;
            do {
              fVar8 = *pfVar30;
              fVar11 = pfVar30[1];
              pfVar30 = pfVar30 + 2;
              *(float *)((int)lVar26 + 0x160) = *(float *)((int)lVar26 + 0x160) * fVar8;
              lVar26 = lVar26 + 8;
              *(float *)((int)lVar28 + 4) = *(float *)((int)lVar28 + 4) * fVar11;
              lVar28 = lVar28 + 8;
              lVar33 = lVar33 + -1;
            } while (lVar33 != 0);
            lVar26 = 2;
            do {
              iVar27 = (int)lVar25;
              lVar25 = lVar25 + 0x10;
              iVar21 = (int)lVar29;
              lVar29 = lVar29 + 0x10;
              fVar7 = fVar7 + *(float *)(iVar27 + 0x160) + *(float *)(iVar21 + 4) +
                      *(float *)(iVar21 + 8) + *(float *)(iVar21 + 0xc);
              lVar26 = lVar26 + -1;
            } while (lVar26 != 0);
            fVar7 = (fVar7 + 0.7853982) * fVar10 + fVar9;
          }
          *(float *)((int)pvVar15 + 0x17c) = fVar7;
          *(float *)((int)pvVar15 + 0x170) = fVar3;
          *(float *)((int)pvVar15 + 0x174) = fVar4;
          *(float *)((int)pvVar15 + 0x178) = fVar13;
          *(float *)((int)pvVar15 + 0x154) = fVar6;
          *(float *)((int)pvVar15 + 0x158) = fVar5;
          *(float *)((int)pvVar15 + 0x15c) = fVar22;
          moby->state = '\x04';
          *(undefined4 *)((int)pvVar15 + 0x104) = 0;
          *(undefined2 *)((int)pvVar15 + 0x102) = 0;
        }
      }
    }
    else if (bVar1 < 4) {
      if (*(int *)((int)pvVar15 + 0x10c) == 0) {
        pSVar17 = Splines[*(int *)((int)pvVar15 + 0xd0)];
      }
      else {
        pSVar17 = Splines[*(int *)((int)pvVar15 + 0x150)];
      }
      if (*(int *)((int)pvVar15 + 0xb4) == 2) {
        iVar27 = M31_0033cad0
                           (-(double)(DAT_0071f408 * DAT_00811e8c),(double)DAT_00811ebc,
                            (double)DAT_00811eb0,(double)DAT_010bd020,(double)DAT_00811ec0,
                            (double)DAT_00811eb8,(double)DAT_010bd024,lVar26,pSVar17,uVar34 + 0xe8,
                            uVar34 + 0xec,&DAT_00810000,uVar34 + 0xf0,uVar34 + 0xe4);
        if (iVar27 != 0) {
          pvVar16 = moby->pVar;
          moby->state = '\x01';
          moby->collision = (ushort *)0x0;
          moby->modeBits = moby->modeBits | (UNK_40|DISABLED);
          iVar27 = *(int *)((int)pvVar16 + 0x108);
          if (((iVar27 != -1) && (g_SoundChannels[iVar27].pMoby == moby)) &&
             (g_SoundChannels[iVar27].state != '\0')) {
            sound_Kill(iVar27);
          }
          *(undefined4 *)((int)pvVar16 + 0x108) = 0xffffffff;
        }
      }
      else {
        moby->state = '\x02';
      }
    }
    else {
      puVar20[0x34] = (longlong)DAT_00811e98;
      puVar20[0x34] = (longlong)(int)(animationSpeed * ((float)(longlong)puVar20[0x34] + 0.5));
      dVar37 = (double)FastIntToDouble(*(undefined4 *)((int)puVar20 + 0x1a4));
      puVar20[0x34] = (longlong)(int)*(short *)((int)pvVar15 + 0x102);
      dVar38 = 0.0;
      MB_CosineInterpolate
                (0,(double)*(float *)((int)pvVar15 + 0x104),
                 (double)(float)((double)(longlong)puVar20[0x34] / dVar37));
      FastQuaternionToEuler(uVar34 + 0x120,2);
      fVar3 = (moby->pos).y - *(float *)(*(int *)((int)pvVar15 + 0xb0) + 0x14);
      fVar4 = (moby->pos).x - *(float *)(*(int *)((int)pvVar15 + 0xb0) + 0x10);
      if (DAT_00811ea8 <= SQRT(fVar4 * fVar4 + fVar3 * fVar3)) {
        if (*(int *)((int)pvVar15 + 0xb4) == 2) {
          pvVar16 = moby->pVar;
          moby->state = '\x03';
          if (*(int *)((int)pvVar16 + 0x10c) == 0) {
            pSVar17 = Splines[*(int *)((int)pvVar16 + 0xd0)];
          }
          else {
            pSVar17 = Splines[*(int *)((int)pvVar16 + 0x150)];
          }
          iVar27 = pSVar17->cnt;
          *(int *)((int)pvVar16 + 0xe8) = iVar27 + -2;
          fVar3 = pSVar17->points[iVar27 + -2].w;
          *(undefined4 *)((int)pvVar16 + 0xe4) = 0;
          *(float *)((int)pvVar16 + 0xec) = fVar3;
          *(undefined4 *)((int)pvVar16 + 0xfc) = 0;
          *(undefined4 *)((int)pvVar16 + 0xf8) = 0;
          *(undefined4 *)((int)pvVar16 + 0xf4) = 0;
          *(undefined4 *)((int)pvVar16 + 0xf0) = 0;
        }
        else {
          iVar27 = FastDecTimerS16(uVar34 + 0x102);
          if ((iVar27 != 0) && (moby->animationId != '\x02')) {
            auVar45 = ZEXT416(0xffffffff);
            auVar45 = auVar45 | auVar45 << 0x20 | auVar45 << 0x40 | auVar45 << 0x60;
            moby->state = '\x05';
            auVar46 = vectorShiftLeftIntegerWord(auVar45,auVar45);
            auVar45 = loadVectorLeftIndexed(0x1e94,0x810000);
            auVar44 = vectorConvertFromSignedFixedPointWord(auVar45,0);
            auVar45 = loadVectorLeftIndexed(0x10,0x33daa0);
            auVar45 = auVar45 >> 0x60 & (GPiece<16>)0xffffffff;
            auVar47 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
            auVar45 = vectorAddFloatingPoint
                                (auVar44,auVar45 | auVar45 << 0x20 | auVar45 << 0x40 |
                                         auVar45 << 0x60);
            auVar45 = vectorMultiplyAddFloatingPoint(auVar47,auVar45,auVar46);
            auVar45 = vectorConvertToSignedFixedPointWordSaturate(auVar45,0);
            auVar45 = vectorSplatHalfWord(auVar45,1);
            uVar18 = storeVectorElementHalfWordIndexed(auVar45,0x102,uVar34);
            *(undefined2 *)((int)pvVar15 + 0x102) = uVar18;
            *(undefined2 *)((int)pvVar15 + 0x100) = 0;
            *(undefined4 *)((int)pvVar15 + 0x104) = 0;
          }
        }
      }
      else {
        if (*(int *)((int)pvVar15 + 0x10c) == 0) {
          *(undefined4 *)((int)pvVar15 + 0xe8) = 0;
        }
        else {
          iVar27 = Splines[*(int *)((int)pvVar15 + 0xdc)]->cnt;
          *(int *)((int)pvVar15 + 0xe8) = iVar27 + -2;
          dVar38 = (double)Splines[*(int *)((int)pvVar15 + 0xdc)]->points[iVar27 + -2].w;
        }
        *(float *)((int)pvVar15 + 0xec) = (float)dVar38;
        moby->state = '\a';
        *(undefined4 *)((int)pvVar15 + 0xe4) = 0;
        *(undefined4 *)((int)pvVar15 + 0xfc) = 0;
        *(undefined4 *)((int)pvVar15 + 0xf8) = 0;
        *(undefined4 *)((int)pvVar15 + 0xf4) = 0;
        *(undefined4 *)((int)pvVar15 + 0xf0) = 0;
      }
    }
  }
  else if (bVar1 < 8) {
    if (bVar1 < 6) {
      iVar27 = (int)((longlong)*(short *)((int)pvVar15 + 0x100) << 4);
      fVar3 = *(float *)((int)&Splines[*(int *)((int)pvVar15 + 0xd8)]->points[0].x + iVar27) -
              (moby->pos).x;
      fVar4 = *(float *)((int)&Splines[*(int *)((int)pvVar15 + 0xd8)]->points[0].y + iVar27) -
              (moby->pos).y;
      fVar5 = ABS(fVar3);
      fVar6 = ABS(fVar4);
      *(float *)(puVar20 + 0x1e) = fVar3;
      *(float *)((int)puVar20 + 0xf4) = fVar4;
      *(float *)(puVar20 + 0x1f) = fVar5 - fVar6;
      dVar37 = 0.0;
      uVar24 = (ulonglong)(*(uint *)(puVar20 + 0x1e) >> 0x1c) & 8 |
               (ulonglong)(*(uint *)(puVar20 + 0x1f) >> 0x1e) & 2 |
               (ulonglong)(*(uint *)((int)puVar20 + 0xf4) >> 0x1d) & 4;
      fVar3 = ABS(*(float *)(puVar20 + 0x1e));
      if (*(float *)(puVar20 + 0x1f) - 0.0 < 0.0) {
        fVar3 = fVar6;
      }
      fVar6 = *(float *)(&g_atanQuadrantTable + (int)(uVar24 << 2));
      fVar4 = *(float *)(((uint)(uVar24 << 2) | 0x735900) + 4);
      fVar13 = ABS(*(float *)((int)puVar20 + 0xf4));
      if (*(float *)(puVar20 + 0x1f) - 0.0 < 0.0) {
        fVar13 = fVar5;
      }
      if (0.0 < fVar3) {
        lVar28 = uVar23 - 0x240;
        lVar33 = uVar23 - 0x120;
        lVar29 = uVar23 - 0x130;
        lVar35 = 2;
        fVar3 = (fVar13 - fVar3) / (fVar13 + fVar3);
        fVar5 = fVar3 * fVar3;
        *(float *)((int)puVar20 + 300) = fVar3;
        *(float *)((int)puVar20 + 0x124) = fVar3;
        *(float *)(puVar20 + 0x25) = fVar3;
        *(float *)(puVar20 + 0x24) = fVar3;
        fVar3 = fVar5 * fVar5;
        *(float *)((int)puVar20 + 0x124) = *(float *)((int)puVar20 + 0x124) * fVar5;
        *(float *)(puVar20 + 0x25) = *(float *)(puVar20 + 0x25) * fVar3;
        *(float *)((int)puVar20 + 300) = *(float *)((int)puVar20 + 300) * fVar3 * fVar5;
        do {
          *(float *)((int)lVar28 + 0x120) = *(float *)((int)lVar28 + 0x110) * fVar3 * fVar3;
          iVar27 = (int)lVar29;
          lVar29 = lVar29 + 8;
          lVar28 = lVar28 + 8;
          *(float *)((int)lVar33 + 4) = *(float *)(iVar27 + 4) * fVar3 * fVar3;
          lVar33 = lVar33 + 8;
          lVar35 = lVar35 + -1;
        } while (lVar35 != 0);
        lVar35 = 4;
        lVar33 = uVar23 - 0x130;
        pfVar30 = (float *)&DAT_007358e0;
        lVar28 = lVar25;
        lVar29 = lVar33;
        do {
          fVar3 = *pfVar30;
          fVar5 = pfVar30[1];
          pfVar30 = pfVar30 + 2;
          *(float *)((int)lVar28 + 0x120) = *(float *)((int)lVar28 + 0x120) * fVar3;
          lVar28 = lVar28 + 8;
          *(float *)((int)lVar29 + 4) = *(float *)((int)lVar29 + 4) * fVar5;
          lVar29 = lVar29 + 8;
          lVar35 = lVar35 + -1;
        } while (lVar35 != 0);
        lVar28 = 2;
        do {
          iVar27 = (int)lVar25;
          lVar25 = lVar25 + 0x10;
          iVar21 = (int)lVar33;
          lVar33 = lVar33 + 0x10;
          dVar37 = (double)((float)(dVar37 + (double)*(float *)(iVar27 + 0x120)) +
                            *(float *)(iVar21 + 4) + *(float *)(iVar21 + 8) +
                           *(float *)(iVar21 + 0xc));
          lVar28 = lVar28 + -1;
        } while (lVar28 != 0);
        dVar37 = (double)((float)(dVar37 + 0.7853981852531433) * fVar6 + fVar4);
      }
      uVar36 = FastDiffRots(dVar37,(double)(moby->rotation).z);
      puVar20[0x34] = (longlong)DAT_00811e94;
      puVar20[0x34] = (longlong)(int)(animationSpeed * ((float)(longlong)puVar20[0x34] + 0.5));
      dVar37 = (double)FastIntToDouble(*(undefined4 *)((int)puVar20 + 0x1a4));
      puVar20[0x34] = (longlong)(int)*(short *)((int)pvVar15 + 0x102);
      dVar37 = (double)MB_CosineInterpolate
                                 (uVar36,(double)*(float *)((int)pvVar15 + 0x104),
                                  (double)(float)((double)(longlong)puVar20[0x34] / dVar37));
      FastQuaternionToEuler(uVar34 + 0x120,2);
      if (moby->animationId == '\x02') {
        auVar45 = ZEXT416(0xffffffff);
        auVar45 = auVar45 | auVar45 << 0x20 | auVar45 << 0x40 | auVar45 << 0x60;
        moby->state = '\x04';
        auVar46 = vectorShiftLeftIntegerWord(auVar45,auVar45);
        auVar45 = loadVectorLeftIndexed(0x1e98,0x810000);
        auVar44 = vectorConvertFromSignedFixedPointWord(auVar45,0);
        auVar45 = loadVectorLeftIndexed(0x10,0x33daa0);
        auVar45 = auVar45 >> 0x60 & (GPiece<16>)0xffffffff;
        auVar47 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
        auVar45 = vectorAddFloatingPoint
                            (auVar44,auVar45 | auVar45 << 0x20 | auVar45 << 0x40 | auVar45 << 0x60);
        auVar45 = vectorMultiplyAddFloatingPoint(auVar47,auVar45,auVar46);
        auVar45 = vectorConvertToSignedFixedPointWordSaturate(auVar45,0);
        auVar45 = vectorSplatHalfWord(auVar45,1);
        uVar18 = storeVectorElementHalfWordIndexed(auVar45,0x102,uVar34);
        *(undefined2 *)((int)pvVar15 + 0x102) = uVar18;
      }
      else {
        iVar27 = FastDecTimerS16(uVar34 + 0x102);
        if (iVar27 != 0) {
          *(float *)((int)pvVar15 + 0x104) = (float)dVar37;
          moby->state = '\x06';
          MB_SetAnimationNoBlend(lVar26,1,0);
        }
      }
    }
    else if (bVar1 < 7) {
      iVar27 = MB_MayaFrameTrigger(3.0,moby);
      if (iVar27 != 0) {
        auVar45 = ZEXT416(0xffffffff);
        auVar46 = auVar45 | auVar45 << 0x20 | auVar45 << 0x40 | auVar45 << 0x60;
        auVar45 = loadVectorLeftIndexed(0x1e9c,0x810000);
        auVar44 = vectorConvertFromSignedFixedPointWord(auVar45,0);
        auVar46 = vectorShiftLeftIntegerWord(auVar46,auVar46);
        auVar45 = loadVectorLeftIndexed(0x10,0x33daa0);
        auVar45 = auVar45 >> 0x60 & (GPiece<16>)0xffffffff;
        auVar58 = auVar45 | auVar45 << 0x20 | auVar45 << 0x40 | auVar45 << 0x60;
        auVar47 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
        dVar37 = 0.5;
        auVar45 = vectorAddFloatingPoint(auVar44,auVar58);
        auVar45 = vectorMultiplyAddFloatingPoint(auVar47,auVar45,auVar46);
        auVar45 = vectorConvertToSignedFixedPointWordSaturate(auVar45,0);
        auVar57 = vectorConvertFromSignedFixedPointWord(auVar45,0);
        FastQuaternionToEuler((double)*(float *)((int)pvVar15 + 0x104),uVar34 + 0x120,2);
        lVar28 = uVar23 - 400;
        GetBonePosition(lVar26,1,lVar28);
        iVar27 = *(int *)((int)pvVar15 + 0xd8);
        sVar32 = *(short *)((int)pvVar15 + 0x100);
        pSVar17 = Splines[iVar27];
        auVar45 = loadVectorLeftIndexed(0xc0,lVar25);
        uVar24 = ZEXT48(pSVar17->points + sVar32 + -1);
        auVar44 = loadVectorLeftIndexed(0x10,uVar24);
        auVar46 = vectorSubtractFloatingPoint(auVar44,auVar45);
        auVar47 = loadVectorLeftIndexed(0xc4,lVar25);
        auVar45 = ZEXT416(0xffffffff);
        auVar44 = auVar45 | auVar45 << 0x20 | auVar45 << 0x40 | auVar45 << 0x60;
        auVar45 = ZEXT416(0xffffffff);
        auVar53 = auVar45 | auVar45 << 0x20 | auVar45 << 0x40 | auVar45 << 0x60;
        auVar45 = ZEXT416(0xffffffff);
        auVar45 = auVar45 | auVar45 << 0x20 | auVar45 << 0x40 | auVar45 << 0x60;
        auVar48 = loadVectorLeftIndexed(200,lVar25);
        auVar49 = vectorShiftLeftIntegerWord(auVar44,auVar44);
        auVar44 = auVar46 >> 0x60 & (GPiece<16>)0xffffffff;
        auVar51 = vectorShiftLeftIntegerWord(auVar45,auVar45);
        auVar45 = ZEXT416(0xffffffff);
        auVar52 = auVar45 | auVar45 << 0x20 | auVar45 << 0x40 | auVar45 << 0x60;
        uVar19 = storeVectorElementWordIndexed
                           (auVar44 | auVar44 << 0x20 | auVar44 << 0x40 | auVar44 << 0x60,0xd0,
                            lVar25);
        *(undefined4 *)(puVar20 + 0x1a) = uVar19;
        auVar45 = loadVectorLeftIndexed(0x14,uVar24);
        auVar47 = vectorSubtractFloatingPoint(auVar45,auVar47);
        auVar44 = vectorReciprocalEstimateFloatingPoint(auVar57);
        auVar45 = ZEXT416(0xffffffff);
        auVar54 = auVar45 | auVar45 << 0x20 | auVar45 << 0x40 | auVar45 << 0x60;
        auVar45 = auVar47 >> 0x60 & (GPiece<16>)0xffffffff;
        uVar19 = storeVectorElementWordIndexed
                           (auVar45 | auVar45 << 0x20 | auVar45 << 0x40 | auVar45 << 0x60,0xd4,
                            lVar25);
        *(undefined4 *)((int)puVar20 + 0xd4) = uVar19;
        auVar45 = loadVectorLeftIndexed(0x18,uVar24);
        auVar45 = vectorSubtractFloatingPoint(auVar45,auVar48);
        auVar45 = auVar45 >> 0x60 & (GPiece<16>)0xffffffff;
        uVar19 = storeVectorElementWordIndexed
                           (auVar45 | auVar45 << 0x20 | auVar45 << 0x40 | auVar45 << 0x60,0xd8,
                            lVar25);
        *(undefined4 *)(puVar20 + 0x1b) = uVar19;
        *(float *)((int)puVar20 + 0xdc) = (pSVar17->points + sVar32 + -1)[1].w;
        auVar45 = loadVectorLeftIndexed(0x18,0x33daa0);
        auVar45 = auVar45 >> 0x60 & (GPiece<16>)0xffffffff;
        auVar50 = auVar45 | auVar45 << 0x20 | auVar45 << 0x40 | auVar45 << 0x60;
        auVar45 = vectorNegativeMultiplySubtractFloatingPoint(auVar44,auVar57,auVar50);
        pSVar17 = Splines[iVar27];
        auVar44 = vectorMultiplyAddFloatingPoint(auVar44,auVar45,auVar49);
        auVar53 = vectorShiftLeftIntegerWord(auVar53,auVar53);
        auVar49 = vectorShiftLeftIntegerWord(auVar52,auVar52);
        auVar45 = ZEXT416(0xffffffff);
        auVar45 = auVar45 | auVar45 << 0x20 | auVar45 << 0x40 | auVar45 << 0x60;
        auVar52 = vectorShiftLeftIntegerWord(auVar45,auVar45);
        auVar45 = vectorNegativeMultiplySubtractFloatingPoint(auVar44,auVar57,auVar50);
        auVar44 = vectorMultiplyAddFloatingPoint(auVar44,auVar45,auVar51);
        auVar45 = ZEXT416(0xffffffff);
        auVar51 = auVar45 | auVar45 << 0x20 | auVar45 << 0x40 | auVar45 << 0x60;
        auVar45 = vectorShiftLeftIntegerWord(auVar54,auVar54);
        auVar55 = loadVectorLeftIndexed(0xfffffffffffff418,0x720000);
        auVar56 = loadVectorLeftIndexed(0x1ea0,0x810000);
        auVar54 = vectorShiftLeftIntegerWord(auVar51,auVar51);
        auVar51 = vectorMultiplyAddFloatingPoint(auVar57,auVar57,auVar45);
        auVar45 = vectorNegativeMultiplySubtractFloatingPoint(auVar44,auVar57,auVar50);
        auVar49 = vectorMultiplyAddFloatingPoint(auVar44,auVar45,auVar49);
        auVar50 = vectorMultiplyAddFloatingPoint(auVar55,auVar56,auVar54);
        auVar45 = ZEXT416(0xffffffff);
        auVar45 = auVar45 | auVar45 << 0x20 | auVar45 << 0x40 | auVar45 << 0x60;
        auVar45 = vectorShiftLeftIntegerWord(auVar45,auVar45);
        auVar44 = vectorMultiplyAddFloatingPoint(auVar46,auVar49,auVar53);
        auVar46 = vectorMultiplyAddFloatingPoint(auVar47,auVar49,auVar52);
        auVar47 = vectorMultiplyAddFloatingPoint(auVar51,auVar50,auVar45);
        auVar45 = ZEXT416(0xffffffff);
        auVar45 = auVar45 | auVar45 << 0x20 | auVar45 << 0x40 | auVar45 << 0x60;
        auVar50 = vectorShiftLeftIntegerWord(auVar45,auVar45);
        auVar45 = auVar44 >> 0x60 & (GPiece<16>)0xffffffff;
        auVar44 = auVar46 >> 0x60 & (GPiece<16>)0xffffffff;
        uVar19 = storeVectorElementWordIndexed
                           (auVar45 | auVar45 << 0x20 | auVar45 << 0x40 | auVar45 << 0x60,0xd0,
                            lVar25);
        *(undefined4 *)(puVar20 + 0x1a) = uVar19;
        uVar19 = storeVectorElementWordIndexed
                           (auVar44 | auVar44 << 0x20 | auVar44 << 0x40 | auVar44 << 0x60,0xd4,
                            lVar25);
        *(undefined4 *)((int)puVar20 + 0xd4) = uVar19;
        *(undefined4 *)(puVar20 + 0x1b) = 0;
        auVar45 = loadVectorLeftIndexed(0x18,ZEXT48(pSVar17) + (longlong)sVar32 * 0x10 & 0xffffffff)
        ;
        auVar44 = loadVectorLeftIndexed(0x1c,0x33daa0);
        auVar46 = vectorSubtractFloatingPoint(auVar48,auVar45);
        auVar45 = auVar44 >> 0x60 & (GPiece<16>)0xffffffff;
        auVar44 = loadVectorLeftIndexed(0x20,0x33daa0);
        auVar44 = auVar44 >> 0x60 & (GPiece<16>)0xffffffff;
        fVar3 = g_FrameTimeSq * DAT_00811ea0;
        uVar24 = (ulonglong)DAT_00811ea4;
        auVar45 = vectorMultiplyAddFloatingPoint
                            (auVar47,auVar45 | auVar45 << 0x20 | auVar45 << 0x40 | auVar45 << 0x60,
                             auVar46);
        auVar45 = vectorMultiplyAddFloatingPoint
                            (auVar49,auVar45 ^ (auVar44 | auVar44 << 0x20 | auVar44 << 0x40 |
                                               auVar44 << 0x60),auVar50);
        auVar45 = auVar45 >> 0x60 & (GPiece<16>)0xffffffff;
        uVar19 = storeVectorElementWordIndexed
                           (auVar45 | auVar45 << 0x20 | auVar45 << 0x40 | auVar45 << 0x60,0x48,
                            uVar34);
        *(undefined4 *)((int)pvVar15 + 0x48U & 0xfffffffc) = uVar19;
        puVar20[0x34] = uVar24;
        puVar20[0x34] =
             (longlong)(int)(animationSpeed * (float)((double)(longlong)puVar20[0x34] + dVar37));
        FUN_001f29e8((double)fVar3,lVar26,lVar28,uVar23 - 0x180,0xd0,
                     *(undefined4 *)((int)puVar20 + 0x1a4));
        M31_0033c6e0((double)*(float *)((int)pvVar15 + 0x104),lVar26,lVar28);
        sVar32 = *(short *)((int)pvVar15 + 0x100) + 1;
        *(short *)((int)pvVar15 + 0x100) = sVar32;
        if ((int)sVar32 < Splines[*(int *)((int)pvVar15 + 0xd8)]->cnt) {
          auVar45 = ZEXT416(0xffffffff);
          auVar45 = auVar45 | auVar45 << 0x20 | auVar45 << 0x40 | auVar45 << 0x60;
          auVar44 = vectorShiftLeftIntegerWord(auVar45,auVar45);
          auVar45 = loadVectorLeftIndexed(0x1e94,0x810000);
          auVar45 = vectorConvertFromSignedFixedPointWord(auVar45,0);
          auVar46 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
          auVar45 = vectorAddFloatingPoint(auVar45,auVar58);
          auVar45 = vectorMultiplyAddFloatingPoint(auVar46,auVar45,auVar44);
          auVar45 = vectorConvertToSignedFixedPointWordSaturate(auVar45,0);
          auVar45 = vectorSplatHalfWord(auVar45,1);
          uVar18 = storeVectorElementHalfWordIndexed(auVar45,0x102,uVar34);
          *(undefined2 *)((int)pvVar15 + 0x102) = uVar18;
          moby->state = '\x05';
        }
        else {
          auVar45 = ZEXT416(0xffffffff);
          auVar45 = auVar45 | auVar45 << 0x20 | auVar45 << 0x40 | auVar45 << 0x60;
          moby->state = '\x04';
          auVar44 = vectorShiftLeftIntegerWord(auVar45,auVar45);
          auVar45 = loadVectorLeftIndexed(0x1e98,0x810000);
          auVar45 = vectorConvertFromSignedFixedPointWord(auVar45,0);
          auVar46 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
          auVar45 = vectorAddFloatingPoint(auVar45,auVar58);
          auVar45 = vectorMultiplyAddFloatingPoint(auVar46,auVar45,auVar44);
          auVar45 = vectorConvertToSignedFixedPointWordSaturate(auVar45,0);
          auVar45 = vectorSplatHalfWord(auVar45,1);
          uVar18 = storeVectorElementHalfWordIndexed(auVar45,0x102,uVar34);
          *(undefined2 *)((int)pvVar15 + 0x102) = uVar18;
        }
      }
    }
    else {
      dVar37 = (double)(DAT_0071f408 * DAT_00811e88);
      if (*(int *)((int)pvVar15 + 0x10c) == 1) {
        dVar37 = -dVar37;
      }
      iVar27 = M31_0033cad0
                         (dVar37,(double)DAT_00811ebc,(double)DAT_00811eb0,(double)DAT_010bd020,
                          (double)DAT_00811ec0,(double)DAT_00811eb8,(double)DAT_010bd024,lVar26,
                          Splines[*(int *)((int)pvVar15 + 0xdc)],uVar34 + 0xe8,uVar34 + 0xec,
                          &DAT_00810000,uVar34 + 0xf0,uVar34 + 0xe4);
      if (iVar27 != 0) {
        moby->state = '\x04';
        fVar6 = DAT_00811ebc;
        iVar27 = *(int *)((int)pvVar15 + 0x10c);
        *(uint *)((int)pvVar15 + 0x10c) = (iVar27 == 0);
        fVar22 = DAT_010bd024;
        fVar13 = DAT_010bd020;
        fVar5 = DAT_00811ec0;
        fVar4 = DAT_00811eb8;
        fVar3 = DAT_00811eb0;
        pSVar17 = Splines[*(int *)((int)pvVar15 + 0xdc)];
        if (iVar27 == 0) {
          fVar11 = pSVar17->points[0].x;
          fVar12 = pSVar17->points[0].y;
          pVVar31 = pSVar17->points + pSVar17->cnt + -1;
          fVar7 = pVVar31->x;
          fVar8 = pVVar31->y;
          fVar9 = pVVar31->z;
          fVar10 = pVVar31->w;
        }
        else {
          fVar7 = pSVar17->points[0].x;
          fVar8 = pSVar17->points[0].y;
          fVar9 = pSVar17->points[0].z;
          fVar10 = pSVar17->points[0].w;
          fVar11 = pSVar17->points[pSVar17->cnt + -1].x;
          fVar12 = pSVar17->points[pSVar17->cnt + -1].y;
        }
        *(float *)((int)pvVar15 + 0x170) = fVar6;
        *(float *)((int)pvVar15 + 0x174) = fVar3;
        *(float *)((int)pvVar15 + 0x178) = fVar13;
        *(float *)((int)pvVar15 + 0x154) = fVar5;
        *(float *)((int)pvVar15 + 0x158) = fVar4;
        *(float *)((int)pvVar15 + 0x15c) = fVar22;
        fVar4 = ABS(fVar11 - fVar7);
        fVar5 = ABS(fVar12 - fVar8);
        *(float *)((int)puVar20 + 0xfc) = fVar11 - fVar7;
        *(float *)(puVar20 + 0x20) = fVar12 - fVar8;
        *(float *)((int)puVar20 + 0x104) = fVar4 - fVar5;
        fVar3 = 0.0;
        uVar34 = (ulonglong)(*(uint *)((int)puVar20 + 0xfc) >> 0x1c) & 8 |
                 (ulonglong)(*(uint *)((int)puVar20 + 0x104) >> 0x1e) & 2 |
                 (ulonglong)(*(uint *)(puVar20 + 0x20) >> 0x1d) & 4;
        fVar6 = ABS(*(float *)((int)puVar20 + 0xfc));
        if (*(float *)((int)puVar20 + 0x104) - 0.0 < 0.0) {
          fVar6 = fVar5;
        }
        fVar13 = *(float *)(&g_atanQuadrantTable + (int)(uVar34 << 2));
        fVar5 = *(float *)(((uint)(uVar34 << 2) | 0x735900) + 4);
        fVar22 = ABS(*(float *)(puVar20 + 0x20));
        if (*(float *)((int)puVar20 + 0x104) - 0.0 < 0.0) {
          fVar22 = fVar4;
        }
        if (0.0 < fVar6) {
          lVar26 = uVar23 - 0x240;
          lVar29 = uVar23 - 0x100;
          lVar28 = uVar23 - 0x110;
          lVar33 = 2;
          fVar4 = (fVar22 - fVar6) / (fVar22 + fVar6);
          fVar6 = fVar4 * fVar4;
          *(float *)((int)puVar20 + 0x14c) = fVar4;
          *(float *)((int)puVar20 + 0x144) = fVar4;
          *(float *)(puVar20 + 0x29) = fVar4;
          *(float *)(puVar20 + 0x28) = fVar4;
          fVar4 = fVar6 * fVar6;
          *(float *)((int)puVar20 + 0x144) = *(float *)((int)puVar20 + 0x144) * fVar6;
          *(float *)(puVar20 + 0x29) = *(float *)(puVar20 + 0x29) * fVar4;
          *(float *)((int)puVar20 + 0x14c) = *(float *)((int)puVar20 + 0x14c) * fVar4 * fVar6;
          do {
            *(float *)((int)lVar26 + 0x140) = *(float *)((int)lVar26 + 0x130) * fVar4 * fVar4;
            iVar27 = (int)lVar28;
            lVar28 = lVar28 + 8;
            lVar26 = lVar26 + 8;
            *(float *)((int)lVar29 + 4) = *(float *)(iVar27 + 4) * fVar4 * fVar4;
            lVar29 = lVar29 + 8;
            lVar33 = lVar33 + -1;
          } while (lVar33 != 0);
          lVar33 = 4;
          lVar29 = uVar23 - 0x110;
          pfVar30 = (float *)&DAT_007358e0;
          lVar26 = lVar25;
          lVar28 = lVar29;
          do {
            fVar4 = *pfVar30;
            fVar6 = pfVar30[1];
            pfVar30 = pfVar30 + 2;
            *(float *)((int)lVar26 + 0x140) = *(float *)((int)lVar26 + 0x140) * fVar4;
            lVar26 = lVar26 + 8;
            *(float *)((int)lVar28 + 4) = *(float *)((int)lVar28 + 4) * fVar6;
            lVar28 = lVar28 + 8;
            lVar33 = lVar33 + -1;
          } while (lVar33 != 0);
          lVar26 = 2;
          do {
            iVar27 = (int)lVar25;
            lVar25 = lVar25 + 0x10;
            iVar21 = (int)lVar29;
            lVar29 = lVar29 + 0x10;
            fVar3 = fVar3 + *(float *)(iVar27 + 0x140) + *(float *)(iVar21 + 4) +
                    *(float *)(iVar21 + 8) + *(float *)(iVar21 + 0xc);
            lVar26 = lVar26 + -1;
          } while (lVar26 != 0);
          fVar3 = (fVar3 + 0.7853982) * fVar13 + fVar5;
        }
        *(float *)((int)pvVar15 + 0x17c) = fVar3;
        *(float *)((int)pvVar15 + 0x180) = fVar7;
        *(float *)((int)pvVar15 + 0x184) = fVar8;
        *(float *)((int)pvVar15 + 0x188) = fVar9;
        *(float *)((int)pvVar15 + 0x18c) = fVar10;
      }
    }
  }
  else if (bVar1 == 9) {
    GetBonePosition(lVar26,2,uVar23 - 0x170);
    *(undefined4 *)(puVar20 + 8) = *(undefined4 *)(puVar20 + 0x1c);
    *(undefined4 *)(puVar20 + 9) = *(undefined4 *)(puVar20 + 0x1d);
    fVar3 = (moby->rotation).z;
    *(undefined4 *)((int)puVar20 + 0x44) = *(undefined4 *)((int)puVar20 + 0xe4);
    *(undefined4 *)((int)puVar20 + 0x4c) = *(undefined4 *)((int)puVar20 + 0xec);
    FUN_0046cf30((double)fVar3,lVar26);
    GetBonePosition(lVar26,3,uVar23 - 0x170);
    FastWrapRot((moby->rotation).z,3.1415927);
    *(undefined4 *)(puVar20 + 8) = *(undefined4 *)(puVar20 + 0x1c);
    *(undefined4 *)(puVar20 + 9) = *(undefined4 *)(puVar20 + 0x1d);
    *(undefined4 *)((int)puVar20 + 0x44) = *(undefined4 *)((int)puVar20 + 0xe4);
    *(undefined4 *)((int)puVar20 + 0x4c) = *(undefined4 *)((int)puVar20 + 0xec);
    FUN_0046cf30(lVar26);
    puVar20[0x12] = 1;
    puVar20[0x14] = 1;
    puVar20[0x15] = 1;
    puVar20[0x16] = 0xffffffffffffffff;
    puVar20[0x17] = 0;
    MB_genericExplosion
              (0,0,0x4010000000000000,0x3ff0000000000000,0x4022000000000000,0x3ff0000000000000,
               0x402e000000000000,lVar26,uVar34 + 0x40,lVar26 + 0x10,1,0xffffffffffffffff,5,2,6);
    iVar27 = *(int *)((int)pvVar15 + 0x108);
    if (((iVar27 != -1) && (g_SoundChannels[iVar27].pMoby == moby)) &&
       (g_SoundChannels[iVar27].state != '\0')) {
      sound_Kill(iVar27);
    }
    *(undefined4 *)((int)pvVar15 + 0x108) = 0xffffffff;
    DeleteMoby(moby);
    return;
  }
  if (((1 < moby->state) && (moby->state != 9)) &&
     (iVar27 = IsMobyPlayingSound(moby,*(int *)((int)pvVar15 + 0x108)), iVar27 == 0)) {
    iVar27 = PlayMobySound(0,4,moby);
    *(int *)((int)pvVar15 + 0x108) = iVar27;
  }
  return;
}


