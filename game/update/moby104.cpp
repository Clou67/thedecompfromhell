// game/update/moby104.cpp -- reconstructed from NPEA00385 EBOOT
// STATUS: NOT STARTED (raw Ghidra output)
// 4 functions, 0x1951c0-0x195a3c
// shared update function UpdateMoby_{104_106_1129}; registered for oClasses 104, 106, 1129
#include "game/update/moby104.h"
#include "game/collproc.h"
#include "game/debug.h"
#include "game/hero.h"
#include "game/map.h"
#include "game/mobyfunc.h"
#include "game/mobyutil.h"
#include "game/partupd.h"
#include "game/sound.h"
#include "idol/fastfunc.h"

// 0x01951c0 (0x14 bytes)
void M1129_001951c0(void)

{
  DAT_007401c8 = 0x10000;
  return;
}


// shared update function, registered for oClasses 104, 106, 1129
// 0x01951e0 (0x6b0 bytes)
/* Moby 104
   Moby 106
   Moby 1129 */

void UpdateMoby_104(MobyInstance *moby)

{
  u8 uVar1;
  byte bVar2;
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
  float fVar14;
  float fVar15;
  void *pvVar16;
  int iVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  Vec4 local_80;
  f32 local_70;
  f32 local_6c;
  f32 local_68;
  f32 local_64;
  
  fVar3 = (moby->pos).x;
  fVar4 = (moby->pos).y;
  fVar5 = (moby->pos).z;
  local_80.x = -fVar3;
  pvVar16 = moby->pVar;
  local_80.w = (moby->pos).w;
  local_80.y = -fVar4;
  local_70 = (moby->rotation).x;
  local_80.z = -fVar5;
  local_6c = (moby->rotation).y;
  local_68 = (moby->rotation).z;
  local_64 = (moby->rotation).w;
  if ((moby->levelFlagIdx != 0xff) && (g_LevelFlags[Level][(byte)moby->levelFlagIdx] == -1)) {
    *(undefined4 *)((int)pvVar16 + 0xb0) = 0xffffffff;
    fVar3 = (moby->pos).x;
    fVar4 = (moby->pos).y;
    fVar5 = (moby->pos).z;
  }
  uVar1 = moby->state;
  if (uVar1 == '\x04') {
    if ((*(int *)((int)pvVar16 + 0xb0) != -1) &&
       (g_MobyInstance + *(int *)((int)pvVar16 + 0xb0) != (MobyInstance *)0x0)) {
      bVar2 = g_MobyInstance[*(int *)((int)pvVar16 + 0xb0)].state;
      if ((bVar2 != 0xfd && bVar2 != 0xfe) && ((uint)bVar2 != *(uint *)((int)pvVar16 + 0xb4))) {
        fVar6 = *(float *)((int)pvVar16 + 0xc0);
        fVar7 = *(float *)((int)pvVar16 + 0xbc);
        fVar8 = *(float *)((int)pvVar16 + 0xc4);
        fVar9 = 0.0;
        fVar10 = (moby->transform).v0.y;
        fVar21 = SQRT(fVar8 * fVar8 + fVar7 * fVar7 + fVar6 * fVar6);
        fVar11 = (moby->transform).v0.z;
        fVar12 = (moby->transform).v2.y;
        fVar13 = (moby->transform).v2.z;
        fVar14 = (moby->transform).v1.y;
        fVar15 = (moby->transform).v1.z;
        fVar20 = -(*(float *)((int)pvVar16 + 0xcc) * g_FrameTime) / fVar21;
        fVar18 = fVar9;
        if (0.0 - fVar21 < 0.0) {
          fVar18 = fVar20 * fVar7;
        }
        fVar19 = fVar9;
        if (0.0 - fVar21 < 0.0) {
          fVar19 = fVar20 * fVar8;
        }
        if (0.0 - fVar21 < 0.0) {
          fVar9 = fVar20 * fVar6;
        }
        if (fVar21 - 0.0 < 0.0) {
          fVar18 = fVar20 * fVar7;
        }
        if (fVar21 - 0.0 < 0.0) {
          fVar19 = fVar20 * fVar8;
        }
        if (fVar21 - 0.0 < 0.0) {
          fVar9 = fVar20 * fVar6;
        }
        (moby->pos).x =
             (moby->transform).v1.x * fVar9 +
             (moby->transform).v2.x * fVar19 + (moby->transform).v0.x * fVar18 + fVar3;
        (moby->pos).y = fVar14 * fVar9 + fVar12 * fVar19 + fVar10 * fVar18 + fVar4;
        (moby->pos).z = fVar15 * fVar9 + fVar13 * fVar19 + fVar11 * fVar18 + fVar5;
        fVar3 = *(float *)((int)pvVar16 + 0xcc) * g_FrameTime +
                *(float *)((int)pvVar16 + 0xac);
        *(float *)((int)pvVar16 + 0xac) = fVar3;
        if (fVar21 < fVar3) {
          (moby->pos).x = *(f32 *)((int)pvVar16 + 0xa0);
          iVar17 = *(int *)((int)pvVar16 + 0xd0);
          (moby->pos).y = *(f32 *)((int)pvVar16 + 0xa4);
          (moby->pos).z = *(f32 *)((int)pvVar16 + 0xa8);
          (moby->pos).w = *(f32 *)((int)pvVar16 + 0xac);
          if (iVar17 != -1) {
            PlayMobySound(*(int *)((int)pvVar16 + 0xd4),0,moby);
          }
          if (*(int *)((int)pvVar16 + 0xd8) != -1) {
            (&DAT_00a20828)[*(int *)((int)pvVar16 + 0xd8)] = 0;
          }
          moby->state = '\x01';
        }
        goto LAB_00195808;
      }
    }
    if (*(int *)((int)pvVar16 + 0xd0) != -1) {
      PlayMobySound(*(int *)((int)pvVar16 + 0xd0),0,moby);
    }
    moby->state = '\x02';
  }
  else if (uVar1 == '\x03') {
    if ((*(int *)((int)pvVar16 + 0xb0) != -1) &&
       (g_MobyInstance + *(int *)((int)pvVar16 + 0xb0) != (MobyInstance *)0x0)) {
      bVar2 = g_MobyInstance[*(int *)((int)pvVar16 + 0xb0)].state;
      if ((bVar2 != 0xfd && bVar2 != 0xfe) && ((uint)bVar2 == *(uint *)((int)pvVar16 + 0xb8))) {
        *(undefined4 *)((int)pvVar16 + 0xac) = 0;
        if (*(int *)((int)pvVar16 + 0xd0) != -1) {
          PlayMobySound(*(int *)((int)pvVar16 + 0xd0),0,moby);
        }
        moby->state = '\x04';
      }
    }
  }
  else if (uVar1 == '\x02') {
    if ((*(int *)((int)pvVar16 + 0xb0) != -1) &&
       (g_MobyInstance + *(int *)((int)pvVar16 + 0xb0) != (MobyInstance *)0x0)) {
      bVar2 = g_MobyInstance[*(int *)((int)pvVar16 + 0xb0)].state;
      if ((bVar2 != 0xfd && bVar2 != 0xfe) && ((uint)bVar2 == *(uint *)((int)pvVar16 + 0xb8))) {
        if (*(int *)((int)pvVar16 + 0xd0) != -1) {
          PlayMobySound(*(int *)((int)pvVar16 + 0xd0),0,moby);
        }
        moby->state = '\x04';
        goto LAB_00195808;
      }
    }
    fVar6 = *(float *)((int)pvVar16 + 0xc0);
    fVar7 = *(float *)((int)pvVar16 + 0xbc);
    fVar8 = *(float *)((int)pvVar16 + 0xc4);
    fVar11 = (moby->transform).v2.y * fVar8 +
             (moby->transform).v0.y * fVar7 + (moby->transform).v1.y * fVar6;
    fVar10 = (moby->transform).v2.x * fVar8 +
             (moby->transform).v0.x * fVar7 + (moby->transform).v1.x * fVar6;
    fVar9 = (moby->transform).v2.z * fVar8 +
            (moby->transform).v0.z * fVar7 + (moby->transform).v1.z * fVar6;
    fVar6 = 0.0;
    fVar12 = SQRT(fVar9 * fVar9 + fVar10 * fVar10 + fVar11 * fVar11);
    fVar8 = (*(float *)((int)pvVar16 + 200) * g_FrameTime) / fVar12;
    fVar7 = fVar6;
    if (0.0 - fVar12 < 0.0) {
      fVar7 = fVar9 * fVar8;
    }
    fVar13 = fVar6;
    if (0.0 - fVar12 < 0.0) {
      fVar13 = fVar11 * fVar8;
    }
    if (0.0 - fVar12 < 0.0) {
      fVar6 = fVar10 * fVar8;
    }
    if (fVar12 - 0.0 < 0.0) {
      fVar7 = fVar9 * fVar8;
    }
    if (fVar12 - 0.0 < 0.0) {
      fVar13 = fVar11 * fVar8;
    }
    if (fVar12 - 0.0 < 0.0) {
      fVar6 = fVar10 * fVar8;
    }
    (moby->pos).z = fVar5 + fVar7;
    (moby->pos).y = fVar4 + fVar13;
    (moby->pos).x = fVar3 + fVar6;
    fVar3 = -(*(float *)((int)pvVar16 + 200) * g_FrameTime -
             *(float *)((int)pvVar16 + 0xac));
    *(float *)((int)pvVar16 + 0xac) = fVar3;
    if (fVar3 < 0.0) {
      iVar17 = *(int *)((int)pvVar16 + 0xd8);
      (moby->pos).x = *(float *)((int)pvVar16 + 0xa0) + fVar10;
      (moby->pos).y = *(float *)((int)pvVar16 + 0xa4) + fVar11;
      (moby->pos).z = *(float *)((int)pvVar16 + 0xa8) + fVar9;
      (moby->pos).w = *(f32 *)((int)pvVar16 + 0xac);
      *(undefined4 *)((int)pvVar16 + 0xac) = 0;
      if (iVar17 != -1) {
        (&DAT_00a20828)[iVar17] = 1;
      }
      moby->state = '\x03';
      if (*(int *)((int)pvVar16 + 0xd4) != -1) {
        PlayMobySound(*(int *)((int)pvVar16 + 0xd0),0,moby);
      }
    }
  }
  else if (uVar1 == '\x01') {
    if ((*(int *)((int)pvVar16 + 0xb0) != -1) &&
       (g_MobyInstance + *(int *)((int)pvVar16 + 0xb0) != (MobyInstance *)0x0)) {
      bVar2 = g_MobyInstance[*(int *)((int)pvVar16 + 0xb0)].state;
      if ((bVar2 != 0xfd && bVar2 != 0xfe) && ((uint)bVar2 != *(uint *)((int)pvVar16 + 0xb4)))
      goto LAB_00195808;
    }
    *(float *)((int)pvVar16 + 0xac) =
         SQRT(*(float *)((int)pvVar16 + 0xc4) * *(float *)((int)pvVar16 + 0xc4) +
              *(float *)((int)pvVar16 + 0xbc) * *(float *)((int)pvVar16 + 0xbc) +
              *(float *)((int)pvVar16 + 0xc0) * *(float *)((int)pvVar16 + 0xc0));
    if (*(int *)((int)pvVar16 + 0xd0) != -1) {
      PlayMobySound(*(int *)((int)pvVar16 + 0xd0),0,moby);
    }
    moby->state = '\x02';
  }
  else if (uVar1 == '\0') {
    *(float *)((int)pvVar16 + 0xa0) = fVar3;
    *(f32 *)((int)pvVar16 + 0xa4) = (moby->pos).y;
    *(f32 *)((int)pvVar16 + 0xa8) = (moby->pos).z;
    *(f32 *)((int)pvVar16 + 0xac) = (moby->pos).w;
    if (*(int *)((int)pvVar16 + 0xd8) != -1) {
      (&DAT_00a20828)[*(int *)((int)pvVar16 + 0xd8)] = 0;
    }
    moby->state = '\x01';
    *(undefined4 *)((int)pvVar16 + 0xac) = 0;
  }
LAB_00195808:
  local_80.x = local_80.x + (moby->pos).x;
  local_80.y = local_80.y + (moby->pos).y;
  local_80.z = local_80.z + (moby->pos).z;
  MB_GetOrientation
            ((MobyInstance *)((int)pvVar16 + 0x60),&local_80,ZEXT48(&stack0x00000000) - 0x70,
             (longlong)(int)moby + 0x40);
  return;
}


