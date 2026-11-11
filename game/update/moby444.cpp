// game/update/moby444.cpp -- reconstructed from NPEA00385 EBOOT
// STATUS: NOT STARTED (raw Ghidra output)
// 5 functions, 0x384adc-0x3874e4
#include "game/update/moby444.h"
#include "game/camera.h"
#include "game/collproc.h"
#include "game/debug.h"
#include "game/hero.h"
#include "game/mobyfunc.h"
#include "game/mobyproc.h"
#include "game/mobyutil.h"
#include "game/sound.h"
#include "game/update/moby436.h"
#include "idol/fastfunc.h"

// 0x0384adc (0xb78 bytes)
void M444_00384adc(int param_1)

{
  f32 fVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  uint uVar5;
  uint uVar6;
  MobyInstance *pMVar7;
  MobyInstance *pMVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  float local_1e0;
  float local_1dc;
  float local_1d8;
  float local_1d0;
  float local_1cc;
  float local_1c8;
  f32 local_1c4;
  float local_1c0;
  float local_1bc;
  float local_1b8;
  float local_1b0;
  float local_1ac;
  float local_1a8;
  f32 local_1a4;
  float local_1a0;
  float local_19c;
  float local_198;
  float local_190;
  float local_18c;
  float local_188;
  f32 local_184;
  float local_180;
  float local_17c;
  float local_178;
  float local_170;
  float local_16c;
  float local_168;
  f32 local_164;
  float local_160;
  float local_15c;
  float local_158;
  float local_150;
  float local_14c;
  float local_148;
  f32 local_144;
  float local_140;
  float local_13c;
  float local_138;
  float local_130;
  float local_12c;
  float local_128;
  f32 local_124;
  float local_120;
  float local_11c;
  float local_118;
  float local_110;
  float local_10c;
  float local_108;
  f32 local_104;
  float local_100;
  float local_fc;
  float local_f8;
  float local_f0;
  float local_ec;
  float local_e8;
  f32 local_e4;
  float local_e0;
  float local_dc;
  float local_d8;
  float local_d0;
  float local_cc;
  float local_c8;
  f32 local_c4;
  float local_c0;
  float local_bc;
  float local_b8;
  float local_b0;
  float local_ac;
  float local_a8;
  f32 local_a4;
  float local_a0;
  float local_9c;
  float local_98;
  float local_90;
  float local_8c;
  float local_88;
  f32 local_84;
  float local_80;
  float local_7c;
  float local_78;
  float local_70;
  float local_6c;
  float local_68;
  f32 local_64;
  
  iVar2 = *(int *)(param_1 + 0x78);
  *(int *)(iVar2 + 0x60) = param_1;
  *(undefined4 *)(iVar2 + 100) = 0;
  *(undefined4 *)(iVar2 + 0x68) = 0;
  *(undefined4 *)(iVar2 + 0x6c) = 0;
  pMVar7 = CreateMoby(0x1c1);
  if (pMVar7 != (MobyInstance *)0x0) {
    pMVar7->updateDistance = -1;
    pMVar7->enabled = '\x01';
    pMVar7->drawDistance = 0xff;
    pMVar8 = g_heroMobyPtr;
    fVar1 = *(f32 *)(param_1 + 0x40);
    pMVar7->modeBits = pMVar7->modeBits | CAN_BE_DAMAGED;
    uVar5 = pMVar8->color;
    uVar6 = pMVar8->light;
    (pMVar7->rotation).x = fVar1;
    fVar1 = *(f32 *)(param_1 + 0x44);
    pMVar7->color = uVar5;
    pMVar7->light = uVar6;
    (pMVar7->rotation).y = fVar1;
    (pMVar7->rotation).z = *(f32 *)(param_1 + 0x48);
    (pMVar7->rotation).w = *(f32 *)(param_1 + 0x4c);
    GetBonePosition(pMVar7,0,&local_80);
    GetBonePosition(param_1,2,&local_70);
    (pMVar7->pos).x = local_70 - local_80;
    (pMVar7->pos).y = local_6c - local_7c;
    (pMVar7->pos).z = local_68 - local_78;
    (pMVar7->pos).w = local_64;
    UpdateMobyTransform(pMVar7);
  }
  *(MobyInstance **)(iVar2 + 0x90) = pMVar7;
  *(int *)(iVar2 + 0x94) = param_1;
  *(undefined4 *)(iVar2 + 0x98) = 0;
  *(undefined4 *)(iVar2 + 0x9c) = 2;
  pMVar7 = CreateMoby(WATER_RESERVOIR|FAN_0042);
  if (pMVar7 != (MobyInstance *)0x0) {
    pMVar7->updateDistance = -1;
    pMVar7->drawDistance = 0xff;
    pMVar7->enabled = '\x01';
    pMVar7->modeBits = pMVar7->modeBits | CAN_BE_DAMAGED;
    uVar5 = g_heroMobyPtr->light;
    pMVar7->color = g_heroMobyPtr->color;
    pMVar7->light = uVar5;
    (pMVar7->rotation).x = *(f32 *)(param_1 + 0x40);
    (pMVar7->rotation).y = *(f32 *)(param_1 + 0x44);
    (pMVar7->rotation).z = *(f32 *)(param_1 + 0x48);
    (pMVar7->rotation).w = *(f32 *)(param_1 + 0x4c);
    GetBonePosition(pMVar7,0,&local_a0);
    GetBonePosition(param_1,3,&local_90);
    (pMVar7->pos).x = local_90 - local_a0;
    (pMVar7->pos).y = local_8c - local_9c;
    (pMVar7->pos).z = local_88 - local_98;
    (pMVar7->pos).w = local_84;
    UpdateMobyTransform(pMVar7);
  }
  *(MobyInstance **)(iVar2 + 0x70) = pMVar7;
  *(int *)(iVar2 + 0x74) = param_1;
  *(undefined4 *)(iVar2 + 0x78) = 0;
  *(undefined4 *)(iVar2 + 0x7c) = 3;
  pMVar7 = CreateMoby(WATER_RESERVOIR|FAN_0042);
  if (pMVar7 != (MobyInstance *)0x0) {
    pMVar7->updateDistance = -1;
    pMVar7->drawDistance = 0xff;
    pMVar7->enabled = '\x01';
    pMVar7->modeBits = pMVar7->modeBits | CAN_BE_DAMAGED;
    uVar5 = g_heroMobyPtr->light;
    pMVar7->color = g_heroMobyPtr->color;
    pMVar7->light = uVar5;
    (pMVar7->rotation).x = *(f32 *)(param_1 + 0x40);
    (pMVar7->rotation).y = *(f32 *)(param_1 + 0x44);
    (pMVar7->rotation).z = *(f32 *)(param_1 + 0x48);
    (pMVar7->rotation).w = *(f32 *)(param_1 + 0x4c);
    GetBonePosition(pMVar7,0,&local_c0);
    GetBonePosition(param_1,4,&local_b0);
    (pMVar7->pos).x = local_b0 - local_c0;
    (pMVar7->pos).y = local_ac - local_bc;
    (pMVar7->pos).z = local_a8 - local_b8;
    (pMVar7->pos).w = local_a4;
    UpdateMobyTransform(pMVar7);
  }
  *(MobyInstance **)(iVar2 + 0x80) = pMVar7;
  pMVar7->modeBits = pMVar7->modeBits | MIRROR;
  *(int *)(iVar2 + 0x84) = param_1;
  *(undefined4 *)(iVar2 + 0x88) = 0;
  *(undefined4 *)(iVar2 + 0x8c) = 4;
  pMVar7 = CreateMoby(0x1c0);
  if (pMVar7 != (MobyInstance *)0x0) {
    pMVar7->updateDistance = -1;
    pMVar7->drawDistance = 0xff;
    pMVar7->enabled = '\x01';
    pMVar7->modeBits = pMVar7->modeBits | CAN_BE_DAMAGED;
    uVar5 = g_heroMobyPtr->light;
    pMVar7->color = g_heroMobyPtr->color;
    pMVar7->light = uVar5;
    (pMVar7->rotation).x = *(f32 *)(param_1 + 0x40);
    (pMVar7->rotation).y = *(f32 *)(param_1 + 0x44);
    (pMVar7->rotation).z = *(f32 *)(param_1 + 0x48);
    (pMVar7->rotation).w = *(f32 *)(param_1 + 0x4c);
    GetBonePosition(pMVar7,0,&local_e0);
    GetBonePosition(param_1,0,&local_d0);
    (pMVar7->pos).x = local_d0 - local_e0;
    (pMVar7->pos).y = local_cc - local_dc;
    (pMVar7->pos).z = local_c8 - local_d8;
    (pMVar7->pos).w = local_c4;
    UpdateMobyTransform(pMVar7);
  }
  *(MobyInstance **)(iVar2 + 0xd0) = pMVar7;
  *(int *)(iVar2 + 0xd4) = param_1;
  *(undefined4 *)(iVar2 + 0xd8) = 0;
  *(undefined4 *)(iVar2 + 0xdc) = 0;
  pMVar7 = CreateMoby(0x1c0);
  if (pMVar7 != (MobyInstance *)0x0) {
    pMVar7->updateDistance = -1;
    pMVar7->drawDistance = 0xff;
    pMVar7->enabled = '\x01';
    pMVar7->modeBits = pMVar7->modeBits | CAN_BE_DAMAGED;
    uVar5 = g_heroMobyPtr->light;
    pMVar7->color = g_heroMobyPtr->color;
    pMVar7->light = uVar5;
    (pMVar7->rotation).x = *(f32 *)(param_1 + 0x40);
    (pMVar7->rotation).y = *(f32 *)(param_1 + 0x44);
    (pMVar7->rotation).z = *(f32 *)(param_1 + 0x48);
    (pMVar7->rotation).w = *(f32 *)(param_1 + 0x4c);
    GetBonePosition(pMVar7,1,&local_100);
    GetBonePosition(param_1,1,&local_f0);
    (pMVar7->pos).x = local_f0 - local_100;
    (pMVar7->pos).y = local_ec - local_fc;
    (pMVar7->pos).z = local_e8 - local_f8;
    (pMVar7->pos).w = local_e4;
    UpdateMobyTransform(pMVar7);
  }
  *(MobyInstance **)(iVar2 + 0xe0) = pMVar7;
  *(int *)(iVar2 + 0xe4) = param_1;
  *(undefined4 *)(iVar2 + 0xe8) = 1;
  *(undefined4 *)(iVar2 + 0xec) = 1;
  pMVar8 = CreateMoby(0x1c0);
  if (pMVar8 != (MobyInstance *)0x0) {
    pMVar8->updateDistance = -1;
    pMVar8->drawDistance = 0xff;
    pMVar8->enabled = '\x01';
    pMVar8->modeBits = pMVar8->modeBits | CAN_BE_DAMAGED;
    uVar5 = g_heroMobyPtr->light;
    pMVar8->color = g_heroMobyPtr->color;
    pMVar8->light = uVar5;
    (pMVar8->rotation).x = (pMVar7->rotation).x;
    (pMVar8->rotation).y = (pMVar7->rotation).y;
    (pMVar8->rotation).z = (pMVar7->rotation).z;
    (pMVar8->rotation).w = (pMVar7->rotation).w;
    GetBonePosition(pMVar8,1,&local_120);
    GetBonePosition(pMVar7,0,&local_110);
    (pMVar8->pos).x = local_110 - local_120;
    (pMVar8->pos).y = local_10c - local_11c;
    (pMVar8->pos).z = local_108 - local_118;
    (pMVar8->pos).w = local_104;
    UpdateMobyTransform(pMVar8);
  }
  *(MobyInstance **)(iVar2 + 0xf0) = pMVar8;
  *(undefined4 *)(iVar2 + 0xf4) = *(undefined4 *)(iVar2 + 0xe0);
  *(undefined4 *)(iVar2 + 0xf8) = 1;
  *(undefined4 *)(iVar2 + 0xfc) = 0;
  pMVar7 = CreateMoby(EUDORA_BRIDGE|BOLT);
  if (pMVar7 != (MobyInstance *)0x0) {
    pMVar7->updateDistance = -1;
    pMVar7->drawDistance = 0xff;
    pMVar7->enabled = '\x01';
    pMVar7->modeBits = pMVar7->modeBits | CAN_BE_DAMAGED;
    uVar5 = g_heroMobyPtr->light;
    pMVar7->color = g_heroMobyPtr->color;
    pMVar7->light = uVar5;
    (pMVar7->rotation).x = (pMVar8->rotation).x;
    (pMVar7->rotation).y = (pMVar8->rotation).y;
    (pMVar7->rotation).z = (pMVar8->rotation).z;
    (pMVar7->rotation).w = (pMVar8->rotation).w;
    GetBonePosition(pMVar7,0,&local_140);
    GetBonePosition(pMVar8,0,&local_130);
    (pMVar7->pos).x = local_130 - local_140;
    (pMVar7->pos).y = local_12c - local_13c;
    (pMVar7->pos).z = local_128 - local_138;
    (pMVar7->pos).w = local_124;
    UpdateMobyTransform(pMVar7);
  }
  *(MobyInstance **)(iVar2 + 0xb0) = pMVar7;
  *(undefined4 *)(iVar2 + 0xb4) = *(undefined4 *)(iVar2 + 0xf0);
  *(undefined4 *)(iVar2 + 0xb8) = 0;
  *(undefined4 *)(iVar2 + 0xbc) = 0;
  iVar11 = *(int *)(iVar2 + 0xd0);
  pMVar7 = CreateMoby(EUDORA_BRIDGE|CLANK_000A);
  if (pMVar7 != (MobyInstance *)0x0) {
    pMVar7->updateDistance = -1;
    pMVar7->drawDistance = 0xff;
    pMVar7->enabled = '\x01';
    pMVar7->modeBits = pMVar7->modeBits | CAN_BE_DAMAGED;
    uVar5 = g_heroMobyPtr->light;
    pMVar7->color = g_heroMobyPtr->color;
    pMVar7->light = uVar5;
    (pMVar7->rotation).x = *(f32 *)(iVar11 + 0x40);
    (pMVar7->rotation).y = *(f32 *)(iVar11 + 0x44);
    (pMVar7->rotation).z = *(f32 *)(iVar11 + 0x48);
    (pMVar7->rotation).w = *(f32 *)(iVar11 + 0x4c);
    GetBonePosition(pMVar7,1,&local_160);
    GetBonePosition(iVar11,1,&local_150);
    (pMVar7->pos).x = local_150 - local_160;
    (pMVar7->pos).y = local_14c - local_15c;
    (pMVar7->pos).z = local_148 - local_158;
    (pMVar7->pos).w = local_144;
    UpdateMobyTransform(pMVar7);
  }
  *(MobyInstance **)(iVar2 + 0xc0) = pMVar7;
  *(undefined4 *)(iVar2 + 0xc4) = *(undefined4 *)(iVar2 + 0xd0);
  *(undefined4 *)(iVar2 + 200) = 1;
  *(undefined4 *)(iVar2 + 0xcc) = 1;
  pMVar7 = CreateMoby(0x1b9);
  if (pMVar7 != (MobyInstance *)0x0) {
    pMVar7->updateDistance = -1;
    pMVar7->drawDistance = 0xff;
    pMVar7->enabled = '\x01';
    pMVar7->modeBits = pMVar7->modeBits | CAN_BE_DAMAGED;
    uVar5 = g_heroMobyPtr->light;
    pMVar7->color = g_heroMobyPtr->color;
    pMVar7->light = uVar5;
    (pMVar7->rotation).x = *(f32 *)(param_1 + 0x40);
    (pMVar7->rotation).y = *(f32 *)(param_1 + 0x44);
    (pMVar7->rotation).z = *(f32 *)(param_1 + 0x48);
    (pMVar7->rotation).w = *(f32 *)(param_1 + 0x4c);
    GetBonePosition(pMVar7,0,&local_180);
    GetBonePosition(param_1,0,&local_170);
    (pMVar7->pos).x = local_170 - local_180;
    (pMVar7->pos).y = local_16c - local_17c;
    (pMVar7->pos).z = local_168 - local_178;
    (pMVar7->pos).w = local_164;
    UpdateMobyTransform(pMVar7);
  }
  *(MobyInstance **)(iVar2 + 0xa0) = pMVar7;
  iVar9 = 0;
  *(undefined4 *)(iVar2 + 0xa4) = *(undefined4 *)(iVar2 + 0xc0);
  *(undefined4 *)(iVar2 + 0xa8) = 0;
  *(undefined4 *)(iVar2 + 0xac) = 0;
  iVar11 = iVar2;
  do {
    iVar3 = *(int *)(iVar2 + 0xd0);
    iVar10 = iVar9 + 2;
    pMVar7 = CreateMoby(EUDORA_BRIDGE|VENDOR);
    if (pMVar7 != (MobyInstance *)0x0) {
      pMVar7->updateDistance = -1;
      pMVar7->drawDistance = 0xff;
      pMVar7->enabled = '\x01';
      pMVar7->modeBits = pMVar7->modeBits | CAN_BE_DAMAGED;
      uVar5 = g_heroMobyPtr->light;
      pMVar7->color = g_heroMobyPtr->color;
      pMVar7->light = uVar5;
      (pMVar7->rotation).x = *(f32 *)(iVar3 + 0x40);
      (pMVar7->rotation).y = *(f32 *)(iVar3 + 0x44);
      (pMVar7->rotation).z = *(f32 *)(iVar3 + 0x48);
      (pMVar7->rotation).w = *(f32 *)(iVar3 + 0x4c);
      GetBonePosition(pMVar7,0,&local_1a0);
      GetBonePosition(iVar3,iVar10,&local_190);
      (pMVar7->pos).x = local_190 - local_1a0;
      (pMVar7->pos).y = local_18c - local_19c;
      (pMVar7->pos).z = local_188 - local_198;
      (pMVar7->pos).w = local_184;
      UpdateMobyTransform(pMVar7);
    }
    *(MobyInstance **)(iVar11 + 0x100) = pMVar7;
    iVar9 = iVar9 + 1;
    uVar4 = *(undefined4 *)(iVar2 + 0xd0);
    *(undefined4 *)(iVar11 + 0x108) = 0;
    *(undefined4 *)(iVar11 + 0x104) = uVar4;
    *(int *)(iVar11 + 0x10c) = iVar10;
    iVar11 = iVar11 + 0x10;
  } while (iVar9 < 8);
  iVar9 = 0;
  iVar11 = iVar2;
  do {
    iVar10 = iVar9 + 2;
    iVar3 = *(int *)(iVar2 + 0xe0);
    pMVar7 = CreateMoby(EUDORA_BRIDGE|VENDOR);
    if (pMVar7 != (MobyInstance *)0x0) {
      pMVar7->updateDistance = -1;
      pMVar7->drawDistance = 0xff;
      pMVar7->enabled = '\x01';
      pMVar7->modeBits = pMVar7->modeBits | CAN_BE_DAMAGED;
      uVar5 = g_heroMobyPtr->light;
      pMVar7->color = g_heroMobyPtr->color;
      pMVar7->light = uVar5;
      (pMVar7->rotation).x = *(f32 *)(iVar3 + 0x40);
      (pMVar7->rotation).y = *(f32 *)(iVar3 + 0x44);
      (pMVar7->rotation).z = *(f32 *)(iVar3 + 0x48);
      (pMVar7->rotation).w = *(f32 *)(iVar3 + 0x4c);
      GetBonePosition(pMVar7,0,&local_1c0);
      GetBonePosition(iVar3,iVar10,&local_1b0);
      (pMVar7->pos).x = local_1b0 - local_1c0;
      (pMVar7->pos).y = local_1ac - local_1bc;
      (pMVar7->pos).z = local_1a8 - local_1b8;
      (pMVar7->pos).w = local_1a4;
      UpdateMobyTransform(pMVar7);
    }
    *(MobyInstance **)(iVar11 + 0x180) = pMVar7;
    uVar4 = *(undefined4 *)(iVar2 + 0xe0);
    iVar9 = iVar9 + 1;
    *(undefined4 *)(iVar11 + 0x188) = 0;
    *(undefined4 *)(iVar11 + 0x184) = uVar4;
    *(int *)(iVar11 + 0x18c) = iVar10;
    iVar11 = iVar11 + 0x10;
  } while (iVar9 < 8);
  iVar9 = 0;
  iVar11 = iVar2;
  do {
    iVar10 = iVar9 + 2;
    iVar3 = *(int *)(iVar2 + 0xf0);
    pMVar7 = CreateMoby(EUDORA_BRIDGE|VENDOR);
    if (pMVar7 != (MobyInstance *)0x0) {
      pMVar7->updateDistance = -1;
      pMVar7->drawDistance = 0xff;
      pMVar7->enabled = '\x01';
      pMVar7->modeBits = pMVar7->modeBits | CAN_BE_DAMAGED;
      uVar5 = g_heroMobyPtr->light;
      pMVar7->color = g_heroMobyPtr->color;
      pMVar7->light = uVar5;
      (pMVar7->rotation).x = *(f32 *)(iVar3 + 0x40);
      (pMVar7->rotation).y = *(f32 *)(iVar3 + 0x44);
      (pMVar7->rotation).z = *(f32 *)(iVar3 + 0x48);
      (pMVar7->rotation).w = *(f32 *)(iVar3 + 0x4c);
      GetBonePosition(pMVar7,0,&local_1e0);
      GetBonePosition(iVar3,iVar10,&local_1d0);
      (pMVar7->pos).x = local_1d0 - local_1e0;
      (pMVar7->pos).y = local_1cc - local_1dc;
      (pMVar7->pos).z = local_1c8 - local_1d8;
      (pMVar7->pos).w = local_1c4;
      UpdateMobyTransform(pMVar7);
    }
    *(MobyInstance **)(iVar11 + 0x200) = pMVar7;
    uVar4 = *(undefined4 *)(iVar2 + 0xf0);
    iVar9 = iVar9 + 1;
    *(undefined4 *)(iVar11 + 0x208) = 0;
    *(undefined4 *)(iVar11 + 0x204) = uVar4;
    *(int *)(iVar11 + 0x20c) = iVar10;
    iVar11 = iVar11 + 0x10;
  } while (iVar9 < 8);
  return;
}


