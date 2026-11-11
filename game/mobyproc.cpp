// game/mobyproc.cpp -- reconstructed from NPEA00385 EBOOT
// STATUS: NOT STARTED (raw Ghidra output)
// 39 functions, 0xf1e84-0xfbf40
#include <math.h>
#include <stdio.h>
#include <string.h>
#include "game/mobyproc.h"
#include "game/bloaders.h"
#include "game/camera.h"
#include "game/collproc.h"
#include "game/draw.h"
#include "game/freeze.h"
#include "game/hero.h"
#include "game/hud.h"
#include "game/lights.h"
#include "game/loaders.h"
#include "game/mobyfunc.h"
#include "game/mobyutil.h"
#include "game/path.h"
#include "game/sound.h"
#include "game/space.h"
#include "game/update.h"
#include "game/vendor.h"
#include "idol/fastfunc.h"
#include "idol/idol_draw.h"
#include "idol/mUnk.h"
#include "idol/mathfunc.h"
#include "idol/shrubfunc.h"

// 0x00f1e84 (0x14 bytes)
void SECTION_HEADER_MOBYPROC(void)

{
  DAT_0072910c = 0x10000;
  return;
}


// 0x00f1ea0 (0x28 bytes)
/* [p2_mobyutil] packs r,g,b,a into moby+0x38 (DL 'lights' u64)
   [p2_mobyutil] packs light indices/values into moby+0x38 (DL g_MobyInstance.lights u64) */

void MB_SetLights
               (int param_1,longlong param_2,ulonglong param_3,longlong param_4,longlong param_5)

{
  *(ulonglong *)(param_1 + 0x38) =
       (longlong)(int)(param_4 << 8) | param_3 | param_2 << 0x20 | (longlong)(int)(param_5 << 0x10);
  return;
}


// 0x00f1ec8 (0x28 bytes)
void SetColorOfMoby
               (MobyInstance *param_1,longlong param_2,longlong param_3,longlong param_4)

{
  ulonglong uVar1;
  
  uVar1.piece<0,4>() = param_1->color;
  uVar1.piece<4,4>() = param_1->light;
  uVar1 = uVar1 & 0xffffffff | param_2 << 0x20 | param_3 << 0x28 | param_4 << 0x30;
  param_1->color = (int)(uVar1 >> 0x20);
  param_1->light = (int)uVar1;
  return;
}


// 0x00f1ef0 (0x2c bytes)
/* [p2_mobyutil] unpacks r,g,b from moby+0x38 */

void MB_GetLights(int param_1,uint *param_2,uint *param_3,uint *param_4)

{
  uint uVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + 0x38);
  uVar1 = (uint)((ulonglong)uVar2 >> 0x20);
  *param_2 = uVar1 & 0xff;
  *param_3 = uVar1 >> 8 & 0xff;
  *param_4 = (ushort)((ulonglong)uVar2 >> 0x30) & 0xff;
  return;
}


// 0x00f1f28 (0xe0 bytes)
/* [p2_mobyutil] returns DirectionalLights[idx].direction1 (or blend) from moby lights */

void MB_GetLightDirection(int param_1,float *param_2)

{
  float fVar1;
  float fVar2;
  uint uVar3;
  uint uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  
  uVar6 = *(ulonglong *)(param_1 + 0x38);
  uVar5 = uVar6 >> 0x10 & 0xffff;
  uVar3 = (uint)(uVar6 >> 8) & 0xff;
  uVar4 = (uint)uVar6 & 0xff;
  if ((int)uVar5 == 0) {
    *param_2 = DirectionalLights[uVar4].direction1.x;
    param_2[1] = DirectionalLights[uVar4].direction1.y;
    param_2[2] = DirectionalLights[uVar4].direction1.z;
    param_2[3] = DirectionalLights[uVar4].direction1.w;
  }
  else {
    fVar1 = (float)uVar5 * 0.003921569;
    fVar2 = 1.0 - fVar1;
    *param_2 = DirectionalLights[uVar4].direction1.x * fVar2 +
               DirectionalLights[uVar3].direction1.x * fVar1;
    param_2[1] = DirectionalLights[uVar4].direction1.y * fVar2 +
                 DirectionalLights[uVar3].direction1.y * fVar1;
    param_2[2] = DirectionalLights[uVar4].direction1.z * fVar2 +
                 DirectionalLights[uVar3].direction1.z * fVar1;
  }
  return;
}


// 0x00f2010 (0xdc bytes)
void MB_GetLightColor(int param_1,float *param_2)

{
  float fVar1;
  float fVar2;
  uint uVar3;
  uint uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  
  uVar6 = *(ulonglong *)(param_1 + 0x38);
  uVar5 = uVar6 >> 0x10 & 0xffff;
  uVar3 = (uint)uVar6 & 0xff;
  uVar4 = (uint)(uVar6 >> 8) & 0xff;
  if ((int)uVar5 == 0) {
    *param_2 = DirectionalLights[uVar3].color1.x;
    param_2[1] = DirectionalLights[uVar3].color1.y;
    param_2[2] = DirectionalLights[uVar3].color1.z;
    param_2[3] = DirectionalLights[uVar3].color1.w;
  }
  else {
    fVar1 = (float)uVar5 * 0.003921569;
    fVar2 = 1.0 - fVar1;
    *param_2 = DirectionalLights[uVar3].color1.x * fVar2 + DirectionalLights[uVar4].color1.x * fVar1
    ;
    param_2[1] = DirectionalLights[uVar3].color1.y * fVar2 +
                 DirectionalLights[uVar4].color1.y * fVar1;
    param_2[2] = DirectionalLights[uVar3].color1.z * fVar2 +
                 DirectionalLights[uVar4].color1.z * fVar1;
  }
  return;
}


// 0x00f20f0 (0x60 bytes)
/* [p2_mobyutil] (dist(a,b) - (ra+rb)) / 1024 between two bspheres */

double MB_BSphereGap(float *param_1,float *param_2)

{
  return (double)((SQRT((*param_1 - *param_2) * (*param_1 - *param_2) +
                        (param_1[1] - param_2[1]) * (param_1[1] - param_2[1]) +
                        (param_1[2] - param_2[2]) * (param_1[2] - param_2[2])) -
                  (param_1[3] + param_2[3])) * 0.0009765625);
}


// 0x00f2150 (0x68 bytes)
void MobyGrid_Free(int start,int count)

{
  uint *puVar1;
  int iVar2;
  uint uVar3;
  
  iVar2 = count + start;
  if (start < iVar2) {
    do {
      uVar3 = start + ((start >> 5) + (uint)(start < 0 && (start & 0x1fU) != 0)) * -0x20;
      puVar1 = (uint *)((int)&MobyGridAlloc + (int)((longlong)(start >> 5) << 2));
      start = start + 1;
      *puVar1 = (1 << (uVar3 & 0x3f) ^ 0xffffffffU) & *puVar1;
    } while (start < iVar2);
  }
  return;
}


// 0x00f21b8 (0x6c bytes)
int MobyGrid_Alloc(int count)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  uint *puVar5;
  
  iVar4 = 0;
  puVar5 = &MobyGridAlloc;
  do {
    uVar1 = *puVar5;
    if (uVar1 != 0xffffffff) {
      for (uVar3 = 0; uVar2 = (1 << (count & 0x3fU)) + -1 << (uVar3 & 0x3f), (uVar1 & uVar2) != 0;
          uVar3 = count + uVar3) {
      }
      if (uVar3 != 0x20) {
        *puVar5 = uVar1 | uVar2;
        return iVar4 + uVar3;
      }
    }
    iVar4 = iVar4 + 0x20;
    puVar5 = puVar5 + 1;
  } while( true );
}


// 0x00f2224 (0x198 bytes)
void FreeMobyGridLists(short *param_1)

{
  byte bVar1;
  undefined1 uVar2;
  undefined4 uVar3;
  ulonglong uVar4;
  uint uVar5;
  uint *puVar6;
  undefined4 *puVar7;
  uint *puVar8;
  short sVar9;
  uint uVar10;
  undefined1 uVar11;
  longlong lVar12;
  undefined4 *puVar13;
  longlong lVar14;
  
  sVar9 = *param_1;
  bVar1 = *(byte *)((int)param_1 + 3);
  puVar8 = &MobyGridAlloc;
  for (uVar10 = (uint)sVar9; (int)uVar10 < (int)((uint)bVar1 + (int)sVar9); uVar10 = uVar10 + 1) {
    puVar6 = (uint *)((int)&MobyGridAlloc + (int)((longlong)((int)uVar10 >> 5) << 2));
    *puVar6 = (1 << (uVar10 + (((int)uVar10 >> 5) + (uint)((int)uVar10 < 0 && (uVar10 & 0x1f) != 0))
                              * -0x20 & 0x3f) ^ 0xffffffffU) & *puVar6;
  }
  bVar1 = *(byte *)((int)param_1 + 3);
  uVar2 = *(undefined1 *)(param_1 + 1);
  uVar4 = ((ulonglong)bVar1 << 0x20) >> 0x21;
  uVar11 = (undefined1)uVar4;
  if (bVar1 >> 1 == 0) {
    sVar9 = *param_1;
    *param_1 = 0;
    *(undefined4 *)((int)&g_MobyGridLists + (int)((longlong)sVar9 << 5)) = 0;
    *(undefined1 *)(param_1 + 1) = uVar2;
    *(undefined1 *)((int)param_1 + 3) = uVar11;
    return;
  }
  sVar9 = 0;
  do {
    uVar10 = *puVar8;
    if (uVar10 != 0xffffffff) {
      lVar14 = 0;
      while( true ) {
        uVar5 = (1 << (bVar1 >> 1 & 0x3f)) + -1 << ((uint)lVar14 & 0x3f);
        if ((uVar10 & uVar5) == 0) break;
        lVar14 = uVar4 + lVar14;
      }
      if ((uint)lVar14 != 0x20) {
        lVar12 = ((ulonglong)bVar1 & 0x1fe) << 2;
        *puVar8 = uVar10 | uVar5;
        sVar9 = sVar9 + (short)lVar14;
        puVar13 = &g_MobyGridLists + sVar9 * 8;
        puVar7 = &g_MobyGridLists + *param_1 * 8;
        if ((int)lVar12 != 0) {
          do {
            lVar12 = lVar12 + -1;
            uVar3 = *puVar7;
            puVar7 = puVar7 + 1;
            *puVar13 = uVar3;
            puVar13 = puVar13 + 1;
          } while (0 < (int)lVar12);
        }
        *param_1 = sVar9;
        *(undefined1 *)(param_1 + 1) = uVar2;
        *(undefined1 *)((int)param_1 + 3) = uVar11;
        return;
      }
    }
    sVar9 = sVar9 + 0x20;
    puVar8 = puVar8 + 1;
  } while( true );
}


// 0x00f23bc (0x18c bytes)
void AllocMobyGridLists(short *param_1)

{
  byte bVar1;
  undefined1 uVar2;
  short sVar3;
  uint uVar4;
  ulonglong uVar5;
  uint *puVar6;
  short sVar7;
  undefined4 *puVar8;
  undefined4 *puVar9;
  longlong lVar10;
  uint uVar11;
  
  uVar5 = 1;
  if (1 < (uint)*(byte *)((int)param_1 + 3) << 1) {
    uVar5 = (ulonglong)*(byte *)((int)param_1 + 3) << 1;
  }
  puVar6 = &MobyGridAlloc;
  sVar7 = 0;
  do {
    uVar11 = *puVar6;
    if (uVar11 != 0xffffffff) {
      lVar10 = 0;
      while( true ) {
        uVar4 = (1 << ((uint)(uVar5 & 0xff) & 0x3f)) + -1 << ((uint)lVar10 & 0x3f);
        if ((uVar11 & uVar4) == 0) break;
        lVar10 = (uVar5 & 0xff) + lVar10;
      }
      if ((uint)lVar10 != 0x20) {
        *puVar6 = uVar11 | uVar4;
        bVar1 = *(byte *)((int)param_1 + 3);
        sVar7 = sVar7 + (short)lVar10;
        uVar2 = *(undefined1 *)(param_1 + 1);
        if (bVar1 == 0) {
          *param_1 = sVar7;
          *(undefined1 *)(param_1 + 1) = uVar2;
          *(char *)((int)param_1 + 3) = (char)uVar5;
        }
        else {
          sVar3 = *param_1;
          for (uVar11 = (uint)sVar3; (int)uVar11 < (int)((uint)bVar1 + (int)sVar3);
              uVar11 = uVar11 + 1) {
            puVar6 = (uint *)((int)&MobyGridAlloc + (int)((longlong)((int)uVar11 >> 5) << 2));
            *puVar6 = (1 << (uVar11 + (((int)uVar11 >> 5) +
                                      (uint)((int)uVar11 < 0 && (uVar11 & 0x1f) != 0)) * -0x20 &
                            0x3f) ^ 0xffffffffU) & *puVar6;
          }
          lVar10 = (ulonglong)*(byte *)((int)param_1 + 3) << 3;
          puVar9 = &g_MobyGridLists + sVar7 * 8;
          puVar8 = &g_MobyGridLists + *param_1 * 8;
          if ((int)lVar10 != 0) {
            do {
              lVar10 = lVar10 + -1;
              *puVar9 = *puVar8;
              puVar8 = puVar8 + 1;
              puVar9 = puVar9 + 1;
            } while (0 < (int)lVar10);
          }
          *param_1 = sVar7;
          *(undefined1 *)(param_1 + 1) = uVar2;
          *(char *)((int)param_1 + 3) = (char)uVar5;
        }
        return;
      }
    }
    sVar7 = sVar7 + 0x20;
    puVar6 = puVar6 + 1;
  } while( true );
}


// 0x00f2548 (0x34 bytes)
/* WARNING: Restarted to delay deadcode elimination for space: stack */

undefined4 ByteSwap32(undefined8 param_1)

{
  undefined4 local_10;
  
  local_10 = CONCAT13((char)param_1,
                      CONCAT12((char)((ulonglong)param_1 >> 8),
                               CONCAT11((char)((ulonglong)param_1 >> 0x10),
                                        (char)((ulonglong)param_1 >> 0x18))));
  return local_10;
}


// 0x00f257c (0x78 bytes)
undefined8 MB_PointInByteRect(char param_1,char param_2,undefined4 param_3)

{
  undefined8 uVar1;
  undefined1 local_10;
  undefined1 uStack_f;
  undefined1 uStack_e;
  undefined1 uStack_d;
  
  uStack_f = (char)((uint)param_3 >> 0x10);
  uStack_e = (char)((uint)param_3 >> 8);
  uStack_d = (char)param_3;
  if (param_1 < local_10) {
    uVar1 = 0;
  }
  else if (uStack_e < param_1) {
    uVar1 = 0;
  }
  else if (param_2 < uStack_f) {
    uVar1 = 0;
  }
  else if (uStack_d < param_2) {
    uVar1 = 0;
  }
  else {
    uVar1 = 1;
  }
  return uVar1;
}


// 0x00f25f4 (0x3bc bytes)
/* WARNING: Restarted to delay deadcode elimination for space: stack */

void UpdateMobyGrids(MobyInstance *moby,uint deletion_stamp)

{
  byte bVar1;
  short *psVar2;
  bool bVar3;
  int iVar4;
  short *psVar5;
  short *psVar6;
  byte bVar7;
  longlong lVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  uint uVar11;
  uint uVar12;
  uint *puVar13;
  char local_50;
  char cStack_4f;
  char cStack_4e;
  char cStack_4d;
  char local_48;
  char local_44;
  uint local_40;
  
  if (deletion_stamp == 0x80807f7f) {
    local_40 = 0x7f7f8080;
    deletion_stamp = local_40;
  }
  puVar13 = &moby->collCount;
  local_44 = (char)*puVar13;
  if ((-1 < local_44) &&
     (bVar1 = *(byte *)((int)&moby->collCount + 1), uVar11 = (uint)bVar1,
     (uint)bVar1 < (byte)moby->collCount + 1)) {
    do {
      uVar10 = (ulonglong)*(byte *)&moby->collCount;
      if ((uint)*(byte *)&moby->collCount < *(byte *)((int)&moby->collCount + 2) + 1) {
        lVar8 = uVar10 << 2;
        do {
          if ((int)uVar10 < (int)local_48) {
            bVar3 = false;
          }
          else if ((int)(char)(deletion_stamp >> 8) < (int)uVar10) {
            bVar3 = false;
          }
          else if ((int)uVar11 < (int)(char)(deletion_stamp >> 0x10)) {
            bVar3 = false;
          }
          else if ((int)(char)deletion_stamp < (int)uVar11) {
            bVar3 = false;
          }
          else {
            bVar3 = true;
          }
          if (!bVar3) {
            iVar4 = (int)lVar8;
            bVar1 = (&g_MobyGrid[uVar11 * 0x40].count)[iVar4];
            psVar5 = (short *)(&g_MobyGridLists +
                              *(short *)((int)&g_MobyGrid[uVar11 * 0x40].listStart + iVar4
                                        ) * 8);
            psVar2 = psVar5;
            do {
              psVar6 = psVar2;
              psVar2 = psVar6 + 1;
            } while ((int)*psVar6 != moby->field72_0xac);
            *psVar6 = psVar5[bVar1 - 1];
            psVar5[bVar1 - 1] = 0;
            bVar1 = (&g_MobyGrid[uVar11 * 0x40].blocks)[iVar4];
            bVar7 = (&g_MobyGrid[uVar11 * 0x40].count)[iVar4] - 1;
            (&g_MobyGrid[uVar11 * 0x40].count)[iVar4] = bVar7;
            if ((bVar7 == 0) || ((int)(uint)bVar7 < (int)((uint)bVar1 * 8 + -4) && bVar1 != 1)) {
              FreeMobyGridLists();
            }
          }
          uVar10 = uVar10 + 1;
          lVar8 = lVar8 + 4;
        } while ((int)uVar10 < (int)(*(byte *)((int)&moby->collCount + 2) + 1));
      }
      uVar11 = uVar11 + 1;
    } while ((int)uVar11 < (int)((byte)moby->collCount + 1));
  }
  uVar11 = *puVar13;
  *puVar13 = deletion_stamp;
  if ((-1 < (char)deletion_stamp) &&
     (bVar1 = *(byte *)((int)&moby->collCount + 1), uVar12 = (uint)bVar1,
     (uint)bVar1 < (byte)moby->collCount + 1)) {
    do {
      uVar10 = (ulonglong)*(byte *)&moby->collCount;
      if ((uint)*(byte *)&moby->collCount < *(byte *)((int)&moby->collCount + 2) + 1) {
        lVar8 = uVar10 << 2;
        do {
          cStack_4e = (char)(uVar11 >> 8);
          cStack_4f = (char)(uVar11 >> 0x10);
          cStack_4d = (char)uVar11;
          if ((int)uVar10 < (int)local_50) {
            bVar3 = false;
          }
          else if ((int)cStack_4e < (int)uVar10) {
            bVar3 = false;
          }
          else if ((int)uVar12 < (int)cStack_4f) {
            bVar3 = false;
          }
          else if ((int)cStack_4d < (int)uVar12) {
            bVar3 = false;
          }
          else {
            bVar3 = true;
          }
          if (!bVar3) {
            uVar9 = ZEXT48(g_MobyGrid) + lVar8 + ((ulonglong)uVar12 & 0xffffff) * 0x100;
            psVar2 = (short *)uVar9;
            if (((uint)*(byte *)((int)psVar2 + 3) << 4 <= (uint)*(byte *)(psVar2 + 1)) ||
               (*(byte *)((int)psVar2 + 3) == 0)) {
              AllocMobyGridLists(uVar9 & 0xffffffff);
            }
            *(short *)((int)&g_MobyGridLists +
                      (uint)*(byte *)(psVar2 + 1) * 2 + (int)((longlong)*psVar2 << 5)) =
                 (short)moby->field72_0xac;
            *(char *)(psVar2 + 1) = *(char *)(psVar2 + 1) + '\x01';
          }
          uVar10 = uVar10 + 1;
          lVar8 = lVar8 + 4;
        } while ((int)uVar10 < (int)(*(byte *)((int)&moby->collCount + 2) + 1));
      }
      uVar12 = uVar12 + 1;
    } while ((int)uVar12 < (int)((byte)moby->collCount + 1));
  }
  return;
}


// 0x00f29b8 (0x6e0 bytes)
/* WARNING: Restarted to delay deadcode elimination for space: stack */

void PostUpdateMobyBsphere
               (MobyInstance *moby,undefined8 param_2,undefined8 param_3,undefined8 param_4,
               longlong param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  byte bVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float *pfVar10;
  int iVar11;
  ushort *puVar12;
  uint deletion_stamp;
  undefined1 uVar13;
  GPiece<16> auVar14;
  GPiece<16> auVar15;
  GPiece<16> auVar16;
  GPiece<16> auVar17;
  undefined8 uVar18;
  longlong lVar19;
  ulonglong uVar20;
  uint *puVar21;
  float fStack00000038;
  float fStack0000003c;
  float fStack00000040;
  float fStack00000044;
  float fStack00000048;
  float fStack0000004c;
  float fStack00000050;
  float fStack00000054;
  float fStack00000058;
  float fStack0000005c;
  float fStack00000060;
  float fStack00000064;
  float fStack00000068;
  float fStack0000006c;
  float in_stack_00000070;
  
  uVar20 = ZEXT48(&stack0x00000000);
  bVar1 = moby->updateId;
  if (bVar1 == moby->animationId) {
    if (bVar1 == moby->field44_0x71) {
      fVar2 = (moby->transform).v3.x;
      fVar3 = (moby->transform).v3.y;
      fVar4 = (moby->transform).v3.z;
      fVar5 = (moby->transform).v3.w;
    }
    else {
      moby->field44_0x71 = bVar1;
      pfVar10 = *(float **)(&moby->pClass->type + (uint)bVar1 * 4);
      fVar2 = *pfVar10;
      fVar3 = pfVar10[1];
      fVar4 = pfVar10[2];
      fVar5 = pfVar10[3];
      (moby->transform).v3.x = fVar2;
      (moby->transform).v3.y = pfVar10[1];
      (moby->transform).v3.z = pfVar10[2];
      (moby->transform).v3.w = pfVar10[3];
    }
  }
  else {
    if (bVar1 == 0xff) {
      iVar11 = (uint)(byte)moby->previousAnimationFrame * 0x10;
      fVar2 = *(float *)(iVar11 + 0xa34600);
      fVar3 = *(float *)(iVar11 + 0xa34604);
      fVar4 = *(float *)(iVar11 + 0xa34608);
      fVar5 = *(float *)(iVar11 + 0xa3460c);
    }
    else {
      pfVar10 = *(float **)(&moby->pClass->type + (uint)bVar1 * 4);
      fVar2 = *pfVar10;
      fVar3 = pfVar10[1];
      fVar4 = pfVar10[2];
      fVar5 = pfVar10[3];
    }
    fVar6 = moby->animationBlend;
    pfVar10 = *(float **)(&moby->pClass->type + (uint)moby->animationId * 4);
    fVar2 = (fVar6 * *pfVar10 + fVar2) - fVar6 * fVar2;
    fVar3 = (fVar6 * pfVar10[1] + fVar3) - fVar6 * fVar3;
    fVar4 = (fVar6 * pfVar10[2] + fVar4) - fVar6 * fVar4;
    fVar5 = (fVar6 * pfVar10[3] + fVar5) - fVar6 * fVar5;
  }
  fStack00000048 = (float)((ulonglong)param_4 >> 0x20);
  fStack0000004c = (float)param_4;
  fVar6 = fStack0000004c;
  fStack00000050 = (float)((ulonglong)param_5 >> 0x20);
  fStack00000054 = (float)param_5;
  fVar7 = fStack00000054;
  uVar18 = param_4;
  lVar19 = param_5;
  if ((moby->modeBits & MIRROR) != NONE) {
    _fStack00000048 = CONCAT44(-fStack00000048,-fStack0000004c);
    _fStack00000050 = (ulonglong)(uint)-fStack00000050 << 0x20;
    uVar18 = _fStack00000048;
    lVar19 = _fStack00000050;
  }
  _fStack00000050 = lVar19;
  _fStack00000048 = uVar18;
  fStack00000038 = (float)((ulonglong)param_2 >> 0x20);
  fStack0000003c = (float)param_2;
  fStack00000040 = (float)((ulonglong)param_3 >> 0x20);
  fStack00000044 = (float)param_3;
  (moby->transform).v0.x = fStack00000038;
  (moby->transform).v0.y = fStack0000003c;
  (moby->transform).v0.z = fStack00000040;
  (moby->transform).v0.w = fStack00000044;
  (moby->transform).v1.x = fStack00000048;
  (moby->transform).v1.y = fVar6;
  (moby->transform).v1.z = fStack00000050;
  (moby->transform).v1.w = fVar7;
  fStack00000058 = (float)((ulonglong)param_6 >> 0x20);
  fStack0000005c = (float)param_6;
  fStack00000060 = (float)((ulonglong)param_7 >> 0x20);
  fStack00000064 = (float)param_7;
  (moby->transform).v2.x = fStack00000058;
  (moby->transform).v2.y = fStack0000005c;
  (moby->transform).v2.z = fStack00000060;
  (moby->transform).v2.w = fStack00000064;
  fVar6 = moby->scale;
  fVar2 = fVar2 * fVar6;
  fVar3 = fVar3 * fVar6;
  fVar4 = fVar4 * fVar6;
  fVar7 = (moby->pos).x;
  fVar8 = (moby->pos).y;
  fStack00000068 = (float)((ulonglong)param_8 >> 0x20);
  fVar9 = (moby->pos).z;
  fStack0000006c = (float)param_8;
  (moby->bSphere).rad = fVar5 * fVar6;
  iVar11 = moby->field71_0xa8;
  (moby->bSphere).x =
       fStack00000038 * fVar2 + fStack00000048 * fVar3 + fStack00000058 * fVar4 + fStack00000068 +
       fVar7 * 1024.0;
  (moby->bSphere).y =
       fStack0000003c * fVar2 + fStack0000004c * fVar3 + fStack0000005c * fVar4 + fStack0000006c +
       fVar8 * 1024.0;
  puVar12 = moby->collision;
  (moby->bSphere).z =
       fStack00000040 * fVar2 + fStack00000050 * fVar3 + fStack00000060 * fVar4 + in_stack_00000070
       + fVar9 * 1024.0;
  moby->field71_0xa8 = iVar11 + 1;
  if (puVar12 != (ushort *)0x0) {
    auVar14 = auRam00000000 >> 0x60 & (GPiece<16>)0xffffffff;
    auVar15 = auRam00000000 >> 0x60 & (GPiece<16>)0xffffffff;
    auVar16 = auRam00000000 >> 0x60 & (GPiece<16>)0xffffffff;
    auVar17 = auRam00000000 >> 0x60 & (GPiece<16>)0xffffffff;
    auVar14 = SPLAT(auVar14) >> 0x60 &
              (GPiece<16>)0xff;
    uVar13 = storeVectorElementByteIndexed
                       (auVar14 | auVar14 << 8 | auVar14 << 0x10 | auVar14 << 0x18 | auVar14 << 0x20
                        | auVar14 << 0x28 | auVar14 << 0x30 | auVar14 << 0x38 | auVar14 << 0x40 |
                        auVar14 << 0x48 | auVar14 << 0x50 | auVar14 << 0x58 | auVar14 << 0x60 |
                        auVar14 << 0x68 | auVar14 << 0x70 | auVar14 << 0x78,0,uVar20 - 0x80);
    puVar21 = (uint *)(uVar20 - 0x80);
    *(undefined1 *)puVar21 = uVar13;
    auVar14 = SPLAT(auVar15) >> 0x60 &
              (GPiece<16>)0xff;
    auVar15 = SPLAT(auVar16) >> 0x60 &
              (GPiece<16>)0xff;
    auVar16 = SPLAT(auVar17) >> 0x60 &
              (GPiece<16>)0xff;
    uVar13 = storeVectorElementByteIndexed
                       (auVar14 | auVar14 << 8 | auVar14 << 0x10 | auVar14 << 0x18 | auVar14 << 0x20
                        | auVar14 << 0x28 | auVar14 << 0x30 | auVar14 << 0x38 | auVar14 << 0x40 |
                        auVar14 << 0x48 | auVar14 << 0x50 | auVar14 << 0x58 | auVar14 << 0x60 |
                        auVar14 << 0x68 | auVar14 << 0x70 | auVar14 << 0x78,0,uVar20 - 0x7f);
    *(undefined1 *)(uVar20 - 0x7f) = uVar13;
    uVar13 = storeVectorElementByteIndexed
                       (auVar15 | auVar15 << 8 | auVar15 << 0x10 | auVar15 << 0x18 | auVar15 << 0x20
                        | auVar15 << 0x28 | auVar15 << 0x30 | auVar15 << 0x38 | auVar15 << 0x40 |
                        auVar15 << 0x48 | auVar15 << 0x50 | auVar15 << 0x58 | auVar15 << 0x60 |
                        auVar15 << 0x68 | auVar15 << 0x70 | auVar15 << 0x78,0,uVar20 - 0x7e);
    *(undefined1 *)(uVar20 - 0x7e) = uVar13;
    uVar13 = storeVectorElementByteIndexed
                       (auVar16 | auVar16 << 8 | auVar16 << 0x10 | auVar16 << 0x18 | auVar16 << 0x20
                        | auVar16 << 0x28 | auVar16 << 0x30 | auVar16 << 0x38 | auVar16 << 0x40 |
                        auVar16 << 0x48 | auVar16 << 0x50 | auVar16 << 0x58 | auVar16 << 0x60 |
                        auVar16 << 0x68 | auVar16 << 0x70 | auVar16 << 0x78,0,uVar20 - 0x7d);
    *(undefined1 *)(uVar20 - 0x7d) = uVar13;
    deletion_stamp = *puVar21;
    if ((moby->collCount != deletion_stamp) && ((deletion_stamp & 0xc0c00000) == 0)) {
      _fStack00000038 = param_2;
      _fStack00000040 = param_3;
      _fStack00000048 = param_4;
      _fStack00000050 = param_5;
      _fStack00000058 = param_6;
      _fStack00000060 = param_7;
      _fStack00000068 = param_8;
      UpdateMobyGrids(moby,deletion_stamp);
    }
  }
  return;
}


// 0x00f30a0 (0xfc bytes)
void PostUpdateMobyLockTransform(MobyInstance *pMoby)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  
  if (-1 < (char)pMoby->state) {
    uVar1.piece<0,4>() = (pMoby->transform).v0.x;
    uVar1.piece<4,4>() = (pMoby->transform).v0.y;
    uVar2.piece<0,4>() = (pMoby->transform).v0.z;
    uVar2.piece<4,4>() = (pMoby->transform).v0.w;
    uVar3.piece<0,4>() = (pMoby->transform).v1.x;
    uVar3.piece<4,4>() = (pMoby->transform).v1.y;
    uVar4.piece<0,4>() = (pMoby->transform).v1.z;
    uVar4.piece<4,4>() = (pMoby->transform).v1.w;
    uVar5.piece<0,4>() = (pMoby->transform).v2.x;
    uVar5.piece<4,4>() = (pMoby->transform).v2.y;
    uVar6.piece<0,4>() = (pMoby->transform).v2.z;
    uVar6.piece<4,4>() = (pMoby->transform).v2.w;
    PostUpdateMobyBsphere(pMoby,uVar1,uVar2,uVar3,uVar4,uVar5,uVar6,0);
  }
  return;
}


// 0x00f31a8 (0x340 bytes)
/* WARNING: Restarted to delay deadcode elimination for space: stack */

void UpdateMobyTransform(MobyInstance *param_1)

{
  u8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  double extraout_f1;
  double extraout_f1_00;
  double extraout_f1_01;
  double extraout_f1_02;
  double extraout_f1_03;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  
  uVar1 = param_1->state;
  if (-1 < (char)uVar1) {
    if ((param_1->modeBits & LOCK_ROTATION) == NONE) {
      dVar12 = (double)(param_1->rotation).x;
      dVar10 = (double)(param_1->rotation).y;
      dVar9 = (double)(param_1->rotation).z;
      uVar7 = _FSin(dVar12,uVar1,0);
      dVar8 = extraout_f1;
      uVar7 = _FSin(dVar12,uVar7,1);
      dVar13 = extraout_f1_00;
      uVar7 = _FSin(dVar10,uVar7,0);
      dVar12 = extraout_f1_01;
      uVar7 = _FSin(dVar10,uVar7,1);
      dVar11 = extraout_f1_02;
      uVar7 = _FSin(dVar9,uVar7,0);
      dVar10 = extraout_f1_03;
      dVar9 = (double)_FSin(dVar9,uVar7,1);
      PostUpdateMobyBsphere
                (param_1,CONCAT44((float)(dVar11 * dVar9),(float)(dVar11 * dVar10)),
                 (ulonglong)(uint)(float)-dVar12 << 0x20,
                 CONCAT44((float)(dVar8 * (double)(float)(dVar9 * dVar12)) -
                          (float)(dVar13 * dVar10),
                          (float)(dVar8 * (double)(float)(dVar12 * dVar10)) +
                          (float)(dVar13 * dVar9)),(ulonglong)(uint)(float)(dVar11 * dVar8) << 0x20,
                 CONCAT44((float)(dVar13 * (double)(float)(dVar9 * dVar12)) +
                          (float)(dVar8 * dVar10),
                          (float)(dVar13 * (double)(float)(dVar12 * dVar10)) -
                          (float)(dVar9 * dVar8)),(ulonglong)(uint)(float)(dVar13 * dVar11) << 0x20,
                 0);
    }
    else if (-1 < (char)uVar1) {
      uVar7.piece<0,4>() = (param_1->transform).v0.x;
      uVar7.piece<4,4>() = (param_1->transform).v0.y;
      uVar2.piece<0,4>() = (param_1->transform).v0.z;
      uVar2.piece<4,4>() = (param_1->transform).v0.w;
      uVar3.piece<0,4>() = (param_1->transform).v1.x;
      uVar3.piece<4,4>() = (param_1->transform).v1.y;
      uVar4.piece<0,4>() = (param_1->transform).v1.z;
      uVar4.piece<4,4>() = (param_1->transform).v1.w;
      uVar5.piece<0,4>() = (param_1->transform).v2.x;
      uVar5.piece<4,4>() = (param_1->transform).v2.y;
      uVar6.piece<0,4>() = (param_1->transform).v2.z;
      uVar6.piece<4,4>() = (param_1->transform).v2.w;
      PostUpdateMobyBsphere(param_1,uVar7,uVar2,uVar3,uVar4,uVar5,uVar6,0);
    }
  }
  return;
}


