// game/collproc.cpp -- reconstructed from NPEA00385 EBOOT
// STATUS: NOT STARTED (raw Ghidra output)
// 27 functions, 0x55aa4-0x609e8
#include <math.h>
#include <string.h>
#include "game/collproc.h"
#include "game/hero.h"
#include "game/loaders.h"
#include "game/mobyfunc.h"
#include "game/mobyproc.h"
#include "game/mobyutil.h"
#include "game/walk.h"
#include "idol/idol_draw.h"
#include "sdk/xUnk5.h"

// 0x0055aa4 (0x14 bytes)
void SECTION_HEADER_COLL(void)

{
  DAT_0071eaa4 = 0x10000;
  return;
}


// 0x0055ab8 (0x8 bytes)
undefined8 STUB_00055ab8_RET_0(...)

{
  return 0;
}


// 0x0055ac0 (0x8 bytes)
undefined8 STUB_00055ac0_RET_0(...)

{
  return 0;
}


// 0x0055ac8 (0x8 bytes)
undefined8 STUB_00055ac8_RET_0(...)

{
  return 0;
}


// 0x0055ad0 (0x160 bytes)
void Coll_ComputeVertOutcodes
               (undefined4 *param_1,int param_2,float *param_3,int param_4,undefined8 param_5,
               undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  float fVar1;
  float *pfVar2;
  float *pfVar3;
  int iVar4;
  int iVar5;
  float *pfVar6;
  float fStack00000050;
  float fStack00000054;
  float fStack00000060;
  float fStack00000064;
  
  iVar4 = 0;
  if (0 < param_4) {
    iVar5 = 0;
    pfVar6 = param_3;
    do {
      fVar1 = *pfVar6;
      fStack00000060 = (float)((ulonglong)param_7 >> 0x20);
      pfVar2 = pfVar6 + 1;
      pfVar3 = pfVar6 + 2;
      fStack00000064 = (float)param_7;
      fStack00000050 = (float)((ulonglong)param_5 >> 0x20);
      fStack00000054 = (float)param_5;
      iVar4 = iVar4 + 1;
      pfVar6 = pfVar6 + 3;
      *(uint *)(param_2 + iVar5) =
           (uint)(fStack00000060 < fVar1) << 1 | (uint)(fVar1 < fStack00000050) |
           (uint)(fStack00000064 < *pfVar2) << 9 | (uint)(*pfVar2 < fStack00000054) << 8 |
           (uint)((float)((ulonglong)param_8 >> 0x20) < *pfVar3) << 0x11 |
           (uint)(*pfVar3 < (float)((ulonglong)param_6 >> 0x20)) << 0x10;
      iVar5 = iVar5 + 4;
    } while (iVar4 < param_4);
  }
  *param_1 = param_3;
  return;
}


// 0x0055c30 (0x134 bytes)
void Coll_AddDamage(MobyInstance *param_1,float *param_2,int param_3)

{
  byte bVar1;
  float fVar2;
  uint uVar3;
  CollDamageOut *pCVar4;
  int iVar5;
  uint uVar6;
  
  bVar1 = param_1->damage;
  if (((-1 < (char)bVar1) && (param_1 == CollDamage[bVar1].pVictimMoby)) &&
     (param_2[7] <= CollDamage[bVar1].damageHp)) {
    return;
  }
  uVar6 = g_CollOutput.damageNext + 1;
  uVar3 = g_CollOutput.damageNext & 0xff;
  param_1->damage = (s8)g_CollOutput.damageNext;
  g_CollOutput.damageNext =
       uVar6 + (((int)uVar6 >> 6) + (uint)((int)uVar6 < 0 && (uVar6 & 0x3f) != 0)) * -0x40;
  CollDamage[uVar3].impact.x = *param_2;
  CollDamage[uVar3].impact.y = param_2[1];
  CollDamage[uVar3].impact.z = param_2[2];
  CollDamage[uVar3].impact.w = param_2[3];
  CollDamage[uVar3].ip_.x = g_CollOutput.ip.x;
  CollDamage[uVar3].ip_.y = g_CollOutput.ip.y;
  CollDamage[uVar3].ip_.z = g_CollOutput.ip.z;
  fVar2 = g_CollOutput.ip.w;
  pCVar4 = CollDamage + uVar3;
  pCVar4->padding[0] = '\0';
  pCVar4->padding[1] = '\0';
  pCVar4->padding[2] = '\0';
  pCVar4->padding[3] = '\0';
  CollDamage[uVar3].ip_.w = fVar2;
  CollDamage[uVar3].pDamager = (MobyInstance *)param_2[4];
  CollDamage[uVar3].damageFlags = (uint)param_2[5];
  CollDamage[uVar3].damageClass = *(char *)(param_2 + 6);
  iVar5 = -0x20;
  CollDamage[uVar3].damageStrength = *(char *)((int)param_2 + 0x19);
  CollDamage[uVar3].damageIndex = *(u16 *)((int)param_2 + 0x1a);
  CollDamage[uVar3].damageHp = param_2[7];
  fVar2 = param_2[8];
  CollDamage[uVar3].pVictimMoby = param_1;
  CollDamage[uVar3].unk30_flags_ = (u32)fVar2;
  if (param_3 < 0) {
    iVar5 = (int)g_CollOutput.padding + (int)(param_1->collision + -2);
  }
  *(int *)CollDamage[uVar3].padding = iVar5 >> 5;
  return;
}


// 0x0055d70 (0x2ac bytes)
/* WARNING: Restarted to delay deadcode elimination for space: stack */

void CollLineVsSphere
               (undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
               undefined8 param_5,undefined8 param_6,int *param_7,int param_8)

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
  float fStack00000030;
  float fStack00000034;
  float fStack00000038;
  float fStack0000003c;
  float fStack00000040;
  float fStack00000044;
  float fStack00000050;
  float fStack00000054;
  int in_stack_00000074;
  
  fVar2 = (float)((ulonglong)param_4 >> 0x20);
  fVar6 = (float)((ulonglong)param_6 >> 0x20);
  fStack00000030 = (float)((ulonglong)param_1 >> 0x20);
  fStack00000034 = (float)param_1;
  fStack00000040 = (float)((ulonglong)param_3 >> 0x20);
  fStack00000044 = (float)param_3;
  fVar3 = fStack00000030 - fStack00000040;
  fVar4 = fStack00000034 - fStack00000044;
  fStack00000038 = (float)((ulonglong)param_2 >> 0x20);
  fStack00000050 = (float)((ulonglong)param_5 >> 0x20);
  fStack00000054 = (float)param_5;
  fVar7 = fStack00000038 - fVar2;
  fVar8 = fStack00000050 * fStack00000050 + fStack00000054 * fStack00000054 + fVar6 * fVar6;
  fVar9 = fVar3 * fStack00000050 + fVar4 * fStack00000054 + fVar7 * fVar6;
  fVar1 = 0.0;
  fStack0000003c = (float)param_2;
  fVar5 = fVar9 / fVar8;
  if (fVar9 / fVar8 < 0.0) {
    fVar5 = fVar1;
  }
  if (1.0 <= fVar5) {
    fVar5 = 1.0;
  }
  fVar10 = (fStack00000040 + fStack00000050 * fVar5) - fStack00000030;
  fVar11 = (fStack00000044 + fStack00000054 * fVar5) - fStack00000034;
  fVar5 = (fVar2 + fVar6 * fVar5) - fStack00000038;
  if ((fVar10 * fVar10 + fVar11 * fVar11 + fVar5 * fVar5) - fStack0000003c * fStack0000003c < 0.0) {
    fVar9 = fVar9 + fVar9;
    fVar3 = fVar9 * fVar9 -
            fVar8 * 4.0 *
            ((fVar3 * fVar3 + fVar4 * fVar4 + fVar7 * fVar7) - fStack0000003c * fStack0000003c);
    if (fVar3 < 0.0) {
      fVar3 = fVar1;
    }
    fVar3 = -((-fVar9 + SQRT(fVar3)) / (fVar8 + fVar8));
    if (fVar3 < 0.0) {
      fVar3 = fVar1;
    }
    if (1.0 < fVar3) {
      fVar3 = 1.0;
    }
    fStack00000040 = fStack00000040 + fStack00000050 * fVar3;
    fStack00000044 = fStack00000044 + fStack00000054 * fVar3;
    fVar2 = fVar2 + fVar6 * fVar3;
    if (0.0 < (float)param_7[2] - fVar3) {
      param_7[1] = in_stack_00000074;
      *param_7 = -param_8;
      param_7[2] = (int)fVar3;
      param_7[3] = (int)fStack00000040;
      param_7[4] = (int)fStack00000044;
      param_7[5] = (int)fVar2;
      param_7[6] = (int)(fStack00000040 - fStack00000030);
      param_7[7] = (int)(fStack00000044 - fStack00000034);
      param_7[8] = (int)(fVar2 - fStack00000038);
    }
  }
  return;
}


// 0x0056020 (0x4b0 bytes)
/* WARNING: Restarted to delay deadcode elimination for space: stack */
/* [collision] Ray vs one CollTri. Skips tri if all vert outcodes agree, if (type&0x80) and flag
   0x80 (camera), or if flag 0x20 and material == (flags>>8)&0x1f. Flag 0x10 = double sided. Writes
   CollHit (poly = type+0x1000). */

void CollLineVsTri
               (byte *param_1,int param_2,int param_3,int *param_4,undefined8 param_5,
               undefined8 param_6,undefined8 param_7,uint param_8)

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
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float *pfVar18;
  float *pfVar19;
  float *pfVar20;
  float fStack00000058;
  float fStack0000005c;
  float in_stack_00000070;
  float in_stack_00000074;
  float in_stack_00000078;
  float in_stack_00000080;
  float in_stack_00000084;
  float in_stack_00000088;
  float in_stack_00000090;
  float in_stack_00000094;
  float in_stack_00000098;
  int in_stack_000000a4;
  
  bVar1 = param_1[3];
  if ((((*(uint *)(param_3 + (uint)*param_1 * 4) & *(uint *)(param_3 + (uint)param_1[1] * 4) &
        *(uint *)(param_3 + (uint)param_1[2] * 4)) == 0) && ((bVar1 & 0x80 & param_8) == 0)) &&
     ((param_8 & 0x20) == 0 || ((param_8 >> 8 ^ (uint)bVar1) & 0x1f) != 0)) {
    pfVar19 = (float *)(param_2 + (uint)*param_1 * 0xc);
    pfVar20 = (float *)(param_2 + (uint)param_1[1] * 0xc);
    pfVar18 = (float *)(param_2 + (uint)param_1[2] * 0xc);
    fVar2 = *pfVar19;
    fVar3 = pfVar19[1];
    fVar4 = pfVar19[2];
    fVar5 = *pfVar20 - fVar2;
    fVar7 = pfVar20[1] - fVar3;
    fVar9 = pfVar20[2] - fVar4;
    fVar6 = *pfVar18 - fVar2;
    fVar8 = pfVar18[1] - fVar3;
    fVar10 = pfVar18[2] - fVar4;
    fVar13 = fVar8 * fVar9 - fVar10 * fVar7;
    fVar12 = fVar10 * fVar5 - fVar6 * fVar9;
    fVar14 = fVar6 * fVar7 - fVar8 * fVar5;
    fVar11 = in_stack_00000070 * fVar13 + in_stack_00000074 * fVar12 + in_stack_00000078 * fVar14;
    fVar16 = (fVar2 - in_stack_00000080) * fVar13 + (fVar3 - in_stack_00000084) * fVar12 +
             (fVar4 - in_stack_00000088) * fVar14;
    fVar17 = (fVar2 - in_stack_00000090) * fVar13 + (fVar3 - in_stack_00000094) * fVar12 +
             (fVar4 - in_stack_00000098) * fVar14;
    fVar15 = fVar16 / fVar11;
    if (((fVar11 != 0.0) && (((param_8 & 0x10) != 0 || ((fVar16 < 0.0 && (0.0 < fVar17)))))) &&
       ((uint)(0.0 < fVar16) - (uint)(fVar16 < 0.0) != (uint)(0.0 < fVar17) - (uint)(fVar17 < 0.0)))
    {
      fStack0000005c = (float)param_6;
      fStack00000058 = (float)((ulonglong)param_6 >> 0x20);
      fStack0000005c = fVar3 + fStack0000005c;
      fStack00000058 = fVar2 + fStack00000058;
      fVar11 = fVar4 + (float)((ulonglong)param_7 >> 0x20);
      fVar16 = (in_stack_00000080 - fVar2) + in_stack_00000070 * fVar15;
      fVar2 = (in_stack_00000084 - fVar3) + in_stack_00000074 * fVar15;
      fVar3 = (in_stack_00000088 - fVar4) + in_stack_00000078 * fVar15;
      if (((0.0 <= (fVar8 * fVar3 - fVar10 * fVar2) * fVar13 +
                   (fVar10 * fVar16 - fVar6 * fVar3) * fVar12 +
                   (fVar6 * fVar2 - fVar8 * fVar16) * fVar14 &&
            0.0 <= (fVar2 * fVar9 - fVar3 * fVar7) * fVar13 +
                   (fVar3 * fVar5 - fVar16 * fVar9) * fVar12 +
                   (fVar16 * fVar7 - fVar2 * fVar5) * fVar14) &&
          (0.0 <= ((fVar2 - fVar7) * (fVar10 - fVar9) - (fVar3 - fVar9) * (fVar8 - fVar7)) * fVar13
                  + ((fVar3 - fVar9) * (fVar6 - fVar5) - (fVar16 - fVar5) * (fVar10 - fVar9)) *
                    fVar12 +
                  ((fVar16 - fVar5) * (fVar8 - fVar7) - (fVar2 - fVar7) * (fVar6 - fVar5)) * fVar14)
          ) && (0.0 < (float)param_4[2] - fVar15)) {
        *param_4 = bVar1 + 0x1000;
        param_4[1] = in_stack_000000a4;
        param_4[2] = (int)fVar15;
        param_4[3] = (int)(fVar16 + fStack00000058);
        param_4[4] = (int)(fVar2 + fStack0000005c);
        param_4[5] = (int)(fVar3 + fVar11);
        param_4[6] = (int)fVar13;
        param_4[7] = (int)fVar12;
        param_4[8] = (int)fVar14;
        param_4[9] = (int)fStack00000058;
        param_4[10] = (int)fStack0000005c;
        param_4[0xb] = (int)fVar11;
        param_4[0xc] = (int)(fVar5 + fStack00000058);
        param_4[0xd] = (int)(fVar7 + fStack0000005c);
        param_4[0xe] = (int)(fVar9 + fVar11);
        param_4[0xf] = (int)(fVar6 + fStack00000058);
        param_4[0x10] = (int)(fVar8 + fStack0000005c);
        param_4[0x11] = (int)(fVar10 + fVar11);
      }
    }
  }
  return;
}


// 0x00564d0 (0x560 bytes)
/* WARNING: Restarted to delay deadcode elimination for space: stack */
/* [collision] Transforms moby->collision verts to world space + per-vert AABB outcodes; returns tri
   list/count via out params. Meshes >150 verts use g_CollMobyVertCache (8 slots). */

ulonglong CollMoby_TransformVerts
                    (int param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                    undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  float fVar1;
  float fVar2;
  float fVar3;
  int iVar4;
  ulonglong uVar5;
  float fVar6;
  float fVar7;
  bool bVar8;
  bool bVar9;
  ulonglong uVar10;
  void *pvVar11;
  int iVar12;
  float *pfVar13;
  int iVar14;
  float *pfVar15;
  int iVar16;
  int iVar17;
  float fStack00000038;
  float fStack0000003c;
  float fStack00000040;
  float fStack00000048;
  float fStack0000004c;
  float fStack00000050;
  float fStack00000058;
  float fStack0000005c;
  float fStack00000060;
  float fStack00000064;
  float fStack00000068;
  float fStack0000006c;
  float in_stack_00000070;
  float in_stack_00000074;
  float in_stack_00000078;
  float *in_stack_00000084;
  int in_stack_0000008c;
  int *in_stack_00000094;
  int *in_stack_0000009c;
  
  iVar4 = *(int *)(param_1 + 0x94);
  fStack00000050 = (float)((ulonglong)param_5 >> 0x20);
  fStack00000040 = (float)((ulonglong)param_3 >> 0x20);
  iVar12 = iVar4 + *(int *)(iVar4 + 4);
  iVar4 = *(int *)(iVar4 + 0xc) >> 4;
  *in_stack_00000094 = iVar12 + 0x10 + iVar4 * 0x10;
  *in_stack_0000009c = *(int *)(*(int *)(param_1 + 0x94) + 8) >> 2;
  fStack0000005c = (float)param_6;
  fStack00000064 = (float)param_7;
  fStack0000006c = (float)param_8;
  fStack0000004c = (float)param_4;
  fStack00000048 = (float)((ulonglong)param_4 >> 0x20);
  fStack0000003c = (float)param_2;
  fStack00000038 = (float)((ulonglong)param_2 >> 0x20);
  fStack00000058 = (float)((ulonglong)param_6 >> 0x20);
  fStack00000060 = (float)((ulonglong)param_7 >> 0x20);
  fStack00000068 = (float)((ulonglong)param_8 >> 0x20);
  iVar14 = -1;
  if (0x96 < iVar4) {
    iVar16 = 0;
    do {
      iVar14 = iVar16;
      if (g_CollMobyVertCache[iVar16].oClass == 0) {
        g_CollMobyVertCache[iVar16].oClass = (int)*(short *)(param_1 + 0xa6);
        break;
      }
      if (g_CollMobyVertCache[iVar16].oClass == (int)*(short *)(param_1 + 0xa6)) {
        bVar9 = false;
        bVar8 = false;
        if (((fStack00000058 != g_CollMobyVertCache[iVar16].mtx[0]) ||
            (fStack0000005c != g_CollMobyVertCache[iVar16].mtx[1])) ||
           (fStack00000060 != g_CollMobyVertCache[iVar16].mtx[2])) {
          bVar8 = true;
        }
        if (bVar8) {
LAB_000566b8:
          bVar9 = true;
        }
        else {
          bVar8 = false;
          if (((fStack00000064 != g_CollMobyVertCache[iVar16].mtx[3]) ||
              (fStack00000068 != g_CollMobyVertCache[iVar16].mtx[4])) ||
             (fStack0000006c != g_CollMobyVertCache[iVar16].mtx[5])) {
            bVar8 = true;
          }
          if (bVar8) goto LAB_000566b8;
          bVar8 = false;
          if (((in_stack_00000070 != g_CollMobyVertCache[iVar16].mtx[6]) ||
              (in_stack_00000074 != g_CollMobyVertCache[iVar16].mtx[7])) ||
             (in_stack_00000078 != g_CollMobyVertCache[iVar16].mtx[8])) {
            bVar8 = true;
          }
          if (bVar8) goto LAB_000566b8;
        }
        if (!bVar9) {
          uVar10 = 0;
          if (iVar4 < 1) {
            return 0;
          }
          do {
            pfVar15 = in_stack_00000084 + (int)uVar10 * 3;
            pfVar13 = (float *)((int)uVar10 * 0xc + 0x9540e8 + iVar16 * 0xc28);
            fVar1 = *pfVar13;
            fVar2 = pfVar13[1];
            fVar3 = pfVar13[2];
            *pfVar15 = fVar1;
            pfVar15[1] = fVar2;
            pfVar15[2] = fVar3;
            uVar5 = uVar10 & 0xffffffff;
            uVar10 = uVar10 + 1;
            *(uint *)(in_stack_0000008c + (int)(uVar5 << 2)) =
                 (uint)(fStack00000048 < fVar1) << 1 | (uint)(fVar1 < fStack00000038) |
                 (uint)(fStack0000004c < fVar2) << 9 | (uint)(fVar2 < fStack0000003c) << 8 |
                 (uint)(fStack00000050 < fVar3) << 0x11 | (uint)(fVar3 < fStack00000040) << 0x10;
          } while ((int)uVar10 < iVar4);
          return uVar10;
        }
        break;
      }
      iVar16 = iVar16 + 1;
      iVar14 = -1;
    } while (iVar16 < 8);
  }
  uVar10 = 0;
  if (0 < iVar4) {
    iVar17 = 0;
    iVar16 = 0;
    pfVar13 = in_stack_00000084;
    do {
      fVar3 = *(float *)(iVar12 + 0x10 + iVar17);
      fVar1 = *(float *)(iVar12 + 0x14 + iVar17);
      fVar2 = *(float *)(iVar12 + 0x18 + iVar17);
      fVar6 = fStack00000058 * fVar3 + fStack00000064 * fVar1 + in_stack_00000070 * fVar2;
      fVar7 = fStack0000005c * fVar3 + fStack00000068 * fVar1 + in_stack_00000074 * fVar2;
      fVar1 = fStack00000060 * fVar3 + fStack0000006c * fVar1 + in_stack_00000078 * fVar2;
      *pfVar13 = fVar6;
      pfVar13[1] = fVar7;
      pfVar13[2] = fVar1;
      uVar10 = uVar10 + 1;
      iVar17 = iVar17 + 0x10;
      pfVar13 = pfVar13 + 3;
      *(uint *)(in_stack_0000008c + iVar16) =
           (uint)(fVar7 < fStack0000003c) << 8 | (uint)(fStack00000048 < fVar6) << 1 |
           (uint)(fVar6 < fStack00000038) |
           (uint)(fStack0000004c < fVar7) << 9 |
           (uint)(fStack00000050 < fVar1) << 0x11 | (uint)(fVar1 < fStack00000040) << 0x10;
      iVar16 = iVar16 + 4;
    } while ((int)uVar10 < iVar4);
  }
  if (iVar14 != -1) {
    g_CollMobyVertCache[iVar14].mtx[0] = fStack00000058;
    g_CollMobyVertCache[iVar14].mtx[1] = fStack0000005c;
    g_CollMobyVertCache[iVar14].mtx[2] = fStack00000060;
    g_CollMobyVertCache[iVar14].mtx[3] = fStack00000064;
    g_CollMobyVertCache[iVar14].mtx[4] = fStack00000068;
    g_CollMobyVertCache[iVar14].mtx[5] = fStack0000006c;
    g_CollMobyVertCache[iVar14].mtx[6] = in_stack_00000070;
    g_CollMobyVertCache[iVar14].mtx[7] = in_stack_00000074;
    g_CollMobyVertCache[iVar14].mtx[8] = in_stack_00000078;
    _fStack00000038 = param_2;
    _fStack00000048 = param_4;
    _fStack00000058 = param_6;
    _fStack00000060 = param_7;
    _fStack00000068 = param_8;
    pvVar11 = memcpy(g_CollMobyVertCache[iVar14].verts,in_stack_00000084,iVar4 * 0xc);
    uVar10 = (ulonglong)(int)pvVar11;
  }
  return uVar10;
}


// 0x0056a30 (0xf4 bytes)
ulonglong CollMoby_GetJointCache(int param_1,undefined8 param_2)

{
  int iVar1;
  int iVar2;
  ulonglong uVar3;
  uint uVar4;
  
  uVar3 = 0;
  do {
    if (*(int *)(&MobyClassRef + (int)((uVar3 & 0xffffffff) << 3)) == *(int *)(param_1 + 0xa8)) {
      return ZEXT48(&g_CollMobyJointCache) + uVar3 * 0x7fc & 0xffffffff;
    }
    uVar3 = uVar3 + 1;
  } while ((int)uVar3 < 8);
  iVar1 = g_CollOutput.padding[2] * 8;
  uVar4 = g_CollOutput.padding[2] + 1;
  iVar2 = g_CollOutput.padding[2] * 0x7fc;
  g_CollOutput.padding[2] =
       uVar4 + (((int)uVar4 >> 3) + (uint)((int)uVar4 < 0 && (uVar4 & 7) != 0)) * -8;
  *(int *)(&MobyClassRef + iVar1) = *(int *)(param_1 + 0xa8);
  *(int *)(iVar1 + 0xa109c4) = g_CollOutput.collCount;
  Moby_BuildJointMatrices(param_1,param_2,ZEXT48(&g_CollMobyJointCache + iVar2));
  return ZEXT48(&g_CollMobyJointCache + iVar2);
}


// 0x0056b24 (0xf0 bytes)
CollCell * CollGrid_GetCell(int x,int y,int z)

{
  int iVar1;
  short *psVar2;
  
                    /* WARNING: Load size is inaccurate */
  iVar1 = z - *g_CollOutput.grid;
  if ((-1 < iVar1) && (iVar1 < *(short *)((int)g_CollOutput.grid + 2))) {
    psVar2 = (short *)((int)g_CollOutput.grid + *(int *)((int)g_CollOutput.grid + iVar1 * 4 + 4));
    iVar1 = y - *psVar2;
    if ((-1 < iVar1) && (iVar1 < psVar2[1])) {
      psVar2 = (short *)((int)g_CollOutput.grid + *(int *)(psVar2 + iVar1 * 2 + 2));
      iVar1 = x - *psVar2;
      if (((-1 < iVar1) && (iVar1 < psVar2[1])) && (*(int *)(psVar2 + iVar1 * 2 + 2) != 0)) {
        return (CollCell *)((int)g_CollOutput.grid + *(int *)(psVar2 + iVar1 * 2 + 2));
      }
    }
  }
  return (CollCell *)0x0;
}


// 0x0056c20 (0xbe4 bytes)
/* [collision] Walks the cell list built by CollLine, looks up each env cell (CollGrid_GetCell) and
   tests its tris; cell center = (idx<<12)|0x800 i.e. (4*idx+2)*1024. */

void CollLineVsEnv
               (double param_1,undefined8 param_2,undefined4 param_3,undefined8 param_4,
               undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
               undefined8 param_9)

{
  byte bVar1;
  byte bVar2;
  byte bVar3;
  byte bVar4;
  float fVar5;
  float fVar6;
  short sVar7;
  undefined4 uVar8;
  GPiece<16> auVar9;
  GPiece<16> auVar10;
  GPiece<16> auVar11;
  ulonglong *puVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  ulonglong uVar25;
  CollCell *pCVar27;
  longlong lVar26;
  CollCell *pCVar28;
  ulonglong uVar29;
  longlong lVar30;
  ulonglong unaff_r14;
  ulonglong unaff_r15;
  ulonglong unaff_r16;
  ulonglong unaff_r17;
  ulonglong unaff_r18;
  ulonglong unaff_r19;
  uint uVar31;
  ulonglong unaff_r20;
  ulonglong unaff_r21;
  ulonglong unaff_r22;
  ulonglong unaff_r23;
  ulonglong unaff_r24;
  ulonglong unaff_r25;
  ulonglong unaff_r26;
  CollCell *pCVar32;
  ulonglong unaff_r27;
  CollCell *pCVar33;
  ulonglong unaff_r28;
  int iVar34;
  ulonglong unaff_r29;
  ulonglong unaff_r30;
  ulonglong unaff_r31;
  ulonglong in_LR;
  double dVar35;
  ulonglong uVar36;
  ulonglong in_f30;
  ulonglong in_f31;
  undefined8 uStack00000040;
  undefined4 uStack00000048;
  undefined8 uStack00000050;
  undefined4 uStack00000058;
  undefined8 uStack00000060;
  undefined4 uStack00000068;
  int in_stack_00000074;
  uint in_stack_0000007c;
  
  uVar25 = ZEXT48(&stack0x00000000);
  lVar30 = uVar25 - 0x5a0;
  puVar12 = (ulonglong *)lVar30;
  *puVar12 = uVar25;
  puVar12[0xb6] = in_LR;
  puVar12[0xb2] = in_f30;
  puVar12[0xb3] = in_f31;
  puVar12[0xb0] = unaff_r30;
  puVar12[0xa4] = unaff_r18;
  puVar12[0xa0] = unaff_r14;
  uStack00000048 = (undefined4)((ulonglong)param_5 >> 0x20);
  puVar12[0xb1] = unaff_r31;
  puVar12[0xad] = unaff_r27;
  uStack00000058 = (undefined4)((ulonglong)param_7 >> 0x20);
  puVar12[0xaf] = unaff_r29;
  puVar12[0xab] = unaff_r25;
  puVar12[0xaa] = unaff_r24;
  puVar12[0xae] = unaff_r28;
  puVar12[0xa3] = unaff_r17;
  uStack00000068 = (undefined4)((ulonglong)param_9 >> 0x20);
  puVar12[0xa9] = unaff_r23;
  iVar34 = (int)(((ulonglong)in_stack_0000007c & 0x1fffffff) << 3);
  puVar12[0xa8] = unaff_r22;
  puVar12[0xac] = unaff_r26;
  bVar1 = *(byte *)(in_stack_00000074 + 4 + iVar34);
  puVar12[0xa7] = unaff_r21;
  puVar12[0xa2] = unaff_r16;
  bVar2 = *(byte *)(in_stack_00000074 + 5 + iVar34);
  puVar12[0xa1] = unaff_r15;
  bVar3 = *(byte *)(in_stack_00000074 + 6 + iVar34);
  puVar12[0xa6] = unaff_r20;
  puVar12[0xa5] = unaff_r19;
  uStack00000040 = param_4;
  uStack00000050 = param_6;
  uStack00000060 = param_8;
  pCVar27 = CollGrid_GetCell((uint)bVar1,(uint)bVar2,(uint)bVar3);
  if (pCVar27 != (CollCell *)0x0) {
    bVar4 = pCVar27->vertCount;
    uVar31 = (uint)bVar4;
    if (bVar4 != 0) {
      dVar35 = (double)*(float *)(in_stack_00000074 + 8 + iVar34);
      if ((in_stack_0000007c == 0) && (param_1 == 1.0)) {
        param_1 = 0.0;
        dVar35 = 1.0;
      }
      puVar12[0x9e] = (longlong)(int)((uint)bVar1 << 0xc | 0x800);
      uVar36 = puVar12[0x9e];
      puVar12[0x9e] = (longlong)(int)((uint)bVar2 << 0xc | 0x800);
      fVar13 = (float)(longlong)uVar36;
      *(float *)(puVar12 + 0x9c) = fVar13;
      *(float *)((int)puVar12 + 0x4e4) = fVar13;
      *(float *)(puVar12 + 0x9d) = fVar13;
      *(float *)((int)puVar12 + 0x4ec) = fVar13;
      uVar36 = puVar12[0x9e];
      puVar12[0x9e] = (longlong)(int)((uint)bVar3 << 0xc | 0x800);
      fVar16 = (float)(longlong)uVar36;
      auVar9 = auRam00000000 >> 0x60 & (GPiece<16>)0xffffffff;
      *(float *)(puVar12 + 0x9c) = fVar16;
      *(float *)((int)puVar12 + 0x4e4) = fVar16;
      *(float *)(puVar12 + 0x9d) = fVar16;
      *(float *)((int)puVar12 + 0x4ec) = fVar16;
      fVar19 = (float)(longlong)puVar12[0x9e];
      auVar10 = auRam00000000 >> 0x60 & (GPiece<16>)0xffffffff;
      *(float *)(puVar12 + 0x9c) = fVar19;
      *(float *)((int)puVar12 + 0x4e4) = fVar19;
      *(float *)(puVar12 + 0x9d) = fVar19;
      *(float *)((int)puVar12 + 0x4ec) = fVar19;
      auVar11 = auRam00000000 >> 0x60 & (GPiece<16>)0xffffffff;
      fVar5 = *(float *)(puVar12 + 0xbc);
      fVar6 = *(float *)(puVar12 + 0xbd);
      fVar14 = (fVar5 + (float)((double)*(float *)(puVar12 + 0xc0) * dVar35)) - fVar13;
      fVar15 = (*(float *)(puVar12 + 0xbc) + (float)((double)*(float *)(puVar12 + 0xc0) * param_1))
               - fVar13;
      fVar17 = (uStack00000040.piece<4,4>() + (float)((double)uStack00000060.piece<4,4>() * param_1)) - fVar16;
      fVar20 = (*(float *)(puVar12 + 0xbd) + (float)((double)*(float *)(puVar12 + 0xc1) * param_1))
               - fVar19;
      fVar18 = (*(float *)((int)puVar12 + 0x5e4) +
               (float)((double)*(float *)((int)puVar12 + 0x604) * dVar35)) - fVar16;
      fVar21 = (fVar6 + (float)((double)*(float *)(puVar12 + 0xc1) * dVar35)) - fVar19;
      uVar8 = storeVectorElementWordIndexed
                        (auVar9 | auVar9 << 0x20 | auVar9 << 0x40 | auVar9 << 0x60,0,uVar25 - 0x4f0)
      ;
      *(undefined4 *)(uVar25 - 0x4f0) = uVar8;
      auVar9 = SPLAT(auVar10) >> 0x60 &
               (GPiece<16>)0xffffffff;
      auVar10 = SPLAT(auVar11) >> 0x60 &
                (GPiece<16>)0xffffffff;
      uVar8 = storeVectorElementWordIndexed
                        (auVar9 | auVar9 << 0x20 | auVar9 << 0x40 | auVar9 << 0x60,0,uVar25 - 0x4ec)
      ;
      *(undefined4 *)(uVar25 - 0x4ec) = uVar8;
      auVar9 = SPLAT(auVar10) >> 0x60 &
               (GPiece<16>)0xffffffff;
      uVar8 = storeVectorElementWordIndexed
                        (auVar9 | auVar9 << 0x20 | auVar9 << 0x40 | auVar9 << 0x60,0,uVar25 - 0x4e8)
      ;
      *(undefined4 *)(uVar25 - 0x4e8) = uVar8;
      fVar24 = fVar14;
      if (fVar15 < fVar14) {
        fVar24 = fVar15;
      }
      fVar23 = fVar18;
      if (fVar17 < fVar18) {
        fVar23 = fVar17;
      }
      fVar22 = fVar21;
      if (fVar20 < fVar21) {
        fVar22 = fVar20;
      }
      if (fVar14 < fVar15) {
        fVar14 = fVar15;
      }
      if (fVar18 < fVar17) {
        fVar18 = fVar17;
      }
      if (fVar21 < fVar20) {
        fVar21 = fVar20;
      }
      fVar5 = fVar5 - fVar13;
      fVar15 = *(float *)((int)puVar12 + 0x5e4) - fVar16;
      lVar26 = uVar25 - 0x4e4;
      *(float *)(puVar12 + 0x9c) = fVar5;
      *(float *)((int)puVar12 + 0x4e4) = fVar5;
      *(float *)(puVar12 + 0x9d) = fVar5;
      *(float *)((int)puVar12 + 0x4ec) = fVar5;
      auVar9 = auRam00000000;
      fVar6 = fVar6 - fVar19;
      *(float *)(puVar12 + 0x9c) = fVar15;
      *(float *)((int)puVar12 + 0x4e4) = fVar15;
      auVar9 = auVar9 >> 0x60 & (GPiece<16>)0xffffffff;
      *(float *)(puVar12 + 0x9d) = fVar15;
      *(float *)((int)puVar12 + 0x4ec) = fVar15;
      auVar10 = auRam00000000 >> 0x60 & (GPiece<16>)0xffffffff;
      *(float *)(puVar12 + 0x9c) = fVar6;
      *(float *)((int)puVar12 + 0x4e4) = fVar6;
      *(float *)(puVar12 + 0x9d) = fVar6;
      *(float *)((int)puVar12 + 0x4ec) = fVar6;
      auVar11 = auRam00000000 >> 0x60 & (GPiece<16>)0xffffffff;
      fVar13 = *(float *)(puVar12 + 0xbe) - fVar13;
      uVar8 = storeVectorElementWordIndexed
                        (auVar9 | auVar9 << 0x20 | auVar9 << 0x40 | auVar9 << 0x60,0,lVar26);
      *(undefined4 *)lVar26 = uVar8;
      auVar9 = SPLAT(auVar11) >> 0x60 &
               (GPiece<16>)0xffffffff;
      storeVectorElementWordIndexed
                (auVar10 | auVar10 << 0x20 | auVar10 << 0x40 | auVar10 << 0x60,4,lVar26);
      storeVectorElementWordIndexed
                (auVar9 | auVar9 << 0x20 | auVar9 << 0x40 | auVar9 << 0x60,8,lVar26);
      *(float *)(puVar12 + 0x9c) = fVar13;
      *(float *)((int)puVar12 + 0x4e4) = fVar13;
      *(float *)(puVar12 + 0x9d) = fVar13;
      *(float *)((int)puVar12 + 0x4ec) = fVar13;
      fVar16 = uStack00000050.piece<4,4>() - fVar16;
      fVar19 = *(float *)(puVar12 + 0xbf) - fVar19;
      auVar9 = auRam00000000 >> 0x60 & (GPiece<16>)0xffffffff;
      *(float *)(puVar12 + 0x9c) = fVar16;
      *(float *)((int)puVar12 + 0x4e4) = fVar16;
      *(float *)(puVar12 + 0x9d) = fVar16;
      *(float *)((int)puVar12 + 0x4ec) = fVar16;
      auVar10 = auRam00000000;
      *(float *)(puVar12 + 0x9c) = fVar19;
      *(float *)((int)puVar12 + 0x4e4) = fVar19;
      *(float *)(puVar12 + 0x9d) = fVar19;
      *(float *)((int)puVar12 + 0x4ec) = fVar19;
      auVar10 = auVar10 >> 0x60 & (GPiece<16>)0xffffffff;
      auVar11 = auRam00000000 >> 0x60 & (GPiece<16>)0xffffffff;
      lVar26 = uVar25 - 0x4d8;
      uVar36 = 0;
      iVar34 = 0;
      pCVar33 = pCVar27 + 1;
      uVar8 = storeVectorElementWordIndexed
                        (auVar9 | auVar9 << 0x20 | auVar9 << 0x40 | auVar9 << 0x60,0,lVar26);
      *(undefined4 *)lVar26 = uVar8;
      auVar9 = SPLAT(auVar11) >> 0x60 &
               (GPiece<16>)0xffffffff;
      storeVectorElementWordIndexed
                (auVar10 | auVar10 << 0x20 | auVar10 << 0x40 | auVar10 << 0x60,4,lVar26);
      storeVectorElementWordIndexed
                (auVar9 | auVar9 << 0x20 | auVar9 << 0x40 | auVar9 << 0x60,8,lVar26);
      pCVar28 = pCVar33;
      if (bVar4 != 0) {
        do {
          iVar34 = iVar34 + 1;
          *(uint *)((int)lVar30 + 0xd4) =
               (uint)(fVar14 + 5.0 < (float)*pCVar28) << 1 | (uint)((float)*pCVar28 < fVar24 - 5.0)
               | (uint)(fVar18 + 5.0 < (float)pCVar28[1]) << 9 |
                 (uint)((float)pCVar28[1] < fVar23 - 5.0) << 8 |
               (uint)(fVar21 + 5.0 < (float)pCVar28[2]) << 0x11 |
               (uint)((float)pCVar28[2] < fVar22 - 5.0) << 0x10;
          lVar30 = lVar30 + 4;
          pCVar28 = pCVar28 + 3;
        } while (iVar34 < (int)(uint)bVar4);
      }
      sVar7 = pCVar27->faceCount;
      iVar34 = 0;
      pCVar32 = pCVar33 + uVar31 * 3;
      pCVar28 = pCVar32;
      if (0 < sVar7) {
        do {
          *(undefined4 *)(puVar12 + 0xb) = *(undefined4 *)(puVar12 + 0x16);
          *(undefined4 *)(puVar12 + 0xc) = *(undefined4 *)(puVar12 + 0x17);
          uVar29 = ZEXT48(g_CollOutput.grid);
          *(undefined4 *)((int)puVar12 + 0x5c) = *(undefined4 *)((int)puVar12 + 0xb4);
          *(undefined4 *)(puVar12 + 0xe) = *(undefined4 *)(puVar12 + 0xc0);
          *(undefined4 *)((int)puVar12 + 0x74) = *(undefined4 *)((int)puVar12 + 0x604);
          *(undefined4 *)(puVar12 + 0xf) = *(undefined4 *)(puVar12 + 0xc1);
          *(undefined4 *)(puVar12 + 0x10) = *(undefined4 *)((int)puVar12 + 0xbc);
          *(undefined4 *)((int)puVar12 + 0x84) = *(undefined4 *)(puVar12 + 0x18);
          *(undefined4 *)(puVar12 + 0x11) = *(undefined4 *)((int)puVar12 + 0xc4);
          *(undefined4 *)(puVar12 + 0x12) = *(undefined4 *)(puVar12 + 0x19);
          *(undefined4 *)((int)puVar12 + 0x94) = *(undefined4 *)((int)puVar12 + 0xcc);
          *(undefined4 *)(puVar12 + 0x13) = *(undefined4 *)(puVar12 + 0x1a);
          puVar12[0x14] = uVar29;
          CollLineVsTri(pCVar28,pCVar33,uVar25 - 0x4cc,param_2,uVar31,puVar12[0xb],puVar12[0xc],
                        param_3);
          iVar34 = iVar34 + 1;
          pCVar28 = pCVar28 + 1;
        } while (iVar34 < sVar7);
      }
      bVar1 = pCVar27->quadCount;
      if ((bVar1 != 0) && (bVar1 != 0)) {
        do {
          *(undefined4 *)(puVar12 + 0xb) = *(undefined4 *)(puVar12 + 0x16);
          *(undefined4 *)(puVar12 + 0xc) = *(undefined4 *)(puVar12 + 0x17);
          *(undefined4 *)(puVar12 + 0x9b) =
               *(undefined4 *)((int)&pCVar32->faceCount + (int)((uVar36 & 0xffffffff) << 2));
          *(undefined1 *)((int)puVar12 + 0x4d9) = *(undefined1 *)((int)puVar12 + 0x4da);
          uVar29 = ZEXT48(g_CollOutput.grid);
          *(undefined1 *)((int)puVar12 + 0x4da) =
               *(undefined1 *)((int)&pCVar32->faceCount + (int)uVar36 + (int)((longlong)sVar7 << 2))
          ;
          *(undefined4 *)((int)puVar12 + 0x5c) = *(undefined4 *)((int)puVar12 + 0xb4);
          *(undefined4 *)(puVar12 + 0xe) = *(undefined4 *)(puVar12 + 0xc0);
          *(undefined4 *)((int)puVar12 + 0x74) = *(undefined4 *)((int)puVar12 + 0x604);
          *(undefined4 *)(puVar12 + 0xf) = *(undefined4 *)(puVar12 + 0xc1);
          *(undefined4 *)(puVar12 + 0x10) = *(undefined4 *)((int)puVar12 + 0xbc);
          *(undefined4 *)((int)puVar12 + 0x84) = *(undefined4 *)(puVar12 + 0x18);
          *(undefined4 *)(puVar12 + 0x11) = *(undefined4 *)((int)puVar12 + 0xc4);
          *(undefined4 *)(puVar12 + 0x12) = *(undefined4 *)(puVar12 + 0x19);
          *(undefined4 *)((int)puVar12 + 0x94) = *(undefined4 *)((int)puVar12 + 0xcc);
          *(undefined4 *)(puVar12 + 0x13) = *(undefined4 *)(puVar12 + 0x1a);
          puVar12[0x14] = uVar29;
          CollLineVsTri(uVar25 - 200,pCVar33,uVar25 - 0x4cc,param_2,uVar31,puVar12[0xb],puVar12[0xc]
                        ,param_3);
          iVar34 = (int)uVar36 + 1;
          uVar36 = (ulonglong)iVar34;
        } while (iVar34 < (int)(uint)bVar1);
      }
    }
  }
  return;
}


