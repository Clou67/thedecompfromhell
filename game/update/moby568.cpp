// game/update/moby568.cpp -- reconstructed from NPEA00385 EBOOT
// STATUS: NOT STARTED (raw Ghidra output)
// 3 functions, 0x3bc494-0x3bcd2c
#include "game/update/moby568.h"
#include "game/collproc.h"
#include "game/hero.h"
#include "game/mobyfunc.h"
#include "game/mobyutil.h"
#include "game/update/moby849.h"
#include "idol/fastfunc.h"

// 0x03bc494 (0x14 bytes)
void M568_003bc494(void)

{
  DAT_00845d10 = 0x10000;
  return;
}


// 0x03bc4d0 (0x250 bytes)
void M568_003bc4d0(int param_1)

{
  char cVar1;
  float fVar2;
  float fVar3;
  int iVar4;
  int iVar5;
  
  cVar1 = *(char *)(param_1 + 0x20);
  iVar5 = *(int *)(param_1 + 0x78);
  if ((cVar1 != '\0' && cVar1 != '\x05') && (cVar1 != '\x04')) {
    if ((g_heroState != MOVEMENT_LOCKED) || (cVar1 == '\x04')) {
      iVar4 = MB_damage(param_1,0x330000,0);
      *(undefined1 *)(param_1 + 0xa4) = 0xff;
      if (((DAT_00969f1c == param_1) || (DAT_00969f20 == param_1)) || (*(int *)(iVar5 + 0x19c) != 0)
         ) {
        MB_genericExplosion
                  (0x3ff8000000000000,0x3ff0000000000000,0x4008000000000000,0x3ff8000000000000,
                   0x4022000000000000,0x3ff8000000000000,0,param_1,&DAT_00a15d30,0,1,
                   0xffffffffffffffff,0x14,6,0x20);
        *(undefined4 *)(param_1 + 0x94) = 0;
        *(undefined1 *)(param_1 + 0x20) = 5;
        *(ushort *)(param_1 + 0x34) = *(ushort *)(param_1 + 0x34) & 0xefff | 0x41;
      }
      else {
        iVar5 = FastDecTimerS32(iVar5 + 0x194);
        if (((iVar5 != 0) || (iVar4 != 0)) ||
           ((*(char *)(param_1 + 0x20) == '\x01' &&
            (fVar2 = *(float *)(param_1 + 0x14) - g_heroPosition.y,
            fVar3 = *(float *)(param_1 + 0x10) - g_heroPosition.x,
            SQRT(fVar3 * fVar3 + fVar2 * fVar2) < 2.0)))) {
          MB_genericExplosion
                    (0,0,0x3ff0000000000000,0x3fe0000000000000,0x4022000000000000,0x3fe0000000000000
                     ,0,param_1,&DAT_00a15d30,0,1,0xffffffffffffffff,5,2,8);
          *(undefined4 *)(param_1 + 0x94) = 0;
          *(undefined1 *)(param_1 + 0x20) = 5;
          *(ushort *)(param_1 + 0x34) = *(ushort *)(param_1 + 0x34) & 0xefff | 0x41;
        }
      }
    }
    else {
      *(undefined4 *)(param_1 + 0x94) = 0;
      *(undefined1 *)(param_1 + 0x20) = 5;
      *(ushort *)(param_1 + 0x34) = *(ushort *)(param_1 + 0x34) & 0xefff | 0x41;
    }
  }
  return;
}


// 0x03bc760 (0x5cc bytes)
/* Moby 568 */

void UpdateMoby_568(MobyInstance *moby)

