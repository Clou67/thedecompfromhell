// game/update/moby129.cpp -- reconstructed from NPEA00385 EBOOT
// STATUS: NOT STARTED (raw Ghidra output)
// 5 functions, 0x1b7028-0x1b7a60
// shared update function UpdateMoby_a_lot_4; registered for oClasses 129, 130, 182, 183, 360, 1063, 1078, 1079, 1131
#include <math.h>
#include "game/update/moby129.h"
#include "game/collproc.h"
#include "game/debug.h"
#include "game/hero.h"
#include "game/map.h"
#include "game/mobyfunc.h"
#include "game/mobyutil.h"
#include "game/sound.h"
#include "idol/fastfunc.h"

// 0x01b7028 (0xd8 bytes)
void FUN_001b7028(undefined8 param_1,f32 *param_2,undefined4 *param_3)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  MobyInstance *pMVar3;
  undefined8 in_LR;
  GPiece<16> auVar4;
  GPiece<16> auVar5;
  GPiece<16> auVar6;
  
  pMVar3 = CreateMoby(TRANSPORT_POD_RING|ELEVATOR_0015);
  if (pMVar3 != (MobyInstance *)0x0) {
    auVar4 = ZEXT416(0xffffffff);
    auVar4 = auVar4 | auVar4 << 0x20 | auVar4 << 0x40 | auVar4 << 0x60;
    pMVar3->updateDistance = -1;
    pMVar3->drawDistance = 0xff;
    pMVar3->enabled = '\x01';
    auVar5 = vectorShiftLeftIntegerWord(auVar4,auVar4);
    (pMVar3->pos).x = *param_2;
    (pMVar3->pos).y = param_2[1];
    puVar1 = (undefined4 *)pMVar3->pVar;
    (pMVar3->pos).z = param_2[2];
    (pMVar3->pos).w = param_2[3];
    *puVar1 = *param_3;
    puVar1[1] = param_3[1];
    puVar1[2] = param_3[2];
    puVar1[3] = param_3[3];
    auVar4 = loadVectorLeftIndexed(in_LR,0x1b7020);
    auVar6 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
    auVar4 = auVar4 >> 0x60 & (GPiece<16>)0xffffffff;
    auVar4 = vectorMultiplyAddFloatingPoint
                       (auVar6,auVar4 | auVar4 << 0x20 | auVar4 << 0x40 | auVar4 << 0x60,auVar5);
    auVar4 = vectorConvertToSignedFixedPointWordSaturate(auVar4,0);
    auVar4 = auVar4 >> 0x60 & (GPiece<16>)0xffffffff;
    uVar2 = storeVectorElementWordIndexed
                      (auVar4 | auVar4 << 0x20 | auVar4 << 0x40 | auVar4 << 0x60,0x10,ZEXT48(puVar1)
                      );
    *(undefined4 *)((uint)(puVar1 + 4) & 0xfffffffc) = uVar2;
  }
  return;
}


// shared update function, registered for oClasses 129, 130, 182, 183, 360, 1063, 1078, 1079, 1131
// 0x01b7108 (0x6a8 bytes)
/* Moby 129
   Moby 130
   Moby 182
   Moby 183
   Moby 360
   Moby 1063
   Moby 1078
   Moby 1079
   Moby 1131 */