// 0x0385660 (0x3d8 bytes)
// inlined: FastAtan2 @0x3858e0
void M444_00385660(int param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  int iVar6;
  int iVar7;
  ulonglong *puVar8;
  float fVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  longlong lVar12;
  longlong lVar13;
  longlong lVar14;
  float *pfVar15;
  longlong lVar16;
  ulonglong unaff_r25;
  int iVar17;
  ulonglong unaff_r26;
  ulonglong unaff_r27;
  int iVar18;
  ulonglong unaff_r28;
  int iVar19;
  int iVar20;
  ulonglong unaff_r29;
  ulonglong unaff_r30;
  ulonglong unaff_r31;
  ulonglong in_LR;
  longlong lVar21;
  double dVar22;
  
  uVar10 = ZEXT48(&stack0x00000000);
  lVar13 = uVar10 - 0x100;
  puVar8 = (ulonglong *)lVar13;
  *puVar8 = uVar10;
  puVar8[0x22] = in_LR;
  puVar8[0x1e] = unaff_r30;
  puVar8[0x1c] = unaff_r28;
  puVar8[0x19] = unaff_r25;
  iVar6 = *(int *)(param_1 + 0x78);
  iVar17 = 1;
  puVar8[0x1f] = unaff_r31;
  puVar8[0x1b] = unaff_r27;
  iVar19 = iVar6 + 0x10;
  puVar8[0x1d] = unaff_r29;
  puVar8[0x1a] = unaff_r26;
  iVar18 = 1;
  iVar20 = iVar19;
  do {
    iVar7 = *(int *)(iVar20 + 0x60);
    if (iVar7 != 0) {
      *(undefined4 *)(iVar7 + 0x48) = *(undefined4 *)(param_1 + 0x48);
      GetBonePosition(iVar7,*(undefined4 *)(iVar20 + 0x68),uVar10 - 0x90);
      GetBonePosition
                (*(undefined4 *)(iVar20 + 100),*(undefined4 *)(iVar20 + 0x6c),uVar10 - 0x80);
      fVar1 = *(float *)((int)puVar8 + 0x84);
      fVar2 = *(float *)((int)puVar8 + 0x74);
      fVar3 = *(float *)(puVar8 + 0x11);
      fVar4 = *(float *)(puVar8 + 0xf);
      *(float *)(iVar7 + 0x10) =
           *(float *)(iVar7 + 0x10) + (*(float *)(puVar8 + 0x10) - *(float *)(puVar8 + 0xe));
      *(float *)(iVar7 + 0x14) = *(float *)(iVar7 + 0x14) + (fVar1 - fVar2);
      *(float *)(iVar7 + 0x18) = *(float *)(iVar7 + 0x18) + (fVar3 - fVar4);
    }
    iVar17 = iVar17 + 1;
    iVar20 = iVar20 + 0x10;
  } while (iVar17 < 0x22);
  if (*(int *)(iVar6 + 0xd0) != 0) {
    dVar22 = (double)FastWrapRot
                               (*(float *)(*(int *)(iVar6 + 0xd0) + 0x40),
                                DAT_00841f50 * 0.017453292 * g_FrameTime);
    *(float *)(*(int *)(iVar6 + 0xd0) + 0x40) = (float)dVar22;
  }
  if (*(int *)(iVar6 + 0xe0) != 0) {
    dVar22 = (double)FastWrapRot
                               (*(float *)(*(int *)(iVar6 + 0xe0) + 0x40),
                                -(DAT_00841f50 * 0.017453292 * g_FrameTime));
    *(float *)(*(int *)(iVar6 + 0xe0) + 0x40) = (float)dVar22;
  }
  if (*(int *)(iVar6 + 0xf0) != 0) {
    dVar22 = (double)FastWrapRot
                               (*(float *)(*(int *)(iVar6 + 0xf0) + 0x40),
                                DAT_00841f50 * 0.017453292 * g_FrameTime);
    *(float *)(*(int *)(iVar6 + 0xf0) + 0x40) = (float)dVar22;
  }
  iVar6 = *(int *)(iVar6 + 0x90);
  if (iVar6 != 0) {
    fVar1 = g_heroPosition.x - *(float *)(iVar6 + 0x10);
    fVar2 = g_heroPosition.y - *(float *)(iVar6 + 0x14);
    fVar3 = ABS(fVar1);
    fVar4 = ABS(fVar2);
    *(float *)(puVar8 + 0x12) = fVar1;
    *(float *)((int)puVar8 + 0x94) = fVar2;
    *(float *)(puVar8 + 0x13) = fVar3 - fVar4;
    fVar1 = 0.0;
    uVar11 = (ulonglong)(*(uint *)(puVar8 + 0x12) >> 0x1c) & 8 |
             (ulonglong)(*(uint *)(puVar8 + 0x13) >> 0x1e) & 2 |
             (ulonglong)(*(uint *)((int)puVar8 + 0x94) >> 0x1d) & 4;
    fVar2 = ABS(*(float *)(puVar8 + 0x12));
    if (*(float *)(puVar8 + 0x13) - 0.0 < 0.0) {
      fVar2 = fVar4;
    }
    fVar5 = *(float *)(&g_atanQuadrantTable + (int)(uVar11 << 2));
    fVar4 = *(float *)(((uint)(uVar11 << 2) | 0x735900) + 4);
    fVar9 = ABS(*(float *)((int)puVar8 + 0x94));
    if (*(float *)(puVar8 + 0x13) - 0.0 < 0.0) {
      fVar9 = fVar3;
    }
    if (0.0 < fVar2) {
      lVar12 = uVar10 - 0xf0;
      lVar14 = uVar10 - 100;
      lVar16 = uVar10 - 0x54;
      lVar21 = 2;
      fVar2 = (fVar9 - fVar2) / (fVar9 + fVar2);
      fVar3 = fVar2 * fVar2;
      *(float *)(puVar8 + 0x15) = fVar2;
      *(float *)(puVar8 + 0x14) = fVar2;
      *(float *)((int)puVar8 + 0xa4) = fVar2;
      *(float *)((int)puVar8 + 0x9c) = fVar2;
      fVar2 = fVar3 * fVar3;
      *(float *)(puVar8 + 0x14) = *(float *)(puVar8 + 0x14) * fVar3;
      *(float *)((int)puVar8 + 0xa4) = *(float *)((int)puVar8 + 0xa4) * fVar2;
      *(float *)(puVar8 + 0x15) = *(float *)(puVar8 + 0x15) * fVar2 * fVar3;
      do {
        *(float *)((int)lVar12 + 0x9c) = *(float *)((int)lVar12 + 0x8c) * fVar2 * fVar2;
        iVar20 = (int)lVar14;
        lVar12 = lVar12 + 8;
        lVar14 = lVar14 + 8;
        *(float *)((int)lVar16 + 4) = *(float *)(iVar20 + 4) * fVar2 * fVar2;
        lVar16 = lVar16 + 8;
        lVar21 = lVar21 + -1;
      } while (lVar21 != 0);
      lVar16 = uVar10 - 100;
      pfVar15 = (float *)&DAT_007358e0;
      lVar21 = 4;
      lVar12 = lVar13;
      lVar14 = lVar16;
      do {
        fVar2 = *pfVar15;
        fVar3 = pfVar15[1];
        pfVar15 = pfVar15 + 2;
        *(float *)((int)lVar12 + 0x9c) = *(float *)((int)lVar12 + 0x9c) * fVar2;
        lVar12 = lVar12 + 8;
        *(float *)((int)lVar14 + 4) = *(float *)((int)lVar14 + 4) * fVar3;
        lVar14 = lVar14 + 8;
        lVar21 = lVar21 + -1;
      } while (lVar21 != 0);
      lVar12 = 2;
      do {
        iVar20 = (int)lVar13;
        iVar17 = (int)lVar16;
        lVar13 = lVar13 + 0x10;
        lVar16 = lVar16 + 0x10;
        fVar1 = fVar1 + *(float *)(iVar20 + 0x9c) + *(float *)(iVar17 + 4) + *(float *)(iVar17 + 8)
                + *(float *)(iVar17 + 0xc);
        lVar12 = lVar12 + -1;
      } while (lVar12 != 0);
      fVar1 = (fVar1 + 0.7853982) * fVar5 + fVar4;
    }
    *(float *)(iVar6 + 0x48) = fVar1;
  }
  do {
    if (*(MobyInstance **)(iVar19 + 0x60) != (MobyInstance *)0x0) {
      UpdateMobyTransform(*(MobyInstance **)(iVar19 + 0x60));
    }
    iVar18 = iVar18 + 1;
    iVar19 = iVar19 + 0x10;
  } while (iVar18 < 0x22);
  return;
}