// 0x0057820 (0x1e2c bytes)
// strings: 00651abc: 'CollLine: Cannot have NaN, this will blow out stack on CollLine as the line goes on forever.'

/* WARNING: Removing unreachable block (ram,0x00059570) */
/* WARNING: Removing unreachable block (ram,0x00059584) */
/* WARNING: Removing unreachable block (ram,0x0005959c) */
/* WARNING: Removing unreachable block (ram,0x00059594) */
/* WARNING: Removing unreachable block (ram,0x0005957c) */
/* WARNING: Restarted to delay deadcode elimination for space: stack */
/* [collision] CollLine(p0, p1, COLL_FLAGS flags, MobyInstance *skip, ...). Requires both points in
   [0,1024] world. Works in x1024 space: DDA over 4-unit env cells (byte cell indices) ->
   CollLineVsEnv; then moby broadphase via g_MobyGrid (16-unit cells), skipping 'skip', mobys
   without collision, and mobys already tested this query (collQueryStamp).
   COLL_DAMAGEABLE_ONLY|COLL_NO_ENV => only CAN_BE_DAMAGED mobys. Result -> CollOutput (ip/v0..v2
   scaled back by 1/1024). */

undefined8
CollLine(float *param_1,float *param_2,ulonglong param_3,undefined8 param_4,
                  undefined8 param_5)

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
  float fVar10;
  float fVar11;
  uint uVar12;
  undefined1 uVar13;
  undefined4 uVar14;
  GPiece<16> auVar15;
  GPiece<16> auVar16;
  GPiece<16> auVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  char cVar23;
  ulonglong uVar24;
  int iVar26;
  float fVar27;
  ulonglong uVar25;
  ushort uVar31;
  float *pfVar28;
  float *pfVar29;
  float *pfVar30;
  float fVar33;
  ulonglong uVar32;
  int iVar34;
  float fVar37;
  ulonglong uVar35;
  longlong lVar36;
  float fVar38;
  float fVar39;
  float fVar40;
  bool bVar41;
  longlong lVar42;
  longlong lVar43;
  int iVar44;
  int iVar45;
  MobyInstance *pMVar46;
  float fVar47;
  float fVar48;
  int iVar49;
  ushort *puVar50;
  double dVar51;
  double dVar52;
  double dVar53;
  double dVar54;
  double dVar55;
  double dVar56;
  double dVar57;
  double dVar58;
  double dVar59;
  double dVar60;
  double dVar61;
  double dVar62;
  double dVar63;
  double dVar64;
  double dVar65;
  double dVar66;
  double dVar67;
  double dVar68;
  double dVar69;
  double dVar70;
  double dVar71;
  double dVar72;
  float fStack_292c;
  float fStack_2924;
  float fStack_291c;
  float fStack_2914;
  undefined4 uStack_2904;
  int local_28c0;
  int local_28bc;
  float local_27e0;
  float local_27dc;
  float local_27d8;
  float local_27d4;
  float local_27d0;
  float local_27cc;
  float local_27a4;
  float local_27a0;
  float local_279c;
  float local_2708;
  float local_2704;
  float local_2700;
  float local_26fc;
  float local_26f8;
  float local_26f4;
  float local_26b4;
  float local_26b0;
  float local_26ac;
  float local_26a8;
  float local_26a4;
  float local_26a0;
  undefined4 local_260c;
  float local_2608;
  undefined4 local_2604;
  undefined4 local_2600;
  undefined4 local_25fc;
  undefined4 local_25f8;
  int local_25e8;
  float local_25e0;
  float local_25dc;
  float local_25d8;
  float local_25d4;
  undefined4 local_25d0;
  undefined4 local_25cc;
  undefined4 local_25c8;
  float local_25c4;
  float local_25c0;
  float local_25bc;
  float local_25b8;
  float local_25b4;
  float local_25b0;
  float local_25ac;
  float local_25a8;
  float local_25a4;
  float local_21a0;
  byte local_219c;
  byte bStack_219b;
  float local_2198;
  char local_1a0;
  char local_19f;
  char local_19e;
  undefined4 local_198;
  float local_190;
  float local_18c;
  float local_188;
  float local_184;
  float local_180;
  longlong local_178;
  ulonglong local_170;
  ulonglong local_168;
  float *local_160;
  ulonglong local_158;
  undefined8 local_150;
  undefined8 local_148;
  longlong local_140;
  float local_130;
  
  uVar24 = ZEXT48(&stack0x00000000);
  local_150 = param_4;
  iVar26 = FUN_005dd48c(uVar24 - 0x28a4);
  local_148 = param_5;
  if ((((iVar26 == 2) || (iVar26 = FUN_005dd48c(uVar24 - 0x28a8), iVar26 == 2)) ||
      (iVar26 = FUN_005dd48c(uVar24 - 0x28ac), iVar26 == 2)) ||
     (((iVar26 = FUN_005dd48c(uVar24 - 0x28b0), iVar26 == 2 ||
       (iVar26 = FUN_005dd48c(uVar24 - 0x28b4), iVar26 == 2)) ||
      (iVar26 = FUN_005dd48c(uVar24 - 0x28b8), iVar26 == 2)))) {
    FUN_004ff98c(
                "CollLine: Cannot have NaN, this will blow out stack on CollLine as the line goes on forever."
                );
    return 0;
  }
  fVar2 = *param_2;
  fVar3 = *param_1;
  fVar4 = param_1[1];
  fVar5 = param_1[2];
  fVar6 = param_2[1];
  fVar7 = param_2[2];
  fVar38 = fVar2;
  if (fVar3 < fVar2) {
    fVar38 = fVar3;
  }
  fVar20 = fVar6;
  if (fVar4 < fVar6) {
    fVar20 = fVar4;
  }
  fVar21 = fVar7;
  if (fVar5 < fVar7) {
    fVar21 = fVar5;
  }
  fVar22 = fVar2;
  if (fVar2 < fVar3) {
    fVar22 = fVar3;
  }
  fVar8 = fVar6;
  if (fVar6 < fVar4) {
    fVar8 = fVar4;
  }
  fVar9 = fVar7;
  if (fVar7 < fVar5) {
    fVar9 = fVar5;
  }
  fVar3 = fVar3 * 1024.0;
  fVar4 = fVar4 * 1024.0;
  fVar5 = fVar5 * 1024.0;
  fVar2 = fVar2 * 1024.0;
  fVar6 = fVar6 * 1024.0;
  local_180 = 1024.0;
  fVar7 = fVar7 * 1024.0;
  if (-1 < g_CollOutput.collCount) {
    g_CollOutput.collCount = g_CollOutput.collCount + 1;
    dVar54 = 0.0;
    local_158 = ZEXT48(&g_CollOutput);
    if (((0.0 <= fVar38) && (0.0 <= fVar21 && 0.0 <= fVar20)) &&
       ((fVar22 - 1024.0 <= 0.0 && ((fVar8 - 1024.0 <= 0.0 && (fVar9 - 1024.0 <= 0.0)))))) {
      local_140 = (longlong)(int)fVar7;
      fVar20 = fVar2 - fVar3;
      fVar21 = fVar6 - fVar4;
      fVar22 = fVar7 - fVar5;
      local_190 = (float)((int)fVar5 >> 0xc);
      auVar16 = auRam00000000 >> 0x60 & (GPiece<16>)0xffffffff;
      auVar17 = auRam00000000 >> 0x60 & (GPiece<16>)0xffffffff;
      pfVar28 = (float *)(uVar24 - 0x21a0);
      fVar38 = (float)((int)fVar7 >> 0xc);
      bVar41 = false;
      if (((int)fVar3 >> 0xc != (int)fVar2 >> 0xc) ||
         (local_190 != fVar38 || (int)fVar4 >> 0xc != (int)fVar6 >> 0xc)) {
        bVar41 = true;
      }
      local_18c = local_190;
      local_188 = local_190;
      local_184 = local_190;
      pfVar29 = pfVar28;
      if (bVar41) {
        iVar44 = 0;
        lVar42 = uVar24 - 0x1a0;
        lVar43 = uVar24 - 0x19a0;
        iVar26 = 0;
        fVar48 = (float)((int)fVar2 >> 0xc);
        fVar39 = (float)((int)fVar6 >> 0xc);
        fVar40 = fVar3;
        fVar8 = fVar5;
        fVar9 = fVar4;
        fVar18 = (float)((int)fVar3 >> 0xc);
        fVar27 = local_190;
        fVar37 = (float)((int)fVar4 >> 0xc);
        fVar47 = fVar20;
        fVar10 = fVar22;
        fVar11 = fVar21;
        do {
          fVar19 = fVar10;
          fVar10 = fVar47;
          fVar33 = fVar37;
          fVar37 = fVar27;
          fVar27 = fVar18;
          fVar18 = fVar8;
          fVar8 = fVar40;
          fVar40 = fVar38;
          fVar38 = fVar48;
          lVar36 = lVar43;
          if ((int)fVar38 - (int)fVar27 < 0) {
            iVar45 = -1;
            fVar48 = (float)((int)fVar27 + 1);
            fVar47 = (float)((int)fVar38 + 1);
          }
          else {
            iVar45 = 1;
            fVar48 = fVar27;
            fVar47 = fVar38;
          }
          while (fVar48 != fVar47) {
            local_140 = (longlong)(((int)fVar48 + iVar45) * 0x1000);
            dVar53 = (double)((1.0 / fVar10) * ((float)local_140 - fVar8));
            if (1.0 <= dVar53) {
              dVar53 = 1.0;
            }
            if (dVar53 <= 0.0) {
              dVar53 = dVar54;
            }
            local_190 = (float)dVar53;
            local_18c = (float)dVar53;
            local_188 = (float)dVar53;
            local_184 = (float)dVar53;
            auVar16.piece<0,4>() = local_190;
            auVar16.piece<4,4>() = local_18c;
            auVar16.piece<8,4>() = local_188;
            auVar16.piece<12,4>() = local_184;
            iVar26 = iVar26 + 1;
            uVar14 = storeVectorElementWordIndexed(auVar16,0,lVar36);
            *(undefined4 *)lVar36 = uVar14;
            lVar36 = lVar36 + 4;
            fVar48 = (float)((int)fVar48 + iVar45);
          }
          *(undefined4 *)lVar36 = 0x46a00000;
          iVar44 = iVar44 + 1;
          lVar43 = lVar43 + 0x400;
          *(undefined1 *)lVar42 = (char)iVar45;
          lVar42 = lVar42 + 1;
          fVar48 = fVar39;
          fVar39 = fVar40;
          fVar40 = fVar9;
          fVar9 = fVar18;
          fVar18 = fVar33;
          fVar47 = fVar11;
          fVar11 = fVar19;
        } while (iVar44 < 3);
        uVar25 = uVar24 - 0x19a0;
        local_198.piece<2,2>() = CONCAT11(SUB41(fVar27,0),(undefined1)local_198);
        local_198 = (float)CONCAT22(CONCAT11(SUB41(fVar33,0),SUB41(fVar37,0)),local_198.piece<2,2>());
        uVar32 = uVar24 - 0x15a0;
        *pfVar28 = 0.0;
        uVar35 = uVar24 - 0x11a0;
        pfVar28[1] = local_198;
        lVar42 = uVar24 - 0x21a0;
        fVar38 = local_198;
        for (; local_198 = fVar38, -1 < iVar26; iVar26 = iVar26 + -1) {
          fVar8 = *(float *)uVar25;
          fVar9 = *(float *)uVar32;
          fVar10 = *(float *)uVar35;
          pfVar29 = (float *)(lVar42 + 8);
          iVar44 = (int)lVar42;
          local_198.piece<3,1>() = SUB41(fVar38,0);
          local_198.piece<2,1>() = (char)((uint)fVar38 >> 8);
          local_198.piece<0,1>() = (char)((uint)fVar38 >> 0x18);
          cVar23 = local_198.piece<0,1>();
          local_198.piece<0,2>() = (undefined2)((uint)fVar38 >> 0x10);
          if (fVar8 <= fVar9) {
            if (fVar8 <= fVar10) {
              uVar25 = uVar25 + 4 & 0xffffffff;
              local_198.piece<1,3>() = SUB43(fVar38,0);
              local_198 = (float)CONCAT13(cVar23 + local_1a0,local_198.piece<1,3>());
              *pfVar29 = fVar8;
              *(float *)(iVar44 + 0xc) = local_198;
            }
            else {
              uVar35 = uVar35 + 4 & 0xffffffff;
              local_198.piece<2,2>() = CONCAT11(local_198.piece<2,1>() + local_19e,(undefined1)local_198);
              *pfVar29 = fVar10;
              *(float *)(iVar44 + 0xc) = local_198;
            }
          }
          else if (fVar9 <= fVar10) {
            local_198.piece<1,1>() = (char)((uint)fVar38 >> 0x10);
            uVar32 = uVar32 + 4 & 0xffffffff;
            local_198.piece<2,2>() = SUB42(fVar38,0);
            local_198.piece<1,3>() = CONCAT12(local_198.piece<1,1>() + local_19f,local_198.piece<2,2>());
            local_198 = (float)CONCAT13(cVar23,local_198.piece<1,3>());
            *pfVar29 = fVar9;
            *(float *)(iVar44 + 0xc) = local_198;
          }
          else {
            uVar35 = uVar35 + 4 & 0xffffffff;
            local_198.piece<2,2>() = CONCAT11(local_198.piece<2,1>() + local_19e,(undefined1)local_198);
            *pfVar29 = fVar10;
            *(float *)(iVar44 + 0xc) = local_198;
          }
          lVar42 = lVar42 + 8;
          fVar38 = local_198;
        }
      }
      else {
        local_140 = (longlong)(int)fVar7;
        if (((int)fVar3 == (int)fVar2 && (int)fVar4 == (int)fVar6) && (int)fVar5 == (int)fVar7) {
          return 0;
        }
        auVar16 = SPLAT(auVar16) >> 0x60 &
                  (GPiece<16>)0xff;
        auVar17 = SPLAT(auVar17) >> 0x60 &
                  (GPiece<16>)0xff;
        auVar15 = auRam00000000 >> 0x60 & (GPiece<16>)0xff;
        uVar13 = storeVectorElementByteIndexed
                           (auVar16 | auVar16 << 8 | auVar16 << 0x10 | auVar16 << 0x18 |
                            auVar16 << 0x20 | auVar16 << 0x28 | auVar16 << 0x30 | auVar16 << 0x38 |
                            auVar16 << 0x40 | auVar16 << 0x48 | auVar16 << 0x50 | auVar16 << 0x58 |
                            auVar16 << 0x60 | auVar16 << 0x68 | auVar16 << 0x70 | auVar16 << 0x78,0,
                            uVar24 - 0x219c);
        *(undefined1 *)(uVar24 - 0x219c) = uVar13;
        uVar13 = storeVectorElementByteIndexed
                           (auVar17 | auVar17 << 8 | auVar17 << 0x10 | auVar17 << 0x18 |
                            auVar17 << 0x20 | auVar17 << 0x28 | auVar17 << 0x30 | auVar17 << 0x38 |
                            auVar17 << 0x40 | auVar17 << 0x48 | auVar17 << 0x50 | auVar17 << 0x58 |
                            auVar17 << 0x60 | auVar17 << 0x68 | auVar17 << 0x70 | auVar17 << 0x78,0,
                            uVar24 - 0x219b);
        *(undefined1 *)(uVar24 - 0x219b) = uVar13;
        uVar13 = storeVectorElementByteIndexed
                           (auVar15 | auVar15 << 8 | auVar15 << 0x10 | auVar15 << 0x18 |
                            auVar15 << 0x20 | auVar15 << 0x28 | auVar15 << 0x30 | auVar15 << 0x38 |
                            auVar15 << 0x40 | auVar15 << 0x48 | auVar15 << 0x50 | auVar15 << 0x58 |
                            auVar15 << 0x60 | auVar15 << 0x68 | auVar15 << 0x70 | auVar15 << 0x78,0,
                            uVar24 - 0x219a);
        *(undefined1 *)(uVar24 - 0x219a) = uVar13;
      }
      dVar53 = 1.0;
      *pfVar29 = 1.0;
      lVar42 = uVar24 - 0x25e8;
      FUN_005e7a78(lVar42);
      if ((param_3 & 1) == 0) {
        uVar35 = 0;
        while ((dVar69 = (double)*(float *)((int)&local_21a0 + (int)((uVar35 & 0xffffffff) << 3)),
               dVar69 <= (double)local_25e0 &&
               (CollLineVsEnv(dVar69,lVar42,param_3,CONCAT44(fVar3,fVar4),
                              CONCAT44(fVar5,fStack_2924),CONCAT44(fVar2,fVar6),
                              CONCAT44(fVar7,fStack_2914),CONCAT44(fVar20,fVar21),
                              CONCAT44(fVar22,uStack_2904)), fStack_292c = fVar4,
               fStack_291c = fVar6, dVar69 != dVar53))) {
          uVar35 = (ulonglong)((int)uVar35 + 1);
        }
      }
      local_160 = (float *)&local_219c;
      uVar35 = ((ulonglong)local_219c << 0x20) >> 0x22 | ((ulonglong)bStack_219b & 0xfc) << 0xe;
      *pfVar28 = (float)uVar35;
      if (((double)local_21a0 != dVar53) && ((double)local_2198 != dVar53)) {
        lVar36 = uVar24 - 0x2968;
        lVar43 = lVar36;
        do {
          uVar32 = ((ulonglong)*(byte *)((int)lVar36 + 0x7d4) << 0x20) >> 0x22 |
                   ((ulonglong)*(byte *)((int)lVar36 + 0x7d5) & 0x3fffc) << 0xe;
          if ((int)uVar32 == (int)uVar35) {
            local_160 = (float *)((int)local_160 + -4);
            uVar32 = uVar35;
          }
          else {
            *local_160 = (float)(int)uVar32;
          }
          local_160 = (float *)((int)local_160 + 4);
          lVar36 = lVar36 + 8;
          iVar26 = (int)lVar43;
          uVar35 = uVar32;
          lVar43 = lVar43 + 8;
        } while ((double)*(float *)(iVar26 + 0x7d8) != dVar53);
      }
      *local_160 = -NAN;
      fVar8 = fVar20 * fVar20 + fVar21 * fVar21 + fVar22 * fVar22;
      fVar38 = *pfVar28;
      local_160 = pfVar28;
      while (-1 < (int)fVar38) {
        iVar26 = (int)*local_160 >> 0x10;
        uVar12 = (uint)*local_160 & 0xffff;
        iVar44 = 0;
        local_170 = ZEXT48(g_MobyGrid + iVar26 * 0x40 + uVar12);
        local_168 = ZEXT48(&g_MobyGridLists) +
                    (longlong)g_MobyGrid[iVar26 * 0x40 + uVar12].listStart * 0x20 & 0xffffffff;
        if (g_MobyGrid[iVar26 * 0x40 + uVar12].count != '\0') {
          dVar69 = (double)local_180;
          local_178 = 0;
          do {
            pMVar46 = g_MobyInstance + *(short *)((int)local_168 + (int)local_178);
            if (((pMVar46 != (MobyInstance *)local_150) && (pMVar46->collision != (ushort *)0x0)) &&
               (iVar26 = *(int *)((int)local_158 + 0x10), pMVar46->collQueryStamp != iVar26)) {
              fVar38 = (pMVar46->bSphere).x;
              fVar9 = (pMVar46->bSphere).y;
              fVar10 = (pMVar46->bSphere).z;
              fVar11 = (pMVar46->bSphere).rad;
              if ((param_3 & 9) == 0 || (pMVar46->modeBits & CAN_BE_DAMAGED) != NONE) {
                dVar51 = (double)((fVar38 - fVar3) * (fVar20 / fVar8) +
                                  (fVar9 - fVar4) * (fVar21 / fVar8) +
                                 (fVar10 - fVar5) * (fVar22 / fVar8));
                if (dVar51 < dVar54) {
                  dVar51 = dVar54;
                }
                if ((double)local_25e0 < dVar51) {
                  dVar51 = (double)local_25e0;
                }
                fVar38 = (fVar3 + (float)((double)fVar20 * dVar51)) - fVar38;
                fVar9 = (fVar4 + (float)((double)fVar21 * dVar51)) - fVar9;
                fVar10 = (fVar5 + (float)((double)fVar22 * dVar51)) - fVar10;
                if (fVar38 * fVar38 + fVar9 * fVar9 + fVar10 * fVar10 < fVar11 * fVar11) {
                  uVar12 = *(uint *)(pMVar46->collision + 2);
                  iVar45 = ((int)uVar12 >> 5) + (uint)((int)uVar12 < 0 && (uVar12 & 0x1f) != 0);
                  if ((param_3 & 4) == 0) {
                    uVar31 = pMVar46->collision[1];
                  }
                  else {
                    uVar31 = *pMVar46->collision;
                  }
                  pMVar46->collQueryStamp = iVar26;
                  iVar26 = 0;
                  uVar12 = *(uint *)(pMVar46->collision + 6);
                  if (uVar31 != 0) {
                    if (uVar12 == ((param_3 & 2) == 0)) goto LAB_00059428;
                    iVar26 = CollMoby_GetJointCache(pMVar46,uVar31);
                  }
                  fVar38 = (float)((double)(pMVar46->pos).x * dVar69);
                  fVar9 = (float)((double)(pMVar46->pos).y * dVar69);
                  fVar10 = (float)((double)(pMVar46->pos).z * dVar69);
                  if (uVar12 != 0) {
                    fVar40 = fVar5 - fVar10;
                    fVar39 = fVar4 - fVar9;
                    fVar11 = fVar3 - fVar38;
                    fVar48 = fVar2 - fVar38;
                    fStack_2924 = fVar6 - fVar9;
                    fVar18 = fVar7 - fVar10;
                    fVar27 = fVar48;
                    if (fVar11 < fVar48) {
                      fVar27 = fVar11;
                    }
                    fVar37 = fStack_2924;
                    if (fVar39 < fStack_2924) {
                      fVar37 = fVar39;
                    }
                    fVar47 = fVar18;
                    if (fVar40 < fVar18) {
                      fVar47 = fVar40;
                    }
                    if (fVar48 < fVar11) {
                      fVar48 = fVar11;
                    }
                    if (fStack_2924 < fVar39) {
                      fStack_2924 = fVar39;
                    }
                    if (fVar18 < fVar40) {
                      fVar18 = fVar40;
                    }
                    iVar34 = 0x100;
                    lVar43 = uVar24 - 0xda0;
                    do {
                      iVar34 = iVar34 + -1;
                      pfVar28 = (float *)lVar43;
                      *pfVar28 = (float)dVar54;
                      pfVar28[1] = (float)dVar54;
                      pfVar28[2] = (float)dVar54;
                      lVar43 = lVar43 + 0xc;
                    } while (iVar34 != 0);
                    FUN_005e7ad8((double)pMVar46->scale,uVar24 - 0x260c,uVar24 - 0x2654);
                    fStack_2914 = local_2608;
                    CollMoby_TransformVerts
                              (pMVar46,CONCAT44(fVar27,fVar37),CONCAT44(fVar47,fStack_292c),
                               CONCAT44(fVar48,fStack_2924),CONCAT44(fVar18,fStack_291c),
                               CONCAT44(local_260c,local_2608),CONCAT44(local_2604,local_2600),
                               CONCAT44(local_25fc,local_25f8));
                    iVar34 = 0;
                    if (0 < local_28bc) {
                      iVar49 = 0;
                      do {
                        CollLineVsTri(local_28c0 + iVar49,uVar24 - 0xda0,uVar24 - 0x25a0,lVar42,
                                      uVar12,CONCAT44(fVar38,fVar9),CONCAT44(fVar10,local_2600),
                                      param_3 & 0xffffffff);
                        iVar34 = iVar34 + 1;
                        iVar49 = iVar49 + 4;
                        fStack_2914 = fVar9;
                      } while (iVar34 < local_28bc);
                    }
                  }
                  if ((param_3 & 2) == 0) {
                    puVar50 = pMVar46->collision + 8;
                    iVar34 = 0;
                    pfVar28 = pMVar46->collisionMesh;
                    if (0 < iVar45) {
                      do {
                        uVar12 = (uint)pfVar28 & 1;
                        pfVar28 = (float *)((int)pfVar28 >> 1);
                        bVar1 = *(byte *)puVar50;
                        if ((uVar12 == 0) &&
                           (((int)(short)puVar50[1] & ((param_3 & 4) == 0) + 1) != 0)) {
                          if (bVar1 < 2) {
                            if (bVar1 == 0) {
LAB_00058e48:
                              pfVar29 = (float *)(iVar26 + (int)((longlong)(short)puVar50[2] << 4));
                              fVar11 = pMVar46->scale;
                              pfVar30 = (float *)(iVar26 + (int)((longlong)(short)puVar50[3] << 4));
                              dVar70 = (double)(*pfVar30 * local_180 * fVar11);
                              dVar51 = (double)(pfVar30[1] * local_180 * fVar11);
                              dVar69 = (double)(pfVar30[2] * local_180 * fVar11);
                              dVar55 = (double)(*(float *)(puVar50 + 6) * fVar11);
                              FUN_005e7b50(uVar24 - 0x2708,uVar24 - 0x2630,
                                           CONCAT44(*pfVar29 * local_180 * fVar11,
                                                    pfVar29[1] * local_180 * fVar11),
                                           CONCAT44(pfVar29[2] * local_180 * fVar11,fStack_2924));
                              dVar71 = (double)local_2708;
                              fStack_292c = (float)dVar51;
                              dVar68 = (double)local_2704;
                              dVar66 = (double)local_2700;
                              FUN_005e7b50(uVar24 - 0x26fc,uVar24 - 0x2630,
                                           CONCAT44((float)dVar70,fStack_292c),
                                           CONCAT44((float)dVar69,fStack_2924));
                              fVar11 = (float)((double)local_26fc - dVar71);
                              fVar48 = (float)((double)local_26f8 - dVar68);
                              fVar39 = (float)((double)local_26f4 - dVar66);
                              dVar70 = (double)(float)(dVar55 * dVar55);
                              dVar69 = (double)(float)(dVar71 + (double)fVar38);
                              dVar51 = (double)(float)(dVar68 + (double)fVar9);
                              dVar67 = (double)(float)(dVar66 + (double)fVar10);
                              fVar40 = fVar48 * fVar22 - fVar39 * fVar21;
                              fVar18 = fVar39 * fVar21 - fVar48 * fVar22;
                              fVar27 = fVar39 * fVar20 - fVar11 * fVar22;
                              fVar37 = fVar11 * fVar22 - fVar39 * fVar20;
                              fVar47 = fVar11 * fVar21 - fVar48 * fVar20;
                              fVar19 = fVar48 * fVar20 - fVar11 * fVar21;
                              if (((dVar54 <= (double)(float)((double)(fVar40 * fVar40) - dVar53))
                                  || (dVar54 <= (double)(float)((double)(fVar27 * fVar27) - dVar53))
                                  ) || (dVar54 <= (double)(float)((double)(fVar47 * fVar47) - dVar53
                                                                 ))) {
                                local_130 = (float)dVar55;
                                dVar52 = (double)fVar3;
                                dVar57 = (double)fVar4;
                                dVar72 = (double)fVar5;
                                fVar33 = (float)((double)(float)((double)(fVar40 * fVar40) +
                                                                (double)(fVar27 * fVar27)) +
                                                (double)(fVar47 * fVar47));
                                fVar40 = ((fVar21 * fVar47 - fVar22 * fVar27) *
                                          (float)(dVar52 - dVar69) +
                                          (fVar22 * fVar40 - fVar20 * fVar47) *
                                          (float)(dVar57 - dVar51) +
                                         (fVar20 * fVar27 - fVar21 * fVar40) *
                                         (float)(dVar72 - dVar67)) / fVar33;
                                fVar33 = ((fVar48 * fVar19 - fVar39 * fVar37) *
                                          (float)(dVar69 - dVar52) +
                                          (fVar39 * fVar18 - fVar11 * fVar19) *
                                          (float)(dVar51 - dVar57) +
                                         (fVar11 * fVar37 - fVar48 * fVar18) *
                                         (float)(dVar67 - dVar72)) / fVar33;
                                dVar56 = (double)(float)(dVar67 + (double)(fVar39 * fVar40));
                                dVar67 = (double)(float)(dVar69 + (double)(fVar11 * fVar40));
                                dVar69 = (double)(float)(dVar51 + (double)(fVar48 * fVar40));
                                dVar51 = (double)(float)(dVar52 + (double)(fVar20 * fVar33));
                                dVar58 = (double)(float)(dVar57 + (double)(fVar21 * fVar33));
                                dVar59 = (double)(float)(dVar72 + (double)(fVar22 * fVar33));
                                FUN_005e7bf8(uVar24 - 0x26b4,CONCAT44(fVar11,fVar48),
                                             CONCAT44(fVar39,fStack_292c));
                                dVar63 = (double)fVar20;
                                dVar65 = (double)fVar22;
                                dVar64 = (double)fVar21;
                                dVar60 = (double)local_26b4;
                                dVar61 = (double)local_26b0;
                                dVar62 = (double)local_26ac;
                                FUN_005e7bf8(uVar24 - 0x26a8,CONCAT44(fVar20,fVar21),
                                             CONCAT44(fVar22,fStack_292c));
                                dVar55 = (double)local_130;
                                dVar69 = (double)(float)((double)((float)(dVar51 - dVar67) *
                                                                  (float)(dVar51 - dVar67) +
                                                                  (float)(dVar58 - dVar69) *
                                                                  (float)(dVar58 - dVar69) +
                                                                 (float)(dVar59 - dVar56) *
                                                                 (float)(dVar59 - dVar56)) - dVar70)
                                ;
                                if (dVar54 <= dVar69) goto LAB_00059414;
                                fVar40 = (float)(dVar60 * (double)local_26a8) +
                                         (float)(dVar61 * (double)local_26a4) +
                                         (float)(dVar62 * (double)local_26a0);
                                dVar70 = (double)(float)(dVar69 - (double)(float)(dVar53 - (double)(
                                                  fVar40 * fVar40)));
                                dVar69 = dVar54;
                                if (dVar54 < dVar70) {
                                  dVar69 = dVar70;
                                }
                                dVar69 = (double)(float)SQRT(dVar69);
                                dVar70 = (double)(float)(dVar51 - (double)(float)((double)local_26a8
                                                                                 * dVar69));
                                dVar51 = (double)(float)(dVar58 - (double)(float)((double)local_26a4
                                                                                 * dVar69));
                                dVar69 = (double)(float)(dVar59 - (double)(float)((double)local_26a0
                                                                                 * dVar69));
                                if ((double)((float)((double)(float)(dVar70 - dVar52) * dVar63) +
                                             (float)((double)(float)(dVar51 - dVar57) * dVar64) +
                                            (float)((double)(float)(dVar69 - dVar72) * dVar65)) <
                                    dVar54) {
                                  dVar70 = (double)fVar3;
                                  dVar51 = (double)fVar4;
                                  dVar69 = (double)fVar5;
                                }
                              }
                              else {
                                dVar70 = (double)fVar3;
                                dVar51 = (double)fVar4;
                                dVar69 = (double)fVar5;
                              }
                              dVar67 = (double)(float)(dVar71 + (double)fVar38);
                              dVar68 = (double)(float)(dVar68 + (double)fVar9);
                              dVar66 = (double)(float)(dVar66 + (double)fVar10);
                              dVar57 = (double)fVar11;
                              dVar71 = (double)fVar48;
                              dVar52 = (double)fVar39;
                              dVar51 = (double)(((float)((double)(float)(dVar70 - dVar67) * dVar57)
                                                 + (float)((double)(float)(dVar51 - dVar68) * dVar71
                                                          ) +
                                                (float)((double)(float)(dVar69 - dVar66) * dVar52))
                                               / ((float)(dVar57 * dVar57) +
                                                  (float)(dVar71 * dVar71) +
                                                 (float)(dVar52 * dVar52)));
                              dVar69 = dVar54;
                              if (dVar54 < dVar51) {
                                dVar69 = dVar51;
                              }
                              if (dVar53 <= dVar69) {
                                dVar69 = dVar53;
                              }
                              CollLineVsSphere(CONCAT44((float)(dVar67 + (double)(float)(dVar57 * 
                                                  dVar69)),(float)(dVar68 + (double)(float)(dVar71 *
                                                                                           dVar69)))
                                               ,CONCAT44((float)(dVar66 + (double)(float)(dVar52 * 
                                                  dVar69)),(float)dVar55),CONCAT44(fVar3,fVar4),
                                               CONCAT44(fVar5,fStack_2924),CONCAT44(fVar20,fVar21),
                                               CONCAT44(fVar22,fStack_2914),lVar42,puVar50);
                              fStack_292c = fVar4;
                              fStack_291c = fVar21;
                            }
                            else {
                              fVar11 = pMVar46->scale;
                              dVar69 = (double)(*(float *)(puVar50 + 0xe) * fVar11);
                              FUN_005e7b50(uVar24 - 0x27e0,uVar24 - 0x2630,
                                           CONCAT44(*(float *)(puVar50 + 8) * fVar11,
                                                    *(float *)(puVar50 + 10) * fVar11),
                                           CONCAT44(*(float *)(puVar50 + 0xc) * fVar11,fStack_2924))
                              ;
                              CollLineVsSphere(CONCAT44(local_27e0 + fVar38,local_27dc + fVar9),
                                               CONCAT44(local_27d8 + fVar10,(float)dVar69),
                                               CONCAT44(fVar3,fVar4),CONCAT44(fVar5,fStack_2924),
                                               CONCAT44(fVar20,fVar21),CONCAT44(fVar22,fStack_2914),
                                               lVar42,puVar50);
                              fStack_292c = fVar4;
                              fStack_291c = fVar21;
                            }
                          }
                          else if (bVar1 < 3) {
                            pfVar29 = (float *)(iVar26 + *(int *)(puVar50 + 2) * 0x10);
                            fVar11 = pMVar46->scale;
                            dVar51 = (double)(*(float *)(puVar50 + 6) * fVar11);
                            FUN_005e7b50(uVar24 - 0x27d4,uVar24 - 0x2630,
                                         CONCAT44(((float)((double)*pfVar29 * dVar69) +
                                                  *(float *)(puVar50 + 8)) * fVar11,
                                                  ((float)((double)pfVar29[1] * dVar69) +
                                                  *(float *)(puVar50 + 10)) * fVar11),
                                         CONCAT44(((float)((double)pfVar29[2] * dVar69) +
                                                  *(float *)(puVar50 + 0xc)) * fVar11,fStack_2924));
                            CollLineVsSphere(CONCAT44(local_27d4 + fVar38,local_27d0 + fVar9),
                                             CONCAT44(local_27cc + fVar10,(float)dVar51),
                                             CONCAT44(fVar3,fVar4),CONCAT44(fVar5,fStack_2924),
                                             CONCAT44(fVar20,fVar21),CONCAT44(fVar22,fStack_2914),
                                             lVar42,puVar50);
                            fStack_292c = fVar4;
                            fStack_291c = fVar21;
                          }
                          else {
                            if (3 < bVar1) goto LAB_00058e48;
                            fVar48 = pMVar46->scale;
                            fVar39 = *(float *)(puVar50 + 10);
                            dVar67 = (double)(*(float *)(puVar50 + 0xe) * fVar48);
                            dVar68 = (double)(*(float *)(puVar50 + 2) * fVar48);
                            FUN_005e7b50(uVar24 - 0x27a4,uVar24 - 0x2630,
                                         CONCAT44(*(float *)(puVar50 + 8) * fVar48,fVar39 * fVar48),
                                         CONCAT44(*(float *)(puVar50 + 0xc) * fVar48,fStack_2924));
                            fVar40 = local_27a4 + fVar38;
                            fVar18 = local_27a0 + fVar9;
                            dVar69 = (double)(local_279c + fVar10);
                            dVar51 = (double)(fVar40 - fVar3);
                            dVar55 = (double)(fVar18 - fVar4);
                            dVar66 = (double)fVar20;
                            dVar70 = (double)fVar21;
                            fVar11 = (float)((double)((float)(dVar66 * dVar66) +
                                                     (float)(dVar70 * dVar70)) + dVar54);
                            if (fVar11 <= 0.015625) {
                              fVar11 = 0.015625;
                            }
                            fVar27 = (float)(dVar54 * dVar54);
                            fVar37 = (float)(dVar51 * dVar66) + (float)(dVar55 * dVar70) + fVar27;
                            dVar71 = (double)(fVar37 / fVar11);
                            if (dVar71 <= dVar54) {
                              dVar71 = dVar54;
                            }
                            if (dVar53 <= dVar71) {
                              dVar71 = dVar53;
                            }
                            fVar47 = (fVar3 + (float)(dVar66 * dVar71)) - fVar40;
                            fVar19 = (fVar4 + (float)(dVar70 * dVar71)) - fVar18;
                            fStack_292c = fVar39 * fVar48;
                            if ((double)((fVar47 * fVar47 + fVar19 * fVar19 + fVar27) -
                                        (float)(dVar67 * dVar67)) <= dVar54) {
                              fVar37 = fVar37 * 2.0;
                              dVar55 = (double)(fVar37 * fVar37 -
                                               fVar11 * 4.0 *
                                               (((float)(dVar51 * dVar51) + (float)(dVar55 * dVar55)
                                                + fVar27) - (float)(dVar67 * dVar67)));
                              dVar51 = dVar54;
                              if (dVar54 < dVar55) {
                                dVar51 = dVar55;
                              }
                              dVar51 = -(double)(((float)SQRT(dVar51) - fVar37) / (fVar11 * 2.0));
                              if (dVar51 < dVar54) {
                                dVar51 = dVar54;
                              }
                              if (dVar53 < dVar51) {
                                dVar51 = dVar53;
                              }
                              dVar55 = (double)(fVar5 + (float)((double)fVar22 * dVar51));
                              dVar51 = dVar55;
                              if (dVar55 < dVar69) {
                                dVar51 = dVar69;
                              }
                              dVar70 = (double)(float)(dVar68 + dVar69);
                              if ((dVar51 < (double)(float)(dVar68 + dVar69)) &&
                                 (dVar70 = dVar55, dVar55 < dVar69)) {
                                dVar70 = dVar69;
                              }
                              CollLineVsSphere(CONCAT44(fVar40,fVar18),
                                               CONCAT44((float)dVar70,(float)dVar67),
                                               CONCAT44(fVar3,fVar4),CONCAT44(fVar5,fStack_2924),
                                               CONCAT44(fVar20,fVar21),CONCAT44(fVar22,fStack_2914),
                                               lVar42,puVar50);
                              fStack_292c = fVar4;
                              fStack_291c = fVar21;
                            }
                          }
                        }
LAB_00059414:
                        iVar34 = iVar34 + 1;
                        dVar69 = (double)local_180;
                        puVar50 = puVar50 + 0x10;
                      } while (iVar34 < iVar45);
                    }
                  }
                }
              }
            }
LAB_00059428:
            iVar44 = iVar44 + 1;
            local_178 = local_178 + 2;
          } while (iVar44 < (int)(uint)*(byte *)((int)local_170 + 2));
        }
        local_160 = local_160 + 1;
        fVar38 = *local_160;
      }
      if (local_25e8 != 0) {
        iVar26 = (int)local_158;
        *(float *)(iVar26 + 0x20) = local_25dc * 0.0009765625;
        *(float *)(iVar26 + 0x24) = local_25d8 * 0.0009765625;
        *(float *)(iVar26 + 0x28) = local_25d4 * 0.0009765625;
        *(undefined4 *)(iVar26 + 0x40) = local_25d0;
        *(undefined4 *)(iVar26 + 0x44) = local_25cc;
        *(undefined4 *)(iVar26 + 0x48) = local_25c8;
        *(float *)(iVar26 + 0x50) = local_25c4 * 0.0009765625;
        *(float *)(iVar26 + 0x54) = local_25c0 * 0.0009765625;
        *(float *)(iVar26 + 0x58) = local_25bc * 0.0009765625;
        *(float *)(iVar26 + 0x60) = local_25b8 * 0.0009765625;
        *(float *)(iVar26 + 100) = local_25b4 * 0.0009765625;
        *(float *)(iVar26 + 0x68) = local_25b0 * 0.0009765625;
        *(float *)(iVar26 + 0x70) = local_25ac * 0.0009765625;
        *(float *)(iVar26 + 0x74) = local_25a8 * 0.0009765625;
        *(float *)(iVar26 + 0x78) = local_25a4 * 0.0009765625;
        *(undefined4 *)(iVar26 + 0x18) = 0;
        *(int *)(iVar26 + 0x1c) = local_25e8;
        return 1;
      }
    }
  }
  return 0;
}


