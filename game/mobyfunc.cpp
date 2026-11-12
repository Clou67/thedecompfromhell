// game/mobyfunc.cpp -- reconstructed from NPEA00385 EBOOT
// STATUS: NOT STARTED (raw Ghidra output)
// 42 functions, 0xef6b8-0xf1e84
#include <stdio.h>
#include "game/mobyfunc.h"
#include "game/bloaders.h"
#include "game/boot.h"
#include "game/debug.h"
#include "game/draw.h"
#include "game/hero.h"
#include "game/hud.h"
#include "game/loaders.h"
#include "game/mobyproc.h"
#include "game/mobyutil.h"
#include "game/music.h"
#include "game/pause.h"
#include "game/rUnk.h"
#include "game/skyfunc.h"
#include "game/sound.h"
#include "game/update.h"
#include "idol/fastfunc.h"
#include "idol/idol_draw.h"
#include "idol/mUnk.h"
#include "idol/tiefunc.h"
#include "sdk/libgcm_cmd/marker.h"

// 0x00ef6b8 (0x14 bytes)
void SECTION_HEADER_MOBYFUNC(void)

{
  DAT_00729040 = 0x10000;
  return;
}


// 0x00ef6d0 (0x7c bytes)
void UpdateNumSpawnableMobys(void)

{
  bool bVar1;
  int iVar2;
  MobyInstance *pMVar3;
  ulonglong uVar4;
  
  iVar2 = 0;
  numSpawnableMobys = 0;
  if (MobyInstancePermEnd < MobyInstanceEnd) {
    bVar1 = false;
    pMVar3 = MobyInstancePermEnd;
    do {
      if (((0xfd < pMVar3->state) &&
          (uVar4.piece<0,4>() = pMVar3->color, uVar4.piece<4,4>() = pMVar3->light, uVar4 <= worldUpdateTime)) ||
         (bVar1)) {
        iVar2 = iVar2 + 1;
        numSpawnableMobys = iVar2;
        if (pMVar3->state == 0xff) {
          bVar1 = true;
        }
      }
      pMVar3 = pMVar3 + 1;
    } while (pMVar3 < MobyInstanceEnd);
  }
  return;
}


// 0x00ef74c (0xbc bytes)
void UpdateMobyFrameData(MobyInstance *param_1)

{
  byte bVar1;
  MobyClass *pMVar2;
  int iVar3;
  
  bVar1 = param_1->updateId;
  if (bVar1 == 0xff) {
    param_1->unk7e = '\0';
    param_1->unk7c = -1;
    pMVar2 = param_1->pClass;
    param_1->pPreviousAnimationData =
         &DAT_00a2c5c0 + (uint)(byte)param_1->previousAnimationFrame * 0x800;
  }
  else {
    pMVar2 = param_1->pClass;
    iVar3 = *(int *)(&pMVar2->type + (uint)bVar1 * 4);
    param_1->pPreviousAnimationData =
         *(void **)(iVar3 + (uint)(byte)param_1->previousAnimationFrame * 4 + 0x1c);
    param_1->unk7e = *(char *)(*(int *)(&pMVar2->type + (uint)bVar1 * 4) + 0x12);
    param_1->unk7c = *(char *)(iVar3 + 0x11);
  }
  param_1->pCurrentAnimationData =
       *(void **)(*(int *)(&pMVar2->type + (uint)param_1->animationId * 4) +
                  (uint)(byte)param_1->animationFrame * 4 + 0x1c);
  return;
}


// 0x00ef810 (0x218 bytes)
void InitMobyInstance(MobyInstance *moby,int oClass)

{
  u8 uVar1;
  byte bVar2;
  float fVar3;
  int iVar4;
  MobyClass *pMVar5;
  MobyInstance *pMVar6;
  MobyModeBit MVar7;
  uint uVar8;
  uint uVar9;
  
  FastMemSet(moby,0,0x100);
  bVar2 = (&MobyClassLookup)[oClass];
  moby->oClass = (MOBY_OCLASSES)oClass;
  moby->mClass = bVar2;
  moby->alpha = -0x80;
  pMVar6 = g_MobyInstance;
  moby->damage = -1;
  uVar9 = (int)moby - (int)pMVar6;
  moby->group = -1;
  moby->field44_0x71 = -1;
  uVar8 = (int)moby - (int)pMVar6;
  moby->field45_0x72 = -1;
  moby->color = 0x404040;
  moby->light = 0;
  moby->occlIndex = 0x7f80;
  moby->unk7e = '\0';
  moby->unk7c = -1;
  moby->field71_0xa8 =
       (int)(((longlong)((int)uVar9 >> 8) + (ulonglong)((int)uVar9 < 0 && (uVar9 & 0xff) != 0) &
             0xffffffff) << 0x10);
  moby->unk7d = -1;
  moby->field72_0xac = ((int)uVar8 >> 8) + (uint)((int)uVar8 < 0 && (uVar8 & 0xff) != 0);
  *(undefined1 *)&moby->collCount = 0x7f;
  *(undefined1 *)((int)&moby->collCount + 1) = 0x7f;
  *(undefined1 *)((int)&moby->collCount + 2) = 0x80;
  *(undefined1 *)((int)&moby->collCount + 3) = 0x80;
  pMVar5 = MobyClasses[bVar2 + 0xe0];
  MVar7 = moby->modeBits;
  moby->pUpdate = pMVar5;
  if (pMVar5 == (MobyClass *)0x0) {
    MVar7 = MVar7 | NO_UPDATE;
    moby->modeBits = MVar7;
  }
  pMVar5 = MobyClasses[bVar2];
  if (pMVar5 == (MobyClass *)0x0) {
    moby->pClass = (MobyClass *)0x0;
    moby->modeBits = MVar7 | (NO_POST_UPDATE|DISABLED);
    moby->collision = (ushort *)0x0;
  }
  else {
    moby->pClass = pMVar5;
    MVar7 = MVar7 | *(MobyModeBit *)&pMVar5->mode_bits;
    moby->modeBits = MVar7;
    moby->collision = pMVar5->collision;
    fVar3 = pMVar5->gScale;
    moby->unk58 = 1.0;
    moby->scale = fVar3;
    moby->frameSpeed = 1.0;
    uVar8 = pMVar5->unk_ptr;
    if (uVar8 != 0) {
      MVar7 = MVar7 | HAS_GLOW;
      moby->modeBits = MVar7;
      moby->field60_0x90 = uVar8;
    }
    if (pMVar5->shadow != '\0') {
      moby->modeBits = MVar7 | DRAW_SHADOW;
      moby->shadow = '\x18';
      moby->unk84 = 0;
      moby->unk88 = 0;
      moby->field82_0xbd = '\0';
    }
    iVar4.piece<0,1>() = pMVar5->type;
    iVar4.piece<1,1>() = pMVar5->mode_bits2;
    iVar4.piece<2,2>() = *(undefined2 *)&pMVar5->field_0x4a;
    if (iVar4 != 0) {
      UpdateMobyFrameData(moby);
      MVar7 = moby->modeBits;
      iVar4 = *(int *)&moby->pClass->type;
      uVar1 = moby->pClass->seq_cnt;
      if (1 < *(byte *)(iVar4 + 0x10)) {
        MVar7 = MVar7 & (MIRROR|CAN_BE_DAMAGED|HIDE_BACKFACES|CAN_BE_AUTO_TARGETED|DISABLE_Z_WRITE|
                         DRAW_SHADOW|DRAW_TRANSPARENT_WEIRD|LOCK_ROTATION|NO_DRAW|UNK_40|
                         HAS_SPECIAL_VARS|HAS_GLOW|TRANSPARENT|NO_POST_UPDATE|DISABLED);
        moby->modeBits = MVar7;
      }
      if (((uVar1 == '\x01') && (*(byte *)(iVar4 + 0x10) < 2)) &&
         (moby->unk58 = 0.0, *(char *)(iVar4 + 0x11) < '\0')) {
        moby->modeBits = MVar7 | UNK_40;
      }
    }
  }
  return;
}


// 0x00efa28 (0x110 bytes)
// strings: 00652d88: "Tried to create moby and couldn't. Time: %d, oClass: %d\n"