// 0x0385a50 (0x3d4 bytes)
ulonglong M444_00385a50(MobyInstance *param_1)

{
  float fVar1;
  void *pvVar2;
  float *pfVar3;
  int iVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  int iVar12;
  int iVar14;
  ulonglong uVar13;
  short sVar16;
  int iVar15;
  void *pvVar17;
  longlong lVar18;
  longlong lVar19;
  longlong lVar20;
  int iVar21;
  double dVar22;
  double dVar23;
  double dVar24;
  double dVar25;
  double dVar26;
  
  lVar19 = 0;
  pvVar2 = param_1->pVar;
  iVar15 = -1;
  lVar20 = 0;
  lVar18 = 0;
  pvVar17 = pvVar2;
  do {
    if ((*(int *)((int)pvVar17 + 0x60) != 0) &&
       (iVar14 = MB_damage(*(int *)((int)pvVar17 + 0x60),0x10000,0), iVar14 != 0)) {
      iVar14 = (int)lVar18;
      if ((int)lVar20 < 7) {
        if (iVar14 < 1) {
          lVar18 = 1;
          iVar15 = 1;
        }
      }
      else if ((int)lVar20 < 10) {
        if (iVar14 < 2) {
          iVar15 = 1;
          lVar18 = 2;
        }
      }
      else if (iVar14 < 4) {
        lVar18 = lVar18 + 4;
        iVar15 = 2;
        lVar19 = lVar20;
      }
      *(undefined1 *)(*(int *)((int)pvVar17 + 0x60) + 0xa4) = 0xff;
    }
    lVar20 = lVar20 + 1;
    pvVar17 = (void *)((int)pvVar17 + 0x10);
  } while ((int)lVar20 < 0x22);
  uVar13 = (ulonglong)*(ushort *)((int)pvVar2 + 0x28c) + lVar18;
  sVar16 = (short)uVar13;
  *(short *)((int)pvVar2 + 0x28c) = sVar16;
  if (sVar16 < 8) {
    if (iVar15 < 0) {
      return uVar13;
    }
  }
  else {
    iVar15 = 0;
    *(ushort *)((int)pvVar2 + 0x28c) =
         sVar16 + ((sVar16 >> 3) + (ushort)(sVar16 < 0 && (uVar13 & 7) != 0)) * -8;
    if ((int)lVar19 != 0) {
      iVar21 = (int)(lVar19 << 4);
      iVar15 = *(int *)((int)pvVar2 + iVar21 + 0x60);
      pfVar3 = *(float **)(iVar15 + 0x78);
      MB_SpawnExplosionSparks
                (0x4000000000000000,0x402a000000000000,param_1,iVar15 + 0x10,iVar15,
                 0xffffffffffffffff);
      iVar15 = *(int *)((int)pvVar2 + iVar21 + 0x60);
      iVar14 = *(int *)((int)pvVar2 + iVar21 + 100);
      fVar5 = *(float *)(iVar15 + 0x10) - *(float *)(iVar14 + 0x10);
      *pfVar3 = fVar5;
      fVar6 = *(float *)(iVar15 + 0x14) - *(float *)(iVar14 + 0x14);
      pfVar3[1] = fVar6;
      fVar7 = *(float *)(iVar15 + 0x18) - *(float *)(iVar14 + 0x18);
      pfVar3[2] = fVar7;
      pfVar3[3] = *(float *)(iVar15 + 0x1c);
      fVar8 = SQRT(fVar7 * fVar7 + fVar5 * fVar5 + fVar6 * fVar6);
      fVar1 = 0.0;
      fVar9 = (g_FrameTime * 10.0) / fVar8;
      fVar11 = fVar1;
      if (0.0 - fVar8 < 0.0) {
        fVar11 = fVar5 * fVar9;
      }
      fVar10 = fVar1;
      if (0.0 - fVar8 < 0.0) {
        fVar10 = fVar6 * fVar9;
      }
      if (0.0 - fVar8 < 0.0) {
        fVar1 = fVar7 * fVar9;
      }
      if (fVar8 - 0.0 < 0.0) {
        fVar11 = fVar5 * fVar9;
      }
      if (fVar8 - 0.0 < 0.0) {
        fVar10 = fVar6 * fVar9;
      }
      if (fVar8 - 0.0 < 0.0) {
        fVar1 = fVar7 * fVar9;
      }
      *pfVar3 = fVar11;
      pfVar3[1] = fVar10;
      pfVar3[2] = fVar1;
      *(undefined1 *)(*(int *)((int)pvVar2 + iVar21 + 0x60) + 0x20) = 1;
      *(undefined4 *)((int)pvVar2 + iVar21 + 0x60) = 0;
      return 1;
    }
    dVar26 = 0.0;
    MB_randRangeFloat(0.0,23.0);
    iVar14 = FastDoubleToInt();
    iVar21 = 0;
    do {
      iVar12 = iVar14 % 0x18 + 10;
      iVar4 = *(int *)((int)pvVar2 + iVar12 * 0x10 + 0x60);
      if (iVar4 != 0) {
        pfVar3 = *(float **)(iVar4 + 0x78);
        MB_SpawnExplosionSparks
                  (0x4000000000000000,0x402a000000000000,param_1,iVar4 + 0x10,iVar4,
                   0xffffffffffffffff);
        iVar15 = *(int *)((int)pvVar2 + iVar12 * 0x10 + 0x60);
        iVar14 = *(int *)((int)pvVar2 + iVar12 * 0x10 + 100);
        fVar5 = *(float *)(iVar15 + 0x10) - *(float *)(iVar14 + 0x10);
        *pfVar3 = fVar5;
        fVar6 = *(float *)(iVar15 + 0x14) - *(float *)(iVar14 + 0x14);
        pfVar3[1] = fVar6;
        fVar7 = *(float *)(iVar15 + 0x18) - *(float *)(iVar14 + 0x18);
        pfVar3[2] = fVar7;
        pfVar3[3] = *(float *)(iVar15 + 0x1c);
        dVar24 = (double)SQRT(fVar7 * fVar7 + fVar5 * fVar5 + fVar6 * fVar6);
        fVar1 = (float)((double)(g_FrameTime * 10.0) / dVar24);
        dVar22 = dVar26;
        if (dVar26 - dVar24 < 0.0) {
          dVar22 = (double)(fVar5 * fVar1);
        }
        dVar23 = dVar26;
        if (dVar26 - dVar24 < 0.0) {
          dVar23 = (double)(fVar6 * fVar1);
        }
        dVar25 = dVar26;
        if (dVar26 - dVar24 < 0.0) {
          dVar25 = (double)(fVar7 * fVar1);
        }
        if (dVar24 - dVar26 < 0.0) {
          dVar22 = (double)(fVar5 * fVar1);
        }
        if (dVar24 - dVar26 < 0.0) {
          dVar23 = (double)(fVar6 * fVar1);
        }
        if (dVar24 - dVar26 < 0.0) {
          dVar25 = (double)(fVar7 * fVar1);
        }
        *pfVar3 = (float)dVar22;
        pfVar3[1] = (float)dVar23;
        pfVar3[2] = (float)dVar25;
        *(undefined1 *)(*(int *)((int)pvVar2 + iVar12 * 0x10 + 0x60) + 0x20) = 1;
        *(undefined4 *)((int)pvVar2 + iVar12 * 0x10 + 0x60) = 0;
        return 1;
      }
      iVar21 = iVar21 + 1;
      iVar14 = iVar14 + 1;
    } while (iVar21 < 0x18);
    param_1->state = 'c';
  }
  iVar15 = PlayMobySound(iVar15,0,param_1);
  return (longlong)iVar15;
}


