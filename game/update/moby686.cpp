// game/update/moby686.cpp -- reconstructed from NPEA00385 EBOOT
// STATUS: NOT STARTED (raw Ghidra output)
// 5 functions, 0x414594-0x415ec4
#include <math.h>
#include "game/update/moby686.h"
#include "game/camera.h"
#include "game/collproc.h"
#include "game/draw.h"
#include "game/hero.h"
#include "game/main.h"
#include "game/mobyfunc.h"
#include "game/mobyproc.h"
#include "game/mobyutil.h"
#include "game/partupd.h"
#include "game/respawn.h"
#include "game/sound.h"
#include "game/update/moby112.h"
#include "idol/fastfunc.h"

// 0x0414594 (0x3c bytes)
void FUN_00414594(int param_1)

{
  *(byte *)(param_1 + 0xbc) = ((byte)(*(int *)(*(int *)(param_1 + 0x78) + 0xac) >> 7) & 1) + 1;
  *(undefined2 *)(*(int *)(param_1 + 0x78) + 0x124) = 1;
  return;
}


// 0x04145d0 (0x88 bytes)
void FUN_004145d0(int param_1)

{
  int iVar1;
  LevelId LVar2;
  
  *(undefined1 *)(param_1 + 0xbc) = 0;
  LVar2 = Level;
  *(undefined2 *)(*(int *)(param_1 + 0x78) + 0x124) = 0;
  iVar1 = (int)((longlong)((int)(short)*(ushort *)(param_1 + 0xb2) >> 5) << 2);
  *(uint *)(&g_LevelObjBits + LVar2 * 0x100 + iVar1) =
       *(uint *)(&g_LevelObjBits + LVar2 * 0x100 + iVar1) | 1 << (*(ushort *)(param_1 + 0xb2) & 0x1f);
  iVar1 = (int)((longlong)((int)(short)*(ushort *)(param_1 + 0xb2) >> 5) << 2);
  *(uint *)(&g_CheckpointBits + iVar1) =
       *(uint *)(&g_CheckpointBits + iVar1) | 1 << (*(ushort *)(param_1 + 0xb2) & 0x1f);
  return;
}


// 0x0414658 (0x14 bytes)
void M686_00414658(void)

{
  DAT_008573ac = 0x10000;
  return;
}


