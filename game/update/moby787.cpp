// game/update/moby787.cpp -- reconstructed from NPEA00385 EBOOT
// STATUS: NOT STARTED (raw Ghidra output)
// 3 functions, 0x45c4b8-0x45ca38
#include "game/update/moby787.h"
#include "game/collproc.h"
#include "game/hero.h"
#include "game/mesh.h"
#include "game/mobyfunc.h"
#include "game/mobyproc.h"
#include "game/mobyutil.h"
#include "game/partupd.h"
#include "game/sound.h"
#include "game/update/moby775.h"
#include "game/water.h"
#include "idol/fastfunc.h"

// 0x045c4b8 (0x14 bytes)
void M787_0045c4b8(void)

{
  DAT_00873bac = 0x10000;
  return;
}


// 0x045c4e0 (0x15c bytes)
MobyInstance * FUN_0045c4e0(double param_1,f32 *param_2)

{
  float fVar1;
  undefined1 *puVar2;
  MobyInstance *pMVar3;
  double dVar4;
  
  pMVar3 = CreateMoby(0x313);
  if (pMVar3 != (MobyInstance *)0x0) {
    puVar2 = (undefined1 *)pMVar3->pVar;
    MB_CopyHeroLights(pMVar3);
    fVar1 = pMVar3->scale;
    pMVar3->updateDistance = -1;
    pMVar3->drawDistance = 0x40;
    (pMVar3->rotation).x = 0.0;
    pMVar3->scale = (float)((double)fVar1 * param_1);
    dVar4 = (double)MB_randRot();
    (pMVar3->rotation).z = (float)dVar4;
    (pMVar3->pos).x = *param_2;
    (pMVar3->pos).y = param_2[1];
    (pMVar3->pos).z = param_2[2];
    (pMVar3->pos).w = param_2[3];
    *puVar2 = 0;
    puVar2[1] = 0;
    puVar2[2] = 0;
    puVar2[3] = 0;
    puVar2[4] = 0;
    puVar2[5] = 0;
    puVar2[6] = 0;
    puVar2[7] = 0;
    puVar2[8] = 0;
    puVar2[9] = 0;
    puVar2[10] = 0;
    puVar2[0xb] = 0;
    puVar2[0xc] = 0;
    puVar2[0xd] = 0;
    puVar2[0xe] = 0;
    puVar2[0xf] = 0;
    fVar1 = -g_FrameTime;
    *(undefined4 *)(puVar2 + 0x14) = 0x78;
    *(float *)(puVar2 + 8) = fVar1;
    *(float *)(puVar2 + 0x10) = g_FrameTimeSq * 15.0;
    dVar4 = (double)MB_randRangeFloat(0.003141593,0.06283186);
    *(float *)(puVar2 + 0x1c) = (float)dVar4;
    UpdateMobyTransform(pMVar3);
  }
  return pMVar3;
}


// 0x045c680 (0x3b8 bytes)
/* Moby 787 */

