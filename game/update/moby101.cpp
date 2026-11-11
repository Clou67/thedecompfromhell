// game/update/moby101.cpp -- reconstructed from NPEA00385 EBOOT
// STATUS: NOT STARTED (raw Ghidra output)
// 2 functions, 0x1856a0-0x186bcc
#include "game/update/moby101.h"
#include "game/camera.h"
#include "game/collproc.h"
#include "game/hero.h"
#include "game/mobyfunc.h"
#include "game/mobyutil.h"
#include "game/partupd.h"
#include "game/sound.h"
#include "game/space.h"
#include "game/update.h"
#include "game/update/moby1233.h"
#include "idol/fastfunc.h"

// 0x01856a0 (0x788 bytes)
void M101_001856a0(MobyInstance *param_1)

{
  float fVar1;
  undefined4 uVar2;
  void *pvVar3;
  Spline *pSVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  int iVar9;
  longlong lVar8;
  int iVar10;
  ulonglong uVar11;
  double dVar12;
  double dVar13;
  GPiece<16> auStack_80;
  GPiece<16> auStack_70;
  GPiece<16> local_60;
  int local_50;
  float local_4c;
  longlong local_48;
  
  pvVar3 = param_1->pVar;
  uVar11 = ZEXT48(pvVar3);
  if (param_1->state == '\0') {
    return;
  }
  if ((*(int *)((int)pvVar3 + 0x110) == -1) ||
     (iVar9 = IsMobyPlayingSound(param_1,*(int *)((int)pvVar3 + 0x110)), iVar9 == 0)) {
    *(undefined4 *)((int)pvVar3 + 0x110) = 0xffffffff;
    iVar9 = PlayMobySound(1,4,param_1);
    *(int *)((int)pvVar3 + 0x110) = iVar9;
  }
  dVar12 = 0.5;
  MB_BobMotion
            (0.5,g_FrameTime * 1.3962634,param_1,(float *)((int)pvVar3 + 0x100),
             (float *)((int)pvVar3 + 0x104));
  MB_SwingMotion
            (0x3fbaceea00000000,(double)(g_FrameTime * 0.31415927),
             (double)(g_FrameTime * 0.36651915),param_1,uVar11 + 0x108,uVar11 + 0x10c);
  fVar1 = *(float *)((int)pvVar3 + 0x108);
  fVar5 = 3.1415925 - fVar1;
  if (fVar1 - (3.1415925 - fVar1) < 0.0) {
    fVar5 = fVar1;
  }
  fVar6 = -3.1415925 - fVar1;
  if ((-3.1415925 - fVar1) - fVar5 < 0.0) {
    fVar6 = fVar5;
  }
  fVar1 = fVar6 * fVar6;
  fVar5 = fVar1 * fVar1 * fVar6;
  fVar7 = fVar1 * fVar5;
  (param_1->pos).x =
       *(float *)((int)pvVar3 + 0xc0) +
       fVar1 * fVar7 * 2.601887e-06 +
       fVar7 * -0.0001980741 + fVar5 * 0.0083330255 + fVar1 * fVar6 * -0.16666657 + fVar6;
  fVar1 = *(float *)((int)pvVar3 + 0x10c);
  fVar5 = 3.1415925 - fVar1;
  if (fVar1 - (3.1415925 - fVar1) < 0.0) {
    fVar5 = fVar1;
  }
  fVar6 = -3.1415925 - fVar1;
  if ((-3.1415925 - fVar1) - fVar5 < 0.0) {
    fVar6 = fVar5;
  }
  fVar1 = fVar6 * fVar6;
  fVar5 = fVar1 * fVar1 * fVar6;
  fVar7 = fVar1 * fVar5;
  (param_1->pos).y =
       *(float *)((int)pvVar3 + 0xc4) +
       fVar1 * fVar7 * 2.601887e-06 +
       fVar7 * -0.0001980741 + fVar5 * 0.0083330255 + fVar1 * fVar6 * -0.16666657 + fVar6;
  dVar13 = 0.0;
  MB_randRangeFloat(4.5,5.5);
  GetBonePosition(param_1,2,auStack_80);
  GetBonePosition(param_1,3,auStack_70);
  if ((worldUpdateTime & 1) == 0) {
    iVar9 = MB_randRange(0x14,0x18);
    iVar9 = (int)(animationSpeed * (float)((double)(longlong)iVar9 + dVar12));
    local_48 = (longlong)iVar9;
    SpawnPart_4(auStack_80,local_60,0x6000ffff,0x80,iVar9,100,0xfffffffffffffff6,1);
    iVar9 = MB_randRange(0x14,0x18);
    iVar9 = (int)(animationSpeed * (float)((double)(longlong)iVar9 + dVar12));
    local_48 = (longlong)iVar9;
    SpawnPart_4(auStack_70,local_60,0x6000ffff,0x80,iVar9,100,0xfffffffffffffff6,1);
  }
  else {
    iVar9 = MB_randRange(0x12,0x16);
    iVar9 = (int)(animationSpeed * (float)((double)(longlong)iVar9 + dVar12));
    local_48 = (longlong)iVar9;
    SpawnPart_4
              (auStack_80,local_60,0xffffffffcf0000ff,0xcf,iVar9,0x32,0xfffffffffffffff6,1);
    iVar9 = MB_randRange(0x12,0x16);
    iVar9 = (int)(animationSpeed * (float)((double)(longlong)iVar9 + dVar12));
    local_48 = (longlong)iVar9;
    SpawnPart_4
              (auStack_70,local_60,0xffffffffcf0000ff,0xcf,iVar9,0x32,0xfffffffffffffff6,1);
  }
  lVar8 = MB_randRange(10,0x19);
  iVar9 = MB_randRange(10,0xf);
  iVar9 = (int)(animationSpeed * (float)((double)(longlong)iVar9 + dVar12));
  local_48 = (longlong)iVar9;
  SpawnPart_4(auStack_80,local_60,0xffffffffefff7f4f,0xff0000,iVar9,lVar8,-lVar8,1);
  lVar8 = MB_randRange(10,0x19);
  iVar9 = MB_randRange(10,0xf);
  iVar9 = (int)(animationSpeed * (float)((double)(longlong)iVar9 + dVar12));
  local_48 = (longlong)iVar9;
  SpawnPart_4(auStack_70,local_60,0xffffffffefff7f4f,0xff0000,iVar9,lVar8,-lVar8,1);
  local_4c = 0.0;
  param_1->scale = param_1->pClass->gScale * DAT_0073b968;
  iVar9 = MB_damage(param_1,0x330000,0);
  iVar10 = MB_HandleDamage(param_1,iVar9,uVar11 + 0x20,0,&local_50,&local_4c,0,4);
  if (((iVar9 != 0) && (*(int *)(iVar9 + 0x20) != 0)) &&
     (*(short *)(*(int *)(iVar9 + 0x20) + 0xa6) == 0x4d1)) {
    local_4c = 0.0;
    local_50 = 1;
  }
  if (local_50 == 1) goto LAB_00185cbc;
  fVar1 = *(float *)((int)pvVar3 + 0x20) - local_4c;
  *(float *)((int)pvVar3 + 0x20) = fVar1;
  if (param_1->animationId != '\a') {
    MB_SetAnimation(param_1,7,0,5);
    fVar1 = *(float *)((int)pvVar3 + 0x20);
  }
  if ((double)fVar1 <= dVar13) {
LAB_00185c88:
    MB_SpawnBoltsFromCrate(param_1,0,0xffffffffffffffff);
    param_1->state = '\b';
    *(undefined1 *)((int)pvVar3 + 0x67) = 0xf0;
  }
  else {
    param_1->state = '\a';
    if (iVar10 < 3) {
      if ((-1 < iVar10) && (0 < iVar10)) goto LAB_00185c88;
    }
    else if (iVar10 < 0xb) {
      if (iVar10 < 9) {
        *(undefined1 *)((int)pvVar3 + 0x67) = 0x78;
      }
      else {
        *(undefined1 *)((int)pvVar3 + 0x67) = 0xfa;
      }
    }
  }
  MB_UpdateLightsTransition(param_1,uVar11 + 0x60);
LAB_00185cbc:
  param_1->damage = -1;
  MB_ColorDyingMoby(param_1,uVar11 + 0x60);
  uVar2 = 0x42200000;
  if (param_1->state == '\x04') {
    uVar2 = 0x42480000;
  }
  *(undefined4 *)((int)pvVar3 + 0xd8) = uVar2;
  pSVar4 = Splines[*(int *)((int)pvVar3 + 0xd0)];
  iVar9 = MB_getTargetInArea(param_1,uVar11 + 0x70,pSVar4,0,0,pSVar4->points,pSVar4->cnt);
  if (iVar9 != 2) {
    fVar1 = (param_1->pos).y - *(float *)((int)pvVar3 + 0x74);
    fVar5 = (param_1->pos).x - *(float *)((int)pvVar3 + 0x70);
    if ((*(float *)((int)pvVar3 + 0xd8) < SQRT(fVar5 * fVar5 + fVar1 * fVar1)) ||
       (8.0 < ABS((param_1->pos).z - *(float *)((int)pvVar3 + 0x78)))) {
      *(undefined4 *)((int)pvVar3 + 0xb4) = 2;
    }
    else if ((param_1->state != '\x05') &&
            (iVar9 = CollLine(&param_1->pos,&g_heroCGPos,2,param_1,0), iVar9 != 0))
    {
      *(undefined4 *)((int)pvVar3 + 0xb4) = 2;
    }
  }
  if (*(int *)((int)pvVar3 + 0xb0) == 0) {
    *(MobyInstance **)((int)pvVar3 + 0xb0) = g_heroMobyPtr;
  }
  return;
}