{
  float fVar1;
  u8 uVar2;
  float fVar3;
  float fVar4;
  MobyModeBit MVar5;
  void *pvVar6;
  f32 fVar7;
  uint uVar8;
  uint uVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  int iVar16;
  double dVar17;
  double dVar18;
  double dVar19;
  double dVar20;
  double dVar21;
  float fVar22;
  GPiece<64> auStack_a0;
  MobyInstance *local_60;
  
  pvVar6 = moby->pVar;
  M568_003bc4d0();
  uVar2 = moby->state;
  if (uVar2 == '\x04') {
    iVar16 = FUN_0048c188(moby,(int)pvVar6 + 0x110);
    if (iVar16 != 0) {
      moby->state = '\x03';
      *(undefined2 *)((int)pvVar6 + 200) = 0;
    }
  }
  else if (uVar2 == '\x03') {
    if (((moby->animationId == '\x01') && ((moby->field43_0x70 & 2U) != 0)) &&
       (moby->animationId != '\x02')) {
      MB_SetAnimation(moby,2,0,(int)(animationSpeed * 12.5));
    }
    if (moby->enabled != '\0') {
      dVar21 = 6.0;
      iVar16 = MB_getTarget(0x4018000000000000,moby,&DAT_003bc720,auStack_a0);
      if ((iVar16 != 2) && (local_60 != (MobyInstance *)0x0)) {
        dVar19 = (double)(moby->pos).y;
        dVar18 = (double)(local_60->pos).y;
        dVar20 = (double)(moby->pos).x;
        fVar3 = (float)(dVar19 - dVar18);
        dVar17 = (double)(local_60->pos).x;
        fVar4 = (float)(dVar20 - dVar17);
        if ((double)SQRT(fVar4 * fVar4 + fVar3 * fVar3) < dVar21) {
          fVar4 = (float)(dVar18 - dVar19);
          fVar1 = (float)(dVar17 - dVar20);
          dVar17 = (double)g_FrameTimeSq;
          dVar18 = (double)(moby->pos).z;
          fVar3 = (float)(dVar17 * dVar21);
          dVar21 = (double)(g_FrameTime * 3.0);
          fVar22 = SQRT(fVar1 * fVar1 + fVar4 * fVar4);
          fVar10 = fVar4;
          fVar11 = fVar1;
          if ((fVar3 < fVar22) && (fVar10 = 0.0, fVar11 = fVar10, fVar22 != 0.0)) {
            fVar3 = fVar3 / fVar22;
            fVar10 = fVar4 * fVar3;
            fVar11 = fVar1 * fVar3;
          }
          fVar10 = *(float *)((int)pvVar6 + 0x44) + fVar10;
          fVar11 = *(float *)((int)pvVar6 + 0x40) + fVar11;
          *(float *)((int)pvVar6 + 0x40) = fVar11;
          *(float *)((int)pvVar6 + 0x44) = fVar10;
          *(float *)((int)pvVar6 + 0x48) =
               (float)(dVar17 * -10.0 + (double)*(float *)((int)pvVar6 + 0x48));
          dVar17 = (double)SQRT(fVar11 * fVar11 + fVar10 * fVar10);
          if (dVar21 < dVar17) {
            fVar11 = fVar11 * (float)(dVar21 / dVar17);
            fVar10 = fVar10 * (float)(dVar21 / dVar17);
            fVar3 = 0.0;
            if (0.0 - dVar17 < 0.0) {
              fVar3 = fVar11;
            }
            fVar4 = 0.0;
            if (0.0 - dVar17 < 0.0) {
              fVar4 = fVar10;
            }
            if (dVar17 - 0.0 < 0.0) {
              fVar3 = fVar11;
            }
            if (dVar17 - 0.0 < 0.0) {
              fVar4 = fVar10;
            }
            *(float *)((int)pvVar6 + 0x40) = fVar3;
            *(float *)((int)pvVar6 + 0x44) = fVar4;
          }
          dVar17 = 0.0;
          MB_MoveAndCollide(0,0x3fe0000000000000,0,moby,(int)pvVar6 + 0x40);
          *(float *)((int)pvVar6 + 0x40) = (float)((double)(moby->pos).x - dVar20);
          *(float *)((int)pvVar6 + 0x44) = (float)((double)(moby->pos).y - dVar19);
          fVar3 = (float)((double)(moby->pos).z - dVar18);
          dVar18 = (double)fVar3;
          *(float *)((int)pvVar6 + 0x48) = fVar3;
          *(f32 *)((int)pvVar6 + 0x4c) = (moby->pos).w;
          if (dVar18 <= dVar17) {
            if (dVar18 < -dVar21) {
              *(float *)((int)pvVar6 + 0x48) = (float)-dVar21;
            }
          }
          else {
            *(undefined4 *)((int)pvVar6 + 0x48) = 0;
          }
          if ((local_60 != g_heroMobyPtr) &&
             (fVar3 = (local_60->pos).y - (moby->pos).y, fVar4 = (local_60->pos).x - (moby->pos).x,
             fVar1 = (local_60->pos).z - (moby->pos).z,
             SQRT(fVar1 * fVar1 + fVar4 * fVar4 + fVar3 * fVar3) < 2.0)) {
            *(undefined4 *)((int)pvVar6 + 0x19c) = 1;
          }
        }
      }
    }
  }
  else if (uVar2 == '\x02') {
    fVar22 = Delt(0.0,DAT_00845d40 * 2.0 * g_FrameTimeSq,(float *)((int)pvVar6 + 0x188));
    fVar3 = (moby->rotation).z;
    fVar4 = fVar3 + 1.5707963;
    fVar1 = 3.1415925 - fVar3;
    if (fVar3 - (3.1415925 - fVar3) < 0.0) {
      fVar1 = fVar3;
    }
    fVar10 = 3.1415925 - fVar4;
    if (fVar4 - (3.1415925 - fVar4) < 0.0) {
      fVar10 = fVar4;
    }
    fVar11 = -3.1415925 - fVar3;
    if ((-3.1415925 - fVar3) - fVar1 < 0.0) {
      fVar11 = fVar1;
    }
    fVar3 = -3.1415925 - fVar4;
    if ((-3.1415925 - fVar4) - fVar10 < 0.0) {
      fVar3 = fVar10;
    }
    fVar1 = fVar11 * fVar11;
    fVar10 = fVar3 * fVar3;
    fVar14 = fVar1 * fVar1 * fVar11;
    fVar4 = (moby->pos).x;
    uVar2 = moby->animationId;
    (moby->rotation).y = (moby->rotation).y + fVar22;
    fVar12 = fVar10 * fVar10 * fVar3;
    fVar15 = fVar1 * fVar14;
    fVar13 = fVar10 * fVar12;
    (moby->pos).y =
         (fVar1 * fVar15 * 2.601887e-06 +
         fVar15 * -0.0001980741 + fVar14 * 0.0083330255 + fVar1 * fVar11 * -0.16666657 + fVar11) *
         fVar22 + (moby->pos).y;
    (moby->pos).x =
         (fVar10 * fVar13 * 2.601887e-06 +
         fVar13 * -0.0001980741 + fVar12 * 0.0083330255 + fVar10 * fVar3 * -0.16666657 + fVar3) *
         fVar22 + fVar4;
    if (*(int *)((int)pvVar6 + 0x188) == 0) {
      if (uVar2 != '\x01') {
        MB_SetAnimation(moby,1,0,(int)(animationSpeed * 12.5));
      }
      moby->state = '\x03';
      moby->damage = -1;
    }
  }
  else if (uVar2 == '\x01') {
    (moby->pos).x = (moby->pos).x + *(float *)((int)pvVar6 + 0x180);
    (moby->pos).y = (moby->pos).y + *(float *)((int)pvVar6 + 0x184);
    (moby->pos).z = (moby->pos).z + *(float *)((int)pvVar6 + 0x188);
    uVar8 = (int)*(uint *)((int)pvVar6 + 0x178) >> 0x1f;
    *(float *)((int)pvVar6 + 0x188) = -(g_FrameTimeSq * 10.0 - *(float *)((int)pvVar6 + 0x188));
    fVar7 = (moby->pos).z;
    uVar9 = (int)fVar7 >> 0x1f;
    if ((int)((uVar9 >> 1 ^ (uint)fVar7) - uVar9) <
        (int)((uVar8 >> 1 ^ *(uint *)((int)pvVar6 + 0x178)) - uVar8)) {
      (moby->pos).z = *(f32 *)((int)pvVar6 + 0x178);
      moby->state = '\x02';
      *(float *)((int)pvVar6 + 0x188) = -(DAT_00845d40 * 2.0 * g_FrameTime);
    }
  }
  else if (uVar2 == '\0') {
    MVar5 = moby->modeBits;
    moby->collision = (ushort *)0x0;
    *(undefined **)((int)pvVar6 + 0xd0) = &DAT_00845d34;
    *(undefined4 *)((int)pvVar6 + 0x30) = 0x3d4ccccd;
    moby->modeBits =
         MVar5 & (MIRROR|CAN_BE_DAMAGED|HIDE_BACKFACES|DISABLE_Z_WRITE|DRAW_SHADOW|
                  DRAW_TRANSPARENT_WEIRD|LOCK_ROTATION|NO_DRAW|UNK_40|HAS_SPECIAL_VARS|HAS_GLOW|
                  TRANSPARENT|NO_POST_UPDATE|NO_UPDATE|DISABLED) | (UNK_40|DISABLED);
    moby->state = '\x05';
  }
  return;
}


