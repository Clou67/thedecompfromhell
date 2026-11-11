// game/update/moby578.cpp -- reconstructed from NPEA00385 EBOOT
// STATUS: NOT STARTED (raw Ghidra output)
// 8 functions, 0x3cafa4-0x3cce70
#include "game/update/moby578.h"
#include "game/camera.h"
#include "game/collproc.h"
#include "game/hero.h"
#include "game/mobyfunc.h"
#include "game/mobyutil.h"
#include "game/sound.h"
#include "game/update/moby426.h"
#include "game/update/moby628.h"
#include "game/update/moby849.h"
#include "idol/fastfunc.h"

// 0x03cafa4 (0x58 bytes)
void M578_003cafa4(MobyInstance *param_1)

{
  undefined8 uVar1;
  
  uVar1 = M849_MB_Sucking(param_1);
  if ((int)uVar1 == 0) {
    if (param_1->state == '\a') {
      param_1->state = '\x01';
    }
  }
  else {
    param_1->state = '\a';
  }
  return;
}


// 0x03caffc (0x58 bytes)
void M578_003caffc(int param_1)

{
  int iVar1;
  
  iVar1 = M849_0048aa70();
  if (iVar1 == 0) {
    if (*(char *)(param_1 + 0x20) == '\a') {
      *(undefined1 *)(param_1 + 0x20) = 1;
    }
  }
  else {
    *(undefined1 *)(param_1 + 0x20) = 7;
  }
  return;
}


// 0x03cb054 (0xd0 bytes)
undefined8
M578_003cb054
          (undefined8 param_1,MobyInstance *param_2,undefined8 param_3,undefined8 param_4)

{
  int iVar2;
  undefined8 uVar1;
  
  iVar2 = FUN_00486828();
  uVar1 = M849_0048acb8(param_1,param_2,param_3,param_4);
  if ((int)uVar1 == 0) {
    if (param_2->state == '\a') {
      param_2->state = '\x01';
    }
  }
  else {
    param_2->state = '\a';
  }
  if ((iVar2 != 0) && (*(short *)(iVar2 + 0x68) == 6)) {
    PlayMobySound(2,0,param_2);
  }
  return uVar1;
}


// 0x03cb124 (0x38 bytes)
void M578_003cb124(int param_1)

{
  M849_0048afe8();
  *(undefined1 *)(param_1 + 0x20) = 7;
  return;
}


// 0x03cb15c (0x40 bytes)
longlong M578_003cb15c(int param_1)

{
  longlong lVar1;
  
  if (param_1 == 0) {
    lVar1 = 0;
  }
  else {
    lVar1 = (ulonglong)*(uint *)(param_1 + 0x78) + 0x60;
    lVar1 = lVar1 + (ZERO_MASK(*(uint *)(param_1 + 0x78)) & -lVar1);
  }
  return lVar1;
}


// 0x03cb19c (0x14 bytes)
void M578_003cb19c(void)

{
  DAT_008461f4 = 0x10000;
  return;
}


// 0x03cb1b8 (0xe08 bytes)
// inlined: FastAtan2 @0x3cb330, FastAtan2 @0x3cb4e8, FastAtan2 @0x3cb6a8, FastAtan2 @0x3cb938, FastAtan2 @0x3cbbb0, FastAtan2 @0x3cbe28
void M578_003cb1b8(MobyInstance *param_1)

