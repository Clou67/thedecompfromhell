// game/update/moby136.cpp -- reconstructed from NPEA00385 EBOOT
// STATUS: NOT STARTED (raw Ghidra output)
// 1 functions, 0x25add0-0x25b2e4
#include "game/update/moby136.h"
#include "game/collproc.h"
#include "game/hero.h"
#include "game/mobyfunc.h"
#include "game/mobyutil.h"
#include "idol/fastfunc.h"

// 0x025add0 (0x514 bytes)
/* Moby 136 */

void UpdateMoby_136(MobyInstance *moby)

{
  u8 uVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  f32 fVar7;
  void *pvVar8;
  void *pvVar9;
  int iVar10;
  undefined8 in_r7;
  undefined8 in_r8;
  double dVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  GPiece<32> local_40;
  
  pvVar8 = moby->pVar;
  iVar10 = MB_damage(moby,0x330000,0);
  if (iVar10 != 0) {
    DeleteMoby(moby);
  }
  uVar1 = moby->state;
  if (uVar1 == '\x04') {
    OrganicDelt
              (0.0,DAT_0071f418 * 8.0,DAT_0071f418 * 8.0,g_FrameTime * 8.0,
               (float *)((int)pvVar8 + 0xe8),0x720000,(float *)((int)pvVar8 + 0xec));
    pvVar9 = moby->pVar;
    fVar2 = *(float *)((int)pvVar9 + 0xe8);
    fVar3 = *(float *)((int)pvVar9 + 0xd4);
    fVar4 = *(float *)((int)pvVar9 + 0xc4);
    fVar5 = *(float *)((int)pvVar9 + 0xd8);
    fVar6 = *(float *)((int)pvVar9 + 200);
    fVar7 = *(f32 *)((int)pvVar9 + 0xdc);
    (moby->pos).x =
         fVar2 * (*(float *)((int)pvVar9 + 0xd0) - *(float *)((int)pvVar9 + 0xc0)) +
         *(float *)((int)pvVar9 + 0xc0);
    (moby->pos).y = fVar2 * (fVar3 - fVar4) + *(float *)((int)pvVar9 + 0xc4);
    fVar3 = *(float *)((int)pvVar9 + 200);
    (moby->pos).w = fVar7;
    (moby->pos).z = fVar2 * (fVar5 - fVar6) + fVar3;
    DamageSphereAtPos
              (0x3fe3333340000000,0x3ff0000000000000,0x3ff0000000000000,moby,local_40,pvVar9,1,in_r7
               ,in_r8,0,1);
    if (*(int *)((int)pvVar8 + 0xe8) < 1) {
      moby->state = '\x03';
    }
  }
  else if (uVar1 == '\x03') {
    OrganicDelt
              (1.0,DAT_0071f418 * 8.0,DAT_0071f418 * 8.0,g_FrameTime * 8.0,
               (float *)((int)pvVar8 + 0xe8),0x720000,(float *)((int)pvVar8 + 0xec));
    pvVar9 = moby->pVar;
    fVar2 = *(float *)((int)pvVar9 + 0xe8);
    fVar3 = *(float *)((int)pvVar9 + 0xd4);
    fVar4 = *(float *)((int)pvVar9 + 0xc4);
    fVar5 = *(float *)((int)pvVar9 + 0xd8);
    fVar6 = *(float *)((int)pvVar9 + 200);
    fVar7 = *(f32 *)((int)pvVar9 + 0xdc);
    (moby->pos).x =
         fVar2 * (*(float *)((int)pvVar9 + 0xd0) - *(float *)((int)pvVar9 + 0xc0)) +
         *(float *)((int)pvVar9 + 0xc0);
    (moby->pos).y = fVar2 * (fVar3 - fVar4) + *(float *)((int)pvVar9 + 0xc4);
    fVar3 = *(float *)((int)pvVar9 + 200);
    (moby->pos).w = fVar7;
    (moby->pos).z = fVar2 * (fVar5 - fVar6) + fVar3;
    fVar2 = g_heroPosition.y - *(float *)((int)pvVar8 + 0xc4);
    fVar3 = g_heroPosition.x - *(float *)((int)pvVar8 + 0xc0);
    fVar4 = g_heroPosition.z - *(float *)((int)pvVar8 + 200);
    if (SQRT(fVar4 * fVar4 + fVar3 * fVar3 + fVar2 * fVar2) /
        SQRT(DAT_00969de8 * DAT_00969de8 + DAT_00969de0 * DAT_00969de0 + DAT_00969de4 * DAT_00969de4
            ) < (float)(longlong)(animationSpeed * 25.5)) {
      moby->state = '\x04';
    }
  }
  else if (uVar1 == '\x02') {
    if (((moby->field43_0x70 & 2U) != 0) && (moby->state = '\x03', moby->animationId != '\x02')) {
      MB_SetAnimation(moby,2,0,(int)(animationSpeed * 10.5));
    }
  }
  else if (uVar1 == '\x01') {
    iVar10 = MB_IsPntInCuboid(&g_heroPosition,(longlong)*(int *)((int)pvVar8 + 0xe0));
    if ((iVar10 != 0) && (moby->state = '\x02', moby->animationId != '\x01')) {
      MB_SetAnimation(moby,1,0,(int)(animationSpeed * 10.5));
    }
  }
  else if (uVar1 == '\0') {
    if (*(int *)((int)pvVar8 + 0xe0) == -1) {
      DeleteMoby(moby);
    }
    else {
      *(f32 *)((int)pvVar8 + 0xc0) = (moby->pos).x;
      *(f32 *)((int)pvVar8 + 0xc4) = (moby->pos).y;
      *(f32 *)((int)pvVar8 + 200) = (moby->pos).z;
      *(f32 *)((int)pvVar8 + 0xcc) = (moby->pos).w;
      fVar2 = -1.5707964;
      if (*(int *)((int)pvVar8 + 0xe4) != 0) {
        fVar2 = 1.5707964;
      }
      dVar11 = (double)FastWrapRot(fVar2,(moby->rotation).z);
      fVar2 = (float)(dVar11 + 1.570796251296997);
      dVar13 = (double)(float)(3.141592502593994 - dVar11);
      if (dVar11 - (double)(float)(3.141592502593994 - dVar11) < 0.0) {
        dVar13 = dVar11;
      }
      fVar3 = 3.1415925 - fVar2;
      if (fVar2 - (3.1415925 - fVar2) < 0.0) {
        fVar3 = fVar2;
      }
      dVar12 = (double)(float)(-3.141592502593994 - dVar11);
      if ((double)(float)(-3.141592502593994 - dVar11) - dVar13 < 0.0) {
        dVar12 = dVar13;
      }
      fVar4 = -3.1415925 - fVar2;
      if ((-3.1415925 - fVar2) - fVar3 < 0.0) {
        fVar4 = fVar3;
      }
      dVar13 = (double)(float)(dVar12 * dVar12);
      fVar5 = fVar4 * fVar4;
      dVar14 = (double)(float)(dVar13 * (double)(float)(dVar13 * dVar12));
      fVar2 = fVar5 * fVar5 * fVar4;
      dVar11 = (double)(float)(dVar13 * dVar14);
      fVar3 = fVar5 * fVar2;
      *(float *)((int)pvVar8 + 0xd4) =
           ((float)(dVar13 * dVar11) * 2.601887e-06 +
           (float)(dVar11 * -0.0001980741071747616 +
                  (double)(float)(dVar14 * 0.008333025500178337 +
                                 (double)(float)((double)(float)(dVar13 * dVar12) *
                                                 -0.16666656732559204 + dVar12)))) * 2.0 +
           *(float *)((int)pvVar8 + 0xc4);
      *(float *)((int)pvVar8 + 0xd0) =
           (fVar5 * fVar3 * 2.601887e-06 +
           fVar3 * -0.0001980741 + fVar2 * 0.0083330255 + fVar5 * fVar4 * -0.16666657 + fVar4) * 2.0
           + *(float *)((int)pvVar8 + 0xc0);
      *(float *)((int)pvVar8 + 0xd8) = *(float *)((int)pvVar8 + 200) + 0.5;
      moby->state = '\x01';
      if (moby->animationId != '\0') {
        MB_SetAnimation(moby,0,0,(int)(animationSpeed * 10.5));
      }
    }
  }
  return;
}


