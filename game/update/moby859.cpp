// game/update/moby859.cpp -- reconstructed from NPEA00385 EBOOT
// STATUS: NOT STARTED (raw Ghidra output)
// 8 functions, 0x495208-0x496410
#include "game/update/moby859.h"
#include "game/camera.h"
#include "game/collproc.h"
#include "game/hero.h"
#include "game/mobyfunc.h"
#include "game/mobyproc.h"
#include "game/mobyutil.h"
#include "game/partupd.h"
#include "game/update.h"
#include "idol/fastfunc.h"

// 0x0495208 (0x288 bytes)
// inlined: FastAtan2 @0x49531c
void M859_00495208
               (double param_1,int param_2,int param_3,int param_4,int *param_5,float *param_6)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  ulonglong *puVar7;
  float fVar8;
  int iVar9;
  int iVar10;
  ulonglong uVar11;
  longlong lVar12;
  longlong lVar13;
  longlong lVar14;
  ulonglong uVar15;
  longlong lVar16;
  float *pfVar17;
  ulonglong unaff_r28;
  ulonglong unaff_r29;
  ulonglong unaff_r30;
  ulonglong unaff_r31;
  ulonglong in_LR;
  longlong lVar18;
  double dVar19;
  ulonglong in_f31;
  double dVar20;
  
  uVar11 = ZEXT48(&stack0x00000000);
  lVar12 = uVar11 - 0xd0;
  puVar7 = (ulonglong *)lVar12;
  *puVar7 = uVar11;
  puVar7[0x1c] = in_LR;
  puVar7[0x19] = in_f31;
  fVar1 = *(float *)(param_2 + 0x14);
  fVar2 = *(float *)(param_4 + 0x14);
  fVar3 = *(float *)(param_2 + 0x10);
  fVar6 = fVar1 - fVar2;
  fVar4 = *(float *)(param_4 + 0x10);
  puVar7[0x16] = unaff_r29;
  puVar7[0x15] = unaff_r28;
  fVar5 = fVar3 - fVar4;
  puVar7[0x17] = unaff_r30;
  puVar7[0x18] = unaff_r31;
  dVar20 = (double)SQRT(fVar5 * fVar5 + fVar6 * fVar6);
  if (dVar20 <= param_1) {
    fVar4 = fVar4 - fVar3;
    fVar2 = fVar2 - fVar1;
    fVar6 = ABS(fVar4);
    fVar5 = ABS(fVar2);
    *(float *)(puVar7 + 0xe) = fVar4;
    *(float *)((int)puVar7 + 0x74) = fVar2;
    *(float *)(puVar7 + 0xf) = fVar6 - fVar5;
    fVar1 = 0.0;
    fVar2 = *(float *)(param_2 + 0x48);
    uVar15 = (ulonglong)(*(uint *)(puVar7 + 0xe) >> 0x1c) & 8 |
             (ulonglong)(*(uint *)(puVar7 + 0xf) >> 0x1e) & 2 |
             (ulonglong)(*(uint *)((int)puVar7 + 0x74) >> 0x1d) & 4;
    fVar3 = *(float *)(&g_atanQuadrantTable + (int)(uVar15 << 2));
    fVar4 = ABS(*(float *)(puVar7 + 0xe));
    if (*(float *)(puVar7 + 0xf) - 0.0 < 0.0) {
      fVar4 = fVar5;
    }
    fVar5 = *(float *)(((uint)(uVar15 << 2) | 0x735900) + 4);
    fVar8 = ABS(*(float *)((int)puVar7 + 0x74));
    if (*(float *)(puVar7 + 0xf) - 0.0 < 0.0) {
      fVar8 = fVar6;
    }
    if (0.0 < fVar4) {
      lVar16 = uVar11 - 0xc0;
      lVar13 = uVar11 - 0x44;
      lVar14 = uVar11 - 0x54;
      lVar18 = 2;
      fVar4 = (fVar8 - fVar4) / (fVar8 + fVar4);
      fVar6 = fVar4 * fVar4;
      *(float *)(puVar7 + 0x11) = fVar4;
      *(float *)(puVar7 + 0x10) = fVar4;
      *(float *)((int)puVar7 + 0x84) = fVar4;
      *(float *)((int)puVar7 + 0x7c) = fVar4;
      fVar4 = fVar6 * fVar6;
      *(float *)(puVar7 + 0x10) = *(float *)(puVar7 + 0x10) * fVar6;
      *(float *)((int)puVar7 + 0x84) = *(float *)((int)puVar7 + 0x84) * fVar4;
      *(float *)(puVar7 + 0x11) = *(float *)(puVar7 + 0x11) * fVar4 * fVar6;
      do {
        *(float *)((int)lVar16 + 0x7c) = *(float *)((int)lVar16 + 0x6c) * fVar4 * fVar4;
        iVar9 = (int)lVar14;
        lVar14 = lVar14 + 8;
        lVar16 = lVar16 + 8;
        *(float *)((int)lVar13 + 4) = *(float *)(iVar9 + 4) * fVar4 * fVar4;
        lVar13 = lVar13 + 8;
        lVar18 = lVar18 + -1;
      } while (lVar18 != 0);
      lVar16 = uVar11 - 0x54;
      lVar18 = 4;
      pfVar17 = (float *)&DAT_007358e0;
      lVar13 = lVar16;
      lVar14 = lVar12;
      do {
        fVar4 = *pfVar17;
        fVar6 = pfVar17[1];
        pfVar17 = pfVar17 + 2;
        *(float *)((int)lVar14 + 0x7c) = *(float *)((int)lVar14 + 0x7c) * fVar4;
        lVar14 = lVar14 + 8;
        *(float *)((int)lVar13 + 4) = *(float *)((int)lVar13 + 4) * fVar6;
        lVar13 = lVar13 + 8;
        lVar18 = lVar18 + -1;
      } while (lVar18 != 0);
      lVar13 = 2;
      do {
        iVar9 = (int)lVar12;
        iVar10 = (int)lVar16;
        lVar12 = lVar12 + 0x10;
        lVar16 = lVar16 + 0x10;
        fVar1 = fVar1 + *(float *)(iVar9 + 0x7c) + *(float *)(iVar10 + 4) + *(float *)(iVar10 + 8) +
                *(float *)(iVar10 + 0xc);
        lVar13 = lVar13 + -1;
      } while (lVar13 != 0);
      fVar1 = (fVar1 + 0.7853982) * fVar3 + fVar5;
    }
    dVar19 = (double)FastSubRots(fVar2,fVar1);
    fVar1 = (float)(dVar19 * 5.0 + dVar20);
    if (param_4 == param_3) {
      fVar1 = fVar1 - 2.0;
    }
    if (fVar1 < *param_6) {
      *param_5 = param_4;
      *param_6 = fVar1;
    }
  }
  return;
}


