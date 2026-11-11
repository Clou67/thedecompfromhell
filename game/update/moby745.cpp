// game/update/moby745.cpp -- reconstructed from NPEA00385 EBOOT
// STATUS: NOT STARTED (raw Ghidra output)
// 5 functions, 0x4442f8-0x445354
#include <stdio.h>
#include "game/update/moby745.h"
#include "game/camera.h"
#include "game/collproc.h"
#include "game/hero.h"
#include "game/mobyfunc.h"
#include "game/mobyutil.h"
#include "game/partupd.h"
#include "game/path.h"

// 0x04442f8 (0x138 bytes)
// inlined: FastRSqrt @0x444370
// strings: 00657e64: 'at:j:/Ratchet/rc1/code/game/update/moby745.cpp line#%d\n'

void M745_004442f8(int param_1,float *param_2)

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
  
  printf("at:j:/Ratchet/rc1/code/game/update/moby745.cpp line#%d\n",0x19);
  fVar1 = param_2[1];
  fVar2 = *param_2;
  fVar3 = param_2[2];
  fVar4 = 0.0;
  fVar5 = *(float *)(param_1 + 0xe4);
  fVar6 = *(float *)(param_1 + 0xe8);
  fVar7 = *(float *)(param_1 + 0xe0);
  fVar10 = fVar3 * fVar3 + fVar2 * fVar2 + fVar1 * fVar1;
  fVar8 = fVar4;
  fVar9 = fVar4;
  if (SQRT(fVar10) != 0.0) {
    fVar4 = 1.0 / SQRT(fVar10);
    fVar4 = -(fVar10 * fVar4 * fVar4 - 1.0) * fVar4 * 0.5 + fVar4;
    fVar4 = -(fVar10 * fVar4 * fVar4 - 1.0) * fVar4 * 0.5 + fVar4;
    fVar4 = -(fVar10 * fVar4 * fVar4 - 1.0) * fVar4 * 0.5 + fVar4;
    fVar9 = fVar2 * fVar4;
    fVar8 = fVar1 * fVar4;
    fVar4 = fVar3 * fVar4;
  }
  *(undefined4 *)(param_1 + 0xcc) = 0;
  *(undefined4 *)(param_1 + 0xdc) = 0;
  fVar1 = fVar5 * fVar4 - fVar6 * fVar8;
  fVar3 = fVar6 * fVar9 - fVar7 * fVar4;
  fVar2 = fVar7 * fVar8 - fVar5 * fVar9;
  *(float *)(param_1 + 0xd0) = fVar1;
  *(float *)(param_1 + 0xd4) = fVar3;
  *(float *)(param_1 + 0xd8) = fVar2;
  *(float *)(param_1 + 0xc4) = fVar2 * fVar7 - fVar1 * fVar6;
  *(float *)(param_1 + 200) = fVar1 * fVar5 - fVar3 * fVar7;
  *(float *)(param_1 + 0xc0) = fVar3 * fVar6 - fVar2 * fVar5;
  return;
}


// 0x0444440 (0x138 bytes)
// inlined: FastRSqrt @0x4444b8
// strings: 00657e64: 'at:j:/Ratchet/rc1/code/game/update/moby745.cpp line#%d\n'

