// game/update/moby1844.cpp -- reconstructed from NPEA00385 EBOOT
// STATUS: NOT STARTED (raw Ghidra output)
// 4 functions, 0x2c4684-0x2c4d10
#include "game/update/moby1844.h"
#include "game/camera.h"
#include "game/collproc.h"
#include "game/hero.h"
#include "game/mobyfunc.h"
#include "game/mobyutil.h"
#include "game/sound.h"
#include "idol/fastfunc.h"

// 0x02c4684 (0x6c bytes)
short M1844_002c4684(longlong param_1)

{
  ushort uVar1;
  ushort *puVar2;
  short sVar3;
  
  sVar3 = 0;
  puVar2 = *(ushort **)((int)&g_MobyGroups + (int)(param_1 << 2));
  do {
    if ((g_MobyInstance[*puVar2 & 0x7fff].oClass == BLARG_SHIP_0733) &&
       (g_MobyInstance[*puVar2 & 0x7fff].state == '\x05')) {
      sVar3 = sVar3 + 1;
    }
    uVar1 = *puVar2;
    puVar2 = puVar2 + 1;
  } while (-1 < (short)uVar1);
  return sVar3;
}


// 0x02c4728 (0x4dc bytes)
MobyInstance * FUN_002c4728(longlong param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  ushort uVar4;
  void *pvVar5;
  u16 *puVar6;
  uint uVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  char acVar11 [4];
  int iVar12;
  ushort *puVar13;
  MobyInstance *pMVar14;
  double dVar15;
  double dVar16;
  double dVar17;
  double dVar18;
  double dVar19;
  double dVar20;
  double dVar21;
  double dVar22;
  double dVar23;
  double dVar24;
  double dVar25;
  double dVar26;
  double dVar27;
  double dVar28;
  double dVar29;
  GPiece<16> local_100;
  float local_f0;
  float local_ec;
  float local_e8;
  float local_e0;
  float local_dc;
  float local_d8;
  float local_d0;
  float local_cc;
  float local_c8;
  
  puVar13 = *(ushort **)((int)&g_MobyGroups + (int)(param_1 << 2));
  while (((uVar7 = *puVar13 & 0x7fff, g_MobyInstance[uVar7].oClass != BLARG_SHIP_0733 ||
          (g_MobyInstance[uVar7].state != '\x04')) || (iVar12 = MB_randInt(10), iVar12 != 0)
         )) {
    uVar4 = *puVar13;
    puVar13 = puVar13 + 1;
    if ((short)uVar4 < 0) {
      return (MobyInstance *)0x0;
    }
  }
  pMVar14 = g_MobyInstance + uVar7;
  pvVar5 = pMVar14->pVar;
  dVar23 = 0.0;
  FastEulerToMtx(&local_f0,local_100);
  dVar16 = (double)FastWrapRot
                             (0.7853982,(float)(longlong)*(int *)((int)pvVar5 + 0x88) * 1.5707964);
  acVar11 = GameCamera.posW;
  fVar1 = (float)(dVar16 + 1.570796251296997);
  dVar29 = (double)(float)(3.141592502593994 - dVar16);
  if (dVar16 - (double)(float)(3.141592502593994 - dVar16) < 0.0) {
    dVar29 = dVar16;
  }
  dVar22 = (double)SQRT(local_d8 * local_d8 + local_e0 * local_e0 + local_dc * local_dc);
  fVar2 = 3.1415925 - fVar1;
  if (fVar1 - (3.1415925 - fVar1) < 0.0) {
    fVar2 = fVar1;
  }
  dVar17 = (double)(float)(-3.141592502593994 - dVar16);
  if ((double)(float)(-3.141592502593994 - dVar16) - dVar29 < 0.0) {
    dVar17 = dVar29;
  }
  dVar29 = (double)(float)(dVar17 * dVar17);
  fVar3 = -3.1415925 - fVar1;
  if ((-3.1415925 - fVar1) - fVar2 < 0.0) {
    fVar3 = fVar2;
  }
  dVar21 = (double)SQRT(local_c8 * local_c8 + local_d0 * local_d0 + local_cc * local_cc);
  dVar28 = (double)GameCamera.posX;
  dVar27 = (double)GameCamera.posY;
  dVar26 = (double)GameCamera.posZ;
  dVar25 = (double)(float)(dVar29 * (double)(float)(dVar29 * dVar17));
  fVar9 = fVar3 * fVar3;
  dVar16 = (double)SQRT(local_e8 * local_e8 + local_f0 * local_f0 + local_ec * local_ec);
  dVar24 = (double)(float)(dVar29 * dVar25);
  fVar8 = fVar9 * fVar9 * fVar3;
  fVar10 = fVar9 * fVar8;
  fVar1 = (float)((double)(((float)(dVar29 * dVar24) * 2.601887e-06 +
                           (float)(dVar24 * -0.0001980741071747616 +
                                  (double)(float)(dVar25 * 0.008333025500178337 +
                                                 (double)(float)((double)(float)(dVar29 * dVar17) *
                                                                 -0.16666656732559204 + dVar17)))) *
                          12.0) / dVar22);
  fVar2 = (float)(6.0 / dVar16);
  fVar3 = (float)((double)((fVar9 * fVar10 * 2.601887e-06 +
                           fVar10 * -0.0001980741 +
                           fVar8 * 0.0083330255 + fVar9 * fVar3 * -0.16666657 + fVar3) * 12.0) /
                 dVar21);
  dVar29 = dVar23;
  if (dVar23 - dVar22 < 0.0) {
    dVar29 = (double)(local_dc * fVar1);
  }
  dVar17 = dVar23;
  if (dVar23 - dVar22 < 0.0) {
    dVar17 = (double)(local_d8 * fVar1);
  }
  dVar24 = dVar23;
  if (dVar23 - dVar22 < 0.0) {
    dVar24 = (double)(local_e0 * fVar1);
  }
  if (dVar22 - dVar23 < 0.0) {
    dVar29 = (double)(local_dc * fVar1);
  }
  if (dVar22 - dVar23 < 0.0) {
    dVar24 = (double)(local_e0 * fVar1);
  }
  if (dVar22 - dVar23 < 0.0) {
    dVar17 = (double)(local_d8 * fVar1);
  }
  dVar22 = dVar23;
  if (dVar23 - dVar16 < 0.0) {
    dVar22 = (double)(local_e8 * fVar2);
  }
  dVar25 = dVar23;
  if (dVar23 - dVar16 < 0.0) {
    dVar25 = (double)(local_ec * fVar2);
  }
  dVar19 = dVar23;
  if (dVar23 - dVar16 < 0.0) {
    dVar19 = (double)(local_f0 * fVar2);
  }
  if (dVar16 - dVar23 < 0.0) {
    dVar22 = (double)(local_e8 * fVar2);
  }
  if (dVar16 - dVar23 < 0.0) {
    dVar25 = (double)(local_ec * fVar2);
  }
  dVar20 = dVar23;
  if (dVar23 - dVar21 < 0.0) {
    dVar20 = (double)(local_c8 * fVar3);
  }
  dVar15 = dVar23;
  if (dVar23 - dVar21 < 0.0) {
    dVar15 = (double)(local_cc * fVar3);
  }
  dVar18 = dVar23;
  if (dVar23 - dVar21 < 0.0) {
    dVar18 = (double)(local_d0 * fVar3);
  }
  if (dVar16 - dVar23 < 0.0) {
    dVar19 = (double)(local_f0 * fVar2);
  }
  if (dVar21 - dVar23 < 0.0) {
    dVar20 = (double)(local_c8 * fVar3);
  }
  if (dVar21 - dVar23 < 0.0) {
    dVar15 = (double)(local_cc * fVar3);
  }
  if (dVar21 - dVar23 < 0.0) {
    dVar18 = (double)(local_d0 * fVar3);
  }
  *(float *)((int)pvVar5 + 0xb0) = g_heroPosition.x;
  *(float *)((int)pvVar5 + 0xb4) = g_heroPosition.y;
  *(float *)((int)pvVar5 + 0xb8) = g_heroPosition.z;
  *(float *)((int)pvVar5 + 0xbc) = g_heroPosition.w;
  (pMVar14->pos).w = (f32)acVar11;
  pMVar14->state = '\x05';
  pMVar14->setByGroup = '\x01';
  (pMVar14->pos).z = (float)(dVar22 + (double)(float)(dVar20 + (double)(float)(dVar26 + dVar17)));
  (pMVar14->pos).y = (float)(dVar25 + (double)(float)(dVar15 + (double)(float)(dVar27 + dVar29)));
  (pMVar14->pos).x = (float)(dVar19 + (double)(float)(dVar18 + (double)(float)(dVar28 + dVar24)));
  fVar1 = g_FrameTime * 20.0;
  *(undefined4 *)((int)pvVar5 + 0x94) = 0x40a00000;
  *(float *)((int)pvVar5 + 0x6c) = fVar1;
  if (pMVar14->animationId != '\0') {
    MB_SetAnimation(pMVar14,0,0,(int)(animationSpeed * 10.5));
  }
  puVar6 = pMVar14->pClass->collision;
  pMVar14->modeBits =
       pMVar14->modeBits &
       (MIRROR|CAN_BE_DAMAGED|HIDE_BACKFACES|CAN_BE_AUTO_TARGETED|DISABLE_Z_WRITE|DRAW_SHADOW|
        DRAW_TRANSPARENT_WEIRD|LOCK_ROTATION|NO_DRAW|UNK_40|HAS_SPECIAL_VARS|HAS_GLOW|TRANSPARENT|
        NO_POST_UPDATE|NO_UPDATE);
  pMVar14->collision = puVar6;
  return pMVar14;
}


// 0x02c4c04 (0x14 bytes)
void M1844_002c4c04(void)

{
  DAT_007b806c = 0x10000;
  return;
}


// 0x02c4c18 (0xf8 bytes)
/* Moby 1844 */

void UpdateMoby_1844(MobyInstance *moby)

{
  byte bVar1;
  int iVar2;
  
  iVar2 = MB_damage(moby,0x10000,0);
  bVar1 = moby->state;
  if (bVar1 == 0) {
    moby->state = '\x01';
  }
  else if (bVar1 < 2) {
    if ((iVar2 != 0) && (0 < *(int *)(iVar2 + 0x2c))) {
      moby->state = '\x02';
    }
  }
  else if (bVar1 < 3) {
    PlayMobySound(0,0,moby);
    MB_DistributeBoltsNearHero(moby);
    MB_SpawnDebris(moby,0x736,1,0x737,1,1,2);
    MB_SpawnReplacementMoby(moby,0x735);
    DeleteMoby(moby);
  }
  return;
}


