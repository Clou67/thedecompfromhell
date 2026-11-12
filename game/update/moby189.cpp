// game/update/moby189.cpp -- reconstructed from NPEA00385 EBOOT
// STATUS: NOT STARTED (raw Ghidra output)
// 1 functions, 0x2d0c98-0x2d12b0
#include "game/update/moby189.h"
#include "game/camera.h"
#include "game/collproc.h"
#include "game/hero.h"
#include "game/mobyfunc.h"
#include "game/mobyutil.h"
#include "game/partupd.h"
#include "idol/fastfunc.h"

// 0x02d0c98 (0x618 bytes)
/* Moby 189 */

void UpdateMoby_189(MobyInstance *moby)

{
  float fVar1;
  float *pfVar2;
  float fVar3;
  int iVar5;
  undefined8 uVar4;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  undefined8 uVar14;
  GPiece<16> local_a0;
  undefined4 local_90 [8];
  
  pfVar2 = (float *)moby->pVar;
  fVar1 = (moby->rotation).x;
  (moby->pos).x = (moby->pos).x + *pfVar2;
  (moby->pos).y = (moby->pos).y + pfVar2[1];
  (moby->pos).z = (moby->pos).z + pfVar2[2];
  dVar6 = (double)FastWrapRot(fVar1,pfVar2[4]);
  (moby->rotation).x = (float)dVar6;
  dVar6 = (double)FastWrapRot((moby->rotation).y,pfVar2[5]);
  (moby->rotation).y = (float)dVar6;
  dVar6 = 0.0;
  if (((((int)(moby->pos).x < 0) || ((int)(moby->pos).y < 0)) || ((int)(moby->pos).z < 0)) ||
     (fVar1 = (moby->pos).y - GameCamera.posY, fVar3 = (moby->pos).x - GameCamera.posX,
     64.0 < SQRT(fVar3 * fVar3 + fVar1 * fVar1))) {
    DeleteMoby(moby);
  }
  else {
    fVar1 = pfVar2[2];
    if (SQRT(fVar1 * fVar1 + *pfVar2 * *pfVar2 + pfVar2[1] * pfVar2[1]) != 0.0) {
      pfVar2[2] = -(g_FrameTimeSq * 9.8 - fVar1);
    }
    iVar5 = FastDecTimerS32(pfVar2 + 7);
    if (iVar5 == 0) {
      iVar5 = CollLine(local_a0,(longlong)(int)moby + 0x10,0,g_heroMobyPtr,0);
      if (iVar5 != 0) {
        dVar9 = (double)SQRT(g_CollOutput.normal.z * g_CollOutput.normal.z +
                             g_CollOutput.normal.x * g_CollOutput.normal.x +
                             g_CollOutput.normal.y * g_CollOutput.normal.y);
        dVar7 = dVar6;
        dVar8 = dVar6;
        if (dVar9 != dVar6) {
          fVar1 = (float)(0.009999999776482582 / dVar9);
          dVar6 = (double)(g_CollOutput.normal.y * fVar1);
          dVar7 = (double)(g_CollOutput.normal.x * fVar1);
          dVar8 = (double)(g_CollOutput.normal.z * fVar1);
        }
        (moby->pos).x = (float)((double)g_CollOutput.ip.x + dVar7);
        (moby->pos).y = (float)((double)g_CollOutput.ip.y + dVar6);
        (moby->pos).z = (float)((double)g_CollOutput.ip.z + dVar8);
        (moby->pos).w = g_CollOutput.ip.w;
        FastVecReflect(pfVar2,pfVar2,0xa10980);
        dVar6 = (double)MB_randRangeFloat(0.45,0.65);
        *pfVar2 = (float)((double)*pfVar2 * dVar6);
        pfVar2[1] = (float)((double)pfVar2[1] * dVar6);
        pfVar2[2] = (float)((double)pfVar2[2] * dVar6) * 0.5;
        dVar8 = -0.5;
        dVar7 = -1.5;
        dVar6 = (double)MB_randRangeFloat(-0.5,-1.5);
        dVar6 = (double)FastAddRots((float)((double)pfVar2[4] * dVar6));
        pfVar2[4] = (float)dVar6;
        dVar6 = (double)MB_randRangeFloat((float)dVar8,(float)dVar7);
        dVar6 = (double)FastAddRots((float)((double)pfVar2[5] * dVar6));
        pfVar2[5] = (float)dVar6;
        if (SQRT(pfVar2[2] * pfVar2[2] + *pfVar2 * *pfVar2 + pfVar2[1] * pfVar2[1]) <
            g_FrameTimeSq * 9.8) {
          pfVar2[3] = 0.0;
          pfVar2[2] = 0.0;
          pfVar2[1] = 0.0;
          *pfVar2 = 0.0;
          pfVar2[4] = 0.0;
          pfVar2[5] = 0.0;
        }
      }
    }
    else {
      iVar5 = 0;
      dVar7 = -1.0;
      dVar8 = 1.0;
      dVar9 = 0.25;
      dVar10 = 0.5;
      dVar11 = 2.0;
      dVar12 = 10.5;
      dVar13 = 15.5;
      uVar14 = 0x40b3880000000000;
      do {
        MB_randRangeFloat((float)dVar7,(float)dVar8);
        MB_randRangeFloat((float)dVar7,(float)dVar8);
        MB_randRangeFloat((float)dVar7,(float)dVar8);
        if ((double)SQRT(pfVar2[2] * pfVar2[2] + *pfVar2 * *pfVar2 + pfVar2[1] * pfVar2[1]) != dVar6
           ) {
          MB_randRangeFloat((float)dVar9,(float)dVar10);
        }
        MB_randRangeFloat
                  (g_FrameTime,(float)((double)g_FrameTime * dVar11));
        uVar4 = MB_randRange
                          ((int)((double)animationSpeed * dVar12),
                           (int)((double)animationSpeed * dVar13));
        SpawnPart_27(uVar14,(longlong)(int)moby + 0x10,local_90,0x7f2f4f6f,uVar4);
        iVar5 = iVar5 + 1;
      } while (iVar5 < 5);
      DeleteMoby(moby);
    }
  }
  return;
}