MobyInstance * UpdateMoby_129(MobyInstance *moby)

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
  float *pfVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  MobyInstance *pMVar17;
  
  pfVar12 = (float *)moby->pVar;
  if ((moby->levelFlagIdx != 0xff) && (g_LevelFlags[Level][(byte)moby->levelFlagIdx] == -1)) {
    pfVar12[4] = -NAN;
  }
  bVar1 = moby->state;
  pMVar17 = (MobyInstance *)(uint)bVar1;
  if (bVar1 == 4) {
    if (pfVar12[0xe] != -NAN) {
      (&DAT_00a20828)[(int)pfVar12[0xe]] = 0;
    }
    if ((((pfVar12[4] != -NAN) && (g_MobyInstance + (int)pfVar12[4] != (MobyInstance *)0x0)) &&
        (bVar1 = g_MobyInstance[(int)pfVar12[4]].state, bVar1 != 0xfd && bVar1 != 0xfe)) &&
       ((float)(uint)bVar1 != pfVar12[5])) {
      fVar2 = pfVar12[8];
      fVar3 = pfVar12[7];
      fVar4 = pfVar12[9];
      fVar5 = 0.0;
      fVar6 = (moby->transform).v1.y;
      fVar16 = SQRT(fVar4 * fVar4 + fVar3 * fVar3 + fVar2 * fVar2);
      fVar7 = (moby->transform).v1.z;
      fVar8 = (moby->transform).v0.y;
      fVar9 = (moby->transform).v0.z;
      fVar10 = (moby->transform).v2.y;
      fVar11 = (moby->transform).v2.z;
      fVar13 = -(pfVar12[0xb] * g_FrameTime) / fVar16;
      fVar15 = fVar5;
      if (0.0 - fVar16 < 0.0) {
        fVar15 = fVar13 * fVar2;
      }
      fVar14 = fVar5;
      if (0.0 - fVar16 < 0.0) {
        fVar14 = fVar13 * fVar3;
      }
      if (0.0 - fVar16 < 0.0) {
        fVar5 = fVar13 * fVar4;
      }
      if (fVar16 - 0.0 < 0.0) {
        fVar15 = fVar13 * fVar2;
      }
      if (fVar16 - 0.0 < 0.0) {
        fVar14 = fVar13 * fVar3;
      }
      if (fVar16 - 0.0 < 0.0) {
        fVar5 = fVar13 * fVar4;
      }
      (moby->pos).x =
           (moby->pos).x +
           (moby->transform).v2.x * fVar5 +
           (moby->transform).v0.x * fVar14 + (moby->transform).v1.x * fVar15;
      (moby->pos).y = (moby->pos).y + fVar10 * fVar5 + fVar8 * fVar14 + fVar6 * fVar15;
      (moby->pos).z = (moby->pos).z + fVar11 * fVar5 + fVar9 * fVar14 + fVar7 * fVar15;
      fVar2 = pfVar12[0xb] * g_FrameTime + pfVar12[3];
      pfVar12[3] = fVar2;
      if (fVar2 <= fVar16) {
        return (MobyInstance *)&DAT_00720000;
      }
      (moby->pos).x = *pfVar12;
      fVar2 = pfVar12[0xc];
      (moby->pos).y = pfVar12[1];
      (moby->pos).z = pfVar12[2];
      (moby->pos).w = pfVar12[3];
      if (fVar2 != -NAN) {
        PlayMobySound((int)pfVar12[0xd],0,moby);
      }
      if (pfVar12[0xe] != -NAN) {
        (&DAT_00a20828)[(int)pfVar12[0xe]] = 0;
      }
      moby->state = '\x01';
      return (MobyInstance *)0x1;
    }
    if (pfVar12[0xc] != -NAN) {
      PlayMobySound((int)pfVar12[0xc],0,moby);
    }
    pMVar17 = (MobyInstance *)0x2;
    moby->state = '\x02';
  }
  else if (bVar1 == 3) {
    if (pfVar12[0xe] != -NAN) {
      (&DAT_00a20828)[(int)pfVar12[0xe]] = 1;
    }
    pMVar17 = (MobyInstance *)pfVar12[4];
    if ((pMVar17 != (MobyInstance *)0xffffffff) &&
       (pMVar17 = g_MobyInstance + (int)pMVar17, pMVar17 != (MobyInstance *)0x0)) {
      bVar1 = pMVar17->state;
      pMVar17 = (MobyInstance *)(uint)bVar1;
      if ((bVar1 != 0xfd && bVar1 != 0xfe) && ((float)(uint)bVar1 == pfVar12[6])) {
        pfVar12[3] = 0.0;
        if (pfVar12[0xc] != -NAN) {
          PlayMobySound((int)pfVar12[0xc],0,moby);
        }
        pMVar17 = (MobyInstance *)0x4;
        moby->state = '\x04';
      }
    }
  }
  else if (bVar1 == 2) {
    if (pfVar12[0xe] != -NAN) {
      (&DAT_00a20828)[(int)pfVar12[0xe]] = 1;
    }
    if (((pfVar12[4] != -NAN) && (g_MobyInstance + (int)pfVar12[4] != (MobyInstance *)0x0)) &&
       ((bVar1 = g_MobyInstance[(int)pfVar12[4]].state, bVar1 != 0xfd && bVar1 != 0xfe &&
        ((float)(uint)bVar1 == pfVar12[6])))) {
      if (pfVar12[0xc] != -NAN) {
        PlayMobySound((int)pfVar12[0xc],0,moby);
      }
      moby->state = '\x04';
      return (MobyInstance *)0x4;
    }
    fVar2 = pfVar12[8];
    fVar3 = pfVar12[7];
    fVar4 = pfVar12[9];
    pMVar17 = (MobyInstance *)&DAT_00720000;
    fVar6 = (moby->transform).v2.y * fVar4 +
            (moby->transform).v0.y * fVar3 + (moby->transform).v1.y * fVar2;
    fVar5 = (moby->transform).v2.x * fVar4 +
            (moby->transform).v0.x * fVar3 + (moby->transform).v1.x * fVar2;
    fVar3 = (moby->transform).v2.z * fVar4 +
            (moby->transform).v0.z * fVar3 + (moby->transform).v1.z * fVar2;
    fVar2 = 0.0;
    fVar8 = SQRT(fVar3 * fVar3 + fVar5 * fVar5 + fVar6 * fVar6);
    fVar4 = (pfVar12[10] * g_FrameTime) / fVar8;
    fVar7 = fVar2;
    if (0.0 - fVar8 < 0.0) {
      fVar7 = fVar3 * fVar4;
    }
    fVar9 = fVar2;
    if (0.0 - fVar8 < 0.0) {
      fVar9 = fVar6 * fVar4;
    }
    if (0.0 - fVar8 < 0.0) {
      fVar2 = fVar5 * fVar4;
    }
    if (fVar8 - 0.0 < 0.0) {
      fVar7 = fVar3 * fVar4;
    }
    if (fVar8 - 0.0 < 0.0) {
      fVar9 = fVar6 * fVar4;
    }
    if (fVar8 - 0.0 < 0.0) {
      fVar2 = fVar5 * fVar4;
    }
    (moby->pos).z = (moby->pos).z + fVar7;
    (moby->pos).y = (moby->pos).y + fVar9;
    (moby->pos).x = (moby->pos).x + fVar2;
    fVar2 = -(pfVar12[10] * g_FrameTime - pfVar12[3]);
    pfVar12[3] = fVar2;
    if (fVar2 < 0.0) {
      (moby->pos).x = *pfVar12 + fVar5;
      (moby->pos).y = pfVar12[1] + fVar6;
      (moby->pos).z = pfVar12[2] + fVar3;
      (moby->pos).w = pfVar12[3];
      pfVar12[3] = 0.0;
      moby->state = '\x03';
      pMVar17 = (MobyInstance *)pfVar12[0xd];
      if (pMVar17 != (MobyInstance *)0xffffffff) {
        pMVar17 = (MobyInstance *)PlayMobySound((int)pfVar12[0xc],0,moby);
      }
    }
  }
  else if (bVar1 == 1) {
    if (pfVar12[0xe] != -NAN) {
      (&DAT_00a20828)[(int)pfVar12[0xe]] = 0;
    }
    if ((pfVar12[4] != -NAN) && (g_MobyInstance + (int)pfVar12[4] != (MobyInstance *)0x0)) {
      bVar1 = g_MobyInstance[(int)pfVar12[4]].state;
      if ((bVar1 != 0xfd && bVar1 != 0xfe) && ((float)(uint)bVar1 != pfVar12[5])) {
        return (MobyInstance *)(uint)bVar1;
      }
    }
    pfVar12[3] = SQRT(pfVar12[9] * pfVar12[9] + pfVar12[7] * pfVar12[7] + pfVar12[8] * pfVar12[8]);
    if (pfVar12[0xc] != -NAN) {
      PlayMobySound((int)pfVar12[0xc],0,moby);
    }
    pMVar17 = (MobyInstance *)0x2;
    moby->state = '\x02';
  }
  else if (bVar1 == 0) {
    *pfVar12 = (moby->pos).x;
    pfVar12[1] = (moby->pos).y;
    pfVar12[2] = (moby->pos).z;
    pfVar12[3] = (moby->pos).w;
    if (pfVar12[0xe] != -NAN) {
      (&DAT_00a20828)[(int)pfVar12[0xe]] = 0;
    }
    pMVar17 = (MobyInstance *)0x1;
    moby->state = '\x01';
    pfVar12[3] = 0.0;
  }
  return pMVar17;
}