// 0x0059658 (0x19c bytes)
/* WARNING: Restarted to delay deadcode elimination for space: stack */

void CollSphereVsSphere
               (double param_1,double param_2,undefined8 param_3,undefined8 param_4,
               undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
               int *param_9,int param_10)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  double dVar7;
  float fStack00000030;
  float fStack00000034;
  float fStack00000040;
  float fStack00000044;
  int in_stack_00000074;
  
  fVar4 = (float)((ulonglong)param_4 >> 0x20);
  fVar5 = (float)((ulonglong)param_6 >> 0x20);
  fStack00000030 = (float)((ulonglong)param_3 >> 0x20);
  fStack00000034 = (float)param_3;
  fStack00000040 = (float)((ulonglong)param_5 >> 0x20);
  fStack00000044 = (float)param_5;
  fVar6 = (fStack00000040 - fStack00000030) * (fStack00000040 - fStack00000030) +
          (fStack00000044 - fStack00000034) * (fStack00000044 - fStack00000034) +
          (fVar5 - fVar4) * (fVar5 - fVar4);
  if (fVar6 <= (float)(param_1 + param_2) * (float)(param_1 + param_2)) {
    fVar3 = 0.0;
    fVar2 = fVar3;
    fVar1 = fVar3;
    if (fVar6 != 0.0) {
      dVar7 = (double)(SQRT(fVar6) * 0.9995);
      if (dVar7 <= param_2) {
        param_2 = dVar7;
      }
      fVar6 = 1.0 / SQRT(fVar6);
      fVar1 = (float)(param_2 * (double)((fStack00000030 - fStack00000040) * fVar6));
      fVar2 = (float)(param_2 * (double)((fStack00000034 - fStack00000044) * fVar6));
      fVar3 = (float)(param_2 * (double)((fVar4 - fVar5) * fVar6));
    }
    fStack00000030 = (fStack00000040 + fVar1) - fStack00000030;
    fStack00000034 = (fStack00000044 + fVar2) - fStack00000034;
    fVar4 = (fVar5 + fVar3) - fVar4;
    fVar4 = fStack00000030 * fStack00000030 + fStack00000034 * fStack00000034 + fVar4 * fVar4;
    if (fVar4 <= (float)param_9[2]) {
      param_9[2] = (int)fVar4;
      param_9[1] = in_stack_00000074;
      param_9[3] = (int)(fStack00000040 + fVar1);
      param_9[4] = (int)(fStack00000044 + fVar2);
      param_9[5] = (int)(fVar5 + fVar3);
      *param_9 = -param_10;
      param_9[6] = (int)fVar1;
      param_9[7] = (int)fVar2;
      param_9[8] = (int)fVar3;
    }
  }
  return;
}


// 0x0059800 (0x604 bytes)
/* WARNING: Restarted to delay deadcode elimination for space: stack */

void CollSphereVsTri
               (byte *param_1,int param_2,int param_3,int *param_4,undefined8 param_5,
               undefined8 param_6,undefined8 param_7,uint param_8)

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
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float *pfVar17;
  float *pfVar18;
  float *pfVar19;
  float fStack00000058;
  float fStack0000005c;
  float in_stack_00000070;
  float in_stack_00000074;
  float in_stack_00000078;
  int in_stack_00000084;
  float local_118;
  float local_114;
  float local_110;
  float local_100;
  float local_fc;
  float local_f8;
  float local_f4;
  float local_f0;
  float local_ec;
  
  pfVar19 = (float *)(param_2 + (uint)*param_1 * 0xc);
  pfVar18 = (float *)(param_2 + (uint)param_1[1] * 0xc);
  fVar2 = *pfVar19;
  fVar3 = pfVar19[1];
  pfVar17 = (float *)(param_2 + (uint)param_1[2] * 0xc);
  fVar4 = pfVar19[2];
  bVar1 = param_1[3];
  if ((*(uint *)(param_3 + (uint)*param_1 * 4) & *(uint *)(param_3 + (uint)param_1[1] * 4) &
      *(uint *)(param_3 + (uint)param_1[2] * 4)) != 0) {
    return;
  }
  if ((bVar1 & 0x80 & param_8) != 0) {
    return;
  }
  if ((param_8 & 0x20) != 0 && ((param_8 >> 8 ^ (uint)bVar1) & 0x1f) == 0) {
    return;
  }
  fVar11 = *pfVar18 - fVar2;
  fVar13 = pfVar18[1] - fVar3;
  fVar15 = pfVar18[2] - fVar4;
  fVar12 = *pfVar17 - fVar2;
  fVar14 = pfVar17[1] - fVar3;
  fVar16 = pfVar17[2] - fVar4;
  in_stack_00000070 = in_stack_00000070 - fVar2;
  in_stack_00000078 = in_stack_00000078 - fVar4;
  in_stack_00000074 = in_stack_00000074 - fVar3;
  fVar6 = fVar14 * fVar15 - fVar16 * fVar13;
  fVar5 = fVar16 * fVar11 - fVar12 * fVar15;
  fVar7 = fVar12 * fVar13 - fVar14 * fVar11;
  fVar8 = fVar6 * fVar6 + fVar5 * fVar5 + fVar7 * fVar7;
  fVar9 = in_stack_00000070 * fVar6 + in_stack_00000074 * fVar5 + in_stack_00000078 * fVar7;
  fVar10 = fVar9 / fVar8;
  if (fVar8 == 0.0) {
    return;
  }
  if (((param_8 & 0x10) == 0) && (fVar9 < 0.0)) {
    return;
  }
  local_118 = in_stack_00000070 + -fVar6 * fVar10;
  local_110 = in_stack_00000078 + -fVar7 * fVar10;
  local_114 = in_stack_00000074 + -fVar5 * fVar10;
  fVar8 = fVar6 * fVar10 * fVar6 * fVar10 + fVar5 * fVar10 * fVar5 * fVar10 +
          fVar7 * fVar10 * fVar7 * fVar10;
  if ((float)param_4[2] < fVar8) {
    return;
  }
  if (0.0 <= (local_114 * fVar15 - local_110 * fVar13) * fVar6 +
             (local_110 * fVar11 - local_118 * fVar15) * fVar5 +
             (local_118 * fVar13 - local_114 * fVar11) * fVar7) {
    if ((fVar14 * local_110 - fVar16 * local_114) * fVar6 +
        (fVar16 * local_118 - fVar12 * local_110) * fVar5 +
        (fVar12 * local_114 - fVar14 * local_118) * fVar7 < 0.0) {
      local_f4 = 0.0;
      local_f0 = 0.0;
      local_ec = 0.0;
      local_100 = fVar12;
      local_fc = fVar14;
      local_f8 = fVar16;
    }
    else {
      local_100 = fVar11;
      local_fc = fVar13;
      local_f8 = fVar15;
      local_f4 = fVar12;
      local_f0 = fVar14;
      local_ec = fVar16;
      if (0.0 <= ((local_114 - fVar13) * (fVar16 - fVar15) -
                 (local_110 - fVar15) * (fVar14 - fVar13)) * fVar6 +
                 ((local_110 - fVar15) * (fVar12 - fVar11) -
                 (local_118 - fVar11) * (fVar16 - fVar15)) * fVar5 +
                 ((local_118 - fVar11) * (fVar14 - fVar13) -
                 (local_114 - fVar13) * (fVar12 - fVar11)) * fVar7) goto LAB_00059cc0;
    }
  }
  else {
    local_100 = 0.0;
    local_fc = 0.0;
    local_f8 = 0.0;
    local_f4 = fVar11;
    local_f0 = fVar13;
    local_ec = fVar15;
  }
  local_f4 = local_f4 - local_100;
  local_f0 = local_f0 - local_fc;
  local_ec = local_ec - local_f8;
  fVar8 = ((local_118 - local_100) * local_f4 + (local_114 - local_fc) * local_f0 +
          (local_110 - local_f8) * local_ec) /
          (local_f4 * local_f4 + local_f0 * local_f0 + local_ec * local_ec);
  if (fVar8 <= 0.0) {
    fVar8 = 0.0;
  }
  if (1.0 <= fVar8) {
    fVar8 = 1.0;
  }
  local_118 = local_100 + local_f4 * fVar8;
  local_114 = local_fc + local_f0 * fVar8;
  local_110 = local_f8 + local_ec * fVar8;
  fVar8 = (local_118 - in_stack_00000070) * (local_118 - in_stack_00000070) +
          (local_114 - in_stack_00000074) * (local_114 - in_stack_00000074) +
          (local_110 - in_stack_00000078) * (local_110 - in_stack_00000078);
  if ((float)param_4[2] < fVar8) {
    return;
  }
LAB_00059cc0:
  fStack0000005c = (float)param_6;
  fStack00000058 = (float)((ulonglong)param_6 >> 0x20);
  fVar2 = fVar2 + fStack00000058;
  fVar3 = fVar3 + fStack0000005c;
  *param_4 = bVar1 + 0x1000;
  fVar4 = fVar4 + (float)((ulonglong)param_7 >> 0x20);
  param_4[1] = in_stack_00000084;
  param_4[2] = (int)(fVar8 * 0.9995);
  param_4[3] = (int)(local_118 + fVar2);
  param_4[4] = (int)(local_114 + fVar3);
  param_4[5] = (int)(local_110 + fVar4);
  param_4[6] = (int)fVar6;
  param_4[7] = (int)fVar5;
  param_4[8] = (int)fVar7;
  param_4[9] = (int)fVar2;
  param_4[10] = (int)fVar3;
  param_4[0xb] = (int)fVar4;
  param_4[0xc] = (int)(fVar11 + fVar2);
  param_4[0xd] = (int)(fVar13 + fVar3);
  param_4[0xe] = (int)(fVar15 + fVar4);
  param_4[0xf] = (int)(fVar12 + fVar2);
  param_4[0x10] = (int)(fVar14 + fVar3);
  param_4[0x11] = (int)(fVar16 + fVar4);
  return;
}


// 0x0059e20 (0x1df0 bytes)
// strings: 00651b1c: 'CollSphere: Cannot have NaN, this will blow out stack on CollLine as the line goes on forever.'

/* [collision] CollSphere(…, float *pos, …, COLL_FLAGS flags, MobyInstance *skip); radius in f1.
   Same env(x1024)+moby path and flag semantics as CollLine. */

