// game/update/moby313.cpp -- reconstructed from NPEA00385 EBOOT
// STATUS: NOT STARTED (raw Ghidra output)
// 3 functions, 0x33f594-0x33fcc0
#include "game/update/moby313.h"
#include "game/camera.h"
#include "game/collproc.h"
#include "game/hero.h"
#include "game/mobyfunc.h"
#include "game/mobyproc.h"
#include "game/mobyutil.h"
#include "game/partupd.h"
#include "idol/fastfunc.h"

// 0x033f594 (0x14 bytes)
void M313_0033f594(void)

{
  DAT_00811f6c = 0x10000;
  return;
}


// 0x033f5c0 (0x1c8 bytes)
MobyInstance *
FUN_0033f5c0(int param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,undefined8 param_5
            ,undefined8 param_6)

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
  
  pMVar3 = CreateMoby(0x139);
  if (pMVar3 != (MobyInstance *)0x0) {
    puVar1 = (undefined4 *)pMVar3->pVar;
    puVar1[6] = param_1;
    pMVar3->updateDistance = '\x7f';
    pMVar3->drawDistance = 0x7f;
    uVar2 = *(undefined8 *)(param_1 + 0x38);
    pMVar3->enabled = '\x01';
    pMVar3->color = (int)((ulonglong)uVar2 >> 0x20);
    pMVar3->light = (int)uVar2;
    dVar5 = (double)MB_randRot();
    (pMVar3->rotation).x = (float)dVar5;
    dVar5 = (double)MB_randRot();
    (pMVar3->rotation).y = (float)dVar5;
    dVar5 = (double)MB_randRot();
    (pMVar3->rotation).z = (float)dVar5;
    fStack00000044 = (f32)param_3;
    (pMVar3->pos).y = fStack00000044;
    fStack0000004c = (f32)param_4;
    uStack00000054 = (undefined4)param_5;
    (pMVar3->pos).w = fStack0000004c;
    uStack0000005c = (undefined4)param_6;
    fStack00000040 = (f32)((ulonglong)param_3 >> 0x20);
    fStack00000048 = (f32)((ulonglong)param_4 >> 0x20);
    (pMVar3->pos).x = fStack00000040;
    (pMVar3->pos).z = fStack00000048;
    uStack00000050 = (undefined4)((ulonglong)param_5 >> 0x20);
    uStack00000058 = (undefined4)((ulonglong)param_6 >> 0x20);
    *puVar1 = uStack00000050;
    puVar1[1] = uStack00000054;
    puVar1[2] = uStack00000058;
    puVar1[3] = uStack0000005c;
    dVar5 = (double)MB_randRangeFloat
                              (g_FrameTime * -12.566371,g_FrameTime * 12.566371)
    ;
    puVar1[4] = (float)dVar5;
    dVar5 = (double)MB_randRangeFloat
                              (g_FrameTime * -6.2831855,g_FrameTime * 6.2831855)
    ;
    puVar1[5] = (float)dVar5;
    iVar4 = MB_randRange(0x1e,0x2d);
    puVar1[7] = (int)(animationSpeed * ((float)(longlong)iVar4 + 0.5));
    UpdateMobyTransform(pMVar3);
  }
  return pMVar3;
}


// 0x033f7c8 (0x4f8 bytes)
/* Moby 313 */

