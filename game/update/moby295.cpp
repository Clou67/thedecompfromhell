// game/update/moby295.cpp -- reconstructed from NPEA00385 EBOOT
// STATUS: NOT STARTED (raw Ghidra output)
// 3 functions, 0x334a8c-0x33589c
#include "game/update/moby295.h"
#include "game/collproc.h"
#include "game/hero.h"
#include "game/mobyfunc.h"
#include "game/mobyproc.h"
#include "game/mobyutil.h"
#include "game/partupd.h"
#include "game/update/moby1034.h"
#include "idol/fastfunc.h"
#include "sdk/mUnk4.h"

// 0x0334a8c (0x14 bytes)
void M295_00334a8c(void)

{
  DAT_0081090c = 0x10000;
  return;
}


// 0x0334aa8 (0x230 bytes)
MobyInstance *
Spawn_Moby295
          (double param_1,float param_2,f32 *param_3,MobyInstance *param_4,f32 *param_5,
          undefined8 param_6,undefined8 param_7)

{
  float *out;
  float fVar1;
  MobyInstance *pMVar2;
  int iVar3;
  
  pMVar2 = CreateMoby(ROCKET_0127);
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
    if (param_4 != (MobyInstance *)0x0) {
      out[0xf] = (float)(int)(short)param_4->oClass;
      iVar3 = MB_GetPvarsIfMobyHasThem(param_4);
      if (iVar3 != 0) {
        *(ushort *)(iVar3 + 0x1e) = *(ushort *)(iVar3 + 0x1e) | 0x80;
      }
    }
    out[10] = (float)param_7;
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
    SpawnPart_26(0x411e848000000000,pMVar2,&DAT_00334aa0,0x60808080,param_7,0);
  }
  return pMVar2;
}


// 0x0334d40 (0xb5c bytes)
// inlined: FastAtan2 @0x335358, FastAtan2 @0x335518
/* Moby 295 */

void UpdateMoby_295(MobyInstance *moby)

