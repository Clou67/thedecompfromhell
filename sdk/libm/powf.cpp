// sdk/libm/powf.cpp -- reconstructed from NPEA00385 EBOOT
// STATUS: NOT STARTED (raw Ghidra output)
// 1 functions, 0x5dcbd8-0x5dd1f4
#include "sdk/libm/powf.h"
#include "sdk/lUnk.h"
#include "sdk/libc/xfdunsca.h"
#include "sdk/libm/xfdint.h"

// SDK libm.a(powf.o): powf  [exact match]
// 0x05dcbd8 (0x61c bytes)
/* WARNING: Restarted to delay deadcode elimination for space: stack */

double FUN_005dcbd8(double param_1,double param_2)

{
  int iVar1;
  float fVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  short sVar5;
  short sVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  float fStack00000030;
  short local_60 [2];
  float local_5c;
  GPiece<10> local_58;
  short sStack_4e;
  
  fStack00000030 = (float)param_1;
  sVar5 = FUN_005e6774(local_60,&stack0x00000030);
  sVar6 = FUN_005dd378(local_58,0);
  if ((sVar6 == 0) && (param_2 == (double)DAT_0071c5fc)) goto LAB_005dcd14;
  if (sVar5 < 0) {
    if (local_60[0] != 1) {
LAB_005dcdcc:
      if (sVar6 < 1) {
        if ((((uint)fStack00000030 >> 0x10 & 0x8000) != 0) && (sVar6 != 0)) {
          FUN_005dd4f8(0x20000000);
          return (double)*(float *)PTR_DAT_0071c5e4;
        }
        sVar6 = 0;
        if (fStack00000030 <= DAT_0071c5fc) {
          fStack00000030 = -fStack00000030;
          sVar6 = FUN_005dd378(local_58,0xffffffffffffffff);
          sVar5 = sVar6;
        }
        if (fStack00000030 < DAT_0071c5e8) {
          fStack00000030 = fStack00000030 + fStack00000030;
          local_60[0] = local_60[0] + -1;
        }
        local_5c = 0.0;
        if ((double)DAT_0071c5ec < param_2) {
          if (param_2 < (double)DAT_0071c5f0) {
            dVar9 = (double)(longlong)local_60[0];
            iVar1 = (int)(param_2 * dVar9);
            if (iVar1 == 0) {
              local_5c = (float)(param_2 * dVar9) * DAT_0071c5f4;
            }
            else {
              fVar2 = (float)param_2;
              sVar5 = FUN_005dd378(&local_5c,0x10);
              local_5c = (float)(dVar9 * (double)(float)(param_2 - (double)fVar2) +
                                (double)(float)(dVar9 * (double)fVar2 - (double)(longlong)iVar1)) *
                         DAT_0071c5f4;
            }
            sStack_4e = (short)(int)param_2;
            if ((sStack_4e < -0x7f) || (0x7f < sStack_4e)) {
              sStack_4e = 0;
            }
            goto LAB_005dce58;
          }
          if (-1 < local_60[0]) {
            if (local_60[0] == 0) goto LAB_005dd08c;
            goto LAB_005dd064;
          }
        }
        else {
          if (local_60[0] < 0) {
LAB_005dd064:
            sStack_4e = 0;
            goto LAB_005dce58;
          }
          if (local_60[0] == 0) {
LAB_005dd08c:
            sStack_4e = 0;
            goto LAB_005dce58;
          }
        }
        sStack_4e = 0;
LAB_005dce58:
        dVar9 = (double)DAT_0071c5f8;
        dVar7 = (double)fStack00000030;
        if (dVar7 != dVar9) {
          fVar2 = (float)(param_2 - (double)(longlong)(int)sStack_4e);
          dVar8 = dVar9;
          if (fVar2 != DAT_0071c5fc) {
            dVar7 = (double)FUN_005dd718(dVar7,sVar5,0);
            local_5c = (float)(dVar7 * (double)fVar2 + (double)local_5c);
            dVar7 = (double)fStack00000030;
            dVar8 = dVar9;
          }
          uVar4 = (ulonglong)((int)sStack_4e >> 0x1f);
          uVar4 = (uVar4 ^ (longlong)sStack_4e) - uVar4;
          sVar5 = (short)uVar4;
          dVar9 = dVar8;
          while( true ) {
            uVar3 = uVar4 & 1;
            uVar4 = (ulonglong)((longlong)sVar5 << 0x20) >> 0x21;
            sVar5 = (short)uVar4;
            if (uVar3 != 0) {
              dVar9 = (double)(float)(dVar9 * dVar7);
            }
            if (sVar5 == 0) break;
            dVar7 = (double)(float)(dVar7 * dVar7);
          }
          if (param_2 < (double)DAT_0071c5fc) {
            dVar9 = (double)(float)(dVar8 / dVar9);
          }
        }
        sVar5 = FUN_005dd5a8(dVar9,&local_5c);
        if (sVar5 == 0) {
          FUN_005dd4f8(0x8000000);
        }
        else if (sVar5 == 1) {
          FUN_005dd4f8(0x10000000);
        }
        if (sVar6 != 0) {
          return -(double)local_5c;
        }
        return (double)local_5c;
      }
      goto LAB_005dcc5c;
    }
    if (fStack00000030 == DAT_0071c5d4) {
LAB_005dcd14:
      return (double)DAT_0071c5f8;
    }
    if (sVar6 != 1) goto LAB_005dcdcc;
    local_60[0] = 1;
    if (fStack00000030 == DAT_0071c5d8) goto LAB_005dcd14;
LAB_005dcf08:
    if (((uint)(float)param_2 >> 0x10 & 0x8000) == 0) {
      dVar9 = (double)DAT_0071c5fc;
      if (0 < local_60[0]) {
LAB_005dcd8c:
        return (double)*(float *)PTR_DAT_0071c5dc;
      }
    }
    else {
      dVar9 = (double)DAT_0071c5fc;
      if (local_60[0] < 1) goto LAB_005dcd8c;
    }
  }
  else {
    if (sVar5 == 2) {
      return (double)fStack00000030;
    }
LAB_005dcc5c:
    if (sVar6 == 2) {
      return param_2;
    }
    if (sVar5 == 1) {
      if (-1 < (int)fStack00000030) {
        if (((uint)(float)param_2 >> 0x10 & 0x8000) != 0) {
          return (double)DAT_0071c5fc;
        }
        goto LAB_005dcd8c;
      }
      if (((uint)(float)param_2 >> 0x10 & 0x8000) == 0) {
        if ((sVar6 == 0) && (sVar5 = FUN_005dd378(local_58,0xffffffffffffffff), sVar5 < 0))
        goto LAB_005dcfb0;
        goto LAB_005dcd8c;
      }
      if ((sVar6 == 0) && (sVar5 = FUN_005dd378(local_58,0xffffffffffffffff), sVar5 < 0))
      goto LAB_005dcf68;
    }
    else {
      if (sVar6 == 1) goto LAB_005dcf08;
      if (((uint)(float)param_2 >> 0x10 & 0x8000) != 0) {
        FUN_005dd4f8(0x4000000);
        if (((sVar6 == 0) && (sVar5 = FUN_005dd378(local_58,0xffffffffffffffff), sVar5 < 0)) &&
           ((int)fStack00000030 < 0)) {
LAB_005dcfb0:
          return -(double)*(float *)PTR_DAT_0071c5dc;
        }
        goto LAB_005dcd8c;
      }
      if ((sVar6 == 0) && (sVar5 = FUN_005dd378(local_58,0xffffffffffffffff), sVar5 < 0)) {
        if (-1 < (int)fStack00000030) {
          return (double)DAT_0071c5fc;
        }
LAB_005dcf68:
        return -(double)*(float *)PTR_DAT_0071c5e0;
      }
    }
    dVar9 = (double)DAT_0071c5fc;
  }
  return dVar9;
}


