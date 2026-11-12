// game/update/moby181.cpp -- reconstructed from NPEA00385 EBOOT
// STATUS: NOT STARTED (raw Ghidra output)
// 2 functions, 0x2bbc28-0x2bc1d8
#include <math.h>
#include "game/update/moby181.h"
#include "game/camera.h"
#include "game/collproc.h"
#include "game/hero.h"
#include "game/mobyfunc.h"
#include "game/mobyutil.h"
#include "game/partupd.h"
#include "game/path.h"
#include "game/walk.h"

// 0x02bbc28 (0x130 bytes)
void M181_002bbc28(MobyInstance *moby)

{
  w_2legData *pLD;
  float fVar1;
  float fVar2;
  
  pLD = (w_2legData *)moby->pVar;
  walk_SetupTwistVals(moby,pLD);
  fVar2 = g_FrameTimeSq;
  pLD->grav = g_FrameTimeSq * 9.8;
  fVar1 = DAT_0071f40c;
  pLD->angGain = DAT_0071f40c * 0.02;
  pLD->angDamp = fVar1 * 0.01;
  fVar1 = DAT_0071f408;
  pLD->acc = fVar2;
  pLD->idle = '\0';
  pLD->stand = '\0';
  pLD->jumpc = -1;
  pLD->rjumpc = '\0';
  pLD->moveJoint1 = '\b';
  pLD->moveJoint2 = '\b';
  pLD->legs[0].jiFoot = '\x04';
  pLD->legs[0].jiHeel = '\x05';
  pLD->legs[0].jiHip = '\a';
  pLD->legs[0].jiAnkle = '\x06';
  pLD->legs[1].jiFoot = '\0';
  pLD->legs[1].jiHeel = '\x01';
  pLD->legs[1].jiHip = '\x03';
  pLD->legs[1].jiAnkle = '\x02';
  pLD->stepHeight = 0.25;
  pLD->angLimit = fVar1 * 0.035;
  walk_init2LegAnim(moby,pLD);
  return;
}


// 0x02bbd68 (0x470 bytes)
// inlined: FastAtan2 @0x2bbeb4
/* Moby 181 */

void UpdateMoby_181(MobyInstance *moby)

