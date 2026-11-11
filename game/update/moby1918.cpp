// game/update/moby1918.cpp -- reconstructed from NPEA00385 EBOOT
// STATUS: NOT STARTED (raw Ghidra output)
// 3 functions, 0x2d92a0-0x2d9678
#include "game/update/moby1918.h"
#include "game/camera.h"
#include "game/draw.h"
#include "game/mobyfunc.h"
#include "game/mobyutil.h"
#include "game/vuchain.h"
#include "idol/fastfunc.h"

// 0x02d92a0 (0x228 bytes)
// inlined: FastRSqrt @0x2d9334, FastRSqrt @0x2d93a4, FastRSqrt @0x2d9428
void M1918_002d92a0
               (int param_1,float *param_2,float *param_3,undefined8 param_4,float *param_5)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  int iVar12;
  
  iVar12 = 0;
  if (0 < param_1) {
    fVar1 = 0.0;
    do {
      fVar2 = param_3[1] - GameCamera.posY;
      fVar3 = *param_3 - GameCamera.posX;
      fVar8 = param_3[2] - GameCamera.posZ;
      fVar4 = fVar8 * fVar8 + fVar3 * fVar3 + fVar2 * fVar2;
      fVar6 = fVar1;
      fVar5 = fVar1;
      fVar7 = fVar1;
      if (SQRT(fVar4) != 0.0) {
        fVar5 = 1.0 / SQRT(fVar4);
        fVar5 = -(fVar4 * fVar5 * fVar5 - 1.0) * fVar5 * 0.5 + fVar5;
        fVar5 = -(fVar4 * fVar5 * fVar5 - 1.0) * fVar5 * 0.5 + fVar5;
        fVar5 = -(fVar4 * fVar5 * fVar5 - 1.0) * fVar5 * 0.5 + fVar5;
        fVar6 = fVar3 * fVar5;
        fVar7 = fVar2 * fVar5;
        fVar5 = fVar8 * fVar5;
      }
      fVar2 = param_2[1];
      fVar3 = *param_2;
      fVar4 = param_2[2];
      fVar11 = fVar4 * fVar4 + fVar3 * fVar3 + fVar2 * fVar2;
      fVar9 = fVar1;
      fVar10 = fVar1;
      fVar8 = fVar1;
      if (SQRT(fVar11) != 0.0) {
        fVar8 = 1.0 / SQRT(fVar11);
        fVar8 = -(fVar11 * fVar8 * fVar8 - 1.0) * fVar8 * 0.5 + fVar8;
        fVar8 = -(fVar11 * fVar8 * fVar8 - 1.0) * fVar8 * 0.5 + fVar8;
        fVar8 = -(fVar11 * fVar8 * fVar8 - 1.0) * fVar8 * 0.5 + fVar8;
        fVar9 = fVar8 * fVar3;
        fVar10 = fVar8 * fVar2;
        fVar8 = fVar8 * fVar4;
      }
      fVar2 = (fVar5 * fVar8 + fVar6 * fVar9 + fVar7 * fVar10) * 2.0;
      fVar3 = -(fVar2 * fVar10 - fVar7);
      fVar9 = -(fVar2 * fVar9 - fVar6);
      fVar2 = -(fVar2 * fVar8 - fVar5);
      fVar4 = fVar2 * fVar2 + fVar9 * fVar9 + fVar3 * fVar3;
      fVar5 = fVar1;
      fVar6 = fVar1;
      fVar7 = fVar1;
      if (SQRT(fVar4) != 0.0) {
        fVar7 = 1.0 / SQRT(fVar4);
        fVar7 = -(fVar4 * fVar7 * fVar7 - 1.0) * fVar7 * 0.5 + fVar7;
        fVar7 = -(fVar4 * fVar7 * fVar7 - 1.0) * fVar7 * 0.5 + fVar7;
        fVar7 = -(fVar4 * fVar7 * fVar7 - 1.0) * fVar7 * 0.5 + fVar7;
        fVar5 = fVar7 * fVar9;
        fVar6 = fVar7 * fVar3;
        fVar7 = fVar7 * fVar2;
      }
      iVar12 = iVar12 + 1;
      param_3 = param_3 + 3;
      param_2 = param_2 + 3;
      fVar7 = SQRT((fVar7 + 1.0) * (fVar7 + 1.0) + fVar5 * fVar5 + fVar6 * fVar6) * 2.0;
      *param_5 = (fVar5 / fVar7 + 0.5) * 4.0;
      param_5[1] = (fVar6 / fVar7 + 0.5) * 4.0;
      param_5 = param_5 + 2;
    } while (iVar12 < param_1);
  }
  return;
}


// 0x02d94c8 (0x150 bytes)
void M1918_002d94c8(void)

{
  undefined8 uVar1;
  
  uVar1 = GetEffectTex(0x30);
  SetGSReg(0x18,uVar1);
  uVar1 = idol_draw::PackCmd(0,1,2,1,0x20);
  SetGSReg(3,uVar1);
  uVar1 = FUN_00502f08(0,0,0,0,0,0);
  SetGSReg(6,uVar1);
  uVar1 = STUB_00502fd4_RET_0(0,0,1,1,1,0,0xff90);
  SetGSReg(0x1a,uVar1);
  STUB_00071170();
  M1918_002d92a0(DAT_007dc410,PTR_DAT_007dcd88,PTR_DAT_007dcd80,PTR_DAT_007dcd84,&DAT_010b8780);
  DrawMeshSet(DAT_007dc410,PTR_DAT_007dcd80,PTR_DAT_007dcd8c,&DAT_010b8780,9);
  return;
}


// 0x02d9618 (0x60 bytes)
/* Moby 1918 */

void UpdateMoby_1918(MobyInstance *moby)

{
  if (moby->state == 0) {
    moby->state = '\x01';
  }
  else if (moby->state < 2) {
    RegisterFuncForMoby(&PTR_M1918_002d94c8_0070b480,moby);
  }
  return;
}


