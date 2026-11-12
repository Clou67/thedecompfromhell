// game/update/moby1214.cpp -- reconstructed from NPEA00385 EBOOT
// STATUS: NOT STARTED (raw Ghidra output)
// 2 functions, 0x206970-0x207ff4
#include <stdio.h>
#include <stdlib.h>
#include "game/update/moby1214.h"
#include "game/camera.h"
#include "game/collproc.h"
#include "game/hero.h"
#include "game/mobyfunc.h"
#include "game/mobyproc.h"
#include "game/mobyutil.h"
#include "game/partupd.h"
#include "game/path.h"
#include "game/update.h"
#include "game/update/moby1017.h"
#include "game/update/moby1218.h"
#include "game/update/moby1241.h"
#include "idol/fastfunc.h"

// 0x0206970 (0x2d4 bytes)
// strings: 00654ed8: 'Moby class %d Damage Received: %f\n'

void M1214_00206970(MobyInstance *param_1,longlong param_2,undefined8 param_3)

{
  MobyModeBit MVar1;
  uint uVar2;
  uint uVar3;
  undefined2 uVar4;
  int iVar5;
  int iVar6;
  float *pfVar7;
  undefined8 in_LR;
  GPiece<16> auVar8;
  GPiece<16> auVar9;
  GPiece<16> auVar10;
  float local_40;
  float local_3c;
  float local_38;
  int local_30 [2];
  
  if (param_1->state != '\x02') {
    iVar5 = MB_damage(param_1,0x330000,0);
    if (iVar5 != 0) {
      printf("Moby class %d Damage Received: %f\n",param_1->oClass,
                   (double)*(float *)(iVar5 + 0x2c));
    }
    iVar6 = MB_HandleDamage(param_1,iVar5,param_3,0,local_30,0,0,4);
    pfVar7 = (float *)param_3;
    if ((0 < iVar6) && (iVar6 < 3)) {
      *pfVar7 = 0.0;
    }
    if (1 < local_30[0]) {
      uVar2 = (int)*pfVar7 >> 0x1f;
      uVar3 = (int)*(uint *)(iVar5 + 0x2c) >> 0x1f;
      iVar6 = (int)param_2;
      if ((int)((uVar3 >> 1 ^ *(uint *)(iVar5 + 0x2c)) - uVar3) <
          (int)((uVar2 >> 1 ^ (uint)*pfVar7) - uVar2)) {
        auVar8 = ZEXT416(0xffffffff);
        auVar8 = auVar8 | auVar8 << 0x20 | auVar8 << 0x40 | auVar8 << 0x60;
        auVar9 = vectorShiftLeftIntegerWord(auVar8,auVar8);
        *pfVar7 = *pfVar7 - *(float *)(iVar5 + 0x2c);
        *(undefined1 *)(iVar6 + 0x67) = 0xfa;
        auVar8 = loadVectorLeftIndexed(in_LR,0x206960);
        auVar10 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
        auVar8 = auVar8 >> 0x60 & (GPiece<16>)0xffffffff;
        auVar8 = vectorMultiplyAddFloatingPoint
                           (auVar10,auVar8 | auVar8 << 0x20 | auVar8 << 0x40 | auVar8 << 0x60,auVar9
                           );
        auVar8 = vectorConvertToSignedFixedPointWordSaturate(auVar8,0);
        auVar8 = vectorSplatHalfWord(auVar8,1);
        uVar4 = storeVectorElementHalfWordIndexed(auVar8,0x26,param_2);
        *(undefined2 *)(iVar6 + 0x26) = uVar4;
        MB_UpdateLightsTransition(param_1,param_2 + 0x60);
        local_40 = *(float *)(iVar5 + 0x10);
        local_38 = SQRT(*(float *)(iVar5 + 0x18) * *(float *)(iVar5 + 0x18) +
                        local_40 * local_40 + *(float *)(iVar5 + 0x14) * *(float *)(iVar5 + 0x14));
        if (local_38 == 0.0) {
          local_38 = 0.0;
          local_3c = 0.0;
          local_40 = 0.0;
        }
        else {
          local_38 = 0.1 / local_38;
          local_40 = local_40 * local_38;
          local_3c = *(float *)(iVar5 + 0x14) * local_38;
          local_38 = *(float *)(iVar5 + 0x18) * local_38;
        }
        (param_1->pos).x = (param_1->pos).x + local_40;
        (param_1->pos).y = (param_1->pos).y + local_3c;
        (param_1->pos).z = (param_1->pos).z + local_38;
        MB_randSphere(0xbfb99999a0000000,0x3fb99999a0000000,&local_40);
        (param_1->pos).x = (param_1->pos).x + local_40;
        (param_1->pos).y = (param_1->pos).y + local_3c;
        (param_1->pos).z = (param_1->pos).z + local_38;
      }
      else {
        MVar1 = param_1->modeBits;
        *pfVar7 = 0.0;
        param_1->modeBits =
             MVar1 & (MIRROR|CAN_BE_DAMAGED|HIDE_BACKFACES|DISABLE_Z_WRITE|DRAW_SHADOW|
                      DRAW_TRANSPARENT_WEIRD|LOCK_ROTATION|NO_DRAW|UNK_40|HAS_SPECIAL_VARS|HAS_GLOW|
                      TRANSPARENT|NO_POST_UPDATE|NO_UPDATE|DISABLED);
        *(undefined1 *)(iVar6 + 0x67) = 0x78;
        MB_UpdateLightsTransition(param_1,param_2 + 0x60);
        param_1->state = '\x02';
      }
    }
    param_1->damage = -1;
  }
  MB_ColorDyingMoby(param_1,param_2 + 0x60);
  return;
}


// 0x0206cd8 (0x131c bytes)
// inlined: FastAtan2 @0x20701c, FastAtan2 @0x207124, FastAtan2 @0x207274, FastAtan2 @0x20744c
// strings: 00654efc: 'no path for moby 1214 #%d: killing\n'

/* Moby 1214 */

void UpdateMoby_1214(MobyInstance *moby)