// 0x00f34e8 (0x11c bytes)
undefined * MB_TransformJointBatch(int param_1,uint param_2,char *param_3)

{
  uint uVar1;
  int iVar2;
  undefined4 local_70;
  undefined4 uStack_6c;
  undefined4 uStack_68;
  undefined4 uStack_64;
  undefined4 local_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined4 local_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 local_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  
  uVar1 = 0;
  if (param_2 != 0) {
    iVar2 = 0;
    do {
      if (*param_3 != '\0') {
        FastVecMtx4MultBatch4VMX(param_1,param_1 + 0x10,param_1 + 0x20,&local_70);
        if (*(uint *)(param_1 + 0x2c) == 0) {
          *(undefined4 *)(iVar2 + 0xa4db4c) = uStack_64;
          *(undefined4 *)(iVar2 + 0xa4db48) = uStack_68;
          *(undefined4 *)(iVar2 + 0xa4db44) = uStack_6c;
          *(undefined4 *)(&DAT_00a4db40 + iVar2) = local_70;
          *(undefined4 *)(iVar2 + 0xa4db5c) = uStack_54;
          *(undefined4 *)(iVar2 + 0xa4db58) = uStack_58;
          *(undefined4 *)(iVar2 + 0xa4db54) = uStack_5c;
          *(undefined4 *)(&DAT_00a4db50 + iVar2) = local_60;
          *(undefined4 *)(iVar2 + 0xa4db6c) = uStack_44;
          *(undefined4 *)(iVar2 + 0xa4db68) = uStack_48;
          *(undefined4 *)(iVar2 + 0xa4db64) = uStack_4c;
          *(undefined4 *)(&DAT_00a4db60 + iVar2) = local_50;
          *(undefined4 *)(iVar2 + 0xa4db7c) = uStack_34;
          *(undefined4 *)(iVar2 + 0xa4db78) = uStack_38;
          *(undefined4 *)(iVar2 + 0xa4db74) = uStack_3c;
          *(undefined4 *)(&DAT_00a4db70 + iVar2) = local_40;
        }
        else {
          FastVecMtx4Mul
                    (&DAT_00a4db40 + iVar2,&DAT_00a4db40 + (*(uint *)(param_1 + 0x2c) & 0xfffffc0),
                     &local_70);
        }
      }
      uVar1 = uVar1 + 1;
      param_1 = param_1 + 0x40;
      param_3 = param_3 + 1;
      iVar2 = iVar2 + 0x40;
    } while (uVar1 < param_2);
  }
  return &DAT_00a4db40;
}


// 0x00f3618 (0x508 bytes)
void ProcessManipulators(Manipulator *param_1,int param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float *pfVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  double dVar16;
  double dVar17;
  double dVar18;
  double dVar19;
  double dVar20;
  double dVar21;
  double dVar22;
  double dVar23;
  GPiece<16> local_190;
  GPiece<16> local_180;
  float local_170;
  float local_16c;
  float local_168;
  float local_160;
  float local_15c;
  float local_158;
  float local_154;
  GPiece<16> local_150;
  GPiece<16> local_140;
  GPiece<16> auStack_130;
  float local_120;
  float local_11c;
  float local_118;
  float local_114;
  GPiece<16> local_110;
  GPiece<16> local_100;
  GPiece<16> local_f0;
  GPiece<16> local_e0;
  float local_d0;
  float local_cc;
  float local_c8;
  float local_c4;
  GPiece<16> local_c0;
  GPiece<16> local_b0;
  float local_a0;
  float local_9c;
  float local_98;
  float local_94;
  
  if (param_1 != (Manipulator *)0x0) {
    do {
      pfVar9 = (float *)(param_2 + (param_1->bone_id & 0xfffffc0U));
      fVar1 = *pfVar9;
      fVar2 = pfVar9[1];
      fVar3 = pfVar9[2];
      fVar4 = pfVar9[3];
      dVar11 = (double)pfVar9[4];
      dVar12 = (double)pfVar9[5];
      dVar13 = (double)pfVar9[6];
      dVar14 = (double)pfVar9[8];
      dVar15 = (double)pfVar9[9];
      dVar16 = (double)pfVar9[10];
      fVar5 = (param_1->rotation).x;
      fVar6 = (param_1->rotation).y;
      fVar7 = (param_1->rotation).z;
      fVar8 = (param_1->rotation).w;
      dVar17 = (double)(param_1->scale).x;
      dVar18 = (double)(param_1->scale).y;
      dVar19 = (double)(param_1->scale).z;
      FastVecScale(0x3f50000000000000,&local_170,&param_1->translation);
      if (param_1->absolute == '\0') {
        pfVar9[4] = (float)(dVar11 * dVar17);
        pfVar9[5] = (float)(dVar12 * dVar18);
        pfVar9[6] = (float)(dVar13 * dVar19);
        pfVar9[8] = (float)(dVar14 + (double)local_170);
        pfVar9[9] = (float)(dVar15 + (double)local_16c);
        pfVar9[10] = (float)(dVar16 + (double)local_168);
        pfVar9[3] = fVar4 * fVar8 - (fVar1 * fVar5 + fVar2 * fVar6 + fVar3 * fVar7);
        *pfVar9 = fVar1 * fVar8 + fVar5 * fVar4 + (fVar6 * fVar3 - fVar2 * fVar7);
        pfVar9[1] = fVar2 * fVar8 + fVar6 * fVar4 + (fVar7 * fVar1 - fVar3 * fVar5);
        pfVar9[2] = fVar3 * fVar8 + fVar7 * fVar4 + (fVar5 * fVar2 - fVar1 * fVar6);
      }
      else {
        dVar20 = (double)param_1->animation_blend_t;
        dVar21 = 1.0;
        dVar23 = 0.0;
        dVar22 = (double)(float)(1.0 - dVar20);
        if (0.0 <= fVar5 * fVar1 + fVar6 * fVar2 + fVar7 * fVar3 + fVar8 * fVar4) {
          FastVecScale(dVar20,local_c0,local_180);
          FastVecScale(dVar22,local_b0,local_190);
          FastVecAdd(&local_d0,local_f0,local_e0);
          local_160 = local_d0;
          local_15c = local_cc;
          local_158 = local_c8;
          local_154 = local_c4;
        }
        else {
          FastVecScale(0xbff0000000000000,auStack_130,local_190);
          FastVecScale(dVar20,local_110,local_180);
          FastVecScale(dVar22,local_100,auStack_130);
          FastVecAdd(&local_120,local_150,local_140);
          local_160 = local_120;
          local_15c = local_11c;
          local_158 = local_118;
          local_154 = local_114;
        }
        dVar10 = (double)(local_160 * local_160 + local_15c * local_15c + local_158 * local_158 +
                         local_154 * local_154);
        if (dVar10 <= dVar23) {
          *pfVar9 = local_160;
          pfVar9[1] = local_15c;
          pfVar9[2] = local_158;
          pfVar9[3] = local_154;
        }
        else {
          FastVecScale
                    ((double)(float)(dVar21 / (double)(float)SQRT(dVar10)),&local_a0,&local_160);
          *pfVar9 = local_a0;
          pfVar9[1] = local_9c;
          pfVar9[2] = local_98;
          pfVar9[3] = local_94;
        }
        pfVar9[4] = (float)(dVar20 * dVar17) + (float)(dVar22 * dVar11);
        pfVar9[5] = (float)(dVar20 * dVar18) + (float)(dVar22 * dVar12);
        pfVar9[6] = (float)(dVar20 * dVar19) + (float)(dVar22 * dVar13);
        pfVar9[8] = (float)((double)local_170 * dVar20) + (float)(dVar22 * dVar14);
        pfVar9[9] = (float)((double)local_16c * dVar20) + (float)(dVar22 * dVar15);
        pfVar9[10] = (float)((double)local_168 * dVar20) + (float)(dVar22 * dVar16);
      }
      param_1 = param_1->pNext;
    } while (param_1 != (Manipulator *)0x0);
  }
  return;
}


// 0x00f3b30 (0x464 bytes)
void ProcessAnimLayers(MobyAnimLayer *pAnimLayer,int param_2)

{
  float *pfVar1;
  uint uVar2;
  MobyAnimLayer *pMVar3;
  uint uVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  double dVar16;
  double dVar17;
  double dVar18;
  double dVar19;
  double dVar20;
  double dVar21;
  GPiece<16> local_1c0;
  GPiece<16> local_1b0;
  float local_1a0;
  float local_19c;
  float local_198;
  float local_194;
  GPiece<16> local_190;
  GPiece<16> local_180;
  GPiece<16> auStack_170;
  float local_160;
  float local_15c;
  float local_158;
  float local_154;
  GPiece<16> local_150;
  GPiece<16> local_140;
  GPiece<16> local_130;
  GPiece<16> local_120;
  float local_110;
  float local_10c;
  float local_108;
  float local_104;
  GPiece<16> local_100;
  GPiece<16> local_f0;
  float local_e0;
  float local_dc;
  float local_d8;
  float local_d4;
  
  if (pAnimLayer != (MobyAnimLayer *)0x0) {
    do {
      uVar2 = 0;
      dVar20 = 1.0;
      pMVar3 = pAnimLayer->nextLayer;
      uVar4 = (uint)*(short *)((int)&pAnimLayer->animSeq + 2);
      dVar21 = (double)pAnimLayer->animSpeed;
      dVar19 = (double)(float)(1.0 - dVar21);
      if (uVar4 != 0) {
        do {
          pfVar1 = (float *)(param_2 + *(int *)&pMVar3[1].animIScale * 0x40);
          dVar18 = (double)(float)pMVar3->nextLayer;
          dVar17 = (double)*(float *)&pMVar3->animSeqId;
          dVar16 = (double)pMVar3->blendWeight;
          dVar15 = (double)(float)pMVar3[1].animSeq;
          dVar14 = (double)pMVar3[1].animSeqT;
          dVar13 = (double)pMVar3[1].animSpeed;
          dVar6 = 0.0;
          dVar12 = (double)pfVar1[4];
          dVar11 = (double)pfVar1[5];
          dVar10 = (double)pfVar1[6];
          dVar9 = (double)pfVar1[8];
          dVar8 = (double)pfVar1[9];
          dVar7 = (double)pfVar1[10];
          if (0.0 <= (float)pMVar3->animSeq * *pfVar1 + pMVar3->animSeqT * pfVar1[1] +
                     pMVar3->animSpeed * pfVar1[2] + *(float *)&pMVar3->animIScale * pfVar1[3]) {
            FastVecScale(dVar21,local_100,local_1c0);
            FastVecScale(dVar19,local_f0,local_1b0);
            FastVecAdd(&local_110,local_130,local_120);
            local_1a0 = local_110;
            local_19c = local_10c;
            local_198 = local_108;
            local_194 = local_104;
          }
          else {
            FastVecScale(0xbff0000000000000,auStack_170,local_1b0);
            FastVecScale(dVar21,local_150,local_1c0);
            FastVecScale(dVar19,local_140,auStack_170);
            FastVecAdd(&local_160,local_190,local_180);
            local_1a0 = local_160;
            local_19c = local_15c;
            local_198 = local_158;
            local_194 = local_154;
          }
          dVar5 = (double)(local_1a0 * local_1a0 + local_19c * local_19c + local_198 * local_198 +
                          local_194 * local_194);
          if (dVar5 <= dVar6) {
            *pfVar1 = local_1a0;
            pfVar1[1] = local_19c;
            pfVar1[2] = local_198;
            pfVar1[3] = local_194;
          }
          else {
            FastVecScale
                      ((double)(float)(dVar20 / (double)(float)SQRT(dVar5)),&local_e0,&local_1a0);
            *pfVar1 = local_e0;
            pfVar1[1] = local_dc;
            pfVar1[2] = local_d8;
            pfVar1[3] = local_d4;
          }
          pfVar1[4] = (float)(dVar18 * dVar21) + (float)(dVar19 * dVar12);
          pfVar1[5] = (float)(dVar17 * dVar21) + (float)(dVar19 * dVar11);
          pfVar1[6] = (float)(dVar16 * dVar21) + (float)(dVar19 * dVar10);
          pfVar1[8] = (float)(dVar15 * dVar21) + (float)(dVar19 * dVar9);
          pfVar1[9] = (float)(dVar14 * dVar21) + (float)(dVar19 * dVar8);
          pfVar1[10] = (float)(dVar13 * dVar21) + (float)(dVar19 * dVar7);
          if (pfVar1[7] != 0.0) {
            pfVar1[7] = pMVar3->blendFade;
          }
          uVar2 = uVar2 + 1;
          pMVar3 = (MobyAnimLayer *)&pMVar3[1].nextLayer;
        } while (uVar2 < uVar4);
      }
      pAnimLayer = (MobyAnimLayer *)pAnimLayer->blendFade;
    } while (pAnimLayer != (MobyAnimLayer *)0x0);
  }
  return;
}


// 0x00f3fe0 (0x1844 bytes)
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* [p2_mobyutil] core anim joint interpolation used by
   ComputeAnimation/BuildJointMatrices/InterpolateAnimation */