MobyInstance * CreateMoby(MOBY_OCLASSES oClass)

{
  uint uVar1;
  void *pVarSlot;
  ulonglong uVar2;
  MobyInstance *moby;
  
  if (MobyInstancePermEnd < MobyInstanceEnd) {
    moby = MobyInstancePermEnd;
    do {
      if ((0xfd < moby->state) &&
         (uVar2.piece<0,4>() = moby->color, uVar2.piece<4,4>() = moby->light, uVar2 <= worldUpdateTime)) {
        if (moby->state == 0xff) {
          moby[1].state = 0xff;
        }
        InitMobyInstance(moby,(int)(short)oClass);
        uVar1 = (int)moby - (int)MobyInstancePermEnd;
        pVarSlot = (void *)(DAT_00a390b0 +
                           (((int)uVar1 >> 8) + (uint)((int)uVar1 < 0 && (uVar1 & 0xff) != 0)) *
                           0x80);
        moby->pVar = pVarSlot;
        FastMemSet(pVarSlot,0,0x80);
        if (numSpawnableMobys == 0) {
          return moby;
        }
        numSpawnableMobys = numSpawnableMobys + -1;
        return moby;
      }
      moby = moby + 1;
    } while (moby < MobyInstanceEnd);
  }
  printf("Tried to create moby and couldn\'t. Time: %d, oClass: %d\n",worldUpdateTime,oClass);
  return (MobyInstance *)0x0;
}


// 0x00efb38 (0x68 bytes)
void DeleteMoby(MobyInstance *moby)

{
  int iVar1;
  
  moby->state = (char)((longlong)((longlong)(int)moby - ZEXT48(MobyInstancePermEnd)) >> 0x3f) + 0xfe
  ;
  iVar1 = worldUpdateTime + 2;
  moby->color = (int)((ulonglong)(longlong)iVar1 >> 0x20);
  moby->light = (int)(longlong)iVar1;
  UpdateMobyGrids(moby,0x80807f7f);
  return;
}


// 0x00efba0 (0xb0 bytes)
void MB_UpdateLoopSound(MobyInstance *param_1)

{
  byte bVar1;
  int iVar2;
  
  bVar1 = param_1->unk7d;
  if (bVar1 == 0xff) {
    if ((byte)param_1->unk7c != 0xff) {
      iVar2 = PlayMobySound((uint)(byte)param_1->unk7c,4,param_1);
      param_1->unk7d = (char)iVar2;
    }
  }
  else if (g_SoundChannels[bVar1].pMoby == param_1) {
    if (g_SoundChannels[bVar1].sound_index != (ushort)(byte)param_1->unk7c) {
      sound_Kill((uint)bVar1);
      param_1->unk7d = -1;
    }
  }
  else {
    param_1->unk7d = -1;
  }
  return;
}


// 0x00efc58 (0xbc bytes)
ulonglong MB_FindNearestAnimTrigger(double param_1,int param_2)

{
  short sVar1;
  int iVar2;
  short sVar3;
  ulonglong uVar4;
  int iVar5;
  
  sVar3 = FastDoubleToInt((double)(float)(param_1 * 16.0));
  uVar4 = 0;
  if (*(byte *)(param_2 + 0x10) != 0) {
    do {
      iVar2 = param_2 + (int)((uVar4 & 0xffffffff) << 2);
      sVar1 = *(short *)(*(int *)(iVar2 + 0x1c) + 4);
      iVar5 = (int)uVar4;
      if (sVar3 < sVar1) {
        if (iVar5 < 1) {
          return uVar4;
        }
        if ((int)sVar1 - (int)sVar3 <= (int)sVar3 - (int)*(short *)(*(int *)(iVar2 + 0x18) + 4)) {
          return uVar4;
        }
        return (longlong)(iVar5 + -1);
      }
      uVar4 = (ulonglong)(iVar5 + 1);
    } while (iVar5 + 1 < (int)(uint)*(byte *)(param_2 + 0x10));
  }
  return 0xffffffffffffffff;
}


// 0x00efd18 (0x11c bytes)
int MB_FindAnimTriggerAfter(double param_1,int param_2,undefined8 param_3,float *param_4)

{
  short sVar1;
  int iVar2;
  int iVar3;
  double dVar4;
  double dVar5;
  
  sVar1 = FastDoubleToInt((double)(float)(param_1 * 16.0));
  iVar3 = 0;
  iVar2 = param_2;
  if (*(byte *)(param_2 + 0x10) != 0) {
    do {
      if (sVar1 < *(short *)(*(int *)(iVar2 + 0x1c) + 4)) break;
      iVar3 = iVar3 + 1;
      iVar2 = iVar2 + 4;
    } while (iVar3 < (int)(uint)*(byte *)(param_2 + 0x10));
    if (0 < iVar3) {
      if (param_4 != (float *)0x0) {
        param_2 = param_2 + iVar3 * 4;
        iVar2 = *(int *)(param_2 + 0x1c);
        dVar4 = (double)FastIntToDouble(*(undefined2 *)(*(int *)(param_2 + 0x18) + 4));
        dVar5 = (double)FastIntToDouble(*(undefined2 *)(iVar2 + 4));
        *param_4 = (float)(param_1 - dVar4) / (float)(dVar5 - dVar4);
      }
      return iVar3 + -1;
    }
  }
  if (param_4 != (float *)0x0) {
    *param_4 = 0.0;
  }
  return -1;
}


// 0x00efe40 (0x118 bytes)
double BlendAnimFrame(MobyInstance *param_1)

{
  void *pvVar1;
  void *pvVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  
  if (param_1->updateId == 0xff) {
    pvVar1 = param_1->pCurrentAnimationData;
  }
  else {
    pvVar1 = param_1->pPreviousAnimationData;
  }
  dVar6 = 0.0625;
  if (param_1->animationBlend == 0.0) {
    dVar3 = (double)FastIntToDouble(*(undefined2 *)((int)pvVar1 + 4));
    dVar6 = (double)(float)(dVar3 * dVar6);
  }
  else if ((param_1->updateId == param_1->animationId) &&
          ((byte)param_1->previousAnimationFrame <= (byte)param_1->animationFrame)) {
    pvVar2 = param_1->pCurrentAnimationData;
    dVar3 = (double)FastIntToDouble(*(undefined2 *)((int)pvVar1 + 4));
    dVar5 = (double)(float)(1.0 - (double)param_1->animationBlend);
    dVar4 = (double)FastIntToDouble
                              (0x3ff0000000000000,(double)param_1->animationBlend,
                               *(undefined2 *)((int)pvVar2 + 4));
    dVar6 = (double)(float)((double)(float)(dVar3 * dVar5 +
                                           (double)(float)(dVar4 * (double)param_1->animationBlend))
                           * dVar6);
  }
  else {
    dVar3 = (double)FastIntToDouble(*(undefined2 *)((int)pvVar1 + 4));
    dVar6 = (double)(float)(dVar3 * dVar6 + (double)param_1->animationBlend);
  }
  return dVar6;
}


// 0x00eff60 (0x90 bytes)
/* [p2_mobyutil] MobyClasses[oClass]->seqs[seq] frame count/16 */

float MB_GetAnimSeqLength(int oClass,int seq)

{
  float fVar1;
  double dVar2;
  
  if ((seq < 0) || (0xfe < seq)) {
    fVar1 = 0.0;
  }
  else {
    dVar2 = (double)FastIntToDouble
                              (*(undefined2 *)
                                (*(int *)(*(int *)(*(int *)((int)MobyClasses +
                                                           (int)((longlong)oClass << 2)) +
                                                   (int)((longlong)seq << 2) + 0x48) + 0x1c) + 4));
    fVar1 = (float)(dVar2 * 0.0625);
  }
  return fVar1;
}


// 0x00efff8 (0xa0 bytes)
float MB_GetAnimSeqTriggerLength(int oClass,int seq)