// 0x0414688 (0x54c bytes)
// inlined: FastAtan2 @0x414834, FastAtan2 @0x4149ac
MobyInstance *
M686_00414688
          (float param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,ulonglong param_5,
          ulonglong param_6,undefined8 param_7,undefined8 param_8)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float *pfVar6;
  ulonglong *puVar7;
  int iVar8;
  int iVar9;
  float fVar10;
  float fVar11;
  ulonglong uVar12;
  MobyInstance *pMoby;
  longlong lVar13;
  longlong lVar14;
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
  ulonglong in_f23;
  ulonglong in_f24;
  ulonglong in_f25;
  ulonglong in_f26;
  ulonglong in_f27;
  ulonglong in_f28;
  ulonglong in_f29;
  ulonglong in_f30;
  ulonglong in_f31;
  double dVar20;
  f32 fStack00000040;
  f32 fStack00000044;
  f32 fStack00000048;
  f32 fStack0000004c;
  float fStack00000050;
  float fStack00000054;
  float fStack00000058;
  float fStack0000005c;
  float fStack00000060;
  float fStack00000064;
  float fStack00000068;
  float fStack0000006c;
  float in_stack_00000074;
  
  uVar12 = ZEXT48(&stack0x00000000);
  lVar14 = uVar12 - 0x150;
  puVar7 = (ulonglong *)lVar14;
  *puVar7 = uVar12;
  puVar7[0x2c] = in_LR;
  puVar7[0x21] = in_f23;
  puVar7[0x22] = in_f24;
  puVar7[0x23] = in_f25;
  puVar7[0x24] = in_f26;
  puVar7[0x25] = in_f27;
  puVar7[0x26] = in_f28;
  puVar7[0x27] = in_f29;
  puVar7[0x28] = in_f30;
  puVar7[0x29] = in_f31;
  puVar7[0x20] = unaff_r31;
  puVar7[0x1b] = unaff_r26;
  puVar7[0x1e] = unaff_r29;
  puVar7[0x1f] = unaff_r30;
  puVar7[0x1d] = unaff_r28;
  puVar7[0x1c] = unaff_r27;
  _fStack00000040 = param_3;
  _fStack00000048 = param_4;
  _fStack00000060 = param_7;
  _fStack00000068 = param_8;
  pMoby = CreateMoby(0x2ae);
  if (pMoby != (MobyInstance *)0x0) {
    pfVar6 = (float *)pMoby->pVar;
    pfVar6[0xc] = param_1;
    pMoby->updateDistance = -1;
    pMoby->drawDistance = 0xff;
    pMoby->enabled = '\x01';
    pMoby->scale = pMoby->scale * 0.25;
    fVar10 = 0.0;
    fStack00000054 = (float)param_5;
    fStack00000050 = (float)(param_5 >> 0x20);
    fStack00000058 = (float)(param_6 >> 0x20);
    (pMoby->rotation).x = 0.0;
    fVar2 = ABS(fStack00000058);
    fStack0000005c = (float)param_6;
    fVar11 = fStack00000050 * fStack00000050 + fStack00000054 * fStack00000054;
    fVar4 = SQRT(fVar11);
    fVar5 = ABS(fVar4);
    *(float *)((int)puVar7 + 0x74) = fVar4;
    *(float *)(puVar7 + 0xf) = fVar5 - fVar2;
    uVar15 = (ulonglong)(*(uint *)((int)puVar7 + 0x74) >> 0x1c) & 8 |
             (ulonglong)(*(uint *)(puVar7 + 0xf) >> 0x1e) & 2 | param_6 >> 0x3d & 4;
    fVar4 = *(float *)(&g_atanQuadrantTable + (int)(uVar15 << 2));
    fVar3 = ABS(*(float *)((int)puVar7 + 0x74));
    if (*(float *)(puVar7 + 0xf) - 0.0 < 0.0) {
      fVar3 = fVar2;
    }
    fVar1 = *(float *)(((uint)(uVar15 << 2) | 0x735900) + 4);
    if (*(float *)(puVar7 + 0xf) - 0.0 < 0.0) {
      fVar2 = fVar5;
    }
    fVar5 = fVar10;
    if (0.0 < fVar3) {
      lVar13 = uVar12 - 0x140;
      lVar17 = uVar12 - 0xa4;
      lVar16 = uVar12 - 0xb4;
      lVar19 = 2;
      fVar3 = (fVar2 - fVar3) / (fVar2 + fVar3);
      fVar2 = fVar3 * fVar3;
      *(float *)(puVar7 + 0x15) = fVar3;
      *(float *)(puVar7 + 0x14) = fVar3;
      *(float *)((int)puVar7 + 0xa4) = fVar3;
      *(float *)((int)puVar7 + 0x9c) = fVar3;
      fVar3 = fVar2 * fVar2;
      *(float *)(puVar7 + 0x14) = *(float *)(puVar7 + 0x14) * fVar2;
      *(float *)((int)puVar7 + 0xa4) = *(float *)((int)puVar7 + 0xa4) * fVar3;
      *(float *)(puVar7 + 0x15) = *(float *)(puVar7 + 0x15) * fVar3 * fVar2;
      do {
        *(float *)((int)lVar13 + 0x9c) = *(float *)((int)lVar13 + 0x8c) * fVar3 * fVar3;
        iVar8 = (int)lVar16;
        lVar16 = lVar16 + 8;
        lVar13 = lVar13 + 8;
        *(float *)((int)lVar17 + 4) = *(float *)(iVar8 + 4) * fVar3 * fVar3;
        lVar17 = lVar17 + 8;
        lVar19 = lVar19 + -1;
      } while (lVar19 != 0);
      lVar19 = 4;
      lVar17 = uVar12 - 0xb4;
      pfVar18 = (float *)&DAT_007358e0;
      lVar13 = lVar14;
      lVar16 = lVar17;
      do {
        fVar3 = *pfVar18;
        fVar2 = pfVar18[1];
        pfVar18 = pfVar18 + 2;
        *(float *)((int)lVar13 + 0x9c) = *(float *)((int)lVar13 + 0x9c) * fVar3;
        lVar13 = lVar13 + 8;
        *(float *)((int)lVar16 + 4) = *(float *)((int)lVar16 + 4) * fVar2;
        lVar16 = lVar16 + 8;
        lVar19 = lVar19 + -1;
      } while (lVar19 != 0);
      lVar16 = 2;
      lVar13 = lVar14;
      fVar3 = fVar10;
      do {
        iVar8 = (int)lVar13;
        iVar9 = (int)lVar17;
        lVar13 = lVar13 + 0x10;
        lVar17 = lVar17 + 0x10;
        fVar3 = fVar3 + *(float *)(iVar8 + 0x9c) + *(float *)(iVar9 + 4) + *(float *)(iVar9 + 8) +
                *(float *)(iVar9 + 0xc);
        lVar16 = lVar16 + -1;
      } while (lVar16 != 0);
      fVar5 = (fVar3 + 0.7853982) * fVar4 + fVar1;
    }
    fVar2 = ABS(fStack00000050);
    fVar3 = ABS(fStack00000054);
    (pMoby->rotation).y = -fVar5;
    *(float *)(puVar7 + 0xe) = fVar2 - fVar3;
    uVar15 = param_5 >> 0x3c & 8 |
             (ulonglong)(*(uint *)(puVar7 + 0xe) >> 0x1e) & 2 | (param_5 << 0x20) >> 0x3d & 4;
    fVar4 = fVar2;
    if (*(float *)(puVar7 + 0xe) - 0.0 < 0.0) {
      fVar4 = fVar3;
    }
    fVar5 = *(float *)(&g_atanQuadrantTable + (int)(uVar15 << 2));
    if (*(float *)(puVar7 + 0xe) - 0.0 < 0.0) {
      fVar3 = fVar2;
    }
    fVar2 = *(float *)(((uint)(uVar15 << 2) | 0x735900) + 4);
    if (0.0 < fVar4) {
      lVar13 = uVar12 - 0x140;
      lVar17 = uVar12 - 0xc4;
      lVar16 = uVar12 - 0xd4;
      lVar19 = 2;
      fVar4 = (fVar3 - fVar4) / (fVar3 + fVar4);
      fVar3 = fVar4 * fVar4;
      *(float *)(puVar7 + 0x11) = fVar4;
      *(float *)(puVar7 + 0x10) = fVar4;
      *(float *)((int)puVar7 + 0x84) = fVar4;
      *(float *)((int)puVar7 + 0x7c) = fVar4;
      fVar4 = fVar3 * fVar3;
      *(float *)(puVar7 + 0x10) = *(float *)(puVar7 + 0x10) * fVar3;
      *(float *)((int)puVar7 + 0x84) = *(float *)((int)puVar7 + 0x84) * fVar4;
      *(float *)(puVar7 + 0x11) = *(float *)(puVar7 + 0x11) * fVar4 * fVar3;
      do {
        *(float *)((int)lVar13 + 0x7c) = *(float *)((int)lVar13 + 0x6c) * fVar4 * fVar4;
        iVar8 = (int)lVar16;
        lVar16 = lVar16 + 8;
        lVar13 = lVar13 + 8;
        *(float *)((int)lVar17 + 4) = *(float *)(iVar8 + 4) * fVar4 * fVar4;
        lVar17 = lVar17 + 8;
        lVar19 = lVar19 + -1;
      } while (lVar19 != 0);
      lVar19 = 4;
      lVar17 = uVar12 - 0xd4;
      pfVar18 = (float *)&DAT_007358e0;
      lVar13 = lVar14;
      lVar16 = lVar17;
      do {
        fVar4 = *pfVar18;
        fVar3 = pfVar18[1];
        pfVar18 = pfVar18 + 2;
        *(float *)((int)lVar13 + 0x7c) = *(float *)((int)lVar13 + 0x7c) * fVar4;
        lVar13 = lVar13 + 8;
        *(float *)((int)lVar16 + 4) = *(float *)((int)lVar16 + 4) * fVar3;
        lVar16 = lVar16 + 8;
        lVar19 = lVar19 + -1;
      } while (lVar19 != 0);
      lVar13 = 2;
      do {
        iVar8 = (int)lVar14;
        lVar14 = lVar14 + 0x10;
        iVar9 = (int)lVar17;
        lVar17 = lVar17 + 0x10;
        fVar10 = fVar10 + *(float *)(iVar8 + 0x7c) + *(float *)(iVar9 + 4) + *(float *)(iVar9 + 8) +
                 *(float *)(iVar9 + 0xc);
        lVar13 = lVar13 + -1;
      } while (lVar13 != 0);
      fVar10 = (fVar10 + 0.7853982) * fVar5 + fVar2;
    }
    (pMoby->rotation).z = fVar10;
    (pMoby->pos).x = fStack00000040;
    (pMoby->pos).y = fStack00000044;
    (pMoby->pos).z = fStack00000048;
    (pMoby->pos).w = fStack0000004c;
    *pfVar6 = fStack00000050;
    pfVar6[1] = fStack00000054;
    pfVar6[2] = fStack00000058;
    pfVar6[3] = fStack0000005c;
    pfVar6[4] = fStack00000060;
    pfVar6[5] = fStack00000064;
    pfVar6[6] = fStack00000068;
    pfVar6[7] = fStack0000006c;
    pfVar6[0xd] = in_stack_00000074;
    pfVar6[0xe] = SQRT(fStack00000058 * fStack00000058 + fVar11);
    dVar20 = 120.5;
    puVar7[0x18] = (longlong)(int)(animationSpeed * 120.5);
    SpawnPart_26
              (0x4119a28000000000,pMoby,pfVar6,0x2f4f7f7f,*(undefined4 *)((int)puVar7 + 0xc4),
               0xffffffffffffffff);
    puVar7[0x18] = (longlong)(int)((double)animationSpeed * dVar20);
    SpawnPart_26(0x4109a28000000000,pMoby);
    PlayMobySound(0,0,pMoby);
    UpdateMobyTransform(pMoby);
  }
  return pMoby;
}


