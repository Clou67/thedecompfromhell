// game/update/moby822.cpp -- reconstructed from NPEA00385 EBOOT
// STATUS: NOT STARTED (raw Ghidra output)
// 4 functions, 0x4766a8-0x478ba0
#include <stdio.h>
#include "game/update/moby822.h"
#include "game/camera.h"
#include "game/collproc.h"
#include "game/draw.h"
#include "game/hero.h"
#include "game/map.h"
#include "game/mobyfunc.h"
#include "game/mobyproc.h"
#include "game/mobyutil.h"
#include "game/music.h"
#include "game/sound.h"
#include "game/update/moby42.h"
#include "game/update/moby574.h"
#include "idol/fastfunc.h"
#include "idol/mUnk.h"
#include "idol/mathfunc.h"

// 0x04766a8 (0x5e8 bytes)
// inlined: FastAtan2 @0x476a48
void M822_004766a8
               (double param_1,longlong param_2,undefined8 param_3,undefined8 param_4,
               undefined8 param_5)

{
  longlong lVar1;
  float fVar2;
  undefined4 uVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  int iVar7;
  int iVar8;
  uint uVar9;
  void *pvVar10;
  ulonglong *puVar11;
  int iVar12;
  MobyInstance *pMVar13;
  float fVar14;
  int iVar15;
  ulonglong uVar16;
  MobyInstance *pMVar17;
  ulonglong uVar18;
  longlong lVar19;
  longlong lVar20;
  longlong lVar21;
  float *pfVar22;
  ulonglong unaff_r27;
  ulonglong unaff_r28;
  ulonglong uVar23;
  ulonglong unaff_r29;
  ulonglong unaff_r30;
  ulonglong unaff_r31;
  ulonglong in_LR;
  longlong lVar24;
  double dVar25;
  double dVar26;
  ulonglong in_f26;
  double dVar27;
  ulonglong in_f27;
  double dVar28;
  ulonglong in_f28;
  double dVar29;
  ulonglong in_f29;
  ulonglong in_f30;
  double dVar30;
  double dVar31;
  ulonglong in_f31;
  float fStack00000040;
  float fStack00000044;
  f32 fStack00000048;
  f32 fStack0000004c;
  
  uVar18 = ZEXT48(&stack0x00000000);
  lVar1 = uVar18 - 0x130;
  puVar11 = (ulonglong *)lVar1;
  *puVar11 = uVar18;
  puVar11[0x28] = in_LR;
  puVar11[0x20] = in_f26;
  puVar11[0x21] = in_f27;
  puVar11[0x22] = in_f28;
  puVar11[0x23] = in_f29;
  puVar11[0x24] = in_f30;
  puVar11[0x25] = in_f31;
  puVar11[0x1f] = unaff_r31;
  puVar11[0x1d] = unaff_r29;
  pMVar17 = g_MobyInstance;
  iVar12 = (int)param_2;
  iVar7 = *(int *)(iVar12 + 0x78);
  iVar8 = *(int *)(iVar7 + 0xc4);
  dVar29 = (double)*(float *)(iVar12 + 0x10);
  dVar28 = (double)*(float *)(iVar12 + 0x14);
  uVar3 = *(undefined4 *)(iVar12 + 0x40);
  dVar27 = (double)*(float *)(iVar12 + 0x18);
  puVar11[0x1b] = unaff_r27;
  *(undefined4 *)(puVar11 + 0x12) = uVar3;
  *(undefined4 *)((int)puVar11 + 0x94) = *(undefined4 *)(iVar12 + 0x44);
  fStack00000044 = (float)param_4;
  *(undefined4 *)(puVar11 + 0x13) = *(undefined4 *)(iVar12 + 0x48);
  fStack0000004c = (f32)param_5;
  *(undefined4 *)((int)puVar11 + 0x9c) = *(undefined4 *)(iVar12 + 0x4c);
  fStack00000040 = (float)((ulonglong)param_4 >> 0x20);
  fStack00000048 = (f32)((ulonglong)param_5 >> 0x20);
  pMVar17[iVar8].pos.x = fStack00000040;
  pMVar17[iVar8].pos.y = fStack00000044;
  pMVar17[iVar8].pos.z = fStack00000048;
  pMVar17[iVar8].pos.w = fStack0000004c;
  fVar2 = (float)(param_1 + 1.570796251296997);
  puVar11[0x1e] = unaff_r30;
  dVar25 = (double)(float)(3.141592502593994 - param_1);
  if (param_1 - (double)(float)(3.141592502593994 - param_1) < 0.0) {
    dVar25 = param_1;
  }
  fVar4 = 3.1415925 - fVar2;
  if (fVar2 - (3.1415925 - fVar2) < 0.0) {
    fVar4 = fVar2;
  }
  dVar31 = (double)(float)(-3.141592502593994 - param_1);
  if ((double)(float)(-3.141592502593994 - param_1) - dVar25 < 0.0) {
    dVar31 = dVar25;
  }
  puVar11[0x1c] = unaff_r28;
  uVar9 = *(uint *)(iVar7 + 0xa0);
  fVar5 = -3.1415925 - fVar2;
  if ((-3.1415925 - fVar2) - fVar4 < 0.0) {
    fVar5 = fVar4;
  }
  dVar26 = (double)(float)(dVar31 * dVar31);
  fVar6 = fVar5 * fVar5;
  dVar30 = (double)(float)(dVar26 * (double)(float)(dVar26 * dVar31));
  fVar2 = fVar6 * fVar6 * fVar5;
  dVar25 = (double)(float)(dVar26 * dVar30);
  fVar4 = fVar6 * fVar2;
  dVar31 = (double)((float)(dVar26 * dVar25) * 2.601887e-06 +
                   (float)(dVar25 * -0.0001980741071747616 +
                          (double)(float)(dVar30 * 0.008333025500178337 +
                                         (double)(float)((double)(float)(dVar26 * dVar31) *
                                                         -0.16666656732559204 + dVar31))));
  dVar25 = (double)(fVar6 * fVar4 * 2.601887e-06 +
                   fVar4 * -0.0001980741 +
                   fVar2 * 0.0083330255 + fVar6 * fVar5 * -0.16666657 + fVar5);
  fVar4 = -(float)(dVar25 * (double)*(float *)(iVar7 + 0xdc));
  *(float *)(puVar11 + 0xe) = fVar4;
  fVar2 = -(float)(dVar31 * (double)*(float *)(iVar7 + 0xdc));
  *(float *)((int)puVar11 + 0x74) = fVar2;
  dVar26 = 0.0;
  *(undefined4 *)(puVar11 + 0xf) = 0;
  *(float *)(iVar12 + 0x10) = fStack00000040 + fVar4;
  *(f32 *)(iVar12 + 0x18) = fStack00000048;
  *(f32 *)(iVar12 + 0x1c) = fStack0000004c;
  *(float *)(iVar12 + 0x14) = fStack00000044 + fVar2;
  _fStack00000040 = param_4;
  _fStack00000048 = param_5;
  dVar30 = (double)FastWrapRot((float)param_1,3.1415927);
  fVar2 = *(float *)(iVar12 + 0x10);
  fVar4 = *(float *)(iVar12 + 0x14);
  fVar5 = *(float *)(iVar12 + 0x18);
  *(float *)(iVar12 + 0x48) = (float)dVar30;
  *(undefined4 *)(iVar12 + 0x44) = 0;
  *(undefined4 *)((int)puVar11 + 0x8c) = *(undefined4 *)(iVar12 + 0x1c);
  *(float *)(puVar11 + 0x10) = (float)((double)fVar2 - dVar29);
  *(float *)((int)puVar11 + 0x84) = (float)((double)fVar4 - dVar28);
  *(float *)(puVar11 + 0x11) = (float)((double)fVar5 - dVar27);
  MB_GetOrientation
            ((MobyInstance *)(iVar7 + 0x60),(Vec4 *)(puVar11 + 0x10),uVar18 - 0xa0,param_2 + 0x40);
  *(undefined4 *)(iVar7 + 0xcc) = 0;
  *(undefined4 *)(iVar7 + 0xd0) = 0;
  fVar2 = *(float *)(iVar12 + 0x10);
  fVar4 = *(float *)(iVar12 + 0x14);
  uVar3 = *(undefined4 *)(iVar12 + 0x18);
  fVar6 = -(float)(dVar25 * (double)*(float *)(iVar7 + 0xbc));
  *(float *)(puVar11 + 0xe) = fVar6;
  fVar5 = *(float *)(iVar7 + 0xbc);
  *(undefined4 *)(puVar11 + 0xf) = uVar3;
  *(float *)(puVar11 + 0xe) = fVar6 + fVar2;
  *(float *)((int)puVar11 + 0x74) = -(float)(dVar31 * (double)fVar5) + fVar4;
  while (uVar9 != 0xffffffff) {
    uVar23 = ZEXT48(g_MobyInstance) + ((ulonglong)uVar9 & 0xffffff) * 0x100;
    uVar16 = uVar23 & 0xffffffff;
    pMVar13 = (MobyInstance *)uVar23;
    pvVar10 = pMVar13->pVar;
    *(f32 *)((int)pvVar10 + 0xa0) = (pMVar13->pos).x;
    *(f32 *)((int)pvVar10 + 0xa4) = (pMVar13->pos).y;
    *(f32 *)((int)pvVar10 + 0xa8) = (pMVar13->pos).z;
    *(f32 *)((int)pvVar10 + 0xac) = (pMVar13->pos).w;
    *(f32 *)((int)pvVar10 + 0xb0) = (pMVar13->rotation).x;
    *(f32 *)((int)pvVar10 + 0xb4) = (pMVar13->rotation).y;
    *(f32 *)((int)pvVar10 + 0xb8) = (pMVar13->rotation).z;
    *(f32 *)((int)pvVar10 + 0xbc) = (pMVar13->rotation).w;
    fVar2 = *(float *)((int)pvVar10 + 0xc4);
    fVar4 = *(float *)(puVar11 + 0xe);
    fVar5 = -(float)((double)DAT_008779bc * dVar25) + fVar4;
    fVar6 = -(float)((double)DAT_008779bc * dVar31) + *(float *)((int)puVar11 + 0x74);
    fVar14 = -(float)((double)fVar2 * dVar25) + fVar5;
    (pMVar13->pos).z = *(f32 *)(puVar11 + 0xf);
    (pMVar13->pos).w = fVar4;
    fVar5 = fVar5 - fVar14;
    (pMVar13->pos).x = fVar14;
    fVar2 = -(float)((double)fVar2 * dVar31) + fVar6;
    dVar29 = ABS((double)fVar5);
    fVar6 = fVar6 - fVar2;
    (pMVar13->pos).y = fVar2;
    (pMVar13->pos).z = *(f32 *)(iVar12 + 0x18);
    *(float *)(puVar11 + 0x14) = fVar5;
    dVar28 = ABS((double)fVar6);
    *(float *)((int)puVar11 + 0xa4) = fVar6;
    *(float *)(puVar11 + 0x15) = (float)(dVar29 - dVar28);
    uVar23 = (ulonglong)(*(uint *)(puVar11 + 0x14) >> 0x1c) & 8 |
             (ulonglong)(*(uint *)(puVar11 + 0x15) >> 0x1e) & 2 |
             (ulonglong)(*(uint *)((int)puVar11 + 0xa4) >> 0x1d) & 4;
    dVar27 = ABS((double)*(float *)(puVar11 + 0x14));
    if ((double)*(float *)(puVar11 + 0x15) - dVar26 < 0.0) {
      dVar27 = dVar28;
    }
    fVar2 = *(float *)(&g_atanQuadrantTable + (int)(uVar23 << 2));
    dVar28 = ABS((double)*(float *)((int)puVar11 + 0xa4));
    if ((double)*(float *)(puVar11 + 0x15) - dVar26 < 0.0) {
      dVar28 = dVar29;
    }
    fVar4 = *(float *)(((uint)(uVar23 << 2) | 0x735900) + 4);
    dVar29 = dVar26;
    if (dVar26 < dVar27) {
      lVar21 = uVar18 - 0x120;
      lVar20 = uVar18 - 0x84;
      lVar19 = uVar18 - 0x74;
      lVar24 = 2;
      fVar5 = (float)(dVar28 - dVar27) / (float)(dVar28 + dVar27);
      fVar6 = fVar5 * fVar5;
      *(float *)(puVar11 + 0x17) = fVar5;
      *(float *)(puVar11 + 0x16) = fVar5;
      *(float *)((int)puVar11 + 0xb4) = fVar5;
      *(float *)((int)puVar11 + 0xac) = fVar5;
      fVar5 = fVar6 * fVar6;
      *(float *)(puVar11 + 0x16) = *(float *)(puVar11 + 0x16) * fVar6;
      *(float *)((int)puVar11 + 0xb4) = *(float *)((int)puVar11 + 0xb4) * fVar5;
      *(float *)(puVar11 + 0x17) = *(float *)(puVar11 + 0x17) * fVar5 * fVar6;
      do {
        *(float *)((int)lVar21 + 0xac) = *(float *)((int)lVar21 + 0x9c) * fVar5 * fVar5;
        iVar7 = (int)lVar20;
        lVar21 = lVar21 + 8;
        lVar20 = lVar20 + 8;
        *(float *)((int)lVar19 + 4) = *(float *)(iVar7 + 4) * fVar5 * fVar5;
        lVar19 = lVar19 + 8;
        lVar24 = lVar24 + -1;
      } while (lVar24 != 0);
      lVar21 = uVar18 - 0x84;
      lVar24 = 4;
      pfVar22 = (float *)&DAT_007358e0;
      lVar19 = lVar21;
      lVar20 = lVar1;
      do {
        fVar5 = *pfVar22;
        fVar6 = pfVar22[1];
        pfVar22 = pfVar22 + 2;
        *(float *)((int)lVar20 + 0xac) = *(float *)((int)lVar20 + 0xac) * fVar5;
        lVar20 = lVar20 + 8;
        *(float *)((int)lVar19 + 4) = *(float *)((int)lVar19 + 4) * fVar6;
        lVar19 = lVar19 + 8;
        lVar24 = lVar24 + -1;
      } while (lVar24 != 0);
      lVar20 = 2;
      lVar19 = lVar1;
      dVar27 = dVar26;
      do {
        iVar7 = (int)lVar19;
        iVar15 = (int)lVar21;
        lVar19 = lVar19 + 0x10;
        lVar21 = lVar21 + 0x10;
        dVar27 = (double)((float)(dVar27 + (double)*(float *)(iVar7 + 0xac)) +
                          *(float *)(iVar15 + 4) + *(float *)(iVar15 + 8) + *(float *)(iVar15 + 0xc)
                         );
        lVar20 = lVar20 + -1;
      } while (lVar20 != 0);
      dVar29 = (double)((float)(dVar27 + 0.7853981852531433) * fVar2 + fVar4);
    }
    dVar27 = (double)FastWrapRot((float)dVar29,(float)dVar26);
    (pMVar13->rotation).z = (float)dVar27;
    (pMVar13->rotation).y = 0.0;
    UpdateMobyAnimFrame(uVar16);
    UpdateMobyTransform(pMVar13);
    pMVar13->modeBits = pMVar13->modeBits | (NO_POST_UPDATE|NO_UPDATE);
    GetBonePosition(uVar16,1,uVar18 - 0xc0);
    *(float *)(puVar11 + 0x10) = (pMVar13->pos).x - *(float *)((int)pvVar10 + 0xa0);
    *(float *)((int)puVar11 + 0x84) = (pMVar13->pos).y - *(float *)((int)pvVar10 + 0xa4);
    *(float *)(puVar11 + 0x11) = (pMVar13->pos).z - *(float *)((int)pvVar10 + 0xa8);
    *(f32 *)((int)puVar11 + 0x8c) = (pMVar13->pos).w;
    MB_GetOrientation
              ((MobyInstance *)((int)pvVar10 + 0x20),(Vec4 *)(puVar11 + 0x10),ZEXT48(pvVar10) + 0xb0
               ,uVar16 + 0x40);
    *(f32 *)((int)pvVar10 + 0xa0) = (pMVar13->pos).x;
    *(f32 *)((int)pvVar10 + 0xa4) = (pMVar13->pos).y;
    *(f32 *)((int)pvVar10 + 0xa8) = (pMVar13->pos).z;
    *(f32 *)((int)pvVar10 + 0xac) = (pMVar13->pos).w;
    *(f32 *)((int)pvVar10 + 0xb0) = (pMVar13->rotation).x;
    uVar9 = *(uint *)((int)pvVar10 + 0xc0);
    *(f32 *)((int)pvVar10 + 0xb4) = (pMVar13->rotation).y;
    *(f32 *)((int)pvVar10 + 0xb8) = (pMVar13->rotation).z;
    *(f32 *)((int)pvVar10 + 0xbc) = (pMVar13->rotation).w;
  }
  pMVar17[iVar8].state = '\0';
  pMVar17[iVar8].modeBits = pMVar17[iVar8].modeBits | (NO_POST_UPDATE|NO_UPDATE);
  return;
}


