// game/update/moby1258.cpp -- reconstructed from NPEA00385 EBOOT
// STATUS: NOT STARTED (raw Ghidra output)
// 3 functions, 0x229a58-0x22a704
#include "game/update/moby1258.h"
#include "game/camera.h"
#include "game/collproc.h"
#include "game/hero.h"
#include "game/mobyfunc.h"
#include "game/mobyproc.h"
#include "game/mobyutil.h"
#include "game/partupd.h"
#include "game/sound.h"
#include "idol/fastfunc.h"

// 0x0229a58 (0x14 bytes)
void M1258_00229a58(void)

{
  DAT_0076d520 = 0x10000;
  return;
}


// 0x0229a90 (0x54c bytes)
// inlined: FastAtan2 @0x229c14, FastAtan2 @0x229d8c
MobyInstance *
FUN_00229a90(float param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
            ulonglong param_5,ulonglong param_6,longlong param_7)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float *pfVar6;
  ulonglong *puVar7;
  float fVar8;
  int iVar9;
  int iVar10;
  ulonglong uVar11;
  MobyInstance *pMVar14;
  longlong lVar12;
  longlong lVar13;
  uint uVar15;
  longlong lVar16;
  MobyModeBit MVar17;
  ulonglong uVar18;
  longlong lVar19;
  float *pfVar20;
  ulonglong unaff_r26;
  ulonglong unaff_r27;
  ulonglong unaff_r28;
  ulonglong unaff_r29;
  ulonglong unaff_r30;
  ulonglong unaff_r31;
  ulonglong in_LR;
  longlong lVar21;
  double dVar22;
  ulonglong in_f28;
  ulonglong in_f29;
  ulonglong in_f30;
  ulonglong in_f31;
  f32 fStack00000040;
  f32 fStack00000044;
  f32 fStack00000048;
  f32 fStack0000004c;
  float fStack00000050;
  float fStack00000054;
  float fStack00000058;
  float fStack0000005c;
  
  uVar11 = ZEXT48(&stack0x00000000);
  lVar13 = uVar11 - 0x110;
  puVar7 = (ulonglong *)lVar13;
  *puVar7 = uVar11;
  puVar7[0x24] = in_LR;
  puVar7[0x1e] = in_f28;
  puVar7[0x1f] = in_f29;
  puVar7[0x20] = in_f30;
  puVar7[0x21] = in_f31;
  puVar7[0x1d] = unaff_r31;
  puVar7[0x18] = unaff_r26;
  puVar7[0x1b] = unaff_r29;
  puVar7[0x1a] = unaff_r28;
  puVar7[0x1c] = unaff_r30;
  puVar7[0x19] = unaff_r27;
  _fStack00000040 = param_3;
  _fStack00000048 = param_4;
  pMVar14 = CreateMoby(0x4ea);
  if (pMVar14 != (MobyInstance *)0x0) {
    pfVar6 = (float *)pMVar14->pVar;
    pfVar6[6] = param_1;
    pMVar14->updateDistance = -1;
    pMVar14->drawDistance = 0xff;
    pMVar14->enabled = '\x01';
    pMVar14->scale = pMVar14->scale * 4.0;
    fVar1 = 0.0;
    fStack00000054 = (float)param_5;
    fStack00000050 = (float)(param_5 >> 0x20);
    fStack00000058 = (float)(param_6 >> 0x20);
    (pMVar14->rotation).x = 0.0;
    fVar4 = ABS(fStack00000058);
    fStack0000005c = (float)param_6;
    fVar3 = SQRT(fStack00000050 * fStack00000050 + fStack00000054 * fStack00000054);
    fVar2 = ABS(fVar3);
    *(float *)((int)puVar7 + 0x74) = fVar3;
    *(float *)(puVar7 + 0xf) = fVar2 - fVar4;
    uVar18 = (ulonglong)(*(uint *)((int)puVar7 + 0x74) >> 0x1c) & 8 |
             (ulonglong)(*(uint *)(puVar7 + 0xf) >> 0x1e) & 2 | param_6 >> 0x3d & 4;
    fVar3 = ABS(*(float *)((int)puVar7 + 0x74));
    if (*(float *)(puVar7 + 0xf) - 0.0 < 0.0) {
      fVar3 = fVar4;
    }
    fVar5 = *(float *)(&g_atanQuadrantTable + (int)(uVar18 << 2));
    if (*(float *)(puVar7 + 0xf) - 0.0 < 0.0) {
      fVar4 = fVar2;
    }
    fVar2 = *(float *)(((uint)(uVar18 << 2) | 0x735900) + 4);
    fVar8 = fVar1;
    if (0.0 < fVar3) {
      lVar12 = uVar11 - 0x100;
      lVar16 = uVar11 - 0x74;
      lVar19 = uVar11 - 100;
      lVar21 = 2;
      fVar3 = (fVar4 - fVar3) / (fVar4 + fVar3);
      fVar4 = fVar3 * fVar3;
      *(float *)(puVar7 + 0x15) = fVar3;
      *(float *)(puVar7 + 0x14) = fVar3;
      *(float *)((int)puVar7 + 0xa4) = fVar3;
      *(float *)((int)puVar7 + 0x9c) = fVar3;
      fVar3 = fVar4 * fVar4;
      *(float *)(puVar7 + 0x14) = *(float *)(puVar7 + 0x14) * fVar4;
      *(float *)((int)puVar7 + 0xa4) = *(float *)((int)puVar7 + 0xa4) * fVar3;
      *(float *)(puVar7 + 0x15) = *(float *)(puVar7 + 0x15) * fVar3 * fVar4;
      do {
        *(float *)((int)lVar12 + 0x9c) = *(float *)((int)lVar12 + 0x8c) * fVar3 * fVar3;
        iVar9 = (int)lVar16;
        lVar12 = lVar12 + 8;
        lVar16 = lVar16 + 8;
        *(float *)((int)lVar19 + 4) = *(float *)(iVar9 + 4) * fVar3 * fVar3;
        lVar19 = lVar19 + 8;
        lVar21 = lVar21 + -1;
      } while (lVar21 != 0);
      lVar21 = 4;
      lVar19 = uVar11 - 0x74;
      pfVar20 = (float *)&DAT_007358e0;
      lVar12 = lVar13;
      lVar16 = lVar19;
      do {
        fVar3 = *pfVar20;
        fVar4 = pfVar20[1];
        pfVar20 = pfVar20 + 2;
        *(float *)((int)lVar12 + 0x9c) = *(float *)((int)lVar12 + 0x9c) * fVar3;
        lVar12 = lVar12 + 8;
        *(float *)((int)lVar16 + 4) = *(float *)((int)lVar16 + 4) * fVar4;
        lVar16 = lVar16 + 8;
        lVar21 = lVar21 + -1;
      } while (lVar21 != 0);
      lVar16 = 2;
      lVar12 = lVar13;
      fVar3 = fVar1;
      do {
        iVar9 = (int)lVar12;
        lVar12 = lVar12 + 0x10;
        iVar10 = (int)lVar19;
        lVar19 = lVar19 + 0x10;
        fVar3 = fVar3 + *(float *)(iVar9 + 0x9c) + *(float *)(iVar10 + 4) + *(float *)(iVar10 + 8) +
                *(float *)(iVar10 + 0xc);
        lVar16 = lVar16 + -1;
      } while (lVar16 != 0);
      fVar8 = (fVar3 + 0.7853982) * fVar5 + fVar2;
    }
    fVar2 = ABS(fStack00000050);
    fVar4 = ABS(fStack00000054);
    (pMVar14->rotation).y = -fVar8;
    *(float *)(puVar7 + 0xe) = fVar2 - fVar4;
    uVar18 = param_5 >> 0x3c & 8 |
             (ulonglong)(*(uint *)(puVar7 + 0xe) >> 0x1e) & 2 | (param_5 << 0x20) >> 0x3d & 4;
    fVar3 = fVar2;
    if (*(float *)(puVar7 + 0xe) - 0.0 < 0.0) {
      fVar3 = fVar4;
    }
    fVar5 = *(float *)(&g_atanQuadrantTable + (int)(uVar18 << 2));
    if (*(float *)(puVar7 + 0xe) - 0.0 < 0.0) {
      fVar4 = fVar2;
    }
    fVar2 = *(float *)(((uint)(uVar18 << 2) | 0x735900) + 4);
    if (0.0 < fVar3) {
      lVar12 = uVar11 - 0x100;
      lVar16 = uVar11 - 0x94;
      lVar19 = uVar11 - 0x84;
      lVar21 = 2;
      fVar3 = (fVar4 - fVar3) / (fVar4 + fVar3);
      fVar4 = fVar3 * fVar3;
      *(float *)(puVar7 + 0x11) = fVar3;
      *(float *)(puVar7 + 0x10) = fVar3;
      *(float *)((int)puVar7 + 0x84) = fVar3;
      *(float *)((int)puVar7 + 0x7c) = fVar3;
      fVar3 = fVar4 * fVar4;
      *(float *)(puVar7 + 0x10) = *(float *)(puVar7 + 0x10) * fVar4;
      *(float *)((int)puVar7 + 0x84) = *(float *)((int)puVar7 + 0x84) * fVar3;
      *(float *)(puVar7 + 0x11) = *(float *)(puVar7 + 0x11) * fVar3 * fVar4;
      do {
        *(float *)((int)lVar12 + 0x7c) = *(float *)((int)lVar12 + 0x6c) * fVar3 * fVar3;
        iVar9 = (int)lVar16;
        lVar12 = lVar12 + 8;
        lVar16 = lVar16 + 8;
        *(float *)((int)lVar19 + 4) = *(float *)(iVar9 + 4) * fVar3 * fVar3;
        lVar19 = lVar19 + 8;
        lVar21 = lVar21 + -1;
      } while (lVar21 != 0);
      lVar21 = 4;
      lVar19 = uVar11 - 0x94;
      pfVar20 = (float *)&DAT_007358e0;
      lVar12 = lVar13;
      lVar16 = lVar19;
      do {
        fVar3 = *pfVar20;
        fVar4 = pfVar20[1];
        pfVar20 = pfVar20 + 2;
        *(float *)((int)lVar12 + 0x7c) = *(float *)((int)lVar12 + 0x7c) * fVar3;
        lVar12 = lVar12 + 8;
        *(float *)((int)lVar16 + 4) = *(float *)((int)lVar16 + 4) * fVar4;
        lVar16 = lVar16 + 8;
        lVar21 = lVar21 + -1;
      } while (lVar21 != 0);
      lVar12 = 2;
      do {
        iVar9 = (int)lVar13;
        iVar10 = (int)lVar19;
        lVar13 = lVar13 + 0x10;
        lVar19 = lVar19 + 0x10;
        fVar1 = fVar1 + *(float *)(iVar9 + 0x7c) + *(float *)(iVar10 + 4) + *(float *)(iVar10 + 8) +
                *(float *)(iVar10 + 0xc);
        lVar12 = lVar12 + -1;
      } while (lVar12 != 0);
      fVar1 = (fVar1 + 0.7853982) * fVar5 + fVar2;
    }
    (pMVar14->rotation).z = fVar1;
    (pMVar14->pos).x = fStack00000040;
    (pMVar14->pos).y = fStack00000044;
    (pMVar14->pos).z = fStack00000048;
    (pMVar14->pos).w = fStack0000004c;
    *pfVar6 = fStack00000050;
    pfVar6[1] = fStack00000054;
    pfVar6[2] = fStack00000058;
    pfVar6[3] = fStack0000005c;
    dVar22 = (double)MB_randRangeFloat
                               (g_FrameTime * -1.5707964,g_FrameTime * 1.5707964
                               );
    pfVar6[4] = (float)dVar22;
    *(short *)(pfVar6 + 7) = (short)param_7;
    *(short *)((int)pfVar6 + 0x1e) = (short)param_7;
    pfVar6[5] = 0.0;
    fVar1 = (pMVar14->pos).y - g_heroPosition.y;
    fVar3 = (pMVar14->pos).x - g_heroPosition.x;
    fVar4 = (pMVar14->pos).z - g_heroPosition.z;
    pfVar6[9] = 0.0;
    pfVar6[10] = 0.0;
    uVar15 = (int)param_7 + (int)(param_7 << 2);
    pfVar6[8] = SQRT(fVar4 * fVar4 + fVar3 * fVar3 + fVar1 * fVar1);
    pMVar14->alpha = '@';
    MVar17 = pMVar14->modeBits | DRAW_TRANSPARENT_WEIRD;
    pMVar14->modeBits = MVar17;
    SpawnPart_26
              (0x41186a0000000000,pMVar14,MVar17,0x2f7f4f4f,
               ((int)uVar15 >> 2) + (uint)((int)uVar15 < 0 && (uVar15 & 3) != 0),0xffffffffffffffff)
    ;
    SpawnPart_26(0x4103880000000000,pMVar14);
    UpdateMobyTransform(pMVar14);
  }
  return pMVar14;
}