{
  float fVar1;
  int iVar2;
  double dVar3;
  
  if ((seq < 0) || (0xfe < seq)) {
    fVar1 = 0.0;
  }
  else {
    iVar2 = *(int *)(*(int *)((int)MobyClasses + (int)((longlong)oClass << 2)) +
                     (int)((longlong)seq << 2) + 0x48);
    dVar3 = (double)FastIntToDouble
                              (*(undefined2 *)
                                (*(int *)(iVar2 + (uint)*(byte *)(iVar2 + 0x10) * 4 + 0x18) + 4));
    fVar1 = (float)(dVar3 * 0.0625);
  }
  return fVar1;
}


// 0x00f00a0 (0x648 bytes)
undefined8
MB_GetCollPrimWorld
          (int param_1,int param_2,uint *param_3,float *param_4,float *param_5,float *param_6)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  short sVar8;
  uint uVar9;
  int iVar10;
  float fVar11;
  int iVar12;
  undefined8 uVar13;
  uint *puVar14;
  double dVar15;
  double dVar16;
  double dVar17;
  double dVar18;
  double dVar19;
  double dVar20;
  float local_920;
  float local_91c;
  float local_918;
  float local_914;
  float local_910;
  float local_90c;
  float local_908;
  float local_904;
  float local_900;
  float local_8fc;
  float local_8f8;
  float local_8f4;
  float local_8f0;
  float local_8ec;
  float local_8e8;
  float local_8e4;
  float afStack_8e0 [512];
  double local_e0;
  
  if (*(int *)(param_1 + 0x94) == 0) {
    uVar13 = 0;
  }
  else {
    fVar5 = *(float *)(param_1 + 0x2c);
    puVar14 = (uint *)(*(int *)(param_1 + 0x94) + param_2 * 0x20 + 0x10);
    *param_3 = *puVar14 & 0xff;
    dVar20 = (double)(fVar5 * 0.0009765625);
    FastEulerToMtx1(&local_920,param_1 + 0x40);
    local_e0 = (double)local_920;
    uVar9 = *param_3;
    if (((uVar9 == 1) || (uVar9 == 0)) || (uVar9 == 3)) {
      fVar6 = (float)puVar14[4];
      fVar5 = (float)((double)(float)puVar14[5] * dVar20);
      dVar16 = (double)(float)((double)fVar6 * dVar20);
      fVar7 = (float)puVar14[7];
      fVar1 = (float)((double)(float)puVar14[6] * dVar20);
      param_4[3] = (float)puVar14[7];
      *param_4 = (float)((double)fVar6 * dVar20);
      param_4[1] = fVar5;
      param_4[2] = fVar1;
      *param_4 = local_8f0 * fVar7 +
                 local_900 * fVar1 + (float)(local_e0 * dVar16 + (double)(local_910 * fVar5));
      param_4[1] = local_8ec * fVar7 +
                   local_8fc * fVar1 +
                   (float)((double)local_91c * dVar16 + (double)(local_90c * fVar5));
      param_4[2] = local_8e8 * fVar7 +
                   local_8f8 * fVar1 +
                   (float)((double)local_918 * dVar16 + (double)(local_908 * fVar5));
      param_4[3] = local_8e4 * fVar7 +
                   local_8f4 * fVar1 +
                   (float)((double)local_914 * dVar16 + (double)(local_904 * fVar5));
      *param_4 = *param_4 + *(float *)(param_1 + 0x10);
      param_4[1] = param_4[1] + *(float *)(param_1 + 0x14);
      param_4[2] = param_4[2] + *(float *)(param_1 + 0x18);
      *param_5 = (float)((double)param_4[3] * dVar20);
      if ((uVar9 == 1) || (uVar9 == 0)) {
        fVar5 = 0.0;
      }
      else {
        fVar5 = (float)((double)(float)puVar14[1] * dVar20);
      }
      uVar13 = 1;
      *param_6 = fVar5;
    }
    else if (uVar9 == 2) {
      dVar15 = 0.0;
      sVar8 = *(short *)(*(int *)(param_1 + 0x94) + 2);
      dVar16 = dVar15;
      dVar17 = dVar15;
      dVar18 = dVar15;
      dVar19 = dVar15;
      if (sVar8 != 0) {
        Moby_BuildJointMatrices(param_1,sVar8,afStack_8e0);
        uVar9 = puVar14[1];
        *param_4 = afStack_8e0[uVar9 * 4];
        param_4[1] = afStack_8e0[uVar9 * 4 + 1];
        param_4[2] = afStack_8e0[uVar9 * 4 + 2];
        param_4[3] = afStack_8e0[uVar9 * 4 + 3];
        dVar15 = (double)*param_4;
        dVar16 = (double)param_4[1];
        dVar17 = (double)param_4[2];
        dVar18 = (double)param_4[3];
      }
      fVar5 = (float)(dVar16 * dVar20);
      fVar1 = (float)(dVar15 * dVar20);
      fVar6 = (float)(dVar17 * dVar20);
      uVar13 = 1;
      *param_4 = fVar1;
      param_4[1] = fVar5;
      param_4[2] = fVar6;
      param_4[3] = (float)dVar18;
      *param_4 = (float)((double)local_8f0 * dVar18 +
                        (double)(local_900 * fVar6 + local_920 * fVar1 + local_910 * fVar5));
      param_4[1] = (float)((double)local_8ec * dVar18 +
                          (double)(local_8fc * fVar6 + local_91c * fVar1 + local_90c * fVar5));
      param_4[2] = (float)((double)local_8e8 * dVar18 +
                          (double)(local_8f8 * fVar6 + local_918 * fVar1 + local_908 * fVar5));
      param_4[3] = (float)((double)local_8e4 * dVar18 +
                          (double)(local_8f4 * fVar6 + local_914 * fVar1 + local_904 * fVar5));
      *param_4 = *param_4 + *(float *)(param_1 + 0x10);
      param_4[1] = param_4[1] + *(float *)(param_1 + 0x14);
      param_4[2] = param_4[2] + *(float *)(param_1 + 0x18);
      *param_5 = (float)((double)(float)puVar14[3] * dVar20);
      *param_6 = (float)dVar19;
    }
    else if (uVar9 == 4) {
      sVar8 = *(short *)(*(int *)(param_1 + 0x94) + 2);
      if (sVar8 != 0) {
        Moby_BuildJointMatrices(param_1,sVar8,0);
      }
      iVar12 = (int)(((longlong)*(short *)(puVar14 + 1) & 0xffffffffU) << 4);
      iVar10 = (int)(((longlong)*(short *)((int)puVar14 + 6) & 0xfffffffU) << 4);
      fVar5 = (float)((double)*(float *)(iVar12 + 0x70000008) * dVar20);
      fVar1 = (float)((double)*(float *)(iVar10 + 0x70000008) * dVar20);
      fVar6 = (float)((double)*(float *)(iVar12 + 0x70000004) * dVar20);
      fVar7 = (float)((double)*(float *)(iVar10 + 0x70000004) * dVar20);
      fVar2 = (float)((double)*(float *)(iVar12 + 0x70000000) * dVar20);
      fVar3 = (float)((double)*(float *)(iVar10 + 0x70000000) * dVar20);
      uVar13 = 1;
      fVar11 = fVar7;
      if (fVar5 - fVar1 < 0.0) {
        fVar11 = fVar6;
      }
      fVar7 = fVar7 - fVar6;
      fVar6 = fVar3;
      if (fVar5 - fVar1 < 0.0) {
        fVar6 = fVar2;
      }
      fVar4 = *(float *)(iVar10 + 0x7000000c);
      if (fVar5 - fVar1 < 0.0) {
        fVar4 = *(float *)(iVar12 + 0x7000000c);
      }
      fVar3 = fVar3 - fVar2;
      fVar2 = fVar1;
      if (fVar5 - fVar1 < 0.0) {
        fVar2 = fVar5;
      }
      *param_4 = fVar6;
      fVar4 = (float)((double)fVar4 * dVar20);
      param_4[1] = fVar11;
      param_4[2] = fVar2;
      param_4[3] = fVar4;
      *param_4 = local_8f0 * fVar4 + local_900 * fVar2 + local_920 * fVar6 + local_910 * fVar11;
      param_4[1] = local_8ec * fVar4 + local_8fc * fVar2 + local_91c * fVar6 + local_90c * fVar11;
      param_4[2] = local_8e8 * fVar4 + local_8f8 * fVar2 + local_918 * fVar6 + local_908 * fVar11;
      param_4[3] = local_8e4 * fVar4 + local_8f4 * fVar2 + local_914 * fVar6 + local_904 * fVar11;
      *param_4 = *param_4 + *(float *)(param_1 + 0x10);
      param_4[1] = param_4[1] + *(float *)(param_1 + 0x14);
      param_4[2] = param_4[2] + *(float *)(param_1 + 0x18);
      *param_5 = (float)((double)(float)puVar14[3] * dVar20);
      *param_6 = SQRT((fVar1 - fVar5) * (fVar1 - fVar5) + fVar3 * fVar3 + fVar7 * fVar7);
    }
    else {
      uVar13 = 0;
    }
  }
  return uVar13;
}