// 0x0495490 (0x184 bytes)
void FUN_00495490(undefined8 param_1,undefined8 param_2,undefined4 *param_3)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined4 *puVar6;
  GPiece<4> local_30;
  GPiece<4> local_2c;
  
  if (DAT_008c7c74 != worldUpdateTime) {
    iVar3 = 0;
    DAT_008c7c74 = worldUpdateTime;
    DAT_010e04a8 = 0;
    if (DAT_00a49344 != 0) {
      iVar4 = 0;
      iVar5 = 0;
      iVar2 = DAT_00a49344;
      do {
        bVar1 = *(short *)(iVar2 + 0xa6) != 0x359;
        if ((!bVar1) &&
           ((bVar1 || ((1 < *(byte *)(iVar2 + 0x20) && (*(byte *)(iVar2 + 0x20) != 9)))))) {
          iVar3 = iVar3 + 1;
          *(int *)((int)&DAT_010e03e0 + iVar4) = iVar2;
          iVar4 = iVar4 + 4;
          DAT_010e04a8 = iVar3;
        }
        iVar2 = *(int *)((int)&DAT_00a49348 + iVar5);
        iVar5 = iVar5 + 4;
      } while (iVar2 != 0);
    }
  }
  if (0 < DAT_010e04a8) {
    iVar3 = 0;
    puVar6 = &DAT_010e03e0;
    do {
      M859_00495208(param_1,param_2,*param_3,*puVar6,local_2c,local_30);
      iVar3 = iVar3 + 1;
      puVar6 = puVar6 + 1;
    } while (iVar3 < DAT_010e04a8);
  }
  M859_00495208(param_1,param_2,*param_3,g_heroMobyPtr,local_2c,local_30);
  *param_3 = 0;
  return;
}


