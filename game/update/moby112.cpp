// game/update/moby112.cpp -- reconstructed from NPEA00385 EBOOT
// STATUS: NOT STARTED (raw Ghidra output)
// 5 functions, 0x1d4cb0-0x1d5148
// shared update function UpdateMoby_{112_1192}; registered for oClasses 112, 1192
#include "game/update/moby112.h"
#include "game/collproc.h"
#include "game/hero.h"
#include "game/mobyfunc.h"
#include "game/mobyproc.h"
#include "game/mobyutil.h"
#include "game/sound.h"
#include "game/update/moby1118.h"
#include "idol/fastfunc.h"

// 0x01d4cb0 (0x48 bytes)
MobyInstance * FUN_001d4cb0(MobyInstance *param_1)

{
  if (param_1->state == '\x01') {
    param_1->state = '\x02';
    param_1 = (MobyInstance *)PlayMobySound(0,0,param_1);
  }
  return param_1;
}


// 0x01d4cf8 (0x2c bytes)
undefined8 FUN_001d4cf8(int param_1)

{
  undefined8 uVar1;
  
  if (*(byte *)(param_1 + 0x20) == 7) {
    uVar1 = 2;
  }
  else if (*(byte *)(param_1 + 0x20) < 4) {
    uVar1 = 0;
  }
  else {
    uVar1 = 1;
  }
  return uVar1;
}


// 0x01d4d30 (0x44 bytes)
void M1192_001d4d30(void)

{
  DAT_00764554 = 0x10000;
  DAT_00ef26c0 = g_FrameTime * 12.0;
  DAT_00ef26c4 = g_FrameTime * 3.1415927;
  return;
}


// 0x01d4d88 (0x278 bytes)
MobyInstance *
FUN_001d4d88(double param_1,undefined4 param_2,f32 *param_3,undefined4 *param_4,undefined8 param_5,
            undefined8 param_6,ulonglong param_7,ulonglong param_8,ulonglong param_9)

{
  undefined4 *puVar1;
  undefined2 uVar2;
  MobyInstance *pMVar3;
  undefined4 uVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  GPiece<16> auVar9;
  GPiece<16> auVar10;
  GPiece<16> auVar11;
  byte in_stack_00000077;
  
  pMVar3 = CreateMoby(EXPLOSION_0070);
  if (pMVar3 != (MobyInstance *)0x0) {
    puVar1 = (undefined4 *)pMVar3->pVar;
    dVar8 = -3.1415927410125732;
    dVar7 = 3.1415927410125732;
    dVar5 = (double)MB_randRangeFloat(-3.1415927,3.1415927);
    dVar6 = (double)MB_randRangeFloat((float)dVar8,(float)dVar7);
    dVar7 = (double)MB_randRangeFloat((float)dVar8,(float)dVar7);
    pMVar3->updateDistance = -1;
    pMVar3->drawDistance = 0xff;
    pMVar3->enabled = '\x01';
    pMVar3->state = '\0';
    pMVar3->alpha = in_stack_00000077;
    SetColorOfMoby(pMVar3,param_7 & 0xff,param_8 & 0xff,param_9 & 0xff);
    auVar9 = ZEXT416(0xffffffff);
    auVar9 = auVar9 | auVar9 << 0x20 | auVar9 << 0x40 | auVar9 << 0x60;
    auVar10 = vectorShiftLeftIntegerWord(auVar9,auVar9);
    puVar1[6] = (float)((double)pMVar3->scale * param_1);
    pMVar3->scale = 0.0;
    puVar1[4] = param_2;
    (pMVar3->pos).x = *param_3;
    (pMVar3->pos).y = param_3[1];
    (pMVar3->pos).z = param_3[2];
    (pMVar3->pos).w = param_3[3];
    *puVar1 = *param_4;
    puVar1[1] = param_4[1];
    puVar1[2] = param_4[2];
    puVar1[3] = param_4[3];
    (pMVar3->rotation).x = (float)dVar5;
    (pMVar3->rotation).y = (float)dVar6;
    (pMVar3->rotation).z = (float)dVar7;
    (pMVar3->rotation).w = 0.0;
    uVar4 = (undefined4)param_6;
    puVar1[5] = uVar4;
    auVar9 = loadVectorLeftIndexed(8,0x1d4d78);
    auVar11 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
    auVar9 = auVar9 >> 0x60 & (GPiece<16>)0xffffffff;
    auVar10 = vectorMultiplyAddFloatingPoint
                        (auVar11,auVar9 | auVar9 << 0x20 | auVar9 << 0x40 | auVar9 << 0x60,auVar10);
    auVar9.piece<0,4>() = uVar4;
    auVar9.piece<4,4>() = uVar4;
    auVar9.piece<8,4>() = uVar4;
    auVar9.piece<12,4>() = uVar4;
    auVar10 = vectorConvertToSignedFixedPointWordSaturate(auVar10,0);
    auVar9 = vectorSubtractUnsignedWordModulo(auVar9,auVar10);
    auVar9 = vectorSplatHalfWord(auVar9,1);
    uVar2 = storeVectorElementHalfWordIndexed(auVar9,0x1c,ZEXT48(puVar1));
    *(undefined2 *)(puVar1 + 7) = uVar2;
    dVar5 = (double)FastIntToDouble(param_6);
    dVar6 = (double)FastIntToDouble(puVar1[5] - (int)*(short *)(puVar1 + 7));
    pMVar3->scale = (float)((double)(float)(dVar6 * (double)(float)puVar1[6]) / dVar5);
    *(ushort *)((int)puVar1 + 0x1e) = (ushort)in_stack_00000077;
    UpdateMobyTransform(pMVar3);
  }
  return pMVar3;
}