// 0x00f06f0 (0x148 bytes)
void MB_SetCollPrimFromWorld
               (double param_1,double param_2,int param_3,ulonglong param_4,float *param_5)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  int iVar5;
  double dVar6;
  float local_70;
  float local_6c;
  float local_68;
  float local_60;
  float local_5c;
  float local_58;
  float local_50;
  float local_4c;
  float local_48;
  float local_40;
  float local_3c;
  float local_38;
  
  dVar6 = (double)(1024.0 / *(float *)(param_3 + 0x2c));
  iVar5 = *(int *)(param_3 + 0x94) + (int)((param_4 & 0xffffffff) << 3) * 4 + 0x10;
  FastNormalizeRMtx4(&local_70,param_3 + 0xc0);
  fVar2 = param_5[1] - *(float *)(param_3 + 0x14);
  fVar3 = *param_5 - *(float *)(param_3 + 0x10);
  fVar4 = param_5[2] - *(float *)(param_3 + 0x18);
  fVar1 = param_5[3];
  *(float *)(iVar5 + 4) = (float)(param_2 * dVar6);
  *(float *)(iVar5 + 0x1c) = (float)(param_1 * dVar6);
  *(float *)(iVar5 + 0x10) =
       (float)((double)(local_40 * fVar1 + local_50 * fVar4 + local_70 * fVar3 + local_60 * fVar2) *
              dVar6);
  *(float *)(iVar5 + 0x14) =
       (float)((double)(local_3c * fVar1 + local_4c * fVar4 + local_6c * fVar3 + local_5c * fVar2) *
              dVar6);
  *(float *)(iVar5 + 0x18) =
       (float)((double)(local_38 * fVar1 + local_48 * fVar4 + local_68 * fVar3 + local_58 * fVar2) *
              dVar6);
  return;
}


// 0x00f0838 (0x1c bytes)
void MB_AddShortPairOffset(int param_1,short param_2,short param_3)

{
  *(short *)(param_1 + 4) = *(short *)(param_1 + 4) + param_2;
  *(short *)(param_1 + 6) = *(short *)(param_1 + 6) + param_3;
  return;
}


// 0x00f0854 (0xac bytes)
/* [p2_mobyutil] takes free slot of 6 in pool 0xa2c440 (0x40 each), joint buffer 0xa24640+i*0x1500,
   links into moby+0x60 */

short * MB_AllocAnimLayer(int param_1,short param_2)

{
  char *pcVar1;
  short *psVar2;
  int iVar3;
  int iVar4;
  
  iVar3 = 0;
  pcVar1 = &DAT_00a2c444;
  do {
    if (*pcVar1 == '\0') break;
    iVar3 = iVar3 + 1;
    pcVar1 = pcVar1 + 0x40;
  } while (iVar3 < 6);
  iVar4 = iVar3 * 0x40;
  psVar2 = (short *)(&g_AnimLayerPool + iVar4);
  (&DAT_00a2c444)[iVar4] = 1;
  *psVar2 = param_2;
  *(undefined **)(iVar4 + 0xa2c450) = &g_AnimLayerJointBuf + iVar3 * 0x1500;
  *(undefined4 *)(iVar4 + 0xa2c454) = *(undefined4 *)(param_1 + 0x24);
  iVar3 = *(int *)(*(int *)(*(int *)(param_1 + 0x24) + 0x1c) + (int)((longlong)param_2 << 2) + 4);
  *(ushort *)(iVar4 + 0xa2c442) = (ushort)*(byte *)(iVar3 + 3);
  *(uint *)(iVar4 + 0xa2c44c) = iVar3 + (uint)*(byte *)(iVar3 + 1) + 4;
  *(undefined4 *)(iVar4 + 0xa2c45c) = *(undefined4 *)(param_1 + 0x60);
  *(short **)(param_1 + 0x60) = psVar2;
  return psVar2;
}


// 0x00f0900 (0x94 bytes)
void MB_FreeAnimLayer(int param_1,int *param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar1 = *param_2;
  if (iVar1 != 0) {
    iVar2 = *(int *)(param_1 + 0x60);
    if (*(int *)(param_1 + 0x60) == iVar1) {
      *(undefined4 *)(param_1 + 0x60) = *(undefined4 *)(iVar1 + 0x1c);
    }
    else {
      do {
        iVar3 = iVar2;
        iVar2 = *(int *)(iVar3 + 0x1c);
      } while (iVar2 != iVar1 && iVar2 != 0);
      if (iVar2 == iVar1) {
        *(undefined4 *)(iVar3 + 0x1c) = *(undefined4 *)(iVar1 + 0x1c);
      }
    }
    FastMemSet(*param_2,0,0x40);
    *param_2 = 0;
  }
  return;
}


// 0x00f0994 (0x194 bytes)
void MB_InitAnimLayerBuffer(int param_1,longlong param_2,longlong param_3,int param_4)

{
  byte bVar1;
  byte bVar2;
  short sVar3;
  short sVar4;
  int iVar5;
  longlong *plVar6;
  int iVar7;
  int iVar8;
  undefined8 *puVar9;
  byte *pbVar10;
  uint uVar11;
  undefined8 uVar12;
  
  bVar1 = *(byte *)(*(int *)(param_1 + 0x18) + 8);
  uVar11 = (uint)bVar1;
  bVar2 = *(byte *)(*(int *)(param_1 + 0x14) + 8);
  iVar7 = (uint)bVar2 * 8;
  iVar5 = *(int *)(*(int *)(*(int *)(param_1 + 0x18) + (int)(param_2 << 2) + 0x48) +
                   (int)(param_3 << 2) + 0x1c);
  FastMemSetZero(param_4,iVar7 + 0x18U & 0xfff0);
  sVar3 = *(short *)(iVar5 + 10);
  sVar4 = *(short *)(iVar5 + 0xe);
  *(short *)(param_4 + 8) = (short)iVar7;
  *(short *)(param_4 + 10) = sVar3;
  *(short *)(param_4 + 0xe) = sVar4;
  *(ushort *)(param_4 + 0xc) = ((ushort)bVar2 + sVar3) * 8;
  *(short *)(param_4 + 6) = (short)((int)((uint)bVar2 + (int)sVar3 + (int)sVar4 + 1) >> 1);
  iVar8 = *(short *)(iVar5 + 6) * 0x10 + uVar11 * -8;
  if (iVar8 != 0) {
    FastMemCopy32(param_4 + iVar7 + 0x10,iVar5 + uVar11 * 8 + 0x10,iVar8);
  }
  puVar9 = (undefined8 *)(iVar5 + 0x10);
  pbVar10 = (byte *)(*(int *)(*(int *)(param_1 + 0x18) + 0x1c) + 4);
  if (bVar1 != 0) {
    do {
      bVar1 = *pbVar10;
      uVar11 = uVar11 - 1;
      uVar12 = *puVar9;
      pbVar10 = pbVar10 + 1;
      puVar9 = puVar9 + 1;
      *(undefined8 *)(param_4 + (uint)bVar1 * 8 + 0x10) = uVar12;
    } while (0 < (int)uVar11);
  }
  plVar6 = (longlong *)(param_4 + *(short *)(param_4 + 6) * 0x10);
  if (*plVar6 == 0) {
    *plVar6 = 1;
  }
  FlushCache(0);
  return;
}


// 0x00f0b38 (0x258 bytes)
void MB_UpdateAnimLayer(undefined8 param_1,MobyInstance *param_2)

