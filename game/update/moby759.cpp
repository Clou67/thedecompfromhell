// game/update/moby759.cpp -- reconstructed from NPEA00385 EBOOT
// STATUS: NOT STARTED (raw Ghidra output)
// 2 functions, 0x44ecac-0x44f050
#include <stdio.h>
#include "game/update/moby759.h"
#include "game/collproc.h"
#include "game/mobyfunc.h"
#include "game/mobyutil.h"

// 0x044ecac (0x14 bytes)
void M759_0044ecac(void)

{
  DAT_00871ce0 = 0x10000;
  return;
}


// 0x044ece0 (0x370 bytes)
// strings: 00658194: 'HP depleted, do death\n' | 006581ac: 'do %f HP damage leaving %f\n' | 006581cc: 'found water at %d\n'

/* Moby 759 */

ulonglong UpdateMoby_759(MobyInstance *moby)

{
  byte bVar1;
  void *pvVar2;
  f32 fVar3;
  uint uVar4;
  uint uVar5;
  float fVar6;
  ulonglong uVar7;
  int iVar9;
  int iVar10;
  ulonglong uVar8;
  int32_t iVar11;
  uint uVar12;
  GPiece<16> local_50;
  GPiece<16> local_40;
  int local_30 [4];
  
  uVar7 = (ulonglong)(int)moby;
  uVar8 = uVar7;
  if (moby != (MobyInstance *)0x0) {
    pvVar2 = moby->pVar;
    if (pvVar2 != (void *)0x0) {
      if (moby->state != '\x02') {
        iVar9 = MB_damage(uVar7,0x330000,0);
        iVar10 = MB_HandleDamage(moby,iVar9,ZEXT48(pvVar2) + 0x20,0,local_30,0,0,4);
        if ((0 < iVar10) && (iVar10 < 3)) {
          *(undefined4 *)((int)pvVar2 + 0x20) = 0;
        }
        if (1 < local_30[0]) {
          uVar12 = (int)*(uint *)((int)pvVar2 + 0x20) >> 0x1f;
          uVar4 = (int)*(uint *)(iVar9 + 0x2c) >> 0x1f;
          if ((int)((uVar4 >> 1 ^ *(uint *)(iVar9 + 0x2c)) - uVar4) <
              (int)((uVar12 >> 1 ^ *(uint *)((int)pvVar2 + 0x20)) - uVar12)) {
            fVar6 = *(float *)((int)pvVar2 + 0x20) - *(float *)(iVar9 + 0x2c);
            *(float *)((int)pvVar2 + 0x20) = fVar6;
            printf("do %f HP damage leaving %f\n",(double)*(float *)(iVar9 + 0x2c),
                         (double)fVar6);
          }
          else {
            printf("HP depleted, do death\n");
            *(undefined4 *)((int)pvVar2 + 0x20) = 0;
            moby->modeBits =
                 moby->modeBits &
                 (MIRROR|CAN_BE_DAMAGED|HIDE_BACKFACES|DISABLE_Z_WRITE|DRAW_SHADOW|
                  DRAW_TRANSPARENT_WEIRD|LOCK_ROTATION|NO_DRAW|UNK_40|HAS_SPECIAL_VARS|HAS_GLOW|
                  TRANSPARENT|NO_POST_UPDATE|NO_UPDATE|DISABLED);
            MB_genericExplosion
                      (0,0,0x4010000000000000,0x4000000000000000,0x4022000000000000,
                       0x3ff0000000000000,0x402e000000000000,uVar7,local_50,0,0,&DAT_0044ecc0,10,3,
                       0x10);
            moby->state = '\x02';
          }
        }
        moby->damage = -1;
      }
      bVar1 = moby->state;
      uVar8 = (ulonglong)bVar1;
      if (bVar1 == 0) {
        uVar8 = 0;
        *(undefined4 *)((int)pvVar2 + 0x60) = 0;
        iVar9 = MobyUpdateChainStart;
        while ((iVar9 != 0 &&
               (uVar8 = (ulonglong)*(uint *)((int)pvVar2 + 0x60), *(uint *)((int)pvVar2 + 0x60) == 0
               ))) {
          uVar8 = (ulonglong)*(ushort *)(iVar9 + 0xa6);
          if (*(ushort *)(iVar9 + 0xa6) == 0x2f8) {
            *(int *)((int)pvVar2 + 0x60) = iVar9;
            moby->state = '\x01';
            uVar12 = *(int *)((int)pvVar2 + 0x60) - (int)g_MobyInstance;
            iVar11 = printf("found water at %d\n",
                                  ((int)uVar12 >> 8) +
                                  (uint)((int)uVar12 < 0 && (uVar12 & 0xff) != 0));
            uVar8 = (ulonglong)iVar11;
          }
          iVar9 = *(int *)(iVar9 + 0x28);
        }
      }
      else if (bVar1 < 2) {
        fVar3 = (moby->pos).z;
        uVar4 = (int)fVar3 >> 0x1f;
        uVar12 = *(uint *)(*(int *)((int)pvVar2 + 0x60) + 0x18);
        uVar5 = (int)uVar12 >> 0x1f;
        uVar8 = (ulonglong)(uVar5 >> 1 ^ uVar12) - (longlong)(int)uVar5;
        if ((int)((uVar4 >> 1 ^ (uint)fVar3) - uVar4) < (int)uVar8) {
          MB_genericExplosion
                    (0x4008000000000000,0x3ff0000000000000,0x4010000000000000,0x4000000000000000,
                     0x4022000000000000,0x3ff0000000000000,0x402e000000000000,uVar7,local_40,0,0,
                     &DAT_0044ecc0,10,3,0x10);
          uVar8 = 2;
          moby->state = '\x02';
        }
      }
      else if (bVar1 < 3) {
        uVar8 = DeleteMoby(moby);
      }
    }
  }
  return uVar8;
}


