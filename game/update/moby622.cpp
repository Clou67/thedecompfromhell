// game/update/moby622.cpp -- reconstructed from NPEA00385 EBOOT
// STATUS: NOT STARTED (raw Ghidra output)
// 4 functions, 0x3e2a60-0x3e30a0
#include <stdio.h>
#include "game/update/moby622.h"
#include "game/camera.h"
#include "game/collproc.h"
#include "game/hero.h"
#include "game/mobyfunc.h"
#include "game/mobyproc.h"
#include "game/mobyutil.h"
#include "game/partupd.h"
#include "game/path.h"
#include "game/walk.h"
#include "idol/fastfunc.h"

// 0x03e2a60 (0xfc bytes)
MobyInstance * M622_003e2a60(f32 *param_1,int param_2,longlong param_3)

{
  float fVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  MobyInstance *pMVar5;
  undefined8 uVar4;
  
  pMVar5 = CreateMoby(THRUSTERPACK|BOLT);
  if (pMVar5 != (MobyInstance *)0x0) {
    pMVar5->updateDistance = -1;
    pMVar5->drawDistance = 0x7e;
    pMVar5->enabled = '\x01';
    uVar4 = *(undefined8 *)(param_2 + 0x38);
    pMVar5->state = '\x02';
    pMVar5->color = (int)((ulonglong)uVar4 >> 0x20);
    pMVar5->light = (int)uVar4;
    (pMVar5->pos).x = *param_1;
    (pMVar5->pos).y = param_1[1];
    fVar1 = param_1[2];
    (pMVar5->pos).z = fVar1;
    (pMVar5->pos).w = param_1[3];
    puVar2 = (undefined4 *)pMVar5->pVar;
    (pMVar5->pos).z = fVar1 + 0.4;
    puVar2[0xc] = param_2;
    puVar2[5] = (int)param_3;
    *puVar2 = 0;
    uVar3 = *(undefined4 *)((int)Splines + (int)(param_3 << 2));
    *(undefined1 *)(puVar2 + 1) = 1;
    puVar2[4] = uVar3;
    UpdateMobyTransform(pMVar5);
  }
  return pMVar5;
}


// 0x03e2b5c (0x14 bytes)
void M622_003e2b5c(void)

{
  DAT_00853d80 = 0x10000;
  return;
}


// 0x03e2b88 (0x204 bytes)
void M622_003e2b88(MobyInstance *param_1)

