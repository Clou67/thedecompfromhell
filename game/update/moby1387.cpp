// game/update/moby1387.cpp -- reconstructed from NPEA00385 EBOOT
// STATUS: NOT STARTED (raw Ghidra output)
// 5 functions, 0x266f20-0x267300
#include "game/update/moby1387.h"
#include "game/boot.h"
#include "game/camera.h"
#include "game/collproc.h"
#include "game/mobyfunc.h"
#include "game/mobyproc.h"
#include "game/mobyutil.h"
#include "game/tieproc.h"
#include "game/update/moby1584.h"

// 0x0266f20 (0x140 bytes)
void M1387_00266f20(int param_1,longlong param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  int iVar4;
  ulonglong uVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  
  iVar7 = 0;
  uVar5 = (ulonglong)(byte)(&TieClassLookup)[param_1];
  if (*(short *)((&TieClasses)[(byte)(&TieClassLookup)[param_1]] + 0x24) != 0) {
    iVar6 = 0;
    iVar4 = (int)(param_2 << 7);
    do {
      iVar8 = *(int *)(*(int *)((int)&TieClasses + (int)(uVar5 << 2)) + 0x20) + iVar6;
      fVar1 = *(float *)(iVar8 + 0x44) - *(float *)((int)&(Cuboids->pos).y + iVar4);
      fVar2 = *(float *)(iVar8 + 0x40) - *(float *)((int)&(Cuboids->pos).x + iVar4);
      fVar3 = *(float *)(iVar8 + 0x48) - *(float *)((int)&(Cuboids->pos).z + iVar4);
      if ((ABS(*(float *)((int)&(Cuboids->imatrix).v2.x + iVar4) * fVar3 +
               *(float *)((int)&(Cuboids->imatrix).v0.x + iVar4) * fVar2 +
               *(float *)((int)&(Cuboids->imatrix).v1.x + iVar4) * fVar1) < 1.0) &&
         (ABS(*(float *)((int)&(Cuboids->imatrix).v2.y + iVar4) * fVar3 +
              *(float *)((int)&(Cuboids->imatrix).v0.y + iVar4) * fVar2 +
              *(float *)((int)&(Cuboids->imatrix).v1.y + iVar4) * fVar1) < 1.0)) {
        *(undefined4 *)(iVar8 + 0x4c) = 0;
        *(undefined4 *)
         (*(int *)((&TieClasses)[(byte)(&TieClassLookup)[param_1]] + 0x20) + iVar6 + 0x54) =
             0x3f800000;
        uVar5 = (ulonglong)(byte)(&TieClassLookup)[param_1];
      }
      iVar7 = iVar7 + 1;
      iVar6 = iVar6 + 0x70;
    } while (iVar7 < (int)(uint)*(ushort *)(*(int *)((int)&TieClasses + (int)(uVar5 << 2)) + 0x24)
            );
  }
  return;
}


// 0x0267060 (0xa0 bytes)
void FUN_00267060(int param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0x78);
  if ((*(short *)(param_1 + 0xa6) == 0x565) && (*(char *)(param_1 + 0x20) == '\x01')) {
    if (*(int *)(iVar1 + 0xc) != -1) {
      M1387_00266f20(0x802,*(int *)(iVar1 + 0xc));
      M1387_00266f20(0x908,*(undefined4 *)(iVar1 + 0xc));
      M1387_00266f20(0x954,*(undefined4 *)(iVar1 + 0xc));
    }
    *(undefined1 *)(param_1 + 0x20) = 2;
    M1584_002a0d8c(*(undefined1 *)(param_1 + 0x21),1);
  }
  return;
}


// 0x0267100 (0x58 bytes)
void M1387_00267100(int param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0x78);
  if (*(short *)(param_1 + 0xa6) == 0x565) {
    *(undefined1 *)(param_1 + 0x20) = 1;
    *(undefined4 *)(iVar1 + 0x330) = 0;
    *(undefined4 *)(iVar1 + 0x344) = 0;
  }
  MB_UpdateChildMobys(param_1,iVar1 + 0x30,*(undefined4 *)(iVar1 + 0x338));
  return;
}


// 0x0267158 (0x14 bytes)
void M1387_00267158(void)

{
  DAT_0079c898 = 0x10000;
  return;
}


// 0x0267178 (0x188 bytes)
/* Moby 1387 */

void UpdateMoby_1387(MobyInstance *moby)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float *pfVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  
  pfVar9 = (float *)moby->pVar;
  if (moby->state == '\0') {
    fVar1 = (moby->transform).v1.y;
    fVar2 = (moby->transform).v1.x;
    fVar3 = (moby->transform).v1.z;
    fVar4 = *pfVar9;
    fVar5 = (moby->transform).v2.y;
    fVar6 = (moby->transform).v2.x;
    fVar7 = (moby->transform).v2.z;
    fVar8 = 0.0;
    moby->modeBits = moby->modeBits | (LOCK_ROTATION|DISABLED);
    fVar13 = SQRT(fVar3 * fVar3 + fVar2 * fVar2 + fVar1 * fVar1);
    fVar14 = SQRT(fVar7 * fVar7 + fVar6 * fVar6 + fVar5 * fVar5);
    fVar4 = (fVar4 * 0.25) / fVar13;
    fVar12 = fVar8;
    if (0.0 - fVar13 < 0.0) {
      fVar12 = fVar2 * fVar4;
    }
    fVar11 = fVar8;
    if (0.0 - fVar13 < 0.0) {
      fVar11 = fVar1 * fVar4;
    }
    fVar10 = fVar8;
    if (0.0 - fVar13 < 0.0) {
      fVar10 = fVar3 * fVar4;
    }
    if (fVar13 - 0.0 < 0.0) {
      fVar12 = fVar2 * fVar4;
    }
    if (fVar13 - 0.0 < 0.0) {
      fVar11 = fVar1 * fVar4;
    }
    if (fVar13 - 0.0 < 0.0) {
      fVar10 = fVar3 * fVar4;
    }
    (moby->transform).v1.x = fVar12;
    (moby->transform).v1.y = fVar11;
    (moby->transform).v1.z = fVar10;
    fVar1 = pfVar9[1];
    moby->state = '\x01';
    fVar2 = (fVar1 * 0.25) / fVar14;
    fVar1 = fVar8;
    if (0.0 - fVar14 < 0.0) {
      fVar1 = fVar6 * fVar2;
    }
    fVar3 = fVar8;
    if (0.0 - fVar14 < 0.0) {
      fVar3 = fVar5 * fVar2;
    }
    if (0.0 - fVar14 < 0.0) {
      fVar8 = fVar7 * fVar2;
    }
    if (fVar14 - 0.0 < 0.0) {
      fVar1 = fVar6 * fVar2;
    }
    if (fVar14 - 0.0 < 0.0) {
      fVar3 = fVar5 * fVar2;
    }
    if (fVar14 - 0.0 < 0.0) {
      fVar8 = fVar7 * fVar2;
    }
    (moby->transform).v2.x = fVar1;
    (moby->transform).v2.y = fVar3;
    (moby->transform).v2.z = fVar8;
    UpdateMobyTransform(moby);
  }
  return;
}


