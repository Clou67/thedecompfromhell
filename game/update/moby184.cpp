// game/update/moby184.cpp -- reconstructed from NPEA00385 EBOOT
// STATUS: NOT STARTED (raw Ghidra output)
// 3 functions, 0x1b0c8-0x1bb84
#include "game/update/moby184.h"
#include "game/camera.h"
#include "game/collproc.h"
#include "game/hero.h"
#include "game/mobyfunc.h"
#include "game/mobyproc.h"
#include "game/mobyutil.h"
#include "game/partupd.h"
#include "game/sound.h"
#include "idol/fastfunc.h"

// 0x001b0c8 (0x14 bytes)
void SECTION_HEADER_MOBY184(void)

{
  DAT_0071cfac = 0x10000;
  return;
}


// 0x001b100 (0x40c bytes)
// inlined: FastAtan2 @0x1b264
MobyInstance *
M184_0001b100
          (float param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,ulonglong param_5,
          undefined8 param_6,longlong param_7)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  short sVar6;
  float *pfVar7;
  ulonglong *puVar8;
  float fVar9;
  int iVar10;
  int iVar11;
  ulonglong uVar12;
  MobyInstance *pMVar15;
  ulonglong uVar13;
  longlong lVar14;
  longlong lVar16;
  longlong lVar17;
  longlong lVar18;
  float *pfVar19;
  ulonglong unaff_r27;
  ulonglong unaff_r28;
  ulonglong unaff_r29;
  ulonglong unaff_r30;
  uint uVar20;
  ulonglong unaff_r31;
  ulonglong in_LR;
  longlong lVar21;
  double dVar22;
  ulonglong in_f29;
  ulonglong in_f30;
  ulonglong in_f31;
  undefined8 uVar23;
  f32 fStack00000040;
  f32 fStack00000044;
  f32 fStack00000048;
  f32 fStack0000004c;
  float fStack00000050;
  float fStack00000054;
  float fStack00000058;
  float fStack0000005c;
  
  uVar12 = ZEXT48(&stack0x00000000);
  lVar14 = uVar12 - 0xe0;
  puVar8 = (ulonglong *)lVar14;
  *puVar8 = uVar12;
  puVar8[0x1e] = in_LR;
  puVar8[0x19] = in_f29;
  puVar8[0x1a] = in_f30;
  puVar8[0x1b] = in_f31;
  puVar8[0x16] = unaff_r29;
  puVar8[0x17] = unaff_r30;
  puVar8[0x14] = unaff_r27;
  puVar8[0x18] = unaff_r31;
  puVar8[0x15] = unaff_r28;
  _fStack00000040 = param_3;
  _fStack00000048 = param_4;
  _fStack00000050 = param_5;
  _fStack00000058 = param_6;
  pMVar15 = CreateMoby(PYROCITOR|BLARG_HEAVY_INTERCEPTOR_0008);
  if (pMVar15 != (MobyInstance *)0x0) {
    pfVar7 = (float *)pMVar15->pVar;
    pfVar7[6] = param_1;
    sVar6 = *(short *)((int)param_1 + 0xa6);
    pMVar15->updateDistance = -1;
    pMVar15->drawDistance = 0xff;
    pMVar15->enabled = '\x01';
    if (sVar6 != 0xff) {
      pMVar15->scale = pMVar15->scale * 0.5;
    }
    fVar3 = ABS(fStack00000050);
    fVar4 = ABS(fStack00000054);
    fVar1 = 0.0;
    (pMVar15->rotation).x = 0.0;
    (pMVar15->rotation).y = 0.0;
    *(float *)(puVar8 + 0xe) = fVar3 - fVar4;
    uVar13 = param_5 >> 0x3c & 8 |
             (ulonglong)(*(uint *)(puVar8 + 0xe) >> 0x1e) & 2 | (param_5 << 0x20) >> 0x3d & 4;
    fVar9 = fVar3;
    if (*(float *)(puVar8 + 0xe) - 0.0 < 0.0) {
      fVar9 = fVar4;
    }
    fVar5 = *(float *)(&g_atanQuadrantTable + (int)(uVar13 << 2));
    fVar2 = *(float *)(((uint)(uVar13 << 2) | 0x735900) + 4);
    if (*(float *)(puVar8 + 0xe) - 0.0 < 0.0) {
      fVar4 = fVar3;
    }
    if (0.0 < fVar9) {
      lVar18 = uVar12 - 0xd0;
      lVar16 = uVar12 - 0x5c;
      lVar17 = uVar12 - 0x6c;
      lVar21 = 2;
      fVar3 = (fVar4 - fVar9) / (fVar4 + fVar9);
      fVar4 = fVar3 * fVar3;
      *(float *)(puVar8 + 0x10) = fVar3;
      *(float *)(puVar8 + 0xf) = fVar3;
      *(float *)((int)puVar8 + 0x7c) = fVar3;
      *(float *)((int)puVar8 + 0x74) = fVar3;
      fVar3 = fVar4 * fVar4;
      *(float *)(puVar8 + 0xf) = *(float *)(puVar8 + 0xf) * fVar4;
      *(float *)((int)puVar8 + 0x7c) = *(float *)((int)puVar8 + 0x7c) * fVar3;
      *(float *)(puVar8 + 0x10) = *(float *)(puVar8 + 0x10) * fVar3 * fVar4;
      do {
        *(float *)((int)lVar18 + 0x74) = *(float *)((int)lVar18 + 100) * fVar3 * fVar3;
        iVar10 = (int)lVar17;
        lVar17 = lVar17 + 8;
        lVar18 = lVar18 + 8;
        *(float *)((int)lVar16 + 4) = *(float *)(iVar10 + 4) * fVar3 * fVar3;
        lVar16 = lVar16 + 8;
        lVar21 = lVar21 + -1;
      } while (lVar21 != 0);
      lVar18 = uVar12 - 0x6c;
      lVar21 = 4;
      pfVar19 = (float *)&DAT_007358e0;
      lVar16 = lVar18;
      lVar17 = lVar14;
      do {
        fVar3 = *pfVar19;
        fVar4 = pfVar19[1];
        pfVar19 = pfVar19 + 2;
        *(float *)((int)lVar17 + 0x74) = *(float *)((int)lVar17 + 0x74) * fVar3;
        lVar17 = lVar17 + 8;
        *(float *)((int)lVar16 + 4) = *(float *)((int)lVar16 + 4) * fVar4;
        lVar16 = lVar16 + 8;
        lVar21 = lVar21 + -1;
      } while (lVar21 != 0);
      lVar16 = 2;
      do {
        iVar10 = (int)lVar14;
        iVar11 = (int)lVar18;
        lVar14 = lVar14 + 0x10;
        lVar18 = lVar18 + 0x10;
        fVar1 = fVar1 + *(float *)(iVar10 + 0x74) + *(float *)(iVar11 + 4) + *(float *)(iVar11 + 8)
                + *(float *)(iVar11 + 0xc);
        lVar16 = lVar16 + -1;
      } while (lVar16 != 0);
      fVar1 = (fVar1 + 0.7853982) * fVar5 + fVar2;
    }
    (pMVar15->rotation).z = fVar1;
    (pMVar15->pos).x = fStack00000040;
    (pMVar15->pos).y = fStack00000044;
    (pMVar15->pos).z = fStack00000048;
    (pMVar15->pos).w = fStack0000004c;
    *pfVar7 = fStack00000050;
    pfVar7[1] = fStack00000054;
    pfVar7[2] = fStack00000058;
    pfVar7[3] = fStack0000005c;
    dVar22 = (double)MB_randRangeFloat
                               (g_FrameTime * -1.5707964,g_FrameTime * 1.5707964
                               );
    pfVar7[4] = (float)dVar22;
    *(short *)(pfVar7 + 7) = (short)param_7;
    pfVar7[5] = 0.0;
    *(short *)((int)pfVar7 + 0x1e) = (short)param_7;
    fVar1 = (pMVar15->pos).y - g_heroPosition.y;
    fVar3 = (pMVar15->pos).x - g_heroPosition.x;
    fVar4 = (pMVar15->pos).z - g_heroPosition.z;
    pfVar7[9] = 0.0;
    pfVar7[10] = 0.0;
    pfVar7[8] = SQRT(fVar4 * fVar4 + fVar3 * fVar3 + fVar1 * fVar1);
    uVar23 = 0x40e3880000000000;
    uVar20 = (int)param_7 + (int)(param_7 << 2);
    if (*(short *)((int)param_1 + 0xa6) == 0xff) {
      SpawnPart_26
                (0x40f86a0000000000,pMVar15,0xff,0x2f7f4f4f,
                 ((int)uVar20 >> 2) + (uint)((int)uVar20 < 0 && (uVar20 & 3) != 0),
                 0xffffffffffffffff);
      SpawnPart_26(uVar23,pMVar15);
    }
    else {
      SpawnPart_26
                (0x40f86a0000000000,pMVar15,*(short *)((int)param_1 + 0xa6),0x2f4f7f7f,
                 ((int)uVar20 >> 2) + (uint)((int)uVar20 < 0 && (uVar20 & 3) != 0),
                 0xffffffffffffffff);
      SpawnPart_26(uVar23,pMVar15);
    }
    UpdateMobyTransform(pMVar15);
  }
  return pMVar15;
}