{
  float fVar1;
  float fVar2;
  float fVar3;
  byte bVar4;
  char cVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  void *pvVar10;
  f32 fVar11;
  uint uVar12;
  undefined4 uVar13;
  ulonglong *puVar14;
  int iVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  bool bVar23;
  ulonglong uVar24;
  int iVar28;
  longlong lVar25;
  ulonglong uVar26;
  ulonglong uVar27;
  int iVar29;
  longlong lVar30;
  float *pfVar31;
  int iVar32;
  longlong lVar33;
  ulonglong uVar34;
  ulonglong unaff_r21;
  ulonglong unaff_r22;
  ulonglong unaff_r23;
  ulonglong unaff_r24;
  ulonglong unaff_r25;
  ulonglong unaff_r26;
  Spline *spline;
  ulonglong unaff_r27;
  ulonglong unaff_r28;
  ulonglong unaff_r29;
  ulonglong unaff_r30;
  ulonglong uVar35;
  ulonglong unaff_r31;
  ulonglong in_LR;
  longlong lVar36;
  double dVar37;
  double dVar38;
  double dVar39;
  ulonglong in_f16;
  double dVar40;
  ulonglong in_f17;
  double dVar41;
  ulonglong in_f18;
  ulonglong in_f19;
  ulonglong in_f20;
  double dVar42;
  ulonglong in_f21;
  ulonglong in_f22;
  ulonglong in_f23;
  ulonglong in_f24;
  ulonglong in_f25;
  ulonglong in_f26;
  double dVar43;
  ulonglong in_f27;
  double dVar44;
  ulonglong in_f28;
  double dVar45;
  ulonglong in_f29;
  double dVar46;
  double dVar47;
  ulonglong in_f30;
  double dVar48;
  ulonglong in_f31;
  double dVar49;
  double dVar50;
  GPiece<16> auVar51;
  GPiece<16> auVar52;
  GPiece<16> auVar53;
  
  uVar24 = ZEXT48(&stack0x00000000);
  uVar27 = uVar24 - 0x280;
  puVar14 = (ulonglong *)uVar27;
  *puVar14 = uVar24;
  puVar14[0x52] = in_LR;
  puVar14[0x40] = in_f16;
  puVar14[0x41] = in_f17;
  puVar14[0x42] = in_f18;
  puVar14[0x43] = in_f19;
  puVar14[0x44] = in_f20;
  puVar14[0x45] = in_f21;
  puVar14[0x46] = in_f22;
  puVar14[0x47] = in_f23;
  puVar14[0x48] = in_f24;
  puVar14[0x49] = in_f25;
  puVar14[0x4a] = in_f26;
  puVar14[0x4b] = in_f27;
  puVar14[0x4c] = in_f28;
  puVar14[0x4d] = in_f29;
  puVar14[0x4e] = in_f30;
  puVar14[0x4f] = in_f31;
  puVar14[0x3f] = unaff_r31;
  puVar14[0x3e] = unaff_r30;
  pvVar10 = moby->pVar;
  uVar35 = ZEXT48(pvVar10);
  puVar14[0x3d] = unaff_r29;
  puVar14[0x3c] = unaff_r28;
  puVar14[0x3b] = unaff_r27;
  puVar14[0x3a] = unaff_r26;
  puVar14[0x39] = unaff_r25;
  puVar14[0x38] = unaff_r24;
  puVar14[0x37] = unaff_r23;
  puVar14[0x36] = unaff_r22;
  puVar14[0x35] = unaff_r21;
  M1214_00206970(moby,uVar35,uVar35 + 0x20);
  iVar29 = DAT_0096b2d0;
  iVar28 = 0;
  bVar23 = false;
  spline = (Spline *)0x0;
  dVar42 = (double)g_heroPosition.x;
  dVar37 = (double)g_heroPosition.y;
  dVar38 = (double)g_heroPosition.z;
  if (*(int *)((int)pvVar10 + 0xa0) != -1) {
    spline = Splines[*(int *)((int)pvVar10 + 0xa0)];
  }
  fVar6 = g_heroPosition.w;
  if ((DAT_0096b2d0 != 0) &&
     (*(char *)(DAT_0096b2d0 + 0x20) != -3 && *(char *)(DAT_0096b2d0 + 0x20) != -2)) {
    dVar42 = (double)*(float *)(DAT_0096b2d0 + 0x10);
    fVar1 = (float)((double)(moby->pos).x - dVar42);
    dVar37 = (double)*(float *)(DAT_0096b2d0 + 0x14);
    fVar2 = (float)((double)(moby->pos).y - dVar37);
    bVar23 = false;
    dVar38 = (double)*(float *)(DAT_0096b2d0 + 0x18);
    iVar28 = *(int *)(DAT_0096b2d0 + 0x78);
    fVar6 = *(float *)(DAT_0096b2d0 + 0x1c);
    fVar3 = (float)((double)(moby->pos).z - dVar38);
    if ((g_heroState == TURRET_PLANE_UI) &&
       ((*(short *)(DAT_0096b2d0 + 0xa6) == 0x4da &&
        (SQRT(fVar3 * fVar3 + fVar1 * fVar1 + fVar2 * fVar2) < 70.0)))) {
      bVar23 = true;
    }
  }
  dVar41 = (double)fVar6;
  if (moby->enabled == '\0') {
    *(int *)((int)pvVar10 + 0xa8) = *(int *)((int)pvVar10 + 0xa8) + 1;
  }
  else if (bVar23) {
    *(undefined4 *)((int)pvVar10 + 0xa8) = 0;
  }
  bVar4 = moby->state;
  if (bVar4 == 0) {
    if (-1 < (int)(uint)bVar4) {
      if (spline == (Spline *)0x0) {
        printf("no path for moby 1214 #%d: killing\n",moby->uid);
        DeleteMoby(moby);
        return;
      }
      iVar28 = PathFindClosestPnt(0.0,(Vec4 *)&moby->pos,spline);
      *(int *)((int)pvVar10 + 0xb4) = iVar28;
      auVar52 = ZEXT416(0xffffffff);
      auVar52 = auVar52 | auVar52 << 0x20 | auVar52 << 0x40 | auVar52 << 0x60;
      iVar28 = (iVar28 + 1) - ((iVar28 + 1) / spline->cnt) * spline->cnt;
      auVar53 = vectorShiftLeftIntegerWord(auVar52,auVar52);
      *(int *)((int)pvVar10 + 0xb4) = iVar28;
      *(undefined4 *)((int)pvVar10 + 0x90) = *(undefined4 *)((int)spline + iVar28 * 0x10 + 0x10);
      *(undefined4 *)((int)pvVar10 + 0x94) = *(undefined4 *)((int)spline + iVar28 * 0x10 + 0x14);
      *(undefined4 *)((int)pvVar10 + 0x98) = *(undefined4 *)((int)spline + iVar28 * 0x10 + 0x18);
      *(undefined4 *)((int)pvVar10 + 0x9c) = *(undefined4 *)((int)spline + iVar28 * 0x10 + 0x1c);
      auVar52 = loadVectorLeftIndexed(8,0x206c44);
      auVar51 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
      auVar52 = auVar52 >> 0x60 & (GPiece<16>)0xffffffff;
      auVar52 = vectorMultiplyAddFloatingPoint
                          (auVar51,auVar52 | auVar52 << 0x20 | auVar52 << 0x40 | auVar52 << 0x60,
                           auVar53);
      auVar52 = vectorConvertToSignedFixedPointWordSaturate(auVar52,0);
      auVar52 = ZEXT416(auVar52.piece<0,4>() + 5) & (GPiece<16>)0xffffffff;
      uVar13 = storeVectorElementWordIndexed
                         (auVar52 | auVar52 << 0x20 | auVar52 << 0x40 | auVar52 << 0x60,0xa8,uVar35)
      ;
      *(undefined4 *)((int)pvVar10 + 0xa8U & 0xfffffffc) = uVar13;
      SetColorOfMoby(moby,0,0,0xff);
      moby->setByGroup = '\0';
      moby->state = '\x01';
    }
  }
  else if (bVar4 < 2) {
    fVar6 = *(float *)((int)pvVar10 + 0x90) - (moby->pos).x;
    fVar1 = *(float *)((int)pvVar10 + 0x94) - (moby->pos).y;
    dVar40 = 0.0;
    dVar49 = (double)(*(float *)((int)pvVar10 + 0x98) - (moby->pos).z);
    fVar8 = ABS(fVar6);
    fVar2 = ABS(fVar1);
    fVar3 = fVar8 - fVar2;
    fVar7 = fVar8;
    if (fVar3 - 0.0 < 0.0) {
      fVar7 = fVar2;
    }
    fVar9 = fVar2;
    if (fVar3 - 0.0 < 0.0) {
      fVar9 = fVar8;
    }
    if (0.0 < fVar7) {
      lVar25 = uVar24 - 0x270;
      lVar33 = uVar24 - 0xf8;
      lVar30 = uVar24 - 0x108;
      lVar36 = 2;
      fVar7 = (fVar9 - fVar7) / (fVar9 + fVar7);
      fVar9 = fVar7 * fVar7;
      *(float *)((int)puVar14 + 0x184) = fVar7;
      *(float *)((int)puVar14 + 0x17c) = fVar7;
      *(float *)(puVar14 + 0x30) = fVar7;
      *(float *)(puVar14 + 0x2f) = fVar7;
      fVar7 = fVar9 * fVar9;
      *(float *)((int)puVar14 + 0x17c) = *(float *)((int)puVar14 + 0x17c) * fVar9;
      *(float *)(puVar14 + 0x30) = *(float *)(puVar14 + 0x30) * fVar7;
      *(float *)((int)puVar14 + 0x184) = *(float *)((int)puVar14 + 0x184) * fVar7 * fVar9;
      do {
        *(float *)((int)lVar25 + 0x178) = *(float *)((int)lVar25 + 0x168) * fVar7 * fVar7;
        iVar32 = (int)lVar30;
        lVar30 = lVar30 + 8;
        lVar25 = lVar25 + 8;
        *(float *)((int)lVar33 + 4) = *(float *)(iVar32 + 4) * fVar7 * fVar7;
        lVar33 = lVar33 + 8;
        lVar36 = lVar36 + -1;
      } while (lVar36 != 0);
      pfVar31 = (float *)&DAT_007358e0;
      lVar25 = uVar24 - 0x108;
      lVar30 = 4;
      uVar26 = uVar27;
      do {
        fVar7 = *pfVar31;
        fVar9 = pfVar31[1];
        pfVar31 = pfVar31 + 2;
        *(float *)((int)uVar26 + 0x178) = *(float *)((int)uVar26 + 0x178) * fVar7;
        uVar26 = uVar26 + 8;
        *(float *)((int)lVar25 + 4) = *(float *)((int)lVar25 + 4) * fVar9;
        lVar25 = lVar25 + 8;
        lVar30 = lVar30 + -1;
      } while (lVar30 != 0);
    }
    dVar44 = ABS(dVar49);
    dVar46 = (double)SQRT(fVar6 * fVar6 + fVar1 * fVar1);
    dVar45 = ABS(dVar46);
    dVar43 = (double)(float)(dVar45 - dVar44);
    dVar48 = dVar45;
    if (dVar43 - 0.0 < 0.0) {
      dVar48 = dVar44;
    }
    dVar39 = dVar44;
    if (dVar43 - 0.0 < 0.0) {
      dVar39 = dVar45;
    }
    if (0.0 < dVar48) {
      lVar25 = uVar24 - 0x270;
      lVar33 = uVar24 - 0x118;
      lVar30 = uVar24 - 0x128;
      lVar36 = 2;
      fVar7 = (float)(dVar39 - dVar48) / (float)(dVar39 + dVar48);
      fVar9 = fVar7 * fVar7;
      *(float *)((int)puVar14 + 0x164) = fVar7;
      *(float *)((int)puVar14 + 0x15c) = fVar7;
      *(float *)(puVar14 + 0x2c) = fVar7;
      *(float *)(puVar14 + 0x2b) = fVar7;
      fVar7 = fVar9 * fVar9;
      *(float *)((int)puVar14 + 0x15c) = *(float *)((int)puVar14 + 0x15c) * fVar9;
      *(float *)(puVar14 + 0x2c) = *(float *)(puVar14 + 0x2c) * fVar7;
      *(float *)((int)puVar14 + 0x164) = *(float *)((int)puVar14 + 0x164) * fVar7 * fVar9;
      do {
        *(float *)((int)lVar25 + 0x158) = *(float *)((int)lVar25 + 0x148) * fVar7 * fVar7;
        iVar32 = (int)lVar30;
        lVar30 = lVar30 + 8;
        lVar25 = lVar25 + 8;
        *(float *)((int)lVar33 + 4) = *(float *)(iVar32 + 4) * fVar7 * fVar7;
        lVar33 = lVar33 + 8;
        lVar36 = lVar36 + -1;
      } while (lVar36 != 0);
      pfVar31 = (float *)&DAT_007358e0;
      lVar25 = uVar24 - 0x128;
      lVar30 = 4;
      uVar26 = uVar27;
      do {
        fVar7 = *pfVar31;
        fVar9 = pfVar31[1];
        pfVar31 = pfVar31 + 2;
        *(float *)((int)uVar26 + 0x158) = *(float *)((int)uVar26 + 0x158) * fVar7;
        uVar26 = uVar26 + 8;
        *(float *)((int)lVar25 + 4) = *(float *)((int)lVar25 + 4) * fVar9;
        lVar25 = lVar25 + 8;
        lVar30 = lVar30 + -1;
      } while (lVar30 != 0);
    }
    *(float *)((int)puVar14 + 0x10c) = fVar6;
    *(float *)((int)puVar14 + 0x114) = fVar3;
    *(float *)(puVar14 + 0x22) = fVar1;
    dVar48 = 0.7853981852531433;
    uVar34 = (ulonglong)(*(uint *)((int)puVar14 + 0x10c) >> 0x1c) & 8 |
             (ulonglong)(*(uint *)((int)puVar14 + 0x114) >> 0x1e) & 2 |
             (ulonglong)(*(uint *)(puVar14 + 0x22) >> 0x1d) & 4;
    uVar26 = uVar34 << 2;
    fVar6 = ABS(*(float *)((int)puVar14 + 0x10c));
    if (*(float *)((int)puVar14 + 0x114) - 0.0 < 0.0) {
      fVar6 = fVar2;
    }
    fVar1 = *(float *)(&g_atanQuadrantTable + (int)uVar26);
    fVar2 = ABS(*(float *)(puVar14 + 0x22));
    if (*(float *)((int)puVar14 + 0x114) - 0.0 < 0.0) {
      fVar2 = fVar8;
    }
    fVar3 = *(float *)(((uint)(uVar34 << 2) | 0x735900) + 4);
    dVar39 = dVar40;
    if (0.0 < fVar6) {
      lVar25 = uVar24 - 0x270;
      lVar33 = uVar24 - 0x138;
      lVar30 = uVar24 - 0x148;
      lVar36 = 2;
      fVar6 = (fVar2 - fVar6) / (fVar2 + fVar6);
      fVar2 = fVar6 * fVar6;
      *(float *)((int)puVar14 + 0x144) = fVar6;
      *(float *)((int)puVar14 + 0x13c) = fVar6;
      *(float *)(puVar14 + 0x28) = fVar6;
      *(float *)(puVar14 + 0x27) = fVar6;
      fVar6 = fVar2 * fVar2;
      *(float *)((int)puVar14 + 0x13c) = *(float *)((int)puVar14 + 0x13c) * fVar2;
      *(float *)(puVar14 + 0x28) = *(float *)(puVar14 + 0x28) * fVar6;
      *(float *)((int)puVar14 + 0x144) = *(float *)((int)puVar14 + 0x144) * fVar6 * fVar2;
      do {
        *(float *)((int)lVar25 + 0x138) = *(float *)((int)lVar25 + 0x128) * fVar6 * fVar6;
        iVar32 = (int)lVar30;
        lVar30 = lVar30 + 8;
        lVar25 = lVar25 + 8;
        *(float *)((int)lVar33 + 4) = *(float *)(iVar32 + 4) * fVar6 * fVar6;
        lVar33 = lVar33 + 8;
        lVar36 = lVar36 + -1;
      } while (lVar36 != 0);
      lVar33 = 4;
      lVar30 = uVar24 - 0x148;
      uVar26 = ZEXT48(&DAT_007358e0);
      uVar34 = uVar27;
      lVar25 = lVar30;
      do {
        pfVar31 = (float *)uVar26;
        fVar6 = pfVar31[1];
        uVar26 = uVar26 + 8;
        *(float *)((int)uVar34 + 0x138) = *(float *)((int)uVar34 + 0x138) * *pfVar31;
        uVar34 = uVar34 + 8;
        *(float *)((int)lVar25 + 4) = *(float *)((int)lVar25 + 4) * fVar6;
        lVar25 = lVar25 + 8;
        lVar33 = lVar33 + -1;
      } while (lVar33 != 0);
      lVar25 = 2;
      uVar34 = uVar27;
      do {
        iVar32 = (int)uVar34;
        iVar15 = (int)lVar30;
        uVar34 = uVar34 + 0x10;
        lVar30 = lVar30 + 0x10;
        dVar39 = (double)((float)(dVar39 + (double)*(float *)(iVar32 + 0x138)) +
                          *(float *)(iVar15 + 4) + *(float *)(iVar15 + 8) + *(float *)(iVar15 + 0xc)
                         );
        lVar25 = lVar25 + -1;
      } while (lVar25 != 0);
      dVar39 = (double)((float)(dVar39 + 0.7853981852531433) * fVar1 + fVar3);
    }
    dVar50 = 25.132741928100586;
    dVar47 = 6.2831854820251465;
    OrganicDeltAngSpeed
              (dVar39,(double)(g_FrameTimeSq * 25.132742),(double)(g_FrameTimeSq * 6.2831855),
               (double)(g_FrameTime * 25.132742),moby,uVar26,uVar35 + 0x88);
    *(float *)(puVar14 + 0x20) = (float)dVar46;
    *(float *)(puVar14 + 0x21) = (float)dVar43;
    *(float *)((int)puVar14 + 0x104) = (float)dVar49;
    fVar6 = (moby->rotation).y;
    dVar46 = (double)g_FrameTimeSq;
    dVar43 = (double)g_FrameTime;
    uVar34 = (ulonglong)(*(uint *)(puVar14 + 0x20) >> 0x1c) & 8 |
             (ulonglong)(*(uint *)(puVar14 + 0x21) >> 0x1e) & 2 |
             (ulonglong)(*(uint *)((int)puVar14 + 0x104) >> 0x1d) & 4;
    uVar26 = uVar34 << 2;
    dVar49 = ABS((double)*(float *)(puVar14 + 0x20));
    if ((double)*(float *)(puVar14 + 0x21) - dVar40 < 0.0) {
      dVar49 = dVar44;
    }
    uVar34 = uVar34 << 2 | 0x735900;
    fVar1 = *(float *)(&g_atanQuadrantTable + (int)uVar26);
    dVar44 = ABS((double)*(float *)((int)puVar14 + 0x104));
    if ((double)*(float *)(puVar14 + 0x21) - dVar40 < 0.0) {
      dVar44 = dVar45;
    }
    fVar2 = *(float *)((int)uVar34 + 4);
    dVar45 = dVar40;
    if (dVar40 < dVar49) {
      lVar25 = uVar24 - 0x270;
      lVar33 = uVar24 - 0x158;
      lVar30 = uVar24 - 0x168;
      lVar36 = 2;
      fVar3 = (float)(dVar44 - dVar49) / (float)(dVar44 + dVar49);
      fVar7 = fVar3 * fVar3;
      *(float *)((int)puVar14 + 0x124) = fVar3;
      *(float *)((int)puVar14 + 0x11c) = fVar3;
      *(float *)(puVar14 + 0x24) = fVar3;
      *(float *)(puVar14 + 0x23) = fVar3;
      fVar3 = fVar7 * fVar7;
      *(float *)((int)puVar14 + 0x11c) = *(float *)((int)puVar14 + 0x11c) * fVar7;
      *(float *)(puVar14 + 0x24) = *(float *)(puVar14 + 0x24) * fVar3;
      *(float *)((int)puVar14 + 0x124) = *(float *)((int)puVar14 + 0x124) * fVar3 * fVar7;
      do {
        *(float *)((int)lVar25 + 0x118) = *(float *)((int)lVar25 + 0x108) * fVar3 * fVar3;
        iVar32 = (int)lVar30;
        lVar30 = lVar30 + 8;
        lVar25 = lVar25 + 8;
        *(float *)((int)lVar33 + 4) = *(float *)(iVar32 + 4) * fVar3 * fVar3;
        lVar33 = lVar33 + 8;
        lVar36 = lVar36 + -1;
      } while (lVar36 != 0);
      lVar33 = 4;
      lVar30 = uVar24 - 0x168;
      uVar26 = ZEXT48(&DAT_007358e0);
      uVar34 = uVar27;
      lVar25 = lVar30;
      do {
        pfVar31 = (float *)uVar26;
        fVar3 = pfVar31[1];
        uVar26 = uVar26 + 8;
        *(float *)((int)uVar34 + 0x118) = *(float *)((int)uVar34 + 0x118) * *pfVar31;
        uVar34 = uVar34 + 8;
        *(float *)((int)lVar25 + 4) = *(float *)((int)lVar25 + 4) * fVar3;
        lVar25 = lVar25 + 8;
        lVar33 = lVar33 + -1;
      } while (lVar33 != 0);
      lVar25 = 2;
      dVar49 = dVar40;
      do {
        iVar32 = (int)uVar27;
        iVar15 = (int)lVar30;
        uVar27 = uVar27 + 0x10;
        lVar30 = lVar30 + 0x10;
        dVar49 = (double)((float)(dVar49 + (double)*(float *)(iVar32 + 0x118)) +
                          *(float *)(iVar15 + 4) + *(float *)(iVar15 + 8) + *(float *)(iVar15 + 0xc)
                         );
        lVar25 = lVar25 + -1;
      } while (lVar25 != 0);
      uVar34 = uVar27;
      dVar45 = (double)((float)(dVar49 + dVar48) * fVar1 + fVar2);
    }
    dVar49 = (double)MB_DeltAngSpeed
                               ((double)fVar6,-dVar45,(double)(float)(dVar46 * dVar50),
                                (double)(float)(dVar46 * dVar47),(double)(float)(dVar43 * dVar50),
                                uVar34,uVar26,uVar35 + 0x84);
    (moby->rotation).y = (float)dVar49;
    fVar6 = (moby->rotation).x;
    fVar6 = fVar6 + -(*(float *)((int)pvVar10 + 0x88) * (1.5707964 - ABS(fVar6)) * 0.63661975);
    if (1.5707964 - fVar6 < 0.0) {
      fVar6 = 1.5707964;
    }
    if (fVar6 - -1.5707964 < 0.0) {
      fVar6 = -1.5707964;
    }
    (moby->rotation).x = fVar6 * 0.98;
    MB_WrapRot(fVar6 * 0.98);
    dVar48 = 20.0;
    MB_SphericalToVector
              (g_FrameTime * 20.0,(moby->rotation).z,-(moby->rotation).y,
               (float *)((int)pvVar10 + 0x70));
    fVar6 = (moby->pos).x + *(float *)((int)pvVar10 + 0x70);
    (moby->pos).x = fVar6;
    fVar1 = (moby->pos).y + *(float *)((int)pvVar10 + 0x74);
    (moby->pos).y = fVar1;
    fVar2 = (moby->pos).z + *(float *)((int)pvVar10 + 0x78);
    (moby->pos).z = fVar2;
    fVar1 = fVar1 - *(float *)((int)pvVar10 + 0x94);
    fVar6 = fVar6 - *(float *)((int)pvVar10 + 0x90);
    fVar2 = fVar2 - *(float *)((int)pvVar10 + 0x98);
    dVar49 = (double)g_FrameTime;
    if (SQRT(fVar2 * fVar2 + fVar6 * fVar6 + fVar1 * fVar1) < (float)(dVar49 * dVar48)) {
      iVar32 = *(int *)((int)pvVar10 + 0xb4);
      do {
        iVar32 = (iVar32 + 1) - ((iVar32 + 1) / spline->cnt) * spline->cnt;
        pfVar31 = (float *)((int)spline + iVar32 * 0x10 + 0x10);
        *(int *)((int)pvVar10 + 0xb4) = iVar32;
        fVar6 = *pfVar31;
        *(float *)((int)pvVar10 + 0x90) = fVar6;
        fVar1 = pfVar31[1];
        *(float *)((int)pvVar10 + 0x94) = fVar1;
        fVar2 = pfVar31[2];
        *(float *)((int)pvVar10 + 0x98) = fVar2;
        *(float *)((int)pvVar10 + 0x9c) = pfVar31[3];
        fVar1 = (moby->pos).y - fVar1;
        fVar6 = (moby->pos).x - fVar6;
        fVar2 = (moby->pos).z - fVar2;
      } while (SQRT(fVar2 * fVar2 + fVar6 * fVar6 + fVar1 * fVar1) < (float)(dVar49 * dVar48));
    }
    bVar4 = moby->setByGroup;
    if (bVar4 == 0) {
      if (((iVar28 != 0) && (*(char *)(iVar29 + 0x20) == '\x04')) &&
         (bVar23 && moby->enabled != '\0')) {
        auVar52 = ZEXT416(0xffffffff);
        auVar52 = auVar52 | auVar52 << 0x20 | auVar52 << 0x40 | auVar52 << 0x60;
        auVar51 = vectorShiftLeftIntegerWord(auVar52,auVar52);
        auVar52 = loadVectorLeftIndexed(0x2c,0x206c44);
        auVar52 = auVar52 >> 0x60 & (GPiece<16>)0xffffffff;
        auVar53 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
        auVar52 = vectorMultiplyAddFloatingPoint
                            (auVar53,auVar52 | auVar52 << 0x20 | auVar52 << 0x40 | auVar52 << 0x60,
                             auVar51);
        auVar52 = vectorConvertToSignedFixedPointWordSaturate(auVar52,0);
        auVar52 = auVar52 >> 0x60 & (GPiece<16>)0xffffffff;
        uVar13 = storeVectorElementWordIndexed
                           (auVar52 | auVar52 << 0x20 | auVar52 << 0x40 | auVar52 << 0x60,0xb8,
                            uVar35);
        *(undefined4 *)((int)pvVar10 + 0xb8U & 0xfffffffc) = uVar13;
        *(undefined4 *)((int)pvVar10 + 0xa8) = 0;
        *(undefined4 *)((int)pvVar10 + 0xac) = 0x3f800000;
        moby->setByGroup = '\x01';
      }
    }
    else if (bVar4 < 2) {
      cVar5 = moby->enabled;
      if (cVar5 == '\0') {
        *(int *)((int)pvVar10 + 0xa8) = *(int *)((int)pvVar10 + 0xa8) + 1;
        cVar5 = moby->enabled;
      }
      if ((!bVar23 || cVar5 == '\0') ||
         (iVar29 = *(int *)((int)pvVar10 + 0xa8),
         puVar14[0x33] = (longlong)(int)(animationSpeed * 20.5),
         *(int *)((int)puVar14 + 0x19c) <= iVar29)) {
        auVar52 = ZEXT416(0xffffffff);
        auVar52 = auVar52 | auVar52 << 0x20 | auVar52 << 0x40 | auVar52 << 0x60;
        auVar51 = vectorShiftLeftIntegerWord(auVar52,auVar52);
        auVar52 = loadVectorLeftIndexed(0x30,0x206c44);
        auVar52 = auVar52 >> 0x60 & (GPiece<16>)0xffffffff;
        auVar53 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
        auVar52 = vectorMultiplyAddFloatingPoint
                            (auVar53,auVar52 | auVar52 << 0x20 | auVar52 << 0x40 | auVar52 << 0x60,
                             auVar51);
        auVar52 = vectorConvertToSignedFixedPointWordSaturate(auVar52,0);
        auVar52 = auVar52 >> 0x60 & (GPiece<16>)0xffffffff;
        uVar13 = storeVectorElementWordIndexed
                           (auVar52 | auVar52 << 0x20 | auVar52 << 0x40 | auVar52 << 0x60,0xb8,
                            uVar35);
        *(undefined4 *)((int)pvVar10 + 0xb8U & 0xfffffffc) = uVar13;
        moby->setByGroup = '\x02';
      }
      iVar29 = FastDecTimerS32(uVar35 + 0xb8);
      if (iVar29 != 0) {
        auVar52 = ZEXT416(0xffffffff);
        auVar52 = auVar52 | auVar52 << 0x20 | auVar52 << 0x40 | auVar52 << 0x60;
        auVar51 = vectorShiftLeftIntegerWord(auVar52,auVar52);
        auVar52 = loadVectorLeftIndexed(0x34,0x206c44);
        auVar52 = auVar52 >> 0x60 & (GPiece<16>)0xffffffff;
        auVar53 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
        auVar52 = vectorMultiplyAddFloatingPoint
                            (auVar53,auVar52 | auVar52 << 0x20 | auVar52 << 0x40 | auVar52 << 0x60,
                             auVar51);
        auVar52 = vectorConvertToSignedFixedPointWordSaturate(auVar52,0);
        auVar52 = auVar52 >> 0x60 & (GPiece<16>)0xffffffff;
        uVar13 = storeVectorElementWordIndexed
                           (auVar52 | auVar52 << 0x20 | auVar52 << 0x40 | auVar52 << 0x60,0xb8,
                            uVar35);
        *(undefined4 *)((int)pvVar10 + 0xb8U & 0xfffffffc) = uVar13;
        moby->setByGroup = '\x02';
      }
      iVar29 = FastDecTimerS32(uVar35 + 0xa4);
      if (iVar29 != 0) {
        auVar52 = ZEXT416(0xffffffff);
        auVar52 = auVar52 | auVar52 << 0x20 | auVar52 << 0x40 | auVar52 << 0x60;
        auVar51 = vectorShiftLeftIntegerWord(auVar52,auVar52);
        auVar52 = loadVectorLeftIndexed(0x38,0x206c44);
        auVar52 = auVar52 >> 0x60 & (GPiece<16>)0xffffffff;
        auVar53 = loadVectorLeftIndexed(0xfffffffffffff410,0x720000);
        fVar6 = *(float *)((int)pvVar10 + 0xb0);
        auVar52 = vectorMultiplyAddFloatingPoint
                            (auVar53,auVar52 | auVar52 << 0x20 | auVar52 << 0x40 | auVar52 << 0x60,
                             auVar51);
        auVar52 = vectorConvertToSignedFixedPointWordSaturate(auVar52,0);
        auVar52 = auVar52 >> 0x60 & (GPiece<16>)0xffffffff;
        uVar13 = storeVectorElementWordIndexed
                           (auVar52 | auVar52 << 0x20 | auVar52 << 0x40 | auVar52 << 0x60,0xa4,
                            uVar35);
        *(undefined4 *)((int)pvVar10 + 0xa4U & 0xfffffffc) = uVar13;
        fVar1 = *(float *)(iVar28 + 0x10);
        fVar8 = *(float *)(iVar28 + 0x18) * fVar1;
        fVar2 = *(float *)(iVar28 + 0x14);
        fVar9 = fVar2 * *(float *)(iVar28 + 0x18);
        fVar3 = fVar6 + 1.5707963;
        fVar17 = -fVar9;
        fVar7 = 3.1415925 - fVar6;
        if (fVar6 - (3.1415925 - fVar6) < 0.0) {
          fVar7 = fVar6;
        }
        fVar21 = fVar1 * fVar1 - -(fVar2 * fVar2);
        fVar16 = -3.1415925 - fVar6;
        if ((-3.1415925 - fVar6) - fVar7 < 0.0) {
          fVar16 = fVar7;
        }
        dVar49 = (double)SQRT(fVar1 * fVar1 + --(fVar2 * fVar2));
        fVar6 = 3.1415925 - fVar3;
        if (fVar3 - (3.1415925 - fVar3) < 0.0) {
          fVar6 = fVar3;
        }
        fVar7 = fVar16 * fVar16;
        fVar22 = *(float *)((int)pvVar10 + 0xac) * 6.0;
        dVar48 = (double)SQRT(fVar21 * fVar21 + fVar17 * fVar17 + --(fVar8 * fVar8));
        dVar46 = 1.0;
        *(float *)((int)puVar14 + 0xcc) = (float)dVar41;
        fVar20 = fVar7 * fVar7 * fVar16;
        fVar17 = -3.1415925 - fVar3;
        if ((-3.1415925 - fVar3) - fVar6 < 0.0) {
          fVar17 = fVar6;
        }
        fVar6 = fVar7 * fVar20;
        fVar3 = fVar17 * fVar17;
        fVar18 = fVar3 * fVar3 * fVar17;
        fVar19 = fVar3 * fVar18;
        fVar6 = (float)((double)(fVar22 * (fVar7 * fVar6 * 2.601887e-06 +
                                          fVar6 * -0.0001980741 +
                                          fVar20 * 0.0083330255 +
                                          fVar7 * fVar16 * -0.16666657 + fVar16)) / dVar48);
        fVar3 = (float)((double)(fVar22 * (fVar3 * fVar19 * 2.601887e-06 +
                                          fVar19 * -0.0001980741 +
                                          fVar18 * 0.0083330255 +
                                          fVar3 * fVar17 * -0.16666657 + fVar17)) / dVar49);
        dVar43 = -(double)(fVar9 * fVar6);
        dVar41 = dVar40;
        if (dVar40 - dVar48 < 0.0) {
          dVar41 = (double)(fVar21 * fVar6);
        }
        dVar44 = dVar40;
        if (dVar40 - dVar48 < 0.0) {
          dVar44 = dVar43;
        }
        dVar45 = dVar40;
        if (dVar40 - dVar48 < 0.0) {
          dVar45 = -(double)(fVar8 * fVar6);
        }
        if (dVar48 - dVar40 < 0.0) {
          dVar41 = (double)(fVar21 * fVar6);
        }
        if (dVar48 - dVar40 < 0.0) {
          dVar44 = dVar43;
        }
        if (dVar48 - dVar40 < 0.0) {
          dVar45 = -(double)(fVar8 * fVar6);
        }
        *(float *)(puVar14 + 0x19) = (float)(dVar38 + dVar41);
        dVar48 = (double)(fVar1 * fVar3);
        dVar41 = -(double)(fVar2 * fVar3);
        dVar38 = dVar40;
        if (dVar40 - dVar49 < 0.0) {
          dVar38 = dVar48;
        }
        dVar43 = dVar40;
        if (dVar40 - dVar49 < 0.0) {
          dVar43 = dVar41;
        }
        if (dVar49 - dVar40 < 0.0) {
          dVar38 = dVar48;
        }
        if (dVar49 - dVar40 < 0.0) {
          dVar43 = dVar41;
        }
        *(float *)((int)puVar14 + 0xc4) = (float)((double)(float)(dVar37 + dVar44) + dVar38);
        *(float *)(puVar14 + 0x18) = (float)((double)(float)(dVar42 + dVar45) + dVar43);
        MB_RandomizeVector(0.6,(float *)(uVar24 - 0x1c0));
        fVar7 = g_FrameTime;
        dVar42 = (double)(moby->pos).y;
        dVar41 = (double)(moby->pos).x;
        fVar1 = *(float *)(iVar28 + 0x14);
        fVar2 = *(float *)(iVar28 + 0x10);
        fVar3 = *(float *)(iVar28 + 0x18);
        dVar49 = (double)SQRT(fVar3 * fVar3 + fVar2 * fVar2 + fVar1 * fVar1);
        dVar38 = (double)(moby->pos).z;
        fVar6 = (float)((double)(*(float *)(iVar28 + 100) *
                                (SQRT((float)(dVar41 - (double)g_heroPosition.x) *
                                      (float)(dVar41 - (double)g_heroPosition.x) +
                                      (float)(dVar42 - (double)g_heroPosition.y) *
                                      (float)(dVar42 - (double)g_heroPosition.y)) /
                                (g_FrameTime * 50.0 + *(float *)(iVar28 + 100)))) / dVar49
                       );
        *(undefined4 *)((int)puVar14 + 0xdc) = *(undefined4 *)((int)puVar14 + 0xcc);
        dVar37 = dVar40;
        if (dVar40 - dVar49 < 0.0) {
          dVar37 = (double)(fVar1 * fVar6);
        }
        dVar48 = dVar40;
        if (dVar40 - dVar49 < 0.0) {
          dVar48 = (double)(fVar2 * fVar6);
        }
        dVar43 = dVar40;
        if (dVar40 - dVar49 < 0.0) {
          dVar43 = (double)(fVar3 * fVar6);
        }
        if (dVar49 - dVar40 < 0.0) {
          dVar37 = (double)(fVar1 * fVar6);
        }
        if (dVar49 - dVar40 < 0.0) {
          dVar48 = (double)(fVar2 * fVar6);
        }
        if (dVar49 - dVar40 < 0.0) {
          dVar43 = (double)(fVar3 * fVar6);
        }
        fVar1 = (float)((double)(float)((double)*(float *)((int)puVar14 + 0xc4) + dVar37) - dVar42);
        fVar2 = (float)((double)(float)((double)*(float *)(puVar14 + 0x18) + dVar48) - dVar41);
        fVar3 = (float)((double)(float)((double)*(float *)(puVar14 + 0x19) + dVar43) - dVar38);
        dVar49 = (double)SQRT(fVar3 * fVar3 + fVar2 * fVar2 + fVar1 * fVar1);
        fVar6 = (float)(2.5999999046325684 / dVar49);
        dVar37 = dVar40;
        if (dVar40 - dVar49 < 0.0) {
          dVar37 = (double)(fVar3 * fVar6);
        }
        dVar48 = dVar40;
        if (dVar40 - dVar49 < 0.0) {
          dVar48 = (double)(fVar1 * fVar6);
        }
        dVar43 = dVar40;
        if (dVar40 - dVar49 < 0.0) {
          dVar43 = (double)(fVar2 * fVar6);
        }
        if (dVar49 - dVar40 < 0.0) {
          dVar37 = (double)(fVar3 * fVar6);
        }
        if (dVar49 - dVar40 < 0.0) {
          dVar48 = (double)(fVar1 * fVar6);
        }
        if (dVar49 - dVar40 < 0.0) {
          dVar43 = (double)(fVar2 * fVar6);
        }
        *(float *)(puVar14 + 0x1b) = (float)(dVar37 + dVar38);
        *(float *)((int)puVar14 + 0xd4) = (float)(dVar48 + dVar42);
        *(float *)(puVar14 + 0x1a) = (float)(dVar43 + dVar41);
        *(float *)(puVar14 + 0x19) = fVar3;
        *(float *)((int)puVar14 + 0xc4) = fVar1;
        *(float *)(puVar14 + 0x18) = fVar2;
        FUN_00187e00(0x4059000000000000,(double)(fVar7 * 50.0),0x4024000000000000,moby,
                     uVar24 - 0x1c0,uVar24 - 0x1b0);
        uVar12 = (int)*(uint *)((int)pvVar10 + 0xb0) >> 0x1f;
        *(float *)((int)pvVar10 + 0xac) =
             *(float *)((int)pvVar10 + 0xac) *
             (float)((double)DAT_0071f408 * -0.06999999284744263 + dVar46);
        if ((int)((uVar12 >> 1 ^ *(uint *)((int)pvVar10 + 0xb0)) - uVar12) < 0x3fc90fdc) {
          fVar6 = g_FrameTime * 0.5235988 + *(float *)((int)pvVar10 + 0xb0);
        }
        else {
          fVar6 = -(g_FrameTime * 0.5235988 - *(float *)((int)pvVar10 + 0xb0));
        }
        *(float *)((int)pvVar10 + 0xb0) = fVar6;
      }
    }
    else if ((bVar4 < 3) && (iVar28 = FastDecTimerS32(uVar35 + 0xb8), iVar28 != 0)) {
      moby->setByGroup = '\0';
    }
  }
  else if (bVar4 < 3) {
    fVar6 = GameCamera.posX - (moby->pos).x;
    fVar1 = GameCamera.posY - (moby->pos).y;
    fVar2 = GameCamera.posZ - (moby->pos).z;
    *(char (*) [4])((int)puVar14 + 0xec) = GameCamera.field8_0x14c;
    *(float *)(puVar14 + 0x1c) = fVar6;
    *(float *)((int)puVar14 + 0xe4) = fVar1;
    *(float *)(puVar14 + 0x1d) = fVar2;
    dVar42 = 0.0;
    dVar37 = 4.0;
    puVar14[0x12] = 0xffffffffffffffff;
    puVar14[0x14] = 0;
    puVar14[0x15] = 1;
    puVar14[0x16] = 0xffffffffffffffff;
    puVar14[0x17] = 0;
    MB_genericExplosion
              (0,0,0x4010000000000000,0x4008000000000000,0x4022000000000000,0x3ff19999a0000000,
               0x4034000000000000,moby,uVar24 - 0x1a0,0,1,0xffffffffffffffff,5,3,10);
    fVar1 = *(float *)((int)puVar14 + 0xe4);
    fVar2 = *(float *)(puVar14 + 0x1c);
    fVar3 = *(float *)(puVar14 + 0x1d);
    fVar7 = (moby->pos).x;
    fVar8 = (moby->pos).y;
    fVar9 = (moby->pos).z;
    *(f32 *)((int)puVar14 + 0xfc) = (moby->pos).w;
    dVar38 = (double)SQRT(fVar3 * fVar3 + fVar2 * fVar2 + fVar1 * fVar1);
    fVar6 = (float)(dVar37 / dVar38);
    dVar37 = dVar42;
    if (dVar42 - dVar38 < 0.0) {
      dVar37 = (double)(fVar2 * fVar6);
    }
    dVar41 = dVar42;
    if (dVar42 - dVar38 < 0.0) {
      dVar41 = (double)(fVar1 * fVar6);
    }
    dVar40 = dVar42;
    if (dVar42 - dVar38 < 0.0) {
      dVar40 = (double)(fVar3 * fVar6);
    }
    if (dVar38 - dVar42 < 0.0) {
      dVar37 = (double)(fVar2 * fVar6);
    }
    if (dVar38 - dVar42 < 0.0) {
      dVar41 = (double)(fVar1 * fVar6);
    }
    if (dVar38 - dVar42 < 0.0) {
      dVar40 = (double)(fVar3 * fVar6);
    }
    *(float *)(puVar14 + 0x1c) = (float)dVar37;
    *(float *)((int)puVar14 + 0xe4) = (float)dVar41;
    *(float *)(puVar14 + 0x1d) = (float)dVar40;
    *(float *)(puVar14 + 0x1e) = (float)((double)fVar7 - dVar37);
    *(float *)((int)puVar14 + 0xf4) = (float)((double)fVar8 - dVar41);
    *(float *)(puVar14 + 0x1f) = (float)((double)fVar9 - dVar40);
    *(float *)(puVar14 + 0x1c) = *(float *)((int)pvVar10 + 0x70) * 0.5;
    *(float *)((int)puVar14 + 0xe4) = *(float *)((int)pvVar10 + 0x74) * 0.5;
    *(float *)(puVar14 + 0x1d) = *(float *)((int)pvVar10 + 0x78) * 0.5;
    *(undefined4 *)((int)puVar14 + 0xec) = *(undefined4 *)((int)pvVar10 + 0x7c);
    iVar28 = rand();
    iVar28 = iVar28 % 10;
    if (iVar28 < 1) {
      if (-1 < iVar28) {
        M1215_0020ab50(uVar24 - 400,uVar24 - 0x1a0,0x4c4);
      }
    }
    else if (iVar28 < 7) {
      M1215_0020ab50(uVar24 - 400,uVar24 - 0x1a0,0x4c2);
    }
    else if (iVar28 < 10) {
      FUN_0021b5e8(uVar24 - 400,uVar24 - 0x1a0,0x4d9);
    }
    DeleteMoby(moby);
    return;
  }
  fVar11 = (moby->pos).x;
  uVar12 = (int)fVar11 >> 0x1f;
  fVar6 = 20.0;
  fVar1 = (moby->pos).x;
  if ((int)((uVar12 >> 1 ^ (uint)fVar11) - uVar12) < 0x41a00000) {
    (moby->pos).x = 20.0;
    fVar1 = fVar6;
  }
  if (1003.0 < fVar1) {
    (moby->pos).x = 1003.0;
  }
  fVar11 = (moby->pos).y;
  uVar12 = (int)fVar11 >> 0x1f;
  fVar1 = (moby->pos).y;
  if ((int)((uVar12 >> 1 ^ (uint)fVar11) - uVar12) < 0x41a00000) {
    (moby->pos).y = 20.0;
    fVar1 = fVar6;
  }
  if (1003.0 < fVar1) {
    (moby->pos).y = 1003.0;
  }
  fVar11 = (moby->pos).z;
  uVar12 = (int)fVar11 >> 0x1f;
  fVar1 = (moby->pos).z;
  if ((int)((uVar12 >> 1 ^ (uint)fVar11) - uVar12) < 0x41a00000) {
    (moby->pos).z = 20.0;
    fVar1 = fVar6;
  }
  if (1003.0 < fVar1) {
    (moby->pos).z = 1003.0;
  }
  MB_RegisterLameShadow(3.0,moby);
  return;
}


