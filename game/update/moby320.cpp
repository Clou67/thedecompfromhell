// game/update/moby320.cpp -- reconstructed from NPEA00385 EBOOT
// STATUS: NOT STARTED (raw Ghidra output)
// 2 functions, 0x341590-0x341d80
// shared update function UpdateMoby_{320_321}; registered for oClasses 320, 321
#include "game/update/moby320.h"
#include "game/camera.h"
#include "game/collproc.h"
#include "game/hero.h"
#include "game/mobyfunc.h"
#include "game/mobyproc.h"
#include "game/mobyutil.h"
#include "game/partupd.h"
#include "idol/fastfunc.h"

// 0x0341590 (0x1e8 bytes)
MobyInstance *
FUN_00341590(double param_1,int param_2,undefined8 param_3,undefined8 param_4,undefined8 param_5,
            undefined8 param_6,undefined8 param_7,short param_8)

{
  undefined4 *puVar1;
  MobyInstance *pMVar3;
  undefined8 uVar2;
  int iVar4;
  double dVar5;
  f32 fStack00000040;
  f32 fStack00000044;
  f32 fStack00000048;
  f32 fStack0000004c;
  undefined4 uStack00000050;
  undefined4 uStack00000054;
  undefined4 uStack00000058;
  undefined4 uStack0000005c;
  
  pMVar3 = CreateMoby(param_8 + 0x140);
  if (pMVar3 != (MobyInstance *)0x0) {
    puVar1 = (undefined4 *)pMVar3->pVar;
    puVar1[6] = param_2;
    pMVar3->updateDistance = '\x7f';
    pMVar3->drawDistance = 0x7f;
    uVar2 = *(undefined8 *)(param_2 + 0x38);
    pMVar3->enabled = '\x01';
    pMVar3->color = (int)((ulonglong)uVar2 >> 0x20);
    pMVar3->light = (int)uVar2;
    dVar5 = (double)MB_randRot();
    (pMVar3->rotation).x = (float)dVar5;
    dVar5 = (double)MB_randRot();
    (pMVar3->rotation).y = (float)dVar5;
    dVar5 = (double)MB_randRot();
    (pMVar3->rotation).z = (float)dVar5;
    fStack00000044 = (f32)param_4;
    fStack0000004c = (f32)param_5;
    (pMVar3->pos).y = fStack00000044;
    (pMVar3->pos).w = fStack0000004c;
    uStack00000054 = (undefined4)param_6;
    uStack0000005c = (undefined4)param_7;
    fStack00000040 = (f32)((ulonglong)param_4 >> 0x20);
    fStack00000048 = (f32)((ulonglong)param_5 >> 0x20);
    (pMVar3->pos).x = fStack00000040;
    (pMVar3->pos).z = fStack00000048;
    uStack00000050 = (undefined4)((ulonglong)param_6 >> 0x20);
    uStack00000058 = (undefined4)((ulonglong)param_7 >> 0x20);
    *puVar1 = uStack00000050;
    puVar1[1] = uStack00000054;
    puVar1[2] = uStack00000058;
    puVar1[3] = uStack0000005c;
    pMVar3->scale = (float)((double)pMVar3->pClass->gScale * param_1);
    dVar5 = (double)MB_randRangeFloat
                              (g_FrameTime * -9.075712,g_FrameTime * 9.075712);
    puVar1[4] = (float)dVar5;
    dVar5 = (double)MB_randRangeFloat
                              (g_FrameTime * -6.2831855,g_FrameTime * 6.2831855)
    ;
    puVar1[5] = (float)dVar5;
    iVar4 = MB_randRange(0x5a,0x6e);
    puVar1[7] = (int)(animationSpeed * ((float)(longlong)iVar4 + 0.5));
    UpdateMobyTransform(pMVar3);
  }
  return pMVar3;
}


// shared update function, registered for oClasses 320, 321
// 0x03417c8 (0x5b8 bytes)
/* Moby 320
   Moby 321 */