undefined8
CollSphere
          (ulonglong param_1,float *param_2,undefined8 param_3,uint param_4,ulonglong param_5)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  byte bVar5;
  char cVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  short sVar10;
  int iVar11;
  int iVar12;
  undefined4 uVar13;
  GPiece<16> auVar14;
  GPiece<16> auVar15;
  ulonglong *puVar16;
  float fVar17;
  float fVar18;
  int iVar19;
  float fVar20;
  float fVar21;
  ulonglong uVar22;
  int iVar24;
  longlong lVar23;
  undefined4 *puVar25;
  CollCell *pCVar26;
  ushort uVar29;
  float *pfVar28;
  short *psVar30;
  float *pfVar31;
  uint uVar32;
  longlong lVar33;
  ulonglong unaff_r14;
  ulonglong unaff_r15;
  ulonglong unaff_r16;
  int iVar34;
  ulonglong unaff_r17;
  ulonglong unaff_r18;
  ulonglong unaff_r19;
  ulonglong unaff_r20;
  int iVar35;
  ulonglong unaff_r21;
  ulonglong unaff_r22;
  undefined *puVar36;
  ulonglong unaff_r23;
  ulonglong uVar37;
  int iVar38;
  ulonglong unaff_r24;
  MobyInstance *pMVar39;
  ulonglong unaff_r25;
  ulonglong uVar40;
  ulonglong unaff_r26;
  ulonglong unaff_r27;
  int iVar41;
  ulonglong unaff_r28;
  uint uVar42;
  ulonglong unaff_r29;
  float *pfVar43;
  ulonglong unaff_r30;
  ushort *puVar44;
  ulonglong unaff_r31;
  ulonglong in_LR;
  ulonglong uVar45;
  double dVar46;
  double dVar47;
  double dVar48;
  double dVar49;
  double dVar50;
  double dVar51;
  double dVar52;
  double dVar53;
  ulonglong in_f14;
  double dVar54;
  ulonglong in_f15;
  ulonglong in_f16;
  ulonglong in_f17;
  ulonglong in_f18;
  ulonglong in_f19;
  ulonglong in_f20;
  ulonglong in_f21;
  double dVar55;
  ulonglong in_f22;
  double dVar56;
  ulonglong in_f23;
  double dVar57;
  ulonglong in_f24;
  ulonglong in_f25;
  double dVar58;
  ulonglong in_f26;
  double dVar59;
  ulonglong in_f27;
  double dVar60;
  ulonglong in_f28;
  ulonglong in_f29;
  ulonglong in_f30;
  ulonglong in_f31;
  double dVar61;
  GPiece<16> auVar62;
  GPiece<16> auVar63;
  int iVar27;
  
  uVar22 = ZEXT48(&stack0x00000000);
  puVar16 = (ulonglong *)(uVar22 - 0x28d0);
  *puVar16 = uVar22;
  puVar16[0x51c] = in_LR;
  puVar16[0x508] = in_f14;
  puVar16[0x509] = in_f15;
  puVar16[0x50a] = in_f16;
  puVar16[0x50b] = in_f17;
  puVar16[0x50c] = in_f18;
  puVar16[0x50d] = in_f19;
  puVar16[0x50e] = in_f20;
  puVar16[0x50f] = in_f21;
  puVar16[0x510] = in_f22;
  puVar16[0x511] = in_f23;
  puVar16[0x512] = in_f24;
  puVar16[0x513] = in_f25;
  puVar16[0x514] = in_f26;
  puVar16[0x515] = in_f27;
  puVar16[0x516] = in_f28;
  puVar16[0x517] = in_f29;
  puVar16[0x518] = in_f30;
  puVar16[0x519] = in_f31;
  puVar16[0x507] = unaff_r31;
  puVar16[0x505] = unaff_r29;
  puVar16[0x4f6] = unaff_r14;
  puVar16[0x4e2] = param_1;
  puVar16[0x4e8] = param_5;
  puVar16[0x4fa] = unaff_r18;
  fVar7 = *param_2;
  puVar16[0x506] = unaff_r30;
  puVar16[0x504] = unaff_r28;
  puVar16[0x503] = unaff_r27;
  puVar16[0x502] = unaff_r26;
  puVar16[0x501] = unaff_r25;
  puVar16[0x500] = unaff_r24;
  puVar16[0x4ff] = unaff_r23;
  puVar16[0x4fe] = unaff_r22;
  puVar16[0x4fd] = unaff_r21;
  puVar16[0x4fc] = unaff_r20;
  puVar16[0x4fb] = unaff_r19;
  puVar16[0x4f9] = unaff_r17;
  puVar16[0x4f8] = unaff_r16;
  puVar16[0x4f7] = unaff_r15;
  *(float *)(puVar16 + 0x17) = fVar7;
  iVar24 = FUN_005dd48c(uVar22 - 0x2818);
  if (iVar24 != 2) {
    *(float *)((int)puVar16 + 0xb4) = param_2[1];
    iVar24 = FUN_005dd48c(uVar22 - 0x281c);
    if (iVar24 != 2) {
      *(float *)(puVar16 + 0x16) = param_2[2];
      iVar24 = FUN_005dd48c(uVar22 - 0x2820);
      if (iVar24 != 2) {
        dVar51 = (double)puVar16[0x4e2];
        dVar52 = (double)param_2[1];
        dVar53 = (double)param_2[2];
        dVar59 = (double)*param_2 + dVar51;
        fVar7 = (float)(dVar52 + dVar51);
        fVar1 = (float)(dVar53 + dVar51);
        dVar60 = (double)*param_2 - dVar51;
        fVar3 = (float)(dVar52 - dVar51);
        fVar4 = (float)(dVar53 - dVar51);
        *(float *)(puVar16 + 0x18) = fVar7;
        *(float *)((int)puVar16 + 0xc4) = fVar1;
        *(float *)((int)puVar16 + 0xcc) = fVar3;
        *(float *)(puVar16 + 0x1a) = fVar4;
        dVar54 = 1024.0;
        fVar2 = (float)(dVar51 * 1024.0);
        *(float *)(puVar16 + 0x1b) = (float)(dVar52 * 1024.0);
        *(float *)((int)puVar16 + 0xdc) = (float)(dVar53 * 1024.0);
        dVar58 = 0.0;
        if (((((0.0 <= (float)dVar60) && (0.0 <= fVar3)) && (0.0 <= fVar4)) &&
            (((float)dVar59 <= 1024.0 && (fVar7 <= 1024.0)))) &&
           ((fVar1 <= 1024.0 && (-1 < g_CollOutput.collCount)))) {
          g_CollOutput.collCount = g_CollOutput.collCount + 1;
          puVar16[0x4ef] = (longlong)(int)dVar60;
          puVar16[0x4ef] = (longlong)(int)(dVar52 - dVar51);
          iVar24 = *(int *)((int)puVar16 + 0x277c);
          puVar16[0x4ef] = (longlong)(int)(dVar53 - dVar51);
          puVar16[0x4ef] = (longlong)(int)dVar59;
          puVar16[0x4ef] = (longlong)(int)(dVar52 + dVar51);
          iVar34 = *(int *)((int)puVar16 + 0x277c);
          puVar16[0x4ef] = (longlong)(int)(dVar53 + dVar51);
          if (0.0 < fVar2) {
            iVar38 = *(int *)((int)puVar16 + 0x277c) >> 2;
            *(int *)(puVar16 + 0x4e0) = iVar38;
            *(int *)((int)puVar16 + 0x2704) = iVar38;
            *(int *)(puVar16 + 0x4e1) = iVar38;
            iVar35 = iVar24 >> 2;
            *(int *)((int)puVar16 + 0x270c) = iVar38;
            iVar41 = *(int *)((int)puVar16 + 0x277c) >> 2;
            *(float *)((int)puVar16 + 0xe4) = fVar3 * 1024.0;
            *(float *)(puVar16 + 0x1d) = fVar4 * 1024.0;
            *(float *)(puVar16 + 0x1e) = fVar7 * 1024.0;
            *(float *)((int)puVar16 + 0xf4) = fVar1 * 1024.0;
            auVar14 = auRam00000000 >> 0x60 & (GPiece<16>)0xffffffff;
            *(int *)(puVar16 + 0x4e0) = iVar35;
            *(int *)((int)puVar16 + 0x2704) = iVar35;
            *(int *)(puVar16 + 0x4e1) = iVar35;
            *(int *)((int)puVar16 + 0x270c) = iVar35;
            auVar15 = auRam00000000;
            *(int *)(puVar16 + 0x4e0) = iVar41;
            *(int *)((int)puVar16 + 0x2704) = iVar41;
            *(int *)(puVar16 + 0x4e1) = iVar41;
            *(int *)((int)puVar16 + 0x270c) = iVar41;
            auVar15 = auVar15 >> 0x60 & (GPiece<16>)0xffffffff;
            auVar63 = auRam00000000 >> 0x60 & (GPiece<16>)0xffffffff;
            lVar23 = uVar22 - 0x27cc;
            iVar27 = *(int *)((int)puVar16 + 0x277c) >> 2;
            iVar11 = iVar34 >> 2;
            iVar12 = *(int *)((int)puVar16 + 0x277c) >> 2;
            uVar13 = storeVectorElementWordIndexed
                               (auVar14 | auVar14 << 0x20 | auVar14 << 0x40 | auVar14 << 0x60,0,
                                lVar23);
            *(undefined4 *)lVar23 = uVar13;
            auVar14 = SPLAT(auVar63) >> 0x60 &
                      (GPiece<16>)0xffffffff;
            storeVectorElementWordIndexed
                      (auVar15 | auVar15 << 0x20 | auVar15 << 0x40 | auVar15 << 0x60,4,lVar23);
            storeVectorElementWordIndexed
                      (auVar14 | auVar14 << 0x20 | auVar14 << 0x40 | auVar14 << 0x60,8,lVar23);
            *(int *)(puVar16 + 0x4e0) = iVar27;
            *(int *)((int)puVar16 + 0x2704) = iVar27;
            *(int *)(puVar16 + 0x4e1) = iVar27;
            *(int *)((int)puVar16 + 0x270c) = iVar27;
            auVar14 = auRam00000000;
            *(int *)(puVar16 + 0x4e0) = iVar11;
            auVar14 = auVar14 >> 0x60 & (GPiece<16>)0xffffffff;
            *(int *)((int)puVar16 + 0x2704) = iVar11;
            *(int *)(puVar16 + 0x4e1) = iVar11;
            *(int *)((int)puVar16 + 0x270c) = iVar11;
            auVar15 = auRam00000000;
            *(int *)(puVar16 + 0x4e0) = iVar12;
            *(int *)((int)puVar16 + 0x2704) = iVar12;
            *(int *)(puVar16 + 0x4e1) = iVar12;
            *(int *)((int)puVar16 + 0x270c) = iVar12;
            auVar15 = auVar15 >> 0x60 & (GPiece<16>)0xffffffff;
            auVar63 = auRam00000000 >> 0x60 & (GPiece<16>)0xffffffff;
            lVar23 = uVar22 - 0x27c0;
            *(float *)((int)puVar16 + 0x271c) = fVar2;
            *(undefined4 *)(puVar16 + 0x4e3) = 0;
            puVar16[0x4ed] = (longlong)iVar38;
            puVar16[0x4e7] = (longlong)iVar27;
            uVar13 = storeVectorElementWordIndexed
                               (auVar14 | auVar14 << 0x20 | auVar14 << 0x40 | auVar14 << 0x60,0,
                                lVar23);
            *(undefined4 *)lVar23 = uVar13;
            auVar14 = SPLAT(auVar63) >> 0x60 &
                      (GPiece<16>)0xffffffff;
            storeVectorElementWordIndexed
                      (auVar15 | auVar15 << 0x20 | auVar15 << 0x40 | auVar15 << 0x60,4,lVar23);
            storeVectorElementWordIndexed
                      (auVar14 | auVar14 << 0x20 | auVar14 << 0x40 | auVar14 << 0x60,8,lVar23);
            *(undefined4 *)(puVar16 + 0x56) = 0;
            *(undefined4 *)((int)puVar16 + 0x2b4) = 0;
            *(undefined4 *)(puVar16 + 0x57) = 0;
            *(undefined4 *)((int)puVar16 + 700) = 0;
            *(undefined4 *)(puVar16 + 0x58) = 0;
            *(undefined4 *)((int)puVar16 + 0x2c4) = 0;
            *(undefined4 *)(puVar16 + 0x59) = 0;
            *(undefined4 *)((int)puVar16 + 0x2cc) = 0;
            *(undefined4 *)(puVar16 + 0x5a) = 0;
            *(undefined4 *)((int)puVar16 + 0x2d4) = 0;
            *(undefined4 *)(puVar16 + 0x5b) = 0;
            *(undefined4 *)((int)puVar16 + 0x2dc) = 0;
            *(undefined4 *)(puVar16 + 0x5c) = 0;
            *(undefined4 *)((int)puVar16 + 0x2e4) = 0;
            *(undefined4 *)(puVar16 + 0x5d) = 0;
            *(undefined4 *)((int)puVar16 + 0x2a4) = 0;
            *(undefined4 *)(puVar16 + 0x55) = 0;
            *(undefined4 *)(puVar16 + 0x4e4) = 0x3f800000;
            *(float *)((int)puVar16 + 0x2ac) = fVar2 * fVar2 * 0.9995;
            if ((param_4 & 1) == 0) {
              iVar27 = iVar35 << 0xc;
              iVar38 = (int)((puVar16[0x4ed] & 0xffffffff) << 0xc);
              iVar19 = iVar41 << 0xc;
              *(int *)(puVar16 + 0x4e0) = iVar38;
              *(int *)((int)puVar16 + 0x2704) = iVar38;
              *(int *)(puVar16 + 0x4e1) = iVar38;
              *(int *)((int)puVar16 + 0x270c) = iVar38;
              auVar14 = auRam00000000;
              *(int *)(puVar16 + 0x4e0) = iVar27;
              auVar14 = auVar14 >> 0x60 & (GPiece<16>)0xffffffff;
              *(int *)((int)puVar16 + 0x2704) = iVar27;
              *(int *)(puVar16 + 0x4e1) = iVar27;
              *(int *)((int)puVar16 + 0x270c) = iVar27;
              auVar15 = auRam00000000;
              *(int *)(puVar16 + 0x4e0) = iVar19;
              *(int *)((int)puVar16 + 0x2704) = iVar19;
              *(int *)(puVar16 + 0x4e1) = iVar19;
              *(int *)((int)puVar16 + 0x270c) = iVar19;
              auVar15 = auVar15 >> 0x60 & (GPiece<16>)0xffffffff;
              auVar63 = auRam00000000 >> 0x60 & (GPiece<16>)0xffffffff;
              lVar23 = uVar22 - 0x27a8;
              uVar13 = storeVectorElementWordIndexed
                                 (auVar14 | auVar14 << 0x20 | auVar14 << 0x40 | auVar14 << 0x60,0,
                                  lVar23);
              *(undefined4 *)lVar23 = uVar13;
              auVar14 = SPLAT(auVar63) >> 0x60 &
                        (GPiece<16>)0xffffffff;
              storeVectorElementWordIndexed
                        (auVar15 | auVar15 << 0x20 | auVar15 << 0x40 | auVar15 << 0x60,4,lVar23);
              storeVectorElementWordIndexed
                        (auVar14 | auVar14 << 0x20 | auVar14 << 0x40 | auVar14 << 0x60,8,lVar23);
              puVar16[0x4ef] = (longlong)iVar38;
              uVar45 = puVar16[0x4ef];
              puVar16[0x4ef] = (longlong)iVar27;
              fVar7 = (float)(longlong)uVar45;
              lVar23 = uVar22 - 0x11e4;
              *(float *)(puVar16 + 0x4e0) = fVar7;
              *(float *)((int)puVar16 + 0x2704) = fVar7;
              *(float *)(puVar16 + 0x4e1) = fVar7;
              *(float *)((int)puVar16 + 0x270c) = fVar7;
              uVar45 = puVar16[0x4ef];
              puVar16[0x4ef] = (longlong)iVar19;
              fVar7 = (float)(longlong)uVar45;
              auVar14 = auRam00000000 >> 0x60 & (GPiece<16>)0xffffffff;
              *(float *)(puVar16 + 0x4e0) = fVar7;
              *(float *)((int)puVar16 + 0x2704) = fVar7;
              *(float *)(puVar16 + 0x4e1) = fVar7;
              *(float *)((int)puVar16 + 0x270c) = fVar7;
              fVar7 = (float)(longlong)puVar16[0x4ef];
              auVar15 = auRam00000000 >> 0x60 & (GPiece<16>)0xffffffff;
              *(float *)(puVar16 + 0x4e0) = fVar7;
              *(float *)((int)puVar16 + 0x2704) = fVar7;
              *(float *)(puVar16 + 0x4e1) = fVar7;
              *(float *)((int)puVar16 + 0x270c) = fVar7;
              auVar63 = auRam00000000 >> 0x60 & (GPiece<16>)0xffffffff;
              iVar38 = 0x100;
              auVar62 = auVar14 | auVar14 << 0x20 | auVar14 << 0x40 | auVar14 << 0x60;
              auVar14 = SPLAT(auVar15) >> 0x60 &
                        (GPiece<16>)0xffffffff;
              auVar15 = SPLAT(auVar63) >> 0x60 &
                        (GPiece<16>)0xffffffff;
              auVar63 = auVar14 | auVar14 << 0x20 | auVar14 << 0x40 | auVar14 << 0x60;
              auVar14 = SPLAT(auVar15) >> 0x60 &
                        (GPiece<16>)0xffffffff;
              storeVectorElementWordIndexed
                        (auVar14 | auVar14 << 0x20 | auVar14 << 0x40 | auVar14 << 0x60,8,
                         uVar22 - 0x27b4);
              do {
                puVar25 = (undefined4 *)lVar23;
                *puVar25 = 0;
                iVar38 = iVar38 + -1;
                puVar25[1] = 0;
                puVar25[2] = 0;
                puVar25[3] = 0;
                lVar23 = lVar23 + 0x10;
              } while (iVar38 != 0);
              uVar45 = uVar22 - 0x11e4;
              while( true ) {
                auVar14 = auVar63 >> 0x60 & (GPiece<16>)0xffffffff;
                uVar37 = puVar16[0x4e7];
                uVar13 = storeVectorElementWordIndexed
                                   (auVar14 | auVar14 << 0x20 | auVar14 << 0x40 | auVar14 << 0x60,0,
                                    uVar22 - 0x27b0);
                *(undefined4 *)(uVar22 - 0x27b0) = uVar13;
                iVar38 = iVar35;
                while( true ) {
                  auVar14 = auVar62 >> 0x60 & (GPiece<16>)0xffffffff;
                  uVar40 = puVar16[0x4ed];
                  uVar13 = storeVectorElementWordIndexed
                                     (auVar14 | auVar14 << 0x20 | auVar14 << 0x40 | auVar14 << 0x60,
                                      0,uVar22 - 0x27b4);
                  *(undefined4 *)(uVar22 - 0x27b4) = uVar13;
                  while( true ) {
                    dVar61 = (double)*(float *)((int)puVar16 + 0x11c);
                    dVar53 = (double)*(float *)(puVar16 + 0x24);
                    dVar52 = (double)*(float *)((int)puVar16 + 0x124);
                    dVar51 = (double)(float)(dVar61 + 2048.0);
                    dVar60 = (double)(float)(dVar53 + 2048.0);
                    dVar59 = (double)(float)(dVar52 + 2048.0);
                    *(float *)(puVar16 + 0x27) = (float)(dVar53 + 2048.0);
                    *(float *)((int)puVar16 + 0x13c) = (float)(dVar52 + 2048.0);
                    iVar27 = (int)uVar40;
                    pCVar26 = CollGrid_GetCell(iVar27,iVar38,iVar41);
                    *(CollCell **)(puVar16 + 0x14) = pCVar26;
                    if (pCVar26 != (CollCell *)0x0) {
                      fVar7 = *(float *)(puVar16 + 0x14);
                      pfVar43 = (float *)uVar45;
                      *pfVar43 = (float)dVar51;
                      pfVar43[1] = (float)dVar60;
                      pfVar43[2] = (float)dVar59;
                      pfVar43[3] = fVar7;
                      uVar45 = uVar45 + 0x10 & 0xffffffff;
                    }
                    if ((int)uVar37 == iVar27) break;
                    uVar40 = (ulonglong)(iVar27 + 1);
                    *(float *)(puVar16 + 0x24) = (float)(dVar53 + dVar58);
                    *(float *)((int)puVar16 + 0x124) = (float)(dVar52 + dVar58);
                    *(float *)((int)puVar16 + 0x11c) = (float)(dVar61 + 4096.0);
                  }
                  if (iVar11 == iVar38) break;
                  iVar38 = iVar38 + 1;
                  *(float *)((int)puVar16 + 0x124) = (float)(dVar52 + dVar58);
                  *(float *)(puVar16 + 0x24) = (float)(dVar53 + 4096.0);
                }
                if (iVar12 == iVar41) break;
                iVar41 = iVar41 + 1;
                *(float *)((int)puVar16 + 0x124) = (float)(dVar52 + 4096.0);
              }
              *(float *)((int)uVar45 + 0xc) = (float)dVar58;
              lVar23 = uVar22 - 0x11e4;
              *(float *)(puVar16 + 0x4e3) = (float)dVar58;
              while( true ) {
                pfVar43 = (float *)lVar23;
                psVar30 = (short *)pfVar43[3];
                *(float *)((int)puVar16 + 0xa4) = pfVar43[3];
                if (psVar30 == (short *)0x0) break;
                bVar5 = *(byte *)(psVar30 + 1);
                uVar42 = (uint)bVar5;
                if (bVar5 != 0) {
                  fVar7 = *pfVar43;
                  fVar1 = pfVar43[1];
                  fVar2 = pfVar43[2];
                  *(float *)((int)puVar16 + 0x144) = fVar1;
                  *(float *)(puVar16 + 0x29) = fVar2;
                  iVar38 = 0;
                  pfVar28 = (float *)(psVar30 + 2);
                  *(float *)(puVar16 + 0x2a) = *(float *)(puVar16 + 0x1b) - fVar1;
                  *(float *)((int)puVar16 + 0x154) = *(float *)((int)puVar16 + 0xdc) - fVar2;
                  fVar3 = *(float *)(puVar16 + 0x1c);
                  fVar4 = *(float *)(puVar16 + 0x1d);
                  fVar17 = *(float *)((int)puVar16 + 0xe4) - fVar1;
                  *(float *)((int)puVar16 + 0x15c) = fVar17;
                  *(float *)(puVar16 + 0x2c) = fVar4 - fVar2;
                  fVar8 = *(float *)((int)puVar16 + 0xec);
                  fVar9 = *(float *)(puVar16 + 0x1e);
                  fVar18 = *(float *)((int)puVar16 + 0xf4) - fVar2;
                  *(float *)(puVar16 + 0x2d) = fVar9 - fVar1;
                  *(float *)((int)puVar16 + 0x16c) = fVar18;
                  lVar33 = uVar22 - 0x28d0;
                  pfVar43 = pfVar28;
                  if (bVar5 != 0) {
                    do {
                      iVar38 = iVar38 + 1;
                      *(uint *)((int)lVar33 + 0x2ec) =
                           (uint)(fVar8 - fVar7 < *pfVar43) << 1 | (uint)(*pfVar43 < fVar3 - fVar7)
                           | (uint)(fVar9 - fVar1 < pfVar43[1]) << 9 |
                             (uint)(pfVar43[1] < fVar17) << 8 |
                           (uint)(fVar18 < pfVar43[2]) << 0x11 |
                           (uint)(pfVar43[2] < fVar4 - fVar2) << 0x10;
                      lVar33 = lVar33 + 4;
                      pfVar43 = pfVar43 + 3;
                    } while (iVar38 < (int)(uint)bVar5);
                  }
                  sVar10 = *psVar30;
                  iVar38 = 0;
                  pfVar31 = pfVar28 + uVar42 * 3;
                  pfVar43 = pfVar31;
                  if (0 < sVar10) {
                    do {
                      *(undefined4 *)(puVar16 + 0xb) = *(undefined4 *)(puVar16 + 0x28);
                      *(undefined4 *)(puVar16 + 0xc) = *(undefined4 *)(puVar16 + 0x29);
                      uVar45 = ZEXT48(g_CollOutput.grid);
                      *(undefined4 *)((int)puVar16 + 0x5c) = *(undefined4 *)((int)puVar16 + 0x144);
                      *(undefined4 *)(puVar16 + 0xe) = *(undefined4 *)((int)puVar16 + 0x14c);
                      *(undefined4 *)((int)puVar16 + 0x74) = *(undefined4 *)(puVar16 + 0x2a);
                      *(undefined4 *)(puVar16 + 0xf) = *(undefined4 *)((int)puVar16 + 0x154);
                      puVar16[0x10] = uVar45;
                      CollSphereVsTri(pfVar43,pfVar28,uVar22 - 0x25e4,uVar22 - 0x262c,uVar42,
                                      puVar16[0xb],puVar16[0xc],param_4);
                      iVar38 = iVar38 + 1;
                      pfVar43 = pfVar43 + 1;
                    } while (iVar38 < sVar10);
                  }
                  bVar5 = *(byte *)((int)psVar30 + 3);
                  if (bVar5 != 0) {
                    uVar45 = 0;
                    if (bVar5 != 0) {
                      do {
                        *(undefined4 *)(puVar16 + 0xb) = *(undefined4 *)(puVar16 + 0x28);
                        *(undefined4 *)(puVar16 + 0xc) = *(undefined4 *)(puVar16 + 0x29);
                        *(undefined4 *)(puVar16 + 0x4de) =
                             *(undefined4 *)((int)pfVar31 + (int)((uVar45 & 0xffffffff) << 2));
                        *(undefined1 *)((int)puVar16 + 0x26f1) =
                             *(undefined1 *)((int)puVar16 + 0x26f2);
                        uVar37 = ZEXT48(g_CollOutput.grid);
                        *(undefined1 *)((int)puVar16 + 0x26f2) =
                             *(undefined1 *)
                              ((int)pfVar31 + (int)uVar45 + (int)((longlong)sVar10 << 2));
                        *(undefined4 *)((int)puVar16 + 0x5c) = *(undefined4 *)((int)puVar16 + 0x144)
                        ;
                        *(undefined4 *)(puVar16 + 0xe) = *(undefined4 *)((int)puVar16 + 0x14c);
                        *(undefined4 *)((int)puVar16 + 0x74) = *(undefined4 *)(puVar16 + 0x2a);
                        *(undefined4 *)(puVar16 + 0xf) = *(undefined4 *)((int)puVar16 + 0x154);
                        puVar16[0x10] = uVar37;
                        CollSphereVsTri(uVar22 - 0x1e0,pfVar28,uVar22 - 0x25e4,uVar22 - 0x262c,
                                        uVar42,puVar16[0xb],puVar16[0xc],param_4);
                        iVar38 = (int)uVar45 + 1;
                        uVar45 = (ulonglong)iVar38;
                      } while (iVar38 < (int)(uint)bVar5);
                    }
                  }
                }
                lVar23 = lVar23 + 0x10;
              }
            }
            iVar24 = iVar24 >> 4;
            uVar45 = (longlong)(iVar34 >> 4) + 1;
            *(undefined4 *)(puVar16 + 0x55) = 0;
            puVar16[0x4eb] = (longlong)iVar24;
            puVar16[0x4ee] = uVar45;
            puVar16[0x4e7] = (longlong)((int)puVar16[0x4e7] >> 2);
            puVar16[0x4ed] = (longlong)((int)puVar16[0x4ed] >> 2);
            if (iVar24 < (int)uVar45) {
              do {
                puVar16[0x4e9] = puVar16[0x4ed];
                puVar16[0x4ec] = puVar16[0x4e7] + 1;
                if ((int)puVar16[0x4ed] < (int)(puVar16[0x4e7] + 1)) {
                  puVar16[0x4ea] = puVar16[0x4e9] << 2;
                  do {
                    iVar24 = 0;
                    uVar45 = ZEXT48(g_MobyGrid) +
                             puVar16[0x4ea] + (puVar16[0x4eb] & 0xffffff) * 0x100;
                    psVar30 = (short *)uVar45;
                    sVar10 = *psVar30;
                    puVar16[0x4e5] = uVar45 & 0xffffffff;
                    cVar6 = *(char *)(psVar30 + 1);
                    puVar16[0x4e6] = ZEXT48(&g_MobyGridLists) + (longlong)sVar10 * 0x20 & 0xffffffff
                    ;
                    if (cVar6 != '\0') {
                      iVar34 = 0;
                      dVar59 = (double)*(float *)((int)puVar16 + 0x271c);
                      do {
                        iVar38 = g_CollOutput.collCount;
                        pMVar39 = g_MobyInstance + *(short *)((int)puVar16[0x4e6] + iVar34);
                        uVar45 = ZEXT48(pMVar39);
                        if (((pMVar39 != (MobyInstance *)puVar16[0x4e8]) &&
                            (puVar44 = pMVar39->collision, puVar44 != (ushort *)0x0)) &&
                           (pMVar39->collQueryStamp != g_CollOutput.collCount)) {
                          fVar1 = (pMVar39->bSphere).x - *(float *)((int)puVar16 + 0xd4);
                          fVar2 = (pMVar39->bSphere).y - *(float *)(puVar16 + 0x1b);
                          fVar3 = (pMVar39->bSphere).z - *(float *)((int)puVar16 + 0xdc);
                          fVar7 = (float)(dVar59 + (double)(pMVar39->bSphere).rad);
                          *(float *)((int)puVar16 + 0x174) = fVar2;
                          *(float *)(puVar16 + 0x2f) = fVar3;
                          if (fVar1 * fVar1 + fVar2 * fVar2 + fVar3 * fVar3 <= fVar7 * fVar7) {
                            uVar42 = *(uint *)(puVar44 + 2);
                            iVar35 = ((int)uVar42 >> 5) +
                                     (uint)((int)uVar42 < 0 && (uVar42 & 0x1f) != 0);
                            if ((param_4 & 4) == 0) {
                              uVar29 = puVar44[1];
                            }
                            else {
                              uVar29 = *puVar44;
                            }
                            pMVar39->collQueryStamp = iVar38;
                            puVar36 = (undefined *)0x0;
                            uVar42 = *(uint *)(pMVar39->collision + 6);
                            if (uVar29 != 0) {
                              if (uVar42 == ((param_4 & 2) == 0)) goto LAB_0005b94c;
                              uVar37 = 0;
                              do {
                                if (*(int *)(&MobyClassRef + (int)((uVar37 & 0xffffffff) << 3)) ==
                                    pMVar39->field71_0xa8) {
                                  puVar36 = &g_CollMobyJointCache + (int)uVar37 * 0x7fc;
                                  goto LAB_0005b058;
                                }
                                uVar37 = uVar37 + 1;
                              } while ((int)uVar37 < 8);
                              iVar38 = g_CollOutput.padding[2] * 8;
                              uVar32 = g_CollOutput.padding[2] + 1;
                              iVar41 = g_CollOutput.padding[2] * 0x7fc;
                              g_CollOutput.padding[2] =
                                   uVar32 + (((int)uVar32 >> 3) +
                                            (uint)((int)uVar32 < 0 && (uVar32 & 7) != 0)) * -8;
                              puVar36 = &g_CollMobyJointCache + iVar41;
                              *(int *)(&MobyClassRef + iVar38) = pMVar39->field71_0xa8;
                              *(int *)(iVar38 + 0xa109c4) = g_CollOutput.collCount;
                              Moby_BuildJointMatrices(uVar45,uVar29,puVar36);
                            }
LAB_0005b058:
                            fVar7 = (float)((double)(pMVar39->pos).y * dVar54);
                            dVar60 = (double)(pMVar39->transform).v0.x;
                            fVar1 = (float)((double)(pMVar39->pos).z * dVar54);
                            dVar51 = (double)(pMVar39->transform).v0.y;
                            dVar52 = (double)(pMVar39->transform).v0.z;
                            dVar53 = (double)(pMVar39->transform).v1.x;
                            dVar58 = (double)(pMVar39->transform).v1.y;
                            dVar61 = (double)(pMVar39->transform).v1.z;
                            dVar55 = (double)(pMVar39->transform).v2.x;
                            dVar56 = (double)(pMVar39->transform).v2.y;
                            dVar57 = (double)(pMVar39->transform).v2.z;
                            *(float *)(puVar16 + 0x30) = fVar7;
                            *(float *)((int)puVar16 + 0x184) = fVar1;
                            if (uVar42 != 0) {
                              fVar7 = *(float *)(puVar16 + 0x1b) - fVar7;
                              dVar46 = (double)fVar7;
                              uVar40 = uVar22 - 0x1de4;
                              fVar1 = *(float *)((int)puVar16 + 0xdc) - fVar1;
                              dVar47 = (double)fVar1;
                              uVar13 = *(undefined4 *)(puVar16 + 0x4e3);
                              iVar38 = 0x100;
                              *(float *)((int)puVar16 + 0x18c) = fVar7;
                              *(float *)(puVar16 + 0x32) = fVar1;
                              *(float *)(puVar16 + 0x33) = (float)(dVar46 - dVar59);
                              *(float *)((int)puVar16 + 0x19c) = (float)(dVar47 - dVar59);
                              *(float *)((int)puVar16 + 0x1a4) = (float)(dVar46 + dVar59);
                              *(float *)(puVar16 + 0x35) = (float)(dVar47 + dVar59);
                              uVar37 = uVar40;
                              do {
                                iVar38 = iVar38 + -1;
                                puVar25 = (undefined4 *)uVar37;
                                *puVar25 = uVar13;
                                puVar25[1] = uVar13;
                                puVar25[2] = uVar13;
                                uVar37 = uVar37 + 0xc;
                              } while (iVar38 != 0);
                              dVar46 = (double)pMVar39->scale;
                              *(float *)(puVar16 + 0x48) = (float)(dVar51 * dVar46);
                              *(float *)((int)puVar16 + 0x244) = (float)(dVar52 * dVar46);
                              *(float *)((int)puVar16 + 0x24c) = (float)(dVar58 * dVar46);
                              *(float *)(puVar16 + 0x4a) = (float)(dVar61 * dVar46);
                              *(float *)(puVar16 + 0x4b) = (float)(dVar56 * dVar46);
                              *(float *)((int)puVar16 + 0x25c) = (float)(dVar57 * dVar46);
                              *(float *)((int)puVar16 + 0x284) = (float)(dVar51 * dVar46);
                              *(float *)(puVar16 + 0x51) = (float)(dVar52 * dVar46);
                              *(float *)(puVar16 + 0x52) = (float)(dVar58 * dVar46);
                              *(float *)((int)puVar16 + 0x294) = (float)(dVar61 * dVar46);
                              *(float *)((int)puVar16 + 0x29c) = (float)(dVar56 * dVar46);
                              *(float *)(puVar16 + 0x54) = (float)(dVar57 * dVar46);
                              *(undefined4 *)(puVar16 + 7) = *(undefined4 *)((int)puVar16 + 0x194);
                              *(undefined4 *)(puVar16 + 8) = *(undefined4 *)((int)puVar16 + 0x19c);
                              *(undefined4 *)(puVar16 + 9) = *(undefined4 *)(puVar16 + 0x34);
                              *(undefined4 *)(puVar16 + 10) = *(undefined4 *)(puVar16 + 0x35);
                              *(undefined4 *)(puVar16 + 0xb) = *(undefined4 *)(puVar16 + 0x50);
                              *(undefined4 *)(puVar16 + 0xc) = *(undefined4 *)(puVar16 + 0x51);
                              *(undefined4 *)(puVar16 + 0xd) = *(undefined4 *)(puVar16 + 0x52);
                              *(undefined4 *)((int)puVar16 + 0x3c) = *(undefined4 *)(puVar16 + 0x33)
                              ;
                              *(undefined4 *)((int)puVar16 + 0x4c) =
                                   *(undefined4 *)((int)puVar16 + 0x1a4);
                              *(undefined4 *)((int)puVar16 + 0x5c) =
                                   *(undefined4 *)((int)puVar16 + 0x284);
                              *(undefined4 *)((int)puVar16 + 100) =
                                   *(undefined4 *)((int)puVar16 + 0x28c);
                              *(undefined4 *)((int)puVar16 + 0x6c) =
                                   *(undefined4 *)((int)puVar16 + 0x294);
                              *(undefined4 *)(puVar16 + 0xe) = *(undefined4 *)(puVar16 + 0x53);
                              *(undefined4 *)((int)puVar16 + 0x74) =
                                   *(undefined4 *)((int)puVar16 + 0x29c);
                              *(undefined4 *)(puVar16 + 0xf) = *(undefined4 *)(puVar16 + 0x54);
                              puVar16[0x10] = uVar40;
                              puVar16[0x11] = uVar22 - 0x21e4;
                              puVar16[0x12] = uVar22 - 0x2828;
                              puVar16[0x13] = uVar22 - 0x2824;
                              CollMoby_TransformVerts
                                        (uVar45,puVar16[7],puVar16[8],puVar16[9],puVar16[10],
                                         puVar16[0xb],puVar16[0xc],puVar16[0xd]);
                              iVar38 = 0;
                              if (0 < *(int *)((int)puVar16 + 0xac)) {
                                iVar41 = 0;
                                do {
                                  *(undefined4 *)(puVar16 + 0xb) =
                                       *(undefined4 *)((int)puVar16 + 0x17c);
                                  *(undefined4 *)(puVar16 + 0xc) =
                                       *(undefined4 *)((int)puVar16 + 0x184);
                                  *(undefined4 *)((int)puVar16 + 0x5c) =
                                       *(undefined4 *)(puVar16 + 0x30);
                                  *(undefined4 *)(puVar16 + 0xe) = *(undefined4 *)(puVar16 + 0x31);
                                  *(undefined4 *)((int)puVar16 + 0x74) =
                                       *(undefined4 *)((int)puVar16 + 0x18c);
                                  *(undefined4 *)(puVar16 + 0xf) = *(undefined4 *)(puVar16 + 0x32);
                                  puVar16[0x10] = uVar45;
                                  CollSphereVsTri(*(int *)(puVar16 + 0x15) + iVar41,uVar40,
                                                  uVar22 - 0x21e4,uVar22 - 0x262c,uVar42,
                                                  puVar16[0xb],puVar16[0xc],param_4);
                                  iVar38 = iVar38 + 1;
                                  iVar41 = iVar41 + 4;
                                } while (iVar38 < *(int *)((int)puVar16 + 0xac));
                              }
                            }
                            if ((param_4 & 2) == 0) {
                              puVar44 = pMVar39->collision + 8;
                              iVar38 = 0;
                              pfVar43 = pMVar39->collisionMesh;
                              if (0 < iVar35) {
                                do {
                                  uVar42 = (uint)pfVar43 & 1;
                                  pfVar43 = (float *)((int)pfVar43 >> 1);
                                  bVar5 = *(byte *)puVar44;
                                  if ((uVar42 == 0) &&
                                     (((int)(short)puVar44[1] & ((param_4 & 4) == 0) + 1) != 0)) {
                                    if (bVar5 < 2) {
                                      if (bVar5 == 0) {
LAB_0005b6f4:
                                        fVar7 = pMVar39->scale;
                                        pfVar28 = (float *)(puVar36 +
                                                           (int)((longlong)(short)puVar44[2] << 4));
                                        pfVar31 = (float *)(puVar36 +
                                                           (int)((longlong)(short)puVar44[3] << 4));
                                        dVar59 = (double)((float)((double)*pfVar28 * dVar54) * fVar7
                                                         );
                                        dVar46 = (double)((float)((double)pfVar28[1] * dVar54) *
                                                         fVar7);
                                        dVar47 = (double)((float)((double)*pfVar31 * dVar54) * fVar7
                                                         );
                                        dVar48 = (double)((float)((double)pfVar31[1] * dVar54) *
                                                         fVar7);
                                        dVar49 = (double)((float)((double)pfVar28[2] * dVar54) *
                                                         fVar7);
                                        dVar50 = (double)((float)((double)pfVar31[2] * dVar54) *
                                                         fVar7);
                                        fVar1 = *(float *)(puVar44 + 6);
                                        fVar3 = (float)(dVar51 * dVar59) + (float)(dVar58 * dVar46)
                                                + (float)(dVar56 * dVar49);
                                        fVar4 = (float)(dVar52 * dVar59) + (float)(dVar61 * dVar46)
                                                + (float)(dVar57 * dVar49);
                                        fVar2 = (float)(dVar51 * dVar47) + (float)(dVar58 * dVar48)
                                                + (float)(dVar56 * dVar50);
                                        *(float *)((int)puVar16 + 0x21c) = fVar3;
                                        fVar9 = (float)(dVar52 * dVar47) + (float)(dVar61 * dVar48)
                                                + (float)(dVar57 * dVar50);
                                        *(float *)(puVar16 + 0x44) = fVar4;
                                        *(float *)(puVar16 + 0x45) = fVar2;
                                        *(float *)((int)puVar16 + 0x22c) = fVar9;
                                        fVar8 = (float)(dVar60 * dVar59) + (float)(dVar53 * dVar46)
                                                + (float)(dVar55 * dVar49) +
                                                *(float *)((int)puVar16 + 0x17c);
                                        fVar3 = fVar3 + *(float *)(puVar16 + 0x30);
                                        fVar4 = fVar4 + *(float *)((int)puVar16 + 0x184);
                                        fVar17 = ((float)(dVar60 * dVar47) +
                                                  (float)(dVar53 * dVar48) +
                                                  (float)(dVar55 * dVar50) +
                                                 *(float *)((int)puVar16 + 0x17c)) - fVar8;
                                        fVar18 = (fVar2 + *(float *)(puVar16 + 0x30)) - fVar3;
                                        fVar20 = (fVar9 + *(float *)((int)puVar16 + 0x184)) - fVar4;
                                        *(float *)(puVar16 + 0x3f) = fVar18;
                                        *(float *)((int)puVar16 + 0x1fc) = fVar20;
                                        fVar9 = *(float *)(puVar16 + 0x1b) - fVar3;
                                        fVar21 = *(float *)((int)puVar16 + 0xdc) - fVar4;
                                        fVar2 = ((*(float *)((int)puVar16 + 0xd4) - fVar8) * fVar17
                                                 + fVar9 * fVar18 + fVar21 * fVar20) /
                                                (fVar17 * fVar17 + fVar18 * fVar18 + fVar20 * fVar20
                                                );
                                        *(float *)((int)puVar16 + 0x204) = fVar9;
                                        *(float *)(puVar16 + 0x41) = fVar21;
                                        if (fVar2 <= *(float *)(puVar16 + 0x4e3)) {
                                          fVar2 = *(float *)(puVar16 + 0x4e3);
                                        }
                                        if (*(float *)(puVar16 + 0x4e4) <= fVar2) {
                                          fVar2 = *(float *)(puVar16 + 0x4e4);
                                        }
                                        *(float *)(puVar16 + 6) = *(float *)((int)puVar16 + 0xd4);
                                        *(float *)(puVar16 + 7) = *(float *)((int)puVar16 + 0xdc);
                                        fVar4 = fVar4 + fVar20 * fVar2;
                                        fVar3 = fVar3 + fVar18 * fVar2;
                                        *(float *)((int)puVar16 + 0x234) = fVar18 * fVar2;
                                        *(float *)(puVar16 + 0x47) = fVar20 * fVar2;
                                        *(float *)(puVar16 + 8) = fVar8 + fVar17 * fVar2;
                                        *(float *)(puVar16 + 9) = fVar4;
                                        *(float *)(puVar16 + 0x42) = fVar3;
                                        *(float *)((int)puVar16 + 0x214) = fVar4;
                                        *(float *)((int)puVar16 + 0x34) = *(float *)(puVar16 + 0x1b)
                                        ;
                                        *(float *)((int)puVar16 + 0x44) = fVar3;
                                        puVar16[0xe] = uVar45;
                                        CollSphereVsSphere((double)*(float *)((int)puVar16 + 0x271c)
                                                           ,(double)(fVar1 * fVar7),puVar16[6],
                                                           puVar16[7],puVar16[8],puVar16[9]);
                                      }
                                      else {
                                        fVar7 = *(float *)(puVar44 + 8);
                                        fVar1 = *(float *)(puVar44 + 10);
                                        fVar2 = *(float *)(puVar44 + 0xc);
                                        fVar3 = *(float *)(puVar44 + 0xe);
                                        *(float *)((int)puVar16 + 0x264) = fVar1;
                                        *(float *)(puVar16 + 0x4d) = fVar2;
                                        *(float *)((int)puVar16 + 0x26c) = fVar3;
                                        *(float *)(puVar16 + 0x36) = fVar1;
                                        *(float *)((int)puVar16 + 0x1b4) = fVar2;
                                        fVar4 = pMVar39->scale;
                                        dVar46 = (double)(fVar7 * fVar4);
                                        dVar47 = (double)(fVar1 * fVar4);
                                        dVar48 = (double)(fVar2 * fVar4);
                                        fVar1 = (float)(dVar51 * dVar46) + (float)(dVar58 * dVar47)
                                                + (float)(dVar56 * dVar48);
                                        fVar7 = (float)(dVar52 * dVar46) + (float)(dVar61 * dVar47)
                                                + (float)(dVar57 * dVar48);
                                        *(float *)((int)puVar16 + 0x1bc) = fVar1;
                                        *(float *)(puVar16 + 0x38) = fVar7;
                                        *(undefined4 *)(puVar16 + 6) =
                                             *(undefined4 *)((int)puVar16 + 0xd4);
                                        *(undefined4 *)(puVar16 + 7) =
                                             *(undefined4 *)((int)puVar16 + 0xdc);
                                        *(undefined4 *)((int)puVar16 + 0x34) =
                                             *(undefined4 *)(puVar16 + 0x1b);
                                        *(float *)(puVar16 + 8) =
                                             (float)(dVar60 * dVar46) + (float)(dVar53 * dVar47) +
                                             (float)(dVar55 * dVar48) +
                                             *(float *)((int)puVar16 + 0x17c);
                                        *(float *)(puVar16 + 9) =
                                             fVar7 + *(float *)((int)puVar16 + 0x184);
                                        puVar16[0xe] = uVar45;
                                        *(float *)((int)puVar16 + 0x44) =
                                             fVar1 + *(float *)(puVar16 + 0x30);
                                        CollSphereVsSphere(dVar59,(double)(fVar3 * fVar4),puVar16[6]
                                                           ,puVar16[7],puVar16[8],puVar16[9]);
                                      }
                                    }
                                    else if (bVar5 < 3) {
                                      fVar7 = *(float *)(puVar44 + 6);
                                      fVar1 = *(float *)(puVar44 + 8);
                                      pfVar28 = (float *)(puVar36 + *(int *)(puVar44 + 2) * 0x10);
                                      fVar2 = *(float *)(puVar44 + 10);
                                      fVar3 = *(float *)(puVar44 + 0xc);
                                      *(float *)(puVar16 + 0x39) = fVar2;
                                      *(float *)((int)puVar16 + 0x1cc) = fVar3;
                                      fVar4 = pMVar39->scale;
                                      dVar46 = (double)(((float)((double)*pfVar28 * dVar54) + fVar1)
                                                       * fVar4);
                                      dVar47 = (double)(((float)((double)pfVar28[1] * dVar54) +
                                                        fVar2) * fVar4);
                                      dVar48 = (double)(((float)((double)pfVar28[2] * dVar54) +
                                                        fVar3) * fVar4);
                                      fVar2 = (float)(dVar51 * dVar46) + (float)(dVar58 * dVar47) +
                                              (float)(dVar56 * dVar48);
                                      fVar1 = (float)(dVar52 * dVar46) + (float)(dVar61 * dVar47) +
                                              (float)(dVar57 * dVar48);
                                      *(float *)((int)puVar16 + 0x1d4) = fVar2;
                                      *(float *)(puVar16 + 0x3b) = fVar1;
                                      *(undefined4 *)(puVar16 + 6) =
                                           *(undefined4 *)((int)puVar16 + 0xd4);
                                      *(undefined4 *)(puVar16 + 7) =
                                           *(undefined4 *)((int)puVar16 + 0xdc);
                                      *(undefined4 *)((int)puVar16 + 0x34) =
                                           *(undefined4 *)(puVar16 + 0x1b);
                                      *(float *)(puVar16 + 8) =
                                           (float)(dVar60 * dVar46) + (float)(dVar53 * dVar47) +
                                           (float)(dVar55 * dVar48) +
                                           *(float *)((int)puVar16 + 0x17c);
                                      *(float *)(puVar16 + 9) =
                                           fVar1 + *(float *)((int)puVar16 + 0x184);
                                      puVar16[0xe] = uVar45;
                                      *(float *)((int)puVar16 + 0x44) =
                                           fVar2 + *(float *)(puVar16 + 0x30);
                                      CollSphereVsSphere(dVar59,(double)(fVar7 * fVar4),puVar16[6],
                                                         puVar16[7],puVar16[8],puVar16[9]);
                                    }
                                    else {
                                      if (3 < bVar5) goto LAB_0005b6f4;
                                      fVar7 = *(float *)(puVar44 + 2);
                                      fVar1 = *(float *)(puVar44 + 8);
                                      fVar2 = *(float *)(puVar44 + 10);
                                      fVar3 = *(float *)(puVar44 + 0xc);
                                      fVar4 = *(float *)(puVar44 + 0xe);
                                      *(float *)((int)puVar16 + 0x274) = fVar2;
                                      *(float *)(puVar16 + 0x4f) = fVar3;
                                      *(float *)((int)puVar16 + 0x27c) = fVar4;
                                      *(float *)(puVar16 + 0x3c) = fVar2;
                                      *(float *)((int)puVar16 + 0x1e4) = fVar3;
                                      fVar8 = pMVar39->scale;
                                      dVar46 = (double)(fVar1 * fVar8);
                                      dVar47 = (double)(fVar2 * fVar8);
                                      dVar48 = (double)(fVar3 * fVar8);
                                      fVar3 = (float)(dVar51 * dVar46) + (float)(dVar58 * dVar47) +
                                              (float)(dVar56 * dVar48);
                                      fVar1 = (float)(dVar52 * dVar46) + (float)(dVar61 * dVar47) +
                                              (float)(dVar57 * dVar48);
                                      *(float *)((int)puVar16 + 0x1ec) = fVar3;
                                      *(float *)(puVar16 + 0x3e) = fVar1;
                                      fVar1 = fVar1 + *(float *)((int)puVar16 + 0x184);
                                      fVar2 = fVar1;
                                      if (fVar1 < *(float *)((int)puVar16 + 0xdc)) {
                                        fVar2 = *(float *)((int)puVar16 + 0xdc);
                                      }
                                      fVar1 = fVar1 + fVar7 * fVar8;
                                      if (fVar1 < fVar2) {
                                        fVar2 = fVar1;
                                      }
                                      *(undefined4 *)(puVar16 + 6) =
                                           *(undefined4 *)((int)puVar16 + 0xd4);
                                      *(undefined4 *)(puVar16 + 7) =
                                           *(undefined4 *)((int)puVar16 + 0xdc);
                                      *(float *)(puVar16 + 8) =
                                           (float)(dVar60 * dVar46) + (float)(dVar53 * dVar47) +
                                           (float)(dVar55 * dVar48) +
                                           *(float *)((int)puVar16 + 0x17c);
                                      *(float *)(puVar16 + 9) = fVar2;
                                      *(float *)((int)puVar16 + 0x44) =
                                           fVar3 + *(float *)(puVar16 + 0x30);
                                      *(undefined4 *)((int)puVar16 + 0x34) =
                                           *(undefined4 *)(puVar16 + 0x1b);
                                      puVar16[0xe] = uVar45;
                                      CollSphereVsSphere(dVar59,(double)(fVar4 * fVar8),puVar16[6],
                                                         puVar16[7],puVar16[8],puVar16[9]);
                                    }
                                    dVar59 = (double)*(float *)((int)puVar16 + 0x271c);
                                  }
                                  iVar38 = iVar38 + 1;
                                  puVar44 = puVar44 + 0x10;
                                } while (iVar38 < iVar35);
                              }
                            }
                          }
                        }
LAB_0005b94c:
                        iVar24 = iVar24 + 1;
                        iVar34 = iVar34 + 2;
                      } while (iVar24 < (int)(uint)*(byte *)((int)puVar16[0x4e5] + 2));
                    }
                    uVar45 = puVar16[0x4e9];
                    puVar16[0x4ea] = puVar16[0x4ea] + 4;
                    puVar16[0x4e9] = uVar45 + 1;
                  } while ((int)(uVar45 + 1) < (int)puVar16[0x4ec]);
                }
                uVar45 = puVar16[0x4eb];
                puVar16[0x4eb] = uVar45 + 1;
              } while ((int)(uVar45 + 1) < (int)puVar16[0x4ee]);
            }
            iVar24 = *(int *)((int)puVar16 + 0x2a4);
            if (iVar24 != 0) {
              fVar7 = *(float *)(puVar16 + 0x56);
              fVar1 = *(float *)((int)puVar16 + 0x2b4);
              fVar2 = *(float *)(puVar16 + 0x57);
              g_CollOutput.ip.z = fVar2 * 0.0009765625;
              g_CollOutput.ip.x = fVar7 * 0.0009765625;
              g_CollOutput.v0.x = *(float *)(puVar16 + 0x59) * 0.0009765625;
              g_CollOutput.v0.z = *(float *)(puVar16 + 0x5a) * 0.0009765625;
              g_CollOutput.ip.y = fVar1 * 0.0009765625;
              g_CollOutput.v0.y = *(float *)((int)puVar16 + 0x2cc) * 0.0009765625;
              g_CollOutput.v1.x = *(float *)((int)puVar16 + 0x2d4) * 0.0009765625;
              g_CollOutput.v2.y = *(float *)((int)puVar16 + 0x2e4) * 0.0009765625;
              g_CollOutput.v1.y = *(float *)(puVar16 + 0x5b) * 0.0009765625;
              g_CollOutput.v1.z = *(float *)((int)puVar16 + 0x2dc) * 0.0009765625;
              g_CollOutput.v2.x = *(float *)(puVar16 + 0x5c) * 0.0009765625;
              *(float *)(puVar16 + 0x56) = g_CollOutput.ip.x;
              g_CollOutput.v2.z = *(float *)(puVar16 + 0x5d) * 0.0009765625;
              *(float *)(puVar16 + 0x57) = g_CollOutput.ip.z;
              *(float *)((int)puVar16 + 0x2b4) = g_CollOutput.ip.y;
              g_CollOutput.normal.x = *(float *)((int)puVar16 + 700);
              dVar59 = (double)g_CollOutput.normal.x;
              g_CollOutput.normal.y = *(float *)(puVar16 + 0x58);
              dVar60 = (double)g_CollOutput.normal.y;
              g_CollOutput.normal.z = *(float *)((int)puVar16 + 0x2c4);
              dVar51 = (double)g_CollOutput.normal.z;
              g_CollOutput.pMoby = *(MobyInstance **)(puVar16 + 0x55);
              g_CollOutput.poly = iVar24;
              if ((double)*(float *)((int)puVar16 + 0x2ac) == (double)*(float *)(puVar16 + 0x4e3)) {
                dVar52 = (double)SQRT((float)(dVar59 * dVar59) + (float)(dVar60 * dVar60) +
                                      (float)(dVar51 * dVar51));
                if (dVar52 != (double)*(float *)(puVar16 + 0x4e3)) {
                  dVar59 = (double)(float)(dVar59 / dVar52);
                  dVar60 = (double)(float)(dVar60 / dVar52);
                  dVar51 = (double)(float)(dVar51 / dVar52);
                }
                dVar52 = (double)puVar16[0x4e2];
                *(float *)(puVar16 + 0x1f) = (float)(dVar52 * dVar59);
                *(float *)((int)puVar16 + 0xfc) = (float)(dVar52 * dVar60);
                *(float *)(puVar16 + 0x20) = (float)(dVar52 * dVar51);
              }
              else {
                fVar3 = *(float *)((int)puVar16 + 0x271c) /
                        (float)SQRT((double)*(float *)((int)puVar16 + 0x2ac));
                *(float *)(puVar16 + 0x1f) =
                     (*(float *)((int)puVar16 + 0xd4) - fVar7) * fVar3 * 0.0009765625;
                *(float *)((int)puVar16 + 0xfc) =
                     (*(float *)(puVar16 + 0x1b) - fVar1) * fVar3 * 0.0009765625;
                *(float *)(puVar16 + 0x20) =
                     (*(float *)((int)puVar16 + 0xdc) - fVar2) * fVar3 * 0.0009765625;
              }
              g_CollOutput.push.x = *(float *)(puVar16 + 0x1f) + *(float *)(puVar16 + 0x56);
              g_CollOutput.push.y = *(float *)((int)puVar16 + 0xfc) + *(float *)((int)puVar16 + 0x2b4)
              ;
              g_CollOutput.push.z = *(float *)(puVar16 + 0x20) + *(float *)(puVar16 + 0x57);
              return 1;
            }
          }
        }
        return 0;
      }
    }
  }
  FUN_004ff98c(
              "CollSphere: Cannot have NaN, this will blow out stack on CollLine as the line goes on forever."
              );
  return 0;
}


