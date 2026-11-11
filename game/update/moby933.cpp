// game/update/moby933.cpp -- reconstructed from NPEA00385 EBOOT
// STATUS: NOT STARTED (raw Ghidra output)
// 2 functions, 0x4bf81c-0x4bfde4
#include "game/update/moby933.h"
#include "game/collproc.h"
#include "game/hero.h"
#include "game/mobyfunc.h"
#include "game/mobyutil.h"
#include "game/sound.h"
#include "idol/fastfunc.h"

// 0x04bf81c (0x14 bytes)
void M933_004bf81c(void)

{
  DAT_008f4aa8 = 0x10000;
  return;
}


// 0x04bf890 (0x554 bytes)
// strings: 008f4ad4: '=VwP' (raw)

/* Moby 933 */

void UpdateMoby_933(MobyInstance *moby)

{
  byte bVar1;
  f32 fVar2;
  f32 fVar3;
  float fVar4;
  float fVar5;
  int *piVar6;
  undefined4 uVar7;
  ulonglong *puVar8;
  longlong lVar9;
  int iVar11;
  ulonglong uVar10;
  ulonglong unaff_r28;
  ulonglong unaff_r29;
  ulonglong unaff_r30;
  ulonglong unaff_r31;
  ulonglong in_LR;
  double dVar12;
  double dVar13;
  double dVar14;
  ulonglong in_f31;
  double dVar15;
  undefined8 uVar16;
  GPiece<16> auVar17;
  
  lVar9 = (longlong)(int)moby;
  uVar10 = ZEXT48(&stack0x00000000);
  puVar8 = (ulonglong *)(uVar10 - 0x150);
  *puVar8 = uVar10;
  puVar8[0x2c] = in_LR;
  puVar8[0x29] = in_f31;
  puVar8[0x28] = unaff_r31;
  bVar1 = moby->state;
  puVar8[0x27] = unaff_r30;
  piVar6 = (int *)moby->pVar;
  puVar8[0x26] = unaff_r29;
  puVar8[0x25] = unaff_r28;
  if (bVar1 == 0) {
    piVar6[1] = -0x40800000;
    if (*piVar6 == 0) {
      dVar12 = (double)GetGroundZ(0x3fe0000000000000,lVar9 + 0x10,0);
      (moby->pos).z = (float)(dVar12 + 0.699999988079071);
      dVar12 = (double)MB_randRangeFloat(0.010471975,0.02094395);
      piVar6[4] = (int)(float)dVar12;
      dVar15 = 0.006981316953897476;
      dVar12 = (double)MB_randRangeFloat(0.006981317,0.013962634);
      piVar6[5] = (int)(float)dVar12;
      dVar12 = (double)MB_randRangeFloat(0.0034906585,(float)dVar15);
      piVar6[6] = (int)(float)dVar12;
      moby->state = '\x01';
    }
    else if (0x7f < *(byte *)(*piVar6 + 0x20)) {
      moby->state = '\x01';
    }
  }
  else if (bVar1 < 2) {
    if (Level == Kalebo) {
      fVar4 = (float)piVar6[1];
      dVar12 = 0.0;
      if (piVar6[1] < 0) {
        dVar15 = (double)GetGroundZ(0x3fe0000000000000,lVar9 + 0x10,0);
        fVar4 = (float)(dVar15 + 0.699999988079071);
        piVar6[1] = (int)fVar4;
      }
      AccelDelt(fVar4,DAT_0071f40c * 0.03,DAT_0071f40c * 0.3,(float)dVar12,&(moby->pos).z,
                          0x4bf830,(float *)(piVar6 + 2));
      if ((MobyInstancePermEnd < moby) && (g_heroStateType != 0xf)) {
        DeleteMoby(moby);
        return;
      }
    }
    iVar11 = MB_damage(lVar9,0x230000,0);
    FastMemSetZero(uVar10 - 0x70,0x40);
    *(undefined2 *)((int)puVar8 + 0xe4) = 1;
    auVar17 = loadVectorLeftIndexed(0x28,0x4bf830);
    auVar17 = auVar17 >> 0x60 & (GPiece<16>)0xffffffff;
    uVar7 = storeVectorElementWordIndexed
                      (auVar17 | auVar17 << 0x20 | auVar17 << 0x40 | auVar17 << 0x60,0xe0,
                       uVar10 - 0x150);
    *(undefined4 *)(puVar8 + 0x1c) = uVar7;
    *(undefined4 *)(puVar8 + 0x1e) = 0x3f000000;
    *(undefined1 *)((int)puVar8 + 0x11a) = 7;
    *(undefined1 *)((int)puVar8 + 0x11b) = 0xff;
    MB_HandleDamage(moby,iVar11,uVar10 - 0x70,0,puVar8 + 0x24,0,0,4);
    if ((((1 < *(int *)(puVar8 + 0x24)) && (iVar11 != 0)) &&
        (*(short *)(*(int *)(iVar11 + 0x20) + 0xa6) != 0x283)) || (DAT_00969f1c == moby)) {
      uVar16 = 0;
      *(undefined4 *)((int)puVar8 + 0xcc) = 0;
      *(undefined4 *)(puVar8 + 0x19) = 0;
      *(undefined4 *)((int)puVar8 + 0xc4) = 0;
      *(undefined4 *)(puVar8 + 0x18) = 0;
      PlayMobySound(0,0,moby);
      if (DAT_00969f1c == moby) {
        puVar8[0x12] = 0xffffffffffffffff;
        puVar8[0x14] = 1;
        puVar8[0x15] = 1;
        puVar8[0x16] = 0xffffffffffffffff;
        puVar8[0x17] = 0;
        MB_genericExplosion
                  (0x4008000000000000,0x3ff0000000000000,0x4008000000000000,0x4014000000000000,
                   0x4022000000000000,0x3ff0000000000000,0x402e000000000000,lVar9,uVar10 - 0x90,
                   lVar9 + 0x10,0xffffffffffffffff,1,10,0x14,0x3c);
      }
      else {
        puVar8[0x12] = 0xffffffffffffffff;
        puVar8[0x14] = 1;
        puVar8[0x15] = 1;
        puVar8[0x16] = 0xffffffffffffffff;
        puVar8[0x17] = 0;
        MB_genericExplosion
                  (uVar16,uVar16,0x4008000000000000,0x4014000000000000,0x4022000000000000,
                   0x3ff0000000000000,0x402e000000000000,lVar9,uVar10 - 0x90,lVar9 + 0x10,
                   0xffffffffffffffff,1,10,0x14,0x3c);
      }
      if (moby < MobyInstancePermEnd) {
        moby->damage = -1;
        moby->state = '\x02';
        moby->collision = (ushort *)0x0;
        moby->updateDistance = -1;
        moby->modeBits = moby->modeBits | (UNK_40|DISABLED);
        return;
      }
      DeleteMoby(moby);
      return;
    }
  }
  else if (bVar1 < 3) {
    fVar2 = (moby->pos).y;
    *(f32 *)(puVar8 + 0x1a) = (moby->pos).x;
    fVar3 = (moby->pos).z;
    *(f32 *)((int)puVar8 + 0xd4) = fVar2;
    *(f32 *)(puVar8 + 0x1b) = fVar3;
    *(undefined4 *)((int)puVar8 + 0xdc) = 0x40400000;
    iVar11 = FastCheckBsphereInView(0x4050000000000000,uVar10 - 0x80);
    if (iVar11 == -1) {
      moby->state = '\x01';
      moby->modeBits =
           moby->modeBits &
           (MIRROR|CAN_BE_DAMAGED|HIDE_BACKFACES|CAN_BE_AUTO_TARGETED|DISABLE_Z_WRITE|DRAW_SHADOW|
            DRAW_TRANSPARENT_WEIRD|LOCK_ROTATION|NO_DRAW|HAS_SPECIAL_VARS|HAS_GLOW|TRANSPARENT|
            NO_POST_UPDATE|NO_UPDATE);
      moby->collision = moby->pClass->collision;
    }
  }
  dVar15 = (double)FastWrapRot((float)piVar6[3],DAT_008f4ad4);
  dVar12 = (double)(float)(3.141592502593994 - dVar15);
  if (dVar15 - (double)(float)(3.141592502593994 - dVar15) < 0.0) {
    dVar12 = dVar15;
  }
  dVar13 = (double)(float)(-3.141592502593994 - dVar15);
  if ((double)(float)(-3.141592502593994 - dVar15) - dVar12 < 0.0) {
    dVar13 = dVar12;
  }
  piVar6[3] = (int)(float)dVar15;
  dVar15 = (double)(float)(dVar13 * dVar13);
  dVar14 = (double)(float)(dVar15 * (double)(float)(dVar15 * dVar13));
  dVar12 = (double)(float)(dVar15 * dVar14);
  dVar12 = (double)((float)(dVar15 * dVar12) * 2.601887e-06 +
                   (float)(dVar12 * -0.0001980741071747616 +
                          (double)(float)(dVar14 * 0.008333025500178337 +
                                         (double)(float)((double)(float)(dVar15 * dVar13) *
                                                         -0.16666656732559204 + dVar13))));
  iVar11 = FastDoubleToInt((double)(float)(dVar12 * 48.0));
  uVar10 = FastDoubleToInt((double)(float)(dVar12 * 32.0));
  fVar4 = (moby->rotation).x;
  fVar5 = (float)piVar6[4];
  moby->field60_0x90 =
       (int)((uVar10 & 0xffffffff) << 8) + 0x3000U | iVar11 + 0xcfU |
       (int)((uVar10 & 0xffffffff) << 0x10) + 0x300000U | 0xff000000;
  dVar12 = (double)FastWrapRot(fVar4,fVar5);
  (moby->rotation).x = (float)dVar12;
  dVar12 = (double)FastWrapRot((moby->rotation).y,(float)piVar6[5]);
  (moby->rotation).y = (float)dVar12;
  dVar12 = (double)FastWrapRot((moby->rotation).z,(float)piVar6[6]);
  (moby->rotation).z = (float)dVar12;
  return;
}