void M745_00444440(int param_1,float *param_2)

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
  
  printf("at:j:/Ratchet/rc1/code/game/update/moby745.cpp line#%d\n",0x2c);
  fVar1 = param_2[1];
  fVar2 = *param_2;
  fVar3 = param_2[2];
  fVar4 = 0.0;
  fVar5 = *(float *)(param_1 + 0xd4);
  fVar6 = *(float *)(param_1 + 0xd8);
  fVar7 = *(float *)(param_1 + 0xd0);
  fVar10 = fVar3 * fVar3 + fVar2 * fVar2 + fVar1 * fVar1;
  fVar8 = fVar4;
  fVar9 = fVar4;
  if (SQRT(fVar10) != 0.0) {
    fVar4 = 1.0 / SQRT(fVar10);
    fVar4 = -(fVar10 * fVar4 * fVar4 - 1.0) * fVar4 * 0.5 + fVar4;
    fVar4 = -(fVar10 * fVar4 * fVar4 - 1.0) * fVar4 * 0.5 + fVar4;
    fVar4 = -(fVar10 * fVar4 * fVar4 - 1.0) * fVar4 * 0.5 + fVar4;
    fVar9 = fVar2 * fVar4;
    fVar8 = fVar1 * fVar4;
    fVar4 = fVar3 * fVar4;
  }
  *(undefined4 *)(param_1 + 0xec) = 0;
  *(undefined4 *)(param_1 + 0xcc) = 0;
  fVar1 = fVar5 * fVar4 - fVar6 * fVar8;
  fVar3 = fVar6 * fVar9 - fVar7 * fVar4;
  fVar2 = fVar7 * fVar8 - fVar5 * fVar9;
  *(float *)(param_1 + 0xc0) = fVar1;
  *(float *)(param_1 + 0xc4) = fVar3;
  *(float *)(param_1 + 200) = fVar2;
  *(float *)(param_1 + 0xe4) = fVar2 * fVar7 - fVar1 * fVar6;
  *(float *)(param_1 + 0xe8) = fVar1 * fVar5 - fVar3 * fVar7;
  *(float *)(param_1 + 0xe0) = fVar3 * fVar6 - fVar2 * fVar5;
  return;
}


// 0x0444588 (0x304 bytes)
// inlined: FastRSqrt @0x444768
// strings: 00657e64: 'at:j:/Ratchet/rc1/code/game/update/moby745.cpp line#%d\n'

double M745_00444588
                 (int param_1,int param_2,float *param_3,float *param_4,float *param_5)

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
  int iVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  GPiece<16> local_70;
  GPiece<24> local_60;
  
  printf("at:j:/Ratchet/rc1/code/game/update/moby745.cpp line#%d\n",0x40);
  fVar1 = *(float *)(param_1 + 0xe4);
  fVar2 = *(float *)(param_1 + 0xe0);
  fVar3 = *(float *)(param_1 + 0xe8);
  dVar14 = 0.0;
  fVar4 = *param_3;
  fVar5 = param_3[1];
  fVar6 = param_3[2];
  fVar8 = SQRT(fVar3 * fVar3 + fVar2 * fVar2 + fVar1 * fVar1);
  if (fVar8 == 0.0) {
    fVar7 = *(float *)(param_1 + 0xec);
  }
  else {
    fVar7 = *(float *)(param_1 + 0xec);
  }
  fVar9 = -*(float *)(param_2 + 0xf4) / fVar8;
  dVar11 = dVar14;
  if (0.0 - fVar8 < 0.0) {
    dVar11 = (double)(fVar3 * fVar9);
  }
  dVar12 = dVar14;
  if (0.0 - fVar8 < 0.0) {
    dVar12 = (double)(fVar1 * fVar9);
  }
  dVar13 = dVar14;
  if (0.0 - fVar8 < 0.0) {
    dVar13 = (double)(fVar2 * fVar9);
  }
  if (fVar8 - 0.0 < 0.0) {
    dVar11 = (double)(fVar3 * fVar9);
  }
  if (fVar8 - 0.0 < 0.0) {
    dVar12 = (double)(fVar1 * fVar9);
  }
  if (fVar8 - 0.0 < 0.0) {
    dVar13 = (double)(fVar2 * fVar9);
  }
  iVar10 = CollLine(local_70,local_60,2,param_1,0);
  if (iVar10 == 0) {
    *param_4 = (float)(dVar13 + (double)fVar4);
    param_4[1] = (float)(dVar12 + (double)fVar5);
    param_4[2] = (float)(dVar11 + (double)fVar6);
    param_4[3] = fVar7;
    *param_5 = *(float *)(param_1 + 0xe0);
    param_5[1] = *(float *)(param_1 + 0xe4);
    param_5[2] = *(float *)(param_1 + 0xe8);
    param_5[3] = *(float *)(param_1 + 0xec);
    fVar1 = 100000.0;
  }
  else {
    *param_4 = g_CollOutput.ip.x;
    param_4[1] = g_CollOutput.ip.y;
    param_4[2] = g_CollOutput.ip.z;
    param_4[3] = g_CollOutput.ip.w;
    fVar1 = g_CollOutput.normal.z * g_CollOutput.normal.z +
            g_CollOutput.normal.x * g_CollOutput.normal.x + g_CollOutput.normal.y * g_CollOutput.normal.y;
    if ((double)SQRT(fVar1) == dVar14) {
      *param_5 = g_CollOutput.normal.x;
      param_5[1] = g_CollOutput.normal.y;
      param_5[2] = g_CollOutput.normal.z;
      fVar1 = g_CollOutput.normal.w;
      param_5[2] = 0.0;
      param_5[3] = fVar1;
      param_5[1] = 0.0;
      *param_5 = 0.0;
    }
    else {
      fVar2 = 1.0 / SQRT(fVar1);
      fVar2 = -(fVar1 * fVar2 * fVar2 - 1.0) * fVar2 * 0.5 + fVar2;
      fVar2 = -(fVar1 * fVar2 * fVar2 - 1.0) * fVar2 * 0.5 + fVar2;
      fVar2 = -(fVar1 * fVar2 * fVar2 - 1.0) * fVar2 * 0.5 + fVar2;
      *param_5 = g_CollOutput.normal.x * fVar2;
      param_5[1] = g_CollOutput.normal.y * fVar2;
      param_5[2] = g_CollOutput.normal.z * fVar2;
      param_5[3] = g_CollOutput.normal.w;
    }
    fVar1 = SQRT((param_3[2] - g_CollOutput.ip.z) * (param_3[2] - g_CollOutput.ip.z) +
                 (*param_3 - g_CollOutput.ip.x) * (*param_3 - g_CollOutput.ip.x) +
                 (param_3[1] - g_CollOutput.ip.y) * (param_3[1] - g_CollOutput.ip.y));
  }
  return (double)fVar1;
}