{
  char cVar1;
  byte bVar2;
  void *pvVar3;
  f32 fVar4;
  float fVar5;
  int iVar6;
  float *pfVar7;
  MobyClass *pMVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  byte bVar12;
  
  bVar12 = 0;
  pvVar3 = param_2->pChain;
  *(undefined1 *)((int)&(param_2->bSphere).y + 1) = 0;
  uVar9 = (ulonglong)(byte)param_2->group;
  cVar1 = *(char *)((int)&(param_2->bSphere).y + 3);
  bVar2 = param_2->alpha;
  fVar4 = (param_2->pos).y;
  if (pvVar3 != (void *)0x0) {
    fVar5 = param_2->scale;
    if (fVar5 != 0.0) {
      pMVar8 = (MobyClass *)((float)pvVar3 * fVar5 + (float)param_2->pClass);
      param_2->pClass = pMVar8;
      if (0 < (int)pvVar3) {
        if ((0.99 < (float)pMVar8) && ((float)pMVar8 < 1.01)) {
          param_2->pClass = (MobyClass *)0x3f800000;
          pMVar8 = (MobyClass *)0x3f800000;
        }
        if (1.0 <= (float)pMVar8) {
          uVar10 = uVar9;
          do {
            *(char *)((int)&(param_2->bSphere).y + 2) = cVar1;
            bVar12 = bVar12 | 1;
            *(byte *)((int)&(param_2->bSphere).y + 1) = bVar12;
            param_2->state = (u8)uVar10;
            if (cVar1 != '\0') {
              param_2->color = param_2->light;
            }
            uVar9 = uVar9 + 1;
            param_2->mClass = bVar2;
            uVar11 = uVar9 & 0xff;
            param_2->group = (s8)uVar9;
            iVar6 = *(int *)((uint)bVar2 * 4 + (int)fVar4 + 0x48);
            if ((uint)*(byte *)(iVar6 + 0x10) <= (uint)uVar11) {
              bVar12 = 3;
              param_2->group = '\0';
              uVar9 = 0;
              uVar11 = 0;
              *(undefined1 *)((int)&(param_2->bSphere).y + 1) = 3;
            }
            pMVar8 = (MobyClass *)(((float)pMVar8 - 1.0) / fVar5);
            pfVar7 = *(float **)(iVar6 + (int)(uVar10 << 2) + 0x1c);
            param_2->pClass = pMVar8;
            fVar5 = *pfVar7;
            pMVar8 = (MobyClass *)((float)pMVar8 * fVar5);
            param_2->scale = fVar5;
            param_2->pClass = pMVar8;
            uVar10 = uVar11;
          } while (1.0 <= (float)pMVar8);
        }
      }
    }
  }
  if (*(char *)((int)&(param_2->bSphere).y + 2) == '\0') {
    param_2->color =
         *(uint *)(*(int *)((int)fVar4 + (uint)param_2->mClass * 4 + 0x48) +
                   (uint)param_2->state * 4 + 0x1c);
  }
  else {
    MB_InitAnimLayerBuffer(param_2,param_2->mClass,param_2->state,param_2->color);
    fVar4 = (param_2->pos).y;
    cVar1 = *(char *)((int)&(param_2->bSphere).y + 3);
    uVar9 = (ulonglong)(byte)param_2->group;
    bVar2 = param_2->alpha;
  }
  if (cVar1 == '\0') {
    param_2->light =
         *(uint *)(*(int *)((int)fVar4 + (uint)bVar2 * 4 + 0x48) +
                   ((uint)((uVar9 & 0xffffffff) << 2) & 0x3fc) + 0x1c);
  }
  else {
    MB_InitAnimLayerBuffer(param_2,bVar2,uVar9 & 0xff,param_2->light);
  }
  MB_AnimLayerBlend(param_2);
  return;
}


// 0x00f0d90 (0x40 bytes)
void MB_SyncAnimLayer(MobyInstance *param_1,MobyInstance *param_2)

{
  param_2->state = param_1->previousAnimationFrame;
  param_2->group = param_1->animationFrame;
  param_2->pClass = (MobyClass *)param_1->animationBlend;
  MB_UpdateAnimLayer((longlong)(int)param_1,param_2);
  return;
}


// 0x00f0dd8 (0xd0 bytes)
void MB_StartAnimLayer
               (MobyInstance *param_1,undefined8 param_2,s8 param_3,s8 param_4,undefined4 param_5,
               int param_6)

{
  u8 uVar1;
  undefined4 uVar2;
  MobyInstance *pMVar3;
  GPiece<16> auVar4;
  GPiece<16> auVar5;
  GPiece<16> auVar6;
  GPiece<16> auVar7;
  GPiece<16> auVar8;
  GPiece<16> auVar9;
  GPiece<16> auVar10;
  
  auVar6 = ZEXT416(0xffffffff);
  auVar4 = auVar6 | auVar6 << 0x20 | auVar6 << 0x40 | auVar6 << 0x60;
  auVar6 = ZEXT416(0xffffffff);
  auVar8 = auVar6 | auVar6 << 0x20 | auVar6 << 0x40 | auVar6 << 0x60;
  auVar6.piece<0,4>() = param_5;
  auVar6.piece<4,4>() = param_5;
  auVar6.piece<8,4>() = param_5;
  auVar6.piece<12,4>() = param_5;
  pMVar3 = (MobyInstance *)param_2;
  pMVar3->mClass = param_1->animationId;
  auVar5 = vectorConvertFromSignedFixedPointWord(auVar6,0);
  auVar4 = vectorShiftLeftIntegerWord(auVar4,auVar4);
  uVar1 = param_1->animationFrame;
  pMVar3->pClass = (MobyClass *)0x0;
  pMVar3->state = uVar1;
  pMVar3->alpha = param_3;
  pMVar3->group = param_4;
  pMVar3->pChain = (void *)0x3f800000;
  auVar6 = loadVectorLeftIndexed(0x70,0xf0dd0);
  auVar6 = auVar6 >> 0x60 & (GPiece<16>)0xffffffff;
  auVar7 = auVar6 | auVar6 << 0x20 | auVar6 << 0x40 | auVar6 << 0x60;
  auVar9 = vectorShiftLeftIntegerWord(auVar8,auVar8);
  auVar8 = vectorReciprocalEstimateFloatingPoint(auVar5);
  auVar6 = ZEXT416(0xffffffff);
  auVar6 = auVar6 | auVar6 << 0x20 | auVar6 << 0x40 | auVar6 << 0x60;
  auVar10 = vectorShiftLeftIntegerWord(auVar6,auVar6);
  auVar6 = vectorNegativeMultiplySubtractFloatingPoint(auVar8,auVar5,auVar7);
  auVar6 = vectorMultiplyAddFloatingPoint(auVar8,auVar6,auVar4);
  auVar4 = vectorNegativeMultiplySubtractFloatingPoint(auVar6,auVar5,auVar7);
  auVar6 = vectorMultiplyAddFloatingPoint(auVar6,auVar4,auVar9);
  auVar4 = vectorNegativeMultiplySubtractFloatingPoint(auVar6,auVar5,auVar7);
  auVar6 = vectorMultiplyAddFloatingPoint(auVar6,auVar4,auVar10);
  uVar2 = storeVectorElementWordIndexed(auVar6,0x2c,param_2);
  *(undefined4 *)((uint)&pMVar3->scale & 0xfffffffc) = uVar2;
  if (param_6 != 0) {
    MB_UpdateAnimLayer((longlong)(int)param_1,pMVar3);
  }
  return;
}


// 0x00f0ea8 (0x74 bytes)
void AttachManipulator(MobyInstance *moby,uint32_t animJoint,Manipulator *manipulator)

{
  byte bVar1;
  int iVar2;
  MobyClass *pclass;
  
  if (manipulator->state == '\0') {
    manipulator->state = '\x01';
    manipulator->animation_bone = (char)animJoint;
    pclass = moby->pClass;
    (manipulator->rotation).w = 1.0;
    (manipulator->scale).x = 1.0;
    (manipulator->scale).y = 1.0;
    (manipulator->scale).z = 1.0;
    iVar2 = *(int *)((int)pclass->anim_joints + (animJoint & 0xff) * 4 + 4);
    bVar1 = *(byte *)(iVar2 + 4 + (uint)*(byte *)(iVar2 + 1));
    manipulator->pNext = moby->pManipulators;
    moby->pManipulators = manipulator;
    manipulator->bone_id = (uint)bVar1 * 0x40 + 0x70000000;
  }
  return;
}