// 0x005bc20 (0x19c bytes)
void CollPillVsSphere
               (double param_1,double param_2,double param_3,undefined8 param_4,undefined8 param_5,
               undefined8 param_6,undefined8 param_7,undefined8 param_8,undefined8 param_9,
               int *param_10,int param_11)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  double dVar6;
  float fStack00000030;
  float fStack00000034;
  float fStack00000040;
  float fStack00000044;
  int in_stack_00000074;
  
  fVar1 = (float)((ulonglong)param_5 >> 0x20);
  fVar5 = (float)((ulonglong)param_7 >> 0x20);
  dVar6 = (double)(fVar5 - fVar1);
  fStack00000034 = (float)param_4;
  fStack00000030 = (float)((ulonglong)param_4 >> 0x20);
  if (dVar6 < param_3) {
    param_3 = dVar6;
  }
  if (param_3 <= 0.0) {
    param_3 = 0.0;
  }
  fStack00000040 = (float)((ulonglong)param_6 >> 0x20);
  fStack00000044 = (float)param_6;
  fStack00000030 = fStack00000030 + 0.0;
  fStack00000034 = fStack00000034 + 0.0;
  fVar1 = (float)(param_3 + (double)fVar1);
  fVar4 = (fStack00000040 - fStack00000030) * (fStack00000040 - fStack00000030) +
          (fStack00000044 - fStack00000034) * (fStack00000044 - fStack00000034) +
          (fVar5 - fVar1) * (fVar5 - fVar1);
  if (fVar4 <= (float)(param_1 + param_2) * (float)(param_1 + param_2)) {
    fVar4 = SQRT(fVar4);
    dVar6 = (double)(fVar4 * 0.9995);
    if (dVar6 <= param_2) {
      param_2 = dVar6;
    }
    fVar4 = 1.0 / fVar4;
    fVar2 = (float)((double)((fStack00000030 - fStack00000040) * fVar4) * param_2);
    fVar3 = (float)((double)((fStack00000034 - fStack00000044) * fVar4) * param_2);
    fVar4 = (float)((double)((fVar1 - fVar5) * fVar4) * param_2);
    fStack00000040 = fStack00000040 + fVar2;
    fStack00000044 = fStack00000044 + fVar3;
    fVar5 = fVar5 + fVar4;
    fStack00000030 = fStack00000040 - fStack00000030;
    fStack00000034 = fStack00000044 - fStack00000034;
    fVar1 = fVar5 - fVar1;
    fVar1 = fStack00000030 * fStack00000030 + fStack00000034 * fStack00000034 + fVar1 * fVar1;
    if (fVar1 <= (float)param_10[2]) {
      param_10[2] = (int)fVar1;
      param_10[1] = in_stack_00000074;
      param_10[3] = (int)fStack00000040;
      param_10[4] = (int)fStack00000044;
      param_10[5] = (int)fVar5;
      *param_10 = -param_11;
      param_10[6] = (int)fVar2;
      param_10[7] = (int)fVar3;
      param_10[8] = (int)fVar4;
    }
  }
  return;
}


// 0x005bdbc (0x2c bytes)
void CollMobyVertCache_Reset(void)

{
  int iVar1;
  int iVar2;
  
  iVar1 = 8;
  iVar2 = 0;
  do {
    iVar1 = iVar1 + -1;
    *(undefined4 *)((int)g_CollMobyVertCache[0].mtx + iVar2 + -4) = 0;
    iVar2 = iVar2 + 0xc28;
  } while (iVar1 != 0);
  return;
}


// 0x005bdf8 (0x8f4 bytes)
/* WARNING: Restarted to delay deadcode elimination for space: stack */

void CollPillVsTri
               (double param_1,byte *param_2,int param_3,int param_4,int *param_5,undefined8 param_6
               ,undefined8 param_7,undefined8 param_8,uint param_9)

{
  float fVar1;
  float fVar2;
  byte bVar3;
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
  float fVar16;
  float *pfVar17;
  float *pfVar18;
  float *pfVar19;
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
  double dVar30;
  double dVar31;
  double dVar32;
  double dVar33;
  double dVar34;
  double dVar35;
  double dVar36;
  double dVar37;
  double dVar38;
  float fStack00000058;
  float fStack0000005c;
  float in_stack_00000070;
  float in_stack_00000074;
  float in_stack_00000078;
  int in_stack_0000008c;
  float local_f8;
  float local_f4;
  float local_f0;
  
  pfVar19 = (float *)(param_3 + (uint)*param_2 * 0xc);
  pfVar18 = (float *)(param_3 + (uint)param_2[1] * 0xc);
  fVar4 = *pfVar19;
  fVar5 = pfVar19[1];
  pfVar17 = (float *)(param_3 + (uint)param_2[2] * 0xc);
  fVar6 = pfVar19[2];
  bVar3 = param_2[3];
  if ((*(uint *)(param_4 + (uint)*param_2 * 4) & *(uint *)(param_4 + (uint)param_2[1] * 4) &
      *(uint *)(param_4 + (uint)param_2[2] * 4)) != 0) {
    return;
  }
  if ((bVar3 & 0x80 & param_9) != 0) {
    return;
  }
  if ((param_9 & 0x20) != 0 && ((param_9 >> 8 ^ (uint)bVar3) & 0x1f) == 0) {
    return;
  }
  fVar7 = *pfVar18 - fVar4;
  dVar31 = (double)fVar7;
  fVar9 = pfVar18[1] - fVar5;
  dVar30 = (double)fVar9;
  fVar11 = pfVar18[2] - fVar6;
  dVar23 = (double)fVar11;
  fVar10 = pfVar17[1] - fVar5;
  dVar32 = (double)fVar10;
  fVar12 = pfVar17[2] - fVar6;
  dVar25 = (double)fVar12;
  fVar8 = *pfVar17 - fVar4;
  dVar33 = (double)fVar8;
  dVar20 = (double)(in_stack_00000070 - fVar4);
  dVar34 = (double)(in_stack_00000074 - fVar5);
  dVar29 = (double)(in_stack_00000078 - fVar6);
  dVar38 = (double)(float)(dVar29 + param_1);
  dVar35 = 0.0;
  fVar13 = (float)(dVar32 * dVar23) - (float)(dVar25 * dVar30);
  dVar22 = (double)fVar13;
  fVar14 = (float)(dVar25 * dVar31) - (float)(dVar33 * dVar23);
  dVar21 = (double)fVar14;
  fVar15 = (float)(dVar33 * dVar30) - (float)(dVar32 * dVar31);
  dVar27 = (double)fVar15;
  fVar1 = (float)(dVar20 * dVar22) + (float)(dVar34 * dVar21) + (float)(dVar29 * dVar27);
  fVar2 = (float)((double)(float)(dVar20 + 0.0) * dVar22) +
          (float)((double)(float)(dVar34 + 0.0) * dVar21) + (float)(dVar38 * dVar27);
  if ((param_9 & 0x10) == 0) {
    if (fVar1 < 0.0) {
      return;
    }
    if (fVar2 < 0.0) {
      return;
    }
  }
  if (9.999999747378752e-05 <= ABS(dVar27)) {
    if ((float)(param_1 * dVar27) == 0.0) {
      return;
    }
    if (((0.0 <= (float)(dVar29 - dVar25)) && (0.0 <= (float)(dVar29 - dVar23))) && (0.0 <= dVar29))
    {
      fVar2 = (float)(dVar22 * dVar22) + (float)(dVar21 * dVar21) + (float)(dVar27 * dVar27);
      dVar35 = (double)(fVar1 / fVar2);
      if (fVar2 == 0.0) {
        return;
      }
      dVar25 = (double)(float)(dVar21 * dVar35);
      dVar22 = (double)(float)(dVar22 * dVar35);
      dVar21 = (double)(float)(dVar27 * dVar35);
      goto LAB_0005c380;
    }
    if (((dVar38 < 0.0) && ((float)(dVar38 - dVar23) < 0.0)) && ((float)(dVar38 - dVar25) < 0.0)) {
      fVar1 = (float)(dVar22 * dVar22) + (float)(dVar21 * dVar21) + (float)(dVar27 * dVar27);
      dVar29 = (double)(fVar2 / fVar1);
      if (fVar1 == 0.0) {
        return;
      }
      dVar25 = (double)(float)(dVar21 * dVar29);
      dVar22 = (double)(float)(dVar22 * dVar29);
      dVar21 = (double)(float)(dVar27 * dVar29);
      dVar20 = (double)(float)(dVar20 + 0.0);
      dVar34 = (double)(float)(dVar34 + 0.0);
      dVar29 = dVar38;
      goto LAB_0005c380;
    }
    dVar38 = dVar25 - dVar23;
    dVar35 = (double)(float)(dVar29 - (double)(float)((double)(fVar1 / (float)(param_1 * dVar27)) *
                                                     param_1));
    if (0.0 <= (float)((double)((float)(dVar34 * dVar23) - (float)(dVar35 * dVar30)) * dVar22) +
               (float)((double)((float)(dVar35 * dVar31) - (float)(dVar20 * dVar23)) * dVar21) +
               (float)((double)((float)(dVar20 * dVar30) - (float)(dVar34 * dVar31)) * dVar27)) {
      dVar29 = 0.0;
      dVar36 = dVar32;
      dVar37 = dVar33;
      dVar24 = dVar29;
      dVar26 = dVar29;
      if ((0.0 <= (float)((double)((float)(dVar32 * dVar35) - (float)(dVar25 * dVar34)) * dVar22) +
                  (float)((double)((float)(dVar25 * dVar20) - (float)(dVar33 * dVar35)) * dVar21) +
                  (float)((double)((float)(dVar33 * dVar34) - (float)(dVar32 * dVar20)) * dVar27))
         && (dVar29 = dVar25, dVar36 = dVar30, dVar37 = dVar31, dVar24 = dVar32, dVar26 = dVar33,
            dVar25 = dVar23,
            0.0 <= (float)((double)((float)(dVar34 - dVar30) * (float)dVar38 -
                                   (float)(dVar35 - dVar23) * (float)(dVar32 - dVar30)) * dVar22) +
                   (float)((double)((float)(dVar35 - dVar23) * (float)(dVar33 - dVar31) -
                                   (float)(dVar20 - dVar31) * (float)dVar38) * dVar21) +
                   (float)((double)((float)(dVar20 - dVar31) * (float)(dVar32 - dVar30) -
                                   (float)(dVar34 - dVar30) * (float)(dVar33 - dVar31)) * dVar27)))
      goto LAB_0005c28c;
    }
    else {
      dVar36 = 0.0;
      dVar29 = dVar23;
      dVar37 = dVar36;
      dVar24 = dVar30;
      dVar26 = dVar31;
      dVar25 = dVar36;
    }
    fVar1 = (float)(dVar26 - dVar37);
    fVar2 = (float)(dVar24 - dVar36);
    dVar29 = (double)(float)(dVar29 - dVar25);
    fVar16 = fVar1 * fVar1 + fVar2 * fVar2 + (float)(dVar29 * dVar29);
    dVar20 = (double)(((float)(dVar20 - dVar37) * fVar1 + (float)(dVar34 - dVar36) * fVar2 +
                      (float)((double)(float)(dVar35 - dVar25) * dVar29)) / fVar16);
    if (fVar16 == 0.0) {
      return;
    }
    if (dVar20 <= 0.0) {
      dVar20 = 0.0;
    }
    if (1.0 <= dVar20) {
      dVar20 = 1.0;
    }
    dVar35 = (double)(float)((double)(float)(dVar20 * dVar29) + dVar25);
  }
LAB_0005c28c:
  dVar34 = (double)(in_stack_00000078 - fVar6);
  dVar20 = (double)(float)(dVar35 - dVar34);
  if (dVar20 < param_1) {
    param_1 = dVar20;
  }
  if (param_1 <= 0.0) {
    param_1 = 0.0;
  }
  dVar22 = (double)fVar13;
  dVar29 = (double)(float)(param_1 + dVar34);
  dVar25 = (double)fVar14;
  dVar21 = (double)fVar15;
  dVar20 = (double)(in_stack_00000070 - fVar4);
  dVar34 = (double)(in_stack_00000074 - fVar5);
  fVar1 = (float)(dVar22 * dVar22) + (float)(dVar25 * dVar25) + (float)(dVar21 * dVar21);
  dVar35 = (double)(((float)(dVar20 * dVar22) + (float)(dVar34 * dVar25) + (float)(dVar29 * dVar21))
                   / fVar1);
  if (fVar1 == 0.0) {
    return;
  }
  dVar22 = (double)(float)(dVar22 * dVar35);
  dVar25 = (double)(float)(dVar25 * dVar35);
  dVar21 = (double)(float)(dVar21 * dVar35);
LAB_0005c380:
  dVar33 = 0.0;
  local_f8 = (float)(dVar20 - dVar22);
  dVar38 = (double)local_f8;
  local_f4 = (float)(dVar34 - dVar25);
  dVar36 = (double)local_f4;
  local_f0 = (float)(dVar29 - dVar21);
  dVar37 = (double)local_f0;
  dVar27 = (double)fVar7;
  dVar23 = (double)fVar9;
  dVar35 = (double)fVar11;
  dVar31 = (double)fVar8;
  dVar30 = (double)fVar10;
  dVar32 = (double)fVar12;
  fVar1 = (float)(dVar22 * dVar22) + (float)(dVar25 * dVar25) + (float)(dVar21 * dVar21);
  if (fVar1 <= (float)param_5[2]) {
    dVar25 = dVar33;
    dVar21 = dVar33;
    dVar22 = dVar33;
    dVar24 = dVar35;
    dVar26 = dVar23;
    dVar28 = dVar27;
    if (((((float)(dVar36 * dVar35) - (float)(dVar37 * dVar23)) * fVar13 +
          ((float)(dVar37 * dVar27) - (float)(dVar38 * dVar35)) * fVar14 +
          ((float)(dVar38 * dVar23) - (float)(dVar36 * dVar27)) * fVar15 < 0.0) ||
        (dVar25 = dVar32, dVar21 = dVar30, dVar22 = dVar31, dVar24 = dVar33, dVar26 = dVar33,
        dVar28 = dVar33,
        ((float)(dVar30 * dVar37) - (float)(dVar32 * dVar36)) * fVar13 +
        ((float)(dVar32 * dVar38) - (float)(dVar31 * dVar37)) * fVar14 +
        ((float)(dVar31 * dVar36) - (float)(dVar30 * dVar38)) * fVar15 < 0.0)) ||
       (dVar25 = dVar35, dVar21 = dVar23, dVar22 = dVar27, dVar24 = dVar32, dVar26 = dVar30,
       dVar28 = dVar31,
       ((float)(dVar36 - dVar23) * (float)(dVar32 - dVar35) -
       (float)(dVar37 - dVar35) * (float)(dVar30 - dVar23)) * fVar13 +
       ((float)(dVar37 - dVar35) * (float)(dVar31 - dVar27) -
       (float)(dVar38 - dVar27) * (float)(dVar32 - dVar35)) * fVar14 +
       ((float)(dVar38 - dVar27) * (float)(dVar30 - dVar23) -
       (float)(dVar36 - dVar23) * (float)(dVar31 - dVar27)) * fVar15 < 0.0)) {
      dVar30 = (double)(float)(dVar28 - dVar22);
      dVar23 = (double)(float)(dVar26 - dVar21);
      dVar27 = (double)(float)(dVar24 - dVar25);
      dVar35 = (double)(((float)((double)(float)(dVar38 - dVar22) * dVar30) +
                         (float)((double)(float)(dVar36 - dVar21) * dVar23) +
                        (float)((double)(float)(dVar37 - dVar25) * dVar27)) /
                       ((float)(dVar30 * dVar30) + (float)(dVar23 * dVar23) +
                       (float)(dVar27 * dVar27)));
      if (dVar35 <= 0.0) {
        dVar35 = dVar33;
      }
      if (1.0 <= dVar35) {
        dVar35 = 1.0;
      }
      local_f8 = (float)((double)(float)(dVar35 * dVar30) + dVar22);
      local_f4 = (float)((double)(float)(dVar35 * dVar23) + dVar21);
      local_f0 = (float)((double)(float)(dVar35 * dVar27) + dVar25);
      fVar1 = (float)((double)local_f8 - dVar20) * (float)((double)local_f8 - dVar20) +
              (float)((double)local_f4 - dVar34) * (float)((double)local_f4 - dVar34) +
              (float)((double)local_f0 - dVar29) * (float)((double)local_f0 - dVar29);
      if ((float)param_5[2] < fVar1) {
        return;
      }
    }
    fStack0000005c = (float)param_7;
    fStack00000058 = (float)((ulonglong)param_7 >> 0x20);
    fVar4 = fVar4 + fStack00000058;
    fVar5 = fVar5 + fStack0000005c;
    *param_5 = bVar3 + 0x1000;
    fVar6 = fVar6 + (float)((ulonglong)param_8 >> 0x20);
    param_5[1] = in_stack_0000008c;
    param_5[2] = (int)(fVar1 * 0.9995);
    param_5[3] = (int)(local_f8 + fVar4);
    param_5[4] = (int)(local_f4 + fVar5);
    param_5[5] = (int)(local_f0 + fVar6);
    param_5[6] = (int)fVar13;
    param_5[7] = (int)fVar14;
    param_5[8] = (int)fVar15;
    param_5[9] = (int)fVar4;
    param_5[10] = (int)fVar5;
    param_5[0xb] = (int)fVar6;
    param_5[0xc] = (int)(fVar7 + fVar4);
    param_5[0xd] = (int)(fVar9 + fVar5);
    param_5[0xe] = (int)(fVar11 + fVar6);
    param_5[0xf] = (int)(fVar8 + fVar4);
    param_5[0x10] = (int)(fVar10 + fVar5);
    param_5[0x11] = (int)(fVar12 + fVar6);
  }
  return;
}


// 0x005c710 (0x1e7c bytes)
/* [collision] Vertical capsule (pill) vs env (x1024) and moby collision. Callers:
   Hero_ResolveCollision, Hero_CheckLedgeGrab, MB_CheckCollPill, walk_Update. */

undefined8
CollPill(double param_1,double param_2,float *param_3,undefined8 param_4,
                  undefined8 param_5,uint param_6,ulonglong param_7)