// 0x044488c (0x1ac bytes)
// strings: 00657e64: 'at:j:/Ratchet/rc1/code/game/update/moby745.cpp line#%d\n'

void M745_0044488c(MobyInstance *param_1,int param_2,undefined8 param_3)

{
  float fVar1;
  float fVar2;
  float fVar3;
  MobyModeBit MVar4;
  uint uVar5;
  uint uVar6;
  float fVar7;
  int iVar8;
  float *pfVar9;
  int local_30 [4];
  
  printf("at:j:/Ratchet/rc1/code/game/update/moby745.cpp line#%d\n",0x59);
  if (param_1->state != '\n') {
    iVar8 = MB_damage(param_1,0x330000,0);
    MB_HandleDamage(param_1,iVar8,param_3,0,local_30,0,0,4);
    if (1 < local_30[0]) {
      pfVar9 = (float *)param_3;
      uVar5 = (int)*pfVar9 >> 0x1f;
      uVar6 = (int)*(uint *)(iVar8 + 0x2c) >> 0x1f;
      if ((int)((uVar6 >> 1 ^ *(uint *)(iVar8 + 0x2c)) - uVar6) <
          (int)((uVar5 >> 1 ^ (uint)*pfVar9) - uVar5)) {
        *pfVar9 = *pfVar9 - *(float *)(iVar8 + 0x2c);
      }
      else {
        MVar4 = param_1->modeBits;
        *pfVar9 = 0.0;
        param_1->modeBits =
             MVar4 & (MIRROR|CAN_BE_DAMAGED|HIDE_BACKFACES|DISABLE_Z_WRITE|DRAW_SHADOW|
                      DRAW_TRANSPARENT_WEIRD|LOCK_ROTATION|NO_DRAW|UNK_40|HAS_SPECIAL_VARS|HAS_GLOW|
                      TRANSPARENT|NO_POST_UPDATE|NO_UPDATE|DISABLED);
        if (param_1->animationId != '\t') {
          MB_SetAnimation(param_1,9,10,0);
        }
        param_1->state = '\n';
      }
      if ((*(uint *)(iVar8 + 0x30) & 1) != 0) {
        fVar1 = *(float *)(iVar8 + 0x10);
        *(float *)(param_2 + 0x110) = fVar1;
        fVar2 = *(float *)(iVar8 + 0x14);
        *(float *)(param_2 + 0x114) = fVar2;
        fVar3 = *(float *)(iVar8 + 0x18);
        *(float *)(param_2 + 0x118) = fVar3;
        *(undefined4 *)(param_2 + 0x11c) = *(undefined4 *)(iVar8 + 0x1c);
        fVar7 = SQRT(fVar3 * fVar3 + fVar1 * fVar1 + fVar2 * fVar2);
        if (*(float *)(param_2 + 0xd8) < fVar7) {
          fVar7 = *(float *)(param_2 + 0xd8) / fVar7;
          *(float *)(param_2 + 0x110) = fVar1 * fVar7;
          *(float *)(param_2 + 0x114) = fVar2 * fVar7;
          *(float *)(param_2 + 0x118) = fVar3 * fVar7;
        }
      }
    }
    param_1->damage = -1;
  }
  return;
}