// 0x00f0f1c (0x80 bytes)
void DetachManipulator(MobyInstance *pMoby,Manipulator *pManipulator)

{
  Manipulator *pMVar1;
  Manipulator *pMVar2;
  
  if (pManipulator != (Manipulator *)0x0) {
    pMVar1 = pMoby->pManipulators;
    if (pMoby->pManipulators == pManipulator) {
      pMoby->pManipulators = pManipulator->pNext;
    }
    else {
      do {
        pMVar2 = pMVar1;
        pMVar1 = pMVar2->pNext;
        if (pMVar1 == (Manipulator *)0x0) break;
      } while (pMVar1 != pManipulator);
      if (pMVar1 == pManipulator) {
        pMVar2->pNext = pManipulator->pNext;
      }
    }
    FastMemSet(pManipulator,0,0x40);
  }
  return;
}


// 0x00f0f9c (0x4c bytes)
/* [p2_mobyutil] find/insert in AnimationCacheRegistry[16] */

int AnimCache_Register(int p)

{
  int iVar1;
  
  iVar1 = 0;
  while( true ) {
    if (((&AnimationCacheRegistry)[iVar1] == 0) || ((&AnimationCacheRegistry)[iVar1] == p)) break;
    iVar1 = iVar1 + 1;
    if (0xf < iVar1) {
      return -1;
    }
  }
  (&AnimationCacheRegistry)[iVar1] = p;
  return iVar1;
}


// 0x00f0fe8 (0x50 bytes)
void CleanAnimationCache(void)

{
  undefined4 *puVar1;
  int idx;
  MobyInstance *iVar1;
  
  idx = 0;
  puVar1 = &AnimationCacheRegistry;
  do {
    iVar1 = (MobyInstance *)*puVar1;
    if ((iVar1 != (MobyInstance *)0x0) &&
       (((iVar1->state & 0x80) != 0 || (iVar1->updateId != 0xff)))) {
      *puVar1 = 0;
    }
    idx = idx + 1;
    puVar1 = puVar1 + 1;
  } while (idx < 0x10);
  return;
}


// 0x00f1038 (0xdc bytes)
void GetBoneTransformations(int param_1,undefined8 param_2,int param_3)

{
  double dVar1;
  GPiece<64> auStack_70;
  GPiece<16> local_30;
  
  dVar1 = (double)*(float *)(param_1 + 0x2c);
  MB_ComputeSelectedJoints(param_1,1,local_30,param_3);
  *(float *)(param_3 + 0x30) = (float)((double)*(float *)(param_3 + 0x30) * dVar1);
  *(float *)(param_3 + 0x34) = (float)((double)*(float *)(param_3 + 0x34) * dVar1);
  *(float *)(param_3 + 0x38) = (float)((double)*(float *)(param_3 + 0x38) * dVar1);
  FastMtxCopyNoTranslate(auStack_70,param_1 + 0xc0);
  FastVecMtx4Mul(param_3,auStack_70,param_3);
  *(float *)(param_3 + 0x30) = *(float *)(param_3 + 0x30) + *(float *)(param_1 + 0x10);
  *(float *)(param_3 + 0x34) = *(float *)(param_3 + 0x34) + *(float *)(param_1 + 0x14);
  *(float *)(param_3 + 0x38) = *(float *)(param_3 + 0x38) + *(float *)(param_1 + 0x18);
  return;
}


// 0x00f1114 (0x124 bytes)
void GetBonePosition(int param_1,undefined8 param_2,float *param_3)

{
  float fVar1;
  float fVar2;
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
  double dVar13;
  GPiece<48> auStack_60;
  float local_30;
  float local_2c;
  float local_28;
  float local_24;
  GPiece<8> local_20;
  
  dVar13 = (double)*(float *)(param_1 + 0x2c);
  MB_ComputeSelectedJoints(param_1,1,local_20,auStack_60);
  fVar1 = (float)((double)local_30 * dVar13);
  fVar2 = (float)((double)local_2c * dVar13);
  fVar3 = (float)((double)local_28 * dVar13);
  param_3[3] = local_24;
  *param_3 = fVar1;
  param_3[1] = fVar2;
  param_3[2] = fVar3;
  fVar4 = *(float *)(param_1 + 0xd4);
  fVar5 = *(float *)(param_1 + 0xd8);
  fVar6 = *(float *)(param_1 + 0xc4);
  fVar7 = *(float *)(param_1 + 0xcc);
  fVar8 = *(float *)(param_1 + 200);
  fVar9 = *(float *)(param_1 + 0xe4);
  fVar10 = *(float *)(param_1 + 0xe8);
  fVar11 = *(float *)(param_1 + 0xec);
  fVar12 = *(float *)(param_1 + 0xdc);
  *param_3 = *(float *)(param_1 + 0xe0) * fVar3 +
             *(float *)(param_1 + 0xc0) * fVar1 + *(float *)(param_1 + 0xd0) * fVar2;
  param_3[1] = fVar9 * fVar3 + fVar6 * fVar1 + fVar4 * fVar2;
  param_3[2] = fVar10 * fVar3 + fVar8 * fVar1 + fVar5 * fVar2;
  param_3[3] = fVar12 * fVar2 + fVar11 * fVar3 + fVar7 * fVar1 + local_24;
  *param_3 = *param_3 + *(float *)(param_1 + 0x10);
  param_3[1] = param_3[1] + *(float *)(param_1 + 0x14);
  param_3[2] = param_3[2] + *(float *)(param_1 + 0x18);
  return;
}


// 0x00f1238 (0x12c bytes)
void GetMobyJointsWorldPos(int param_1,int param_2,undefined8 param_3,float *param_4)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  double dVar7;
  
  dVar7 = (double)*(float *)(param_1 + 0x2c);
  MB_ComputeSelectedJointPos();
  if (0 < param_2) {
    do {
      fVar1 = (float)((double)*param_4 * dVar7);
      fVar2 = (float)((double)param_4[1] * dVar7);
      fVar3 = (float)((double)param_4[2] * dVar7);
      param_2 = param_2 + -1;
      *param_4 = fVar1;
      param_4[1] = fVar2;
      param_4[2] = fVar3;
      fVar6 = *(float *)(param_1 + 0xe0) * fVar3 +
              *(float *)(param_1 + 0xc0) * fVar1 + *(float *)(param_1 + 0xd0) * fVar2;
      fVar5 = *(float *)(param_1 + 0xe4) * fVar3 +
              *(float *)(param_1 + 0xc4) * fVar1 + *(float *)(param_1 + 0xd4) * fVar2;
      fVar4 = *(float *)(param_1 + 0xe8) * fVar3 +
              *(float *)(param_1 + 200) * fVar1 + *(float *)(param_1 + 0xd8) * fVar2;
      fVar2 = *(float *)(param_1 + 0xdc) * fVar2 +
              *(float *)(param_1 + 0xec) * fVar3 + *(float *)(param_1 + 0xcc) * fVar1 + param_4[3];
      *param_4 = fVar6;
      param_4[1] = fVar5;
      param_4[2] = fVar4;
      param_4[3] = fVar2;
      *param_4 = fVar6 + *(float *)(param_1 + 0x10);
      param_4[1] = fVar5 + *(float *)(param_1 + 0x14);
      fVar1 = *(float *)(param_1 + 0x18);
      param_4[3] = fVar2;
      param_4[2] = fVar4 + fVar1;
      param_4 = param_4 + 4;
    } while (0 < param_2);
  }
  return;
}


// 0x00f1364 (0xe0 bytes)
/* [p2_mobyutil] world matrices of listed joints (rot by moby mtx, scale, +pos) */

void GetMobyJointsWorldMtx(int param_1,undefined8 param_2,undefined8 param_3,int param_4)