// 0x0495620 (0x134 bytes)
// strings: 0096c074: 'None'

void M859_00495620(int param_1)

{
  float fVar1;
  void *pvVar2;
  int iVar3;
  void *pvVar4;
  double dVar5;
  undefined8 uVar6;
  MobyInstance *local_40 [4];
  
  fVar1 = 0.057;
  if (Cheats[3] != '\0') {
    fVar1 = 0.114;
  }
  dVar5 = (double)fVar1;
  MB_GetFirstMobyInGroup(local_40,(uint)*(byte *)(param_1 + 0x21),'\0','\0');
  if (local_40[0] != (MobyInstance *)0x0) {
    uVar6 = 0x3fb47ae140000000;
    do {
      if ((local_40[0]->enabled != '\0') &&
         (pvVar2 = local_40[0]->pVar, local_40[0]->oClass == *(MOBY_OCLASSES *)(param_1 + 0xa6))) {
        iVar3 = 0;
        pvVar4 = pvVar2;
        do {
          MB_DrawGlowFX
                    (dVar5,uVar6,(int)pvVar4 + 0x140,*(undefined4 *)((int)pvVar2 + 0x290));
          iVar3 = iVar3 + 1;
          pvVar4 = (void *)((int)pvVar4 + 0x10);
        } while (iVar3 < 3);
      }
      MB_GetNextMobyInGroup(local_40,local_40[0],'\0','\0');
    } while (local_40[0] != (MobyInstance *)0x0);
  }
  return;
}


// 0x0495754 (0x14 bytes)
void M859_00495754(void)

{
  DAT_008c7cc4 = 0x10000;
  return;
}