void UpdateMoby_320(MobyInstance *moby)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float *pfVar4;
  longlong lVar5;
  int iVar7;
  undefined8 uVar6;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  undefined8 uVar16;
  GPiece<16> local_a0;
  GPiece<32> local_90;
  
  lVar5 = (longlong)(int)moby;
  pfVar4 = (float *)moby->pVar;
  fVar1 = (moby->pos).x + *pfVar4;
  (moby->pos).x = fVar1;
  fVar2 = (moby->pos).y + pfVar4[1];
  (moby->pos).y = fVar2;
  fVar3 = (moby->pos).z + pfVar4[2];
  (moby->pos).z = fVar3;
  if (2.0 <= fVar1) {
    if ((((fVar1 <= 1021.0) && (2.0 <= fVar2)) && (fVar2 <= 1021.0)) &&
       (((2.0 <= fVar3 && (fVar3 <= 1021.0)) &&
        (SQRT((fVar1 - GameCamera.posX) * (fVar1 - GameCamera.posX) +
              (fVar2 - GameCamera.posY) * (fVar2 - GameCamera.posY)) <= 64.0)))) {
      dVar8 = (double)FastWrapRot((moby->rotation).z,pfVar4[4]);
      (moby->rotation).z = (float)dVar8;
      dVar8 = (double)FastWrapRot((moby->rotation).y,pfVar4[5]);
      (moby->rotation).y = (float)dVar8;
      pfVar4[2] = -(DAT_0071f418 * 12.74 - pfVar4[2]);
      iVar7 = FastDecTimerS32(pfVar4 + 7);
      if (iVar7 != 0) {
        iVar7 = 0;
        dVar8 = -1.0;
        dVar11 = 1.0;
        dVar12 = 3.0;
        dVar13 = 6.0;
        dVar14 = 10.5;
        dVar15 = 15.5;
        uVar16 = 0x40f86a0000000000;
        do {
          MB_randRangeFloat((float)dVar8,(float)dVar11);
          MB_randRangeFloat((float)dVar8,(float)dVar11);
          MB_randRangeFloat((float)dVar8,(float)dVar11);
          MB_randRangeFloat
                    ((float)((double)g_FrameTime * dVar12),
                     (float)((double)g_FrameTime * dVar13));
          uVar6 = MB_randRange
                            ((int)((double)animationSpeed * dVar14),
                             (int)((double)animationSpeed * dVar15));
          SpawnPart_27(uVar16,lVar5 + 0x10,local_90,0x7f2f4f6f,uVar6);
          iVar7 = iVar7 + 1;
        } while (iVar7 < 8);
        DeleteMoby(moby);
        return;
      }
      iVar7 = CollLine(local_a0,lVar5 + 0x10,2,lVar5,0);
      if (iVar7 == 0) {
        return;
      }
      iVar7 = CollHotspot();
      if (iVar7 == 1) {
        *pfVar4 = *pfVar4 * 0.4;
        pfVar4[1] = pfVar4[1] * 0.4;
        pfVar4[2] = pfVar4[2] * 0.4;
        pfVar4[4] = pfVar4[4] * 0.25;
        pfVar4[5] = pfVar4[5] * 0.25;
        return;
      }
      moby->scale = moby->scale * 0.8;
      FastVecReflect(pfVar4,pfVar4,0xa10980);
      dVar8 = (double)MB_randRangeFloat(0.3,0.1);
      fVar1 = (float)((double)pfVar4[1] * dVar8);
      fVar2 = (float)((double)*pfVar4 * dVar8);
      fVar3 = (float)((double)pfVar4[2] * dVar8);
      *pfVar4 = fVar2;
      pfVar4[1] = fVar1;
      pfVar4[2] = fVar3;
      if (SQRT(fVar3 * fVar3 + fVar2 * fVar2 + fVar1 * fVar1) < g_FrameTime * 5.0) {
        pfVar4[7] = 0.0;
      }
      dVar15 = 0.0;
      dVar8 = (double)MB_randRangeFloat(0.0,-pfVar4[4]);
      pfVar4[4] = (float)dVar8;
      dVar8 = (double)MB_randRangeFloat((float)dVar15,-pfVar4[5]);
      pfVar4[5] = (float)dVar8;
      dVar12 = (double)g_CollOutput.ip.x;
      dVar13 = (double)g_CollOutput.ip.y;
      dVar14 = (double)g_CollOutput.ip.z;
      dVar11 = (double)SQRT(g_CollOutput.normal.z * g_CollOutput.normal.z +
                            g_CollOutput.normal.x * g_CollOutput.normal.x +
                            g_CollOutput.normal.y * g_CollOutput.normal.y);
      fVar1 = (float)(0.05000000074505806 / dVar11);
      dVar8 = dVar15;
      if (dVar15 - dVar11 < 0.0) {
        dVar8 = (double)(g_CollOutput.normal.x * fVar1);
      }
      dVar9 = dVar15;
      if (dVar15 - dVar11 < 0.0) {
        dVar9 = (double)(g_CollOutput.normal.y * fVar1);
      }
      dVar10 = dVar15;
      if (dVar15 - dVar11 < 0.0) {
        dVar10 = (double)(g_CollOutput.normal.z * fVar1);
      }
      if (dVar11 - dVar15 < 0.0) {
        dVar8 = (double)(g_CollOutput.normal.x * fVar1);
      }
      if (dVar11 - dVar15 < 0.0) {
        dVar9 = (double)(g_CollOutput.normal.y * fVar1);
      }
      if (dVar11 - dVar15 < 0.0) {
        dVar10 = (double)(g_CollOutput.normal.z * fVar1);
      }
      g_CollOutput.normal.x = (float)dVar8;
      g_CollOutput.normal.y = (float)dVar9;
      g_CollOutput.normal.z = (float)dVar10;
      (moby->pos).w = g_CollOutput.ip.w;
      (moby->pos).x = (float)(dVar12 + dVar8);
      (moby->pos).y = (float)(dVar13 + dVar9);
      (moby->pos).z = (float)(dVar14 + dVar10);
      return;
    }
  }
  DeleteMoby(moby);
  return;
}