{
  int iVar1;
  double dVar2;
  GPiece<72> auStack_70;
  
  dVar2 = (double)*(float *)(param_1 + 0x2c);
  FastMtxCopyNoTranslate(auStack_70,param_1 + 0xc0);
  MB_ComputeSelectedJoints(param_1,param_2,param_3,param_4);
  iVar1 = 0;
  if (0 < (int)param_2) {
    do {
      FastVecMtx4Mul(param_4,auStack_70,param_4);
      iVar1 = iVar1 + 1;
      *(float *)(param_4 + 0x30) =
           (float)((double)*(float *)(param_4 + 0x30) * dVar2 + (double)*(float *)(param_1 + 0x10));
      *(float *)(param_4 + 0x34) =
           (float)((double)*(float *)(param_4 + 0x34) * dVar2 + (double)*(float *)(param_1 + 0x14));
      *(float *)(param_4 + 0x38) =
           (float)((double)*(float *)(param_4 + 0x38) * dVar2 + (double)*(float *)(param_1 + 0x18));
      param_4 = param_4 + 0x40;
    } while (iVar1 < (int)param_2);
  }
  return;
}


// 0x00f1444 (0x4 bytes)
void STUB_000f1444(...)

{
  return;
}


// 0x00f1448 (0x4 bytes)
void STUB_000f1448(...)

{
  return;
}


// 0x00f1478 (0x2a4 bytes)
// inlined: FastAtan2 @0xf1538
void UpdateHeroLightAngle(void)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  ulonglong *puVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  int iVar10;
  int iVar11;
  ulonglong uVar12;
  longlong lVar13;
  ulonglong uVar14;
  longlong lVar15;
  longlong lVar16;
  longlong lVar17;
  float *pfVar18;
  ulonglong unaff_r31;
  ulonglong in_LR;
  longlong lVar19;
  
  uVar12 = ZEXT48(&stack0x00000000);
  lVar13 = uVar12 - 0xb0;
  puVar6 = (ulonglong *)lVar13;
  *puVar6 = uVar12;
  puVar6[0x18] = in_LR;
  puVar6[0x15] = unaff_r31;
  MB_GetLightDirection(g_heroMobyPtr,uVar12 - 0x40);
  fVar2 = ABS(*(float *)(puVar6 + 0xe));
  fVar3 = ABS(*(float *)((int)puVar6 + 0x74));
  *(float *)(puVar6 + 0x10) = fVar2 - fVar3;
  fVar1 = 0.0;
  uVar14 = (ulonglong)(*(uint *)(puVar6 + 0xe) >> 0x1c) & 8 |
           (ulonglong)(*(uint *)(puVar6 + 0x10) >> 0x1e) & 2 |
           (ulonglong)(*(uint *)((int)puVar6 + 0x74) >> 0x1d) & 4;
  fVar4 = fVar2;
  if (*(float *)(puVar6 + 0x10) - 0.0 < 0.0) {
    fVar4 = fVar3;
  }
  fVar5 = *(float *)(&g_atanQuadrantTable + (int)(uVar14 << 2));
  if (*(float *)(puVar6 + 0x10) - 0.0 < 0.0) {
    fVar3 = fVar2;
  }
  fVar2 = *(float *)(((uint)(uVar14 << 2) | 0x735900) + 4);
  if (0.0 < fVar4) {
    lVar17 = uVar12 - 0xa0;
    lVar16 = uVar12 - 0x2c;
    lVar15 = uVar12 - 0x1c;
    lVar19 = 2;
    fVar3 = (fVar3 - fVar4) / (fVar3 + fVar4);
    fVar4 = fVar3 * fVar3;
    *(float *)(puVar6 + 0x12) = fVar3;
    *(float *)(puVar6 + 0x11) = fVar3;
    *(float *)((int)puVar6 + 0x8c) = fVar3;
    *(float *)((int)puVar6 + 0x84) = fVar3;
    fVar3 = fVar4 * fVar4;
    *(float *)(puVar6 + 0x11) = *(float *)(puVar6 + 0x11) * fVar4;
    *(float *)((int)puVar6 + 0x8c) = *(float *)((int)puVar6 + 0x8c) * fVar3;
    *(float *)(puVar6 + 0x12) = *(float *)(puVar6 + 0x12) * fVar3 * fVar4;
    do {
      *(float *)((int)lVar17 + 0x84) = *(float *)((int)lVar17 + 0x74) * fVar3 * fVar3;
      iVar10 = (int)lVar16;
      lVar17 = lVar17 + 8;
      lVar16 = lVar16 + 8;
      *(float *)((int)lVar15 + 4) = *(float *)(iVar10 + 4) * fVar3 * fVar3;
      lVar15 = lVar15 + 8;
      lVar19 = lVar19 + -1;
    } while (lVar19 != 0);
    lVar17 = uVar12 - 0x2c;
    pfVar18 = (float *)&DAT_007358e0;
    lVar19 = 4;
    lVar15 = lVar17;
    lVar16 = lVar13;
    do {
      fVar3 = *pfVar18;
      fVar4 = pfVar18[1];
      pfVar18 = pfVar18 + 2;
      *(float *)((int)lVar16 + 0x84) = *(float *)((int)lVar16 + 0x84) * fVar3;
      lVar16 = lVar16 + 8;
      *(float *)((int)lVar15 + 4) = *(float *)((int)lVar15 + 4) * fVar4;
      lVar15 = lVar15 + 8;
      lVar19 = lVar19 + -1;
    } while (lVar19 != 0);
    lVar15 = 2;
    do {
      iVar10 = (int)lVar13;
      lVar13 = lVar13 + 0x10;
      iVar11 = (int)lVar17;
      lVar17 = lVar17 + 0x10;
      fVar1 = fVar1 + *(float *)(iVar10 + 0x84) + *(float *)(iVar11 + 4) + *(float *)(iVar11 + 8) +
              *(float *)(iVar11 + 0xc);
      lVar15 = lVar15 + -1;
    } while (lVar15 != 0);
    fVar1 = (fVar1 + 0.7853982) * fVar5 + fVar2;
  }
  fVar2 = fVar1 + 1.5707963;
  fVar3 = 3.1415925 - fVar1;
  if (fVar1 - (3.1415925 - fVar1) < 0.0) {
    fVar3 = fVar1;
  }
  fVar4 = 3.1415925 - fVar2;
  if (fVar2 - (3.1415925 - fVar2) < 0.0) {
    fVar4 = fVar2;
  }
  fVar5 = -3.1415925 - fVar1;
  if ((-3.1415925 - fVar1) - fVar3 < 0.0) {
    fVar5 = fVar3;
  }
  fVar1 = -3.1415925 - fVar2;
  if ((-3.1415925 - fVar2) - fVar4 < 0.0) {
    fVar1 = fVar4;
  }
  fVar2 = fVar5 * fVar5;
  fVar3 = fVar1 * fVar1;
  fVar8 = fVar2 * fVar2 * fVar5;
  fVar4 = fVar3 * fVar3 * fVar1;
  fVar9 = fVar2 * fVar8;
  DAT_00a4c4e8 = 0xbf7d70a4;
  fVar7 = fVar3 * fVar4;
  DAT_00a4c4e4 = (fVar2 * fVar9 * 2.601887e-06 +
                 fVar9 * -0.0001980741 + fVar8 * 0.0083330255 + fVar2 * fVar5 * -0.16666657 + fVar5)
                 * 0.14;
  DAT_00a4c4e0 = (fVar3 * fVar7 * 2.601887e-06 +
                 fVar7 * -0.0001980741 + fVar4 * 0.0083330255 + fVar3 * fVar1 * -0.16666657 + fVar1)
                 * 0.14;
  return;
}


// 0x00f171c (0x128 bytes)
// strings: 00652dc4: 'moby shadow'

void DrawMobyShadows(void)