// 0x0495778 (0x4dc bytes)
// inlined: FastAtan2 @0x4958c4, FastAtan2 @0x495a4c
MobyInstance *
FUN_00495778(double param_1,double param_2,double param_3,float param_4,f32 *param_5,float *param_6,
            undefined2 param_7,float param_8)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float *pfVar5;
  ulonglong *puVar6;
  int iVar7;
  int iVar8;
  float fVar9;
  float fVar10;
  ulonglong uVar11;
  MobyInstance *pMVar14;
  longlong lVar12;
  longlong lVar13;
  undefined2 uVar15;
  ulonglong uVar16;
  longlong lVar17;
  float *pfVar19;
  longlong lVar18;
  ulonglong unaff_r25;
  ulonglong unaff_r26;
  ulonglong unaff_r27;
  ulonglong unaff_r28;
  ulonglong unaff_r29;
  ulonglong unaff_r30;
  ulonglong unaff_r31;
  ulonglong in_LR;
  longlong lVar20;
  ulonglong in_f29;
  ulonglong in_f30;
  ulonglong in_f31;
  
  uVar11 = ZEXT48(&stack0x00000000);
  lVar13 = uVar11 - 0x120;
  puVar6 = (ulonglong *)lVar13;
  *puVar6 = uVar11;
  puVar6[0x26] = in_LR;
  puVar6[0x21] = in_f29;
  puVar6[0x22] = in_f30;
  puVar6[0x23] = in_f31;
  puVar6[0x20] = unaff_r31;
  puVar6[0x1c] = unaff_r27;
  puVar6[0x1d] = unaff_r28;
  puVar6[0x1e] = unaff_r29;
  puVar6[0x1f] = unaff_r30;
  puVar6[0x1b] = unaff_r26;
  puVar6[0x1a] = unaff_r25;
  pMVar14 = CreateMoby(0x35b);
  if (pMVar14 != (MobyInstance *)0x0) {
    pMVar14->updateDistance = -1;
    pMVar14->drawDistance = 0x7f;
    pMVar14->enabled = '\x01';
    fVar9 = 0.0;
    (pMVar14->rotation).x = 0.0;
    fVar4 = param_6[2];
    pfVar5 = (float *)pMVar14->pVar;
    fVar2 = ABS(param_6[2]);
    fVar3 = SQRT(*param_6 * *param_6 + param_6[1] * param_6[1]);
    fVar1 = ABS(fVar3);
    *(float *)((int)puVar6 + 0x74) = fVar3;
    *(float *)(puVar6 + 0xf) = fVar1 - fVar2;
    uVar16 = (ulonglong)(*(uint *)((int)puVar6 + 0x74) >> 0x1c) & 8 |
             (ulonglong)(*(uint *)(puVar6 + 0xf) >> 0x1e) & 2 | (ulonglong)((uint)fVar4 >> 0x1d) & 4
    ;
    fVar4 = ABS(*(float *)((int)puVar6 + 0x74));
    if (*(float *)(puVar6 + 0xf) - 0.0 < 0.0) {
      fVar4 = fVar2;
    }
    fVar3 = *(float *)(&g_atanQuadrantTable + (int)(uVar16 << 2));
    if (*(float *)(puVar6 + 0xf) - 0.0 < 0.0) {
      fVar2 = fVar1;
    }
    fVar1 = *(float *)(((uint)(uVar16 << 2) | 0x735900) + 4);
    fVar10 = fVar9;
    if (0.0 < fVar4) {
      lVar12 = uVar11 - 0x110;
      lVar17 = uVar11 - 0x84;
      lVar18 = uVar11 - 0x74;
      lVar20 = 2;
      fVar4 = (fVar2 - fVar4) / (fVar2 + fVar4);
      fVar2 = fVar4 * fVar4;
      *(float *)(puVar6 + 0x15) = fVar4;
      *(float *)(puVar6 + 0x14) = fVar4;
      *(float *)((int)puVar6 + 0xa4) = fVar4;
      *(float *)((int)puVar6 + 0x9c) = fVar4;
      fVar4 = fVar2 * fVar2;
      *(float *)(puVar6 + 0x14) = *(float *)(puVar6 + 0x14) * fVar2;
      *(float *)((int)puVar6 + 0xa4) = *(float *)((int)puVar6 + 0xa4) * fVar4;
      *(float *)(puVar6 + 0x15) = *(float *)(puVar6 + 0x15) * fVar4 * fVar2;
      do {
        *(float *)((int)lVar12 + 0x9c) = *(float *)((int)lVar12 + 0x8c) * fVar4 * fVar4;
        iVar7 = (int)lVar17;
        lVar12 = lVar12 + 8;
        lVar17 = lVar17 + 8;
        *(float *)((int)lVar18 + 4) = *(float *)(iVar7 + 4) * fVar4 * fVar4;
        lVar18 = lVar18 + 8;
        lVar20 = lVar20 + -1;
      } while (lVar20 != 0);
      lVar18 = uVar11 - 0x84;
      pfVar19 = (float *)&DAT_007358e0;
      lVar20 = 4;
      lVar12 = lVar13;
      lVar17 = lVar18;
      do {
        fVar4 = *pfVar19;
        fVar2 = pfVar19[1];
        pfVar19 = pfVar19 + 2;
        *(float *)((int)lVar12 + 0x9c) = *(float *)((int)lVar12 + 0x9c) * fVar4;
        lVar12 = lVar12 + 8;
        *(float *)((int)lVar17 + 4) = *(float *)((int)lVar17 + 4) * fVar2;
        lVar17 = lVar17 + 8;
        lVar20 = lVar20 + -1;
      } while (lVar20 != 0);
      lVar17 = 2;
      lVar12 = lVar13;
      fVar4 = fVar9;
      do {
        iVar7 = (int)lVar12;
        lVar12 = lVar12 + 0x10;
        iVar8 = (int)lVar18;
        lVar18 = lVar18 + 0x10;
        fVar4 = fVar4 + *(float *)(iVar7 + 0x9c) + *(float *)(iVar8 + 4) + *(float *)(iVar8 + 8) +
                *(float *)(iVar8 + 0xc);
        lVar17 = lVar17 + -1;
      } while (lVar17 != 0);
      fVar10 = (fVar4 + 0.7853982) * fVar3 + fVar1;
    }
    (pMVar14->rotation).y = -fVar10;
    fVar4 = *param_6;
    fVar3 = param_6[1];
    fVar1 = ABS(*param_6);
    fVar2 = ABS(param_6[1]);
    *(float *)(puVar6 + 0xe) = fVar1 - fVar2;
    uVar16 = (ulonglong)((uint)fVar4 >> 0x1c) & 8 |
             (ulonglong)(*(uint *)(puVar6 + 0xe) >> 0x1e) & 2 | (ulonglong)((uint)fVar3 >> 0x1d) & 4
    ;
    fVar4 = fVar1;
    if (*(float *)(puVar6 + 0xe) - 0.0 < 0.0) {
      fVar4 = fVar2;
    }
    fVar3 = *(float *)(&g_atanQuadrantTable + (int)(uVar16 << 2));
    if (*(float *)(puVar6 + 0xe) - 0.0 < 0.0) {
      fVar2 = fVar1;
    }
    fVar1 = *(float *)(((uint)(uVar16 << 2) | 0x735900) + 4);
    if (0.0 < fVar4) {
      lVar12 = uVar11 - 0x110;
      lVar17 = uVar11 - 0xa4;
      lVar18 = uVar11 - 0x94;
      lVar20 = 2;
      fVar4 = (fVar2 - fVar4) / (fVar2 + fVar4);
      fVar2 = fVar4 * fVar4;
      *(float *)(puVar6 + 0x11) = fVar4;
      *(float *)(puVar6 + 0x10) = fVar4;
      *(float *)((int)puVar6 + 0x84) = fVar4;
      *(float *)((int)puVar6 + 0x7c) = fVar4;
      fVar4 = fVar2 * fVar2;
      *(float *)(puVar6 + 0x10) = *(float *)(puVar6 + 0x10) * fVar2;
      *(float *)((int)puVar6 + 0x84) = *(float *)((int)puVar6 + 0x84) * fVar4;
      *(float *)(puVar6 + 0x11) = *(float *)(puVar6 + 0x11) * fVar4 * fVar2;
      do {
        *(float *)((int)lVar12 + 0x7c) = *(float *)((int)lVar12 + 0x6c) * fVar4 * fVar4;
        iVar7 = (int)lVar17;
        lVar12 = lVar12 + 8;
        lVar17 = lVar17 + 8;
        *(float *)((int)lVar18 + 4) = *(float *)(iVar7 + 4) * fVar4 * fVar4;
        lVar18 = lVar18 + 8;
        lVar20 = lVar20 + -1;
      } while (lVar20 != 0);
      lVar18 = uVar11 - 0xa4;
      pfVar19 = (float *)&DAT_007358e0;
      lVar20 = 4;
      lVar12 = lVar13;
      lVar17 = lVar18;
      do {
        fVar4 = *pfVar19;
        fVar2 = pfVar19[1];
        pfVar19 = pfVar19 + 2;
        *(float *)((int)lVar12 + 0x7c) = *(float *)((int)lVar12 + 0x7c) * fVar4;
        lVar12 = lVar12 + 8;
        *(float *)((int)lVar17 + 4) = *(float *)((int)lVar17 + 4) * fVar2;
        lVar17 = lVar17 + 8;
        lVar20 = lVar20 + -1;
      } while (lVar20 != 0);
      lVar12 = 2;
      do {
        iVar7 = (int)lVar13;
        iVar8 = (int)lVar18;
        lVar13 = lVar13 + 0x10;
        lVar18 = lVar18 + 0x10;
        fVar9 = fVar9 + *(float *)(iVar7 + 0x7c) + *(float *)(iVar8 + 4) + *(float *)(iVar8 + 8) +
                *(float *)(iVar8 + 0xc);
        lVar12 = lVar12 + -1;
      } while (lVar12 != 0);
      fVar9 = (fVar9 + 0.7853982) * fVar3 + fVar1;
    }
    (pMVar14->rotation).z = fVar9;
    (pMVar14->pos).x = *param_5;
    (pMVar14->pos).y = param_5[1];
    (pMVar14->pos).z = param_5[2];
    (pMVar14->pos).w = param_5[3];
    *pfVar5 = *param_6;
    pfVar5[1] = param_6[1];
    pfVar5[2] = param_6[2];
    fVar4 = param_6[3];
    pfVar5[5] = param_8;
    pfVar5[3] = fVar4;
    *(undefined2 *)((int)pfVar5 + 0x12) = param_7;
    pfVar5[6] = (float)param_2;
    uVar15 = FastDoubleToInt
                       ((double)(float)(param_1 /
                                       (double)SQRT(param_6[2] * param_6[2] +
                                                    *param_6 * *param_6 + param_6[1] * param_6[1])))
    ;
    *(undefined2 *)(pfVar5 + 4) = uVar15;
    puVar6[0x18] = (longlong)(int)(animationSpeed * 5.5);
    MB_SetAnimation(pMVar14,1,0,*(undefined4 *)((int)puVar6 + 0xc4));
    pMVar14->modeBits = DRAW_TRANSPARENT_WEIRD;
    pfVar5[8] = param_4;
    pfVar5[7] = (float)param_3;
    UpdateMobyTransform(pMVar14);
  }
  return pMVar14;
}