undefined4 *
MB_BlendJointFrames
          (double param_1,uint param_2,undefined8 param_3,int param_4,int param_5,int param_6)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  ushort uVar5;
  short sVar6;
  undefined4 uVar7;
  ulonglong *puVar8;
  uint uVar9;
  longlong lVar10;
  longlong lVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  ulonglong uVar16;
  longlong lVar17;
  ulonglong uVar18;
  ulonglong uVar19;
  ulonglong uVar20;
  ulonglong uVar21;
  ulonglong uVar22;
  uint uVar23;
  ulonglong uVar24;
  longlong lVar25;
  ulonglong uVar26;
  ulonglong unaff_r20;
  ulonglong unaff_r21;
  ulonglong unaff_r22;
  int iVar27;
  ulonglong unaff_r23;
  ulonglong unaff_r24;
  int iVar29;
  ulonglong uVar28;
  ulonglong unaff_r25;
  longlong lVar30;
  ushort *puVar31;
  ulonglong unaff_r26;
  int iVar32;
  short *psVar33;
  float *pfVar34;
  ulonglong unaff_r27;
  int iVar36;
  ulonglong uVar35;
  undefined4 *puVar37;
  ulonglong unaff_r28;
  int iVar38;
  short *psVar39;
  ulonglong unaff_r29;
  ulonglong unaff_r30;
  ulonglong unaff_r31;
  ulonglong in_LR;
  double dVar40;
  ulonglong in_f28;
  double dVar41;
  ulonglong in_f29;
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
  int aiStack_10a4 [1065];
  
  uVar16 = ZEXT48(&stack0x00000000);
  lVar30 = uVar16 - 0x1220;
  puVar8 = (ulonglong *)lVar30;
  *puVar8 = uVar16;
  puVar8[0x246] = in_LR;
  puVar8[0x240] = in_f28;
  puVar8[0x241] = in_f29;
  puVar8[0x242] = in_f30;
  puVar8[0x243] = in_f31;
  puVar8[0x23d] = unaff_r29;
  puVar8[0x23f] = unaff_r31;
  puVar8[0x23e] = unaff_r30;
  lVar17 = uVar16 - 0x10c0;
  puVar8[0x23c] = unaff_r28;
  puVar8[0x23b] = unaff_r27;
  puVar8[0x23a] = unaff_r26;
  puVar8[0x239] = unaff_r25;
  puVar8[0x238] = unaff_r24;
  puVar8[0x237] = unaff_r23;
  puVar8[0x236] = unaff_r22;
  puVar8[0x235] = unaff_r21;
  puVar8[0x234] = unaff_r20;
  pfVar34 = (float *)&DAT_00a4fb80;
  if (param_2 != 0) {
    dVar43 = 1.0;
    fVar1 = (float)(1.0 - param_1);
    dVar42 = (double)fVar1;
    uVar18 = 0;
    uVar20 = 0;
    *(float *)(puVar8 + 0x230) = fVar1;
    *(float *)((int)puVar8 + 0x1184) = fVar1;
    *(float *)(puVar8 + 0x231) = fVar1;
    *(float *)((int)puVar8 + 0x118c) = fVar1;
    auVar45 = auRam00000000 >> 0x60 & (GPiece<16>)0xffffffff;
    uVar22 = 0;
    uVar24 = 0;
    uVar23 = 0;
    auVar47 = loadVectorLeftIndexed(0x1180,0xf3fa0);
    *(float *)(puVar8 + 0x230) = (float)param_1;
    *(float *)((int)puVar8 + 0x1184) = (float)param_1;
    *(float *)(puVar8 + 0x231) = (float)param_1;
    *(float *)((int)puVar8 + 0x118c) = (float)param_1;
    auVar47 = auVar47 >> 0x60 & (GPiece<16>)0xffffffff;
    auVar48 = auVar47 | auVar47 << 0x20 | auVar47 << 0x40 | auVar47 << 0x60;
    auVar46 = *(undefined1 (*) [16])(puVar8 + 0x230);
    auVar47 = SPLAT(auVar45) >> 0x60 &
              (GPiece<16>)0xffffffff;
    auVar45 = ZEXT416(0);
    auVar44 = auVar45 | auVar45 << 0x20 | auVar45 << 0x40 | auVar45 << 0x60;
    auVar45 = SPLAT(auVar47) >> 0x60 &
              (GPiece<16>)0xffffffff;
    auVar45 = auVar45 | auVar45 << 0x20 | auVar45 << 0x40 | auVar45 << 0x60;
    if (param_2 != 0) {
      iVar38 = 0;
      iVar36 = 0;
      iVar32 = 0;
      iVar29 = 0;
      do {
        iVar27 = iVar32 + 1;
        *(undefined1 (*) [16])((int)&DAT_00a4fb80 + iVar38) = auVar48;
        (&DAT_00a4fb8c)[iVar27 * 4] = 0;
        (&DAT_00a4fb88)[iVar27 * 4] = 0x3f800000;
        (&DAT_00a4fb84)[iVar27 * 4] = 0x3f800000;
        (&DAT_00a4fb80)[iVar27 * 4] = 0x3f800000;
        uVar23 = uVar23 + 1;
        auVar47 = *(undefined1 (*) [16])(iVar36 + param_4 & 0xfffffff0);
        *(undefined1 (*) [16])(&DAT_00a4fb80 + (iVar32 + 2) * 4) = auVar47;
        auVar47 = vectorConditionalSelect(auVar47,auVar44,_DAT_000f3fc0);
        iVar38 = iVar38 + 0x40;
        *(undefined1 (*) [16])((int)lVar30 + 0x160) = auVar48;
        iVar36 = iVar36 + 0x10;
        *(undefined1 (*) [16])(&DAT_00a4fb80 + (iVar32 + 3) * 4) = auVar47;
        iVar32 = iVar32 + 4;
        *(undefined1 (*) [16])(puVar8 + (iVar29 + 1) * 2 + 0x2c) = auVar48;
        lVar30 = lVar30 + 0x20;
        iVar29 = iVar29 + 2;
      } while (uVar23 < param_2);
    }
    uVar23 = 0;
    lVar30 = 0;
    puVar31 = (ushort *)(param_5 + (uint)*(ushort *)(param_5 + 8) + 0x10);
    uVar26 = uVar18;
    lVar25 = lVar30;
    if (*(short *)(param_5 + 10) != 0) {
      do {
        puVar8[0x232] = (longlong)(int)((uint)*puVar31 << 3);
        uVar5 = puVar31[2];
        uVar18 = puVar8[0x232];
        puVar8[0x232] = (longlong)(int)((uint)puVar31[1] << 3);
        fVar1 = (float)(longlong)uVar18 * 3.0517578e-05;
        uVar18 = puVar8[0x232];
        *(float *)(puVar8 + 0x230) = fVar1;
        *(float *)((int)puVar8 + 0x1184) = fVar1;
        *(float *)(puVar8 + 0x231) = fVar1;
        *(float *)((int)puVar8 + 0x118c) = fVar1;
        puVar8[0x232] = (longlong)(int)((uint)uVar5 << 3);
        auVar47 = auRam00000000 >> 0x60 & (GPiece<16>)0xffffffff;
        fVar1 = (float)(longlong)uVar18 * 3.0517578e-05;
        *(float *)(puVar8 + 0x230) = fVar1;
        *(float *)((int)puVar8 + 0x1184) = fVar1;
        *(float *)(puVar8 + 0x231) = fVar1;
        *(float *)((int)puVar8 + 0x118c) = fVar1;
        auVar48 = auRam00000000 >> 0x60 & (GPiece<16>)0xffffffff;
        fVar1 = (float)(longlong)puVar8[0x232] * 3.0517578e-05;
        *(float *)(puVar8 + 0x230) = fVar1;
        *(float *)((int)puVar8 + 0x1184) = fVar1;
        *(float *)(puVar8 + 0x231) = fVar1;
        *(float *)((int)puVar8 + 0x118c) = fVar1;
        auVar50 = auRam00000000 >> 0x60 & (GPiece<16>)0xffffffff;
        uVar18 = (ulonglong)*(byte *)(puVar31 + 3);
        uVar35 = ZEXT48(&DAT_00a4fb80) + uVar18 * 0x40;
        auVar49 = auVar47 | auVar47 << 0x20 | auVar47 << 0x40 | auVar47 << 0x60;
        auVar47 = SPLAT(auVar48) >> 0x60 &
                  (GPiece<16>)0xffffffff;
        auVar48 = SPLAT(auVar50) >> 0x60 &
                  (GPiece<16>)0xffffffff;
        auVar50 = auVar47 | auVar47 << 0x20 | auVar47 << 0x40 | auVar47 << 0x60;
        auVar47 = SPLAT(auVar48) >> 0x60 &
                  (GPiece<16>)0xffffffff;
        auVar47 = auVar47 | auVar47 << 0x20 | auVar47 << 0x40 | auVar47 << 0x60;
        if (*(char *)((int)puVar31 + 7) < '\0') {
          puVar37 = (undefined4 *)uVar35;
          uVar19 = uVar35;
          if ((int)uVar22 != 0) {
            *(undefined4 **)((int)uVar20 + 0xc) = puVar37;
            uVar19 = uVar22;
          }
          auVar48 = auVar49 >> 0x60 & (GPiece<16>)0xffffffff;
          auVar50 = auVar50 >> 0x60 & (GPiece<16>)0xffffffff;
          auVar47 = auVar47 >> 0x60 & (GPiece<16>)0xffffffff;
          uVar7 = storeVectorElementWordIndexed
                            (auVar48 | auVar48 << 0x20 | auVar48 << 0x40 | auVar48 << 0x60,0,uVar35)
          ;
          *puVar37 = uVar7;
          uVar7 = storeVectorElementWordIndexed
                            (auVar50 | auVar50 << 0x20 | auVar50 << 0x40 | auVar50 << 0x60,4,uVar35)
          ;
          puVar37[1] = uVar7;
          uVar7 = storeVectorElementWordIndexed
                            (auVar47 | auVar47 << 0x20 | auVar47 << 0x40 | auVar47 << 0x60,8,uVar35)
          ;
          puVar37[2] = uVar7;
          puVar37[7] = 1;
          uVar18 = uVar26;
          uVar20 = uVar35;
          uVar22 = uVar19;
          lVar30 = lVar25;
        }
        else {
          lVar10 = uVar18 * 0x20;
          lVar30 = lVar17 + lVar10;
          uVar18 = lVar17 + uVar18 * 0x20 & 0xffffffff;
          if ((int)lVar25 != 0) {
            *(int *)((int)uVar26 + 0xc) = (int)lVar30;
            lVar30 = lVar25;
          }
          auVar48 = auVar49 >> 0x60 & (GPiece<16>)0xffffffff;
          auVar50 = auVar50 >> 0x60 & (GPiece<16>)0xffffffff;
          auVar47 = auVar47 >> 0x60 & (GPiece<16>)0xffffffff;
          uVar26 = (uVar16 - 0x10bc) + lVar10;
          uVar35 = (uVar16 - 0x10b8) + lVar10;
          uVar7 = storeVectorElementWordIndexed
                            (auVar48 | auVar48 << 0x20 | auVar48 << 0x40 | auVar48 << 0x60,lVar10,
                             lVar17);
          *(undefined4 *)((int)lVar10 + (int)lVar17) = uVar7;
          uVar7 = storeVectorElementWordIndexed
                            (auVar50 | auVar50 << 0x20 | auVar50 << 0x40 | auVar50 << 0x60,0,
                             uVar26 & 0xffffffff);
          *(undefined4 *)uVar26 = uVar7;
          uVar7 = storeVectorElementWordIndexed
                            (auVar47 | auVar47 << 0x20 | auVar47 << 0x40 | auVar47 << 0x60,0,
                             uVar35 & 0xffffffff);
          *(undefined4 *)uVar35 = uVar7;
        }
        uVar23 = uVar23 + 1;
        puVar31 = puVar31 + 4;
        uVar26 = uVar18;
        lVar25 = lVar30;
      } while (uVar23 < *(ushort *)(param_5 + 10));
    }
    iVar29 = (int)uVar18;
    iVar32 = (int)uVar20;
    uVar23 = 0;
    uVar26 = 0;
    psVar33 = (short *)(param_5 + (uint)*(ushort *)(param_5 + 0xc) + 0x10);
    uVar35 = uVar24;
    uVar19 = uVar26;
    if (*(short *)(param_5 + 0xe) != 0) {
      do {
        puVar8[0x232] = (longlong)(int)*psVar33;
        sVar6 = psVar33[2];
        uVar24 = puVar8[0x232];
        puVar8[0x232] = (longlong)(int)psVar33[1];
        fVar1 = (float)(longlong)uVar24 * 0.0009765625;
        uVar24 = puVar8[0x232];
        *(float *)(puVar8 + 0x230) = fVar1;
        *(float *)((int)puVar8 + 0x1184) = fVar1;
        *(float *)(puVar8 + 0x231) = fVar1;
        *(float *)((int)puVar8 + 0x118c) = fVar1;
        puVar8[0x232] = (longlong)(int)sVar6;
        auVar47 = auRam00000000 >> 0x60 & (GPiece<16>)0xffffffff;
        fVar1 = (float)(longlong)uVar24 * 0.0009765625;
        *(float *)(puVar8 + 0x230) = fVar1;
        *(float *)((int)puVar8 + 0x1184) = fVar1;
        *(float *)(puVar8 + 0x231) = fVar1;
        *(float *)((int)puVar8 + 0x118c) = fVar1;
        auVar48 = auRam00000000 >> 0x60 & (GPiece<16>)0xffffffff;
        fVar1 = (float)(longlong)puVar8[0x232] * 0.0009765625;
        *(float *)(puVar8 + 0x230) = fVar1;
        *(float *)((int)puVar8 + 0x1184) = fVar1;
        *(float *)(puVar8 + 0x231) = fVar1;
        *(float *)((int)puVar8 + 0x118c) = fVar1;
        auVar50 = auRam00000000 >> 0x60 & (GPiece<16>)0xffffffff;
        uVar24 = ZEXT48(&DAT_00a4fb80) + (longlong)*(char *)(psVar33 + 3) * 0x40;
        uVar26 = uVar24 & 0xffffffff;
        iVar36 = (int)uVar24;
        uVar7 = storeVectorElementWordIndexed
                          (auVar47 | auVar47 << 0x20 | auVar47 << 0x40 | auVar47 << 0x60,0x20,uVar26
                          );
        *(undefined4 *)(iVar36 + 0x20) = uVar7;
        auVar47 = SPLAT(auVar48) >> 0x60 &
                  (GPiece<16>)0xffffffff;
        auVar48 = SPLAT(auVar50) >> 0x60 &
                  (GPiece<16>)0xffffffff;
        uVar7 = storeVectorElementWordIndexed
                          (auVar47 | auVar47 << 0x20 | auVar47 << 0x40 | auVar47 << 0x60,0x24,uVar26
                          );
        *(undefined4 *)(iVar36 + 0x24) = uVar7;
        auVar47 = SPLAT(auVar48) >> 0x60 &
                  (GPiece<16>)0xffffffff;
        uVar7 = storeVectorElementWordIndexed
                          (auVar47 | auVar47 << 0x20 | auVar47 << 0x40 | auVar47 << 0x60,0x28,uVar26
                          );
        *(undefined4 *)(iVar36 + 0x28) = uVar7;
        uVar24 = uVar26;
        if ((int)uVar35 != 0) {
          *(int *)((int)uVar19 + 0x3c) = iVar36;
          *(undefined4 *)(iVar36 + 0x3c) = 0;
          uVar24 = uVar35;
        }
        uVar23 = uVar23 + 1;
        psVar33 = psVar33 + 4;
        uVar35 = uVar24;
        uVar19 = uVar26;
      } while (uVar23 < *(ushort *)(param_5 + 0xe));
    }
    uVar23 = 0;
    puVar31 = (ushort *)(param_6 + (uint)*(ushort *)(param_6 + 8) + 0x10);
    uVar35 = uVar22;
    if (*(short *)(param_6 + 10) != 0) {
      do {
        puVar8[0x232] = (longlong)(int)((uint)*puVar31 << 3);
        uVar5 = puVar31[2];
        uVar22 = puVar8[0x232];
        puVar8[0x232] = (longlong)(int)((uint)puVar31[1] << 3);
        fVar1 = (float)(longlong)uVar22 * 3.0517578e-05;
        uVar22 = puVar8[0x232];
        *(float *)(puVar8 + 0x230) = fVar1;
        *(float *)((int)puVar8 + 0x1184) = fVar1;
        *(float *)(puVar8 + 0x231) = fVar1;
        *(float *)((int)puVar8 + 0x118c) = fVar1;
        puVar8[0x232] = (longlong)(int)((uint)uVar5 << 3);
        auVar47 = auRam00000000 >> 0x60 & (GPiece<16>)0xffffffff;
        fVar1 = (float)(longlong)uVar22 * 3.0517578e-05;
        *(float *)(puVar8 + 0x230) = fVar1;
        *(float *)((int)puVar8 + 0x1184) = fVar1;
        *(float *)(puVar8 + 0x231) = fVar1;
        *(float *)((int)puVar8 + 0x118c) = fVar1;
        auVar48 = auRam00000000 >> 0x60 & (GPiece<16>)0xffffffff;
        fVar1 = (float)(longlong)puVar8[0x232] * 3.0517578e-05;
        *(float *)(puVar8 + 0x230) = fVar1;
        *(float *)((int)puVar8 + 0x1184) = fVar1;
        *(float *)(puVar8 + 0x231) = fVar1;
        *(float *)((int)puVar8 + 0x118c) = fVar1;
        auVar50 = auRam00000000 >> 0x60 & (GPiece<16>)0xffffffff;
        auVar49 = auVar47 | auVar47 << 0x20 | auVar47 << 0x40 | auVar47 << 0x60;
        auVar47 = SPLAT(auVar48) >> 0x60 &
                  (GPiece<16>)0xffffffff;
        auVar48 = SPLAT(auVar50) >> 0x60 &
                  (GPiece<16>)0xffffffff;
        auVar50 = auVar47 | auVar47 << 0x20 | auVar47 << 0x40 | auVar47 << 0x60;
        auVar47 = SPLAT(auVar48) >> 0x60 &
                  (GPiece<16>)0xffffffff;
        auVar47 = auVar47 | auVar47 << 0x20 | auVar47 << 0x40 | auVar47 << 0x60;
        uVar19 = uVar18;
        uVar21 = uVar20;
        uVar22 = uVar35;
        lVar25 = lVar30;
        if (*(char *)((int)puVar31 + 7) < '\0') {
          auVar48 = auVar49 >> 0x60 & (GPiece<16>)0xffffffff;
          auVar50 = auVar50 >> 0x60 & (GPiece<16>)0xffffffff;
          auVar47 = auVar47 >> 0x60 & (GPiece<16>)0xffffffff;
          uVar18 = ZEXT48(&DAT_00a4fb80) + (ulonglong)*(byte *)(puVar31 + 3) * 0x40;
          iVar29 = (int)uVar18;
          uVar7 = storeVectorElementWordIndexed
                            (auVar48 | auVar48 << 0x20 | auVar48 << 0x40 | auVar48 << 0x60,0x10,
                             uVar18);
          *(undefined4 *)(iVar29 + 0x10) = uVar7;
          uVar7 = storeVectorElementWordIndexed
                            (auVar50 | auVar50 << 0x20 | auVar50 << 0x40 | auVar50 << 0x60,0x14,
                             uVar18);
          *(undefined4 *)(iVar29 + 0x14) = uVar7;
          uVar7 = storeVectorElementWordIndexed
                            (auVar47 | auVar47 << 0x20 | auVar47 << 0x40 | auVar47 << 0x60,0x18,
                             uVar18);
          *(undefined4 *)(iVar29 + 0x18) = uVar7;
          *(undefined4 *)(iVar29 + 0x1c) = 1;
          if ((*(int *)(iVar29 + 0xc) == 0) && (uVar21 = uVar18, uVar22 = uVar18, (int)uVar35 != 0))
          {
            *(int *)((int)uVar20 + 0xc) = iVar29;
            uVar22 = uVar35;
          }
        }
        else {
          auVar48 = auVar49 >> 0x60 & (GPiece<16>)0xffffffff;
          lVar10 = (ulonglong)*(byte *)(puVar31 + 3) * 0x20;
          auVar50 = auVar50 >> 0x60 & (GPiece<16>)0xffffffff;
          auVar47 = auVar47 >> 0x60 & (GPiece<16>)0xffffffff;
          uVar28 = (uVar16 - 0x10b0) + lVar10;
          lVar11 = (ulonglong)*(byte *)(puVar31 + 3) * 0x20;
          uVar35 = (uVar16 - 0x10ac) + lVar11;
          uVar20 = (uVar16 - 0x10a8) + lVar10;
          uVar7 = storeVectorElementWordIndexed
                            (auVar48 | auVar48 << 0x20 | auVar48 << 0x40 | auVar48 << 0x60,0,
                             uVar28 & 0xffffffff);
          *(undefined4 *)uVar28 = uVar7;
          iVar29 = *(int *)((int)aiStack_10a4 + (int)lVar11);
          uVar7 = storeVectorElementWordIndexed
                            (auVar50 | auVar50 << 0x20 | auVar50 << 0x40 | auVar50 << 0x60,0,
                             uVar35 & 0xffffffff);
          *(undefined4 *)uVar35 = uVar7;
          uVar7 = storeVectorElementWordIndexed
                            (auVar47 | auVar47 << 0x20 | auVar47 << 0x40 | auVar47 << 0x60,0,
                             uVar20 & 0xffffffff);
          *(undefined4 *)uVar20 = uVar7;
          if (iVar29 == 0) {
            uVar19 = lVar17 + lVar11 & 0xffffffff;
            lVar25 = lVar17 + lVar10;
            if ((int)lVar30 != 0) {
              *(int *)((int)uVar18 + 0xc) = (int)(lVar17 + lVar10);
              lVar25 = lVar30;
            }
          }
        }
        iVar29 = (int)uVar19;
        iVar32 = (int)uVar21;
        uVar23 = uVar23 + 1;
        puVar31 = puVar31 + 4;
        uVar18 = uVar19;
        uVar20 = uVar21;
        uVar35 = uVar22;
        lVar30 = lVar25;
      } while (uVar23 < *(ushort *)(param_6 + 10));
    }
    if (iVar32 != 0) {
      *(undefined4 *)(iVar32 + 0xc) = 0;
    }
    if (iVar29 != 0) {
      *(undefined4 *)(iVar29 + 0xc) = 0;
    }
    uVar23 = 0;
    psVar33 = (short *)(param_6 + (uint)*(ushort *)(param_6 + 0xc) + 0x10);
    uVar18 = uVar24;
    if (*(short *)(param_6 + 0xe) != 0) {
      do {
        puVar8[0x232] = (longlong)(int)*psVar33;
        sVar6 = psVar33[2];
        uVar24 = puVar8[0x232];
        puVar8[0x232] = (longlong)(int)psVar33[1];
        fVar1 = (float)(longlong)uVar24 * 0.0009765625;
        uVar24 = puVar8[0x232];
        *(float *)(puVar8 + 0x230) = fVar1;
        *(float *)((int)puVar8 + 0x1184) = fVar1;
        *(float *)(puVar8 + 0x231) = fVar1;
        *(float *)((int)puVar8 + 0x118c) = fVar1;
        puVar8[0x232] = (longlong)(int)sVar6;
        auVar47 = auRam00000000 >> 0x60 & (GPiece<16>)0xffffffff;
        fVar1 = (float)(longlong)uVar24 * 0.0009765625;
        *(float *)(puVar8 + 0x230) = fVar1;
        *(float *)((int)puVar8 + 0x1184) = fVar1;
        *(float *)(puVar8 + 0x231) = fVar1;
        *(float *)((int)puVar8 + 0x118c) = fVar1;
        auVar48 = auRam00000000 >> 0x60 & (GPiece<16>)0xffffffff;
        fVar1 = (float)(longlong)puVar8[0x232] * 0.0009765625;
        *(float *)(puVar8 + 0x230) = fVar1;
        *(float *)((int)puVar8 + 0x1184) = fVar1;
        *(float *)(puVar8 + 0x231) = fVar1;
        *(float *)((int)puVar8 + 0x118c) = fVar1;
        auVar50 = auRam00000000 >> 0x60 & (GPiece<16>)0xffffffff;
        uVar24 = ZEXT48(&DAT_00a4fb80) + (longlong)*(char *)(psVar33 + 3) * 0x40;
        uVar20 = uVar24 & 0xffffffff;
        iVar29 = (int)uVar24;
        uVar7 = storeVectorElementWordIndexed
                          (auVar47 | auVar47 << 0x20 | auVar47 << 0x40 | auVar47 << 0x60,0x30,uVar20
                          );
        *(undefined4 *)(iVar29 + 0x30) = uVar7;
        auVar47 = SPLAT(auVar48) >> 0x60 &
                  (GPiece<16>)0xffffffff;
        auVar48 = SPLAT(auVar50) >> 0x60 &
                  (GPiece<16>)0xffffffff;
        uVar7 = storeVectorElementWordIndexed
                          (auVar47 | auVar47 << 0x20 | auVar47 << 0x40 | auVar47 << 0x60,0x34,uVar20
                          );
        *(undefined4 *)(iVar29 + 0x34) = uVar7;
        auVar47 = SPLAT(auVar48) >> 0x60 &
                  (GPiece<16>)0xffffffff;
        uVar7 = storeVectorElementWordIndexed
                          (auVar47 | auVar47 << 0x20 | auVar47 << 0x40 | auVar47 << 0x60,0x38,uVar20
                          );
        *(undefined4 *)(iVar29 + 0x38) = uVar7;
        uVar24 = uVar18;
        uVar35 = uVar26;
        if ((*(int *)(iVar29 + 0x3c) == 0) && (uVar24 = uVar20, uVar35 = uVar20, (int)uVar18 != 0))
        {
          *(int *)((int)uVar26 + 0x3c) = iVar29;
          *(undefined4 *)(iVar29 + 0x3c) = 0;
          uVar24 = uVar18;
        }
        uVar23 = uVar23 + 1;
        psVar33 = psVar33 + 4;
        uVar18 = uVar24;
        uVar26 = uVar35;
      } while (uVar23 < *(ushort *)(param_6 + 0xe));
    }
    uVar23 = (uint)uVar22;
    while (uVar23 != 0) {
      uVar9 = (uint)uVar22;
                    /* WARNING: Read-only address (ram,0x000f3fc0) is written */
      auVar48 = *(undefined1 (*) [16])(uVar9 + 0x10 & 0xfffffff0);
      auVar47 = vectorMultiplyAddFloatingPoint
                          (*(undefined1 (*) [16])(uVar9 & 0xfffffff0),auVar45,auVar44);
      uVar23 = *(uint *)(uVar9 + 0xc);
      uVar22 = (ulonglong)uVar23;
      auVar47 = vectorMultiplyAddFloatingPoint(auVar48,auVar46,auVar47);
      auVar47 = vectorConditionalSelect(auVar47,auVar48,_DAT_000f3fc0);
      *(undefined1 (*) [16])(uVar9 + 0x10 & 0xfffffff0) = auVar47;
    }
    uVar23 = (uint)uVar24;
                    /* WARNING: Read-only address (ram,0x000f3fc0) is written */
    while (uVar23 != 0) {
      iVar29 = (int)uVar24;
                    /* WARNING: Read-only address (ram,0x000f3fc0) is written */
      auVar47 = *(undefined1 (*) [16])(iVar29 + 0x20U & 0xfffffff0);
      auVar48 = vectorMultiplyAddFloatingPoint(auVar47,auVar45,auVar44);
      uVar23 = *(uint *)(iVar29 + 0x3c);
      uVar24 = (ulonglong)uVar23;
      auVar48 = vectorMultiplyAddFloatingPoint
                          (*(undefined1 (*) [16])(iVar29 + 0x30U & 0xfffffff0),auVar46,auVar48);
      auVar47 = vectorConditionalSelect(auVar48,auVar47,_DAT_000f3fc0);
      *(undefined1 (*) [16])(iVar29 + 0x20U & 0xfffffff0) = auVar47;
    }
                    /* WARNING: Read-only address (ram,0x000f3fc0) is written */
    uVar23 = 0;
    psVar39 = (short *)(param_5 + 0x10);
    psVar33 = (short *)(param_6 + 0x10);
    if (param_2 != 0) {
      do {
        puVar8[0x232] = (longlong)(int)*psVar39;
        fVar1 = (float)(longlong)puVar8[0x232] * 3.0517578e-05;
        *(float *)(puVar8 + 0x230) = fVar1;
        *(float *)((int)puVar8 + 0x1184) = fVar1;
        *(float *)(puVar8 + 0x231) = fVar1;
        *(float *)((int)puVar8 + 0x118c) = fVar1;
        auVar45 = auRam00000000 >> 0x60 & (GPiece<16>)0xffffffff;
        uVar7 = storeVectorElementWordIndexed
                          (auVar45 | auVar45 << 0x20 | auVar45 << 0x40 | auVar45 << 0x60,0,
                           uVar16 - 0x11b0);
        *(undefined4 *)(uVar16 - 0x11b0) = uVar7;
        puVar8[0x232] = (longlong)(int)psVar39[1];
        fVar2 = (float)(longlong)puVar8[0x232] * 3.0517578e-05;
        *(float *)(puVar8 + 0x230) = fVar2;
        *(float *)((int)puVar8 + 0x1184) = fVar2;
        *(float *)(puVar8 + 0x231) = fVar2;
        *(float *)((int)puVar8 + 0x118c) = fVar2;
        auVar45 = auRam00000000 >> 0x60 & (GPiece<16>)0xffffffff;
        uVar7 = storeVectorElementWordIndexed
                          (auVar45 | auVar45 << 0x20 | auVar45 << 0x40 | auVar45 << 0x60,0,
                           uVar16 - 0x11ac);
        *(undefined4 *)(uVar16 - 0x11ac) = uVar7;
        puVar8[0x232] = (longlong)(int)psVar39[2];
        fVar3 = (float)(longlong)puVar8[0x232] * 3.0517578e-05;
        *(float *)(puVar8 + 0x230) = fVar3;
        *(float *)((int)puVar8 + 0x1184) = fVar3;
        *(float *)(puVar8 + 0x231) = fVar3;
        *(float *)((int)puVar8 + 0x118c) = fVar3;
        auVar45 = auRam00000000 >> 0x60 & (GPiece<16>)0xffffffff;
        uVar7 = storeVectorElementWordIndexed
                          (auVar45 | auVar45 << 0x20 | auVar45 << 0x40 | auVar45 << 0x60,0,
                           uVar16 - 0x11a8);
        *(undefined4 *)(uVar16 - 0x11a8) = uVar7;
        puVar8[0x232] = (longlong)(int)psVar39[3];
        fVar4 = (float)(longlong)puVar8[0x232] * 3.0517578e-05;
        *(float *)(puVar8 + 0x230) = fVar4;
        *(float *)((int)puVar8 + 0x1184) = fVar4;
        *(float *)(puVar8 + 0x231) = fVar4;
        *(float *)((int)puVar8 + 0x118c) = fVar4;
        auVar45 = auRam00000000 >> 0x60 & (GPiece<16>)0xffffffff;
        uVar7 = storeVectorElementWordIndexed
                          (auVar45 | auVar45 << 0x20 | auVar45 << 0x40 | auVar45 << 0x60,0,
                           uVar16 - 0x11a4);
        *(undefined4 *)(uVar16 - 0x11a4) = uVar7;
        puVar8[0x232] = (longlong)(int)*psVar33;
        fVar12 = (float)(longlong)puVar8[0x232] * 3.0517578e-05;
        *(float *)(puVar8 + 0x230) = fVar12;
        *(float *)((int)puVar8 + 0x1184) = fVar12;
        *(float *)(puVar8 + 0x231) = fVar12;
        *(float *)((int)puVar8 + 0x118c) = fVar12;
        auVar45 = auRam00000000 >> 0x60 & (GPiece<16>)0xffffffff;
        uVar7 = storeVectorElementWordIndexed
                          (auVar45 | auVar45 << 0x20 | auVar45 << 0x40 | auVar45 << 0x60,0,
                           uVar16 - 0x11a0);
        *(undefined4 *)(uVar16 - 0x11a0) = uVar7;
        puVar8[0x232] = (longlong)(int)psVar33[1];
        fVar13 = (float)(longlong)puVar8[0x232] * 3.0517578e-05;
        *(float *)(puVar8 + 0x230) = fVar13;
        *(float *)((int)puVar8 + 0x1184) = fVar13;
        *(float *)(puVar8 + 0x231) = fVar13;
        *(float *)((int)puVar8 + 0x118c) = fVar13;
        auVar45 = auRam00000000 >> 0x60 & (GPiece<16>)0xffffffff;
        uVar7 = storeVectorElementWordIndexed
                          (auVar45 | auVar45 << 0x20 | auVar45 << 0x40 | auVar45 << 0x60,0,
                           uVar16 - 0x119c);
        *(undefined4 *)(uVar16 - 0x119c) = uVar7;
        puVar8[0x232] = (longlong)(int)psVar33[2];
        fVar14 = (float)(longlong)puVar8[0x232] * 3.0517578e-05;
        *(float *)(puVar8 + 0x230) = fVar14;
        *(float *)((int)puVar8 + 0x1184) = fVar14;
        *(float *)(puVar8 + 0x231) = fVar14;
        *(float *)((int)puVar8 + 0x118c) = fVar14;
        auVar45 = auRam00000000 >> 0x60 & (GPiece<16>)0xffffffff;
        uVar7 = storeVectorElementWordIndexed
                          (auVar45 | auVar45 << 0x20 | auVar45 << 0x40 | auVar45 << 0x60,0,
                           uVar16 - 0x1198);
        *(undefined4 *)(uVar16 - 0x1198) = uVar7;
        puVar8[0x232] = (longlong)(int)psVar33[3];
        fVar15 = (float)(longlong)puVar8[0x232] * 3.0517578e-05;
        *(float *)(puVar8 + 0x230) = fVar15;
        *(float *)((int)puVar8 + 0x1184) = fVar15;
        *(float *)(puVar8 + 0x231) = fVar15;
        *(float *)((int)puVar8 + 0x118c) = fVar15;
        auVar45 = auRam00000000 >> 0x60 & (GPiece<16>)0xffffffff;
        uVar7 = storeVectorElementWordIndexed
                          (auVar45 | auVar45 << 0x20 | auVar45 << 0x40 | auVar45 << 0x60,0,
                           uVar16 - 0x1194);
        *(undefined4 *)(uVar16 - 0x1194) = uVar7;
        dVar41 = 0.0;
        if (0.0 <= fVar1 * fVar12 + fVar2 * fVar13 + fVar3 * fVar14 + fVar4 * fVar15) {
          FastVecScale(dVar42,uVar16 - 0x10f0,uVar16 - 0x11b0);
          *(undefined4 *)(puVar8 + 0x20) = *(undefined4 *)(puVar8 + 0x26);
          *(undefined4 *)((int)puVar8 + 0x104) = *(undefined4 *)((int)puVar8 + 0x134);
          *(undefined4 *)(puVar8 + 0x21) = *(undefined4 *)(puVar8 + 0x27);
          *(undefined4 *)((int)puVar8 + 0x10c) = *(undefined4 *)((int)puVar8 + 0x13c);
          FastVecScale(param_1,uVar16 - 0x10e0,uVar16 - 0x11a0);
          *(undefined4 *)(puVar8 + 0x22) = *(undefined4 *)(puVar8 + 0x28);
          *(undefined4 *)((int)puVar8 + 0x114) = *(undefined4 *)((int)puVar8 + 0x144);
          *(undefined4 *)(puVar8 + 0x23) = *(undefined4 *)(puVar8 + 0x29);
          *(undefined4 *)((int)puVar8 + 0x11c) = *(undefined4 *)((int)puVar8 + 0x14c);
          FastVecAdd(uVar16 - 0x1100,uVar16 - 0x1120,uVar16 - 0x1110);
          *(undefined4 *)(puVar8 + 0x12) = *(undefined4 *)(puVar8 + 0x24);
          *(undefined4 *)((int)puVar8 + 0x94) = *(undefined4 *)((int)puVar8 + 0x124);
          *(undefined4 *)(puVar8 + 0x13) = *(undefined4 *)(puVar8 + 0x25);
          *(undefined4 *)((int)puVar8 + 0x9c) = *(undefined4 *)((int)puVar8 + 300);
        }
        else {
          FastVecScale(0xbff0000000000000,uVar16 - 0x1160,uVar16 - 0x11a0);
          FastVecScale(dVar42,uVar16 - 0x1140,uVar16 - 0x11b0);
          *(undefined4 *)(puVar8 + 0x14) = *(undefined4 *)(puVar8 + 0x1c);
          *(undefined4 *)((int)puVar8 + 0xa4) = *(undefined4 *)((int)puVar8 + 0xe4);
          *(undefined4 *)(puVar8 + 0x15) = *(undefined4 *)(puVar8 + 0x1d);
          *(undefined4 *)((int)puVar8 + 0xac) = *(undefined4 *)((int)puVar8 + 0xec);
          FastVecScale(param_1,uVar16 - 0x1130,uVar16 - 0x1160);
          *(undefined4 *)(puVar8 + 0x16) = *(undefined4 *)(puVar8 + 0x1e);
          *(undefined4 *)((int)puVar8 + 0xb4) = *(undefined4 *)((int)puVar8 + 0xf4);
          *(undefined4 *)(puVar8 + 0x17) = *(undefined4 *)(puVar8 + 0x1f);
          *(undefined4 *)((int)puVar8 + 0xbc) = *(undefined4 *)((int)puVar8 + 0xfc);
          FastVecAdd(uVar16 - 0x1150,uVar16 - 0x1180,uVar16 - 0x1170);
          *(undefined4 *)(puVar8 + 0x12) = *(undefined4 *)(puVar8 + 0x1a);
          *(undefined4 *)((int)puVar8 + 0x94) = *(undefined4 *)((int)puVar8 + 0xd4);
          *(undefined4 *)(puVar8 + 0x13) = *(undefined4 *)(puVar8 + 0x1b);
          *(undefined4 *)((int)puVar8 + 0x9c) = *(undefined4 *)((int)puVar8 + 0xdc);
        }
        fVar1 = *(float *)(puVar8 + 0x12);
        fVar2 = *(float *)((int)puVar8 + 0x94);
        fVar3 = *(float *)(puVar8 + 0x13);
        fVar4 = *(float *)((int)puVar8 + 0x9c);
        dVar40 = (double)(fVar1 * fVar1 + fVar2 * fVar2 + fVar3 * fVar3 + fVar4 * fVar4);
        if (dVar40 <= dVar41) {
          *pfVar34 = fVar1;
          pfVar34[1] = fVar2;
          pfVar34[2] = fVar3;
          pfVar34[3] = fVar4;
        }
        else {
          FastVecScale
                    ((double)(float)(dVar43 / (double)(float)SQRT(dVar40)),uVar16 - 0x10d0,
                     uVar16 - 0x1190);
          *pfVar34 = *(float *)(puVar8 + 0x2a);
          pfVar34[1] = *(float *)((int)puVar8 + 0x154);
          pfVar34[2] = *(float *)(puVar8 + 0x2b);
          pfVar34[3] = *(float *)((int)puVar8 + 0x15c);
        }
        uVar23 = uVar23 + 1;
        pfVar34 = pfVar34 + 0x10;
        psVar39 = psVar39 + 4;
        psVar33 = psVar33 + 4;
      } while (uVar23 < param_2);
    }
  }
  return &DAT_00a4fb80;
}


// 0x00f5824 (0xb4 bytes)
undefined8 MB_ComputeAnimDirect(MobyInstance *param_1,char param_2,char param_3)

{
  u8 uVar1;
  undefined8 uVar2;
  
  uVar1 = param_1->pClass->joint_cnt;
  uVar2 = MB_BlendJointFrames((double)param_1->animationBlend,uVar1,uVar1,
                              param_1->pClass->common_trans,param_1->pPreviousAnimationData,
                              param_1->pCurrentAnimationData);
  if (((MobyAnimLayer *)param_1->pAnimationLayers != (MobyAnimLayer *)0x0) && (param_2 != '\0')) {
    ProcessAnimLayers((MobyAnimLayer *)param_1->pAnimationLayers,(int)uVar2);
  }
  if ((param_1->pManipulators != (Manipulator *)0x0) && (param_3 != '\0')) {
    ProcessManipulators(param_1->pManipulators,(int)uVar2);
  }
  return uVar2;
}


// 0x00f58d8 (0x84 bytes)
undefined8 ComputeAnimation(int param_1)

{
  undefined1 uVar1;
  undefined8 uVar2;
  
  uVar1 = *(undefined1 *)(*(int *)(param_1 + 0x24) + 8);
  uVar2 = MB_BlendJointFrames((double)*(float *)(param_1 + 0x54),uVar1,uVar1,
                              *(undefined4 *)(*(int *)(param_1 + 0x24) + 0x18),
                              *(undefined4 *)(param_1 + 0x68),*(undefined4 *)(param_1 + 0x6c));
  if (*(MobyAnimLayer **)(param_1 + 0x60) != (MobyAnimLayer *)0x0) {
    ProcessAnimLayers(*(MobyAnimLayer **)(param_1 + 0x60),(int)uVar2);
  }
  if (*(Manipulator **)(param_1 + 100) != (Manipulator *)0x0) {
    ProcessManipulators(*(Manipulator **)(param_1 + 100),(int)uVar2);
  }
  return uVar2;
}


// 0x00f595c (0x118 bytes)
void Moby_BuildJointMatrices(int param_1,undefined8 param_2,undefined4 *param_3)

{
  byte bVar1;
  undefined8 uVar2;
  int iVar3;
  int iVar4;
  undefined4 *puVar5;
  int iVar6;
  GPiece<144> auStack_b0;
  
  bVar1 = *(byte *)(*(int *)(param_1 + 0x24) + 8);
  uVar2 = MB_BlendJointFrames((double)*(float *)(param_1 + 0x54),bVar1,param_2,
                              *(undefined4 *)(*(int *)(param_1 + 0x24) + 0x18),
                              *(undefined4 *)(param_1 + 0x68),*(undefined4 *)(param_1 + 0x6c));
  if (*(MobyAnimLayer **)(param_1 + 0x60) != (MobyAnimLayer *)0x0) {
    ProcessAnimLayers(*(MobyAnimLayer **)(param_1 + 0x60),(int)uVar2);
  }
  if (*(Manipulator **)(param_1 + 100) != (Manipulator *)0x0) {
    ProcessManipulators(*(Manipulator **)(param_1 + 100),(int)uVar2);
  }
  memset(auStack_b0,1,0x81);
  iVar3 = MB_TransformJointBatch(uVar2,bVar1,auStack_b0);
  iVar6 = 0;
  if (bVar1 != 0) {
    iVar4 = 0;
    do {
      iVar6 = iVar6 + 1;
      puVar5 = (undefined4 *)(iVar3 + 0x30 + iVar4);
      iVar4 = iVar4 + 0x40;
      *param_3 = *puVar5;
      param_3[1] = puVar5[1];
      param_3[2] = puVar5[2];
      param_3[3] = puVar5[3];
      param_3 = param_3 + 4;
    } while (iVar6 < (int)(uint)bVar1);
  }
  return;
}


// 0x00f5a74 (0x8 bytes)
undefined8 STUB_000f5a74(...)

{
  return 0;
}


// 0x00f5a7c (0x4 bytes)
void STUB_000f5a7c(...)

{
  return;
}


// 0x00f5b80 (0x1ec4 bytes)
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* [p2_mobyutil] processes draw entries (anim layers/manipulators/joint blend) */

void MB_DrawEntries(int param_1,uint param_2)