{
  undefined1 *puVar1;
  undefined1 *puVar2;
  
  puVar1 = g_pPacket;
  if (DAT_00a49f50 == 0) {
    *DAT_00a49f54 = 0;
    DAT_00a49f54[1] = 0;
    DAT_00a49f54[2] = 0;
    DAT_00a49f54[3] = 0;
  }
  else {
    g_pPacket = g_pPacket + 0x10;
    *DAT_00a49f54 = 0;
    DAT_00a49f54[1] = (char)g_pPacket;
    DAT_00a49f54[2] = 0;
    DAT_00a49f54[3] = 0;
    STUB_001534fc();
    DrawScreenEffect_152df8(&____oClassInstanceList);
    *g_pPacket = 0;
    g_pPacket[1] = (char)DAT_00a49f54 + '\x10';
    g_pPacket[2] = 0;
    g_pPacket[3] = 0;
    g_pPacket = g_pPacket + 0x10;
    *puVar1 = 0;
    puVar2 = g_pPacket;
    puVar1[2] = 0;
    puVar1[1] = (char)puVar2;
    puVar1[3] = 0;
    STUB_0006562c("moby shadow",8);
  }
  return;
}


// 0x00f1844 (0x4 bytes)
void STUB_000f1844(...)

{
  return;
}


// 0x00f1848 (0x4 bytes)
void STUB_000f1848(...)

{
  return;
}


// 0x00f184c (0x4 bytes)
void STUB_000f184c(...)

{
  return;
}


// 0x00f1850 (0xe4 bytes)
void DrawMobyDepth(void)

{
  RenderingStep *pRVar1;
  undefined8 uVar2;
  
  idol_draw::Insert_WaitCmd_Marker(&DAT_01111700,MobyDepth,3);
  pRVar1 = MobyPass;
  uVar2 = idol_draw::PackCmd(0,1,0,1,0x80);
  idol_draw::DrawDepth(pRVar1,uVar2);
  pRVar1 = HUD_Pass;
  uVar2 = idol_draw::PackCmd(0,1,0,1,0x80);
  idol_draw::DrawDepth(pRVar1,uVar2);
  g_MobyDrawListEnd = idol::AllocateMemAlign(FrameHeap,0x1e000,0x10);
  g_MobyDrawListStart = g_MobyDrawListEnd;
  DAT_00a49b44 = 0;
  return;
}


// 0x00f1934 (0x40 bytes)
/* [p2_mobyutil] g_MobyDrawListEnd = 0xf7af0(moby, g_MobyDrawListEnd, ...) */

void MB_AddToDrawList(undefined4 param_1,undefined8 param_2)

{
  g_MobyDrawListEnd = MB_BuildDrawEntry(param_1,g_MobyDrawListEnd,param_2,0);
  return;
}


// 0x00f1974 (0x104 bytes)
// strings: 00652dd0: 'moby draw' | 00652de0: 'moby skin'

/* [p2_mobyutil] 'moby draw'/'moby skin' passes: draws draw list g_MobyDrawListStart..End (0xb0
   entries), skinned mobys, writes Forward/Depth passes */

void DrawMobyList(void)

{
  STUB_00065630("moby draw",3);
  STUB_0006562c("moby draw",5);
  if (g_DebugEnables[10] != 0) {
    MB_DrawEntryList(g_MobyDrawListStart,(g_MobyDrawListEnd - g_MobyDrawListStart) / 0xb0);
    if (DAT_00a49b44 != 0) {
      STUB_000f5a7c();
    }
  }
  STUB_0006562c("moby skin",3);
  if ((g_DebugEnables[10] != 0) && (DAT_00a49f54 != 0)) {
    DrawMobyShadows();
  }
  idol_draw::RsxCmd_WritePass(ForwardPass);
  idol_draw::RsxCmd_WritePass(DepthPass);
  return;
}


// 0x00f1a78 (0x1f8 bytes)
// strings: 00652dd0: 'moby draw' | 00652de0: 'moby skin'

void DrawMobys(void)

{
  RenderingStep *pRVar1;
  undefined8 CMD;
  
  idol_draw::Insert_WaitCmd_Marker(&DAT_01111700,MobyDepth,3);
  pRVar1 = MobyPass;
  CMD = idol_draw::PackCmd(0,1,0,1,0x80);
  idol_draw::DrawDepth(pRVar1,CMD);
  pRVar1 = HUD_Pass;
  CMD = idol_draw::PackCmd(0,1,0,1,0x80);
  idol_draw::DrawDepth(pRVar1,CMD);
  CMD = idol::AllocateMemAlign(FrameHeap,0x1e000,0x10);
  g_MobyDrawListEnd = (int)CMD;
  DAT_00a49b44 = 0;
  g_MobyDrawListStart = g_MobyDrawListEnd;
  if (g_DebugEnables[10] != 0) {
    g_MobyDrawListEnd = MB_BuildDrawEntry(g_MobyInstance,CMD,0xffffffffffffffff,1);
  }
  STUB_00065630("moby draw",3);
  STUB_0006562c("moby draw",5);
  if (g_DebugEnables[10] != 0) {
    MB_DrawEntryList(g_MobyDrawListStart,(g_MobyDrawListEnd - g_MobyDrawListStart) / 0xb0);
    if (DAT_00a49b44 != 0) {
      STUB_000f5a7c();
    }
  }
  STUB_0006562c("moby skin",3);
  if ((g_DebugEnables[10] != 0) && (DAT_00a49f54 != 0)) {
    DrawMobyShadows();
  }
  idol_draw::RsxCmd_WritePass(ForwardPass);
  idol_draw::RsxCmd_WritePass(DepthPass);
  return;
}


// 0x00f1c78 (0x1d8 bytes)
// strings: 00652dec: 'TJB - No env sample point found!\n'

float * MB_SetLightsFromEnvSample(MobyInstance *param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  int iVar5;
  float *pfVar6;
  float *pfVar7;
  int iVar8;
  
  iVar8 = 0;
  iVar5 = -1;
  fVar2 = 999999.0;
  if (0 < DAT_00a4daf4) {
    pfVar6 = DAT_00a4db00;
    do {
      fVar3 = (param_1->pos).y - pfVar6[1];
      fVar1 = (param_1->pos).x - *pfVar6;
      fVar4 = (param_1->pos).z - pfVar6[2];
      fVar1 = SQRT(fVar4 * fVar4 + fVar1 * fVar1 + fVar3 * fVar3);
      if (fVar1 < fVar2 && fVar1 <= 8.0) {
        fVar2 = fVar1;
        iVar5 = iVar8;
      }
      iVar8 = iVar8 + 1;
      pfVar6 = pfVar6 + 0xc;
    } while (iVar8 < DAT_00a4daf4);
    if (iVar5 != -1) {
      iVar8 = (int)DAT_00a4db00[iVar5 * 0xc + 6] * 0x10000 +
              (int)DAT_00a4db00[iVar5 * 0xc + 5] * 0x100 + (int)DAT_00a4db00[iVar5 * 0xc + 4];
      param_1->colorManipulator = iVar8;
      MB_SetLights(param_1,iVar8,0,0,0);
      param_1->light = (uint)DAT_00a4db00[iVar5 * 0xc + 7];
      pfVar7 = DAT_00a4db00 + iVar5 * 0xc;
      pfVar6 = pfVar7 + 10;
      if (*(char *)((int)pfVar7 + 0x27) != '\0') {
        DAT_009637c4 = pfVar7[8];
        DAT_009637c8 = *(undefined1 *)(pfVar7 + 9);
        DAT_009637c9 = *(undefined1 *)((int)pfVar7 + 0x25);
        DAT_009637cb = DAT_009637cb | 7;
        DAT_009637ca = *(byte *)((int)pfVar7 + 0x26);
        pfVar7 = (float *)(uint)DAT_009637ca;
      }
      if ((int)*pfVar6 < 0) {
        return pfVar7;
      }
      if (g_MusicPlaying.status != 0) {
        return (float *)&DAT_009636c8;
      }
      if (g_PendingTrack != -1) {
        return (float *)&DAT_009636c8;
      }
      if (g_TransitionState != 0) {
        return (float *)&DAT_009636c8;
      }
      g_MusicPlaying.track = SUB42(*pfVar6,0);
      return (float *)&DAT_009636c8;
    }
  }
  pfVar6 = (float *)printf("TJB - No env sample point found!\n");
  return pfVar6;
}


// 0x00f1e50 (0x34 bytes)
void SetLevelFlag(int arg)

{
  if (arg != 0xff) {
    g_LevelFlags[Level][arg] = -1;
  }
  return;
}