// 0x0495c60 (0x38 bytes)
void M859_00495c60(double param_1,int param_2)

{
  double dVar1;
  double dVar2;
  
  dVar2 = (double)*(float *)(param_2 + 0x18);
  dVar1 = param_1;
  if ((float)(param_1 - dVar2) - -0.1 < 0.0) {
    dVar1 = (double)(float)(dVar2 - 0.10000000149011612);
  }
  if (0.1 - (float)(param_1 - dVar2) < 0.0) {
    dVar1 = (double)(float)(dVar2 + 0.10000000149011612);
  }
  *(float *)(param_2 + 0x18) = (float)dVar1;
  return;
}


// 0x0495cd0 (0x72c bytes)
// inlined: FastRSqrt @0x495f60
/* Moby 859 */

void UpdateMoby_859(MobyInstance *moby)

{
  bool bVar1;
  char cVar2;
  float fVar3;
  short sVar4;
  float *pfVar5;
  f32 fVar6;
  f32 fVar7;
  f32 fVar8;
  undefined1 *puVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  float fVar13;
  float fVar14;
  MobyInstance *pMVar15;
  longlong lVar16;
  int iVar18;
  undefined8 uVar17;
  int iVar19;
  int iVar20;
  int iVar21;
  double dVar22;
  double dVar23;
  double dVar24;
  double dVar25;
  double dVar26;
  undefined8 uVar27;
  double dVar28;
  GPiece<16> local_170;
  GPiece<16> local_160;
  GPiece<32> local_150;
  GPiece<16> local_130;
  undefined4 local_120 [4];
  GPiece<48> auStack_110;
  GPiece<8> auStack_e0;
  float local_d8;
  int local_a0;
  
  lVar16 = (longlong)(int)moby;
  pfVar5 = (float *)moby->pVar;
  (moby->pos).x = (moby->pos).x + *pfVar5;
  (moby->pos).y = (moby->pos).y + pfVar5[1];
  (moby->pos).z = (moby->pos).z + pfVar5[2];
  MB_getTarget(0x4034000000000000,lVar16,&DAT_00495c98,auStack_e0);
  sVar4 = *(short *)((int)pfVar5 + 0x12);
  if (sVar4 < 2) {
    if (0 < sVar4) {
      fVar3 = (moby->pos).z;
      fVar13 = pfVar5[7] - fVar3;
      fVar14 = pfVar5[7];
      if (fVar13 - -0.1 < 0.0) {
        fVar14 = fVar3 - 0.1;
      }
      if (0.1 - fVar13 < 0.0) {
        fVar14 = fVar3 + 0.1;
      }
      (moby->pos).z = fVar14;
    }
  }
  else if (sVar4 < 3) {
    dVar28 = 0.10000000149011612;
    iVar18 = CollLine(local_160,local_150,2,lVar16,0);
    if (iVar18 == 0) {
      dVar23 = (double)(moby->pos).z;
      dVar22 = (double)(float)(dVar23 - dVar28);
      if (dVar28 - (double)(float)((double)(float)(dVar23 - dVar28) - dVar23) < 0.0) {
        dVar22 = (double)(float)(dVar23 + dVar28);
      }
      (moby->pos).z = (float)dVar22;
    }
    else {
      dVar23 = (double)(moby->pos).z;
      dVar24 = (double)(float)((double)(g_CollOutput.ip.z + pfVar5[7]) - dVar23);
      dVar22 = (double)(g_CollOutput.ip.z + pfVar5[7]);
      if (dVar24 - -0.10000000149011612 < 0.0) {
        dVar22 = (double)(float)(dVar23 - dVar28);
      }
      if (dVar28 - dVar24 < 0.0) {
        dVar22 = (double)(float)(dVar23 + dVar28);
      }
      (moby->pos).z = (float)dVar22;
    }
  }
  else if ((sVar4 < 4) && (local_a0 != 0)) {
    fVar3 = (moby->pos).z;
    fVar13 = (local_d8 + pfVar5[7]) - fVar3;
    fVar14 = local_d8 + pfVar5[7];
    if (fVar13 - -0.1 < 0.0) {
      fVar14 = fVar3 - 0.1;
    }
    if (0.1 - fVar13 < 0.0) {
      fVar14 = fVar3 + 0.1;
    }
    (moby->pos).z = fVar14;
  }
  dVar28 = 1.0;
  SetCollDamIn((double)pfVar5[6],auStack_110,lVar16,0x10001);
  iVar18 = FastDecTimerS16(pfVar5 + 4);
  if (iVar18 == 0) {
    iVar18 = CollLine(local_170,lVar16 + 0x10,0,pfVar5[8],auStack_110);
    pMVar15 = g_CollOutput.pMoby;
    fVar6 = (moby->pos).x;
    fVar7 = (moby->pos).y;
    fVar8 = (moby->pos).z;
    uVar10 = (int)fVar7 >> 0x1f;
    uVar11 = (int)fVar6 >> 0x1f;
    uVar12 = (int)fVar8 >> 0x1f;
    iVar20 = (uVar10 >> 1 ^ (uint)fVar7) - uVar10;
    iVar19 = (uVar11 >> 1 ^ (uint)fVar6) - uVar11;
    iVar21 = (uVar12 >> 1 ^ (uint)fVar8) - uVar12;
    if ((iVar18 == 0) ||
       ((bVar1 = g_CollOutput.pMoby != (MobyInstance *)0x0, bVar1 &&
        ((g_CollOutput.pMoby)->oClass == GADGEBOT_0359)))) {
      if ((iVar20 < 0x40000000 || iVar19 < 0x40000000) ||
         ((((iVar21 < 0x40000000 || (0x43ff0000 < iVar20 || 0x43ff0000 < iVar19)) ||
           (0x43ff0000 < iVar21)) ||
          (fVar13 = (moby->pos).y - GameCamera.posY, fVar3 = (moby->pos).x - GameCamera.posX,
          80.0 < SQRT(fVar3 * fVar3 + fVar13 * fVar13))))) {
        DeleteMoby(moby);
      }
    }
    else {
      (moby->pos).x = g_CollOutput.ip.x;
      puVar9 = (undefined1 *)pfVar5[5];
      (moby->pos).y = g_CollOutput.ip.y;
      (moby->pos).z = g_CollOutput.ip.z;
      (moby->pos).w = g_CollOutput.ip.w;
      if (((puVar9 != (undefined1 *)0x0) && (bVar1)) &&
         ((pMVar15 == g_heroMobyPtr &&
          ((pfVar5[8] != 0.0 &&
           (cVar2 = *(char *)((int)pfVar5[8] + 0x20), cVar2 != -3 && cVar2 != -2)))))) {
        *puVar9 = 1;
      }
      iVar18 = 0;
      dVar22 = -1.0;
      dVar23 = 3.0;
      dVar24 = 6.0;
      dVar25 = 10.5;
      dVar26 = 15.5;
      uVar27 = 0x40dd4c0000000000;
      do {
        MB_randRangeFloat((float)dVar22,(float)dVar28);
        MB_randRangeFloat((float)dVar22,(float)dVar28);
        MB_randRangeFloat((float)dVar22,(float)dVar28);
        FastVecReflect(local_120,pfVar5,0xa10980);
        MB_randRangeFloat
                  ((float)((double)g_FrameTime * dVar23),
                   (float)((double)g_FrameTime * dVar24));
        uVar17 = MB_randRange
                           ((int)((double)animationSpeed * dVar25),
                            (int)((double)animationSpeed * dVar26));
        SpawnPart_27(uVar27,lVar16 + 0x10,local_130,0x7f2f4f6f,uVar17);
        iVar18 = iVar18 + 1;
      } while (iVar18 < 5);
      DeleteMoby(moby);
    }
  }
  else {
    DeleteMoby(moby);
  }
  return;
}


// 0x04963fc (0x14 bytes)
void M859_004963fc(void)

{
  DAT_008c7d34 = 0x10000;
  return;
}


