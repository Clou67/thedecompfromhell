// game/update/moby681.cpp -- reconstructed from NPEA00385 EBOOT
// STATUS: NOT STARTED (raw Ghidra output)
// 3 functions, 0x410504-0x411170
#include "game/update/moby681.h"
#include "game/collproc.h"
#include "game/hero.h"
#include "game/mobyfunc.h"
#include "game/mobyproc.h"
#include "game/mobyutil.h"
#include "game/partupd.h"
#include "game/sound.h"
#include "idol/fastfunc.h"

// 0x0410504 (0x14 bytes)
void M681_00410504(void)

{
  DAT_008571ac = 0x10000;
  return;
}


// 0x0410528 (0x49c bytes)
// inlined: FastAtan2 @0x410654, FastAtan2 @0x4107dc
MobyInstance * FUN_00410528(float *param_1,float *param_2,float param_3,float param_4)

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
  ulonglong uVar15;
  longlong lVar16;
  float *pfVar18;
  longlong lVar17;
  ulonglong unaff_r26;
  ulonglong unaff_r27;
  ulonglong unaff_r28;
  ulonglong unaff_r29;
  ulonglong unaff_r30;
  ulonglong unaff_r31;
  ulonglong in_LR;
  longlong lVar19;
  
  uVar11 = ZEXT48(&stack0x00000000);
  lVar13 = uVar11 - 0x100;
  puVar6 = (ulonglong *)lVar13;
  *puVar6 = uVar11;
  puVar6[0x22] = in_LR;
  puVar6[0x1f] = unaff_r31;
  puVar6[0x1d] = unaff_r29;
  puVar6[0x1c] = unaff_r28;
  puVar6[0x1e] = unaff_r30;
  puVar6[0x1b] = unaff_r27;
  puVar6[0x1a] = unaff_r26;
  pMVar14 = CreateMoby(0x2a9);
  if (pMVar14 != (MobyInstance *)0x0) {
    pMVar14->updateDistance = -1;
    pMVar14->drawDistance = 0x7f;
    pMVar14->enabled = '\x01';
    fVar9 = 0.0;
    (pMVar14->rotation).x = 0.0;
    fVar4 = param_2[2];
    pfVar5 = (float *)pMVar14->pVar;
    fVar2 = ABS(param_2[2]);
    fVar3 = SQRT(*param_2 * *param_2 + param_2[1] * param_2[1]);
    fVar1 = ABS(fVar3);
    *(float *)((int)puVar6 + 0x74) = fVar3;
    *(float *)(puVar6 + 0xf) = fVar1 - fVar2;
    uVar15 = (ulonglong)(*(uint *)((int)puVar6 + 0x74) >> 0x1c) & 8 |
             (ulonglong)(*(uint *)(puVar6 + 0xf) >> 0x1e) & 2 | (ulonglong)((uint)fVar4 >> 0x1d) & 4
    ;
    fVar4 = ABS(*(float *)((int)puVar6 + 0x74));
    if (*(float *)(puVar6 + 0xf) - 0.0 < 0.0) {
      fVar4 = fVar2;
    }
    fVar3 = *(float *)(&g_atanQuadrantTable + (int)(uVar15 << 2));
    if (*(float *)(puVar6 + 0xf) - 0.0 < 0.0) {
      fVar2 = fVar1;
    }
    fVar1 = *(float *)(((uint)(uVar15 << 2) | 0x735900) + 4);
    fVar10 = fVar9;
    if (0.0 < fVar4) {
      lVar12 = uVar11 - 0xf0;
      lVar16 = uVar11 - 100;
      lVar17 = uVar11 - 0x54;
      lVar19 = 2;
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
        iVar7 = (int)lVar16;
        lVar12 = lVar12 + 8;
        lVar16 = lVar16 + 8;
        *(float *)((int)lVar17 + 4) = *(float *)(iVar7 + 4) * fVar4 * fVar4;
        lVar17 = lVar17 + 8;
        lVar19 = lVar19 + -1;
      } while (lVar19 != 0);
      lVar17 = uVar11 - 100;
      pfVar18 = (float *)&DAT_007358e0;
      lVar19 = 4;
      lVar12 = lVar13;
      lVar16 = lVar17;
      do {
        fVar4 = *pfVar18;
        fVar2 = pfVar18[1];
        pfVar18 = pfVar18 + 2;
        *(float *)((int)lVar12 + 0x9c) = *(float *)((int)lVar12 + 0x9c) * fVar4;
        lVar12 = lVar12 + 8;
        *(float *)((int)lVar16 + 4) = *(float *)((int)lVar16 + 4) * fVar2;
        lVar16 = lVar16 + 8;
        lVar19 = lVar19 + -1;
      } while (lVar19 != 0);
      lVar16 = 2;
      lVar12 = lVar13;
      fVar4 = fVar9;
      do {
        iVar7 = (int)lVar12;
        lVar12 = lVar12 + 0x10;
        iVar8 = (int)lVar17;
        lVar17 = lVar17 + 0x10;
        fVar4 = fVar4 + *(float *)(iVar7 + 0x9c) + *(float *)(iVar8 + 4) + *(float *)(iVar8 + 8) +
                *(float *)(iVar8 + 0xc);
        lVar16 = lVar16 + -1;
      } while (lVar16 != 0);
      fVar10 = (fVar4 + 0.7853982) * fVar3 + fVar1;
    }
    (pMVar14->rotation).y = -fVar10;
    fVar4 = *param_2;
    fVar3 = param_2[1];
    fVar1 = ABS(*param_2);
    fVar2 = ABS(param_2[1]);
    *(float *)(puVar6 + 0xe) = fVar1 - fVar2;
    uVar15 = (ulonglong)((uint)fVar4 >> 0x1c) & 8 |
             (ulonglong)(*(uint *)(puVar6 + 0xe) >> 0x1e) & 2 | (ulonglong)((uint)fVar3 >> 0x1d) & 4
    ;
    fVar4 = fVar1;
    if (*(float *)(puVar6 + 0xe) - 0.0 < 0.0) {
      fVar4 = fVar2;
    }
    fVar3 = *(float *)(&g_atanQuadrantTable + (int)(uVar15 << 2));
    if (*(float *)(puVar6 + 0xe) - 0.0 < 0.0) {
      fVar2 = fVar1;
    }
    fVar1 = *(float *)(((uint)(uVar15 << 2) | 0x735900) + 4);
    if (0.0 < fVar4) {
      lVar12 = uVar11 - 0xf0;
      lVar16 = uVar11 - 0x84;
      lVar17 = uVar11 - 0x74;
      lVar19 = 2;
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
        iVar7 = (int)lVar16;
        lVar12 = lVar12 + 8;
        lVar16 = lVar16 + 8;
        *(float *)((int)lVar17 + 4) = *(float *)(iVar7 + 4) * fVar4 * fVar4;
        lVar17 = lVar17 + 8;
        lVar19 = lVar19 + -1;
      } while (lVar19 != 0);
      lVar17 = uVar11 - 0x84;
      pfVar18 = (float *)&DAT_007358e0;
      lVar19 = 4;
      lVar12 = lVar13;
      lVar16 = lVar17;
      do {
        fVar4 = *pfVar18;
        fVar2 = pfVar18[1];
        pfVar18 = pfVar18 + 2;
        *(float *)((int)lVar12 + 0x7c) = *(float *)((int)lVar12 + 0x7c) * fVar4;
        lVar12 = lVar12 + 8;
        *(float *)((int)lVar16 + 4) = *(float *)((int)lVar16 + 4) * fVar2;
        lVar16 = lVar16 + 8;
        lVar19 = lVar19 + -1;
      } while (lVar19 != 0);
      lVar12 = 2;
      do {
        iVar7 = (int)lVar13;
        iVar8 = (int)lVar17;
        lVar13 = lVar13 + 0x10;
        lVar17 = lVar17 + 0x10;
        fVar9 = fVar9 + *(float *)(iVar7 + 0x7c) + *(float *)(iVar8 + 4) + *(float *)(iVar8 + 8) +
                *(float *)(iVar8 + 0xc);
        lVar12 = lVar12 + -1;
      } while (lVar12 != 0);
      fVar9 = (fVar9 + 0.7853982) * fVar3 + fVar1;
    }
    (pMVar14->rotation).z = fVar9;
    (pMVar14->pos).x = *param_1;
    (pMVar14->pos).y = param_1[1];
    (pMVar14->pos).z = param_1[2];
    (pMVar14->pos).w = param_1[3];
    pfVar5[4] = *param_1;
    pfVar5[5] = param_1[1];
    pfVar5[6] = param_1[2];
    pfVar5[7] = param_1[3];
    *pfVar5 = *param_2;
    pfVar5[1] = param_2[1];
    pfVar5[2] = param_2[2];
    pfVar5[3] = param_2[3];
    puVar6[0x18] = (longlong)(int)(animationSpeed * 5.5);
    MB_SetAnimation(pMVar14,1,0,*(undefined4 *)((int)puVar6 + 0xc4));
    pMVar14->modeBits = DRAW_TRANSPARENT_WEIRD|TRANSPARENT;
    pfVar5[8] = param_3;
    pfVar5[9] = param_4;
    pMVar14->alpha = '\x10';
    UpdateMobyTransform(pMVar14);
  }
  return pMVar14;
}


