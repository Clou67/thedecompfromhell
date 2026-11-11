// game/update/moby835.cpp -- reconstructed from NPEA00385 EBOOT
// STATUS: NOT STARTED (raw Ghidra output)
// 2 functions, 0x48151c-0x4819f0
#include "game/update/moby835.h"
#include "game/collproc.h"
#include "game/hero.h"
#include "game/mobyfunc.h"
#include "game/mobyutil.h"
#include "game/partupd.h"

// 0x048151c (0x14 bytes)
void M835_0048151c(void)

{
  DAT_008acd78 = 0x10000;
  return;
}


// 0x0481568 (0x488 bytes)
/* Moby 835 */

void UpdateMoby_835(MobyInstance *moby)

{
  void *pvVar1;
  int iVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  double dVar16;
  double dVar17;
  float fVar18;
  GPiece<16> local_100;
  GPiece<16> local_f0;
  float afStack_e0 [4];
  float local_d0;
  float local_cc;
  float local_c8;
  undefined4 local_c4;
  GPiece<48> auStack_c0;
  int local_90 [4];
  
  pvVar1 = moby->pVar;
  dVar8 = 0.0;
  iVar2 = MB_damage(moby,0x230000,0);
  MB_HandleDamage(moby,iVar2,ZEXT48(pvVar1) + 0x20,0,local_90,0,0,4);
  if (((local_90[0] < 2) || (iVar2 == 0)) || (*(short *)(*(int *)(iVar2 + 0x20) + 0xa6) == 0x343)) {
    if (moby->state == 0) {
      dVar8 = (double)MB_randRot();
      *(float *)((int)pvVar1 + 0x60) = (float)dVar8;
      *(undefined4 *)((int)pvVar1 + 100) = 0;
      moby->state = '\x01';
    }
    else if (moby->state < 2) {
      MB_BobMotion
                (DAT_008acd9c,DAT_008acda0 * 0.017453292 * g_FrameTime,moby,
                 (float *)((int)pvVar1 + 0x60),(float *)((int)pvVar1 + 100));
      dVar9 = 1.0;
      SetCollDamIn(0x3ff0000000000000,auStack_c0,moby,0x10001);
      if ((((DAT_00969f1c == moby) || (DAT_00969f20 == moby)) ||
          (iVar2 = CollMobySphere(dVar9,local_f0), iVar2 != 0)) &&
         ((g_CollOutput.pMoby != (MobyInstance *)0x0 && ((g_CollOutput.pMoby)->oClass != MINE_0343)))) {
        dVar10 = 2.0;
        dVar11 = 4.0;
        MB_genericExplosion
                  (dVar8,dVar8,0x4000000000000000,dVar9,0x4010000000000000,dVar9,0x401c000000000000,
                   moby,local_100,0,1,0xffffffffffffffff,3,3,5);
        (moby->pos).z = (float)((double)(moby->pos).z + dVar9);
        fVar18 = CollWaterHeight(&(moby->pos).x,afStack_e0);
        dVar3 = (double)fVar18;
        iVar2 = 0;
        (moby->pos).z = (float)((double)(moby->pos).z - dVar9);
        dVar12 = -1.0;
        dVar13 = -0.5;
        dVar14 = 8.0;
        dVar15 = 0.05000000074505806;
        dVar16 = 0.10000000149011612;
        dVar17 = 210000.0;
        do {
          local_d0 = 0.0;
          local_cc = 0.0;
          local_c8 = 0.0;
          local_c4 = 0;
          dVar4 = (double)MB_randRangeFloat((float)dVar12,(float)dVar9);
          local_d0 = (float)dVar4;
          dVar4 = (double)MB_randRangeFloat((float)dVar12,(float)dVar9);
          local_cc = (float)dVar4;
          dVar4 = (double)MB_randRangeFloat((float)dVar13,(float)dVar10);
          local_c8 = (float)dVar4;
          dVar4 = (double)MB_randRangeFloat
                                    ((float)((double)g_FrameTime * dVar11),
                                     (float)((double)g_FrameTime * dVar14));
          dVar7 = (double)SQRT(local_c8 * local_c8 + local_d0 * local_d0 + local_cc * local_cc);
          fVar18 = (float)(dVar4 / dVar7);
          dVar4 = dVar8;
          if (dVar8 - dVar7 < 0.0) {
            dVar4 = (double)(local_d0 * fVar18);
          }
          dVar5 = dVar8;
          if (dVar8 - dVar7 < 0.0) {
            dVar5 = (double)(local_cc * fVar18);
          }
          dVar6 = dVar8;
          if (dVar8 - dVar7 < 0.0) {
            dVar6 = (double)(local_c8 * fVar18);
          }
          if (dVar7 - dVar8 < 0.0) {
            dVar4 = (double)(local_d0 * fVar18);
          }
          if (dVar7 - dVar8 < 0.0) {
            dVar5 = (double)(local_cc * fVar18);
          }
          if (dVar7 - dVar8 < 0.0) {
            dVar6 = (double)(local_c8 * fVar18);
          }
          local_d0 = (float)dVar4;
          local_cc = (float)dVar5;
          local_c8 = (float)dVar6;
          dVar4 = (double)MB_randRangeFloat((float)dVar15,(float)dVar16);
          SpawnPart_34((double)(float)(dVar4 * dVar17),dVar3,(Vec4 *)&moby->pos,&local_d0);
          iVar2 = iVar2 + 1;
        } while (iVar2 < 0x96);
        DeleteMoby(moby);
      }
    }
  }
  else {
    MB_genericExplosion
              (dVar8,dVar8,0x4000000000000000,0x3ff0000000000000,0x4010000000000000,
               0x3ff0000000000000,0x401c000000000000,moby,local_100,0,1,0xffffffffffffffff,3,3,5);
    DeleteMoby(moby);
  }
  return;
}