{
  float fVar1;
  float fVar2;
  float fVar3;
  byte bVar4;
  char cVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  short sVar17;
  int iVar18;
  int iVar19;
  undefined4 uVar20;
  GPiece<16> auVar21;
  GPiece<16> auVar22;
  ulonglong *puVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  int iVar27;
  ulonglong uVar28;
  undefined8 uVar29;
  longlong lVar30;
  undefined4 *puVar31;
  CollCell *pCVar32;
  short *psVar34;
  ushort uVar36;
  float *pfVar35;
  float *pfVar37;
  uint uVar38;
  longlong lVar39;
  ulonglong unaff_r14;
  ulonglong unaff_r15;
  int iVar40;
  ulonglong unaff_r16;
  int iVar41;
  ulonglong unaff_r17;
  ulonglong unaff_r18;
  int iVar42;
  ulonglong unaff_r19;
  ulonglong unaff_r20;
  undefined *puVar43;
  ulonglong unaff_r21;
  ulonglong unaff_r22;
  ulonglong unaff_r23;
  ulonglong uVar44;
  int iVar45;
  MobyInstance *pMVar46;
  ulonglong unaff_r24;
  ulonglong unaff_r25;
  ulonglong uVar47;
  ulonglong unaff_r26;
  ulonglong unaff_r27;
  int iVar48;
  ulonglong unaff_r28;
  uint uVar49;
  ulonglong unaff_r29;
  float *pfVar50;
  ulonglong unaff_r30;
  ushort *puVar51;
  ulonglong unaff_r31;
  ulonglong in_LR;
  ulonglong uVar52;
  double dVar53;
  double dVar54;
  double dVar55;
  double dVar56;
  double dVar57;
  double dVar58;
  double dVar59;
  ulonglong in_f14;
  double dVar60;
  ulonglong in_f15;
  double dVar61;
  ulonglong in_f16;
  double dVar62;
  ulonglong in_f17;
  ulonglong in_f18;
  ulonglong in_f19;
  ulonglong in_f20;
  ulonglong in_f21;
  ulonglong in_f22;
  ulonglong in_f23;
  double dVar63;
  ulonglong in_f24;
  double dVar64;
  ulonglong in_f25;
  double dVar65;
  double dVar66;
  ulonglong in_f26;
  double dVar67;
  ulonglong in_f27;
  double dVar68;
  ulonglong in_f28;
  ulonglong in_f29;
  ulonglong in_f30;
  double dVar69;
  ulonglong in_f31;
  double dVar70;
  GPiece<16> auVar71;
  GPiece<16> auVar72;
  int iVar33;
  
  uVar28 = ZEXT48(&stack0x00000000);
  puVar23 = (ulonglong *)(uVar28 - 0x28d0);
  *puVar23 = uVar28;
  puVar23[0x51c] = in_LR;
  puVar23[0x508] = in_f14;
  puVar23[0x509] = in_f15;
  puVar23[0x50a] = in_f16;
  puVar23[0x50b] = in_f17;
  puVar23[0x50c] = in_f18;
  puVar23[0x50d] = in_f19;
  puVar23[0x50e] = in_f20;
  puVar23[0x50f] = in_f21;
  puVar23[0x510] = in_f22;
  puVar23[0x511] = in_f23;
  puVar23[0x512] = in_f24;
  puVar23[0x513] = in_f25;
  puVar23[0x514] = in_f26;
  puVar23[0x515] = in_f27;
  puVar23[0x516] = in_f28;
  puVar23[0x517] = in_f29;
  puVar23[0x518] = in_f30;
  puVar23[0x519] = in_f31;
  fVar6 = *param_3;
  dVar58 = (double)param_3[1];
  dVar59 = (double)param_3[2];
  puVar23[0x4f9] = unaff_r17;
  fVar2 = (float)(dVar59 - param_1);
  dVar68 = (double)fVar6 - param_1;
  fVar3 = (float)(dVar58 - param_1);
  *(float *)((int)puVar23 + 0xfc) = (float)(dVar58 + param_1);
  *(float *)(puVar23 + 0x20) = (float)(dVar59 + param_1);
  dVar65 = 0.0;
  dVar67 = (double)(float)(dVar59 + param_1) + param_2;
  fVar1 = (float)dVar67;
  puVar23[0x4e6] = param_7;
  fVar6 = (float)((double)fVar6 + param_1) + 0.0;
  fVar7 = (float)(dVar58 + param_1) + 0.0;
  *(float *)(puVar23 + 0x17) = fVar1;
  *(float *)((int)puVar23 + 0xc4) = fVar2;
  *(float *)((int)puVar23 + 0xb4) = fVar7;
  *(float *)(puVar23 + 0x18) = fVar3;
  dVar62 = 1024.0;
  dVar61 = (double)(float)(param_2 * 1024.0);
  dVar60 = (double)(float)(param_1 * 1024.0);
  *(float *)((int)puVar23 + 0xcc) = (float)(dVar58 * 1024.0);
  puVar23[0x507] = unaff_r31;
  puVar23[0x506] = unaff_r30;
  puVar23[0x505] = unaff_r29;
  puVar23[0x504] = unaff_r28;
  puVar23[0x503] = unaff_r27;
  puVar23[0x502] = unaff_r26;
  puVar23[0x501] = unaff_r25;
  puVar23[0x500] = unaff_r24;
  puVar23[0x4ff] = unaff_r23;
  puVar23[0x4fe] = unaff_r22;
  puVar23[0x4fd] = unaff_r21;
  puVar23[0x4fc] = unaff_r20;
  puVar23[0x4fb] = unaff_r19;
  puVar23[0x4fa] = unaff_r18;
  puVar23[0x4f8] = unaff_r16;
  puVar23[0x4f7] = unaff_r15;
  puVar23[0x4f6] = unaff_r14;
  *(float *)(puVar23 + 0x1a) = (float)(dVar59 * 1024.0);
  if ((fVar3 < 0.0 || (float)dVar68 < 0.0) || (fVar2 < 0.0)) {
    uVar29 = 0;
  }
  else if (((1024.0 < fVar6) || (1024.0 < fVar7)) || (1024.0 < fVar1)) {
    uVar29 = 0;
  }
  else if (g_CollOutput.collCount < 0) {
    uVar29 = 0;
  }
  else {
    g_CollOutput.collCount = g_CollOutput.collCount + 1;
    puVar23[0x4e8] = ZEXT48(&g_CollOutput);
    puVar23[0x4f0] = (longlong)(int)dVar68;
    puVar23[0x4f0] = (longlong)(int)(dVar58 - param_1);
    iVar41 = *(int *)((int)puVar23 + 0x2784);
    puVar23[0x4f0] = (longlong)(int)(dVar59 - param_1);
    puVar23[0x4f0] = (longlong)(int)fVar6;
    puVar23[0x4f0] = (longlong)(int)fVar7;
    iVar40 = *(int *)((int)puVar23 + 0x2784);
    puVar23[0x4f0] = (longlong)(int)dVar67;
    if (0.0 < dVar61) {
      if (0.0 < dVar60) {
        iVar45 = *(int *)((int)puVar23 + 0x2784) >> 2;
        *(int *)(puVar23 + 0x4e2) = iVar45;
        *(int *)((int)puVar23 + 0x2714) = iVar45;
        iVar42 = iVar41 >> 2;
        *(int *)(puVar23 + 0x4e3) = iVar45;
        iVar48 = *(int *)((int)puVar23 + 0x2784) >> 2;
        *(int *)((int)puVar23 + 0x271c) = iVar45;
        *(float *)(puVar23 + 0x1b) = fVar3 * 1024.0;
        *(float *)((int)puVar23 + 0xdc) = fVar2 * 1024.0;
        *(float *)((int)puVar23 + 0xe4) = fVar7 * 1024.0;
        *(float *)(puVar23 + 0x1d) = fVar1 * 1024.0;
        auVar21 = auRam00000000;
        *(int *)(puVar23 + 0x4e2) = iVar42;
        auVar21 = auVar21 >> 0x60 & (GPiece<16>)0xffffffff;
        *(int *)((int)puVar23 + 0x2714) = iVar42;
        *(int *)(puVar23 + 0x4e3) = iVar42;
        *(int *)((int)puVar23 + 0x271c) = iVar42;
        auVar22 = auRam00000000;
        *(int *)(puVar23 + 0x4e2) = iVar48;
        *(int *)((int)puVar23 + 0x2714) = iVar48;
        *(int *)(puVar23 + 0x4e3) = iVar48;
        *(int *)((int)puVar23 + 0x271c) = iVar48;
        auVar22 = auVar22 >> 0x60 & (GPiece<16>)0xffffffff;
        auVar72 = auRam00000000 >> 0x60 & (GPiece<16>)0xffffffff;
        lVar30 = uVar28 - 0x27cc;
        iVar33 = *(int *)((int)puVar23 + 0x2784) >> 2;
        iVar18 = iVar40 >> 2;
        iVar19 = *(int *)((int)puVar23 + 0x2784) >> 2;
        uVar20 = storeVectorElementWordIndexed
                           (auVar21 | auVar21 << 0x20 | auVar21 << 0x40 | auVar21 << 0x60,0,lVar30);
        *(undefined4 *)lVar30 = uVar20;
        auVar21 = SPLAT(auVar72) >> 0x60 &
                  (GPiece<16>)0xffffffff;
        storeVectorElementWordIndexed
                  (auVar22 | auVar22 << 0x20 | auVar22 << 0x40 | auVar22 << 0x60,4,lVar30);
        storeVectorElementWordIndexed
                  (auVar21 | auVar21 << 0x20 | auVar21 << 0x40 | auVar21 << 0x60,8,lVar30);
        *(int *)(puVar23 + 0x4e2) = iVar33;
        *(int *)((int)puVar23 + 0x2714) = iVar33;
        *(int *)(puVar23 + 0x4e3) = iVar33;
        *(int *)((int)puVar23 + 0x271c) = iVar33;
        auVar21 = auRam00000000 >> 0x60 & (GPiece<16>)0xffffffff;
        *(int *)(puVar23 + 0x4e2) = iVar18;
        *(int *)((int)puVar23 + 0x2714) = iVar18;
        *(int *)(puVar23 + 0x4e3) = iVar18;
        *(int *)((int)puVar23 + 0x271c) = iVar18;
        auVar22 = auRam00000000;
        *(int *)(puVar23 + 0x4e2) = iVar19;
        *(int *)((int)puVar23 + 0x2714) = iVar19;
        *(int *)(puVar23 + 0x4e3) = iVar19;
        *(int *)((int)puVar23 + 0x271c) = iVar19;
        auVar22 = auVar22 >> 0x60 & (GPiece<16>)0xffffffff;
        auVar72 = auRam00000000 >> 0x60 & (GPiece<16>)0xffffffff;
        lVar30 = uVar28 - 0x27c0;
        *(undefined4 *)(puVar23 + 0x4e7) = 0;
        puVar23[0x4ef] = (longlong)iVar45;
        puVar23[0x4eb] = (longlong)iVar33;
        uVar20 = storeVectorElementWordIndexed
                           (auVar21 | auVar21 << 0x20 | auVar21 << 0x40 | auVar21 << 0x60,0,lVar30);
        *(undefined4 *)lVar30 = uVar20;
        auVar21 = SPLAT(auVar72) >> 0x60 &
                  (GPiece<16>)0xffffffff;
        storeVectorElementWordIndexed
                  (auVar22 | auVar22 << 0x20 | auVar22 << 0x40 | auVar22 << 0x60,4,lVar30);
        storeVectorElementWordIndexed
                  (auVar21 | auVar21 << 0x20 | auVar21 << 0x40 | auVar21 << 0x60,8,lVar30);
        *(undefined4 *)(puVar23 + 0x59) = 0;
        *(undefined4 *)((int)puVar23 + 0x2cc) = 0;
        *(undefined4 *)(puVar23 + 0x5a) = 0;
        *(undefined4 *)((int)puVar23 + 0x2d4) = 0;
        *(undefined4 *)(puVar23 + 0x5b) = 0;
        *(undefined4 *)((int)puVar23 + 0x2dc) = 0;
        *(undefined4 *)(puVar23 + 0x5c) = 0;
        *(undefined4 *)((int)puVar23 + 0x2e4) = 0;
        *(undefined4 *)(puVar23 + 0x5d) = 0;
        *(undefined4 *)((int)puVar23 + 0x2ec) = 0;
        *(undefined4 *)(puVar23 + 0x5e) = 0;
        *(undefined4 *)((int)puVar23 + 0x2f4) = 0;
        *(undefined4 *)(puVar23 + 0x5f) = 0;
        *(undefined4 *)((int)puVar23 + 0x2fc) = 0;
        *(undefined4 *)(puVar23 + 0x60) = 0;
        *(undefined4 *)((int)puVar23 + 700) = 0;
        *(undefined4 *)(puVar23 + 0x58) = 0;
        *(undefined4 *)((int)puVar23 + 0x273c) = 0x3f800000;
        *(float *)((int)puVar23 + 0x2c4) = (float)(dVar60 * dVar60) * 0.9995;
        if ((param_6 & 1) == 0) {
          iVar45 = (int)((puVar23[0x4ef] & 0xffffffff) << 0xc);
          iVar33 = iVar42 << 0xc;
          iVar27 = iVar48 << 0xc;
          *(int *)(puVar23 + 0x4e2) = iVar45;
          *(int *)((int)puVar23 + 0x2714) = iVar45;
          *(int *)(puVar23 + 0x4e3) = iVar45;
          *(int *)((int)puVar23 + 0x271c) = iVar45;
          auVar21 = auRam00000000 >> 0x60 & (GPiece<16>)0xffffffff;
          *(int *)(puVar23 + 0x4e2) = iVar33;
          *(int *)((int)puVar23 + 0x2714) = iVar33;
          *(int *)(puVar23 + 0x4e3) = iVar33;
          *(int *)((int)puVar23 + 0x271c) = iVar33;
          auVar22 = auRam00000000;
          *(int *)(puVar23 + 0x4e2) = iVar27;
          *(int *)((int)puVar23 + 0x2714) = iVar27;
          *(int *)(puVar23 + 0x4e3) = iVar27;
          *(int *)((int)puVar23 + 0x271c) = iVar27;
          auVar22 = auVar22 >> 0x60 & (GPiece<16>)0xffffffff;
          auVar72 = auRam00000000 >> 0x60 & (GPiece<16>)0xffffffff;
          lVar30 = uVar28 - 0x27a8;
          uVar20 = storeVectorElementWordIndexed
                             (auVar21 | auVar21 << 0x20 | auVar21 << 0x40 | auVar21 << 0x60,0,lVar30
                             );
          *(undefined4 *)lVar30 = uVar20;
          auVar21 = SPLAT(auVar72) >> 0x60 &
                    (GPiece<16>)0xffffffff;
          storeVectorElementWordIndexed
                    (auVar22 | auVar22 << 0x20 | auVar22 << 0x40 | auVar22 << 0x60,4,lVar30);
          storeVectorElementWordIndexed
                    (auVar21 | auVar21 << 0x20 | auVar21 << 0x40 | auVar21 << 0x60,8,lVar30);
          puVar23[0x4f0] = (longlong)iVar45;
          uVar52 = puVar23[0x4f0];
          puVar23[0x4f0] = (longlong)iVar33;
          fVar1 = (float)(longlong)uVar52;
          lVar30 = uVar28 - 0x11cc;
          *(float *)(puVar23 + 0x4e2) = fVar1;
          *(float *)((int)puVar23 + 0x2714) = fVar1;
          *(float *)(puVar23 + 0x4e3) = fVar1;
          *(float *)((int)puVar23 + 0x271c) = fVar1;
          uVar52 = puVar23[0x4f0];
          puVar23[0x4f0] = (longlong)iVar27;
          fVar1 = (float)(longlong)uVar52;
          auVar21 = auRam00000000 >> 0x60 & (GPiece<16>)0xffffffff;
          *(float *)(puVar23 + 0x4e2) = fVar1;
          *(float *)((int)puVar23 + 0x2714) = fVar1;
          *(float *)(puVar23 + 0x4e3) = fVar1;
          *(float *)((int)puVar23 + 0x271c) = fVar1;
          fVar1 = (float)(longlong)puVar23[0x4f0];
          auVar22 = auRam00000000 >> 0x60 & (GPiece<16>)0xffffffff;
          *(float *)(puVar23 + 0x4e2) = fVar1;
          *(float *)((int)puVar23 + 0x2714) = fVar1;
          *(float *)(puVar23 + 0x4e3) = fVar1;
          *(float *)((int)puVar23 + 0x271c) = fVar1;
          auVar72 = auRam00000000 >> 0x60 & (GPiece<16>)0xffffffff;
          iVar45 = 0x100;
          auVar71 = auVar21 | auVar21 << 0x20 | auVar21 << 0x40 | auVar21 << 0x60;
          auVar21 = SPLAT(auVar22) >> 0x60 &
                    (GPiece<16>)0xffffffff;
          auVar22 = SPLAT(auVar72) >> 0x60 &
                    (GPiece<16>)0xffffffff;
          auVar72 = auVar21 | auVar21 << 0x20 | auVar21 << 0x40 | auVar21 << 0x60;
          auVar21 = SPLAT(auVar22) >> 0x60 &
                    (GPiece<16>)0xffffffff;
          storeVectorElementWordIndexed
                    (auVar21 | auVar21 << 0x20 | auVar21 << 0x40 | auVar21 << 0x60,8,uVar28 - 0x27b4
                    );
          do {
            puVar31 = (undefined4 *)lVar30;
            *puVar31 = 0;
            iVar45 = iVar45 + -1;
            puVar31[1] = 0;
            puVar31[2] = 0;
            puVar31[3] = 0;
            lVar30 = lVar30 + 0x10;
          } while (iVar45 != 0);
          uVar52 = uVar28 - 0x11cc;
          while( true ) {
            auVar21 = auVar72 >> 0x60 & (GPiece<16>)0xffffffff;
            uVar44 = puVar23[0x4eb];
            uVar20 = storeVectorElementWordIndexed
                               (auVar21 | auVar21 << 0x20 | auVar21 << 0x40 | auVar21 << 0x60,0,
                                uVar28 - 0x27b0);
            *(undefined4 *)(uVar28 - 0x27b0) = uVar20;
            iVar45 = iVar42;
            while( true ) {
              auVar21 = auVar71 >> 0x60 & (GPiece<16>)0xffffffff;
              uVar47 = puVar23[0x4ef];
              uVar20 = storeVectorElementWordIndexed
                                 (auVar21 | auVar21 << 0x20 | auVar21 << 0x40 | auVar21 << 0x60,0,
                                  uVar28 - 0x27b4);
              *(undefined4 *)(uVar28 - 0x27b4) = uVar20;
              while( true ) {
                dVar70 = (double)*(float *)((int)puVar23 + 0x11c);
                dVar69 = (double)*(float *)(puVar23 + 0x24);
                dVar59 = (double)*(float *)((int)puVar23 + 0x124);
                dVar58 = (double)(float)(dVar70 + 2048.0);
                dVar68 = (double)(float)(dVar69 + 2048.0);
                dVar67 = (double)(float)(dVar59 + 2048.0);
                *(float *)(puVar23 + 0x27) = (float)(dVar69 + 2048.0);
                *(float *)((int)puVar23 + 0x13c) = (float)(dVar59 + 2048.0);
                iVar33 = (int)uVar47;
                pCVar32 = CollGrid_GetCell(iVar33,iVar45,iVar48);
                *(CollCell **)(puVar23 + 0x14) = pCVar32;
                if (pCVar32 != (CollCell *)0x0) {
                  fVar1 = *(float *)(puVar23 + 0x14);
                  pfVar50 = (float *)uVar52;
                  *pfVar50 = (float)dVar58;
                  pfVar50[1] = (float)dVar68;
                  pfVar50[2] = (float)dVar67;
                  pfVar50[3] = fVar1;
                  uVar52 = uVar52 + 0x10 & 0xffffffff;
                }
                if ((int)uVar44 == iVar33) break;
                uVar47 = (ulonglong)(iVar33 + 1);
                *(float *)(puVar23 + 0x24) = (float)(dVar69 + dVar65);
                *(float *)((int)puVar23 + 0x124) = (float)(dVar59 + dVar65);
                *(float *)((int)puVar23 + 0x11c) = (float)(dVar70 + 4096.0);
              }
              if (iVar18 == iVar45) break;
              iVar45 = iVar45 + 1;
              *(float *)((int)puVar23 + 0x124) = (float)(dVar59 + dVar65);
              *(float *)(puVar23 + 0x24) = (float)(dVar69 + 4096.0);
            }
            if (iVar19 == iVar48) break;
            iVar48 = iVar48 + 1;
            *(float *)((int)puVar23 + 0x124) = (float)(dVar59 + 4096.0);
          }
          *(float *)((int)uVar52 + 0xc) = (float)dVar65;
          *(float *)(puVar23 + 0x4e7) = (float)dVar65;
          lVar30 = uVar28 - 0x11cc;
          while( true ) {
            pfVar50 = (float *)lVar30;
            psVar34 = (short *)pfVar50[3];
            *(float *)((int)puVar23 + 0xa4) = pfVar50[3];
            if (psVar34 == (short *)0x0) break;
            bVar4 = *(byte *)(psVar34 + 1);
            uVar49 = (uint)bVar4;
            if (bVar4 != 0) {
              fVar1 = *pfVar50;
              fVar2 = pfVar50[1];
              fVar3 = pfVar50[2];
              *(float *)((int)puVar23 + 0x144) = fVar2;
              *(float *)(puVar23 + 0x29) = fVar3;
              iVar45 = 0;
              pfVar35 = (float *)(psVar34 + 2);
              *(float *)(puVar23 + 0x2a) = *(float *)((int)puVar23 + 0xcc) - fVar2;
              *(float *)((int)puVar23 + 0x154) = *(float *)(puVar23 + 0x1a) - fVar3;
              fVar6 = *(float *)((int)puVar23 + 0xd4);
              fVar7 = *(float *)(puVar23 + 0x1b);
              fVar11 = *(float *)((int)puVar23 + 0xdc) - fVar3;
              *(float *)((int)puVar23 + 0x15c) = fVar7 - fVar2;
              *(float *)(puVar23 + 0x2c) = fVar11;
              fVar8 = *(float *)(puVar23 + 0x1c);
              fVar9 = *(float *)(puVar23 + 0x1d);
              fVar10 = *(float *)((int)puVar23 + 0xe4) - fVar2;
              *(float *)(puVar23 + 0x2d) = fVar10;
              *(float *)((int)puVar23 + 0x16c) = fVar9 - fVar3;
              lVar39 = uVar28 - 0x28d0;
              pfVar50 = pfVar35;
              if (bVar4 != 0) {
                do {
                  iVar45 = iVar45 + 1;
                  *(uint *)((int)lVar39 + 0x304) =
                       (uint)(fVar8 - fVar1 < *pfVar50) << 1 | (uint)(*pfVar50 < fVar6 - fVar1) |
                       (uint)(fVar10 < pfVar50[1]) << 9 | (uint)(pfVar50[1] < fVar7 - fVar2) << 8 |
                       (uint)(fVar9 - fVar3 < pfVar50[2]) << 0x11 |
                       (uint)(pfVar50[2] < fVar11) << 0x10;
                  lVar39 = lVar39 + 4;
                  pfVar50 = pfVar50 + 3;
                } while (iVar45 < (int)(uint)bVar4);
              }
              sVar17 = *psVar34;
              iVar45 = 0;
              pfVar37 = pfVar35 + uVar49 * 3;
              pfVar50 = pfVar37;
              if (0 < sVar17) {
                do {
                  *(undefined4 *)(puVar23 + 0xb) = *(undefined4 *)(puVar23 + 0x28);
                  *(undefined4 *)(puVar23 + 0xc) = *(undefined4 *)(puVar23 + 0x29);
                  uVar52 = ZEXT48(g_CollOutput.grid);
                  *(undefined4 *)((int)puVar23 + 0x5c) = *(undefined4 *)((int)puVar23 + 0x144);
                  *(undefined4 *)(puVar23 + 0xe) = *(undefined4 *)((int)puVar23 + 0x14c);
                  *(undefined4 *)((int)puVar23 + 0x74) = *(undefined4 *)(puVar23 + 0x2a);
                  *(undefined4 *)(puVar23 + 0xf) = *(undefined4 *)((int)puVar23 + 0x154);
                  puVar23[0x11] = uVar52;
                  CollPillVsTri(dVar61,pfVar50,pfVar35,uVar28 - 0x25cc,uVar28 - 0x2614,uVar49,
                                puVar23[0xb],puVar23[0xc],param_6);
                  iVar45 = iVar45 + 1;
                  pfVar50 = pfVar50 + 1;
                } while (iVar45 < sVar17);
              }
              bVar4 = *(byte *)((int)psVar34 + 3);
              if (bVar4 != 0) {
                uVar52 = 0;
                if (bVar4 != 0) {
                  do {
                    *(undefined4 *)(puVar23 + 0xb) = *(undefined4 *)(puVar23 + 0x28);
                    *(undefined4 *)(puVar23 + 0xc) = *(undefined4 *)(puVar23 + 0x29);
                    *(undefined4 *)(puVar23 + 0x4e1) =
                         *(undefined4 *)((int)pfVar37 + (int)((uVar52 & 0xffffffff) << 2));
                    *(undefined1 *)((int)puVar23 + 0x2709) = *(undefined1 *)((int)puVar23 + 0x270a);
                    uVar44 = ZEXT48(g_CollOutput.grid);
                    *(undefined1 *)((int)puVar23 + 0x270a) =
                         *(undefined1 *)((int)pfVar37 + (int)uVar52 + (int)((longlong)sVar17 << 2));
                    *(undefined4 *)((int)puVar23 + 0x5c) = *(undefined4 *)((int)puVar23 + 0x144);
                    *(undefined4 *)(puVar23 + 0xe) = *(undefined4 *)((int)puVar23 + 0x14c);
                    *(undefined4 *)((int)puVar23 + 0x74) = *(undefined4 *)(puVar23 + 0x2a);
                    *(undefined4 *)(puVar23 + 0xf) = *(undefined4 *)((int)puVar23 + 0x154);
                    puVar23[0x11] = uVar44;
                    CollPillVsTri(dVar61,uVar28 - 0x1c8,pfVar35,uVar28 - 0x25cc,uVar28 - 0x2614,
                                  uVar49,puVar23[0xb],puVar23[0xc],param_6);
                    iVar45 = (int)uVar52 + 1;
                    uVar52 = (ulonglong)iVar45;
                  } while (iVar45 < (int)(uint)bVar4);
                }
              }
            }
            lVar30 = lVar30 + 0x10;
          }
        }
        iVar41 = iVar41 >> 4;
        uVar52 = (longlong)(iVar40 >> 4) + 1;
        *(undefined4 *)(puVar23 + 0x58) = 0;
        puVar23[0x4e5] = uVar52;
        puVar23[0x4eb] = (longlong)((int)puVar23[0x4eb] >> 2);
        puVar23[0x4ef] = (longlong)((int)puVar23[0x4ef] >> 2);
        puVar23[0x4ee] = (longlong)iVar41;
        if (iVar41 < (int)uVar52) {
          do {
            puVar23[0x4ec] = puVar23[0x4ef];
            puVar23[0x4e4] = puVar23[0x4eb] + 1;
            if ((int)puVar23[0x4ef] < (int)(puVar23[0x4eb] + 1)) {
              puVar23[0x4ed] = puVar23[0x4ec] << 2;
              do {
                uVar52 = ZEXT48(g_MobyGrid) + puVar23[0x4ed] + (puVar23[0x4ee] & 0xffffff) * 0x100;
                iVar41 = 0;
                psVar34 = (short *)uVar52;
                sVar17 = *psVar34;
                puVar23[0x4e9] = uVar52 & 0xffffffff;
                cVar5 = *(char *)(psVar34 + 1);
                puVar23[0x4ea] = ZEXT48(&g_MobyGridLists) + (longlong)sVar17 * 0x20 & 0xffffffff;
                if (cVar5 != '\0') {
                  iVar40 = 0;
                  do {
                    pMVar46 = g_MobyInstance + *(short *)((int)puVar23[0x4ea] + iVar40);
                    uVar52 = ZEXT48(pMVar46);
                    if (((pMVar46 != (MobyInstance *)puVar23[0x4e6]) &&
                        (puVar51 = pMVar46->collision, puVar51 != (ushort *)0x0)) &&
                       (iVar45 = *(int *)((int)puVar23[0x4e8] + 0x10),
                       pMVar46->collQueryStamp != iVar45)) {
                      fVar1 = (float)(dVar60 + (double)(pMVar46->bSphere).rad);
                      fVar6 = (pMVar46->bSphere).x - *(float *)(puVar23 + 0x19);
                      fVar7 = (pMVar46->bSphere).y - *(float *)((int)puVar23 + 0xcc);
                      fVar2 = (pMVar46->bSphere).z;
                      fVar3 = *(float *)(puVar23 + 0x1a);
                      dVar67 = (double)*(float *)(puVar23 + 0x4e7);
                      *(float *)(puVar23 + 0x30) = fVar7;
                      *(float *)((int)puVar23 + 0x184) = fVar2 - fVar3;
                      if ((dVar67 < (double)((fVar2 + fVar1) - fVar3) &&
                           fVar6 * fVar6 + fVar7 * fVar7 <= fVar1 * fVar1) &&
                         ((double)((fVar1 - fVar2) - fVar3) < dVar67)) {
                        uVar49 = *(uint *)(puVar51 + 2);
                        iVar42 = ((int)uVar49 >> 5) +
                                 (uint)((int)uVar49 < 0 && (uVar49 & 0x1f) != 0);
                        if ((param_6 & 4) == 0) {
                          uVar36 = puVar51[1];
                        }
                        else {
                          uVar36 = *puVar51;
                        }
                        pMVar46->collQueryStamp = iVar45;
                        puVar43 = (undefined *)0x0;
                        uVar49 = *(uint *)(pMVar46->collision + 6);
                        if (uVar36 != 0) {
                          if (uVar49 == ((param_6 & 2) == 0)) goto LAB_0005e2dc;
                          uVar44 = 0;
                          do {
                            iVar45 = pMVar46->field71_0xa8;
                            if (*(int *)(&MobyClassRef + (int)((uVar44 & 0xffffffff) << 3)) ==
                                iVar45) {
                              puVar43 = &g_CollMobyJointCache + (int)uVar44 * 0x7fc;
                              goto LAB_0005d92c;
                            }
                            uVar44 = uVar44 + 1;
                          } while ((int)uVar44 < 8);
                          iVar33 = (int)puVar23[0x4e8];
                          iVar48 = *(int *)(iVar33 + 0xc);
                          uVar38 = iVar48 + 1;
                          puVar43 = &g_CollMobyJointCache + iVar48 * 0x7fc;
                          *(uint *)(iVar33 + 0xc) =
                               uVar38 + (((int)uVar38 >> 3) +
                                        (uint)((int)uVar38 < 0 && (uVar38 & 7) != 0)) * -8;
                          *(int *)(&MobyClassRef + iVar48 * 8) = iVar45;
                          *(undefined4 *)(iVar48 * 8 + 0xa109c4) = *(undefined4 *)(iVar33 + 0x10);
                          Moby_BuildJointMatrices(uVar52,uVar36,puVar43);
                        }
LAB_0005d92c:
                        fVar1 = (float)((double)(pMVar46->pos).y * dVar62);
                        dVar68 = (double)(pMVar46->transform).v0.x;
                        fVar2 = (float)((double)(pMVar46->pos).z * dVar62);
                        dVar58 = (double)(pMVar46->transform).v0.y;
                        dVar59 = (double)(pMVar46->transform).v0.z;
                        dVar65 = (double)(pMVar46->transform).v1.x;
                        dVar69 = (double)(pMVar46->transform).v1.y;
                        dVar70 = (double)(pMVar46->transform).v1.z;
                        dVar63 = (double)(pMVar46->transform).v2.x;
                        dVar64 = (double)(pMVar46->transform).v2.y;
                        dVar66 = (double)(pMVar46->transform).v2.z;
                        *(float *)((int)puVar23 + 0x174) = fVar1;
                        *(float *)(puVar23 + 0x2f) = fVar2;
                        if (uVar49 != 0) {
                          fVar1 = *(float *)((int)puVar23 + 0xcc) - fVar1;
                          dVar53 = (double)fVar1;
                          fVar2 = *(float *)(puVar23 + 0x1a) - fVar2;
                          dVar54 = (double)fVar2;
                          uVar47 = uVar28 - 0x1dcc;
                          iVar45 = 0x100;
                          fVar3 = (float)(dVar53 + dVar60);
                          fVar6 = (float)(dVar54 + dVar60);
                          *(float *)((int)puVar23 + 0x18c) = fVar1;
                          *(float *)(puVar23 + 0x32) = fVar2;
                          *(float *)(puVar23 + 0x33) = (float)(dVar53 - dVar60);
                          *(float *)((int)puVar23 + 0x19c) = (float)(dVar54 - dVar60);
                          *(float *)(puVar23 + 0x36) = fVar3;
                          *(float *)((int)puVar23 + 0x1b4) = fVar6;
                          *(float *)((int)puVar23 + 0x1a4) = (float)((double)fVar3 + dVar67);
                          *(float *)(puVar23 + 0x35) = (float)((double)fVar6 + dVar61);
                          uVar44 = uVar47;
                          do {
                            iVar45 = iVar45 + -1;
                            pfVar50 = (float *)uVar44;
                            *pfVar50 = (float)dVar67;
                            pfVar50[1] = (float)dVar67;
                            pfVar50[2] = (float)dVar67;
                            uVar44 = uVar44 + 0xc;
                          } while (iVar45 != 0);
                          dVar67 = (double)pMVar46->scale;
                          *(float *)(puVar23 + 0x4b) = (float)(dVar58 * dVar67);
                          *(float *)((int)puVar23 + 0x25c) = (float)(dVar59 * dVar67);
                          *(float *)((int)puVar23 + 0x264) = (float)(dVar69 * dVar67);
                          *(float *)(puVar23 + 0x4d) = (float)(dVar70 * dVar67);
                          *(float *)(puVar23 + 0x4e) = (float)(dVar64 * dVar67);
                          *(float *)((int)puVar23 + 0x274) = (float)(dVar66 * dVar67);
                          *(float *)((int)puVar23 + 0x29c) = (float)(dVar58 * dVar67);
                          *(float *)(puVar23 + 0x54) = (float)(dVar59 * dVar67);
                          *(float *)(puVar23 + 0x55) = (float)(dVar69 * dVar67);
                          *(float *)((int)puVar23 + 0x2ac) = (float)(dVar70 * dVar67);
                          *(float *)((int)puVar23 + 0x2b4) = (float)(dVar64 * dVar67);
                          *(float *)(puVar23 + 0x57) = (float)(dVar66 * dVar67);
                          *(undefined4 *)(puVar23 + 7) = *(undefined4 *)((int)puVar23 + 0x194);
                          *(undefined4 *)(puVar23 + 8) = *(undefined4 *)((int)puVar23 + 0x19c);
                          *(undefined4 *)(puVar23 + 9) = *(undefined4 *)(puVar23 + 0x34);
                          *(undefined4 *)(puVar23 + 10) = *(undefined4 *)(puVar23 + 0x35);
                          *(undefined4 *)(puVar23 + 0xb) = *(undefined4 *)(puVar23 + 0x53);
                          *(undefined4 *)(puVar23 + 0xc) = *(undefined4 *)(puVar23 + 0x54);
                          *(undefined4 *)(puVar23 + 0xd) = *(undefined4 *)(puVar23 + 0x55);
                          *(undefined4 *)((int)puVar23 + 0x3c) = *(undefined4 *)(puVar23 + 0x33);
                          *(undefined4 *)((int)puVar23 + 0x4c) =
                               *(undefined4 *)((int)puVar23 + 0x1a4);
                          *(undefined4 *)((int)puVar23 + 0x5c) =
                               *(undefined4 *)((int)puVar23 + 0x29c);
                          *(undefined4 *)((int)puVar23 + 100) =
                               *(undefined4 *)((int)puVar23 + 0x2a4);
                          *(undefined4 *)((int)puVar23 + 0x6c) =
                               *(undefined4 *)((int)puVar23 + 0x2ac);
                          *(undefined4 *)(puVar23 + 0xe) = *(undefined4 *)(puVar23 + 0x56);
                          *(undefined4 *)((int)puVar23 + 0x74) =
                               *(undefined4 *)((int)puVar23 + 0x2b4);
                          *(undefined4 *)(puVar23 + 0xf) = *(undefined4 *)(puVar23 + 0x57);
                          puVar23[0x10] = uVar47;
                          puVar23[0x11] = uVar28 - 0x21cc;
                          puVar23[0x12] = uVar28 - 0x2828;
                          puVar23[0x13] = uVar28 - 0x2824;
                          CollMoby_TransformVerts
                                    (uVar52,puVar23[7],puVar23[8],puVar23[9],puVar23[10],
                                     puVar23[0xb],puVar23[0xc],puVar23[0xd]);
                          iVar45 = 0;
                          if (0 < *(int *)((int)puVar23 + 0xac)) {
                            iVar48 = 0;
                            do {
                              *(undefined4 *)(puVar23 + 0xb) = *(undefined4 *)(puVar23 + 0x2e);
                              *(undefined4 *)(puVar23 + 0xc) = *(undefined4 *)(puVar23 + 0x2f);
                              *(undefined4 *)((int)puVar23 + 0x5c) =
                                   *(undefined4 *)((int)puVar23 + 0x174);
                              *(undefined4 *)(puVar23 + 0xe) = *(undefined4 *)(puVar23 + 0x31);
                              *(undefined4 *)((int)puVar23 + 0x74) =
                                   *(undefined4 *)((int)puVar23 + 0x18c);
                              *(undefined4 *)(puVar23 + 0xf) = *(undefined4 *)(puVar23 + 0x32);
                              puVar23[0x11] = uVar52;
                              CollPillVsTri(dVar61,*(int *)(puVar23 + 0x15) + iVar48,uVar47,
                                            uVar28 - 0x21cc,uVar28 - 0x2614,
                                            ((int)uVar49 >> 3) +
                                            (uint)((int)uVar49 < 0 && (uVar49 & 7) != 0),
                                            puVar23[0xb],puVar23[0xc],param_6);
                              iVar45 = iVar45 + 1;
                              iVar48 = iVar48 + 4;
                            } while (iVar45 < *(int *)((int)puVar23 + 0xac));
                          }
                        }
                        if ((param_6 & 2) == 0) {
                          puVar51 = pMVar46->collision + 8;
                          iVar45 = 0;
                          pfVar50 = pMVar46->collisionMesh;
                          if (0 < iVar42) {
                            do {
                              uVar49 = (uint)pfVar50 & 1;
                              pfVar50 = (float *)((int)pfVar50 >> 1);
                              bVar4 = *(byte *)puVar51;
                              if ((uVar49 == 0) &&
                                 (((int)(short)puVar51[1] & ((param_6 & 4) == 0) + 1) != 0)) {
                                if (bVar4 < 2) {
                                  if (bVar4 == 0) {
LAB_0005dff4:
                                    fVar1 = pMVar46->scale;
                                    pfVar35 = (float *)(puVar43 +
                                                       (int)((longlong)(short)puVar51[2] << 4));
                                    pfVar37 = (float *)(puVar43 +
                                                       (int)((longlong)(short)puVar51[3] << 4));
                                    dVar67 = (double)((float)((double)*pfVar35 * dVar62) * fVar1);
                                    dVar53 = (double)((float)((double)pfVar35[1] * dVar62) * fVar1);
                                    dVar54 = (double)((float)((double)*pfVar37 * dVar62) * fVar1);
                                    dVar55 = (double)((float)((double)pfVar37[1] * dVar62) * fVar1);
                                    dVar56 = (double)((float)((double)pfVar35[2] * dVar62) * fVar1);
                                    dVar57 = (double)((float)((double)pfVar37[2] * dVar62) * fVar1);
                                    fVar2 = *(float *)(puVar51 + 6);
                                    fVar10 = (float)(dVar58 * dVar67) + (float)(dVar69 * dVar53) +
                                             (float)(dVar64 * dVar56);
                                    fVar8 = (float)(dVar59 * dVar67) + (float)(dVar70 * dVar53) +
                                            (float)(dVar66 * dVar56);
                                    fVar3 = (float)(dVar58 * dVar54) + (float)(dVar69 * dVar55) +
                                            (float)(dVar64 * dVar57);
                                    *(float *)((int)puVar23 + 0x21c) = fVar10;
                                    fVar6 = (float)(dVar59 * dVar54) + (float)(dVar70 * dVar55) +
                                            (float)(dVar66 * dVar57);
                                    *(float *)(puVar23 + 0x44) = fVar8;
                                    *(float *)(puVar23 + 0x45) = fVar3;
                                    *(float *)((int)puVar23 + 0x22c) = fVar6;
                                    fVar9 = (float)(dVar68 * dVar67) + (float)(dVar65 * dVar53) +
                                            (float)(dVar63 * dVar56) + *(float *)(puVar23 + 0x2e);
                                    fVar10 = fVar10 + *(float *)((int)puVar23 + 0x174);
                                    fVar8 = fVar8 + *(float *)(puVar23 + 0x2f);
                                    fVar12 = ((float)(dVar68 * dVar54) + (float)(dVar65 * dVar55) +
                                              (float)(dVar63 * dVar57) + *(float *)(puVar23 + 0x2e))
                                             - fVar9;
                                    fVar13 = (fVar3 + *(float *)((int)puVar23 + 0x174)) - fVar10;
                                    fVar14 = (fVar6 + *(float *)(puVar23 + 0x2f)) - fVar8;
                                    *(float *)((int)puVar23 + 0x204) = fVar13;
                                    *(float *)(puVar23 + 0x41) = fVar14;
                                    fVar3 = *(float *)(puVar23 + 0x19);
                                    fVar6 = *(float *)(puVar23 + 0x1a);
                                    fVar7 = *(float *)((int)puVar23 + 0xcc);
                                    fVar11 = fVar12 * fVar12 + fVar13 * fVar13;
                                    *(float *)(puVar23 + 0x42) = fVar7 - fVar10;
                                    *(float *)((int)puVar23 + 0x214) = fVar6 - fVar8;
                                    if (*(float *)((int)puVar23 + 0x273c) < ABS(fVar11)) {
                                      fVar11 = ((fVar3 - fVar9) * fVar12 + (fVar7 - fVar10) * fVar13
                                               ) / fVar11;
                                      if (fVar11 <= *(float *)(puVar23 + 0x4e7)) {
                                        fVar11 = *(float *)(puVar23 + 0x4e7);
                                      }
                                      if (*(float *)((int)puVar23 + 0x273c) <= fVar11) {
                                        fVar11 = *(float *)((int)puVar23 + 0x273c);
                                      }
                                      *(float *)(puVar23 + 7) = fVar6;
                                      *(float *)(puVar23 + 6) = fVar3;
                                      fVar8 = fVar8 + fVar14 * fVar11;
                                      fVar10 = fVar10 + fVar13 * fVar11;
                                      *(float *)((int)puVar23 + 0x24c) = fVar13 * fVar11;
                                      *(float *)(puVar23 + 0x4a) = fVar14 * fVar11;
                                      *(float *)((int)puVar23 + 0x34) = fVar7;
                                      *(float *)(puVar23 + 8) = fVar9 + fVar12 * fVar11;
                                      *(float *)(puVar23 + 9) = fVar8;
                                      *(float *)(puVar23 + 0x48) = fVar10;
                                      *(float *)((int)puVar23 + 0x244) = fVar8;
                                      *(float *)((int)puVar23 + 0x44) = fVar10;
                                      puVar23[0xe] = uVar52;
                                      CollPillVsSphere(dVar60,(double)(fVar2 * fVar1),dVar61,
                                                       puVar23[6],puVar23[7],puVar23[8],puVar23[9]);
                                    }
                                    else {
                                      fVar14 = fVar8 + fVar14;
                                      *(float *)((int)puVar23 + 0x234) = fVar10 + fVar13;
                                      *(float *)(puVar23 + 0x47) = fVar14;
                                      if (fVar6 < fVar8) {
                                        fVar6 = fVar8;
                                      }
                                      if (fVar14 < fVar6) {
                                        fVar6 = fVar14;
                                      }
                                      *(float *)(puVar23 + 8) = fVar9 + fVar12;
                                      *(undefined4 *)(puVar23 + 7) = *(undefined4 *)(puVar23 + 0x1a)
                                      ;
                                      *(float *)(puVar23 + 9) = fVar6;
                                      *(float *)((int)puVar23 + 0x44) = fVar10 + fVar13;
                                      *(float *)(puVar23 + 6) = fVar3;
                                      *(float *)((int)puVar23 + 0x34) = fVar7;
                                      puVar23[0xe] = uVar52;
                                      CollPillVsSphere(dVar60,(double)(fVar2 * fVar1),dVar61,
                                                       puVar23[6],puVar23[7],puVar23[8],puVar23[9]);
                                    }
                                  }
                                  else {
                                    fVar1 = *(float *)(puVar51 + 8);
                                    fVar2 = *(float *)(puVar51 + 10);
                                    fVar3 = *(float *)(puVar51 + 0xc);
                                    fVar6 = *(float *)(puVar51 + 0xe);
                                    *(float *)((int)puVar23 + 0x27c) = fVar2;
                                    *(float *)(puVar23 + 0x50) = fVar3;
                                    *(float *)((int)puVar23 + 0x284) = fVar6;
                                    *(float *)((int)puVar23 + 0x1bc) = fVar2;
                                    *(float *)(puVar23 + 0x38) = fVar3;
                                    fVar7 = pMVar46->scale;
                                    dVar67 = (double)(fVar1 * fVar7);
                                    dVar53 = (double)(fVar2 * fVar7);
                                    dVar54 = (double)(fVar3 * fVar7);
                                    fVar2 = (float)(dVar58 * dVar67) + (float)(dVar69 * dVar53) +
                                            (float)(dVar64 * dVar54);
                                    fVar1 = (float)(dVar59 * dVar67) + (float)(dVar70 * dVar53) +
                                            (float)(dVar66 * dVar54);
                                    *(float *)(puVar23 + 0x39) = fVar2;
                                    *(float *)((int)puVar23 + 0x1cc) = fVar1;
                                    *(undefined4 *)(puVar23 + 6) = *(undefined4 *)(puVar23 + 0x19);
                                    *(undefined4 *)(puVar23 + 7) = *(undefined4 *)(puVar23 + 0x1a);
                                    *(undefined4 *)((int)puVar23 + 0x34) =
                                         *(undefined4 *)((int)puVar23 + 0xcc);
                                    *(float *)(puVar23 + 8) =
                                         (float)(dVar68 * dVar67) + (float)(dVar65 * dVar53) +
                                         (float)(dVar63 * dVar54) + *(float *)(puVar23 + 0x2e);
                                    *(float *)(puVar23 + 9) = fVar1 + *(float *)(puVar23 + 0x2f);
                                    puVar23[0xe] = uVar52;
                                    *(float *)((int)puVar23 + 0x44) =
                                         fVar2 + *(float *)((int)puVar23 + 0x174);
                                    CollPillVsSphere(dVar60,(double)(fVar6 * fVar7),dVar61,
                                                     puVar23[6],puVar23[7],puVar23[8],puVar23[9]);
                                  }
                                }
                                else if (bVar4 < 3) {
                                  fVar1 = *(float *)(puVar51 + 6);
                                  fVar2 = *(float *)(puVar51 + 8);
                                  pfVar35 = (float *)(puVar43 + *(int *)(puVar51 + 2) * 0x10);
                                  fVar3 = *(float *)(puVar51 + 10);
                                  fVar6 = *(float *)(puVar51 + 0xc);
                                  *(float *)((int)puVar23 + 0x1d4) = fVar3;
                                  *(float *)(puVar23 + 0x3b) = fVar6;
                                  fVar7 = pMVar46->scale;
                                  dVar67 = (double)(((float)((double)*pfVar35 * dVar62) + fVar2) *
                                                   fVar7);
                                  dVar53 = (double)(((float)((double)pfVar35[1] * dVar62) + fVar3) *
                                                   fVar7);
                                  dVar54 = (double)(((float)((double)pfVar35[2] * dVar62) + fVar6) *
                                                   fVar7);
                                  fVar3 = (float)(dVar58 * dVar67) + (float)(dVar69 * dVar53) +
                                          (float)(dVar64 * dVar54);
                                  fVar2 = (float)(dVar59 * dVar67) + (float)(dVar70 * dVar53) +
                                          (float)(dVar66 * dVar54);
                                  *(float *)(puVar23 + 0x3c) = fVar3;
                                  *(float *)((int)puVar23 + 0x1e4) = fVar2;
                                  *(undefined4 *)(puVar23 + 6) = *(undefined4 *)(puVar23 + 0x19);
                                  *(undefined4 *)(puVar23 + 7) = *(undefined4 *)(puVar23 + 0x1a);
                                  *(undefined4 *)((int)puVar23 + 0x34) =
                                       *(undefined4 *)((int)puVar23 + 0xcc);
                                  *(float *)(puVar23 + 8) =
                                       (float)(dVar68 * dVar67) + (float)(dVar65 * dVar53) +
                                       (float)(dVar63 * dVar54) + *(float *)(puVar23 + 0x2e);
                                  *(float *)(puVar23 + 9) = fVar2 + *(float *)(puVar23 + 0x2f);
                                  puVar23[0xe] = uVar52;
                                  *(float *)((int)puVar23 + 0x44) =
                                       fVar3 + *(float *)((int)puVar23 + 0x174);
                                  CollPillVsSphere(dVar60,(double)(fVar1 * fVar7),dVar61,puVar23[6],
                                                   puVar23[7],puVar23[8],puVar23[9]);
                                }
                                else {
                                  if (3 < bVar4) goto LAB_0005dff4;
                                  fVar1 = *(float *)(puVar51 + 2);
                                  fVar2 = *(float *)(puVar51 + 8);
                                  fVar3 = *(float *)(puVar51 + 10);
                                  fVar6 = *(float *)(puVar51 + 0xc);
                                  fVar7 = *(float *)(puVar51 + 0xe);
                                  *(float *)((int)puVar23 + 0x28c) = fVar3;
                                  *(float *)(puVar23 + 0x52) = fVar6;
                                  *(float *)((int)puVar23 + 0x294) = fVar7;
                                  *(float *)((int)puVar23 + 0x1ec) = fVar3;
                                  *(float *)(puVar23 + 0x3e) = fVar6;
                                  fVar8 = pMVar46->scale;
                                  dVar67 = (double)(fVar2 * fVar8);
                                  dVar53 = (double)(fVar3 * fVar8);
                                  dVar54 = (double)(fVar6 * fVar8);
                                  fVar6 = (float)(dVar58 * dVar67) + (float)(dVar69 * dVar53) +
                                          (float)(dVar64 * dVar54);
                                  fVar2 = (float)(dVar59 * dVar67) + (float)(dVar70 * dVar53) +
                                          (float)(dVar66 * dVar54);
                                  *(float *)(puVar23 + 0x3f) = fVar6;
                                  *(float *)((int)puVar23 + 0x1fc) = fVar2;
                                  fVar2 = fVar2 + *(float *)(puVar23 + 0x2f);
                                  fVar3 = fVar2;
                                  if (fVar2 < *(float *)(puVar23 + 0x1a)) {
                                    fVar3 = *(float *)(puVar23 + 0x1a);
                                  }
                                  fVar2 = fVar2 + fVar1 * fVar8;
                                  if (fVar2 < fVar3) {
                                    fVar3 = fVar2;
                                  }
                                  *(undefined4 *)(puVar23 + 6) = *(undefined4 *)(puVar23 + 0x19);
                                  *(undefined4 *)(puVar23 + 7) = *(undefined4 *)(puVar23 + 0x1a);
                                  *(float *)(puVar23 + 8) =
                                       (float)(dVar68 * dVar67) + (float)(dVar65 * dVar53) +
                                       (float)(dVar63 * dVar54) + *(float *)(puVar23 + 0x2e);
                                  *(float *)(puVar23 + 9) = fVar3;
                                  *(float *)((int)puVar23 + 0x44) =
                                       fVar6 + *(float *)((int)puVar23 + 0x174);
                                  *(undefined4 *)((int)puVar23 + 0x34) =
                                       *(undefined4 *)((int)puVar23 + 0xcc);
                                  puVar23[0xe] = uVar52;
                                  CollPillVsSphere(dVar60,(double)(fVar7 * fVar8),dVar61,puVar23[6],
                                                   puVar23[7],puVar23[8],puVar23[9]);
                                }
                              }
                              iVar45 = iVar45 + 1;
                              puVar51 = puVar51 + 0x10;
                            } while (iVar45 < iVar42);
                          }
                        }
                      }
                    }
LAB_0005e2dc:
                    iVar41 = iVar41 + 1;
                    iVar40 = iVar40 + 2;
                  } while (iVar41 < (int)(uint)*(byte *)((int)puVar23[0x4e9] + 2));
                }
                uVar52 = puVar23[0x4ec];
                puVar23[0x4ed] = puVar23[0x4ed] + 4;
                puVar23[0x4ec] = uVar52 + 1;
              } while ((int)(uVar52 + 1) < (int)puVar23[0x4e4]);
            }
            uVar52 = puVar23[0x4ee];
            puVar23[0x4ee] = uVar52 + 1;
          } while ((int)(uVar52 + 1) < (int)puVar23[0x4e5]);
        }
        iVar41 = *(int *)((int)puVar23 + 700);
        if (iVar41 == 0) {
          uVar29 = 0;
        }
        else {
          fVar1 = *(float *)(puVar23 + 0x59);
          fVar24 = *(float *)(puVar23 + 0x5a) * 0.0009765625;
          fVar2 = *(float *)((int)puVar23 + 0x2cc);
          fVar3 = *(float *)(puVar23 + 0x5c);
          fVar6 = *(float *)((int)puVar23 + 0x2e4);
          fVar25 = fVar1 * 0.0009765625;
          fVar7 = *(float *)(puVar23 + 0x5d);
          fVar8 = *(float *)((int)puVar23 + 0x2ec);
          fVar9 = *(float *)(puVar23 + 0x5e);
          fVar10 = *(float *)((int)puVar23 + 0x2f4);
          fVar11 = *(float *)(puVar23 + 0x5f);
          fVar26 = fVar2 * 0.0009765625;
          fVar12 = *(float *)((int)puVar23 + 0x2fc);
          fVar13 = *(float *)(puVar23 + 0x60);
          fVar14 = *(float *)(puVar23 + 0x1a);
          uVar20 = *(undefined4 *)((int)puVar23 + 0x2d4);
          dVar67 = (double)(*(float *)(puVar23 + 0x5a) - fVar14);
          uVar15 = *(undefined4 *)(puVar23 + 0x5b);
          uVar16 = *(undefined4 *)((int)puVar23 + 0x2dc);
          iVar40 = (int)puVar23[0x4e8];
          *(float *)(iVar40 + 0x20) = fVar25;
          *(float *)(iVar40 + 0x28) = fVar24;
          *(float *)(iVar40 + 0x24) = fVar26;
          *(undefined4 *)(iVar40 + 0x40) = uVar20;
          *(undefined4 *)(iVar40 + 0x44) = uVar15;
          *(undefined4 *)(iVar40 + 0x48) = uVar16;
          *(float *)(iVar40 + 0x50) = fVar3 * 0.0009765625;
          *(float *)(iVar40 + 0x54) = fVar6 * 0.0009765625;
          *(float *)(iVar40 + 0x58) = fVar7 * 0.0009765625;
          *(float *)(iVar40 + 0x60) = fVar8 * 0.0009765625;
          *(float *)(iVar40 + 100) = fVar9 * 0.0009765625;
          *(float *)(iVar40 + 0x68) = fVar10 * 0.0009765625;
          *(float *)(iVar40 + 0x70) = fVar11 * 0.0009765625;
          uVar20 = *(undefined4 *)(puVar23 + 0x58);
          *(float *)(iVar40 + 0x74) = fVar12 * 0.0009765625;
          *(float *)(iVar40 + 0x78) = fVar13 * 0.0009765625;
          *(undefined4 *)(iVar40 + 0x18) = uVar20;
          *(int *)(iVar40 + 0x1c) = iVar41;
          if (dVar67 < dVar61) {
            dVar61 = dVar67;
          }
          dVar67 = (double)*(float *)(puVar23 + 0x4e7);
          if (dVar61 <= dVar67) {
            dVar61 = dVar67;
          }
          fVar1 = *(float *)(puVar23 + 0x19) - fVar1;
          fVar2 = *(float *)((int)puVar23 + 0xcc) - fVar2;
          fVar3 = (float)((double)(fVar14 - *(float *)(puVar23 + 0x5a)) + dVar61);
          if ((double)SQRT(*(float *)((int)puVar23 + 0x2c4)) == dVar67) {
            *(float *)((int)puVar23 + 0xec) = fVar1 * 1e+06;
            *(float *)(puVar23 + 0x1e) = fVar2 * 1e+06;
            *(float *)((int)puVar23 + 0xf4) = fVar3 * 1e+06;
          }
          else {
            fVar6 = (float)(dVar60 / (double)SQRT(*(float *)((int)puVar23 + 0x2c4)));
            *(float *)((int)puVar23 + 0xec) = fVar1 * fVar6;
            *(float *)(puVar23 + 0x1e) = fVar2 * fVar6;
            *(float *)((int)puVar23 + 0xf4) = fVar3 * fVar6;
          }
          fVar1 = *(float *)((int)puVar23 + 0xf4);
          fVar2 = *(float *)(puVar23 + 0x1e);
          uVar29 = 1;
          *(float *)(iVar40 + 0x30) = *(float *)((int)puVar23 + 0xec) * 0.0009765625 + fVar25;
          *(float *)(iVar40 + 0x34) = fVar2 * 0.0009765625 + fVar26;
          *(float *)(iVar40 + 0x38) = (float)((double)fVar1 - dVar61) * 0.0009765625 + fVar24;
        }
      }
      else {
        uVar29 = 0;
      }
    }
    else {
      uVar29 = 0;
    }
  }
  return uVar29;
}