// 0x01b77b0 (0x14 bytes)
void M1131_001b77b0(void)

{
  DAT_00757fb4 = 0x10000;
  return;
}


// 0x01b77f0 (0xc8 bytes)
void M108_001b77f0
               (double param_1,undefined8 param_2,double param_3,double param_4)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  double dVar5;
  double dVar6;
  
  fVar1 = (float)(param_3 / param_4) * 3.1415925 + 1.5707963;
  fVar2 = 3.1415925 - fVar1;
  if (fVar1 - (3.1415925 - fVar1) < 0.0) {
    fVar2 = fVar1;
  }
  fVar3 = -3.1415925 - fVar1;
  if ((-3.1415925 - fVar1) - fVar2 < 0.0) {
    fVar3 = fVar2;
  }
  fVar1 = fVar3 * fVar3;
  fVar2 = fVar1 * fVar1 * fVar3;
  fVar4 = fVar1 * fVar2;
  dVar6 = (double)((fVar1 * fVar4 * 2.601887e-06 +
                    fVar4 * -0.0001980741 +
                    fVar2 * 0.0083330255 + fVar1 * fVar3 * -0.16666657 + fVar3 + 1.0) * 0.5);
  dVar5 = (double)FastDiffRots(param_2,param_1);
  FastWrapRot((float)(dVar5 * dVar6),(float)param_1);
  return;
}