// 0x001b540 (0x644 bytes)
// inlined: FastRSqrt @0x1b7d0
/* Moby 184 */

void UpdateMoby_184(MobyInstance *moby)

{
  char cVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  ushort uVar6;
  float *pfVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  int iVar12;
  undefined8 uVar11;
  undefined1 *puVar13;
  undefined8 uVar14;
  double dVar15;
  double dVar16;
  double dVar17;
  double dVar18;
  double dVar19;
  double dVar20;
  GPiece<16> local_f0;
  GPiece<16> local_e0;
  undefined4 local_d0 [4];
  GPiece<64> local_c0;
  
  pfVar7 = (float *)moby->pVar;
  fVar2 = (moby->pos).x;
  fVar3 = (moby->pos).y;
  fVar4 = 64.0;
  fVar5 = (moby->pos).z;
  if (*(short *)((int)pfVar7[6] + 0xa6) == 0xff) {
    fVar4 = 128.0;
  }
  if (Level == Hoven) {
    fVar4 = 100.0;
  }
  dVar18 = (double)fVar4;
  fVar8 = fVar2 - g_heroPosition.x;
  fVar9 = fVar3 - g_heroPosition.y;
  fVar4 = pfVar7[10];
  fVar10 = fVar5 - g_heroPosition.z;
  (moby->pos).x = fVar2 + *pfVar7;
  (moby->pos).y = fVar3 + pfVar7[1];
  dVar20 = (double)SQRT(fVar10 * fVar10 + fVar8 * fVar8 + fVar9 * fVar9);
  (moby->pos).z = fVar5 + pfVar7[2];
  if ((((fVar4 == 0.0) && (pfVar7[9] != 0.0)) && ((double)pfVar7[8] < dVar20)) && (dVar20 < 3.0)) {
    PlayMobySound(0,0,moby);
    pfVar7[10] = 1.4013e-45;
  }
  if (dVar20 < (double)pfVar7[8]) {
    pfVar7[9] = 1.4013e-45;
  }
  pfVar7[8] = (float)dVar20;
  if ((((int)(moby->pos).x < 0) || ((int)(moby->pos).y < 0)) ||
     (((int)(moby->pos).z < 0 ||
      (fVar3 = (moby->pos).y - GameCamera.posY, fVar2 = (moby->pos).x - GameCamera.posX,
      dVar18 < (double)SQRT(fVar2 * fVar2 + fVar3 * fVar3))))) {
    DeleteMoby(moby);
  }
  else {
    puVar13 = (undefined1 *)0x0;
    if (moby->setByGroup == '\0') {
      puVar13 = local_c0;
    }
    iVar12 = FastDecTimerS16(pfVar7 + 7);
    if ((iVar12 == 0) || (moby->setByGroup != '\0')) {
      if ((*(short *)(pfVar7 + 7) < 1) && (moby->setByGroup != '\0')) {
        DeleteMoby(moby);
        return;
      }
    }
    else {
      moby->setByGroup = '\x01';
      uVar6 = *(ushort *)((int)pfVar7 + 0x1e);
      *(ushort *)(pfVar7 + 7) = ((short)uVar6 >> 2) + (ushort)((short)uVar6 < 0 && (uVar6 & 3) != 0)
      ;
    }
    iVar12 = CollLine(local_f0,(longlong)(int)moby + 0x10,0,pfVar7[6],puVar13);
    if (iVar12 != 0) {
      (moby->pos).x = g_CollOutput.ip.x;
      cVar1 = moby->setByGroup;
      (moby->pos).y = g_CollOutput.ip.y;
      (moby->pos).z = g_CollOutput.ip.z;
      (moby->pos).w = g_CollOutput.ip.w;
      if (cVar1 == '\0') {
        iVar12 = 0;
        dVar19 = -1.0;
        dVar17 = 1.0;
        dVar16 = 3.0;
        dVar15 = 6.0;
        dVar20 = 10.5;
        dVar18 = 15.5;
        uVar14 = 0x40dd4c0000000000;
        do {
          MB_randRangeFloat((float)dVar19,(float)dVar17);
          MB_randRangeFloat((float)dVar19,(float)dVar17);
          MB_randRangeFloat((float)dVar19,(float)dVar17);
          FastVecNormalize(local_d0,pfVar7,0xa10980);
          MB_randRangeFloat
                    ((float)((double)g_FrameTime * dVar16),
                     (float)((double)g_FrameTime * dVar15));
          uVar11 = MB_randRange
                             ((int)((double)animationSpeed * dVar20),
                              (int)((double)animationSpeed * dVar18));
          SpawnPart_27(uVar14,(longlong)(int)moby + 0x10,local_e0,0x7f2f4f6f,uVar11);
          iVar12 = iVar12 + 1;
        } while (iVar12 < 5);
      }
      DeleteMoby(moby);
    }
  }
  return;
}


