// game/update/moby583.cpp -- reconstructed from NPEA00385 EBOOT
// STATUS: NOT STARTED (raw Ghidra output)
// 2 functions, 0x3d14d8-0x3d1d08
#include "game/update/moby583.h"
#include "game/freeze.h"
#include "game/hero.h"
#include "game/initspace.h"
#include "game/mobyfunc.h"
#include "game/mobyproc.h"
#include "game/mobyutil.h"
#include "game/sound.h"
#include "idol/fastfunc.h"

// 0x03d14d8 (0x14 bytes)
void M583_003d14d8(void)

{
  DAT_0084650c = 0x10000;
  return;
}


// 0x03d1510 (0x7f8 bytes)
/* Moby 583 */

void UpdateMoby_583(MobyInstance *moby)

{
  bool bVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  undefined4 uVar5;
  float *pfVar6;
  float fVar7;
  float fVar8;
  MobyInstance *pMVar9;
  int iVar10;
  float *speed;
  double dVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  
  pfVar6 = (float *)moby->pVar;
  moby->scale = moby->pClass->gScale * DAT_00846530;
  if (moby->state == 0) {
    moby->collision = (ushort *)0x0;
    (moby->pos).z = (moby->pos).z + 1.0;
    dVar11 = (double)GetGroundZ(0x3fe0000000000000,(longlong)(int)moby + 0x10,0);
    (moby->pos).z = (float)dVar11;
    *pfVar6 = (moby->pos).x;
    pfVar6[1] = (moby->pos).y;
    bVar1 = g_CollOutput.pMoby != (MobyInstance *)0x0;
    pfVar6[2] = (moby->pos).z;
    pfVar6[3] = (moby->pos).w;
    if (bVar1) {
      pfVar6[0xe] = 1.4013e-45;
    }
    pMVar9 = CreateMoby(0x6eb);
    pMVar9->updateDistance = '@';
    pMVar9->drawDistance = 0x56;
    pMVar9->enabled = '\x01';
    pMVar9->scale = pMVar9->pClass->gScale * DAT_00846530;
    (pMVar9->pos).x = *pfVar6;
    (pMVar9->pos).y = pfVar6[1];
    (pMVar9->pos).z = pfVar6[2];
    (pMVar9->pos).w = pfVar6[3];
    (pMVar9->rotation).x = (moby->rotation).x;
    (pMVar9->rotation).y = (moby->rotation).y;
    (pMVar9->rotation).z = (moby->rotation).z;
    (pMVar9->rotation).w = (moby->rotation).w;
    UpdateMobyTransform(pMVar9);
    pfVar6[7] = (float)pMVar9;
    pMVar9 = CreateMoby(GREEN_LIGHT_0680|EXPLOSION_0070);
    pfVar6[5] = (float)pMVar9;
    pMVar9->updateDistance = '@';
    *(undefined2 *)((int)pfVar6[5] + 0x32) = 0x56;
    *(undefined1 *)((int)pfVar6[5] + 0x31) = 1;
    *(float *)((int)pfVar6[5] + 0x2c) =
         *(float *)(*(int *)((int)pfVar6[5] + 0x24) + 0x24) * DAT_00846530;
    fVar7 = pfVar6[5];
    *(f32 *)((int)fVar7 + 0x40) = (moby->rotation).x;
    *(f32 *)((int)fVar7 + 0x44) = (moby->rotation).y;
    *(f32 *)((int)fVar7 + 0x48) = (moby->rotation).z;
    *(f32 *)((int)fVar7 + 0x4c) = (moby->rotation).w;
    UpdateMobyTransform((MobyInstance *)pfVar6[5]);
    pMVar9 = CreateMoby(GREEN_LIGHT_0680|EXPLOSION_0070);
    pfVar6[6] = (float)pMVar9;
    pMVar9->updateDistance = '@';
    *(undefined2 *)((int)pfVar6[6] + 0x32) = 0x40;
    *(undefined1 *)((int)pfVar6[6] + 0x31) = 1;
    *(float *)((int)pfVar6[6] + 0x2c) =
         *(float *)(*(int *)((int)pfVar6[6] + 0x24) + 0x24) * DAT_00846530;
    fVar7 = pfVar6[6];
    *(f32 *)((int)fVar7 + 0x40) = (moby->rotation).x;
    *(f32 *)((int)fVar7 + 0x44) = (moby->rotation).y;
    *(f32 *)((int)fVar7 + 0x48) = (moby->rotation).z;
    *(f32 *)((int)fVar7 + 0x4c) = (moby->rotation).w;
    dVar11 = (double)FastWrapRot(*(float *)((int)pfVar6[6] + 0x48),3.14159);
    *(float *)((int)pfVar6[6] + 0x48) = (float)dVar11;
    UpdateMobyTransform((MobyInstance *)pfVar6[6]);
    fVar7 = (moby->pos).z;
    moby->state = '\x01';
    pfVar6[4] = fVar7;
    pfVar6[0xd] = DAT_00846538;
    moby->collision = moby->pClass->collision;
    return;
  }
  if (1 < moby->state) {
    return;
  }
  if (((g_gameMode == GAME_MODE_SCENE) && (pfVar6[0xe] != 0.0)) && (g_SceneId == 3)) {
    if ((MobyInstance *)pfVar6[5] != (MobyInstance *)0x0) {
      DeleteMoby((MobyInstance *)pfVar6[5]);
    }
    if ((MobyInstance *)pfVar6[6] != (MobyInstance *)0x0) {
      DeleteMoby((MobyInstance *)pfVar6[6]);
    }
    if ((MobyInstance *)pfVar6[7] != (MobyInstance *)0x0) {
      DeleteMoby((MobyInstance *)pfVar6[7]);
    }
    DeleteMoby(moby);
  }
  dVar11 = (double)pfVar6[9];
  dVar15 = 0.0;
  if (pfVar6[9] == 0.0) goto LAB_003d18f8;
  if (pfVar6[0xc] == 0.0) {
    iVar10 = FastDecTimerS32(pfVar6 + 0xb);
    if (iVar10 != 2) {
      dVar11 = (double)pfVar6[9];
      goto LAB_003d1864;
    }
LAB_003d1890:
    dVar11 = dVar15;
    PlayMobySound(0,0,moby);
    pfVar6[9] = 0.0;
    dVar15 = dVar11;
  }
  else {
LAB_003d1864:
    if ((g_gameMode == GAME_MODE_SCENE) && (3 < g_SceneId)) goto LAB_003d1890;
  }
  if ((g_framesNotGrounded == 0) && (g_heroState == THRUSTER_PACK_BONK_JUMP)) {
    dVar11 = dVar15;
    PlayMobySound(0,0,moby);
    pfVar6[9] = 0.0;
    dVar15 = dVar11;
  }
LAB_003d18f8:
  speed = pfVar6 + 10;
  if (dVar11 == dVar15) {
    if (pfVar6[0xd] == DAT_00846538) {
      OrganicDelt
                ((float)dVar11,DAT_0071f418 * 4.0,DAT_0071f418 * 4.0,g_FrameTime * 4.0,
                 pfVar6 + 8,0x720000,speed);
    }
    else {
      OrganicDelt
                (DAT_00846538,DAT_0071f418 * 16.0,DAT_0071f418 * 4.0,g_FrameTime * 8.0,
                 pfVar6 + 0xd,0x720000,speed);
    }
  }
  else if ((double)pfVar6[8] == dVar11) {
    OrganicDelt
              (DAT_00846534,DAT_0071f418 * 16.0,DAT_0071f418 * 4.0,g_FrameTime * 8.0,
               pfVar6 + 0xd,0x840000,speed);
  }
  else {
    OrganicDelt
              ((float)dVar11,DAT_0071f418 * 4.0,DAT_0071f418 * 4.0,g_FrameTime * 4.0,
               pfVar6 + 8,0x720000,speed);
  }
  fVar7 = pfVar6[5];
  if (fVar7 != 0.0) {
    fVar2 = *(float *)((int)fVar7 + 0xd4);
    fVar3 = *(float *)((int)fVar7 + 0xd0);
    fVar4 = *(float *)((int)fVar7 + 0xd8);
    dVar11 = (double)SQRT(fVar4 * fVar4 + fVar3 * fVar3 + fVar2 * fVar2);
    if (dVar11 == dVar15) {
      uVar5 = *(undefined4 *)((int)fVar7 + 0xdc);
      dVar11 = dVar15;
      dVar13 = dVar15;
      dVar14 = dVar15;
    }
    else {
      fVar8 = (float)(-(double)pfVar6[8] / dVar11);
      uVar5 = *(undefined4 *)((int)fVar7 + 0xdc);
      dVar14 = (double)(fVar3 * fVar8);
      dVar13 = (double)(fVar2 * fVar8);
      dVar11 = (double)(fVar4 * fVar8);
    }
    *(float *)((int)fVar7 + 0x10) = (float)dVar14;
    *(float *)((int)fVar7 + 0x14) = (float)dVar13;
    *(float *)((int)fVar7 + 0x18) = (float)dVar11;
    *(undefined4 *)((int)fVar7 + 0x1c) = uVar5;
    fVar8 = pfVar6[5];
    fVar2 = *(float *)((int)fVar8 + 0xe4);
    fVar3 = *(float *)((int)fVar8 + 0xe0);
    fVar4 = *(float *)((int)fVar8 + 0xe8);
    dVar13 = (double)SQRT(fVar4 * fVar4 + fVar3 * fVar3 + fVar2 * fVar2);
    fVar7 = (float)((double)(pfVar6[8] * -0.2) / dVar13);
    dVar11 = dVar15;
    if (dVar15 - dVar13 < 0.0) {
      dVar11 = (double)(fVar4 * fVar7);
    }
    dVar14 = dVar15;
    if (dVar15 - dVar13 < 0.0) {
      dVar14 = (double)(fVar2 * fVar7);
    }
    dVar12 = dVar15;
    if (dVar15 - dVar13 < 0.0) {
      dVar12 = (double)(fVar3 * fVar7);
    }
    if (dVar13 - dVar15 < 0.0) {
      dVar11 = (double)(fVar4 * fVar7);
    }
    if (dVar13 - dVar15 < 0.0) {
      dVar14 = (double)(fVar2 * fVar7);
    }
    if (dVar13 - dVar15 < 0.0) {
      dVar12 = (double)(fVar3 * fVar7);
    }
    *(float *)((int)fVar8 + 0x18) = (float)((double)*(float *)((int)fVar8 + 0x18) + dVar11);
    *(float *)((int)fVar8 + 0x14) = (float)((double)*(float *)((int)fVar8 + 0x14) + dVar14);
    *(float *)((int)fVar8 + 0x10) = (float)((double)*(float *)((int)fVar8 + 0x10) + dVar12);
    fVar7 = pfVar6[5];
    *(float *)((int)fVar7 + 0x10) = *(float *)((int)fVar7 + 0x10) + *pfVar6;
    *(float *)((int)fVar7 + 0x14) = *(float *)((int)fVar7 + 0x14) + pfVar6[1];
    *(float *)((int)fVar7 + 0x18) = *(float *)((int)fVar7 + 0x18) + pfVar6[2];
    UpdateMobyTransform((MobyInstance *)pfVar6[5]);
  }
  fVar7 = pfVar6[6];
  if (fVar7 != 0.0) {
    fVar2 = *(float *)((int)fVar7 + 0xd4);
    fVar3 = *(float *)((int)fVar7 + 0xd0);
    fVar4 = *(float *)((int)fVar7 + 0xd8);
    dVar11 = (double)SQRT(fVar4 * fVar4 + fVar3 * fVar3 + fVar2 * fVar2);
    if (dVar11 == dVar15) {
      uVar5 = *(undefined4 *)((int)fVar7 + 0xdc);
      dVar11 = dVar15;
      dVar13 = dVar15;
      dVar14 = dVar15;
    }
    else {
      fVar8 = (float)(-(double)pfVar6[8] / dVar11);
      uVar5 = *(undefined4 *)((int)fVar7 + 0xdc);
      dVar14 = (double)(fVar3 * fVar8);
      dVar13 = (double)(fVar2 * fVar8);
      dVar11 = (double)(fVar4 * fVar8);
    }
    *(float *)((int)fVar7 + 0x10) = (float)dVar14;
    *(float *)((int)fVar7 + 0x14) = (float)dVar13;
    *(float *)((int)fVar7 + 0x18) = (float)dVar11;
    *(undefined4 *)((int)fVar7 + 0x1c) = uVar5;
    fVar8 = pfVar6[6];
    fVar2 = *(float *)((int)fVar8 + 0xe4);
    fVar3 = *(float *)((int)fVar8 + 0xe0);
    fVar4 = *(float *)((int)fVar8 + 0xe8);
    dVar13 = (double)SQRT(fVar4 * fVar4 + fVar3 * fVar3 + fVar2 * fVar2);
    fVar7 = (float)((double)(pfVar6[8] * -0.2) / dVar13);
    dVar11 = dVar15;
    if (dVar15 - dVar13 < 0.0) {
      dVar11 = (double)(fVar4 * fVar7);
    }
    dVar14 = dVar15;
    if (dVar15 - dVar13 < 0.0) {
      dVar14 = (double)(fVar2 * fVar7);
    }
    dVar12 = dVar15;
    if (dVar15 - dVar13 < 0.0) {
      dVar12 = (double)(fVar3 * fVar7);
    }
    if (dVar13 - dVar15 < 0.0) {
      dVar11 = (double)(fVar4 * fVar7);
    }
    if (dVar13 - dVar15 < 0.0) {
      dVar14 = (double)(fVar2 * fVar7);
    }
    if (dVar13 - dVar15 < 0.0) {
      dVar12 = (double)(fVar3 * fVar7);
    }
    *(float *)((int)fVar8 + 0x18) = (float)((double)*(float *)((int)fVar8 + 0x18) + dVar11);
    *(float *)((int)fVar8 + 0x14) = (float)((double)*(float *)((int)fVar8 + 0x14) + dVar14);
    *(float *)((int)fVar8 + 0x10) = (float)((double)*(float *)((int)fVar8 + 0x10) + dVar12);
    fVar7 = pfVar6[6];
    *(float *)((int)fVar7 + 0x10) = *(float *)((int)fVar7 + 0x10) + *pfVar6;
    *(float *)((int)fVar7 + 0x14) = *(float *)((int)fVar7 + 0x14) + pfVar6[1];
    *(float *)((int)fVar7 + 0x18) = *(float *)((int)fVar7 + 0x18) + pfVar6[2];
    UpdateMobyTransform((MobyInstance *)pfVar6[6]);
  }
  (moby->pos).z = pfVar6[4] + pfVar6[0xd];
  return;
}