{
  undefined1 uVar1;
  f32 fVar2;
  f32 fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  MobyClass *pMVar10;
  float *out;
  ulonglong *puVar11;
  int iVar12;
  ulonglong uVar13;
  longlong lVar14;
  int iVar17;
  float *pfVar18;
  longlong lVar15;
  longlong lVar16;
  longlong lVar19;
  undefined4 *unused;
  longlong lVar20;
  ulonglong uVar21;
  ulonglong unaff_r27;
  ulonglong unaff_r28;
  ulonglong unaff_r29;
  ulonglong unaff_r30;
  ulonglong unaff_r31;
  ulonglong in_LR;
  longlong lVar22;
  double dVar23;
  double dVar24;
  double dVar25;
  double dVar26;
  double dVar27;
  ulonglong in_f21;
  ulonglong in_f22;
  undefined8 uVar28;
  ulonglong in_f23;
  ulonglong in_f24;
  undefined8 uVar29;
  ulonglong in_f25;
  ulonglong in_f26;
  double dVar30;
  ulonglong in_f27;
  double dVar31;
  ulonglong in_f28;
  double dVar32;
  undefined8 uVar33;
  ulonglong in_f29;
  double dVar34;
  undefined8 uVar35;
  ulonglong in_f30;
  double dVar36;
  ulonglong in_f31;
  double dVar37;
  
  lVar14 = (longlong)(int)moby;
  uVar13 = ZEXT48(&stack0x00000000);
  lVar16 = uVar13 - 0x210;
  puVar11 = (ulonglong *)lVar16;
  *puVar11 = uVar13;
  puVar11[0x44] = in_LR;
  puVar11[0x37] = in_f21;
  puVar11[0x38] = in_f22;
  puVar11[0x39] = in_f23;
  puVar11[0x3a] = in_f24;
  puVar11[0x3b] = in_f25;
  puVar11[0x3c] = in_f26;
  puVar11[0x3d] = in_f27;
  puVar11[0x3e] = in_f28;
  puVar11[0x3f] = in_f29;
  puVar11[0x40] = in_f30;
  puVar11[0x41] = in_f31;
  puVar11[0x36] = unaff_r31;
  puVar11[0x34] = unaff_r29;
  fVar2 = (moby->pos).y;
  *(f32 *)(puVar11 + 0x18) = (moby->pos).x;
  fVar3 = (moby->pos).z;
  *(f32 *)((int)puVar11 + 0xc4) = fVar2;
  fVar2 = (moby->pos).w;
  pMVar10 = moby->pClass;
  *(f32 *)(puVar11 + 0x19) = fVar3;
  *(f32 *)((int)puVar11 + 0xcc) = fVar2;
  fVar4 = moby->scale;
  dVar34 = 0.10000000149011612;
  fVar5 = pMVar10->gScale;
  puVar11[0x35] = unaff_r30;
  out = (float *)moby->pVar;
  moby->scale = (fVar5 - fVar4) * 0.1 + fVar4;
  dVar37 = 0.0;
  *(undefined4 *)(puVar11 + 0x1e) = 0;
  *(undefined4 *)((int)puVar11 + 0xf4) = 0;
  *(undefined4 *)(puVar11 + 0x1f) = 0;
  *(undefined4 *)((int)puVar11 + 0xfc) = 0;
  dVar32 = -1.0;
  dVar36 = 1.0;
  puVar11[0x33] = unaff_r28;
  puVar11[0x32] = unaff_r27;
  dVar23 = (double)MB_randRangeFloat(-1.0,1.0);
  *(float *)(puVar11 + 0x1e) = (float)dVar23;
  dVar23 = (double)MB_randRangeFloat((float)dVar32,(float)dVar36);
  *(float *)((int)puVar11 + 0xf4) = (float)dVar23;
  dVar23 = (double)MB_randRangeFloat((float)dVar32,(float)dVar36);
  *(float *)(puVar11 + 0x1f) = (float)dVar23;
  dVar23 = (double)MB_randRangeFloat((float)dVar34,0.2);
  fVar8 = g_FrameTime;
  fVar5 = *(float *)((int)puVar11 + 0xf4);
  fVar6 = *(float *)(puVar11 + 0x1e);
  fVar7 = *(float *)(puVar11 + 0x1f);
  dVar27 = (double)SQRT(fVar7 * fVar7 + fVar6 * fVar6 + fVar5 * fVar5);
  dVar32 = (double)g_FrameTime;
  fVar4 = (float)((double)(float)(dVar23 * dVar32) / dVar27);
  dVar23 = dVar37;
  if (dVar37 - dVar27 < 0.0) {
    dVar23 = (double)(fVar6 * fVar4);
  }
  dVar30 = dVar37;
  if (dVar37 - dVar27 < 0.0) {
    dVar30 = (double)(fVar5 * fVar4);
  }
  dVar24 = dVar37;
  if (dVar37 - dVar27 < 0.0) {
    dVar24 = (double)(fVar7 * fVar4);
  }
  if (dVar27 - dVar37 < 0.0) {
    dVar23 = (double)(fVar6 * fVar4);
  }
  if (dVar27 - dVar37 < 0.0) {
    dVar30 = (double)(fVar5 * fVar4);
  }
  if (dVar27 - dVar37 < 0.0) {
    dVar24 = (double)(fVar7 * fVar4);
  }
  *(float *)(puVar11 + 0x1e) = (float)dVar23;
  *(float *)((int)puVar11 + 0xf4) = (float)dVar30;
  *(float *)(puVar11 + 0x1f) = (float)dVar24;
  dVar23 = (double)MB_randRangeFloat((float)(dVar32 * dVar34),fVar8);
  fVar4 = *out;
  dVar32 = (double)SQRT(out[2] * out[2] + fVar4 * fVar4 + out[1] * out[1]);
  if (dVar32 == dVar37) {
    *(float *)(puVar11 + 0x1c) = fVar4;
    *(float *)((int)puVar11 + 0xe4) = out[1];
    *(float *)(puVar11 + 0x1d) = out[2];
    fVar4 = out[3];
    *(undefined4 *)(puVar11 + 0x1d) = 0;
    *(undefined4 *)((int)puVar11 + 0xe4) = 0;
    *(undefined4 *)(puVar11 + 0x1c) = 0;
    dVar23 = dVar37;
    dVar32 = dVar37;
    dVar27 = dVar37;
  }
  else {
    fVar5 = (float)(-dVar23 / dVar32);
    dVar23 = (double)(fVar4 * fVar5);
    *(float *)(puVar11 + 0x1c) = fVar4 * fVar5;
    dVar32 = (double)(out[1] * fVar5);
    *(float *)((int)puVar11 + 0xe4) = out[1] * fVar5;
    dVar27 = (double)(out[2] * fVar5);
    *(float *)(puVar11 + 0x1d) = out[2] * fVar5;
    fVar4 = out[3];
  }
  *(float *)((int)puVar11 + 0xec) = fVar4;
  *(float *)(puVar11 + 0x1e) = (float)((double)*(float *)(puVar11 + 0x1e) + dVar23);
  *(float *)((int)puVar11 + 0xf4) = (float)((double)*(float *)((int)puVar11 + 0xf4) + dVar32);
  *(float *)(puVar11 + 0x1f) = (float)((double)*(float *)(puVar11 + 0x1f) + dVar27);
  puVar11[0x2f] = (longlong)(int)(animationSpeed * 6.5);
  uVar35 = 0x40e3880000000000;
  uVar33 = 0x408f400000000000;
  iVar17 = SpawnPart_44
                     (0x40e3880000000000,0x408f400000000000,dVar36,0xbf3a36e2e0000000,dVar37,
                      lVar14 + 0x10,uVar13 - 0x120,*(undefined4 *)((int)puVar11 + 0x17c),0x7f,
                      &DAT_00b0b0b0,3);
  if (iVar17 != 0) {
    *(undefined1 *)(iVar17 + 3) = 0x48;
  }
  dVar30 = 0.3333333432674408;
  dVar34 = 60.5;
  uVar29 = 0xbf2a36e2e0000000;
  dVar27 = 0.019999999552965164;
  uVar28 = 0x40d3880000000000;
  dVar32 = 5.5;
  dVar23 = dVar37;
  do {
    dVar31 = (double)(float)(dVar23 + dVar30);
    dVar23 = (double)MB_randRangeFloat((float)dVar23,(float)(dVar23 + dVar30));
    fVar4 = *out;
    fVar5 = (moby->pos).x;
    fVar6 = (moby->pos).y;
    fVar7 = (moby->pos).z;
    dVar24 = (double)SQRT(out[2] * out[2] + fVar4 * fVar4 + out[1] * out[1]);
    if (dVar24 == dVar37) {
      *(float *)(puVar11 + 0x1c) = fVar4;
      *(float *)((int)puVar11 + 0xe4) = out[1];
      *(float *)(puVar11 + 0x1d) = out[2];
      fVar4 = out[3];
      dVar23 = dVar37;
      dVar24 = dVar37;
      dVar26 = dVar37;
    }
    else {
      fVar8 = (float)((double)(float)(dVar23 * (double)out[0xb]) / dVar24);
      dVar23 = (double)(fVar4 * fVar8);
      *(float *)(puVar11 + 0x1c) = fVar4 * fVar8;
      dVar24 = (double)(out[1] * fVar8);
      *(float *)((int)puVar11 + 0xe4) = out[1] * fVar8;
      dVar26 = (double)(out[2] * fVar8);
      *(float *)(puVar11 + 0x1d) = out[2] * fVar8;
      fVar4 = out[3];
    }
    dVar25 = (double)animationSpeed;
    *(float *)((int)puVar11 + 0xec) = fVar4;
    *(float *)(puVar11 + 0x1c) = (float)(dVar23 + (double)fVar5);
    *(float *)((int)puVar11 + 0xe4) = (float)(dVar24 + (double)fVar6);
    *(float *)(puVar11 + 0x1d) = (float)(dVar26 + (double)fVar7);
    puVar11[0x2f] = (longlong)(int)(dVar25 * dVar34);
    iVar17 = SpawnPart_44
                       (uVar35,uVar33,dVar36,uVar29,dVar37,uVar13 - 0x130,uVar13 - 0x120,
                        *(undefined4 *)((int)puVar11 + 0x17c),0x7f,FUN_00606060,3);
    fVar4 = (moby->transform).v2.x;
    fVar5 = (moby->transform).v2.y;
    fVar6 = (moby->transform).v2.z;
    fVar7 = (moby->transform).v2.w;
    if (iVar17 != 0) {
      uVar1 = *DAT_00a52860;
      *(undefined1 *)(iVar17 + 3) = 0x48;
      *(undefined1 *)(iVar17 + 2) = uVar1;
    }
    *(float *)(puVar11 + 0x20) = (float)((double)fVar4 * dVar27);
    *(float *)((int)puVar11 + 0x104) = (float)((double)fVar5 * dVar27);
    *(float *)(puVar11 + 0x21) = (float)((double)fVar6 * dVar27);
    *(float *)((int)puVar11 + 0x10c) = (float)((double)fVar7 * dVar27);
    dVar23 = (double)MB_randRot();
    pfVar18 = (float *)(uVar13 - 0x110);
    MB_RotateQuatAxisAngle((float)dVar23,pfVar18,pfVar18);
    puVar11[0x2f] = (longlong)(int)((double)animationSpeed * dVar32);
    iVar17 = SpawnPart_21(uVar28,uVar13 - 0x130,uVar13 - 0x110,0x4f007fff,0x1fffffff);
    if (iVar17 != 0) {
      *(undefined1 *)(iVar17 + 3) = 0x48;
    }
    dVar23 = dVar31;
  } while (dVar31 < dVar36);
  fVar4 = out[9];
  if (fVar4 != 0.0) {
    if ((((*(ushort *)((int)fVar4 + 0x34) & 0x1000) == 0) &&
        ((*(ushort *)((int)fVar4 + 0x34) & 1) != 0)) && (*(int *)((int)fVar4 + 0x94) == 0)) {
      out[9] = 0.0;
    }
    else if (((float)(int)*(short *)((int)fVar4 + 0xa6) == out[0xf]) &&
            (*(char *)((int)fVar4 + 0x20) != -3 && *(char *)((int)fVar4 + 0x20) != -2)) {
      fVar5 = out[5] - *(float *)((int)fVar4 + 0x14);
      fVar6 = out[4] - *(float *)((int)fVar4 + 0x10);
      fVar7 = out[6] - *(float *)((int)fVar4 + 0x18);
      if (SQRT(fVar7 * fVar7 + fVar6 * fVar6 + fVar5 * fVar5) < 3.0) {
        fVar5 = (moby->pos).x;
        fVar6 = (moby->pos).y;
        fVar7 = *(float *)((int)fVar4 + 0x10) - fVar5;
        fVar4 = *(float *)((int)fVar4 + 0x14) - fVar6;
        dVar32 = ABS((double)fVar7);
        dVar27 = ABS((double)fVar4);
        *(float *)((int)puVar11 + 300) = fVar7;
        *(float *)(puVar11 + 0x26) = fVar4;
        *(float *)((int)puVar11 + 0x134) = (float)(dVar32 - dVar27);
        uVar21 = (ulonglong)(*(uint *)((int)puVar11 + 300) >> 0x1c) & 8 |
                 (ulonglong)(*(uint *)((int)puVar11 + 0x134) >> 0x1e) & 2 |
                 (ulonglong)(*(uint *)(puVar11 + 0x26) >> 0x1d) & 4;
        dVar23 = ABS((double)*(float *)((int)puVar11 + 300));
        if ((double)*(float *)((int)puVar11 + 0x134) - dVar37 < 0.0) {
          dVar23 = dVar27;
        }
        fVar4 = *(float *)(&g_atanQuadrantTable + (int)(uVar21 << 2));
        dVar27 = ABS((double)*(float *)(puVar11 + 0x26));
        if ((double)*(float *)((int)puVar11 + 0x134) - dVar37 < 0.0) {
          dVar27 = dVar32;
        }
        fVar7 = *(float *)(((uint)(uVar21 << 2) | 0x735900) + 4);
        dVar32 = dVar37;
        if (dVar37 < dVar23) {
          lVar15 = uVar13 - 0x200;
          lVar20 = uVar13 - 0xa8;
          lVar19 = uVar13 - 0xb8;
          lVar22 = 2;
          fVar8 = (float)(dVar27 - dVar23) / (float)(dVar27 + dVar23);
          fVar9 = fVar8 * fVar8;
          *(float *)((int)puVar11 + 0x164) = fVar8;
          *(float *)((int)puVar11 + 0x15c) = fVar8;
          *(float *)(puVar11 + 0x2c) = fVar8;
          *(float *)(puVar11 + 0x2b) = fVar8;
          fVar8 = fVar9 * fVar9;
          *(float *)((int)puVar11 + 0x15c) = *(float *)((int)puVar11 + 0x15c) * fVar9;
          *(float *)(puVar11 + 0x2c) = *(float *)(puVar11 + 0x2c) * fVar8;
          *(float *)((int)puVar11 + 0x164) = *(float *)((int)puVar11 + 0x164) * fVar8 * fVar9;
          do {
            *(float *)((int)lVar15 + 0x158) = *(float *)((int)lVar15 + 0x148) * fVar8 * fVar8;
            iVar17 = (int)lVar19;
            lVar19 = lVar19 + 8;
            lVar15 = lVar15 + 8;
            *(float *)((int)lVar20 + 4) = *(float *)(iVar17 + 4) * fVar8 * fVar8;
            lVar20 = lVar20 + 8;
            lVar22 = lVar22 + -1;
          } while (lVar22 != 0);
          lVar22 = 4;
          lVar20 = uVar13 - 0xb8;
          pfVar18 = (float *)&DAT_007358e0;
          lVar15 = lVar16;
          lVar19 = lVar20;
          do {
            fVar8 = *pfVar18;
            fVar9 = pfVar18[1];
            pfVar18 = pfVar18 + 2;
            *(float *)((int)lVar15 + 0x158) = *(float *)((int)lVar15 + 0x158) * fVar8;
            lVar15 = lVar15 + 8;
            *(float *)((int)lVar19 + 4) = *(float *)((int)lVar19 + 4) * fVar9;
            lVar19 = lVar19 + 8;
            lVar22 = lVar22 + -1;
          } while (lVar22 != 0);
          lVar19 = 2;
          lVar15 = lVar16;
          dVar23 = dVar37;
          do {
            iVar17 = (int)lVar15;
            iVar12 = (int)lVar20;
            lVar15 = lVar15 + 0x10;
            lVar20 = lVar20 + 0x10;
            dVar23 = (double)((float)(dVar23 + (double)*(float *)(iVar17 + 0x158)) +
                              *(float *)(iVar12 + 4) + *(float *)(iVar12 + 8) +
                             *(float *)(iVar12 + 0xc));
            lVar19 = lVar19 + -1;
          } while (lVar19 != 0);
          dVar32 = (double)((float)(dVar23 + 0.7853981852531433) * fVar4 + fVar7);
        }
        (moby->rotation).z = (float)dVar32;
        fVar4 = out[9];
        fVar6 = fVar6 - *(float *)((int)fVar4 + 0x14);
        fVar5 = fVar5 - *(float *)((int)fVar4 + 0x10);
        fVar7 = *(float *)((int)fVar4 + 0x18) - (moby->pos).z;
        fVar4 = SQRT(fVar5 * fVar5 + fVar6 * fVar6);
        *(float *)((int)puVar11 + 0x124) = fVar7;
        dVar27 = ABS((double)fVar7);
        dVar32 = ABS((double)fVar4);
        *(float *)(puVar11 + 0x24) = fVar4;
        *(float *)(puVar11 + 0x25) = (float)(dVar32 - dVar27);
        uVar21 = (ulonglong)(*(uint *)(puVar11 + 0x24) >> 0x1c) & 8 |
                 (ulonglong)(*(uint *)(puVar11 + 0x25) >> 0x1e) & 2 |
                 (ulonglong)(*(uint *)((int)puVar11 + 0x124) >> 0x1d) & 4;
        dVar23 = ABS((double)*(float *)(puVar11 + 0x24));
        if ((double)*(float *)(puVar11 + 0x25) - dVar37 < 0.0) {
          dVar23 = dVar27;
        }
        fVar4 = *(float *)(&g_atanQuadrantTable + (int)(uVar21 << 2));
        dVar27 = ABS((double)*(float *)((int)puVar11 + 0x124));
        if ((double)*(float *)(puVar11 + 0x25) - dVar37 < 0.0) {
          dVar27 = dVar32;
        }
        fVar5 = *(float *)(((uint)(uVar21 << 2) | 0x735900) + 4);
        if (dVar37 < dVar23) {
          lVar15 = uVar13 - 0x200;
          lVar20 = uVar13 - 200;
          lVar19 = uVar13 - 0xd8;
          lVar22 = 2;
          fVar6 = (float)(dVar27 - dVar23) / (float)(dVar27 + dVar23);
          fVar7 = fVar6 * fVar6;
          *(float *)((int)puVar11 + 0x144) = fVar6;
          *(float *)((int)puVar11 + 0x13c) = fVar6;
          *(float *)(puVar11 + 0x28) = fVar6;
          *(float *)(puVar11 + 0x27) = fVar6;
          fVar6 = fVar7 * fVar7;
          *(float *)((int)puVar11 + 0x13c) = *(float *)((int)puVar11 + 0x13c) * fVar7;
          *(float *)(puVar11 + 0x28) = *(float *)(puVar11 + 0x28) * fVar6;
          *(float *)((int)puVar11 + 0x144) = *(float *)((int)puVar11 + 0x144) * fVar6 * fVar7;
          do {
            *(float *)((int)lVar15 + 0x138) = *(float *)((int)lVar15 + 0x128) * fVar6 * fVar6;
            iVar17 = (int)lVar19;
            lVar19 = lVar19 + 8;
            lVar15 = lVar15 + 8;
            *(float *)((int)lVar20 + 4) = *(float *)(iVar17 + 4) * fVar6 * fVar6;
            lVar20 = lVar20 + 8;
            lVar22 = lVar22 + -1;
          } while (lVar22 != 0);
          lVar22 = 4;
          lVar20 = uVar13 - 0xd8;
          pfVar18 = (float *)&DAT_007358e0;
          lVar15 = lVar16;
          lVar19 = lVar20;
          do {
            fVar6 = *pfVar18;
            fVar7 = pfVar18[1];
            pfVar18 = pfVar18 + 2;
            *(float *)((int)lVar15 + 0x138) = *(float *)((int)lVar15 + 0x138) * fVar6;
            lVar15 = lVar15 + 8;
            *(float *)((int)lVar19 + 4) = *(float *)((int)lVar19 + 4) * fVar7;
            lVar19 = lVar19 + 8;
            lVar22 = lVar22 + -1;
          } while (lVar22 != 0);
          lVar15 = 2;
          do {
            iVar17 = (int)lVar16;
            iVar12 = (int)lVar20;
            lVar16 = lVar16 + 0x10;
            lVar20 = lVar20 + 0x10;
            dVar37 = (double)((float)(dVar37 + (double)*(float *)(iVar17 + 0x138)) +
                              *(float *)(iVar12 + 4) + *(float *)(iVar12 + 8) +
                             *(float *)(iVar12 + 0xc));
            lVar15 = lVar15 + -1;
          } while (lVar15 != 0);
          dVar37 = (double)((float)(dVar37 + 0.7853981852531433) * fVar4 + fVar5);
        }
        (moby->rotation).y = (float)-dVar37;
        fVar4 = out[9];
        out[4] = *(float *)((int)fVar4 + 0x10);
        out[5] = *(float *)((int)fVar4 + 0x14);
        out[6] = *(float *)((int)fVar4 + 0x18);
        out[7] = *(float *)((int)fVar4 + 0x1c);
        goto LAB_003356b0;
      }
    }
  }
  unused = &DAT_00334cd8;
  dVar32 = 251.32740783691406;
  dVar23 = 2513.274169921875;
  OrganicDeltAng
            ((moby->rotation).z,g_FrameTimeSq * 251.32741,g_FrameTimeSq * 251.32741,
             g_FrameTime * 2513.2742,&(moby->rotation).z,0x334cd8,out + 0xc);
  OrganicDeltAng
            ((moby->rotation).y,(float)((double)g_FrameTimeSq * dVar32),
             (float)((double)g_FrameTimeSq * dVar32),(float)((double)g_FrameTime * dVar23),
             &(moby->rotation).y,(int)unused,out + 0xd);
  out[9] = 0.0;
LAB_003356b0:
  MB_SphericalToVector(out[0xb],(moby->rotation).z,-(moby->rotation).y,out);
  fVar4 = (moby->pos).x + *out;
  (moby->pos).x = fVar4;
  fVar5 = (moby->pos).y + out[1];
  (moby->pos).y = fVar5;
  fVar6 = (moby->pos).z + out[2];
  (moby->pos).z = fVar6;
  uVar33 = 0x4000000000000000;
  if (2.0 <= fVar4) {
    if (((fVar4 <= 1021.0) && (2.0 <= fVar5)) &&
       ((fVar5 <= 1021.0 && ((2.0 <= fVar6 && (fVar6 <= 1021.0)))))) {
      GetBonePosition(lVar14,1,uVar13 - 0x140);
      iVar17 = CollLine(uVar13 - 0x150,uVar13 - 0x140,0,out[8],0);
      fVar4 = g_CollOutput.ip.y;
      if (iVar17 != 0) {
        *(float *)(puVar11 + 0x22) = g_CollOutput.ip.x;
        fVar5 = g_CollOutput.ip.z;
        *(float *)((int)puVar11 + 0x114) = fVar4;
        fVar4 = g_CollOutput.ip.w;
        *(float *)(puVar11 + 0x23) = fVar5;
        *(float *)((int)puVar11 + 0x11c) = fVar4;
        puVar11[0x12] = 0;
        puVar11[0x14] = 0;
        puVar11[0x15] = 1;
        puVar11[0x16] = 0xffffffffffffffff;
        puVar11[0x17] = 0;
        MB_genericExplosion
                  (uVar33,0x4024000000000000,0x4010000000000000,uVar33,0x4022000000000000,dVar36,
                   0x4034000000000000,lVar14,out,uVar13 - 0x100,1,0xffffffffffffffff,10,3,0x10);
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


