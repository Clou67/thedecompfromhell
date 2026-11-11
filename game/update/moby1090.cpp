// game/update/moby1090.cpp -- reconstructed from NPEA00385 EBOOT
// STATUS: NOT STARTED (raw Ghidra output)
// 3 functions, 0x1bc080-0x1bc554
#include "game/update/moby1090.h"
#include "game/collproc.h"
#include "game/hero.h"
#include "game/mobyfunc.h"
#include "game/mobyproc.h"
#include "game/mobyutil.h"
#include "game/partupd.h"
#include "idol/fastfunc.h"

// 0x01bc080 (0x14 bytes)
void M1090_001bc080(void)

{
  DAT_00763b30 = 0x10000;
  return;
}


// 0x01bc0b0 (0x180 bytes)
MobyInstance *
FUN_001bc0b0(double param_1,double param_2,double param_3,undefined4 param_4,f32 *param_5,
            undefined4 param_6)

{
  undefined4 *puVar1;
  MobyInstance *pMVar2;
  undefined4 uVar3;
  double dVar4;
  undefined8 uVar5;
  double dVar6;
  double dVar7;
  
  pMVar2 = CreateMoby(0x442);
  if (pMVar2 != (MobyInstance *)0x0) {
    pMVar2->updateDistance = -1;
    pMVar2->drawDistance = 0xff;
    pMVar2->enabled = '\x01';
    pMVar2->state = '\0';
    pMVar2->alpha = '@';
    puVar1 = (undefined4 *)pMVar2->pVar;
    (pMVar2->pos).x = *param_5;
    (pMVar2->pos).y = param_5[1];
    (pMVar2->pos).z = param_5[2];
    (pMVar2->pos).w = param_5[3];
    SetColorOfMoby(pMVar2,0x7f,0x40,0);
    *puVar1 = param_6;
    puVar1[1] = (float)param_1;
    puVar1[2] = (float)param_2;
    puVar1[3] = (float)param_3;
    puVar1[4] = param_4;
    dVar7 = 5.0;
    dVar6 = 10.0;
    uVar3 = FastDoubleToInt((double)(10.0 / (g_FrameTime * 5.0)));
    puVar1[5] = uVar3;
    dVar4 = (double)MB_randRangeFloat(0.999,0.97);
    puVar1[6] = (float)dVar4;
    uVar5 = 0x40fec30020000000;
    FastDoubleToInt
              ((double)(float)(dVar6 / (double)(float)((double)g_FrameTime * dVar7)),
               0x40fec30020000000);
    SpawnPart_26(uVar5,pMVar2);
  }
  return pMVar2;
}


// 0x01bc250 (0x304 bytes)
/* Moby 1090 */

void UpdateMoby_1090(MobyInstance *moby)

{
  float fVar1;
  undefined4 *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  int iVar6;
  uint uVar7;
  MobyClass *pMVar8;
  undefined8 uVar5;
  double dVar9;
  double dVar10;
  undefined8 uVar11;
  double dVar12;
  double dVar13;
  GPiece<4> auStack_50;
  GPiece<4> auStack_4c;
  
  puVar2 = (undefined4 *)moby->pVar;
  fVar1 = (float)puVar2[1] + (float)puVar2[2];
  puVar2[1] = fVar1;
  uVar11 = 0x3ff0000000000000;
  puVar2[2] = (float)puVar2[2] * (((float)puVar2[6] - 1.0) * DAT_0071f408 + 1.0);
  MB_PathPosAtDist
            ((double)fVar1,(double)(float)puVar2[3],&DAT_001bc230,&DAT_00720000,*puVar2,auStack_50,
             auStack_4c,(longlong)(int)moby + 0x10);
  dVar9 = (double)MB_randRot();
  (moby->rotation).x = (float)dVar9;
  dVar9 = (double)MB_randRot();
  (moby->rotation).y = (float)dVar9;
  dVar9 = (double)MB_randRot();
  (moby->rotation).z = (float)dVar9;
  iVar6 = FastDecTimerS32(puVar2 + 5);
  if (iVar6 == 0) {
    dVar12 = 5.0;
    dVar13 = 10.0;
    iVar6 = puVar2[5];
    uVar7 = FastDoubleToInt((double)(10.0 / (g_FrameTime * 5.0)));
    dVar9 = 0.5;
    if (iVar6 < (int)(((int)uVar7 >> 1) + (uint)((int)uVar7 < 0 && (uVar7 & 1) != 0))) {
      uVar7 = FastDoubleToInt
                        ((double)(float)(dVar13 / (double)(float)((double)g_FrameTime *
                                                                 dVar12)));
      dVar12 = (double)FastIntToDouble
                                 (((int)uVar7 >> 1) + (uint)((int)uVar7 < 0 && (uVar7 & 1) != 0));
      dVar13 = (double)FastIntToDouble(puVar2[5]);
      pMVar8 = moby->pClass;
      fVar1 = (float)((double)(float)((double)(float)((double)pMVar8->gScale * dVar13) / dVar12) *
                     dVar9);
      moby->scale = fVar1;
    }
    else {
      iVar6 = puVar2[5];
      uVar7 = FastDoubleToInt
                        ((double)(float)(dVar13 / (double)(float)((double)g_FrameTime *
                                                                 dVar12)));
      fVar1 = moby->scale;
      pMVar8 = moby->pClass;
      if ((int)((((int)uVar7 >> 2) + (uint)((int)uVar7 < 0 && (uVar7 & 3) != 0)) * 3) < iVar6) {
        uVar7 = FastDoubleToInt
                          ((double)(float)(dVar13 / (double)(float)((double)g_FrameTime *
                                                                   dVar12)));
        dVar10 = (double)FastIntToDouble
                                   (((int)uVar7 >> 2) + (uint)((int)uVar7 < 0 && (uVar7 & 3) != 0));
        iVar6 = FastDoubleToInt
                          ((double)(float)(dVar13 / (double)(float)((double)g_FrameTime *
                                                                   dVar12)));
        dVar12 = (double)FastIntToDouble(iVar6 - puVar2[5]);
        pMVar8 = moby->pClass;
        fVar1 = (float)((double)(float)((double)(float)((double)pMVar8->gScale * dVar12) / dVar10) *
                       dVar9);
        moby->scale = fVar1;
      }
    }
    if (pMVar8->gScale * 0.25 < fVar1) {
      uVar5 = CollMobySphere
                        (0x3fc3333340000000,(longlong)(int)moby + 0x10,0x1c0000,0x10,puVar2[4],0);
      uVar3.piece<0,4>() = (moby->pos).x;
      uVar3.piece<4,4>() = (moby->pos).y;
      uVar4.piece<0,4>() = (moby->pos).z;
      uVar4.piece<4,4>() = (moby->pos).w;
      MB_DamageMobyList
                (0x4000000000000000,uVar11,uVar11,puVar2[4],puVar2[4],uVar3,uVar4,&DAT_00a14a00,
                 uVar5,0,&DAT_00810001);
    }
  }
  else {
    DeleteMoby(moby);
  }
  return;
}