// 0x0414c50 (0x1274 bytes)
/* Moby 686 */

void UpdateMoby_686(MobyInstance *moby)

{
  bool bVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  int *piVar8;
  float fVar9;
  longlong lVar10;
  int iVar12;
  int iVar13;
  uint uVar14;
  longlong lVar11;
  int iVar15;
  int iVar16;
  longlong lVar17;
  int iVar18;
  float *pfVar19;
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
  double dVar30;
  double dVar31;
  double dVar32;
  double dVar33;
  double dVar34;
  double dVar35;
  double dVar36;
  double dVar37;
  double dVar38;
  undefined8 uVar39;
  double dVar40;
  GPiece<16> local_200;
  GPiece<16> local_1f0;
  GPiece<16> local_1e0;
  GPiece<16> local_1d0;
  GPiece<48> local_1c0;
  float local_190 [26];
  longlong local_128;
  float local_118;
  
  lVar10 = (longlong)(int)moby;
  pfVar19 = (float *)moby->pVar;
  iVar16 = 0;
  (moby->pos).x = (moby->pos).x + *pfVar19;
  iVar15 = -LetterBoxOn;
  (moby->pos).y = (moby->pos).y + pfVar19[1];
  iVar15 = ((uint)(ZERO_MASK(iVar15)) & 0xfffffffe) + 4;
  (moby->pos).z = (moby->pos).z + pfVar19[2];
  dVar35 = 0.0;
  dVar27 = -1.0;
  dVar28 = 1.0;
  dVar24 = 0.5;
  dVar37 = 0.10000000149011612;
  for (iVar18 = 0; iVar18 < (int)(((uint)(ZERO_MASK(LetterBoxOn)) & 2) + 2);
      iVar18 = iVar18 + 1) {
    MB_randRangeFloat((float)dVar27,(float)dVar28);
    MB_randRangeFloat((float)dVar27,(float)dVar28);
    MB_randRangeFloat((float)dVar27,(float)dVar28);
    MB_randRangeFloat((float)dVar24,(float)dVar28);
    MB_randRangeFloat
              ((float)((double)g_FrameTime * dVar37),g_FrameTime);
    MB_randRangeFloat((float)dVar35,(float)dVar28);
    iVar12 = MB_randRange(0x1e,0x2d);
    iVar12 = (int)(animationSpeed * (float)((double)(longlong)iVar12 + dVar24));
    local_128 = (longlong)iVar12;
    iVar13 = MB_randRange(0x50,0x8c);
    SpawnPart_4(local_200,local_1f0,0x6f00afff,0xff,iVar12 / iVar15,0x50,iVar13 / iVar15,1)
    ;
    MB_randRangeFloat((float)dVar35,(float)dVar28);
    iVar12 = MB_randRange(0x3c,0x78);
    iVar12 = (int)(animationSpeed * (float)((double)(longlong)iVar12 + dVar24));
    local_128 = (longlong)iVar12;
    iVar13 = MB_randRange(200,300);
    SpawnPart_4
              (local_200,local_1f0,0x1fffffff,0x4f4f4f,iVar12 / iVar15,0x50,iVar13 / iVar15,0);
  }
  fVar2 = (moby->pos).x;
  if ((((int)(moby->pos).x < 0) || (fVar3 = (moby->pos).y, (int)(moby->pos).y < 0)) ||
     (fVar4 = (moby->pos).z, (int)(moby->pos).z < 0)) {
    DeleteMoby(moby);
  }
  else {
    fVar5 = pfVar19[4];
    fVar9 = fVar5 - fVar2;
    if (SQRT((pfVar19[6] - fVar4) * (pfVar19[6] - fVar4) +
             fVar9 * fVar9 + (pfVar19[5] - fVar3) * (pfVar19[5] - fVar3)) < pfVar19[0xe]) {
      (moby->pos).x = fVar5;
      fVar3 = pfVar19[5];
      (moby->pos).y = fVar3;
      fVar4 = pfVar19[6];
      (moby->pos).z = fVar4;
      fVar2 = pfVar19[7];
      moby->state = '\x01';
      (moby->pos).w = fVar2;
      fVar2 = fVar5;
    }
    if (moby->state != '\0') {
      bVar1 = LetterBoxOn != 0;
      dVar26 = 8.0;
      local_190[0x18] =
           SQRT((GameCamera.posZ - fVar4) * (GameCamera.posZ - fVar4) +
                (GameCamera.posX - fVar2) * (GameCamera.posX - fVar2) +
                (GameCamera.posY - fVar3) * (GameCamera.posY - fVar3));
      dVar37 = dVar26;
      if (bVar1) {
        dVar37 = 4.0;
      }
      *pfVar19 = *pfVar19 * -0.55;
      pfVar19[1] = pfVar19[1] * -0.55;
      pfVar19[2] = pfVar19[2] * -0.55;
      if (bVar1) {
        CollMobySphere(dVar28,lVar10 + 0x10,&g_heroMtx,9,g_heroMobyPtr,local_1c0);
        if ((g_CollOutput.pMoby == (MobyInstance *)0x0) ||
           (0x2c7 < (short)(g_CollOutput.pMoby)->oClass || (short)(g_CollOutput.pMoby)->oClass < 0x2c5))
        {
          PlayMobySound(1,0,moby);
        }
        else {
          PlayMobySound(2,0,moby);
        }
      }
      fVar2 = (moby->pos).y - GameCamera.posY;
      fVar3 = (moby->pos).x - GameCamera.posX;
      fVar4 = (moby->pos).z - GameCamera.posZ;
      lVar17 = (ZERO_MASK(LetterBoxOn) & 3U) + 2;
      iVar18 = (int)lVar17;
      dVar23 = (double)SQRT(fVar4 * fVar4 + fVar3 * fVar3 + fVar2 * fVar2);
      dVar20 = (double)FastIntToDouble(lVar17);
      dVar22 = 2.0;
      if (dVar23 < (double)(float)(dVar20 * 2.0)) {
        uVar14 = FastDoubleToInt(dVar23);
        iVar18 = ((int)uVar14 >> 1) + (uint)((int)uVar14 < 0 && (uVar14 & 1) != 0);
      }
      iVar12 = 0;
      dVar20 = dVar35;
      if (dVar23 - 7.0 < 0.0) {
        dVar20 = (double)(float)(7.0 - dVar23);
      }
      if (0 < iVar18) {
        dVar29 = 10.0;
        dVar38 = 30.5;
        dVar34 = (double)(float)(dVar37 * dVar24);
        dVar40 = 40.5;
        dVar36 = (double)(float)(dVar37 * 400000.0);
        dVar30 = 60.5;
        dVar31 = 90.5;
        dVar32 = 10.5;
        dVar33 = 20.5;
        do {
          local_118 = (float)dVar26;
          dVar26 = (double)MB_randRangeFloat((float)dVar26,(float)dVar29);
          dVar21 = (double)g_FrameTime;
          local_190[0] = 2.1569206e+09;
          local_190[1] = 2.1569206e+09;
          local_190[3] = 2.1548234e+09;
          local_190[4] = 4.6566126e-10;
          local_190[2] = 2.155872e+09;
          local_190[5] = 4.6566126e-10;
          local_190[6] = 1.1675459e-10;
          dVar25 = (double)(float)(dVar26 * dVar21 - (double)(float)(dVar21 * dVar20));
          local_190[7] = 1.1669775e-10;
          local_190[8] = 1.166409e-10;
          local_190[9] = 1.1641642e-10;
          local_190[10] = 1.1641532e-10;
          local_190[0xb] = 0.5;
          lVar17 = MB_randInt(dVar26,dVar21,(double)(float)(dVar21 * dVar20),6);
          uVar6 = *(undefined4 *)((int)local_190 + (int)(lVar17 << 2));
          lVar17 = MB_randInt(6);
          uVar7 = *(undefined4 *)((int)local_190 + (int)(lVar17 << 2) + 0x18);
          iVar13 = (int)((double)animationSpeed * dVar40);
          local_128 = (longlong)iVar13;
          MB_randRange((int)((double)animationSpeed * dVar38),iVar13);
          iVar13 = (int)((double)animationSpeed * dVar31);
          local_128 = (longlong)iVar13;
          MB_randRange((int)((double)animationSpeed * dVar30),iVar13);
          SpawnPart_11
                    (dVar36,(double)(float)(dVar25 * dVar37),lVar10 + 0x10,pfVar19,uVar6,uVar7);
          iVar13 = (int)((double)animationSpeed * dVar33);
          local_128 = (longlong)iVar13;
          MB_randRange((int)((double)animationSpeed * dVar32),iVar13);
          iVar13 = (int)((double)animationSpeed * dVar40);
          local_128 = (longlong)iVar13;
          MB_randRange((int)((double)animationSpeed * dVar38),iVar13);
          SpawnPart_11
                    (dVar36,(double)(float)(dVar25 * dVar34),lVar10 + 0x10,pfVar19,0x7fffffff,
                     0xffffff);
          iVar12 = iVar12 + 1;
          dVar26 = (double)local_118;
        } while (iVar12 < iVar18);
      }
      dVar29 = 3.0;
      iVar18 = 0;
      uVar39 = 0x41086a0000000000;
      lVar17 = lVar10 + 0x10;
      dVar20 = 15.5;
      dVar26 = 20.5;
      do {
        local_190[0xc] = 2.1569206e+09;
        local_190[0xd] = 2.1569206e+09;
        local_190[0xe] = 2.155872e+09;
        local_190[0xf] = 2.1548234e+09;
        local_190[0x10] = 4.6566126e-10;
        local_190[0x11] = 4.6566126e-10;
        local_190[0x12] = 1.1675459e-10;
        local_190[0x13] = 1.1669775e-10;
        local_190[0x14] = 1.166409e-10;
        local_190[0x15] = 1.1641642e-10;
        local_190[0x16] = 1.1641532e-10;
        local_190[0x17] = 0.5;
        MB_randRangeFloat((float)dVar27,(float)dVar28);
        MB_randRangeFloat((float)dVar27,(float)dVar28);
        MB_randRangeFloat((float)dVar27,(float)dVar28);
        MB_randRangeFloat((float)dVar35,(float)dVar29);
        lVar11 = MB_randInt(6);
        uVar6 = *(undefined4 *)((int)local_190 + (int)(lVar11 << 2) + 0x30);
        lVar11 = MB_randInt(6);
        uVar7 = *(undefined4 *)((int)local_190 + (int)(lVar11 << 2) + 0x48);
        iVar12 = (int)((double)animationSpeed * dVar26);
        local_128 = (longlong)iVar12;
        MB_randRange((int)((double)animationSpeed * dVar20),iVar12);
        SpawnPart_8(uVar39,lVar17,local_1e0,uVar6,uVar7);
        iVar18 = iVar18 + 1;
      } while (iVar18 < 5);
      uVar14 = (uint)((int)g_FrameLoad >> 0x1f) >> 1;
      if (((int)((uVar14 ^ g_FrameLoad) - ((int)g_FrameLoad >> 0x1f)) < 0x3f733333) &&
         (9.0 < dVar23)) {
        dVar35 = (double)(float)(dVar37 * 4.0);
        local_128 = (longlong)(int)((double)animationSpeed * dVar20);
        FUN_001d4d88(dVar35,lVar10,lVar17,pfVar19,uVar14,(int)((double)animationSpeed * dVar20),0x7f
                     ,0x7f,0x7f);
        local_128 = (longlong)(int)(animationSpeed * 24.5);
        FUN_001d4d88(dVar35,lVar10,lVar17,pfVar19);
      }
      dVar29 = (double)local_190[0x18];
      local_128 = (longlong)(int)((double)animationSpeed * dVar26);
      FUN_001d4d88((double)(float)(dVar37 * 4.0),lVar10,lVar17,pfVar19,0x30,
                   (int)((double)animationSpeed * dVar26),0x7f,0x7f,0);
      dVar35 = 19.5;
      local_128 = (longlong)(int)(animationSpeed * 19.5);
      FUN_001d4d88((double)(float)(dVar37 * dVar22),lVar10,lVar17,pfVar19,0x20,
                   (int)(animationSpeed * 19.5),0xff,0xff,0xff);
      if (100.0 < dVar29) {
        uVar39 = 0x403e000000000000;
        uVar14 = (uint)((int)g_FrameLoad >> 0x1f) >> 1;
        if (((int)((uVar14 ^ g_FrameLoad) - ((int)g_FrameLoad >> 0x1f)) < 0x3f733333) &&
           (9.0 < dVar23)) {
          local_128 = (longlong)(int)((double)animationSpeed * dVar20);
          FUN_001d4d88(0x403e000000000000,lVar10,lVar17,pfVar19,uVar14,
                       (int)((double)animationSpeed * dVar20),0x7f,0x7f,0x7f);
          local_128 = (longlong)(int)(animationSpeed * 24.5);
          FUN_001d4d88(uVar39,lVar10,lVar17,pfVar19);
        }
        local_128 = (longlong)(int)((double)animationSpeed * dVar26);
        FUN_001d4d88(uVar39,lVar10,lVar17,pfVar19,0x30,(int)((double)animationSpeed * dVar26),0x7f,
                     0x7f,0);
        local_128 = (longlong)(int)((double)animationSpeed * dVar35);
        FUN_001d4d88(0x402e000000000000,lVar10,lVar17,pfVar19,0x20,
                     (int)((double)animationSpeed * dVar35),0xff,0xff,0xff);
      }
      dVar22 = 10.0;
      dVar20 = 40.0;
      dVar26 = 105000.0;
      dVar37 = 90.5;
      dVar35 = 150.5;
      for (iVar18 = 0;
          iVar18 < (int)(((uint)(ZERO_MASK(LetterBoxOn)) & 0x1e) + 10);
          iVar18 = iVar18 + 1) {
        MB_randRangeFloat((float)dVar27,(float)dVar28);
        MB_randRangeFloat((float)dVar27,(float)dVar28);
        MB_randRangeFloat((float)dVar27,(float)dVar28);
        MB_randRangeFloat((float)dVar22,(float)dVar20);
        dVar23 = dVar28;
        if (LetterBoxOn != 0) {
          dVar23 = 0.20000000298023224;
        }
        dVar23 = (double)(float)(dVar23 * dVar26);
        iVar12 = (int)((double)animationSpeed * dVar35);
        local_128 = (longlong)iVar12;
        iVar12 = MB_randRange((int)((double)animationSpeed * dVar37),iVar12);
        SpawnPart_15
                  (dVar23,lVar17,local_1d0,0x4f007fff,0x1f00007f,0x1f000000,iVar12 / iVar15,1,
                   0xffffffffffffffff);
      }
      do {
        if (((((LetterBoxOn == 0) && (fVar2 = pfVar19[8], fVar2 != -NAN)) &&
             (g_MobyInstance[(int)fVar2].oClass == 700)) &&
            ((piVar8 = (int *)g_MobyInstance[(int)fVar2].pVar, *(short *)(piVar8 + 1) == 0 &&
             (*piVar8 == 0)))) &&
           ((iVar15 = MB_IsPntInCuboid(&g_heroPosition,(longlong)piVar8[2]), iVar15 != 0
            && (iVar15 = MB_IsPntInCuboid((Vec4 *)&GameCamera.posX,(longlong)piVar8[2]),
               iVar15 != 0)))) {
          iVar15 = MB_randRange(0x3c,0xb4);
          local_128 = (longlong)iVar15;
          *piVar8 = (int)(animationSpeed * (float)((double)local_128 + dVar24));
        }
        iVar16 = iVar16 + 1;
        pfVar19 = pfVar19 + 1;
      } while (iVar16 < 4);
      DeleteMoby(moby);
    }
  }
  return;
}