{
  float fVar1;
  undefined4 uVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  MobyModeBit MVar6;
  void *pvVar7;
  MobyInstance *pMVar8;
  ulonglong *puVar9;
  int iVar10;
  int iVar11;
  ulonglong uVar12;
  int iVar15;
  int iVar16;
  longlong lVar13;
  longlong lVar14;
  float *pfVar18;
  longlong lVar17;
  longlong lVar19;
  ulonglong uVar20;
  ulonglong unaff_r28;
  ulonglong unaff_r29;
  ulonglong unaff_r30;
  ulonglong uVar21;
  ulonglong unaff_r31;
  ulonglong in_LR;
  longlong lVar22;
  double dVar23;
  double dVar24;
  double dVar25;
  double dVar26;
  ulonglong in_f30;
  double dVar27;
  ulonglong in_f31;
  double dVar28;
  
  uVar12 = ZEXT48(&stack0x00000000);
  lVar14 = uVar12 - 0x1c0;
  puVar9 = (ulonglong *)lVar14;
  *puVar9 = uVar12;
  puVar9[0x3a] = in_LR;
  puVar9[0x36] = in_f30;
  puVar9[0x37] = in_f31;
  puVar9[0x35] = unaff_r31;
  puVar9[0x34] = unaff_r30;
  pvVar7 = param_1->pVar;
  uVar21 = ZEXT48(pvVar7);
  dVar27 = 0.0;
  puVar9[0x33] = unaff_r29;
  puVar9[0x32] = unaff_r28;
  *(undefined4 *)((int)puVar9 + 0x74) = 0;
  iVar15 = MB_damage(param_1,0x330000,0);
  iVar16 = MB_HandleDamage
                     (param_1,iVar15,uVar21 + 0x20,0,puVar9 + 0xe,(int)puVar9 + 0x74,0,4);
  if ((*(int *)(puVar9 + 0xe) == 1) || (param_1->state == '\x05')) goto LAB_003cbf80;
  pMVar8 = *(MobyInstance **)(iVar15 + 0x20);
  dVar28 = 0.7853981852531433;
  dVar24 = dVar27;
  if (pMVar8 == (MobyInstance *)0x0) {
    fVar5 = (param_1->pos).x - g_heroPosition.x;
    fVar1 = (param_1->pos).y - g_heroPosition.y;
    dVar23 = ABS((double)fVar5);
    dVar26 = ABS((double)fVar1);
    *(float *)(puVar9 + 0x14) = fVar5;
    *(float *)((int)puVar9 + 0xa4) = fVar1;
    *(float *)(puVar9 + 0x15) = (float)(dVar23 - dVar26);
    uVar20 = (ulonglong)(*(uint *)(puVar9 + 0x14) >> 0x1c) & 8 |
             (ulonglong)(*(uint *)(puVar9 + 0x15) >> 0x1e) & 2 |
             (ulonglong)(*(uint *)((int)puVar9 + 0xa4) >> 0x1d) & 4;
    dVar25 = ABS((double)*(float *)(puVar9 + 0x14));
    if ((double)*(float *)(puVar9 + 0x15) - dVar27 < 0.0) {
      dVar25 = dVar26;
    }
    fVar5 = *(float *)(&g_atanQuadrantTable + (int)(uVar20 << 2));
    dVar26 = ABS((double)*(float *)((int)puVar9 + 0xa4));
    if ((double)*(float *)(puVar9 + 0x15) - dVar27 < 0.0) {
      dVar26 = dVar23;
    }
    fVar1 = *(float *)(((uint)(uVar20 << 2) | 0x735900) + 4);
    if (dVar27 < dVar25) {
      lVar13 = uVar12 - 0x1b0;
      lVar17 = uVar12 - 0x9c;
      lVar19 = uVar12 - 0x8c;
      lVar22 = 2;
      fVar3 = (float)(dVar26 - dVar25) / (float)(dVar26 + dVar25);
      fVar4 = fVar3 * fVar3;
      *(float *)(puVar9 + 0x26) = fVar3;
      *(float *)(puVar9 + 0x25) = fVar3;
      *(float *)((int)puVar9 + 300) = fVar3;
      *(float *)((int)puVar9 + 0x124) = fVar3;
      fVar3 = fVar4 * fVar4;
      *(float *)(puVar9 + 0x25) = *(float *)(puVar9 + 0x25) * fVar4;
      *(float *)((int)puVar9 + 300) = *(float *)((int)puVar9 + 300) * fVar3;
      *(float *)(puVar9 + 0x26) = *(float *)(puVar9 + 0x26) * fVar3 * fVar4;
      do {
        *(float *)((int)lVar13 + 0x124) = *(float *)((int)lVar13 + 0x114) * fVar3 * fVar3;
        iVar10 = (int)lVar17;
        lVar13 = lVar13 + 8;
        lVar17 = lVar17 + 8;
        *(float *)((int)lVar19 + 4) = *(float *)(iVar10 + 4) * fVar3 * fVar3;
        lVar19 = lVar19 + 8;
        lVar22 = lVar22 + -1;
      } while (lVar22 != 0);
      lVar22 = 4;
      lVar19 = uVar12 - 0x9c;
      pfVar18 = (float *)&DAT_007358e0;
      lVar13 = lVar14;
      lVar17 = lVar19;
      do {
        fVar3 = *pfVar18;
        fVar4 = pfVar18[1];
        pfVar18 = pfVar18 + 2;
        *(float *)((int)lVar13 + 0x124) = *(float *)((int)lVar13 + 0x124) * fVar3;
        lVar13 = lVar13 + 8;
        *(float *)((int)lVar17 + 4) = *(float *)((int)lVar17 + 4) * fVar4;
        lVar17 = lVar17 + 8;
        lVar22 = lVar22 + -1;
      } while (lVar22 != 0);
      lVar17 = 2;
      lVar13 = lVar14;
      do {
        iVar10 = (int)lVar13;
        lVar13 = lVar13 + 0x10;
        iVar11 = (int)lVar19;
        lVar19 = lVar19 + 0x10;
        dVar24 = (double)((float)(dVar24 + (double)*(float *)(iVar10 + 0x124)) +
                          *(float *)(iVar11 + 4) + *(float *)(iVar11 + 8) + *(float *)(iVar11 + 0xc)
                         );
        lVar17 = lVar17 + -1;
      } while (lVar17 != 0);
      dVar24 = (double)((float)(dVar24 + 0.7853981852531433) * fVar5 + fVar1);
    }
  }
  else if (pMVar8 == g_currentWeaponMoby) {
    fVar5 = (param_1->pos).x - g_heroPosition.x;
    fVar1 = (param_1->pos).y - g_heroPosition.y;
    dVar23 = ABS((double)fVar5);
    dVar26 = ABS((double)fVar1);
    *(float *)((int)puVar9 + 0xac) = fVar5;
    *(float *)(puVar9 + 0x16) = fVar1;
    *(float *)((int)puVar9 + 0xb4) = (float)(dVar23 - dVar26);
    uVar20 = (ulonglong)(*(uint *)((int)puVar9 + 0xac) >> 0x1c) & 8 |
             (ulonglong)(*(uint *)((int)puVar9 + 0xb4) >> 0x1e) & 2 |
             (ulonglong)(*(uint *)(puVar9 + 0x16) >> 0x1d) & 4;
    dVar25 = ABS((double)*(float *)((int)puVar9 + 0xac));
    if ((double)*(float *)((int)puVar9 + 0xb4) - dVar27 < 0.0) {
      dVar25 = dVar26;
    }
    fVar5 = *(float *)(&g_atanQuadrantTable + (int)(uVar20 << 2));
    dVar26 = ABS((double)*(float *)(puVar9 + 0x16));
    if ((double)*(float *)((int)puVar9 + 0xb4) - dVar27 < 0.0) {
      dVar26 = dVar23;
    }
    fVar1 = *(float *)(((uint)(uVar20 << 2) | 0x735900) + 4);
    if (dVar27 < dVar25) {
      lVar13 = uVar12 - 0x1b0;
      lVar19 = uVar12 - 0x6c;
      lVar17 = uVar12 - 0x7c;
      lVar22 = 2;
      fVar3 = (float)(dVar26 - dVar25) / (float)(dVar26 + dVar25);
      fVar4 = fVar3 * fVar3;
      *(float *)(puVar9 + 0x2a) = fVar3;
      *(float *)(puVar9 + 0x29) = fVar3;
      *(float *)((int)puVar9 + 0x14c) = fVar3;
      *(float *)((int)puVar9 + 0x144) = fVar3;
      fVar3 = fVar4 * fVar4;
      *(float *)(puVar9 + 0x29) = *(float *)(puVar9 + 0x29) * fVar4;
      *(float *)((int)puVar9 + 0x14c) = *(float *)((int)puVar9 + 0x14c) * fVar3;
      *(float *)(puVar9 + 0x2a) = *(float *)(puVar9 + 0x2a) * fVar3 * fVar4;
      do {
        *(float *)((int)lVar13 + 0x144) = *(float *)((int)lVar13 + 0x134) * fVar3 * fVar3;
        iVar10 = (int)lVar17;
        lVar17 = lVar17 + 8;
        lVar13 = lVar13 + 8;
        *(float *)((int)lVar19 + 4) = *(float *)(iVar10 + 4) * fVar3 * fVar3;
        lVar19 = lVar19 + 8;
        lVar22 = lVar22 + -1;
      } while (lVar22 != 0);
      lVar22 = 4;
      lVar19 = uVar12 - 0x7c;
      pfVar18 = (float *)&DAT_007358e0;
      lVar13 = lVar14;
      lVar17 = lVar19;
      do {
        fVar3 = *pfVar18;
        fVar4 = pfVar18[1];
        pfVar18 = pfVar18 + 2;
        *(float *)((int)lVar13 + 0x144) = *(float *)((int)lVar13 + 0x144) * fVar3;
        lVar13 = lVar13 + 8;
        *(float *)((int)lVar17 + 4) = *(float *)((int)lVar17 + 4) * fVar4;
        lVar17 = lVar17 + 8;
        lVar22 = lVar22 + -1;
      } while (lVar22 != 0);
      lVar17 = 2;
      lVar13 = lVar14;
      do {
        iVar10 = (int)lVar13;
        iVar11 = (int)lVar19;
        lVar13 = lVar13 + 0x10;
        lVar19 = lVar19 + 0x10;
        dVar24 = (double)((float)(dVar24 + (double)*(float *)(iVar10 + 0x144)) +
                          *(float *)(iVar11 + 4) + *(float *)(iVar11 + 8) + *(float *)(iVar11 + 0xc)
                         );
        lVar17 = lVar17 + -1;
      } while (lVar17 != 0);
      dVar24 = (double)((float)(dVar24 + 0.7853981852531433) * fVar5 + fVar1);
    }
  }
  else {
    fVar5 = (param_1->pos).x - (pMVar8->pos).x;
    fVar1 = (param_1->pos).y - (pMVar8->pos).y;
    dVar23 = ABS((double)fVar5);
    dVar26 = ABS((double)fVar1);
    *(float *)(puVar9 + 0x17) = fVar5;
    *(float *)((int)puVar9 + 0xbc) = fVar1;
    *(float *)(puVar9 + 0x18) = (float)(dVar23 - dVar26);
    uVar20 = (ulonglong)(*(uint *)(puVar9 + 0x17) >> 0x1c) & 8 |
             (ulonglong)(*(uint *)(puVar9 + 0x18) >> 0x1e) & 2 |
             (ulonglong)(*(uint *)((int)puVar9 + 0xbc) >> 0x1d) & 4;
    dVar25 = ABS((double)*(float *)(puVar9 + 0x17));
    if ((double)*(float *)(puVar9 + 0x18) - dVar27 < 0.0) {
      dVar25 = dVar26;
    }
    fVar5 = *(float *)(&g_atanQuadrantTable + (int)(uVar20 << 2));
    dVar26 = ABS((double)*(float *)((int)puVar9 + 0xbc));
    if ((double)*(float *)(puVar9 + 0x18) - dVar27 < 0.0) {
      dVar26 = dVar23;
    }
    fVar1 = *(float *)(((uint)(uVar20 << 2) | 0x735900) + 4);
    if (dVar27 < dVar25) {
      lVar13 = uVar12 - 0x1b0;
      lVar19 = uVar12 - 0x4c;
      lVar17 = uVar12 - 0x5c;
      lVar22 = 2;
      fVar3 = (float)(dVar26 - dVar25) / (float)(dVar26 + dVar25);
      fVar4 = fVar3 * fVar3;
      *(float *)(puVar9 + 0x2e) = fVar3;
      *(float *)(puVar9 + 0x2d) = fVar3;
      *(float *)((int)puVar9 + 0x16c) = fVar3;
      *(float *)((int)puVar9 + 0x164) = fVar3;
      fVar3 = fVar4 * fVar4;
      *(float *)(puVar9 + 0x2d) = *(float *)(puVar9 + 0x2d) * fVar4;
      *(float *)((int)puVar9 + 0x16c) = *(float *)((int)puVar9 + 0x16c) * fVar3;
      *(float *)(puVar9 + 0x2e) = *(float *)(puVar9 + 0x2e) * fVar3 * fVar4;
      do {
        *(float *)((int)lVar13 + 0x164) = *(float *)((int)lVar13 + 0x154) * fVar3 * fVar3;
        iVar10 = (int)lVar17;
        lVar17 = lVar17 + 8;
        lVar13 = lVar13 + 8;
        *(float *)((int)lVar19 + 4) = *(float *)(iVar10 + 4) * fVar3 * fVar3;
        lVar19 = lVar19 + 8;
        lVar22 = lVar22 + -1;
      } while (lVar22 != 0);
      lVar22 = 4;
      lVar19 = uVar12 - 0x5c;
      pfVar18 = (float *)&DAT_007358e0;
      lVar13 = lVar14;
      lVar17 = lVar19;
      do {
        fVar3 = *pfVar18;
        fVar4 = pfVar18[1];
        pfVar18 = pfVar18 + 2;
        *(float *)((int)lVar13 + 0x164) = *(float *)((int)lVar13 + 0x164) * fVar3;
        lVar13 = lVar13 + 8;
        *(float *)((int)lVar17 + 4) = *(float *)((int)lVar17 + 4) * fVar4;
        lVar17 = lVar17 + 8;
        lVar22 = lVar22 + -1;
      } while (lVar22 != 0);
      lVar17 = 2;
      lVar13 = lVar14;
      do {
        iVar10 = (int)lVar13;
        iVar11 = (int)lVar19;
        lVar13 = lVar13 + 0x10;
        lVar19 = lVar19 + 0x10;
        dVar24 = (double)((float)(dVar24 + (double)*(float *)(iVar10 + 0x164)) +
                          *(float *)(iVar11 + 4) + *(float *)(iVar11 + 8) + *(float *)(iVar11 + 0xc)
                         );
        lVar17 = lVar17 + -1;
      } while (lVar17 != 0);
      dVar24 = (double)((float)(dVar24 + 0.7853981852531433) * fVar5 + fVar1);
    }
  }
  *(float *)(puVar9 + 0xf) = (float)dVar24;
  fVar5 = *(float *)((int)pvVar7 + 0x20) - *(float *)((int)puVar9 + 0x74);
  *(float *)((int)pvVar7 + 0x20) = fVar5;
  if ((double)fVar5 <= dVar27) {
LAB_003cbce4:
    *(float *)((int)pvVar7 + 0x80) = DAT_00846218 * DAT_0071f418;
    MB_SetupJumpArc
              ((double)DAT_00846228,(double)DAT_0084622c,&PTR_DAT_00840000,&PTR_DAT_00840000,
               uVar21 + 0x70);
    *(undefined1 *)((int)pvVar7 + 0xad) = 0;
    *(undefined4 *)((int)pvVar7 + 0x94) = 9;
    uVar2 = *(undefined4 *)(iVar15 + 0x18);
    *(undefined4 *)(puVar9 + 6) = *(undefined4 *)(iVar15 + 0x10);
    *(undefined4 *)(puVar9 + 7) = uVar2;
    uVar2 = *(undefined4 *)(iVar15 + 0x1c);
    *(undefined4 *)((int)puVar9 + 0x34) = *(undefined4 *)(iVar15 + 0x14);
    *(undefined4 *)((int)puVar9 + 0x3c) = uVar2;
    MB_VecAtan2Angles(puVar9[6],puVar9[7],uVar12 - 0x148,uVar21 + 0x88,uVar21 + 0x8c);
    fVar5 = (param_1->pos).x - g_heroPosition.x;
    fVar1 = (param_1->pos).y - g_heroPosition.y;
    dVar25 = ABS((double)fVar5);
    dVar23 = ABS((double)fVar1);
    *(float *)((int)puVar9 + 0x7c) = fVar5;
    *(float *)(puVar9 + 0x10) = fVar1;
    *(float *)((int)puVar9 + 0x84) = (float)(dVar25 - dVar23);
    uVar20 = (ulonglong)(*(uint *)((int)puVar9 + 0x7c) >> 0x1c) & 8 |
             (ulonglong)(*(uint *)((int)puVar9 + 0x84) >> 0x1e) & 2 |
             (ulonglong)(*(uint *)(puVar9 + 0x10) >> 0x1d) & 4;
    lVar13 = uVar20 << 2;
    dVar24 = ABS((double)*(float *)((int)puVar9 + 0x7c));
    if ((double)*(float *)((int)puVar9 + 0x84) - dVar27 < 0.0) {
      dVar24 = dVar23;
    }
    fVar5 = *(float *)(&g_atanQuadrantTable + (int)lVar13);
    dVar23 = ABS((double)*(float *)(puVar9 + 0x10));
    if ((double)*(float *)((int)puVar9 + 0x84) - dVar27 < 0.0) {
      dVar23 = dVar25;
    }
    fVar1 = *(float *)(((uint)(uVar20 << 2) | 0x735900) + 4);
    if (dVar27 < dVar24) {
      lVar13 = uVar12 - 0x1b0;
      lVar19 = uVar12 - 0xec;
      lVar17 = uVar12 - 0xfc;
      lVar22 = 2;
      fVar3 = (float)(dVar23 - dVar24) / (float)(dVar23 + dVar24);
      fVar4 = fVar3 * fVar3;
      *(float *)(puVar9 + 0x1a) = fVar3;
      *(float *)(puVar9 + 0x19) = fVar3;
      *(float *)((int)puVar9 + 0xcc) = fVar3;
      *(float *)((int)puVar9 + 0xc4) = fVar3;
      fVar3 = fVar4 * fVar4;
      *(float *)(puVar9 + 0x19) = *(float *)(puVar9 + 0x19) * fVar4;
      *(float *)((int)puVar9 + 0xcc) = *(float *)((int)puVar9 + 0xcc) * fVar3;
      *(float *)(puVar9 + 0x1a) = *(float *)(puVar9 + 0x1a) * fVar3 * fVar4;
      do {
        *(float *)((int)lVar13 + 0xc4) = *(float *)((int)lVar13 + 0xb4) * fVar3 * fVar3;
        iVar15 = (int)lVar17;
        lVar17 = lVar17 + 8;
        lVar13 = lVar13 + 8;
        *(float *)((int)lVar19 + 4) = *(float *)(iVar15 + 4) * fVar3 * fVar3;
        lVar19 = lVar19 + 8;
        lVar22 = lVar22 + -1;
      } while (lVar22 != 0);
      lVar22 = 4;
      lVar19 = uVar12 - 0xfc;
      pfVar18 = (float *)&DAT_007358e0;
      lVar17 = lVar14;
      lVar13 = lVar19;
      do {
        fVar3 = *pfVar18;
        fVar4 = pfVar18[1];
        pfVar18 = pfVar18 + 2;
        *(float *)((int)lVar17 + 0xc4) = *(float *)((int)lVar17 + 0xc4) * fVar3;
        lVar17 = lVar17 + 8;
        *(float *)((int)lVar13 + 4) = *(float *)((int)lVar13 + 4) * fVar4;
        lVar13 = lVar13 + 8;
        lVar22 = lVar22 + -1;
      } while (lVar22 != 0);
      lVar17 = 2;
      do {
        iVar15 = (int)lVar14;
        iVar16 = (int)lVar19;
        lVar14 = lVar14 + 0x10;
        lVar19 = lVar19 + 0x10;
        dVar27 = (double)((float)(dVar27 + (double)*(float *)(iVar15 + 0xc4)) +
                          *(float *)(iVar16 + 4) + *(float *)(iVar16 + 8) + *(float *)(iVar16 + 0xc)
                         );
        lVar17 = lVar17 + -1;
      } while (lVar17 != 0);
      dVar27 = (double)((float)(dVar27 + dVar28) * fVar5 + fVar1);
    }
    MB_StartKick(dVar27,param_1,uVar21 + 0x70,lVar13,5,1,0);
    MVar6 = param_1->modeBits;
    *(undefined4 *)((int)pvVar7 + 0xc0) = 0x41000000;
    *(undefined4 *)((int)pvVar7 + 0xc4) = 0x41700000;
    param_1->modeBits =
         MVar6 & (MIRROR|CAN_BE_DAMAGED|HIDE_BACKFACES|DISABLE_Z_WRITE|DRAW_SHADOW|
                  DRAW_TRANSPARENT_WEIRD|LOCK_ROTATION|NO_DRAW|UNK_40|HAS_SPECIAL_VARS|HAS_GLOW|
                  TRANSPARENT|NO_POST_UPDATE|NO_UPDATE|DISABLED);
    *(undefined1 *)((int)pvVar7 + 0x67) = 0xfa;
    param_1->state = '\x05';
  }
  else {
    if (iVar16 < 3) {
      if (iVar16 != 1) goto LAB_003cbf70;
      goto LAB_003cbce4;
    }
    if (iVar16 < 6) {
      if (iVar16 < 4) {
LAB_003cb7f4:
        *(float *)((int)pvVar7 + 0x80) = DAT_0084621c * DAT_0071f418;
        MB_SetupJumpArc
                  ((double)DAT_00846220,(double)DAT_00846224,&PTR_DAT_00840000,&PTR_DAT_00840000,
                   uVar21 + 0x70);
        *(undefined1 *)((int)pvVar7 + 0xad) = 0;
        *(undefined4 *)((int)pvVar7 + 0x94) = 9;
        uVar2 = *(undefined4 *)(iVar15 + 0x18);
        *(undefined4 *)(puVar9 + 6) = *(undefined4 *)(iVar15 + 0x10);
        *(undefined4 *)(puVar9 + 7) = uVar2;
        uVar2 = *(undefined4 *)(iVar15 + 0x1c);
        *(undefined4 *)((int)puVar9 + 0x34) = *(undefined4 *)(iVar15 + 0x14);
        *(undefined4 *)((int)puVar9 + 0x3c) = uVar2;
        MB_VecAtan2Angles(puVar9[6],puVar9[7],uVar12 - 0x148,uVar21 + 0x88,uVar21 + 0x8c);
        fVar5 = (param_1->pos).x - g_heroPosition.x;
        fVar1 = (param_1->pos).y - g_heroPosition.y;
        dVar25 = ABS((double)fVar5);
        dVar23 = ABS((double)fVar1);
        *(float *)((int)puVar9 + 0x94) = fVar5;
        *(float *)(puVar9 + 0x13) = fVar1;
        *(float *)((int)puVar9 + 0x9c) = (float)(dVar25 - dVar23);
        uVar20 = (ulonglong)(*(uint *)((int)puVar9 + 0x94) >> 0x1c) & 8 |
                 (ulonglong)(*(uint *)((int)puVar9 + 0x9c) >> 0x1e) & 2 |
                 (ulonglong)(*(uint *)(puVar9 + 0x13) >> 0x1d) & 4;
        lVar13 = uVar20 << 2;
        dVar24 = ABS((double)*(float *)((int)puVar9 + 0x94));
        if ((double)*(float *)((int)puVar9 + 0x9c) - dVar27 < 0.0) {
          dVar24 = dVar23;
        }
        fVar5 = *(float *)(&g_atanQuadrantTable + (int)lVar13);
        dVar23 = ABS((double)*(float *)(puVar9 + 0x13));
        if ((double)*(float *)((int)puVar9 + 0x9c) - dVar27 < 0.0) {
          dVar23 = dVar25;
        }
        fVar1 = *(float *)(((uint)(uVar20 << 2) | 0x735900) + 4);
        if (dVar27 < dVar24) {
          lVar13 = uVar12 - 0x1b0;
          lVar19 = uVar12 - 0xac;
          lVar17 = uVar12 - 0xbc;
          lVar22 = 2;
          fVar3 = (float)(dVar23 - dVar24) / (float)(dVar23 + dVar24);
          fVar4 = fVar3 * fVar3;
          *(float *)(puVar9 + 0x22) = fVar3;
          *(float *)(puVar9 + 0x21) = fVar3;
          *(float *)((int)puVar9 + 0x10c) = fVar3;
          *(float *)((int)puVar9 + 0x104) = fVar3;
          fVar3 = fVar4 * fVar4;
          *(float *)(puVar9 + 0x21) = *(float *)(puVar9 + 0x21) * fVar4;
          *(float *)((int)puVar9 + 0x10c) = *(float *)((int)puVar9 + 0x10c) * fVar3;
          *(float *)(puVar9 + 0x22) = *(float *)(puVar9 + 0x22) * fVar3 * fVar4;
          do {
            *(float *)((int)lVar13 + 0x104) = *(float *)((int)lVar13 + 0xf4) * fVar3 * fVar3;
            iVar15 = (int)lVar17;
            lVar17 = lVar17 + 8;
            lVar13 = lVar13 + 8;
            *(float *)((int)lVar19 + 4) = *(float *)(iVar15 + 4) * fVar3 * fVar3;
            lVar19 = lVar19 + 8;
            lVar22 = lVar22 + -1;
          } while (lVar22 != 0);
          lVar22 = 4;
          lVar19 = uVar12 - 0xbc;
          pfVar18 = (float *)&DAT_007358e0;
          lVar17 = lVar14;
          lVar13 = lVar19;
          do {
            fVar3 = *pfVar18;
            fVar4 = pfVar18[1];
            pfVar18 = pfVar18 + 2;
            *(float *)((int)lVar17 + 0x104) = *(float *)((int)lVar17 + 0x104) * fVar3;
            lVar17 = lVar17 + 8;
            *(float *)((int)lVar13 + 4) = *(float *)((int)lVar13 + 4) * fVar4;
            lVar13 = lVar13 + 8;
            lVar22 = lVar22 + -1;
          } while (lVar22 != 0);
          lVar17 = 2;
          do {
            iVar15 = (int)lVar14;
            iVar16 = (int)lVar19;
            lVar14 = lVar14 + 0x10;
            lVar19 = lVar19 + 0x10;
            dVar27 = (double)((float)(dVar27 + (double)*(float *)(iVar15 + 0x104)) +
                              *(float *)(iVar16 + 4) + *(float *)(iVar16 + 8) +
                             *(float *)(iVar16 + 0xc));
            lVar17 = lVar17 + -1;
          } while (lVar17 != 0);
          dVar27 = (double)((float)(dVar27 + dVar28) * fVar5 + fVar1);
        }
        MB_StartKick(dVar27,param_1,uVar21 + 0x70,lVar13,3,1,0);
        *(undefined4 *)((int)pvVar7 + 0xc0) = 0x40a00000;
        *(undefined4 *)((int)pvVar7 + 0xc4) = 0x41200000;
        param_1->state = '\x04';
      }
      else {
        *(float *)((int)pvVar7 + 0x80) = DAT_0084621c * DAT_0071f418;
        MB_SetupJumpArc
                  ((double)DAT_00846220,(double)DAT_00846224,&PTR_DAT_00840000,&PTR_DAT_00840000,
                   uVar21 + 0x70);
        *(undefined1 *)((int)pvVar7 + 0xad) = 0;
        *(undefined4 *)((int)pvVar7 + 0x94) = 9;
        uVar2 = *(undefined4 *)(iVar15 + 0x18);
        *(undefined4 *)(puVar9 + 6) = *(undefined4 *)(iVar15 + 0x10);
        *(undefined4 *)(puVar9 + 7) = uVar2;
        uVar2 = *(undefined4 *)(iVar15 + 0x1c);
        *(undefined4 *)((int)puVar9 + 0x34) = *(undefined4 *)(iVar15 + 0x14);
        *(undefined4 *)((int)puVar9 + 0x3c) = uVar2;
        MB_VecAtan2Angles(puVar9[6],puVar9[7],uVar12 - 0x148,uVar21 + 0x88,uVar21 + 0x8c);
        fVar5 = (param_1->pos).x - g_heroPosition.x;
        fVar1 = (param_1->pos).y - g_heroPosition.y;
        dVar25 = ABS((double)fVar5);
        dVar23 = ABS((double)fVar1);
        *(float *)(puVar9 + 0x11) = fVar5;
        *(float *)((int)puVar9 + 0x8c) = fVar1;
        *(float *)(puVar9 + 0x12) = (float)(dVar25 - dVar23);
        uVar20 = (ulonglong)(*(uint *)(puVar9 + 0x11) >> 0x1c) & 8 |
                 (ulonglong)(*(uint *)(puVar9 + 0x12) >> 0x1e) & 2 |
                 (ulonglong)(*(uint *)((int)puVar9 + 0x8c) >> 0x1d) & 4;
        lVar13 = uVar20 << 2;
        dVar24 = ABS((double)*(float *)(puVar9 + 0x11));
        if ((double)*(float *)(puVar9 + 0x12) - dVar27 < 0.0) {
          dVar24 = dVar23;
        }
        fVar5 = *(float *)(&g_atanQuadrantTable + (int)lVar13);
        dVar23 = ABS((double)*(float *)((int)puVar9 + 0x8c));
        if ((double)*(float *)(puVar9 + 0x12) - dVar27 < 0.0) {
          dVar23 = dVar25;
        }
        fVar1 = *(float *)(((uint)(uVar20 << 2) | 0x735900) + 4);
        if (dVar27 < dVar24) {
          lVar13 = uVar12 - 0x1b0;
          lVar19 = uVar12 - 0xcc;
          lVar17 = uVar12 - 0xdc;
          lVar22 = 2;
          fVar3 = (float)(dVar23 - dVar24) / (float)(dVar23 + dVar24);
          fVar4 = fVar3 * fVar3;
          *(float *)(puVar9 + 0x1e) = fVar3;
          *(float *)(puVar9 + 0x1d) = fVar3;
          *(float *)((int)puVar9 + 0xec) = fVar3;
          *(float *)((int)puVar9 + 0xe4) = fVar3;
          fVar3 = fVar4 * fVar4;
          *(float *)(puVar9 + 0x1d) = *(float *)(puVar9 + 0x1d) * fVar4;
          *(float *)((int)puVar9 + 0xec) = *(float *)((int)puVar9 + 0xec) * fVar3;
          *(float *)(puVar9 + 0x1e) = *(float *)(puVar9 + 0x1e) * fVar3 * fVar4;
          do {
            *(float *)((int)lVar13 + 0xe4) = *(float *)((int)lVar13 + 0xd4) * fVar3 * fVar3;
            iVar15 = (int)lVar17;
            lVar17 = lVar17 + 8;
            lVar13 = lVar13 + 8;
            *(float *)((int)lVar19 + 4) = *(float *)(iVar15 + 4) * fVar3 * fVar3;
            lVar19 = lVar19 + 8;
            lVar22 = lVar22 + -1;
          } while (lVar22 != 0);
          lVar22 = 4;
          lVar19 = uVar12 - 0xdc;
          pfVar18 = (float *)&DAT_007358e0;
          lVar17 = lVar14;
          lVar13 = lVar19;
          do {
            fVar3 = *pfVar18;
            fVar4 = pfVar18[1];
            pfVar18 = pfVar18 + 2;
            *(float *)((int)lVar17 + 0xe4) = *(float *)((int)lVar17 + 0xe4) * fVar3;
            lVar17 = lVar17 + 8;
            *(float *)((int)lVar13 + 4) = *(float *)((int)lVar13 + 4) * fVar4;
            lVar13 = lVar13 + 8;
            lVar22 = lVar22 + -1;
          } while (lVar22 != 0);
          lVar17 = 2;
          do {
            iVar15 = (int)lVar14;
            iVar16 = (int)lVar19;
            lVar14 = lVar14 + 0x10;
            lVar19 = lVar19 + 0x10;
            dVar27 = (double)((float)(dVar27 + (double)*(float *)(iVar15 + 0xe4)) +
                              *(float *)(iVar16 + 4) + *(float *)(iVar16 + 8) +
                             *(float *)(iVar16 + 0xc));
            lVar17 = lVar17 + -1;
          } while (lVar17 != 0);
          dVar27 = (double)((float)(dVar27 + dVar28) * fVar5 + fVar1);
        }
        MB_StartKick(dVar27,param_1,uVar21 + 0x70,lVar13,4,1,0);
        *(undefined4 *)((int)pvVar7 + 0xc0) = 0x40f00000;
        *(undefined4 *)((int)pvVar7 + 0xc4) = 0x41700000;
        param_1->state = '\x04';
      }
    }
    else if (iVar16 < 7) goto LAB_003cb7f4;
  }
LAB_003cbf70:
  MB_UpdateLightsTransition(param_1,uVar21 + 0x60);
LAB_003cbf80:
  param_1->damage = -1;
  MB_ColorDyingMoby(param_1,uVar21 + 0x60);
  return;
}


