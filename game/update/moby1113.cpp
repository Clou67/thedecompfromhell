// game/update/moby1113.cpp -- reconstructed from NPEA00385 EBOOT
// STATUS: NOT STARTED (raw Ghidra output)
// 1 functions, 0x1d37b8-0x1d3ba4
// shared update function UpdateMoby_{1113_1114_1115_1116}; registered for oClasses 1113, 1114, 1115, 1116
#include "game/update/moby1113.h"
#include "game/collproc.h"
#include "game/hero.h"
#include "game/mobyfunc.h"
#include "game/mobyutil.h"
#include "game/update/moby200.h"

// shared update function, registered for oClasses 1113, 1114, 1115, 1116
// 0x01d37b8 (0x3ec bytes)
/* Moby 1113
   Moby 1114
   Moby 1115
   Moby 1116 */

void UpdateMoby_1113(MobyInstance *moby)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  int *piVar6;
  float fVar7;
  float fVar8;
  int iVar9;
  int iVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  undefined8 uVar14;
  double dVar15;
  double dVar16;
  double dVar17;
  double dVar18;
  double dVar19;
  double dVar20;
  undefined8 uVar21;
  double dVar22;
  double dVar23;
  double dVar24;
  double dVar25;
  undefined8 uVar26;
  double dVar27;
  double dVar28;
  double dVar29;
  double dVar30;
  undefined4 local_e0;
  undefined4 local_dc;
  float local_d8;
  undefined4 local_d4;
  
  piVar6 = (int *)moby->pVar;
  iVar9 = MB_damage(moby,0x30000,0);
  if (((iVar9 != 0) && (iVar10 = *(int *)(iVar9 + 0x20), iVar10 != 0)) &&
     (((*(short *)(iVar10 + 0xa6) == 0x415 &&
       ((*(char *)(iVar10 + 0x20) == '\b' && (*(int *)(iVar9 + 0x2c) == 0x3f800408)))) ||
      ((*(short *)(iVar10 + 0xa6) == 0x452 &&
       ((*(char *)(iVar10 + 0x20) == '\t' && (*(int *)(iVar9 + 0x2c) == 0x3f800408)))))))) {
    fVar1 = (float)piVar6[2];
    fVar2 = (float)piVar6[1];
    iVar10 = 0;
    fVar3 = (float)piVar6[3];
    fVar4 = (moby->transform).v2.y;
    fVar5 = (moby->transform).v2.x;
    fVar8 = (moby->transform).v0.y * fVar2 + (moby->transform).v1.y * fVar1;
    fVar7 = (moby->transform).v0.x * fVar2 + (moby->transform).v1.x * fVar1;
    dVar16 = (double)(fVar5 * fVar3 + fVar7);
    if (0 < *piVar6) {
      dVar22 = -(double)(fVar5 * fVar3 + fVar7);
      dVar23 = -(double)(fVar4 * fVar3 + fVar8);
      fVar1 = (moby->transform).v2.z * fVar3 +
              (moby->transform).v0.z * fVar2 + (moby->transform).v1.z * fVar1;
      dVar30 = 0.5;
      dVar17 = 1.5;
      dVar18 = 5.0;
      dVar19 = 10.0;
      dVar25 = 2.0;
      dVar20 = 0.4099999964237213;
      uVar26 = 0x3ff0000000000000;
      uVar21 = 0x3fe8000000000000;
      do {
        dVar24 = (double)fVar1;
        dVar11 = (double)MB_randRangeFloat((float)dVar22,(float)dVar16);
        dVar12 = (double)MB_randRangeFloat((float)dVar23,fVar4 * fVar3 + fVar8);
        dVar13 = (double)MB_randRangeFloat((float)dVar17,(float)dVar24);
        dVar27 = (double)(moby->pos).x;
        dVar28 = (double)(moby->pos).y;
        dVar29 = (double)(moby->pos).z;
        MB_randSphere
                  ((double)(float)((double)g_FrameTime * dVar18),
                   (double)(float)((double)g_FrameTime * dVar19),&local_e0);
        dVar15 = (double)local_d8;
        if ((int)local_d8 < 0) {
          dVar15 = -dVar15;
          local_d8 = (float)dVar15;
        }
        if (dVar15 < (double)(float)((double)g_FrameTime * dVar25)) {
          local_d8 = (float)((double)g_FrameTime * dVar25 + dVar15);
        }
        fVar1 = (float)dVar24;
        uVar14 = MB_randRangeFloat((float)dVar20,(float)dVar30);
        MB_randRange(0x32,0x50);
        fVar2 = (float)(dVar11 * dVar30 + dVar27);
        FUN_00425540(uVar14,uVar26,uVar26,uVar21,CONCAT44(fVar2,(float)(dVar12 * dVar30 + dVar28)),
                     CONCAT44((float)(dVar13 + dVar29),fVar2),CONCAT44(local_e0,local_dc),
                     CONCAT44(local_d8,local_d4),iVar10 % 3 + 0x2b8);
        iVar10 = iVar10 + 1;
      } while (iVar10 < *piVar6);
    }
    MB_genericExplosion
              (0x4008000000000000,0x3ff0000000000000,0x4010000000000000,0x4000000000000000,
               0x4022000000000000,0x3ff0000000000000,0x402e000000000000,moby,iVar9 + 0x10,iVar9,1,
               0xffffffffffffffff,10,3,0x10);
    DeleteMoby(moby);
    return;
  }
  moby->damage = -1;
  return;
}


