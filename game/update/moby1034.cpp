// game/update/moby1034.cpp -- reconstructed from NPEA00385 EBOOT
// STATUS: NOT STARTED (raw Ghidra output)
// 2 functions, 0x192330-0x19305c
#include "game/update/moby1034.h"
#include "game/collproc.h"
#include "game/hero.h"
#include "game/mobyfunc.h"
#include "game/mobyproc.h"
#include "game/mobyutil.h"
#include "game/partupd.h"
#include "idol/fastfunc.h"
#include "sdk/mUnk4.h"

// 0x0192330 (0x1fc bytes)
MobyInstance *
Spawn_Moby1034
          (double param_1,float param_2,f32 *param_3,MobyInstance *param_4,f32 *param_5,
          undefined8 param_6,float param_7)

{
  float *out;
  float fVar1;
  MobyInstance *pMVar2;
  int iVar3;
  
  pMVar2 = CreateMoby(ROCKET_040A);
  if (pMVar2 != (MobyInstance *)0x0) {
    out = (float *)pMVar2->pVar;
    pMVar2->updateDistance = -1;
    pMVar2->drawDistance = 0xff;
    pMVar2->enabled = '\x01';
    pMVar2->state = '\0';
    out[8] = param_2;
    out[9] = (float)param_4;
    (pMVar2->pos).x = *param_3;
    (pMVar2->pos).y = param_3[1];
    (pMVar2->pos).z = param_3[2];
    (pMVar2->pos).w = param_3[3];
    (pMVar2->rotation).x = *param_5;
    (pMVar2->rotation).y = param_5[1];
    (pMVar2->rotation).z = param_5[2];
    (pMVar2->rotation).w = param_5[3];
    if ((param_4 != (MobyInstance *)0x0) &&
       (iVar3 = MB_GetPvarsIfMobyHasThem(param_4), iVar3 != 0)) {
      *(ushort *)(iVar3 + 0x1e) = *(ushort *)(iVar3 + 0x1e) | 0x80;
    }
    out[10] = param_7;
    out[0xb] = (float)param_1;
    out[0xc] = 0.0;
    out[0xd] = 0.0;
    MB_SphericalToVector((float)param_1,param_5[2],-param_5[1],out);
    if (pMVar2->animationId != '\x01') {
      MB_SetAnimation(pMVar2,1,0,10);
    }
    (pMVar2->pos).x = (pMVar2->pos).x + *out;
    (pMVar2->pos).y = (pMVar2->pos).y + out[1];
    (pMVar2->pos).z = (pMVar2->pos).z + out[2];
    fVar1 = out[9];
    if (fVar1 != 0.0) {
      out[4] = *(float *)((int)fVar1 + 0x10);
      out[5] = *(float *)((int)fVar1 + 0x14);
      out[6] = *(float *)((int)fVar1 + 0x18);
      out[7] = *(float *)((int)fVar1 + 0x1c);
    }
    pMVar2->scale =
         pMVar2->pClass->gScale *
         (*(float *)((int)param_2 + 0x2c) / *(float *)(*(int *)((int)param_2 + 0x24) + 0x24));
    UpdateMobyTransform(pMVar2);
  }
  return pMVar2;
}


// 0x0192590 (0xacc bytes)
// inlined: FastAtan2 @0x192b38, FastAtan2 @0x192cf8
/* Moby 1034 */

void UpdateMoby_1034(MobyInstance *moby)

