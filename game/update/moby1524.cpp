// game/update/moby1524.cpp -- reconstructed from NPEA00385 EBOOT
// STATUS: NOT STARTED (raw Ghidra output)
// 5 functions, 0x2921d0-0x292d68
#include "game/update/moby1524.h"
#include "game/hero.h"
#include "game/mobyfunc.h"
#include "game/mobyutil.h"
#include "game/partupd.h"
#include "game/update.h"
#include "game/update/moby152.h"
#include "idol/fastfunc.h"

// 0x02921d0 (0x34 bytes)
void M1524_002921d0(void)

{
  DAT_007ab4b4 = 0x10000;
  DAT_00fadb64 = DAT_0071f418 * 20.0;
  return;
}


// 0x0292250 (0x36c bytes)
void M1524_00292250(int param_1,float *param_2,int param_3,int param_4)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int iVar3;
  char cVar5;
  undefined2 uVar4;
  int iVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  undefined8 uVar10;
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
  double dVar24;
  undefined8 uVar25;
  double dVar26;
  double dVar27;
  double dVar28;
  float local_d0;
  float local_cc;
  float local_c8;
  float local_c0;
  float local_bc;
  float local_b8;
  
  iVar3 = 0;
  iVar6 = 0;
  if (0 < param_3) {
    dVar17 = 0.0;
    dVar18 = 6.0;
    dVar19 = 1.570796251296997;
    dVar20 = 3.141592502593994;
    dVar21 = -3.141592502593994;
    dVar22 = -0.16666656732559204;
    dVar23 = 0.008333025500178337;
    dVar24 = -0.0001980741071747616;
    dVar26 = 2.601886990305502e-06;
    dVar27 = 3.0;
    dVar28 = 6.5;
    do {
      dVar7 = (double)MB_randRot();
      dVar8 = (double)MB_randRangeFloat
                                ((float)dVar17,(float)((double)g_FrameTime * dVar18));
      dVar11 = (double)(float)(dVar7 + dVar19);
      dVar9 = (double)(float)(dVar20 - dVar7);
      if (dVar7 - (double)(float)(dVar20 - dVar7) < 0.0) {
        dVar9 = dVar7;
      }
      dVar13 = (double)(float)(dVar20 - dVar11);
      if (dVar11 - (double)(float)(dVar20 - dVar11) < 0.0) {
        dVar13 = dVar11;
      }
      dVar12 = (double)(float)(dVar21 - dVar7);
      if ((double)(float)(dVar21 - dVar7) - dVar9 < 0.0) {
        dVar12 = dVar9;
      }
      dVar9 = (double)(float)(dVar21 - dVar11);
      if ((double)(float)(dVar21 - dVar11) - dVar13 < 0.0) {
        dVar9 = dVar13;
      }
      dVar7 = (double)(float)(dVar12 * dVar12);
      dVar11 = (double)(float)(dVar9 * dVar9);
      dVar15 = (double)(float)(dVar7 * (double)(float)(dVar7 * dVar12));
      dVar13 = (double)(float)(dVar11 * (double)(float)(dVar11 * dVar9));
      dVar14 = (double)(float)(dVar7 * dVar15);
      dVar16 = (double)(float)(dVar11 * dVar13);
      local_cc = (float)((double)(float)((double)(float)(dVar7 * dVar14) * dVar26 +
                                        (double)(float)(dVar14 * dVar24 +
                                                       (double)(float)(dVar15 * dVar23 +
                                                                      (double)(float)((double)(float
                                                  )(dVar7 * dVar12) * dVar22 + dVar12)))) * dVar8);
      local_d0 = (float)((double)(float)((double)(float)(dVar11 * dVar16) * dVar26 +
                                        (double)(float)(dVar16 * dVar24 +
                                                       (double)(float)(dVar13 * dVar23 +
                                                                      (double)(float)((double)(float
                                                  )(dVar11 * dVar9) * dVar22 + dVar9)))) * dVar8);
      dVar9 = (double)MB_randRangeFloat
                                ((float)((double)g_FrameTime * dVar27),
                                 (float)((double)g_FrameTime * dVar28));
      local_c8 = (float)dVar9;
      uVar1 = MB_randRange(0x5a,0x78);
      uVar2 = MB_randInt(2);
      SpawnPart_35((Vec4 *)(param_1 + 0x10),&local_d0,uVar2,uVar1);
      iVar3 = iVar3 + 1;
    } while (iVar3 < param_3);
  }
  if (0 < param_4) {
    dVar17 = 1.0;
    dVar18 = 0.05000000074505806;
    dVar19 = 3.0;
    dVar20 = 6.0;
    uVar25 = 0x4010000000000000;
    dVar21 = 30.0;
    dVar22 = 90.0;
    dVar23 = 0.0;
    do {
      MB_randSphere(dVar17,dVar17,&local_c0);
      local_c0 = local_c0 + *(float *)(param_1 + 0x10);
      local_bc = local_bc + *(float *)(param_1 + 0x14);
      local_b8 = (float)((double)*param_2 + dVar18);
      uVar10 = MB_randRangeFloat((float)dVar19,(float)dVar20);
      dVar24 = -1.0;
      if (iVar6 == 0) {
        dVar24 = dVar17;
      }
      iVar3 = SpawnPart_46(uVar10,dVar24,&local_c0,&DAT_00a15d30);
      if (iVar3 != 0) {
        cVar5 = FastDoubleToInt(uVar25);
        *(char *)(iVar3 + 9) = cVar5 + '@';
        dVar24 = (double)MB_randRangeFloat((float)dVar21,(float)dVar22);
        uVar4 = FastDoubleToInt((double)(float)(dVar24 * (double)animationSpeed));
        *(undefined2 *)(iVar3 + 10) = uVar4;
        uVar2 = DAT_007ab4fc;
        uVar1 = DAT_007ab4f8;
        MB_randRangeFloat((float)dVar23,(float)dVar17);
        uVar1 = FastLerpColor(uVar1,uVar2);
        *(undefined4 *)(iVar3 + 4) = uVar1;
      }
      iVar6 = iVar6 + 1;
    } while (iVar6 < param_4);
  }
  return;
}