{
  void *pvVar1;
  float fVar2;
  
  pvVar1 = param_1->pVar;
  *(short **)((int)pvVar1 + 0x80) = param_1->pClass->seqs->trigs;
  *(short **)((int)pvVar1 + 0x84) = param_1->pClass->seqs->trigs;
  *(short **)((int)pvVar1 + 0x88) = param_1->pClass->seqs->trigs;
  *(short **)((int)pvVar1 + 0x8c) = param_1->pClass->seqs->trigs;
  *(short **)((int)pvVar1 + 0x90) = param_1->pClass->seqs->trigs;
  *(short **)((int)pvVar1 + 0x94) = param_1->pClass->seqs->trigs;
  *(short **)((int)pvVar1 + 0x98) = param_1->pClass->seqs->trigs;
  *(undefined4 *)((int)pvVar1 + 0x9c) = *(undefined4 *)((int)param_1->pClass[1].packets + 0x14);
  *(short **)((int)pvVar1 + 0xa0) = param_1->pClass->seqs->trigs;
  *(short **)((int)pvVar1 + 0xa4) = param_1->pClass->seqs->trigs;
  *(short **)((int)pvVar1 + 0xa8) = param_1->pClass->seqs->trigs;
  *(short **)((int)pvVar1 + 0xac) = param_1->pClass->seqs->trigs;
  *(short **)((int)pvVar1 + 0xb0) = param_1->pClass->seqs->trigs;
  walk_SetupTwistVals(param_1,(w_2legData *)((int)pvVar1 + 0x10));
  fVar2 = g_FrameTimeSq;
  *(float *)((int)pvVar1 + 0xec) = g_FrameTimeSq * 9.8;
  *(float *)((int)pvVar1 + 0xdc) = fVar2 * 0.7853982;
  *(float *)((int)pvVar1 + 0xe0) = fVar2 * 6.2831855;
  *(float *)((int)pvVar1 + 0xe4) = g_FrameTime * 1.0471976;
  *(undefined1 *)((int)pvVar1 + 0xc0) = 0;
  *(undefined1 *)((int)pvVar1 + 0xc1) = 0;
  *(undefined1 *)((int)pvVar1 + 0xc2) = 0xff;
  *(undefined1 *)((int)pvVar1 + 0xc3) = 0xff;
  *(undefined1 *)((int)pvVar1 + 0xc4) = 0;
  *(undefined1 *)((int)pvVar1 + 0xc5) = 0;
  *(undefined1 *)((int)pvVar1 + 0x100) = 3;
  *(undefined1 *)((int)pvVar1 + 0x101) = 1;
  *(undefined1 *)((int)pvVar1 + 0x103) = 5;
  *(undefined1 *)((int)pvVar1 + 0x102) = 7;
  *(undefined1 *)((int)pvVar1 + 0x1b0) = 4;
  *(undefined1 *)((int)pvVar1 + 0x1b1) = 2;
  *(undefined1 *)((int)pvVar1 + 0x1b3) = 6;
  *(undefined1 *)((int)pvVar1 + 0x1b2) = 8;
  *(undefined4 *)((int)pvVar1 + 0xf0) = 0x3f000000;
  *(float *)((int)pvVar1 + 0xd4) = fVar2 * 6.0;
  walk_init2LegAnim(param_1,(w_2legData *)((int)pvVar1 + 0x10));
  return;
}


// 0x03e2da8 (0x2f8 bytes)
// strings: 00656de4: 'speed %fm/s\n' | 00656df4: 'Moby %d (class 622) has no path.\n' | 00656e1c: 'node %d speed %fm/s\n'

/* Moby 622 */

MobyInstance * UpdateMoby_622(MobyInstance *moby)