// 0x022a010 (0x6f4 bytes)
// inlined: FastRSqrt @0x22a2c4
/* Moby 1258 */

void UpdateMoby_1258(MobyInstance *moby)

{
  char cVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  ushort uVar5;
  float *pfVar6;
  float fVar7;
  f32 fVar8;
  uint uVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  int iVar14;
  undefined8 uVar13;
  longlong lVar15;
  undefined1 *puVar16;
  double dVar17;
  double dVar18;
  double dVar19;
  double dVar20;
  double dVar21;
  double dVar22;
  undefined8 uVar23;
  GPiece<16> local_100;
  GPiece<16> local_f0;
  undefined4 local_e0 [4];
  GPiece<72> local_d0;
  
  pfVar6 = (float *)moby->pVar;
  fVar2 = (moby->pos).x;
  fVar3 = (moby->pos).y;
  fVar10 = fVar2 - g_heroPosition.x;
  fVar4 = (moby->pos).z;
  fVar11 = fVar3 - g_heroPosition.y;
  fVar12 = fVar4 - g_heroPosition.z;
  fVar7 = pfVar6[10];
  (moby->pos).x = fVar2 + *pfVar6;
  (moby->pos).y = fVar3 + pfVar6[1];
  dVar22 = (double)SQRT(fVar12 * fVar12 + fVar10 * fVar10 + fVar11 * fVar11);
  (moby->pos).z = fVar4 + pfVar6[2];
  if ((((fVar7 == 0.0) && (pfVar6[9] != 0.0)) && ((double)pfVar6[8] < dVar22)) && (dVar22 < 3.0)) {
    PlayMobySound(0,0,moby);
    pfVar6[10] = 1.4013e-45;
  }
  if (dVar22 < (double)pfVar6[8]) {
    pfVar6[9] = 1.4013e-45;
  }
  pfVar6[8] = (float)dVar22;
  fVar8 = (moby->pos).x;
  uVar9 = (int)fVar8 >> 0x1f;
  iVar14 = (uVar9 >> 1 ^ (uint)fVar8) - uVar9;
  if (((iVar14 < 0x40000000) || (0x447f4000 < iVar14)) ||
     ((fVar8 = (moby->pos).y, uVar9 = (int)fVar8 >> 0x1f,
      iVar14 = (uVar9 >> 1 ^ (uint)fVar8) - uVar9, 0x447f4000 < iVar14 || iVar14 < 0x40000000 ||
      ((fVar8 = (moby->pos).z, uVar9 = (int)fVar8 >> 0x1f,
       iVar14 = (uVar9 >> 1 ^ (uint)fVar8) - uVar9, 0x447f4000 < iVar14 || iVar14 < 0x40000000 ||
       (fVar3 = (moby->pos).y - GameCamera.posY, fVar2 = (moby->pos).x - GameCamera.posX,
       255.0 < SQRT(fVar2 * fVar2 + fVar3 * fVar3))))))) {
    DeleteMoby(moby);
  }
  else {
    puVar16 = (undefined1 *)0x0;
    if (moby->setByGroup == '\0') {
      puVar16 = local_d0;
    }
    iVar14 = FastDecTimerS16(pfVar6 + 7);
    if ((iVar14 == 0) || (moby->setByGroup != '\0')) {
      if ((*(short *)(pfVar6 + 7) < 1) && (moby->setByGroup != '\0')) {
        DeleteMoby(moby);
        return;
      }
    }
    else {
      moby->setByGroup = '\x01';
      uVar5 = *(ushort *)((int)pfVar6 + 0x1e);
      *(ushort *)(pfVar6 + 7) = ((short)uVar5 >> 2) + (ushort)((short)uVar5 < 0 && (uVar5 & 3) != 0)
      ;
    }
    lVar15 = (longlong)(int)moby + 0x10;
    iVar14 = CollLine(local_100,lVar15,0,pfVar6[6],puVar16);
    if (iVar14 != 0) {
      (moby->pos).x = g_CollOutput.ip.x;
      cVar1 = moby->setByGroup;
      (moby->pos).y = g_CollOutput.ip.y;
      (moby->pos).z = g_CollOutput.ip.z;
      (moby->pos).w = g_CollOutput.ip.w;
      if (cVar1 == '\0') {
        iVar14 = 0;
        dVar22 = -1.0;
        dVar17 = 1.0;
        dVar18 = 3.0;
        dVar19 = 6.0;
        dVar20 = 10.5;
        dVar21 = 15.5;
        uVar23 = 0x40ed4c0000000000;
        do {
          MB_randRangeFloat((float)dVar22,(float)dVar17);
          MB_randRangeFloat((float)dVar22,(float)dVar17);
          MB_randRangeFloat((float)dVar22,(float)dVar17);
          FastVecReflect(local_e0,pfVar6,0xa10980);
          MB_randRangeFloat
                    ((float)((double)g_FrameTime * dVar18),
                     (float)((double)g_FrameTime * dVar19));
          uVar13 = MB_randRange
                             ((int)((double)animationSpeed * dVar20),
                              (int)((double)animationSpeed * dVar21));
          SpawnPart_27(uVar23,lVar15,local_f0,0x7f2f4f6f,uVar13);
          iVar14 = iVar14 + 1;
        } while (iVar14 < 5);
      }
      uVar23 = 0x3ff19999a0000000;
      MB_genericExplosion
                (0,0,0x3ff19999a0000000,0x3fe3333340000000,0x3ff0000000000000,0x3fecccccc0000000,0,
                 (longlong)(int)moby,pfVar6,0,1,0xffffffffffffffff,4,3,6);
      CollMobySphere(uVar23,lVar15);
      DeleteMoby(moby);
    }
  }
  return;
}