{
  undefined1 uVar1;
  byte bVar2;
  f32 fVar3;
  f32 fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  MobyClass *pMVar11;
  float *out;
  ulonglong *puVar12;
  int iVar13;
  ulonglong uVar14;
  longlong lVar15;
  int iVar17;
  longlong lVar16;
  longlong lVar18;
  uint unused;
  float *pfVar20;
  longlong lVar19;
  ulonglong uVar21;
  ulonglong unaff_r27;
  longlong lVar22;
  ulonglong unaff_r28;
  ulonglong unaff_r29;
  ulonglong unaff_r30;
  ulonglong unaff_r31;
  ulonglong in_LR;
  longlong lVar23;
  double dVar24;
  double dVar25;
  double dVar26;
  double dVar27;
  double dVar28;
  ulonglong in_f21;
  ulonglong in_f22;
  undefined8 uVar29;
  ulonglong in_f23;
  ulonglong in_f24;
  undefined8 uVar30;
  ulonglong in_f25;
  ulonglong in_f26;
  double dVar31;
  ulonglong in_f27;
  double dVar32;
  ulonglong in_f28;
  double dVar33;
  undefined8 uVar34;
  ulonglong in_f29;
  double dVar35;
  undefined8 uVar36;
  ulonglong in_f30;
  double dVar37;
  ulonglong in_f31;
  double dVar38;
  
  lVar15 = (longlong)(int)moby;
  uVar14 = ZEXT48(&stack0x00000000);
  lVar16 = uVar14 - 0x200;
  puVar12 = (ulonglong *)lVar16;
  *puVar12 = uVar14;
  puVar12[0x42] = in_LR;
  puVar12[0x35] = in_f21;
  puVar12[0x36] = in_f22;
  puVar12[0x37] = in_f23;
  puVar12[0x38] = in_f24;
  puVar12[0x39] = in_f25;
  puVar12[0x3a] = in_f26;
  puVar12[0x3b] = in_f27;
  puVar12[0x3c] = in_f28;
  puVar12[0x3d] = in_f29;
  puVar12[0x3e] = in_f30;
  puVar12[0x3f] = in_f31;
  puVar12[0x34] = unaff_r31;
  puVar12[0x32] = unaff_r29;
  fVar3 = (moby->pos).y;
  *(f32 *)(puVar12 + 0x18) = (moby->pos).x;
  fVar4 = (moby->pos).z;
  *(f32 *)((int)puVar12 + 0xc4) = fVar3;
  fVar3 = (moby->pos).w;
  pMVar11 = moby->pClass;
  *(f32 *)(puVar12 + 0x19) = fVar4;
  *(f32 *)((int)puVar12 + 0xcc) = fVar3;
  fVar5 = moby->scale;
  dVar35 = 0.10000000149011612;
  fVar6 = pMVar11->gScale;
  puVar12[0x33] = unaff_r30;
  out = (float *)moby->pVar;
  moby->scale = (fVar6 - fVar5) * 0.1 + fVar5;
  dVar38 = 0.0;
  *(undefined4 *)(puVar12 + 0x1e) = 0;
  *(undefined4 *)((int)puVar12 + 0xf4) = 0;
  *(undefined4 *)(puVar12 + 0x1f) = 0;
  *(undefined4 *)((int)puVar12 + 0xfc) = 0;
  dVar33 = -1.0;
  dVar37 = 1.0;
  puVar12[0x31] = unaff_r28;
  puVar12[0x30] = unaff_r27;
  dVar24 = (double)MB_randRangeFloat(-1.0,1.0);
  *(float *)(puVar12 + 0x1e) = (float)dVar24;
  dVar24 = (double)MB_randRangeFloat((float)dVar33,(float)dVar37);
  *(float *)((int)puVar12 + 0xf4) = (float)dVar24;
  dVar24 = (double)MB_randRangeFloat((float)dVar33,(float)dVar37);
  *(float *)(puVar12 + 0x1f) = (float)dVar24;
  dVar24 = (double)MB_randRangeFloat((float)dVar35,0.2);
  fVar9 = g_FrameTime;
  fVar6 = *(float *)((int)puVar12 + 0xf4);
  fVar7 = *(float *)(puVar12 + 0x1e);
  fVar8 = *(float *)(puVar12 + 0x1f);
  dVar28 = (double)SQRT(fVar8 * fVar8 + fVar7 * fVar7 + fVar6 * fVar6);
  dVar33 = (double)g_FrameTime;
  fVar5 = (float)((double)(float)(dVar24 * dVar33) / dVar28);
  dVar24 = dVar38;
  if (dVar38 - dVar28 < 0.0) {
    dVar24 = (double)(fVar7 * fVar5);
  }
  dVar31 = dVar38;
  if (dVar38 - dVar28 < 0.0) {
    dVar31 = (double)(fVar6 * fVar5);
  }
  dVar25 = dVar38;
  if (dVar38 - dVar28 < 0.0) {
    dVar25 = (double)(fVar8 * fVar5);
  }
  if (dVar28 - dVar38 < 0.0) {
    dVar24 = (double)(fVar7 * fVar5);
  }
  if (dVar28 - dVar38 < 0.0) {
    dVar31 = (double)(fVar6 * fVar5);
  }
  if (dVar28 - dVar38 < 0.0) {
    dVar25 = (double)(fVar8 * fVar5);
  }
  *(float *)(puVar12 + 0x1e) = (float)dVar24;
  *(float *)((int)puVar12 + 0xf4) = (float)dVar31;
  *(float *)(puVar12 + 0x1f) = (float)dVar25;
  dVar24 = (double)MB_randRangeFloat((float)(dVar33 * dVar35),fVar9);
  fVar5 = *out;
  dVar33 = (double)SQRT(out[2] * out[2] + fVar5 * fVar5 + out[1] * out[1]);
  if (dVar33 == dVar38) {
    *(float *)(puVar12 + 0x1c) = fVar5;
    *(float *)((int)puVar12 + 0xe4) = out[1];
    *(float *)(puVar12 + 0x1d) = out[2];
    fVar5 = out[3];
    *(undefined4 *)(puVar12 + 0x1d) = 0;
    *(undefined4 *)((int)puVar12 + 0xe4) = 0;
    *(undefined4 *)(puVar12 + 0x1c) = 0;
    dVar24 = dVar38;
    dVar33 = dVar38;
    dVar28 = dVar38;
  }
  else {
    fVar6 = (float)(-dVar24 / dVar33);
    dVar24 = (double)(fVar5 * fVar6);
    *(float *)(puVar12 + 0x1c) = fVar5 * fVar6;
    dVar33 = (double)(out[1] * fVar6);
    *(float *)((int)puVar12 + 0xe4) = out[1] * fVar6;
    dVar28 = (double)(out[2] * fVar6);
    *(float *)(puVar12 + 0x1d) = out[2] * fVar6;
    fVar5 = out[3];
  }
  *(float *)((int)puVar12 + 0xec) = fVar5;
  *(float *)(puVar12 + 0x1e) = (float)((double)*(float *)(puVar12 + 0x1e) + dVar24);
  *(float *)((int)puVar12 + 0xf4) = (float)((double)*(float *)((int)puVar12 + 0xf4) + dVar33);
  *(float *)(puVar12 + 0x1f) = (float)((double)*(float *)(puVar12 + 0x1f) + dVar28);
  puVar12[0x2d] = (longlong)(int)(animationSpeed * 6.5);
  uVar36 = 0x40e3880000000000;
  uVar34 = 0x408f400000000000;
  SpawnPart_44
            (0x40e3880000000000,0x408f400000000000,dVar37,0xbf3a36e2e0000000,dVar38,lVar15 + 0x10,
             uVar14 - 0x110,*(undefined4 *)((int)puVar12 + 0x16c),0x7f,&DAT_00b0b0b0,3);
  dVar31 = 0.3333333432674408;
  dVar35 = 60.5;
  uVar30 = 0xbf2a36e2e0000000;
  dVar28 = 0.019999999552965164;
  uVar29 = 0x40d3880000000000;
  dVar33 = 5.5;
  dVar24 = dVar38;
  do {
    dVar32 = (double)(float)(dVar24 + dVar31);
    dVar24 = (double)MB_randRangeFloat((float)dVar24,(float)(dVar24 + dVar31));
    fVar5 = *out;
    fVar6 = (moby->pos).x;
    fVar7 = (moby->pos).y;
    fVar8 = (moby->pos).z;
    dVar25 = (double)SQRT(out[2] * out[2] + fVar5 * fVar5 + out[1] * out[1]);
    if (dVar25 == dVar38) {
      *(float *)(puVar12 + 0x1c) = fVar5;
      *(float *)((int)puVar12 + 0xe4) = out[1];
      *(float *)(puVar12 + 0x1d) = out[2];
      fVar5 = out[3];
      dVar24 = dVar38;
      dVar25 = dVar38;
      dVar27 = dVar38;
    }
    else {
      fVar9 = (float)((double)(float)(dVar24 * (double)out[0xb]) / dVar25);
      dVar24 = (double)(fVar5 * fVar9);
      *(float *)(puVar12 + 0x1c) = fVar5 * fVar9;
      dVar25 = (double)(out[1] * fVar9);
      *(float *)((int)puVar12 + 0xe4) = out[1] * fVar9;
      dVar27 = (double)(out[2] * fVar9);
      *(float *)(puVar12 + 0x1d) = out[2] * fVar9;
      fVar5 = out[3];
    }
    dVar26 = (double)animationSpeed;
    *(float *)((int)puVar12 + 0xec) = fVar5;
    *(float *)(puVar12 + 0x1c) = (float)(dVar24 + (double)fVar6);
    *(float *)((int)puVar12 + 0xe4) = (float)(dVar25 + (double)fVar7);
    *(float *)(puVar12 + 0x1d) = (float)(dVar27 + (double)fVar8);
    puVar12[0x2d] = (longlong)(int)(dVar26 * dVar35);
    iVar17 = SpawnPart_44
                       (uVar36,uVar34,dVar37,uVar30,dVar38,uVar14 - 0x120,uVar14 - 0x110,
                        *(undefined4 *)((int)puVar12 + 0x16c),0x7f,FUN_00606060,3);
    fVar5 = (moby->transform).v2.x;
    fVar6 = (moby->transform).v2.y;
    fVar7 = (moby->transform).v2.z;
    fVar8 = (moby->transform).v2.w;
    if (iVar17 != 0) {
      uVar1 = *DAT_00a52860;
      *(undefined1 *)(iVar17 + 3) = 0x44;
      *(undefined1 *)(iVar17 + 2) = uVar1;
    }
    *(float *)(puVar12 + 0x20) = (float)((double)fVar5 * dVar28);
    *(float *)((int)puVar12 + 0x104) = (float)((double)fVar6 * dVar28);
    *(float *)(puVar12 + 0x21) = (float)((double)fVar7 * dVar28);
    *(float *)((int)puVar12 + 0x10c) = (float)((double)fVar8 * dVar28);
    dVar24 = (double)MB_randRot();
    lVar22 = uVar14 - 0x100;
    MB_RotateQuatAxisAngle((float)dVar24,(float *)lVar22,(float *)lVar22);
    puVar12[0x2d] = (longlong)(int)((double)animationSpeed * dVar33);
    SpawnPart_21(uVar29,uVar14 - 0x120,lVar22,0x4f007fff,0x1fffffff);
    unused = (uint)lVar22;
    dVar24 = dVar32;
  } while (dVar32 < dVar37);
  fVar5 = out[9];
  if (fVar5 != 0.0) {
    bVar2 = *(byte *)((int)fVar5 + 0x20);
    unused = (uint)bVar2;
    if (bVar2 != 0xfd && bVar2 != 0xfe) {
      fVar6 = out[5] - *(float *)((int)fVar5 + 0x14);
      fVar7 = out[4] - *(float *)((int)fVar5 + 0x10);
      fVar8 = out[6] - *(float *)((int)fVar5 + 0x18);
      if (SQRT(fVar8 * fVar8 + fVar7 * fVar7 + fVar6 * fVar6) < 3.0) {
        fVar6 = (moby->pos).x;
        fVar7 = (moby->pos).y;
        fVar8 = *(float *)((int)fVar5 + 0x10) - fVar6;
        fVar5 = *(float *)((int)fVar5 + 0x14) - fVar7;
        dVar33 = ABS((double)fVar8);
        dVar28 = ABS((double)fVar5);
        *(float *)((int)puVar12 + 0x11c) = fVar8;
        *(float *)(puVar12 + 0x24) = fVar5;
        *(float *)((int)puVar12 + 0x124) = (float)(dVar33 - dVar28);
        uVar21 = (ulonglong)(*(uint *)((int)puVar12 + 0x11c) >> 0x1c) & 8 |
                 (ulonglong)(*(uint *)((int)puVar12 + 0x124) >> 0x1e) & 2 |
                 (ulonglong)(*(uint *)(puVar12 + 0x24) >> 0x1d) & 4;
        dVar24 = ABS((double)*(float *)((int)puVar12 + 0x11c));
        if ((double)*(float *)((int)puVar12 + 0x124) - dVar38 < 0.0) {
          dVar24 = dVar28;
        }
        fVar5 = *(float *)(&g_atanQuadrantTable + (int)(uVar21 << 2));
        dVar28 = ABS((double)*(float *)(puVar12 + 0x24));
        if ((double)*(float *)((int)puVar12 + 0x124) - dVar38 < 0.0) {
          dVar28 = dVar33;
        }
        fVar8 = *(float *)(((uint)(uVar21 << 2) | 0x735900) + 4);
        dVar33 = dVar38;
        if (dVar38 < dVar24) {
          lVar22 = uVar14 - 0x1f0;
          lVar19 = uVar14 - 0xa8;
          lVar18 = uVar14 - 0xb8;
          lVar23 = 2;
          fVar9 = (float)(dVar28 - dVar24) / (float)(dVar28 + dVar24);
          fVar10 = fVar9 * fVar9;
          *(float *)((int)puVar12 + 0x154) = fVar9;
          *(float *)((int)puVar12 + 0x14c) = fVar9;
          *(float *)(puVar12 + 0x2a) = fVar9;
          *(float *)(puVar12 + 0x29) = fVar9;
          fVar9 = fVar10 * fVar10;
          *(float *)((int)puVar12 + 0x14c) = *(float *)((int)puVar12 + 0x14c) * fVar10;
          *(float *)(puVar12 + 0x2a) = *(float *)(puVar12 + 0x2a) * fVar9;
          *(float *)((int)puVar12 + 0x154) = *(float *)((int)puVar12 + 0x154) * fVar9 * fVar10;
          do {
            *(float *)((int)lVar22 + 0x148) = *(float *)((int)lVar22 + 0x138) * fVar9 * fVar9;
            iVar17 = (int)lVar18;
            lVar18 = lVar18 + 8;
            lVar22 = lVar22 + 8;
            *(float *)((int)lVar19 + 4) = *(float *)(iVar17 + 4) * fVar9 * fVar9;
            lVar19 = lVar19 + 8;
            lVar23 = lVar23 + -1;
          } while (lVar23 != 0);
          lVar23 = 4;
          lVar19 = uVar14 - 0xb8;
          pfVar20 = (float *)&DAT_007358e0;
          lVar22 = lVar16;
          lVar18 = lVar19;
          do {
            fVar9 = *pfVar20;
            fVar10 = pfVar20[1];
            pfVar20 = pfVar20 + 2;
            *(float *)((int)lVar22 + 0x148) = *(float *)((int)lVar22 + 0x148) * fVar9;
            lVar22 = lVar22 + 8;
            *(float *)((int)lVar18 + 4) = *(float *)((int)lVar18 + 4) * fVar10;
            lVar18 = lVar18 + 8;
            lVar23 = lVar23 + -1;
          } while (lVar23 != 0);
          lVar18 = 2;
          lVar22 = lVar16;
          dVar24 = dVar38;
          do {
            iVar17 = (int)lVar22;
            iVar13 = (int)lVar19;
            lVar22 = lVar22 + 0x10;
            lVar19 = lVar19 + 0x10;
            dVar24 = (double)((float)(dVar24 + (double)*(float *)(iVar17 + 0x148)) +
                              *(float *)(iVar13 + 4) + *(float *)(iVar13 + 8) +
                             *(float *)(iVar13 + 0xc));
            lVar18 = lVar18 + -1;
          } while (lVar18 != 0);
          dVar33 = (double)((float)(dVar24 + 0.7853981852531433) * fVar5 + fVar8);
        }
        (moby->rotation).z = (float)dVar33;
        fVar5 = out[9];
        fVar7 = fVar7 - *(float *)((int)fVar5 + 0x14);
        fVar6 = fVar6 - *(float *)((int)fVar5 + 0x10);
        fVar8 = *(float *)((int)fVar5 + 0x18) - (moby->pos).z;
        fVar5 = SQRT(fVar6 * fVar6 + fVar7 * fVar7);
        *(float *)((int)puVar12 + 0x114) = fVar8;
        dVar28 = ABS((double)fVar8);
        dVar33 = ABS((double)fVar5);
        *(float *)(puVar12 + 0x22) = fVar5;
        *(float *)(puVar12 + 0x23) = (float)(dVar33 - dVar28);
        uVar21 = (ulonglong)(*(uint *)(puVar12 + 0x22) >> 0x1c) & 8 |
                 (ulonglong)(*(uint *)(puVar12 + 0x23) >> 0x1e) & 2 |
                 (ulonglong)(*(uint *)((int)puVar12 + 0x114) >> 0x1d) & 4;
        dVar24 = ABS((double)*(float *)(puVar12 + 0x22));
        if ((double)*(float *)(puVar12 + 0x23) - dVar38 < 0.0) {
          dVar24 = dVar28;
        }
        fVar5 = *(float *)(&g_atanQuadrantTable + (int)(uVar21 << 2));
        dVar28 = ABS((double)*(float *)((int)puVar12 + 0x114));
        if ((double)*(float *)(puVar12 + 0x23) - dVar38 < 0.0) {
          dVar28 = dVar33;
        }
        fVar6 = *(float *)(((uint)(uVar21 << 2) | 0x735900) + 4);
        if (dVar38 < dVar24) {
          lVar22 = uVar14 - 0x1f0;
          lVar19 = uVar14 - 200;
          lVar18 = uVar14 - 0xd8;
          lVar23 = 2;
          fVar7 = (float)(dVar28 - dVar24) / (float)(dVar28 + dVar24);
          fVar8 = fVar7 * fVar7;
          *(float *)((int)puVar12 + 0x134) = fVar7;
          *(float *)((int)puVar12 + 300) = fVar7;
          *(float *)(puVar12 + 0x26) = fVar7;
          *(float *)(puVar12 + 0x25) = fVar7;
          fVar7 = fVar8 * fVar8;
          *(float *)((int)puVar12 + 300) = *(float *)((int)puVar12 + 300) * fVar8;
          *(float *)(puVar12 + 0x26) = *(float *)(puVar12 + 0x26) * fVar7;
          *(float *)((int)puVar12 + 0x134) = *(float *)((int)puVar12 + 0x134) * fVar7 * fVar8;
          do {
            *(float *)((int)lVar22 + 0x128) = *(float *)((int)lVar22 + 0x118) * fVar7 * fVar7;
            iVar17 = (int)lVar18;
            lVar18 = lVar18 + 8;
            lVar22 = lVar22 + 8;
            *(float *)((int)lVar19 + 4) = *(float *)(iVar17 + 4) * fVar7 * fVar7;
            lVar19 = lVar19 + 8;
            lVar23 = lVar23 + -1;
          } while (lVar23 != 0);
          lVar23 = 4;
          lVar19 = uVar14 - 0xd8;
          pfVar20 = (float *)&DAT_007358e0;
          lVar22 = lVar16;
          lVar18 = lVar19;
          do {
            fVar7 = *pfVar20;
            fVar8 = pfVar20[1];
            pfVar20 = pfVar20 + 2;
            *(float *)((int)lVar22 + 0x128) = *(float *)((int)lVar22 + 0x128) * fVar7;
            lVar22 = lVar22 + 8;
            *(float *)((int)lVar18 + 4) = *(float *)((int)lVar18 + 4) * fVar8;
            lVar18 = lVar18 + 8;
            lVar23 = lVar23 + -1;
          } while (lVar23 != 0);
          lVar22 = 2;
          do {
            iVar17 = (int)lVar16;
            iVar13 = (int)lVar19;
            lVar16 = lVar16 + 0x10;
            lVar19 = lVar19 + 0x10;
            dVar38 = (double)((float)(dVar38 + (double)*(float *)(iVar17 + 0x128)) +
                              *(float *)(iVar13 + 4) + *(float *)(iVar13 + 8) +
                             *(float *)(iVar13 + 0xc));
            lVar22 = lVar22 + -1;
          } while (lVar22 != 0);
          dVar38 = (double)((float)(dVar38 + 0.7853981852531433) * fVar5 + fVar6);
        }
        (moby->rotation).y = (float)-dVar38;
        fVar5 = out[9];
        out[4] = *(float *)((int)fVar5 + 0x10);
        out[5] = *(float *)((int)fVar5 + 0x14);
        out[6] = *(float *)((int)fVar5 + 0x18);
        out[7] = *(float *)((int)fVar5 + 0x1c);
        goto LAB_00192e94;
      }
    }
  }
  dVar33 = 251.32740783691406;
  dVar24 = 2513.274169921875;
  OrganicDeltAng
            ((moby->rotation).z,g_FrameTimeSq * 251.32741,g_FrameTimeSq * 251.32741,
             g_FrameTime * 2513.2742,&(moby->rotation).z,unused,out + 0xc);
  OrganicDeltAng
            ((moby->rotation).y,(float)((double)g_FrameTimeSq * dVar33),
             (float)((double)g_FrameTimeSq * dVar33),(float)((double)g_FrameTime * dVar24),
             &(moby->rotation).y,unused,out + 0xc);
  out[9] = 0.0;
LAB_00192e94:
  MB_SphericalToVector(out[0xb],(moby->rotation).z,-(moby->rotation).y,out);
  fVar5 = (moby->pos).x + *out;
  (moby->pos).x = fVar5;
  fVar6 = (moby->pos).y + out[1];
  (moby->pos).y = fVar6;
  fVar7 = (moby->pos).z + out[2];
  (moby->pos).z = fVar7;
  uVar29 = 0x4000000000000000;
  if (2.0 <= fVar5) {
    if ((((fVar5 <= 1021.0) && (2.0 <= fVar6)) && (fVar6 <= 1021.0)) &&
       ((2.0 <= fVar7 && (fVar7 <= 1021.0)))) {
      GetBonePosition(lVar15,1,uVar14 - 0x130);
      iVar17 = CollLine(uVar14 - 0x140,uVar14 - 0x130,0,out[8],0);
      if (iVar17 != 0) {
        puVar12[0x12] = 0xffffffffffffffff;
        puVar12[0x14] = 0;
        puVar12[0x15] = 1;
        puVar12[0x16] = 0xffffffffffffffff;
        puVar12[0x17] = 0;
        MB_genericExplosion
                  (uVar29,0x4024000000000000,0x4010000000000000,uVar29,0x4022000000000000,dVar37,
                   0x4034000000000000,lVar15,out,0xa10960,1,0xffffffffffffffff,10,3,0x10);
        DeleteMoby(moby);
        return;
      }
      iVar17 = FastDecTimerS32(out + 10);
      if (iVar17 == 0) {
        return;
      }
      DeleteMoby(moby);
      return;
    }
  }
  DeleteMoby(moby);
  return;
}


