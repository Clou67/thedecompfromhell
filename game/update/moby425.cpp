// game/update/moby425.cpp -- reconstructed from NPEA00385 EBOOT
// STATUS: NOT STARTED (raw Ghidra output)
// 3 functions, 0x36a198-0x36ad18
#include "game/update/moby425.h"
#include "game/collproc.h"
#include "game/hero.h"
#include "game/mobyfunc.h"
#include "game/mobyproc.h"
#include "game/mobyutil.h"
#include "game/partupd.h"
#include "game/sound.h"
#include "game/vendor.h"
#include "idol/fastfunc.h"

// 0x036a198 (0x14 bytes)
void M425_0036a198(void)

{
  DAT_0084111c = 0x10000;
  return;
}


// 0x036a1d0 (0x2e8 bytes)
// inlined: FastAtan2 @0x36a368
MobyInstance * FUN_0036a1d0(float param_1,f32 *param_2,float *param_3)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  undefined4 uVar6;
  ulonglong *puVar7;
  int iVar8;
  int iVar9;
  ulonglong uVar10;
  MobyInstance *pMVar12;
  longlong lVar11;
  ulonglong uVar13;
  longlong lVar14;
  longlong lVar15;
  longlong lVar16;
  float *pfVar17;
  ulonglong unaff_r27;
  ulonglong unaff_r28;
  ulonglong unaff_r29;
  ulonglong unaff_r30;
  ulonglong unaff_r31;
  ulonglong in_LR;
  longlong lVar18;
  double dVar19;
  GPiece<16> auVar20;
  GPiece<16> auVar21;
  GPiece<16> auVar22;
  
  uVar10 = ZEXT48(&stack0x00000000);
  lVar11 = uVar10 - 0xc0;
  puVar7 = (ulonglong *)lVar11;
  *puVar7 = uVar10;
  puVar7[0x1a] = in_LR;
  puVar7[0x14] = unaff_r28;
  puVar7[0x16] = unaff_r30;
  puVar7[0x15] = unaff_r29;
  puVar7[0x17] = unaff_r31;
  puVar7[0x13] = unaff_r27;
  pMVar12 = CreateMoby(BOMB_01A9);
  if (pMVar12 != (MobyInstance *)0x0) {
    pfVar17 = (float *)pMVar12->pVar;
    auVar20 = ZEXT416(0xffffffff);
    auVar21 = auVar20 | auVar20 << 0x20 | auVar20 << 0x40 | auVar20 << 0x60;
    pMVar12->updateDistance = -1;
    pMVar12->drawDistance = 0xff;
    pMVar12->enabled = '\x01';
    pMVar12->state = '\x01';
    pfVar17[8] = param_1;
    auVar20 = loadVectorLeftIndexed(in_LR,0x36a1b0);
    auVar21 = vectorShiftLeftIntegerWord(auVar21,auVar21);
    auVar20 = auVar20 >> 0x60 & (GPiece<16>)0xffffffff;
    auVar22 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
    auVar20 = vectorMultiplyAddFloatingPoint
                        (auVar22,auVar20 | auVar20 << 0x20 | auVar20 << 0x40 | auVar20 << 0x60,
                         auVar21);
    auVar20 = vectorConvertToSignedFixedPointWordSaturate(auVar20,0);
    auVar20 = auVar20 >> 0x60 & (GPiece<16>)0xffffffff;
    uVar6 = storeVectorElementWordIndexed
                      (auVar20 | auVar20 << 0x20 | auVar20 << 0x40 | auVar20 << 0x60,0x10,
                       ZEXT48(pfVar17));
    *(undefined4 *)((uint)(pfVar17 + 4) & 0xfffffffc) = uVar6;
    pfVar17[5] = 0.0;
    pfVar17[7] = 1.0;
    (pMVar12->pos).x = *param_2;
    (pMVar12->pos).y = param_2[1];
    (pMVar12->pos).z = param_2[2];
    (pMVar12->pos).w = param_2[3];
    *pfVar17 = *param_3;
    pfVar17[1] = param_3[1];
    pfVar17[2] = param_3[2];
    pfVar17[3] = param_3[3];
    dVar19 = (double)MB_randRangeFloat(-180.0,180.0);
    (pMVar12->rotation).x = (float)(dVar19 * 0.01745329238474369);
    fVar4 = *param_3;
    fVar5 = param_3[1];
    fVar2 = ABS(*param_3);
    fVar3 = ABS(param_3[1]);
    *(float *)(puVar7 + 0xe) = fVar2 - fVar3;
    fVar1 = 0.0;
    uVar13 = (ulonglong)((uint)fVar4 >> 0x1c) & 8 |
             (ulonglong)(*(uint *)(puVar7 + 0xe) >> 0x1e) & 2 | (ulonglong)((uint)fVar5 >> 0x1d) & 4
    ;
    fVar4 = fVar2;
    if (*(float *)(puVar7 + 0xe) - 0.0 < 0.0) {
      fVar4 = fVar3;
    }
    fVar5 = *(float *)(&g_atanQuadrantTable + (int)(uVar13 << 2));
    if (*(float *)(puVar7 + 0xe) - 0.0 < 0.0) {
      fVar3 = fVar2;
    }
    fVar2 = *(float *)(((uint)(uVar13 << 2) | 0x735900) + 4);
    if (0.0 < fVar4) {
      lVar16 = uVar10 - 0xb0;
      lVar15 = uVar10 - 0x4c;
      lVar14 = uVar10 - 0x3c;
      lVar18 = 2;
      fVar4 = (fVar3 - fVar4) / (fVar3 + fVar4);
      fVar3 = fVar4 * fVar4;
      *(float *)(puVar7 + 0x10) = fVar4;
      *(float *)(puVar7 + 0xf) = fVar4;
      *(float *)((int)puVar7 + 0x7c) = fVar4;
      *(float *)((int)puVar7 + 0x74) = fVar4;
      fVar4 = fVar3 * fVar3;
      *(float *)(puVar7 + 0xf) = *(float *)(puVar7 + 0xf) * fVar3;
      *(float *)((int)puVar7 + 0x7c) = *(float *)((int)puVar7 + 0x7c) * fVar4;
      *(float *)(puVar7 + 0x10) = *(float *)(puVar7 + 0x10) * fVar4 * fVar3;
      do {
        *(float *)((int)lVar16 + 0x74) = *(float *)((int)lVar16 + 100) * fVar4 * fVar4;
        iVar8 = (int)lVar15;
        lVar16 = lVar16 + 8;
        lVar15 = lVar15 + 8;
        *(float *)((int)lVar14 + 4) = *(float *)(iVar8 + 4) * fVar4 * fVar4;
        lVar14 = lVar14 + 8;
        lVar18 = lVar18 + -1;
      } while (lVar18 != 0);
      lVar16 = uVar10 - 0x4c;
      pfVar17 = (float *)&DAT_007358e0;
      lVar18 = 4;
      lVar14 = lVar16;
      lVar15 = lVar11;
      do {
        fVar4 = *pfVar17;
        fVar3 = pfVar17[1];
        pfVar17 = pfVar17 + 2;
        *(float *)((int)lVar15 + 0x74) = *(float *)((int)lVar15 + 0x74) * fVar4;
        lVar15 = lVar15 + 8;
        *(float *)((int)lVar14 + 4) = *(float *)((int)lVar14 + 4) * fVar3;
        lVar14 = lVar14 + 8;
        lVar18 = lVar18 + -1;
      } while (lVar18 != 0);
      lVar14 = 2;
      do {
        iVar8 = (int)lVar11;
        lVar11 = lVar11 + 0x10;
        iVar9 = (int)lVar16;
        lVar16 = lVar16 + 0x10;
        fVar1 = fVar1 + *(float *)(iVar8 + 0x74) + *(float *)(iVar9 + 4) + *(float *)(iVar9 + 8) +
                *(float *)(iVar9 + 0xc);
        lVar14 = lVar14 + -1;
      } while (lVar14 != 0);
      fVar1 = (fVar1 + 0.7853982) * fVar5 + fVar2;
    }
    (pMVar12->rotation).z = fVar1 + 1.5707964;
    UpdateMobyTransform(pMVar12);
  }
  return pMVar12;
}