// shared update function, registered for oClasses 112, 1192
// 0x01d5008 (0x140 bytes)
/* Moby 112
   Moby 1192 */

void UpdateMoby_112(MobyInstance *moby)

{
  float fVar1;
  void *pvVar2;
  uint uVar3;
  int iVar4;
  double dVar5;
  double dVar6;
  
  pvVar2 = moby->pVar;
  dVar5 = (double)FastIntToDouble(*(undefined4 *)((int)pvVar2 + 0x14));
  dVar6 = (double)FastIntToDouble
                            (*(int *)((int)pvVar2 + 0x14) - (int)*(short *)((int)pvVar2 + 0x1c));
  fVar1 = (moby->rotation).x;
  moby->scale = (float)((double)(float)(dVar6 * (double)*(float *)((int)pvVar2 + 0x18)) / dVar5);
  dVar6 = 3.1415927410125732;
  dVar5 = (double)FastWrapRot(fVar1,g_FrameTime * 3.1415927);
  (moby->rotation).x = (float)dVar5;
  dVar5 = (double)FastWrapRot
                            ((moby->rotation).y,(float)((double)g_FrameTime * dVar6));
  (moby->rotation).y = (float)dVar5;
  dVar5 = (double)FastWrapRot
                            ((moby->rotation).z,(float)((double)g_FrameTime * dVar6));
  (moby->rotation).z = (float)dVar5;
  iVar4 = FastDecTimerS16((int)pvVar2 + 0x1c);
  if (iVar4 == 0) {
    uVar3 = *(uint *)((int)pvVar2 + 0x14);
    if ((int)*(short *)((int)pvVar2 + 0x1c) <
        (int)(((int)uVar3 >> 1) + (uint)((int)uVar3 < 0 && (uVar3 & 1) != 0))) {
      moby->alpha = (s8)(((int)*(short *)((int)pvVar2 + 0x1c) * (int)*(short *)((int)pvVar2 + 0x1e))
                        / (int)(((int)uVar3 >> 1) + (uint)((int)uVar3 < 0 && (uVar3 & 1) != 0)));
    }
  }
  else {
    DeleteMoby(moby);
  }
  return;
}