{
  longlong lVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  ushort uVar6;
  short sVar7;
  undefined4 uVar8;
  ulonglong *puVar9;
  undefined1 (*pauVar10) [16];
  ulonglong uVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  ulonglong uVar16;
  ulonglong uVar17;
  ulonglong uVar18;
  int iVar19;
  ulonglong uVar20;
  uint uVar21;
  ulonglong uVar22;
  uint uVar23;
  int iVar24;
  ulonglong uVar25;
  undefined4 *puVar26;
  uint uVar29;
  ulonglong uVar27;
  ulonglong uVar28;
  longlong lVar30;
  ushort *puVar31;
  ulonglong unaff_r18;
  ulonglong unaff_r19;
  ulonglong unaff_r20;
  ulonglong unaff_r21;
  ulonglong unaff_r22;
  ulonglong unaff_r23;
  ulonglong unaff_r24;
  ulonglong unaff_r25;
  int iVar32;
  float *pfVar33;
  ulonglong unaff_r26;
  int iVar34;
  short *psVar35;
  ulonglong unaff_r27;
  longlong lVar36;
  short *psVar37;
  ulonglong unaff_r28;
  int iVar39;
  ulonglong uVar38;
  uint uVar40;
  ulonglong unaff_r29;
  uint uVar41;
  ulonglong unaff_r30;
  longlong lVar42;
  ulonglong unaff_r31;
  ulonglong in_LR;
  ulonglong uVar43;
  double dVar44;
  ulonglong in_f28;
  double dVar45;
  ulonglong in_f29;
  double dVar46;
  ulonglong in_f30;
  double dVar47;
  ulonglong in_f31;
  double dVar48;
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
  GPiece<16> auVar59;
  GPiece<16> auVar60;
  GPiece<16> auVar61;
  GPiece<16> auVar62;
  GPiece<16> auVar63;
  GPiece<16> auVar64;
  GPiece<16> auVar65;
  GPiece<16> auVar66;
  GPiece<16> auVar67;
  GPiece<16> auVar68;
  undefined4 local_3180;
  undefined4 uStack_317c;
  undefined4 uStack_3178;
  undefined4 uStack_3174;
  undefined4 local_3170;
  undefined4 uStack_316c;
  undefined4 uStack_3168;
  undefined4 uStack_3164;
  undefined4 local_3150;
  undefined4 uStack_314c;
  undefined4 uStack_3148;
  undefined4 uStack_3144;
  int aiStack_3124 [3145];
  
  uVar16 = ZEXT48(&stack0x00000000);
  lVar1 = uVar16 - 0x32e0;
  puVar9 = (ulonglong *)lVar1;
  *puVar9 = uVar16;
  puVar9[0x65e] = in_LR;
  puVar9[0x658] = in_f28;
  puVar9[0x659] = in_f29;
  puVar9[0x65a] = in_f30;
  puVar9[0x65b] = in_f31;
  puVar9[0x64e] = unaff_r22;
  puVar9[0x655] = unaff_r29;
  puVar9[0x64d] = unaff_r21;
  puVar9[0x657] = unaff_r31;
  uVar41 = 0;
  puVar9[0x64f] = unaff_r23;
  puVar9[0x656] = unaff_r30;
  puVar9[0x654] = unaff_r28;
  puVar9[0x653] = unaff_r27;
  puVar9[0x652] = unaff_r26;
  puVar9[0x651] = unaff_r25;
  puVar9[0x650] = unaff_r24;
  puVar9[0x64c] = unaff_r20;
  puVar9[0x64b] = unaff_r19;
  puVar9[0x64a] = unaff_r18;
  lVar42 = uVar16 - 0x2120;
  if (param_2 != 0) {
    do {
      uVar21 = *(uint *)(param_1 + 0x68);
      if (uVar21 == 0) {
        uVar21 = *(uint *)(param_1 + 100);
        puVar26 = (undefined4 *)(uVar21 & 0xfffffff0);
        puVar26[3] = 0;
        puVar26[2] = 0;
        puVar26[1] = 0;
        *puVar26 = 0x3f800000;
        puVar26 = (undefined4 *)(uVar21 + 0x10 & 0xfffffff0);
        puVar26[3] = 0;
        puVar26[2] = 0;
        puVar26[1] = 0x3f800000;
        *puVar26 = 0;
        puVar26 = (undefined4 *)(uVar21 + 0x20 & 0xfffffff0);
        puVar26[3] = 0;
        puVar26[2] = 0x3f800000;
        puVar26[1] = 0;
        *puVar26 = 0;
        puVar26 = (undefined4 *)(uVar21 + 0x30 & 0xfffffff0);
        puVar26[3] = 0x3f800000;
        puVar26[2] = 0;
        puVar26[1] = 0;
        *puVar26 = 0;
      }
      else {
        dVar47 = 1.0;
        fVar3 = *(float *)(param_1 + 0x78);
        dVar48 = (double)fVar3;
        fVar2 = (float)(1.0 - dVar48);
        dVar46 = (double)fVar2;
        uVar17 = 0;
        uVar18 = 0;
        uVar40 = uVar21 + 1 >> 1;
        uVar20 = 0;
        *(float *)(puVar9 + 0x640) = fVar2;
        *(float *)((int)puVar9 + 0x3204) = fVar2;
        *(float *)(puVar9 + 0x641) = fVar2;
        *(float *)((int)puVar9 + 0x320c) = fVar2;
        auVar67 = auRam00000000 >> 0x60 & (GPiece<16>)0xffffffff;
        *(float *)(puVar9 + 0x640) = fVar3;
        *(float *)((int)puVar9 + 0x3204) = fVar3;
        *(float *)(puVar9 + 0x641) = fVar3;
        *(float *)((int)puVar9 + 0x320c) = fVar3;
        auVar50 = auRam00000000 >> 0x60 & (GPiece<16>)0xffffffff;
        uVar22 = 0;
        uVar29 = 0;
        auVar66 = loadVectorLeftIndexed(0x3200,0xf5a80);
        auVar66 = auVar66 >> 0x60 & (GPiece<16>)0xffffffff;
        auVar66 = auVar66 | auVar66 << 0x20 | auVar66 << 0x40 | auVar66 << 0x60;
        iVar19 = *(int *)(param_1 + 0x84);
        auVar68 = auVar67 | auVar67 << 0x20 | auVar67 << 0x40 | auVar67 << 0x60;
        auVar67 = SPLAT(auVar50) >> 0x60 &
                  (GPiece<16>)0xffffffff;
        auVar67 = auVar67 | auVar67 << 0x20 | auVar67 << 0x40 | auVar67 << 0x60;
        if (uVar21 != 0) {
          iVar24 = 0;
          iVar39 = 0;
          iVar34 = 0;
          lVar30 = lVar1;
          lVar36 = lVar1;
          do {
            iVar32 = iVar39 + 1;
            auVar50 = ZEXT416(0);
            *(undefined1 (*) [16])((int)lVar30 + 0x11c0) = auVar66;
            *(undefined4 *)((int)puVar9 + iVar32 * 0x10 + 0x11cc) = 0;
            *(undefined4 *)(puVar9 + iVar32 * 2 + 0x239) = 0x3f800000;
            *(undefined4 *)((int)puVar9 + iVar32 * 0x10 + 0x11c4) = 0x3f800000;
            *(undefined4 *)(puVar9 + iVar32 * 2 + 0x238) = 0x3f800000;
            iVar32 = iVar34 + 1;
            auVar49 = *(undefined1 (*) [16])(iVar24 + iVar19 & 0xfffffff0);
            *(undefined1 (*) [16])(puVar9 + (iVar39 + 2) * 2 + 0x238) = auVar49;
            uVar29 = uVar29 + 1;
            auVar50 = vectorConditionalSelect
                                (auVar49,auVar50 | auVar50 << 0x20 | auVar50 << 0x40 |
                                         auVar50 << 0x60,_DAT_000f5ad0);
            *(undefined1 (*) [16])(puVar9 + (iVar39 + 3) * 2 + 0x238) = auVar50;
            iVar34 = iVar34 + 2;
            *(undefined1 (*) [16])((int)lVar36 + 0x1a0) = auVar66;
            lVar36 = lVar36 + 0x20;
            *(undefined1 (*) [16])(puVar9 + iVar32 * 2 + 0x34) = auVar66;
            iVar39 = iVar39 + 4;
            iVar24 = iVar24 + 0x10;
            lVar30 = lVar30 + 0x40;
          } while (uVar29 < uVar21);
        }
        iVar19 = *(int *)(param_1 + 0x8c);
        uVar21 = 0;
        uVar38 = 0;
        puVar31 = (ushort *)(iVar19 + (uint)*(ushort *)(iVar19 + 8) + 0x10);
        if (*(short *)(iVar19 + 10) != 0) {
          do {
            puVar9[0x642] = (longlong)(int)((uint)*puVar31 << 3);
            uVar6 = puVar31[2];
            uVar43 = puVar9[0x642];
            puVar9[0x642] = (longlong)(int)((uint)puVar31[1] << 3);
            fVar2 = (float)(longlong)uVar43 * 3.0517578e-05;
            uVar43 = puVar9[0x642];
            *(float *)(puVar9 + 0x640) = fVar2;
            *(float *)((int)puVar9 + 0x3204) = fVar2;
            *(float *)(puVar9 + 0x641) = fVar2;
            *(float *)((int)puVar9 + 0x320c) = fVar2;
            puVar9[0x642] = (longlong)(int)((uint)uVar6 << 3);
            auVar50 = auRam00000000 >> 0x60 & (GPiece<16>)0xffffffff;
            fVar2 = (float)(longlong)uVar43 * 3.0517578e-05;
            *(float *)(puVar9 + 0x640) = fVar2;
            *(float *)((int)puVar9 + 0x3204) = fVar2;
            *(float *)(puVar9 + 0x641) = fVar2;
            *(float *)((int)puVar9 + 0x320c) = fVar2;
            auVar49 = auRam00000000 >> 0x60 & (GPiece<16>)0xffffffff;
            fVar2 = (float)(longlong)puVar9[0x642] * 3.0517578e-05;
            *(float *)(puVar9 + 0x640) = fVar2;
            *(float *)((int)puVar9 + 0x3204) = fVar2;
            *(float *)(puVar9 + 0x641) = fVar2;
            *(float *)((int)puVar9 + 0x320c) = fVar2;
            auVar52 = auRam00000000 >> 0x60 & (GPiece<16>)0xffffffff;
            uVar27 = (ulonglong)*(byte *)(puVar31 + 3);
            uVar25 = lVar42 + uVar27 * 0x40;
            uVar43 = uVar25 & 0xffffffff;
            auVar51 = auVar50 | auVar50 << 0x20 | auVar50 << 0x40 | auVar50 << 0x60;
            auVar50 = SPLAT(auVar49) >> 0x60 &
                      (GPiece<16>)0xffffffff;
            auVar49 = SPLAT(auVar52) >> 0x60 &
                      (GPiece<16>)0xffffffff;
            auVar52 = auVar50 | auVar50 << 0x20 | auVar50 << 0x40 | auVar50 << 0x60;
            auVar50 = SPLAT(auVar49) >> 0x60 &
                      (GPiece<16>)0xffffffff;
            auVar50 = auVar50 | auVar50 << 0x20 | auVar50 << 0x40 | auVar50 << 0x60;
            if (*(char *)((int)puVar31 + 7) < '\0') {
              puVar26 = (undefined4 *)uVar25;
              uVar25 = uVar43;
              if ((int)uVar20 != 0) {
                *(undefined4 **)((int)uVar18 + 0xc) = puVar26;
                uVar25 = uVar20;
              }
              auVar49 = auVar51 >> 0x60 & (GPiece<16>)0xffffffff;
              auVar52 = auVar52 >> 0x60 & (GPiece<16>)0xffffffff;
              auVar50 = auVar50 >> 0x60 & (GPiece<16>)0xffffffff;
              uVar8 = storeVectorElementWordIndexed
                                (auVar49 | auVar49 << 0x20 | auVar49 << 0x40 | auVar49 << 0x60,0,
                                 uVar43);
              *puVar26 = uVar8;
              uVar8 = storeVectorElementWordIndexed
                                (auVar52 | auVar52 << 0x20 | auVar52 << 0x40 | auVar52 << 0x60,4,
                                 uVar43);
              puVar26[1] = uVar8;
              uVar8 = storeVectorElementWordIndexed
                                (auVar50 | auVar50 << 0x20 | auVar50 << 0x40 | auVar50 << 0x60,8,
                                 uVar43);
              puVar26[2] = uVar8;
              puVar26[7] = 1;
              uVar18 = uVar43;
              uVar20 = uVar25;
            }
            else {
              uVar43 = (uVar16 - 0x3140) + uVar27 * 0x20;
              if ((int)uVar38 == 0) {
                uVar38 = uVar43 & 0xffffffff;
                uVar17 = (uVar16 - 0x3140) + uVar27 * 0x20;
              }
              else {
                *(int *)((int)uVar17 + 0xc) = (int)uVar43;
                uVar17 = (uVar16 - 0x3140) + (ulonglong)*(byte *)(puVar31 + 3) * 0x20;
              }
              uVar17 = uVar17 & 0xffffffff;
              auVar49 = auVar51 >> 0x60 & (GPiece<16>)0xffffffff;
              auVar52 = auVar52 >> 0x60 & (GPiece<16>)0xffffffff;
              uVar8 = storeVectorElementWordIndexed
                                (auVar49 | auVar49 << 0x20 | auVar49 << 0x40 | auVar49 << 0x60,
                                 (ulonglong)*(byte *)(puVar31 + 3) << 5,uVar16 - 0x3140);
              *(undefined4 *)
               ((int)((ulonglong)*(byte *)(puVar31 + 3) << 5) + (int)(uVar16 - 0x3140)) = uVar8;
              auVar50 = auVar50 >> 0x60 & (GPiece<16>)0xffffffff;
              uVar43 = (uVar16 - 0x313c) + (ulonglong)*(byte *)(puVar31 + 3) * 0x20;
              uVar8 = storeVectorElementWordIndexed
                                (auVar52 | auVar52 << 0x20 | auVar52 << 0x40 | auVar52 << 0x60,0,
                                 uVar43 & 0xffffffff);
              *(undefined4 *)uVar43 = uVar8;
              uVar43 = (uVar16 - 0x3138) + (ulonglong)*(byte *)(puVar31 + 3) * 0x20;
              uVar8 = storeVectorElementWordIndexed
                                (auVar50 | auVar50 << 0x20 | auVar50 << 0x40 | auVar50 << 0x60,0,
                                 uVar43 & 0xffffffff);
              *(undefined4 *)uVar43 = uVar8;
            }
            uVar21 = uVar21 + 1;
            puVar31 = puVar31 + 4;
          } while (uVar21 < *(ushort *)(*(int *)(param_1 + 0x8c) + 10));
        }
        iVar24 = (int)uVar17;
        iVar34 = (int)uVar18;
        iVar19 = *(int *)(param_1 + 0x8c);
        uVar21 = 0;
        uVar43 = 0;
        psVar35 = (short *)(iVar19 + (uint)*(ushort *)(iVar19 + 0xc) + 0x10);
        uVar25 = uVar22;
        uVar27 = uVar43;
        if (*(short *)(iVar19 + 0xe) != 0) {
          do {
            puVar9[0x642] = (longlong)(int)*psVar35;
            sVar7 = psVar35[2];
            uVar22 = puVar9[0x642];
            puVar9[0x642] = (longlong)(int)psVar35[1];
            fVar2 = (float)(longlong)uVar22 * 0.0009765625;
            uVar22 = puVar9[0x642];
            *(float *)(puVar9 + 0x640) = fVar2;
            *(float *)((int)puVar9 + 0x3204) = fVar2;
            *(float *)(puVar9 + 0x641) = fVar2;
            *(float *)((int)puVar9 + 0x320c) = fVar2;
            puVar9[0x642] = (longlong)(int)sVar7;
            auVar50 = auRam00000000 >> 0x60 & (GPiece<16>)0xffffffff;
            fVar2 = (float)(longlong)uVar22 * 0.0009765625;
            *(float *)(puVar9 + 0x640) = fVar2;
            *(float *)((int)puVar9 + 0x3204) = fVar2;
            *(float *)(puVar9 + 0x641) = fVar2;
            *(float *)((int)puVar9 + 0x320c) = fVar2;
            auVar49 = auRam00000000 >> 0x60 & (GPiece<16>)0xffffffff;
            fVar2 = (float)(longlong)puVar9[0x642] * 0.0009765625;
            *(float *)(puVar9 + 0x640) = fVar2;
            *(float *)((int)puVar9 + 0x3204) = fVar2;
            *(float *)(puVar9 + 0x641) = fVar2;
            *(float *)((int)puVar9 + 0x320c) = fVar2;
            auVar52 = auRam00000000 >> 0x60 & (GPiece<16>)0xffffffff;
            uVar22 = lVar42 + (longlong)*(char *)(psVar35 + 3) * 0x40;
            uVar43 = uVar22 & 0xffffffff;
            iVar19 = (int)uVar22;
            uVar8 = storeVectorElementWordIndexed
                              (auVar50 | auVar50 << 0x20 | auVar50 << 0x40 | auVar50 << 0x60,0x20,
                               uVar43);
            *(undefined4 *)(iVar19 + 0x20) = uVar8;
            auVar50 = SPLAT(auVar49) >> 0x60 &
                      (GPiece<16>)0xffffffff;
            auVar49 = SPLAT(auVar52) >> 0x60 &
                      (GPiece<16>)0xffffffff;
            uVar8 = storeVectorElementWordIndexed
                              (auVar50 | auVar50 << 0x20 | auVar50 << 0x40 | auVar50 << 0x60,0x24,
                               uVar43);
            *(undefined4 *)(iVar19 + 0x24) = uVar8;
            auVar50 = SPLAT(auVar49) >> 0x60 &
                      (GPiece<16>)0xffffffff;
            uVar8 = storeVectorElementWordIndexed
                              (auVar50 | auVar50 << 0x20 | auVar50 << 0x40 | auVar50 << 0x60,0x28,
                               uVar43);
            *(undefined4 *)(iVar19 + 0x28) = uVar8;
            uVar22 = uVar43;
            if ((int)uVar25 != 0) {
              *(int *)((int)uVar27 + 0x3c) = iVar19;
              *(undefined4 *)(iVar19 + 0x3c) = 0;
              uVar22 = uVar25;
            }
            uVar21 = uVar21 + 1;
            psVar35 = psVar35 + 4;
            uVar25 = uVar22;
            uVar27 = uVar43;
          } while (uVar21 < *(ushort *)(*(int *)(param_1 + 0x8c) + 0xe));
        }
        iVar19 = *(int *)(param_1 + 0x90);
        uVar21 = 0;
        puVar31 = (ushort *)(iVar19 + (uint)*(ushort *)(iVar19 + 8) + 0x10);
        uVar25 = uVar20;
        if (*(short *)(iVar19 + 10) != 0) {
          do {
            puVar9[0x642] = (longlong)(int)((uint)*puVar31 << 3);
            uVar6 = puVar31[2];
            uVar20 = puVar9[0x642];
            puVar9[0x642] = (longlong)(int)((uint)puVar31[1] << 3);
            fVar2 = (float)(longlong)uVar20 * 3.0517578e-05;
            uVar20 = puVar9[0x642];
            *(float *)(puVar9 + 0x640) = fVar2;
            *(float *)((int)puVar9 + 0x3204) = fVar2;
            *(float *)(puVar9 + 0x641) = fVar2;
            *(float *)((int)puVar9 + 0x320c) = fVar2;
            puVar9[0x642] = (longlong)(int)((uint)uVar6 << 3);
            auVar50 = auRam00000000 >> 0x60 & (GPiece<16>)0xffffffff;
            fVar2 = (float)(longlong)uVar20 * 3.0517578e-05;
            *(float *)(puVar9 + 0x640) = fVar2;
            *(float *)((int)puVar9 + 0x3204) = fVar2;
            *(float *)(puVar9 + 0x641) = fVar2;
            *(float *)((int)puVar9 + 0x320c) = fVar2;
            auVar49 = auRam00000000 >> 0x60 & (GPiece<16>)0xffffffff;
            fVar2 = (float)(longlong)puVar9[0x642] * 3.0517578e-05;
            *(float *)(puVar9 + 0x640) = fVar2;
            *(float *)((int)puVar9 + 0x3204) = fVar2;
            *(float *)(puVar9 + 0x641) = fVar2;
            *(float *)((int)puVar9 + 0x320c) = fVar2;
            auVar52 = auRam00000000 >> 0x60 & (GPiece<16>)0xffffffff;
            auVar51 = auVar50 | auVar50 << 0x20 | auVar50 << 0x40 | auVar50 << 0x60;
            auVar50 = SPLAT(auVar49) >> 0x60 &
                      (GPiece<16>)0xffffffff;
            auVar49 = SPLAT(auVar52) >> 0x60 &
                      (GPiece<16>)0xffffffff;
            auVar52 = auVar50 | auVar50 << 0x20 | auVar50 << 0x40 | auVar50 << 0x60;
            auVar50 = SPLAT(auVar49) >> 0x60 &
                      (GPiece<16>)0xffffffff;
            auVar50 = auVar50 | auVar50 << 0x20 | auVar50 << 0x40 | auVar50 << 0x60;
            uVar27 = uVar18;
            uVar20 = uVar25;
            if (*(char *)((int)puVar31 + 7) < '\0') {
              auVar49 = auVar51 >> 0x60 & (GPiece<16>)0xffffffff;
              auVar52 = auVar52 >> 0x60 & (GPiece<16>)0xffffffff;
              auVar50 = auVar50 >> 0x60 & (GPiece<16>)0xffffffff;
              uVar28 = lVar42 + (ulonglong)*(byte *)(puVar31 + 3) * 0x40;
              uVar11 = uVar28 & 0xffffffff;
              iVar19 = (int)uVar28;
              uVar8 = storeVectorElementWordIndexed
                                (auVar49 | auVar49 << 0x20 | auVar49 << 0x40 | auVar49 << 0x60,0x10,
                                 uVar11);
              *(undefined4 *)(iVar19 + 0x10) = uVar8;
              uVar8 = storeVectorElementWordIndexed
                                (auVar52 | auVar52 << 0x20 | auVar52 << 0x40 | auVar52 << 0x60,0x14,
                                 uVar11);
              *(undefined4 *)(iVar19 + 0x14) = uVar8;
              uVar8 = storeVectorElementWordIndexed
                                (auVar50 | auVar50 << 0x20 | auVar50 << 0x40 | auVar50 << 0x60,0x18,
                                 uVar11);
              *(undefined4 *)(iVar19 + 0x18) = uVar8;
              *(undefined4 *)(iVar19 + 0x1c) = 1;
              if ((*(int *)(iVar19 + 0xc) == 0) &&
                 (uVar27 = uVar11, uVar20 = uVar11, (int)uVar25 != 0)) {
                *(int *)((int)uVar18 + 0xc) = iVar19;
                uVar20 = uVar25;
              }
            }
            else {
              auVar49 = auVar51 >> 0x60 & (GPiece<16>)0xffffffff;
              auVar52 = auVar52 >> 0x60 & (GPiece<16>)0xffffffff;
              uVar18 = (uVar16 - 0x3130) + (ulonglong)*(byte *)(puVar31 + 3) * 0x20;
              uVar8 = storeVectorElementWordIndexed
                                (auVar49 | auVar49 << 0x20 | auVar49 << 0x40 | auVar49 << 0x60,0,
                                 uVar18 & 0xffffffff);
              *(undefined4 *)uVar18 = uVar8;
              auVar50 = auVar50 >> 0x60 & (GPiece<16>)0xffffffff;
              uVar18 = (uVar16 - 0x312c) + (ulonglong)*(byte *)(puVar31 + 3) * 0x20;
              uVar8 = storeVectorElementWordIndexed
                                (auVar52 | auVar52 << 0x20 | auVar52 << 0x40 | auVar52 << 0x60,0,
                                 uVar18 & 0xffffffff);
              *(undefined4 *)uVar18 = uVar8;
              uVar18 = (uVar16 - 0x3128) + (ulonglong)*(byte *)(puVar31 + 3) * 0x20;
              uVar8 = storeVectorElementWordIndexed
                                (auVar50 | auVar50 << 0x20 | auVar50 << 0x40 | auVar50 << 0x60,0,
                                 uVar18 & 0xffffffff);
              *(undefined4 *)uVar18 = uVar8;
              lVar30 = (ulonglong)*(byte *)(puVar31 + 3) * 0x20;
              if (*(int *)((int)aiStack_3124 + (int)lVar30) == 0) {
                uVar18 = (uVar16 - 0x3140) + (ulonglong)*(byte *)(puVar31 + 3) * 0x20;
                if ((int)uVar38 == 0) {
                  uVar38 = uVar18 & 0xffffffff;
                  uVar17 = (uVar16 - 0x3140) + lVar30 & 0xffffffff;
                }
                else {
                  *(int *)((int)uVar17 + 0xc) = (int)uVar18;
                  uVar17 = (uVar16 - 0x3140) + (ulonglong)*(byte *)(puVar31 + 3) * 0x20 & 0xffffffff
                  ;
                }
              }
            }
            iVar24 = (int)uVar17;
            iVar34 = (int)uVar27;
            uVar21 = uVar21 + 1;
            puVar31 = puVar31 + 4;
            uVar18 = uVar27;
            uVar25 = uVar20;
          } while (uVar21 < *(ushort *)(*(int *)(param_1 + 0x90) + 10));
        }
        if (iVar34 != 0) {
          *(undefined4 *)(iVar34 + 0xc) = 0;
        }
        if (iVar24 != 0) {
          *(undefined4 *)(iVar24 + 0xc) = 0;
        }
        iVar19 = *(int *)(param_1 + 0x90);
        uVar21 = 0;
        psVar35 = (short *)(iVar19 + (uint)*(ushort *)(iVar19 + 0xc) + 0x10);
        uVar17 = uVar22;
        if (*(short *)(iVar19 + 0xe) != 0) {
          do {
            puVar9[0x642] = (longlong)(int)*psVar35;
            sVar7 = psVar35[2];
            uVar22 = puVar9[0x642];
            puVar9[0x642] = (longlong)(int)psVar35[1];
            fVar2 = (float)(longlong)uVar22 * 0.0009765625;
            uVar22 = puVar9[0x642];
            *(float *)(puVar9 + 0x640) = fVar2;
            *(float *)((int)puVar9 + 0x3204) = fVar2;
            *(float *)(puVar9 + 0x641) = fVar2;
            *(float *)((int)puVar9 + 0x320c) = fVar2;
            puVar9[0x642] = (longlong)(int)sVar7;
            auVar50 = auRam00000000 >> 0x60 & (GPiece<16>)0xffffffff;
            fVar2 = (float)(longlong)uVar22 * 0.0009765625;
            *(float *)(puVar9 + 0x640) = fVar2;
            *(float *)((int)puVar9 + 0x3204) = fVar2;
            *(float *)(puVar9 + 0x641) = fVar2;
            *(float *)((int)puVar9 + 0x320c) = fVar2;
            auVar49 = auRam00000000 >> 0x60 & (GPiece<16>)0xffffffff;
            fVar2 = (float)(longlong)puVar9[0x642] * 0.0009765625;
            *(float *)(puVar9 + 0x640) = fVar2;
            *(float *)((int)puVar9 + 0x3204) = fVar2;
            *(float *)(puVar9 + 0x641) = fVar2;
            *(float *)((int)puVar9 + 0x320c) = fVar2;
            auVar52 = auRam00000000 >> 0x60 & (GPiece<16>)0xffffffff;
            uVar22 = lVar42 + (longlong)*(char *)(psVar35 + 3) * 0x40;
            uVar18 = uVar22 & 0xffffffff;
            iVar19 = (int)uVar22;
            uVar8 = storeVectorElementWordIndexed
                              (auVar50 | auVar50 << 0x20 | auVar50 << 0x40 | auVar50 << 0x60,0x30,
                               uVar18);
            *(undefined4 *)(iVar19 + 0x30) = uVar8;
            auVar50 = SPLAT(auVar49) >> 0x60 &
                      (GPiece<16>)0xffffffff;
            auVar49 = SPLAT(auVar52) >> 0x60 &
                      (GPiece<16>)0xffffffff;
            uVar8 = storeVectorElementWordIndexed
                              (auVar50 | auVar50 << 0x20 | auVar50 << 0x40 | auVar50 << 0x60,0x34,
                               uVar18);
            *(undefined4 *)(iVar19 + 0x34) = uVar8;
            auVar50 = SPLAT(auVar49) >> 0x60 &
                      (GPiece<16>)0xffffffff;
            uVar8 = storeVectorElementWordIndexed
                              (auVar50 | auVar50 << 0x20 | auVar50 << 0x40 | auVar50 << 0x60,0x38,
                               uVar18);
            *(undefined4 *)(iVar19 + 0x38) = uVar8;
            uVar22 = uVar17;
            uVar25 = uVar43;
            if ((*(int *)(iVar19 + 0x3c) == 0) &&
               (uVar22 = uVar18, uVar25 = uVar18, (int)uVar17 != 0)) {
              *(int *)((int)uVar43 + 0x3c) = iVar19;
              *(undefined4 *)(iVar19 + 0x3c) = 0;
              uVar22 = uVar17;
            }
            uVar21 = uVar21 + 1;
            psVar35 = psVar35 + 4;
            uVar17 = uVar22;
            uVar43 = uVar25;
          } while (uVar21 < *(ushort *)(*(int *)(param_1 + 0x90) + 0xe));
        }
        uVar21 = (uint)uVar20;
        while (uVar21 != 0) {
                    /* WARNING: Read-only address (ram,0x000f5ad0) is written */
                    /* WARNING: Read-only address (ram,0x000f5af0) is written */
                    /* WARNING: Read-only address (ram,0x000f5b00) is written */
                    /* WARNING: Read-only address (ram,0x000f5b10) is written */
                    /* WARNING: Read-only address (ram,0x000f5b20) is written */
                    /* WARNING: Read-only address (ram,0x000f5b30) is written */
                    /* WARNING: Read-only address (ram,0x000f5b40) is written */
                    /* WARNING: Read-only address (ram,0x000f5b50) is written */
                    /* WARNING: Read-only address (ram,0x000f5b60) is written */
                    /* WARNING: Read-only address (ram,0x000f5b70) is written */
          auVar50 = ZEXT416(0);
          uVar29 = (uint)uVar20;
          auVar50 = vectorMultiplyAddFloatingPoint
                              (*(undefined1 (*) [16])(uVar29 & 0xfffffff0),auVar68,
                               auVar50 | auVar50 << 0x20 | auVar50 << 0x40 | auVar50 << 0x60);
          auVar49 = *(undefined1 (*) [16])(uVar29 + 0x10 & 0xfffffff0);
          uVar21 = *(uint *)(uVar29 + 0xc);
          uVar20 = (ulonglong)uVar21;
          auVar50 = vectorMultiplyAddFloatingPoint(auVar49,auVar67,auVar50);
          auVar50 = vectorConditionalSelect(auVar50,auVar49,_DAT_000f5ad0);
          *(undefined1 (*) [16])(uVar29 + 0x10 & 0xfffffff0) = auVar50;
        }
        uVar21 = (uint)uVar22;
                    /* WARNING: Read-only address (ram,0x000f5ad0) is written */
                    /* WARNING: Read-only address (ram,0x000f5af0) is written */
                    /* WARNING: Read-only address (ram,0x000f5b00) is written */
                    /* WARNING: Read-only address (ram,0x000f5b10) is written */
                    /* WARNING: Read-only address (ram,0x000f5b20) is written */
                    /* WARNING: Read-only address (ram,0x000f5b30) is written */
                    /* WARNING: Read-only address (ram,0x000f5b40) is written */
                    /* WARNING: Read-only address (ram,0x000f5b50) is written */
                    /* WARNING: Read-only address (ram,0x000f5b60) is written */
                    /* WARNING: Read-only address (ram,0x000f5b70) is written */
        while (uVar21 != 0) {
                    /* WARNING: Read-only address (ram,0x000f5ad0) is written */
                    /* WARNING: Read-only address (ram,0x000f5af0) is written */
                    /* WARNING: Read-only address (ram,0x000f5b00) is written */
                    /* WARNING: Read-only address (ram,0x000f5b10) is written */
                    /* WARNING: Read-only address (ram,0x000f5b20) is written */
                    /* WARNING: Read-only address (ram,0x000f5b30) is written */
                    /* WARNING: Read-only address (ram,0x000f5b40) is written */
                    /* WARNING: Read-only address (ram,0x000f5b50) is written */
                    /* WARNING: Read-only address (ram,0x000f5b60) is written */
                    /* WARNING: Read-only address (ram,0x000f5b70) is written */
          auVar50 = ZEXT416(0);
          iVar19 = (int)uVar22;
          auVar49 = *(undefined1 (*) [16])(iVar19 + 0x20U & 0xfffffff0);
          auVar50 = vectorMultiplyAddFloatingPoint
                              (auVar49,auVar68,
                               auVar50 | auVar50 << 0x20 | auVar50 << 0x40 | auVar50 << 0x60);
          uVar21 = *(uint *)(iVar19 + 0x3c);
          uVar22 = (ulonglong)uVar21;
          auVar50 = vectorMultiplyAddFloatingPoint
                              (*(undefined1 (*) [16])(iVar19 + 0x30U & 0xfffffff0),auVar67,auVar50);
          auVar50 = vectorConditionalSelect(auVar50,auVar49,_DAT_000f5ad0);
          *(undefined1 (*) [16])(iVar19 + 0x20U & 0xfffffff0) = auVar50;
        }
                    /* WARNING: Read-only address (ram,0x000f5ad0) is written */
                    /* WARNING: Read-only address (ram,0x000f5af0) is written */
                    /* WARNING: Read-only address (ram,0x000f5b00) is written */
                    /* WARNING: Read-only address (ram,0x000f5b10) is written */
                    /* WARNING: Read-only address (ram,0x000f5b20) is written */
                    /* WARNING: Read-only address (ram,0x000f5b30) is written */
                    /* WARNING: Read-only address (ram,0x000f5b40) is written */
                    /* WARNING: Read-only address (ram,0x000f5b50) is written */
                    /* WARNING: Read-only address (ram,0x000f5b60) is written */
                    /* WARNING: Read-only address (ram,0x000f5b70) is written */
        if (*(char *)(param_1 + 0x94) == '\0') {
          uVar21 = 0;
          psVar37 = (short *)(*(int *)(param_1 + 0x8c) + 0x10);
          psVar35 = (short *)(*(int *)(param_1 + 0x90) + 0x10);
          lVar30 = lVar42;
          if (*(int *)(param_1 + 0x68) != 0) {
            do {
              puVar9[0x642] = (longlong)(int)*psVar37;
              fVar2 = (float)(longlong)puVar9[0x642] * 3.0517578e-05;
              *(float *)(puVar9 + 0x640) = fVar2;
              *(float *)((int)puVar9 + 0x3204) = fVar2;
              *(float *)(puVar9 + 0x641) = fVar2;
              *(float *)((int)puVar9 + 0x320c) = fVar2;
              auVar50 = auRam00000000 >> 0x60 & (GPiece<16>)0xffffffff;
              uVar8 = storeVectorElementWordIndexed
                                (auVar50 | auVar50 << 0x20 | auVar50 << 0x40 | auVar50 << 0x60,0,
                                 uVar16 - 0x3270);
              *(undefined4 *)(uVar16 - 0x3270) = uVar8;
              puVar9[0x642] = (longlong)(int)psVar37[1];
              fVar3 = (float)(longlong)puVar9[0x642] * 3.0517578e-05;
              *(float *)(puVar9 + 0x640) = fVar3;
              *(float *)((int)puVar9 + 0x3204) = fVar3;
              *(float *)(puVar9 + 0x641) = fVar3;
              *(float *)((int)puVar9 + 0x320c) = fVar3;
              auVar50 = auRam00000000 >> 0x60 & (GPiece<16>)0xffffffff;
              uVar8 = storeVectorElementWordIndexed
                                (auVar50 | auVar50 << 0x20 | auVar50 << 0x40 | auVar50 << 0x60,0,
                                 uVar16 - 0x326c);
              *(undefined4 *)(uVar16 - 0x326c) = uVar8;
              puVar9[0x642] = (longlong)(int)psVar37[2];
              fVar4 = (float)(longlong)puVar9[0x642] * 3.0517578e-05;
              *(float *)(puVar9 + 0x640) = fVar4;
              *(float *)((int)puVar9 + 0x3204) = fVar4;
              *(float *)(puVar9 + 0x641) = fVar4;
              *(float *)((int)puVar9 + 0x320c) = fVar4;
              auVar50 = auRam00000000 >> 0x60 & (GPiece<16>)0xffffffff;
              uVar8 = storeVectorElementWordIndexed
                                (auVar50 | auVar50 << 0x20 | auVar50 << 0x40 | auVar50 << 0x60,0,
                                 uVar16 - 0x3268);
              *(undefined4 *)(uVar16 - 0x3268) = uVar8;
              puVar9[0x642] = (longlong)(int)psVar37[3];
              fVar5 = (float)(longlong)puVar9[0x642] * 3.0517578e-05;
              *(float *)(puVar9 + 0x640) = fVar5;
              *(float *)((int)puVar9 + 0x3204) = fVar5;
              *(float *)(puVar9 + 0x641) = fVar5;
              *(float *)((int)puVar9 + 0x320c) = fVar5;
              auVar50 = auRam00000000 >> 0x60 & (GPiece<16>)0xffffffff;
              uVar8 = storeVectorElementWordIndexed
                                (auVar50 | auVar50 << 0x20 | auVar50 << 0x40 | auVar50 << 0x60,0,
                                 uVar16 - 0x3264);
              *(undefined4 *)(uVar16 - 0x3264) = uVar8;
              puVar9[0x642] = (longlong)(int)*psVar35;
              fVar12 = (float)(longlong)puVar9[0x642] * 3.0517578e-05;
              *(float *)(puVar9 + 0x640) = fVar12;
              *(float *)((int)puVar9 + 0x3204) = fVar12;
              *(float *)(puVar9 + 0x641) = fVar12;
              *(float *)((int)puVar9 + 0x320c) = fVar12;
              auVar50 = auRam00000000 >> 0x60 & (GPiece<16>)0xffffffff;
              uVar8 = storeVectorElementWordIndexed
                                (auVar50 | auVar50 << 0x20 | auVar50 << 0x40 | auVar50 << 0x60,0,
                                 uVar16 - 0x3260);
              *(undefined4 *)(uVar16 - 0x3260) = uVar8;
              puVar9[0x642] = (longlong)(int)psVar35[1];
              fVar13 = (float)(longlong)puVar9[0x642] * 3.0517578e-05;
              *(float *)(puVar9 + 0x640) = fVar13;
              *(float *)((int)puVar9 + 0x3204) = fVar13;
              *(float *)(puVar9 + 0x641) = fVar13;
              *(float *)((int)puVar9 + 0x320c) = fVar13;
              auVar50 = auRam00000000 >> 0x60 & (GPiece<16>)0xffffffff;
              uVar8 = storeVectorElementWordIndexed
                                (auVar50 | auVar50 << 0x20 | auVar50 << 0x40 | auVar50 << 0x60,0,
                                 uVar16 - 0x325c);
              *(undefined4 *)(uVar16 - 0x325c) = uVar8;
              puVar9[0x642] = (longlong)(int)psVar35[2];
              fVar14 = (float)(longlong)puVar9[0x642] * 3.0517578e-05;
              *(float *)(puVar9 + 0x640) = fVar14;
              *(float *)((int)puVar9 + 0x3204) = fVar14;
              *(float *)(puVar9 + 0x641) = fVar14;
              *(float *)((int)puVar9 + 0x320c) = fVar14;
              auVar50 = auRam00000000 >> 0x60 & (GPiece<16>)0xffffffff;
              uVar8 = storeVectorElementWordIndexed
                                (auVar50 | auVar50 << 0x20 | auVar50 << 0x40 | auVar50 << 0x60,0,
                                 uVar16 - 0x3258);
              *(undefined4 *)(uVar16 - 0x3258) = uVar8;
              puVar9[0x642] = (longlong)(int)psVar35[3];
              fVar15 = (float)(longlong)puVar9[0x642] * 3.0517578e-05;
              *(float *)(puVar9 + 0x640) = fVar15;
              *(float *)((int)puVar9 + 0x3204) = fVar15;
              *(float *)(puVar9 + 0x641) = fVar15;
              *(float *)((int)puVar9 + 0x320c) = fVar15;
              auVar50 = auRam00000000 >> 0x60 & (GPiece<16>)0xffffffff;
              uVar8 = storeVectorElementWordIndexed
                                (auVar50 | auVar50 << 0x20 | auVar50 << 0x40 | auVar50 << 0x60,0,
                                 uVar16 - 0x3254);
              *(undefined4 *)(uVar16 - 0x3254) = uVar8;
              dVar45 = 0.0;
              if (0.0 <= fVar2 * fVar12 + fVar3 * fVar13 + fVar4 * fVar14 + fVar5 * fVar15) {
                FastVecScale(dVar46,uVar16 - 0x31b0,uVar16 - 0x3270);
                *(undefined4 *)(puVar9 + 0x20) = *(undefined4 *)(puVar9 + 0x26);
                *(undefined4 *)((int)puVar9 + 0x104) = *(undefined4 *)((int)puVar9 + 0x134);
                *(undefined4 *)(puVar9 + 0x21) = *(undefined4 *)(puVar9 + 0x27);
                *(undefined4 *)((int)puVar9 + 0x10c) = *(undefined4 *)((int)puVar9 + 0x13c);
                FastVecScale(dVar48,uVar16 - 0x31a0,uVar16 - 0x3260);
                *(undefined4 *)(puVar9 + 0x22) = *(undefined4 *)(puVar9 + 0x28);
                *(undefined4 *)((int)puVar9 + 0x114) = *(undefined4 *)((int)puVar9 + 0x144);
                *(undefined4 *)(puVar9 + 0x23) = *(undefined4 *)(puVar9 + 0x29);
                *(undefined4 *)((int)puVar9 + 0x11c) = *(undefined4 *)((int)puVar9 + 0x14c);
                FastVecAdd(uVar16 - 0x31c0,uVar16 - 0x31e0,uVar16 - 0x31d0);
                *(undefined4 *)(puVar9 + 0x12) = *(undefined4 *)(puVar9 + 0x24);
                *(undefined4 *)((int)puVar9 + 0x94) = *(undefined4 *)((int)puVar9 + 0x124);
                *(undefined4 *)(puVar9 + 0x13) = *(undefined4 *)(puVar9 + 0x25);
                *(undefined4 *)((int)puVar9 + 0x9c) = *(undefined4 *)((int)puVar9 + 300);
              }
              else {
                FastVecScale(0xbff0000000000000,uVar16 - 0x3220,uVar16 - 0x3260);
                FastVecScale(dVar46,uVar16 - 0x3200,uVar16 - 0x3270);
                *(undefined4 *)(puVar9 + 0x14) = *(undefined4 *)(puVar9 + 0x1c);
                *(undefined4 *)((int)puVar9 + 0xa4) = *(undefined4 *)((int)puVar9 + 0xe4);
                *(undefined4 *)(puVar9 + 0x15) = *(undefined4 *)(puVar9 + 0x1d);
                *(undefined4 *)((int)puVar9 + 0xac) = *(undefined4 *)((int)puVar9 + 0xec);
                FastVecScale(dVar48,uVar16 - 0x31f0,uVar16 - 0x3220);
                *(undefined4 *)(puVar9 + 0x16) = *(undefined4 *)(puVar9 + 0x1e);
                *(undefined4 *)((int)puVar9 + 0xb4) = *(undefined4 *)((int)puVar9 + 0xf4);
                *(undefined4 *)(puVar9 + 0x17) = *(undefined4 *)(puVar9 + 0x1f);
                *(undefined4 *)((int)puVar9 + 0xbc) = *(undefined4 *)((int)puVar9 + 0xfc);
                FastVecAdd(uVar16 - 0x3210,uVar16 - 0x3240,uVar16 - 0x3230);
                *(undefined4 *)(puVar9 + 0x12) = *(undefined4 *)(puVar9 + 0x1a);
                *(undefined4 *)((int)puVar9 + 0x94) = *(undefined4 *)((int)puVar9 + 0xd4);
                *(undefined4 *)(puVar9 + 0x13) = *(undefined4 *)(puVar9 + 0x1b);
                *(undefined4 *)((int)puVar9 + 0x9c) = *(undefined4 *)((int)puVar9 + 0xdc);
              }
              fVar2 = *(float *)(puVar9 + 0x12);
              fVar3 = *(float *)((int)puVar9 + 0x94);
              fVar4 = *(float *)(puVar9 + 0x13);
              fVar5 = *(float *)((int)puVar9 + 0x9c);
              dVar44 = (double)(fVar2 * fVar2 + fVar3 * fVar3 + fVar4 * fVar4 + fVar5 * fVar5);
              pfVar33 = (float *)lVar30;
              if (dVar44 <= dVar45) {
                *pfVar33 = fVar2;
                pfVar33[1] = fVar3;
                pfVar33[2] = fVar4;
                pfVar33[3] = fVar5;
              }
              else {
                FastVecScale
                          ((double)(float)(dVar47 / (double)(float)SQRT(dVar44)),uVar16 - 0x3190,
                           uVar16 - 0x3250);
                *pfVar33 = *(float *)(puVar9 + 0x2a);
                pfVar33[1] = *(float *)((int)puVar9 + 0x154);
                pfVar33[2] = *(float *)(puVar9 + 0x2b);
                pfVar33[3] = *(float *)((int)puVar9 + 0x15c);
              }
              uVar21 = uVar21 + 1;
              psVar35 = psVar35 + 4;
              psVar37 = psVar37 + 4;
              lVar30 = lVar30 + 0x40;
            } while (uVar21 < *(uint *)(param_1 + 0x68));
          }
        }
        else {
          uVar23 = 0;
          uVar21 = *(uint *)(param_1 + 0x8c);
          uVar29 = *(uint *)(param_1 + 0x90);
          lVar30 = lVar42;
          if (uVar40 != 0) {
            do {
              uVar29 = uVar29 + 0x10;
              uVar21 = uVar21 + 0x10;
              auVar52 = vectorUnpackHighSignedHalfWord(*(undefined1 (*) [16])(uVar21 & 0xfffffff0));
              auVar49 = vectorUnpackLowSignedHalfWord(*(undefined1 (*) [16])(uVar21 & 0xfffffff0));
              uVar23 = uVar23 + 1;
              auVar50 = ZEXT416(0);
              auVar50 = auVar50 | auVar50 << 0x20 | auVar50 << 0x40 | auVar50 << 0x60;
              auVar55 = vectorUnpackHighSignedHalfWord(*(undefined1 (*) [16])(uVar29 & 0xfffffff0));
              auVar52 = vectorConvertFromSignedFixedPointWord(auVar52,0xf);
              auVar51 = vectorUnpackLowSignedHalfWord(*(undefined1 (*) [16])(uVar29 & 0xfffffff0));
              auVar49 = vectorConvertFromSignedFixedPointWord(auVar49,0xf);
              auVar55 = vectorConvertFromSignedFixedPointWord(auVar55,0xf);
              auVar51 = vectorConvertFromSignedFixedPointWord(auVar51,0xf);
              auVar52 = vectorMultiplyAddFloatingPoint(auVar52,auVar68,auVar50);
              auVar50 = vectorMultiplyAddFloatingPoint(auVar49,auVar68,auVar50);
              auVar49 = vectorMultiplyAddFloatingPoint(auVar55,auVar67,auVar52);
              auVar50 = vectorMultiplyAddFloatingPoint(auVar51,auVar67,auVar50);
              *(undefined1 (*) [16])lVar30 = auVar49;
              ((undefined1 (*) [16])lVar30)[4] = auVar50;
              lVar30 = lVar30 + 0x80;
            } while (uVar23 < uVar40);
          }
        }
        iVar19 = (int)lVar42;
        if (*(MobyAnimLayer **)(param_1 + 0x7c) != (MobyAnimLayer *)0x0) {
          ProcessAnimLayers(*(MobyAnimLayer **)(param_1 + 0x7c),iVar19);
        }
        if (*(Manipulator **)(param_1 + 0x80) != (Manipulator *)0x0) {
          ProcessManipulators(*(Manipulator **)(param_1 + 0x80),iVar19);
        }
        uVar40 = 0;
        uVar21 = *(uint *)(param_1 + 100);
        if (*(int *)(param_1 + 0x68) != 0) {
          iVar24 = 0;
          lVar30 = lVar42;
          uVar29 = uVar21;
          do {
            auVar50 = ZEXT416(0);
            auVar56 = auVar50 | auVar50 << 0x20 | auVar50 << 0x40 | auVar50 << 0x60;
            pauVar10 = (undefined1 (*) [16])lVar30;
            auVar52 = *pauVar10;
            auVar51 = vectorConditionalSelect(pauVar10[2],auVar66,_DAT_000f5ad0);
            auVar49 = vectorAddFloatingPoint(auVar52,auVar52);
            auVar50 = auVar52 & (GPiece<16>)0xffffffff;
            auVar55 = auVar50 | auVar50 << 0x20 | auVar50 << 0x40 | auVar50 << 0x60;
            auVar58 = vectorPermute(auVar52,auVar52,_DAT_000f5b10);
            auVar52 = vectorPermute(auVar52,auVar52,_DAT_000f5b20);
            auVar50 = vectorPermute(auVar49,auVar49,_DAT_000f5b10);
            auVar60 = vectorMultiplyAddFloatingPoint(auVar58,auVar49,auVar56);
            auVar59 = vectorPermute(auVar49,auVar49,_DAT_000f5b20);
            auVar62 = vectorMultiplyAddFloatingPoint(auVar50,auVar55,auVar56);
            auVar50 = vectorNegativeMultiplySubtractFloatingPoint(auVar58,auVar50,auVar66);
            auVar55 = vectorNegativeMultiplySubtractFloatingPoint(auVar59,auVar55,auVar60);
            auVar49 = vectorMultiplyAddFloatingPoint(auVar52,auVar49,auVar62);
            auVar50 = vectorNegativeMultiplySubtractFloatingPoint(auVar52,auVar59,auVar50);
            auVar52 = vectorConditionalSelect(auVar55,auVar49,_DAT_000f5af0);
            auVar59 = vectorConditionalSelect(auVar49,auVar50,_DAT_000f5af0);
            auVar58 = vectorConditionalSelect(auVar50,auVar55,_DAT_000f5af0);
            auVar50 = vectorConditionalSelect(auVar52,auVar50,_DAT_000f5b00);
            auVar52 = vectorConditionalSelect(auVar59,auVar55,_DAT_000f5b00);
            auVar49 = vectorConditionalSelect(auVar58,auVar49,_DAT_000f5b00);
            auVar55 = vectorMergeHighWord(auVar52,auVar50);
            auVar50 = vectorMergeLowWord(auVar52,auVar50);
            auVar58 = vectorMergeHighWord(auVar55,auVar49);
            auVar59 = vectorPermute(auVar55,auVar49,_DAT_000f5b30);
            auVar52 = vectorPermute(auVar50,auVar49,_DAT_000f5b40);
            auVar49 = pauVar10[1];
            auVar50 = vectorPermute(auVar49,auVar56,_DAT_000f5b50);
            auVar60 = vectorPermute(auVar49,auVar56,_DAT_000f5b60);
            auVar55 = vectorPermute(auVar49,auVar56,_DAT_000f5b70);
            auVar50 = vectorMultiplyAddFloatingPoint(auVar58,auVar50,auVar56);
            uVar23 = *(uint *)(iVar19 + (iVar24 + 0xb) * 4);
            auVar49 = vectorMultiplyAddFloatingPoint(auVar59,auVar60,auVar56);
            auVar52 = vectorMultiplyAddFloatingPoint(auVar52,auVar55,auVar56);
            if (uVar23 == 0) {
              uStack_3174 = auVar50.piece<12,4>();
              uStack_3178 = auVar50.piece<8,4>();
              uStack_317c = auVar50.piece<4,4>();
              local_3180 = auVar50.piece<0,4>();
              uStack_3164 = auVar49.piece<12,4>();
              uStack_3168 = auVar49.piece<8,4>();
              uStack_316c = auVar49.piece<4,4>();
              local_3170 = auVar49.piece<0,4>();
              puVar26 = (undefined4 *)(uVar29 & 0xfffffff0);
              puVar26[3] = uStack_3174;
              puVar26[2] = uStack_3178;
              puVar26[1] = uStack_317c;
              *puVar26 = local_3180;
              puVar26 = (undefined4 *)(uVar29 + 0x10 & 0xfffffff0);
              puVar26[3] = uStack_3164;
              puVar26[2] = uStack_3168;
              puVar26[1] = uStack_316c;
              *puVar26 = local_3170;
              uStack_3144 = auVar51.piece<12,4>();
              uStack_3148 = auVar51.piece<8,4>();
              uStack_314c = auVar51.piece<4,4>();
              local_3150 = auVar51.piece<0,4>();
              *(undefined1 (*) [16])(uVar29 + 0x20 & 0xfffffff0) = auVar52;
              puVar26 = (undefined4 *)(uVar29 + 0x30 & 0xfffffff0);
              puVar26[3] = uStack_3144;
              puVar26[2] = uStack_3148;
              puVar26[1] = uStack_314c;
              *puVar26 = local_3150;
            }
            else {
              auVar55 = ZEXT416(0);
              auVar54 = auVar55 | auVar55 << 0x20 | auVar55 << 0x40 | auVar55 << 0x60;
              uVar23 = uVar21 + (uVar23 & 0xfffffc0);
              auVar55 = auVar50 >> 0x60 & (GPiece<16>)0xffffffff;
              auVar58 = auVar52 >> 0x60 & (GPiece<16>)0xffffffff;
              auVar59 = auVar50 >> 0x40 & (GPiece<16>)0xffffffff;
              auVar60 = auVar52 >> 0x40 & (GPiece<16>)0xffffffff;
              auVar56 = auVar50 >> 0x20 & (GPiece<16>)0xffffffff;
              auVar57 = *(undefined1 (*) [16])(uVar23 & 0xfffffff0);
              auVar64 = *(undefined1 (*) [16])(uVar23 + 0x10 & 0xfffffff0);
              auVar62 = auVar49 >> 0x60 & (GPiece<16>)0xffffffff;
              auVar53 = vectorMultiplyAddFloatingPoint
                                  (auVar57,auVar55 | auVar55 << 0x20 | auVar55 << 0x40 |
                                           auVar55 << 0x60,auVar54);
              auVar63 = vectorMultiplyAddFloatingPoint
                                  (auVar57,auVar58 | auVar58 << 0x20 | auVar58 << 0x40 |
                                           auVar58 << 0x60,auVar54);
              auVar55 = auVar51 >> 0x60 & (GPiece<16>)0xffffffff;
              auVar61 = vectorMultiplyAddFloatingPoint
                                  (auVar57,auVar62 | auVar62 << 0x20 | auVar62 << 0x40 |
                                           auVar62 << 0x60,auVar54);
              auVar58 = auVar49 >> 0x40 & (GPiece<16>)0xffffffff;
              auVar65 = *(undefined1 (*) [16])(uVar23 + 0x20 & 0xfffffff0);
              auVar50 = auVar50 & (GPiece<16>)0xffffffff;
              auVar54 = vectorMultiplyAddFloatingPoint
                                  (auVar57,auVar55 | auVar55 << 0x20 | auVar55 << 0x40 |
                                           auVar55 << 0x60,auVar54);
              auVar55 = auVar49 >> 0x20 & (GPiece<16>)0xffffffff;
              auVar49 = auVar49 & (GPiece<16>)0xffffffff;
              auVar62 = *(undefined1 (*) [16])(uVar23 + 0x30 & 0xfffffff0);
              auVar53 = vectorMultiplyAddFloatingPoint
                                  (auVar64,auVar59 | auVar59 << 0x20 | auVar59 << 0x40 |
                                           auVar59 << 0x60,auVar53);
              auVar59 = auVar51 >> 0x40 & (GPiece<16>)0xffffffff;
              auVar63 = vectorMultiplyAddFloatingPoint
                                  (auVar64,auVar60 | auVar60 << 0x20 | auVar60 << 0x40 |
                                           auVar60 << 0x60,auVar63);
              auVar60 = auVar51 >> 0x20 & (GPiece<16>)0xffffffff;
              auVar57 = vectorMultiplyAddFloatingPoint
                                  (auVar64,auVar58 | auVar58 << 0x20 | auVar58 << 0x40 |
                                           auVar58 << 0x60,auVar61);
              auVar58 = auVar52 >> 0x20 & (GPiece<16>)0xffffffff;
              auVar52 = auVar52 & (GPiece<16>)0xffffffff;
              auVar54 = vectorMultiplyAddFloatingPoint
                                  (auVar64,auVar59 | auVar59 << 0x20 | auVar59 << 0x40 |
                                           auVar59 << 0x60,auVar54);
              auVar51 = auVar51 & (GPiece<16>)0xffffffff;
              auVar59 = vectorMultiplyAddFloatingPoint
                                  (auVar65,auVar56 | auVar56 << 0x20 | auVar56 << 0x40 |
                                           auVar56 << 0x60,auVar53);
              auVar56 = vectorMultiplyAddFloatingPoint
                                  (auVar65,auVar55 | auVar55 << 0x20 | auVar55 << 0x40 |
                                           auVar55 << 0x60,auVar57);
              auVar53 = vectorMultiplyAddFloatingPoint
                                  (auVar65,auVar58 | auVar58 << 0x20 | auVar58 << 0x40 |
                                           auVar58 << 0x60,auVar63);
              auVar58 = vectorMultiplyAddFloatingPoint
                                  (auVar65,auVar60 | auVar60 << 0x20 | auVar60 << 0x40 |
                                           auVar60 << 0x60,auVar54);
              auVar55 = vectorMultiplyAddFloatingPoint
                                  (auVar62,auVar50 | auVar50 << 0x20 | auVar50 << 0x40 |
                                           auVar50 << 0x60,auVar59);
              auVar49 = vectorMultiplyAddFloatingPoint
                                  (auVar62,auVar49 | auVar49 << 0x20 | auVar49 << 0x40 |
                                           auVar49 << 0x60,auVar56);
              auVar50 = vectorMultiplyAddFloatingPoint
                                  (auVar62,auVar52 | auVar52 << 0x20 | auVar52 << 0x40 |
                                           auVar52 << 0x60,auVar53);
              auVar52 = vectorMultiplyAddFloatingPoint
                                  (auVar62,auVar51 | auVar51 << 0x20 | auVar51 << 0x40 |
                                           auVar51 << 0x60,auVar58);
              *(undefined1 (*) [16])(uVar29 & 0xfffffff0) = auVar55;
              *(undefined1 (*) [16])(uVar29 + 0x10 & 0xfffffff0) = auVar49;
              *(undefined1 (*) [16])(uVar29 + 0x20 & 0xfffffff0) = auVar50;
              *(undefined1 (*) [16])(uVar29 + 0x30 & 0xfffffff0) = auVar52;
            }
            uVar40 = uVar40 + 1;
            uVar29 = uVar29 + 0x40;
            iVar24 = iVar24 + 0x10;
            lVar30 = lVar30 + 0x40;
          } while (uVar40 < *(uint *)(param_1 + 0x68));
        }
        uVar40 = (uint)uVar38;
        while (uVar40 != 0) {
                    /* WARNING: Read-only address (ram,0x000f5ad0) is written */
                    /* WARNING: Read-only address (ram,0x000f5af0) is written */
                    /* WARNING: Read-only address (ram,0x000f5b00) is written */
                    /* WARNING: Read-only address (ram,0x000f5b10) is written */
                    /* WARNING: Read-only address (ram,0x000f5b20) is written */
                    /* WARNING: Read-only address (ram,0x000f5b30) is written */
                    /* WARNING: Read-only address (ram,0x000f5b40) is written */
                    /* WARNING: Read-only address (ram,0x000f5b50) is written */
                    /* WARNING: Read-only address (ram,0x000f5b60) is written */
                    /* WARNING: Read-only address (ram,0x000f5b70) is written */
          auVar50 = ZEXT416(0);
          uVar40 = (uint)uVar38;
          auVar50 = vectorMultiplyAddFloatingPoint
                              (*(undefined1 (*) [16])(uVar40 & 0xfffffff0),auVar68,
                               auVar50 | auVar50 << 0x20 | auVar50 << 0x40 | auVar50 << 0x60);
          uVar38 = uVar38 - (uVar16 - 0x3140);
          auVar52 = vectorMultiplyAddFloatingPoint
                              (*(undefined1 (*) [16])(uVar40 + 0x10 & 0xfffffff0),auVar67,auVar50);
          auVar50 = vectorPermute(auVar52,auVar66,_DAT_000f5b50);
          auVar49 = vectorPermute(auVar52,auVar66,_DAT_000f5b60);
          auVar52 = vectorPermute(auVar52,auVar66,_DAT_000f5b70);
          if ((uVar38 << 0x20) >> 0x25 < (ulonglong)*(uint *)(param_1 + 0x68)) {
            uVar29 = (uint)((uVar38 & 0xffffffff) << 1) & 0xffffffc0;
            auVar51 = ZEXT416(0);
            auVar51 = auVar51 | auVar51 << 0x20 | auVar51 << 0x40 | auVar51 << 0x60;
            uVar23 = (uint)uVar38 >> 3 & 0x1ffffffc;
            iVar19 = (uVar23 + 1) * 0x10;
            iVar24 = (uVar23 + 2) * 0x10;
            auVar50 = vectorMultiplyAddFloatingPoint
                                (*(undefined1 (*) [16])(uVar29 + uVar21 & 0xfffffff0),auVar50,
                                 auVar51);
            *(undefined1 (*) [16])(uVar29 + uVar21 & 0xfffffff0) = auVar50;
            auVar50 = vectorMultiplyAddFloatingPoint
                                (*(undefined1 (*) [16])(iVar19 + uVar21 & 0xfffffff0),auVar49,
                                 auVar51);
            *(undefined1 (*) [16])(iVar19 + uVar21 & 0xfffffff0) = auVar50;
            auVar50 = vectorMultiplyAddFloatingPoint
                                (*(undefined1 (*) [16])(iVar24 + uVar21 & 0xfffffff0),auVar52,
                                 auVar51);
            *(undefined1 (*) [16])(iVar24 + uVar21 & 0xfffffff0) = auVar50;
          }
          uVar40 = *(uint *)(uVar40 + 0xc);
          uVar38 = (ulonglong)uVar40;
        }
                    /* WARNING: Read-only address (ram,0x000f5ad0) is written */
                    /* WARNING: Read-only address (ram,0x000f5af0) is written */
                    /* WARNING: Read-only address (ram,0x000f5b00) is written */
                    /* WARNING: Read-only address (ram,0x000f5b10) is written */
                    /* WARNING: Read-only address (ram,0x000f5b20) is written */
                    /* WARNING: Read-only address (ram,0x000f5b30) is written */
                    /* WARNING: Read-only address (ram,0x000f5b40) is written */
                    /* WARNING: Read-only address (ram,0x000f5b50) is written */
                    /* WARNING: Read-only address (ram,0x000f5b60) is written */
                    /* WARNING: Read-only address (ram,0x000f5b70) is written */
        uVar40 = *(uint *)(param_1 + 0x88);
        uVar29 = 0;
        if (*(int *)(param_1 + 0x68) != 0) {
          do {
            auVar68 = *(undefined1 (*) [16])(uVar40 & 0xfffffff0);
            auVar49 = *(undefined1 (*) [16])(uVar21 & 0xfffffff0);
            auVar50 = auVar68 >> 0x60 & (GPiece<16>)0xffffffff;
            auVar67 = ZEXT416(0);
            auVar51 = auVar67 | auVar67 << 0x20 | auVar67 << 0x40 | auVar67 << 0x60;
            auVar55 = *(undefined1 (*) [16])(uVar40 + 0x10 & 0xfffffff0);
            auVar60 = *(undefined1 (*) [16])(uVar40 + 0x20 & 0xfffffff0);
            auVar67 = auVar55 >> 0x60 & (GPiece<16>)0xffffffff;
            auVar56 = *(undefined1 (*) [16])(uVar21 + 0x10 & 0xfffffff0);
            auVar66 = auVar60 >> 0x60 & (GPiece<16>)0xffffffff;
            auVar52 = vectorMultiplyAddFloatingPoint
                                (auVar49,auVar50 | auVar50 << 0x20 | auVar50 << 0x40 |
                                         auVar50 << 0x60,auVar51);
            auVar53 = *(undefined1 (*) [16])(uVar40 + 0x30 & 0xfffffff0);
            auVar59 = vectorMultiplyAddFloatingPoint
                                (auVar49,auVar67 | auVar67 << 0x20 | auVar67 << 0x40 |
                                         auVar67 << 0x60,auVar51);
            auVar67 = auVar53 >> 0x60 & (GPiece<16>)0xffffffff;
            auVar58 = vectorMultiplyAddFloatingPoint
                                (auVar49,auVar66 | auVar66 << 0x20 | auVar66 << 0x40 |
                                         auVar66 << 0x60,auVar51);
            auVar50 = auVar68 >> 0x40 & (GPiece<16>)0xffffffff;
            auVar51 = vectorMultiplyAddFloatingPoint
                                (auVar49,auVar67 | auVar67 << 0x20 | auVar67 << 0x40 |
                                         auVar67 << 0x60,
                                 *(undefined1 (*) [16])(uVar21 + 0x30 & 0xfffffff0));
            auVar67 = auVar55 >> 0x40 & (GPiece<16>)0xffffffff;
            auVar66 = auVar60 >> 0x40 & (GPiece<16>)0xffffffff;
            uVar29 = uVar29 + 1;
            auVar68 = auVar68 >> 0x20 & (GPiece<16>)0xffffffff;
            uVar40 = uVar40 + 0x40;
            auVar49 = auVar55 >> 0x20 & (GPiece<16>)0xffffffff;
            auVar62 = *(undefined1 (*) [16])(uVar21 + 0x20 & 0xfffffff0);
            auVar55 = vectorMultiplyAddFloatingPoint
                                (auVar56,auVar50 | auVar50 << 0x20 | auVar50 << 0x40 |
                                         auVar50 << 0x60,auVar52);
            auVar50 = auVar60 >> 0x20 & (GPiece<16>)0xffffffff;
            auVar52 = auVar53 >> 0x40 & (GPiece<16>)0xffffffff;
            auVar59 = vectorMultiplyAddFloatingPoint
                                (auVar56,auVar67 | auVar67 << 0x20 | auVar67 << 0x40 |
                                         auVar67 << 0x60,auVar59);
            auVar67 = auVar53 >> 0x20 & (GPiece<16>)0xffffffff;
            auVar58 = vectorMultiplyAddFloatingPoint
                                (auVar56,auVar66 | auVar66 << 0x20 | auVar66 << 0x40 |
                                         auVar66 << 0x60,auVar58);
            auVar52 = vectorMultiplyAddFloatingPoint
                                (auVar56,auVar52 | auVar52 << 0x20 | auVar52 << 0x40 |
                                         auVar52 << 0x60,auVar51);
            auVar66 = vectorMultiplyAddFloatingPoint
                                (auVar62,auVar68 | auVar68 << 0x20 | auVar68 << 0x40 |
                                         auVar68 << 0x60,auVar55);
            auVar68 = vectorMultiplyAddFloatingPoint
                                (auVar62,auVar49 | auVar49 << 0x20 | auVar49 << 0x40 |
                                         auVar49 << 0x60,auVar59);
            auVar50 = vectorMultiplyAddFloatingPoint
                                (auVar62,auVar50 | auVar50 << 0x20 | auVar50 << 0x40 |
                                         auVar50 << 0x60,auVar58);
            auVar67 = vectorMultiplyAddFloatingPoint
                                (auVar62,auVar67 | auVar67 << 0x20 | auVar67 << 0x40 |
                                         auVar67 << 0x60,auVar52);
            *(undefined1 (*) [16])(uVar21 & 0xfffffff0) = auVar66;
            *(undefined1 (*) [16])(uVar21 + 0x10 & 0xfffffff0) = auVar68;
            *(undefined1 (*) [16])(uVar21 + 0x20 & 0xfffffff0) = auVar50;
            *(undefined1 (*) [16])(uVar21 + 0x30 & 0xfffffff0) = auVar67;
            uVar21 = uVar21 + 0x40;
          } while (uVar29 < *(uint *)(param_1 + 0x68));
        }
      }
      uVar41 = uVar41 + 1;
      param_1 = param_1 + 0xb0;
    } while (uVar41 < param_2);
  }
  return;
}