{
  u8 uVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  w_2legData *pLD;
  ulonglong *puVar6;
  int iVar7;
  float fVar8;
  int iVar11;
  ulonglong uVar9;
  longlong lVar10;
  uint uVar12;
  ulonglong uVar13;
  longlong lVar14;
  longlong lVar15;
  ulonglong uVar16;
  longlong lVar17;
  float *pfVar18;
  ulonglong unaff_r30;
  ulonglong unaff_r31;
  ulonglong in_LR;
  longlong lVar19;
  double dVar20;
  
  uVar16 = ZEXT48(&stack0x00000000);
  lVar10 = uVar16 - 0xb0;
  puVar6 = (ulonglong *)lVar10;
  *puVar6 = uVar16;
  puVar6[0x18] = in_LR;
  puVar6[0x15] = unaff_r31;
  puVar6[0x14] = unaff_r30;
  pLD = (w_2legData *)moby->pVar;
  iVar11 = MB_damage(moby,0x10000,0);
  if ((iVar11 != 0) && (moby->state != '\x04')) {
    pLD[1].fpos[5].m.y = 1.4013e-45;
    pLD[1].fpos[4].m.z = 0.1;
    pLD[1].fpos[4].m.x = 0.008;
    pLD[1].fpos[4].m.y = 0.0005;
    pLD[1].fpos[4].m.w = 0.1;
    *(undefined1 *)((int)&pLD[1].jumpPos.m.w + 1) = 0;
    moby->state = '\x04';
    fVar3 = (moby->pos).x - g_heroPosition.x;
    fVar2 = (moby->pos).y - g_heroPosition.y;
    uVar13 = ZEXT48(&g_atanQuadrantTable);
    fVar4 = ABS(fVar3);
    fVar5 = ABS(fVar2);
    *(float *)(puVar6 + 0xe) = fVar3;
    *(float *)((int)puVar6 + 0x74) = fVar2;
    *(float *)(puVar6 + 0xf) = fVar4 - fVar5;
    dVar20 = 0.0;
    uVar9 = (ulonglong)(*(uint *)(puVar6 + 0xe) >> 0x1c) & 8 |
            (ulonglong)(*(uint *)(puVar6 + 0xf) >> 0x1e) & 2 |
            (ulonglong)(*(uint *)((int)puVar6 + 0x74) >> 0x1d) & 4;
    fVar3 = ABS(*(float *)(puVar6 + 0xe));
    if (*(float *)(puVar6 + 0xf) - 0.0 < 0.0) {
      fVar3 = fVar5;
    }
    fVar5 = *(float *)(&g_atanQuadrantTable + (int)(uVar9 << 2));
    fVar2 = *(float *)(((uint)(uVar9 << 2) | 0x735900) + 4);
    fVar8 = ABS(*(float *)((int)puVar6 + 0x74));
    if (*(float *)(puVar6 + 0xf) - 0.0 < 0.0) {
      fVar8 = fVar4;
    }
    if (0.0 < fVar3) {
      lVar17 = uVar16 - 0xa0;
      lVar15 = uVar16 - 0x34;
      lVar14 = uVar16 - 0x24;
      lVar19 = 2;
      fVar3 = (fVar8 - fVar3) / (fVar8 + fVar3);
      fVar4 = fVar3 * fVar3;
      *(float *)(puVar6 + 0x11) = fVar3;
      *(float *)(puVar6 + 0x10) = fVar3;
      *(float *)((int)puVar6 + 0x84) = fVar3;
      *(float *)((int)puVar6 + 0x7c) = fVar3;
      fVar3 = fVar4 * fVar4;
      *(float *)(puVar6 + 0x10) = *(float *)(puVar6 + 0x10) * fVar4;
      *(float *)((int)puVar6 + 0x84) = *(float *)((int)puVar6 + 0x84) * fVar3;
      *(float *)(puVar6 + 0x11) = *(float *)(puVar6 + 0x11) * fVar3 * fVar4;
      do {
        *(float *)((int)lVar17 + 0x7c) = *(float *)((int)lVar17 + 0x6c) * fVar3 * fVar3;
        iVar11 = (int)lVar15;
        lVar17 = lVar17 + 8;
        lVar15 = lVar15 + 8;
        *(float *)((int)lVar14 + 4) = *(float *)(iVar11 + 4) * fVar3 * fVar3;
        lVar14 = lVar14 + 8;
        lVar19 = lVar19 + -1;
      } while (lVar19 != 0);
      uVar13 = uVar16 - 0x34;
      pfVar18 = (float *)&DAT_007358e0;
      lVar15 = 4;
      uVar16 = uVar13;
      lVar14 = lVar10;
      do {
        fVar3 = *pfVar18;
        fVar4 = pfVar18[1];
        pfVar18 = pfVar18 + 2;
        *(float *)((int)lVar14 + 0x7c) = *(float *)((int)lVar14 + 0x7c) * fVar3;
        lVar14 = lVar14 + 8;
        *(float *)((int)uVar16 + 4) = *(float *)((int)uVar16 + 4) * fVar4;
        uVar16 = uVar16 + 8;
        lVar15 = lVar15 + -1;
      } while (lVar15 != 0);
      lVar14 = 2;
      do {
        iVar11 = (int)lVar10;
        lVar10 = lVar10 + 0x10;
        iVar7 = (int)uVar13;
        uVar13 = uVar13 + 0x10;
        dVar20 = (double)((float)(dVar20 + (double)*(float *)(iVar11 + 0x7c)) +
                          *(float *)(iVar7 + 4) + *(float *)(iVar7 + 8) + *(float *)(iVar7 + 0xc));
        lVar14 = lVar14 + -1;
      } while (lVar14 != 0);
      dVar20 = (double)((float)(dVar20 + 0.7853981852531433) * fVar5 + fVar2);
    }
    MB_StartKick(dVar20,moby,pLD[1].fpos + 3,uVar13,3,3,0);
  }
  uVar1 = moby->state;
  moby->damage = -1;
  if (uVar1 == '\x04') {
    uVar12 = MB_UpdateKick(moby,(KickVars *)(pLD[1].fpos + 3));
    if ((uVar12 & 0x40) != 0) {
      DeleteMoby(moby);
    }
  }
  else if (uVar1 == '\x03') {
    fVar3 = (moby->pos).y - g_heroPosition.y;
    fVar2 = (moby->pos).x - g_heroPosition.x;
    if (SQRT(fVar2 * fVar2 + fVar3 * fVar3) < (float)pLD[1].anims[8]) {
      moby->state = '\x01';
      MB_SetAnimation(moby,1,0,1);
    }
  }
  else if (uVar1 == '\x01') {
    if (pLD[1].fpos[1].m.y != -NAN) {
      PathFollowUpdate(g_FrameTime * 1.38,moby,(PathFollower *)(pLD + 1),pLD);
    }
    fVar3 = (moby->pos).y - g_heroPosition.y;
    fVar2 = (moby->pos).x - g_heroPosition.x;
    if (128.0 < SQRT(fVar2 * fVar2 + fVar3 * fVar3)) {
      moby->state = '\x03';
      MB_SetAnimation(moby,0,0,1);
    }
  }
  else if ((uVar1 == '\0') &&
          (fVar3 = (g_heroMobyPtr->pos).y - (moby->pos).y,
          fVar2 = (g_heroMobyPtr->pos).x - (moby->pos).x,
          SQRT(fVar2 * fVar2 + fVar3 * fVar3) < (float)pLD[1].anims[8])) {
    if (pLD[1].fpos[1].m.y != -NAN) {
      InitFollower((PathFollower *)(pLD + 1));
    }
    M181_002bbc28(moby);
    Walk_ResetLegState(moby,pLD);
    MB_SetAnimation(moby,1,0,1);
    moby->state = '\x01';
  }
  return;
}