// 0x04109f8 (0x778 bytes)
// inlined: FastRSqrt @0x410af8
/* Moby 681 */

void UpdateMoby_681(MobyInstance *moby)

{
  char cVar1;
  float *pfVar2;
  MobyInstance *pMVar3;
  f32 fVar4;
  ulonglong uVar5;
  uint uVar6;
  float fVar7;
  float fVar8;
  longlong lVar9;
  int iVar11;
  undefined8 uVar10;
  int iVar12;
  undefined8 in_r6;
  double dVar13;
  double dVar14;
  double dVar15;
  double dVar16;
  double dVar17;
  undefined8 uVar18;
  double dVar19;
  GPiece<16> local_140;
  GPiece<16> local_130;
  GPiece<16> local_120;
  GPiece<16> local_110;
  GPiece<16> local_100;
  undefined4 local_f0 [4];
  GPiece<72> auStack_e0;
  
  lVar9 = (longlong)(int)moby;
  pfVar2 = (float *)moby->pVar;
  (moby->pos).x = (moby->pos).x + *pfVar2;
  (moby->pos).y = (moby->pos).y + pfVar2[1];
  (moby->pos).z = (moby->pos).z + pfVar2[2];
  pMVar3 = (MobyInstance *)pfVar2[8];
  dVar19 = 1.0;
  SetCollDamIn(0x3ff0000000000000,auStack_e0,lVar9,0x10001,in_r6,local_120);
  fVar7 = (moby->pos).y - pfVar2[5];
  fVar8 = (moby->pos).x - pfVar2[4];
  iVar12 = 0;
  uVar5 = (ulonglong)(LZCOUNT(pfVar2[9]) << 0x20) >> 0x25;
  if (SQRT(fVar8 * fVar8 + fVar7 * fVar7) <= 30.0) {
    do {
      iVar11 = CollLine(local_140,local_130,uVar5,pMVar3,0);
      if (iVar11 == 0) break;
      iVar12 = iVar12 + 1;
      if ((g_CollOutput.pMoby == (MobyInstance *)0x0) || ((g_CollOutput.pMoby)->oClass != SCOUTBOT)) {
        CollLine(local_140,local_130,uVar5,pMVar3,auStack_e0);
        (moby->pos).x = g_CollOutput.ip.x;
        cVar1 = moby->enabled;
        (moby->pos).y = g_CollOutput.ip.y;
        (moby->pos).z = g_CollOutput.ip.z;
        (moby->pos).w = g_CollOutput.ip.w;
        if (cVar1 != '\0') {
          iVar12 = 0;
          dVar13 = -1.0;
          dVar15 = 3.0;
          dVar17 = 6.0;
          dVar14 = 10.5;
          dVar16 = 15.5;
          uVar18 = 0x40dd4c0000000000;
          do {
            MB_randRangeFloat((float)dVar13,(float)dVar19);
            MB_randRangeFloat((float)dVar13,(float)dVar19);
            MB_randRangeFloat((float)dVar13,(float)dVar19);
            FastVecReflect(local_f0,pfVar2,0xa10980);
            MB_randRangeFloat
                      ((float)((double)g_FrameTime * dVar15),
                       (float)((double)g_FrameTime * dVar17));
            uVar10 = MB_randRange
                               ((int)((double)animationSpeed * dVar14),
                                (int)((double)animationSpeed * dVar16));
            SpawnPart_27(uVar18,lVar9 + 0x10,local_100,0x7f2f4f6f,uVar10);
            iVar12 = iVar12 + 1;
          } while (iVar12 < 5);
        }
        PlayMobySound(0,0,moby);
        DeleteMoby(moby);
        return;
      }
      pMVar3 = g_CollOutput.pMoby;
    } while (iVar12 < 3);
    fVar4 = (moby->pos).x;
    uVar6 = (int)fVar4 >> 0x1f;
    iVar12 = (uVar6 >> 1 ^ (uint)fVar4) - uVar6;
    if ((((iVar12 < 0x40000000) || (0x447f4000 < iVar12)) ||
        (fVar4 = (moby->pos).y, uVar6 = (int)fVar4 >> 0x1f,
        iVar12 = (uVar6 >> 1 ^ (uint)fVar4) - uVar6, 0x447f4000 < iVar12 || iVar12 < 0x40000000)) ||
       ((fVar4 = (moby->pos).z, uVar6 = (int)fVar4 >> 0x1f,
        iVar12 = (uVar6 >> 1 ^ (uint)fVar4) - uVar6, iVar12 < 0x40000000 || (0x447f4000 < iVar12))))
    {
      DeleteMoby(moby);
    }
  }
  else {
    if (moby->enabled != '\0') {
      iVar12 = 0;
      dVar13 = -1.0;
      dVar15 = 2.0;
      dVar17 = 4.0;
      do {
        MB_randRangeFloat((float)dVar13,(float)dVar19);
        MB_randRangeFloat((float)dVar13,(float)dVar19);
        MB_randRangeFloat((float)dVar13,(float)dVar19);
        MB_randRangeFloat
                  ((float)((double)g_FrameTime * dVar15),
                   (float)((double)g_FrameTime * dVar17));
        SpawnPart_51(lVar9 + 0x10,local_110);
        iVar12 = iVar12 + 1;
      } while (iVar12 < 3);
    }
    DeleteMoby(moby);
  }
  return;
}


