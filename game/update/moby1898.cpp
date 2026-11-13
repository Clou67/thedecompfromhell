// game/update/moby1898.cpp -- reconstructed from NPEA00385 EBOOT
// STATUS: NOT STARTED (raw Ghidra output)
// 4 functions, 0x2d1388-0x2d1868
#include "game/update/moby1898.h"
#include "game/collproc.h"
#include "game/debug.h"
#include "game/draw.h"
#include "game/mobyfunc.h"
#include "game/mobyutil.h"
#include "game/update/moby19.h"
#include "game/vuchain.h"
#include "idol/fastfunc.h"

// 0x02d1388 (0xb4 bytes)
/* Moby 1898 */

void UpdateMoby_1898(MobyInstance *moby)

{
  float fVar1;
  float *pfVar2;
  
  pfVar2 = (float *)moby->pVar;
  if (moby->state == 0) {
    DeleteMoby(moby);
  }
  else if (moby->state < 2) {
    RegisterFuncForMoby(&PTR_M1898_002d1540_0070b2b8,moby);
    fVar1 = *pfVar2;
    *pfVar2 = fVar1 + pfVar2[1];
    if (2.0 < fVar1 + pfVar2[1]) {
      DeleteMoby(moby);
    }
  }
  return;
}


// 0x02d1440 (0xec bytes)
void FUN_002d1440(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4,
                 undefined4 param_5)

{
  void *pvVar1;
  MobyInstance *pMVar2;
  double dVar3;
  f32 fStack00000030;
  f32 fStack00000034;
  f32 fStack00000038;
  f32 fStack0000003c;
  
  pMVar2 = CreateMoby(0x76a);
  if (pMVar2 != (MobyInstance *)0x0) {
    pvVar1 = pMVar2->pVar;
    fStack00000034 = (f32)param_1;
    fStack0000003c = (f32)param_2;
    (pMVar2->pos).y = fStack00000034;
    (pMVar2->pos).w = fStack0000003c;
    fStack00000030 = (f32)((ulonglong)param_1 >> 0x20);
    fStack00000038 = (f32)((ulonglong)param_2 >> 0x20);
    (pMVar2->pos).x = fStack00000030;
    (pMVar2->pos).z = fStack00000038;
    dVar3 = (double)FastIntToDouble(param_3);
    *(undefined4 *)((int)pvVar1 + 8) = param_4;
    *(undefined4 *)((int)pvVar1 + 0xc) = param_5;
    *(float *)((int)pvVar1 + 4) = (float)(2.0 / dVar3);
    pMVar2->updateDistance = -1;
    pMVar2->state = '\x01';
  }
  return;
}


// 0x02d1540 (0x2ac bytes)
void M1898_002d1540(int param_1)

{
  float *pfVar1;
  undefined8 uVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  GPiece<16> local_a0;
  float local_90;
  float local_8c;
  GPiece<32> local_80;
  GPiece<16> local_60;
  GPiece<40> local_50;
  
  pfVar1 = *(float **)(param_1 + 0x78);
  dVar3 = 1.0;
  dVar5 = (double)*pfVar1;
  dVar4 = (double)(float)(dVar5 - 1.0);
  if (1.0 - dVar5 < 0.0) {
    dVar5 = dVar3;
  }
  if ((dVar4 <= 1.0) && (dVar3 = dVar4, dVar4 < 0.0)) {
    dVar3 = 0.0;
  }
  uVar2 = idol_draw::Blend(1,5,0x80,3,0,0,1,2);
  SetGSReg(0x16,uVar2);
  ScreenPosFromWorldSpace(&local_90,local_a0);
  FastDoubleToInt((double)(local_90 - (float)(longlong)SCREEN_PROJECTION_MAP_X));
  FastDoubleToInt((double)(local_8c - (float)(longlong)SCREEN_PROJECTION_MAP_X));
  FastLerpColor(dVar3,pfVar1[2],pfVar1[3]);
  FastDoubleToInt((double)(float)((double)(longlong)(DAT_007bd68c << 4) * dVar5));
  uVar2 = GetEffectTex(DAT_007bd688);
  DrawScreenQuad(local_80,local_50,local_60,uVar2,1);
  uVar2 = idol_draw::Blend(1,5,0x60,3,0,0,1,2);
  SetGSReg(0x16,uVar2);
  return;
}


// 0x02d17f0 (0x78 bytes)
void M1898_002d17f0(int param_1)

{
  ushort uVar1;
  MobyInstance *pMVar2;
  int iVar3;
  ushort *puVar4;
  
  puVar4 = (ushort *)(&g_MobyGroups)[*(byte *)(param_1 + 0x21)];
  pMVar2 = g_MobyInstance;
  do {
    iVar3 = (int)(((ulonglong)*puVar4 & 0x7fff) << 8);
    *(undefined4 *)((int)&(pMVar2->pos).z + iVar3) = *(undefined4 *)(param_1 + 0x18);
    pMVar2 = g_MobyInstance;
    *(undefined4 *)
     (&DAT_010a2448 + *(int *)(*(int *)((int)&g_MobyInstance->pVar + iVar3) + 0xc) * 0x11a0) =
         *(undefined4 *)(param_1 + 0x18);
    uVar1 = *puVar4;
    puVar4 = puVar4 + 1;
  } while (-1 < (short)uVar1);
  return;
}