// 0x005e598 (0x11d0 bytes)
// strings: 00651b7c: 'CollMobysSphere: Cannot have NaN, this will blow out stack on CollLine as the line goes on forever.'

/* WARNING: Removing unreachable block (ram,0x0005f594) */
/* WARNING: Removing unreachable block (ram,0x0005f10c) */
/* WARNING: Removing unreachable block (ram,0x0005ed68) */
/* WARNING: Removing unreachable block (ram,0x0005f2b4) */
/* WARNING: Removing unreachable block (ram,0x0005ef78) */
/* WARNING: Removing unreachable block (ram,0x0005f63c) */
/* WARNING: Removing unreachable block (ram,0x0005f680) */
/* WARNING: Removing unreachable block (ram,0x0005f68c) */
/* WARNING: Removing unreachable block (ram,0x0005f694) */
/* WARNING: Removing unreachable block (ram,0x0005f6a8) */
/* WARNING: Removing unreachable block (ram,0x0005f6b4) */
/* WARNING: Removing unreachable block (ram,0x0005f6c4) */
/* WARNING: Restarted to delay deadcode elimination for space: stack */
/* [collision] CollMobySphere: sphere vs moby collision only (prims + mesh), feeds Coll_AddDamage
   for damage queries. */

undefined8
CollMobySphere
          (double param_1,float *param_2,undefined8 param_3,uint param_4,MobyInstance *param_5)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  byte bVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  uint uVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  int iVar17;
  int iVar19;
  int iVar20;
  ulonglong uVar18;
  undefined *puVar21;
  float *pfVar22;
  int iVar23;
  int iVar24;
  int iVar25;
  float *pfVar26;
  uint uVar27;
  ushort uVar28;
  short *psVar29;
  int iVar30;
  int iVar31;
  MobyInstance *pMVar32;
  float *pfVar33;
  ushort *puVar34;
  double dVar35;
  double dVar36;
  double dVar37;
  double dVar38;
  double dVar39;
  double dVar40;
  double dVar41;
  double dVar42;
  double dVar43;
  double dVar44;
  double dVar45;
  double dVar46;
  double dVar47;
  double dVar48;
  double dVar49;
  double dVar50;
  double dVar51;
  double dVar52;
  double dVar53;
  double dVar54;
  float fStack_14c4;
  float fStack_14bc;
  float fStack_14b4;
  undefined4 uStack_14ac;
  int local_1460;
  int local_145c;
  GPiece<4> local_1458;
  GPiece<4> local_1454;
  GPiece<4> local_1450;
  GPiece<324> local_144c;
  GPiece<360> local_1308;
  GPiece<1024> auStack_11a0;
  float local_da0 [778];
  longlong local_178;
  longlong local_170;
  
  iVar19 = FUN_005dd48c(local_144c);
  if (((iVar19 == 2) || (iVar19 = FUN_005dd48c(local_1450), iVar19 == 2)) ||
     (iVar19 = FUN_005dd48c(local_1454), iVar19 == 2)) {
    FUN_004ff98c(
                "CollMobysSphere: Cannot have NaN, this will blow out stack on CollLine as the line goes on forever."
                );
  }
  else {
    dVar37 = (double)*param_2;
    dVar38 = (double)param_2[1];
    dVar39 = (double)param_2[2];
    fVar2 = (float)(dVar37 * 1024.0);
    fVar3 = (float)(dVar38 * 1024.0);
    fVar4 = (float)(dVar39 * 1024.0);
    fVar5 = (float)(param_1 * 1024.0);
    dVar54 = 0.0;
    if (((((0.0 <= (float)(dVar37 - param_1)) && (0.0 <= (float)(dVar38 - param_1))) &&
         ((0.0 <= (float)(dVar39 - param_1) &&
          (((float)(dVar37 + param_1) <= 1024.0 && ((float)(dVar38 + param_1) <= 1024.0)))))) &&
        ((float)(dVar39 + param_1) <= 1024.0)) && (-1 < g_CollOutput.collCount)) {
      g_CollOutput.collCount = g_CollOutput.collCount + 1;
      if (0.0 < fVar5) {
        iVar19 = (int)(dVar37 - param_1) >> 4;
        for (iVar24 = (int)(dVar38 - param_1) >> 4; iVar24 < ((int)(dVar38 + param_1) >> 4) + 1;
            iVar24 = iVar24 + 1) {
          iVar20 = ((int)(dVar37 + param_1) >> 4) + 1;
          if (iVar19 < iVar20) {
            dVar39 = 1024.0;
            local_170 = (longlong)iVar19 << 2;
            dVar52 = (double)fVar5;
            local_178 = (longlong)iVar19;
            do {
              iVar17 = (int)local_170;
              iVar30 = 0;
              psVar29 = (short *)(&g_MobyGridLists +
                                 *(short *)((int)&g_MobyGrid[iVar24 * 0x40].listStart + iVar17) * 8)
              ;
              if ((&g_MobyGrid[iVar24 * 0x40].count)[iVar17] != '\0') {
                do {
                  pMVar32 = g_MobyInstance + *psVar29;
                  if ((((pMVar32 != param_5) &&
                       (puVar34 = pMVar32->collision, puVar34 != (ushort *)0x0)) &&
                      (pMVar32->collQueryStamp != g_CollOutput.collCount)) &&
                     (fVar6 = (pMVar32->bSphere).x - fVar2, fVar7 = (pMVar32->bSphere).y - fVar3,
                     fVar9 = (pMVar32->bSphere).z - fVar4,
                     fVar1 = (float)(dVar52 + (double)(pMVar32->bSphere).rad),
                     fVar6 * fVar6 + fVar7 * fVar7 + fVar9 * fVar9 <= fVar1 * fVar1)) {
                    uVar13 = *(uint *)(puVar34 + 2);
                    iVar31 = ((int)uVar13 >> 5) + (uint)((int)uVar13 < 0 && (uVar13 & 0x1f) != 0);
                    if ((param_4 & 4) == 0) {
                      uVar28 = puVar34[1];
                    }
                    else {
                      uVar28 = *puVar34;
                    }
                    pMVar32->collQueryStamp = g_CollOutput.collCount;
                    puVar21 = (undefined *)0x0;
                    uVar13 = *(uint *)(pMVar32->collision + 6);
                    if (uVar28 != 0) {
                      if (uVar13 == ((param_4 & 2) == 0)) goto LAB_0005f5d8;
                      uVar18 = 0;
                      do {
                        if (*(int *)(&MobyClassRef + (int)((uVar18 & 0xffffffff) << 3)) ==
                            pMVar32->field71_0xa8) {
                          puVar21 = &g_CollMobyJointCache + (int)uVar18 * 0x7fc;
                          goto LAB_0005ea60;
                        }
                        uVar18 = uVar18 + 1;
                      } while ((int)uVar18 < 8);
                      iVar25 = g_CollOutput.padding[2] * 8;
                      uVar27 = g_CollOutput.padding[2] + 1;
                      puVar21 = &g_CollMobyJointCache + g_CollOutput.padding[2] * 0x7fc;
                      g_CollOutput.padding[2] =
                           uVar27 + (((int)uVar27 >> 3) +
                                    (uint)((int)uVar27 < 0 && (uVar27 & 7) != 0)) * -8;
                      *(int *)(&MobyClassRef + iVar25) = pMVar32->field71_0xa8;
                      *(int *)(iVar25 + 0xa109c4) = g_CollOutput.collCount;
                      Moby_BuildJointMatrices(pMVar32,uVar28,puVar21);
                    }
LAB_0005ea60:
                    fVar9 = (pMVar32->transform).v0.x;
                    fVar10 = (pMVar32->transform).v0.y;
                    fVar11 = (pMVar32->transform).v0.z;
                    dVar40 = (double)(pMVar32->transform).v1.x;
                    dVar41 = (double)(pMVar32->transform).v1.y;
                    dVar42 = (double)(pMVar32->transform).v1.z;
                    fVar1 = (float)((double)(pMVar32->pos).x * dVar39);
                    fVar6 = (float)((double)(pMVar32->pos).y * dVar39);
                    dVar43 = (double)(pMVar32->transform).v2.x;
                    fVar7 = (float)((double)(pMVar32->pos).z * dVar39);
                    dVar44 = (double)(pMVar32->transform).v2.y;
                    dVar45 = (double)(pMVar32->transform).v2.z;
                    if (uVar13 != 0) {
                      iVar25 = 0x100;
                      fStack_14c4 = (float)((double)(fVar3 - fVar6) - dVar52);
                      fStack_14b4 = (float)((double)(fVar3 - fVar6) + dVar52);
                      pfVar33 = local_da0;
                      do {
                        iVar25 = iVar25 + -1;
                        *pfVar33 = (float)dVar54;
                        pfVar33[1] = (float)dVar54;
                        pfVar33[2] = (float)dVar54;
                        pfVar33 = pfVar33 + 3;
                      } while (iVar25 != 0);
                      dVar35 = (double)pMVar32->scale;
                      dVar36 = dVar40 * dVar35;
                      CollMoby_TransformVerts
                                (pMVar32,CONCAT44((float)((double)(fVar2 - fVar1) - dVar52),
                                                  fStack_14c4),
                                 CONCAT44((float)((double)(fVar4 - fVar7) - dVar52),fStack_14bc),
                                 CONCAT44((float)((double)(fVar2 - fVar1) + dVar52),fStack_14b4),
                                 CONCAT44((float)((double)(fVar4 - fVar7) + dVar52),uStack_14ac),
                                 CONCAT44((float)((double)fVar9 * dVar35),
                                          (float)((double)fVar10 * dVar35)),
                                 CONCAT44((float)((double)fVar11 * dVar35),(float)dVar36),
                                 CONCAT44((float)(dVar41 * dVar35),(float)(dVar42 * dVar35)));
                      iVar25 = 0;
                      if (0 < local_145c) {
                        do {
                          CollSphereVsTri(local_1460 + iVar25 * 4,local_da0,auStack_11a0,local_1308,
                                          uVar13,CONCAT44(fVar1,fVar6),CONCAT44(fVar7,(float)dVar36)
                                          ,param_4);
                          iVar25 = iVar25 + 1;
                        } while (iVar25 < local_145c);
                      }
                    }
                    if ((param_4 & 2) == 0) {
                      puVar34 = pMVar32->collision + 8;
                      iVar25 = 0;
                      pfVar33 = pMVar32->collisionMesh;
                      if (0 < iVar31) {
                        do {
                          uVar13 = (uint)pfVar33 & 1;
                          bVar8 = *(byte *)puVar34;
                          pfVar33 = (float *)((int)pfVar33 >> 1);
                          if ((uVar13 == 0) &&
                             (((int)(short)puVar34[1] & ((param_4 & 4) == 0) + 1) != 0)) {
                            if (bVar8 < 2) {
                              if (bVar8 == 0) {
LAB_0005f2d4:
                                pfVar22 = (float *)(puVar21 +
                                                   (int)((longlong)(short)puVar34[2] << 4));
                                pfVar26 = (float *)(puVar21 +
                                                   (int)((longlong)(short)puVar34[3] << 4));
                                fVar12 = pMVar32->scale;
                                fVar14 = *pfVar22 * 1024.0 * fVar12;
                                dVar52 = (double)(pfVar22[1] * 1024.0 * fVar12);
                                fVar15 = *pfVar26 * 1024.0 * fVar12;
                                dVar36 = (double)(pfVar26[1] * 1024.0 * fVar12);
                                dVar35 = (double)(pfVar22[2] * 1024.0 * fVar12);
                                dVar39 = (double)(pfVar26[2] * 1024.0 * fVar12);
                                dVar46 = (double)(*(float *)(puVar34 + 6) * fVar12);
                                dVar47 = (double)(fVar9 * fVar14 + (float)(dVar40 * dVar52) +
                                                  (float)(dVar43 * dVar35) + fVar1);
                                dVar48 = (double)(fVar10 * fVar14 + (float)(dVar41 * dVar52) +
                                                  (float)(dVar44 * dVar35) + fVar6);
                                dVar52 = (double)(fVar11 * fVar14 + (float)(dVar42 * dVar52) +
                                                  (float)(dVar45 * dVar35) + fVar7);
                                dVar50 = (double)(float)((double)(fVar9 * fVar15 +
                                                                  (float)(dVar40 * dVar36) +
                                                                  (float)(dVar43 * dVar39) + fVar1)
                                                        - dVar47);
                                dVar51 = (double)(float)((double)(fVar10 * fVar15 +
                                                                  (float)(dVar41 * dVar36) +
                                                                  (float)(dVar44 * dVar39) + fVar6)
                                                        - dVar48);
                                dVar53 = (double)(float)((double)(fVar11 * fVar15 +
                                                                  (float)(dVar42 * dVar36) +
                                                                  (float)(dVar45 * dVar39) + fVar7)
                                                        - dVar52);
                                dVar36 = (double)fVar2;
                                dVar35 = (double)fVar3;
                                dVar49 = (double)fVar4;
                                dVar39 = (double)(((float)((double)(float)(dVar36 - dVar47) * dVar50
                                                          ) +
                                                   (float)((double)(float)(dVar35 - dVar48) * dVar51
                                                          ) +
                                                  (float)((double)(float)(dVar49 - dVar52) * dVar53)
                                                  ) / ((float)(dVar50 * dVar50) +
                                                       (float)(dVar51 * dVar51) +
                                                      (float)(dVar53 * dVar53)));
                                iVar23 = FUN_005dd48c(local_1458);
                                if (iVar23 == 2) {
                                  dVar39 = dVar54;
                                }
                                if (dVar39 <= dVar54) {
                                  dVar39 = dVar54;
                                }
                                if (1.0 <= dVar39) {
                                  dVar39 = 1.0;
                                }
                                fStack_14bc = (float)(dVar48 + (double)(float)(dVar51 * dVar39));
                                CollSphereVsSphere((double)fVar5,dVar46,
                                                   CONCAT44((float)dVar36,(float)dVar35),
                                                   CONCAT44((float)dVar49,fStack_14c4),
                                                   CONCAT44((float)(dVar47 + (double)(float)(dVar50 
                                                  * dVar39)),fStack_14bc),
                                                  CONCAT44((float)(dVar52 + (double)(float)(dVar53 *
                                                                                           dVar39)),
                                                           fStack_14b4));
                                dVar39 = 1024.0;
                              }
                              else {
                                fVar12 = pMVar32->scale;
                                fVar14 = *(float *)(puVar34 + 8) * fVar12;
                                dVar36 = (double)(*(float *)(puVar34 + 10) * fVar12);
                                dVar35 = (double)(*(float *)(puVar34 + 0xc) * fVar12);
                                fStack_14bc = fVar10 * fVar14 + (float)(dVar41 * dVar36) +
                                              (float)(dVar44 * dVar35) + fVar6;
                                CollSphereVsSphere(dVar52,(double)(*(float *)(puVar34 + 0xe) *
                                                                  fVar12),CONCAT44(fVar2,fVar3),
                                                   CONCAT44(fVar4,fStack_14c4),
                                                   CONCAT44(fVar9 * fVar14 +
                                                            (float)(dVar40 * dVar36) +
                                                            (float)(dVar43 * dVar35) + fVar1,
                                                            fStack_14bc),
                                                   CONCAT44(fVar11 * fVar14 +
                                                            (float)(dVar42 * dVar36) +
                                                            (float)(dVar45 * dVar35) + fVar7,
                                                            fStack_14b4));
                              }
                            }
                            else if (bVar8 < 3) {
                              pfVar22 = (float *)(puVar21 + *(int *)(puVar34 + 2) * 0x10);
                              fVar12 = pMVar32->scale;
                              fVar14 = ((float)((double)*pfVar22 * dVar39) + *(float *)(puVar34 + 8)
                                       ) * fVar12;
                              dVar36 = (double)(((float)((double)pfVar22[1] * dVar39) +
                                                *(float *)(puVar34 + 10)) * fVar12);
                              dVar35 = (double)(((float)((double)pfVar22[2] * dVar39) +
                                                *(float *)(puVar34 + 0xc)) * fVar12);
                              fStack_14bc = fVar10 * fVar14 + (float)(dVar41 * dVar36) +
                                            (float)(dVar44 * dVar35) + fVar6;
                              CollSphereVsSphere(dVar52,(double)(*(float *)(puVar34 + 6) * fVar12),
                                                 CONCAT44(fVar2,fVar3),CONCAT44(fVar4,fStack_14c4),
                                                 CONCAT44(fVar9 * fVar14 + (float)(dVar40 * dVar36)
                                                          + (float)(dVar43 * dVar35) + fVar1,
                                                          fStack_14bc),
                                                 CONCAT44(fVar11 * fVar14 + (float)(dVar42 * dVar36)
                                                          + (float)(dVar45 * dVar35) + fVar7,
                                                          fStack_14b4));
                            }
                            else {
                              if (3 < bVar8) goto LAB_0005f2d4;
                              fVar12 = pMVar32->scale;
                              fVar14 = *(float *)(puVar34 + 8) * fVar12;
                              dVar36 = (double)(*(float *)(puVar34 + 10) * fVar12);
                              dVar35 = (double)(*(float *)(puVar34 + 0xc) * fVar12);
                              fVar15 = fVar11 * fVar14 + (float)(dVar42 * dVar36) +
                                       (float)(dVar45 * dVar35) + fVar7;
                              fStack_14bc = fVar10 * fVar14 + (float)(dVar41 * dVar36) +
                                            (float)(dVar44 * dVar35) + fVar6;
                              fVar16 = fVar15;
                              if (fVar15 < fVar4) {
                                fVar16 = fVar4;
                              }
                              fVar15 = fVar15 + *(float *)(puVar34 + 2) * fVar12;
                              if (fVar15 < fVar16) {
                                fVar16 = fVar15;
                              }
                              CollSphereVsSphere(dVar52,(double)(*(float *)(puVar34 + 0xe) * fVar12)
                                                 ,CONCAT44(fVar2,fVar3),CONCAT44(fVar4,fStack_14c4),
                                                 CONCAT44(fVar9 * fVar14 + (float)(dVar40 * dVar36)
                                                          + (float)(dVar43 * dVar35) + fVar1,
                                                          fStack_14bc),CONCAT44(fVar16,fStack_14b4))
                              ;
                            }
                            dVar52 = (double)fVar5;
                          }
                          iVar25 = iVar25 + 1;
                          puVar34 = puVar34 + 0x10;
                        } while (iVar25 < iVar31);
                      }
                    }
                  }
LAB_0005f5d8:
                  iVar30 = iVar30 + 1;
                  psVar29 = psVar29 + 1;
                } while (iVar30 < (int)(uint)(byte)(&g_MobyGrid[iVar24 * 0x40].count)[iVar17]);
              }
              local_170 = local_170 + 4;
              local_178 = local_178 + 1;
            } while ((int)local_178 < iVar20);
          }
        }
      }
    }
  }
  return 0;
}


