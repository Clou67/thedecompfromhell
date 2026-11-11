// game/update/moby377.cpp -- reconstructed from NPEA00385 EBOOT
// STATUS: NOT STARTED (raw Ghidra output)
// 3 functions, 0x357940-0x3580e8
#include <stdio.h>
#include "game/update/moby377.h"
#include "game/hero.h"
#include "game/mobyfunc.h"
#include "game/mobyproc.h"
#include "game/mobyutil.h"
#include "game/update/moby329.h"
#include "idol/fastfunc.h"

// 0x0357940 (0x14 bytes)
void M377_00357940(void)

{
  DAT_00840650 = 0x10000;
  return;
}


// 0x0357958 (0xcc bytes)
MobyInstance * M377_00357958(int param_1)

{
  f32 fVar1;
  int *piVar2;
  MobyInstance *pMVar3;
  
  pMVar3 = CreateMoby(0x179);
  if (pMVar3 != (MobyInstance *)0x0) {
    pMVar3->updateDistance = -1;
    pMVar3->enabled = '\x01';
    pMVar3->state = '\0';
    pMVar3->setByGroup = '\0';
    (pMVar3->pos).x = *(f32 *)(param_1 + 0x10);
    piVar2 = (int *)pMVar3->pVar;
    (pMVar3->pos).y = *(f32 *)(param_1 + 0x14);
    (pMVar3->pos).z = *(f32 *)(param_1 + 0x18);
    fVar1 = *(f32 *)(param_1 + 0x1c);
    pMVar3->drawDistance = 0xff;
    (pMVar3->pos).w = fVar1;
    (pMVar3->rotation).x = *(f32 *)(param_1 + 0x40);
    (pMVar3->rotation).y = *(f32 *)(param_1 + 0x44);
    fVar1 = *(f32 *)(param_1 + 0x48);
    *piVar2 = param_1;
    (pMVar3->rotation).z = fVar1;
    (pMVar3->rotation).w = *(f32 *)(param_1 + 0x4c);
    UpdateMobyTransform(pMVar3);
    MB_CopyHeroLights(pMVar3);
  }
  return pMVar3;
}


// 0x0357a40 (0x6a8 bytes)
// inlined: FastAtan2 @0x357ca4
// strings: 006565c4: 'M377 error! could not find a free ski!\n'

/* Moby 377 */

ulonglong UpdateMoby_377(MobyInstance *moby)

