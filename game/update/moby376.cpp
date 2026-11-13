// game/update/moby376.cpp -- reconstructed from NPEA00385 EBOOT
// STATUS: NOT STARTED (raw Ghidra output)
// 3 functions, 0x3572f4-0x357940
#include "game/update/moby376.h"
#include "game/collproc.h"
#include "game/hero.h"
#include "game/mobyfunc.h"
#include "game/mobyproc.h"
#include "game/mobyutil.h"
#include "game/partupd.h"
#include "game/update/moby402.h"
#include "idol/fastfunc.h"

// 0x03572f4 (0x14 bytes)
void M376_003572f4(void)

{
  DAT_008405e0 = 0x10000;
  return;
}


// 0x0357308 (0xcc bytes)
MobyInstance * M376_00357308(int param_1)

{
  f32 fVar1;
  int *piVar2;
  MobyInstance *pMVar3;
  
  pMVar3 = CreateMoby(ROCKET_0100|BEIGE_SHIP);
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


// 0x03573f0 (0x550 bytes)
// inlined: FastAtan2 @0x3575b0
/* Moby 376 */

void UpdateMoby_376(MobyInstance *moby)

{
  longlong lVar1;
  float fVar2;
  float fVar3;
  u8 uVar4;
  float fVar5;
  float fVar6;
  int *piVar7;
  uint uVar8;
  undefined4 uVar9;
  ulonglong *puVar10;
  ulonglong uVar11;
  longlong lVar12;
  int iVar13;
  short sVar14;
  longlong lVar15;
  float *pfVar16;
  longlong lVar17;
  ulonglong uVar18;
  ulonglong unaff_r29;
  ulonglong unaff_r30;
  ulonglong unaff_r31;
  ulonglong in_LR;
  longlong lVar19;
  double dVar20;
  double dVar21;
  double dVar22;
  double dVar23;
  double dVar24;
  double dVar25;
  double dVar26;
  ulonglong in_f27;
  double dVar27;
  ulonglong in_f28;
  double dVar28;
  ulonglong in_f29;
  double dVar29;
  ulonglong in_f30;
  double dVar30;
  ulonglong in_f31;
  double dVar31;
  GPiece<16> auVar32;
  GPiece<16> auVar33;
  
  uVar11 = ZEXT48(&stack0x00000000);
  lVar1 = uVar11 - 0x100;
  puVar10 = (ulonglong *)lVar1;
  *puVar10 = uVar11;
  puVar10[0x22] = in_LR;
  puVar10[0x1b] = in_f27;
  puVar10[0x1c] = in_f28;
  puVar10[0x1d] = in_f29;
  puVar10[0x1e] = in_f30;
  puVar10[0x1f] = in_f31;
  puVar10[0x1a] = unaff_r31;
  puVar10[0x19] = unaff_r30;
  puVar10[0x18] = unaff_r29;
  if (moby != (MobyInstance *)0x0) {
    piVar7 = (int *)moby->pVar;
    if (piVar7 != (int *)0x0) {
      uVar4 = moby->state;
      if (uVar4 == '\x05') {
        DeleteMoby(moby);
      }
      else if (uVar4 == '\x04') {
        if ((moby->field43_0x70 & 2U) != 0) {
          moby->unk58 = 0.0;
          moby->state = '\x05';
        }
      }
      else if (uVar4 == '\x03') {
        moby->state = '\x02';
      }
      else if (uVar4 == '\x02') {
        if (((moby->field43_0x70 & 2U) != 0) && (moby->animationId != '\x03')) {
          puVar10[0x16] = (longlong)(int)(animationSpeed * 0.5);
          MB_SetAnimation(moby,3,0,*(undefined4 *)((int)puVar10 + 0xb4));
        }
        dVar29 = (double)(moby->pos).x;
        dVar30 = (double)(moby->pos).y;
        dVar31 = 0.0;
        fVar2 = ABS((float)((double)g_heroPosition.x - dVar29));
        fVar6 = ABS((float)((double)g_heroPosition.y - dVar30));
        dVar27 = (double)((moby->pos).z + 0.6);
        dVar28 = (double)(moby->pos).w;
        fVar5 = fVar2;
        if ((fVar2 - fVar6) - 0.0 < 0.0) {
          fVar5 = fVar6;
        }
        if ((fVar2 - fVar6) - 0.0 < 0.0) {
          fVar6 = fVar2;
        }
        if (0.0 < fVar5) {
          lVar17 = uVar11 - 0xf0;
          lVar12 = uVar11 - 0x60;
          lVar15 = uVar11 - 0x70;
          lVar19 = 2;
          fVar5 = (fVar6 - fVar5) / (fVar6 + fVar5);
          fVar6 = fVar5 * fVar5;
          *(float *)((int)puVar10 + 0x9c) = fVar5;
          *(float *)((int)puVar10 + 0x94) = fVar5;
          *(float *)(puVar10 + 0x13) = fVar5;
          *(float *)(puVar10 + 0x12) = fVar5;
          fVar5 = fVar6 * fVar6;
          *(float *)((int)puVar10 + 0x94) = *(float *)((int)puVar10 + 0x94) * fVar6;
          *(float *)(puVar10 + 0x13) = *(float *)(puVar10 + 0x13) * fVar5;
          *(float *)((int)puVar10 + 0x9c) = *(float *)((int)puVar10 + 0x9c) * fVar5 * fVar6;
          do {
            *(float *)((int)lVar17 + 0x90) = *(float *)((int)lVar17 + 0x80) * fVar5 * fVar5;
            iVar13 = (int)lVar15;
            lVar15 = lVar15 + 8;
            lVar17 = lVar17 + 8;
            *(float *)((int)lVar12 + 4) = *(float *)(iVar13 + 4) * fVar5 * fVar5;
            lVar12 = lVar12 + 8;
            lVar19 = lVar19 + -1;
          } while (lVar19 != 0);
          pfVar16 = (float *)&DAT_007358e0;
          lVar15 = uVar11 - 0x70;
          lVar17 = 4;
          lVar12 = lVar1;
          do {
            fVar5 = *pfVar16;
            fVar6 = pfVar16[1];
            pfVar16 = pfVar16 + 2;
            *(float *)((int)lVar12 + 0x90) = *(float *)((int)lVar12 + 0x90) * fVar5;
            lVar12 = lVar12 + 8;
            *(float *)((int)lVar15 + 4) = *(float *)((int)lVar15 + 4) * fVar6;
            lVar15 = lVar15 + 8;
            lVar17 = lVar17 + -1;
          } while (lVar17 != 0);
        }
        iVar13 = FastDecTimerS16(piVar7 + 1);
        if (iVar13 != 0) {
          iVar13 = *(int *)(*piVar7 + 0x78);
          if ((DAT_0071f408 * 0.05 <
               SQRT(*(float *)(iVar13 + 0x38) * *(float *)(iVar13 + 0x38) +
                    *(float *)(iVar13 + 0x30) * *(float *)(iVar13 + 0x30) +
                    *(float *)(iVar13 + 0x34) * *(float *)(iVar13 + 0x34))) &&
             (moby->enabled != '\0')) {
            *(undefined4 *)((int)puVar10 + 0x7c) = 0;
            *(undefined4 *)(puVar10 + 0xf) = 0;
            *(undefined4 *)((int)puVar10 + 0x74) = 0;
            *(undefined4 *)(puVar10 + 0xe) = 0;
            fVar5 = g_FrameTime * 7.0;
            *(float *)(puVar10 + 0xf) = fVar5;
            uVar8 = *(uint *)(*piVar7 + 0x78);
            uVar18 = (ulonglong)uVar8;
            auVar32 = loadVectorLeftIndexed(0x30,uVar18);
            auVar33 = loadVectorRightIndexed(0x40,uVar18);
            dVar22 = (double)*(float *)(uVar8 + 0x30);
            auVar32 = (auVar32 | auVar33) >> 0x60 & (GPiece<16>)0xffffffff;
            uVar9 = storeVectorElementWordIndexed
                              (auVar32 | auVar32 << 0x20 | auVar32 << 0x40 | auVar32 << 0x60,0x70,
                               lVar1);
            *(undefined4 *)(puVar10 + 0xe) = uVar9;
            dVar21 = (double)*(float *)(uVar8 + 0x34);
            auVar32 = loadVectorLeftIndexed(0x34,uVar18);
            auVar33 = loadVectorRightIndexed(0x44,uVar18);
            auVar32 = (auVar32 | auVar33) >> 0x60 & (GPiece<16>)0xffffffff;
            uVar9 = storeVectorElementWordIndexed
                              (auVar32 | auVar32 << 0x20 | auVar32 << 0x40 | auVar32 << 0x60,0x74,
                               lVar1);
            *(undefined4 *)((int)puVar10 + 0x74) = uVar9;
            fVar5 = fVar5 + *(float *)(uVar8 + 0x38);
            dVar20 = (double)fVar5;
            *(float *)(puVar10 + 0xf) = fVar5;
            if (SQRT((float)(dVar20 * dVar20 +
                            (double)(float)(dVar22 * dVar22 + (double)(float)(dVar21 * dVar21)))) <
                DAT_0071f408 * 0.3) {
              fVar6 = (float)((double)g_heroPosition.y - dVar30);
              fVar2 = (float)((double)g_heroPosition.x - dVar29);
              fVar3 = (float)((double)g_heroPosition.z - dVar27);
              dVar26 = (double)SQRT(fVar3 * fVar3 + fVar2 * fVar2 + fVar6 * fVar6);
              fVar5 = (float)((double)(DAT_0071f408 * 0.4) / dVar26);
              dVar25 = dVar31;
              if (dVar31 - dVar26 < 0.0) {
                dVar25 = (double)(fVar5 * fVar3);
              }
              dVar24 = dVar31;
              if (dVar31 - dVar26 < 0.0) {
                dVar24 = (double)(fVar5 * fVar6);
              }
              dVar23 = dVar31;
              if (dVar31 - dVar26 < 0.0) {
                dVar23 = (double)(fVar5 * fVar2);
              }
              if (dVar26 - dVar31 < 0.0) {
                dVar25 = (double)(fVar5 * fVar3);
              }
              if (dVar26 - dVar31 < 0.0) {
                dVar24 = (double)(fVar5 * fVar6);
              }
              if (dVar26 - dVar31 < 0.0) {
                dVar23 = (double)(fVar5 * fVar2);
              }
              dVar25 = dVar20 + dVar25;
              dVar20 = (double)(float)dVar25;
              dVar24 = dVar21 + dVar24;
              dVar21 = (double)(float)dVar24;
              dVar23 = dVar22 + dVar23;
              dVar22 = (double)(float)dVar23;
              *(float *)(puVar10 + 0xf) = (float)dVar25;
              *(float *)((int)puVar10 + 0x74) = (float)dVar24;
              *(float *)(puVar10 + 0xe) = (float)dVar23;
            }
            *(float *)((int)puVar10 + 0x8c) = (float)dVar28;
            *(float *)(puVar10 + 0x10) = (float)(dVar29 + dVar22);
            *(float *)((int)puVar10 + 0x84) = (float)(dVar30 + dVar21);
            *(float *)(puVar10 + 0x11) = (float)(dVar27 + dVar20);
            iVar13 = FUN_00362820(moby,uVar11 - 0x80,uVar11 - 0x90);
            if (iVar13 != 0) {
              moby->state = '\x03';
              if (moby->animationId != '\x01') {
                puVar10[0x16] = (longlong)(int)(animationSpeed * 0.5);
                MB_SetAnimation(moby,1,0,*(undefined4 *)((int)puVar10 + 0xb4));
              }
              sVar14 = *(short *)((int)piVar7 + 6) + 1;
              *(short *)((int)piVar7 + 6) = sVar14;
              if (sVar14 == 3) {
                *(undefined2 *)(piVar7 + 1) = 0xb4;
                *(undefined2 *)((int)piVar7 + 6) = 0;
              }
              else {
                *(undefined2 *)(piVar7 + 1) = 0x3c;
              }
            }
          }
        }
      }
      else if (uVar4 == '\x01') {
        if ((moby->field43_0x70 & 2U) != 0) {
          if (moby->animationId != '\x03') {
            puVar10[0x16] = (longlong)(int)(animationSpeed * 0.5);
            MB_SetAnimation(moby,3,0,*(undefined4 *)((int)puVar10 + 0xb4));
          }
          moby->state = '\x02';
        }
      }
      else if (uVar4 == '\0') {
        moby->state = '\x01';
      }
    }
  }
  return;
}