// 0x00f7a44 (0x50 bytes)
void MB_DrawEntryList(undefined8 param_1,undefined4 param_2)

{
  MB_DrawEntries();
  FUN_004ed52c(&DAT_01111700,param_1,param_2);
  return;
}


// 0x00f7af0 (0x1aac bytes)
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Restarted to delay deadcode elimination for space: stack */
/* [p2_mobyutil] builds 0xb0-byte draw entry + RSX programs for one moby; returns new list end */

ulonglong MB_BuildDrawEntry(float *param_1,ulonglong param_2,longlong param_3)

{
  ushort uVar1;
  int *piVar2;
  uint *puVar3;
  float fVar4;
  ulonglong *puVar5;
  bool bVar6;
  bool bVar7;
  GPiece<16> auVar8;
  RenderingStep *pRVar9;
  RenderingStep *pRVar10;
  gameMode_t gVar11;
  ulonglong uVar12;
  longlong lVar13;
  RsxCmd *pRVar14;
  int iVar15;
  undefined4 uVar16;
  int iVar17;
  int iVar19;
  undefined8 uVar18;
  undefined4 *puVar20;
  ulonglong unaff_r14;
  float *pfVar21;
  ulonglong unaff_r15;
  ulonglong unaff_r16;
  ulonglong unaff_r17;
  ulonglong unaff_r18;
  ulonglong unaff_r19;
  ulonglong unaff_r20;
  ulonglong unaff_r21;
  ulonglong unaff_r22;
  ulonglong uVar22;
  ulonglong unaff_r23;
  ulonglong unaff_r24;
  uint uVar23;
  ulonglong unaff_r25;
  ulonglong uVar24;
  longlong lVar25;
  ulonglong unaff_r26;
  ulonglong unaff_r27;
  RsxCmd RVar26;
  undefined4 *puVar27;
  ulonglong unaff_r28;
  ulonglong unaff_r29;
  longlong lVar28;
  ulonglong unaff_r30;
  RenderingStep *pRVar29;
  ulonglong unaff_r31;
  uint uVar30;
  RenderingStep *pRVar31;
  ulonglong in_LR;
  double dVar32;
  ulonglong in_f27;
  double dVar33;
  ulonglong in_f28;
  double dVar34;
  ulonglong in_f29;
  double dVar35;
  ulonglong in_f30;
  ulonglong in_f31;
  double dVar36;
  double dVar37;
  undefined4 uVar38;
  undefined4 uVar39;
  GPiece<16> in_vs34;
  undefined4 uVar40;
  undefined4 uVar41;
  GPiece<16> local_200;
  undefined4 local_1e0;
  undefined4 uStack_1dc;
  undefined4 uStack_1d8;
  undefined4 uStack_1d4;
  undefined4 local_1c0;
  undefined4 uStack_1bc;
  undefined4 uStack_1b8;
  undefined4 uStack_1b4;
  undefined4 local_1b0;
  undefined4 uStack_1ac;
  undefined4 uStack_1a8;
  undefined4 uStack_1a4;
  undefined4 local_1a0;
  undefined4 uStack_19c;
  undefined4 uStack_198;
  undefined4 uStack_194;
  undefined4 local_180;
  undefined4 uStack_17c;
  undefined4 uStack_178;
  undefined4 uStack_174;
  undefined4 local_170;
  undefined4 uStack_16c;
  undefined4 uStack_168;
  undefined4 uStack_164;
  undefined4 uStack_158;
  undefined4 uStack_154;
  RenderingStep *iVar16;
  
  uVar12 = ZEXT48(&stack0x00000000);
  lVar28 = uVar12 - 0x2b0;
  puVar5 = (ulonglong *)lVar28;
  *puVar5 = uVar12;
  puVar5[0x58] = in_LR;
  puVar5[0x51] = in_f27;
  puVar5[0x52] = in_f28;
  puVar5[0x53] = in_f29;
  puVar5[0x54] = in_f30;
  puVar5[0x55] = in_f31;
  puVar5[0x43] = unaff_r18;
  puVar5[0x45] = unaff_r20;
  puVar5[0x41] = unaff_r16;
  puVar5[0x3f] = unaff_r14;
  gVar11 = g_gameMode;
  puVar5[0x48] = unaff_r23;
  iVar17 = g_viewMtxPtr;
  puVar5[0x50] = unaff_r31;
  puVar5[0x4f] = unaff_r30;
  puVar5[0x4e] = unaff_r29;
  puVar5[0x4d] = unaff_r28;
  puVar5[0x4c] = unaff_r27;
  puVar5[0x4b] = unaff_r26;
  puVar5[0x4a] = unaff_r25;
  puVar5[0x49] = unaff_r24;
  puVar5[0x47] = unaff_r22;
  puVar5[0x46] = unaff_r21;
  puVar5[0x44] = unaff_r19;
  puVar5[0x42] = unaff_r17;
  puVar5[0x40] = unaff_r15;
  iVar15 = DAT_00a15f64;
  if ((gVar11 == GAME_MODE_SPACE) && (DAT_00964590 == 4)) {
    *(undefined4 *)((int)puVar5 + 0x8c) = 0;
    *(undefined4 *)(puVar5 + 0x11) = 0;
    *(undefined4 *)((int)puVar5 + 0x84) = 0;
    *(undefined4 *)(puVar5 + 0x10) = 0;
  }
  else {
    *(undefined4 *)(puVar5 + 0x10) = *(undefined4 *)(DAT_00a15f64 + 0x10);
    *(undefined4 *)((int)puVar5 + 0x84) = *(undefined4 *)(iVar15 + 0x14);
    *(undefined4 *)(puVar5 + 0x11) = *(undefined4 *)(iVar15 + 0x18);
    *(undefined4 *)((int)puVar5 + 0x8c) = *(undefined4 *)(iVar15 + 0x1c);
  }
  pRVar31 = M_Depth;
  *(RenderingStep **)(puVar5 + 0x34) = M_Pass;
  pRVar9 = DL_Pass;
  pRVar29 = MobyPass;
  *(RenderingStep **)((int)puVar5 + 0x1ac) = pRVar31;
  *(RenderingStep **)((int)puVar5 + 0x1a4) = pRVar29;
  *(RenderingStep **)(puVar5 + 0x35) = pRVar9;
  pRVar31 = DL_DepthPass;
  iVar15 = *(int *)(iVar17 + 0x22d8);
  *(RenderingStep **)(puVar5 + 0x36) = MobyDepth;
  *(RenderingStep **)((int)puVar5 + 0x1b4) = pRVar31;
  pRVar31 = HUD_Pass;
  if (iVar15 == 0) {
    uVar30 = 0;
    lVar13 = lVar28;
    do {
      iVar16 = *(RenderingStep **)((int)lVar13 + 0x1a0);
      iVar15 = *(int *)((int)lVar13 + 0x1ac);
      FUN_005e8610(iVar16,0);
      FUN_005e8610(iVar16,1);
      FUN_005e8610(iVar16,3);
      FUN_005e8610(iVar15,0);
      FUN_005e8610(iVar15,1);
      FUN_005e8610(iVar15,2);
      FUN_005e8610(iVar15,3);
      *iVar16->command = NV4097_SET_BLEND_EQUATION_x1;
      iVar16->command[1] = 0x80068006;
      pRVar14 = iVar16->command;
      iVar16->command = pRVar14 + 2;
      pRVar14[2] = NV4097_SET_BLEND_FUNC_SFACTOR_x2;
      iVar19 = 4;
      lVar25 = uVar12 - 0x230;
      iVar16->command[1] = 0x3020302;
      iVar16->command[2] = 0x3030303;
      pRVar14 = iVar16->command;
      iVar16->command = pRVar14 + 3;
      pRVar14[3] = NV4097_SET_TRANSFORM_CONSTANT_LOAD_x5;
      iVar16->command[1] = 0x14;
      iVar16->command = iVar16->command + 2;
      do {
        iVar19 = iVar19 + -1;
        pRVar14 = (RsxCmd *)lVar25;
        lVar25 = lVar25 + 4;
        *iVar16->command = *pRVar14;
        iVar16->command = iVar16->command + 1;
      } while (iVar19 != 0);
      idol_draw::BindVertexProgram(iVar17,iVar16,5);
      idol_draw::BindFragmentProgram(iVar17,iVar16,8);
      FUN_005e85b4(iVar16,0,2,3,0x1c,0);
      FUN_005e85b4(iVar16,1,2,2,0x1c,0);
      FUN_005e85b4(iVar16,3,4,4,0x1c,0);
      if (iVar15 != 0) {
        FUN_005e85b4(iVar15,0,2,3,0x1c,0);
        FUN_005e85b4(iVar15,1,2,2,0x1c,0);
        FUN_005e85b4(iVar15,3,4,4,0x1c,0);
      }
      **(undefined4 **)(iVar15 + 8) = 0x80308;
      *(undefined4 *)(*(int *)(iVar15 + 8) + 4) = 0x206;
      *(undefined4 *)(*(int *)(iVar15 + 8) + 8) = 0xff;
      *(int *)(iVar15 + 8) = *(int *)(iVar15 + 8) + 0xc;
      FUN_005e85f0(iVar15,1);
      *iVar16->command = NV4097_SET_ALPHA_FUNC_x2;
      iVar16->command[1] = 0x206;
      iVar16->command[2] = 1;
      iVar16->command = iVar16->command + 3;
      FUN_005e85f0(iVar15,1);
      uVar30 = uVar30 + 1;
      lVar13 = lVar13 + 4;
    } while (uVar30 < 3);
  }
  else {
    *HUD_Pass->command = NV4097_SET_BLEND_EQUATION_x1;
    pRVar31->command[1] = 0x80068006;
    pRVar31->command = pRVar31->command + 2;
    pRVar31 = HUD_Pass;
    *HUD_Pass->command = NV4097_SET_BLEND_FUNC_SFACTOR_x2;
    pRVar31->command[1] = 0x3020302;
    pRVar31->command[2] = 0x3030303;
    pRVar31->command = pRVar31->command + 3;
    pRVar31 = HUD_Pass;
    lVar13 = uVar12 - 0x230;
    iVar15 = 4;
    *HUD_Pass->command = NV4097_SET_TRANSFORM_CONSTANT_LOAD_x5;
    pRVar31->command[1] = 0x14;
    pRVar31->command = pRVar31->command + 2;
    do {
      pRVar14 = (RsxCmd *)lVar13;
      iVar15 = iVar15 + -1;
      lVar13 = lVar13 + 4;
      *pRVar31->command = *pRVar14;
      pRVar31->command = pRVar31->command + 1;
    } while (iVar15 != 0);
    idol_draw::BindVertexProgram(iVar17,HUD_Pass,5);
    idol_draw::BindFragmentProgram(iVar17,HUD_Pass,8);
    FUN_005e85b4(HUD_Pass,0,2,3,0x1c,0);
    FUN_005e85b4(HUD_Pass,1,2,2,0x1c,0);
    FUN_005e85b4(HUD_Pass,3,4,4,0x1c,0);
    pRVar31 = HUD_Pass;
    *HUD_Pass->command = NV4097_SET_ALPHA_FUNC_x2;
    pRVar31->command[1] = 0x206;
    pRVar31->command[2] = 1;
    pRVar31->command = pRVar31->command + 3;
    FUN_005e85f0(HUD_Pass,1);
    pRVar31 = HUD_Pass;
    *HUD_Pass->command = NV4097_SET_DEPTH_MASK_x1;
    pRVar31->command[1] = 1;
    pRVar31->command = pRVar31->command + 2;
    pRVar31 = HUD_Pass;
    *HUD_Pass->command = NV4097_SET_DEPTH_TEST_ENABLE_x1;
    pRVar31->command[1] = 1;
    pRVar31->command = pRVar31->command + 2;
  }
  dVar36 = 0.0;
  pfVar21 = (float *)((int)param_1 + (int)(param_3 << 8));
  dVar37 = dVar36;
  if (param_1 != pfVar21) {
    do {
      pRVar31 = MobyPass;
      pRVar29 = MobyDepth;
      bVar7 = false;
      if (*(int *)(iVar17 + 0x22d8) == 0) {
        if ((*(char *)((int)param_1 + 0x7f) == '\0') || ((double)param_1[0x21] == dVar37)) {
          uVar22 = 0;
          bVar6 = false;
          do {
            if (param_1 ==
                *(float **)((int)&g_currentWeaponMoby + (int)(uVar22 << 6) + (int)(uVar22 << 4))) {
              bVar6 = true;
              break;
            }
            uVar22 = uVar22 + 1;
          } while ((uVar22 & 0xffffffff) < 7);
          if (bVar6) {
            bVar7 = true;
            unaff_r17 = (ulonglong)(byte)g_heroMobyPtr->field82_0xbd;
            dVar36 = (double)(float)g_heroMobyPtr->unk84;
          }
        }
        else {
          bVar7 = true;
          unaff_r17 = (ulonglong)*(byte *)((int)param_1 + 0xbd);
          dVar36 = (double)param_1[0x21];
        }
      }
      *(undefined1 *)((int)param_1 + 0x31) = 0;
      if (*(char *)(param_1 + 8) == -1) break;
      if ((((-1 < *(char *)(param_1 + 8)) && (((uint)param_1[0xd] & 0x810000) == 0)) &&
          (piVar2 = (int *)param_1[9], piVar2 != (int *)0x0)) &&
         (iVar15 = FUN_005e8638(iVar17,*(undefined2 *)((int)param_1 + 0x36)), iVar15 == 0)) {
        dVar33 = 0.0009765625;
        dVar35 = (double)(param_1[3] * 0.0009765625);
        FUN_005e868c(uVar12 - 0xf8,param_1);
        FUN_005e86a8(0x4090000000000000,uVar12 - 0xec,uVar12 - 0xf8);
        puVar5[0x3c] = (longlong)(int)*(short *)((int)param_1 + 0x32);
        *(undefined4 *)(puVar5 + 6) = *(undefined4 *)((int)puVar5 + 0x1c4);
        *(undefined4 *)(puVar5 + 7) = *(undefined4 *)((int)puVar5 + 0x1cc);
        *(undefined4 *)((int)puVar5 + 0x34) = *(undefined4 *)(puVar5 + 0x39);
        iVar15 = FUN_005e86d8(dVar35,(double)(longlong)puVar5[0x3c],puVar5[6],puVar5[7]);
        if (iVar15 != 0) {
          FUN_005e87d8((double)(float)((double)*param_1 * dVar33),
                       (double)(float)((double)param_1[1] * dVar33),
                       (double)(float)((double)param_1[2] * dVar33),uVar12 - 0x200);
          if (!bVar7) {
            pRVar29 = M_Depth;
            pRVar31 = M_Pass;
          }
          puVar5[0x3c] = (ulonglong)*(byte *)((int)param_1 + 0x23);
          *(undefined4 *)(puVar5 + 6) = *(undefined4 *)((int)puVar5 + 0x1c4);
          uVar16 = DAT_00a24608;
          *(undefined4 *)(puVar5 + 7) = *(undefined4 *)((int)puVar5 + 0x1cc);
          *(undefined4 *)(puVar5 + 8) = uVar16;
          *(undefined4 *)(puVar5 + 9) = DAT_00a24610;
          uVar16 = DAT_00a2460c;
          *(undefined4 *)((int)puVar5 + 0x34) = *(undefined4 *)(puVar5 + 0x39);
          *(undefined4 *)((int)puVar5 + 0x44) = uVar16;
          dVar34 = (double)(longlong)puVar5[0x3c];
          dVar32 = (double)FUN_005e87e8(puVar5[6],puVar5[7],puVar5[8],puVar5[9]);
          bVar6 = false;
          puVar5[0x3c] = (longlong)(int)*(short *)((int)param_1 + 0x32);
          pRVar10 = DL_Pass;
          pRVar9 = DL_DepthPass;
          if ((float)(longlong)puVar5[0x3c] - 8.0 < (float)(dVar32 - dVar35)) {
            dVar32 = (double)(((float)(longlong)puVar5[0x3c] - (float)(dVar32 - dVar35)) * 0.125);
            if (dVar32 < dVar37) {
              dVar32 = dVar37;
            }
            if (1.0 < dVar32) {
              dVar32 = 1.0;
            }
            dVar34 = (double)(float)(dVar34 * dVar32);
            bVar7 = false;
            bVar6 = true;
            *DL_DepthPass->command = NV4097_SET_ALPHA_FUNC_x2;
            pRVar9->command[1] = 0x206;
            pRVar9->command[2] = 4;
            pRVar9->command = pRVar9->command + 3;
            pRVar29 = pRVar9;
            pRVar31 = pRVar10;
          }
          if ((*(int *)(iVar17 + 0x22d8) == 0) && (((uint)param_1[0xd] & 0x8000000) != 0)) {
            pRVar31 = DL_Pass;
            pRVar29 = DL_DepthPass;
          }
          if (bVar7) {
            FUN_005e85b4(ShadowPass,0,2,3,0x1c,0);
            FUN_005e85b4(ShadowPass,1,2,2,0x1c,0);
            FUN_005e85b4(ShadowPass,3,4,4,0x1c,0);
            in_vs34 = local_200;
            FUN_004dfe70(dVar35,iVar17,unaff_r17,
                         ZEXT48(&DAT_00a4c4e0) + unaff_r17 * 0x10 & 0xffffffff);
          }
          *(undefined1 *)((int)param_1 + 0x31) = 1;
          puVar3 = (uint *)*piVar2;
          uVar30 = (uint)param_2;
          if (*(byte *)(piVar2 + 2) == 0) {
            uVar16 = idol::AllocateMemAlign(FrameHeap,0x40,0x10);
            *(undefined4 *)(uVar30 + 100) = uVar16;
          }
          else {
            uVar16 = idol::AllocateMemAlign(FrameHeap,(ulonglong)*(byte *)(piVar2 + 2) << 6,0x10);
            *(undefined4 *)(uVar30 + 100) = uVar16;
          }
          uVar22 = uVar12 - 0x220;
          *(uint *)(uVar30 + 0x68) = (uint)*(byte *)(piVar2 + 2);
          FUN_005e8848((double)*param_1,(double)param_1[1],(double)param_1[2],(double)param_1[3],
                       uVar22);
          FUN_005e885c(dVar33,uVar22);
          uVar23 = 0;
          *(undefined1 (*) [16])(puVar5 + 0xe) = in_vs34;
          uStack_1d4 = in_vs34.piece<12,4>();
          uStack_1d8 = in_vs34.piece<8,4>();
          uStack_1dc = in_vs34.piece<4,4>();
          local_1e0 = in_vs34.piece<0,4>();
          puVar20 = (undefined4 *)(uVar30 + 0x40 & 0xfffffff0);
          puVar20[3] = uStack_1d4;
          puVar20[2] = uStack_1d8;
          puVar20[1] = uStack_1dc;
          *puVar20 = local_1e0;
          uVar24 = (ulonglong)*(uint *)(uVar30 + 100);
          if (*(char *)(piVar2 + 2) != '\0') {
            do {
              puVar5[0x3e] = uVar22;
              FUN_005e88f0(uVar12 - 0x150);
              FUN_005e8940(uVar24,uVar12 - 0x150);
              uVar23 = uVar23 + 1;
              uVar22 = puVar5[0x3e];
              uVar24 = uVar24 + 0x40;
            } while (uVar23 < *(byte *)(piVar2 + 2));
          }
          *(uint *)(uVar30 + 0x5c) = *(int *)(iVar17 + 0x4a8) + puVar3[4];
          uVar1 = *(ushort *)(puVar3 + 6);
          *(ushort *)(uVar30 + 0x50) = uVar1;
          iVar15 = idol::AllocateMemAlign
                             (FrameHeap,
                              ((ulonglong)uVar1 + (ulonglong)*(ushort *)((int)puVar3 + 0x1a)) * 0x1c
                              ,0x10);
          *(int *)(uVar30 + 0x60) = iVar15;
          *(undefined2 *)(uVar30 + 0x52) = *(undefined2 *)((int)puVar3 + 0x1a);
          *(undefined2 *)(uVar30 + 0x54) = *(undefined2 *)(puVar3 + 7);
          uVar18 = *(undefined8 *)(param_1 + 0xe);
          *(int *)(uVar30 + 0x6c) = (int)uVar18;
          *(int *)(uVar30 + 0x70) = (int)((ulonglong)uVar18 >> 0x20);
          fVar4 = param_1[0x24];
          *(short *)(uVar30 + 0x96) = (short)unaff_r17;
          *(float *)(uVar30 + 0x74) = fVar4;
          *(float *)(uVar30 + 0x7c) = param_1[0x18];
          *(int *)(uVar30 + 0x84) = piVar2[6];
          *(float *)(uVar30 + 0x8c) = param_1[0x1a];
          *(float *)(uVar30 + 0x90) = param_1[0x1b];
          *(float *)(uVar30 + 0x78) = param_1[0x15];
          *(float *)(uVar30 + 0x80) = param_1[0x19];
          *(char *)(uVar30 + 0x94) =
               (char)((ulonglong)
                      (LZCOUNT((*(byte *)(param_1 + 0x14) + 1) -
                               (uint)*(byte *)((int)param_1 + 0x51)) << 0x20) >> 0x25);
          *(int *)(uVar30 + 0x88) = piVar2[5];
          puVar5[0x3c] = (longlong)dVar34;
          *(char *)(uVar30 + 0x95) = (char)*(undefined4 *)((int)puVar5 + 0x1e4);
          puVar5[0x3c] = (longlong)(int)*(short *)(piVar2 + 1);
          fVar4 = (float)(longlong)puVar5[0x3c] * 0.00024414062;
          *(float *)(puVar5 + 0x3a) = fVar4;
          *(float *)((int)puVar5 + 0x1d4) = fVar4;
          *(float *)(puVar5 + 0x3b) = fVar4;
          *(float *)((int)puVar5 + 0x1dc) = fVar4;
          uVar16 = storeVectorElementWordIndexed(*(undefined1 (*) [16])(puVar5 + 0x3a),0x98,param_2)
          ;
          *(undefined4 *)(uVar30 + 0x98 & 0xfffffffc) = uVar16;
          puVar5[0x3c] = (longlong)(int)*(short *)((int)piVar2 + 6);
          fVar4 = (float)(longlong)puVar5[0x3c] * 0.00024414062;
          *(float *)(puVar5 + 0x3a) = fVar4;
          *(float *)((int)puVar5 + 0x1d4) = fVar4;
          *(float *)(puVar5 + 0x3b) = fVar4;
          *(float *)((int)puVar5 + 0x1dc) = fVar4;
          uVar16 = storeVectorElementWordIndexed(*(undefined1 (*) [16])(puVar5 + 0x3a),0x9c,param_2)
          ;
          *(undefined4 *)(uVar30 + 0x9c & 0xfffffffc) = uVar16;
          *(float **)(uVar30 + 0xa0) = param_1;
          RVar26 = iVar15 - *(int *)(iVar17 + 0x4a8);
          uVar24 = (ulonglong)RVar26;
          lVar13 = uVar24 + 0x18;
          lVar25 = uVar24 + 0xc;
          if (*(int *)(iVar17 + 0x22d8) == 0) {
            FUN_005e8970(pRVar31,0,uVar24);
            FUN_005e8970(pRVar31,1,lVar25);
            FUN_005e8970(pRVar31,3,lVar13);
            FUN_005e899c(pRVar31,puVar3[5]);
            if (pRVar29 != (RenderingStep *)0x0) {
              FUN_005e8970(pRVar29,0,uVar24);
              FUN_005e8970(pRVar29,1,lVar25);
              FUN_005e8970(pRVar29,3,lVar13);
              FUN_005e899c(pRVar29,puVar3[5]);
            }
            pRVar9 = ShadowPass;
            if (bVar7) {
              *ShadowPass->command = NV4097_SET_VERTEX_DATA_ARRAY_OFFSET_x1;
              pRVar9->command[1] = RVar26 | 0x80000000;
              pRVar9->command = pRVar9->command + 2;
              pRVar9 = ShadowPass;
              *ShadowPass->command = 0x41684;
              pRVar9->command[1] = (RsxCmd)lVar25 | 0x80000000;
              pRVar9->command = pRVar9->command + 2;
              pRVar9 = ShadowPass;
              *ShadowPass->command = 0x4168c;
              pRVar9->command[1] = (RsxCmd)lVar13 | 0x80000000;
              pRVar9->command = pRVar9->command + 2;
              pRVar9 = ShadowPass;
              RVar26 = puVar3[5];
              *ShadowPass->command = NV4097_SET_INDEX_ARRAY_ADDRESS_x2;
              pRVar9->command[1] = RVar26;
              pRVar9->command[2] = 0x11;
              pRVar9->command = pRVar9->command + 3;
            }
          }
          else {
            FUN_005e8970(HUD_Pass,0,uVar24);
            FUN_005e8970(HUD_Pass,1,lVar25);
            FUN_005e8970(HUD_Pass,3,lVar13);
            FUN_005e899c(HUD_Pass,puVar3[5]);
          }
          lVar13 = uVar12 - 400;
          FUN_005e89c4(lVar13,param_1 + 0x30);
          FUN_005e89f4((double)param_1[0xb],lVar13);
          FUN_005e8848((double)param_1[4],(double)param_1[5],(double)param_1[6],0x3ff0000000000000,
                       uVar22);
          puVar20 = (undefined4 *)((uint)uVar22 & 0xfffffff0);
          uVar18 = *(undefined8 *)(puVar20 + 2);
          uVar38 = puVar20[1];
          uVar16 = *puVar20;
          puVar27 = (undefined4 *)lVar13;
          uVar41 = puVar27[2];
          uVar40 = puVar27[1];
          uVar39 = *puVar27;
          puVar20 = (undefined4 *)(uVar30 & 0xfffffff0);
          puVar20[3] = puVar27[3];
          puVar20[2] = uVar41;
          puVar20[1] = uVar40;
          *puVar20 = uVar39;
          puVar20 = (undefined4 *)(uVar30 + 0x10 & 0xfffffff0);
          puVar20[3] = uStack_174;
          puVar20[2] = uStack_178;
          puVar20[1] = uStack_17c;
          *puVar20 = local_180;
          puVar20 = (undefined4 *)(uVar30 + 0x20 & 0xfffffff0);
          puVar20[3] = uStack_164;
          puVar20[2] = uStack_168;
          puVar20[1] = uStack_16c;
          *puVar20 = local_170;
          uStack_154 = (undefined4)uVar18;
          uStack_158 = (undefined4)((ulonglong)uVar18 >> 0x20);
          puVar20 = (undefined4 *)(uVar30 + 0x30 & 0xfffffff0);
          puVar20[3] = uStack_154;
          puVar20[2] = uStack_158;
          puVar20[1] = uVar38;
          *puVar20 = uVar16;
          *(float *)(uVar30 + 0x58) = param_1[0xb];
          FUN_005e8a94(uVar12 - 0x1d0,lVar13);
          puVar20 = (undefined4 *)(uVar12 - 0x1d0);
          uVar39 = puVar20[2];
          uVar38 = puVar20[1];
          uVar16 = *puVar20;
          puVar27[3] = puVar20[3];
          puVar27[2] = uVar39;
          puVar27[1] = uVar38;
          *puVar27 = uVar16;
          uStack_164 = uStack_1a4;
          uStack_168 = uStack_1a8;
          uStack_16c = uStack_1ac;
          local_170 = local_1b0;
          uStack_174 = uStack_1b4;
          uStack_178 = uStack_1b8;
          uStack_17c = uStack_1bc;
          local_180 = local_1c0;
          auVar8.piece<0,4>() = local_1a0;
          auVar8.piece<4,4>() = uStack_19c;
          auVar8.piece<8,4>() = uStack_198;
          auVar8.piece<12,4>() = uStack_194;
          FUN_005e8b10(dVar37,dVar37,dVar37,uVar12 - 0x210);
          pRVar9 = HUD_Pass;
          in_vs34 = vectorConditionalSelect
                              (*(undefined1 (*) [16])(uVar12 - 0x210),auVar8,_DAT_000f7ae0);
          if (*(int *)(iVar17 + 0x22d8) == 0) {
            iVar15 = 0x10;
            *pRVar31->command = 0x441efc;
            pRVar31->command[1] = 4;
            pRVar31->command = pRVar31->command + 2;
            lVar25 = lVar13;
            do {
              pRVar14 = (RsxCmd *)lVar25;
              iVar15 = iVar15 + -1;
              lVar25 = lVar25 + 4;
              *pRVar31->command = *pRVar14;
              pRVar31->command = pRVar31->command + 1;
            } while (iVar15 != 0);
            if (pRVar29 != (RenderingStep *)0x0) {
              iVar15 = 0x10;
              *pRVar29->command = 0x441efc;
              pRVar29->command[1] = 4;
              pRVar29->command = pRVar29->command + 2;
              lVar25 = lVar13;
              do {
                iVar15 = iVar15 + -1;
                pRVar14 = (RsxCmd *)lVar25;
                lVar25 = lVar25 + 4;
                *pRVar29->command = *pRVar14;
                pRVar29->command = pRVar29->command + 1;
              } while (iVar15 != 0);
            }
            pRVar9 = ShadowPass;
            if (bVar7) {
              *ShadowPass->command = 0x441efc;
              iVar15 = 0x10;
              pRVar9->command[1] = 4;
              pRVar9->command = pRVar9->command + 2;
              do {
                iVar15 = iVar15 + -1;
                pRVar14 = (RsxCmd *)lVar13;
                lVar13 = lVar13 + 4;
                *pRVar9->command = *pRVar14;
                pRVar9->command = pRVar9->command + 1;
              } while (iVar15 != 0);
            }
          }
          else {
            uVar30 = 0;
            *HUD_Pass->command = 0x441efc;
            pRVar9->command[1] = 4;
            pRVar9->command = pRVar9->command + 2;
            do {
              uVar30 = uVar30 + 1;
              pRVar14 = (RsxCmd *)lVar13;
              lVar13 = lVar13 + 4;
              *pRVar9->command = *pRVar14;
              pRVar9->command = pRVar9->command + 1;
            } while (uVar30 < 0x10);
          }
          param_2 = param_2 + 0xb0 & 0xffffffff;
          if (*(int *)(iVar17 + 0x22d8) == 0) {
            puVar20 = (undefined4 *)puVar3[2];
            uVar30 = 0;
            if (*puVar3 != 0) {
              do {
                FUN_004d676c(pRVar31,0,*puVar20,(ulonglong)*(byte *)(puVar20 + 3) & 3,
                             ((ulonglong)*(byte *)(puVar20 + 3) << 0x20) >> 0x22 & 3);
                FUN_005e8b20(pRVar31,5);
                FUN_005e8b5c(pRVar31,puVar20[1],puVar20[2]);
                *pRVar31->command = NV4097_SET_BEGIN_END_x1;
                pRVar31->command[1] = 0;
                pRVar31->command = pRVar31->command + 2;
                if (pRVar29 != (RenderingStep *)0x0) {
                  FUN_004d676c(pRVar29,0,*puVar20,(ulonglong)*(byte *)(puVar20 + 3) & 3,
                               ((ulonglong)*(byte *)(puVar20 + 3) << 0x20) >> 0x22 & 3);
                  FUN_005e8b20(pRVar29,5);
                  FUN_005e8b5c(pRVar29,puVar20[1],puVar20[2]);
                  *pRVar29->command = NV4097_SET_BEGIN_END_x1;
                  pRVar29->command[1] = 0;
                  pRVar29->command = pRVar29->command + 2;
                }
                if (bVar7) {
                  FUN_004d676c(ShadowPass,0,*puVar20,(ulonglong)*(byte *)(puVar20 + 3) & 3,
                               ((ulonglong)*(byte *)(puVar20 + 3) << 0x20) >> 0x22 & 3);
                  FUN_005e8b20(ShadowPass,5);
                  FUN_005e8b5c(ShadowPass,puVar20[1],puVar20[2]);
                  pRVar9 = ShadowPass;
                  *ShadowPass->command = NV4097_SET_BEGIN_END_x1;
                  pRVar9->command[1] = 0;
                  pRVar9->command = pRVar9->command + 2;
                }
                uVar30 = uVar30 + 1;
                puVar20 = puVar20 + 4;
              } while (uVar30 < *puVar3);
            }
            if (puVar3[1] != 0) {
              uVar30 = 0;
              *pRVar31->command = NV4097_SET_BLEND_FUNC_SFACTOR_x2;
              pRVar31->command[1] = 0x3020302;
              pRVar31->command[2] = 0x10001;
              pRVar31->command = pRVar31->command + 3;
              puVar20 = (undefined4 *)puVar3[3];
              if (puVar3[1] != 0) {
                do {
                  FUN_004d676c(pRVar31,0,*puVar20,3,3);
                  FUN_005e8b20(pRVar31,5);
                  FUN_005e8b5c(pRVar31,puVar20[1],puVar20[2]);
                  uVar30 = uVar30 + 1;
                  puVar20 = puVar20 + 4;
                  *pRVar31->command = NV4097_SET_BEGIN_END_x1;
                  pRVar31->command[1] = 0;
                  pRVar31->command = pRVar31->command + 2;
                } while (uVar30 < puVar3[1]);
              }
              *pRVar31->command = NV4097_SET_BLEND_FUNC_SFACTOR_x2;
              pRVar31->command[1] = 0x3020302;
              pRVar31->command[2] = 0x3030303;
              pRVar31->command = pRVar31->command + 3;
            }
            if (bVar6) {
              *pRVar29->command = NV4097_SET_ALPHA_FUNC_x2;
              pRVar29->command[1] = 0x206;
              pRVar29->command[2] = 0xff;
              pRVar29->command = pRVar29->command + 3;
            }
            pRVar31 = ShadowPass;
            if (bVar7) {
              *ShadowPass->command = NV4097_SET_VERTEX_DATA_ARRAY_FORMAT_x1;
              pRVar31->command[1] = 2;
              pRVar31->command = pRVar31->command + 2;
              pRVar31 = ShadowPass;
              *ShadowPass->command = 0x41744;
              pRVar31->command[1] = 2;
              pRVar31->command = pRVar31->command + 2;
              pRVar31 = ShadowPass;
              *ShadowPass->command = 0x41748;
              pRVar31->command[1] = 2;
              pRVar31->command = pRVar31->command + 2;
              pRVar31 = ShadowPass;
              *ShadowPass->command = 0x4174c;
              pRVar31->command[1] = 2;
              pRVar31->command = pRVar31->command + 2;
              in_vs34 = local_200;
              FUN_004e1b80(dVar35,dVar36,iVar17,unaff_r17,
                           ZEXT48(&DAT_00a4c4e0) + unaff_r17 * 0x10 & 0xffffffff);
            }
          }
          else {
            puVar20 = (undefined4 *)puVar3[2];
            uVar30 = 0;
            if (*puVar3 != 0) {
              do {
                FUN_004d676c(HUD_Pass,0,*puVar20,(ulonglong)*(byte *)(puVar20 + 3) & 3,
                             ((ulonglong)*(byte *)(puVar20 + 3) << 0x20) >> 0x22 & 3);
                FUN_005e8b20(HUD_Pass,5);
                FUN_005e8b5c(HUD_Pass,puVar20[1],puVar20[2]);
                pRVar31 = HUD_Pass;
                uVar30 = uVar30 + 1;
                puVar20 = puVar20 + 4;
                *HUD_Pass->command = NV4097_SET_BEGIN_END_x1;
                pRVar31->command[1] = 0;
                pRVar31->command = pRVar31->command + 2;
              } while (uVar30 < *puVar3);
            }
            pRVar31 = HUD_Pass;
            if (puVar3[1] != 0) {
              uVar30 = 0;
              *HUD_Pass->command = NV4097_SET_BLEND_FUNC_SFACTOR_x2;
              pRVar31->command[1] = 0x3020302;
              pRVar31->command[2] = 0x10001;
              pRVar31->command = pRVar31->command + 3;
              puVar20 = (undefined4 *)puVar3[3];
              if (puVar3[1] != 0) {
                do {
                  FUN_004d676c(HUD_Pass,0,*puVar20,3,3);
                  FUN_005e8b20(HUD_Pass,5);
                  FUN_005e8b5c(HUD_Pass,puVar20[1],puVar20[2]);
                  pRVar31 = HUD_Pass;
                  uVar30 = uVar30 + 1;
                  puVar20 = puVar20 + 4;
                  *HUD_Pass->command = NV4097_SET_BEGIN_END_x1;
                  pRVar31->command[1] = 0;
                  pRVar31->command = pRVar31->command + 2;
                } while (uVar30 < puVar3[1]);
              }
              pRVar31 = HUD_Pass;
              *HUD_Pass->command = NV4097_SET_BLEND_FUNC_SFACTOR_x2;
              pRVar31->command[1] = 0x3020302;
              pRVar31->command[2] = 0x3030303;
              pRVar31->command = pRVar31->command + 3;
            }
          }
        }
      }
      param_1 = param_1 + 0x40;
    } while (param_1 != pfVar21);
  }
  pRVar29 = HUD_Pass;
  pRVar31 = DL_DepthPass;
  if (*(int *)(iVar17 + 0x22d8) == 0) {
    *DL_DepthPass->command = NV4097_SET_ALPHA_FUNC_x2;
    iVar17 = 3;
    pRVar31->command[1] = 0x206;
    pRVar31->command[2] = 1;
    pRVar31->command = pRVar31->command + 3;
    do {
      iVar15 = *(int *)((int)lVar28 + 0x1a0);
      iVar19 = *(int *)((int)lVar28 + 0x1ac);
      **(undefined4 **)(iVar15 + 8) = 0x41740;
      iVar17 = iVar17 + -1;
      *(undefined4 *)(*(int *)(iVar15 + 8) + 4) = 2;
      puVar20 = (undefined4 *)(*(int *)(iVar15 + 8) + 8);
      *(undefined4 **)(iVar15 + 8) = puVar20;
      *puVar20 = 0x41744;
      *(undefined4 *)(*(int *)(iVar15 + 8) + 4) = 2;
      puVar20 = (undefined4 *)(*(int *)(iVar15 + 8) + 8);
      lVar28 = lVar28 + 4;
      *(undefined4 **)(iVar15 + 8) = puVar20;
      *puVar20 = 0x41748;
      *(undefined4 *)(*(int *)(iVar15 + 8) + 4) = 2;
      puVar20 = (undefined4 *)(*(int *)(iVar15 + 8) + 8);
      *(undefined4 **)(iVar15 + 8) = puVar20;
      *puVar20 = 0x4174c;
      *(undefined4 *)(*(int *)(iVar15 + 8) + 4) = 2;
      *(int *)(iVar15 + 8) = *(int *)(iVar15 + 8) + 8;
      **(undefined4 **)(iVar19 + 8) = 0x41740;
      *(undefined4 *)(*(int *)(iVar19 + 8) + 4) = 2;
      puVar20 = (undefined4 *)(*(int *)(iVar19 + 8) + 8);
      *(undefined4 **)(iVar19 + 8) = puVar20;
      *puVar20 = 0x41744;
      *(undefined4 *)(*(int *)(iVar19 + 8) + 4) = 2;
      puVar20 = (undefined4 *)(*(int *)(iVar19 + 8) + 8);
      *(undefined4 **)(iVar19 + 8) = puVar20;
      *puVar20 = 0x4174c;
      *(undefined4 *)(*(int *)(iVar19 + 8) + 4) = 2;
      *(int *)(iVar19 + 8) = *(int *)(iVar19 + 8) + 8;
    } while (iVar17 != 0);
  }
  else {
    *HUD_Pass->command = NV4097_SET_VERTEX_DATA_ARRAY_FORMAT_x1;
    pRVar29->command[1] = 2;
    pRVar29->command = pRVar29->command + 2;
    pRVar31 = HUD_Pass;
    *HUD_Pass->command = 0x41744;
    pRVar31->command[1] = 2;
    pRVar31->command = pRVar31->command + 2;
    pRVar31 = HUD_Pass;
    *HUD_Pass->command = 0x41748;
    pRVar31->command[1] = 2;
    pRVar31->command = pRVar31->command + 2;
    pRVar31 = HUD_Pass;
    *HUD_Pass->command = 0x4174c;
    pRVar31->command[1] = 2;
    pRVar31->command = pRVar31->command + 2;
    pRVar31 = HUD_Pass;
    memset(HUD_Pass + 1,0,0x90);
    memset(&pRVar31[8].command,0xff,0x48);
    pRVar31[9].field7_0x10 = 0;
    pRVar31[9].callback = (undefined *)0x0;
    idol_draw::BindVertexProgram(iVar17,HUD_Pass,0xc);
    idol_draw::BindFragmentProgram(iVar17,HUD_Pass,0xc);
    pRVar31 = HUD_Pass;
    *HUD_Pass->command = NV4097_SET_DEPTH_MASK_x1;
    pRVar31->command[1] = 0;
    pRVar31->command = pRVar31->command + 2;
    pRVar31 = HUD_Pass;
    *HUD_Pass->command = NV4097_SET_DEPTH_TEST_ENABLE_x1;
    pRVar31->command[1] = 0;
    pRVar31->command = pRVar31->command + 2;
    pRVar31 = HUD_Pass;
    *HUD_Pass->command = NV4097_SET_ALPHA_FUNC_x2;
    pRVar31->command[1] = 0x206;
    pRVar31->command[2] = 0;
    pRVar31->command = pRVar31->command + 3;
    pRVar31 = HUD_Pass;
    *HUD_Pass->command = NV4097_SET_ALPHA_TEST_ENABLE_x1;
    pRVar31->command[1] = 0;
    pRVar31->command = pRVar31->command + 2;
    pRVar31 = HUD_Pass;
    *HUD_Pass->command = NV4097_SET_BLEND_EQUATION_x1;
    pRVar31->command[1] = 0x80068006;
    pRVar31->command = pRVar31->command + 2;
    pRVar31 = HUD_Pass;
    *HUD_Pass->command = NV4097_SET_BLEND_FUNC_SFACTOR_x2;
    pRVar31->command[1] = 0x3020302;
    pRVar31->command[2] = 0x3030303;
    pRVar31->command = pRVar31->command + 3;
  }
  return param_2;
}