// 0x0476cb0 (0xc84 bytes)
// inlined: FastAtan2 @0x476f48, FastAtan2 @0x47719c, FastAtan2 @0x4774b0, FastAtan2 @0x477684
// strings: 0065855c: 'train engine has no cars!  Deleting moby instance %d\n'

void M822_00476cb0(longlong param_1)

{
  longlong lVar1;
  float fVar2;
  float fVar3;
  f32 fVar4;
  f32 fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  void *pvVar11;
  int iVar12;
  void *pvVar13;
  uint uVar14;
  ulonglong *puVar15;
  MobyInstance *moby;
  MobyInstance *pMVar16;
  int iVar17;
  float fVar18;
  MobyInstance *pMVar19;
  ulonglong uVar20;
  longlong lVar21;
  ulonglong uVar22;
  ulonglong uVar23;
  float *pfVar25;
  longlong lVar24;
  longlong lVar26;
  ulonglong unaff_r23;
  ulonglong unaff_r24;
  ulonglong unaff_r25;
  ulonglong unaff_r26;
  ulonglong unaff_r27;
  ulonglong unaff_r28;
  ulonglong unaff_r29;
  ulonglong unaff_r30;
  ulonglong unaff_r31;
  ulonglong in_LR;
  longlong lVar27;
  double dVar28;
  undefined8 uVar29;
  double dVar30;
  double dVar31;
  double dVar32;
  ulonglong in_f22;
  ulonglong in_f23;
  ulonglong in_f24;
  double dVar33;
  ulonglong in_f25;
  double dVar34;
  double dVar35;
  ulonglong in_f26;
  double dVar36;
  double dVar37;
  ulonglong in_f27;
  double dVar38;
  ulonglong in_f28;
  double dVar39;
  ulonglong in_f29;
  double dVar40;
  ulonglong in_f30;
  double dVar41;
  ulonglong in_f31;
  double dVar42;
  Vec4 local_180 [24];
  
  uVar20 = ZEXT48(&stack0x00000000);
  lVar1 = uVar20 - 0x200;
  puVar15 = (ulonglong *)lVar1;
  *puVar15 = uVar20;
  puVar15[0x42] = in_LR;
  puVar15[0x36] = in_f22;
  puVar15[0x37] = in_f23;
  puVar15[0x38] = in_f24;
  puVar15[0x39] = in_f25;
  puVar15[0x3a] = in_f26;
  puVar15[0x3b] = in_f27;
  puVar15[0x3c] = in_f28;
  puVar15[0x3d] = in_f29;
  puVar15[0x3e] = in_f30;
  puVar15[0x3f] = in_f31;
  puVar15[0x35] = unaff_r31;
  puVar15[0x2e] = unaff_r24;
  puVar15[0x34] = unaff_r30;
  pMVar16 = g_MobyInstance;
  moby = (MobyInstance *)param_1;
  pvVar11 = moby->pVar;
  iVar12 = *(int *)((int)pvVar11 + 0xc4);
  dVar41 = (double)(moby->pos).x;
  puVar15[0x33] = unaff_r29;
  fVar4 = (moby->rotation).x;
  pMVar16 = pMVar16 + iVar12;
  dVar40 = (double)(moby->pos).y;
  dVar39 = (double)(moby->pos).z;
  pvVar13 = pMVar16->pVar;
  moby->unk72 = -1;
  fVar5 = (moby->rotation).y;
  *(f32 *)(puVar15 + 0xe) = fVar4;
  fVar4 = (moby->rotation).z;
  *(f32 *)((int)puVar15 + 0x74) = fVar5;
  puVar15[0x32] = unaff_r28;
  fVar5 = (moby->rotation).w;
  uVar14 = *(uint *)((int)pvVar11 + 0xa0);
  *(f32 *)(puVar15 + 0xf) = fVar4;
  puVar15[0x31] = unaff_r27;
  puVar15[0x30] = unaff_r26;
  puVar15[0x2f] = unaff_r25;
  puVar15[0x2d] = unaff_r23;
  *(f32 *)((int)puVar15 + 0x7c) = fVar5;
  if (uVar14 == 0xffffffff) {
    printf("train engine has no cars!  Deleting moby instance %d\n",
                 *(undefined4 *)((int)pvVar11 + 0xb8));
    DeleteMoby(moby);
  }
  else {
    fVar2 = (float)(dVar40 - (double)(pMVar16->pos).y);
    fVar3 = (float)(dVar41 - (double)(pMVar16->pos).x);
    fVar2 = *(float *)((int)pvVar11 + 0xdc) - SQRT(fVar3 * fVar3 + fVar2 * fVar2);
    *(float *)((int)pvVar13 + 0xfc) = fVar2;
    dVar38 = 0.0;
    if (fVar2 < 0.0) {
      *(undefined4 *)((int)pvVar13 + 0xfc) = 0;
    }
    UpdateMoby_42(pMVar16);
    dVar42 = (double)*(float *)((int)pvVar11 + 200);
    dVar36 = 3.1415927410125732;
    dVar28 = (double)FastWrapRot((moby->rotation).z,3.1415927);
    MB_SphericalToVector((float)dVar42,(float)dVar28,(moby->rotation).y,&local_180[0].x);
    fVar3 = *(float *)((int)puVar15 + 0x84);
    fVar6 = *(float *)(puVar15 + 0x10);
    fVar7 = *(float *)(puVar15 + 0x11);
    fVar8 = (moby->pos).z;
    dVar34 = (double)(moby->rotation).z;
    dVar42 = (double)SQRT(fVar7 * fVar7 + fVar6 * fVar6 + fVar3 * fVar3);
    fVar2 = (float)((double)*(float *)((int)pvVar11 + 200) / dVar42);
    dVar28 = dVar38;
    if (dVar38 - dVar42 < 0.0) {
      dVar28 = (double)(fVar6 * fVar2);
    }
    dVar30 = dVar38;
    if (dVar38 - dVar42 < 0.0) {
      dVar30 = (double)(fVar3 * fVar2);
    }
    dVar31 = dVar38;
    if (dVar38 - dVar42 < 0.0) {
      dVar31 = (double)(fVar7 * fVar2);
    }
    if (dVar42 - dVar38 < 0.0) {
      dVar28 = (double)(fVar6 * fVar2);
    }
    if (dVar42 - dVar38 < 0.0) {
      dVar30 = (double)(fVar3 * fVar2);
    }
    if (dVar42 - dVar38 < 0.0) {
      dVar31 = (double)(fVar7 * fVar2);
    }
    fVar2 = (float)((double)(moby->pos).x + dVar28);
    fVar3 = (float)((double)(moby->pos).y + dVar30);
    *(float *)(puVar15 + 0x10) = (float)dVar28;
    *(float *)((int)puVar15 + 0x84) = (float)dVar30;
    *(float *)(puVar15 + 0x11) = (float)dVar31;
    (moby->pos).x = fVar2;
    (moby->pos).y = fVar3;
    (moby->pos).z = (float)((double)fVar8 + dVar31);
    fVar2 = (pMVar16->pos).x - fVar2;
    fVar3 = (pMVar16->pos).y - fVar3;
    dVar30 = ABS((double)fVar2);
    dVar31 = ABS((double)fVar3);
    *(float *)((int)puVar15 + 0xd4) = fVar2;
    *(float *)(puVar15 + 0x1b) = fVar3;
    *(float *)((int)puVar15 + 0xdc) = (float)(dVar30 - dVar31);
    dVar28 = 0.7853981852531433;
    uVar22 = (ulonglong)(*(uint *)((int)puVar15 + 0xd4) >> 0x1c) & 8 |
             (ulonglong)(*(uint *)((int)puVar15 + 0xdc) >> 0x1e) & 2 |
             (ulonglong)(*(uint *)(puVar15 + 0x1b) >> 0x1d) & 4;
    dVar42 = ABS((double)*(float *)((int)puVar15 + 0xd4));
    if ((double)*(float *)((int)puVar15 + 0xdc) - dVar38 < 0.0) {
      dVar42 = dVar31;
    }
    fVar3 = *(float *)(&g_atanQuadrantTable + (int)(uVar22 << 2));
    fVar2 = *(float *)(((uint)(uVar22 << 2) | 0x735900) + 4);
    dVar31 = ABS((double)*(float *)(puVar15 + 0x1b));
    if ((double)*(float *)((int)puVar15 + 0xdc) - dVar38 < 0.0) {
      dVar31 = dVar30;
    }
    dVar30 = dVar38;
    if (dVar38 < dVar42) {
      lVar21 = uVar20 - 0x1f0;
      lVar24 = uVar20 - 0xc0;
      lVar26 = uVar20 - 0xb0;
      lVar27 = 2;
      fVar6 = (float)(dVar31 - dVar42) / (float)(dVar31 + dVar42);
      fVar7 = fVar6 * fVar6;
      *(float *)(puVar15 + 0x28) = fVar6;
      *(float *)((int)puVar15 + 0x144) = fVar6;
      *(float *)(puVar15 + 0x29) = fVar6;
      *(float *)((int)puVar15 + 0x14c) = fVar6;
      fVar6 = fVar7 * fVar7;
      *(float *)((int)puVar15 + 0x144) = *(float *)((int)puVar15 + 0x144) * fVar7;
      *(float *)(puVar15 + 0x29) = *(float *)(puVar15 + 0x29) * fVar6;
      *(float *)((int)puVar15 + 0x14c) = *(float *)((int)puVar15 + 0x14c) * fVar6 * fVar7;
      do {
        *(float *)((int)lVar21 + 0x140) = *(float *)((int)lVar21 + 0x130) * fVar6 * fVar6;
        iVar12 = (int)lVar24;
        lVar21 = lVar21 + 8;
        lVar24 = lVar24 + 8;
        *(float *)((int)lVar26 + 4) = *(float *)(iVar12 + 4) * fVar6 * fVar6;
        lVar26 = lVar26 + 8;
        lVar27 = lVar27 + -1;
      } while (lVar27 != 0);
      lVar27 = 4;
      lVar26 = uVar20 - 0xc0;
      pfVar25 = (float *)&DAT_007358e0;
      lVar21 = lVar1;
      lVar24 = lVar26;
      do {
        fVar6 = *pfVar25;
        fVar7 = pfVar25[1];
        pfVar25 = pfVar25 + 2;
        *(float *)((int)lVar21 + 0x140) = *(float *)((int)lVar21 + 0x140) * fVar6;
        lVar21 = lVar21 + 8;
        *(float *)((int)lVar24 + 4) = *(float *)((int)lVar24 + 4) * fVar7;
        lVar24 = lVar24 + 8;
        lVar27 = lVar27 + -1;
      } while (lVar27 != 0);
      lVar24 = 2;
      lVar21 = lVar1;
      dVar42 = dVar38;
      do {
        iVar12 = (int)lVar21;
        lVar21 = lVar21 + 0x10;
        iVar17 = (int)lVar26;
        lVar26 = lVar26 + 0x10;
        dVar42 = (double)((float)(dVar42 + (double)*(float *)(iVar12 + 0x140)) +
                          *(float *)(iVar17 + 4) + *(float *)(iVar17 + 8) + *(float *)(iVar17 + 0xc)
                         );
        lVar24 = lVar24 + -1;
      } while (lVar24 != 0);
      dVar30 = (double)((float)(dVar42 + 0.7853981852531433) * fVar3 + fVar2);
    }
    uVar29 = FastWrapRot((float)dVar30,(float)dVar36);
    dVar37 = 60.0;
    dVar35 = 0.25;
    dVar31 = 0.5;
    dVar33 = 0.01745329238474369;
    fVar2 = (*(float *)((int)pvVar11 + 200) * 60.0) / *(float *)((int)pvVar11 + 0xc0);
    dVar42 = (double)MB_DeltAngSpeed
                               (dVar34,uVar29,(double)(fVar2 * 0.25 * 0.017453292 * g_FrameTimeSq),
                                (double)(fVar2 * 0.5 * 0.017453292 * g_FrameTimeSq),
                                (double)(fVar2 * g_FrameTime));
    (moby->rotation).z = (float)dVar42;
    fVar7 = g_FrameTimeSq;
    fVar2 = (moby->pos).y - (pMVar16->pos).y;
    fVar3 = (moby->pos).x - (pMVar16->pos).x;
    fVar6 = (pMVar16->pos).z - (moby->pos).z;
    dVar30 = ABS((double)fVar6);
    fVar3 = SQRT(fVar3 * fVar3 + fVar2 * fVar2);
    fVar2 = (moby->rotation).y;
    dVar34 = (double)g_FrameTime;
    *(float *)((int)puVar15 + 0xcc) = fVar6;
    dVar36 = ABS((double)fVar3);
    *(float *)(puVar15 + 0x19) = fVar3;
    *(float *)(puVar15 + 0x1a) = (float)(dVar36 - dVar30);
    fVar3 = *(float *)((int)pvVar11 + 200);
    fVar6 = *(float *)((int)pvVar11 + 0xc0);
    uVar22 = (ulonglong)(*(uint *)(puVar15 + 0x19) >> 0x1c) & 8 |
             (ulonglong)(*(uint *)(puVar15 + 0x1a) >> 0x1e) & 2 |
             (ulonglong)(*(uint *)((int)puVar15 + 0xcc) >> 0x1d) & 4;
    uVar23 = uVar22 << 2 | 0x735900;
    lVar21 = uVar22 << 2;
    dVar42 = ABS((double)*(float *)(puVar15 + 0x19));
    if ((double)*(float *)(puVar15 + 0x1a) - dVar38 < 0.0) {
      dVar42 = dVar30;
    }
    fVar8 = *(float *)(&g_atanQuadrantTable + (int)lVar21);
    dVar30 = ABS((double)*(float *)((int)puVar15 + 0xcc));
    if ((double)*(float *)(puVar15 + 0x1a) - dVar38 < 0.0) {
      dVar30 = dVar36;
    }
    fVar9 = *(float *)((int)uVar23 + 4);
    dVar36 = dVar38;
    if (dVar38 < dVar42) {
      lVar21 = uVar20 - 0x1f0;
      lVar26 = uVar20 - 0xd0;
      lVar24 = uVar20 - 0xe0;
      lVar27 = 2;
      fVar10 = (float)(dVar30 - dVar42) / (float)(dVar30 + dVar42);
      fVar18 = fVar10 * fVar10;
      *(float *)(puVar15 + 0x24) = fVar10;
      *(float *)((int)puVar15 + 0x124) = fVar10;
      *(float *)(puVar15 + 0x25) = fVar10;
      *(float *)((int)puVar15 + 300) = fVar10;
      fVar10 = fVar18 * fVar18;
      *(float *)((int)puVar15 + 0x124) = *(float *)((int)puVar15 + 0x124) * fVar18;
      *(float *)(puVar15 + 0x25) = *(float *)(puVar15 + 0x25) * fVar10;
      *(float *)((int)puVar15 + 300) = *(float *)((int)puVar15 + 300) * fVar10 * fVar18;
      do {
        *(float *)((int)lVar21 + 0x120) = *(float *)((int)lVar21 + 0x110) * fVar10 * fVar10;
        iVar12 = (int)lVar24;
        lVar24 = lVar24 + 8;
        lVar21 = lVar21 + 8;
        *(float *)((int)lVar26 + 4) = *(float *)(iVar12 + 4) * fVar10 * fVar10;
        lVar26 = lVar26 + 8;
        lVar27 = lVar27 + -1;
      } while (lVar27 != 0);
      lVar27 = 4;
      lVar26 = uVar20 - 0xe0;
      uVar23 = ZEXT48(&DAT_007358e0);
      lVar21 = lVar1;
      lVar24 = lVar26;
      do {
        pfVar25 = (float *)uVar23;
        fVar10 = pfVar25[1];
        uVar23 = uVar23 + 8;
        *(float *)((int)lVar21 + 0x120) = *(float *)((int)lVar21 + 0x120) * *pfVar25;
        lVar21 = lVar21 + 8;
        *(float *)((int)lVar24 + 4) = *(float *)((int)lVar24 + 4) * fVar10;
        lVar24 = lVar24 + 8;
        lVar27 = lVar27 + -1;
      } while (lVar27 != 0);
      lVar24 = 2;
      lVar21 = lVar1;
      dVar42 = dVar38;
      do {
        iVar12 = (int)lVar21;
        iVar17 = (int)lVar26;
        lVar21 = lVar21 + 0x10;
        lVar26 = lVar26 + 0x10;
        dVar42 = (double)((float)(dVar42 + (double)*(float *)(iVar12 + 0x120)) +
                          *(float *)(iVar17 + 4) + *(float *)(iVar17 + 8) + *(float *)(iVar17 + 0xc)
                         );
        lVar24 = lVar24 + -1;
      } while (lVar24 != 0);
      dVar36 = (double)((float)(dVar42 + dVar28) * fVar8 + fVar9);
    }
    dVar42 = (double)((float)((double)fVar3 * dVar37) / fVar6);
    dVar42 = (double)MB_DeltAngSpeed
                               ((double)fVar2,dVar36,
                                (double)((float)((double)(float)(dVar42 * dVar35) * dVar33) * fVar7)
                                ,(double)((float)((double)(float)(dVar42 * dVar31) * dVar33) * fVar7
                                         ),(double)(float)(dVar42 * dVar34),lVar21,uVar23,
                                (int)pvVar11 + 0xd0);
    (moby->rotation).y = (float)dVar42;
    GetBonePosition(param_1,0,uVar20 - 0x170);
    while (uVar14 != 0xffffffff) {
      uVar23 = ZEXT48(g_MobyInstance) + ((ulonglong)uVar14 & 0xffffff) * 0x100;
      uVar22 = uVar23 & 0xffffffff;
      pMVar19 = (MobyInstance *)uVar23;
      pvVar13 = pMVar19->pVar;
      pMVar19->unk72 = -1;
      GetBonePosition(uVar22,0,uVar20 - 0x160);
      fVar7 = *(float *)((int)puVar15 + 0x94);
      fVar2 = (float)((double)*(float *)((int)puVar15 + 0xa4) - (double)fVar7);
      fVar8 = *(float *)(puVar15 + 0x12);
      fVar3 = (float)((double)*(float *)(puVar15 + 0x14) - (double)fVar8);
      dVar42 = (double)DAT_008779bc;
      dVar31 = (double)(pMVar19->pos).y;
      dVar33 = (double)(pMVar19->pos).x;
      dVar35 = (double)(pMVar19->pos).z;
      fVar6 = *(float *)(puVar15 + 0x13);
      dVar30 = (double)SQRT(fVar3 * fVar3 + fVar2 * fVar2);
      fVar9 = *(float *)((int)pvVar13 + 0xc4);
      (pMVar19->pos).w = *(f32 *)((int)puVar15 + 0xac);
      fVar6 = (float)((double)fVar6 - dVar35);
      dVar34 = (double)(fVar2 * (float)(dVar42 / dVar30));
      dVar36 = (double)(fVar3 * (float)(dVar42 / dVar30));
      dVar42 = dVar38;
      if (dVar38 - dVar30 < 0.0) {
        dVar42 = dVar34;
      }
      dVar37 = dVar38;
      if (dVar38 - dVar30 < 0.0) {
        dVar37 = dVar36;
      }
      if (dVar30 - dVar38 < 0.0) {
        dVar42 = dVar34;
      }
      if (dVar30 - dVar38 < 0.0) {
        dVar37 = dVar36;
      }
      dVar34 = (double)(float)(dVar42 + (double)fVar7);
      dVar36 = (double)(float)(dVar37 + (double)fVar8);
      fVar3 = (float)(dVar34 - dVar31);
      fVar7 = (float)(dVar36 - dVar33);
      dVar30 = (double)SQRT(fVar6 * fVar6 + fVar7 * fVar7 + fVar3 * fVar3);
      fVar2 = (float)((double)(float)(dVar30 - (double)fVar9) / dVar30);
      dVar42 = dVar38;
      if (dVar38 - dVar30 < 0.0) {
        dVar42 = (double)(fVar3 * fVar2);
      }
      dVar37 = dVar38;
      if (dVar38 - dVar30 < 0.0) {
        dVar37 = (double)(fVar7 * fVar2);
      }
      dVar32 = dVar38;
      if (dVar38 - dVar30 < 0.0) {
        dVar32 = (double)(fVar6 * fVar2);
      }
      if (dVar30 - dVar38 < 0.0) {
        dVar42 = (double)(fVar3 * fVar2);
      }
      if (dVar30 - dVar38 < 0.0) {
        dVar37 = (double)(fVar7 * fVar2);
      }
      if (dVar30 - dVar38 < 0.0) {
        dVar32 = (double)(fVar6 * fVar2);
      }
      fVar2 = (float)(dVar42 + dVar31);
      fVar3 = (float)(dVar37 + dVar33);
      fVar6 = (float)(dVar34 - (double)fVar2);
      fVar7 = (float)(dVar36 - (double)fVar3);
      (pMVar19->pos).y = fVar2;
      (pMVar19->pos).x = fVar3;
      (pMVar19->pos).z = (float)(dVar32 + dVar35);
      dVar36 = ABS((double)fVar6);
      dVar34 = ABS((double)fVar7);
      *(float *)((int)puVar15 + 0xbc) = fVar7;
      *(float *)(puVar15 + 0x18) = fVar6;
      *(float *)((int)puVar15 + 0xc4) = (float)(dVar34 - dVar36);
      uVar23 = (ulonglong)(*(uint *)((int)puVar15 + 0xbc) >> 0x1c) & 8 |
               (ulonglong)(*(uint *)((int)puVar15 + 0xc4) >> 0x1e) & 2 |
               (ulonglong)(*(uint *)(puVar15 + 0x18) >> 0x1d) & 4;
      dVar42 = ABS((double)*(float *)((int)puVar15 + 0xbc));
      if ((double)*(float *)((int)puVar15 + 0xc4) - dVar38 < 0.0) {
        dVar42 = dVar36;
      }
      fVar2 = *(float *)(&g_atanQuadrantTable + (int)(uVar23 << 2));
      dVar36 = ABS((double)*(float *)(puVar15 + 0x18));
      if ((double)*(float *)((int)puVar15 + 0xc4) - dVar38 < 0.0) {
        dVar36 = dVar34;
      }
      fVar3 = *(float *)(((uint)(uVar23 << 2) | 0x735900) + 4);
      dVar34 = dVar38;
      if (dVar38 < dVar42) {
        lVar21 = uVar20 - 0x1f0;
        lVar24 = uVar20 - 0x100;
        lVar26 = uVar20 - 0xf0;
        lVar27 = 2;
        fVar6 = (float)(dVar36 - dVar42) / (float)(dVar36 + dVar42);
        fVar7 = fVar6 * fVar6;
        *(float *)(puVar15 + 0x20) = fVar6;
        *(float *)((int)puVar15 + 0x104) = fVar6;
        *(float *)(puVar15 + 0x21) = fVar6;
        *(float *)((int)puVar15 + 0x10c) = fVar6;
        fVar6 = fVar7 * fVar7;
        *(float *)((int)puVar15 + 0x104) = *(float *)((int)puVar15 + 0x104) * fVar7;
        *(float *)(puVar15 + 0x21) = *(float *)(puVar15 + 0x21) * fVar6;
        *(float *)((int)puVar15 + 0x10c) = *(float *)((int)puVar15 + 0x10c) * fVar6 * fVar7;
        do {
          *(float *)((int)lVar21 + 0x100) = *(float *)((int)lVar21 + 0xf0) * fVar6 * fVar6;
          iVar12 = (int)lVar24;
          lVar21 = lVar21 + 8;
          lVar24 = lVar24 + 8;
          *(float *)((int)lVar26 + 4) = *(float *)(iVar12 + 4) * fVar6 * fVar6;
          lVar26 = lVar26 + 8;
          lVar27 = lVar27 + -1;
        } while (lVar27 != 0);
        lVar27 = 4;
        lVar26 = uVar20 - 0x100;
        pfVar25 = (float *)&DAT_007358e0;
        lVar21 = lVar1;
        lVar24 = lVar26;
        do {
          fVar6 = *pfVar25;
          fVar7 = pfVar25[1];
          pfVar25 = pfVar25 + 2;
          *(float *)((int)lVar21 + 0x100) = *(float *)((int)lVar21 + 0x100) * fVar6;
          lVar21 = lVar21 + 8;
          *(float *)((int)lVar24 + 4) = *(float *)((int)lVar24 + 4) * fVar7;
          lVar24 = lVar24 + 8;
          lVar27 = lVar27 + -1;
        } while (lVar27 != 0);
        lVar24 = 2;
        lVar21 = lVar1;
        dVar42 = dVar38;
        do {
          iVar12 = (int)lVar21;
          lVar21 = lVar21 + 0x10;
          iVar17 = (int)lVar26;
          lVar26 = lVar26 + 0x10;
          dVar42 = (double)((float)(dVar42 + (double)*(float *)(iVar12 + 0x100)) +
                            *(float *)(iVar17 + 4) + *(float *)(iVar17 + 8) +
                           *(float *)(iVar17 + 0xc));
          lVar24 = lVar24 + -1;
        } while (lVar24 != 0);
        dVar34 = (double)((float)(dVar42 + dVar28) * fVar2 + fVar3);
      }
      dVar42 = (double)FastWrapRot((float)dVar34,(float)dVar38);
      (pMVar19->rotation).z = (float)dVar42;
      fVar2 = (pMVar19->pos).y - *(float *)((int)puVar15 + 0x94);
      fVar3 = (pMVar19->pos).x - *(float *)(puVar15 + 0x12);
      fVar6 = *(float *)(puVar15 + 0x13) - (pMVar19->pos).z;
      fVar2 = SQRT(fVar3 * fVar3 + fVar2 * fVar2);
      *(float *)((int)puVar15 + 0xb4) = fVar6;
      dVar36 = ABS((double)fVar6);
      dVar34 = ABS((double)fVar2);
      *(float *)(puVar15 + 0x16) = fVar2;
      *(float *)(puVar15 + 0x17) = (float)(dVar34 - dVar36);
      uVar23 = (ulonglong)(*(uint *)(puVar15 + 0x16) >> 0x1c) & 8 |
               (ulonglong)(*(uint *)(puVar15 + 0x17) >> 0x1e) & 2 |
               (ulonglong)(*(uint *)((int)puVar15 + 0xb4) >> 0x1d) & 4;
      dVar42 = ABS((double)*(float *)(puVar15 + 0x16));
      if ((double)*(float *)(puVar15 + 0x17) - dVar38 < 0.0) {
        dVar42 = dVar36;
      }
      fVar2 = *(float *)(&g_atanQuadrantTable + (int)(uVar23 << 2));
      dVar36 = ABS((double)*(float *)((int)puVar15 + 0xb4));
      if ((double)*(float *)(puVar15 + 0x17) - dVar38 < 0.0) {
        dVar36 = dVar34;
      }
      fVar3 = *(float *)(((uint)(uVar23 << 2) | 0x735900) + 4);
      dVar34 = dVar38;
      if (dVar38 < dVar42) {
        lVar21 = uVar20 - 0x1f0;
        lVar26 = uVar20 - 0x110;
        lVar24 = uVar20 - 0x120;
        lVar27 = 2;
        fVar6 = (float)(dVar36 - dVar42) / (float)(dVar36 + dVar42);
        fVar7 = fVar6 * fVar6;
        *(float *)(puVar15 + 0x1c) = fVar6;
        *(float *)((int)puVar15 + 0xe4) = fVar6;
        *(float *)(puVar15 + 0x1d) = fVar6;
        *(float *)((int)puVar15 + 0xec) = fVar6;
        fVar6 = fVar7 * fVar7;
        *(float *)((int)puVar15 + 0xe4) = *(float *)((int)puVar15 + 0xe4) * fVar7;
        *(float *)(puVar15 + 0x1d) = *(float *)(puVar15 + 0x1d) * fVar6;
        *(float *)((int)puVar15 + 0xec) = *(float *)((int)puVar15 + 0xec) * fVar6 * fVar7;
        do {
          *(float *)((int)lVar21 + 0xe0) = *(float *)((int)lVar21 + 0xd0) * fVar6 * fVar6;
          iVar12 = (int)lVar24;
          lVar24 = lVar24 + 8;
          lVar21 = lVar21 + 8;
          *(float *)((int)lVar26 + 4) = *(float *)(iVar12 + 4) * fVar6 * fVar6;
          lVar26 = lVar26 + 8;
          lVar27 = lVar27 + -1;
        } while (lVar27 != 0);
        lVar27 = 4;
        lVar26 = uVar20 - 0x120;
        pfVar25 = (float *)&DAT_007358e0;
        lVar21 = lVar1;
        lVar24 = lVar26;
        do {
          fVar6 = *pfVar25;
          fVar7 = pfVar25[1];
          pfVar25 = pfVar25 + 2;
          *(float *)((int)lVar21 + 0xe0) = *(float *)((int)lVar21 + 0xe0) * fVar6;
          lVar21 = lVar21 + 8;
          *(float *)((int)lVar24 + 4) = *(float *)((int)lVar24 + 4) * fVar7;
          lVar24 = lVar24 + 8;
          lVar27 = lVar27 + -1;
        } while (lVar27 != 0);
        lVar24 = 2;
        lVar21 = lVar1;
        dVar42 = dVar38;
        do {
          iVar12 = (int)lVar21;
          iVar17 = (int)lVar26;
          lVar21 = lVar21 + 0x10;
          lVar26 = lVar26 + 0x10;
          dVar42 = (double)((float)(dVar42 + (double)*(float *)(iVar12 + 0xe0)) +
                            *(float *)(iVar17 + 4) + *(float *)(iVar17 + 8) +
                           *(float *)(iVar17 + 0xc));
          lVar24 = lVar24 + -1;
        } while (lVar24 != 0);
        dVar34 = (double)((float)(dVar42 + dVar28) * fVar2 + fVar3);
      }
      (pMVar19->rotation).y = (float)-dVar34;
      UpdateMobyAnimFrame(uVar22);
      UpdateMobyTransform(pMVar19);
      pMVar19->modeBits = pMVar19->modeBits | (NO_POST_UPDATE|NO_UPDATE);
      GetBonePosition(uVar22,1,uVar20 - 0x170);
      *(float *)(puVar15 + 0x10) = (pMVar19->pos).x - *(float *)((int)pvVar13 + 0xa0);
      *(float *)((int)puVar15 + 0x84) = (pMVar19->pos).y - *(float *)((int)pvVar13 + 0xa4);
      *(float *)(puVar15 + 0x11) = (pMVar19->pos).z - *(float *)((int)pvVar13 + 0xa8);
      *(f32 *)((int)puVar15 + 0x8c) = (pMVar19->pos).w;
      MB_GetOrientation
                ((MobyInstance *)((int)pvVar13 + 0x20),local_180,ZEXT48(pvVar13) + 0xb0,
                 uVar22 + 0x40);
      *(f32 *)((int)pvVar13 + 0xa0) = (pMVar19->pos).x;
      *(f32 *)((int)pvVar13 + 0xa4) = (pMVar19->pos).y;
      *(f32 *)((int)pvVar13 + 0xa8) = (pMVar19->pos).z;
      *(f32 *)((int)pvVar13 + 0xac) = (pMVar19->pos).w;
      *(f32 *)((int)pvVar13 + 0xb0) = (pMVar19->rotation).x;
      uVar14 = *(uint *)((int)pvVar13 + 0xc0);
      *(f32 *)((int)pvVar13 + 0xb4) = (pMVar19->rotation).y;
      *(f32 *)((int)pvVar13 + 0xb8) = (pMVar19->rotation).z;
      *(f32 *)((int)pvVar13 + 0xbc) = (pMVar19->rotation).w;
    }
    fVar2 = (moby->pos).x;
    fVar3 = (moby->pos).y;
    fVar6 = (moby->pos).z;
    *(f32 *)((int)puVar15 + 0x8c) = (moby->pos).w;
    *(float *)(puVar15 + 0x10) = (float)((double)fVar2 - dVar41);
    *(float *)((int)puVar15 + 0x84) = (float)((double)fVar3 - dVar40);
    *(float *)(puVar15 + 0x11) = (float)((double)fVar6 - dVar39);
    MB_GetOrientation
              ((MobyInstance *)((int)pvVar11 + 0x60),local_180,uVar20 - 400,param_1 + 0x40);
    pMVar16->modeBits = pMVar16->modeBits | (NO_POST_UPDATE|NO_UPDATE);
  }
  return;
}


