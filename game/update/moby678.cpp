// game/update/moby678.cpp -- reconstructed from NPEA00385 EBOOT
// STATUS: NOT STARTED (raw Ghidra output)
// 3 functions, 0x40f878-0x40fabc
#include "game/update/moby678.h"
#include "game/draw.h"
#include "game/mobyfunc.h"
#include "game/mobyutil.h"
#include "game/water.h"
#include "idol/fastfunc.h"

// 0x040f878 (0x14 bytes)
void M678_0040f878(void)

{
  DAT_00856f2c = 0x10000;
  return;
}


// 0x040f890 (0x38 bytes)
void M678_0040f890(void)

{
  CALL_STUB_0017d488();
  WaterSheet_DrawAll(2,(WaterSheet *)&PTR_DAT_00857020);
  return;
}


// 0x040f8d0 (0x1ec bytes)
/* Moby 678 */

void UpdateMoby_678(MobyInstance *moby)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float *pfVar4;
  undefined *puVar5;
  int iVar6;
  int iVar7;
  undefined **ppuVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  float local_54;
  
  if (DAT_010cc210 == 0) {
    iVar7 = 0;
    DAT_010cc210 = 1;
    dVar15 = 1.0;
    ppuVar8 = &PTR_DAT_00857020;
    do {
      dVar11 = 0.0;
      pfVar4 = (float *)*ppuVar8;
      dVar12 = dVar11;
      dVar13 = dVar11;
      dVar14 = dVar11;
      for (puVar5 = ppuVar8[3]; 0 < (int)puVar5; puVar5 = puVar5 + -1) {
        dVar12 = (double)(float)(dVar12 + (double)*pfVar4);
        dVar13 = (double)(float)(dVar13 + (double)pfVar4[1]);
        dVar14 = (double)(float)(dVar14 + (double)pfVar4[2]);
        pfVar4 = pfVar4 + 4;
      }
      dVar9 = (double)FastIntToDouble(ppuVar8[3]);
      dVar9 = (double)(float)(dVar15 / dVar9);
      local_54 = 0.0;
      iVar6 = 0;
      pfVar4 = (float *)*ppuVar8;
      if (0 < (int)ppuVar8[3]) {
        do {
          fVar2 = (float)(dVar13 * dVar9) - pfVar4[1];
          fVar1 = (float)(dVar12 * dVar9) - *pfVar4;
          fVar3 = (float)(dVar14 * dVar9) - pfVar4[2];
          fVar1 = SQRT(fVar3 * fVar3 + fVar1 * fVar1 + fVar2 * fVar2);
          dVar10 = (double)fVar1;
          if (dVar11 < dVar10) {
            dVar11 = dVar10;
            local_54 = fVar1;
          }
          iVar6 = iVar6 + 1;
          pfVar4 = pfVar4 + 4;
        } while (iVar6 < (int)ppuVar8[3]);
      }
      pfVar4 = (float *)ppuVar8[2];
      iVar7 = iVar7 + 1;
      ppuVar8 = ppuVar8 + 0x18;
      *pfVar4 = (float)(dVar12 * dVar9);
      pfVar4[1] = (float)(dVar13 * dVar9);
      pfVar4[2] = (float)(dVar14 * dVar9);
      pfVar4[3] = local_54;
    } while (iVar7 < 2);
  }
  RegisterFuncForMoby(&PTR_M678_0040f890_0070dff0,moby);
  return;
}