// 0x01b78c0 (0x1a0 bytes)
void M108_001b78c0
               (double param_1,double param_2,MobyInstance *param_3,float *param_4,float *param_5)

{
  double dVar1;
  double dVar2;
  float fVar3;
  float fVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  float local_40 [6];
  
  dVar5 = (double)*param_4;
  dVar7 = (double)(param_5[1] - param_4[1]);
  dVar8 = (double)(float)((double)*param_5 - dVar5);
  dVar6 = (double)(param_5[2] - param_4[2]);
  fVar3 = DAT_00757fd8 * g_FrameTime * (float)(param_2 - param_1);
  fVar4 = SQRT((float)(dVar6 * dVar6 +
                      (double)(float)(dVar8 * dVar8 + (double)(float)(dVar7 * dVar7))));
  if (fVar3 < fVar4) {
    dVar9 = (double)(fVar3 / fVar4);
    dVar10 = 0.0;
    dVar1 = dVar8 * dVar9;
    dVar2 = dVar7 * dVar9;
    dVar9 = dVar6 * dVar9;
    dVar8 = dVar10;
    if (0.0 - fVar4 < 0.0) {
      dVar8 = (double)(float)dVar1;
    }
    dVar7 = dVar10;
    if (0.0 - fVar4 < 0.0) {
      dVar7 = (double)(float)dVar2;
    }
    if (0.0 - fVar4 < 0.0) {
      dVar10 = (double)(float)dVar9;
    }
    if (fVar4 - 0.0 < 0.0) {
      dVar8 = (double)(float)dVar1;
    }
    if (fVar4 - 0.0 < 0.0) {
      dVar7 = (double)(float)dVar2;
    }
    dVar6 = dVar10;
    if (fVar4 - 0.0 < 0.0) {
      dVar6 = (double)(float)dVar9;
    }
    if ((DAT_00969f1c == param_3) || (DAT_00969f20 == param_3)) {
      local_40[3] = 0.0;
      local_40[1] = 0.0;
      local_40[0] = 0.0;
      local_40[2] = 3.0;
      CollDamageMobyDirect
                (1.0,g_heroMobyPtr,param_3,1,0x40400000,&(param_3->pos).x,local_40);
      dVar5 = (double)*param_4;
    }
  }
  (param_3->pos).x = (float)(dVar5 + dVar8);
  (param_3->pos).y = (float)((double)param_4[1] + dVar7);
  (param_3->pos).z = (float)((double)param_4[2] + dVar6);
  (param_3->pos).w = param_4[3];
  return;
}