// 0x005f780 (0xfb8 bytes)
/* [collision] Hero-only collision (u16 coords = world*64). Culls each HeroCollCell by its bsphere
   then tests tris. Only caller Hero_ResolveCollision, so camera/mobys never see it. */

bool CollHeroSphere(double param_1,float *param_2)

{
  longlong lVar1;
  bool bVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  byte bVar10;
  byte bVar11;
  byte bVar12;
  float fVar13;
  float fVar14;
  ushort uVar15;
  ushort uVar16;
  undefined4 uVar17;
  GPiece<16> auVar18;
  ulonglong *puVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  HeroCollCell *pHVar27;
  HeroCollHeader *pHVar28;
  ulonglong uVar29;
  longlong lVar30;
  int iVar32;
  int iVar33;
  int iVar34;
  float *pfVar35;
  ushort *puVar36;
  byte *pbVar37;
  int iVar38;
  longlong lVar39;
  longlong lVar40;
  ulonglong unaff_r21;
  ulonglong unaff_r22;
  ulonglong unaff_r23;
  ulonglong unaff_r24;
  ulonglong unaff_r25;
  longlong lVar41;
  ulonglong unaff_r26;
  ulonglong unaff_r27;
  ulonglong unaff_r28;
  ulonglong unaff_r29;
  ulonglong unaff_r30;
  ulonglong uVar42;
  ulonglong unaff_r31;
  longlong lVar43;
  double dVar44;
  double dVar45;
  double dVar46;
  double dVar47;
  ulonglong uVar48;
  double dVar49;
  double dVar50;
  double dVar51;
  double dVar52;
  double dVar53;
  double dVar54;
  double dVar55;
  ulonglong in_f15;
  ulonglong in_f16;
  ulonglong in_f17;
  ulonglong in_f18;
  ulonglong in_f19;
  ulonglong in_f20;
  ulonglong in_f21;
  double dVar56;
  ulonglong in_f22;
  double dVar57;
  ulonglong in_f23;
  double dVar58;
  ulonglong in_f24;
  double dVar59;
  ulonglong in_f25;
  double dVar60;
  ulonglong in_f26;
  double dVar61;
  ulonglong in_f27;
  double dVar62;
  ulonglong in_f28;
  ulonglong in_f29;
  ulonglong in_f30;
  ulonglong in_f31;
  GPiece<16> auVar63;
  GPiece<16> auVar64;
  GPiece<16> auVar65;
  int iVar31;
  
  uVar29 = ZEXT48(&stack0x00000000);
  lVar1 = uVar29 - 0x1510;
  puVar19 = (ulonglong *)lVar1;
  *puVar19 = uVar29;
  puVar19[0x291] = in_f15;
  puVar19[0x292] = in_f16;
  puVar19[0x293] = in_f17;
  puVar19[0x294] = in_f18;
  puVar19[0x295] = in_f19;
  puVar19[0x296] = in_f20;
  puVar19[0x297] = in_f21;
  puVar19[0x298] = in_f22;
  puVar19[0x299] = in_f23;
  puVar19[0x29a] = in_f24;
  puVar19[0x29b] = in_f25;
  puVar19[0x29c] = in_f26;
  puVar19[0x29d] = in_f27;
  puVar19[0x29e] = in_f28;
  puVar19[0x29f] = in_f29;
  puVar19[0x2a0] = in_f30;
  puVar19[0x2a1] = in_f31;
  puVar19[0x28d] = unaff_r28;
  fVar13 = *param_2;
  puVar19[0x28c] = unaff_r27;
  fVar3 = (float)(param_1 * 64.0);
  fVar5 = param_2[1] * 64.0;
  fVar4 = param_2[2] * 64.0;
  iVar32 = 0;
  iVar33 = 0;
  *(undefined4 *)(puVar19 + 0x278) = 0;
  *(undefined4 *)((int)puVar19 + 0x13e4) = 0;
  *(undefined4 *)(puVar19 + 0x281) = 0;
  *(undefined4 *)(puVar19 + 0x27c) = 0;
  *(undefined4 *)((int)puVar19 + 0x1404) = 0;
  *(float *)(puVar19 + 0x282) = fVar3;
  *(undefined4 *)(puVar19 + 0x280) = 0;
  *(undefined4 *)((int)puVar19 + 0x13fc) = 0;
  *(undefined4 *)((int)puVar19 + 0x13cc) = 0;
  *(undefined4 *)(puVar19 + 0x279) = 0;
  *(undefined4 *)(puVar19 + 0x27f) = 0;
  *(undefined4 *)((int)puVar19 + 0x13c4) = 0;
  *(undefined4 *)((int)puVar19 + 0x13f4) = 0;
  *(undefined4 *)(puVar19 + 0x27e) = 0;
  *(undefined4 *)((int)puVar19 + 0x13ec) = 0;
  *(undefined4 *)((int)puVar19 + 0x140c) = 0;
  *(float *)((int)puVar19 + 0x34) = fVar5 - fVar3;
  *(undefined4 *)(puVar19 + 0x27d) = 0;
  *(float *)(puVar19 + 7) = fVar4 - fVar3;
  *(float *)(puVar19 + 0x27a) = fVar3 * fVar3;
  pHVar28 = g_HeroCollision;
  lVar30 = 0;
  iVar31 = 0;
  *(float *)(puVar19 + 8) = fVar5 + fVar3;
  *(float *)((int)puVar19 + 0x44) = fVar4 + fVar3;
  iVar34 = pHVar28->cellCount;
  puVar19[0x290] = unaff_r31;
  puVar19[0x28f] = unaff_r30;
  puVar19[0x28e] = unaff_r29;
  puVar19[0x28b] = unaff_r26;
  puVar19[0x28a] = unaff_r25;
  puVar19[0x289] = unaff_r24;
  puVar19[0x288] = unaff_r23;
  puVar19[0x287] = unaff_r22;
  puVar19[0x286] = unaff_r21;
  if (0 < iVar34) {
    iVar34 = 0;
    fVar3 = *(float *)(puVar19 + 0x282);
    do {
      pHVar28 = g_HeroCollision;
      puVar36 = (ushort *)((int)&g_HeroCollision->cells[0].bsphereX + iVar34);
      pHVar27 = g_HeroCollision->cells;
      puVar19[0x283] = (ulonglong)*puVar36;
      uVar15 = *(ushort *)((int)&pHVar28->cells[0].bsphereZ + iVar34);
      uVar48 = puVar19[0x283];
      puVar19[0x283] = (ulonglong)*(ushort *)((int)&pHVar27->bsphereY + iVar34);
      fVar6 = (float)(longlong)uVar48 - fVar13 * 64.0;
      uVar48 = puVar19[0x283];
      puVar19[0x283] = (ulonglong)uVar15;
      *(float *)(puVar19 + 0x272) = fVar6;
      *(float *)((int)puVar19 + 0x1394) = fVar6;
      *(float *)(puVar19 + 0x273) = fVar6;
      *(float *)((int)puVar19 + 0x139c) = fVar6;
      auVar65 = auRam00000000 >> 0x60 & (GPiece<16>)0xffffffff;
      fVar8 = (float)(longlong)uVar48 - fVar5;
      *(float *)(puVar19 + 0x272) = fVar8;
      *(float *)((int)puVar19 + 0x1394) = fVar8;
      *(float *)(puVar19 + 0x273) = fVar8;
      *(float *)((int)puVar19 + 0x139c) = fVar8;
      fVar7 = (float)(longlong)puVar19[0x283] - fVar4;
      auVar64 = auRam00000000 >> 0x60 & (GPiece<16>)0xffffffff;
      *(float *)(puVar19 + 0x272) = fVar7;
      *(float *)((int)puVar19 + 0x1394) = fVar7;
      *(float *)(puVar19 + 0x273) = fVar7;
      uVar15 = *(ushort *)((int)&pHVar28->cells[0].bsphereRad + iVar34);
      *(float *)((int)puVar19 + 0x139c) = fVar7;
      auVar18 = auRam00000000 >> 0x60 & (GPiece<16>)0xffffffff;
      puVar19[0x283] = (ulonglong)uVar15;
      uVar48 = puVar19[0x283];
      lVar39 = uVar29 - 0x14c8;
      uVar17 = storeVectorElementWordIndexed
                         (auVar65 | auVar65 << 0x20 | auVar65 << 0x40 | auVar65 << 0x60,0,lVar39);
      *(undefined4 *)lVar39 = uVar17;
      auVar65 = SPLAT(auVar64) >> 0x60 &
                (GPiece<16>)0xffffffff;
      auVar64 = SPLAT(auVar18) >> 0x60 &
                (GPiece<16>)0xffffffff;
      storeVectorElementWordIndexed
                (auVar65 | auVar65 << 0x20 | auVar65 << 0x40 | auVar65 << 0x60,4,lVar39);
      auVar65 = SPLAT(auVar64) >> 0x60 &
                (GPiece<16>)0xffffffff;
      storeVectorElementWordIndexed
                (auVar65 | auVar65 << 0x20 | auVar65 << 0x40 | auVar65 << 0x60,8,lVar39);
      if (fVar6 * fVar6 + fVar8 * fVar8 + fVar7 * fVar7 <=
          (fVar3 + (float)(longlong)uVar48) * (fVar3 + (float)(longlong)uVar48)) {
        lVar39 = lVar30 << 2;
        lVar30 = lVar30 + 1;
        *(ushort **)((int)puVar19 + (int)lVar39 + 0x180) = puVar36;
      }
      iVar31 = (int)lVar30;
      iVar33 = iVar33 + 1;
      iVar34 = iVar34 + 0x10;
    } while (iVar33 < g_HeroCollision->cellCount);
  }
  iVar34 = 0;
  *(float *)((int)puVar19 + 0x13dc) = fVar13 * 64.0;
  *(float *)(puVar19 + 0x27b) = fVar5;
  *(float *)((int)puVar19 + 0x13d4) = fVar4;
  if (0 < iVar31) {
    fVar3 = *(float *)(puVar19 + 0x278);
    lVar30 = lVar1;
    iVar32 = 0;
    do {
      lVar39 = uVar29 - 0xd90;
      iVar38 = 0x100;
      iVar33 = *(int *)((int)lVar30 + 0x180);
      do {
        iVar38 = iVar38 + -1;
        pfVar35 = (float *)lVar39;
        *pfVar35 = fVar3;
        pfVar35[1] = fVar3;
        pfVar35[2] = fVar3;
        lVar39 = lVar39 + 0xc;
      } while (iVar38 != 0);
      puVar36 = *(ushort **)(iVar33 + 0xc);
      iVar38 = 0;
      lVar39 = lVar1;
      lVar41 = lVar1;
      if (*(short *)(iVar33 + 10) != 0) {
        do {
          uVar15 = puVar36[1];
          uVar16 = puVar36[2];
          puVar19[0x283] = (longlong)(int)(uint)*puVar36;
          *(uint *)(puVar19 + 0xb) = (uint)uVar15;
          *(uint *)((int)puVar19 + 0x5c) = (uint)uVar16;
          fVar13 = (float)(longlong)puVar19[0x283];
          *(float *)(puVar19 + 0x272) = fVar13;
          *(float *)((int)puVar19 + 0x1394) = fVar13;
          *(float *)(puVar19 + 0x273) = fVar13;
          *(float *)((int)puVar19 + 0x139c) = fVar13;
          auVar65 = auRam00000000 >> 0x60 & (GPiece<16>)0xffffffff;
          puVar19[0x283] = (longlong)(int)(uint)uVar15;
          fVar4 = (float)(longlong)puVar19[0x283];
          *(float *)(puVar19 + 0x272) = fVar4;
          *(float *)((int)puVar19 + 0x1394) = fVar4;
          *(float *)(puVar19 + 0x273) = fVar4;
          *(float *)((int)puVar19 + 0x139c) = fVar4;
          auVar64 = auRam00000000 >> 0x60 & (GPiece<16>)0xffffffff;
          puVar19[0x283] = (longlong)(int)(uint)uVar16;
          fVar5 = (float)(longlong)puVar19[0x283];
          *(float *)(puVar19 + 0x272) = fVar5;
          *(float *)((int)puVar19 + 0x1394) = fVar5;
          *(float *)(puVar19 + 0x273) = fVar5;
          *(float *)((int)puVar19 + 0x139c) = fVar5;
          auVar18 = auRam00000000 >> 0x60 & (GPiece<16>)0xffffffff;
          bVar2 = *(float *)((int)puVar19 + 0x44) < fVar5;
          auVar63 = auVar65 | auVar65 << 0x20 | auVar65 << 0x40 | auVar65 << 0x60;
          auVar65 = SPLAT(auVar64) >> 0x60 &
                    (GPiece<16>)0xffffffff;
          auVar64 = auVar65 | auVar65 << 0x20 | auVar65 << 0x40 | auVar65 << 0x60;
          auVar65 = SPLAT(auVar18) >> 0x60 &
                    (GPiece<16>)0xffffffff;
          auVar65 = auVar65 | auVar65 << 0x20 | auVar65 << 0x40 | auVar65 << 0x60;
          uVar42 = (ulonglong)(*(float *)(puVar19 + 8) < fVar4) << 1 |
                   (ulonglong)(fVar4 < *(float *)((int)puVar19 + 0x34));
          uVar48 = (ulonglong)bVar2 << 1 | (ulonglong)(fVar5 < *(float *)(puVar19 + 7));
          *(uint *)(puVar19 + 0xe) = (uint)(*(float *)(puVar19 + 8) < fVar4) << 1;
          *(uint *)((int)puVar19 + 0x74) = (uint)bVar2 << 1;
          lVar40 = uVar29 - 0x1498;
          *(int *)((int)puVar19 + 100) = (int)uVar42;
          *(int *)(puVar19 + 0xd) = (int)uVar48;
          iVar38 = iVar38 + 1;
          *(char *)(puVar19 + 0x270) =
               (*(float *)((int)puVar19 + 0x3c) < fVar13) << 1 | fVar13 < *(float *)(puVar19 + 6);
          puVar36 = puVar36 + 4;
          *(char *)((int)puVar19 + 0x1381) = (char)uVar42;
          lVar43 = lVar41 + 0x780;
          *(char *)((int)puVar19 + 0x1382) = (char)uVar48;
          *(undefined1 *)((int)puVar19 + 0x1383) = 0;
          uVar17 = storeVectorElementWordIndexed(auVar63,0,lVar40);
          *(undefined4 *)lVar40 = uVar17;
          storeVectorElementWordIndexed(auVar64,4,lVar40);
          storeVectorElementWordIndexed(auVar65,8,lVar40);
          uVar17 = storeVectorElementWordIndexed(auVar63,0,lVar43);
          *(undefined4 *)lVar43 = uVar17;
          uVar17 = storeVectorElementWordIndexed(auVar64,4,lVar43);
          *(undefined4 *)((int)lVar41 + 0x784) = uVar17;
          uVar17 = storeVectorElementWordIndexed(auVar65,8,lVar43);
          *(undefined4 *)((int)lVar41 + 0x788) = uVar17;
          uVar15 = *(ushort *)(iVar33 + 10);
          *(undefined4 *)((int)lVar39 + 0x380) = *(undefined4 *)(puVar19 + 0x270);
          lVar39 = lVar39 + 4;
          lVar41 = lVar41 + 0xc;
        } while (iVar38 < (int)(uint)uVar15);
      }
      iVar38 = 0;
      pbVar37 = (byte *)((uint)*(ushort *)(iVar33 + 10) * 8 + *(int *)(iVar33 + 0xc));
      if (*(short *)(iVar33 + 8) != 0) {
        do {
          bVar10 = *pbVar37;
          bVar11 = pbVar37[1];
          bVar12 = pbVar37[2];
          dVar55 = (double)*(float *)((int)puVar19 + (uint)bVar10 * 0xc + 0x780);
          dVar53 = (double)*(float *)((int)puVar19 + (uint)bVar10 * 0xc + 0x784);
          dVar51 = (double)*(float *)((int)puVar19 + (uint)bVar10 * 0xc + 0x788);
          if ((*(uint *)((int)puVar19 + (uint)bVar10 * 4 + 0x380) &
               *(uint *)((int)puVar19 + (uint)bVar11 * 4 + 0x380) &
              *(uint *)((int)puVar19 + (uint)bVar12 * 4 + 0x380)) == 0) {
            dVar59 = (double)(float)((double)*(float *)((int)puVar19 + (uint)bVar11 * 0xc + 0x780) -
                                    dVar55);
            fVar13 = (float)((double)*(float *)((int)puVar19 + (uint)bVar11 * 0xc + 0x784) - dVar53)
            ;
            dVar60 = (double)fVar13;
            fVar4 = (float)((double)*(float *)((int)puVar19 + (uint)bVar11 * 0xc + 0x788) - dVar51);
            dVar61 = (double)fVar4;
            dVar56 = (double)(float)((double)*(float *)((int)puVar19 + (uint)bVar12 * 0xc + 0x780) -
                                    dVar55);
            fVar5 = (float)((double)*(float *)((int)puVar19 + (uint)bVar12 * 0xc + 0x784) - dVar53);
            dVar57 = (double)fVar5;
            fVar6 = (float)((double)*(float *)((int)puVar19 + (uint)bVar12 * 0xc + 0x788) - dVar51);
            dVar58 = (double)fVar6;
            fVar7 = (float)((double)*(float *)((int)puVar19 + 0x13dc) - dVar55);
            fVar8 = (float)((double)*(float *)(puVar19 + 0x27b) - dVar53);
            puVar19[0x277] = (ulonglong)dVar55;
            puVar19[0x276] = (ulonglong)dVar53;
            fVar9 = (float)((double)*(float *)((int)puVar19 + 0x13d4) - dVar51);
            puVar19[0x275] = (ulonglong)dVar51;
            *(float *)((int)puVar19 + 0xc4) = fVar13;
            *(float *)(puVar19 + 0x19) = fVar4;
            *(float *)(puVar19 + 0x1a) = fVar5;
            *(float *)((int)puVar19 + 0xd4) = fVar6;
            *(float *)((int)puVar19 + 0x13a4) = fVar7;
            *(float *)(puVar19 + 0x11) = fVar8;
            fVar5 = (float)(dVar57 * dVar61) - (float)(dVar58 * dVar60);
            fVar4 = (float)(dVar58 * dVar59) - (float)(dVar56 * dVar61);
            *(float *)(puVar19 + 0x274) = fVar8;
            fVar6 = (float)(dVar56 * dVar60) - (float)(dVar57 * dVar59);
            *(float *)((int)puVar19 + 0x8c) = fVar9;
            *(float *)((int)puVar19 + 0x94) = fVar4;
            *(float *)(puVar19 + 0x13) = fVar6;
            fVar7 = fVar7 * fVar5 + fVar8 * fVar4 + fVar9 * fVar6;
            fVar13 = fVar7 / (fVar5 * fVar5 + fVar4 * fVar4 + fVar6 * fVar6);
            if (fVar3 <= fVar7) {
              fVar8 = -fVar4 * fVar13;
              fVar20 = -fVar6 * fVar13;
              *(float *)((int)puVar19 + 0xf4) = -fVar4;
              *(float *)(puVar19 + 0x1f) = -fVar6;
              fVar3 = (float)(dVar57 - dVar60);
              fVar7 = (float)(dVar58 - dVar61);
              fVar22 = *(float *)((int)puVar19 + 0x13a4) + -fVar5 * fVar13;
              dVar51 = (double)fVar22;
              fVar23 = *(float *)(puVar19 + 0x274) + fVar8;
              dVar53 = (double)fVar23;
              fVar21 = fVar9 + fVar20;
              dVar55 = (double)fVar21;
              *(float *)(puVar19 + 0x1d) = fVar8;
              *(float *)((int)puVar19 + 0xec) = fVar20;
              *(float *)((int)puVar19 + 0xdc) = fVar23;
              *(float *)(puVar19 + 0x1c) = fVar21;
              fVar20 = fVar5 * fVar13 * fVar5 * fVar13 + fVar4 * fVar13 * fVar4 * fVar13 +
                       fVar6 * fVar13 * fVar6 * fVar13;
              *(float *)((int)puVar19 + 0x84) = fVar22;
              *(float *)(puVar19 + 0x11) = fVar23;
              *(float *)((int)puVar19 + 0x8c) = fVar21;
              *(float *)(puVar19 + 0x14) = fVar3;
              *(float *)((int)puVar19 + 0xa4) = fVar7;
              fVar13 = (float)(dVar53 - dVar60);
              fVar21 = (float)(dVar55 * dVar59) - (float)(dVar51 * dVar61);
              fVar8 = (float)(dVar55 - dVar61);
              fVar22 = (float)(dVar51 * dVar60) - (float)(dVar53 * dVar59);
              fVar23 = (float)(dVar58 * dVar51) - (float)(dVar56 * dVar55);
              fVar24 = (float)(dVar56 * dVar53) - (float)(dVar57 * dVar51);
              *(float *)((int)puVar19 + 0xac) = fVar13;
              *(float *)(puVar19 + 0x16) = fVar8;
              *(float *)(puVar19 + 0x20) = fVar21;
              *(float *)((int)puVar19 + 0x104) = fVar22;
              *(float *)(puVar19 + 0x17) = fVar23;
              *(float *)((int)puVar19 + 0xbc) = fVar24;
              if (fVar20 <= *(float *)(puVar19 + 0x27a)) {
                fVar25 = fVar8 * (float)(dVar56 - dVar59) - (float)(dVar51 - dVar59) * fVar7;
                fVar26 = (float)(dVar51 - dVar59) * fVar3 - fVar13 * (float)(dVar56 - dVar59);
                fVar14 = *(float *)(puVar19 + 0x278);
                *(float *)((int)puVar19 + 0x10c) = fVar25;
                *(float *)(puVar19 + 0x22) = fVar26;
                if (fVar14 <= ((float)(dVar53 * dVar61) - (float)(dVar55 * dVar60)) * fVar5 +
                              fVar21 * fVar4 + fVar22 * fVar6) {
                  dVar54 = (double)*(float *)(puVar19 + 0x278);
                  dVar44 = dVar54;
                  dVar46 = dVar54;
                  dVar45 = dVar54;
                  dVar50 = dVar57;
                  dVar52 = dVar56;
                  dVar62 = dVar58;
                  if ((((float)(dVar57 * dVar55) - (float)(dVar58 * dVar53)) * fVar5 +
                       fVar23 * fVar4 + fVar24 * fVar6 < fVar14) ||
                     (dVar44 = dVar57, dVar46 = dVar56, dVar45 = dVar58, dVar50 = dVar60,
                     dVar52 = dVar59, dVar62 = dVar61,
                     (fVar13 * fVar7 - fVar8 * fVar3) * fVar5 + fVar25 * fVar4 + fVar26 * fVar6 <
                     fVar14)) goto LAB_0006037c;
                }
                else {
                  dVar54 = (double)*(float *)(puVar19 + 0x278);
                  dVar44 = dVar60;
                  dVar46 = dVar59;
                  dVar45 = dVar61;
                  dVar50 = dVar54;
                  dVar52 = dVar54;
                  dVar62 = dVar54;
LAB_0006037c:
                  dVar49 = (double)(float)(dVar46 - dVar52);
                  dVar47 = (double)(float)(dVar44 - dVar50);
                  dVar46 = (double)(float)(dVar45 - dVar62);
                  *(float *)(puVar19 + 0x23) = (float)(dVar53 - dVar50);
                  *(float *)((int)puVar19 + 0x11c) = (float)(dVar55 - dVar62);
                  *(float *)((int)puVar19 + 0x124) = (float)(dVar44 - dVar50);
                  *(float *)(puVar19 + 0x25) = (float)(dVar45 - dVar62);
                  dVar51 = (double)(((float)((double)(float)(dVar51 - dVar52) * dVar49) +
                                     (float)((double)(float)(dVar53 - dVar50) * dVar47) +
                                    (float)((double)(float)(dVar55 - dVar62) * dVar46)) /
                                   ((float)(dVar49 * dVar49) + (float)(dVar47 * dVar47) +
                                   (float)(dVar46 * dVar46)));
                  if (1.0 < dVar51) {
                    dVar51 = 1.0;
                  }
                  if (dVar51 < dVar54) {
                    dVar51 = dVar54;
                  }
                  fVar3 = (float)(dVar52 + (double)(float)(dVar49 * dVar51));
                  fVar13 = (float)(dVar50 + (double)(float)(dVar47 * dVar51));
                  fVar4 = (float)(dVar62 + (double)(float)(dVar46 * dVar51));
                  *(float *)((int)puVar19 + 0x13c) = (float)(dVar47 * dVar51);
                  *(float *)(puVar19 + 0x28) = (float)(dVar46 * dVar51);
                  fVar6 = fVar3 - *(float *)((int)puVar19 + 0x13a4);
                  fVar7 = fVar13 - *(float *)(puVar19 + 0x274);
                  fVar5 = fVar4 - fVar9;
                  *(float *)(puVar19 + 0x26) = fVar13;
                  *(float *)((int)puVar19 + 0x134) = fVar4;
                  *(float *)((int)puVar19 + 0x84) = fVar3;
                  *(float *)(puVar19 + 0x11) = fVar13;
                  *(float *)((int)puVar19 + 0x8c) = fVar4;
                  *(float *)((int)puVar19 + 0x154) = *(float *)(puVar19 + 0x274);
                  *(float *)(puVar19 + 0x2b) = fVar9;
                  *(float *)(puVar19 + 0x29) = fVar7;
                  *(float *)((int)puVar19 + 0x14c) = fVar5;
                  fVar20 = fVar6 * fVar6 + fVar7 * fVar7 + fVar5 * fVar5;
                  if (*(float *)(puVar19 + 0x27a) < fVar20) goto LAB_00060568;
                }
                dVar51 = (double)puVar19[0x277];
                dVar53 = (double)puVar19[0x276];
                dVar55 = (double)puVar19[0x275];
                fVar3 = (float)((double)*(float *)((int)puVar19 + 0x8c) + dVar55);
                bVar10 = pbVar37[4];
                *(undefined4 *)((int)puVar19 + 0x1404) = *(undefined4 *)(puVar19 + 0x12);
                iVar32 = bVar10 + 0x1000;
                *(undefined4 *)(puVar19 + 0x280) = *(undefined4 *)((int)puVar19 + 0x94);
                *(undefined4 *)((int)puVar19 + 0x13fc) = *(undefined4 *)(puVar19 + 0x13);
                *(float *)((int)puVar19 + 0x13e4) =
                     (float)((double)*(float *)((int)puVar19 + 0x84) + dVar51);
                *(float *)(puVar19 + 0x2c) = (float)((double)*(float *)(puVar19 + 0x11) + dVar53);
                *(float *)((int)puVar19 + 0x164) = fVar3;
                *(float *)(puVar19 + 0x27a) = fVar20 * 0.9995;
                *(float *)(puVar19 + 0x281) = (float)((double)*(float *)(puVar19 + 0x11) + dVar53);
                *(float *)(puVar19 + 0x27c) = fVar3;
                *(float *)((int)puVar19 + 0x13cc) = (float)dVar51;
                *(float *)(puVar19 + 0x279) = (float)dVar53;
                *(float *)((int)puVar19 + 0x13c4) = (float)dVar55;
                *(float *)((int)puVar19 + 0x16c) = (float)(dVar53 + dVar60);
                *(float *)(puVar19 + 0x2e) = (float)(dVar55 + dVar61);
                *(float *)(puVar19 + 0x27f) = (float)(dVar51 + dVar59);
                *(float *)((int)puVar19 + 0x13f4) = (float)(dVar53 + dVar60);
                *(float *)(puVar19 + 0x27e) = (float)(dVar55 + dVar61);
                *(float *)(puVar19 + 0x2f) = (float)(dVar53 + dVar57);
                *(float *)((int)puVar19 + 0x17c) = (float)(dVar55 + dVar58);
                *(float *)(puVar19 + 0x27d) = (float)(dVar53 + dVar57);
                *(float *)((int)puVar19 + 0x13ec) = (float)(dVar51 + dVar56);
                *(float *)((int)puVar19 + 0x140c) = (float)(dVar55 + dVar58);
              }
            }
          }
LAB_00060568:
          iVar38 = iVar38 + 1;
          pbVar37 = pbVar37 + 4;
          fVar3 = *(float *)(puVar19 + 0x278);
        } while (iVar38 < (int)(uint)*(ushort *)(iVar33 + 8));
      }
      iVar34 = iVar34 + 1;
      lVar30 = lVar30 + 4;
    } while (iVar34 < iVar31);
  }
  if (iVar32 != 0) {
    fVar3 = *(float *)(puVar19 + 0x282) / *(float *)(puVar19 + 0x27a);
    g_CollOutput.normal.x = *(float *)((int)puVar19 + 0x1404);
    g_CollOutput.ip.x = *(float *)((int)puVar19 + 0x13e4) * 0.015625;
    g_CollOutput.normal.y = *(float *)(puVar19 + 0x280);
    g_CollOutput.ip.y = *(float *)(puVar19 + 0x281) * 0.015625;
    g_CollOutput.ip.z = *(float *)(puVar19 + 0x27c) * 0.015625;
    g_CollOutput.v0.x = *(float *)((int)puVar19 + 0x13cc) * 0.015625;
    g_CollOutput.v0.y = *(float *)(puVar19 + 0x279) * 0.015625;
    g_CollOutput.v0.z = *(float *)((int)puVar19 + 0x13c4) * 0.015625;
    g_CollOutput.v1.x = *(float *)(puVar19 + 0x27f) * 0.015625;
    g_CollOutput.v1.y = *(float *)((int)puVar19 + 0x13f4) * 0.015625;
    g_CollOutput.v1.z = *(float *)(puVar19 + 0x27e) * 0.015625;
    g_CollOutput.v2.x = *(float *)((int)puVar19 + 0x13ec) * 0.015625;
    g_CollOutput.normal.z = *(float *)((int)puVar19 + 0x13fc);
    g_CollOutput.v2.y = *(float *)(puVar19 + 0x27d) * 0.015625;
    g_CollOutput.v2.z = *(float *)((int)puVar19 + 0x140c) * 0.015625;
    g_CollOutput.pMoby = (MobyInstance *)0x0;
    g_CollOutput.push.x =
         (*(float *)((int)puVar19 + 0x13dc) - *(float *)((int)puVar19 + 0x13e4)) * fVar3 * 0.015625
         + *param_2;
    g_CollOutput.push.y =
         (*(float *)(puVar19 + 0x27b) - *(float *)(puVar19 + 0x281)) * fVar3 * 0.015625 + param_2[1]
    ;
    g_CollOutput.push.z =
         (*(float *)((int)puVar19 + 0x13d4) - *(float *)(puVar19 + 0x27c)) * fVar3 * 0.015625 +
         param_2[2];
    g_CollOutput.poly = iVar32;
  }
  return iVar32 != 0;
}


// 0x0060738 (0x48 bytes)
int CollGetMobyPoly(void)

{
  uint uVar1;
  
  if (g_CollOutput.pMoby == (MobyInstance *)0x0) {
    uVar1 = 0xffffffff;
  }
  else if (g_CollOutput.poly < 0) {
    uVar1 = (uint)-((int)(g_CollOutput.pMoby)->collision + g_CollOutput.poly) >> 5;
  }
  else {
    uVar1 = 0xffffffff;
  }
  return uVar1;
}


// 0x0060780 (0x34 bytes)
/* [collision] Material of last env hit: g_CollOutput.poly & 0x1f (COLL_MATERIAL), -1 if moby hit or
   COLL_DEFAULT. */

int CollHotspot(void)

{
  uint uVar1;
  
  if (g_CollOutput.poly < 0) {
    uVar1 = 0xffffffff;
  }
  else {
    uVar1 = g_CollOutput.poly & 0x1f;
    if (uVar1 == 0x1f) {
      uVar1 = 0xffffffff;
    }
  }
  return uVar1;
}


// 0x00607b4 (0x38 bytes)
/* [collision] Group bits of last env hit ((poly>>5)&3), 0 if moby hit or group==3. */

int CollSoundSurface(void)

{
  uint uVar1;
  
  if (g_CollOutput.poly < 0) {
    uVar1 = 0;
  }
  else if ((g_CollOutput.poly & 0x60U) == 0x60) {
    uVar1 = 0;
  }
  else {
    uVar1 = (uint)g_CollOutput.poly >> 5 & 3;
  }
  return uVar1;
}


// 0x0060800 (0x1e4 bytes)
undefined8 CollLineVsSphere_Out(float *param_1,float *param_2,float *param_3)

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
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  undefined8 uVar20;
  
  fVar1 = *param_1;
  fVar2 = param_1[1];
  fVar3 = *param_3;
  fVar8 = *param_2 - fVar1;
  fVar4 = param_3[1];
  fVar11 = param_2[1] - fVar2;
  fVar9 = fVar3 - fVar1;
  fVar5 = param_1[2];
  fVar12 = fVar4 - fVar2;
  fVar6 = param_3[2];
  fVar15 = param_2[2] - fVar5;
  fVar16 = fVar6 - fVar5;
  fVar17 = fVar8 * fVar8 + fVar11 * fVar11 + fVar15 * fVar15;
  fVar18 = fVar8 * fVar9 + fVar11 * fVar12 + fVar15 * fVar16;
  fVar7 = 0.0;
  fVar19 = param_3[3] * param_3[3];
  fVar14 = fVar18 / fVar17;
  if (fVar14 < 0.0) {
    fVar14 = fVar7;
  }
  if (1.0 < fVar14) {
    fVar14 = 1.0;
  }
  fVar10 = fVar3 - (fVar8 * fVar14 + fVar1);
  fVar13 = fVar4 - (fVar11 * fVar14 + fVar2);
  fVar14 = fVar6 - (fVar15 * fVar14 + fVar5);
  if ((fVar10 * fVar10 + fVar13 * fVar13 + fVar14 * fVar14) - fVar19 <= 0.0) {
    fVar18 = fVar18 * 2.0;
    fVar9 = fVar18 * fVar18 -
            fVar17 * 4.0 * ((fVar9 * fVar9 + fVar12 * fVar12 + fVar16 * fVar16) - fVar19);
    if (fVar9 < 0.0) {
      fVar9 = fVar7;
    }
    fVar9 = -((SQRT(fVar9) - fVar18) * 0.5 * fVar17);
    if (fVar9 < 0.0) {
      fVar9 = fVar7;
    }
    if (1.0 < fVar9) {
      fVar9 = 1.0;
    }
    uVar20 = 1;
    g_CollOutput.ip.x = fVar8 * fVar9 + fVar1;
    g_CollOutput.ip.y = fVar11 * fVar9 + fVar2;
    g_CollOutput.ip.z = fVar15 * fVar9 + fVar5;
    g_CollOutput.normal.x = g_CollOutput.ip.x - fVar3;
    g_CollOutput.normal.y = g_CollOutput.ip.y - fVar4;
    g_CollOutput.normal.z = g_CollOutput.ip.z - fVar6;
  }
  else {
    uVar20 = 0;
  }
  return uVar20;
}


// 0x00609e4 (0x4 bytes)
void STUB_000609e4(...)

{
  return;
}