// 0x02925d0 (0x294 bytes)
void M1524_002925d0(int param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  GPiece<16> local_80;
  GPiece<40> local_70;
  
  dVar9 = 0.0;
  MB_randSphere(0,(double)(DAT_007ab500 * g_FrameTime),local_80);
  MB_randRangeFloat(DAT_007ab504,DAT_007ab508);
  uVar2 = DAT_007ab518;
  uVar1 = DAT_007ab514;
  dVar8 = 1.0;
  MB_randRangeFloat((float)dVar9,1.0);
  uVar3 = FastLerpColor(uVar1,uVar2);
  uVar2 = DAT_007ab520;
  uVar1 = DAT_007ab51c;
  MB_randRangeFloat((float)dVar9,(float)dVar8);
  uVar4 = FastLerpColor(uVar1,uVar2);
  dVar10 = 0.800000011920929;
  dVar9 = 1.2000000476837158;
  dVar8 = (double)MB_randRangeFloat
                            ((float)((double)(longlong)DAT_007ab524 * 0.800000011920929),
                             (float)((double)(longlong)DAT_007ab524 * 1.2000000476837158));
  uVar5 = FastDoubleToInt((double)(float)(dVar8 * (double)animationSpeed));
  dVar8 = (double)MB_randRangeFloat
                            ((float)((double)(longlong)DAT_007ab528 * dVar10),
                             (float)((double)(longlong)DAT_007ab528 * dVar9));
  uVar6 = FastDoubleToInt((double)(float)(dVar8 * (double)animationSpeed));
  dVar8 = (double)MB_randRangeFloat
                            ((float)((double)(longlong)DAT_007ab52c * dVar10),
                             (float)((double)(longlong)DAT_007ab52c * dVar9));
  uVar7 = FastDoubleToInt((double)(float)(dVar8 * (double)animationSpeed));
  SpawnPart_2(param_1 + 0x10,local_80,local_70,uVar3,uVar4,uVar5,uVar6,uVar7);
  return;
}


// 0x0292878 (0x3e8 bytes)
/* Moby 1524 */

void UpdateMoby_1524(MobyInstance *moby)

