// game/update/moby258.cpp -- reconstructed from NPEA00385 EBOOT
// STATUS: NOT STARTED (raw Ghidra output)
// 4 functions, 0x31d370-0x31d8c4
#include "game/update/moby258.h"
#include "game/camera.h"
#include "game/hero.h"
#include "game/mobyfunc.h"
#include "game/mobyutil.h"

// 0x031d370 (0x14 bytes)
void M258_0031d370(void)

{
  DAT_007fff4c = 0x10000;
  return;
}


// 0x031d388 (0x258 bytes)
void M258_0031d388(longlong param_1,int param_2,char param_3)

{
  short sVar1;
  int iVar2;
  
  iVar2 = (int)&(g_MobyInstance->bSphere).x + (int)(param_1 << 8);
  if (iVar2 == 0) {
    return;
  }
  if (param_3 != '\0') {
    if (*(char *)(param_2 + 0x7c) < '\x01') {
      if (*(char *)(param_2 + 0x7c) < '\0') {
        *(ushort *)(iVar2 + 0x34) = *(ushort *)(iVar2 + 0x34) | 2;
      }
    }
    else {
      *(ushort *)(iVar2 + 0x34) = *(ushort *)(iVar2 + 0x34) & 0xfffd;
    }
    if (((*(char *)(param_2 + 0x7d) < '\x01') ||
        (sVar1 = *(short *)(iVar2 + 0xa6), sVar1 == 0x3ae || sVar1 == 0x386)) ||
       ((sVar1 == 0x4ef || (sVar1 == 0x571)))) {
      if ((((*(char *)(param_2 + 0x7d) < '\0') &&
           (sVar1 = *(short *)(iVar2 + 0xa6), sVar1 != 0x3ae && sVar1 != 0x386)) && (sVar1 != 0x4ef)
          ) && (sVar1 != 0x571)) {
        *(undefined1 *)(iVar2 + 0x31) = 0;
        *(ushort *)(iVar2 + 0x34) = *(ushort *)(iVar2 + 0x34) | 1;
      }
    }
    else {
      *(undefined1 *)(iVar2 + 0x31) = 1;
      *(ushort *)(iVar2 + 0x34) = *(ushort *)(iVar2 + 0x34) & 0xfffe;
    }
    if ((*(char *)(param_2 + 0x7f) < '\x01') || (*(int *)(iVar2 + 0x24) == 0)) {
      if ((*(char *)(param_2 + 0x7f) < '\0') && (*(int *)(iVar2 + 0x24) != 0)) {
        *(undefined4 *)(iVar2 + 0x94) = 0;
      }
    }
    else {
      *(undefined4 *)(iVar2 + 0x94) = *(undefined4 *)(*(int *)(iVar2 + 0x24) + 0x10);
    }
    return;
  }
  if (((*(char *)(param_2 + 0x7c) < '\x01') ||
      (sVar1 = *(short *)(iVar2 + 0xa6), sVar1 == 0x3ae || sVar1 == 0x386)) || (sVar1 == 0x4ef)) {
    if (((*(char *)(param_2 + 0x7c) < '\0') &&
        (sVar1 = *(short *)(iVar2 + 0xa6), sVar1 != 0x3ae && sVar1 != 0x386)) && (sVar1 != 0x4ef)) {
      *(ushort *)(iVar2 + 0x34) = *(ushort *)(iVar2 + 0x34) & 0xfffd;
    }
  }
  else {
    *(ushort *)(iVar2 + 0x34) = *(ushort *)(iVar2 + 0x34) | 2;
  }
  if (((*(char *)(param_2 + 0x7d) < '\x01') ||
      (sVar1 = *(short *)(iVar2 + 0xa6), sVar1 == 0x3ae || sVar1 == 0x386)) ||
     ((sVar1 == 0x4ef || (sVar1 == 0x571)))) {
    if ((((*(char *)(param_2 + 0x7d) < '\0') &&
         (sVar1 = *(short *)(iVar2 + 0xa6), sVar1 != 0x3ae && sVar1 != 0x386)) && (sVar1 != 0x4ef))
       && (sVar1 != 0x571)) {
      *(undefined1 *)(iVar2 + 0x31) = 1;
      *(ushort *)(iVar2 + 0x34) = *(ushort *)(iVar2 + 0x34) & 0xfffe;
    }
  }
  else {
    *(undefined1 *)(iVar2 + 0x31) = 0;
    *(ushort *)(iVar2 + 0x34) = *(ushort *)(iVar2 + 0x34) | 1;
  }
  if ('\0' < *(char *)(param_2 + 0x7f)) {
    *(undefined4 *)(iVar2 + 0x94) = 0;
    return;
  }
  if (-1 < *(char *)(param_2 + 0x7f)) {
    return;
  }
  *(undefined4 *)(iVar2 + 0x94) = *(undefined4 *)(*(int *)(iVar2 + 0x24) + 0x10);
  return;
}