// 0x0444a50 (0x904 bytes)
// strings: 00657e9c: 'at:j:\\Ratchet\\rc1\\code\\game\\update\\moby745.cpp line#%d\n' | 00657ed4: 'at:j:\\Ratchet\\rc1\\code\\game\\update\\moby745.cpp line#%dINIT\n' | 00657f14: 'at:j:\\Ratchet\\rc1\\code\\game\\update\\moby745.cpp line#%dHANG_OUT\n' | 00657f54: 'at:j:\\Ratchet\\rc1\\code\\game\\update\\moby745.cpp line#%dPATH_DOWN\n' | 00657f9c: 'at:j:\\Ratchet\\rc1\\code\\game\\update\\moby745.cpp line#%dDROP_DOWN\n' | 00657fe4: 'at:j:\\Ratchet\\rc1\\code\\game\\update\\moby745.cpp line#%dLAND\n' | 00658024: 'at:j:\\Ratchet\\rc1\\code\\game\\update\\moby745.cpp line#%dSEEK_PLAYER\n' | 0065806c: 'at:j:\\Ratchet\\rc1\\code\\game\\update\\moby745.cpp line#%dATTACK\n' | 006580ac: 'at:j:\\Ratchet\\rc1\\code\\game\\update\\moby745.cpp line#%dWANDER\n' | 006580ec: 'at:j:\\Ratchet\\rc1\\code\\game\\update\\moby745.cpp line#%dDIE\n'

/* Moby 745 */

MobyInstance * UpdateMoby_745(MobyInstance *moby)