// 0x0477934 (0x200 bytes)
// strings: 0065855c: 'train engine has no cars!  Deleting moby instance %d\n'

void M822_00477934(longlong param_1)

{
  void *pvVar1;
  uint uVar2;
  MobyInstance *moby;
  int iVar3;
  uint uVar5;
  ulonglong uVar4;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  Vec4 local_50;
  
  moby = (MobyInstance *)param_1;
  pvVar1 = moby->pVar;
  moby->unk72 = '@';
  dVar6 = (double)(moby->pos).x;
  dVar8 = (double)(moby->pos).y;
  dVar10 = (double)(moby->pos).z;
  local_50.w = (moby->pos).w;
  uVar5 = *(uint *)((int)pvVar1 + 0xa0);
  if (uVar5 == 0xffffffff) {
    printf("train engine has no cars!  Deleting moby instance %d\n",
                 *(undefined4 *)((int)pvVar1 + 0xb8));
    DeleteMoby(moby);
  }
  else {
    dVar7 = dVar6;
    dVar9 = dVar8;
    dVar11 = dVar10;
    if (uVar5 != 0xffffffff) {
      do {
        uVar4 = ZEXT48(g_MobyInstance) + ((ulonglong)uVar5 & 0xffffff) * 0x100;
        iVar3 = (int)uVar4;
        uVar2 = *(uint *)(iVar3 + 0x78);
        *(undefined1 *)(iVar3 + 0x72) = 0x40;
        local_50.x = *(float *)(iVar3 + 0x10) - *(float *)(uVar2 + 0xa0);
        local_50.y = *(float *)(iVar3 + 0x14) - *(float *)(uVar2 + 0xa4);
        local_50.z = *(float *)(iVar3 + 0x18) - *(float *)(uVar2 + 0xa8);
        local_50.w = *(float *)(iVar3 + 0x1c);
        MB_GetOrientation
                  ((MobyInstance *)(uVar2 + 0x20),&local_50,(ulonglong)uVar2 + 0xb0,
                   (uVar4 & 0xffffffff) + 0x40);
        *(undefined4 *)(uVar2 + 0xa0) = *(undefined4 *)(iVar3 + 0x10);
        *(undefined4 *)(uVar2 + 0xa4) = *(undefined4 *)(iVar3 + 0x14);
        *(undefined4 *)(uVar2 + 0xa8) = *(undefined4 *)(iVar3 + 0x18);
        *(undefined4 *)(uVar2 + 0xac) = *(undefined4 *)(iVar3 + 0x1c);
        *(undefined4 *)(uVar2 + 0xb0) = *(undefined4 *)(iVar3 + 0x40);
        uVar5 = *(uint *)(uVar2 + 0xc0);
        *(undefined4 *)(uVar2 + 0xb4) = *(undefined4 *)(iVar3 + 0x44);
        *(undefined4 *)(uVar2 + 0xb8) = *(undefined4 *)(iVar3 + 0x48);
        *(undefined4 *)(uVar2 + 0xbc) = *(undefined4 *)(iVar3 + 0x4c);
      } while (uVar5 != 0xffffffff);
      dVar6 = (double)(moby->pos).x;
      dVar8 = (double)(moby->pos).y;
      dVar10 = (double)(moby->pos).z;
      local_50.w = (moby->pos).w;
    }
    local_50.x = (float)(dVar6 - dVar7);
    local_50.y = (float)(dVar8 - dVar9);
    local_50.z = (float)(dVar10 - dVar11);
    MB_GetOrientation
              ((MobyInstance *)((int)pvVar1 + 0x60),&local_50,ZEXT48(&stack0x00000000) - 0x60,
               param_1 + 0x40);
    g_MobyInstance[*(int *)((int)pvVar1 + 0xc4)].modeBits =
         g_MobyInstance[*(int *)((int)pvVar1 + 0xc4)].modeBits | (NO_POST_UPDATE|NO_UPDATE);
  }
  return;
}