// 0x00f959c (0x324 bytes)
int FindMobysCloseToUpdate(void)

{
  bool bVar1;
  byte bVar2;
  int iVar3;
  ulonglong *puVar4;
  int iVar5;
  ulonglong uVar6;
  longlong lVar7;
  int iVar8;
  longlong lVar9;
  uint uVar10;
  ushort *puVar11;
  int iVar12;
  ulonglong unaff_r28;
  ulonglong unaff_r29;
  MobyInstance *pMVar13;
  ulonglong unaff_r30;
  undefined4 *puVar14;
  undefined4 *puVar15;
  ulonglong unaff_r31;
  ulonglong in_LR;
  
  uVar6 = ZEXT48(&stack0x00000000);
  lVar7 = uVar6 - 0x820;
  puVar4 = (ulonglong *)lVar7;
  *puVar4 = uVar6;
  puVar4[0x106] = in_LR;
  puVar4[0x102] = unaff_r30;
  puVar4[0x103] = unaff_r31;
  puVar15 = &DAT_00a49344;
  puVar4[0x101] = unaff_r29;
  puVar4[0x100] = unaff_r28;
  memset(uVar6 - 0x7a0,0,0x700);
  memset(uVar6 - 0xa0,0,0x70);
  for (pMVar13 = g_MobyInstance; pMVar13->state != 0xff; pMVar13 = pMVar13 + 1) {
    if ((-1 < (char)pMVar13->state) && ((pMVar13->modeBits & NO_UPDATE) == NONE)) {
      bVar1 = pMVar13->enabled != '\0';
      if ((pMVar13->drawDistance == 0xff) || (pMVar13->updateDistance == -1)) {
        bVar1 = true;
      }
      else {
        FastVecSub(uVar6 - 0x7b0,&pMVar13->pos,0x951500);
        puVar4[0xfe] = (ulonglong)(byte)pMVar13->updateDistance;
        if (*(float *)(puVar4 + 0xe) * *(float *)(puVar4 + 0xe) +
            *(float *)((int)puVar4 + 0x74) * *(float *)((int)puVar4 + 0x74) +
            *(float *)(puVar4 + 0xf) * *(float *)(puVar4 + 0xf) <
            (float)(longlong)puVar4[0xfe] * (float)(longlong)puVar4[0xfe]) {
          bVar1 = true;
        }
      }
      if (bVar1) {
        if (pMVar13->group < '\0') {
          puVar14 = puVar15;
          if ((pMVar13->modeBits & CAN_BE_AUTO_TARGETED) != NONE) {
            puVar14 = puVar15 + 1;
            *puVar15 = pMVar13;
          }
          bVar2 = pMVar13->mClass;
          puVar15 = puVar14;
          if (*(int *)((int)puVar4 + (uint)bVar2 * 8 + 0x84) == 0) {
            *(MobyInstance **)((int)puVar4 + (uint)bVar2 * 8 + 0x84) = pMVar13;
            *(MobyInstance **)(puVar4 + pMVar13->mClass + 0x10) = pMVar13;
          }
          else {
            *(MobyInstance **)(*(int *)((int)puVar4 + (uint)bVar2 * 8 + 0x84) + 0x28) = pMVar13;
            *(MobyInstance **)((int)puVar4 + (uint)pMVar13->mClass * 8 + 0x84) = pMVar13;
          }
        }
        else {
          *(undefined1 *)((int)puVar4 + (byte)pMVar13->group + 0x780) = 1;
        }
      }
    }
  }
  iVar12 = 0;
  iVar8 = 0;
  lVar9 = lVar7;
  do {
    if (*(char *)((int)lVar9 + 0x780) != '\0') {
      puVar11 = *(ushort **)((int)&g_MobyGroups + iVar8);
      puVar14 = puVar15;
      while( true ) {
        pMVar13 = g_MobyInstance + (*puVar11 & 0x7fff);
        puVar15 = puVar14;
        if ((pMVar13->modeBits & CAN_BE_AUTO_TARGETED) != NONE) {
          puVar15 = puVar14 + 1;
          *puVar14 = pMVar13;
        }
        bVar2 = pMVar13->mClass;
        if (*(int *)((int)puVar4 + (uint)bVar2 * 8 + 0x84) == 0) {
          *(MobyInstance **)((int)puVar4 + (uint)bVar2 * 8 + 0x84) = pMVar13;
          *(MobyInstance **)(puVar4 + pMVar13->mClass + 0x10) = pMVar13;
        }
        else {
          *(MobyInstance **)(*(int *)((int)puVar4 + (uint)bVar2 * 8 + 0x84) + 0x28) = pMVar13;
          *(MobyInstance **)((int)puVar4 + (uint)pMVar13->mClass * 8 + 0x84) = pMVar13;
        }
        if ((short)*puVar11 < 0) break;
        puVar11 = puVar11 + 1;
        puVar14 = puVar15;
      }
    }
    iVar12 = iVar12 + 1;
    lVar9 = lVar9 + 1;
    iVar8 = iVar8 + 4;
  } while (iVar12 < 0x70);
  iVar8 = 0;
  uVar10 = 0;
  iVar12 = 0;
  do {
    iVar5 = (int)lVar7;
    iVar3 = *(int *)(iVar5 + 0x80);
    if (iVar3 != 0) {
      if (iVar12 == 0) {
        iVar8 = *(int *)(iVar5 + 0x84);
        iVar12 = iVar3;
      }
      else {
        *(int *)(iVar8 + 0x28) = iVar3;
        *(undefined4 *)(*(int *)(iVar5 + 0x84) + 0x28) = 0;
        iVar8 = *(int *)(iVar5 + 0x84);
      }
    }
    uVar10 = uVar10 + 1;
    lVar7 = lVar7 + 8;
  } while (uVar10 < 0xe0);
  *puVar15 = 0;
  return iVar12;
}