// 0x0195890 (0x14 bytes)
void M1129_00195890(void)

{
  DAT_00740238 = 0x10000;
  return;
}


// 0x01958b0 (0x18c bytes)
void M1129_001958b0(longlong param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int iVar6;
  undefined8 uVar5;
  int iVar7;
  undefined8 uVar8;
  double dVar9;
  double dVar10;
  GPiece<24> auStack_50;
  
  iVar7 = 0;
  dVar9 = 0.0;
  dVar10 = 1.0;
  do {
    MB_randSphere
              ((double)(DAT_0074026c * g_FrameTime),
               (double)(DAT_00740270 * g_FrameTime),auStack_50);
    uVar8 = MB_randRangeFloat(DAT_0074028c,DAT_00740290);
    iVar6 = MB_randInt(2);
    uVar4 = DAT_00740288;
    uVar3 = DAT_00740284;
    uVar2 = DAT_00740280;
    uVar1 = DAT_0074027c;
    if (iVar6 == 0) {
      MB_randRangeFloat((float)dVar9,(float)dVar10);
      uVar5 = FastLerpColor(uVar3,uVar4);
    }
    else {
      MB_randRangeFloat((float)dVar9,(float)dVar10);
      uVar5 = FastLerpColor(uVar1,uVar2);
    }
    MB_randInt(0xff);
    SpawnPart_60(uVar8,param_1 + 0x10,auStack_50,uVar5);
    iVar7 = iVar7 + 1;
  } while (iVar7 < 0x28);
  return;
}