{
  byte bVar1;
  float fVar2;
  float fVar3;
  float *pfVar4;
  f32 fVar5;
  MobyClass *pMVar6;
  uint uVar7;
  uint uVar8;
  undefined4 uVar9;
  int iVar10;
  undefined4 uVar11;
  short sVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  double dVar16;
  double dVar17;
  double dVar18;
  GPiece<16> auStack_60;
  float local_50 [2];
  longlong local_48;
  
  fVar2 = animationSpeed;
  pfVar4 = (float *)moby->pVar;
  if (moby->enabled == '\0') {
    sVar12 = *(short *)((int)pfVar4 + 0x22) + 1;
    *(short *)((int)pfVar4 + 0x22) = sVar12;
    local_48 = (longlong)(int)(fVar2 * 15.5);
    if ((int)(fVar2 * 15.5) < (int)sVar12) {
      DeleteMoby(moby);
      return;
    }
  }
  else {
    *(undefined2 *)((int)pfVar4 + 0x22) = 0;
  }
  bVar1 = moby->state;
  if (bVar1 < 2) {
    if (bVar1 != 0) {
      pfVar4[2] = -(DAT_007ab4d8 * DAT_0071f418 - pfVar4[2]);
      if ((*(float *)pfVar4[9] + 3.0 < (moby->pos).z) &&
         (iVar10 = MB_randInt(DAT_007ab4e8), iVar10 == 0)) {
        M1524_002925d0(moby);
      }
      fVar5 = (moby->pos).z;
      uVar7 = (int)fVar5 >> 0x1f;
      uVar8 = (int)*(uint *)pfVar4[9] >> 0x1f;
      if ((int)((uVar7 >> 1 ^ (uint)fVar5) - uVar7) <
          (int)((uVar8 >> 1 ^ *(uint *)pfVar4[9]) - uVar8)) {
        fVar2 = pfVar4[1] * DAT_007ab4e4;
        fVar3 = pfVar4[2] * DAT_007ab4e4;
        *pfVar4 = *pfVar4 * DAT_007ab4e4;
        pfVar4[1] = fVar2;
        pfVar4[2] = fVar3;
        moby->state = '\x02';
        M1524_00292250(moby,pfVar4[9],8,4);
      }
    }
  }
  else if (bVar1 < 3) {
    pMVar6 = moby->pClass;
    pfVar4[2] = -(DAT_007ab4dc * DAT_0071f418 - pfVar4[2]);
    dVar17 = (double)(pMVar6->gScale / (float)(longlong)(animationSpeed * 60.5));
    if (worldUpdateTime ==
        (((int)worldUpdateTime >> 2) +
        (uint)((int)worldUpdateTime < 0 && (worldUpdateTime & 3) != 0)) * 4) {
      M1524_00292250(moby,pfVar4[9],0,1);
      dVar13 = 0.0;
      MB_randSphere(0,(double)g_FrameTime,auStack_60);
      iVar10 = SpawnPart_34
                         ((double)DAT_007ab4ec,(double)*(float *)pfVar4[9],(Vec4 *)&moby->pos,
                          auStack_60);
      uVar9 = DAT_007ab4f4;
      uVar11 = DAT_007ab4f0;
      if (iVar10 != 0) {
        MB_randRangeFloat((float)dVar13,1.0);
        uVar11 = FastLerpColor(uVar11,uVar9);
        *(undefined4 *)(iVar10 + 4) = uVar11;
      }
    }
    Delt(0.0,(float)dVar17,&moby->scale);
    if (moby->scale == 0.0) {
      DeleteMoby(moby);
      return;
    }
  }
  (moby->pos).x = (moby->pos).x + *pfVar4;
  (moby->pos).y = (moby->pos).y + pfVar4[1];
  (moby->pos).z = (moby->pos).z + pfVar4[2];
  local_50[0] = SQRT(*pfVar4 * *pfVar4 + pfVar4[1] * pfVar4[1]);
  dVar18 = 0.0;
  Delt(0.0,DAT_007ab4e0 * DAT_0071f418,local_50);
  fVar2 = pfVar4[1];
  fVar3 = *pfVar4;
  dVar16 = (double)SQRT(fVar3 * fVar3 + fVar2 * fVar2);
  dVar15 = (double)(fVar3 * (float)((double)local_50[0] / dVar16));
  dVar13 = (double)(fVar2 * (float)((double)local_50[0] / dVar16));
  dVar17 = dVar18;
  if (dVar18 - dVar16 < 0.0) {
    dVar17 = dVar15;
  }
  dVar14 = dVar18;
  if (dVar18 - dVar16 < 0.0) {
    dVar14 = dVar13;
  }
  if (dVar16 - dVar18 < 0.0) {
    dVar17 = dVar15;
  }
  if (dVar16 - dVar18 < 0.0) {
    dVar14 = dVar13;
  }
  *pfVar4 = (float)dVar17;
  pfVar4[1] = (float)dVar14;
  return;
}


// 0x0292c60 (0x108 bytes)
MobyInstance *
M1524_00292c60
          (double param_1,f32 *param_2,undefined4 *param_3,undefined4 param_4)

{
  float fVar1;
  undefined4 *puVar2;
  MobyClass *pMVar3;
  MobyInstance *pMVar4;
  double dVar5;
  
  pMVar4 = CreateMoby(0x5f4);
  if (pMVar4 != (MobyInstance *)0x0) {
    pMVar4->state = '\x01';
    puVar2 = (undefined4 *)pMVar4->pVar;
    (pMVar4->pos).x = *param_2;
    (pMVar4->pos).y = param_2[1];
    (pMVar4->pos).z = param_2[2];
    (pMVar4->pos).w = param_2[3];
    dVar5 = (double)MB_randRot();
    (pMVar4->rotation).x = (float)dVar5;
    dVar5 = (double)MB_randRot();
    pMVar3 = pMVar4->pClass;
    (pMVar4->rotation).z = (float)dVar5;
    pMVar4->enabled = '\x01';
    pMVar4->updateDistance = -1;
    fVar1 = pMVar3->gScale;
    pMVar4->drawDistance = 0xff;
    puVar2[9] = param_4;
    pMVar4->scale = (float)((double)fVar1 * param_1);
    *puVar2 = *param_3;
    puVar2[1] = param_3[1];
    puVar2[2] = param_3[2];
    puVar2[3] = param_3[3];
  }
  return pMVar4;
}