{
  float fVar1;
  float fVar2;
  byte bVar3;
  f32 fVar4;
  void *pvVar5;
  Spline *spline;
  MobyInstance *pMVar6;
  short sVar7;
  double dVar8;
  double dVar9;
  GPiece<16> auStack_110;
  Vec4 VStack_100;
  f32 local_f0;
  f32 local_ec;
  f32 local_e8;
  f32 local_e4;
  GPiece<16> auStack_e0;
  GPiece<16> auStack_d0;
  GPiece<48> auStack_c0;
  float local_90;
  float local_8c;
  int local_50;
  
  pMVar6 = moby;
  if ((moby != (MobyInstance *)0x0) && (pvVar5 = moby->pVar, pvVar5 != (void *)0x0)) {
    printf("at:j:\\Ratchet\\rc1\\code\\game\\update\\moby745.cpp line#%d\n",0x83);
    printf("at:j:\\Ratchet\\rc1\\code\\game\\update\\moby745.cpp line#%d\n",0x87);
    M745_0044488c(moby,pvVar5,(int)pvVar5 + 0x20);
    printf("at:j:\\Ratchet\\rc1\\code\\game\\update\\moby745.cpp line#%d\n",0x8b);
    dVar9 = (double)*(float *)((int)pvVar5 + 0xe8);
    if ((double)*(float *)((int)pvVar5 + 0xe8) - (double)*(float *)((int)pvVar5 + 0xe0) < 0.0) {
      dVar9 = (double)*(float *)((int)pvVar5 + 0xe0);
    }
    MB_getTarget(dVar9,moby);
    printf("at:j:\\Ratchet\\rc1\\code\\game\\update\\moby745.cpp line#%d\n",0x92);
    dVar8 = 0.0;
    dVar9 = dVar8;
    if (local_50 != 0) {
      dVar8 = (double)local_90;
      dVar9 = (double)local_8c;
    }
    pMVar6 = (MobyInstance *)
             printf("at:j:\\Ratchet\\rc1\\code\\game\\update\\moby745.cpp line#%d\n",0x9d);
    bVar3 = moby->state;
    if (bVar3 < 5) {
      if (bVar3 < 2) {
        if (bVar3 == 0) {
          printf("at:j:\\Ratchet\\rc1\\code\\game\\update\\moby745.cpp line#%dINIT\n",0xa1);
          *(f32 *)((int)pvVar5 + 0x100) = (moby->pos).x;
          *(f32 *)((int)pvVar5 + 0x104) = (moby->pos).y;
          *(f32 *)((int)pvVar5 + 0x108) = (moby->pos).z;
          fVar4 = (moby->pos).w;
          *(undefined1 *)((int)pvVar5 + 0x110) = 0;
          *(f32 *)((int)pvVar5 + 0x10c) = fVar4;
          *(undefined1 *)((int)pvVar5 + 0x111) = 0;
          *(undefined1 *)((int)pvVar5 + 0x112) = 0;
          *(undefined1 *)((int)pvVar5 + 0x113) = 0;
          *(undefined1 *)((int)pvVar5 + 0x114) = 0;
          *(undefined1 *)((int)pvVar5 + 0x115) = 0;
          *(undefined1 *)((int)pvVar5 + 0x116) = 0;
          *(undefined1 *)((int)pvVar5 + 0x117) = 0;
          *(undefined1 *)((int)pvVar5 + 0x118) = 0;
          *(undefined1 *)((int)pvVar5 + 0x119) = 0;
          *(undefined1 *)((int)pvVar5 + 0x11a) = 0;
          *(undefined1 *)((int)pvVar5 + 0x11b) = 0;
          *(undefined1 *)((int)pvVar5 + 0x11c) = 0;
          *(undefined1 *)((int)pvVar5 + 0x11d) = 0;
          *(undefined1 *)((int)pvVar5 + 0x11e) = 0;
          *(undefined1 *)((int)pvVar5 + 0x11f) = 0;
          moby->modeBits = moby->modeBits | (CAN_BE_AUTO_TARGETED|LOCK_ROTATION);
          M745_00444588(moby,pvVar5,&moby->pos,&moby->pos,auStack_110);
          M745_00444440(moby,auStack_110);
          if (moby->animationId != '\x05') {
            MB_SetAnimation(moby,5,0,10);
          }
          pMVar6 = (MobyInstance *)0x1;
          moby->state = '\x01';
        }
        else {
          printf("at:j:\\Ratchet\\rc1\\code\\game\\update\\moby745.cpp line#%dHANG_OUT\n",0xb3
                      );
          if (((local_50 != 0) || (pMVar6 = (MobyInstance *)0x0, *(int *)((int)pvVar5 + 0x38) != 0))
             && ((fVar2 = (moby->pos).y - *(float *)(local_50 + 0x14),
                 fVar1 = (moby->pos).x - *(float *)(local_50 + 0x10),
                 SQRT(fVar1 * fVar1 + fVar2 * fVar2) < *(float *)((int)pvVar5 + 0xe0) ||
                 (pMVar6 = *(MobyInstance **)((int)pvVar5 + 0x38), pMVar6 != (MobyInstance *)0x0))))
          {
            sVar7 = *(short *)((int)pvVar5 + 0xd2);
            *(undefined4 *)((int)pvVar5 + 0x38) = 0;
            pMVar6 = (MobyInstance *)(int)sVar7;
            if (sVar7 < 2) {
              if (-1 < sVar7) {
                if (moby->animationId != '\a') {
                  MB_SetAnimation(moby,7,0,10);
                }
                pMVar6 = (MobyInstance *)0x3;
                moby->state = '\x03';
              }
            }
            else if (sVar7 < 3) {
              if (moby->animationId != '\x02') {
                MB_SetAnimation(moby,2,0,0);
              }
              pMVar6 = (MobyInstance *)0x4;
              moby->state = '\x04';
            }
          }
        }
      }
      else if (2 < bVar3) {
        if (bVar3 < 4) {
          printf("at:j:\\Ratchet\\rc1\\code\\game\\update\\moby745.cpp line#%dPATH_DOWN\n",
                       0xca);
          spline = Splines[*(int *)((int)pvVar5 + 0xd4)];
          sVar7 = Path_PickNextNode(moby,spline,spline->points + spline->cnt + -1,&VStack_100)
          ;
          *(short *)((int)pvVar5 + 0xd0) = sVar7;
          bVar3 = moby->animationId;
          pMVar6 = (MobyInstance *)(uint)bVar3;
          if ((sVar7 == -1) || (spline->cnt + -1 <= (int)sVar7)) {
            sVar7 = *(short *)((int)pvVar5 + 0xd2);
            if (sVar7 < 1) {
              if (-1 < sVar7) {
                if (bVar3 != 7) {
                  MB_SetAnimation(moby,7,0,10);
                }
                pMVar6 = (MobyInstance *)0x6;
                moby->state = '\x06';
              }
            }
            else if (sVar7 < 3) {
              if (bVar3 != 2) {
                MB_SetAnimation(moby,2,0,0);
              }
              pMVar6 = (MobyInstance *)0x4;
              moby->state = '\x04';
            }
          }
        }
        else {
          printf("at:j:\\Ratchet\\rc1\\code\\game\\update\\moby745.cpp line#%dDROP_DOWN\n",
                       0xe8);
          if (((moby->field43_0x70 & 2U) != 0) && (moby->animationId != '\x03')) {
            MB_SetAnimation(moby,3,0,0);
          }
          local_f0 = (moby->pos).x;
          local_ec = (moby->pos).y;
          local_e8 = (moby->pos).z;
          local_e4 = (moby->pos).w;
          fVar1 = -(*(float *)((int)pvVar5 + 0xfc) * DAT_0071f408 - *(float *)((int)pvVar5 + 0x118))
          ;
          *(float *)((int)pvVar5 + 0x118) = fVar1;
          (moby->pos).z = (moby->pos).z + fVar1;
          pMVar6 = (MobyInstance *)CollLine(&local_f0,&moby->pos,2,moby,0);
          if (pMVar6 != (MobyInstance *)0x0) {
            *(undefined1 *)((int)pvVar5 + 0x110) = 0;
            *(undefined1 *)((int)pvVar5 + 0x111) = 0;
            *(undefined1 *)((int)pvVar5 + 0x112) = 0;
            *(undefined1 *)((int)pvVar5 + 0x113) = 0;
            *(undefined1 *)((int)pvVar5 + 0x114) = 0;
            *(undefined1 *)((int)pvVar5 + 0x115) = 0;
            *(undefined1 *)((int)pvVar5 + 0x116) = 0;
            *(undefined1 *)((int)pvVar5 + 0x117) = 0;
            *(undefined1 *)((int)pvVar5 + 0x118) = 0;
            *(undefined1 *)((int)pvVar5 + 0x119) = 0;
            *(undefined1 *)((int)pvVar5 + 0x11a) = 0;
            *(undefined1 *)((int)pvVar5 + 0x11b) = 0;
            *(undefined1 *)((int)pvVar5 + 0x11c) = 0;
            *(undefined1 *)((int)pvVar5 + 0x11d) = 0;
            *(undefined1 *)((int)pvVar5 + 0x11e) = 0;
            *(undefined1 *)((int)pvVar5 + 0x11f) = 0;
            if (moby->animationId != '\x04') {
              MB_SetAnimation(moby,4,0,4);
            }
            pMVar6 = (MobyInstance *)0x5;
            moby->state = '\x05';
          }
        }
      }
    }
    else if (bVar3 == 10) {
      printf("at:j:\\Ratchet\\rc1\\code\\game\\update\\moby745.cpp line#%dDIE\n",0x133);
      pMVar6 = (MobyInstance *)((byte)moby->field43_0x70 & 2);
      if ((moby->field43_0x70 & 2U) != 0) {
        GetBonePosition(moby,1,auStack_d0);
        MB_genericExplosion
                  (0,0,0x3ff0000000000000,0x3fe0000000000000,0x4008000000000000,0x3ff0000000000000,
                   0x401c000000000000,moby,(int)pvVar5 + 0x110,auStack_d0,1,0xffffffffffffffff,3,1,5
                  );
        pMVar6 = (MobyInstance *)DeleteMoby(moby);
      }
    }
    else {
      if (bVar3 != 8) {
        if (bVar3 != 7) {
          if (bVar3 == 6) {
            pMVar6 = (MobyInstance *)
                     printf("at:j:\\Ratchet\\rc1\\code\\game\\update\\moby745.cpp line#%dSEEK_PLAYER\n"
                                  ,0x107);
            fVar1 = (moby->pos).y - *(float *)((int)pvVar5 + 0x104);
            fVar2 = (moby->pos).x - *(float *)((int)pvVar5 + 0x100);
            if (SQRT(fVar2 * fVar2 + fVar1 * fVar1) <= *(float *)((int)pvVar5 + 0xe8)) {
              return pMVar6;
            }
            moby->state = '\b';
            return (MobyInstance *)0x8;
          }
          if (bVar3 != 5) {
            return pMVar6;
          }
          printf("at:j:\\Ratchet\\rc1\\code\\game\\update\\moby745.cpp line#%dLAND\n",0xff);
          if ((moby->field43_0x70 & 2U) == 0) {
            return (MobyInstance *)((byte)moby->field43_0x70 & 2);
          }
          if (moby->animationId != '\a') {
            MB_SetAnimation(moby,7,0,10);
          }
          moby->state = '\x06';
          return (MobyInstance *)0x6;
        }
        printf("at:j:\\Ratchet\\rc1\\code\\game\\update\\moby745.cpp line#%dATTACK\n",0x113);
        if ((moby->field43_0x70 & 2U) == 0) {
          SetCollDamIn(0x3ff0000000000000,auStack_c0,moby,1);
          GetBonePosition(moby,0,auStack_e0);
          CollMobySphere(0x3fd9200000000000,auStack_e0);
        }
        else if ((local_50 == 0) ||
                (fVar1 = (moby->pos).y - *(float *)(local_50 + 0x14),
                fVar2 = (moby->pos).x - *(float *)(local_50 + 0x10),
                *(float *)((int)pvVar5 + 0xe4) < SQRT(fVar2 * fVar2 + fVar1 * fVar1))) {
          if (moby->animationId != '\a') {
            MB_SetAnimation(moby,7,0,10);
          }
          moby->state = '\x06';
        }
        else {
          if (moby->animationId != '\b') {
            MB_SetAnimation(moby,8,0,10);
          }
          moby->state = '\a';
        }
      }
      printf("at:j:\\Ratchet\\rc1\\code\\game\\update\\moby745.cpp line#%dWANDER\n",0x129);
      pMVar6 = (MobyInstance *)(uint)moby->animationId;
      if ((local_50 != 0) || (*(int *)((int)pvVar5 + 0x38) != 0)) {
        fVar1 = (float)((double)(moby->pos).x - (double)*(float *)((int)pvVar5 + 0x100));
        fVar2 = (float)((double)(moby->pos).y - (double)*(float *)((int)pvVar5 + 0x104));
        if ((SQRT(fVar1 * fVar1 + fVar2 * fVar2) < *(float *)((int)pvVar5 + 0xe8)) &&
           ((fVar1 = (float)(dVar9 - (double)*(float *)((int)pvVar5 + 0x104)),
            fVar2 = (float)(dVar8 - (double)*(float *)((int)pvVar5 + 0x100)),
            SQRT(fVar2 * fVar2 + fVar1 * fVar1) < *(float *)((int)pvVar5 + 0xe0) ||
            (*(int *)((int)pvVar5 + 0x38) != 0)))) {
          if (moby->animationId != 7) {
            MB_SetAnimation(moby,7,0,10);
          }
          pMVar6 = (MobyInstance *)0x0;
          *(undefined4 *)((int)pvVar5 + 0x38) = 0;
          moby->state = '\x06';
        }
      }
    }
  }
  return pMVar6;
}