// 0x031d5e0 (0x80 bytes)
void M258_0031d5e0
               (undefined8 param_1,undefined8 param_2,longlong param_3,undefined1 param_4)

{
  ushort uVar1;
  ushort *puVar2;
  
  puVar2 = *(ushort **)((int)&g_MobyGroups + (int)(param_3 << 2));
  if (puVar2 != (ushort *)0x0) {
    do {
      M258_0031d388(*puVar2 & 0x7fff,param_2,param_4);
      uVar1 = *puVar2;
      puVar2 = puVar2 + 1;
    } while (-1 < (short)uVar1);
  }
  return;
}


// 0x031d660 (0x264 bytes)
/* Moby 258 */

void UpdateMoby_258(MobyInstance *moby)

{
  ushort uVar1;
  int *piVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  byte bVar6;
  int iVar7;
  int iVar8;
  ushort *puVar9;
  int *piVar10;
  undefined4 uVar11;
  Vec4 local_50;
  
  piVar2 = (int *)moby->pVar;
  uVar11 = 0;
  moby->updateDistance = -1;
  local_50.x = g_heroPosition.x;
  local_50.y = g_heroPosition.y;
  local_50.z = g_heroPosition.z;
  local_50.w = g_heroPosition.w;
  if (*(char *)((int)piVar2 + 0x7e) != '\0') {
    local_50.x = GameCamera.posX;
    local_50.y = GameCamera.posY;
    local_50.z = GameCamera.posZ;
    local_50.w = (float)GameCamera.field8_0x14c;
  }
  if (((0 < piVar2[1]) &&
      (fVar4 = (moby->pos).y - local_50.y, fVar5 = (moby->pos).z - local_50.z,
      fVar3 = (moby->pos).x - local_50.x,
      SQRT(fVar5 * fVar5 + fVar3 * fVar3 + fVar4 * fVar4) < (float)piVar2[1])) ||
     ((*piVar2 != -1 &&
      (iVar7 = PointInsideComplexPoly
                         (&local_50,(Vec4 *)Splines[*piVar2]->points,Splines[*piVar2]->cnt),
      iVar7 != 0)))) {
LAB_0031d7c8:
    uVar11 = 1;
    if (moby->setByGroup == '\0') goto LAB_0031d7e4;
  }
  else {
    iVar7 = 0;
    piVar10 = piVar2;
    do {
      if ((piVar10[2] != -1) &&
         (iVar8 = MB_IsPntInCuboid(&local_50,(longlong)piVar10[2]), iVar8 != 0))
      goto LAB_0031d7c8;
      iVar7 = iVar7 + 1;
      piVar10 = piVar10 + 1;
    } while (iVar7 < 6);
    if (moby->setByGroup != '\0') goto LAB_0031d7e4;
  }
  if (moby->state != '\0') {
    return;
  }
LAB_0031d7e4:
  bVar6 = (byte)((ulonglong)(LZCOUNT(uVar11) << 0x20) >> 0x25) ^ 1;
  iVar7 = 0;
  moby->setByGroup = bVar6;
  moby->state = bVar6 + 1;
  piVar10 = piVar2;
  do {
    if ((piVar10[8] != -1) &&
       (puVar9 = (ushort *)(&g_MobyGroups)[piVar10[8]], puVar9 != (ushort *)0x0)) {
      do {
        M258_0031d388(*puVar9 & 0x7fff,piVar2,uVar11);
        uVar1 = *puVar9;
        puVar9 = puVar9 + 1;
      } while (-1 < (short)uVar1);
    }
    iVar7 = iVar7 + 1;
    piVar10 = piVar10 + 1;
  } while (iVar7 < 0xc);
  iVar7 = 0;
  piVar10 = piVar2;
  do {
    if (piVar10[0x14] != -1) {
      M258_0031d388(piVar10[0x14],piVar2,uVar11);
    }
    iVar7 = iVar7 + 1;
    piVar10 = piVar10 + 1;
  } while (iVar7 < 0xb);
  return;
}