// 0x00f98d8 (0x380 bytes)
void UpdateMobyAnimFrame(MobyInstance *param_1)

{
  byte bVar1;
  byte bVar2;
  float fVar3;
  int iVar4;
  float *pfVar5;
  void *pvVar6;
  int iVar7;
  int iVar8;
  ulonglong uVar9;
  short *psVar10;
  ulonglong uVar11;
  int iVar12;
  byte bVar13;
  byte bVar14;
  double dVar15;
  double dVar16;
  double dVar17;
  
  dVar15 = (double)param_1->frameSpeed;
  bVar14 = 0;
  if ((dVar15 == 0.0) || ((double)param_1->unk58 == 0.0)) goto LAB_000f9bec;
  bVar13 = param_1->updateId;
  bVar1 = param_1->animationId;
  dVar17 = (double)param_1->animationBlend;
  dVar16 = dVar15;
  if (bVar13 == bVar1) {
    dVar16 = (double)(float)(dVar15 * (double)param_1->unk58);
  }
  dVar16 = (double)(float)(dVar16 + dVar17);
  if ((0.996999979019165 < dVar16) && (dVar16 < 1.003000020980835)) {
    dVar16 = 1.0;
  }
  bVar2 = param_1->previousAnimationFrame;
  iVar4 = *(int *)(&param_1->pClass->type + (uint)bVar1 * 4);
  fVar3 = *(float *)(iVar4 + 0x18);
  if (dVar16 < 1.0) {
    if (dVar16 < 0.0) {
      iVar7 = 8;
      uVar9 = (ulonglong)bVar2;
      do {
        uVar11 = uVar9;
        uVar9 = uVar11 - 1 & 0xffffffff;
        pvVar6 = param_1->pPreviousAnimationData;
        if ((char)uVar9 < '\0') {
          bVar14 = 2;
          uVar9 = (ulonglong)*(byte *)(iVar4 + 0x10) - 1 & 0xffffffff;
        }
        uVar9 = uVar9 & 0xff;
        pfVar5 = *(float **)(iVar4 + 0x1c + (int)(uVar9 << 2));
        if (fVar3 == 0.0) {
          fVar3 = *pfVar5;
        }
        iVar7 = iVar7 + -1;
        dVar16 = (double)(fVar3 * (float)(dVar16 / dVar15) + 1.0);
        if (iVar7 < 1) {
          dVar16 = 0.0;
        }
      } while (dVar16 < 0.0);
      goto LAB_000f9af0;
    }
    param_1->animationBlend = (float)dVar16;
    param_1->field43_0x70 = '\0';
  }
  else {
    iVar7 = 8;
    uVar11 = (ulonglong)(byte)param_1->animationFrame;
    do {
      uVar9 = uVar11;
      pfVar5 = (float *)param_1->pCurrentAnimationData;
      uVar11 = uVar9 + 1 & 0xff;
      if (bVar13 != bVar1) {
        param_1->unk7e = *(char *)(iVar4 + 0x12);
        bVar13 = bVar1;
      }
      fVar3 = *(float *)(iVar4 + 0x18);
      bVar14 = bVar14 | 1;
      if ((uint)*(byte *)(iVar4 + 0x10) <= (uint)uVar11) {
        uVar11 = 0;
        bVar14 = 3;
      }
      pvVar6 = *(void **)(iVar4 + 0x1c + (int)(uVar11 << 2));
      if (fVar3 == 0.0) {
        fVar3 = *pfVar5;
      }
      iVar7 = iVar7 + -1;
      dVar16 = (double)(fVar3 * (float)((double)(float)(dVar16 - 1.0) / dVar15));
      if (iVar7 < 1) {
        dVar16 = 0.0;
      }
    } while (1.0 <= dVar16);
LAB_000f9af0:
    param_1->updateId = bVar13;
    param_1->previousAnimationFrame = (char)uVar9;
    param_1->animationFrame = (char)uVar11;
    param_1->pPreviousAnimationData = pfVar5;
    param_1->pCurrentAnimationData = pvVar6;
    param_1->frameSpeed = fVar3;
    param_1->animationBlend = (float)dVar16;
    param_1->field43_0x70 = bVar14;
  }
  if (param_1->unk7e != '\0') {
    dVar15 = 16.0;
    iVar7 = FastDoubleToInt((double)(param_1->animationBlend * 16.0));
    bVar13 = param_1->previousAnimationFrame;
    iVar8 = FastDoubleToInt((double)(float)(dVar17 * dVar15));
    iVar12 = 0;
    iVar4 = *(int *)(&param_1->pClass->type + (uint)param_1->updateId * 4);
    psVar10 = (short *)(iVar4 + 0x1c + (uint)*(byte *)(iVar4 + 0x10) * 4);
    if (*(char *)(iVar4 + 0x12) != '\0') {
      do {
        if ((int)((uint)bVar2 * 0x10 + iVar8) < (int)psVar10[1] &&
            (int)psVar10[1] <= (int)((uint)bVar13 * 0x10 + iVar7)) {
          PlayMobySound((int)*psVar10,0,param_1);
          break;
        }
        iVar12 = iVar12 + 1;
        psVar10 = psVar10 + 2;
      } while (iVar12 < (int)(uint)*(byte *)(iVar4 + 0x12));
    }
  }
LAB_000f9bec:
  param_1->field43_0x70 = bVar14;
  if ((param_1->unk7c != param_1->unk7d) &&
     ((param_1->unk7d != -1 || (((uint)param_1 >> 8 & 3) == (worldUpdateTime & 3))))) {
    MB_UpdateLoopSound(param_1);
  }
  return;
}


// 0x00f9c58 (0xc0 bytes)
void MB_ProcessJoints(int param_1,undefined8 param_2)

{
  char cVar1;
  int iVar2;
  undefined8 uVar3;
  
  iVar2 = *(int *)(param_1 + 0x24);
  cVar1 = *(char *)(iVar2 + 8);
  if (cVar1 == '\0') {
    MB_TransformJointBatch(0,0,0);
  }
  else {
    uVar3 = MB_BlendJointFrames((double)*(float *)(param_1 + 0x54),*(undefined1 *)(iVar2 + 8),
                                param_2,*(undefined4 *)(iVar2 + 0x18),
                                *(undefined4 *)(param_1 + 0x68),*(undefined4 *)(param_1 + 0x6c));
    if (*(MobyAnimLayer **)(param_1 + 0x60) != (MobyAnimLayer *)0x0) {
      ProcessAnimLayers(*(MobyAnimLayer **)(param_1 + 0x60),(int)uVar3);
    }
    if (*(Manipulator **)(param_1 + 100) != (Manipulator *)0x0) {
      ProcessManipulators(*(Manipulator **)(param_1 + 100),(int)uVar3);
    }
    MB_TransformJointBatch(uVar3,cVar1,param_2);
  }
  return;
}


// 0x00f9d18 (0x2a8 bytes)
/* [p2_mobyutil] (moby, count, jointIdx[], outMtx) computes anim matrices for listed joints */

void MB_ComputeSelectedJoints(int param_1,int param_2,int param_3,undefined4 *param_4)

{
  char cVar1;
  ushort *puVar2;
  int iVar4;
  int iVar5;
  undefined8 uVar3;
  undefined4 *puVar6;
  int iVar7;
  byte *pbVar8;
  byte *pbVar9;
  undefined4 *puVar10;
  uint uVar11;
  uint uVar12;
  ulonglong in_r10;
  int iVar13;
  int iVar14;
  
  iVar14 = 0;
  memset(&DAT_00a34700,0,0x80);
  iVar7 = 0;
  pbVar8 = &DAT_00a34780;
  iVar4 = 0;
  iVar5 = *(int *)(*(int *)(param_1 + 0x24) + 0x1c);
  if (0 < param_2) {
    iVar13 = 0;
    pbVar9 = pbVar8;
    do {
      uVar12 = 0;
      puVar2 = *(ushort **)(iVar5 + 4 + *(int *)(param_3 + iVar13) * 4);
      uVar11 = (uint)*puVar2;
      puVar2 = puVar2 + 2;
      if (uVar11 != 0) {
        do {
          in_r10 = (ulonglong)*(byte *)puVar2;
          uVar12 = uVar12 + 1;
          (&DAT_00a34700)[*(byte *)puVar2] = 1;
          puVar2 = (ushort *)((int)puVar2 + 1);
        } while (uVar12 < uVar11);
      }
      *pbVar9 = (byte)in_r10;
      pbVar9 = pbVar9 + 1;
      if (iVar4 < (int)in_r10) {
        iVar4 = (int)in_r10;
      }
      iVar7 = iVar7 + 1;
      iVar13 = iVar13 + 4;
    } while (iVar7 < param_2);
  }
  DAT_00a3477f = (char)iVar4 + '\x01';
  (&DAT_00a34700)[iVar4] = 0xff;
  iVar5 = *(int *)(param_1 + 0x24);
  cVar1 = *(char *)(iVar5 + 8);
  if (cVar1 == '\0') {
    iVar5 = MB_TransformJointBatch(0,0,0);
  }
  else {
    uVar3 = MB_BlendJointFrames((double)*(float *)(param_1 + 0x54),*(undefined1 *)(iVar5 + 8),
                                *(undefined1 *)(iVar5 + 8),*(undefined4 *)(iVar5 + 0x18),
                                *(undefined4 *)(param_1 + 0x68),*(undefined4 *)(param_1 + 0x6c));
    if (*(MobyAnimLayer **)(param_1 + 0x60) != (MobyAnimLayer *)0x0) {
      ProcessAnimLayers(*(MobyAnimLayer **)(param_1 + 0x60),(int)uVar3);
    }
    if (*(Manipulator **)(param_1 + 100) != (Manipulator *)0x0) {
      ProcessManipulators(*(Manipulator **)(param_1 + 100),(int)uVar3);
    }
    iVar5 = MB_TransformJointBatch(uVar3,cVar1,&DAT_00a34700);
  }
  if (0 < param_2) {
    do {
      iVar4 = (uint)*pbVar8 * 0x40;
      puVar10 = (undefined4 *)(iVar5 + iVar4);
      puVar6 = (undefined4 *)(iVar5 + 0x10 + iVar4);
      iVar14 = iVar14 + 1;
      *param_4 = *puVar10;
      param_4[1] = puVar10[1];
      param_4[2] = puVar10[2];
      param_4[3] = puVar10[3];
      puVar10 = (undefined4 *)(iVar5 + 0x20 + iVar4);
      param_4[4] = *puVar6;
      param_4[5] = puVar6[1];
      pbVar8 = pbVar8 + 1;
      param_4[6] = puVar6[2];
      param_4[7] = puVar6[3];
      puVar6 = (undefined4 *)(iVar5 + 0x30 + iVar4);
      param_4[8] = *puVar10;
      param_4[9] = puVar10[1];
      param_4[10] = puVar10[2];
      param_4[0xb] = puVar10[3];
      param_4[0xc] = *puVar6;
      param_4[0xd] = puVar6[1];
      param_4[0xe] = puVar6[2];
      param_4[0xf] = puVar6[3];
      param_4 = param_4 + 0x10;
    } while (iVar14 < param_2);
  }
  return;
}


// 0x00f9fc0 (0x210 bytes)
void MB_ComputeSelectedJointPos(int param_1,int param_2,int param_3,undefined4 *param_4)

{
  char cVar1;
  ushort *puVar2;
  int iVar4;
  int iVar5;
  undefined8 uVar3;
  undefined4 *puVar6;
  int iVar7;
  byte *pbVar8;
  byte *pbVar9;
  uint uVar10;
  uint uVar11;
  ulonglong in_r10;
  int iVar12;
  int iVar13;
  
  iVar13 = 0;
  memset(&DAT_00a34700,0,0x80);
  iVar7 = 0;
  pbVar8 = &DAT_00a34780;
  iVar4 = 0;
  iVar5 = *(int *)(*(int *)(param_1 + 0x24) + 0x1c);
  if (0 < param_2) {
    iVar12 = 0;
    pbVar9 = pbVar8;
    do {
      uVar11 = 0;
      puVar2 = *(ushort **)(iVar5 + 4 + *(int *)(param_3 + iVar12) * 4);
      uVar10 = (uint)*puVar2;
      puVar2 = puVar2 + 2;
      if (uVar10 != 0) {
        do {
          in_r10 = (ulonglong)*(byte *)puVar2;
          uVar11 = uVar11 + 1;
          (&DAT_00a34700)[*(byte *)puVar2] = 1;
          puVar2 = (ushort *)((int)puVar2 + 1);
        } while (uVar11 < uVar10);
      }
      *pbVar9 = (byte)in_r10;
      pbVar9 = pbVar9 + 1;
      if (iVar4 < (int)in_r10) {
        iVar4 = (int)in_r10;
      }
      iVar7 = iVar7 + 1;
      iVar12 = iVar12 + 4;
    } while (iVar7 < param_2);
  }
  DAT_00a3477f = (char)iVar4 + '\x01';
  (&DAT_00a34700)[iVar4] = 0xff;
  iVar5 = *(int *)(param_1 + 0x24);
  cVar1 = *(char *)(iVar5 + 8);
  if (cVar1 == '\0') {
    iVar5 = MB_TransformJointBatch(0,0,0);
  }
  else {
    uVar3 = MB_BlendJointFrames((double)*(float *)(param_1 + 0x54),*(undefined1 *)(iVar5 + 8),
                                *(undefined1 *)(iVar5 + 8),*(undefined4 *)(iVar5 + 0x18),
                                *(undefined4 *)(param_1 + 0x68),*(undefined4 *)(param_1 + 0x6c));
    if (*(MobyAnimLayer **)(param_1 + 0x60) != (MobyAnimLayer *)0x0) {
      ProcessAnimLayers(*(MobyAnimLayer **)(param_1 + 0x60),(int)uVar3);
    }
    if (*(Manipulator **)(param_1 + 100) != (Manipulator *)0x0) {
      ProcessManipulators(*(Manipulator **)(param_1 + 100),(int)uVar3);
    }
    iVar5 = MB_TransformJointBatch(uVar3,cVar1,&DAT_00a34700);
  }
  if (0 < param_2) {
    do {
      iVar13 = iVar13 + 1;
      puVar6 = (undefined4 *)(iVar5 + 0x30 + (uint)*pbVar8 * 0x40);
      pbVar8 = pbVar8 + 1;
      *param_4 = *puVar6;
      param_4[1] = puVar6[1];
      param_4[2] = puVar6[2];
      param_4[3] = puVar6[3];
      param_4 = param_4 + 4;
    } while (iVar13 < param_2);
  }
  return;
}


// 0x00fa1e0 (0x19c bytes)
/* WARNING: Restarted to delay deadcode elimination for space: stack */

undefined8 GetBlenderAtPnt(Vec4 *position,float *outBlend,int *outBlender)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  bool bVar6;
  int blender;
  float *pfVar7;
  
  blender = 0;
  fVar1 = position->x;
  *outBlender = -1;
  fVar2 = position->y;
  fVar3 = position->z;
  pfVar7 = (float *)&DAT_00a1c900;
  if (0 < BlenderCnt) {
    do {
      if ((fVar1 - *pfVar7) * (fVar1 - *pfVar7) + (fVar2 - pfVar7[1]) * (fVar2 - pfVar7[1]) +
          (fVar3 - pfVar7[2]) * (fVar3 - pfVar7[2]) < pfVar7[3]) {
        bVar6 = false;
        fVar4 = g_Blenders[blender].invMatrix.v0.x * fVar1 +
                g_Blenders[blender].invMatrix.v1.x * fVar2 +
                g_Blenders[blender].invMatrix.v2.x * fVar3 + g_Blenders[blender].invMatrix.v3.x;
        fVar5 = g_Blenders[blender].invMatrix.v0.z * fVar1 +
                g_Blenders[blender].invMatrix.v1.z * fVar2 +
                g_Blenders[blender].invMatrix.v2.z * fVar3 + g_Blenders[blender].invMatrix.v3.z;
        fVar1 = g_Blenders[blender].invMatrix.v0.y * fVar1 +
                g_Blenders[blender].invMatrix.v1.y * fVar2 +
                g_Blenders[blender].invMatrix.v2.y * fVar3 + g_Blenders[blender].invMatrix.v3.y;
        if ((((1.0 < fVar4) || (fVar4 < -1.0)) || (1.0 < fVar1)) ||
           (((fVar1 < -1.0 || (1.0 < fVar5)) || (fVar5 < -1.0)))) {
          bVar6 = true;
        }
        if (bVar6) {
          return 0;
        }
        *outBlender = blender;
        *outBlend = (fVar4 + 1.0) * 0.5;
        return 1;
      }
      blender = blender + 1;
      pfVar7 = pfVar7 + 4;
    } while (blender < BlenderCnt);
  }
  return 0;
}


// 0x00fa3a8 (0x568 bytes)
// strings: 00652e48: 'Leaving blender %d, ambient 0x%08x,dirs 0x%08x\n' | 00652e78: 'Entering blender %d, dlighta %d, dlightb %d, ambienta 0x%08x, ambientb 0x%08x\n'

/* Handles entering/exiting env transitions. (called blenders by the game) */

void SetMobyLightFromBlender(MobyInstance *moby)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  ABGR AVar6;
  uint uVar7;
  uint uVar8;
  undefined4 uVar9;
  GPiece<16> auVar10;
  float fVar11;
  float fVar12;
  int iVar17;
  ulonglong uVar13;
  ulonglong uVar14;
  ulonglong uVar15;
  ulonglong uVar16;
  Blender *pBlender;
  double dVar18;
  double dVar19;
  Vec4 position;
  int blender;
  float blend;
  float local_48 [2];
  uint local_40;
  uint local_3c;
  uint local_38;
  uint local_34;
  ulonglong local_30;
  
  position.x = (moby->pos).x;
  pBlender = (Blender *)0x0;
  position.y = (moby->pos).y;
  position.z = (moby->pos).z;
  dVar19 = 1.0;
  position.w = 1.0;
  iVar17 = GetBlenderAtPnt(&position,&blend,&blender);
  if (iVar17 != 0) {
    pBlender = g_Blenders + blender;
  }
  if (g_CurrentBlender != blender) {
    if (blender == -1) {
      uVar13.piece<0,4>() = moby->color;
      uVar13.piece<4,4>() = moby->light;
      printf("Leaving blender %d, ambient 0x%08x,dirs 0x%08x\n",g_CurrentBlender,
                   uVar13 >> 0x20,uVar13 & 0xffffffff);
    }
    else {
      printf("Entering blender %d, dlighta %d, dlightb %d, ambienta 0x%08x, ambientb 0x%08x\n"
                   ,blender,pBlender->dLightA,pBlender->dLightB,pBlender->ambientA,
                   pBlender->ambientB);
    }
    g_CurrentBlender = blender;
  }
  if ((pBlender == (Blender *)0x0) || ((pBlender->flags & 1) == 0)) {
    uVar14.piece<0,4>() = moby->color;
    uVar14.piece<4,4>() = moby->light;
    moby->color = (int)((uVar14 & 0xffffffff) >> 0x20);
    moby->light = (int)(uVar14 & 0xffffffff);
  }
  else {
    AVar6 = pBlender->ambientA;
    dVar18 = (double)blend;
    fVar4 = (float)(dVar19 - dVar18);
    fVar11 = fVar4 * (float)((uint)AVar6 & 0xff);
    fVar5 = 255.0;
    fVar12 = (float)((uint)AVar6 >> 8 & 0xff) * fVar4;
    fVar4 = (float)((uint)AVar6 >> 0x10 & 0xff) * fVar4;
    if (255.0 < fVar11) {
      fVar11 = fVar5;
    }
    if (255.0 < fVar12) {
      fVar12 = fVar5;
    }
    if (255.0 < fVar4) {
      fVar4 = fVar5;
    }
    AVar6 = pBlender->ambientB;
    fVar1 = (float)((double)((uint)AVar6 & 0xff) * dVar18);
    fVar2 = (float)((double)((uint)AVar6 >> 8 & 0xff) * dVar18);
    fVar3 = (float)((double)((uint)AVar6 >> 0x10 & 0xff) * dVar18);
    if (255.0 < fVar1) {
      fVar1 = fVar5;
    }
    if (255.0 < fVar2) {
      fVar2 = fVar5;
    }
    if (255.0 < fVar3) {
      fVar3 = fVar5;
    }
    fVar1 = fVar11 + fVar1 + 0.5;
    fVar4 = fVar4 + fVar3 + 0.5;
    fVar11 = fVar12 + fVar2 + 0.5;
    if (255.0 < fVar1) {
      fVar1 = fVar5;
    }
    if (255.0 < fVar11) {
      fVar11 = fVar5;
    }
    if (255.0 < fVar4) {
      fVar4 = fVar5;
    }
    local_40 = (int)fVar1 | (int)fVar11 << 8 | (int)fVar4 << 0x10 | 0xff000000;
    auVar10 = auRam00000000 >> 0x60 & (GPiece<16>)0xffffffff;
    uVar9 = storeVectorElementWordIndexed
                      (auVar10 | auVar10 << 0x20 | auVar10 << 0x40 | auVar10 << 0x60,0x80,
                       (longlong)(int)moby);
    *(undefined4 *)((uint)&moby->colorManipulator & 0xfffffffc) = uVar9;
    local_30 = (ulonglong)(blend * 65535.0);
    uVar13 = (local_30 & 0xffff) << 0x10 |
             ((ulonglong)(uint)pBlender->dLightB & 0xff) << 8 |
             (ulonglong)(uint)pBlender->dLightA & 0xff;
    moby->color = (int)(uVar13 >> 0x20);
    moby->light = (int)uVar13;
    local_3c = local_40;
    local_38 = local_40;
    local_34 = local_40;
  }
  iVar17 = STUB_000da2f8_RET_0(&position,local_48);
  if (iVar17 == 0) {
    uVar16.piece<0,4>() = moby->color;
    uVar16.piece<4,4>() = moby->light;
    uVar16 = uVar16 | (ulonglong)(uint)moby->colorManipulator << 0x20;
    moby->color = (int)(uVar16 >> 0x20);
    moby->light = (int)uVar16;
  }
  else {
    uVar7 = *(uint *)(iVar17 + 0x10);
    uVar8 = moby->colorManipulator;
    uVar15.piece<0,4>() = moby->color;
    uVar15.piece<4,4>() = moby->light;
    fVar4 = (float)(dVar19 - (double)((local_48[0] * local_48[0]) / *(float *)(iVar17 + 0xc)));
    fVar5 = 255.0;
    fVar11 = (float)(uVar7 & 0xff) * fVar4 + (float)(uVar8 & 0xff) + 0.5;
    fVar12 = (float)(uVar7 >> 8 & 0xff) * fVar4 + (float)(uVar8 >> 8 & 0xff) + 0.5;
    fVar4 = (float)(uVar7 >> 0x10 & 0xff) * fVar4 + (float)(uVar8 >> 0x10 & 0xff) + 0.5;
    if (255.0 < fVar11) {
      fVar11 = fVar5;
    }
    if (255.0 < fVar12) {
      fVar12 = fVar5;
    }
    if (255.0 < fVar4) {
      fVar4 = fVar5;
    }
    uVar15 = uVar15 | ((ulonglong)(uint)(int)fVar11 | ((ulonglong)(uint)(int)fVar12 & 0xffffff) << 8
                       | ((ulonglong)(uint)(int)fVar4 & 0xffff) << 0x10 | 0xffffffffff000000) <<
                      0x20;
    moby->color = (int)(uVar15 >> 0x20);
    moby->light = (int)uVar15;
  }
  return;
}


// 0x00fa910 (0x24 bytes)
void STUB_000fa910(...)

{
  STUB_000da2f8_RET_0();
  return;
}


// 0x00fa940 (0x146c bytes)
void * InterpolateAnimation(int param_1,uint param_2)

