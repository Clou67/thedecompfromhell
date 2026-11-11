// game/update/moby628.cpp -- reconstructed from NPEA00385 EBOOT
// STATUS: NOT STARTED (raw Ghidra output)
// 3 functions, 0x3eba50-0x3ebfcc
#include "game/update/moby628.h"
#include "game/draw.h"
#include "game/hero.h"
#include "game/mobyfunc.h"
#include "game/mobyutil.h"
#include "game/update.h"
#include "idol/fastfunc.h"

// 0x03eba50 (0x31c bytes)
// inlined: FastAtan2 @0x3ebc0c
MobyInstance * FUN_003eba50(int param_1,f32 *param_2,float *param_3)

{
  float fVar1;
  float fVar2;
  float fVar3;
  undefined2 uVar4;
  void *pvVar5;
  float fVar6;
  ulonglong *puVar7;
  int iVar8;
  int iVar9;
  ulonglong uVar10;
  MobyInstance *pMVar12;
  longlong lVar11;
  undefined8 uVar13;
  longlong lVar14;
  ulonglong uVar15;
  longlong lVar16;
  longlong lVar17;
  float *pfVar18;
  ulonglong unaff_r27;
  ulonglong unaff_r28;
  ulonglong unaff_r29;
  ulonglong unaff_r30;
  ulonglong unaff_r31;
  ulonglong in_LR;
  longlong lVar19;
  double dVar20;
  
  uVar10 = ZEXT48(&stack0x00000000);
  lVar11 = uVar10 - 0xc0;
  puVar7 = (ulonglong *)lVar11;
  *puVar7 = uVar10;
  puVar7[0x1a] = in_LR;
  puVar7[0x17] = unaff_r31;
  puVar7[0x16] = unaff_r30;
  puVar7[0x14] = unaff_r28;
  puVar7[0x15] = unaff_r29;
  puVar7[0x13] = unaff_r27;
  pMVar12 = CreateMoby(MINE_0273);
  if (pMVar12 != (MobyInstance *)0x0) {
    pMVar12->drawDistance = *(short *)(param_1 + 0x32);
    uVar4 = *(undefined2 *)(param_1 + 0x32);
    pMVar12->enabled = '\x01';
    pMVar12->updateDistance = (char)uVar4;
    uVar13 = *(undefined8 *)(param_1 + 0x38);
    pMVar12->color = (int)((ulonglong)uVar13 >> 0x20);
    pMVar12->light = (int)uVar13;
    (pMVar12->pos).x = *param_2;
    (pMVar12->pos).y = param_2[1];
    (pMVar12->pos).z = param_2[2];
    (pMVar12->pos).w = param_2[3];
    fVar1 = DAT_0071f40c;
    pvVar5 = pMVar12->pVar;
    *(float *)((int)pvVar5 + 0x10) = DAT_0071f40c * 0.008;
    *(float *)((int)pvVar5 + 0x14) = fVar1 * 0.0005;
    *(float *)((int)pvVar5 + 0x18) = SQRT(*param_3 * *param_3 + param_3[1] * param_3[1]);
    fVar1 = param_3[2];
    *(undefined1 *)((int)pvVar5 + 0x3d) = 0;
    *(float *)((int)pvVar5 + 0x1c) = fVar1;
    *(undefined4 *)((int)pvVar5 + 0x24) = 1;
    *(undefined4 *)((int)pvVar5 + 0x20) = 0x400;
    *(undefined4 *)((int)pvVar5 + 0x28) = 0x3f800000;
    *(undefined4 *)((int)pvVar5 + 0x30) = 0x3f400000;
    *(undefined4 *)((int)pvVar5 + 0x34) = 0x3f000000;
    *(undefined4 *)((int)pvVar5 + 0x38) = 0x3f266666;
    *(undefined4 *)((int)pvVar5 + 0x48) = 0x3e4ccccd;
    *(undefined4 *)((int)pvVar5 + 0x4c) = 0x3c23d70a;
    fVar1 = *param_3;
    fVar6 = param_3[1];
    fVar2 = ABS(*param_3);
    fVar3 = ABS(param_3[1]);
    *(float *)(puVar7 + 0xe) = fVar2 - fVar3;
    dVar20 = 0.0;
    uVar15 = (ulonglong)((uint)fVar1 >> 0x1c) & 8 |
             (ulonglong)(*(uint *)(puVar7 + 0xe) >> 0x1e) & 2 | (ulonglong)((uint)fVar6 >> 0x1d) & 4
    ;
    fVar1 = *(float *)(&g_atanQuadrantTable + (int)(uVar15 << 2));
    fVar6 = fVar2;
    if (*(float *)(puVar7 + 0xe) - 0.0 < 0.0) {
      fVar6 = fVar3;
    }
    if (*(float *)(puVar7 + 0xe) - 0.0 < 0.0) {
      fVar3 = fVar2;
    }
    fVar2 = *(float *)(((uint)(uVar15 << 2) | 0x735900) + 4);
    if (0.0 < fVar6) {
      lVar17 = uVar10 - 0xb0;
      lVar16 = uVar10 - 0x4c;
      lVar14 = uVar10 - 0x3c;
      lVar19 = 2;
      fVar6 = (fVar3 - fVar6) / (fVar3 + fVar6);
      fVar3 = fVar6 * fVar6;
      *(float *)(puVar7 + 0x10) = fVar6;
      *(float *)(puVar7 + 0xf) = fVar6;
      *(float *)((int)puVar7 + 0x7c) = fVar6;
      *(float *)((int)puVar7 + 0x74) = fVar6;
      fVar6 = fVar3 * fVar3;
      *(float *)(puVar7 + 0xf) = *(float *)(puVar7 + 0xf) * fVar3;
      *(float *)((int)puVar7 + 0x7c) = *(float *)((int)puVar7 + 0x7c) * fVar6;
      *(float *)(puVar7 + 0x10) = *(float *)(puVar7 + 0x10) * fVar6 * fVar3;
      do {
        *(float *)((int)lVar17 + 0x74) = *(float *)((int)lVar17 + 100) * fVar6 * fVar6;
        iVar8 = (int)lVar16;
        lVar17 = lVar17 + 8;
        lVar16 = lVar16 + 8;
        *(float *)((int)lVar14 + 4) = *(float *)(iVar8 + 4) * fVar6 * fVar6;
        lVar14 = lVar14 + 8;
        lVar19 = lVar19 + -1;
      } while (lVar19 != 0);
      lVar17 = uVar10 - 0x4c;
      pfVar18 = (float *)&DAT_007358e0;
      lVar19 = 4;
      lVar14 = lVar17;
      lVar16 = lVar11;
      do {
        fVar6 = *pfVar18;
        fVar3 = pfVar18[1];
        pfVar18 = pfVar18 + 2;
        *(float *)((int)lVar16 + 0x74) = *(float *)((int)lVar16 + 0x74) * fVar6;
        lVar16 = lVar16 + 8;
        *(float *)((int)lVar14 + 4) = *(float *)((int)lVar14 + 4) * fVar3;
        lVar14 = lVar14 + 8;
        lVar19 = lVar19 + -1;
      } while (lVar19 != 0);
      uVar15 = 2;
      lVar14 = 2;
      do {
        iVar8 = (int)lVar11;
        lVar11 = lVar11 + 0x10;
        iVar9 = (int)lVar17;
        lVar17 = lVar17 + 0x10;
        dVar20 = (double)((float)(dVar20 + (double)*(float *)(iVar8 + 0x74)) + *(float *)(iVar9 + 4)
                          + *(float *)(iVar9 + 8) + *(float *)(iVar9 + 0xc));
        lVar14 = lVar14 + -1;
      } while (lVar14 != 0);
      dVar20 = (double)((float)(dVar20 + 0.7853981852531433) * fVar1 + fVar2);
    }
    MB_StartKick(dVar20,pMVar12,pvVar5,uVar15,0,1,0);
    *(int *)((int)pvVar5 + 0x68) = param_1;
    *(undefined4 *)((int)pvVar5 + 0x6c) = 0;
    pMVar12->state = '\x01';
  }
  return pMVar12;
}


