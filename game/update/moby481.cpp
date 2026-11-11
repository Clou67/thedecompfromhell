// game/update/moby481.cpp -- reconstructed from NPEA00385 EBOOT
// STATUS: NOT STARTED (raw Ghidra output)
// 3 functions, 0x39e8f4-0x39ecd0
#include "game/update/moby481.h"
#include "game/hero.h"
#include "game/mobyfunc.h"
#include "game/mobyutil.h"
#include "idol/fastfunc.h"

// 0x039e8f4 (0x54 bytes)
void FUN_0039e8f4(int param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  
  if (*(char *)(param_1 + 0x20) == '\t') {
    *(undefined4 *)(param_1 + 0x10) = *param_2;
    *(undefined4 *)(param_1 + 0x14) = param_2[1];
    *(undefined4 *)(param_1 + 0x18) = param_2[2];
    uVar1 = param_2[3];
    *(undefined1 *)(param_1 + 0x20) = 1;
    *(undefined4 *)(param_1 + 0x1c) = uVar1;
    *(undefined1 *)(param_1 + 0x31) = 1;
    *(ushort *)(param_1 + 0x34) = *(ushort *)(param_1 + 0x34) & 0xfffe;
    *(undefined4 *)(param_1 + 0x94) = *(undefined4 *)(*(int *)(param_1 + 0x24) + 0x10);
  }
  return;
}


// 0x039e948 (0x14 bytes)
void M481_0039e948(void)

{
  DAT_00843090 = 0x10000;
  return;
}


// 0x039e9a8 (0x328 bytes)
/* Moby 481 */

void UpdateMoby_481(MobyInstance *moby)

{
  float fVar1;
  void *pvVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float *pfVar6;
  longlong lVar7;
  ulonglong uVar8;
  int iVar9;
  ulonglong uVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  double dVar16;
  double dVar17;
  double dVar18;
  double dVar19;
  double dVar20;
  Vec4 local_90;
  
  pvVar2 = moby->pVar;
  uVar10 = ZEXT48(pvVar2);
  dVar15 = (double)(moby->pos).x;
  dVar16 = (double)(moby->pos).y;
  dVar17 = (double)(moby->pos).z;
  if (pvVar2 == (void *)0x0) {
    DeleteMoby(moby);
  }
  else {
    if (moby->state == 0) {
      dVar11 = (double)MB_randRangeFloat(0.5,0.8);
      moby->unk58 = (float)dVar11;
      fVar1 = (moby->pos).z;
      iVar9 = 0;
      moby->state = '\x01';
      *(float *)((int)pvVar2 + 0x220) = fVar1 + 15.0;
      moby->updateDistance = -1;
      *(undefined2 *)((int)pvVar2 + 0x3e) = 0xd;
      do {
        dVar11 = (double)MB_randRot();
        iVar9 = iVar9 + 1;
        *(float *)((int)uVar10 + 0x224) = (float)dVar11;
        uVar10 = uVar10 + 4;
      } while (iVar9 < 3);
    }
    else if (moby->state < 2) {
      dVar11 = (double)BlendAnimFrame(moby);
      dVar11 = (double)FastAddRots((float)(dVar11 * 6.2831854820251465) * 0.008474576);
      fVar1 = (float)(dVar11 + 1.570796251296997);
      uVar8 = 0;
      fVar3 = 3.1415925 - fVar1;
      if (fVar1 - (3.1415925 - fVar1) < 0.0) {
        fVar3 = fVar1;
      }
      fVar4 = -3.1415925 - fVar1;
      if ((-3.1415925 - fVar1) - fVar3 < 0.0) {
        fVar4 = fVar3;
      }
      dVar13 = 0.75;
      dVar14 = 0.0;
      dVar18 = 0.01745329238474369;
      dVar19 = 0.029999999329447746;
      dVar20 = 0.30000001192092896;
      fVar1 = fVar4 * fVar4;
      fVar3 = fVar1 * fVar1 * fVar4;
      fVar5 = fVar1 * fVar3;
      dVar11 = (double)(fVar1 * fVar5 * 2.601887e-06 +
                       fVar5 * -0.0001980741 +
                       fVar3 * 0.0083330255 + fVar1 * fVar4 * -0.16666657 + fVar4);
      do {
        pfVar6 = (float *)((int)pvVar2 + (int)((uVar8 & 0xffffffff) << 2) + 0x224);
        dVar12 = (double)FastWrapRot
                                   (*pfVar6,(float)((double)DAT_008430c0 * dVar18) *
                                            g_FrameTime);
        lVar7 = (uVar8 & 0x1ffffff) * 0x80;
        *pfVar6 = (float)dVar12;
        *(float *)((int)pvVar2 + (int)lVar7 + 0x108) = (float)dVar12;
        MB_UpdateManipulatorRot
                  ((double)(float)((double)DAT_0071f40c * dVar19),
                   (double)(float)((double)DAT_0071f40c * dVar20),(longlong)(int)moby,
                   lVar7 + uVar10 + 0xa0 & 0xffffffff,uVar8);
        iVar9 = (int)uVar8 + 1;
        uVar8 = (ulonglong)iVar9;
      } while (iVar9 < 3);
      iVar9 = *(int *)((int)pvVar2 + 0x230);
      if (iVar9 == -1) {
        dVar14 = 15.0;
      }
      else if (g_MobyInstance[iVar9].oClass == BOLT_CRANK) {
                    /* WARNING: Load size is inaccurate */
        dVar14 = (double)(*g_MobyInstance[iVar9].pVar * 15.0);
      }
      (moby->pos).z =
           (float)((double)(float)(dVar11 * dVar13 + (double)*(float *)((int)pvVar2 + 0x220)) -
                  dVar14);
    }
    lVar7 = (longlong)(int)moby + 0x40;
    local_90.x = (float)((double)(moby->pos).x - dVar15);
    local_90.y = (float)((double)(moby->pos).y - dVar16);
    local_90.w = (moby->pos).w;
    local_90.z = (float)((double)(moby->pos).z - dVar17);
    MB_GetOrientation((MobyInstance *)((int)pvVar2 + 0x60),&local_90,lVar7,lVar7);
  }
  return;
}