// 0x0477b98 (0x1008 bytes)
// strings: 00658594: 'train has no master! Deleting moby instance %d\n' | 006585c4: 'train end path has no STOP NODE!!!\n  Bailing out of the end cutscene before the train goes out of control and kills us all!'

/* Moby 822 */

void UpdateMoby_822(MobyInstance *moby)

{
  char cVar1;
  u8 uVar2;
  float fVar3;
  float fVar4;
  void *pvVar5;
  void *pvVar6;
  void *pvVar7;
  MobyInstance *pMVar8;
  ulonglong uVar9;
  float fVar10;
  float fVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  int32_t *piVar18;
  Cuboid *pCVar19;
  int iVar20;
  undefined4 uVar21;
  uint32_t uVar22;
  int iVar23;
  Spline *pSVar24;
  MobyInstance *pMVar25;
  MobyInstance *pMVar26;
  ulonglong uVar27;
  double dVar28;
  double dVar29;
  double dVar30;
  double dVar31;
  double dVar32;
  double dVar33;
  double dVar34;
  double dVar35;
  double dVar36;
  GPiece<16> auVar37;
  GPiece<16> auVar38;
  GPiece<16> auVar39;
  GPiece<16> auVar40;
  float local_c0;
  float local_bc;
  GPiece<8> auStack_b0;
  float local_a8;
  GPiece<4> auStack_a0;
  GPiece<28> auStack_9c;
  
  pvVar5 = moby->pVar;
  uVar27 = ZEXT48(pvVar5);
  uVar9 = (ulonglong)(uint)moby->handle & 0xffff;
  *(int *)((int)pvVar5 + 0xb8) = (int)uVar9;
  if (*(int *)((int)pvVar5 + 0xa4) == -1) {
    *(undefined4 *)((int)pvVar5 + 0x20) = 0;
    *(undefined2 *)((int)pvVar5 + 0x24) = 0;
    *(undefined1 *)((int)pvVar5 + 0x28) = 4;
    *(undefined2 *)((int)pvVar5 + 0x3e) = 0xd;
  }
  else {
    iVar20 = *(int *)((int)pvVar5 + 0xc4);
    if (iVar20 == -1) {
      printf("train has no master! Deleting moby instance %d\n",uVar9);
      DeleteMoby(moby);
      iVar20 = *(int *)((int)pvVar5 + 0xc4);
    }
    pMVar8 = g_MobyInstance + iVar20;
    pvVar6 = pMVar8->pVar;
    DAT_00a20824 = 0;
    cVar1 = moby->setByGroup;
    if (cVar1 != '\a') {
      if (cVar1 == '\x06') {
        iVar20 = MB_IsPntInCuboid(&g_heroPosition,(longlong)*(int *)((int)pvVar5 + 0xb0));
        if (iVar20 == 0) {
          M822_00477934(moby);
        }
        else {
          iVar20 = 0;
          do {
            iVar23 = *(int *)((int)uVar27 + 0xe0);
            pMVar8 = g_MobyInstance + iVar23;
            if ((((pMVar8 != (MobyInstance *)0x0 && iVar23 != -1) &&
                 (uVar2 = pMVar8->state, uVar2 != 0xfd && uVar2 != 0xfe)) &&
                (pMVar8->oClass == BLARG_COMMANDER_023E)) && (uVar2 == '\x10')) {
              pMVar8->state = '\x11';
            }
            iVar20 = iVar20 + 1;
            uVar27 = uVar27 + 4;
          } while (iVar20 < 8);
          *(undefined4 *)((int)pvVar5 + 0xdc) = 0x41a00000;
          *(undefined4 *)((int)pvVar5 + 200) = *(undefined4 *)((int)pvVar5 + 0xc0);
          moby->setByGroup = '\x01';
        }
      }
      else if (cVar1 == '\x05') {
        pvVar7 = g_MobyInstance[*(int *)((int)pvVar5 + 0xd8)].pVar;
        M822_00476cb0(moby);
        DAT_00a20824 = 1;
        iVar20 = IsMobyPlayingSound(moby,*(int *)((int)pvVar5 + 0x108));
        if (iVar20 == 0) {
          iVar20 = PlayMobySound(1,4,moby);
          *(int *)((int)pvVar5 + 0x108) = iVar20;
        }
        iVar20 = FastDecTimerS32(uVar27 + 0x104);
        if (iVar20 != 0) {
          PlayMobySound(0,0,moby);
          uVar21 = MB_randRange
                             ((int)(animationSpeed * 900.5),(int)(animationSpeed * 400.5));
          *(undefined4 *)((int)pvVar5 + 0x104) = uVar21;
        }
        if (*(int *)((int)pvVar5 + 0xd4) <= *(int *)((int)pvVar6 + 0x60)) {
          *(undefined4 *)((int)pvVar5 + 0xdc) = 0;
          fVar3 = -(*(float *)((int)pvVar5 + 0xc0) * 0.5263158 * g_FrameTime -
                   *(float *)((int)pvVar5 + 200));
          *(float *)((int)pvVar5 + 200) = fVar3;
          if (fVar3 < 0.0) {
            *(undefined4 *)((int)pvVar5 + 200) = 0;
            fVar3 = 0.0;
          }
          if (fVar3 == 0.0) {
            g_MobyInstance[*(int *)((int)pvVar5 + 0xd8)].setByGroup = '\0';
            moby->setByGroup = '\x06';
            iVar20 = *(int *)((int)pvVar5 + 0x108);
            *(float *)((int)pvVar5 + 0xc0) = *(float *)((int)pvVar5 + 0xc0) * 0.5;
            if (((iVar20 != -1) && (g_SoundChannels[iVar20].pMoby == moby)) &&
               (g_SoundChannels[iVar20].state != '\0')) {
              sound_Kill(iVar20);
            }
            *(undefined4 *)((int)pvVar5 + 0x108) = 0xffffffff;
          }
        }
        dVar28 = (double)FUN_005e8338((double)(g_heroPosition.x - GameCamera.posX),
                                      (double)(g_heroPosition.y - GameCamera.posY));
        *(float *)((int)pvVar7 + 0x18) = (float)dVar28;
        dVar28 = (double)FUN_005e8338((double)SQRT((GameCamera.posX - g_heroPosition.x) *
                                                   (GameCamera.posX - g_heroPosition.x) +
                                                   (GameCamera.posY - g_heroPosition.y) *
                                                   (GameCamera.posY - g_heroPosition.y)),
                                      (double)(g_heroPosition.z - GameCamera.posZ));
        *(float *)((int)pvVar7 + 0x14) = (float)-dVar28;
      }
      else if (cVar1 == '\x04') {
        fVar3 = *(float *)((int)pvVar5 + 0xc0);
        fVar4 = fVar3 * 0.2 * g_FrameTime + *(float *)((int)pvVar5 + 200);
        *(float *)((int)pvVar5 + 200) = fVar4;
        if (fVar3 < fVar4) {
          *(float *)((int)pvVar5 + 200) = fVar3;
        }
        DAT_00a20824 = 1;
        M822_00476cb0(moby);
        iVar20 = IsMobyPlayingSound(moby,*(int *)((int)pvVar5 + 0x108));
        if (iVar20 == 0) {
          iVar20 = PlayMobySound(1,4,moby);
          *(int *)((int)pvVar5 + 0x108) = iVar20;
        }
        iVar20 = FastDecTimerS32(uVar27 + 0x104);
        if (iVar20 != 0) {
          PlayMobySound(0,0,moby);
          uVar21 = MB_randRange
                             ((int)(animationSpeed * 900.5),(int)(animationSpeed * 400.5));
          *(undefined4 *)((int)pvVar5 + 0x104) = uVar21;
        }
        if ((g_framesNotGrounded == 0) || (g_heroStateType == 3)) {
          *(undefined4 *)((int)pvVar5 + 0x10c) = 0;
        }
        else {
          MB_PathFollowToPos
                    (0x408f380000000000,0x4014000000000000,0,*(undefined4 *)((int)pvVar6 + 0x70),
                     &g_heroPosition,auStack_b0,auStack_a0,auStack_9c);
          fVar3 = animationSpeed;
          iVar20 = *(int *)((int)pvVar5 + 0x10c) + 1;
          *(int *)((int)pvVar5 + 0x10c) = iVar20;
          if (((int)(fVar3 * 60.5) < iVar20) && (g_heroPosition.z < local_a8 - 10.0)) {
            iVar20 = *(int *)((int)pvVar5 + 0x108);
            if ((iVar20 != -1) &&
               ((g_SoundChannels[iVar20].pMoby == moby &&
                (g_SoundChannels[iVar20].state != '\0')))) {
              sound_Kill(iVar20);
              fVar3 = animationSpeed;
            }
            *(undefined4 *)((int)pvVar5 + 0x108) = 0xffffffff;
            FadeToBlack((int)(fVar3 * 16.5));
            g_HeroIsOutOfBounds = 1;
            return;
          }
        }
        if (g_MobyInstance[*(int *)((int)pvVar5 + 0x100)].setByGroup != '\0') {
          pvVar7 = g_MobyInstance[*(int *)((int)pvVar5 + 0x100)].pVar;
          dVar28 = (double)FUN_005e8338((double)(g_heroPosition.x - GameCamera.posX),
                                        (double)(g_heroPosition.y - GameCamera.posY));
          *(float *)((int)pvVar7 + 0x18) = (float)dVar28;
          dVar28 = (double)FUN_005e8338((double)SQRT((GameCamera.posX - g_heroPosition.x) *
                                                     (GameCamera.posX - g_heroPosition.x) +
                                                     (GameCamera.posY - g_heroPosition.y) *
                                                     (GameCamera.posY - g_heroPosition.y)),
                                        (double)(g_heroPosition.z - GameCamera.posZ));
          *(float *)((int)pvVar7 + 0x14) = (float)-dVar28;
        }
        if ((g_standingOnMoby != 0) &&
           ((*(short *)(g_standingOnMoby + 0xa6) == 0x336 ||
            (*(short *)(g_standingOnMoby + 0xa6) == 0x4ba)))) {
          FUN_004d407c(g_standingOnMoby,3);
        }
        uVar22 = MB_HeroStandingOnMoby(moby);
        if ((((uVar22 != 0) && (*(int *)((int)pvVar5 + 0xac) != -1)) &&
            (*(int *)((int)pvVar5 + 0xd8) != -1)) &&
           (g_MobyInstance[*(int *)((int)pvVar5 + 0x100)].setByGroup == '\0')) {
          iVar20 = 0;
          pMVar26 = g_MobyInstance;
          do {
            iVar23 = *(int *)((int)uVar27 + 0xe0);
            pMVar25 = pMVar26 + iVar23;
            if (((pMVar25 != (MobyInstance *)0x0 && iVar23 != -1) &&
                (pMVar25->state != 0xfd && pMVar25->state != 0xfe)) &&
               (iVar23 = FUN_003c20d0(pMVar25), pMVar26 = g_MobyInstance, iVar23 == 0)) {
              FUN_003c20f8(pMVar25);
              pMVar26 = g_MobyInstance;
              break;
            }
            iVar20 = iVar20 + 1;
            uVar27 = uVar27 + 4;
          } while (iVar20 < 8);
          if (*(int *)((int)pvVar5 + 0xd4) == -1) {
            printf(
                        "train end path has no STOP NODE!!!\n  Bailing out of the end cutscene before the train goes out of control and kills us all!"
                        );
          }
          else {
            pMVar26[*(int *)((int)pvVar5 + 0xd8)].setByGroup = '\x01';
            pvVar7 = g_MobyInstance[*(int *)((int)pvVar5 + 0xd8)].pVar;
            dVar28 = (double)FUN_005e8338((double)(Splines[*(int *)((int)pvVar5 + 0xac)]->points[0].
                                                   x - GameCamera.posX),
                                          (double)(Splines[*(int *)((int)pvVar5 + 0xac)]->points[0].
                                                   y - GameCamera.posY));
            *(float *)((int)pvVar7 + 0x18) = (float)dVar28;
            pSVar24 = Splines[*(int *)((int)pvVar5 + 0xac)];
            fVar3 = GameCamera.posY - pSVar24->points[0].y;
            fVar4 = GameCamera.posX - pSVar24->points[0].x;
            dVar28 = (double)FUN_005e8338((double)SQRT(fVar4 * fVar4 + fVar3 * fVar3),
                                          (double)(pSVar24->points[0].z - GameCamera.posZ));
            *(float *)((int)pvVar7 + 0x14) = (float)-dVar28;
            pSVar24 = Splines[*(int *)((int)pvVar5 + 0xac)];
            dVar28 = (double)FUN_005e8338((double)(pSVar24->points[1].x - pSVar24->points[0].x),
                                          (double)(pSVar24->points[1].y - pSVar24->points[0].y));
            dVar36 = 3.141592502593994;
            fVar3 = (float)(dVar28 + 1.570796251296997);
            dVar35 = -3.141592502593994;
            dVar34 = -0.16666656732559204;
            dVar33 = 0.008333025500178337;
            dVar32 = -0.0001980741071747616;
            dVar31 = 2.601886990305502e-06;
            dVar28 = 4.0;
            fVar4 = 3.1415925 - fVar3;
            if (fVar3 - (3.1415925 - fVar3) < 0.0) {
              fVar4 = fVar3;
            }
            fVar10 = -3.1415925 - fVar3;
            if ((-3.1415925 - fVar3) - fVar4 < 0.0) {
              fVar10 = fVar4;
            }
            fVar11 = fVar10 * fVar10;
            fVar3 = fVar11 * fVar11 * fVar10;
            fVar4 = fVar11 * fVar3;
            Cuboids[*(int *)((int)pvVar7 + 0x28)].pos.x =
                 -((fVar11 * fVar4 * 2.601887e-06 +
                   fVar4 * -0.0001980741 +
                   fVar3 * 0.0083330255 + fVar11 * fVar10 * -0.16666657 + fVar10) *
                  (*(float *)((int)pvVar5 + 0xdc) + 4.0));
            pSVar24 = Splines[*(int *)((int)pvVar5 + 0xac)];
            dVar29 = (double)FUN_005e8338((double)(pSVar24->points[1].x - pSVar24->points[0].x),
                                          (double)(pSVar24->points[1].y - pSVar24->points[0].y));
            pCVar19 = Cuboids;
            dVar30 = (double)(float)(dVar36 - dVar29);
            if (dVar29 - (double)(float)(dVar36 - dVar29) < 0.0) {
              dVar30 = dVar29;
            }
            dVar36 = (double)(float)(dVar35 - dVar29);
            if ((double)(float)(dVar35 - dVar29) - dVar30 < 0.0) {
              dVar36 = dVar30;
            }
            dVar35 = (double)(float)(dVar36 * dVar36);
            dVar29 = (double)(float)(dVar35 * (double)(float)(dVar35 * dVar36));
            dVar30 = (double)(float)(dVar35 * dVar29);
            Cuboids[*(int *)((int)pvVar7 + 0x28)].pos.y =
                 -((float)((double)(float)(dVar35 * dVar30) * dVar31 +
                          (double)(float)(dVar30 * dVar32 +
                                         (double)(float)(dVar29 * dVar33 +
                                                        (double)(float)((double)(float)(dVar35 * 
                                                  dVar36) * dVar34 + dVar36)))) *
                  (float)((double)*(float *)((int)pvVar5 + 0xdc) + dVar28));
            pCVar19[*(int *)((int)pvVar7 + 0x28)].pos.z = 0.0;
            iVar20 = *(int *)((int)pvVar7 + 0x28);
            pSVar24 = Splines[*(int *)((int)pvVar5 + 0xac)];
            fVar3 = pCVar19[iVar20].pos.y;
            fVar4 = pCVar19[iVar20].pos.z;
            pCVar19[iVar20].pos.x = pCVar19[iVar20].pos.x + pSVar24->points[0].x;
            pCVar19[iVar20].pos.y = fVar3 + pSVar24->points[0].y;
            pCVar19[iVar20].pos.z = fVar4 + pSVar24->points[0].z;
            pCVar19[*(int *)((int)pvVar7 + 0x28)].pos.z =
                 pCVar19[*(int *)((int)pvVar7 + 0x28)].pos.z + 2.7;
            iVar20 = *(int *)((int)pvVar7 + 0x28);
            pCVar19[iVar20].rot.w = 0.0;
            pCVar19[iVar20].rot.z = 0.0;
            pCVar19[iVar20].rot.y = 0.0;
            pCVar19[iVar20].rot.x = 0.0;
            pSVar24 = Splines[*(int *)((int)pvVar5 + 0xac)];
            dVar28 = (double)FUN_005e8338((double)(pSVar24->points[1].x - pSVar24->points[0].x),
                                          (double)(pSVar24->points[1].y - pSVar24->points[0].y));
            auVar37 = ZEXT416(0xffffffff);
            auVar37 = auVar37 | auVar37 << 0x20 | auVar37 << 0x40 | auVar37 << 0x60;
            auVar38 = vectorShiftLeftIntegerWord(auVar37,auVar37);
            Cuboids[*(int *)((int)pvVar7 + 0x28)].rot.z = (float)dVar28;
            auVar37 = loadVectorLeftIndexed(0x50,0x477b34);
            auVar39 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
            auVar37 = auVar37 >> 0x60 & (GPiece<16>)0xffffffff;
            auVar37 = vectorMultiplyAddFloatingPoint
                                (auVar39,auVar37 | auVar37 << 0x20 | auVar37 << 0x40 |
                                         auVar37 << 0x60,auVar38);
            auVar37 = vectorConvertToSignedFixedPointWordSaturate(auVar37,0);
            auVar37 = auVar37 >> 0x60 & (GPiece<16>)0xffffffff;
            uVar21 = storeVectorElementWordIndexed
                               (auVar37 | auVar37 << 0x20 | auVar37 << 0x40 | auVar37 << 0x60,0x2c,
                                ZEXT48(pvVar7));
            *(undefined4 *)((int)pvVar7 + 0x2cU & 0xfffffffc) = uVar21;
            pSVar24 = Splines[*(int *)((int)pvVar5 + 0xac)];
            FUN_005e8338((double)(pSVar24->points[1].x - pSVar24->points[0].x),
                         (double)(pSVar24->points[1].y - pSVar24->points[0].y));
            pSVar24 = Splines[*(int *)((int)pvVar5 + 0xac)];
            uVar16.piece<0,4>() = pSVar24->points[0].x;
            uVar16.piece<4,4>() = pSVar24->points[0].y;
            uVar17.piece<0,4>() = pSVar24->points[0].z;
            uVar17.piece<4,4>() = pSVar24->points[0].w;
            M822_004766a8(moby,pSVar24,uVar16,uVar17);
            uVar21 = *(undefined4 *)((int)pvVar5 + 0xac);
            *(undefined4 *)((int)pvVar6 + 0x60) = 1;
            *(undefined4 *)((int)pvVar6 + 0x74) = uVar21;
            *(undefined4 *)((int)pvVar6 + 0xf0) = 0x3f800000;
            fVar3 = *(float *)((int)pvVar5 + 0xc0) * 2.0;
            *(float *)((int)pvVar5 + 0xc0) = fVar3;
            *(float *)((int)pvVar6 + 0xfc) = fVar3;
            UpdateMoby_42(pMVar8);
            moby->setByGroup = '\x05';
            music_SetTransition(0,8);
          }
        }
      }
      else if (cVar1 == '\x03') {
        M822_00477934(moby);
        iVar20 = MB_IsPntInCuboid(&g_heroPosition,(longlong)*(int *)((int)pvVar5 + 0xb4));
        if (((iVar20 != 0) && (*(int *)((int)pvVar5 + 0x100) != -1)) &&
           ((g_heroStateType < 2 ||
            ((g_heroStateType == 9 || (g_heroStateType == 0xc)))))) {
          moby->setByGroup = '\x04';
          DAT_00a20824 = 1;
          music_SetTransition(4,7);
          FUN_004d407c(moby,1);
          g_MobyInstance[*(int *)((int)pvVar5 + 0x100)].setByGroup = '\x01';
          pvVar6 = g_MobyInstance[*(int *)((int)pvVar5 + 0x100)].pVar;
          dVar28 = (double)FUN_005e8338((double)(g_heroPosition.x - GameCamera.posX),
                                        (double)(g_heroPosition.y - GameCamera.posY));
          *(float *)((int)pvVar6 + 0x18) = (float)dVar28;
          dVar28 = (double)FUN_005e8338((double)SQRT((GameCamera.posX - g_heroPosition.x) *
                                                     (GameCamera.posX - g_heroPosition.x) +
                                                     (GameCamera.posY - g_heroPosition.y) *
                                                     (GameCamera.posY - g_heroPosition.y)),
                                        (double)(g_heroPosition.z - GameCamera.posZ));
          auVar37 = ZEXT416(0xffffffff);
          auVar37 = auVar37 | auVar37 << 0x20 | auVar37 << 0x40 | auVar37 << 0x60;
          auVar38 = vectorShiftLeftIntegerWord(auVar37,auVar37);
          *(float *)((int)pvVar6 + 0x14) = (float)-dVar28;
          auVar37 = loadVectorLeftIndexed(4,0x477b34);
          auVar40 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
          auVar37 = auVar37 >> 0x60 & (GPiece<16>)0xffffffff;
          auVar38 = vectorMultiplyAddFloatingPoint
                              (auVar40,auVar37 | auVar37 << 0x20 | auVar37 << 0x40 | auVar37 << 0x60
                               ,auVar38);
          auVar37 = ZEXT416(0xffffffff);
          auVar37 = auVar37 | auVar37 << 0x20 | auVar37 << 0x40 | auVar37 << 0x60;
          auVar39 = vectorShiftLeftIntegerWord(auVar37,auVar37);
          auVar37 = vectorConvertToSignedFixedPointWordSaturate(auVar38,0);
          auVar37 = auVar37 >> 0x60 & (GPiece<16>)0xffffffff;
          uVar21 = storeVectorElementWordIndexed
                             (auVar37 | auVar37 << 0x20 | auVar37 << 0x40 | auVar37 << 0x60,0x2c,
                              ZEXT48(pvVar6));
          *(undefined4 *)((int)pvVar6 + 0x2cU & 0xfffffffc) = uVar21;
          auVar37 = loadVectorLeftIndexed(8,0x477b34);
          auVar37 = auVar37 >> 0x60 & (GPiece<16>)0xffffffff;
          auVar37 = vectorMultiplyAddFloatingPoint
                              (auVar40,auVar37 | auVar37 << 0x20 | auVar37 << 0x40 | auVar37 << 0x60
                               ,auVar39);
          auVar37 = vectorConvertToSignedFixedPointWordSaturate(auVar37,0);
          auVar37 = auVar37 >> 0x60 & (GPiece<16>)0xffffffff;
          uVar21 = storeVectorElementWordIndexed
                             (auVar37 | auVar37 << 0x20 | auVar37 << 0x40 | auVar37 << 0x60,0x104,
                              uVar27);
          *(undefined4 *)((int)pvVar5 + 0x104U & 0xfffffffc) = uVar21;
          *(undefined4 *)((int)pvVar5 + 0x108) = 0xffffffff;
        }
      }
      else if (cVar1 == '\x02') {
        pSVar24 = Splines[*(int *)((int)pvVar5 + 0xa8)];
        FUN_005e8338((double)(pSVar24->points[1].x - pSVar24->points[0].x),
                     (double)(pSVar24->points[1].y - pSVar24->points[0].y));
        pSVar24 = Splines[*(int *)((int)pvVar5 + 0xa8)];
        uVar14.piece<0,4>() = pSVar24->points[0].x;
        uVar14.piece<4,4>() = pSVar24->points[0].y;
        uVar15.piece<0,4>() = pSVar24->points[0].z;
        uVar15.piece<4,4>() = pSVar24->points[0].w;
        M822_004766a8(moby,pSVar24,uVar14,uVar15);
        moby->setByGroup = '\x03';
        iVar20 = *(int *)((int)pvVar5 + 0xa4);
        *(int *)((int)pvVar6 + 0x74) = iVar20;
        pSVar24 = Splines[iVar20];
        *(undefined4 *)((int)pvVar6 + 0x60) = 1;
        *(Spline **)((int)pvVar6 + 0x70) = pSVar24;
        *(undefined4 *)((int)pvVar5 + 200) = 0;
      }
      else if (cVar1 == '\x01') {
        pSVar24 = Splines[*(int *)((int)pvVar5 + 0xa4)];
        uVar12.piece<0,4>() = pSVar24->points[0].x;
        uVar12.piece<4,4>() = pSVar24->points[0].y;
        uVar13.piece<0,4>() = pSVar24->points[0].z;
        uVar13.piece<4,4>() = pSVar24->points[0].w;
        M822_004766a8(0,moby,&DAT_00477b34,uVar12,uVar13);
        *(undefined4 *)((int)pvVar6 + 0x74) = *(undefined4 *)((int)pvVar5 + 0xa4);
        *(undefined4 *)((int)pvVar6 + 0xfc) = *(undefined4 *)((int)pvVar5 + 0xc0);
        UpdateMoby_42(pMVar8);
        moby->setByGroup = '\x02';
      }
      else if (cVar1 == '\0') {
        *(undefined4 *)((int)pvVar5 + 0x20) = 0;
        *(undefined2 *)((int)pvVar5 + 0x24) = 0;
        *(undefined1 *)((int)pvVar5 + 0x28) = 4;
        *(undefined2 *)((int)pvVar5 + 0x3e) = 0xd;
        GetBonePosition(moby,0,&local_c0);
        fVar3 = local_bc - (moby->pos).y;
        fVar4 = local_c0 - (moby->pos).x;
        *(float *)((int)pvVar5 + 0xbc) = SQRT(fVar4 * fVar4 + fVar3 * fVar3);
        fVar3 = g_FrameTime;
        *(undefined4 *)((int)pvVar5 + 0xdc) = 0x41a00000;
        fVar3 = *(float *)((int)pvVar5 + 0xc0) * fVar3;
        *(float *)((int)pvVar5 + 0xc0) = fVar3;
        *(float *)((int)pvVar5 + 200) = fVar3;
        if (*(int *)((int)pvVar5 + 0xac) != -1) {
          pSVar24 = Splines[*(int *)((int)pvVar5 + 0xac)];
          *(undefined4 *)((int)pvVar5 + 0xd4) = 0xffffffff;
          piVar18 = &pSVar24->cnt;
          if (0 < *piVar18) {
            iVar20 = 0;
            do {
              if (pSVar24->points[0].w == 1.0) {
                *(int *)((int)pvVar5 + 0xd4) = iVar20;
                break;
              }
              iVar20 = iVar20 + 1;
              pSVar24 = (Spline *)pSVar24->points;
            } while (iVar20 < *piVar18);
          }
        }
        moby->setByGroup = '\x01';
        *(undefined4 *)((int)pvVar5 + 0x9c) = 3;
        pMVar8->modeBits = pMVar8->modeBits | (NO_POST_UPDATE|NO_UPDATE);
      }
    }
  }
  return;
}