{
  longlong lVar1;
  byte bVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  uint *puVar8;
  uint uVar9;
  undefined4 uVar10;
  GPiece<16> auVar11;
  ulonglong *puVar12;
  int iVar13;
  int iVar14;
  float fVar15;
  ulonglong uVar16;
  ulonglong uVar17;
  ulonglong uVar18;
  longlong lVar19;
  int32_t iVar20;
  longlong lVar21;
  float *pfVar22;
  longlong lVar23;
  uint *puVar24;
  ulonglong unaff_r29;
  ulonglong unaff_r30;
  ulonglong unaff_r31;
  ulonglong in_LR;
  longlong lVar25;
  double dVar26;
  GPiece<16> auVar27;
  GPiece<16> auVar28;
  GPiece<16> auVar29;
  GPiece<16> auVar30;
  
  uVar17 = (ulonglong)(int)moby;
  uVar16 = ZEXT48(&stack0x00000000);
  lVar1 = uVar16 - 0xf0;
  puVar12 = (ulonglong *)lVar1;
  *puVar12 = uVar16;
  puVar12[0x20] = in_LR;
  puVar12[0x1d] = unaff_r31;
  puVar12[0x1c] = unaff_r30;
  puVar12[0x1b] = unaff_r29;
  uVar18 = uVar17;
  if ((moby != (MobyInstance *)0x0) && (puVar8 = (uint *)moby->pVar, puVar8 != (uint *)0x0)) {
    bVar2 = moby->state;
    uVar18 = (ulonglong)bVar2;
    if (bVar2 == 7) {
      uVar18 = DeleteMoby(moby);
    }
    else if (bVar2 == 6) {
      uVar18 = (ulonglong)(byte)moby->field43_0x70 & 2;
      if ((int)uVar18 != 0) {
        uVar18 = 0;
        moby->unk58 = 0.0;
        moby->state = '\a';
        puVar24 = puVar8;
        do {
          uVar9 = puVar24[4];
          if (((uVar9 != 0) && (*(short *)(uVar9 + 0xa6) == 0x149)) &&
             (*(char *)(uVar9 + 0x20) != -3 && *(char *)(uVar9 + 0x20) != -2)) {
            uVar9 = *(uint *)((int)puVar8 + (int)((uVar18 & 0xffffffff) << 2) + 0x10);
            *(undefined1 *)(uVar9 + 0x20) = 5;
            return (ulonglong)uVar9;
          }
          uVar18 = uVar18 + 1;
          puVar24 = puVar24 + 1;
        } while ((int)uVar18 < 3);
      }
    }
    else if (bVar2 == 5) {
      uVar18 = (ulonglong)(byte)moby->field43_0x70 & 2;
      if ((int)uVar18 != 0) {
        if (moby->animationId != '\x04') {
          puVar12[0x18] = (longlong)(int)(animationSpeed * 10.5);
          MB_SetAnimation(uVar17,4,0,*(undefined4 *)((int)puVar12 + 0xc4));
        }
        uVar18 = 2;
        moby->state = '\x02';
      }
    }
    else if (bVar2 == 4) {
      uVar18 = FastDecTimerS16(puVar8 + 3);
      if ((int)uVar18 != 0) {
        if (moby->animationId != '\x03') {
          puVar12[0x18] = (longlong)(int)(animationSpeed * 10.5);
          MB_SetAnimation(uVar17,3,0,*(undefined4 *)((int)puVar12 + 0xc4));
        }
        uVar18 = 5;
        moby->state = '\x05';
      }
    }
    else if (bVar2 == 3) {
      uVar18 = (ulonglong)(byte)moby->field43_0x70 & 2;
      if ((int)uVar18 != 0) {
        fVar3 = g_heroPosition.x - (moby->pos).x;
        fVar6 = g_heroPosition.y - (moby->pos).y;
        auVar27 = loadVectorLeftIndexed(0x10,(ulonglong)*puVar8);
        auVar28 = loadVectorLeftIndexed(0x14,(ulonglong)*puVar8);
        fVar5 = ABS(fVar3);
        fVar4 = ABS(fVar6);
        *(float *)(puVar12 + 0x12) = fVar3;
        *(float *)((int)puVar12 + 0x94) = fVar6;
        fVar3 = (moby->pos).z;
        *(float *)(puVar12 + 0x13) = fVar5 - fVar4;
        dVar26 = 0.0;
        uVar18 = (ulonglong)(*(uint *)(puVar12 + 0x12) >> 0x1c) & 8 |
                 (ulonglong)(*(uint *)(puVar12 + 0x13) >> 0x1e) & 2 |
                 (ulonglong)(*(uint *)((int)puVar12 + 0x94) >> 0x1d) & 4;
        fVar6 = ABS(*(float *)(puVar12 + 0x12));
        if (*(float *)(puVar12 + 0x13) - 0.0 < 0.0) {
          fVar6 = fVar4;
        }
        fVar7 = *(float *)(&g_atanQuadrantTable + (int)(uVar18 << 2));
        fVar4 = *(float *)(((uint)(uVar18 << 2) | 0x735900) + 4);
        fVar15 = ABS(*(float *)((int)puVar12 + 0x94));
        if (*(float *)(puVar12 + 0x13) - 0.0 < 0.0) {
          fVar15 = fVar5;
        }
        if (0.0 < fVar6) {
          lVar19 = uVar16 - 0xe0;
          lVar23 = uVar16 - 0x44;
          lVar21 = uVar16 - 0x54;
          lVar25 = 2;
          fVar6 = (fVar15 - fVar6) / (fVar15 + fVar6);
          fVar5 = fVar6 * fVar6;
          *(float *)(puVar12 + 0x15) = fVar6;
          *(float *)(puVar12 + 0x14) = fVar6;
          *(float *)((int)puVar12 + 0xa4) = fVar6;
          *(float *)((int)puVar12 + 0x9c) = fVar6;
          fVar6 = fVar5 * fVar5;
          *(float *)(puVar12 + 0x14) = *(float *)(puVar12 + 0x14) * fVar5;
          *(float *)((int)puVar12 + 0xa4) = *(float *)((int)puVar12 + 0xa4) * fVar6;
          *(float *)(puVar12 + 0x15) = *(float *)(puVar12 + 0x15) * fVar6 * fVar5;
          do {
            *(float *)((int)lVar19 + 0x9c) = *(float *)((int)lVar19 + 0x8c) * fVar6 * fVar6;
            iVar13 = (int)lVar21;
            lVar21 = lVar21 + 8;
            lVar19 = lVar19 + 8;
            *(float *)((int)lVar23 + 4) = *(float *)(iVar13 + 4) * fVar6 * fVar6;
            lVar23 = lVar23 + 8;
            lVar25 = lVar25 + -1;
          } while (lVar25 != 0);
          lVar25 = 4;
          lVar23 = uVar16 - 0x54;
          pfVar22 = (float *)&DAT_007358e0;
          lVar19 = lVar1;
          lVar21 = lVar23;
          do {
            fVar6 = *pfVar22;
            fVar5 = pfVar22[1];
            pfVar22 = pfVar22 + 2;
            *(float *)((int)lVar19 + 0x9c) = *(float *)((int)lVar19 + 0x9c) * fVar6;
            lVar19 = lVar19 + 8;
            *(float *)((int)lVar21 + 4) = *(float *)((int)lVar21 + 4) * fVar5;
            lVar21 = lVar21 + 8;
            lVar25 = lVar25 + -1;
          } while (lVar25 != 0);
          lVar21 = 2;
          lVar19 = lVar1;
          do {
            iVar13 = (int)lVar19;
            lVar19 = lVar19 + 0x10;
            iVar14 = (int)lVar23;
            lVar23 = lVar23 + 0x10;
            dVar26 = (double)((float)(dVar26 + (double)*(float *)(iVar13 + 0x9c)) +
                              *(float *)(iVar14 + 4) + *(float *)(iVar14 + 8) +
                             *(float *)(iVar14 + 0xc));
            lVar21 = lVar21 + -1;
          } while (lVar21 != 0);
          dVar26 = (double)((float)(dVar26 + 0.7853981852531433) * fVar7 + fVar4);
        }
        *(undefined4 *)((int)puVar12 + 0x7c) = 0;
        *(undefined4 *)(puVar12 + 0xf) = 0;
        *(undefined4 *)((int)puVar12 + 0x74) = 0;
        *(undefined4 *)(puVar12 + 0xe) = 0;
        fVar4 = g_FrameTime * 6.0;
        *(float *)(puVar12 + 0xf) = fVar4;
        uVar9 = *(uint *)(*puVar8 + 0x78);
        uVar18 = (ulonglong)uVar9;
        auVar29 = loadVectorLeftIndexed(0x30,uVar18);
        auVar30 = loadVectorRightIndexed(0x40,uVar18);
        auVar11 = (auVar29 | auVar30) >> 0x60 & (GPiece<16>)0xffffffff;
        auVar27 = vectorAddFloatingPoint(auVar27,auVar29 | auVar30);
        uVar10 = storeVectorElementWordIndexed
                           (auVar11 | auVar11 << 0x20 | auVar11 << 0x40 | auVar11 << 0x60,0x70,lVar1
                           );
        *(undefined4 *)(puVar12 + 0xe) = uVar10;
        auVar29 = loadVectorLeftIndexed(0x34,uVar18);
        auVar30 = loadVectorRightIndexed(0x44,uVar18);
        auVar27 = auVar27 >> 0x60 & (GPiece<16>)0xffffffff;
        auVar11 = (auVar29 | auVar30) >> 0x60 & (GPiece<16>)0xffffffff;
        auVar28 = vectorAddFloatingPoint(auVar28,auVar29 | auVar30);
        uVar10 = storeVectorElementWordIndexed
                           (auVar11 | auVar11 << 0x20 | auVar11 << 0x40 | auVar11 << 0x60,0x74,lVar1
                           );
        *(undefined4 *)((int)puVar12 + 0x74) = uVar10;
        fVar6 = *(float *)(uVar9 + 0x38);
        uVar10 = storeVectorElementWordIndexed
                           (auVar27 | auVar27 << 0x20 | auVar27 << 0x40 | auVar27 << 0x60,0x80,lVar1
                           );
        *(undefined4 *)(puVar12 + 0x10) = uVar10;
        fVar4 = fVar4 + fVar6;
        uVar18 = 0;
        auVar27 = auVar28 >> 0x60 & (GPiece<16>)0xffffffff;
        uVar10 = storeVectorElementWordIndexed
                           (auVar27 | auVar27 << 0x20 | auVar27 << 0x40 | auVar27 << 0x60,0x84,lVar1
                           );
        *(undefined4 *)((int)puVar12 + 0x84) = uVar10;
        *(float *)(puVar12 + 0xf) = fVar4;
        *(float *)((int)puVar12 + 0x8c) = fVar7;
        *(float *)(puVar12 + 0x11) = fVar3 + 0.2 + fVar4;
        puVar24 = puVar8;
        do {
          uVar9 = puVar24[4];
          if (((uVar9 == 0) || (*(short *)(uVar9 + 0xa6) != 0x149)) ||
             (*(char *)(uVar9 + 0x20) == -3 || *(char *)(uVar9 + 0x20) == -2)) break;
          uVar18 = uVar18 + 1;
          puVar24 = puVar24 + 1;
        } while ((int)uVar18 < 3);
        if ((int)uVar18 == 3) {
          iVar20 = printf("M377 error! could not find a free ski!\n");
          uVar18 = (ulonglong)iVar20;
        }
        else {
          iVar13 = (int)((uVar18 & 0xffffffff) << 2);
          uVar18 = FUN_00344150(-dVar26,uVar17,uVar16 - 0x70,uVar16 - 0x80,uVar16 - 0x70,
                                *(undefined4 *)(*(int *)(*puVar8 + 0x78) + iVar13 + 0x20),
                                (short)uVar18);
          *(int *)((int)puVar8 + iVar13 + 0x10) = (int)uVar18;
          if ((int)uVar18 != 0) {
            *(undefined2 *)(puVar8 + 1) = 0xf0;
            *(undefined2 *)(puVar8 + 3) = 0x1e;
            *(short *)((int)puVar8 + 6) = *(short *)((int)puVar8 + 6) + 1;
            if (moby->animationId != '\x02') {
              puVar12[0x18] = (longlong)(int)(animationSpeed * 10.5);
              MB_SetAnimation(uVar17,2,0,*(undefined4 *)((int)puVar12 + 0xc4));
            }
            uVar18 = 4;
            moby->state = '\x04';
          }
        }
      }
    }
    else if (bVar2 == 2) {
      uVar18 = (ulonglong)*(short *)((int)puVar8 + 0xe);
      if ((*(short *)((int)puVar8 + 0xe) < 3) &&
         (uVar18 = FastDecTimerS16(puVar8 + 1), (int)uVar18 != 0)) {
        uVar18 = 3;
        *(short *)((int)puVar8 + 0xe) = *(short *)((int)puVar8 + 0xe) + 1;
        moby->state = '\x03';
        if (moby->animationId != '\x01') {
          puVar12[0x18] = (longlong)(int)(animationSpeed * 10.5);
          uVar18 = MB_SetAnimation(uVar17,1,0,*(undefined4 *)((int)puVar12 + 0xc4));
        }
      }
    }
    else if (bVar2 == 1) {
      uVar18 = (ulonglong)(byte)moby->field43_0x70 & 2;
      if ((int)uVar18 != 0) {
        if (moby->animationId != '\x04') {
          puVar12[0x18] = (longlong)(int)(animationSpeed * 5.5);
          MB_SetAnimation(uVar17,4,0,*(undefined4 *)((int)puVar12 + 0xc4));
        }
        uVar18 = 2;
        moby->state = '\x02';
      }
    }
    else if (bVar2 == 0) {
      uVar18 = 1;
      moby->state = '\x01';
    }
  }
  return uVar18;
}