void UpdateMoby_313(MobyInstance *moby)

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
  undefined8 uVar13;
  double dVar14;
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
  dVar14 = 0.0;
  if (((fVar2 < 0.0 || fVar1 < 0.0) || (fVar3 < 0.0)) ||
     (64.0 < SQRT((fVar1 - GameCamera.posX) * (fVar1 - GameCamera.posX) +
                  (fVar2 - GameCamera.posY) * (fVar2 - GameCamera.posY)))) {
    DeleteMoby(moby);
  }
  else {
    dVar8 = (double)FastWrapRot((moby->rotation).z,pfVar4[4]);
    (moby->rotation).z = (float)dVar8;
    dVar8 = (double)FastWrapRot((moby->rotation).y,pfVar4[5]);
    (moby->rotation).y = (float)dVar8;
    pfVar4[2] = -(DAT_0071f418 * 9.8 - pfVar4[2]);
    iVar7 = FastDecTimerS32(pfVar4 + 7);
    if (iVar7 == 0) {
      iVar7 = CollLine(local_a0,lVar5 + 0x10,2,lVar5,0);
      if (iVar7 != 0) {
        FastVecReflect(pfVar4,pfVar4,0xa10980);
        dVar8 = (double)MB_randRangeFloat(0.45,0.75);
        fVar1 = (float)((double)pfVar4[1] * dVar8);
        fVar2 = (float)((double)*pfVar4 * dVar8);
        fVar3 = (float)((double)pfVar4[2] * dVar8);
        *pfVar4 = fVar2;
        pfVar4[1] = fVar1;
        pfVar4[2] = fVar3;
        if (SQRT(fVar3 * fVar3 + fVar2 * fVar2 + fVar1 * fVar1) < DAT_0071f418 * 10.0) {
          pfVar4[3] = 0.0;
          pfVar4[2] = 0.0;
          pfVar4[1] = 0.0;
          *pfVar4 = 0.0;
        }
        dVar9 = (double)SQRT(g_CollOutput.normal.z * g_CollOutput.normal.z +
                             g_CollOutput.normal.x * g_CollOutput.normal.x +
                             g_CollOutput.normal.y * g_CollOutput.normal.y);
        fVar1 = (float)(0.05000000074505806 / dVar9);
        dVar8 = dVar14;
        if (dVar14 - dVar9 < 0.0) {
          dVar8 = (double)(g_CollOutput.normal.x * fVar1);
        }
        dVar10 = dVar14;
        if (dVar14 - dVar9 < 0.0) {
          dVar10 = (double)(g_CollOutput.normal.y * fVar1);
        }
        dVar11 = dVar14;
        if (dVar14 - dVar9 < 0.0) {
          dVar11 = (double)(g_CollOutput.normal.z * fVar1);
        }
        if (dVar9 - dVar14 < 0.0) {
          dVar8 = (double)(g_CollOutput.normal.x * fVar1);
        }
        if (dVar9 - dVar14 < 0.0) {
          dVar10 = (double)(g_CollOutput.normal.y * fVar1);
        }
        if (dVar9 - dVar14 < 0.0) {
          dVar11 = (double)(g_CollOutput.normal.z * fVar1);
        }
        g_CollOutput.normal.x = (float)dVar8;
        g_CollOutput.normal.y = (float)dVar10;
        g_CollOutput.normal.z = (float)dVar11;
        (moby->pos).x = (float)((double)g_CollOutput.ip.x + dVar8);
        (moby->pos).y = (float)((double)g_CollOutput.ip.y + dVar10);
        (moby->pos).z = (float)((double)g_CollOutput.ip.z + dVar11);
        (moby->pos).w = g_CollOutput.ip.w;
      }
    }
    else {
      iVar7 = 0;
      dVar14 = -1.0;
      dVar8 = 1.0;
      dVar9 = 3.0;
      dVar10 = 6.0;
      dVar11 = 10.5;
      dVar12 = 15.5;
      uVar13 = 0x40dd4c0000000000;
      do {
        MB_randRangeFloat((float)dVar14,(float)dVar8);
        MB_randRangeFloat((float)dVar14,(float)dVar8);
        MB_randRangeFloat((float)dVar14,(float)dVar8);
        MB_randRangeFloat
                  ((float)((double)g_FrameTime * dVar9),
                   (float)((double)g_FrameTime * dVar10));
        uVar6 = MB_randRange
                          ((int)((double)animationSpeed * dVar11),
                           (int)((double)animationSpeed * dVar12));
        SpawnPart_27(uVar13,lVar5 + 0x10,local_90,0x7f2f4f6f,uVar6);
        iVar7 = iVar7 + 1;
      } while (iVar7 < 2);
      DeleteMoby(moby);
    }
  }
  return;
}