{
  undefined1 uVar1;
  byte bVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  ushort uVar6;
  ushort uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  Manipulator *pMVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  undefined2 uVar15;
  GPiece<16> auVar16;
  ulonglong *puVar17;
  undefined4 *puVar18;
  uint uVar19;
  uint uVar20;
  bool bVar21;
  size_t __n;
  ulonglong uVar22;
  int iVar25;
  undefined4 *puVar26;
  int iVar27;
  ulonglong uVar23;
  longlong lVar24;
  void *pvVar28;
  longlong lVar29;
  undefined4 *puVar30;
  int iVar31;
  int iVar32;
  longlong lVar33;
  int iVar34;
  ulonglong uVar35;
  int iVar36;
  int iVar38;
  ulonglong uVar37;
  int iVar40;
  ulonglong uVar39;
  ulonglong unaff_r14;
  ulonglong unaff_r15;
  ulonglong unaff_r16;
  longlong lVar41;
  ulonglong unaff_r17;
  ulonglong unaff_r18;
  longlong lVar42;
  ulonglong unaff_r19;
  longlong lVar43;
  ulonglong unaff_r20;
  longlong lVar44;
  ulonglong unaff_r21;
  ulonglong unaff_r22;
  ulonglong unaff_r23;
  ulonglong unaff_r24;
  ulonglong unaff_r25;
  ulonglong unaff_r26;
  ulonglong unaff_r27;
  ulonglong unaff_r28;
  int iVar46;
  longlong lVar45;
  ulonglong unaff_r29;
  int iVar47;
  ulonglong unaff_r30;
  ulonglong unaff_r31;
  ulonglong uVar48;
  undefined4 *puVar49;
  ulonglong in_LR;
  ulonglong in_f27;
  ulonglong in_f28;
  double dVar50;
  ulonglong in_f29;
  double dVar51;
  ulonglong in_f30;
  double dVar52;
  ulonglong in_f31;
  undefined8 uVar53;
  double dVar54;
  GPiece<16> auVar55;
  GPiece<16> auVar56;
  GPiece<16> auVar57;
  GPiece<16> auVar58;
  GPiece<16> auVar59;
  GPiece<16> auVar60;
  GPiece<16> auVar61;
  GPiece<16> auVar62;
  GPiece<16> auVar63;
  GPiece<16> auVar64;
  GPiece<16> auVar65;
  
  uVar23 = ZEXT48(&stack0x00000000);
  lVar24 = uVar23 - 0x2320;
  puVar17 = (ulonglong *)lVar24;
  *puVar17 = uVar23;
  puVar17[0x466] = in_LR;
  puVar17[0x45f] = in_f27;
  puVar17[0x460] = in_f28;
  puVar17[0x461] = in_f29;
  puVar17[0x462] = in_f30;
  puVar17[0x463] = in_f31;
  puVar17[0x452] = unaff_r19;
  puVar17[0x44d] = unaff_r14;
  puVar17[0x45e] = unaff_r31;
  puVar17[0x45d] = unaff_r30;
  fVar3 = *(float *)(param_1 + 0x54);
  uVar8 = *(undefined4 *)(param_1 + 0x68);
  uVar9 = *(undefined4 *)(param_1 + 0x6c);
  uVar10 = *(undefined4 *)(*(int *)(param_1 + 0x24) + 0x18);
  uVar1 = *(undefined1 *)(*(int *)(param_1 + 0x24) + 8);
  puVar17[0x45c] = unaff_r29;
  puVar17[0x45b] = unaff_r28;
  puVar17[0x45a] = unaff_r27;
  puVar17[0x459] = unaff_r26;
  puVar17[0x458] = unaff_r25;
  puVar17[0x457] = unaff_r24;
  puVar17[0x456] = unaff_r23;
  puVar17[0x455] = unaff_r22;
  puVar17[0x454] = unaff_r21;
  puVar17[0x453] = unaff_r20;
  puVar17[0x451] = unaff_r18;
  puVar17[0x450] = unaff_r17;
  puVar17[0x44f] = unaff_r16;
  puVar17[0x44e] = unaff_r15;
  uVar22 = MB_BlendJointFrames((double)fVar3,uVar1,uVar1,uVar10,uVar8,uVar9);
  if ((*(MobyAnimLayer **)(param_1 + 0x60) != (MobyAnimLayer *)0x0) && ((param_2 & 0x100) == 0)) {
    ProcessAnimLayers(*(MobyAnimLayer **)(param_1 + 0x60),(int)uVar22);
  }
  pMVar11 = *(Manipulator **)(param_1 + 100);
  puVar17[0x440] = uVar22;
  if ((pMVar11 != (Manipulator *)0x0) && (puVar17[0x440] = uVar22, (param_2 & 0x200) == 0)) {
    puVar17[0x440] = uVar22;
    ProcessManipulators(pMVar11,(int)uVar22);
  }
  iVar47 = *(int *)(param_1 + 0x68);
  lVar29 = ((ulonglong)param_2 & 0xff) * 0x800;
  lVar43 = ZEXT48(&DAT_00a2c5c0) + lVar29;
  bVar2 = *(byte *)(*(int *)(param_1 + 0x24) + 8);
  uVar22 = (ulonglong)*(uint *)(*(int *)(param_1 + 0x24) + 0x18);
  puVar18 = (undefined4 *)lVar43;
  uVar6 = *(ushort *)(iVar47 + 8);
  uVar7 = *(ushort *)(iVar47 + 8);
  *(undefined4 **)(puVar17 + 0x442) = puVar18 + 4;
  memset(uVar23 - 0x1b8,0,0x81);
  iVar25 = 0;
  iVar46 = iVar47 + (uint)uVar6 + 0x10;
  if (*(short *)(iVar47 + 10) != 0) {
    do {
      iVar25 = iVar25 + 1;
      *(undefined1 *)((int)puVar17 + *(byte *)(iVar46 + 6) + 0x2168) = *(undefined1 *)(iVar46 + 7);
      iVar46 = iVar46 + 8;
    } while (iVar25 < (int)(uint)*(ushort *)(iVar47 + 10));
  }
  iVar25 = 0;
  iVar46 = iVar47 + (uint)uVar7 + 0x10;
  if (*(short *)(iVar47 + 10) != 0) {
    do {
      iVar25 = iVar25 + 1;
      *(byte *)((int)puVar17 + *(byte *)(iVar46 + 6) + 0x2168) =
           *(byte *)((int)puVar17 + *(byte *)(iVar46 + 6) + 0x2168) | *(byte *)(iVar46 + 7);
      iVar46 = iVar46 + 8;
    } while (iVar25 < (int)(uint)*(ushort *)(iVar47 + 10));
  }
  lVar44 = 0;
  puVar17[0x441] = (ulonglong)bVar2;
  iVar47 = 0;
  lVar42 = 0;
  if (bVar2 != 0) {
    iVar46 = 0;
    uVar48 = puVar17[0x440];
    lVar45 = 0;
    lVar41 = lVar24;
    do {
      puVar49 = (undefined4 *)uVar48;
      *(undefined4 *)(puVar17 + 0xe) = *puVar49;
      *(undefined4 *)((int)puVar17 + 0x74) = puVar49[1];
      puVar30 = (undefined4 *)((int)puVar17[0x440] + 0x10 + iVar46);
      puVar26 = (undefined4 *)((int)puVar17[0x440] + 0x20 + iVar46);
      *(undefined4 *)(puVar17 + 0xf) = puVar49[2];
      *(undefined4 *)((int)puVar17 + 0x7c) = puVar49[3];
      *(undefined4 *)(puVar17 + 0x10) = *puVar30;
      *(undefined4 *)((int)puVar17 + 0x84) = puVar30[1];
      *(undefined4 *)(puVar17 + 0x11) = puVar30[2];
      *(undefined4 *)((int)puVar17 + 0x8c) = puVar30[3];
      *(undefined4 *)(puVar17 + 0x12) = *puVar26;
      *(undefined4 *)((int)puVar17 + 0x94) = puVar26[1];
      *(undefined4 *)(puVar17 + 0x13) = puVar26[2];
      *(undefined4 *)((int)puVar17 + 0x9c) = puVar26[3];
      uVar53 = 0x40e0000000000000;
      FastVecScale(0x40e0000000000000,uVar23 - 0x2280,uVar23 - 0x22b0);
      dVar52 = (double)*(float *)(puVar17 + 0x14);
      dVar51 = (double)*(float *)((int)puVar17 + 0xa4);
      dVar54 = (double)*(float *)(puVar17 + 0x15);
      dVar50 = (double)*(float *)((int)puVar17 + 0xac);
      FastVecScale(uVar53,uVar23 - 0x2270,uVar23 - 0x22a0);
      puVar17[0x443] = (longlong)(int)*(float *)(puVar17 + 0x16);
      iVar25 = *(int *)((int)puVar17 + 0x221c);
      puVar17[0x443] = (longlong)(int)*(float *)((int)puVar17 + 0xb4);
      iVar32 = *(int *)((int)puVar17 + 0x221c);
      puVar17[0x443] = (longlong)(int)*(float *)(puVar17 + 0x17);
      uVar53 = 0x4090000000000000;
      iVar34 = *(int *)((int)puVar17 + 0x221c);
      FastVecScale(0x4090000000000000,uVar23 - 0x2260,uVar23 - 0x2290);
      puVar17[0x443] = (longlong)(int)*(float *)(puVar17 + 0x18);
      iVar12 = *(int *)((int)puVar17 + 0x221c);
      *(int *)(puVar17 + 0x43e) = iVar12;
      *(int *)((int)puVar17 + 0x21f4) = iVar12;
      *(int *)(puVar17 + 0x43f) = iVar12;
      *(int *)((int)puVar17 + 0x21fc) = iVar12;
      puVar17[0x443] = (longlong)(int)*(float *)((int)puVar17 + 0xc4);
      iVar13 = *(int *)((int)puVar17 + 0x221c);
      auVar63 = auRam00000000 >> 0x60 & (GPiece<16>)0xffffffff;
      *(int *)(puVar17 + 0x43e) = iVar13;
      *(int *)((int)puVar17 + 0x21f4) = iVar13;
      *(int *)(puVar17 + 0x43f) = iVar13;
      *(int *)((int)puVar17 + 0x21fc) = iVar13;
      puVar17[0x443] = (longlong)(int)*(float *)(puVar17 + 0x19);
      iVar14 = *(int *)((int)puVar17 + 0x221c);
      auVar55 = auRam00000000 >> 0x60 & (GPiece<16>)0xffffffff;
      *(int *)(puVar17 + 0x43e) = iVar14;
      *(int *)((int)puVar17 + 0x21f4) = iVar14;
      *(int *)(puVar17 + 0x43f) = iVar14;
      *(int *)((int)puVar17 + 0x21fc) = iVar14;
      auVar64 = auRam00000000 >> 0x60 & (GPiece<16>)0xffffffff;
      auVar65 = auVar63 | auVar63 << 0x20 | auVar63 << 0x40 | auVar63 << 0x60;
      auVar63 = SPLAT(auVar55) >> 0x60 &
                (GPiece<16>)0xffffffff;
      auVar55 = SPLAT(auVar64) >> 0x60 &
                (GPiece<16>)0xffffffff;
      auVar64 = auVar63 | auVar63 << 0x20 | auVar63 << 0x40 | auVar63 << 0x60;
      auVar63 = SPLAT(auVar55) >> 0x60 &
                (GPiece<16>)0xffffffff;
      auVar63 = auVar63 | auVar63 << 0x20 | auVar63 << 0x40 | auVar63 << 0x60;
      FastVecScale(uVar53,uVar23 - 0x2250,uVar22);
      fVar3 = *(float *)(puVar17 + 0x1a);
      fVar4 = *(float *)((int)puVar17 + 0xd4);
      fVar5 = *(float *)(puVar17 + 0x1b);
      puVar17[0x443] = (longlong)(int)dVar52;
      puVar17[0x443] = (longlong)(int)dVar51;
      puVar17[0x443] = (longlong)(int)dVar54;
      puVar17[0x443] = (longlong)(int)dVar50;
      iVar40 = -0x8000;
      if (-0x8000 < *(int *)((int)puVar17 + 0x221c)) {
        iVar40 = *(int *)((int)puVar17 + 0x221c);
      }
      *(int *)(puVar17 + 0x43e) = iVar40;
      *(int *)((int)puVar17 + 0x21f4) = iVar40;
      *(int *)(puVar17 + 0x43f) = iVar40;
      *(int *)((int)puVar17 + 0x21fc) = iVar40;
      auVar55 = auRam00000000 >> 0x60 & (GPiece<16>)0xffffffff;
      iVar38 = -0x8000;
      if (-0x8000 < *(int *)((int)puVar17 + 0x221c)) {
        iVar38 = *(int *)((int)puVar17 + 0x221c);
      }
      *(int *)(puVar17 + 0x43e) = iVar38;
      *(int *)((int)puVar17 + 0x21f4) = iVar38;
      *(int *)(puVar17 + 0x43f) = iVar38;
      *(int *)((int)puVar17 + 0x21fc) = iVar38;
      auVar56 = auRam00000000 >> 0x60 & (GPiece<16>)0xffffffff;
      iVar36 = -0x8000;
      if (-0x8000 < *(int *)((int)puVar17 + 0x221c)) {
        iVar36 = *(int *)((int)puVar17 + 0x221c);
      }
      *(int *)(puVar17 + 0x43e) = iVar36;
      *(int *)((int)puVar17 + 0x21f4) = iVar36;
      *(int *)(puVar17 + 0x43f) = iVar36;
      *(int *)((int)puVar17 + 0x21fc) = iVar36;
      auVar58 = auRam00000000 >> 0x60 & (GPiece<16>)0xffffffff;
      iVar31 = -0x8000;
      if (-0x8000 < *(int *)((int)puVar17 + 0x221c)) {
        iVar31 = *(int *)((int)puVar17 + 0x221c);
      }
      *(int *)(puVar17 + 0x43e) = iVar31;
      *(int *)((int)puVar17 + 0x21f4) = iVar31;
      *(int *)(puVar17 + 0x43f) = iVar31;
      *(int *)((int)puVar17 + 0x21fc) = iVar31;
      auVar60 = auRam00000000 >> 0x60 & (GPiece<16>)0xffffffff;
      lVar33 = uVar23 - 0x221c;
      uVar8 = storeVectorElementWordIndexed
                        (auVar55 | auVar55 << 0x20 | auVar55 << 0x40 | auVar55 << 0x60,0,lVar33);
      *(undefined4 *)lVar33 = uVar8;
      auVar55 = SPLAT(auVar60) >> 0x60 &
                (GPiece<16>)0xffffffff;
      storeVectorElementWordIndexed
                (auVar56 | auVar56 << 0x20 | auVar56 << 0x40 | auVar56 << 0x60,4,lVar33);
      storeVectorElementWordIndexed
                (auVar58 | auVar58 << 0x20 | auVar58 << 0x40 | auVar58 << 0x60,8,lVar33);
      storeVectorElementWordIndexed
                (auVar55 | auVar55 << 0x20 | auVar55 << 0x40 | auVar55 << 0x60,0xc,lVar33);
      iVar27 = 0x7fff;
      if (iVar40 < 0x7fff) {
        iVar27 = iVar40;
      }
      *(int *)(puVar17 + 0x43e) = iVar27;
      *(int *)((int)puVar17 + 0x21f4) = iVar27;
      *(int *)(puVar17 + 0x43f) = iVar27;
      *(int *)((int)puVar17 + 0x21fc) = iVar27;
      auVar55 = auRam00000000 >> 0x60 & (GPiece<16>)0xffffffff;
      auVar55 = auVar55 | auVar55 << 0x20 | auVar55 << 0x40 | auVar55 << 0x60;
      iVar40 = 0x7fff;
      if (iVar38 < 0x7fff) {
        iVar40 = iVar38;
      }
      *(int *)(puVar17 + 0x43e) = iVar40;
      *(int *)((int)puVar17 + 0x21f4) = iVar40;
      *(int *)(puVar17 + 0x43f) = iVar40;
      *(int *)((int)puVar17 + 0x21fc) = iVar40;
      auVar56 = auRam00000000 >> 0x60 & (GPiece<16>)0xffffffff;
      auVar56 = auVar56 | auVar56 << 0x20 | auVar56 << 0x40 | auVar56 << 0x60;
      iVar40 = 0x7fff;
      if (iVar36 < 0x7fff) {
        iVar40 = iVar36;
      }
      *(int *)(puVar17 + 0x43e) = iVar40;
      *(int *)((int)puVar17 + 0x21f4) = iVar40;
      *(int *)(puVar17 + 0x43f) = iVar40;
      *(int *)((int)puVar17 + 0x21fc) = iVar40;
      auVar58 = auRam00000000 >> 0x60 & (GPiece<16>)0xffffffff;
      auVar58 = auVar58 | auVar58 << 0x20 | auVar58 << 0x40 | auVar58 << 0x60;
      iVar40 = 0x7fff;
      if (iVar31 < 0x7fff) {
        iVar40 = iVar31;
      }
      *(int *)(puVar17 + 0x43e) = iVar40;
      *(int *)((int)puVar17 + 0x21f4) = iVar40;
      *(int *)(puVar17 + 0x43f) = iVar40;
      *(int *)((int)puVar17 + 0x21fc) = iVar40;
      auVar60 = auRam00000000 >> 0x60 & (GPiece<16>)0xffffffff;
      lVar33 = uVar23 - 0x220c;
      iVar25 = iVar25 >> 3;
      iVar34 = iVar34 >> 3;
      auVar61 = auVar55 >> 0x60 & (GPiece<16>)0xffffffff;
      auVar16 = auVar56 >> 0x60 & (GPiece<16>)0xffffffff;
      auVar59 = auVar58 >> 0x60 & (GPiece<16>)0xffffffff;
      uVar8 = storeVectorElementWordIndexed
                        (auVar61 | auVar61 << 0x20 | auVar61 << 0x40 | auVar61 << 0x60,0,lVar33);
      *(undefined4 *)lVar33 = uVar8;
      storeVectorElementWordIndexed
                (auVar16 | auVar16 << 0x20 | auVar16 << 0x40 | auVar16 << 0x60,4,lVar33);
      storeVectorElementWordIndexed
                (auVar59 | auVar59 << 0x20 | auVar59 << 0x40 | auVar59 << 0x60,8,lVar33);
      auVar59 = auVar60 | auVar60 << 0x20 | auVar60 << 0x40 | auVar60 << 0x60;
      auVar60 = auVar59 >> 0x60 & (GPiece<16>)0xffffffff;
      storeVectorElementWordIndexed
                (auVar60 | auVar60 << 0x20 | auVar60 << 0x40 | auVar60 << 0x60,0xc,lVar33);
      *(int *)(puVar17 + 0x43e) = iVar25;
      *(int *)((int)puVar17 + 0x21f4) = iVar25;
      iVar32 = iVar32 >> 3;
      *(int *)(puVar17 + 0x43f) = iVar25;
      *(int *)((int)puVar17 + 0x21fc) = iVar25;
      auVar60 = auRam00000000 >> 0x60 & (GPiece<16>)0xffffffff;
      *(int *)(puVar17 + 0x43e) = iVar32;
      *(int *)((int)puVar17 + 0x21f4) = iVar32;
      *(int *)(puVar17 + 0x43f) = iVar32;
      *(int *)((int)puVar17 + 0x21fc) = iVar32;
      auVar61 = auRam00000000;
      *(int *)(puVar17 + 0x43e) = iVar34;
      *(int *)((int)puVar17 + 0x21f4) = iVar34;
      *(int *)(puVar17 + 0x43f) = iVar34;
      *(int *)((int)puVar17 + 0x21fc) = iVar34;
      auVar61 = auVar61 >> 0x60 & (GPiece<16>)0xffffffff;
      auVar16 = auRam00000000 >> 0x60 & (GPiece<16>)0xffffffff;
      lVar33 = uVar23 - 0x2240;
      uVar8 = storeVectorElementWordIndexed
                        (auVar60 | auVar60 << 0x20 | auVar60 << 0x40 | auVar60 << 0x60,0,lVar33);
      *(undefined4 *)lVar33 = uVar8;
      auVar60 = SPLAT(auVar16) >> 0x60 &
                (GPiece<16>)0xffffffff;
      storeVectorElementWordIndexed
                (auVar61 | auVar61 << 0x20 | auVar61 << 0x40 | auVar61 << 0x60,4,lVar33);
      storeVectorElementWordIndexed
                (auVar60 | auVar60 << 0x20 | auVar60 << 0x40 | auVar60 << 0x60,8,lVar33);
      iVar40 = 0;
      if (0 < iVar25) {
        iVar40 = iVar25;
      }
      *(int *)(puVar17 + 0x43e) = iVar40;
      *(int *)((int)puVar17 + 0x21f4) = iVar40;
      *(int *)(puVar17 + 0x43f) = iVar40;
      *(int *)((int)puVar17 + 0x21fc) = iVar40;
      auVar60 = auRam00000000 >> 0x60 & (GPiece<16>)0xffffffff;
      iVar25 = 0;
      if (0 < iVar32) {
        iVar25 = iVar32;
      }
      *(int *)(puVar17 + 0x43e) = iVar25;
      *(int *)((int)puVar17 + 0x21f4) = iVar25;
      *(int *)(puVar17 + 0x43f) = iVar25;
      *(int *)((int)puVar17 + 0x21fc) = iVar25;
      auVar61 = auRam00000000 >> 0x60 & (GPiece<16>)0xffffffff;
      iVar32 = 0;
      if (0 < iVar34) {
        iVar32 = iVar34;
      }
      *(int *)(puVar17 + 0x43e) = iVar32;
      *(int *)((int)puVar17 + 0x21f4) = iVar32;
      *(int *)(puVar17 + 0x43f) = iVar32;
      *(int *)((int)puVar17 + 0x21fc) = iVar32;
      auVar16 = auRam00000000 >> 0x60 & (GPiece<16>)0xffffffff;
      lVar33 = uVar23 - 0x2234;
      uVar8 = storeVectorElementWordIndexed
                        (auVar60 | auVar60 << 0x20 | auVar60 << 0x40 | auVar60 << 0x60,0,lVar33);
      *(undefined4 *)lVar33 = uVar8;
      auVar60 = SPLAT(auVar16) >> 0x60 &
                (GPiece<16>)0xffffffff;
      storeVectorElementWordIndexed
                (auVar61 | auVar61 << 0x20 | auVar61 << 0x40 | auVar61 << 0x60,4,lVar33);
      storeVectorElementWordIndexed
                (auVar60 | auVar60 << 0x20 | auVar60 << 0x40 | auVar60 << 0x60,8,lVar33);
      iVar34 = 0xffff;
      if (iVar40 < 0xffff) {
        iVar34 = iVar40;
      }
      *(int *)(puVar17 + 0x43e) = iVar34;
      *(int *)((int)puVar17 + 0x21f4) = iVar34;
      *(int *)(puVar17 + 0x43f) = iVar34;
      *(int *)((int)puVar17 + 0x21fc) = iVar34;
      auVar60 = auRam00000000 >> 0x60 & (GPiece<16>)0xffffffff;
      auVar60 = auVar60 | auVar60 << 0x20 | auVar60 << 0x40 | auVar60 << 0x60;
      iVar40 = 0xffff;
      if (iVar25 < 0xffff) {
        iVar40 = iVar25;
      }
      *(int *)(puVar17 + 0x43e) = iVar40;
      *(int *)((int)puVar17 + 0x21f4) = iVar40;
      *(int *)(puVar17 + 0x43f) = iVar40;
      *(int *)((int)puVar17 + 0x21fc) = iVar40;
      auVar61 = auRam00000000 >> 0x60 & (GPiece<16>)0xffffffff;
      auVar61 = auVar61 | auVar61 << 0x20 | auVar61 << 0x40 | auVar61 << 0x60;
      iVar25 = 0xffff;
      if (iVar32 < 0xffff) {
        iVar25 = iVar32;
      }
      *(int *)(puVar17 + 0x43e) = iVar25;
      *(int *)((int)puVar17 + 0x21f4) = iVar25;
      *(int *)(puVar17 + 0x43f) = iVar25;
      *(int *)((int)puVar17 + 0x21fc) = iVar25;
      auVar16 = auRam00000000 >> 0x60 & (GPiece<16>)0xffffffff;
      lVar33 = uVar23 - 0x2228;
      uVar35 = lVar29 + 0xa2c5d2 + lVar45;
      uVar37 = lVar29 + 0xa2c5d4 + lVar45;
      auVar57 = auVar60 >> 0x60 & (GPiece<16>)0xffffffff;
      uVar8 = storeVectorElementWordIndexed
                        (auVar57 | auVar57 << 0x20 | auVar57 << 0x40 | auVar57 << 0x60,0,lVar33);
      *(undefined4 *)lVar33 = uVar8;
      auVar62 = vectorSplatHalfWord(auVar55,1);
      auVar55 = SPLAT(auVar16) >> 0x60 &
                (GPiece<16>)0xffffffff;
      auVar16 = auVar61 >> 0x60 & (GPiece<16>)0xffffffff;
      uVar39 = lVar29 + 0xa2c5d6 + lVar45;
      auVar57 = vectorSplatHalfWord(auVar56,1);
      auVar58 = vectorSplatHalfWord(auVar58,1);
      auVar59 = vectorSplatHalfWord(auVar59,1);
      storeVectorElementWordIndexed
                (auVar16 | auVar16 << 0x20 | auVar16 << 0x40 | auVar16 << 0x60,4,lVar33);
      bVar21 = false;
      auVar56 = auVar55 | auVar55 << 0x20 | auVar55 << 0x40 | auVar55 << 0x60;
      auVar55 = auVar56 >> 0x60 & (GPiece<16>)0xffffffff;
      storeVectorElementWordIndexed
                (auVar55 | auVar55 << 0x20 | auVar55 << 0x40 | auVar55 << 0x60,8,lVar33);
      uVar15 = storeVectorElementHalfWordIndexed(auVar62,0x10,lVar43);
      *(undefined2 *)((int)lVar43 + 0x10) = uVar15;
      uVar15 = storeVectorElementHalfWordIndexed(auVar57,0,uVar35 & 0xffffffff);
      *(undefined2 *)uVar35 = uVar15;
      uVar15 = storeVectorElementHalfWordIndexed(auVar58,0,uVar37 & 0xffffffff);
      *(undefined2 *)uVar37 = uVar15;
      uVar15 = storeVectorElementHalfWordIndexed(auVar59,0,uVar39 & 0xffffffff);
      *(undefined2 *)uVar39 = uVar15;
      if ((iVar34 != 0x1000) || (iVar25 != 0x1000 || iVar40 != 0x1000)) {
        bVar21 = true;
      }
      if (bVar21) {
        lVar33 = lVar42 * 8;
        auVar58 = vectorSplatHalfWord(auVar60,1);
        lVar42 = lVar42 + 1;
        uVar37 = lVar24 + lVar33;
        auVar60 = vectorSplatHalfWord(auVar61,1);
        auVar55 = vectorSplatHalfWord(auVar56,1);
        uVar35 = uVar37 & 0xffffffff;
        uVar1 = *(undefined1 *)((int)lVar41 + 0x2168);
        uVar15 = storeVectorElementHalfWordIndexed(auVar58,0,uVar35 + 0x124);
        *(undefined2 *)(uVar35 + 0x124) = uVar15;
        uVar15 = storeVectorElementHalfWordIndexed(auVar60,0,uVar35 + 0x126);
        *(undefined2 *)(uVar35 + 0x126) = uVar15;
        uVar15 = storeVectorElementHalfWordIndexed(auVar55,0,uVar35 + 0x128);
        *(undefined2 *)(uVar35 + 0x128) = uVar15;
        iVar25 = (int)uVar37;
        *(char *)(iVar25 + 0x12a) = (char)iVar47;
        *(undefined1 *)(iVar25 + 299) = uVar1;
      }
      bVar21 = false;
      puVar17[0x443] = (longlong)(int)fVar3;
      puVar17[0x443] = (longlong)(int)fVar4;
      puVar17[0x443] = (longlong)(int)fVar5;
      if ((iVar12 != *(int *)((int)puVar17 + 0x221c) || iVar13 != *(int *)((int)puVar17 + 0x221c))
         || (iVar14 != *(int *)((int)puVar17 + 0x221c))) {
        bVar21 = true;
      }
      if (bVar21) {
        lVar33 = lVar44 * 8;
        auVar55 = vectorSplatHalfWord(auVar65,1);
        auVar64 = vectorSplatHalfWord(auVar64,1);
        lVar44 = lVar44 + 1;
        uVar37 = lVar24 + lVar33;
        auVar63 = vectorSplatHalfWord(auVar63,1);
        uVar35 = uVar37 & 0xffffffff;
        uVar15 = storeVectorElementHalfWordIndexed(auVar55,0,uVar35 + 0x1144);
        *(undefined2 *)(uVar35 + 0x1144) = uVar15;
        uVar15 = storeVectorElementHalfWordIndexed(auVar64,0,uVar35 + 0x1146);
        *(undefined2 *)(uVar35 + 0x1146) = uVar15;
        uVar15 = storeVectorElementHalfWordIndexed(auVar63,0,uVar35 + 0x1148);
        *(undefined2 *)(uVar35 + 0x1148) = uVar15;
        iVar25 = (int)uVar37;
        *(char *)(iVar25 + 0x114a) = (char)iVar47;
        *(undefined1 *)(iVar25 + 0x114b) = 0;
      }
      iVar47 = iVar47 + 1;
      lVar43 = lVar43 + 8;
      lVar41 = lVar41 + 1;
      lVar45 = lVar45 + 8;
      uVar22 = uVar22 + 0x10;
      iVar46 = iVar46 + 0x40;
      uVar48 = uVar48 + 0x40;
    } while (iVar47 < (int)puVar17[0x441]);
  }
  uVar23 = puVar17[0x441];
  *puVar18 = 0;
  __n = (size_t)(lVar42 << 3);
  lVar43 = (uVar23 & 0x1fffffff) << 3;
  *(undefined2 *)(puVar18 + 1) = 0;
  lVar24 = uVar23 + lVar42;
  iVar47 = *(int *)(puVar17 + 0x442);
  lVar29 = lVar24 + lVar44;
  uVar20 = (int)lVar29 * 8;
  uVar19 = uVar20 | (uint)((ulonglong)lVar29 >> 0x3d);
  *(short *)(puVar18 + 2) = (short)lVar43;
  pvVar28 = (void *)(iVar47 + (int)lVar43);
  *(short *)((int)puVar18 + 10) = (short)lVar42;
  *(short *)((int)puVar18 + 0xe) = (short)lVar44;
  *(short *)(puVar18 + 3) = (short)lVar24 * 8;
  *(ushort *)((int)puVar18 + 6) =
       (short)((int)uVar19 >> 4) + (ushort)((int)uVar19 < 0 && (uVar20 & 8) != 0);
  memcpy(pvVar28,(void *)((int)puVar17 + 0x124),__n);
  pvVar28 = memcpy((void *)((int)pvVar28 + __n),(void *)((int)puVar17 + 0x1144),
                         (size_t)(lVar44 << 3));
  return pvVar28;
}


// 0x00fbdac (0x194 bytes)
void MB_AnimLayerBlend(int param_1)

{
  undefined1 uVar1;
  byte bVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  short sVar14;
  int iVar15;
  int iVar16;
  int iVar17;
  int iVar18;
  undefined4 *puVar19;
  undefined4 *puVar20;
  undefined4 *puVar21;
  undefined4 *puVar22;
  undefined4 *puVar23;
  int iVar24;
  
  iVar24 = 0;
  iVar16 = 0x81;
  sVar14 = *(short *)(param_1 + 2);
  do {
    iVar16 = iVar16 + -1;
  } while (iVar16 != 0);
  iVar17 = 0;
  iVar16 = *(int *)(param_1 + 0xc);
  if (0 < sVar14) {
    do {
      iVar17 = iVar17 + 1;
    } while (iVar17 < sVar14);
  }
  uVar1 = *(undefined1 *)(*(int *)(param_1 + 0x14) + 8);
  iVar18 = MB_BlendJointFrames((double)*(float *)(param_1 + 0x24),uVar1,uVar1,
                               *(undefined4 *)(*(int *)(param_1 + 0x14) + 0x18),
                               *(undefined4 *)(param_1 + 0x38),*(undefined4 *)(param_1 + 0x3c));
  iVar17 = *(int *)(param_1 + 0x10);
  if (0 < sVar14) {
    do {
      bVar2 = *(byte *)(iVar16 + iVar24);
      puVar22 = (undefined4 *)(iVar18 + (uint)bVar2 * 0x40);
      iVar15 = iVar24 * 0x30;
      puVar19 = (undefined4 *)(iVar18 + ((uint)bVar2 * 4 + 1) * 0x10);
      uVar3 = puVar22[1];
      puVar21 = (undefined4 *)(iVar18 + ((uint)bVar2 * 4 + 2) * 0x10);
      uVar4 = puVar22[2];
      puVar20 = (undefined4 *)(iVar17 + 0x10 + iVar15);
      uVar5 = puVar22[3];
      puVar23 = (undefined4 *)(iVar17 + iVar15);
      uVar6 = *puVar19;
      uVar7 = puVar19[1];
      uVar8 = puVar19[2];
      uVar9 = puVar19[3];
      iVar24 = iVar24 + 1;
      uVar10 = *puVar21;
      uVar11 = puVar21[1];
      puVar19 = (undefined4 *)(iVar17 + 0x20 + iVar15);
      uVar12 = puVar21[2];
      uVar13 = puVar21[3];
      *puVar23 = *puVar22;
      puVar23[1] = uVar3;
      puVar23[2] = uVar4;
      puVar23[3] = uVar5;
      *puVar20 = uVar6;
      puVar20[1] = uVar7;
      puVar20[2] = uVar8;
      puVar20[3] = uVar9;
      *puVar19 = uVar10;
      puVar19[1] = uVar11;
      puVar19[2] = uVar12;
      puVar19[3] = uVar13;
      *(uint *)(iVar17 + 0x2c + iVar15) = (uint)bVar2;
    } while (iVar24 < sVar14);
  }
  return;
}