// 0x0185e70 (0xd5c bytes)
// inlined: FastAtan2 @0x186288, FastAtan2 @0x1864dc
/* Moby 101 */

void UpdateMoby_101(MobyInstance *moby)

{
  u8 uVar1;
  char cVar2;
  f32 fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  MobyModeBit MVar9;
  void *pvVar10;
  int iVar11;
  uint uVar12;
  ulonglong *puVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  int iVar17;
  ulonglong uVar18;
  longlong lVar19;
  undefined4 uVar20;
  int iVar21;
  ulonglong uVar22;
  longlong lVar23;
  longlong lVar24;
  longlong lVar25;
  float *pfVar26;
  longlong lVar27;
  ulonglong unaff_r29;
  ulonglong unaff_r30;
  ulonglong unaff_r31;
  ulonglong in_LR;
  longlong lVar28;
  double dVar29;
  double dVar30;
  double dVar31;
  double dVar32;
  double dVar33;
  ulonglong in_f27;
  double dVar34;
  ulonglong in_f28;
  double dVar35;
  ulonglong in_f29;
  double dVar36;
  ulonglong in_f30;
  double dVar37;
  ulonglong in_f31;
  double dVar38;
  GPiece<16> auVar39;
  GPiece<16> auVar40;
  GPiece<16> auVar41;
  float fVar42;
  
  lVar19 = (longlong)(int)moby;
  uVar18 = ZEXT48(&stack0x00000000);
  lVar24 = uVar18 - 400;
  puVar13 = (ulonglong *)lVar24;
  *puVar13 = uVar18;
  puVar13[0x34] = in_LR;
  puVar13[0x2d] = in_f27;
  puVar13[0x2e] = in_f28;
  puVar13[0x2f] = in_f29;
  puVar13[0x30] = in_f30;
  puVar13[0x31] = in_f31;
  puVar13[0x2c] = unaff_r31;
  puVar13[0x2b] = unaff_r30;
  puVar13[0x2a] = unaff_r29;
  pvVar10 = moby->pVar;
  M101_001856a0();
  uVar1 = moby->state;
  iVar11 = *(int *)((int)pvVar10 + 0xb0);
  if (uVar1 == '\b') {
    *(undefined4 *)((int)puVar13 + 0xec) = 0;
    *(undefined4 *)(puVar13 + 0x1d) = 0;
    *(undefined4 *)((int)puVar13 + 0xe4) = 0;
    *(undefined4 *)(puVar13 + 0x1c) = 0;
    puVar13[0x12] = 2;
    puVar13[0x14] = 1;
    puVar13[0x15] = 1;
    puVar13[0x16] = 0xffffffffffffffff;
    puVar13[0x17] = 0;
    MB_genericExplosion
              (0,0,0x4010000000000000,0x4000000000000000,0x4022000000000000,0x3ff0000000000000,
               0x402e000000000000,lVar19,uVar18 - 0xb0,lVar19 + 0x10,&DAT_00185e28,0,10,3,0x10);
    if (*(MobyInstance **)((int)pvVar10 + 0xf8) != (MobyInstance *)0x0) {
      DeleteMoby(*(MobyInstance **)((int)pvVar10 + 0xf8));
    }
    if (*(MobyInstance **)((int)pvVar10 + 0xfc) != (MobyInstance *)0x0) {
      DeleteMoby(*(MobyInstance **)((int)pvVar10 + 0xfc));
    }
    DeleteMoby(moby);
  }
  else if (uVar1 == '\a') {
    if ((moby->field43_0x70 & 2U) != 0) {
      if (moby->animationId != moby->setByGroup) {
        MB_SetAnimation(lVar19,moby->setByGroup,0,10);
      }
      moby->state = '\x04';
    }
  }
  else if (uVar1 == '\x06') {
    dVar38 = 0.0;
    *(undefined4 *)(puVar13 + 0x1e) = 0;
    iVar11 = *(int *)((int)pvVar10 + 0xd4);
    fVar42 = (moby->pos).y;
    fVar6 = (moby->pos).x;
    fVar7 = (moby->pos).z;
    fVar5 = Cuboids[iVar11].pos.y;
    fVar8 = Cuboids[iVar11].pos.x;
    fVar14 = fVar42 - fVar5;
    fVar4 = Cuboids[iVar11].pos.z;
    fVar15 = fVar6 - fVar8;
    fVar16 = fVar7 - fVar4;
    dVar36 = (double)(fVar5 - fVar42);
    dVar35 = (double)(fVar8 - fVar6);
    dVar34 = (double)(fVar4 - fVar7);
    fVar42 = SQRT(fVar16 * fVar16 + fVar15 * fVar15 + fVar14 * fVar14);
    dVar37 = (double)fVar42;
    OrganicDelt
              (fVar42,DAT_0071f418 * 10.0,DAT_0071f418 * 10.0,g_FrameTime * 20.0,
               (float *)(puVar13 + 0x1e),0x720000,(float *)((int)pvVar10 + 0xf0));
    uVar1 = moby->animationId;
    dVar31 = (double)SQRT((float)(dVar34 * dVar34 +
                                 (double)(float)(dVar35 * dVar35 + (double)(float)(dVar36 * dVar36))
                                 ));
    dVar32 = (double)(float)((double)*(float *)((int)pvVar10 + 0xf0) / dVar31);
    dVar29 = dVar38;
    if (dVar38 - dVar31 < 0.0) {
      dVar29 = (double)(float)(dVar32 * dVar34);
    }
    dVar33 = dVar38;
    if (dVar38 - dVar31 < 0.0) {
      dVar33 = (double)(float)(dVar32 * dVar36);
    }
    dVar30 = dVar38;
    if (dVar38 - dVar31 < 0.0) {
      dVar30 = (double)(float)(dVar32 * dVar35);
    }
    if (dVar31 - dVar38 < 0.0) {
      dVar29 = (double)(float)(dVar32 * dVar34);
    }
    if (dVar31 - dVar38 < 0.0) {
      dVar33 = (double)(float)(dVar32 * dVar36);
    }
    if (dVar31 - dVar38 < 0.0) {
      dVar30 = (double)(float)(dVar32 * dVar35);
    }
    (moby->pos).z = (float)((double)(moby->pos).z + dVar29);
    (moby->pos).y = (float)((double)(moby->pos).y + dVar33);
    (moby->pos).x = (float)((double)(moby->pos).x + dVar30);
    if ((dVar37 < 0.10000000149011612) &&
       (uVar12 = (int)*(uint *)((int)pvVar10 + 0xf0) >> 0x1f,
       (int)((uVar12 >> 1 ^ *(uint *)((int)pvVar10 + 0xf0)) - uVar12) < 0x3c23d70a)) {
      if (uVar1 != '\0') {
        MB_SetAnimation(lVar19,0,0,10);
      }
      moby->setByGroup = '\0';
      moby->state = '\x02';
    }
  }
  else if (uVar1 == '\x05') {
    if (*(int *)((int)pvVar10 + 0xb4) != 2) {
      moby->setByGroup = '\0';
      moby->state = '\x06';
    }
  }
  else if (uVar1 == '\x04') {
    fVar42 = *(float *)(iVar11 + 0x10) - (moby->pos).x;
    fVar6 = *(float *)(iVar11 + 0x14) - (moby->pos).y;
    fVar5 = ABS(fVar42);
    fVar7 = ABS(fVar6);
    *(float *)((int)puVar13 + 0xf4) = fVar42;
    *(float *)(puVar13 + 0x1f) = fVar6;
    *(float *)((int)puVar13 + 0xfc) = fVar5 - fVar7;
    dVar29 = 0.0;
    uVar22 = (ulonglong)(*(uint *)((int)puVar13 + 0xf4) >> 0x1c) & 8 |
             (ulonglong)(*(uint *)((int)puVar13 + 0xfc) >> 0x1e) & 2 |
             (ulonglong)(*(uint *)(puVar13 + 0x1f) >> 0x1d) & 4;
    fVar42 = ABS(*(float *)((int)puVar13 + 0xf4));
    if (*(float *)((int)puVar13 + 0xfc) - 0.0 < 0.0) {
      fVar42 = fVar7;
    }
    fVar7 = *(float *)(&g_atanQuadrantTable + (int)(uVar22 << 2));
    fVar6 = *(float *)(((uint)(uVar22 << 2) | 0x735900) + 4);
    fVar8 = ABS(*(float *)(puVar13 + 0x1f));
    if (*(float *)((int)puVar13 + 0xfc) - 0.0 < 0.0) {
      fVar8 = fVar5;
    }
    dVar31 = dVar29;
    if (0.0 < fVar42) {
      lVar23 = uVar18 - 0x180;
      lVar27 = uVar18 - 0x74;
      lVar25 = uVar18 - 0x84;
      lVar28 = 2;
      fVar42 = (fVar8 - fVar42) / (fVar8 + fVar42);
      fVar5 = fVar42 * fVar42;
      *(float *)(puVar13 + 0x23) = fVar42;
      *(float *)(puVar13 + 0x22) = fVar42;
      *(float *)((int)puVar13 + 0x114) = fVar42;
      *(float *)((int)puVar13 + 0x10c) = fVar42;
      fVar42 = fVar5 * fVar5;
      *(float *)(puVar13 + 0x22) = *(float *)(puVar13 + 0x22) * fVar5;
      *(float *)((int)puVar13 + 0x114) = *(float *)((int)puVar13 + 0x114) * fVar42;
      *(float *)(puVar13 + 0x23) = *(float *)(puVar13 + 0x23) * fVar42 * fVar5;
      do {
        *(float *)((int)lVar23 + 0x10c) = *(float *)((int)lVar23 + 0xfc) * fVar42 * fVar42;
        iVar21 = (int)lVar25;
        lVar25 = lVar25 + 8;
        lVar23 = lVar23 + 8;
        *(float *)((int)lVar27 + 4) = *(float *)(iVar21 + 4) * fVar42 * fVar42;
        lVar27 = lVar27 + 8;
        lVar28 = lVar28 + -1;
      } while (lVar28 != 0);
      lVar28 = 4;
      lVar27 = uVar18 - 0x84;
      pfVar26 = (float *)&DAT_007358e0;
      lVar23 = lVar24;
      lVar25 = lVar27;
      do {
        fVar42 = *pfVar26;
        fVar5 = pfVar26[1];
        pfVar26 = pfVar26 + 2;
        *(float *)((int)lVar23 + 0x10c) = *(float *)((int)lVar23 + 0x10c) * fVar42;
        lVar23 = lVar23 + 8;
        *(float *)((int)lVar25 + 4) = *(float *)((int)lVar25 + 4) * fVar5;
        lVar25 = lVar25 + 8;
        lVar28 = lVar28 + -1;
      } while (lVar28 != 0);
      lVar23 = 2;
      do {
        iVar21 = (int)lVar24;
        iVar17 = (int)lVar27;
        lVar24 = lVar24 + 0x10;
        lVar27 = lVar27 + 0x10;
        dVar31 = (double)((float)(dVar31 + (double)*(float *)(iVar21 + 0x10c)) +
                          *(float *)(iVar17 + 4) + *(float *)(iVar17 + 8) + *(float *)(iVar17 + 0xc)
                         );
        lVar23 = lVar23 + -1;
      } while (lVar23 != 0);
      dVar31 = (double)((float)(dVar31 + 0.7853981852531433) * fVar7 + fVar6);
    }
    fVar42 = OrganicDeltAng
                       ((float)dVar31,DAT_0071f418 * 12.566371,DAT_0071f418 * 25.132742,
                        g_FrameTime * 6.2831855,&(moby->rotation).z,0x185e28,
                        (float *)((int)pvVar10 + 0xdc));
    dVar31 = (double)fVar42;
    cVar2 = moby->setByGroup;
    if (cVar2 == '\x06') {
      if ((moby->field43_0x70 & 2U) != 0) {
        if (*(int *)((int)pvVar10 + 0xb4) == 2) {
          if (moby->animationId != '\0') {
            MB_SetAnimation(dVar31,lVar19,0,0,2);
          }
          moby->setByGroup = '\0';
          moby->state = '\x02';
        }
        else {
          moby->setByGroup = '\x01';
          if (moby->animationId != '\x01') {
            MB_SetAnimation(dVar31,lVar19,1,0,2);
          }
        }
      }
    }
    else if (cVar2 == '\x05') {
      if (*(int *)((int)pvVar10 + 0xb4) == 2) {
        if (moby->animationId != '\x06') {
          MB_SetAnimation(dVar31,lVar19,6,0,2);
        }
        moby->setByGroup = '\x06';
      }
      else {
        moby->setByGroup = '\x02';
        if (moby->animationId != '\x02') {
          MB_SetAnimation(dVar31,lVar19,2,0,2);
        }
      }
    }
    else if (cVar2 == '\x04') {
      if (((moby->field43_0x70 & 2U) != 0) &&
         (moby->setByGroup = '\x05', moby->animationId != '\x05')) {
        MB_SetAnimation(dVar31,lVar19,5,0,2);
      }
    }
    else if (cVar2 == '\x03') {
      iVar21 = FastDecTimerS32(ZEXT48(pvVar10) + 0xe8);
      if (iVar21 != 0) {
        auVar39 = ZEXT416(0xffffffff);
        auVar39 = auVar39 | auVar39 << 0x20 | auVar39 << 0x40 | auVar39 << 0x60;
        auVar40 = vectorShiftLeftIntegerWord(auVar39,auVar39);
        auVar39 = loadVectorLeftIndexed(0x2c,0x185e28);
        auVar39 = auVar39 >> 0x60 & (GPiece<16>)0xffffffff;
        auVar41 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
        iVar21 = *(int *)((int)pvVar10 + 0xf4);
        auVar39 = vectorMultiplyAddFloatingPoint
                            (auVar41,auVar39 | auVar39 << 0x20 | auVar39 << 0x40 | auVar39 << 0x60,
                             auVar40);
        auVar39 = vectorConvertToSignedFixedPointWordSaturate(auVar39,0);
        auVar39 = auVar39 >> 0x60 & (GPiece<16>)0xffffffff;
        uVar20 = storeVectorElementWordIndexed
                           (auVar39 | auVar39 << 0x20 | auVar39 << 0x40 | auVar39 << 0x60,0xe8,
                            ZEXT48(pvVar10));
        *(undefined4 *)((int)pvVar10 + 0xe8U & 0xfffffffc) = uVar20;
        if (iVar21 == 0) {
          GetBonePosition(lVar19,0,uVar18 - 0xd0);
        }
        else {
          GetBonePosition(lVar19,1,uVar18 - 0xd0);
        }
        fVar6 = *(float *)(iVar11 + 0x10) - *(float *)(puVar13 + 0x18);
        *(float *)(puVar13 + 0x1a) = fVar6;
        fVar7 = *(float *)(iVar11 + 0x14) - *(float *)((int)puVar13 + 0xc4);
        *(float *)((int)puVar13 + 0xd4) = fVar7;
        fVar5 = *(float *)(iVar11 + 0x18) - *(float *)(puVar13 + 0x19);
        fVar42 = DAT_0073b974 * g_FrameTime;
        *(float *)(puVar13 + 0x1b) = fVar5;
        *(undefined4 *)((int)puVar13 + 0xdc) = *(undefined4 *)(iVar11 + 0x1c);
        iVar21 = *(int *)((int)pvVar10 + 0xf4);
        dVar32 = (double)SQRT(fVar5 * fVar5 + fVar6 * fVar6 + fVar7 * fVar7);
        fVar42 = (float)((double)fVar42 / dVar32);
        dVar31 = dVar29;
        if (dVar29 - dVar32 < 0.0) {
          dVar31 = (double)(fVar6 * fVar42);
        }
        dVar34 = dVar29;
        if (dVar29 - dVar32 < 0.0) {
          dVar34 = (double)(fVar7 * fVar42);
        }
        dVar35 = dVar29;
        if (dVar29 - dVar32 < 0.0) {
          dVar35 = (double)(fVar5 * fVar42);
        }
        if (dVar32 - dVar29 < 0.0) {
          dVar31 = (double)(fVar6 * fVar42);
        }
        if (dVar32 - dVar29 < 0.0) {
          dVar34 = (double)(fVar7 * fVar42);
        }
        if (dVar32 - dVar29 < 0.0) {
          dVar35 = (double)(fVar5 * fVar42);
        }
        *(float *)(puVar13 + 0x1a) = (float)dVar31;
        *(float *)((int)puVar13 + 0xd4) = (float)dVar34;
        *(float *)(puVar13 + 0x1b) = (float)dVar35;
        if (iVar21 == 0) {
          if (*(int *)((int)pvVar10 + 0xfc) != 0) {
            FUN_002169b4((double)*(float *)((int)pvVar10 + 0xec),*(int *)((int)pvVar10 + 0xfc),
                         uVar18 - 0xc0);
            PlayMobySound(0,0,moby);
          }
          uVar20 = FUN_00216898(lVar19,0);
          *(undefined4 *)((int)pvVar10 + 0xfc) = uVar20;
          uVar20 = 1;
        }
        else {
          if (*(int *)((int)pvVar10 + 0xf8) != 0) {
            FUN_002169b4((double)*(float *)((int)pvVar10 + 0xec),*(int *)((int)pvVar10 + 0xf8),
                         uVar18 - 0xc0);
            PlayMobySound(0,0,moby);
          }
          uVar20 = FUN_00216898(lVar19,1);
          *(undefined4 *)((int)pvVar10 + 0xf8) = uVar20;
          uVar20 = 0;
        }
        *(undefined4 *)((int)pvVar10 + 0xf4) = uVar20;
        fVar42 = *(float *)((int)pvVar10 + 0xec) + 5.0;
        *(float *)((int)pvVar10 + 0xec) = fVar42;
        fVar6 = (moby->pos).y - *(float *)(iVar11 + 0x14);
        fVar7 = (moby->pos).x - *(float *)(iVar11 + 0x10);
        fVar6 = SQRT(fVar7 * fVar7 + fVar6 * fVar6);
        if (fVar6 < fVar42) {
          *(float *)((int)pvVar10 + 0xec) = fVar6;
        }
      }
      if (*(int *)((int)pvVar10 + 0xb4) == 2) {
        if (moby->animationId != '\x04') {
          MB_SetAnimation(lVar19,4,0,2);
        }
        moby->setByGroup = '\x04';
      }
    }
    else if (cVar2 == '\x02') {
      if (((moby->field43_0x70 & 2U) != 0) &&
         (moby->setByGroup = '\x03', moby->animationId != '\x03')) {
        MB_SetAnimation(dVar31,lVar19,3,0,2);
      }
    }
    else if (cVar2 == '\x01') {
      if ((moby->field43_0x70 & 2U) != 0) {
        moby->setByGroup = '\x02';
        if (moby->animationId != '\x02') {
          MB_SetAnimation(dVar31,lVar19,2,0,2);
        }
        *(undefined4 *)((int)pvVar10 + 0xe8) = 0;
      }
    }
    else if ((cVar2 == '\0') && (moby->setByGroup = '\x01', moby->animationId != '\x01')) {
      MB_SetAnimation(dVar31,lVar19,1,0,2);
    }
  }
  else if (uVar1 == '\x02') {
    fVar42 = *(float *)(iVar11 + 0x10) - (moby->pos).x;
    fVar6 = *(float *)(iVar11 + 0x14) - (moby->pos).y;
    fVar7 = ABS(fVar42);
    fVar5 = ABS(fVar6);
    *(float *)(puVar13 + 0x20) = fVar42;
    *(float *)((int)puVar13 + 0x104) = fVar6;
    *(float *)(puVar13 + 0x21) = fVar7 - fVar5;
    fVar42 = 0.0;
    uVar22 = (ulonglong)(*(uint *)(puVar13 + 0x20) >> 0x1c) & 8 |
             (ulonglong)(*(uint *)(puVar13 + 0x21) >> 0x1e) & 2 |
             (ulonglong)(*(uint *)((int)puVar13 + 0x104) >> 0x1d) & 4;
    fVar6 = ABS(*(float *)(puVar13 + 0x20));
    if (*(float *)(puVar13 + 0x21) - 0.0 < 0.0) {
      fVar6 = fVar5;
    }
    fVar8 = *(float *)(&g_atanQuadrantTable + (int)(uVar22 << 2));
    fVar5 = *(float *)(((uint)(uVar22 << 2) | 0x735900) + 4);
    fVar4 = ABS(*(float *)((int)puVar13 + 0x104));
    if (*(float *)(puVar13 + 0x21) - 0.0 < 0.0) {
      fVar4 = fVar7;
    }
    if (0.0 < fVar6) {
      lVar23 = uVar18 - 0x180;
      lVar25 = uVar18 - 100;
      lVar27 = uVar18 - 0x54;
      lVar28 = 2;
      fVar6 = (fVar4 - fVar6) / (fVar4 + fVar6);
      fVar7 = fVar6 * fVar6;
      *(float *)(puVar13 + 0x27) = fVar6;
      *(float *)(puVar13 + 0x26) = fVar6;
      *(float *)((int)puVar13 + 0x134) = fVar6;
      *(float *)((int)puVar13 + 300) = fVar6;
      fVar6 = fVar7 * fVar7;
      *(float *)(puVar13 + 0x26) = *(float *)(puVar13 + 0x26) * fVar7;
      *(float *)((int)puVar13 + 0x134) = *(float *)((int)puVar13 + 0x134) * fVar6;
      *(float *)(puVar13 + 0x27) = *(float *)(puVar13 + 0x27) * fVar6 * fVar7;
      do {
        *(float *)((int)lVar23 + 300) = *(float *)((int)lVar23 + 0x11c) * fVar6 * fVar6;
        iVar11 = (int)lVar25;
        lVar23 = lVar23 + 8;
        lVar25 = lVar25 + 8;
        *(float *)((int)lVar27 + 4) = *(float *)(iVar11 + 4) * fVar6 * fVar6;
        lVar27 = lVar27 + 8;
        lVar28 = lVar28 + -1;
      } while (lVar28 != 0);
      lVar28 = 4;
      lVar27 = uVar18 - 100;
      pfVar26 = (float *)&DAT_007358e0;
      lVar23 = lVar24;
      lVar25 = lVar27;
      do {
        fVar6 = *pfVar26;
        fVar7 = pfVar26[1];
        pfVar26 = pfVar26 + 2;
        *(float *)((int)lVar23 + 300) = *(float *)((int)lVar23 + 300) * fVar6;
        lVar23 = lVar23 + 8;
        *(float *)((int)lVar25 + 4) = *(float *)((int)lVar25 + 4) * fVar7;
        lVar25 = lVar25 + 8;
        lVar28 = lVar28 + -1;
      } while (lVar28 != 0);
      lVar23 = 2;
      do {
        iVar11 = (int)lVar24;
        iVar21 = (int)lVar27;
        lVar24 = lVar24 + 0x10;
        lVar27 = lVar27 + 0x10;
        fVar42 = fVar42 + *(float *)(iVar11 + 300) + *(float *)(iVar21 + 4) + *(float *)(iVar21 + 8)
                 + *(float *)(iVar21 + 0xc);
        lVar23 = lVar23 + -1;
      } while (lVar23 != 0);
      fVar42 = (fVar42 + 0.7853982) * fVar8 + fVar5;
    }
    fVar42 = OrganicDeltAng
                       (fVar42,DAT_0071f418 * 4.712389,DAT_0071f418 * 4.712389,
                        g_FrameTime * 10.12291,&(moby->rotation).z,0x185e28,
                        (float *)((int)pvVar10 + 0xdc));
    if (*(int *)((int)pvVar10 + 0xb4) != 2) {
      *(undefined4 *)((int)pvVar10 + 0xec) = 0x41700000;
      moby->setByGroup = '\x01';
      if (moby->animationId != '\x01') {
        MB_SetAnimation((double)fVar42,lVar19,1,0,0);
      }
      moby->state = '\x04';
    }
  }
  else if (uVar1 == '\0') {
    MVar9 = moby->modeBits;
    *(f32 *)((int)pvVar10 + 0xc0) = (moby->pos).x;
    *(f32 *)((int)pvVar10 + 0xc4) = (moby->pos).y;
    fVar3 = (moby->pos).z;
    moby->modeBits = MVar9 | (CAN_BE_DAMAGED|CAN_BE_AUTO_TARGETED);
    *(f32 *)((int)pvVar10 + 200) = fVar3;
    fVar3 = (moby->pos).w;
    *(undefined4 *)((int)pvVar10 + 0x20) = 0x40800000;
    *(f32 *)((int)pvVar10 + 0xcc) = fVar3;
    *(undefined2 *)((int)pvVar10 + 0x24) = 4;
    *(undefined1 *)((int)pvVar10 + 0x28) = 3;
    *(undefined1 *)((int)pvVar10 + 0x5a) = 0;
    *(undefined1 *)((int)pvVar10 + 0x58) = 0x32;
    *(undefined4 *)((int)pvVar10 + 0xec) = 0x41700000;
    moby->drawDistance = 0xff;
    uVar1 = moby->animationId;
    (moby->pos).z = (moby->pos).z + 1.0;
    if (uVar1 != '\0') {
      MB_SetAnimation(lVar19,0,0,10);
    }
    moby->setByGroup = '\0';
    uVar20 = FUN_00216898(lVar19,0);
    *(undefined4 *)((int)pvVar10 + 0xfc) = uVar20;
    uVar20 = FUN_00216898(lVar19,1);
    *(undefined4 *)((int)pvVar10 + 0xf8) = uVar20;
    moby->state = ((byte)(ZERO_MASK((-1 - *(int *)((int)pvVar10 + 0xd4)))) & 0xfd) + 5
    ;
    dVar29 = (double)MB_randRot();
    *(float *)((int)pvVar10 + 0x100) = (float)dVar29;
    dVar29 = (double)MB_randRot();
    *(float *)((int)pvVar10 + 0x108) = (float)dVar29;
    dVar29 = (double)MB_randRot();
    *(float *)((int)pvVar10 + 0x10c) = (float)dVar29;
    *(undefined4 *)((int)pvVar10 + 0x110) = 0xffffffff;
  }
  return;
}