// 0x03ebd6c (0x14 bytes)
void M628_003ebd6c(void)

{
  DAT_008540fc = 0x10000;
  return;
}


// 0x03ebd90 (0x23c bytes)
/* Moby 628 */

void UpdateMoby_628(MobyInstance *moby)

{
  float *pfVar1;
  float fVar2;
  float fVar3;
  uint uVar4;
  int iVar5;
  GPiece<16> local_60;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  
  pfVar1 = (float *)moby->pVar;
  iVar5 = FastDecTimerS32(pfVar1 + 2);
  if (iVar5 == 0) {
    fVar2 = (moby->pos).y - g_heroPosition.y;
    fVar3 = (moby->pos).x - g_heroPosition.x;
    if (SQRT(fVar3 * fVar3 + fVar2 * fVar2) < *pfVar1 + 0.5) {
      SetCollDamIn
                (0x3ff0000000000000,&uStack_50,(longlong)(int)moby,0x10001,&DAT_003ebd80,local_60);
      CollDamageMobyDirect
                (g_heroMobyPtr,0xa0,CONCAT44(uStack_50,uStack_4c),CONCAT44(uStack_48,uStack_44),
                 CONCAT44(uStack_40,uStack_3c),CONCAT44(uStack_38,uStack_34),
                 CONCAT44(uStack_30,uStack_2c),CONCAT44(uStack_28,uStack_24));
    }
    uVar4 = worldUpdateTime & 4;
    pfVar1[1] = DAT_00854174 * g_FrameTime + pfVar1[1];
    if (uVar4 == 0) {
      DamageSphereAtPos
                ((double)*pfVar1,0x3ff0000000000000,0x3ff0000000000000,pfVar1[3],
                 (longlong)(int)moby + 0x10,0,0x10000);
    }
    RegisterFuncForMoby(&PTR_M629_003ec168_0070daa8,moby);
  }
  else {
    DeleteMoby(moby);
  }
  return;
}


