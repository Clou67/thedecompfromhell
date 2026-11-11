// game/update/moby1021.cpp -- reconstructed from NPEA00385 EBOOT
// STATUS: NOT STARTED (raw Ghidra output)
// 2 functions, 0x18893c-0x188fb4
#include "game/update/moby1021.h"
#include "game/hero.h"
#include "game/mobyfunc.h"
#include "game/mobyutil.h"
#include "game/sound.h"
#include "idol/fastfunc.h"

// 0x018893c (0x14 bytes)
void M1021_0018893c(void)

{
  DAT_0073f82c = 0x10000;
  return;
}


// 0x0188968 (0x64c bytes)
/* Moby 1021 */

void UpdateMoby_1021(MobyInstance *moby)

{
  byte bVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  uint uVar7;
  float *pfVar8;
  MobyInstance *pMVar10;
  ulonglong uVar9;
  int iVar11;
  int iVar12;
  float *pfVar13;
  float *pfVar14;
  longlong lVar15;
  double dVar16;
  double dVar17;
  
  bVar1 = moby->state;
  pfVar14 = (float *)moby->pVar;
  if (bVar1 < 3) {
    if (bVar1 == 0) {
      pfVar14[4] = (moby->rotation).x;
      *pfVar14 = (moby->pos).x;
      iVar11 = 0;
      pfVar14[1] = (moby->pos).y;
      iVar12 = 0;
      pfVar14[2] = (moby->pos).z;
      pfVar14[3] = (moby->pos).w;
      moby->state = '\x02';
      dVar17 = 0.01745329238474369;
      do {
        pMVar10 = CreateMoby(CIRCULAR_DOOR_PART);
        pfVar14[9] = (float)pMVar10;
        iVar12 = iVar12 + 0x2d;
        pMVar10->updateDistance = '@';
        *(undefined2 *)((int)pfVar14[9] + 0x32) = 0x40;
        *(undefined1 *)((int)pfVar14[9] + 0x31) = 1;
        *(undefined8 *)((int)pfVar14[9] + 0x38) = *(undefined8 *)&moby->color;
        *(MobyModeBit *)((int)pfVar14[9] + 0x34) = moby->modeBits;
        fVar6 = pfVar14[9];
        *(f32 *)((int)fVar6 + 0x10) = (moby->pos).x;
        *(f32 *)((int)fVar6 + 0x14) = (moby->pos).y;
        *(f32 *)((int)fVar6 + 0x18) = (moby->pos).z;
        *(f32 *)((int)fVar6 + 0x1c) = (moby->pos).w;
        fVar6 = pfVar14[9];
        *(f32 *)((int)fVar6 + 0x40) = (moby->rotation).x;
        *(f32 *)((int)fVar6 + 0x44) = (moby->rotation).y;
        *(f32 *)((int)fVar6 + 0x48) = (moby->rotation).z;
        *(f32 *)((int)fVar6 + 0x4c) = (moby->rotation).w;
        dVar16 = (double)FastWrapRot
                                   (*(float *)((int)pfVar14[9] + 0x40),
                                    (float)((double)(longlong)iVar12 * dVar17));
        *(float *)((int)pfVar14[9] + 0x40) = (float)dVar16;
        *(undefined1 *)((int)pfVar14[9] + 0x20) = 1;
        FastEulerToMtx
                  ((ulonglong)(uint)pfVar14[9] + 0xc0,(ulonglong)(uint)pfVar14[9] + 0x40);
        iVar11 = iVar11 + 1;
        pfVar14 = pfVar14 + 1;
      } while (iVar11 < 7);
      return;
    }
    if (bVar1 < 2) {
      pfVar14[4] = (moby->rotation).x;
      *pfVar14 = (moby->pos).x;
      pfVar14[1] = (moby->pos).y;
      pfVar14[2] = (moby->pos).z;
      pfVar14[3] = (moby->pos).w;
      fVar6 = (moby->transform).v2.y;
      fVar2 = (moby->transform).v2.x;
      fVar3 = (moby->transform).v2.z;
      moby->state = '\x03';
      fVar4 = 0.0;
      fVar5 = SQRT(fVar3 * fVar3 + fVar2 * fVar2 + fVar6 * fVar6);
      if (fVar5 == 0.0) {
        fVar5 = (moby->transform).v2.w;
        fVar2 = fVar4;
        fVar6 = fVar4;
      }
      else {
        fVar4 = DAT_0073f870 / fVar5;
        fVar5 = (moby->transform).v2.w;
        fVar2 = fVar2 * fVar4;
        fVar6 = fVar6 * fVar4;
        fVar4 = fVar3 * fVar4;
      }
      (moby->pos).x = fVar2 + *pfVar14;
      (moby->pos).y = fVar6 + pfVar14[1];
      fVar6 = pfVar14[2];
      (moby->pos).w = fVar5;
      (moby->pos).z = fVar4 + fVar6;
      return;
    }
    if (moby->setByGroup == '\0') {
      fVar6 = pfVar14[7];
      if ((int)fVar6 < 0) {
        fVar6 = (moby->pos).y - g_heroPosition.y;
        fVar2 = (moby->pos).x - g_heroPosition.x;
        if ((6.0 <= SQRT(fVar2 * fVar2 + fVar6 * fVar6)) || (DAT_00e5ef88 != 0)) goto LAB_00188d68;
      }
      else if (g_MobyInstance[(int)fVar6].oClass == SHUTTLE_05A8) {
        fVar2 = g_heroPosition.y - g_MobyInstance[(int)fVar6].pos.y;
        fVar6 = g_heroPosition.x - g_MobyInstance[(int)fVar6].pos.x;
        if (20.0 <= SQRT(fVar6 * fVar6 + fVar2 * fVar2)) goto LAB_00188d68;
      }
      else if (g_MobyInstance[(int)fVar6].oClass == THRUSTER_PACK_LOCK_RED) {
        if (g_MobyInstance[(int)fVar6].setByGroup == '\0') goto LAB_00188d68;
      }
      else if (g_MobyInstance[(int)fVar6].state < 3) goto LAB_00188d68;
      uVar9 = 1;
      lVar15 = 7;
      pfVar13 = pfVar14;
      do {
        pfVar8 = pfVar13 + 9;
        pfVar13 = pfVar13 + 1;
        uVar9 = ZERO_MASK((3 - (uint)*(byte *)((int)*pfVar8 + 0x20))) & uVar9;
        lVar15 = lVar15 + -1;
      } while (lVar15 != 0);
      if ((int)uVar9 != 0) {
        PlayMobySound(0,0,moby);
        iVar11 = 0;
        moby->state = '\x04';
        pfVar14[6] = 0.0;
        pfVar14[5] = 0.0;
        pfVar13 = pfVar14;
        do {
          pfVar8 = pfVar13 + 9;
          iVar11 = iVar11 + 1;
          pfVar13 = pfVar13 + 1;
          *(undefined1 *)((int)*pfVar8 + 0x20) = 5;
        } while (iVar11 < 7);
      }
    }
  }
  else {
    if (5 < bVar1) {
      if (bVar1 < 8) {
        return;
      }
      if (9 < bVar1) {
        return;
      }
      OrganicDeltAng
                (0.0,DAT_0073f864 * 0.017453292 * DAT_0071f418,
                 DAT_0073f868 * 0.017453292 * DAT_0071f418,
                 DAT_0073f86c * 0.017453292 * g_FrameTime,pfVar14 + 5,0x720000,pfVar14 + 8
                );
      dVar17 = (double)FastDiffRots((double)pfVar14[4],(double)pfVar14[5]);
      (moby->rotation).x = (float)dVar17;
      if (0 < (int)pfVar14[5]) {
        return;
      }
      moby->state = (char)(ZERO_MASK((8 - (uint)moby->state))) + '\x03';
      return;
    }
    if (3 < bVar1) {
      OrganicDeltAng
                (1.0471976,DAT_0073f864 * 0.017453292 * DAT_0071f418,
                 DAT_0073f868 * 0.017453292 * DAT_0071f418,
                 DAT_0073f86c * 0.017453292 * g_FrameTime,pfVar14 + 5,0x720000,pfVar14 + 8
                );
      dVar17 = (double)FastDiffRots((double)pfVar14[4],(double)pfVar14[5]);
      (moby->rotation).x = (float)dVar17;
      uVar7 = (int)pfVar14[5] >> 0x1f;
      if ((int)((uVar7 >> 1 ^ (uint)pfVar14[5]) - uVar7) < 0x3f860a92) {
        return;
      }
      moby->modeBits = moby->modeBits | DISABLED;
      moby->enabled = '\0';
      moby->state = (char)(ZERO_MASK((4 - (uint)moby->state))) + '\a';
      return;
    }
  }
LAB_00188d68:
  fVar6 = (moby->transform).v2.y;
  fVar2 = (moby->transform).v2.x;
  fVar3 = (moby->transform).v2.z;
  fVar4 = 0.0;
  fVar5 = SQRT(fVar3 * fVar3 + fVar2 * fVar2 + fVar6 * fVar6);
  if (fVar5 == 0.0) {
    fVar5 = (moby->transform).v2.w;
    fVar2 = fVar4;
    fVar6 = fVar4;
  }
  else {
    fVar4 = DAT_0073f870 / fVar5;
    fVar5 = (moby->transform).v2.w;
    fVar2 = fVar2 * fVar4;
    fVar6 = fVar6 * fVar4;
    fVar4 = fVar3 * fVar4;
  }
  (moby->pos).x = fVar2 + *pfVar14;
  (moby->pos).y = fVar6 + pfVar14[1];
  fVar6 = pfVar14[2];
  (moby->pos).w = fVar5;
  (moby->pos).z = fVar4 + fVar6;
  return;
}