// 0x036a528 (0x7f0 bytes)
/* Moby 425 */

void UpdateMoby_425(MobyInstance *moby)

{
  byte bVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float *pfVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  int iVar13;
  longlong lVar11;
  undefined8 uVar12;
  uint uVar14;
  double dVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  double dVar18;
  double dVar19;
  double dVar20;
  double dVar21;
  double dVar22;
  double dVar23;
  double dVar24;
  double dVar25;
  double dVar26;
  double dVar27;
  double dVar28;
  double dVar29;
  GPiece<16> local_170;
  GPiece<16> local_160;
  GPiece<16> local_150;
  float local_140 [4];
  GPiece<48> local_130;
  float local_100 [8];
  double local_e0;
  float local_d8;
  longlong local_d0;
  
  lVar11 = (longlong)(int)moby;
  dVar21 = 0.5;
  pfVar6 = (float *)moby->pVar;
  iVar13 = CollMobySphere(0x3fe0000000000000,lVar11 + 0x10,&DAT_0036a4b8,0,lVar11,0);
  if (((iVar13 != 0) && (g_CollOutput.pMoby != (MobyInstance *)0x0)) &&
     ((g_CollOutput.pMoby != (MobyInstance *)pfVar6[8] || (pfVar6[5] != 0.0)))) {
    moby->state = 'c';
  }
  bVar1 = moby->state;
  if (bVar1 < 2) {
    if (bVar1 != 0) {
      (moby->pos).x = (moby->pos).x + *pfVar6;
      (moby->pos).y = (moby->pos).y + pfVar6[1];
      (moby->pos).z = (moby->pos).z + pfVar6[2];
      pfVar6[2] = -(DAT_0071f418 * 10.8 - pfVar6[2]);
      iVar13 = CollLine(local_170,local_160,0,lVar11,0);
      if (iVar13 == 0) {
        iVar13 = FastDecTimerS32(pfVar6 + 4);
        if (iVar13 != 0) {
          moby->state = 'c';
        }
      }
      else if (((MobyInstance *)pfVar6[8] != (MobyInstance *)0x0) &&
              (g_CollOutput.pMoby != (MobyInstance *)pfVar6[8])) {
        moby->state = 'c';
        (moby->pos).x = g_CollOutput.ip.x;
        (moby->pos).y = g_CollOutput.ip.y;
        (moby->pos).z = g_CollOutput.ip.z;
        (moby->pos).w = g_CollOutput.ip.w;
        FastVecNormalize(pfVar6,pfVar6,0xa10980);
        fVar2 = pfVar6[1];
        fVar3 = *pfVar6;
        fVar4 = pfVar6[2];
        fVar5 = 0.0;
        fVar10 = SQRT(fVar4 * fVar4 + fVar3 * fVar3 + fVar2 * fVar2);
        fVar7 = (g_FrameTime * 2.0) / fVar10;
        fVar9 = fVar5;
        if (0.0 - fVar10 < 0.0) {
          fVar9 = fVar3 * fVar7;
        }
        fVar8 = fVar5;
        if (0.0 - fVar10 < 0.0) {
          fVar8 = fVar2 * fVar7;
        }
        if (0.0 - fVar10 < 0.0) {
          fVar5 = fVar4 * fVar7;
        }
        if (fVar10 - 0.0 < 0.0) {
          fVar9 = fVar3 * fVar7;
        }
        if (fVar10 - 0.0 < 0.0) {
          fVar8 = fVar2 * fVar7;
        }
        if (fVar10 - 0.0 < 0.0) {
          fVar5 = fVar4 * fVar7;
        }
        *pfVar6 = fVar9;
        pfVar6[1] = fVar8;
        pfVar6[2] = fVar5;
      }
    }
  }
  else if (bVar1 == 99) {
    dVar22 = 0.0;
    local_100[3] = 0.0;
    local_100[0] = g_FrameTime * 14.0;
    local_100[1] = g_FrameTime * 22.0;
    local_100[2] = g_FrameTime * 12.0;
    dVar29 = 1.0;
    CollMobySphere(0x3ff0000000000000,lVar11 + 0x10,&DAT_00810001,9,lVar11,local_130);
    PlayMobySound(0,0,moby);
    uVar14 = 0;
    dVar23 = -0.5;
    dVar24 = 0.25;
    local_e0 = 4.0;
    local_100[7] = 1.5707963;
    dVar25 = 200000.0;
    dVar26 = 60.5;
    local_100[6] = 0.717;
    dVar27 = 120.5;
    local_100[5] = 8.0;
    dVar28 = 150000.0;
    dVar18 = 30.5;
    local_100[4] = 300000.0;
    dVar19 = 45.5;
    do {
      local_d8 = (float)dVar19;
      iVar13 = uVar14 + (((int)uVar14 >> 2) + (uint)((int)uVar14 < 0 && (uVar14 & 3) != 0)) * -4;
      MB_randRangeFloat
                ((float)((double)g_FrameTime * dVar23),
                 (float)((double)g_FrameTime * dVar21));
      MB_randRangeFloat
                ((float)((double)g_FrameTime * dVar23),
                 (float)((double)g_FrameTime * dVar21));
      MB_randRangeFloat
                ((float)((double)g_FrameTime * local_e0),local_100[iVar13]);
      MB_randRangeFloat((float)dVar22,(float)dVar24);
      dVar15 = (double)MB_randRot();
      dVar19 = (double)local_d8;
      if (iVar13 < 2) {
        if ((-1 < iVar13) && (iVar13 < 1)) {
          uVar16 = MB_randRangeFloat((float)dVar25,local_100[4]);
          iVar13 = (int)((double)animationSpeed * dVar27);
          local_d0 = (longlong)iVar13;
          MB_randRange((int)((double)animationSpeed * dVar26),iVar13);
          SpawnPart_16(uVar16,local_150,local_140,0x1f101820,&DAT_00101010);
        }
      }
      else if (iVar13 < 3) {
        lVar11 = MB_randInt(100);
        iVar13 = (int)((double)animationSpeed * dVar19);
        local_d0 = (longlong)iVar13;
        MB_randRange((int)((double)animationSpeed * dVar18),iVar13);
        SpawnPart_16
                  (dVar28,local_150,local_140,(lVar11 + -0x28 >> 0x3f & 0x30b09880U) + 0x2f486078,
                   0xf000020);
      }
      else if (iVar13 < 4) {
        dVar19 = (double)MB_randRangeFloat((float)dVar24,(float)dVar29);
        uVar16 = 0x7f000000;
        TweenColor((float)dVar19,0x7f000000,0x7f182030);
        dVar19 = (double)MB_randRangeFloat((float)dVar21,(float)dVar29);
        uVar12 = 0;
        TweenColor((float)dVar19,0,0x5f5f5f);
        dVar19 = (double)MB_randRangeFloat((float)dVar22,(float)dVar29);
        dVar20 = (double)(float)(dVar19 * (double)g_FrameTime);
        dVar19 = (double)MB_randRot();
        MB_SphericalToVector((float)dVar20,(float)dVar15,(float)dVar19,local_140);
        uVar17 = MB_randRangeFloat((float)dVar28,(float)dVar25);
        iVar13 = (int)((double)animationSpeed * dVar27);
        local_d0 = (longlong)iVar13;
        MB_randRange((int)((double)animationSpeed * dVar26),iVar13);
        SpawnPart_16(uVar17,local_150,local_140,uVar16,uVar12);
        dVar19 = (double)local_d8;
      }
      uVar14 = uVar14 + 1;
    } while ((int)uVar14 < 0x32);
    DeleteMoby(moby);
  }
  return;
}