// 0x03cc030 (0xe40 bytes)
// inlined: FastAtan2 @0x3cc324
/* Moby 578 */

void UpdateMoby_578(MobyInstance *moby)

{
  bool bVar1;
  float fVar2;
  u8 uVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  f32 fVar8;
  f32 fVar9;
  float fVar10;
  void *pvVar11;
  int *piVar12;
  f32 fVar13;
  Spline *pSVar14;
  undefined2 uVar15;
  undefined4 uVar16;
  ulonglong *puVar17;
  ulonglong uVar18;
  longlong lVar19;
  int iVar23;
  ulonglong uVar20;
  longlong lVar21;
  longlong lVar22;
  uint uVar24;
  uint uVar25;
  longlong lVar26;
  float *pfVar27;
  longlong lVar28;
  int iVar29;
  char cVar30;
  ulonglong unaff_r28;
  ulonglong unaff_r29;
  ulonglong unaff_r30;
  ulonglong uVar31;
  ulonglong unaff_r31;
  ulonglong in_LR;
  longlong lVar32;
  double dVar33;
  double dVar34;
  double dVar35;
  double dVar36;
  double dVar37;
  double dVar38;
  ulonglong in_f24;
  ulonglong in_f25;
  ulonglong in_f26;
  ulonglong in_f27;
  double dVar39;
  ulonglong in_f28;
  double dVar40;
  ulonglong in_f29;
  double dVar41;
  ulonglong in_f30;
  double dVar42;
  ulonglong in_f31;
  double dVar43;
  double dVar44;
  GPiece<16> auVar45;
  GPiece<16> auVar46;
  GPiece<16> auVar47;
  GPiece<16> auVar48;
  
  lVar19 = (longlong)(int)moby;
  uVar18 = ZEXT48(&stack0x00000000);
  lVar22 = uVar18 - 0x210;
  puVar17 = (ulonglong *)lVar22;
  *puVar17 = uVar18;
  puVar17[0x44] = in_LR;
  puVar17[0x3a] = in_f24;
  puVar17[0x3b] = in_f25;
  puVar17[0x3c] = in_f26;
  puVar17[0x3d] = in_f27;
  puVar17[0x3e] = in_f28;
  puVar17[0x3f] = in_f29;
  puVar17[0x40] = in_f30;
  puVar17[0x41] = in_f31;
  puVar17[0x39] = unaff_r31;
  puVar17[0x37] = unaff_r29;
  puVar17[0x38] = unaff_r30;
  pvVar11 = moby->pVar;
  uVar31 = ZEXT48(pvVar11);
  puVar17[0x36] = unaff_r28;
  MB_getTarget(0x4059000000000000,lVar19,0x3d0000,uVar18 - 0x100);
  dVar43 = 14.0;
  DoManipulator(0x4012000000000000,moby,0,(Manipulator *)((int)pvVar11 + 0x160));
  M578_003cb1b8(lVar19);
  if (*(int *)((int)pvVar11 + 0x38) != 0) {
    auVar45 = ZEXT416(0xffffffff);
    auVar45 = auVar45 | auVar45 << 0x20 | auVar45 << 0x40 | auVar45 << 0x60;
    *(undefined4 *)((int)pvVar11 + 0x38) = 0;
    auVar46 = vectorShiftLeftIntegerWord(auVar45,auVar45);
    auVar45 = loadVectorLeftIndexed(0xc,0x3cbfc0);
    auVar45 = auVar45 >> 0x60 & (GPiece<16>)0xffffffff;
    auVar47 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
    auVar45 = vectorMultiplyAddFloatingPoint
                        (auVar47,auVar45 | auVar45 << 0x20 | auVar45 << 0x40 | auVar45 << 0x60,
                         auVar46);
    auVar45 = vectorConvertToSignedFixedPointWordSaturate(auVar45,0);
    auVar45 = auVar45 >> 0x60 & (GPiece<16>)0xffffffff;
    uVar16 = storeVectorElementWordIndexed
                       (auVar45 | auVar45 << 0x20 | auVar45 << 0x40 | auVar45 << 0x60,0x15c,uVar31);
    *(undefined4 *)((int)pvVar11 + 0x15cU & 0xfffffffc) = uVar16;
  }
  iVar23 = FastDecTimerS32(uVar31 + 0x15c);
  uVar3 = moby->state;
  if (iVar23 == 0) {
    dVar43 = 28.0;
  }
  if (uVar3 == '\x05') {
    uVar25 = MB_UpdateKick(moby,(KickVars *)((int)pvVar11 + 0x70));
    fVar13 = (moby->pos).z;
    uVar24 = (int)fVar13 >> 0x1f;
    fVar8 = (moby->pos).y;
    fVar4 = (moby->pos).z;
    fVar9 = (moby->pos).w;
    if (((uVar25 & 0x60) != 0) || ((int)((uVar24 >> 1 ^ (uint)fVar13) - uVar24) < 0x40a00000)) {
      *(f32 *)(puVar17 + 0x1e) = (moby->pos).x;
      *(f32 *)((int)puVar17 + 0xf4) = fVar8;
      *(f32 *)((int)puVar17 + 0xfc) = fVar9;
      puVar17[0x14] = 1;
      puVar17[0x12] = 0xffffffffffffffff;
      puVar17[0x15] = 1;
      puVar17[0x16] = 0xffffffffffffffff;
      puVar17[0x17] = 0;
      *(float *)(puVar17 + 0x1f) = fVar4 + 0.5;
      MB_genericExplosion
                (0,0,0x4000000000000000,0x3ff0000000000000,0x4022000000000000,0x3ff0000000000000,
                 0x402e000000000000,lVar19,uVar31 + 0x40,uVar18 - 0x120,&DAT_003cbfc0,1,5,2,4);
      MB_SpawnBoltsFromCrate(lVar19,0,0xffffffffffffffff);
      DeleteMoby(moby);
      return;
    }
  }
  else if (uVar3 == '\x04') {
    uVar24 = MB_UpdateKick(moby,(KickVars *)((int)pvVar11 + 0x70));
    if ((uVar24 & 0x60) == 0) {
      fVar8 = (moby->pos).z;
      fVar4 = (moby->pos).z;
      uVar24 = (int)fVar8 >> 0x1f;
      if ((int)((uVar24 >> 1 ^ (uint)fVar8) - uVar24) < 0x40a00000) {
        fVar8 = (moby->pos).y;
        *(f32 *)(puVar17 + 0x1c) = (moby->pos).x;
        fVar9 = (moby->pos).w;
        *(f32 *)((int)puVar17 + 0xe4) = fVar8;
        *(f32 *)((int)puVar17 + 0xec) = fVar9;
        puVar17[0x14] = 1;
        puVar17[0x12] = 0xffffffffffffffff;
        puVar17[0x15] = 1;
        puVar17[0x16] = 0xffffffffffffffff;
        puVar17[0x17] = 0;
        *(float *)(puVar17 + 0x1d) = fVar4 + 0.5;
        MB_genericExplosion
                  (0,0,0x4000000000000000,0x3ff0000000000000,0x4022000000000000,0x3ff0000000000000,
                   0x402e000000000000,lVar19,uVar31 + 0x40,uVar18 - 0x130,&DAT_003cbfc0,1,5,2,4);
        MB_SpawnBoltsFromCrate(lVar19,0,0xffffffffffffffff);
        DeleteMoby(moby);
        return;
      }
    }
    else {
      if (moby->animationId != '\0') {
        puVar17[0x32] = (longlong)(int)(animationSpeed * 10.5);
        MB_SetAnimation(lVar19,0,0,*(undefined4 *)((int)puVar17 + 0x194));
      }
      moby->state = '\x01';
    }
  }
  else if (uVar3 == '\x03') {
    iVar23 = *(int *)((int)pvVar11 + 0x120);
    MB_UpdateNavMoveTurning
              (lVar19,uVar31 + 0xd0,*(int *)((int)pvVar11 + 0x130) + iVar23 * 0x10 + 0x10,
               uVar31 + 0x40);
    moby->unk58 = DAT_0084623c;
    FastDecTimerS16(uVar31 + 0x156);
    piVar12 = *(int **)((int)pvVar11 + 0x130);
    fVar4 = (moby->pos).y;
    fVar5 = (moby->pos).x;
    fVar10 = (moby->pos).z - (float)piVar12[iVar23 * 4 + 6];
    dVar43 = 1.0;
    if (SQRT(fVar10 * fVar10 +
             (fVar5 - (float)piVar12[iVar23 * 4 + 4]) * (fVar5 - (float)piVar12[iVar23 * 4 + 4]) +
             (fVar4 - (float)piVar12[iVar23 * 4 + 5]) * (fVar4 - (float)piVar12[iVar23 * 4 + 5])) <
        1.0) {
      bVar1 = *(short *)((int)pvVar11 + 0x156) == 0;
      if ((!bVar1) ||
         (fVar10 = fVar4 - *(float *)((int)puVar17 + 0x114),
         fVar6 = fVar5 - *(float *)(puVar17 + 0x22), SQRT(fVar6 * fVar6 + fVar10 * fVar10) <= 25.0))
      {
        cVar30 = *(char *)((int)pvVar11 + 0x124);
        iVar23 = *piVar12;
        iVar29 = *(int *)((int)pvVar11 + 0x120) + iVar23 + (int)cVar30;
        iVar29 = iVar29 - (iVar29 / iVar23) * iVar23;
        if ((bVar1) &&
           (fVar10 = *(float *)((int)puVar17 + 0x114) - (float)piVar12[iVar29 * 4 + 5],
           fVar4 = fVar4 - (float)piVar12[iVar29 * 4 + 5],
           fVar6 = *(float *)(puVar17 + 0x22) - (float)piVar12[iVar29 * 4 + 4],
           fVar5 = fVar5 - (float)piVar12[iVar29 * 4 + 4],
           SQRT(fVar6 * fVar6 + fVar10 * fVar10) < SQRT(fVar5 * fVar5 + fVar4 * fVar4))) {
          auVar45 = ZEXT416(0xffffffff);
          auVar45 = auVar45 | auVar45 << 0x20 | auVar45 << 0x40 | auVar45 << 0x60;
          cVar30 = -cVar30;
          *(char *)((int)pvVar11 + 0x124) = cVar30;
          auVar46 = vectorShiftLeftIntegerWord(auVar45,auVar45);
          auVar45 = loadVectorLeftIndexed(0x3c,0x3cbfc0);
          auVar45 = auVar45 >> 0x60 & (GPiece<16>)0xffffffff;
          auVar47 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
          auVar45 = vectorMultiplyAddFloatingPoint
                              (auVar47,auVar45 | auVar45 << 0x20 | auVar45 << 0x40 | auVar45 << 0x60
                               ,auVar46);
          auVar45 = vectorConvertToSignedFixedPointWordSaturate(auVar45,0);
          auVar45 = vectorSplatHalfWord(auVar45,1);
          uVar15 = storeVectorElementHalfWordIndexed(auVar45,0x156,uVar31);
          *(undefined2 *)((int)pvVar11 + 0x156) = uVar15;
          iVar23 = *piVar12;
        }
        iVar29 = *(int *)((int)pvVar11 + 0x120) + iVar23 + (int)cVar30;
        *(int *)((int)pvVar11 + 0x120) = iVar29 - (iVar29 / iVar23) * iVar23;
      }
      else {
        moby->state = '\x01';
        if (moby->animationId != '\0') {
          puVar17[0x32] = (longlong)(int)(animationSpeed * 10.5);
          MB_SetAnimation(lVar19,0,0,*(undefined4 *)((int)puVar17 + 0x194));
        }
      }
    }
    iVar23 = FastDecTimerS16(uVar31 + 0x154);
    if (iVar23 != 0) {
      auVar45 = ZEXT416(0xffffffff);
      auVar45 = auVar45 | auVar45 << 0x20 | auVar45 << 0x40 | auVar45 << 0x60;
      auVar47 = vectorShiftLeftIntegerWord(auVar45,auVar45);
      auVar45 = loadVectorLeftIndexed(0x6238,0x840000);
      auVar46 = vectorConvertFromSignedFixedPointWord(auVar45,0);
      auVar45 = loadVectorLeftIndexed(0x48,0x3cbfc0);
      auVar45 = auVar45 >> 0x60 & (GPiece<16>)0xffffffff;
      auVar48 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
      dVar41 = 0.5;
      auVar45 = vectorAddFloatingPoint
                          (auVar46,auVar45 | auVar45 << 0x20 | auVar45 << 0x40 | auVar45 << 0x60);
      auVar45 = vectorMultiplyAddFloatingPoint(auVar48,auVar45,auVar47);
      auVar45 = vectorConvertToSignedFixedPointWordSaturate(auVar45,0);
      auVar45 = vectorSplatHalfWord(auVar45,1);
      uVar15 = storeVectorElementHalfWordIndexed(auVar45,0x154,uVar31);
      *(undefined2 *)((int)pvVar11 + 0x154) = uVar15;
      fVar8 = (moby->pos).y;
      *(f32 *)(puVar17 + 0x18) = (moby->pos).x;
      fVar9 = (moby->pos).w;
      *(f32 *)((int)puVar17 + 0xc4) = fVar8;
      *(f32 *)((int)puVar17 + 0xcc) = fVar9;
      dVar40 = 2.0;
      *(float *)(puVar17 + 0x19) = (moby->pos).z + 2.0;
      sound_MobyPlay_oClass(1,0,moby,0x273);
      dVar39 = 0.8999999761581421;
      dVar44 = 1.100000023841858;
      iVar23 = -2;
      dVar42 = 0.0;
      dVar36 = -1.0;
      do {
        dVar33 = (double)FastIntToDouble(iVar23);
        dVar34 = (double)MB_randRangeFloat((float)dVar39,(float)dVar44);
        fVar4 = (moby->transform).v1.y;
        fVar5 = (moby->transform).v1.x;
        dVar34 = (double)(float)(dVar33 * dVar34);
        puVar17[0x32] = (longlong)iVar23;
        fVar10 = (moby->pos).x;
        fVar6 = (moby->pos).y;
        fVar7 = (moby->pos).z;
        dVar33 = (double)SQRT(fVar5 * fVar5 + fVar4 * fVar4);
        if (dVar33 == dVar42) {
          fVar5 = (moby->transform).v1.z;
          fVar4 = (moby->transform).v1.w;
          dVar33 = dVar42;
          dVar35 = dVar42;
        }
        else {
          fVar2 = (float)((double)(float)((double)(longlong)puVar17[0x32] * dVar41) / dVar33);
          dVar33 = (double)(fVar5 * fVar2);
          fVar5 = (moby->transform).v1.z;
          dVar35 = (double)(fVar4 * fVar2);
          fVar4 = (moby->transform).v1.w;
        }
        *(float *)((int)puVar17 + 0xcc) = fVar4;
        *(float *)(puVar17 + 0x18) = (float)(dVar33 + (double)fVar10);
        *(float *)((int)puVar17 + 0xc4) = (float)(dVar35 + (double)fVar6);
        *(float *)(puVar17 + 0x19) = (float)((double)(fVar5 + fVar7) + dVar40);
        dVar33 = (double)MB_randRangeFloat((float)dVar36,(float)dVar43);
        fVar4 = (moby->transform).v0.y;
        fVar5 = (moby->transform).v0.x;
        fVar10 = (moby->transform).v1.x;
        fVar6 = (moby->transform).v1.y;
        dVar35 = (double)SQRT(fVar5 * fVar5 + fVar4 * fVar4);
        if (dVar35 == dVar42) {
          fVar5 = (moby->transform).v0.z;
          dVar33 = dVar42;
          dVar35 = dVar42;
        }
        else {
          fVar7 = (float)((double)(float)(dVar33 * (double)g_FrameTime) / dVar35);
          dVar33 = (double)(fVar5 * fVar7);
          fVar5 = (moby->transform).v0.z;
          dVar35 = (double)(fVar4 * fVar7);
        }
        dVar37 = (double)SQRT(fVar10 * fVar10 + fVar6 * fVar6);
        if (dVar37 == dVar42) {
          fVar7 = (moby->transform).v1.z;
          fVar10 = (moby->transform).v1.w;
          dVar37 = dVar42;
          dVar38 = dVar42;
        }
        else {
          fVar4 = (float)((double)(float)((double)DAT_00846230 * (double)g_FrameTime) /
                         dVar37);
          fVar7 = (moby->transform).v1.z;
          dVar37 = (double)(fVar10 * fVar4);
          fVar10 = (moby->transform).v1.w;
          dVar38 = (double)(fVar6 * fVar4);
        }
        *(float *)((int)puVar17 + 0xdc) = fVar10;
        *(float *)(puVar17 + 0x1a) = (float)(dVar37 * dVar34 + dVar33);
        *(float *)((int)puVar17 + 0xd4) = (float)(dVar38 * dVar34 + dVar35);
        *(float *)(puVar17 + 0x1b) = (float)((double)fVar7 * dVar34 + (double)fVar5);
        dVar33 = (double)MB_randRangeFloat((float)dVar39,(float)dVar44);
        *(float *)(puVar17 + 0x1b) =
             (float)((double)(DAT_00846234 * g_FrameTime) * dVar33);
        FUN_003eba50(lVar19,uVar18 - 0x150,uVar18 - 0x140);
        iVar23 = iVar23 + 1;
      } while (iVar23 < 3);
    }
  }
  else if (uVar3 == '\x02') {
    if ((moby->field43_0x70 & 2U) != 0) {
      auVar45 = ZEXT416(0xffffffff);
      auVar45 = auVar45 | auVar45 << 0x20 | auVar45 << 0x40 | auVar45 << 0x60;
      moby->state = '\x03';
      fVar4 = animationSpeed;
      auVar46 = vectorShiftLeftIntegerWord(auVar45,auVar45);
      auVar45 = loadVectorLeftIndexed(0x3c,0x3cbfc0);
      auVar45 = auVar45 >> 0x60 & (GPiece<16>)0xffffffff;
      auVar47 = auVar45 | auVar45 << 0x20 | auVar45 << 0x40 | auVar45 << 0x60;
      auVar45 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
      auVar45 = vectorMultiplyAddFloatingPoint(auVar45,auVar47,auVar46);
      auVar45 = vectorConvertToSignedFixedPointWordSaturate(auVar45,0);
      auVar45 = vectorSplatHalfWord(auVar45,1);
      uVar15 = storeVectorElementHalfWordIndexed(auVar45,0x156,uVar31);
      *(undefined2 *)((int)pvVar11 + 0x156) = uVar15;
      if (moby->animationId != '\x02') {
        puVar17[0x32] = (longlong)(int)(fVar4 * 10.5);
        MB_SetAnimation(lVar19,2,0,*(undefined4 *)((int)puVar17 + 0x194));
      }
      auVar45 = ZEXT416(0xffffffff);
      auVar45 = auVar45 | auVar45 << 0x20 | auVar45 << 0x40 | auVar45 << 0x60;
      auVar45 = vectorShiftLeftIntegerWord(auVar45,auVar45);
      moby->unk58 = DAT_0084623c;
      auVar46 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
      auVar45 = vectorMultiplyAddFloatingPoint(auVar46,auVar47,auVar45);
      auVar45 = vectorConvertToSignedFixedPointWordSaturate(auVar45,0);
      auVar45 = vectorSplatHalfWord(auVar45,1);
      uVar15 = storeVectorElementHalfWordIndexed(auVar45,0x154,uVar31);
      *(undefined2 *)((int)pvVar11 + 0x154) = uVar15;
    }
  }
  else if (uVar3 == '\x01') {
    fVar4 = *(float *)(puVar17 + 0x22) - (moby->pos).x;
    fVar5 = *(float *)((int)puVar17 + 0x114) - (moby->pos).y;
    fVar6 = ABS(fVar4);
    fVar10 = ABS(fVar5);
    *(float *)(puVar17 + 0x2c) = fVar4;
    *(float *)((int)puVar17 + 0x164) = fVar5;
    *(float *)(puVar17 + 0x2d) = fVar6 - fVar10;
    dVar36 = 0.0;
    uVar20 = (ulonglong)(*(uint *)(puVar17 + 0x2c) >> 0x1c) & 8 |
             (ulonglong)(*(uint *)(puVar17 + 0x2d) >> 0x1e) & 2 |
             (ulonglong)(*(uint *)((int)puVar17 + 0x164) >> 0x1d) & 4;
    fVar4 = ABS(*(float *)(puVar17 + 0x2c));
    if (*(float *)(puVar17 + 0x2d) - 0.0 < 0.0) {
      fVar4 = fVar10;
    }
    fVar10 = *(float *)(&g_atanQuadrantTable + (int)(uVar20 << 2));
    fVar5 = *(float *)(((uint)(uVar20 << 2) | 0x735900) + 4);
    fVar7 = ABS(*(float *)((int)puVar17 + 0x164));
    if (*(float *)(puVar17 + 0x2d) - 0.0 < 0.0) {
      fVar7 = fVar6;
    }
    if (0.0 < fVar4) {
      lVar21 = uVar18 - 0x200;
      lVar28 = uVar18 - 0x94;
      lVar26 = uVar18 - 0xa4;
      lVar32 = 2;
      fVar4 = (fVar7 - fVar4) / (fVar7 + fVar4);
      fVar6 = fVar4 * fVar4;
      *(float *)(puVar17 + 0x2f) = fVar4;
      *(float *)(puVar17 + 0x2e) = fVar4;
      *(float *)((int)puVar17 + 0x174) = fVar4;
      *(float *)((int)puVar17 + 0x16c) = fVar4;
      fVar4 = fVar6 * fVar6;
      *(float *)(puVar17 + 0x2e) = *(float *)(puVar17 + 0x2e) * fVar6;
      *(float *)((int)puVar17 + 0x174) = *(float *)((int)puVar17 + 0x174) * fVar4;
      *(float *)(puVar17 + 0x2f) = *(float *)(puVar17 + 0x2f) * fVar4 * fVar6;
      do {
        *(float *)((int)lVar21 + 0x16c) = *(float *)((int)lVar21 + 0x15c) * fVar4 * fVar4;
        iVar23 = (int)lVar26;
        lVar26 = lVar26 + 8;
        lVar21 = lVar21 + 8;
        *(float *)((int)lVar28 + 4) = *(float *)(iVar23 + 4) * fVar4 * fVar4;
        lVar28 = lVar28 + 8;
        lVar32 = lVar32 + -1;
      } while (lVar32 != 0);
      lVar32 = 4;
      lVar28 = uVar18 - 0xa4;
      pfVar27 = (float *)&DAT_007358e0;
      lVar21 = lVar22;
      lVar26 = lVar28;
      do {
        fVar4 = *pfVar27;
        fVar6 = pfVar27[1];
        pfVar27 = pfVar27 + 2;
        *(float *)((int)lVar21 + 0x16c) = *(float *)((int)lVar21 + 0x16c) * fVar4;
        lVar21 = lVar21 + 8;
        *(float *)((int)lVar26 + 4) = *(float *)((int)lVar26 + 4) * fVar6;
        lVar26 = lVar26 + 8;
        lVar32 = lVar32 + -1;
      } while (lVar32 != 0);
      lVar21 = 2;
      do {
        iVar23 = (int)lVar22;
        lVar22 = lVar22 + 0x10;
        iVar29 = (int)lVar28;
        lVar28 = lVar28 + 0x10;
        dVar36 = (double)((float)(dVar36 + (double)*(float *)(iVar23 + 0x16c)) +
                          *(float *)(iVar29 + 4) + *(float *)(iVar29 + 8) + *(float *)(iVar29 + 0xc)
                         );
        lVar21 = lVar21 + -1;
      } while (lVar21 != 0);
      dVar36 = (double)((float)(dVar36 + 0.7853981852531433) * fVar10 + fVar5);
    }
    OrganicDeltAngSpeed
              (dVar36,0x3f847ae140000000,0x3fd3333340000000,0x3fb99999a0000000,lVar19,&DAT_003cbfc0,
               uVar31 + 0x150);
    fVar4 = (moby->pos).y - *(float *)((int)puVar17 + 0x114);
    fVar5 = (moby->pos).x - *(float *)(puVar17 + 0x22);
    if ((((double)SQRT(fVar5 * fVar5 + fVar4 * fVar4) < dVar43) &&
        (ABS(*(float *)(puVar17 + 0x23) - (moby->pos).z) < 4.0)) &&
       (moby->state = '\x02', moby->animationId != '\x01')) {
      puVar17[0x32] = (longlong)(int)(animationSpeed * 10.5);
      MB_SetAnimation(lVar19,1,0,*(undefined4 *)((int)puVar17 + 0x194));
    }
  }
  else if (uVar3 == '\0') {
    MB_InitDefaultParams((float *)((int)pvVar11 + 0xd0));
    fVar4 = DAT_0071f418;
    *(float *)((int)pvVar11 + 0x10c) = DAT_0071f418 * 6.2831855;
    *(float *)((int)pvVar11 + 0x110) = fVar4 * 18.849556;
    fVar4 = g_FrameTime;
    *(float *)((int)pvVar11 + 0x114) = g_FrameTime * 6.2831855;
    *(undefined1 *)((int)pvVar11 + 0x28) = 1;
    *(undefined4 *)((int)pvVar11 + 0xdc) = 0x40000000;
    *(undefined1 *)((int)pvVar11 + 0x29) = 0;
    *(undefined4 *)((int)pvVar11 + 0xd8) = 0x40000000;
    *(undefined4 *)((int)pvVar11 + 0x20) = 0x40000000;
    *(undefined1 *)((int)pvVar11 + 0x58) = 8;
    *(undefined1 *)((int)pvVar11 + 0x5a) = 8;
    *(undefined2 *)((int)pvVar11 + 0x24) = 2;
    pSVar14 = Splines[*(int *)((int)pvVar11 + 0x134)];
    *(Spline **)((int)pvVar11 + 0x130) = pSVar14;
    *(float *)((int)pvVar11 + 0xf4) = fVar4 * 5.0;
    (moby->pos).x = pSVar14->points[0].x;
    (moby->pos).y = pSVar14->points[0].y;
    (moby->pos).z = pSVar14->points[0].z;
    fVar4 = moby->scale;
    (moby->pos).w = pSVar14->points[0].w;
    fVar5 = DAT_00846240;
    *(undefined4 *)((int)pvVar11 + 0x120) = 1;
    moby->state = '\x01';
    moby->scale = fVar4 * fVar5;
    if (moby->animationId != '\0') {
      MB_SetAnimation(lVar19,0,0,0);
    }
  }
  if (moby->state < 4) {
    fVar4 = DAT_0071f418 * 9.8 + *(float *)((int)pvVar11 + 0xe8);
    *(float *)((int)pvVar11 + 0xe8) = fVar4;
    dVar44 = 2.0;
    (moby->pos).z = (moby->pos).z - (fVar4 - 2.0);
    dVar42 = 0.5;
    dVar43 = (double)GetGroundZ(0x3fe0000000000000,lVar19 + 0x10,0);
    fVar4 = (float)((double)(moby->pos).z - dVar44);
    dVar36 = (double)fVar4;
    (moby->pos).z = fVar4;
    if (dVar43 <= dVar36) {
      if (dVar36 < 5.0) {
        fVar8 = (moby->pos).y;
        *(f32 *)(puVar17 + 0x20) = (moby->pos).x;
        fVar9 = (moby->pos).w;
        *(f32 *)((int)puVar17 + 0x104) = fVar8;
        *(f32 *)((int)puVar17 + 0x10c) = fVar9;
        *(float *)(puVar17 + 0x21) = (float)(dVar36 + dVar42);
        puVar17[0x12] = 0xffffffffffffffff;
        puVar17[0x14] = 1;
        puVar17[0x15] = 1;
        puVar17[0x16] = 0xffffffffffffffff;
        puVar17[0x17] = 0;
        MB_genericExplosion
                  (0,0,dVar44,0x3ff0000000000000,0x4022000000000000,0x3ff0000000000000,
                   0x402e000000000000,lVar19,uVar31 + 0x40,uVar18 - 0x110,1,0xffffffffffffffff,5,2,4
                  );
        MB_SpawnBoltsFromCrate(lVar19,0,0xffffffffffffffff);
        DeleteMoby(moby);
        return;
      }
    }
    else {
      (moby->pos).z = (float)dVar43;
      *(undefined4 *)((int)pvVar11 + 0xe8) = 0;
    }
  }
  if ((moby->enabled != '\0') &&
     (fVar4 = (moby->pos).y - GameCamera.posY, fVar5 = (moby->pos).x - GameCamera.posX,
     fVar10 = (moby->pos).z - GameCamera.posZ,
     SQRT(fVar10 * fVar10 + fVar5 * fVar5 + fVar4 * fVar4) < 32.0)) {
    MB_SetZBoundsFromGround(lVar19);
  }
  return;
}