// 0x0385e78 (0x1658 bytes)
// inlined: FastAtan2 @0x3860c8, FastAtan2 @0x3862f0, FastAtan2 @0x386634, FastAtan2 @0x3869c0, FastAtan2 @0x386b7c, FastAtan2 @0x386dd8, FastAtan2 @0x387238
/* Moby 444 */

void UpdateMoby_444(MobyInstance *moby)

{
  u8 uVar1;
  char cVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  undefined4 uVar8;
  float fVar9;
  MobyModeBit MVar10;
  int *piVar11;
  int *piVar12;
  ulonglong *puVar13;
  int iVar14;
  float fVar15;
  ulonglong uVar16;
  int iVar19;
  int iVar20;
  longlong lVar17;
  longlong lVar18;
  int iVar21;
  longlong lVar22;
  ulonglong uVar23;
  float *pfVar24;
  ulonglong uVar25;
  longlong lVar26;
  void *pvVar27;
  ulonglong unaff_r25;
  ulonglong unaff_r26;
  ulonglong unaff_r27;
  ulonglong unaff_r28;
  ulonglong unaff_r29;
  MobyInstance *pMVar28;
  int iVar29;
  ulonglong unaff_r30;
  ulonglong unaff_r31;
  ulonglong in_LR;
  longlong lVar30;
  longlong lVar31;
  double dVar32;
  double dVar33;
  double dVar34;
  undefined8 uVar35;
  undefined8 uVar36;
  double dVar37;
  double dVar38;
  double dVar39;
  double dVar40;
  ulonglong in_f25;
  ulonglong in_f26;
  ulonglong in_f27;
  ulonglong in_f28;
  double dVar41;
  ulonglong in_f29;
  double dVar42;
  double dVar43;
  ulonglong in_f30;
  double dVar44;
  ulonglong in_f31;
  double dVar45;
  
  lVar17 = (longlong)(int)moby;
  uVar16 = ZEXT48(&stack0x00000000);
  lVar18 = uVar16 - 0x260;
  puVar13 = (ulonglong *)lVar18;
  *puVar13 = uVar16;
  puVar13[0x4e] = in_LR;
  puVar13[0x45] = in_f25;
  puVar13[0x46] = in_f26;
  puVar13[0x47] = in_f27;
  puVar13[0x48] = in_f28;
  puVar13[0x49] = in_f29;
  puVar13[0x4a] = in_f30;
  puVar13[0x4b] = in_f31;
  puVar13[0x44] = unaff_r31;
  puVar13[0x43] = unaff_r30;
  iVar19 = DAT_010c51c8;
  piVar11 = (int *)moby->pVar;
  puVar13[0x42] = unaff_r29;
  puVar13[0x41] = unaff_r28;
  puVar13[0x40] = unaff_r27;
  puVar13[0x3f] = unaff_r26;
  puVar13[0x3e] = unaff_r25;
  if (iVar19 == 0) {
    iVar19 = IsMobyPlayingSound(moby,(int)*(short *)((int)piVar11 + 0x28e));
    if (iVar19 == 0) {
      iVar19 = PlayMobySound(3,4,moby);
      *(short *)((int)piVar11 + 0x28e) = (short)iVar19;
    }
    uVar1 = moby->state;
    if (uVar1 == 'c') {
      iVar19 = 1;
      uVar36 = 0x4008000000000000;
      uVar35 = 0x402a000000000000;
      dVar37 = 5.0;
      dVar32 = 0.0;
      do {
        iVar20 = piVar11[0x1c];
        if (iVar20 != 0) {
          pfVar24 = *(float **)(iVar20 + 0x78);
          MB_SpawnExplosionSparks(uVar36,uVar35,lVar17,iVar20 + 0x10);
          fVar4 = *(float *)(iVar20 + 0x10) - (moby->pos).x;
          *pfVar24 = fVar4;
          fVar5 = *(float *)(iVar20 + 0x14) - (moby->pos).y;
          pfVar24[1] = fVar5;
          fVar9 = *(float *)(iVar20 + 0x18) - (moby->pos).z;
          pfVar24[2] = fVar9;
          pfVar24[3] = *(float *)(iVar20 + 0x1c);
          dVar40 = (double)SQRT(fVar9 * fVar9 + fVar4 * fVar4 + fVar5 * fVar5);
          fVar3 = (float)((double)(float)((double)g_FrameTime * dVar37) / dVar40);
          dVar39 = dVar32;
          if (dVar32 - dVar40 < 0.0) {
            dVar39 = (double)(fVar4 * fVar3);
          }
          dVar45 = dVar32;
          if (dVar32 - dVar40 < 0.0) {
            dVar45 = (double)(fVar5 * fVar3);
          }
          dVar38 = dVar32;
          if (dVar32 - dVar40 < 0.0) {
            dVar38 = (double)(fVar9 * fVar3);
          }
          if (dVar40 - dVar32 < 0.0) {
            dVar39 = (double)(fVar4 * fVar3);
          }
          if (dVar40 - dVar32 < 0.0) {
            dVar45 = (double)(fVar5 * fVar3);
          }
          if (dVar40 - dVar32 < 0.0) {
            dVar38 = (double)(fVar9 * fVar3);
          }
          *pfVar24 = (float)dVar39;
          pfVar24[1] = (float)dVar45;
          pfVar24[2] = (float)dVar38;
          *(undefined1 *)(iVar20 + 0x20) = 1;
          piVar11[0x1c] = 0;
        }
        iVar19 = iVar19 + 1;
        piVar11 = piVar11 + 4;
      } while (iVar19 < 0x22);
      MB_SpawnExplosionSparks(dVar37,uVar35,lVar17,lVar17 + 0x10);
      DeleteMoby(moby);
    }
    else if (uVar1 == '\x03') {
      moby->state = '\x01';
      iVar19 = piVar11[4];
      fVar3 = *(float *)(iVar19 + 0x10);
      (moby->pos).x = fVar3;
      fVar4 = *(float *)(iVar19 + 0x14);
      (moby->pos).y = fVar4;
      (moby->pos).z = *(f32 *)(iVar19 + 0x18);
      (moby->pos).w = *(f32 *)(iVar19 + 0x1c);
      fVar3 = *(float *)(iVar19 + 0x20) - fVar3;
      fVar4 = *(float *)(iVar19 + 0x24) - fVar4;
      fVar5 = ABS(fVar3);
      fVar9 = ABS(fVar4);
      *(float *)(puVar13 + 0x16) = fVar3;
      *(float *)((int)puVar13 + 0xb4) = fVar4;
      *(float *)(puVar13 + 0x17) = fVar5 - fVar9;
      fVar4 = 0.0;
      uVar25 = (ulonglong)(*(uint *)(puVar13 + 0x16) >> 0x1c) & 8 |
               (ulonglong)(*(uint *)(puVar13 + 0x17) >> 0x1e) & 2 |
               (ulonglong)(*(uint *)((int)puVar13 + 0xb4) >> 0x1d) & 4;
      fVar3 = ABS(*(float *)(puVar13 + 0x16));
      if (*(float *)(puVar13 + 0x17) - 0.0 < 0.0) {
        fVar3 = fVar9;
      }
      fVar6 = *(float *)(&g_atanQuadrantTable + (int)(uVar25 << 2));
      fVar9 = *(float *)(((uint)(uVar25 << 2) | 0x735900) + 4);
      fVar7 = ABS(*(float *)((int)puVar13 + 0xb4));
      if (*(float *)(puVar13 + 0x17) - 0.0 < 0.0) {
        fVar7 = fVar5;
      }
      if (0.0 < fVar3) {
        lVar22 = uVar16 - 0x250;
        lVar30 = uVar16 - 0x14c;
        lVar26 = uVar16 - 0x15c;
        lVar31 = 2;
        fVar3 = (fVar7 - fVar3) / (fVar7 + fVar3);
        fVar5 = fVar3 * fVar3;
        *(float *)(puVar13 + 0x22) = fVar3;
        *(float *)(puVar13 + 0x21) = fVar3;
        *(float *)((int)puVar13 + 0x10c) = fVar3;
        *(float *)((int)puVar13 + 0x104) = fVar3;
        fVar3 = fVar5 * fVar5;
        *(float *)(puVar13 + 0x21) = *(float *)(puVar13 + 0x21) * fVar5;
        *(float *)((int)puVar13 + 0x10c) = *(float *)((int)puVar13 + 0x10c) * fVar3;
        *(float *)(puVar13 + 0x22) = *(float *)(puVar13 + 0x22) * fVar3 * fVar5;
        do {
          *(float *)((int)lVar22 + 0x104) = *(float *)((int)lVar22 + 0xf4) * fVar3 * fVar3;
          iVar19 = (int)lVar26;
          lVar26 = lVar26 + 8;
          lVar22 = lVar22 + 8;
          *(float *)((int)lVar30 + 4) = *(float *)(iVar19 + 4) * fVar3 * fVar3;
          lVar30 = lVar30 + 8;
          lVar31 = lVar31 + -1;
        } while (lVar31 != 0);
        lVar31 = 4;
        lVar30 = uVar16 - 0x15c;
        pfVar24 = (float *)&DAT_007358e0;
        lVar22 = lVar18;
        lVar26 = lVar30;
        do {
          fVar3 = *pfVar24;
          fVar5 = pfVar24[1];
          pfVar24 = pfVar24 + 2;
          *(float *)((int)lVar22 + 0x104) = *(float *)((int)lVar22 + 0x104) * fVar3;
          lVar22 = lVar22 + 8;
          *(float *)((int)lVar26 + 4) = *(float *)((int)lVar26 + 4) * fVar5;
          lVar26 = lVar26 + 8;
          lVar31 = lVar31 + -1;
        } while (lVar31 != 0);
        lVar22 = 2;
        do {
          iVar19 = (int)lVar18;
          lVar18 = lVar18 + 0x10;
          iVar20 = (int)lVar30;
          lVar30 = lVar30 + 0x10;
          fVar4 = fVar4 + *(float *)(iVar19 + 0x104) + *(float *)(iVar20 + 4) +
                  *(float *)(iVar20 + 8) + *(float *)(iVar20 + 0xc);
          lVar22 = lVar22 + -1;
        } while (lVar22 != 0);
        fVar4 = (fVar4 + 0.7853982) * fVar6 + fVar9;
      }
      (moby->rotation).z = fVar4;
      (moby->rotation).x = 0.0;
      M444_00385660(lVar17);
    }
    else if (uVar1 == '\x02') {
      piVar12 = (int *)piVar11[0x10];
      iVar19 = piVar11[0xc];
      iVar20 = *piVar12;
      iVar29 = (iVar19 + 1) - ((iVar19 + 1) / iVar20) * iVar20;
      iVar21 = iVar29 * 0x10;
      fVar3 = (float)piVar12[iVar29 * 4 + 4];
      fVar4 = (float)piVar12[iVar29 * 4 + 5];
      fVar5 = fVar3 - (float)piVar12[iVar19 * 4 + 4];
      fVar9 = fVar4 - (float)piVar12[iVar19 * 4 + 5];
      fVar7 = ABS(fVar5);
      fVar6 = ABS(fVar9);
      *(float *)((int)puVar13 + 0xd4) = fVar5;
      *(float *)(puVar13 + 0x1b) = fVar9;
      iVar19 = (iVar19 + 2) - ((iVar19 + 2) / iVar20) * iVar20;
      *(float *)((int)puVar13 + 0xdc) = fVar7 - fVar6;
      dVar32 = 0.0;
      uVar25 = (ulonglong)(*(uint *)((int)puVar13 + 0xd4) >> 0x1c) & 8 |
               (ulonglong)(*(uint *)((int)puVar13 + 0xdc) >> 0x1e) & 2 |
               (ulonglong)(*(uint *)(puVar13 + 0x1b) >> 0x1d) & 4;
      fVar5 = ABS(*(float *)((int)puVar13 + 0xd4));
      if (*(float *)((int)puVar13 + 0xdc) - 0.0 < 0.0) {
        fVar5 = fVar6;
      }
      fVar6 = *(float *)(&g_atanQuadrantTable + (int)(uVar25 << 2));
      fVar9 = *(float *)(((uint)(uVar25 << 2) | 0x735900) + 4);
      fVar15 = ABS(*(float *)(puVar13 + 0x1b));
      if (*(float *)((int)puVar13 + 0xdc) - 0.0 < 0.0) {
        fVar15 = fVar7;
      }
      dVar37 = dVar32;
      if (0.0 < fVar5) {
        lVar22 = uVar16 - 0x250;
        lVar26 = uVar16 - 0xfc;
        lVar30 = uVar16 - 0xec;
        lVar31 = 2;
        fVar5 = (fVar15 - fVar5) / (fVar15 + fVar5);
        fVar7 = fVar5 * fVar5;
        *(float *)(puVar13 + 0x2e) = fVar5;
        *(float *)(puVar13 + 0x2d) = fVar5;
        *(float *)((int)puVar13 + 0x16c) = fVar5;
        *(float *)((int)puVar13 + 0x164) = fVar5;
        fVar5 = fVar7 * fVar7;
        *(float *)(puVar13 + 0x2d) = *(float *)(puVar13 + 0x2d) * fVar7;
        *(float *)((int)puVar13 + 0x16c) = *(float *)((int)puVar13 + 0x16c) * fVar5;
        *(float *)(puVar13 + 0x2e) = *(float *)(puVar13 + 0x2e) * fVar5 * fVar7;
        do {
          *(float *)((int)lVar22 + 0x164) = *(float *)((int)lVar22 + 0x154) * fVar5 * fVar5;
          iVar20 = (int)lVar26;
          lVar22 = lVar22 + 8;
          lVar26 = lVar26 + 8;
          *(float *)((int)lVar30 + 4) = *(float *)(iVar20 + 4) * fVar5 * fVar5;
          lVar30 = lVar30 + 8;
          lVar31 = lVar31 + -1;
        } while (lVar31 != 0);
        lVar31 = 4;
        lVar30 = uVar16 - 0xfc;
        pfVar24 = (float *)&DAT_007358e0;
        lVar22 = lVar18;
        lVar26 = lVar30;
        do {
          fVar5 = *pfVar24;
          fVar7 = pfVar24[1];
          pfVar24 = pfVar24 + 2;
          *(float *)((int)lVar22 + 0x164) = *(float *)((int)lVar22 + 0x164) * fVar5;
          lVar22 = lVar22 + 8;
          *(float *)((int)lVar26 + 4) = *(float *)((int)lVar26 + 4) * fVar7;
          lVar26 = lVar26 + 8;
          lVar31 = lVar31 + -1;
        } while (lVar31 != 0);
        lVar26 = 2;
        lVar22 = lVar18;
        do {
          iVar20 = (int)lVar22;
          lVar22 = lVar22 + 0x10;
          iVar14 = (int)lVar30;
          lVar30 = lVar30 + 0x10;
          dVar37 = (double)((float)(dVar37 + (double)*(float *)(iVar20 + 0x164)) +
                            *(float *)(iVar14 + 4) + *(float *)(iVar14 + 8) +
                           *(float *)(iVar14 + 0xc));
          lVar26 = lVar26 + -1;
        } while (lVar26 != 0);
        dVar37 = (double)((float)(dVar37 + 0.7853981852531433) * fVar6 + fVar9);
      }
      fVar3 = (float)piVar12[iVar19 * 4 + 4] - fVar3;
      fVar4 = (float)piVar12[iVar19 * 4 + 5] - fVar4;
      fVar9 = ABS(fVar3);
      fVar5 = ABS(fVar4);
      *(float *)(puVar13 + 0x19) = fVar3;
      *(float *)((int)puVar13 + 0xcc) = fVar4;
      *(float *)(puVar13 + 0x1a) = fVar9 - fVar5;
      uVar25 = (ulonglong)(*(uint *)(puVar13 + 0x19) >> 0x1c) & 8 |
               (ulonglong)(*(uint *)(puVar13 + 0x1a) >> 0x1e) & 2 |
               (ulonglong)(*(uint *)((int)puVar13 + 0xcc) >> 0x1d) & 4;
      fVar3 = ABS(*(float *)(puVar13 + 0x19));
      if (*(float *)(puVar13 + 0x1a) - 0.0 < 0.0) {
        fVar3 = fVar5;
      }
      fVar4 = *(float *)(&g_atanQuadrantTable + (int)(uVar25 << 2));
      fVar5 = ABS(*(float *)((int)puVar13 + 0xcc));
      if (*(float *)(puVar13 + 0x1a) - 0.0 < 0.0) {
        fVar5 = fVar9;
      }
      fVar9 = *(float *)(((uint)(uVar25 << 2) | 0x735900) + 4);
      dVar39 = dVar32;
      if (0.0 < fVar3) {
        lVar22 = uVar16 - 0x250;
        lVar30 = uVar16 - 0x10c;
        lVar26 = uVar16 - 0x11c;
        lVar31 = 2;
        fVar3 = (fVar5 - fVar3) / (fVar5 + fVar3);
        fVar5 = fVar3 * fVar3;
        *(float *)(puVar13 + 0x2a) = fVar3;
        *(float *)(puVar13 + 0x29) = fVar3;
        *(float *)((int)puVar13 + 0x14c) = fVar3;
        *(float *)((int)puVar13 + 0x144) = fVar3;
        fVar3 = fVar5 * fVar5;
        *(float *)(puVar13 + 0x29) = *(float *)(puVar13 + 0x29) * fVar5;
        *(float *)((int)puVar13 + 0x14c) = *(float *)((int)puVar13 + 0x14c) * fVar3;
        *(float *)(puVar13 + 0x2a) = *(float *)(puVar13 + 0x2a) * fVar3 * fVar5;
        do {
          *(float *)((int)lVar22 + 0x144) = *(float *)((int)lVar22 + 0x134) * fVar3 * fVar3;
          iVar19 = (int)lVar26;
          lVar26 = lVar26 + 8;
          lVar22 = lVar22 + 8;
          *(float *)((int)lVar30 + 4) = *(float *)(iVar19 + 4) * fVar3 * fVar3;
          lVar30 = lVar30 + 8;
          lVar31 = lVar31 + -1;
        } while (lVar31 != 0);
        lVar31 = 4;
        lVar30 = uVar16 - 0x11c;
        pfVar24 = (float *)&DAT_007358e0;
        lVar22 = lVar18;
        lVar26 = lVar30;
        do {
          fVar3 = *pfVar24;
          fVar5 = pfVar24[1];
          pfVar24 = pfVar24 + 2;
          *(float *)((int)lVar22 + 0x144) = *(float *)((int)lVar22 + 0x144) * fVar3;
          lVar22 = lVar22 + 8;
          *(float *)((int)lVar26 + 4) = *(float *)((int)lVar26 + 4) * fVar5;
          lVar26 = lVar26 + 8;
          lVar31 = lVar31 + -1;
        } while (lVar31 != 0);
        lVar26 = 2;
        lVar22 = lVar18;
        do {
          iVar19 = (int)lVar22;
          iVar20 = (int)lVar30;
          lVar22 = lVar22 + 0x10;
          lVar30 = lVar30 + 0x10;
          dVar39 = (double)((float)(dVar39 + (double)*(float *)(iVar19 + 0x144)) +
                            *(float *)(iVar20 + 4) + *(float *)(iVar20 + 8) +
                           *(float *)(iVar20 + 0xc));
          lVar26 = lVar26 + -1;
        } while (lVar26 != 0);
        dVar39 = (double)((float)(dVar39 + 0.7853981852531433) * fVar4 + fVar9);
      }
      dVar37 = (double)FastDiffRots(dVar37,dVar39);
      iVar19 = piVar11[0x10] + iVar21;
      iVar20 = piVar11[0x10] + piVar11[0xc] * 0x10;
      fVar3 = (moby->pos).y - *(float *)(iVar19 + 0x14);
      fVar5 = (moby->pos).x - *(float *)(iVar19 + 0x10);
      fVar4 = *(float *)(iVar20 + 0x14) - *(float *)(iVar19 + 0x14);
      fVar9 = *(float *)(iVar20 + 0x10) - *(float *)(iVar19 + 0x10);
      fVar6 = (moby->pos).z - *(float *)(iVar19 + 0x18);
      fVar7 = *(float *)(iVar20 + 0x18) - *(float *)(iVar19 + 0x18);
      FastWrapRot
                ((float)(dVar37 * (double)(SQRT(fVar6 * fVar6 + fVar5 * fVar5 + fVar3 * fVar3) /
                                          SQRT(fVar7 * fVar7 + fVar9 * fVar9 + fVar4 * fVar4))),
                 (float)dVar39);
      fVar3 = *(float *)(piVar11[0x10] + iVar21 + 0x10) - (moby->pos).x;
      fVar4 = *(float *)(piVar11[0x10] + iVar21 + 0x14) - (moby->pos).y;
      dVar39 = ABS((double)fVar3);
      dVar40 = ABS((double)fVar4);
      *(float *)((int)puVar13 + 0xbc) = fVar3;
      *(float *)(puVar13 + 0x18) = fVar4;
      *(float *)((int)puVar13 + 0xc4) = (float)(dVar39 - dVar40);
      uVar25 = (ulonglong)(*(uint *)((int)puVar13 + 0xbc) >> 0x1c) & 8 |
               (ulonglong)(*(uint *)((int)puVar13 + 0xc4) >> 0x1e) & 2 |
               (ulonglong)(*(uint *)(puVar13 + 0x18) >> 0x1d) & 4;
      dVar37 = ABS((double)*(float *)((int)puVar13 + 0xbc));
      if ((double)*(float *)((int)puVar13 + 0xc4) - dVar32 < 0.0) {
        dVar37 = dVar40;
      }
      fVar4 = *(float *)(&g_atanQuadrantTable + (int)(uVar25 << 2));
      fVar3 = *(float *)(((uint)(uVar25 << 2) | 0x735900) + 4);
      dVar40 = ABS((double)*(float *)(puVar13 + 0x18));
      if ((double)*(float *)((int)puVar13 + 0xc4) - dVar32 < 0.0) {
        dVar40 = dVar39;
      }
      dVar39 = dVar32;
      if (dVar32 < dVar37) {
        lVar22 = uVar16 - 0x250;
        lVar26 = uVar16 - 0x13c;
        lVar30 = uVar16 - 300;
        lVar31 = 2;
        fVar5 = (float)(dVar40 - dVar37) / (float)(dVar40 + dVar37);
        fVar9 = fVar5 * fVar5;
        *(float *)(puVar13 + 0x26) = fVar5;
        *(float *)(puVar13 + 0x25) = fVar5;
        *(float *)((int)puVar13 + 300) = fVar5;
        *(float *)((int)puVar13 + 0x124) = fVar5;
        fVar5 = fVar9 * fVar9;
        *(float *)(puVar13 + 0x25) = *(float *)(puVar13 + 0x25) * fVar9;
        *(float *)((int)puVar13 + 300) = *(float *)((int)puVar13 + 300) * fVar5;
        *(float *)(puVar13 + 0x26) = *(float *)(puVar13 + 0x26) * fVar5 * fVar9;
        do {
          *(float *)((int)lVar22 + 0x124) = *(float *)((int)lVar22 + 0x114) * fVar5 * fVar5;
          iVar19 = (int)lVar26;
          lVar22 = lVar22 + 8;
          lVar26 = lVar26 + 8;
          *(float *)((int)lVar30 + 4) = *(float *)(iVar19 + 4) * fVar5 * fVar5;
          lVar30 = lVar30 + 8;
          lVar31 = lVar31 + -1;
        } while (lVar31 != 0);
        lVar31 = 4;
        lVar30 = uVar16 - 0x13c;
        pfVar24 = (float *)&DAT_007358e0;
        lVar22 = lVar18;
        lVar26 = lVar30;
        do {
          fVar5 = *pfVar24;
          fVar9 = pfVar24[1];
          pfVar24 = pfVar24 + 2;
          *(float *)((int)lVar22 + 0x124) = *(float *)((int)lVar22 + 0x124) * fVar5;
          lVar22 = lVar22 + 8;
          *(float *)((int)lVar26 + 4) = *(float *)((int)lVar26 + 4) * fVar9;
          lVar26 = lVar26 + 8;
          lVar31 = lVar31 + -1;
        } while (lVar31 != 0);
        lVar22 = 2;
        dVar37 = dVar32;
        do {
          iVar19 = (int)lVar18;
          iVar20 = (int)lVar30;
          lVar18 = lVar18 + 0x10;
          lVar30 = lVar30 + 0x10;
          dVar37 = (double)((float)(dVar37 + (double)*(float *)(iVar19 + 0x124)) +
                            *(float *)(iVar20 + 4) + *(float *)(iVar20 + 8) +
                           *(float *)(iVar20 + 0xc));
          lVar22 = lVar22 + -1;
        } while (lVar22 != 0);
        dVar39 = (double)((float)(dVar37 + 0.7853981852531433) * fVar4 + fVar3);
      }
      fVar3 = DAT_00841f58 * 0.017453292 * DAT_0071f418;
      OrganicDeltAng
                ((float)dVar39,fVar3,fVar3,DAT_00841f5c * 0.017453292 * g_FrameTime,
                 &(moby->rotation).z,0x840000,(float *)(piVar11 + 0xa1));
      fVar15 = g_FrameTime;
      dVar39 = (double)(moby->pos).y;
      iVar21 = piVar11[0x10] + iVar21;
      dVar37 = (double)(moby->pos).x;
      fVar9 = *(float *)(iVar21 + 0x14);
      fVar6 = *(float *)(iVar21 + 0x10);
      fVar3 = (float)(dVar39 - (double)fVar9);
      fVar4 = (float)(dVar37 - (double)fVar6);
      dVar40 = (double)(moby->pos).z;
      fVar7 = *(float *)(iVar21 + 0x18);
      fVar5 = (float)(dVar40 - (double)fVar7);
      dVar45 = (double)*(float *)(iVar21 + 0x1c);
      if (SQRT(fVar5 * fVar5 + fVar4 * fVar4 + fVar3 * fVar3) < 0.5) {
        piVar11[0xc] = iVar29;
        dVar37 = (double)(moby->pos).x;
        dVar39 = (double)(moby->pos).y;
        dVar40 = (double)(moby->pos).z;
      }
      dVar42 = (double)(float)((double)fVar9 - dVar39);
      dVar44 = (double)(float)((double)fVar6 - dVar37);
      dVar41 = (double)(float)((double)fVar7 - dVar40);
      dVar33 = (double)SQRT((float)(dVar41 * dVar41 +
                                   (double)(float)(dVar44 * dVar44 +
                                                  (double)(float)(dVar42 * dVar42))));
      dVar38 = dVar41;
      dVar43 = dVar42;
      dVar34 = dVar44;
      if (((double)(DAT_00841f4c * fVar15) < dVar33) &&
         (dVar38 = dVar32, dVar43 = dVar32, dVar34 = dVar32, dVar33 != dVar32)) {
        dVar34 = (double)(float)((double)(DAT_00841f4c * fVar15) / dVar33);
        dVar38 = (double)(float)(dVar41 * dVar34);
        dVar43 = (double)(float)(dVar42 * dVar34);
        dVar34 = (double)(float)(dVar44 * dVar34);
      }
      (moby->pos).x = (float)(dVar37 + dVar34);
      (moby->pos).y = (float)(dVar39 + dVar43);
      (moby->pos).z = (float)(dVar40 + dVar38);
      M444_00385660(lVar17);
      iVar19 = FastDecTimerS32(piVar11 + 0xa2);
      if (iVar19 != 0) {
        dVar37 = (double)MB_randRangeFloat(300.0,600.0);
        iVar19 = FastDoubleToInt((double)(float)(dVar37 * (double)animationSpeed));
        piVar11[0xa2] = iVar19;
        GetBonePosition(piVar11[0x28],1,uVar16 - 0x1d0);
        uVar35 = MB_randRangeFloat(-0.5235988,-0.2617994);
        uVar36 = MB_randRot();
        fVar4 = g_FrameTime;
        fVar3 = DAT_00841f4c * 2.0;
        dVar40 = (double)SQRT((float)(dVar38 * dVar38 +
                                     (double)(float)(dVar34 * dVar34 +
                                                    (double)(float)(dVar43 * dVar43))));
        *(float *)((int)puVar13 + 0xac) = (float)dVar45;
        dVar39 = (double)(float)((double)(fVar3 * fVar4) / dVar40);
        dVar37 = dVar32;
        if (dVar32 - dVar40 < 0.0) {
          dVar37 = (double)(float)(dVar34 * dVar39);
        }
        dVar45 = dVar32;
        if (dVar32 - dVar40 < 0.0) {
          dVar45 = (double)(float)(dVar43 * dVar39);
        }
        dVar33 = dVar32;
        if (dVar32 - dVar40 < 0.0) {
          dVar33 = (double)(float)(dVar38 * dVar39);
        }
        if (dVar40 - dVar32 < 0.0) {
          dVar37 = (double)(float)(dVar34 * dVar39);
        }
        if (dVar40 - dVar32 < 0.0) {
          dVar45 = (double)(float)(dVar43 * dVar39);
        }
        if (dVar40 - dVar32 < 0.0) {
          dVar33 = (double)(float)(dVar38 * dVar39);
        }
        *(float *)(puVar13 + 0x14) = (float)dVar37;
        *(float *)((int)puVar13 + 0xa4) = (float)dVar45;
        *(float *)(puVar13 + 0x15) = (float)dVar33;
        iVar19 = FUN_00375430(uVar35,uVar36,uVar16 - 0x1d0,0);
        if (iVar19 != 0) {
          uVar8 = *(undefined4 *)(piVar11[0x28] + 0x48);
          *(undefined4 *)(iVar19 + 0x44) = 0;
          *(undefined4 *)(iVar19 + 0x48) = uVar8;
          *(undefined1 *)(iVar19 + 0x20) = 5;
        }
      }
    }
    else if (uVar1 == '\x01') {
      piVar12 = (int *)piVar11[4];
      iVar19 = *piVar12;
      iVar20 = *piVar11 + iVar19 + (int)*(char *)(piVar11 + 1);
      iVar20 = iVar20 - (iVar20 / iVar19) * iVar19;
      iVar19 = piVar11[0xa0];
      fVar3 = (float)piVar12[iVar20 * 4 + 4] - (moby->pos).x;
      fVar4 = (float)piVar12[iVar20 * 4 + 5] - (moby->pos).y;
      fVar9 = ABS(fVar3);
      fVar5 = ABS(fVar4);
      *(float *)((int)puVar13 + 0xec) = fVar3;
      *(float *)(puVar13 + 0x1e) = fVar4;
      pMVar28 = g_MobyInstance + iVar19;
      *(float *)((int)puVar13 + 0xf4) = fVar9 - fVar5;
      dVar32 = 0.0;
      uVar25 = (ulonglong)(*(uint *)((int)puVar13 + 0xec) >> 0x1c) & 8 |
               (ulonglong)(*(uint *)((int)puVar13 + 0xf4) >> 0x1e) & 2 |
               (ulonglong)(*(uint *)(puVar13 + 0x1e) >> 0x1d) & 4;
      uVar23 = uVar25 << 2 | 0x735900;
      fVar3 = ABS(*(float *)((int)puVar13 + 0xec));
      if (*(float *)((int)puVar13 + 0xf4) - 0.0 < 0.0) {
        fVar3 = fVar5;
      }
      fVar5 = *(float *)(&g_atanQuadrantTable + (int)(uVar25 << 2));
      fVar4 = *(float *)((int)uVar23 + 4);
      fVar6 = ABS(*(float *)(puVar13 + 0x1e));
      if (*(float *)((int)puVar13 + 0xf4) - 0.0 < 0.0) {
        fVar6 = fVar9;
      }
      dVar37 = dVar32;
      if (0.0 < fVar3) {
        lVar22 = uVar16 - 0x250;
        lVar26 = uVar16 - 0xbc;
        lVar30 = uVar16 - 0xac;
        lVar31 = 2;
        fVar3 = (fVar6 - fVar3) / (fVar6 + fVar3);
        fVar9 = fVar3 * fVar3;
        *(float *)(puVar13 + 0x36) = fVar3;
        *(float *)(puVar13 + 0x35) = fVar3;
        *(float *)((int)puVar13 + 0x1ac) = fVar3;
        *(float *)((int)puVar13 + 0x1a4) = fVar3;
        fVar3 = fVar9 * fVar9;
        *(float *)(puVar13 + 0x35) = *(float *)(puVar13 + 0x35) * fVar9;
        *(float *)((int)puVar13 + 0x1ac) = *(float *)((int)puVar13 + 0x1ac) * fVar3;
        *(float *)(puVar13 + 0x36) = *(float *)(puVar13 + 0x36) * fVar3 * fVar9;
        do {
          *(float *)((int)lVar22 + 0x1a4) = *(float *)((int)lVar22 + 0x194) * fVar3 * fVar3;
          iVar19 = (int)lVar26;
          lVar22 = lVar22 + 8;
          lVar26 = lVar26 + 8;
          *(float *)((int)lVar30 + 4) = *(float *)(iVar19 + 4) * fVar3 * fVar3;
          lVar30 = lVar30 + 8;
          lVar31 = lVar31 + -1;
        } while (lVar31 != 0);
        lVar31 = 4;
        lVar30 = uVar16 - 0xbc;
        uVar23 = ZEXT48(&DAT_007358e0);
        lVar22 = lVar18;
        lVar26 = lVar30;
        do {
          pfVar24 = (float *)uVar23;
          fVar3 = pfVar24[1];
          uVar23 = uVar23 + 8;
          *(float *)((int)lVar22 + 0x1a4) = *(float *)((int)lVar22 + 0x1a4) * *pfVar24;
          lVar22 = lVar22 + 8;
          *(float *)((int)lVar26 + 4) = *(float *)((int)lVar26 + 4) * fVar3;
          lVar26 = lVar26 + 8;
          lVar31 = lVar31 + -1;
        } while (lVar31 != 0);
        lVar26 = 2;
        lVar22 = lVar18;
        do {
          iVar19 = (int)lVar22;
          lVar22 = lVar22 + 0x10;
          iVar21 = (int)lVar30;
          lVar30 = lVar30 + 0x10;
          dVar37 = (double)((float)(dVar37 + (double)*(float *)(iVar19 + 0x1a4)) +
                            *(float *)(iVar21 + 4) + *(float *)(iVar21 + 8) +
                           *(float *)(iVar21 + 0xc));
          lVar26 = lVar26 + -1;
        } while (lVar26 != 0);
        dVar37 = (double)((float)(dVar37 + 0.7853981852531433) * fVar5 + fVar4);
      }
      OrganicDeltAngSpeed
                (dVar37,0x3f70624de0000000,0x3fd3333340000000,0x3f947ae140000000,lVar17,uVar23,
                 piVar11 + 0xa1);
      M444_00385a50(lVar17);
      M444_00385660(lVar17);
      dVar39 = (double)(moby->pos).y;
      iVar19 = piVar11[4] + iVar20 * 0x10;
      dVar37 = (double)(moby->pos).x;
      dVar40 = (double)(moby->pos).z;
      fVar9 = *(float *)(iVar19 + 0x14);
      fVar6 = *(float *)(iVar19 + 0x10);
      fVar3 = (float)(dVar39 - (double)fVar9);
      fVar4 = (float)(dVar37 - (double)fVar6);
      fVar7 = *(float *)(iVar19 + 0x18);
      fVar5 = (float)(dVar40 - (double)fVar7);
      dVar45 = (double)*(float *)(iVar19 + 0x1c);
      if (SQRT(fVar5 * fVar5 + fVar4 * fVar4 + fVar3 * fVar3) < 0.5) {
        *piVar11 = iVar20;
        dVar37 = (double)(moby->pos).x;
        dVar39 = (double)(moby->pos).y;
        dVar40 = (double)(moby->pos).z;
      }
      dVar42 = (double)(float)((double)fVar9 - dVar39);
      dVar44 = (double)(float)((double)fVar6 - dVar37);
      dVar41 = (double)(float)((double)fVar7 - dVar40);
      dVar33 = (double)SQRT((float)(dVar41 * dVar41 +
                                   (double)(float)(dVar44 * dVar44 +
                                                  (double)(float)(dVar42 * dVar42))));
      dVar38 = dVar41;
      dVar43 = dVar42;
      dVar34 = dVar44;
      if (((double)(DAT_00841f4c * g_FrameTime) < dVar33) &&
         (dVar38 = dVar32, dVar43 = dVar32, dVar34 = dVar32, dVar33 != dVar32)) {
        dVar34 = (double)(float)((double)(DAT_00841f4c * g_FrameTime) / dVar33);
        dVar38 = (double)(float)(dVar41 * dVar34);
        dVar43 = (double)(float)(dVar42 * dVar34);
        dVar34 = (double)(float)(dVar44 * dVar34);
      }
      cVar2 = moby->setByGroup;
      (moby->pos).x = (float)(dVar37 + dVar34);
      (moby->pos).y = (float)(dVar39 + dVar43);
      (moby->pos).z = (float)(dVar40 + dVar38);
      if (cVar2 != '\0') {
        moby->setByGroup = '\0';
        uVar25 = MB_randInt(0xff);
        if ((uVar25 & 1) == 0) {
          GetBonePosition(piVar11[0x28],1,uVar16 - 0x1f0);
        }
        else {
          GetBonePosition(piVar11[0x24],1,uVar16 - 0x1f0);
        }
        uVar35 = MB_randRangeFloat(0.17453292,0.5235988);
        fVar3 = (pMVar28->pos).x - (moby->pos).x;
        fVar4 = (pMVar28->pos).y - (moby->pos).y;
        dVar40 = ABS((double)fVar3);
        dVar39 = ABS((double)fVar4);
        *(float *)(puVar13 + 0x1c) = fVar3;
        *(float *)((int)puVar13 + 0xe4) = fVar4;
        *(float *)(puVar13 + 0x1d) = (float)(dVar40 - dVar39);
        uVar25 = (ulonglong)(*(uint *)(puVar13 + 0x1c) >> 0x1c) & 8 |
                 (ulonglong)(*(uint *)(puVar13 + 0x1d) >> 0x1e) & 2 |
                 (ulonglong)(*(uint *)((int)puVar13 + 0xe4) >> 0x1d) & 4;
        dVar37 = ABS((double)*(float *)(puVar13 + 0x1c));
        if ((double)*(float *)(puVar13 + 0x1d) - dVar32 < 0.0) {
          dVar37 = dVar39;
        }
        fVar3 = *(float *)(&g_atanQuadrantTable + (int)(uVar25 << 2));
        dVar39 = ABS((double)*(float *)((int)puVar13 + 0xe4));
        if ((double)*(float *)(puVar13 + 0x1d) - dVar32 < 0.0) {
          dVar39 = dVar40;
        }
        fVar4 = *(float *)(((uint)(uVar25 << 2) | 0x735900) + 4);
        dVar40 = dVar32;
        if (dVar32 < dVar37) {
          lVar17 = uVar16 - 0x250;
          lVar26 = uVar16 - 0xcc;
          lVar22 = uVar16 - 0xdc;
          lVar30 = 2;
          fVar5 = (float)(dVar39 - dVar37) / (float)(dVar39 + dVar37);
          fVar9 = fVar5 * fVar5;
          *(float *)(puVar13 + 0x32) = fVar5;
          *(float *)(puVar13 + 0x31) = fVar5;
          *(float *)((int)puVar13 + 0x18c) = fVar5;
          *(float *)((int)puVar13 + 0x184) = fVar5;
          fVar5 = fVar9 * fVar9;
          *(float *)(puVar13 + 0x31) = *(float *)(puVar13 + 0x31) * fVar9;
          *(float *)((int)puVar13 + 0x18c) = *(float *)((int)puVar13 + 0x18c) * fVar5;
          *(float *)(puVar13 + 0x32) = *(float *)(puVar13 + 0x32) * fVar5 * fVar9;
          do {
            *(float *)((int)lVar17 + 0x184) = *(float *)((int)lVar17 + 0x174) * fVar5 * fVar5;
            iVar19 = (int)lVar22;
            lVar22 = lVar22 + 8;
            lVar17 = lVar17 + 8;
            *(float *)((int)lVar26 + 4) = *(float *)(iVar19 + 4) * fVar5 * fVar5;
            lVar26 = lVar26 + 8;
            lVar30 = lVar30 + -1;
          } while (lVar30 != 0);
          lVar30 = 4;
          lVar26 = uVar16 - 0xdc;
          pfVar24 = (float *)&DAT_007358e0;
          lVar17 = lVar18;
          lVar22 = lVar26;
          do {
            fVar5 = *pfVar24;
            fVar9 = pfVar24[1];
            pfVar24 = pfVar24 + 2;
            *(float *)((int)lVar17 + 0x184) = *(float *)((int)lVar17 + 0x184) * fVar5;
            lVar17 = lVar17 + 8;
            *(float *)((int)lVar22 + 4) = *(float *)((int)lVar22 + 4) * fVar9;
            lVar22 = lVar22 + 8;
            lVar30 = lVar30 + -1;
          } while (lVar30 != 0);
          lVar17 = 2;
          dVar37 = dVar32;
          do {
            iVar19 = (int)lVar18;
            iVar20 = (int)lVar26;
            lVar18 = lVar18 + 0x10;
            lVar26 = lVar26 + 0x10;
            dVar37 = (double)((float)(dVar37 + (double)*(float *)(iVar19 + 0x184)) +
                              *(float *)(iVar20 + 4) + *(float *)(iVar20 + 8) +
                             *(float *)(iVar20 + 0xc));
            lVar17 = lVar17 + -1;
          } while (lVar17 != 0);
          dVar40 = (double)((float)(dVar37 + 0.7853981852531433) * fVar3 + fVar4);
        }
        dVar37 = (double)FastWrapRot((float)dVar40,3.1415927);
        dVar39 = (double)MB_randRangeFloat(-0.2617994,0.7853982);
        dVar37 = (double)FastWrapRot((float)dVar37,(float)dVar39);
        fVar3 = g_FrameTime;
        if ((((dVar37 <= dVar32) || (dVar39 = 0.3400000035762787, 0.3400000035762787 <= dVar37)) &&
            (dVar39 = dVar37, dVar37 <= dVar32)) && (-0.3400000035762787 < dVar37)) {
          dVar39 = -0.3400000035762787;
        }
        fVar4 = DAT_00841f4c * 2.0;
        dVar33 = (double)SQRT((float)(dVar38 * dVar38 +
                                     (double)(float)(dVar34 * dVar34 +
                                                    (double)(float)(dVar43 * dVar43))));
        *(float *)((int)puVar13 + 0x8c) = (float)dVar45;
        dVar40 = (double)(float)((double)(fVar4 * fVar3) / dVar33);
        dVar37 = dVar32;
        if (dVar32 - dVar33 < 0.0) {
          dVar37 = (double)(float)(dVar34 * dVar40);
        }
        dVar45 = dVar32;
        if (dVar32 - dVar33 < 0.0) {
          dVar45 = (double)(float)(dVar43 * dVar40);
        }
        dVar41 = dVar32;
        if (dVar32 - dVar33 < 0.0) {
          dVar41 = (double)(float)(dVar38 * dVar40);
        }
        if (dVar33 - dVar32 < 0.0) {
          dVar37 = (double)(float)(dVar34 * dVar40);
        }
        if (dVar33 - dVar32 < 0.0) {
          dVar45 = (double)(float)(dVar43 * dVar40);
        }
        if (dVar33 - dVar32 < 0.0) {
          dVar41 = (double)(float)(dVar38 * dVar40);
        }
        *(float *)(puVar13 + 0x10) = (float)dVar37;
        *(float *)((int)puVar13 + 0x84) = (float)dVar45;
        *(float *)(puVar13 + 0x11) = (float)dVar41;
        iVar19 = FUN_00375430(uVar35,dVar39,uVar16 - 0x1f0,pMVar28);
        iVar20 = 0;
        *(float *)(iVar19 + 0x2c) = *(float *)(*(int *)(iVar19 + 0x24) + 0x24) * 0.2;
        pvVar27 = pMVar28->pVar;
        do {
          if (*(int *)((int)pvVar27 + 0x60) == 0) {
            *(int *)((int)pMVar28->pVar + iVar20 * 4 + 0x60) = iVar19;
            return;
          }
          iVar20 = iVar20 + 1;
          pvVar27 = (void *)((int)pvVar27 + 4);
        } while (iVar20 < 8);
      }
    }
    else if (uVar1 == '\0') {
      if (g_LevelFlags[Level][(byte)moby->levelFlagIdx] == -1) {
        DeleteMoby(moby);
      }
      else {
        piVar11[4] = (int)Splines[piVar11[5]];
        piVar11[0x10] = (int)Splines[piVar11[0x11]];
        dVar32 = (double)MB_randRangeFloat(300.0,600.0);
        iVar20 = FastDoubleToInt((double)(float)(dVar32 * (double)animationSpeed));
        iVar19 = piVar11[0x10];
        piVar11[0xa2] = iVar20;
        (moby->pos).x = *(f32 *)(iVar19 + 0x10);
        (moby->pos).y = *(f32 *)(iVar19 + 0x14);
        (moby->pos).z = *(f32 *)(iVar19 + 0x18);
        (moby->pos).w = *(f32 *)(iVar19 + 0x1c);
        M444_00384adc(lVar17);
        fVar3 = (moby->pos).x;
        fVar4 = (moby->pos).y;
        moby->state = '\x02';
        fVar3 = *(float *)(piVar11[0x10] + 0x20) - fVar3;
        fVar4 = *(float *)(piVar11[0x10] + 0x24) - fVar4;
        fVar5 = ABS(fVar3);
        fVar9 = ABS(fVar4);
        *(float *)(puVar13 + 0x1f) = fVar3;
        *(float *)((int)puVar13 + 0xfc) = fVar4;
        *(float *)(puVar13 + 0x20) = fVar5 - fVar9;
        fVar3 = 0.0;
        MVar10 = moby->modeBits;
        uVar25 = (ulonglong)(*(uint *)(puVar13 + 0x1f) >> 0x1c) & 8 |
                 (ulonglong)(*(uint *)(puVar13 + 0x20) >> 0x1e) & 2 |
                 (ulonglong)(*(uint *)((int)puVar13 + 0xfc) >> 0x1d) & 4;
        fVar4 = ABS(*(float *)(puVar13 + 0x1f));
        if (*(float *)(puVar13 + 0x20) - 0.0 < 0.0) {
          fVar4 = fVar9;
        }
        fVar9 = *(float *)(&g_atanQuadrantTable + (int)(uVar25 << 2));
        fVar6 = ABS(*(float *)((int)puVar13 + 0xfc));
        if (*(float *)(puVar13 + 0x20) - 0.0 < 0.0) {
          fVar6 = fVar5;
        }
        fVar5 = *(float *)(((uint)(uVar25 << 2) | 0x735900) + 4);
        if (0.0 < fVar4) {
          lVar17 = uVar16 - 0x250;
          lVar22 = uVar16 - 0x9c;
          lVar26 = uVar16 - 0x8c;
          lVar30 = 2;
          fVar4 = (fVar6 - fVar4) / (fVar6 + fVar4);
          fVar6 = fVar4 * fVar4;
          *(float *)(puVar13 + 0x3a) = fVar4;
          *(float *)(puVar13 + 0x39) = fVar4;
          *(float *)((int)puVar13 + 0x1cc) = fVar4;
          *(float *)((int)puVar13 + 0x1c4) = fVar4;
          fVar4 = fVar6 * fVar6;
          *(float *)(puVar13 + 0x39) = *(float *)(puVar13 + 0x39) * fVar6;
          *(float *)((int)puVar13 + 0x1cc) = *(float *)((int)puVar13 + 0x1cc) * fVar4;
          *(float *)(puVar13 + 0x3a) = *(float *)(puVar13 + 0x3a) * fVar4 * fVar6;
          do {
            *(float *)((int)lVar17 + 0x1c4) = *(float *)((int)lVar17 + 0x1b4) * fVar4 * fVar4;
            iVar19 = (int)lVar22;
            lVar17 = lVar17 + 8;
            lVar22 = lVar22 + 8;
            *(float *)((int)lVar26 + 4) = *(float *)(iVar19 + 4) * fVar4 * fVar4;
            lVar26 = lVar26 + 8;
            lVar30 = lVar30 + -1;
          } while (lVar30 != 0);
          lVar30 = 4;
          lVar26 = uVar16 - 0x9c;
          pfVar24 = (float *)&DAT_007358e0;
          lVar17 = lVar18;
          lVar22 = lVar26;
          do {
            fVar4 = *pfVar24;
            fVar6 = pfVar24[1];
            pfVar24 = pfVar24 + 2;
            *(float *)((int)lVar17 + 0x1c4) = *(float *)((int)lVar17 + 0x1c4) * fVar4;
            lVar17 = lVar17 + 8;
            *(float *)((int)lVar22 + 4) = *(float *)((int)lVar22 + 4) * fVar6;
            lVar22 = lVar22 + 8;
            lVar30 = lVar30 + -1;
          } while (lVar30 != 0);
          lVar17 = 2;
          do {
            iVar19 = (int)lVar18;
            lVar18 = lVar18 + 0x10;
            iVar20 = (int)lVar26;
            lVar26 = lVar26 + 0x10;
            fVar3 = fVar3 + *(float *)(iVar19 + 0x1c4) + *(float *)(iVar20 + 4) +
                    *(float *)(iVar20 + 8) + *(float *)(iVar20 + 0xc);
            lVar17 = lVar17 + -1;
          } while (lVar17 != 0);
          fVar3 = (fVar3 + 0.7853982) * fVar9 + fVar5;
        }
        (moby->rotation).z = fVar3;
        moby->modeBits = MVar10 | CAN_BE_DAMAGED;
      }
    }
  }
  return;
}


// 0x03874d0 (0x14 bytes)
void M444_003874d0(void)

{
  DAT_00841fac = 0x10000;
  return;
}