void UpdateMoby_787(MobyInstance *moby)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float *pfVar8;
  int iVar9;
  undefined4 uVar10;
  undefined4 uVar11;
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
  double dVar24;
  double dVar25;
  double dVar26;
  double dVar27;
  double dVar28;
  double dVar29;
  double dVar30;
  GPiece<16> local_b0;
  Vec4 local_a0;
  float local_90;
  float local_8c;
  float local_88;
  
  pfVar8 = (float *)moby->pVar;
  pfVar8[2] = pfVar8[2] - pfVar8[4];
  fVar1 = (moby->pos).x;
  fVar2 = (moby->pos).y;
  fVar3 = (moby->pos).z;
  fVar4 = (moby->pos).w;
  dVar17 = (double)fVar4;
  (moby->rotation).x = (moby->rotation).x + pfVar8[7];
  fVar5 = *pfVar8;
  fVar6 = pfVar8[1];
  fVar7 = pfVar8[2];
  iVar9 = CollLine((longlong)(int)moby + 0x10,local_b0,2,0,0);
  if (iVar9 != 0) {
    iVar9 = CollHotspot();
    if (iVar9 != 0) {
      DeleteMoby(moby);
      return;
    }
    if (pfVar8[6] == 0.0) {
      PlayMobySound(0,0,moby);
    }
    WaterTile_PutDrop
              ((moby->pos).x,(moby->pos).y,0.5,-0.35,WaterTiles,WaterTileCnt,(float)dVar17);
    pfVar8[6] = 1.4013e-45;
    pfVar8[5] = 1.68156e-43;
    pfVar8[2] = g_FrameTime * -1.5;
    pfVar8[4] = g_FrameTimeSq * 0.8;
    dVar17 = 0.0;
    pfVar8[7] = 0.0;
    local_a0.x = (moby->pos).x;
    local_a0.y = (moby->pos).y;
    local_a0.z = g_CollOutput.ip.z;
    iVar9 = FUN_00456478(0x4000000000000000,&local_a0);
    if (iVar9 != 0) {
      *(undefined1 *)(iVar9 + 0x23) = 0x70;
    }
    iVar9 = 0;
    dVar22 = 3.0;
    dVar23 = 1.570796251296997;
    dVar24 = 3.141592502593994;
    dVar25 = -3.141592502593994;
    dVar26 = -0.16666656732559204;
    dVar27 = 0.008333025500178337;
    dVar28 = -0.0001980741071747616;
    dVar29 = 2.601886990305502e-06;
    dVar30 = 6.5;
    do {
      dVar12 = (double)MB_randRot();
      dVar13 = (double)MB_randRangeFloat
                                 ((float)dVar17,(float)((double)g_FrameTime * dVar22));
      dVar15 = (double)(float)(dVar12 + dVar23);
      dVar14 = (double)(float)(dVar24 - dVar12);
      if (dVar12 - (double)(float)(dVar24 - dVar12) < 0.0) {
        dVar14 = dVar12;
      }
      dVar18 = (double)(float)(dVar24 - dVar15);
      if (dVar15 - (double)(float)(dVar24 - dVar15) < 0.0) {
        dVar18 = dVar15;
      }
      dVar16 = (double)(float)(dVar25 - dVar12);
      if ((double)(float)(dVar25 - dVar12) - dVar14 < 0.0) {
        dVar16 = dVar14;
      }
      dVar14 = (double)(float)(dVar25 - dVar15);
      if ((double)(float)(dVar25 - dVar15) - dVar18 < 0.0) {
        dVar14 = dVar18;
      }
      dVar12 = (double)(float)(dVar16 * dVar16);
      dVar15 = (double)(float)(dVar14 * dVar14);
      dVar20 = (double)(float)(dVar12 * (double)(float)(dVar12 * dVar16));
      dVar18 = (double)(float)(dVar15 * (double)(float)(dVar15 * dVar14));
      dVar19 = (double)(float)(dVar12 * dVar20);
      dVar21 = (double)(float)(dVar15 * dVar18);
      local_8c = (float)((double)(float)((double)(float)(dVar12 * dVar19) * dVar29 +
                                        (double)(float)(dVar19 * dVar28 +
                                                       (double)(float)(dVar20 * dVar27 +
                                                                      (double)(float)((double)(float
                                                  )(dVar12 * dVar16) * dVar26 + dVar16)))) * dVar13)
      ;
      local_90 = (float)((double)(float)((double)(float)(dVar15 * dVar21) * dVar29 +
                                        (double)(float)(dVar21 * dVar28 +
                                                       (double)(float)(dVar18 * dVar27 +
                                                                      (double)(float)((double)(float
                                                  )(dVar15 * dVar14) * dVar26 + dVar14)))) * dVar13)
      ;
      dVar14 = (double)MB_randRangeFloat
                                 ((float)((double)g_FrameTime * dVar22),
                                  (float)((double)g_FrameTime * dVar30));
      local_88 = (float)dVar14;
      uVar10 = MB_randRange(0x5a,0x78);
      uVar11 = MB_randInt(2);
      SpawnPart_35(&local_a0,&local_90,uVar11,uVar10);
      iVar9 = iVar9 + 1;
    } while (iVar9 < 0x10);
  }
  (moby->pos).x = fVar1 + fVar5;
  (moby->pos).y = fVar2 + fVar6;
  fVar1 = pfVar8[6];
  (moby->pos).z = fVar3 + fVar7;
  (moby->pos).w = fVar4;
  if (fVar1 != 0.0) {
    moby->scale = moby->scale * 0.99;
  }
  iVar9 = FastDecTimerS32(pfVar8 + 5);
  if (iVar9 != 0) {
    DeleteMoby(moby);
  }
  return;
}


