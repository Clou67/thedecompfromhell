// sdk/lUnk.cpp -- reconstructed from NPEA00385 EBOOT
// STATUS: NOT STARTED (raw Ghidra output)
// 1000 functions, 0x53c4e0-0x57f9d0
#include <stdio.h>
#include <string.h>
#include "sdk/lUnk.h"
#include "game/debug.h"
#include "game/hero.h"
#include "sdk/CMediusManager.h"
#include "sdk/libc/malloc.h"
#include "sdk/libc/strtol.h"
#include "sdk/mUnk3.h"
#include "sdk/sce.h"
#include "sdk/sys.h"

// 0x053c4e0 (0xec bytes)
ulonglong FUN_0053c4e0(undefined4 param_1,undefined4 param_2)

{
  undefined *puVar1;
  undefined4 uVar4;
  ulonglong uVar2;
  ulonglong uVar3;
  
  puVar1 = PTR_PTR_0071b0e4;
  uVar2 = 2;
  if (*(int *)PTR_DAT_0071b0e0 == 1) {
    uVar2 = 2000;
    if (*(int *)(*(int *)PTR_PTR_0071b0e4 + 0x18) == 1) {
      uVar4 = FUN_00552e60(*(int *)PTR_PTR_0071b0e4 + 0x1c,0);
      uVar2 = FUN_00540808(uVar4);
      if ((int)uVar2 == 0) {
        uVar2 = FUN_005423dc(param_1,param_2);
        uVar4 = FUN_00552c24(*(int *)puVar1 + 0x1c,0);
        uVar3 = FUN_00540808(uVar4);
        if (uVar3 != 0) {
          uVar2 = uVar3;
        }
      }
    }
  }
  return uVar2 & 0xffffffff;
}


// 0x053c5cc (0x40 bytes)
undefined8 FUN_0053c5cc(undefined4 *param_1)

{
  undefined8 uVar1;
  
  uVar1 = 3;
  if (param_1 != (undefined4 *)0x0) {
    param_1[1] = 0x12c00;
    uVar1 = 0;
    param_1[5] = 0;
    param_1[3] = 0x10000;
    *param_1 = 0;
    param_1[2] = 0;
    param_1[4] = 0;
  }
  return uVar1;
}


// 0x053c60c (0x60 bytes)
undefined8 FUN_0053c60c(int param_1)

{
  undefined8 uVar1;
  
  uVar1 = 3;
  if (param_1 != 0) {
    memset(param_1,0,0x4c);
    uVar1 = 0;
    *(undefined4 *)(param_1 + 0x34) = 0x100;
    *(undefined4 *)(param_1 + 0x44) = 0;
    *(undefined4 *)(param_1 + 0xc) = 0x100;
  }
  return uVar1;
}


// 0x053c66c (0x44 bytes)
undefined8 FUN_0053c66c(int param_1)

{
  undefined8 uVar1;
  
  uVar1 = 3;
  if (param_1 != 0) {
    memset(param_1,0,0x114);
    uVar1 = 0;
  }
  return uVar1;
}


// 0x053c6b0 (0x2c bytes)
undefined8 FUN_0053c6b0(undefined4 *param_1)

{
  undefined8 uVar1;
  
  uVar1 = 3;
  if (param_1 != (undefined4 *)0x0) {
    uVar1 = 0;
    param_1[3] = 0;
    *param_1 = 0;
    param_1[1] = 0;
    param_1[2] = 0;
  }
  return uVar1;
}


// 0x053c6dc (0xa0 bytes)
undefined8 FUN_0053c6dc(undefined4 *param_1)

{
  undefined8 uVar1;
  
  uVar1 = 3;
  if (param_1 != (undefined4 *)0x0) {
    memset(param_1,0,0x74);
    param_1[5] = 0x9c4;
    uVar1 = 0;
    *param_1 = 1;
    param_1[8] = 0;
    param_1[7] = 0x2000;
    param_1[0xd] = 0x10;
    param_1[0xe] = 8000;
    param_1[2] = 1;
    param_1[3] = 1;
    param_1[4] = 1;
    param_1[6] = 0x2000;
    param_1[9] = 1;
    param_1[10] = 0x10;
    param_1[0xb] = 8000;
    param_1[0xc] = 1;
  }
  return uVar1;
}


// 0x053c77c (0x60 bytes)
undefined8 FUN_0053c77c(undefined4 *param_1)

{
  undefined8 uVar1;
  
  uVar1 = 3;
  if (param_1 != (undefined4 *)0x0) {
    memset(param_1,0,0x54);
    param_1[10] = 2;
    uVar1 = 0;
    *param_1 = 1;
  }
  return uVar1;
}


// 0x053c7dc (0x28 bytes)
undefined8 FUN_0053c7dc(undefined4 *param_1)

{
  undefined8 uVar1;
  
  uVar1 = 3;
  if (param_1 != (undefined4 *)0x0) {
    uVar1 = 0;
    param_1[2] = 0;
    *param_1 = 0;
    param_1[1] = 0;
  }
  return uVar1;
}


// 0x053c804 (0xc4 bytes)
ulonglong FUN_0053c804(undefined4 param_1,undefined4 param_2)

{
  undefined4 uVar3;
  ulonglong uVar1;
  ulonglong uVar2;
  ulonglong uVar4;
  
  uVar3 = FUN_00545114();
  uVar4 = 0xf;
  uVar1 = FUN_00540808(uVar3);
  if ((int)uVar1 == 0) {
    if (*(int *)PTR_DAT_0071b0e8 != 0) {
      uVar4 = (*(code *)**(undefined4 **)(*(int *)PTR_DAT_0071b0e8 + 0x28))(param_1,param_2);
    }
    uVar3 = FUN_005450d8();
    uVar2 = FUN_00540808(uVar3);
    uVar1 = uVar4;
    if (uVar2 != 0) {
      uVar1 = uVar2;
    }
  }
  return uVar1 & 0xffffffff;
}


// 0x053c8c8 (0xbc bytes)
ulonglong FUN_0053c8c8(undefined4 param_1)

{
  undefined4 uVar3;
  ulonglong uVar1;
  ulonglong uVar2;
  
  uVar3 = FUN_00545114();
  uVar1 = FUN_00540808(uVar3);
  if ((int)uVar1 == 0) {
    uVar1 = (*(code *)**(undefined4 **)(*(int *)PTR_DAT_0071b0ec + 0x20))(param_1);
    uVar3 = FUN_005450d8();
    uVar2 = FUN_00540808(uVar3);
    if (uVar2 != 0) {
      return uVar2 & 0xffffffff;
    }
  }
  return uVar1 & 0xffffffff;
}


// 0x053c984 (0xb8 bytes)
int FUN_0053c984(undefined4 *param_1)

{
  undefined4 uVar1;
  int iVar2;
  
  iVar2 = 3;
  if (param_1 != (undefined4 *)0x0) {
    uVar1 = FUN_00545114();
    iVar2 = FUN_00540808(uVar1);
    if (iVar2 == 0) {
      param_1[0xb] = 0;
      *param_1 = 0;
      param_1[1] = 0;
      param_1[2] = 0;
      param_1[3] = 0;
      param_1[4] = 0;
      param_1[5] = 0;
      param_1[6] = 0;
      param_1[7] = 0;
      param_1[8] = 0;
      param_1[9] = 0;
      param_1[10] = 0;
      uVar1 = FUN_005450d8();
      iVar2 = FUN_00540808(uVar1);
      return iVar2;
    }
  }
  return iVar2;
}


// 0x053ca3c (0x98 bytes)
int FUN_0053ca3c(undefined4 *param_1)

{
  undefined4 uVar1;
  int iVar2;
  
  iVar2 = 3;
  if (param_1 != (undefined4 *)0x0) {
    uVar1 = FUN_00545114();
    iVar2 = FUN_00540808(uVar1);
    if (iVar2 == 0) {
      param_1[3] = 0;
      *param_1 = 0;
      param_1[1] = 0;
      param_1[2] = 0;
      uVar1 = FUN_005450d8();
      iVar2 = FUN_00540808(uVar1);
      return iVar2;
    }
  }
  return iVar2;
}


// 0x053cad4 (0x9c bytes)
int FUN_0053cad4(undefined4 *param_1)

{
  undefined4 uVar1;
  int iVar2;
  
  iVar2 = 3;
  if (param_1 != (undefined4 *)0x0) {
    uVar1 = FUN_00545114();
    iVar2 = FUN_00540808(uVar1);
    if (iVar2 == 0) {
      param_1[3] = 0;
      *param_1 = 1;
      param_1[1] = 0;
      param_1[2] = 0;
      uVar1 = FUN_005450d8();
      iVar2 = FUN_00540808(uVar1);
      return iVar2;
    }
  }
  return iVar2;
}


// 0x053cb70 (0xd0 bytes)
ulonglong FUN_0053cb70(undefined4 param_1,undefined4 param_2)

{
  undefined4 uVar3;
  ulonglong uVar1;
  ulonglong uVar2;
  
  uVar3 = FUN_00545114();
  uVar1 = FUN_00540808(uVar3);
  if ((int)uVar1 == 0) {
    uVar1 = (*(code *)**(undefined4 **)(*(int *)PTR_DAT_0071b0ec + 0x1c))(param_1,param_2);
    uVar3 = FUN_005450d8();
    uVar2 = FUN_00540808(uVar3);
    if (uVar2 != 0) {
      return uVar2 & 0xffffffff;
    }
  }
  return uVar1 & 0xffffffff;
}


// 0x053cc40 (0xd0 bytes)
ulonglong FUN_0053cc40(undefined4 param_1,undefined4 param_2)

{
  undefined4 uVar3;
  ulonglong uVar1;
  ulonglong uVar2;
  
  uVar3 = FUN_00545114();
  uVar1 = FUN_00540808(uVar3);
  if ((int)uVar1 == 0) {
    uVar1 = (*(code *)**(undefined4 **)(*(int *)PTR_DAT_0071b0ec + 0x18))(param_1,param_2);
    uVar3 = FUN_005450d8();
    uVar2 = FUN_00540808(uVar3);
    if (uVar2 != 0) {
      return uVar2 & 0xffffffff;
    }
  }
  return uVar1 & 0xffffffff;
}


// 0x053cd10 (0xe4 bytes)
ulonglong FUN_0053cd10(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 uVar3;
  ulonglong uVar1;
  ulonglong uVar2;
  
  uVar3 = FUN_00545114();
  uVar1 = FUN_00540808(uVar3);
  if ((int)uVar1 == 0) {
    uVar1 = (*(code *)**(undefined4 **)(*(int *)PTR_DAT_0071b0ec + 0x14))(param_1,param_2,param_3);
    uVar3 = FUN_005450d8();
    uVar2 = FUN_00540808(uVar3);
    if (uVar2 != 0) {
      return uVar2 & 0xffffffff;
    }
  }
  return uVar1 & 0xffffffff;
}


// 0x053cdf4 (0xe4 bytes)
ulonglong FUN_0053cdf4(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 uVar3;
  ulonglong uVar1;
  ulonglong uVar2;
  
  uVar3 = FUN_00545114();
  uVar1 = FUN_00540808(uVar3);
  if ((int)uVar1 == 0) {
    uVar1 = (*(code *)**(undefined4 **)(*(int *)PTR_DAT_0071b0ec + 0xc))(param_1,param_2,param_3);
    uVar3 = FUN_005450d8();
    uVar2 = FUN_00540808(uVar3);
    if (uVar2 != 0) {
      return uVar2 & 0xffffffff;
    }
  }
  return uVar1 & 0xffffffff;
}


// 0x053ced8 (0xbc bytes)
ulonglong FUN_0053ced8(undefined4 param_1)

{
  undefined4 uVar3;
  ulonglong uVar1;
  ulonglong uVar2;
  
  uVar3 = FUN_00545114();
  uVar1 = FUN_00540808(uVar3);
  if ((int)uVar1 == 0) {
    uVar1 = (*(code *)**(undefined4 **)(*(int *)PTR_DAT_0071b0ec + 0x10))(param_1);
    uVar3 = FUN_005450d8();
    uVar2 = FUN_00540808(uVar3);
    if (uVar2 != 0) {
      return uVar2 & 0xffffffff;
    }
  }
  return uVar1 & 0xffffffff;
}


// 0x053cf94 (0xbc bytes)
ulonglong FUN_0053cf94(undefined4 param_1)

{
  undefined4 uVar3;
  ulonglong uVar1;
  ulonglong uVar2;
  
  uVar3 = FUN_00545114();
  uVar1 = FUN_00540808(uVar3);
  if ((int)uVar1 == 0) {
    uVar1 = (*(code *)**(undefined4 **)(*(int *)PTR_DAT_0071b0ec + 0x28))(param_1);
    uVar3 = FUN_005450d8();
    uVar2 = FUN_00540808(uVar3);
    if (uVar2 != 0) {
      return uVar2 & 0xffffffff;
    }
  }
  return uVar1 & 0xffffffff;
}


// 0x053d050 (0xbc bytes)
ulonglong FUN_0053d050(undefined4 param_1)

{
  undefined4 uVar3;
  ulonglong uVar1;
  ulonglong uVar2;
  
  uVar3 = FUN_00545114();
  uVar1 = FUN_00540808(uVar3);
  if ((int)uVar1 == 0) {
    uVar1 = (*(code *)**(undefined4 **)(*(int *)PTR_DAT_0071b0ec + 0x24))(param_1);
    uVar3 = FUN_005450d8();
    uVar2 = FUN_00540808(uVar3);
    if (uVar2 != 0) {
      return uVar2 & 0xffffffff;
    }
  }
  return uVar1 & 0xffffffff;
}


// 0x053d10c (0xe4 bytes)
ulonglong FUN_0053d10c(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 uVar3;
  ulonglong uVar1;
  ulonglong uVar2;
  
  uVar3 = FUN_00545114();
  uVar1 = FUN_00540808(uVar3);
  if ((int)uVar1 == 0) {
    uVar1 = (**(code **)**(undefined4 **)PTR_DAT_0071b0ec)(param_1,param_2,param_3);
    uVar3 = FUN_005450d8();
    uVar2 = FUN_00540808(uVar3);
    if (uVar2 != 0) {
      return uVar2 & 0xffffffff;
    }
  }
  return uVar1 & 0xffffffff;
}


// 0x053d1f0 (0xd0 bytes)
ulonglong FUN_0053d1f0(undefined4 param_1,undefined4 param_2)

{
  undefined4 uVar3;
  ulonglong uVar1;
  ulonglong uVar2;
  
  uVar3 = FUN_00545114();
  uVar1 = FUN_00540808(uVar3);
  if ((int)uVar1 == 0) {
    uVar1 = (*(code *)**(undefined4 **)(*(int *)PTR_DAT_0071b0ec + 8))(param_1,param_2);
    uVar3 = FUN_005450d8();
    uVar2 = FUN_00540808(uVar3);
    if (uVar2 != 0) {
      return uVar2 & 0xffffffff;
    }
  }
  return uVar1 & 0xffffffff;
}


// 0x053d2c0 (0xd0 bytes)
ulonglong FUN_0053d2c0(undefined4 param_1,undefined4 param_2)

{
  undefined4 uVar3;
  ulonglong uVar1;
  ulonglong uVar2;
  
  uVar3 = FUN_00545114();
  uVar1 = FUN_00540808(uVar3);
  if ((int)uVar1 == 0) {
    uVar1 = (*(code *)**(undefined4 **)(*(int *)PTR_DAT_0071b0ec + 4))(param_1,param_2);
    uVar3 = FUN_005450d8();
    uVar2 = FUN_00540808(uVar3);
    if (uVar2 != 0) {
      return uVar2 & 0xffffffff;
    }
  }
  return uVar1 & 0xffffffff;
}


// 0x053d390 (0xb4 bytes)
ulonglong FUN_0053d390(undefined4 param_1)

{
  undefined4 uVar3;
  ulonglong uVar1;
  ulonglong uVar2;
  ulonglong uVar4;
  
  uVar3 = FUN_00545114();
  uVar4 = 0xf;
  uVar1 = FUN_00540808(uVar3);
  if ((int)uVar1 == 0) {
    if (*(int *)PTR_DAT_0071b0e8 != 0) {
      uVar4 = (*(code *)**(undefined4 **)(*(int *)PTR_DAT_0071b0e8 + 0x18))(param_1);
    }
    uVar3 = FUN_005450d8();
    uVar2 = FUN_00540808(uVar3);
    uVar1 = uVar4;
    if (uVar2 != 0) {
      uVar1 = uVar2;
    }
  }
  return uVar1 & 0xffffffff;
}


// 0x053d444 (0xc4 bytes)
ulonglong FUN_0053d444(undefined4 param_1,undefined4 param_2)

{
  undefined4 uVar3;
  ulonglong uVar1;
  ulonglong uVar2;
  ulonglong uVar4;
  
  uVar3 = FUN_00545114();
  uVar4 = 0xf;
  uVar1 = FUN_00540808(uVar3);
  if ((int)uVar1 == 0) {
    if (*(undefined4 **)PTR_DAT_0071b0e8 != (undefined4 *)0x0) {
      uVar4 = (**(code **)**(undefined4 **)PTR_DAT_0071b0e8)(param_1,param_2);
    }
    uVar3 = FUN_005450d8();
    uVar2 = FUN_00540808(uVar3);
    uVar1 = uVar4;
    if (uVar2 != 0) {
      uVar1 = uVar2;
    }
  }
  return uVar1 & 0xffffffff;
}


// 0x053d508 (0x100 bytes)
int FUN_0053d508(undefined4 *param_1,int param_2,undefined4 param_3)

{
  undefined4 uVar1;
  int iVar2;
  
  if (param_2 == 0) {
    return 3;
  }
  uVar1 = FUN_00545114();
  iVar2 = FUN_00540808(uVar1);
  if (iVar2 == 0) {
    if (param_1 == (undefined4 *)0x0) {
      return 3;
    }
    if (*(int *)PTR_DAT_0071b0e8 == 0) {
      *param_1 = 0;
    }
    else {
      uVar1 = (*(code *)**(undefined4 **)(*(int *)PTR_DAT_0071b0e8 + 0x44))(param_2,param_3);
      *param_1 = uVar1;
    }
    uVar1 = FUN_005450d8();
    iVar2 = FUN_00540808(uVar1);
  }
  return iVar2;
}


// 0x053d608 (0xdc bytes)
ulonglong FUN_0053d608(undefined4 *param_1,undefined4 param_2)

{
  undefined4 uVar3;
  ulonglong uVar1;
  ulonglong uVar2;
  
  uVar3 = FUN_00545114();
  uVar1 = FUN_00540808(uVar3);
  if ((int)uVar1 == 0) {
    if (param_1 == (undefined4 *)0x0) {
      uVar1 = 3;
    }
    else {
      uVar1 = 0;
      if (*(int *)PTR_DAT_0071b0e8 == 0) {
        uVar1 = 0xf;
        *param_1 = 0;
      }
      else {
        uVar3 = (*(code *)**(undefined4 **)(*(int *)PTR_DAT_0071b0e8 + 0x30))(param_2);
        *param_1 = uVar3;
      }
      uVar3 = FUN_005450d8();
      uVar2 = FUN_00540808(uVar3);
      if (uVar2 != 0) {
        uVar1 = uVar2;
      }
    }
  }
  return uVar1 & 0xffffffff;
}


// 0x053d6e4 (0xc4 bytes)
ulonglong FUN_0053d6e4(undefined4 param_1,undefined4 param_2)

{
  undefined4 uVar3;
  ulonglong uVar1;
  ulonglong uVar2;
  ulonglong uVar4;
  
  uVar3 = FUN_00545114();
  uVar4 = 0xf;
  uVar1 = FUN_00540808(uVar3);
  if ((int)uVar1 == 0) {
    if (*(int *)PTR_DAT_0071b0e8 != 0) {
      uVar4 = (*(code *)**(undefined4 **)(*(int *)PTR_DAT_0071b0e8 + 0xe4))(param_1,param_2);
    }
    uVar3 = FUN_005450d8();
    uVar2 = FUN_00540808(uVar3);
    uVar1 = uVar4;
    if (uVar2 != 0) {
      uVar1 = uVar2;
    }
  }
  return uVar1 & 0xffffffff;
}


// 0x053d7a8 (0xb4 bytes)
ulonglong FUN_0053d7a8(undefined4 param_1)

{
  undefined4 uVar3;
  ulonglong uVar1;
  ulonglong uVar2;
  ulonglong uVar4;
  
  uVar3 = FUN_00545114();
  uVar4 = 0xf;
  uVar1 = FUN_00540808(uVar3);
  if ((int)uVar1 == 0) {
    if (*(int *)PTR_DAT_0071b0e8 != 0) {
      uVar4 = (*(code *)**(undefined4 **)(*(int *)PTR_DAT_0071b0e8 + 0x10))(param_1);
    }
    uVar3 = FUN_005450d8();
    uVar2 = FUN_00540808(uVar3);
    uVar1 = uVar4;
    if (uVar2 != 0) {
      uVar1 = uVar2;
    }
  }
  return uVar1 & 0xffffffff;
}


// 0x053d85c (0xd4 bytes)
ulonglong FUN_0053d85c(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 uVar3;
  ulonglong uVar1;
  ulonglong uVar2;
  ulonglong uVar4;
  
  uVar3 = FUN_00545114();
  uVar4 = 0xf;
  uVar1 = FUN_00540808(uVar3);
  if ((int)uVar1 == 0) {
    if (*(int *)PTR_DAT_0071b0e8 != 0) {
      uVar4 = (*(code *)**(undefined4 **)(*(int *)PTR_DAT_0071b0e8 + 4))(param_1,param_2,param_3);
    }
    uVar3 = FUN_005450d8();
    uVar2 = FUN_00540808(uVar3);
    uVar1 = uVar4;
    if (uVar2 != 0) {
      uVar1 = uVar2;
    }
  }
  return uVar1 & 0xffffffff;
}


// 0x053d930 (0x12c bytes)
ulonglong FUN_0053d930(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                      undefined4 param_5,undefined4 param_6,undefined4 param_7,undefined4 param_8)

{
  undefined4 uVar3;
  ulonglong uVar1;
  ulonglong uVar2;
  ulonglong uVar4;
  
  uVar3 = FUN_00545114();
  uVar4 = 0xf;
  uVar1 = FUN_00540808(uVar3);
  if ((int)uVar1 == 0) {
    if (*(int *)PTR_DAT_0071b0e8 != 0) {
      uVar4 = (*(code *)**(undefined4 **)(*(int *)PTR_DAT_0071b0e8 + 0x14))
                        (param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8);
    }
    uVar3 = FUN_005450d8();
    uVar2 = FUN_00540808(uVar3);
    uVar1 = uVar4;
    if (uVar2 != 0) {
      uVar1 = uVar2;
    }
  }
  return uVar1 & 0xffffffff;
}


// 0x053da5c (0xe4 bytes)
ulonglong FUN_0053da5c(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 uVar3;
  ulonglong uVar1;
  ulonglong uVar2;
  ulonglong uVar4;
  
  uVar3 = FUN_00545114();
  uVar4 = 0xf;
  uVar1 = FUN_00540808(uVar3);
  if ((int)uVar1 == 0) {
    if (*(int *)PTR_DAT_0071b0e8 != 0) {
      uVar4 = (*(code *)**(undefined4 **)(*(int *)PTR_DAT_0071b0e8 + 0x1c))
                        (param_1,param_2,param_3,param_4);
    }
    uVar3 = FUN_005450d8();
    uVar2 = FUN_00540808(uVar3);
    uVar1 = uVar4;
    if (uVar2 != 0) {
      uVar1 = uVar2;
    }
  }
  return uVar1 & 0xffffffff;
}


// 0x053db40 (0x248 bytes)
ulonglong FUN_0053db40(int param_1,undefined4 *param_2,undefined1 *param_3,uint param_4,
                      undefined2 *param_5,undefined2 *param_6)

{
  undefined4 uVar4;
  ulonglong uVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  byte in_cr0;
  byte in_cr1;
  byte in_cr2;
  byte bVar5;
  byte in_cr3;
  byte bVar6;
  byte unaff_cr4;
  byte in_cr5;
  byte in_cr6;
  byte in_cr7;
  uint uStack00000008;
  undefined2 local_70;
  undefined2 local_6e;
  undefined4 local_6c;
  undefined1 uStack_68;
  undefined1 uStack_67;
  undefined1 uStack_66;
  undefined1 uStack_65;
  undefined1 uStack_64;
  undefined1 uStack_63;
  undefined1 uStack_62;
  undefined1 uStack_61;
  undefined1 uStack_60;
  undefined1 uStack_5f;
  undefined1 uStack_5e;
  undefined1 uStack_5d;
  undefined1 uStack_5c;
  undefined1 uStack_5b;
  undefined1 uStack_5a;
  undefined1 uStack_59;
  undefined1 uStack_58;
  undefined1 uStack_57;
  
  uStack00000008 =
       (uint)(in_cr0 & 0xf) << 0x1c | (uint)(in_cr1 & 0xf) << 0x18 | (uint)(in_cr2 & 0xf) << 0x14 |
       (uint)(in_cr3 & 0xf) << 0x10 | (uint)(unaff_cr4 & 0xf) << 0xc | (uint)(in_cr5 & 0xf) << 8 |
       (uint)(in_cr6 & 0xf) << 4 | (uint)(in_cr7 & 0xf);
  if (param_1 != 0) {
    if (param_2 != (undefined4 *)0x0) {
      *param_2 = 0;
    }
    bVar5 = (param_5 == (undefined2 *)0x0) << 1;
    if (param_5 != (undefined2 *)0x0) {
      *param_5 = 0;
    }
    bVar6 = (param_6 == (undefined2 *)0x0) << 1;
    if (param_6 != (undefined2 *)0x0) {
      *param_6 = 0;
    }
    if ((param_3 == (undefined1 *)0x0) || (*param_3 = 0, 0x11 < param_4)) {
      uVar4 = FUN_00545114();
      uVar1 = FUN_00540808(uVar4);
      uVar3 = uVar1;
      if ((int)uVar1 == 0) {
        uVar2 = FUN_0053fc0c(param_1,&local_6c,&uStack_68,0x12,&local_70,&local_6e);
        uVar4 = FUN_005450d8();
        uVar3 = FUN_00540808(uVar4);
        if ((uVar3 == 0) && (uVar3 = uVar2, (int)uVar2 == 0)) {
          if (param_2 != (undefined4 *)0x0) {
            *param_2 = local_6c;
          }
          if (!(bool)((bVar5 & 2) >> 1)) {
            *param_5 = local_70;
          }
          if (!(bool)((bVar6 & 2) >> 1)) {
            *param_6 = local_6e;
          }
          uVar3 = uVar1;
          if (param_3 != (undefined1 *)0x0) {
            *param_3 = uStack_68;
            param_3[1] = uStack_67;
            param_3[2] = uStack_66;
            param_3[3] = uStack_65;
            param_3[4] = uStack_64;
            param_3[5] = uStack_63;
            param_3[6] = uStack_62;
            param_3[7] = uStack_61;
            param_3[8] = uStack_60;
            param_3[9] = uStack_5f;
            param_3[10] = uStack_5e;
            param_3[0xb] = uStack_5d;
            param_3[0xc] = uStack_5c;
            param_3[0xd] = uStack_5b;
            param_3[0xe] = uStack_5a;
            param_3[0xf] = uStack_59;
            param_3[0x10] = uStack_58;
            param_3[0x11] = uStack_57;
          }
        }
      }
      goto LAB_0053dc10;
    }
  }
  uVar3 = 3;
LAB_0053dc10:
  return uVar3 & 0xffffffff;
}


// 0x053dd88 (0x94 bytes)
int FUN_0053dd88(void *param_1,size_t param_2)

{
  undefined4 uVar1;
  int iVar2;
  void *pvVar3;
  
  uVar1 = FUN_00545114();
  iVar2 = FUN_00540808(uVar1);
  if (iVar2 == 0) {
    iVar2 = 3;
    if ((int)param_2 < 0x21) {
      pvVar3 = memcpy((void *)(*(int *)PTR_PTR_0071b0e4 + 0x84),param_1,param_2);
      uVar1 = FUN_005450d8(pvVar3);
      iVar2 = FUN_00540808(uVar1);
    }
  }
  return iVar2;
}


// 0x053de1c (0xc0 bytes)
ulonglong FUN_0053de1c(int param_1,undefined4 param_2)

{
  undefined4 uVar3;
  ulonglong uVar1;
  ulonglong uVar2;
  
  uVar3 = FUN_00545114();
  uVar1 = FUN_00540808(uVar3);
  if ((int)uVar1 == 0) {
    *(undefined4 *)(param_1 + 0x44) = 0;
    uVar1 = FUN_00546bdc(param_1,param_2,2);
    uVar3 = FUN_005450d8();
    uVar2 = FUN_00540808(uVar3);
    if (uVar2 != 0) {
      return uVar2 & 0xffffffff;
    }
  }
  return uVar1 & 0xffffffff;
}


// 0x053dedc (0x12c bytes)
ulonglong FUN_0053dedc(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                      undefined4 param_5,undefined4 param_6)

{
  undefined *puVar1;
  undefined4 uVar4;
  ulonglong uVar2;
  ulonglong uVar3;
  
  puVar1 = PTR_PTR_0071b0e4;
  uVar2 = 2;
  if (*(int *)PTR_DAT_0071b0e0 == 1) {
    uVar2 = 2000;
    if (*(int *)(*(int *)PTR_PTR_0071b0e4 + 0x18) == 1) {
      uVar4 = FUN_00552e60(*(int *)PTR_PTR_0071b0e4 + 0x1c,0);
      uVar2 = FUN_00540808(uVar4);
      if ((int)uVar2 == 0) {
        uVar2 = FUN_0054228c(param_1,param_2,param_3,param_4,param_5,param_6);
        uVar4 = FUN_00552c24(*(int *)puVar1 + 0x1c,0);
        uVar3 = FUN_00540808(uVar4);
        if (uVar3 != 0) {
          uVar2 = uVar3;
        }
      }
    }
  }
  return uVar2 & 0xffffffff;
}


// 0x053e008 (0xdc bytes)
ulonglong FUN_0053e008(undefined4 param_1)

{
  undefined *puVar1;
  undefined4 uVar4;
  ulonglong uVar2;
  ulonglong uVar3;
  
  puVar1 = PTR_PTR_0071b0e4;
  uVar2 = 2;
  if (*(int *)PTR_DAT_0071b0e0 == 1) {
    uVar2 = 2000;
    if (*(int *)(*(int *)PTR_PTR_0071b0e4 + 0x18) == 1) {
      uVar4 = FUN_00552e60(*(int *)PTR_PTR_0071b0e4 + 0x1c,0);
      uVar2 = FUN_00540808(uVar4);
      if ((int)uVar2 == 0) {
        uVar2 = FUN_0054487c(param_1);
        uVar4 = FUN_00552c24(*(int *)puVar1 + 0x1c,0);
        uVar3 = FUN_00540808(uVar4);
        if (uVar3 != 0) {
          uVar2 = uVar3;
        }
      }
    }
  }
  return uVar2 & 0xffffffff;
}


// 0x053e0e4 (0xa0 bytes)
ulonglong FUN_0053e0e4(undefined4 param_1)

{
  undefined4 uVar3;
  ulonglong uVar1;
  ulonglong uVar2;
  
  uVar3 = FUN_00545114();
  uVar1 = FUN_00540808(uVar3);
  if ((int)uVar1 == 0) {
    uVar1 = FUN_005478bc(param_1);
    uVar3 = FUN_005450d8();
    uVar2 = FUN_00540808(uVar3);
    if (uVar2 != 0) {
      return uVar2 & 0xffffffff;
    }
  }
  return uVar1 & 0xffffffff;
}


// 0x053e184 (0x90 bytes)
ulonglong FUN_0053e184(void)

{
  undefined4 uVar3;
  ulonglong uVar1;
  ulonglong uVar2;
  
  uVar3 = FUN_00545114();
  uVar1 = FUN_00540808(uVar3);
  if ((int)uVar1 == 0) {
    uVar1 = FUN_0054589c();
    uVar3 = FUN_005450d8();
    uVar2 = FUN_00540808(uVar3);
    if (uVar2 != 0) {
      return uVar2 & 0xffffffff;
    }
  }
  return uVar1 & 0xffffffff;
}


// 0x053e214 (0x90 bytes)
ulonglong FUN_0053e214(void)

{
  undefined4 uVar3;
  ulonglong uVar1;
  ulonglong uVar2;
  
  uVar3 = FUN_00545114();
  uVar1 = FUN_00540808(uVar3);
  if ((int)uVar1 == 0) {
    uVar1 = FUN_005474b4();
    uVar3 = FUN_005450d8();
    uVar2 = FUN_00540808(uVar3);
    if (uVar2 != 0) {
      return uVar2 & 0xffffffff;
    }
  }
  return uVar1 & 0xffffffff;
}


// 0x053e2a4 (0xb4 bytes)
ulonglong FUN_0053e2a4(undefined4 param_1,undefined4 param_2)

{
  undefined4 uVar3;
  ulonglong uVar1;
  ulonglong uVar2;
  
  uVar3 = FUN_00545114();
  uVar1 = FUN_00540808(uVar3);
  if ((int)uVar1 == 0) {
    uVar1 = FUN_005444ac(param_1,param_2);
    uVar3 = FUN_005450d8();
    uVar2 = FUN_00540808(uVar3);
    if (uVar2 != 0) {
      return uVar2 & 0xffffffff;
    }
  }
  return uVar1 & 0xffffffff;
}


// 0x053e358 (0xb4 bytes)
ulonglong FUN_0053e358(undefined4 param_1,undefined4 param_2)

{
  undefined4 uVar3;
  ulonglong uVar1;
  ulonglong uVar2;
  
  uVar3 = FUN_00545114();
  uVar1 = FUN_00540808(uVar3);
  if ((int)uVar1 == 0) {
    uVar1 = FUN_0054328c(param_1,param_2);
    uVar3 = FUN_005450d8();
    uVar2 = FUN_00540808(uVar3);
    if (uVar2 != 0) {
      return uVar2 & 0xffffffff;
    }
  }
  return uVar1 & 0xffffffff;
}


// 0x053e40c (0xb4 bytes)
ulonglong FUN_0053e40c(undefined4 param_1,undefined4 param_2)

{
  undefined4 uVar3;
  ulonglong uVar1;
  ulonglong uVar2;
  
  uVar3 = FUN_00545114();
  uVar1 = FUN_00540808(uVar3);
  if ((int)uVar1 == 0) {
    uVar1 = FUN_0054058c(param_1,param_2);
    uVar3 = FUN_005450d8();
    uVar2 = FUN_00540808(uVar3);
    if (uVar2 != 0) {
      return uVar2 & 0xffffffff;
    }
  }
  return uVar1 & 0xffffffff;
}


// 0x053e4c0 (0xb4 bytes)
ulonglong FUN_0053e4c0(undefined4 param_1,undefined4 param_2)

{
  undefined4 uVar3;
  ulonglong uVar1;
  ulonglong uVar2;
  
  uVar3 = FUN_00545114();
  uVar1 = FUN_00540808(uVar3);
  if ((int)uVar1 == 0) {
    uVar1 = FUN_00540508(param_1,param_2);
    uVar3 = FUN_005450d8();
    uVar2 = FUN_00540808(uVar3);
    if (uVar2 != 0) {
      return uVar2 & 0xffffffff;
    }
  }
  return uVar1 & 0xffffffff;
}


// 0x053e574 (0x54 bytes)
undefined8 FUN_0053e574(int param_1,undefined4 *param_2)

{
  undefined8 uVar1;
  undefined4 uVar2;
  
  uVar1 = 3;
  if ((param_2 != (undefined4 *)0x0) && (param_1 != 0)) {
    uVar2 = FUN_00545398(param_1);
    uVar1 = 0;
    *param_2 = uVar2;
  }
  return uVar1;
}


// 0x053e5c8 (0x48 bytes)
undefined8 FUN_0053e5c8(undefined4 *param_1)

{
  undefined8 uVar1;
  undefined4 uVar2;
  
  uVar1 = 3;
  if (param_1 != (undefined4 *)0x0) {
    uVar2 = FUN_0054536c();
    *param_1 = uVar2;
    uVar1 = 0;
  }
  return uVar1;
}


// 0x053e610 (0xb4 bytes)
ulonglong FUN_0053e610(undefined4 param_1,undefined4 param_2)

{
  undefined4 uVar3;
  ulonglong uVar1;
  ulonglong uVar2;
  
  uVar3 = FUN_00545114();
  uVar1 = FUN_00540808(uVar3);
  if ((int)uVar1 == 0) {
    uVar1 = FUN_00541390(param_1,param_2);
    uVar3 = FUN_005450d8();
    uVar2 = FUN_00540808(uVar3);
    if (uVar2 != 0) {
      return uVar2 & 0xffffffff;
    }
  }
  return uVar1 & 0xffffffff;
}


// 0x053e6c4 (0xb4 bytes)
ulonglong FUN_0053e6c4(undefined4 param_1,undefined4 param_2)

{
  undefined4 uVar3;
  ulonglong uVar1;
  ulonglong uVar2;
  
  uVar3 = FUN_00545114();
  uVar1 = FUN_00540808(uVar3);
  if ((int)uVar1 == 0) {
    uVar1 = FUN_005404c0(param_1,param_2);
    uVar3 = FUN_005450d8();
    uVar2 = FUN_00540808(uVar3);
    if (uVar2 != 0) {
      return uVar2 & 0xffffffff;
    }
  }
  return uVar1 & 0xffffffff;
}


// 0x053e778 (0xc8 bytes)
ulonglong FUN_0053e778(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 uVar3;
  ulonglong uVar1;
  ulonglong uVar2;
  
  uVar3 = FUN_00545114();
  uVar1 = FUN_00540808(uVar3);
  if ((int)uVar1 == 0) {
    uVar1 = FUN_00545010(param_1,param_2,param_3);
    uVar3 = FUN_005450d8();
    uVar2 = FUN_00540808(uVar3);
    if (uVar2 != 0) {
      return uVar2 & 0xffffffff;
    }
  }
  return uVar1 & 0xffffffff;
}


// 0x053e840 (0xb4 bytes)
ulonglong FUN_0053e840(undefined4 param_1,undefined4 param_2)

{
  undefined4 uVar3;
  ulonglong uVar1;
  ulonglong uVar2;
  
  uVar3 = FUN_00545114();
  uVar1 = FUN_00540808(uVar3);
  if ((int)uVar1 == 0) {
    uVar1 = FUN_0054af90(param_1,param_2);
    uVar3 = FUN_005450d8();
    uVar2 = FUN_00540808(uVar3);
    if (uVar2 != 0) {
      return uVar2 & 0xffffffff;
    }
  }
  return uVar1 & 0xffffffff;
}


// 0x053e8f4 (0xc8 bytes)
ulonglong FUN_0053e8f4(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 uVar3;
  ulonglong uVar1;
  ulonglong uVar2;
  
  uVar3 = FUN_00545114();
  uVar1 = FUN_00540808(uVar3);
  if ((int)uVar1 == 0) {
    uVar1 = FUN_00542600(param_1,param_2,param_3);
    uVar3 = FUN_005450d8();
    uVar2 = FUN_00540808(uVar3);
    if (uVar2 != 0) {
      return uVar2 & 0xffffffff;
    }
  }
  return uVar1 & 0xffffffff;
}


// 0x053e9bc (0xd8 bytes)
ulonglong FUN_0053e9bc(undefined4 param_1,undefined4 param_2)

{
  undefined4 uVar3;
  ulonglong uVar1;
  ulonglong uVar2;
  GPiece<2> auStack_20;
  GPiece<2> auStack_1e;
  GPiece<4> auStack_1c;
  undefined8 local_18;
  
  uVar3 = FUN_00545114();
  uVar1 = FUN_00540808(uVar3);
  if ((int)uVar1 == 0) {
    uVar1 = FUN_0053fe40(param_1,auStack_1c,&local_18,auStack_20,auStack_1e);
    if ((int)uVar1 == 0) {
      uVar1 = FUN_00545b74(local_18,param_2);
    }
    uVar3 = FUN_005450d8();
    uVar2 = FUN_00540808(uVar3);
    if (uVar2 != 0) {
      return uVar2 & 0xffffffff;
    }
  }
  return uVar1 & 0xffffffff;
}


// 0x053ea94 (0xc8 bytes)
ulonglong FUN_0053ea94(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 uVar3;
  ulonglong uVar1;
  ulonglong uVar2;
  
  uVar3 = FUN_00545114();
  uVar1 = FUN_00540808(uVar3);
  if ((int)uVar1 == 0) {
    uVar1 = FUN_00546ff0(param_1,param_2,param_3);
    uVar3 = FUN_005450d8();
    uVar2 = FUN_00540808(uVar3);
    if (uVar2 != 0) {
      return uVar2 & 0xffffffff;
    }
  }
  return uVar1 & 0xffffffff;
}


// 0x053eb5c (0xb4 bytes)
ulonglong FUN_0053eb5c(undefined4 param_1,undefined4 param_2)

{
  undefined4 uVar3;
  ulonglong uVar1;
  ulonglong uVar2;
  
  uVar3 = FUN_00545114();
  uVar1 = FUN_00540808(uVar3);
  if ((int)uVar1 == 0) {
    uVar1 = FUN_005412c4(param_1,param_2);
    uVar3 = FUN_005450d8();
    uVar2 = FUN_00540808(uVar3);
    if (uVar2 != 0) {
      return uVar2 & 0xffffffff;
    }
  }
  return uVar1 & 0xffffffff;
}


// 0x053ec10 (0xb4 bytes)
ulonglong FUN_0053ec10(undefined4 param_1,undefined4 param_2)

{
  undefined4 uVar3;
  ulonglong uVar1;
  ulonglong uVar2;
  
  uVar3 = FUN_00545114();
  uVar1 = FUN_00540808(uVar3);
  if ((int)uVar1 == 0) {
    uVar1 = FUN_005460c8(param_1,param_2);
    uVar3 = FUN_005450d8();
    uVar2 = FUN_00540808(uVar3);
    if (uVar2 != 0) {
      return uVar2 & 0xffffffff;
    }
  }
  return uVar1 & 0xffffffff;
}


// 0x053ecc4 (0xa0 bytes)
ulonglong FUN_0053ecc4(undefined4 param_1)

{
  undefined4 uVar3;
  ulonglong uVar1;
  ulonglong uVar2;
  
  uVar3 = FUN_00545114();
  uVar1 = FUN_00540808(uVar3);
  if ((int)uVar1 == 0) {
    uVar1 = FUN_00544548(param_1);
    uVar3 = FUN_005450d8();
    uVar2 = FUN_00540808(uVar3);
    if (uVar2 != 0) {
      return uVar2 & 0xffffffff;
    }
  }
  return uVar1 & 0xffffffff;
}


// 0x053ed64 (0xf8 bytes)
ulonglong FUN_0053ed64(int param_1,undefined4 param_2)

{
  undefined4 uVar3;
  ulonglong uVar1;
  ulonglong uVar2;
  
  uVar3 = FUN_00545114();
  uVar1 = FUN_00540808(uVar3);
  if ((int)uVar1 == 0) {
    if (*(int *)(param_1 + 200) == 1) {
      uVar1 = FUN_00548b58(param_1,param_2,4,1);
    }
    else {
      uVar1 = FUN_00548b58(param_1,param_2,2,1);
    }
    if (((*(int *)(param_1 + 0xbc) != 0) && ((int)uVar1 != 0)) && ((int)uVar1 != 0x1f)) {
      *(undefined4 *)(*(int *)PTR_PTR_0071b0e4 + 0x1084) = 0;
    }
    uVar3 = FUN_005450d8();
    uVar2 = FUN_00540808(uVar3);
    if (uVar2 != 0) {
      uVar1 = uVar2;
    }
  }
  return uVar1 & 0xffffffff;
}


// 0x053ee5c (0xfc bytes)
ulonglong FUN_0053ee5c(int param_1,undefined4 param_2)

{
  undefined4 uVar3;
  ulonglong uVar1;
  ulonglong uVar2;
  
  uVar3 = FUN_00545114();
  uVar1 = FUN_00540808(uVar3);
  if ((int)uVar1 == 0) {
    uVar1 = FUN_00548b58(param_1,param_2,1,1);
    if (((*(int *)(param_1 + 0xbc) != 0) && ((int)uVar1 != 0)) && ((int)uVar1 != 0x1f)) {
      *(undefined4 *)(*(int *)PTR_PTR_0071b0e4 + 0x1084) = 0;
    }
    uVar3 = FUN_005450d8();
    uVar2 = FUN_00540808(uVar3);
    if (uVar2 != 0) {
      return uVar2 & 0xffffffff;
    }
  }
  return uVar1 & 0xffffffff;
}


// 0x053ef58 (0xf8 bytes)
ulonglong FUN_0053ef58(int param_1,undefined4 param_2)

{
  undefined4 uVar3;
  ulonglong uVar1;
  ulonglong uVar2;
  
  uVar3 = FUN_00545114();
  uVar1 = FUN_00540808(uVar3);
  if ((int)uVar1 == 0) {
    uVar1 = FUN_00549200(param_1,param_2,0);
    if (((*(int *)(param_1 + 0x16c) != 0) && ((int)uVar1 != 0)) && ((int)uVar1 != 0x1f)) {
      *(undefined4 *)(*(int *)PTR_PTR_0071b0e4 + 0x1084) = 0;
    }
    uVar3 = FUN_005450d8();
    uVar2 = FUN_00540808(uVar3);
    if (uVar2 != 0) {
      return uVar2 & 0xffffffff;
    }
  }
  return uVar1 & 0xffffffff;
}


// 0x053f050 (0xf8 bytes)
ulonglong FUN_0053f050(int param_1,undefined4 param_2)

{
  undefined4 uVar3;
  ulonglong uVar1;
  ulonglong uVar2;
  
  uVar3 = FUN_00545114();
  uVar1 = FUN_00540808(uVar3);
  if ((int)uVar1 == 0) {
    uVar1 = FUN_00549200(param_1,param_2,1);
    if (((*(int *)(param_1 + 0x16c) != 0) && ((int)uVar1 != 0)) && ((int)uVar1 != 0x1f)) {
      *(undefined4 *)(*(int *)PTR_PTR_0071b0e4 + 0x1084) = 0;
    }
    uVar3 = FUN_005450d8();
    uVar2 = FUN_00540808(uVar3);
    if (uVar2 != 0) {
      return uVar2 & 0xffffffff;
    }
  }
  return uVar1 & 0xffffffff;
}


// 0x053f148 (0x28 bytes)
undefined4 FUN_0053f148(void)

{
  undefined4 uVar1;
  
  uVar1 = FUN_00547230();
  return uVar1;
}


// 0x053f170 (0x90 bytes)
ulonglong FUN_0053f170(void)

{
  undefined4 uVar3;
  ulonglong uVar1;
  ulonglong uVar2;
  
  uVar3 = FUN_00545114();
  uVar1 = FUN_00540808(uVar3);
  if ((int)uVar1 == 0) {
    uVar1 = FUN_0054ceb0();
    uVar3 = FUN_005450d8();
    uVar2 = FUN_00540808(uVar3);
    if (uVar2 != 0) {
      return uVar2 & 0xffffffff;
    }
  }
  return uVar1 & 0xffffffff;
}


// 0x053f200 (0xa0 bytes)
ulonglong FUN_0053f200(undefined4 param_1)

{
  undefined4 uVar3;
  ulonglong uVar1;
  ulonglong uVar2;
  
  uVar3 = FUN_00545114();
  uVar1 = FUN_00540808(uVar3);
  if ((int)uVar1 == 0) {
    uVar1 = FUN_0054cf00(param_1);
    uVar3 = FUN_005450d8();
    uVar2 = FUN_00540808(uVar3);
    if (uVar2 != 0) {
      return uVar2 & 0xffffffff;
    }
  }
  return uVar1 & 0xffffffff;
}


// 0x053f2a0 (0xdc bytes)
ulonglong FUN_0053f2a0(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 uVar3;
  ulonglong uVar1;
  ulonglong uVar2;
  
  uVar3 = FUN_00545114();
  uVar1 = FUN_00540808(uVar3);
  if ((int)uVar1 == 0) {
    uVar1 = FUN_0054cf60(param_1,param_2,param_3,param_4);
    uVar3 = FUN_005450d8();
    uVar2 = FUN_00540808(uVar3);
    if (uVar2 != 0) {
      return uVar2 & 0xffffffff;
    }
  }
  return uVar1 & 0xffffffff;
}


// 0x053f37c (0xdc bytes)
ulonglong FUN_0053f37c(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 uVar3;
  ulonglong uVar1;
  ulonglong uVar2;
  
  uVar3 = FUN_00545114();
  uVar1 = FUN_00540808(uVar3);
  if ((int)uVar1 == 0) {
    uVar1 = FUN_0054cf98(param_1,param_2,param_3,param_4);
    uVar3 = FUN_005450d8();
    uVar2 = FUN_00540808(uVar3);
    if (uVar2 != 0) {
      return uVar2 & 0xffffffff;
    }
  }
  return uVar1 & 0xffffffff;
}


// 0x053f458 (0xac bytes)
ulonglong FUN_0053f458(int param_1)

{
  undefined4 uVar2;
  ulonglong uVar1;
  ulonglong uVar3;
  
  uVar3 = 3;
  if (param_1 != 0) {
    uVar2 = FUN_00545114();
    uVar3 = FUN_00540808(uVar2);
    if ((int)uVar3 == 0) {
      uVar3 = FUN_0054a088(param_1);
      uVar2 = FUN_005450d8();
      uVar1 = FUN_00540808(uVar2);
      if (uVar1 != 0) {
        return uVar1 & 0xffffffff;
      }
    }
  }
  return uVar3 & 0xffffffff;
}


// 0x053f504 (0xc8 bytes)
ulonglong FUN_0053f504(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 uVar3;
  ulonglong uVar1;
  ulonglong uVar2;
  
  uVar3 = FUN_00545114();
  uVar1 = FUN_00540808(uVar3);
  if ((int)uVar1 == 0) {
    uVar1 = FUN_00541474(param_1,param_2,param_3);
    uVar3 = FUN_005450d8();
    uVar2 = FUN_00540808(uVar3);
    if (uVar2 != 0) {
      return uVar2 & 0xffffffff;
    }
  }
  return uVar1 & 0xffffffff;
}


// 0x053f5cc (0xf0 bytes)
ulonglong FUN_0053f5cc(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                      undefined4 param_5)

{
  undefined4 uVar3;
  ulonglong uVar1;
  ulonglong uVar2;
  
  uVar3 = FUN_00545114();
  uVar1 = FUN_00540808(uVar3);
  if ((int)uVar1 == 0) {
    uVar1 = FUN_0054158c(param_1,param_2,param_3,param_4,param_5);
    uVar3 = FUN_005450d8();
    uVar2 = FUN_00540808(uVar3);
    if (uVar2 != 0) {
      return uVar2 & 0xffffffff;
    }
  }
  return uVar1 & 0xffffffff;
}


// 0x053f6bc (0x128 bytes)
ulonglong FUN_0053f6bc(void)

{
  uint uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined4 uVar6;
  ulonglong uVar4;
  ulonglong uVar5;
  
  puVar2 = PTR_DAT_0071b0e0;
  uVar1 = *(uint *)(PTR_DAT_0071b0e0 + 4);
  uVar4 = 2;
  if (uVar1 != 0) {
    if (uVar1 < 2) {
      uVar6 = FUN_00545114();
      uVar4 = FUN_00540808(uVar6);
      if ((int)uVar4 == 0) {
        uVar5 = FUN_00547c38();
        uVar6 = FUN_005450d8();
        uVar4 = FUN_00540808(uVar6);
        puVar3 = PTR_PTR_0071b0e4;
        if (uVar4 == 0) {
          if ((int)uVar5 == 0) {
            uVar6 = FUN_00552f64(*(int *)PTR_PTR_0071b0e4 + 0x1c);
            uVar4 = FUN_00540808(uVar6);
            if (uVar4 != 0) goto LAB_0053f700;
            *(undefined4 *)(*(int *)puVar3 + 0x18) = 0;
            *(undefined4 *)(puVar2 + 4) = 0;
            *(undefined4 *)puVar2 = 0;
          }
          FUN_0054045c();
          memset(*(undefined4 *)puVar3,0,0x10d8);
          uVar4 = uVar5;
        }
      }
    }
    else {
      *(uint *)(PTR_DAT_0071b0e0 + 4) = uVar1 - 1;
      uVar4 = 0;
    }
  }
LAB_0053f700:
  return uVar4 & 0xffffffff;
}


// 0x053f7e4 (0x1d0 bytes)
ulonglong FUN_0053f7e4(int *param_1,undefined4 *param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  int iVar6;
  undefined4 uVar7;
  ulonglong uVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  
  puVar2 = PTR_PTR_0071b0e4;
  iVar6 = *(int *)PTR_PTR_0071b0e4;
  *(undefined4 *)(iVar6 + 0x18) = 0;
  uVar5 = 3;
  if (param_2 != (undefined4 *)0x0) {
    param_2[1] = 0x10;
    *param_2 = 1;
    puVar1 = PTR_DAT_0071b0e0;
    if (param_1 == (int *)0x0) {
      param_2[1] = 3;
    }
    else {
      if (*param_1 != 1) {
        param_2[1] = 0x1d;
        return 3;
      }
      if (*(int *)(PTR_DAT_0071b0e0 + 4) == 0) {
        if ((*(int *)(iVar6 + 0x18) == 0) && (iVar6 = FUN_00552fdc(iVar6 + 0x1c), iVar6 == 0)) {
          *(undefined4 *)(*(int *)puVar2 + 0x18) = 1;
          *(undefined4 *)puVar1 = 1;
          uVar7 = FUN_00545114();
          uVar3 = FUN_00540808(uVar7);
          uVar5 = uVar3;
          if ((int)uVar3 == 0) {
            uVar4 = FUN_00546398(param_1,param_2);
            uVar7 = FUN_005450d8();
            uVar5 = FUN_00540808(uVar7);
            if (uVar5 == 0) {
              if ((int)uVar4 == 0) {
                *(undefined4 *)puVar1 = 1;
                *(undefined4 *)(puVar1 + 4) = 1;
                uVar5 = uVar3;
              }
              else {
                *(undefined4 *)puVar1 = 0;
                *(undefined4 *)(puVar1 + 4) = 1;
                uVar5 = uVar4;
              }
            }
          }
        }
        else {
          param_2[1] = 2000;
          uVar5 = 2000;
        }
      }
      else {
        *(int *)(PTR_DAT_0071b0e0 + 4) = *(int *)(PTR_DAT_0071b0e0 + 4) + 1;
        param_2[1] = 0;
        uVar5 = 0;
      }
    }
  }
  return uVar5 & 0xffffffff;
}


// 0x053f9b4 (0x7c bytes)
undefined8 FUN_0053f9b4(undefined4 *param_1)

{
  undefined8 uVar1;
  GPiece<32> auStack_40;
  undefined4 local_20;
  
  uVar1 = 3;
  if (param_1 != (undefined4 *)0x0) {
    memset(param_1,0,100);
    FUN_00556928(auStack_40);
    FUN_00552888(local_20);
    uVar1 = 0;
    param_1[2] = 1;
    param_1[1] = 0;
    *param_1 = 1;
    param_1[0x15] = 0;
  }
  return uVar1;
}


// 0x053fa30 (0x190 bytes)
// strings: 006600d0: 'Time of build 08:11:02 Mar 10 2011'

undefined8 FUN_0053fa30(undefined1 *param_1)

{
  undefined1 uVar1;
  undefined1 uVar2;
  undefined1 uVar3;
  undefined1 uVar4;
  undefined1 uVar5;
  undefined1 uVar6;
  undefined1 uVar7;
  undefined1 uVar8;
  undefined1 uVar9;
  undefined1 uVar10;
  undefined1 uVar11;
  undefined1 uVar12;
  undefined1 uVar13;
  undefined1 uVar14;
  undefined1 uVar15;
  undefined1 uVar16;
  undefined1 uVar17;
  undefined1 uVar18;
  undefined1 uVar19;
  undefined *puVar20;
  undefined8 uVar21;
  
  puVar20 = PTR_s_Time_of_build_08_11_02_Mar_10_20_0071b0f0;
  uVar21 = 3;
  if (param_1 != (undefined1 *)0x0) {
    uVar21 = 0;
    uVar1 = PTR_s_Time_of_build_08_11_02_Mar_10_20_0071b0f0[1];
    uVar2 = PTR_s_Time_of_build_08_11_02_Mar_10_20_0071b0f0[2];
    uVar3 = PTR_s_Time_of_build_08_11_02_Mar_10_20_0071b0f0[3];
    uVar4 = PTR_s_Time_of_build_08_11_02_Mar_10_20_0071b0f0[4];
    uVar5 = PTR_s_Time_of_build_08_11_02_Mar_10_20_0071b0f0[5];
    uVar6 = PTR_s_Time_of_build_08_11_02_Mar_10_20_0071b0f0[6];
    uVar7 = PTR_s_Time_of_build_08_11_02_Mar_10_20_0071b0f0[7];
    uVar8 = PTR_s_Time_of_build_08_11_02_Mar_10_20_0071b0f0[8];
    uVar9 = PTR_s_Time_of_build_08_11_02_Mar_10_20_0071b0f0[9];
    uVar10 = PTR_s_Time_of_build_08_11_02_Mar_10_20_0071b0f0[10];
    uVar11 = PTR_s_Time_of_build_08_11_02_Mar_10_20_0071b0f0[0xb];
    uVar12 = PTR_s_Time_of_build_08_11_02_Mar_10_20_0071b0f0[0xc];
    uVar13 = PTR_s_Time_of_build_08_11_02_Mar_10_20_0071b0f0[0xd];
    uVar14 = PTR_s_Time_of_build_08_11_02_Mar_10_20_0071b0f0[0xe];
    uVar15 = PTR_s_Time_of_build_08_11_02_Mar_10_20_0071b0f0[0xf];
    uVar16 = PTR_s_Time_of_build_08_11_02_Mar_10_20_0071b0f0[0x10];
    *param_1 = *PTR_s_Time_of_build_08_11_02_Mar_10_20_0071b0f0;
    param_1[1] = uVar1;
    param_1[2] = uVar2;
    param_1[3] = uVar3;
    param_1[4] = uVar4;
    param_1[5] = uVar5;
    param_1[6] = uVar6;
    param_1[7] = uVar7;
    param_1[8] = uVar8;
    param_1[9] = uVar9;
    param_1[10] = uVar10;
    param_1[0xb] = uVar11;
    param_1[0xc] = uVar12;
    param_1[0xd] = uVar13;
    param_1[0xe] = uVar14;
    param_1[0xf] = uVar15;
    uVar1 = puVar20[0x11];
    uVar2 = puVar20[0x12];
    uVar3 = puVar20[0x13];
    uVar4 = puVar20[0x22];
    uVar5 = puVar20[0x14];
    uVar6 = puVar20[0x15];
    uVar7 = puVar20[0x16];
    uVar8 = puVar20[0x17];
    uVar9 = puVar20[0x18];
    uVar10 = puVar20[0x19];
    uVar11 = puVar20[0x1a];
    uVar12 = puVar20[0x1b];
    uVar13 = puVar20[0x1c];
    uVar14 = puVar20[0x1d];
    uVar15 = puVar20[0x1f];
    uVar17 = puVar20[0x20];
    uVar18 = puVar20[0x21];
    uVar19 = puVar20[0x1e];
    param_1[0x10] = uVar16;
    param_1[0x22] = uVar4;
    param_1[0x11] = uVar1;
    param_1[0x12] = uVar2;
    param_1[0x13] = uVar3;
    param_1[0x14] = uVar5;
    param_1[0x15] = uVar6;
    param_1[0x16] = uVar7;
    param_1[0x17] = uVar8;
    param_1[0x18] = uVar9;
    param_1[0x19] = uVar10;
    param_1[0x1a] = uVar11;
    param_1[0x1b] = uVar12;
    param_1[0x1c] = uVar13;
    param_1[0x1d] = uVar14;
    param_1[0x1e] = uVar19;
    param_1[0x1f] = uVar15;
    param_1[0x20] = uVar17;
    param_1[0x21] = uVar18;
  }
  return uVar21;
}


// 0x053fbc0 (0x4c bytes)
// strings: 0067d180: '%d.%02d.%04d'

undefined8 FUN_0053fbc0(char *param_1)

{
  undefined8 uVar1;
  
  uVar1 = 3;
  if (param_1 != (char *)0x0) {
    snprintf(param_1,PTR_s__d__02d__04d_0071b0f4,3,4,0);
    uVar1 = 0;
  }
  return uVar1;
}


// 0x053fc0c (0x234 bytes)
undefined8
FUN_0053fc0c(uint *param_1,uint *param_2,undefined1 *param_3,uint param_4,undefined2 *param_5,
            undefined2 *param_6)

{
  undefined1 uVar1;
  undefined1 uVar2;
  undefined1 uVar3;
  uint uVar4;
  ulonglong uVar5;
  
  if ((((param_1 != (uint *)0x0) && (param_2 != (uint *)0x0)) && (param_3 != (undefined1 *)0x0)) &&
     (((param_5 != (undefined2 *)0x0 && (param_6 != (undefined2 *)0x0)) && (0xf < param_4)))) {
    uVar4 = *param_1;
    *param_5 = (short)param_1[5];
    *param_2 = uVar4;
    *param_6 = 0;
    if ((ulonglong)uVar4 < 8) {
      uVar5 = 1L << ((ulonglong)uVar4 & 0x7f);
      if ((uVar5 & 0xe) != 0) {
        uVar1 = *(undefined1 *)((int)param_1 + 5);
        uVar2 = *(undefined1 *)((int)param_1 + 6);
        uVar3 = *(undefined1 *)((int)param_1 + 7);
        *param_3 = *(undefined1 *)(param_1 + 1);
        param_3[1] = uVar1;
        param_3[2] = uVar2;
        param_3[3] = uVar3;
        uVar1 = *(undefined1 *)((int)param_1 + 9);
        uVar2 = *(undefined1 *)((int)param_1 + 10);
        uVar3 = *(undefined1 *)((int)param_1 + 0xb);
        param_3[4] = *(undefined1 *)(param_1 + 2);
        param_3[5] = uVar1;
        param_3[6] = uVar2;
        param_3[7] = uVar3;
        uVar1 = *(undefined1 *)((int)param_1 + 0xd);
        uVar2 = *(undefined1 *)((int)param_1 + 0xe);
        uVar3 = *(undefined1 *)((int)param_1 + 0xf);
        param_3[8] = *(undefined1 *)(param_1 + 3);
        param_3[9] = uVar1;
        param_3[10] = uVar2;
        param_3[0xb] = uVar3;
        uVar1 = *(undefined1 *)(param_1 + 4);
        uVar2 = *(undefined1 *)((int)param_1 + 0x11);
        uVar3 = *(undefined1 *)((int)param_1 + 0x12);
        param_3[0xf] = *(undefined1 *)((int)param_1 + 0x13);
        param_3[0xc] = uVar1;
        param_3[0xd] = uVar2;
        param_3[0xe] = uVar3;
        return 0;
      }
      if ((uVar5 & 0x30) != 0) {
        FUN_0054ee84(param_3,*(undefined8 *)(param_1 + 1));
        return 0;
      }
      if ((uVar5 & 0xc0) != 0) {
        FUN_0054ee84(param_3,*(undefined8 *)(param_1 + 1));
        *param_6 = *(undefined2 *)(param_1 + 5);
        return 0;
      }
    }
  }
  return 3;
}


// 0x053fe40 (0x98 bytes)
undefined8
FUN_0053fe40(uint *param_1,uint *param_2,int param_3,undefined2 *param_4,undefined2 *param_5)

{
  uint uVar1;
  undefined8 uVar2;
  
  if ((((param_1 != (uint *)0x0) && (param_2 != (uint *)0x0)) && (param_3 != 0)) &&
     ((param_4 != (undefined2 *)0x0 && (param_5 != (undefined2 *)0x0)))) {
    uVar1 = *param_1;
    *param_4 = (short)param_1[5];
    *param_2 = uVar1;
    *param_5 = 0;
    if (uVar1 < 9) {
                    /* WARNING: Could not recover jumptable at 0x0053fed4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar2 = (*(code *)(PTR_DAT_0071b0f8 + *(int *)(PTR_DAT_0071b0f8 + uVar1 * 4)))();
      return uVar2;
    }
  }
  return 3;
}


// 0x053ffdc (0x240 bytes)
undefined8
FUN_0053ffdc(undefined4 *param_1,ulonglong param_2,undefined1 *param_3,uint param_4,
            ulonglong param_5)

{
  undefined1 uVar1;
  undefined1 uVar2;
  undefined1 uVar3;
  ulonglong uVar4;
  undefined1 local_30;
  undefined1 local_2f;
  undefined1 local_2e;
  undefined1 local_2d;
  undefined1 local_2c;
  undefined1 local_2b;
  undefined1 local_2a;
  undefined1 local_29;
  
  if ((param_1 != (undefined4 *)0x0) && (param_3 != (undefined1 *)0x0)) {
    *param_1 = (int)param_2;
    param_1[4] = 0;
    param_1[1] = 0;
    param_1[2] = 0;
    param_1[3] = 0;
    param_1[5] = param_4 & 0xffff;
    if ((param_2 & 0xffffffff) < 8) {
      uVar4 = 1L << (param_2 & 0x7f);
      if ((uVar4 & 0xe) != 0) {
        uVar1 = param_3[1];
        uVar2 = param_3[2];
        uVar3 = param_3[3];
        *(undefined1 *)(param_1 + 1) = *param_3;
        *(undefined1 *)((int)param_1 + 5) = uVar1;
        *(undefined1 *)((int)param_1 + 6) = uVar2;
        *(undefined1 *)((int)param_1 + 7) = uVar3;
        uVar1 = param_3[5];
        uVar2 = param_3[6];
        uVar3 = param_3[7];
        *(undefined1 *)(param_1 + 2) = param_3[4];
        *(undefined1 *)((int)param_1 + 9) = uVar1;
        *(undefined1 *)((int)param_1 + 10) = uVar2;
        *(undefined1 *)((int)param_1 + 0xb) = uVar3;
        uVar1 = param_3[9];
        uVar2 = param_3[10];
        uVar3 = param_3[0xb];
        *(undefined1 *)(param_1 + 3) = param_3[8];
        *(undefined1 *)((int)param_1 + 0xd) = uVar1;
        *(undefined1 *)((int)param_1 + 0xe) = uVar2;
        *(undefined1 *)((int)param_1 + 0xf) = uVar3;
        uVar1 = param_3[0xc];
        uVar2 = param_3[0xd];
        uVar3 = param_3[0xe];
        *(undefined1 *)((int)param_1 + 0x13) = param_3[0xf];
        *(undefined1 *)(param_1 + 4) = uVar1;
        *(undefined1 *)((int)param_1 + 0x11) = uVar2;
        *(undefined1 *)((int)param_1 + 0x12) = uVar3;
        return 0;
      }
      if ((uVar4 & 0x30) != 0) {
        FUN_0054ef70(&local_30,param_3);
        *(undefined1 *)(param_1 + 1) = local_30;
        *(undefined1 *)((int)param_1 + 5) = local_2f;
        *(undefined1 *)((int)param_1 + 6) = local_2e;
        *(undefined1 *)((int)param_1 + 7) = local_2d;
        *(undefined1 *)((int)param_1 + 0xb) = local_29;
        *(undefined1 *)(param_1 + 2) = local_2c;
        *(undefined1 *)((int)param_1 + 9) = local_2b;
        *(undefined1 *)((int)param_1 + 10) = local_2a;
        return 0;
      }
      if ((uVar4 & 0xc0) != 0) {
        FUN_0054ef70(&local_30,param_3);
        *(undefined1 *)(param_1 + 1) = local_30;
        *(undefined1 *)((int)param_1 + 5) = local_2f;
        *(undefined1 *)((int)param_1 + 6) = local_2e;
        *(undefined1 *)((int)param_1 + 7) = local_2d;
        param_1[5] = param_4 & 0xffff | (uint)((param_5 & 0xffffffff) << 0x10);
        *(undefined1 *)((int)param_1 + 0xb) = local_29;
        *(undefined1 *)(param_1 + 2) = local_2c;
        *(undefined1 *)((int)param_1 + 9) = local_2b;
        *(undefined1 *)((int)param_1 + 10) = local_2a;
        return 0;
      }
    }
  }
  return 3;
}


// 0x054021c (0x240 bytes)
undefined8
FUN_0054021c(undefined4 *param_1,ulonglong param_2,undefined8 *param_3,uint param_4,
            ulonglong param_5)

{
  undefined1 uVar1;
  undefined1 uVar2;
  undefined1 uVar3;
  ulonglong uVar4;
  
  if ((param_1 != (undefined4 *)0x0) && (param_3 != (undefined8 *)0x0)) {
    *param_1 = (int)param_2;
    param_1[4] = 0;
    param_1[1] = 0;
    param_1[2] = 0;
    param_1[3] = 0;
    param_1[5] = param_4 & 0xffff;
    if ((param_2 & 0xffffffff) < 8) {
      uVar4 = 1L << (param_2 & 0x7f);
      if ((uVar4 & 0xe) != 0) {
        FUN_0054eecc(param_1 + 1,*param_3);
        return 0;
      }
      if ((uVar4 & 0x30) != 0) {
        uVar1 = *(undefined1 *)((int)param_3 + 1);
        uVar2 = *(undefined1 *)((int)param_3 + 2);
        uVar3 = *(undefined1 *)((int)param_3 + 3);
        *(undefined1 *)(param_1 + 1) = *(undefined1 *)param_3;
        *(undefined1 *)((int)param_1 + 5) = uVar1;
        *(undefined1 *)((int)param_1 + 6) = uVar2;
        *(undefined1 *)((int)param_1 + 7) = uVar3;
        uVar1 = *(undefined1 *)((int)param_3 + 5);
        uVar2 = *(undefined1 *)((int)param_3 + 6);
        uVar3 = *(undefined1 *)((int)param_3 + 7);
        *(undefined1 *)(param_1 + 2) = *(undefined1 *)((int)param_3 + 4);
        *(undefined1 *)((int)param_1 + 9) = uVar1;
        *(undefined1 *)((int)param_1 + 10) = uVar2;
        *(undefined1 *)((int)param_1 + 0xb) = uVar3;
        uVar1 = *(undefined1 *)((int)param_3 + 9);
        uVar2 = *(undefined1 *)((int)param_3 + 10);
        uVar3 = *(undefined1 *)((int)param_3 + 0xb);
        *(undefined1 *)(param_1 + 3) = *(undefined1 *)(param_3 + 1);
        *(undefined1 *)((int)param_1 + 0xd) = uVar1;
        *(undefined1 *)((int)param_1 + 0xe) = uVar2;
        *(undefined1 *)((int)param_1 + 0xf) = uVar3;
        uVar1 = *(undefined1 *)((int)param_3 + 0xc);
        uVar2 = *(undefined1 *)((int)param_3 + 0xd);
        uVar3 = *(undefined1 *)((int)param_3 + 0xe);
        *(undefined1 *)((int)param_1 + 0x13) = *(undefined1 *)((int)param_3 + 0xf);
        *(undefined1 *)(param_1 + 4) = uVar1;
        *(undefined1 *)((int)param_1 + 0x11) = uVar2;
        *(undefined1 *)((int)param_1 + 0x12) = uVar3;
        return 0;
      }
      if ((uVar4 & 0xc0) != 0) {
        uVar1 = *(undefined1 *)((int)param_3 + 1);
        uVar2 = *(undefined1 *)((int)param_3 + 2);
        uVar3 = *(undefined1 *)((int)param_3 + 3);
        *(undefined1 *)(param_1 + 1) = *(undefined1 *)param_3;
        *(undefined1 *)((int)param_1 + 5) = uVar1;
        *(undefined1 *)((int)param_1 + 6) = uVar2;
        *(undefined1 *)((int)param_1 + 7) = uVar3;
        uVar1 = *(undefined1 *)((int)param_3 + 5);
        uVar2 = *(undefined1 *)((int)param_3 + 6);
        uVar3 = *(undefined1 *)((int)param_3 + 7);
        *(undefined1 *)(param_1 + 2) = *(undefined1 *)((int)param_3 + 4);
        *(undefined1 *)((int)param_1 + 9) = uVar1;
        *(undefined1 *)((int)param_1 + 10) = uVar2;
        *(undefined1 *)((int)param_1 + 0xb) = uVar3;
        uVar1 = *(undefined1 *)((int)param_3 + 9);
        uVar2 = *(undefined1 *)((int)param_3 + 10);
        uVar3 = *(undefined1 *)((int)param_3 + 0xb);
        *(undefined1 *)(param_1 + 3) = *(undefined1 *)(param_3 + 1);
        *(undefined1 *)((int)param_1 + 0xd) = uVar1;
        *(undefined1 *)((int)param_1 + 0xe) = uVar2;
        *(undefined1 *)((int)param_1 + 0xf) = uVar3;
        uVar1 = *(undefined1 *)((int)param_3 + 0xc);
        uVar2 = *(undefined1 *)((int)param_3 + 0xd);
        uVar3 = *(undefined1 *)((int)param_3 + 0xe);
        *(undefined1 *)((int)param_1 + 0x13) = *(undefined1 *)((int)param_3 + 0xf);
        param_1[5] = param_4 & 0xffff | (uint)((param_5 & 0xffffffff) << 0x10);
        *(undefined1 *)(param_1 + 4) = uVar1;
        *(undefined1 *)((int)param_1 + 0x11) = uVar2;
        *(undefined1 *)((int)param_1 + 0x12) = uVar3;
        return 0;
      }
    }
  }
  return 3;
}


// 0x054045c (0x38 bytes)
void FUN_0054045c(void)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar2 = PTR_DAT_0071b100;
  puVar1 = PTR_DAT_0071b0fc;
  *(undefined4 *)(PTR_DAT_0071b0fc + 0x20) = 0;
  *(undefined4 *)puVar2 = 0;
  *(undefined4 *)puVar1 = 0;
  *(undefined4 *)(puVar1 + 4) = 0;
  *(undefined4 *)(puVar1 + 8) = 0;
  *(undefined4 *)(puVar1 + 0xc) = 0;
  *(undefined4 *)(puVar1 + 0x10) = 0;
  *(undefined4 *)(puVar1 + 0x14) = 0;
  *(undefined4 *)(puVar1 + 0x18) = 0;
  *(undefined4 *)(puVar1 + 0x1c) = 0;
  return;
}


// 0x0540494 (0x8 bytes)
undefined4 FUN_00540494(int param_1)

{
  return *(undefined4 *)(param_1 + 0x45c);
}


// 0x054049c (0x8 bytes)
undefined8 FUN_0054049c(void)

{
  return 0;
}


// 0x05404a4 (0x10 bytes)
undefined4 FUN_005404a4(void)

{
  return **(undefined4 **)PTR_PTR_0071b104;
}


// 0x05404b4 (0xc bytes)
undefined4 FUN_005404b4(int param_1)

{
  return *(undefined4 *)(param_1 + 0x458);
}


// 0x05404c0 (0x38 bytes)
undefined8 FUN_005404c0(undefined4 *param_1,int param_2)

{
  if ((param_1 != (undefined4 *)0x0) && (*param_1 = 0x100, param_2 != 0)) {
    *param_1 = *(undefined4 *)(param_2 + 0x404);
    return 0;
  }
  return 3;
}


// 0x05404f8 (0x10 bytes)
void FUN_005404f8(undefined4 param_1)

{
  *(undefined4 *)(*(int *)PTR_PTR_0071b104 + 4) = param_1;
  return;
}


// 0x0540508 (0x84 bytes)
undefined8 FUN_00540508(undefined4 *param_1,int param_2)

{
  int iVar1;
  
  if ((param_1 != (undefined4 *)0x0) && (param_2 != 0)) {
    iVar1 = *(int *)(*(int *)PTR_PTR_0071b104 + 0x1088);
    while( true ) {
      if (iVar1 == 0) {
        *param_1 = 0;
        return 3;
      }
      if (param_2 == iVar1) break;
      iVar1 = *(int *)(iVar1 + 0x534);
    }
    *param_1 = *(undefined4 *)(param_2 + 0x440);
    return 0;
  }
  return 3;
}


// 0x054058c (0x74 bytes)
undefined8 FUN_0054058c(int *param_1,int param_2)

{
  int *piVar1;
  int iVar2;
  longlong lVar3;
  
  if ((param_1 != (int *)0x0) && (*param_1 = 0, param_2 != 0)) {
    iVar2 = 0;
    lVar3 = 0x100;
    do {
      piVar1 = (int *)(iVar2 + param_2);
      iVar2 = iVar2 + 4;
      if ((*piVar1 != 0) && (*(int *)(*piVar1 + 0x20) != 0)) {
        *param_1 = *param_1 + 1;
      }
      lVar3 = lVar3 + -1;
    } while (lVar3 != 0);
    return 0;
  }
  return 3;
}


// 0x0540600 (0x54 bytes)
undefined8 FUN_00540600(int param_1,int param_2,uint param_3)

{
  ulonglong uVar1;
  undefined1 *puVar2;
  undefined4 *puVar3;
  
  if (param_3 != 0) {
    uVar1 = 0;
    do {
      puVar3 = (undefined4 *)((int)uVar1 + param_2);
      puVar2 = (undefined1 *)((int)uVar1 + param_1);
      uVar1 = uVar1 + 4;
      *puVar2 = (char)*puVar3;
      puVar2[1] = *(undefined1 *)((int)puVar3 + 2);
      puVar2[2] = *(undefined1 *)((int)puVar3 + 1);
      puVar2[3] = *(undefined1 *)puVar3;
    } while ((uVar1 & 0x1fffffff) << 3 < (ulonglong)param_3);
  }
  return 0;
}


// 0x0540654 (0x38 bytes)
undefined8 FUN_00540654(longlong param_1,uint param_2)

{
  undefined8 uVar1;
  
  if ((param_1 != 0) && (param_2 < 10)) {
                    /* WARNING: Could not recover jumptable at 0x00540688. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar1 = (*(code *)(PTR_DAT_0071b108 + *(int *)(PTR_DAT_0071b108 + param_2 * 4)))();
    return uVar1;
  }
  return 3;
}


// 0x0540754 (0x88 bytes)
void FUN_00540754(int *param_1)

{
  undefined4 *puVar1;
  int iVar2;
  
  iVar2 = *param_1;
  if ((iVar2 == 0) || (puVar1 = *(undefined4 **)(iVar2 + 0x4e0), puVar1 == (undefined4 *)0x0)) {
    puVar1 = *(undefined4 **)(*(int *)PTR_PTR_0071b104 + 0x108c);
    if (puVar1 == (undefined4 *)0x0) {
      return;
    }
    iVar2 = *(int *)(*(int *)PTR_PTR_0071b104 + 0x1090);
  }
  else {
    iVar2 = *(int *)(iVar2 + 0x4e4);
  }
  param_1[2] = iVar2;
  (*(code *)*puVar1)(param_1);
  return;
}


// 0x05407dc (0x2c bytes)
bool FUN_005407dc(void)

{
  int iVar1;
  
  iVar1 = *(int *)PTR_DAT_0071b10c;
  if (iVar1 != 0) {
    *(undefined4 *)(iVar1 + 0x10c) = 1;
  }
  return iVar1 == 0;
}


// 0x0540808 (0xabc bytes)
undefined8 FUN_00540808(uint param_1)

{
  if (param_1 == 0xcf1f) {
    return 0x139b;
  }
  if (param_1 < 0xcf20) {
    if (param_1 == 0xcb22) {
      return 0x1196;
    }
    if (param_1 < 0xcb23) {
      if (param_1 == 0x3eb) {
        return 0x9c6;
      }
      if (param_1 < 0x3ec) {
        if (param_1 == 0xc9) {
          return 0x5dd;
        }
        if (param_1 < 0xca) {
          if (param_1 == 4) {
            return 4;
          }
          if (param_1 < 5) {
            if (param_1 == 2) {
              return 3;
            }
            if (2 < param_1) {
              return 1;
            }
            if (param_1 == 0) {
              return 0;
            }
          }
          else {
            if (param_1 == 7) {
              return 5;
            }
            if (param_1 < 8) {
              if (param_1 == 5) {
                return 2;
              }
            }
            else {
              if (param_1 == 100) {
                return 0x14;
              }
              if (param_1 == 200) {
                return 0x5dc;
              }
            }
          }
        }
        else {
          if (param_1 == 0x385) {
            return 0x7d1;
          }
          if (param_1 < 0x386) {
            if (param_1 == 0x12d) {
              return 0x5df;
            }
            if (param_1 == 900) {
              return 2000;
            }
            if (param_1 == 300) {
              return 0x5de;
            }
          }
          else {
            if (0x3e9 < param_1) {
              return 0x9c5;
            }
            if (999 < param_1) {
              return 0x9c4;
            }
            if (param_1 == 0x386) {
              return 0x7d2;
            }
          }
        }
      }
      else {
        if (param_1 == 0xc355) {
          return 0xdaf;
        }
        if (param_1 < 0xc356) {
          if (param_1 == 0x642) {
            return 0xbba;
          }
          if (param_1 < 0x643) {
            if (param_1 == 0x640) {
              return 3000;
            }
            if (0x640 < param_1) {
              return 0xbb9;
            }
            if (param_1 == 0x3ec) {
              return 0x9c7;
            }
          }
          else {
            if (param_1 == 0xc351) {
              return 0xdad;
            }
            if (param_1 < 0xc352) {
              if (param_1 == 50000) {
                return 0xdac;
              }
            }
            else {
              if (param_1 == 0xc352) {
                return 0xdae;
              }
              if (param_1 == 0xc353) {
                return 0xdb0;
              }
            }
          }
        }
        else {
          if (param_1 == 0xc35a) {
            return 0xfa3;
          }
          if (param_1 < 0xc35b) {
            if (param_1 == 0xc357) {
              return 0x15;
            }
            if (param_1 < 0xc357) {
              return 0xdb1;
            }
            if (param_1 == 0xc358) {
              return 0xd;
            }
            if (param_1 == 0xc359) {
              return 4000;
            }
          }
          else {
            if (param_1 == 0xc35c) {
              return 0xfa2;
            }
            if (param_1 < 0xc35c) {
              return 0xfa1;
            }
            if (param_1 == 52000) {
              return 0x1194;
            }
            if (param_1 == 0xcb21) {
              return 0x1195;
            }
          }
        }
      }
    }
    else {
      if (param_1 == 0xcf0c) {
        return 2;
      }
      if (param_1 < 0xcf0d) {
        if (param_1 == 0xcb2b) {
          return 0x119d;
        }
        if (param_1 < 0xcb2c) {
          if (param_1 == 0xcb26) {
            return 0x1199;
          }
          if (param_1 < 0xcb27) {
            if (param_1 == 0xcb24) {
              return 0x1198;
            }
            if (0xcb24 < param_1) {
              return 0xd;
            }
            return 0x1197;
          }
          if (param_1 == 0xcb28) {
            return 0x119b;
          }
          if (param_1 < 0xcb28) {
            return 0x119a;
          }
          if (param_1 == 0xcb29) {
            return 2;
          }
          if (param_1 == 0xcb2a) {
            return 0x119c;
          }
        }
        else {
          if (param_1 == 0xcb30) {
            return 0x11a1;
          }
          if (param_1 < 0xcb31) {
            if (param_1 == 0xcb2d) {
              return 0x119f;
            }
            if (param_1 < 0xcb2d) {
              return 0x119e;
            }
            if (param_1 == 0xcb2e) {
              return 0x11a0;
            }
            if (param_1 == 0xcb2f) {
              return 2000;
            }
          }
          else {
            if (param_1 == 0xcb32) {
              return 0x11a3;
            }
            if (param_1 < 0xcb32) {
              return 0x11a2;
            }
            if (param_1 == 0xcb33) {
              return 0x11a4;
            }
            if (param_1 == 53000) {
              return 5000;
            }
          }
        }
      }
      else {
        if (param_1 == 0xcf15) {
          return 0x1391;
        }
        if (param_1 < 0xcf16) {
          if (param_1 == 0xcf10) {
            return 0x138c;
          }
          if (param_1 < 0xcf11) {
            if (param_1 == 0xcf0e) {
              return 0x138a;
            }
            if (param_1 < 0xcf0f) {
              return 0x1389;
            }
            return 0x138b;
          }
          if (param_1 == 0xcf12) {
            return 0x138e;
          }
          if (param_1 < 0xcf12) {
            return 0x138d;
          }
          if (param_1 == 0xcf13) {
            return 0x138f;
          }
          if (param_1 == 0xcf14) {
            return 0x1390;
          }
        }
        else {
          if (param_1 == 0xcf1a) {
            return 0x1396;
          }
          if (param_1 < 0xcf1b) {
            if (param_1 == 0xcf17) {
              return 0x1393;
            }
            if (param_1 < 0xcf17) {
              return 0x1392;
            }
            if (param_1 == 0xcf18) {
              return 0x1394;
            }
            if (param_1 == 0xcf19) {
              return 0x1395;
            }
          }
          else {
            if (param_1 == 0xcf1c) {
              return 0x1398;
            }
            if (param_1 < 0xcf1c) {
              return 0x1397;
            }
            if (param_1 == 0xcf1d) {
              return 0x1399;
            }
            if (param_1 == 0xcf1e) {
              return 0x139a;
            }
          }
        }
      }
    }
  }
  else {
    if (param_1 == 0xd2fe) {
      return 0x1f5;
    }
    if (param_1 < 0xd2ff) {
      if (param_1 == 0xcf31) {
        return 0x13ad;
      }
      if (param_1 < 0xcf32) {
        if (param_1 == 0xcf28) {
          return 0x13a4;
        }
        if (param_1 < 0xcf29) {
          if (param_1 == 0xcf23) {
            return 0x139f;
          }
          if (param_1 < 0xcf24) {
            if (param_1 == 0xcf21) {
              return 0x139d;
            }
            if (param_1 < 0xcf22) {
              return 0x139c;
            }
            return 0x139e;
          }
          if (param_1 == 0xcf25) {
            return 0x13a1;
          }
          if (param_1 < 0xcf25) {
            return 0x13a0;
          }
          if (param_1 == 0xcf26) {
            return 0x13a2;
          }
          if (param_1 == 0xcf27) {
            return 0x13a3;
          }
        }
        else {
          if (param_1 == 0xcf2c) {
            return 0x13a8;
          }
          if (param_1 < 0xcf2d) {
            if (param_1 == 0xcf2a) {
              return 0x13a6;
            }
            if (param_1 < 0xcf2b) {
              return 0x13a5;
            }
            return 0x13a7;
          }
          if (param_1 == 0xcf2e) {
            return 0x13aa;
          }
          if (param_1 < 0xcf2e) {
            return 0x13a9;
          }
          if (param_1 == 0xcf2f) {
            return 0x13ab;
          }
          if (param_1 == 0xcf30) {
            return 0x13ac;
          }
        }
      }
      else {
        if (param_1 == 54000) {
          return 0x157c;
        }
        if (param_1 < 0xd2f1) {
          if (param_1 == 0xcf35) {
            return 0x13b1;
          }
          if (param_1 < 0xcf36) {
            if (param_1 == 0xcf33) {
              return 0x13af;
            }
            if (param_1 < 0xcf34) {
              return 0x13ae;
            }
            return 0x13b0;
          }
          if (param_1 == 0xcf37) {
            return 0x13b3;
          }
          if (param_1 < 0xcf37) {
            return 0x13b2;
          }
          if (param_1 == 0xcf38) {
            return 0x13b4;
          }
          if (param_1 == 0xcf39) {
            return 0x13b5;
          }
        }
        else {
          if (param_1 == 0xd2f6) {
            return 0x1581;
          }
          if (param_1 < 0xd2f7) {
            if (param_1 == 0xd2f3) {
              return 0x157e;
            }
            if (param_1 < 0xd2f4) {
              if (param_1 == 0xd2f2) {
                return 0x157d;
              }
            }
            else {
              if (param_1 == 0xd2f4) {
                return 0x157f;
              }
              if (param_1 == 0xd2f5) {
                return 0x1580;
              }
            }
          }
          else {
            if (param_1 == 0xd2f8) {
              return 0x1583;
            }
            if (param_1 < 0xd2f8) {
              return 0x1582;
            }
            if (param_1 == 0xd2fc) {
              return 0x1584;
            }
            if (param_1 == 0xd2fd) {
              return 0x1585;
            }
          }
        }
      }
    }
    else {
      if (param_1 == 0xd4ee) {
        return 0x177a;
      }
      if (0xd4ee < param_1) {
        if (param_1 != 0xd6de) {
          if (param_1 < 0xd6df) {
            if (param_1 == 0xd6d9) {
              return 0x1f7;
            }
            if (param_1 < 0xd6da) {
              if (param_1 == 0xd4f0) {
                return 0xd;
              }
              if (param_1 < 0xd4f0) {
                return 7;
              }
              if (param_1 != 55000) {
                return 0x19;
              }
            }
            else if (param_1 < 0xd6dd) {
              if (0xd6da < param_1) {
                return 500;
              }
              return 0x1f8;
            }
            return 5;
          }
          if (param_1 == 0xdac1) {
            return 1000;
          }
          if (0xdac1 < param_1) {
            if (param_1 == 0xdac3) {
              return 0x3ea;
            }
            if (param_1 < 0xdac3) {
              return 0x3e9;
            }
            if (param_1 == 0xdac4) {
              return 0x3eb;
            }
            if (param_1 != 59000) {
              return 0x19;
            }
            return 0x1965;
          }
          if (param_1 == 0xd6e0) {
            return 0x1fa;
          }
          if (param_1 < 0xd6e0) {
            return 0x1f9;
          }
          if (1 < param_1 - 0xd8cc) {
            return 0x19;
          }
        }
        return 500;
      }
      if (param_1 == 0xd4e4) {
        return 6000;
      }
      if (param_1 < 0xd4e5) {
        if (param_1 == 0xd304) {
          return 0x1588;
        }
        if (param_1 < 0xd305) {
          if (param_1 == 0xd301) {
            return 0x1586;
          }
          if (param_1 == 0xd303) {
            return 0x1587;
          }
          if (param_1 == 0xd2ff) {
            return 0x1f6;
          }
        }
        else {
          if (param_1 == 0xd306) {
            return 0x158a;
          }
          if (param_1 < 0xd306) {
            return 0x1589;
          }
          if (param_1 == 0xd307) {
            return 0x158b;
          }
          if (param_1 == 0xd308) {
            return 0x158c;
          }
        }
      }
      else {
        if (param_1 == 0xd4e9) {
          return 0x1775;
        }
        if (param_1 < 0xd4ea) {
          if (param_1 == 0xd4e6) {
            return 0x1772;
          }
          if (param_1 < 0xd4e6) {
            return 0x1771;
          }
          if (param_1 == 0xd4e7) {
            return 0x1773;
          }
          if (param_1 == 0xd4e8) {
            return 0x1774;
          }
        }
        else {
          if (param_1 == 0xd4eb) {
            return 0x1777;
          }
          if (param_1 < 0xd4eb) {
            return 0x1776;
          }
          if (param_1 == 0xd4ec) {
            return 0x1778;
          }
          if (param_1 == 0xd4ed) {
            return 0x1779;
          }
        }
      }
    }
  }
  return 0x19;
}


// 0x05412c4 (0xcc bytes)
undefined8 FUN_005412c4(int param_1,undefined4 param_2)

{
  undefined4 uVar2;
  undefined8 uVar1;
  
  if (param_1 == 0) {
    return 3;
  }
  if (*(int *)(param_1 + 0x454) != 2) {
    uVar2 = (*(code *)**(undefined4 **)(*(int *)PTR_DAT_0071b110 + 0x54))
                      (*(undefined4 *)(param_1 + 0x458),param_2);
    uVar1 = FUN_00540808(uVar2);
    return uVar1;
  }
  uVar2 = (*(code *)**(undefined4 **)(*(int *)PTR_DAT_0071b114 + 0x4c))
                    (*(undefined4 *)(param_1 + 0x45c),param_2);
  uVar1 = FUN_00540808(uVar2);
  return uVar1;
}


// 0x0541390 (0xe4 bytes)
/* WARNING: Removing unreachable block (ram,0x00541420) */

int FUN_00541390(int param_1,undefined4 *param_2)

{
  undefined *puVar1;
  undefined4 uVar2;
  int iVar3;
  GPiece<24> local_20;
  
  puVar1 = PTR_DAT_0071b114;
  if (((param_1 != 0) && (*(int *)(param_1 + 0x454) == 2)) && (param_2 != (undefined4 *)0x0)) {
    uVar2 = *(undefined4 *)(param_1 + 0x45c);
    *param_2 = 0x100;
    uVar2 = (*(code *)**(undefined4 **)(*(int *)puVar1 + 0x18))(uVar2,local_20);
    iVar3 = FUN_00540808(uVar2);
    if (iVar3 != 0) {
      return iVar3;
    }
    return 6;
  }
  return 3;
}


// 0x0541474 (0x118 bytes)
ulonglong FUN_00541474(int param_1,undefined4 param_2,undefined4 param_3)

{
  undefined *puVar1;
  undefined4 uVar3;
  uint uVar4;
  ulonglong uVar2;
  
  puVar1 = PTR_DAT_0071b110;
  if (*(int *)(param_1 + 0x454) == 2) {
    uVar3 = (*(code *)**(undefined4 **)(*(int *)PTR_DAT_0071b114 + 0x28))
                      (*(undefined4 *)(param_1 + 0x45c),param_2);
    uVar2 = FUN_00540808(uVar3);
    return uVar2;
  }
  uVar3 = (*(code *)**(undefined4 **)(*(int *)PTR_DAT_0071b110 + 0x58))
                    (*(undefined4 *)(param_1 + 0x458));
  uVar4 = FUN_00540808(uVar3);
  if (uVar4 != 0) {
    return (ulonglong)uVar4;
  }
  uVar3 = (*(code *)**(undefined4 **)(*(int *)puVar1 + 0x5c))
                    (*(undefined4 *)(param_1 + 0x458),param_3);
  uVar2 = FUN_00540808(uVar3);
  return uVar2;
}


// 0x054158c (0x180 bytes)
ulonglong FUN_0054158c(int param_1,undefined4 *param_2,undefined4 *param_3,undefined4 *param_4,
                      undefined4 *param_5)

{
  undefined4 uVar1;
  ulonglong uVar2;
  undefined4 local_50;
  undefined4 local_4c;
  undefined4 local_48;
  undefined4 local_44;
  
  uVar2 = 3;
  if (param_1 != 0) {
    if (*(int *)(param_1 + 0x454) == 2) {
      uVar1 = (*(code *)**(undefined4 **)(*(int *)PTR_DAT_0071b114 + 0x20))
                        (*(undefined4 *)(param_1 + 0x45c),&local_50,&local_4c,&local_48,&local_44);
      uVar2 = FUN_00540808(uVar1);
      if ((int)uVar2 != 0) goto LAB_00541680;
    }
    else {
      uVar1 = (*(code *)**(undefined4 **)(*(int *)PTR_DAT_0071b110 + 0x4c))
                        (*(undefined4 *)(param_1 + 0x458),&local_50,&local_4c,&local_48,&local_44);
      uVar2 = FUN_00540808(uVar1);
      if (uVar2 != 0) goto LAB_00541680;
    }
    if (param_2 != (undefined4 *)0x0) {
      *param_2 = local_50;
    }
    if (param_3 != (undefined4 *)0x0) {
      *param_3 = local_4c;
    }
    if (param_4 != (undefined4 *)0x0) {
      *param_4 = local_48;
    }
    uVar2 = 0;
    if (param_5 != (undefined4 *)0x0) {
      *param_5 = local_44;
    }
  }
LAB_00541680:
  return uVar2 & 0xffffffff;
}


// 0x054170c (0x34 bytes)
undefined4 FUN_0054170c(int param_1,uint param_2)

{
  if (param_1 != 0) {
    if (param_2 < 0x100) {
      return *(undefined4 *)(param_1 + param_2 * 4);
    }
  }
  return 0;
}


// 0x0541740 (0x240 bytes)
/* WARNING: Removing unreachable block (ram,0x00541854) */
/* WARNING: Removing unreachable block (ram,0x00541860) */
/* WARNING: Removing unreachable block (ram,0x00541928) */
/* WARNING: Removing unreachable block (ram,0x00541974) */

ulonglong FUN_00541740(int param_1,undefined4 *param_2)

{
  int iVar1;
  undefined *puVar2;
  undefined4 uVar3;
  ulonglong uVar4;
  GPiece<2> local_50;
  GPiece<22> local_4e;
  
  uVar4 = 3;
  if (param_2 != (undefined4 *)0x0) {
    *param_2 = 0;
    puVar2 = PTR_DAT_0071b114;
    if (param_1 == 0) {
      iVar1 = *(int *)(*(int *)PTR_PTR_0071b104 + 0x1088);
      do {
        if (iVar1 == 0) {
          return 0;
        }
        if (*(int *)(iVar1 + 0x45c) != 0) {
          uVar3 = (*(code *)**(undefined4 **)(*(int *)puVar2 + 0x18))
                            (*(int *)(iVar1 + 0x45c),local_50);
          uVar4 = FUN_00540808(uVar3);
          if ((int)uVar4 != 0) goto LAB_005417d8;
          uVar3 = (*(code *)**(undefined4 **)(*(int *)puVar2 + 0x14))
                            (*(undefined4 *)(iVar1 + 0x45c),local_4e);
          uVar4 = FUN_00540808(uVar3);
          if (uVar4 != 0) goto LAB_005417d8;
        }
        iVar1 = *(int *)(iVar1 + 0x534);
      } while( true );
    }
    uVar3 = (*(code *)**(undefined4 **)(*(int *)PTR_DAT_0071b114 + 0x18))
                      (*(undefined4 *)(param_1 + 0x45c),local_50);
    uVar4 = FUN_00540808(uVar3);
    if (uVar4 == 0) {
      uVar3 = (*(code *)**(undefined4 **)(*(int *)puVar2 + 0x14))
                        (*(undefined4 *)(param_1 + 0x45c),local_4e);
      uVar4 = FUN_00540808(uVar3);
      if (uVar4 == 0) {
        return 0;
      }
    }
  }
LAB_005417d8:
  return uVar4 & 0xffffffff;
}


// 0x0541980 (0xc4 bytes)
undefined8 FUN_00541980(int param_1,uint param_2,undefined4 *param_3)

{
  int iVar1;
  
  if ((param_1 != 0) && (param_2 < 0x100)) {
    if (param_3 != (undefined4 *)0x0) {
      *param_3 = 0xffffff;
      iVar1 = FUN_0054170c(param_1,param_2);
      if (iVar1 != 0) {
        if (*(int *)(iVar1 + 0x20) != 0) {
          *param_3 = 1;
          return 0x19;
        }
        *param_3 = 0;
        return 0x19;
      }
    }
  }
  return 3;
}


// 0x0541a44 (0x8 bytes)
undefined1 FUN_00541a44(undefined1 param_1)

{
  return param_1;
}


// 0x0541a4c (0x74 bytes)
undefined8 FUN_00541a4c(byte param_1,ushort *param_2)

{
  undefined8 uVar1;
  
  uVar1 = 3;
  if (param_2 != (ushort *)0x0) {
    *param_2 = 0;
    if ((param_1 & 0x10) != 0) {
      *param_2 = 0x2000;
    }
    if ((param_1 & 0x40) != 0) {
      *param_2 = *param_2 | 0x4000;
    }
    uVar1 = 0;
    if ((char)param_1 < '\0') {
      *param_2 = *param_2 | 0x1000;
    }
  }
  return uVar1;
}


// 0x0541ac0 (0x4bc bytes)
ulonglong FUN_00541ac0(undefined8 param_1,int param_2,undefined4 *param_3,uint param_4,
                      undefined4 param_5,int param_6)

{
  uint uVar1;
  int iVar2;
  undefined *puVar3;
  ulonglong uVar4;
  uint uVar5;
  undefined4 uVar6;
  undefined2 uVar7;
  undefined4 *puVar8;
  GPiece<2> local_80;
  GPiece<6> local_7e;
  GPiece<48> auStack_78;
  
  uVar4 = FUN_00541a4c(param_1,local_80);
  *param_3 = (int)uVar4;
  puVar3 = PTR_DAT_0071b114;
  if (uVar4 != 0) {
    return uVar4;
  }
  uVar5 = (*(code *)**(undefined4 **)(*(int *)PTR_DAT_0071b114 + 0x14))
                    (*(undefined4 *)(param_2 + 0x45c),local_7e);
  uVar1 = param_3[1];
  if (uVar1 == 0xffff) {
    uVar5 = (*(code *)**(undefined4 **)(*(int *)puVar3 + 0x44))
                      (*(undefined4 *)(param_2 + 0x45c),0xfffd,0,param_4 & 0xff,param_5,param_6);
    if ((uVar5 != 0x12d) ||
       (uVar5 = (*(code *)**(undefined4 **)(*(int *)puVar3 + 0xa0))
                          (*(undefined4 *)(param_2 + 0x45c),0xfffd,param_4,
                           *(undefined4 *)(param_6 + 0x40)), uVar5 != 0)) goto LAB_00541c84;
    uVar6 = *(undefined4 *)(param_2 + 0x45c);
    uVar7 = 0xfffd;
    puVar8 = *(undefined4 **)(*(int *)puVar3 + 0x44);
  }
  else {
    if (uVar1 == 0x101) {
      return 5;
    }
    if (uVar1 == 0x100) {
      iVar2 = param_3[0xb];
      if ((*(int *)(param_2 + 0x44c) < iVar2) || (iVar2 <= (int)param_3[10])) {
        return 2;
      }
      FUN_00540600(auStack_78,param_3 + 2,iVar2 - param_3[10]);
      uVar5 = (*(code *)**(undefined4 **)(*(int *)puVar3 + 0x48))
                        (*(undefined4 *)(param_2 + 0x45c),*(undefined2 *)((int)param_3 + 0x2a),
                         *(undefined2 *)((int)param_3 + 0x2e),auStack_78,0,param_4 & 0xff,param_5,
                         param_6);
      if ((uVar5 == 0x12d) &&
         (uVar5 = (*(code *)**(undefined4 **)(*(int *)puVar3 + 0xa0))
                            (*(undefined4 *)(param_2 + 0x45c),*(undefined2 *)((int)param_3 + 0x2e),
                             param_4,*(undefined4 *)(param_6 + 0x40)), uVar5 == 0)) {
        uVar5 = (*(code *)**(undefined4 **)(*(int *)puVar3 + 0x48))
                          (*(undefined4 *)(param_2 + 0x45c),*(undefined2 *)((int)param_3 + 0x2a),
                           *(undefined2 *)((int)param_3 + 0x2e),auStack_78,0,param_4 & 0xff,param_5,
                           param_6);
      }
      goto LAB_00541c84;
    }
    if (uVar1 == 0xffff) goto LAB_00541c84;
    if (uVar1 == 0xffffffff) {
      uVar5 = (*(code *)**(undefined4 **)(*(int *)puVar3 + 0x44))
                        (*(undefined4 *)(param_2 + 0x45c),0xfffe,0,param_4 & 0xff,param_5,param_6);
      if ((uVar5 != 0x12d) ||
         (uVar5 = (*(code *)**(undefined4 **)(*(int *)puVar3 + 0xa0))
                            (*(undefined4 *)(param_2 + 0x45c),0xfffe,param_4,
                             *(undefined4 *)(param_6 + 0x40)), uVar5 != 0)) goto LAB_00541c84;
      uVar6 = *(undefined4 *)(param_2 + 0x45c);
      uVar7 = 0xfffe;
      puVar8 = *(undefined4 **)(*(int *)puVar3 + 0x44);
    }
    else {
      uVar5 = (*(code *)**(undefined4 **)(*(int *)puVar3 + 0x44))
                        (*(undefined4 *)(param_2 + 0x45c),uVar1 & 0xffff,0,param_4 & 0xff,param_5,
                         param_6);
      if ((uVar5 != 0x12d) ||
         (uVar5 = (*(code *)**(undefined4 **)(*(int *)puVar3 + 0xa0))
                            (*(undefined4 *)(param_2 + 0x45c),*(undefined2 *)((int)param_3 + 6),
                             param_4,*(undefined4 *)(param_6 + 0x40)), uVar5 != 0))
      goto LAB_00541c84;
      uVar6 = *(undefined4 *)(param_2 + 0x45c);
      uVar7 = *(undefined2 *)((int)param_3 + 6);
      puVar8 = *(undefined4 **)(*(int *)puVar3 + 0x44);
    }
  }
  uVar5 = (*(code *)*puVar8)(uVar6,uVar7,0,param_4 & 0xff,param_5,param_6);
LAB_00541c84:
  uVar6 = FUN_00540808((ulonglong)uVar5);
  *param_3 = uVar6;
  return (ulonglong)uVar5;
}


// 0x0541f7c (0x3c bytes)
void FUN_00541f7c(uint param_1,int param_2,int param_3)

{
  if (param_3 == 0) {
    return;
  }
  if (*(int *)(param_3 + 0x454) != 2) {
    return;
  }
  if (param_2 != 0) {
    *(uint *)(param_3 + 0x43c) = param_1 | *(uint *)(param_3 + 0x43c);
    return;
  }
  *(uint *)(param_3 + 0x43c) = *(uint *)(param_3 + 0x43c) & ~param_1;
  return;
}


// 0x0541fb8 (0x3c bytes)
undefined4 FUN_00541fb8(void)

{
  int iVar1;
  
  if ((*(int *)PTR_DAT_0071b118 != 0) &&
     (iVar1 = *(int *)(*(int *)PTR_DAT_0071b118 + 0x138), iVar1 != 0)) {
    return *(undefined4 *)(iVar1 + 0x444);
  }
  return 0xffffffff;
}


// 0x0541ff4 (0x98 bytes)
void FUN_00541ff4(undefined4 param_1,undefined4 param_2,int param_3)

{
  int iVar1;
  
  iVar1 = *(int *)PTR_DAT_0071b10c;
  if (iVar1 != 0) {
    if (param_3 == 0) {
      (*(code *)**(undefined4 **)(iVar1 + 100))(param_1,param_2);
      return;
    }
    (*(code *)**(undefined4 **)(iVar1 + 0x3c))(param_1,param_2);
  }
  return;
}


// 0x054208c (0x54 bytes)
void FUN_0054208c(undefined4 param_1,undefined4 param_2)

{
  if (*(int *)PTR_DAT_0071b10c != 0) {
    (*(code *)**(undefined4 **)(*(int *)PTR_DAT_0071b10c + 0x3c))(param_1,param_2);
  }
  return;
}


// 0x05420e0 (0x138 bytes)
void FUN_005420e0(ulonglong param_1,int param_2,int param_3)

{
  undefined *puVar1;
  int iVar2;
  uint uVar3;
  
  puVar1 = PTR_DAT_0071b118;
  if (*(int *)(param_3 + 0x454) == 2) {
    iVar2 = *(int *)PTR_DAT_0071b118;
    if (((iVar2 != 0) && (param_2 != 0)) && (*(int *)(iVar2 + 0x124) != 0)) {
      (*(code *)**(undefined4 **)(iVar2 + 0xe4))(param_3,(int)(param_1 & 0xffff));
      iVar2 = *(int *)puVar1;
      if (*(int *)(iVar2 + 0x100) != 0) {
        uVar3 = 0;
        do {
          iVar2 = (*(code *)**(undefined4 **)(iVar2 + 0x24))(uVar3);
          if ((iVar2 != 0) &&
             ((*(int *)(iVar2 + 0x10) == *(int *)(param_3 + 0x404) ||
              (*(int *)(iVar2 + 0xc) == *(int *)(param_3 + 0x404))))) {
            *(undefined4 *)((int)((param_1 & 0xffff) << 2) + *(int *)(iVar2 + 0x44)) = 0;
          }
          iVar2 = *(int *)puVar1;
          uVar3 = uVar3 + 1;
        } while (uVar3 < *(uint *)(iVar2 + 0x100));
      }
    }
  }
  return;
}


// 0x0542218 (0x74 bytes)
void FUN_00542218(int param_1)

{
  GPiece<32> local_20;
  
  if (*(int *)(param_1 + 0x4d8) != 0) {
    (*(code *)**(undefined4 **)(param_1 + 0x4d8))(local_20);
  }
  return;
}


// 0x054228c (0x150 bytes)
int FUN_0054228c(int param_1,undefined2 param_2,undefined4 *param_3,undefined4 *param_4,
                undefined4 *param_5,undefined4 *param_6)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 local_50;
  undefined4 local_4c;
  undefined4 local_48;
  undefined4 local_44;
  
  iVar2 = 0xe;
  if (*(int *)(param_1 + 0x454) == 2) {
    uVar1 = (*(code *)**(undefined4 **)(*(int *)PTR_DAT_0071b114 + 0x24))
                      (*(undefined4 *)(param_1 + 0x45c),param_2,&local_50,&local_4c,&local_48,
                       &local_44);
    iVar2 = FUN_00540808(uVar1);
    if (iVar2 == 0) {
      if (param_3 != (undefined4 *)0x0) {
        *param_3 = local_50;
      }
      if (param_5 != (undefined4 *)0x0) {
        *param_5 = local_48;
      }
      if (param_4 != (undefined4 *)0x0) {
        *param_4 = local_4c;
      }
      if (param_6 != (undefined4 *)0x0) {
        *param_6 = local_44;
        return 0;
      }
    }
  }
  return iVar2;
}


// 0x05423dc (0x9c bytes)
undefined8 FUN_005423dc(int param_1,undefined4 param_2)

{
  undefined4 uVar1;
  undefined8 uVar2;
  
  uVar2 = 3;
  if (param_1 != 0) {
    uVar2 = 6000;
    if (*(int *)(param_1 + 0x45c) != 0) {
      uVar2 = 0xf;
      if (*(int *)PTR_DAT_0071b114 != 0) {
        uVar1 = (*(code *)**(undefined4 **)(*(int *)PTR_DAT_0071b114 + 0xa4))
                          (*(int *)(param_1 + 0x45c),param_2);
        uVar2 = FUN_00540808(uVar1);
        return uVar2;
      }
    }
  }
  return uVar2;
}


// 0x0542478 (0xa8 bytes)
undefined4 FUN_00542478(int param_1,undefined4 *param_2)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 local_20 [6];
  
  uVar2 = 3;
  if ((param_1 != 0) && (param_2 != (undefined4 *)0x0)) {
    iVar1 = *(int *)(param_1 + 0x45c);
    uVar2 = 6000;
    *param_2 = 0;
    if (iVar1 != 0) {
      uVar2 = 0xf;
      if (*(int *)PTR_DAT_0071b114 != 0) {
        uVar2 = (*(code *)**(undefined4 **)(*(int *)PTR_DAT_0071b114 + 0xa8))(iVar1,local_20);
        *param_2 = local_20[0];
        uVar2 = FUN_00540808(uVar2);
      }
    }
  }
  return uVar2;
}


// 0x0542520 (0xe0 bytes)
undefined4 FUN_00542520(int param_1,int *param_2,int param_3,int param_4)

{
  undefined4 uVar1;
  GPiece<16> local_10;
  
  if ((param_1 != 0) && (param_3 != 0)) {
    if ((param_4 != 0) && ((param_2 != (int *)0x0 && (*param_2 != 0)))) {
      uVar1 = 0xf;
      if ((ushort)(*(short *)(param_2 + 1) - 1U) < 0x28) {
        if (*(int *)PTR_DAT_0071b114 != 0) {
          uVar1 = (*(code *)**(undefined4 **)(*(int *)PTR_DAT_0071b114 + 0xac))
                            (*(undefined4 *)(param_1 + 0x45c),local_10,param_3,param_4);
          uVar1 = FUN_00540808(uVar1);
        }
        return uVar1;
      }
    }
  }
  return 3;
}


// 0x0542600 (0x8c bytes)
undefined8 FUN_00542600(undefined4 *param_1,undefined4 param_2,uint param_3)

{
  int iVar1;
  undefined8 uVar2;
  
  uVar2 = 3;
  if (param_1 != (undefined4 *)0x0) {
    *param_1 = 0;
    uVar2 = 10;
    if (param_3 < 0x100) {
      iVar1 = FUN_0054170c(param_2,param_3);
      uVar2 = 0;
      if (iVar1 != 0) {
        *param_1 = *(undefined4 *)(iVar1 + 0xc);
        return 0;
      }
    }
  }
  return uVar2;
}


// 0x054268c (0x48 bytes)
void FUN_0054268c(int param_1,int param_2,undefined4 param_3)

{
  uint uVar1;
  
  if (param_1 == 0) {
    return;
  }
  if (param_2 == 0) {
    return;
  }
  uVar1 = *(uint *)(param_1 + 0x530);
  if (3 < uVar1) {
    return;
  }
  *(undefined4 *)(param_1 + uVar1 * 4 + 0x520) = param_3;
  *(int *)(param_1 + uVar1 * 4 + 0x510) = param_2;
  *(uint *)(param_1 + 0x530) = uVar1 + 1;
  return;
}


// 0x05426d4 (0x80 bytes)
undefined8 FUN_005426d4(int param_1)

{
  undefined4 uVar2;
  undefined8 uVar1;
  
  if ((param_1 != 0) && (*(int *)(param_1 + 0x454) == 2)) {
    uVar2 = (*(code *)**(undefined4 **)(*(int *)PTR_DAT_0071b114 + 0xb8))
                      (*(undefined4 *)(param_1 + 0x45c));
    uVar1 = FUN_00540808(uVar2);
    return uVar1;
  }
  return 3;
}


// 0x0542754 (0x7c bytes)
undefined8 FUN_00542754(int param_1,uint param_2)

{
  undefined8 uVar1;
  
  uVar1 = 4;
  if (param_2 != 4) {
    if (param_2 < 5) {
      if (param_2 == 2) {
        return 0xd;
      }
    }
    else {
      if (param_2 == 5) {
        return 0xf;
      }
      if (param_2 == 6) {
        return 0xc;
      }
    }
    if ((param_1 == 0) || (uVar1 = 1, param_1 == 0xd4e5)) {
      return 0;
    }
  }
  return uVar1;
}


// 0x05427d0 (0x8c bytes)
undefined8 FUN_005427d0(int param_1,undefined4 param_2,undefined4 param_3)

{
  undefined *puVar1;
  undefined4 uVar3;
  undefined8 uVar2;
  
  puVar1 = PTR_DAT_0071b114;
  if ((param_1 != 0) && (*(int *)(param_1 + 0x454) == 2)) {
    *(undefined4 *)(param_1 + 0x508) = param_2;
    *(undefined4 *)(param_1 + 0x50c) = param_3;
    uVar3 = (*(code *)**(undefined4 **)(*(int *)puVar1 + 0xbc))
                      (*(undefined4 *)(param_1 + 0x45c),PTR_PTR_0071b11c);
    uVar2 = FUN_00540808(uVar3);
    return uVar2;
  }
  return 3;
}


// 0x054285c (0x5c bytes)
undefined8 FUN_0054285c(void)

{
  int iVar1;
  int iVar2;
  
  iVar1 = *(int *)(*(int *)PTR_PTR_0071b104 + 0x1088);
  if (iVar1 != 0) {
    iVar2 = *(int *)(iVar1 + 0x418);
    while( true ) {
      if (iVar2 != 0) {
        return 1;
      }
      iVar1 = *(int *)(iVar1 + 0x534);
      if (iVar1 == 0) break;
      iVar2 = *(int *)(iVar1 + 0x418);
    }
  }
  return 0;
}


// 0x05428b8 (0x40 bytes)
int FUN_005428b8(void)

{
  int iVar1;
  int *piVar2;
  longlong lVar3;
  
  iVar1 = 1;
  lVar3 = 0x10;
  piVar2 = (int *)(*(int *)PTR_PTR_0071b104 + 0x1098);
  do {
    if (*piVar2 == 0) {
      return iVar1;
    }
    iVar1 = iVar1 + 1;
    lVar3 = lVar3 + -1;
    piVar2 = piVar2 + 1;
  } while (lVar3 != 0);
  return -1;
}


// 0x05428f8 (0x34 bytes)
undefined4 FUN_005428f8(int param_1)

{
  undefined4 uVar1;
  
  uVar1 = 0;
  if (param_1 - 1U < 0x10) {
    uVar1 = *(undefined4 *)(*(int *)PTR_PTR_0071b104 + param_1 * 4 + 0x1094);
  }
  return uVar1;
}


// 0x054292c (0x44 bytes)
int FUN_0054292c(int param_1)

{
  int iVar1;
  int *piVar2;
  longlong lVar3;
  
  iVar1 = 1;
  lVar3 = 0x10;
  piVar2 = (int *)(*(int *)PTR_PTR_0071b104 + 0x1098);
  do {
    if (*piVar2 == param_1) {
      return iVar1;
    }
    iVar1 = iVar1 + 1;
    lVar3 = lVar3 + -1;
    piVar2 = piVar2 + 1;
  } while (lVar3 != 0);
  return -1;
}


// 0x0542970 (0x44 bytes)
undefined4 FUN_00542970(int param_1,int param_2)

{
  undefined4 uVar1;
  
  uVar1 = 0xffffffff;
  if (param_2 - 1U < 0x10) {
    uVar1 = 0;
    *(int *)(*(int *)PTR_PTR_0071b104 + param_2 * 4 + 0x1094) = param_1;
    if (param_1 != 0) {
      *(int *)(param_1 + 0x444) = param_2;
    }
  }
  return uVar1;
}


// 0x05429b4 (0x28 bytes)
void FUN_005429b4(void)

{
  undefined4 *puVar1;
  longlong lVar2;
  
  lVar2 = 0x10;
  puVar1 = (undefined4 *)(*(int *)PTR_PTR_0071b104 + 0x1098);
  do {
    *puVar1 = 0;
    puVar1 = puVar1 + 1;
    lVar2 = lVar2 + -1;
  } while (lVar2 != 0);
  return;
}


// 0x05429dc (0x144 bytes)
void FUN_005429dc(undefined2 param_1,int param_2)

{
  undefined *puVar1;
  int iVar2;
  GPiece<24> local_30;
  
  puVar1 = PTR_DAT_0071b120;
  if (param_2 != 0) {
    if (*(int *)(param_2 + 0x454) == 2) {
      *(uint *)(param_2 + 0x43c) = *(uint *)(param_2 + 0x43c) & 0xfffffffe;
      if (*(int *)(param_2 + 0x4e8) != 0) {
        (*(code *)**(undefined4 **)(param_2 + 0x4e8))(local_30);
        return;
      }
    }
    else if (*(int *)PTR_DAT_0071b120 != 0) {
      iVar2 = (*(code *)**(undefined4 **)(*(int *)PTR_DAT_0071b120 + 0x38))(param_2);
      if (iVar2 != 0) {
        (*(code *)**(undefined4 **)(*(int *)puVar1 + 0x54))(param_2,param_1);
        return;
      }
    }
  }
  return;
}


// 0x0542b20 (0x17c bytes)
void FUN_00542b20(undefined4 param_1,undefined4 param_2,int param_3)

{
  undefined4 *puVar1;
  int iVar2;
  uint uVar3;
  GPiece<8> local_50;
  GPiece<24> local_48;
  
  if ((param_3 != 0) && (*(int *)(param_3 + 0x454) == 2)) {
    if (*(int *)(param_3 + 0x530) != 0) {
      iVar2 = param_3 + 0x520;
      uVar3 = 0;
      do {
        puVar1 = (undefined4 *)(iVar2 + -0x10);
        uVar3 = uVar3 + 1;
        iVar2 = iVar2 + 4;
        (**(code **)*puVar1)(local_50);
      } while (uVar3 < *(uint *)(param_3 + 0x530));
    }
    FUN_00542970(0,*(undefined4 *)(param_3 + 0x444));
    if (*(int *)(param_3 + 0x4b8) != 0) {
      *(undefined4 *)(param_3 + 0x440) = 4;
      FUN_00542754(0,param_2);
      FUN_00540808(param_1);
      (*(code *)**(undefined4 **)(param_3 + 0x4b8))(local_48);
      return;
    }
  }
  return;
}


// 0x0542c9c (0x58 bytes)
undefined8 FUN_00542c9c(undefined4 *param_1)

{
  undefined8 uVar1;
  
  uVar1 = 3;
  if (param_1 != (undefined4 *)0x0) {
    memset(param_1,0,0x78);
    uVar1 = 0;
    *param_1 = 1;
  }
  return uVar1;
}


// 0x0542cf4 (0xe0 bytes)
void FUN_00542cf4(int param_1,ulonglong param_2)

{
  undefined4 *puVar1;
  uint uVar2;
  int iVar3;
  GPiece<40> local_50;
  
  if (*(int *)(param_1 + 0x530) != 0) {
    iVar3 = param_1 + 0x520;
    uVar2 = 0;
    do {
      puVar1 = (undefined4 *)(iVar3 + -0x10);
      uVar2 = uVar2 + 1;
      iVar3 = iVar3 + 4;
      (**(code **)*puVar1)(local_50);
    } while (uVar2 < *(uint *)(param_1 + 0x530));
  }
  FUN_00542970(0,*(undefined4 *)(param_1 + 0x444));
  if ((param_2 & 0xffffffff) < 8) {
                    /* WARNING: Could not recover jumptable at 0x00542dac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)(PTR_DAT_0071b124 + *(int *)(PTR_DAT_0071b124 + (int)(param_2 << 2))))();
    return;
  }
  return;
}


// 0x0542e94 (0x28c bytes)
undefined4 FUN_00542e94(int param_1)

{
  undefined *puVar1;
  int iVar2;
  undefined4 uVar3;
  GPiece<12> local_f0;
  GPiece<100> local_e4;
  
  puVar1 = PTR_DAT_0071b114;
  if ((*(int *)PTR_DAT_0071b10c == 0) || (*(int *)PTR_DAT_0071b114 == 0)) {
    return 2;
  }
  if (*(int *)(param_1 + 0x45c) == 0) {
    memset(local_e4,0,0x58);
    iVar2 = (**(code **)**(undefined4 **)puVar1)(local_e4,param_1 + 0x45c);
    if (iVar2 != 0) {
      (*(code *)**(undefined4 **)(*(int *)puVar1 + 4))(*(undefined4 *)(param_1 + 0x45c));
      *(undefined4 *)(param_1 + 0x45c) = 0;
      uVar3 = FUN_00540808(iVar2);
      return uVar3;
    }
    if (*(int *)(param_1 + 0x408) != 0) {
      (*(code *)**(undefined4 **)(*(int *)puVar1 + 0xb0))(*(undefined4 *)(param_1 + 0x45c),local_f0)
      ;
      return 0;
    }
  }
  return 0;
}


// 0x0543120 (0x16c bytes)
int FUN_00543120(void)

{
  undefined *puVar1;
  undefined4 uVar2;
  int iVar3;
  GPiece<104> local_70;
  
  puVar1 = PTR_DAT_0071b150;
  iVar3 = 0;
  if ((*(int *)PTR_DAT_0071b150 == 0) && (*(int *)PTR_DAT_0071b10c != 0)) {
    uVar2 = (*(code *)**(undefined4 **)(*(int *)PTR_DAT_0071b10c + 0x74))
                      (local_70,*(int *)PTR_PTR_0071b104 + 8);
    iVar3 = FUN_00540808(uVar2);
    if (iVar3 == 0) {
      *(undefined4 *)puVar1 = 1;
    }
  }
  return iVar3;
}


// 0x054328c (0x15c bytes)
ulonglong FUN_0054328c(undefined4 *param_1,int param_2)

{
  ulonglong uVar1;
  ulonglong uVar2;
  GPiece<24> local_40;
  
  uVar2 = 3;
  if (param_1 != (undefined4 *)0x0) {
    param_1[2] = 0;
    *param_1 = 0;
    param_1[1] = 0;
    if (param_2 != 0) {
      uVar2 = FUN_00540508(param_1,param_2);
      if ((int)uVar2 == 0) {
        uVar1 = FUN_0054058c(param_1 + 1,param_2);
        if (uVar1 != 0) {
          return uVar1 & 0xffffffff;
        }
        if (*(int *)(param_2 + 0x454) != 2) {
          param_1[2] = param_1[1] + *(int *)(param_2 + 0x448);
          return uVar2 & 0xffffffff;
        }
        (*(code *)**(undefined4 **)(*(int *)PTR_DAT_0071b114 + 0x5c))
                  (*(undefined4 *)(param_2 + 0x45c),local_40);
        param_1[2] = param_1[1];
      }
    }
  }
  return uVar2 & 0xffffffff;
}


// 0x05433e8 (0x58 bytes)
void FUN_005433e8(void)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)FUN_0054170c();
  if (puVar1 != (undefined4 *)0x0) {
    puVar1[10] = 0;
    *puVar1 = 0;
    puVar1[1] = 0;
    puVar1[2] = 0;
    puVar1[3] = 0;
    puVar1[4] = 0;
    puVar1[5] = 0;
    puVar1[6] = 0;
    puVar1[7] = 0;
    puVar1[8] = 0;
    puVar1[9] = 0;
  }
  return;
}


// 0x0543440 (0xc8 bytes)
undefined8 FUN_00543440(int param_1,undefined2 param_2,undefined8 param_3)

{
  undefined4 uVar2;
  undefined8 uVar1;
  
  memset(param_3,0,0xe4);
  if ((param_1 != 0) && (*(int *)(param_1 + 0x454) == 2)) {
    uVar2 = (*(code *)**(undefined4 **)(*(int *)PTR_DAT_0071b114 + 0xc))
                      (*(undefined4 *)(param_1 + 0x45c),param_2,param_3);
    uVar1 = FUN_00540808(uVar2);
    return uVar1;
  }
  return 5;
}


// 0x0543508 (0x1b0 bytes)
/* WARNING: Removing unreachable block (ram,0x005436ac) */
/* WARNING: Removing unreachable block (ram,0x0054363c) */
/* WARNING: Removing unreachable block (ram,0x00543644) */
/* WARNING: Removing unreachable block (ram,0x0054364c) */
/* WARNING: Removing unreachable block (ram,0x005436a4) */
/* WARNING: Removing unreachable block (ram,0x00543678) */

void FUN_00543508(undefined8 param_1,undefined8 param_2,undefined4 *param_3,undefined4 *param_4,
                 int param_5)

{
  GPiece<56> local_60;
  
  if (*(int *)(param_5 + 0x508) != 0) {
    (*(code *)**(undefined4 **)(param_5 + 0x508))(local_60);
    *param_3 = 1;
    *param_4 = 0;
  }
  return;
}


// 0x05436b8 (0xfc bytes)
int FUN_005436b8(int param_1,undefined4 *param_2)

{
  undefined *puVar1;
  undefined4 uVar2;
  int iVar3;
  undefined2 local_20 [2];
  undefined4 local_1c;
  undefined4 local_18;
  
  puVar1 = PTR_DAT_0071b114;
  iVar3 = 3;
  if ((param_1 != 0) && (param_2 != (undefined4 *)0x0)) {
    iVar3 = 0xf;
    param_2[2] = 0;
    *param_2 = 0;
    param_2[1] = 0;
    if (*(int *)puVar1 != 0) {
      if (*(int *)(param_1 + 0x45c) == 0) {
        *param_2 = *(undefined4 *)(param_1 + 0x408);
        param_2[1] = *(undefined4 *)(param_1 + 0x40c);
        param_2[2] = *(undefined4 *)(param_1 + 0x410);
        return 0;
      }
      uVar2 = (*(code *)**(undefined4 **)(*(int *)puVar1 + 0xb4))
                        (*(int *)(param_1 + 0x45c),local_20);
      iVar3 = FUN_00540808(uVar2);
      if (iVar3 == 0) {
        *(undefined2 *)(param_2 + 1) = local_20[0];
        *param_2 = local_18;
        param_2[2] = local_1c;
      }
    }
  }
  return iVar3;
}


// 0x05437b4 (0x84 bytes)
undefined8 FUN_005437b4(int param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  
  uVar4 = 3;
  if (((param_1 != 0) && (param_2 != (undefined4 *)0x0)) &&
     (uVar4 = 5, *(int *)(param_1 + 0x454) != 2)) {
    uVar4 = 0;
    uVar1 = *(undefined4 *)(param_1 + 0x480);
    uVar2 = *(undefined4 *)(param_1 + 0x484);
    uVar3 = *(undefined4 *)(param_1 + 0x488);
    *param_2 = *(undefined4 *)(param_1 + 0x47c);
    param_2[1] = uVar1;
    param_2[2] = uVar2;
    param_2[3] = uVar3;
    uVar1 = *(undefined4 *)(param_1 + 0x490);
    uVar2 = *(undefined4 *)(param_1 + 0x494);
    uVar3 = *(undefined4 *)(param_1 + 0x498);
    param_2[4] = *(undefined4 *)(param_1 + 0x48c);
    param_2[5] = uVar1;
    param_2[6] = uVar2;
    param_2[7] = uVar3;
    uVar1 = *(undefined4 *)(param_1 + 0x49c);
    param_2[9] = *(undefined4 *)(param_1 + 0x4a0);
    param_2[8] = uVar1;
  }
  return uVar4;
}


// 0x0543838 (0x364 bytes)
int FUN_00543838(int param_1,undefined4 param_2,byte *param_3)

{
  bool bVar1;
  byte bVar2;
  int *piVar3;
  size_t __n;
  undefined4 uVar4;
  undefined4 *puVar5;
  void *__src;
  int iVar6;
  int iVar7;
  undefined *__dest;
  int iVar8;
  int iVar9;
  GPiece<32> auStack_70;
  
  iVar6 = *(int *)(param_3 + 4);
  if (iVar6 == 0) {
    iVar6 = 0;
LAB_005439d0:
    iVar6 = FUN_00541ac0(*param_3,iVar6,*(undefined4 *)(param_3 + 8),*(undefined4 *)(param_3 + 0xc),
                         param_2,param_1);
    return iVar6;
  }
  if (*(int *)(iVar6 + 0x454) == 2) goto LAB_005439d0;
  piVar3 = *(int **)(param_3 + 8);
  bVar2 = *param_3;
  iVar7 = piVar3[1];
  if (*(uint *)(param_1 + 0x40) == 0) {
    return 3;
  }
  if (0x578 < *(uint *)(param_1 + 0x40)) {
    return 0x1a;
  }
  iVar8 = *(int *)(param_1 + 0x44) + -1;
  *piVar3 = 0;
  if (-1 < iVar8) {
    __dest = PTR_DAT_0071b150 + 8;
    do {
      while( true ) {
        iVar9 = param_1 + iVar8 * 8;
        __src = *(void **)(param_1 + iVar8 * 8);
        if ((__src != (void *)0x0) && (__n = *(size_t *)(iVar9 + 4), __n != 0)) break;
        bVar1 = iVar8 == 0;
        iVar8 = iVar8 + -1;
        if (bVar1) goto LAB_00543980;
      }
      memcpy(__dest,__src,__n);
      bVar1 = iVar8 != 0;
      iVar8 = iVar8 + -1;
      __dest = __dest + *(int *)(iVar9 + 4);
    } while (bVar1);
  }
LAB_00543980:
  iVar8 = piVar3[1];
  if (iVar8 == 0x100) {
    iVar7 = piVar3[0xb];
    if ((*(int *)(iVar6 + 0x44c) < iVar7) || (iVar7 <= piVar3[10])) {
      return 2;
    }
    FUN_00540600(auStack_70,piVar3 + 2,iVar7 - piVar3[10]);
    iVar7 = piVar3[0xb];
    uVar4 = *(undefined4 *)(iVar6 + 0x458);
    puVar5 = *(undefined4 **)(*(int *)PTR_DAT_0071b110 + 0x2c);
LAB_00543b0c:
    iVar6 = (*(code *)*puVar5)(uVar4,piVar3[10],iVar7 + -1,auStack_70,bVar2,
                               ZEXT48(PTR_DAT_0071b150) + 8,*(undefined4 *)(param_1 + 0x40),
                               bVar2 & 1);
  }
  else {
    if (iVar8 == 0x101) {
      if (piVar3[0xb] <= piVar3[10]) {
        return 2;
      }
      FUN_00540600(auStack_70,piVar3 + 2,piVar3[0xb] - piVar3[10]);
      iVar7 = piVar3[0xb];
      uVar4 = *(undefined4 *)(iVar6 + 0x458);
      puVar5 = *(undefined4 **)(*(int *)PTR_DAT_0071b110 + 0x34);
      goto LAB_00543b0c;
    }
    if (iVar8 == -1) {
      iVar9 = 0xfffe;
    }
    else {
      iVar9 = iVar8;
      if ((iVar8 != 0xffff) && (iVar9 = iVar7, *(int *)(iVar6 + 0x404) == iVar8)) {
        iVar6 = *piVar3;
        goto LAB_00543a8c;
      }
    }
    iVar6 = (*(code *)**(undefined4 **)(*(int *)PTR_DAT_0071b110 + 0x24))
                      (*(undefined4 *)(iVar6 + 0x458),iVar9,bVar2,ZEXT48(PTR_DAT_0071b150) + 8,
                       *(undefined2 *)(param_1 + 0x42),bVar2 & 1);
  }
  iVar7 = FUN_00540808(iVar6);
  *piVar3 = iVar7;
LAB_00543a8c:
  if (iVar6 == 0) {
    return 0;
  }
  return iVar6;
}


// 0x0543b9c (0x4a4 bytes)
ulonglong FUN_00543b9c(int *param_1)

{
  uint uVar1;
  uint *puVar2;
  uint *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  uint uVar6;
  int iVar7;
  uint uVar9;
  undefined4 uVar10;
  ulonglong uVar8;
  int iVar11;
  uint uVar12;
  uint *puVar13;
  uint local_80;
  undefined4 local_7c;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  uint local_50;
  uint auStack_4c [2];
  uint local_44;
  uint local_40;
  
  puVar4 = PTR_PTR_0071b104;
  if (param_1 == (int *)0x0) {
    return 3;
  }
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  puVar5 = PTR_DAT_0071b10c;
  if (*(int *)(*(int *)puVar4 + 8) == 0) {
    return 3;
  }
  uVar9 = (*(code *)**(undefined4 **)(*(int *)PTR_DAT_0071b10c + 0xcc))
                    (*(int *)(*(int *)puVar4 + 8));
  if (uVar9 == 3) {
    param_1[1] = 2;
  }
  else if (uVar9 < 4) {
    if (uVar9 == 0) {
      param_1[1] = 5;
    }
    else {
LAB_00543c58:
      param_1[1] = 4;
    }
  }
  else if (uVar9 == 0xd6da) {
    param_1[1] = 0;
  }
  else {
    if (uVar9 != 0xd6dd) goto LAB_00543c58;
    param_1[1] = 3;
  }
  uStack_68 = 0;
  uStack_60 = 0;
  uStack_58 = 0;
  uVar10 = (*(code *)**(undefined4 **)(*(int *)puVar5 + 0x9c))
                     (*(undefined4 *)(*(int *)puVar4 + 8),&local_7c);
  uVar9 = FUN_00540808(uVar10);
  if (uVar9 != 0) goto LAB_00543cc4;
  uVar10 = (*(code *)**(undefined4 **)(*(int *)puVar5 + 0xc4))(local_7c,&uStack_68);
  uVar8 = FUN_00540808(uVar10);
  if (uVar8 != 0) {
LAB_00543d24:
    return uVar8 & 0xffffffff;
  }
  uVar10 = (*(code *)**(undefined4 **)(*(int *)puVar5 + 0xb0))(local_7c,&local_80);
  uVar8 = FUN_00540808(uVar10);
  if (uVar8 != 0) goto LAB_00543d24;
  if (local_40 == 3) {
    param_1[3] = 1;
    param_1[4] = 4;
    *param_1 = 1;
    param_1[2] = 1;
    goto LAB_00543cc4;
  }
  if (local_40 < 4) {
    if (local_40 != 0) {
LAB_00543f00:
      if ((uint)param_1[1] < 4) {
        *param_1 = 4;
      }
      else {
        *param_1 = 1;
      }
      param_1[3] = 1;
      param_1[4] = 4;
      param_1[2] = 1;
      goto LAB_00543cc4;
    }
    if (local_44 == 0) goto LAB_00543cc4;
    *param_1 = 2;
  }
  else {
    if (local_40 == 0xd6da) goto LAB_00543cc4;
    if (local_40 != 0xd6e0) goto LAB_00543f00;
    *param_1 = 3;
  }
  if (local_50 == local_80) {
    param_1[2] = 5;
  }
  else {
    param_1[2] = 2;
  }
  if (*param_1 == 3) {
    if (local_50 == local_80) {
      param_1[3] = 5;
    }
    else {
      if (local_44 != 2) {
        uVar8 = (ulonglong)local_44;
        iVar11 = 0;
        puVar13 = auStack_4c;
        param_1[3] = 3;
        do {
          puVar3 = puVar13 + -1;
          while( true ) {
            puVar2 = puVar13;
            uVar8 = uVar8 - 1;
            if (uVar8 == 0) goto LAB_00543e20;
            puVar13 = puVar2 + 1;
            uVar1 = *puVar3;
            uVar12 = *puVar2;
            uVar6 = uVar1;
            if (uVar12 < uVar1) {
              uVar6 = uVar12;
              uVar12 = uVar1;
            }
            if (((uVar12 == local_80) || (iVar7 = uVar12 - uVar6, uVar6 == local_80)) ||
               (iVar7 == 0)) break;
            if ((iVar11 != 0) && (iVar11 != iVar7)) {
              param_1[3] = 2;
              goto LAB_00543e20;
            }
            param_1[3] = 5;
            iVar11 = iVar7;
            puVar3 = puVar2;
          }
        } while( true );
      }
      param_1[3] = 4;
    }
  }
  else {
    param_1[3] = 1;
  }
LAB_00543e20:
  param_1[4] = 4;
  if (param_1[1] == 5) {
    iVar11 = (*(code *)**(undefined4 **)(*(int *)puVar5 + 0x2c))
                       (*(undefined4 *)(*(int *)puVar4 + 8),&local_78,&local_80);
    if ((iVar11 == 0) &&
       ((iVar11 = (*(code *)**(undefined4 **)(*(int *)puVar5 + 0x28))(local_7c,&local_70,&local_80),
        iVar11 == 0 || (iVar11 == 0xd6e0)))) {
      iVar11 = FUN_0054ee38(local_78,local_70);
      if (iVar11 == 0) {
        param_1[4] = 6;
      }
      else {
        param_1[4] = 2;
      }
    }
  }
LAB_00543cc4:
  return (ulonglong)uVar9;
}


// 0x0544040 (0x158 bytes)
undefined4 FUN_00544040(int param_1,int *param_2,int param_3,undefined4 param_4)

{
  ushort uVar1;
  void *__src;
  undefined4 uVar2;
  GPiece<24> local_30;
  
  if ((((param_1 != 0) && (param_2 != (int *)0x0)) && (*param_2 != 0)) &&
     ((uVar1 = *(ushort *)(param_2 + 1), (ushort)(uVar1 - 1) < 0x28 && (param_3 != 0)))) {
    *(int *)(param_1 + 0x500) = param_3;
    *(undefined4 *)(param_1 + 0x504) = param_4;
    if (*(ushort *)(param_1 + 0x40c) < uVar1) {
      FUN_00551ad4(param_1 + 0x410,uVar1);
      uVar1 = *(ushort *)(param_2 + 1);
    }
    __src = (void *)param_2[2];
    *(ushort *)(param_1 + 0x40c) = uVar1;
    *(undefined4 *)(param_1 + 0x408) = 1;
    memcpy(*(void **)(param_1 + 0x410),__src,(uint)uVar1);
    uVar2 = 0xf;
    if (*(int *)PTR_DAT_0071b114 != 0) {
      uVar2 = 0;
      if (*(int *)(param_1 + 0x45c) != 0) {
        uVar2 = (*(code *)**(undefined4 **)(*(int *)PTR_DAT_0071b114 + 0xb0))
                          (*(int *)(param_1 + 0x45c),local_30);
        uVar2 = FUN_00540808(uVar2);
      }
    }
    return uVar2;
  }
  return 3;
}


// 0x0544198 (0x314 bytes)
ulonglong FUN_00544198(int param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  uint uVar3;
  ulonglong uVar4;
  undefined4 uVar5;
  int iVar6;
  int iVar7;
  ulonglong uVar8;
  undefined4 *puVar9;
  char local_b0 [32];
  GPiece<32> auStack_90;
  int local_70;
  int local_6c;
  GPiece<32> auStack_68;
  int local_48;
  int local_44;
  
  if ((param_1 == 0) || (param_2 == (undefined4 *)0x0)) {
    uVar8 = 3;
  }
  else {
    uVar8 = 5;
    if (*(int *)(param_1 + 0x454) != 2) {
      puVar9 = (undefined4 *)(param_1 + 0x47c);
      uVar8 = FUN_0055af1c(auStack_68,puVar9,param_2);
      if ((int)uVar8 == 0) {
        uVar4 = FUN_0055af1c(auStack_90,param_2,puVar9);
        if (uVar4 == 0) {
          uVar5 = FUN_00540600(local_b0,auStack_68,local_44 - local_48);
          uVar4 = FUN_00540808(uVar5);
          if (uVar4 == 0) {
            uVar3 = local_44 - local_48;
            iVar6 = ((int)uVar3 >> 3) + (uint)((int)uVar3 < 0 && (uVar3 & 7) != 0);
            if (iVar6 != -1) {
              iVar7 = 0;
              uVar4 = (ulonglong)(iVar6 + 1);
              if (local_b0[0] == '\0') {
                do {
                  iVar7 = iVar7 + 1;
                  uVar4 = uVar4 - 1;
                  if (uVar4 == 0) goto LAB_00544334;
                } while (local_b0[iVar7] == '\0');
              }
              uVar5 = (*(code *)**(undefined4 **)(*(int *)PTR_DAT_0071b110 + 0x48))
                                (*(undefined4 *)(param_1 + 0x458),local_48,local_44 + -1,local_b0);
              uVar4 = FUN_00540808(uVar5);
              if (uVar4 != 0) goto LAB_00544278;
            }
LAB_00544334:
            uVar5 = FUN_00540600(local_b0,auStack_90,local_6c - local_70);
            uVar4 = FUN_00540808(uVar5);
            if (uVar4 == 0) {
              uVar3 = local_6c - local_70;
              iVar6 = ((int)uVar3 >> 3) + (uint)((int)uVar3 < 0 && (uVar3 & 7) != 0);
              if (iVar6 != -1) {
                iVar7 = 0;
                uVar4 = (ulonglong)(iVar6 + 1);
                while (local_b0[0] == '\0') {
                  iVar7 = iVar7 + 1;
                  uVar4 = uVar4 - 1;
                  if (uVar4 == 0) goto LAB_005443e0;
                  local_b0[0] = local_b0[iVar7];
                }
                uVar5 = (*(code *)**(undefined4 **)(*(int *)PTR_DAT_0071b110 + 0x40))
                                  (*(undefined4 *)(param_1 + 0x458),local_70,local_6c + -1,local_b0)
                ;
                uVar4 = FUN_00540808(uVar5);
                if (uVar4 != 0) goto LAB_00544278;
              }
LAB_005443e0:
              uVar5 = param_2[1];
              uVar1 = param_2[2];
              uVar2 = param_2[3];
              *puVar9 = *param_2;
              *(undefined4 *)(param_1 + 0x480) = uVar5;
              *(undefined4 *)(param_1 + 0x484) = uVar1;
              *(undefined4 *)(param_1 + 0x488) = uVar2;
              uVar5 = param_2[5];
              uVar1 = param_2[6];
              uVar2 = param_2[7];
              *(undefined4 *)(param_1 + 0x48c) = param_2[4];
              *(undefined4 *)(param_1 + 0x490) = uVar5;
              *(undefined4 *)(param_1 + 0x494) = uVar1;
              *(undefined4 *)(param_1 + 0x498) = uVar2;
              uVar5 = param_2[8];
              *(undefined4 *)(param_1 + 0x4a0) = param_2[9];
              *(undefined4 *)(param_1 + 0x49c) = uVar5;
              goto LAB_00544220;
            }
          }
        }
LAB_00544278:
        return uVar4 & 0xffffffff;
      }
    }
  }
LAB_00544220:
  return uVar8 & 0xffffffff;
}


// 0x05444ac (0x50 bytes)
undefined8 FUN_005444ac(int param_1,int param_2)

{
  undefined8 uVar1;
  
  uVar1 = 3;
  if (param_2 != 0) {
    if (param_1 != 0) {
      strcpy(param_1,param_2 + 0x428,0x14);
      uVar1 = 0;
    }
  }
  return uVar1;
}


// 0x05444fc (0x4c bytes)
undefined8 FUN_005444fc(int param_1,int param_2)

{
  undefined8 uVar1;
  
  uVar1 = 3;
  if (param_2 != 0) {
    if (param_1 != 0) {
      FUN_0054ef70(param_1 + 0x420,param_2);
      uVar1 = 0;
    }
  }
  return uVar1;
}


// 0x0544548 (0x1a4 bytes)
undefined4 FUN_00544548(int *param_1)

{
  int iVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined4 uVar4;
  longlong local_30 [2];
  
  puVar3 = PTR_DAT_0071b10c;
  puVar2 = PTR_PTR_0071b104;
  uVar4 = 3;
  if (param_1 != (int *)0x0) {
    uVar4 = 0;
    if (*(int *)PTR_DAT_0071b150 != 0) {
      if (*(int *)PTR_DAT_0071b10c != 0) {
        iVar1 = param_1[5];
        uVar4 = 2;
        if (*param_1 == 3) {
          FUN_0054ef70(local_30,param_1 + 1);
          uVar4 = (*(code *)**(undefined4 **)(*(int *)puVar3 + 0x98))
                            (*(undefined4 *)(*(int *)PTR_PTR_0071b104 + 8),local_30[0],iVar1);
        }
        else if (*param_1 == 8) {
          local_30[0] = (ulonglong)(uint)param_1[1] << 0x20;
          (*(code *)**(undefined4 **)(*(int *)PTR_DAT_0071b10c + 0x98))
                    (*(undefined4 *)(*(int *)PTR_PTR_0071b104 + 8),local_30[0],iVar1);
          local_30[0] = (ulonglong)(uint)param_1[2] << 0x20;
          uVar4 = (*(code *)**(undefined4 **)(*(int *)puVar3 + 0x98))
                            (*(undefined4 *)(*(int *)puVar2 + 8),local_30[0],iVar1);
        }
      }
    }
    uVar4 = FUN_00540808(uVar4);
  }
  return uVar4;
}


// 0x05446ec (0x190 bytes)
int FUN_005446ec(ulonglong param_1)

{
  longlong lVar1;
  ulonglong *puVar2;
  undefined *puVar3;
  ulonglong uVar4;
  undefined4 uVar5;
  int iVar6;
  ulonglong uVar7;
  ulonglong unaff_r26;
  ulonglong unaff_r27;
  ulonglong unaff_r28;
  ulonglong unaff_r29;
  ulonglong unaff_r30;
  ulonglong unaff_r31;
  ulonglong in_LR;
  
  uVar4 = ZEXT48(&stack0x00000000);
  puVar2 = (ulonglong *)(uVar4 - 0x1b0);
  *puVar2 = uVar4;
  puVar2[0x32] = unaff_r28;
  uVar7 = *puVar2;
  puVar2[0x35] = unaff_r31;
  puVar2[0x30] = unaff_r26;
  puVar3 = PTR_DAT_0071b164;
  puVar2[0x38] = in_LR;
  *(undefined4 *)(puVar2 + 0xe) = 0;
  puVar2[0x31] = unaff_r27;
  puVar2[0x33] = unaff_r29;
  *(undefined4 *)puVar3 = 0xffffffff;
  puVar2[0x34] = unaff_r30;
  lVar1 = (uVar4 - 0x1b0) -
          (((param_1 & 0x1fffffff) * 8 + 8 & 0xffffffff) + 0x1e & 0xfffffffffffffff0);
  *(ulonglong *)lVar1 = uVar7;
  uVar5 = FUN_0054ef20(lVar1 + 0x70U & 0xffffffff,param_1 + 1 & 0xffffffff,uVar4 - 0x140);
  iVar6 = FUN_00540808(uVar5);
  if (iVar6 == 0) {
    iVar6 = 0xdac;
    if ((*(uint *)(puVar2 + 0xe) != 0) &&
       (uVar4 = uVar4 - 0x13c & 0xffffffff,
       (param_1 & 0xffffffff) < (ulonglong)*(uint *)(puVar2 + 0xe))) {
      memset(uVar4,0,0x10c);
      strcpy(uVar4,ZEXT48(PTR_DAT_0071b150) + 0x580,0x100);
      *(undefined **)((int)puVar2 + 0x17c) = PTR_PTR_0071b168;
      iVar6 = FUN_005502bc(uVar4);
      if (iVar6 == 0) {
        *(int *)puVar3 = (int)param_1;
      }
      iVar6 = FUN_00540808(iVar6);
      return iVar6;
    }
  }
  return iVar6;
}


// 0x054487c (0x104 bytes)
int FUN_0054487c(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  GPiece<256> auStack_130;
  GPiece<16> auStack_30;
  
  iVar2 = 3;
  if ((param_1 != 0) && (*(int *)(param_1 + 0x110) != 0)) {
    if (*(char *)(param_1 + 0x100) == '\0') {
      strcpy(PTR_DAT_0071b150 + 0x580,param_1,0x100);
      iVar2 = FUN_005446ec(0);
    }
    else {
      memset(auStack_130,0,0x10c);
      strcpy(auStack_130,param_1,0x100);
      FUN_0054ef70(auStack_30,param_1 + 0x100);
      uVar1 = FUN_005502bc(auStack_130);
      iVar2 = FUN_00540808(uVar1);
    }
    if (iVar2 == 0) {
      *(undefined4 *)(PTR_DAT_0071b150 + 0x680) = *(undefined4 *)(param_1 + 0x110);
    }
  }
  return iVar2;
}


// 0x0544980 (0xe0 bytes)
void FUN_00544980(int param_1)

{
  bool bVar1;
  undefined *puVar2;
  undefined4 uVar3;
  undefined *puVar4;
  int iVar5;
  
  puVar2 = PTR_DAT_0071b150;
  iVar5 = 0;
  puVar4 = PTR_DAT_0071b150 + 0x684;
  memset(PTR_DAT_0071b150 + 0x580,0,0x100);
  do {
    FUN_0054eecc(puVar4,CONCAT44(*(undefined4 *)(param_1 + iVar5 * 8),
                                 *(undefined4 *)(param_1 + iVar5 * 8 + 4)));
    bVar1 = iVar5 != 0xf;
    iVar5 = iVar5 + 1;
    puVar4 = puVar4 + 0x10;
  } while (bVar1);
  uVar3 = *(undefined4 *)(param_1 + 0x84);
  *(undefined4 *)(puVar2 + 0x784) = *(undefined4 *)(param_1 + 0x80);
  uVar3 = FUN_00540808(uVar3);
  *(undefined4 *)(puVar2 + 0x788) = uVar3;
  (*(code *)**(undefined4 **)(puVar2 + 0x680))(puVar2 + 0x684);
  *(undefined4 *)(puVar2 + 0x680) = 0;
  return;
}


// 0x0544a60 (0x74 bytes)
void FUN_00544a60(int param_1)

{
  int iVar1;
  
  if ((*(int *)(param_1 + 0x84) != 0) &&
     (iVar1 = *(uint *)PTR_DAT_0071b164 + 1, *(uint *)PTR_DAT_0071b164 < 3)) {
    *(int *)PTR_DAT_0071b164 = iVar1;
    iVar1 = FUN_005446ec(iVar1);
    if (iVar1 == 0) {
      return;
    }
  }
  FUN_00544980(param_1);
  return;
}


// 0x0544ad4 (0x53c bytes)
int FUN_00544ad4(int param_1,uint param_2)

{
  undefined *puVar1;
  int iVar2;
  int iVar3;
  undefined8 *puVar4;
  GPiece<8> local_80;
  GPiece<16> auStack_78;
  GPiece<16> local_68;
  GPiece<24> local_58;
  
  puVar1 = PTR_DAT_0071b120;
  if ((0xff < param_2) || (param_1 == 0)) {
    return 3;
  }
  if (((*(int *)PTR_DAT_0071b120 != 0) &&
      (iVar3 = (*(code *)**(undefined4 **)(*(int *)PTR_DAT_0071b120 + 0x38))(param_1), iVar3 != 0))
     && (iVar3 = (*(code *)**(undefined4 **)(*(int *)puVar1 + 0x48))(param_1,param_2), iVar3 != 0))
  {
    return iVar3;
  }
  puVar4 = (undefined8 *)FUN_0054170c(param_1,param_2);
  iVar3 = *(int *)(param_1 + 0x454);
  if (((iVar3 == 4) || (iVar3 == 6)) || (iVar3 == 7)) {
    if ((puVar4 != (undefined8 *)0x0) && (*(int *)(puVar4 + 4) != 0)) {
      iVar3 = *(int *)(param_1 + 0x4c8);
      *(undefined4 *)((int)puVar4 + 0xc) = 1;
      if (iVar3 != 0) {
        FUN_0054eecc(auStack_78,*puVar4);
        (*(code *)**(undefined4 **)(param_1 + 0x4c8))(local_58);
      }
      FUN_005433e8(param_1,param_2);
      return 0;
    }
  }
  else {
    iVar3 = *(int *)(param_1 + 0x400);
    if (puVar4 == (undefined8 *)0x0) {
      if ((*(int *)(param_1 + 0x448) != 0) &&
         (iVar2 = *(int *)(param_1 + 0x448) + -1, *(int *)(param_1 + 0x448) = iVar2, iVar2 == 0)) {
        FUN_0054058c(local_80,param_1);
        if (((*(uint *)(param_1 + 0x43c) & 1) == 0) && (*(int *)(param_1 + 0x4a8) == 0)) {
          *(uint *)(param_1 + 0x43c) = *(uint *)(param_1 + 0x43c) | 1;
          *(undefined4 *)(param_1 + 0x4a8) = 1;
          if (*(int *)(param_1 + 0x4d0) != 0) {
            (*(code *)**(undefined4 **)(param_1 + 0x4d0))(local_68);
          }
        }
      }
      iVar3 = *(int *)(iVar3 + 0xc);
    }
    else {
      if (*(int *)(puVar4 + 4) == 0) {
        if ((*(int *)(param_1 + 0x448) != 0) &&
           (iVar2 = *(int *)(param_1 + 0x448) + -1, *(int *)(param_1 + 0x448) = iVar2, iVar2 == 0))
        {
          FUN_0054058c(local_80,param_1);
          if (((*(uint *)(param_1 + 0x43c) & 1) == 0) && (*(int *)(param_1 + 0x4a8) == 0)) {
            *(uint *)(param_1 + 0x43c) = *(uint *)(param_1 + 0x43c) | 1;
            *(undefined4 *)(param_1 + 0x4a8) = 1;
            if (*(int *)(param_1 + 0x4d0) != 0) {
              (*(code *)**(undefined4 **)(param_1 + 0x4d0))(local_68);
            }
          }
        }
      }
      else {
        if (*(int *)PTR_DAT_0071b118 != 0) {
          (*(code *)**(undefined4 **)(*(int *)PTR_DAT_0071b118 + 8))(param_1,param_2);
        }
        *(undefined4 *)((int)puVar4 + 0xc) = 1;
        if ((*(int *)(iVar3 + 0x20) != 0) && (*(int *)(param_1 + 0x4c8) != 0)) {
          FUN_0054eecc(auStack_78,*puVar4);
          (*(code *)**(undefined4 **)(param_1 + 0x4c8))(local_58);
        }
        FUN_005433e8(param_1,param_2);
      }
      iVar3 = *(int *)(iVar3 + 0xc);
    }
    if ((iVar3 == 3) && (*(int *)PTR_DAT_0071b118 != 0)) {
      (*(code *)**(undefined4 **)(*(int *)PTR_DAT_0071b118 + 0x98))(param_1,0,0,0);
      return 0;
    }
  }
  return 0;
}


// 0x0545010 (0xc8 bytes)
undefined8 FUN_00545010(undefined4 *param_1,undefined4 param_2,undefined4 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  uVar2 = 3;
  if (param_1 != (undefined4 *)0x0) {
    param_1[5] = 0;
    *param_1 = 0;
    param_1[1] = 0;
    param_1[2] = 0;
    param_1[3] = 0;
    param_1[4] = 0;
    puVar1 = (undefined8 *)FUN_0054170c(param_2,param_3);
    uVar2 = 10;
    if ((puVar1 != (undefined8 *)0x0) && (*(int *)(puVar1 + 4) != 0)) {
      *param_1 = 1;
      FUN_0054eecc(param_1 + 1,*puVar1);
      uVar2 = 0;
      param_1[5] = *(undefined4 *)(puVar1 + 1);
    }
  }
  return uVar2;
}


// 0x05450d8 (0x3c bytes)
undefined4 FUN_005450d8(void)

{
  undefined4 uVar1;
  
  uVar1 = FUN_00552c24(*(int *)PTR_PTR_0071b104 + 0x1c,0);
  return uVar1;
}


// 0x0545114 (0x54 bytes)
undefined4 FUN_00545114(void)

{
  undefined4 uVar1;
  
  uVar1 = 5;
  if (*(int *)(*(int *)PTR_PTR_0071b104 + 0x18) != 0) {
    uVar1 = FUN_00552e60(*(int *)PTR_PTR_0071b104 + 0x1c,0);
  }
  return uVar1;
}


// 0x0545168 (0x74 bytes)
undefined4 * FUN_00545168(undefined4 *param_1,int param_2)

{
  undefined4 local_30;
  undefined4 local_2c;
  
  FUN_0054edb0(&local_30);
  if (param_2 != 0) {
    local_2c = *(undefined4 *)(param_2 + 0x424);
    local_30 = *(undefined4 *)(param_2 + 0x420);
  }
  param_1[1] = local_2c;
  *param_1 = local_30;
  return param_1;
}


// 0x05451dc (0x190 bytes)
int FUN_005451dc(void)

{
  bool bVar1;
  undefined *puVar2;
  undefined4 uVar3;
  int iVar4;
  char *pcVar5;
  char *pcVar6;
  int *piVar7;
  char *pcVar8;
  GPiece<24> auStack_70;
  
  puVar2 = PTR_DAT_0071b150;
  pcVar5 = PTR_DAT_0071b150 + 0x78c;
  piVar7 = (int *)(PTR_DAT_0071b150 + 0x7a8);
  pcVar6 = PTR_DAT_0071b150 + 0x276c;
  pcVar8 = pcVar5;
  do {
    while ((byte)(*pcVar8 - 1U) < 2) {
      *pcVar8 = '\x04';
LAB_00545274:
      FUN_0054eecc(auStack_70,*(undefined8 *)(pcVar8 + 4));
      if ((undefined4 *)*piVar7 != (undefined4 *)0x0) {
        (**(code **)*piVar7)(0xd,auStack_70,0);
        *piVar7 = 0;
      }
      bVar1 = pcVar6 == pcVar8;
      *pcVar8 = '\0';
      piVar7 = piVar7 + 8;
      pcVar8 = pcVar8 + 0x20;
      if (bVar1) goto LAB_005452e0;
    }
    if (*pcVar8 == '\x04') goto LAB_00545274;
    bVar1 = pcVar6 != pcVar8;
    piVar7 = piVar7 + 8;
    pcVar8 = pcVar8 + 0x20;
  } while (bVar1);
LAB_005452e0:
  if (*(int *)(puVar2 + 0x278c) != 0) {
    uVar3 = FUN_0054fef4();
    iVar4 = FUN_00540808(uVar3);
    if (iVar4 != 0) {
      return iVar4;
    }
    *(undefined4 *)(puVar2 + 0x278c) = 0;
  }
  memset(pcVar5,0,0x2000);
  return 0;
}


// 0x054536c (0x2c bytes)
undefined4 FUN_0054536c(void)

{
  undefined4 local_10 [4];
  
  thunk_FUN_00556eb4(local_10);
  return local_10[0];
}


// 0x0545398 (0x70 bytes)
undefined4 FUN_00545398(int param_1)

{
  undefined *puVar1;
  undefined4 uVar2;
  int iVar3;
  
  puVar1 = PTR_PTR_0071b104;
  uVar2 = 0x1f;
  if (*(int *)(param_1 + 0x4a4) != 0) {
    iVar3 = *(int *)PTR_PTR_0071b104;
    if (*(int *)(iVar3 + 0x1084) != 0) {
      FUN_005576c4(iVar3 + 4);
      iVar3 = *(int *)puVar1;
    }
    uVar2 = *(undefined4 *)(iVar3 + 4);
  }
  return uVar2;
}


// 0x0545408 (0x274 bytes)
int FUN_00545408(int param_1)

{
  undefined4 *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  int iVar5;
  int iVar6;
  longlong lVar4;
  GPiece<4> local_30;
  int local_2c;
  
  puVar2 = PTR_PTR_0071b104;
  local_2c = 0;
  if (*(int *)PTR_DAT_0071b150 != 0) {
    if (param_1 == 0) {
      iVar5 = *(int *)PTR_PTR_0071b104;
      puVar1 = *(undefined4 **)(*(int *)PTR_DAT_0071b10c + 0x6c);
    }
    else {
      iVar5 = *(int *)PTR_PTR_0071b104;
      puVar1 = *(undefined4 **)(*(int *)PTR_DAT_0071b10c + 0x70);
    }
    iVar5 = (*(code *)*puVar1)(*(undefined4 *)(iVar5 + 8));
    if (iVar5 != 0) {
      local_2c = FUN_00540808(iVar5);
      FUN_00540754(local_30);
      if (local_2c != 0) {
        return local_2c;
      }
    }
  }
  puVar3 = PTR_DAT_0071b120;
  iVar5 = *(int *)(*(int *)puVar2 + 0x1088);
joined_r0x005454b8:
  while( true ) {
    if (iVar5 == 0) {
      FUN_00550d54();
      return local_2c;
    }
    *(undefined4 *)(iVar5 + 0x4ac) = 0;
    if (*(int *)(iVar5 + 0x440) - 1U < 2) break;
LAB_005454e4:
    iVar6 = *(int *)puVar3;
    if ((iVar6 == 0) || (iVar6 = (*(code *)**(undefined4 **)(iVar6 + 0x38))(iVar5), iVar6 == 0)) {
LAB_0054551c:
      iVar5 = *(int *)(iVar5 + 0x534);
    }
    else {
      lVar4 = (*(code *)**(undefined4 **)(*(int *)puVar3 + 0x2c))(iVar5,param_1);
      local_2c = (int)lVar4;
      if (lVar4 == 0) goto LAB_0054551c;
      FUN_00540754(local_30);
      iVar5 = *(int *)(iVar5 + 0x534);
    }
  }
  if ((*(int *)(iVar5 + 0x454) == 2) ||
     (iVar6 = (*(code *)**(undefined4 **)(*(int *)PTR_DAT_0071b110 + 0x1c))
                        (*(undefined4 *)(iVar5 + 0x458),param_1), iVar6 == 0)) {
    if ((*(int *)(iVar5 + 0x45c) != 0) &&
       ((param_1 != 0 &&
        (iVar6 = (*(code *)**(undefined4 **)(*(int *)PTR_DAT_0071b114 + 0x40))
                           (*(int *)(iVar5 + 0x45c)), iVar6 != 0)))) {
      local_2c = FUN_00540808(iVar6);
      FUN_00540754(local_30);
      iVar5 = *(int *)(iVar5 + 0x534);
      goto joined_r0x005454b8;
    }
    iVar6 = *(int *)(iVar5 + 0x4ac);
    if (iVar6 == 0) goto LAB_005454e4;
  }
  local_2c = FUN_00540808(iVar6);
  FUN_00540754(local_30);
  iVar5 = *(int *)(iVar5 + 0x534);
  goto joined_r0x005454b8;
}


// 0x054567c (0x108 bytes)
ulonglong FUN_0054567c(void)

{
  undefined *puVar1;
  undefined4 uVar3;
  uint uVar4;
  ulonglong uVar2;
  byte *pbVar5;
  GPiece<24> auStack_58;
  
  puVar1 = PTR_DAT_0071b150;
  uVar4 = 0;
  if (*(int *)(PTR_DAT_0071b150 + 0x278c) != 0) {
    uVar3 = FUN_0054f210();
    uVar4 = FUN_00540808(uVar3);
    if (uVar4 == 0) {
      pbVar5 = puVar1 + 0x78c;
      while( true ) {
        FUN_0054eecc(auStack_58,*(undefined8 *)(pbVar5 + 4));
        if (*pbVar5 < 5) {
                    /* WARNING: Could not recover jumptable at 0x00545760. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          uVar2 = (*(code *)(PTR_DAT_0071b170 + *(int *)(PTR_DAT_0071b170 + (uint)*pbVar5 * 4)))();
          return uVar2;
        }
        *pbVar5 = 0;
        if (puVar1 + 0x276c == pbVar5) break;
        pbVar5 = pbVar5 + 0x20;
      }
    }
  }
  return (ulonglong)uVar4;
}


// 0x054589c (0x54 bytes)
ulonglong FUN_0054589c(void)

{
  uint uVar2;
  ulonglong uVar1;
  
  uVar2 = FUN_00545408(0);
  if (uVar2 != 0) {
    return (ulonglong)uVar2;
  }
  uVar1 = FUN_0054567c(0);
  return uVar1;
}


// 0x05458f0 (0xf8 bytes)
void FUN_005458f0(undefined8 param_1,uint param_2)

{
  bool bVar1;
  int iVar2;
  char *pcVar3;
  char *pcVar4;
  undefined8 uStack00000030;
  
  uStack00000030 = param_1;
  iVar2 = FUN_0054edf0();
  if (iVar2 == 0) {
    pcVar4 = PTR_DAT_0071b150 + 0x78c;
    pcVar3 = PTR_DAT_0071b150 + 0x276c;
    do {
      iVar2 = FUN_0054ee38(*(undefined8 *)(pcVar4 + 4),uStack00000030);
      bVar1 = pcVar3 != pcVar4;
      if (((iVar2 != 0) && (*pcVar4 == '\x02')) &&
         (((param_2 ^ *(uint *)(pcVar4 + 0xc)) & 0xffff) == 0)) {
        thunk_FUN_00556bb8(pcVar4 + 0x10,pcVar4 + 0x18);
        *pcVar4 = '\x03';
        return;
      }
      pcVar4 = pcVar4 + 0x20;
    } while (bVar1);
  }
  return;
}


// 0x05459e8 (0x18c bytes)
undefined4 FUN_005459e8(undefined8 param_1,undefined4 param_2,uint param_3,uint param_4,int param_5)

{
  int iVar1;
  undefined4 uVar2;
  undefined8 uStack00000030;
  undefined1 local_40;
  undefined1 local_3f;
  
  if ((((param_3 < 6) && (param_4 < 0x100)) && (param_5 != 0)) && (*(uint *)(param_5 + 0x40) != 0))
  {
    uVar2 = 0x1a;
    if (*(uint *)(param_5 + 0x40) < 0x577) {
      uStack00000030 = param_1;
      iVar1 = FUN_0054edf0();
      if (iVar1 != 0) {
        return 3;
      }
      local_40 = (undefined1)param_3;
      local_3f = (undefined1)param_4;
      if (*(int *)(param_5 + 0x44) < 8) {
        iVar1 = *(int *)(param_5 + 0x44) * 8;
        *(undefined1 **)(param_5 + iVar1) = &local_40;
        *(undefined4 *)(param_5 + iVar1 + 4) = 2;
        *(int *)(param_5 + 0x40) = *(int *)(param_5 + 0x40) + 2;
        *(int *)(param_5 + 0x44) = *(int *)(param_5 + 0x44) + 1;
      }
      uVar2 = (*(code *)**(undefined4 **)(*(int *)PTR_DAT_0071b10c + 0x50))
                        (*(undefined4 *)(*(int *)PTR_PTR_0071b104 + 8),0,uStack00000030,param_2,
                         param_5);
      iVar1 = *(int *)(param_5 + 0x44) + -1;
      *(int *)(param_5 + 0x44) = iVar1;
      *(int *)(param_5 + 0x40) = *(int *)(param_5 + 0x40) - *(int *)(param_5 + iVar1 * 8 + 4);
      uVar2 = FUN_00540808(uVar2);
    }
    return uVar2;
  }
  return 3;
}


// 0x0545b74 (0x1d0 bytes)
ulonglong FUN_00545b74(undefined8 param_1,int param_2)

{
  bool bVar1;
  undefined *puVar2;
  int iVar4;
  ulonglong uVar3;
  undefined4 uVar5;
  char *pcVar6;
  uint uVar7;
  char *pcVar8;
  undefined4 uStack00000030;
  undefined4 uStack00000034;
  int local_40;
  GPiece<12> local_3c;
  
  _uStack00000030 = param_1;
  iVar4 = FUN_0054edf0();
  puVar2 = PTR_DAT_0071b150;
  if (iVar4 == 0) {
    uVar3 = 3;
    if (param_2 != 0) {
      pcVar8 = PTR_DAT_0071b150 + 0x78c;
      if (*(int *)(PTR_DAT_0071b150 + 0x278c) == 0) {
        FUN_0054ef64(local_3c);
        uVar5 = FUN_005501f8(local_3c);
        uVar3 = FUN_00540808(uVar5);
        if ((int)uVar3 != 0) goto LAB_00545cb8;
        memset(pcVar8,0,0x2000);
        *(undefined4 *)(puVar2 + 0x278c) = 1;
      }
      uVar7 = 0;
      pcVar6 = (char *)0x0;
      do {
        if (*pcVar8 == '\0') {
          pcVar6 = pcVar8;
        }
        iVar4 = FUN_0054ee38(_uStack00000030,*(undefined8 *)(pcVar8 + 4));
        bVar1 = puVar2 + 0x276c != pcVar8;
        if ((iVar4 != 0) && (uVar7 <= *(uint *)(pcVar8 + 0xc))) {
          uVar7 = *(uint *)(pcVar8 + 0xc) + 1 & 0xffff;
        }
        pcVar8 = pcVar8 + 0x20;
      } while (bVar1);
      uVar3 = 10;
      if (pcVar6 != (char *)0x0) {
        *pcVar6 = '\x01';
        *(uint *)(pcVar6 + 0xc) = uVar7;
        *(int *)(pcVar6 + 0x1c) = param_2;
        *(undefined4 *)(pcVar6 + 4) = uStack00000030;
        *(undefined4 *)(pcVar6 + 8) = uStack00000034;
        uVar5 = FUN_0054f760(&local_40,_uStack00000030,uVar7);
        uVar3 = FUN_00540808(uVar5);
        if ((uVar3 == 0) && (uVar3 = 0, local_40 != 0)) {
          *pcVar6 = '\x02';
          FUN_00556a58(pcVar6 + 0x10);
          uVar3 = 0;
        }
      }
    }
  }
  else {
    uVar3 = FUN_005451dc();
  }
LAB_00545cb8:
  return uVar3 & 0xffffffff;
}


// 0x0545d44 (0x384 bytes)
undefined4 FUN_00545d44(int *param_1,undefined4 *param_2)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  ulonglong uVar6;
  int iVar7;
  int *piVar8;
  short sVar9;
  int *piVar10;
  short local_f0;
  ushort local_ee;
  uint local_ec;
  undefined4 local_e8;
  undefined4 local_e4;
  int local_e0 [2];
  int local_d8;
  GPiece<12> local_d4;
  uint auStack_c8 [6];
  int local_b0;
  
  uVar5 = 3;
  if (param_2 != (undefined4 *)0x0) {
    param_2[1] = 0x19;
    *param_2 = 1;
    if (param_1 == (int *)0x0) {
      param_2[1] = 3;
    }
    else if (*param_1 == 0) {
      uVar5 = 0x1d;
      param_2[1] = 0x1d;
    }
    else if (*(int *)PTR_DAT_0071b150 == 0) {
      uVar5 = 0x16;
      param_2[1] = 0x16;
    }
    else if (param_1[1] == 0) {
      uVar5 = 1;
      param_2[1] = 1;
    }
    else {
      piVar8 = (int *)0x0;
      if (param_1[0xe] != 0) {
        piVar8 = param_1 + 0xe;
      }
      piVar10 = param_1 + 2;
      iVar2 = 0;
      iVar7 = 0;
      sVar9 = 0;
      local_b0 = 0;
      while( true ) {
        FUN_0053fe40(piVar10,&local_ec,&local_e8,&local_ee,&local_f0);
        if ((ulonglong)local_ec < 0xb) {
          uVar6 = 1L << ((ulonglong)local_ec & 0x7f);
          if ((uVar6 & 0xf6) == 0) {
            if ((uVar6 & 0x200) != 0) {
              uVar5 = *(undefined4 *)(param_1[1] + 0x444);
              iVar3 = FUN_005534b0(piVar10);
              FUN_005436b8(param_1[1],local_e0);
              if (((local_e0[0] != 0) && (local_d8 != 0)) &&
                 (iVar4 = FUN_005533d4(local_d8), iVar3 == iVar4)) {
                param_2[1] = 0;
                return 0;
              }
              FUN_00553518(piVar10,uVar5,iVar3);
            }
          }
          else {
            *(undefined4 *)((int)auStack_c8 + local_b0) = local_e8;
            *(undefined4 *)((int)auStack_c8 + local_b0 + 4) = local_e4;
            if (sVar9 == 0) {
              sVar9 = local_f0;
            }
            iVar7 = iVar7 + 1;
            *(uint *)((int)auStack_c8 + local_b0 + 8) = (uint)local_ee;
            local_b0 = local_b0 + 0xc;
          }
        }
        bVar1 = iVar2 == 1;
        iVar2 = iVar2 + 1;
        if (bVar1) break;
        piVar10 = piVar10 + 6;
      }
      iVar2 = (*(code *)**(undefined4 **)(*(int *)PTR_DAT_0071b114 + 0x30))
                        (*(undefined4 *)(param_1[1] + 0x45c),auStack_c8,iVar7,sVar9,piVar8,local_d4)
      ;
      if (iVar2 == 0xd4e7) {
        param_2[1] = 0;
        uVar5 = param_2[1];
      }
      else if (iVar2 == 0) {
        param_2[1] = 0;
        uVar5 = param_2[1];
      }
      else {
        uVar5 = FUN_00540808(iVar2);
        param_2[1] = uVar5;
        uVar5 = param_2[1];
      }
    }
  }
  return uVar5;
}


// 0x05460c8 (0x128 bytes)
/* WARNING: Removing unreachable block (ram,0x005461d0) */

undefined4 FUN_005460c8(int *param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  GPiece<24> local_30;
  
  uVar1 = 3;
  if (param_2 != (undefined4 *)0x0) {
    param_2[1] = 0x19;
    *param_2 = 1;
    if (param_1 == (int *)0x0) {
      uVar1 = 3;
      param_2[1] = 3;
    }
    else {
      if (*param_1 == 0) {
        param_2[1] = 0x1d;
        return 0x1d;
      }
      if (*(int *)PTR_DAT_0071b150 == 0) {
        uVar1 = 0x16;
        param_2[1] = 0x16;
      }
      else if (param_1[1] == 0) {
        uVar1 = 1;
        param_2[1] = 1;
      }
      else {
        uVar1 = FUN_00541740(param_1[1],local_30);
        param_2[1] = uVar1;
      }
    }
  }
  return uVar1;
}


// 0x05461f0 (0xa0 bytes)
undefined8 FUN_005461f0(undefined4 *param_1)

{
  undefined8 uVar1;
  
  uVar1 = 3;
  if (param_1 != (undefined4 *)0x0) {
    memset(param_1,0,0xcc);
    param_1[0xd] = 8;
    param_1[0x2e] = 0;
    param_1[0x31] = 0x2000;
    param_1[0x2c] = 0;
    param_1[0x2d] = 0;
    param_1[0x2f] = 1;
    param_1[0x30] = 0x2000;
    FUN_0053c6dc(param_1 + 0xe);
    uVar1 = 0;
    *param_1 = 1;
  }
  return uVar1;
}


// 0x0546290 (0x108 bytes)
undefined8 FUN_00546290(undefined4 *param_1)

{
  int iVar1;
  undefined *puVar2;
  undefined8 uVar3;
  uint uVar4;
  
  uVar3 = 3;
  if (param_1 != (undefined4 *)0x0) {
    memset(param_1,0,0x178);
    puVar2 = PTR_DAT_0071b10c;
    param_1[1] = 0x100;
    iVar1 = *(int *)puVar2;
    param_1[2] = 0;
    if (iVar1 == 0) {
      uVar4 = FUN_00552968();
      param_1[0x57] = uVar4 % 1000 + 6000;
    }
    else {
      param_1[0x57] = *(int *)(iVar1 + 0xfc) + 1;
    }
    param_1[0x5a] = 0;
    param_1[0x29] = 0;
    param_1[0x2b] = 0;
    param_1[0x2d] = 0;
    param_1[0x2f] = 0;
    param_1[0x31] = 0;
    param_1[0x32] = 0;
    param_1[0x58] = 0;
    param_1[0x59] = 0;
    param_1[0x5d] = 0x2000;
    param_1[0x5b] = 1;
    param_1[0x5c] = 0x2000;
    FUN_0053c6dc(param_1 + 0x39);
    uVar3 = 0;
    *param_1 = 1;
  }
  return uVar3;
}


// 0x0546398 (0x574 bytes)
ulonglong FUN_00546398(int *param_1,undefined4 *param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  int iVar7;
  undefined4 uVar8;
  uint uVar9;
  undefined *puVar10;
  ulonglong uVar11;
  undefined4 *puVar12;
  longlong lVar13;
  undefined4 auStack_50 [4];
  
  puVar6 = PTR_DAT_0071b154;
  uVar11 = 3;
  if (param_2 != (undefined4 *)0x0) {
    iVar7 = *(int *)PTR_DAT_0071b154;
    if ((((iVar7 == 0) || (*(int *)(iVar7 + 0x9c) == 0)) || (*(int *)(iVar7 + 0xa0) == 0)) ||
       (*(int *)(iVar7 + 0xa4) == 0)) {
      return 2;
    }
    thunk_FUN_00556a58(auStack_50);
    FUN_00552944(auStack_50[0]);
    param_2[1] = 0x10;
    *param_2 = 1;
    FUN_0053fbc0(param_2 + 2);
    puVar5 = PTR_DAT_0071b10c;
    if (param_1 == (int *)0x0) {
      uVar11 = 3;
      param_2[1] = 3;
    }
    else {
      if (*param_1 != 1) {
        param_2[1] = 0x1d;
        return 0x1d;
      }
      iVar7 = param_1[0x15];
      if (iVar7 - 1U < 2) {
        iVar1 = *(int *)PTR_DAT_0071b10c;
        if (iVar1 != 0) {
          if (iVar7 == 2) {
            *(undefined4 *)(iVar1 + 0x100) = 0;
          }
          if (*(int *)(iVar1 + 0xfc) == 0) {
            if (iVar7 == 1) {
              uVar9 = FUN_00552968();
              iVar7 = param_1[0x15];
              *(uint *)(iVar1 + 0xfc) = uVar9 % 1000 + 6000;
            }
            else if (iVar7 == 2) {
              *(undefined4 *)(iVar1 + 0xfc) = 0xe4a;
            }
          }
          else if (0xfbfe < *(int *)(iVar1 + 0xfc) - 0x400U) {
            uVar11 = 0x20;
            param_2[1] = 0x20;
            goto LAB_00546468;
          }
        }
        puVar4 = PTR_PTR_0071b104;
        iVar1 = *(int *)PTR_PTR_0071b104;
        *(int *)(iVar1 + 0x34) = param_1[1];
        iVar2 = param_1[2];
        *(int *)(iVar1 + 0x30) = iVar7;
        *(int *)(iVar1 + 0x38) = iVar2;
        memcpy((void *)(iVar1 + 0x3c),param_1 + 3,0x48);
        FUN_005404f8(0);
        iVar7 = FUN_00555c7c(0x4f9,0x100,6,0);
        if (iVar7 != 0) {
          uVar11 = FUN_00540808(iVar7);
          param_2[1] = (int)uVar11;
          if ((int)uVar11 != 0) goto LAB_00546468;
        }
        puVar12 = (undefined4 *)(*(int *)puVar4 + 0xb4);
        lVar13 = 0x7f;
        do {
          *puVar12 = 0;
          puVar10 = PTR_DAT_0071b118;
          puVar12 = puVar12 + 8;
          lVar13 = lVar13 + -1;
        } while (lVar13 != 0);
        iVar7 = *(int *)PTR_DAT_0071b118;
        if (iVar7 != 0) {
          *(undefined4 *)(iVar7 + 0x118) = 1;
          *(undefined4 *)(iVar7 + 0x120) = 0;
          *(undefined4 *)(iVar7 + 0x114) = 0;
          *(undefined4 *)(iVar7 + 0x110) = 0;
          *(undefined4 *)(iVar7 + 0x11c) = 0;
          uVar11 = (*(code *)**(undefined4 **)(iVar7 + 0xf0))();
          if (uVar11 != 0) goto LAB_00546468;
        }
        FUN_0054b054();
        if (*(int *)puVar10 != 0) {
          (*(code *)**(undefined4 **)(*(int *)puVar10 + 0x48))();
        }
        puVar10 = PTR_PTR_0071b178;
        memset(*(int *)PTR_PTR_0071b178 + 0x208,0,0x80);
        puVar12 = *(undefined4 **)puVar4;
        iVar7 = *(int *)puVar6;
        *(undefined4 *)(*(int *)puVar10 + 4) = 0;
        *puVar12 = 0;
        if (((iVar7 == 0) || (*(undefined4 **)(iVar7 + 0x9c) == (undefined4 *)0x0)) ||
           ((*(int *)(iVar7 + 0xa4) == 0 || (*(int *)(iVar7 + 0xa0) == 0)))) {
          if ((undefined4 *)param_1[0x18] != (undefined4 *)0x0) {
            puVar12 = *(undefined4 **)puVar4;
            uVar8 = (**(code **)param_1[0x18])();
            *puVar12 = uVar8;
          }
        }
        else {
          uVar8 = (*(code *)**(undefined4 **)(iVar7 + 0x9c))();
          iVar7 = *(int *)puVar6;
          *puVar12 = uVar8;
          iVar1 = *(int *)puVar10;
          uVar8 = (*(code *)**(undefined4 **)(iVar7 + 0xa4))();
          iVar7 = *(int *)puVar6;
          iVar2 = *(int *)puVar10;
          *(undefined4 *)(iVar1 + 4) = uVar8;
          (*(code *)**(undefined4 **)(iVar7 + 0xa0))(iVar2 + 0x208,iVar2 + 0x248);
        }
        iVar7 = *(int *)PTR_DAT_0071b110;
        if (iVar7 != 0) {
          if (*(int *)puVar6 == 0) {
            iVar7 = (*(code *)**(undefined4 **)(iVar7 + 0xc))(0);
          }
          else {
            iVar7 = (*(code *)**(undefined4 **)(iVar7 + 0xc))(*(int *)puVar6 + 0xa8);
          }
          if (iVar7 != 0) {
            uVar11 = 0x10;
            param_2[1] = 0x10;
            goto LAB_00546468;
          }
        }
        puVar6 = PTR_DAT_0071b150;
        puVar10 = PTR_DAT_0071b150 + 0x78c;
        param_2[1] = 0;
        memset(puVar10,0,0x2000);
        iVar7 = *(int *)puVar5;
        iVar1 = *(int *)puVar4;
        iVar2 = param_1[0x17];
        iVar3 = param_1[0x16];
        *(undefined4 *)(puVar6 + 0x278c) = 0;
        *(int *)(iVar1 + 0x1090) = iVar2;
        *(int *)(iVar1 + 0x108c) = iVar3;
        if ((iVar7 == 0) || (uVar11 = FUN_00543120(), uVar11 == 0)) {
          FUN_00556d54();
          *(undefined4 *)(*(int *)puVar4 + 0x1084) = 0;
          FUN_005429b4();
          uVar11 = FUN_0054bab0();
        }
      }
      else {
        uVar11 = 0x21;
        param_2[1] = 0x21;
      }
    }
  }
LAB_00546468:
  return uVar11 & 0xffffffff;
}


// 0x054690c (0x50 bytes)
void FUN_0054690c(undefined8 param_1,int param_2,undefined4 param_3)

{
  undefined4 uVar1;
  
  uVar1 = FUN_005558c4(param_2,param_1,param_3);
  if (param_2 != 0) {
    *(undefined4 *)(param_2 + 0x4ac) = uVar1;
  }
  return;
}


// 0x054695c (0x6c bytes)
void FUN_0054695c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4,
                 undefined4 param_5,undefined4 param_6)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uStack00000040;
  undefined4 uStack00000044;
  
  uStack00000044 = (undefined4)param_3;
  iVar1 = *(int *)PTR_PTR_0071b104;
  uStack00000040 = (undefined4)((ulonglong)param_3 >> 0x20);
  *(undefined4 *)(iVar1 + 0x14) = param_4;
  *(undefined4 *)(iVar1 + 0x10) = uStack00000044;
  *(undefined4 *)(iVar1 + 0xc) = uStack00000040;
  _uStack00000040 = param_3;
  uVar2 = FUN_00541fb8();
  FUN_0054690c(uVar2,0,0x100,param_5,param_6);
  return;
}


// 0x05469c8 (0x158 bytes)
void FUN_005469c8(ushort param_1,undefined4 param_2,undefined4 param_3,int param_4,int param_5)

{
  int iVar1;
  undefined4 uVar2;
  
  if (*(int *)PTR_DAT_0071b114 != 0) {
    iVar1 = (*(code *)**(undefined4 **)(*(int *)PTR_DAT_0071b114 + 8))
                      (*(undefined4 *)(param_5 + 0x45c),param_1,*(int *)PTR_PTR_0071b104 + 0xc,
                       *(int *)PTR_PTR_0071b104 + 0x14);
    if (iVar1 == 0) {
      if (param_4 == 0) {
        uVar2 = FUN_00541fb8();
        FUN_0054690c(uVar2,param_5,param_1,param_2,param_3);
        return;
      }
      iVar1 = *(int *)(param_5 + (uint)param_1 * 4);
      if ((iVar1 != 0) && (*(int *)(iVar1 + 0x20) != 0)) {
        uVar2 = FUN_00541fb8();
        FUN_0054690c(uVar2,param_5,param_1,param_2,param_3);
        return;
      }
    }
  }
  return;
}


// 0x0546b20 (0xbc bytes)
void FUN_00546b20(undefined4 param_1,undefined4 param_2,undefined4 param_3,int param_4)

{
  undefined *puVar1;
  undefined4 uVar2;
  
  puVar1 = PTR_PTR_0071b104;
  if (param_4 == 0) {
    return;
  }
  FUN_0054edb0(*(int *)PTR_PTR_0071b104 + 0xc);
  *(undefined4 *)(*(int *)puVar1 + 0x14) = 0;
  uVar2 = FUN_00541fb8();
  FUN_0054690c(uVar2,param_1,param_2,param_3,param_4);
  return;
}


// 0x0546bdc (0x1ac bytes)
int FUN_00546bdc(int *param_1,int *param_2,undefined4 param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  GPiece<24> local_30;
  
  iVar3 = 3;
  if (*param_1 != 0) {
    iVar3 = *(int *)(*param_1 + 0x454);
    if (((iVar3 == 4) || (iVar3 == 6)) || (iVar3 == 7)) {
      return 0xe;
    }
    iVar3 = param_1[4];
    iVar2 = param_1[5];
    iVar1 = param_1[6];
    param_2[1] = param_1[3];
    param_2[2] = iVar3;
    param_2[3] = iVar2;
    param_2[4] = iVar1;
    iVar3 = param_1[8];
    iVar2 = param_1[9];
    iVar1 = param_1[10];
    param_2[5] = param_1[7];
    param_2[6] = iVar3;
    param_2[7] = iVar2;
    param_2[8] = iVar1;
    iVar3 = param_1[0xc];
    iVar2 = param_1[0xd];
    param_2[9] = param_1[0xb];
    param_2[10] = iVar3;
    param_2[0xb] = iVar2;
    iVar3 = param_1[0xe];
    if (iVar3 < 0x577) {
      iVar2 = FUN_00554fd4(param_3,param_1[2],param_1[0x12],iVar3,param_1[0x11],PTR_PTR_0071b17c,
                           local_30);
    }
    else {
      iVar2 = FUN_00554fd4(param_3,param_1[2],param_1[0x12],iVar3,param_1[0x11],PTR_PTR_0071b17c,
                           local_30);
    }
    if (iVar2 == 0) {
      iVar3 = *param_2;
    }
    else {
      iVar3 = *param_2;
      if (iVar3 == 0) {
        iVar3 = FUN_00540808(iVar2);
        *param_2 = iVar3;
      }
    }
  }
  return iVar3;
}


// 0x0546d88 (0x268 bytes)
void FUN_00546d88(ushort *param_1,void *param_2,ulonglong param_3,int param_4)

{
  ushort uVar1;
  code *pcVar2;
  undefined4 *puVar3;
  longlong lVar4;
  ulonglong *puVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  undefined4 uVar8;
  int iVar9;
  ulonglong unaff_r22;
  ulonglong unaff_r23;
  ulonglong unaff_r24;
  ulonglong unaff_r25;
  ulonglong unaff_r26;
  ulonglong unaff_r27;
  ulonglong unaff_r28;
  ulonglong unaff_r29;
  ulonglong unaff_r30;
  ulonglong unaff_r31;
  ulonglong in_LR;
  
  uVar6 = ZEXT48(&stack0x00000000);
  puVar5 = (ulonglong *)(uVar6 - 0x160);
  *puVar5 = uVar6;
  puVar5[0x24] = unaff_r24;
  puVar5[0x25] = unaff_r25;
  puVar5[0x26] = unaff_r26;
  puVar5[0x27] = unaff_r27;
  puVar5[0x2b] = unaff_r31;
  puVar5[0x22] = unaff_r22;
  puVar5[0x23] = unaff_r23;
  puVar5[0x28] = unaff_r28;
  puVar5[0x29] = unaff_r29;
  puVar5[0x2a] = unaff_r30;
  puVar5[0x2e] = in_LR;
  if ((param_4 != 0) && (param_1 != (ushort *)0x0)) {
    if (*(int *)(param_4 + 0x500) == 0) {
      lVar4 = (uVar6 - 0x160) - ((param_3 + 2 & 0xffffffff) + 0x1e & 0xfffffffffffffff0);
      *(ulonglong *)lVar4 = *puVar5;
      uVar7 = lVar4 + 0x7fU & 0xfffffff0;
      iVar9 = (int)uVar7;
      FUN_00551f78(uVar7,param_3 & 0xffff);
      memcpy((void *)(iVar9 + 2),param_2,(size_t)param_3);
      uVar7 = uVar6 - 0x9c & 0xffffffff;
      memset(uVar7,0,0x4c);
      *(int *)((int)puVar5 + 0xc4) = param_4;
      *(undefined1 *)(puVar5 + 0x19) = 0x50;
      puVar3 = (undefined4 *)(uVar6 - 0xcc);
      puVar3[0xb] = 0;
      *puVar3 = 0;
      puVar3[1] = 0;
      puVar3[2] = 0;
      puVar3[3] = 0;
      puVar3[4] = 0;
      puVar3[5] = 0;
      puVar3[6] = 0;
      puVar3[7] = 0;
      puVar3[8] = 0;
      puVar3[9] = 0;
      puVar3[10] = 0;
      if (3 < *param_1) {
        puVar3 = *(undefined4 **)(param_1 + 2);
        *(int *)((int)puVar5 + 0x10c) = iVar9;
        *(undefined4 *)(puVar5 + 0x1a) = *puVar3;
        uVar8 = *(undefined4 *)(param_4 + 0x44c);
        *(int *)((int)puVar5 + 0xfc) = (int)(param_3 + 2);
        *(undefined4 *)((int)puVar5 + 0xcc) = 0x30;
        *(undefined4 *)(puVar5 + 0x1f) = uVar8;
        FUN_00546bdc(uVar7,uVar6 - 0xcc & 0xffffffff,0);
      }
    }
    else {
      uVar8 = *(undefined4 *)(param_4 + 0x45c);
      pcVar2 = (code *)**(undefined4 **)(*(int *)PTR_DAT_0071b114 + 0xb4);
      puVar5[5] = ZEXT48(&TOC_BASE);
      uVar8 = (*pcVar2)(uVar8,uVar6 - 0xd8);
      uVar7 = puVar5[5];
      iVar9 = FUN_00540808(uVar8);
      if (iVar9 == 0) {
        puVar3 = *(undefined4 **)(param_4 + 0x500);
        *(undefined4 *)(puVar5 + 0xf) = *(undefined4 *)(param_1 + 2);
        *(undefined4 *)((int)puVar5 + 0x84) = *(undefined4 *)((int)puVar5 + 0x8c);
        uVar1 = *param_1;
        *(undefined4 *)(puVar5 + 0xe) = *(undefined4 *)(param_1 + 4);
        *(undefined4 *)((int)puVar5 + 0x7c) = *(undefined4 *)(puVar5 + 0x12);
        *(undefined2 *)(puVar5 + 0x10) = *(undefined2 *)(puVar5 + 0x11);
        *(ushort *)((int)puVar5 + 0x74) = uVar1;
        pcVar2 = (code *)*puVar3;
        uVar8 = *(undefined4 *)(param_4 + 0x504);
        puVar5[5] = uVar7;
        (*pcVar2)(uVar6 - 0xf0,uVar6 - 0xe4,param_2,param_3 & 0xffffffff,uVar8);
        return;
      }
    }
  }
  return;
}


// 0x0546ff0 (0x240 bytes)
undefined8 FUN_00546ff0(int param_1,uint param_2,int param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined4 *puVar3;
  undefined4 uVar4;
  int iVar5;
  int iVar6;
  longlong lVar7;
  undefined4 local_e0;
  undefined1 local_dc;
  undefined1 local_db;
  GPiece<48> auStack_d8;
  int local_a8;
  undefined1 local_a4;
  undefined4 local_a0;
  uint local_9c;
  undefined4 local_74;
  undefined4 local_70;
  undefined4 local_64;
  undefined4 *local_60;
  undefined4 local_50;
  undefined4 local_4c;
  
  if ((param_1 != 0) && (((param_2 < 0x100 || (param_2 == 0xffff)) && (param_3 != 0)))) {
    uVar2 = 10;
    if (param_2 != 0xffffffff) {
      iVar5 = 0;
      lVar7 = 0x7f;
      iVar6 = *(int *)PTR_PTR_0071b104;
      do {
        if (*(int *)(iVar6 + 0xb4) == 0) {
          iVar6 = iVar5 * 0x20 + *(int *)PTR_PTR_0071b104;
          local_db = 1;
          local_dc = (undefined1)iVar5;
          local_e0 = 0;
          memset(&local_a8,0,0x4c);
          local_74 = *(undefined4 *)(param_1 + 0x44c);
          local_a4 = 0x80;
          local_a0 = 1;
          local_60 = &local_e0;
          local_70 = 8;
          local_64 = 0;
          local_a8 = param_1;
          local_9c = param_2;
          FUN_00546bdc(&local_a8,auStack_d8,0);
          if (param_2 == 0xffff) {
            FUN_00545168(&local_50,param_1);
            puVar1 = PTR_DAT_0071b10c;
            *(undefined4 *)(iVar6 + 0xa4) = local_50;
            iVar5 = *(int *)puVar1;
            *(undefined4 *)(iVar6 + 0xa8) = local_4c;
            if (iVar5 == 0) {
              *(undefined4 *)(iVar6 + 0xac) = 0;
            }
            else {
              *(undefined4 *)(iVar6 + 0xac) = *(undefined4 *)(iVar5 + 0xfc);
            }
            *(undefined4 *)(iVar6 + 0xbc) = 0;
            *(undefined4 *)(iVar6 + 0xc0) = 0x100;
          }
          else {
            puVar3 = (undefined4 *)FUN_0054170c(param_1,param_2);
            if (puVar3 == (undefined4 *)0x0) {
              return 3;
            }
            *(undefined4 *)(iVar6 + 0xa4) = *puVar3;
            uVar4 = puVar3[1];
            *(int *)(iVar6 + 0xbc) = param_1;
            *(undefined4 *)(iVar6 + 0xa8) = uVar4;
            uVar4 = puVar3[2];
            *(uint *)(iVar6 + 0xc0) = param_2;
            *(undefined4 *)(iVar6 + 0xac) = uVar4;
          }
          *(int *)(iVar6 + 0xb4) = param_3;
          *(undefined4 *)(iVar6 + 0xb0) = 0;
          uVar4 = FUN_0054536c();
          *(undefined4 *)(iVar6 + 0xb8) = uVar4;
          return 0;
        }
        iVar5 = iVar5 + 1;
        lVar7 = lVar7 + -1;
        iVar6 = iVar6 + 0x20;
      } while (lVar7 != 0);
      uVar2 = 0x15;
    }
    return uVar2;
  }
  return 3;
}


// 0x0547230 (0x74 bytes)
undefined8 FUN_00547230(undefined4 *param_1)

{
  undefined8 uVar1;
  int iVar2;
  
  uVar1 = 3;
  if (param_1 != (undefined4 *)0x0) {
    iVar2 = FUN_005519cc(*param_1,param_1[2]);
    if ((iVar2 == 0) && (iVar2 = FUN_005519e0(param_1[1]), iVar2 == 0)) {
      return 0;
    }
    uVar1 = 0x14;
  }
  return uVar1;
}


// 0x05472a4 (0x34 bytes)
void FUN_005472a4(int *param_1)

{
  if (*param_1 != 0) {
    FUN_005519f0();
  }
  return;
}


// 0x05472d8 (0x1dc bytes)
void FUN_005472d8(ulonglong param_1)

{
  int iVar1;
  uint uVar2;
  undefined4 *puVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  uint uVar6;
  ulonglong uVar7;
  uint uStack00000030;
  
  uStack00000030 = (uint)param_1;
  if (*(int *)(uStack00000030 + 0x45c) != 0) {
    (*(code *)**(undefined4 **)(*(int *)PTR_DAT_0071b114 + 4))(*(int *)(uStack00000030 + 0x45c));
    param_1 = (ulonglong)uStack00000030;
    *(undefined4 *)(uStack00000030 + 0x45c) = 0;
  }
  uVar7 = 0;
  do {
    uVar5 = uVar7 & 0x3fffffff;
    uVar4 = uVar7 & 0xffffffff;
    uVar7 = uVar7 + 1;
    if ((int)param_1 != 0) {
      puVar3 = *(undefined4 **)((int)param_1 + (int)(uVar4 << 2));
      if (puVar3 != (undefined4 *)0x0) {
        puVar3[10] = 0;
        *puVar3 = 0;
        puVar3[1] = 0;
        puVar3[2] = 0;
        puVar3[3] = 0;
        puVar3[4] = 0;
        puVar3[5] = 0;
        puVar3[6] = 0;
        puVar3[7] = 0;
        puVar3[8] = 0;
        puVar3[9] = 0;
      }
      FUN_005472a4(param_1 + uVar5 * 4 & 0xffffffff);
      param_1 = (ulonglong)uStack00000030;
    }
  } while (uVar7 != 0x100);
  FUN_005472a4(param_1 + 0x410 & 0xffffffff);
  iVar1 = *(int *)PTR_PTR_0071b104;
  *(undefined2 *)(uStack00000030 + 0x40c) = 0;
  uVar2 = *(uint *)(iVar1 + 0x1088);
  *(undefined4 *)(uStack00000030 + 0x414) = 0x100;
  *(undefined4 *)(uStack00000030 + 0x448) = 0;
  *(undefined4 *)(uStack00000030 + 0x444) = 0xffffffff;
  *(undefined4 *)(uStack00000030 + 0x408) = 0;
  *(undefined4 *)(uStack00000030 + 0x440) = 0;
  *(undefined4 *)(uStack00000030 + 0x404) = 0x100;
  *(undefined4 *)(uStack00000030 + 0x400) = 0;
  *(undefined4 *)(uStack00000030 + 0x4c0) = 0;
  *(undefined4 *)(uStack00000030 + 0x4c4) = 0;
  *(undefined4 *)(uStack00000030 + 0x4c8) = 0;
  *(undefined4 *)(uStack00000030 + 0x4cc) = 0;
  *(undefined4 *)(uStack00000030 + 0x4d0) = 0;
  *(undefined4 *)(uStack00000030 + 0x4d4) = 0;
  *(undefined4 *)(uStack00000030 + 0x43c) = 0;
  if (uVar2 == uStack00000030) {
    *(undefined4 *)(iVar1 + 0x1088) = *(undefined4 *)(uStack00000030 + 0x534);
    FUN_005472a4(&stack0x00000030);
    return;
  }
  if (uVar2 != 0) {
    for (uVar6 = *(uint *)(uVar2 + 0x534); uStack00000030 != uVar6; uVar6 = *(uint *)(uVar6 + 0x534)
        ) {
      if (uVar6 == 0) goto LAB_0054745c;
      uVar2 = uVar6;
    }
    *(undefined4 *)(uVar2 + 0x534) = *(undefined4 *)(uStack00000030 + 0x534);
  }
LAB_0054745c:
  FUN_005472a4(&stack0x00000030);
  return;
}


// 0x05474b4 (0x408 bytes)
ulonglong FUN_005474b4(void)

{
  bool bVar1;
  undefined1 uVar2;
  undefined1 uVar3;
  undefined1 uVar4;
  undefined *puVar5;
  undefined *puVar6;
  ulonglong uVar7;
  undefined4 uVar8;
  undefined4 *puVar9;
  int iVar10;
  undefined8 *puVar11;
  int *piVar12;
  uint uVar13;
  int iVar14;
  GPiece<4> auStack_b0;
  uint local_ac;
  GPiece<8> local_a8;
  GPiece<16> auStack_a0;
  GPiece<64> local_90;
  
  thunk_FUN_00556eb4(auStack_b0);
  uVar7 = FUN_00545408(1);
  puVar5 = PTR_PTR_0071b104;
  if ((int)uVar7 == 0) {
    if (*(int *)(*(int *)PTR_PTR_0071b104 + 0x1084) != 0) {
      FUN_005576c4(*(int *)PTR_PTR_0071b104 + 4);
    }
    puVar6 = PTR_DAT_0071b118;
    iVar10 = *(int *)PTR_DAT_0071b118;
    if ((((iVar10 != 0) && (iVar14 = *(int *)(iVar10 + 0x138), iVar14 != 0)) &&
        (*(int *)(iVar14 + 0x440) == 1)) &&
       ((*(int *)(iVar14 + 0x404) < *(int *)(iVar14 + 0x44c) && (*(int *)(iVar10 + 0x124) != 0)))) {
      (*(code *)**(undefined4 **)(iVar10 + 0x9c))();
      (*(code *)**(undefined4 **)(*(int *)puVar6 + 0xa0))();
    }
    iVar10 = 0;
    thunk_FUN_00556eb4(&local_ac);
    puVar11 = (undefined8 *)(*(int *)puVar5 + 0xa4);
    piVar12 = (int *)(*(int *)puVar5 + 0xb4);
    do {
      if ((*piVar12 != 0) && (0 < (int)((local_ac - piVar12[1]) + -30000))) {
        FUN_0054eecc(auStack_a0,*puVar11);
        iVar14 = *(int *)puVar5;
        uVar2 = *(undefined1 *)((int)puVar11 + 1);
        uVar3 = *(undefined1 *)((int)puVar11 + 2);
        uVar4 = *(undefined1 *)((int)puVar11 + 3);
        *(undefined1 *)(iVar14 + 0xc) = *(undefined1 *)puVar11;
        *(undefined1 *)(iVar14 + 0xd) = uVar2;
        *(undefined1 *)(iVar14 + 0xe) = uVar3;
        *(undefined1 *)(iVar14 + 0xf) = uVar4;
        uVar2 = *(undefined1 *)((int)puVar11 + 5);
        uVar3 = *(undefined1 *)((int)puVar11 + 6);
        uVar4 = *(undefined1 *)((int)puVar11 + 7);
        puVar9 = (undefined4 *)*piVar12;
        *(undefined1 *)(iVar14 + 0x10) = *(undefined1 *)((int)puVar11 + 4);
        *(undefined1 *)(iVar14 + 0x11) = uVar2;
        *(undefined1 *)(iVar14 + 0x12) = uVar3;
        *(undefined1 *)(iVar14 + 0x13) = uVar4;
        *(undefined4 *)(iVar14 + 0x14) = *(undefined4 *)(puVar11 + 1);
        (*(code *)*puVar9)(0xd,auStack_a0,0);
        *piVar12 = 0;
      }
      bVar1 = iVar10 != 0x7e;
      puVar11 = puVar11 + 4;
      iVar10 = iVar10 + 1;
      piVar12 = piVar12 + 8;
    } while (bVar1);
    uVar7 = FUN_0054567c(1);
    if ((uVar7 == 0) &&
       ((iVar10 = *(int *)puVar6, iVar10 == 0 ||
        (uVar7 = (*(code *)**(undefined4 **)(iVar10 + 0xa4))(), uVar7 == 0)))) {
      uVar8 = FUN_00554ce4();
      uVar7 = FUN_00540808(uVar8);
      if (uVar7 == 0) {
        iVar10 = *(int *)(*(int *)puVar5 + 0x1088);
        while (iVar10 != 0) {
          if ((*(char *)(iVar10 + 0x464) == '\0') ||
             (thunk_FUN_00556bb8(iVar10 + 0x468,&local_ac), local_ac < 0x1f5)) {
            iVar10 = *(int *)(iVar10 + 0x534);
          }
          else {
            *(undefined4 *)(iVar10 + 0x440) = 0;
            if (*(int *)(iVar10 + 0x530) != 0) {
              iVar14 = iVar10 + 0x520;
              uVar13 = 0;
              do {
                puVar9 = (undefined4 *)(iVar14 + -0x10);
                uVar13 = uVar13 + 1;
                iVar14 = iVar14 + 4;
                (**(code **)*puVar9)(local_a8);
              } while (uVar13 < *(uint *)(iVar10 + 0x530));
            }
            FUN_00542970(0,*(undefined4 *)(iVar10 + 0x444));
            (*(code *)**(undefined4 **)(iVar10 + 0x4b8))(local_90);
            *(undefined1 *)(iVar10 + 0x464) = 0;
            if (*(int *)(iVar10 + 0x478) != 0) {
              FUN_00558ba0(*(undefined4 *)(iVar10 + 0x404),*(undefined4 *)(iVar10 + 0x41c));
            }
            iVar14 = *(int *)(iVar10 + 0x534);
            FUN_005472d8(iVar10);
            iVar10 = iVar14;
          }
        }
        uVar7 = FUN_0054ca88();
      }
    }
  }
  return uVar7 & 0xffffffff;
}


// 0x05478bc (0x37c bytes)
undefined8 FUN_005478bc(int *param_1)

{
  int iVar1;
  undefined *puVar2;
  int iVar3;
  GPiece<32> local_40;
  
  puVar2 = PTR_PTR_0071b104;
  if ((param_1 == (int *)0x0) || (iVar1 = *param_1, iVar1 == 0)) {
    return 3;
  }
  iVar3 = *(int *)(*(int *)PTR_PTR_0071b104 + 0x1088);
  while( true ) {
    if (iVar3 == 0) {
      return 1;
    }
    if (iVar1 == iVar3) break;
    iVar3 = *(int *)(iVar3 + 0x534);
  }
  iVar3 = *(int *)PTR_DAT_0071b118;
  if ((iVar3 != 0) && (*(int *)(iVar3 + 0x138) == iVar1)) {
    (*(code *)**(undefined4 **)(iVar3 + 0x18))(iVar1);
  }
  if (*(int *)(iVar1 + 0x4a4) != 0) {
    *(undefined4 *)(*(int *)puVar2 + 0x1084) = 0;
  }
  puVar2 = PTR_DAT_0071b120;
  if (param_1[2] == 0) {
    return 3;
  }
  if ((*(int *)PTR_DAT_0071b120 != 0) &&
     (iVar3 = (*(code *)**(undefined4 **)(*(int *)PTR_DAT_0071b120 + 0x38))(iVar1), iVar3 != 0)) {
    (*(code *)**(undefined4 **)(*(int *)puVar2 + 0x34))(iVar1);
  }
  puVar2 = PTR_DAT_0071b150;
  if (3 < *(int *)(iVar1 + 0x440) - 1U) goto LAB_00547ac8;
  *(undefined4 *)(iVar1 + 0x440) = 5;
  if (*(int *)puVar2 == 0) {
LAB_00547bd4:
    if (*(int *)(iVar1 + 0x454) == 2) goto LAB_00547ac8;
  }
  else if (*(int *)(iVar1 + 0x454) == 2) {
    (*(code *)**(undefined4 **)(*(int *)PTR_DAT_0071b114 + 0x38))(*(undefined4 *)(iVar1 + 0x45c));
    thunk_FUN_00556a58(iVar1 + 0x468);
    iVar3 = param_1[3];
    *(int *)(iVar1 + 0x4b8) = param_1[2];
    *(int *)(iVar1 + 0x4bc) = iVar3;
    *(undefined1 *)(iVar1 + 0x464) = 1;
    goto LAB_00547bd4;
  }
  (*(code *)**(undefined4 **)(*(int *)PTR_DAT_0071b110 + 0x14))
            (*(undefined4 *)(iVar1 + 0x458),param_1[1]);
  iVar3 = *(int *)puVar2;
  *(undefined4 *)(iVar1 + 0x440) = 0;
  if (iVar3 == 0) {
LAB_00547bf0:
    (**(code **)param_1[2])(local_40);
  }
  else {
    if (*(int *)(iVar1 + 0x45c) == 0) {
      if (*(int *)(iVar1 + 0x454) != 5) goto LAB_00547bf0;
    }
    else {
      (*(code *)**(undefined4 **)(*(int *)PTR_DAT_0071b114 + 0x38))(*(int *)(iVar1 + 0x45c));
    }
    thunk_FUN_00556a58(iVar1 + 0x468);
    iVar3 = param_1[3];
    *(int *)(iVar1 + 0x4b8) = param_1[2];
    *(int *)(iVar1 + 0x4bc) = iVar3;
    *(undefined1 *)(iVar1 + 0x464) = 1;
  }
LAB_00547ac8:
  if (*(int *)(iVar1 + 0x478) != 0) {
    *(undefined4 *)(iVar1 + 0x4a8) = 0;
    *(undefined4 *)(iVar1 + 0x478) = 0;
    FUN_00557b94(iVar1 + 0x41c);
  }
  if (*(char *)(iVar1 + 0x464) != '\0') {
    return 0;
  }
  FUN_005472d8(iVar1);
  return 0;
}


// 0x0547c38 (0x288 bytes)
undefined8 FUN_00547c38(void)

{
  undefined *puVar1;
  undefined *puVar2;
  int iVar3;
  int iVar4;
  
  FUN_005451dc();
  puVar1 = PTR_DAT_0071b118;
  iVar3 = *(int *)PTR_DAT_0071b118;
  if (iVar3 != 0) {
    if (*(int *)(iVar3 + 0x138) != 0) {
      (*(code *)**(undefined4 **)(iVar3 + 0x18))(*(int *)(iVar3 + 0x138));
      iVar3 = *(int *)puVar1;
    }
    (*(code *)**(undefined4 **)(iVar3 + 0xa8))();
    (*(code *)**(undefined4 **)(*(int *)puVar1 + 0x54))();
    (*(code *)**(undefined4 **)(*(int *)puVar1 + 0x5c))();
    iVar3 = *(int *)puVar1;
    if (*(int *)(iVar3 + 0x130) != 0) {
      FUN_005472a4(iVar3 + 0x130);
      iVar3 = *(int *)puVar1;
    }
    (*(code *)**(undefined4 **)(iVar3 + 0xf4))();
  }
  FUN_00554dbc();
  puVar2 = PTR_DAT_0071b120;
  puVar1 = PTR_PTR_0071b104;
  iVar3 = *(int *)(*(int *)PTR_PTR_0071b104 + 0x1088);
  while (iVar3 != 0) {
    while ((iVar4 = *(int *)puVar2, iVar4 == 0 ||
           (iVar4 = (*(code *)**(undefined4 **)(iVar4 + 0x38))(iVar3), iVar4 == 0))) {
      FUN_005472d8(iVar3);
      iVar3 = *(int *)(*(int *)puVar1 + 0x1088);
      if (iVar3 == 0) goto LAB_00547df0;
    }
    (*(code *)**(undefined4 **)(*(int *)puVar2 + 0x34))(iVar3);
    FUN_005472d8(iVar3);
    iVar3 = *(int *)(*(int *)puVar1 + 0x1088);
  }
LAB_00547df0:
  puVar2 = PTR_DAT_0071b150;
  if (*(int *)PTR_DAT_0071b150 != 0) {
    (*(code *)**(undefined4 **)(*(int *)PTR_DAT_0071b10c + 0x78))();
    *(undefined4 *)puVar2 = 0;
  }
  if (*(int *)PTR_DAT_0071b110 != 0) {
    (*(code *)**(undefined4 **)(*(int *)PTR_DAT_0071b110 + 0x10))();
  }
  if (*(int *)PTR_DAT_0071b180 != 0) {
    (*(code *)**(undefined4 **)(*(int *)PTR_DAT_0071b180 + 8))();
  }
  FUN_005429b4();
  *(undefined4 *)(*(int *)puVar1 + 0x1084) = 0;
  return 0;
}


// 0x0547ec0 (0x38 bytes)
undefined4 FUN_00547ec0(undefined8 param_1)

{
  GPiece<16> local_10;
  
  FUN_00551de8(local_10,param_1);
  return 0;
}


// 0x0547ef8 (0xd8 bytes)
undefined8 FUN_00547ef8(int param_1,uint param_2,undefined4 *param_3)

{
  int iVar1;
  int iVar2;
  undefined8 uVar3;
  
  if (param_3 != (undefined4 *)0x0) {
    *param_3 = 0;
    uVar3 = 1;
    if (param_2 < 0x100) {
      iVar1 = param_2 * 4;
      if (param_1 != 0) {
        if (*(int *)(param_1 + iVar1) == 0) {
          iVar2 = FUN_00547ec0(0x2c);
          *(int *)(param_1 + iVar1) = iVar2;
          if (iVar2 == 0) {
            return 0x14;
          }
        }
        uVar3 = 0;
        *param_3 = *(undefined4 *)(param_1 + iVar1);
      }
      return uVar3;
    }
  }
  return 3;
}


// 0x0547fd0 (0x56c bytes)
/* WARNING: Removing unreachable block (ram,0x005482fc) */
/* WARNING: Removing unreachable block (ram,0x00548310) */
/* WARNING: Removing unreachable block (ram,0x00548318) */
/* WARNING: Removing unreachable block (ram,0x005484e0) */
/* WARNING: Removing unreachable block (ram,0x005484ec) */
/* WARNING: Removing unreachable block (ram,0x00548328) */
/* WARNING: Removing unreachable block (ram,0x0054836c) */
/* WARNING: Removing unreachable block (ram,0x00548528) */
/* WARNING: Removing unreachable block (ram,0x00548380) */
/* WARNING: Removing unreachable block (ram,0x00548390) */
/* WARNING: Removing unreachable block (ram,0x005483b8) */
/* WARNING: Removing unreachable block (ram,0x005483cc) */
/* WARNING: Removing unreachable block (ram,0x005483f4) */
/* WARNING: Removing unreachable block (ram,0x00548464) */
/* WARNING: Removing unreachable block (ram,0x0054846c) */
/* WARNING: Removing unreachable block (ram,0x00548478) */

void FUN_00547fd0(int param_1,int param_2,int param_3,undefined8 param_4,undefined4 param_5)

{
  undefined *puVar1;
  int iVar2;
  GPiece<4> local_80;
  GPiece<28> local_7c;
  GPiece<16> local_60;
  GPiece<32> local_50;
  
  puVar1 = PTR_DAT_0071b120;
  iVar2 = *(int *)(param_1 + 0x454);
  if (((iVar2 == 4) || (iVar2 == 6)) || (iVar2 == 7)) {
    if (param_2 == 0) {
      *(undefined4 *)(param_1 + 0x440) = 3;
      FUN_00540654(local_80,param_5);
    }
    else if (param_3 < *(int *)(param_1 + 0x44c)) {
      *(undefined4 *)(param_1 + 0x404) = 0x7fff;
      *(undefined4 *)(param_1 + 0x440) = 1;
      *(undefined4 *)(param_1 + 0x448) = 0;
      *(undefined4 *)(param_1 + 0x400) = 0;
      FUN_005412c4(param_1,1);
    }
    else {
      *(undefined4 *)(param_1 + 0x440) = 3;
      *(undefined4 *)(param_1 + 0x404) = 0x100;
      *(undefined4 *)(param_1 + 0x400) = 0;
    }
  }
  else {
    if (param_2 == 0) {
      if ((*(int *)PTR_DAT_0071b120 != 0) &&
         (iVar2 = (*(code *)**(undefined4 **)(*(int *)PTR_DAT_0071b120 + 0x38))(param_1), iVar2 != 0
         )) {
        (*(code *)**(undefined4 **)(*(int *)puVar1 + 0x34))(param_1);
      }
      *(undefined4 *)(param_1 + 0x440) = 3;
      FUN_00540654(local_80,param_5);
    }
    else {
      if (param_3 < *(int *)(param_1 + 0x44c)) {
        FUN_00547ef8(param_1,param_3,local_7c);
        goto LAB_00548160;
      }
      if ((*(int *)PTR_DAT_0071b120 != 0) &&
         (iVar2 = (*(code *)**(undefined4 **)(*(int *)PTR_DAT_0071b120 + 0x38))(param_1), iVar2 != 0
         )) {
        (*(code *)**(undefined4 **)(*(int *)puVar1 + 0x34))(param_1);
      }
      *(undefined4 *)(param_1 + 0x404) = 0x100;
      *(undefined4 *)(param_1 + 0x440) = 3;
      *(undefined4 *)(param_1 + 0x400) = 0;
    }
    if (((*(int *)(param_1 + 0x448) == 0) && ((*(uint *)(param_1 + 0x43c) & 1) == 0)) &&
       (*(int *)(param_1 + 0x4a8) == 0)) {
      *(uint *)(param_1 + 0x43c) = *(uint *)(param_1 + 0x43c) | 1;
      *(undefined4 *)(param_1 + 0x4a8) = 1;
      if (*(int *)(param_1 + 0x4d0) != 0) {
        (*(code *)**(undefined4 **)(param_1 + 0x4d0))(local_60);
      }
    }
  }
LAB_00548160:
  if (*(int *)(param_1 + 0x4b0) != 0) {
    (*(code *)**(undefined4 **)(param_1 + 0x4b0))(local_50);
    *(undefined4 *)(param_1 + 0x4b4) = 0;
    *(undefined4 *)(param_1 + 0x4b0) = 0;
  }
  return;
}


// 0x054853c (0x2b4 bytes)
/* WARNING: Removing unreachable block (ram,0x005486dc) */
/* WARNING: Removing unreachable block (ram,0x00548744) */

void FUN_0054853c(int param_1,uint param_2,int param_3)

{
  undefined *puVar1;
  int iVar2;
  GPiece<4> local_70;
  GPiece<16> local_6c;
  GPiece<36> local_5c;
  
  puVar1 = PTR_DAT_0071b120;
  if ((param_1 != 0) && (*(int *)(param_1 + 0x440) != 1)) {
    if (param_3 == 0) {
      *(undefined4 *)(param_1 + 0x400) = 0;
      *(undefined4 *)(param_1 + 0x404) = 0x100;
      iVar2 = *(int *)puVar1;
      *(undefined4 *)(param_1 + 0x440) = 3;
      if ((iVar2 != 0) && (iVar2 = (*(code *)**(undefined4 **)(iVar2 + 0x38))(param_1), iVar2 != 0))
      {
        (*(code *)**(undefined4 **)(*(int *)puVar1 + 0x34))(param_1);
      }
      if (((*(int *)(param_1 + 0x448) == 0) && ((*(uint *)(param_1 + 0x43c) & 1) == 0)) &&
         (*(int *)(param_1 + 0x4a8) == 0)) {
        *(uint *)(param_1 + 0x43c) = *(uint *)(param_1 + 0x43c) | 1;
        *(undefined4 *)(param_1 + 0x4a8) = 1;
        if (*(int *)(param_1 + 0x4d0) != 0) {
          (*(code *)**(undefined4 **)(param_1 + 0x4d0))(local_6c);
        }
      }
      if (*(int *)(param_1 + 0x4b0) != 0) {
        (*(code *)**(undefined4 **)(param_1 + 0x4b0))(local_5c);
        *(undefined4 *)(param_1 + 0x4b4) = 0;
        *(undefined4 *)(param_1 + 0x4b0) = 0;
      }
    }
    else if (param_2 < 0x100) {
      FUN_00547ef8(param_1,param_2,local_70);
    }
  }
  return;
}


// 0x05487f0 (0x2b4 bytes)
void FUN_005487f0(short param_1,int param_2,int param_3,undefined4 param_4,int param_5)

{
  bool bVar1;
  ulonglong uVar2;
  int iVar3;
  undefined4 uVar4;
  undefined8 uVar5;
  int *piVar6;
  GPiece<24> local_50;
  
  if (param_5 != 0) {
    if ((param_3 == 0) && (param_1 != -1)) {
      if (*(int *)(param_5 + 0x454) == 2) {
        uVar4 = FUN_00542754(0,param_4);
        FUN_0054853c(param_5,param_1,1,param_2,uVar4);
      }
      piVar6 = (int *)PTR_DAT_0071b120;
      if (*(int *)PTR_DAT_0071b120 == 0) {
        return;
      }
      iVar3 = (*(code *)**(undefined4 **)(*(int *)PTR_DAT_0071b120 + 0x38))(param_5);
      if (iVar3 != 0) {
        (*(code *)**(undefined4 **)(*piVar6 + 0x60))(param_5,param_1);
      }
      bVar1 = true;
      uVar5 = 1;
      if (*(int *)(param_5 + 0x454) == 2) {
        (*(code *)**(undefined4 **)(*piVar6 + 0x4c))(param_5,param_2 + -1);
        uVar5 = 1;
      }
    }
    else {
      bVar1 = false;
      uVar5 = 0;
      piVar6 = (int *)PTR_DAT_0071b120;
    }
    if (*piVar6 != 0) {
      (*(code *)**(undefined4 **)(*piVar6 + 0x50))(param_5,uVar5);
    }
    if (!bVar1) {
      if (((*piVar6 != 0) &&
          (iVar3 = (*(code *)**(undefined4 **)(*piVar6 + 0x38))(param_5), iVar3 != 0)) &&
         (uVar2 = ((ulonglong)*(uint *)(param_5 + 0x43c) & 1) << 0x1e |
                  (((ulonglong)*(uint *)(param_5 + 0x43c) | 4) << 0x20) >> 0x22,
         *(uint *)(param_5 + 0x43c) = (uint)(uVar2 << 2) | (uint)uVar2 >> 0x1e,
         *(int *)(param_5 + 0x4d0) != 0)) {
        (*(code *)**(undefined4 **)(param_5 + 0x4d0))(local_50);
      }
      if (*(int *)(param_5 + 0x454) == 2) {
        uVar4 = FUN_00542754(param_3,param_4);
        FUN_0054853c(param_5,0x100,0,0,uVar4);
        return;
      }
    }
  }
  return;
}


// 0x0548aa4 (0xb4 bytes)
undefined8 FUN_00548aa4(int *param_1)

{
  int iVar1;
  undefined8 uVar2;
  int iVar3;
  undefined4 uVar4;
  
  uVar2 = 3;
  if (param_1 != (int *)0x0) {
    iVar3 = FUN_00547ec0(0x538);
    *param_1 = iVar3;
    uVar2 = 0x14;
    if (iVar3 != 0) {
      iVar1 = *(int *)PTR_PTR_0071b104;
      *(undefined4 *)(iVar3 + 0x534) = *(undefined4 *)(iVar1 + 0x1088);
      iVar3 = *param_1;
      *(int *)(iVar1 + 0x1088) = iVar3;
      iVar1 = *param_1;
      *(undefined2 *)(iVar1 + 0x40c) = 8;
      *(undefined4 *)(iVar3 + 0x418) = 0;
      uVar4 = FUN_00547ec0(8);
      iVar3 = *param_1;
      uVar2 = 0;
      *(undefined4 *)(iVar1 + 0x410) = uVar4;
      *(undefined4 *)(iVar3 + 0x408) = 0;
    }
  }
  return uVar2;
}


// 0x0548b58 (0x6a8 bytes)
/* WARNING: Removing unreachable block (ram,0x00548ca8) */
/* WARNING: Removing unreachable block (ram,0x00548cc0) */
/* WARNING: Removing unreachable block (ram,0x00548cd4) */
/* WARNING: Removing unreachable block (ram,0x00548ce4) */
/* WARNING: Removing unreachable block (ram,0x00548cfc) */
/* WARNING: Removing unreachable block (ram,0x00548df4) */
/* WARNING: Removing unreachable block (ram,0x00548d18) */
/* WARNING: Removing unreachable block (ram,0x00548d48) */
/* WARNING: Removing unreachable block (ram,0x00548d54) */
/* WARNING: Removing unreachable block (ram,0x00548d64) */
/* WARNING: Removing unreachable block (ram,0x00548d84) */
/* WARNING: Removing unreachable block (ram,0x00548d90) */
/* WARNING: Removing unreachable block (ram,0x00548da0) */
/* WARNING: Removing unreachable block (ram,0x00548dc8) */
/* WARNING: Removing unreachable block (ram,0x00548e24) */
/* WARNING: Removing unreachable block (ram,0x00548e40) */
/* WARNING: Removing unreachable block (ram,0x00548ecc) */
/* WARNING: Removing unreachable block (ram,0x00548ef8) */
/* WARNING: Removing unreachable block (ram,0x00548fe0) */
/* WARNING: Removing unreachable block (ram,0x00549018) */
/* WARNING: Removing unreachable block (ram,0x00549024) */
/* WARNING: Removing unreachable block (ram,0x00549048) */
/* WARNING: Removing unreachable block (ram,0x00549060) */
/* WARNING: Removing unreachable block (ram,0x005490b4) */
/* WARNING: Removing unreachable block (ram,0x005490c0) */
/* WARNING: Removing unreachable block (ram,0x00548f18) */
/* WARNING: Removing unreachable block (ram,0x00549138) */
/* WARNING: Removing unreachable block (ram,0x00549168) */
/* WARNING: Removing unreachable block (ram,0x00549174) */
/* WARNING: Removing unreachable block (ram,0x0054919c) */
/* WARNING: Removing unreachable block (ram,0x005491f8) */
/* WARNING: Removing unreachable block (ram,0x00548f64) */
/* WARNING: Removing unreachable block (ram,0x00548f98) */
/* WARNING: Removing unreachable block (ram,0x00548fa4) */
/* WARNING: Removing unreachable block (ram,0x005490c8) */
/* WARNING: Removing unreachable block (ram,0x0054911c) */
/* WARNING: Removing unreachable block (ram,0x00548fcc) */
/* WARNING: Removing unreachable block (ram,0x00548fd8) */
/* WARNING: Removing unreachable block (ram,0x00548de4) */

undefined4 FUN_00548b58(int *param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  GPiece<52> local_7c;
  
  if (param_2 != (undefined4 *)0x0) {
    *param_2 = 1;
    param_2[1] = 0x18;
    if (param_1 != (int *)0x0) {
      if (*param_1 == 0) {
        param_2[1] = 0x1d;
        return 0x1d;
      }
      if ((param_1[0xd] != 0) && (param_1[1] != 0)) {
        uVar1 = FUN_00548aa4(local_7c);
        param_2[1] = uVar1;
        return uVar1;
      }
    }
    param_2[1] = 3;
  }
  return 3;
}


// 0x0549200 (0xe88 bytes)
/* WARNING: Removing unreachable block (ram,0x00549604) */
/* WARNING: Removing unreachable block (ram,0x00549d4c) */
/* WARNING: Removing unreachable block (ram,0x00549d88) */
/* WARNING: Removing unreachable block (ram,0x00549de4) */
/* WARNING: Removing unreachable block (ram,0x00549df8) */
/* WARNING: Removing unreachable block (ram,0x0054968c) */
/* WARNING: Removing unreachable block (ram,0x00549708) */
/* WARNING: Removing unreachable block (ram,0x00549740) */
/* WARNING: Removing unreachable block (ram,0x00549c9c) */
/* WARNING: Removing unreachable block (ram,0x00549cd8) */
/* WARNING: Removing unreachable block (ram,0x00549d34) */
/* WARNING: Removing unreachable block (ram,0x0054974c) */
/* WARNING: Removing unreachable block (ram,0x0054975c) */
/* WARNING: Removing unreachable block (ram,0x00549788) */
/* WARNING: Removing unreachable block (ram,0x00549794) */
/* WARNING: Removing unreachable block (ram,0x0054979c) */
/* WARNING: Removing unreachable block (ram,0x005497a4) */
/* WARNING: Removing unreachable block (ram,0x005497b0) */
/* WARNING: Removing unreachable block (ram,0x005497bc) */
/* WARNING: Removing unreachable block (ram,0x005497ec) */
/* WARNING: Removing unreachable block (ram,0x00549d40) */
/* WARNING: Removing unreachable block (ram,0x00549808) */
/* WARNING: Removing unreachable block (ram,0x00549a08) */
/* WARNING: Removing unreachable block (ram,0x00549a30) */
/* WARNING: Removing unreachable block (ram,0x00549a3c) */
/* WARNING: Removing unreachable block (ram,0x0054a004) */
/* WARNING: Removing unreachable block (ram,0x00549a70) */
/* WARNING: Removing unreachable block (ram,0x00549a7c) */
/* WARNING: Removing unreachable block (ram,0x00549a90) */
/* WARNING: Removing unreachable block (ram,0x00549aa0) */
/* WARNING: Removing unreachable block (ram,0x00549ac8) */
/* WARNING: Removing unreachable block (ram,0x00549b90) */
/* WARNING: Removing unreachable block (ram,0x00549bbc) */
/* WARNING: Removing unreachable block (ram,0x00549e6c) */
/* WARNING: Removing unreachable block (ram,0x00549ea4) */
/* WARNING: Removing unreachable block (ram,0x00549eb0) */
/* WARNING: Removing unreachable block (ram,0x00549ed4) */
/* WARNING: Removing unreachable block (ram,0x00549eec) */
/* WARNING: Removing unreachable block (ram,0x00549f40) */
/* WARNING: Removing unreachable block (ram,0x00549f50) */
/* WARNING: Removing unreachable block (ram,0x00549bc8) */
/* WARNING: Removing unreachable block (ram,0x00549be4) */
/* WARNING: Removing unreachable block (ram,0x00549be8) */
/* WARNING: Removing unreachable block (ram,0x00549c10) */
/* WARNING: Removing unreachable block (ram,0x00549c38) */
/* WARNING: Removing unreachable block (ram,0x0054a04c) */
/* WARNING: Removing unreachable block (ram,0x0054a078) */
/* WARNING: Removing unreachable block (ram,0x0054a07c) */
/* WARNING: Removing unreachable block (ram,0x00549c50) */
/* WARNING: Removing unreachable block (ram,0x0054a038) */
/* WARNING: Removing unreachable block (ram,0x00549c5c) */
/* WARNING: Removing unreachable block (ram,0x00549c68) */
/* WARNING: Removing unreachable block (ram,0x00549c88) */
/* WARNING: Removing unreachable block (ram,0x00549e04) */
/* WARNING: Removing unreachable block (ram,0x00549fb8) */
/* WARNING: Removing unreachable block (ram,0x00549e50) */
/* WARNING: Removing unreachable block (ram,0x00549f58) */
/* WARNING: Removing unreachable block (ram,0x00549f6c) */
/* WARNING: Removing unreachable block (ram,0x00549f70) */
/* WARNING: Removing unreachable block (ram,0x00549fd0) */
/* WARNING: Removing unreachable block (ram,0x00549f7c) */
/* WARNING: Removing unreachable block (ram,0x00549f90) */
/* WARNING: Removing unreachable block (ram,0x00549f9c) */
/* WARNING: Removing unreachable block (ram,0x00549fa4) */
/* WARNING: Removing unreachable block (ram,0x00549e5c) */
/* WARNING: Removing unreachable block (ram,0x00549c94) */

undefined4 FUN_00549200(int *param_1,undefined4 *param_2)

{
  int *piVar1;
  int iVar2;
  undefined *puVar3;
  undefined4 uVar4;
  int iVar5;
  GPiece<2> local_210;
  GPiece<2> local_20e;
  GPiece<4> local_20c;
  GPiece<60> local_208;
  GPiece<4> local_1cc;
  GPiece<88> local_1c8;
  undefined1 uStack_170;
  undefined1 uStack_16f;
  undefined1 uStack_16e;
  undefined1 uStack_16d;
  undefined1 uStack_16c;
  undefined1 uStack_16b;
  undefined1 uStack_16a;
  undefined1 uStack_169;
  undefined1 uStack_168;
  undefined1 uStack_167;
  undefined1 uStack_166;
  undefined1 uStack_165;
  undefined1 uStack_164;
  undefined1 uStack_163;
  undefined1 uStack_162;
  undefined1 uStack_161;
  undefined1 uStack_160;
  
  if (param_2 == (undefined4 *)0x0) {
    return 3;
  }
  if (param_1[0x29] == 0) goto LAB_0054926c;
  *param_2 = 1;
  iVar5 = *param_1;
  param_2[1] = 8;
  param_2[2] = 0;
  puVar3 = PTR_PTR_0071b104;
  if (iVar5 == 0) {
    param_2[1] = 0x1d;
    return 0x1d;
  }
  piVar1 = param_1 + 2;
  iVar5 = *piVar1;
  if (((iVar5 == 4) || (iVar5 == 6)) || (iVar5 == 7)) {
LAB_00549368:
    if (((iVar5 != 5) && ((iVar5 != 4 && (iVar5 != 6)))) && (iVar5 != 7)) {
      if (iVar5 != 2) {
LAB_0054926c:
        param_2[1] = 3;
        return 3;
      }
      *param_2 = 1;
      iVar5 = *param_1;
      param_2[1] = 8;
      if (iVar5 == 0) {
        uVar4 = 0x1d;
        param_2[1] = 0x1d;
      }
      else {
        if (param_1[1] < 1) {
          param_2[1] = 3;
          param_2[1] = 3;
          goto LAB_005493cc;
        }
        uVar4 = FUN_00548aa4(local_208);
        param_2[1] = uVar4;
      }
      param_2[1] = uVar4;
LAB_005493cc:
      return param_2[1];
    }
  }
  else {
    if (param_1[0x5b] != 0) {
      if (*(int *)(*(int *)PTR_PTR_0071b104 + 0x1084) != 0) {
        param_2[1] = 0x1f;
        return 0x1f;
      }
      FUN_00557384();
      iVar5 = *piVar1;
      *(undefined4 *)(*(int *)puVar3 + 0x1084) = 1;
    }
    if ((iVar5 != 1) && (iVar5 != 3)) goto LAB_00549368;
  }
  *param_2 = 1;
  iVar2 = *param_1;
  param_2[1] = 8;
  param_2[2] = 0;
  if (iVar2 == 0) {
    uVar4 = 0x1d;
    param_2[1] = 0x1d;
LAB_00549408:
    param_2[1] = uVar4;
  }
  else {
    if ((0 < param_1[1]) &&
       (((((iVar5 == 1 || (iVar5 == 5)) || (iVar5 == 3)) || ((iVar5 == 4 || (iVar5 == 6)))) ||
        (iVar5 == 7)))) {
      if ((param_1[9] == 3) || (param_1[9] == 8)) {
        FUN_00544548();
      }
      if ((*(char *)(param_1 + 0x20) != '\0') && (*(char *)((int)param_1 + 0x91) != '\0')) {
        memset(&uStack_170,0,0x100);
        uStack_170 = *(undefined1 *)(param_1 + 0x20);
        uStack_16f = *(undefined1 *)((int)param_1 + 0x81);
        uStack_16e = *(undefined1 *)((int)param_1 + 0x82);
        uStack_16d = *(undefined1 *)((int)param_1 + 0x83);
        uStack_16c = *(undefined1 *)(param_1 + 0x21);
        uStack_16b = *(undefined1 *)((int)param_1 + 0x85);
        uStack_16a = *(undefined1 *)((int)param_1 + 0x86);
        uStack_169 = *(undefined1 *)((int)param_1 + 0x87);
        uStack_168 = *(undefined1 *)(param_1 + 0x22);
        uStack_167 = *(undefined1 *)((int)param_1 + 0x89);
        uStack_166 = *(undefined1 *)((int)param_1 + 0x8a);
        uStack_165 = *(undefined1 *)((int)param_1 + 0x8b);
        uStack_164 = *(undefined1 *)(param_1 + 0x23);
        uStack_163 = *(undefined1 *)((int)param_1 + 0x8d);
        uStack_162 = *(undefined1 *)((int)param_1 + 0x8e);
        uStack_161 = *(undefined1 *)((int)param_1 + 0x8f);
        uStack_160 = *(undefined1 *)(param_1 + 0x24);
      }
      (*(code *)**(undefined4 **)(*(int *)PTR_DAT_0071b110 + 0x60))(local_1cc);
      iVar5 = *piVar1;
      if ((((iVar5 == 1) || (iVar5 == 4)) || (iVar5 == 3)) ||
         (((iVar5 == 6 || (iVar5 == 5)) || (iVar5 == 7)))) {
        FUN_0053fe40(param_1 + 3,local_20c,local_1c8,local_20e,local_210);
        uVar4 = FUN_00548aa4(local_208);
        param_2[1] = uVar4;
        goto LAB_00549408;
      }
    }
    param_2[1] = 3;
    param_2[1] = 3;
  }
  return param_2[1];
}


// 0x054a088 (0x88 bytes)
undefined8 FUN_0054a088(undefined4 *param_1)

{
  undefined8 uVar1;
  GPiece<16> auStack_60;
  undefined4 local_50;
  undefined4 local_4c;
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_20;
  undefined4 local_1c;
  
  uVar1 = 3;
  if (param_1 != (undefined4 *)0x0) {
    FUN_005506dc(auStack_60);
    param_1[2] = local_40;
    uVar1 = 0;
    param_1[3] = local_3c;
    *param_1 = local_50;
    param_1[1] = local_4c;
    param_1[6] = local_20;
    param_1[7] = local_1c;
    param_1[4] = local_30;
    param_1[5] = local_2c;
  }
  return uVar1;
}


// 0x054a110 (0x138 bytes)
void FUN_0054a110(int param_1,int param_2,undefined2 param_3)

{
  int iVar1;
  undefined1 local_c0;
  undefined1 local_bf;
  undefined2 local_be;
  undefined2 local_bc;
  undefined2 local_ba;
  undefined4 local_b8;
  undefined4 local_b4;
  GPiece<48> auStack_b0;
  int local_80;
  undefined1 local_7c;
  undefined4 local_78;
  int local_74;
  GPiece<16> auStack_70;
  GPiece<16> auStack_60;
  undefined4 local_4c;
  undefined4 local_48;
  undefined8 uStack_40;
  undefined1 *local_38;
  
  if (*(int *)(param_1 + 0x404) != 0x100) {
    iVar1 = *(int *)(param_1 + 0x400);
    if (iVar1 != 0) {
      local_bf = FUN_00541a44(*(int *)(param_1 + 0x404));
      local_c0 = (undefined1)*(undefined4 *)(iVar1 + 0xc);
      local_b8 = *(undefined4 *)(iVar1 + 0x1c);
      local_b4 = *(undefined4 *)(param_1 + 0x450);
      auStack_70 = (GPiece<16>)0x0;
      uStack_40 = 0;
      local_be = (undefined2)*(undefined4 *)(iVar1 + 0x10);
      auStack_60 = (GPiece<16>)0x0;
      local_4c = *(undefined4 *)(param_1 + 0x44c);
      local_7c = 0x50;
      local_bc = (undefined2)*(undefined4 *)(iVar1 + 0x14);
      local_78 = 0x16;
      local_38 = &local_c0;
      local_48 = 0x10;
      local_ba = param_3;
      local_80 = param_1;
      local_74 = param_2;
      if (param_2 == -1) {
        FUN_0055b234(param_1,&local_74);
      }
      FUN_00546bdc(&local_80,auStack_b0,0);
    }
  }
  return;
}


// 0x054a248 (0x4a0 bytes)
/* WARNING: Removing unreachable block (ram,0x0054a324) */
/* WARNING: Removing unreachable block (ram,0x0054a39c) */
/* WARNING: Removing unreachable block (ram,0x0054a564) */
/* WARNING: Removing unreachable block (ram,0x0054a574) */
/* WARNING: Removing unreachable block (ram,0x0054a584) */
/* WARNING: Removing unreachable block (ram,0x0054a590) */
/* WARNING: Removing unreachable block (ram,0x0054a5ac) */
/* WARNING: Removing unreachable block (ram,0x0054a3a8) */
/* WARNING: Removing unreachable block (ram,0x0054a3cc) */
/* WARNING: Removing unreachable block (ram,0x0054a3d4) */
/* WARNING: Removing unreachable block (ram,0x0054a600) */
/* WARNING: Removing unreachable block (ram,0x0054a3dc) */
/* WARNING: Removing unreachable block (ram,0x0054a3e8) */
/* WARNING: Removing unreachable block (ram,0x0054a414) */
/* WARNING: Removing unreachable block (ram,0x0054a4c0) */
/* WARNING: Removing unreachable block (ram,0x0054a334) */
/* WARNING: Removing unreachable block (ram,0x0054a340) */
/* WARNING: Removing unreachable block (ram,0x0054a348) */
/* WARNING: Removing unreachable block (ram,0x0054a350) */

int FUN_0054a248(int param_1,uint param_2,undefined8 param_3)

{
  undefined *puVar1;
  int iVar2;
  undefined8 uStack00000040;
  GPiece<268> local_15c;
  
  puVar1 = PTR_DAT_0071b120;
  if (((param_2 < 0x100) && (param_1 != 0)) &&
     (((uStack00000040 = param_3, *(int *)PTR_DAT_0071b120 != 0 &&
       ((iVar2 = (*(code *)**(undefined4 **)(*(int *)PTR_DAT_0071b120 + 0x38))(param_1), iVar2 != 0
        && (iVar2 = (*(code *)**(undefined4 **)(*(int *)puVar1 + 0x44))(param_1,param_2), iVar2 != 0
           )))) || (iVar2 = FUN_00547ef8(param_1,param_2,local_15c), iVar2 != 0)))) {
    return iVar2;
  }
  return 3;
}


// 0x054a6e8 (0x210 bytes)
void FUN_0054a6e8(undefined2 param_1,uint param_2,int param_3)

{
  undefined4 *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  int iVar4;
  
  puVar3 = PTR_DAT_0071b120;
  puVar2 = PTR_PTR_0071b104;
  if (param_3 != 0) {
    if (param_2 == 0) {
      if (*(int *)(param_3 + 0x454) == 2) {
        iVar4 = (*(code *)**(undefined4 **)(*(int *)PTR_DAT_0071b114 + 8))
                          (*(undefined4 *)(param_3 + 0x45c),param_1,*(int *)PTR_PTR_0071b104 + 0xc,
                           *(int *)PTR_PTR_0071b104 + 0x14);
        if (iVar4 == 0) {
          iVar4 = *(int *)puVar2;
          *(int *)(param_3 + 0x448) = *(int *)(param_3 + 0x448) + 1;
          FUN_0054a248(param_3,param_1,*(undefined8 *)(iVar4 + 0xc),*(undefined4 *)(iVar4 + 0x14));
          return;
        }
      }
      else if (*(int *)PTR_DAT_0071b120 != 0) {
        iVar4 = (*(code *)**(undefined4 **)(*(int *)PTR_DAT_0071b120 + 0x38))(param_3);
        if (iVar4 != 0) {
          puVar1 = *(undefined4 **)(*(int *)puVar3 + 0x58);
LAB_0054a7ec:
          (*(code *)*puVar1)(param_3,param_1);
          return;
        }
      }
    }
    else if (param_2 < 3) {
      if (*(int *)(param_3 + 0x454) == 2) {
        FUN_00544ad4(param_3,param_1);
        return;
      }
      if (*(int *)PTR_DAT_0071b120 != 0) {
        iVar4 = (*(code *)**(undefined4 **)(*(int *)PTR_DAT_0071b120 + 0x38))(param_3);
        if (iVar4 != 0) {
          puVar1 = *(undefined4 **)(*(int *)puVar3 + 0x5c);
          goto LAB_0054a7ec;
        }
      }
    }
  }
  return;
}


// 0x054a8f8 (0xf0 bytes)
void FUN_0054a8f8(int param_1,undefined4 param_2,undefined8 param_3,int param_4)

{
  undefined *puVar1;
  int iVar2;
  int iVar3;
  undefined8 uStack00000040;
  
  uStack00000040 = param_3;
  iVar2 = FUN_0054edf0(param_3);
  puVar1 = PTR_PTR_0071b104;
  if (iVar2 != 0) {
    return;
  }
  if (param_4 != 0) {
    iVar2 = 0;
    if (*(int *)PTR_DAT_0071b10c != 0) {
      iVar2 = *(int *)(*(int *)PTR_DAT_0071b10c + 0xfc);
    }
    *(int *)(param_1 + 0x448) = *(int *)(param_1 + 0x448) + 1;
    iVar3 = *(int *)(*(int *)puVar1 + 0x14);
    if (*(int *)(*(int *)puVar1 + 0x14) == 0) {
      iVar3 = iVar2;
    }
    FUN_0054a248(param_1,param_2,uStack00000040,iVar3);
    return;
  }
  FUN_00544ad4(param_1,param_2);
  return;
}


// 0x054a9e8 (0x5a8 bytes)
ulonglong FUN_0054a9e8(undefined4 *param_1,int param_2)

{
  undefined1 uVar1;
  undefined1 uVar2;
  undefined1 uVar3;
  undefined1 *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined4 uVar8;
  ulonglong uVar7;
  int iVar9;
  uint uVar10;
  ulonglong uVar11;
  GPiece<4> local_70;
  GPiece<2> auStack_6c;
  ushort local_6a;
  GPiece<4> local_68;
  undefined1 uStack_64;
  undefined1 uStack_63;
  undefined1 uStack_62;
  undefined1 uStack_61;
  undefined1 uStack_60;
  undefined1 uStack_5f;
  undefined1 uStack_5e;
  undefined1 uStack_5d;
  
  param_1[0xb] = 0;
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  puVar6 = PTR_DAT_0071b10c;
  puVar5 = PTR_PTR_0071b104;
  if (param_2 == 0) {
    if (*(int *)PTR_DAT_0071b10c != 0) {
      iVar9 = (*(code *)**(undefined4 **)(*(int *)PTR_DAT_0071b10c + 0x24))
                        (*(undefined4 *)(*(int *)PTR_PTR_0071b104 + 8),&uStack_64,auStack_6c,
                         local_68);
      if (iVar9 == 0) {
        param_1[5] = (uint)local_6a;
        *param_1 = 6;
        *(undefined1 *)(param_1 + 1) = uStack_64;
        *(undefined1 *)((int)param_1 + 5) = uStack_63;
        *(undefined1 *)((int)param_1 + 6) = uStack_62;
        *(undefined1 *)((int)param_1 + 7) = uStack_61;
        *(undefined1 *)((int)param_1 + 0xb) = uStack_5d;
        *(undefined1 *)(param_1 + 2) = uStack_60;
        *(undefined1 *)((int)param_1 + 9) = uStack_5f;
        *(undefined1 *)((int)param_1 + 10) = uStack_5e;
      }
      uVar10 = (uint)(iVar9 == 0);
      uVar8 = (*(code *)**(undefined4 **)(*(int *)puVar6 + 0x30))
                        (*(undefined4 *)(*(int *)puVar5 + 8),&uStack_64,auStack_6c);
      uVar7 = FUN_00540808(uVar8);
      if (uVar7 == 0) {
        iVar9 = uVar10 * 0x18;
        param_1[uVar10 * 6 + 5] = (uint)local_6a;
        param_1[uVar10 * 6] = 7;
        uVar11 = 0;
        *(undefined1 *)(param_1 + uVar10 * 6 + 1) = uStack_64;
        *(undefined1 *)((int)param_1 + iVar9 + 5) = uStack_63;
        *(undefined1 *)((int)param_1 + iVar9 + 6) = uStack_62;
        *(undefined1 *)((int)param_1 + iVar9 + 7) = uStack_61;
        *(undefined1 *)((int)param_1 + iVar9 + 0xb) = uStack_5d;
        *(undefined1 *)(param_1 + uVar10 * 6 + 2) = uStack_60;
        *(undefined1 *)((int)param_1 + iVar9 + 9) = uStack_5f;
        *(undefined1 *)((int)param_1 + iVar9 + 10) = uStack_5e;
        goto LAB_0054aadc;
      }
      goto LAB_0054ab38;
    }
  }
  else {
    if (*(int *)(param_2 + 0x454) == 2) {
      uVar8 = (*(code *)**(undefined4 **)(*(int *)PTR_DAT_0071b114 + 0x1c))
                        (*(undefined4 *)(param_2 + 0x45c),local_70);
      uVar11 = FUN_00540808(uVar8);
      puVar6 = PTR_DAT_0071b10c;
      puVar5 = PTR_PTR_0071b104;
      if ((int)uVar11 == 0) {
        iVar9 = (*(code *)**(undefined4 **)(*(int *)PTR_DAT_0071b10c + 0x24))
                          (*(undefined4 *)(*(int *)PTR_PTR_0071b104 + 8),&uStack_64,auStack_6c,
                           local_68);
        if (iVar9 == 0) {
          param_1[5] = (uint)local_6a;
          *param_1 = 6;
          *(undefined1 *)(param_1 + 1) = uStack_64;
          *(undefined1 *)((int)param_1 + 5) = uStack_63;
          *(undefined1 *)((int)param_1 + 6) = uStack_62;
          *(undefined1 *)((int)param_1 + 7) = uStack_61;
          *(undefined1 *)((int)param_1 + 0xb) = uStack_5d;
          *(undefined1 *)(param_1 + 2) = uStack_60;
          *(undefined1 *)((int)param_1 + 9) = uStack_5f;
          *(undefined1 *)((int)param_1 + 10) = uStack_5e;
        }
        uVar10 = (uint)(iVar9 == 0);
        uVar8 = (*(code *)**(undefined4 **)(*(int *)puVar6 + 0x30))
                          (*(undefined4 *)(*(int *)puVar5 + 8),&uStack_64,auStack_6c);
        uVar7 = FUN_00540808(uVar8);
        if (uVar7 != 0) goto LAB_0054ab38;
        iVar9 = uVar10 * 0x18;
        param_1[uVar10 * 6 + 5] = (uint)local_6a;
        param_1[uVar10 * 6] = 7;
        *(undefined1 *)(param_1 + uVar10 * 6 + 1) = uStack_64;
        *(undefined1 *)((int)param_1 + iVar9 + 5) = uStack_63;
        *(undefined1 *)((int)param_1 + iVar9 + 6) = uStack_62;
        *(undefined1 *)((int)param_1 + iVar9 + 7) = uStack_61;
        *(undefined1 *)((int)param_1 + iVar9 + 0xb) = uStack_5d;
        *(undefined1 *)(param_1 + uVar10 * 6 + 2) = uStack_60;
        *(undefined1 *)((int)param_1 + iVar9 + 9) = uStack_5f;
        *(undefined1 *)((int)param_1 + iVar9 + 10) = uStack_5e;
      }
LAB_0054aadc:
      return uVar11 & 0xffffffff;
    }
    puVar4 = *(undefined1 **)(param_2 + 0x400);
    if (puVar4 != (undefined1 *)0x0) {
      uVar11 = 0;
      *param_1 = 4;
      param_1[5] = *(undefined4 *)(puVar4 + 8);
      uVar1 = puVar4[1];
      uVar2 = puVar4[2];
      uVar3 = puVar4[3];
      *(undefined1 *)(param_1 + 1) = *puVar4;
      *(undefined1 *)((int)param_1 + 5) = uVar1;
      *(undefined1 *)((int)param_1 + 6) = uVar2;
      *(undefined1 *)((int)param_1 + 7) = uVar3;
      uVar1 = puVar4[4];
      uVar2 = puVar4[5];
      uVar3 = puVar4[6];
      *(undefined1 *)((int)param_1 + 0xb) = puVar4[7];
      *(undefined1 *)(param_1 + 2) = uVar1;
      *(undefined1 *)((int)param_1 + 9) = uVar2;
      *(undefined1 *)((int)param_1 + 10) = uVar3;
      goto LAB_0054aadc;
    }
  }
  uVar8 = FUN_0054e8dc(&uStack_64);
  uVar7 = FUN_00540808(uVar8);
  if (uVar7 == 0) {
    *param_1 = 5;
    *(undefined1 *)(param_1 + 1) = uStack_64;
    *(undefined1 *)((int)param_1 + 5) = uStack_63;
    *(undefined1 *)((int)param_1 + 6) = uStack_62;
    *(undefined1 *)((int)param_1 + 7) = uStack_61;
    *(undefined1 *)((int)param_1 + 0xb) = uStack_5d;
    *(undefined1 *)(param_1 + 2) = uStack_60;
    *(undefined1 *)((int)param_1 + 9) = uStack_5f;
    *(undefined1 *)((int)param_1 + 10) = uStack_5e;
    return 0;
  }
LAB_0054ab38:
  return uVar7 & 0xffffffff;
}


// 0x054af90 (0x78 bytes)
undefined4 FUN_0054af90(undefined4 *param_1,undefined4 param_2)

{
  undefined4 uVar1;
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_30;
  undefined4 local_2c;
  
  uVar1 = 3;
  if (param_1 != (undefined4 *)0x0) {
    uVar1 = FUN_0054a9e8(&local_40,param_2);
    *param_1 = local_40;
    param_1[1] = local_3c;
    param_1[2] = local_38;
    param_1[3] = local_34;
    param_1[5] = local_2c;
    param_1[4] = local_30;
  }
  return uVar1;
}


// 0x054b008 (0x8 bytes)
undefined8 FUN_0054b008(void)

{
  return 4;
}


// 0x054b010 (0x8 bytes)
undefined8 FUN_0054b010(void)

{
  return 0xc;
}


// 0x054b018 (0x8 bytes)
undefined8 FUN_0054b018(void)

{
  return 0xffffffffffffffff;
}


// 0x054b020 (0x34 bytes)
void FUN_0054b020(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_00554770(param_1,0,param_2,1,param_3);
  return;
}


// 0x054b054 (0x224 bytes)
void FUN_0054b054(void)

{
  undefined *puVar1;
  
  FUN_0054b020(0,PTR_PTR_0071b1a0,PTR_PTR_0071b1a4);
  FUN_0054b020(1,PTR_PTR_0071b1a8,PTR_PTR_0071b1ac);
  FUN_0054b020(0x10,PTR_PTR_0071b1b0,PTR_PTR_0071b1b4);
  FUN_0054b020(0x13,PTR_PTR_0071b1b8,PTR_PTR_0071b1bc);
  FUN_0054b020(0x14,PTR_PTR_0071b1c0,PTR_PTR_0071b1c4);
  FUN_0054b020(0x16,PTR_PTR_0071b1c8,PTR_PTR_0071b1cc);
  FUN_0054b020(0x19,PTR_PTR_0071b1d0,0);
  FUN_0054b020(0x1a,PTR_PTR_0071b1d4,0);
  FUN_0054b020(0x21,PTR_PTR_0071b1d8,0);
  FUN_0054b020(0x22,PTR_PTR_0071b1dc,0);
  puVar1 = PTR_DAT_0071b1e0;
  if (*(int *)PTR_DAT_0071b1e0 != 0) {
    FUN_0054b020(0xf,*(undefined4 *)(*(int *)PTR_DAT_0071b1e0 + 0xec),PTR_PTR_0071b1e4);
    FUN_0054b020(0x12,*(undefined4 *)(*(int *)puVar1 + 0xe8),PTR_PTR_0071b1e8);
    FUN_0054b020(3,*(undefined4 *)(*(int *)puVar1 + 0xb0),0);
    FUN_0054b020(4,*(undefined4 *)(*(int *)puVar1 + 0xb4),0);
    FUN_0054b020(5,*(undefined4 *)(*(int *)puVar1 + 0xb8),PTR_PTR_0071b1ec);
    FUN_0054b020(9,*(undefined4 *)(*(int *)puVar1 + 0xbc),PTR_PTR_0071b1f0);
    FUN_0054b020(10,*(undefined4 *)(*(int *)puVar1 + 0xc0),PTR_PTR_0071b1f4);
    FUN_0054b020(0xb,*(undefined4 *)(*(int *)puVar1 + 0xc4),PTR_PTR_0071b1f8);
    FUN_0054b020(0xc,*(undefined4 *)(*(int *)puVar1 + 200),PTR_PTR_0071b1fc);
    FUN_0054b020(0xd,*(undefined4 *)(*(int *)puVar1 + 0xcc),PTR_PTR_0071b200);
    FUN_0054b020(0xe,*(undefined4 *)(*(int *)puVar1 + 0xd0),PTR_PTR_0071b204);
    FUN_0054b020(0x15,*(undefined4 *)(*(int *)puVar1 + 0xd4),PTR_PTR_0071b208);
    FUN_0054b020(0x17,*(undefined4 *)(*(int *)puVar1 + 0xd8),PTR_PTR_0071b20c);
  }
  if (*(int *)PTR_DAT_0071b210 != 0) {
    (*(code *)**(undefined4 **)(*(int *)PTR_DAT_0071b210 + 0x40))();
  }
  FUN_0054b020(0x30,PTR_PTR_0071b214,0);
  FUN_0054b020(0x2f,PTR_PTR_0071b218,0);
  return;
}


// 0x054b278 (0xf0 bytes)
undefined2 FUN_0054b278(int param_1,undefined8 param_2,undefined4 param_3,int param_4)

{
  GPiece<4> local_50;
  undefined4 local_4c;
  undefined2 local_48 [2];
  undefined4 *local_44;
  undefined4 local_40;
  
  FUN_00551f9c(param_4,local_50);
  if ((param_1 != 0) && (*(int *)(param_1 + 0x45c) != 0)) {
    if (*(int *)PTR_DAT_0071b21c != 0) {
      local_40 = 1;
      local_44 = &local_4c;
      local_48[0] = 4;
      local_4c = param_3;
      (*(code *)**(undefined4 **)(*(int *)PTR_DAT_0071b21c + 0xac))
                (*(int *)(param_1 + 0x45c),local_48,param_4 + 2,0);
    }
  }
  return 2;
}


// 0x054b368 (0x34c bytes)
undefined4 FUN_0054b368(int param_1,undefined8 param_2,uint param_3,byte *param_4)

{
  byte bVar1;
  ushort uVar2;
  ushort uVar3;
  undefined2 uVar4;
  undefined2 uVar5;
  int iVar6;
  undefined4 *puVar7;
  undefined4 uVar8;
  undefined *puVar9;
  undefined8 *puVar10;
  int iVar11;
  undefined1 local_100;
  undefined1 local_ff;
  ushort local_fe;
  ushort local_fc;
  GPiece<16> auStack_f8;
  int local_e8;
  uint local_e4;
  undefined1 *local_e0;
  undefined4 local_dc;
  undefined4 local_d8;
  undefined4 local_d4;
  GPiece<48> auStack_d0;
  int local_a0;
  undefined1 local_9c;
  undefined4 local_98;
  uint local_94;
  GPiece<16> auStack_90;
  GPiece<16> auStack_80;
  undefined4 local_6c;
  undefined4 local_68;
  undefined8 uStack_60;
  undefined1 *local_58;
  
  if ((param_1 != 0) && (param_3 < 0x100)) {
    puVar10 = (undefined8 *)FUN_0054170c(param_1,param_4[1]);
    if (puVar10 == (undefined8 *)0x0) {
      return 0xffffffff;
    }
    if ((*(int *)(puVar10 + 4) != 0) && (iVar6 = *(int *)(param_1 + 0x400), iVar6 != 0)) {
      uVar2 = *(ushort *)(param_4 + 2);
      uVar3 = *(ushort *)(param_4 + 4);
      *(uint *)((int)puVar10 + 0xc) = (uint)*param_4;
      *(uint *)(puVar10 + 2) = (uint)uVar2;
      *(uint *)((int)puVar10 + 0x14) = (uint)uVar3;
      puVar9 = PTR_DAT_0071b1e0;
      if (*(int *)(puVar10 + 3) == 0) {
        *(uint *)(puVar10 + 3) = (uint)*(ushort *)(param_4 + 6);
        iVar11 = *(int *)puVar9;
      }
      else {
        iVar11 = *(int *)PTR_DAT_0071b1e0;
      }
      if ((iVar11 != 0) && (*(int *)((int)puVar10 + 0xc) == 5)) {
        (*(code *)**(undefined4 **)(iVar11 + 0x40))(param_1,param_4[1]);
      }
      if ((*(int *)(param_1 + 0x4c0) == 0) || (*(int *)(puVar10 + 5) != 0)) {
        iVar11 = *(int *)puVar9;
        if (iVar11 == 0) {
          return 0x10;
        }
      }
      else {
        FUN_0054eecc(auStack_f8,*puVar10);
        local_e4 = (uint)param_4[1];
        local_dc = *(undefined4 *)((int)puVar10 + 0xc);
        local_d4 = *(undefined4 *)(param_1 + 0x4c4);
        local_d8 = *(undefined4 *)(param_4 + 0xc);
        local_e8 = param_1;
        local_e0 = auStack_f8;
        (*(code *)**(undefined4 **)(param_1 + 0x4c0))(&local_e8);
        iVar11 = *(int *)puVar9;
        *(undefined4 *)(puVar10 + 5) = 1;
        if (iVar11 == 0) {
          return 0x10;
        }
        if (*(int *)(iVar6 + 0xc) == 3) {
          *(undefined4 *)(puVar10 + 3) = 0;
          uVar8 = *(undefined4 *)(param_1 + 0x404);
          *(undefined4 *)((int)puVar10 + 0xc) = 0;
          local_100 = 3;
          local_ff = FUN_00541a44(uVar8);
          auStack_80 = (GPiece<16>)0x0;
          uStack_60 = 0;
          auStack_90 = (GPiece<16>)0x0;
          local_fe = (ushort)*(byte *)(iVar6 + 0x13);
          local_9c = 0x50;
          local_fc = (ushort)*(byte *)(iVar6 + 0x17);
          local_6c = *(undefined4 *)(param_1 + 0x44c);
          local_94 = (uint)param_4[1];
          local_98 = 0x15;
          local_58 = &local_100;
          local_68 = 6;
          local_a0 = param_1;
          FUN_00546bdc(&local_a0,auStack_d0,0);
          return 0x10;
        }
      }
      if (*(int *)(param_4 + 8) != 0) {
        *(int *)((int)puVar10 + 0x1c) = *(int *)(param_4 + 8);
      }
      if (*(int *)(iVar6 + 0xc) == 3) {
        uVar4 = *(undefined2 *)(param_4 + 4);
        bVar1 = param_4[1];
        uVar5 = *(undefined2 *)(param_4 + 2);
        puVar7 = *(undefined4 **)(iVar11 + 0x98);
      }
      else {
        if (*(int *)(iVar6 + 0xc) != 5) {
          return 0x10;
        }
        if (*param_4 != 3) {
          return 0x10;
        }
        uVar4 = *(undefined2 *)(param_4 + 4);
        bVar1 = param_4[1];
        uVar5 = *(undefined2 *)(param_4 + 2);
        puVar7 = *(undefined4 **)(iVar11 + 0xac);
      }
      (*(code *)*puVar7)(param_1,bVar1,uVar5,uVar4);
      return 0x10;
    }
  }
  return 0x10;
}


// 0x054b6b4 (0x128 bytes)
undefined4 FUN_0054b6b4(int param_1,undefined8 param_2,undefined8 param_3,int param_4)

{
  int iVar1;
  undefined4 uVar2;
  undefined8 *puVar3;
  int iVar4;
  undefined4 local_30;
  undefined4 local_2c;
  
  uVar2 = 0xffffffff;
  iVar4 = 0;
  if (param_1 != 0) {
    local_30 = *(undefined4 *)(param_4 + 4);
    local_2c = *(undefined4 *)(param_4 + 8);
    if (*(int *)PTR_DAT_0071b220 != 0) {
      iVar4 = *(int *)(*(int *)PTR_DAT_0071b220 + 0xfc);
    }
    if (*(int *)(param_1 + 0x454) != 2) {
      if (*(int *)PTR_DAT_0071b224 != 0) {
        (*(code *)**(undefined4 **)(*(int *)PTR_DAT_0071b224 + 0x18))
                  (*(uint *)(param_1 + 0x458) & 0x3fffffff,*(undefined1 *)(param_4 + 1),0x600,
                   param_4 + 0xc);
      }
    }
    puVar3 = (undefined8 *)&local_30;
    iVar1 = *(int *)(*(int *)PTR_PTR_0071b228 + 0x14);
    if (iVar1 != 0) {
      puVar3 = (undefined8 *)(*(int *)PTR_PTR_0071b228 + 0xc);
      iVar4 = iVar1;
    }
    FUN_0054a248(param_1,*(undefined1 *)(param_4 + 1),*puVar3,iVar4);
    uVar2 = 0x4c;
  }
  return uVar2;
}


// 0x054b7dc (0x28c bytes)
undefined8 FUN_0054b7dc(int param_1,undefined8 param_2,int param_3,int param_4)

{
  undefined4 *puVar1;
  int iVar2;
  undefined *puVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  undefined4 local_d0;
  undefined1 local_cc;
  undefined1 local_cb;
  GPiece<16> auStack_c8;
  GPiece<48> auStack_b8;
  int local_88;
  undefined1 local_84;
  undefined4 local_80;
  int local_7c;
  undefined4 local_54;
  undefined4 local_50;
  undefined4 *local_40;
  
  if (*(char *)(param_4 + 5) == '\0') {
    FUN_0054536c();
    puVar3 = PTR_PTR_0071b228;
    puVar1 = *(undefined4 **)(*(int *)PTR_PTR_0071b228 + (uint)*(byte *)(param_4 + 4) * 0x20 + 0xb4)
    ;
    if (puVar1 != (undefined4 *)0x0) {
      iVar5 = FUN_0054536c();
      iVar2 = (uint)*(byte *)(param_4 + 4) * 0x20;
      iVar4 = *(int *)(*(int *)puVar3 + iVar2 + 0xb8);
      FUN_0054eecc(auStack_c8,*(undefined8 *)(*(int *)puVar3 + iVar2 + 0xa4));
      iVar2 = *(int *)puVar3;
      iVar6 = iVar2 + (uint)*(byte *)(param_4 + 4) * 0x20 + 0xa0;
      *(undefined4 *)(iVar2 + 0xc) = *(undefined4 *)(iVar6 + 4);
      *(undefined4 *)(iVar2 + 0x10) = *(undefined4 *)(iVar6 + 8);
      *(undefined4 *)(iVar2 + 0x14) =
           *(undefined4 *)(iVar2 + (uint)*(byte *)(param_4 + 4) * 0x20 + 0xac);
      (*(code *)*puVar1)(0,auStack_c8,iVar5 - iVar4);
      *(undefined4 *)(*(int *)puVar3 + (uint)*(byte *)(param_4 + 4) * 0x20 + 0xb4) = 0;
      return 8;
    }
  }
  else if ((param_1 != 0) && (param_3 != 0x100)) {
    iVar4 = FUN_0054170c(param_1,param_3);
    if ((iVar4 != 0) && (*(int *)(iVar4 + 0x20) != 0)) {
      local_d0 = FUN_00545398(param_1);
      local_cc = *(undefined1 *)(param_4 + 4);
      local_cb = 0;
      memset(&local_88,0,0x4c);
      local_54 = *(undefined4 *)(param_1 + 0x44c);
      local_84 = 0x80;
      local_80 = 1;
      local_40 = &local_d0;
      local_50 = 8;
      local_88 = param_1;
      local_7c = param_3;
      FUN_00546bdc(&local_88,auStack_b8,0);
      return 8;
    }
  }
  return 8;
}


// 0x054ba68 (0x48 bytes)
undefined4 FUN_0054ba68(int param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4)

{
  undefined4 uVar1;
  
  uVar1 = 0xffffffff;
  if (param_1 != 0) {
    strcpy(param_1 + 0x428,param_4,0x14);
    uVar1 = 0x14;
  }
  return uVar1;
}


// 0x054bab0 (0x14 bytes)
undefined8 FUN_0054bab0(void)

{
  *(undefined4 *)(PTR_DAT_0071b22c + 0x58) = 0;
  return 0;
}


// 0x054bac4 (0x10 bytes)
void FUN_0054bac4(undefined4 param_1,undefined4 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR_DAT_0071b22c;
  *(undefined4 *)(PTR_DAT_0071b22c + 0x40) = param_2;
  *(undefined4 *)(puVar1 + 0x3c) = param_1;
  return;
}


// 0x054bad4 (0x158 bytes)
void FUN_0054bad4(void)

{
  undefined *puVar1;
  uint in_r6;
  GPiece<20> local_34;
  undefined4 uStack_20;
  
  puVar1 = PTR_DAT_0071b22c;
  if (in_r6 < 2) {
    if (in_r6 == 1) {
      uStack_20 = 0;
      if (*(undefined4 **)(PTR_DAT_0071b22c + 0x3c) != (undefined4 *)0x0) {
        (*(code *)**(undefined4 **)(PTR_DAT_0071b22c + 0x3c))(local_34);
      }
      if (*(undefined4 **)(puVar1 + 0x6c) != (undefined4 *)0x0) {
        (*(code *)**(undefined4 **)(puVar1 + 0x6c))(local_34);
      }
    }
  }
  return;
}


// 0x054bc2c (0x1b8 bytes)
int FUN_0054bc2c(int param_1,undefined8 param_2,int *param_3)

{
  undefined *puVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  puVar1 = PTR_DAT_0071b230;
  iVar2 = *param_3;
  if (iVar2 == -1) {
    iVar2 = 0;
    if (0 < *(int *)(param_1 + 0x44c)) {
      iVar3 = 0;
      do {
        iVar4 = FUN_0054170c(param_1,iVar3);
        if ((iVar4 != 0) && (*(int *)(iVar4 + 0x20) != 0)) {
          iVar2 = (*(code *)**(undefined4 **)(*(int *)puVar1 + 0x70))
                            (*(undefined4 *)(param_1 + 0x458),iVar3,1);
        }
        iVar3 = iVar3 + 1;
      } while (iVar3 < *(int *)(param_1 + 0x44c));
    }
  }
  else if (iVar2 == 0x100) {
    iVar2 = (*(code *)**(undefined4 **)(*(int *)PTR_DAT_0071b230 + 0x74))
                      (*(undefined4 *)(param_1 + 0x458),param_3[9],param_3[10] + -1,param_3 + 1,1);
  }
  else {
    if (0xff < iVar2) {
      return 3;
    }
    iVar2 = (*(code *)**(undefined4 **)(*(int *)PTR_DAT_0071b230 + 0x70))
                      (*(undefined4 *)(param_1 + 0x458),iVar2,1);
  }
  iVar3 = FUN_00540808(iVar2);
  if (iVar3 != 0) {
    return iVar3;
  }
  return iVar2;
}


// 0x054bde4 (0xd0 bytes)
int FUN_0054bde4(int param_1,int param_2,undefined2 param_3)

{
  undefined *puVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 *puVar4;
  int iVar5;
  int iVar6;
  
  puVar1 = PTR_DAT_0071b22c;
  if (0 < param_2) {
    iVar5 = 0;
    iVar6 = 0;
    do {
      puVar4 = (undefined4 *)(iVar6 + param_1);
      iVar5 = iVar5 + 1;
      iVar6 = iVar6 + 8;
      uVar2 = (**(code **)*puVar4)(*(undefined4 *)(*(int *)puVar1 + 0x45c),param_3,puVar4[1]);
      iVar3 = FUN_00540808(uVar2);
      if (iVar3 != 0) {
        return iVar3;
      }
    } while (param_2 != iVar5);
  }
  return 0;
}


// 0x054beb4 (0xcc bytes)
ulonglong FUN_0054beb4(undefined8 param_1,undefined2 param_2)

{
  undefined4 uVar2;
  ulonglong uVar1;
  GPiece<12> local_50;
  GPiece<44> local_44;
  
  uVar2 = (*(code *)**(undefined4 **)(*(int *)PTR_DAT_0071b234 + 0x98))(param_1,param_2,local_50);
  uVar1 = FUN_00540808(uVar2);
  if (uVar1 == 0) {
    (*(code *)**(undefined4 **)(PTR_DAT_0071b22c + 0x3c))(local_44);
    uVar1 = 0;
  }
  return uVar1 & 0xffffffff;
}


// 0x054bf80 (0xc8 bytes)
ulonglong FUN_0054bf80(undefined8 param_1,undefined2 param_2)

{
  undefined4 uVar2;
  ulonglong uVar1;
  GPiece<4> local_40;
  GPiece<36> local_3c;
  
  uVar2 = (*(code *)**(undefined4 **)(*(int *)PTR_DAT_0071b234 + 0x94))(param_1,param_2,local_40);
  uVar1 = FUN_00540808(uVar2);
  if (uVar1 == 0) {
    (*(code *)**(undefined4 **)(PTR_DAT_0071b22c + 0x44))(local_3c);
    uVar1 = 0;
  }
  return uVar1 & 0xffffffff;
}


// 0x054c048 (0x1e0 bytes)
// strings: 0071b240: '?333' (raw)

ulonglong FUN_0054c048(undefined8 param_1,undefined2 param_2)

{
  undefined *puVar1;
  undefined4 uVar3;
  ulonglong uVar2;
  ushort local_60 [2];
  GPiece<12> auStack_5c;
  GPiece<48> local_50;
  
  puVar1 = PTR_DAT_0071b234;
  uVar3 = (*(code *)**(undefined4 **)(*(int *)PTR_DAT_0071b234 + 0x94))(param_1,param_2,local_60);
  uVar2 = FUN_00540808(uVar3);
  if (uVar2 == 0) {
    uVar3 = (*(code *)**(undefined4 **)(*(int *)puVar1 + 0x98))(param_1,param_2,auStack_5c);
    uVar2 = FUN_00540808(uVar3);
    if (uVar2 == 0) {
      (*(code *)**(undefined4 **)(PTR_DAT_0071b22c + 0x34))(local_50);
      return 0;
    }
  }
  return uVar2 & 0xffffffff;
}


// 0x054c228 (0x5d8 bytes)
ulonglong FUN_0054c228(int *param_1)

{
  int iVar1;
  undefined *puVar2;
  undefined *puVar3;
  ulonglong uVar4;
  undefined4 uVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  longlong lVar9;
  int iVar10;
  uint uVar11;
  uint local_a0;
  GPiece<12> local_9c;
  GPiece<64> local_90;
  
  puVar2 = PTR_DAT_0071b22c;
  if (param_1[0xc] == 0) {
LAB_0054c2b4:
    uVar4 = 3;
    goto LAB_0054c2b8;
  }
  iVar6 = *param_1;
  iVar10 = param_1[0xd];
  iVar1 = *(int *)(iVar6 + 0x454);
  *(int *)(PTR_DAT_0071b22c + 0x6c) = param_1[0xc];
  *(int *)(puVar2 + 0x70) = iVar10;
  puVar3 = PTR_DAT_0071b230;
  if (iVar1 != 2) {
    iVar10 = param_1[1];
    if (iVar10 == -1) {
      uVar5 = 0;
      if (0 < *(int *)(iVar6 + 0x44c)) {
        iVar10 = 0;
        do {
          iVar6 = FUN_0054170c(iVar6,iVar10);
          if ((iVar6 != 0) && (*(int *)(iVar6 + 0x20) != 0)) {
            uVar5 = (*(code *)**(undefined4 **)(*(int *)puVar3 + 0x70))
                              (*(undefined4 *)(*param_1 + 0x458),iVar10,1);
          }
          iVar6 = *param_1;
          iVar10 = iVar10 + 1;
        } while (iVar10 < *(int *)(iVar6 + 0x44c));
      }
    }
    else if (iVar10 == 0x100) {
      uVar5 = (*(code *)**(undefined4 **)(*(int *)PTR_DAT_0071b230 + 0x74))
                        (*(undefined4 *)(iVar6 + 0x458),param_1[10],param_1[0xb] + -1,param_1 + 2,1)
      ;
    }
    else {
      if (0xff < iVar10) goto LAB_0054c2b4;
      uVar5 = (*(code *)**(undefined4 **)(*(int *)PTR_DAT_0071b230 + 0x70))
                        (*(undefined4 *)(iVar6 + 0x458),iVar10,1);
    }
    uVar4 = FUN_00540808(uVar5);
    goto LAB_0054c2b8;
  }
  uVar4 = FUN_00541390(iVar6,&local_a0);
  puVar3 = PTR_DAT_0071b234;
  if (uVar4 != 0) goto LAB_0054c2b8;
  uVar11 = param_1[1];
  if (uVar11 == 0xffffffff) {
    iVar6 = *param_1;
    if (0 < *(int *)(iVar6 + 0x44c)) {
      uVar5 = 0;
      uVar11 = 0;
      do {
        iVar6 = FUN_0054170c(iVar6,uVar11);
        if ((iVar6 != 0) && (*(int *)(iVar6 + 0x20) != 0)) {
          iVar6 = *param_1;
          if (*(uint *)(iVar6 + 0x404) == uVar11) {
            if (uVar11 != local_a0) {
              iVar10 = *(int *)puVar3;
              uVar5 = *(undefined4 *)(iVar6 + 0x45c);
              uVar7 = local_a0;
              goto LAB_0054c520;
            }
          }
          else {
            iVar10 = *(int *)puVar3;
            uVar5 = *(undefined4 *)(iVar6 + 0x45c);
            uVar7 = uVar11;
LAB_0054c520:
            uVar5 = (*(code *)**(undefined4 **)(iVar10 + 0x88))(uVar5,uVar7 & 0xffff,local_9c);
          }
          uVar4 = FUN_00540808(uVar5);
          if (uVar4 != 0) goto LAB_0054c2b8;
          (*(code *)**(undefined4 **)(puVar2 + 0x6c))(local_90);
        }
        iVar6 = *param_1;
        uVar11 = uVar11 + 1;
      } while ((int)uVar11 < *(int *)(iVar6 + 0x44c));
    }
  }
  else {
    if (uVar11 != 0x100) {
      if (0xff < (int)uVar11) goto LAB_0054c2b4;
      iVar6 = *param_1;
      if (*(uint *)(iVar6 + 0x404) == uVar11) {
        if (uVar11 != local_a0) {
          uVar5 = *(undefined4 *)(iVar6 + 0x45c);
          uVar11 = local_a0;
          goto LAB_0054c420;
        }
        uVar5 = 0;
      }
      else {
        uVar5 = *(undefined4 *)(iVar6 + 0x45c);
LAB_0054c420:
        uVar5 = (*(code *)**(undefined4 **)(*(int *)PTR_DAT_0071b234 + 0x88))
                          (uVar5,uVar11 & 0xffff,local_9c);
      }
      uVar4 = FUN_00540808(uVar5);
      if (uVar4 == 0) {
        (*(code *)**(undefined4 **)(puVar2 + 0x6c))();
        uVar4 = 0;
      }
      goto LAB_0054c2b8;
    }
    uVar7 = 0;
    uVar5 = 0;
    uVar11 = (param_1[0xb] - param_1[10]) - 1U >> 5;
    if (uVar11 != 0xffffffff) {
      do {
        lVar9 = 0;
        do {
          if ((1 << ((uint)lVar9 & 0x3f) & param_1[uVar7 + 2]) != 0) {
            uVar4 = ((ulonglong)uVar7 & 0x7ffffff) * 0x20 + lVar9 + (ulonglong)(uint)param_1[10];
            uVar8 = (uint)uVar4;
            if ((*(uint *)(*param_1 + 0x404) != uVar8) ||
               (uVar4 = (ulonglong)local_a0, uVar8 != local_a0)) {
              uVar5 = (*(code *)**(undefined4 **)(*(int *)PTR_DAT_0071b234 + 0x88))
                                (*(undefined4 *)(*param_1 + 0x45c),uVar4 & 0xffff);
            }
            uVar4 = FUN_00540808(uVar5);
            if (uVar4 != 0) goto LAB_0054c2b8;
            (*(code *)**(undefined4 **)(puVar2 + 0x6c))(local_90);
          }
          lVar9 = lVar9 + 1;
        } while (lVar9 != 0x20);
        uVar7 = uVar7 + 1;
      } while (uVar11 + 1 != uVar7);
    }
  }
  uVar4 = 0;
LAB_0054c2b8:
  return uVar4 & 0xffffffff;
}


// 0x054c800 (0x288 bytes)
ulonglong FUN_0054c800(int *param_1,undefined4 param_2)

{
  uint uVar1;
  undefined *puVar2;
  int iVar3;
  undefined4 uVar6;
  ulonglong uVar4;
  ulonglong uVar5;
  int iVar7;
  uint *puVar8;
  longlong lVar9;
  longlong lVar10;
  GPiece<16> auStack_60;
  
  puVar2 = PTR_DAT_0071b22c;
  if (*param_1 == 0) {
    return 3;
  }
  uVar5 = 0;
  if (*(int *)(*(int *)PTR_DAT_0071b22c + 0x454) == 2) {
    uVar6 = FUN_00541390(*(int *)PTR_DAT_0071b22c,auStack_60);
    uVar4 = FUN_00540808(uVar6);
    uVar5 = uVar4;
    if ((int)uVar4 == 0) {
      iVar7 = *(int *)(puVar2 + 4);
      if (iVar7 == -1) {
        iVar7 = *(int *)puVar2;
        if (0 < *(int *)(iVar7 + 0x44c)) {
          uVar6 = 0;
          iVar3 = 0;
          do {
            iVar7 = FUN_0054170c(iVar7,iVar3);
            if ((iVar7 != 0) && (*(int *)(iVar7 + 0x20) != 0)) {
              if (*(int *)(*(int *)puVar2 + 0x404) != iVar3) {
                uVar6 = FUN_0054bde4(param_1,param_2,iVar3);
              }
              uVar5 = FUN_00540808(uVar6);
              if (uVar5 != 0) break;
            }
            iVar7 = *(int *)puVar2;
            iVar3 = iVar3 + 1;
            uVar5 = uVar4;
          } while (iVar3 < *(int *)(iVar7 + 0x44c));
        }
      }
      else if (iVar7 == 0x100) {
        uVar1 = (*(int *)(puVar2 + 0x2c) - *(int *)(puVar2 + 0x28)) - 1U >> 5;
        if (uVar1 != 0xffffffff) {
          puVar8 = (uint *)(puVar2 + 8);
          iVar7 = 0;
          do {
            lVar9 = 0;
            do {
              lVar10 = lVar9 + 1;
              if (((1 << ((uint)lVar9 & 0x3f) & *puVar8) != 0) &&
                 (iVar3 = (uint)lVar9 + *(int *)(puVar2 + 0x28) + iVar7 * 0x20,
                 *(int *)(*(int *)puVar2 + 0x404) != iVar3)) {
                FUN_0054bde4(param_1,param_2,iVar3);
              }
              lVar9 = lVar10;
            } while (lVar10 != 0x20);
            iVar7 = iVar7 + 1;
            puVar8 = puVar8 + 1;
          } while (uVar1 + 1 != iVar7);
        }
      }
      else {
        if (0xff < iVar7) {
          return 3;
        }
        uVar6 = 0;
        if (*(int *)(*(int *)puVar2 + 0x404) != iVar7) {
          uVar6 = FUN_0054bde4(param_1,param_2,iVar7);
        }
        uVar5 = FUN_00540808(uVar6);
      }
    }
  }
  return uVar5 & 0xffffffff;
}


// 0x054ca88 (0x214 bytes)
ulonglong FUN_0054ca88(void)

{
  int iVar1;
  uint uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined4 uVar6;
  ulonglong uVar5;
  int iVar7;
  ulonglong uVar8;
  int local_50;
  undefined4 local_4c [11];
  
  puVar3 = PTR_DAT_0071b22c;
  uVar8 = 0;
  if (*(int *)(PTR_DAT_0071b22c + 0x58) == 1) {
    uVar6 = thunk_FUN_00556eb4(&local_50);
    uVar5 = FUN_00540808(uVar6);
    uVar8 = uVar5;
    if ((int)uVar5 == 0) {
      iVar7 = *(int *)(puVar3 + 0x5c);
      if (*(int *)(*(int *)puVar3 + 0x454) == 2) {
        if ((*(int *)(puVar3 + 0x44) != 0) && (uVar8 = FUN_0054c800(local_4c,1), uVar8 != 0))
        goto LAB_0054cab8;
      }
      else if ((*(int *)(puVar3 + 0x44) != 0) &&
              (uVar8 = (ulonglong)
                       ((double)(uint)(local_50 - iVar7) * (double)(longlong)*(int *)(puVar3 + 0x4c)
                       + (double)*(uint *)(puVar3 + 0x68)), *(int *)(puVar3 + 0x68) = (int)uVar8,
              10 < (uVar8 & 0xffffffff))) {
        FUN_0054bc2c(*(int *)puVar3,0,puVar3 + 4);
      }
      puVar4 = PTR_PTR_0071b248;
      uVar8 = uVar5;
      if (*(uint *)(puVar3 + 0x60) < (uint)(local_50 - iVar7)) {
        uVar8 = (ulonglong)(*(int *)(puVar3 + 0x34) != 0);
        if (*(int *)(puVar3 + 0x44) != 0) {
          uVar2 = (uint)(*(int *)(puVar3 + 0x34) != 0);
          uVar8 = uVar8 + 1;
          local_4c[uVar2 * 2 + 1] = 0;
          local_4c[uVar2 * 2] = puVar4;
        }
        puVar4 = PTR_PTR_0071b24c;
        iVar7 = (int)uVar8;
        if (*(int *)(puVar3 + 0x3c) != 0) {
          if (*(int *)(*(int *)puVar3 + 0x454) == 2) {
            iVar1 = (int)(uVar8 << 3);
            iVar7 = iVar7 + 1;
            *(undefined4 *)((int)local_4c + iVar1 + 4) = 0;
            *(undefined **)((int)local_4c + iVar1) = puVar4;
          }
          else {
            FUN_0054bc2c(*(int *)puVar3,1,puVar3 + 4);
          }
        }
        uVar8 = FUN_0054c800(local_4c,iVar7);
        if (uVar8 == 0) {
          *(undefined4 *)(puVar3 + 0x58) = 0;
          uVar8 = uVar5;
        }
      }
    }
  }
LAB_0054cab8:
  return uVar8 & 0xffffffff;
}


// 0x054cc9c (0x124 bytes)
ulonglong FUN_0054cc9c(int *param_1)

{
  undefined *__dest;
  ulonglong uVar1;
  undefined4 uVar3;
  ulonglong uVar2;
  int local_50;
  int local_4c;
  int local_48;
  undefined4 local_40;
  int *local_3c;
  
  __dest = PTR_DAT_0071b22c;
  uVar2 = 0;
  if (*(int *)(PTR_DAT_0071b22c + 0x58) == 0) {
    local_4c = param_1[0x13];
    local_48 = param_1[0x14];
    local_50 = param_1[0xc];
    memset(PTR_DAT_0071b22c,0,0x6c);
    memcpy(__dest,param_1,0x58);
    if (*(int *)(*param_1 + 0x454) == 2) {
      local_3c = &local_50;
      local_40 = *(undefined4 *)(*(int *)PTR_DAT_0071b234 + 0x90);
      uVar1 = FUN_0054c800(&local_40,1);
      uVar2 = uVar1;
      if ((int)uVar1 == 0) {
        *(undefined4 *)(__dest + 0x58) = 1;
        uVar3 = thunk_FUN_00556eb4(__dest + 0x5c);
        uVar2 = FUN_00540808(uVar3);
        if (uVar2 == 0) {
          *(int *)(__dest + 0x60) = param_1[0xc];
          uVar2 = uVar1;
        }
      }
    }
  }
  return uVar2 & 0xffffffff;
}


// 0x054cdc0 (0x70 bytes)
undefined8 FUN_0054cdc0(int param_1)

{
  undefined8 uVar1;
  
  uVar1 = 3;
  if (param_1 != 0) {
    memset(param_1,0,0x58);
    *(undefined4 *)(param_1 + 0x54) = 1;
    FUN_0055b364(param_1 + 8);
    uVar1 = 0;
  }
  return uVar1;
}


// 0x054ce30 (0x80 bytes)
undefined8 FUN_0054ce30(undefined4 *param_1)

{
  undefined8 uVar1;
  
  uVar1 = 3;
  if (param_1 != (undefined4 *)0x0) {
    param_1[0xd] = 0;
    *param_1 = 0;
    param_1[1] = 0;
    param_1[2] = 0;
    param_1[3] = 0;
    param_1[4] = 0;
    param_1[5] = 0;
    param_1[6] = 0;
    param_1[7] = 0;
    param_1[8] = 0;
    param_1[9] = 0;
    param_1[10] = 0;
    param_1[0xb] = 0;
    param_1[0xc] = 0;
    FUN_0055b364(param_1 + 2);
    uVar1 = 0;
  }
  return uVar1;
}


// 0x054ceb0 (0x50 bytes)
undefined4 FUN_0054ceb0(void)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = FUN_0054285c();
  uVar2 = 0x24;
  if (iVar1 == 0) {
    uVar2 = FUN_00554550(2);
    uVar2 = FUN_00540808(uVar2);
  }
  return uVar2;
}


// 0x054cf00 (0x60 bytes)
undefined4 FUN_0054cf00(undefined4 param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = FUN_0054285c();
  uVar2 = 0x24;
  if (iVar1 == 0) {
    uVar2 = FUN_005544b8(param_1,2);
    uVar2 = FUN_00540808(uVar2);
  }
  return uVar2;
}


// 0x054cf60 (0x38 bytes)
undefined4 FUN_0054cf60(undefined8 param_1)

{
  undefined4 uVar1;
  
  uVar1 = FUN_0055479c(param_1,2);
  uVar1 = FUN_00540808(uVar1);
  return uVar1;
}


// 0x054cf98 (0x38 bytes)
undefined4 FUN_0054cf98(undefined8 param_1)

{
  undefined4 uVar1;
  
  uVar1 = FUN_00554a50(param_1,2);
  uVar1 = FUN_00540808(uVar1);
  return uVar1;
}


// 0x054cfd0 (0x44 bytes)
undefined8 FUN_0054cfd0(int param_1,uint *param_2)

{
  undefined8 uVar1;
  
  uVar1 = 3;
  if (((param_1 != 0) && (param_2 != (uint *)0x0)) && (uVar1 = 1000, *(int *)(param_1 + 0x478) != 0)
     ) {
    uVar1 = 0;
    *param_2 = *(uint *)(param_1 + 0x43c) & 1;
  }
  return uVar1;
}


// 0x054d014 (0x60 bytes)
uint FUN_0054d014(int param_1,undefined4 param_2,undefined4 param_3)

{
  uint uVar1;
  
  uVar1 = 4;
  if (*(int *)(param_1 + 0x478) != 0) {
    uVar1 = FUN_00558a74(param_2,param_3,*(undefined4 *)(param_1 + 0x41c));
    uVar1 = (int)(((int)uVar1 >> 0x1f) - ((int)uVar1 >> 0x1f ^ uVar1)) >> 0x1f & 0x14;
  }
  return uVar1;
}


// 0x054d074 (0x48 bytes)
undefined8 FUN_0054d074(int param_1,undefined4 param_2)

{
  undefined8 uVar1;
  
  uVar1 = 4;
  if (*(int *)(param_1 + 0x478) != 0) {
    FUN_00558b38(param_2,*(undefined4 *)(param_1 + 0x41c));
    uVar1 = 0;
  }
  return uVar1;
}


// 0x054d0bc (0x98 bytes)
void FUN_0054d0bc(int param_1)

{
  undefined4 local_820;
  GPiece<2060> auStack_81c;
  
  if ((param_1 != 0) && (*(int *)(param_1 + 0x478) != 0)) {
    FUN_0054d074(param_1,&local_820);
    FUN_0054d014(param_1,auStack_81c,&local_820);
    return;
  }
  return;
}


// 0x054d154 (0x48 bytes)
undefined8 FUN_0054d154(int param_1,undefined4 param_2)

{
  undefined8 uVar1;
  
  uVar1 = 4;
  if (*(int *)(param_1 + 0x478) != 0) {
    FUN_00558a0c(param_2,*(undefined4 *)(param_1 + 0x41c));
    uVar1 = 0;
  }
  return uVar1;
}


// 0x054d19c (0x2a4 bytes)
void FUN_0054d19c(int param_1,undefined2 param_2)

{
  bool bVar1;
  undefined *puVar2;
  int iVar3;
  ulonglong uVar4;
  uint uVar5;
  uint uVar6;
  byte bVar7;
  ulonglong uVar8;
  ushort uVar9;
  ushort uVar10;
  byte in_cr0;
  byte in_cr1;
  byte in_cr2;
  byte in_cr3;
  byte unaff_cr4;
  byte in_cr5;
  byte in_cr6;
  byte in_cr7;
  uint uStack00000008;
  short local_f0 [4];
  byte local_e8 [144];
  
  uStack00000008 =
       (uint)(in_cr0 & 0xf) << 0x1c | (uint)(in_cr1 & 0xf) << 0x18 | (uint)(in_cr2 & 0xf) << 0x14 |
       (uint)(in_cr3 & 0xf) << 0x10 | (uint)(unaff_cr4 & 0xf) << 0xc | (uint)(in_cr5 & 0xf) << 8 |
       (uint)(in_cr6 & 0xf) << 4 | (uint)(in_cr7 & 0xf);
  if ((*(int *)(param_1 + 0x478) != 0) && (**(int **)(param_1 + 0x41c) != 0)) {
    memset(local_e8,0,0x7f);
    puVar2 = PTR_DAT_0071b250;
    iVar3 = (*(code *)**(undefined4 **)(*(int *)PTR_DAT_0071b250 + 0x14))
                      (*(undefined4 *)(param_1 + 0x45c),local_f0);
    bVar1 = iVar3 == 0;
    if ((bVar1) && (iVar3 = *(int *)(param_1 + 0x41c), *(int *)(iVar3 + 4) != 0)) {
      uVar8 = 0;
      uVar10 = 0;
      uVar9 = 0;
      uVar4 = 0;
      do {
        while( true ) {
          if (*(short *)((int)(uVar4 << 2) + *(int *)(iVar3 + 8)) == local_f0[0]) {
            uVar5 = (uint)uVar10 - (uint)uVar9;
            uVar8 = (longlong)((int)uVar5 >> 3) + (ulonglong)((int)uVar5 < 0 && (uVar5 & 7) != 0);
            if (bVar1) {
              uVar6 = 0;
              bVar7 = 1;
              bVar1 = false;
              uVar8 = 0;
              uVar9 = uVar10;
            }
            else {
              uVar6 = (uint)uVar8 & 0xff;
              bVar7 = (byte)(1 << (uVar5 - (int)((uVar8 & 0xffffffff) << 3) & 0x3f));
            }
            local_e8[uVar6] = bVar7 | local_e8[uVar6];
          }
          if (!bVar1) break;
LAB_0054d2fc:
          iVar3 = *(int *)(param_1 + 0x41c);
          uVar10 = uVar10 + 1;
          uVar4 = (ulonglong)uVar10;
          if (*(uint *)(iVar3 + 4) <= uVar4) goto LAB_0054d3f4;
        }
        if ((uint)uVar10 != uVar9 + 0x3f7) goto LAB_0054d2fc;
        iVar3 = (*(code *)**(undefined4 **)(*(int *)puVar2 + 0x80))
                          (*(undefined4 *)(param_1 + 0x45c),uVar9,uVar8 + 1 & 0xff,local_e8,0xb,
                           local_f0,1,param_2);
        bVar1 = iVar3 == 0;
        if (!bVar1) {
          return;
        }
        memset(local_e8,0,0x7f);
        iVar3 = *(int *)(param_1 + 0x41c);
        uVar10 = uVar10 + 1;
        uVar4 = (ulonglong)uVar10;
      } while (uVar4 < *(uint *)(iVar3 + 4));
LAB_0054d3f4:
      if (!bVar1) {
        (*(code *)**(undefined4 **)(*(int *)puVar2 + 0x80))
                  (*(undefined4 *)(param_1 + 0x45c),uVar9,uVar8 + 1 & 0xff,local_e8,0xb,local_f0,1,
                   param_2);
      }
    }
  }
  return;
}


// 0x054d440 (0xcc bytes)
undefined8 FUN_0054d440(int param_1,undefined4 param_2,int param_3)

{
  int iVar1;
  
  if ((param_1 != 0) && (param_3 != 0)) {
    if (*(int *)(param_1 + 0x478) == 0) {
      return 1000;
    }
    if ((*(uint *)(param_1 + 0x43c) & 1) == 0) {
      return 1000;
    }
    iVar1 = FUN_00557718(param_2);
    if (iVar1 != 0) {
      FUN_00558968(param_2,param_3,*(undefined4 *)(param_1 + 0x41c));
      return 0;
    }
  }
  return 3;
}


// 0x054d50c (0xb0 bytes)
ulonglong FUN_0054d50c(void)

{
  ulonglong uVar1;
  uint *in_stack_00000074;
  
  if (*in_stack_00000074 < 7) {
                    /* WARNING: Could not recover jumptable at 0x0054d574. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar1 = (*(code *)(PTR_DAT_0071b254 + *(int *)(PTR_DAT_0071b254 + *in_stack_00000074 * 4)))();
    return uVar1;
  }
  uVar1 = FUN_00540808(0);
  return uVar1 & 0xffffffff;
}


// 0x054d734 (0x318 bytes)
/* WARNING: Removing unreachable block (ram,0x0054da40) */
/* WARNING: Removing unreachable block (ram,0x0054d964) */

void FUN_0054d734(int param_1,undefined4 param_2,int param_3,uint param_4,undefined4 param_5,
                 int param_6,undefined2 param_7)

{
  bool bVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  GPiece<4> local_880;
  GPiece<8> local_87c;
  GPiece<12> local_874;
  undefined4 uStack_868;
  GPiece<2040> local_860;
  
  if (*(int *)(param_1 + 0x478) != 0) {
    memset(local_860,0,0x7f0);
    iVar2 = FUN_0054d50c(param_1,param_2,local_880,param_3,param_4,param_5,local_860,local_87c);
    if (iVar2 == 0) {
      if (param_6 - 1U < 3) {
        iVar2 = (*(code *)**(undefined4 **)(*(int *)PTR_DAT_0071b250 + 0x7c))
                          (*(undefined4 *)(param_1 + 0x45c),param_2,0xffff,param_6,param_7);
      }
      else {
        iVar2 = (*(code *)**(undefined4 **)(*(int *)PTR_DAT_0071b250 + 0x80))
                          (*(undefined4 *)(param_1 + 0x45c),param_5,param_4 & 0xff,param_3,param_6,
                           local_860,0,param_7);
      }
      if ((iVar2 == 0) && (*(int *)(param_1 + 0x470) != 0)) {
        uStack_868 = 0;
        if ((param_6 - 7U < 2) || ((param_6 == 10 || (param_6 == 9)))) {
          (*(code *)**(undefined4 **)(param_1 + 0x470))(local_874);
        }
        else {
          uVar3 = 0;
          if (param_4 != 0) {
            do {
              uVar4 = 0;
              do {
                if ((1 << (uVar4 & 0x3f) & (uint)*(byte *)(uVar3 + param_3)) != 0) {
                  (*(code *)**(undefined4 **)(param_1 + 0x470))(local_874);
                }
                bVar1 = uVar4 != 7;
                uVar4 = uVar4 + 1;
              } while (bVar1);
              uVar3 = uVar3 + 1;
            } while (param_4 != uVar3);
          }
        }
      }
    }
  }
  return;
}


// 0x054da4c (0x38c bytes)
void FUN_0054da4c(int param_1,uint param_2,uint param_3,int param_4,int param_5,undefined4 param_6,
                 ushort *param_7,undefined4 param_8)

{
  bool bVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined8 uVar6;
  uint uVar7;
  int in_stack_00000074;
  GPiece<32> local_90;
  
  uVar7 = in_stack_00000074 - 7;
  if (8 < uVar7) {
    return;
  }
  if (*(int *)(param_1 + 0x478) == 0) goto LAB_0054db14;
  if (((uVar7 < 2) || (in_stack_00000074 == 10)) || (in_stack_00000074 == 9)) {
    iVar3 = FUN_00558604(param_3,param_2,*(undefined4 *)(param_1 + 0x41c));
    if (iVar3 != 0) {
      return;
    }
    if (*(int *)(param_1 + 0x454) != 2) goto LAB_0054db14;
    if (in_stack_00000074 == 8) {
      param_2 = param_2 & 0xffff;
      uVar2 = *(undefined4 *)(param_1 + 0x45c);
      param_3 = param_3 & 0xffff;
      iVar4 = 0;
      iVar5 = 0;
      param_6 = 0;
      iVar3 = *(int *)PTR_DAT_0071b250;
      uVar6 = 1;
    }
    else {
      if (in_stack_00000074 != 10) goto LAB_0054db14;
      param_2 = param_2 & 0xffff;
      uVar2 = *(undefined4 *)(param_1 + 0x45c);
      param_3 = param_3 & 0xffff;
      iVar4 = 0;
      iVar5 = 0;
      param_6 = 0;
      iVar3 = *(int *)PTR_DAT_0071b250;
      uVar6 = 0;
    }
  }
  else {
    if (((1 < in_stack_00000074 - 0xbU) && (in_stack_00000074 != 0xe)) && (in_stack_00000074 != 0xd)
       ) {
      FUN_00558ba0(param_2,*(undefined4 *)(param_1 + 0x41c));
      goto LAB_0054db14;
    }
    iVar3 = FUN_00557e84(param_4,param_5,param_6,param_7,param_8,*(undefined4 *)(param_1 + 0x41c));
    if (iVar3 != 0) {
      return;
    }
    if (*(int *)(param_1 + 0x454) != 2) goto LAB_0054db14;
    iVar4 = param_4;
    iVar5 = param_5;
    if (in_stack_00000074 == 0xc) {
      uVar2 = *(undefined4 *)(param_1 + 0x45c);
      param_2 = (uint)*param_7;
      param_3 = 0;
      iVar3 = *(int *)PTR_DAT_0071b250;
      uVar6 = 1;
    }
    else {
      if (in_stack_00000074 != 0xe) goto LAB_0054db14;
      uVar2 = *(undefined4 *)(param_1 + 0x45c);
      param_2 = (uint)*param_7;
      param_3 = 0;
      iVar3 = *(int *)PTR_DAT_0071b250;
      uVar6 = 0;
    }
  }
  iVar3 = (*(code *)**(undefined4 **)(iVar3 + 0x84))
                    (uVar2,param_2,param_3,iVar4,iVar5,param_6,uVar6);
  if (iVar3 != 0) {
    return;
  }
LAB_0054db14:
  if ((*(int *)(param_1 + 0x470) != 0) && (in_stack_00000074 != 0xf)) {
    if ((uVar7 < 2) || ((in_stack_00000074 == 10 || (in_stack_00000074 == 9)))) {
      (*(code *)**(undefined4 **)(param_1 + 0x470))(local_90);
    }
    else {
      iVar3 = 0;
      if (param_5 != 0) {
        do {
          uVar7 = 0;
          do {
            if ((1 << (uVar7 & 0x3f) & (uint)*(byte *)(iVar3 + param_4)) != 0) {
              (*(code *)**(undefined4 **)(param_1 + 0x470))(local_90);
            }
            bVar1 = uVar7 != 7;
            uVar7 = uVar7 + 1;
          } while (bVar1);
          iVar3 = iVar3 + 1;
        } while (param_5 != iVar3);
      }
    }
  }
  return;
}


// 0x054ddd8 (0x274 bytes)
ulonglong FUN_0054ddd8(int param_1,ulonglong param_2,ulonglong param_3,int param_4,
                      undefined4 param_5)

{
  ulonglong uVar1;
  undefined4 uVar2;
  ulonglong uVar3;
  GPiece<8> local_840;
  GPiece<2> local_838;
  undefined2 uStack_836;
  int local_834;
  GPiece<2040> auStack_830;
  
  if (((param_4 == 0) || ((param_3 & 0xffffffff) < (param_2 & 0xffffffff))) ||
     (0xfffe < (param_3 & 0xffffffff))) {
    return 2;
  }
  uVar3 = ((param_3 - param_2 << 0x20) >> 0x23) + 1;
  if (*(int *)(param_1 + 0x454) == 2) {
    uVar2 = FUN_00541740(param_1,&local_834);
    uVar1 = FUN_00540808(uVar2);
    if ((int)uVar1 != 0) goto LAB_0054de90;
    if (local_834 == 0) {
      uVar2 = FUN_00541390(param_1,local_838);
      uVar1 = FUN_00540808(uVar2);
      if (uVar1 != 0) goto LAB_0054de90;
      uVar1 = (*(code *)**(undefined4 **)(*(int *)PTR_DAT_0071b250 + 0x80))
                        (*(undefined4 *)(param_1 + 0x45c),param_2 & 0xffffffff,uVar3 & 0xff,param_4,
                         param_5,0,0,uStack_836);
    }
    else if (*(int *)(param_1 + 0x478) != 0) {
      memset(auStack_830,0,0x7f0);
      uVar2 = FUN_0054d50c(param_1,0,local_840,param_4,uVar3 & 0xff,param_2 & 0xffffffff,auStack_830
                           ,local_838);
      uVar1 = FUN_00540808(uVar2);
      if (uVar1 != 0) goto LAB_0054de90;
      FUN_0054da4c(param_1,0xffff,0,param_4,uVar3 & 0xff,param_2 & 0xffffffff,auStack_830,0);
      uVar1 = 0;
    }
  }
  else {
    uVar1 = (*(code *)**(undefined4 **)(*(int *)PTR_DAT_0071b258 + 0x80))
                      (*(undefined4 *)(param_1 + 0x458),param_2 & 0xffffffff,uVar3 & 0xff,param_4,
                       param_5);
  }
  uVar1 = FUN_00540808(uVar1 & 0xffffffff);
LAB_0054de90:
  return uVar1 & 0xffffffff;
}


// 0x054e04c (0x280 bytes)
int FUN_0054e04c(int param_1,undefined4 *param_2,undefined4 *param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  uint uVar4;
  uint uVar5;
  ulonglong uVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  uint uVar10;
  longlong lVar11;
  longlong lVar12;
  
  if (((param_1 != 0) && (param_2 != (undefined4 *)0x0)) && (param_3 != (undefined4 *)0x0)) {
    if ((*(int *)(param_1 + 0x478) == 0) || ((*(uint *)(param_1 + 0x43c) & 1) == 0)) {
      return 1000;
    }
    iVar7 = FUN_00557718(param_2[8]);
    if ((iVar7 != 0) && (iVar7 = FUN_00557718(param_2[9] + -1), iVar7 != 0)) {
      iVar7 = param_2[8];
      iVar9 = 0;
      iVar8 = param_2[9];
      uVar1 = param_2[3];
      uVar2 = param_2[2];
      uVar3 = *param_2;
      param_3[1] = param_2[1];
      uVar5 = (iVar8 - iVar7) - 1U >> 5;
      *param_3 = uVar3;
      param_3[2] = uVar2;
      param_3[3] = uVar1;
      uVar1 = param_2[6];
      uVar2 = param_2[5];
      uVar3 = param_2[7];
      param_3[4] = param_2[4];
      param_3[5] = uVar2;
      param_3[6] = uVar1;
      param_3[7] = uVar3;
      uVar1 = param_2[9];
      param_3[8] = param_2[8];
      param_3[9] = uVar1;
      if (uVar5 != 0xffffffff) {
        uVar10 = 0;
        iVar9 = 0;
        iVar7 = 0;
        do {
          lVar11 = 0;
          do {
            while( true ) {
              lVar12 = lVar11 + 1;
              uVar4 = 1 << ((uint)lVar11 & 0x3f);
              if ((uVar4 & *(uint *)(iVar7 + (int)param_2)) != 0) break;
LAB_0054e1f4:
              lVar11 = lVar12;
              if (lVar12 == 0x20) goto LAB_0054e284;
            }
            uVar6 = lVar11 + (ulonglong)(uint)param_2[8] + ((ulonglong)uVar10 & 0x7ffffff) * 0x20 &
                    0xffffffff;
            iVar8 = FUN_00558e9c(uVar6,*(undefined4 *)(param_1 + 0x404),
                                 *(undefined4 *)(param_1 + 0x41c));
            if (iVar8 != 0) goto LAB_0054e1f4;
            iVar8 = FUN_00558d74(uVar6,*(undefined4 *)(param_1 + 0x41c));
            if (iVar8 != 0) goto LAB_0054e1f4;
            iVar9 = 1000;
            *(uint *)(iVar7 + (int)param_3) = *(uint *)(iVar7 + (int)param_3) & ~uVar4;
            lVar11 = lVar12;
          } while (lVar12 != 0x20);
LAB_0054e284:
          uVar10 = uVar10 + 1;
          iVar7 = iVar7 + 4;
        } while (uVar5 + 1 != uVar10);
      }
      iVar7 = FUN_0054ddd8(param_1,param_3[8],param_3[9] + -1,param_3,6);
      if (iVar7 != 0) {
        return iVar7;
      }
      return iVar9;
    }
  }
  return 3;
}


// 0x054e2cc (0x278 bytes)
int FUN_0054e2cc(int param_1,undefined4 *param_2,undefined4 *param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  uint uVar4;
  uint uVar5;
  ulonglong uVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  uint uVar10;
  longlong lVar11;
  
  if (((param_1 != 0) && (param_2 != (undefined4 *)0x0)) && (param_3 != (undefined4 *)0x0)) {
    if ((*(int *)(param_1 + 0x478) == 0) || ((*(uint *)(param_1 + 0x43c) & 1) == 0)) {
      return 1000;
    }
    iVar7 = FUN_00557718(param_2[8]);
    if ((iVar7 != 0) && (iVar7 = FUN_00557718(param_2[9] + -1), iVar7 != 0)) {
      iVar7 = param_2[8];
      iVar9 = 0;
      iVar8 = param_2[9];
      uVar1 = param_2[3];
      uVar2 = param_2[2];
      uVar3 = *param_2;
      param_3[1] = param_2[1];
      uVar5 = (iVar8 - iVar7) - 1U >> 5;
      *param_3 = uVar3;
      param_3[2] = uVar2;
      param_3[3] = uVar1;
      uVar1 = param_2[6];
      uVar2 = param_2[5];
      uVar3 = param_2[7];
      param_3[4] = param_2[4];
      param_3[5] = uVar2;
      param_3[6] = uVar1;
      param_3[7] = uVar3;
      uVar1 = param_2[9];
      param_3[8] = param_2[8];
      param_3[9] = uVar1;
      if (uVar5 != 0xffffffff) {
        uVar10 = 0;
        iVar9 = 0;
        iVar7 = 0;
        do {
          lVar11 = 0;
          do {
            while (uVar4 = 1 << ((uint)lVar11 & 0x3f),
                  (uVar4 & *(uint *)(iVar7 + (int)param_2)) == 0) {
LAB_0054e474:
              lVar11 = lVar11 + 1;
              if (lVar11 == 0x20) goto LAB_0054e4ec;
            }
            uVar6 = lVar11 + (ulonglong)(uint)param_2[8] + ((ulonglong)uVar10 & 0x7ffffff) * 0x20 &
                    0xffffffff;
            iVar8 = FUN_00558e18(uVar6,*(undefined4 *)(param_1 + 0x41c));
            if (iVar8 == 1) {
              FUN_00558c7c(uVar6,*(undefined4 *)(param_1 + 0x41c));
              goto LAB_0054e474;
            }
            lVar11 = lVar11 + 1;
            iVar9 = 1000;
            *(uint *)(iVar7 + (int)param_3) = *(uint *)(iVar7 + (int)param_3) & ~uVar4;
          } while (lVar11 != 0x20);
LAB_0054e4ec:
          uVar10 = uVar10 + 1;
          iVar7 = iVar7 + 4;
        } while (uVar5 + 1 != uVar10);
      }
      iVar7 = FUN_0054ddd8(param_1,param_3[8],param_3[9] + -1,param_3,5);
      if (iVar7 != 0) {
        return iVar7;
      }
      return iVar9;
    }
  }
  return 3;
}


// 0x054e544 (0x1a8 bytes)
ulonglong FUN_0054e544(int param_1,undefined4 param_2,undefined4 param_3)

{
  ulonglong uVar1;
  undefined4 uVar2;
  GPiece<4> local_40;
  int local_3c;
  GPiece<2> local_38;
  undefined2 uStack_36;
  
  if (*(int *)(param_1 + 0x454) == 2) {
    uVar1 = FUN_00541740(param_1,&local_3c);
    if ((int)uVar1 != 0) goto LAB_0054e5b8;
    if (local_3c == 0) {
      uVar2 = FUN_00541390(param_1,local_38);
      uVar1 = FUN_00540808(uVar2);
      if (uVar1 != 0) goto LAB_0054e5b8;
      uVar1 = (*(code *)**(undefined4 **)(*(int *)PTR_DAT_0071b250 + 0x7c))
                        (*(undefined4 *)(param_1 + 0x45c),param_2,0,param_3,uStack_36);
    }
    else if (*(int *)(param_1 + 0x478) != 0) {
      uVar1 = FUN_0054d50c(param_1,param_2,local_40,0,0,0,0,0);
      if (uVar1 != 0) goto LAB_0054e5b8;
      FUN_0054da4c(param_1,0xffff,param_2,0,0,0,0,0);
      uVar1 = 0;
    }
  }
  else {
    uVar1 = (*(code *)**(undefined4 **)(*(int *)PTR_DAT_0071b258 + 0x7c))
                      (*(undefined4 *)(param_1 + 0x458),param_2,param_3);
  }
  uVar1 = FUN_00540808(uVar1 & 0xffffffff);
LAB_0054e5b8:
  return uVar1 & 0xffffffff;
}


// 0x054e6ec (0xe4 bytes)
undefined8 FUN_0054e6ec(int param_1,undefined4 param_2)

{
  undefined8 uVar1;
  int iVar2;
  
  uVar1 = 3;
  if (param_1 != 0) {
    if ((*(int *)(param_1 + 0x478) != 0) && ((*(uint *)(param_1 + 0x43c) & 1) != 0)) {
      iVar2 = FUN_00557718(param_2);
      if ((iVar2 != 0) &&
         ((iVar2 = FUN_00558e9c(param_2,*(undefined4 *)(param_1 + 0x404),
                                *(undefined4 *)(param_1 + 0x41c)), iVar2 == 1 ||
          (iVar2 = FUN_00558d74(param_2,*(undefined4 *)(param_1 + 0x41c)), iVar2 == 1)))) {
        uVar1 = FUN_0054e544(param_1,param_2,3);
        return uVar1;
      }
    }
    uVar1 = 1000;
  }
  return uVar1;
}


// 0x054e7d0 (0xf8 bytes)
undefined8 FUN_0054e7d0(int param_1,undefined4 param_2)

{
  int iVar2;
  undefined8 uVar1;
  
  if (param_1 == 0) {
LAB_0054e8c0:
    uVar1 = 3;
  }
  else {
    if ((*(int *)(param_1 + 0x478) != 0) && ((*(uint *)(param_1 + 0x43c) & 1) != 0)) {
      iVar2 = FUN_00557718(param_2);
      if (iVar2 == 0) goto LAB_0054e8c0;
      iVar2 = FUN_00558e18(param_2,*(undefined4 *)(param_1 + 0x41c));
      if ((((iVar2 == 1) && (iVar2 = *(int *)(param_1 + 0x454), iVar2 != 4)) && (iVar2 != 6)) &&
         (iVar2 != 7)) {
        FUN_00558c7c(param_2,*(undefined4 *)(param_1 + 0x41c));
        uVar1 = FUN_0054e544(param_1,param_2,2);
        return uVar1;
      }
    }
    uVar1 = 1000;
  }
  return uVar1;
}


// 0x054e8c8 (0xc bytes)
// strings: 0067d190: 'rt_comm ReleaseVersion 3.05.201103091800'

undefined4 FUN_0054e8c8(void)

{
  return *(undefined4 *)PTR_PTR_0071b25c;
}


// 0x054e8d4 (0x8 bytes)
// strings: 006600f8: '2011-03-09_18:00:00'

undefined * FUN_0054e8d4(void)

{
  return PTR_s_2011_03_09_18_00_00_0071b260;
}


// 0x054e8dc (0x44 bytes)
undefined4 FUN_0054e8dc(void)

{
  undefined4 uVar1;
  
  uVar1 = (*(code *)**(undefined4 **)(*(int *)PTR_DAT_0071b264 + 0x34))();
  return uVar1;
}


// 0x054e920 (0x44 bytes)
undefined4 FUN_0054e920(void)

{
  undefined4 uVar1;
  
  uVar1 = (*(code *)**(undefined4 **)(*(int *)PTR_DAT_0071b264 + 0x38))();
  return uVar1;
}


// 0x054e964 (0x44 bytes)
undefined4 FUN_0054e964(void)

{
  undefined4 uVar1;
  
  uVar1 = (*(code *)**(undefined4 **)(*(int *)PTR_DAT_0071b264 + 0x3c))();
  return uVar1;
}


// 0x054e9a8 (0x44 bytes)
undefined4 FUN_0054e9a8(void)

{
  undefined4 uVar1;
  
  uVar1 = (*(code *)**(undefined4 **)(*(int *)PTR_DAT_0071b264 + 0x44))();
  return uVar1;
}


// 0x054e9ec (0x48 bytes)
bool FUN_0054e9ec(int *param_1)

{
  bool bVar1;
  
  bVar1 = false;
  if (((param_1 != (int *)0x0) && (*param_1 != 0)) && (param_1[1] != 0)) {
    bVar1 = (uint)param_1[3] < 4;
  }
  return bVar1;
}


// 0x054ea34 (0xc0 bytes)
int FUN_0054ea34(int param_1,int *param_2)

{
  int iVar1;
  int iVar2;
  
  iVar1 = FUN_0054e9ec(param_1);
  iVar2 = 2;
  if ((iVar1 != 0) && (iVar2 = 0xc355, *(int *)(param_1 + 0xc) == 0)) {
    iVar1 = *(int *)(param_1 + 0x20);
    if (iVar1 == 0) {
      iVar1 = (*(code *)**(undefined4 **)(*(int *)PTR_DAT_0071b264 + 0x48))
                        (*(undefined4 *)(param_1 + 8),param_1 + 0x20);
      if (iVar1 != 0) {
        return iVar1;
      }
      iVar1 = *(int *)(param_1 + 0x20);
    }
    iVar2 = 0;
    *param_2 = iVar1;
  }
  return iVar2;
}


// 0x054eaf4 (0x5c bytes)
undefined8 FUN_0054eaf4(int param_1,undefined4 *param_2)

{
  int iVar2;
  undefined8 uVar1;
  
  *param_2 = 0;
  iVar2 = FUN_0054e9ec();
  uVar1 = 2;
  if (iVar2 != 0) {
    uVar1 = 0;
    *param_2 = *(undefined4 *)(param_1 + 0x1c);
  }
  return uVar1;
}


// 0x054eb50 (0x60 bytes)
undefined8 FUN_0054eb50(int param_1,int *param_2)

{
  int iVar2;
  undefined8 uVar1;
  
  *param_2 = 0;
  iVar2 = FUN_0054e9ec(param_1);
  uVar1 = 2;
  if (iVar2 != 0) {
    uVar1 = 0;
    *param_2 = param_1 + 8;
  }
  return uVar1;
}


// 0x054ebb0 (0xb0 bytes)
undefined4 FUN_0054ebb0(int param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = FUN_0054e9ec();
  uVar2 = 2;
  if (iVar1 != 0) {
    if ((*(int *)(param_1 + 0xc) == 0) || (uVar2 = 0xc355, *(int *)(param_1 + 0xc) == 2)) {
      uVar2 = (*(code *)**(undefined4 **)(*(int *)PTR_DAT_0071b264 + 0x40))
                        (*(undefined4 *)(param_1 + 8),param_2);
      return uVar2;
    }
  }
  return uVar2;
}


// 0x054ec60 (0xe4 bytes)
/* WARNING: Removing unreachable block (ram,0x0054ed30) */

int FUN_0054ec60(int param_1,undefined4 *param_2)

{
  int iVar1;
  int iVar2;
  GPiece<16> local_30;
  
  *param_2 = 0;
  iVar1 = FUN_0054e9ec();
  iVar2 = 2;
  if (iVar1 != 0) {
    if ((*(int *)(param_1 + 0x20) == 0) && (*(int *)(param_1 + 0xc) == 0)) {
      iVar2 = FUN_0054ea34(param_1,local_30);
      if (iVar2 == 0) {
        *param_2 = 0;
      }
    }
    else {
      iVar2 = (*(code *)**(undefined4 **)(*(int *)PTR_DAT_0071b264 + 0x30))
                        (*(undefined4 *)(param_1 + 8),param_2);
    }
  }
  return iVar2;
}


// 0x054ed44 (0x6c bytes)
void FUN_0054ed44(uint *param_1,uint param_2)

{
  if (param_2 == 0) {
    param_1[2] = 0;
  }
  else {
    param_1[2] = (uint)((float)*param_1 / ((float)param_2 / DAT_0071b268));
  }
  if ((float)param_1[3] < (float)param_1[2]) {
    param_1[3] = param_1[2];
  }
  *param_1 = 0;
  return;
}


// 0x054edb0 (0x40 bytes)
void FUN_0054edb0(void)

{
  (*(code *)**(undefined4 **)(*(int *)PTR_DAT_0071b264 + 0x50))();
  return;
}


// 0x054edf0 (0x48 bytes)
undefined4 FUN_0054edf0(undefined8 param_1)

{
  undefined4 uVar1;
  undefined8 uStack00000030;
  
  uStack00000030 = param_1;
  uVar1 = (*(code *)**(undefined4 **)(*(int *)PTR_DAT_0071b264 + 0x54))();
  return uVar1;
}


// 0x054ee38 (0x4c bytes)
undefined4 FUN_0054ee38(undefined8 param_1,undefined8 param_2)

{
  undefined4 uVar1;
  undefined8 uStack00000030;
  undefined8 uStack00000038;
  
  uStack00000030 = param_1;
  uStack00000038 = param_2;
  uVar1 = (*(code *)**(undefined4 **)(*(int *)PTR_DAT_0071b264 + 0x58))();
  return uVar1;
}


// 0x054ee84 (0x48 bytes)
undefined4 FUN_0054ee84(undefined8 param_1,undefined8 param_2)

{
  undefined4 uVar1;
  undefined8 uStack00000038;
  
  uStack00000038 = param_2;
  uVar1 = (*(code *)**(undefined4 **)(*(int *)PTR_DAT_0071b264 + 0x5c))();
  return uVar1;
}


// 0x054eecc (0x48 bytes)
undefined4 FUN_0054eecc(undefined8 param_1,undefined8 param_2)

{
  undefined4 uVar1;
  undefined8 uStack00000038;
  
  uStack00000038 = param_2;
  uVar1 = (*(code *)**(undefined4 **)(*(int *)PTR_DAT_0071b264 + 0x60))();
  return uVar1;
}


// 0x054ef14 (0xc bytes)
undefined4 FUN_0054ef14(void)

{
  return *(undefined4 *)PTR_DAT_0071b26c;
}


// 0x054ef20 (0x44 bytes)
undefined4 FUN_0054ef20(void)

{
  undefined4 uVar1;
  
  uVar1 = (*(code *)**(undefined4 **)(*(int *)PTR_DAT_0071b264 + 0x68))();
  return uVar1;
}


// 0x054ef64 (0xc bytes)
void FUN_0054ef64(undefined4 *param_1)

{
  *param_1 = 0;
  return;
}


// 0x054ef70 (0x54 bytes)
undefined4 FUN_0054ef70(undefined4 *param_1)

{
  undefined *puVar1;
  undefined4 uVar2;
  
  puVar1 = PTR_DAT_0071b264;
  param_1[1] = 0;
  *param_1 = 0;
  uVar2 = (*(code *)**(undefined4 **)(*(int *)puVar1 + 100))();
  return uVar2;
}


// 0x054efc4 (0x18 bytes)
void FUN_0054efc4(undefined4 *param_1)

{
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  return;
}


// 0x054efdc (0xb4 bytes)
void FUN_0054efdc(void)

{
  undefined *puVar1;
  undefined *puVar2;
  uint local_20 [4];
  
  puVar2 = PTR_DAT_0071b26c;
  puVar1 = PTR_DAT_0071b26c + 0x10;
  if (*(int *)(PTR_DAT_0071b26c + 0xc) != 0) {
    FUN_00556bb8(puVar1,local_20);
    if (1000 < local_20[0]) {
      FUN_0054ed44(puVar2 + 0x18,local_20[0]);
      FUN_0054ed44(puVar2 + 0x28,local_20[0]);
      FUN_0054ed44(puVar2 + 0x38,local_20[0]);
      FUN_0054ed44(puVar2 + 0x48,local_20[0]);
      thunk_FUN_00556a58(puVar1);
      return;
    }
  }
  return;
}


// 0x054f090 (0x98 bytes)
void FUN_0054f090(int param_1,int param_2,int param_3)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  undefined *puVar4;
  
  puVar4 = PTR_DAT_0071b26c;
  if (*(int *)(PTR_DAT_0071b26c + 0xc) == 0) {
    return;
  }
  if (param_1 != 0) {
    piVar3 = (int *)(PTR_DAT_0071b26c + 0x1c);
    iVar1 = *(int *)(PTR_DAT_0071b26c + 0x28);
    iVar2 = *(int *)(PTR_DAT_0071b26c + 0x2c);
    *(int *)(PTR_DAT_0071b26c + 0x18) = *(int *)(PTR_DAT_0071b26c + 0x18) + 1;
    *(int *)(puVar4 + 0x1c) = *piVar3 + 1;
    *(int *)(puVar4 + 0x28) = iVar1 + param_1 + param_3;
    *(int *)(puVar4 + 0x2c) = param_1 + param_3 + iVar2;
  }
  if (param_2 != 0) {
    *(int *)(puVar4 + 0x38) = *(int *)(puVar4 + 0x38) + 1;
    *(int *)(puVar4 + 0x4c) = param_2 + param_3 + *(int *)(puVar4 + 0x4c);
    *(int *)(puVar4 + 0x3c) = *(int *)(puVar4 + 0x3c) + 1;
    *(int *)(puVar4 + 0x48) = *(int *)(puVar4 + 0x48) + param_2 + param_3;
    FUN_0054efdc();
    return;
  }
  FUN_0054efdc();
  return;
}


// 0x054f128 (0xe8 bytes)
int FUN_0054f128(int param_1,int *param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  int iVar2;
  
  *param_2 = 0;
  iVar1 = FUN_0054e9ec();
  iVar2 = 2;
  if (iVar1 != 0) {
    iVar2 = 0xc355;
    if (*(int *)(param_1 + 0xc) == 3) {
      iVar2 = (*(code *)**(undefined4 **)(*(int *)PTR_DAT_0071b264 + 0x2c))
                        (*(undefined4 *)(param_1 + 8),param_2,param_3,param_4);
      if ((iVar2 == 0) && (*param_2 != 0)) {
        FUN_0054f090(0,0x1c,0);
      }
    }
  }
  return iVar2;
}


// 0x054f210 (0x104 bytes)
/* WARNING: Removing unreachable block (ram,0x0054f2b0) */
/* WARNING: Removing unreachable block (ram,0x0054f2c0) */
/* WARNING: Removing unreachable block (ram,0x0054f2ec) */

undefined4 FUN_0054f210(void)

{
  undefined4 uVar1;
  GPiece<4> local_40;
  GPiece<4> local_3c;
  GPiece<16> local_38;
  
  uVar1 = 5;
  if (*(int *)PTR_DAT_0071b26c != 0) {
    uVar1 = FUN_0054f128(*(undefined4 *)(PTR_DAT_0071b26c + 4),local_3c,local_38,local_40);
  }
  return uVar1;
}


// 0x054f314 (0x150 bytes)
int FUN_0054f314(int param_1,undefined4 param_2,undefined4 param_3,int param_4,undefined4 param_5,
                undefined4 *param_6)

{
  int iVar1;
  
  if (((param_6 == (undefined4 *)0x0) || (*param_6 = 0, param_4 == 0)) ||
     (iVar1 = FUN_0054e9ec(param_1), iVar1 == 0)) {
    return 2;
  }
  if (*(int *)(param_1 + 0xc) != 1) {
    return 0xc355;
  }
  iVar1 = (*(code *)**(undefined4 **)(*(int *)PTR_DAT_0071b264 + 0x28))
                    (*(undefined4 *)(param_1 + 8),param_2,param_3,param_4,param_5,param_6);
  if (iVar1 != 0) {
    return iVar1;
  }
  FUN_0054f090(0,*param_6,0x1c);
  return 0;
}


// 0x054f464 (0x19c bytes)
/* WARNING: Removing unreachable block (ram,0x0054f5f4) */

ulonglong FUN_0054f464(int param_1,int param_2,undefined4 param_3,undefined4 *param_4)

{
  int iVar2;
  ulonglong uVar1;
  GPiece<16> local_40;
  
  *param_4 = 0;
  if ((param_2 != 0) && (iVar2 = FUN_0054e9ec(param_1), iVar2 != 0)) {
    iVar2 = *(int *)(param_1 + 0xc);
    if ((iVar2 == 0) || (uVar1 = 0xc355, iVar2 == 2)) {
      if ((*(int *)(param_1 + 0x20) == 0) && (iVar2 == 0)) {
        uVar1 = FUN_0054ea34(param_1,local_40);
        if ((int)uVar1 == 0) {
          *param_4 = 0;
        }
      }
      else {
        uVar1 = (*(code *)**(undefined4 **)(*(int *)PTR_DAT_0071b264 + 0x24))
                          (*(undefined4 *)(param_1 + 8),param_2,param_3,param_4);
        if (uVar1 == 0) {
          FUN_0054f090(0,*param_4,0x28);
          return 0;
        }
      }
    }
    return uVar1 & 0xffffffff;
  }
  return 2;
}


// 0x054f600 (0x160 bytes)
int FUN_0054f600(int param_1,undefined4 *param_2,undefined8 param_3,undefined4 param_4)

{
  undefined *puVar1;
  int iVar2;
  undefined8 uStack00000040;
  
  puVar1 = PTR_DAT_0071b264;
  if (param_2 != (undefined4 *)0x0) {
    *param_2 = 0;
    uStack00000040 = param_3;
    iVar2 = (*(code *)**(undefined4 **)(*(int *)puVar1 + 0x54))(param_3);
    if ((iVar2 == 0) && (iVar2 = FUN_0054e9ec(param_1), iVar2 != 0)) {
      iVar2 = 0xc355;
      if (*(int *)(param_1 + 0xc) == 3) {
        iVar2 = (*(code *)**(undefined4 **)(*(int *)puVar1 + 0x20))
                          (*(undefined4 *)(param_1 + 8),param_2,uStack00000040,param_4);
        if (iVar2 == 0) {
          FUN_0054f090(0x1c,0,0);
          return 0;
        }
      }
      return iVar2;
    }
  }
  return 2;
}


// 0x054f760 (0x40 bytes)
undefined8 FUN_0054f760(undefined4 *param_1,undefined8 param_2,undefined4 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uStack00000038;
  
  puVar1 = PTR_DAT_0071b26c;
  *param_1 = 0;
  if (*(int *)puVar1 == 0) {
    return 5;
  }
  uStack00000038 = param_2;
  uVar2 = FUN_0054f600(*(undefined4 *)(puVar1 + 4),param_1,param_2,param_3);
  return uVar2;
}


// 0x054f7a0 (0x168 bytes)
int FUN_0054f7a0(int param_1,undefined8 param_2,undefined4 param_3,int param_4,undefined4 *param_5)

{
  undefined *puVar1;
  longlong lVar2;
  int iVar3;
  int iVar4;
  undefined8 uStack00000038;
  
  puVar1 = PTR_DAT_0071b264;
  iVar4 = 2;
  uStack00000038 = param_2;
  lVar2 = (*(code *)**(undefined4 **)(*(int *)PTR_DAT_0071b264 + 0x54))(param_2);
  if (lVar2 == 0) {
    *param_5 = 0;
    if ((param_4 != 0) && (iVar3 = FUN_0054e9ec(param_1), iVar3 != 0)) {
      iVar4 = 0xc355;
      if (*(int *)(param_1 + 0xc) == 1) {
        iVar4 = (*(code *)**(undefined4 **)(*(int *)puVar1 + 0x1c))
                          (*(undefined4 *)(param_1 + 8),uStack00000038,param_3,param_4,param_5);
        if (iVar4 == 0) {
          FUN_0054f090(*param_5,0,0x1c);
          return 0;
        }
      }
    }
  }
  return iVar4;
}


// 0x054f908 (0x150 bytes)
/* WARNING: Removing unreachable block (ram,0x0054fa4c) */

ulonglong FUN_0054f908(int param_1,undefined4 param_2,undefined4 *param_3)

{
  int iVar2;
  ulonglong uVar1;
  GPiece<24> local_40;
  
  *param_3 = 0;
  iVar2 = FUN_0054e9ec();
  uVar1 = 2;
  if (iVar2 != 0) {
    iVar2 = *(int *)(param_1 + 0xc);
    if ((iVar2 == 0) || (uVar1 = 0xc355, iVar2 == 2)) {
      if ((*(int *)(param_1 + 0x20) == 0) && (iVar2 == 0)) {
        uVar1 = FUN_0054ea34(param_1,local_40);
        if ((int)uVar1 == 0) {
          *param_3 = 0;
        }
      }
      else {
        uVar1 = (*(code *)**(undefined4 **)(*(int *)PTR_DAT_0071b264 + 0x18))
                          (*(undefined4 *)(param_1 + 8),param_2,param_3);
        if (uVar1 == 0) {
          FUN_0054f090(*param_3,0,0x28);
          return 0;
        }
      }
    }
  }
  return uVar1 & 0xffffffff;
}


// 0x054fa58 (0x17c bytes)
int FUN_0054fa58(int param_1,undefined8 param_2,undefined4 param_3,int param_4,undefined4 param_5,
                undefined4 *param_6)

{
  undefined *puVar1;
  longlong lVar2;
  int iVar3;
  int iVar4;
  undefined8 uStack00000038;
  
  puVar1 = PTR_DAT_0071b264;
  iVar4 = 2;
  uStack00000038 = param_2;
  lVar2 = (*(code *)**(undefined4 **)(*(int *)PTR_DAT_0071b264 + 0x54))(param_2);
  if (lVar2 == 0) {
    *param_6 = 0;
    if ((param_4 != 0) && (iVar3 = FUN_0054e9ec(param_1), iVar3 != 0)) {
      iVar4 = 0xc355;
      if (*(int *)(param_1 + 0xc) == 1) {
        iVar4 = (*(code *)**(undefined4 **)(*(int *)puVar1 + 0x14))
                          (*(undefined4 *)(param_1 + 8),uStack00000038,param_3,param_4,param_5,
                           param_6);
        if (iVar4 == 0) {
          FUN_0054f090(*param_6,0,0x1c);
          return 0;
        }
      }
    }
  }
  return iVar4;
}


// 0x054fbd4 (0x164 bytes)
/* WARNING: Removing unreachable block (ram,0x0054fd2c) */

ulonglong FUN_0054fbd4(int param_1,undefined4 param_2,undefined4 param_3,undefined4 *param_4)

{
  int iVar2;
  ulonglong uVar1;
  GPiece<16> local_40;
  
  *param_4 = 0;
  iVar2 = FUN_0054e9ec();
  uVar1 = 2;
  if (iVar2 != 0) {
    iVar2 = *(int *)(param_1 + 0xc);
    if ((iVar2 == 0) || (uVar1 = 0xc355, iVar2 == 2)) {
      if ((*(int *)(param_1 + 0x20) == 0) && (iVar2 == 0)) {
        uVar1 = FUN_0054ea34(param_1,local_40);
        if ((int)uVar1 == 0) {
          *param_4 = 0;
        }
      }
      else {
        uVar1 = (*(code *)**(undefined4 **)(*(int *)PTR_DAT_0071b264 + 0x10))
                          (*(undefined4 *)(param_1 + 8),param_2,param_3,param_4);
        if (uVar1 == 0) {
          FUN_0054f090(*param_4,0,0x28);
          return 0;
        }
      }
    }
  }
  return uVar1 & 0xffffffff;
}


// 0x054fd38 (0x8c bytes)
void FUN_0054fd38(void)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR_DAT_0071b26c;
  puVar2 = PTR_DAT_0071b26c + 0x10;
  *(undefined4 *)(PTR_DAT_0071b26c + 0x4c) = 0;
  *(undefined4 *)(puVar1 + 0x54) = 0;
  *(undefined4 *)(puVar1 + 0x18) = 0;
  *(undefined4 *)(puVar1 + 0x1c) = 0;
  *(undefined4 *)(puVar1 + 0x20) = 0;
  *(undefined4 *)(puVar1 + 0x24) = 0;
  *(undefined4 *)(puVar1 + 0x28) = 0;
  *(undefined4 *)(puVar1 + 0x2c) = 0;
  *(undefined4 *)(puVar1 + 0x30) = 0;
  *(undefined4 *)(puVar1 + 0x34) = 0;
  *(undefined4 *)(puVar1 + 0x38) = 0;
  *(undefined4 *)(puVar1 + 0x3c) = 0;
  *(undefined4 *)(puVar1 + 0x40) = 0;
  *(undefined4 *)(puVar1 + 0x44) = 0;
  *(undefined4 *)(puVar1 + 0x48) = 0;
  *(undefined4 *)(puVar1 + 0x50) = 0;
  thunk_FUN_00556a58(puVar2);
  *(undefined4 *)(puVar1 + 0x58) = *(undefined4 *)(puVar1 + 0x10);
  *(undefined4 *)(puVar1 + 0x5c) = *(undefined4 *)(puVar1 + 0x14);
  return;
}


// 0x054fdc4 (0x70 bytes)
void FUN_0054fdc4(int param_1)

{
  undefined *puVar1;
  
  puVar1 = PTR_DAT_0071b26c;
  if (param_1 != 0) {
    if (param_1 != *(int *)(PTR_DAT_0071b26c + 0xc)) {
      FUN_0054fd38();
    }
    *(int *)(puVar1 + 0xc) = param_1;
    return;
  }
  *(undefined4 *)(PTR_DAT_0071b26c + 0xc) = 0;
  return;
}


// 0x054fe34 (0x30 bytes)
void FUN_0054fe34(void)

{
  GPiece<16> local_10;
  
  FUN_005519f0(local_10);
  return;
}


// 0x054fe64 (0x90 bytes)
void FUN_0054fe64(undefined4 *param_1)

{
  int iVar1;
  
  iVar1 = FUN_0054e9ec();
  if (iVar1 == 0) {
    return;
  }
  (*(code *)**(undefined4 **)(*(int *)PTR_DAT_0071b264 + 0xc))(param_1[2]);
  *param_1 = 0;
  param_1[1] = 0;
  FUN_0054fe34(param_1);
  return;
}


// 0x054fef4 (0x54 bytes)
undefined8 FUN_0054fef4(void)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  puVar1 = PTR_DAT_0071b26c;
  uVar2 = 5;
  if (*(int *)PTR_DAT_0071b26c != 0) {
    FUN_0054fe64(*(undefined4 *)(PTR_DAT_0071b26c + 4));
    uVar2 = 0;
    *(undefined4 *)puVar1 = 0;
  }
  return uVar2;
}


// 0x054ff48 (0x54 bytes)
undefined8 FUN_0054ff48(void)

{
  undefined *puVar1;
  
  puVar1 = PTR_DAT_0071b26c;
  if (*(int *)(PTR_DAT_0071b26c + 0x280) != 0) {
    FUN_0054fe64(*(undefined4 *)(PTR_DAT_0071b26c + 0x60));
    memset(puVar1 + 0x60,0,0x224);
  }
  return 0;
}


// 0x054ff9c (0xb8 bytes)
void FUN_0054ff9c(void)

{
  int iVar1;
  undefined *puVar2;
  
  puVar2 = PTR_DAT_0071b26c;
  if (0 < *(int *)(PTR_DAT_0071b26c + 0x284)) {
    FUN_0054fef4();
    FUN_0054ff48();
    iVar1 = *(int *)(puVar2 + 0x284);
    *(int *)(puVar2 + 0x284) = iVar1 + -1;
    if (iVar1 + -1 == 0) {
      (*(code *)**(undefined4 **)(*(int *)PTR_DAT_0071b264 + 4))();
      FUN_0054fd38();
      memset(puVar2 + 0x60,0,0x224);
      *(undefined4 *)(puVar2 + 8) = 0;
      *(undefined4 *)puVar2 = 0;
      *(undefined4 *)(puVar2 + 4) = 0;
      return;
    }
  }
  return;
}


// 0x0550054 (0x54 bytes)
/* WARNING: Removing unreachable block (ram,0x0055008c) */

undefined4 FUN_00550054(void)

{
  GPiece<16> local_10;
  
  FUN_00551de8(local_10,0x24);
  return 0;
}


// 0x05500a8 (0x150 bytes)
int FUN_005500a8(int *param_1,undefined8 param_2,undefined4 param_3,undefined4 *param_4)

{
  undefined *puVar1;
  int iVar2;
  int iVar3;
  undefined8 uStack00000038;
  
  *param_1 = 0;
  uStack00000038 = param_2;
  iVar2 = FUN_00550054();
  iVar3 = 3;
  if (iVar2 != 0) {
    if (param_4 == (undefined4 *)0x0) {
      FUN_0054efc4(iVar2 + 0xc);
    }
    else {
      *(undefined4 *)(iVar2 + 0xc) = *param_4;
      *(undefined4 *)(iVar2 + 0x10) = param_4[1];
      *(undefined4 *)(iVar2 + 0x14) = param_4[2];
      *(undefined4 *)(iVar2 + 0x18) = param_4[3];
    }
    puVar1 = PTR_DAT_0071b264;
    *(undefined4 *)(iVar2 + 0x1c) = param_3;
    iVar3 = (*(code *)**(undefined4 **)(*(int *)puVar1 + 8))
                      (iVar2 + 8,uStack00000038,iVar2 + 0x1c,iVar2 + 0xc,iVar2 + 0x20);
    if (iVar3 != 0) {
      FUN_0054fe34(iVar2);
      return iVar3;
    }
    *param_1 = iVar2;
    *(undefined4 *)(iVar2 + 4) = 1;
    iVar3 = 0;
  }
  return iVar3;
}


// 0x05501f8 (0xc4 bytes)
int FUN_005501f8(undefined4 *param_1)

{
  undefined4 uVar1;
  undefined *puVar2;
  int iVar3;
  undefined8 local_40;
  GPiece<8> local_38;
  undefined8 uStack_30;
  
  puVar2 = PTR_DAT_0071b26c;
  iVar3 = 5;
  if (*(int *)PTR_DAT_0071b26c == 0) {
    uStack_30 = 0;
    FUN_0054edb0(&local_40);
    iVar3 = FUN_005500a8(puVar2 + 4,local_40,0,local_38);
    if (iVar3 == 0) {
      uVar1 = *param_1;
      *(undefined4 *)puVar2 = 1;
      *(undefined4 *)(puVar2 + 8) = uVar1;
      return 0;
    }
  }
  return iVar3;
}


// 0x05502bc (0x420 bytes)
int FUN_005502bc(char *param_1)

{
  char cVar1;
  undefined *puVar2;
  int iVar4;
  longlong lVar3;
  int iVar5;
  char cVar6;
  undefined *puVar7;
  int iVar8;
  short sVar9;
  GPiece<4> local_60;
  undefined8 local_5c;
  GPiece<8> local_54;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  
  puVar7 = PTR_DAT_0071b264;
  if ((((param_1 == (char *)0x0) || (*(int *)(param_1 + 0x108) == 0)) || (*param_1 == '\0')) ||
     (iVar4 = (*(code *)**(undefined4 **)(*(int *)PTR_DAT_0071b264 + 0x54))
                        (*(undefined8 *)(param_1 + 0x100)), puVar2 = PTR_DAT_0071b26c, iVar4 != 0))
  {
    return 2;
  }
  if (*(int *)(PTR_DAT_0071b26c + 0x280) != 0) {
    return 0xc357;
  }
  *(undefined4 *)(PTR_DAT_0071b26c + 0x280) = *(undefined4 *)(param_1 + 0x108);
  if (((int)*param_1 - 0x30U < 10) ||
     (lVar3 = (*(code *)**(undefined4 **)(*(int *)puVar7 + 0x54))(*(undefined8 *)(param_1 + 0x100)),
     lVar3 != 0)) {
    memset(puVar2 + 0x60,0,0x224);
    return 2;
  }
  iVar4 = *(int *)puVar7;
  *(undefined4 *)(puVar2 + 0x6c) = *(undefined4 *)(param_1 + 0x100);
  *(undefined4 *)(puVar2 + 0x70) = *(undefined4 *)(param_1 + 0x104);
  uStack_48 = 0;
  uStack_4c = 0;
  (*(code *)**(undefined4 **)(iVar4 + 0x50))(&local_5c);
  iVar4 = FUN_005500a8(puVar2 + 0x60,local_5c,0,local_54);
  if (iVar4 != 0) {
    memset(puVar2 + 0x60,0,0x224);
    return iVar4;
  }
  sVar9 = *(short *)(puVar2 + 0x288);
  puVar7 = puVar2 + 0x74;
  *(short *)(puVar2 + 0x288) = sVar9 + 1;
  *(short *)(puVar2 + 0x278) = sVar9;
  FUN_00552704(puVar7,sVar9);
  iVar5 = 0xc;
  FUN_00552704(puVar2 + 0x76,0x100);
  cVar6 = '\0';
  FUN_00552704(puVar2 + 0x78,1);
  FUN_00552704(puVar2 + 0x7a,0);
  FUN_00552704(puVar2 + 0x7c,0);
  sVar9 = 1;
  FUN_00552704(puVar2 + 0x7e,0);
  iVar4 = 0xd;
  do {
    iVar8 = iVar4;
    cVar1 = *param_1;
    if (cVar1 == '.') {
      FUN_00551ed8(puVar7 + iVar5,cVar6);
      iVar5 = iVar8;
      cVar6 = '\0';
    }
    else {
      if (cVar1 == '\0') {
        FUN_00551ed8(puVar2 + iVar5 + 0x74,cVar6);
        FUN_00551ed8(puVar2 + iVar8 + 0x74,0);
        break;
      }
      FUN_00551ed8(puVar7 + iVar8,cVar1);
      cVar6 = cVar6 + '\x01';
    }
    sVar9 = sVar9 + 1;
    param_1 = param_1 + 1;
    iVar4 = iVar8 + 1;
  } while (sVar9 != 0x100);
  puVar7 = puVar2 + 0x74;
  FUN_00552704(puVar7 + iVar8 + 1,1);
  FUN_00552704(puVar7 + iVar8 + 3,1);
  *(int *)(puVar2 + 0x274) = iVar8 + 5;
  iVar4 = FUN_0054fa58(*(undefined4 *)(puVar2 + 0x60),*(undefined8 *)(puVar2 + 0x6c),0x35,puVar7,
                       iVar8 + 5,local_60);
  if (iVar4 != 0) {
    FUN_0054fe64(*(undefined4 *)(puVar2 + 0x60));
    memset(puVar2 + 0x60,0,0x224);
    return iVar4;
  }
  thunk_FUN_00556a58(puVar2 + 100);
  *(undefined4 *)(puVar2 + 0x27c) = 0;
  return 0;
}


// 0x05506dc (0x44 bytes)
void * FUN_005506dc(void *param_1)

{
  void *pvVar1;
  
  FUN_0054efdc();
  pvVar1 = memcpy(param_1,PTR_DAT_0071b26c + 0x10,0x48);
  return pvVar1;
}


// 0x0550720 (0x634 bytes)
/* WARNING: Removing unreachable block (ram,0x00550cdc) */
/* WARNING: Removing unreachable block (ram,0x00550ce8) */
/* WARNING: Removing unreachable block (ram,0x00550c44) */
/* WARNING: Removing unreachable block (ram,0x005509c0) */
/* WARNING: Removing unreachable block (ram,0x00550aa4) */
/* WARNING: Removing unreachable block (ram,0x00550ac8) */
/* WARNING: Removing unreachable block (ram,0x00550ae4) */
/* WARNING: Removing unreachable block (ram,0x00550ad8) */
/* WARNING: Removing unreachable block (ram,0x00550af0) */
/* WARNING: Removing unreachable block (ram,0x00550b80) */
/* WARNING: Removing unreachable block (ram,0x00550b2c) */
/* WARNING: Removing unreachable block (ram,0x0055094c) */
/* WARNING: Removing unreachable block (ram,0x005509a8) */
/* WARNING: Removing unreachable block (ram,0x005509b4) */
/* WARNING: Removing unreachable block (ram,0x00550b68) */
/* WARNING: Removing unreachable block (ram,0x00550b44) */
/* WARNING: Removing unreachable block (ram,0x00550be8) */
/* WARNING: Removing unreachable block (ram,0x00550b74) */
/* WARNING: Removing unreachable block (ram,0x005509f8) */
/* WARNING: Removing unreachable block (ram,0x00550bf4) */
/* WARNING: Removing unreachable block (ram,0x00550b38) */
/* WARNING: Removing unreachable block (ram,0x00550c04) */
/* WARNING: Removing unreachable block (ram,0x00550b84) */
/* WARNING: Removing unreachable block (ram,0x00550b8c) */
/* WARNING: Removing unreachable block (ram,0x00550cd0) */
/* WARNING: Removing unreachable block (ram,0x00550ca4) */
/* WARNING: Removing unreachable block (ram,0x00550ca8) */
/* WARNING: Removing unreachable block (ram,0x00550bc8) */
/* WARNING: Removing unreachable block (ram,0x00550ba4) */
/* WARNING: Removing unreachable block (ram,0x00550c08) */
/* WARNING: Removing unreachable block (ram,0x00550c14) */
/* WARNING: Removing unreachable block (ram,0x00550c10) */
/* WARNING: Removing unreachable block (ram,0x00550c48) */
/* WARNING: Removing unreachable block (ram,0x00550c50) */
/* WARNING: Removing unreachable block (ram,0x00550bd4) */
/* WARNING: Removing unreachable block (ram,0x00550cb8) */
/* WARNING: Removing unreachable block (ram,0x00550a04) */

int FUN_00550720(ulonglong param_1)

{
  undefined4 *puVar1;
  bool bVar2;
  undefined *puVar3;
  undefined *puVar4;
  int iVar5;
  undefined *puVar6;
  byte in_cr0;
  byte in_cr1;
  byte in_cr2;
  byte in_cr3;
  byte unaff_cr4;
  byte in_cr5;
  byte in_cr6;
  byte in_cr7;
  uint uStack00000008;
  GPiece<4> local_98;
  GPiece<4> local_94;
  uint local_90;
  GPiece<12> local_8c;
  
  puVar4 = PTR_DAT_0071b26c;
  uStack00000008 =
       (uint)(in_cr0 & 0xf) << 0x1c | (uint)(in_cr1 & 0xf) << 0x18 | (uint)(in_cr2 & 0xf) << 0x14 |
       (uint)(in_cr3 & 0xf) << 0x10 | (uint)(unaff_cr4 & 0xf) << 0xc | (uint)(in_cr5 & 0xf) << 8 |
       (uint)(in_cr6 & 0xf) << 4 | (uint)(in_cr7 & 0xf);
  if (*(int *)(PTR_DAT_0071b26c + 0x284) != 0) {
    bVar2 = (param_1 & 2) != 0;
    if ((bVar2) && (*(int *)(PTR_DAT_0071b26c + 0x280) != 0)) {
      puVar3 = PTR_DAT_0071b26c + 100;
      puVar6 = PTR_DAT_0071b26c + 0x60;
      thunk_FUN_00556bb8(puVar3,&local_90);
      if (local_90 < 0x1f5) {
        iVar5 = *(int *)(puVar4 + 0x27c);
      }
      else {
        FUN_0054fa58(*(undefined4 *)(puVar4 + 0x60),*(undefined8 *)(puVar4 + 0x6c),0x35,
                     puVar4 + 0x74,*(undefined4 *)(puVar4 + 0x274),local_98);
        thunk_FUN_00556a58(puVar3);
        iVar5 = *(int *)(puVar4 + 0x27c) + 1;
        *(int *)(puVar4 + 0x27c) = iVar5;
      }
      if (iVar5 == 0x14) {
        memset(puVar4 + 0x28c,0,0x88);
        *(undefined4 *)(puVar4 + 0x310) = 0xc358;
        FUN_0054fe64(*(undefined4 *)(puVar4 + 0x60));
        puVar1 = *(undefined4 **)(puVar4 + 0x280);
        memset(puVar6,0,0x224);
        (*(code *)*puVar1)(puVar4 + 0x28c);
      }
    }
    puVar3 = PTR_DAT_0071b264;
    iVar5 = (*(code *)**(undefined4 **)(*(int *)PTR_DAT_0071b264 + 0x4c))();
    if (iVar5 != 0) {
      return iVar5;
    }
    if ((bVar2) && (*(int *)(puVar4 + 0x280) != 0)) {
      (*(code *)**(undefined4 **)(*(int *)puVar3 + 0x50))(local_8c);
      FUN_0054f314(*(undefined4 *)(puVar4 + 0x60),local_8c,local_94,puVar4 + 0x318,0x200,&local_90);
    }
    if (((param_1 & 1) != 0) && (*(int *)puVar4 != 0)) {
      iVar5 = FUN_0054f210();
      return iVar5;
    }
  }
  return 0;
}


// 0x0550d54 (0xc bytes)
void FUN_00550d54(void)

{
  FUN_00550720(0xffffffff);
  return;
}


// 0x0550d60 (0xc0 bytes)
int FUN_00550d60(void)

{
  undefined *puVar1;
  int iVar2;
  int iVar3;
  
  puVar1 = PTR_DAT_0071b26c;
  iVar2 = 5;
  if (*(undefined4 **)PTR_DAT_0071b264 != (undefined4 *)0x0) {
    iVar3 = *(int *)(PTR_DAT_0071b26c + 0x284);
    if (iVar3 == 0) {
      iVar2 = (**(code **)**(undefined4 **)PTR_DAT_0071b264)();
      if (iVar2 != 0) {
        return iVar2;
      }
      FUN_00556d54();
      FUN_0054fd38();
      memset(puVar1 + 0x60,0,0x224);
      iVar3 = *(int *)(puVar1 + 0x284);
      *(undefined4 *)(puVar1 + 8) = 0;
      *(undefined4 *)puVar1 = 0;
      *(undefined4 *)(puVar1 + 4) = 0;
    }
    iVar2 = 0;
    *(int *)(puVar1 + 0x284) = iVar3 + 1;
  }
  return iVar2;
}


// 0x0550e20 (0x48 bytes)
undefined8 FUN_00550e20(int param_1)

{
  int *piVar1;
  int iVar2;
  longlong lVar3;
  
  if (param_1 != 0) {
    iVar2 = 0;
    lVar3 = 0x10;
    do {
      piVar1 = (int *)(iVar2 + param_1);
      iVar2 = iVar2 + 4;
      if (*piVar1 != 0) {
        return 0;
      }
      lVar3 = lVar3 + -1;
    } while (lVar3 != 0);
  }
  return 1;
}


// 0x0550e68 (0x74 bytes)
int FUN_00550e68(int param_1)

{
  int iVar1;
  int iVar2;
  
  iVar1 = **(int **)PTR_PTR_0071b274;
  if ((iVar1 != 0) && (*(int *)(iVar1 + 0x10) != param_1)) {
    for (iVar2 = *(int *)(iVar1 + 4); (iVar1 != iVar2 && (iVar2 != 0)); iVar2 = *(int *)(iVar2 + 4))
    {
      if (*(int *)(iVar2 + 0x10) == param_1) {
        return iVar2;
      }
    }
    return 0;
  }
  return iVar1;
}


// 0x0550edc (0x1f0 bytes)
int FUN_00550edc(uint param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 *puVar4;
  int iVar5;
  int iVar6;
  
  param_1 = param_1 & 0xc0000000;
  if (param_1 == 0x40000000) {
    iVar6 = 0;
    puVar4 = (undefined4 *)(*(int *)PTR_PTR_0071b274 + 0x188);
    goto LAB_00550f38;
  }
  if (param_1 < 0x40000001) {
    if (param_1 == 0) {
      iVar6 = 0;
      puVar4 = (undefined4 *)(*(int *)PTR_PTR_0071b274 + 0x88);
      goto LAB_00550f38;
    }
  }
  else {
    if (param_1 == 0x80000000) {
      iVar6 = 0;
      puVar4 = (undefined4 *)(*(int *)PTR_PTR_0071b274 + 8);
      goto LAB_00550f38;
    }
    if (param_1 == 0xc0000000) {
      iVar6 = 0;
      puVar4 = (undefined4 *)(*(int *)PTR_PTR_0071b274 + 0x108);
      goto LAB_00550f38;
    }
  }
  puVar4 = (undefined4 *)0x0;
  iVar6 = -1;
LAB_00550f38:
  iVar5 = FUN_00550e20(puVar4);
  if ((iVar5 != 0) && (iVar6 == 0)) {
    iVar6 = -3;
  }
  if (param_2 != (undefined4 *)0x0) {
    if (iVar6 != 0) {
      param_2[0xf] = 0;
      *param_2 = 0;
      param_2[1] = 0;
      param_2[2] = 0;
      param_2[3] = 0;
      param_2[4] = 0;
      param_2[5] = 0;
      param_2[6] = 0;
      param_2[7] = 0;
      param_2[8] = 0;
      param_2[9] = 0;
      param_2[10] = 0;
      param_2[0xb] = 0;
      param_2[0xc] = 0;
      param_2[0xd] = 0;
      param_2[0xe] = 0;
      return iVar6;
    }
    uVar1 = puVar4[1];
    uVar2 = puVar4[2];
    uVar3 = puVar4[3];
    *param_2 = *puVar4;
    param_2[1] = uVar1;
    param_2[2] = uVar2;
    param_2[3] = uVar3;
    uVar1 = puVar4[5];
    uVar2 = puVar4[6];
    uVar3 = puVar4[7];
    param_2[4] = puVar4[4];
    param_2[5] = uVar1;
    param_2[6] = uVar2;
    param_2[7] = uVar3;
    uVar1 = puVar4[9];
    uVar2 = puVar4[10];
    uVar3 = puVar4[0xb];
    param_2[8] = puVar4[8];
    param_2[9] = uVar1;
    param_2[10] = uVar2;
    param_2[0xb] = uVar3;
    uVar1 = puVar4[0xc];
    uVar2 = puVar4[0xd];
    uVar3 = puVar4[0xe];
    param_2[0xf] = puVar4[0xf];
    param_2[0xc] = uVar1;
    param_2[0xd] = uVar2;
    param_2[0xe] = uVar3;
  }
  return iVar6;
}


// 0x05510cc (0xe8 bytes)
ulonglong FUN_005510cc(ulonglong param_1,void *param_2)

{
  int iVar2;
  void *pvVar3;
  ulonglong uVar1;
  
  param_1 = param_1 & 0xc0000000;
  iVar2 = (int)param_1;
  if (iVar2 == 0x40000000) {
    uVar1 = (ulonglong)*(uint *)PTR_PTR_0071b274 + 0x188;
  }
  else if (param_1 < 0x40000001) {
    if (iVar2 != 0) {
      return param_1;
    }
    uVar1 = (ulonglong)*(uint *)PTR_PTR_0071b274 + 0x88;
  }
  else if (iVar2 == -0x80000000) {
    uVar1 = (ulonglong)*(uint *)PTR_PTR_0071b274 + 8;
  }
  else {
    if (iVar2 != -0x40000000) {
      return param_1;
    }
    uVar1 = (ulonglong)*(uint *)PTR_PTR_0071b274 + 0x108;
  }
  if ((void *)uVar1 == (void *)0x0) {
    return uVar1;
  }
  if (param_2 == (void *)0x0) {
    uVar1 = memset(uVar1 & 0xffffffff,0,0x80);
    return uVar1;
  }
  pvVar3 = memcpy((void *)uVar1,param_2,0x80);
  return (longlong)(int)pvVar3;
}


// 0x05511b4 (0x3c bytes)
bool FUN_005511b4(undefined4 *param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined *puVar4;
  
  puVar4 = PTR_DAT_0071b278;
  if (param_1 != (undefined4 *)0x0) {
    uVar1 = *param_1;
    uVar2 = param_1[2];
    *(undefined4 *)(PTR_DAT_0071b278 + 4) = param_1[1];
    uVar3 = param_1[3];
    *(undefined4 *)puVar4 = uVar1;
    *(undefined4 *)(puVar4 + 0xc) = uVar3;
    *(undefined4 *)(puVar4 + 8) = uVar2;
  }
  return param_1 == (undefined4 *)0x0;
}


// 0x05511f0 (0x18 bytes)
undefined8 FUN_005511f0(void)

{
  undefined *puVar1;
  
  puVar1 = PTR_DAT_0071b278;
  *(undefined4 *)(PTR_DAT_0071b278 + 8) = 0;
  *(undefined4 *)puVar1 = 0;
  return 0;
}


// 0x0551208 (0x11c bytes)
undefined8 FUN_00551208(undefined8 param_1,int param_2)

{
  FUN_00553f04(param_1,param_2);
  FUN_00553b40(param_1,param_2 + 4,0x14);
  FUN_00553f04(param_1,param_2 + 0x18);
  FUN_00553f04(param_1,param_2 + 0x1c);
  FUN_00553f04(param_1,param_2 + 0x20);
  FUN_00553b40(param_1,param_2 + 0x24,0x10);
  FUN_00553f04(param_1,param_2 + 0x34);
  FUN_00553f04(param_1,param_2 + 0x38);
  FUN_00553f04(param_1,param_2 + 0x3c);
  FUN_00553b40(param_1,param_2 + 0x40,0x48);
  FUN_00553b40(param_1,param_2 + 0x88,0x20);
  return 0;
}


// 0x0551324 (0x78 bytes)
int FUN_00551324(undefined8 param_1,int param_2)

{
  int iVar1;
  
  iVar1 = FUN_00551208(param_1,param_2);
  if (iVar1 == 0) {
    FUN_00553f04(param_1,param_2 + 0xa8);
    FUN_00553c74(param_1,8);
  }
  return iVar1;
}


// 0x055139c (0xec bytes)
undefined4 FUN_0055139c(void)

{
  undefined *puVar1;
  int in_r6;
  undefined4 local_100;
  GPiece<4> local_fc;
  GPiece<28> auStack_f8;
  GPiece<188> auStack_dc;
  
  FUN_005525a8(in_r6,&local_100);
  puVar1 = PTR_DAT_0071b278;
  if (*(int *)(PTR_DAT_0071b278 + 8) != 0) {
    FUN_0055442c(auStack_f8,in_r6 + 4,in_r6 + 0xb8,2);
    FUN_00551324(auStack_f8,auStack_dc);
    FUN_005543a4(auStack_f8,local_fc);
    (*(code *)**(undefined4 **)(puVar1 + 8))(auStack_dc);
  }
  return local_100;
}


// 0x0551488 (0x78 bytes)
int FUN_00551488(undefined8 param_1,int param_2)

{
  int iVar1;
  
  iVar1 = FUN_00551208(param_1,param_2);
  if (iVar1 == 0) {
    FUN_00553f04(param_1,param_2 + 0xa8);
    FUN_00553c74(param_1,8);
  }
  return iVar1;
}


// 0x0551500 (0xec bytes)
undefined4 FUN_00551500(void)

{
  undefined *puVar1;
  int in_r6;
  undefined4 local_100;
  GPiece<4> local_fc;
  GPiece<28> auStack_f8;
  GPiece<188> auStack_dc;
  
  FUN_005525a8(in_r6,&local_100);
  puVar1 = PTR_DAT_0071b278;
  if (*(int *)PTR_DAT_0071b278 != 0) {
    FUN_0055442c(auStack_f8,in_r6 + 4,in_r6 + 0xb8,2);
    FUN_00551488(auStack_f8,auStack_dc);
    FUN_005543a4(auStack_f8,local_fc);
    (*(code *)**(undefined4 **)puVar1)(auStack_dc);
  }
  return local_100;
}


// 0x05515ec (0x30 bytes)
bool FUN_005515ec(undefined4 *param_1)

{
  if (param_1 != (undefined4 *)0x0) {
    param_1[3] = &DAT_01010101;
    *param_1 = &DAT_01010101;
    param_1[1] = &DAT_01010101;
    param_1[2] = &DAT_01010101;
  }
  return param_1 == (undefined4 *)0x0;
}


// 0x055161c (0x3c bytes)
bool FUN_0055161c(undefined4 *param_1)

{
  if (param_1 != (undefined4 *)0x0) {
    param_1[7] = 0;
    *param_1 = 0;
    param_1[1] = 0;
    param_1[2] = 0;
    param_1[3] = 0;
    param_1[4] = 0;
    param_1[5] = 0;
    param_1[6] = 0;
  }
  return param_1 == (undefined4 *)0x0;
}


// 0x0551658 (0x3c bytes)
bool FUN_00551658(undefined4 *param_1)

{
  if (param_1 != (undefined4 *)0x0) {
    param_1[7] = 0;
    *param_1 = 0;
    param_1[1] = 0;
    param_1[2] = 0;
    param_1[3] = 0;
    param_1[4] = 0;
    param_1[5] = 0;
    param_1[6] = 0;
  }
  return param_1 == (undefined4 *)0x0;
}


// 0x0551694 (0x19c bytes)
int FUN_00551694(int param_1)

{
  int iVar1;
  GPiece<2> auStack_220;
  GPiece<2> auStack_21e;
  GPiece<4> local_21c;
  GPiece<4> auStack_218;
  GPiece<4> auStack_214;
  undefined8 local_210;
  GPiece<28> auStack_208;
  GPiece<76> local_1ec;
  GPiece<180> auStack_1a0;
  GPiece<188> auStack_ec;
  
  iVar1 = 1;
  if (param_1 != 0) {
    FUN_00552570(auStack_218,*(int *)(param_1 + 0x18) + 0xb8);
    iVar1 = FUN_0055983c(auStack_ec,0);
    if (iVar1 == 0) {
      FUN_0055442c(auStack_208,auStack_1a0,auStack_ec,1);
      FUN_00551324(auStack_208,auStack_ec);
      FUN_005543a4(auStack_208,local_21c);
      FUN_0053fe40(param_1,auStack_214,&local_210,auStack_21e,auStack_220);
      iVar1 = FUN_005459e8(local_210,*(undefined2 *)(param_1 + 0x16),0,0x22,local_1ec);
      return iVar1;
    }
  }
  return iVar1;
}


// 0x0551830 (0x19c bytes)
int FUN_00551830(int param_1)

{
  int iVar1;
  GPiece<2> auStack_220;
  GPiece<2> auStack_21e;
  GPiece<4> local_21c;
  GPiece<4> auStack_218;
  GPiece<4> auStack_214;
  undefined8 local_210;
  GPiece<28> auStack_208;
  GPiece<76> local_1ec;
  GPiece<180> auStack_1a0;
  GPiece<188> auStack_ec;
  
  iVar1 = 1;
  if (param_1 != 0) {
    FUN_00552570(auStack_218,*(int *)(param_1 + 0x18) + 0xb8);
    iVar1 = FUN_0055983c(auStack_ec,0);
    if (iVar1 == 0) {
      FUN_0055442c(auStack_208,auStack_1a0,auStack_ec,1);
      FUN_00551488(auStack_208,auStack_ec);
      FUN_005543a4(auStack_208,local_21c);
      FUN_0053fe40(param_1,auStack_214,&local_210,auStack_21e,auStack_220);
      iVar1 = FUN_005459e8(local_210,*(undefined2 *)(param_1 + 0x16),0,0x21,local_1ec);
      return iVar1;
    }
  }
  return iVar1;
}


// 0x05519cc (0x14 bytes)
undefined8 FUN_005519cc(undefined4 param_1,undefined4 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR_DAT_0071b27c;
  *(undefined4 *)PTR_DAT_0071b27c = param_1;
  *(undefined4 *)(puVar1 + 4) = param_2;
  return 0;
}


// 0x05519e0 (0x10 bytes)
undefined8 FUN_005519e0(undefined4 param_1)

{
  *(undefined4 *)(PTR_DAT_0071b27c + 8) = param_1;
  return 0;
}


// 0x05519f0 (0x7c bytes)
undefined8 FUN_005519f0(int *param_1)

{
  if (*param_1 != 0) {
    if (*(undefined4 **)(PTR_DAT_0071b27c + 4) == (undefined4 *)0x0) {
      FUN_005d580c(*param_1);
    }
    else {
      (*(code *)**(undefined4 **)(PTR_DAT_0071b27c + 4))();
    }
    *param_1 = 0;
  }
  return 0;
}


// 0x0551a6c (0x68 bytes)
int FUN_00551a6c(int *param_1)

{
  int iVar1;
  
  iVar1 = 100;
  if (param_1 != (int *)0x0) {
    if (*param_1 != 0) {
      iVar1 = FUN_005519f0(param_1);
      if (iVar1 != 0) {
        return iVar1;
      }
      *param_1 = 0;
    }
    iVar1 = 0;
    param_1[1] = 0;
  }
  return iVar1;
}


// 0x0551ad4 (0xac bytes)
undefined8 FUN_00551ad4(int *param_1,undefined4 param_2)

{
  int iVar1;
  
  if (*(undefined4 **)(PTR_DAT_0071b27c + 8) == (undefined4 *)0x0) {
    iVar1 = FUN_005d579c(*param_1,param_2);
    *param_1 = iVar1;
  }
  else {
    iVar1 = (*(code *)**(undefined4 **)(PTR_DAT_0071b27c + 8))(*param_1);
    *param_1 = iVar1;
  }
  if (iVar1 == 0) {
    return 100;
  }
  return 0;
}


// 0x0551b80 (0xa4 bytes)
undefined8 FUN_00551b80(int *param_1,undefined4 param_2)

{
  int iVar2;
  longlong lVar1;
  
  if (*(undefined4 **)PTR_DAT_0071b27c == (undefined4 *)0x0) {
    lVar1 = FUN_005d5838(param_2);
    *param_1 = (int)lVar1;
    if (lVar1 != 0) {
      return 0;
    }
  }
  else {
    iVar2 = (*(code *)**(undefined4 **)PTR_DAT_0071b27c)();
    *param_1 = iVar2;
    if (iVar2 != 0) {
      return 0;
    }
  }
  return 100;
}


// 0x0551c24 (0x108 bytes)
int FUN_00551c24(int *param_1,ulonglong param_2,ulonglong param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  byte in_cr0;
  byte in_cr1;
  byte in_cr2;
  byte in_cr3;
  byte unaff_cr4;
  byte in_cr5;
  byte in_cr6;
  byte in_cr7;
  uint uStack00000008;
  
  uStack00000008 =
       (uint)(in_cr0 & 0xf) << 0x1c | (uint)(in_cr1 & 0xf) << 0x18 | (uint)(in_cr2 & 0xf) << 0x14 |
       (uint)(in_cr3 & 0xf) << 0x10 | (uint)(unaff_cr4 & 0xf) << 0xc | (uint)(in_cr5 & 0xf) << 8 |
       (uint)(in_cr6 & 0xf) << 4 | (uint)(in_cr7 & 0xf);
  if ((param_1 != (int *)0x0) && ((int)param_2 != 0)) {
    param_3 = param_3 & 0xffff;
    param_1[1] = 0;
    *param_1 = 0;
    iVar4 = (int)param_3;
    if (1 < param_3) {
      param_2 = param_3 + (longlong)(int)(((param_2 + param_3) - 1 & 0xffffffff) / param_3) *
                          (longlong)iVar4;
    }
    iVar3 = FUN_00551b80(param_1,param_2 & 0xffffffff);
    if (iVar3 == 0) {
      iVar1 = *param_1;
      if (iVar1 == 0) {
        return 100;
      }
      param_1[1] = iVar1;
      if ((1 < param_3) && (iVar2 = iVar1 - (iVar1 / iVar4) * iVar4, iVar2 != 0)) {
        param_1[1] = iVar1 + (iVar4 - iVar2);
      }
    }
    return iVar3;
  }
  return 100;
}


// 0x0551d2c (0xbc bytes)
int FUN_00551d2c(undefined4 *param_1,int param_2,undefined2 param_3)

{
  int iVar1;
  
  if ((param_1 != (undefined4 *)0x0) && (param_2 != 0)) {
    param_1[1] = 0;
    *param_1 = 0;
    iVar1 = FUN_00551c24(param_1,param_2,param_3);
    if (iVar1 != 0) {
      return iVar1;
    }
    if (param_1[1] != 0) {
      memset(param_1[1],0,param_2);
      return 0;
    }
  }
  return 100;
}


// 0x0551de8 (0xac bytes)
int FUN_00551de8(int *param_1,undefined4 param_2)

{
  int iVar1;
  
  if (param_1 == (int *)0x0) {
    return 100;
  }
  *param_1 = 0;
  iVar1 = FUN_00551b80(param_1,param_2);
  if (iVar1 == 0) {
    if (*param_1 == 0) {
      return 100;
    }
    memset(*param_1,0,param_2);
  }
  return iVar1;
}


// 0x0551e94 (0x1c bytes)
undefined8 FUN_00551e94(undefined1 *param_1,undefined1 param_2)

{
  undefined8 uVar1;
  
  uVar1 = 2;
  if (param_1 != (undefined1 *)0x0) {
    uVar1 = 0;
    *param_1 = param_2;
  }
  return uVar1;
}


// 0x0551eb0 (0x28 bytes)
undefined8 FUN_00551eb0(undefined1 *param_1,undefined1 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = 2;
  if ((param_1 != (undefined1 *)0x0) && (param_2 != (undefined1 *)0x0)) {
    uVar1 = 0;
    *param_2 = *param_1;
  }
  return uVar1;
}


// 0x0551ed8 (0x1c bytes)
undefined8 FUN_00551ed8(undefined1 *param_1,undefined1 param_2)

{
  undefined8 uVar1;
  
  uVar1 = 2;
  if (param_1 != (undefined1 *)0x0) {
    uVar1 = 0;
    *param_1 = param_2;
  }
  return uVar1;
}


// 0x0551ef4 (0x28 bytes)
undefined8 FUN_00551ef4(undefined1 *param_1,undefined1 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = 2;
  if ((param_1 != (undefined1 *)0x0) && (param_2 != (undefined1 *)0x0)) {
    uVar1 = 0;
    *param_2 = *param_1;
  }
  return uVar1;
}


// 0x0551f1c (0x24 bytes)
undefined8 FUN_00551f1c(undefined1 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = 2;
  if (param_1 != (undefined1 *)0x0) {
    uVar1 = 0;
    param_1[1] = (char)((ulonglong)param_2 >> 8);
    *param_1 = (char)param_2;
  }
  return uVar1;
}


// 0x0551f40 (0x38 bytes)
undefined8 FUN_00551f40(byte *param_1,ushort *param_2)

{
  byte bVar1;
  undefined8 uVar2;
  
  uVar2 = 2;
  if ((param_1 != (byte *)0x0) && (param_2 != (ushort *)0x0)) {
    bVar1 = *param_1;
    uVar2 = 0;
    *param_2 = (ushort)bVar1;
    *param_2 = CONCAT11(param_1[1],bVar1);
  }
  return uVar2;
}


// 0x0551f78 (0x24 bytes)
undefined8 FUN_00551f78(undefined1 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = 2;
  if (param_1 != (undefined1 *)0x0) {
    uVar1 = 0;
    param_1[1] = (char)((ulonglong)param_2 >> 8);
    *param_1 = (char)param_2;
  }
  return uVar1;
}


// 0x0551f9c (0x38 bytes)
undefined8 FUN_00551f9c(byte *param_1,ushort *param_2)

{
  byte bVar1;
  undefined8 uVar2;
  
  uVar2 = 2;
  if ((param_1 != (byte *)0x0) && (param_2 != (ushort *)0x0)) {
    bVar1 = *param_1;
    uVar2 = 0;
    *param_2 = (ushort)bVar1;
    *param_2 = CONCAT11(param_1[1],bVar1);
  }
  return uVar2;
}


// 0x0551fd4 (0x38 bytes)
undefined8 FUN_00551fd4(undefined1 *param_1,undefined4 param_2)

{
  undefined8 uVar1;
  
  uVar1 = 2;
  if (param_1 != (undefined1 *)0x0) {
    *param_1 = (char)param_2;
    param_1[1] = (char)((uint)param_2 >> 8);
    param_1[2] = (char)((uint)param_2 >> 0x10);
    uVar1 = 0;
    param_1[3] = (char)((uint)param_2 >> 0x18);
  }
  return uVar1;
}


// 0x055200c (0x5c bytes)
undefined8 FUN_0055200c(byte *param_1,uint *param_2)

{
  byte bVar1;
  ushort uVar2;
  uint3 uVar3;
  undefined8 uVar4;
  
  uVar4 = 2;
  if ((param_1 != (byte *)0x0) && (param_2 != (uint *)0x0)) {
    bVar1 = *param_1;
    uVar4 = 0;
    *param_2 = (uint)bVar1;
    uVar2 = CONCAT11(param_1[1],bVar1);
    *param_2 = (uint)uVar2;
    uVar3 = CONCAT12(param_1[2],uVar2);
    *param_2 = (uint)uVar3;
    *param_2 = CONCAT13(param_1[3],uVar3);
  }
  return uVar4;
}


// 0x0552068 (0x88 bytes)
undefined8 FUN_00552068(undefined1 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = 2;
  if (param_1 != (undefined1 *)0x0) {
    *param_1 = (char)param_2;
    uVar1 = 0;
    param_1[1] = (char)((ulonglong)param_2 >> 8);
    param_1[2] = (char)((ulonglong)param_2 >> 0x10);
    param_1[3] = (char)((ulonglong)param_2 >> 0x18);
    param_1[4] = (char)((ulonglong)param_2 >> 0x20);
    param_1[5] = (char)((ulonglong)param_2 >> 0x28);
    param_1[7] = (char)((ulonglong)param_2 >> 0x38);
    param_1[6] = (char)((ulonglong)param_2 >> 0x30);
  }
  return uVar1;
}


// 0x05520f0 (0xbc bytes)
undefined8 FUN_005520f0(byte *param_1,ulonglong *param_2)

{
  byte bVar1;
  ushort uVar2;
  uint3 uVar3;
  uint uVar4;
  uint5 uVar5;
  uint6 uVar6;
  uint7 uVar7;
  undefined8 uVar8;
  
  uVar8 = 2;
  if ((param_1 != (byte *)0x0) && (param_2 != (ulonglong *)0x0)) {
    bVar1 = *param_1;
    uVar8 = 0;
    *param_2 = (ulonglong)bVar1;
    uVar2 = CONCAT11(param_1[1],bVar1);
    *param_2 = (ulonglong)uVar2;
    uVar3 = CONCAT12(param_1[2],uVar2);
    *param_2 = (ulonglong)uVar3;
    uVar4 = CONCAT13(param_1[3],uVar3);
    *param_2 = (ulonglong)uVar4;
    uVar5 = CONCAT14(param_1[4],uVar4);
    *param_2 = (ulonglong)uVar5;
    uVar6 = CONCAT15(param_1[5],uVar5);
    *param_2 = (ulonglong)uVar6;
    uVar7 = CONCAT16(param_1[6],uVar6);
    *param_2 = (ulonglong)uVar7;
    *param_2 = CONCAT17(param_1[7],uVar7);
  }
  return uVar8;
}


// 0x05521ac (0x88 bytes)
undefined8 FUN_005521ac(undefined1 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = 2;
  if (param_1 != (undefined1 *)0x0) {
    *param_1 = (char)param_2;
    uVar1 = 0;
    param_1[1] = (char)((ulonglong)param_2 >> 8);
    param_1[2] = (char)((ulonglong)param_2 >> 0x10);
    param_1[3] = (char)((ulonglong)param_2 >> 0x18);
    param_1[4] = (char)((ulonglong)param_2 >> 0x20);
    param_1[5] = (char)((ulonglong)param_2 >> 0x28);
    param_1[7] = (char)((ulonglong)param_2 >> 0x38);
    param_1[6] = (char)((ulonglong)param_2 >> 0x30);
  }
  return uVar1;
}


// 0x0552234 (0xbc bytes)
undefined8 FUN_00552234(byte *param_1,ulonglong *param_2)

{
  byte bVar1;
  ushort uVar2;
  uint3 uVar3;
  uint uVar4;
  uint5 uVar5;
  uint6 uVar6;
  uint7 uVar7;
  undefined8 uVar8;
  
  uVar8 = 2;
  if ((param_1 != (byte *)0x0) && (param_2 != (ulonglong *)0x0)) {
    bVar1 = *param_1;
    uVar8 = 0;
    *param_2 = (ulonglong)bVar1;
    uVar2 = CONCAT11(param_1[1],bVar1);
    *param_2 = (ulonglong)uVar2;
    uVar3 = CONCAT12(param_1[2],uVar2);
    *param_2 = (ulonglong)uVar3;
    uVar4 = CONCAT13(param_1[3],uVar3);
    *param_2 = (ulonglong)uVar4;
    uVar5 = CONCAT14(param_1[4],uVar4);
    *param_2 = (ulonglong)uVar5;
    uVar6 = CONCAT15(param_1[5],uVar5);
    *param_2 = (ulonglong)uVar6;
    uVar7 = CONCAT16(param_1[6],uVar6);
    *param_2 = (ulonglong)uVar7;
    *param_2 = CONCAT17(param_1[7],uVar7);
  }
  return uVar8;
}


// 0x05522f0 (0x84 bytes)
undefined8 FUN_005522f0(undefined1 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = 2;
  if (param_1 != (undefined1 *)0x0) {
    *param_1 = (char)((ulonglong)param_2 >> 0x38);
    param_1[1] = (char)((ulonglong)param_2 >> 0x30);
    uVar1 = 0;
    param_1[2] = (char)((ulonglong)param_2 >> 0x28);
    param_1[3] = (char)((ulonglong)param_2 >> 0x20);
    param_1[4] = (char)((ulonglong)param_2 >> 0x18);
    param_1[5] = (char)((ulonglong)param_2 >> 0x10);
    param_1[7] = (char)param_2;
    param_1[6] = (char)((ulonglong)param_2 >> 8);
  }
  return uVar1;
}


// 0x0552374 (0xbc bytes)
undefined8 FUN_00552374(byte *param_1,ulonglong *param_2)

{
  byte bVar1;
  undefined8 uVar2;
  ulonglong uVar3;
  
  uVar2 = 2;
  if ((param_1 != (byte *)0x0) && (param_2 != (ulonglong *)0x0)) {
    bVar1 = *param_1;
    uVar2 = 0;
    *param_2 = (ulonglong)bVar1 << 0x38;
    uVar3 = (ulonglong)bVar1 << 0x38 | (ulonglong)param_1[1] << 0x30;
    *param_2 = uVar3;
    uVar3 = uVar3 | (ulonglong)param_1[2] << 0x28;
    *param_2 = uVar3;
    uVar3 = uVar3 | (ulonglong)param_1[3] << 0x20;
    *param_2 = uVar3;
    uVar3 = uVar3 | (ulonglong)param_1[4] << 0x18;
    *param_2 = uVar3;
    uVar3 = uVar3 | (ulonglong)param_1[5] << 0x10;
    *param_2 = uVar3;
    uVar3 = uVar3 | (ulonglong)param_1[6] << 8;
    *param_2 = uVar3;
    *param_2 = uVar3 | param_1[7];
  }
  return uVar2;
}


// 0x0552430 (0x84 bytes)
undefined8 FUN_00552430(undefined1 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = 2;
  if (param_1 != (undefined1 *)0x0) {
    *param_1 = (char)((ulonglong)param_2 >> 0x38);
    param_1[1] = (char)((ulonglong)param_2 >> 0x30);
    uVar1 = 0;
    param_1[2] = (char)((ulonglong)param_2 >> 0x28);
    param_1[3] = (char)((ulonglong)param_2 >> 0x20);
    param_1[4] = (char)((ulonglong)param_2 >> 0x18);
    param_1[5] = (char)((ulonglong)param_2 >> 0x10);
    param_1[7] = (char)param_2;
    param_1[6] = (char)((ulonglong)param_2 >> 8);
  }
  return uVar1;
}


// 0x05524b4 (0xbc bytes)
undefined8 FUN_005524b4(byte *param_1,ulonglong *param_2)

{
  byte bVar1;
  undefined8 uVar2;
  ulonglong uVar3;
  
  uVar2 = 2;
  if ((param_1 != (byte *)0x0) && (param_2 != (ulonglong *)0x0)) {
    bVar1 = *param_1;
    uVar2 = 0;
    *param_2 = (ulonglong)bVar1 << 0x38;
    uVar3 = (ulonglong)bVar1 << 0x38 | (ulonglong)param_1[1] << 0x30;
    *param_2 = uVar3;
    uVar3 = uVar3 | (ulonglong)param_1[2] << 0x28;
    *param_2 = uVar3;
    uVar3 = uVar3 | (ulonglong)param_1[3] << 0x20;
    *param_2 = uVar3;
    uVar3 = uVar3 | (ulonglong)param_1[4] << 0x18;
    *param_2 = uVar3;
    uVar3 = uVar3 | (ulonglong)param_1[5] << 0x10;
    *param_2 = uVar3;
    uVar3 = uVar3 | (ulonglong)param_1[6] << 8;
    *param_2 = uVar3;
    *param_2 = uVar3 | param_1[7];
  }
  return uVar2;
}


// 0x0552570 (0x38 bytes)
undefined8 FUN_00552570(undefined1 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = 2;
  if (param_1 != (undefined1 *)0x0) {
    *param_1 = (char)param_2;
    param_1[1] = (char)((ulonglong)param_2 >> 8);
    param_1[2] = (char)((ulonglong)param_2 >> 0x10);
    uVar1 = 0;
    param_1[3] = (char)((ulonglong)param_2 >> 0x18);
  }
  return uVar1;
}


// 0x05525a8 (0x5c bytes)
undefined8 FUN_005525a8(byte *param_1,uint *param_2)

{
  byte bVar1;
  ushort uVar2;
  uint3 uVar3;
  undefined8 uVar4;
  
  uVar4 = 2;
  if ((param_1 != (byte *)0x0) && (param_2 != (uint *)0x0)) {
    bVar1 = *param_1;
    uVar4 = 0;
    *param_2 = (uint)bVar1;
    uVar2 = CONCAT11(param_1[1],bVar1);
    *param_2 = (uint)uVar2;
    uVar3 = CONCAT12(param_1[2],uVar2);
    *param_2 = (uint)uVar3;
    *param_2 = CONCAT13(param_1[3],uVar3);
  }
  return uVar4;
}


// 0x0552604 (0x4c bytes)
void FUN_00552604(undefined4 *param_1,undefined1 *param_2,uint param_3)

{
  undefined4 uVar1;
  longlong lVar2;
  
  if (param_3 < 4) {
    return;
  }
  lVar2 = (((ulonglong)param_3 - 4 << 0x20) >> 0x22) + 1;
  do {
    uVar1 = *param_1;
    param_1 = param_1 + 1;
    param_2[1] = (char)((uint)uVar1 >> 8);
    param_2[2] = (char)((uint)uVar1 >> 0x10);
    param_2[3] = (char)((uint)uVar1 >> 0x18);
    *param_2 = (char)uVar1;
    param_2 = param_2 + 4;
    lVar2 = lVar2 + -1;
  } while (lVar2 != 0);
  return;
}


// 0x0552650 (0x58 bytes)
void FUN_00552650(undefined1 *param_1,undefined4 *param_2,uint param_3)

{
  undefined1 uVar1;
  undefined1 *puVar2;
  undefined1 *puVar3;
  undefined1 *puVar4;
  longlong lVar5;
  
  if (param_3 < 4) {
    return;
  }
  lVar5 = (((ulonglong)param_3 - 4 << 0x20) >> 0x22) + 1;
  do {
    puVar2 = param_1 + 1;
    uVar1 = *param_1;
    puVar3 = param_1 + 2;
    puVar4 = param_1 + 3;
    param_1 = param_1 + 4;
    *param_2 = CONCAT13(*puVar4,CONCAT12(*puVar3,CONCAT11(*puVar2,uVar1)));
    param_2 = param_2 + 1;
    lVar5 = lVar5 + -1;
  } while (lVar5 != 0);
  return;
}


// 0x05526a8 (0x24 bytes)
undefined8 FUN_005526a8(undefined1 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = 2;
  if (param_1 != (undefined1 *)0x0) {
    uVar1 = 0;
    param_1[1] = (char)param_2;
    *param_1 = (char)((ulonglong)param_2 >> 8);
  }
  return uVar1;
}


// 0x05526cc (0x38 bytes)
undefined8 FUN_005526cc(byte *param_1,short *param_2)

{
  byte bVar1;
  undefined8 uVar2;
  
  uVar2 = 2;
  if ((param_1 != (byte *)0x0) && (param_2 != (short *)0x0)) {
    bVar1 = *param_1;
    uVar2 = 0;
    *param_2 = (ushort)bVar1 << 8;
    *param_2 = CONCAT11(bVar1,param_1[1]);
  }
  return uVar2;
}


// 0x0552704 (0x24 bytes)
undefined8 FUN_00552704(undefined1 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = 2;
  if (param_1 != (undefined1 *)0x0) {
    uVar1 = 0;
    param_1[1] = (char)param_2;
    *param_1 = (char)((ulonglong)param_2 >> 8);
  }
  return uVar1;
}


// 0x0552728 (0x38 bytes)
undefined8 FUN_00552728(byte *param_1,short *param_2)

{
  byte bVar1;
  undefined8 uVar2;
  
  uVar2 = 2;
  if ((param_1 != (byte *)0x0) && (param_2 != (short *)0x0)) {
    bVar1 = *param_1;
    uVar2 = 0;
    *param_2 = (ushort)bVar1 << 8;
    *param_2 = CONCAT11(bVar1,param_1[1]);
  }
  return uVar2;
}


// 0x0552760 (0x38 bytes)
undefined8 FUN_00552760(undefined1 *param_1,undefined4 param_2)

{
  undefined8 uVar1;
  
  uVar1 = 2;
  if (param_1 != (undefined1 *)0x0) {
    *param_1 = (char)((uint)param_2 >> 0x18);
    param_1[1] = (char)((uint)param_2 >> 0x10);
    param_1[2] = (char)((uint)param_2 >> 8);
    uVar1 = 0;
    param_1[3] = (char)param_2;
  }
  return uVar1;
}


// 0x0552798 (0x5c bytes)
undefined8 FUN_00552798(byte *param_1,uint *param_2)

{
  byte bVar1;
  uint uVar2;
  undefined8 uVar3;
  
  uVar3 = 2;
  if ((param_1 != (byte *)0x0) && (param_2 != (uint *)0x0)) {
    bVar1 = *param_1;
    uVar3 = 0;
    *param_2 = (uint)bVar1 << 0x18;
    uVar2 = (uint)bVar1 << 0x18 | (uint)param_1[1] << 0x10;
    *param_2 = uVar2;
    uVar2 = uVar2 | (uint)param_1[2] << 8;
    *param_2 = uVar2;
    *param_2 = uVar2 | param_1[3];
  }
  return uVar3;
}


// 0x05527f4 (0x38 bytes)
undefined8 FUN_005527f4(undefined1 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = 2;
  if (param_1 != (undefined1 *)0x0) {
    *param_1 = (char)((ulonglong)param_2 >> 0x18);
    param_1[1] = (char)((ulonglong)param_2 >> 0x10);
    param_1[2] = (char)((ulonglong)param_2 >> 8);
    uVar1 = 0;
    param_1[3] = (char)param_2;
  }
  return uVar1;
}


// 0x055282c (0x5c bytes)
undefined8 FUN_0055282c(byte *param_1,uint *param_2)

{
  byte bVar1;
  uint uVar2;
  undefined8 uVar3;
  
  uVar3 = 2;
  if ((param_1 != (byte *)0x0) && (param_2 != (uint *)0x0)) {
    bVar1 = *param_1;
    uVar3 = 0;
    *param_2 = (uint)bVar1 << 0x18;
    uVar2 = (uint)bVar1 << 0x18 | (uint)param_1[1] << 0x10;
    *param_2 = uVar2;
    uVar2 = uVar2 | (uint)param_1[2] << 8;
    *param_2 = uVar2;
    *param_2 = uVar2 | param_1[3];
  }
  return uVar3;
}


// 0x0552888 (0x3c bytes)
void FUN_00552888(uint param_1)

{
  uint *puVar1;
  longlong lVar2;
  
  puVar1 = (uint *)PTR_DAT_0071b280;
  param_1 = param_1 | 1;
  lVar2 = 0x26f;
  *(undefined4 *)(PTR_DAT_0071b280 + 0x9c4) = 0x26f;
  *puVar1 = param_1;
  do {
    puVar1 = puVar1 + 1;
    param_1 = param_1 * 0x10dcd;
    *puVar1 = param_1;
    lVar2 = lVar2 + -1;
  } while (lVar2 != 0);
  return;
}


// 0x05528c4 (0x6c bytes)
void FUN_005528c4(uint *param_1,uint param_2)

{
  uint uVar1;
  uint *puVar2;
  uint uVar3;
  longlong lVar4;
  
  puVar2 = (uint *)PTR_DAT_0071b280;
  if (0x26f < param_2) {
    param_2 = 0x26f;
  }
  lVar4 = 0x270;
  uVar3 = 0xffffffff;
  *(undefined4 *)(PTR_DAT_0071b280 + 0x9c4) = 0x26f;
  *puVar2 = 0xffffffff;
  do {
    puVar2 = puVar2 + 1;
    if (param_2 != 0) {
      uVar1 = *param_1;
      param_2 = param_2 - 1;
      param_1 = param_1 + 1;
      uVar3 = uVar3 ^ uVar1;
    }
    uVar3 = (uVar3 << 5 | uVar3 >> 0x1b) * 0x10dcd;
    *puVar2 = uVar3;
    lVar4 = lVar4 + -1;
  } while (lVar4 != 0);
  return;
}


// 0x0552930 (0x14 bytes)
void FUN_00552930(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  undefined *puVar1;
  
  puVar1 = PTR_DAT_0071b280;
  *(undefined4 *)(PTR_DAT_0071b280 + 0x9d0) = param_3;
  *(undefined4 *)(puVar1 + 0x9c8) = param_1;
  *(undefined4 *)(puVar1 + 0x9cc) = param_2;
  return;
}


// 0x0552944 (0x24 bytes)
void FUN_00552944(void)

{
  FUN_00552b30();
  return;
}


// 0x0552968 (0x1c8 bytes)
ulonglong FUN_00552968(void)

{
  undefined *puVar1;
  ulonglong uVar2;
  uint *puVar3;
  uint uVar4;
  uint uVar5;
  int iVar7;
  ulonglong uVar6;
  uint *puVar8;
  uint uVar10;
  ulonglong uVar9;
  longlong lVar11;
  
  puVar1 = PTR_DAT_0071b280;
  iVar7 = *(int *)(PTR_DAT_0071b280 + 0x9c4) + 1;
  *(int *)(PTR_DAT_0071b280 + 0x9c4) = iVar7;
  if (0x26f < iVar7) {
    if (0x270 < iVar7) {
      FUN_00552944(0x3579abcd);
    }
    puVar3 = (uint *)(puVar1 + 0x634);
    lVar11 = 0xe3;
    *(undefined4 *)(puVar1 + 0x9c4) = 0;
    uVar10 = *(uint *)puVar1;
    uVar5 = *(uint *)(puVar1 + 4);
    do {
      uVar4 = uVar5;
      puVar8 = puVar3 + -0x18b;
      puVar3[-0x18d] =
           (uVar10 & 0x80000000 | uVar4 & 0x7fffffff) >> 1 ^
           ((uVar4 & 1) - 1 & 0x66f74f21) + 0x9908b0df ^ *puVar3;
      puVar3 = puVar3 + 1;
      lVar11 = lVar11 + -1;
      uVar10 = uVar4;
      uVar5 = *puVar8;
    } while (lVar11 != 0);
    lVar11 = 0x18c;
    puVar3 = (uint *)puVar1;
    uVar10 = *puVar8;
    do {
      uVar5 = uVar10;
      uVar10 = 0x9908b0df;
      if ((uVar5 & 1) == 0) {
        uVar10 = 0;
      }
      puVar3[0xe3] = (uVar4 & 0x80000000 | uVar5 & 0x7fffffff) >> 1 ^ uVar10 ^ *puVar3;
      puVar8 = puVar3 + 0xe5;
      lVar11 = lVar11 + -1;
      puVar3 = puVar3 + 1;
      uVar4 = uVar5;
      uVar10 = *puVar8;
    } while (lVar11 != 0);
    *(uint *)(puVar1 + 0x9bc) =
         (uVar5 & 0x80000000 | *(uint *)puVar1 & 0x7fffffff) >> 1 ^
         ((*(uint *)puVar1 & 1) - 1 & 0x66f74f21) + 0x9908b0df ^ *(uint *)(puVar1 + 0x630);
  }
  uVar10 = *(uint *)(puVar1 + *(int *)(puVar1 + 0x9c4) * 4) ^ *(uint *)(puVar1 + 0x9d0);
  uVar2 = (ulonglong)uVar10;
  uVar9 = uVar2 ^ (((ulonglong)*(uint *)(puVar1 + 0x9c8) & 0x7f) << 0x19 |
                  (ulonglong)(*(uint *)(puVar1 + 0x9c8) >> 7));
  uVar6 = (((ulonglong)uVar10 & 0x1ffffff) << 7 | (ulonglong)(uVar10 >> 0x19)) ^
          (ulonglong)*(uint *)(puVar1 + 0x9cc);
  *(int *)(puVar1 + 0x9c8) = (int)uVar9;
  uVar2 = uVar2 & uVar9 | uVar6 & ~uVar2;
  *(int *)(puVar1 + 0x9cc) = (int)uVar6;
  *(int *)(puVar1 + 0x9d0) = (int)uVar2;
  return uVar2;
}


// 0x0552b30 (0xa4 bytes)
void FUN_00552b30(undefined4 param_1)

{
  undefined4 local_140 [3];
  GPiece<8> auStack_134;
  GPiece<244> auStack_12c;
  
  memset(local_140,0,0x100);
  local_140[0] = param_1;
  sys_time_get_system_time();
  syscall_sys_time_get_current_time(auStack_134,auStack_12c);
  FUN_005528c4(local_140,0x40);
  return;
}


// 0x0552bd4 (0x28 bytes)
undefined4 FUN_00552bd4(void)

{
  undefined4 uVar1;
  
  uVar1 = FUN_005531f4();
  return uVar1;
}


// 0x0552bfc (0x28 bytes)
undefined4 FUN_00552bfc(void)

{
  undefined4 uVar1;
  
  uVar1 = FUN_005531f4();
  return uVar1;
}


// 0x0552c24 (0xe0 bytes)
int FUN_00552c24(char *param_1,int *param_2)

{
  int iVar1;
  int iVar2;
  int local_30 [4];
  
  if ((param_1 == (char *)0x0) || (*param_1 != '\x01')) {
    iVar2 = 2;
  }
  else {
    iVar2 = FUN_00553204(local_30);
    if (iVar2 == 0) {
      if (*(int *)(param_1 + 8) == local_30[0]) {
        if (*(int *)(param_1 + 4) == 0) {
          iVar2 = 0x386;
        }
        else {
          iVar1 = *(int *)(param_1 + 4) + -1;
          *(int *)(param_1 + 4) = iVar1;
          if (param_2 != (int *)0x0) {
            *param_2 = iVar1;
          }
          if (*(int *)(param_1 + 4) == 0) {
            param_1[8] = '\0';
            param_1[9] = '\0';
            param_1[10] = '\0';
            param_1[0xb] = '\0';
            iVar2 = FUN_00553188(param_1);
          }
        }
      }
      else {
        iVar2 = 0x385;
      }
    }
  }
  return iVar2;
}


// 0x0552d04 (0x15c bytes)
/* WARNING: Removing unreachable block (ram,0x00552dfc) */
/* WARNING: Removing unreachable block (ram,0x00552e14) */

ulonglong FUN_00552d04(char *param_1,int *param_2)

{
  int iVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  GPiece<4> local_30;
  int local_2c [3];
  
  if (((param_1 != (char *)0x0) && (*param_1 == '\x01')) && (param_2 != (int *)0x0)) {
    *param_2 = 0;
    uVar2 = FUN_00553204(local_2c);
    if ((int)uVar2 == 0) {
      if ((*(int *)(param_1 + 4) == 0) || (*(int *)(param_1 + 8) != local_2c[0])) {
        uVar3 = FUN_005530b8(param_1,local_30);
        if (uVar3 != 0) {
          return uVar3 & 0xffffffff;
        }
      }
      else {
        iVar1 = *(int *)(param_1 + 4) + 1;
        *(int *)(param_1 + 4) = iVar1;
        *param_2 = iVar1;
      }
    }
    return uVar2 & 0xffffffff;
  }
  return 2;
}


// 0x0552e60 (0x104 bytes)
ulonglong FUN_00552e60(char *param_1,undefined4 *param_2)

{
  ulonglong uVar1;
  ulonglong uVar2;
  int local_40 [6];
  
  if ((param_1 == (char *)0x0) || (*param_1 != '\x01')) {
    uVar2 = 2;
  }
  else {
    uVar1 = FUN_00553204(local_40);
    uVar2 = uVar1;
    if ((int)uVar1 == 0) {
      if ((*(int *)(param_1 + 4) == 0) || (*(int *)(param_1 + 8) != local_40[0])) {
        uVar2 = FUN_00553048(param_1);
        if ((uVar2 != 0) || (uVar2 = FUN_00553204(param_1 + 8), uVar2 != 0)) goto LAB_00552ea8;
        *(int *)(param_1 + 4) = *(int *)(param_1 + 4) + 1;
      }
      else {
        *(int *)(param_1 + 4) = *(int *)(param_1 + 4) + 1;
      }
      uVar2 = uVar1;
      if (param_2 != (undefined4 *)0x0) {
        *param_2 = *(undefined4 *)(param_1 + 4);
      }
    }
  }
LAB_00552ea8:
  return uVar2 & 0xffffffff;
}


// 0x0552f64 (0x78 bytes)
int FUN_00552f64(char *param_1)

{
  int iVar1;
  
  iVar1 = 2;
  if (((param_1 != (char *)0x0) && (*param_1 == '\x01')) &&
     (iVar1 = FUN_00553254(param_1), iVar1 == 0)) {
    *param_1 = '\0';
    return 0;
  }
  return iVar1;
}


// 0x0552fdc (0x6c bytes)
int FUN_00552fdc(undefined1 *param_1)

{
  int iVar1;
  
  iVar1 = 2;
  if (param_1 != (undefined1 *)0x0) {
    *(undefined4 *)(param_1 + 8) = 0;
    *param_1 = 0;
    *(undefined4 *)(param_1 + 4) = 0;
    iVar1 = FUN_005532e4(param_1);
    if (iVar1 == 0) {
      *param_1 = 1;
    }
  }
  return iVar1;
}


// 0x0553048 (0x70 bytes)
int FUN_00553048(int param_1)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  
  iVar3 = 2;
  if ((param_1 != 0) && (*(uint **)(param_1 + 0x10) != (uint *)0x0)) {
    uVar1 = **(uint **)(param_1 + 0x10);
    syscall();
    uVar2 = (int)uVar1 >> 0x1f;
    iVar3 = ((int)(((uVar2 ^ uVar1) - uVar2) + -1) >> 0x1f & 0xfffffc7cU) + 900;
  }
  return iVar3;
}


// 0x05530b8 (0xd0 bytes)
int FUN_005530b8(char *param_1,undefined1 *param_2)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  
  iVar2 = 2;
  if ((((param_1 != (char *)0x0) && (*param_1 == '\x01')) && (*(int *)(param_1 + 0x10) != 0)) &&
     (param_2 != (undefined1 *)0x0)) {
    *param_2 = 0;
    syscall();
    uVar3 = **(uint **)(param_1 + 0x10) ^ 0x8001000a;
    uVar1 = (int)uVar3 >> 0x1f;
    if (**(uint **)(param_1 + 0x10) == 0) {
      *param_2 = 1;
      return 0;
    }
    iVar2 = ((int)(((uVar1 ^ uVar3) - uVar1) + -1) >> 0x1f & 0xfffffc7cU) + 900;
  }
  return iVar2;
}


// 0x0553188 (0x6c bytes)
int FUN_00553188(int param_1)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  
  iVar3 = 2;
  if ((param_1 != 0) && (*(uint **)(param_1 + 0x10) != (uint *)0x0)) {
    uVar1 = **(uint **)(param_1 + 0x10);
    syscall();
    uVar2 = (int)uVar1 >> 0x1f;
    iVar3 = ((int)(((uVar2 ^ uVar1) - uVar2) + -1) >> 0x1f & 0xfffffc7cU) + 900;
  }
  return iVar3;
}


// 0x05531f4 (0x8 bytes)
undefined8 FUN_005531f4(void)

{
  return 0;
}


// 0x05531fc (0x8 bytes)
undefined8 FUN_005531fc(void)

{
  return 0;
}


// 0x0553204 (0x50 bytes)
undefined8 FUN_00553204(undefined4 *param_1)

{
  undefined8 uVar1;
  GPiece<4> local_20;
  undefined4 uStack_1c;
  
  uVar1 = 2;
  if (param_1 != (undefined4 *)0x0) {
    sys_ppu_thread_get_id(local_20);
    uVar1 = 0;
    *param_1 = uStack_1c;
  }
  return uVar1;
}


// 0x0553254 (0x90 bytes)
undefined8 FUN_00553254(int param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  
  uVar2 = 2;
  if (param_1 != 0) {
    if (*(int **)(param_1 + 0x10) != (int *)0x0) {
      syscall();
      uVar2 = 900;
      if (**(int **)(param_1 + 0x10) == 0) {
        lVar1 = FUN_005519f0(param_1 + 0x10);
        uVar2 = 100;
        if (lVar1 == 0) {
          uVar2 = 0;
          *(undefined4 *)(param_1 + 0x10) = 0;
        }
      }
    }
  }
  return uVar2;
}


// 0x05532e4 (0xc8 bytes)
int FUN_005532e4(int param_1)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  
  iVar3 = 2;
  if (param_1 != 0) {
    iVar3 = 100;
    *(undefined4 *)(param_1 + 0x10) = 0;
    iVar2 = FUN_00551de8(param_1 + 0x10,4);
    if (iVar2 == 0) {
      syscall();
      uVar1 = (int)*(uint *)(param_1 + 0x10) >> 0x1f;
      iVar3 = ((int)(((uVar1 ^ *(uint *)(param_1 + 0x10)) - uVar1) + -1) >> 0x1f & 0xfffffc7cU) +
              900;
    }
  }
  return iVar3;
}


// 0x05533ac (0x28 bytes)
undefined4 FUN_005533ac(undefined4 *param_1)

{
  return *param_1;
}


// 0x05533d4 (0x28 bytes)
undefined4 FUN_005533d4(int param_1)

{
  return *(undefined4 *)(param_1 + 4);
}


// 0x05533fc (0x4c bytes)
void FUN_005533fc(undefined1 *param_1,undefined4 param_2,undefined4 param_3)

{
  undefined1 local_10;
  undefined1 uStack_f;
  undefined1 uStack_e;
  undefined1 uStack_d;
  undefined1 local_c;
  undefined1 uStack_b;
  undefined1 uStack_a;
  undefined1 uStack_9;
  
  uStack_f = (undefined1)((uint)param_2 >> 0x10);
  uStack_e = (undefined1)((uint)param_2 >> 8);
  uStack_d = (undefined1)param_2;
  local_c = (undefined1)((uint)param_3 >> 0x18);
  uStack_b = (undefined1)((uint)param_3 >> 0x10);
  uStack_a = (undefined1)((uint)param_3 >> 8);
  uStack_9 = (undefined1)param_3;
  local_10 = (undefined1)((uint)param_2 >> 0x18);
  param_1[7] = uStack_9;
  *param_1 = local_10;
  param_1[1] = uStack_f;
  param_1[2] = uStack_e;
  param_1[3] = uStack_d;
  param_1[4] = local_c;
  param_1[5] = uStack_b;
  param_1[6] = uStack_a;
  return;
}


// 0x0553448 (0x68 bytes)
int FUN_00553448(int *param_1)

{
  if (*param_1 != 9) {
    return -1;
  }
  return param_1[1];
}


// 0x05534b0 (0x68 bytes)
int FUN_005534b0(int *param_1)

{
  if (*param_1 != 9) {
    return -1;
  }
  return param_1[2];
}


// 0x0553518 (0xb4 bytes)
undefined4 FUN_00553518(int *param_1,undefined4 param_2,undefined4 param_3)

{
  undefined1 local_10;
  undefined1 uStack_f;
  undefined1 uStack_e;
  undefined1 uStack_d;
  undefined1 local_c;
  undefined1 uStack_b;
  undefined1 uStack_a;
  undefined1 uStack_9;
  
  if (*param_1 != 9) {
    return 0xffffffff;
  }
  *(undefined1 *)(param_1 + 1) = 0;
  *(undefined1 *)((int)param_1 + 5) = 0;
  *(undefined1 *)((int)param_1 + 6) = 0;
  *(undefined1 *)((int)param_1 + 7) = 0;
  *(undefined1 *)(param_1 + 2) = 0;
  *(undefined1 *)((int)param_1 + 9) = 0;
  *(undefined1 *)((int)param_1 + 10) = 0;
  *(undefined1 *)((int)param_1 + 0x13) = 0;
  *(undefined1 *)((int)param_1 + 0xb) = 0;
  *(undefined1 *)(param_1 + 3) = 0;
  *(undefined1 *)((int)param_1 + 0xd) = 0;
  *(undefined1 *)((int)param_1 + 0xe) = 0;
  *(undefined1 *)((int)param_1 + 0xf) = 0;
  *(undefined1 *)(param_1 + 4) = 0;
  *(undefined1 *)((int)param_1 + 0x11) = 0;
  *(undefined1 *)((int)param_1 + 0x12) = 0;
  uStack_f = (undefined1)((uint)param_2 >> 0x10);
  uStack_e = (undefined1)((uint)param_2 >> 8);
  local_10 = (undefined1)((uint)param_2 >> 0x18);
  uStack_d = (undefined1)param_2;
  *(undefined1 *)(param_1 + 1) = local_10;
  *(undefined1 *)((int)param_1 + 7) = uStack_d;
  *(undefined1 *)((int)param_1 + 5) = uStack_f;
  *(undefined1 *)((int)param_1 + 6) = uStack_e;
  uStack_9 = (undefined1)param_3;
  uStack_b = (undefined1)((uint)param_3 >> 0x10);
  uStack_a = (undefined1)((uint)param_3 >> 8);
  local_c = (undefined1)((uint)param_3 >> 0x18);
  *(undefined1 *)((int)param_1 + 9) = uStack_b;
  *(undefined1 *)(param_1 + 2) = local_c;
  *(undefined1 *)((int)param_1 + 10) = uStack_a;
  *(undefined1 *)((int)param_1 + 0xb) = uStack_9;
  return 0;
}


// 0x05535cc (0x90 bytes)
// strings: 0067d1d8: 'ERROR'

void FUN_005535cc(uint *param_1,int param_2,int param_3)

{
  if (*param_1 < 10) {
                    /* WARNING: Could not recover jumptable at 0x00553618. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)(PTR_DAT_0071b284 + *(int *)(PTR_DAT_0071b284 + *param_1 * 4)))(param_1,param_1);
    return;
  }
  strcpy(param_2,PTR_s_ERROR_0071b290,param_3);
  *(undefined1 *)(param_2 + param_3 + -1) = 0;
  return;
}


// 0x055372c (0x140 bytes)
void FUN_0055372c(int param_1,int *param_2)

{
  param_2 = (int *)*param_2;
  FUN_00553f04(param_1,param_2);
  if (*param_2 != 9) {
    FUN_00553b40(param_1,param_2 + 1);
    FUN_00553f04(param_1,param_2 + 5);
    return;
  }
  if (*(int *)(param_1 + 0x10) == 2) {
    *(undefined1 *)((int)param_2 + 0x13) = 0;
    *(undefined1 *)(param_2 + 1) = 0;
    *(undefined1 *)((int)param_2 + 5) = 0;
    *(undefined1 *)((int)param_2 + 6) = 0;
    *(undefined1 *)((int)param_2 + 7) = 0;
    *(undefined1 *)(param_2 + 2) = 0;
    *(undefined1 *)((int)param_2 + 9) = 0;
    *(undefined1 *)((int)param_2 + 10) = 0;
    *(undefined1 *)((int)param_2 + 0xb) = 0;
    *(undefined1 *)(param_2 + 3) = 0;
    *(undefined1 *)((int)param_2 + 0xd) = 0;
    *(undefined1 *)((int)param_2 + 0xe) = 0;
    *(undefined1 *)((int)param_2 + 0xf) = 0;
    *(undefined1 *)(param_2 + 4) = 0;
    *(undefined1 *)((int)param_2 + 0x11) = 0;
    *(undefined1 *)((int)param_2 + 0x12) = 0;
  }
  FUN_00554034(param_1,param_2 + 1,0x10);
  FUN_00553c74(param_1,8);
  FUN_00553f04(param_1,param_2 + 5);
  return;
}


// 0x055386c (0xac bytes)
undefined4 FUN_0055386c(undefined8 param_1)

{
  undefined4 uVar1;
  size_t sVar2;
  int iVar3;
  GPiece<8> local_60;
  GPiece<24> auStack_58;
  GPiece<32> auStack_40;
  
  sVar2 = strlen((char *)param_1);
  FUN_0055c064(param_1,sVar2,auStack_58);
  iVar3 = FUN_0055442c(auStack_40,auStack_58,auStack_40,2);
  uVar1 = 0xffffffff;
  if (iVar3 != 0) {
    FUN_0055372c(auStack_40,local_60);
    uVar1 = 0;
  }
  return uVar1;
}


// 0x0553918 (0xa8 bytes)
undefined4 FUN_00553918(undefined8 param_1,undefined4 param_2)

{
  undefined4 uVar1;
  int iVar2;
  GPiece<8> local_60;
  GPiece<24> auStack_58;
  GPiece<32> auStack_40;
  
  iVar2 = FUN_0055442c(auStack_40,auStack_58,auStack_40,1);
  uVar1 = 0xffffffff;
  if (iVar2 != 0) {
    FUN_0055372c(auStack_40,local_60);
    FUN_0055bec0(auStack_58,0x18,param_2);
    uVar1 = 0;
  }
  return uVar1;
}


// 0x05539c0 (0x154 bytes)
undefined8 FUN_005539c0(int *param_1,ushort *param_2)

{
  byte bVar1;
  ushort uVar2;
  undefined8 uVar3;
  byte *pbVar4;
  
  if (*param_1 != -0x54324346) {
    param_1[6] = 5;
    return 0;
  }
  if (param_1[6] != 0) {
    param_1[6] = param_1[6];
    return 0;
  }
  pbVar4 = (byte *)param_1[3];
  if ((pbVar4 < (byte *)param_1[2]) && (pbVar4 != (byte *)0x0)) {
    if ((uint)(param_1[2] - (int)pbVar4) < 2) {
      param_1[6] = 8;
      return 0;
    }
    if (param_1[4] == 1) {
      uVar2 = *param_2;
      if (0x7ffe < uVar2) goto LAB_00553a4c;
      if (0x7f < uVar2) {
        *pbVar4 = (byte)(uVar2 >> 8) | 0x80;
        uVar2 = *param_2;
        pbVar4 = (byte *)(param_1[3] + 1);
        param_1[3] = (int)pbVar4;
      }
      *pbVar4 = (byte)uVar2;
      pbVar4 = (byte *)param_1[3];
    }
    else if (param_1[4] == 2) {
      bVar1 = *pbVar4;
      *param_2 = (ushort)bVar1;
      if ((bVar1 & 0x80) != 0) {
        uVar2 = (ushort)(((ulonglong)bVar1 & 0x7f) << 8);
        *param_2 = uVar2;
        param_1[3] = (int)(pbVar4 + 1);
        *param_2 = uVar2 | pbVar4[1];
      }
      if (0x7ffe < *param_2) {
        param_1[6] = 2;
        return 0;
      }
      pbVar4 = (byte *)param_1[3];
    }
    uVar3 = 1;
    param_1[3] = (int)(pbVar4 + 1);
  }
  else {
LAB_00553a4c:
    uVar3 = 0;
    param_1[6] = 2;
  }
  return uVar3;
}


// 0x0553b14 (0x2c bytes)
undefined8 FUN_00553b14(undefined4 *param_1)

{
  param_1[6] = 0;
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  return 1;
}


// 0x0553b40 (0x134 bytes)
uint FUN_00553b40(int *param_1,void *param_2,size_t param_3)

{
  int iVar1;
  void *__dest;
  
  if (*param_1 != -0x54324346) {
    __dest = (void *)0x0;
    param_1[6] = 5;
    goto LAB_00553b80;
  }
  if (param_1[6] != 0) {
    param_1[6] = param_1[6];
    return 0;
  }
  __dest = (void *)param_1[3];
  if (__dest < (void *)param_1[2]) {
    if (__dest != (void *)0x0) {
      if (param_2 != (void *)0x0) {
        if ((uint)(param_1[2] - (int)__dest) < param_3) {
          __dest = (void *)0x0;
          param_1[6] = 8;
        }
        else {
          if (param_1[4] == 1) {
            memcpy(__dest,param_2,param_3);
            __dest = (void *)param_1[3];
          }
          else if (param_1[4] == 2) {
            memcpy(param_2,__dest,param_3);
            __dest = (void *)param_1[3];
          }
          iVar1 = (int)__dest + param_3;
          __dest = (void *)0x1;
          param_1[3] = iVar1;
        }
        goto LAB_00553b80;
      }
      goto LAB_00553c08;
    }
  }
  else {
LAB_00553c08:
    __dest = (void *)0x0;
  }
  param_1[6] = 2;
LAB_00553b80:
  return (uint)__dest & 1;
}


// 0x0553c74 (0x110 bytes)
undefined4 FUN_00553c74(int *param_1,uint param_2)

{
  undefined4 uVar1;
  uint uVar2;
  
  if (*param_1 == -0x54324346) {
    if (param_1[6] != 0) {
      param_1[6] = param_1[6];
      return 0;
    }
    uVar2 = param_1[3];
    if (uVar2 < (uint)param_1[2]) {
      if (uVar2 == 0) {
        param_1[6] = 2;
        uVar1 = 0;
      }
      else if (param_1[2] - uVar2 < param_2) {
        uVar1 = 0;
        param_1[6] = 8;
      }
      else {
        if (param_1[4] == 1) {
          memset(uVar2,0,param_2);
          uVar2 = param_1[3];
        }
        uVar1 = 1;
        param_1[3] = uVar2 + param_2;
      }
    }
    else {
      uVar1 = 0;
      param_1[6] = 2;
    }
  }
  else {
    uVar1 = 0;
    param_1[6] = 5;
  }
  return uVar1;
}


// 0x0553d84 (0x180 bytes)
undefined8 FUN_00553d84(int *param_1,int param_2)

{
  int iVar1;
  int iVar2;
  undefined8 uVar3;
  short sVar4;
  ushort local_30 [8];
  
  iVar1 = param_1[3];
  if (*param_1 != -0x54324346) {
    param_1[6] = 5;
    return 0;
  }
  iVar2 = param_1[6];
  if (iVar2 != 0) goto LAB_00553e30;
  if (param_2 == 0) {
    param_1[6] = 2;
    return 0;
  }
  if (param_1[4] == 1) {
    sVar4 = FUN_005565bc(param_2,0x7fff);
    local_30[0] = sVar4 + 1;
    if (local_30[0] < 0x7fff) goto LAB_00553e14;
LAB_00553eac:
    uVar3 = 0;
    param_1[6] = 9;
  }
  else {
LAB_00553e14:
    FUN_005539c0(param_1,local_30);
    iVar2 = param_1[6];
    if (iVar2 != 0) {
LAB_00553e30:
      param_1[6] = iVar2;
      return 0;
    }
    FUN_00553b40(param_1,param_2,local_30[0]);
    if ((param_1[6] != 0) || (*(char *)(param_1[3] + -1) != '\0')) {
      param_1[3] = iVar1;
      if (param_1[6] != 0) {
        return 0;
      }
      if (*(char *)(iVar1 + -1) != '\0') goto LAB_00553eac;
    }
    uVar3 = 1;
  }
  return uVar3;
}


// 0x0553f04 (0x130 bytes)
undefined4 FUN_00553f04(int *param_1,undefined4 *param_2)

{
  uint uVar1;
  int iVar2;
  
  if (*param_1 != -0x54324346) {
    param_1[6] = 5;
    return 0;
  }
  if (param_1[6] != 0) {
    param_1[6] = param_1[6];
    return 0;
  }
  uVar1 = param_1[3];
  if ((uint)param_1[2] <= uVar1) {
    param_1[6] = 2;
    return 0;
  }
  if (uVar1 == 0) {
    param_1[6] = 2;
    return 0;
  }
  if (param_1[2] - uVar1 < 4) {
    param_1[6] = 8;
    return 0;
  }
  if (param_1[4] == 1) {
    iVar2 = FUN_00551fd4(uVar1,*param_2);
  }
  else {
    if (param_1[4] != 2) goto LAB_00553fc4;
    iVar2 = FUN_0055200c(uVar1,param_2);
  }
  if (iVar2 == 0) {
    param_1[3] = param_1[3] + 4;
    return 1;
  }
LAB_00553fc4:
  param_1[6] = 0;
  return 0;
}


// 0x0554034 (0x12c bytes)
undefined4 FUN_00554034(int *param_1,undefined8 *param_2)

{
  uint uVar1;
  int iVar2;
  
  if (*param_1 != -0x54324346) {
    param_1[6] = 5;
    return 0;
  }
  if (param_1[6] != 0) {
    param_1[6] = param_1[6];
    return 0;
  }
  uVar1 = param_1[3];
  if ((uint)param_1[2] <= uVar1) {
    param_1[6] = 2;
    return 0;
  }
  if (uVar1 == 0) {
    param_1[6] = 2;
    return 0;
  }
  if (param_1[2] - uVar1 < 8) {
    param_1[6] = 8;
    return 0;
  }
  if (param_1[4] == 1) {
    iVar2 = FUN_00552068(uVar1,*param_2);
  }
  else {
    if (param_1[4] != 2) goto LAB_005540f4;
    iVar2 = FUN_005520f0(uVar1,param_2);
  }
  if (iVar2 == 0) {
    param_1[3] = param_1[3] + 8;
    return 1;
  }
LAB_005540f4:
  param_1[6] = 0;
  return 0;
}


// 0x0554160 (0x130 bytes)
undefined4 FUN_00554160(int *param_1,undefined2 *param_2)

{
  uint uVar1;
  int iVar2;
  
  if (*param_1 != -0x54324346) {
    param_1[6] = 5;
    return 0;
  }
  if (param_1[6] != 0) {
    param_1[6] = param_1[6];
    return 0;
  }
  uVar1 = param_1[3];
  if ((uint)param_1[2] <= uVar1) {
    param_1[6] = 2;
    return 0;
  }
  if (uVar1 == 0) {
    param_1[6] = 2;
    return 0;
  }
  if (param_1[2] - uVar1 < 2) {
    param_1[6] = 8;
    return 0;
  }
  if (param_1[4] == 1) {
    iVar2 = FUN_00551f1c(uVar1,*param_2);
  }
  else {
    if (param_1[4] != 2) goto LAB_00554220;
    iVar2 = FUN_00551f40(uVar1,param_2);
  }
  if (iVar2 == 0) {
    param_1[3] = param_1[3] + 2;
    return 1;
  }
LAB_00554220:
  param_1[6] = 0;
  return 0;
}


// 0x0554290 (0x114 bytes)
undefined4 FUN_00554290(int *param_1,undefined1 *param_2)

{
  uint uVar1;
  int iVar2;
  
  if (*param_1 != -0x54324346) {
    param_1[6] = 5;
    return 0;
  }
  if (param_1[6] != 0) {
    param_1[6] = param_1[6];
    return 0;
  }
  uVar1 = param_1[3];
  if ((uint)param_1[2] <= uVar1) {
    param_1[6] = 2;
    return 0;
  }
  if (uVar1 == 0) {
    param_1[6] = 2;
    return 0;
  }
  if (param_1[4] == 1) {
    iVar2 = FUN_00551e94(uVar1,*param_2);
  }
  else {
    if (param_1[4] != 2) goto LAB_00554344;
    iVar2 = FUN_00551eb0(uVar1,param_2);
  }
  if (iVar2 == 0) {
    param_1[3] = param_1[3] + 1;
    return 1;
  }
LAB_00554344:
  param_1[6] = 0;
  return 0;
}


// 0x05543a4 (0x88 bytes)
undefined8 FUN_005543a4(int *param_1,int *param_2)

{
  uint uVar1;
  undefined8 uVar2;
  
  if (*param_1 == -0x54324346) {
    if (param_1[6] != 0) {
      param_1[6] = param_1[6];
      return 0;
    }
    uVar1 = param_1[3];
    if ((((uint)param_1[2] < uVar1) || (uVar1 == 0)) || (param_2 == (int *)0x0)) {
      uVar2 = 0;
      param_1[6] = 2;
    }
    else {
      uVar2 = 1;
      *param_2 = uVar1 - param_1[1];
    }
  }
  else {
    uVar2 = 0;
    param_1[6] = 5;
  }
  return uVar2;
}


// 0x055442c (0x78 bytes)
undefined8 FUN_0055442c(undefined4 *param_1,uint param_2,uint param_3,undefined4 param_4)

{
  undefined8 uVar1;
  
  uVar1 = 0;
  if (param_1 != (undefined4 *)0x0) {
    param_1[6] = 0;
    *param_1 = 0xabcdbcba;
    param_1[3] = param_2;
    param_1[2] = param_3;
    param_1[4] = param_4;
    param_1[1] = param_2;
    param_1[5] = 0;
    if ((param_2 == 0) || (param_3 == 0)) {
      param_1[6] = 2;
      return 0;
    }
    uVar1 = 1;
    if (param_3 <= param_2) {
      uVar1 = 0;
      param_1[6] = 2;
    }
  }
  return uVar1;
}


// 0x05544a4 (0x14 bytes)
undefined8 FUN_005544a4(undefined4 param_1,undefined4 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR_DAT_0071b294;
  *(undefined4 *)PTR_DAT_0071b294 = param_1;
  *(undefined4 *)(puVar1 + 4) = param_2;
  return 0;
}


// 0x05544b8 (0x98 bytes)
undefined8 FUN_005544b8(uint param_1,uint param_2)

{
  undefined4 *puVar1;
  undefined8 uVar2;
  
  uVar2 = 5;
  if ((PTR_DAT_0071b294[8] == '\x01') && (*(int *)(PTR_DAT_0071b294 + 0xc) != 0)) {
    if (*(int *)(PTR_DAT_0071b294 + 0x10) != 0) {
      if (((0xff < param_1) || (*(uint *)(PTR_DAT_0071b294 + 0x14) <= param_2)) ||
         (uVar2 = 0, *(uint *)(param_2 * 4 + *(int *)(PTR_DAT_0071b294 + 0x10)) <= param_1)) {
        return 2;
      }
      puVar1 = (undefined4 *)
               (*(int *)(PTR_DAT_0071b294 + 0xc) +
               (param_1 + param_2 * *(int *)(PTR_DAT_0071b294 + 0x18)) * 0x10);
      puVar1[3] = 0;
      *puVar1 = 0;
      puVar1[2] = 0;
    }
  }
  return uVar2;
}


// 0x0554550 (0xa8 bytes)
undefined8 FUN_00554550(uint param_1)

{
  uint uVar1;
  uint *puVar2;
  undefined8 uVar3;
  undefined4 *puVar4;
  ulonglong uVar5;
  
  if (((PTR_DAT_0071b294[8] == '\x01') && (*(int *)(PTR_DAT_0071b294 + 0xc) != 0)) &&
     (*(int *)(PTR_DAT_0071b294 + 0x10) != 0)) {
    uVar3 = 2;
    if (param_1 < *(uint *)(PTR_DAT_0071b294 + 0x14)) {
      puVar2 = (uint *)(*(int *)(PTR_DAT_0071b294 + 0x10) + param_1 * 4);
      uVar1 = *puVar2;
      if (uVar1 != 0) {
        uVar5 = (ulonglong)uVar1;
        puVar4 = (undefined4 *)
                 (*(int *)(PTR_DAT_0071b294 + 0xc) +
                 param_1 * *(int *)(PTR_DAT_0071b294 + 0x18) * 0x10);
        do {
          puVar4[3] = 0;
          *puVar4 = 0;
          puVar4[2] = 0;
          uVar5 = uVar5 - 1;
          puVar4 = puVar4 + 4;
        } while (uVar5 != 0);
      }
      uVar3 = 0;
      *puVar2 = 0;
    }
    return uVar3;
  }
  return 5;
}


// 0x05545f8 (0x178 bytes)
undefined8
FUN_005545f8(uint param_1,ulonglong param_2,int param_3,int param_4,int param_5,int param_6)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  undefined4 *puVar4;
  uint *puVar5;
  undefined *puVar6;
  int *piVar7;
  undefined8 uVar8;
  
  puVar6 = PTR_DAT_0071b294;
  if (((PTR_DAT_0071b294[8] == '\x01') && (iVar1 = *(int *)(PTR_DAT_0071b294 + 0xc), iVar1 != 0)) &&
     (*(int *)(PTR_DAT_0071b294 + 0x10) != 0)) {
    if ((param_1 < 0x100) &&
       ((param_2 & 0xffffffff) < (ulonglong)*(uint *)(PTR_DAT_0071b294 + 0x14))) {
      uVar2 = *(uint *)(PTR_DAT_0071b294 + 0x18);
      uVar8 = 0x3eb;
      puVar5 = (uint *)(*(int *)(PTR_DAT_0071b294 + 0x10) + (int)((param_2 & 0xffffffff) << 2));
      uVar3 = *puVar5;
      if (uVar3 <= uVar2) {
        if (param_1 < uVar3) {
          piVar7 = (int *)((param_1 + (int)param_2 * uVar2) * 0x10 + iVar1);
          iVar1 = *piVar7;
        }
        else {
          *puVar5 = param_1 + 1;
          piVar7 = (int *)((param_1 + (int)param_2 * uVar2) * 0x10 + iVar1);
          iVar1 = *piVar7;
        }
        uVar8 = 0x3ea;
        if (iVar1 == 0) {
          puVar4 = *(undefined4 **)puVar6;
          uVar8 = 0;
          piVar7[3] = param_6;
          *piVar7 = param_3;
          piVar7[1] = param_4;
          piVar7[2] = param_5;
          if (puVar4 != (undefined4 *)0x0) {
            (*(code *)*puVar4)(param_1,param_2 & 0xffffffff);
            return 0;
          }
        }
      }
    }
    else {
      uVar8 = 2;
    }
    return uVar8;
  }
  return 5;
}


// 0x0554770 (0x8 bytes)
void FUN_00554770(void)

{
  FUN_005545f8();
  return;
}


// 0x0554778 (0xc bytes)
void FUN_00554778(void)

{
  FUN_00554770();
  return;
}


// 0x0554784 (0xc bytes)
void FUN_00554784(void)

{
  FUN_00554770();
  return;
}


// 0x0554790 (0xc bytes)
void FUN_00554790(void)

{
  FUN_00554770();
  return;
}


// 0x055479c (0x10 bytes)
void FUN_0055479c(void)

{
  FUN_005545f8();
  return;
}


// 0x05547ac (0xc8 bytes)
undefined8 FUN_005547ac(uint param_1,uint param_2,int param_3)

{
  uint uVar1;
  int *piVar2;
  undefined8 uVar3;
  
  if (((PTR_DAT_0071b294[8] == '\x01') && (*(int *)(PTR_DAT_0071b294 + 0xc) != 0)) &&
     (*(int *)(PTR_DAT_0071b294 + 0x10) != 0)) {
    if ((param_1 < 0x100) && (param_2 < *(uint *)(PTR_DAT_0071b294 + 0x14))) {
      uVar3 = 0x3eb;
      uVar1 = *(uint *)(param_2 * 4 + *(int *)(PTR_DAT_0071b294 + 0x10));
      if (uVar1 <= *(uint *)(PTR_DAT_0071b294 + 0x18)) {
        if ((uVar1 <= param_1) ||
           (piVar2 = (int *)((*(uint *)(PTR_DAT_0071b294 + 0x18) * param_2 + param_1) * 0x10 +
                            *(int *)(PTR_DAT_0071b294 + 0xc)), *piVar2 == 0)) {
          return 0x3ec;
        }
        uVar3 = 0;
        piVar2[2] = 0;
        *piVar2 = param_3;
      }
    }
    else {
      uVar3 = 2;
    }
    return uVar3;
  }
  return 5;
}


// 0x0554874 (0xa4 bytes)
undefined8 FUN_00554874(uint param_1,uint param_2,undefined4 *param_3)

{
  undefined *puVar1;
  int *piVar2;
  
  puVar1 = PTR_DAT_0071b294;
  if (param_3 != (undefined4 *)0x0) {
    *param_3 = 0;
    if (((puVar1[8] != '\x01') || (*(int *)(puVar1 + 0xc) == 0)) || (*(int *)(puVar1 + 0x10) == 0))
    {
      return 5;
    }
    if ((param_1 < *(uint *)(puVar1 + 0x14)) && (param_2 < *(uint *)(puVar1 + 0x18))) {
      piVar2 = (int *)(*(int *)(puVar1 + 0xc) +
                      (int)(((ulonglong)param_2 +
                             (longlong)(int)param_1 * (longlong)(int)*(uint *)(puVar1 + 0x18) &
                            0xffffffff) << 4));
      *param_3 = piVar2;
      if ((*piVar2 != 0) || (piVar2[2] != 0)) {
        return 0;
      }
    }
  }
  return 2;
}


// 0x0554918 (0xb0 bytes)
undefined8 FUN_00554918(uint param_1,undefined4 *param_2,uint param_3)

{
  uint uVar1;
  undefined4 *puVar2;
  ulonglong uVar3;
  
  if ((((PTR_DAT_0071b294[8] == '\x01') && (*(int *)(PTR_DAT_0071b294 + 0xc) != 0)) &&
      (*(int *)(PTR_DAT_0071b294 + 0x10) != 0)) && (*(int *)(PTR_DAT_0071b294 + 0x1c) != 0)) {
    if (((param_1 < *(uint *)(PTR_DAT_0071b294 + 0x14)) && (param_2 != (undefined4 *)0x0)) &&
       (uVar1 = *(uint *)(PTR_DAT_0071b294 + 0x18), uVar1 <= param_3)) {
      if (uVar1 != 0) {
        uVar3 = (ulonglong)uVar1;
        puVar2 = (undefined4 *)(*(int *)(PTR_DAT_0071b294 + 0x1c) + param_1 * uVar1 * 4);
        do {
          *param_2 = *puVar2;
          uVar3 = uVar3 - 1;
          param_2 = param_2 + 1;
          puVar2 = puVar2 + 1;
        } while (uVar3 != 0);
      }
      return 0;
    }
    return 2;
  }
  return 5;
}


// 0x05549c8 (0x88 bytes)
// strings: 00554a3c: '}KSx8\n' (raw)

uint FUN_005549c8(int param_1)

{
  uint uVar1;
  uint *puVar2;
  int *piVar3;
  uint uVar4;
  ulonglong uVar5;
  
  puVar2 = (uint *)(param_1 * 4 + *(int *)(PTR_DAT_0071b294 + 0x10));
  uVar1 = *puVar2;
  if (uVar1 != 0) {
    uVar4 = 0;
    uVar5 = (ulonglong)uVar1;
    piVar3 = (int *)(param_1 * *(int *)(PTR_DAT_0071b294 + 0x18) * 0x10 +
                    *(int *)(PTR_DAT_0071b294 + 0xc));
    do {
      if ((*piVar3 == 0) && (piVar3[2] == 0)) {
        return uVar4;
      }
      uVar4 = uVar4 + 1;
      uVar5 = uVar5 - 1;
      piVar3 = piVar3 + 4;
    } while (uVar5 != 0);
  }
  *puVar2 = uVar1 + 1;
  return uVar1;
}


// 0x0554a50 (0x140 bytes)
int FUN_00554a50(undefined4 *param_1,ulonglong param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 *puVar1;
  ulonglong uVar2;
  undefined *puVar3;
  undefined8 uVar4;
  int iVar5;
  
  puVar3 = PTR_DAT_0071b294;
  iVar5 = 5;
  if (((PTR_DAT_0071b294[8] == '\x01') && (*(int *)(PTR_DAT_0071b294 + 0xc) != 0)) &&
     (*(int *)(PTR_DAT_0071b294 + 0x10) != 0)) {
    uVar2 = param_2 & 0xffffffff;
    iVar5 = 0x3eb;
    if (*(uint *)((int)((param_2 & 0xffffffff) << 2) + *(int *)(PTR_DAT_0071b294 + 0x10)) <=
        *(uint *)(PTR_DAT_0071b294 + 0x18)) {
      uVar4 = FUN_005549c8(uVar2);
      iVar5 = FUN_0055479c(uVar4,uVar2,param_3,param_4);
      if (iVar5 == 0) {
        puVar1 = *(undefined4 **)puVar3;
        *param_1 = (int)uVar4;
        if (puVar1 != (undefined4 *)0x0) {
          (*(code *)*puVar1)(uVar4,uVar2);
          return 0;
        }
      }
    }
  }
  return iVar5;
}


// 0x0554b90 (0x12c bytes)
int FUN_00554b90(undefined4 *param_1,ulonglong param_2,undefined4 param_3)

{
  undefined4 *puVar1;
  ulonglong uVar2;
  undefined *puVar3;
  undefined8 uVar4;
  int iVar5;
  
  puVar3 = PTR_DAT_0071b294;
  iVar5 = 5;
  if (((PTR_DAT_0071b294[8] == '\x01') && (*(int *)(PTR_DAT_0071b294 + 0xc) != 0)) &&
     (*(int *)(PTR_DAT_0071b294 + 0x10) != 0)) {
    uVar2 = param_2 & 0xffffffff;
    iVar5 = 0x3eb;
    if (*(uint *)((int)((param_2 & 0xffffffff) << 2) + *(int *)(PTR_DAT_0071b294 + 0x10)) <=
        *(uint *)(PTR_DAT_0071b294 + 0x18)) {
      uVar4 = FUN_005549c8(uVar2);
      iVar5 = FUN_00554790(uVar4,uVar2,param_3);
      if (iVar5 == 0) {
        puVar1 = *(undefined4 **)puVar3;
        *param_1 = (int)uVar4;
        if (puVar1 != (undefined4 *)0x0) {
          (*(code *)*puVar1)(uVar4,uVar2);
          return 0;
        }
      }
    }
  }
  return iVar5;
}


// 0x0554cbc (0x10 bytes)
undefined8 FUN_00554cbc(undefined1 param_1,undefined1 param_2,undefined1 *param_3)

{
  *param_3 = param_1;
  param_3[1] = param_2;
  return 2;
}


// 0x0554ccc (0x18 bytes)
undefined8 FUN_00554ccc(undefined1 *param_1,undefined1 *param_2,undefined1 *param_3)

{
  *param_1 = *param_3;
  *param_2 = param_3[1];
  return 2;
}


// 0x0554ce4 (0xd8 bytes)
undefined8 FUN_00554ce4(void)

{
  bool bVar1;
  undefined4 *puVar2;
  undefined *puVar3;
  int iVar4;
  uint local_30 [4];
  
  puVar3 = PTR_DAT_0071b294;
  if (*(int *)(PTR_DAT_0071b294 + 0x20) != 0) {
    iVar4 = 0;
    do {
      while( true ) {
        if ((*(int *)(iVar4 + *(int *)(puVar3 + 0x20)) == 0) ||
           (thunk_FUN_00556bb8((int *)(iVar4 + *(int *)(puVar3 + 0x20)) + 9,local_30),
           local_30[0] < 0x7531)) break;
        FUN_005519f0(iVar4 + *(int *)(puVar3 + 0x20) + 0x30);
        puVar2 = (undefined4 *)(iVar4 + *(int *)(puVar3 + 0x20));
        bVar1 = iVar4 == 0x33cc;
        iVar4 = iVar4 + 0x34;
        *puVar2 = 0;
        if (bVar1) {
          return 0;
        }
      }
      bVar1 = iVar4 != 0x33cc;
      iVar4 = iVar4 + 0x34;
    } while (bVar1);
  }
  return 0;
}


// 0x0554dbc (0x13c bytes)
undefined8 FUN_00554dbc(void)

{
  bool bVar1;
  undefined *puVar2;
  int iVar3;
  undefined8 uVar4;
  
  puVar2 = PTR_DAT_0071b294;
  uVar4 = 1000;
  if (*(int *)(PTR_DAT_0071b294 + 0x24) != 0) {
    iVar3 = *(int *)(PTR_DAT_0071b294 + 0x24) + -1;
    uVar4 = 0;
    *(int *)(PTR_DAT_0071b294 + 0x24) = iVar3;
    if (iVar3 == 0) {
      if (*(int *)(puVar2 + 0x20) != 0) {
        iVar3 = 0;
        do {
          if (*(int *)(iVar3 + *(int *)(puVar2 + 0x20) + 0x30) != 0) {
            FUN_005519f0(iVar3 + *(int *)(puVar2 + 0x20) + 0x30);
          }
          bVar1 = iVar3 != 0x33cc;
          iVar3 = iVar3 + 0x34;
        } while (bVar1);
        FUN_005519f0(puVar2 + 0x20);
      }
      if (*(int *)(puVar2 + 0x10) != 0) {
        FUN_005519f0(puVar2 + 0x10);
      }
      if (*(int *)(puVar2 + 0xc) != 0) {
        FUN_005519f0(puVar2 + 0xc);
      }
      if (*(int *)(puVar2 + 0x28) != 0) {
        FUN_005519f0(puVar2 + 0x28);
      }
      if (*(int *)(puVar2 + 0x1c) != 0) {
        FUN_005519f0(puVar2 + 0x1c);
      }
      uVar4 = 0;
      puVar2[8] = 0;
    }
  }
  return uVar4;
}


// 0x0554ef8 (0xdc bytes)
void FUN_00554ef8(undefined8 param_1,int param_2)

{
  FUN_00554290(param_1,param_2);
  FUN_00554290(param_1,param_2 + 1);
  FUN_00554160(param_1,param_2 + 2);
  FUN_00554160(param_1,param_2 + 4);
  FUN_00554160(param_1,param_2 + 6);
  FUN_00554290(param_1,param_2 + 8);
  FUN_00553c74(param_1,3);
  FUN_00553f04(param_1,param_2 + 0xc);
  FUN_00553f04(param_1,param_2 + 0x10);
  return;
}


// 0x0554fd4 (0x3ec bytes)
ulonglong FUN_00554fd4(uint param_1,uint param_2,int param_3,int param_4,undefined4 param_5,
                      undefined4 *param_6,undefined4 param_7)

{
  char cVar1;
  code *pcVar2;
  longlong lVar3;
  ulonglong *puVar4;
  undefined *puVar5;
  uint uVar6;
  ulonglong uVar7;
  ulonglong *puVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  int iVar11;
  int iVar12;
  ushort uVar13;
  ulonglong unaff_r15;
  ulonglong unaff_r16;
  ulonglong unaff_r17;
  ulonglong unaff_r18;
  ulonglong unaff_r19;
  ulonglong unaff_r20;
  ulonglong unaff_r21;
  ulonglong unaff_r22;
  ulonglong unaff_r23;
  ulonglong unaff_r24;
  ulonglong unaff_r25;
  ulonglong unaff_r26;
  ulonglong unaff_r27;
  ulonglong uVar14;
  ulonglong unaff_r28;
  ulonglong unaff_r29;
  ulonglong unaff_r30;
  ulonglong unaff_r31;
  ulonglong in_LR;
  
  uVar7 = ZEXT48(&stack0x00000000);
  uVar9 = ZEXT48(&TOC_BASE);
  puVar4 = (ulonglong *)(uVar7 - 0x1a0);
  *puVar4 = uVar7;
  puVar4[0x29] = unaff_r21;
  puVar5 = PTR_DAT_0071b294;
  puVar4[0x36] = in_LR;
  puVar4[0x33] = unaff_r31;
  puVar4[0x2b] = unaff_r23;
  uVar6 = *(uint *)(puVar5 + 0x14);
  puVar4[0x2c] = unaff_r24;
  puVar4[0x2d] = unaff_r25;
  puVar4[0x2e] = unaff_r26;
  puVar4[0x30] = unaff_r28;
  puVar4[0x31] = unaff_r29;
  puVar4[0x32] = unaff_r30;
  puVar4[0x23] = unaff_r15;
  puVar4[0x24] = unaff_r16;
  puVar4[0x25] = unaff_r17;
  puVar4[0x26] = unaff_r18;
  puVar4[0x27] = unaff_r19;
  puVar4[0x28] = unaff_r20;
  puVar4[0x2a] = unaff_r22;
  puVar4[0x2f] = unaff_r27;
  *(int *)(puVar4 + 0x3d) = param_4;
  if ((((uVar6 <= param_1) || (*(uint *)(puVar5 + 0x18) <= param_2)) || (param_3 == 0)) ||
     ((param_4 == 0 || (param_6 == (undefined4 *)0x0)))) {
    uVar10 = 2;
    goto LAB_005552d8;
  }
  *(undefined4 *)(puVar4 + 0xf) = 0;
  FUN_00554874(param_1,param_2,uVar7 - 0x128);
  if ((*(int *)(puVar4 + 0xf) == 0) || (*(int *)(*(int *)(puVar4 + 0xf) + 8) == 0)) {
    uVar6 = *(uint *)(puVar5 + 0x2c);
    puVar8 = puVar4;
    if (*(int *)(puVar4 + 0x3d) + 2U <= uVar6) {
LAB_0055534c:
      iVar11 = FUN_00554cbc(param_1 & 0xff,param_2 & 0xff,uVar7 - 0x130);
      iVar12 = *(int *)(puVar4 + 0x3d);
      *(int *)((int)puVar4 + 0xd4) = iVar11;
      *(int *)(puVar4 + 0x19) = param_3;
      *(int *)(puVar4 + 0x1a) = (int)(uVar7 - 0x130);
      *(int *)(puVar4 + 0x21) = iVar12 + iVar11;
      *(undefined4 *)((int)puVar4 + 0x10c) = 2;
      puVar8[5] = uVar9;
      *(int *)((int)puVar4 + 0xcc) = iVar12;
      uVar10 = (*(code *)*param_6)(uVar7 - 0xd8,param_5,param_7);
      goto LAB_005552d8;
    }
  }
  else {
    uVar6 = *(uint *)(puVar4 + 0x3d);
    uVar10 = uVar7 - 0xf4 & 0xffffffff;
    lVar3 = (uVar7 - 0x1a0) - ((ulonglong)uVar6 + 0x1e & 0xfffffffffffffff0);
    puVar8 = (ulonglong *)lVar3;
    *puVar8 = *puVar4;
    uVar14 = lVar3 + 0x70;
    FUN_0055442c(uVar10,uVar14 & 0xffffffff,uVar14 + uVar6 & 0xffffffff,1);
    *(int *)((int)puVar4 + 0x7c) = param_3;
    *(undefined4 *)(puVar4 + 0x10) = *(undefined4 *)(puVar4 + 0x3d);
    pcVar2 = (code *)**(undefined4 **)(*(int *)(puVar4 + 0xf) + 8);
    puVar8[5] = ZEXT48(&TOC_BASE);
    (*pcVar2)(uVar10,uVar7 - 0x124);
    uVar9 = puVar8[5];
    FUN_005543a4(uVar10,uVar7 + 0x48 & 0xffffffff);
    uVar10 = (ulonglong)*(uint *)((int)puVar4 + 0xc4);
    if (*(uint *)((int)puVar4 + 0xc4) != 0) goto LAB_005552d8;
    uVar6 = *(uint *)(puVar5 + 0x2c);
    param_3 = (int)uVar14;
    if (*(int *)(puVar4 + 0x3d) + 2U <= uVar6) goto LAB_0055534c;
  }
  iVar11 = FUN_00554cbc(0,2,uVar7 - 0x130);
  iVar12 = *(int *)(puVar4 + 0x3d);
  cVar1 = puVar5[0x30];
  puVar5[0x30] = cVar1 + '\x01';
  uVar10 = (ulonglong)((uVar6 + iVar12) - 0x1a) / (ulonglong)(uVar6 - 0x19);
  if ((uVar10 & 0xffff) != 0) {
    uVar14 = uVar7 - 0xf4 & 0xffffffff;
    *(short *)(puVar4 + 0x11) = (short)uVar10;
    *(char *)((int)puVar4 + 0x84) = (char)param_1;
    *(char *)((int)puVar4 + 0x85) = (char)param_2;
    *(char *)((int)puVar4 + 0x8c) = cVar1;
    *(undefined2 *)((int)puVar4 + 0x8a) = 0;
    *(int *)(puVar4 + 0x12) = iVar12;
    *(undefined4 *)((int)puVar4 + 0x94) = 0;
    while( true ) {
      uVar6 = iVar12 - *(int *)((int)puVar4 + 0x94);
      if (*(int *)(puVar5 + 0x2c) - 0x19U < uVar6) {
        uVar6 = *(int *)(puVar5 + 0x2c) - 0x19;
      }
      *(short *)((int)puVar4 + 0x86) = (short)uVar6;
      FUN_0055442c(uVar14,uVar7 - 0x108 & 0xffffffff,uVar14,1);
      FUN_00554ef8(uVar14,uVar7 - 0x11c & 0xffffffff);
      FUN_005543a4(uVar14,uVar7 - 300 & 0xffffffff);
      *(int *)(puVar4 + 0x19) = param_3 + *(int *)((int)puVar4 + 0x94);
      *(uint *)(puVar4 + 0x21) = *(ushort *)((int)puVar4 + 0x86) + 0x14 + iVar11;
      *(uint *)((int)puVar4 + 0xcc) = (uint)*(ushort *)((int)puVar4 + 0x86);
      *(int *)(puVar4 + 0x1a) = (int)(uVar7 - 0x108);
      *(undefined4 *)((int)puVar4 + 0xd4) = 0x14;
      *(int *)(puVar4 + 0x1b) = (int)(uVar7 - 0x130);
      *(int *)((int)puVar4 + 0xdc) = iVar11;
      *(undefined4 *)((int)puVar4 + 0x10c) = 3;
      puVar8[5] = uVar9;
      uVar10 = (*(code *)*param_6)(uVar7 - 0xd8 & 0xffffffff,param_5,param_7);
      uVar9 = puVar8[5];
      if (uVar10 != 0) goto LAB_005552d8;
      uVar13 = *(short *)((int)puVar4 + 0x8a) + 1;
      if (*(ushort *)(puVar4 + 0x11) <= uVar13) break;
      iVar12 = *(int *)(puVar4 + 0x3d);
      *(uint *)((int)puVar4 + 0x94) =
           *(int *)((int)puVar4 + 0x94) + (uint)*(ushort *)((int)puVar4 + 0x86);
      *(ushort *)((int)puVar4 + 0x8a) = uVar13;
    }
  }
  uVar10 = 0;
LAB_005552d8:
  return uVar10 & 0xffffffff;
}


// 0x05553c0 (0xa8 bytes)
undefined8 FUN_005553c0(uint param_1)

{
  undefined8 uVar1;
  longlong lVar2;
  
  uVar1 = 5;
  if ((((PTR_DAT_0071b294[8] == '\x01') && (*(int *)(PTR_DAT_0071b294 + 0xc) != 0)) &&
      (*(int *)(PTR_DAT_0071b294 + 0x10) != 0)) &&
     ((*(int *)(PTR_DAT_0071b294 + 0x1c) != 0 &&
      (uVar1 = 2, param_1 < *(uint *)(PTR_DAT_0071b294 + 0x14))))) {
    lVar2 = ((ulonglong)*(uint *)(PTR_DAT_0071b294 + 0x18) & 0x3fffffff) << 2;
    memset(param_1 * (int)lVar2 + *(int *)(PTR_DAT_0071b294 + 0x1c),0,lVar2);
    return 0;
  }
  return uVar1;
}


// 0x0555468 (0x5c bytes)
undefined8 FUN_00555468(undefined4 param_1)

{
  undefined *puVar1;
  undefined4 *puVar2;
  
  puVar1 = PTR_DAT_0071b294;
  puVar2 = (undefined4 *)(PTR_DAT_0071b294 + 0x38);
  if (PTR_DAT_0071b294[8] != '\x01') {
    return 5;
  }
  *(undefined4 *)(PTR_DAT_0071b294 + 0x3c) = 0;
  *(undefined4 *)(puVar1 + 0x3c) = 1;
  *puVar2 = 0;
  *(undefined4 *)(puVar1 + 0x44) = 0;
  *(undefined4 *)(puVar1 + 0x38) = param_1;
  *(undefined4 *)(puVar1 + 0x34) = param_1;
  *(undefined4 *)(puVar1 + 0x40) = 0;
  return 0;
}


// 0x05554c4 (0x400 bytes)
int FUN_005554c4(uint param_1,uint param_2,undefined4 param_3,int param_4,uint param_5)

{
  uint uVar1;
  undefined4 *puVar2;
  int *piVar3;
  undefined *puVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  uint uVar8;
  byte local_80;
  byte local_7f [3];
  undefined4 *local_7c;
  GPiece<4> local_78;
  GPiece<8> local_74;
  GPiece<24> auStack_6c;
  int local_54;
  
  puVar4 = PTR_DAT_0071b294;
  if ((((PTR_DAT_0071b294[8] != '\x01') || (*(int *)(PTR_DAT_0071b294 + 0xc) == 0)) ||
      (*(int *)(PTR_DAT_0071b294 + 0x10) == 0)) ||
     ((*(int *)(PTR_DAT_0071b294 + 0x28) == 0 || (*(int *)(PTR_DAT_0071b294 + 0x1c) == 0)))) {
    return 5;
  }
  if ((param_4 == 0) || (param_5 < 2)) {
    return 2;
  }
  iVar5 = FUN_00554ccc(&local_80,local_7f,param_4);
  if (iVar5 == 0) {
    return 0x3e9;
  }
  uVar6 = (uint)local_80;
  if (*(uint *)(puVar4 + 0x14) <= uVar6) {
    return 0x3e9;
  }
  uVar8 = (uint)local_7f[0];
  uVar1 = *(uint *)(puVar4 + 0x18);
  if (uVar1 <= uVar8) {
    return 0x3e9;
  }
  if ((*(int *)(puVar4 + 0x34) == 0) || ((local_80 == 0 && (local_7f[0] == 2)))) {
    iVar7 = FUN_00554874(local_80,local_7f[0],&local_7c);
    if (iVar7 != 0) {
      return 0x3e9;
    }
    if (local_7c == (undefined4 *)0x0) {
      return 0x3e9;
    }
    piVar3 = (int *)((uVar1 * local_80 + (uint)local_7f[0]) * 4 + *(int *)(puVar4 + 0x1c));
    *piVar3 = *piVar3 + 1;
    uVar6 = param_1;
    uVar8 = param_2;
  }
  else {
    local_7c = (undefined4 *)(puVar4 + 0x38);
  }
  if (local_7c[2] == 0) {
    memcpy(*(void **)(puVar4 + 0x28),(void *)(param_4 + iVar5),param_5 - iVar5);
  }
  else {
    FUN_0055442c(auStack_6c,param_4 + iVar5,param_4 + param_5,2);
    (**(code **)local_7c[2])(auStack_6c,local_74);
    if (local_54 != 0) {
      return local_54;
    }
    iVar7 = FUN_005543a4(auStack_6c,local_78);
    if (iVar7 != 1) {
      return 0x3e9;
    }
  }
  if (*(undefined4 **)(puVar4 + 0x48) != (undefined4 *)0x0) {
    (*(code *)**(undefined4 **)(puVar4 + 0x48))
              (local_80,local_7f[0],uVar8,param_3,*(undefined4 *)(puVar4 + 0x28));
  }
  iVar7 = local_7c[1];
  if (iVar7 == 1) {
    puVar2 = (undefined4 *)*local_7c;
  }
  else {
    if (iVar7 != 0) {
      if (iVar7 != 2) {
        return 0x3e9;
      }
      iVar7 = (**(code **)*local_7c)
                        (uVar6,uVar8,param_3,*(undefined4 *)(puVar4 + 0x28),local_7c[3],local_80,
                         local_7f[0]);
      goto LAB_005556bc;
    }
    puVar2 = (undefined4 *)*local_7c;
    uVar6 = 0;
  }
  iVar7 = (*(code *)*puVar2)(uVar6,uVar8,param_3,*(undefined4 *)(puVar4 + 0x28));
LAB_005556bc:
  if (*(undefined4 **)(puVar4 + 4) != (undefined4 *)0x0) {
    (*(code *)**(undefined4 **)(puVar4 + 4))
              (local_80,local_7f[0],uVar8,param_3,*(undefined4 *)(puVar4 + 0x28),iVar7);
  }
  if (local_7c[2] != 0) {
    iVar7 = 0;
  }
  if ((-1 < iVar7) && ((uint)(iVar5 + iVar7) <= param_5)) {
    return 0;
  }
  return 0x3e9;
}


// 0x05558c4 (0x3b8 bytes)
int FUN_005558c4(undefined4 param_1,undefined4 param_2,undefined4 param_3,int param_4,uint param_5)

{
  uint uVar1;
  undefined4 *puVar2;
  int *piVar3;
  undefined *puVar4;
  int iVar5;
  int iVar6;
  byte local_70;
  byte local_6f [3];
  undefined4 *local_6c;
  GPiece<4> local_68;
  GPiece<8> local_64;
  GPiece<24> auStack_5c;
  int local_44;
  
  puVar4 = PTR_DAT_0071b294;
  if ((((PTR_DAT_0071b294[8] != '\x01') || (*(int *)(PTR_DAT_0071b294 + 0xc) == 0)) ||
      (*(int *)(PTR_DAT_0071b294 + 0x10) == 0)) ||
     ((*(int *)(PTR_DAT_0071b294 + 0x28) == 0 || (*(int *)(PTR_DAT_0071b294 + 0x1c) == 0)))) {
    return 5;
  }
  if ((param_4 == 0) || (param_5 < 2)) {
    return 2;
  }
  iVar5 = FUN_00554ccc(&local_70,local_6f,param_4);
  if (iVar5 == 0) {
    return 0x3e9;
  }
  if (*(uint *)(puVar4 + 0x14) <= (uint)local_70) {
    return 0x3e9;
  }
  uVar1 = *(uint *)(puVar4 + 0x18);
  if (uVar1 <= local_6f[0]) {
    return 0x3e9;
  }
  iVar6 = FUN_00554874(local_70,local_6f[0],&local_6c);
  if (iVar6 != 0) {
    return 0x3e9;
  }
  if (local_6c == (undefined4 *)0x0) {
    return 0x3e9;
  }
  iVar6 = local_6c[2];
  piVar3 = (int *)((int)(((longlong)(int)uVar1 * (longlong)(int)(uint)local_70 +
                          (ulonglong)local_6f[0] & 0xffffffff) << 2) + *(int *)(puVar4 + 0x1c));
  *piVar3 = *piVar3 + 1;
  if (iVar6 == 0) {
    memcpy(*(void **)(puVar4 + 0x28),(void *)(param_4 + iVar5),param_5 - iVar5);
  }
  else {
    FUN_0055442c(auStack_5c,param_4 + iVar5,param_4 + param_5,2);
    (**(code **)local_6c[2])(auStack_5c,local_64);
    if (local_44 != 0) {
      return local_44;
    }
    iVar6 = FUN_005543a4(auStack_5c,local_68);
    if (iVar6 != 1) {
      return 0x3e9;
    }
  }
  if (*(undefined4 **)(puVar4 + 0x48) != (undefined4 *)0x0) {
    (*(code *)**(undefined4 **)(puVar4 + 0x48))
              (local_70,local_6f[0],param_2,param_3,*(undefined4 *)(puVar4 + 0x28));
  }
  iVar6 = local_6c[1];
  if (iVar6 == 1) {
    puVar2 = (undefined4 *)*local_6c;
  }
  else {
    if (iVar6 != 0) {
      if (iVar6 != 2) {
        return 0x3e9;
      }
      iVar6 = (**(code **)*local_6c)
                        (param_1,param_2,param_3,*(undefined4 *)(puVar4 + 0x28),local_6c[3],local_70
                         ,local_6f[0]);
      goto LAB_00555ab8;
    }
    puVar2 = (undefined4 *)*local_6c;
    param_1 = 0;
  }
  iVar6 = (*(code *)*puVar2)(param_1,param_2,param_3,*(undefined4 *)(puVar4 + 0x28));
LAB_00555ab8:
  if (*(undefined4 **)(puVar4 + 4) != (undefined4 *)0x0) {
    (*(code *)**(undefined4 **)(puVar4 + 4))
              (local_70,local_6f[0],param_2,param_3,*(undefined4 *)(puVar4 + 0x28),iVar6);
  }
  if (local_6c[2] != 0) {
    iVar6 = 0;
  }
  if ((-1 < iVar6) && ((uint)(iVar5 + iVar6) <= param_5)) {
    return 0;
  }
  return 0x3e9;
}


// 0x0555c7c (0x198 bytes)
ulonglong FUN_00555c7c(undefined4 param_1,uint param_2,ulonglong param_3,undefined4 param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  
  puVar2 = PTR_DAT_0071b294;
  if ((0x100 < param_2) || (0x100 < (param_3 & 0xffffffff))) {
    return 2;
  }
  if (PTR_DAT_0071b294[8] == '\x01') {
    uVar3 = 0;
    *(int *)(PTR_DAT_0071b294 + 0x24) = *(int *)(PTR_DAT_0071b294 + 0x24) + 1;
  }
  else {
    puVar1 = PTR_DAT_0071b294 + 0x10;
    *(uint *)(PTR_DAT_0071b294 + 0x18) = param_2;
    *(int *)(puVar2 + 0x14) = (int)param_3;
    *(undefined4 *)(puVar2 + 0x2c) = param_1;
    *(undefined4 *)(puVar2 + 0x48) = param_4;
    uVar3 = FUN_00551de8(puVar1,(param_3 & 0x3fffffff) << 2);
    if ((int)uVar3 == 0) {
      uVar5 = (longlong)(int)param_2 * (longlong)(int)param_3;
      uVar4 = FUN_00551de8(puVar2 + 0xc,(uVar5 & 0xfffffff) << 4);
      if (uVar4 == 0) {
        uVar4 = FUN_00551de8(puVar2 + 0x28,*(int *)(puVar2 + 0x2c) * 3);
        if ((uVar4 == 0) &&
           (uVar4 = FUN_00551de8(puVar2 + 0x1c,(uVar5 & 0x3fffffff) << 2), puVar1 = PTR_PTR_0071b298
           , uVar4 == 0)) {
          puVar2[8] = 1;
          *(int *)(puVar2 + 0x24) = *(int *)(puVar2 + 0x24) + 1;
          uVar4 = FUN_00554790(2,0,puVar1);
          if (uVar4 == 0) {
            puVar2[0x30] = (char)uVar3;
            goto LAB_00555d50;
          }
        }
      }
      return uVar4 & 0xffffffff;
    }
  }
LAB_00555d50:
  return uVar3 & 0xffffffff;
}


// 0x0555e14 (0x560 bytes)
/* WARNING: Removing unreachable block (ram,0x0055623c) */
/* WARNING: Removing unreachable block (ram,0x005560f8) */
/* WARNING: Removing unreachable block (ram,0x005561fc) */
/* WARNING: Removing unreachable block (ram,0x00556108) */
/* WARNING: Removing unreachable block (ram,0x00556194) */
/* WARNING: Removing unreachable block (ram,0x00556268) */
/* WARNING: Removing unreachable block (ram,0x00556280) */
/* WARNING: Removing unreachable block (ram,0x005562b8) */
/* WARNING: Removing unreachable block (ram,0x00556200) */
/* WARNING: Removing unreachable block (ram,0x005562c0) */
/* WARNING: Removing unreachable block (ram,0x00556210) */
/* WARNING: Removing unreachable block (ram,0x005562f8) */
/* WARNING: Removing unreachable block (ram,0x00556218) */
/* WARNING: Removing unreachable block (ram,0x00556330) */
/* WARNING: Removing unreachable block (ram,0x0055629c) */
/* WARNING: Removing unreachable block (ram,0x005562a8) */
/* WARNING: Removing unreachable block (ram,0x005561b0) */
/* WARNING: Removing unreachable block (ram,0x005561bc) */

int FUN_00555e14(int param_1,int param_2,int param_3,int param_4)

{
  int *piVar1;
  undefined *puVar2;
  int iVar3;
  int iVar4;
  int *piVar5;
  int *piVar6;
  longlong lVar7;
  GPiece<8> auStack_a0;
  GPiece<12> local_98;
  char local_8c;
  char local_8b;
  ushort local_8a;
  ushort local_88;
  byte local_84;
  int local_80;
  int local_7c;
  GPiece<48> auStack_78;
  
  iVar3 = 2;
  if (param_4 != 0) {
    FUN_0055442c(auStack_78,param_4,(void *)(param_4 + 0x14),2);
    FUN_00554ef8(auStack_78,&local_8c);
    FUN_005543a4(auStack_78,auStack_a0);
    puVar2 = PTR_DAT_0071b294;
    piVar1 = *(int **)(PTR_DAT_0071b294 + 0x20);
    if ((piVar1 != (int *)0x0) ||
       ((iVar3 = FUN_00551de8(PTR_DAT_0071b294 + 0x20,0x3400), iVar3 == 0 &&
        (piVar1 = *(int **)(puVar2 + 0x20), piVar1 != (int *)0x0)))) {
      piVar5 = piVar1 + 8;
      lVar7 = 0x100;
      piVar6 = piVar1;
      iVar3 = -1;
      iVar4 = 0;
LAB_00555f14:
      do {
        if (*piVar6 == 0) {
          if (iVar3 == -1) {
            piVar6 = piVar6 + 0xd;
            piVar5 = piVar5 + 0xd;
            lVar7 = lVar7 + -1;
            iVar3 = iVar4;
            iVar4 = iVar4 + 1;
            if (lVar7 == 0) break;
            goto LAB_00555f14;
          }
        }
        else if (((((piVar6[6] == param_1) && (piVar6[7] == param_2)) && (*piVar5 == param_3)) &&
                 ((piVar6[2] == (uint)local_84 && (piVar6[1] == (uint)local_88)))) &&
                ((piVar6[3] == local_80 &&
                 ((*(char *)(piVar5 + 3) == local_8c && (*(char *)((int)piVar5 + 0xd) == local_8b)))
                 ))) goto LAB_00555fe0;
        iVar4 = iVar4 + 1;
        piVar6 = piVar6 + 0xd;
        piVar5 = piVar5 + 0xd;
        lVar7 = lVar7 + -1;
      } while (lVar7 != 0);
      if (iVar3 != -1) {
        piVar6 = piVar1 + iVar3 * 0xd;
        piVar6[0xb] = 0;
        piVar6[1] = 0;
        piVar6[2] = 0;
        piVar6[3] = 0;
        piVar6[0xc] = 0;
        piVar6[4] = 0;
        piVar6[5] = 0;
        piVar6[9] = 0;
        piVar6[10] = 0;
        *piVar6 = 1;
        piVar6[7] = param_2;
        piVar6[8] = param_3;
        piVar6[6] = param_1;
        *(char *)(piVar6 + 0xb) = local_8c;
        *(char *)((int)piVar6 + 0x2d) = local_8b;
        piVar6[1] = (uint)local_88;
        piVar6[2] = (uint)local_84;
        piVar6[3] = local_80;
        FUN_00551de8(piVar6 + 0xc,local_80);
        if (piVar6[0xc] == 0) {
          FUN_005519f0(piVar6 + 0xc);
          *piVar6 = 0;
        }
        else {
LAB_00555fe0:
          memcpy((void *)(piVar6[0xc] + local_7c),(void *)(param_4 + 0x14),(uint)local_8a);
          piVar6[4] = piVar6[4] + (uint)local_8a;
          piVar6[5] = piVar6[5] + 1;
          thunk_FUN_00556a58(piVar6 + 9);
          if (piVar6[5] == piVar6[1]) {
            FUN_00554874(*(undefined1 *)(piVar6 + 0xb),*(undefined1 *)((int)piVar6 + 0x2d),local_98)
            ;
            FUN_005519f0(piVar6 + 0xc);
            *piVar6 = 0;
          }
        }
      }
    }
    iVar3 = local_8a + 0x14;
  }
  return iVar3;
}


// 0x0556374 (0x4c bytes)
char * FUN_00556374(char *param_1,char *param_2,uint param_3)

{
  char cVar1;
  char *pcVar2;
  char *pcVar3;
  ulonglong uVar4;
  
  if (param_3 != 0) {
    uVar4 = (ulonglong)param_3 + 1 & 0xffffffff;
    pcVar2 = param_1;
    do {
      pcVar3 = pcVar2;
      cVar1 = *param_2;
      param_2 = param_2 + 1;
      *pcVar3 = cVar1;
      if (cVar1 == '\0') break;
      uVar4 = uVar4 - 1;
      pcVar2 = pcVar3 + 1;
    } while (uVar4 != 0);
    *pcVar3 = '\0';
  }
  return param_1;
}


// 0x05563c0 (0x3c bytes)
char * FUN_005563c0(char *param_1,char *param_2,uint param_3)

{
  char cVar1;
  char *pcVar2;
  ulonglong uVar3;
  
  if (param_3 != 0) {
    uVar3 = (ulonglong)param_3 + 1 & 0xffffffff;
    pcVar2 = param_1;
    do {
      cVar1 = *param_2;
      param_2 = param_2 + 1;
      *pcVar2 = cVar1;
      pcVar2 = pcVar2 + 1;
      if (cVar1 == '\0') {
        return param_1;
      }
      uVar3 = uVar3 - 1;
    } while (uVar3 != 0);
  }
  return param_1;
}


// 0x05563fc (0x34 bytes)
int FUN_005563fc(char *param_1)

{
  char *pcVar1;
  int iVar2;
  
  iVar2 = 0;
  if ((param_1 != (char *)0x0) && (pcVar1 = param_1, *param_1 != '\0')) {
    do {
      pcVar1 = pcVar1 + 1;
    } while (*pcVar1 != '\0');
    iVar2 = (int)pcVar1 - (int)param_1;
  }
  return iVar2;
}


// 0x0556430 (0x18c bytes)
char * FUN_00556430(char *param_1,char *param_2)

{
  char cVar1;
  char cVar2;
  undefined *puVar3;
  int iVar4;
  char cVar5;
  char *pcVar6;
  char *pcVar7;
  
  puVar3 = PTR_DAT_0071b29c;
  if (param_1 == (char *)0x0) {
    param_1 = *(char **)PTR_DAT_0071b29c;
  }
  cVar5 = *param_1;
  iVar4 = 0;
  if (cVar5 != '\0') {
    cVar1 = *param_2;
    iVar4 = 0;
    pcVar7 = param_2;
    cVar2 = cVar1;
    if (cVar1 == '\0') {
      iVar4 = 0;
    }
    else {
      do {
        while (cVar2 == cVar5) {
          iVar4 = iVar4 + 1;
          cVar5 = param_1[iVar4];
          pcVar7 = param_2;
          cVar2 = cVar1;
          if (cVar5 == '\0') goto LAB_005564ac;
        }
        pcVar7 = pcVar7 + 1;
        cVar2 = *pcVar7;
      } while (cVar2 != '\0');
    }
  }
LAB_005564ac:
  param_1 = param_1 + iVar4;
  cVar5 = *param_1;
  pcVar7 = param_1;
  pcVar6 = param_2;
  if (cVar5 == '\0') {
    *(char **)PTR_DAT_0071b29c = param_1;
    return (char *)0x0;
  }
  do {
    while( true ) {
      cVar1 = *pcVar6;
      pcVar6 = pcVar6 + 1;
      if (cVar1 != '\0') break;
      pcVar7 = pcVar7 + 1;
      cVar5 = *pcVar7;
      pcVar6 = param_2;
      if (cVar5 == '\0') {
        iVar4 = FUN_005563fc();
        *(char **)puVar3 = param_1 + iVar4;
        return param_1;
      }
    }
  } while (cVar5 != cVar1);
  *pcVar7 = '\0';
  *(char **)puVar3 = pcVar7 + 1;
  return param_1;
}


// 0x05565bc (0x60 bytes)
int FUN_005565bc(char *param_1,int param_2)

{
  int iVar1;
  char *pcVar2;
  
  iVar1 = 0;
  if (param_1 != (char *)0x0) {
    if ((param_1 < param_1 + param_2) && (*param_1 != '\0')) {
      iVar1 = (int)(param_1 + param_2) - (int)param_1;
      pcVar2 = param_1;
      do {
        pcVar2 = pcVar2 + 1;
        iVar1 = iVar1 + -1;
        if (iVar1 == 0) break;
      } while (*pcVar2 != '\0');
      iVar1 = (int)pcVar2 - (int)param_1;
    }
    else {
      iVar1 = 0;
    }
  }
  return iVar1;
}


// 0x055661c (0xb0 bytes)
char * FUN_0055661c(int *param_1,char *param_2)

{
  char *pcVar1;
  char cVar2;
  char cVar3;
  char *pcVar4;
  char *pcVar5;
  char *pcVar6;
  
  pcVar4 = (char *)*param_1;
  pcVar5 = (char *)0x0;
  if ((pcVar4 != (char *)0x0) && (pcVar5 = pcVar4, param_2 != (char *)0x0)) {
    cVar2 = *pcVar4;
    pcVar6 = pcVar4;
    while (cVar2 != '\0') {
      cVar3 = *param_2;
      pcVar1 = param_2;
      while (cVar3 != '\0') {
        if (cVar3 == cVar2) {
          *pcVar6 = '\0';
          *param_1 = *param_1 + 1;
          return pcVar4;
        }
        pcVar1 = pcVar1 + 1;
        cVar3 = *pcVar1;
      }
      pcVar6 = pcVar6 + 1;
      *param_1 = (int)pcVar6;
      cVar2 = *pcVar6;
    }
    *param_1 = 0;
  }
  return pcVar5;
}


// 0x05566cc (0xd8 bytes)
undefined8 FUN_005566cc(uint *param_1,uint *param_2,int *param_3)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  
  if (((param_1 != (uint *)0x0) && (param_2 != (uint *)0x0)) && (param_3 != (int *)0x0)) {
    uVar1 = *param_1;
    uVar2 = *param_2;
    if (uVar1 == uVar2) {
      if (param_1[1] <= param_2[1]) {
        param_3[1] = param_2[1] - param_1[1];
        *param_3 = 0;
        return 0;
      }
    }
    else if (uVar1 < uVar2) {
      uVar3 = param_2[1];
      uVar4 = param_1[1];
      if (uVar4 <= uVar3) {
        param_3[1] = uVar3 - uVar4;
        *param_3 = uVar2 - uVar1;
        return 0;
      }
      param_3[1] = 1000000 - (uVar4 - uVar3);
      *param_3 = (uVar2 - uVar1) + -1;
      return 0;
    }
    param_3[1] = 0;
    *param_3 = 0;
    return 0;
  }
  return 2;
}


// 0x05567a4 (0x54 bytes)
undefined8 FUN_005567a4(int *param_1,int *param_2,int *param_3)

{
  int iVar1;
  
  iVar1 = (param_2[1] - param_1[1]) / 1000 + (*param_2 - *param_1) * 1000;
  *param_3 = iVar1;
  if (-1 < iVar1) {
    return 0;
  }
  *param_3 = 0;
  return 0;
}


// 0x05567f8 (0x38 bytes)
undefined8 FUN_005567f8(int *param_1,int *param_2,int *param_3)

{
  *param_3 = (param_2[1] - param_1[1]) + (*param_2 - *param_1) * 1000000;
  return 0;
}


// 0x0556830 (0x48 bytes)
undefined8 FUN_00556830(int *param_1,int *param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  uVar2 = 2;
  if ((param_1 != (int *)0x0) && (param_2 != (int *)0x0)) {
    iVar1 = *param_1;
    uVar2 = 0;
    *param_2 = iVar1;
    *param_2 = iVar1 + (uint)param_1[1] / 1000000;
  }
  return uVar2;
}


// 0x0556878 (0x60 bytes)
undefined8 FUN_00556878(uint *param_1,int *param_2)

{
  undefined8 uVar1;
  
  uVar1 = 2;
  if ((param_1 != (uint *)0x0) && (param_2 != (int *)0x0)) {
    uVar1 = 0x641;
    if (*param_1 < 0x418936) {
      uVar1 = 0;
      *param_2 = *param_1 * 1000 + param_1[1] / 1000;
    }
  }
  return uVar1;
}


// 0x05568d8 (0x50 bytes)
undefined8 FUN_005568d8(uint *param_1,int *param_2)

{
  undefined8 uVar1;
  
  uVar1 = 2;
  if ((param_1 != (uint *)0x0) && (param_2 != (int *)0x0)) {
    uVar1 = 0x641;
    if (*param_1 < 0x10c5) {
      uVar1 = 0;
      *param_2 = *param_1 * 1000000 + param_1[1];
    }
  }
  return uVar1;
}


// 0x0556928 (0x28 bytes)
undefined4 FUN_00556928(void)

{
  undefined4 uVar1;
  
  uVar1 = FUN_005571d8();
  return uVar1;
}


// 0x0556950 (0x28 bytes)
undefined4 FUN_00556950(void)

{
  undefined4 uVar1;
  
  uVar1 = FUN_00557270();
  return uVar1;
}


// 0x0556978 (0x28 bytes)
undefined4 FUN_00556978(void)

{
  undefined4 uVar1;
  
  uVar1 = FUN_00557308();
  return uVar1;
}


// 0x05569a0 (0x68 bytes)
undefined * FUN_005569a0(void)

{
  undefined *puVar1;
  int iVar2;
  
  puVar1 = PTR_DAT_0071b2a0;
  iVar2 = FUN_00556978(PTR_DAT_0071b2a0);
  if (iVar2 != 0) {
    puVar1[8] = 0;
    *(undefined8 *)puVar1 = 0x30303a30303a3030;
  }
  return puVar1;
}


// 0x0556a08 (0x28 bytes)
undefined4 FUN_00556a08(void)

{
  undefined4 uVar1;
  
  uVar1 = FUN_00556fe0();
  return uVar1;
}


// 0x0556a30 (0x28 bytes)
undefined4 FUN_00556a30(void)

{
  undefined4 uVar1;
  
  uVar1 = FUN_00556fd8();
  return uVar1;
}


// 0x0556a58 (0x28 bytes)
undefined4 FUN_00556a58(void)

{
  undefined4 uVar1;
  
  uVar1 = FUN_00557148();
  return uVar1;
}


// 0x0556a80 (0xa4 bytes)
int FUN_00556a80(int param_1,int param_2)

{
  int iVar1;
  GPiece<24> auStack_30;
  
  iVar1 = 2;
  if ((param_1 != 0) && (param_2 != 0)) {
    iVar1 = FUN_00556a58(auStack_30);
    if (iVar1 == 0) {
      iVar1 = FUN_005566cc(param_1,auStack_30,param_2);
      return iVar1;
    }
  }
  return iVar1;
}


// 0x0556b24 (0x94 bytes)
int FUN_00556b24(int param_1,int param_2)

{
  int iVar1;
  GPiece<16> auStack_20;
  
  iVar1 = 2;
  if (param_1 != 0) {
    if (param_2 != 0) {
      iVar1 = FUN_00556a80(param_1,auStack_20);
      if (iVar1 == 0) {
        iVar1 = FUN_005568d8(auStack_20,param_2);
        return iVar1;
      }
    }
  }
  return iVar1;
}


// 0x0556bb8 (0x94 bytes)
int FUN_00556bb8(int param_1,int param_2)

{
  int iVar1;
  GPiece<16> auStack_20;
  
  iVar1 = 2;
  if (param_1 != 0) {
    if (param_2 != 0) {
      iVar1 = FUN_00556a80(param_1,auStack_20);
      if (iVar1 == 0) {
        iVar1 = FUN_00556878(auStack_20,param_2);
        return iVar1;
      }
    }
  }
  return iVar1;
}


// 0x0556c4c (0x4 bytes)
int thunk_FUN_00556bb8(int param_1,int param_2)

{
  int iVar1;
  GPiece<16> auStack_20;
  
  iVar1 = 2;
  if (param_1 != 0) {
    if (param_2 != 0) {
      iVar1 = FUN_00556a80(param_1,auStack_20);
      if (iVar1 == 0) {
        iVar1 = FUN_00556878(auStack_20,param_2);
        return iVar1;
      }
    }
  }
  return iVar1;
}


// 0x0556c50 (0x94 bytes)
int FUN_00556c50(int param_1,int param_2)

{
  int iVar1;
  GPiece<16> auStack_20;
  
  iVar1 = 2;
  if (param_1 != 0) {
    if (param_2 != 0) {
      iVar1 = FUN_00556a80(param_1,auStack_20);
      if (iVar1 == 0) {
        iVar1 = FUN_00556830(auStack_20,param_2);
        return iVar1;
      }
    }
  }
  return iVar1;
}


// 0x0556ce4 (0x70 bytes)
int FUN_00556ce4(void)

{
  undefined *puVar1;
  int iVar2;
  
  puVar1 = PTR_DAT_0071b2a0;
  iVar2 = 1;
  if ((PTR_DAT_0071b2a0[9] != '\0') && (iVar2 = FUN_00556a58(PTR_DAT_0071b2a0 + 0xc), iVar2 == 0)) {
    puVar1[9] = 1;
    return 0;
  }
  return iVar2;
}


// 0x0556d54 (0x5c bytes)
int FUN_00556d54(void)

{
  undefined *puVar1;
  int iVar2;
  
  puVar1 = PTR_DAT_0071b2a0;
  iVar2 = 0x640;
  if (PTR_DAT_0071b2a0[9] != '\x01') {
    FUN_00556fd0();
    iVar2 = FUN_00556a58(puVar1 + 0xc);
    if (iVar2 == 0) {
      puVar1[9] = 1;
    }
  }
  return iVar2;
}


// 0x0556db0 (0x7c bytes)
ulonglong FUN_00556db0(int param_1)

{
  undefined *puVar1;
  ulonglong uVar2;
  uint uVar3;
  
  puVar1 = PTR_DAT_0071b2a0;
  uVar3 = 2;
  if ((param_1 != 0) && ((PTR_DAT_0071b2a0[9] != '\0' || (uVar3 = FUN_00556d54(), uVar3 == 0)))) {
    uVar2 = FUN_00556a80(puVar1 + 0xc,param_1);
    return uVar2;
  }
  return (ulonglong)uVar3;
}


// 0x0556e2c (0x88 bytes)
int FUN_00556e2c(int param_1)

{
  int iVar1;
  GPiece<16> auStack_20;
  
  iVar1 = 2;
  if (param_1 != 0) {
    iVar1 = FUN_00556db0(auStack_20);
    if (iVar1 == 0) {
      iVar1 = FUN_00556830(auStack_20,param_1);
      return iVar1;
    }
  }
  return iVar1;
}


// 0x0556eb4 (0x88 bytes)
int FUN_00556eb4(int param_1)

{
  int iVar1;
  GPiece<16> auStack_20;
  
  iVar1 = 2;
  if (param_1 != 0) {
    iVar1 = FUN_00556db0(auStack_20);
    if (iVar1 == 0) {
      iVar1 = FUN_00556878(auStack_20,param_1);
      return iVar1;
    }
  }
  return iVar1;
}


// 0x0556f3c (0x4 bytes)
int thunk_FUN_00556eb4(int param_1)

{
  int iVar1;
  GPiece<16> auStack_20;
  
  iVar1 = 2;
  if (param_1 != 0) {
    iVar1 = FUN_00556db0(auStack_20);
    if (iVar1 == 0) {
      iVar1 = FUN_00556878(auStack_20,param_1);
      return iVar1;
    }
  }
  return iVar1;
}


// 0x0556f40 (0x4 bytes)
undefined4 thunk_FUN_00556a58(void)

{
  undefined4 uVar1;
  
  uVar1 = FUN_00557148();
  return uVar1;
}


// 0x0556f44 (0x8c bytes)
ulonglong FUN_00556f44(int param_1)

{
  ulonglong uVar1;
  ulonglong uVar2;
  GPiece<4> local_30;
  GPiece<12> auStack_2c;
  
  uVar1 = thunk_FUN_00556a58(auStack_2c);
  uVar2 = uVar1;
  if ((int)uVar1 == 0) {
    do {
      uVar2 = uVar1;
      if (param_1 == 0) break;
      uVar2 = thunk_FUN_00556bb8(auStack_2c,local_30);
    } while (uVar2 == 0);
  }
  return uVar2 & 0xffffffff;
}


// 0x0556fd0 (0x8 bytes)
undefined8 FUN_00556fd0(void)

{
  return 0;
}


// 0x0556fd8 (0x8 bytes)
undefined8 FUN_00556fd8(void)

{
  return 7;
}


// 0x0556fe0 (0x20 bytes)
undefined8 FUN_00556fe0(void)

{
  syscall_sys_timer_usleep();
  return 0;
}


// 0x0557000 (0xa4 bytes)
undefined8 FUN_00557000(uint *param_1,int *param_2)

{
  int iVar1;
  longlong lVar2;
  
  lVar2 = sys_time_get_system_time();
  iVar1 = (int)((longlong)(lVar2 - ((ulonglong)*param_1 * 1000000 + (ulonglong)param_1[1])) / 1000);
  *param_2 = iVar1;
  if (iVar1 < 0) {
    *param_2 = 0;
  }
  return 0;
}


// 0x05570a4 (0xa4 bytes)
undefined8 FUN_005570a4(uint *param_1,int *param_2)

{
  int iVar1;
  longlong lVar2;
  
  lVar2 = sys_time_get_system_time();
  iVar1 = (int)((longlong)(lVar2 - ((ulonglong)*param_1 * 1000000 + (ulonglong)param_1[1])) /
               1000000);
  *param_2 = iVar1;
  if (iVar1 < 0) {
    *param_2 = 0;
  }
  return 0;
}


// 0x0557148 (0x90 bytes)
undefined8 FUN_00557148(undefined4 *param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  
  uVar2 = 2;
  if (param_1 != (undefined4 *)0x0) {
    lVar1 = sys_time_get_system_time();
    uVar2 = 0;
    *param_1 = (int)(lVar1 / 1000000);
    param_1[1] = (int)lVar1 + (int)((lVar1 / 1000000) * 0x3d09) * -0x40;
  }
  return uVar2;
}


// 0x05571d8 (0x98 bytes)
undefined8 FUN_005571d8(undefined4 *param_1)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  undefined8 uVar3;
  GPiece<16> local_20;
  
  uVar3 = 2;
  if (param_1 != (undefined4 *)0x0) {
    puVar2 = (undefined4 *)FUN_005c58b0(local_20);
    uVar3 = 0;
    param_1[6] = puVar2[5];
    param_1[5] = puVar2[4];
    param_1[4] = puVar2[3];
    param_1[3] = puVar2[2];
    param_1[2] = puVar2[1];
    param_1[1] = *puVar2;
    uVar1 = puVar2[6];
    param_1[8] = 0;
    param_1[7] = uVar1;
    *param_1 = 0;
  }
  return uVar3;
}


// 0x0557270 (0x98 bytes)
undefined8 FUN_00557270(undefined4 *param_1)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  undefined8 uVar3;
  GPiece<16> local_20;
  
  uVar3 = 2;
  if (param_1 != (undefined4 *)0x0) {
    puVar2 = (undefined4 *)FUN_005c58b0(local_20);
    uVar3 = 0;
    param_1[6] = puVar2[5] + 0x76c;
    param_1[5] = puVar2[4] + 1;
    param_1[4] = puVar2[3];
    param_1[3] = puVar2[2];
    param_1[2] = puVar2[1];
    uVar1 = *puVar2;
    param_1[8] = 0;
    param_1[1] = uVar1;
    *param_1 = 0;
  }
  return uVar3;
}


// 0x0557308 (0x7c bytes)
// strings: 0067d1e0: '%02d:%02d:%02d'

undefined8 FUN_00557308(char *param_1)

{
  undefined8 uVar1;
  undefined4 *puVar2;
  GPiece<24> local_20;
  
  uVar1 = 2;
  if (param_1 != (char *)0x0) {
    puVar2 = (undefined4 *)FUN_005c58b0(local_20);
    snprintf(param_1,PTR_s__02d__02d__02d_0071b2a4,puVar2[2],puVar2[1],*puVar2);
    uVar1 = 0;
  }
  return uVar1;
}


// 0x0557384 (0x5c bytes)
undefined8 FUN_00557384(void)

{
  undefined *puVar1;
  
  puVar1 = PTR_DAT_0071b2a8;
  memset(PTR_DAT_0071b2a8,0,0x19c);
  *(undefined4 *)(puVar1 + 0x1a8) = 0;
  *(undefined4 *)(puVar1 + 0x1a4) = 0;
  *(undefined4 *)(puVar1 + 0x1a0) = 0;
  *(undefined4 *)(puVar1 + 0x19c) = 0;
  return 0;
}


// 0x05573e0 (0x5c bytes)
void FUN_005573e0(void)

{
  undefined *puVar1;
  
  puVar1 = PTR_DAT_0071b2a8;
  if (*(int *)(PTR_DAT_0071b2a8 + 0x1ac) == 0) {
    memset(PTR_DAT_0071b2a8,0,0x19c);
    *(undefined4 *)(puVar1 + 0x1ac) = 1;
  }
  thunk_FUN_00556a58(puVar1 + 0x19c);
  return;
}


// 0x055743c (0x74 bytes)
void FUN_0055743c(undefined4 *param_1)

{
  undefined *puVar1;
  uint local_30 [6];
  
  puVar1 = PTR_DAT_0071b2a8 + 0x19c;
  *param_1 = 0;
  FUN_00557000(puVar1,local_30);
  if (2999 < local_30[0]) {
    *param_1 = 1;
    thunk_FUN_00556a58(puVar1);
  }
  return;
}


// 0x05574b0 (0x44 bytes)
void FUN_005574b0(undefined4 param_1)

{
  undefined *puVar1;
  
  puVar1 = PTR_DAT_0071b2a8;
  thunk_FUN_00556eb4(PTR_DAT_0071b2a8 + 0x1a4);
  *(undefined4 *)(puVar1 + 0x1a8) = param_1;
  return;
}


// 0x05574f4 (0x1a8 bytes)
undefined8 FUN_005574f4(longlong param_1,longlong param_2)

{
  int iVar1;
  uint uVar2;
  ulonglong uVar3;
  undefined *__src;
  uint uVar4;
  undefined8 uVar5;
  uint uVar6;
  uint *puVar7;
  ulonglong uVar8;
  uint auStack_1b0 [100];
  
  __src = PTR_DAT_0071b2a8;
  uVar5 = 1;
  if (*(int *)(PTR_DAT_0071b2a8 + 0x1ac) != 0) {
    iVar1 = *(int *)(PTR_DAT_0071b2a8 + 0x194);
    uVar3 = (ulonglong)(param_1 << 0x20) >> 0x21;
    uVar4 = *(uint *)(PTR_DAT_0071b2a8 + 400);
    *(uint *)(PTR_DAT_0071b2a8 + iVar1 * 4) = (uint)param_1 >> 1;
    if (uVar4 < 100) {
      *(uint *)(__src + 400) = uVar4 + 1;
    }
    uVar4 = iVar1 + 1;
    if (99 < uVar4) {
      uVar4 = 0;
    }
    *(uint *)(__src + 0x194) = uVar4;
    memcpy(auStack_1b0,__src,400);
    uVar4 = *(uint *)(__src + 400);
    uVar6 = uVar4;
    while (uVar6 = uVar6 - 1, uVar6 != 0) {
      uVar8 = (ulonglong)uVar6;
      puVar7 = auStack_1b0;
      if (uVar6 == 0) {
        uVar8 = 1;
      }
      do {
        uVar2 = puVar7[1];
        if (uVar2 < *puVar7) {
          puVar7[1] = *puVar7;
          *puVar7 = uVar2;
        }
        uVar8 = uVar8 - 1;
        puVar7 = puVar7 + 1;
      } while (uVar8 != 0);
    }
    if (uVar4 / 0x14 == 0) {
      uVar8 = (ulonglong)auStack_1b0[1];
    }
    else {
      uVar8 = (ulonglong)auStack_1b0[uVar4 / 0x14];
    }
    uVar5 = 0;
    if (uVar3 <= uVar8) {
      FUN_005574b0(uVar3 + param_2 & 0xffffffff);
      return 0;
    }
  }
  return uVar5;
}


// 0x055769c (0x28 bytes)
undefined4 FUN_0055769c(void)

{
  undefined4 uVar1;
  
  uVar1 = thunk_FUN_00556eb4();
  return uVar1;
}


// 0x05576c4 (0x54 bytes)
undefined4 FUN_005576c4(int *param_1)

{
  undefined4 uVar1;
  int local_30 [6];
  
  uVar1 = thunk_FUN_00556eb4(local_30);
  *param_1 = (local_30[0] - *(int *)(PTR_DAT_0071b2a8 + 0x1a4)) + *(int *)(PTR_DAT_0071b2a8 + 0x1a8)
  ;
  return uVar1;
}


// 0x0557718 (0x1c bytes)
bool FUN_00557718(uint param_1)

{
  return param_1 < 0xffff;
}


// 0x0557734 (0x40 bytes)
void FUN_00557734(int param_1,undefined2 param_2,int *param_3)

{
  int iVar1;
  
  if (param_3 == (int *)0x0) {
    return;
  }
  if (param_3[1] == 0) {
    return;
  }
  if (param_3[2] == 0) {
    return;
  }
  iVar1 = *param_3;
  *(undefined2 *)(param_1 * 4 + param_3[2]) = param_2;
  *param_3 = iVar1 + 1;
  return;
}


// 0x0557774 (0x218 bytes)
undefined8
FUN_00557774(void *param_1,uint param_2,size_t *param_3,char param_4,uint param_5,byte param_6,
            void *param_7,void *param_8)

{
  size_t __n;
  undefined1 *puVar1;
  undefined1 *__dest;
  uint in_stack_00000074;
  char local_250;
  byte local_24f;
  GPiece<2> auStack_24e;
  GPiece<508> auStack_24c;
  
  if (((((1 < (byte)(param_4 - 0xbU)) && (param_4 != '\x0e')) && (param_4 != '\r')) &&
      ((param_4 != '\x04' && (param_4 != '\x05')))) && (param_4 != '\x06')) {
    return 2;
  }
  local_250 = param_4;
  if (param_5 == 0) {
    puVar1 = auStack_24e;
    local_24f = param_6;
    memcpy(puVar1,param_7,(uint)param_6);
    __n = param_6 + 2;
  }
  else {
    local_24f = param_6 | 0x80;
    puVar1 = auStack_24c;
    FUN_00551f78(auStack_24e,param_5 & 0xffff);
    memcpy(puVar1,param_7,(uint)param_6);
    __n = param_6 + 4;
  }
  if (param_4 == '\v') {
    if (param_8 == (void *)0x0) {
      return 2;
    }
    if (in_stack_00000074 == 0) {
      return 2;
    }
    puVar1 = puVar1 + param_6;
    __dest = puVar1;
    if (1 < in_stack_00000074) {
      __dest = puVar1 + 2;
      __n = __n + 2;
      FUN_00551f78(puVar1,in_stack_00000074 & 0xffff);
    }
    __n = __n + in_stack_00000074 * 2;
    if (param_2 <= __n) {
      return 2;
    }
    memcpy(__dest,param_8,in_stack_00000074 * 2);
  }
  if ((__n <= param_2) && (param_1 != (void *)0x0)) {
    memcpy(param_1,&local_250,__n);
    *param_3 = __n;
    return 0;
  }
  return 2;
}


// 0x055798c (0x15c bytes)
undefined8
FUN_0055798c(void *param_1,uint param_2,uint *param_3,int param_4,undefined2 param_5,
            undefined2 param_6)

{
  uint __n;
  char local_230;
  GPiece<2> auStack_22f;
  GPiece<509> auStack_22d;
  
  local_230 = (char)param_4;
  if ((param_4 - 1U & 0xff) < 3) {
    FUN_00551f78(auStack_22f,param_5);
    __n = 3;
    if (param_4 != 7) goto LAB_005579f4;
  }
  else {
    if (local_230 != '\a') {
      if (((local_230 != '\b') && (local_230 != '\n')) && (local_230 != '\t')) {
        return 2;
      }
      __n = 3;
      FUN_00551f78(auStack_22f,param_5);
      goto LAB_005579f4;
    }
    FUN_00551f78(auStack_22f,param_5);
  }
  __n = 5;
  FUN_00551f78(auStack_22d,param_6);
LAB_005579f4:
  if ((__n <= param_2) && (param_1 != (void *)0x0)) {
    memcpy(param_1,&local_230,__n);
    *param_3 = __n;
    return 0;
  }
  return 2;
}


// 0x0557ae8 (0x5c bytes)
void FUN_00557ae8(undefined4 *param_1)

{
  if (param_1 != (undefined4 *)0x0) {
    if (param_1[2] != 0) {
      FUN_005519f0(param_1 + 2);
    }
    param_1[2] = 0;
    *param_1 = 0;
    param_1[1] = 0;
  }
  return;
}


// 0x0557b44 (0x50 bytes)
void FUN_00557b44(int param_1,int *param_2)

{
  int iVar1;
  short *psVar2;
  
  psVar2 = (short *)(param_1 * 4 + param_2[2]);
  if (*psVar2 == -1) {
    return;
  }
  iVar1 = *param_2;
  psVar2[1] = 0;
  *param_2 = iVar1 + -1;
  *psVar2 = -1;
  if (iVar1 + -1 != 0) {
    return;
  }
  FUN_00557ae8(param_2);
  return;
}


// 0x0557b94 (0x58 bytes)
void FUN_00557b94(int *param_1)

{
  if (*param_1 != 0) {
    FUN_00557ae8(*param_1);
    FUN_005519f0(param_1);
    *param_1 = 0;
  }
  return;
}


// 0x0557bec (0xdc bytes)
undefined8 FUN_00557bec(uint param_1,int param_2)

{
  int iVar2;
  undefined8 uVar1;
  undefined2 *puVar3;
  uint uVar4;
  ulonglong uVar5;
  
  if ((param_2 == 0) || (0xffff < param_1)) {
    uVar1 = 2;
  }
  else {
    uVar4 = (param_1 & 0xfffffff0) + 0x10;
    *(uint *)(param_2 + 4) = uVar4;
    if (0xffff < uVar4) {
      *(undefined4 *)(param_2 + 4) = 0xffff;
    }
    FUN_005519f0(param_2 + 8);
    iVar2 = FUN_00551de8(param_2 + 8,((ulonglong)*(uint *)(param_2 + 4) & 0x3fffffff) << 2);
    uVar1 = 100;
    if (iVar2 == 0) {
      if (*(uint *)(param_2 + 4) != 0) {
        uVar5 = (ulonglong)*(uint *)(param_2 + 4);
        puVar3 = *(undefined2 **)(param_2 + 8);
        do {
          *puVar3 = 0xffff;
          uVar5 = uVar5 - 1;
          puVar3 = puVar3 + 2;
        } while (uVar5 != 0);
      }
      uVar1 = 0;
    }
  }
  return uVar1;
}


// 0x0557cc8 (0x128 bytes)
undefined8 FUN_00557cc8(undefined4 param_1,int param_2)

{
  size_t __n;
  undefined8 uVar1;
  int iVar2;
  void *local_40 [4];
  
  uVar1 = 2;
  if (param_2 != 0) {
    iVar2 = FUN_00551de8(local_40,((ulonglong)*(uint *)(param_2 + 4) & 0x3fffffff) << 2);
    if (iVar2 == 0) {
      __n = *(int *)(param_2 + 4) << 2;
      memcpy(local_40[0],*(void **)(param_2 + 8),__n);
      FUN_005519f0(param_2 + 8);
      iVar2 = FUN_00557bec(param_1,param_2);
      if (iVar2 == 0) {
        memcpy(*(void **)(param_2 + 8),local_40[0],__n);
        FUN_005519f0(local_40);
        return 0;
      }
    }
    uVar1 = 100;
  }
  return uVar1;
}


// 0x0557df0 (0x94 bytes)
undefined8 FUN_00557df0(int *param_1)

{
  undefined4 *puVar1;
  longlong lVar2;
  undefined8 uVar3;
  
  uVar3 = 0xdac3;
  if (*param_1 == 0) {
    lVar2 = FUN_00551de8(param_1,0xc);
    uVar3 = 100;
    if (lVar2 == 0) {
      puVar1 = (undefined4 *)*param_1;
      puVar1[2] = 0;
      *puVar1 = 0;
      puVar1[1] = 0;
      return 0;
    }
  }
  return uVar3;
}


// 0x0557e84 (0x214 bytes)
undefined8
FUN_00557e84(int param_1,int param_2,uint param_3,short *param_4,uint param_5,int param_6)

{
  bool bVar1;
  int iVar3;
  undefined8 uVar2;
  short *psVar4;
  short sVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  int iStack00000058;
  
  iStack00000058 = param_6;
  if (param_6 == 0) {
    FUN_00557df0(&stack0x00000058);
  }
  uVar6 = (param_2 * 8 + param_3) - 1;
  if (0xffff < uVar6) {
    uVar6 = 0xffff;
  }
  if (((*(int *)(iStack00000058 + 4) == 0) &&
      (iVar3 = FUN_00557bec(uVar6,iStack00000058), iVar3 != 0)) ||
     ((*(uint *)(iStack00000058 + 4) <= uVar6 && (iVar3 = FUN_00557cc8(uVar6), iVar3 != 0)))) {
    uVar2 = 100;
  }
  else {
    sVar5 = 0;
    if (param_5 == 1) {
      sVar5 = *param_4;
    }
    uVar6 = 0;
    iVar3 = 0;
    if (param_2 != 0) {
      do {
        uVar8 = 0;
        uVar7 = param_3;
        do {
          if ((1 << (uVar8 & 0x3f) & (uint)*(byte *)(iVar3 + param_1)) != 0) {
            if (1 < param_5) {
              sVar5 = param_4[uVar6 & 0xffff];
            }
            psVar4 = (short *)((uVar7 & 0xffff) * 4 + *(int *)(iStack00000058 + 8));
            if (*psVar4 == -1) {
              if (sVar5 != -1) {
                FUN_00557734(uVar7 & 0xffff,sVar5);
              }
            }
            else if (sVar5 == -1) {
              FUN_00557b44(uVar7 & 0xffff,iStack00000058);
            }
            else {
              *psVar4 = sVar5;
            }
            uVar6 = uVar6 + 1;
          }
          bVar1 = uVar8 != 7;
          uVar7 = uVar7 + 1;
          uVar8 = uVar8 + 1;
        } while (bVar1);
        iVar3 = iVar3 + 1;
        param_3 = param_3 + 8;
      } while (param_2 != iVar3);
    }
    uVar2 = 0;
  }
  return uVar2;
}


// 0x0558098 (0x1a8 bytes)
undefined8 FUN_00558098(int param_1,int param_2,uint param_3,uint param_4,int *param_5)

{
  bool bVar1;
  uint uVar2;
  byte bVar3;
  int iVar4;
  byte *pbVar5;
  uint uVar6;
  uint uVar7;
  int *piStack00000050;
  
  if (param_1 != 0) {
    piStack00000050 = param_5;
    if (param_5 == (int *)0x0) {
      FUN_00557df0(&stack0x00000050);
    }
    if ((*piStack00000050 != 0) && (param_3 < (uint)piStack00000050[1])) {
      iVar4 = 0;
      if (param_2 != 0) {
        do {
          uVar7 = 0;
          pbVar5 = (byte *)(iVar4 + param_1);
          uVar6 = param_3;
LAB_00558158:
          do {
            uVar2 = 1 << (uVar7 & 0x3f);
            if ((uVar2 & *pbVar5) != 0) {
              bVar3 = *pbVar5 & ~(byte)uVar2;
              if (piStack00000050[1] - 1U < (uVar6 & 0xffff)) {
                bVar1 = uVar7 == 7;
                *pbVar5 = bVar3;
                uVar6 = uVar6 + 1;
                uVar7 = uVar7 + 1;
                if (bVar1) break;
                goto LAB_00558158;
              }
              if (*(ushort *)((uVar6 & 0xffff) * 4 + piStack00000050[2]) == param_4) {
                FUN_00557b44(uVar6 & 0xffff);
              }
              else {
                *pbVar5 = bVar3;
              }
            }
            bVar1 = uVar7 != 7;
            uVar6 = uVar6 + 1;
            uVar7 = uVar7 + 1;
          } while (bVar1);
          iVar4 = iVar4 + 1;
          param_3 = param_3 + 8;
        } while (param_2 != iVar4);
      }
      return 0;
    }
  }
  return 2;
}


// 0x0558240 (0x234 bytes)
undefined8 FUN_00558240(int param_1,int param_2,uint param_3,undefined4 param_4,int param_5)

{
  bool bVar1;
  byte bVar2;
  uint uVar3;
  int iVar4;
  short sVar5;
  uint uVar6;
  uint uVar7;
  int iStack00000050;
  
  if (param_1 != 0) {
    iStack00000050 = param_5;
    if (param_5 == 0) {
      FUN_00557df0(&stack0x00000050);
    }
    uVar6 = (param_2 * 8 + param_3) - 1 & 0xffff;
    if (((*(short *)(iStack00000050 + 6) == 0) &&
        (iVar4 = FUN_00557bec(uVar6,iStack00000050), iVar4 != 0)) ||
       ((*(uint *)(iStack00000050 + 4) <= uVar6 && (iVar4 = FUN_00557cc8(uVar6), iVar4 != 0)))) {
      return 100;
    }
    sVar5 = 0;
    iVar4 = 0;
    if (param_2 != 0) {
      do {
        uVar7 = 0;
        uVar6 = param_3;
        do {
          uVar3 = 1 << (uVar7 & 0x3f);
          bVar2 = *(byte *)(iVar4 + param_1);
          if ((uVar3 & bVar2) != 0) {
            if (*(short *)((uVar6 & 0xffff) * 4 + *(int *)(iStack00000050 + 8)) == -1) {
              sVar5 = sVar5 + 1;
              FUN_00557734(uVar6 & 0xffff,param_4,iStack00000050);
            }
            else {
              *(byte *)(iVar4 + param_1) = bVar2 & ~(byte)uVar3;
            }
          }
          bVar1 = uVar7 != 7;
          uVar6 = uVar6 + 1;
          uVar7 = uVar7 + 1;
        } while (bVar1);
        iVar4 = iVar4 + 1;
        param_3 = param_3 + 8;
      } while (param_2 != iVar4);
      if (sVar5 != 0) {
        return 0;
      }
    }
  }
  return 2;
}


// 0x0558474 (0x190 bytes)
void FUN_00558474(int param_1,int param_2,ulonglong param_3,undefined2 *param_4,uint *param_5,
                 int *param_6)

{
  uint uVar1;
  uint uVar2;
  ulonglong uVar3;
  uint uVar4;
  int iVar5;
  longlong lVar6;
  int *piStack00000058;
  
  if (param_1 != 0) {
    piStack00000058 = param_6;
    if (param_6 == (int *)0x0) {
      FUN_00557df0(&stack0x00000058);
    }
    if ((*piStack00000058 != 0) &&
       (uVar1 = piStack00000058[1], (param_3 & 0xffffffff) < (ulonglong)uVar1)) {
      uVar2 = 0;
      if (param_2 != 0) {
        uVar2 = 0;
        iVar5 = 0;
        do {
          uVar4 = 0;
          lVar6 = 8;
          uVar3 = param_3;
          do {
            if ((1 << (uVar4 & 0x3f) & (uint)*(byte *)(iVar5 + param_1)) != 0) {
              if ((uVar3 & 0xffff) < (ulonglong)uVar1) {
                param_4[uVar2 & 0xffff] =
                     *(undefined2 *)((int)((uVar3 & 0xffff) << 2) + piStack00000058[2]);
              }
              else {
                param_4[uVar2 & 0xffff] = 0xffff;
              }
              uVar2 = uVar2 + 1;
            }
            uVar4 = uVar4 + 1;
            uVar3 = uVar3 + 1;
            lVar6 = lVar6 + -1;
          } while (lVar6 != 0);
          iVar5 = iVar5 + 1;
          param_3 = param_3 + 8;
        } while (param_2 != iVar5);
        uVar2 = uVar2 & 0xffff;
      }
      *param_5 = uVar2;
      return;
    }
    *param_4 = 0xffff;
    *param_5 = 1;
  }
  return;
}


// 0x0558604 (0x178 bytes)
undefined8 FUN_00558604(ulonglong param_1,int param_2,int param_3)

{
  int iVar1;
  short *psVar2;
  int iStack00000040;
  
  iStack00000040 = param_3;
  if (param_3 == 0) {
    FUN_00557df0(&stack0x00000040);
  }
  if (*(uint *)(iStack00000040 + 4) == 0) {
    if (param_2 != 0xffff) {
      iVar1 = FUN_00557bec(param_1 & 0xffffffff,iStack00000040);
joined_r0x005586ac:
      if (iVar1 != 0) {
        return 100;
      }
      FUN_00557734(param_1 & 0xffffffff,param_2,iStack00000040);
      return 0;
    }
  }
  else if ((param_1 & 0xffffffff) < (ulonglong)*(uint *)(iStack00000040 + 4)) {
    psVar2 = (short *)((int)((param_1 & 0xffffffff) << 2) + *(int *)(iStack00000040 + 8));
    if (*psVar2 != -1) {
      if (param_2 == 0xffff) {
        FUN_00557b44(param_1 & 0xffffffff,iStack00000040);
        return 0;
      }
      *psVar2 = (short)param_2;
      return 0;
    }
    if (param_2 != 0xffff) {
      FUN_00557734(param_1 & 0xffffffff,param_2);
      return 0;
    }
  }
  else if (param_2 != 0xffff) {
    iVar1 = FUN_00557cc8(param_1 & 0xffffffff,iStack00000040);
    goto joined_r0x005586ac;
  }
  return 0;
}


// 0x055877c (0xc4 bytes)
undefined8 FUN_0055877c(ulonglong param_1,uint param_2,int *param_3)

{
  int *piStack00000040;
  
  piStack00000040 = param_3;
  if (param_3 == (int *)0x0) {
    FUN_00557df0(&stack0x00000040);
  }
  if (param_2 != 0xffff) {
    if ((*piStack00000040 != 0) && ((param_1 & 0xffffffff) < (ulonglong)(uint)piStack00000040[1])) {
      if (*(ushort *)((int)((param_1 & 0xffffffff) << 2) + piStack00000040[2]) == param_2) {
        FUN_00557b44(param_1 & 0xffffffff);
        return 0;
      }
    }
  }
  return 2;
}


// 0x0558840 (0x128 bytes)
undefined8 FUN_00558840(ulonglong param_1,uint *param_2,int param_3)

{
  uint uVar1;
  undefined8 uVar2;
  int iVar3;
  int iStack00000040;
  
  iStack00000040 = param_3;
  if (param_3 == 0) {
    FUN_00557df0(&stack0x00000040);
  }
  uVar2 = 2;
  if (*param_2 != 0xffff) {
    if (*(uint *)(iStack00000040 + 4) == 0) {
      iVar3 = FUN_00557bec(param_1 & 0xffffffff,iStack00000040);
    }
    else {
      if ((param_1 & 0xffffffff) < (ulonglong)*(uint *)(iStack00000040 + 4)) {
        uVar1 = (uint)*(ushort *)((int)((param_1 & 0xffffffff) << 2) + *(int *)(iStack00000040 + 8))
        ;
        if (uVar1 != 0xffff) {
          *param_2 = uVar1;
          return 2;
        }
        FUN_00557734(param_1 & 0xffffffff,*param_2);
        return 0;
      }
      iVar3 = FUN_00557cc8(param_1 & 0xffffffff,iStack00000040);
    }
    if (iVar3 == 0) {
      FUN_00557734(param_1 & 0xffffffff,*param_2,iStack00000040);
      return 0;
    }
    uVar2 = 100;
  }
  return uVar2;
}


// 0x0558968 (0xa4 bytes)
void FUN_00558968(uint param_1,uint *param_2,int *param_3)

{
  uint uVar1;
  int *piStack00000040;
  
  *param_2 = 0xffff;
  piStack00000040 = param_3;
  if (param_3 == (int *)0x0) {
    FUN_00557df0(&stack0x00000040);
  }
  if ((((*piStack00000040 != 0) && (piStack00000040[2] != 0)) &&
      (param_1 < (uint)piStack00000040[1])) &&
     (uVar1 = (uint)*(ushort *)(param_1 * 4 + piStack00000040[2]), uVar1 != 0xffff)) {
    *param_2 = uVar1;
  }
  return;
}


// 0x0558a0c (0x68 bytes)
void FUN_00558a0c(undefined4 *param_1,undefined4 *param_2)

{
  undefined4 *puStack00000038;
  
  if (param_2 != (undefined4 *)0x0) {
    *param_1 = *param_2;
    return;
  }
  puStack00000038 = param_2;
  FUN_00557df0(&stack0x00000038);
  *param_1 = *puStack00000038;
  return;
}


// 0x0558a74 (0xc4 bytes)
undefined8 FUN_00558a74(void *param_1,uint *param_2,int param_3)

{
  undefined8 uVar1;
  int iStack00000040;
  
  iStack00000040 = param_3;
  if (param_3 == 0) {
    FUN_00557df0(&stack0x00000040);
  }
  if (*param_2 < *(uint *)(iStack00000040 + 4)) {
    memcpy(param_1,*(void **)(iStack00000040 + 8),*param_2 << 2);
    uVar1 = 0xdac2;
  }
  else {
    if (*(void **)(iStack00000040 + 8) != (void *)0x0) {
      memcpy(param_1,*(void **)(iStack00000040 + 8),*(uint *)(iStack00000040 + 4) << 2);
    }
    uVar1 = 0;
    *param_2 = *(uint *)(iStack00000040 + 4);
  }
  return uVar1;
}


// 0x0558b38 (0x68 bytes)
void FUN_00558b38(undefined4 *param_1,int param_2)

{
  int iStack00000038;
  
  if (param_2 != 0) {
    *param_1 = *(undefined4 *)(param_2 + 4);
    return;
  }
  iStack00000038 = param_2;
  FUN_00557df0(&stack0x00000038);
  *param_1 = *(undefined4 *)(iStack00000038 + 4);
  return;
}


// 0x0558ba0 (0xdc bytes)
void FUN_00558ba0(uint param_1,int *param_2)

{
  ulonglong uVar1;
  int *piVar2;
  ulonglong uVar3;
  int *piStack00000038;
  
  piStack00000038 = param_2;
  if (param_2 == (int *)0x0) {
    FUN_00557df0(&stack0x00000038);
  }
  if (((param_1 != 0xffff) && (*piStack00000038 != 0)) && (piStack00000038[1] != 0)) {
    uVar3 = 0;
    piVar2 = piStack00000038;
    do {
      while( true ) {
        if (*(ushort *)((int)((uVar3 & 0xffffffff) << 2) + piVar2[2]) != param_1) break;
        FUN_00557b44(uVar3 & 0xffffffff);
        uVar1 = uVar3 + 1;
        uVar3 = uVar3 + 1;
        piVar2 = piStack00000038;
        if ((ulonglong)(uint)piStack00000038[1] <= (uVar1 & 0xffffffff)) {
          return;
        }
      }
      uVar1 = uVar3 + 1;
      uVar3 = uVar3 + 1;
    } while ((uVar1 & 0xffffffff) < (ulonglong)(uint)piVar2[1]);
  }
  return;
}


// 0x0558c7c (0xf8 bytes)
void FUN_00558c7c(uint param_1,int param_2)

{
  short sVar1;
  short *psVar2;
  int iVar3;
  int iStack00000038;
  
  iStack00000038 = param_2;
  if (param_2 == 0) {
    FUN_00557df0(&stack0x00000038);
  }
  if (*(uint *)(iStack00000038 + 4) == 0) {
    iVar3 = FUN_00557bec(param_1);
  }
  else {
    if (param_1 < *(uint *)(iStack00000038 + 4)) {
      psVar2 = (short *)(param_1 * 4 + *(int *)(iStack00000038 + 8));
      sVar1 = *psVar2;
      goto joined_r0x00558cdc;
    }
    iVar3 = FUN_00557cc8(param_1);
  }
  if (iVar3 != 0) {
    return;
  }
  psVar2 = (short *)(param_1 * 4 + *(int *)(iStack00000038 + 8));
  sVar1 = *psVar2;
joined_r0x00558cdc:
  if (sVar1 != -1) {
    return;
  }
  psVar2[1] = 1;
  return;
}


// 0x0558d74 (0xa4 bytes)
ulonglong FUN_00558d74(ulonglong param_1,int param_2)

{
  short *psVar1;
  int iStack00000038;
  
  if (param_2 == 0) {
    iStack00000038 = param_2;
    FUN_00557df0(&stack0x00000038);
  }
  else if (((param_1 & 0xffffffff) < (ulonglong)*(uint *)(param_2 + 4)) &&
          (psVar1 = (short *)((int)((param_1 & 0xffffffff) << 2) + *(int *)(param_2 + 8)),
          *psVar1 == -1)) {
    return (ulonglong)(LZCOUNT((uint)(-((ulonglong)(ushort)psVar1[1] ^ 1) >> 0x3f)) << 0x20) >> 0x25
    ;
  }
  return 0;
}


// 0x0558e18 (0x84 bytes)
ulonglong FUN_00558e18(ulonglong param_1,int *param_2)

{
  ulonglong uVar1;
  int *piStack00000038;
  
  if (param_2 == (int *)0x0) {
    piStack00000038 = param_2;
    FUN_00557df0(&stack0x00000038);
    uVar1 = 1;
  }
  else {
    uVar1 = 1;
    if ((*param_2 != 0) && ((param_1 & 0xffffffff) < (ulonglong)(uint)param_2[1])) {
      uVar1 = (~(ulonglong)*(ushort *)((int)((param_1 & 0xffffffff) << 2) + param_2[2]) & 0xffff) -
              1 >> 0x3f;
    }
  }
  return uVar1;
}


// 0x0558e9c (0x9c bytes)
ulonglong FUN_00558e9c(ulonglong param_1,uint param_2,int *param_3)

{
  ulonglong uVar1;
  ulonglong uVar2;
  int *piStack00000040;
  
  if (param_3 == (int *)0x0) {
    piStack00000040 = param_3;
    FUN_00557df0(&stack0x00000040);
    uVar1 = 0;
  }
  else {
    uVar1 = 0;
    if (((param_2 != 0xffff) && (*param_3 != 0)) &&
       ((param_1 & 0xffffffff) < (ulonglong)(uint)param_3[1])) {
      uVar1 = (ulonglong)param_2 ^
              (ulonglong)*(ushort *)((int)((param_1 & 0xffffffff) << 2) + param_3[2]);
      uVar2 = (ulonglong)((int)uVar1 >> 0x1f);
      uVar1 = (((uVar2 ^ uVar1) - uVar2) + -1 << 0x20) >> 0x3f;
    }
  }
  return uVar1;
}


// 0x0558f38 (0x50 bytes)
undefined8 FUN_00558f38(undefined4 *param_1)

{
  int iVar1;
  undefined *puVar2;
  
  puVar2 = PTR_DAT_0071b2ac;
  param_1[5] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  iVar1 = *(int *)puVar2;
  *param_1 = 1;
  param_1[1] = 0;
  param_1[2] = 3;
  if (iVar1 != 0) {
    param_1[5] = *(undefined4 *)(iVar1 + 0xfc);
  }
  return 0;
}


// 0x0558f88 (0x58 bytes)
undefined8 FUN_00558f88(undefined8 param_1,int param_2)

{
  FUN_00553f04(param_1,param_2);
  FUN_00553f04(param_1,param_2 + 4);
  return 0;
}


// 0x0558fe0 (0x70 bytes)
undefined8 FUN_00558fe0(undefined8 param_1,int param_2)

{
  FUN_00553f04(param_1,param_2);
  FUN_00553b40(param_1,param_2 + 4,8);
  FUN_00553f04(param_1,param_2 + 0xc);
  return 0;
}


// 0x0559050 (0x148 bytes)
ulonglong FUN_00559050(undefined8 param_1,int param_2)

{
  ulonglong uVar1;
  ulonglong uVar2;
  
  FUN_00553f04(param_1,param_2);
  FUN_00553f04(param_1,param_2 + 4);
  FUN_00553f04(param_1,param_2 + 8);
  FUN_00553f04(param_1,param_2 + 0xc);
  uVar1 = FUN_00558fe0(param_1,param_2 + 0x10);
  if ((int)uVar1 != 0) {
    return uVar1 & 0xffffffff;
  }
  uVar2 = FUN_00558f88(param_1,param_2 + 0x20);
  if (uVar2 != 0) {
    return uVar2 & 0xffffffff;
  }
  FUN_00553b40(param_1,param_2 + 0x28,0x48);
  FUN_00553b40(param_1,param_2 + 0x70,0x20);
  FUN_00553f04(param_1,param_2 + 0x90);
  return uVar1 & 0xffffffff;
}


// 0x0559198 (0x158 bytes)
ulonglong FUN_00559198(undefined8 param_1,int param_2)

{
  ulonglong uVar1;
  
  FUN_00553f04(param_1,param_2);
  FUN_00553f04(param_1,param_2 + 4);
  FUN_00553f04(param_1,param_2 + 8);
  FUN_00553f04(param_1,param_2 + 0xc);
  FUN_00553f04(param_1,param_2 + 0x10);
  FUN_00553f04(param_1,param_2 + 0x14);
  FUN_00553b40(param_1,param_2 + 0x18,0x48);
  uVar1 = FUN_00558fe0(param_1,param_2 + 0x60);
  if (uVar1 == 0) {
    FUN_00553f04(param_1,param_2 + 0x70);
    uVar1 = FUN_00558f88(param_1,param_2 + 0x74);
    if (uVar1 == 0) {
      FUN_00553b40(param_1,param_2 + 0x7c,0x20);
      FUN_00553f04(param_1,param_2 + 0x9c);
      return 0;
    }
  }
  return uVar1 & 0xffffffff;
}


// 0x05592f0 (0x54c bytes)
// strings: 0067d1f0: '%d.%02d.%04d'

ushort FUN_005592f0(void)

{
  ulonglong uVar1;
  undefined *puVar2;
  ulonglong uVar3;
  int in_r6;
  int iVar4;
  uint uVar5;
  void *__src;
  ushort local_360;
  ushort local_35e;
  short local_35c;
  int local_358;
  int local_338;
  int local_334;
  uint local_328;
  GPiece<72> auStack_320;
  int local_2d8;
  undefined1 uStack_2d4;
  undefined1 uStack_2d3;
  undefined1 uStack_2d2;
  undefined1 uStack_2d1;
  undefined1 uStack_2d0;
  undefined1 uStack_2cf;
  undefined1 uStack_2ce;
  undefined1 uStack_2cd;
  undefined4 local_2cc;
  undefined4 local_2c8;
  int local_29c;
  int local_294;
  int local_278;
  int local_274;
  int local_270;
  undefined1 uStack_26c;
  undefined1 uStack_26b;
  undefined1 uStack_26a;
  undefined1 uStack_269;
  undefined1 uStack_268;
  undefined1 uStack_267;
  undefined1 uStack_266;
  undefined1 uStack_265;
  undefined1 uStack_264;
  undefined1 uStack_263;
  undefined1 uStack_262;
  undefined1 uStack_261;
  undefined1 uStack_260;
  undefined1 uStack_25f;
  undefined1 uStack_25e;
  undefined1 uStack_25d;
  undefined4 local_25c;
  GPiece<104> auStack_250;
  uint local_1e8;
  undefined1 *local_1e4;
  undefined4 local_1e0;
  GPiece<312> auStack_1d8;
  longlong local_a0;
  
  uVar3 = ZEXT48(&stack0x00000000);
  FUN_00551f9c(in_r6,uVar3 - 0x360);
  memset(uVar3 - 0x298,0,0xbc);
  puVar2 = PTR_DAT_0071b2b0;
  if (*(int *)(PTR_DAT_0071b2b0 + 8) != 0) {
    uVar1 = uVar3 - 0x354 & 0xffffffff;
    iVar4 = in_r6 + 2;
    local_a0 = uVar3 - 0x28c;
LAB_005593bc:
    if (iVar4 - in_r6 < (int)(uint)local_360) {
      while( true ) {
        FUN_00551f9c(iVar4,uVar3 - 0x35c & 0xffffffff);
        __src = (void *)(iVar4 + 4);
        FUN_00551f9c(iVar4 + 2,uVar3 - 0x35e & 0xffffffff);
        if (local_35c == -0x7fff) break;
        if (local_35c == -0x7ffe) {
          memcpy(auStack_1d8,__src,(uint)local_35e);
          iVar4 = (int)__src + (uint)local_35e;
          local_1e8 = (uint)local_35e;
          local_1e4 = auStack_1d8;
          goto LAB_005593bc;
        }
        iVar4 = (int)__src + (uint)local_35e;
        if ((int)(uint)local_360 <= iVar4 - in_r6) goto LAB_00559430;
      }
      memset(uVar3 - 0x338 & 0xffffffff,0,0xa0);
      uVar5 = 0xa0;
      if (local_35e < 0xa0) {
        uVar5 = (uint)local_35e;
      }
      FUN_0055442c(uVar1,__src,(int)__src + uVar5,2);
      FUN_00559198(uVar1,uVar3 - 0x338 & 0xffffffff);
      FUN_005543a4(uVar1,uVar3 - 0x358 & 0xffffffff);
      iVar4 = (int)__src + local_358;
      if (uVar5 < local_35e) {
        iVar4 = iVar4 + (local_35e - uVar5);
      }
      snprintf((char *)local_a0,PTR_s__d__02d__04d_0071b2b4,local_328 >> 0x18,
                     (ulonglong)(local_328 >> 0x10) & 0xff,(ulonglong)local_328 & 0xffff);
      local_278 = local_338;
      local_274 = local_334;
      memcpy(auStack_250,auStack_320,0x48);
      local_25c = local_2cc;
      uStack_264 = local_2cc.piece<0,1>();
      uStack_263 = local_2cc.piece<1,1>();
      uStack_262 = local_2cc.piece<2,1>();
      uStack_261 = (undefined1)local_2cc;
      uStack_260 = local_2c8.piece<0,1>();
      uStack_25f = local_2c8.piece<1,1>();
      uStack_25d = (undefined1)local_2c8;
      uStack_25e = local_2c8.piece<2,1>();
      local_270 = local_2d8;
      if (local_2d8 == 2) {
        local_270 = 5;
      }
      uStack_26c = uStack_2d4;
      uStack_26b = uStack_2d3;
      uStack_26a = uStack_2d2;
      uStack_269 = uStack_2d1;
      uStack_268 = uStack_2d0;
      uStack_267 = uStack_2cf;
      uStack_266 = uStack_2ce;
      uStack_265 = uStack_2cd;
      if (local_2c8 != 0) {
        local_294 = local_29c;
      }
      goto LAB_005593bc;
    }
LAB_00559430:
    if (((((*(uint *)puVar2 & 1) == 0) || (local_274 == **(int **)PTR_PTR_0071b2b8)) &&
        (((*(uint *)puVar2 & 2) == 0 || (local_278 == 5)))) && (*(int *)(puVar2 + 4) == local_294))
    {
      local_1e0 = *(undefined4 *)(puVar2 + 0xc);
      (*(code *)**(undefined4 **)(puVar2 + 8))(uVar3 - 0x298);
    }
  }
  return local_360;
}


// 0x055983c (0x210 bytes)
// strings: 0067d1f0: '%d.%02d.%04d'

int FUN_0055983c(undefined4 *param_1,undefined4 param_2)

{
  undefined1 uVar1;
  undefined1 uVar2;
  undefined1 uVar3;
  undefined4 *puVar4;
  int iVar5;
  undefined4 uVar6;
  undefined *puVar7;
  int iVar8;
  
  memset(param_1,0,0xa8);
  puVar7 = PTR_s__d__02d__04d_0071b2b4;
  *param_1 = 0x3040000;
  snprintf((char *)(param_1 + 1),puVar7,3,4,0);
  puVar7 = PTR_PTR_0071b2b8;
  puVar4 = *(undefined4 **)PTR_PTR_0071b2b8;
  param_1[6] = 5;
  param_1[7] = *puVar4;
  iVar8 = FUN_0054af90(param_1 + 8,param_2);
  if (iVar8 == 0) {
    iVar5 = *(int *)puVar7;
    uVar6 = *(undefined4 *)(iVar5 + 0x38);
    param_1[0xe] = *(undefined4 *)(iVar5 + 0x34);
    param_1[0xf] = uVar6;
    param_1[0xe] = *(undefined4 *)(iVar5 + 0x34);
    param_1[0xf] = *(undefined4 *)(iVar5 + 0x38);
    memcpy(param_1 + 0x10,(void *)(iVar5 + 0x3c),0x48);
    iVar5 = *(int *)puVar7;
    uVar1 = *(undefined1 *)(iVar5 + 0x85);
    uVar2 = *(undefined1 *)(iVar5 + 0x86);
    uVar3 = *(undefined1 *)(iVar5 + 0x87);
    *(undefined1 *)(param_1 + 0x22) = *(undefined1 *)(iVar5 + 0x84);
    *(undefined1 *)((int)param_1 + 0x89) = uVar1;
    *(undefined1 *)((int)param_1 + 0x8a) = uVar2;
    *(undefined1 *)((int)param_1 + 0x8b) = uVar3;
    uVar1 = *(undefined1 *)(iVar5 + 0x89);
    uVar2 = *(undefined1 *)(iVar5 + 0x8a);
    uVar3 = *(undefined1 *)(iVar5 + 0x8b);
    *(undefined1 *)(param_1 + 0x23) = *(undefined1 *)(iVar5 + 0x88);
    *(undefined1 *)((int)param_1 + 0x8d) = uVar1;
    *(undefined1 *)((int)param_1 + 0x8e) = uVar2;
    *(undefined1 *)((int)param_1 + 0x8f) = uVar3;
    uVar1 = *(undefined1 *)(iVar5 + 0x8d);
    uVar2 = *(undefined1 *)(iVar5 + 0x8e);
    uVar3 = *(undefined1 *)(iVar5 + 0x8f);
    *(undefined1 *)(param_1 + 0x24) = *(undefined1 *)(iVar5 + 0x8c);
    *(undefined1 *)((int)param_1 + 0x91) = uVar1;
    *(undefined1 *)((int)param_1 + 0x92) = uVar2;
    *(undefined1 *)((int)param_1 + 0x93) = uVar3;
    uVar1 = *(undefined1 *)(iVar5 + 0x91);
    uVar2 = *(undefined1 *)(iVar5 + 0x92);
    uVar3 = *(undefined1 *)(iVar5 + 0x93);
    *(undefined1 *)(param_1 + 0x25) = *(undefined1 *)(iVar5 + 0x90);
    *(undefined1 *)((int)param_1 + 0x95) = uVar1;
    *(undefined1 *)((int)param_1 + 0x96) = uVar2;
    *(undefined1 *)((int)param_1 + 0x97) = uVar3;
    uVar1 = *(undefined1 *)(iVar5 + 0x95);
    uVar2 = *(undefined1 *)(iVar5 + 0x96);
    uVar3 = *(undefined1 *)(iVar5 + 0x97);
    *(undefined1 *)(param_1 + 0x26) = *(undefined1 *)(iVar5 + 0x94);
    *(undefined1 *)((int)param_1 + 0x99) = uVar1;
    *(undefined1 *)((int)param_1 + 0x9a) = uVar2;
    *(undefined1 *)((int)param_1 + 0x9b) = uVar3;
    uVar1 = *(undefined1 *)(iVar5 + 0x99);
    uVar2 = *(undefined1 *)(iVar5 + 0x9a);
    uVar3 = *(undefined1 *)(iVar5 + 0x9b);
    *(undefined1 *)(param_1 + 0x27) = *(undefined1 *)(iVar5 + 0x98);
    *(undefined1 *)((int)param_1 + 0x9d) = uVar1;
    *(undefined1 *)((int)param_1 + 0x9e) = uVar2;
    *(undefined1 *)((int)param_1 + 0x9f) = uVar3;
    uVar1 = *(undefined1 *)(iVar5 + 0x9d);
    uVar2 = *(undefined1 *)(iVar5 + 0x9e);
    uVar3 = *(undefined1 *)(iVar5 + 0x9f);
    *(undefined1 *)(param_1 + 0x28) = *(undefined1 *)(iVar5 + 0x9c);
    *(undefined1 *)((int)param_1 + 0xa1) = uVar1;
    *(undefined1 *)((int)param_1 + 0xa2) = uVar2;
    *(undefined1 *)((int)param_1 + 0xa3) = uVar3;
    uVar1 = *(undefined1 *)(iVar5 + 0xa0);
    uVar2 = *(undefined1 *)(iVar5 + 0xa1);
    uVar3 = *(undefined1 *)(iVar5 + 0xa2);
    *(undefined1 *)((int)param_1 + 0xa7) = *(undefined1 *)(iVar5 + 0xa3);
    *(undefined1 *)(param_1 + 0x29) = uVar1;
    *(undefined1 *)((int)param_1 + 0xa5) = uVar2;
    *(undefined1 *)((int)param_1 + 0xa6) = uVar3;
  }
  return iVar8;
}


// 0x0559a4c (0x578 bytes)
undefined4 FUN_00559a4c(undefined4 *param_1,int *param_2,undefined4 param_3)

{
  undefined4 *puVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  uint uVar5;
  GPiece<4> auStack_2e0;
  GPiece<2> local_2dc;
  GPiece<2> auStack_2da;
  undefined4 local_2d8;
  GPiece<2> local_2d4;
  GPiece<2> auStack_2d2;
  GPiece<28> auStack_2d0;
  int aiStack_2b4 [2];
  undefined1 *puStack_2ac;
  undefined4 uStack_2a8;
  int local_274;
  uint local_270;
  GPiece<160> auStack_268;
  GPiece<8> local_1c8;
  GPiece<16> auStack_1c0;
  GPiece<72> auStack_1b0;
  undefined4 local_168;
  undefined1 uStack_164;
  undefined1 uStack_163;
  undefined1 uStack_162;
  undefined1 uStack_161;
  undefined1 uStack_160;
  undefined1 uStack_15f;
  undefined1 uStack_15e;
  undefined1 uStack_15d;
  undefined4 local_15c;
  undefined4 local_158;
  undefined4 local_154;
  undefined4 local_150;
  undefined1 uStack_14c;
  undefined1 uStack_14b;
  undefined1 uStack_14a;
  undefined1 uStack_149;
  undefined1 uStack_148;
  undefined1 uStack_147;
  undefined1 uStack_146;
  undefined1 uStack_145;
  undefined1 uStack_144;
  undefined1 uStack_143;
  undefined1 uStack_142;
  undefined1 uStack_141;
  undefined1 uStack_140;
  undefined1 uStack_13f;
  undefined1 uStack_13e;
  undefined1 uStack_13d;
  undefined1 uStack_13c;
  undefined1 uStack_13b;
  undefined1 uStack_13a;
  undefined1 uStack_139;
  undefined1 uStack_138;
  undefined1 uStack_137;
  undefined1 uStack_136;
  undefined1 uStack_135;
  undefined1 uStack_134;
  undefined1 uStack_133;
  undefined1 uStack_132;
  undefined1 uStack_131;
  undefined1 uStack_130;
  undefined1 uStack_12f;
  undefined1 uStack_12e;
  undefined1 uStack_12d;
  int local_12c;
  GPiece<32> local_128;
  undefined4 local_108;
  undefined1 uStack_104;
  undefined1 uStack_103;
  undefined1 uStack_102;
  undefined1 uStack_101;
  undefined1 uStack_100;
  undefined1 uStack_ff;
  undefined1 uStack_fe;
  undefined1 uStack_fd;
  undefined4 local_f4;
  undefined4 local_f0;
  undefined4 local_ec;
  GPiece<72> auStack_e8;
  undefined1 uStack_a0;
  undefined1 uStack_9f;
  undefined1 uStack_9e;
  undefined1 uStack_9d;
  undefined1 uStack_9c;
  undefined1 uStack_9b;
  undefined1 uStack_9a;
  undefined1 uStack_99;
  undefined1 uStack_98;
  undefined1 uStack_97;
  undefined1 uStack_96;
  undefined1 uStack_95;
  undefined1 uStack_94;
  undefined1 uStack_93;
  undefined1 uStack_92;
  undefined1 uStack_91;
  undefined1 uStack_90;
  undefined1 uStack_8f;
  undefined1 uStack_8e;
  undefined1 uStack_8d;
  undefined1 uStack_8c;
  undefined1 uStack_8b;
  undefined1 uStack_8a;
  undefined1 uStack_89;
  undefined1 uStack_88;
  undefined1 uStack_87;
  undefined1 uStack_86;
  undefined1 uStack_85;
  undefined1 uStack_84;
  undefined1 uStack_83;
  undefined1 uStack_82;
  undefined1 uStack_81;
  
  puVar1 = *(undefined4 **)(PTR_DAT_0071b2b0 + 0x14);
  uVar4 = *(undefined4 *)(PTR_DAT_0071b2b0 + 0x10);
  *param_2 = 1;
  param_1[0x2e] = uVar4;
  *param_1 = param_3;
  if ((puVar1 != (undefined4 *)0x0) && ((*(code *)*puVar1)(param_1,param_2), *param_2 == 0)) {
    return 0;
  }
  iVar2 = param_1[1];
  memset(local_1c8,0,0xa0);
  iVar3 = FUN_0055983c(local_128,param_3);
  if (iVar3 == 0) {
    local_158 = 1;
    local_154 = local_f0;
    local_150 = local_ec;
    memcpy(auStack_1b0,auStack_e8,0x48);
    uStack_14c = uStack_a0;
    uStack_14b = uStack_9f;
    uStack_14a = uStack_9e;
    uStack_149 = uStack_9d;
    uStack_148 = uStack_9c;
    uStack_147 = uStack_9b;
    uStack_146 = uStack_9a;
    uStack_145 = uStack_99;
    uStack_144 = uStack_98;
    uStack_143 = uStack_97;
    uStack_142 = uStack_96;
    uStack_141 = uStack_95;
    uStack_140 = uStack_94;
    uStack_13f = uStack_93;
    uStack_13e = uStack_92;
    uStack_13d = uStack_91;
    uStack_13c = uStack_90;
    uStack_13b = uStack_8f;
    uStack_13a = uStack_8e;
    uStack_139 = uStack_8d;
    uStack_12d = uStack_81;
    uStack_138 = uStack_8c;
    uStack_137 = uStack_8b;
    uStack_136 = uStack_8a;
    uStack_135 = uStack_89;
    uStack_134 = uStack_88;
    uStack_133 = uStack_87;
    uStack_132 = uStack_86;
    uStack_131 = uStack_85;
    uStack_130 = uStack_84;
    uStack_12f = uStack_83;
    uStack_12e = uStack_82;
    local_15c = local_f4;
    local_168 = local_108;
    uStack_164 = uStack_104;
    uStack_163 = uStack_103;
    uStack_162 = uStack_102;
    uStack_161 = uStack_101;
    uStack_15d = uStack_fd;
    uStack_160 = uStack_100;
    uStack_15f = uStack_ff;
    uStack_15e = uStack_fe;
    local_12c = iVar2;
    if (iVar2 != 1) {
      FUN_0054058c(auStack_1c0,param_3);
    }
  }
  FUN_0055442c(auStack_2d0,auStack_268,local_1c8,1);
  FUN_00559198(auStack_2d0,local_1c8);
  FUN_005543a4(auStack_2d0,&local_2d8);
  local_270 = 0;
  local_274 = 0;
  iVar2 = param_2[1];
  if (0 < iVar2) {
    if (300 < iVar2) {
      return 0x1a;
    }
    FUN_00551f78(local_2d4,0x8002);
    FUN_00551f78(auStack_2d2,*(undefined2 *)((int)param_2 + 6));
    aiStack_2b4[1] = param_2[1];
    aiStack_2b4[0] = param_2[2];
    uStack_2a8 = 4;
    local_274 = aiStack_2b4[1] + 4;
    local_270 = 2;
    puStack_2ac = local_2d4;
  }
  FUN_00551f78(local_2dc,0x8001);
  FUN_00551f78(auStack_2da,local_2d8.piece<2,2>());
  uVar5 = local_270;
  if (local_270 < 8) {
    aiStack_2b4[local_270 * 2 + 1] = local_2d8;
    uVar5 = local_270 + 1;
    local_274 = local_274 + local_2d8;
    aiStack_2b4[local_270 * 2] = (int)auStack_268;
    if (uVar5 < 8) {
      aiStack_2b4[uVar5 * 2 + 1] = 4;
      local_274 = local_274 + 4;
      aiStack_2b4[uVar5 * 2] = (int)local_2dc;
      uVar5 = local_270 + 2;
    }
  }
  local_270 = uVar5;
  FUN_00551f78(auStack_2e0,local_274 + 2U & 0xffff);
  if (local_270 < 8) {
    aiStack_2b4[local_270 * 2 + 1] = 2;
    aiStack_2b4[local_270 * 2] = (int)auStack_2e0;
  }
  uVar4 = FUN_005459e8(*(undefined8 *)(*(int *)PTR_PTR_0071b2b8 + 0xc),
                       *(undefined4 *)(*(int *)PTR_PTR_0071b2b8 + 0x14),0,0x1a,aiStack_2b4);
  return uVar4;
}


// 0x0559fc4 (0x548 bytes)
// strings: 0067d1f0: '%d.%02d.%04d'

/* WARNING: Removing unreachable block (ram,0x0055a20c) */
/* WARNING: Removing unreachable block (ram,0x0055a218) */

ushort FUN_00559fc4(void)

{
  undefined4 *puVar1;
  ulonglong uVar2;
  undefined *puVar3;
  ulonglong uVar4;
  int iVar5;
  int in_r6;
  uint uVar6;
  void *__src;
  int iVar7;
  ushort local_370;
  ushort local_36e;
  short local_36c;
  int local_368;
  int local_334;
  uint local_330;
  undefined1 local_320;
  undefined1 uStack_31f;
  undefined1 uStack_31e;
  undefined1 uStack_31d;
  undefined1 local_31c;
  undefined1 uStack_31b;
  undefined1 uStack_31a;
  undefined1 uStack_319;
  GPiece<104> auStack_314;
  int local_2ac;
  int local_2a4;
  undefined1 uStack_274;
  undefined1 uStack_273;
  undefined1 uStack_272;
  undefined1 uStack_271;
  undefined1 uStack_270;
  undefined1 uStack_26f;
  undefined1 uStack_26e;
  undefined1 uStack_26d;
  GPiece<104> auStack_260;
  uint local_1f8;
  undefined4 local_1f4;
  ulonglong local_b0;
  longlong local_a8;
  longlong local_a0;
  
  uVar4 = ZEXT48(&stack0x00000000);
  FUN_00551f9c(in_r6,uVar4 - 0x370);
  puVar3 = PTR_PTR_0071b2b8;
  if ((*(int *)PTR_DAT_0071b2bc == 1) && (*(int *)(*(int *)PTR_PTR_0071b2b8 + 0x30) == 2)) {
    memset(uVar4 - 0x2a8,0,0xbc);
    uVar2 = uVar4 - 0x358 & 0xffffffff;
    local_b0 = uVar4 - 0x33c;
    local_a0 = uVar4 - 0x1e8;
    local_a8 = uVar4 - 0x29c;
    iVar7 = in_r6 + 2;
    puVar1 = (undefined4 *)(uVar4 - 0x364);
    puVar1[2] = 0;
    *puVar1 = 0;
    puVar1[1] = 0;
LAB_0055a128:
    if (iVar7 - in_r6 < (int)(uint)local_370) {
      while( true ) {
        FUN_00551f9c(iVar7,uVar4 - 0x36c & 0xffffffff);
        __src = (void *)(iVar7 + 4);
        FUN_00551f9c(iVar7 + 2,uVar4 - 0x36e & 0xffffffff);
        if (local_36c == -0x7fff) break;
        if (local_36c == -0x7ffe) {
          memcpy((void *)local_a0,__src,(uint)local_36e);
          iVar7 = (int)__src + (uint)local_36e;
          local_1f4 = (undefined4)local_a0;
          local_1f8 = (uint)local_36e;
          goto LAB_0055a128;
        }
        iVar7 = (int)__src + (uint)local_36e;
        if ((int)(uint)local_370 <= iVar7 - in_r6) goto LAB_0055a1a4;
      }
      memset(local_b0 & 0xffffffff,0,0x94);
      uVar6 = (uint)local_36e;
      if (0x93 < uVar6) {
        uVar6 = 0x94;
      }
      FUN_0055442c(uVar2,__src,(int)__src + uVar6,2);
      FUN_00559050(uVar2,local_b0 & 0xffffffff);
      FUN_005543a4(uVar2,uVar4 - 0x368);
      iVar7 = (int)__src + local_368;
      if (uVar6 < local_36e) {
        iVar7 = iVar7 + (local_36e - uVar6);
      }
      if (local_334 != 0) {
        snprintf((char *)local_a8,PTR_s__d__02d__04d_0071b2b4,local_330 >> 0x18,
                       (ulonglong)(local_330 >> 0x10) & 0xff,(ulonglong)local_330 & 0xffff);
        uStack_274 = local_320;
        uStack_273 = uStack_31f;
        uStack_272 = uStack_31e;
        uStack_271 = uStack_31d;
        uStack_270 = local_31c;
        uStack_26f = uStack_31b;
        uStack_26e = uStack_31a;
        uStack_26d = uStack_319;
        memcpy(auStack_260,auStack_314,0x48);
        local_2a4 = local_2ac;
      }
      goto LAB_0055a128;
    }
LAB_0055a1a4:
    if (local_2a4 == 0) {
      iVar7 = *(int *)(*(int *)puVar3 + 0x1088);
      if (iVar7 != 0) {
        do {
          iVar5 = FUN_00541740(iVar7,uVar4 - 0x368 & 0xffffffff);
          if (iVar5 != 0) {
            return local_370;
          }
          iVar7 = *(int *)(iVar7 + 0x534);
        } while (iVar7 != 0);
      }
    }
    else if (local_2a4 == 1) {
      FUN_00559a4c(uVar4 - 0x2a8,uVar4 - 0x364,0);
    }
  }
  return local_370;
}


// 0x055a50c (0x68 bytes)
int FUN_0055a50c(void)

{
  undefined *puVar1;
  undefined4 uVar2;
  int iVar3;
  
  uVar2 = FUN_00545114();
  iVar3 = FUN_00540808(uVar2);
  puVar1 = PTR_DAT_0071b2b0;
  if (iVar3 == 0) {
    *(undefined4 *)(PTR_DAT_0071b2b0 + 0xc) = 0;
    *(undefined4 *)puVar1 = 0;
    *(undefined4 *)(puVar1 + 4) = 0;
    *(undefined4 *)(puVar1 + 8) = 0;
    uVar2 = FUN_005450d8();
    iVar3 = FUN_00540808(uVar2);
  }
  return iVar3;
}


// 0x055a574 (0xc0 bytes)
int FUN_0055a574(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined4 uVar3;
  int iVar4;
  
  iVar4 = 0xf;
  if (*(int *)(*(int *)PTR_PTR_0071b2b8 + 0x30) == 2) {
    uVar3 = FUN_00545114();
    iVar4 = FUN_00540808(uVar3);
    puVar2 = PTR_DAT_0071b2bc;
    puVar1 = PTR_DAT_0071b2b0;
    if (iVar4 == 0) {
      *(undefined4 *)(PTR_DAT_0071b2b0 + 0x10) = param_3;
      *(undefined4 *)puVar2 = param_1;
      *(undefined4 *)(puVar1 + 0x14) = param_2;
      uVar3 = FUN_005450d8();
      iVar4 = FUN_00540808(uVar3);
      return iVar4;
    }
  }
  return iVar4;
}


// 0x055a634 (0x5a0 bytes)
ulonglong FUN_0055a634(int *param_1)

{
  int iVar1;
  int iVar2;
  undefined *puVar3;
  undefined4 uVar6;
  ulonglong uVar4;
  ulonglong uVar5;
  int iVar7;
  uint uVar8;
  GPiece<4> local_2b0;
  GPiece<2> local_2ac;
  GPiece<2> auStack_2aa;
  GPiece<2> local_2a8;
  GPiece<2> auStack_2a6;
  GPiece<4> local_2a4;
  undefined8 local_2a0;
  GPiece<28> auStack_298;
  int aiStack_27c [2];
  undefined1 *puStack_274;
  undefined4 uStack_270;
  int local_23c;
  uint local_238;
  GPiece<148> auStack_230;
  GPiece<40> local_19c;
  GPiece<72> auStack_174;
  undefined1 uStack_12c;
  undefined1 uStack_12b;
  undefined1 uStack_12a;
  undefined1 uStack_129;
  undefined1 uStack_128;
  undefined1 uStack_127;
  undefined1 uStack_126;
  undefined1 uStack_125;
  undefined1 uStack_124;
  undefined1 uStack_123;
  undefined1 uStack_122;
  undefined1 uStack_121;
  undefined1 uStack_120;
  undefined1 uStack_11f;
  undefined1 uStack_11e;
  undefined1 uStack_11d;
  undefined1 uStack_11c;
  undefined1 uStack_11b;
  undefined1 uStack_11a;
  undefined1 uStack_119;
  undefined1 uStack_118;
  undefined1 uStack_117;
  undefined1 uStack_116;
  undefined1 uStack_115;
  undefined1 uStack_114;
  undefined1 uStack_113;
  undefined1 uStack_112;
  undefined1 uStack_111;
  undefined1 uStack_110;
  undefined1 uStack_10f;
  undefined1 uStack_10e;
  undefined1 uStack_10d;
  int local_10c;
  GPiece<64> local_108;
  GPiece<72> auStack_c8;
  undefined1 uStack_80;
  undefined1 uStack_7f;
  undefined1 uStack_7e;
  undefined1 uStack_7d;
  undefined1 uStack_7c;
  undefined1 uStack_7b;
  undefined1 uStack_7a;
  undefined1 uStack_79;
  undefined1 uStack_78;
  undefined1 uStack_77;
  undefined1 uStack_76;
  undefined1 uStack_75;
  undefined1 uStack_74;
  undefined1 uStack_73;
  undefined1 uStack_72;
  undefined1 uStack_71;
  undefined1 uStack_70;
  undefined1 uStack_6f;
  undefined1 uStack_6e;
  undefined1 uStack_6d;
  undefined1 uStack_6c;
  undefined1 uStack_6b;
  undefined1 uStack_6a;
  undefined1 uStack_69;
  undefined1 uStack_68;
  undefined1 uStack_67;
  undefined1 uStack_66;
  undefined1 uStack_65;
  undefined1 uStack_64;
  undefined1 uStack_63;
  undefined1 uStack_62;
  undefined1 uStack_61;
  
  uVar4 = 0xf;
  if (*(int *)(*(int *)PTR_PTR_0071b2b8 + 0x30) != 2) goto LAB_0055a68c;
  uVar6 = FUN_00545114();
  uVar4 = FUN_00540808(uVar6);
  if ((int)uVar4 != 0) goto LAB_0055a68c;
  if (param_1[6] == 0) {
LAB_0055a744:
    uVar4 = 3;
  }
  else {
    uVar4 = 0x1d;
    if (*param_1 == 1) {
      if (300 < param_1[3]) goto LAB_0055a744;
      uVar4 = FUN_00543120();
      puVar3 = PTR_DAT_0071b2b0;
      if ((int)uVar4 == 0) {
        iVar7 = param_1[1];
        iVar1 = param_1[7];
        iVar2 = param_1[6];
        *(int *)PTR_DAT_0071b2b0 = param_1[2];
        *(int *)(puVar3 + 8) = iVar2;
        *(int *)(puVar3 + 4) = iVar7;
        *(int *)(puVar3 + 0xc) = iVar1;
        uVar6 = FUN_0054e920(&local_2a0);
        uVar4 = FUN_00540808(uVar6);
        if ((int)uVar4 == 0) {
          uVar4 = 0xdac;
          iVar7 = FUN_0054edf0(local_2a0);
          if (iVar7 == 0) {
            local_23c = 0;
            local_238 = 0;
            if (0 < param_1[3]) {
              FUN_00551f78(local_2a8,0x8002);
              FUN_00551f78(auStack_2a6,*(undefined2 *)((int)param_1 + 0xe));
              aiStack_27c[1] = param_1[3];
              aiStack_27c[0] = param_1[4];
              uStack_270 = 4;
              local_23c = aiStack_27c[1] + 4;
              local_238 = 2;
              puStack_274 = local_2a8;
            }
            memset(local_19c,0,0x94);
            iVar7 = FUN_0055983c(local_108,0);
            if (iVar7 == 0) {
              memcpy(auStack_174,auStack_c8,0x48);
              uStack_12c = uStack_80;
              uStack_12b = uStack_7f;
              uStack_12a = uStack_7e;
              uStack_129 = uStack_7d;
              uStack_128 = uStack_7c;
              uStack_127 = uStack_7b;
              uStack_126 = uStack_7a;
              uStack_125 = uStack_79;
              uStack_124 = uStack_78;
              uStack_123 = uStack_77;
              uStack_122 = uStack_76;
              uStack_121 = uStack_75;
              uStack_120 = uStack_74;
              uStack_11f = uStack_73;
              uStack_11e = uStack_72;
              uStack_11d = uStack_71;
              uStack_11c = uStack_70;
              uStack_10d = uStack_61;
              uStack_11b = uStack_6f;
              uStack_11a = uStack_6e;
              uStack_119 = uStack_6d;
              uStack_118 = uStack_6c;
              uStack_117 = uStack_6b;
              uStack_116 = uStack_6a;
              uStack_115 = uStack_69;
              uStack_114 = uStack_68;
              uStack_113 = uStack_67;
              uStack_112 = uStack_66;
              uStack_111 = uStack_65;
              uStack_110 = uStack_64;
              uStack_10f = uStack_63;
              uStack_10e = uStack_62;
              local_10c = param_1[1];
            }
            FUN_0055442c(auStack_298,auStack_230,local_19c,1);
            FUN_00559050(auStack_298,local_19c);
            FUN_005543a4(auStack_298,local_2a4);
            FUN_00551f78(local_2ac,0x8001);
            FUN_00551f78(auStack_2aa,0);
            uVar8 = local_238;
            if (local_238 < 8) {
              aiStack_27c[local_238 * 2 + 1] = 0;
              uVar8 = local_238 + 1;
              aiStack_27c[local_238 * 2] = (int)auStack_230;
              if (uVar8 < 8) {
                aiStack_27c[uVar8 * 2 + 1] = 4;
                local_23c = local_23c + 4;
                aiStack_27c[uVar8 * 2] = (int)local_2ac;
                uVar8 = local_238 + 2;
              }
            }
            local_238 = uVar8;
            FUN_00551f78(local_2b0,local_23c + 2U & 0xffff);
            if (local_238 < 8) {
              aiStack_27c[local_238 * 2 + 1] = 2;
              aiStack_27c[local_238 * 2] = (int)local_2b0;
            }
            uVar4 = FUN_005459e8(local_2a0,param_1[5],0,0x19,aiStack_27c);
          }
        }
      }
    }
  }
  uVar6 = FUN_005450d8();
  uVar5 = FUN_00540808(uVar6);
  if (uVar5 != 0) {
    uVar4 = uVar5;
  }
LAB_0055a68c:
  return uVar4 & 0xffffffff;
}


// 0x055abd4 (0x94 bytes)
undefined8 FUN_0055abd4(int param_1,int param_2,undefined4 *param_3)

{
  int iVar1;
  
  if (param_3 != (undefined4 *)0x0) {
    *param_3 = 0;
    if (param_1 != 0) {
      iVar1 = *(int *)(param_1 + 0x20);
      if ((iVar1 <= param_2) && (param_2 < *(int *)(param_1 + 0x24))) {
        if ((uint)(*(int *)(param_1 + 0x24) - iVar1) < 0x101) {
          if ((1 << (param_2 - iVar1 & 0x1fU) &
              *(uint *)(param_1 + ((uint)(param_2 - iVar1) >> 3 & 0x1ffffffc))) != 0) {
            *param_3 = 1;
            return 0;
          }
          *param_3 = 0;
          return 0;
        }
      }
    }
  }
  return 3;
}


// 0x055ac68 (0x64 bytes)
undefined8 FUN_0055ac68(int param_1,int param_2)

{
  int iVar1;
  uint uVar2;
  undefined8 uVar3;
  
  uVar3 = 3;
  if (param_1 != 0) {
    iVar1 = *(int *)(param_1 + 0x20);
    if ((iVar1 <= param_2) && (param_2 < *(int *)(param_1 + 0x24))) {
      uVar2 = (uint)(param_2 - iVar1) >> 3 & 0x1ffffffc;
      if ((uint)(*(int *)(param_1 + 0x24) - iVar1) < 0x101) {
        uVar3 = 0;
        *(uint *)(param_1 + uVar2) = 1 << (param_2 - iVar1 & 0x1fU) | *(uint *)(param_1 + uVar2);
      }
    }
  }
  return uVar3;
}


// 0x055accc (0x70 bytes)
undefined8 FUN_0055accc(int param_1,longlong param_2)

{
  uint uVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  
  if (param_1 != 0) {
    uVar1 = *(uint *)(param_1 + 0x20);
    if (((ulonglong)*(uint *)(param_1 + 0x24) - (ulonglong)uVar1 & 0xffffffff) < 0x101) {
      if ((int)uVar1 <= (int)param_2) {
        uVar3 = param_2 - (ulonglong)uVar1;
        uVar2 = uVar3 & 0x1f;
        uVar1 = (uint)uVar3 >> 3 & 0x1ffffffc;
        if ((int)param_2 < (int)*(uint *)(param_1 + 0x24)) {
          *(uint *)(param_1 + uVar1) =
               *(uint *)(param_1 + uVar1) &
               ((uint)(-0x100000002 << uVar2) | (uint)(0xfffffffefffffffe >> 0x40 - uVar2));
          return 0;
        }
      }
      return 0;
    }
  }
  return 3;
}


// 0x055ad3c (0x1e0 bytes)
undefined8 FUN_0055ad3c(uint *param_1,uint *param_2,int *param_3)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  uint *puVar4;
  uint *puVar5;
  uint *puVar6;
  uint uVar7;
  uint uVar8;
  longlong lVar9;
  
  if (((param_1 == (uint *)0x0) || (param_2 == (uint *)0x0)) || (param_3 == (int *)0x0)) {
    return 3;
  }
  uVar7 = param_2[8];
  uVar8 = param_3[8];
  if (uVar7 == uVar8) {
    iVar3 = 0;
    lVar9 = 8;
    do {
      puVar5 = (uint *)(iVar3 + (int)param_2);
      puVar4 = (uint *)(iVar3 + (int)param_3);
      puVar6 = (uint *)(iVar3 + (int)param_1);
      iVar3 = iVar3 + 4;
      *puVar6 = *puVar5 | *puVar4;
      lVar9 = lVar9 + -1;
    } while (lVar9 != 0);
    uVar2 = param_2[9];
    uVar1 = param_3[9];
    param_1[8] = uVar7;
    if ((int)uVar2 <= (int)uVar1) goto LAB_0055ae08;
  }
  else if ((int)uVar7 < (int)uVar8) {
    uVar8 = uVar8 - uVar7;
    puVar4 = param_2 + 1;
    lVar9 = 7;
    *param_1 = *param_3 << (uVar8 & 0x3f) | *param_2;
    iVar3 = 0;
    do {
      uVar2 = *puVar4;
      puVar4 = puVar4 + 1;
      *(uint *)((int)param_1 + iVar3 + 4) =
           *(int *)(iVar3 + (int)param_3) >> (0x20 - uVar8 & 0x3f) |
           ((int *)(iVar3 + (int)param_3))[1] << (uVar8 & 0x3f) | uVar2;
      lVar9 = lVar9 + -1;
      iVar3 = iVar3 + 4;
    } while (lVar9 != 0);
    uVar2 = param_2[9];
    uVar1 = param_3[9];
    param_1[8] = uVar7;
    if ((int)uVar2 <= (int)uVar1) goto LAB_0055ae08;
  }
  else {
    uVar7 = uVar8 - uVar7;
    puVar4 = param_2 + 1;
    lVar9 = 7;
    *param_1 = *param_3 << (uVar7 & 0x3f) | *param_2;
    iVar3 = 0;
    do {
      uVar2 = *puVar4;
      puVar4 = puVar4 + 1;
      *(uint *)((int)param_1 + iVar3 + 4) =
           *(int *)(iVar3 + (int)param_3) >> (0x20 - uVar7 & 0x3f) |
           ((int *)(iVar3 + (int)param_3))[1] << (uVar7 & 0x3f) | uVar2;
      lVar9 = lVar9 + -1;
      iVar3 = iVar3 + 4;
    } while (lVar9 != 0);
    uVar2 = param_2[9];
    uVar1 = param_3[9];
    param_1[8] = uVar8;
    if ((int)uVar2 <= (int)uVar1) goto LAB_0055ae08;
  }
  uVar1 = uVar2;
LAB_0055ae08:
  param_1[9] = uVar1;
  return 0;
}


// 0x055af1c (0x1e4 bytes)
undefined8 FUN_0055af1c(uint *param_1,uint *param_2,uint *param_3)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  uint *puVar4;
  uint *puVar5;
  uint *puVar6;
  uint uVar7;
  uint uVar8;
  longlong lVar9;
  
  if (((param_1 == (uint *)0x0) || (param_2 == (uint *)0x0)) || (param_3 == (uint *)0x0)) {
    return 3;
  }
  uVar7 = param_2[8];
  uVar8 = param_3[8];
  if (uVar7 == uVar8) {
    iVar3 = 0;
    lVar9 = 8;
    do {
      puVar6 = (uint *)(iVar3 + (int)param_2);
      puVar5 = (uint *)(iVar3 + (int)param_3);
      puVar4 = (uint *)(iVar3 + (int)param_1);
      iVar3 = iVar3 + 4;
      *puVar4 = *puVar6 & ~*puVar5;
      lVar9 = lVar9 + -1;
    } while (lVar9 != 0);
    uVar2 = param_2[9];
    uVar1 = param_3[9];
    param_1[8] = uVar7;
    if ((int)uVar2 <= (int)uVar1) goto LAB_0055afe4;
  }
  else if ((int)uVar7 < (int)uVar8) {
    uVar8 = uVar8 - uVar7;
    puVar4 = param_2 + 1;
    lVar9 = 7;
    *param_1 = *param_2 & ~(*param_3 << (uVar8 & 0x3f));
    iVar3 = 0;
    do {
      uVar2 = *puVar4;
      puVar4 = puVar4 + 1;
      *(uint *)((int)param_1 + iVar3 + 4) =
           uVar2 & ~(((int *)((int)param_3 + iVar3))[1] << (uVar8 & 0x3f) |
                    *(int *)((int)param_3 + iVar3) >> (0x20 - uVar8 & 0x3f));
      lVar9 = lVar9 + -1;
      iVar3 = iVar3 + 4;
    } while (lVar9 != 0);
    uVar2 = param_2[9];
    uVar1 = param_3[9];
    param_1[8] = uVar7;
    if ((int)uVar2 <= (int)uVar1) goto LAB_0055afe4;
  }
  else {
    uVar7 = uVar7 - uVar8;
    puVar4 = param_3 + 1;
    lVar9 = 7;
    *param_1 = *param_2 << (uVar7 & 0x3f) & ~*param_3;
    iVar3 = 0;
    do {
      uVar2 = *puVar4;
      puVar4 = puVar4 + 1;
      *(uint *)((int)param_1 + iVar3 + 4) =
           (((int *)((int)param_2 + iVar3))[1] << (uVar7 & 0x3f) |
           *(int *)((int)param_2 + iVar3) >> (0x20 - uVar7 & 0x3f)) & ~uVar2;
      lVar9 = lVar9 + -1;
      iVar3 = iVar3 + 4;
    } while (lVar9 != 0);
    uVar2 = param_2[9];
    uVar1 = param_3[9];
    param_1[8] = uVar8;
    if ((int)uVar2 <= (int)uVar1) goto LAB_0055afe4;
  }
  uVar1 = uVar2;
LAB_0055afe4:
  param_1[9] = uVar1;
  return 0;
}


// 0x055b100 (0x134 bytes)
undefined8 FUN_0055b100(int *param_1,undefined4 *param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  
  if ((param_1 != (int *)0x0) && (param_2 != (undefined4 *)0x0)) {
    param_2[10] = 0;
    *param_2 = 0x100;
    param_2[1] = 0;
    param_2[2] = 0;
    param_2[3] = 0;
    param_2[4] = 0;
    param_2[5] = 0;
    param_2[6] = 0;
    param_2[7] = 0;
    param_2[8] = 0;
    param_2[9] = 0;
    param_2[10] = param_1[0x113];
    iVar2 = param_1[0x113];
    if (0 < iVar2) {
      iVar3 = 0;
      piVar4 = param_1;
      do {
        iVar1 = *piVar4;
        if (((param_1[0x100] != iVar1) && (iVar1 != 0)) && (*(int *)(iVar1 + 0x20) != 0)) {
          if (*(int *)(iVar1 + 0xc) - 4U < 2) {
            FUN_0055ac68(param_2 + 1,iVar3);
            iVar2 = param_1[0x113];
          }
        }
        iVar3 = iVar3 + 1;
        piVar4 = piVar4 + 1;
      } while (iVar3 < iVar2);
    }
    return 0;
  }
  return 3;
}


// 0x055b234 (0x130 bytes)
undefined8 FUN_0055b234(int *param_1,undefined4 *param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  
  if ((param_1 != (int *)0x0) && (param_2 != (undefined4 *)0x0)) {
    param_2[10] = 0;
    *param_2 = 0x100;
    param_2[1] = 0;
    param_2[2] = 0;
    param_2[3] = 0;
    param_2[4] = 0;
    param_2[5] = 0;
    param_2[6] = 0;
    param_2[7] = 0;
    param_2[8] = 0;
    param_2[9] = 0;
    param_2[10] = param_1[0x113];
    iVar2 = param_1[0x113];
    if (0 < iVar2) {
      iVar3 = 0;
      piVar4 = param_1;
      do {
        while( true ) {
          iVar1 = *piVar4;
          if (((iVar1 == 0) || (param_1[0x100] == iVar1)) || (*(int *)(iVar1 + 0x20) == 0)) break;
          FUN_0055ac68(param_2 + 1,iVar3);
          iVar3 = iVar3 + 1;
          iVar2 = param_1[0x113];
          piVar4 = piVar4 + 1;
          if (iVar2 <= iVar3) {
            return 0;
          }
        }
        iVar3 = iVar3 + 1;
        piVar4 = piVar4 + 1;
      } while (iVar3 < iVar2);
    }
    return 0;
  }
  return 3;
}


// 0x055b364 (0x48 bytes)
undefined8 FUN_0055b364(undefined4 *param_1)

{
  undefined8 uVar1;
  
  uVar1 = 3;
  if (param_1 != (undefined4 *)0x0) {
    param_1[8] = 0;
    param_1[9] = 0x100;
    uVar1 = 0;
    *param_1 = 0;
    param_1[1] = 0;
    param_1[2] = 0;
    param_1[3] = 0;
    param_1[4] = 0;
    param_1[5] = 0;
    param_1[6] = 0;
    param_1[7] = 0;
  }
  return uVar1;
}


// 0x055b3ac (0x24 bytes)
void FUN_0055b3ac(void)

{
  FUN_0055372c();
  return;
}


// 0x055b3d0 (0x80 bytes)
void FUN_0055b3d0(undefined8 param_1)

{
  longlong lVar1;
  GPiece<16> local_30;
  
  lVar1 = 0;
  do {
    lVar1 = lVar1 + 1;
    FUN_0055b3ac(param_1,local_30);
  } while (lVar1 != 2);
  return;
}


// 0x055b450 (0x64 bytes)
void FUN_0055b450(undefined8 param_1,uint *param_2)

{
  uint uVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  
  uVar1 = *param_2;
  uVar3 = 0;
  do {
    uVar2 = uVar3 & 0x3fffffff;
    uVar3 = uVar3 + 1;
    FUN_00553f04(param_1,(ulonglong)uVar1 + uVar2 * 4 & 0xffffffff);
  } while (uVar3 != 0x10);
  return;
}


// 0x055b4b4 (0x28 bytes)
void FUN_0055b4b4(undefined8 param_1,undefined4 *param_2)

{
  FUN_00553f04(param_1,*param_2);
  return;
}


// 0x055b4dc (0x58 bytes)
void FUN_0055b4dc(undefined8 param_1,int *param_2)

{
  int iVar1;
  
  iVar1 = *param_2;
  FUN_00553f04(param_1,iVar1);
  FUN_00553b40(param_1,iVar1 + 4,8);
  return;
}


// 0x055b534 (0x2c bytes)
void FUN_0055b534(undefined8 param_1,undefined4 *param_2)

{
  FUN_00553b40(param_1,*param_2,0x14);
  return;
}


// 0x055b560 (0x64 bytes)
void FUN_0055b560(undefined8 param_1,int *param_2)

{
  int iVar1;
  
  iVar1 = *param_2;
  FUN_00553f04(param_1,iVar1);
  FUN_00554160(param_1,iVar1 + 4);
  FUN_00553c74(param_1,2);
  return;
}


// 0x055b5c4 (0x28 bytes)
void FUN_0055b5c4(undefined8 param_1,undefined4 *param_2)

{
  FUN_00554160(param_1,*param_2);
  return;
}


// 0x055b5ec (0x54 bytes)
void FUN_0055b5ec(undefined8 param_1,int *param_2)

{
  int iVar1;
  
  iVar1 = *param_2;
  FUN_00554160(param_1,iVar1);
  FUN_00554160(param_1,iVar1 + 2);
  return;
}


// 0x055b640 (0x28 bytes)
void FUN_0055b640(undefined8 param_1,undefined4 *param_2)

{
  FUN_00554290(param_1,*param_2);
  return;
}


// 0x055b668 (0x28 bytes)
void FUN_0055b668(undefined8 param_1,undefined4 *param_2)

{
  FUN_00554290(param_1,*param_2);
  return;
}


// 0x055b690 (0x7c bytes)
void FUN_0055b690(undefined8 param_1,int *param_2)

{
  int iVar1;
  
  iVar1 = *param_2;
  FUN_00554290(param_1,iVar1);
  FUN_00554290(param_1,iVar1 + 1);
  FUN_00554160(param_1,iVar1 + 2);
  FUN_00554160(param_1,iVar1 + 4);
  return;
}


// 0x055b70c (0x100 bytes)
void FUN_0055b70c(undefined8 param_1,int *param_2)

{
  int iVar1;
  
  iVar1 = *param_2;
  FUN_00554290(param_1,iVar1);
  FUN_00554290(param_1,iVar1 + 1);
  FUN_00554290(param_1,iVar1 + 2);
  FUN_00554290(param_1,iVar1 + 3);
  FUN_00554290(param_1,iVar1 + 4);
  FUN_00553c74(param_1,1);
  FUN_00554160(param_1,iVar1 + 6);
  FUN_00554160(param_1,iVar1 + 8);
  FUN_00554160(param_1,iVar1 + 10);
  FUN_00553b40(param_1,iVar1 + 0xc,*(undefined2 *)(iVar1 + 10));
  return;
}


// 0x055b80c (0x9c bytes)
void FUN_0055b80c(undefined8 param_1,int *param_2)

{
  int iVar1;
  
  iVar1 = *param_2;
  FUN_00554290(param_1,iVar1);
  FUN_00553c74(param_1,3);
  FUN_00553f04(param_1,iVar1 + 4);
  FUN_00554290(param_1,iVar1 + 8);
  FUN_00553c74(param_1,1);
  FUN_00554160(param_1,iVar1 + 10);
  return;
}


// 0x055b8a8 (0x64 bytes)
void FUN_0055b8a8(undefined8 param_1,int *param_2)

{
  int iVar1;
  
  iVar1 = *param_2;
  FUN_00553f04(param_1,iVar1);
  FUN_00554160(param_1,iVar1 + 4);
  FUN_00553c74(param_1,2);
  return;
}


// 0x055b90c (0xfc bytes)
void FUN_0055b90c(undefined8 param_1,int *param_2)

{
  int iVar1;
  
  iVar1 = *param_2;
  FUN_00554290(param_1,iVar1);
  FUN_00554290(param_1,iVar1 + 1);
  FUN_00554160(param_1,iVar1 + 2);
  FUN_00554160(param_1,iVar1 + 4);
  FUN_00554160(param_1,iVar1 + 6);
  FUN_00554160(param_1,iVar1 + 8);
  FUN_00554160(param_1,iVar1 + 10);
  FUN_00553f04(param_1,iVar1 + 0xc);
  FUN_00553b40(param_1,iVar1 + 0x10,4);
  FUN_00553b40(param_1,iVar1 + 0x14,0x18);
  return;
}


// 0x055ba08 (0xb8 bytes)
void FUN_0055ba08(undefined8 param_1,int *param_2)

{
  int iVar1;
  
  iVar1 = *param_2;
  FUN_00554290(param_1,iVar1);
  FUN_00554290(param_1,iVar1 + 1);
  FUN_00554160(param_1,iVar1 + 2);
  FUN_00554160(param_1,iVar1 + 4);
  FUN_00554160(param_1,iVar1 + 6);
  FUN_00553f04(param_1,iVar1 + 8);
  FUN_00553f04(param_1,iVar1 + 0xc);
  return;
}


// 0x055bac0 (0xb0 bytes)
void FUN_0055bac0(undefined8 param_1,uint *param_2)

{
  ulonglong uVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  
  uVar2 = (ulonglong)*param_2;
  FUN_00554290(param_1,*param_2);
  uVar3 = 0;
  FUN_00554290(param_1,uVar2 + 1 & 0xffffffff);
  FUN_00553c74(param_1,2);
  FUN_00553b40(param_1,uVar2 + 4 & 0xffffffff,8);
  do {
    uVar1 = uVar3 & 0x3fffffff;
    uVar3 = uVar3 + 1;
    FUN_00553f04(param_1,uVar2 + uVar1 * 4 + 0xc & 0xffffffff);
  } while (uVar3 != 0x10);
  return;
}


// 0x055bb70 (0x78 bytes)
void FUN_0055bb70(undefined8 param_1,int *param_2)

{
  int iVar1;
  
  iVar1 = *param_2;
  FUN_00553f04(param_1,iVar1);
  FUN_00554290(param_1,iVar1 + 4);
  FUN_00554290(param_1,iVar1 + 5);
  FUN_00553c74(param_1,2);
  return;
}


// 0x055bbe8 (0xdc bytes)
void FUN_0055bbe8(undefined8 param_1,int *param_2)

{
  int iVar1;
  GPiece<24> local_40;
  
  iVar1 = *param_2;
  FUN_00553f04(param_1,iVar1);
  FUN_0055b3d0(param_1,local_40);
  FUN_00553f04(param_1,iVar1 + 0x34);
  FUN_0055b450(param_1,local_40);
  FUN_00553b40(param_1,iVar1 + 0x78,0x11);
  FUN_00553b40(param_1,iVar1 + 0x89,0x11);
  FUN_00553c74(param_1,2);
  return;
}


// 0x055bcc4 (0x28 bytes)
void FUN_0055bcc4(undefined8 param_1,undefined4 *param_2)

{
  FUN_00553f04(param_1,*param_2);
  return;
}


// 0x055bcec (0xfc bytes)
undefined4 FUN_0055bcec(char *param_1)

{
  char cVar1;
  undefined1 uVar2;
  undefined1 uVar3;
  short sVar4;
  undefined1 uVar5;
  char cVar6;
  undefined4 local_10;
  
  local_10 = 0;
  if (param_1 != (char *)0x0) {
    cVar6 = '\0';
LAB_0055bd20:
    cVar1 = *param_1;
    uVar3 = local_10.piece<2,1>();
    sVar4 = local_10.piece<2,2>();
    uVar5 = (undefined1)local_10;
    if (cVar1 != '\0') {
      while( true ) {
        param_1 = param_1 + 1;
        if (cVar1 == '.') break;
        if (9 < (byte)(cVar1 - 0x30U)) goto LAB_0055bd20;
        cVar6 = cVar6 * '\n' + cVar1 + -0x30;
        cVar1 = *param_1;
        if (cVar1 == '\0') goto LAB_0055bd84;
      }
      local_10.piece<2,2>() = sVar4 << 8;
      local_10 = CONCAT31(CONCAT12(uVar3,local_10.piece<2,2>()) >> 8,cVar6);
      cVar6 = '\0';
      goto LAB_0055bd20;
    }
LAB_0055bd84:
    uVar2 = local_10.piece<1,1>();
    local_10 = CONCAT13(uVar2,CONCAT12(uVar3,sVar4));
    local_10 = CONCAT31(CONCAT21(local_10.piece<0,2>(),uVar5),cVar6);
  }
  return local_10;
}


// 0x055bde8 (0xd8 bytes)
void FUN_0055bde8(char *param_1,undefined4 param_2)

{
  byte bVar1;
  ulonglong uVar2;
  byte *pbVar3;
  int iVar4;
  ulonglong uVar5;
  longlong lVar6;
  undefined4 uStack00000038;
  
  uStack00000038 = param_2;
  if (param_1 == (char *)0x0) {
    return;
  }
  lVar6 = 4;
  pbVar3 = (byte *)&stack0x00000038;
  iVar4 = 0;
  do {
    if (iVar4 != 0) {
      *param_1 = '.';
      param_1 = param_1 + 1;
    }
    bVar1 = *pbVar3;
    uVar5 = (ulonglong)bVar1;
    if (uVar5 < 100) {
      if (9 < uVar5) goto LAB_0055be38;
      *param_1 = bVar1 + 0x30;
      param_1 = param_1 + 1;
    }
    else {
      *param_1 = bVar1 / 100 + 0x30;
      uVar5 = uVar5 % 100;
      param_1 = param_1 + 1;
LAB_0055be38:
      uVar2 = uVar5 / 10;
      *param_1 = (char)uVar2 + '0';
      param_1[1] = ((char)uVar5 - ((char)(uVar2 << 1) + (char)(uVar2 << 3))) + '0';
      param_1 = param_1 + 2;
    }
    pbVar3 = pbVar3 + 1;
    iVar4 = iVar4 + 1;
    lVar6 = lVar6 + -1;
    if (lVar6 == 0) {
      *param_1 = '\0';
      return;
    }
  } while( true );
}


// 0x055bec0 (0x1a4 bytes)
// strings: 00660110: 'AAAABBBBCCCCDDDDEEEEFFFFGGGGHHHHIIIIJJJJKKKKLLLLMMMMNNNNOOOOPPPPQQQQRRRRSSSSTTTT' (raw) | 0055c008: 'U@629&' (raw)

int FUN_0055bec0(byte *param_1,int param_2,undefined1 *param_3)

{
  byte bVar1;
  undefined1 uVar2;
  byte *pbVar3;
  ushort uVar4;
  uint3 uVar5;
  undefined *puVar6;
  undefined1 *puVar7;
  longlong lVar8;
  undefined1 *puVar9;
  undefined1 *puVar10;
  undefined1 *puVar11;
  
  puVar6 = PTR_DAT_0071b2c0;
  puVar11 = param_3;
  if (2 < param_2) {
    lVar8 = (ulonglong)(param_2 - 3U) / 3 + 1;
    puVar10 = param_3;
    if ((int)(param_2 - 3U) < 0) {
      lVar8 = 1;
    }
    do {
      bVar1 = *param_1;
      puVar11 = puVar10 + 4;
      param_2 = param_2 + -3;
      *puVar10 = puVar6[bVar1];
      uVar4 = CONCAT11(bVar1,param_1[1]);
      puVar10[1] = puVar6[uVar4 >> 2 & 0xff];
      pbVar3 = param_1 + 2;
      param_1 = param_1 + 3;
      uVar5 = CONCAT21(uVar4,*pbVar3);
      uVar2 = puVar6[uVar5 >> 4 & 0xff];
      puVar10[3] = puVar6[(uVar5 & 0x3f) * 4];
      puVar10[2] = uVar2;
      lVar8 = lVar8 + -1;
      puVar10 = puVar11;
    } while (lVar8 != 0);
  }
  puVar6 = PTR_DAT_0071b2c0;
  if (0 < param_2) {
    bVar1 = *param_1;
    puVar10 = puVar11 + 1;
    *puVar11 = PTR_DAT_0071b2c0[bVar1];
    if (param_2 < 2) {
      *puVar10 = puVar6[(bVar1 & 3) * 0x40];
      puVar11[2] = 0x3d;
      puVar11[3] = 0x3d;
      puVar11[4] = 0;
      return (int)(puVar11 + 4) - (int)param_3;
    }
    puVar9 = puVar11 + 2;
    puVar7 = puVar11 + 3;
    uVar2 = puVar6[(CONCAT11(bVar1,param_1[1]) & 0xf) * 0x10];
    puVar11 = puVar11 + 4;
    *puVar10 = puVar6[(ushort)(CONCAT11(bVar1,param_1[1]) >> 2) & 0xff];
    *puVar9 = uVar2;
    *puVar7 = 0x3d;
  }
  *puVar11 = 0;
  return (int)puVar11 - (int)param_3;
}


// 0x055c064 (0x2a4 bytes)
int FUN_0055c064(byte *param_1,int param_2,byte *param_3)

{
  bool bVar1;
  byte bVar2;
  undefined *puVar3;
  byte *pbVar4;
  byte *pbVar5;
  ulonglong uVar6;
  byte *pbVar8;
  longlong lVar7;
  byte *pbVar9;
  byte bVar10;
  ulonglong uVar11;
  ulonglong uVar12;
  
  puVar3 = PTR_DAT_0071b2c0;
  bVar1 = param_2 == 3;
  pbVar4 = param_3;
  if (param_2 < 4) {
    uVar6 = 0;
    uVar12 = 0;
    uVar11 = 0;
    bVar10 = 0;
LAB_0055c1b0:
    pbVar5 = pbVar4;
    if (param_2 == 0) goto LAB_0055c230;
  }
  else {
    pbVar8 = param_1 + 1;
    pbVar9 = param_1 + 2;
    pbVar5 = param_1 + 3;
    bVar2 = *param_1;
    param_1 = param_1 + 4;
    uVar6 = (ulonglong)(byte)PTR_DAT_0071b2c0[bVar2 + 0x100];
    uVar12 = (ulonglong)(byte)PTR_DAT_0071b2c0[*pbVar8 + 0x100];
    uVar11 = (ulonglong)(byte)PTR_DAT_0071b2c0[*pbVar9 + 0x100];
    bVar10 = PTR_DAT_0071b2c0[*pbVar5 + 0x100];
    if ((byte)(PTR_DAT_0071b2c0[bVar2 + 0x100] | PTR_DAT_0071b2c0[*pbVar8 + 0x100] |
               PTR_DAT_0071b2c0[*pbVar9 + 0x100] | bVar10) < 0x40) {
      lVar7 = (ulonglong)(param_2 - 4U >> 2) + 1;
      pbVar5 = param_1;
      if ((int)(param_2 - 4U) < 0) {
        lVar7 = 1;
      }
      do {
        param_2 = param_2 + -4;
        *pbVar4 = (byte)(uVar6 << 2) | (byte)((uVar12 << 0x20) >> 0x24);
        pbVar4[1] = (byte)(uVar12 << 4) | (byte)((uVar11 << 0x20) >> 0x22);
        pbVar4[2] = (byte)(uVar11 << 6) | bVar10;
        pbVar4 = pbVar4 + 3;
        bVar1 = param_2 == 3;
        lVar7 = lVar7 + -1;
        param_1 = pbVar5;
        if (lVar7 == 0) goto LAB_0055c1b0;
        bVar2 = *pbVar5;
        param_1 = pbVar5 + 4;
        pbVar8 = pbVar5 + 1;
        pbVar9 = pbVar5 + 2;
        uVar6 = (ulonglong)(byte)puVar3[bVar2 + 0x100];
        uVar12 = (ulonglong)(byte)puVar3[*pbVar8 + 0x100];
        uVar11 = (ulonglong)(byte)puVar3[*pbVar9 + 0x100];
        bVar10 = puVar3[pbVar5[3] + 0x100];
        pbVar5 = param_1;
      } while ((byte)(puVar3[bVar2 + 0x100] | puVar3[*pbVar8 + 0x100] | puVar3[*pbVar9 + 0x100] |
                     bVar10) < 0x40);
    }
  }
  if (param_2 == 1) {
    uVar12 = 0x40;
    uVar11 = 0x40;
    bVar10 = 0x40;
    uVar6 = (ulonglong)(byte)PTR_DAT_0071b2c0[*param_1 + 0x100];
  }
  else if (param_2 == 2) {
    uVar11 = 0x40;
    bVar10 = 0x40;
    uVar12 = (ulonglong)(byte)PTR_DAT_0071b2c0[param_1[1] + 0x100];
    uVar6 = (ulonglong)(byte)PTR_DAT_0071b2c0[*param_1 + 0x100];
  }
  else if (bVar1) {
    bVar10 = 0x40;
    uVar6 = (ulonglong)(byte)PTR_DAT_0071b2c0[*param_1 + 0x100];
    uVar11 = (ulonglong)(byte)PTR_DAT_0071b2c0[param_1[2] + 0x100];
    uVar12 = (ulonglong)(byte)PTR_DAT_0071b2c0[param_1[1] + 0x100];
  }
  pbVar5 = pbVar4;
  if ((uVar6 | uVar12) < 0x40) {
    *pbVar4 = (byte)(uVar6 << 2) | (byte)((uVar12 << 0x20) >> 0x24);
    pbVar5 = pbVar4 + 1;
    if (uVar11 < 0x40) {
      *pbVar5 = (byte)(uVar12 << 4) | (byte)((uVar11 << 0x20) >> 0x22);
      pbVar5 = pbVar4 + 2;
      if (bVar10 < 0x40) {
        *pbVar5 = (byte)(uVar11 << 6) | bVar10;
        pbVar5 = pbVar4 + 3;
      }
    }
  }
LAB_0055c230:
  return (int)pbVar5 - (int)param_3;
}


// 0x055c308 (0x270 bytes)
void FUN_0055c308(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined *puVar11;
  undefined *puVar12;
  undefined *puVar13;
  undefined *puVar14;
  undefined *puVar15;
  undefined *puVar16;
  undefined *puVar17;
  undefined *puVar18;
  undefined *puVar19;
  undefined *puVar20;
  undefined *puVar21;
  undefined *puVar22;
  undefined *puVar23;
  
  puVar17 = PTR_PTR_0071b308;
  puVar16 = PTR_PTR_0071b304;
  puVar15 = PTR_PTR_0071b300;
  puVar14 = PTR_PTR_0071b2fc;
  puVar13 = PTR_PTR_0071b2f8;
  puVar11 = PTR_PTR_0071b2f0;
  puVar10 = PTR_PTR_0071b2ec;
  puVar9 = PTR_PTR_0071b2e8;
  puVar8 = PTR_PTR_0071b2e4;
  puVar7 = PTR_PTR_0071b2e0;
  puVar6 = PTR_PTR_0071b2dc;
  puVar5 = PTR_PTR_0071b2d8;
  puVar4 = PTR_PTR_0071b2d4;
  puVar3 = PTR_PTR_0071b2d0;
  puVar2 = PTR_PTR_0071b2cc;
  puVar1 = PTR_DAT_0071b2c4;
  *(undefined **)PTR_DAT_0071b2c4 = PTR_PTR_0071b2c8;
  puVar12 = PTR_PTR_0071b2f4;
  *(undefined **)(puVar1 + 0xc) = puVar4;
  *(undefined **)(puVar1 + 4) = puVar2;
  *(undefined **)(puVar1 + 0x10) = puVar5;
  *(undefined **)(puVar1 + 8) = puVar3;
  *(undefined **)(puVar1 + 0x14) = puVar6;
  *(undefined **)(puVar1 + 0x18) = puVar7;
  *(undefined **)(puVar1 + 0x1c) = puVar8;
  puVar23 = PTR_PTR_0071b348;
  puVar22 = PTR_PTR_0071b344;
  puVar21 = PTR_PTR_0071b340;
  puVar20 = PTR_PTR_0071b33c;
  puVar19 = PTR_PTR_0071b338;
  puVar18 = PTR_PTR_0071b334;
  *(undefined **)(puVar1 + 0x20) = puVar9;
  *(undefined **)(puVar1 + 0x24) = puVar10;
  puVar10 = PTR_PTR_0071b32c;
  *(undefined **)(puVar1 + 0x40) = puVar17;
  puVar17 = PTR_PTR_0071b330;
  puVar5 = PTR_PTR_0071b318;
  puVar3 = PTR_PTR_0071b310;
  puVar2 = PTR_PTR_0071b30c;
  *(undefined **)(puVar1 + 0x30) = puVar11;
  *(undefined **)(puVar1 + 0x28) = puVar12;
  puVar11 = PTR_PTR_0071b34c;
  puVar8 = PTR_PTR_0071b324;
  *(undefined **)(puVar1 + 0x2c) = puVar13;
  *(undefined **)(puVar1 + 0x34) = puVar14;
  puVar9 = PTR_PTR_0071b328;
  puVar6 = PTR_PTR_0071b31c;
  *(undefined **)(puVar1 + 0x38) = puVar15;
  *(undefined **)(puVar1 + 0x3c) = puVar16;
  puVar7 = PTR_PTR_0071b320;
  puVar4 = PTR_PTR_0071b314;
  *(undefined **)(puVar1 + 0x7c) = puVar22;
  *(undefined **)(puVar1 + 0x80) = puVar23;
  *(undefined **)(puVar1 + 0x74) = puVar20;
  *(undefined **)(puVar1 + 0x78) = puVar21;
  *(undefined **)(puVar1 + 0x6c) = puVar18;
  *(undefined **)(puVar1 + 0x70) = puVar19;
  *(undefined **)(puVar1 + 100) = puVar10;
  *(undefined **)(puVar1 + 0x68) = puVar17;
  puVar18 = PTR_PTR_0071b38c;
  puVar17 = PTR_PTR_0071b388;
  puVar16 = PTR_PTR_0071b384;
  puVar15 = PTR_PTR_0071b380;
  puVar14 = PTR_PTR_0071b37c;
  puVar13 = PTR_PTR_0071b378;
  puVar10 = PTR_PTR_0071b370;
  *(undefined **)(puVar1 + 0x50) = puVar5;
  puVar12 = PTR_PTR_0071b374;
  puVar5 = PTR_PTR_0071b35c;
  *(undefined **)(puVar1 + 0x5c) = puVar8;
  *(undefined **)(puVar1 + 0x60) = puVar9;
  puVar9 = PTR_PTR_0071b36c;
  puVar8 = PTR_PTR_0071b368;
  *(undefined **)(puVar1 + 0x54) = puVar6;
  *(undefined **)(puVar1 + 0x58) = puVar7;
  puVar7 = PTR_PTR_0071b364;
  puVar6 = PTR_PTR_0071b360;
  *(undefined **)(puVar1 + 0x4c) = puVar4;
  *(undefined **)(puVar1 + 0x44) = puVar2;
  puVar4 = PTR_PTR_0071b358;
  puVar2 = PTR_PTR_0071b350;
  *(undefined **)(puVar1 + 0x48) = puVar3;
  *(undefined **)(puVar1 + 0x84) = puVar11;
  puVar11 = PTR_PTR_0071b390;
  puVar3 = PTR_PTR_0071b354;
  *(undefined **)(puVar1 + 0xc0) = puVar17;
  *(undefined **)(puVar1 + 0xc4) = puVar18;
  *(undefined **)(puVar1 + 0xb8) = puVar15;
  *(undefined **)(puVar1 + 0xbc) = puVar16;
  *(undefined **)(puVar1 + 0xb0) = puVar13;
  *(undefined **)(puVar1 + 0xb4) = puVar14;
  *(undefined **)(puVar1 + 0xa8) = puVar10;
  *(undefined **)(puVar1 + 0xac) = puVar12;
  *(undefined **)(puVar1 + 0x94) = puVar5;
  puVar16 = PTR_DAT_0071b3c4;
  puVar13 = PTR_PTR_0071b3b4;
  puVar12 = PTR_PTR_0071b3b0;
  *(undefined **)(puVar1 + 0xa0) = puVar8;
  *(undefined **)(puVar1 + 0xa4) = puVar9;
  puVar9 = PTR_PTR_0071b3a0;
  puVar8 = PTR_PTR_0071b39c;
  *(undefined **)(puVar1 + 0x98) = puVar6;
  *(undefined **)(puVar1 + 0x9c) = puVar7;
  puVar5 = PTR_PTR_0071b398;
  *(undefined **)(puVar1 + 0x90) = puVar4;
  puVar15 = PTR_PTR_0071b3bc;
  puVar14 = PTR_PTR_0071b3b8;
  puVar10 = PTR_PTR_0071b3ac;
  puVar7 = PTR_PTR_0071b3a8;
  puVar6 = PTR_PTR_0071b3a4;
  puVar4 = PTR_PTR_0071b394;
  *(undefined **)(puVar1 + 0x88) = puVar2;
  *(undefined **)(puVar1 + 0x8c) = puVar3;
  *(undefined **)(puVar1 + 200) = puVar11;
  *(undefined **)(puVar1 + 0xe8) = puVar12;
  puVar2 = PTR_PTR_0071b3c0;
  *(undefined **)(puVar1 + 0xec) = puVar13;
  *(undefined **)(puVar1 + 0xd8) = puVar9;
  *(undefined **)(puVar1 + 0xd4) = puVar8;
  *(undefined **)(puVar1 + 0xd0) = puVar5;
  *(undefined **)puVar16 = puVar1;
  *(undefined **)(puVar1 + 0xf0) = puVar14;
  *(undefined **)(puVar1 + 0xe4) = puVar10;
  *(undefined **)(puVar1 + 0xe0) = puVar7;
  *(undefined **)(puVar1 + 0xdc) = puVar6;
  *(undefined **)(puVar1 + 0xf4) = puVar15;
  *(undefined **)(puVar1 + 0xcc) = puVar4;
  *(undefined4 *)(puVar1 + 0x10c) = 0;
  *(undefined4 *)(puVar1 + 0x108) = 0;
  *(undefined **)(puVar1 + 0xf8) = puVar2;
  *(undefined4 *)(puVar1 + 0xfc) = 0xe4a;
  *(undefined4 *)(puVar1 + 0x104) = 0x10000;
  *(undefined4 *)(puVar1 + 0x100) = 0x12c00;
  return;
}


// 0x055c578 (0x68 bytes)
undefined8 FUN_0055c578(undefined8 param_1,int param_2)

{
  int iVar1;
  
  iVar1 = *(int *)PTR_DAT_0071b3c8;
  *(undefined4 *)(param_2 + 0xd0) = 0;
  *(undefined4 *)(param_2 + 0xcc) = 0;
  if (iVar1 != 0) {
    (*(code *)**(undefined4 **)(iVar1 + 0x58))
              (*(undefined4 *)(param_2 + 0x8c),*(undefined4 *)(param_2 + 0x90));
  }
  return 1;
}


// 0x055c5e0 (0x80 bytes)
undefined8 FUN_0055c5e0(int param_1,int *param_2,uint param_3)

{
  uint uVar1;
  undefined8 uVar2;
  
  uVar2 = 0;
  if (*(int *)(param_1 + 0xe4) == 1) {
    uVar1 = *(uint *)(param_1 + 0xd8);
    uVar2 = 59000;
    if (param_3 <= uVar1) {
      if ((param_2 != (int *)0x0) && (*param_2 == 0x1b)) {
        if ((uint)param_2[0x39] < param_3) {
          return 59000;
        }
        param_2[0x39] = param_2[0x39] - param_3;
        uVar1 = *(uint *)(param_1 + 0xd8);
        param_2[0x3a] = param_3 + param_2[0x3a];
      }
      uVar2 = 0;
      *(uint *)(param_1 + 0xd8) = uVar1 - param_3;
      *(uint *)(param_1 + 0xdc) = param_3 + *(int *)(param_1 + 0xdc);
    }
  }
  return uVar2;
}


// 0x055c660 (0x8 bytes)
// strings: 00903b58: 'rt_udp 3.05.201103091800'

undefined * FUN_0055c660(void)

{
  return PTR_s_rt_udp_3_05_201103091800_0071b3cc;
}


// 0x055c668 (0x74 bytes)
undefined8 FUN_0055c668(undefined4 *param_1)

{
  undefined *puVar1;
  
  FUN_0055c308();
  puVar1 = PTR_DAT_0071b2c4;
  if (*(int *)PTR_DAT_0071b3c4 != 0) {
    *(undefined4 *)(PTR_DAT_0071b2c4 + 0xfc) = *param_1;
    *(undefined4 *)(puVar1 + 0x100) = param_1[1];
    *(undefined4 *)(puVar1 + 0x104) = param_1[3];
    *(undefined4 *)(puVar1 + 0x108) = param_1[2];
    *(undefined4 *)(puVar1 + 0x110) = param_1[4];
    *(undefined4 *)(puVar1 + 0x114) = param_1[5];
  }
  return 0;
}


// 0x055c6dc (0x2c bytes)
undefined8 FUN_0055c6dc(int param_1,undefined4 param_2)

{
  undefined8 uVar1;
  
  uVar1 = 0xd2f2;
  if (param_1 != 0) {
    uVar1 = 0;
    *(undefined4 *)(param_1 + 0x84) = param_2;
  }
  return uVar1;
}


// 0x055c708 (0x84 bytes)
undefined8 FUN_0055c708(int param_1,int *param_2,int param_3,int *param_4)

{
  undefined8 uVar1;
  
  *param_4 = 0;
  uVar1 = 0xd2f2;
  if (((param_1 != 0) && (uVar1 = 0xd2f3, param_2 != (int *)0x0)) && (*param_2 == 0x1b)) {
    uVar1 = 0;
    if (param_3 == 0) {
      *param_4 = param_2[7];
    }
    else {
      uVar1 = 2;
      if (param_3 == 1) {
        *param_4 = param_2[0xc];
        return 0;
      }
    }
  }
  return uVar1;
}


// 0x055c78c (0x38 bytes)
undefined8 FUN_0055c78c(int param_1,undefined4 *param_2)

{
  undefined8 uVar1;
  
  *param_2 = 0;
  uVar1 = 0xd2f2;
  if (param_1 != 0) {
    uVar1 = 0;
    *param_2 = *(undefined4 *)(param_1 + 0x84);
  }
  return uVar1;
}


// 0x055c7c4 (0x38 bytes)
undefined8 FUN_0055c7c4(int param_1,undefined2 *param_2)

{
  undefined8 uVar1;
  
  *param_2 = 0;
  uVar1 = 0xd2f3;
  if (param_1 != 0) {
    uVar1 = 0;
    *param_2 = *(undefined2 *)(param_1 + 0x6c);
  }
  return uVar1;
}


// 0x055c7fc (0xf4 bytes)
undefined8
FUN_0055c7fc(int param_1,int *param_2,int param_3,int *param_4,int *param_5,undefined4 *param_6)

{
  int iVar2;
  ulonglong uVar1;
  uint uVar3;
  
  if (param_1 == 0) {
    return 0xd2f2;
  }
  if ((param_2 == (int *)0x0) || (*param_2 != 0x1b)) {
    return 0xd2f3;
  }
  if (param_3 == 0) {
    if (param_4 != (int *)0x0) {
      *param_4 = param_2[7];
    }
    if (param_5 != (int *)0x0) {
      *param_5 = param_2[8];
    }
    if (param_6 == (undefined4 *)0x0) {
      return 0;
    }
    iVar2 = param_2[8];
    uVar3 = param_2[7];
  }
  else {
    if (param_3 != 1) {
      return 2;
    }
    if (param_4 != (int *)0x0) {
      *param_4 = param_2[0xc];
    }
    if (param_5 != (int *)0x0) {
      *param_5 = param_2[0xd];
    }
    if (param_6 == (undefined4 *)0x0) {
      return 0;
    }
    iVar2 = param_2[0xd];
    uVar3 = param_2[0xc];
  }
  uVar1 = (ulonglong)(uint)(iVar2 * 100) / (ulonglong)uVar3;
  *param_6 = (int)uVar1;
  if (uVar1 < 0x65) {
    return 0;
  }
  *param_6 = 100;
  return 0;
}


// 0x055c8f0 (0x40 bytes)
undefined8 FUN_0055c8f0(int *param_1,int *param_2,undefined4 *param_3)

{
  int iVar1;
  undefined8 uVar2;
  
  uVar2 = 0xd2f2;
  if (param_1 != (int *)0x0) {
    uVar2 = 0;
    iVar1 = *param_1;
    *param_2 = param_1[0x2c];
    param_2[1] = param_1[0x2d];
    *param_3 = *(undefined4 *)(iVar1 + 8);
  }
  return uVar2;
}


// 0x055c930 (0xdc bytes)
undefined8 FUN_0055c930(int param_1,int param_2,undefined4 *param_3,undefined4 *param_4)

{
  int iVar1;
  int iVar2;
  undefined8 uVar3;
  
  uVar3 = 0xd2f2;
  if (param_1 != 0) {
    if ((param_3 != (undefined4 *)0x0) && (param_4 != (undefined4 *)0x0)) {
      if (param_2 != 0) {
        *param_3 = *(undefined4 *)(param_2 + 8);
        param_3[1] = *(undefined4 *)(param_2 + 0xc);
        *param_4 = *(undefined4 *)(param_2 + 0x10);
        return 0;
      }
      iVar1 = *(int *)(param_1 + 0xc);
      if (iVar1 != 0) {
        iVar2 = *(int *)(iVar1 + 0x18);
        while( true ) {
          if (iVar2 != 0) {
            *param_3 = *(undefined4 *)(iVar2 + 0xc);
            param_3[1] = *(undefined4 *)(iVar2 + 0x10);
            *param_4 = *(undefined4 *)(iVar2 + 0x14);
            return 0;
          }
          iVar1 = *(int *)(iVar1 + 0x24);
          if (iVar1 == 0) break;
          iVar2 = *(int *)(iVar1 + 0x18);
        }
      }
    }
    uVar3 = 3;
  }
  return uVar3;
}


// 0x055ca0c (0x10 bytes)
void FUN_0055ca0c(int param_1,undefined4 param_2)

{
  if (param_1 == 0) {
    return;
  }
  *(undefined4 *)(param_1 + 0x88) = param_2;
  return;
}


// 0x055ca1c (0x7c bytes)
int FUN_0055ca1c(int param_1,undefined4 *param_2)

{
  int iVar1;
  GPiece<8> auStack_20;
  undefined4 local_18;
  
  iVar1 = 2;
  if ((param_1 != 0) && (param_2 != (undefined4 *)0x0)) {
    iVar1 = (*(code *)**(undefined4 **)(*(int *)(param_1 + 0x24) + 4))
                      (*(int *)(param_1 + 0x24),auStack_20);
    if (iVar1 == 0) {
      *param_2 = local_18;
    }
  }
  return iVar1;
}


// 0x055ca98 (0x10 bytes)
undefined8 FUN_0055ca98(int param_1,undefined4 *param_2)

{
  *param_2 = *(undefined4 *)(param_1 + 0x1c);
  return 0;
}


// 0x055caa8 (0x1c bytes)
undefined8 FUN_0055caa8(int param_1,undefined4 param_2)

{
  undefined8 uVar1;
  
  uVar1 = 2;
  if (param_1 != 0) {
    uVar1 = 0;
    *(undefined4 *)(param_1 + 0x94) = param_2;
  }
  return uVar1;
}


// 0x055cac4 (0x2c bytes)
undefined8 FUN_0055cac4(int param_1)

{
  *(undefined4 *)(param_1 + 0xfc) = 500000;
  *(undefined4 *)(param_1 + 0xf8) = 0xfffe;
  *(undefined4 *)(param_1 + 0xf4) = 0;
  *(undefined4 *)(param_1 + 0xf0) = 0;
  return 0;
}


// 0x055caf0 (0x24 bytes)
undefined8 FUN_0055caf0(longlong param_1)

{
  undefined8 uVar1;
  
  uVar1 = 2;
  if (param_1 != 0) {
    uVar1 = 0;
    *(int *)(PTR_s_rt_udp_3_05_201103091800_0071b3cc + 0x1c) = (int)param_1;
  }
  return uVar1;
}


// 0x055cb14 (0x14 bytes)
undefined8 FUN_0055cb14(undefined4 *param_1)

{
  *param_1 = *(undefined4 *)(PTR_s_rt_udp_3_05_201103091800_0071b3cc + 0x1c);
  return 0;
}


// 0x055cb28 (0x1c bytes)
undefined8 FUN_0055cb28(int param_1,longlong param_2)

{
  undefined8 uVar1;
  
  uVar1 = 2;
  if (param_2 != 0) {
    uVar1 = 0;
    *(int *)(param_1 + 0x54) = (int)param_2;
  }
  return uVar1;
}


// 0x055cb44 (0x84 bytes)
undefined8 FUN_0055cb44(int *param_1,uint *param_2)

{
  undefined8 uVar1;
  
  if ((param_1 != (int *)0x0) && (*param_1 == 0x1b)) {
    uVar1 = 2;
    if (param_2 != (uint *)0x0) {
      uVar1 = 0;
      *param_2 = (uint)param_1[0x40] / 1000;
      param_2[1] = (uint)param_1[0x41] / 1000;
      param_2[2] = (uint)param_1[0x3f] / 1000;
    }
    return uVar1;
  }
  return 0xd2f3;
}


// 0x055cbc8 (0x84 bytes)
undefined8 FUN_0055cbc8(int *param_1,uint *param_2)

{
  undefined8 uVar1;
  
  if ((param_1 != (int *)0x0) && (*param_1 == 0x1b)) {
    uVar1 = 2;
    if (param_2 != (uint *)0x0) {
      uVar1 = 0;
      *param_2 = (uint)param_1[0x18] / 1000;
      param_2[1] = (uint)param_1[0x19] / 1000;
      param_2[2] = (uint)param_1[0x17] / 1000;
    }
    return uVar1;
  }
  return 0xd2f3;
}


// 0x055cc4c (0xb0 bytes)
int FUN_0055cc4c(int param_1,undefined4 *param_2,undefined4 *param_3)

{
  int iVar1;
  undefined4 local_20 [2];
  undefined4 local_18;
  
  if (((param_1 != 0) && (param_2 != (undefined4 *)0x0)) && (param_3 != (undefined4 *)0x0)) {
    iVar1 = (*(code *)**(undefined4 **)(*(int *)(param_1 + 0x48) + 4))
                      (*(int *)(param_1 + 0x48),local_20);
    if (iVar1 == 0) {
      *param_2 = local_18;
      *param_3 = local_20[0];
    }
    return iVar1;
  }
  return 2;
}


// 0x055ccfc (0x38 bytes)
undefined8 FUN_0055ccfc(undefined4 *param_1,undefined4 *param_2)

{
  if ((param_2 != (undefined4 *)0x0) && (*param_2 = 0, param_1 != (undefined4 *)0x0)) {
    *param_2 = *param_1;
    return 0;
  }
  return 3;
}


// 0x055cd34 (0x5c bytes)
undefined8 FUN_0055cd34(int *param_1,int param_2,int *param_3)

{
  if (param_3 != (int *)0x0) {
    *param_3 = 0;
    if ((param_1 != (int *)0x0) && (param_2 != 0)) {
      if (*(int *)(param_2 + 0x14) != 0) {
        *param_3 = *(int *)(param_2 + 0x14);
        return 0;
      }
      *param_3 = *param_1;
      return 0;
    }
  }
  return 3;
}


// 0x055cd90 (0x60 bytes)
undefined8 FUN_0055cd90(undefined4 *param_1,int param_2,undefined4 *param_3)

{
  if (param_3 != (undefined4 *)0x0) {
    *param_3 = 0;
    if ((param_1 != (undefined4 *)0x0) && (param_2 != 0)) {
      if (*(int *)(param_2 + 0x14) != 0) {
        *param_3 = *(undefined4 *)(param_2 + 0x18);
        return 0;
      }
      *param_3 = *param_1;
      return 0;
    }
  }
  return 3;
}


// 0x055cdf0 (0x78 bytes)
undefined8 FUN_0055cdf0(int param_1,int param_2,int *param_3)

{
  int iVar1;
  int iVar2;
  undefined8 uVar3;
  
  if ((param_3 == (int *)0x0) || (*param_3 = 0, param_1 == 0)) {
    uVar3 = 2;
  }
  else {
    iVar1 = *(int *)(param_1 + 0xc);
    if (iVar1 != 0) {
      iVar2 = *(int *)(iVar1 + 8);
      while( true ) {
        if (iVar2 == param_2) {
          *param_3 = iVar1;
          return 0;
        }
        iVar1 = *(int *)(iVar1 + 0x24);
        if (iVar1 == 0) break;
        iVar2 = *(int *)(iVar1 + 8);
      }
    }
    uVar3 = 3;
  }
  return uVar3;
}


// 0x055ce68 (0x28 bytes)
undefined8 FUN_0055ce68(int param_1,undefined4 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = 2;
  if ((param_1 != 0) && (param_2 != (undefined4 *)0x0)) {
    uVar1 = 0;
    *param_2 = *(undefined4 *)(param_1 + 8);
  }
  return uVar1;
}


// 0x055ce90 (0x24 bytes)
undefined8 FUN_0055ce90(int param_1)

{
  undefined8 uVar1;
  
  uVar1 = 2;
  if (param_1 != 0) {
    uVar1 = 0;
    *(int *)(param_1 + 0x20) = *(int *)(param_1 + 0x20) + 1;
  }
  return uVar1;
}


// 0x055ceb4 (0x28 bytes)
undefined8 FUN_0055ceb4(int param_1,undefined4 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = 2;
  if ((param_1 != 0) && (param_2 != (undefined4 *)0x0)) {
    uVar1 = 0;
    *param_2 = *(undefined4 *)(param_1 + 0x20);
  }
  return uVar1;
}


// 0x055cedc (0x3c bytes)
undefined8 FUN_0055cedc(int param_1,undefined4 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = 0xd2f2;
  if ((param_1 != 0) && (uVar1 = 2, param_2 != (undefined4 *)0x0)) {
    uVar1 = 0;
    *param_2 = *(undefined4 *)(param_1 + 0x48);
  }
  return uVar1;
}


// 0x055cf18 (0x58 bytes)
undefined4 FUN_0055cf18(int param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 uVar1;
  
  uVar1 = 0xd2f2;
  if (param_1 != 0) {
    uVar1 = 3;
    if (*(int *)(param_1 + 0x44) != 0) {
      uVar1 = FUN_0056a838(*(int *)(param_1 + 0x44),param_2,param_3);
    }
  }
  return uVar1;
}


// 0x055cf70 (0xf0 bytes)
/* WARNING: Removing unreachable block (ram,0x0055d038) */
/* WARNING: Removing unreachable block (ram,0x0055d044) */
/* WARNING: Removing unreachable block (ram,0x0055d05c) */

int FUN_0055cf70(int param_1)

{
  int iVar1;
  GPiece<4> local_30;
  GPiece<4> local_2c;
  GPiece<8> local_28;
  GPiece<16> local_20;
  
  iVar1 = 0xd2f2;
  if (param_1 != 0) {
    iVar1 = 3;
    if (*(int *)(param_1 + 0x44) != 0) {
      iVar1 = FUN_0056a838(*(int *)(param_1 + 0x44),local_20,local_2c);
      if ((iVar1 == 0) && (iVar1 = FUN_0055c8f0(param_1,local_28,local_30), iVar1 == 0)) {
        return 0xd6dd;
      }
    }
  }
  return iVar1;
}


// 0x055d060 (0x4c bytes)
undefined4 FUN_0055d060(int param_1)

{
  undefined4 uVar1;
  
  uVar1 = 2;
  if (param_1 != 0) {
    uVar1 = 3;
    if (*(int *)(param_1 + 4) != 0) {
      uVar1 = FUN_0056eea4(*(int *)(param_1 + 4));
    }
  }
  return uVar1;
}


// 0x055d0ac (0x94 bytes)
undefined8 FUN_0055d0ac(int param_1,int param_2)

{
  int iVar1;
  uint uVar2;
  ulonglong uVar3;
  
  uVar3 = 0;
  *(undefined4 *)(param_2 + 0xd8) = 0;
  *(undefined4 *)(param_2 + 0x108) = 0;
  *(undefined4 *)(param_2 + 0xdc) = 0;
  *(undefined4 *)(param_2 + 0xe0) = 0;
  *(undefined4 *)(param_2 + 0xe4) = 0;
  *(undefined4 *)(param_2 + 0xe8) = 0;
  *(undefined4 *)(param_2 + 0xec) = 0;
  *(undefined4 *)(param_2 + 0xf0) = 0;
  *(undefined4 *)(param_2 + 0xf4) = 0;
  *(undefined4 *)(param_2 + 0xf8) = 0;
  *(undefined4 *)(param_2 + 0xfc) = 0;
  *(undefined4 *)(param_2 + 0x100) = 0;
  *(undefined4 *)(param_2 + 0x104) = 0;
  for (iVar1 = *(int *)(param_1 + 0x20); iVar1 != 0; iVar1 = *(int *)(iVar1 + 0x120)) {
    uVar3 = uVar3 + 1;
  }
  uVar2 = *(uint *)(param_1 + 0xd8);
  *(int *)(param_2 + 0xe0) = (int)((ulonglong)*(uint *)(param_1 + 0xd4) / (uVar3 & 0xffffffff));
  *(int *)(param_2 + 0xe4) = (int)((ulonglong)uVar2 / (uVar3 & 0xffffffff));
  *(undefined4 *)(param_2 + 0xd8) = *(undefined4 *)(param_1 + 0x104);
  *(undefined4 *)(param_2 + 0xdc) = *(undefined4 *)(param_1 + 0x108);
  return 0;
}


// 0x055d140 (0xbc bytes)
undefined4 FUN_0055d140(int param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  
  if (param_2 != (undefined4 *)0x0) {
    param_2[10] = 0;
    *param_2 = 0;
    param_2[1] = 0;
    param_2[2] = 0;
    param_2[3] = 0;
    param_2[4] = 0;
    param_2[5] = 0;
    param_2[6] = 0;
    param_2[7] = 0;
    param_2[8] = 0;
    param_2[9] = 0;
    if (param_1 != 0) {
      if (*(int *)(param_1 + 4) != 0) {
        uVar1 = FUN_0056f07c(*(int *)(param_1 + 4),param_2);
        return uVar1;
      }
      param_2[10] = 3;
      return 0;
    }
  }
  return 2;
}


// 0x055d1fc (0xe8 bytes)
undefined8 FUN_0055d1fc(int param_1,int *param_2)

{
  if (*param_2 != 0) {
    param_2[8] = 0;
    if (param_2[1] != 0) {
      FUN_0056fae8(param_2[1]);
      param_2[1] = 0;
    }
    FUN_005c35e4(param_2 + 3);
    FUN_0054fe64(*param_2);
    *param_2 = 0;
    FUN_00563d8c(param_1 + 0xc,param_2);
    FUN_00563d60(param_1 + 0x10,param_2);
    *(int *)(param_1 + 0x18) = *(int *)(param_1 + 0x18) + 1;
  }
  return 0;
}


// 0x055d2e4 (0x64 bytes)
undefined8 FUN_0055d2e4(int param_1,int param_2)

{
  undefined8 uVar1;
  
  uVar1 = 2;
  if (param_1 != 0) {
    uVar1 = 0;
    if (param_2 != 0) {
      if (*(uint *)(param_2 + 0x20) < 2) {
        FUN_0055d1fc(param_1,param_2);
        uVar1 = 0;
      }
      else {
        *(uint *)(param_2 + 0x20) = *(uint *)(param_2 + 0x20) - 1;
      }
    }
  }
  return uVar1;
}


// 0x055d348 (0xe0 bytes)
undefined8 FUN_0055d348(int param_1,int param_2,int param_3,undefined4 param_4)

{
  if ((param_1 != 0) && (param_2 != 0)) {
    FUN_0055d2e4(param_1,*(undefined4 *)(param_2 + 0x14));
    FUN_0055d2e4(param_1,*(undefined4 *)(param_2 + 0x18));
    *(undefined4 *)(param_2 + 0x18) = param_4;
    *(int *)(param_2 + 0x14) = param_3;
    if (param_3 != 0) {
      FUN_0055ce90(param_3);
    }
    if (*(int *)(param_2 + 0x18) != 0) {
      FUN_0055ce90(*(int *)(param_2 + 0x18));
    }
    return 0;
  }
  return 2;
}


// 0x055d428 (0x2a4 bytes)
ulonglong FUN_0055d428(int *param_1,int param_2,int param_3,undefined4 *param_4)

{
  int *piVar1;
  ulonglong uVar2;
  byte in_cr0;
  byte in_cr1;
  byte in_cr2;
  byte in_cr3;
  byte unaff_cr4;
  byte in_cr5;
  byte in_cr6;
  byte in_cr7;
  uint uStack00000008;
  undefined8 local_70;
  GPiece<8> local_68;
  undefined8 uStack_60;
  
  uStack00000008 =
       (uint)(in_cr0 & 0xf) << 0x1c | (uint)(in_cr1 & 0xf) << 0x18 | (uint)(in_cr2 & 0xf) << 0x14 |
       (uint)(in_cr3 & 0xf) << 0x10 | (uint)(unaff_cr4 & 0xf) << 0xc | (uint)(in_cr5 & 0xf) << 8 |
       (uint)(in_cr6 & 0xf) << 4 | (uint)(in_cr7 & 0xf);
  if (param_4 == (undefined4 *)0x0) {
    return 3;
  }
  *param_4 = 0;
  if (param_1 == (int *)0x0) {
    return 3;
  }
  uVar2 = 0xd308;
  if (param_1[6] == 0) goto LAB_0055d49c;
  piVar1 = (int *)param_1[4];
  piVar1[2] = param_2;
  *piVar1 = 0;
  piVar1[1] = 0;
  piVar1[8] = 1;
  piVar1[7] = 0;
  piVar1[3] = 0;
  piVar1[4] = 0;
  piVar1[5] = 0;
  piVar1[6] = 0;
  FUN_0054edb0(&local_70);
  uStack_60 = 0;
  uVar2 = FUN_005500a8(piVar1,local_70,piVar1[2],local_68);
  if (*piVar1 == 0) {
    if ((int)uVar2 == 0) {
      return 3;
    }
    goto LAB_0055d49c;
  }
  FUN_00563d8c(param_1 + 4,piVar1);
  FUN_00563d60(param_1 + 3,piVar1);
  param_1[6] = param_1[6] + -1;
  if (((((int)uVar2 != 0) || (uVar2 = FUN_0054eaf4(*piVar1,piVar1 + 2), (int)uVar2 != 0)) ||
      ((param_3 != 0 &&
       ((uVar2 = FUN_0056fa78(piVar1 + 1,*piVar1), (int)uVar2 != 0 ||
        ((*param_1 != 0 &&
         (uVar2 = FUN_0056f7a8(*(undefined4 *)(*param_1 + 4),piVar1[1],PTR_PTR_0071b3d0,param_1),
         (int)uVar2 != 0)))))))) ||
     (uVar2 = FUN_005c3660(piVar1 + 3,param_1[0x12],param_1[0x1f]), uVar2 != 0)) {
LAB_0055d6bc:
    FUN_0055d1fc(param_1,piVar1);
  }
  else {
    if (param_3 != 0) {
      uVar2 = FUN_0056f3fc(piVar1[1]);
      FUN_00550d54();
      if ((int)uVar2 != 0) goto LAB_0055d6bc;
    }
    uVar2 = 0;
    *param_4 = piVar1;
  }
LAB_0055d49c:
  return uVar2 & 0xffffffff;
}


// 0x055d6cc (0xd4 bytes)
/* WARNING: Removing unreachable block (ram,0x0055d754) */
/* WARNING: Removing unreachable block (ram,0x0055d764) */
/* WARNING: Removing unreachable block (ram,0x0055d788) */
/* WARNING: Removing unreachable block (ram,0x0055d79c) */

void FUN_0055d6cc(int param_1,int param_2,undefined8 param_3,undefined8 param_4,int param_5)

{
  undefined8 uStack00000040;
  GPiece<24> local_30;
  
  if ((*(int *)(param_5 + 0x44) == param_1) && (param_2 == 0)) {
    uStack00000040 = param_3;
    FUN_00569ef8(local_30);
  }
  return;
}


// 0x055d7a0 (0x148 bytes)
/* WARNING: Removing unreachable block (ram,0x0055d884) */
/* WARNING: Removing unreachable block (ram,0x0055d894) */
/* WARNING: Removing unreachable block (ram,0x0055d8b4) */
/* WARNING: Removing unreachable block (ram,0x0055d8c8) */

void FUN_0055d7a0(int param_1,int param_2,undefined8 param_3,undefined8 param_4,int param_5)

{
  int iVar1;
  int iVar2;
  undefined8 uStack00000040;
  GPiece<16> local_30;
  
  if ((((param_2 == 0) || (param_2 == 0xd6e0)) && (param_5 != 0)) &&
     (iVar1 = *(int *)(param_5 + 0xc), iVar1 != 0)) {
    iVar2 = *(int *)(iVar1 + 4);
    while (iVar2 != param_1) {
      iVar1 = *(int *)(iVar1 + 0x24);
      if (iVar1 == 0) {
        return;
      }
      iVar2 = *(int *)(iVar1 + 4);
    }
    uStack00000040 = param_3;
    FUN_00569ef8(local_30);
  }
  return;
}


// 0x055d8e8 (0xac bytes)
ulonglong FUN_0055d8e8(int param_1,undefined8 param_2,undefined4 param_3)

{
  int iVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  undefined8 uStack00000038;
  
  uVar3 = 2;
  if (param_1 != 0) {
    uVar3 = 0;
    uStack00000038 = param_2;
    for (iVar1 = *(int *)(param_1 + 0xc); iVar1 != 0; iVar1 = *(int *)(iVar1 + 0x24)) {
      if ((*(int *)(iVar1 + 4) != 0) &&
         (uVar2 = FUN_0056f904(*(int *)(iVar1 + 4),uStack00000038,param_3,PTR_PTR_0071b3d0,param_1),
         uVar2 != 0)) {
        uVar3 = uVar2;
      }
    }
  }
  return uVar3 & 0xffffffff;
}


// 0x055d994 (0xc8 bytes)
int FUN_0055d994(int param_1)

{
  int iVar1;
  uint uVar2;
  undefined4 uVar3;
  int iVar4;
  
  iVar1 = *(int *)(param_1 + 0x24);
  iVar4 = 0;
  if (iVar1 != 0) {
    FUN_00563b9c(param_1 + 0x24,iVar1);
    *(int *)(param_1 + 0x3c) = *(int *)(param_1 + 0x3c) + -1;
    memset(iVar1,0,0x130);
    iVar4 = *(int *)(param_1 + 0x1c);
    uVar2 = *(uint *)(param_1 + 0x8c);
    uVar3 = *(undefined4 *)(PTR_s_rt_udp_3_05_201103091800_0071b3cc + 0x1c);
    *(undefined4 *)(iVar1 + 0xd0) = 0;
    *(uint *)(iVar1 + 0x8c) = uVar2 & 0x3fffffff | 0x40000000;
    *(undefined4 *)(iVar1 + 0x54) = uVar3;
    *(undefined4 *)(iVar1 + 0xcc) = 0;
    *(int *)(iVar1 + 0x90) = (iVar1 - iVar4 >> 4) * 0x286bca1b;
    iVar4 = iVar1;
  }
  return iVar4;
}


// 0x055da5c (0x1c4 bytes)
undefined8 FUN_0055da5c(int param_1)

{
  bool bVar1;
  ulonglong uVar2;
  int *piVar3;
  undefined4 uVar4;
  uint uVar5;
  ulonglong uVar6;
  uint uVar7;
  undefined4 uVar9;
  int iVar10;
  ulonglong uVar8;
  ulonglong uVar11;
  int iVar12;
  uint local_20 [6];
  
  if (*(int *)(param_1 + 0xe4) != 0) {
    FUN_005567a4(param_1 + 0xcc,param_1 + 0x104,local_20);
    if (local_20[0] == 0) {
      uVar9 = *(undefined4 *)(param_1 + 0x104);
      local_20[0] = 0xfa;
      uVar4 = *(undefined4 *)(param_1 + 0x108);
      *(undefined4 *)(param_1 + 0xcc) = uVar9;
      *(undefined4 *)(param_1 + 0xd0) = uVar4;
    }
    else {
      if (local_20[0] < 0xfa) {
        return 0;
      }
      uVar9 = *(undefined4 *)(param_1 + 0x104);
      uVar4 = *(undefined4 *)(param_1 + 0x108);
    }
    iVar12 = *(int *)(param_1 + 0x20);
    *(undefined4 *)(param_1 + 0xd0) = uVar4;
    bVar1 = iVar12 == 0;
    *(undefined4 *)(param_1 + 0xcc) = uVar9;
    *(undefined4 *)(param_1 + 0xdc) = 0;
    if (bVar1) {
      uVar7 = *(uint *)(param_1 + 0xd4);
      uVar6 = 0;
      uVar5 = 0;
    }
    else {
      uVar5 = 0;
      iVar10 = iVar12;
      do {
        uVar5 = uVar5 + 1;
        iVar10 = *(int *)(iVar10 + 0x120);
      } while (iVar10 != 0);
      bVar1 = uVar5 == 0;
      uVar7 = *(uint *)(param_1 + 0xd4);
      if (bVar1) {
        uVar6 = 0;
      }
      else {
        uVar6 = (ulonglong)uVar7 / (ulonglong)uVar5;
        if (uVar6 < 0x60e) {
          uVar6 = 0x60e;
        }
      }
    }
    uVar2 = ((longlong)(int)uVar7 * (longlong)(int)local_20[0] & 0xffffffffU) / 1000;
    uVar11 = uVar2 + *(uint *)(param_1 + 0xd8);
    *(int *)(param_1 + 0xd8) = (int)uVar11;
    if ((ulonglong)uVar7 < (uVar11 & 0xffffffff)) {
      *(uint *)(param_1 + 0xd8) = uVar7;
    }
    if (!bVar1) {
      if (iVar12 != 0) {
        uVar11 = 0;
        iVar10 = iVar12;
        do {
          *(uint *)(iVar10 + 0xe0) = uVar7 / uVar5;
          uVar8 = uVar2 / uVar5 + (ulonglong)*(uint *)(iVar10 + 0xe4);
          *(int *)(iVar10 + 0xe4) = (int)uVar8;
          if (uVar6 < (uVar8 & 0xffffffff)) {
            *(int *)(iVar10 + 0xe4) = (int)uVar6;
            uVar8 = uVar6;
          }
          iVar10 = *(int *)(iVar10 + 0x120);
          uVar11 = uVar11 + uVar8;
        } while (iVar10 != 0);
        uVar7 = *(uint *)(param_1 + 0xd8);
        if ((((ulonglong)uVar7 & 0x7fffffff) << 1 < (uVar11 & 0xffffffff)) && (iVar12 != 0)) {
          do {
            piVar3 = (int *)(iVar12 + 0x120);
            *(uint *)(iVar12 + 0xe4) = uVar7 / uVar5;
            iVar12 = *piVar3;
          } while (*piVar3 != 0);
          return 0;
        }
      }
    }
  }
  return 0;
}


// 0x055dc20 (0x1f8 bytes)
undefined8 FUN_0055dc20(int *param_1,uint param_2,uint param_3)

{
  ushort uVar1;
  ushort uVar2;
  int iVar3;
  uint uVar4;
  int *piVar5;
  int *piVar6;
  ushort local_50 [8];
  
  if ((param_1 == (int *)0x0) || (*param_1 != 0x1b)) {
    return 0xd2f3;
  }
  piVar6 = (int *)param_1[10];
  if (piVar6 != (int *)0x0) {
    uVar4 = 0;
LAB_0055dd50:
    do {
      if ((*piVar6 != 0) && (piVar6 + 3 != (int *)0x0)) {
        iVar3 = 0x58;
        if (piVar6[8] != 0) {
          iVar3 = piVar6[8] * 4 + 0x58;
        }
        iVar3 = iVar3 + (int)(piVar6 + 3);
        if (iVar3 != 0) {
          FUN_00551f9c(iVar3,local_50);
          uVar2 = local_50[0] & 0xf800;
          uVar1 = local_50[0] & 0x6000;
          local_50[0] = uVar2;
          if (uVar1 == 0) {
            piVar5 = piVar6;
            if (param_2 < *(byte *)((int)piVar6 + 0x1a)) {
              piVar5 = (int *)piVar6[1];
              uVar4 = uVar4 + *piVar6;
              FUN_005c2ec4(param_1 + 7,piVar6);
            }
            if (param_3 < uVar4) {
              return 0;
            }
            if (piVar5 == (int *)0x0) {
              return 0x12d;
            }
            piVar6 = (int *)piVar5[1];
            if (piVar6 == (int *)0x0) break;
            goto LAB_0055dd50;
          }
        }
      }
      piVar6 = (int *)piVar6[1];
    } while (piVar6 != (int *)0x0);
    if (param_3 < uVar4) {
      return 0;
    }
  }
  return 0x12d;
}


// 0x055de18 (0xc0 bytes)
void FUN_0055de18(undefined4 param_1,int param_2)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  
  iVar3 = *(int *)(param_2 + 0x44);
  if (0 < iVar3) {
    iVar4 = 0;
    iVar5 = 0;
    do {
      piVar2 = (int *)(iVar5 + param_2);
      iVar4 = iVar4 + 1;
      iVar5 = iVar5 + 8;
      iVar1 = *piVar2;
      if (iVar1 != 0) {
        FUN_005c2ec4(param_1,iVar1);
        iVar3 = *(int *)(param_2 + 0x44);
        *piVar2 = 0;
      }
    } while (iVar4 < iVar3);
  }
  *(undefined4 *)(param_2 + 0x40) = 0;
  *(undefined4 *)(param_2 + 0x44) = 0;
  return;
}


// 0x055ded8 (0x1e0 bytes)
undefined8 FUN_0055ded8(int *param_1,undefined4 param_2,int param_3,undefined4 *param_4)

{
  int *piVar1;
  ushort uVar2;
  short sVar3;
  short sVar4;
  ushort local_40;
  ushort local_3e [11];
  
  *param_4 = 0;
  if (param_1 == (int *)0x0) {
    return 2;
  }
  FUN_00551f9c(param_2,&local_40);
  if (*param_1 != 0) {
    if ((local_40 & 0x4000) == 0) {
      if ((local_40 & 0x2000) != 0) {
        sVar3 = FUN_005640d4(param_2);
        if (param_3 == 0) {
          sVar4 = *(short *)(param_1 + 0x1d);
          if (sVar4 == 0) {
            return 0;
          }
        }
        else {
          sVar4 = *(short *)((int)param_1 + 0x7a);
          if (sVar4 == 0) {
            return 0;
          }
        }
        if (-1 < (short)(sVar4 - sVar3)) goto LAB_0055dfbc;
      }
    }
    else {
      sVar3 = FUN_005640d4(param_2);
      if ((*(short *)(param_1 + 0x1e) != 0) && (-1 < (short)(*(short *)(param_1 + 0x1e) - sVar3))) {
LAB_0055dfbc:
        *param_4 = 1;
        return 0;
      }
      uVar2 = local_3e[0];
      for (piVar1 = (int *)param_1[0xf]; piVar1 != (int *)0x0; piVar1 = (int *)piVar1[1]) {
        local_3e[0] = uVar2;
        if (*piVar1 != 0) {
          if (piVar1 != (int *)0xfffffff4) {
            FUN_00551f9c(piVar1 + 3,local_3e);
            local_3e[0] = uVar2 & 0xf800;
            if (((uVar2 & 0x4000) != 0) && (sVar4 = FUN_005640d4(piVar1 + 3), sVar3 == sVar4))
            goto LAB_0055dfbc;
          }
        }
        uVar2 = local_3e[0];
      }
    }
  }
  return 0;
}


// 0x055e0b8 (0xf8 bytes)
undefined4 FUN_0055e0b8(int param_1,int param_2)

{
  undefined4 uVar1;
  uint local_50;
  GPiece<4> local_4c;
  GPiece<4> local_48;
  GPiece<28> auStack_44;
  
  FUN_005567a4(param_2 + 0x4c,param_1 + 0x104,&local_50);
  uVar1 = 0;
  if (2000 < local_50) {
    FUN_00564504(param_2,auStack_44);
    FUN_0055cd34(param_1,param_2,local_4c);
    uVar1 = FUN_0054fa58(uRam00000000,*(undefined8 *)(param_2 + 8),*(undefined4 *)(param_2 + 0x10),
                         auStack_44,6,local_48);
    *(undefined4 *)(param_2 + 0x4c) = *(undefined4 *)(param_1 + 0x104);
    *(undefined4 *)(param_2 + 0x50) = *(undefined4 *)(param_1 + 0x108);
  }
  return uVar1;
}


// 0x055e1b0 (0x1e0 bytes)
int FUN_0055e1b0(int *param_1)

{
  uint uVar1;
  undefined2 *puVar2;
  int iVar3;
  int *piVar4;
  int *piVar5;
  int *piVar6;
  GPiece<16> local_50;
  
  piVar5 = param_1 + 0x13;
  if ((piVar5 == (int *)0x0) || (piVar6 = (int *)param_1[0x16], piVar6 == (int *)0x0)) {
    return 0;
  }
  do {
    while (*piVar6 == 0) {
      piVar6 = (int *)piVar6[1];
      if (piVar6 == (int *)0x0) {
        return 0;
      }
    }
    iVar3 = FUN_0055c5e0(param_1,0,*piVar6,piVar5);
    if (iVar3 != 0) {
      return iVar3;
    }
    puVar2 = (undefined2 *)((int)piVar6 + 0x62);
    *puVar2 = 0;
    FUN_00564448(puVar2,0x8000);
    FUN_005644a8(puVar2,*(undefined2 *)(param_1 + 0x24));
    piVar4 = (int *)0x0;
    if (*piVar6 != 0) {
      piVar4 = piVar6 + 3;
    }
    iVar3 = 0x58;
    if (piVar4[5] != 0) {
      iVar3 = piVar4[5] * 4 + 0x58;
    }
    uVar1 = (*piVar6 - iVar3) - 2U & 0xffff;
    iVar3 = FUN_0054fa58(*(undefined4 *)*param_1,*(undefined8 *)(param_1 + 0x2a),
                         ((undefined4 *)*param_1)[2],puVar2,uVar1,local_50);
    if (iVar3 != 0) {
      return iVar3;
    }
    if (uVar1 != 0) {
      return 0;
    }
    piVar4 = (int *)piVar6[1];
    FUN_005c2ec4(piVar5,piVar6);
    piVar6 = piVar4;
  } while (piVar4 != (int *)0x0);
  return 0;
}


// 0x055e390 (0x1b4 bytes)
undefined8 FUN_0055e390(int param_1,int param_2,ushort param_3,int param_4,undefined4 *param_5)

{
  int *piVar1;
  int iVar2;
  uint uVar3;
  int *piVar4;
  ushort local_60;
  ushort local_5e;
  int local_5c [5];
  
  if (param_2 != -0x1c) {
    for (piVar1 = *(int **)(param_2 + 0x2c); piVar1 != (int *)0x0; piVar1 = (int *)piVar1[2]) {
      piVar4 = piVar1 + 3;
      if ((*piVar1 != 0) && (piVar4 != (int *)0x0)) {
        if (*(char *)piVar4 == '\0') {
          iVar2 = 0x58;
          if (piVar1[8] != 0) {
            iVar2 = piVar1[8] * 4 + 0x58;
          }
          FUN_00551f9c((char *)(iVar2 + (int)piVar4),&local_60);
          if (((((param_3 & 0x1000) == 0) || ((local_60 & 0x1000) == 0)) &&
              (FUN_005645c4(piVar1,local_5c), *(short *)(piVar1 + 6) < 0)) &&
             ((local_5c[0] == 0 && (((param_3 ^ local_60 & 0xf800) & 0xe000) == 0)))) {
            FUN_00564144((char *)(iVar2 + (int)piVar4),&local_5e);
            uVar3 = ((int)(((local_60 & 0xf800) & 0x6000) - 1) >> 0x1f & 0xfffffffeU) + 4 +
                    (uint)local_5e + param_4;
            if ((uVar3 <= *(uint *)(param_1 + 0x80)) && (uVar3 < 0x5ab)) {
              *param_5 = piVar1;
              return 0;
            }
          }
        }
        break;
      }
    }
  }
  *param_5 = 0;
  return 0;
}


// 0x055e544 (0x854 bytes)
/* WARNING: Removing unreachable block (ram,0x0055ec0c) */
/* WARNING: Removing unreachable block (ram,0x0055ec20) */
/* WARNING: Removing unreachable block (ram,0x0055ec60) */
/* WARNING: Removing unreachable block (ram,0x0055eca4) */
/* WARNING: Removing unreachable block (ram,0x0055ecc0) */
/* WARNING: Removing unreachable block (ram,0x0055ed10) */
/* WARNING: Removing unreachable block (ram,0x0055ea5c) */
/* WARNING: Removing unreachable block (ram,0x0055ea68) */
/* WARNING: Removing unreachable block (ram,0x0055e7d4) */

ulonglong FUN_0055e544(int param_1,int param_2)

{
  bool bVar1;
  int iVar2;
  bool bVar3;
  ushort uVar5;
  ulonglong uVar4;
  ulonglong uVar6;
  int iVar7;
  int iVar8;
  byte *pbVar9;
  uint uVar10;
  uint uVar11;
  ushort uVar12;
  undefined4 *puVar13;
  undefined4 *puVar14;
  byte in_cr0;
  byte in_cr1;
  byte in_cr2;
  byte in_cr3;
  byte bVar15;
  byte unaff_cr4;
  byte in_cr5;
  byte in_cr6;
  byte in_cr7;
  uint uStack00000008;
  GPiece<2> local_140;
  undefined2 uStack_13e;
  GPiece<2> local_13c;
  ushort local_13a;
  GPiece<4> local_138;
  GPiece<4> local_134;
  GPiece<4> local_130;
  undefined4 *local_12c;
  uint local_128;
  int aiStack_124 [17];
  uint local_e0;
  uint local_dc [16];
  int local_9c;
  int local_98;
  
  uStack00000008 =
       (uint)(in_cr0 & 0xf) << 0x1c | (uint)(in_cr1 & 0xf) << 0x18 | (uint)(in_cr2 & 0xf) << 0x14 |
       (uint)(in_cr3 & 0xf) << 0x10 | (uint)(unaff_cr4 & 0xf) << 0xc | (uint)(in_cr5 & 0xf) << 8 |
       (uint)(in_cr6 & 0xf) << 4 | (uint)(in_cr7 & 0xf);
  FUN_005567a4(param_2 + 0x4c,param_1 + 0x104,&local_128);
  if ((local_128 <= *(uint *)(param_1 + 0x84)) && (uVar6 = 0, *(int *)(param_2 + 0x84) == 0))
  goto LAB_0055ea80;
  local_e0 = 0;
  uStack_13e = 0;
  FUN_005644a8(&uStack_13e,*(undefined2 *)(param_2 + 0x6e));
  uVar6 = 3;
  if (*(int *)(param_2 + 0x118) == 0) goto LAB_0055ea80;
  FUN_00551f9c(*(int *)(param_2 + 0x118),local_140);
  local_98 = 1;
  local_9c = 2;
  FUN_0055cd34(param_1,param_2,&local_12c);
  puVar14 = *(undefined4 **)(param_2 + 0x28);
  iVar7 = param_2 + 0x1c;
  bVar1 = puVar14 == (undefined4 *)0x0;
  if (!bVar1) {
    uVar12 = 0;
    bVar3 = true;
    do {
      pbVar9 = (byte *)(puVar14 + 3);
      iVar2 = -(int)((longlong)-(ulonglong)*pbVar9 >> 0x3f);
      bVar15 = (iVar2 == 0) << 1;
      if ((iVar2 == 0) ||
         (FUN_005567f8(puVar14 + 4,param_1 + 0x104,&local_128),
         (uint)*pbVar9 * *(int *)(param_2 + 0x68) < local_128)) {
        if (bVar3) {
          uVar12 = *(ushort *)(puVar14 + 6);
        }
        else if ((uVar12 & 0x800) != (*(ushort *)(puVar14 + 6) & 0x800)) goto LAB_0055e8ec;
        iVar8 = FUN_0055c5e0(param_1,param_2,*puVar14,iVar7);
        if (iVar8 != 0) break;
        puVar13 = puVar14 + 0x19;
        FUN_00564034(puVar13,local_130,local_13c);
        FUN_00551f9c(puVar13,&local_13a);
        uVar5 = local_13a & 0xf800;
        FUN_005645c4(puVar14,local_134);
        uVar11 = ((int)((local_13a & 0x6000) - 1) >> 0x1f & 0xfffffffeU) + 4 & 0xffff;
        if (((7 < local_98) || (-1 < *(short *)(puVar14 + 6))) || (0x5a7 < uVar11 + local_9c)) {
          uVar6 = FUN_0054f7a0(*local_12c,*(undefined8 *)(param_2 + 8),
                               *(undefined4 *)(param_2 + 0x10),local_dc,local_138);
          local_98 = 0;
          local_13a = uVar5;
          if ((((int)uVar6 == 0) || (0x1e < (uVar6 - 0xcf0e & 0xffffffff))) ||
             (uVar4 = 1L << (uVar6 - 0xcf0e & 0x7f), (uVar4 >> 0x1d & 3) == 0 && (uVar4 & 1) == 0))
          goto LAB_0055e8fc;
          break;
        }
        FUN_00564448(&uStack_13e,*(undefined2 *)(puVar14 + 6));
        if (local_98 < 8) {
          local_dc[local_98 * 2 + 1] = uVar11;
          local_9c = local_9c + uVar11;
          local_dc[local_98 * 2] = (uint)puVar13;
          local_98 = local_98 + 1;
        }
        if ((local_13a & 0x4000) == 0) {
          uVar6 = (ulonglong)local_e0;
          if (7 < (int)local_e0) {
            FUN_0055de18(iVar7,aiStack_124);
            uVar6 = 0;
            local_e0 = 0;
          }
          *(undefined4 *)((int)aiStack_124 + (int)(uVar6 << 3) + 4) = 1;
          local_e0 = local_e0 + 1;
          *(undefined4 **)((int)aiStack_124 + (int)(uVar6 << 3)) = puVar14;
        }
        else {
          puVar14[4] = *(undefined4 *)(param_1 + 0x104);
          puVar14[5] = *(undefined4 *)(param_1 + 0x108);
          if (*pbVar9 == 0) {
            *pbVar9 = 2;
          }
          else {
            *pbVar9 = *pbVar9 + 1;
          }
        }
        if ((((bool)(bVar15 >> 1 & 1)) && ((local_13a & 0x1000) != 0)) &&
           (iVar8 = *(int *)(param_2 + 0x84) + -1, *(int *)(param_2 + 0x84) = iVar8, iVar8 < 0)) {
          bVar3 = false;
          *(int *)(param_2 + 0x84) = iVar2;
          local_13a = uVar5;
        }
        else {
          bVar3 = false;
          local_13a = uVar5;
        }
      }
LAB_0055e8ec:
      puVar14 = (undefined4 *)puVar14[1];
      bVar1 = puVar14 == (undefined4 *)0x0;
    } while (!bVar1);
  }
  uVar6 = 0;
LAB_0055e8fc:
  if (1 < local_98) {
    uVar6 = FUN_0054f7a0(*local_12c,*(undefined8 *)(param_2 + 8),*(undefined4 *)(param_2 + 0x10),
                         local_dc,local_138);
    if ((int)uVar6 == 0) {
      FUN_0055de18(iVar7,aiStack_124);
    }
    else {
      FUN_0055de18(iVar7,aiStack_124);
      local_e0 = 0;
      if (((uVar6 - 0xcf2b & 0xffffffff) < 2) || ((int)uVar6 == 0xcf0e)) {
        uVar6 = 0;
        goto LAB_0055e970;
      }
    }
    local_e0 = 0;
  }
LAB_0055e970:
  if (!bVar1) {
    for (iVar2 = puVar14[1]; iVar2 != 0; iVar2 = *(int *)(iVar2 + 4)) {
      FUN_00551f9c(iVar2 + 100,&local_13a);
      uVar10 = (uint)local_13a;
      uVar11 = uVar10 & 0xfffff800;
      uVar12 = local_13a & 0x4000;
      local_13a = (ushort)uVar11;
      if (uVar12 == 0) {
        uVar4 = (ulonglong)local_e0;
        if (7 < (int)local_e0) {
          FUN_0055de18(iVar7,aiStack_124);
          uVar4 = 0;
          uVar11 = uVar10 & 0xf800;
          local_e0 = 0;
        }
        *(undefined4 *)((int)aiStack_124 + (int)(uVar4 << 3) + 4) = 1;
        local_e0 = local_e0 + 1;
        *(int *)((int)aiStack_124 + (int)(uVar4 << 3)) = iVar2;
        if (((uVar11 & 0x1000) != 0) &&
           (iVar8 = *(int *)(param_2 + 0x84) + -1, *(int *)(param_2 + 0x84) = iVar8, iVar8 < 0)) {
          *(uint *)(param_2 + 0x84) = uVar10 & 0x4000;
        }
      }
    }
  }
  FUN_0055de18(iVar7,aiStack_124);
LAB_0055ea80:
  return uVar6 & 0xffffffff;
}


// 0x055ed98 (0x1c0 bytes)
undefined8 FUN_0055ed98(int param_1,int param_2)

{
  uint uVar1;
  
  FUN_005c35e4(param_2 + 0x1c);
  FUN_005c35e4(param_2 + 0x30);
  FUN_005519f0(param_2 + 0x118);
  uVar1 = (((((((((uint)*(byte *)(param_2 + 10) * 0x1f + (uint)*(byte *)(param_2 + 0xe)) * 0x1f +
                (uint)*(byte *)(param_2 + 0xb)) * 0x1f + (uint)*(byte *)(param_2 + 0xf)) * 0x1f +
              (uint)*(byte *)(param_2 + 8)) * 0x1f + (uint)*(byte *)(param_2 + 0xc)) * 0x1f +
            (uint)*(byte *)(param_2 + 9)) * 0x1f + (uint)*(byte *)(param_2 + 0xd)) * 0x1f +
          (uint)*(byte *)(param_2 + 0x10)) * 0x1f + (uint)*(byte *)(param_2 + 0x11);
  FUN_00563c38((uVar1 - (uVar1 / *(uint *)(param_1 + 0x74)) * *(uint *)(param_1 + 0x74)) * 4 +
               *(int *)(param_1 + 0x30),param_2);
  FUN_0055d2e4(param_1,*(undefined4 *)(param_2 + 0x14));
  FUN_0055d2e4(param_1,*(undefined4 *)(param_2 + 0x18));
  memset(param_2,0,0x130);
  FUN_00563b70(param_1 + 0x24,param_2);
  *(int *)(param_1 + 0x3c) = *(int *)(param_1 + 0x3c) + 1;
  return 0;
}


// 0x055ef58 (0x94 bytes)
undefined8 FUN_0055ef58(int param_1,int *param_2)

{
  undefined8 uVar1;
  
  uVar1 = 2;
  if (param_1 != 0) {
    uVar1 = 0xd2f3;
    if (param_2 != (int *)0x0) {
      uVar1 = 0xd2f4;
      if (*param_2 == 10) {
        *param_2 = 4;
        FUN_0056674c(param_1,param_2);
        return 0;
      }
    }
  }
  return uVar1;
}


// 0x055efec (0xb4 bytes)
undefined8 FUN_0055efec(int param_1,int *param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  uVar2 = 2;
  if (param_1 != 0) {
    uVar2 = 0xd2f3;
    if (param_2 != (int *)0x0) {
      uVar2 = 0xd2f4;
      if (*param_2 == 10) {
        *param_2 = 0xb;
        iVar1 = FUN_00569498(param_1,param_2);
        uVar2 = 0;
        if (iVar1 != 0) {
          *param_2 = 9;
          return 0xd2f7;
        }
      }
    }
  }
  return uVar2;
}


// 0x055f0a0 (0x27c bytes)
int FUN_0055f0a0(int param_1,undefined4 *param_2,undefined8 param_3,int param_4,int param_5)

{
  undefined1 *puVar1;
  int iVar2;
  int iVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  undefined4 *puStack00000038;
  undefined8 uStack00000040;
  GPiece<4> local_90;
  GPiece<4> local_8c;
  int local_88 [17];
  int local_44;
  
  iVar3 = 0xd2f2;
  if (param_1 != 0) {
    puStack00000038 = param_2;
    uStack00000040 = param_3;
    iVar3 = FUN_0054edf0(param_3);
    if ((((iVar3 == 0) && (param_4 != 0)) && (param_5 != 0)) &&
       ((*(uint *)(param_5 + 0x40) != 0 && (*(uint *)(param_5 + 0x40) <= *(uint *)(param_1 + 0x80)))
       )) {
      puVar1 = *(undefined1 **)(param_1 + 0x6c);
      puVar1[3] = 0;
      *puVar1 = 0;
      puVar1[1] = 0;
      puVar1[2] = 0;
      iVar3 = *(int *)(param_1 + 0x6c);
      iVar2 = iVar3 + 2;
      FUN_00564448(iVar3,0x8000);
      FUN_005644a8(iVar3,0x1c3);
      FUN_0056428c(iVar2,0);
      FUN_00564228(iVar2,*(undefined2 *)(param_5 + 0x42));
      FUN_00564180(iVar2,local_90);
      FUN_005641fc(iVar2,0);
      uVar4 = (ulonglong)*(uint *)(param_5 + 0x44) - 1;
      local_44 = 1;
      if (-1 < (int)uVar4) {
        uVar5 = (ulonglong)*(uint *)(param_5 + 0x44);
        do {
          iVar2 = (int)((uVar4 & 0xffffffff) << 3);
          uVar4 = uVar4 - 1;
          iVar3 = *(int *)(param_5 + iVar2);
          if (((iVar3 != 0) && (iVar2 = *(int *)(param_5 + iVar2 + 4), iVar2 != 0)) &&
             (local_44 < 8)) {
            local_88[local_44 * 2 + 1] = iVar2;
            local_88[local_44 * 2] = iVar3;
            local_44 = local_44 + 1;
          }
          uVar5 = uVar5 - 1;
        } while (uVar5 != 0);
      }
      if ((puStack00000038 != (undefined4 *)0x0) ||
         (iVar3 = FUN_0055ccfc(param_1,&stack0x00000038), iVar3 == 0)) {
        iVar3 = FUN_0054f7a0(*puStack00000038,uStack00000040,param_4,local_88,local_8c);
        return iVar3;
      }
    }
    else {
      iVar3 = 2;
    }
  }
  return iVar3;
}


// 0x055f31c (0x2bc bytes)
int FUN_0055f31c(int param_1,undefined4 *param_2,undefined8 param_3,int param_4,undefined2 param_5,
                int param_6)

{
  undefined1 *puVar1;
  int iVar2;
  int iVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  undefined4 *puStack00000038;
  undefined8 uStack00000040;
  ushort local_a0 [2];
  GPiece<4> local_9c;
  int local_98 [17];
  int local_54;
  
  iVar3 = 0xd2f2;
  if (param_1 != 0) {
    puStack00000038 = param_2;
    uStack00000040 = param_3;
    iVar3 = FUN_0054edf0(param_3);
    if ((((iVar3 == 0) && (param_4 != 0)) && (param_6 != 0)) &&
       ((*(uint *)(param_6 + 0x40) != 0 && (*(uint *)(param_6 + 0x40) <= *(uint *)(param_1 + 0x80)))
       )) {
      puVar1 = *(undefined1 **)(param_1 + 0x6c);
      puVar1[5] = 0;
      *puVar1 = 0;
      puVar1[1] = 0;
      puVar1[2] = 0;
      puVar1[3] = 0;
      puVar1[4] = 0;
      iVar3 = *(int *)(param_1 + 0x6c);
      iVar2 = iVar3 + 2;
      FUN_00564448(iVar3,0x8000);
      FUN_005644a8(iVar3,0x1c4);
      FUN_0056428c(iVar2,0);
      FUN_00564228(iVar2,*(int *)(param_6 + 0x40) + 2U & 0xffff);
      FUN_00564180(iVar2,local_a0);
      FUN_005641fc(iVar2,0);
      FUN_00551f78((uint)local_a0[0] + *(int *)(param_1 + 0x6c) + 2,param_5);
      uVar4 = (ulonglong)*(uint *)(param_6 + 0x44) - 1;
      local_54 = 1;
      if (-1 < (int)uVar4) {
        uVar5 = (ulonglong)*(uint *)(param_6 + 0x44);
        do {
          iVar2 = (int)((uVar4 & 0xffffffff) << 3);
          uVar4 = uVar4 - 1;
          iVar3 = *(int *)(param_6 + iVar2);
          if (((iVar3 != 0) && (iVar2 = *(int *)(param_6 + iVar2 + 4), iVar2 != 0)) &&
             (local_54 < 8)) {
            local_98[local_54 * 2 + 1] = iVar2;
            local_98[local_54 * 2] = iVar3;
            local_54 = local_54 + 1;
          }
          uVar5 = uVar5 - 1;
        } while (uVar5 != 0);
      }
      if ((puStack00000038 != (undefined4 *)0x0) ||
         (iVar3 = FUN_0055ccfc(param_1,&stack0x00000038), iVar3 == 0)) {
        iVar3 = FUN_0054f7a0(*puStack00000038,uStack00000040,param_4,local_98,local_9c);
        return iVar3;
      }
    }
    else {
      iVar3 = 2;
    }
  }
  return iVar3;
}


// 0x055f5d8 (0x2a8 bytes)
/* WARNING: Type propagation algorithm not settling */

undefined8 FUN_0055f5d8(undefined4 param_1,int param_2,undefined2 param_3)

{
  short sVar1;
  int iVar2;
  undefined8 uVar3;
  int iVar4;
  ulonglong uVar5;
  short local_90 [4];
  undefined4 *local_88;
  int local_84;
  GPiece<88> local_80;
  
  uVar3 = 3;
  if (*(int *)(param_2 + 0x118) != 0) {
    FUN_00551f78(local_90,param_3);
    FUN_00551f9c(*(undefined4 *)(param_2 + 0x118),local_90 + 2);
    if (local_90[2] == 0) {
      iVar4 = *(int *)(param_2 + 0x118);
LAB_0055f818:
      *(short *)(iVar4 + (uint)(ushort)local_90[2] * 2 + 2) = local_90[0];
      FUN_00551f78(iVar4,local_90[2] + 1);
      return 0;
    }
    iVar4 = *(int *)(param_2 + 0x118);
    uVar5 = (ulonglong)(ushort)local_90[2];
    sVar1 = *(short *)(iVar4 + 2);
    iVar2 = iVar4;
    while (sVar1 != local_90[0]) {
      uVar5 = uVar5 - 1;
      if (uVar5 == 0) {
        if ((ushort)local_90[2] < 0x200) goto LAB_0055f818;
        if (iVar4 != 0) {
          local_90[1] = 0;
          FUN_00564448(local_90 + 1,0x4000);
          FUN_00563f04(param_2);
          FUN_00563f04(param_2);
          FUN_0055cd34(param_1,param_2,&local_88);
          iVar4 = FUN_0054f7a0(*local_88,*(undefined8 *)(param_2 + 8),
                               *(undefined4 *)(param_2 + 0x10),local_80,&local_84);
          if ((local_84 == 0) || (iVar4 != 0)) {
            iVar4 = *(int *)(param_2 + 0x118);
          }
          else {
            FUN_005641d0(param_2);
            iVar4 = *(int *)(param_2 + 0x118);
          }
        }
        FUN_00551f9c(iVar4,local_90 + 2);
        if ((ushort)local_90[2] < 0x200) {
          iVar4 = *(int *)(param_2 + 0x118);
          *(short *)(iVar4 + (uint)(ushort)local_90[2] * 2 + 2) = local_90[0];
          FUN_00551f78(iVar4,local_90[2] + 1);
          return 0;
        }
        break;
      }
      sVar1 = *(short *)(iVar2 + 4);
      iVar2 = iVar2 + 2;
    }
    uVar3 = 0;
  }
  return uVar3;
}


// 0x055f880 (0x4c bytes)
void FUN_0055f880(undefined4 param_1,undefined4 param_2,undefined8 param_3)

{
  undefined2 uVar1;
  
  uVar1 = FUN_005640d4(param_3);
  FUN_0055f5d8(param_1,param_2,uVar1);
  return;
}


// 0x055f8cc (0xe60 bytes)
/* WARNING: Removing unreachable block (ram,0x0055fe10) */
/* WARNING: Removing unreachable block (ram,0x0056041c) */
/* WARNING: Removing unreachable block (ram,0x0055fe78) */
/* WARNING: Removing unreachable block (ram,0x0055fe84) */
/* WARNING: Removing unreachable block (ram,0x0055fe8c) */
/* WARNING: Removing unreachable block (ram,0x005602e0) */
/* WARNING: Removing unreachable block (ram,0x00560304) */
/* WARNING: Removing unreachable block (ram,0x0055fe94) */
/* WARNING: Removing unreachable block (ram,0x0055fe9c) */
/* WARNING: Removing unreachable block (ram,0x0055feb0) */
/* WARNING: Removing unreachable block (ram,0x0055fef0) */
/* WARNING: Removing unreachable block (ram,0x0055ff70) */
/* WARNING: Removing unreachable block (ram,0x0055fd94) */
/* WARNING: Removing unreachable block (ram,0x00560308) */
/* WARNING: Removing unreachable block (ram,0x00560330) */
/* WARNING: Removing unreachable block (ram,0x00560334) */
/* WARNING: Removing unreachable block (ram,0x0056049c) */
/* WARNING: Removing unreachable block (ram,0x005604b8) */
/* WARNING: Removing unreachable block (ram,0x00560340) */
/* WARNING: Removing unreachable block (ram,0x0056035c) */
/* WARNING: Removing unreachable block (ram,0x0056036c) */
/* WARNING: Removing unreachable block (ram,0x00560380) */
/* WARNING: Removing unreachable block (ram,0x005603a4) */
/* WARNING: Removing unreachable block (ram,0x005603c8) */
/* WARNING: Removing unreachable block (ram,0x005603e8) */
/* WARNING: Removing unreachable block (ram,0x00560474) */
/* WARNING: Removing unreachable block (ram,0x00560710) */
/* WARNING: Removing unreachable block (ram,0x00560728) */
/* WARNING: Removing unreachable block (ram,0x0056047c) */
/* WARNING: Removing unreachable block (ram,0x00560498) */
/* WARNING: Removing unreachable block (ram,0x005603ec) */
/* WARNING: Removing unreachable block (ram,0x00560374) */
/* WARNING: Removing unreachable block (ram,0x005603fc) */
/* WARNING: Removing unreachable block (ram,0x00560418) */
/* WARNING: Removing unreachable block (ram,0x0055fda4) */
/* WARNING: Removing unreachable block (ram,0x0055fdc0) */
/* WARNING: Removing unreachable block (ram,0x0055fdcc) */
/* WARNING: Removing unreachable block (ram,0x00560454) */
/* WARNING: Removing unreachable block (ram,0x0055fdd8) */
/* WARNING: Removing unreachable block (ram,0x0055fde8) */
/* WARNING: Removing unreachable block (ram,0x0055ff98) */
/* WARNING: Removing unreachable block (ram,0x0055ffa4) */
/* WARNING: Removing unreachable block (ram,0x0055ffbc) */
/* WARNING: Removing unreachable block (ram,0x0055fe08) */
/* WARNING: Removing unreachable block (ram,0x0055f9ac) */
/* WARNING: Removing unreachable block (ram,0x0055f9b8) */
/* WARNING: Removing unreachable block (ram,0x0055f9e0) */
/* WARNING: Removing unreachable block (ram,0x0055f9e4) */
/* WARNING: Removing unreachable block (ram,0x0055ffc0) */
/* WARNING: Removing unreachable block (ram,0x0055f9ec) */
/* WARNING: Removing unreachable block (ram,0x0055fff0) */
/* WARNING: Removing unreachable block (ram,0x0055fa1c) */
/* WARNING: Removing unreachable block (ram,0x0055fa2c) */
/* WARNING: Removing unreachable block (ram,0x0055fa68) */
/* WARNING: Removing unreachable block (ram,0x0055fae8) */
/* WARNING: Removing unreachable block (ram,0x0055fff8) */
/* WARNING: Removing unreachable block (ram,0x0055fb48) */
/* WARNING: Removing unreachable block (ram,0x005604bc) */
/* WARNING: Removing unreachable block (ram,0x0055fc1c) */
/* WARNING: Removing unreachable block (ram,0x0055fc4c) */
/* WARNING: Removing unreachable block (ram,0x0055fc5c) */
/* WARNING: Removing unreachable block (ram,0x0055fc68) */
/* WARNING: Removing unreachable block (ram,0x0055fc74) */
/* WARNING: Removing unreachable block (ram,0x0055fc80) */
/* WARNING: Removing unreachable block (ram,0x00560204) */
/* WARNING: Removing unreachable block (ram,0x00560208) */
/* WARNING: Removing unreachable block (ram,0x0055fc8c) */
/* WARNING: Removing unreachable block (ram,0x0055fc9c) */
/* WARNING: Removing unreachable block (ram,0x0055fca0) */
/* WARNING: Removing unreachable block (ram,0x0055fc40) */
/* WARNING: Removing unreachable block (ram,0x0055fca8) */
/* WARNING: Removing unreachable block (ram,0x0055fcb8) */
/* WARNING: Removing unreachable block (ram,0x0055fcc8) */
/* WARNING: Removing unreachable block (ram,0x00560090) */
/* WARNING: Removing unreachable block (ram,0x005600a0) */
/* WARNING: Removing unreachable block (ram,0x005600d8) */
/* WARNING: Removing unreachable block (ram,0x005600e8) */
/* WARNING: Removing unreachable block (ram,0x005600f0) */
/* WARNING: Removing unreachable block (ram,0x005600fc) */
/* WARNING: Removing unreachable block (ram,0x0056015c) */
/* WARNING: Removing unreachable block (ram,0x0056016c) */
/* WARNING: Removing unreachable block (ram,0x00560120) */
/* WARNING: Removing unreachable block (ram,0x00560238) */
/* WARNING: Removing unreachable block (ram,0x0056024c) */
/* WARNING: Removing unreachable block (ram,0x0056025c) */
/* WARNING: Removing unreachable block (ram,0x005604f0) */
/* WARNING: Removing unreachable block (ram,0x00560528) */
/* WARNING: Removing unreachable block (ram,0x00560530) */
/* WARNING: Removing unreachable block (ram,0x0056053c) */
/* WARNING: Removing unreachable block (ram,0x00560544) */
/* WARNING: Removing unreachable block (ram,0x00560550) */
/* WARNING: Removing unreachable block (ram,0x00560580) */
/* WARNING: Removing unreachable block (ram,0x0056058c) */
/* WARNING: Removing unreachable block (ram,0x00560590) */
/* WARNING: Removing unreachable block (ram,0x0056059c) */
/* WARNING: Removing unreachable block (ram,0x005605a0) */
/* WARNING: Removing unreachable block (ram,0x00560270) */
/* WARNING: Removing unreachable block (ram,0x00560284) */
/* WARNING: Removing unreachable block (ram,0x00560290) */
/* WARNING: Removing unreachable block (ram,0x0056029c) */
/* WARNING: Removing unreachable block (ram,0x00560468) */
/* WARNING: Removing unreachable block (ram,0x005605bc) */
/* WARNING: Removing unreachable block (ram,0x005605c8) */
/* WARNING: Removing unreachable block (ram,0x005606c0) */
/* WARNING: Removing unreachable block (ram,0x005605d0) */
/* WARNING: Removing unreachable block (ram,0x005605d8) */
/* WARNING: Removing unreachable block (ram,0x005605e4) */
/* WARNING: Removing unreachable block (ram,0x005605f4) */
/* WARNING: Removing unreachable block (ram,0x005602a8) */
/* WARNING: Removing unreachable block (ram,0x005602cc) */
/* WARNING: Removing unreachable block (ram,0x005602dc) */
/* WARNING: Removing unreachable block (ram,0x0056014c) */
/* WARNING: Removing unreachable block (ram,0x00560178) */
/* WARNING: Removing unreachable block (ram,0x00560188) */
/* WARNING: Removing unreachable block (ram,0x0055fcdc) */
/* WARNING: Removing unreachable block (ram,0x005601a0) */
/* WARNING: Removing unreachable block (ram,0x005601a4) */
/* WARNING: Removing unreachable block (ram,0x005601c8) */
/* WARNING: Removing unreachable block (ram,0x005601d4) */
/* WARNING: Removing unreachable block (ram,0x0055fcf0) */
/* WARNING: Removing unreachable block (ram,0x0055fcf4) */
/* WARNING: Removing unreachable block (ram,0x00560000) */
/* WARNING: Removing unreachable block (ram,0x0055fd08) */
/* WARNING: Removing unreachable block (ram,0x00560008) */
/* WARNING: Removing unreachable block (ram,0x00560014) */
/* WARNING: Removing unreachable block (ram,0x00560440) */
/* WARNING: Removing unreachable block (ram,0x00560450) */
/* WARNING: Removing unreachable block (ram,0x00560028) */
/* WARNING: Removing unreachable block (ram,0x005601d8) */
/* WARNING: Removing unreachable block (ram,0x005601ec) */
/* WARNING: Removing unreachable block (ram,0x00560200) */
/* WARNING: Removing unreachable block (ram,0x00560038) */
/* WARNING: Removing unreachable block (ram,0x00560210) */
/* WARNING: Removing unreachable block (ram,0x0056022c) */
/* WARNING: Removing unreachable block (ram,0x00560044) */
/* WARNING: Removing unreachable block (ram,0x00560050) */
/* WARNING: Removing unreachable block (ram,0x00560058) */
/* WARNING: Removing unreachable block (ram,0x00560068) */
/* WARNING: Removing unreachable block (ram,0x00560084) */
/* WARNING: Removing unreachable block (ram,0x00560600) */
/* WARNING: Removing unreachable block (ram,0x005606d4) */
/* WARNING: Removing unreachable block (ram,0x00560704) */
/* WARNING: Removing unreachable block (ram,0x00560620) */
/* WARNING: Removing unreachable block (ram,0x00560630) */
/* WARNING: Removing unreachable block (ram,0x005606b8) */
/* WARNING: Removing unreachable block (ram,0x0055fd20) */
/* WARNING: Removing unreachable block (ram,0x0055fd24) */
/* WARNING: Removing unreachable block (ram,0x0055fd28) */
/* WARNING: Removing unreachable block (ram,0x0055fd30) */
/* WARNING: Removing unreachable block (ram,0x0055fd38) */
/* WARNING: Removing unreachable block (ram,0x0055fd48) */
/* WARNING: Removing unreachable block (ram,0x0055fd50) */
/* WARNING: Removing unreachable block (ram,0x0055fd58) */
/* WARNING: Removing unreachable block (ram,0x0055fd60) */
/* WARNING: Removing unreachable block (ram,0x0055fd68) */
/* WARNING: Removing unreachable block (ram,0x005604c8) */
/* WARNING: Removing unreachable block (ram,0x0055fd88) */
/* WARNING: Removing unreachable block (ram,0x0055fd90) */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

undefined8 FUN_0055f8cc(int param_1)

{
  undefined4 *puVar1;
  undefined8 uVar2;
  GPiece<4> local_15c;
  GPiece<36> local_158;
  GPiece<164> local_134;
  
  uVar2 = 2;
  if (param_1 != 0) {
    puVar1 = *(undefined4 **)(param_1 + 0xc);
    if (puVar1 != (undefined4 *)0x0) {
      do {
        FUN_0054edb0(local_134);
        FUN_0054f314(*puVar1,local_134,local_158,*(undefined4 *)(param_1 + 0x70),0x5aa,local_15c);
        puVar1 = (undefined4 *)puVar1[9];
      } while (puVar1 != (undefined4 *)0x0);
    }
    uVar2 = 0;
  }
  return uVar2;
}


// 0x056072c (0x620 bytes)
/* WARNING: Removing unreachable block (ram,0x005608d4) */
/* WARNING: Removing unreachable block (ram,0x00560914) */
/* WARNING: Removing unreachable block (ram,0x00560e98) */
/* WARNING: Removing unreachable block (ram,0x00560ea8) */

ulonglong FUN_0056072c(int param_1)

{
  bool bVar1;
  bool bVar2;
  uint *puVar3;
  uint uVar4;
  int iVar5;
  int *piVar6;
  int iVar7;
  int *piVar8;
  ulonglong uVar9;
  int iVar10;
  int iVar11;
  uint uVar12;
  uint *puVar13;
  GPiece<2> local_90;
  GPiece<2> local_8e;
  GPiece<4> local_8c;
  uint local_88;
  uint local_84;
  GPiece<16> local_80;
  
  uVar9 = 0xd2f2;
  if (param_1 != 0) {
    iVar7 = param_1 + 0x104;
    FUN_00556a58(iVar7);
    FUN_0055da5c(param_1);
    if (*(int *)(param_1 + 0x44) != 0) {
      FUN_0056cedc(*(int *)(param_1 + 0x44));
    }
    for (iVar11 = *(int *)(param_1 + 0xc); iVar11 != 0; iVar11 = *(int *)(iVar11 + 0x24)) {
      if ((*(int *)(iVar11 + 4) != 0) &&
         (uVar9 = FUN_0056f3fc(*(int *)(iVar11 + 4)), (int)uVar9 != 0)) goto LAB_00560b9c;
    }
    FUN_00550d54();
    uVar9 = FUN_0055f8cc(param_1);
    if (uVar9 != 0) goto LAB_00560b9c;
    piVar8 = *(int **)(param_1 + 0x20);
    if (piVar8 == (int *)0x0) {
      puVar3 = (uint *)0x0;
    }
    else {
      do {
        while (*piVar8 == 0x1b) {
          FUN_0055e0b8(param_1,piVar8);
          piVar8 = (int *)piVar8[0x48];
          if (piVar8 == (int *)0x0) goto LAB_0056085c;
        }
        piVar8 = (int *)piVar8[0x48];
      } while (piVar8 != (int *)0x0);
LAB_0056085c:
      puVar3 = *(uint **)(param_1 + 0x20);
    }
    uVar4 = *(uint *)(param_1 + 0x34);
    puVar13 = puVar3;
    if (uVar4 == 0) {
      uVar12 = 0;
LAB_005608a0:
      iVar11 = uVar4 + 1;
      if (puVar13 != (uint *)0x0) goto LAB_005608ac;
    }
    else {
      uVar12 = 0;
      if (puVar3 != (uint *)0x0) {
        uVar9 = (ulonglong)uVar4;
        do {
          uVar12 = uVar12 + 1;
          puVar13 = (uint *)puVar13[0x48];
          uVar9 = uVar9 - 1;
          if (uVar9 == 0) goto LAB_005608a0;
        } while (puVar13 != (uint *)0x0);
      }
    }
    *(undefined4 *)(param_1 + 0x34) = 0;
    iVar11 = 1;
    puVar13 = puVar3;
    if (puVar3 != (uint *)0x0) {
LAB_005608ac:
      bVar2 = false;
LAB_005608b8:
      uVar4 = *puVar13;
      do {
        if (uVar4 != 0) {
          uVar9 = FUN_0055e544(param_1,puVar13);
          if (uVar9 != 0) goto LAB_00560b9c;
          if (*puVar13 < 0x1e) {
                    /* WARNING: Could not recover jumptable at 0x005609a8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            uVar9 = (*(code *)(PTR_DAT_0071b3d4 + *(int *)(PTR_DAT_0071b3d4 + *puVar13 * 4)))();
            return uVar9;
          }
          if (*puVar13 == 2) {
            FUN_005c2fb8(puVar13 + 7);
            if ((undefined4 *)puVar13[0x44] == (undefined4 *)0x0) {
              *puVar13 = 4;
            }
            else {
              (**(code **)puVar13[0x44])(param_1,puVar13,2,puVar13[1],puVar13[0x47]);
            }
          }
        }
        puVar13 = (uint *)puVar13[0x48];
        bVar1 = puVar13 == (uint *)0x0;
        if (bVar1) {
          if (!bVar2) {
            puVar13 = *(uint **)(param_1 + 0x20);
            bVar1 = puVar13 == (uint *)0x0;
            if (bVar1) goto LAB_00560a40;
            uVar12 = 0;
            bVar2 = true;
          }
        }
        else if (!bVar2) goto LAB_005608b8;
        if ((*(uint *)(param_1 + 0x34) <= uVar12) || (bVar1)) goto LAB_00560a40;
        uVar12 = uVar12 + 1;
        uVar4 = *puVar13;
      } while( true );
    }
    iVar11 = 1;
LAB_00560a40:
    *(int *)(param_1 + 0x34) = iVar11;
    if (*(int *)(param_1 + 0x28) != 0) {
      iVar10 = 0;
      iVar11 = *(int *)(param_1 + 0x28);
      while (FUN_005567a4(iVar11 + 0x44,iVar7,&local_84), 59999 < local_84) {
        iVar5 = *(int *)(iVar11 + 0x120);
        FUN_00563ca8(param_1 + 0x28,param_1 + 0x2c,iVar11);
        *(int *)(param_1 + 0x40) = *(int *)(param_1 + 0x40) + -1;
        FUN_0055ed98(param_1,iVar11);
        if ((iVar5 == 0) || (bVar2 = iVar10 == 99, iVar10 = iVar10 + 1, iVar11 = iVar5, bVar2))
        break;
      }
    }
    for (iVar11 = *(int *)(param_1 + 0xc); iVar11 != 0; iVar11 = *(int *)(iVar11 + 0x24)) {
      piVar8 = *(int **)(iVar11 + 0x18);
      while (piVar6 = piVar8, piVar8 != (int *)0x0) {
        while (*piVar6 == 0) {
          piVar6 = (int *)piVar6[1];
          if (piVar6 == (int *)0x0) goto LAB_00560b20;
        }
        FUN_00564034(piVar6 + 7,local_80,local_90);
        if (*(short *)(piVar6 + 6) == 0x1c3) {
          (*(code *)**(undefined4 **)(param_1 + 0xb8))
                    (param_1,iVar11,*(undefined8 *)(piVar6 + 3),piVar6[5],0,0,
                     *(undefined4 *)(param_1 + 200));
        }
        else if (((*(short *)(piVar6 + 6) == 0x1c4) &&
                 (FUN_00551f9c(0,local_8e), *(int *)(param_1 + 0x98) != 0)) &&
                (iVar10 = FUN_00569e74(0,local_8c), iVar10 != 0)) break;
        piVar8 = (int *)piVar6[1];
        FUN_005c2ec4(iVar11 + 0xc,piVar6);
      }
LAB_00560b20:
    }
    if ((*(int *)(param_1 + 0x54) != 0) &&
       ((FUN_005567a4(param_1 + 0x60,iVar7,&local_88), *(uint *)(param_1 + 0x84) <= local_88 ||
        (*(int *)(param_1 + 0x68) != 0)))) {
      uVar9 = FUN_0055e1b0(param_1);
      if (uVar9 != 0) goto LAB_00560b9c;
      *(undefined4 *)(param_1 + 0x68) = 0;
      *(undefined4 *)(param_1 + 0x60) = *(undefined4 *)(param_1 + 0x104);
      *(undefined4 *)(param_1 + 100) = *(undefined4 *)(param_1 + 0x108);
    }
    FUN_00550d54();
    uVar9 = 0;
  }
LAB_00560b9c:
  return uVar9 & 0xffffffff;
}


// 0x0561054 (0x2a0 bytes)
ulonglong FUN_00561054(int param_1)

{
  bool bVar1;
  bool bVar2;
  uint uVar3;
  bool bVar4;
  int *piVar5;
  int *piVar6;
  int iVar7;
  ulonglong uVar8;
  uint uVar9;
  ulonglong uVar10;
  uint local_60 [6];
  
  uVar8 = 0xd2f2;
  if (param_1 != 0) {
    FUN_00556a58(param_1 + 0x104);
    FUN_0055da5c(param_1);
    FUN_00550d54();
    uVar8 = FUN_0055f8cc(param_1);
    if ((int)uVar8 != 0) goto LAB_005611c4;
    piVar6 = *(int **)(param_1 + 0x20);
    if (piVar6 != (int *)0x0) {
      do {
        while (*piVar6 == 0x1b) {
          FUN_0055e0b8(param_1,piVar6);
          piVar6 = (int *)piVar6[0x48];
          if (piVar6 == (int *)0x0) goto LAB_00561230;
        }
        piVar6 = (int *)piVar6[0x48];
      } while (piVar6 != (int *)0x0);
LAB_00561230:
      piVar6 = *(int **)(param_1 + 0x20);
    }
    uVar3 = *(uint *)(param_1 + 0x34);
    piVar5 = piVar6;
    if (uVar3 == 0) {
      uVar9 = 0;
LAB_00561128:
      iVar7 = uVar3 + 1;
      if (piVar5 != (int *)0x0) goto LAB_00561134;
    }
    else {
      uVar9 = 0;
      if (piVar6 != (int *)0x0) {
        uVar10 = (ulonglong)uVar3;
        do {
          uVar9 = uVar9 + 1;
          piVar5 = (int *)piVar5[0x48];
          uVar10 = uVar10 - 1;
          if (uVar10 == 0) goto LAB_00561128;
        } while (piVar5 != (int *)0x0);
      }
    }
    *(undefined4 *)(param_1 + 0x34) = 0;
    iVar7 = 1;
    piVar5 = piVar6;
    if (piVar6 != (int *)0x0) {
LAB_00561134:
      bVar4 = false;
LAB_00561138:
      do {
        if ((*piVar5 != 0) && (uVar10 = FUN_0055e544(param_1,piVar5), uVar10 != 0))
        goto LAB_00561294;
        piVar5 = (int *)piVar5[0x48];
        bVar1 = piVar5 == (int *)0x0;
        if (bVar1) {
          if (!bVar4) {
            piVar5 = *(int **)(param_1 + 0x20);
            uVar9 = 0;
            bVar4 = true;
            bVar1 = piVar5 == (int *)0x0;
            if (bVar1) goto LAB_00561178;
          }
        }
        else if (!bVar4) goto LAB_00561138;
        bVar2 = *(uint *)(param_1 + 0x34) <= uVar9;
        uVar9 = uVar9 + 1;
        if ((bVar2) || (bVar1)) goto LAB_00561178;
      } while( true );
    }
    iVar7 = 1;
LAB_00561178:
    *(int *)(param_1 + 0x34) = iVar7;
    if ((*(int *)(param_1 + 0x54) == 0) ||
       ((FUN_005567a4(param_1 + 0x60,param_1 + 0x104,local_60),
        local_60[0] < *(uint *)(param_1 + 0x84) && (*(int *)(param_1 + 0x68) == 0)))) {
      FUN_00550d54();
    }
    else {
      uVar10 = FUN_0055e1b0(param_1);
      if (uVar10 != 0) {
LAB_00561294:
        return uVar10 & 0xffffffff;
      }
      *(undefined4 *)(param_1 + 0x68) = 0;
      *(undefined4 *)(param_1 + 0x60) = *(undefined4 *)(param_1 + 0x104);
      *(undefined4 *)(param_1 + 100) = *(undefined4 *)(param_1 + 0x108);
      FUN_00550d54();
    }
  }
LAB_005611c4:
  return uVar8 & 0xffffffff;
}


// 0x05612f4 (0x30 bytes)
undefined4 FUN_005612f4(undefined4 *param_1)

{
  undefined4 uVar1;
  
  uVar1 = FUN_0054eb50(*(undefined4 *)*param_1);
  return uVar1;
}


// 0x0561324 (0x58 bytes)
undefined4 FUN_00561324(int param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 uVar1;
  
  uVar1 = 0xd2f2;
  if (param_1 != 0) {
    uVar1 = 3;
    if (*(int *)(param_1 + 4) != 0) {
      uVar1 = FUN_0056f244(*(int *)(param_1 + 4),param_2,param_3);
    }
  }
  return uVar1;
}


// 0x056137c (0x15c bytes)
ulonglong FUN_0056137c(int *param_1,undefined8 *param_2,int *param_3,undefined4 *param_4)

{
  int iVar1;
  ulonglong uVar2;
  
  uVar2 = 0xd2f2;
  if (param_1 != (int *)0x0) {
    iVar1 = *(int *)(*param_1 + 4);
    if (iVar1 == 0) {
      *param_4 = 1;
      uVar2 = FUN_0055c8f0(param_1,param_2,param_3);
      return uVar2;
    }
    *param_4 = 0;
    uVar2 = FUN_0056f244(iVar1,param_2,param_3);
    iVar1 = FUN_0054edf0(*param_2);
    if ((iVar1 != 0) || (*param_3 == 0)) {
      *param_4 = 1;
      uVar2 = FUN_0055c8f0(param_1,param_2,param_3);
      return uVar2;
    }
  }
  return uVar2 & 0xffffffff;
}


// 0x05614d8 (0xac bytes)
undefined4 FUN_005614d8(int param_1,int *param_2,int param_3,int param_4)

{
  undefined4 uVar1;
  
  uVar1 = 0xd2f2;
  if (param_1 != 0) {
    if ((param_2 == (int *)0x0) || (*param_2 == 0)) {
      uVar1 = 0xd2f3;
    }
    else {
      if (param_4 != 0) {
        if (param_3 == 0) {
          uVar1 = FUN_005c3030(param_2 + 7,param_4);
          return uVar1;
        }
        if (param_3 == 1) {
          uVar1 = FUN_005c3030(param_2 + 0xc,param_4);
          return uVar1;
        }
      }
      uVar1 = 2;
    }
  }
  return uVar1;
}


// 0x0561584 (0x374 bytes)
void FUN_00561584(int *param_1)

{
  undefined4 *puVar1;
  undefined *puVar2;
  int *piVar3;
  uint uVar4;
  int *piVar5;
  int iVar6;
  int *piStack00000030;
  
  if (param_1 != (int *)0x0) {
    iVar6 = param_1[2];
    piStack00000030 = param_1;
    if (iVar6 != 0) {
      if (param_1[5] != 0) {
        uVar4 = 0;
        do {
          uVar4 = uVar4 + 1;
          FUN_0055d1fc(piStack00000030,iVar6);
          iVar6 = iVar6 + 0x2c;
        } while (uVar4 < (uint)piStack00000030[5]);
      }
      FUN_005519f0(piStack00000030 + 2);
      piStack00000030[2] = 0;
    }
    piVar5 = piStack00000030;
    if (*piStack00000030 != 0) {
      *piStack00000030 = 0;
      FUN_005519f0(piStack00000030 + 0x1b);
      FUN_005519f0(piVar5 + 0x1c);
      if (piVar5[0x11] != 0) {
        FUN_0056ec2c(piVar5[0x11]);
        piVar5[0x11] = 0;
      }
      FUN_0054ff9c();
    }
    puVar2 = PTR_DAT_0071b3c8;
    if ((int *)piStack00000030[7] != (int *)0x0) {
      if (piStack00000030[0xe] != 0) {
        uVar4 = 0;
        piVar5 = (int *)piStack00000030[7];
        do {
          piVar3 = piStack00000030;
          uVar4 = uVar4 + 1;
          if (*piVar5 != 0) {
            FUN_005c35e4(piVar5 + 7);
            FUN_005c35e4(piVar5 + 0xc);
            FUN_005519f0(piVar5 + 0x46);
            if ((*piVar5 != 5) && (*(int *)puVar2 != 0)) {
              puVar1 = *(undefined4 **)(*(int *)puVar2 + 0x58);
              piVar5[0x33] = 0;
              piVar5[0x34] = 0;
              (*(code *)*puVar1)(piVar5[0x23],piVar5[0x24]);
              if ((piVar3[0x27] == 0) && ((piVar5[0x23] & 0xc0000000U) == 0xc0000000)) {
                (*(code *)**(undefined4 **)(*(int *)puVar2 + 0x68))(piVar5[0x23]);
              }
            }
          }
          memset(piVar5,0,0x130);
          piVar5 = piVar5 + 0x4c;
        } while (uVar4 < (uint)piStack00000030[0xe]);
      }
      FUN_005519f0(piStack00000030 + 7);
      piStack00000030[7] = 0;
    }
    FUN_005519f0(piStack00000030 + 0xc);
    iVar6 = *(int *)puVar2;
    if (iVar6 != 0) {
      if (piStack00000030[0x27] == 0) {
        uVar4 = piStack00000030[0x23] & 0x3fffffffU | 0x40000000;
        puVar1 = *(undefined4 **)(iVar6 + 0x68);
      }
      else {
        uVar4 = piStack00000030[0x23] & 0x3fffffffU | 0xc0000000;
        puVar1 = *(undefined4 **)(iVar6 + 0x68);
      }
      (*(code *)*puVar1)(uVar4);
    }
    if (piStack00000030[0x15] != 0) {
      FUN_005c35e4(piStack00000030 + 0x13);
    }
    (*(code *)**(undefined4 **)piStack00000030[0x12])((undefined4 *)piStack00000030[0x12]);
    memset(piStack00000030,0,0x10c);
    FUN_005519f0(&stack0x00000030);
  }
  return;
}


// 0x05618f8 (0x64 bytes)
undefined8 FUN_005618f8(ulonglong param_1)

{
  int iVar1;
  
  iVar1 = FUN_00550edc(param_1 & 0xc0000000,0);
  if ((iVar1 == 0) && (*(int *)(PTR_DAT_0071b2c4 + 0x10c) == 0)) {
    return 1;
  }
  return 2;
}


// 0x056195c (0x1a4 bytes)
int FUN_0056195c(undefined8 param_1,undefined4 param_2,int *param_3,ushort param_4,byte param_5,
                int param_6,int param_7)

{
  int iVar1;
  int iVar2;
  ushort local_50;
  ushort local_4e [7];
  
  iVar1 = -4;
  if ((int *)*param_3 != (int *)0x0) {
    iVar1 = *(int *)*param_3 + -4;
  }
  iVar2 = FUN_005c306c(param_2,param_3,param_7,iVar1);
  if (iVar2 != 0) {
    return iVar2;
  }
  iVar2 = *param_3;
  FUN_00564144(iVar2 + 100,&local_50);
  if (param_5 < *(byte *)(iVar2 + 0x1a)) {
    *(byte *)(iVar2 + 0x1a) = param_5;
  }
  if (param_6 != 0) {
    FUN_00563ecc(iVar2 + 0xc,iVar1,param_6);
  }
  iVar1 = *param_3 + 100;
  FUN_00564228(iVar1,*(int *)(param_7 + 0x40) + (uint)local_50 & 0xffff);
  FUN_00551f9c(iVar1,local_4e);
  FUN_0056428c(iVar1,(local_4e[0] | param_4) & 0xf800);
  FUN_00564524(*param_3,0);
  return 0;
}


// 0x0561b00 (0x1e4 bytes)
undefined4
FUN_00561b00(undefined8 param_1,int param_2,int param_3,undefined8 param_4,undefined4 param_5,
            undefined8 param_6,int param_7)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 *puVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  GPiece<4> auStack_100;
  int local_fc [17];
  uint local_b8;
  GPiece<20> auStack_b4;
  int local_a0;
  
  memset(auStack_b4,0,0x58);
  if (param_7 != 0) {
    FUN_00563ecc(auStack_b4,0,param_7);
  }
  FUN_00552570(auStack_100,param_5);
  uVar5 = 1;
  local_b8 = 1;
  if ((int)*(uint *)(param_3 + 0x44) < 1) {
    uVar5 = 1;
  }
  else {
    uVar6 = (ulonglong)*(uint *)(param_3 + 0x44);
    iVar3 = 0;
    do {
      iVar1 = (int)((uVar5 & 0xffffffff) << 3);
      puVar4 = (undefined4 *)(iVar3 + param_3);
      iVar3 = iVar3 + 8;
      if ((int)uVar5 < 8) {
        uVar2 = *puVar4;
        *(undefined4 *)((int)local_fc + iVar1 + 4) = puVar4[1];
        uVar5 = (ulonglong)local_b8 + 1;
        *(undefined4 *)((int)local_fc + iVar1) = uVar2;
        local_b8 = (uint)uVar5;
      }
      uVar6 = uVar6 - 1;
    } while (uVar6 != 0);
  }
  if ((int)uVar5 < 8) {
    iVar3 = (int)((uVar5 & 0xffffffff) << 3);
    *(undefined1 **)((int)local_fc + iVar3) = auStack_b4;
    if (local_a0 == 0) {
      *(undefined4 *)((int)local_fc + iVar3 + 4) = 0x58;
    }
    else {
      *(int *)((int)local_fc + iVar3 + 4) = local_a0 * 4 + 0x58;
    }
  }
  uVar2 = 0;
  if (param_2 != 0) {
    uVar2 = *(undefined4 *)(param_2 + 0x10);
  }
  uVar2 = FUN_005c3344(param_2,uVar2,local_fc);
  return uVar2;
}


// 0x0561ce4 (0x310 bytes)
undefined4 FUN_00561ce4(int param_1,uint param_2,undefined1 param_3,undefined4 param_4,int param_5)

{
  uint *puVar1;
  uint uVar2;
  undefined4 uVar3;
  int iVar4;
  uint uVar5;
  ushort local_70;
  ushort local_6e;
  GPiece<4> local_6c;
  GPiece<16> auStack_68;
  
  if (param_1 == 0) {
    return 0xd2f2;
  }
  if ((((param_5 != 0) && (*(uint *)(param_5 + 0x40) != 0)) &&
      (*(uint *)(param_5 + 0x40) <= *(uint *)(param_1 + 0x80))) && ((param_2 & 0x4000) == 0)) {
    if (*(int *)(param_1 + 0x54) == 0) {
      return 0;
    }
    uVar2 = param_2 & 0x7fff;
    if ((param_2 & 0x1000) == 0) {
      puVar1 = *(uint **)(param_1 + 0x5c);
    }
    else {
      puVar1 = *(uint **)(param_1 + 0x5c);
      *(undefined4 *)(param_1 + 0x68) = 1;
    }
    if (puVar1 == (uint *)0x0) {
      iVar4 = *(int *)(param_5 + 0x40);
    }
    else {
      FUN_00564144(puVar1 + 0x19,&local_70);
      FUN_00564180(puVar1 + 0x19,&local_6e);
      if (((puVar1 == (uint *)0x0) || (*puVar1 == 0)) ||
         ((uVar5 = (uint)local_6e, *puVar1 <= uVar5 ||
          (uVar5 < (((int)((param_2 & 0x6000) - 1) >> 0x1f & 0xfffffffeU) + 4 & 0xffff))))) {
        iVar4 = *(int *)(param_5 + 0x40);
      }
      else {
        iVar4 = *(int *)(param_5 + 0x40);
        uVar5 = uVar5 + (uint)local_70 + iVar4;
        if ((uVar5 <= *(uint *)(param_1 + 0x80)) && (uVar5 < 0x5ab)) {
          uVar3 = FUN_0056195c(param_1,param_1 + 0x4c,local_6c,uVar2,param_3,param_4,param_5);
          return uVar3;
        }
      }
    }
    FUN_005642f0(param_1,0,uVar2,iVar4,auStack_68);
    FUN_00564180(auStack_68,&local_6e);
    if (*(int *)(param_5 + 0x44) < 8) {
      iVar4 = *(int *)(param_5 + 0x44) * 8;
      *(undefined1 **)(param_5 + iVar4) = auStack_68;
      *(uint *)(param_5 + iVar4 + 4) = (uint)local_6e;
      *(uint *)(param_5 + 0x40) = (uint)local_6e + *(int *)(param_5 + 0x40);
      *(int *)(param_5 + 0x44) = *(int *)(param_5 + 0x44) + 1;
    }
    uVar3 = FUN_00561b00(param_1,param_1 + 0x4c,param_5,uVar2,0,param_3,param_4);
    iVar4 = *(int *)(param_5 + 0x44) + -1;
    *(int *)(param_5 + 0x44) = iVar4;
    *(int *)(param_5 + 0x40) = *(int *)(param_5 + 0x40) - *(int *)(param_5 + iVar4 * 8 + 4);
    return uVar3;
  }
  return 2;
}


// 0x0561ff4 (0x498 bytes)
/* WARNING: Removing unreachable block (ram,0x00562208) */
/* WARNING: Removing unreachable block (ram,0x005622b8) */
/* WARNING: Removing unreachable block (ram,0x00562238) */
/* WARNING: Removing unreachable block (ram,0x0056223c) */

ulonglong FUN_00561ff4(int param_1,int *param_2,int param_3,uint param_4,undefined1 param_5,
                      undefined4 param_6,void *param_7,undefined8 param_8)

{
  bool bVar1;
  int *piVar2;
  int iVar3;
  uint uVar4;
  undefined4 uVar5;
  ulonglong uVar6;
  short sVar7;
  undefined4 *puVar8;
  uint uVar9;
  ulonglong uVar10;
  int iVar11;
  int iVar12;
  int *piVar13;
  byte in_cr0;
  byte in_cr1;
  byte in_cr2;
  byte in_cr3;
  byte bVar14;
  byte unaff_cr4;
  byte in_cr5;
  byte in_cr6;
  byte in_cr7;
  uint uStack00000008;
  GPiece<4> auStack_100;
  GPiece<4> local_fc;
  uint local_f8 [16];
  int local_b8;
  int local_b4;
  uint local_b0;
  int local_ac;
  undefined4 local_a8;
  undefined4 local_a4;
  void *local_a0;
  undefined8 local_98;
  
  uStack00000008 =
       (uint)(in_cr0 & 0xf) << 0x1c | (uint)(in_cr1 & 0xf) << 0x18 | (uint)(in_cr2 & 0xf) << 0x14 |
       (uint)(in_cr3 & 0xf) << 0x10 | (uint)(unaff_cr4 & 0xf) << 0xc | (uint)(in_cr5 & 0xf) << 8 |
       (uint)(in_cr6 & 0xf) << 4 | (uint)(in_cr7 & 0xf);
  uVar10 = 0xd2f2;
  if (param_1 == 0) goto LAB_00562250;
  if ((((param_2 == (int *)0x0) || (param_3 == 0)) || (param_7 == (void *)0x0)) ||
     ((*(uint *)((int)param_7 + 0x40) == 0 ||
      (*(uint *)(param_1 + 0x80) < *(uint *)((int)param_7 + 0x40))))) {
    uVar10 = 2;
    goto LAB_00562250;
  }
  puVar8 = (undefined4 *)param_8;
  bVar14 = (puVar8 == (undefined4 *)0x0) << 1;
  if (puVar8 != (undefined4 *)0x0) {
    *puVar8 = 0;
  }
  local_a4 = param_6;
  local_a0 = param_7;
  local_98 = param_8;
  if (*(int *)(param_1 + 4) == 1) {
    uVar9 = param_4 & 0xffff;
    local_b0 = param_4 & 0x8000;
    if ((param_4 & 0x8000) == 0) goto LAB_005620f4;
    uVar10 = (ulonglong)*(uint *)((int)param_7 + 0x40);
    bVar1 = (ulonglong)*(uint *)(param_1 + 0x80) / (ulonglong)(param_3 + 1) < uVar10;
    local_b0 = (uint)bVar1;
    if (!bVar1) goto LAB_005620f4;
    iVar11 = *(int *)((int)param_7 + 0x44) + -1;
    if (-1 < iVar11) {
      iVar12 = 0;
      do {
        iVar3 = iVar11 * 8;
        memcpy((void *)(iVar12 + *(int *)(param_1 + 0x6c)),*(void **)((int)param_7 + iVar3),
                     *(size_t *)((int)param_7 + iVar3 + 4));
        bVar1 = iVar11 != 0;
        iVar11 = iVar11 + -1;
        iVar12 = iVar12 + *(int *)((int)param_7 + iVar3 + 4);
      } while (bVar1);
      uVar10 = (ulonglong)*(uint *)((int)param_7 + 0x40);
    }
    local_a8 = (*(code *)**(undefined4 **)(*(int *)PTR_DAT_0071b3c8 + 0x40))
                         (*(undefined4 *)(*param_2 + 0x8c),0xfffe,*(undefined4 *)(param_1 + 0x6c),
                          uVar10);
    local_f8[0] = *(uint *)(param_1 + 0x6c);
    local_f8[1] = *(int *)((int)param_7 + 0x40);
    local_b4 = 1;
    local_b8 = local_f8[1];
  }
  else {
    param_4 = param_4 & 0x7fff;
    local_b0 = 0;
    uVar9 = param_4;
LAB_005620f4:
    local_a8 = 0;
    memcpy(local_f8,param_7,0x48);
  }
  local_ac = local_b8;
  if (local_b4 < 8) {
    uVar4 = ((int)((uVar9 & 0x6000) - 1) >> 0x1f & 0xfffffffeU) + 4 & 0xffff;
    local_f8[local_b4 * 2 + 1] = uVar4;
    local_b8 = local_b8 + uVar4;
    local_f8[local_b4 * 2] = (uint)auStack_100;
    local_b4 = local_b4 + 1;
  }
  if (param_3 < 1) {
    uVar10 = 0;
  }
  else {
    uVar10 = 0;
    iVar11 = 0;
    iVar12 = 0;
    do {
      piVar13 = (int *)(iVar12 + (int)param_2);
      piVar2 = (int *)*piVar13;
      if ((piVar2 != (int *)0x0) && (*piVar2 == 0x1b)) {
        if (local_b0 == 0) {
          FUN_0055e390(param_1,piVar2,param_4 & 0xffff,*(undefined4 *)((int)param_7 + 0x40),local_fc
                      );
        }
        uVar5 = local_a4;
        FUN_005642f0(param_1,*piVar13,param_4 & 0xffff,local_ac,auStack_100);
        uVar6 = FUN_00561b00(param_1,*piVar13 + 0x1c,local_f8,0x8000,local_a8,param_5,uVar5);
        if (uVar6 == 0) {
          if (!(bool)(bVar14 >> 1 & 1)) {
            *(undefined4 *)local_98 = *(undefined4 *)((int)param_7 + 0x40);
          }
          if ((uVar9 & 0x1000) != 0) {
            *(int *)(*piVar13 + 0x84) = *(int *)(*piVar13 + 0x84) + 1;
          }
        }
        else if ((uVar9 & 0x4000) != 0) {
          iVar3 = *piVar13;
          sVar7 = *(short *)(iVar3 + 0x76) + -1;
          *(short *)(iVar3 + 0x76) = sVar7;
          uVar10 = uVar6;
          if (sVar7 == 0) {
            *(undefined2 *)(iVar3 + 0x76) = 0xffff;
          }
        }
      }
      iVar11 = iVar11 + 1;
      iVar12 = iVar12 + 4;
    } while (iVar11 != param_3);
  }
LAB_00562250:
  return uVar10 & 0xffffffff;
}


// 0x056248c (0x2f8 bytes)
/* WARNING: Removing unreachable block (ram,0x005625bc) */
/* WARNING: Removing unreachable block (ram,0x005625e8) */
/* WARNING: Removing unreachable block (ram,0x005625ec) */

ulonglong FUN_0056248c(int param_1,int *param_2,ushort param_3,undefined1 param_4,undefined4 param_5
                      ,int param_6,int *param_7)

{
  uint uVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  int iVar4;
  short sVar5;
  byte in_cr0;
  byte in_cr1;
  byte in_cr2;
  byte in_cr3;
  byte unaff_cr4;
  byte in_cr5;
  byte in_cr6;
  byte in_cr7;
  uint uStack00000008;
  ushort local_80;
  GPiece<6> auStack_7e;
  GPiece<8> local_78;
  
  uStack00000008 =
       (uint)(in_cr0 & 0xf) << 0x1c | (uint)(in_cr1 & 0xf) << 0x18 | (uint)(in_cr2 & 0xf) << 0x14 |
       (uint)(in_cr3 & 0xf) << 0x10 | (uint)(unaff_cr4 & 0xf) << 0xc | (uint)(in_cr5 & 0xf) << 8 |
       (uint)(in_cr6 & 0xf) << 4 | (uint)(in_cr7 & 0xf);
  uVar2 = 0xd2f2;
  if (param_1 == 0) goto LAB_0056260c;
  if (param_2 != (int *)0x0) {
    if (param_7 != (int *)0x0) {
      *param_7 = 0;
    }
    iVar4 = *param_2;
    if ((iVar4 == 3) || (iVar4 == 1)) {
      uVar2 = 0;
      goto LAB_0056260c;
    }
    if (iVar4 == 0x1b) {
      if (((param_6 == 0) || (uVar1 = *(uint *)(param_6 + 0x40), uVar1 == 0)) ||
         (*(uint *)(param_1 + 0x80) < uVar1)) {
        uVar2 = 2;
      }
      else {
        if (*(int *)(param_1 + 4) != 1) {
          param_3 = param_3 & 0x7fff;
        }
        uVar2 = FUN_0055e390(param_1,param_2,param_3,uVar1,local_78);
        if ((int)uVar2 == 0) {
          FUN_005642f0(param_1,param_2,param_3,*(undefined4 *)(param_6 + 0x40),auStack_7e);
          FUN_00564180(auStack_7e,&local_80);
          if (*(int *)(param_6 + 0x44) < 8) {
            iVar4 = *(int *)(param_6 + 0x44) * 8;
            *(undefined1 **)(param_6 + iVar4) = auStack_7e;
            *(uint *)(param_6 + iVar4 + 4) = (uint)local_80;
            *(uint *)(param_6 + 0x40) = (uint)local_80 + *(int *)(param_6 + 0x40);
            *(int *)(param_6 + 0x44) = *(int *)(param_6 + 0x44) + 1;
          }
          uVar3 = FUN_00561b00(param_1,param_2 + 7,param_6,0x8000,0,param_4,param_5);
          iVar4 = *(int *)(param_6 + 0x44) + -1;
          *(int *)(param_6 + 0x44) = iVar4;
          iVar4 = *(int *)(param_6 + 0x40) - *(int *)(param_6 + iVar4 * 8 + 4);
          *(int *)(param_6 + 0x40) = iVar4;
          if (uVar3 == 0) {
            if (param_7 != (int *)0x0) {
              *param_7 = iVar4;
            }
            if ((param_3 & 0x1000) != 0) {
              param_2[0x21] = param_2[0x21] + 1;
            }
          }
          else if (((param_3 & 0x4000) != 0) &&
                  (sVar5 = *(short *)((int)param_2 + 0x76) + -1,
                  *(short *)((int)param_2 + 0x76) = sVar5, uVar2 = uVar3, sVar5 == 0)) {
            *(undefined2 *)((int)param_2 + 0x76) = 0xffff;
          }
        }
      }
      goto LAB_0056260c;
    }
  }
  uVar2 = 0xd2f3;
LAB_0056260c:
  return uVar2 & 0xffffffff;
}


// 0x0562784 (0x160 bytes)
void FUN_00562784(int param_1,int *param_2)

{
  int iVar1;
  short sVar2;
  GPiece<2> local_80;
  GPiece<6> auStack_7e;
  GPiece<80> local_78;
  
  if ((param_1 != 0) && (param_2 != (int *)0x0)) {
    iVar1 = *param_2;
    *(undefined2 *)(param_2 + 0x1c) = 0;
    param_2[0x44] = 0;
    param_2[0x43] = 0;
    param_2[0x45] = 0;
    param_2[0x47] = 0;
    if ((iVar1 == 0x1b) || (iVar1 == 3)) {
      *param_2 = 6;
      FUN_005642f0(param_1,param_2,0x4000,0,auStack_7e);
      FUN_00564180(auStack_7e,local_80);
      iVar1 = FUN_00561b00(param_1,param_2 + 7,local_78,0x2000,0,0,0);
      if ((iVar1 != 0) &&
         (sVar2 = *(short *)((int)param_2 + 0x76) + -1, *(short *)((int)param_2 + 0x76) = sVar2,
         sVar2 == 0)) {
        *(undefined2 *)((int)param_2 + 0x76) = 0xffff;
        return;
      }
    }
    else if (iVar1 != 0) {
      *param_2 = 4;
    }
  }
  return;
}


// 0x05628e4 (0x70 bytes)
int FUN_005628e4(uint param_1,int param_2)

{
  uint uVar1;
  int iVar2;
  byte in_cr0;
  byte in_cr1;
  byte in_cr2;
  byte in_cr3;
  byte unaff_cr4;
  byte in_cr5;
  byte in_cr6;
  byte in_cr7;
  uint uStack00000008;
  
  uStack00000008 =
       (uint)(in_cr0 & 0xf) << 0x1c | (uint)(in_cr1 & 0xf) << 0x18 | (uint)(in_cr2 & 0xf) << 0x14 |
       (uint)(in_cr3 & 0xf) << 0x10 | (uint)(unaff_cr4 & 0xf) << 0xc | (uint)(in_cr5 & 0xf) << 8 |
       (uint)(in_cr6 & 0xf) << 4 | (uint)(in_cr7 & 0xf);
LAB_00562904:
  do {
    uVar1 = FUN_00552968();
    iVar2 = uVar1 - (uVar1 / param_1) * param_1;
    if (param_2 != 0) {
      if ((iVar2 == 0x1c3) || (iVar2 == 0x1c4)) goto LAB_00562904;
    }
    if (iVar2 != 0) {
      return iVar2;
    }
  } while( true );
}


// 0x0562954 (0x854 bytes)
undefined8 FUN_00562954(int param_1,undefined8 *param_2,undefined4 *param_3)

{
  undefined1 uVar1;
  undefined1 uVar2;
  undefined1 uVar3;
  int iVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  byte *pbVar9;
  byte *pbVar10;
  byte *pbVar11;
  byte *pbVar12;
  byte *pbVar13;
  byte *pbVar14;
  byte *pbVar15;
  byte *pbVar16;
  byte *pbVar17;
  byte *pbVar18;
  undefined *puVar19;
  int iVar20;
  undefined4 *puVar21;
  undefined2 uVar22;
  short sVar23;
  ulonglong uVar24;
  uint uVar25;
  GPiece<4> local_b0;
  int local_ac;
  undefined8 local_a8 [3];
  
  if (param_3 != (undefined4 *)0x0) {
    *param_3 = 0;
    if (param_1 == 0) {
      return 0xd2f2;
    }
    if ((*(int *)(param_2 + 8) != 0) && (*(int *)((int)param_2 + 0x44) != 0)) {
      FUN_0054edb0(local_a8);
      FUN_0056137c(param_1,local_a8,local_b0,&local_ac);
      if ((*(int *)(param_2 + 1) == 0) && (iVar20 = FUN_0054ee38(local_a8[0],*param_2), iVar20 != 0)
         ) {
        return 0xd305;
      }
      if (local_ac == 0) {
        FUN_0054edb0(local_a8);
        FUN_0055c8f0(param_1,local_a8,local_b0);
        if ((*(int *)(param_2 + 1) == 0) &&
           (iVar20 = FUN_0054ee38(local_a8[0],*param_2), iVar20 != 0)) {
          return 0xd305;
        }
      }
      FUN_00556a58(param_1 + 0x104);
      puVar21 = (undefined4 *)FUN_0055d994(param_1);
      if (puVar21 == (undefined4 *)0x0) {
        return 0xd2f7;
      }
      *param_3 = puVar21;
      FUN_00563b70(param_1 + 0x20,puVar21);
      pbVar9 = (byte *)((int)puVar21 + 10);
      pbVar10 = (byte *)((int)puVar21 + 0xe);
      pbVar11 = (byte *)((int)puVar21 + 0xb);
      pbVar12 = (byte *)((int)puVar21 + 0xf);
      pbVar13 = (byte *)(puVar21 + 2);
      pbVar14 = (byte *)(puVar21 + 3);
      pbVar15 = (byte *)((int)puVar21 + 9);
      pbVar16 = (byte *)((int)puVar21 + 0xd);
      pbVar17 = (byte *)(puVar21 + 4);
      pbVar18 = (byte *)((int)puVar21 + 0x11);
      uVar25 = (((((((((uint)*pbVar9 * 0x1f + (uint)*pbVar10) * 0x1f + (uint)*pbVar11) * 0x1f +
                    (uint)*pbVar12) * 0x1f + (uint)*pbVar13) * 0x1f + (uint)*pbVar14) * 0x1f +
                 (uint)*pbVar15) * 0x1f + (uint)*pbVar16) * 0x1f + (uint)*pbVar17) * 0x1f +
               (uint)*pbVar18;
      FUN_00563c0c((uVar25 - (uVar25 / *(uint *)(param_1 + 0x74)) * *(uint *)(param_1 + 0x74)) * 4 +
                   *(int *)(param_1 + 0x30),puVar21);
      iVar20 = *(int *)((int)param_2 + 0x14);
      *puVar21 = 0xc;
      if (iVar20 == 0) {
        iVar20 = *(int *)(param_1 + 0x78);
        *(int *)((int)param_2 + 0x14) = iVar20;
      }
      if (*(int *)(param_2 + 3) == 0) {
        *(undefined4 *)(param_2 + 3) = *(undefined4 *)(param_1 + 0x7c);
      }
      iVar20 = FUN_005c3660(puVar21 + 7,*(undefined4 *)(param_1 + 0x48),iVar20);
      if ((((iVar20 == 0) &&
           (iVar20 = FUN_005c3660(puVar21 + 0xc,*(undefined4 *)(param_1 + 0x48),
                                  *(undefined4 *)(param_2 + 3)), iVar20 == 0)) &&
          (iVar20 = FUN_00551de8(puVar21 + 0x46,0x402), puVar19 = PTR_DAT_0071b3c8, iVar20 == 0)) &&
         (puVar21[0x46] != 0)) {
        if (*(int *)((int)param_2 + 0x1c) == 0) {
          uVar25 = *(uint *)(param_1 + 0x8c);
          puVar21[0x34] = 0;
          puVar21[0x33] = 0;
          puVar21[0x23] = uVar25 & 0x3fffffff | 0x40000000;
        }
        else {
          iVar20 = *(int *)(param_1 + 0x8c);
          puVar21[0x34] = 0;
          iVar4 = *(int *)puVar19;
          uVar25 = puVar21[0x24] + iVar20 & 0x3fffffffU | 0x40000000;
          puVar21[0x24] = 0xffff;
          puVar21[0x23] = uVar25;
          puVar21[0x33] = 0;
          if ((iVar4 != 0) && (*(int *)(param_1 + 4) == 1)) {
            (*(code *)**(undefined4 **)(iVar4 + 0x68))(uVar25);
            (*(code *)**(undefined4 **)(*(int *)puVar19 + 0x14))(puVar21[0x23],0);
          }
        }
        FUN_005641d0(puVar21);
        uVar25 = (((((((((uint)*pbVar9 * 0x1f + (uint)*pbVar10) * 0x1f + (uint)*pbVar11) * 0x1f +
                      (uint)*pbVar12) * 0x1f + (uint)*pbVar13) * 0x1f + (uint)*pbVar14) * 0x1f +
                   (uint)*pbVar15) * 0x1f + (uint)*pbVar16) * 0x1f + (uint)*pbVar17) * 0x1f +
                 (uint)*pbVar18;
        FUN_00563c38((uVar25 - (uVar25 / *(uint *)(param_1 + 0x74)) * *(uint *)(param_1 + 0x74)) * 4
                     + *(int *)(param_1 + 0x30),puVar21);
        puVar21[4] = *(undefined4 *)(param_2 + 1);
        iVar20 = *(int *)(param_1 + 0x30);
        puVar21[2] = *(undefined4 *)param_2;
        puVar21[3] = *(undefined4 *)((int)param_2 + 4);
        uVar25 = (((((((((uint)*pbVar9 * 0x1f + (uint)*pbVar10) * 0x1f + (uint)*pbVar11) * 0x1f +
                      (uint)*pbVar12) * 0x1f + (uint)*pbVar13) * 0x1f + (uint)*pbVar14) * 0x1f +
                   (uint)*pbVar15) * 0x1f + (uint)*pbVar16) * 0x1f + (uint)*pbVar17) * 0x1f +
                 (uint)*pbVar18;
        FUN_00563c0c((uVar25 - (uVar25 / *(uint *)(param_1 + 0x74)) * *(uint *)(param_1 + 0x74)) * 4
                     + iVar20,puVar21);
        uVar22 = FUN_005628e4(0xffff,0);
        *(undefined2 *)((int)puVar21 + 0x76) = uVar22;
        uVar22 = FUN_005628e4(0xffff,0);
        *(undefined2 *)((int)puVar21 + 0x72) = uVar22;
        do {
          sVar23 = FUN_005628e4(0x3ff,1);
          *(short *)((int)puVar21 + 0x6e) = sVar23;
        } while (*(short *)(param_1 + 0x90) == sVar23);
        uVar22 = *(undefined2 *)(param_2 + 2);
        puVar21[0x11] = *(undefined4 *)(param_1 + 0x104);
        puVar21[0x12] = *(undefined4 *)(param_1 + 0x108);
        puVar21[0x13] = *(undefined4 *)(param_1 + 0x104);
        uVar5 = *(undefined4 *)(param_1 + 0x108);
        puVar21[0x42] = 500000;
        puVar21[0x14] = uVar5;
        puVar21[0x40] = 0;
        puVar21[0x41] = 0xfffe;
        puVar21[0x1a] = 500000;
        puVar21[0x17] = 0;
        puVar21[0x18] = 0;
        puVar21[0x19] = 0xfffe;
        puVar21[0x3f] = 0;
        uVar5 = *(undefined4 *)(param_2 + 8);
        uVar6 = *(undefined4 *)(param_2 + 9);
        uVar7 = *(undefined4 *)((int)param_2 + 0x4c);
        uVar8 = *(undefined4 *)((int)param_2 + 0xc);
        puVar21[0x43] = *(undefined4 *)((int)param_2 + 0x44);
        puVar21[0x44] = uVar5;
        puVar21[0x45] = uVar6;
        puVar21[0x47] = uVar7;
        *(undefined2 *)(puVar21 + 0x1b) = uVar22;
        puVar21[0x22] = uVar8;
        FUN_0055d0ac(param_1,puVar21);
        iVar20 = *(int *)(param_2 + 7);
        puVar21[5] = iVar20;
        puVar21[6] = *(undefined4 *)((int)param_2 + 0x3c);
        if (iVar20 != 0) {
          FUN_0055ce90(iVar20);
        }
        if (puVar21[6] != 0) {
          FUN_0055ce90(puVar21[6]);
        }
        uVar24 = 0;
        uVar1 = *(undefined1 *)((int)param_2 + 0x25);
        uVar2 = *(undefined1 *)((int)param_2 + 0x26);
        uVar3 = *(undefined1 *)((int)param_2 + 0x27);
        *(undefined1 *)(puVar21 + 0x26) = *(undefined1 *)((int)param_2 + 0x24);
        *(undefined1 *)((int)puVar21 + 0x99) = uVar1;
        *(undefined1 *)((int)puVar21 + 0x9a) = uVar2;
        *(undefined1 *)((int)puVar21 + 0x9b) = uVar3;
        uVar1 = *(undefined1 *)((int)param_2 + 0x29);
        uVar2 = *(undefined1 *)((int)param_2 + 0x2a);
        uVar3 = *(undefined1 *)((int)param_2 + 0x2b);
        *(undefined1 *)(puVar21 + 0x27) = *(undefined1 *)(param_2 + 5);
        *(undefined1 *)((int)puVar21 + 0x9d) = uVar1;
        *(undefined1 *)((int)puVar21 + 0x9e) = uVar2;
        *(undefined1 *)((int)puVar21 + 0x9f) = uVar3;
        uVar1 = *(undefined1 *)((int)param_2 + 0x2d);
        uVar2 = *(undefined1 *)((int)param_2 + 0x2e);
        uVar3 = *(undefined1 *)((int)param_2 + 0x2f);
        *(undefined1 *)(puVar21 + 0x28) = *(undefined1 *)((int)param_2 + 0x2c);
        *(undefined1 *)((int)puVar21 + 0xa1) = uVar1;
        *(undefined1 *)((int)puVar21 + 0xa2) = uVar2;
        *(undefined1 *)((int)puVar21 + 0xa3) = uVar3;
        uVar1 = *(undefined1 *)((int)param_2 + 0x31);
        uVar2 = *(undefined1 *)((int)param_2 + 0x32);
        uVar3 = *(undefined1 *)((int)param_2 + 0x33);
        *(undefined1 *)(puVar21 + 0x29) = *(undefined1 *)(param_2 + 6);
        *(undefined1 *)((int)puVar21 + 0xa5) = uVar1;
        *(undefined1 *)((int)puVar21 + 0xa6) = uVar2;
        *(undefined1 *)((int)puVar21 + 0xa7) = uVar3;
        *(undefined1 *)(puVar21 + 0x2a) = *(undefined1 *)((int)param_2 + 0x34);
        if (*(int *)(param_2 + 4) != 0) {
          uVar24 = (ulonglong)((int)*(uint *)((int)param_2 + 0x1c) >> 0x1f);
          uVar24 = (((uVar24 ^ *(uint *)((int)param_2 + 0x1c)) - uVar24) + -1 << 0x20) >> 0x3f ^ 1;
        }
        FUN_00566594(param_1,puVar21,uVar24);
        iVar20 = FUN_00569498(param_1,puVar21);
        if (iVar20 == 0) {
          return 0;
        }
      }
      *puVar21 = 9;
      return 0xd2f7;
    }
  }
  return 2;
}


// 0x05631a8 (0x208 bytes)
ulonglong FUN_005631a8(int param_1,undefined8 *param_2,int *param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar5;
  uint uVar6;
  ulonglong uVar4;
  uint uVar7;
  int *piVar8;
  
  *param_3 = 0;
  uVar6 = 0xd2f2;
  if (param_1 != 0) {
    uVar6 = *(uint *)(param_1 + 0x38);
    piVar8 = *(int **)(param_1 + 0x1c);
    if (uVar6 != 0) {
      uVar7 = 0;
      do {
        while( true ) {
          if (*piVar8 != 10) break;
          iVar5 = FUN_0054ee38(*(undefined8 *)(piVar8 + 2),*param_2);
          if (((iVar5 != 0) && (piVar8[4] == *(int *)(param_2 + 1))) &&
             (*(short *)(piVar8 + 0x1b) == *(short *)(param_2 + 2))) {
            iVar5 = *(int *)((int)param_2 + 0x4c);
            iVar1 = *(int *)(param_2 + 8);
            iVar2 = *(int *)((int)param_2 + 0x44);
            iVar3 = *(int *)(param_2 + 9);
            piVar8[0x22] = *(int *)((int)param_2 + 0xc);
            *param_3 = (int)piVar8;
            piVar8[0x44] = iVar1;
            piVar8[0x43] = iVar2;
            piVar8[0x45] = iVar3;
            piVar8[0x47] = iVar5;
            uVar4 = FUN_0055efec(param_1,piVar8);
            return uVar4;
          }
          uVar6 = *(uint *)(param_1 + 0x38);
          uVar7 = uVar7 + 1;
          piVar8 = piVar8 + 0x4c;
          if (uVar6 <= uVar7) goto LAB_00563294;
        }
        uVar7 = uVar7 + 1;
        piVar8 = piVar8 + 0x4c;
      } while (uVar7 < uVar6);
    }
LAB_00563294:
    *(undefined4 *)((int)param_2 + 0x1c) = 0;
    uVar6 = FUN_00562954(param_1,param_2,param_3);
    if (uVar6 == 0) {
      iVar5 = *param_3;
      iVar1 = *(int *)(param_1 + 0x9c);
      *(undefined2 *)(iVar5 + 0x6e) = 0;
      if (iVar1 == 0) {
        *(uint *)(iVar5 + 0x8c) = *(uint *)(param_1 + 0x8c) & 0x3fffffff | 0x40000000;
      }
      else {
        *(uint *)(iVar5 + 0x8c) = *(uint *)(param_1 + 0x8c) & 0x3fffffff | 0xc0000000;
      }
      *(undefined4 *)(iVar5 + 0xd0) = 0;
      *(undefined4 *)(iVar5 + 0xcc) = 0;
    }
  }
  return (ulonglong)uVar6;
}


// 0x05633b0 (0x7c0 bytes)
/* WARNING: Removing unreachable block (ram,0x00563440) */
/* WARNING: Removing unreachable block (ram,0x005634c8) */
/* WARNING: Removing unreachable block (ram,0x005634cc) */
/* WARNING: Removing unreachable block (ram,0x00563720) */
/* WARNING: Removing unreachable block (ram,0x00563734) */
/* WARNING: Removing unreachable block (ram,0x005634e4) */
/* WARNING: Removing unreachable block (ram,0x005634f0) */
/* WARNING: Removing unreachable block (ram,0x00563750) */
/* WARNING: Removing unreachable block (ram,0x00563764) */
/* WARNING: Removing unreachable block (ram,0x00563738) */
/* WARNING: Removing unreachable block (ram,0x0056374c) */
/* WARNING: Removing unreachable block (ram,0x005634fc) */
/* WARNING: Removing unreachable block (ram,0x00563508) */
/* WARNING: Removing unreachable block (ram,0x00563768) */
/* WARNING: Removing unreachable block (ram,0x0056377c) */
/* WARNING: Removing unreachable block (ram,0x00563700) */
/* WARNING: Removing unreachable block (ram,0x0056371c) */
/* WARNING: Removing unreachable block (ram,0x00563514) */
/* WARNING: Removing unreachable block (ram,0x00563528) */
/* WARNING: Removing unreachable block (ram,0x00563780) */
/* WARNING: Removing unreachable block (ram,0x005637d8) */
/* WARNING: Removing unreachable block (ram,0x00563560) */
/* WARNING: Removing unreachable block (ram,0x005635a4) */
/* WARNING: Removing unreachable block (ram,0x005635b0) */
/* WARNING: Removing unreachable block (ram,0x005635bc) */
/* WARNING: Removing unreachable block (ram,0x005635e8) */
/* WARNING: Removing unreachable block (ram,0x00563610) */
/* WARNING: Removing unreachable block (ram,0x0056361c) */
/* WARNING: Removing unreachable block (ram,0x00563628) */
/* WARNING: Removing unreachable block (ram,0x00563654) */
/* WARNING: Removing unreachable block (ram,0x00563818) */
/* WARNING: Removing unreachable block (ram,0x00563678) */
/* WARNING: Removing unreachable block (ram,0x00563a58) */
/* WARNING: Removing unreachable block (ram,0x00563a80) */
/* WARNING: Removing unreachable block (ram,0x005636a4) */
/* WARNING: Removing unreachable block (ram,0x00563858) */
/* WARNING: Removing unreachable block (ram,0x00563864) */
/* WARNING: Removing unreachable block (ram,0x00563888) */
/* WARNING: Removing unreachable block (ram,0x005638a0) */
/* WARNING: Removing unreachable block (ram,0x005638c0) */
/* WARNING: Removing unreachable block (ram,0x00563a84) */
/* WARNING: Removing unreachable block (ram,0x005638e0) */
/* WARNING: Removing unreachable block (ram,0x00563900) */
/* WARNING: Removing unreachable block (ram,0x0056391c) */
/* WARNING: Removing unreachable block (ram,0x005636c4) */
/* WARNING: Removing unreachable block (ram,0x00563938) */
/* WARNING: Removing unreachable block (ram,0x00563b20) */
/* WARNING: Removing unreachable block (ram,0x00563b54) */
/* WARNING: Removing unreachable block (ram,0x00563948) */
/* WARNING: Removing unreachable block (ram,0x00563b14) */
/* WARNING: Removing unreachable block (ram,0x00563958) */
/* WARNING: Removing unreachable block (ram,0x00563a90) */
/* WARNING: Removing unreachable block (ram,0x00563964) */
/* WARNING: Removing unreachable block (ram,0x00563a28) */
/* WARNING: Removing unreachable block (ram,0x00563b6c) */
/* WARNING: Removing unreachable block (ram,0x00563b48) */

undefined8 FUN_005633b0(undefined4 *param_1,int param_2)

{
  int iVar1;
  GPiece<104> local_a0;
  
  if ((((param_1 != (undefined4 *)0x0) && (param_2 != 0)) &&
      (iVar1 = *(int *)(param_2 + 0x40), *param_1 = 0, iVar1 != 0)) &&
     ((*(int *)(param_2 + 0x44) != 0 && (*(int *)(param_2 + 0x48) != 0)))) {
    FUN_00551de8(local_a0,0x10c);
    FUN_00561584(0);
    return 100;
  }
  return 2;
}


// 0x0563b70 (0x2c bytes)
void FUN_00563b70(int *param_1,int param_2)

{
  *(int *)(param_2 + 0x120) = *param_1;
  *(undefined4 *)(param_2 + 0x124) = 0;
  if (*param_1 != 0) {
    *(int *)(*param_1 + 0x124) = param_2;
  }
  *param_1 = param_2;
  return;
}


// 0x0563b9c (0x70 bytes)
void FUN_00563b9c(int *param_1,int param_2)

{
  int iVar1;
  int iVar2;
  
  if (*param_1 == param_2) {
    iVar1 = *(int *)(param_2 + 0x120);
    *param_1 = iVar1;
    if (iVar1 == 0) {
      return;
    }
    *(undefined4 *)(iVar1 + 0x124) = 0;
    return;
  }
  iVar1 = *(int *)(param_2 + 0x124);
  if (iVar1 != 0) {
    iVar2 = *(int *)(param_2 + 0x120);
    *(int *)(iVar1 + 0x120) = iVar2;
    if (iVar2 == 0) {
      return;
    }
    *(int *)(iVar2 + 0x124) = iVar1;
    return;
  }
  if (*(int *)(param_2 + 0x120) == 0) {
    return;
  }
  *(undefined4 *)(*(int *)(param_2 + 0x120) + 0x124) = 0;
  return;
}


// 0x0563c0c (0x2c bytes)
void FUN_00563c0c(int *param_1,int param_2)

{
  *(int *)(param_2 + 0x128) = *param_1;
  *(undefined4 *)(param_2 + 300) = 0;
  if (*param_1 != 0) {
    *(int *)(*param_1 + 300) = param_2;
  }
  *param_1 = param_2;
  return;
}


// 0x0563c38 (0x70 bytes)
void FUN_00563c38(int *param_1,int param_2)

{
  int iVar1;
  int iVar2;
  
  if (*param_1 == param_2) {
    iVar1 = *(int *)(param_2 + 0x128);
    *param_1 = iVar1;
    if (iVar1 == 0) {
      return;
    }
    *(undefined4 *)(iVar1 + 300) = 0;
    return;
  }
  iVar1 = *(int *)(param_2 + 300);
  if (iVar1 != 0) {
    iVar2 = *(int *)(param_2 + 0x128);
    *(int *)(iVar1 + 0x128) = iVar2;
    if (iVar2 == 0) {
      return;
    }
    *(int *)(iVar2 + 300) = iVar1;
    return;
  }
  if (*(int *)(param_2 + 0x128) == 0) {
    return;
  }
  *(undefined4 *)(*(int *)(param_2 + 0x128) + 300) = 0;
  return;
}


// 0x0563ca8 (0xb8 bytes)
void FUN_00563ca8(int *param_1,int *param_2,int param_3)

{
  int iVar1;
  int iVar2;
  
  if (*param_1 == param_3) {
    if (*param_2 == param_3) {
      *param_1 = 0;
      *param_2 = 0;
      return;
    }
    iVar1 = *(int *)(param_3 + 0x120);
    *param_1 = iVar1;
    if (iVar1 == 0) {
      return;
    }
    *(undefined4 *)(iVar1 + 0x124) = 0;
    return;
  }
  if (*param_2 == param_3) {
    iVar1 = *(int *)(param_3 + 0x124);
    *param_2 = iVar1;
    if (iVar1 == 0) {
      return;
    }
    *(undefined4 *)(iVar1 + 0x120) = 0;
    return;
  }
  iVar1 = *(int *)(param_3 + 0x124);
  if (iVar1 != 0) {
    iVar2 = *(int *)(param_3 + 0x120);
    *(int *)(iVar1 + 0x120) = iVar2;
    if (iVar2 == 0) {
      return;
    }
    *(int *)(iVar2 + 0x124) = iVar1;
    return;
  }
  if (*(int *)(param_3 + 0x120) == 0) {
    return;
  }
  *(undefined4 *)(*(int *)(param_3 + 0x120) + 0x124) = 0;
  return;
}


// 0x0563d60 (0x2c bytes)
void FUN_00563d60(int *param_1,int param_2)

{
  *(int *)(param_2 + 0x24) = *param_1;
  *(undefined4 *)(param_2 + 0x28) = 0;
  if (*param_1 != 0) {
    *(int *)(*param_1 + 0x28) = param_2;
  }
  *param_1 = param_2;
  return;
}


// 0x0563d8c (0x70 bytes)
void FUN_00563d8c(int *param_1,int param_2)

{
  int iVar1;
  int iVar2;
  
  if (*param_1 == param_2) {
    iVar1 = *(int *)(param_2 + 0x24);
    *param_1 = iVar1;
    if (iVar1 == 0) {
      return;
    }
    *(undefined4 *)(iVar1 + 0x28) = 0;
    return;
  }
  iVar1 = *(int *)(param_2 + 0x28);
  if (iVar1 != 0) {
    iVar2 = *(int *)(param_2 + 0x24);
    *(int *)(iVar1 + 0x24) = iVar2;
    if (iVar2 == 0) {
      return;
    }
    *(int *)(iVar2 + 0x28) = iVar1;
    return;
  }
  if (*(int *)(param_2 + 0x24) == 0) {
    return;
  }
  *(undefined4 *)(*(int *)(param_2 + 0x24) + 0x28) = 0;
  return;
}


// 0x0563dfc (0xd0 bytes)
undefined8 FUN_00563dfc(int param_1)

{
  int iVar1;
  
  if (*(int *)(param_1 + 0xcc) == 0) {
    iVar1 = (**(code **)**(undefined4 **)PTR_DAT_0071b3dc)(*(undefined4 *)(param_1 + 0x8c));
    *(int *)(param_1 + 0xcc) = iVar1;
    if (iVar1 == 0) {
      return 3;
    }
  }
  if (*(int *)(param_1 + 0xd0) == 0) {
    iVar1 = (*(code *)**(undefined4 **)(*(int *)PTR_DAT_0071b3dc + 4))
                      (*(undefined4 *)(param_1 + 0xcc),*(undefined4 *)(param_1 + 0x90));
    *(int *)(param_1 + 0xd0) = iVar1;
    if (iVar1 == 0) {
      return 3;
    }
  }
  return 0;
}


// 0x0563ecc (0x38 bytes)
undefined8 FUN_00563ecc(int param_1,int param_2,int *param_3)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0x14);
  *param_3 = param_1 + param_2;
  iVar1 = iVar1 + 1;
  *(int *)(param_1 + 0x14) = iVar1;
  *(int *)(param_1 + iVar1 * 4 + 0x18) = param_1 + param_2;
  return 0;
}


// 0x0563f04 (0x3c bytes)
short FUN_00563f04(int param_1)

{
  short local_10 [8];
  
  FUN_00551f9c(*(undefined4 *)(param_1 + 0x118),local_10);
  return local_10[0] * 2 + 2;
}


// 0x0563f40 (0x3c bytes)
void FUN_00563f40(undefined8 param_1,ushort *param_2)

{
  FUN_00551f9c();
  *param_2 = *param_2 & 0xfc00;
  return;
}


// 0x0563f7c (0x88 bytes)
int FUN_00563f7c(int param_1)

{
  ushort local_20;
  ushort local_1e [11];
  
  FUN_00563f40(param_1,local_1e);
  if ((local_1e[0] & 0x4000) == 0) {
    return param_1 + 2;
  }
  FUN_00551f9c(param_1 + 2,&local_20);
  return param_1 + (uint)local_20 * 2 + 4;
}


// 0x0564004 (0x30 bytes)
ushort FUN_00564004(undefined8 param_1)

{
  ushort local_10 [8];
  
  FUN_00551f9c(param_1,local_10);
  return local_10[0] & 0x3ff;
}


// 0x0564034 (0xa0 bytes)
void FUN_00564034(int param_1,int *param_2,ushort *param_3)

{
  ushort local_40 [8];
  
  FUN_00551f9c(param_1,local_40);
  *param_2 = ((int)((local_40[0] & 0x6000) - 1) >> 0x1f & 0xfffffffeU) + 4 + param_1;
  FUN_00551f9c(param_1,param_3);
  *param_3 = *param_3 & 0x7ff;
  return;
}


// 0x05640d4 (0x70 bytes)
undefined2 FUN_005640d4(int param_1)

{
  GPiece<2> local_30;
  ushort local_2e [11];
  
  FUN_00551f9c(param_1,local_2e);
  if ((local_2e[0] & 0x6000) != 0) {
    FUN_00551f9c(param_1 + 2,local_30);
  }
  return 0;
}


// 0x0564144 (0x3c bytes)
void FUN_00564144(undefined8 param_1,ushort *param_2)

{
  FUN_00551f9c();
  *param_2 = *param_2 & 0x7ff;
  return;
}


// 0x0564180 (0x50 bytes)
void FUN_00564180(undefined8 param_1,short *param_2)

{
  ushort local_30 [12];
  
  FUN_00551f9c(param_1,local_30);
  *param_2 = ((ushort)((int)((local_30[0] & 0x6000) - 1) >> 0x1f) & 0xfffe) + 4;
  return;
}


// 0x05641d0 (0x2c bytes)
void FUN_005641d0(int param_1)

{
  FUN_00551f78(*(undefined4 *)(param_1 + 0x118),0);
  return;
}


// 0x05641fc (0x2c bytes)
void FUN_005641fc(int param_1)

{
  FUN_00551f78(param_1 + 2);
  return;
}


// 0x0564228 (0x64 bytes)
void FUN_00564228(undefined8 param_1,ushort param_2)

{
  ushort local_30 [8];
  
  FUN_00551f9c(param_1,local_30);
  FUN_00551f78(param_1,param_2 & 0x7ff | local_30[0] & 0xf800);
  return;
}


// 0x056428c (0x64 bytes)
void FUN_0056428c(undefined8 param_1,ushort param_2)

{
  ushort local_30 [8];
  
  FUN_00551f9c(param_1,local_30);
  FUN_00551f78(param_1,param_2 & 0xf800 | local_30[0] & 0x7ff);
  return;
}


// 0x05642f0 (0x158 bytes)
void FUN_005642f0(int param_1,int param_2,ushort param_3,undefined2 param_4,undefined2 *param_5)

{
  short sVar1;
  
  *param_5 = 0;
  param_5[1] = 0;
  FUN_0056428c(param_5,param_3);
  FUN_00564228(param_5,param_4);
  if ((param_3 & 0x4000) == 0) {
    if ((param_3 & 0x2000) == 0) {
      FUN_005641fc(param_5,0);
      return;
    }
    FUN_005641fc(param_5,*(undefined2 *)(param_1 + 0x92));
    sVar1 = *(short *)(param_1 + 0x92) + 1;
    *(short *)(param_1 + 0x92) = sVar1;
    if (sVar1 == 0) {
      *(undefined2 *)(param_1 + 0x92) = 1;
      return;
    }
  }
  else if (param_2 != 0) {
    FUN_005641fc(param_5,*(undefined2 *)(param_2 + 0x76));
    sVar1 = *(short *)(param_2 + 0x76) + 1;
    *(short *)(param_2 + 0x76) = sVar1;
    if (sVar1 == 0) {
      *(undefined2 *)(param_2 + 0x76) = 1;
    }
  }
  return;
}


// 0x0564448 (0x60 bytes)
void FUN_00564448(undefined8 param_1,ushort param_2)

{
  ushort local_30 [8];
  
  FUN_00551f9c(param_1,local_30);
  FUN_00551f78(param_1,param_2 & 0xfc00 | local_30[0]);
  return;
}


// 0x05644a8 (0x5c bytes)
void FUN_005644a8(undefined8 param_1,ushort param_2)

{
  ushort local_30 [8];
  
  FUN_00563f40(param_1,local_30);
  FUN_00551f78(param_1,param_2 & 0x3ff | local_30[0]);
  return;
}


// 0x0564504 (0x20 bytes)
void FUN_00564504(int param_1,undefined2 *param_2)

{
  param_2[2] = 0;
  *param_2 = 0;
  param_2[1] = 0;
  FUN_005644a8(param_2,*(undefined2 *)(param_1 + 0x6e));
  return;
}


// 0x0564524 (0xa0 bytes)
undefined8 FUN_00564524(uint *param_1,undefined4 param_2)

{
  ushort local_30;
  ushort local_2e [7];
  
  FUN_00564144(param_1 + 0x19,&local_30);
  FUN_00564180(param_1 + 0x19,local_2e);
  if (param_1 != (uint *)0x0) {
    if ((uint)local_2e[0] + (uint)local_30 < *param_1) {
      FUN_00552570((int)param_1 + *param_1 + 8,param_2);
    }
  }
  return 0;
}


// 0x05645c4 (0xd8 bytes)
undefined8 FUN_005645c4(uint *param_1,undefined4 *param_2)

{
  ushort local_40;
  ushort local_3e [11];
  
  FUN_00564144(param_1 + 0x19,&local_40);
  FUN_00564180(param_1 + 0x19,local_3e);
  if (param_1 != (uint *)0x0) {
    if ((uint)local_3e[0] + (uint)local_40 < *param_1) {
      FUN_005525a8((int)param_1 + *param_1 + 8,param_2);
      return 0;
    }
  }
  *param_2 = 0;
  return 0;
}


// 0x056469c (0x16c bytes)
/* WARNING: Removing unreachable block (ram,0x005646f8) */

void FUN_0056469c(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  GPiece<24> local_50;
  
  if (*(int *)(param_1 + 0x28) == 0) {
    *(int *)(param_1 + 0x28) = param_2;
    *(int *)(param_1 + 0x2c) = param_2;
    *(undefined4 *)(param_2 + 0x120) = 0;
    *(undefined4 *)(param_2 + 0x124) = 0;
    return;
  }
  iVar1 = *(int *)(param_1 + 0x2c);
  if (iVar1 == 0) {
    *(undefined4 *)(param_2 + 0x124) = 0;
    iVar1 = *(int *)(param_1 + 0x28);
    *(int *)(param_2 + 0x120) = iVar1;
    *(int *)(iVar1 + 0x124) = param_2;
    *(int *)(param_1 + 0x28) = param_2;
    return;
  }
  FUN_005567a4(iVar1 + 0x44,param_2 + 0x44,local_50);
  *(int *)(param_2 + 0x124) = iVar1;
  iVar2 = *(int *)(iVar1 + 0x120);
  *(int *)(param_2 + 0x120) = iVar2;
  if (iVar2 == 0) {
    *(int *)(param_1 + 0x2c) = param_2;
  }
  else {
    *(int *)(iVar2 + 0x124) = param_2;
  }
  *(int *)(iVar1 + 0x120) = param_2;
  return;
}


// 0x0564808 (0x8 bytes)
undefined8 FUN_00564808(void)

{
  return 4;
}


// 0x0564810 (0x8 bytes)
undefined8 FUN_00564810(void)

{
  return 4;
}


// 0x0564818 (0x1f0 bytes)
undefined8 FUN_00564818(int param_1)

{
  ushort uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  
  if (*(int *)(param_1 + 4) != 0) {
    uVar5 = 1;
    uVar1 = *(ushort *)(*(int *)(param_1 + 4) + 0x78);
    if (uVar1 != 0xffff) {
      uVar5 = uVar1 + 1;
    }
    if (*(ushort *)(param_1 + 100) == uVar5) {
      iVar2 = *(int *)PTR_DAT_0071b3e0;
      iVar3 = (*(code *)**(undefined4 **)(iVar2 + 4))(0,PTR_PTR_0071b3e4,PTR_PTR_0071b3e8,0);
      if (iVar3 == 0) goto LAB_005648e8;
      (*(code *)**(undefined4 **)(iVar2 + 0xc))
                (iVar3,*(undefined4 *)(param_1 + 0x14),*(undefined4 *)(param_1 + 0x18));
      iVar4 = (*(code *)**(undefined4 **)(iVar2 + 0x1c))(iVar3);
      if (iVar4 == 0x14) {
        iVar4 = (*(code *)**(undefined4 **)(iVar2 + 0x28))(iVar3,param_1 + 0x24);
        if (iVar4 != 0x40) {
          (*(code *)**(undefined4 **)(iVar2 + 0x10))(iVar3);
          goto LAB_005648e8;
        }
        (*(code *)**(undefined4 **)(iVar2 + 0x10))(iVar3);
        *(undefined4 *)(param_1 + 8) = 3;
        *(undefined4 *)(*(int *)(param_1 + 4) + 0xd4) = *(undefined4 *)(param_1 + 0x1c);
      }
      else {
        (*(code *)**(undefined4 **)(iVar2 + 0x10))(iVar3);
        *(undefined4 *)(param_1 + 8) = 4;
      }
    }
    return 0;
  }
LAB_005648e8:
  *(undefined4 *)(param_1 + 8) = 4;
  return 0;
}


// 0x0564a08 (0xcc bytes)
undefined8 FUN_00564a08(int param_1,int param_2,int param_3,undefined4 param_4)

{
  undefined4 *puVar1;
  int iVar2;
  undefined8 uVar3;
  
  uVar3 = 2;
  if (param_2 != 0) {
    if ((param_3 == 0) || (uVar3 = 3, *(int *)(param_1 + 4) != 1)) {
      return 0;
    }
    if (*(int *)PTR_DAT_0071b3ec != 0) {
      puVar1 = *(undefined4 **)(*(int *)PTR_DAT_0071b3ec + 0x18);
      *(undefined4 *)(param_2 + 0xd4) = param_4;
      iVar2 = (*(code *)*puVar1)(*(undefined4 *)(param_2 + 0x8c),*(undefined4 *)(param_2 + 0x90),
                                 param_4,param_3);
      uVar3 = 0xc544;
      if (iVar2 == 0) {
        return 0;
      }
    }
  }
  return uVar3;
}


// 0x0564ad4 (0xa0 bytes)
undefined8 FUN_00564ad4(int param_1,int param_2)

{
  int iVar1;
  
  if ((*(int *)PTR_DAT_0071b3e0 != 0) && (param_2 != 0)) {
    iVar1 = (*(code *)**(undefined4 **)(*(int *)PTR_DAT_0071b3ec + 0x28))
                      (*(uint *)(param_1 + 0x8c) & 0x3fffffff | 0x40000000,0,param_2);
    if (iVar1 == 0) {
      return 0;
    }
  }
  return 5;
}


// 0x0564b74 (0x34c bytes)
undefined8 FUN_00564b74(int param_1,int param_2)

{
  undefined *puVar1;
  int iVar2;
  GPiece<64> local_90;
  
  puVar1 = PTR_DAT_0071b3ec;
  if (*(int *)PTR_DAT_0071b3e0 != 0) {
    if (param_2 == 0) {
      (*(code *)**(undefined4 **)(*(int *)PTR_DAT_0071b3ec + 0x5c))(local_90);
    }
    iVar2 = (*(code *)**(undefined4 **)(*(int *)puVar1 + 0x24))
                      (*(uint *)(param_1 + 0x8c) & 0x3fffffff | 0x40000000,0,0x400,local_90);
    if (iVar2 == 0) {
      return 0;
    }
  }
  return 5;
}


// 0x0564ec0 (0x34c bytes)
undefined8 FUN_00564ec0(int *param_1)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  
  if (param_1[1] != 0) {
    iVar4 = *param_1;
    if (*(int *)(iVar4 + 4) == 1) {
      iVar1 = *(int *)PTR_DAT_0071b3ec;
      if (iVar1 != 0) {
        if (*(int *)(iVar4 + 0x9c) != 0) {
          uVar2 = *(uint *)(param_1[1] + 0x8c);
          if ((uVar2 & 0xc0000000) == 0xc0000000) {
            (*(code *)**(undefined4 **)(iVar1 + 0x28))
                      (uVar2,*(undefined4 *)(iVar4 + 0x8c),param_1 + 0x15);
            *(undefined1 *)(param_1 + 0x35) = *(undefined1 *)(param_1 + 0x15);
            *(undefined1 *)((int)param_1 + 0xd5) = *(undefined1 *)((int)param_1 + 0x55);
            *(undefined1 *)((int)param_1 + 0xd6) = *(undefined1 *)((int)param_1 + 0x56);
            *(undefined1 *)((int)param_1 + 0xd7) = *(undefined1 *)((int)param_1 + 0x57);
            *(undefined1 *)(param_1 + 0x36) = *(undefined1 *)(param_1 + 0x16);
            *(undefined1 *)((int)param_1 + 0xd9) = *(undefined1 *)((int)param_1 + 0x59);
            *(undefined1 *)((int)param_1 + 0xda) = *(undefined1 *)((int)param_1 + 0x5a);
            *(undefined1 *)((int)param_1 + 0xdb) = *(undefined1 *)((int)param_1 + 0x5b);
            *(undefined1 *)(param_1 + 0x37) = *(undefined1 *)(param_1 + 0x17);
            *(undefined1 *)((int)param_1 + 0xdd) = *(undefined1 *)((int)param_1 + 0x5d);
            *(undefined1 *)((int)param_1 + 0xde) = *(undefined1 *)((int)param_1 + 0x5e);
            *(undefined1 *)((int)param_1 + 0xdf) = *(undefined1 *)((int)param_1 + 0x5f);
            *(undefined1 *)(param_1 + 0x38) = *(undefined1 *)(param_1 + 0x18);
            *(undefined1 *)((int)param_1 + 0xe1) = *(undefined1 *)((int)param_1 + 0x61);
            *(undefined1 *)((int)param_1 + 0xe2) = *(undefined1 *)((int)param_1 + 0x62);
            *(undefined1 *)((int)param_1 + 0xe3) = *(undefined1 *)((int)param_1 + 99);
            *(undefined1 *)(param_1 + 0x39) = *(undefined1 *)(param_1 + 0x19);
            *(undefined1 *)((int)param_1 + 0xe5) = *(undefined1 *)((int)param_1 + 0x65);
            *(undefined1 *)((int)param_1 + 0xe6) = *(undefined1 *)((int)param_1 + 0x66);
            *(undefined1 *)((int)param_1 + 0xe7) = *(undefined1 *)((int)param_1 + 0x67);
            *(undefined1 *)(param_1 + 0x3a) = *(undefined1 *)(param_1 + 0x1a);
            *(undefined1 *)((int)param_1 + 0xe9) = *(undefined1 *)((int)param_1 + 0x69);
            *(undefined1 *)((int)param_1 + 0xea) = *(undefined1 *)((int)param_1 + 0x6a);
            *(undefined1 *)((int)param_1 + 0xeb) = *(undefined1 *)((int)param_1 + 0x6b);
            *(undefined1 *)(param_1 + 0x3b) = *(undefined1 *)(param_1 + 0x1b);
            *(undefined1 *)((int)param_1 + 0xed) = *(undefined1 *)((int)param_1 + 0x6d);
            *(undefined1 *)((int)param_1 + 0xee) = *(undefined1 *)((int)param_1 + 0x6e);
            *(undefined1 *)((int)param_1 + 0xef) = *(undefined1 *)((int)param_1 + 0x6f);
            *(undefined1 *)(param_1 + 0x3c) = *(undefined1 *)(param_1 + 0x1c);
            *(undefined1 *)((int)param_1 + 0xf3) = *(undefined1 *)((int)param_1 + 0x73);
            *(undefined1 *)((int)param_1 + 0xf1) = *(undefined1 *)((int)param_1 + 0x71);
            *(undefined1 *)((int)param_1 + 0xf2) = *(undefined1 *)((int)param_1 + 0x72);
            *(undefined1 *)(param_1 + 0x3d) = *(undefined1 *)(param_1 + 0x1d);
            *(undefined1 *)((int)param_1 + 0xf5) = *(undefined1 *)((int)param_1 + 0x75);
            *(undefined1 *)((int)param_1 + 0xf6) = *(undefined1 *)((int)param_1 + 0x76);
            *(undefined1 *)((int)param_1 + 0xf7) = *(undefined1 *)((int)param_1 + 0x77);
            *(undefined1 *)(param_1 + 0x3e) = *(undefined1 *)(param_1 + 0x1e);
            *(undefined1 *)((int)param_1 + 0xf9) = *(undefined1 *)((int)param_1 + 0x79);
            *(undefined1 *)((int)param_1 + 0xfa) = *(undefined1 *)((int)param_1 + 0x7a);
            *(undefined1 *)((int)param_1 + 0xfb) = *(undefined1 *)((int)param_1 + 0x7b);
            *(undefined1 *)(param_1 + 0x3f) = *(undefined1 *)(param_1 + 0x1f);
            *(undefined1 *)((int)param_1 + 0xfd) = *(undefined1 *)((int)param_1 + 0x7d);
            *(undefined1 *)((int)param_1 + 0xfe) = *(undefined1 *)((int)param_1 + 0x7e);
            *(undefined1 *)((int)param_1 + 0xff) = *(undefined1 *)((int)param_1 + 0x7f);
            *(undefined1 *)(param_1 + 0x40) = *(undefined1 *)(param_1 + 0x20);
            *(undefined1 *)((int)param_1 + 0x101) = *(undefined1 *)((int)param_1 + 0x81);
            *(undefined1 *)((int)param_1 + 0x102) = *(undefined1 *)((int)param_1 + 0x82);
            *(undefined1 *)((int)param_1 + 0x103) = *(undefined1 *)((int)param_1 + 0x83);
            *(undefined1 *)(param_1 + 0x41) = *(undefined1 *)(param_1 + 0x21);
            *(undefined1 *)((int)param_1 + 0x105) = *(undefined1 *)((int)param_1 + 0x85);
            *(undefined1 *)((int)param_1 + 0x106) = *(undefined1 *)((int)param_1 + 0x86);
            *(undefined1 *)((int)param_1 + 0x107) = *(undefined1 *)((int)param_1 + 0x87);
            *(undefined1 *)(param_1 + 0x42) = *(undefined1 *)(param_1 + 0x22);
            *(undefined1 *)((int)param_1 + 0x109) = *(undefined1 *)((int)param_1 + 0x89);
            *(undefined1 *)((int)param_1 + 0x10a) = *(undefined1 *)((int)param_1 + 0x8a);
            *(undefined1 *)((int)param_1 + 0x10b) = *(undefined1 *)((int)param_1 + 0x8b);
            *(undefined1 *)(param_1 + 0x43) = *(undefined1 *)(param_1 + 0x23);
            *(undefined1 *)((int)param_1 + 0x10d) = *(undefined1 *)((int)param_1 + 0x8d);
            *(undefined1 *)((int)param_1 + 0x10e) = *(undefined1 *)((int)param_1 + 0x8e);
            *(undefined1 *)((int)param_1 + 0x10f) = *(undefined1 *)((int)param_1 + 0x8f);
            *(undefined1 *)((int)param_1 + 0x113) = *(undefined1 *)((int)param_1 + 0x93);
            *(undefined1 *)(param_1 + 0x44) = *(undefined1 *)(param_1 + 0x24);
            *(undefined1 *)((int)param_1 + 0x111) = *(undefined1 *)((int)param_1 + 0x91);
            *(undefined1 *)((int)param_1 + 0x112) = *(undefined1 *)((int)param_1 + 0x92);
            iVar4 = *(int *)(param_1[1] + 0xcc);
            if ((iVar4 == 0) || (iVar3 = *(int *)(param_1[1] + 0xd0), iVar3 == 0))
            goto LAB_00564efc;
            iVar4 = (*(code *)**(undefined4 **)(iVar1 + 8))(iVar4,iVar3,param_1 + 0x35,0x40);
            param_1[0x46] = iVar4;
          }
        }
        param_1[2] = 3;
        return 0;
      }
    }
  }
LAB_00564efc:
  param_1[2] = 4;
  return 0;
}


// 0x056520c (0x2fc bytes)
undefined8 FUN_0056520c(int *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  if (((param_1[1] != 0) && (*(int *)(*param_1 + 4) == 1)) &&
     (iVar3 = *(int *)PTR_DAT_0071b3ec, iVar3 != 0)) {
    (*(code *)**(undefined4 **)(iVar3 + 0x5c))(param_1 + 5);
    *(undefined1 *)(param_1 + 0x25) = *(undefined1 *)(param_1 + 5);
    *(undefined1 *)((int)param_1 + 0x95) = *(undefined1 *)((int)param_1 + 0x15);
    *(undefined1 *)((int)param_1 + 0x96) = *(undefined1 *)((int)param_1 + 0x16);
    *(undefined1 *)((int)param_1 + 0x97) = *(undefined1 *)((int)param_1 + 0x17);
    *(undefined1 *)(param_1 + 0x26) = *(undefined1 *)(param_1 + 6);
    *(undefined1 *)((int)param_1 + 0x99) = *(undefined1 *)((int)param_1 + 0x19);
    *(undefined1 *)((int)param_1 + 0x9a) = *(undefined1 *)((int)param_1 + 0x1a);
    *(undefined1 *)((int)param_1 + 0x9b) = *(undefined1 *)((int)param_1 + 0x1b);
    *(undefined1 *)(param_1 + 0x27) = *(undefined1 *)(param_1 + 7);
    *(undefined1 *)((int)param_1 + 0x9d) = *(undefined1 *)((int)param_1 + 0x1d);
    *(undefined1 *)((int)param_1 + 0x9e) = *(undefined1 *)((int)param_1 + 0x1e);
    *(undefined1 *)((int)param_1 + 0x9f) = *(undefined1 *)((int)param_1 + 0x1f);
    *(undefined1 *)(param_1 + 0x28) = *(undefined1 *)(param_1 + 8);
    *(undefined1 *)((int)param_1 + 0xa1) = *(undefined1 *)((int)param_1 + 0x21);
    *(undefined1 *)((int)param_1 + 0xa2) = *(undefined1 *)((int)param_1 + 0x22);
    *(undefined1 *)((int)param_1 + 0xa3) = *(undefined1 *)((int)param_1 + 0x23);
    *(undefined1 *)(param_1 + 0x29) = *(undefined1 *)(param_1 + 9);
    *(undefined1 *)((int)param_1 + 0xa5) = *(undefined1 *)((int)param_1 + 0x25);
    *(undefined1 *)((int)param_1 + 0xa6) = *(undefined1 *)((int)param_1 + 0x26);
    *(undefined1 *)((int)param_1 + 0xa7) = *(undefined1 *)((int)param_1 + 0x27);
    *(undefined1 *)(param_1 + 0x2a) = *(undefined1 *)(param_1 + 10);
    *(undefined1 *)((int)param_1 + 0xa9) = *(undefined1 *)((int)param_1 + 0x29);
    *(undefined1 *)((int)param_1 + 0xaa) = *(undefined1 *)((int)param_1 + 0x2a);
    *(undefined1 *)((int)param_1 + 0xab) = *(undefined1 *)((int)param_1 + 0x2b);
    *(undefined1 *)(param_1 + 0x2b) = *(undefined1 *)(param_1 + 0xb);
    *(undefined1 *)((int)param_1 + 0xad) = *(undefined1 *)((int)param_1 + 0x2d);
    *(undefined1 *)((int)param_1 + 0xae) = *(undefined1 *)((int)param_1 + 0x2e);
    *(undefined1 *)((int)param_1 + 0xaf) = *(undefined1 *)((int)param_1 + 0x2f);
    *(undefined1 *)(param_1 + 0x2c) = *(undefined1 *)(param_1 + 0xc);
    *(undefined1 *)((int)param_1 + 0xb3) = *(undefined1 *)((int)param_1 + 0x33);
    *(undefined1 *)((int)param_1 + 0xb1) = *(undefined1 *)((int)param_1 + 0x31);
    *(undefined1 *)((int)param_1 + 0xb2) = *(undefined1 *)((int)param_1 + 0x32);
    *(undefined1 *)(param_1 + 0x2d) = *(undefined1 *)(param_1 + 0xd);
    *(undefined1 *)((int)param_1 + 0xb5) = *(undefined1 *)((int)param_1 + 0x35);
    *(undefined1 *)((int)param_1 + 0xb6) = *(undefined1 *)((int)param_1 + 0x36);
    *(undefined1 *)((int)param_1 + 0xb7) = *(undefined1 *)((int)param_1 + 0x37);
    *(undefined1 *)(param_1 + 0x2e) = *(undefined1 *)(param_1 + 0xe);
    *(undefined1 *)((int)param_1 + 0xb9) = *(undefined1 *)((int)param_1 + 0x39);
    *(undefined1 *)((int)param_1 + 0xba) = *(undefined1 *)((int)param_1 + 0x3a);
    *(undefined1 *)((int)param_1 + 0xbb) = *(undefined1 *)((int)param_1 + 0x3b);
    *(undefined1 *)(param_1 + 0x2f) = *(undefined1 *)(param_1 + 0xf);
    *(undefined1 *)((int)param_1 + 0xbd) = *(undefined1 *)((int)param_1 + 0x3d);
    *(undefined1 *)((int)param_1 + 0xbe) = *(undefined1 *)((int)param_1 + 0x3e);
    *(undefined1 *)((int)param_1 + 0xbf) = *(undefined1 *)((int)param_1 + 0x3f);
    *(undefined1 *)(param_1 + 0x30) = *(undefined1 *)(param_1 + 0x10);
    *(undefined1 *)((int)param_1 + 0xc1) = *(undefined1 *)((int)param_1 + 0x41);
    *(undefined1 *)((int)param_1 + 0xc2) = *(undefined1 *)((int)param_1 + 0x42);
    *(undefined1 *)((int)param_1 + 0xc3) = *(undefined1 *)((int)param_1 + 0x43);
    *(undefined1 *)(param_1 + 0x31) = *(undefined1 *)(param_1 + 0x11);
    *(undefined1 *)((int)param_1 + 0xc5) = *(undefined1 *)((int)param_1 + 0x45);
    *(undefined1 *)((int)param_1 + 0xc6) = *(undefined1 *)((int)param_1 + 0x46);
    *(undefined1 *)((int)param_1 + 199) = *(undefined1 *)((int)param_1 + 0x47);
    *(undefined1 *)(param_1 + 0x32) = *(undefined1 *)(param_1 + 0x12);
    *(undefined1 *)((int)param_1 + 0xc9) = *(undefined1 *)((int)param_1 + 0x49);
    *(undefined1 *)((int)param_1 + 0xca) = *(undefined1 *)((int)param_1 + 0x4a);
    *(undefined1 *)((int)param_1 + 0xcb) = *(undefined1 *)((int)param_1 + 0x4b);
    *(undefined1 *)(param_1 + 0x33) = *(undefined1 *)(param_1 + 0x13);
    *(undefined1 *)((int)param_1 + 0xcd) = *(undefined1 *)((int)param_1 + 0x4d);
    *(undefined1 *)((int)param_1 + 0xce) = *(undefined1 *)((int)param_1 + 0x4e);
    *(undefined1 *)((int)param_1 + 0xcf) = *(undefined1 *)((int)param_1 + 0x4f);
    *(undefined1 *)((int)param_1 + 0xd3) = *(undefined1 *)((int)param_1 + 0x53);
    *(undefined1 *)(param_1 + 0x34) = *(undefined1 *)(param_1 + 0x14);
    *(undefined1 *)((int)param_1 + 0xd1) = *(undefined1 *)((int)param_1 + 0x51);
    *(undefined1 *)((int)param_1 + 0xd2) = *(undefined1 *)((int)param_1 + 0x52);
    iVar1 = *(int *)(param_1[1] + 0xcc);
    if ((iVar1 != 0) && (iVar2 = *(int *)(param_1[1] + 0xd0), iVar2 != 0)) {
      iVar3 = (*(code *)**(undefined4 **)(iVar3 + 8))(iVar1,iVar2,param_1 + 0x25,0x40);
      param_1[0x45] = iVar3;
      param_1[2] = 3;
      return 0;
    }
  }
  param_1[2] = 4;
  return 0;
}


// 0x0565508 (0x120 bytes)
int FUN_00565508(int param_1,int param_2,undefined4 *param_3,undefined4 *param_4)

{
  undefined *puVar1;
  uint uVar2;
  int iVar3;
  
  puVar1 = PTR_DAT_0071b3ec;
  if (((param_2 != 0) && (param_3 != (undefined4 *)0x0)) && (param_4 != (undefined4 *)0x0)) {
    iVar3 = 0;
    if (*(int *)(param_1 + 4) == 1) {
      iVar3 = 3;
      *param_4 = *(undefined4 *)(param_2 + 0xd4);
      if (*(int *)puVar1 != 0) {
        uVar2 = (*(code *)**(undefined4 **)(*(int *)puVar1 + 0x1c))
                          (*(undefined4 *)(param_2 + 0x8c),*(undefined4 *)(param_2 + 0x90),param_3);
        iVar3 = ((int)((((int)uVar2 >> 0x1f ^ uVar2) - ((int)uVar2 >> 0x1f)) + -1) >> 0x1f &
                0xffff3abcU) + 0xc544;
      }
    }
    else {
      *param_4 = 0;
      param_3[0xf] = 0;
      *param_3 = 0;
      param_3[1] = 0;
      param_3[2] = 0;
      param_3[3] = 0;
      param_3[4] = 0;
      param_3[5] = 0;
      param_3[6] = 0;
      param_3[7] = 0;
      param_3[8] = 0;
      param_3[9] = 0;
      param_3[10] = 0;
      param_3[0xb] = 0;
      param_3[0xc] = 0;
      param_3[0xd] = 0;
      param_3[0xe] = 0;
    }
    return iVar3;
  }
  return 2;
}


// 0x0565628 (0x194 bytes)
undefined8 FUN_00565628(int param_1,undefined4 *param_2,uint *param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  int iVar3;
  
  puVar1 = PTR_DAT_0071b3ec;
  if (((param_1 == 0) || (param_2 == (undefined4 *)0x0)) || (param_3 == (uint *)0x0)) {
    uVar2 = 2;
  }
  else {
    uVar2 = 3;
    param_2[0xf] = 0;
    *param_2 = 0;
    param_2[1] = 0;
    param_2[2] = 0;
    param_2[3] = 0;
    param_2[4] = 0;
    param_2[5] = 0;
    param_2[6] = 0;
    param_2[7] = 0;
    param_2[8] = 0;
    param_2[9] = 0;
    param_2[10] = 0;
    param_2[0xb] = 0;
    param_2[0xc] = 0;
    param_2[0xd] = 0;
    param_2[0xe] = 0;
    iVar3 = *(int *)puVar1;
    *param_3 = 0;
    puVar1 = PTR_DAT_0071b3e0;
    if (iVar3 != 0) {
      *param_3 = 0x400;
      if (*(int *)puVar1 != 0) {
        iVar3 = (*(code *)**(undefined4 **)(iVar3 + 0x98))();
        if (iVar3 != 0) {
          *param_3 = *param_3 | 0x200;
        }
      }
      uVar2 = 0;
      if (*(int *)(param_1 + 4) == 1) {
        if (*(int *)(param_1 + 0x9c) == 0) {
          FUN_00550edc(0x40000000,param_2);
          return 0;
        }
        FUN_00550edc(0xc0000000,param_2);
        return 0;
      }
    }
  }
  return uVar2;
}


// 0x05657bc (0x150 bytes)
int FUN_005657bc(undefined8 param_1,int param_2)

{
  undefined2 uVar2;
  int iVar1;
  short sVar3;
  ushort local_90 [2];
  undefined4 local_8c;
  GPiece<4> auStack_88;
  undefined4 *local_84;
  uint local_80 [15];
  int local_44;
  int local_40;
  
  local_84 = &local_8c;
  local_44 = 4;
  local_40 = 1;
  local_8c = 0;
  local_80[0] = 4;
  FUN_005642f0(param_1,param_2,0x5000,4,auStack_88);
  uVar2 = FUN_005640d4(auStack_88);
  *(undefined2 *)(param_2 + 0x7c) = uVar2;
  FUN_00564180(auStack_88,local_90);
  if (local_40 < 8) {
    local_80[local_40 * 2 + -1] = (uint)auStack_88;
    local_80[local_40 * 2] = (uint)local_90[0];
    local_44 = local_44 + (uint)local_90[0];
    local_40 = local_40 + 1;
  }
  iVar1 = FUN_00561b00(param_1,param_2 + 0x1c,&local_84,0x8800,0,0,0);
  if ((iVar1 != 0) &&
     (sVar3 = *(short *)(param_2 + 0x76) + -1, *(short *)(param_2 + 0x76) = sVar3, sVar3 == 0)) {
    *(undefined2 *)(param_2 + 0x76) = 0xffff;
  }
  return iVar1;
}


// 0x056590c (0x314 bytes)
int FUN_0056590c(int *param_1)

{
  undefined4 *puVar1;
  int iVar2;
  int iVar3;
  short sVar4;
  ushort local_a0;
  GPiece<6> auStack_9e;
  GPiece<8> local_98;
  undefined1 *puStack_90;
  uint uStack_8c;
  
  iVar3 = 0;
  if (*(int *)(*param_1 + 4) == 1) {
    if (param_1[0x45] == 0) {
      *(undefined4 *)param_1[1] = 1;
      return 0;
    }
    FUN_005642f0(*param_1,param_1[1],0xd000,0x40,auStack_9e);
    FUN_00564180(auStack_9e,&local_a0);
    uStack_8c = (uint)local_a0;
    puStack_90 = auStack_9e;
    iVar3 = FUN_00561b00(*param_1,param_1[1] + 0x1c,local_98,0x8800,param_1[0x45],0,0);
    if (iVar3 == 0) {
      if ((*(int *)(*param_1 + 0x9c) != 0) &&
         (puVar1 = (undefined4 *)param_1[1], (puVar1[0x23] & 0xc0000000) == 0xc0000000)) {
        if (param_1[0x46] == 0) {
          *puVar1 = 1;
        }
        else {
          FUN_005642f0(*param_1,puVar1,0xd000,0x40,auStack_9e);
          FUN_00564180(auStack_9e,&local_a0);
          uStack_8c = (uint)local_a0;
          puStack_90 = auStack_9e;
          iVar3 = FUN_00561b00(*param_1,param_1[1] + 0x1c,local_98,0x8800,param_1[0x46],0,0);
          if (iVar3 == 0) {
            iVar3 = param_1[1];
          }
          else {
            iVar3 = param_1[1];
            sVar4 = *(short *)(iVar3 + 0x76) + -1;
            *(short *)(iVar3 + 0x76) = sVar4;
            if (sVar4 == 0) {
              *(undefined2 *)(iVar3 + 0x76) = 0xffff;
            }
          }
          iVar3 = FUN_005657bc(*param_1,iVar3);
        }
      }
    }
    else {
      iVar2 = param_1[1];
      sVar4 = *(short *)(iVar2 + 0x76) + -1;
      *(short *)(iVar2 + 0x76) = sVar4;
      if (sVar4 == 0) {
        *(undefined2 *)(iVar2 + 0x76) = 0xffff;
      }
    }
  }
  return iVar3;
}


// 0x0565c20 (0x130 bytes)
ulonglong FUN_00565c20(int *param_1)

{
  int iVar1;
  undefined4 *puVar2;
  uint uVar4;
  ulonglong uVar3;
  
  uVar4 = 0;
  if ((*(int *)(*param_1 + 4) == 1) && (*(int *)PTR_DAT_0071b3ec != 0)) {
    if (param_1[0x45] == 0) {
      *(undefined4 *)param_1[1] = 1;
      return 0;
    }
    iVar1 = param_1[1];
    (*(code *)**(undefined4 **)(*(int *)PTR_DAT_0071b3ec + 0x2c))
              (*(undefined4 *)(iVar1 + 0x8c),*(undefined4 *)(iVar1 + 0x90),
               *(undefined4 *)(iVar1 + 0xd4),param_1 + 5);
    puVar2 = (undefined4 *)param_1[1];
    uVar4 = FUN_00564ec0(param_1);
    if (uVar4 == 0) {
      if (param_1[2] == 3) {
        uVar3 = FUN_0056590c(param_1);
        return uVar3;
      }
      *puVar2 = 1;
    }
  }
  return (ulonglong)uVar4;
}


// 0x0565d50 (0xe8 bytes)
/* WARNING: Removing unreachable block (ram,0x00565e0c) */

ulonglong FUN_00565d50(undefined8 param_1,undefined4 *param_2)

{
  ulonglong uVar1;
  ulonglong uVar2;
  GPiece<304> local_150;
  
  uVar1 = FUN_00563dfc(param_2);
  if ((int)uVar1 != 0) {
    return uVar1 & 0xffffffff;
  }
  uVar2 = FUN_0056520c(local_150);
  if (uVar2 != 0) {
    return uVar2 & 0xffffffff;
  }
  *param_2 = 1;
  return uVar1 & 0xffffffff;
}


// 0x0565e38 (0xf4 bytes)
ulonglong FUN_00565e38(undefined4 *param_1)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  uint uVar6;
  
  iVar1 = param_1[1];
  uVar6 = 1;
  if (*(ushort *)(iVar1 + 0x78) != 0xffff) {
    uVar6 = *(ushort *)(iVar1 + 0x78) + 1;
  }
  uVar5 = 0;
  if (*(ushort *)(param_1 + 0x16) == uVar6) {
    (*(code *)**(undefined4 **)(*(int *)PTR_DAT_0071b3ec + 0x18))
              (*(undefined4 *)(iVar1 + 0x8c),*(undefined4 *)(iVar1 + 0x90),
               *(undefined4 *)(iVar1 + 0xd4),param_1 + 5);
    uVar4 = FUN_0055f5d8(*param_1,param_1[1],*(undefined2 *)(param_1 + 0x16));
    uVar5 = uVar4;
    if ((int)uVar4 == 0) {
      puVar2 = (undefined4 *)param_1[1];
      uVar3 = *param_1;
      *puVar2 = 0x19;
      uVar5 = FUN_00565d50(uVar3,puVar2);
      if (uVar5 == 0) {
        *(undefined2 *)(param_1[1] + 0x78) = *(undefined2 *)(param_1 + 0x16);
        uVar5 = uVar4;
      }
    }
  }
  return uVar5 & 0xffffffff;
}


// 0x0565f2c (0x114 bytes)
undefined8 FUN_00565f2c(int param_1)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  
  iVar2 = *(int *)(param_1 + 4);
  if (iVar2 != 0) {
    uVar3 = 1;
    if (*(ushort *)(iVar2 + 0x78) != 0xffff) {
      uVar3 = *(ushort *)(iVar2 + 0x78) + 1;
    }
    if (*(ushort *)(param_1 + 0x58) != uVar3) {
      return 0;
    }
    if ((*(int *)(iVar2 + 0xcc) != 0) && (*(int *)(iVar2 + 0xd0) != 0)) {
      iVar1 = param_1 + 0x14;
      iVar2 = (*(code *)**(undefined4 **)(*(int *)PTR_DAT_0071b3ec + 0xc))
                        (*(int *)(iVar2 + 0xcc),*(int *)(iVar2 + 0xd0),
                         *(undefined4 *)(param_1 + 0x54),iVar1,0x40);
      if (iVar2 == 0) {
        FUN_00552650(iVar1,iVar1,0x40);
        *(undefined4 *)(param_1 + 8) = 3;
        return 0;
      }
    }
  }
  *(undefined4 *)(param_1 + 8) = 4;
  return 0;
}


// 0x0566040 (0x4f0 bytes)
ulonglong FUN_00566040(int *param_1)

{
  ushort uVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined *puVar4;
  ulonglong uVar5;
  int iVar7;
  ulonglong uVar6;
  int iVar8;
  short sVar9;
  uint uVar10;
  undefined4 *puVar11;
  ushort local_130;
  GPiece<6> auStack_12e;
  GPiece<64> auStack_128;
  GPiece<64> auStack_e8;
  GPiece<8> local_a8;
  undefined1 *puStack_a0;
  uint uStack_9c;
  
  uVar1 = *(ushort *)(param_1[1] + 0x78);
  uVar10 = 1;
  if (uVar1 != 0xffff) {
    uVar10 = uVar1 + 1;
  }
  uVar6 = 0;
  if ((*(ushort *)(param_1 + 0x19) != uVar10) ||
     (uVar5 = FUN_0055f5d8(*param_1,param_1[1],*(ushort *)(param_1 + 0x19)), uVar6 = uVar5,
     (int)uVar5 != 0)) goto LAB_005660b4;
  iVar2 = *param_1;
  if (*(int *)(iVar2 + 0x9c) != 0) {
    puVar11 = (undefined4 *)param_1[1];
    *puVar11 = 0x12;
    goto LAB_00566130;
  }
  if ((param_1[8] & 1U) == 0) {
    puVar11 = (undefined4 *)param_1[1];
    iVar7 = *(int *)(iVar2 + 4);
    *puVar11 = 0x10;
    if (iVar7 != 1) goto LAB_00566130;
    FUN_00550edc(puVar11[0x23],auStack_e8);
    FUN_00552604(auStack_e8,auStack_e8,0x40);
    puVar4 = PTR_DAT_0071b3ec;
    (*(code *)**(undefined4 **)(*(int *)PTR_DAT_0071b3ec + 0x18))
              (puVar11[0x23],puVar11[0x24],puVar11[0x35],0);
    iVar7 = (*(code *)**(undefined4 **)(*(int *)puVar4 + 0x50))
                      (puVar11[0x23],puVar11[0x24],param_1 + 9,auStack_e8);
    if ((iVar7 == 0) || (iVar7 == -1)) {
      puVar3 = (undefined4 *)param_1[1];
      *puVar11 = 1;
      puVar11 = puVar3;
      goto LAB_00566130;
    }
    FUN_005642f0(iVar2,puVar11,0xd000,0x40,auStack_12e);
    FUN_00564180(auStack_12e,&local_130);
    uStack_9c = (uint)local_130;
    puStack_a0 = auStack_12e;
    uVar6 = FUN_00561b00(iVar2,puVar11 + 7,local_a8,0x8800,iVar7,0,0);
    if (uVar6 != 0) {
      sVar9 = *(short *)((int)puVar11 + 0x76) + -1;
      *(short *)((int)puVar11 + 0x76) = sVar9;
      if (sVar9 == 0) {
        *(undefined2 *)((int)puVar11 + 0x76) = 0xffff;
      }
      goto LAB_005660b4;
    }
  }
  else {
    puVar3 = (undefined4 *)param_1[1];
    iVar7 = *(int *)(iVar2 + 4);
    *puVar3 = 0x17;
    puVar11 = puVar3;
    if ((iVar7 != 1) || (iVar7 = *(int *)PTR_DAT_0071b3ec, iVar7 == 0)) goto LAB_00566130;
    iVar8 = (*(code *)**(undefined4 **)(iVar7 + 0x18))
                      (puVar3[0x23],puVar3[0x24],puVar3[0x35],param_1 + 9);
    uVar6 = 0xc544;
    if (iVar8 != 0) {
LAB_005660b4:
      return uVar6 & 0xffffffff;
    }
    FUN_00550edc(puVar3[0x23],auStack_128);
    FUN_00552604(auStack_128,auStack_128,0x40);
    iVar8 = FUN_00563dfc(puVar3);
    if ((iVar8 != 0) ||
       (iVar7 = (*(code *)**(undefined4 **)(iVar7 + 8))(puVar3[0x33],puVar3[0x34],auStack_128,0x40),
       iVar7 == 0)) {
      puVar11 = (undefined4 *)param_1[1];
      *puVar3 = 1;
      goto LAB_00566130;
    }
    FUN_005642f0(iVar2,puVar3,0xd000,0x40,auStack_12e);
    FUN_00564180(auStack_12e,&local_130);
    uStack_9c = (uint)local_130;
    puStack_a0 = auStack_12e;
    uVar6 = FUN_00561b00(iVar2,puVar3 + 7,local_a8,0x8800,iVar7,0,0);
    if ((int)uVar6 != 0) {
      sVar9 = *(short *)((int)puVar3 + 0x76) + -1;
      *(short *)((int)puVar3 + 0x76) = sVar9;
      if (sVar9 == 0) {
        *(undefined2 *)((int)puVar3 + 0x76) = 0xffff;
      }
      goto LAB_005660b4;
    }
  }
  puVar11 = (undefined4 *)param_1[1];
LAB_00566130:
  *(undefined2 *)(puVar11 + 0x1e) = *(undefined2 *)(param_1 + 0x19);
  return uVar5 & 0xffffffff;
}


// 0x0566530 (0x2c bytes)
void FUN_00566530(undefined4 param_1)

{
  undefined4 uStack00000030;
  
  uStack00000030 = param_1;
  FUN_005519f0(&stack0x00000030);
  return;
}


// 0x056655c (0x38 bytes)
undefined4 FUN_0056655c(undefined8 param_1)

{
  GPiece<16> local_10;
  
  FUN_00551b80(local_10,param_1);
  return 0;
}


// 0x0566594 (0x1b8 bytes)
void FUN_00566594(int param_1,int param_2,int param_3)

{
  bool bVar1;
  undefined4 uVar2;
  undefined1 uVar3;
  int iVar4;
  int iVar5;
  
  if (((param_3 == 0) || (*(int *)(param_1 + 4) != 1)) || (*(int *)PTR_DAT_0071b3ec == 0)) {
    *(undefined4 *)(param_2 + 0x94) = 0;
    *(undefined1 *)(param_2 + 0x9b) = 0;
    *(undefined1 *)(param_2 + 0x98) = 0;
    *(undefined1 *)(param_2 + 0x99) = 0;
    *(undefined1 *)(param_2 + 0x9a) = 0;
    *(undefined1 *)(param_2 + 200) = 0;
    *(undefined1 *)(param_2 + 0xb9) = 0;
    *(undefined1 *)(param_2 + 0xba) = 0;
    *(undefined1 *)(param_2 + 0xbb) = 0;
    *(undefined1 *)(param_2 + 0xbc) = 0;
    *(undefined1 *)(param_2 + 0xbd) = 0;
    *(undefined1 *)(param_2 + 0xbe) = 0;
    *(undefined1 *)(param_2 + 0xbf) = 0;
    *(undefined1 *)(param_2 + 0xc0) = 0;
    *(undefined1 *)(param_2 + 0xc1) = 0;
    *(undefined1 *)(param_2 + 0xc2) = 0;
    *(undefined1 *)(param_2 + 0xc3) = 0;
    *(undefined1 *)(param_2 + 0xc4) = 0;
    *(undefined1 *)(param_2 + 0xc5) = 0;
    *(undefined1 *)(param_2 + 0xc6) = 0;
    *(undefined1 *)(param_2 + 199) = 0;
    *(undefined1 *)(param_2 + 0xa9) = 0;
    *(undefined1 *)(param_2 + 0xaa) = 0;
    *(undefined1 *)(param_2 + 0xab) = 0;
    *(undefined1 *)(param_2 + 0xac) = 0;
    *(undefined1 *)(param_2 + 0xad) = 0;
    *(undefined1 *)(param_2 + 0xae) = 0;
    *(undefined1 *)(param_2 + 0xaf) = 0;
    *(undefined1 *)(param_2 + 0xb0) = 0;
    *(undefined1 *)(param_2 + 0xb1) = 0;
    *(undefined1 *)(param_2 + 0xb2) = 0;
    *(undefined1 *)(param_2 + 0xb3) = 0;
    *(undefined1 *)(param_2 + 0xb4) = 0;
    *(undefined1 *)(param_2 + 0xb5) = 0;
    *(undefined1 *)(param_2 + 0xb8) = 0;
    *(undefined1 *)(param_2 + 0xb6) = 0;
    *(undefined1 *)(param_2 + 0xb7) = 0;
  }
  else {
    iVar4 = 0;
    uVar2 = (*(code *)**(undefined4 **)(*(int *)PTR_DAT_0071b3ec + 0x84))(param_2 + 0x98,0x11);
    *(undefined4 *)(param_2 + 0x94) = uVar2;
    if (*(int *)(param_1 + 0x9c) == 0) {
      do {
        uVar3 = FUN_00552968();
        iVar5 = iVar4 + 1;
        *(undefined1 *)(param_2 + iVar4 + 0xa9) = uVar3;
        if (iVar4 == 0xf) {
          return;
        }
        uVar3 = FUN_00552968();
        iVar4 = iVar4 + 2;
        *(undefined1 *)(param_2 + iVar5 + 0xa9) = uVar3;
      } while (iVar5 != 0xf);
    }
    else {
      do {
        uVar3 = FUN_00552968();
        iVar5 = param_2 + iVar4;
        bVar1 = iVar4 != 0xf;
        iVar4 = iVar4 + 1;
        *(undefined1 *)(iVar5 + 0xb9) = uVar3;
      } while (bVar1);
    }
  }
  return;
}


// 0x056674c (0xc8 bytes)
undefined8 FUN_0056674c(undefined4 param_1,int param_2)

{
  undefined4 *local_40;
  GPiece<4> local_3c;
  undefined4 uStack_38;
  undefined2 uStack_34;
  
  uStack_34 = 0;
  uStack_38 = 0;
  FUN_00564448(&uStack_38,0x1000);
  FUN_005644a8(&uStack_38,*(undefined2 *)(param_2 + 0x6e));
  FUN_0055cd34(param_1,param_2,&local_40);
  FUN_0054fa58(*local_40,*(undefined8 *)(param_2 + 8),*(undefined4 *)(param_2 + 0x10),&uStack_38,6,
               local_3c);
  return 0;
}


// 0x0566814 (0x90 bytes)
undefined8 FUN_00566814(int *param_1)

{
  undefined8 uVar1;
  
  uVar1 = 0xd2f3;
  if (param_1 != (int *)0x0) {
    uVar1 = 0;
    if ((4 < *param_1 - 4U) && (*param_1 != 1)) {
      *param_1 = 1;
      FUN_005c2fb8(param_1 + 7);
      FUN_005c2fb8(param_1 + 0xc);
      uVar1 = 0;
    }
  }
  return uVar1;
}


// 0x05668a4 (0x164 bytes)
undefined4 FUN_005668a4(undefined4 param_1,undefined4 param_2,uint *param_3)

{
  undefined4 uVar1;
  ulonglong uVar2;
  GPiece<16> local_30;
  
  if (param_3 == (uint *)0x0) {
    return 0xd2f3;
  }
  FUN_0055ded8(param_3,param_2,0,local_30);
  if ((ulonglong)*param_3 < 0x1c) {
    uVar2 = 1L << ((ulonglong)*param_3 & 0x7f);
    if ((uVar2 & 0x1b8) != 0) {
      uVar1 = FUN_0055f880(param_1,param_3,param_2);
      return uVar1;
    }
    if ((uVar2 & 0x40) != 0) {
      *param_3 = 7;
      uVar1 = FUN_0055f880(param_1,param_3,param_2);
      return uVar1;
    }
    if ((uVar2 & 0x8000000) != 0) {
      *param_3 = 3;
      uVar1 = FUN_0055f880(param_1,param_3,param_2);
      return uVar1;
    }
  }
  *param_3 = 1;
  uVar1 = FUN_0056674c(param_1,param_3);
  return uVar1;
}


// 0x0566a08 (0x4ec bytes)
/* WARNING: Removing unreachable block (ram,0x00566edc) */
/* WARNING: Removing unreachable block (ram,0x00566d50) */
/* WARNING: Removing unreachable block (ram,0x00566eb0) */
/* WARNING: Removing unreachable block (ram,0x00566d60) */
/* WARNING: Removing unreachable block (ram,0x00566d6c) */
/* WARNING: Removing unreachable block (ram,0x00566d98) */

int FUN_00566a08(int param_1,int param_2,void *param_3,uint param_4,int param_5,int param_6)

{
  bool bVar1;
  undefined4 uVar2;
  undefined1 uVar4;
  int iVar3;
  undefined1 uVar5;
  undefined1 uVar6;
  int iVar7;
  undefined1 *puVar8;
  GPiece<4> local_70;
  GPiece<4> local_6c;
  undefined8 uStack_68;
  undefined4 uStack_60;
  
  if (param_4 < 0xc) {
    uStack_60 = 0;
    uStack_68 = 0;
    memcpy(&uStack_68,param_3,param_4 & 0xffff);
    FUN_005525a8(&uStack_68,param_5);
    FUN_00551ef4((int)&uStack_68 + 4,param_5 + 4);
    FUN_00551ef4((int)&uStack_68 + 5,param_5 + 5);
    FUN_00551f9c((int)&uStack_68 + 6,param_5 + 6);
    FUN_00551f9c(&uStack_60,param_5 + 8);
    FUN_00551ef4((int)&uStack_60 + 2,param_5 + 10);
    FUN_00551ef4((int)&uStack_60 + 3,param_5 + 0xb);
  }
  else {
    FUN_005525a8(param_3,param_5);
    FUN_00551ef4((int)param_3 + 4,param_5 + 4);
    FUN_00551ef4((int)param_3 + 5,param_5 + 5);
    FUN_00551f9c((int)param_3 + 6,param_5 + 6);
    FUN_00551f9c((int)param_3 + 8,param_5 + 8);
    FUN_00551ef4((int)param_3 + 10,param_5 + 10);
    FUN_00551ef4((int)param_3 + 0xb,param_5 + 0xb);
  }
  if ((*(int *)(param_1 + 0x9c) == 0) || (*(int *)(param_2 + 0x114) != 0)) {
LAB_00566b2c:
    if ((*(char *)(param_5 + 10) != '\x02') || (*(byte *)(param_5 + 0xb) < 3)) goto LAB_00566b38;
LAB_00566c30:
    if (param_4 != 0x20) goto LAB_00566b38;
  }
  else {
    if ((*(char *)(param_5 + 10) != '\x02') || (*(byte *)(param_5 + 0xb) < 3)) goto LAB_00566b38;
    if (param_4 != 0x20) goto LAB_00566c30;
    if (*(int *)PTR_DAT_0071b3ec != 0) {
      if ((*(int *)(param_1 + 0x98) != 0) &&
         (iVar3 = FUN_00569e74(*(undefined2 *)(param_5 + 6),local_70), iVar3 != 0)) {
        return iVar3;
      }
      uVar2 = *(undefined4 *)(param_1 + 200);
      *(undefined4 *)(param_2 + 0x114) = *(undefined4 *)(param_1 + 0xc4);
      *(undefined4 *)(param_2 + 0x11c) = uVar2;
      goto LAB_00566b2c;
    }
  }
  if (*(int *)PTR_DAT_0071b3ec != 0) {
    FUN_005525a8((int)param_3 + 0xc,local_6c);
    if (*(int *)(param_1 + 0x9c) == 0) {
      uVar4 = *(undefined1 *)((int)param_3 + 0x11);
      uVar6 = *(undefined1 *)((int)param_3 + 0x12);
      uVar5 = *(undefined1 *)((int)param_3 + 0x13);
      puVar8 = (undefined1 *)(param_2 + 0xb9);
      *puVar8 = *(undefined1 *)((int)param_3 + 0x10);
    }
    else {
      uVar4 = *(undefined1 *)((int)param_3 + 0x11);
      uVar6 = *(undefined1 *)((int)param_3 + 0x12);
      uVar5 = *(undefined1 *)((int)param_3 + 0x13);
      puVar8 = (undefined1 *)(param_2 + 0xa9);
      *puVar8 = *(undefined1 *)((int)param_3 + 0x10);
    }
    puVar8[1] = uVar4;
    puVar8[2] = uVar6;
    puVar8[3] = uVar5;
    uVar4 = *(undefined1 *)((int)param_3 + 0x15);
    uVar6 = *(undefined1 *)((int)param_3 + 0x16);
    uVar5 = *(undefined1 *)((int)param_3 + 0x17);
    puVar8[4] = *(undefined1 *)((int)param_3 + 0x14);
    puVar8[5] = uVar4;
    puVar8[6] = uVar6;
    puVar8[7] = uVar5;
    uVar4 = *(undefined1 *)((int)param_3 + 0x19);
    uVar6 = *(undefined1 *)((int)param_3 + 0x1a);
    uVar5 = *(undefined1 *)((int)param_3 + 0x1b);
    puVar8[8] = *(undefined1 *)((int)param_3 + 0x18);
    puVar8[9] = uVar4;
    puVar8[10] = uVar6;
    puVar8[0xb] = uVar5;
    uVar4 = *(undefined1 *)((int)param_3 + 0x1c);
    uVar6 = *(undefined1 *)((int)param_3 + 0x1d);
    uVar5 = *(undefined1 *)((int)param_3 + 0x1e);
    puVar8[0xf] = *(undefined1 *)((int)param_3 + 0x1f);
    puVar8[0xc] = uVar4;
    puVar8[0xd] = uVar6;
    puVar8[0xe] = uVar5;
    if (param_6 != 0) {
      iVar3 = 0;
      if (*(int *)(param_1 + 0x9c) == 0) {
        do {
          uVar4 = FUN_00552968();
          iVar7 = iVar3 + 1;
          *(undefined1 *)(iVar3 + param_2 + 0xa9) = uVar4;
          if (iVar3 == 0xf) break;
          uVar4 = FUN_00552968();
          iVar3 = iVar3 + 2;
          *(undefined1 *)(iVar7 + param_2 + 0xa9) = uVar4;
        } while (iVar7 != 0xf);
      }
      else {
        do {
          uVar4 = FUN_00552968();
          iVar7 = param_2 + iVar3;
          bVar1 = iVar3 != 0xf;
          iVar3 = iVar3 + 1;
          *(undefined1 *)(iVar7 + 0xb9) = uVar4;
        } while (bVar1);
      }
    }
    if (*(int *)(param_1 + 0x9c) == 0) {
      if (*(int *)(param_2 + 0x94) != 0) {
        *(undefined4 *)(param_2 + 0x94) = 0;
        return 0;
      }
    }
    else {
      *(undefined4 *)(param_2 + 0x94) = 0;
    }
    return 0;
  }
LAB_00566b38:
  *(undefined4 *)(param_2 + 0x94) = 0;
  return 0;
}


// 0x0566ef4 (0x360 bytes)
int FUN_00566ef4(int param_1,int param_2)

{
  undefined *puVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  short sVar5;
  ulonglong uVar6;
  ushort local_a0 [2];
  GPiece<4> auStack_9c;
  undefined4 local_98;
  GPiece<4> auStack_94;
  uint local_90;
  uint auStack_8c [16];
  int local_4c;
  uint local_48;
  
  puVar1 = PTR_DAT_0071b3ec;
  local_90 = 0;
  local_4c = 0;
  local_98 = 0;
  local_48 = 0;
  if (*(int *)(param_1 + 4) == 1) {
    uVar4 = *(uint *)PTR_DAT_0071b3ec;
    uVar6 = ((longlong)((int)uVar4 >> 0x1f) - ((longlong)((int)uVar4 >> 0x1f) ^ (ulonglong)uVar4) <<
            0x20) >> 0x35 & 0x400;
    if ((*(int *)PTR_DAT_0071b3e0 != 0) &&
       ((uVar3 = *(uint *)(param_1 + 0xa0), uVar3 != 0 ||
        (uVar3 = (*(code *)**(undefined4 **)(uVar4 + 0x98))(), uVar3 != 0)))) {
      uVar6 = uVar6 | 0x200;
      uVar4 = (uint)*(byte *)(uVar3 + 2) * 0x100 + *(byte *)(uVar3 + 3) + 4;
      if ((int)local_48 < 8) {
        auStack_8c[local_48 * 2 + 1] = uVar4;
        local_4c = local_4c + uVar4;
        auStack_8c[local_48 * 2] = uVar3;
        local_48 = local_48 + 1;
        FUN_00552570(&local_98,uVar4);
        uVar4 = local_48;
      }
      else {
        FUN_00552570(&local_98,uVar4);
        uVar4 = local_48;
      }
      local_48 = uVar4;
      if ((int)uVar4 < 8) {
        auStack_8c[uVar4 * 2 + 1] = 4;
        local_4c = local_4c + 4;
        local_48 = uVar4 + 1;
        auStack_8c[uVar4 * 2] = (uint)&local_98;
      }
    }
  }
  else {
    uVar6 = 0;
  }
  FUN_00552570(auStack_9c,uVar6);
  uVar6 = (ulonglong)local_48;
  if ((int)local_48 < 8) {
    auStack_8c[local_48 * 2 + 1] = 4;
    local_4c = local_4c + 4;
    uVar6 = (ulonglong)local_48 + 1;
    auStack_8c[local_48 * 2] = (uint)auStack_9c;
    local_48 = (uint)uVar6;
  }
  if (*(int *)puVar1 != 0) {
    if (*(int *)(param_1 + 0x9c) != 0) {
      local_90 = local_90 | 1;
    }
    if ((int)uVar6 < 8) {
      iVar2 = (int)((uVar6 & 0xffffffff) << 3);
      *(undefined4 *)((int)auStack_8c + iVar2 + 4) = 4;
      local_4c = local_4c + 4;
      local_48 = local_48 + 1;
      *(uint **)((int)auStack_8c + iVar2) = &local_90;
    }
  }
  FUN_005642f0(param_1,param_2,0x5000,local_4c,auStack_94);
  FUN_00564180(auStack_94,local_a0);
  if ((int)local_48 < 8) {
    auStack_8c[local_48 * 2 + 1] = (uint)local_a0[0];
    local_4c = local_4c + (uint)local_a0[0];
    auStack_8c[local_48 * 2] = (uint)auStack_94;
    local_48 = local_48 + 1;
  }
  iVar2 = FUN_00561b00(param_1,param_2 + 0x1c,auStack_8c,0x8800,0,0,0);
  if ((iVar2 != 0) &&
     (sVar5 = *(short *)(param_2 + 0x76) + -1, *(short *)(param_2 + 0x76) = sVar5, sVar5 == 0)) {
    *(undefined2 *)(param_2 + 0x76) = 0xffff;
  }
  return iVar2;
}


// 0x0567254 (0x1c0 bytes)
/* WARNING: Removing unreachable block (ram,0x00567448) */

ulonglong FUN_00567254(undefined4 param_1,int *param_2,undefined8 param_3,undefined4 param_4)

{
  short sVar3;
  ulonglong uVar1;
  uint uVar2;
  uint uVar4;
  GPiece<512> local_288;
  
  sVar3 = FUN_00564004(param_3);
  if (sVar3 == 0) {
LAB_00567440:
    uVar1 = 0;
  }
  else {
    if (*(short *)(param_2 + 0x1e) != 0) {
      FUN_0055ded8(param_2,param_4,0,local_288);
      uVar4 = 1;
      if (*(ushort *)(param_2 + 0x1e) != 0xffff) {
        uVar4 = *(ushort *)(param_2 + 0x1e) + 1;
      }
      uVar2 = FUN_005640d4(param_4);
      if ((uVar2 & 0xffff) != uVar4) goto LAB_00567440;
    }
    if (*param_2 - 10U < 0x14) {
                    /* WARNING: Could not recover jumptable at 0x0056738c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar1 = (*(code *)(PTR_DAT_0071b3f0 + *(int *)(PTR_DAT_0071b3f0 + (*param_2 + -10) * 4)))();
      return uVar1;
    }
    *param_2 = 1;
    uVar1 = FUN_0056674c(param_1,param_2);
  }
  return uVar1 & 0xffffffff;
}


// 0x0569498 (0x2dc bytes)
int FUN_00569498(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  short sVar3;
  undefined4 uVar4;
  GPiece<2> local_b0;
  GPiece<6> auStack_ae;
  GPiece<4> auStack_a8;
  undefined1 uStack_a4;
  undefined1 uStack_a3;
  GPiece<2> auStack_a2;
  GPiece<2> auStack_a0;
  undefined1 uStack_9e;
  undefined1 uStack_9d;
  GPiece<20> auStack_9c;
  GPiece<80> local_88;
  
  FUN_00552570(auStack_a8,0x3040000);
  FUN_00551ed8(&uStack_a4,2);
  FUN_00551ed8(&uStack_a3,0);
  FUN_00551f78(auStack_a2,*(undefined2 *)(param_2 + 0x6c));
  if (*(int *)(*(int *)PTR_DAT_0071b3f4 + 0x108) == 0) {
    FUN_00551f78(auStack_a0,0);
  }
  else {
    FUN_00551f78(auStack_a0,*(undefined2 *)(param_1 + 0x90));
  }
  FUN_00551ed8(&uStack_9e,2);
  FUN_00551ed8(&uStack_9d,3);
  if (*(int *)(param_2 + 0x94) != 0) {
    if (*(int *)PTR_DAT_0071b3ec != 0) {
      iVar1 = (*(code *)**(undefined4 **)(*(int *)PTR_DAT_0071b3ec + 0x84))(param_2 + 0x98,0x11);
      iVar2 = *(int *)(param_2 + 0x94);
      if (iVar2 == iVar1) {
        if (iVar2 != 0) {
          FUN_00552570(auStack_9c,iVar2);
          uVar4 = 0x20;
          goto LAB_005695b8;
        }
        goto LAB_005695b4;
      }
    }
    *(undefined4 *)(param_2 + 0x94) = 0;
  }
LAB_005695b4:
  uVar4 = 0xc;
LAB_005695b8:
  FUN_005642f0(param_1,param_2,0x5000,uVar4,auStack_ae);
  FUN_00564180(auStack_ae,local_b0);
  iVar2 = FUN_00561b00(param_1,param_2 + 0x1c,local_88,0x8800,0,0,0);
  if ((iVar2 != 0) &&
     (sVar3 = *(short *)(param_2 + 0x76) + -1, *(short *)(param_2 + 0x76) = sVar3, sVar3 == 0)) {
    *(undefined2 *)(param_2 + 0x76) = 0xffff;
  }
  return iVar2;
}


// 0x0569774 (0x700 bytes)
/* WARNING: Removing unreachable block (ram,0x0056983c) */
/* WARNING: Removing unreachable block (ram,0x00569848) */
/* WARNING: Removing unreachable block (ram,0x00569874) */
/* WARNING: Removing unreachable block (ram,0x00569904) */
/* WARNING: Removing unreachable block (ram,0x00569cd4) */
/* WARNING: Removing unreachable block (ram,0x00569c80) */
/* WARNING: Removing unreachable block (ram,0x00569d00) */
/* WARNING: Removing unreachable block (ram,0x00569cb0) */
/* WARNING: Removing unreachable block (ram,0x00569d20) */
/* WARNING: Removing unreachable block (ram,0x00569d58) */
/* WARNING: Removing unreachable block (ram,0x00569d40) */
/* WARNING: Removing unreachable block (ram,0x00569d60) */
/* WARNING: Removing unreachable block (ram,0x00569dc4) */
/* WARNING: Removing unreachable block (ram,0x00569d78) */
/* WARNING: Removing unreachable block (ram,0x00569e24) */
/* WARNING: Removing unreachable block (ram,0x00569e40) */
/* WARNING: Removing unreachable block (ram,0x00569e4c) */
/* WARNING: Removing unreachable block (ram,0x00569d8c) */
/* WARNING: Removing unreachable block (ram,0x00569dac) */
/* WARNING: Removing unreachable block (ram,0x00569db8) */
/* WARNING: Removing unreachable block (ram,0x00569dec) */
/* WARNING: Removing unreachable block (ram,0x00569e0c) */
/* WARNING: Removing unreachable block (ram,0x00569de4) */

undefined4 FUN_00569774(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  short sVar2;
  undefined4 uVar1;
  undefined8 uStack00000048;
  GPiece<4> local_d0;
  GPiece<28> local_cc;
  undefined4 local_b0;
  
  uStack00000048 = param_4;
  sVar2 = FUN_00564004(param_3);
  local_b0 = 0;
  if (sVar2 != 0) {
    uVar1 = FUN_00563f7c(param_3);
    FUN_00564034(uVar1,local_cc,local_d0);
    local_b0 = 0xd2f5;
  }
  return local_b0;
}


// 0x0569e74 (0x84 bytes)
undefined8 FUN_00569e74(short param_1,undefined4 *param_2)

{
  short sVar1;
  short *psVar2;
  
  if ((param_2 != (undefined4 *)0x0) && (*param_2 = 0, param_1 != 0)) {
    psVar2 = *(short **)(PTR_DAT_0071b3f8 + 4);
    if (psVar2 != (short *)0x0) {
      sVar1 = *psVar2;
      while( true ) {
        if (sVar1 == param_1) {
          *param_2 = psVar2;
          return 0;
        }
        psVar2 = *(short **)(psVar2 + 0xe);
        if (psVar2 == (short *)0x0) break;
        sVar1 = *psVar2;
      }
    }
    return 0;
  }
  return 2;
}


// 0x0569ef8 (0x3c bytes)
undefined8 FUN_00569ef8(int *param_1)

{
  int iVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  puVar2 = PTR_DAT_0071b3f8;
  uVar3 = 2;
  if (param_1 != (int *)0x0) {
    uVar3 = 0;
    *param_1 = 0;
    iVar1 = *(int *)(puVar2 + 4);
    *(int *)(puVar2 + 8) = iVar1;
    if (iVar1 != 0) {
      *param_1 = iVar1;
    }
  }
  return uVar3;
}


// 0x0569f34 (0x4c bytes)
undefined8 FUN_00569f34(int *param_1)

{
  int iVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  puVar2 = PTR_DAT_0071b3f8;
  uVar3 = 2;
  if (param_1 != (int *)0x0) {
    uVar3 = 0;
    *param_1 = 0;
    iVar1 = *(int *)(puVar2 + 8);
    if (iVar1 != 0) {
      iVar1 = *(int *)(iVar1 + 0x1c);
      *(int *)(puVar2 + 8) = iVar1;
      if (iVar1 != 0) {
        *param_1 = iVar1;
      }
    }
  }
  return uVar3;
}


// 0x0569f80 (0x168 bytes)
// strings: 0056a018: '}HSx}+Kxy*' (raw)

undefined8 FUN_00569f80(uint param_1)

{
  ushort uVar1;
  ushort *puVar2;
  ushort *puVar3;
  ushort *puVar4;
  GPiece<4> local_10;
  GPiece<12> local_c;
  
  if ((param_1 != 0) && (puVar2 = *(ushort **)(PTR_DAT_0071b3f8 + 4), puVar2 != (ushort *)0x0)) {
    if (*puVar2 == param_1) {
      *(undefined4 *)(PTR_DAT_0071b3f8 + 4) = *(undefined4 *)(puVar2 + 0xe);
      puVar2[0xe] = 0;
      puVar2[0xf] = 0;
      puVar2[0] = 0;
      puVar2[1] = 0;
      puVar2[2] = 0;
      puVar2[3] = 0;
      puVar2[4] = 0;
      puVar2[5] = 0;
      puVar2[6] = 0;
      puVar2[7] = 0;
      puVar2[8] = 0;
      puVar2[9] = 0;
      puVar2[10] = 0;
      puVar2[0xb] = 0;
      puVar2[0xc] = 0;
      puVar2[0xd] = 0;
      FUN_005519f0(local_10);
      return 0;
    }
    puVar3 = *(ushort **)(puVar2 + 0xe);
    if (puVar3 != (ushort *)0x0) {
      uVar1 = *puVar3;
      while( true ) {
        if (uVar1 == param_1) {
          *(undefined4 *)(puVar2 + 0xe) = *(undefined4 *)(puVar3 + 0xe);
          puVar3[0xe] = 0;
          puVar3[0xf] = 0;
          puVar3[0] = 0;
          puVar3[1] = 0;
          puVar3[2] = 0;
          puVar3[3] = 0;
          puVar3[4] = 0;
          puVar3[5] = 0;
          puVar3[6] = 0;
          puVar3[7] = 0;
          puVar3[8] = 0;
          puVar3[9] = 0;
          puVar3[10] = 0;
          puVar3[0xb] = 0;
          puVar3[0xc] = 0;
          puVar3[0xd] = 0;
          FUN_005519f0(local_c);
          return 0;
        }
        puVar4 = *(ushort **)(puVar3 + 0xe);
        if (puVar4 == (ushort *)0x0) break;
        uVar1 = *puVar4;
        puVar2 = puVar3;
        puVar3 = puVar4;
      }
    }
    return 0;
  }
  return 2;
}


// 0x056a0e8 (0x190 bytes)
undefined8 FUN_0056a0e8(short *param_1,undefined4 *param_2)

{
  short sVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined *puVar6;
  undefined8 uVar7;
  short *local_30 [6];
  
  puVar6 = PTR_DAT_0071b3f8;
  if ((((*(int *)(param_1 + 2) != 0) && (*(int *)(param_1 + 4) != 0)) &&
      (param_2 != (undefined4 *)0x0)) && (*param_1 != 0)) {
    local_30[0] = *(short **)(PTR_DAT_0071b3f8 + 4);
    if (local_30[0] != (short *)0x0) {
      sVar1 = *local_30[0];
      while( true ) {
        if (sVar1 == *param_1) {
          return 0xd301;
        }
        local_30[0] = *(short **)(local_30[0] + 0xe);
        if (local_30[0] == (short *)0x0) break;
        sVar1 = *local_30[0];
      }
    }
    FUN_00551de8(local_30,0x20);
    uVar7 = 100;
    if (local_30[0] != (short *)0x0) {
      uVar2 = *(undefined4 *)(param_1 + 2);
      uVar7 = 0;
      uVar3 = *(undefined4 *)(param_1 + 4);
      uVar4 = *(undefined4 *)(param_1 + 6);
      *(undefined4 *)local_30[0] = *(undefined4 *)param_1;
      *(undefined4 *)(local_30[0] + 4) = uVar3;
      *(undefined4 *)(local_30[0] + 2) = uVar2;
      *(undefined4 *)(local_30[0] + 6) = uVar4;
      uVar2 = *(undefined4 *)(param_1 + 0xc);
      uVar3 = *(undefined4 *)(param_1 + 8);
      uVar4 = *(undefined4 *)(param_1 + 10);
      uVar5 = *(undefined4 *)puVar6;
      *(undefined4 *)(local_30[0] + 0xe) = *(undefined4 *)(puVar6 + 4);
      *(undefined4 *)(local_30[0] + 0xc) = uVar2;
      *param_2 = uVar5;
      *(undefined4 *)(local_30[0] + 8) = uVar3;
      *(short **)(puVar6 + 4) = local_30[0];
      *(undefined4 *)(local_30[0] + 10) = uVar4;
    }
    return uVar7;
  }
  return 2;
}


// 0x056a278 (0xe0 bytes)
undefined8 FUN_0056a278(void)

{
  int iVar1;
  int *piVar2;
  undefined *puVar3;
  GPiece<16> local_20;
  
  puVar3 = PTR_DAT_0071b3f8;
  FUN_00561584(*(undefined4 *)PTR_DAT_0071b3f8);
  iVar1 = *(int *)(puVar3 + 4);
  piVar2 = (int *)PTR_DAT_0071b3fc;
  while (PTR_DAT_0071b3fc = (undefined *)piVar2, iVar1 != 0) {
    *(undefined4 *)(puVar3 + 4) = *(undefined4 *)(iVar1 + 0x1c);
    FUN_005519f0(local_20);
    piVar2 = (int *)PTR_DAT_0071b3fc;
    iVar1 = *(int *)(puVar3 + 4);
  }
  *(undefined4 *)(puVar3 + 4) = 0;
  *(undefined4 *)puVar3 = 0;
  if (*piVar2 != 0) {
    (*(code *)**(undefined4 **)(*piVar2 + 0x6c))(0xc0000000);
    (*(code *)**(undefined4 **)(*piVar2 + 0x6c))(0x40000000);
  }
  return 0;
}


// 0x056a358 (0x7c bytes)
int FUN_0056a358(int param_1,undefined4 *param_2)

{
  undefined *puVar1;
  int iVar2;
  
  puVar1 = PTR_DAT_0071b3f8;
  iVar2 = 2;
  if (param_1 != 0) {
    *(undefined4 *)(PTR_DAT_0071b3f8 + 4) = 0;
    *(undefined4 *)puVar1 = 0;
    *(undefined4 *)(param_1 + 0x2c) = 1;
    iVar2 = FUN_005633b0(puVar1,param_1);
    if (iVar2 == 0) {
      *param_2 = *(undefined4 *)puVar1;
    }
  }
  return iVar2;
}


// 0x056a3d4 (0x174 bytes)
int FUN_0056a3d4(byte *param_1,byte *param_2,uint param_3)

{
  bool bVar1;
  byte bVar2;
  byte bVar3;
  ushort uVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  uint uVar9;
  ulonglong uVar10;
  
  if (param_3 == 0) {
    return 0;
  }
  iVar6 = param_3 - 1;
  if (param_3 == 0) {
    bVar2 = *param_1;
    bVar3 = *param_2;
LAB_0056a478:
    iVar6 = *(int *)PTR_PTR_0071b400;
    uVar4 = *(ushort *)((uint)bVar2 * 2 + iVar6);
  }
  else {
    uVar10 = (ulonglong)param_3;
    do {
      bVar2 = *param_1;
      bVar1 = iVar6 == 0;
      param_1 = param_1 + 1;
      iVar7 = (int)(char)bVar2;
      iVar6 = iVar6 + -1;
      if ((*(ushort *)((char)bVar2 * 2 + *(int *)PTR_PTR_0071b400) & 2) != 0) {
        iVar7 = (char)bVar2 + 0x20;
      }
      bVar3 = *param_2;
      param_2 = param_2 + 1;
      iVar8 = (int)(char)bVar3;
      if ((*(ushort *)((char)bVar3 * 2 + *(int *)PTR_PTR_0071b400) & 2) != 0) {
        iVar8 = (char)bVar3 + 0x20;
      }
      if (iVar7 != iVar8) goto LAB_0056a478;
      if (bVar1) {
        return 0;
      }
      if (bVar2 == 0) {
        return 0;
      }
      if (bVar3 == 0) {
        return 0;
      }
      uVar10 = uVar10 - 1;
    } while (uVar10 != 0);
    bVar2 = *param_1;
    iVar6 = *(int *)PTR_PTR_0071b400;
    bVar3 = *param_2;
    uVar4 = *(ushort *)((uint)bVar2 * 2 + iVar6);
  }
  uVar9 = (uint)bVar2;
  if ((uVar4 & 2) == 0) {
    uVar4 = *(ushort *)((uint)bVar3 * 2 + iVar6);
  }
  else {
    uVar9 = uVar9 + 0x20;
    uVar4 = *(ushort *)((uint)bVar3 * 2 + iVar6);
  }
  uVar5 = (uint)bVar3;
  if ((uVar4 & 2) != 0) {
    uVar5 = uVar5 + 0x20;
  }
  return uVar9 - uVar5;
}


// 0x056a548 (0x6c bytes)
void FUN_0056a548(int param_1,int param_2,uint param_3)

{
  int iVar1;
  undefined *puVar2;
  
  puVar2 = PTR_DAT_0071b404;
  if (param_1 == 0) {
    return;
  }
  if (param_2 != 0) {
    if ((param_3 & 0x1000) != 0) {
      iVar1 = *(int *)(param_1 + 0x38);
      *(undefined4 *)(iVar1 + 0xc) = 2;
      *(undefined4 *)puVar2 = 0;
      *(undefined4 *)(iVar1 + 0x2040) = 1;
      return;
    }
    iVar1 = *(int *)(param_1 + 0x38);
    *(undefined4 *)(iVar1 + 0xc) = 9;
    *(undefined4 *)puVar2 = 0;
    *(int *)(iVar1 + 0x10) = param_2;
    return;
  }
  *(undefined4 *)(*(int *)(param_1 + 0x38) + 0xc) = 3;
  return;
}


// 0x056a5b4 (0x80 bytes)
void FUN_0056a5b4(int param_1,int param_2,uint param_3)

{
  int iVar1;
  
  if (param_1 == 0) {
    return;
  }
  if (param_2 != 0) {
    iVar1 = *(int *)(param_1 + 0x38);
    *(int *)(iVar1 + 0x10) = param_2;
    *(undefined4 *)(iVar1 + 0xc) = 9;
    return;
  }
  if ((param_3 & 0x1000) != 0) {
    iVar1 = *(int *)(param_1 + 0x38);
    *(undefined4 *)(iVar1 + 0x2040) = 0;
    *(undefined4 *)(iVar1 + 0xc) = 4;
    return;
  }
  if ((param_3 & 0x800) == 0) {
    iVar1 = *(int *)(param_1 + 0x38);
    *(undefined4 *)(iVar1 + 0xc) = 9;
    *(undefined4 *)(iVar1 + 0x10) = 6;
    return;
  }
  iVar1 = *(int *)(param_1 + 0x38);
  *(undefined4 *)(iVar1 + 0xc) = 4;
  *(undefined4 *)(iVar1 + 0x2040) = 1;
  return;
}


// 0x056a634 (0x54 bytes)
void FUN_0056a634(int param_1,int param_2)

{
  int iVar1;
  
  if (param_1 == 0) {
    return;
  }
  if (param_2 != 0) {
    iVar1 = *(int *)(param_1 + 0x38);
    if (*(int *)(iVar1 + 0x2040) == 0) {
      *(undefined4 *)(iVar1 + 0xc) = 4;
      *(undefined4 *)(iVar1 + 0x2040) = 1;
      return;
    }
    *(int *)(iVar1 + 0x10) = param_2;
    *(undefined4 *)(iVar1 + 0xc) = 9;
    return;
  }
  *(undefined4 *)(*(int *)(param_1 + 0x38) + 0xc) = 6;
  return;
}


// 0x056a688 (0x80 bytes)
void FUN_0056a688(int param_1,int param_2,undefined8 param_3,int param_4)

{
  int iVar1;
  
  if (param_1 == 0) {
    return;
  }
  if (param_2 == 0) {
    if (param_4 == 2) {
      *(undefined4 *)(*(int *)(param_1 + 0x38) + 0xc) = 6;
      return;
    }
    iVar1 = *(int *)(param_1 + 0x38);
    if (*(int *)(iVar1 + 0x2040) != 0) {
      *(undefined4 *)(iVar1 + 0x10) = 6;
      *(undefined4 *)(iVar1 + 0xc) = 9;
      return;
    }
  }
  else {
    iVar1 = *(int *)(param_1 + 0x38);
    if (*(int *)(iVar1 + 0x2040) != 0) {
      *(int *)(iVar1 + 0x10) = param_2;
      *(undefined4 *)(iVar1 + 0xc) = 9;
      return;
    }
  }
  *(undefined4 *)(iVar1 + 0x2040) = 1;
  *(undefined4 *)(iVar1 + 0xc) = 4;
  return;
}


// 0x056a708 (0x5c bytes)
void FUN_0056a708(int param_1,int param_2)

{
  int iVar1;
  
  if (param_1 == 0) {
    return;
  }
  if (param_2 != 0) {
    iVar1 = *(int *)(param_1 + 0x38);
    if (*(int *)(iVar1 + 0x2040) == 0) {
      *(undefined4 *)(iVar1 + 0xc) = 4;
      *(undefined4 *)(iVar1 + 0x2040) = 1;
      return;
    }
    *(int *)(iVar1 + 0x10) = param_2;
    *(undefined4 *)(iVar1 + 0xc) = 9;
    return;
  }
  iVar1 = *(int *)(param_1 + 0x38);
  *(undefined4 *)(iVar1 + 0x2044) = 0;
  *(undefined4 *)(iVar1 + 0xc) = 7;
  return;
}


// 0x056a764 (0x54 bytes)
void FUN_0056a764(int param_1,int param_2)

{
  int iVar1;
  
  if (param_1 == 0) {
    return;
  }
  if (param_2 != 0) {
    iVar1 = *(int *)(param_1 + 0x38);
    if (*(int *)(iVar1 + 0x2040) == 0) {
      *(undefined4 *)(iVar1 + 0xc) = 4;
      *(undefined4 *)(iVar1 + 0x2040) = 1;
      return;
    }
    *(int *)(iVar1 + 0x10) = param_2;
    *(undefined4 *)(iVar1 + 0xc) = 9;
    return;
  }
  *(undefined4 *)(*(int *)(param_1 + 0x38) + 0xc) = 8;
  return;
}


// 0x056a7b8 (0x58 bytes)
void FUN_0056a7b8(int param_1,int param_2)

{
  int iVar1;
  
  if (param_1 == 0) {
    return;
  }
  if (param_2 != 0) {
    iVar1 = *(int *)(param_1 + 0x38);
    if (*(int *)(iVar1 + 0x2040) == 0) {
      *(undefined4 *)(iVar1 + 0xc) = 4;
      *(undefined4 *)(iVar1 + 0x2040) = 1;
      return;
    }
    *(int *)(iVar1 + 0x10) = param_2;
    *(undefined4 *)(iVar1 + 0xc) = 9;
    return;
  }
  iVar1 = *(int *)(param_1 + 0x38);
  *(undefined4 *)(iVar1 + 0x10) = 0;
  *(undefined4 *)(iVar1 + 0xc) = 9;
  return;
}


// 0x056a810 (0xc bytes)
// strings: 0067dbf0: 'rt_upnp ReleaseVersion 3.05.201103091800'

undefined4 FUN_0056a810(void)

{
  return *(undefined4 *)PTR_PTR_0071b408;
}


// 0x056a81c (0x1c bytes)
undefined8 FUN_0056a81c(int param_1,undefined4 param_2)

{
  undefined8 uVar1;
  
  uVar1 = 2;
  if (param_1 != 0) {
    uVar1 = 0;
    *(undefined4 *)(param_1 + 0x3c) = param_2;
  }
  return uVar1;
}


// 0x056a838 (0x100 bytes)
undefined4 FUN_0056a838(int param_1,undefined8 *param_2,int *param_3)

{
  undefined4 uVar1;
  int iVar2;
  
  if (((param_1 == 0) || (param_2 == (undefined8 *)0x0)) || (param_3 == (int *)0x0)) {
    return 2;
  }
  if ((*(int *)(param_1 + 0x1c) == 0) || (uVar1 = 0xd6da, *(int *)(param_1 + 0x1c) == 0x12)) {
    *(undefined4 *)param_2 = *(undefined4 *)(param_1 + 8);
    *(undefined4 *)((int)param_2 + 4) = *(undefined4 *)(param_1 + 0xc);
    *param_3 = *(int *)(param_1 + 0x14);
    iVar2 = FUN_0054edf0(*param_2);
    if ((iVar2 != 0) || (uVar1 = 0, *param_3 == 0)) {
      return 55000;
    }
  }
  return uVar1;
}


// 0x056a938 (0x6c bytes)
undefined8 FUN_0056a938(int param_1)

{
  int iVar1;
  
  if ((*(int *)(param_1 + 0x38) == 0) && (iVar1 = FUN_00551de8(param_1 + 0x38,0x2e78), iVar1 != 0))
  {
    return 100;
  }
  return 0;
}


// 0x056a9a4 (0x78 bytes)
void FUN_0056a9a4(int param_1,int param_2)

{
  if ((param_1 != 0) && (param_2 == 0)) {
    FUN_0054edb0(param_1 + 8);
    *(undefined4 *)(param_1 + 0x20) = 0;
    *(undefined4 *)(param_1 + 0x14) = 0;
    *(undefined4 *)(param_1 + 0x18) = 0;
    return;
  }
  return;
}


// 0x056aa1c (0x11c bytes)
// strings: 0067d200: 'http' (raw)

undefined8 FUN_0056aa1c(int param_1,int param_2,int param_3)

{
  int iVar1;
  int iVar2;
  
  if ((param_1 == 0) || (param_3 == 0)) {
    return 2;
  }
  iVar1 = param_1 + 0x1004;
  if (param_2 != 0x1000) {
    if (param_2 != 0x800) {
      return 2;
    }
    iVar1 = param_1 + 0xc04;
  }
  iVar2 = FUN_0056a3d4(iVar1,PTR_DAT_0071b40c,4);
  if (iVar2 != 0) {
    strcpy(param_3,param_1 + 4,0x800);
    FUN_005cc9c4(param_3,iVar1,0x800);
    return 0;
  }
  strcpy(param_3,iVar1,0x800);
  return 0;
}


// 0x056ab38 (0x1ec bytes)
// strings: 0067d200: 'http' (raw)

undefined8 FUN_0056ab38(int param_1,uint param_2,char *param_3)

{
  bool bVar1;
  ulonglong uVar2;
  undefined *puVar3;
  char *pcVar4;
  int iVar5;
  int iVar6;
  size_t sVar7;
  int iVar8;
  
  puVar3 = PTR_DAT_0071b40c;
  iVar5 = param_1 + 0x1104;
  if ((param_2 & 0x1000) == 0) {
    if ((param_2 & 0x800) == 0) {
      return 2;
    }
    iVar5 = param_1 + 0xd04;
  }
  iVar6 = FUN_0056a3d4(iVar5,PTR_DAT_0071b40c,4);
  if (iVar6 != 0) {
    iVar6 = FUN_0056a3d4(param_1 + 4,puVar3,4);
    if (iVar6 == 0) {
      strcpy(param_3,param_1 + 4,0x800);
      FUN_005cc9c4(param_3,iVar5,0x800);
      return 0;
    }
    FUN_0056aa1c(param_1,param_2,param_3);
    sVar7 = strlen(param_3);
    iVar8 = 0;
    iVar6 = 0;
    uVar2 = (longlong)(int)sVar7 + 1U & 0xffffffff;
    bVar1 = false;
    pcVar4 = param_3;
    while( true ) {
      uVar2 = uVar2 - 1;
      if (uVar2 == 0) {
        return 0;
      }
      if ((*pcVar4 == '/') && (iVar6 = iVar6 + 1, bVar1)) break;
      iVar8 = iVar8 + 1;
      bVar1 = iVar6 == 2;
      pcVar4 = param_3 + iVar8;
    }
    strcpy(pcVar4,iVar5,0x800 - iVar8);
    return 0;
  }
  strcpy(param_3,iVar5,0x800);
  return 0;
}


// 0x056ad24 (0x1b4 bytes)
undefined8 FUN_0056ad24(char *param_1,int param_2,undefined4 param_3,undefined4 *param_4)

{
  bool bVar1;
  undefined *puVar2;
  size_t sVar4;
  char *pcVar5;
  undefined4 uVar6;
  undefined8 uVar3;
  int iVar7;
  uint uVar8;
  char *pcVar9;
  char *local_70 [4];
  
  if ((param_1 == (char *)0x0) || (param_2 == 0)) {
    uVar3 = 2;
  }
  else {
    pcVar9 = param_1 + 1;
    iVar7 = 0;
    uVar8 = 0;
    local_70[0] = (char *)0x0;
    while( true ) {
      sVar4 = strlen(param_1);
      bVar1 = iVar7 != 1;
      if (sVar4 <= uVar8) break;
      pcVar5 = local_70[0];
      if (param_1[uVar8] == '/') {
        iVar7 = iVar7 + 1;
        pcVar5 = pcVar9;
        if ((bVar1) && (pcVar5 = local_70[0], iVar7 == 3)) {
          strcpy(param_2,pcVar9,0x200);
          puVar2 = PTR_DAT_0071b410;
          param_1[uVar8] = '\0';
          pcVar5 = (char *)FUN_0055661c(local_70,puVar2);
          if (9 < (byte)(*pcVar5 - 0x30U)) {
            return 0xd6dc;
          }
          FUN_0054ef70(param_3,pcVar5);
          if (local_70[0] == (char *)0x0) {
            *param_4 = 0x50;
            pcVar5 = local_70[0];
          }
          else {
            uVar6 = FUN_005c8a8c(local_70[0],0,10);
            *param_4 = uVar6;
            pcVar5 = local_70[0];
          }
        }
      }
      local_70[0] = pcVar5;
      uVar8 = uVar8 + 1;
      pcVar9 = pcVar9 + 1;
    }
    uVar3 = 0;
  }
  return uVar3;
}


// 0x056aed8 (0x2a4 bytes)
// strings: 0067d210: 'GET /%s HTTP/1.1\r\nHost:%s:%d\r\nConnection:close\r\n\r\n'

ulonglong FUN_0056aed8(int param_1,uint param_2,int param_3)

{
  undefined *puVar1;
  int iVar4;
  ulonglong uVar2;
  ulonglong uVar3;
  undefined8 uVar5;
  uint local_70;
  undefined8 local_6c;
  GPiece<12> local_64;
  undefined4 uStack_58;
  GPiece<24> auStack_50;
  
  if (param_1 != 0) {
    uVar2 = 0xd6da;
    if (*(int *)(param_1 + 0x1c) != 0) goto LAB_0056af98;
    if (param_3 != 0) {
      iVar4 = FUN_0056a938(param_1);
      puVar1 = PTR_DAT_0071b404;
      uVar2 = 100;
      if (iVar4 != 0) goto LAB_0056af98;
      if ((((param_2 & 0x1000) != 0) && (*(int *)(PTR_DAT_0071b404 + 4) == 0)) ||
         (((param_2 & 0x800) != 0 && (*(int *)(PTR_DAT_0071b404 + 8) == 0)))) {
        uVar2 = FUN_0056aa1c(PTR_DAT_0071b404 + 0xc,param_2,*(int *)(param_1 + 0x38) + 0x2078);
        if (((int)uVar2 != 0) ||
           (uVar3 = FUN_0056ad24(*(int *)(param_1 + 0x38) + 0x2078,*(int *)(param_1 + 0x38) + 0x2878
                                 ,&local_6c,&local_70), uVar2 = uVar3, (int)uVar3 != 0))
        goto LAB_0056af98;
        if ((param_2 & *(uint *)(puVar1 + 0xc)) == 0) {
          uVar2 = uVar3 | 0xd6dd;
          goto LAB_0056af98;
        }
        if (param_2 == 0x1000) {
          *(undefined4 *)(puVar1 + 0x1310) = 0;
          iVar4 = *(int *)(param_1 + 0x38);
          uVar5 = 8;
        }
        else {
          if (param_2 != 0x800) goto LAB_0056b04c;
          *(undefined4 *)(puVar1 + 0x1314) = 0;
          iVar4 = *(int *)(param_1 + 0x38);
          uVar5 = 7;
        }
        *(undefined4 *)(iVar4 + 0x2048) = 0;
        *(undefined4 *)(iVar4 + 0x2038) = 0;
        uVar2 = FUN_0056ee38(iVar4 + 4,uVar5,*(undefined4 *)(param_1 + 0x3c));
        if ((uVar2 != 0) || (uVar2 = uVar3, *(int *)(*(int *)(param_1 + 0x38) + 4) == 0))
        goto LAB_0056af98;
        uStack_58 = 0;
        uVar2 = FUN_005500a8(*(undefined4 *)(param_1 + 0x38),local_6c,local_70,local_64);
        if (uVar2 != 0) {
          FUN_0056ee40(*(undefined4 *)(*(int *)(param_1 + 0x38) + 4));
          goto LAB_0056af98;
        }
        FUN_0054ee84(auStack_50,local_6c);
        snprintf((char *)(*(uint *)(param_1 + 0x38) + 0x2078),
                       PTR_s_GET___s_HTTP_1_1_Host__s__d_Conn_0071b414,
                       (ulonglong)*(uint *)(param_1 + 0x38) + 0x2878 & 0xffffffff,auStack_50,
                       (ulonglong)local_70);
      }
      *(undefined4 *)(param_1 + 0x1c) = 4;
      FUN_00556a58(*(int *)(param_1 + 0x38) + 0x14);
      iVar4 = *(int *)(param_1 + 0x38);
      *(uint *)(iVar4 + 8) = param_2;
      *(int *)(iVar4 + 0x205c) = param_3;
      uVar2 = 0;
      goto LAB_0056af98;
    }
  }
LAB_0056b04c:
  uVar2 = 2;
LAB_0056af98:
  return uVar2 & 0xffffffff;
}


// 0x056b17c (0x2dc bytes)
// strings: 0067d258: 'WANPPPConnection' | 0067d270: '<s:Envelope \r\n    xmlns:s="http://schemas.xmlsoap.org/soap/envelope/" \r\n    s:encodingStyle="http://schemas.xmlsoap.org/soap/encoding/">\r\n  <s:Body>\r\n    <m:%s ' | 0067d368: 'POST /%s HTTP/1.1\r\nHOST: %s:%d\r\nConnection: close\r\nUser-Agent: Mozilla/4.0 (compatible; UPnP/1.0; Windows 9x)\r\nContent-Type: text/xml; charset="utf-8"\r\nContent-' | 0067d248: 'WANIPConnection'

ulonglong FUN_0056b17c(int param_1,ulonglong param_2,ulonglong param_3)

{
  int iVar1;
  uint uVar2;
  undefined *puVar3;
  undefined *puVar6;
  ulonglong uVar4;
  ulonglong uVar5;
  size_t sVar7;
  uint local_870;
  undefined8 local_86c;
  GPiece<16> auStack_860;
  GPiece<16> local_850;
  char acStack_840 [2056];
  
  FUN_0054edb0(&local_86c);
  puVar3 = PTR_DAT_0071b404;
  iVar1 = *(int *)(param_1 + 0x38);
  puVar6 = PTR_DAT_0071b404 + 0xc;
  *(undefined4 *)(iVar1 + 0x2034) = 1;
  *(undefined4 *)(iVar1 + 0x2048) = 0;
  *(undefined4 *)(iVar1 + 0x2038) = 0;
  uVar4 = FUN_0056ab38(puVar6,*(undefined4 *)(iVar1 + 8),iVar1 + 0x2078);
  if (((int)uVar4 == 0) &&
     (uVar5 = FUN_0056ad24(*(int *)(param_1 + 0x38) + 0x2078,*(int *)(param_1 + 0x38) + 0x2878,
                           &local_86c,&local_870), uVar4 = uVar5, (int)uVar5 == 0)) {
    uVar2 = *(uint *)(*(int *)(param_1 + 0x38) + 8);
    if ((uVar2 & *(uint *)(puVar3 + 0xc)) == 0) {
      return uVar5 & 0xffffffff | 0xd6dd;
    }
    if ((uVar2 == 0x1000) || ((uVar2 & 0x800) != 0)) {
      uVar4 = FUN_0056ee38(*(int *)(param_1 + 0x38) + 4,0xb,*(undefined4 *)(param_1 + 0x3c));
      if ((uVar4 == 0) &&
         (iVar1 = *(int *)(param_1 + 0x38), uVar4 = uVar5, *(int *)(iVar1 + 4) != 0)) {
        if (*(int *)(iVar1 + 8) == 0x1000) {
          strcpy(iVar1 + 0x2c78,PTR_s_WANIPConnection_0071b418,0x200);
        }
        else {
          strcpy(iVar1 + 0x2c78,PTR_s_WANPPPConnection_0071b41c,0x200);
        }
        uVar4 = FUN_005500a8(*(undefined4 *)(param_1 + 0x38),local_86c,local_870,local_850);
        if (uVar4 == 0) {
          param_2 = param_2 & 0xffffffff;
          FUN_0054ee84(auStack_860,local_86c);
          snprintf(acStack_840,PTR_s_<s:Envelope_xmlns:s__http:__sche_0071b420,param_2,
                         (ulonglong)*(uint *)(param_1 + 0x38) + 0x2c78 & 0xffffffff,
                         param_3 & 0xffffffff,param_2);
          uVar2 = *(uint *)(param_1 + 0x38);
          sVar7 = strlen(acStack_840);
          snprintf((char *)(uVar2 + 0x2078),PTR_s_POST___s_HTTP_1_1_HOST___s__d_Co_0071b424,
                         (ulonglong)uVar2 + 0x2878 & 0xffffffff,auStack_860,(ulonglong)local_870,
                         sVar7,(ulonglong)uVar2 + 0x2c78 & 0xffffffff,param_2);
          uVar4 = uVar5;
        }
        else {
          FUN_0056ee40(*(undefined4 *)(*(int *)(param_1 + 0x38) + 4));
        }
      }
    }
    else {
      uVar4 = 2;
    }
  }
  return uVar4 & 0xffffffff;
}


// 0x056b458 (0x168 bytes)
// strings: 0067d460: '<NewRemoteHost></NewRemoteHost><NewExternalPort>%d</NewExternalPort><NewProtocol>UDP</NewProtocol><NewInternalPort>%d</NewInternalPort><NewInternalClient>%s</Ne' | 0067d590: 'AddPortMapping'

int FUN_0056b458(undefined8 *param_1,undefined4 param_2,undefined8 param_3,int param_4)

{
  int iVar1;
  GPiece<16> auStack_40;
  
  if (param_1 != (undefined8 *)0x0) {
    if (*(int *)((int)param_1 + 0x1c) != 0) {
      return 0xd6da;
    }
    if (param_4 != 0) {
      iVar1 = FUN_0056a938(param_1);
      if (iVar1 != 0) {
        return 100;
      }
      *(undefined4 *)(*(int *)(param_1 + 7) + 8) = param_2;
      *(undefined4 *)(param_1 + 3) = param_2;
      FUN_0054ee84(auStack_40,*param_1);
      snprintf((char *)(*(int *)(param_1 + 7) + 0x2a78),
                     PTR_s_<NewRemoteHost><_NewRemoteHost><_0071b428,
                     (ulonglong)*(uint *)((int)param_1 + 0x14),(ulonglong)*(uint *)(param_1 + 2),
                     auStack_40);
      iVar1 = FUN_0056b17c(param_1,PTR_s_AddPortMapping_0071b42c,*(int *)(param_1 + 7) + 0x2a78);
      if (iVar1 != 0) {
        return iVar1;
      }
      *(undefined4 *)((int)param_1 + 0x1c) = 0xc;
      FUN_00556a58(*(int *)(param_1 + 7) + 0x14);
      *(int *)(*(int *)(param_1 + 7) + 0x206c) = param_4;
      return 0;
    }
  }
  return 2;
}


// 0x056b5c0 (0x104 bytes)
// strings: 0067d5a0: 'GetExternalIPAddress'

int FUN_0056b5c0(int param_1,undefined4 param_2,int param_3)

{
  int iVar1;
  
  if (param_1 != 0) {
    if (*(int *)(param_1 + 0x1c) != 0) {
      return 0xd6da;
    }
    if (param_3 != 0) {
      iVar1 = FUN_0056a938(param_1);
      if (iVar1 != 0) {
        return 100;
      }
      iVar1 = FUN_0056b17c(param_1,PTR_s_GetExternalIPAddress_0071b430,PTR_DAT_0071b434);
      if (iVar1 != 0) {
        return iVar1;
      }
      *(undefined4 *)(param_1 + 0x1c) = 8;
      FUN_00556a58(*(int *)(param_1 + 0x38) + 0x14);
      iVar1 = *(int *)(param_1 + 0x38);
      *(undefined4 *)(iVar1 + 8) = param_2;
      *(int *)(iVar1 + 0x2064) = param_3;
      return 0;
    }
  }
  return 2;
}


// 0x056b6c4 (0x104 bytes)
// strings: 0067d5c0: 'GetStatusInfo'

int FUN_0056b6c4(int param_1,undefined4 param_2,int param_3)

{
  int iVar1;
  
  if (param_1 != 0) {
    if (*(int *)(param_1 + 0x1c) != 0) {
      return 0xd6da;
    }
    if (param_3 != 0) {
      iVar1 = FUN_0056a938(param_1);
      if (iVar1 != 0) {
        return 100;
      }
      iVar1 = FUN_0056b17c(param_1,PTR_s_GetStatusInfo_0071b438,PTR_DAT_0071b434);
      if (iVar1 != 0) {
        return iVar1;
      }
      *(undefined4 *)(param_1 + 0x1c) = 6;
      FUN_00556a58(*(int *)(param_1 + 0x38) + 0x14);
      iVar1 = *(int *)(param_1 + 0x38);
      *(undefined4 *)(iVar1 + 8) = param_2;
      *(int *)(iVar1 + 0x2060) = param_3;
      return 0;
    }
  }
  return 2;
}


// 0x056b7c8 (0x2a4 bytes)
// strings: 0067d5d0: '<s:Envelope \r\n    xmlns:SOAP-ENV="http://schemas.xmlsoap.org/soap/envelope/" \r\n    s:encodingStyle="http://schemas.xmlsoap.org/soap/encoding/">\r\n  <s:Body>\r\n   ' | 0067d718: 'PortMappingNumberOfEntries' | 0067d738: 'POST /%s HTTP/1.1\r\nHOST: %s:%d\r\nConnection: close\r\nUser-Agent: Mozilla/4.0 (compatible; UPnP/1.0; Windows 9x)\r\nContent-Type: text/xml; charset="utf-8"\r\nContent-'

ulonglong FUN_0056b7c8(int param_1,uint param_2,int param_3)

{
  int iVar1;
  uint uVar2;
  undefined *puVar3;
  longlong lVar4;
  undefined *puVar7;
  ulonglong uVar5;
  ulonglong uVar6;
  size_t sVar8;
  uint local_880;
  undefined8 local_87c;
  GPiece<12> local_874;
  undefined4 uStack_868;
  GPiece<24> auStack_860;
  char acStack_848 [2064];
  
  if (param_1 != 0) {
    uVar5 = 0xd6da;
    if (*(int *)(param_1 + 0x1c) != 0) goto LAB_0056b838;
    if (param_3 != 0) {
      lVar4 = FUN_0056a938(param_1);
      uVar5 = 100;
      if (lVar4 == 0) {
        FUN_0054edb0(&local_87c);
        puVar3 = PTR_DAT_0071b404;
        iVar1 = *(int *)(param_1 + 0x38);
        puVar7 = PTR_DAT_0071b404 + 0xc;
        *(undefined4 *)(iVar1 + 0x2048) = 0;
        *(undefined4 *)(iVar1 + 0x2034) = 0;
        *(undefined4 *)(iVar1 + 0x2038) = 0;
        uVar5 = FUN_0056ab38(puVar7,param_2,iVar1 + 0x2078);
        if ((int)uVar5 == 0) {
          uVar5 = FUN_0056ad24(*(int *)(param_1 + 0x38) + 0x2078,*(int *)(param_1 + 0x38) + 0x2878,
                               &local_87c,&local_880);
          if ((int)uVar5 == 0) {
            uVar5 = uVar5 | 0xd6dd;
            if (((param_2 & *(uint *)(puVar3 + 0xc)) != 0) &&
               (((param_2 == 0x1000 || (uVar5 = 2, (param_2 & 0x800) != 0)) &&
                (uVar5 = FUN_0056ee38(*(int *)(param_1 + 0x38) + 4,10,
                                      *(undefined4 *)(param_1 + 0x3c)), (int)uVar5 == 0)))) {
              iVar1 = *(int *)(param_1 + 0x38);
              if (*(int *)(iVar1 + 4) != 0) {
                uStack_868 = 0;
                uVar6 = FUN_005500a8(*(undefined4 *)(param_1 + 0x38),local_87c,local_880,local_874);
                if (uVar6 != 0) {
                  FUN_0056ee40(*(undefined4 *)(*(int *)(param_1 + 0x38) + 4));
                  uVar5 = uVar6;
                  goto LAB_0056b838;
                }
                FUN_0054ee84(auStack_860,local_87c);
                snprintf(acStack_848,PTR_s_<s:Envelope_xmlns:SOAP_ENV__http_0071b43c,
                               ZEXT48(PTR_s_PortMappingNumberOfEntries_0071b440));
                uVar2 = *(uint *)(param_1 + 0x38);
                sVar8 = strlen(acStack_848);
                snprintf((char *)(uVar2 + 0x2078),
                               PTR_s_POST___s_HTTP_1_1_HOST___s__d_Co_0071b444,
                               (ulonglong)uVar2 + 0x2878 & 0xffffffff,auStack_860,
                               (ulonglong)local_880,sVar8,acStack_848);
                iVar1 = *(int *)(param_1 + 0x38);
              }
              *(undefined4 *)(param_1 + 0x1c) = 10;
              FUN_00556a58(iVar1 + 0x14);
              iVar1 = *(int *)(param_1 + 0x38);
              *(uint *)(iVar1 + 8) = param_2;
              *(int *)(iVar1 + 0x2068) = param_3;
            }
          }
        }
      }
      goto LAB_0056b838;
    }
  }
  uVar5 = 2;
LAB_0056b838:
  return uVar5 & 0xffffffff;
}


// 0x056ba6c (0x34c bytes)
// strings: 0067db30: 'Location' | 0067db40: 'Server' | 0067db18: 'Cache-Control' | 0067db58: 'Date' (raw) | 0067db60: 'Content-length' | 0067db70: 'Content-language' | 0067db88: 'Content-type' | 0067d848: 'http/1.' | 0067d858: 'max-age'

short FUN_0056ba6c(undefined8 param_1,int *param_2)

{
  char *pcVar1;
  undefined *puVar2;
  undefined *puVar3;
  char *__s;
  size_t sVar4;
  short sVar7;
  undefined4 uVar5;
  int iVar6;
  ushort *puVar8;
  char *pcVar9;
  char *pcVar10;
  char *pcVar11;
  int iVar12;
  ulonglong uVar13;
  int *piVar14;
  GPiece<4> local_90;
  int local_8c [13];
  
  puVar3 = PTR_DAT_0071b44c;
  pcVar1 = *(char **)PTR_PTR_0071b448;
  __s = (char *)FUN_005c87ac(param_1,PTR_DAT_0071b44c);
  if (__s == (char *)0x0) {
    return -1;
  }
  sVar7 = -1;
  iVar12 = 0;
  do {
    if (iVar12 == 0) {
      iVar6 = FUN_0056a3d4(__s,PTR_s_http_1__0071b450,7);
      if (iVar6 != 0) {
        return sVar7;
      }
      sVar7 = FUN_005c8a8c(__s + 9,0,10);
      *param_2 = (int)sVar7;
      if (sVar7 != 200) {
        return sVar7;
      }
LAB_0056bb88:
      __s = (char *)FUN_005c87ac(0,puVar3);
    }
    else {
      FUN_0055661c(local_90,PTR_DAT_0071b410);
      puVar2 = PTR_PTR_0071b400;
      iVar6 = *(int *)PTR_PTR_0071b400;
      pcVar10 = __s;
      while ((*(ushort *)(*pcVar10 * 2 + iVar6) & 0x144) != 0) {
        pcVar10 = pcVar10 + 1;
      }
      sVar4 = strlen(__s);
      if (0 < (int)sVar4) {
        puVar8 = (ushort *)(__s[sVar4 - 1] * 2 + iVar6);
        pcVar9 = __s + (sVar4 - 1);
        pcVar11 = __s + (sVar4 - 2);
        while ((*puVar8 & 0x144) != 0) {
          *pcVar9 = '\0';
          sVar4 = sVar4 - 1;
          if (sVar4 == 0) break;
          puVar8 = (ushort *)(*pcVar11 * 2 + *(int *)puVar2);
          pcVar9 = pcVar11;
          pcVar11 = pcVar11 + -1;
        }
      }
      uVar13 = 0;
      piVar14 = local_8c;
      pcVar9 = pcVar1;
      if (pcVar1 != (char *)0x0) {
        do {
          sVar4 = strlen(pcVar9);
          iVar6 = FUN_0056a3d4(pcVar9,__s,sVar4);
          if (iVar6 == 0) break;
          piVar14 = piVar14 + 1;
          uVar13 = uVar13 + 1;
          pcVar9 = (char *)*piVar14;
        } while (pcVar9 != (char *)0x0);
        if ((uVar13 & 0xffffffff) < 10) {
                    /* WARNING: Could not recover jumptable at 0x0056bd14. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          sVar7 = (*(code *)(PTR_DAT_0071b454 + *(int *)(PTR_DAT_0071b454 + (int)(uVar13 << 2))))();
          return sVar7;
        }
        goto LAB_0056bb88;
      }
      uVar5 = FUN_0055661c(local_90,PTR_DAT_0071b458);
      iVar6 = FUN_0056a3d4(uVar5,PTR_s_max_age_0071b45c,7);
      if (iVar6 != 0) goto LAB_0056bb88;
      iVar6 = FUN_005c8a8c(pcVar10,0,10);
      param_2[1] = iVar6;
      __s = (char *)FUN_005c87ac(0,puVar3);
    }
    if (__s == (char *)0x0) {
      return sVar7;
    }
    iVar12 = iVar12 + 1;
  } while( true );
}


// 0x056bedc (0x2bc bytes)
ulonglong FUN_0056bedc(int param_1,undefined4 *param_2)

{
  int iVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  undefined1 *puVar4;
  int iVar5;
  int local_40;
  uint local_3c [3];
  
  uVar2 = FUN_0054f464(**(undefined4 **)(param_1 + 0x38),*(undefined4 **)(param_1 + 0x38) + 0x81e,
                       0x800,&local_40);
  if ((int)uVar2 != 0) {
    *param_2 = 1;
    if ((int)uVar2 == 0xc356) {
      return 0;
    }
    goto LAB_0056bf54;
  }
  if (local_40 == 0) {
    thunk_FUN_00556bb8(*(int *)(param_1 + 0x38) + 0x14,local_3c);
    if (1000 < local_3c[0]) {
      return 0xd6d9;
    }
    goto LAB_0056bf54;
  }
  *(char *)(*(int *)(param_1 + 0x38) + local_40 + 0x2078) = (char)uVar2;
  iVar5 = *(int *)(param_1 + 0x38);
  puVar4 = (undefined1 *)(iVar5 + 0x2078);
  if (*(int *)(iVar5 + 0x2038) == 0) {
    puVar4 = (undefined1 *)FUN_005c8700(iVar5 + 0x2078,PTR_DAT_0071b460);
    if ((puVar4 != (undefined1 *)0x0) ||
       (puVar4 = (undefined1 *)FUN_005c8700(iVar5 + 0x2078,PTR_DAT_0071b464),
       puVar4 != (undefined1 *)0x0)) {
      *puVar4 = 0;
      puVar4 = puVar4 + 4;
      iVar5 = *(int *)(param_1 + 0x38) + 0x2078;
      local_40 = local_40 - ((int)puVar4 - iVar5 & 0xffffU);
      strcpy(*(int *)(param_1 + 0x38) + 0x2c78,iVar5,0x200);
      FUN_0056ba6c(*(int *)(param_1 + 0x38) + 0x2c78,*(int *)(param_1 + 0x38) + 0x1028);
      iVar5 = *(int *)(param_1 + 0x38);
      if (*(int *)(iVar5 + 0x1028) == 200) {
        *(undefined4 *)(iVar5 + 0x2038) = 1;
        goto LAB_0056bfb8;
      }
    }
    uVar2 = 0xd6dc;
LAB_0056bf54:
    return uVar2 & 0xffffffff;
  }
LAB_0056bfb8:
  uVar3 = FUN_0056ee48(*(undefined4 *)(iVar5 + 4),puVar4,local_40,0);
  if (uVar3 == 0) {
    iVar5 = *(int *)(param_1 + 0x38);
    iVar1 = *(int *)(iVar5 + 0x2048) + local_40;
    *(int *)(iVar5 + 0x2048) = iVar1;
    if ((*(int *)(iVar5 + 0x1030) == iVar1) && (0 < *(int *)(iVar5 + 0x1030))) {
      *param_2 = 1;
      goto LAB_0056bf54;
    }
    uVar3 = FUN_0056ee50(*(undefined4 *)(iVar5 + 4),param_2);
  }
  return uVar3 & 0xffffffff;
}


// 0x056c198 (0x220 bytes)
/* WARNING: Removing unreachable block (ram,0x0056c2c4) */
/* WARNING: Removing unreachable block (ram,0x0056c350) */
/* WARNING: Removing unreachable block (ram,0x0056c374) */
/* WARNING: Removing unreachable block (ram,0x0056c394) */
/* WARNING: Removing unreachable block (ram,0x0056c2d4) */
/* WARNING: Removing unreachable block (ram,0x0056c2e0) */
/* WARNING: Removing unreachable block (ram,0x0056c30c) */
/* WARNING: Removing unreachable block (ram,0x0056c304) */
/* WARNING: Removing unreachable block (ram,0x0056c32c) */

int FUN_0056c198(int param_1)

{
  undefined4 *puVar1;
  int iVar2;
  int iVar3;
  GPiece<16> local_40;
  
  iVar3 = FUN_0056bedc(param_1,local_40);
  if (iVar3 == 0) {
    iVar3 = 0;
  }
  else {
    FUN_0056ee40(*(undefined4 *)(*(int *)(param_1 + 0x38) + 4));
    puVar1 = *(undefined4 **)(param_1 + 0x38);
    puVar1[1] = 0;
    FUN_0054fe64(*puVar1);
    puVar1 = *(undefined4 **)(param_1 + 0x38);
    *puVar1 = 0;
    (**(code **)puVar1[0x817])(param_1,iVar3,puVar1[2]);
    iVar2 = *(int *)(param_1 + 0x38);
    *(undefined4 *)(iVar2 + 0x205c) = 0;
    memset(iVar2 + 0x1028,0,0x100c);
    *(undefined4 *)(param_1 + 0x1c) = 0;
  }
  return iVar3;
}


// 0x056c3b8 (0x154 bytes)
/* WARNING: Removing unreachable block (ram,0x0056c490) */
/* WARNING: Removing unreachable block (ram,0x0056c4e0) */
/* WARNING: Removing unreachable block (ram,0x0056c500) */
/* WARNING: Removing unreachable block (ram,0x0056c4cc) */
/* WARNING: Removing unreachable block (ram,0x0056c4d0) */

int FUN_0056c3b8(int param_1,undefined4 *param_2)

{
  int iVar1;
  undefined4 *puVar2;
  GPiece<4> local_30;
  uint local_2c [3];
  
  iVar1 = 2;
  if (param_2 != (undefined4 *)0x0) {
    puVar2 = *(undefined4 **)(param_1 + 0x38);
    *param_2 = 0;
    iVar1 = FUN_0054ea34(*puVar2,local_30);
    if (iVar1 == 0) {
      thunk_FUN_00556bb8(*(int *)(param_1 + 0x38) + 0x14,local_2c);
      if (local_2c[0] < 0x1389) {
        return 0;
      }
      puVar2 = *(undefined4 **)(param_1 + 0x38);
      iVar1 = 0xd6d9;
    }
    else {
      puVar2 = *(undefined4 **)(param_1 + 0x38);
    }
    FUN_0054fe64(*puVar2);
    FUN_0056ee40(*(undefined4 *)(*(int *)(param_1 + 0x38) + 4));
  }
  return iVar1;
}


// 0x056c50c (0x44 bytes)
undefined8 FUN_0056c50c(int param_1)

{
  FUN_005519f0(param_1 + 0x38);
  *(undefined4 *)(param_1 + 0x38) = 0;
  return 0;
}


// 0x056c550 (0x158 bytes)
/* WARNING: Removing unreachable block (ram,0x0056c688) */

undefined8 FUN_0056c550(int param_1)

{
  undefined4 *puVar1;
  int iVar2;
  undefined8 uVar3;
  GPiece<16> local_30;
  
  uVar3 = 0;
  if (*(int *)(param_1 + 0x20) == 0) {
    iVar2 = *(int *)(param_1 + 0x38);
  }
  else {
    iVar2 = FUN_0056bedc(param_1,local_30);
    if (iVar2 == 0) {
      return 0;
    }
    uVar3 = 0xd6dc;
    FUN_0056ee40(*(undefined4 *)(*(int *)(param_1 + 0x38) + 4));
    puVar1 = *(undefined4 **)(param_1 + 0x38);
    puVar1[1] = 0;
    FUN_0054fe64(*puVar1);
    puVar1 = *(undefined4 **)(param_1 + 0x38);
    *puVar1 = 0;
    memset(puVar1 + 0x40a,0,0x100c);
    iVar2 = *(int *)(param_1 + 0x38);
  }
  (*(code *)**(undefined4 **)(iVar2 + 0x2074))(param_1,uVar3,*(undefined4 *)(iVar2 + 8));
  *(undefined4 *)(param_1 + 0x1c) = 0;
  *(undefined4 *)(*(int *)(param_1 + 0x38) + 0x2074) = 0;
  FUN_0056c50c(param_1);
  return uVar3;
}


// 0x056c6a8 (0x328 bytes)
// strings: 0067d8d0: 'urn:schemas-upnp-org:service:Layer3Forwarding:1' | 0067d870: 'M-SEARCH * HTTP/1.1\r\nHost: %s:%d\r\nMan: "ssdp:discover"\r\nST: %s\r\nMX: 1\r\n\r\n' | 0067d8c0: '239.255.255.250' | 0067d900: 'urn:schemas-upnp-org:service:WANCommonInterfaceConfig:1' | 0067d938: 'urn:schemas-upnp-org:service:WANIPConnection:1' | 0067d968: 'urn:schemas-upnp-org:service:WANPPPConnection:1'

ulonglong FUN_0056c6a8(int param_1,uint param_2,int param_3)

{
  int iVar1;
  undefined *puVar2;
  ulonglong uVar3;
  size_t sVar4;
  undefined4 *puVar5;
  ulonglong uVar6;
  GPiece<4> local_60;
  undefined8 local_5c;
  undefined8 local_54;
  GPiece<8> local_4c;
  undefined4 uStack_44;
  undefined4 uStack_40;
  
  if (param_1 != 0) {
    uVar6 = 0xd6da;
    if (*(int *)(param_1 + 0x1c) != 0) goto LAB_0056c768;
    if (param_3 != 0) {
      uVar6 = FUN_0056a938(param_1);
      if ((int)uVar6 != 0) goto LAB_0056c768;
      if (*(int *)PTR_DAT_0071b404 == 0) {
        memset(*(int *)(param_1 + 0x38) + 0x1c,0,0x100c);
        puVar2 = PTR_s_239_255_255_250_0071b46c;
        if (param_2 == 0x40) {
          snprintf((char *)(*(int *)(param_1 + 0x38) + 0x2078),
                         PTR_s_M_SEARCH___HTTP_1_1_Host___s__d_M_0071b468,
                         ZEXT48(PTR_s_239_255_255_250_0071b46c),0x76c,
                         ZEXT48(PTR_s_urn_schemas_upnp_org_service_WAN_0071b474));
        }
        else if (param_2 < 0x41) {
          if (param_2 != 0x20) goto LAB_0056c764;
          snprintf((char *)(*(int *)(param_1 + 0x38) + 0x2078),
                         PTR_s_M_SEARCH___HTTP_1_1_Host___s__d_M_0071b468,
                         ZEXT48(PTR_s_239_255_255_250_0071b46c),0x76c,
                         ZEXT48(PTR_s_urn_schemas_upnp_org_service_Lay_0071b470));
        }
        else if (param_2 == 0x800) {
          snprintf((char *)(*(int *)(param_1 + 0x38) + 0x2078),
                         PTR_s_M_SEARCH___HTTP_1_1_Host___s__d_M_0071b468,
                         ZEXT48(PTR_s_239_255_255_250_0071b46c),0x76c,
                         ZEXT48(PTR_s_urn_schemas_upnp_org_service_WAN_0071b47c));
        }
        else {
          if (param_2 != 0x1000) goto LAB_0056c764;
          snprintf((char *)(*(int *)(param_1 + 0x38) + 0x2078),
                         PTR_s_M_SEARCH___HTTP_1_1_Host___s__d_M_0071b468,
                         ZEXT48(PTR_s_239_255_255_250_0071b46c),0x76c,
                         ZEXT48(PTR_s_urn_schemas_upnp_org_service_WAN_0071b478));
        }
        uStack_40 = 0;
        uStack_44 = 0;
        FUN_0054edb0(&local_54);
        uVar3 = FUN_005500a8(*(undefined4 *)(param_1 + 0x38),local_54,0x76c,local_4c);
        if (uVar3 != 0) {
          return uVar3 & 0xffffffff;
        }
        FUN_0054ef70(&local_5c,puVar2);
        puVar5 = *(undefined4 **)(param_1 + 0x38);
        sVar4 = strlen((char *)(puVar5 + 0x81e));
        uVar3 = FUN_0054fa58(*puVar5,local_5c,0x76c,puVar5 + 0x81e,sVar4,local_60);
        if (uVar3 != 0) {
          puVar5 = *(undefined4 **)(param_1 + 0x38);
LAB_0056c904:
          FUN_0054fe64(*puVar5);
          return uVar3 & 0xffffffff;
        }
        puVar5 = *(undefined4 **)(param_1 + 0x38);
        sVar4 = strlen((char *)(puVar5 + 0x81e));
        if (sVar4 != 0) goto LAB_0056c904;
      }
      else {
        puVar5 = *(undefined4 **)(param_1 + 0x38);
      }
      *(undefined4 *)(param_1 + 0x1c) = 1;
      FUN_00556a58(puVar5 + 5);
      iVar1 = *(int *)(param_1 + 0x38);
      *(uint *)(iVar1 + 8) = param_2;
      *(int *)(iVar1 + 0x2054) = param_3;
      goto LAB_0056c768;
    }
  }
LAB_0056c764:
  uVar6 = 2;
LAB_0056c768:
  return uVar6 & 0xffffffff;
}


// 0x056c9d0 (0x70 bytes)
undefined8 FUN_0056c9d0(int param_1)

{
  uint uVar1;
  undefined8 uVar2;
  
  uVar1 = *(uint *)(*(int *)(param_1 + 0x38) + 0xc);
  if (uVar1 < 10) {
                    /* WARNING: Could not recover jumptable at 0x0056ca18. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar2 = (*(code *)(PTR_DAT_0071b480 + *(int *)(PTR_DAT_0071b480 + uVar1 * 4)))();
    return uVar2;
  }
  return 0;
}


// 0x056cedc (0x104 bytes)
ulonglong FUN_0056cedc(int param_1)

{
  ulonglong uVar1;
  byte in_cr0;
  byte in_cr1;
  byte in_cr2;
  byte in_cr3;
  byte unaff_cr4;
  byte in_cr5;
  byte in_cr6;
  byte in_cr7;
  uint uStack00000008;
  
  uStack00000008 =
       (uint)(in_cr0 & 0xf) << 0x1c | (uint)(in_cr1 & 0xf) << 0x18 | (uint)(in_cr2 & 0xf) << 0x14 |
       (uint)(in_cr3 & 0xf) << 0x10 | (uint)(unaff_cr4 & 0xf) << 0xc | (uint)(in_cr5 & 0xf) << 8 |
       (uint)(in_cr6 & 0xf) << 4 | (uint)(in_cr7 & 0xf);
  uVar1 = 2;
  if (param_1 != 0) {
    if (*(uint *)(param_1 + 0x1c) < 0x14) {
                    /* WARNING: Could not recover jumptable at 0x0056cfdc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar1 = (*(code *)(PTR_DAT_0071b4a4 +
                        *(int *)(PTR_DAT_0071b4a4 + *(uint *)(param_1 + 0x1c) * 4)))();
      return uVar1;
    }
    uVar1 = 0;
    if (*(int *)(param_1 + 0x38) != 0) {
      uVar1 = FUN_0056c9d0(param_1);
      uVar1 = uVar1 & 0xffffffff;
    }
  }
  return uVar1;
}


// 0x056eac4 (0x168 bytes)
// strings: 0067da98: '<NewRemoteHost></NewRemoteHost><NewExternalPort>%d</NewExternalPort><NewProtocol>UDP</NewProtocol>' | 0067db00: 'DeletePortMapping'

int FUN_0056eac4(int param_1)

{
  undefined *__format;
  undefined4 uVar1;
  int iVar2;
  
  iVar2 = 2;
  if (param_1 != 0) {
    if ((*(int *)(param_1 + 0x1c) == 0) && (*(int *)(param_1 + 0x38) == 0)) {
      iVar2 = FUN_0054edf0(*(undefined8 *)(param_1 + 8));
      if ((iVar2 == 0) && (*(int *)(param_1 + 0x14) != 0)) {
        uVar1 = *(undefined4 *)(param_1 + 0x18);
        if (*(int *)(param_1 + 0x1c) != 0) {
          return 0xd6da;
        }
        iVar2 = FUN_0056a938(param_1);
        __format = PTR_s_<NewRemoteHost><_NewRemoteHost><_0071b4e4;
        if (iVar2 != 0) {
          return 100;
        }
        if (*(int *)(param_1 + 0x20) == 0) {
          iVar2 = *(int *)(param_1 + 0x38);
          uVar1 = 0x11;
        }
        else {
          iVar2 = *(int *)(param_1 + 0x38);
          *(undefined4 *)(iVar2 + 8) = uVar1;
          snprintf((char *)(iVar2 + 0x2a78),__format,(ulonglong)*(uint *)(param_1 + 0x14));
          iVar2 = FUN_0056b17c(param_1,PTR_s_DeletePortMapping_0071b4e8,
                               *(int *)(param_1 + 0x38) + 0x2a78);
          if (iVar2 != 0) {
            return iVar2;
          }
          iVar2 = *(int *)(param_1 + 0x38);
          uVar1 = 0x10;
        }
        *(undefined4 *)(param_1 + 0x1c) = uVar1;
        FUN_00556a58(iVar2 + 0x14);
        *(undefined **)(*(int *)(param_1 + 0x38) + 0x2074) = PTR_PTR_0071b4e0;
        FUN_00550d54();
        FUN_0056cedc(param_1);
      }
      iVar2 = 0;
    }
    else {
      iVar2 = 0xd6da;
    }
  }
  return iVar2;
}


// 0x056ec2c (0xa0 bytes)
undefined8 FUN_0056ec2c(int param_1)

{
  int iVar1;
  undefined *puVar2;
  undefined8 uVar3;
  GPiece<16> local_10;
  
  uVar3 = 2;
  if (param_1 != 0) {
    FUN_0056eac4();
    if (*(int **)(param_1 + 0x38) != (int *)0x0) {
      iVar1 = **(int **)(param_1 + 0x38);
      if (iVar1 != 0) {
        FUN_0054fe64(iVar1);
      }
      FUN_0056c50c(param_1);
    }
    puVar2 = PTR_DAT_0071b404;
    *(undefined4 *)(PTR_DAT_0071b404 + 8) = 0;
    *(undefined4 *)puVar2 = 0;
    *(undefined4 *)(puVar2 + 0x1320) = 0;
    *(undefined4 *)(puVar2 + 4) = 0;
    FUN_005519f0(local_10);
    uVar3 = 0;
  }
  return uVar3;
}


// 0x056eccc (0x16c bytes)
ulonglong FUN_0056eccc(undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  ulonglong uVar1;
  ulonglong uVar2;
  GPiece<16> local_40;
  
  uVar2 = 2;
  if (param_1 != (undefined4 *)0x0) {
    *param_1 = 0;
    uVar2 = FUN_00551de8(local_40,0x48);
    if ((int)uVar2 == 0) {
      uVar1 = FUN_00551de8(0x38,0x2e78);
      uVar2 = uVar1;
      if ((int)uVar1 == 0) {
        uVar2 = FUN_0054e8dc(0);
        if (uVar2 == 0) {
          *param_1 = 0;
          uRam00000044 = param_4;
          uRam00000010 = param_2;
          uRam00000040 = param_3;
          return uVar1 & 0xffffffff;
        }
        FUN_005519f0(0x38);
      }
      FUN_005519f0(local_40);
      return uVar2 & 0xffffffff;
    }
  }
  return uVar2 & 0xffffffff;
}


// 0x056ee38 (0x8 bytes)
undefined8 FUN_0056ee38(void)

{
  return 4;
}


// 0x056ee40 (0x8 bytes)
undefined8 FUN_0056ee40(void)

{
  return 4;
}


// 0x056ee48 (0x8 bytes)
undefined8 FUN_0056ee48(void)

{
  return 4;
}


// 0x056ee50 (0x8 bytes)
undefined8 FUN_0056ee50(void)

{
  return 4;
}


// 0x056ee58 (0x8 bytes)
undefined8 FUN_0056ee58(void)

{
  return 4;
}


// 0x056ee60 (0x8 bytes)
undefined8 FUN_0056ee60(void)

{
  return 4;
}


// 0x056ee68 (0x3c bytes)
undefined8 FUN_0056ee68(int param_1)

{
  int iVar1;
  undefined8 uVar2;
  
  uVar2 = 2;
  if (param_1 != 0) {
    iVar1 = *(int *)(param_1 + 0xc);
    while (iVar1 != 0) {
      *(undefined4 *)(iVar1 + 0x28) = 0;
      iVar1 = *(int *)(iVar1 + 0x2c);
    }
    uVar2 = 0;
  }
  return uVar2;
}


// 0x056eea4 (0x120 bytes)
undefined4 FUN_0056eea4(int param_1)

{
  bool bVar1;
  bool bVar2;
  uint uVar3;
  uint *puVar4;
  undefined4 uVar5;
  int iVar6;
  uint uVar7;
  uint local_30;
  uint uStack_2c;
  
  uVar5 = 2;
  if (param_1 != 0) {
    puVar4 = *(uint **)(param_1 + 0xc);
    if (puVar4 != (uint *)0x0) {
      uVar7 = 0;
      bVar1 = false;
      bVar2 = false;
      do {
        if (*puVar4 < 2) {
          bVar1 = true;
          uVar3 = uVar7;
        }
        else {
          if (*puVar4 != 2) {
            return 0xd6df;
          }
          if (uVar7 == 0) {
            local_30 = puVar4[4];
            uStack_2c = puVar4[5];
            uVar3 = puVar4[6];
          }
          else {
            iVar6 = FUN_0054ee38(CONCAT44(local_30,uStack_2c),*(undefined8 *)(puVar4 + 4));
            if ((iVar6 == 0) || (uVar3 = puVar4[6], puVar4[6] != uVar7)) {
              bVar2 = true;
              uVar3 = uVar7;
            }
          }
        }
        uVar7 = uVar3;
        puVar4 = (uint *)puVar4[0xb];
      } while (puVar4 != (uint *)0x0);
      if (bVar1) {
        return 0xd6da;
      }
      if (bVar2) {
        return 0xd6e0;
      }
    }
    uVar5 = 0;
  }
  return uVar5;
}


// 0x056efc4 (0xb8 bytes)
undefined8 FUN_0056efc4(int param_1,undefined8 param_2,int param_3)

{
  int iVar1;
  undefined8 uVar2;
  int iVar3;
  undefined8 uStack00000038;
  
  uVar2 = 2;
  if (param_1 != 0) {
    uStack00000038 = param_2;
    for (iVar1 = *(int *)(param_1 + 0xc); iVar1 != 0; iVar1 = *(int *)(iVar1 + 0x2c)) {
      iVar3 = FUN_0054ee38(uStack00000038,*(undefined8 *)(iVar1 + 4));
      if ((iVar3 != 0) && (*(int *)(iVar1 + 0xc) == param_3)) {
        return 1;
      }
    }
    uVar2 = 0;
  }
  return uVar2;
}


// 0x056f07c (0x1c8 bytes)
undefined8 FUN_0056f07c(int param_1,uint *param_2)

{
  uint *puVar1;
  uint uVar2;
  int iVar3;
  uint *puVar4;
  uint *puVar5;
  
  if (param_2 != (uint *)0x0) {
    param_2[10] = 0;
    *param_2 = 0;
    param_2[1] = 0;
    param_2[2] = 0;
    param_2[3] = 0;
    param_2[4] = 0;
    param_2[5] = 0;
    param_2[6] = 0;
    param_2[7] = 0;
    param_2[8] = 0;
    param_2[9] = 0;
    if (param_1 != 0) {
      puVar1 = *(uint **)(param_1 + 0xc);
      param_2[10] = 0xd6df;
      if (puVar1 != (uint *)0x0) {
        puVar4 = param_2 + 6;
        puVar5 = param_2;
        do {
          if (*puVar1 < 2) {
            param_2[10] = 0xd6da;
            param_2[9] = 0;
            return 0;
          }
          if ((*puVar1 == 2) && (param_2[10] != 0xd6da)) {
            *puVar5 = puVar1[4];
            puVar5[1] = puVar1[5];
            puVar5 = puVar5 + 2;
            *puVar4 = puVar1[6];
            puVar4 = puVar4 + 1;
            if (param_2[9] == 0) {
              param_2[10] = 0;
              param_2[9] = 1;
            }
            else {
              iVar3 = FUN_0054ee38(*(undefined8 *)param_2,*(undefined8 *)(puVar1 + 4));
              if ((iVar3 == 0) || (param_2[6] != puVar1[6])) {
                param_2[10] = 0xd6e0;
              }
              uVar2 = param_2[9];
              param_2[9] = uVar2 + 1;
              if (uVar2 + 1 == 3) {
                return 0;
              }
            }
          }
          puVar1 = (uint *)puVar1[0xb];
        } while (puVar1 != (uint *)0x0);
      }
      return 0;
    }
  }
  return 2;
}


// 0x056f244 (0x1b8 bytes)
undefined8 FUN_0056f244(int param_1,int *param_2,int *param_3)

{
  int *piVar1;
  int iVar2;
  undefined8 uVar3;
  
  uVar3 = 2;
  if ((param_1 != 0) && (uVar3 = 0xd6da, *(int *)(param_1 + 0xc) != 0)) {
    uVar3 = 0xd6df;
    FUN_0054edb0(param_2);
    piVar1 = *(int **)(param_1 + 0xc);
    *param_3 = 0;
    if (piVar1 != (int *)0x0) {
      uVar3 = 0xd6df;
      do {
        if (*piVar1 == 2) {
          iVar2 = FUN_0054edf0(*(undefined8 *)param_2);
          if ((iVar2 == 0) && (*param_3 != 0)) {
            iVar2 = FUN_0054ee38(*(undefined8 *)param_2,*(undefined8 *)(piVar1 + 4));
            if ((iVar2 == 0) || (*param_3 != piVar1[6])) {
              return 0xd6e0;
            }
          }
          else {
            uVar3 = 0;
            *param_2 = piVar1[4];
            param_2[1] = piVar1[5];
            *param_3 = piVar1[6];
          }
        }
        else if (*piVar1 == 1) {
          FUN_0054edb0(param_2);
          *param_3 = 0;
          return 0xd6da;
        }
        piVar1 = (int *)piVar1[0xb];
      } while (piVar1 != (int *)0x0);
    }
  }
  return uVar3;
}


// 0x056f3fc (0x278 bytes)
/* WARNING: Removing unreachable block (ram,0x0056f604) */

int FUN_0056f3fc(undefined4 *param_1)

{
  bool bVar1;
  bool bVar2;
  int iVar3;
  undefined4 uVar4;
  int *piVar5;
  GPiece<8> local_90;
  GPiece<4> auStack_88;
  uint local_84;
  undefined8 local_80 [3];
  
  iVar3 = 2;
  if (param_1 != (undefined4 *)0x0) {
    bVar1 = false;
    for (piVar5 = (int *)param_1[3]; bVar2 = bVar1, piVar5 != (int *)0x0;
        piVar5 = (int *)piVar5[0xb]) {
      while (*piVar5 == 1) {
        uVar4 = *param_1;
        thunk_FUN_00556bb8(piVar5 + 7,&local_84);
        if (799 < local_84) {
          if ((uint)piVar5[9] < 5) {
            iVar3 = FUN_0054fa58(uVar4,*(undefined8 *)(piVar5 + 1),piVar5[3],auStack_88,4,local_90);
            if (iVar3 != 0) {
              return iVar3;
            }
          }
          else {
            *piVar5 = 3;
          }
        }
        bVar1 = true;
        piVar5 = (int *)piVar5[0xb];
        bVar2 = true;
        if (piVar5 == (int *)0x0) goto LAB_0056f4f0;
      }
      if (*piVar5 == 2) {
        uVar4 = *param_1;
        thunk_FUN_00556bb8(piVar5 + 7,&local_84);
        if (19999 < local_84) {
          FUN_0054fa58(uVar4,*(undefined8 *)(piVar5 + 1),piVar5[3],auStack_88,4,local_90);
          thunk_FUN_00556a58(piVar5 + 7);
        }
      }
      bVar1 = bVar2;
    }
LAB_0056f4f0:
    if ((param_1[1] == 0) || (bVar1)) {
      iVar3 = 0;
    }
    else {
      uVar4 = FUN_0056f244(param_1,local_80,&local_84);
      (**(code **)param_1[1])(param_1,uVar4,local_80[0],local_84,param_1[2]);
      iVar3 = 0;
      param_1[2] = 0;
      param_1[1] = 0;
    }
  }
  return iVar3;
}


// 0x056f674 (0x134 bytes)
undefined8 FUN_0056f674(int param_1,undefined8 param_2,int param_3,undefined1 *param_4,int param_5)

{
  int *piVar1;
  undefined8 uVar2;
  int iVar3;
  undefined8 uStack00000038;
  ushort local_40 [12];
  
  uVar2 = 2;
  if (param_1 != 0) {
    if (param_5 == 6) {
      uStack00000038 = param_2;
      for (piVar1 = *(int **)(param_1 + 0xc); piVar1 != (int *)0x0; piVar1 = (int *)piVar1[0xb]) {
        iVar3 = FUN_0054ee38(uStack00000038,*(undefined8 *)(piVar1 + 1));
        if (((iVar3 != 0) && (piVar1[3] == param_3)) && (*piVar1 == 1)) {
          *(undefined1 *)(piVar1 + 4) = *param_4;
          *(undefined1 *)((int)piVar1 + 0x11) = param_4[1];
          *(undefined1 *)((int)piVar1 + 0x12) = param_4[2];
          *(undefined1 *)((int)piVar1 + 0x13) = param_4[3];
          FUN_00552728(param_4 + 4,local_40);
          piVar1[6] = (uint)local_40[0];
          FUN_00556a58(piVar1 + 7);
          *piVar1 = 2;
          return 0;
        }
      }
    }
    uVar2 = 0;
  }
  return uVar2;
}


// 0x056f7a8 (0x15c bytes)
int FUN_0056f7a8(int param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int iVar5;
  undefined4 *local_40 [4];
  
  if ((param_1 != 0) && (param_2 != 0)) {
    iVar1 = *(int *)(param_1 + 0xc);
    if (iVar1 != 0) {
      do {
        iVar5 = FUN_00551de8(local_40,0x30);
        if (iVar5 != 0) {
          return iVar5;
        }
        uVar2 = *(undefined4 *)(param_2 + 0xc);
        uVar3 = *(undefined4 *)(iVar1 + 0xc);
        local_40[0][1] = *(undefined4 *)(iVar1 + 4);
        uVar4 = *(undefined4 *)(iVar1 + 8);
        local_40[0][0xb] = uVar2;
        local_40[0][2] = uVar4;
        local_40[0][3] = uVar3;
        *local_40[0] = 1;
        *(undefined4 **)(param_2 + 0xc) = local_40[0];
        local_40[0][10] = 1;
        thunk_FUN_00556a58(local_40[0] + 7);
        iVar1 = *(int *)(iVar1 + 0x2c);
      } while (iVar1 != 0);
    }
    *(undefined4 *)(param_2 + 8) = param_4;
    *(undefined4 *)(param_2 + 4) = param_3;
    return 0;
  }
  return 2;
}


// 0x056f904 (0x174 bytes)
int FUN_0056f904(int param_1,undefined8 param_2,int param_3,undefined4 param_4,undefined4 param_5)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 uStack00000038;
  undefined4 uStack0000003c;
  undefined4 *local_40 [6];
  
  iVar2 = 2;
  if (param_1 != 0) {
    local_40[0] = *(undefined4 **)(param_1 + 0xc);
    _uStack00000038 = param_2;
    if (local_40[0] == (undefined4 *)0x0) {
      local_40[0] = (undefined4 *)0x0;
    }
    else {
      do {
        while (iVar2 = FUN_0054ee38(_uStack00000038,*(undefined8 *)(local_40[0] + 1)), iVar2 == 0) {
          local_40[0] = (undefined4 *)local_40[0][0xb];
          if (local_40[0] == (undefined4 *)0x0) goto LAB_0056f9c0;
        }
        if (local_40[0][3] == param_3) goto LAB_0056f9dc;
        local_40[0] = (undefined4 *)local_40[0][0xb];
      } while (local_40[0] != (undefined4 *)0x0);
    }
LAB_0056f9c0:
    iVar2 = FUN_0054edf0(_uStack00000038);
    if ((iVar2 == 0) && (param_3 != 0)) {
      iVar2 = FUN_00551de8(local_40,0x30);
      if (iVar2 == 0) {
        uVar1 = *(undefined4 *)(param_1 + 0xc);
        local_40[0][1] = uStack00000038;
        local_40[0][0xb] = uVar1;
        *local_40[0] = 1;
        local_40[0][2] = uStack0000003c;
        local_40[0][3] = param_3;
        *(undefined4 **)(param_1 + 0xc) = local_40[0];
        local_40[0][10] = 1;
        thunk_FUN_00556a58(local_40[0] + 7);
        *(undefined4 *)(param_1 + 8) = param_5;
        *(undefined4 *)(param_1 + 4) = param_4;
      }
    }
    else {
LAB_0056f9dc:
      iVar2 = 0;
    }
  }
  return iVar2;
}


// 0x056fa78 (0x70 bytes)
int FUN_0056fa78(undefined4 *param_1,int param_2)

{
  int iVar1;
  
  iVar1 = 2;
  if (((param_1 != (undefined4 *)0x0) && (param_2 != 0)) &&
     (iVar1 = FUN_00551de8(param_1,0x10), iVar1 == 0)) {
    *(int *)*param_1 = param_2;
  }
  return iVar1;
}


// 0x056fae8 (0x88 bytes)
undefined8 FUN_0056fae8(int param_1)

{
  int iVar1;
  undefined8 uVar2;
  int iStack00000030;
  GPiece<16> local_20;
  
  uVar2 = 2;
  if (param_1 != 0) {
    iVar1 = *(int *)(param_1 + 0xc);
    iStack00000030 = param_1;
    while (iVar1 != 0) {
      iVar1 = *(int *)(iVar1 + 0x2c);
      FUN_005519f0(local_20);
    }
    FUN_005519f0(&stack0x00000030);
    uVar2 = 0;
  }
  return uVar2;
}


// 0x056fb70 (0x128 bytes)
void FUN_0056fb70(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined *puVar11;
  undefined *puVar12;
  undefined *puVar13;
  undefined *puVar14;
  undefined *puVar15;
  undefined *puVar16;
  undefined *puVar17;
  undefined *puVar18;
  
  puVar17 = PTR_PTR_0071b530;
  puVar16 = PTR_PTR_0071b52c;
  puVar15 = PTR_PTR_0071b528;
  puVar14 = PTR_PTR_0071b524;
  puVar13 = PTR_PTR_0071b520;
  puVar12 = PTR_PTR_0071b51c;
  puVar11 = PTR_PTR_0071b518;
  puVar9 = PTR_PTR_0071b510;
  puVar8 = PTR_PTR_0071b50c;
  puVar7 = PTR_PTR_0071b508;
  puVar6 = PTR_PTR_0071b504;
  puVar5 = PTR_PTR_0071b500;
  puVar4 = PTR_PTR_0071b4fc;
  puVar3 = PTR_PTR_0071b4f8;
  puVar2 = PTR_PTR_0071b4f4;
  puVar1 = PTR_DAT_0071b4ec;
  *(undefined **)PTR_DAT_0071b4ec = PTR_PTR_0071b4f0;
  puVar10 = PTR_PTR_0071b514;
  *(undefined **)(puVar1 + 4) = puVar2;
  *(undefined **)(puVar1 + 8) = puVar3;
  *(undefined **)(puVar1 + 0xc) = puVar4;
  *(undefined **)(puVar1 + 0x10) = puVar5;
  *(undefined **)(puVar1 + 0x14) = puVar6;
  *(undefined **)(puVar1 + 0x18) = puVar7;
  *(undefined **)(puVar1 + 0x1c) = puVar8;
  *(undefined **)(puVar1 + 0x28) = puVar11;
  puVar18 = PTR_DAT_0071b55c;
  *(undefined **)(puVar1 + 0x24) = puVar10;
  puVar11 = PTR_PTR_0071b558;
  *(undefined **)(puVar1 + 0x20) = puVar9;
  *(undefined **)(puVar1 + 0x2c) = puVar12;
  *(undefined **)(puVar1 + 0x34) = puVar13;
  *(undefined **)(puVar1 + 0x38) = puVar14;
  *(undefined **)(puVar1 + 0x3c) = puVar15;
  *(undefined **)(puVar1 + 0x30) = puVar16;
  *(undefined **)(puVar1 + 0x40) = puVar17;
  puVar10 = PTR_PTR_0071b554;
  puVar9 = PTR_PTR_0071b550;
  puVar8 = PTR_PTR_0071b54c;
  puVar7 = PTR_PTR_0071b548;
  puVar6 = PTR_PTR_0071b544;
  puVar5 = PTR_PTR_0071b540;
  puVar4 = PTR_PTR_0071b53c;
  puVar3 = PTR_PTR_0071b538;
  puVar2 = PTR_PTR_0071b534;
  *(undefined **)(puVar1 + 0x68) = puVar11;
  *(undefined **)puVar18 = puVar1;
  *(undefined **)(puVar1 + 0x44) = puVar2;
  *(undefined **)(puVar1 + 0x48) = puVar3;
  *(undefined **)(puVar1 + 0x4c) = puVar4;
  *(undefined **)(puVar1 + 0x50) = puVar5;
  *(undefined **)(puVar1 + 0x54) = puVar6;
  *(undefined **)(puVar1 + 0x58) = puVar7;
  *(undefined **)(puVar1 + 0x5c) = puVar8;
  *(undefined **)(puVar1 + 0x60) = puVar9;
  *(undefined **)(puVar1 + 100) = puVar10;
  return;
}


// 0x056fc98 (0x24 bytes)
undefined8 FUN_0056fc98(void)

{
  FUN_0056fb70();
  return 0;
}


// 0x056fcbc (0x24 bytes)
undefined8 FUN_0056fcbc(void)

{
  FUN_0056fb70();
  return 0;
}


// 0x056fce0 (0x50 bytes)
undefined8 FUN_0056fce0(int *param_1)

{
  undefined8 uVar1;
  
  uVar1 = 0;
  if (*param_1 + 0x100U < 0xff) {
    *param_1 = *(int *)(PTR_DAT_0071b4ec + (*param_1 + 0x101) * 0xc + 0x6c);
  }
  else {
    uVar1 = 2;
    *param_1 = -1;
  }
  return uVar1;
}


// 0x056fd30 (0x20 bytes)
ulonglong FUN_0056fd30(undefined8 param_1)

{
  uint uStack00000030;
  
  uStack00000030 = (uint)((ulonglong)param_1 >> 0x20);
  return (((longlong)((int)uStack00000030 >> 0x1f) ^ (ulonglong)uStack00000030) -
         (longlong)((int)uStack00000030 >> 0x1f)) - 1 >> 0x1f & 1;
}


// 0x056fd50 (0x2c bytes)
ulonglong FUN_0056fd50(undefined8 param_1,undefined8 param_2)

{
  ulonglong uVar1;
  uint uStack00000030;
  uint uStack00000038;
  
  uStack00000038 = (uint)((ulonglong)param_2 >> 0x20);
  uStack00000030 = (uint)((ulonglong)param_1 >> 0x20);
  uVar1 = (ulonglong)((int)(uStack00000030 ^ uStack00000038) >> 0x1f);
  return ((uVar1 ^ (uStack00000030 ^ uStack00000038)) - uVar1) - 1 >> 0x1f & 1;
}


// 0x056fd7c (0x8 bytes)
undefined8 FUN_0056fd7c(void)

{
  return 0;
}


// 0x056fd84 (0x2c bytes)
undefined8 FUN_0056fd84(undefined4 *param_1)

{
  undefined8 uVar1;
  
  uVar1 = 5;
  if (*(int *)(PTR_DAT_0071b4ec + 0xc6c) == 1) {
    uVar1 = 0;
    *param_1 = 0xffffffff;
  }
  return uVar1;
}


// 0x056fdb0 (0xac bytes)
int FUN_0056fdb0(int param_1,undefined4 *param_2)

{
  int iVar1;
  int iStack00000030;
  
  if ((param_1 != -1) && (param_1 < 0)) {
    iStack00000030 = param_1;
    iVar1 = FUN_0056fce0(&stack0x00000030);
    if (iVar1 != 0) {
      return iVar1;
    }
    if (iStack00000030 != -1) {
      *param_2 = *(undefined4 *)(PTR_DAT_0071b4ec + param_1 * 0xc + 0xc80);
      return 0;
    }
  }
  return 2;
}


// 0x056fe5c (0x8 bytes)
undefined8 FUN_0056fe5c(void)

{
  return 0;
}


// 0x056fe64 (0x28 bytes)
undefined4 FUN_0056fe64(void)

{
  undefined4 uVar1;
  
  uVar1 = FUN_0057109c();
  return uVar1;
}


// 0x056fe8c (0x6c bytes)
uint FUN_0056fe8c(undefined4 param_1,undefined4 *param_2)

{
  uint uVar1;
  uint uVar2;
  
  uVar2 = 2;
  if (param_2 != (undefined4 *)0x0) {
    *param_2 = 0;
    uVar2 = FUN_005710c4(param_1,param_2);
    uVar1 = (int)(uVar2 ^ 0xcf0e) >> 0x1f;
    if (uVar2 != 0) {
      uVar2 = uVar2 & (int)(uVar1 - (uVar1 ^ uVar2 ^ 0xcf0e)) >> 0x1f;
    }
  }
  return uVar2;
}


// 0x056fef8 (0x58 bytes)
undefined4 FUN_0056fef8(int param_1,undefined4 param_2)

{
  undefined4 uVar1;
  
  uVar1 = 5;
  if (*(int *)(PTR_DAT_0071b4ec + 0xc6c) == 1) {
    uVar1 = 2;
    if (param_1 != 0) {
      uVar1 = FUN_00571cb8(param_2,param_1);
    }
  }
  return uVar1;
}


// 0x056ff50 (0x50 bytes)
undefined4 FUN_0056ff50(int param_1)

{
  undefined4 uVar1;
  
  uVar1 = 5;
  if (*(int *)(PTR_DAT_0071b4ec + 0xc6c) == 1) {
    uVar1 = 2;
    if (param_1 != 0) {
      uVar1 = FUN_00571d50(param_1);
    }
  }
  return uVar1;
}


// 0x056ffa0 (0x10 bytes)
void FUN_0056ffa0(undefined4 *param_1)

{
  param_1[1] = 0;
  *param_1 = 0;
  return;
}


// 0x056ffb0 (0x80 bytes)
uint FUN_0056ffb0(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  uint uVar1;
  uint uVar2;
  
  uVar2 = 5;
  if (*(int *)(PTR_DAT_0071b4ec + 0xc6c) == 1) {
    uVar2 = 2;
    if (-1 < param_1) {
      uVar2 = FUN_00571214(param_1,param_3,param_2,param_4);
      uVar1 = (int)(uVar2 ^ 0xcf0e) >> 0x1f;
      if (uVar2 != 0) {
        uVar2 = uVar2 & (int)(uVar1 - (uVar1 ^ uVar2 ^ 0xcf0e)) >> 0x1f;
      }
    }
  }
  return uVar2;
}


// 0x0570030 (0x110 bytes)
int FUN_00570030(int param_1,undefined4 param_2,undefined4 *param_3,int param_4,undefined4 param_5,
                undefined4 *param_6)

{
  int iVar1;
  GPiece<4> local_20;
  undefined4 local_1c [3];
  
  iVar1 = 5;
  if (*(int *)(PTR_DAT_0071b4ec + 0xc6c) == 1) {
    if ((((param_1 < 0) || (param_3 == (undefined4 *)0x0)) || (param_4 == 0)) ||
       (param_6 == (undefined4 *)0x0)) {
      return 2;
    }
    *param_6 = 0;
    iVar1 = FUN_005710ec(param_1,param_4,param_5,local_20,param_2,local_1c);
    if (((iVar1 != 0) && (iVar1 != 0xcf0e)) && (iVar1 != 0xcf27)) {
      return iVar1;
    }
    iVar1 = 0;
    *param_3 = local_1c[0];
    *param_6 = 0;
  }
  return iVar1;
}


// 0x0570140 (0x88 bytes)
uint FUN_00570140(int param_1,undefined4 param_2,undefined8 param_3,undefined4 param_4)

{
  uint uVar1;
  undefined4 uVar2;
  uint uVar3;
  undefined4 uStack00000040;
  
  uStack00000040 = (undefined4)((ulonglong)param_3 >> 0x20);
  uVar2 = uStack00000040;
  uVar3 = 5;
  if (*(int *)(PTR_DAT_0071b4ec + 0xc6c) == 1) {
    uVar3 = 2;
    if (-1 < param_1) {
      _uStack00000040 = param_3;
      uVar3 = FUN_00571468(param_1,uVar2,param_2,param_4);
      uVar1 = (int)(uVar3 ^ 0xcf0e) >> 0x1f;
      if (uVar3 != 0) {
        uVar3 = uVar3 & (int)(uVar1 - (uVar1 ^ uVar3 ^ 0xcf0e)) >> 0x1f;
      }
    }
  }
  return uVar3;
}


// 0x05701c8 (0xa4 bytes)
undefined4 FUN_005701c8(int param_1,undefined8 param_2,int param_3,int param_4,undefined4 *param_5)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uStack00000038;
  
  uStack00000038 = (undefined4)((ulonglong)param_2 >> 0x20);
  uVar2 = uStack00000038;
  uVar1 = 5;
  if (*(int *)(PTR_DAT_0071b4ec + 0xc6c) == 1) {
    if (-1 < param_1) {
      if ((param_4 != 0) && (param_5 != (undefined4 *)0x0)) {
        *param_5 = 0;
        if (param_3 != 0) {
          _uStack00000038 = param_2;
          uVar2 = FUN_00571074(param_1,param_4,uVar2,param_3,param_5);
          return uVar2;
        }
      }
    }
    uVar1 = 2;
  }
  return uVar1;
}


// 0x057026c (0xd4 bytes)
int FUN_0057026c(int param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  int iStack00000030;
  
  iVar1 = 5;
  if (*(int *)(PTR_DAT_0071b4ec + 0xc6c) == 1) {
    iVar1 = 2;
    if ((param_1 != -1) &&
       ((iStack00000030 = param_1, -1 < param_1 ||
        (iVar1 = FUN_0056fce0(&stack0x00000030), iVar1 == 0)))) {
      iVar1 = FUN_00571074(iStack00000030,param_2,0,0,param_3);
      if ((iVar1 == 0) || (iVar1 == 0xcf0e)) {
        return 0;
      }
    }
  }
  return iVar1;
}


// 0x0570340 (0xc8 bytes)
int FUN_00570340(int param_1,undefined8 param_2,int param_3,int param_4,undefined4 param_5,
                undefined4 *param_6)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 uStack00000038;
  GPiece<24> local_20;
  
  uStack00000038 = (undefined4)((ulonglong)param_2 >> 0x20);
  uVar1 = uStack00000038;
  iVar2 = 5;
  if (*(int *)(PTR_DAT_0071b4ec + 0xc6c) == 1) {
    if (((-1 < param_1) && (param_4 != 0)) && (param_6 != (undefined4 *)0x0)) {
      *param_6 = 0;
      if (param_3 != 0) {
        _uStack00000038 = param_2;
        iVar2 = FUN_00571580(param_1,param_4,param_5,uVar1,param_3,local_20);
        if (iVar2 != 0) {
          return iVar2;
        }
        *param_6 = 0;
        return 0;
      }
    }
    iVar2 = 2;
  }
  return iVar2;
}


// 0x0570408 (0x124 bytes)
int FUN_00570408(int param_1,int param_2,undefined4 param_3,undefined4 *param_4)

{
  int iVar1;
  int iStack00000030;
  GPiece<24> local_30;
  
  iVar1 = 5;
  if (*(int *)(PTR_DAT_0071b4ec + 0xc6c) == 1) {
    if (((param_1 == -1) || (param_2 == 0)) || (param_4 == (undefined4 *)0x0)) {
      return 2;
    }
    iStack00000030 = param_1;
    if ((-1 < param_1) || (iVar1 = FUN_0056fce0(&stack0x00000030), iVar1 == 0)) {
      iVar1 = FUN_00571878(iStack00000030,param_2,param_3,local_30);
      if ((iVar1 != 0) && (iVar1 != 0xcf0e)) {
        return iVar1;
      }
      iVar1 = 0;
      *param_4 = 0;
    }
  }
  return iVar1;
}


// 0x057052c (0xec bytes)
void FUN_0057052c(int param_1)

{
  undefined *puVar1;
  int iVar2;
  bool bVar3;
  int *piVar4;
  longlong lVar5;
  
  puVar1 = PTR_DAT_0071b4ec;
  if (param_1 != -1) {
    if (*(int *)(PTR_DAT_0071b4ec + 0xc6c) != 0) {
      if (param_1 < 0) {
        if (param_1 + 0x100U < 0xff) {
          iVar2 = (param_1 + 0x101U) * 0x10 + (param_1 + 0x101U & 0x3fffffff) * -4;
          if (*(int *)(PTR_DAT_0071b4ec + iVar2 + 0x6c) != -0x101) {
            FUN_00572444(*(int *)(PTR_DAT_0071b4ec + iVar2 + 0x6c));
          }
          bVar3 = false;
          lVar5 = 0xff;
          *(undefined4 *)(puVar1 + iVar2 + 0x6c) = 0xffffffff;
          piVar4 = (int *)(puVar1 + 0x78);
          do {
            if (*piVar4 != -1) {
              bVar3 = true;
            }
            lVar5 = lVar5 + -1;
            piVar4 = piVar4 + 3;
          } while (lVar5 != 0);
          if (!bVar3) {
            FUN_00572444(*(undefined4 *)(puVar1 + 0x6c));
            *(undefined4 *)(puVar1 + 0x6c) = 0xffffffff;
          }
        }
      }
      else {
        FUN_00572444(param_1);
      }
    }
  }
  return;
}


// 0x0570618 (0x1f4 bytes)
int FUN_00570618(int param_1,undefined4 *param_2)

{
  undefined *puVar1;
  int iVar2;
  int iStack00000030;
  GPiece<24> local_40;
  
  puVar1 = PTR_DAT_0071b4ec;
  if (*(int *)(PTR_DAT_0071b4ec + 0xc6c) != 1) {
    return 5;
  }
  if ((param_1 == -1) || (param_2 == (undefined4 *)0x0)) {
    return 2;
  }
  *param_2 = 0;
  iStack00000030 = param_1;
  if (param_1 < 0) {
    iVar2 = FUN_0056fce0(&stack0x00000030);
    if (iVar2 != 0) {
      return iVar2;
    }
    if (iStack00000030 == -0x101) {
      iVar2 = (param_1 + 0x101U) * 0x10 + (param_1 + 0x101U & 0x3fffffff) * -4;
      FUN_00571bb8(*(undefined4 *)(puVar1 + 0x6c),puVar1 + iVar2 + 0x6c);
      iStack00000030 = *(int *)(puVar1 + iVar2 + 0x6c);
      if (iStack00000030 == -1) {
        *(undefined4 *)(puVar1 + iVar2 + 0x6c) = 0xfffffeff;
        *param_2 = 0;
        return 0;
      }
      iVar2 = FUN_0057241c(iStack00000030,1);
      if ((iVar2 != 0) || (iVar2 = FUN_00571c90(iStack00000030,1), iVar2 != 0)) {
        FUN_0057052c(iStack00000030);
        return iVar2;
      }
    }
  }
  iVar2 = FUN_005723f4(iStack00000030,local_40);
  if ((iVar2 != 0) && (iVar2 != 0xcf0e)) {
    return iVar2;
  }
  *param_2 = 0;
  return 0;
}


// 0x057080c (0x210 bytes)
int FUN_0057080c(int param_1,int param_2,undefined4 param_3,undefined4 *param_4)

{
  undefined *puVar1;
  int iVar2;
  int iStack00000030;
  GPiece<24> local_50;
  
  puVar1 = PTR_DAT_0071b4ec;
  if (*(int *)(PTR_DAT_0071b4ec + 0xc6c) != 1) {
    return 5;
  }
  if (((param_1 == -1) || (param_2 == 0)) || (param_4 == (undefined4 *)0x0)) {
    return 2;
  }
  iStack00000030 = param_1;
  if (param_1 < 0) {
    iVar2 = FUN_0056fce0(&stack0x00000030);
    if (iVar2 != 0) {
      return iVar2;
    }
    if (iStack00000030 == -0x101) {
      iVar2 = (param_1 + 0x101U) * 0x10 + (param_1 + 0x101U & 0x3fffffff) * -4;
      FUN_00571bb8(*(undefined4 *)(puVar1 + 0x6c),puVar1 + iVar2 + 0x6c);
      iStack00000030 = *(int *)(puVar1 + iVar2 + 0x6c);
      if (iStack00000030 == -1) {
        *(undefined4 *)(puVar1 + iVar2 + 0x6c) = 0xfffffeff;
        *param_4 = 0;
        return 0;
      }
      iVar2 = FUN_0057241c(iStack00000030,1);
      if ((iVar2 != 0) || (iVar2 = FUN_00571c90(iStack00000030,1), iVar2 != 0)) {
        FUN_0057052c(iStack00000030);
        return iVar2;
      }
    }
  }
  iVar2 = FUN_00571a64(iStack00000030,param_2,param_3,local_50);
  if (iVar2 == 0) {
    iVar2 = 0xc356;
  }
  else if (iVar2 == 0xcf0e) {
    iVar2 = 0;
    *param_4 = 0;
  }
  return iVar2;
}


// 0x0570a1c (0x424 bytes)
int FUN_00570a1c(int *param_1,undefined8 param_2,int *param_3,int *param_4,undefined4 *param_5)

{
  undefined *puVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  longlong lVar5;
  int iStack00000038;
  GPiece<24> local_60;
  
  puVar1 = PTR_DAT_0071b4ec;
  iStack00000038 = (int)((ulonglong)param_2 >> 0x20);
  iVar3 = iStack00000038;
  if (param_1 == (int *)0x0) {
    return 2;
  }
  *param_1 = -1;
  if (*(int *)(puVar1 + 0xc6c) != 1) {
    return 5;
  }
  if (param_4 == (int *)0x0) {
    return 2;
  }
  if (param_5 == (undefined4 *)0x0) {
    return 2;
  }
  iVar2 = *param_4;
  *param_5 = 0;
  _iStack00000038 = param_2;
  if (iVar2 == 0) {
    if (*param_3 == 0) {
      return 2;
    }
    if (iStack00000038 == 0) {
      return 2;
    }
    iVar2 = FUN_0057175c(local_60);
    if (iVar2 != 0) {
      return iVar2;
    }
    if (param_4[2] != 1) {
      iVar2 = FUN_005728a8(0xffffffff,iVar3,*param_3);
joined_r0x00570c94:
      if (iVar2 != 0) goto LAB_00570bec;
      goto LAB_00570b48;
    }
    iVar2 = FUN_0057241c(0xffffffff,1);
    if ((iVar2 != 0) || (iVar2 = FUN_00571c90(0xffffffff,1), iVar2 != 0)) goto LAB_00570bec;
    iVar2 = FUN_005728a8(0xffffffff,iVar3,*param_3);
    if (iVar2 == 0) goto LAB_00570b48;
    if (1 < iVar2 - 0xcf0eU) goto LAB_00570bec;
  }
  else {
    if (iVar2 == 1) {
      if (iStack00000038 != 0) {
        return 2;
      }
      iVar3 = FUN_005716e4(local_60);
      if (iVar3 != 0) {
        return iVar3;
      }
      iVar2 = FUN_00571f34(0xffffffff,param_3);
      if (iVar2 != 0) goto LAB_00570bec;
      iVar2 = FUN_00572384(0xffffffff,1);
      goto joined_r0x00570c94;
    }
    if (iVar2 == 2) {
      if (iStack00000038 != 0) {
        return 2;
      }
      iVar3 = *param_3;
      if (iVar3 == 0) {
        return 2;
      }
      if (*(int *)(puVar1 + 0x6c) == -1) {
        iVar3 = FUN_0057175c(puVar1 + 0x6c);
        if (iVar3 != 0) {
          return iVar3;
        }
        iVar3 = FUN_00571e90(*(undefined4 *)(puVar1 + 0x6c),*param_3);
        if (((iVar3 != 0) || (iVar3 = FUN_00571c54(*(undefined4 *)(puVar1 + 0x6c),0x20), iVar3 != 0)
            ) || (iVar3 = FUN_0057241c(*(undefined4 *)(puVar1 + 0x6c),1), iVar3 != 0)) {
          FUN_0057052c(*(undefined4 *)(puVar1 + 0x6c));
          *(undefined4 *)(puVar1 + 0x6c) = 0xffffffff;
          return iVar3;
        }
        iVar3 = FUN_00571c90(*(undefined4 *)(puVar1 + 0x6c),1);
        if (iVar3 != 0) {
          FUN_0057052c(*(undefined4 *)(puVar1 + 0x6c));
          return iVar3;
        }
        *(int *)(puVar1 + 0x70) = *param_3;
        iVar3 = *param_3;
      }
      if (*(int *)(puVar1 + 0x70) == iVar3) {
        iVar3 = 1;
        lVar5 = 0xff;
        piVar4 = (int *)(puVar1 + 0x78);
        do {
          if (*piVar4 == -1) {
            *param_1 = iVar3 + -0x101;
            *(undefined4 *)(puVar1 + iVar3 * 0xc + 0x6c) = 0xfffffeff;
            break;
          }
          iVar3 = iVar3 + 1;
          lVar5 = lVar5 + -1;
          piVar4 = piVar4 + 3;
        } while (lVar5 != 0);
      }
      if (*param_1 != -1) {
        *param_5 = 1;
        return 0;
      }
      return 50000;
    }
    if (iVar2 != 3) {
      return 4;
    }
    iVar3 = FUN_00571664(local_60);
    if (iVar3 != 0) {
      return iVar3;
    }
LAB_00570b48:
    *param_5 = 1;
  }
  iVar2 = FUN_0057241c(0xffffffff,1);
  if (iVar2 == 0) {
    *param_1 = -1;
    return 0;
  }
LAB_00570bec:
  FUN_0057052c(0xffffffff);
  return iVar2;
}


// 0x0570e40 (0x7c bytes)
void FUN_00570e40(void)

{
  int iVar1;
  undefined *puVar2;
  int *piVar3;
  int *piVar4;
  int *piVar5;
  
  puVar2 = PTR_DAT_0071b4ec;
  piVar3 = (int *)(PTR_DAT_0071b4ec + 0xc6c);
  piVar4 = (int *)(PTR_DAT_0071b4ec + 0x6c);
  do {
    piVar5 = piVar4 + 3;
    iVar1 = *piVar4;
    if ((iVar1 != -1) && (iVar1 != -0x101)) {
      FUN_0057052c(iVar1);
    }
    piVar4 = piVar5;
  } while (piVar5 != piVar3);
  FUN_005724ac();
  *(undefined4 *)(puVar2 + 0xc6c) = 0;
  return;
}


// 0x0570ebc (0x90 bytes)
int FUN_00570ebc(void)

{
  undefined *puVar1;
  int iVar2;
  undefined4 *puVar3;
  longlong lVar4;
  
  puVar1 = PTR_DAT_0071b4ec;
  iVar2 = 0xc351;
  if ((*(int *)(PTR_DAT_0071b4ec + 0xc6c) == 0) && (iVar2 = FUN_005724d4(), iVar2 == 0)) {
    lVar4 = 0x100;
    puVar3 = (undefined4 *)(puVar1 + 0x6c);
    do {
      *puVar3 = 0xffffffff;
      lVar4 = lVar4 + -1;
      puVar3 = puVar3 + 3;
    } while (lVar4 != 0);
    *(undefined4 *)(puVar1 + 0xc6c) = 1;
    return 0;
  }
  return iVar2;
}


// 0x0570f4c (0x3c bytes)
undefined8 FUN_00570f4c(undefined4 *param_1,undefined8 param_2)

{
  undefined4 uVar1;
  
  uVar1 = FUN_0055bcec(param_2);
  *param_1 = uVar1;
  return 0;
}


// 0x0570f88 (0x30 bytes)
undefined8 FUN_00570f88(undefined8 param_1,undefined8 param_2)

{
  undefined4 uVar1;
  undefined4 uStack00000038;
  
  uStack00000038 = (undefined4)((ulonglong)param_2 >> 0x20);
  uVar1 = uStack00000038;
  _uStack00000038 = param_2;
  FUN_0055bde8(param_1,uVar1);
  return 0;
}


// 0x0570fb8 (0x3c bytes)
undefined8 FUN_00570fb8(undefined8 param_1,undefined8 param_2)

{
  undefined4 uVar1;
  undefined4 uStack00000038;
  
  uStack00000038 = (undefined4)((ulonglong)param_2 >> 0x20);
  uVar1 = uStack00000038;
  _uStack00000038 = param_2;
  FUN_0055bde8(param_1,uVar1);
  return param_1;
}


// 0x0570ff4 (0x4c bytes)
undefined8 FUN_00570ff4(undefined1 *param_1,undefined1 *param_2,undefined1 *param_3)

{
  if (((param_1 != (undefined1 *)0x0) && (param_2 != (undefined1 *)0x0)) &&
     (param_3 != (undefined1 *)0x0)) {
    *param_1 = 3;
    *param_2 = 5;
    *param_3 = 0;
    return 0;
  }
  return 2;
}


// 0x0571040 (0xc bytes)
// strings: 0067dc38: 'rt_socket  ReleaseVersion 3.05.201103091800'

undefined4 FUN_00571040(void)

{
  return *(undefined4 *)PTR_PTR_0071b560;
}


// 0x057104c (0x28 bytes)
undefined4 FUN_0057104c(void)

{
  undefined4 uVar1;
  
  uVar1 = FUN_0057254c();
  return uVar1;
}


// 0x0571074 (0x28 bytes)
undefined4 FUN_00571074(void)

{
  undefined4 uVar1;
  
  uVar1 = FUN_00572944();
  return uVar1;
}


// 0x057109c (0x28 bytes)
undefined4 FUN_0057109c(void)

{
  undefined4 uVar1;
  
  uVar1 = FUN_00572ae0();
  return uVar1;
}


// 0x05710c4 (0x28 bytes)
undefined4 FUN_005710c4(void)

{
  undefined4 uVar1;
  
  uVar1 = FUN_00572c90();
  return uVar1;
}


// 0x05710ec (0x128 bytes)
undefined4
FUN_005710ec(int param_1,void *param_2,size_t param_3,ssize_t *param_4,char *param_5,uint *param_6)

{
  ssize_t sVar1;
  undefined4 uVar2;
  socklen_t local_40;
  sockaddr asStack_3c [2];
  
  if ((((param_2 != (void *)0x0) && (param_4 != (ssize_t *)0x0)) && (param_5 != (char *)0x0)) &&
     (param_6 != (uint *)0x0)) {
    if (param_3 == 0) {
      uVar2 = 0;
      *param_4 = 0;
    }
    else {
      local_40 = 0x10;
      sVar1 = recvfrom(param_1,param_2,param_3,0,asStack_3c,&local_40);
      if (-1 < sVar1) {
        *param_4 = sVar1;
        *(undefined4 *)param_5 = asStack_3c[0].sa_data.piece<2,4>();
        *param_6 = (uint)(ushort)asStack_3c[0].sa_data.piece<0,2>();
        return 0;
      }
      *param_4 = 0;
      param_5[0] = '\0';
      param_5[1] = '\0';
      param_5[2] = '\0';
      param_5[3] = '\0';
      *param_6 = 0;
      uVar2 = FUN_00572554();
    }
    return uVar2;
  }
  return 2;
}


// 0x0571214 (0x254 bytes)
undefined4 FUN_00571214(int param_1,char *param_2,undefined4 *param_3,uint *param_4)

{
  ssize_t sVar1;
  undefined4 uVar2;
  socklen_t local_8a0;
  sockaddr sStack_89c;
  undefined2 local_888;
  undefined2 local_886;
  GPiece<20> auStack_868;
  char cStack_854;
  undefined1 uStack_850;
  undefined1 uStack_84f;
  undefined1 uStack_84e;
  undefined1 uStack_84d;
  
  param_2[0] = '\0';
  param_2[1] = '\0';
  param_2[2] = '\0';
  param_2[3] = '\0';
  if ((param_3 == (undefined4 *)0x0) || (*param_3 = 0, param_4 == (uint *)0x0)) {
    uVar2 = 2;
  }
  else {
    *param_4 = 0;
    local_8a0 = 0x10;
    sVar1 = recvfrom(param_1,auStack_868,0x800,0,&sStack_89c,&local_8a0);
    if (sVar1 == -1) {
      uVar2 = FUN_00572554();
    }
    else {
      if (sVar1 == 0x34) {
        local_888 = CONCAT11(uStack_850,uStack_84f);
        local_886 = CONCAT11(uStack_84e,uStack_84d);
        if ((cStack_854 == '\0') && (local_888 == -0x5433)) {
          *param_4 = (uint)local_886;
          *(undefined4 *)param_2 = sStack_89c.sa_data.piece<2,4>();
          *param_3 = 1;
          return 0;
        }
      }
      uVar2 = 0;
    }
  }
  return uVar2;
}


// 0x0571468 (0x118 bytes)
undefined4 FUN_00571468(int param_1,int param_2,undefined4 *param_3,undefined2 param_4)

{
  ssize_t sVar1;
  undefined4 uVar2;
  uint uVar3;
  ushort *puVar4;
  longlong lVar5;
  sockaddr sStack_40;
  GPiece<2> local_30;
  ushort local_2e;
  undefined2 local_2c;
  undefined2 local_2a;
  GPiece<16> auStack_20;
  
  if ((param_3 == (undefined4 *)0x0) || (*param_3 = 0, param_2 == 0)) {
    uVar2 = 2;
  }
  else {
    lVar5 = 0x10;
    sStack_40.sa_family.piece<1,1>() = 2;
    auStack_20 = (GPiece<16>)0x0;
    uVar3 = 0;
    local_30[0] = 8;
    local_2c = 0xabcd;
    puVar4 = (ushort *)local_30;
    do {
      uVar3 = uVar3 + *puVar4;
      lVar5 = lVar5 + -1;
      puVar4 = puVar4 + 1;
    } while (lVar5 != 0);
    lVar5 = (longlong)((int)uVar3 >> 0x10) + ((ulonglong)uVar3 & 0xffff);
    local_2e = ~((short)lVar5 + (short)((ulonglong)lVar5 >> 0x10));
    sStack_40.sa_data.piece<2,4>() = param_2;
    local_2a = param_4;
    sVar1 = sendto(param_1,local_30,0x20,0,&sStack_40,0x10);
    if (sVar1 != -1) {
      *param_3 = 1;
      return 0;
    }
    uVar2 = FUN_00572554();
  }
  return uVar2;
}


// 0x0571580 (0xe4 bytes)
undefined4
FUN_00571580(int param_1,void *param_2,size_t param_3,undefined4 param_4,undefined2 param_5,
            ssize_t *param_6)

{
  ssize_t sVar1;
  undefined4 uVar2;
  sockaddr sStack_20;
  
  if (param_2 != (void *)0x0) {
    if (param_6 != (ssize_t *)0x0) {
      uVar2 = 0;
      if (param_3 == 0) {
        *param_6 = 0;
      }
      else {
        sStack_20.sa_family.piece<1,1>() = 2;
        sStack_20.sa_data.piece<0,2>() = param_5;
        sStack_20.sa_data.piece<2,4>() = param_4;
        sVar1 = sendto(param_1,param_2,param_3,0,&sStack_20,0x10);
        if (sVar1 != -1) {
          *param_6 = sVar1;
          return 0;
        }
        *param_6 = 0;
        uVar2 = FUN_00572554();
      }
      return uVar2;
    }
  }
  return 2;
}


// 0x0571664 (0x80 bytes)
undefined4 FUN_00571664(int *param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  uVar2 = 2;
  if (param_1 != (int *)0x0) {
    iVar1 = socket(2,3,1);
    uVar2 = 0;
    *param_1 = iVar1;
    if (iVar1 == -1) {
      uVar2 = FUN_00572554();
      return uVar2;
    }
  }
  return uVar2;
}


// 0x05716e4 (0x78 bytes)
undefined4 FUN_005716e4(int *param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = socket(2,2,0);
  if (iVar1 != -1) {
    *param_1 = iVar1;
    return 0;
  }
  *param_1 = -1;
  uVar2 = FUN_00572554();
  return uVar2;
}


// 0x057175c (0x78 bytes)
undefined4 FUN_0057175c(int *param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = socket(2,1,0);
  if (iVar1 != -1) {
    *param_1 = iVar1;
    return 0;
  }
  *param_1 = -1;
  uVar2 = FUN_00572554();
  return uVar2;
}


// 0x05717d4 (0xa4 bytes)
undefined4 FUN_005717d4(int param_1,void *param_2,size_t param_3,ssize_t *param_4)

{
  ssize_t sVar1;
  undefined4 uVar2;
  
  if ((param_2 == (void *)0x0) || (param_4 == (ssize_t *)0x0)) {
    *param_4 = 0;
    return 2;
  }
  if (param_3 == 0) {
    *param_4 = 0;
    return 0;
  }
  sVar1 = send(param_1,param_2,param_3,0);
  if (-1 < sVar1) {
    *param_4 = sVar1;
    return 0;
  }
  *param_4 = 0;
  uVar2 = FUN_00572554();
  return uVar2;
}


// 0x0571878 (0xa4 bytes)
undefined4 FUN_00571878(int param_1,void *param_2,size_t param_3,ssize_t *param_4)

{
  ssize_t sVar1;
  undefined4 uVar2;
  
  if ((param_2 == (void *)0x0) || (param_4 == (ssize_t *)0x0)) {
    *param_4 = 0;
    return 2;
  }
  if (param_3 == 0) {
    *param_4 = 0;
    return 0;
  }
  sVar1 = send(param_1,param_2,param_3,0);
  if (-1 < sVar1) {
    *param_4 = sVar1;
    return 0;
  }
  *param_4 = 0;
  uVar2 = FUN_00572554();
  return uVar2;
}


// 0x057191c (0xa4 bytes)
undefined4 FUN_0057191c(int param_1,void *param_2,size_t param_3,ssize_t *param_4)

{
  ssize_t sVar1;
  undefined4 uVar2;
  
  if ((param_2 == (void *)0x0) || (param_4 == (ssize_t *)0x0)) {
    *param_4 = 0;
    return 2;
  }
  if (param_3 == 0) {
    *param_4 = 0;
    return 0;
  }
  sVar1 = recv(param_1,param_2,param_3,0);
  if (-1 < sVar1) {
    *param_4 = sVar1;
    return 0;
  }
  *param_4 = 0;
  uVar2 = FUN_00572554();
  return uVar2;
}


// 0x05719c0 (0xa4 bytes)
undefined4 FUN_005719c0(int param_1,void *param_2,size_t param_3,ssize_t *param_4)

{
  ssize_t sVar1;
  undefined4 uVar2;
  
  if ((param_2 == (void *)0x0) || (param_4 == (ssize_t *)0x0)) {
    *param_4 = 0;
    return 2;
  }
  if (param_3 == 0) {
    *param_4 = 0;
    return 0;
  }
  sVar1 = recv(param_1,param_2,param_3,2);
  if (-1 < sVar1) {
    *param_4 = sVar1;
    return 0;
  }
  *param_4 = 0;
  uVar2 = FUN_00572554();
  return uVar2;
}


// 0x0571a64 (0xa4 bytes)
undefined4 FUN_00571a64(int param_1,void *param_2,size_t param_3,ssize_t *param_4)

{
  ssize_t sVar1;
  undefined4 uVar2;
  
  if ((param_2 == (void *)0x0) || (param_4 == (ssize_t *)0x0)) {
    *param_4 = 0;
    return 2;
  }
  if (param_3 == 0) {
    *param_4 = 0;
    return 0;
  }
  sVar1 = recv(param_1,param_2,param_3,0);
  if (-1 < sVar1) {
    *param_4 = sVar1;
    return 0;
  }
  *param_4 = 0;
  uVar2 = FUN_00572554();
  return uVar2;
}


// 0x0571b08 (0xb0 bytes)
undefined4 FUN_00571b08(int param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  sockaddr sStack_10;
  
  sStack_10.sa_data[0xd] = '\0';
  sStack_10.sa_family.piece<0,1>() = 0;
  sStack_10.sa_data[6] = '\0';
  sStack_10.sa_data[7] = '\0';
  sStack_10.sa_data[8] = '\0';
  sStack_10.sa_data[9] = '\0';
  sStack_10.sa_data[10] = '\0';
  sStack_10.sa_data[0xb] = '\0';
  sStack_10.sa_data[0xc] = '\0';
  sStack_10.sa_family.piece<1,1>() = 2;
  sStack_10.sa_data.piece<0,2>() = SUB42(*(undefined4 *)(param_2 + 4),0);
  iVar1 = connect(param_1,&sStack_10,0x10);
  uVar2 = 0;
  if (iVar1 != 0) {
    uVar2 = FUN_00572554();
  }
  return uVar2;
}


// 0x0571bb8 (0x9c bytes)
undefined4 FUN_00571bb8(int param_1,int *param_2)

{
  int iVar1;
  undefined4 uVar2;
  socklen_t local_30;
  sockaddr asStack_2c [2];
  
  uVar2 = 2;
  if (param_2 != (int *)0x0) {
    local_30 = 0x10;
    iVar1 = accept(param_1,asStack_2c,&local_30);
    uVar2 = 0;
    if (iVar1 < 0) {
      param_2[2] = 0;
      *param_2 = -1;
      uVar2 = FUN_00572554();
    }
    else {
      *param_2 = iVar1;
      param_2[2] = asStack_2c[0].sa_data.piece<2,4>();
      param_2[1] = (uint)(ushort)asStack_2c[0].sa_data.piece<0,2>();
    }
  }
  return uVar2;
}


// 0x0571c54 (0x3c bytes)
undefined4 FUN_00571c54(int param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = listen(param_1,param_2);
  uVar2 = 0;
  if (iVar1 != 0) {
    uVar2 = FUN_00572554();
  }
  return uVar2;
}


// 0x0571c90 (0x28 bytes)
undefined4 FUN_00571c90(void)

{
  undefined4 uVar1;
  
  uVar1 = FUN_005732f0();
  return uVar1;
}


// 0x0571cb8 (0x98 bytes)
undefined4 FUN_00571cb8(undefined4 *param_1,char *param_2)

{
  hostent *phVar1;
  undefined4 uVar2;
  undefined4 local_1c [5];
  
  uVar2 = 2;
  if (param_2 != (char *)0x0) {
    phVar1 = gethostbyname(param_2);
    if (phVar1 == (hostent *)0x0) {
      uVar2 = FUN_00572554();
      return uVar2;
    }
    memcpy(local_1c,*phVar1->h_addr_list,phVar1->h_length);
    uVar2 = 0;
    *param_1 = local_1c[0];
  }
  return uVar2;
}


// 0x0571d50 (0x28 bytes)
undefined4 FUN_00571d50(void)

{
  undefined4 uVar1;
  
  uVar1 = FUN_00572e88();
  return uVar1;
}


// 0x0571d78 (0x28 bytes)
undefined4 FUN_00571d78(void)

{
  undefined4 uVar1;
  
  uVar1 = FUN_00572fb8();
  return uVar1;
}


// 0x0571da0 (0x28 bytes)
undefined4 FUN_00571da0(void)

{
  undefined4 uVar1;
  
  uVar1 = FUN_005731dc();
  return uVar1;
}


// 0x0571dc8 (0x28 bytes)
undefined4 FUN_00571dc8(void)

{
  undefined4 uVar1;
  
  uVar1 = FUN_005731dc();
  return uVar1;
}


// 0x0571df0 (0xa0 bytes)
undefined4 FUN_00571df0(int param_1,undefined4 param_2,undefined2 param_3)

{
  int iVar1;
  undefined4 uVar2;
  sockaddr sStack_10;
  
  sStack_10.sa_data[0xd] = '\0';
  sStack_10.sa_family.piece<0,1>() = 0;
  sStack_10.sa_data[6] = '\0';
  sStack_10.sa_data[7] = '\0';
  sStack_10.sa_data[8] = '\0';
  sStack_10.sa_data[9] = '\0';
  sStack_10.sa_data[10] = '\0';
  sStack_10.sa_data[0xb] = '\0';
  sStack_10.sa_data[0xc] = '\0';
  sStack_10.sa_family.piece<1,1>() = 2;
  sStack_10.sa_data.piece<0,2>() = param_3;
  sStack_10.sa_data.piece<2,4>() = param_2;
  iVar1 = bind(param_1,&sStack_10,0x10);
  uVar2 = 0;
  if (iVar1 != 0) {
    uVar2 = FUN_00572554();
  }
  return uVar2;
}


// 0x0571e90 (0xa4 bytes)
undefined4 FUN_00571e90(int param_1,undefined2 param_2)

{
  int iVar1;
  undefined4 uVar2;
  sockaddr sStack_10;
  
  sStack_10.sa_data[0xd] = '\0';
  sStack_10.sa_family.piece<0,1>() = 0;
  sStack_10.sa_data[6] = '\0';
  sStack_10.sa_data[7] = '\0';
  sStack_10.sa_data[8] = '\0';
  sStack_10.sa_data[9] = '\0';
  sStack_10.sa_data[10] = '\0';
  sStack_10.sa_data[0xb] = '\0';
  sStack_10.sa_data[0xc] = '\0';
  sStack_10.sa_family.piece<1,1>() = 2;
  sStack_10.sa_data[2] = '\0';
  sStack_10.sa_data[3] = '\0';
  sStack_10.sa_data[4] = '\0';
  sStack_10.sa_data[5] = '\0';
  sStack_10.sa_data.piece<0,2>() = param_2;
  iVar1 = bind(param_1,&sStack_10,0x10);
  uVar2 = 0;
  if (iVar1 != 0) {
    uVar2 = FUN_00572554();
  }
  return uVar2;
}


// 0x0571f34 (0x180 bytes)
undefined4 FUN_00571f34(int param_1,uint *param_2)

{
  int iVar1;
  undefined4 uVar2;
  socklen_t local_50;
  char local_4c [4];
  int local_48;
  sockaddr sStack_44;
  sockaddr local_34;
  
  local_34.sa_data[0xd] = '\0';
  local_34.sa_family.piece<0,1>() = 0;
  local_34.sa_data[0] = '\0';
  local_34.sa_data[1] = '\0';
  local_34.sa_data[6] = '\0';
  local_34.sa_data[7] = '\0';
  local_34.sa_data[8] = '\0';
  local_34.sa_data[9] = '\0';
  local_34.sa_data[10] = '\0';
  local_34.sa_data[0xb] = '\0';
  local_34.sa_data[0xc] = '\0';
  local_34.sa_data[2] = '\0';
  local_34.sa_data[3] = '\0';
  local_34.sa_data[4] = '\0';
  local_34.sa_data[5] = '\0';
  local_34.sa_family.piece<1,1>() = 2;
  FUN_005c1ef4(&local_48);
  if ((local_48 == 1) && (iVar1 = FUN_00571d50(local_4c), iVar1 == 0)) {
    local_34.sa_data[2] = local_4c[0];
    local_34.sa_data[3] = local_4c[1];
    local_34.sa_data[4] = local_4c[2];
    local_34.sa_data[5] = local_4c[3];
  }
  local_34.sa_data.piece<0,2>() = SUB42(*param_2,0);
  iVar1 = bind(param_1,&local_34,0x10);
  if (iVar1 == 0) {
    if (*param_2 != 0) {
      return 0;
    }
    local_50 = 0x10;
    iVar1 = getsockname(param_1,&sStack_44,&local_50);
    if (iVar1 == 0) {
      *param_2 = (uint)(ushort)sStack_44.sa_data.piece<0,2>();
      return 0;
    }
  }
  uVar2 = FUN_00572554();
  return uVar2;
}


// 0x05720b4 (0x94 bytes)
undefined4 FUN_005720b4(int param_1,undefined4 *param_2)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 local_20;
  socklen_t local_1c [5];
  
  local_1c[0] = 4;
  iVar1 = getsockopt(param_1,0xffff,0x1001,&local_20,local_1c);
  if (iVar1 == 0) {
    *param_2 = local_20;
    return 0;
  }
  *param_2 = 0;
  uVar2 = FUN_00572554();
  return uVar2;
}


// 0x0572148 (0x94 bytes)
undefined4 FUN_00572148(int param_1,undefined4 *param_2)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 local_20;
  socklen_t local_1c [5];
  
  local_1c[0] = 4;
  iVar1 = getsockopt(param_1,0xffff,0x1002,&local_20,local_1c);
  if (iVar1 == 0) {
    *param_2 = local_20;
    return 0;
  }
  *param_2 = 0;
  uVar2 = FUN_00572554();
  return uVar2;
}


// 0x05721dc (0xa0 bytes)
undefined4 FUN_005721dc(int param_1,undefined4 *param_2)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 local_20;
  socklen_t local_1c [5];
  
  uVar2 = 2;
  if (param_2 != (undefined4 *)0x0) {
    local_1c[0] = 4;
    iVar1 = getsockopt(param_1,0xffff,0x1008,&local_20,local_1c);
    uVar2 = 0;
    if (iVar1 != 0) {
      uVar2 = FUN_00572554();
      return uVar2;
    }
    *param_2 = local_20;
  }
  return uVar2;
}


// 0x057227c (0x58 bytes)
undefined4 FUN_0057227c(int param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 local_10 [4];
  
  local_10[0] = param_2;
  iVar1 = setsockopt(param_1,0xffff,0x1002,local_10,4);
  uVar2 = 0;
  if (iVar1 != 0) {
    uVar2 = FUN_00572554();
  }
  return uVar2;
}


// 0x05722d4 (0x58 bytes)
undefined4 FUN_005722d4(int param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 local_10 [4];
  
  local_10[0] = param_2;
  iVar1 = setsockopt(param_1,0xffff,0x1001,local_10,4);
  uVar2 = 0;
  if (iVar1 != 0) {
    uVar2 = FUN_00572554();
  }
  return uVar2;
}


// 0x057232c (0x58 bytes)
undefined4 FUN_0057232c(int param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 local_10 [4];
  
  local_10[0] = param_2;
  iVar1 = setsockopt(param_1,0xffff,4,local_10,4);
  uVar2 = 0;
  if (iVar1 != 0) {
    uVar2 = FUN_00572554();
  }
  return uVar2;
}


// 0x0572384 (0x70 bytes)
undefined4 FUN_00572384(int param_1,uint param_2)

{
  uint uVar1;
  int iVar2;
  undefined4 uVar3;
  uint local_10 [4];
  
  uVar1 = (int)(param_2 ^ 1) >> 0x1f;
  local_10[0] = ((uVar1 ^ param_2 ^ 1) - uVar1) - 1 >> 0x1f;
  iVar2 = setsockopt(param_1,0xffff,0x20,local_10,4);
  uVar3 = 0;
  if (iVar2 != 0) {
    uVar3 = FUN_00572554();
  }
  return uVar3;
}


// 0x05723f4 (0x28 bytes)
undefined4 FUN_005723f4(void)

{
  undefined4 uVar1;
  
  uVar1 = FUN_0057253c();
  return uVar1;
}


// 0x057241c (0x28 bytes)
undefined4 FUN_0057241c(void)

{
  undefined4 uVar1;
  
  uVar1 = FUN_005732a0();
  return uVar1;
}


// 0x0572444 (0x28 bytes)
undefined4 FUN_00572444(void)

{
  undefined4 uVar1;
  
  uVar1 = FUN_00573340();
  return uVar1;
}


// 0x057246c (0x40 bytes)
undefined4 FUN_0057246c(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = shutdown(param_1,2);
  uVar2 = 0;
  if (iVar1 != 0) {
    uVar2 = FUN_00572554();
  }
  return uVar2;
}


// 0x05724ac (0x28 bytes)
undefined4 FUN_005724ac(void)

{
  undefined4 uVar1;
  
  uVar1 = FUN_00572534();
  return uVar1;
}


// 0x05724d4 (0x28 bytes)
undefined4 FUN_005724d4(void)

{
  undefined4 uVar1;
  
  uVar1 = FUN_0057252c();
  return uVar1;
}


// 0x05724fc (0x30 bytes)
// strings: 0067dc20: '03.09.2011.18.00.00'

undefined8 FUN_005724fc(undefined8 param_1,undefined8 param_2)

{
  strcpy(param_1,PTR_s_03_09_2011_18_00_00_0071b564,param_2);
  return 0;
}


// 0x057252c (0x8 bytes)
undefined8 FUN_0057252c(void)

{
  return 0;
}


// 0x0572534 (0x8 bytes)
undefined8 FUN_00572534(void)

{
  return 0;
}


// 0x057253c (0x10 bytes)
undefined8 FUN_0057253c(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 4;
}


// 0x057254c (0x8 bytes)
undefined8 FUN_0057254c(void)

{
  return 4;
}


// 0x0572554 (0x64 bytes)
undefined8 FUN_00572554(void)

{
  int *piVar2;
  undefined8 uVar1;
  undefined4 uStack_44;
  
  piVar2 = (int *)_sys_net_errno_loc();
  if (*piVar2 - 4U < 0x44) {
                    /* WARNING: Could not recover jumptable at 0x00572590. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar1 = (*(code *)(*(int *)((*piVar2 + -4) * 4 + *(int *)(uStack_44 + -0x6dc0)) +
                      *(int *)(uStack_44 + -0x6dc0)))();
    return uVar1;
  }
  return 0xcf0b;
}


// 0x05728a8 (0x9c bytes)
undefined4 FUN_005728a8(int param_1,undefined4 param_2,undefined2 param_3)

{
  int iVar1;
  undefined4 uVar2;
  sockaddr sStack_10;
  
  sStack_10.sa_data[0xd] = '\0';
  sStack_10.sa_family.piece<0,1>() = 0;
  sStack_10.sa_data[6] = '\0';
  sStack_10.sa_data[7] = '\0';
  sStack_10.sa_data[8] = '\0';
  sStack_10.sa_data[9] = '\0';
  sStack_10.sa_data[10] = '\0';
  sStack_10.sa_data[0xb] = '\0';
  sStack_10.sa_data[0xc] = '\0';
  sStack_10.sa_family.piece<1,1>() = 2;
  sStack_10.sa_data.piece<0,2>() = param_3;
  sStack_10.sa_data.piece<2,4>() = param_2;
  iVar1 = connect(param_1,&sStack_10,0x10);
  uVar2 = 0;
  if (iVar1 != 0) {
    uVar2 = FUN_00572554();
  }
  return uVar2;
}


// 0x0572944 (0x19c bytes)
undefined4 FUN_00572944(int param_1,int param_2,int param_3,int param_4,int *param_5)

{
  void *__buf;
  int iVar1;
  undefined4 uVar2;
  size_t __n;
  undefined4 *puVar3;
  int iVar4;
  ulonglong local_e0 [14];
  sockaddr sStack_70;
  
  local_e0[0] = ZEXT48(&stack0x00000000);
  *param_5 = 0;
  iVar1 = *(int *)(param_2 + 0x44);
  iVar4 = -(*(int *)(param_2 + 0x40) + 0x1eU & 0xfffffff0);
  *(ulonglong *)((int)local_e0 + iVar4) = local_e0[0];
  __n = 0;
  __buf = (void *)((int)&sStack_70 + iVar4);
  if (0 < iVar1) {
    iVar1 = 0;
    iVar4 = 0;
    do {
      puVar3 = (undefined4 *)(param_2 + iVar4);
      iVar1 = iVar1 + 1;
      iVar4 = iVar4 + 8;
      memcpy((void *)((int)__buf + __n),(void *)*puVar3,puVar3[1]);
      __n = __n + puVar3[1];
    } while (iVar1 < *(int *)(param_2 + 0x44));
  }
  if ((param_3 == 0) || (param_4 == 0)) {
    iVar1 = send(param_1,__buf,__n,0);
  }
  else {
    sStack_70.sa_family.piece<1,1>() = 2;
    sStack_70.sa_data.piece<0,2>() = SUB42(param_4,0);
    sStack_70.sa_data.piece<2,4>() = param_3;
    iVar1 = sendto(param_1,__buf,__n,0,&sStack_70,0x10);
  }
  if (iVar1 < 0) {
    uVar2 = FUN_00572554();
  }
  else {
    uVar2 = 0;
    *param_5 = iVar1;
  }
  return uVar2;
}


// 0x0572ae0 (0x1b0 bytes)
undefined4 FUN_00572ae0(int param_1,ulonglong param_2,uint *param_3)

{
  uint uVar1;
  int iVar2;
  undefined4 uVar3;
  in_addr local_140;
  char acStack_13c [276];
  
  if ((param_1 == 0) || (param_3 == (uint *)0x0)) {
    return 2;
  }
  *param_3 = 0;
  memset(param_1,0,(param_2 & 0x1fffffff) << 3);
  if ((param_2 & 0xffffffff) <= (ulonglong)*param_3) {
    return 0;
  }
  iVar2 = cellNetCtlGetInfo(0x13,acStack_13c);
  if (-1 < iVar2) {
    iVar2 = inet_aton(acStack_13c,&local_140);
    if (iVar2 != 0) {
      *(in_addr_t *)(*param_3 * 8 + param_1) = local_140.s_addr;
      uVar1 = *param_3;
      *param_3 = uVar1 + 1;
      if ((ulonglong)(uVar1 + 1) < (param_2 & 0xffffffff)) {
        iVar2 = cellNetCtlGetInfo(0x14,acStack_13c);
        if ((iVar2 < 0) || (iVar2 = inet_aton(acStack_13c,&local_140), iVar2 == 0))
        goto LAB_00572c64;
        *(in_addr_t *)(*param_3 * 8 + param_1) = local_140.s_addr;
        *param_3 = *param_3 + 1;
      }
      return 0;
    }
  }
LAB_00572c64:
  uVar3 = FUN_00572554();
  return uVar3;
}


// 0x0572c90 (0x1f8 bytes)
undefined4 FUN_00572c90(uint param_1,undefined4 *param_2)

{
  uint uVar1;
  undefined4 *puVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  longlong lVar6;
  uint auStack_1b0 [32];
  uint auStack_130 [32];
  uint auStack_b0 [32];
  
  lVar6 = 0x20;
  iVar5 = 0;
  *param_2 = 0;
  do {
    puVar2 = (undefined4 *)((int)auStack_b0 + iVar5);
    iVar5 = iVar5 + 4;
    *puVar2 = 0;
    lVar6 = lVar6 + -1;
  } while (lVar6 != 0);
  iVar5 = 0;
  lVar6 = 0x20;
  do {
    puVar2 = (undefined4 *)((int)auStack_1b0 + iVar5);
    iVar5 = iVar5 + 4;
    *puVar2 = 0;
    lVar6 = lVar6 + -1;
  } while (lVar6 != 0);
  iVar5 = 0;
  lVar6 = 0x20;
  do {
    puVar2 = (undefined4 *)((int)auStack_130 + iVar5);
    iVar5 = iVar5 + 4;
    *puVar2 = 0;
    lVar6 = lVar6 + -1;
  } while (lVar6 != 0);
  iVar5 = (int)param_1 >> 5;
  uVar1 = 1 << (param_1 & 0x1f);
  auStack_b0[iVar5] = auStack_b0[iVar5] | uVar1;
  auStack_1b0[iVar5] = uVar1 | auStack_1b0[iVar5];
  auStack_130[iVar5] = uVar1 | auStack_130[iVar5];
  iVar3 = socketselect(param_1 + 1);
  if (iVar3 < 1) {
    if (iVar3 != 0) {
      uVar4 = FUN_00572554();
      return uVar4;
    }
  }
  else {
    if (((uVar1 & auStack_b0[iVar5]) != 0) || ((uVar1 & auStack_1b0[iVar5]) != 0)) {
      *param_2 = 1;
    }
    if ((uVar1 & auStack_130[iVar5]) != 0) {
      return 0xcf21;
    }
  }
  return 0;
}


// 0x0572e88 (0xa0 bytes)
undefined4 FUN_00572e88(in_addr_t *param_1)

{
  int iVar1;
  undefined4 uVar2;
  in_addr local_130;
  char acStack_12c [276];
  
  *param_1 = 0;
  iVar1 = cellNetCtlGetInfo(0x10,acStack_12c);
  if (-1 < iVar1) {
    iVar1 = inet_aton(acStack_12c,&local_130);
    if (iVar1 != 0) {
      *param_1 = local_130.s_addr;
      return 0;
    }
  }
  uVar2 = FUN_00572554();
  return uVar2;
}


// 0x0572f28 (0x90 bytes)
undefined8 FUN_00572f28(int param_1,uint param_2,undefined4 param_3,int *param_4)

{
  int iVar2;
  undefined8 uVar1;
  ulonglong uVar3;
  
  if (param_2 != 0) {
    uVar3 = (ulonglong)param_2;
    iVar2 = param_1;
    do {
      *(undefined2 *)(iVar2 + 4) = 0x19;
      uVar3 = uVar3 - 1;
      iVar2 = iVar2 + 8;
    } while (uVar3 != 0);
  }
  iVar2 = socketpoll(param_1,param_2,param_3);
  if (iVar2 != -1) {
    *param_4 = iVar2;
    return 0;
  }
  *param_4 = 0;
  uVar1 = FUN_00572554();
  return uVar1;
}


// 0x0572fb8 (0x224 bytes)
int FUN_00572fb8(int param_1,int param_2,undefined4 param_3,int *param_4)

{
  int iVar1;
  ssize_t sVar2;
  int *piVar3;
  int iVar4;
  int local_70 [2];
  GPiece<24> auStack_68;
  
  if ((param_1 == 0) || (param_4 == (int *)0x0)) {
    return 2;
  }
  iVar1 = FUN_00572f28(param_1,param_2,param_3,local_70);
  if (iVar1 != 0) {
    *param_4 = 0;
    return iVar1;
  }
  if (local_70[0] == 0) {
    *param_4 = 0;
    return 0;
  }
  local_70[0] = 0;
  if (param_2 != 0) {
    iVar1 = 0;
    iVar4 = 0;
    do {
      while( true ) {
        piVar3 = (int *)(param_1 + iVar4);
        if ((*(ushort *)((int)piVar3 + 6) & 0x18) == 0) break;
LAB_005730d8:
        iVar1 = iVar1 + 1;
        *(undefined2 *)((int)piVar3 + 6) = 1;
        local_70[0] = local_70[0] + 1;
        iVar4 = iVar4 + 8;
        if (param_2 == iVar1) goto LAB_005730f8;
      }
      if ((*(ushort *)((int)piVar3 + 6) & 4) != 0) {
        sVar2 = recv(*piVar3,auStack_68,1,2);
        if (sVar2 < 1) goto LAB_005730d8;
        *(undefined2 *)((int)piVar3 + 6) = 0;
      }
      iVar1 = iVar1 + 1;
      iVar4 = iVar4 + 8;
    } while (param_2 != iVar1);
  }
LAB_005730f8:
  *param_4 = local_70[0];
  return 0;
}


// 0x05731dc (0xc4 bytes)
int FUN_005731dc(int param_1,undefined4 param_2,undefined4 param_3,undefined4 *param_4)

{
  int iVar1;
  GPiece<16> local_20;
  
  if (param_1 != 0) {
    if (param_4 != (undefined4 *)0x0) {
      iVar1 = FUN_00572f28(param_1,param_2,param_3,local_20);
      if ((iVar1 != 0) && (iVar1 != 0xcf0e)) {
        *param_4 = 0;
        return iVar1;
      }
      *param_4 = 0;
      return 0;
    }
  }
  return 2;
}


// 0x05732a0 (0x50 bytes)
undefined4 FUN_005732a0(int param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 local_10 [4];
  
  local_10[0] = param_2;
  iVar1 = setsockopt(param_1,0xffff,0x1100,local_10,4);
  uVar2 = 0;
  if (iVar1 != 0) {
    uVar2 = FUN_00572554();
  }
  return uVar2;
}


// 0x05732f0 (0x50 bytes)
undefined4 FUN_005732f0(int param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 local_10 [4];
  
  local_10[0] = param_2;
  iVar1 = setsockopt(param_1,6,1,local_10,4);
  uVar2 = 0;
  if (iVar1 != 0) {
    uVar2 = FUN_00572554();
  }
  return uVar2;
}


// 0x0573340 (0x4c bytes)
void FUN_00573340(void)

{
  int iVar1;
  
  iVar1 = socketclose();
  if (iVar1 == 0) {
    return;
  }
  FUN_00572554(0);
  return;
}


// 0x057338c (0x44 bytes)
undefined8 FUN_0057338c(undefined4 *param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  puVar1 = PTR_DAT_0071b56c;
  uVar2 = 3;
  if (param_1 != (undefined4 *)0x0) {
    uVar2 = 0xf;
    *param_1 = 0;
    if (*(int *)puVar1 != 0) {
      uVar2 = 0;
      *param_1 = *(undefined4 *)(*(int *)puVar1 + 0xf8);
    }
  }
  return uVar2;
}


// 0x05733d0 (0x44 bytes)
undefined8 FUN_005733d0(undefined4 *param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  puVar1 = PTR_DAT_0071b56c;
  uVar2 = 3;
  if (param_1 != (undefined4 *)0x0) {
    uVar2 = 0xf;
    *param_1 = 0;
    if (*(int *)puVar1 != 0) {
      uVar2 = 0;
      *param_1 = *(undefined4 *)(*(int *)puVar1 + 0xfc);
    }
  }
  return uVar2;
}


// 0x0573414 (0x44 bytes)
undefined8 FUN_00573414(undefined4 *param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  puVar1 = PTR_DAT_0071b56c;
  uVar2 = 3;
  if (param_1 != (undefined4 *)0x0) {
    uVar2 = 0xf;
    *param_1 = 0;
    if (*(int *)puVar1 != 0) {
      uVar2 = 0;
      *param_1 = *(undefined4 *)(*(int *)puVar1 + 0x100);
    }
  }
  return uVar2;
}


// 0x0573458 (0x44 bytes)
undefined8 FUN_00573458(undefined4 *param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  puVar1 = PTR_DAT_0071b56c;
  uVar2 = 3;
  if (param_1 != (undefined4 *)0x0) {
    uVar2 = 0xf;
    *param_1 = 0;
    if (*(int *)puVar1 != 0) {
      uVar2 = 0;
      *param_1 = *(undefined4 *)(*(int *)puVar1 + 0x108);
    }
  }
  return uVar2;
}


// 0x057349c (0x44 bytes)
undefined8 FUN_0057349c(undefined4 *param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  puVar1 = PTR_DAT_0071b56c;
  uVar2 = 3;
  if (param_1 != (undefined4 *)0x0) {
    uVar2 = 0xf;
    *param_1 = 0;
    if (*(int *)puVar1 != 0) {
      uVar2 = 0;
      *param_1 = *(undefined4 *)(*(int *)puVar1 + 0x10c);
    }
  }
  return uVar2;
}


// 0x05734e0 (0x90 bytes)
ulonglong FUN_005734e0(void)

{
  undefined4 uVar3;
  ulonglong uVar1;
  ulonglong uVar2;
  
  uVar3 = FUN_00545114();
  uVar1 = FUN_00540808(uVar3);
  if ((int)uVar1 == 0) {
    uVar1 = FUN_0057c914();
    uVar3 = FUN_005450d8();
    uVar2 = FUN_00540808(uVar3);
    if (uVar2 != 0) {
      return uVar2 & 0xffffffff;
    }
  }
  return uVar1 & 0xffffffff;
}


// 0x0573570 (0xa0 bytes)
ulonglong FUN_00573570(undefined4 param_1)

{
  undefined4 uVar3;
  ulonglong uVar1;
  ulonglong uVar2;
  
  uVar3 = FUN_00545114();
  uVar1 = FUN_00540808(uVar3);
  if ((int)uVar1 == 0) {
    uVar1 = FUN_0057c7c8(param_1);
    uVar3 = FUN_005450d8();
    uVar2 = FUN_00540808(uVar3);
    if (uVar2 != 0) {
      return uVar2 & 0xffffffff;
    }
  }
  return uVar1 & 0xffffffff;
}


// 0x0573610 (0xb4 bytes)
ulonglong FUN_00573610(undefined4 param_1,undefined4 param_2)

{
  undefined4 uVar3;
  ulonglong uVar1;
  ulonglong uVar2;
  
  uVar3 = FUN_00545114();
  uVar1 = FUN_00540808(uVar3);
  if ((int)uVar1 == 0) {
    uVar1 = FUN_00574bd8(param_1,param_2);
    uVar3 = FUN_005450d8();
    uVar2 = FUN_00540808(uVar3);
    if (uVar2 != 0) {
      return uVar2 & 0xffffffff;
    }
  }
  return uVar1 & 0xffffffff;
}


// 0x05736c4 (0xa0 bytes)
ulonglong FUN_005736c4(undefined4 param_1)

{
  undefined4 uVar3;
  ulonglong uVar1;
  ulonglong uVar2;
  
  uVar3 = FUN_00545114();
  uVar1 = FUN_00540808(uVar3);
  if ((int)uVar1 == 0) {
    uVar1 = thunk_FUN_005746ac(param_1);
    uVar3 = FUN_005450d8();
    uVar2 = FUN_00540808(uVar3);
    if (uVar2 != 0) {
      return uVar2 & 0xffffffff;
    }
  }
  return uVar1 & 0xffffffff;
}


// 0x0573764 (0xa0 bytes)
ulonglong FUN_00573764(undefined4 param_1)

{
  undefined4 uVar3;
  ulonglong uVar1;
  ulonglong uVar2;
  
  uVar3 = FUN_00545114();
  uVar1 = FUN_00540808(uVar3);
  if ((int)uVar1 == 0) {
    uVar1 = thunk_FUN_00574608(param_1);
    uVar3 = FUN_005450d8();
    uVar2 = FUN_00540808(uVar3);
    if (uVar2 != 0) {
      return uVar2 & 0xffffffff;
    }
  }
  return uVar1 & 0xffffffff;
}


// 0x0573804 (0xb4 bytes)
ulonglong FUN_00573804(undefined4 param_1,undefined4 param_2)

{
  undefined4 uVar3;
  ulonglong uVar1;
  ulonglong uVar2;
  
  uVar3 = FUN_00545114();
  uVar1 = FUN_00540808(uVar3);
  if ((int)uVar1 == 0) {
    uVar1 = FUN_00574744(param_1,param_2);
    uVar3 = FUN_005450d8();
    uVar2 = FUN_00540808(uVar3);
    if (uVar2 != 0) {
      return uVar2 & 0xffffffff;
    }
  }
  return uVar1 & 0xffffffff;
}


// 0x05738b8 (0xbc bytes)
int FUN_005738b8(int *param_1,undefined4 param_2)

{
  undefined4 uVar1;
  int iVar2;
  
  iVar2 = 3;
  if (param_1 != (int *)0x0) {
    *param_1 = 0;
    uVar1 = FUN_00545114();
    iVar2 = FUN_00540808(uVar1);
    if (iVar2 == 0) {
      iVar2 = FUN_005745d0(param_2);
      if (iVar2 != 0) {
        *param_1 = iVar2 + 8;
      }
      uVar1 = FUN_005450d8();
      iVar2 = FUN_00540808(uVar1);
      return iVar2;
    }
  }
  return iVar2;
}


// 0x0573974 (0xc4 bytes)
ulonglong FUN_00573974(undefined4 param_1,undefined4 param_2)

{
  undefined4 uVar3;
  ulonglong uVar1;
  ulonglong uVar2;
  
  uVar3 = FUN_00545114();
  uVar1 = FUN_00540808(uVar3);
  if ((int)uVar1 == 0) {
    uVar3 = FUN_005745d0(param_2);
    uVar1 = FUN_005763fc(param_1,uVar3,0);
    uVar3 = FUN_005450d8();
    uVar2 = FUN_00540808(uVar3);
    if (uVar2 != 0) {
      return uVar2 & 0xffffffff;
    }
  }
  return uVar1 & 0xffffffff;
}


// 0x0573a38 (0xf0 bytes)
ulonglong FUN_00573a38(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                      undefined4 param_5)

{
  undefined4 uVar3;
  ulonglong uVar1;
  ulonglong uVar2;
  
  uVar3 = FUN_00545114();
  uVar1 = FUN_00540808(uVar3);
  if ((int)uVar1 == 0) {
    uVar1 = FUN_0057c6b8(param_1,param_2,param_3,param_4,param_5);
    uVar3 = FUN_005450d8();
    uVar2 = FUN_00540808(uVar3);
    if (uVar2 != 0) {
      return uVar2 & 0xffffffff;
    }
  }
  return uVar1 & 0xffffffff;
}


// 0x0573b28 (0xc8 bytes)
ulonglong FUN_00573b28(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 uVar3;
  ulonglong uVar1;
  ulonglong uVar2;
  
  uVar3 = FUN_00545114();
  uVar1 = FUN_00540808(uVar3);
  if ((int)uVar1 == 0) {
    uVar1 = FUN_0057ca08(param_1,param_2,param_3);
    uVar3 = FUN_005450d8();
    uVar2 = FUN_00540808(uVar3);
    if (uVar2 != 0) {
      return uVar2 & 0xffffffff;
    }
  }
  return uVar1 & 0xffffffff;
}


// 0x0573bf0 (0xc8 bytes)
ulonglong FUN_00573bf0(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 uVar3;
  ulonglong uVar1;
  ulonglong uVar2;
  
  uVar3 = FUN_00545114();
  uVar1 = FUN_00540808(uVar3);
  if ((int)uVar1 == 0) {
    uVar1 = FUN_0057cc5c(param_1,param_2,param_3);
    uVar3 = FUN_005450d8();
    uVar2 = FUN_00540808(uVar3);
    if (uVar2 != 0) {
      return uVar2 & 0xffffffff;
    }
  }
  return uVar1 & 0xffffffff;
}


// 0x0573cb8 (0xa0 bytes)
ulonglong FUN_00573cb8(undefined4 param_1)

{
  undefined4 uVar3;
  ulonglong uVar1;
  ulonglong uVar2;
  
  uVar3 = FUN_00545114();
  uVar1 = FUN_00540808(uVar3);
  if ((int)uVar1 == 0) {
    uVar1 = FUN_0057786c(param_1);
    uVar3 = FUN_005450d8();
    uVar2 = FUN_00540808(uVar3);
    if (uVar2 != 0) {
      return uVar2 & 0xffffffff;
    }
  }
  return uVar1 & 0xffffffff;
}


// 0x0573d58 (0xa0 bytes)
ulonglong FUN_00573d58(undefined4 param_1)

{
  undefined4 uVar3;
  ulonglong uVar1;
  ulonglong uVar2;
  
  uVar3 = FUN_00545114();
  uVar1 = FUN_00540808(uVar3);
  if ((int)uVar1 == 0) {
    uVar1 = FUN_00575c80(param_1);
    uVar3 = FUN_005450d8();
    uVar2 = FUN_00540808(uVar3);
    if (uVar2 != 0) {
      return uVar2 & 0xffffffff;
    }
  }
  return uVar1 & 0xffffffff;
}


// 0x0573df8 (0x18 bytes)
undefined8 FUN_00573df8(undefined4 *param_1)

{
  param_1[1] = 0;
  *param_1 = 0;
  return 0;
}


// 0x0573e10 (0x24 bytes)
undefined8 FUN_00573e10(undefined4 *param_1)

{
  undefined8 uVar1;
  
  uVar1 = 3;
  if (param_1 != (undefined4 *)0x0) {
    uVar1 = 0;
    param_1[1] = 0;
    *param_1 = 0;
  }
  return uVar1;
}


// 0x0573e34 (0x3c bytes)
undefined8 FUN_00573e34(undefined4 *param_1)

{
  undefined8 uVar1;
  
  uVar1 = 3;
  if (param_1 != (undefined4 *)0x0) {
    param_1[4] = 0x800;
    param_1[1] = 0x40;
    param_1[2] = 0x1000;
    uVar1 = 0;
    param_1[3] = 0x10;
    *param_1 = 0x10;
  }
  return uVar1;
}


// 0x0573e70 (0x90 bytes)
ulonglong FUN_00573e70(void)

{
  undefined4 uVar3;
  ulonglong uVar1;
  ulonglong uVar2;
  
  uVar3 = FUN_00545114();
  uVar1 = FUN_00540808(uVar3);
  if ((int)uVar1 == 0) {
    uVar1 = FUN_00575a08();
    uVar3 = FUN_005450d8();
    uVar2 = FUN_00540808(uVar3);
    if (uVar2 != 0) {
      return uVar2 & 0xffffffff;
    }
  }
  return uVar1 & 0xffffffff;
}


// 0x0573f00 (0xa0 bytes)
ulonglong FUN_00573f00(undefined4 param_1)

{
  undefined4 uVar3;
  ulonglong uVar1;
  ulonglong uVar2;
  
  uVar3 = FUN_00545114();
  uVar1 = FUN_00540808(uVar3);
  if ((int)uVar1 == 0) {
    uVar1 = FUN_00575ff8(param_1);
    uVar3 = FUN_005450d8();
    uVar2 = FUN_00540808(uVar3);
    if (uVar2 != 0) {
      return uVar2 & 0xffffffff;
    }
  }
  return uVar1 & 0xffffffff;
}


// 0x0573fa0 (0xa0 bytes)
ulonglong FUN_00573fa0(undefined4 param_1)

{
  undefined4 uVar3;
  ulonglong uVar1;
  ulonglong uVar2;
  
  uVar3 = FUN_00545114();
  uVar1 = FUN_00540808(uVar3);
  if ((int)uVar1 == 0) {
    uVar1 = FUN_00575a94(param_1);
    uVar3 = FUN_005450d8();
    uVar2 = FUN_00540808(uVar3);
    if (uVar2 != 0) {
      return uVar2 & 0xffffffff;
    }
  }
  return uVar1 & 0xffffffff;
}


// 0x0574040 (0x14c bytes)
ulonglong FUN_00574040(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                      undefined4 param_5,undefined4 param_6,undefined4 param_7,undefined4 param_8)

{
  undefined4 uVar3;
  ulonglong uVar1;
  ulonglong uVar2;
  
  uVar3 = FUN_00545114();
  uVar1 = FUN_00540808(uVar3);
  if ((int)uVar1 == 0) {
    uVar1 = FUN_005798e8(param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8);
    uVar3 = FUN_005450d8();
    uVar2 = FUN_00540808(uVar3);
    if (uVar2 != 0) {
      return uVar2 & 0xffffffff;
    }
  }
  return uVar1 & 0xffffffff;
}


// 0x057418c (0x140 bytes)
ulonglong FUN_0057418c(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                      undefined4 param_5,undefined4 param_6,undefined4 param_7,undefined4 param_8)

{
  undefined4 uVar3;
  ulonglong uVar1;
  ulonglong uVar2;
  
  uVar3 = FUN_00545114();
  uVar1 = FUN_00540808(uVar3);
  if ((int)uVar1 == 0) {
    uVar1 = FUN_00578f44(param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8);
    uVar3 = FUN_005450d8();
    uVar2 = FUN_00540808(uVar3);
    if (uVar2 != 0) {
      return uVar2 & 0xffffffff;
    }
  }
  return uVar1 & 0xffffffff;
}


// 0x05742cc (0xb4 bytes)
ulonglong FUN_005742cc(undefined4 param_1,undefined4 param_2)

{
  undefined4 uVar3;
  ulonglong uVar1;
  ulonglong uVar2;
  
  uVar3 = FUN_00545114();
  uVar1 = FUN_00540808(uVar3);
  if ((int)uVar1 == 0) {
    uVar1 = FUN_0057c628(param_1,param_2);
    uVar3 = FUN_005450d8();
    uVar2 = FUN_00540808(uVar3);
    if (uVar2 != 0) {
      return uVar2 & 0xffffffff;
    }
  }
  return uVar1 & 0xffffffff;
}


// 0x0574380 (0x12c bytes)
ulonglong FUN_00574380(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                      undefined4 param_5,undefined4 param_6,undefined4 param_7,undefined4 param_8)

{
  undefined4 uVar3;
  ulonglong uVar1;
  ulonglong uVar2;
  
  uVar3 = FUN_00545114();
  uVar1 = FUN_00540808(uVar3);
  if ((int)uVar1 == 0) {
    uVar1 = FUN_0057c0f8(param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8);
    uVar3 = FUN_005450d8();
    uVar2 = FUN_00540808(uVar3);
    if (uVar2 != 0) {
      return uVar2 & 0xffffffff;
    }
  }
  return uVar1 & 0xffffffff;
}


// 0x05744ac (0x7c bytes)
undefined8 FUN_005744ac(undefined4 *param_1)

{
  uint uVar1;
  int iVar2;
  undefined8 uVar3;
  
  FUN_00574924();
  uVar3 = 3;
  if ((param_1 != (undefined4 *)0x0) && (uVar1 = param_1[1], uVar1 < 0x81)) {
    uVar3 = 0;
    iVar2 = *(int *)PTR_DAT_0071b56c;
    *(undefined4 *)(iVar2 + 0xf8) = *param_1;
    *(uint *)(iVar2 + 0xfc) = uVar1;
    *(undefined4 *)(iVar2 + 0x100) = param_1[2];
    *(undefined4 *)(iVar2 + 0x108) = param_1[3];
    *(undefined4 *)(iVar2 + 0x10c) = param_1[4];
  }
  return uVar3;
}


// 0x0574528 (0x90 bytes)
ulonglong FUN_00574528(void)

{
  undefined4 uVar3;
  ulonglong uVar1;
  ulonglong uVar2;
  
  uVar3 = FUN_00545114();
  uVar1 = FUN_00540808(uVar3);
  if ((int)uVar1 == 0) {
    uVar1 = FUN_0057cd34();
    uVar3 = FUN_005450d8();
    uVar2 = FUN_00540808(uVar3);
    if (uVar2 != 0) {
      return uVar2 & 0xffffffff;
    }
  }
  return uVar1 & 0xffffffff;
}


// 0x05745b8 (0x18 bytes)
undefined8 FUN_005745b8(void)

{
  *(undefined4 *)(*(int *)PTR_DAT_0071b570 + 300) = 0;
  return 0;
}


// 0x05745d0 (0x38 bytes)
undefined4 FUN_005745d0(uint param_1)

{
  undefined4 uVar1;
  
  uVar1 = 0;
  if (param_1 < *(uint *)(*(int *)PTR_DAT_0071b570 + 0x100)) {
    uVar1 = *(undefined4 *)(param_1 * 4 + *(int *)(PTR_DAT_0071b574 + 0x17c));
  }
  return uVar1;
}


// 0x0574608 (0xa4 bytes)
undefined8 FUN_00574608(void)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar3 = FUN_005745d0();
  if (iVar3 != 0) {
    iVar1 = *(int *)(*(int *)PTR_DAT_0071b570 + 300);
    if (iVar3 == iVar1) {
      *(undefined4 *)(*(int *)PTR_DAT_0071b570 + 300) = *(undefined4 *)(iVar3 + 0x54);
      *(undefined4 *)(iVar3 + 0x54) = 0;
    }
    else {
      if (iVar1 != 0) {
        for (iVar2 = *(int *)(iVar1 + 0x54); iVar3 != iVar2; iVar2 = *(int *)(iVar2 + 0x54)) {
          if (iVar2 == 0) goto LAB_0057467c;
          iVar1 = iVar2;
        }
        *(undefined4 *)(iVar1 + 0x54) = *(undefined4 *)(iVar3 + 0x54);
      }
LAB_0057467c:
      *(undefined4 *)(iVar3 + 0x54) = 0;
    }
  }
  return 0;
}


// 0x05746ac (0x98 bytes)
undefined8 FUN_005746ac(void)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  iVar4 = FUN_005745d0();
  if (iVar4 != 0) {
    iVar1 = *(int *)PTR_DAT_0071b570;
    iVar2 = *(int *)(iVar1 + 300);
    if (iVar2 == 0) {
      *(int *)(iVar1 + 300) = iVar4;
      *(undefined4 *)(iVar4 + 0x54) = 0;
      iVar2 = *(int *)(iVar1 + 300);
      if (iVar2 == 0) {
        return 0;
      }
    }
    if (iVar4 != iVar2) {
      iVar1 = *(int *)(iVar2 + 0x54);
      while (iVar3 = iVar1, iVar3 != 0) {
        if (iVar4 == iVar3) {
          return 0;
        }
        iVar2 = iVar3;
        iVar1 = *(int *)(iVar3 + 0x54);
      }
      *(int *)(iVar2 + 0x54) = iVar4;
      *(undefined4 *)(iVar4 + 0x54) = 0;
    }
  }
  return 0;
}


// 0x0574744 (0x38 bytes)
undefined8 FUN_00574744(undefined4 *param_1,int param_2)

{
  if ((param_1 != (undefined4 *)0x0) && (*param_1 = 0x100, param_2 != 0)) {
    *param_1 = *(undefined4 *)(param_2 + 0x414);
    return 0;
  }
  return 3;
}


// 0x057477c (0xbc bytes)
void FUN_0057477c(uint param_1,undefined4 param_2)

{
  undefined4 *puVar1;
  int iVar2;
  
  if (param_1 < 0x100) {
    iVar2 = FUN_005745d0(param_2);
    if (iVar2 != 0) {
      iVar2 = (uint)*(byte *)(iVar2 + 8) * 4;
      puVar1 = *(undefined4 **)(iVar2 + *(int *)(PTR_DAT_0071b574 + 0x158));
      if (puVar1 != (undefined4 *)0x0) {
        (*(code *)*puVar1)(param_1,param_2,
                           *(undefined4 *)(iVar2 + *(int *)(PTR_DAT_0071b574 + 0x164)));
        return;
      }
    }
  }
  return;
}


// 0x0574838 (0xd0 bytes)
void FUN_00574838(undefined4 param_1,undefined4 param_2,uint param_3)

{
  undefined4 *puVar1;
  int iVar2;
  
  if (((param_3 < *(uint *)(*(int *)PTR_DAT_0071b570 + 0xfc)) || (param_3 == 0xfffffffe)) ||
     (param_3 == 0xffffffff)) {
    iVar2 = FUN_005745d0(param_2);
    if (iVar2 != 0) {
      iVar2 = (uint)*(byte *)(iVar2 + 8) * 4;
      puVar1 = *(undefined4 **)(iVar2 + *(int *)(PTR_DAT_0071b574 + 0x15c));
      if (puVar1 != (undefined4 *)0x0) {
        (*(code *)*puVar1)(param_1,param_2,param_3,
                           *(undefined4 *)(iVar2 + *(int *)(PTR_DAT_0071b574 + 0x164)));
      }
    }
  }
  return;
}


// 0x0574908 (0x1c bytes)
undefined8 FUN_00574908(int param_1,undefined4 param_2)

{
  undefined8 uVar1;
  
  uVar1 = 3;
  if (param_1 != 0) {
    uVar1 = 0;
    *(undefined4 *)(param_1 + 0x414) = param_2;
  }
  return uVar1;
}


// 0x0574924 (0x2ac bytes)
void FUN_00574924(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined *puVar11;
  undefined *puVar12;
  undefined *puVar13;
  undefined *puVar14;
  undefined *puVar15;
  undefined *puVar16;
  undefined *puVar17;
  undefined *puVar18;
  undefined *puVar19;
  undefined *puVar20;
  undefined *puVar21;
  undefined *puVar22;
  undefined *puVar23;
  
  puVar17 = PTR_PTR_0071b5b8;
  puVar16 = PTR_PTR_0071b5b4;
  puVar15 = PTR_PTR_0071b5b0;
  puVar14 = PTR_PTR_0071b5ac;
  puVar13 = PTR_PTR_0071b5a8;
  puVar12 = PTR_PTR_0071b5a4;
  puVar11 = PTR_PTR_0071b5a0;
  puVar10 = PTR_PTR_0071b59c;
  puVar9 = PTR_PTR_0071b598;
  puVar8 = PTR_PTR_0071b594;
  puVar7 = PTR_PTR_0071b590;
  puVar6 = PTR_PTR_0071b58c;
  puVar5 = PTR_PTR_0071b588;
  puVar4 = PTR_PTR_0071b584;
  puVar3 = PTR_PTR_0071b580;
  puVar1 = PTR_PTR_0071b57c;
  puVar2 = PTR_DAT_0071b574;
  *(undefined **)PTR_DAT_0071b574 = PTR_PTR_0071b578;
  *(undefined **)(puVar2 + 0xc) = puVar4;
  *(undefined **)(puVar2 + 4) = puVar1;
  *(undefined **)(puVar2 + 0x10) = puVar5;
  *(undefined **)(puVar2 + 8) = puVar3;
  *(undefined **)(puVar2 + 0x14) = puVar6;
  *(undefined **)(puVar2 + 0x18) = puVar7;
  *(undefined **)(puVar2 + 0x1c) = puVar8;
  puVar23 = PTR_PTR_0071b5f8;
  puVar5 = PTR_PTR_0071b5f4;
  puVar22 = PTR_PTR_0071b5f0;
  puVar21 = PTR_PTR_0071b5ec;
  puVar20 = PTR_PTR_0071b5e8;
  puVar19 = PTR_PTR_0071b5e4;
  *(undefined **)(puVar2 + 0x20) = puVar9;
  *(undefined **)(puVar2 + 0x24) = puVar10;
  puVar18 = PTR_PTR_0071b5e0;
  puVar10 = PTR_PTR_0071b5dc;
  puVar3 = PTR_PTR_0071b5c0;
  puVar1 = PTR_PTR_0071b5bc;
  *(undefined **)(puVar2 + 0x28) = puVar11;
  *(undefined **)(puVar2 + 0x30) = puVar12;
  puVar11 = PTR_PTR_0071b5fc;
  puVar8 = PTR_PTR_0071b5d4;
  *(undefined **)(puVar2 + 0x34) = puVar13;
  *(undefined **)(puVar2 + 0x38) = puVar14;
  puVar9 = PTR_PTR_0071b5d8;
  puVar6 = PTR_PTR_0071b5cc;
  *(undefined **)(puVar2 + 0x3c) = puVar15;
  *(undefined **)(puVar2 + 0x2c) = puVar16;
  puVar7 = PTR_PTR_0071b5d0;
  puVar4 = PTR_PTR_0071b5c4;
  *(undefined **)(puVar2 + 0x40) = puVar17;
  *(undefined **)(puVar2 + 0x7c) = puVar5;
  puVar5 = PTR_PTR_0071b5c8;
  *(undefined **)(puVar2 + 0x80) = puVar23;
  *(undefined **)(puVar2 + 0x74) = puVar21;
  *(undefined **)(puVar2 + 0x78) = puVar22;
  *(undefined **)(puVar2 + 0x6c) = puVar19;
  *(undefined **)(puVar2 + 0x70) = puVar20;
  *(undefined **)(puVar2 + 100) = puVar10;
  *(undefined **)(puVar2 + 0x68) = puVar18;
  puVar18 = PTR_PTR_0071b63c;
  puVar17 = PTR_PTR_0071b638;
  puVar16 = PTR_PTR_0071b634;
  puVar15 = PTR_PTR_0071b630;
  puVar14 = PTR_PTR_0071b62c;
  puVar13 = PTR_PTR_0071b628;
  puVar12 = PTR_PTR_0071b624;
  puVar10 = PTR_PTR_0071b620;
  *(undefined **)(puVar2 + 0x5c) = puVar8;
  *(undefined **)(puVar2 + 0x60) = puVar9;
  puVar9 = PTR_PTR_0071b61c;
  puVar8 = PTR_PTR_0071b618;
  *(undefined **)(puVar2 + 0x54) = puVar6;
  *(undefined **)(puVar2 + 0x58) = puVar7;
  puVar7 = PTR_PTR_0071b614;
  puVar6 = PTR_PTR_0071b610;
  *(undefined **)(puVar2 + 0x4c) = puVar4;
  *(undefined **)(puVar2 + 0x50) = puVar5;
  puVar5 = PTR_PTR_0071b60c;
  puVar4 = PTR_PTR_0071b608;
  *(undefined **)(puVar2 + 0x44) = puVar1;
  *(undefined **)(puVar2 + 0x48) = puVar3;
  puVar3 = PTR_PTR_0071b604;
  puVar1 = PTR_PTR_0071b600;
  *(undefined **)(puVar2 + 0x84) = puVar11;
  *(undefined **)(puVar2 + 0xc0) = puVar17;
  puVar11 = PTR_PTR_0071b640;
  *(undefined **)(puVar2 + 0xc4) = puVar18;
  *(undefined **)(puVar2 + 0xb8) = puVar15;
  *(undefined **)(puVar2 + 0xbc) = puVar16;
  *(undefined **)(puVar2 + 0xb0) = puVar13;
  *(undefined **)(puVar2 + 0xb4) = puVar14;
  *(undefined **)(puVar2 + 0xa8) = puVar10;
  *(undefined **)(puVar2 + 0xac) = puVar12;
  puVar13 = PTR_PTR_0071b660;
  puVar12 = PTR_PTR_0071b65c;
  *(undefined **)(puVar2 + 0xa0) = puVar8;
  *(undefined **)(puVar2 + 0xa4) = puVar9;
  puVar9 = PTR_PTR_0071b650;
  puVar8 = PTR_PTR_0071b644;
  *(undefined **)(puVar2 + 0x98) = puVar6;
  *(undefined **)(puVar2 + 0x9c) = puVar7;
  puVar6 = PTR_PTR_0071b648;
  *(undefined **)(puVar2 + 200) = puVar11;
  puVar15 = PTR_PTR_0071b668;
  puVar14 = PTR_PTR_0071b664;
  puVar11 = PTR_PTR_0071b658;
  puVar10 = PTR_PTR_0071b654;
  puVar7 = PTR_PTR_0071b64c;
  *(undefined **)(puVar2 + 0xe8) = puVar12;
  *(undefined **)(puVar2 + 0x90) = puVar4;
  *(undefined **)(puVar2 + 0x94) = puVar5;
  *(undefined **)(puVar2 + 0x88) = puVar1;
  *(undefined **)(puVar2 + 0x8c) = puVar3;
  *(undefined **)(puVar2 + 0xec) = puVar13;
  *(undefined **)(puVar2 + 0xd8) = puVar9;
  *(undefined **)(puVar2 + 0xcc) = puVar8;
  *(undefined **)(puVar2 + 0xd0) = puVar6;
  *(undefined4 *)(puVar2 + 0x100) = 0x1000;
  *(undefined **)(puVar2 + 0xf0) = puVar14;
  *(undefined **)(puVar2 + 0xf4) = puVar15;
  *(undefined **)(puVar2 + 0xe0) = puVar10;
  *(undefined **)(puVar2 + 0xe4) = puVar11;
  *(undefined **)(puVar2 + 0xd4) = puVar7;
  *(undefined4 *)(puVar2 + 0x104) = 0x40;
  *(undefined4 *)(puVar2 + 0x128) = 0;
  *(undefined4 *)(puVar2 + 0x124) = 0;
  *(undefined4 *)(puVar2 + 0xf8) = 0x10;
  puVar1 = PTR_DAT_0071b570;
  *(undefined4 *)(puVar2 + 0x108) = 0x10;
  *(undefined4 *)(puVar2 + 0x154) = 0;
  *(undefined4 *)(puVar2 + 0xfc) = 0x40;
  *(undefined4 *)(puVar2 + 0x150) = 0;
  *(undefined4 *)(puVar2 + 0x14c) = 0;
  *(undefined4 *)(puVar2 + 0x120) = 0;
  *(undefined4 *)(puVar2 + 0x130) = 0;
  *(undefined4 *)(puVar2 + 0x134) = 0;
  *(undefined4 *)(puVar2 + 0x144) = 0;
  *(undefined4 *)(puVar2 + 0x10c) = 0x800;
  *(undefined4 *)(puVar2 + 0x17c) = 0;
  *(undefined4 *)(puVar2 + 0x158) = 0;
  *(undefined4 *)(puVar2 + 0x15c) = 0;
  *(undefined **)puVar1 = puVar2;
  *(undefined4 *)(puVar2 + 0x160) = 0;
  *(undefined4 *)(puVar2 + 0x168) = 0;
  *(undefined4 *)(puVar2 + 0x16c) = 0;
  *(undefined4 *)(puVar2 + 0x170) = 0;
  *(undefined4 *)(puVar2 + 0x174) = 0;
  *(undefined4 *)(puVar2 + 0x178) = 0;
  return;
}


// 0x0574bd0 (0x4 bytes)
undefined8 thunk_FUN_00574608(void)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar3 = FUN_005745d0();
  if (iVar3 != 0) {
    iVar1 = *(int *)(*(int *)PTR_DAT_0071b570 + 300);
    if (iVar3 == iVar1) {
      *(undefined4 *)(*(int *)PTR_DAT_0071b570 + 300) = *(undefined4 *)(iVar3 + 0x54);
      *(undefined4 *)(iVar3 + 0x54) = 0;
    }
    else {
      if (iVar1 != 0) {
        for (iVar2 = *(int *)(iVar1 + 0x54); iVar3 != iVar2; iVar2 = *(int *)(iVar2 + 0x54)) {
          if (iVar2 == 0) goto LAB_0057467c;
          iVar1 = iVar2;
        }
        *(undefined4 *)(iVar1 + 0x54) = *(undefined4 *)(iVar3 + 0x54);
      }
LAB_0057467c:
      *(undefined4 *)(iVar3 + 0x54) = 0;
    }
  }
  return 0;
}


// 0x0574bd4 (0x4 bytes)
undefined8 thunk_FUN_005746ac(void)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  iVar4 = FUN_005745d0();
  if (iVar4 != 0) {
    iVar1 = *(int *)PTR_DAT_0071b570;
    iVar2 = *(int *)(iVar1 + 300);
    if (iVar2 == 0) {
      *(int *)(iVar1 + 300) = iVar4;
      *(undefined4 *)(iVar4 + 0x54) = 0;
      iVar2 = *(int *)(iVar1 + 300);
      if (iVar2 == 0) {
        return 0;
      }
    }
    if (iVar4 != iVar2) {
      iVar1 = *(int *)(iVar2 + 0x54);
      while (iVar3 = iVar1, iVar3 != 0) {
        if (iVar4 == iVar3) {
          return 0;
        }
        iVar2 = iVar3;
        iVar1 = *(int *)(iVar3 + 0x54);
      }
      *(int *)(iVar2 + 0x54) = iVar4;
      *(undefined4 *)(iVar4 + 0x54) = 0;
    }
  }
  return 0;
}


// 0x0574bd8 (0x160 bytes)
undefined8 FUN_00574bd8(uint param_1,uint param_2)

{
  int iVar1;
  int iVar2;
  undefined8 uVar3;
  
  iVar2 = *(int *)PTR_DAT_0071b570;
  uVar3 = 0xf;
  if (iVar2 != 0) {
    if (((((int)param_1 < 0) || (*(uint *)(iVar2 + 0x100) <= param_1)) || ((int)param_2 < 0)) ||
       (*(uint *)(iVar2 + 0xfc) <= param_2)) {
      return 3;
    }
    iVar1 = *(int *)(iVar2 + 0x138);
    uVar3 = 0;
    if (iVar1 != 0) {
      iVar2 = (*(code *)**(undefined4 **)(iVar2 + 0x24))(param_1);
      uVar3 = 1;
      if ((iVar2 != 0) &&
         ((*(int *)(iVar2 + 0xc) == -1 ||
          (uVar3 = 10, *(int *)(iVar1 + 0x404) == *(int *)(iVar2 + 0xc))))) {
        if ((int)param_2 < 0x20) {
          *(uint *)(iVar2 + 0x34) = *(uint *)(iVar2 + 0x34) | 1 << (param_2 & 0x3f);
        }
        else {
          *(uint *)(iVar2 + 0x30) = *(uint *)(iVar2 + 0x30) | 1 << (param_2 - 0x20 & 0x3f);
        }
        return 0;
      }
    }
  }
  return uVar3;
}


// 0x0574d38 (0x70 bytes)
undefined8 FUN_00574d38(undefined8 param_1,undefined8 param_2,int param_3)

{
  undefined8 uVar1;
  
  if (*(uint *)(param_3 + 0xc) < 0x10) {
                    /* WARNING: Could not recover jumptable at 0x00574d80. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar1 = (*(code *)(PTR_DAT_0071b66c + *(int *)(PTR_DAT_0071b66c + *(uint *)(param_3 + 0xc) * 4))
            )();
    return uVar1;
  }
  return 0;
}


// 0x0575234 (0x234 bytes)
// strings: 00575390: '}CSxyJ' (raw)

undefined8 FUN_00575234(void)

{
  undefined *puVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  
  puVar1 = PTR_DAT_0071b570;
  iVar2 = *(int *)PTR_DAT_0071b570;
  if (*(int *)(iVar2 + 0x158) != 0) {
    FUN_005519f0(iVar2 + 0x158);
    iVar2 = *(int *)puVar1;
  }
  if (*(int *)(iVar2 + 0x15c) != 0) {
    FUN_005519f0(iVar2 + 0x15c);
    iVar2 = *(int *)puVar1;
  }
  if (*(int *)(iVar2 + 0x160) != 0) {
    FUN_005519f0(iVar2 + 0x160);
    iVar2 = *(int *)puVar1;
  }
  if (*(int *)(iVar2 + 0x164) != 0) {
    FUN_005519f0(iVar2 + 0x164);
    iVar2 = *(int *)puVar1;
  }
  if (*(int *)(iVar2 + 0x16c) != 0) {
    FUN_005519f0(iVar2 + 0x16c);
    iVar2 = *(int *)puVar1;
  }
  if (*(int *)(iVar2 + 0x170) != 0) {
    if (*(int *)(iVar2 + 0xf8) != 0) {
      uVar4 = 0;
      iVar5 = 0;
      do {
        uVar4 = uVar4 + 1;
        iVar2 = iVar5 + *(int *)(iVar2 + 0x170);
        if (*(int *)(iVar2 + 0x28) != 0) {
          FUN_005519f0(iVar2 + 0x28);
        }
        iVar2 = *(int *)puVar1;
        iVar3 = iVar5 + *(int *)(iVar2 + 0x170);
        iVar5 = iVar5 + 0x30;
        if (*(int *)(iVar3 + 0x2c) != 0) {
          FUN_005519f0(iVar3 + 0x2c);
          iVar2 = *(int *)puVar1;
        }
      } while (uVar4 < *(uint *)(iVar2 + 0xf8));
    }
    FUN_005519f0(iVar2 + 0x170);
  }
  iVar2 = *(int *)puVar1;
  if (*(int *)(iVar2 + 0x17c) != 0) {
    FUN_005519f0(iVar2 + 0x17c);
    iVar2 = *(int *)puVar1;
  }
  if (*(int *)(iVar2 + 0x168) != 0) {
    FUN_005519f0(iVar2 + 0x168);
    iVar2 = *(int *)puVar1;
  }
  if (*(int *)(iVar2 + 0x174) != 0) {
    FUN_005519f0(iVar2 + 0x174);
    iVar2 = *(int *)puVar1;
  }
  if (*(int *)(iVar2 + 0x178) != 0) {
    FUN_005519f0(iVar2 + 0x178);
  }
  return 0;
}


// 0x0575468 (0x360 bytes)
ulonglong FUN_00575468(void)

{
  undefined *puVar1;
  ulonglong uVar2;
  undefined4 uVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  
  puVar1 = PTR_DAT_0071b570;
  iVar4 = *(int *)PTR_DAT_0071b570;
  if ((*(uint *)(iVar4 + 0xf8) != 0) && (*(int *)(iVar4 + 0xfc) != 0)) {
    uVar3 = FUN_00551de8(iVar4 + 0x158,((ulonglong)*(uint *)(iVar4 + 0xf8) & 0x3fffffff) << 2);
    uVar2 = FUN_00540808(uVar3);
    if ((int)uVar2 != 0) goto LAB_005754e4;
    uVar3 = FUN_00551de8(*(int *)puVar1 + 0x15c,
                         ((ulonglong)*(uint *)(*(int *)puVar1 + 0xf8) & 0x3fffffff) << 2);
    uVar2 = FUN_00540808(uVar3);
    if (uVar2 != 0) goto LAB_005754e4;
    uVar3 = FUN_00551de8(*(int *)puVar1 + 0x160,
                         ((ulonglong)*(uint *)(*(int *)puVar1 + 0xf8) & 0x3fffffff) << 2);
    uVar2 = FUN_00540808(uVar3);
    if (uVar2 != 0) goto LAB_005754e4;
    uVar3 = FUN_00551de8(*(int *)puVar1 + 0x164,
                         ((ulonglong)*(uint *)(*(int *)puVar1 + 0xf8) & 0x3fffffff) << 2);
    uVar2 = FUN_00540808(uVar3);
    if (uVar2 != 0) goto LAB_005754e4;
    iVar4 = *(int *)puVar1;
    uVar3 = FUN_00551de8(iVar4 + 0x16c,*(int *)(iVar4 + 0xf8) * 0x2c * *(int *)(iVar4 + 0xfc));
    uVar2 = FUN_00540808(uVar3);
    if (uVar2 != 0) goto LAB_005754e4;
    uVar5 = *(uint *)(*(int *)puVar1 + 0xf8);
    uVar3 = FUN_00551de8(*(int *)puVar1 + 0x170,uVar5 * 0x40 + (uVar5 & 0xfffffff) * -0x10);
    uVar2 = FUN_00540808(uVar3);
    if (uVar2 != 0) goto LAB_005754e4;
    iVar4 = *(int *)puVar1;
    if (*(int *)(iVar4 + 0xf8) != 0) {
      uVar5 = 0;
      iVar6 = 0;
      do {
        uVar5 = uVar5 + 1;
        uVar3 = FUN_00551de8(iVar6 + *(int *)(iVar4 + 0x170) + 0x28,
                             ((ulonglong)*(uint *)(iVar4 + 0xfc) & 0x3fffffff) << 2);
        uVar2 = FUN_00540808(uVar3);
        if (uVar2 != 0) goto LAB_005754e4;
        iVar4 = iVar6 + *(int *)(*(int *)puVar1 + 0x170);
        iVar6 = iVar6 + 0x30;
        uVar3 = FUN_00551de8(iVar4 + 0x2c,
                             ((ulonglong)*(uint *)(*(int *)puVar1 + 0xfc) & 0x3fffffff) << 2);
        uVar2 = FUN_00540808(uVar3);
        if (uVar2 != 0) goto LAB_005754e4;
        iVar4 = *(int *)puVar1;
      } while (uVar5 < *(uint *)(iVar4 + 0xf8));
    }
  }
  uVar5 = *(uint *)(*(int *)puVar1 + 0x100);
  if (uVar5 == 0) {
    iVar4 = *(int *)puVar1;
    uVar5 = *(uint *)(iVar4 + 0x104);
  }
  else {
    uVar3 = FUN_00551de8(*(int *)puVar1 + 0x17c,((ulonglong)uVar5 & 0x3fffffff) << 2);
    uVar2 = FUN_00540808(uVar3);
    if (uVar2 != 0) goto LAB_005754e4;
    iVar4 = *(int *)puVar1;
    uVar5 = *(uint *)(iVar4 + 0x104);
  }
  if (uVar5 != 0) {
    uVar3 = FUN_00551de8(iVar4 + 0x168,((ulonglong)uVar5 & 0x3fffffff) << 2);
    uVar2 = FUN_00540808(uVar3);
    if (uVar2 != 0) goto LAB_005754e4;
  }
  uVar2 = 0;
  uVar5 = *(uint *)(*(int *)puVar1 + 0x108);
  if (uVar5 != 0) {
    uVar3 = FUN_00551de8(*(int *)puVar1 + 0x174,((ulonglong)uVar5 & 0x3fffffff) << 2);
    uVar2 = FUN_00540808(uVar3);
    if (uVar2 == 0) {
      uVar3 = FUN_00551de8(*(int *)puVar1 + 0x178,
                           ((ulonglong)*(uint *)(*(int *)puVar1 + 0x108) & 0x3fffffff) << 2);
      uVar2 = FUN_00540808(uVar3);
      return uVar2 & 0xffffffff;
    }
  }
LAB_005754e4:
  return uVar2 & 0xffffffff;
}


// 0x05757c8 (0x240 bytes)
undefined8 FUN_005757c8(int param_1)

{
  uint uVar1;
  undefined4 *puVar2;
  int iVar3;
  undefined *puVar4;
  int iVar5;
  int iVar6;
  GPiece<24> local_40;
  
  puVar4 = PTR_DAT_0071b574;
  iVar6 = *(int *)(PTR_DAT_0071b574 + 0x138);
  if ((iVar6 == 0) || (iVar5 = FUN_005745d0(param_1), iVar5 == 0)) {
    return 10;
  }
  uVar1 = *(uint *)(iVar5 + 0x10);
  if (uVar1 < 0x100) {
    iVar5 = FUN_005745d0(param_1);
    if (iVar5 == 0) {
      return 0;
    }
    iVar3 = (uint)*(byte *)(iVar5 + 8) * 4;
    puVar2 = *(undefined4 **)(iVar3 + *(int *)(puVar4 + 0x160));
    if (puVar2 == (undefined4 *)0x0) goto LAB_00575830;
    (*(code *)*puVar2)(uVar1,param_1,*(undefined4 *)(iVar3 + *(int *)(puVar4 + 0x164)));
  }
  iVar5 = FUN_005745d0(param_1);
  if (iVar5 == 0) {
    return 0;
  }
LAB_00575830:
  FUN_00574608(param_1);
  *(undefined4 *)(iVar5 + 4) = 1;
  iVar6 = FUN_0057cdb0(iVar6,*(undefined4 *)(iVar5 + 0x10));
  if ((iVar6 != 0) &&
     ((param_1 < *(int *)(iVar6 + 8) || (*(int *)(iVar6 + 8) + *(int *)(iVar6 + 0xc) <= param_1))))
  {
    *(undefined4 *)(iVar5 + 4) = 0;
  }
  FUN_005472a4(iVar5 + 0x28);
  FUN_005472a4(iVar5 + 0x24);
  FUN_005472a4(iVar5 + 0x44);
  FUN_005472a4(iVar5 + 0x48);
  FUN_005472a4(local_40);
  *(undefined4 *)(param_1 * 4 + *(int *)(puVar4 + 0x17c)) = 0;
  return 0;
}


// 0x0575a08 (0x8c bytes)
undefined8 FUN_00575a08(void)

{
  undefined *puVar1;
  undefined *puVar2;
  uint uVar3;
  uint uVar4;
  
  puVar2 = PTR_DAT_0071b574;
  puVar1 = PTR_DAT_0071b570;
  if (*(int *)(*(int *)PTR_DAT_0071b570 + 0x100) != 0) {
    uVar3 = 0;
    do {
      uVar4 = uVar3 + 1;
      if (*(int *)(uVar3 * 4 + *(int *)(puVar2 + 0x17c)) != 0) {
        FUN_005757c8(uVar3);
      }
      uVar3 = uVar4;
    } while (uVar4 < *(uint *)(*(int *)puVar1 + 0x100));
  }
  return 0;
}


// 0x0575a94 (0xf0 bytes)
undefined8 FUN_00575a94(undefined4 param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar1 = *(int *)(PTR_DAT_0071b574 + 0x138);
  if (iVar1 != 0) {
    iVar2 = FUN_0057cdb0(iVar1,*(undefined4 *)(iVar1 + 0x404));
    if (iVar2 == 0) {
      return 0x13;
    }
    iVar3 = FUN_005745d0(param_1);
    if (iVar3 != 0) {
      if (*(int *)(iVar3 + 0xc) != *(int *)(iVar1 + 0x404)) {
        return 0x22;
      }
      *(undefined4 *)(iVar2 + 4) = param_1;
      FUN_0057ce10(iVar1,0xffffffffffffffff);
      return 0;
    }
  }
  return 10;
}


// 0x0575b84 (0xfc bytes)
int FUN_00575b84(void)

{
  undefined4 *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  int iVar4;
  GPiece<16> local_30;
  
  puVar3 = PTR_DAT_0071b574;
  puVar2 = PTR_DAT_0071b570;
  iVar4 = *(int *)(PTR_DAT_0071b574 + 0x138);
  if ((iVar4 != 0) && (*(int *)(*(int *)PTR_DAT_0071b570 + 0x128) == 0)) {
    if (*(int *)(iVar4 + 0x400) == 0) {
      return 10;
    }
    if (*(int *)(*(int *)(iVar4 + 0x400) + 0xc) - 4U < 2) {
      iVar4 = FUN_0057ce10(iVar4,0xffffffffffffffff);
      if (iVar4 != 0) {
        return iVar4;
      }
      puVar1 = *(undefined4 **)(puVar3 + 0x140);
      *(undefined4 *)(*(int *)puVar2 + 0x128) = 1;
      if (puVar1 == (undefined4 *)0x0) {
        return 0;
      }
      (*(code *)*puVar1)(local_30);
      *(undefined4 *)(puVar3 + 0x144) = 0;
      *(undefined4 *)(puVar3 + 0x140) = 0;
      return 0;
    }
  }
  return 0;
}


// 0x0575c80 (0x378 bytes)
undefined8 FUN_00575c80(undefined4 *param_1)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar6;
  longlong lVar5;
  undefined4 local_100;
  undefined2 local_fc;
  GPiece<4> local_f8;
  undefined4 local_f4;
  undefined1 local_f0;
  undefined2 local_ee;
  int local_ec;
  undefined4 local_e8;
  undefined4 local_e4;
  undefined4 local_e0;
  undefined4 local_dc;
  int local_d8;
  undefined4 local_d4;
  undefined4 local_d0;
  undefined4 local_cc;
  undefined4 local_c8;
  undefined4 local_c4;
  GPiece<48> auStack_c0;
  int local_90;
  undefined1 local_8c;
  undefined4 local_88;
  undefined4 local_84;
  GPiece<16> auStack_80;
  GPiece<16> auStack_70;
  undefined4 local_5c;
  undefined4 local_58;
  undefined8 uStack_50;
  undefined4 *local_48;
  
  iVar1 = *(int *)(PTR_DAT_0071b574 + 0x138);
  uVar2 = *param_1;
  if (iVar1 == 0) {
    return 10;
  }
  iVar6 = FUN_005745d0(uVar2);
  if (iVar6 != 0) {
    uStack_50 = 0;
    auStack_80 = (GPiece<16>)0x0;
    auStack_70 = (GPiece<16>)0x0;
    local_8c = 0x50;
    local_5c = *(undefined4 *)(iVar1 + 0x44c);
    local_90 = iVar1;
    if (*(int *)(iVar6 + 0x10) == *(int *)(iVar1 + 0x404)) {
      if (*(int *)(iVar6 + 0xc) == -1) {
        local_f4 = param_1[1];
        if (*(int *)(iVar1 + 0x4f8) != 0) {
          local_e8 = *(undefined4 *)(iVar1 + 0x404);
          local_e0 = *(undefined4 *)(iVar1 + 0x4fc);
          local_ec = iVar1;
          local_e4 = uVar2;
          local_dc = local_f4;
          lVar5 = (*(code *)**(undefined4 **)(iVar1 + 0x4f8))(&local_ec);
          if (lVar5 != 1) {
            if (*(int *)(iVar1 + 0x4f0) == 0) {
              return 0xc;
            }
            local_d4 = *(undefined4 *)(iVar6 + 0xc);
            local_c4 = param_1[1];
            local_c8 = *(undefined4 *)(iVar1 + 0x4f4);
            local_cc = (undefined4)lVar5;
            local_d8 = iVar1;
            local_d0 = uVar2;
            (*(code *)**(undefined4 **)(iVar1 + 0x4f0))(&local_d8);
            return 0;
          }
        }
        iVar3 = *(int *)(iVar1 + 0x4f0);
        uVar4 = *(undefined4 *)(iVar1 + 0x404);
        *(undefined4 *)(iVar6 + 0xc) = uVar4;
        if (iVar3 == 0) {
          FUN_00574838(uVar4,uVar2,0xfffffffffffffffe);
        }
        else {
          local_c4 = param_1[1];
          local_d4 = *(undefined4 *)(iVar6 + 0xc);
          local_c8 = *(undefined4 *)(iVar1 + 0x4f4);
          local_cc = 1;
          local_d8 = iVar1;
          local_d0 = uVar2;
          (*(code *)**(undefined4 **)(iVar1 + 0x4f0))(&local_d8);
        }
        local_ee = (short)uVar2;
        local_f8[0] = FUN_00541a44(*(undefined4 *)(iVar6 + 0xc));
        local_f0 = 1;
        local_48 = (undefined4 *)local_f8;
        local_84 = 0xffffffff;
        local_58 = 0xc;
        local_88 = 0xc;
        FUN_00546bdc(&local_90,auStack_c0,0);
        return 0;
      }
    }
    else if (*(int *)(iVar6 + 0xc) == -1) {
      local_100 = param_1[1];
      local_84 = *(undefined4 *)(iVar6 + 0x10);
      local_88 = 0xb;
      local_48 = &local_100;
      local_58 = 8;
      local_fc = (short)uVar2;
      FUN_00546bdc(&local_90,auStack_c0,0);
      return 0;
    }
    return 0xc;
  }
  return 10;
}


// 0x0575ff8 (0x180 bytes)
undefined8 FUN_00575ff8(uint param_1)

{
  undefined *puVar1;
  int iVar2;
  int iVar3;
  undefined2 local_a0 [2];
  GPiece<48> auStack_9c;
  undefined4 local_6c;
  undefined1 local_68;
  undefined4 local_64;
  undefined4 local_60;
  undefined4 local_38;
  undefined4 local_34;
  undefined2 *local_24;
  
  puVar1 = PTR_DAT_0071b574;
  iVar3 = *(int *)(PTR_DAT_0071b574 + 0x138);
  if ((iVar3 == 0) || (iVar2 = FUN_005745d0(param_1), iVar2 == 0)) {
    return 10;
  }
  iVar3 = *(int *)(iVar3 + 0x404);
  if ((*(int *)(iVar2 + 0xc) != iVar3) && (*(int *)(iVar2 + 0x10) != iVar3)) {
LAB_0057605c:
    FUN_005757c8(param_1);
    return 0;
  }
  if (param_1 < *(uint *)(*(int *)PTR_DAT_0071b570 + 0x100)) {
    local_a0[0] = (undefined2)param_1;
    memset(&local_6c,0,0x4c);
    local_6c = *(undefined4 *)(puVar1 + 0x138);
    local_68 = 0x50;
    local_60 = 0xffffffff;
    local_38 = 0x100;
    local_64 = 10;
    local_24 = local_a0;
    local_34 = 2;
    iVar3 = FUN_00546bdc(&local_6c,auStack_9c,0);
    if (iVar3 == 0) goto LAB_0057605c;
  }
  return 0;
}


// 0x0576178 (0x284 bytes)
undefined8 FUN_00576178(int param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  int iVar3;
  undefined8 uVar4;
  uint uVar5;
  int iVar6;
  GPiece<4> local_b0;
  GPiece<48> auStack_ac;
  int local_7c;
  undefined1 local_78;
  undefined4 local_74;
  undefined4 local_70;
  undefined4 local_48;
  undefined4 local_44;
  undefined1 *local_34;
  
  puVar2 = PTR_DAT_0071b574;
  if (param_1 == 0) {
    return 3;
  }
  uVar4 = 0xf;
  if (*(int *)(PTR_DAT_0071b574 + 0x138) != 0) {
    FUN_005412c4(param_1,0);
    local_b0[0] = FUN_00541a44(*(undefined4 *)(param_1 + 0x404));
    memset(&local_7c,0,0x4c);
    local_48 = *(undefined4 *)(param_1 + 0x44c);
    local_78 = 0x50;
    local_70 = 0xffffffff;
    local_74 = 0x12;
    local_34 = local_b0;
    local_44 = 1;
    local_7c = param_1;
    FUN_00546bdc(&local_7c,auStack_ac,0);
    puVar1 = PTR_DAT_0071b570;
    if ((*(int *)(puVar2 + 0x130) != 0) && (*(int *)(*(int *)PTR_DAT_0071b570 + 0x10c) != 0)) {
      uVar5 = 0;
      iVar6 = 0;
      do {
        iVar3 = *(int *)(puVar2 + 0x130);
        uVar5 = uVar5 + 1;
        if (*(int *)(iVar6 + iVar3 + 0x10) != 0) {
          FUN_005472a4(iVar6 + iVar3 + 0x10);
          iVar3 = *(int *)(puVar2 + 0x130);
        }
        iVar3 = iVar6 + iVar3;
        iVar6 = iVar6 + 0x48;
        iVar3 = iVar3 + 0x2c;
        if (iVar3 != 0) {
          FUN_005c2ab8(iVar3);
        }
      } while (uVar5 < *(uint *)(*(int *)puVar1 + 0x10c));
    }
    FUN_00575a08();
    FUN_0057d05c(param_1);
    iVar6 = *(int *)puVar1;
    iVar3 = *(int *)(param_1 + 0x400);
    *(undefined4 *)(puVar2 + 0x138) = 0;
    *(undefined4 *)(iVar6 + 0x128) = 0;
    *(undefined4 *)(iVar6 + 0x124) = 0;
    if (iVar3 == 0) {
      return 3;
    }
    *(undefined4 *)(iVar3 + 0x14) = 0;
    *(undefined4 *)(iVar3 + 0xc) = 2;
    *(undefined4 *)(iVar3 + 0x10) = 0;
    FUN_0054a110(param_1,0xffffffffffffffff,0);
    iVar6 = *(int *)(*(int *)PTR_PTR_0071b670 + 0x1088);
    while (iVar6 != 0) {
      FUN_00574908(iVar6,0x100);
      *(undefined4 *)(iVar6 + 0x4f0) = 0;
      *(undefined4 *)(iVar6 + 0x4f4) = 0;
      *(undefined4 *)(iVar6 + 0x4f8) = 0;
      *(undefined4 *)(iVar6 + 0x4fc) = 0;
      iVar6 = *(int *)(iVar6 + 0x534);
    }
    FUN_005745b8();
    iVar6 = *(int *)puVar1;
    uVar4 = 0;
    *(undefined4 *)(puVar2 + 0x144) = 0;
    *(undefined4 *)(puVar2 + 0x120) = 0;
    *(undefined4 *)(iVar6 + 0x154) = 0;
    *(undefined4 *)(puVar2 + 0x140) = 0;
    *(undefined4 *)(iVar6 + 0x148) = 0;
    *(undefined4 *)(iVar6 + 0x14c) = 0;
    *(undefined4 *)(iVar6 + 0x150) = 0;
  }
  return uVar4;
}


// 0x05763fc (0x598 bytes)
/* WARNING: Removing unreachable block (ram,0x00576960) */

int FUN_005763fc(int param_1,int param_2,int param_3)

{
  undefined *puVar1;
  int iVar2;
  int iVar3;
  size_t *psVar4;
  undefined4 *puVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  GPiece<2> local_160;
  GPiece<2> local_15e;
  GPiece<4> local_15c;
  GPiece<4> local_158;
  GPiece<24> auStack_154;
  int local_13c;
  GPiece<48> auStack_138;
  GPiece<16> local_108;
  GPiece<60> local_f8;
  GPiece<108> local_bc;
  
  puVar1 = PTR_DAT_0071b574;
  iVar9 = 3;
  if (param_2 != 0) {
    iVar9 = *(int *)(PTR_DAT_0071b574 + 0x138);
    if (iVar9 != 0) {
      if ((*(char *)(param_2 + 9) != '\0') && (param_3 == 0)) {
        memset(local_bc,0,0x60);
        FUN_0055b100(*(undefined4 *)(puVar1 + 0x138),local_bc);
        (*(code *)**(undefined4 **)((uint)*(byte *)(param_2 + 9) * 8 + *(int *)(puVar1 + 0x168)))
                  (local_bc);
      }
      psVar4 = (size_t *)((uint)*(byte *)(param_2 + 8) * 0x30 + *(int *)(puVar1 + 0x170));
      if (psVar4 == (size_t *)0x0) {
        return 1;
      }
      if ((*(int *)(param_2 + 0xc) == -1) || (*(int *)(iVar9 + 0x404) == *(int *)(param_2 + 0xc))) {
        FUN_0055442c(auStack_154,puVar1 + 0x180,puVar1 + 0x6f6,1);
        FUN_00541a44(*(undefined4 *)(param_2 + 0x10));
        FUN_00554290(auStack_154,local_160);
        FUN_00554290(auStack_154,param_2 + 8);
        FUN_00554290(auStack_154,param_2 + 9);
        FUN_00554290(auStack_154,param_2 + 0xb);
        FUN_00554290(auStack_154,param_2 + 10);
        FUN_00554160(auStack_154,local_15e);
        FUN_00554160(auStack_154,local_15e);
        FUN_00553f04(auStack_154,param_2 + 0x38);
        FUN_00553f04(auStack_154,param_2 + 0x3c);
        FUN_00553b40(auStack_154,param_2 + 0x14,0x10);
        puVar1 = PTR_PTR_0071b670;
        if (0 < (int)psVar4[1]) {
          iVar2 = *(int *)psVar4[10];
          if (iVar2 == 0) {
            return 1;
          }
          iVar8 = 0;
          iVar3 = 4;
          iVar6 = 0;
          while( true ) {
            iVar7 = iVar3;
            iVar8 = iVar8 + 1;
            iVar2 = FUN_00574d38(auStack_154,
                                 *(int *)(param_2 + 0x24) + *(int *)(iVar6 + psVar4[0xb]),iVar2);
            if (iVar2 != 0) {
              return iVar2;
            }
            *(undefined4 *)(iVar6 + *(int *)(param_2 + 0x48)) = *(undefined4 *)(*(int *)puVar1 + 4);
            if ((int)psVar4[1] <= iVar8) break;
            iVar2 = *(int *)(iVar7 + psVar4[10]);
            iVar3 = iVar7 + 4;
            iVar6 = iVar7;
            if (iVar2 == 0) {
              return 1;
            }
          }
        }
        iVar2 = FUN_005543a4(auStack_154,local_15c);
        if (iVar2 == 0) {
          return local_13c;
        }
        memset(local_108,0,0x4c);
        iVar2 = *(int *)(iVar9 + 0x44c);
        iVar3 = FUN_00546bdc(local_108,auStack_138,0);
        puVar1 = PTR_PTR_0071b670;
        if (param_1 != -1) {
          if (param_1 == 0x100) {
            if (iVar3 != 0) {
              return iVar3;
            }
            if (0 < iVar2) {
              iVar9 = 0;
              do {
                FUN_0055abd4(local_f8,iVar9,local_158);
                iVar9 = iVar9 + 1;
              } while (iVar9 < iVar2);
            }
            return 0;
          }
          if (iVar3 != 0) {
            return iVar3;
          }
          *(undefined4 *)(param_1 * 4 + *(int *)(param_2 + 0x44)) =
               *(undefined4 *)(*(int *)PTR_PTR_0071b670 + 4);
          return 0;
        }
        if (iVar3 != 0) {
          return iVar3;
        }
        if (0 < *(int *)(iVar9 + 0x44c)) {
          iVar3 = 0;
          iVar2 = *(int *)PTR_PTR_0071b670;
          puVar5 = *(undefined4 **)(param_2 + 0x44);
          do {
            iVar3 = iVar3 + 1;
            *puVar5 = *(undefined4 *)(iVar2 + 4);
            puVar5 = puVar5 + 1;
          } while (iVar3 < *(int *)(iVar9 + 0x44c));
        }
        *(undefined4 *)(param_2 + 0x40) = *(undefined4 *)(*(int *)puVar1 + 4);
        memcpy(*(void **)(param_2 + 0x28),*(void **)(param_2 + 0x24),*psVar4);
        return 0;
      }
    }
    iVar9 = 10;
  }
  return iVar9;
}


// 0x0576994 (0x78c bytes)
ulonglong FUN_00576994(int param_1,undefined8 param_2,int param_3)

{
  int iVar1;
  int iVar2;
  undefined *puVar3;
  undefined *puVar4;
  byte bVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  uint uVar10;
  uint *puVar11;
  ulonglong uVar12;
  int iVar13;
  int iVar14;
  ulonglong uVar15;
  void *__dest;
  void *__src;
  byte local_200 [4];
  GPiece<4> local_1fc;
  GPiece<4> local_1f8;
  undefined1 local_1f4;
  undefined1 local_1f3;
  GPiece<2> local_1f2;
  GPiece<24> local_1f0;
  GPiece<24> auStack_1d8;
  undefined4 local_1c0;
  GPiece<24> auStack_1bc;
  undefined4 local_1a4;
  GPiece<48> auStack_1a0;
  GPiece<64> local_170;
  undefined8 uStack_130;
  GPiece<48> local_124;
  GPiece<100> auStack_f4;
  
  uVar10 = 3;
  if (param_1 == 0) goto LAB_00576ef4;
  uStack_130 = 0;
  memset(local_124,0,0x60);
  puVar4 = PTR_DAT_0071b574;
  puVar3 = PTR_DAT_0071b574 + 0x700;
  FUN_0055442c(auStack_1bc,PTR_DAT_0071b574 + 0x6f8,puVar3,1);
  FUN_0055442c(auStack_1d8,puVar3,puVar4 + 0xc6e,1);
  local_200[0] = 0;
  uVar10 = (uint)*(byte *)(param_1 + 8);
  if ((uVar10 < *(uint *)(*(int *)PTR_DAT_0071b570 + 0xf8)) &&
     (iVar7 = uVar10 * 0x30 + *(int *)(puVar4 + 0x170), iVar7 != 0)) {
    uVar12 = 0;
    if (0 < *(int *)(iVar7 + 4)) {
      uVar15 = 0;
      iVar14 = 0;
      do {
        uVar10 = (uint)uVar12;
        iVar8 = (int)(uVar12 << 2);
        iVar1 = *(int *)(iVar8 + *(int *)(iVar7 + 0x28));
        if (iVar1 != 0) {
          puVar11 = (uint *)(param_1 + 0x34);
          if (0x1f < uVar12) {
            uVar10 = uVar10 >> 1;
            puVar11 = (uint *)(param_1 + 0x30);
          }
          if ((1 << (uVar10 & 0x3f) & *puVar11) == 0) {
            if ((*(int *)(iVar1 + 0x18) != 0) &&
               ((param_3 != 0 ||
                ((uint)(*(int *)(iVar8 + *(int *)(param_1 + 0x48)) + *(int *)(iVar1 + 0x14)) <
                 *(uint *)(*(int *)PTR_PTR_0071b670 + 4))))) {
              iVar9 = *(int *)(param_1 + 0x24);
              iVar6 = *(int *)(param_1 + 0x28);
              iVar13 = (uint)*(byte *)(param_1 + 8) * 0x30 + *(int *)(puVar4 + 0x170);
              iVar2 = *(int *)(iVar8 + *(int *)(iVar7 + 0x2c));
              __src = (void *)(iVar9 + iVar2);
              __dest = (void *)(iVar2 + iVar6);
              if ((iVar13 != 0) &&
                 (((iVar2 = *(int *)(iVar8 + *(int *)(iVar13 + 0x28)), iVar2 != 0 &&
                   (iVar8 = *(int *)(iVar8 + *(int *)(iVar13 + 0x2c)), iVar9 != 0)) && (iVar6 != 0))
                 )) {
                iVar6 = iVar6 + iVar8;
                iVar9 = iVar9 + iVar8;
                if (*(int *)(iVar2 + 0x18) == 5) {
                  if ((*(undefined4 **)(iVar2 + 0x1c) != (undefined4 *)0x0) &&
                     (iVar8 = (*(code *)**(undefined4 **)(iVar2 + 0x1c))(local_1f0), iVar8 != 0))
                  goto LAB_00576b54;
                }
                else {
                  uVar12 = (ulonglong)*(uint *)(iVar2 + 8);
                  if (0 < (int)*(uint *)(iVar2 + 8)) {
                    while( true ) {
                      if (((iVar9 != 0) && (iVar6 != 0)) && (*(uint *)(iVar2 + 0xc) < 0x10)) {
                    /* WARNING: Could not recover jumptable at 0x00576d84. Too many branches */
                    /* WARNING: Treating indirect jump as call */
                        uVar12 = (*(code *)(PTR_DAT_0071b674 +
                                           *(int *)(PTR_DAT_0071b674 + *(uint *)(iVar2 + 0xc) * 4)))
                                           ();
                        return uVar12;
                      }
                      uVar12 = uVar12 - 1;
                      if (uVar12 == 0) break;
                      iVar6 = iVar6 + *(int *)(iVar2 + 4);
                      iVar9 = iVar9 + *(int *)(iVar2 + 4);
                    }
                  }
                }
              }
            }
          }
          else {
            iVar8 = *(int *)(iVar8 + *(int *)(iVar7 + 0x2c));
            __dest = (void *)(iVar8 + *(int *)(param_1 + 0x28));
            __src = (void *)(iVar8 + *(int *)(param_1 + 0x24));
LAB_00576b54:
            FUN_00554290(auStack_1d8,local_200);
            iVar8 = FUN_00574d38(auStack_1d8,__src,iVar1);
            if (iVar8 != 0) {
              bVar5 = (byte)iVar8;
              goto LAB_00576dcc;
            }
            if (iVar14 == 0) {
              iVar14 = *(int *)(iVar1 + 0x10);
            }
            uVar15 = uVar15 + 1;
            FUN_0055ac68(auStack_f4,local_200[0]);
            memcpy(__dest,__src,*(int *)(iVar1 + 4) * *(int *)(iVar1 + 8));
            *(undefined4 *)((uint)local_200[0] * 4 + *(int *)(param_1 + 0x48)) =
                 *(undefined4 *)(*(int *)PTR_PTR_0071b670 + 4);
          }
        }
        local_200[0] = local_200[0] + 1;
        uVar12 = (ulonglong)local_200[0];
      } while ((int)(uint)local_200[0] < *(int *)(iVar7 + 4));
      bVar5 = (byte)uVar15 | 0x80;
      if (iVar14 != 0) goto LAB_00576dcc;
      uVar12 = uVar15 & 0xff;
    }
    bVar5 = (byte)uVar12 & 0x7f;
  }
  else {
    bVar5 = 0;
  }
LAB_00576dcc:
  iVar7 = FUN_005543a4(auStack_1d8,local_1fc);
  if (iVar7 == 0) {
    uVar10 = FUN_00540808(local_1c0);
  }
  else {
    if ((char)bVar5 < '\0') {
      FUN_00554290(auStack_1bc,&local_1f4);
      FUN_00554290(auStack_1bc,&local_1f3);
      FUN_00554160(auStack_1bc,local_1f2);
      FUN_00553f04(auStack_1bc,*(int *)PTR_PTR_0071b670 + 4);
      iVar7 = FUN_005543a4(auStack_1bc,local_1f8);
    }
    else {
      FUN_00553f04(auStack_1bc,*(int *)PTR_PTR_0071b670 + 4);
      FUN_00554290(auStack_1bc,&local_1f4);
      FUN_00554290(auStack_1bc,&local_1f3);
      FUN_00554160(auStack_1bc,local_1f2);
      iVar7 = FUN_005543a4(auStack_1bc,local_1f8);
    }
    if (iVar7 == 0) {
      uVar10 = FUN_00540808(local_1a4);
    }
    else {
      uVar10 = 0;
      if (bVar5 != 0) {
        if (*(char *)(param_1 + 9) != '\0') {
          FUN_0055b100(*(undefined4 *)(puVar4 + 0x138),local_124);
          (*(code *)**(undefined4 **)((uint)*(byte *)(param_1 + 9) * 8 + *(int *)(puVar4 + 0x168)))
                    (local_124);
        }
        uVar10 = FUN_00546bdc(local_170,auStack_1a0,0);
        if (uVar10 == 0) {
          *(undefined4 *)(param_1 + 0x30) = 0;
          *(undefined4 *)(param_1 + 0x34) = 0;
        }
      }
    }
  }
LAB_00576ef4:
  return (ulonglong)uVar10;
}


// 0x05776c8 (0x170 bytes)
void FUN_005776c8(void)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  undefined *puVar4;
  int *piVar5;
  uint uVar6;
  
  puVar4 = PTR_PTR_0071b670;
  iVar1 = *(int *)(PTR_DAT_0071b574 + 0x138);
  if ((iVar1 != 0) && (uVar2 = *(uint *)(iVar1 + 0x404), uVar2 < 0x100)) {
    for (iVar3 = *(int *)(PTR_DAT_0071b574 + 300); iVar3 != 0; iVar3 = *(int *)(iVar3 + 0x54)) {
      if (*(int *)(iVar3 + 0x40) == 0) {
        FUN_005763fc(0xffffffffffffffff,iVar3,1);
      }
      else if ((*(int *)(iVar3 + 0x3c) == 0) ||
              (*(uint *)(*(int *)puVar4 + 4) <=
               (uint)(*(int *)(iVar3 + 0x40) + *(int *)(iVar3 + 0x3c)))) {
        uVar6 = 0;
        if (0 < *(int *)(iVar1 + 0x44c)) {
          do {
            piVar5 = (int *)FUN_0057cdb0(iVar1,uVar6);
            if ((((piVar5 != (int *)0x0) && (uVar2 != uVar6)) &&
                (*(int *)(uVar6 * 4 + *(int *)(iVar3 + 0x44)) == 0)) && (*piVar5 != 0)) {
              FUN_005763fc(uVar6,iVar3,1);
            }
            uVar6 = uVar6 + 1;
          } while ((int)uVar6 < *(int *)(iVar1 + 0x44c));
        }
        FUN_00576994(iVar3,0,0);
      }
      else {
        FUN_005763fc(0xffffffffffffffff,iVar3,0);
      }
    }
  }
  return;
}


// 0x0577838 (0x34 bytes)
void FUN_00577838(void)

{
  undefined4 uVar1;
  
  uVar1 = FUN_005745d0();
  FUN_00576994(uVar1,0,0);
  return;
}


// 0x057786c (0x224 bytes)
undefined8 FUN_0057786c(undefined4 *param_1)

{
  undefined4 uVar1;
  int iVar2;
  undefined *puVar3;
  int iVar4;
  undefined4 local_e0;
  undefined2 local_dc;
  undefined4 local_d8;
  undefined4 local_d4;
  undefined4 local_d0;
  undefined4 local_cc;
  undefined4 local_c8;
  undefined4 local_c4;
  GPiece<48> auStack_c0;
  int local_90;
  undefined1 local_8c;
  undefined4 local_88;
  undefined4 local_84;
  GPiece<16> auStack_80;
  GPiece<16> auStack_70;
  undefined4 local_5c;
  undefined4 local_58;
  undefined8 uStack_50;
  undefined4 *local_48;
  
  puVar3 = PTR_DAT_0071b574;
  uVar1 = *param_1;
  iVar2 = *(int *)(PTR_DAT_0071b574 + 0x138);
  if (iVar2 != 0) {
    iVar4 = FUN_005745d0(uVar1);
    if ((iVar4 != 0) && (*(int *)(iVar4 + 0xc) == *(int *)(iVar2 + 0x404))) {
      *(undefined4 *)(iVar4 + 0xc) = 0xffffffff;
      if (*(int *)(iVar4 + 0x10) != *(int *)(iVar2 + 0x404)) {
        FUN_00574608(uVar1);
      }
      local_e0 = param_1[1];
      local_dc = (undefined2)uVar1;
      FUN_00576994(iVar4,0x50,1);
      local_90 = *(int *)(puVar3 + 0x138);
      auStack_80 = (GPiece<16>)0x0;
      local_84 = 0xffffffff;
      auStack_70 = (GPiece<16>)0x0;
      uStack_50 = 0;
      local_8c = 0x50;
      local_5c = *(undefined4 *)(local_90 + 0x44c);
      local_88 = 0xd;
      local_48 = &local_e0;
      local_58 = 8;
      FUN_00546bdc(&local_90,auStack_c0,0);
      if (*(int *)(iVar2 + 0x4f0) == 0) {
        FUN_00574838(*(undefined4 *)(iVar4 + 0xc),uVar1,0xfffffffffffffffe);
        return 0;
      }
      local_d8 = *(undefined4 *)(puVar3 + 0x138);
      local_d4 = *(undefined4 *)(iVar4 + 0xc);
      local_c4 = param_1[1];
      local_c8 = *(undefined4 *)(iVar2 + 0x4f4);
      local_cc = 4;
      local_d0 = uVar1;
      (*(code *)**(undefined4 **)(iVar2 + 0x4f0))(&local_d8);
      return 0;
    }
  }
  return 10;
}


// 0x0577a90 (0x104 bytes)
int FUN_00577a90(uint param_1)

{
  undefined1 *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  int iVar4;
  uint uVar5;
  
  puVar3 = PTR_DAT_0071b574;
  puVar2 = PTR_DAT_0071b570;
  if (*(uint *)(*(int *)PTR_DAT_0071b570 + 0x10c) <= param_1) {
    return 0;
  }
  if (*(int *)(PTR_DAT_0071b574 + 0x130) == 0) {
    iVar4 = FUN_00547ec0(*(uint *)(*(int *)PTR_DAT_0071b570 + 0x10c) * 0x48);
    *(int *)(puVar3 + 0x130) = iVar4;
    if (iVar4 == 0) {
      return 0;
    }
    if (*(int *)(*(int *)puVar2 + 0x10c) != 0) {
      uVar5 = 0;
      iVar4 = 0;
      do {
        uVar5 = uVar5 + 1;
        puVar1 = (undefined1 *)(iVar4 + *(int *)(puVar3 + 0x130));
        iVar4 = iVar4 + 0x48;
        *puVar1 = 0;
      } while (uVar5 < *(uint *)(*(int *)puVar2 + 0x10c));
    }
  }
  return param_1 * 0x48 + *(int *)(puVar3 + 0x130);
}


// 0x0577b94 (0xc0 bytes)
undefined8 FUN_00577b94(undefined4 *param_1,undefined4 param_2)

{
  char *pcVar1;
  int iVar2;
  GPiece<24> local_20;
  
  if (param_1 != (undefined4 *)0x0) {
    *param_1 = 0;
    pcVar1 = (char *)FUN_00577a90(param_2);
    if (pcVar1 != (char *)0x0) {
      if (*pcVar1 != '\x02') {
        return 0xb;
      }
      if (pcVar1[4] == '\0') {
        iVar2 = FUN_005c2178(pcVar1 + 0x2c,local_20);
        if (iVar2 == 0) {
          *param_1 = 0;
          return 0;
        }
        return 0xb;
      }
      return 0xb;
    }
  }
  return 3;
}


// 0x0577c54 (0x19c bytes)
int FUN_00577c54(uint param_1,int param_2,int param_3)

{
  int iVar1;
  int iVar2;
  GPiece<16> local_30;
  
  if (((*(uint *)(*(int *)PTR_DAT_0071b570 + 0x10c) <= param_1) || (param_2 == 0)) || (param_3 < 1))
  {
    return 3;
  }
  iVar1 = FUN_00577b94(local_30,param_1);
  if (iVar1 == 0) {
    if (param_3 < 1) {
      iVar1 = FUN_00577a90(param_1);
      if (iVar1 == 0) {
        return 3;
      }
      if (*(int *)(PTR_DAT_0071b574 + 0x138) == 0) {
        return 10;
      }
      if (*(int *)(*(int *)(PTR_DAT_0071b574 + 0x138) + 0x404) != *(int *)(iVar1 + 0xc)) {
        return 0xb;
      }
      iVar2 = FUN_005c2544(iVar1 + 0x2c,param_2,param_3);
      if (iVar2 == 0) {
        FUN_005c282c(iVar1 + 0x2c,1);
        memcpy(*(void **)(iVar1 + 0x10),*(void **)(iVar1 + 0x3c),*(size_t *)(iVar1 + 0x34));
        return 0;
      }
    }
    iVar1 = 0x1a;
  }
  return iVar1;
}


// 0x0577df0 (0x28 bytes)
undefined4 FUN_00577df0(undefined4 param_1)

{
  undefined4 uVar1;
  
  uVar1 = FUN_00577a90(param_1);
  return uVar1;
}


// 0x0577e18 (0x534 bytes)
void FUN_00577e18(int param_1,uint param_2)

{
  bool bVar1;
  uint uVar2;
  int iVar3;
  undefined *puVar4;
  undefined *puVar5;
  int iVar6;
  int iVar7;
  char *pcVar8;
  int iVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  uint local_e0;
  GPiece<12> local_dc;
  GPiece<16> local_d0;
  GPiece<56> local_c0;
  
  puVar5 = PTR_DAT_0071b574;
  if (param_1 == 0) {
    return;
  }
  if (*(int *)(PTR_DAT_0071b574 + 0x138) != param_1) {
    return;
  }
  iVar6 = FUN_0054170c(param_1,param_2);
  if (iVar6 == 0) {
    return;
  }
  *(undefined4 *)(iVar6 + 0xc) = 2;
  *(undefined4 *)(iVar6 + 0x14) = 0;
  *(undefined4 *)(iVar6 + 0x10) = 0;
  FUN_00574744(&local_e0,param_1);
  if (param_2 == local_e0) {
    if (0xff < param_2) {
      return;
    }
    uVar12 = 0;
    uVar11 = 0xfffffff;
    uVar10 = 0x100;
    do {
      if (((param_2 != uVar12) && (iVar6 = FUN_0054170c(param_1,uVar12), iVar6 != 0)) &&
         (*(int *)(iVar6 + 0xc) == 4)) {
        uVar2 = *(uint *)(iVar6 + 0x1c);
        if ((uVar2 != 0) && (uVar2 < uVar11)) {
          uVar10 = uVar12;
          uVar11 = uVar2;
        }
      }
      bVar1 = uVar12 != 0xff;
      uVar12 = uVar12 + 1;
    } while (bVar1);
    if (uVar10 == 0x100) {
      return;
    }
    iVar6 = FUN_0054170c(param_1,uVar10);
    if (iVar6 == 0) {
      return;
    }
    *(undefined4 *)(iVar6 + 0xc) = 5;
    FUN_00574908(param_1,uVar10);
    if (*(undefined4 **)(*(int *)PTR_DAT_0071b570 + 0x150) != (undefined4 *)0x0) {
      (*(code *)**(undefined4 **)(*(int *)PTR_DAT_0071b570 + 0x150))(local_dc);
    }
    if (0 < *(int *)(param_1 + 0x44c)) {
      uVar11 = 0;
      do {
        iVar6 = FUN_0054170c(param_1,uVar11);
        if (((iVar6 != 0) && (*(int *)(iVar6 + 0x20) != 0)) &&
           ((*(int *)(iVar6 + 0xc) == 3 && (uVar10 != uVar11)))) {
          FUN_0057a288(param_1,uVar11,*(undefined4 *)(iVar6 + 0x10),*(undefined4 *)(iVar6 + 0x14));
        }
        uVar11 = uVar11 + 1;
      } while ((int)uVar11 < *(int *)(param_1 + 0x44c));
    }
  }
  iVar6 = FUN_0057cdb0(param_1,param_2);
  puVar4 = PTR_DAT_0071b570;
  if (iVar6 != 0) {
    if (*(undefined4 **)(*(int *)PTR_DAT_0071b570 + 0x148) != (undefined4 *)0x0) {
      (*(code *)**(undefined4 **)(*(int *)PTR_DAT_0071b570 + 0x148))(local_d0);
    }
    if (0 < *(int *)(puVar5 + 0x120)) {
      iVar9 = 0;
      do {
        iVar7 = FUN_005745d0(iVar9);
        if ((iVar7 != 0) && (*(int *)(iVar7 + 4) == 2)) {
          *(undefined4 *)(param_2 * 4 + *(int *)(iVar7 + 0x44)) = 0;
          uVar10 = *(uint *)(iVar7 + 0x10);
          if (uVar10 == param_2) {
            if ((byte)(*(char *)(iVar7 + 10) - 3U) < 2) {
              FUN_00574744(iVar7 + 0x10,param_1);
              if (*(int *)(param_1 + 0x404) == *(int *)(iVar7 + 0x10)) {
                FUN_005746ac(iVar9);
              }
              if (*(uint *)(iVar7 + 0xc) == uVar10) {
                iVar3 = *(int *)(param_1 + 0x4f0);
                *(undefined4 *)(iVar7 + 0xc) = 0xffffffff;
                if (iVar3 != 0) goto LAB_005780c8;
                FUN_00574838(0xffffffffffffffff,iVar9,0xfffffffffffffffe);
              }
            }
            else {
              FUN_005757c8(iVar9);
            }
          }
          else if (*(uint *)(iVar7 + 0xc) == param_2) {
            *(undefined4 *)(iVar7 + 0xc) = 0xffffffff;
            if (*(uint *)(param_1 + 0x404) == uVar10) {
              FUN_005746ac(iVar9);
            }
            if (*(int *)(param_1 + 0x4f0) == 0) {
              FUN_00574838(*(undefined4 *)(iVar7 + 0xc),iVar9,0xfffffffffffffffe);
            }
            else {
LAB_005780c8:
              (*(code *)**(undefined4 **)(param_1 + 0x4f0))(local_c0);
            }
          }
        }
        iVar9 = iVar9 + 1;
      } while (iVar9 < *(int *)(puVar5 + 0x120));
    }
    uVar10 = *(uint *)(iVar6 + 0x10);
    if ((uVar10 < *(uint *)(*(int *)puVar4 + 0x10c)) && (uVar11 = 0, *(int *)(iVar6 + 0x14) != 0)) {
      while( true ) {
        iVar9 = uVar11 + uVar10;
        uVar11 = uVar11 + 1;
        pcVar8 = (char *)FUN_00577df0(iVar9);
        if (pcVar8 != (char *)0x0) {
          if ((*pcVar8 == '\x02') && (pcVar8[2] != '\0')) {
            FUN_005472a4(pcVar8 + 0x10);
          }
          *pcVar8 = '\0';
        }
        if (*(uint *)(iVar6 + 0x14) <= uVar11) break;
        uVar10 = *(uint *)(iVar6 + 0x10);
      }
    }
    FUN_0057d014(param_1,param_2);
  }
  return;
}


// 0x057834c (0x98 bytes)
void FUN_0057834c(int param_1)

{
  int iVar1;
  undefined1 *puVar2;
  uint uVar3;
  uint uVar4;
  
  if (((param_1 != 0) &&
      (uVar3 = *(uint *)(param_1 + 0x10), uVar3 < *(uint *)(*(int *)PTR_DAT_0071b570 + 0x10c))) &&
     (uVar4 = 0, *(int *)(param_1 + 0x14) != 0)) {
    while( true ) {
      iVar1 = uVar4 + uVar3;
      uVar4 = uVar4 + 1;
      puVar2 = (undefined1 *)FUN_00577df0(iVar1);
      if (puVar2 != (undefined1 *)0x0) {
        *puVar2 = 1;
      }
      if (*(uint *)(param_1 + 0x14) <= uVar4) break;
      uVar3 = *(uint *)(param_1 + 0x10);
    }
  }
  return;
}


// 0x05783e4 (0x1c0 bytes)
void FUN_005783e4(int param_1,uint param_2)

{
  undefined4 *puVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  GPiece<24> local_60;
  
  if ((param_2 < 0x100) && (param_1 != 0)) {
    puVar1 = (undefined4 *)FUN_0057cdb0(param_1,param_2);
    if (puVar1 == (undefined4 *)0x0) {
      puVar1 = (undefined4 *)FUN_0057d158(param_1,param_2);
    }
    iVar2 = FUN_0054170c(param_1,param_2);
    if (iVar2 != 0) {
      *puVar1 = *(undefined4 *)(*(int *)PTR_PTR_0071b670 + 4);
      FUN_0057834c(puVar1);
      iVar2 = *(int *)PTR_DAT_0071b570;
      if (*(int *)(iVar2 + 0x100) != 0) {
        uVar4 = 0;
        do {
          while ((iVar3 = FUN_005745d0(uVar4), iVar3 != 0 &&
                 ((*(int *)(iVar3 + 0x10) == *(int *)(param_1 + 0x404) ||
                  (*(int *)(iVar3 + 0xc) == *(int *)(param_1 + 0x404)))))) {
            uVar4 = uVar4 + 1;
            *(undefined4 *)(param_2 * 4 + *(int *)(iVar3 + 0x44)) = 0;
            if (*(uint *)(iVar2 + 0x100) <= uVar4) goto LAB_00578504;
          }
          uVar4 = uVar4 + 1;
        } while (uVar4 < *(uint *)(iVar2 + 0x100));
      }
LAB_00578504:
      if (*(undefined4 **)(iVar2 + 0x148) != (undefined4 *)0x0) {
        (*(code *)**(undefined4 **)(iVar2 + 0x148))(local_60);
      }
      FUN_0057ce10(param_1,param_2);
    }
  }
  return;
}


// 0x05785a4 (0x90 bytes)
void FUN_005785a4(undefined8 param_1,undefined8 param_2)

{
  int iVar1;
  
  iVar1 = FUN_0057cdb0();
  if ((iVar1 == 0) && (iVar1 = FUN_0057d158(param_1,param_2), iVar1 == 0)) {
    return;
  }
  *(undefined4 *)(iVar1 + 4) = *(undefined4 *)(*(int *)PTR_DAT_0071b570 + 0x100);
  FUN_0057834c(iVar1);
  return;
}


// 0x0578634 (0x604 bytes)
void FUN_00578634(void)

{
  int iVar1;
  undefined4 *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  char *pcVar7;
  ulonglong uVar6;
  ulonglong uVar8;
  int iVar10;
  int iVar11;
  char *pcVar12;
  int iVar13;
  longlong lVar9;
  undefined4 uVar14;
  short sVar15;
  ulonglong uVar16;
  uint uVar17;
  uint uVar18;
  undefined1 uVar19;
  ulonglong uVar20;
  undefined4 uVar21;
  undefined4 uVar22;
  undefined4 uVar23;
  undefined4 uVar24;
  GPiece<4> local_220;
  void *local_21c;
  uint local_218;
  int local_214;
  uint local_210;
  undefined1 local_20c;
  undefined1 local_20b;
  undefined1 local_20a;
  undefined1 local_209;
  undefined1 local_208;
  undefined1 uStack_207;
  short local_206;
  undefined2 local_204;
  undefined2 local_202;
  int local_1a0;
  undefined1 local_19c;
  undefined4 local_198;
  undefined4 local_194;
  undefined4 local_16c;
  undefined4 local_168;
  undefined1 *local_158;
  int local_154;
  undefined1 local_150;
  undefined4 local_14c;
  undefined4 local_148;
  undefined4 local_120;
  int local_11c;
  undefined *local_10c;
  uint local_100;
  undefined4 local_fc;
  ulonglong local_f8;
  ulonglong local_f0;
  ulonglong local_e8;
  ulonglong local_e0;
  ulonglong local_d8;
  ulonglong local_d0;
  ulonglong local_c8;
  ulonglong local_c0;
  size_t __n;
  
  puVar4 = PTR_DAT_0071b574;
  puVar3 = PTR_DAT_0071b570;
  uVar8 = ZEXT48(&stack0x00000000);
  iVar1 = *(int *)(PTR_DAT_0071b574 + 0x138);
  local_210 = 0x100;
  if (((iVar1 != 0) && (*(int *)(*(int *)PTR_DAT_0071b570 + 0x10c) != 0)) &&
     (iVar10 = FUN_0057cdb0(iVar1,*(undefined4 *)(iVar1 + 0x404)), iVar10 != 0)) {
    uVar17 = *(uint *)(*(int *)puVar3 + 0x10c);
    if (((uVar17 != *(uint *)(iVar10 + 0x10)) && (*(uint *)(iVar10 + 0x10) < uVar17)) &&
       ((iVar11 = FUN_00574744(uVar8 - 0x210,iVar1), iVar11 == 0 &&
        ((local_210 < 0x100 && (*(int *)(iVar10 + 0x14) != 0)))))) {
      uVar17 = 0;
      local_f8 = uVar8 - 0x1a0 & 0xffffffff;
      local_e8 = uVar8 - 0x154 & 0xffffffff;
      local_e0 = uVar8 - 0x218;
      local_c0 = uVar8 - 0x200;
      local_d0 = uVar8 - 0x214;
      local_c8 = uVar8 - 0x21c;
      uVar24 = 0;
      uVar23 = 0;
      uVar22 = 0;
      uVar21 = 0;
      do {
        uVar18 = uVar17 + *(int *)(iVar10 + 0x10);
        pcVar12 = (char *)FUN_00577a90(uVar18);
        if ((pcVar12 != (char *)0x0) && (*pcVar12 == '\x02')) {
          pcVar7 = pcVar12 + 0x2c;
          local_fc = *(undefined4 *)(pcVar12 + 8);
          local_218 = 0;
          FUN_005c20f0(pcVar7,local_e0 & 0xffffffff);
          uVar19 = (undefined1)uVar18;
          if ((pcVar12[4] == '\0') || (local_218 != 0)) {
            iVar11 = FUN_0054536c();
            puVar5 = PTR_DAT_0071b688;
            if (((local_218 != 0) && (iVar11 - *(int *)(pcVar12 + 0x28) != 0)) &&
               (uVar20 = (ulonglong)
                         (((float)(longlong)*(int *)(pcVar12 + 0x20) *
                          (float)(longlong)(iVar11 - *(int *)(pcVar12 + 0x28))) / DAT_0071b684),
               local_d8 = uVar20, (ulonglong)*(ushort *)(pcVar12 + 0x24) <= (uVar20 & 0xffffffff)))
            {
              local_100 = (uint)*(ushort *)(pcVar12 + 0x26);
              if (0xff < *(ushort *)(pcVar12 + 0x26)) {
                local_100 = 0xff;
              }
              do {
                uVar6 = (ulonglong)local_100;
                if ((ulonglong)local_218 < (ulonglong)local_100) {
                  uVar6 = (ulonglong)local_218;
                }
                uVar16 = uVar20;
                if (uVar6 < (uVar20 & 0xffffffff)) {
                  uVar16 = uVar6;
                }
                __n = (size_t)uVar16;
                local_21c = (void *)0x0;
                local_214 = 0;
                if ((int)__n < 1) {
LAB_00578b10:
                  iVar11 = 0;
                }
                else {
                  lVar9 = FUN_00577a90(uVar18);
                  iVar11 = (int)lVar9;
                  if (iVar11 == 0) goto LAB_00578b10;
                  local_20b = *(undefined1 *)(iVar11 + 5);
                  local_20a = *(undefined1 *)(iVar11 + 3);
                  local_f0 = lVar9 + 0x2cU & 0xffffffff;
                  local_209 = *(undefined1 *)(iVar11 + 1);
                  local_208 = *(undefined1 *)(iVar11 + 2);
                  local_206 = (short)*(undefined4 *)(iVar11 + 0x10);
                  sVar15 = (short)*(undefined4 *)(iVar11 + 0x18) - local_206;
                  local_206 = (short)*(undefined4 *)(iVar11 + 0x14) - local_206;
                  local_204.piece<0,1>() = (undefined1)((ushort)sVar15 >> 8);
                  local_204.piece<1,1>() = (undefined1)sVar15;
                  local_202.piece<0,1>() = (undefined1)(uVar16 >> 8);
                  local_202.piece<1,1>() = (undefined1)uVar16;
                  puVar5[2] = local_20a;
                  *puVar5 = uVar19;
                  puVar5[1] = local_20b;
                  puVar5[3] = local_209;
                  puVar5[4] = local_208;
                  puVar5[5] = uStack_207;
                  *(short *)(puVar5 + 6) = local_206;
                  puVar5[9] = (undefined1)local_204;
                  puVar5[10] = local_202.piece<0,1>();
                  puVar5[0xb] = (undefined1)local_202;
                  puVar5[8] = local_204.piece<0,1>();
                  local_20c = uVar19;
                  local_204 = sVar15;
                  local_202 = (short)uVar16;
                  iVar13 = FUN_005c2368(local_f0,local_d0 & 0xffffffff);
                  if (iVar13 != 0) goto LAB_00578b10;
                  if (local_214 != 0) {
                    iVar13 = FUN_005c282c(local_f0,1);
                    if (iVar13 != 0) goto LAB_00578b10;
                    memcpy(*(void **)(iVar11 + 0x10),*(void **)(iVar11 + 0x3c),
                                 *(size_t *)(iVar11 + 0x34));
                  }
                  iVar11 = FUN_005c2218(local_f0,local_c8 & 0xffffffff);
                  if (iVar11 != 0) goto LAB_00578b10;
                  iVar11 = __n + 0xc;
                  memcpy(PTR_DAT_0071b68c,local_21c,__n);
                }
                memset(local_e8 & 0xffffffff,0,0x4c);
                local_148 = local_fc;
                local_150 = 0x50;
                local_120 = *(undefined4 *)(iVar1 + 0x44c);
                local_14c = 0xe;
                local_10c = PTR_DAT_0071b688;
                local_154 = iVar1;
                local_11c = iVar11;
                iVar11 = FUN_00546bdc(local_e8,local_c0 & 0xffffffff,0);
                if (iVar11 != 0) break;
                uVar14 = FUN_0054536c();
                *(undefined4 *)(pcVar12 + 0x28) = uVar14;
                uVar20 = uVar20 - uVar16;
                FUN_005c299c(pcVar7,uVar16 & 0xffffffff);
                FUN_005c282c(pcVar7,1);
                memcpy(*(void **)(pcVar12 + 0x10),*(void **)(pcVar12 + 0x3c),
                             *(size_t *)(pcVar12 + 0x34));
                FUN_005c20f0(pcVar7,local_e0 & 0xffffffff);
                if (((int)uVar20 == 0) || (local_218 == 0)) break;
              } while( true );
            }
          }
          else {
            FUN_005472a4(pcVar12 + 0x10);
            FUN_005c2ab8(pcVar7);
            *pcVar12 = '\x01';
            iVar11 = *(int *)puVar3;
            pcVar12[0x10] = '\0';
            pcVar12[0x11] = '\0';
            pcVar12[0x12] = '\0';
            pcVar12[0x13] = '\0';
            if ((uVar18 < *(uint *)(iVar11 + 0x100)) &&
               ((iVar11 = *(int *)(puVar4 + 0x138), iVar11 != 0 &&
                (iVar13 = FUN_00577df0(uVar18), iVar13 != 0)))) {
              uVar18 = (uint)local_f8;
              *(undefined4 *)(uVar18 + 0x48) = 0;
              puVar2 = (undefined4 *)(uVar18 + 0x30 & 0xfffffff0);
              puVar2[3] = uVar24;
              puVar2[2] = uVar23;
              puVar2[1] = uVar22;
              *puVar2 = uVar21;
              puVar2 = (undefined4 *)(uVar18 + 0x10 & 0xfffffff0);
              puVar2[3] = uVar24;
              puVar2[2] = uVar23;
              puVar2[1] = uVar22;
              *puVar2 = uVar21;
              puVar2 = (undefined4 *)(uVar18 + 0x20 & 0xfffffff0);
              puVar2[3] = uVar24;
              puVar2[2] = uVar23;
              puVar2[1] = uVar22;
              *puVar2 = uVar21;
              puVar2 = (undefined4 *)(uVar18 & 0xfffffff0);
              puVar2[3] = uVar24;
              puVar2[2] = uVar23;
              puVar2[1] = uVar22;
              *puVar2 = uVar21;
              *(undefined8 *)(uVar18 + 0x40) = 0;
              local_194 = local_fc;
              local_19c = 0x50;
              local_16c = *(undefined4 *)(iVar11 + 0x44c);
              local_198 = 5;
              local_158 = local_220;
              local_168 = 1;
              local_220[0] = uVar19;
              local_1a0 = iVar11;
              FUN_00546bdc(local_f8,uVar8 - 0x1d0 & 0xffffffff,0);
            }
          }
        }
        uVar17 = uVar17 + 1;
      } while (uVar17 < *(uint *)(iVar10 + 0x14));
    }
  }
  return;
}


// 0x0578c38 (0xa4 bytes)
undefined8 FUN_00578c38(uint param_1)

{
  int iVar1;
  int iVar2;
  undefined8 uVar3;
  
  uVar3 = 3;
  if (param_1 < *(uint *)(*(int *)PTR_DAT_0071b570 + 0x10c)) {
    iVar1 = *(int *)(PTR_DAT_0071b574 + 0x138);
    if (((iVar1 != 0) && (iVar2 = FUN_00577df0(param_1), iVar2 != 0)) &&
       (*(int *)(iVar2 + 0xc) == *(int *)(iVar1 + 0x404))) {
      *(undefined1 *)(iVar2 + 4) = 1;
      return 0;
    }
    uVar3 = 0xb;
  }
  return uVar3;
}


// 0x0578cdc (0x268 bytes)
undefined8
FUN_00578cdc(int *param_1,int param_2,int param_3,uint param_4,char param_5,int param_6,char param_7
            ,undefined2 param_8)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  char *pcVar4;
  int iVar5;
  uint uVar6;
  byte in_cr0;
  byte in_cr1;
  byte in_cr2;
  byte in_cr3;
  byte unaff_cr4;
  byte in_cr5;
  byte in_cr6;
  byte in_cr7;
  uint uStack00000008;
  undefined2 in_stack_00000076;
  
  uStack00000008 =
       (uint)(in_cr0 & 0xf) << 0x1c | (uint)(in_cr1 & 0xf) << 0x18 | (uint)(in_cr2 & 0xf) << 0x14 |
       (uint)(in_cr3 & 0xf) << 0x10 | (uint)(unaff_cr4 & 0xf) << 0xc | (uint)(in_cr5 & 0xf) << 8 |
       (uint)(in_cr6 & 0xf) << 4 | (uint)(in_cr7 & 0xf);
  if (((param_1 != (int *)0x0) && (*param_1 = -1, -1 < param_2)) && (-1 < param_3)) {
    iVar1 = *(int *)(PTR_DAT_0071b574 + 0x138);
    if (iVar1 == 0) {
      return 0xe;
    }
    if (param_4 < *(uint *)(PTR_DAT_0071b574 + 0x11c)) {
      if ((*(int *)(iVar1 + 0x404) == 0x100) ||
         (iVar3 = FUN_0057cdb0(iVar1,*(int *)(iVar1 + 0x404)), iVar3 == 0)) {
        return 0x13;
      }
      if (*(int *)(iVar3 + 0x14) != 0) {
        uVar6 = 0;
        do {
          iVar5 = uVar6 + *(int *)(iVar3 + 0x10);
          uVar6 = uVar6 + 1;
          pcVar4 = (char *)FUN_00577a90(iVar5);
          if (pcVar4 == (char *)0x0) {
            return 0x12;
          }
          if (*pcVar4 != '\x02') {
            iVar3 = FUN_00547ec0(param_2);
            *(int *)(pcVar4 + 0x10) = iVar3;
            if (iVar3 == 0) {
              *pcVar4 = '\0';
              return 0x14;
            }
            iVar3 = FUN_005c2b28(pcVar4 + 0x2c,param_2,iVar3);
            if (iVar3 == 0) {
              *(undefined2 *)(pcVar4 + 0x24) = param_8;
              *pcVar4 = '\x02';
              uVar2 = *(undefined4 *)(iVar1 + 0x404);
              *(int *)(pcVar4 + 0x20) = param_3;
              *(undefined4 *)(pcVar4 + 0xc) = uVar2;
              pcVar4[3] = (char)param_4;
              pcVar4[2] = param_5;
              *(int *)(pcVar4 + 8) = param_6;
              *(int *)(pcVar4 + 0x14) = *(int *)(pcVar4 + 0x10) + param_2;
              *(undefined2 *)(pcVar4 + 0x26) = in_stack_00000076;
              *(int *)(pcVar4 + 0x18) = *(int *)(pcVar4 + 0x10);
              pcVar4[0x1c] = '\0';
              pcVar4[0x1d] = '\0';
              pcVar4[0x1e] = '\0';
              pcVar4[0x1f] = '\0';
              pcVar4[1] = param_7;
              pcVar4[4] = '\0';
              pcVar4[0x28] = '\0';
              pcVar4[0x29] = '\0';
              pcVar4[0x2a] = '\0';
              pcVar4[0x2b] = '\0';
              if (param_6 == -1) {
                pcVar4[5] = '\x01';
              }
              else {
                pcVar4[5] = '\0';
              }
              *param_1 = iVar5;
              return 0;
            }
            FUN_005472a4(pcVar4 + 0x10);
            return 0x12;
          }
        } while (uVar6 < *(uint *)(iVar3 + 0x14));
      }
      return 0x12;
    }
  }
  return 3;
}


// 0x0578f44 (0x42c bytes)
undefined8
FUN_00578f44(uint *param_1,int param_2,undefined1 param_3,int param_4,undefined1 param_5,
            uint param_6,undefined1 param_7,void *param_8)

{
  int iVar1;
  size_t __n;
  undefined *puVar2;
  undefined *puVar3;
  int iVar5;
  undefined8 uVar4;
  int iVar6;
  uint *puVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  int *piVar11;
  size_t *psVar12;
  ulonglong uVar13;
  int in_stack_00000074;
  uint in_stack_0000007c;
  GPiece<24> local_a0;
  
  if ((((param_1 == (uint *)0x0) ||
       (*param_1 = 0xffffffff, puVar3 = PTR_DAT_0071b574, puVar2 = PTR_DAT_0071b570,
       in_stack_00000074 == 0)) || (*(uint *)(*(int *)PTR_DAT_0071b570 + 0xf8) <= in_stack_0000007c)
      ) || (iVar1 = *(int *)(PTR_DAT_0071b574 + 0x138), iVar1 == 0)) {
    uVar4 = 3;
  }
  else if ((*(int *)(iVar1 + 0x404) == 0x100) ||
          (iVar6 = FUN_0057cdb0(iVar1,*(int *)(iVar1 + 0x404)), iVar6 == 0)) {
    uVar4 = 0x13;
  }
  else {
    uVar10 = *(uint *)(iVar6 + 8);
    if ((-1 < (int)uVar10) && (0 < *(int *)(iVar6 + 0xc))) {
      uVar8 = uVar10 + *(int *)(iVar6 + 0xc);
      if (uVar10 < uVar8) {
        if (*(uint *)(*(int *)puVar2 + 0x100) <= uVar10) {
          return 10;
        }
        iVar5 = uVar10 * 4;
        piVar11 = (int *)(iVar5 + *(int *)(puVar3 + 0x17c));
        uVar13 = (ulonglong)(uVar8 - uVar10);
        iVar6 = *piVar11;
        while( true ) {
          if (iVar6 == 0) {
            psVar12 = (size_t *)
                      (*(int *)(puVar3 + 0x170) +
                      in_stack_0000007c * 0x40 + (in_stack_0000007c & 0xfffffff) * -0x10);
            __n = *psVar12;
            puVar7 = (uint *)FUN_00547ec0(0x58);
            if (puVar7 == (uint *)0x0) {
              return 0x14;
            }
            puVar7[1] = 2;
            if (param_2 == 2) {
              puVar7[3] = 0xffffffff;
            }
            else {
              puVar7[3] = *(uint *)(iVar1 + 0x404);
            }
            puVar2 = PTR_PTR_0071b670;
            uVar8 = *(uint *)(iVar1 + 0x404);
            *(undefined1 *)((int)puVar7 + 10) = param_3;
            puVar7[4] = uVar8;
            *(undefined1 *)((int)puVar7 + 0xb) = param_7;
            *(undefined1 *)((int)puVar7 + 9) = param_5;
            puVar7[0xe] = *(int *)(*(int *)puVar2 + 4) + param_4;
            uVar8 = FUN_00547ec0(__n);
            puVar7[9] = uVar8;
            uVar9 = FUN_00547ec0(__n);
            uVar8 = *(uint *)(iVar1 + 0x44c);
            puVar7[10] = uVar9;
            uVar9 = FUN_00547ec0(((ulonglong)uVar8 & 0x3fffffff) << 2);
            uVar8 = psVar12[1];
            puVar7[0x11] = uVar9;
            uVar8 = FUN_00547ec0(((ulonglong)uVar8 & 0x3fffffff) << 2);
            puVar7[0x12] = uVar8;
            if ((((puVar7[9] != 0) && (puVar7[10] != 0)) && (puVar7[0x11] != 0)) &&
               (puVar7[0x12] != 0)) {
              strcpy(puVar7 + 5,in_stack_00000074,0xf);
              *(undefined1 *)((int)puVar7 + 0x23) = 0;
              *(char *)(puVar7 + 2) = (char)in_stack_0000007c;
              puVar7[0x10] = 0;
              puVar7[0xf] = param_6;
              if (param_8 != (void *)0x0) {
                memcpy((void *)puVar7[9],param_8,__n);
              }
              if (*(uint *)(puVar3 + 0x120) < uVar10 + 1) {
                *(uint *)(puVar3 + 0x120) = uVar10 + 1;
              }
              iVar1 = *(int *)(puVar3 + 0x17c);
              *puVar7 = uVar10;
              *(uint **)(iVar5 + iVar1) = puVar7;
              FUN_005746ac(uVar10);
              *param_1 = uVar10;
              return 0;
            }
            FUN_005472a4(puVar7 + 9);
            FUN_005472a4(puVar7 + 10);
            FUN_005472a4(puVar7 + 0x11);
            FUN_005472a4(puVar7 + 0x12);
            FUN_005472a4(local_a0);
            return 0x14;
          }
          iVar5 = iVar5 + 4;
          piVar11 = piVar11 + 1;
          uVar10 = uVar10 + 1;
          uVar13 = uVar13 - 1;
          if (uVar13 == 0) break;
          if (*(uint *)(*(int *)puVar2 + 0x100) == uVar10) {
            return 10;
          }
          iVar6 = *piVar11;
        }
      }
    }
    uVar4 = 0x11;
  }
  return uVar4;
}


// 0x0579370 (0x49c bytes)
int FUN_00579370(int *param_1,undefined4 *param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined *puVar6;
  undefined *puVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  longlong lVar11;
  int iVar12;
  uint local_e0;
  undefined1 local_dc;
  undefined1 local_db;
  undefined2 local_da;
  undefined2 local_d8;
  GPiece<48> auStack_d4;
  int local_a4;
  undefined1 local_a0;
  undefined4 local_9c;
  GPiece<4> auStack_98;
  GPiece<36> auStack_94;
  int local_70;
  undefined4 local_6c;
  undefined1 *local_5c;
  
  if (param_2 == (undefined4 *)0x0) {
    return 3;
  }
  param_2[1] = 0x19;
  *param_2 = 1;
  puVar7 = PTR_DAT_0071b574;
  puVar6 = PTR_DAT_0071b570;
  if (param_1 == (int *)0x0) {
    param_2[1] = 3;
    return 3;
  }
  if (*param_1 == 0) {
    param_2[1] = 0x1d;
    return 0x1d;
  }
  iVar1 = param_1[1];
  if ((((iVar1 != 0) && ((uint)param_1[8] < 0x10000)) && ((uint)param_1[9] < 0x10000)) &&
     (iVar8 = param_1[0xb], iVar8 != 0)) {
    iVar10 = 0xf;
    if (*(int *)(PTR_DAT_0071b574 + 0x138) != 0) goto LAB_005794b0;
    if ((param_1[8] <= *(int *)(PTR_DAT_0071b574 + 0x100)) &&
       (param_1[9] <= *(int *)(PTR_DAT_0071b574 + 0x10c))) {
      iVar10 = *(int *)(iVar1 + 0x454);
      if ((iVar10 == 4) || ((iVar10 == 6 || (iVar10 == 7)))) {
        param_2[1] = 0xe;
        return 0xe;
      }
      if (*(int *)(iVar1 + 0x440) == 1) {
        iVar10 = param_1[0xd];
        *(int *)(PTR_DAT_0071b574 + 0x144) = param_1[0xc];
        iVar2 = *(int *)puVar6;
        iVar9 = param_1[0xf];
        iVar12 = param_1[0x11];
        iVar3 = param_1[0x13];
        iVar4 = param_1[10];
        *(int *)(iVar2 + 0x14c) = param_1[0xe];
        iVar5 = param_1[0x10];
        *(undefined4 *)(iVar2 + 0x134) = 0;
        *(int *)(iVar2 + 0x154) = iVar5;
        iVar5 = param_1[0x12];
        *(int *)(iVar2 + 0x148) = iVar10;
        *(int *)(iVar1 + 0x4f4) = iVar5;
        iVar10 = param_1[0x14];
        *(int *)(iVar2 + 0x150) = iVar9;
        *(int *)(iVar1 + 0x4f0) = iVar12;
        *(int *)(iVar1 + 0x4f8) = iVar3;
        *(int *)(iVar1 + 0x4fc) = iVar10;
        *(int *)(iVar2 + 0x13c) = iVar4;
        *(undefined4 *)(iVar2 + 0x120) = 0;
        *(int *)(iVar2 + 0x138) = iVar1;
        *(int *)(puVar7 + 0x140) = iVar8;
        FUN_005745b8();
        iVar8 = FUN_0057d158(iVar1,*(undefined4 *)(iVar1 + 0x404));
        iVar10 = 0x14;
        if (iVar8 != 0) {
          iVar2 = *(int *)(iVar1 + 0x404);
          iVar10 = 10;
          if (iVar2 != 0x100) {
            iVar10 = *(int *)(iVar1 + 0x400);
            if (iVar10 != 0) {
              *(undefined4 *)(iVar10 + 0x18) = 1;
              iVar9 = *(int *)(iVar1 + 0x44c);
              *(undefined4 *)(iVar10 + 0xc) = 3;
              if (0 < iVar9) {
                iVar10 = 0;
                do {
                  iVar9 = FUN_0054170c(iVar1,iVar10);
                  if (((iVar9 != 0) && (*(int *)(iVar9 + 0x20) != 0)) && (iVar2 != iVar10)) {
                    *(undefined4 *)(iVar9 + 0x18) = 0;
                    *(undefined4 *)(iVar9 + 0xc) = 0;
                  }
                  iVar10 = iVar10 + 1;
                } while (iVar10 < *(int *)(iVar1 + 0x44c));
              }
              iVar10 = *(int *)puVar6;
              *(undefined4 *)(iVar8 + 8) = *(undefined4 *)(iVar10 + 0x100);
              *(uint *)(iVar8 + 0xc) = (uint)*(ushort *)((int)param_1 + 0x22);
              *(undefined4 *)(iVar8 + 0x10) = *(undefined4 *)(iVar10 + 0x10c);
              *(uint *)(iVar8 + 0x14) = (uint)*(ushort *)((int)param_1 + 0x26);
              strcpy(iVar8 + 0x18,param_1 + 2,0x17);
              *(undefined1 *)(iVar8 + 0x2f) = 0;
              iVar10 = *(int *)(iVar1 + 0x400);
              if (iVar10 != 0) {
                lVar11 = 0;
                iVar9 = 0;
                *(int *)(iVar10 + 0x10) = param_1[8];
                *(int *)(iVar10 + 0x14) = param_1[9];
                local_dc = 3;
                local_db = FUN_00541a44(*(undefined4 *)(iVar1 + 0x404));
                local_d8 = (undefined2)param_1[9];
                local_da = (undefined2)param_1[8];
                memset(&local_a4,0,0x4c);
                local_a0 = 0x50;
                local_a4 = iVar1;
                FUN_0055b234(iVar1,auStack_98);
                local_9c = 0x15;
                local_5c = &local_dc;
                local_6c = 6;
                if (0 < local_70) {
                  iVar10 = 0;
                  do {
                    iVar12 = iVar10 + 1;
                    FUN_0055abd4(auStack_94,iVar10,&local_e0);
                    lVar11 = lVar11 - ((longlong)
                                       ((longlong)((int)local_e0 >> 0x1f) -
                                        ((longlong)((int)local_e0 >> 0x1f) ^ (ulonglong)local_e0) <<
                                       0x20) >> 0x3f);
                    iVar9 = (int)lVar11;
                    iVar10 = iVar12;
                  } while (iVar12 < local_70);
                  if (iVar9 != 0) {
                    FUN_00546bdc(&local_a4,auStack_d4,0);
                  }
                }
                iVar10 = *(int *)(iVar1 + 0x400);
                if (iVar10 != 0) {
                  if (iVar9 == 0 && *(int *)(iVar1 + 0x448) == 0) {
                    *(undefined4 *)(iVar10 + 0xc) = 5;
                    *(undefined4 *)(iVar10 + 0x1c) = 1;
                    iVar10 = FUN_00574908(iVar1,iVar2);
                    if (iVar10 != 0) goto LAB_005794b0;
                    iVar10 = *(int *)puVar6;
                    *(undefined4 *)(iVar8 + 0x10) = 0;
                    *(undefined4 *)(iVar8 + 8) = 0;
                    *(undefined4 *)(iVar10 + 0x124) = 1;
                    FUN_005412c4(iVar1,1);
                    FUN_005785a4(iVar1,iVar2);
                  }
                  param_2[1] = 0;
                  return 0;
                }
              }
            }
            goto LAB_005794fc;
          }
        }
LAB_005794b0:
        param_2[1] = iVar10;
        return iVar10;
      }
    }
  }
LAB_005794fc:
  param_2[1] = 3;
  return 3;
}


// 0x057980c (0xdc bytes)
int FUN_0057980c(int param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  if (((param_1 != 0) && (iVar2 = FUN_0057cdb0(param_2,param_3), iVar2 != 0)) &&
     (iVar1 = *(int *)(iVar2 + 0xc), 0 < iVar1)) {
    iVar4 = 0;
    iVar2 = *(int *)(iVar2 + 8);
    do {
      iVar3 = FUN_005745d0(iVar2);
      iVar4 = iVar4 + 1;
      if (((iVar3 != 0) && (*(int *)(iVar3 + 4) == 2)) &&
         (iVar3 = FUN_005cc784(iVar3 + 0x14,param_1), iVar3 == 0)) {
        return iVar2;
      }
      iVar2 = iVar2 + 1;
    } while (iVar1 != iVar4);
  }
  return -1;
}


// 0x05798e8 (0x3d4 bytes)
int FUN_005798e8(int *param_1)

{
  int iVar1;
  int iVar2;
  undefined *puVar3;
  int iVar4;
  int iVar5;
  int in_r10;
  int iVar6;
  char *in_stack_00000074;
  uint in_stack_0000007c;
  uint in_stack_00000084;
  GPiece<4> local_140;
  GPiece<24> auStack_13c;
  int local_124;
  undefined1 local_120;
  undefined1 local_11f;
  undefined1 local_11e;
  undefined1 local_11d;
  GPiece<2> local_11c;
  GPiece<2> local_11a;
  GPiece<4> local_118;
  GPiece<4> local_114;
  GPiece<4> local_110;
  char acStack_10c [16];
  GPiece<48> auStack_fc;
  GPiece<84> local_cc;
  
  puVar3 = PTR_DAT_0071b574;
  if ((((param_1 == (int *)0x0) || (in_r10 == 0)) || (in_stack_00000074 == (char *)0x0)) ||
     (((*(uint *)(*(int *)PTR_DAT_0071b570 + 0xf8) <= in_stack_0000007c ||
       (0xff < in_stack_00000084)) || (*(int *)(PTR_DAT_0071b574 + 0x138) == 0)))) {
    iVar4 = 3;
  }
  else {
    iVar5 = FUN_0057980c(in_stack_00000074,*(int *)(PTR_DAT_0071b574 + 0x138),in_stack_00000084);
    *param_1 = iVar5;
    iVar4 = 0;
    if (iVar5 == -1) {
      iVar4 = in_stack_0000007c * 0x40 + (in_stack_0000007c & 0xfffffff) * -0x10 +
              *(int *)(puVar3 + 0x170);
      strcpy(acStack_10c,in_stack_00000074);
      FUN_00541a44(in_stack_00000084);
      FUN_0055442c(auStack_13c,puVar3 + 0x11e8,puVar3 + 0x175e,1);
      FUN_00554290(auStack_13c,&local_120);
      FUN_00554290(auStack_13c,&local_11f);
      FUN_00554290(auStack_13c,&local_11e);
      FUN_00554290(auStack_13c,&local_11d);
      FUN_00554290(auStack_13c,local_11c);
      FUN_00554160(auStack_13c,local_11a);
      FUN_00554160(auStack_13c,local_118);
      FUN_00553f04(auStack_13c,local_114);
      FUN_00553f04(auStack_13c,local_110);
      FUN_00553b40(auStack_13c,acStack_10c,0x10);
      if (*(int *)(iVar4 + 4) < 1) {
LAB_00579c20:
        iVar5 = FUN_005543a4(auStack_13c,local_140);
        iVar4 = local_124;
        if (iVar5 != 0) {
          memset(local_cc,0,0x4c);
          FUN_00546bdc(local_cc,auStack_fc,0);
          iVar4 = 0;
        }
      }
      else {
        iVar6 = 0;
        iVar5 = **(int **)(iVar4 + 0x28);
        iVar1 = 0;
        iVar2 = 4;
        while (iVar5 != 0) {
          iVar6 = iVar6 + 1;
          iVar5 = FUN_00574d38(auStack_13c,in_r10 + *(int *)(iVar1 + *(int *)(iVar4 + 0x2c)),iVar5);
          if (iVar5 != 0) {
            return iVar5;
          }
          if (*(int *)(iVar4 + 4) <= iVar6) goto LAB_00579c20;
          iVar5 = *(int *)(iVar2 + *(int *)(iVar4 + 0x28));
          iVar1 = iVar2;
          iVar2 = iVar2 + 4;
        }
        iVar4 = 1;
      }
    }
  }
  return iVar4;
}


// 0x0579cbc (0x18c bytes)
undefined4 FUN_00579cbc(ulonglong param_1)

{
  int iVar1;
  uint uVar2;
  int *piVar3;
  undefined *puVar4;
  int iVar5;
  longlong lVar6;
  ulonglong uVar7;
  int iVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  
  puVar4 = PTR_DAT_0071b690;
  if ((param_1 & 0xffffffff) < (ulonglong)*(uint *)(*(int *)PTR_DAT_0071b690 + 0x100)) {
    iVar1 = *(int *)(*(int *)PTR_DAT_0071b690 + 0x138);
    iVar8 = 0;
    uVar9 = 0;
    uVar7 = 0;
    if (iVar1 != 0) {
LAB_00579d50:
      if (iVar8 < *(int *)(iVar1 + 0x44c)) goto LAB_00579da8;
      do {
        uVar2 = *(uint *)(*(int *)puVar4 + 0x17c);
        if (*(int *)((int)((uVar7 & 0xffffffff) << 2) + uVar2) != 0) goto LAB_00579d7c;
        uVar7 = uVar9 + 1;
        if ((int)(param_1 + uVar9) <= (int)uVar7) {
          return (int)uVar9;
        }
        uVar10 = (param_1 + uVar9) - uVar7 & 0xffffffff;
        lVar6 = (ulonglong)uVar2 + (uVar9 & 0x3fffffff) * 4 + 8;
        iVar8 = *(int *)((int)((uVar7 & 0xffffffff) << 2) + uVar2);
        while (iVar8 == 0) {
          piVar3 = (int *)lVar6;
          lVar6 = lVar6 + 4;
          uVar10 = uVar10 - 1;
          if (uVar10 == 0) {
            return (int)uVar9;
          }
          iVar8 = *piVar3;
        }
        while( true ) {
          if ((*(uint *)(*(int *)puVar4 + 0x100) - param_1 & 0xffffffff) < (uVar7 & 0xffffffff)) {
            return 0xffffffff;
          }
          iVar8 = 0;
          uVar9 = uVar7;
          if (*(int *)(iVar1 + 0x44c) < 1) break;
LAB_00579da8:
          iVar5 = FUN_0057cdb0(iVar1,iVar8);
          if (iVar5 == 0) {
LAB_00579ddc:
            iVar8 = iVar8 + 1;
            goto LAB_00579d50;
          }
          if (((int)uVar9 < *(int *)(iVar5 + 8)) ||
             (*(int *)(iVar5 + 8) + *(int *)(iVar5 + 0xc) <= (int)uVar9)) goto LAB_00579ddc;
LAB_00579d7c:
          uVar7 = uVar9 + 1;
        }
      } while( true );
    }
  }
  return 0xffffffff;
}


// 0x0579e48 (0x120 bytes)
undefined8 FUN_00579e48(int param_1,undefined8 param_2,undefined8 param_3,undefined1 *param_4)

{
  undefined1 uVar1;
  ushort uVar2;
  ushort uVar3;
  ushort uVar4;
  ushort uVar5;
  int *piVar6;
  
  if (((param_1 != 0) && (*(int *)(param_1 + 0x400) != 0)) &&
     (*(int *)(*(int *)(param_1 + 0x400) + 0xc) - 4U < 2)) {
    uVar1 = *param_4;
    piVar6 = (int *)FUN_0057cdb0(param_1,uVar1);
    if ((piVar6 != (int *)0x0) ||
       (piVar6 = (int *)FUN_0057d158(param_1,uVar1), piVar6 != (int *)0x0)) {
      uVar2 = *(ushort *)(param_4 + 6);
      uVar3 = *(ushort *)(param_4 + 4);
      uVar4 = *(ushort *)(param_4 + 8);
      uVar5 = *(ushort *)(param_4 + 10);
      piVar6[1] = (uint)*(ushort *)(param_4 + 2);
      piVar6[2] = (uint)uVar3;
      piVar6[3] = (uint)uVar2;
      piVar6[4] = (uint)uVar4;
      piVar6[5] = (uint)uVar5;
      strcpy((char *)(piVar6 + 6),param_4 + 0x14);
      if (*piVar6 == 0) {
        FUN_005783e4(param_1,uVar1);
      }
    }
  }
  return 0x2c;
}


// 0x0579f68 (0x2c bytes)
undefined8 FUN_00579f68(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_00577e18(param_1,param_3);
  return 1;
}


// 0x0579f94 (0x230 bytes)
undefined4 FUN_00579f94(int param_1,undefined8 param_2,uint param_3,ushort *param_4)

{
  ushort uVar1;
  ushort uVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  undefined *puVar6;
  undefined4 *puVar7;
  GPiece<16> local_50;
  
  puVar6 = PTR_DAT_0071b690;
  if ((param_1 != 0) && (param_3 < 0x100)) {
    if (*(int *)(*(int *)PTR_DAT_0071b690 + 0x124) != 0) {
      return 4;
    }
    iVar3 = *(int *)(param_1 + 0x404);
    if ((iVar3 != 0x100) &&
       (puVar7 = (undefined4 *)FUN_0057cdb0(param_1,iVar3), puVar7 != (undefined4 *)0x0)) {
      if (*(int *)(*(int *)puVar6 + 0x13c) == 1) {
        FUN_00576178(param_1);
        if (*(undefined4 **)(*(int *)puVar6 + 0x140) != (undefined4 *)0x0) {
          (*(code *)**(undefined4 **)(*(int *)puVar6 + 0x140))(local_50);
          iVar3 = *(int *)puVar6;
          *(undefined4 *)(iVar3 + 0x144) = 0;
          *(undefined4 *)(iVar3 + 0x140) = 0;
          return 4;
        }
        return 4;
      }
      if (*(int *)(param_1 + 0x400) != 0) {
        *(undefined4 *)(*(int *)(param_1 + 0x400) + 0xc) = 4;
        FUN_0054a110(param_1,0xffffffffffffffff,0);
        FUN_00574908(param_1,param_3);
        uVar1 = param_4[1];
        iVar4 = *(int *)PTR_PTR_0071b694;
        *(undefined4 *)(*(int *)puVar6 + 0x124) = 1;
        uVar2 = *param_4;
        uVar5 = *(undefined4 *)(iVar4 + 4);
        puVar7[4] = (uint)uVar1;
        *puVar7 = uVar5;
        puVar7[2] = (uint)uVar2;
        FUN_005412c4(param_1,1);
        FUN_005785a4(param_1,iVar3);
        return 4;
      }
    }
  }
  return 0xffffffff;
}


// 0x057a1c4 (0xc4 bytes)
/* WARNING: Removing unreachable block (ram,0x0057a274) */

undefined8 FUN_0057a1c4(int param_1,undefined8 param_2,uint param_3)

{
  GPiece<24> local_30;
  
  if ((((param_1 != 0) && (param_3 < 0x100)) &&
      (*(int *)(*(int *)PTR_DAT_0071b690 + 0x138) == param_1)) && (*(int *)(param_1 + 0x400) != 0))
  {
    FUN_00574744(local_30,*(int *)(*(int *)PTR_DAT_0071b690 + 0x138));
  }
  return 4;
}


// 0x057a288 (0x364 bytes)
void FUN_0057a288(int param_1,uint param_2,int param_3,uint param_4)

{
  bool bVar1;
  uint uVar2;
  undefined *puVar3;
  int iVar4;
  char *pcVar5;
  int iVar6;
  uint uVar7;
  uint local_f0;
  undefined2 local_ec;
  undefined2 local_ea;
  uint local_e8;
  GPiece<48> auStack_e4;
  int local_b4;
  undefined1 local_b0;
  undefined4 local_ac;
  uint local_a8;
  undefined4 local_80;
  undefined4 local_7c;
  uint *local_6c;
  
  if (((((param_1 != 0) && (param_2 < 0x100)) &&
       (FUN_00574744(&local_f0,param_1), local_f0 != 0x100)) &&
      ((local_f0 < 0x100 && (iVar4 = FUN_0054170c(param_1,param_2), iVar4 != 0)))) &&
     ((*(uint *)(param_1 + 0x404) == local_f0 &&
      ((iVar4 = FUN_0057cdb0(param_1,param_2), iVar4 == 0 &&
       (iVar4 = FUN_0057d158(param_1,param_2), iVar4 != 0)))))) {
    if (param_3 != 0) {
      uVar7 = FUN_00579cbc(param_3);
      *(uint *)(iVar4 + 8) = uVar7 & 0xffff;
      if ((uVar7 & 0xffff) != 0xffffffff) {
        *(int *)(iVar4 + 0xc) = param_3;
      }
    }
    puVar3 = PTR_DAT_0071b690;
    if (param_4 != 0) {
      if ((param_4 < *(uint *)(*(int *)PTR_DAT_0071b690 + 0x10c)) &&
         (*(uint *)(*(int *)PTR_DAT_0071b690 + 0x10c) != param_4)) {
        uVar7 = 0;
        do {
          pcVar5 = (char *)FUN_00577df0(uVar7);
          if ((pcVar5 != (char *)0x0) && (*pcVar5 == '\0')) {
            uVar2 = uVar7;
            do {
              uVar2 = uVar2 + 1;
              if ((int)(param_4 + uVar7) <= (int)uVar2) {
                *(uint *)(iVar4 + 0x10) = uVar7 & 0xffff;
                if ((uVar7 & 0xffff) == 0xffffffff) goto LAB_0057a464;
                goto LAB_0057a460;
              }
              pcVar5 = (char *)FUN_00577df0(uVar2);
            } while (*pcVar5 == '\0');
          }
          uVar7 = uVar7 + 1;
        } while (uVar7 < *(int *)(*(int *)puVar3 + 0x10c) - param_4);
      }
      *(undefined4 *)(iVar4 + 0x10) = 0xffff;
LAB_0057a460:
      *(uint *)(iVar4 + 0x14) = param_4;
    }
LAB_0057a464:
    local_ec = (undefined2)*(undefined4 *)(iVar4 + 8);
    local_ea = (undefined2)*(undefined4 *)(iVar4 + 0x10);
    memset(&local_b4,0,0x4c);
    local_80 = *(undefined4 *)(param_1 + 0x44c);
    local_b0 = 0x50;
    local_ac = 9;
    local_6c = (uint *)&local_ec;
    iVar4 = 0;
    uVar7 = 0;
    local_7c = 4;
    local_b4 = param_1;
    local_a8 = param_2;
    FUN_00546bdc(&local_b4,auStack_e4,0);
    do {
      iVar6 = FUN_0054170c(param_1,iVar4);
      bVar1 = iVar4 != 0xff;
      iVar4 = iVar4 + 1;
      if ((iVar6 != 0) && (uVar7 < *(uint *)(iVar6 + 0x1c))) {
        uVar7 = *(uint *)(iVar6 + 0x1c);
      }
    } while (bVar1);
    local_e8 = uVar7 + 1;
    if (0xffffffe < local_e8) {
      local_e8 = 1;
    }
    iVar4 = FUN_0054170c(param_1,param_2);
    if (iVar4 != 0) {
      *(uint *)(iVar4 + 0x1c) = local_e8;
    }
    memset(&local_b4,0,0x4c);
    local_80 = *(undefined4 *)(param_1 + 0x44c);
    local_b0 = 0x50;
    local_ac = 0x17;
    local_6c = &local_e8;
    local_7c = 4;
    local_b4 = param_1;
    local_a8 = param_2;
    FUN_00546bdc(&local_b4,auStack_e4,0);
  }
  return;
}


// 0x057a5ec (0xf0 bytes)
undefined4 FUN_0057a5ec(int param_1,undefined8 param_2,uint param_3,byte *param_4)

{
  byte bVar1;
  ushort uVar2;
  int iVar3;
  int iVar4;
  
  if ((((param_1 != 0) && (param_3 < 0x100)) &&
      (iVar4 = FUN_0054170c(param_1,param_4[1]), iVar4 != 0)) && (*(int *)(iVar4 + 0x20) != 0)) {
    uVar2 = *(ushort *)(param_4 + 2);
    bVar1 = *param_4;
    *(uint *)(iVar4 + 0x14) = (uint)*(ushort *)(param_4 + 4);
    *(uint *)(iVar4 + 0x10) = (uint)uVar2;
    iVar3 = *(int *)(param_1 + 0x404);
    *(uint *)(iVar4 + 0xc) = (uint)bVar1;
    if (iVar3 != 0x100) {
      FUN_0054a110(param_1,param_4[1],1);
      if (*(int *)(*(int *)(param_1 + iVar3 * 4) + 0xc) != 5) {
        return 6;
      }
      FUN_0057a288(param_1,param_4[1],*(undefined2 *)(param_4 + 2),*(undefined2 *)(param_4 + 4));
      return 6;
    }
  }
  return 0xffffffff;
}


// 0x057a6dc (0x2f8 bytes)
void FUN_0057a6dc(int param_1)

{
  bool bVar1;
  uint uVar2;
  uint uVar3;
  undefined *puVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  longlong lVar8;
  GPiece<24> local_50;
  
  puVar4 = PTR_DAT_0071b690;
  if (((param_1 != 0) && (*(int *)(param_1 + 0x448) == 0)) &&
     (*(int *)(*(int *)PTR_DAT_0071b690 + 0x13c) - 1U < 2)) {
    iVar6 = 0;
    lVar8 = 0;
    iVar7 = 0x100;
    do {
      iVar5 = FUN_0054170c(param_1,iVar6);
      if ((iVar5 != 0) && (*(int *)(iVar5 + 0x20) != 0)) {
        uVar2 = *(uint *)(iVar5 + 0xc);
        if (uVar2 == 0) {
          return;
        }
        if ((*(int *)(iVar5 + 0x18) == 0) && (uVar2 < 4)) {
          return;
        }
        if (uVar2 == 5) {
          return;
        }
        if (uVar2 == 3) {
          if (iVar7 == 0x100) {
            iVar7 = iVar6;
          }
        }
        else {
          uVar3 = (int)(uVar2 ^ 4) >> 0x1f;
          lVar8 = lVar8 - ((longlong)((ulonglong)(((uVar3 ^ uVar2 ^ 4) - uVar3) - 1) << 0x20) >>
                          0x3f);
        }
      }
      bVar1 = iVar6 != 0xff;
      iVar6 = iVar6 + 1;
    } while (bVar1);
    if (((int)lVar8 == 0) && (*(int *)(param_1 + 0x404) == iVar7)) {
      iVar6 = FUN_0057cdb0(param_1,iVar7);
      if (iVar6 == 0) {
        *(undefined4 *)(*(int *)(param_1 + iVar7 * 4) + 0xc) = 2;
        FUN_0054a110(param_1,0xffffffffffffffff,0);
        if (*(undefined4 **)(*(int *)puVar4 + 0x140) != (undefined4 *)0x0) {
          (*(code *)**(undefined4 **)(*(int *)puVar4 + 0x140))(local_50);
          iVar7 = *(int *)puVar4;
          *(undefined4 *)(iVar7 + 0x144) = 0;
          *(undefined4 *)(iVar7 + 0x140) = 0;
          return;
        }
      }
      iVar5 = *(int *)(param_1 + iVar7 * 4);
      *(undefined4 *)(iVar5 + 0xc) = 5;
      *(undefined4 *)(iVar5 + 0x1c) = 1;
      FUN_00574908(param_1,iVar7);
      FUN_0054a110(param_1,0xffffffffffffffff,0);
      iVar5 = *(int *)puVar4;
      *(undefined4 *)(iVar6 + 0x10) = 0;
      *(undefined4 *)(iVar6 + 8) = 0;
      *(undefined4 *)(iVar5 + 0x124) = 1;
      FUN_005412c4(param_1,1);
      FUN_005785a4(param_1,iVar7);
      if (*(undefined4 **)(*(int *)puVar4 + 0x140) != (undefined4 *)0x0) {
        (*(code *)**(undefined4 **)(*(int *)puVar4 + 0x140))(local_50);
        iVar6 = *(int *)puVar4;
        *(undefined4 *)(iVar6 + 0x144) = 0;
        *(undefined4 *)(iVar6 + 0x140) = 0;
      }
      lVar8 = 0;
      do {
        iVar5 = (int)lVar8;
        iVar6 = FUN_0054170c(param_1,iVar5);
        lVar8 = lVar8 + 1;
        if ((((iVar6 != 0) && (*(int *)(iVar6 + 0x20) != 0)) && (*(int *)(iVar6 + 0xc) == 3)) &&
           (iVar7 != iVar5)) {
          FUN_0057a288(param_1,iVar5,*(undefined4 *)(iVar6 + 0x10),*(undefined4 *)(iVar6 + 0x14));
        }
      } while (lVar8 != 0x100);
    }
  }
  return;
}


// 0x057a9d4 (0x134 bytes)
undefined4 FUN_0057a9d4(int param_1,undefined8 param_2,undefined4 param_3,undefined1 *param_4)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  char *pcVar3;
  
  uVar2 = 0xffffffff;
  if (param_1 != 0) {
    pcVar3 = (char *)FUN_00577a90(*param_4);
    if ((pcVar3 != (char *)0x0) && (*pcVar3 == '\x02')) {
      puVar1 = *(undefined4 **)
                ((uint)(byte)pcVar3[3] * 4 + *(int *)(*(int *)PTR_DAT_0071b690 + 0x178));
      if (puVar1 != (undefined4 *)0x0) {
        (*(code *)*puVar1)(param_3,*param_4);
      }
      *pcVar3 = '\x01';
      if (pcVar3[2] != '\0') {
        FUN_005472a4(pcVar3 + 0x10);
        FUN_005c2ab8(pcVar3 + 0x2c);
        pcVar3[0x14] = '\0';
        pcVar3[0x15] = '\0';
        pcVar3[0x16] = '\0';
        pcVar3[0x17] = '\0';
        pcVar3[0x10] = '\0';
        pcVar3[0x11] = '\0';
        pcVar3[0x12] = '\0';
        pcVar3[0x13] = '\0';
        return 1;
      }
    }
    uVar2 = 1;
  }
  return uVar2;
}


// 0x057ab08 (0x360 bytes)
/* WARNING: Removing unreachable block (ram,0x0057ad70) */
/* WARNING: Removing unreachable block (ram,0x0057ad80) */
/* WARNING: Removing unreachable block (ram,0x0057ad84) */

int FUN_0057ab08(int param_1,undefined8 param_2,int param_3,byte *param_4)

{
  bool bVar1;
  byte bVar2;
  undefined4 *puVar3;
  char *pcVar4;
  char *pcVar5;
  int iVar6;
  int iVar7;
  GPiece<4> local_50;
  GPiece<20> local_4c;
  
  iVar6 = -1;
  if (param_1 != 0) {
    pcVar5 = (char *)FUN_00577a90(*param_4);
    if (pcVar5 == (char *)0x0) goto LAB_0057acf8;
    if (*pcVar5 != '\x02') {
      if (param_4[4] != 0) {
        iVar6 = FUN_00547ec0(*(undefined2 *)(param_4 + 6));
        *(int *)(pcVar5 + 0x10) = iVar6;
        if (iVar6 == 0) {
          *pcVar5 = '\0';
LAB_0057acf8:
          return *(ushort *)(param_4 + 10) + 0xc;
        }
        iVar6 = FUN_005c2b28(pcVar5 + 0x2c,*(undefined2 *)(param_4 + 6),iVar6);
        if (iVar6 != 0) {
          FUN_005472a4(pcVar5 + 0x10);
          goto LAB_0057acf8;
        }
        *(uint *)(pcVar5 + 0x14) = *(int *)(pcVar5 + 0x10) + (uint)*(ushort *)(param_4 + 6);
        pcVar5[3] = param_4[2];
        bVar2 = param_4[1];
        *(int *)(pcVar5 + 0x18) = *(int *)(pcVar5 + 0x10);
        pcVar5[5] = bVar2;
        pcVar5[0x1c] = '\0';
        pcVar5[0x1d] = '\0';
        pcVar5[0x1e] = '\0';
        pcVar5[0x1f] = '\0';
        pcVar5[1] = param_4[3];
        bVar2 = param_4[4];
        pcVar5[4] = '\0';
        pcVar5[2] = bVar2;
        pcVar5[0x20] = '\0';
        pcVar5[0x21] = '\x01';
        pcVar5[0x22] = '_';
        pcVar5[0x23] = -0x70;
        pcVar5[0x28] = '\0';
        pcVar5[0x29] = '\0';
        pcVar5[0x2a] = '\0';
        pcVar5[0x2b] = '\0';
      }
      *pcVar5 = '\x02';
      FUN_00574744(local_50,param_1);
      if (param_3 == 0x100) {
        iVar6 = 0;
        do {
          iVar7 = FUN_0057cdb0(param_1,iVar6);
          bVar1 = iVar6 != 0xff;
          if ((iVar7 != 0) && ((uint)*param_4 - *(int *)(iVar7 + 0x10) < *(uint *)(iVar7 + 0x14))) {
            *(int *)(pcVar5 + 0xc) = iVar6;
            break;
          }
          iVar6 = iVar6 + 1;
        } while (bVar1);
      }
      else {
        *(int *)(pcVar5 + 0xc) = param_3;
      }
    }
    if (param_4[4] != 0) {
      pcVar4 = pcVar5 + 0x2c;
      iVar6 = FUN_005c2178(pcVar4,local_4c);
      if (((iVar6 == 0) && (param_4[3] != 0)) &&
         (iVar6 = FUN_005c299c(pcVar4,*(undefined2 *)(param_4 + 10)), iVar6 == 0)) {
        FUN_005c2544(pcVar4,param_4 + 0xc,*(undefined2 *)(param_4 + 10));
        FUN_005c282c(pcVar4,1);
        memcpy(*(void **)(pcVar5 + 0x10),*(void **)(pcVar5 + 0x3c),*(size_t *)(pcVar5 + 0x34))
        ;
      }
    }
    puVar3 = *(undefined4 **)((uint)param_4[2] * 4 + *(int *)(*(int *)PTR_DAT_0071b690 + 0x174));
    if (puVar3 != (undefined4 *)0x0) {
      (*(code *)*puVar3)(param_3,*param_4,param_4 + 0xc,*(undefined2 *)(param_4 + 10));
    }
    iVar6 = *(ushort *)(param_4 + 10) + 0xc;
    *(undefined4 *)(pcVar5 + 0x28) = *(undefined4 *)(*(int *)PTR_PTR_0071b694 + 4);
  }
  return iVar6;
}


// 0x057ae68 (0x230 bytes)
undefined4 FUN_0057ae68(int param_1,undefined8 param_2,int param_3,undefined4 *param_4)

{
  int iVar1;
  int iVar2;
  undefined4 local_d0;
  undefined2 local_cc;
  undefined4 local_c8;
  undefined4 local_c4;
  uint local_c0;
  undefined4 local_bc;
  undefined4 local_b8;
  undefined4 local_b4;
  GPiece<48> auStack_b0;
  undefined4 local_80;
  undefined1 local_7c;
  undefined4 local_78;
  undefined4 local_74;
  GPiece<16> auStack_70;
  GPiece<16> auStack_60;
  undefined4 local_4c;
  undefined4 local_48;
  undefined8 uStack_40;
  undefined4 *local_38;
  
  if (param_4 == (undefined4 *)0x0) {
    return 0xffffffff;
  }
  iVar2 = FUN_005745d0(*(undefined2 *)(param_4 + 1));
  if ((iVar2 == 0) || (*(int *)(iVar2 + 0xc) == -1)) {
    return 8;
  }
  if (*(int *)(iVar2 + 0xc) == param_3) {
    iVar1 = *(int *)(iVar2 + 0x10);
  }
  else {
    iVar1 = *(int *)(iVar2 + 0x10);
    if (iVar1 != param_3) {
      return 8;
    }
  }
  *(undefined4 *)(iVar2 + 0xc) = 0xffffffff;
  if (*(int *)(param_1 + 0x404) == iVar1) {
    FUN_005746ac(*(undefined2 *)(param_4 + 1));
    local_d0 = *param_4;
    local_cc = *(undefined2 *)(param_4 + 1);
    auStack_60 = (GPiece<16>)0x0;
    uStack_40 = 0;
    auStack_70 = (GPiece<16>)0x0;
    local_74 = 0xffffffff;
    local_7c = 0x50;
    local_80 = *(undefined4 *)(*(int *)PTR_DAT_0071b690 + 0x138);
    local_4c = *(undefined4 *)(*(int *)(*(int *)PTR_DAT_0071b690 + 0x138) + 0x44c);
    local_78 = 0xd;
    local_38 = &local_d0;
    local_48 = 8;
    FUN_00546bdc(&local_80,auStack_b0,0);
  }
  if (*(int *)(param_1 + 0x4f0) != 0) {
    local_c4 = *(undefined4 *)(iVar2 + 0xc);
    local_c0 = (uint)*(ushort *)(param_4 + 1);
    local_b4 = *param_4;
    local_b8 = *(undefined4 *)(param_1 + 0x4f4);
    local_c8 = *(undefined4 *)(*(int *)PTR_DAT_0071b690 + 0x138);
    local_bc = 4;
    (*(code *)**(undefined4 **)(param_1 + 0x4f0))(&local_c8);
    return 8;
  }
  FUN_00574838(*(undefined4 *)(iVar2 + 0xc),*(undefined2 *)(param_4 + 1),0xfffffffffffffffe);
  return 8;
}


// 0x057b098 (0x180 bytes)
undefined8 FUN_0057b098(int param_1,undefined8 param_2,undefined8 param_3,byte *param_4)

{
  byte bVar1;
  int iVar2;
  undefined4 *puVar3;
  GPiece<32> local_40;
  
  puVar3 = *(undefined4 **)(param_1 + 0x4f0);
  if (puVar3 != (undefined4 *)0x0) {
    if (param_4[8] == 1) {
      iVar2 = FUN_005745d0(*(undefined2 *)(param_4 + 10));
      if ((iVar2 == 0) ||
         (bVar1 = *param_4, *(uint *)(iVar2 + 0xc) = (uint)bVar1,
         *(uint *)(param_1 + 0x404) != (uint)bVar1)) {
        puVar3 = *(undefined4 **)(param_1 + 0x4f0);
      }
      else {
        FUN_005746ac(*(undefined2 *)(param_4 + 10));
        puVar3 = *(undefined4 **)(param_1 + 0x4f0);
      }
    }
    (*(code *)*puVar3)(local_40);
    return 0xc;
  }
  if (param_4[8] != 1) {
    return 0xc;
  }
  bVar1 = *param_4;
  iVar2 = FUN_005745d0(*(undefined2 *)(param_4 + 10));
  if (iVar2 == 0) {
    return 0xc;
  }
  *(uint *)(iVar2 + 0xc) = (uint)bVar1;
  if (*(uint *)(param_1 + 0x404) == (uint)bVar1) {
    FUN_005746ac(*(undefined2 *)(param_4 + 10));
  }
  FUN_00574838(*(undefined4 *)(iVar2 + 0xc),*(undefined2 *)(param_4 + 10),0xfffffffffffffffe);
  return 0xc;
}


// 0x057b218 (0x434 bytes)
undefined4 FUN_0057b218(int param_1,undefined8 param_2,undefined4 param_3,undefined4 *param_4)

{
  ushort uVar1;
  int iVar2;
  undefined *puVar3;
  undefined4 uVar5;
  int iVar6;
  longlong lVar4;
  uint uVar7;
  GPiece<4> local_120;
  undefined4 local_11c;
  undefined1 local_118;
  ushort local_116;
  undefined4 local_114;
  undefined4 local_110;
  uint local_10c;
  undefined4 local_108;
  undefined4 local_104;
  undefined4 local_100;
  undefined4 local_fc;
  uint local_f8;
  undefined4 local_f4;
  undefined4 local_f0;
  undefined4 local_ec;
  GPiece<48> auStack_e8;
  int local_b8;
  undefined1 local_b4;
  undefined4 local_b0;
  undefined4 local_ac;
  undefined4 local_84;
  undefined4 local_80;
  undefined1 *local_70;
  
  puVar3 = PTR_DAT_0071b690;
  iVar2 = *(int *)(*(int *)PTR_DAT_0071b690 + 0x138);
  if ((iVar2 == param_1) && (iVar2 != 0)) {
    uVar1 = *(ushort *)(param_4 + 1);
    uVar7 = (uint)uVar1;
    iVar6 = FUN_005745d0(uVar7);
    if (iVar6 != 0) {
      memset(&local_b8,0,0x4c);
      local_b4 = 0x50;
      local_84 = *(undefined4 *)(iVar2 + 0x44c);
      local_80 = 0xc;
      local_b0 = 0xc;
      local_70 = local_120;
      if (*(int *)(iVar6 + 0x10) == *(int *)(iVar2 + 0x404)) {
        local_116 = uVar1;
        local_b8 = iVar2;
        local_ac = param_3;
        if (*(int *)(iVar6 + 0xc) != -1) {
          local_120[0] = FUN_00541a44(param_3);
          local_118 = 3;
          local_11c = *param_4;
          FUN_00546bdc(&local_b8,auStack_e8,0);
          return 8;
        }
        if (*(int *)(iVar2 + 0x4f8) != 0) {
          local_114 = *(undefined4 *)(*(int *)puVar3 + 0x138);
          local_108 = *(undefined4 *)(iVar2 + 0x4fc);
          local_104 = *param_4;
          local_110 = param_3;
          local_10c = (uint)uVar1;
          local_120[0] = FUN_00541a44(param_3);
          local_11c = *param_4;
          lVar4 = (*(code *)**(undefined4 **)(iVar2 + 0x4f8))(&local_114);
          if (lVar4 != 1) {
            local_118 = 2;
            local_11c = *param_4;
            FUN_00546bdc(&local_b8,auStack_e8,0);
            return 8;
          }
          *(undefined4 *)(iVar6 + 0xc) = param_3;
          FUN_00574608(uVar7);
          if (*(int *)(iVar2 + 0x4f0) == 0) {
            FUN_00574838(*(undefined4 *)(iVar6 + 0xc),uVar7,0xfffffffffffffffe);
          }
          else {
            local_fc = *(undefined4 *)(iVar6 + 0xc);
            local_100 = *(undefined4 *)(*(int *)puVar3 + 0x138);
            local_ec = *param_4;
            local_f0 = *(undefined4 *)(iVar2 + 0x4f4);
            local_f4 = 1;
            local_f8 = (uint)uVar1;
            (*(code *)**(undefined4 **)(iVar2 + 0x4f0))(&local_100);
          }
          *(undefined4 *)(iVar6 + 0x34) = 0xffffffff;
          *(undefined4 *)(iVar6 + 0x30) = 0xffffffff;
          FUN_00576994(iVar6,0x50,1);
          local_118 = 1;
          local_ac = 0xffffffff;
          FUN_00546bdc(&local_b8,auStack_e8,0);
          return 8;
        }
        *(undefined4 *)(iVar6 + 0xc) = param_3;
        FUN_00574608(uVar7);
        if (*(int *)(iVar2 + 0x4f0) == 0) {
          FUN_00574838(*(undefined4 *)(iVar6 + 0xc),uVar7,0xfffffffffffffffe);
        }
        else {
          local_fc = *(undefined4 *)(iVar6 + 0xc);
          local_100 = *(undefined4 *)(*(int *)puVar3 + 0x138);
          local_ec = *param_4;
          local_f0 = *(undefined4 *)(iVar2 + 0x4f4);
          local_f4 = 1;
          local_f8 = uVar7;
          (*(code *)**(undefined4 **)(iVar2 + 0x4f0))(&local_100);
        }
        *(undefined4 *)(iVar6 + 0x34) = 0xffffffff;
        *(undefined4 *)(iVar6 + 0x30) = 0xffffffff;
        FUN_00576994(iVar6,0x50,1);
        local_120[0] = FUN_00541a44(param_3);
        local_118 = 1;
        local_11c = *param_4;
        local_ac = 0xffffffff;
        FUN_00546bdc(&local_b8,auStack_e8,0);
        return 8;
      }
    }
    uVar5 = 8;
  }
  else {
    uVar5 = 0xffffffff;
  }
  return uVar5;
}


// 0x057b64c (0x2c bytes)
undefined8 FUN_0057b64c(void)

{
  undefined2 *in_r6;
  
  FUN_005757c8(*in_r6);
  return 2;
}


// 0x057b678 (0x708 bytes)
undefined4 FUN_0057b678(int param_1,undefined8 param_2,uint param_3,int param_4)

{
  bool bVar1;
  bool bVar2;
  undefined *puVar3;
  undefined *puVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  uint uVar9;
  int iVar10;
  undefined4 *puVar11;
  size_t *psVar12;
  uint uVar13;
  byte in_cr0;
  byte in_cr1;
  byte in_cr2;
  byte in_cr3;
  byte unaff_cr4;
  byte in_cr5;
  byte in_cr6;
  byte in_cr7;
  uint uStack00000008;
  undefined4 local_d0;
  uint *local_cc;
  GPiece<28> auStack_c8;
  byte local_ac;
  byte local_ab;
  undefined1 local_aa;
  undefined1 local_a9;
  GPiece<2> local_a8;
  short local_a6;
  ushort local_a4 [2];
  uint local_a0;
  uint local_9c;
  char acStack_98 [32];
  
  puVar3 = PTR_DAT_0071b690;
  uStack00000008 =
       (uint)(in_cr0 & 0xf) << 0x1c | (uint)(in_cr1 & 0xf) << 0x18 | (uint)(in_cr2 & 0xf) << 0x14 |
       (uint)(in_cr3 & 0xf) << 0x10 | (uint)(unaff_cr4 & 0xf) << 0xc | (uint)(in_cr5 & 0xf) << 8 |
       (uint)(in_cr6 & 0xf) << 4 | (uint)(in_cr7 & 0xf);
  iVar10 = 0;
  iVar7 = *(int *)(*(int *)PTR_DAT_0071b690 + 0x138);
  if (iVar7 != param_1) {
    return 0xffffffff;
  }
  if (0xff < param_3) {
    return 0xffffffff;
  }
  if (iVar7 == 0) {
    return 0xffffffff;
  }
  FUN_0055442c(auStack_c8,param_4,param_4 + 0x576,2);
  FUN_00554290(auStack_c8,&local_ac);
  FUN_00554290(auStack_c8,&local_ab);
  FUN_00554290(auStack_c8,&local_aa);
  FUN_00554290(auStack_c8,&local_a9);
  FUN_00554290(auStack_c8,local_a8);
  FUN_00554160(auStack_c8,&local_a6);
  FUN_00554160(auStack_c8,local_a4);
  FUN_00553f04(auStack_c8,&local_a0);
  FUN_00553f04(auStack_c8,&local_9c);
  FUN_00553b40(auStack_c8,acStack_98,0x10);
  iVar5 = FUN_005543a4(auStack_c8,&local_d0);
  if (iVar5 == 0) {
    return 0xffffffff;
  }
  bVar1 = false;
  iVar5 = (uint)local_a4[0] << 2;
  psVar12 = (size_t *)((uint)local_ab * 0x30 + *(int *)(*(int *)puVar3 + 0x170));
  uVar13 = (uint)local_a4[0];
  if (((uint)local_ac == *(uint *)(iVar7 + 0x404)) &&
     (uVar13 = (uint)local_a4[0], local_a4[0] == 0xffff)) {
    iVar5 = FUN_0057980c(acStack_98,iVar7,(uint)local_ac);
    if (-1 < iVar5) {
      if (0 < (int)psVar12[1]) {
        do {
          iVar7 = iVar10 * 4;
          iVar10 = iVar10 + 1;
          iVar7 = *(int *)(iVar7 + psVar12[10]);
          FUN_00553c74(auStack_c8,*(int *)(iVar7 + 4) * *(int *)(iVar7 + 8));
        } while (iVar10 < (int)psVar12[1]);
      }
      goto LAB_0057badc;
    }
    iVar10 = *(int *)(*(int *)puVar3 + 0x138);
    if (((iVar10 != 0) &&
        (iVar10 = FUN_0057cdb0(iVar10,*(undefined4 *)(iVar10 + 0x404)), iVar10 != 0)) &&
       (0 < *(int *)(iVar10 + 0xc))) {
      iVar5 = 0;
      do {
        uVar13 = iVar5 + *(int *)(iVar10 + 8);
        iVar5 = iVar5 + 1;
        iVar6 = FUN_005745d0(uVar13);
        if (iVar6 == 0) {
          bVar1 = false;
          iVar5 = (int)(((ulonglong)uVar13 & 0x3fffffff) << 2);
          if (-1 < (int)uVar13) {
            bVar1 = true;
          }
          goto LAB_0057b89c;
        }
      } while (iVar5 < *(int *)(iVar10 + 0xc));
    }
    bVar1 = false;
    uVar13 = 0xffffffff;
    iVar5 = -4;
  }
LAB_0057b89c:
  if (*(int *)(iVar5 + *(int *)(*(int *)puVar3 + 0x17c)) == 0) {
    local_cc = (uint *)FUN_00547ec0(0x58);
    puVar4 = PTR_PTR_0071b694;
    if (local_cc == (uint *)0x0) {
      return 0x24;
    }
    local_cc[1] = 2;
    local_cc[3] = (int)local_a6;
    iVar10 = *(int *)puVar4;
    local_cc[4] = (uint)local_ac;
    local_cc[0xe] = local_a0;
    local_cc[0xf] = local_9c;
    local_cc[0x10] = *(uint *)(iVar10 + 4);
    uVar8 = FUN_00547ec0(*psVar12);
    local_cc[9] = uVar8;
    uVar9 = FUN_00547ec0(*psVar12);
    uVar8 = *(uint *)(iVar7 + 0x44c);
    local_cc[10] = uVar9;
    uVar9 = FUN_00547ec0(((ulonglong)uVar8 & 0x3fffffff) << 2);
    uVar8 = psVar12[1];
    local_cc[0x11] = uVar9;
    uVar8 = FUN_00547ec0(((ulonglong)uVar8 & 0x3fffffff) << 2);
    local_cc[0x12] = uVar8;
    if (((local_cc[9] == 0) || (local_cc[10] == 0)) ||
       ((local_cc[0x11] == 0 || (local_cc[0x12] == 0)))) {
      FUN_005472a4(local_cc + 9);
      FUN_005472a4(local_cc + 10);
      FUN_005472a4(local_cc + 0x11);
      FUN_005472a4(local_cc + 0x12);
      FUN_005472a4(&local_cc);
      return 0x24;
    }
    iVar10 = *(int *)puVar3;
    if (*(int *)(iVar10 + 0x120) < (int)(uVar13 + 1)) {
      *(uint *)(iVar10 + 0x120) = uVar13 + 1;
    }
    iVar10 = *(int *)(iVar10 + 0x17c);
    *local_cc = uVar13;
    *(uint **)(iVar5 + iVar10) = local_cc;
    if (bVar1) {
      FUN_005746ac(uVar13);
    }
    bVar2 = true;
    if (*(int *)(iVar7 + 0x44c) < 1) goto LAB_0057b8cc;
    iVar5 = 0;
    iVar10 = *(int *)puVar4;
    puVar11 = (undefined4 *)local_cc[0x11];
    do {
      iVar5 = iVar5 + 1;
      *puVar11 = *(undefined4 *)(iVar10 + 4);
      puVar11 = puVar11 + 1;
    } while (iVar5 < *(int *)(iVar7 + 0x44c));
    bVar2 = true;
  }
  else {
    bVar2 = false;
    local_cc = (uint *)FUN_005745d0(uVar13);
LAB_0057b8cc:
    if (local_cc == (uint *)0x0) {
      return 0x24;
    }
  }
  local_cc[3] = (int)local_a6;
  *(byte *)(local_cc + 2) = local_ab;
  strcpy((char *)(local_cc + 5),acStack_98);
  *(undefined1 *)((int)local_cc + 9) = local_aa;
  *(undefined1 *)((int)local_cc + 10) = local_a8[0];
  *(undefined1 *)((int)local_cc + 0xb) = local_a9;
  puVar3 = PTR_PTR_0071b694;
  if (0 < (int)psVar12[1]) {
    uVar8 = 0;
    do {
      iVar7 = (int)(((ulonglong)uVar8 & 0x3fffffff) << 2);
      if (local_cc != (uint *)0x0) {
        FUN_00574d38(auStack_c8,local_cc[9] + *(int *)(iVar7 + psVar12[0xb]),
                     *(undefined4 *)(iVar7 + psVar12[10]));
      }
      iVar10 = uVar8 + 1;
      uVar8 = uVar8 + 1;
      *(undefined4 *)(iVar7 + local_cc[0x12]) = *(undefined4 *)(*(int *)puVar3 + 4);
    } while (iVar10 < (int)psVar12[1]);
  }
  memcpy((void *)local_cc[10],(void *)local_cc[9],*psVar12);
  if (bVar1) {
    local_cc[0x10] = 0;
  }
  else {
    local_cc[0x10] = *(uint *)(*(int *)PTR_PTR_0071b694 + 4);
  }
  if (bVar2) {
    FUN_0057477c(local_cc[4],uVar13);
  }
  else {
    FUN_00574838(local_cc[4],uVar13,0xffffffffffffffff);
  }
LAB_0057badc:
  iVar7 = FUN_005543a4(auStack_c8,&local_d0);
  if (iVar7 == 0) {
    return 0xffffffff;
  }
  return local_d0;
}


// 0x057bd80 (0x378 bytes)
undefined4 FUN_0057bd80(undefined8 param_1,undefined8 param_2,uint param_3,int param_4)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined *puVar4;
  int iVar5;
  int iVar6;
  void *__src;
  uint uVar7;
  GPiece<2> local_90;
  byte local_8e;
  byte local_8d;
  ushort local_8c [2];
  undefined4 local_88;
  GPiece<4> local_84;
  GPiece<40> auStack_80;
  
  if (param_3 < 0x100) {
    FUN_0055442c(auStack_80,param_4,param_4 + 0x576,2);
    FUN_00554290(auStack_80,&local_8e);
    FUN_00554290(auStack_80,&local_8d);
    FUN_00554160(auStack_80,local_8c);
    if (((uint)local_8c[0] < *(uint *)(*(int *)PTR_DAT_0071b690 + 0x100)) &&
       (iVar6 = (uint)local_8e * 0x30 + *(int *)(*(int *)PTR_DAT_0071b690 + 0x170), iVar6 != 0)) {
      if ((char)local_8d < '\0') {
        local_8d = local_8d & 0x7f;
        FUN_00553f04(auStack_80,local_84);
      }
      iVar5 = FUN_005543a4(auStack_80,&local_88);
      if (iVar5 != 0) {
        iVar5 = FUN_005745d0(local_8c[0]);
        if ((iVar5 == 0) ||
           ((*(uint *)(iVar5 + 0xc) != param_3 && (*(uint *)(iVar5 + 0x10) != param_3)))) {
          if (local_8d != 0) {
            uVar7 = 0;
            do {
              uVar7 = uVar7 + 1;
              FUN_00554290(auStack_80,local_90);
              if (*(int *)(iVar6 + 4) < 1) {
                return 0xffffffff;
              }
              iVar5 = **(int **)(iVar6 + 0x28);
              if (iVar5 == 0) {
                return 0xffffffff;
              }
              FUN_00553c74(auStack_80,*(int *)(iVar5 + 4) * *(int *)(iVar5 + 8));
            } while (uVar7 < local_8d);
          }
        }
        else {
          if (*(byte *)(iVar5 + 8) != local_8e) {
            return 0xffffffff;
          }
          *(undefined4 *)(iVar5 + 0x2c) = 0;
          puVar4 = PTR_PTR_0071b694;
          if (local_8d != 0) {
            uVar7 = 0;
            do {
              uVar7 = uVar7 + 1;
              FUN_00554290(auStack_80,local_90);
              if (*(int *)(iVar6 + 4) < 1) {
                return 0xffffffff;
              }
              iVar1 = **(int **)(iVar6 + 0x28);
              if (iVar1 == 0) {
                return 0xffffffff;
              }
              iVar2 = *(int *)(iVar5 + 0x28);
              iVar3 = **(int **)(iVar6 + 0x2c);
              __src = (void *)(iVar3 + *(int *)(iVar5 + 0x24));
              FUN_00574d38(auStack_80,__src,iVar1);
              memcpy((void *)(iVar3 + iVar2),__src,*(int *)(iVar1 + 4) * *(int *)(iVar1 + 8));
              **(undefined4 **)(iVar5 + 0x48) = *(undefined4 *)(*(int *)puVar4 + 4);
              FUN_00574838(*(undefined4 *)(iVar5 + 0xc),local_8c[0],0);
            } while (uVar7 < local_8d);
          }
        }
        iVar6 = FUN_005543a4(auStack_80,&local_88);
        if (iVar6 != 0) {
          return 0;
        }
      }
    }
  }
  return 0xffffffff;
}


// 0x057c0f8 (0x2f8 bytes)
undefined8
FUN_0057c0f8(uint *param_1,int param_2,int param_3,undefined8 param_4,ulonglong param_5,int param_6,
            int param_7,int *param_8)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined8 uVar7;
  uint uVar8;
  int iVar9;
  int *piVar10;
  ulonglong uVar11;
  
  puVar6 = PTR_DAT_0071b69c;
  puVar5 = PTR_DAT_0071b698;
  iVar1 = *(int *)PTR_DAT_0071b698;
  uVar7 = 2;
  if (iVar1 != 0) {
    if ((((param_1 != (uint *)0x0) && (-1 < param_2)) && (0 < param_3)) && (0 < param_6)) {
      uVar2 = *(uint *)PTR_DAT_0071b69c;
      if (*(uint *)(iVar1 + 0xfc) <= uVar2) {
        return 10;
      }
      uVar3 = *(uint *)(iVar1 + 0x114);
      if (*(uint *)(iVar1 + 0xfc) * *(int *)(iVar1 + 0xf8) <= uVar3) {
        return 10;
      }
      if ((param_5 & 0xffffffff) < 0x10) {
                    /* WARNING: Could not recover jumptable at 0x0057c218. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        uVar7 = (*(code *)(PTR_DAT_0071b6a0 + *(int *)(PTR_DAT_0071b6a0 + (int)(param_5 << 2))))();
        return uVar7;
      }
      if (*(int *)(((int)((param_5 & 0xffffffff) << 6) - (int)((param_5 & 0xffffffff) << 4)) +
                   *(int *)(iVar1 + 0x170) + -0x300) == param_3) {
        iVar9 = 0;
        if (uVar2 != 0) {
          uVar11 = (ulonglong)uVar2;
          iVar9 = 0;
          piVar10 = (int *)((uVar3 - uVar2) * 0x2c + *(int *)(iVar1 + 0x16c) + 4);
          do {
            iVar9 = iVar9 + *piVar10 * piVar10[1];
            uVar11 = uVar11 - 1;
            piVar10 = piVar10 + 0xb;
          } while (uVar11 != 0);
        }
        if (0x552 < (uint)(param_3 * param_6 + iVar9)) {
          return 0x1a;
        }
        iVar9 = 0;
        uVar8 = uVar3;
        if (uVar3 != 0) {
          uVar11 = (ulonglong)uVar3;
          uVar8 = 0;
          piVar10 = (int *)(*(int *)(iVar1 + 0x16c) + 0x30);
          if (*(int *)(*(int *)(iVar1 + 0x16c) + 4) == 0) {
            iVar9 = 0;
            uVar8 = 0;
          }
          else {
            do {
              uVar8 = uVar8 + 1;
              uVar11 = uVar11 - 1;
              if (uVar11 == 0) {
                iVar9 = uVar3 * 0x2c;
                uVar8 = uVar3;
                goto LAB_0057c314;
              }
              iVar9 = *piVar10;
              piVar10 = piVar10 + 0xb;
            } while (iVar9 != 0);
            iVar9 = uVar8 * 0x2c;
          }
        }
LAB_0057c314:
        piVar10 = (int *)(iVar9 + *(int *)(iVar1 + 0x16c));
        if (piVar10 == (int *)0x0) {
          return 1;
        }
        *piVar10 = param_2;
        piVar10[1] = param_3;
        piVar10[3] = (int)param_5;
        piVar10[2] = param_6;
        piVar10[4] = param_7;
        if (param_8 != (int *)0x0) {
          iVar1 = param_8[1];
          iVar9 = param_8[2];
          iVar4 = param_8[3];
          piVar10[5] = *param_8;
          piVar10[6] = iVar1;
          piVar10[7] = iVar9;
          piVar10[8] = iVar4;
          iVar1 = param_8[4];
          piVar10[10] = param_8[5];
          piVar10[9] = iVar1;
        }
        iVar1 = *(int *)puVar5;
        *(uint *)(uVar2 * 4 + *(int *)(puVar6 + 4)) = uVar8;
        *param_1 = uVar2;
        iVar9 = *(int *)(iVar1 + 0x114);
        *(uint *)puVar6 = uVar2 + 1;
        if ((int)uVar8 < iVar9) {
          return 0;
        }
        *(uint *)(iVar1 + 0x114) = uVar8 + 1;
        return 0;
      }
    }
    uVar7 = 3;
  }
  return uVar7;
}


// 0x057c4a8 (0x180 bytes)
void FUN_0057c4a8(int param_1,int param_2,int param_3)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  undefined *puVar4;
  int iVar5;
  int iVar6;
  
  puVar4 = PTR_DAT_0071b698;
  if ((((*(int *)PTR_DAT_0071b698 != 0) && (param_1 != 0)) && (param_2 != 0)) &&
     (iVar5 = *(int *)(param_2 + 4), 0 < iVar5)) {
    iVar6 = 0;
    do {
      piVar1 = *(int **)(iVar6 * 4 + *(int *)(param_2 + 0x28));
      if (piVar1[3] < 0x10) {
        if (*(uint *)(*(int *)puVar4 + 0xfc) <= *(uint *)(param_1 + 4)) {
          return;
        }
        iVar2 = *(int *)(param_1 + 0x28);
        *(int *)(*(uint *)(param_1 + 4) * 4 + *(int *)(param_1 + 0x2c)) = *piVar1 + param_3;
        iVar3 = *(int *)(param_1 + 4);
        *(int *)(param_1 + 4) = iVar3 + 1;
        iVar5 = *(int *)(param_2 + 4);
        *(int **)(iVar3 * 4 + iVar2) = piVar1;
      }
      else if (0 < piVar1[2]) {
        iVar5 = 0;
        do {
          iVar5 = iVar5 + 1;
          FUN_0057c4a8(param_1,piVar1[3] * 0x40 + (piVar1[3] & 0xfffffffU) * -0x10 +
                               *(int *)(*(int *)puVar4 + 0x170) + -0x300,param_3 + *piVar1);
        } while (iVar5 < piVar1[2]);
        iVar5 = *(int *)(param_2 + 4);
      }
      iVar6 = iVar6 + 1;
    } while (iVar6 < iVar5);
  }
  return;
}


// 0x057c628 (0x90 bytes)
undefined8 FUN_0057c628(int *param_1,uint *param_2)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  undefined8 uVar5;
  int *piVar6;
  
  uVar5 = 2;
  iVar1 = *(int *)PTR_DAT_0071b698;
  if (iVar1 != 0) {
    if (((param_1 != (int *)0x0) && (param_2 != (uint *)0x0)) && (iVar2 = *param_1, iVar2 != 0)) {
      uVar3 = *(uint *)(iVar1 + 0x118);
      if (*(uint *)(iVar1 + 0x104) <= uVar3) {
        return 0x11;
      }
      iVar4 = param_1[1];
      piVar6 = (int *)(uVar3 * 8 + *(int *)(iVar1 + 0x168));
      *param_2 = uVar3;
      param_2[1] = 0;
      *(uint *)(iVar1 + 0x118) = uVar3 + 1;
      *piVar6 = iVar2;
      piVar6[1] = iVar4;
      return 0;
    }
    uVar5 = 3;
  }
  return uVar5;
}


// 0x057c6b8 (0x88 bytes)
undefined8
FUN_0057c6b8(ulonglong param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined8 uVar6;
  
  uVar6 = 2;
  iVar1 = *(int *)PTR_DAT_0071b698;
  if (iVar1 != 0) {
    iVar5 = (int)((param_1 & 0xffffffff) << 2);
    uVar6 = 3;
    if ((param_1 & 0xffffffff) < (ulonglong)*(uint *)(iVar1 + 0xf8)) {
      iVar2 = *(int *)(iVar1 + 0x164);
      uVar6 = 0;
      iVar3 = *(int *)(iVar1 + 0x15c);
      iVar4 = *(int *)(iVar1 + 0x160);
      *(undefined4 *)(iVar5 + *(int *)(iVar1 + 0x158)) = param_2;
      *(undefined4 *)(iVar5 + iVar3) = param_3;
      *(undefined4 *)(iVar5 + iVar4) = param_4;
      *(undefined4 *)(iVar5 + iVar2) = param_5;
    }
  }
  return uVar6;
}


// 0x057c740 (0x88 bytes)
undefined8 FUN_0057c740(int *param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined8 uVar5;
  
  uVar5 = 2;
  iVar1 = *(int *)PTR_DAT_0071b698;
  if (iVar1 != 0) {
    uVar5 = 0x14;
    if ((*(uint *)(iVar1 + 0x11c) < *(uint *)(iVar1 + 0x108)) && (uVar5 = 3, param_1 != (int *)0x0))
    {
      iVar2 = *(int *)(iVar1 + 0x174);
      iVar3 = *(int *)(iVar1 + 0x178);
      uVar5 = 0;
      *param_1 = -1;
      iVar4 = *(int *)(iVar1 + 0x11c) * 4;
      *param_1 = *(int *)(iVar1 + 0x11c);
      *(int *)(iVar1 + 0x11c) = *(int *)(iVar1 + 0x11c) + 1;
      *(undefined4 *)(iVar4 + iVar3) = param_3;
      *(undefined4 *)(iVar4 + iVar2) = param_2;
    }
  }
  return uVar5;
}


// 0x057c7c8 (0x14c bytes)
undefined8 FUN_0057c7c8(uint param_1)

{
  undefined4 *puVar1;
  int iVar2;
  undefined *puVar3;
  undefined4 *puVar4;
  int iVar5;
  int iVar6;
  undefined8 uVar7;
  
  puVar3 = PTR_DAT_0071b698;
  uVar7 = 2;
  if (*(int *)PTR_DAT_0071b698 != 0) {
    iVar5 = FUN_0054285c();
    uVar7 = 0x24;
    if (iVar5 == 0) {
      if (param_1 < *(uint *)(*(int *)puVar3 + 0xf8)) {
        puVar4 = (undefined4 *)
                 (param_1 * 0x40 + (param_1 & 0xfffffff) * -0x10 + *(int *)(*(int *)puVar3 + 0x170))
        ;
        if (puVar4 == (undefined4 *)0x0) {
          return 1;
        }
        if (puVar4[1] != 0) {
          *(undefined1 *)(puVar4 + 2) = 0;
          if (0 < (int)puVar4[1]) {
            iVar5 = 0;
            do {
              iVar2 = iVar5 * 4;
              iVar6 = iVar5 + 1;
              iVar5 = iVar5 + 1;
              puVar1 = *(undefined4 **)(iVar2 + puVar4[10]);
              puVar1[10] = 0;
              *puVar1 = 0;
              puVar1[1] = 0;
              puVar1[2] = 0;
              puVar1[3] = 0;
              puVar1[4] = 0;
              puVar1[5] = 0;
              puVar1[6] = 0;
              puVar1[7] = 0;
              puVar1[8] = 0;
              puVar1[9] = 0;
              *(undefined4 *)(iVar2 + puVar4[0xb]) = 0;
            } while (iVar6 < (int)puVar4[1]);
          }
          *puVar4 = 0;
          puVar4[1] = 0;
          return 0;
        }
      }
      uVar7 = 10;
    }
  }
  return uVar7;
}


// 0x057c914 (0xf4 bytes)
int FUN_0057c914(void)

{
  undefined *puVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  
  puVar1 = PTR_DAT_0071b698;
  iVar3 = 2;
  if (*(int *)PTR_DAT_0071b698 != 0) {
    iVar2 = FUN_0054285c();
    iVar3 = 0x24;
    if (iVar2 == 0) {
      iVar3 = *(int *)(*(int *)puVar1 + 0x110);
      if (iVar3 != 0) {
        iVar5 = 0;
        iVar2 = 0;
        do {
          iVar6 = iVar2 + 1;
          iVar4 = iVar5 + *(int *)(*(int *)puVar1 + 0x170);
          iVar5 = iVar5 + 0x30;
          if ((*(int *)(iVar4 + 4) != 0) && (iVar2 = FUN_0057c7c8(iVar2), iVar2 != 0)) {
            return iVar2;
          }
          iVar2 = iVar6;
        } while (iVar3 != iVar6);
      }
      *(undefined4 *)(*(int *)puVar1 + 0x110) = 0;
      return 0;
    }
  }
  return iVar3;
}


// 0x057ca08 (0x254 bytes)
undefined8 FUN_0057ca08(uint param_1,int param_2,int param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined *puVar4;
  undefined *puVar5;
  int *piVar6;
  undefined4 *puVar7;
  undefined8 uVar8;
  uint uVar9;
  int iVar10;
  
  puVar4 = PTR_DAT_0071b698;
  iVar1 = *(int *)PTR_DAT_0071b698;
  uVar8 = 2;
  if (iVar1 != 0) {
    if ((param_2 == 0) || (param_3 < 1)) {
      uVar8 = 3;
    }
    else {
      if (param_1 < *(uint *)(iVar1 + 0xf8)) {
        piVar6 = (int *)(param_1 * 0x40 + (param_1 & 0xfffffff) * -0x10 + *(int *)(iVar1 + 0x170));
        if (piVar6 == (int *)0x0) {
          return 1;
        }
        if (piVar6[1] == 0) {
          *piVar6 = param_3;
          strcpy(piVar6 + 2,param_2,0x20);
          puVar5 = PTR_DAT_0071b69c;
          iVar1 = *(int *)PTR_DAT_0071b69c;
          if (iVar1 != 0) {
            iVar10 = 0;
            do {
              puVar7 = (undefined4 *)
                       (*(int *)(iVar10 * 4 + *(int *)(puVar5 + 4)) * 0x2c +
                       *(int *)(*(int *)puVar4 + 0x16c));
              if (puVar7 != (undefined4 *)0x0) {
                if ((int)puVar7[3] < 0x10) {
                  if (*(uint *)(*(int *)puVar4 + 0xfc) <= (uint)piVar6[1]) goto LAB_0057caa0;
                  iVar2 = piVar6[10];
                  *(undefined4 *)(piVar6[1] * 4 + piVar6[0xb]) = *puVar7;
                  iVar3 = piVar6[1];
                  piVar6[1] = iVar3 + 1;
                  *(undefined4 **)(iVar3 * 4 + iVar2) = puVar7;
                }
                else if (puVar7[2] != 0) {
                  uVar9 = 0;
                  do {
                    uVar9 = uVar9 + 1;
                    FUN_0057c4a8(piVar6,puVar7[3] * 0x40 + (puVar7[3] & 0xfffffff) * -0x10 +
                                        *(int *)(*(int *)puVar4 + 0x170) + -0x300,*puVar7);
                  } while (uVar9 < (uint)puVar7[2]);
                }
              }
              iVar10 = iVar10 + 1;
            } while (iVar10 != iVar1);
          }
          FUN_005519f0(puVar5 + 4);
          if ((int)param_1 < *(int *)(*(int *)puVar4 + 0x110)) {
            return 0;
          }
          *(uint *)(*(int *)puVar4 + 0x110) = param_1 + 1;
          return 0;
        }
      }
LAB_0057caa0:
      uVar8 = 10;
    }
  }
  return uVar8;
}


// 0x057cc5c (0xd8 bytes)
undefined8 FUN_0057cc5c(uint *param_1,int param_2,int param_3)

{
  int iVar1;
  uint uVar2;
  undefined8 uVar3;
  int *piVar4;
  uint uVar5;
  ulonglong uVar6;
  
  uVar3 = 2;
  iVar1 = *(int *)PTR_DAT_0071b698;
  if (iVar1 != 0) {
    if (((param_1 == (uint *)0x0) || (param_2 == 0)) || (param_3 < 1)) {
      uVar3 = 3;
    }
    else {
      uVar3 = 10;
      uVar2 = *(uint *)(iVar1 + 0x110);
      if (uVar2 < *(uint *)(iVar1 + 0xf8)) {
        *param_1 = uVar2;
        if (0 < (int)uVar2) {
          uVar5 = 0;
          if (*(int *)(*(int *)(iVar1 + 0x170) + 4) != 0) {
            uVar6 = (ulonglong)uVar2;
            uVar5 = 0;
            piVar4 = (int *)(*(int *)(iVar1 + 0x170) + 0x34);
            do {
              uVar5 = uVar5 + 1;
              uVar6 = uVar6 - 1;
              if (uVar6 == 0) goto LAB_0057ccf8;
              iVar1 = *piVar4;
              piVar4 = piVar4 + 0xc;
            } while (iVar1 != 0);
          }
          *param_1 = uVar5;
          uVar3 = FUN_0057ca08(*param_1,param_2,param_3);
          return uVar3;
        }
LAB_0057ccf8:
        uVar3 = FUN_0057ca08(*param_1,param_2,param_3);
        return uVar3;
      }
    }
  }
  return uVar3;
}


// 0x057cd34 (0x7c bytes)
undefined4 FUN_0057cd34(void)

{
  int iVar1;
  uint uVar2;
  undefined *puVar3;
  undefined4 uVar4;
  
  uVar4 = 2;
  iVar1 = *(int *)PTR_DAT_0071b698;
  if ((iVar1 != 0) && (uVar4 = 10, *(uint *)(iVar1 + 0x110) < *(uint *)(iVar1 + 0xf8))) {
    uVar2 = *(uint *)(iVar1 + 0xfc);
    puVar3 = PTR_DAT_0071b69c + 4;
    *(undefined4 *)PTR_DAT_0071b69c = 0;
    uVar4 = FUN_00551de8(puVar3,((ulonglong)uVar2 & 0x3fffffff) << 2);
    uVar4 = FUN_00540808(uVar4);
  }
  return uVar4;
}


// 0x057cdb0 (0x60 bytes)
undefined4 FUN_0057cdb0(int param_1,uint param_2)

{
  undefined4 uVar1;
  
  uVar1 = 0;
  if ((((*(int *)PTR_DAT_0071b6a4 != 0) && (param_1 != 0)) &&
      (*(int *)(*(int *)PTR_DAT_0071b6a4 + 0x138) == param_1)) &&
     ((param_2 < 0x100 && (*(int *)PTR_DAT_0071b6a8 != 0)))) {
    uVar1 = *(undefined4 *)(param_2 * 4 + *(int *)PTR_DAT_0071b6a8);
  }
  return uVar1;
}


// 0x057ce10 (0x1dc bytes)
undefined8 FUN_0057ce10(int param_1,int param_2)

{
  int iVar1;
  undefined *puVar2;
  undefined8 uVar3;
  int iVar4;
  GPiece<2> local_e0;
  undefined2 local_de;
  undefined2 local_dc;
  undefined2 local_da;
  undefined2 local_d8;
  undefined2 local_d6;
  GPiece<24> auStack_cc;
  GPiece<48> auStack_b4;
  int local_84;
  undefined1 local_80;
  undefined4 local_7c;
  int local_78;
  undefined4 local_50;
  undefined4 local_4c;
  undefined1 *local_3c;
  
  puVar2 = PTR_DAT_0071b6a4;
  uVar3 = 3;
  if (param_2 + 1U < 0x101) {
    if ((param_1 != 0) && (iVar1 = *(int *)(param_1 + 0x400), iVar1 != 0)) {
      if ((*(int *)PTR_DAT_0071b6a4 != 0) &&
         (((iVar4 = (*(code *)**(undefined4 **)(*(int *)PTR_DAT_0071b6a4 + 0x44))
                              (param_1,*(undefined4 *)(param_1 + 0x404)), iVar4 != 0 &&
           (*(int *)puVar2 != 0)) && (*(int *)(iVar1 + 0xc) - 4U < 2)))) {
        local_e0[0] = FUN_00541a44(*(undefined4 *)(param_1 + 0x404));
        local_de = (undefined2)*(undefined4 *)(iVar4 + 4);
        local_dc = (undefined2)*(undefined4 *)(iVar4 + 8);
        local_da = (undefined2)*(undefined4 *)(iVar4 + 0xc);
        local_d8 = (undefined2)*(undefined4 *)(iVar4 + 0x10);
        local_d6 = (undefined2)*(undefined4 *)(iVar4 + 0x14);
        strcpy(auStack_cc,iVar4 + 0x18,0x18);
        memset(&local_84,0,0x4c);
        local_80 = 0x50;
        local_84 = *(int *)(*(int *)puVar2 + 0x138);
        local_3c = local_e0;
        local_50 = *(undefined4 *)(local_84 + 0x44c);
        local_7c = 0xf;
        local_4c = 0x2c;
        local_78 = param_2;
        FUN_00546bdc(&local_84,auStack_b4,0);
        return 0;
      }
      return 0x13;
    }
    uVar3 = 10;
  }
  return uVar3;
}


// 0x057cfec (0x28 bytes)
void FUN_0057cfec(void)

{
  FUN_005472a4(PTR_DAT_0071b6a8);
  return;
}


// 0x057d014 (0x48 bytes)
void FUN_0057d014(int param_1,uint param_2)

{
  if ((param_2 < 0x100) && (param_1 != 0)) {
    FUN_005472a4(param_2 * 4 + *(int *)PTR_DAT_0071b6a8);
  }
  return;
}


// 0x057d05c (0x80 bytes)
void FUN_0057d05c(int param_1)

{
  bool bVar1;
  int iVar2;
  
  if ((param_1 != 0) && (*(int *)PTR_DAT_0071b6a8 != 0)) {
    iVar2 = 0;
    do {
      FUN_0057d014(param_1,iVar2);
      bVar1 = iVar2 != 0xff;
      iVar2 = iVar2 + 1;
    } while (bVar1);
  }
  if (*(int *)PTR_DAT_0071b6a4 != 0) {
    *(undefined4 *)(*(int *)PTR_DAT_0071b6a4 + 0x128) = 0;
  }
  return;
}


// 0x057d0dc (0x7c bytes)
void FUN_0057d0dc(void)

{
  int iVar1;
  
  if (*(int *)PTR_DAT_0071b6a8 != 0) {
    for (iVar1 = *(int *)(*(int *)PTR_PTR_0071b6ac + 0x1088); iVar1 != 0;
        iVar1 = *(int *)(iVar1 + 0x534)) {
      FUN_0057d05c(iVar1);
    }
  }
  if (*(int *)PTR_DAT_0071b6a4 != 0) {
    *(undefined4 *)(*(int *)PTR_DAT_0071b6a4 + 0x128) = 0;
  }
  return;
}


// 0x057d158 (0x84 bytes)
int FUN_0057d158(int param_1,uint param_2)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  
  iVar4 = 0;
  if ((param_2 < 0x100) && (param_1 != 0)) {
    iVar4 = FUN_00547ec0(0x30);
    iVar1 = *(int *)PTR_DAT_0071b6a4;
    iVar2 = *(int *)PTR_DAT_0071b6a8;
    *(undefined4 *)(iVar4 + 8) = *(undefined4 *)(iVar1 + 0x100);
    uVar3 = *(undefined4 *)(iVar1 + 0x10c);
    *(int *)(param_2 * 4 + iVar2) = iVar4;
    *(undefined4 *)(iVar4 + 0x10) = uVar3;
  }
  return iVar4;
}


// 0x057d1dc (0x60 bytes)
void FUN_0057d1dc(void)

{
  int iVar1;
  undefined4 uVar2;
  
  uVar2 = FUN_00547ec0(0x400);
  iVar1 = *(int *)PTR_DAT_0071b6a4;
  *(undefined4 *)PTR_DAT_0071b6a8 = uVar2;
  if (iVar1 != 0) {
    *(undefined4 *)(iVar1 + 0x128) = 0;
  }
  memset(uVar2,0,0x400);
  return;
}


// 0x057d23c (0x68 bytes)
undefined4 FUN_0057d23c(int param_1,undefined8 param_2,undefined8 param_3)

{
  undefined4 uVar1;
  
  uVar1 = (*(code *)**(undefined4 **)(PTR_PTR_0071b6b0 + 0x2c))
                    (param_3,1,0x86,0x26,param_1,param_1,0,param_1 + 0x15);
  return uVar1;
}


// 0x057d2a4 (0x64 bytes)
undefined4 FUN_0057d2a4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined4 uVar1;
  
  uVar1 = (*(code *)**(undefined4 **)(PTR_PTR_0071b6b0 + 0x2c))
                    (param_3,4,0x2a,0x15,param_1,param_1,0,0);
  return uVar1;
}


// 0x057d308 (0x68 bytes)
undefined4 FUN_0057d308(undefined8 param_1,undefined8 param_2)

{
  undefined4 uVar1;
  
  uVar1 = (*(code *)**(undefined4 **)(PTR_PTR_0071b6b0 + 0x2c))
                    (param_2,1,0x49,0x1c,param_1,0,0,param_1);
  return uVar1;
}


// 0x057d370 (0x8c bytes)
undefined4 FUN_0057d370(int param_1,undefined8 param_2,undefined4 param_3)

{
  undefined4 uVar1;
  
  uVar1 = 0xffffffeb;
  if (param_1 != 0) {
    uVar1 = (*(code *)**(undefined4 **)(PTR_PTR_0071b6b0 + 0x2c))
                      (param_3,1,5,0x26,param_1,param_1,0,param_1 + 0x15);
  }
  return uVar1;
}


// 0x057d3fc (0x70 bytes)
undefined4 FUN_0057d3fc(int param_1,undefined8 param_2)

{
  undefined4 uVar1;
  
  uVar1 = (*(code *)**(undefined4 **)(PTR_PTR_0071b6b0 + 0x2c))
                    (param_2,4,10,0x50,param_1,0,0,param_1 + 0x15);
  return uVar1;
}


// 0x057d46c (0x90 bytes)
undefined4 FUN_0057d46c(int param_1,undefined8 param_2,undefined4 param_3)

{
  undefined4 uVar1;
  
  uVar1 = 0xffffffe8;
  if (*(int *)PTR_DAT_0071b6b4 != 1) {
    uVar1 = (*(code *)**(undefined4 **)(PTR_PTR_0071b6b0 + 0x2c))
                      (param_3,1,0x15,0x26,param_1,param_1,0,param_1 + 0x15);
  }
  return uVar1;
}


// 0x057d4fc (0x68 bytes)
undefined4 FUN_0057d4fc(int param_1,undefined8 param_2,undefined8 param_3)

{
  undefined4 uVar1;
  
  uVar1 = (*(code *)**(undefined4 **)(PTR_PTR_0071b6b0 + 0x2c))
                    (param_3,1,0x11,0x126,param_1,param_1,0,param_1 + 0x15);
  return uVar1;
}


// 0x057d564 (0x68 bytes)
undefined4 FUN_0057d564(int param_1,undefined8 param_2,undefined8 param_3)

{
  undefined4 uVar1;
  
  uVar1 = (*(code *)**(undefined4 **)(PTR_PTR_0071b6b0 + 0x2c))
                    (param_3,4,0x39,300,param_1,param_1,0,param_1 + 0x15);
  return uVar1;
}


// 0x057d5cc (0x90 bytes)
undefined4 FUN_0057d5cc(int param_1,undefined8 param_2,undefined4 param_3)

{
  undefined4 uVar1;
  
  uVar1 = 0xffffffe8;
  if (*(int *)PTR_DAT_0071b6b4 != 1) {
    uVar1 = (*(code *)**(undefined4 **)(PTR_PTR_0071b6b0 + 0x2c))
                      (param_3,1,0x13,0x46,param_1,param_1,0,param_1 + 0x15);
  }
  return uVar1;
}


// 0x057d65c (0x90 bytes)
undefined4 FUN_0057d65c(int param_1,undefined8 param_2,undefined4 param_3)

{
  undefined4 uVar1;
  
  uVar1 = 0xffffffe8;
  if (*(int *)PTR_DAT_0071b6b4 != 1) {
    uVar1 = (*(code *)**(undefined4 **)(PTR_PTR_0071b6b0 + 0x2c))
                      (param_3,4,0x50,0x2c,param_1,param_1,0,param_1 + 0x15);
  }
  return uVar1;
}


// 0x057d6ec (0x90 bytes)
undefined4 FUN_0057d6ec(int param_1,undefined8 param_2,undefined4 param_3)

{
  undefined4 uVar1;
  
  uVar1 = 0xffffffe8;
  if (*(int *)PTR_DAT_0071b6b4 != 1) {
    uVar1 = (*(code *)**(undefined4 **)(PTR_PTR_0071b6b0 + 0x2c))
                      (param_3,4,0x52,0x26,param_1,param_1,0,param_1 + 0x15);
  }
  return uVar1;
}


// 0x057d77c (0x68 bytes)
undefined4 FUN_0057d77c(int param_1,undefined8 param_2,undefined8 param_3)

{
  undefined4 uVar1;
  
  uVar1 = (*(code *)**(undefined4 **)(PTR_PTR_0071b6b0 + 0x2c))
                    (param_3,4,0x5d,0x26,param_1,param_1,0,param_1 + 0x15);
  return uVar1;
}


// 0x057d7e4 (0x84 bytes)
undefined4 FUN_0057d7e4(int param_1,undefined8 param_2,undefined8 param_3)

{
  undefined4 uVar1;
  
  uVar1 = (*(code *)**(undefined4 **)(PTR_PTR_0071b6b0 + 0x2c))
                    (param_3,4,0x88,*(int *)(param_1 + 0x88) * 4 + *(int *)(param_1 + 0x8c) + 0x98,
                     param_1,param_1,0,param_1 + 0x15);
  return uVar1;
}


// 0x057d868 (0x84 bytes)
undefined4 FUN_0057d868(int param_1,undefined8 param_2,undefined8 param_3)

{
  undefined4 uVar1;
  
  uVar1 = (*(code *)**(undefined4 **)(PTR_PTR_0071b6b0 + 0x2c))
                    (param_3,4,0x94,
                     *(int *)(param_1 + 0x114) * 4 + *(int *)(param_1 + 0x118) + 0x124,param_1,
                     param_1,0,param_1 + 0x15);
  return uVar1;
}


// 0x057d8ec (0x6c bytes)
undefined4 FUN_0057d8ec(int param_1,undefined8 param_2)

{
  undefined4 uVar1;
  
  uVar1 = (*(code *)**(undefined4 **)(PTR_PTR_0071b6b0 + 0x2c))
                    (param_2,4,0x92,0x2c,param_1,param_1,0,param_1 + 0x15);
  return uVar1;
}


// 0x057d958 (0x68 bytes)
undefined4 FUN_0057d958(int param_1,undefined8 param_2,undefined8 param_3)

{
  undefined4 uVar1;
  
  uVar1 = (*(code *)**(undefined4 **)(PTR_PTR_0071b6b0 + 0x2c))
                    (param_3,4,0x79,0x2c,param_1,param_1,0,param_1 + 0x15);
  return uVar1;
}


// 0x057d9c0 (0xa4 bytes)
undefined4 FUN_0057d9c0(int param_1,undefined8 param_2,undefined4 param_3)

{
  undefined4 uVar1;
  
  uVar1 = 0xffffffeb;
  if (*(int *)(param_1 + 0x2c) - 1U < 0x180) {
    if (*(int *)(param_1 + 0x30) != 0) {
      uVar1 = (*(code *)**(undefined4 **)(PTR_PTR_0071b6b0 + 0x2c))
                        (param_3,4,0x75,*(int *)(param_1 + 0x2c) + 0x35,param_1,param_1,0,
                         param_1 + 0x15);
    }
  }
  return uVar1;
}


// 0x057da64 (0x68 bytes)
undefined4 FUN_0057da64(int param_1,undefined8 param_2,undefined8 param_3)

{
  undefined4 uVar1;
  
  uVar1 = (*(code *)**(undefined4 **)(PTR_PTR_0071b6b0 + 0x2c))
                    (param_3,4,0x71,0x2c,param_1,param_1,0,param_1 + 0x15);
  return uVar1;
}


// 0x057dacc (0x68 bytes)
undefined4 FUN_0057dacc(int param_1,undefined8 param_2,undefined8 param_3)

{
  undefined4 uVar1;
  
  uVar1 = (*(code *)**(undefined4 **)(PTR_PTR_0071b6b0 + 0x2c))
                    (param_3,1,0x29,0x30,param_1,param_1,0,param_1 + 0x15);
  return uVar1;
}


// 0x057db34 (0x68 bytes)
undefined4 FUN_0057db34(int param_1,undefined8 param_2,undefined8 param_3)

{
  undefined4 uVar1;
  
  uVar1 = (*(code *)**(undefined4 **)(PTR_PTR_0071b6b0 + 0x2c))
                    (param_3,4,0x69,0x30,param_1,param_1,0,param_1 + 0x15);
  return uVar1;
}


// 0x057db9c (0x68 bytes)
undefined4 FUN_0057db9c(int param_1,undefined8 param_2,undefined8 param_3)

{
  undefined4 uVar1;
  
  uVar1 = (*(code *)**(undefined4 **)(PTR_PTR_0071b6b0 + 0x2c))
                    (param_3,1,0x2b,0x2a,param_1,param_1,0,param_1 + 0x15);
  return uVar1;
}


// 0x057dc04 (0x68 bytes)
undefined4 FUN_0057dc04(int param_1,undefined8 param_2,undefined8 param_3)

{
  undefined4 uVar1;
  
  uVar1 = (*(code *)**(undefined4 **)(PTR_PTR_0071b6b0 + 0x2c))
                    (param_3,1,0x2d,0x2c,param_1,param_1,0,param_1 + 0x15);
  return uVar1;
}


// 0x057dc6c (0x68 bytes)
undefined4 FUN_0057dc6c(int param_1,undefined8 param_2,undefined8 param_3)

{
  undefined4 uVar1;
  
  uVar1 = (*(code *)**(undefined4 **)(PTR_PTR_0071b6b0 + 0x2c))
                    (param_3,1,0x2f,0x2c,param_1,param_1,0,param_1 + 0x15);
  return uVar1;
}


// 0x057dcd4 (0x4 bytes)
undefined4 thunk_FUN_0057dc6c(int param_1,undefined8 param_2,undefined8 param_3)

{
  undefined4 uVar1;
  
  uVar1 = (*(code *)**(undefined4 **)(PTR_PTR_0071b6b0 + 0x2c))
                    (param_3,1,0x2f,0x2c,param_1,param_1,0,param_1 + 0x15);
  return uVar1;
}


// 0x057dcd8 (0x68 bytes)
undefined4 FUN_0057dcd8(int param_1,undefined8 param_2,undefined8 param_3)

{
  undefined4 uVar1;
  
  uVar1 = (*(code *)**(undefined4 **)(PTR_PTR_0071b6b0 + 0x2c))
                    (param_3,1,0x31,0x2c,param_1,param_1,0,param_1 + 0x15);
  return uVar1;
}


// 0x057dd40 (0x68 bytes)
undefined4 FUN_0057dd40(int param_1,undefined8 param_2,undefined8 param_3)

{
  undefined4 uVar1;
  
  uVar1 = (*(code *)**(undefined4 **)(PTR_PTR_0071b6b0 + 0x2c))
                    (param_3,4,0x35,0x2c,param_1,param_1,0,param_1 + 0x15);
  return uVar1;
}


// 0x057dda8 (0x68 bytes)
undefined4 FUN_0057dda8(int param_1,undefined8 param_2,undefined8 param_3)

{
  undefined4 uVar1;
  
  uVar1 = (*(code *)**(undefined4 **)(PTR_PTR_0071b6b0 + 0x2c))
                    (param_3,1,0x35,0x2c,param_1,param_1,0,param_1 + 0x15);
  return uVar1;
}


// 0x057de10 (0x68 bytes)
undefined4 FUN_0057de10(int param_1,undefined8 param_2,undefined8 param_3)

{
  undefined4 uVar1;
  
  uVar1 = (*(code *)**(undefined4 **)(PTR_PTR_0071b6b0 + 0x2c))
                    (param_3,1,0x39,0x50,param_1,param_1,0,param_1 + 0x15);
  return uVar1;
}


// 0x057de78 (0x68 bytes)
undefined4 FUN_0057de78(int param_1,undefined8 param_2,undefined8 param_3)

{
  undefined4 uVar1;
  
  uVar1 = (*(code *)**(undefined4 **)(PTR_PTR_0071b6b0 + 0x2c))
                    (param_3,1,0x37,0x6c,param_1,param_1,0,param_1 + 0x15);
  return uVar1;
}


// 0x057dee0 (0xa4 bytes)
undefined4 FUN_0057dee0(int param_1,undefined4 param_2)

{
  undefined4 uVar1;
  
  uVar1 = 0xffffffeb;
  if (*(int *)(param_1 + 0x30) - 1U < 0x180) {
    if (*(int *)(param_1 + 0x34) != 0) {
      uVar1 = (*(code *)**(undefined4 **)(PTR_PTR_0071b6b0 + 0x2c))
                        (param_2,4,0x73,*(int *)(param_1 + 0x30) + 0x39,param_1,0,0,param_1 + 0x15);
    }
  }
  return uVar1;
}


// 0x057df84 (0x78 bytes)
undefined4 FUN_0057df84(int param_1,undefined8 param_2)

{
  undefined4 uVar1;
  
  uVar1 = (*(code *)**(undefined4 **)(PTR_PTR_0071b6b0 + 0x2c))
                    (param_2,4,0x5b,*(int *)(param_1 + 0x30) + 0x39,param_1,0,0,param_1 + 0x15);
  return uVar1;
}


// 0x057dffc (0x90 bytes)
undefined4 FUN_0057dffc(int param_1,undefined8 param_2,undefined4 param_3)

{
  undefined4 uVar1;
  
  uVar1 = 0xffffffe8;
  if (*(int *)PTR_DAT_0071b6b4 != 1) {
    uVar1 = (*(code *)**(undefined4 **)(PTR_PTR_0071b6b0 + 0x2c))
                      (param_3,1,0x3d,0x26,param_1,param_1,0,param_1 + 0x15);
  }
  return uVar1;
}


// 0x057e08c (0x90 bytes)
undefined4 FUN_0057e08c(int param_1,undefined8 param_2,undefined4 param_3)

{
  undefined4 uVar1;
  
  uVar1 = 0xffffffe8;
  if (*(int *)PTR_DAT_0071b6b4 != 1) {
    uVar1 = (*(code *)**(undefined4 **)(PTR_PTR_0071b6b0 + 0x2c))
                      (param_3,1,0x3f,0x2c,param_1,param_1,0,param_1 + 0x15);
  }
  return uVar1;
}


// 0x057e11c (0x90 bytes)
undefined4 FUN_0057e11c(int param_1,undefined8 param_2,undefined4 param_3)

{
  undefined4 uVar1;
  
  uVar1 = 0xffffffe8;
  if (*(int *)PTR_DAT_0071b6b4 != 1) {
    uVar1 = (*(code *)**(undefined4 **)(PTR_PTR_0071b6b0 + 0x2c))
                      (param_3,1,0x41,0x2c,param_1,param_1,0,param_1 + 0x15);
  }
  return uVar1;
}


// 0x057e1ac (0x90 bytes)
undefined4 FUN_0057e1ac(int param_1,undefined8 param_2,undefined4 param_3)

{
  undefined4 uVar1;
  
  uVar1 = 0xffffffe8;
  if (*(int *)PTR_DAT_0071b6b4 != 1) {
    uVar1 = (*(code *)**(undefined4 **)(PTR_PTR_0071b6b0 + 0x2c))
                      (param_3,4,99,0x30,param_1,param_1,0,param_1 + 0x15);
  }
  return uVar1;
}


// 0x057e23c (0x68 bytes)
undefined4 FUN_0057e23c(int param_1,undefined8 param_2,undefined8 param_3)

{
  undefined4 uVar1;
  
  uVar1 = (*(code *)**(undefined4 **)(PTR_PTR_0071b6b0 + 0x2c))
                    (param_3,1,0xc0,0x26,param_1,param_1,0,param_1 + 0x15);
  return uVar1;
}


// 0x057e2a4 (0x68 bytes)
undefined4 FUN_0057e2a4(int param_1,undefined8 param_2,undefined8 param_3)

{
  undefined4 uVar1;
  
  uVar1 = (*(code *)**(undefined4 **)(PTR_PTR_0071b6b0 + 0x2c))
                    (param_3,1,0xc2,0x2c,param_1,param_1,0,param_1 + 0x15);
  return uVar1;
}


// 0x057e30c (0x68 bytes)
undefined4 FUN_0057e30c(int param_1,undefined8 param_2,undefined8 param_3)

{
  undefined4 uVar1;
  
  uVar1 = (*(code *)**(undefined4 **)(PTR_PTR_0071b6b0 + 0x2c))
                    (param_3,1,0xc4,0x2c,param_1,param_1,0,param_1 + 0x15);
  return uVar1;
}


// 0x057e374 (0xa8 bytes)
undefined4 FUN_0057e374(int param_1,undefined8 param_2,undefined4 param_3)

{
  undefined4 uVar1;
  
  if (1 < *(uint *)(param_1 + 0x28)) {
    return 0xffffffeb;
  }
  uVar1 = (*(code *)**(undefined4 **)(PTR_PTR_0071b6b0 + 0x2c))
                    (param_3,1,0x47,0x2c,param_1,param_1,0,param_1 + 0x15);
  return uVar1;
}


// 0x057e41c (0x68 bytes)
undefined4 FUN_0057e41c(int param_1,undefined8 param_2,undefined8 param_3)

{
  undefined4 uVar1;
  
  uVar1 = (*(code *)**(undefined4 **)(PTR_PTR_0071b6b0 + 0x2c))
                    (param_3,1,0x4b,0x2c,param_1,param_1,0,param_1 + 0x15);
  return uVar1;
}


// 0x057e484 (0x68 bytes)
undefined4 FUN_0057e484(int param_1,undefined8 param_2,undefined8 param_3)

{
  undefined4 uVar1;
  
  uVar1 = (*(code *)**(undefined4 **)(PTR_PTR_0071b6b0 + 0x2c))
                    (param_3,1,0x4c,0x2c,param_1,param_1,0,param_1 + 0x15);
  return uVar1;
}


// 0x057e4ec (0x64 bytes)
undefined4 FUN_0057e4ec(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined4 uVar1;
  
  uVar1 = (*(code *)**(undefined4 **)(PTR_PTR_0071b6b0 + 0x2c))
                    (param_3,4,0x33,0x28,param_1,param_1,0,0);
  return uVar1;
}


// 0x057e550 (0x64 bytes)
undefined4 FUN_0057e550(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined4 uVar1;
  
  uVar1 = (*(code *)**(undefined4 **)(PTR_PTR_0071b6b0 + 0x2c))
                    (param_3,4,0x31,0x1c,param_1,param_1,0,0);
  return uVar1;
}


// 0x057e5b4 (0x68 bytes)
undefined4 FUN_0057e5b4(int param_1,undefined8 param_2,undefined8 param_3)

{
  undefined4 uVar1;
  
  uVar1 = (*(code *)**(undefined4 **)(PTR_PTR_0071b6b0 + 0x2c))
                    (param_3,1,0x52,0x26,param_1,param_1,0,param_1 + 0x15);
  return uVar1;
}


// 0x057e61c (0x68 bytes)
undefined4 FUN_0057e61c(int param_1,undefined8 param_2,undefined8 param_3)

{
  undefined4 uVar1;
  
  uVar1 = (*(code *)**(undefined4 **)(PTR_PTR_0071b6b0 + 0x2c))
                    (param_3,1,0x1b,0x26,param_1,param_1,0,param_1 + 0x15);
  return uVar1;
}


// 0x057e684 (0x68 bytes)
undefined4 FUN_0057e684(int param_1,undefined8 param_2,undefined8 param_3)

{
  undefined4 uVar1;
  
  uVar1 = (*(code *)**(undefined4 **)(PTR_PTR_0071b6b0 + 0x2c))
                    (param_3,1,0x88,0x30,param_1,param_1,0,param_1 + 0x15);
  return uVar1;
}


// 0x057e6ec (0x68 bytes)
undefined4 FUN_0057e6ec(int param_1,undefined8 param_2,undefined8 param_3)

{
  undefined4 uVar1;
  
  uVar1 = (*(code *)**(undefined4 **)(PTR_PTR_0071b6b0 + 0x2c))
                    (param_3,1,0x8a,0x38,param_1,param_1,0,param_1 + 0x15);
  return uVar1;
}


// 0x057e754 (0x68 bytes)
undefined4 FUN_0057e754(int param_1,undefined8 param_2,undefined8 param_3)

{
  undefined4 uVar1;
  
  uVar1 = (*(code *)**(undefined4 **)(PTR_PTR_0071b6b0 + 0x2c))
                    (param_3,1,0x17,0x46,param_1,param_1,0,param_1 + 0x15);
  return uVar1;
}


// 0x057e7bc (0x68 bytes)
undefined4 FUN_0057e7bc(int param_1,undefined8 param_2,undefined8 param_3)

{
  undefined4 uVar1;
  
  uVar1 = (*(code *)**(undefined4 **)(PTR_PTR_0071b6b0 + 0x2c))
                    (param_3,1,0x8c,0x26,param_1,param_1,0,param_1 + 0x15);
  return uVar1;
}


// 0x057e824 (0x68 bytes)
undefined4 FUN_0057e824(int param_1,undefined8 param_2,undefined8 param_3)

{
  undefined4 uVar1;
  
  uVar1 = (*(code *)**(undefined4 **)(PTR_PTR_0071b6b0 + 0x2c))
                    (param_3,4,0x25,0x36,param_1,param_1,0,param_1 + 0x15);
  return uVar1;
}


// 0x057e88c (0x68 bytes)
undefined4 FUN_0057e88c(int param_1,undefined8 param_2,undefined8 param_3)

{
  undefined4 uVar1;
  
  uVar1 = (*(code *)**(undefined4 **)(PTR_PTR_0071b6b0 + 0x2c))
                    (param_3,1,0x9b,0x2c,param_1,param_1,0,param_1 + 0x15);
  return uVar1;
}


// 0x057e8f4 (0x68 bytes)
undefined4 FUN_0057e8f4(int param_1,undefined8 param_2,undefined8 param_3)

{
  undefined4 uVar1;
  
  uVar1 = (*(code *)**(undefined4 **)(PTR_PTR_0071b6b0 + 0x2c))
                    (param_3,1,0x9d,0x2c,param_1,param_1,0,param_1 + 0x15);
  return uVar1;
}


// 0x057e95c (0x68 bytes)
undefined4 FUN_0057e95c(int param_1,undefined8 param_2,undefined8 param_3)

{
  undefined4 uVar1;
  
  uVar1 = (*(code *)**(undefined4 **)(PTR_PTR_0071b6b0 + 0x2c))
                    (param_3,1,0x9f,0x2c,param_1,param_1,0,param_1 + 0x15);
  return uVar1;
}


// 0x057e9c4 (0x68 bytes)
undefined4 FUN_0057e9c4(int param_1,undefined8 param_2,undefined8 param_3)

{
  undefined4 uVar1;
  
  uVar1 = (*(code *)**(undefined4 **)(PTR_PTR_0071b6b0 + 0x2c))
                    (param_3,1,0xa1,0x2c,param_1,param_1,0,param_1 + 0x15);
  return uVar1;
}


// 0x057ea2c (0x68 bytes)
undefined4 FUN_0057ea2c(int param_1,undefined8 param_2,undefined8 param_3)

{
  undefined4 uVar1;
  
  uVar1 = (*(code *)**(undefined4 **)(PTR_PTR_0071b6b0 + 0x2c))
                    (param_3,4,0x7b,0x38,param_1,param_1,0,param_1 + 0x15);
  return uVar1;
}


// 0x057ea94 (0x68 bytes)
undefined4 FUN_0057ea94(int param_1,undefined8 param_2,undefined8 param_3)

{
  undefined4 uVar1;
  
  uVar1 = (*(code *)**(undefined4 **)(PTR_PTR_0071b6b0 + 0x2c))
                    (param_3,1,0xc6,0x30,param_1,param_1,0,param_1 + 0x15);
  return uVar1;
}


// 0x057eafc (0x68 bytes)
undefined4 FUN_0057eafc(int param_1,undefined8 param_2,undefined8 param_3)

{
  undefined4 uVar1;
  
  uVar1 = (*(code *)**(undefined4 **)(PTR_PTR_0071b6b0 + 0x2c))
                    (param_3,4,0x6b,0x2c,param_1,param_1,0,param_1 + 0x15);
  return uVar1;
}


// 0x057eb64 (0x4c bytes)
void FUN_0057eb64(int param_1,undefined4 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR_DAT_0071b6b8;
  *(undefined4 *)(param_1 + 0x140) = param_2;
  (*(code *)**(undefined4 **)(*(int *)puVar1 + 4))(param_1 + 0x144);
  return;
}


// 0x057ebb0 (0x8c bytes)
undefined4 FUN_0057ebb0(undefined4 param_1,undefined8 param_2,undefined4 param_3)

{
  undefined4 uVar1;
  
  uVar1 = 0xffffffe8;
  if (*(int *)PTR_DAT_0071b6b4 != 1) {
    uVar1 = (*(code *)**(undefined4 **)(PTR_PTR_0071b6b0 + 0x2c))
                      (param_3,1,0xd6,0x15,param_1,param_1,0,0);
  }
  return uVar1;
}


// 0x057ec3c (0x64 bytes)
undefined4 FUN_0057ec3c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined4 uVar1;
  
  uVar1 = (*(code *)**(undefined4 **)(PTR_PTR_0071b6b0 + 0x2c))
                    (param_3,1,0xdc,0x1c,param_1,param_1,0,0);
  return uVar1;
}


// 0x057eca0 (0x64 bytes)
undefined4 FUN_0057eca0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined4 uVar1;
  
  uVar1 = (*(code *)**(undefined4 **)(PTR_PTR_0071b6b0 + 0x2c))
                    (param_3,4,0x37,0x1a,param_1,param_1,0,0);
  return uVar1;
}


// 0x057ed04 (0x64 bytes)
undefined4 FUN_0057ed04(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined4 uVar1;
  
  uVar1 = (*(code *)**(undefined4 **)(PTR_PTR_0071b6b0 + 0x2c))
                    (param_3,4,0x96,0x1a,param_1,param_1,0,0);
  return uVar1;
}


// 0x057ed68 (0x64 bytes)
undefined4 FUN_0057ed68(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined4 uVar1;
  
  uVar1 = (*(code *)**(undefined4 **)(PTR_PTR_0071b6b0 + 0x2c))
                    (param_3,4,0x1f,0x1a,param_1,param_1,0,0);
  return uVar1;
}


// 0x057edcc (0x8c bytes)
undefined4 FUN_0057edcc(undefined4 param_1,undefined8 param_2,undefined4 param_3)

{
  undefined4 uVar1;
  
  uVar1 = 0xffffffe8;
  if (*(int *)PTR_DAT_0071b6b4 != 1) {
    uVar1 = (*(code *)**(undefined4 **)(PTR_PTR_0071b6b0 + 0x2c))
                      (param_3,4,8,0x15,param_1,param_1,0,0);
  }
  return uVar1;
}


// 0x057ee58 (0xa4 bytes)
undefined4 FUN_0057ee58(undefined4 param_1,undefined8 param_2,undefined4 param_3)

{
  undefined4 uVar1;
  
  if (*(int *)PTR_DAT_0071b6bc != 1) {
    return 0xffffffec;
  }
  uVar1 = (*(code *)**(undefined4 **)(PTR_PTR_0071b6b0 + 0x2c))
                    (param_3,4,0x18,0xdd,param_1,param_1,0,0);
  return uVar1;
}


// 0x057eefc (0x64 bytes)
undefined4 FUN_0057eefc(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined4 uVar1;
  
  uVar1 = (*(code *)**(undefined4 **)(PTR_PTR_0071b6b0 + 0x2c))
                    (param_3,4,0x28,0x34,param_1,param_1,0,0);
  return uVar1;
}


// 0x057ef60 (0x68 bytes)
undefined4 FUN_0057ef60(undefined8 param_1,undefined8 param_2)

{
  undefined4 uVar1;
  
  uVar1 = (*(code *)**(undefined4 **)(PTR_PTR_0071b6b0 + 0x2c))(param_2,4,0x2c,0x10,param_1,0,0,0);
  return uVar1;
}


// 0x057efc8 (0x64 bytes)
undefined4 FUN_0057efc8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined4 uVar1;
  
  uVar1 = (*(code *)**(undefined4 **)(PTR_PTR_0071b6b0 + 0x2c))
                    (param_3,4,0x2d,0x1c,param_1,param_1,0,0);
  return uVar1;
}


// 0x057f02c (0x64 bytes)
undefined4 FUN_0057f02c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined4 uVar1;
  
  uVar1 = (*(code *)**(undefined4 **)(PTR_PTR_0071b6b0 + 0x2c))
                    (param_3,4,0x41,0x15,param_1,param_1,0,0);
  return uVar1;
}


// 0x057f090 (0x8c bytes)
undefined4 FUN_0057f090(undefined4 param_1,undefined8 param_2,undefined4 param_3)

{
  undefined4 uVar1;
  
  uVar1 = 0xffffffe8;
  if (*(int *)PTR_DAT_0071b6b4 != 1) {
    uVar1 = (*(code *)**(undefined4 **)(PTR_PTR_0071b6b0 + 0x2c))
                      (param_3,4,0x61,0x15,param_1,param_1,0,0);
  }
  return uVar1;
}


// 0x057f11c (0x68 bytes)
undefined4 FUN_0057f11c(int param_1,undefined8 param_2,undefined8 param_3)

{
  undefined4 uVar1;
  
  uVar1 = (*(code *)**(undefined4 **)(PTR_PTR_0071b6b0 + 0x2c))
                    (param_3,4,0x6d,0x4a,param_1,param_1,0,param_1 + 0x15);
  return uVar1;
}


// 0x057f184 (0x68 bytes)
undefined4 FUN_0057f184(int param_1,undefined8 param_2,undefined8 param_3)

{
  undefined4 uVar1;
  
  uVar1 = (*(code *)**(undefined4 **)(PTR_PTR_0071b6b0 + 0x2c))
                    (param_3,4,0x7e,0x38,param_1,param_1,0,param_1 + 0x15);
  return uVar1;
}


// 0x057f1ec (0x68 bytes)
undefined4 FUN_0057f1ec(int param_1,undefined8 param_2,undefined8 param_3)

{
  undefined4 uVar1;
  
  uVar1 = (*(code *)**(undefined4 **)(PTR_PTR_0071b6b0 + 0x2c))
                    (param_3,4,0x80,0x26,param_1,param_1,0,param_1 + 0x15);
  return uVar1;
}


// 0x057f254 (0x68 bytes)
undefined4 FUN_0057f254(int param_1,undefined8 param_2,undefined8 param_3)

{
  undefined4 uVar1;
  
  uVar1 = (*(code *)**(undefined4 **)(PTR_PTR_0071b6b0 + 0x2c))
                    (param_3,4,0x82,0x2c,param_1,param_1,0,param_1 + 0x15);
  return uVar1;
}


// 0x057f2bc (0x68 bytes)
undefined4 FUN_0057f2bc(int param_1,undefined8 param_2,undefined8 param_3)

{
  undefined4 uVar1;
  
  uVar1 = (*(code *)**(undefined4 **)(PTR_PTR_0071b6b0 + 0x2c))
                    (param_3,4,0x84,0x38,param_1,param_1,0,param_1 + 0x15);
  return uVar1;
}


// 0x057f324 (0x104 bytes)
undefined4 FUN_0057f324(undefined4 *param_1,int param_2,size_t *param_3,int param_4)

{
  char *__s;
  size_t sVar1;
  int iVar2;
  
  *param_3 = 0;
  if (param_2 < 1) {
LAB_0057f3ec:
    if ((int)*param_3 <= param_4) {
      return 0;
    }
  }
  else {
    iVar2 = 0;
    __s = (char *)*param_1;
    while (__s != (char *)0x0) {
      sVar1 = strlen(__s);
      if ((int)*param_3 < (int)sVar1) {
        *param_3 = sVar1;
      }
      else if (sVar1 == 0) {
        return 1;
      }
      iVar2 = iVar2 + 1;
      param_1 = param_1 + 1;
      if (param_2 == iVar2) goto LAB_0057f3ec;
      __s = (char *)*param_1;
    }
  }
  return 1;
}


// 0x057f428 (0xd4 bytes)
undefined4 FUN_0057f428(int param_1,undefined8 param_2,undefined4 param_3)

{
  int iVar1;
  undefined4 uVar2;
  GPiece<24> local_30;
  
  iVar1 = FUN_0057f324(*(undefined4 *)(param_1 + 0x2c),*(undefined4 *)(param_1 + 0x28),local_30,0x20
                      );
  uVar2 = 0xffffffeb;
  if (iVar1 == 0) {
    uVar2 = (*(code *)**(undefined4 **)(PTR_PTR_0071b6b0 + 0x2c))
                      (param_3,4,0x6f,*(int *)(param_1 + 0x28) * 5 + 0x30,param_1,param_1,0,
                       param_1 + 0x15);
  }
  return uVar2;
}


// 0x057f4fc (0xd4 bytes)
undefined4 FUN_0057f4fc(int param_1,undefined8 param_2,undefined4 param_3)

{
  int iVar1;
  undefined4 uVar2;
  GPiece<24> local_30;
  
  iVar1 = FUN_0057f324(*(undefined4 *)(param_1 + 0x2c),*(undefined4 *)(param_1 + 0x28),local_30,0x20
                      );
  uVar2 = 0xffffffeb;
  if (iVar1 == 0) {
    uVar2 = (*(code *)**(undefined4 **)(PTR_PTR_0071b6b0 + 0x2c))
                      (param_3,4,0x56,*(int *)(param_1 + 0x28) * 5 + 0x30,param_1,param_1,0,
                       param_1 + 0x15);
  }
  return uVar2;
}


// 0x057f5d0 (0xd4 bytes)
undefined4 FUN_0057f5d0(int param_1,undefined8 param_2,undefined4 param_3)

{
  int iVar1;
  undefined4 uVar2;
  GPiece<24> local_30;
  
  iVar1 = FUN_0057f324(*(undefined4 *)(param_1 + 0x2c),*(undefined4 *)(param_1 + 0x28),local_30,0x20
                      );
  uVar2 = 0xffffffeb;
  if (iVar1 == 0) {
    uVar2 = (*(code *)**(undefined4 **)(PTR_PTR_0071b6b0 + 0x2c))
                      (param_3,4,0x54,*(int *)(param_1 + 0x28) * 5 + 0x30,param_1,param_1,0,
                       param_1 + 0x15);
  }
  return uVar2;
}


// 0x057f6a4 (0xd0 bytes)
undefined4 FUN_0057f6a4(int param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = FUN_00582788(param_3);
  uVar2 = 0xffffffeb;
  if ((iVar1 != 0) && (*(int *)(param_1 + 0x18) == 2)) {
    FUN_0057eb64(iVar1,3000);
    uVar2 = (*(code *)**(undefined4 **)(PTR_PTR_0071b6b0 + 0x2c))
                      (param_3,1,200,0x24,param_1,param_1,0,0);
  }
  return uVar2;
}


// 0x057f774 (0xe0 bytes)
undefined4 FUN_0057f774(int param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = FUN_00582788(param_3);
  uVar2 = 0xffffffeb;
  if (iVar1 != 0) {
    if (((*(uint *)(param_1 + 0x18) & 2) == 0) && ((*(uint *)(param_1 + 0x18) & 1) == 0)) {
      FUN_0057eb64(iVar1,3000);
      uVar2 = (*(code *)**(undefined4 **)(PTR_PTR_0071b6b0 + 0x2c))
                        (param_3,1,200,0x24,param_1,param_1,0,0);
    }
  }
  return uVar2;
}


// 0x057f854 (0x17c bytes)
undefined4 FUN_0057f854(undefined4 *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  undefined *puVar4;
  int iVar5;
  int iVar6;
  undefined4 uVar7;
  
  iVar5 = FUN_00582788(param_3);
  iVar6 = FUN_005827f8(param_3);
  puVar4 = PTR_PTR_0071b6b0;
  if (iVar5 != 0) {
    if (iVar6 != 0) {
      *(uint *)(iVar6 + 0x14) = *(uint *)(iVar6 + 0x14) & 0x7fffffff;
      uVar7 = param_1[1];
      uVar1 = param_1[2];
      uVar2 = param_1[3];
      *(undefined4 *)(iVar6 + 0x18) = *param_1;
      *(undefined4 *)(iVar6 + 0x1c) = uVar7;
      *(undefined4 *)(iVar6 + 0x20) = uVar1;
      *(undefined4 *)(iVar6 + 0x24) = uVar2;
      uVar7 = param_1[5];
      uVar1 = param_1[6];
      uVar2 = param_1[7];
      *(undefined4 *)(iVar6 + 0x28) = param_1[4];
      *(undefined4 *)(iVar6 + 0x2c) = uVar7;
      *(undefined4 *)(iVar6 + 0x30) = uVar1;
      *(undefined4 *)(iVar6 + 0x34) = uVar2;
      uVar7 = param_1[8];
      uVar1 = param_1[10];
      uVar2 = param_1[0xb];
      puVar3 = *(undefined4 **)(puVar4 + 0x2c);
      *(undefined4 *)(iVar6 + 0x3c) = param_1[9];
      *(undefined4 *)(iVar6 + 0x40) = uVar1;
      *(undefined4 *)(iVar6 + 0x44) = uVar2;
      *(undefined4 *)(iVar6 + 0x38) = uVar7;
      *(undefined4 *)(iVar6 + 0x48) = param_1[0xc];
      uVar7 = (*(code *)*puVar3)(param_3,4,0x86,0x34,param_1,param_1,0,0);
      return uVar7;
    }
  }
  return 0xffffffeb;
}