{
  float fVar1;
  float *pfVar2;
  MobyInstance *pMVar3;
  undefined4 uVar4;
  int iVar5;
  uint uVar6;
  ulonglong uVar7;
  undefined8 in_LR;
  double dVar8;
  GPiece<16> auVar9;
  GPiece<16> auVar10;
  GPiece<16> auVar11;
  
  pfVar2 = (float *)moby->pVar;
  uVar7 = ZEXT48(pfVar2);
  if (moby->state == 0) {
    if ((int)pfVar2[0x9d] < 0) {
      uVar6 = (int)moby - (int)g_MobyInstance;
      printf("Moby %d (class 622) has no path.\n",
                   ((int)uVar6 >> 8) + (uint)((int)uVar6 < 0 && (uVar6 & 0xff) != 0));
      moby->state = '\x02';
      moby = (MobyInstance *)0x2;
    }
    else {
      *(undefined1 *)((int)pfVar2 + 0x265) = 0;
      pfVar2[0x9a] = 0.0;
      pfVar2[0x9c] = (float)Splines[(int)pfVar2[0x9d]];
      moby->state = '\x01';
      M622_003e2b88(moby);
      auVar9 = ZEXT416(0xffffffff);
      auVar9 = auVar9 | auVar9 << 0x20 | auVar9 << 0x40 | auVar9 << 0x60;
      auVar10 = vectorShiftLeftIntegerWord(auVar9,auVar9);
      auVar9 = loadVectorLeftIndexed(in_LR,0x3e2d8c);
      auVar11 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
      auVar9 = auVar9 >> 0x60 & (GPiece<16>)0xffffffff;
      auVar9 = vectorMultiplyAddFloatingPoint
                         (auVar11,auVar9 | auVar9 << 0x20 | auVar9 << 0x40 | auVar9 << 0x60,auVar10)
      ;
      iVar5 = (int)pfVar2[0x9c] + (int)pfVar2[0x98] * 0x10;
      auVar9 = vectorConvertToSignedFixedPointWordSaturate(auVar9,0);
      auVar9 = auVar9 >> 0x60 & (GPiece<16>)0xffffffff;
      uVar4 = storeVectorElementWordIndexed
                        (auVar9 | auVar9 << 0x20 | auVar9 << 0x40 | auVar9 << 0x60,4,uVar7);
      *(undefined4 *)((uint)(pfVar2 + 1) & 0xfffffffc) = uVar4;
      if (*(int *)(iVar5 + 0x1c) < 1) {
        dVar8 = (double)MB_randRangeFloat(0.25,1.5);
        fVar1 = (float)((double)((*(float *)((int)pfVar2[0x27] + 4) /
                                 (*(float *)((int)pfVar2[0x27] + 0x10) * 2.0)) * DAT_0071f408) *
                       dVar8);
        *pfVar2 = fVar1;
        moby = (MobyInstance *)printf("speed %fm/s\n",(double)(fVar1 * 60.0));
      }
      else {
        *pfVar2 = *(float *)(iVar5 + 0x1c) * g_FrameTime;
        moby = (MobyInstance *)&DAT_00720000;
      }
    }
  }
  else if (moby->state < 2) {
    pMVar3 = (MobyInstance *)pfVar2[0x98];
    PathFollowUpdate(*pfVar2,moby,(PathFollower *)(pfVar2 + 0x98),pfVar2 + 4);
    if (((moby->updateId == '\0') && (iVar5 = FastDecTimerS32(uVar7 + 4), iVar5 != 0)) ||
       (moby = (MobyInstance *)pfVar2[0x98], moby != pMVar3)) {
      auVar9 = ZEXT416(0xffffffff);
      auVar9 = auVar9 | auVar9 << 0x20 | auVar9 << 0x40 | auVar9 << 0x60;
      auVar10 = vectorShiftLeftIntegerWord(auVar9,auVar9);
      auVar9 = loadVectorLeftIndexed(in_LR,0x3e2d8c);
      auVar11 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
      auVar9 = auVar9 >> 0x60 & (GPiece<16>)0xffffffff;
      auVar9 = vectorMultiplyAddFloatingPoint
                         (auVar11,auVar9 | auVar9 << 0x20 | auVar9 << 0x40 | auVar9 << 0x60,auVar10)
      ;
      auVar9 = vectorConvertToSignedFixedPointWordSaturate(auVar9,0);
      auVar9 = auVar9 >> 0x60 & (GPiece<16>)0xffffffff;
      uVar4 = storeVectorElementWordIndexed
                        (auVar9 | auVar9 << 0x20 | auVar9 << 0x40 | auVar9 << 0x60,4,uVar7);
      *(undefined4 *)((uint)(pfVar2 + 1) & 0xfffffffc) = uVar4;
      iVar5 = MB_randInt(4);
      if (iVar5 == 0) {
        fVar1 = 0.0;
      }
      else {
        iVar5 = (int)pfVar2[0x9c] + (int)pfVar2[0x98] * 0x10;
        fVar1 = *(float *)(iVar5 + 0x1c);
        if (*(int *)(iVar5 + 0x1c) < 1) {
          dVar8 = (double)MB_randRangeFloat(0.25,1.5);
          fVar1 = (*(float *)((int)pfVar2[0x27] + 4) / (*(float *)((int)pfVar2[0x27] + 0x10) * 2.0))
                  * DAT_0071f408;
        }
        else {
          dVar8 = (double)g_FrameTime;
        }
        fVar1 = (float)((double)fVar1 * dVar8);
      }
      *pfVar2 = fVar1;
      moby = (MobyInstance *)
             printf("node %d speed %fm/s\n",pfVar2[0x98],(double)(fVar1 * 60.0));
    }
  }
  return moby;
}


