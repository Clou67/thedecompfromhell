// sdk/CMediusManager.cpp -- reconstructed from NPEA00385 EBOOT
// STATUS: NOT STARTED (raw Ghidra output)
// 1102 functions, 0x57f9d0-0x5c4800
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "sdk/CMediusManager.h"
#include "game/hero.h"
#include "idol/idol_draw.h"
#include "sdk/cell.h"
#include "sdk/lUnk.h"
#include "sdk/libc/qsort.h"
#include "sdk/libc/strtol.h"
#include "sdk/sce.h"
#include "sdk/sys.h"

// 0x057f9d0 (0x104 bytes)
undefined4
MediusTicketLogin
          (int param_1,undefined8 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  
  uVar3 = 0xffffffeb;
  if (param_1 != 0) {
    iVar2 = FUN_005827f8(param_4);
    uVar3 = 0xffffffe5;
    if ((iVar2 != 0) && (uVar3 = 0xffffffe6, *(int *)(iVar2 + 0x118) == 0)) {
      iVar1 = *(int *)PTR_DAT_0071b6b4;
      *(undefined4 *)(iVar2 + 0x118) = param_3;
      uVar3 = 0xffffffe8;
      if (iVar1 != 1) {
        uVar3 = (*(code *)**(undefined4 **)(PTR_PTR_0071b6b0 + 0x2c))
                          (param_4,4,0x58,*(int *)(param_1 + 0x28) + 0x30,param_1,param_1,0,
                           param_1 + 0x15);
      }
    }
  }
  return uVar3;
}


// 0x057fad4 (0x28 bytes)
void FUN_0057fad4(undefined4 *param_1)

{
  param_1[7] = 0;
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  return;
}


// 0x057fafc (0x1b4 bytes)
undefined4
RequestSessionMAS(undefined4 *param_1,undefined8 param_2,undefined4 param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined1 local_60;
  undefined1 uStack_5f;
  undefined1 uStack_5e;
  undefined1 uStack_5d;
  undefined1 local_5c;
  undefined1 uStack_5b;
  undefined1 uStack_5a;
  undefined1 uStack_59;
  undefined1 local_58;
  undefined1 uStack_57;
  undefined1 uStack_56;
  undefined1 uStack_55;
  undefined1 local_54;
  undefined1 uStack_53;
  undefined1 uStack_52;
  undefined1 uStack_51;
  undefined1 local_50;
  undefined1 uStack_4f;
  undefined1 uStack_4e;
  undefined1 uStack_4d;
  undefined1 local_4c;
  
  uVar7 = 0xffffffeb;
  if (param_1 != (undefined4 *)0x0) {
    uVar1 = *param_1;
    uVar2 = param_1[1];
    uVar3 = param_1[2];
    uVar4 = param_1[3];
    uVar5 = param_1[5];
    uVar6 = param_1[4];
    uVar7 = (*(code *)**(undefined4 **)(PTR_PTR_0071b6b0 + 0x2c))
                      (param_3,4,0x8b,0x2c,&local_60,&local_60,0,0);
    uStack_5f = (undefined1)((uint)uVar1 >> 0x10);
    uStack_5e = (undefined1)((uint)uVar1 >> 8);
    uStack_5d = (undefined1)uVar1;
    local_60 = (undefined1)((uint)uVar1 >> 0x18);
    *(undefined1 *)((int)param_1 + 1) = uStack_5f;
    *(undefined1 *)param_1 = local_60;
    *(undefined1 *)((int)param_1 + 2) = uStack_5e;
    *(undefined1 *)((int)param_1 + 3) = uStack_5d;
    uStack_5b = (undefined1)((uint)uVar2 >> 0x10);
    uStack_5a = (undefined1)((uint)uVar2 >> 8);
    uStack_59 = (undefined1)uVar2;
    local_5c = (undefined1)((uint)uVar2 >> 0x18);
    *(undefined1 *)((int)param_1 + 5) = uStack_5b;
    *(undefined1 *)(param_1 + 1) = local_5c;
    *(undefined1 *)((int)param_1 + 6) = uStack_5a;
    *(undefined1 *)((int)param_1 + 7) = uStack_59;
    uStack_57 = (undefined1)((uint)uVar3 >> 0x10);
    uStack_56 = (undefined1)((uint)uVar3 >> 8);
    uStack_55 = (undefined1)uVar3;
    local_58 = (undefined1)((uint)uVar3 >> 0x18);
    *(undefined1 *)((int)param_1 + 9) = uStack_57;
    *(undefined1 *)(param_1 + 2) = local_58;
    *(undefined1 *)((int)param_1 + 10) = uStack_56;
    *(undefined1 *)((int)param_1 + 0xb) = uStack_55;
    uStack_53 = (undefined1)((uint)uVar4 >> 0x10);
    uStack_52 = (undefined1)((uint)uVar4 >> 8);
    uStack_51 = (undefined1)uVar4;
    local_54 = (undefined1)((uint)uVar4 >> 0x18);
    *(undefined1 *)((int)param_1 + 0xd) = uStack_53;
    *(undefined1 *)(param_1 + 3) = local_54;
    *(undefined1 *)((int)param_1 + 0xe) = uStack_52;
    *(undefined1 *)((int)param_1 + 0xf) = uStack_51;
    uStack_4f = (undefined1)((uint)uVar6 >> 0x10);
    uStack_4e = (undefined1)((uint)uVar6 >> 8);
    uStack_4d = (undefined1)uVar6;
    local_50 = (undefined1)((uint)uVar6 >> 0x18);
    *(undefined1 *)(param_1 + 4) = local_50;
    *(undefined1 *)((int)param_1 + 0x11) = uStack_4f;
    *(undefined1 *)((int)param_1 + 0x12) = uStack_4e;
    *(undefined1 *)((int)param_1 + 0x13) = uStack_4d;
    local_4c = (undefined1)((uint)uVar5 >> 0x18);
    *(undefined1 *)(param_1 + 5) = local_4c;
  }
  return uVar7;
}


// 0x057fcb0 (0x18c bytes)
void ConnectToMAS
               (undefined4 *param_1,char *param_2,char *param_3,undefined4 param_4,
               undefined4 param_5)

{
  size_t sVar1;
  GPiece<228> auStack_1c0;
  GPiece<164> auStack_dc;
  
  memset(param_1,0,0x128);
  FUN_00546290(auStack_1c0);
  memcpy(param_1 + 0x27,auStack_dc,0x74);
  param_1[0xd] = param_5;
  *param_1 = 1;
  if (param_2 == (char *)0x0) {
    *(undefined1 *)(param_1 + 0x1e) = 0;
  }
  else {
    sVar1 = strlen(param_2);
    strcpy(param_1 + 0x1e,param_2,sVar1 + 1);
  }
  param_1[0x44] = 0x100;
  param_1[0xe] = 0;
  param_1[0x1d] = 0;
  param_1[0xf] = 0;
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  param_1[0x12] = 0;
  param_1[0x13] = 0;
  param_1[0x14] = 0;
  param_1[0x15] = 0;
  param_1[0x16] = 0;
  param_1[0x17] = 0;
  param_1[0x18] = 0;
  param_1[0x19] = 0;
  param_1[0x1a] = 0;
  param_1[0x1b] = 0;
  param_1[0x1c] = 0;
  param_1[1] = 1;
  *(undefined1 *)((int)param_1 + 0x89) = 0;
  sVar1 = strlen(param_3);
  strcpy(param_1 + 2,param_3,sVar1 + 1);
  *(undefined1 *)(param_1 + 8) = 0;
  param_1[0x46] = 0;
  param_1[6] = param_4;
  param_1[7] = 0;
  param_1[0xc] = 0;
  param_1[0x45] = 0;
  return;
}


// 0x057fe3c (0xc0 bytes)
undefined4 FUN_0057fe3c(int param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = FUN_005565bc(param_1 + 0x18,0x40);
  if ((iVar1 != 0x40) && (iVar1 = FUN_005565bc(param_1 + 0x58,0x20), iVar1 != 0x20)) {
    uVar2 = (*(code *)**(undefined4 **)(PTR_PTR_0071b6b0 + 0x2c))
                      (param_2,1,2,0x7c,param_1,0,0,param_1);
    return uVar2;
  }
  return 0xffffffeb;
}


// 0x057fefc (0xa4 bytes)
undefined4 FUN_0057fefc(int param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = FUN_005565bc(param_1 + 8,0x40);
  uVar2 = 0xffffffeb;
  if (iVar1 != 0x40) {
    uVar2 = (*(code *)**(undefined4 **)(PTR_PTR_0071b6b0 + 0x2c))
                      (param_2,4,0x30,0x180,param_1,0,0,0);
  }
  return uVar2;
}


// 0x057ffa0 (0x9c bytes)
undefined4 FUN_0057ffa0(undefined8 param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = FUN_005565bc(param_1,0x11);
  uVar2 = 0xffffffeb;
  if (iVar1 != 0x11) {
    uVar2 = (*(code *)**(undefined4 **)(PTR_PTR_0071b6b0 + 0x2c))
                      (param_2,4,0x8f,0x1c,param_1,0,0,param_1);
  }
  return uVar2;
}


// 0x058003c (0x9c bytes)
undefined4 FUN_0058003c(undefined8 param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = FUN_005565bc(param_1,0x11);
  uVar2 = 0xffffffeb;
  if (iVar1 != 0x11) {
    uVar2 = (*(code *)**(undefined4 **)(PTR_PTR_0071b6b0 + 0x2c))
                      (param_2,1,1,0x1c,param_1,0,0,param_1);
  }
  return uVar2;
}


// 0x05800d8 (0xb4 bytes)
undefined4 FUN_005800d8(int param_1,undefined8 param_2,undefined4 param_3)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = FUN_005565bc(param_1 + 0x30,0x20);
  uVar2 = 0xffffffeb;
  if (iVar1 != 0x20) {
    uVar2 = (*(code *)**(undefined4 **)(PTR_PTR_0071b6b0 + 0x2c))
                      (param_3,4,0x90,0x50,param_1,param_1,0,param_1 + 0x15);
  }
  return uVar2;
}


// 0x058018c (0xb4 bytes)
undefined4 FUN_0058018c(int param_1,undefined8 param_2,undefined4 param_3)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = FUN_005565bc(param_1 + 0x2c,0x20);
  uVar2 = 0xffffffeb;
  if (iVar1 != 0x20) {
    uVar2 = (*(code *)**(undefined4 **)(PTR_PTR_0071b6b0 + 0x2c))
                      (param_3,1,0x25,0x4c,param_1,param_1,0,param_1 + 0x15);
  }
  return uVar2;
}


// 0x0580240 (0xb4 bytes)
undefined4 FUN_00580240(int param_1,undefined8 param_2,undefined4 param_3)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = FUN_005565bc(param_1 + 0x2c,0x20);
  uVar2 = 0xffffffeb;
  if (iVar1 != 0x20) {
    uVar2 = (*(code *)**(undefined4 **)(PTR_PTR_0071b6b0 + 0x2c))
                      (param_3,4,0x8c,0x60,param_1,param_1,0,param_1 + 0x15);
  }
  return uVar2;
}


// 0x05802f4 (0xd0 bytes)
undefined4 FUN_005802f4(int param_1,undefined8 param_2,undefined4 param_3)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = FUN_005565bc(param_1 + 0x30,0x40);
  if (iVar1 != 0x40) {
    iVar1 = FUN_005565bc(param_1 + 0x70,0x20);
    if (iVar1 != 0x20) {
      uVar2 = (*(code *)**(undefined4 **)(PTR_PTR_0071b6b0 + 0x2c))
                        (param_3,4,0x14,0xa4,param_1,param_1,0,param_1 + 0x15);
      return uVar2;
    }
  }
  return 0xffffffeb;
}


// 0x05803c4 (0xd0 bytes)
undefined4 FUN_005803c4(int param_1,undefined8 param_2,undefined4 param_3)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = FUN_005565bc(param_1 + 0x34,0x40);
  if (iVar1 != 0x40) {
    iVar1 = FUN_005565bc(param_1 + 0x74,0x20);
    if (iVar1 != 0x20) {
      uVar2 = (*(code *)**(undefined4 **)(PTR_PTR_0071b6b0 + 0x2c))
                        (param_3,4,0x65,0xcc,param_1,param_1,0,param_1 + 0x15);
      return uVar2;
    }
  }
  return 0xffffffeb;
}


// 0x0580494 (0xec bytes)
undefined4 FUN_00580494(int param_1,undefined8 param_2,undefined4 param_3)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = FUN_005565bc(param_1 + 0x38,0x40);
  if (iVar1 != 0x40) {
    iVar1 = FUN_005565bc(param_1 + 0x78,0x20);
    if (iVar1 != 0x20) {
      iVar1 = FUN_005565bc(param_1 + 0x98,0x20);
      if (iVar1 != 0x20) {
        uVar2 = (*(code *)**(undefined4 **)(PTR_PTR_0071b6b0 + 0x2c))
                          (param_3,4,0x2f,0xfc,param_1,param_1,0,param_1 + 0x15);
        return uVar2;
      }
    }
  }
  return 0xffffffeb;
}


// 0x0580580 (0xcc bytes)
undefined4 FUN_00580580(int param_1,undefined8 param_2,undefined4 param_3)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = FUN_005565bc(param_1 + 0x26,0x20);
  uVar2 = 0xffffffeb;
  if (iVar1 != 0x20) {
    uVar2 = 0xffffffe8;
    if (*(int *)PTR_DAT_0071b6b4 != 1) {
      uVar2 = (*(code *)**(undefined4 **)(PTR_PTR_0071b6b0 + 0x2c))
                        (param_3,4,0x4e,0x46,param_1,param_1,0,param_1 + 0x15);
    }
  }
  return uVar2;
}


// 0x058064c (0xcc bytes)
undefined4 FUN_0058064c(int param_1,undefined8 param_2,undefined4 param_3)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = FUN_005565bc(param_1 + 0x26,0x20);
  uVar2 = 0xffffffeb;
  if (iVar1 != 0x20) {
    uVar2 = 0xffffffe8;
    if (*(int *)PTR_DAT_0071b6b4 != 1) {
      uVar2 = (*(code *)**(undefined4 **)(PTR_PTR_0071b6b0 + 0x2c))
                        (param_3,4,0x4c,0x66,param_1,param_1,0,param_1 + 0x15);
    }
  }
  return uVar2;
}


// 0x0580718 (0xe8 bytes)
undefined4 FUN_00580718(int param_1,undefined8 param_2,undefined4 param_3)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = FUN_005565bc(param_1 + 0x26,0x20);
  if ((iVar1 != 0x20) && (iVar1 = FUN_005565bc(param_1 + 0x46,0x20), iVar1 != 0x20)) {
    if (*(int *)PTR_DAT_0071b6b4 == 1) {
      return 0xffffffe8;
    }
    uVar2 = (*(code *)**(undefined4 **)(PTR_PTR_0071b6b0 + 0x2c))
                      (param_3,4,0x4a,0x66,param_1,param_1,0,param_1 + 0x15);
    return uVar2;
  }
  return 0xffffffeb;
}


// 0x0580800 (0xcc bytes)
undefined4 FUN_00580800(int param_1,undefined8 param_2,undefined4 param_3)

{
  int iVar1;
  undefined4 uVar2;
  
  uVar2 = 0xffffffe8;
  if (*(int *)PTR_DAT_0071b6b4 != 1) {
    iVar1 = FUN_005565bc(param_1 + 0x26,0x20);
    uVar2 = 0xffffffeb;
    if (iVar1 != 0x20) {
      uVar2 = (*(code *)**(undefined4 **)(PTR_PTR_0071b6b0 + 0x2c))
                        (param_3,1,0x19,0x146,param_1,param_1,0,param_1 + 0x15);
    }
  }
  return uVar2;
}


// 0x05808cc (0xe8 bytes)
undefined4 FUN_005808cc(int param_1,undefined8 param_2,undefined4 param_3)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = FUN_005565bc(param_1 + 0x26,0x20);
  if ((iVar1 != 0x20) && (iVar1 = FUN_005565bc(param_1 + 0x46,0x20), iVar1 != 0x20)) {
    if (*(int *)PTR_DAT_0071b6b4 == 1) {
      return 0xffffffe8;
    }
    uVar2 = (*(code *)**(undefined4 **)(PTR_PTR_0071b6b0 + 0x2c))
                      (param_3,1,0xf,0x66,param_1,param_1,0,param_1 + 0x15);
    return uVar2;
  }
  return 0xffffffeb;
}


// 0x05809b4 (0xe8 bytes)
undefined4 FUN_005809b4(int param_1,undefined8 param_2,undefined4 param_3)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = FUN_005565bc(param_1 + 0x2c,0x20);
  if ((iVar1 != 0x20) && (iVar1 = FUN_005565bc(param_1 + 0x4c,0x20), iVar1 != 0x20)) {
    if (*(int *)PTR_DAT_0071b6b4 == 1) {
      return 0xffffffe8;
    }
    uVar2 = (*(code *)**(undefined4 **)(PTR_PTR_0071b6b0 + 0x2c))
                      (param_3,1,9,0x6c,param_1,param_1,0,param_1 + 0x15);
    return uVar2;
  }
  return 0xffffffeb;
}


// 0x0580a9c (0x130 bytes)
undefined4 FUN_00580a9c(int param_1,undefined8 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  
  if (param_1 != 0) {
    iVar2 = FUN_005565bc(param_1 + 0x26,0x20);
    if ((iVar2 != 0x20) && (iVar2 = FUN_005565bc(param_1 + 0x46,0x20), iVar2 != 0x20)) {
      iVar2 = FUN_005827f8(param_4);
      if (iVar2 == 0) {
        return 0xffffffe5;
      }
      if (*(int *)(iVar2 + 0x118) != 0) {
        return 0xffffffe6;
      }
      iVar1 = *(int *)PTR_DAT_0071b6b4;
      *(undefined4 *)(iVar2 + 0x118) = param_3;
      if (iVar1 == 1) {
        return 0xffffffe8;
      }
      uVar3 = (*(code *)**(undefined4 **)(PTR_PTR_0071b6b0 + 0x2c))
                        (param_4,1,7,0x66,param_1,param_1,0,param_1 + 0x15);
      return uVar3;
    }
  }
  return 0xffffffeb;
}


// 0x0580bcc (0xd4 bytes)
undefined4 FUN_00580bcc(char *param_1,int param_2)

{
  undefined4 uVar1;
  
  uVar1 = 0xffffffe8;
  if (*(int *)PTR_DAT_0071b6b4 != 1) {
    if ((param_1 != (char *)0x0) && (param_2 != 0)) {
      snprintf(param_1,PTR_DAT_0071b6c0,(ulonglong)*(uint *)(param_2 + 0x18));
      uVar1 = (*(code *)**(undefined4 **)(PTR_PTR_0071b6b0 + 0x2c))
                        (param_2,4,7,0x38,param_1,0,0,param_1 + 0x1c);
      return uVar1;
    }
    uVar1 = 0xffffffeb;
  }
  return uVar1;
}


// 0x0580ca0 (0x178 bytes)
undefined4 FUN_00580ca0(int param_1,undefined8 param_2,undefined4 param_3)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  
  iVar1 = FUN_005565bc(param_1 + 0x2c,0x20);
  if ((iVar1 == 0x20) || (0xe < *(uint *)(param_1 + 0xc0))) {
LAB_00580ce8:
    uVar2 = 0xffffffeb;
  }
  else {
    if (*(int *)(param_1 + 0x90) != 0) {
      if (*(int *)(param_1 + 0x90) == 9) {
        iVar1 = *(int *)(param_1 + 0x94);
      }
      else {
        iVar1 = *(int *)(param_1 + 0xa4);
      }
      if (iVar1 == 0) goto LAB_00580ce8;
    }
    if (*(int *)(param_1 + 0x4c) == 2) {
      iVar1 = FUN_005827f8(param_3);
      if (iVar1 == 0) {
        return 0xffffffe5;
      }
      iVar1 = *(int *)(iVar1 + 100);
      puVar3 = (undefined4 *)(param_1 + 0x90);
      if (iVar1 == 0) {
        FUN_0054a9e8(puVar3,0);
      }
      else {
        *puVar3 = 9;
        *(undefined4 *)(param_1 + 0xa8) = 0;
        FUN_00553518(puVar3,0,iVar1);
      }
    }
    uVar2 = (*(code *)**(undefined4 **)(PTR_PTR_0071b6b0 + 0x2c))
                      (param_3,4,0x87,0xc4,param_1,param_1,0,param_1 + 0x15);
  }
  return uVar2;
}


// 0x0580e18 (0x18c bytes)
undefined4 FUN_00580e18(int param_1,undefined8 param_2,undefined4 param_3)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  
  iVar1 = FUN_005565bc(param_1 + 0x30,0x20);
  if (iVar1 == 0x20) {
    return 0xffffffeb;
  }
  if (*(int *)(param_1 + 0x94) != 0) {
    if (*(int *)(param_1 + 0x94) == 9) {
      iVar1 = *(int *)(param_1 + 0x98);
    }
    else {
      iVar1 = *(int *)(param_1 + 0xa8);
    }
    if (iVar1 == 0) {
      return 0xffffffeb;
    }
  }
  if (*(int *)(param_1 + 0x50) == 2) {
    iVar1 = FUN_005827f8(param_3);
    if (iVar1 == 0) {
      return 0xffffffe5;
    }
    iVar1 = *(int *)(iVar1 + 100);
    puVar3 = (undefined4 *)(param_1 + 0x94);
    if (iVar1 == 0) {
      FUN_0054a9e8(puVar3,0);
    }
    else {
      *puVar3 = 9;
      *(undefined4 *)(param_1 + 0xac) = 0;
      FUN_00553518(puVar3,0,iVar1);
    }
  }
  uVar2 = (*(code *)**(undefined4 **)(PTR_PTR_0071b6b0 + 0x2c))
                    (param_3,1,0xf3,0xc4,param_1,param_1,0,param_1 + 0x15);
  return uVar2;
}


// 0x0580fa4 (0x24 bytes)
void FUN_00580fa4(longlong param_1)

{
  if (param_1 != 0) {
    *(int *)PTR_DAT_0071b6c4 = (int)param_1;
    return;
  }
  *(undefined **)PTR_DAT_0071b6c4 = PTR_PTR_0071b6c8;
  return;
}


// 0x0580fc8 (0x88 bytes)
undefined8 FUN_00580fc8(undefined8 param_1,undefined8 param_2)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  undefined8 local_30 [2];
  
  uVar1 = *(undefined4 *)(PTR_DAT_0071b6c4 + 4);
  puVar2 = *(undefined4 **)(PTR_PTR_0071b6cc + 0x10);
  (*(code *)**(undefined4 **)(PTR_PTR_0071b6cc + 0x24))(local_30,uVar1,param_2);
  (*(code *)*puVar2)(uVar1,local_30[0]);
  return 0xfffffffffffffff6;
}


// 0x0581050 (0x28 bytes)
int FUN_00581050(int param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 4) + 1;
  *(int *)(param_1 + 4) = iVar1;
  if (iVar1 == 0) {
    iVar1 = 1;
    *(undefined4 *)(param_1 + 4) = 1;
  }
  return iVar1;
}


// 0x0581078 (0x18c bytes)
undefined4 FUN_00581078(int param_1,int param_2,int param_3,int *param_4)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  undefined *puVar4;
  undefined4 uVar5;
  int iVar6;
  undefined4 local_60;
  undefined4 uStack_5c;
  undefined4 local_50;
  undefined4 local_4c;
  
  puVar4 = PTR_PTR_0071b6cc;
  uVar5 = *(undefined4 *)(PTR_DAT_0071b6c4 + 4);
  if ((param_1 == 0) || (param_4 == (int *)0x0)) {
    uVar5 = 0xffffffeb;
  }
  else {
    if (param_2 != 0) {
      (*(code *)**(undefined4 **)(PTR_PTR_0071b6cc + 0x14))(&local_60,uVar5);
      puVar1 = *(undefined4 **)(puVar4 + 0x18);
      puVar2 = *(undefined4 **)(puVar4 + 0x1c);
      puVar3 = *(undefined4 **)(puVar4 + 0x20);
      while (iVar6 = (*(code *)*puVar2)(uVar5,CONCAT44(local_60,uStack_5c)), iVar6 == 0) {
        iVar6 = (*(code *)*puVar3)(uVar5,CONCAT44(local_60,uStack_5c));
        *param_4 = iVar6;
        if (((iVar6 != 0) && (*(int *)(iVar6 + 0x50) == param_2)) &&
           (*(int *)(iVar6 + 0x14) == param_3)) {
          return 0;
        }
        (*(code *)*puVar1)(&local_50,uVar5,CONCAT44(local_60,uStack_5c));
        local_60 = local_50;
        uStack_5c = local_4c;
      }
    }
    uVar5 = 0xfffffff4;
  }
  return uVar5;
}


// 0x0581204 (0x70 bytes)
undefined4 FUN_00581204(int param_1)

{
  int iVar1;
  int *piVar2;
  longlong lVar3;
  
  if (-1 < param_1) {
    return 0;
  }
  lVar3 = 0x230;
  iVar1 = 0;
  piVar2 = (int *)PTR_DAT_0071b6d0;
  do {
    if (*piVar2 == param_1) {
      return *(undefined4 *)(PTR_DAT_0071b6d0 + iVar1 * 8 + 4);
    }
    lVar3 = lVar3 + -1;
    iVar1 = iVar1 + 1;
    piVar2 = piVar2 + 2;
  } while (lVar3 != 0);
  return 100;
}


// 0x0581274 (0x178 bytes)
ulonglong FUN_00581274(undefined8 param_1)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  uint uVar4;
  undefined *puVar5;
  undefined *puVar6;
  int iVar7;
  uint uVar8;
  int iVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  int iStack00000030;
  uint uStack00000034;
  undefined4 local_70;
  undefined4 uStack_6c;
  undefined4 local_60;
  undefined4 local_5c;
  
  puVar6 = PTR_PTR_0071b6cc;
  puVar5 = PTR_DAT_0071b6c4;
  uVar11 = 0;
  uStack00000034 = (uint)param_1;
  uVar8 = uStack00000034;
  iStack00000030 = (int)((ulonglong)param_1 >> 0x20);
  iVar7 = iStack00000030;
  _iStack00000030 = param_1;
  (*(code *)**(undefined4 **)(PTR_PTR_0071b6cc + 0x14))
            (&local_70,*(undefined4 *)(PTR_DAT_0071b6c4 + 4));
  puVar1 = *(undefined4 **)(puVar6 + 0x18);
  puVar2 = *(undefined4 **)(puVar6 + 0x1c);
  puVar3 = *(undefined4 **)(puVar6 + 0x20);
  while( true ) {
    iVar9 = (*(code *)*puVar2)(*(undefined4 *)(puVar5 + 4),CONCAT44(local_70,uStack_6c));
    if (iVar9 != 0) break;
    iVar9 = (*(code *)*puVar3)(*(undefined4 *)(puVar5 + 4),CONCAT44(local_70,uStack_6c));
    if ((iVar9 != 0) && (*(int *)(iVar9 + 4) == iVar7)) {
      uVar4 = *(uint *)(iVar9 + 8) ^ uVar8;
      uVar10 = (ulonglong)((int)uVar4 >> 0x1f);
      uVar11 = uVar11 - ((longlong)(((uVar10 ^ uVar4) - uVar10) + -1 << 0x20) >> 0x3f);
    }
    (*(code *)*puVar1)(&local_60,*(undefined4 *)(puVar5 + 4),CONCAT44(local_70,uStack_6c));
    local_70 = local_60;
    uStack_6c = local_5c;
  }
  return uVar11 & 0xffffffff;
}


// 0x05813ec (0x94 bytes)
undefined4 FUN_005813ec(undefined2 param_1)

{
  undefined *puVar1;
  undefined4 uVar2;
  
  puVar1 = PTR_DAT_0071b6c4 + 4;
  if (*(int *)(PTR_DAT_0071b6c4 + 4) != 0) {
    return 0xffffffff;
  }
  if (*(int *)PTR_DAT_0071b6c4 == 0) {
    *(undefined **)PTR_DAT_0071b6c4 = PTR_PTR_0071b6c8;
  }
  uVar2 = (*(code *)**(undefined4 **)PTR_PTR_0071b6cc)(puVar1,0x54,param_1);
  return uVar2;
}


// 0x0581480 (0x54 bytes)
undefined8 FUN_00581480(void)

{
  if (*(int *)(PTR_DAT_0071b6c4 + 4) != 0) {
    (*(code *)**(undefined4 **)(PTR_PTR_0071b6cc + 4))(PTR_DAT_0071b6c4 + 4);
  }
  return 0;
}


// 0x05814d4 (0x44 bytes)
undefined4 FUN_005814d4(int *param_1)

{
  int *piVar1;
  undefined4 uVar2;
  
  uVar2 = 0xffffffff;
  piVar1 = (int *)(PTR_DAT_0071b6c4 + 4);
  if (*piVar1 != 0) {
    uVar2 = 0;
    if (*(int *)PTR_DAT_0071b6c4 == 0) {
      *(undefined **)PTR_DAT_0071b6c4 = PTR_PTR_0071b6c8;
    }
    *param_1 = *piVar1;
    param_1[1] = 0;
  }
  return uVar2;
}


// 0x0581518 (0x28 bytes)
undefined4 FUN_00581518(undefined4 *param_1)

{
  undefined4 uVar1;
  
  uVar1 = 0xfffffff1;
  if (*(int *)(PTR_DAT_0071b6c4 + 4) != 0) {
    uVar1 = 0;
    *param_1 = 0;
  }
  return uVar1;
}


// 0x0581540 (0x240 bytes)
// strings: 0067dc70: 'Transaction Timed Out'

undefined8 FUN_00581540(void)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  int iVar8;
  longlong lVar7;
  uint local_80;
  undefined4 local_7c;
  undefined4 local_78;
  undefined4 local_74;
  undefined4 local_70;
  GPiece<20> local_6c;
  
  puVar6 = PTR_PTR_0071b6cc;
  puVar5 = PTR_DAT_0071b6c4;
  (*(code *)**(undefined4 **)(PTR_PTR_0071b6cc + 0x14))
            (&local_74,*(undefined4 *)(PTR_DAT_0071b6c4 + 4));
  puVar1 = *(undefined4 **)(puVar6 + 0x10);
  puVar2 = *(undefined4 **)(puVar6 + 0x1c);
  puVar3 = *(undefined4 **)(puVar6 + 0x18);
  puVar4 = *(undefined4 **)(puVar6 + 0x20);
  while( true ) {
    lVar7 = (*(code *)*puVar2)(*(undefined4 *)(puVar5 + 4),CONCAT44(local_74,local_70));
    if (lVar7 != 0) break;
    (*(code *)*puVar3)(&local_7c,*(undefined4 *)(puVar5 + 4),CONCAT44(local_74,local_70));
    iVar8 = (*(code *)*puVar4)(*(undefined4 *)(puVar5 + 4),CONCAT44(local_74,local_70));
    if (iVar8 != 0) {
      (*(code *)**(undefined4 **)(*(int *)puVar5 + 8))(iVar8 + 0x48,&local_80);
      if (*(uint *)(iVar8 + 0x18) < local_80) {
        if (*(undefined4 **)(iVar8 + 0x34) != (undefined4 *)0x0) {
          *(undefined4 *)(iVar8 + 0x24) = 1;
          *(undefined4 *)(iVar8 + 0x20) = 0xfffffc5d;
          (*(code *)**(undefined4 **)(iVar8 + 0x34))(0,local_6c,iVar8 + 4);
        }
        (*(code *)*puVar1)(*(undefined4 *)(puVar5 + 4),CONCAT44(local_74,local_70));
      }
    }
    local_74 = local_7c;
    local_70 = local_78;
  }
  return 0;
}


// 0x0581780 (0x210 bytes)
undefined4 FUN_00581780(int param_1,int param_2)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  int iVar7;
  undefined4 local_70;
  undefined4 uStack_6c;
  undefined4 local_68;
  undefined4 local_64;
  GPiece<24> local_60;
  
  puVar6 = PTR_PTR_0071b6cc;
  puVar5 = PTR_DAT_0071b6c4;
  if ((param_1 != 0) && (param_2 != 0)) {
    (*(code *)**(undefined4 **)(PTR_PTR_0071b6cc + 0x14))
              (&local_70,*(undefined4 *)(PTR_DAT_0071b6c4 + 4));
    puVar1 = *(undefined4 **)(puVar6 + 0x10);
    puVar2 = *(undefined4 **)(puVar6 + 0x1c);
    puVar3 = *(undefined4 **)(puVar6 + 0x18);
    puVar4 = *(undefined4 **)(puVar6 + 0x20);
    while( true ) {
      iVar7 = (*(code *)*puVar2)(*(undefined4 *)(puVar5 + 4),CONCAT44(local_70,uStack_6c));
      if (iVar7 != 0) break;
      (*(code *)*puVar3)(&local_68,*(undefined4 *)(puVar5 + 4),CONCAT44(local_70,uStack_6c));
      iVar7 = (*(code *)*puVar4)(*(undefined4 *)(puVar5 + 4),CONCAT44(local_70,uStack_6c));
      if ((iVar7 != 0) && (*(int *)(iVar7 + 0x28) == param_1)) {
        if (*(undefined4 **)(iVar7 + 0x34) != (undefined4 *)0x0) {
          (*(code *)**(undefined4 **)(iVar7 + 0x34))(0,local_60,iVar7 + 4);
        }
        (*(code *)*puVar1)(*(undefined4 *)(puVar5 + 4),CONCAT44(local_70,uStack_6c));
      }
      local_70 = local_68;
      uStack_6c = local_64;
    }
    return 0;
  }
  return 0xffffffeb;
}


// 0x0581990 (0x70 bytes)
int FUN_00581990(void)

{
  int iVar1;
  undefined4 *in_r6;
  int local_20;
  
  iVar1 = FUN_00581078();
  if (iVar1 == 0) {
    if (local_20 == 0) {
      iVar1 = -10;
    }
    else {
      *(undefined4 *)(local_20 + 0x3c) = *in_r6;
      *(undefined4 *)(local_20 + 0x40) = in_r6[1];
      *(undefined4 *)(local_20 + 0x44) = in_r6[2];
    }
  }
  return iVar1;
}


// 0x0581a00 (0x5c bytes)
int FUN_00581a00(void)

{
  int iVar1;
  int *in_r6;
  undefined4 local_20;
  
  iVar1 = FUN_00581078();
  if (iVar1 == 0) {
    if (local_20 == 0) {
      iVar1 = -10;
    }
    else {
      *in_r6 = local_20 + 0x3c;
    }
  }
  return iVar1;
}


// 0x0581a5c (0x60 bytes)
undefined4 FUN_00581a5c(int *param_1)

{
  undefined4 uVar1;
  
  uVar1 = 0;
  if ((param_1 != (int *)0x0) && (*param_1 != 0)) {
    uVar1 = (*(code *)**(undefined4 **)(PTR_PTR_0071b6cc + 0x28))(*param_1);
  }
  return uVar1;
}


// 0x0581abc (0x60 bytes)
undefined4 FUN_00581abc(int *param_1)

{
  undefined4 uVar1;
  
  uVar1 = 0;
  if ((param_1 != (int *)0x0) && (*param_1 != 0)) {
    uVar1 = (*(code *)**(undefined4 **)(PTR_PTR_0071b6cc + 0x2c))(*param_1);
  }
  return uVar1;
}


// 0x0581b1c (0x23c bytes)
undefined4
FUN_00581b1c(undefined8 param_1,undefined4 *param_2,undefined4 param_3,undefined4 param_4,
            int param_5,undefined4 param_6,undefined4 *param_7)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int iVar3;
  undefined *puVar4;
  undefined *puVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  undefined4 uVar9;
  undefined8 local_70 [3];
  
  puVar4 = PTR_DAT_0071b6c4;
  iVar6 = (*(code *)**(undefined4 **)(*(int *)PTR_DAT_0071b6c4 + 0x10))(param_2);
  puVar5 = PTR_PTR_0071b6cc;
  uVar9 = 0xfffffff5;
  if (iVar6 != 0) {
    (*(code *)**(undefined4 **)(PTR_PTR_0071b6cc + 0xc))(local_70,*(undefined4 *)(puVar4 + 4));
    iVar7 = (*(code *)**(undefined4 **)(puVar5 + 0x20))(*(undefined4 *)(puVar4 + 4),local_70[0]);
    uVar9 = 0xffffffe9;
    if (iVar7 != 0) {
      memset(iVar7,0,0x54);
      *(undefined4 *)(iVar7 + 0x2c) = param_3;
      iVar8 = *(int *)puVar4;
      *(undefined4 *)(iVar7 + 0x30) = param_4;
      uVar9 = param_2[1];
      uVar1 = param_2[2];
      uVar2 = param_2[3];
      *(undefined4 *)(iVar7 + 4) = *param_2;
      *(undefined4 *)(iVar7 + 8) = uVar9;
      *(undefined4 *)(iVar7 + 0xc) = uVar1;
      *(undefined4 *)(iVar7 + 0x10) = uVar2;
      iVar3 = param_2[5];
      uVar9 = param_2[6];
      uVar1 = param_2[7];
      *(undefined4 *)(iVar7 + 0x14) = param_2[4];
      *(undefined4 *)(iVar7 + 0x1c) = uVar9;
      *(undefined4 *)(iVar7 + 0x20) = uVar1;
      *(int *)(iVar7 + 0x18) = iVar3;
      uVar9 = param_2[9];
      uVar1 = param_2[8];
      *(undefined4 *)(iVar7 + 0x34) = param_6;
      *(undefined4 *)(iVar7 + 0x24) = uVar1;
      *(undefined4 *)(iVar7 + 0x28) = uVar9;
      if (iVar3 == 0) {
        *(undefined4 *)(iVar7 + 0x18) = 3000;
      }
      iVar8 = (*(code *)**(undefined4 **)(iVar8 + 4))(iVar7 + 0x48);
      if (iVar8 == 0) {
        if (param_5 != 0) {
          uVar9 = FUN_00581050(iVar6 + 0xf0);
          *param_7 = uVar9;
        }
        uVar9 = 0;
        *(undefined4 *)(iVar7 + 0x50) = *param_7;
        *(undefined4 *)(iVar7 + 0x1c) = *param_7;
      }
      else {
        (*(code *)**(undefined4 **)(puVar5 + 0x10))(*(undefined4 *)(puVar4 + 4),local_70[0]);
        uVar9 = 0xfffffff6;
      }
    }
  }
  return uVar9;
}


// 0x0581d58 (0x98 bytes)
undefined4 FUN_00581d58(undefined8 param_1,undefined8 param_2)

{
  undefined4 uVar1;
  GPiece<48> auStack_80;
  GPiece<16> local_50;
  GPiece<16> auStack_40;
  GPiece<16> auStack_30;
  
  auStack_40 = (GPiece<16>)0x0;
  auStack_30 = (GPiece<16>)0x0;
  uVar1 = FUN_00546bdc(local_50,auStack_80,param_2);
  return uVar1;
}


// 0x0581df0 (0x44 bytes)
undefined4 FUN_00581df0(int param_1)

{
  undefined4 uVar1;
  
  uVar1 = 0;
  if (param_1 != 0) {
    uVar1 = FUN_005c8a8c(param_1,0,10);
  }
  return uVar1;
}


// 0x0581e34 (0x208 bytes)
undefined8 FUN_00581e34(undefined8 param_1)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iStack00000030;
  int iStack00000034;
  undefined4 local_80;
  undefined4 uStack_7c;
  undefined4 local_78;
  undefined4 local_74;
  GPiece<16> local_70;
  
  iStack00000034 = (int)param_1;
  iVar8 = iStack00000034;
  iStack00000030 = (int)((ulonglong)param_1 >> 0x20);
  iVar7 = iStack00000030;
  _iStack00000030 = param_1;
  FUN_00581204(0xfffffffffffffc53);
  FUN_00587aac(0xfffffffffffffc53);
  puVar6 = PTR_PTR_0071b6cc;
  puVar5 = PTR_DAT_0071b6c4;
  (*(code *)**(undefined4 **)(PTR_PTR_0071b6cc + 0x14))
            (&local_80,*(undefined4 *)(PTR_DAT_0071b6c4 + 4));
  puVar1 = *(undefined4 **)(puVar6 + 0x10);
  puVar2 = *(undefined4 **)(puVar6 + 0x1c);
  puVar3 = *(undefined4 **)(puVar6 + 0x18);
  puVar4 = *(undefined4 **)(puVar6 + 0x20);
  while( true ) {
    iVar9 = (*(code *)*puVar2)(*(undefined4 *)(puVar5 + 4),CONCAT44(local_80,uStack_7c));
    if (iVar9 != 0) break;
    (*(code *)*puVar3)(&local_78,*(undefined4 *)(puVar5 + 4),CONCAT44(local_80,uStack_7c));
    iVar9 = (*(code *)*puVar4)(*(undefined4 *)(puVar5 + 4),CONCAT44(local_80,uStack_7c));
    if (((iVar9 != 0) && (*(int *)(iVar9 + 4) == iVar7)) && (*(int *)(iVar9 + 8) == iVar8)) {
      if (*(undefined4 **)(iVar9 + 0x34) != (undefined4 *)0x0) {
        *(undefined4 *)(iVar9 + 0x24) = 1;
        *(undefined4 *)(iVar9 + 0x20) = 0xfffffc53;
        (*(code *)**(undefined4 **)(iVar9 + 0x34))(0,local_70,iVar9 + 4);
      }
      (*(code *)*puVar1)(*(undefined4 *)(puVar5 + 4),CONCAT44(local_80,uStack_7c));
    }
    local_80 = local_78;
    uStack_7c = local_74;
  }
  return 0;
}


// 0x058203c (0x270 bytes)
// strings: 0067dc88: 'Response returned error code [%d] : '

int FUN_0058203c(undefined4 param_1,int param_2,int param_3,int *param_4,int param_5,int param_6)

{
  undefined4 *puVar1;
  undefined *puVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 *puVar5;
  int local_160;
  int local_15c;
  undefined4 local_158 [2];
  undefined4 local_150 [2];
  char *local_148;
  char acStack_140 [255];
  undefined1 local_41;
  
  puVar2 = PTR_DAT_0071b6c4;
  local_158[0] = *(undefined4 *)(PTR_DAT_0071b6c4 + 4);
  if (param_2 == 0) {
    return -0x15;
  }
  if (param_4 == (int *)0x0) {
    param_4 = &local_160;
  }
  local_160 = 0;
  local_15c = 0;
  if (param_3 != 0) {
    iVar3 = FUN_00581df0(param_3);
    if (iVar3 == 0) {
      return -0x15;
    }
    iVar3 = FUN_00581078(local_158,iVar3,param_1,&local_15c);
    if (iVar3 != 0) {
      return iVar3;
    }
    if (local_15c != 0) goto LAB_00582130;
  }
  local_15c = param_6;
  if (param_6 == 0) {
    return -0x15;
  }
LAB_00582130:
  if (*(int *)(local_15c + 0x34) == 0) {
    return -0x15;
  }
  iVar3 = *param_4;
  if (iVar3 < 0) {
    puVar5 = local_150;
    param_5 = 1;
    local_150[0] = FUN_00581204(*param_4);
    iVar3 = snprintf(acStack_140,PTR_s_Response_returned_error_code___d_0071b6d8,*param_4);
    uVar4 = FUN_00587aac(*param_4);
    FUN_005563c0(acStack_140 + iVar3,uVar4,0x100);
    local_41 = 0;
    puVar1 = *(undefined4 **)(local_15c + 0x34);
    param_2 = 0;
    *(int *)(local_15c + 0x20) = *param_4;
    *(undefined4 *)(local_15c + 0x24) = 1;
    local_148 = acStack_140;
  }
  else {
    if (iVar3 == 1) {
      param_5 = 1;
    }
    puVar5 = (undefined4 *)0x0;
    *(int *)(local_15c + 0x20) = iVar3;
    puVar1 = *(undefined4 **)(local_15c + 0x34);
    *(int *)(local_15c + 0x24) = param_5;
  }
  (*(code *)*puVar1)(param_2,puVar5,local_15c + 4);
  if (local_15c != param_6) {
    if (param_5 != 0) {
      FUN_00580fc8(local_158,local_15c);
      return -10;
    }
    (*(code *)**(undefined4 **)(*(int *)puVar2 + 4))(local_15c + 0x48);
    return -10;
  }
  return -10;
}


// 0x05822ac (0x45c bytes)
int FUN_005822ac(int param_1,undefined4 param_2,undefined4 param_3,int param_4,int param_5,
                char *param_6,int *param_7,char *param_8)

{
  char cVar1;
  char cVar2;
  char cVar3;
  uint uVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  char *pcVar11;
  int iVar12;
  int iVar13;
  undefined4 in_stack_00000074;
  int local_a0;
  undefined4 local_9c;
  undefined4 local_98;
  undefined4 local_90;
  undefined4 local_8c;
  
  puVar8 = PTR_DAT_0071b6c4;
  if (((param_1 == 0) || ((param_5 == 0 && (param_4 != 0)))) ||
     ((uVar4 = *(uint *)(param_1 + 0x14), uVar4 != 0 && ((uVar4 < 1000 || (3600000 < uVar4)))))) {
    return -0x15;
  }
  if (*(int *)PTR_DAT_0071b6dc != 1) {
    return -0xf;
  }
  pcVar11 = (char *)(*(code *)**(undefined4 **)(*(int *)PTR_DAT_0071b6c4 + 0x10))(param_1);
  if (pcVar11 == (char *)0x0) {
LAB_0058238c:
    iVar13 = -0xb;
  }
  else {
    iVar12 = (*(code *)**(undefined4 **)(*(int *)puVar8 + 0xc))(param_1);
    if ((iVar12 == 0) || (*(int *)(iVar12 + 0x128) == 0)) {
      return -0x10;
    }
    if (param_6 == (char *)0x0) {
      iVar13 = 0;
      if (param_7 != (int *)0x0) {
        iVar13 = FUN_00581b1c(iVar12,param_1,param_2,param_3,0,in_stack_00000074,param_7);
        local_a0 = *param_7;
        *(int *)(param_1 + 0x18) = local_a0;
      }
    }
    else {
      iVar13 = FUN_00581b1c(iVar12,param_1,param_2,param_3,param_6,in_stack_00000074,&local_a0);
      puVar10 = PTR_DAT_0071b6e0;
      *(int *)(param_1 + 0x18) = local_a0;
      snprintf(param_6,puVar10,local_a0);
    }
    if (param_8 != (char *)0x0) {
      if (*pcVar11 == '\0') goto LAB_0058238c;
      cVar1 = pcVar11[1];
      cVar2 = pcVar11[2];
      cVar3 = pcVar11[3];
      *param_8 = *pcVar11;
      param_8[1] = cVar1;
      param_8[2] = cVar2;
      param_8[3] = cVar3;
      cVar1 = pcVar11[5];
      cVar2 = pcVar11[6];
      cVar3 = pcVar11[7];
      param_8[4] = pcVar11[4];
      param_8[5] = cVar1;
      param_8[6] = cVar2;
      param_8[7] = cVar3;
      cVar1 = pcVar11[9];
      cVar2 = pcVar11[10];
      cVar3 = pcVar11[0xb];
      param_8[8] = pcVar11[8];
      param_8[9] = cVar1;
      param_8[10] = cVar2;
      param_8[0xb] = cVar3;
      cVar1 = pcVar11[0xd];
      cVar2 = pcVar11[0xe];
      cVar3 = pcVar11[0xf];
      param_8[0xc] = pcVar11[0xc];
      param_8[0xd] = cVar1;
      param_8[0xe] = cVar2;
      param_8[0xf] = cVar3;
      param_8[0x10] = pcVar11[0x10];
    }
    if ((iVar13 == 0) &&
       (iVar12 = (**(code **)**(undefined4 **)puVar8)
                           (*(undefined4 *)(iVar12 + 0x128),param_2,param_3,param_4,param_5),
       puVar10 = PTR_PTR_0071b6cc, iVar12 != 0)) {
      (*(code *)**(undefined4 **)(PTR_PTR_0071b6cc + 0x14))(&local_9c,*(undefined4 *)(puVar8 + 4));
      puVar9 = PTR_DAT_0071b6c4;
      puVar5 = *(undefined4 **)(puVar10 + 0x1c);
      puVar6 = *(undefined4 **)(puVar10 + 0x20);
      puVar7 = *(undefined4 **)(puVar10 + 0x18);
      while (iVar12 = (*(code *)*puVar5)(*(undefined4 *)(puVar8 + 4),CONCAT44(local_9c,local_98)),
            iVar12 == 0) {
        iVar12 = (*(code *)*puVar6)(*(undefined4 *)(puVar9 + 4),CONCAT44(local_9c,local_98));
        if ((iVar12 != 0) && (*(int *)(iVar12 + 0x50) == local_a0)) {
          (*(code *)**(undefined4 **)(puVar10 + 0x10))
                    (*(undefined4 *)(puVar9 + 4),CONCAT44(local_9c,local_98));
          return -5;
        }
        (*(code *)*puVar7)(&local_90,*(undefined4 *)(puVar8 + 4),CONCAT44(local_9c,local_98));
        local_9c = local_90;
        local_98 = local_8c;
      }
      iVar13 = -5;
    }
  }
  return iVar13;
}


// 0x0582708 (0x80 bytes)
undefined4 FUN_00582708(int param_1,undefined4 *param_2)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  uVar3 = 0xffffffeb;
  if ((param_1 != 0) && (param_2 != (undefined4 *)0x0)) {
    iVar1 = FUN_00583940(*(undefined8 *)(param_1 + 8));
    uVar3 = 0xfffffff5;
    if (iVar1 != 0) {
      uVar2 = FUN_00581050(iVar1 + 0xf0);
      uVar3 = 0;
      *param_2 = uVar2;
    }
  }
  return uVar3;
}


// 0x0582788 (0x70 bytes)
undefined4 FUN_00582788(undefined8 *param_1)

{
  undefined4 uVar1;
  
  uVar1 = 0;
  if (param_1 != (undefined8 *)0x0) {
    uVar1 = (*(code *)**(undefined4 **)(PTR_PTR_0071b6e4 + 0x10))
                      (*(undefined4 *)PTR_DAT_0071b6e8,*param_1);
  }
  return uVar1;
}


// 0x05827f8 (0x70 bytes)
undefined4 FUN_005827f8(int param_1)

{
  undefined4 uVar1;
  
  uVar1 = 0;
  if (param_1 != 0) {
    uVar1 = (*(code *)**(undefined4 **)(PTR_PTR_0071b6e4 + 0x10))
                      (*(undefined4 *)(PTR_DAT_0071b6e8 + 4),*(undefined8 *)(param_1 + 8));
  }
  return uVar1;
}


// 0x0582868 (0x10 bytes)
undefined4 FUN_00582868(void)

{
  return *(undefined4 *)(PTR_DAT_0071b6e8 + 8);
}


// 0x0582878 (0x1c8 bytes)
undefined4 FUN_00582878(int param_1,int *param_2,undefined4 *param_3)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined4 uVar6;
  int iVar7;
  undefined4 local_70;
  undefined4 uStack_6c;
  undefined4 local_60;
  undefined4 local_5c;
  
  puVar5 = PTR_DAT_0071b6e8;
  puVar4 = PTR_PTR_0071b6e4;
  uVar6 = 0xffffffeb;
  if (param_2 != (int *)0x0) {
    (*(code *)**(undefined4 **)(PTR_PTR_0071b6e4 + 0x18))(&local_70,*(undefined4 *)PTR_DAT_0071b6e8)
    ;
    puVar1 = *(undefined4 **)(puVar4 + 0x20);
    puVar2 = *(undefined4 **)(puVar4 + 0x1c);
    puVar3 = *(undefined4 **)(puVar4 + 0x10);
    while( true ) {
      iVar7 = (*(code *)*puVar2)(*(undefined4 *)puVar5,CONCAT44(local_70,uStack_6c));
      if (iVar7 != 0) break;
      iVar7 = (*(code *)*puVar3)(*(undefined4 *)puVar5,CONCAT44(local_70,uStack_6c));
      *param_2 = iVar7;
      if ((iVar7 != 0) && (*(int *)(iVar7 + 0x128) == param_1)) {
        param_3[1] = uStack_6c;
        *param_3 = local_70;
        return 0;
      }
      (*(code *)*puVar1)(&local_60,*(undefined4 *)puVar5,CONCAT44(local_70,uStack_6c));
      local_70 = local_60;
      uStack_6c = local_5c;
    }
    uVar6 = 0xfffffff6;
    *param_2 = 0;
    param_3[1] = uStack_6c;
    *param_3 = local_70;
  }
  return uVar6;
}


// 0x0582a40 (0x28 bytes)
undefined4 FUN_00582a40(undefined8 param_1,undefined8 param_2)

{
  undefined4 uVar1;
  GPiece<16> auStack_10;
  
  uVar1 = FUN_00582878(param_1,param_2,auStack_10);
  return uVar1;
}


// 0x0582a68 (0x70 bytes)
undefined4 FUN_00582a68(int param_1)

{
  undefined4 uVar1;
  
  uVar1 = 0;
  if (param_1 != 0) {
    uVar1 = (*(code *)**(undefined4 **)(PTR_PTR_0071b6e4 + 0x10))
                      (*(undefined4 *)(PTR_DAT_0071b6e8 + 4),*(undefined8 *)(param_1 + 300));
  }
  return uVar1;
}


// 0x0582ad8 (0x34 bytes)
undefined4 FUN_00582ad8(int param_1,int param_2,int param_3)

{
  if (param_1 == 1) {
    return *(undefined4 *)(param_3 + 0x114);
  }
  if (param_1 != 2) {
    return 0;
  }
  return *(undefined4 *)(param_2 + 0x124);
}


// 0x0582b0c (0xfc bytes)
int FUN_00582b0c(undefined8 param_1,undefined4 *param_2,int *param_3,int *param_4,undefined4 param_5
                )

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 local_40;
  undefined4 local_3c;
  
  iVar1 = FUN_00582878(param_1,param_3,&local_40);
  if (iVar1 == 0) {
    iVar2 = FUN_00582a68(*param_3);
    *param_4 = iVar2;
    if (iVar2 != 0) {
      iVar1 = *param_3;
      param_2[1] = local_3c;
      *param_2 = local_40;
      uVar3 = *(undefined4 *)(iVar1 + 300);
      param_2[4] = (int)param_1;
      param_2[2] = uVar3;
      param_2[3] = *(undefined4 *)(iVar1 + 0x130);
      uVar3 = FUN_00582ad8(param_5,iVar1,iVar2);
      param_2[9] = uVar3;
      return 0;
    }
  }
  return iVar1;
}


// 0x0582c08 (0x26c bytes)
undefined4 FUN_00582c08(int param_1)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  longlong lVar8;
  int iVar9;
  undefined4 uVar10;
  GPiece<4> local_a0;
  uint local_9c;
  undefined4 local_98;
  undefined4 local_94;
  undefined4 local_90;
  undefined4 uStack_8c;
  GPiece<24> local_88;
  
  FUN_0053e5c8(local_a0);
  puVar5 = PTR_DAT_0071b6e8;
  uVar10 = 0xfffffff1;
  if (*(int *)(PTR_DAT_0071b6e8 + 8) == 1) {
    if (param_1 != 0) {
      iVar9 = FUN_0053e214();
      uVar10 = 0xfffffff6;
      if (iVar9 != 0) goto LAB_00582c78;
    }
    puVar4 = PTR_PTR_0071b6e4;
    (*(code *)**(undefined4 **)(PTR_PTR_0071b6e4 + 0x18))(&local_90,*(undefined4 *)puVar5);
    puVar7 = PTR_DAT_0071b6ec;
    puVar6 = PTR_DAT_0071b6e8;
    puVar1 = *(undefined4 **)(puVar4 + 0x10);
    puVar2 = *(undefined4 **)(puVar4 + 0x1c);
    puVar3 = *(undefined4 **)(puVar4 + 0x20);
    while( true ) {
      lVar8 = (*(code *)*puVar2)(*(undefined4 *)puVar5,CONCAT44(local_90,uStack_8c));
      if (lVar8 != 0) break;
      (*(code *)*puVar3)(&local_98,*(undefined4 *)puVar6,CONCAT44(local_90,uStack_8c));
      iVar9 = (*(code *)*puVar1)(*(undefined4 *)puVar6,CONCAT44(local_90,uStack_8c));
      if (*(int *)(iVar9 + 0x140) != 0) {
        (*(code *)**(undefined4 **)(*(int *)puVar7 + 8))(iVar9 + 0x144,&local_9c);
        if (*(uint *)(iVar9 + 0x140) < local_9c) {
          (*(code *)**(undefined4 **)(iVar9 + 0x118))(local_88);
          *(undefined4 *)(iVar9 + 0x140) = 0;
        }
      }
      local_90 = local_98;
      uStack_8c = local_94;
    }
    uVar10 = 0;
  }
LAB_00582c78:
  (*(code *)**(undefined4 **)(PTR_PTR_0071b6f0 + 0x1c))();
  return uVar10;
}


// 0x0582e74 (0x1f8 bytes)
int DisconnectFromMAS(undefined8 param_1,undefined8 *param_2)

{
  undefined4 *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  undefined4 local_60;
  undefined4 local_5c;
  GPiece<16> local_40;
  
  puVar3 = PTR_DAT_0071b6e8;
  puVar2 = PTR_PTR_0071b6e4;
  puVar1 = *(undefined4 **)(PTR_PTR_0071b6e4 + 0x10);
  iVar4 = (*(code *)*puVar1)(*(undefined4 *)(PTR_DAT_0071b6e8 + 4),param_2[1]);
  iVar7 = -0xb;
  if (iVar4 != 0) {
    iVar5 = (*(code *)*puVar1)(*(undefined4 *)puVar3,*param_2);
    iVar7 = -0x10;
    if (iVar5 != 0) {
      if (*(int *)((int)param_2 + 0x24) != 0) {
        *(int *)(iVar5 + 0x124) = *(int *)((int)param_2 + 0x24);
      }
      iVar7 = -0x10;
      if (-1 < (int)*(uint *)(iVar5 + 0x14c)) {
        puVar1 = *(undefined4 **)(puVar2 + 0x14);
        *(uint *)(iVar5 + 0x14c) = *(uint *)(iVar5 + 0x14c) | 0x80000000;
        (*(code *)*puVar1)(&local_60,*(undefined4 *)puVar3,iVar5);
        (*(code *)**(undefined4 **)(PTR_PTR_0071b6f0 + 0x24))(CONCAT44(local_60,local_5c));
        *(undefined4 *)(iVar4 + 0x118) = 0;
        uVar6 = FUN_0053e0e4(local_40);
        return ((int)((((int)uVar6 >> 0x1f ^ uVar6) - ((int)uVar6 >> 0x1f)) + -1) >> 0x1f & 3U) - 3;
      }
    }
  }
  return iVar7;
}


// 0x058306c (0xe4 bytes)
int FUN_0058306c(undefined8 param_1,undefined8 *param_2)

{
  undefined4 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  int iVar4;
  int iVar5;
  
  uVar2 = *param_2;
  iVar4 = DisconnectFromMAS(1);
  puVar3 = PTR_DAT_0071b6e8;
  if (iVar4 == 0) {
    puVar1 = *(undefined4 **)(PTR_PTR_0071b6e4 + 0x10);
    while( true ) {
      iVar5 = (*(code *)*puVar1)(*(undefined4 *)puVar3,uVar2);
      if (iVar5 == 0) break;
      iVar4 = FUN_00582c08(1);
      if (iVar4 != 0) {
        return iVar4;
      }
    }
  }
  return iVar4;
}


// 0x0583150 (0x48 bytes)
void FUN_00583150(undefined4 *param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined *puVar4;
  
  puVar4 = PTR_DAT_0071b6e8;
  if (param_1 == (undefined4 *)0x0) {
    return;
  }
  uVar1 = *(undefined4 *)(PTR_DAT_0071b6e8 + 0x10);
  uVar2 = *(undefined4 *)(PTR_DAT_0071b6e8 + 0x14);
  uVar3 = *(undefined4 *)(PTR_DAT_0071b6e8 + 0x18);
  *param_1 = *(undefined4 *)(PTR_DAT_0071b6e8 + 0xc);
  param_1[1] = uVar1;
  param_1[2] = uVar2;
  param_1[3] = uVar3;
  uVar1 = *(undefined4 *)(puVar4 + 0x1c);
  param_1[5] = *(undefined4 *)(puVar4 + 0x20);
  param_1[4] = uVar1;
  return;
}


// 0x0583198 (0x48 bytes)
void FUN_00583198(undefined4 *param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined *puVar4;
  
  puVar4 = PTR_DAT_0071b6e8;
  if (param_1 == (undefined4 *)0x0) {
    return;
  }
  uVar1 = param_1[1];
  uVar2 = param_1[2];
  uVar3 = param_1[3];
  *(undefined4 *)(PTR_DAT_0071b6e8 + 0xc) = *param_1;
  *(undefined4 *)(puVar4 + 0x10) = uVar1;
  *(undefined4 *)(puVar4 + 0x14) = uVar2;
  *(undefined4 *)(puVar4 + 0x18) = uVar3;
  uVar1 = param_1[4];
  *(undefined4 *)(puVar4 + 0x20) = param_1[5];
  *(undefined4 *)(puVar4 + 0x1c) = uVar1;
  return;
}


// 0x05831e0 (0xa0 bytes)
undefined4 FUN_005831e0(int param_1,undefined8 param_2)

{
  undefined4 uVar1;
  int iVar2;
  char *pcVar3;
  
  iVar2 = FUN_00582788(param_2);
  pcVar3 = (char *)FUN_005827f8(param_2);
  uVar1 = 0xffffffeb;
  if (((iVar2 != 0) && (pcVar3 != (char *)0x0)) && (param_1 != 0)) {
    uVar1 = 0xfffffff5;
    if (*pcVar3 != '\0') {
      strcpy(param_1,pcVar3,0x11);
      uVar1 = 0;
    }
  }
  return uVar1;
}


// 0x0583280 (0x48 bytes)
// strings: 0067dce0: '3.05.201103091800' | 0067dcb8: '%s %s' | 0067dcc0: 'Medius Client Library Version'

undefined4 FUN_00583280(char *param_1)

{
  undefined4 uVar1;
  
  uVar1 = 0xffffffeb;
  if (param_1 != (char *)0x0) {
    snprintf(param_1,PTR_s__s__s_0071b6f8,ZEXT48(PTR_s_Medius_Client_Library_Version_0071b6fc)
                   ,ZEXT48(PTR_s_3_05_201103091800_0071b700));
    uVar1 = 0;
  }
  return uVar1;
}


// 0x05832c8 (0xb0 bytes)
// strings: 00660578: '201103091800' (raw) | 00660579: '01103091800' (raw) | 0066057a: '1103091800' (raw) | 0066057b: '103091800' (raw) | 0066057c: '03091800' (raw) | 0066057d: '3091800' (raw) | 0066057e: '091800' (raw) | 0066057f: '91800' (raw) | 00660580: '1800' (raw)

undefined4 FUN_005832c8(undefined1 *param_1)

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
  undefined4 uVar13;
  
  uVar13 = 0xffffffeb;
  if (param_1 != (undefined1 *)0x0) {
    uVar13 = 0;
    uVar1 = *PTR_DAT_0071b704;
    uVar2 = PTR_DAT_0071b704[1];
    uVar3 = PTR_DAT_0071b704[2];
    uVar4 = PTR_DAT_0071b704[3];
    uVar5 = PTR_DAT_0071b704[4];
    uVar6 = PTR_DAT_0071b704[5];
    uVar7 = PTR_DAT_0071b704[6];
    uVar8 = PTR_DAT_0071b704[7];
    uVar9 = PTR_DAT_0071b704[8];
    uVar10 = PTR_DAT_0071b704[9];
    uVar11 = PTR_DAT_0071b704[10];
    uVar12 = PTR_DAT_0071b704[0xb];
    param_1[0xc] = PTR_DAT_0071b704[0xc];
    *param_1 = uVar1;
    param_1[1] = uVar2;
    param_1[2] = uVar3;
    param_1[3] = uVar4;
    param_1[4] = uVar5;
    param_1[5] = uVar6;
    param_1[6] = uVar7;
    param_1[7] = uVar8;
    param_1[8] = uVar9;
    param_1[9] = uVar10;
    param_1[10] = uVar11;
    param_1[0xb] = uVar12;
  }
  return uVar13;
}


// 0x0583378 (0x1b0 bytes)
int FUN_00583378(int param_1)

{
  undefined4 *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  int iVar4;
  int iVar5;
  
  puVar3 = PTR_DAT_0071b6e8;
  iVar4 = -0x12;
  if (*(int *)(PTR_DAT_0071b6e8 + 8) != 1) {
    iVar4 = -0x15;
    if (param_1 != 0) {
      memset(PTR_DAT_0071b6e8 + 0x24,0,0x68);
      puVar2 = PTR_PTR_0071b6e4;
      *(int *)(puVar3 + 0x88) = param_1;
      puVar1 = *(undefined4 **)puVar2;
      iVar4 = (*(code *)*puVar1)(puVar3,0x154,param_1);
      if (iVar4 == 0) {
        iVar4 = (*(code *)*puVar1)(puVar3 + 4,0x1e4,param_1);
        if ((iVar4 == 0) &&
           (iVar4 = (*(code *)**(undefined4 **)PTR_PTR_0071b6f0)(param_1 * 10), iVar4 == 0)) {
          iVar5 = FUN_00587b00();
          iVar4 = -1;
          if ((iVar5 == 0) && (iVar4 = FUN_00585800(param_1), iVar4 == 0)) {
            *(undefined4 *)(puVar3 + 8) = 1;
            return 0;
          }
        }
      }
      puVar1 = *(undefined4 **)(puVar2 + 4);
      (*(code *)*puVar1)(puVar3);
      (*(code *)*puVar1)(puVar3 + 4);
    }
  }
  return iVar4;
}


// 0x0583528 (0x260 bytes)
undefined4 FUN_00583528(undefined8 param_1)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  int iVar6;
  int iVar7;
  int iVar9;
  longlong lVar8;
  int iVar10;
  int iStack00000030;
  int iStack00000034;
  undefined4 local_a8;
  undefined4 uStack_a4;
  GPiece<48> local_a0;
  undefined4 local_70;
  undefined4 local_6c;
  
  puVar5 = PTR_DAT_0071b6e8;
  puVar4 = PTR_PTR_0071b6e4;
  puVar1 = *(undefined4 **)(PTR_PTR_0071b6e4 + 0x1c);
  iStack00000034 = (int)param_1;
  iVar7 = iStack00000034;
  iStack00000030 = (int)((ulonglong)param_1 >> 0x20);
  iVar6 = iStack00000030;
  _iStack00000030 = param_1;
  iVar9 = (*(code *)*puVar1)(*(undefined4 *)(PTR_DAT_0071b6e8 + 4),param_1);
  if (iVar9 == 0) {
    puVar2 = *(undefined4 **)(puVar4 + 0x10);
    iVar9 = (*(code *)*puVar2)(*(undefined4 *)(puVar5 + 4),param_1);
    if (iVar9 != 0) {
      if ((*(uint *)(iVar9 + 0x14) & 0x40000000) == 0) {
        puVar3 = *(undefined4 **)(puVar4 + 0x18);
        *(uint *)(iVar9 + 0x14) = *(uint *)(iVar9 + 0x14) | 0x40000000;
        (*(code *)*puVar3)(&local_a8,*(undefined4 *)puVar5);
        puVar3 = *(undefined4 **)(puVar4 + 0x20);
        while (lVar8 = (*(code *)*puVar1)(*(undefined4 *)puVar5,CONCAT44(local_a8,uStack_a4)),
              lVar8 == 0) {
          iVar10 = (*(code *)*puVar2)(*(undefined4 *)puVar5,CONCAT44(local_a8,uStack_a4));
          if (((iVar10 != 0) && (*(int *)(iVar10 + 300) == iVar6)) &&
             (*(int *)(iVar10 + 0x130) == iVar7)) {
            FUN_0058306c(6,local_a0);
          }
          (*(code *)*puVar3)(&local_70,*(undefined4 *)puVar5,CONCAT44(local_a8,uStack_a4));
          local_a8 = local_70;
          uStack_a4 = local_6c;
        }
        FUN_005853f0(iVar9);
        (*(code *)**(undefined4 **)(puVar4 + 0xc))(*(undefined4 *)(puVar5 + 4),param_1);
        return 0;
      }
    }
  }
  return 0xfffffff5;
}


// 0x0583788 (0x1b8 bytes)
undefined4 FUN_00583788(void)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined4 uVar5;
  int iVar6;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 local_40;
  undefined4 local_3c;
  
  puVar4 = PTR_DAT_0071b6e8;
  puVar3 = PTR_PTR_0071b6e4;
  if (*(int *)(PTR_DAT_0071b6e8 + 8) == 0) {
    return 0xfffffff1;
  }
  uVar5 = 0;
  (*(code *)**(undefined4 **)(PTR_PTR_0071b6e4 + 0x18))
            (&local_48,*(undefined4 *)(PTR_DAT_0071b6e8 + 4));
  puVar1 = *(undefined4 **)(puVar3 + 0x1c);
  puVar2 = *(undefined4 **)(puVar3 + 0x20);
  while( true ) {
    iVar6 = (*(code *)*puVar1)(*(undefined4 *)(puVar4 + 4),CONCAT44(local_48,uStack_44));
    if (iVar6 != 0) break;
    uVar5 = FUN_00583528(CONCAT44(local_48,uStack_44));
    (*(code *)*puVar2)(&local_40,*(undefined4 *)(puVar4 + 4),CONCAT44(local_48,uStack_44));
    local_48 = local_40;
    uStack_44 = local_3c;
  }
  FUN_005857b0();
  (*(code *)**(undefined4 **)(PTR_PTR_0071b6f0 + 4))();
  puVar1 = *(undefined4 **)(puVar3 + 4);
  (*(code *)*puVar1)(puVar4);
  (*(code *)*puVar1)(puVar4 + 4);
  *(undefined4 *)(puVar4 + 8) = 0;
  return uVar5;
}


// 0x0583940 (0x64 bytes)
undefined4 FUN_00583940(undefined8 param_1)

{
  undefined4 uVar1;
  undefined8 uStack00000030;
  
  uStack00000030 = param_1;
  uVar1 = (*(code *)**(undefined4 **)(PTR_PTR_0071b6e4 + 0x10))
                    (*(undefined4 *)(PTR_DAT_0071b6e8 + 4),param_1);
  return uVar1;
}


// 0x05839a4 (0x300 bytes)
void FUN_005839a4(int *param_1)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  int iVar6;
  int iVar7;
  undefined4 uVar8;
  undefined4 local_88;
  undefined4 uStack_84;
  GPiece<32> local_80;
  undefined4 local_60;
  undefined4 local_5c;
  
  puVar5 = PTR_DAT_0071b6e8;
  puVar4 = PTR_PTR_0071b6e4;
  iVar7 = *param_1;
  (*(code *)**(undefined4 **)(PTR_PTR_0071b6e4 + 0x18))(&local_88,*(undefined4 *)PTR_DAT_0071b6e8);
  puVar1 = *(undefined4 **)(puVar4 + 0x10);
  puVar2 = *(undefined4 **)(puVar4 + 0x1c);
  puVar3 = *(undefined4 **)(puVar4 + 0x20);
  while( true ) {
    iVar6 = (*(code *)*puVar2)(*(undefined4 *)puVar5,CONCAT44(local_88,uStack_84));
    if (iVar6 != 0) break;
    iVar6 = (*(code *)*puVar1)(*(undefined4 *)puVar5,CONCAT44(local_88,uStack_84));
    if ((iVar6 != 0) && (*(int *)(iVar6 + 0x128) == iVar7)) break;
    (*(code *)*puVar3)(&local_60,*(undefined4 *)puVar5,CONCAT44(local_88,uStack_84));
    local_88 = local_60;
    uStack_84 = local_5c;
  }
  iVar7 = (*(code *)*puVar1)(*(undefined4 *)puVar5,CONCAT44(local_88,uStack_84));
  if (iVar7 != 0) {
    uVar8 = (*(code *)*puVar1)(*(undefined4 *)(puVar5 + 4),*(undefined8 *)(iVar7 + 300));
    if (*(undefined4 **)(iVar7 + 0x118) != (undefined4 *)0x0) {
      (*(code *)**(undefined4 **)(iVar7 + 0x118))(local_80);
    }
    if (param_1[1] == 0) {
      FUN_0058634c(uVar8,CONCAT44(local_88,uStack_84));
    }
    puVar2 = *(undefined4 **)(puVar4 + 0x14);
    uVar8 = *(undefined4 *)puVar5;
    *(undefined4 *)(iVar7 + 0x128) = 0;
    (*(code *)*puVar2)(&local_88,uVar8,iVar7);
    uVar8 = (*(code *)*puVar1)(*(undefined4 *)(puVar5 + 4),*(undefined8 *)(iVar7 + 300));
    *(undefined4 *)(iVar7 + 0x128) = 0;
    FUN_0058634c(uVar8,CONCAT44(local_88,uStack_84));
    (*(code *)**(undefined4 **)(puVar4 + 0xc))(*(undefined4 *)puVar5,CONCAT44(local_88,uStack_84));
  }
  return;
}


// 0x0583ca4 (0x2cc bytes)
undefined4 ConnectToMLS(void *param_1,undefined8 param_2,undefined4 *param_3)

{
  undefined4 *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  int iVar6;
  void *__dest;
  undefined4 uStack00000038;
  undefined4 uStack0000003c;
  undefined4 local_208;
  undefined4 uStack_204;
  GPiece<8> auStack_1f8;
  undefined4 local_1f0;
  GPiece<8> auStack_1ec;
  GPiece<156> auStack_1e4;
  undefined *local_148;
  void *local_144;
  undefined *local_140;
  void *local_13c;
  undefined4 local_118;
  undefined4 local_114;
  undefined4 local_110;
  undefined4 local_10c;
  GPiece<132> auStack_108;
  undefined4 local_84;
  undefined4 local_80;
  
  puVar3 = PTR_DAT_0071b6e8;
  puVar2 = PTR_PTR_0071b6e4;
  uStack0000003c = (undefined4)param_2;
  uVar5 = uStack0000003c;
  uStack00000038 = (undefined4)((ulonglong)param_2 >> 0x20);
  uVar4 = uStack00000038;
  if ((((param_3 != (undefined4 *)0x0) && (param_1 != (void *)0x0)) &&
      (*(int *)((int)param_1 + 0x114) != 0)) && (*(int *)((int)param_1 + 0x118) != 0)) {
    if (*(int *)(PTR_DAT_0071b6e8 + 8) == 0) {
      return 0xfffffff1;
    }
    puVar1 = *(undefined4 **)(PTR_PTR_0071b6e4 + 0x10);
    _uStack00000038 = param_2;
    iVar6 = (*(code *)*puVar1)(*(undefined4 *)(PTR_DAT_0071b6e8 + 4),param_2);
    if (iVar6 != 0) {
      FUN_00582788(param_3);
      (*(code *)**(undefined4 **)(puVar2 + 0x24))(&local_208,*(undefined4 *)puVar3);
      __dest = (void *)(*(code *)*puVar1)(*(undefined4 *)puVar3,CONCAT44(local_208,uStack_204));
      if (__dest == (void *)0x0) {
        return 0xffffffe7;
      }
      memcpy(__dest,param_1,0x128);
      FUN_00546290(auStack_1ec);
      memcpy(auStack_1e4,param_1,0x9c);
      local_114 = *(undefined4 *)((int)param_1 + 0x124);
      local_148 = PTR_PTR_0071b708;
      local_140 = PTR_PTR_0071b6f4;
      local_118 = *(undefined4 *)((int)param_1 + 0x120);
      local_80 = 0;
      local_84 = 0;
      local_144 = __dest;
      local_13c = __dest;
      memcpy(auStack_108,(void *)((int)param_1 + 0x9c),0x74);
      local_110 = *(undefined4 *)((int)param_1 + 0x11c);
      local_10c = *(undefined4 *)((int)param_1 + 0x124);
      iVar6 = FUN_0053ef58(auStack_1ec,auStack_1f8);
      *(undefined4 *)((int)__dest + 0x128) = local_1f0;
      *(undefined4 *)((int)__dest + 300) = uVar4;
      *(undefined4 *)((int)__dest + 0x130) = uVar5;
      param_3[4] = local_1f0;
      param_3[2] = uVar4;
      param_3[3] = uVar5;
      param_3[5] = 0;
      param_3[6] = 0;
      param_3[7] = 0;
      param_3[8] = 0;
      param_3[9] = 0;
      param_3[1] = uStack_204;
      *param_3 = local_208;
      if (iVar6 == 0) {
        return 0;
      }
      (*(code *)**(undefined4 **)(puVar2 + 0xc))
                (*(undefined4 *)puVar3,CONCAT44(local_208,uStack_204));
      param_3[1] = 0;
      *param_3 = 0;
      return 0xfffffffe;
    }
  }
  return 0xffffffeb;
}


// 0x0583f70 (0x194 bytes)
void FUN_00583f70(undefined4 *param_1)

{
  int iVar1;
  undefined *puVar2;
  undefined *puVar3;
  int iVar4;
  GPiece<8> local_68;
  GPiece<20> local_60;
  GPiece<44> local_4c;
  
  puVar3 = PTR_DAT_0071b6e8;
  puVar2 = PTR_PTR_0071b6e4;
  iVar1 = param_1[4];
  if (iVar1 != 0) {
    (*(code *)**(undefined4 **)(PTR_PTR_0071b6e4 + 0x14))
              (local_68,*(undefined4 *)PTR_DAT_0071b6e8,iVar1);
    if (param_1[1] == 1) {
      iVar4 = (*(code *)**(undefined4 **)(puVar2 + 0x10))
                        (*(undefined4 *)(puVar3 + 4),*(undefined8 *)(iVar1 + 300));
      if (iVar4 == 0) {
        return;
      }
      *(undefined4 *)(iVar1 + 0x128) = *param_1;
      if (*(int *)(iVar4 + 0x14) < 0) {
        FUN_0057f854(iVar4 + 0x18,0,local_4c);
      }
    }
    else {
      *(undefined4 *)(iVar1 + 0x128) = *param_1;
    }
    if (*(undefined4 **)(iVar1 + 0x114) != (undefined4 *)0x0) {
      (*(code *)**(undefined4 **)(iVar1 + 0x114))(local_60);
    }
  }
  return;
}


// 0x0584104 (0x19c bytes)
int FUN_00584104(undefined4 *param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined *puVar5;
  undefined *puVar6;
  longlong lVar7;
  int iVar8;
  int iVar9;
  undefined4 local_40;
  undefined4 uStack_3c;
  
  puVar6 = PTR_DAT_0071b6e8;
  puVar5 = PTR_PTR_0071b6e4;
  iVar9 = -0x15;
  if ((param_1 != (undefined4 *)0x0) && (param_2 != (undefined4 *)0x0)) {
    iVar9 = -0x17;
    (*(code *)**(undefined4 **)(PTR_PTR_0071b6e4 + 0x24))
              (&local_40,*(undefined4 *)(PTR_DAT_0071b6e8 + 4));
    lVar7 = (*(code *)**(undefined4 **)(puVar5 + 0x1c))
                      (*(undefined4 *)(puVar6 + 4),CONCAT44(local_40,uStack_3c));
    if (lVar7 == 0) {
      iVar9 = -10;
      iVar8 = (*(code *)**(undefined4 **)(puVar5 + 0x10))
                        (*(undefined4 *)(puVar6 + 4),CONCAT44(local_40,uStack_3c));
      if (iVar8 != 0) {
        uVar1 = param_1[1];
        uVar2 = param_1[2];
        uVar3 = param_1[3];
        *(undefined4 *)(iVar8 + 0xf8) = *param_1;
        *(undefined4 *)(iVar8 + 0xfc) = uVar1;
        *(undefined4 *)(iVar8 + 0x100) = uVar2;
        *(undefined4 *)(iVar8 + 0x104) = uVar3;
        uVar1 = param_1[7];
        uVar2 = param_1[4];
        uVar3 = param_1[5];
        uVar4 = param_1[6];
        *(undefined4 *)(iVar8 + 0xf0) = 0;
        *(undefined4 *)(iVar8 + 0x108) = uVar2;
        *(undefined4 *)(iVar8 + 0x10c) = uVar3;
        *(undefined4 *)(iVar8 + 0x110) = uVar4;
        *(undefined4 *)(iVar8 + 0x114) = uVar1;
        *param_2 = local_40;
        param_2[1] = uStack_3c;
        iVar9 = FUN_00586238(iVar8,CONCAT44(local_40,uStack_3c));
        if (iVar9 == 0) {
          return 0;
        }
      }
      (*(code *)**(undefined4 **)(puVar5 + 0xc))
                (*(undefined4 *)(puVar6 + 4),CONCAT44(local_40,uStack_3c));
    }
  }
  return iVar9;
}


// 0x05842a0 (0x188 bytes)
undefined4
FUN_005842a0(undefined8 param_1,undefined4 *param_2,int *param_3,int *param_4,undefined4 param_5)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar4;
  undefined *puVar5;
  undefined4 uVar6;
  int iVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uStack00000030;
  undefined4 uStack00000034;
  
  puVar5 = PTR_DAT_0071b6e8;
  puVar1 = *(undefined4 **)(PTR_PTR_0071b6e4 + 0x10);
  param_2[9] = 0;
  *param_2 = 0;
  param_2[1] = 0;
  param_2[2] = 0;
  param_2[3] = 0;
  param_2[4] = 0;
  param_2[5] = 0;
  param_2[6] = 0;
  param_2[7] = 0;
  param_2[8] = 0;
  uStack00000034 = (undefined4)param_1;
  uVar6 = uStack00000034;
  uStack00000030 = (undefined4)((ulonglong)param_1 >> 0x20);
  uVar8 = uStack00000030;
  _uStack00000030 = param_1;
  iVar7 = (*(code *)*puVar1)(*(undefined4 *)puVar5,param_1);
  uVar9 = 0xfffffff0;
  *param_3 = iVar7;
  if (iVar7 != 0) {
    uVar2 = *(undefined4 *)(iVar7 + 300);
    uVar3 = *(undefined4 *)(iVar7 + 0x130);
    iVar7 = (*(code *)*puVar1)(*(undefined4 *)(puVar5 + 4),*(undefined8 *)(iVar7 + 300));
    uVar9 = 0xfffffff5;
    *param_4 = iVar7;
    if (iVar7 != 0) {
      iVar4 = *param_3;
      param_2[1] = uVar6;
      *param_2 = uVar8;
      param_2[3] = uVar3;
      uVar8 = *(undefined4 *)(iVar4 + 0x128);
      param_2[2] = uVar2;
      param_2[4] = uVar8;
      uVar8 = FUN_00582ad8(param_5,iVar4,iVar7);
      uVar9 = 0;
      param_2[9] = uVar8;
    }
  }
  return uVar9;
}


// 0x0584428 (0x3c bytes)
undefined * FUN_00584428(void)

{
  int *piVar1;
  longlong lVar2;
  
  lVar2 = 9;
  piVar1 = (int *)PTR_PTR_0071b70c;
  do {
    if (*piVar1 == 0) {
      return (undefined *)0x0;
    }
    lVar2 = lVar2 + -1;
    piVar1 = piVar1 + 1;
  } while (lVar2 != 0);
  return PTR_PTR_0071b70c;
}


// 0x0584464 (0x68 bytes)
bool FUN_00584464(uint *param_1)

{
  uint *puVar1;
  bool bVar2;
  
  bVar2 = false;
  if (param_1 != (uint *)0x0) {
    puVar1 = (uint *)param_1[0x17];
    if (puVar1 != (uint *)0x0) {
      if ((param_1 < puVar1) && (puVar1 + 0x300 < param_1)) {
        return false;
      }
      if (param_1[6] != 0) {
        bVar2 = *param_1 < 3;
      }
    }
  }
  return bVar2;
}


// 0x05844cc (0x24 bytes)
undefined4 FUN_005844cc(uint param_1)

{
  undefined4 uVar1;
  
  uVar1 = 1;
  if (param_1 < 3) {
    uVar1 = *(undefined4 *)(PTR_DAT_0071b710 + param_1 * 4);
  }
  return uVar1;
}


// 0x05844f0 (0x64 bytes)
uint FUN_005844f0(uint param_1,uint param_2,int param_3)

{
  int *piVar1;
  int iVar2;
  
  if ((int)param_2 < 0x20) {
    iVar2 = 0x20 - param_2;
    piVar1 = (int *)(param_2 * 0x80 + (param_2 & 0x7ffffff) * -0x20 + param_3 + 0x18);
    do {
      if ((*piVar1 != 0) && ((1 << (param_2 & 0x3f) & param_1) != 0)) {
        return param_2;
      }
      param_2 = param_2 + 1;
      iVar2 = iVar2 + -1;
      piVar1 = piVar1 + 0x18;
    } while (iVar2 != 0);
  }
  return 0x20;
}


// 0x0584554 (0x68 bytes)
undefined4 FUN_00584554(int param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = FUN_00584464(param_2);
  uVar2 = 0xffffffeb;
  if ((iVar1 != 0) && (param_1 != 0)) {
    uVar2 = 0;
    *(int *)(param_2 + 0x4c) = param_1;
  }
  return uVar2;
}


// 0x05845bc (0x8 bytes)
undefined8 FUN_005845bc(void)

{
  return 0xffffffffffffffec;
}


// 0x05845c4 (0xe0 bytes)
void FUN_005845c4(int param_1,uint param_2,undefined4 param_3,undefined4 param_4,undefined8 param_5,
                 undefined8 param_6)

{
  uint uVar1;
  GPiece<16> local_10;
  
  if (param_2 < 6) {
    if (param_2 < 4) {
      if (param_2 != 3) {
        return;
      }
    }
    else if (*(uint *)(param_1 + 0x48) >> 0x1c < 2) {
      return;
    }
  }
  else if (param_2 != 6) {
    return;
  }
  uVar1 = (int)(short)((ulonglong)param_6 >> 0x10) >> 0xf;
  *(undefined4 *)(param_1 + 0x34) = param_4;
  *(undefined4 *)(param_1 + 0x38) = param_3;
  *(uint *)(param_1 + 0x3c) = ((uVar1 ^ (uint)param_6) - uVar1) - 1 >> 0x1f;
  if (*(undefined4 **)(param_1 + 0x18) != (undefined4 *)0x0) {
    (*(code *)**(undefined4 **)(param_1 + 0x18))(local_10,0,param_1 + 0x1c);
  }
  return;
}


// 0x05846a4 (0x5b0 bytes)
int FUN_005846a4(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3,int param_4,int param_5
                )

{
  byte bVar1;
  byte bVar2;
  undefined4 *puVar3;
  code *pcVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 *puVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  longlong lVar15;
  ulonglong *puVar16;
  ulonglong *puVar17;
  int *piVar18;
  undefined *puVar19;
  int *piVar20;
  ulonglong uVar21;
  ulonglong uVar22;
  ulonglong uVar23;
  undefined4 uVar24;
  int iVar25;
  short sVar26;
  ulonglong unaff_r14;
  ulonglong unaff_r15;
  ulonglong unaff_r16;
  ulonglong unaff_r17;
  short sVar27;
  ulonglong unaff_r18;
  ulonglong unaff_r19;
  ulonglong unaff_r20;
  ushort uVar28;
  ulonglong unaff_r21;
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
  
  uVar21 = ZEXT48(&stack0x00000000);
  puVar16 = (ulonglong *)(uVar21 - 0x160);
  *puVar16 = uVar21;
  puVar16[0x26] = unaff_r26;
  puVar19 = PTR_PTR_0071b714;
  puVar16[0x21] = unaff_r21;
  puVar16[0x22] = unaff_r22;
  puVar16[0x23] = unaff_r23;
  puVar16[0x24] = unaff_r24;
  puVar3 = *(undefined4 **)(puVar19 + 0x30);
  puVar16[0x25] = unaff_r25;
  puVar16[0x2a] = unaff_r30;
  puVar16[0x2b] = unaff_r31;
  puVar16[0x1a] = unaff_r14;
  puVar16[0x1b] = unaff_r15;
  puVar16[0x1c] = unaff_r16;
  puVar16[0x1d] = unaff_r17;
  puVar16[0x1e] = unaff_r18;
  puVar16[0x1f] = unaff_r19;
  puVar16[0x20] = unaff_r20;
  puVar16[0x27] = unaff_r27;
  puVar16[0x28] = unaff_r28;
  puVar16[0x29] = unaff_r29;
  puVar16[0x2e] = in_LR;
  pcVar4 = (code *)*puVar3;
  puVar16[5] = ZEXT48(&TOC_BASE);
  uVar23 = (*pcVar4)();
  uVar22 = puVar16[5];
  lVar15 = (uVar21 - 0x160) - ((uVar23 & 0xffffffff) + 0x1e & 0xfffffffffffffff0);
  puVar17 = (ulonglong *)lVar15;
  *puVar17 = *puVar16;
  uVar23 = lVar15 + 0x7fU & 0xfffffff0;
  if (((param_1 == (undefined4 *)0x0) || (param_2[1] == 0)) || (param_3[0x17] == 0)) {
LAB_00584760:
    iVar25 = -0x15;
  }
  else {
    iVar25 = *(int *)((int)uVar22 + -0x6c10);
    *(int *)(puVar16 + 0x18) = (int)uVar23;
    puVar3 = *(undefined4 **)puVar19;
    uVar24 = param_3[0x11];
    bVar1 = *(byte *)((int)param_1 + 0x15);
    puVar5 = *(undefined4 **)(iVar25 + 0x34);
    pcVar4 = (code *)*puVar5;
    puVar17[5] = uVar22;
    uVar24 = (*pcVar4)(uVar24);
    pcVar4 = (code *)*puVar3;
    puVar17[5] = puVar17[5];
    iVar25 = (*pcVar4)(uVar23,param_2,uVar24,param_1[1]);
    uVar22 = puVar17[5];
    if (iVar25 == 0) {
      if (bVar1 == 0) {
        FUN_005845c4(param_3,*(undefined1 *)(param_1 + 5),*param_1,param_2[0x11],0,0,0);
      }
      else {
        puVar3 = *(undefined4 **)(puVar19 + 8);
        sVar27 = 0;
        *(undefined4 *)(puVar16 + 0x19) = *(undefined4 *)(puVar19 + 0x14);
        uVar28 = bVar1 - 1;
        puVar6 = *(undefined4 **)(puVar19 + 0x24);
        *(undefined4 *)((int)puVar16 + 0xc4) = *(undefined4 *)(puVar19 + 0x28);
        do {
          pcVar4 = (code *)*puVar6;
          puVar17[5] = uVar22;
          (*pcVar4)(uVar23);
          uVar22 = puVar17[5];
          uVar24 = param_2[1];
          uVar7 = param_2[2];
          uVar8 = param_2[3];
          uVar9 = param_2[4];
          uVar10 = param_2[5];
          uVar11 = param_2[6];
          *(undefined4 *)((int)puVar16 + 0x84) = *param_2;
          *(undefined4 *)(puVar16 + 0x11) = uVar24;
          *(undefined4 *)((int)puVar16 + 0x8c) = uVar7;
          *(undefined4 *)(puVar16 + 0x12) = uVar8;
          *(undefined4 *)((int)puVar16 + 0x94) = uVar9;
          *(undefined4 *)(puVar16 + 0x13) = uVar10;
          *(undefined4 *)((int)puVar16 + 0x9c) = uVar11;
          pcVar4 = (code *)*puVar3;
          puVar17[5] = uVar22;
          sVar26 = (*pcVar4)(uVar23);
          if (sVar26 != 0) goto LAB_00584760;
          pcVar4 = (code *)*puVar5;
          puVar17[5] = puVar17[5];
          iVar25 = (*pcVar4)(param_3[0x11]);
          if (param_3[0x11] == iVar25) goto LAB_00584760;
          pcVar4 = (code *)**(undefined4 **)(puVar16 + 0x19);
          puVar17[5] = puVar17[5];
          iVar25 = (*pcVar4)(uVar23,uVar21 - 0xf0,4);
          if (iVar25 != 0) {
            return iVar25;
          }
          pcVar4 = (code *)*puVar6;
          puVar17[5] = puVar17[5];
          (*pcVar4)(uVar23);
          uVar22 = puVar17[5];
          puVar12 = *(undefined4 **)((int)puVar16 + 0xc4);
          uVar24 = *(undefined4 *)((int)puVar16 + 0x8c);
          uVar7 = *(undefined4 *)(puVar16 + 0x12);
          uVar8 = *(undefined4 *)((int)puVar16 + 0x94);
          uVar9 = *(undefined4 *)(puVar16 + 0x13);
          uVar10 = *(undefined4 *)((int)puVar16 + 0x9c);
          uVar11 = *(undefined4 *)((int)puVar16 + 0x84);
          param_2[1] = *(undefined4 *)(puVar16 + 0x11);
          param_2[2] = uVar24;
          param_2[3] = uVar7;
          param_2[4] = uVar8;
          param_2[5] = uVar9;
          param_2[6] = uVar10;
          *param_2 = uVar11;
          pcVar4 = (code *)*puVar12;
          puVar17[5] = uVar22;
          (*pcVar4)(uVar23);
          uVar22 = puVar17[5];
          uVar24 = *param_2;
          uVar7 = param_2[2];
          uVar8 = param_2[3];
          uVar9 = param_2[4];
          uVar10 = param_2[5];
          uVar11 = param_2[6];
          *(undefined4 *)((int)puVar16 + 0xa4) = param_2[1];
          *(undefined4 *)(puVar16 + 0x15) = uVar7;
          *(undefined4 *)((int)puVar16 + 0xac) = uVar8;
          *(undefined4 *)(puVar16 + 0x16) = uVar9;
          *(undefined4 *)((int)puVar16 + 0xb4) = uVar10;
          *(undefined4 *)(puVar16 + 0x17) = uVar11;
          *(undefined4 *)(puVar16 + 0x14) = uVar24;
          pcVar4 = (code *)*puVar6;
          puVar17[5] = uVar22;
          (*pcVar4)(uVar23);
          uVar22 = puVar17[5];
          uVar24 = *(undefined4 *)((int)puVar16 + 0x8c);
          uVar7 = *(undefined4 *)((int)puVar16 + 0x84);
          uVar8 = *(undefined4 *)(puVar16 + 0x11);
          uVar9 = *(undefined4 *)(puVar16 + 0x12);
          uVar10 = *(undefined4 *)(puVar16 + 0x13);
          uVar11 = *(undefined4 *)((int)puVar16 + 0x9c);
          uVar13 = *param_1;
          param_2[4] = *(undefined4 *)((int)puVar16 + 0x94);
          uVar14 = *(undefined4 *)(puVar16 + 0xe);
          *param_2 = uVar7;
          param_2[2] = uVar24;
          param_2[1] = uVar8;
          param_2[3] = uVar9;
          param_2[5] = uVar10;
          param_2[6] = uVar11;
          FUN_005845c4(param_3,*(undefined1 *)(param_1 + 5),uVar13,param_2[0x11],uVar14,
                       ((ushort)bVar1 - sVar27) + -1,uVar23);
          iVar25 = FUN_005844cc(*param_3);
          piVar18 = (int *)(iVar25 * 4 + param_4);
          if (((*piVar18 == 0) &&
              (piVar20 = (int *)(iVar25 * 0x14 + 0xc60 + param_3[0x17]), piVar20 != (int *)0x0)) &&
             ((*piVar20 != 0 && ((piVar20[3] & param_1[1]) == piVar20[3])))) {
            bVar2 = *(byte *)(param_1 + 5);
            if ((bVar2 == 3) || (((2 < bVar2 && (bVar2 < 7)) && (1 < (uint)piVar20[4])))) {
              pcVar4 = (code *)*puVar6;
              puVar17[5] = uVar22;
              (*pcVar4)(uVar23);
              uVar22 = puVar17[5];
              uVar24 = *(undefined4 *)((int)puVar16 + 0x8c);
              uVar7 = *(undefined4 *)(puVar16 + 0x12);
              uVar8 = *(undefined4 *)((int)puVar16 + 0x9c);
              uVar9 = *(undefined4 *)((int)puVar16 + 0x84);
              uVar10 = *(undefined4 *)((int)puVar16 + 0x94);
              uVar11 = *(undefined4 *)(puVar16 + 0x13);
              param_2[1] = *(undefined4 *)(puVar16 + 0x11);
              param_2[2] = uVar24;
              param_2[3] = uVar7;
              param_2[6] = uVar8;
              *param_2 = uVar9;
              param_2[4] = uVar10;
              param_2[5] = uVar11;
              puVar12 = (undefined4 *)*piVar20;
              uVar24 = param_2[0x11];
              *(uint *)((int)puVar16 + 0x74) = (uint)*(byte *)(param_1 + 5);
              uVar7 = *(undefined4 *)(puVar16 + 0xe);
              *(undefined4 *)(param_5 + 0x18) = uVar24;
              uVar24 = param_3[0x10];
              *(undefined4 *)((int)puVar16 + 0x7c) = uVar7;
              uVar7 = *param_1;
              uVar8 = *(undefined4 *)(puVar16 + 0x18);
              *(undefined4 *)(param_5 + 0x24) = uVar24;
              *(undefined4 *)(param_5 + 0x1c) = uVar7;
              *(uint *)(param_5 + 0x20) = (uint)((ulonglong)uVar28 - 1 >> 0x3f);
              *(ushort *)(puVar16 + 0xf) = uVar28;
              *(undefined4 *)(puVar16 + 0x10) = uVar8;
              pcVar4 = (code *)*puVar12;
              puVar17[5] = uVar22;
              (*pcVar4)(uVar21 - 0xec,0,param_5);
              uVar22 = puVar17[5];
              *piVar18 = 1;
            }
          }
          uVar28 = uVar28 - 1;
          uVar24 = *(undefined4 *)((int)puVar16 + 0xac);
          uVar7 = *(undefined4 *)(puVar16 + 0x16);
          uVar8 = *(undefined4 *)((int)puVar16 + 0xb4);
          uVar9 = *(undefined4 *)(puVar16 + 0x17);
          sVar27 = sVar27 + 1;
          uVar10 = *(undefined4 *)(puVar16 + 0x15);
          uVar11 = *(undefined4 *)(puVar16 + 0x14);
          param_2[1] = *(undefined4 *)((int)puVar16 + 0xa4);
          *param_2 = uVar11;
          param_2[2] = uVar10;
          param_2[3] = uVar24;
          param_2[4] = uVar7;
          param_2[5] = uVar8;
          param_2[6] = uVar9;
          iVar25 = 0;
        } while (uVar28 != 0xffff);
      }
    }
  }
  return iVar25;
}


// 0x0584c54 (0x164 bytes)
undefined4 FUN_00584c54(int param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 uVar1;
  GPiece<36> local_a0;
  undefined4 local_7c;
  undefined4 local_78;
  undefined4 local_74;
  undefined4 local_70;
  undefined4 local_6c;
  undefined4 local_68;
  undefined4 local_64;
  undefined4 local_60;
  undefined4 local_5c;
  int local_58;
  GPiece<48> local_50;
  
  uVar1 = 0xffffffe6;
  if (*(int *)(param_1 + 8) == 0) {
    FUN_00587004(local_50,0,0,param_3,param_4,0xffffffff,1 << (*(uint *)(param_1 + 0xc) & 0x3f));
    local_7c = *(undefined4 *)(param_1 + 0x1c);
    local_78 = *(undefined4 *)(param_1 + 0x20);
    local_74 = *(undefined4 *)(param_1 + 0x24);
    local_70 = *(undefined4 *)(param_1 + 0x28);
    local_6c = *(undefined4 *)(param_1 + 0x2c);
    local_68 = *(undefined4 *)(param_1 + 0x30);
    local_64 = *(undefined4 *)(param_1 + 0x34);
    local_60 = *(undefined4 *)(param_1 + 0x38);
    local_5c = *(undefined4 *)(param_1 + 0x3c);
    local_58 = param_1;
    uVar1 = (*(code *)**(undefined4 **)(PTR_PTR_0071b720 + 0xc))(param_2,local_a0);
    *(undefined4 *)(param_1 + 0x34) = *(undefined4 *)(param_2 + 0x44);
    *(undefined4 *)(param_1 + 8) = *(undefined4 *)(param_2 + 0x44);
  }
  return uVar1;
}


// 0x0584db8 (0x1b0 bytes)
int FUN_00584db8(undefined4 *param_1)

{
  undefined4 *puVar1;
  code *pcVar2;
  undefined4 *puVar3;
  undefined4 uVar4;
  ulonglong *puVar5;
  ulonglong *puVar6;
  undefined *puVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  undefined4 uVar12;
  longlong lVar11;
  int iVar13;
  ulonglong unaff_r26;
  ulonglong unaff_r27;
  ulonglong unaff_r28;
  ulonglong unaff_r29;
  ulonglong unaff_r30;
  ulonglong unaff_r31;
  ulonglong in_LR;
  
  uVar8 = ZEXT48(&stack0x00000000);
  puVar5 = (ulonglong *)(uVar8 - 0xc0);
  *puVar5 = uVar8;
  puVar5[0x12] = unaff_r26;
  puVar7 = PTR_PTR_0071b720;
  puVar5[0x14] = unaff_r28;
  puVar5[0x13] = unaff_r27;
  puVar5[0x15] = unaff_r29;
  puVar5[0x16] = unaff_r30;
  puVar1 = *(undefined4 **)(puVar7 + 0x1c);
  puVar5[0x17] = unaff_r31;
  puVar5[0x1a] = in_LR;
  pcVar2 = (code *)*puVar1;
  puVar5[5] = ZEXT48(&TOC_BASE);
  uVar10 = (*pcVar2)(0x14);
  uVar9 = puVar5[5];
  puVar3 = *(undefined4 **)(puVar7 + 4);
  lVar11 = (uVar8 - 0xc0) - ((uVar10 & 0xffffffff) + 0x1e & 0xfffffffffffffff0);
  puVar6 = (ulonglong *)lVar11;
  *puVar6 = *puVar5;
  pcVar2 = (code *)*puVar1;
  puVar6[5] = uVar9;
  uVar9 = lVar11 + 0x70U & 0xffffffff;
  uVar12 = (*pcVar2)(0x14);
  pcVar2 = (code *)*puVar3;
  puVar6[5] = puVar6[5];
  (*pcVar2)(uVar9,uVar12);
  uVar10 = puVar6[5];
  uVar12 = param_1[0x12];
  iVar13 = *(int *)((int)uVar10 + -0x6c10);
  uVar4 = param_1[5];
  *(short *)(puVar5 + 0x10) = (short)*param_1;
  *(undefined4 *)((int)puVar5 + 0x7c) = uVar4;
  puVar1 = *(undefined4 **)(iVar13 + 0x28);
  *(byte *)((int)puVar5 + 0x82) = (byte)((uint)uVar12 >> 0x1c);
  uVar12 = param_1[0x11];
  pcVar2 = (code *)*puVar1;
  puVar6[5] = uVar10;
  lVar11 = (*pcVar2)(uVar12);
  uVar12 = param_1[3];
  *(undefined4 *)(puVar5 + 0xf) = param_1[4];
  *(int *)(puVar5 + 0xe) = (int)lVar11;
  iVar13 = -0x15;
  if (lVar11 != 0) {
    *(undefined4 *)((int)puVar5 + 0x74) = uVar12;
    iVar13 = FUN_005866d8(uVar9,uVar8 - 0x50);
    if (iVar13 == 0) {
      iVar13 = FUN_00584c54(param_1,uVar9,4,0x20);
      return iVar13;
    }
  }
  return iVar13;
}


// 0x0584f68 (0xe0 bytes)
int FUN_00584f68(int param_1,ulonglong param_2,undefined4 *param_3)

{
  int iVar1;
  int iVar2;
  
  iVar1 = FUN_00584464();
  iVar2 = -0x15;
  if (iVar1 != 0) {
    iVar2 = 0;
    if (*(uint *)(param_1 + 0x48) >> 0x1c != (uint)param_2) {
      *(uint *)(param_1 + 0x48) =
           *(uint *)(param_1 + 0x48) & 0xfffffff | (uint)((param_2 & 0xffffffff) << 0x1c);
      if ((param_2 & 0xffffffff) < 3) {
        *(undefined4 *)(param_1 + 0x50) = 0;
      }
      iVar2 = -0xb;
      if (*(int *)(param_1 + 0x5c) != 0) {
        iVar2 = FUN_00584db8(param_1);
        if (param_3 != (undefined4 *)0x0) {
          *param_3 = *(undefined4 *)(param_1 + 0x34);
        }
        if (iVar2 == 0) {
          *(undefined4 *)(param_1 + 4) = 1;
        }
      }
    }
  }
  return iVar2;
}


// 0x0585048 (0x50 bytes)
void FUN_00585048(int *param_1)

{
  *(undefined4 *)(param_1[0x17] + *param_1 * 4 + 0xc74) = 0;
  memset(param_1,0,0x60);
  return;
}


// 0x0585098 (0x78 bytes)
void FUN_00585098(int param_1,int param_2)

{
  if ((*(int *)(param_1 + 0x44) != 0) && (*(int *)(param_2 + 8) == *(int *)(param_1 + 0x44))) {
    if (*(int *)(param_2 + 4) == 2) {
      FUN_00585048(param_2);
    }
    *(undefined4 *)(param_2 + 4) = 0;
    *(undefined4 *)(param_2 + 8) = 0;
    return;
  }
  return;
}


// 0x0585110 (0x94 bytes)
void FUN_00585110(undefined8 param_1,int param_2,int param_3)

{
  int iVar1;
  
  if ((param_2 != 0) && (param_3 != 0)) {
    iVar1 = *(int *)(param_3 + 0x24);
    if (iVar1 != 0) {
      if (*(undefined4 **)(iVar1 + 0x18) != (undefined4 *)0x0) {
        (*(code *)**(undefined4 **)(iVar1 + 0x18))(0,param_2,iVar1 + 0x1c);
      }
      FUN_00585048(iVar1);
      return;
    }
  }
  return;
}


// 0x05851a4 (0x130 bytes)
// strings: 0067dcf8: 'Subscription Aborted'

void FUN_005851a4(int param_1)

{
  undefined4 *puVar1;
  int iVar2;
  uint uVar3;
  GPiece<16> local_50;
  
  if (param_1 != 0) {
    uVar3 = 0;
    puVar1 = *(undefined4 **)(PTR_PTR_0071b728 + 0x20);
    do {
      iVar2 = param_1 + uVar3 * 0x80 + (uVar3 & 0x7ffffff) * -0x20;
      uVar3 = uVar3 + 1;
      (*(code *)*puVar1)(iVar2,local_50);
      if (*(undefined4 **)(iVar2 + 0x18) != (undefined4 *)0x0) {
        *(undefined4 *)(iVar2 + 0x38) = 0xfffffc57;
        *(undefined4 *)(iVar2 + 0x3c) = 1;
        (*(code *)**(undefined4 **)(iVar2 + 0x18))(0,local_50,iVar2 + 0x1c);
      }
      memset(iVar2,0,0x60);
    } while (uVar3 != 0x20);
  }
  return;
}


// 0x05852d4 (0x11c bytes)
void FUN_005852d4(void)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  int iVar6;
  undefined4 local_40;
  undefined4 uStack_3c;
  undefined4 local_38;
  undefined4 local_34;
  
  puVar5 = PTR_PTR_0071b72c;
  puVar4 = PTR_DAT_0071b710;
  (*(code *)**(undefined4 **)(PTR_PTR_0071b72c + 0x18))
            (&local_40,*(undefined4 *)(PTR_DAT_0071b710 + 0xc));
  puVar1 = *(undefined4 **)(puVar5 + 0x10);
  puVar2 = *(undefined4 **)(puVar5 + 0x1c);
  puVar3 = *(undefined4 **)(puVar5 + 0x20);
  while( true ) {
    iVar6 = (*(code *)*puVar2)(*(undefined4 *)(puVar4 + 0xc),CONCAT44(local_40,uStack_3c));
    if (iVar6 != 0) break;
    (*(code *)*puVar3)(&local_38,*(undefined4 *)(puVar4 + 0xc),CONCAT44(local_40,uStack_3c));
    iVar6 = (*(code *)*puVar1)(*(undefined4 *)(puVar4 + 0xc),CONCAT44(local_40,uStack_3c));
    if (iVar6 != 0) {
      FUN_005851a4(iVar6);
    }
    local_40 = local_38;
    uStack_3c = local_34;
  }
  return;
}


// 0x05853f0 (0xe4 bytes)
void FUN_005853f0(int param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  int iVar3;
  undefined8 local_30 [2];
  
  puVar2 = PTR_PTR_0071b72c;
  puVar1 = PTR_DAT_0071b710;
  iVar3 = (*(code *)**(undefined4 **)(PTR_PTR_0071b72c + 0x10))
                    (*(undefined4 *)(PTR_DAT_0071b710 + 0xc),*(undefined8 *)(param_1 + 0xe8));
  if (iVar3 != 0) {
    FUN_005851a4(iVar3);
    (*(code *)**(undefined4 **)(puVar2 + 0x14))(local_30,*(undefined4 *)(puVar1 + 0xc),iVar3);
    (*(code *)**(undefined4 **)(puVar2 + 0xc))(*(undefined4 *)(puVar1 + 0xc),local_30[0]);
  }
  *(undefined4 *)(param_1 + 0xe8) = 0;
  *(undefined4 *)(param_1 + 0xec) = 0;
  return;
}


// 0x05854d4 (0x184 bytes)
int FUN_005854d4(undefined4 *param_1,undefined1 param_2)

{
  int iVar1;
  undefined4 *puVar2;
  code *pcVar3;
  undefined4 *puVar4;
  ulonglong *puVar5;
  ulonglong *puVar6;
  undefined *puVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  undefined4 uVar12;
  longlong lVar11;
  int iVar13;
  ulonglong unaff_r25;
  ulonglong unaff_r26;
  ulonglong unaff_r27;
  ulonglong unaff_r28;
  ulonglong unaff_r29;
  ulonglong unaff_r30;
  ulonglong unaff_r31;
  ulonglong in_LR;
  
  uVar8 = ZEXT48(&stack0x00000000);
  puVar5 = (ulonglong *)(uVar8 - 0xc0);
  *puVar5 = uVar8;
  puVar5[0x16] = unaff_r30;
  puVar5[0x1a] = in_LR;
  puVar5[0x12] = unaff_r26;
  puVar5[0x17] = unaff_r31;
  puVar5[0x11] = unaff_r25;
  iVar1 = param_1[0x17];
  puVar5[0x13] = unaff_r27;
  puVar5[0x14] = unaff_r28;
  puVar5[0x15] = unaff_r29;
  puVar7 = PTR_PTR_0071b720;
  iVar13 = -0xb;
  if (iVar1 != 0) {
    puVar2 = *(undefined4 **)(PTR_PTR_0071b720 + 0x1c);
    pcVar3 = (code *)*puVar2;
    puVar5[5] = ZEXT48(&TOC_BASE);
    uVar10 = (*pcVar3)(0x10);
    uVar9 = puVar5[5];
    puVar4 = *(undefined4 **)(puVar7 + 4);
    lVar11 = (uVar8 - 0xc0) - ((uVar10 & 0xffffffff) + 0x1e & 0xfffffffffffffff0);
    puVar6 = (ulonglong *)lVar11;
    *puVar6 = *puVar5;
    pcVar3 = (code *)*puVar2;
    puVar6[5] = uVar9;
    uVar9 = lVar11 + 0x70U & 0xffffffff;
    uVar12 = (*pcVar3)(0x10);
    pcVar3 = (code *)*puVar4;
    puVar6[5] = puVar6[5];
    (*pcVar3)(uVar9,uVar12);
    uVar10 = puVar6[5];
    iVar1 = *(int *)((int)uVar10 + -0x6c10);
    uVar12 = param_1[3];
    *(short *)((int)puVar5 + 0x74) = (short)*param_1;
    *(undefined4 *)(puVar5 + 0xf) = uVar12;
    *(undefined1 *)((int)puVar5 + 0x7c) = param_2;
    uVar12 = param_1[0x11];
    pcVar3 = (code *)**(undefined4 **)(iVar1 + 0x28);
    puVar6[5] = uVar10;
    lVar11 = (*pcVar3)(uVar12);
    iVar13 = -0x15;
    if (lVar11 != 0) {
      *(int *)(puVar5 + 0xe) = (int)lVar11;
      iVar13 = FUN_005864fc(uVar9,uVar8 - 0x50);
      if (iVar13 == 0) {
        iVar13 = FUN_00584c54(param_1,uVar9,4,0x21);
      }
    }
  }
  return iVar13;
}


// 0x0585658 (0xac bytes)
int FUN_00585658(int param_1,undefined4 *param_2)

{
  int iVar1;
  int iVar2;
  
  iVar1 = FUN_00584464();
  iVar2 = -0x15;
  if (iVar1 != 0) {
    iVar2 = FUN_005854d4(param_1,3);
    if (param_2 != (undefined4 *)0x0) {
      *param_2 = *(undefined4 *)(param_1 + 0x34);
    }
    if (iVar2 == 0) {
      *(undefined4 *)(param_1 + 4) = 1;
      return 0;
    }
  }
  return iVar2;
}


// 0x0585704 (0xac bytes)
int FUN_00585704(int param_1,undefined4 *param_2)

{
  int iVar1;
  int iVar2;
  
  iVar1 = FUN_00584464();
  iVar2 = -0x15;
  if (iVar1 != 0) {
    iVar2 = FUN_005854d4(param_1,2);
    if (param_2 != (undefined4 *)0x0) {
      *param_2 = *(undefined4 *)(param_1 + 0x34);
    }
    if (iVar2 == 0) {
      *(undefined4 *)(param_1 + 4) = 2;
      return 0;
    }
  }
  return iVar2;
}


// 0x05857b0 (0x50 bytes)
void FUN_005857b0(void)

{
  FUN_0058682c();
  FUN_005852d4();
  (*(code *)**(undefined4 **)(PTR_PTR_0071b72c + 4))(ZEXT48(PTR_DAT_0071b710) + 0xc);
  return;
}


// 0x0585800 (0x158 bytes)
undefined4 FUN_00585800(undefined8 param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined4 uVar4;
  int iVar5;
  
  puVar1 = PTR_DAT_0071b710;
  (*(code *)**(undefined4 **)PTR_PTR_0071b72c)(PTR_DAT_0071b710 + 0xc,0xc90,param_1);
  *(undefined4 *)puVar1 = 0;
  *(undefined4 *)(puVar1 + 4) = 0;
  *(undefined4 *)(puVar1 + 8) = 0;
  *(undefined4 *)(puVar1 + 0x18) = 0;
  *(undefined4 *)(puVar1 + 0x10) = 0;
  *(undefined4 *)(puVar1 + 0x14) = 0;
  uVar4 = FUN_005867bc();
  *(undefined4 *)(puVar1 + 0x10) = uVar4;
  uVar4 = FUN_005867bc();
  *(undefined4 *)(puVar1 + 0x14) = uVar4;
  uVar4 = FUN_005867bc();
  puVar3 = PTR_PTR_0071b734;
  puVar2 = PTR_PTR_0071b730;
  *(undefined4 *)(puVar1 + 0x18) = uVar4;
  iVar5 = FUN_00554770(0x22,4,puVar2,1,puVar3);
  puVar1 = PTR_PTR_0071b738;
  if ((iVar5 == 0) || (iVar5 == 0x3ea)) {
    iVar5 = FUN_00554770(0x20,4,0,1,PTR_PTR_0071b738);
    if ((iVar5 == 0) || (iVar5 == 0x3ea)) {
      iVar5 = FUN_00554770(0x21,4,0,1,puVar1);
      if ((iVar5 == 0) || (iVar5 == 0x3ea)) {
        return 0;
      }
    }
  }
  return 0xffffffff;
}


// 0x0585958 (0x4d0 bytes)
/* WARNING: Removing unreachable block (ram,0x00585c28) */

undefined4
FUN_00585958(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined4 *param_4)

{
  byte bVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  uint uVar12;
  int iVar13;
  undefined1 *puVar14;
  undefined1 *puVar15;
  byte in_cr0;
  byte in_cr1;
  byte in_cr2;
  byte in_cr3;
  byte unaff_cr4;
  byte in_cr5;
  byte in_cr6;
  byte in_cr7;
  uint uStack00000008;
  int local_180;
  GPiece<4> auStack_17c;
  GPiece<4> local_178;
  GPiece<12> local_174;
  GPiece<16> local_168;
  GPiece<12> auStack_158;
  uint local_14c;
  int local_148;
  GPiece<40> auStack_124;
  GPiece<140> auStack_fc;
  
  uStack00000008 =
       (uint)(in_cr0 & 0xf) << 0x1c | (uint)(in_cr1 & 0xf) << 0x18 | (uint)(in_cr2 & 0xf) << 0x14 |
       (uint)(in_cr3 & 0xf) << 0x10 | (uint)(unaff_cr4 & 0xf) << 0xc | (uint)(in_cr5 & 0xf) << 8 |
       (uint)(in_cr6 & 0xf) << 4 | (uint)(in_cr7 & 0xf);
  iVar9 = FUN_00582b0c(param_1,auStack_124,auStack_17c,&local_180,0);
  if (iVar9 != 0) goto LAB_005859d4;
  iVar9 = (*(code *)**(undefined4 **)(PTR_PTR_0071b72c + 0x10))
                    (*(undefined4 *)(PTR_DAT_0071b710 + 0xc),*(undefined8 *)(local_180 + 0xe8));
  if (iVar9 != 0) {
    bVar1 = *(byte *)(param_4 + 0x10);
    if (bVar1 == 2) {
LAB_00585c68:
      uVar2 = param_4[0x12];
      if (bVar1 == 4) {
        puVar14 = local_174;
        puVar15 = (undefined1 *)0x0;
        FUN_00587aac(param_4[0x14]);
      }
      else {
        puVar14 = (undefined1 *)0x0;
        puVar15 = local_168;
      }
      for (uVar12 = FUN_005844f0(uVar2,0,iVar9); uVar12 != 0x20;
          uVar12 = FUN_005844f0(uVar2,uVar12 + 1,iVar9)) {
        iVar10 = iVar9 + uVar12 * 0x80 + (uVar12 & 0x7ffffff) * -0x20;
        if (*(undefined4 **)(iVar10 + 0x18) != (undefined4 *)0x0) {
          (*(code *)**(undefined4 **)(iVar10 + 0x18))(puVar15,puVar14,auStack_124);
        }
        FUN_00585098(param_4,iVar10);
        if ((*(char *)(param_4 + 0x10) == '\x04') && (199 < (uint)param_4[0x15])) {
          FUN_00585048(iVar10);
        }
      }
    }
    else if (bVar1 < 3) {
      if (bVar1 == 0) {
LAB_00585a94:
        memset(auStack_fc,0,0x80);
        iVar10 = FUN_005865a8(param_4,auStack_158);
        if (((iVar10 == 0) && ((local_14c & 7) != 0)) && (local_148 != 0)) {
          iVar10 = 0;
          do {
            uVar12 = FUN_005844f0(local_148,iVar10,iVar9);
            if (uVar12 == 0x20) goto LAB_00585bd0;
            uVar2 = param_4[4];
            uVar3 = param_4[5];
            uVar4 = param_4[6];
            uVar5 = *param_4;
            uVar6 = param_4[3];
            iVar13 = iVar9 + uVar12 * 0x80 + (uVar12 & 0x7ffffff) * -0x20;
            uVar7 = param_4[1];
            uVar8 = param_4[2];
            iVar11 = FUN_005846a4(auStack_158,param_4,iVar13,auStack_fc,auStack_124);
            *param_4 = uVar5;
            param_4[1] = uVar7;
            param_4[2] = uVar8;
            param_4[3] = uVar6;
            param_4[4] = uVar2;
            param_4[5] = uVar3;
            param_4[6] = uVar4;
            FUN_00585098(param_4,iVar13);
            iVar10 = uVar12 + 1;
          } while (iVar11 == 0);
          *(undefined4 *)(iVar13 + 0x34) = param_4[0x11];
          *(undefined4 *)(iVar13 + 0x3c) = 1;
          *(undefined4 *)(iVar13 + 0x38) = 0xfffffc3a;
          FUN_00587aac(0xfffffffffffffc3a);
          if (*(undefined4 **)(iVar13 + 0x18) != (undefined4 *)0x0) {
            (*(code *)**(undefined4 **)(iVar13 + 0x18))(0,local_174,iVar13 + 0x1c);
          }
        }
      }
    }
    else {
      if (bVar1 == 3) goto LAB_00585a94;
      if (bVar1 == 4) goto LAB_00585c68;
    }
  }
LAB_00585bd0:
  if (param_4[0x11] != 0) {
    (*(code *)**(undefined4 **)(PTR_PTR_0071b728 + 0x10))
              (local_180 + 0xf0,param_4[0x11],param_1,local_178);
  }
LAB_005859d4:
  return param_4[0xf];
}


// 0x0585e28 (0x138 bytes)
undefined4
FUN_00585e28(undefined4 *param_1,int param_2,int param_3,undefined4 param_4,int param_5,int param_6)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 uVar4;
  
  if ((((param_2 == 0) && (param_5 != 0)) && (param_3 != 0)) &&
     ((param_1 != (undefined4 *)0x0 && (param_6 != 0)))) {
    iVar3 = FUN_005827f8(param_6);
    uVar2 = 0xfffffff5;
    if (iVar3 != 0) {
      iVar3 = (*(code *)**(undefined4 **)(PTR_PTR_0071b72c + 0x10))
                        (*(undefined4 *)(PTR_DAT_0071b710 + 0xc),*(undefined8 *)(iVar3 + 0xe8));
      uVar2 = *(undefined4 *)(param_6 + 0x24);
      puVar1 = *(undefined4 **)(PTR_PTR_0071b718 + 0x28);
      *(int *)(iVar3 + 0xc60) = param_5;
      *(undefined4 *)(iVar3 + 0xc64) = uVar2;
      *(int *)(iVar3 + 0xc68) = param_3;
      *(undefined4 *)(iVar3 + 0xc70) = param_4;
      uVar4 = (*(code *)*puVar1)(param_3);
      uVar2 = 0;
      *(undefined4 *)(iVar3 + 0xc6c) = uVar4;
      *param_1 = (int *)(iVar3 + 0xc60);
    }
  }
  else {
    uVar2 = 0xffffffeb;
  }
  return uVar2;
}


// 0x0585f60 (0x2d8 bytes)
int FUN_00585f60(int *param_1,ulonglong param_2,undefined4 param_3,undefined4 param_4,int param_5,
                ulonglong param_6,int param_7,undefined4 *param_8)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined *puVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  int *piVar8;
  int iVar9;
  undefined4 *puVar10;
  longlong lVar11;
  
  if (((((param_8 != (undefined4 *)0x0) && (param_7 != 0)) && (param_1 != (int *)0x0)) &&
      ((param_5 != 0 && ((param_6 & 0xffffffff) < 5)))) && ((param_2 & 0xffffffff) < 3)) {
    iVar5 = (*(code *)**(undefined4 **)(PTR_PTR_0071b718 + 0x34))(param_5);
    puVar4 = PTR_DAT_0071b710;
    iVar9 = (int)((param_2 & 0x3fffffff) << 2);
    if (*(int *)(PTR_DAT_0071b710 + iVar9 + 0x10) == iVar5) {
      iVar5 = FUN_005827f8(param_8);
      if ((iVar5 == 0) ||
         (iVar5 = (*(code *)**(undefined4 **)(PTR_PTR_0071b72c + 0x10))
                            (*(undefined4 *)(puVar4 + 0xc),*(undefined8 *)(iVar5 + 0xe8)),
         iVar5 == 0)) {
        return -0xb;
      }
      if (*(int *)(iVar5 + iVar9 + 0xc74) != 0) {
        return -0xd;
      }
      uVar7 = 0;
      *(undefined4 *)(iVar5 + 0xc88) = *param_8;
      *(undefined4 *)(iVar5 + 0xc8c) = param_8[1];
      lVar11 = 0x20;
      piVar8 = (int *)(iVar5 + 0x18);
      while (*piVar8 != 0) {
        uVar7 = uVar7 + 1;
        lVar11 = lVar11 + -1;
        piVar8 = piVar8 + 0x18;
        if (lVar11 == 0) {
          return -0x17;
        }
      }
      if (uVar7 == 0x20) {
        return -0x17;
      }
      puVar10 = (undefined4 *)(iVar5 + uVar7 * 0x80 + (uVar7 & 0x7ffffff) * -0x20);
      puVar10[3] = uVar7;
      uVar1 = *param_8;
      uVar2 = param_8[1];
      uVar3 = param_8[3];
      puVar10[9] = param_8[2];
      puVar10[7] = uVar1;
      puVar10[8] = uVar2;
      puVar10[10] = uVar3;
      uVar1 = param_8[4];
      uVar2 = param_8[5];
      uVar3 = param_8[7];
      puVar10[0xd] = param_8[6];
      puVar10[0xe] = uVar3;
      puVar10[0xb] = uVar1;
      puVar10[0xc] = uVar2;
      uVar1 = param_8[8];
      uVar2 = param_8[9];
      puVar10[0x12] = puVar10[0x12] & 0xfffffff | (uint)((param_6 & 0xffffffff) << 0x1c);
      puVar10[0xf] = uVar1;
      puVar10[0x10] = uVar2;
      puVar10[5] = param_4;
      puVar10[4] = param_3;
      uVar1 = *param_8;
      puVar10[0x17] = iVar5;
      puVar10[0x15] = uVar1;
      uVar1 = param_8[1];
      puVar10[6] = param_7;
      puVar10[0x16] = uVar1;
      puVar10[0x11] = param_5;
      *puVar10 = (int)param_2;
      puVar10[0x13] = 0;
      iVar6 = FUN_00584db8(puVar10);
      param_8[6] = puVar10[0xd];
      if (iVar6 != 0) {
        memset(puVar10,0,0x60);
        return iVar6;
      }
      *param_1 = (int)puVar10;
      puVar10[1] = 1;
      *(undefined4 *)(iVar5 + iVar9 + 0xc74) = 1;
      return 0;
    }
  }
  return -0x15;
}


// 0x0586238 (0x114 bytes)
undefined4 FUN_00586238(int param_1,undefined8 param_2)

{
  undefined4 *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  int iVar6;
  undefined4 uStack00000038;
  undefined4 uStack0000003c;
  undefined4 local_40;
  undefined4 uStack_3c;
  
  puVar3 = PTR_PTR_0071b72c;
  puVar2 = PTR_DAT_0071b710;
  puVar1 = *(undefined4 **)(PTR_PTR_0071b72c + 0x10);
  uStack0000003c = (undefined4)param_2;
  uVar5 = uStack0000003c;
  uStack00000038 = (undefined4)((ulonglong)param_2 >> 0x20);
  uVar4 = uStack00000038;
  _uStack00000038 = param_2;
  iVar6 = (*(code *)*puVar1)(*(undefined4 *)(PTR_DAT_0071b710 + 0xc),*(undefined8 *)(param_1 + 0xe8)
                            );
  if (iVar6 == 0) {
    (*(code *)**(undefined4 **)(puVar3 + 0x24))(&local_40,*(undefined4 *)(puVar2 + 0xc));
    iVar6 = (*(code *)*puVar1)(*(undefined4 *)(puVar2 + 0xc),CONCAT44(local_40,uStack_3c));
    if (iVar6 != 0) {
      *(undefined4 *)(iVar6 + 0xc80) = uVar4;
      *(undefined4 *)(iVar6 + 0xc84) = uVar5;
      *(undefined4 *)(param_1 + 0xec) = uStack_3c;
      *(undefined4 *)(param_1 + 0xe8) = local_40;
      return 0;
    }
  }
  return 0xffffffff;
}


// 0x058634c (0x1b0 bytes)
// strings: 0067dcf8: 'Subscription Aborted'

void FUN_0058634c(int param_1,undefined8 param_2)

{
  undefined4 *puVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  int iStack00000038;
  int iStack0000003c;
  GPiece<16> local_60;
  
  iStack0000003c = (int)param_2;
  iVar4 = iStack0000003c;
  iStack00000038 = (int)((ulonglong)param_2 >> 0x20);
  iVar3 = iStack00000038;
  if ((param_1 != 0) &&
     (_iStack00000038 = param_2,
     iVar5 = (*(code *)**(undefined4 **)(PTR_PTR_0071b72c + 0x10))
                       (*(undefined4 *)(PTR_DAT_0071b710 + 0xc),*(undefined8 *)(param_1 + 0xe8)),
     iVar5 != 0)) {
    uVar6 = 0;
    puVar1 = *(undefined4 **)(PTR_PTR_0071b728 + 0x20);
    do {
      while( true ) {
        uVar2 = uVar6 & 0x7ffffff;
        iVar7 = uVar6 * 0x80;
        uVar6 = uVar6 + 1;
        iVar7 = iVar5 + iVar7 + uVar2 * -0x20;
        if ((*(int *)(iVar7 + 0x54) != iVar3) || (*(int *)(iVar7 + 0x58) != iVar4)) break;
        (*(code *)*puVar1)(iVar7,local_60);
        *(undefined4 *)(iVar7 + 0x38) = 0xfffffc57;
        if (*(undefined4 **)(iVar7 + 0x18) != (undefined4 *)0x0) {
          *(undefined4 *)(iVar7 + 0x3c) = 1;
          (*(code *)**(undefined4 **)(iVar7 + 0x18))(0,local_60,iVar7 + 0x1c);
        }
        memset(iVar7,0,0x60);
        if (uVar6 == 0x20) {
          return;
        }
      }
    } while (uVar6 != 0x20);
  }
  return;
}


// 0x05864fc (0xac bytes)
undefined4 FUN_005864fc(undefined8 param_1,int param_2)

{
  int iVar1;
  
  iVar1 = FUN_00553f04(param_1,param_2);
  if (iVar1 != 0) {
    iVar1 = FUN_00554160(param_1,param_2 + 4);
    if (iVar1 != 0) {
      iVar1 = FUN_00553f04(param_1,param_2 + 8);
      if ((iVar1 != 0) && (iVar1 = FUN_00554290(param_1,param_2 + 0xc), iVar1 != 0)) {
        return 0;
      }
    }
  }
  return 0xffffffeb;
}


// 0x05865a8 (0x130 bytes)
undefined4 FUN_005865a8(undefined8 param_1,int *param_2)

{
  int iVar1;
  
  iVar1 = FUN_00553f04(param_1,param_2);
  if ((iVar1 != 0) &&
     ((*param_2 != 0 ||
      ((((iVar1 = FUN_00553f04(param_1,param_2 + 1), iVar1 != 0 &&
         (iVar1 = FUN_00553f04(param_1,param_2 + 2), iVar1 != 0)) &&
        (iVar1 = FUN_00553f04(param_1,param_2 + 3), iVar1 != 0)) &&
       (((iVar1 = FUN_00553f04(param_1,param_2 + 4), iVar1 != 0 &&
         (iVar1 = FUN_00554290(param_1,param_2 + 5), iVar1 != 0)) &&
        (iVar1 = FUN_00554290(param_1,(int)param_2 + 0x15), iVar1 != 0)))))))) {
    return 0;
  }
  return 0xffffffeb;
}


// 0x05866d8 (0xe4 bytes)
undefined4 FUN_005866d8(undefined8 param_1,int param_2)

{
  int iVar1;
  
  iVar1 = FUN_00553f04(param_1,param_2);
  if (iVar1 != 0) {
    iVar1 = FUN_00553f04(param_1,param_2 + 8);
    if (iVar1 != 0) {
      iVar1 = FUN_00553f04(param_1,param_2 + 4);
      if (iVar1 != 0) {
        iVar1 = FUN_00553f04(param_1,param_2 + 0xc);
        if (iVar1 != 0) {
          iVar1 = FUN_00554160(param_1,param_2 + 0x10);
          if ((iVar1 != 0) && (iVar1 = FUN_00554290(param_1,param_2 + 0x12), iVar1 != 0)) {
            return 0;
          }
        }
      }
    }
  }
  return 0xffffffeb;
}


// 0x05867bc (0x70 bytes)
int FUN_005867bc(void)

{
  undefined *puVar1;
  int iVar2;
  
  puVar1 = PTR_DAT_0071b73c;
  iVar2 = *(int *)PTR_DAT_0071b73c;
  if (iVar2 == 0) {
    iVar2 = (*(code *)**(undefined4 **)PTR_PTR_0071b740)(0,PTR_PTR_0071b744,0x2c);
    *(int *)puVar1 = iVar2;
  }
  return iVar2;
}


// 0x058682c (0x60 bytes)
void FUN_0058682c(void)

{
  undefined *puVar1;
  
  puVar1 = PTR_DAT_0071b73c;
  if (*(int *)PTR_DAT_0071b73c != 0) {
    (*(code *)**(undefined4 **)(PTR_PTR_0071b740 + 4))(*(int *)PTR_DAT_0071b73c);
    *(undefined4 *)puVar1 = 0;
  }
  return;
}


// 0x058688c (0x28 bytes)
undefined4 FUN_0058688c(void)

{
  undefined4 uVar1;
  
  uVar1 = FUN_00553f04();
  return uVar1;
}


// 0x05868b4 (0x28 bytes)
undefined4 FUN_005868b4(void)

{
  undefined4 uVar1;
  
  uVar1 = FUN_00554290();
  return uVar1;
}


// 0x05868dc (0x3c bytes)
undefined * FUN_005868dc(void)

{
  int *piVar1;
  longlong lVar2;
  
  lVar2 = 6;
  piVar1 = (int *)PTR_PTR_0071b748;
  do {
    if (*piVar1 == 0) {
      return (undefined *)0x0;
    }
    lVar2 = lVar2 + -1;
    piVar1 = piVar1 + 1;
  } while (lVar2 != 0);
  return PTR_PTR_0071b748;
}


// 0x0586918 (0x4 bytes)
void FUN_00586918(void)

{
  return;
}


// 0x058691c (0x38 bytes)
uint FUN_0058691c(undefined8 param_1,ushort *param_2,uint param_3)

{
  uint uVar1;
  ulonglong uVar2;
  
  uVar1 = 0;
  if (0 < (int)param_3) {
    uVar2 = (ulonglong)param_3;
    do {
      uVar1 = uVar1 | 1 << (*param_2 & 0x3f);
      uVar2 = uVar2 - 1;
      param_2 = param_2 + 1;
    } while (uVar2 != 0);
  }
  return uVar1;
}


// 0x0586954 (0x14 bytes)
int FUN_00586954(ushort *param_1,ushort *param_2)

{
  return (uint)*param_1 - (uint)*param_2;
}


// 0x0586968 (0x40 bytes)
undefined4 * FUN_00586968(undefined4 *param_1,int *param_2,longlong param_3,int param_4)

{
  ushort uVar1;
  int iVar2;
  int iVar3;
  
  iVar3 = (int)(param_3 << 3);
  iVar2 = *(int *)(*param_2 + 8);
  uVar1 = *(ushort *)((int)param_2 + iVar3 + 0xc);
  param_1[1] = (uint)*(ushort *)((int)param_2 + iVar3 + 0x12) + param_4;
  *param_1 = *(undefined4 *)((uint)uVar1 * 4 + iVar2);
  return param_1;
}


// 0x05869a8 (0xbc bytes)
uint FUN_005869a8(int param_1,uint param_2)

{
  ulonglong uVar1;
  uint uVar2;
  
  uVar2 = 0xffffffffU >> (0x1f - param_2 & 0x3f) & *(uint *)(param_1 + 4);
  uVar1 = ((ulonglong)uVar2 & 0x55555555) + ((ulonglong)(uVar2 >> 1) & 0x55555555);
  uVar1 = (uVar1 & 0x33333333) + ((uVar1 << 0x20) >> 0x22 & 0x33333333);
  uVar1 = (uVar1 & 0xf0f0f0f) + ((uVar1 << 0x20) >> 0x24 & 0xf0f0f0f);
  uVar2 = 0xffff;
  uVar1 = (uVar1 & 0xff00ff) + ((uVar1 << 0x20) >> 0x28 & 0xff00ff);
  uVar1 = ((uVar1 & 0xffff) + ((uVar1 << 0x20) >> 0x30)) - 1;
  uVar1 = uVar1 & (longlong)((int)~(uint)uVar1 >> 0x1f);
  if (*(ushort *)(param_1 + (int)((uVar1 & 0xffffffff) << 3) + 0xc) == param_2) {
    uVar2 = (uint)uVar1 & 0xffff;
  }
  return uVar2;
}


// 0x0586a64 (0xf0 bytes)
undefined4 * FUN_00586a64(undefined4 *param_1,int param_2,undefined2 param_3,int param_4)

{
  undefined4 uVar1;
  short sVar2;
  
  if (param_2 != 0) {
    if (param_4 == 0) {
      uVar1 = *(undefined4 *)PTR_DAT_0071b74c;
      param_1[1] = *(undefined4 *)(PTR_DAT_0071b74c + 4);
      *param_1 = uVar1;
      return param_1;
    }
    sVar2 = FUN_005869a8(param_2,param_3);
    if (sVar2 != -1) {
      FUN_00586968(param_1,param_2,sVar2,param_4);
      return param_1;
    }
  }
  uVar1 = *(undefined4 *)PTR_DAT_0071b74c;
  param_1[1] = *(undefined4 *)(PTR_DAT_0071b74c + 4);
  *param_1 = uVar1;
  return param_1;
}


// 0x0586b54 (0x38 bytes)
undefined4 * FUN_00586b54(undefined4 *param_1,int *param_2,longlong param_3,undefined4 param_4)

{
  int iVar1;
  
  iVar1 = *(int *)(*param_2 + 8);
  param_1[1] = param_4;
  *param_1 = *(undefined4 *)
              ((uint)*(ushort *)((int)param_2 + (int)(param_3 << 3) + 0xc) * 4 + iVar1);
  return param_1;
}


// 0x0586b8c (0x44 bytes)
undefined2 FUN_00586b8c(int param_1,ulonglong param_2)

{
  undefined2 uVar1;
  
  param_2 = param_2 & 0xffff;
  uVar1 = 0xffff;
  if (((param_1 != 0) && (param_2 < 0x20)) && (param_2 < *(ushort *)(param_1 + 8))) {
    uVar1 = *(undefined2 *)(param_1 + (int)(param_2 << 3) + 0xc);
  }
  return uVar1;
}


// 0x0586bd0 (0x24 bytes)
undefined2 FUN_00586bd0(void)

{
  undefined2 uVar1;
  
  uVar1 = FUN_005869a8();
  return uVar1;
}


// 0x0586bf4 (0x8 bytes)
undefined2 FUN_00586bf4(int param_1)

{
  return *(undefined2 *)(param_1 + 8);
}


// 0x0586bfc (0x8 bytes)
undefined2 FUN_00586bfc(int param_1)

{
  return *(undefined2 *)(param_1 + 10);
}


// 0x0586c04 (0x1c bytes)
int FUN_00586c04(int param_1)

{
  int iVar1;
  
  iVar1 = 0;
  if (param_1 != 0) {
    iVar1 = *(ushort *)(param_1 + 10) - 8;
  }
  return iVar1;
}


// 0x0586c20 (0x18 bytes)
undefined4 FUN_00586c20(int param_1)

{
  undefined4 uVar1;
  
  uVar1 = 0;
  if (param_1 != 0) {
    uVar1 = *(undefined4 *)(param_1 + 4);
  }
  return uVar1;
}


// 0x0586c38 (0x10 bytes)
void FUN_00586c38(undefined8 param_1,undefined4 *param_2)

{
  FUN_0058691c(param_1,*param_2,(uint)param_2[1] >> 1 & 0xffff);
  return;
}


// 0x0586c48 (0x18 bytes)
undefined4 FUN_00586c48(undefined4 *param_1)

{
  undefined4 uVar1;
  
  uVar1 = 0;
  if (param_1 != (undefined4 *)0x0) {
    uVar1 = *param_1;
  }
  return uVar1;
}


// 0x0586c60 (0xc bytes)
undefined4 FUN_00586c60(int *param_1)

{
  return *(undefined4 *)(*param_1 + 0xc);
}


// 0x0586c6c (0x8 bytes)
undefined8 FUN_00586c6c(void)

{
  return 0xffffffffffffffec;
}


// 0x0586c74 (0x8 bytes)
undefined8 FUN_00586c74(void)

{
  return 0xffffffffffffffec;
}


// 0x0586c7c (0x108 bytes)
undefined4
FUN_00586c7c(undefined4 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
            undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  uint uVar1;
  short sVar2;
  undefined4 uVar3;
  undefined2 *puVar4;
  undefined1 *puVar5;
  short sVar6;
  undefined8 uStack00000040;
  undefined8 uStack00000048;
  undefined8 uStack00000050;
  undefined8 uStack00000058;
  undefined8 uStack00000060;
  undefined8 uStack00000068;
  GPiece<2> local_6c;
  undefined2 auStack_6a [37];
  
  uStack00000040 = param_3;
  uStack00000048 = param_4;
  uStack00000050 = param_5;
  uStack00000058 = param_6;
  uStack00000060 = param_7;
  uStack00000068 = param_8;
  memset(local_6c,0,0x42);
  sVar6 = 1;
  puVar4 = auStack_6a;
  puVar5 = (undefined1 *)&stack0x00000040;
  do {
    uVar1 = *(uint *)(puVar5 + 4);
    *puVar4 = (short)uVar1;
    sVar2 = sVar6;
    if ((uVar1 & 0xffff) == 0) goto LAB_00586d2c;
    sVar6 = sVar6 + 1;
    puVar4 = puVar4 + 1;
    puVar5 = puVar5 + 8;
  } while (sVar6 != 0x20);
  sVar2 = 0x20;
LAB_00586d2c:
  FUN_005c8308(local_6c,sVar2,2,PTR_PTR_0071b750);
  uVar3 = FUN_0058691c(param_1,local_6c,sVar6);
  return uVar3;
}


// 0x0586d84 (0x68 bytes)
undefined4 FUN_00586d84(int param_1)

{
  int iVar1;
  int iStack00000030;
  
  if ((param_1 != 0) && (*(int *)(param_1 + 4) != 0)) {
    *(undefined4 *)(param_1 + 4) = 0;
    iStack00000030 = param_1;
    iVar1 = FUN_005519f0(&stack0x00000030);
    if (iVar1 == 0) {
      return 0;
    }
  }
  return 0xffffffeb;
}


// 0x0586dec (0x218 bytes)
/* WARNING: Removing unreachable block (ram,0x00586e98) */
/* WARNING: Removing unreachable block (ram,0x00586ffc) */
/* WARNING: Removing unreachable block (ram,0x00586ec0) */
/* WARNING: Removing unreachable block (ram,0x00586efc) */
/* WARNING: Removing unreachable block (ram,0x00586f60) */
/* WARNING: Removing unreachable block (ram,0x00586fa0) */
/* WARNING: Removing unreachable block (ram,0x00586f20) */
/* WARNING: Removing unreachable block (ram,0x00586f54) */
/* WARNING: Removing unreachable block (ram,0x00586f1c) */
/* WARNING: Removing unreachable block (ram,0x00586ff4) */
/* WARNING: Removing unreachable block (ram,0x00586fa4) */
/* WARNING: Removing unreachable block (ram,0x00586fb8) */
/* WARNING: Removing unreachable block (ram,0x00586fd0) */
/* WARNING: Removing unreachable block (ram,0x00586fdc) */

undefined4 FUN_00586dec(int param_1,int param_2)

{
  GPiece<24> local_50;
  
  if ((param_1 != 0) && (param_2 != 0)) {
    FUN_00551de8(local_50,(ulonglong)*(ushort *)(param_2 + 6) * 8 + 0xc);
  }
  return 0;
}


// 0x0587004 (0x34 bytes)
undefined4 *
FUN_00587004(undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5,undefined4 param_6,undefined4 param_7)

{
  param_1[6] = 0;
  param_1[5] = param_7;
  param_1[4] = param_6;
  param_1[3] = param_5;
  param_1[2] = param_4;
  param_1[1] = param_3;
  *param_1 = param_2;
  param_1[8] = 0;
  param_1[7] = 0;
  return param_1;
}


// 0x0587038 (0xc bytes)
int FUN_00587038(int param_1)

{
  return param_1 + 0xb8;
}


// 0x0587044 (0x1a0 bytes)
undefined4 FUN_00587044(int param_1,int param_2)

{
  byte bVar1;
  int iVar2;
  undefined4 uVar3;
  GPiece<24> local_30;
  
  if ((param_1 == 0) || (param_2 == 0)) {
    return 0xffffffeb;
  }
  iVar2 = FUN_00553f04(param_1,param_2 + 0x3c);
  if (((iVar2 == 0) || (iVar2 = FUN_00554290(param_1,param_2 + 0x38), iVar2 == 0)) ||
     (iVar2 = FUN_00554290(param_1,param_2 + 0x40), iVar2 == 0)) {
LAB_005870b8:
    uVar3 = 0xfffffff6;
  }
  else {
    if (*(char *)(param_2 + 0x40) != '\0') {
      iVar2 = FUN_00553f04(param_1,param_2 + 0x44);
      if ((iVar2 == 0) || (iVar2 = FUN_00553f04(param_1,param_2 + 0x48), iVar2 == 0))
      goto LAB_005870b8;
      bVar1 = *(byte *)(param_2 + 0x40);
      if (1 < bVar1) {
        iVar2 = FUN_00553f04(param_1,param_2 + 0x4c);
        if (iVar2 == 0) goto LAB_005870b8;
        bVar1 = *(byte *)(param_2 + 0x40);
      }
      if (bVar1 == 4) {
        iVar2 = FUN_00553f04(param_1,param_2 + 0x54);
        if ((iVar2 == 0) || (iVar2 = FUN_00553f04(param_1,local_30), iVar2 == 0)) goto LAB_005870b8;
        iVar2 = FUN_00553f04(param_1,param_2 + 0x58);
        if (iVar2 == 0) {
          return 0xfffffff6;
        }
      }
    }
    uVar3 = 0;
  }
  return uVar3;
}


// 0x05871e4 (0x1dc bytes)
int FUN_005871e4(int param_1,int param_2)

{
  undefined4 uVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  undefined4 uVar5;
  GPiece<32> local_50;
  
  if ((param_1 == 0) || (param_2 == 0)) {
    iVar2 = -0x15;
  }
  else {
    uVar1 = *(undefined4 *)(param_1 + 4);
    iVar2 = FUN_00587044(local_50,param_1);
    if (iVar2 == 0) {
      iVar4 = *(int *)(param_1 + 0xc) - *(int *)(param_1 + 0x28);
      *(int *)(param_1 + 0x3c) =
           iVar4 - ((*(int *)(param_1 + 0x14) >> 0x1f) - *(int *)(param_1 + 0x14) >> 0x1f);
      iVar2 = FUN_00553f04(local_50,param_1 + 0x3c);
      if (iVar2 != 0) {
        if (iVar4 == 0) {
          uVar5 = *(undefined4 *)(param_1 + 4);
        }
        else {
          uVar5 = *(undefined4 *)(param_1 + 0x28);
          FUN_005c6094(uVar5,uVar1,0);
        }
        iVar2 = 0;
        if (*(char *)(param_1 + 0x40) == '\x01') {
          iVar2 = param_1 + 0x44;
        }
        uVar3 = (*(code *)**(undefined4 **)(PTR_PTR_0071b754 + 0x2c))
                          (*(undefined4 *)(param_2 + 0x18),*(undefined4 *)(param_2 + 8),
                           *(undefined4 *)(param_2 + 0xc),*(undefined4 *)(param_1 + 0x3c),uVar5,0,
                           iVar2,0);
        return ((int)((((int)uVar3 >> 0x1f ^ uVar3) - ((int)uVar3 >> 0x1f)) + -1) >> 0x1f & 5U) - 5;
      }
    }
    iVar2 = -10;
  }
  return iVar2;
}


// 0x05873c0 (0xf0 bytes)
undefined4 FUN_005873c0(int param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  longlong lVar1;
  ulonglong *puVar2;
  int iVar3;
  ulonglong uVar4;
  undefined4 uVar5;
  ulonglong unaff_r25;
  ulonglong unaff_r26;
  ulonglong unaff_r27;
  ulonglong unaff_r28;
  ulonglong unaff_r29;
  ulonglong uVar6;
  ulonglong unaff_r30;
  ulonglong unaff_r31;
  ulonglong in_LR;
  
  lVar1 = ZEXT48(&stack0x00000000) - 0xb0;
  puVar2 = (ulonglong *)lVar1;
  *puVar2 = ZEXT48(&stack0x00000000);
  puVar2[0xf] = unaff_r25;
  puVar2[0x10] = unaff_r26;
  puVar2[0x12] = unaff_r28;
  puVar2[0x14] = unaff_r30;
  puVar2[0x15] = unaff_r31;
  puVar2[0x11] = unaff_r27;
  puVar2[0x13] = unaff_r29;
  puVar2[0x18] = in_LR;
  if ((param_1 == 0) || (-1 < param_2)) {
    uVar5 = 0xffffffeb;
  }
  else {
    uVar4 = FUN_00587038(0);
    lVar1 = lVar1 - ((uVar4 & 0xffffffff) + 0x1e & 0xfffffffffffffff0);
    *(ulonglong *)lVar1 = *puVar2;
    uVar6 = lVar1 + 0x70;
    uVar4 = uVar6 & 0xffffffff;
    FUN_005876b8(uVar4);
    iVar3 = (int)uVar6;
    *(undefined4 *)(iVar3 + 0x44) = *(undefined4 *)(param_1 + 0x10);
    *(undefined4 *)(iVar3 + 0x48) = *(undefined4 *)(param_1 + 0x14);
    *(undefined4 *)(iVar3 + 0x54) = param_3;
    *(int *)(iVar3 + 0x50) = param_2;
    *(undefined4 *)(iVar3 + 0x58) = param_4;
    *(undefined1 *)(iVar3 + 0x40) = 4;
    *(int *)(iVar3 + 0x4c) = param_2;
    uVar5 = FUN_005871e4(uVar4,param_1);
  }
  return uVar5;
}


// 0x05874b0 (0xf8 bytes)
undefined4 FUN_005874b0(int param_1,int param_2)

{
  longlong lVar1;
  ulonglong *puVar2;
  int iVar3;
  ulonglong uVar4;
  undefined4 uVar5;
  ulonglong unaff_r27;
  ulonglong unaff_r28;
  ulonglong unaff_r29;
  ulonglong uVar6;
  ulonglong unaff_r30;
  ulonglong unaff_r31;
  ulonglong in_LR;
  
  lVar1 = ZEXT48(&stack0x00000000) - 0xa0;
  puVar2 = (ulonglong *)lVar1;
  *puVar2 = ZEXT48(&stack0x00000000);
  puVar2[0xf] = unaff_r27;
  puVar2[0x12] = unaff_r30;
  puVar2[0x13] = unaff_r31;
  puVar2[0x16] = in_LR;
  puVar2[0x10] = unaff_r28;
  puVar2[0x11] = unaff_r29;
  if ((param_1 != 0) && (-1 < param_2)) {
    uVar4 = FUN_00587038(0);
    lVar1 = lVar1 - ((uVar4 & 0xffffffff) + 0x1e & 0xfffffffffffffff0);
    *(ulonglong *)lVar1 = *puVar2;
    uVar6 = lVar1 + 0x70;
    uVar4 = uVar6 & 0xffffffff;
    FUN_005876b8(uVar4);
    iVar3 = (int)uVar6;
    *(undefined4 *)(iVar3 + 0x44) = *(undefined4 *)(param_1 + 0x10);
    uVar5 = *(undefined4 *)(param_1 + 0x14);
    *(int *)(iVar3 + 0x4c) = param_2;
    *(undefined1 *)(iVar3 + 0x40) = 2;
    *(undefined4 *)(iVar3 + 0x48) = uVar5;
    uVar5 = FUN_005871e4(uVar4,param_1);
    return uVar5;
  }
  return 0xffffffeb;
}


// 0x05875a8 (0xd0 bytes)
int FUN_005875a8(int param_1,int param_2)

{
  undefined4 uVar1;
  int iVar2;
  
  iVar2 = -0x15;
  if (param_1 != 0) {
    if (param_2 != 0) {
      iVar2 = (*(code *)**(undefined4 **)(PTR_PTR_0071b754 + 0x18))
                        (*(undefined4 *)(param_2 + 0x18),param_1 + 0x44);
      if (iVar2 == 0) {
        uVar1 = *(undefined4 *)(param_2 + 0x14);
        *(undefined1 *)(param_1 + 0x40) = 1;
        *(undefined4 *)(param_1 + 0x48) = uVar1;
        iVar2 = FUN_005871e4(param_1,param_2);
        return iVar2;
      }
    }
  }
  return iVar2;
}


// 0x0587678 (0x40 bytes)
undefined8 FUN_00587678(int param_1,int param_2)

{
  undefined8 uVar1;
  
  if (param_1 == 0) {
    return 0xffffffffffffffeb;
  }
  if (param_2 == 0) {
    return 0xffffffffffffffeb;
  }
  *(undefined4 *)(param_1 + 0x44) = *(undefined4 *)(param_2 + 0x10);
  *(undefined4 *)(param_1 + 0x48) = *(undefined4 *)(param_2 + 0x14);
  *(undefined1 *)(param_1 + 0x40) = 3;
  uVar1 = FUN_005871e4(param_1,param_2);
  return uVar1;
}


// 0x05876b8 (0xe4 bytes)
undefined4 FUN_005876b8(undefined4 *param_1,uint param_2)

{
  undefined4 uVar1;
  
  uVar1 = 0xffffffeb;
  if ((param_1 != (undefined4 *)0x0) && (0x5b < param_2)) {
    memset(param_1,0,0x5c);
    FUN_0055442c(param_1,param_1 + 0x17,(int)param_1 + param_2,1);
    uVar1 = 0;
    *(undefined1 *)(param_1 + 0xe) = 1;
    param_1[7] = *param_1;
    param_1[8] = param_1[1];
    param_1[9] = param_1[2];
    param_1[10] = param_1[3] + 0x5c;
    param_1[0xb] = param_1[4];
    param_1[0xc] = param_1[5];
    param_1[0xd] = param_1[6];
    param_1[3] = param_1[3] + 0x5c;
  }
  return uVar1;
}


// 0x058779c (0xec bytes)
int FUN_0058779c(undefined4 *param_1,int param_2)

{
  int iVar1;
  
  iVar1 = -0x15;
  if ((param_1 != (undefined4 *)0x0) && (param_2 != 0)) {
    memset(param_1,0,0x5c);
    FUN_0055442c(param_1,param_2,param_2 + 0x5c,2);
    param_1[10] = param_1[3];
    param_1[7] = *param_1;
    param_1[8] = param_1[1];
    param_1[9] = param_1[2];
    param_1[0xb] = param_1[4];
    param_1[0xc] = param_1[5];
    param_1[0xd] = param_1[6];
    iVar1 = FUN_00587044(param_1,param_1);
    if (iVar1 == 0) {
      param_1[2] = param_1[1] + param_1[0xf];
    }
  }
  return iVar1;
}


// 0x0587888 (0x4c bytes)
void FUN_00587888(int param_1,undefined4 *param_2)

{
  if (*(int *)(param_1 + 0x10) != 1) {
    return;
  }
  FUN_00553b40(param_1,*param_2,param_2[1]);
  return;
}


// 0x05878d4 (0x1d8 bytes)
void FUN_005878d4(int param_1,int *param_2)

{
  undefined4 *puVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  puVar1 = (undefined4 *)*param_2;
  if (*(int *)(param_1 + 0x10) == 1) {
    iVar3 = FUN_00553b40(param_1,puVar1,param_2[1]);
    if (iVar3 == 0) {
LAB_00587a28:
      param_2[1] = *(int *)(param_1 + 0xc) - *(int *)(param_1 + 4);
      return;
    }
  }
  else if (puVar1 != (undefined4 *)0x0) {
    iVar3 = *(int *)(param_1 + 0xc);
    memset(puVar1,0,0x5c);
    iVar2 = FUN_00587044(param_1,puVar1);
    if (iVar2 == 0) {
      iVar2 = puVar1[0xf];
      iVar3 = *(int *)(param_1 + 0xc) - iVar3;
      FUN_0055442c(puVar1,puVar1 + 0xe,(int)puVar1 + iVar2 + 0x38,2);
      iVar4 = iVar3 + puVar1[3];
      puVar1[7] = *puVar1;
      puVar1[8] = puVar1[1];
      puVar1[9] = puVar1[2];
      puVar1[0xb] = puVar1[4];
      puVar1[0xc] = puVar1[5];
      puVar1[0xd] = puVar1[6];
      puVar1[10] = puVar1[3];
      puVar1[3] = iVar4;
      if (((*(char *)(puVar1 + 0x10) != '\x03') || (iVar2 = iVar2 - iVar3, iVar2 == 0)) ||
         (iVar3 = FUN_00553b40(param_1,iVar4,iVar2), iVar3 != 0)) goto LAB_00587a28;
    }
  }
  param_2[1] = -1;
  return;
}


// 0x0587aac (0x54 bytes)
// strings: 0067dd30: 'MediusAccountAlreadyExists' | 0067dd50: 'MediusAccountNotFound'

undefined4 FUN_00587aac(int param_1)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  
  iVar2 = 0;
  piVar3 = (int *)PTR_DAT_0071b758;
  if (param_1 != -1000) {
    do {
      iVar2 = iVar2 + 1;
      iVar1 = *piVar3;
      if (iVar1 == 0xffffff) break;
      piVar3 = piVar3 + 2;
    } while (iVar1 != param_1);
  }
  return *(undefined4 *)(PTR_DAT_0071b75c + iVar2 * 8 + 4);
}


// 0x0587b00 (0x221c bytes)
undefined8 FUN_00587b00(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  
  FUN_00554770(0x30,4,0,1,PTR_PTR_0071b760);
  FUN_00554770(1,1,0,1,PTR_PTR_0071b764);
  FUN_00554770(0x8f,4,PTR_PTR_0071b768,1,PTR_PTR_0071b76c);
  FUN_00554770(2,1,0,1,PTR_PTR_0071b770);
  FUN_00554770(3,1,0,1,PTR_PTR_0071b774);
  FUN_00554770(0x8b,4,0,1,PTR_PTR_0071b778);
  FUN_00554770(4,1,PTR_PTR_0071b77c,1,PTR_PTR_0071b780);
  FUN_00554770(5,1,0,1,PTR_PTR_0071b784);
  FUN_00554770(6,1,PTR_PTR_0071b788,1,PTR_PTR_0071b78c);
  puVar1 = PTR_PTR_0071b790;
  FUN_00554770(7,1,0,1,PTR_PTR_0071b790);
  puVar2 = PTR_PTR_0071b798;
  FUN_00554770(8,1,PTR_PTR_0071b794,1,PTR_PTR_0071b798);
  FUN_00554770(0x58,4,0,1,PTR_PTR_0071b79c);
  FUN_00554770(0x59,4,PTR_PTR_0071b7a0,1,PTR_PTR_0071b7a4);
  FUN_00554770(9,1,0,1,PTR_PTR_0071b7a8);
  FUN_00554770(10,1,PTR_PTR_0071b7ac,1,PTR_PTR_0071b7b0);
  FUN_00554770(0xf,1,0,1,PTR_PTR_0071b7b4);
  puVar3 = PTR_PTR_0071b7bc;
  FUN_00554770(0x10,1,PTR_PTR_0071b7b8,1,PTR_PTR_0071b7bc);
  FUN_00554770(0x11,1,0,1,PTR_PTR_0071b7c0);
  FUN_00554770(0x12,1,PTR_PTR_0071b7c4,1,puVar3);
  FUN_00554770(0x13,1,0,1,PTR_PTR_0071b7c8);
  FUN_00554770(0x14,1,PTR_PTR_0071b7cc,1,puVar3);
  FUN_00554770(0x15,1,0,1,PTR_PTR_0071b7d0);
  FUN_00554770(0x16,1,PTR_PTR_0071b7d4,1,puVar3);
  FUN_00554770(0x17,1,0,1,PTR_PTR_0071b7d8);
  FUN_00554770(0x18,1,PTR_PTR_0071b7dc,1,PTR_PTR_0071b7e0);
  FUN_00554770(0x19,1,0,1,PTR_PTR_0071b7e4);
  FUN_00554770(0x1a,1,PTR_PTR_0071b7e8,1,puVar2);
  FUN_00554770(0x4a,4,0,1,puVar1);
  FUN_00554770(0x4b,4,PTR_PTR_0071b7ec,1,puVar2);
  FUN_00554770(0x4c,4,0,1,puVar1);
  FUN_00554770(0x4d,4,PTR_PTR_0071b7f0,1,puVar2);
  FUN_00554770(0x4e,4,0,1,PTR_PTR_0071b7f4);
  FUN_00554770(0x4f,4,PTR_PTR_0071b7f8,1,PTR_PTR_0071b7fc);
  FUN_00554770(0x50,4,0,1,PTR_PTR_0071b800);
  FUN_00554770(0x51,4,PTR_PTR_0071b804,1,PTR_PTR_0071b808);
  FUN_00554770(0x52,4,0,1,PTR_PTR_0071b80c);
  FUN_00554770(0x53,4,PTR_PTR_0071b810,1,PTR_PTR_0071b814);
  FUN_00554770(0x1b,1,0,1,PTR_PTR_0071b818);
  FUN_00554770(0x1c,1,PTR_PTR_0071b81c,1,PTR_PTR_0071b820);
  FUN_00554770(0x2f,4,0,1,PTR_PTR_0071b824);
  FUN_00554770(0x1e,1,PTR_PTR_0071b828,1,PTR_PTR_0071b82c);
  FUN_00554770(0x65,4,0,1,PTR_PTR_0071b830);
  FUN_00554770(0x66,4,PTR_PTR_0071b834,1,PTR_PTR_0071b838);
  FUN_00554770(0x87,4,0,1,PTR_PTR_0071b83c);
  FUN_00554770(0x8e,4,PTR_PTR_0071b840,1,PTR_PTR_0071b844);
  FUN_00554770(0x5d,4,0,1,PTR_PTR_0071b848);
  FUN_00554770(0x5e,4,PTR_PTR_0071b84c,1,PTR_PTR_0071b850);
  FUN_00554770(0x88,4,0,1,PTR_PTR_0071b854);
  FUN_00554770(0x89,4,PTR_PTR_0071b858,1,puVar3);
  FUN_00554770(0x94,4,0,1,PTR_PTR_0071b85c);
  FUN_00554770(0x95,4,PTR_PTR_0071b860,1,PTR_PTR_0071b864);
  FUN_00554770(0x8a,4,PTR_PTR_0071b868,1,PTR_PTR_0071b86c);
  FUN_00554770(0x92,4,0,1,PTR_PTR_0071b870);
  FUN_00554770(0x93,4,PTR_PTR_0071b874,1,puVar3);
  FUN_00554770(0x79,4,0,1,PTR_PTR_0071b878);
  FUN_00554770(0x7a,4,PTR_PTR_0071b87c,1,puVar3);
  FUN_00554770(0x14,4,0,1,PTR_PTR_0071b880);
  FUN_00554770(0x22,1,PTR_PTR_0071b884,1,PTR_PTR_0071b888);
  FUN_00554770(0xf3,1,0,1,PTR_PTR_0071b88c);
  FUN_00554770(0x24,1,PTR_PTR_0071b890,1,PTR_PTR_0071b894);
  FUN_00554770(0x25,1,0,1,PTR_PTR_0071b898);
  FUN_00554770(0x26,1,PTR_PTR_0071b89c,1,PTR_PTR_0071b8a0);
  FUN_00554770(0x71,4,0,1,PTR_PTR_0071b8a4);
  FUN_00554770(0x72,4,PTR_PTR_0071b8a8,1,PTR_PTR_0071b8ac);
  FUN_00554770(0x27,1,0,1,PTR_PTR_0071b8b0);
  FUN_00554770(0x28,1,PTR_PTR_0071b8b4,1,PTR_PTR_0071b8b8);
  FUN_00554770(0x90,4,0,1,PTR_PTR_0071b8bc);
  FUN_00554770(0x91,4,PTR_PTR_0071b8c0,1,PTR_PTR_0071b8c4);
  puVar1 = PTR_PTR_0071b8c8;
  FUN_00554770(0x29,1,0,1,PTR_PTR_0071b8c8);
  FUN_00554770(0x2a,1,PTR_PTR_0071b8cc,1,PTR_PTR_0071b8d0);
  FUN_00554770(0x69,4,0,1,puVar1);
  FUN_00554770(0x6a,4,PTR_PTR_0071b8d4,1,PTR_PTR_0071b8d8);
  FUN_00554770(0x2b,1,0,1,PTR_PTR_0071b8dc);
  FUN_00554770(0x2c,1,PTR_PTR_0071b8e0,1,PTR_PTR_0071b8e4);
  FUN_00554770(0x2d,1,0,1,PTR_PTR_0071b8e8);
  FUN_00554770(0x2e,1,PTR_PTR_0071b8ec,1,PTR_PTR_0071b8f0);
  FUN_00554770(0x2f,1,0,1,PTR_PTR_0071b8f4);
  FUN_00554770(0x30,1,PTR_PTR_0071b8f8,1,PTR_PTR_0071b8fc);
  FUN_00554770(0x31,1,0,1,PTR_PTR_0071b900);
  FUN_00554770(0x32,1,PTR_PTR_0071b904,1,PTR_PTR_0071b908);
  FUN_00554770(0x35,4,0,1,PTR_PTR_0071b90c);
  FUN_00554770(0x36,4,PTR_PTR_0071b910,1,PTR_PTR_0071b914);
  FUN_00554770(0x35,1,0,1,PTR_PTR_0071b918);
  FUN_00554770(0x36,1,PTR_PTR_0071b91c,1,PTR_PTR_0071b920);
  FUN_00554770(0x37,1,0,1,PTR_PTR_0071b924);
  FUN_00554770(0x38,1,PTR_PTR_0071b928,1,PTR_PTR_0071b92c);
  FUN_00554770(0x39,1,0,1,PTR_PTR_0071b930);
  FUN_00554770(0x3a,1,PTR_PTR_0071b934,1,PTR_PTR_0071b938);
  FUN_00554770(0x3d,1,0,1,PTR_PTR_0071b93c);
  FUN_00554770(0x3e,1,PTR_PTR_0071b940,1,PTR_PTR_0071b944);
  FUN_00554770(0x3f,1,0,1,PTR_PTR_0071b948);
  FUN_00554770(0x40,1,PTR_PTR_0071b94c,1,PTR_PTR_0071b950);
  FUN_00554770(0x41,1,0,1,PTR_PTR_0071b954);
  FUN_00554770(0x42,1,PTR_PTR_0071b958,1,PTR_PTR_0071b95c);
  puVar1 = PTR_PTR_0071b960;
  FUN_00554770(5,4,0,1,PTR_PTR_0071b960);
  FUN_00554770(99,4,0,1,puVar1);
  puVar1 = PTR_PTR_0071b968;
  FUN_00554770(0x44,1,PTR_PTR_0071b964,1,PTR_PTR_0071b968);
  FUN_00554770(100,4,PTR_PTR_0071b96c,1,puVar1);
  puVar1 = PTR_PTR_0071b970;
  FUN_00554770(0x54,4,0,1,PTR_PTR_0071b970);
  FUN_00554770(0x55,4,PTR_PTR_0071b974,1,PTR_PTR_0071b978);
  FUN_00554770(0x56,4,0,1,puVar1);
  FUN_00554770(0x57,4,PTR_PTR_0071b97c,1,PTR_PTR_0071b980);
  FUN_00554770(0x47,1,0,1,PTR_PTR_0071b984);
  FUN_00554770(0x48,1,PTR_PTR_0071b988,1,PTR_PTR_0071b98c);
  FUN_00554770(0x49,1,PTR_PTR_0071b990,1,PTR_PTR_0071b994);
  FUN_00554770(0x4b,1,0,1,PTR_PTR_0071b998);
  FUN_00554770(0x4c,1,0,1,PTR_PTR_0071b99c);
  FUN_00554770(0x4d,1,PTR_PTR_0071b9a0,1,PTR_PTR_0071b9a4);
  FUN_00554770(0x4e,1,0,1,PTR_PTR_0071b9a8);
  FUN_00554770(0x4f,1,PTR_PTR_0071b9ac,1,PTR_PTR_0071b9b0);
  FUN_00554770(0x31,4,0,1,PTR_PTR_0071b9b4);
  FUN_00554770(0x51,1,PTR_PTR_0071b9b8,1,PTR_PTR_0071b9bc);
  FUN_00554770(0x53,1,PTR_PTR_0071b9c0,1,PTR_PTR_0071b9c4);
  FUN_00554770(0x54,1,0,1,PTR_PTR_0071b9c8);
  FUN_00554770(0x55,1,PTR_PTR_0071b9cc,1,PTR_PTR_0071b9d0);
  FUN_00554770(0x56,1,0,1,PTR_PTR_0071b9d4);
  FUN_00554770(0x57,1,PTR_PTR_0071b9d8,1,PTR_PTR_0071b9dc);
  FUN_00554770(0x58,1,0,1,PTR_PTR_0071b9e0);
  FUN_00554770(0x59,1,PTR_PTR_0071b9e4,1,PTR_PTR_0071b9e8);
  FUN_00554770(0x5a,1,0,1,PTR_PTR_0071b9ec);
  FUN_00554770(0x5b,1,PTR_PTR_0071b9f0,1,PTR_PTR_0071b9f4);
  FUN_00554770(0x5c,1,0,1,PTR_PTR_0071b9f8);
  FUN_00554770(0x5d,1,PTR_PTR_0071b9fc,1,PTR_PTR_0071ba00);
  FUN_00554770(0x5e,1,0,1,PTR_PTR_0071ba04);
  FUN_00554770(0x5f,1,PTR_PTR_0071ba08,1,PTR_PTR_0071ba0c);
  FUN_00554770(0x60,1,0,1,PTR_PTR_0071ba10);
  FUN_00554770(0x61,1,PTR_PTR_0071ba14,1,PTR_PTR_0071ba18);
  FUN_00554770(0x62,1,0,1,PTR_PTR_0071ba1c);
  FUN_00554770(0xee,1,0,1,PTR_PTR_0071ba20);
  FUN_00554770(99,1,PTR_PTR_0071ba24,1,PTR_PTR_0071ba28);
  FUN_00554770(100,1,0,1,PTR_PTR_0071ba2c);
  FUN_00554770(0x65,1,PTR_PTR_0071ba30,1,PTR_PTR_0071ba34);
  FUN_00554770(0x66,1,0,1,PTR_PTR_0071ba38);
  FUN_00554770(0x67,1,PTR_PTR_0071ba3c,1,PTR_PTR_0071ba40);
  FUN_00554770(0x68,1,0,1,PTR_PTR_0071ba44);
  FUN_00554770(0x69,1,PTR_PTR_0071ba48,1,PTR_PTR_0071ba4c);
  FUN_00554770(0x6a,1,0,1,PTR_PTR_0071ba50);
  FUN_00554770(0x6b,1,PTR_PTR_0071ba54,1,PTR_PTR_0071ba58);
  FUN_00554770(0x6c,1,0,1,PTR_PTR_0071ba5c);
  FUN_00554770(0x77,4,PTR_PTR_0071ba60,1,PTR_PTR_0071ba64);
  FUN_00554770(0x6e,1,0,1,PTR_PTR_0071ba68);
  FUN_00554770(0x6f,1,PTR_PTR_0071ba6c,1,PTR_PTR_0071ba70);
  FUN_00554770(0x70,1,0,1,PTR_PTR_0071ba74);
  FUN_00554770(0x71,1,PTR_PTR_0071ba78,1,PTR_PTR_0071ba7c);
  FUN_00554770(0x72,1,0,1,PTR_PTR_0071ba80);
  FUN_00554770(0x73,1,PTR_PTR_0071ba84,1,PTR_PTR_0071ba88);
  FUN_00554770(0x74,1,0,1,PTR_PTR_0071ba8c);
  FUN_00554770(0x75,1,PTR_PTR_0071ba90,1,PTR_PTR_0071ba94);
  FUN_00554770(0x76,1,0,1,PTR_PTR_0071ba98);
  FUN_00554770(0x77,1,PTR_PTR_0071ba9c,1,PTR_PTR_0071baa0);
  FUN_00554770(0x78,1,0,1,PTR_PTR_0071baa4);
  FUN_00554770(0x79,1,PTR_PTR_0071baa8,1,PTR_PTR_0071baac);
  FUN_00554770(0x7a,1,0,1,PTR_PTR_0071bab0);
  FUN_00554770(0x7b,1,PTR_PTR_0071bab4,1,PTR_PTR_0071bab8);
  FUN_00554770(0x7c,1,0,1,PTR_PTR_0071babc);
  FUN_00554770(0x7d,1,PTR_PTR_0071bac0,1,PTR_PTR_0071bac4);
  FUN_00554770(0x80,1,0,1,PTR_PTR_0071bac8);
  FUN_00554770(0x81,1,PTR_PTR_0071bacc,1,PTR_PTR_0071bad0);
  FUN_00554770(0x82,1,0,1,PTR_PTR_0071bad4);
  FUN_00554770(0x83,1,PTR_PTR_0071bad8,1,PTR_PTR_0071badc);
  FUN_00554770(0x84,1,0,1,PTR_PTR_0071bae0);
  FUN_00554770(0x85,1,PTR_PTR_0071bae4,1,PTR_PTR_0071bae8);
  FUN_00554770(0x86,1,0,1,PTR_PTR_0071baec);
  FUN_00554770(0x87,1,PTR_PTR_0071baf0,1,PTR_PTR_0071baf4);
  FUN_00554770(0x88,1,0,1,PTR_PTR_0071baf8);
  FUN_00554770(0x89,1,PTR_PTR_0071bafc,1,PTR_PTR_0071bb00);
  FUN_00554770(0x8a,1,0,1,PTR_PTR_0071bb04);
  FUN_00554770(0x8b,1,PTR_PTR_0071bb08,1,PTR_PTR_0071bb0c);
  FUN_00554770(0x8c,1,0,1,PTR_PTR_0071bb10);
  FUN_00554770(0x8d,1,PTR_PTR_0071bb14,1,PTR_PTR_0071bb18);
  FUN_00554770(0x90,1,0,1,PTR_PTR_0071bb1c);
  FUN_00554770(0x91,1,PTR_PTR_0071bb20,1,PTR_PTR_0071bb24);
  FUN_00554770(0x75,4,0,1,PTR_PTR_0071bb28);
  FUN_00554770(0x76,4,PTR_PTR_0071bb2c,1,PTR_PTR_0071bb30);
  FUN_00554770(0x9b,1,0,1,PTR_PTR_0071bb34);
  FUN_00554770(0x9c,1,PTR_PTR_0071bb38,1,PTR_PTR_0071bb3c);
  FUN_00554770(0x9d,1,0,1,PTR_PTR_0071bb40);
  FUN_00554770(0x9e,1,PTR_PTR_0071bb44,1,PTR_PTR_0071bb48);
  FUN_00554770(0x9f,1,0,1,PTR_PTR_0071bb4c);
  FUN_00554770(0xa0,1,PTR_PTR_0071bb50,1,PTR_PTR_0071bb54);
  FUN_00554770(0xa1,1,0,1,PTR_PTR_0071bb58);
  FUN_00554770(0xa2,1,PTR_PTR_0071bb5c,1,PTR_PTR_0071bb60);
  FUN_00554770(0x7b,4,0,1,PTR_PTR_0071bb64);
  FUN_00554770(0xa4,1,PTR_PTR_0071bb68,1,PTR_PTR_0071b7bc);
  FUN_00554770(0xa5,1,0,1,PTR_PTR_0071bb6c);
  FUN_00554770(0xa6,1,PTR_PTR_0071bb70,1,PTR_PTR_0071bb74);
  FUN_00554770(0xa7,1,0,1,PTR_PTR_0071bb78);
  FUN_00554770(0xa8,1,PTR_PTR_0071bb7c,1,PTR_PTR_0071bb80);
  FUN_00554770(0xa9,1,PTR_PTR_0071bb84,1,PTR_PTR_0071bb88);
  FUN_00554770(0xaa,1,0,1,PTR_PTR_0071bb8c);
  FUN_00554770(0xab,1,PTR_PTR_0071bb90,1,PTR_PTR_0071bb94);
  FUN_00554770(0xac,1,0,1,PTR_PTR_0071bb98);
  FUN_00554770(0xad,1,PTR_PTR_0071bb9c,1,PTR_PTR_0071bba0);
  FUN_00554770(0xae,1,0,1,PTR_PTR_0071bba4);
  FUN_00554770(0xaf,1,PTR_PTR_0071bba8,1,PTR_PTR_0071bbac);
  FUN_00554770(0xb0,1,0,1,PTR_PTR_0071bbb0);
  FUN_00554770(0xb1,1,PTR_PTR_0071bbb4,1,PTR_PTR_0071bbb8);
  FUN_00554770(0xb2,1,0,1,PTR_PTR_0071bbbc);
  FUN_00554770(0xb3,1,PTR_PTR_0071bbc0,1,PTR_PTR_0071bbc4);
  FUN_00554770(0x44,4,0,1,PTR_PTR_0071bbc8);
  FUN_00554770(0x45,4,PTR_PTR_0071bbcc,1,PTR_PTR_0071bbd0);
  FUN_00554770(0xb4,1,0,1,PTR_PTR_0071bbd4);
  FUN_00554770(0xb5,1,PTR_PTR_0071bbd8,1,PTR_PTR_0071bbdc);
  FUN_00554770(0xb7,1,PTR_PTR_0071bbe0,1,PTR_PTR_0071bbe4);
  puVar1 = PTR_PTR_0071bbe8;
  FUN_00554770(0xb8,1,0,1,PTR_PTR_0071bbe8);
  puVar2 = PTR_PTR_0071bbf0;
  FUN_00554770(0xb9,1,PTR_PTR_0071bbec,1,PTR_PTR_0071bbf0);
  FUN_00554770(0x46,4,0,1,puVar1);
  FUN_00554770(0x47,4,PTR_PTR_0071bbf4,1,puVar2);
  FUN_00554770(0xba,1,0,1,PTR_PTR_0071bbf8);
  FUN_00554770(0xbb,1,PTR_PTR_0071bbfc,1,PTR_PTR_0071bc00);
  FUN_00554770(0xbe,1,0,1,PTR_PTR_0071bc04);
  FUN_00554770(0xbf,1,PTR_PTR_0071bc08,1,PTR_PTR_0071bc0c);
  FUN_00554770(0xc0,1,0,1,PTR_PTR_0071bc10);
  FUN_00554770(0xc1,1,PTR_PTR_0071bc14,1,PTR_PTR_0071bc18);
  FUN_00554770(0xc2,1,0,1,PTR_PTR_0071bc1c);
  FUN_00554770(0xc3,1,PTR_PTR_0071bc20,1,PTR_PTR_0071bc24);
  FUN_00554770(0xc4,1,0,1,PTR_PTR_0071bc28);
  FUN_00554770(0xc5,1,PTR_PTR_0071bc2c,1,PTR_PTR_0071bc30);
  FUN_00554770(0xc6,1,0,1,PTR_PTR_0071bc34);
  puVar1 = PTR_PTR_0071b7bc;
  FUN_00554770(199,1,PTR_PTR_0071bc38,1,PTR_PTR_0071b7bc);
  FUN_00554770(0xc9,1,PTR_PTR_0071bc3c,1,PTR_PTR_0071bc40);
  FUN_00554770(0xca,1,PTR_PTR_0071bc44,1,0);
  FUN_00554770(0xd6,1,0,1,PTR_PTR_0071bc48);
  FUN_00554770(0xd7,1,PTR_PTR_0071bc4c,1,PTR_PTR_0071bc50);
  FUN_00554770(0xda,1,0,1,PTR_PTR_0071bc54);
  FUN_00554770(0xdb,1,PTR_PTR_0071bc58,1,PTR_PTR_0071bc5c);
  FUN_00554770(0xdc,1,0,1,PTR_PTR_0071bc60);
  FUN_00554770(0xdd,1,PTR_PTR_0071bc64,1,PTR_PTR_0071bc68);
  FUN_00554770(0x37,4,0,1,PTR_PTR_0071bc6c);
  FUN_00554770(0x38,4,PTR_PTR_0071bc70,1,PTR_PTR_0071bc74);
  FUN_00554770(0x96,4,0,1,PTR_PTR_0071bc78);
  FUN_00554770(0x97,4,PTR_PTR_0071bc7c,1,PTR_PTR_0071bc80);
  FUN_00554770(0x1f,4,0,1,PTR_PTR_0071bc84);
  FUN_00554770(0xed,1,PTR_PTR_0071bc88,1,PTR_PTR_0071bc8c);
  FUN_00554770(0xf5,1,0,1,PTR_PTR_0071bc90);
  puVar2 = PTR_PTR_0071bc98;
  FUN_00554770(0xf6,1,PTR_PTR_0071bc94,1,PTR_PTR_0071bc98);
  FUN_00554770(0xf7,1,0,1,PTR_PTR_0071bc9c);
  FUN_00554770(0xf8,1,PTR_PTR_0071bca0,1,puVar2);
  FUN_00554770(0xf9,1,0,1,PTR_PTR_0071bca4);
  FUN_00554770(0xfa,1,PTR_PTR_0071bca8,1,puVar1);
  FUN_00554770(0xfb,1,0,1,PTR_PTR_0071bcac);
  FUN_00554770(0xfc,1,PTR_PTR_0071bcb0,1,puVar1);
  FUN_00554770(1,4,0,1,PTR_PTR_0071bcb4);
  FUN_00554770(2,4,PTR_PTR_0071bcb8,1,PTR_PTR_0071bcbc);
  FUN_00554770(6,4,PTR_PTR_0071bcc0,1,PTR_PTR_0071bcc4);
  FUN_00554770(7,4,PTR_PTR_0071bcc8,1,PTR_PTR_0071bccc);
  FUN_00554770(8,4,0,1,PTR_PTR_0071bcd0);
  FUN_00554770(9,4,PTR_PTR_0071bcd4,1,PTR_PTR_0071bcd8);
  FUN_00554770(10,4,PTR_PTR_0071bcdc,1,PTR_PTR_0071bce0);
  FUN_00554770(0x10,4,PTR_PTR_0071bce4,1,0);
  FUN_00554770(200,1,0,1,PTR_PTR_0071bce8);
  FUN_00554770(0x11,4,PTR_PTR_0071bcec,1,PTR_PTR_0071bcf0);
  FUN_00554770(0x12,4,0,1,PTR_PTR_0071bcf4);
  FUN_00554770(0x86,4,0,1,PTR_PTR_0071bcf8);
  FUN_00554770(0x13,4,PTR_PTR_0071bcfc,1,PTR_PTR_0071bd00);
  FUN_00554770(0x5b,4,PTR_PTR_0071bd04,1,PTR_PTR_0071bd08);
  FUN_00554770(0x5c,4,PTR_PTR_0071bd0c,1,PTR_PTR_0071bd10);
  FUN_00554770(0x18,4,0,1,PTR_PTR_0071bd14);
  FUN_00554770(0x19,4,PTR_PTR_0071bd18,1,PTR_PTR_0071bd1c);
  FUN_00554770(0x1e,4,PTR_PTR_0071bd20,1,0);
  FUN_00554770(0x73,4,PTR_PTR_0071bd24,1,PTR_PTR_0071bd28);
  FUN_00554770(0x74,4,PTR_PTR_0071bd2c,1,PTR_PTR_0071bd30);
  FUN_00554770(0x25,4,0,1,PTR_PTR_0071bd34);
  FUN_00554770(0x26,4,PTR_PTR_0071bd38,1,PTR_PTR_0071bd3c);
  FUN_00554770(0x28,4,0,1,PTR_PTR_0071bd40);
  FUN_00554770(0x29,4,PTR_PTR_0071bd44,1,puVar1);
  FUN_00554770(0x2a,4,0,1,PTR_PTR_0071bd48);
  FUN_00554770(0x2b,4,PTR_PTR_0071bd4c,1,PTR_PTR_0071bd50);
  FUN_00554770(0x52,1,0,1,PTR_PTR_0071bd54);
  FUN_00554770(0x32,4,PTR_PTR_0071bd58,1,PTR_PTR_0071bd5c);
  FUN_00554770(0x33,4,0,1,PTR_PTR_0071bd60);
  FUN_00554770(0x34,4,PTR_PTR_0071bd64,1,PTR_PTR_0071bd68);
  FUN_00554770(0x2d,4,0,1,PTR_PTR_0071bd6c);
  FUN_00554770(0x2e,4,PTR_PTR_0071bd70,1,puVar1);
  FUN_00554770(0x39,4,0,1,PTR_PTR_0071bd74);
  FUN_00554770(0x3a,4,PTR_PTR_0071bd78,1,puVar1);
  FUN_00554770(0x3b,4,0,1,PTR_PTR_0071bd7c);
  FUN_00554770(0x3c,4,PTR_PTR_0071bd80,1,PTR_PTR_0071bd84);
  FUN_00554770(0x48,4,0,1,PTR_PTR_0071bd88);
  FUN_00554770(0x49,4,PTR_PTR_0071bd8c,1,PTR_PTR_0071bd90);
  FUN_00554770(0x3d,4,PTR_PTR_0071bd94,1,0);
  FUN_00554770(0x3e,4,PTR_PTR_0071bd98,1,0);
  FUN_00554770(0x3f,4,PTR_PTR_0071bd9c,1,PTR_PTR_0071bda0);
  FUN_00554770(0x40,4,PTR_PTR_0071bda4,1,PTR_PTR_0071bda8);
  FUN_00554770(0x41,4,0,1,PTR_PTR_0071bdac);
  puVar2 = PTR_PTR_0071bdb4;
  FUN_00554770(0x42,4,PTR_PTR_0071bdb0,1,PTR_PTR_0071bdb4);
  FUN_00554770(0x43,4,PTR_PTR_0071bdb8,1,puVar2);
  puVar2 = PTR_PTR_0071bdc0;
  FUN_00554770(0x62,4,PTR_PTR_0071bdbc,1,PTR_PTR_0071bdc0);
  FUN_00554770(0x61,4,0,1,puVar2);
  FUN_00554770(0x6b,4,0,1,PTR_PTR_0071bdc4);
  FUN_00554770(0x6c,4,PTR_PTR_0071bdc8,1,PTR_PTR_0071bdcc);
  FUN_00554770(0x2c,4,0,1,PTR_PTR_0071bdd0);
  FUN_00554770(0x6d,4,0,1,PTR_PTR_0071bdd4);
  FUN_00554770(0x6e,4,PTR_PTR_0071bdd8,1,puVar1);
  FUN_00554770(0x6f,4,0,1,PTR_PTR_0071bddc);
  FUN_00554770(0x70,4,PTR_PTR_0071bde0,1,PTR_PTR_0071bde4);
  FUN_00554770(0x7c,4,0,1,PTR_PTR_0071bde8);
  FUN_00554770(0x7d,4,PTR_PTR_0071bdec,1,puVar1);
  FUN_00554770(0x7e,4,0,1,PTR_PTR_0071bdf0);
  FUN_00554770(0x7f,4,PTR_PTR_0071bdf4,1,PTR_PTR_0071bdf8);
  FUN_00554770(0x80,4,0,1,PTR_PTR_0071bdfc);
  FUN_00554770(0x81,4,PTR_PTR_0071be00,1,PTR_PTR_0071be04);
  FUN_00554770(0x82,4,0,1,PTR_PTR_0071be08);
  FUN_00554770(0x83,4,PTR_PTR_0071be0c,1,puVar1);
  FUN_00554770(0x84,4,0,1,PTR_PTR_0071be10);
  FUN_00554770(0x85,4,PTR_PTR_0071be14,1,puVar1);
  FUN_00554770(0x8c,4,0,1,PTR_PTR_0071be18);
  FUN_00554770(0x8d,4,PTR_PTR_0071be1c,1,PTR_PTR_0071be20);
  return 0;
}


// 0x0589d1c (0x3c bytes)
int FUN_00589d1c(int param_1,uint param_2)

{
  if ((param_1 != 0) && (param_2 < *(uint *)(param_1 + 8))) {
    return param_2 * (*(int *)(param_1 + 0xc) + 4) + *(int *)(param_1 + 0x10);
  }
  return 0;
}


// 0x0589d58 (0x6c bytes)
int * FUN_00589d58(undefined4 param_1,undefined8 param_2)

{
  undefined4 uVar1;
  int iVar2;
  int *piVar3;
  undefined4 uStack00000038;
  int iStack0000003c;
  
  iStack0000003c = (int)param_2;
  iVar2 = iStack0000003c;
  uStack00000038 = (undefined4)((ulonglong)param_2 >> 0x20);
  uVar1 = uStack00000038;
  if (iStack0000003c != 0) {
    _uStack00000038 = param_2;
    piVar3 = (int *)FUN_00589d1c(param_1,uVar1);
    if (piVar3 == (int *)0x0) {
      return piVar3 + 1;
    }
    if (*piVar3 == iVar2) {
      return piVar3 + 1;
    }
  }
  return (int *)0x0;
}


// 0x0589dc4 (0x120 bytes)
int * FUN_00589dc4(int *param_1,int *param_2)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  
  if (param_2 != (int *)0x0) {
    iVar2 = param_2[2];
    iVar3 = 0;
    if (iVar2 != 0) {
      do {
        piVar1 = (int *)FUN_00589d1c(param_2,iVar3);
        if (*piVar1 == 0) {
          iVar2 = *param_2 + 1;
          *param_2 = iVar2;
          if (iVar2 == 0) {
            *param_2 = 1;
            *piVar1 = 1;
            param_2[1] = param_2[1] + 1;
            param_1[1] = 1;
            *param_1 = iVar3;
          }
          else {
            *piVar1 = iVar2;
            param_2[1] = param_2[1] + 1;
            param_1[1] = iVar2;
            *param_1 = iVar3;
          }
          return param_1;
        }
        iVar3 = iVar3 + 1;
      } while (iVar3 != iVar2);
    }
  }
  iVar2 = *(int *)PTR_DAT_0071be24;
  param_1[1] = *(int *)(PTR_DAT_0071be24 + 4);
  *param_1 = iVar2;
  return param_1;
}


// 0x0589ee4 (0xd0 bytes)
uint * FUN_00589ee4(uint *param_1,int param_2,uint param_3)

{
  uint uVar1;
  uint *puVar2;
  
  if (param_2 != 0) {
    uVar1 = *(uint *)(param_2 + 8);
    if (param_3 < uVar1) {
      do {
        puVar2 = (uint *)FUN_00589d1c(param_2,param_3);
        if ((puVar2 != (uint *)0x0) && (*puVar2 != 0)) {
          param_1[1] = *puVar2;
          *param_1 = param_3;
          return param_1;
        }
        param_3 = param_3 + 1;
      } while (uVar1 != param_3);
    }
  }
  uVar1 = *(uint *)PTR_DAT_0071be24;
  param_1[1] = *(uint *)(PTR_DAT_0071be24 + 4);
  *param_1 = uVar1;
  return param_1;
}


// 0x0589fb4 (0x38 bytes)
undefined4 FUN_00589fb4(undefined4 param_1,undefined8 param_2)

{
  FUN_00589ee4(param_1,param_2,0);
  return param_1;
}


// 0x0589fec (0x44 bytes)
ulonglong FUN_00589fec(undefined8 param_1,undefined8 param_2)

{
  ulonglong uVar1;
  int iStack00000038;
  uint uStack0000003c;
  
  uVar1 = 0;
  iStack00000038 = (int)((ulonglong)param_2 >> 0x20);
  uStack0000003c = (uint)param_2;
  if (*(int *)PTR_DAT_0071be24 == iStack00000038) {
    uVar1 = (ulonglong)((int)(uStack0000003c ^ *(uint *)(PTR_DAT_0071be24 + 4)) >> 0x1f);
    uVar1 = (((uVar1 ^ (uStack0000003c ^ *(uint *)(PTR_DAT_0071be24 + 4))) - uVar1) + -1 << 0x20) >>
            0x3f;
  }
  return uVar1;
}


// 0x058a030 (0x44 bytes)
undefined4 FUN_0058a030(undefined4 param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  int iStack00000040;
  
  iStack00000040 = (int)((ulonglong)param_3 >> 0x20);
  iVar1 = iStack00000040 + 1;
  _iStack00000040 = param_3;
  FUN_00589ee4(param_1,param_2,iVar1);
  return param_1;
}


// 0x058a074 (0x18 bytes)
undefined4 FUN_0058a074(int param_1)

{
  undefined4 uVar1;
  
  uVar1 = 0;
  if (param_1 != 0) {
    uVar1 = *(undefined4 *)(param_1 + 4);
  }
  return uVar1;
}


// 0x058a08c (0x18 bytes)
undefined4 FUN_0058a08c(int param_1)

{
  undefined4 uVar1;
  
  uVar1 = 0;
  if (param_1 != 0) {
    uVar1 = *(undefined4 *)(param_1 + 8);
  }
  return uVar1;
}


// 0x058a0a4 (0x18 bytes)
undefined4 FUN_0058a0a4(int param_1)

{
  undefined4 uVar1;
  
  uVar1 = 0;
  if (param_1 != 0) {
    uVar1 = *(undefined4 *)(param_1 + 0xc);
  }
  return uVar1;
}


// 0x058a0bc (0xec bytes)
uint * FUN_0058a0bc(uint *param_1,int param_2,int param_3)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  
  if (param_2 != 0) {
    if (param_3 == 0) {
      uVar1 = *(uint *)PTR_DAT_0071be24;
      param_1[1] = *(uint *)(PTR_DAT_0071be24 + 4);
      *param_1 = uVar1;
      return param_1;
    }
    uVar1 = *(uint *)(param_3 + -4);
    uVar3 = (uint)((param_3 + -4) - *(int *)(param_2 + 0x10)) / (*(int *)(param_2 + 0xc) + 4U);
    iVar2 = FUN_00589d58(param_2,CONCAT44(uVar3,uVar1));
    if (param_3 == iVar2) {
      param_1[1] = uVar1;
      *param_1 = uVar3;
      return param_1;
    }
  }
  uVar1 = *(uint *)PTR_DAT_0071be24;
  param_1[1] = *(uint *)(PTR_DAT_0071be24 + 4);
  *param_1 = uVar1;
  return param_1;
}


// 0x058a1a8 (0x94 bytes)
void FUN_0058a1a8(int param_1)

{
  undefined4 uVar1;
  uint uVar2;
  uint uVar3;
  
  if (param_1 != 0) {
    if (*(int *)(param_1 + 8) != 0) {
      uVar2 = 0;
      do {
        uVar3 = uVar2 + 1;
        uVar1 = FUN_00589d1c(param_1,uVar2);
        memset(uVar1,0,*(int *)(param_1 + 0xc) + 4);
        uVar2 = uVar3;
      } while (uVar3 < *(uint *)(param_1 + 8));
    }
    *(undefined4 *)(param_1 + 4) = 0;
  }
  return;
}


// 0x058a23c (0x6c bytes)
void FUN_0058a23c(int param_1,undefined8 param_2)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  undefined4 uStack00000038;
  
  uStack00000038 = (undefined4)((ulonglong)param_2 >> 0x20);
  uVar1 = uStack00000038;
  _uStack00000038 = param_2;
  puVar2 = (undefined4 *)FUN_00589d1c(param_1,uVar1);
  if (puVar2 != (undefined4 *)0x0) {
    *(int *)(param_1 + 4) = *(int *)(param_1 + 4) + -1;
    *puVar2 = 0;
    memset(puVar2 + 1,0,*(undefined4 *)(param_1 + 0xc));
  }
  return;
}


// 0x058a2a8 (0x24 bytes)
void FUN_0058a2a8(void)

{
  FUN_005519f0();
  return;
}


// 0x058a2cc (0xb0 bytes)
undefined4 FUN_0058a2cc(int *param_1,int param_2,int param_3)

{
  int iVar1;
  
  if (((param_1 != (int *)0x0) && (param_3 != 0)) && (param_2 != 0)) {
    FUN_00551de8(param_1,param_3 * (param_2 + 4) + 0x14);
    iVar1 = *param_1;
    if (iVar1 == 0) {
      return 0xffffffea;
    }
    *(int *)(iVar1 + 0xc) = param_2;
    *(int *)(iVar1 + 0x10) = iVar1 + 0x14;
    *(int *)(iVar1 + 8) = param_3;
    *(undefined4 *)(iVar1 + 4) = 0;
    return 0;
  }
  return 0xffffffeb;
}


// 0x058a37c (0x5c bytes)
void FUN_0058a37c(int *param_1,int param_2)

{
  int iVar1;
  int iVar2;
  
  if (param_2 == 0) {
    iVar1 = *(int *)PTR_DAT_0071be28;
    param_1[1] = *(int *)(PTR_DAT_0071be28 + 4);
    *param_1 = iVar1;
    return;
  }
  iVar1 = *(int *)(param_2 + 0x14);
  if (iVar1 != 0) {
    iVar2 = *(int *)(iVar1 + 8);
    *param_1 = iVar1;
    param_1[1] = iVar2;
    return;
  }
  iVar1 = *(int *)PTR_DAT_0071be28;
  param_1[1] = *(int *)(PTR_DAT_0071be28 + 4);
  *param_1 = iVar1;
  return;
}


// 0x058a3d8 (0x40 bytes)
int FUN_0058a3d8(int param_1,undefined8 param_2)

{
  int iVar1;
  int iStack00000038;
  int iStack0000003c;
  
  iStack00000038 = (int)((ulonglong)param_2 >> 0x20);
  iStack0000003c = (int)param_2;
  if (((param_1 == 0) || (iVar1 = iStack00000038 + 0xc, iStack00000038 == 0)) ||
     (*(int *)(iStack00000038 + 8) != iStack0000003c)) {
    iVar1 = 0;
  }
  return iVar1;
}


// 0x058a418 (0x6c bytes)
void FUN_0058a418(int *param_1,int param_2,int param_3)

{
  int iVar1;
  
  if (param_2 != 0) {
    if (param_3 != 0) {
      if (param_3 + -0xc == 0) goto LAB_0058a46c;
      if (*(int *)(param_3 + -4) != 0) {
        param_1[1] = *(int *)(param_3 + -4);
        *param_1 = param_3 + -0xc;
        return;
      }
    }
    iVar1 = *(int *)PTR_DAT_0071be28;
    param_1[1] = *(int *)(PTR_DAT_0071be28 + 4);
    *param_1 = iVar1;
    return;
  }
LAB_0058a46c:
  iVar1 = *(int *)PTR_DAT_0071be28;
  param_1[1] = *(int *)(PTR_DAT_0071be28 + 4);
  *param_1 = iVar1;
  return;
}


// 0x058a484 (0x50 bytes)
ulonglong FUN_0058a484(int param_1,undefined8 param_2)

{
  ulonglong uVar1;
  int iStack00000038;
  uint uStack0000003c;
  
  uStack0000003c = (uint)param_2;
  iStack00000038 = (int)((ulonglong)param_2 >> 0x20);
  if ((param_1 != 0) && (iStack00000038 != 0)) {
    uVar1 = (ulonglong)((int)(uStack0000003c ^ *(uint *)(PTR_DAT_0071be28 + 4)) >> 0x1f);
    return (((uVar1 ^ (uStack0000003c ^ *(uint *)(PTR_DAT_0071be28 + 4))) - uVar1) + -1 << 0x20) >>
           0x3f;
  }
  return 1;
}


// 0x058a4d4 (0x84 bytes)
void FUN_0058a4d4(int *param_1,int param_2,undefined8 param_3)

{
  int iVar1;
  int iVar2;
  int iStack00000040;
  int iStack00000044;
  
  iStack00000040 = (int)((ulonglong)param_3 >> 0x20);
  iStack00000044 = (int)param_3;
  if (param_2 != 0) {
    if (iStack00000040 == 0) {
      iVar2 = *(int *)PTR_DAT_0071be28;
      param_1[1] = *(int *)(PTR_DAT_0071be28 + 4);
      *param_1 = iVar2;
      return;
    }
    iVar2 = 0;
    if (*(int *)(iStack00000040 + 8) == iStack00000044) {
      iVar1 = *(int *)(iStack00000040 + 4);
      if (iVar1 != 0) {
        iVar2 = *(int *)(iVar1 + 8);
      }
      param_1[1] = iVar2;
      *param_1 = iVar1;
      return;
    }
  }
  iVar2 = *(int *)PTR_DAT_0071be28;
  param_1[1] = *(int *)(PTR_DAT_0071be28 + 4);
  *param_1 = iVar2;
  return;
}


// 0x058a558 (0x18 bytes)
undefined4 FUN_0058a558(int param_1)

{
  undefined4 uVar1;
  
  uVar1 = 0;
  if (param_1 != 0) {
    uVar1 = *(undefined4 *)(param_1 + 4);
  }
  return uVar1;
}


// 0x058a570 (0x18 bytes)
undefined4 FUN_0058a570(int param_1)

{
  undefined4 uVar1;
  
  uVar1 = 0;
  if (param_1 != 0) {
    uVar1 = *(undefined4 *)(param_1 + 8);
  }
  return uVar1;
}


// 0x058a588 (0x8 bytes)
undefined4 FUN_0058a588(undefined4 *param_1)

{
  return *param_1;
}


// 0x058a590 (0x40 bytes)
void FUN_0058a590(int *param_1)

{
  if ((param_1 != (int *)0x0) && (*param_1 != 0)) {
    FUN_005519f0(param_1);
  }
  return;
}


// 0x058a5d0 (0x178 bytes)
undefined4 FUN_0058a5d0(undefined4 *param_1,int param_2,uint param_3)

{
  undefined4 uVar1;
  int iVar2;
  int *piVar3;
  int *piVar4;
  undefined4 *puVar5;
  int iVar6;
  ulonglong uVar7;
  int *local_40 [4];
  
  uVar1 = 0xffffffeb;
  if (param_1 != (undefined4 *)0x0) {
    param_3 = param_3 & 0xffff;
    iVar6 = param_2 + 0xc;
    iVar2 = iVar6 * param_3 + 0x1c;
    FUN_00551de8(local_40,iVar2);
    if (local_40[0] == (int *)0x0) {
      uVar1 = 0xffffffea;
      *param_1 = 0;
    }
    else {
      piVar3 = local_40[0] + 7;
      local_40[0][4] = (int)local_40[0] + iVar2;
      local_40[0][6] = (int)piVar3;
      if (param_3 != 0) {
        iVar2 = 0;
        local_40[0][8] = 0;
        *piVar3 = 0;
        do {
          uVar7 = (ulonglong)(param_3 - iVar2);
          puVar5 = (undefined4 *)((int)piVar3 + param_2 + 0xc);
          piVar4 = piVar3;
          if (((int)param_3 < iVar2 + 1) || (param_3 == 0x80000000)) {
            uVar7 = 1;
          }
          while( true ) {
            piVar3 = (int *)((int)piVar4 + iVar6);
            iVar2 = iVar2 + 1;
            uVar7 = uVar7 - 1;
            if (uVar7 == 0) goto LAB_0058a6e8;
            *puVar5 = piVar4;
            puVar5[1] = 0;
            puVar5 = (undefined4 *)((int)puVar5 + iVar6);
            if ((int)piVar3 - param_2 == 0xc) break;
            *(int **)(((int)piVar3 - param_2) + -8) = piVar3;
            piVar4 = piVar3;
          }
        } while( true );
      }
LAB_0058a6e8:
      uVar1 = 0;
      *param_1 = local_40[0];
      local_40[0][1] = 0;
      *local_40[0] = param_2;
      local_40[0][2] = param_3;
    }
  }
  return uVar1;
}


// 0x058a748 (0xe4 bytes)
void FUN_0058a748(undefined4 *param_1,int param_2)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  int iVar5;
  
  puVar3 = *(undefined4 **)(param_2 + 0x18);
  if (puVar3 == (undefined4 *)0x0) {
    uVar2 = *(undefined4 *)PTR_DAT_0071be28;
    param_1[1] = *(undefined4 *)(PTR_DAT_0071be28 + 4);
    *param_1 = uVar2;
    return;
  }
  puVar4 = (undefined4 *)puVar3[1];
  *(undefined4 **)(param_2 + 0x18) = puVar4;
  if (puVar4 != (undefined4 *)0x0) {
    *puVar4 = *puVar3;
  }
  puVar4 = (undefined4 *)(param_2 + 0x14);
  puVar3[1] = 0;
  *puVar3 = puVar3;
  if (puVar4 != (undefined4 *)0x0) {
    *puVar3 = puVar3;
    puVar3[1] = 0;
    puVar3[2] = 0;
    puVar1 = (undefined4 *)*puVar4;
    puVar3[1] = puVar1;
    if (puVar1 != (undefined4 *)0x0) {
      *puVar3 = *puVar1;
      *puVar1 = puVar3;
    }
    *puVar4 = puVar3;
  }
  iVar5 = *(int *)(param_2 + 0xc) + 1;
  *(int *)(param_2 + 4) = *(int *)(param_2 + 4) + 1;
  *(int *)(param_2 + 0xc) = iVar5;
  if (iVar5 != 0) {
    puVar3[2] = iVar5;
    *param_1 = puVar3;
    param_1[1] = iVar5;
    return;
  }
  *param_1 = puVar3;
  *(undefined4 *)(param_2 + 0xc) = 1;
  puVar3[2] = 1;
  param_1[1] = 1;
  return;
}


// 0x058a82c (0xc4 bytes)
void FUN_0058a82c(int param_1)

{
  int *piVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  
  if (param_1 == 0) {
    return;
  }
  piVar1 = (int *)(param_1 + 0x14);
  puVar3 = (undefined4 *)*piVar1;
  if (puVar3 != (undefined4 *)0x0) {
    puVar2 = (undefined4 *)puVar3[1];
    *piVar1 = (int)puVar2;
    if (puVar2 != (undefined4 *)0x0) {
      *puVar2 = *puVar3;
    }
    puVar3[1] = 0;
    *puVar3 = puVar3;
    while( true ) {
      puVar3[1] = 0;
      *puVar3 = puVar3;
      puVar3[2] = 0;
      puVar2 = *(undefined4 **)(param_1 + 0x18);
      puVar3[1] = puVar2;
      if (puVar2 != (undefined4 *)0x0) {
        *puVar3 = *puVar2;
        *puVar2 = puVar3;
      }
      *(undefined4 **)(param_1 + 0x18) = puVar3;
      puVar3 = (undefined4 *)*piVar1;
      if (puVar3 == (undefined4 *)0x0) break;
      puVar2 = (undefined4 *)puVar3[1];
      *piVar1 = (int)puVar2;
      if (puVar2 != (undefined4 *)0x0) {
        *puVar2 = *puVar3;
      }
      puVar3[1] = 0;
      *puVar3 = puVar3;
    }
  }
  *(undefined4 *)(param_1 + 4) = 0;
  return;
}


// 0x058a8f0 (0x128 bytes)
void FUN_0058a8f0(int *param_1,undefined8 param_2)

{
  int *piVar1;
  int *piVar2;
  int *piVar3;
  int *piVar4;
  int *piStack00000038;
  int iStack0000003c;
  
  iStack0000003c = (int)param_2;
  piStack00000038 = (int *)((ulonglong)param_2 >> 0x20);
  piVar3 = piStack00000038;
  if (((param_1 != (int *)0x0) && (piStack00000038 != (int *)0x0)) &&
     (piStack00000038[2] == iStack0000003c)) {
    piVar2 = param_1 + 5;
    piVar4 = (int *)*piVar2;
    if (piVar4 != (int *)0x0) {
      piVar1 = (int *)piStack00000038[1];
      if (piVar1 != (int *)0x0) {
        *piVar1 = *piStack00000038;
        piVar4 = (int *)*piVar2;
      }
      if (piVar4 == piStack00000038) {
        *piVar2 = (int)piVar1;
      }
      else {
        *(int **)(*piStack00000038 + 4) = piVar1;
      }
    }
    param_1[1] = param_1[1] + -1;
    _piStack00000038 = param_2;
    memset(piVar3,0,*param_1 + 0xc);
    piVar3[1] = 0;
    *piVar3 = (int)piVar3;
    piVar3[2] = 0;
    piVar2 = (int *)param_1[6];
    piVar3[1] = (int)piVar2;
    if (piVar2 != (int *)0x0) {
      *piVar3 = *piVar2;
      *piVar2 = (int)piVar3;
    }
    param_1[6] = (int)piVar3;
    return;
  }
  return;
}


// 0x058aa18 (0x30 bytes)
undefined8 FUN_0058aa18(ulonglong param_1)

{
  undefined8 uVar1;
  
  if ((param_1 & 0xffffffff) < 10) {
                    /* WARNING: Could not recover jumptable at 0x0058aa38. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar1 = (*(code *)(PTR_DAT_0071be2c + *(int *)(PTR_DAT_0071be2c + (int)(param_1 << 2))))();
    return uVar1;
  }
  return 0;
}


// 0x058aab8 (0x30 bytes)
undefined8 FUN_0058aab8(ulonglong param_1)

{
  undefined8 uVar1;
  
  if ((param_1 & 0xffffffff) < 10) {
                    /* WARNING: Could not recover jumptable at 0x0058aad8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar1 = (*(code *)(PTR_DAT_0071be30 + *(int *)(PTR_DAT_0071be30 + (int)(param_1 << 2))))();
    return uVar1;
  }
  return 0;
}


// 0x058ab58 (0x4 bytes)
void FUN_0058ab58(void)

{
  return;
}


// 0x058ab5c (0x4 bytes)
void FUN_0058ab5c(void)

{
  return;
}


// 0x058ab60 (0x30 bytes)
void FUN_0058ab60(int *param_1)

{
  if (param_1[1] == 0) {
    return;
  }
  *(undefined4 *)(param_1[1] + *(int *)(*param_1 + 0x444) * 8 + 0x60) = 0;
  return;
}


// 0x058ab90 (0xb8 bytes)
undefined4 FUN_0058ab90(int *param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined4 uVar6;
  
  uVar6 = 0xffffffeb;
  if ((((param_1 != (int *)0x0) && (*param_1 != 0)) && (param_1[1] != 0)) &&
     (((param_1[2] != 0 && (param_1[3] != 0)) && (param_2 != 0)))) {
    iVar5 = FUN_005827f8(param_2);
    uVar6 = 0xffffffe5;
    if (iVar5 != 0) {
      uVar6 = 0;
      iVar1 = *param_1;
      iVar2 = param_1[1];
      iVar3 = param_1[2];
      iVar4 = param_1[3];
      *(int *)(iVar5 + 0x5c) = param_1[4];
      *(int *)(iVar5 + 0x4c) = iVar1;
      *(int *)(iVar5 + 0x50) = iVar2;
      *(int *)(iVar5 + 0x54) = iVar3;
      *(int *)(iVar5 + 0x58) = iVar4;
    }
  }
  return uVar6;
}


// 0x058ac48 (0x140 bytes)
int FUN_0058ac48(int param_1,int param_2)

{
  undefined *puVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  GPiece<8> local_50;
  GPiece<32> local_48;
  
  iVar5 = -0x15;
  if ((param_1 != 0) && (param_2 != 0)) {
    iVar2 = FUN_005827f8(param_1);
    puVar1 = PTR_PTR_0071be34;
    iVar5 = -0x1b;
    if (iVar2 != 0) {
      iVar4 = *(int *)(param_2 + 0x444) * 8 + 0x60;
      if (*(int *)(iVar2 + iVar4 + 4) != 0) {
        *(int *)(iVar2 + iVar4) = param_2;
        FUN_0054268c(param_2,puVar1,iVar2);
        FUN_005533fc(local_50,*(int *)(param_2 + 0x444),
                     *(undefined4 *)(iVar2 + *(int *)(param_2 + 0x444) * 8 + 100));
        uVar3 = FUN_00544040(param_2,local_48,PTR_PTR_0071be38,*(undefined4 *)(param_1 + 0x10));
        iVar5 = ((int)((((int)uVar3 >> 0x1f ^ uVar3) - ((int)uVar3 >> 0x1f)) + -1) >> 0x1f & 10U) -
                10;
      }
    }
  }
  return iVar5;
}


// 0x058ad88 (0x4c bytes)
void FUN_0058ad88(undefined4 param_1,int param_2)

{
  memset(param_2,0,0x2b8);
  *(undefined4 *)(param_2 + 0x24) = param_1;
  return;
}


// 0x058add4 (0x44 bytes)
undefined4 FUN_0058add4(int param_1)

{
  undefined4 uVar1;
  
  uVar1 = 0xffffffeb;
  if (param_1 != 0) {
    memset(param_1,0,0x5c);
    uVar1 = 0;
  }
  return uVar1;
}


// 0x058ae18 (0x5c bytes)
undefined4 FUN_0058ae18(undefined4 *param_1)

{
  undefined4 uVar1;
  
  uVar1 = 0xffffffeb;
  if (param_1 != (undefined4 *)0x0) {
    uVar1 = 0;
    param_1[0xf] = 0;
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
    param_1[0xd] = 0;
    param_1[0xe] = 0;
  }
  return uVar1;
}


// 0x058ae74 (0x44 bytes)
undefined4 FUN_0058ae74(int param_1)

{
  undefined4 uVar1;
  
  uVar1 = 0xffffffeb;
  if (param_1 != 0) {
    memset(param_1,0,0x58);
    uVar1 = 0;
  }
  return uVar1;
}


// 0x058aeb8 (0x44 bytes)
undefined4 FUN_0058aeb8(int param_1)

{
  undefined4 uVar1;
  
  uVar1 = 0xffffffeb;
  if (param_1 != 0) {
    memset(param_1,0,0x54);
    uVar1 = 0;
  }
  return uVar1;
}


// 0x058aefc (0x3c4 bytes)
void FUN_0058aefc(int param_1,int param_2)

{
  GPiece<160> auStack_c0;
  
  if (*(int *)(param_2 + 0x50) != 0) {
    memset(auStack_c0,0,0x94);
    FUN_0058aab8(*(undefined4 *)(param_1 + 0x28));
    (*(code *)**(undefined4 **)(param_2 + 0x50))(auStack_c0,*(undefined4 *)(param_2 + 0x5c));
  }
  return;
}


// 0x058b2c0 (0x54 bytes)
void FUN_0058b2c0(uint param_1)

{
  if (param_1 < 0x1d) {
                    /* WARNING: Could not recover jumptable at 0x0058b2f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)(PTR_DAT_0071be3c + *(int *)(PTR_DAT_0071be3c + param_1 * 4)))();
    return;
  }
  return;
}


// 0x058b678 (0x5e4 bytes)
// strings: 0067e608: 'Unknown'

/* WARNING: Heritage AFTER dead removal. Example location: x0xfffffd30 : 0x0058b920 */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_0058b678(undefined4 *param_1,undefined1 *param_2,undefined4 param_3)

{
  undefined4 *puVar1;
  int iVar2;
  char *__s;
  char *local_370;
  size_t local_36c;
  char *local_368;
  size_t local_364;
  char *local_360;
  size_t local_35c;
  undefined1 *local_358;
  undefined4 local_354;
  undefined4 local_350;
  undefined4 local_34c;
  char *local_348;
  size_t local_344;
  undefined4 local_340;
  char cStack_33c;
  undefined1 uStack_33b;
  undefined1 uStack_33a;
  undefined1 uStack_339;
  undefined1 uStack_338;
  undefined1 uStack_337;
  undefined1 uStack_336;
  undefined1 uStack_335;
  undefined1 uStack_334;
  undefined1 uStack_333;
  undefined1 uStack_332;
  undefined1 uStack_331;
  undefined1 uStack_330;
  undefined1 uStack_32f;
  undefined1 uStack_32e;
  undefined1 uStack_32d;
  undefined1 uStack_32c;
  undefined1 uStack_32b;
  undefined1 uStack_32a;
  undefined1 uStack_329;
  undefined1 uStack_328;
  undefined1 uStack_327;
  undefined1 uStack_326;
  undefined1 uStack_325;
  undefined1 uStack_324;
  undefined1 uStack_323;
  undefined1 uStack_322;
  undefined1 uStack_321;
  undefined1 uStack_320;
  undefined1 uStack_31f;
  undefined1 uStack_31e;
  undefined1 uStack_31d;
  undefined4 local_31c;
  undefined4 local_318;
  undefined4 local_314;
  undefined8 uStack_310;
  undefined4 local_308;
  undefined4 local_304;
  undefined4 local_300;
  undefined4 local_2fc;
  undefined4 local_2f8;
  char **local_2f4;
  char **local_2f0;
  char **local_2ec;
  char **local_2e8;
  undefined4 auStack_2e4 [5];
  undefined1 local_2d0;
  undefined1 uStack_2cf;
  undefined1 uStack_2ce;
  undefined1 uStack_2cd;
  undefined1 uStack_2cc;
  undefined1 uStack_2cb;
  undefined1 uStack_2ca;
  undefined1 uStack_2c9;
  undefined1 uStack_2c8;
  undefined1 uStack_2c7;
  undefined1 uStack_2c6;
  undefined1 uStack_2c5;
  undefined1 uStack_2c4;
  undefined1 uStack_2c3;
  undefined1 uStack_2c2;
  undefined1 uStack_2c1;
  undefined1 uStack_2c0;
  undefined1 local_2bf;
  undefined1 local_299;
  undefined4 local_298;
  undefined4 local_294;
  char acStack_290 [63];
  undefined1 local_251;
  undefined4 auStack_250 [5];
  undefined1 uStack_23c;
  undefined1 uStack_23b;
  undefined1 uStack_23a;
  undefined1 uStack_239;
  undefined1 uStack_238;
  undefined1 uStack_237;
  undefined1 uStack_236;
  undefined1 uStack_235;
  undefined1 uStack_234;
  undefined1 uStack_233;
  undefined1 uStack_232;
  undefined1 uStack_231;
  undefined1 uStack_230;
  undefined1 uStack_22f;
  undefined1 uStack_22e;
  undefined1 uStack_22d;
  undefined1 uStack_22c;
  undefined1 uStack_22b;
  undefined4 auStack_228 [3];
  GPiece<460> auStack_21c;
  
  if (*(int *)(param_2 + 0x4c) == 0) {
    auStack_250[0] = 0;
    uStack_23b = *param_2;
    uStack_23a = param_2[1];
    uStack_239 = param_2[2];
    uStack_238 = param_2[3];
    uStack_237 = param_2[4];
    uStack_236 = param_2[5];
    uStack_235 = param_2[6];
    uStack_234 = param_2[7];
    uStack_233 = param_2[8];
    uStack_232 = param_2[9];
    uStack_231 = param_2[10];
    uStack_230 = param_2[0xb];
    uStack_22f = param_2[0xc];
    uStack_22e = param_2[0xd];
    uStack_22d = param_2[0xe];
    uStack_22c = param_2[0xf];
    uStack_22b = param_2[0x10];
    auStack_228[0] = *param_1;
    local_358 = auStack_21c;
    local_354 = 0x1cc;
    local_350 = 0;
    local_34c = 1;
    iVar2 = FUN_005a0134(&local_358,&local_350);
    if (iVar2 == -1) {
      return;
    }
    puVar1 = *(undefined4 **)(PTR_PTR_0071be40 + 0x2c);
  }
  else {
    __s = (char *)(param_1 + 1);
    local_340 = *param_1;
    cStack_33c = *__s;
    uStack_33b = *(undefined1 *)((int)param_1 + 5);
    uStack_33a = *(undefined1 *)((int)param_1 + 6);
    uStack_339 = *(undefined1 *)((int)param_1 + 7);
    uStack_338 = *(undefined1 *)(param_1 + 2);
    uStack_337 = *(undefined1 *)((int)param_1 + 9);
    uStack_336 = *(undefined1 *)((int)param_1 + 10);
    uStack_335 = *(undefined1 *)((int)param_1 + 0xb);
    uStack_334 = *(undefined1 *)(param_1 + 3);
    uStack_333 = *(undefined1 *)((int)param_1 + 0xd);
    uStack_332 = *(undefined1 *)((int)param_1 + 0xe);
    uStack_331 = *(undefined1 *)((int)param_1 + 0xf);
    uStack_32f = *(undefined1 *)((int)param_1 + 0x11);
    uStack_32e = *(undefined1 *)((int)param_1 + 0x12);
    uStack_32d = *(undefined1 *)((int)param_1 + 0x13);
    uStack_330 = *(undefined1 *)(param_1 + 4);
    uStack_32c = *(undefined1 *)(param_1 + 5);
    uStack_32b = *(undefined1 *)((int)param_1 + 0x15);
    uStack_32a = *(undefined1 *)((int)param_1 + 0x16);
    uStack_329 = *(undefined1 *)((int)param_1 + 0x17);
    uStack_328 = *(undefined1 *)(param_1 + 6);
    uStack_327 = *(undefined1 *)((int)param_1 + 0x19);
    uStack_326 = *(undefined1 *)((int)param_1 + 0x1a);
    uStack_325 = *(undefined1 *)((int)param_1 + 0x1b);
    uStack_321 = *(undefined1 *)((int)param_1 + 0x1f);
    uStack_324 = *(undefined1 *)(param_1 + 7);
    uStack_323 = *(undefined1 *)((int)param_1 + 0x1d);
    uStack_322 = *(undefined1 *)((int)param_1 + 0x1e);
    uStack_31d = *(undefined1 *)((int)param_1 + 0x23);
    uStack_31f = *(undefined1 *)((int)param_1 + 0x21);
    uStack_31e = *(undefined1 *)((int)param_1 + 0x22);
    uStack_320 = *(undefined1 *)(param_1 + 8);
    local_31c = FUN_0058aab8(param_1[10]);
    memset(auStack_2e4,0,0x94);
    (*(code *)**(undefined4 **)(param_2 + 0x4c))
              (&local_340,auStack_2e4,*(undefined4 *)(param_2 + 0x5c));
    auStack_250[0] = auStack_2e4[0];
    local_251 = 0;
    local_2d0 = 0;
    local_2bf = 0;
    local_299 = 0;
    uStack_23c = 0;
    uStack_23b = uStack_2cf;
    uStack_23a = uStack_2ce;
    uStack_239 = uStack_2cd;
    uStack_238 = uStack_2cc;
    uStack_237 = uStack_2cb;
    uStack_236 = uStack_2ca;
    uStack_235 = uStack_2c9;
    uStack_234 = uStack_2c8;
    uStack_233 = uStack_2c7;
    uStack_232 = uStack_2c6;
    uStack_231 = uStack_2c5;
    uStack_230 = uStack_2c4;
    uStack_22e = uStack_2c2;
    uStack_22d = uStack_2c1;
    uStack_22c = uStack_2c0;
    uStack_22f = uStack_2c3;
    uStack_22b = 0;
    FUN_00551fd4(auStack_228,*param_1);
    local_360 = __s;
    local_35c = strlen(__s);
    local_370 = *(char **)PTR_PTR_0071be48;
    local_36c = strlen(local_370);
    local_348 = *(char **)PTR_PTR_0071be4c;
    local_344 = strlen(local_348);
    local_368 = acStack_290;
    local_364 = strlen(local_368);
    local_358 = auStack_21c;
    uStack_310 = 0;
    local_354 = 0x1cc;
    local_318 = 1;
    local_314 = FUN_0058aa18(local_298);
    local_2f8 = *param_1;
    local_2f0 = &local_370;
    local_308 = 5;
    local_2f4 = &local_360;
    local_2ec = &local_348;
    local_2e8 = &local_368;
    local_304 = 0;
    local_300 = 1;
    local_2fc = local_294;
    iVar2 = FUN_005a0218(&local_358,&local_318);
    if (iVar2 == -1) {
      return;
    }
    puVar1 = *(undefined4 **)(PTR_PTR_0071be40 + 0x2c);
  }
  (*(code *)*puVar1)(param_3,4,0x3d,iVar2 + 0x34,auStack_250,0,0,&uStack_23b);
  return;
}


// 0x058bc5c (0x320 bytes)
// strings: 0067e608: 'Unknown'

undefined4 FUN_0058bc5c(undefined4 *param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  GPiece<8> local_2a0;
  char *local_298;
  size_t local_294;
  char *local_290;
  size_t local_28c;
  char *local_288;
  size_t local_284;
  undefined4 local_280;
  undefined4 local_27c;
  undefined4 local_270;
  undefined4 local_26c;
  undefined4 local_268;
  undefined4 local_260;
  char **local_25c;
  char **local_258;
  char **local_254;
  undefined4 uStack_250;
  undefined4 uStack_248;
  undefined1 uStack_244;
  undefined1 uStack_243;
  undefined1 uStack_242;
  undefined1 uStack_241;
  undefined1 uStack_240;
  undefined1 uStack_23f;
  undefined1 uStack_23e;
  undefined1 uStack_23d;
  undefined1 uStack_23c;
  undefined1 uStack_23b;
  undefined1 uStack_23a;
  undefined1 uStack_239;
  undefined1 uStack_238;
  undefined1 uStack_237;
  undefined1 uStack_236;
  undefined1 uStack_235;
  undefined1 uStack_234;
  undefined1 uStack_233;
  undefined1 uStack_232;
  undefined1 uStack_231;
  undefined1 uStack_230;
  undefined1 uStack_22f;
  undefined1 uStack_22e;
  undefined1 uStack_22d;
  undefined1 uStack_22c;
  undefined1 uStack_22b;
  undefined1 uStack_22a;
  undefined1 uStack_229;
  undefined1 uStack_228;
  undefined1 uStack_227;
  undefined1 uStack_226;
  undefined1 uStack_225;
  undefined1 uStack_224;
  undefined1 uStack_223;
  GPiece<488> auStack_220;
  
  if ((param_1 == (undefined4 *)0x0) || (param_2 == 0)) {
    uVar2 = 0xffffffeb;
  }
  else {
    *(undefined1 *)(param_1 + 5) = 0;
    *(undefined1 *)((int)param_1 + 0x25) = 0;
    *(undefined1 *)((int)param_1 + 0x4f) = 0;
    uStack_248 = *param_1;
    uStack_244 = *(undefined1 *)(param_1 + 1);
    uStack_243 = *(undefined1 *)((int)param_1 + 5);
    uStack_242 = *(undefined1 *)((int)param_1 + 6);
    uStack_241 = *(undefined1 *)((int)param_1 + 7);
    uStack_240 = *(undefined1 *)(param_1 + 2);
    uStack_23f = *(undefined1 *)((int)param_1 + 9);
    uStack_23e = *(undefined1 *)((int)param_1 + 10);
    uStack_23d = *(undefined1 *)((int)param_1 + 0xb);
    uStack_23a = *(undefined1 *)((int)param_1 + 0xe);
    uStack_239 = *(undefined1 *)((int)param_1 + 0xf);
    uStack_23c = *(undefined1 *)(param_1 + 3);
    uStack_23b = *(undefined1 *)((int)param_1 + 0xd);
    uStack_238 = *(undefined1 *)(param_1 + 4);
    uStack_237 = *(undefined1 *)((int)param_1 + 0x11);
    uStack_236 = *(undefined1 *)((int)param_1 + 0x12);
    uStack_235 = *(undefined1 *)((int)param_1 + 0x13);
    uStack_234 = *(undefined1 *)(param_1 + 5);
    uStack_233 = *(undefined1 *)((int)param_1 + 0x15);
    uStack_232 = *(undefined1 *)((int)param_1 + 0x16);
    uStack_231 = *(undefined1 *)((int)param_1 + 0x17);
    uStack_230 = *(undefined1 *)(param_1 + 6);
    uStack_22f = *(undefined1 *)((int)param_1 + 0x19);
    uStack_22e = *(undefined1 *)((int)param_1 + 0x1a);
    uStack_22d = *(undefined1 *)((int)param_1 + 0x1b);
    uStack_22c = *(undefined1 *)(param_1 + 7);
    uStack_229 = *(undefined1 *)((int)param_1 + 0x1f);
    uStack_228 = *(undefined1 *)(param_1 + 8);
    uStack_22b = *(undefined1 *)((int)param_1 + 0x1d);
    uStack_22a = *(undefined1 *)((int)param_1 + 0x1e);
    uStack_227 = *(undefined1 *)((int)param_1 + 0x21);
    uStack_226 = *(undefined1 *)((int)param_1 + 0x22);
    uStack_225 = *(undefined1 *)((int)param_1 + 0x23);
    uStack_224 = *(undefined1 *)(param_1 + 9);
    uStack_223 = *(undefined1 *)((int)param_1 + 0x25);
    FUN_00551fd4(auStack_220,param_1[10]);
    local_288 = (char *)(param_1 + 0xc);
    local_284 = strlen((char *)(param_1 + 0xc));
    local_290 = *(char **)PTR_PTR_0071be48;
    local_28c = strlen(local_290);
    local_298 = *(char **)PTR_PTR_0071be4c;
    local_294 = strlen(local_298);
    uStack_250 = 0;
    local_280 = 0;
    local_27c = FUN_0058aa18(param_1[0x14]);
    local_260 = param_1[0xb];
    local_25c = &local_288;
    local_270 = 5;
    local_268 = 1;
    local_258 = &local_290;
    local_254 = &local_298;
    local_26c = 0;
    iVar1 = FUN_005a0218(local_2a0,&local_280);
    uVar2 = 0xfffffffb;
    if (iVar1 != -1) {
      uVar2 = (*(code *)**(undefined4 **)(PTR_PTR_0071be40 + 0x2c))
                        (param_2,4,0x3d,iVar1 + 0x34,&uStack_248,0,0,&uStack_233);
    }
  }
  return uVar2;
}


// 0x058bf7c (0x2f8 bytes)
void FUN_0058bf7c(int param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  GPiece<36> local_80;
  GPiece<68> local_5c;
  
  if ((*(int *)(param_2 + 0x58) != 0) &&
     (((iVar1 = *(int *)(param_1 + 0x24), iVar1 == 6 || (iVar1 == 4)) || (iVar1 == 7)))) {
    if (*(int *)(param_1 + 100) != 0) {
      uVar2 = FUN_00553448(local_5c);
      FUN_00553518(local_5c,uVar2,*(undefined4 *)(param_1 + 100));
    }
    (*(code *)**(undefined4 **)(param_2 + 0x58))(local_80,*(undefined4 *)(param_2 + 0x5c));
    return;
  }
  return;
}


// 0x058c274 (0x430 bytes)
void FUN_0058c274(undefined4 *param_1,undefined1 *param_2,undefined4 param_3)

{
  undefined4 uVar1;
  int iVar2;
  GPiece<8> local_2a0;
  GPiece<8> local_298;
  GPiece<36> local_290;
  GPiece<52> local_26c;
  undefined4 auStack_238 [5];
  undefined1 uStack_223;
  undefined1 uStack_222;
  undefined1 uStack_221;
  undefined1 uStack_220;
  undefined1 uStack_21f;
  undefined1 uStack_21e;
  undefined1 uStack_21d;
  undefined1 uStack_21c;
  undefined1 uStack_21b;
  undefined1 uStack_21a;
  undefined1 uStack_219;
  undefined1 uStack_218;
  undefined1 uStack_217;
  undefined1 uStack_216;
  undefined1 uStack_215;
  undefined1 uStack_214;
  undefined1 uStack_213;
  undefined4 uStack_210;
  
  if (*(int *)(param_2 + 0x54) == 0) {
    auStack_238[0] = 0;
    uStack_223 = *param_2;
    uStack_222 = param_2[1];
    uStack_221 = param_2[2];
    uStack_220 = param_2[3];
    uStack_21f = param_2[4];
    uStack_21e = param_2[5];
    uStack_21d = param_2[6];
    uStack_21c = param_2[7];
    uStack_21b = param_2[8];
    uStack_21a = param_2[9];
    uStack_219 = param_2[10];
    uStack_218 = param_2[0xb];
    uStack_217 = param_2[0xc];
    uStack_216 = param_2[0xd];
    uStack_215 = param_2[0xe];
    uStack_214 = param_2[0xf];
    uStack_213 = param_2[0x10];
    uStack_210 = *param_1;
    iVar2 = FUN_0059fcf0(local_2a0,local_298);
    if (iVar2 != -1) {
      (*(code *)**(undefined4 **)(PTR_PTR_0071be40 + 0x2c))
                (param_3,4,0x3d,iVar2 + 0x34,auStack_238,0,0,&uStack_223);
      return;
    }
  }
  else if ((param_1[9] == 5) || (param_1[9] == 3)) {
    if (param_1[0x19] != 0) {
      uVar1 = FUN_00553448(local_26c);
      FUN_00553518(local_26c,uVar1,param_1[0x19]);
    }
    (*(code *)**(undefined4 **)(param_2 + 0x54))(local_290,*(undefined4 *)(param_2 + 0x5c));
    return;
  }
  return;
}


// 0x058c6a4 (0x7c bytes)
void FUN_0058c6a4(uint *param_1,int param_2,undefined8 param_3,int param_4,longlong param_5)

{
  int iVar1;
  ulonglong local_20;
  undefined4 local_18;
  undefined2 local_14;
  ulonglong *local_10;
  
  iVar1 = *(int *)(param_2 + param_4 * 8 + 0x60);
  if (iVar1 != 0) {
    local_20 = param_5 << 0x20 | (ulonglong)*param_1;
    local_18 = 1;
    local_10 = &local_20;
    local_14 = 8;
    FUN_00542520(iVar1,&local_18,param_1 + 0x2d,param_1[0xad]);
  }
  return;
}


// 0x058c720 (0x154 bytes)
int FUN_0058c720(undefined8 param_1,undefined8 param_2,undefined8 param_3,int param_4)

{
  int iVar1;
  int iVar2;
  int local_330;
  GPiece<4> auStack_32c;
  GPiece<4> auStack_328;
  GPiece<4> auStack_324;
  GPiece<8> local_320;
  undefined8 uStack_318;
  undefined8 uStack_310;
  undefined8 uStack_308;
  undefined8 uStack_300;
  undefined8 uStack_2f8;
  GPiece<36> auStack_2f0;
  uint local_2cc;
  
  uStack_2f8 = 0;
  uStack_318 = 0;
  uStack_310 = 0;
  uStack_308 = 0;
  uStack_300 = 0;
  iVar1 = FUN_00582b0c(param_1,&uStack_318,auStack_324,&local_330,0);
  iVar2 = FUN_0059fa70(local_320,PTR_PTR_0071be50,PTR_PTR_0071be54,PTR_PTR_0071be58,auStack_2f0);
  FUN_0055200c(param_4 + 0x18,auStack_2f0);
  FUN_0055200c(param_4 + 0x1c,auStack_32c);
  FUN_0055200c(param_4 + 0x20,auStack_328);
  if ((((iVar1 == 0) && (local_330 != 0)) && (0 < iVar2)) && (local_2cc < 9)) {
                    /* WARNING: Could not recover jumptable at 0x0058c870. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    iVar1 = (*(code *)(PTR_DAT_0071be5c + *(int *)(PTR_DAT_0071be5c + local_2cc * 4)))();
    return iVar1;
  }
  return iVar2 + 0x24;
}


// 0x058c90c (0x10c bytes)
int FUN_0058c90c(undefined8 param_1)

{
  int iVar1;
  int iVar2;
  GPiece<4> auStack_320;
  int local_31c;
  GPiece<8> local_318;
  GPiece<16> auStack_310;
  GPiece<16> auStack_300;
  undefined8 uStack_2f0;
  GPiece<36> auStack_2e8;
  uint local_2c4;
  
  auStack_300 = (GPiece<16>)0x0;
  uStack_2f0 = 0;
  auStack_310 = (GPiece<16>)0x0;
  iVar1 = FUN_00582b0c(param_1,auStack_310,auStack_320,&local_31c,0);
  iVar2 = FUN_0059fa70(local_318,PTR_PTR_0071be50,PTR_PTR_0071be54,PTR_PTR_0071be58,auStack_2e8);
  if ((((iVar1 == 0) && (local_31c != 0)) && (0 < iVar2)) && (local_2c4 < 9)) {
                    /* WARNING: Could not recover jumptable at 0x0058ca14. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    iVar1 = (*(code *)(PTR_DAT_0071be60 + *(int *)(PTR_DAT_0071be60 + local_2c4 * 4)))();
    return iVar1;
  }
  return iVar2 + 0x34;
}


// 0x058cab0 (0x538 bytes)
undefined4 FUN_0058cab0(undefined4 *param_1,int param_2)

{
  bool bVar1;
  uint uVar2;
  int iVar3;
  undefined4 uVar4;
  uint *puVar5;
  uint *puVar6;
  uint *puVar7;
  uint *puVar8;
  GPiece<4> local_2e0;
  GPiece<8> local_2dc;
  GPiece<8> local_2d4;
  char *local_2cc;
  size_t local_2c8;
  int local_2c4;
  short local_2c0;
  int local_2bc;
  uint auStack_2b8 [12];
  undefined4 local_288;
  undefined4 local_284;
  undefined4 local_280;
  undefined4 local_27c;
  undefined4 local_278;
  uint local_270;
  uint local_26c;
  uint local_268;
  uint local_264;
  int local_260;
  undefined1 local_25b;
  char **local_258;
  undefined4 uStack_250;
  undefined1 uStack_24c;
  undefined1 uStack_24b;
  undefined1 uStack_24a;
  undefined1 uStack_249;
  undefined1 uStack_248;
  undefined1 uStack_247;
  undefined1 uStack_246;
  undefined1 uStack_245;
  undefined1 uStack_244;
  undefined1 uStack_243;
  undefined1 uStack_242;
  undefined1 uStack_241;
  undefined1 uStack_240;
  undefined1 uStack_23f;
  undefined1 uStack_23e;
  undefined1 uStack_23d;
  undefined1 uStack_23c;
  undefined1 uStack_23b;
  undefined1 uStack_23a;
  undefined1 uStack_239;
  undefined1 uStack_238;
  undefined1 uStack_237;
  undefined1 uStack_236;
  undefined1 uStack_235;
  undefined1 uStack_234;
  undefined1 uStack_233;
  undefined1 uStack_232;
  undefined1 uStack_231;
  undefined1 uStack_230;
  undefined1 uStack_22f;
  undefined1 uStack_22e;
  undefined1 uStack_22d;
  undefined1 uStack_22c;
  undefined1 uStack_22b;
  GPiece<472> auStack_228;
  
  if ((param_1 == (undefined4 *)0x0) || (param_2 == 0)) {
LAB_0058caf0:
    uVar4 = 0xffffffeb;
  }
  else {
    iVar3 = FUN_005827f8(param_2);
    if (iVar3 == 0) {
      return 0xffffffe5;
    }
    *(undefined1 *)(param_1 + 5) = 0;
    *(undefined1 *)((int)param_1 + 0x25) = 0;
    *(undefined1 *)((int)param_1 + 0x4f) = 0;
    uStack_250 = *param_1;
    uStack_24c = *(undefined1 *)(param_1 + 1);
    uStack_24b = *(undefined1 *)((int)param_1 + 5);
    uStack_24a = *(undefined1 *)((int)param_1 + 6);
    uStack_249 = *(undefined1 *)((int)param_1 + 7);
    uStack_248 = *(undefined1 *)(param_1 + 2);
    uStack_247 = *(undefined1 *)((int)param_1 + 9);
    uStack_246 = *(undefined1 *)((int)param_1 + 10);
    uStack_245 = *(undefined1 *)((int)param_1 + 0xb);
    uStack_242 = *(undefined1 *)((int)param_1 + 0xe);
    uStack_241 = *(undefined1 *)((int)param_1 + 0xf);
    uStack_244 = *(undefined1 *)(param_1 + 3);
    uStack_243 = *(undefined1 *)((int)param_1 + 0xd);
    uStack_23d = *(undefined1 *)((int)param_1 + 0x13);
    uStack_240 = *(undefined1 *)(param_1 + 4);
    uStack_23f = *(undefined1 *)((int)param_1 + 0x11);
    uStack_23e = *(undefined1 *)((int)param_1 + 0x12);
    uStack_23c = *(undefined1 *)(param_1 + 5);
    uStack_23b = *(undefined1 *)((int)param_1 + 0x15);
    uStack_23a = *(undefined1 *)((int)param_1 + 0x16);
    uStack_239 = *(undefined1 *)((int)param_1 + 0x17);
    uStack_238 = *(undefined1 *)(param_1 + 6);
    uStack_237 = *(undefined1 *)((int)param_1 + 0x19);
    uStack_236 = *(undefined1 *)((int)param_1 + 0x1a);
    uStack_235 = *(undefined1 *)((int)param_1 + 0x1b);
    uStack_234 = *(undefined1 *)(param_1 + 7);
    uStack_231 = *(undefined1 *)((int)param_1 + 0x1f);
    uStack_230 = *(undefined1 *)(param_1 + 8);
    uStack_233 = *(undefined1 *)((int)param_1 + 0x1d);
    uStack_232 = *(undefined1 *)((int)param_1 + 0x1e);
    uStack_22f = *(undefined1 *)((int)param_1 + 0x21);
    uStack_22e = *(undefined1 *)((int)param_1 + 0x22);
    uStack_22d = *(undefined1 *)((int)param_1 + 0x23);
    uStack_22c = *(undefined1 *)(param_1 + 9);
    uStack_22b = *(undefined1 *)((int)param_1 + 0x25);
    FUN_00551fd4(auStack_228,param_1[10]);
    local_2cc = (char *)(param_1 + 0xc);
    local_2c8 = strlen((char *)(param_1 + 0xc));
    if (param_1[0x15] - 1 < 2) {
      if (param_1[0x15] == 1) {
        local_288 = 6;
      }
      else {
        local_288 = 4;
      }
      local_284 = 3;
      local_280 = 0;
      local_27c = 0x3040000;
      local_258 = &local_2cc;
      local_278 = 2;
      if (param_1[0x14] == 0) {
        local_260 = *(int *)(iVar3 + 100);
LAB_0058cf08:
        if (local_260 == 0) goto LAB_0058cde4;
      }
      else {
        FUN_0058ac48(param_2,param_1[0x14]);
        FUN_0053e40c(local_2e0,param_1[0x14]);
        local_25b = FUN_005c1f38(param_1[0x14]);
        FUN_005436b8(param_1[0x14],&local_2c4);
        if (((local_2c4 != 0) && (local_2bc != 0)) && (local_2c0 == 4)) {
          local_260 = FUN_005533d4(local_2bc);
          goto LAB_0058cf08;
        }
        local_260 = 0;
LAB_0058cde4:
        if (param_1[0x14] == 0) goto LAB_0058caf0;
        puVar6 = auStack_2b8;
        iVar3 = 0;
        puVar5 = auStack_2b8 + 5;
        FUN_0054a9e8(puVar6,param_1[0x14]);
        puVar7 = puVar6;
        puVar8 = puVar6;
        do {
          uVar2 = *puVar8;
          if (uVar2 == 6) {
LAB_0058cec4:
            local_264 = *puVar5;
            local_268 = puVar7[1];
          }
          else if (uVar2 < 7) {
            if (uVar2 == 4) goto LAB_0058cec4;
          }
          else if (uVar2 == 7) {
            local_26c = *puVar5;
            local_270 = puVar6[1];
          }
          else if (uVar2 == 9) {
            local_260 = FUN_005534b0();
          }
          bVar1 = iVar3 != 1;
          puVar6 = puVar6 + 6;
          puVar7 = puVar7 + 6;
          puVar8 = puVar8 + 6;
          puVar5 = puVar5 + 6;
          iVar3 = iVar3 + 1;
        } while (bVar1);
      }
      iVar3 = FUN_0059fdd4(local_2dc,&local_288);
    }
    else {
      auStack_2b8[6] = 0;
      auStack_2b8[0] = 0;
      auStack_2b8[1] = 0;
      auStack_2b8[2] = 0;
      auStack_2b8[3] = 0;
      auStack_2b8[4] = 0;
      auStack_2b8[5] = 0;
      FUN_0058aa18(param_1[0x16]);
      if ((uint)param_1[0x15] < 5) {
                    /* WARNING: Could not recover jumptable at 0x0058cf98. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        uVar4 = (*(code *)(PTR_DAT_0071be64 + *(int *)(PTR_DAT_0071be64 + param_1[0x15] * 4)))();
        return uVar4;
      }
      iVar3 = FUN_0059fcf0(local_2dc,local_2d4);
    }
    uVar4 = 0xfffffffb;
    if (iVar3 != -1) {
      uVar4 = (*(code *)**(undefined4 **)(PTR_PTR_0071be40 + 0x2c))
                        (param_2,4,0x3d,iVar3 + 0x34,&uStack_250,0,0,&uStack_23b);
    }
  }
  return uVar4;
}


// 0x058d010 (0x43c bytes)
undefined4 FUN_0058d010(undefined4 *param_1,int param_2)

{
  bool bVar1;
  int iVar2;
  undefined4 uVar3;
  int *piVar4;
  GPiece<4> local_2e0;
  char *local_2dc;
  size_t local_2d8;
  undefined1 *local_2d4;
  undefined4 local_2d0;
  int local_2cc;
  short local_2c8;
  int local_2c4;
  int aiStack_2c0 [12];
  undefined4 local_290;
  undefined4 local_28c;
  undefined4 local_288;
  undefined4 local_284;
  undefined4 local_280;
  int local_268;
  undefined1 local_263;
  char **local_260;
  undefined4 uStack_258;
  undefined1 uStack_254;
  undefined1 uStack_253;
  undefined1 uStack_252;
  undefined1 uStack_251;
  undefined1 uStack_250;
  undefined1 uStack_24f;
  undefined1 uStack_24e;
  undefined1 uStack_24d;
  undefined1 uStack_24c;
  undefined1 uStack_24b;
  undefined1 uStack_24a;
  undefined1 uStack_249;
  undefined1 uStack_248;
  undefined1 uStack_247;
  undefined1 uStack_246;
  undefined1 uStack_245;
  undefined1 uStack_244;
  undefined1 uStack_243;
  undefined1 uStack_242;
  undefined1 uStack_241;
  undefined1 uStack_240;
  undefined1 uStack_23f;
  undefined1 uStack_23e;
  undefined1 uStack_23d;
  undefined1 uStack_23c;
  undefined1 uStack_23b;
  undefined1 uStack_23a;
  undefined1 uStack_239;
  undefined1 uStack_238;
  undefined1 uStack_237;
  undefined1 uStack_236;
  undefined1 uStack_235;
  undefined1 uStack_234;
  undefined1 uStack_233;
  GPiece<12> auStack_230;
  GPiece<476> auStack_224;
  
  if ((param_1 == (undefined4 *)0x0) || (param_2 == 0)) {
LAB_0058d04c:
    uVar3 = 0xffffffeb;
  }
  else {
    iVar2 = FUN_005827f8(param_2);
    if (iVar2 == 0) {
      return 0xffffffe5;
    }
    *(undefined1 *)(param_1 + 5) = 0;
    *(undefined1 *)((int)param_1 + 0x25) = 0;
    *(undefined1 *)((int)param_1 + 0x4f) = 0;
    uStack_258 = *param_1;
    uStack_254 = *(undefined1 *)(param_1 + 1);
    uStack_253 = *(undefined1 *)((int)param_1 + 5);
    uStack_252 = *(undefined1 *)((int)param_1 + 6);
    uStack_251 = *(undefined1 *)((int)param_1 + 7);
    uStack_250 = *(undefined1 *)(param_1 + 2);
    uStack_24f = *(undefined1 *)((int)param_1 + 9);
    uStack_24e = *(undefined1 *)((int)param_1 + 10);
    uStack_24d = *(undefined1 *)((int)param_1 + 0xb);
    uStack_24a = *(undefined1 *)((int)param_1 + 0xe);
    uStack_249 = *(undefined1 *)((int)param_1 + 0xf);
    uStack_24c = *(undefined1 *)(param_1 + 3);
    uStack_24b = *(undefined1 *)((int)param_1 + 0xd);
    uStack_245 = *(undefined1 *)((int)param_1 + 0x13);
    uStack_248 = *(undefined1 *)(param_1 + 4);
    uStack_247 = *(undefined1 *)((int)param_1 + 0x11);
    uStack_246 = *(undefined1 *)((int)param_1 + 0x12);
    uStack_244 = *(undefined1 *)(param_1 + 5);
    uStack_243 = *(undefined1 *)((int)param_1 + 0x15);
    uStack_242 = *(undefined1 *)((int)param_1 + 0x16);
    uStack_241 = *(undefined1 *)((int)param_1 + 0x17);
    uStack_240 = *(undefined1 *)(param_1 + 6);
    uStack_23f = *(undefined1 *)((int)param_1 + 0x19);
    uStack_23e = *(undefined1 *)((int)param_1 + 0x1a);
    uStack_23d = *(undefined1 *)((int)param_1 + 0x1b);
    uStack_23c = *(undefined1 *)(param_1 + 7);
    uStack_239 = *(undefined1 *)((int)param_1 + 0x1f);
    uStack_238 = *(undefined1 *)(param_1 + 8);
    uStack_23b = *(undefined1 *)((int)param_1 + 0x1d);
    uStack_23a = *(undefined1 *)((int)param_1 + 0x1e);
    uStack_237 = *(undefined1 *)((int)param_1 + 0x21);
    uStack_236 = *(undefined1 *)((int)param_1 + 0x22);
    uStack_235 = *(undefined1 *)((int)param_1 + 0x23);
    uStack_234 = *(undefined1 *)(param_1 + 9);
    uStack_233 = *(undefined1 *)((int)param_1 + 0x25);
    FUN_00551fd4(auStack_230,param_1[10]);
    local_2dc = (char *)(param_1 + 0xc);
    local_2d8 = strlen((char *)(param_1 + 0xc));
    local_2d0 = 0x1cc;
    local_2d4 = auStack_224;
    if (param_1[0x15] == 0) {
      local_290 = 5;
LAB_0058d288:
      local_28c = 3;
      local_288 = 0;
      local_284 = 0x3040000;
      local_260 = &local_2dc;
      local_280 = 2;
      if (param_1[0x14] == 0) {
        local_268 = *(int *)(iVar2 + 100);
LAB_0058d488:
        if (local_268 == 0) goto LAB_0058d32c;
      }
      else {
        FUN_0058ac48(param_2,param_1[0x14]);
        FUN_0053e40c(local_2e0,param_1[0x14]);
        local_263 = FUN_005c1f38(param_1[0x14]);
        FUN_005436b8(param_1[0x14],&local_2cc);
        if (((local_2cc != 0) && (local_2c4 != 0)) && (local_2c8 == 4)) {
          local_268 = FUN_005533d4(local_2c4);
          goto LAB_0058d488;
        }
        local_268 = 0;
LAB_0058d32c:
        if (param_1[0x14] == 0) goto LAB_0058d04c;
        piVar4 = aiStack_2c0;
        iVar2 = 0;
        FUN_0054a9e8(piVar4,param_1[0x14]);
        do {
          if (*piVar4 - 4U < 6) {
                    /* WARNING: Could not recover jumptable at 0x0058d384. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            uVar3 = (*(code *)(PTR_DAT_0071be68 + *(int *)(PTR_DAT_0071be68 + (*piVar4 + -4) * 4)))
                              ();
            return uVar3;
          }
          bVar1 = iVar2 != 1;
          piVar4 = piVar4 + 6;
          iVar2 = iVar2 + 1;
        } while (bVar1);
      }
      iVar2 = FUN_0059fdd4(&local_2d4,&local_290);
      if (iVar2 != -1) {
        uVar3 = (*(code *)**(undefined4 **)(PTR_PTR_0071be40 + 0x2c))
                          (param_2,4,0x3d,iVar2 + 0x34,&uStack_258,0,0,&uStack_243);
        return uVar3;
      }
    }
    else if (param_1[0x15] == 1) {
      local_290 = 3;
      goto LAB_0058d288;
    }
    uVar3 = 0xfffffffb;
  }
  return uVar3;
}


// 0x058d4c8 (0x2b0 bytes)
undefined4 FUN_0058d4c8(undefined4 *param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  GPiece<8> local_250;
  undefined4 local_248;
  undefined4 local_244;
  undefined4 local_240;
  undefined4 *local_23c;
  undefined4 uStack_238;
  undefined1 uStack_234;
  undefined1 uStack_233;
  undefined1 uStack_232;
  undefined1 uStack_231;
  undefined1 uStack_230;
  undefined1 uStack_22f;
  undefined1 uStack_22e;
  undefined1 uStack_22d;
  undefined1 uStack_22c;
  undefined1 uStack_22b;
  undefined1 uStack_22a;
  undefined1 uStack_229;
  undefined1 uStack_228;
  undefined1 uStack_227;
  undefined1 uStack_226;
  undefined1 uStack_225;
  undefined1 uStack_224;
  undefined1 uStack_223;
  undefined1 uStack_222;
  undefined1 uStack_221;
  undefined1 uStack_220;
  undefined1 uStack_21f;
  undefined1 uStack_21e;
  undefined1 uStack_21d;
  undefined1 uStack_21c;
  undefined1 uStack_21b;
  undefined1 uStack_21a;
  undefined1 uStack_219;
  undefined1 uStack_218;
  undefined1 uStack_217;
  undefined1 uStack_216;
  undefined1 uStack_215;
  undefined1 uStack_214;
  undefined1 uStack_213;
  GPiece<4> auStack_210;
  GPiece<4> auStack_20c;
  GPiece<480> auStack_208;
  
  if ((param_1 == (undefined4 *)0x0) || (param_2 == 0)) {
    uVar2 = 0xffffffeb;
  }
  else {
    *(undefined1 *)(param_1 + 5) = 0;
    *(undefined1 *)((int)param_1 + 0x25) = 0;
    uStack_238 = *param_1;
    uStack_234 = *(undefined1 *)(param_1 + 1);
    uStack_233 = *(undefined1 *)((int)param_1 + 5);
    uStack_232 = *(undefined1 *)((int)param_1 + 6);
    uStack_231 = *(undefined1 *)((int)param_1 + 7);
    uStack_230 = *(undefined1 *)(param_1 + 2);
    uStack_22f = *(undefined1 *)((int)param_1 + 9);
    uStack_22e = *(undefined1 *)((int)param_1 + 10);
    uStack_22d = *(undefined1 *)((int)param_1 + 0xb);
    uStack_229 = *(undefined1 *)((int)param_1 + 0xf);
    uStack_22c = *(undefined1 *)(param_1 + 3);
    uStack_22b = *(undefined1 *)((int)param_1 + 0xd);
    uStack_22a = *(undefined1 *)((int)param_1 + 0xe);
    uStack_228 = *(undefined1 *)(param_1 + 4);
    uStack_227 = *(undefined1 *)((int)param_1 + 0x11);
    uStack_226 = *(undefined1 *)((int)param_1 + 0x12);
    uStack_225 = *(undefined1 *)((int)param_1 + 0x13);
    uStack_224 = *(undefined1 *)(param_1 + 5);
    uStack_223 = *(undefined1 *)((int)param_1 + 0x15);
    uStack_222 = *(undefined1 *)((int)param_1 + 0x16);
    uStack_221 = *(undefined1 *)((int)param_1 + 0x17);
    uStack_220 = *(undefined1 *)(param_1 + 6);
    uStack_21f = *(undefined1 *)((int)param_1 + 0x19);
    uStack_21e = *(undefined1 *)((int)param_1 + 0x1a);
    uStack_21d = *(undefined1 *)((int)param_1 + 0x1b);
    uStack_21c = *(undefined1 *)(param_1 + 7);
    uStack_218 = *(undefined1 *)(param_1 + 8);
    uStack_21b = *(undefined1 *)((int)param_1 + 0x1d);
    uStack_21a = *(undefined1 *)((int)param_1 + 0x1e);
    uStack_219 = *(undefined1 *)((int)param_1 + 0x1f);
    uStack_217 = *(undefined1 *)((int)param_1 + 0x21);
    uStack_216 = *(undefined1 *)((int)param_1 + 0x22);
    uStack_215 = *(undefined1 *)((int)param_1 + 0x23);
    uStack_214 = *(undefined1 *)(param_1 + 9);
    uStack_213 = *(undefined1 *)((int)param_1 + 0x25);
    FUN_00551fd4(auStack_210,param_1[10]);
    FUN_00551fd4(auStack_20c,param_1[0xc]);
    FUN_00551fd4(auStack_208,param_1[0xd]);
    local_244 = param_1[0xf];
    local_248 = param_1[0xe];
    local_240 = param_1[0xb];
    local_23c = &local_248;
    iVar1 = FUN_0059fc48(local_250,&local_240);
    uVar2 = 0xfffffffb;
    if (iVar1 != -1) {
      uVar2 = (*(code *)**(undefined4 **)(PTR_PTR_0071be40 + 0x2c))
                        (param_2,4,0x3d,iVar1 + 0x34,&uStack_238,0,0,&uStack_223);
    }
  }
  return uVar2;
}


// 0x058d778 (0x1b4 bytes)
void FUN_0058d778(int *param_1,int param_2,undefined8 param_3,undefined8 param_4,undefined8 param_5)

{
  int iVar1;
  GPiece<4> auStack_b0;
  int local_ac;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  GPiece<64> auStack_80;
  
  uStack_88 = 0;
  uStack_a8 = 0;
  uStack_a0 = 0;
  uStack_98 = 0;
  uStack_90 = 0;
  iVar1 = FUN_00582b0c(param_5,&uStack_a8,auStack_b0,&local_ac,0);
  if ((iVar1 == 0) && (local_ac != 0)) {
    FUN_0058ae18(auStack_80);
    if ((param_1 == (int *)0x0) || ((*param_1 == 0 || (param_1[2] == 0)))) {
      FUN_005533d4(*(undefined4 *)(param_2 + 8));
      FUN_005533ac(*(undefined4 *)(param_2 + 8));
      FUN_0058d4c8(auStack_80,&uStack_a8);
      return;
    }
    FUN_005533d4(param_1[2]);
    FUN_005533ac(param_1[2]);
    FUN_005533d4(*(undefined4 *)(param_2 + 8));
    FUN_005533ac(*(undefined4 *)(param_2 + 8));
    FUN_0058d4c8(auStack_80,&uStack_a8);
  }
  return;
}


// 0x058d92c (0x3c bytes)
undefined * FUN_0058d92c(void)

{
  int *piVar1;
  longlong lVar2;
  
  lVar2 = 0xe;
  piVar1 = (int *)PTR_PTR_0071be6c;
  do {
    if (*piVar1 == 0) {
      return (undefined *)0x0;
    }
    lVar2 = lVar2 + -1;
    piVar1 = piVar1 + 1;
  } while (lVar2 != 0);
  return PTR_PTR_0071be6c;
}


// 0x058d968 (0x44 bytes)
undefined4 FUN_0058d968(int *param_1,int param_2,int param_3,int param_4)

{
  undefined4 uVar1;
  
  if (((param_1 == (int *)0x0) || (param_2 == 0)) || (uVar1 = 0, param_3 == 0)) {
    uVar1 = 0xffffffeb;
  }
  else {
    *param_1 = param_2;
    *(undefined2 *)(param_1 + 4) = 0;
    param_1[1] = param_3;
    param_1[2] = param_4;
    param_1[3] = param_4;
  }
  return uVar1;
}


// 0x058d9ac (0x30 bytes)
undefined4 FUN_0058d9ac(undefined4 *param_1)

{
  undefined4 uVar1;
  
  uVar1 = 0xffffffeb;
  if (param_1 != (undefined4 *)0x0) {
    *param_1 = 0;
    *(undefined2 *)(param_1 + 4) = 0xffff;
    uVar1 = 0;
    param_1[3] = 0;
    param_1[1] = 0;
  }
  return uVar1;
}


// 0x058d9dc (0xa0 bytes)
uint FUN_0058d9dc(int param_1)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  ushort uVar4;
  
  if (param_1 == 0) {
    return 0xffff;
  }
  uVar4 = *(ushort *)(param_1 + 0x10);
  if (uVar4 < 0x20) {
    uVar2 = (uint)uVar4;
    uVar3 = uVar2;
    do {
      uVar1 = *(uint *)(param_1 + 0xc) >> (uVar3 & 0x3f);
      if ((uVar1 & 1) != 0) {
        *(ushort *)(param_1 + 0x10) = uVar4;
        return uVar2;
      }
      if (uVar1 == 0) {
        return 0xffff;
      }
      uVar3 = uVar3 + 1;
      uVar4 = (ushort)uVar3;
      uVar2 = uVar3 & 0xffff;
    } while (uVar2 != 0x20);
  }
  *(undefined2 *)(param_1 + 0x10) = 0xffff;
  return 0xffff;
}


// 0x058da7c (0x40 bytes)
undefined2 FUN_0058da7c(int param_1)

{
  undefined2 uVar1;
  
  uVar1 = 0xffff;
  if (param_1 != 0) {
    uVar1 = FUN_0058d9dc(param_1);
  }
  return uVar1;
}


// 0x058dabc (0x94 bytes)
undefined4 FUN_0058dabc(int param_1)

{
  int iVar1;
  ulonglong uVar2;
  
  if (param_1 != 0) {
    uVar2 = FUN_0058d9dc(param_1);
    if (((int)(uVar2 & 0xffff) != 0xffff) &&
       (iVar1 = *(int *)((int)((uVar2 & 0xffff) << 2) + *(int *)(*(int *)(param_1 + 4) + 8)),
       iVar1 != 0)) {
      return *(undefined4 *)(iVar1 + 4);
    }
  }
  return 0;
}


// 0x058db50 (0x1b4 bytes)
undefined4 FUN_0058db50(undefined4 *param_1,int *param_2)

{
  ushort uVar1;
  ushort *puVar2;
  uint uVar3;
  uint uVar4;
  undefined4 uVar5;
  uint uVar6;
  int iVar7;
  ulonglong uVar8;
  int iVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  
  if (param_1 != (undefined4 *)0x0) {
    puVar2 = (ushort *)*param_2;
    uVar1 = *puVar2;
    if ((uVar1 != 0xffff) &&
       (uVar3 = param_1[3], (uVar3 & ~(0xffffffffU >> (0x1f - uVar1 & 0x3f))) == 0)) {
      uVar4 = *(uint *)(puVar2 + 0xc);
      uVar5 = *param_1;
      if ((int)uVar4 < 2) {
        uVar6 = param_2[1];
        uVar8 = (ulonglong)*(uint *)(puVar2 + 8);
        if (uVar4 != 1) {
LAB_0058dcd8:
          param_1[3] = uVar3 | 1 << (uVar1 & 0x3f);
          return 0;
        }
      }
      else {
        uVar6 = param_2[1];
        uVar8 = (ulonglong)*(uint *)(puVar2 + 8) / (ulonglong)uVar4;
      }
      uVar10 = (ulonglong)uVar6;
      iVar9 = 0;
      uVar11 = uVar10;
      while( true ) {
        iVar9 = iVar9 + 1;
        iVar7 = (*(code *)**(undefined4 **)(puVar2 + 6))(uVar10,*(undefined4 *)(puVar2 + 4));
        uVar10 = uVar11 & 0xffffffff;
        uVar11 = uVar11 + uVar8;
        if (iVar7 == 0) break;
        iVar7 = (*(code *)**(undefined4 **)(*param_2 + 0x14))(uVar5,uVar10);
        if (iVar7 == 0) {
          return 0xffffffeb;
        }
        if ((int)uVar4 <= iVar9) {
          uVar3 = param_1[3];
          goto LAB_0058dcd8;
        }
        puVar2 = (ushort *)*param_2;
        uVar10 = (ulonglong)(uint)param_2[1];
      }
      (*(code *)**(undefined4 **)(PTR_PTR_0071be70 + 0x18))(param_2);
    }
  }
  return 0xffffffeb;
}


// 0x058dd04 (0x1c8 bytes)
undefined4 FUN_0058dd04(int param_1,int param_2,uint param_3,int param_4)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  undefined *puVar4;
  short sVar7;
  int iVar5;
  uint uVar6;
  short sVar8;
  short sVar9;
  GPiece<16> local_80;
  GPiece<16> local_70;
  
  puVar4 = PTR_PTR_0071be74;
  sVar7 = (*(code *)**(undefined4 **)(PTR_PTR_0071be74 + 0x1c))(param_2);
  if ((((param_1 != 0) && (param_2 != 0)) && (param_4 != 0)) &&
     (iVar1 = *(int *)(param_1 + 4), iVar5 = (*(code *)**(undefined4 **)(puVar4 + 0x34))(param_2),
     iVar1 == iVar5)) {
    if (sVar7 != 0) {
      puVar2 = *(undefined4 **)(puVar4 + 8);
      puVar3 = *(undefined4 **)(puVar4 + 0x14);
      sVar8 = 0;
      do {
        sVar9 = sVar8 + 1;
        uVar6 = (*(code *)*puVar3)(param_2,sVar8);
        if ((1 << (uVar6 & 0x3f) & param_3) != 0) {
          (*(code *)*puVar2)(local_70,param_2,sVar8,param_4);
          FUN_0058db50(param_1,local_80);
        }
        sVar8 = sVar9;
      } while (sVar7 != sVar9);
    }
    return 0;
  }
  return 0xffffffeb;
}


// 0x058decc (0x84 bytes)
uint FUN_0058decc(int param_1)

{
  uint uVar3;
  ulonglong uVar1;
  longlong lVar2;
  
  uVar3 = 0;
  if (param_1 != 0) {
    uVar1 = ((ulonglong)*(uint *)(param_1 + 0xc) & 0x55555555) +
            ((ulonglong)(*(uint *)(param_1 + 0xc) >> 1) & 0x55555555);
    uVar1 = (uVar1 & 0x33333333) + ((uVar1 << 0x20) >> 0x22 & 0x33333333);
    uVar1 = (uVar1 & 0xf0f0f0f) + ((uVar1 << 0x20) >> 0x24 & 0xf0f0f0f);
    lVar2 = (uVar1 & 0xff00ff) + ((uVar1 << 0x20) >> 0x28 & 0xff00ff);
    uVar3 = (int)lVar2 + (uint)(ushort)((ulonglong)lVar2 >> 0x10) & 0xffff;
  }
  return uVar3;
}


// 0x058df50 (0x8 bytes)
undefined8 FUN_0058df50(void)

{
  return 0x14;
}


// 0x058df58 (0x1c bytes)
void FUN_0058df58(int param_1)

{
  if (param_1 == 0) {
    return;
  }
  *(undefined4 *)(param_1 + 0xc) = *(undefined4 *)(param_1 + 8);
  *(undefined2 *)(param_1 + 0x10) = 0;
  return;
}


// 0x058df74 (0x8 bytes)
undefined8 FUN_0058df74(void)

{
  return 0xffffffffffffffec;
}


// 0x058df7c (0x1bc bytes)
undefined4 FUN_0058df7c(undefined4 *param_1,int *param_2)

{
  uint uVar1;
  undefined4 uVar2;
  uint uVar3;
  ulonglong uVar4;
  ushort uVar6;
  int iVar5;
  ushort *puVar7;
  ulonglong uVar8;
  int iVar9;
  ulonglong uVar10;
  
  if (param_1 != (undefined4 *)0x0) {
    uVar6 = FUN_0058d9dc(param_1);
    if ((uVar6 == 0xffff) || (puVar7 = (ushort *)*param_2, *puVar7 != uVar6)) {
      return 0xfffffff4;
    }
    uVar1 = *(uint *)(puVar7 + 0xc);
    uVar2 = *param_1;
    if ((int)uVar1 < 2) {
      uVar8 = (ulonglong)*(uint *)(puVar7 + 8);
      uVar3 = param_2[1];
      if (uVar1 != 1) {
LAB_0058e104:
        param_1[3] = param_1[3] &
                     ((uint)(-0x100000002 << ((ulonglong)*puVar7 & 0x1f)) |
                     (uint)(0xfffffffefffffffe >> 0x40 - ((ulonglong)*puVar7 & 0x1f)));
        return 0;
      }
    }
    else {
      uVar3 = param_2[1];
      uVar8 = (ulonglong)*(uint *)(puVar7 + 8) / (ulonglong)uVar1;
    }
    uVar10 = (ulonglong)uVar3;
    iVar9 = 0;
    while( true ) {
      uVar4 = uVar10 & 0xffffffff;
      iVar9 = iVar9 + 1;
      uVar10 = uVar10 + uVar8;
      iVar5 = (*(code *)**(undefined4 **)(puVar7 + 10))(uVar2,uVar4);
      if (iVar5 == 0) break;
      iVar5 = (*(code *)**(undefined4 **)(*param_2 + 0xc))(param_2[1],*(undefined4 *)(*param_2 + 8))
      ;
      if (iVar5 == 0) {
        (*(code *)**(undefined4 **)(PTR_PTR_0071be70 + 0x18))(param_2);
        return 0xffffffeb;
      }
      if ((int)uVar1 <= iVar9) {
        puVar7 = (ushort *)*param_2;
        goto LAB_0058e104;
      }
      puVar7 = (ushort *)*param_2;
    }
  }
  return 0xffffffeb;
}


// 0x058e138 (0x1d8 bytes)
undefined8 FUN_0058e138(undefined4 *param_1,ulonglong param_2)

{
  undefined4 *puVar1;
  code *pcVar2;
  undefined4 uVar3;
  uint uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  longlong lVar7;
  ulonglong *puVar8;
  ulonglong *puVar9;
  ulonglong uVar10;
  undefined *puVar11;
  ulonglong uVar12;
  ulonglong uVar13;
  ulonglong uVar14;
  int iVar15;
  ulonglong unaff_r24;
  ulonglong unaff_r25;
  ulonglong unaff_r26;
  ulonglong uVar16;
  ulonglong unaff_r27;
  ulonglong unaff_r28;
  ulonglong unaff_r29;
  int iVar17;
  ulonglong unaff_r30;
  ulonglong unaff_r31;
  ulonglong in_LR;
  
  uVar12 = ZEXT48(&stack0x00000000);
  puVar8 = (ulonglong *)(uVar12 - 0xb0);
  *puVar8 = uVar12;
  puVar8[0xe] = unaff_r24;
  puVar11 = PTR_PTR_0071be70;
  puVar8[0x15] = unaff_r31;
  puVar8[0xf] = unaff_r25;
  puVar8[0x12] = unaff_r28;
  puVar1 = *(undefined4 **)(puVar11 + 8);
  puVar8[0x14] = unaff_r30;
  puVar8[0x18] = in_LR;
  puVar8[0x10] = unaff_r26;
  puVar8[0x11] = unaff_r27;
  puVar8[0x13] = unaff_r29;
  puVar8[0x1d] = param_2;
  pcVar2 = (code *)*puVar1;
  puVar8[5] = ZEXT48(&TOC_BASE);
  uVar14 = (*pcVar2)(uVar12 + 0x38);
  uVar13 = puVar8[5];
  lVar7 = (uVar12 - 0xb0) - ((uVar14 & 0xffffffff) + 0x1e & 0xfffffffffffffff0);
  puVar9 = (ulonglong *)lVar7;
  *puVar9 = *puVar8;
  uVar14 = lVar7 + 0x7fU & 0xfffffff0;
  if (param_1 != (undefined4 *)0x0) {
    iVar15 = *(int *)(puVar8 + 0x1d);
    uVar3 = *param_1;
    *(int *)((int)puVar8 + 0xec) = (int)uVar14;
    uVar4 = *(uint *)(iVar15 + 0x18);
    if ((int)uVar4 < 2) {
      uVar16 = (ulonglong)*(uint *)(iVar15 + 0x10);
      if (uVar4 != 1) {
        return 1;
      }
    }
    else {
      uVar16 = (ulonglong)*(uint *)(iVar15 + 0x10) / (ulonglong)uVar4;
    }
    iVar17 = 0;
    while( true ) {
      uVar10 = uVar14 & 0xffffffff;
      iVar17 = iVar17 + 1;
      uVar14 = uVar14 + uVar16;
      pcVar2 = (code *)**(undefined4 **)(iVar15 + 0x14);
      puVar9[5] = uVar13;
      iVar15 = (*pcVar2)(uVar3,uVar10);
      if (iVar15 == 0) break;
      uVar5 = *(undefined4 *)((int)puVar8 + 0xec);
      uVar6 = *(undefined4 *)(*(int *)(puVar8 + 0x1d) + 8);
      pcVar2 = (code *)**(undefined4 **)(*(int *)(puVar8 + 0x1d) + 0xc);
      puVar9[5] = puVar9[5];
      iVar15 = (*pcVar2)(uVar5,uVar6);
      uVar13 = puVar9[5];
      if (iVar15 == 0) {
        pcVar2 = (code *)**(undefined4 **)(puVar11 + 0x18);
        puVar9[5] = uVar13;
        (*pcVar2)(uVar12 + 0x38);
        return 0;
      }
      if ((int)uVar4 <= iVar17) {
        return 1;
      }
      iVar15 = *(int *)(puVar8 + 0x1d);
    }
  }
  return 0;
}


// 0x058e310 (0x14c bytes)
undefined4 FUN_0058e310(int param_1)

{
  undefined4 *puVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  undefined8 local_50 [3];
  
  if (param_1 == 0) {
    return 0xffffffeb;
  }
  uVar3 = FUN_0058d9dc(param_1);
  uVar2 = uVar3 & 0xffff;
  if ((uVar2 != 0xffff) && (*(int *)(param_1 + 0xc) != 0)) {
    puVar1 = *(undefined4 **)(PTR_PTR_0071be78 + 8);
    do {
      (*(code *)*puVar1)(local_50,*(undefined4 *)(param_1 + 4),uVar3 & 0xffff,0);
      iVar4 = FUN_0058e138(param_1,local_50[0]);
      if (iVar4 == 0) {
        return 0xffffffeb;
      }
      *(uint *)(param_1 + 0xc) = *(uint *)(param_1 + 0xc) & ~(1 << (uVar2 & 0x3f));
      uVar3 = FUN_0058d9dc(param_1);
      uVar2 = uVar3 & 0xffff;
    } while ((uVar2 != 0xffff) && (*(int *)(param_1 + 0xc) != 0));
  }
  return 0;
}


// 0x058e45c (0x1b0 bytes)
undefined4 FUN_0058e45c(int param_1,int param_2,int param_3)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined *puVar3;
  int iVar5;
  ulonglong uVar4;
  int iVar6;
  GPiece<16> local_70;
  int local_60 [4];
  undefined4 local_50;
  undefined4 local_4c;
  
  puVar3 = PTR_PTR_0071be74;
  if ((((param_1 != 0) && (param_2 != 0)) && (param_3 != 0)) &&
     (iVar6 = *(int *)(param_1 + 4),
     iVar5 = (*(code *)**(undefined4 **)(PTR_PTR_0071be74 + 0x34))(param_2), iVar6 == iVar5)) {
    puVar1 = *(undefined4 **)(puVar3 + 0xc);
    puVar2 = *(undefined4 **)(PTR_PTR_0071be78 + 8);
    while( true ) {
      while( true ) {
        uVar4 = FUN_0058da7c(param_1);
        if (((uint)uVar4 & 0xffff) == 0xffff) {
          return 0;
        }
        (*(code *)*puVar1)(local_60,param_2,uVar4 & 0xffff,param_3);
        if (local_60[0] == 0) break;
        FUN_0058df7c(param_1,local_70);
      }
      (*(code *)*puVar2)(&local_50,*(undefined4 *)(param_1 + 4),uVar4 & 0xffff,0);
      iVar6 = FUN_0058e138(param_1,CONCAT44(local_50,local_4c));
      if (iVar6 == 0) break;
      *(uint *)(param_1 + 0xc) =
           *(uint *)(param_1 + 0xc) &
           ((uint)(-0x100000002 << (uVar4 & 0x1f)) |
           (uint)(0xfffffffefffffffe >> 0x40 - (uVar4 & 0x1f)));
    }
  }
  return 0xffffffeb;
}


// 0x058e60c (0x1e0 bytes)
undefined4 FUN_0058e60c(undefined4 *param_1,ulonglong param_2,uint param_3)

{
  ushort *puVar1;
  uint uVar2;
  undefined4 uVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  int iVar6;
  int iVar7;
  ulonglong uVar8;
  GPiece<16> local_40;
  
  if ((((param_2 == 0) || (param_3 == 0)) || (param_1 == (undefined4 *)0x0)) ||
     (iVar7 = param_1[1], iVar7 == 0)) {
    return 0xffffffeb;
  }
  uVar5 = FUN_0058d9dc(param_1);
  if ((int)(uVar5 & 0xffff) == 0xffff) {
    return 0xfffffff4;
  }
  puVar1 = *(ushort **)((int)((uVar5 & 0xffff) << 2) + *(int *)(iVar7 + 8));
  if (*(int *)(puVar1 + 2) == 0xb) {
    if (param_3 < *(uint *)(puVar1 + 8)) {
      return 0xffffffeb;
    }
  }
  else if (*(uint *)(puVar1 + 8) != param_3) {
    return 0xffffffeb;
  }
  uVar2 = *(uint *)(puVar1 + 0xc);
  uVar3 = *param_1;
  if ((int)uVar2 < 2) {
    uVar5 = (ulonglong)*(uint *)(puVar1 + 8);
    if (uVar2 != 1) goto LAB_0058e7a0;
  }
  else {
    uVar5 = (ulonglong)*(uint *)(puVar1 + 8) / (ulonglong)uVar2;
  }
  uVar8 = param_2 & 0xffffffff;
  iVar7 = 0;
  do {
    uVar4 = uVar8 & 0xffffffff;
    iVar7 = iVar7 + 1;
    uVar8 = uVar8 + uVar5;
    iVar6 = (*(code *)**(undefined4 **)(puVar1 + 10))(uVar3,uVar4);
    if (iVar6 == 0) {
      return 0xffffffeb;
    }
    iVar6 = (*(code *)**(undefined4 **)(puVar1 + 6))((int)param_2,*(undefined4 *)(puVar1 + 4));
    if (iVar6 == 0) {
      (*(code *)**(undefined4 **)(PTR_PTR_0071be70 + 0x18))(local_40);
      return 0xffffffeb;
    }
  } while (iVar7 < (int)uVar2);
LAB_0058e7a0:
  param_1[3] = param_1[3] &
               ((uint)(-0x100000002 << ((ulonglong)*puVar1 & 0x1f)) |
               (uint)(0xfffffffefffffffe >> 0x40 - ((ulonglong)*puVar1 & 0x1f)));
  return 0;
}


// 0x058e7ec (0x3c bytes)
undefined * FUN_0058e7ec(void)

{
  int *piVar1;
  longlong lVar2;
  
  lVar2 = 7;
  piVar1 = (int *)PTR_PTR_0071be7c;
  do {
    if (*piVar1 == 0) {
      return (undefined *)0x0;
    }
    lVar2 = lVar2 + -1;
    piVar1 = piVar1 + 1;
  } while (lVar2 != 0);
  return PTR_PTR_0071be7c;
}


// 0x058e828 (0x1c bytes)
undefined2 FUN_0058e828(undefined4 *param_1)

{
  undefined2 uVar1;
  
  uVar1 = 0;
  if (param_1 != (undefined4 *)0x0) {
    uVar1 = *(undefined2 *)*param_1;
  }
  return uVar1;
}


// 0x058e844 (0x1c bytes)
undefined4 FUN_0058e844(int *param_1)

{
  undefined4 uVar1;
  
  uVar1 = 0;
  if (param_1 != (int *)0x0) {
    uVar1 = *(undefined4 *)(*param_1 + 4);
  }
  return uVar1;
}


// 0x058e860 (0x28 bytes)
undefined4 FUN_0058e860(int *param_1)

{
  undefined4 uVar1;
  
  uVar1 = 0;
  if ((param_1 != (int *)0x0) && (*param_1 != 0)) {
    uVar1 = *(undefined4 *)(*param_1 + 0x10);
  }
  return uVar1;
}


// 0x058e888 (0x4 bytes)
void FUN_0058e888(void)

{
  return;
}


// 0x058e88c (0x7c bytes)
undefined4 FUN_0058e88c(int *param_1)

{
  if ((param_1 != (int *)0x0) && (param_1[1] != 0)) {
    FUN_00586918(*(undefined4 *)(*param_1 + 4));
    return 0;
  }
  return 0xffffffeb;
}


// 0x058e908 (0x80 bytes)
undefined4 FUN_0058e908(int *param_1,void *param_2,size_t param_3)

{
  size_t __n;
  
  if ((((param_1 != (int *)0x0) && (param_2 != (void *)0x0)) && (*param_1 != 0)) &&
     ((void *)param_1[1] != (void *)0x0)) {
    __n = *(size_t *)(*param_1 + 0x10);
    if ((__n != 0) && (__n == param_3)) {
      memcpy((void *)param_1[1],param_2,__n);
      return 0;
    }
  }
  return 0xffffffeb;
}


// 0x058e988 (0x98 bytes)
undefined4 FUN_0058e988(int *param_1,void *param_2,size_t param_3)

{
  int iVar1;
  uint uVar2;
  
  if ((((param_1 != (int *)0x0) && (param_2 != (void *)0x0)) && (iVar1 = *param_1, iVar1 != 0)) &&
     (((void *)param_1[1] != (void *)0x0 && (uVar2 = *(uint *)(iVar1 + 0x10), uVar2 != 0)))) {
    if (*(int *)(iVar1 + 4) == 0xb) {
      if (uVar2 <= param_3) goto LAB_0058e9f8;
    }
    else if (uVar2 == param_3) {
LAB_0058e9f8:
      memcpy(param_2,(void *)param_1[1],param_3);
      return 0;
    }
  }
  return 0xffffffeb;
}


// 0x058ea20 (0x90 bytes)
undefined4 FUN_0058ea20(int *param_1,int *param_2)

{
  size_t __n;
  undefined4 uVar1;
  
  uVar1 = 0xffffffeb;
  if ((((param_1 != (int *)0x0) && (param_2 != (int *)0x0)) && (*param_1 != 0)) &&
     (((*param_2 == *param_1 && ((void *)param_1[1] != (void *)0x0)) &&
      (((void *)param_2[1] != (void *)0x0 && (__n = *(size_t *)(*param_2 + 0x10), __n != 0)))))) {
    memcpy((void *)param_1[1],(void *)param_2[1],__n);
    uVar1 = 0;
  }
  return uVar1;
}


// 0x058eab0 (0x6c bytes)
void FUN_0058eab0(undefined4 *param_1,int param_2,ulonglong param_3,undefined4 param_4)

{
  int iVar1;
  undefined4 uVar2;
  
  if (param_2 == 0) {
    uVar2 = *(undefined4 *)PTR_DAT_0071be80;
    param_1[1] = *(undefined4 *)(PTR_DAT_0071be80 + 4);
    *param_1 = uVar2;
    return;
  }
  if ((param_3 & 0xffff) < (ulonglong)*(ushort *)(param_2 + 4)) {
    iVar1 = *(int *)(param_2 + 8);
    param_1[1] = param_4;
    *param_1 = *(undefined4 *)((int)((param_3 & 0xffff) << 2) + iVar1);
    return;
  }
  uVar2 = *(undefined4 *)PTR_DAT_0071be80;
  param_1[1] = *(undefined4 *)(PTR_DAT_0071be80 + 4);
  *param_1 = uVar2;
  return;
}


// 0x058eb1c (0x3c bytes)
void FUN_0058eb1c(longlong param_1)

{
  undefined4 uStack00000030;
  
  uStack00000030 = (undefined4)param_1;
  if (param_1 != 0) {
    FUN_005519f0(&stack0x00000030);
  }
  return;
}


// 0x058eb58 (0x168 bytes)
undefined4 * FUN_0058eb58(undefined4 param_1,longlong param_2,longlong param_3)

{
  ushort uVar1;
  short *psVar2;
  ushort *puVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  longlong lVar6;
  undefined4 *puVar7;
  uint uVar8;
  ulonglong uVar9;
  undefined4 *local_30 [4];
  
  puVar7 = (undefined4 *)param_2;
  if (puVar7 != (undefined4 *)0x0) {
    uVar4 = (ulonglong)(param_3 << 0x20) >> 0x22;
    uVar5 = uVar4 & 0xffff;
    if (((((int)uVar5 != 0) && (psVar2 = (short *)*puVar7, psVar2 != (short *)0x0)) &&
        (*psVar2 == 0)) &&
       (((*(int *)(psVar2 + 10) != 0 && (*(int *)(psVar2 + 8) != 0)) && (*(int *)(psVar2 + 4) != 0))
       )) {
      uVar8 = 1;
      uVar9 = 1;
      lVar6 = param_2 + 4;
      if (1 < uVar5) {
        do {
          puVar3 = (ushort *)*(undefined4 *)lVar6;
          if (puVar3 == (ushort *)0x0) {
            return (undefined4 *)0x0;
          }
          uVar1 = *puVar3;
          if ((uint)uVar1 != (uint)uVar9) {
            return (undefined4 *)0x0;
          }
          if (*(int *)(puVar3 + 10) == 0) {
            return (undefined4 *)0x0;
          }
          if (*(int *)(puVar3 + 8) == 0) {
            return (undefined4 *)0x0;
          }
          if (*(int *)(puVar3 + 4) == 0) {
            return (undefined4 *)0x0;
          }
          uVar9 = (ulonglong)uVar1 + 1 & 0xffff;
          uVar8 = uVar8 | 1 << (uVar1 & 0x3f);
          lVar6 = ((ulonglong)uVar1 + 1 & 0xffff) * 4 + param_2;
        } while (uVar9 < uVar5);
      }
      FUN_00551b80(local_30,0x10);
      *local_30[0] = param_1;
      local_30[0][2] = puVar7;
      *(short *)(local_30[0] + 1) = (short)uVar4;
      local_30[0][3] = uVar8;
      return local_30[0];
    }
  }
  return (undefined4 *)0x0;
}


// 0x058ecc0 (0x20 bytes)
int FUN_0058ecc0(int *param_1)

{
  int iVar1;
  
  iVar1 = 0;
  if (param_1 != (int *)0x0) {
    iVar1 = *param_1 * 8 + 8;
  }
  return iVar1;
}


// 0x058ece0 (0x5c bytes)
void FUN_0058ece0(undefined8 param_1,int *param_2)

{
  int iVar1;
  
  iVar1 = *param_2;
  FUN_00553b40(param_1,iVar1,0x15);
  FUN_00553b40(param_1,iVar1 + 0x15,0x11);
  return;
}


// 0x058ed3c (0x74 bytes)
void FUN_0058ed3c(undefined8 param_1,int *param_2)

{
  int iVar1;
  
  iVar1 = *param_2;
  FUN_00553b40(param_1,iVar1,0x15);
  FUN_00553b40(param_1,iVar1 + 0x15,0x11);
  FUN_00553b40(param_1,iVar1 + 0x26,0x24);
  return;
}


// 0x058edb0 (0x5c bytes)
void FUN_0058edb0(undefined8 param_1,int *param_2)

{
  int iVar1;
  
  iVar1 = *param_2;
  FUN_00553b40(param_1,iVar1,0x15);
  FUN_00553b40(param_1,iVar1 + 0x15,0x11);
  return;
}


// 0x058ee0c (0x8c bytes)
void FUN_0058ee0c(undefined8 param_1,int *param_2)

{
  int iVar1;
  
  iVar1 = *param_2;
  FUN_00553b40(param_1,iVar1,0x15);
  FUN_00553b40(param_1,iVar1 + 0x15,0x11);
  FUN_00553b40(param_1,iVar1 + 0x26,0x20);
  FUN_00553b40(param_1,iVar1 + 0x46,0x20);
  return;
}


// 0x058ee98 (0x9c bytes)
void FUN_0058ee98(undefined8 param_1,int *param_2)

{
  int iVar1;
  
  iVar1 = *param_2;
  FUN_00553b40(param_1,iVar1,0x15);
  FUN_00553b40(param_1,iVar1 + 0x15,0x11);
  FUN_00553f04(param_1,iVar1 + 0x28);
  FUN_00553f04(param_1,iVar1 + 0x2c);
  FUN_00553b40(param_1,iVar1 + 0x30,0x20);
  return;
}


// 0x058ef34 (0x12c bytes)
void FUN_0058ef34(int param_1,int *param_2)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  int iVar5;
  
  piVar1 = (int *)*param_2;
  iVar2 = param_2[1];
  FUN_00553f04(param_1,piVar1);
  if (*piVar1 < 1) {
    piVar4 = (int *)0x4;
    if (*(int *)(param_1 + 0x10) == 2) {
      piVar1[1] = 0;
    }
  }
  else {
    piVar4 = (int *)0x4;
    if (*(int *)(param_1 + 0x10) == 2) {
      piVar4 = piVar1 + 2;
      piVar1[1] = (int)piVar4;
    }
    iVar5 = 0;
    do {
      FUN_00553f04(param_1,iVar5 * 8 + piVar1[1] + 4);
      FUN_00553f04(param_1,iVar5 * 8 + piVar1[1]);
      iVar3 = iVar5 + 1;
      iVar5 = iVar5 + 1;
    } while (iVar3 < *piVar1);
    piVar4 = piVar4 + iVar5 * 2;
  }
  if ((int *)((int)piVar1 + iVar2) < piVar4) {
    *(undefined4 *)(param_1 + 0x18) = 1;
  }
  return;
}


// 0x058f060 (0x1b8 bytes)
void FUN_0058f060(int param_1,int *param_2)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int *piVar5;
  int *piVar6;
  int *piVar7;
  int *piVar8;
  int *piVar9;
  int local_60;
  GPiece<12> local_5c;
  
  piVar1 = (int *)*param_2;
  iVar2 = param_2[1];
  FUN_00553f04(param_1,piVar1);
  iVar3 = *piVar1;
  if (iVar3 < 1) {
    if (*(int *)(param_1 + 0x10) == 2) {
      piVar1[1] = 0;
    }
  }
  else {
    iVar4 = *(int *)(param_1 + 0x10);
    local_60 = 0;
    if (iVar4 == 2) {
      piVar7 = piVar1 + 2;
      piVar6 = piVar7 + iVar3;
      piVar1[1] = (int)piVar7;
      *piVar7 = (int)piVar6;
      piVar8 = piVar7;
    }
    else {
      piVar7 = (int *)0x0;
      piVar6 = (int *)piVar1[1] + iVar3;
      piVar8 = (int *)piVar1[1];
    }
    piVar5 = piVar8;
    if (piVar8 <= piVar6 + -1) {
      while( true ) {
        piVar9 = piVar5;
        if (iVar4 == 2) {
          *piVar9 = *piVar8 + local_60;
        }
        else if (iVar4 == 1) {
          local_60 = FUN_0058ecc0(*piVar9);
        }
        FUN_00553f04(param_1,&local_60);
        FUN_0058ef34(param_1,local_5c);
        piVar7 = (int *)((int)piVar7 + local_60 + 4);
        if (piVar6 + -1 < piVar9 + 1) break;
        iVar4 = *(int *)(param_1 + 0x10);
        piVar5 = piVar9 + 1;
        piVar8 = piVar9;
      }
    }
    if ((int *)((int)piVar1 + iVar2) < piVar7) {
      *(undefined4 *)(param_1 + 0x18) = 1;
    }
  }
  return;
}


// 0x058f218 (0x20c bytes)
void FUN_0058f218(int param_1,int *param_2)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  
  iVar2 = *param_2;
  iVar3 = param_2[1];
  FUN_00553b40(param_1,iVar2,0x15);
  FUN_00553b40(param_1,iVar2 + 0x15,0x11);
  FUN_00553f04(param_1,iVar2 + 0x28);
  FUN_00553f04(param_1,iVar2 + 0x2c);
  FUN_00553f04(param_1,iVar2 + 0x30);
  FUN_00553f04(param_1,iVar2 + 0x34);
  FUN_00553f04(param_1,iVar2 + 0x38);
  FUN_00553f04(param_1,iVar2 + 0x3c);
  iVar5 = *(int *)(param_1 + 0x10);
  bVar1 = iVar5 == 2;
  if (bVar1) {
    uVar6 = iVar2 + 0x48;
  }
  else {
    uVar6 = 0;
  }
  if (*(int *)(iVar2 + 0x2c) == 0) {
    if (bVar1) {
      *(undefined4 *)(iVar2 + 0x40) = 0;
    }
  }
  else {
    if (bVar1) {
      *(uint *)(iVar2 + 0x40) = uVar6;
    }
    iVar7 = 0;
    do {
      FUN_00553f04(param_1,iVar7 * 4 + *(int *)(iVar2 + 0x40));
      uVar4 = iVar7 + 1;
      iVar7 = iVar7 + 1;
    } while (uVar4 < *(uint *)(iVar2 + 0x2c));
    iVar5 = *(int *)(param_1 + 0x10);
    uVar6 = uVar6 + iVar7 * 4;
  }
  iVar7 = *(int *)(iVar2 + 0x3c);
  if (iVar7 == 0) {
    if (iVar5 == 2) {
      *(undefined4 *)(iVar2 + 0x44) = 0;
    }
  }
  else {
    if (iVar5 == 2) {
      *(uint *)(iVar2 + 0x44) = uVar6;
      FUN_00553b40(param_1,*(undefined4 *)(iVar2 + 0x44),iVar7);
      iVar5 = *(int *)(param_1 + 0x10);
    }
    else {
      FUN_00553b40(param_1,*(undefined4 *)(iVar2 + 0x44),iVar7);
      iVar5 = *(int *)(param_1 + 0x10);
    }
    if (iVar5 == 2) {
      uVar6 = uVar6 + *(int *)(iVar2 + 0x3c);
    }
  }
  if ((uint)(iVar2 + iVar3) < uVar6) {
    *(undefined4 *)(param_1 + 0x18) = 1;
  }
  return;
}


// 0x058f424 (0x1d0 bytes)
void FUN_0058f424(int param_1,int *param_2)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  
  iVar2 = *param_2;
  iVar3 = param_2[1];
  FUN_00553b40(param_1,iVar2,0x15);
  FUN_00553b40(param_1,iVar2 + 0x15,0x11);
  FUN_00553f04(param_1,iVar2 + 0x28);
  FUN_00553f04(param_1,iVar2 + 0x2c);
  FUN_00553f04(param_1,iVar2 + 0x3c);
  iVar5 = *(int *)(param_1 + 0x10);
  bVar1 = iVar5 == 2;
  if (bVar1) {
    uVar6 = iVar2 + 0x48;
  }
  else {
    uVar6 = 0;
  }
  if (*(int *)(iVar2 + 0x2c) == 0) {
    if (bVar1) {
      *(undefined4 *)(iVar2 + 0x40) = 0;
    }
  }
  else {
    if (bVar1) {
      *(uint *)(iVar2 + 0x40) = uVar6;
    }
    iVar7 = 0;
    do {
      FUN_00553f04(param_1,iVar7 * 4 + *(int *)(iVar2 + 0x40));
      uVar4 = iVar7 + 1;
      iVar7 = iVar7 + 1;
    } while (uVar4 < *(uint *)(iVar2 + 0x2c));
    iVar5 = *(int *)(param_1 + 0x10);
    uVar6 = uVar6 + iVar7 * 4;
  }
  iVar7 = *(int *)(iVar2 + 0x3c);
  if (iVar7 == 0) {
    if (iVar5 == 2) {
      *(undefined4 *)(iVar2 + 0x44) = 0;
    }
  }
  else {
    if (iVar5 == 2) {
      *(uint *)(iVar2 + 0x44) = uVar6;
      FUN_00553b40(param_1,*(undefined4 *)(iVar2 + 0x44),iVar7);
      iVar5 = *(int *)(param_1 + 0x10);
    }
    else {
      FUN_00553b40(param_1,*(undefined4 *)(iVar2 + 0x44),iVar7);
      iVar5 = *(int *)(param_1 + 0x10);
    }
    if (iVar5 == 2) {
      uVar6 = uVar6 + *(int *)(iVar2 + 0x3c);
    }
  }
  if ((uint)(iVar2 + iVar3) < uVar6) {
    *(undefined4 *)(param_1 + 0x18) = 1;
  }
  return;
}


// 0x058f5f4 (0x6c bytes)
void FUN_0058f5f4(undefined8 param_1,int *param_2)

{
  int iVar1;
  
  iVar1 = *param_2;
  FUN_00553b40(param_1,iVar1,0x15);
  FUN_00553f04(param_1,iVar1 + 0x18);
  FUN_00553f04(param_1,iVar1 + 0x1c);
  return;
}


// 0x058f660 (0x6c bytes)
void FUN_0058f660(undefined8 param_1,int *param_2)

{
  int iVar1;
  
  iVar1 = *param_2;
  FUN_00553b40(param_1,iVar1,0x11);
  FUN_00553f04(param_1,iVar1 + 0x14);
  FUN_00553f04(param_1,iVar1 + 0x18);
  return;
}


// 0x058f6cc (0xac bytes)
void FUN_0058f6cc(undefined8 param_1,uint *param_2)

{
  ulonglong uVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  
  uVar2 = (ulonglong)*param_2;
  FUN_00553b40(param_1,*param_2,0x15);
  FUN_00553b40(param_1,uVar2 + 0x15 & 0xffffffff,0x11);
  uVar3 = 0;
  FUN_00553f04(param_1,uVar2 + 0x28 & 0xffffffff);
  do {
    uVar1 = uVar3 & 0x3fffffff;
    uVar3 = uVar3 + 1;
    FUN_00553f04(param_1,uVar2 + 0x2c + uVar1 * 4 & 0xffffffff);
  } while (uVar3 != 3);
  return;
}


// 0x058f778 (0x70 bytes)
void FUN_0058f778(undefined8 param_1,int *param_2)

{
  int iVar1;
  
  iVar1 = *param_2;
  FUN_00553b40(param_1,iVar1,0x15);
  FUN_00553b40(param_1,iVar1 + 0x15,0x11);
  FUN_00553f04(param_1,iVar1 + 0x28);
  return;
}


// 0x058f7e8 (0x6c bytes)
void FUN_0058f7e8(undefined8 param_1,int *param_2)

{
  int iVar1;
  
  iVar1 = *param_2;
  FUN_00553b40(param_1,iVar1,0x15);
  FUN_00553f04(param_1,iVar1 + 0x18);
  FUN_00553f04(param_1,iVar1 + 0x1c);
  return;
}


// 0x058f854 (0xac bytes)
void FUN_0058f854(undefined8 param_1,int *param_2)

{
  int iVar1;
  
  iVar1 = *param_2;
  FUN_00553b40(param_1,iVar1,0x15);
  FUN_00553b40(param_1,iVar1 + 0x15,0x11);
  FUN_00553f04(param_1,iVar1 + 0x28);
  FUN_00553f04(param_1,iVar1 + 0x2c);
  FUN_00553f04(param_1,iVar1 + 0x30);
  FUN_00553f04(param_1,iVar1 + 0x34);
  return;
}


// 0x058f900 (0x88 bytes)
void FUN_0058f900(undefined8 param_1,int *param_2)

{
  int iVar1;
  
  iVar1 = *param_2;
  FUN_00553b40(param_1,iVar1,0x15);
  FUN_00553b40(param_1,iVar1 + 0x15,0x11);
  FUN_00553f04(param_1,iVar1 + 0x28);
  FUN_00553b40(param_1,iVar1 + 0x2c,0x20);
  return;
}


// 0x058f988 (0x70 bytes)
void FUN_0058f988(undefined8 param_1,int *param_2)

{
  int iVar1;
  
  iVar1 = *param_2;
  FUN_00553b40(param_1,iVar1,0x15);
  FUN_00553b40(param_1,iVar1 + 0x15,0x11);
  FUN_00553f04(param_1,iVar1 + 0x28);
  return;
}


// 0x058f9f8 (0xc8 bytes)
void FUN_0058f9f8(int param_1,int *param_2)

{
  int iVar1;
  
  iVar1 = *param_2;
  FUN_00553f04(param_1,iVar1);
  FUN_00553f04(param_1,iVar1 + 4);
  FUN_00553f04(param_1,iVar1 + 8);
  FUN_00553b40(param_1,iVar1 + 0xc,0x20);
  FUN_00553f04(param_1,iVar1 + 0x2c);
  if (*(int *)(param_1 + 0x10) == 2) {
    *(int *)(iVar1 + 0x30) = iVar1 + 0x34;
  }
  FUN_00553b40(param_1,*(undefined4 *)(iVar1 + 0x30),*(undefined4 *)(iVar1 + 0x2c));
  return;
}


// 0x058fac0 (0x70 bytes)
void FUN_0058fac0(undefined8 param_1,int *param_2)

{
  int iVar1;
  
  iVar1 = *param_2;
  FUN_00553b40(param_1,iVar1,0x15);
  FUN_00553b40(param_1,iVar1 + 0x15,0x11);
  FUN_00553f04(param_1,iVar1 + 0x28);
  return;
}


// 0x058fb30 (0x7c bytes)
void FUN_0058fb30(undefined8 param_1,int *param_2)

{
  int iVar1;
  
  iVar1 = *param_2;
  FUN_00553b40(param_1,iVar1,0x15);
  FUN_00553c74(param_1,3);
  FUN_00553f04(param_1,iVar1 + 0x18);
  FUN_00553f04(param_1,iVar1 + 0x1c);
  return;
}


// 0x058fbac (0x1a4 bytes)
void FUN_0058fbac(undefined8 param_1,int *param_2)

{
  int iVar1;
  
  iVar1 = *param_2;
  FUN_00553b40(param_1,iVar1,0x15);
  FUN_00553b40(param_1,iVar1 + 0x15,0x11);
  FUN_00553c74(param_1,2);
  FUN_00553f04(param_1,iVar1 + 0x28);
  FUN_00553f04(param_1,iVar1 + 0x2c);
  FUN_00553f04(param_1,iVar1 + 0x30);
  FUN_00553b40(param_1,iVar1 + 0x34,0x40);
  FUN_00553b40(param_1,iVar1 + 0x74,0x20);
  FUN_00553f04(param_1,iVar1 + 0x94);
  FUN_00553f04(param_1,iVar1 + 0x98);
  FUN_00553f04(param_1,iVar1 + 0x9c);
  FUN_00553f04(param_1,iVar1 + 0xa0);
  FUN_00553f04(param_1,iVar1 + 0xa4);
  FUN_00553f04(param_1,iVar1 + 0xa8);
  FUN_00553f04(param_1,iVar1 + 0xac);
  FUN_00553f04(param_1,iVar1 + 0xb0);
  FUN_00553f04(param_1,iVar1 + 0xb4);
  FUN_00553b40(param_1,iVar1 + 0xb8,0x11);
  return;
}


// 0x058fd50 (0x70 bytes)
void FUN_0058fd50(undefined8 param_1,int *param_2)

{
  int iVar1;
  
  iVar1 = *param_2;
  FUN_00553b40(param_1,iVar1,0x15);
  FUN_00553b40(param_1,iVar1 + 0x15,0x11);
  FUN_00553f04(param_1,iVar1 + 0x28);
  return;
}


// 0x058fdc0 (0x70 bytes)
void FUN_0058fdc0(undefined8 param_1,int *param_2)

{
  int iVar1;
  
  iVar1 = *param_2;
  FUN_00553b40(param_1,iVar1,0x15);
  FUN_00553b40(param_1,iVar1 + 0x15,0x11);
  FUN_00553f04(param_1,iVar1 + 0x28);
  return;
}


// 0x058fe30 (0x170 bytes)
void FUN_0058fe30(int param_1,int *param_2)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  
  iVar2 = *param_2;
  iVar3 = param_2[1];
  FUN_00553b40(param_1,iVar2,0x15);
  FUN_00553f04(param_1,iVar2 + 0x18);
  FUN_00553f04(param_1,iVar2 + 0x1c);
  FUN_00553f04(param_1,iVar2 + 0x20);
  FUN_00553b40(param_1,iVar2 + 0x24,0x10);
  FUN_00553f04(param_1,iVar2 + 0x34);
  bVar1 = *(int *)(param_1 + 0x10) == 2;
  if (bVar1) {
    uVar5 = iVar2 + 0x3c;
  }
  else {
    uVar5 = 0;
  }
  iVar4 = *(int *)(iVar2 + 0x34);
  if (iVar4 == 0) {
    if (bVar1) {
      *(undefined4 *)(iVar2 + 0x38) = 0;
    }
  }
  else {
    if (bVar1) {
      *(uint *)(iVar2 + 0x38) = uVar5;
      FUN_00553b40(param_1,*(undefined4 *)(iVar2 + 0x38),iVar4);
      iVar4 = *(int *)(param_1 + 0x10);
    }
    else {
      FUN_00553b40(param_1,*(undefined4 *)(iVar2 + 0x38),iVar4);
      iVar4 = *(int *)(param_1 + 0x10);
    }
    if (iVar4 == 2) {
      uVar5 = uVar5 + *(int *)(iVar2 + 0x34);
    }
  }
  if ((uint)(iVar2 + iVar3) < uVar5) {
    *(undefined4 *)(param_1 + 0x18) = 1;
  }
  return;
}


// 0x058ffa0 (0x39c bytes)
void FUN_0058ffa0(int param_1,int *param_2)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  
  iVar2 = *param_2;
  iVar3 = param_2[1];
  FUN_00553b40(param_1,iVar2,0x15);
  FUN_00553b40(param_1,iVar2 + 0x15,0x11);
  FUN_00553f04(param_1,iVar2 + 0x28);
  FUN_00553f04(param_1,iVar2 + 0x2c);
  FUN_00553f04(param_1,iVar2 + 0x30);
  FUN_00553f04(param_1,iVar2 + 0x34);
  FUN_00553f04(param_1,iVar2 + 0x38);
  FUN_00553b40(param_1,iVar2 + 0x3c,0x40);
  FUN_00553b40(param_1,iVar2 + 0x7c,0x20);
  FUN_00553b40(param_1,iVar2 + 0x9c,0x20);
  FUN_00553f04(param_1,iVar2 + 0xbc);
  FUN_00553f04(param_1,iVar2 + 0xc0);
  FUN_00553f04(param_1,iVar2 + 0xc4);
  FUN_00553f04(param_1,iVar2 + 200);
  FUN_00553f04(param_1,iVar2 + 0xcc);
  FUN_00553f04(param_1,iVar2 + 0xd0);
  FUN_00553f04(param_1,iVar2 + 0xd4);
  FUN_00553f04(param_1,iVar2 + 0xd8);
  FUN_00553f04(param_1,iVar2 + 0xdc);
  FUN_00553f04(param_1,iVar2 + 0xe0);
  FUN_00553f04(param_1,iVar2 + 0xe4);
  FUN_00553f04(param_1,iVar2 + 0xe8);
  FUN_00553f04(param_1,iVar2 + 0xec);
  FUN_00553b40(param_1,iVar2 + 0xf0,0x11);
  FUN_00553b40(param_1,iVar2 + 0x101,0x10);
  FUN_00553f04(param_1,iVar2 + 0x114);
  FUN_00553f04(param_1,iVar2 + 0x118);
  iVar5 = *(int *)(param_1 + 0x10);
  bVar1 = iVar5 == 2;
  if (bVar1) {
    uVar6 = iVar2 + 0x124;
  }
  else {
    uVar6 = 0;
  }
  if (*(int *)(iVar2 + 0x114) == 0) {
    if (bVar1) {
      *(undefined4 *)(iVar2 + 0x11c) = 0;
    }
  }
  else {
    if (bVar1) {
      *(uint *)(iVar2 + 0x11c) = uVar6;
    }
    iVar7 = 0;
    do {
      FUN_00553f04(param_1,iVar7 * 4 + *(int *)(iVar2 + 0x11c));
      uVar4 = iVar7 + 1;
      iVar7 = iVar7 + 1;
    } while (uVar4 < *(uint *)(iVar2 + 0x114));
    iVar5 = *(int *)(param_1 + 0x10);
    uVar6 = uVar6 + iVar7 * 4;
  }
  iVar7 = *(int *)(iVar2 + 0x118);
  if (iVar7 == 0) {
    if (iVar5 == 2) {
      *(undefined4 *)(iVar2 + 0x120) = 0;
    }
  }
  else {
    if (iVar5 == 2) {
      *(uint *)(iVar2 + 0x120) = uVar6;
      FUN_00553b40(param_1,*(undefined4 *)(iVar2 + 0x120),iVar7);
      iVar5 = *(int *)(param_1 + 0x10);
    }
    else {
      FUN_00553b40(param_1,*(undefined4 *)(iVar2 + 0x120),iVar7);
      iVar5 = *(int *)(param_1 + 0x10);
    }
    if (iVar5 == 2) {
      uVar6 = uVar6 + *(int *)(iVar2 + 0x118);
    }
  }
  if ((uint)(iVar2 + iVar3) < uVar6) {
    *(undefined4 *)(param_1 + 0x18) = 1;
  }
  return;
}


// 0x059033c (0x294 bytes)
void FUN_0059033c(int param_1,int *param_2)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  
  iVar2 = *param_2;
  iVar3 = param_2[1];
  FUN_00553b40(param_1,iVar2,0x15);
  FUN_00553b40(param_1,iVar2 + 0x15,0x11);
  FUN_00553f04(param_1,iVar2 + 0x28);
  FUN_00553f04(param_1,iVar2 + 0x2c);
  FUN_00553b40(param_1,iVar2 + 0x30,0x20);
  FUN_00553f04(param_1,iVar2 + 0x50);
  FUN_00553f04(param_1,iVar2 + 0x54);
  FUN_00553f04(param_1,iVar2 + 0x58);
  FUN_00553b40(param_1,iVar2 + 0x5c,4);
  FUN_00553f04(param_1,iVar2 + 0x60);
  FUN_00553b40(param_1,iVar2 + 100,0x11);
  FUN_00553b40(param_1,iVar2 + 0x75,0x10);
  FUN_00553f04(param_1,iVar2 + 0x88);
  FUN_00553f04(param_1,iVar2 + 0x8c);
  iVar5 = *(int *)(param_1 + 0x10);
  bVar1 = iVar5 == 2;
  if (bVar1) {
    uVar6 = iVar2 + 0x98;
  }
  else {
    uVar6 = 0;
  }
  if (*(int *)(iVar2 + 0x88) == 0) {
    if (bVar1) {
      *(undefined4 *)(iVar2 + 0x90) = 0;
    }
  }
  else {
    if (bVar1) {
      *(uint *)(iVar2 + 0x90) = uVar6;
    }
    iVar7 = 0;
    do {
      FUN_00553f04(param_1,iVar7 * 4 + *(int *)(iVar2 + 0x90));
      uVar4 = iVar7 + 1;
      iVar7 = iVar7 + 1;
    } while (uVar4 < *(uint *)(iVar2 + 0x88));
    iVar5 = *(int *)(param_1 + 0x10);
    uVar6 = uVar6 + iVar7 * 4;
  }
  iVar7 = *(int *)(iVar2 + 0x8c);
  if (iVar7 == 0) {
    if (iVar5 == 2) {
      *(undefined4 *)(iVar2 + 0x94) = 0;
    }
  }
  else {
    if (iVar5 == 2) {
      *(uint *)(iVar2 + 0x94) = uVar6;
      FUN_00553b40(param_1,*(undefined4 *)(iVar2 + 0x94),iVar7);
      iVar5 = *(int *)(param_1 + 0x10);
    }
    else {
      FUN_00553b40(param_1,*(undefined4 *)(iVar2 + 0x94),iVar7);
      iVar5 = *(int *)(param_1 + 0x10);
    }
    if (iVar5 == 2) {
      uVar6 = uVar6 + *(int *)(iVar2 + 0x8c);
    }
  }
  if ((uint)(iVar2 + iVar3) < uVar6) {
    *(undefined4 *)(param_1 + 0x18) = 1;
  }
  return;
}


// 0x05905d0 (0x58 bytes)
void FUN_005905d0(undefined8 param_1,int *param_2)

{
  int iVar1;
  
  iVar1 = *param_2;
  FUN_00553b40(param_1,iVar1,0x15);
  FUN_00553f04(param_1,iVar1 + 0x18);
  return;
}


// 0x0590628 (0x58 bytes)
void FUN_00590628(undefined8 param_1,int *param_2)

{
  int iVar1;
  
  iVar1 = *param_2;
  FUN_00553b40(param_1,iVar1,0x15);
  FUN_00553f04(param_1,iVar1 + 0x18);
  return;
}


// 0x0590680 (0x68 bytes)
void FUN_00590680(undefined8 param_1,int *param_2)

{
  int iVar1;
  
  iVar1 = *param_2;
  FUN_00553b40(param_1,iVar1,0x15);
  FUN_00553c74(param_1,3);
  FUN_00553f04(param_1,iVar1 + 0x18);
  return;
}


// 0x05906e8 (0xd0 bytes)
void FUN_005906e8(undefined8 param_1,int *param_2)

{
  int iVar1;
  
  iVar1 = *param_2;
  FUN_00553b40(param_1,iVar1,0x15);
  FUN_00553f04(param_1,iVar1 + 0x18);
  FUN_00553f04(param_1,iVar1 + 0x1c);
  FUN_00553f04(param_1,iVar1 + 0x20);
  FUN_00553f04(param_1,iVar1 + 0x24);
  FUN_00553f04(param_1,iVar1 + 0x28);
  FUN_00553f04(param_1,iVar1 + 0x2c);
  FUN_00554290(param_1,iVar1 + 0x30);
  return;
}


// 0x05907b8 (0xac bytes)
void FUN_005907b8(undefined8 param_1,int *param_2)

{
  int iVar1;
  
  iVar1 = *param_2;
  FUN_00553b40(param_1,iVar1,0x15);
  FUN_00553f04(param_1,iVar1 + 0x18);
  FUN_00553f04(param_1,iVar1 + 0x1c);
  FUN_00553f04(param_1,iVar1 + 0x20);
  FUN_00553b40(param_1,iVar1 + 0x24,0x4b0);
  FUN_00554290(param_1,iVar1 + 0x4d4);
  return;
}


// 0x0590864 (0x9c bytes)
void FUN_00590864(undefined8 param_1,int *param_2)

{
  int iVar1;
  
  iVar1 = *param_2;
  FUN_00553b40(param_1,iVar1,0x15);
  FUN_00553f04(param_1,iVar1 + 0x18);
  FUN_00553b40(param_1,iVar1 + 0x1c,0x20);
  FUN_00553b40(param_1,iVar1 + 0x3c,0x24);
  FUN_00554290(param_1,iVar1 + 0x60);
  return;
}


// 0x0590900 (0x6c bytes)
void FUN_00590900(undefined8 param_1,int *param_2)

{
  int iVar1;
  
  iVar1 = *param_2;
  FUN_00553b40(param_1,iVar1,0x15);
  FUN_00553f04(param_1,iVar1 + 0x18);
  FUN_00554290(param_1,iVar1 + 0x1c);
  return;
}


// 0x059096c (0xf4 bytes)
void FUN_0059096c(undefined8 param_1,int *param_2)

{
  int iVar1;
  
  iVar1 = *param_2;
  FUN_00553b40(param_1,iVar1,0x15);
  FUN_00553c74(param_1,3);
  FUN_00553f04(param_1,iVar1 + 0x18);
  FUN_00553f04(param_1,iVar1 + 0x1c);
  FUN_00553b40(param_1,iVar1 + 0x20,0x40);
  FUN_00553f04(param_1,iVar1 + 0x60);
  FUN_00553f04(param_1,iVar1 + 100);
  FUN_00553f04(param_1,iVar1 + 0x68);
  FUN_00554290(param_1,iVar1 + 0x6c);
  FUN_00553c74(param_1,3);
  return;
}


// 0x0590a60 (0xc8 bytes)
void FUN_00590a60(undefined8 param_1,int *param_2)

{
  int iVar1;
  
  iVar1 = *param_2;
  FUN_00553b40(param_1,iVar1,0x15);
  FUN_00553f04(param_1,iVar1 + 0x18);
  FUN_00554290(param_1,iVar1 + 0x1c);
  FUN_00553f04(param_1,iVar1 + 0x20);
  FUN_00553b40(param_1,iVar1 + 0x24,0x32);
  FUN_00553b40(param_1,iVar1 + 0x56,0x100);
  FUN_00553b40(param_1,iVar1 + 0x156,0x100);
  return;
}


// 0x0590b28 (0xb0 bytes)
void FUN_00590b28(undefined8 param_1,int *param_2)

{
  int iVar1;
  GPiece<16> local_30;
  
  iVar1 = *param_2;
  FUN_00553b40(param_1,iVar1,0x15);
  FUN_00553c74(param_1,3);
  FUN_00553f04(param_1,iVar1 + 0x18);
  FUN_00553f04(param_1,iVar1 + 0x1c);
  FUN_0055bbe8(param_1,local_30);
  FUN_00553f04(param_1,iVar1 + 0xbc);
  return;
}


// 0x0590bd8 (0x88 bytes)
void FUN_00590bd8(undefined8 param_1,int *param_2)

{
  int iVar1;
  GPiece<16> local_30;
  
  iVar1 = *param_2;
  FUN_00553f04(param_1,iVar1);
  FUN_00553f04(param_1,iVar1 + 4);
  FUN_00553f04(param_1,iVar1 + 8);
  FUN_0055bbe8(param_1,local_30);
  return;
}


// 0x0590c60 (0x9c bytes)
void FUN_00590c60(undefined8 param_1,int *param_2)

{
  int iVar1;
  GPiece<16> local_30;
  
  iVar1 = *param_2;
  FUN_00553b40(param_1,iVar1,0x15);
  FUN_00553c74(param_1,3);
  FUN_00553f04(param_1,iVar1 + 0x18);
  FUN_00553f04(param_1,iVar1 + 0x1c);
  FUN_0055bbe8(param_1,local_30);
  return;
}


// 0x0590cfc (0x8c bytes)
void FUN_00590cfc(undefined8 param_1,int *param_2)

{
  int iVar1;
  GPiece<16> local_30;
  
  iVar1 = *param_2;
  FUN_00553b40(param_1,iVar1,0x15);
  FUN_00553f04(param_1,iVar1 + 0x18);
  FUN_00553f04(param_1,iVar1 + 0x1c);
  FUN_0055bbe8(param_1,local_30);
  return;
}


// 0x0590d88 (0xc4 bytes)
void FUN_00590d88(undefined8 param_1,int *param_2)

{
  int iVar1;
  GPiece<16> local_30;
  
  iVar1 = *param_2;
  FUN_00553b40(param_1,iVar1,0x15);
  FUN_00553c74(param_1,3);
  FUN_00553f04(param_1,iVar1 + 0x18);
  FUN_00553f04(param_1,iVar1 + 0x1c);
  FUN_0055bbe8(param_1,local_30);
  FUN_00553f04(param_1,iVar1 + 0xbc);
  FUN_00553f04(param_1,iVar1 + 0xc0);
  return;
}


// 0x0590e4c (0xc4 bytes)
void FUN_00590e4c(undefined8 param_1,int *param_2)

{
  int iVar1;
  GPiece<16> local_30;
  
  iVar1 = *param_2;
  FUN_00553b40(param_1,iVar1,0x15);
  FUN_00553c74(param_1,3);
  FUN_00553f04(param_1,iVar1 + 0x18);
  FUN_00553f04(param_1,iVar1 + 0x1c);
  FUN_00553f04(param_1,iVar1 + 0x20);
  FUN_00553f04(param_1,iVar1 + 0x24);
  FUN_0055bbe8(param_1,local_30);
  return;
}


// 0x0590f10 (0x88 bytes)
void FUN_00590f10(undefined8 param_1,int *param_2)

{
  int iVar1;
  GPiece<16> local_30;
  
  iVar1 = *param_2;
  FUN_00553b40(param_1,iVar1,0x15);
  FUN_00553f04(param_1,iVar1 + 0x18);
  FUN_00553f04(param_1,iVar1 + 0x1c);
  FUN_00590e4c(param_1,local_30);
  return;
}


// 0x0590f98 (0x34 bytes)
void FUN_00590f98(undefined8 param_1)

{
  GPiece<16> local_10;
  
  FUN_00590e4c(param_1,local_10);
  return;
}


// 0x0590fcc (0x10c bytes)
void FUN_00590fcc(undefined8 param_1,int *param_2)

{
  int iVar1;
  GPiece<24> local_40;
  
  iVar1 = *param_2;
  FUN_00553b40(param_1,iVar1,0x15);
  FUN_00553b40(param_1,iVar1 + 0x15,0x11);
  FUN_00553c74(param_1,2);
  FUN_00553f04(param_1,iVar1 + 0x28);
  FUN_00553b40(param_1,iVar1 + 0x2c,0x20);
  FUN_00553c74(param_1,0);
  FUN_00553f04(param_1,iVar1 + 0x4c);
  FUN_0055b450(param_1,local_40);
  FUN_0055b3d0(param_1,local_40);
  return;
}


// 0x05910d8 (0x390 bytes)
void FUN_005910d8(int param_1,int *param_2)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  int iVar5;
  int iVar6;
  undefined4 *puVar7;
  uint uVar8;
  undefined4 *puVar9;
  int local_60;
  GPiece<12> local_5c;
  
  iVar2 = *param_2;
  iVar3 = param_2[1];
  FUN_00553b40(param_1,iVar2,0x15);
  FUN_00553f04(param_1,iVar2 + 0x18);
  FUN_00553f04(param_1,iVar2 + 0x1c);
  iVar5 = *(int *)(iVar2 + 0x18);
  if (iVar5 != 6) {
    if (iVar5 == 7) {
      iVar5 = 0;
      FUN_00553f04(param_1,iVar2 + 0x20);
      FUN_00553f04(param_1,iVar2 + 0x24);
      if (*(int *)(param_1 + 0x10) == 2) {
        iVar5 = iVar2 + 0xc0;
        *(int *)(iVar2 + 0x28) = iVar5;
      }
      FUN_00553b40(param_1,*(undefined4 *)(iVar2 + 0x28),*(undefined4 *)(iVar2 + 0x24));
      uVar8 = iVar5 + *(int *)(iVar2 + 0x24);
    }
    else {
      if (iVar5 != 8) {
        return;
      }
      FUN_00553f04(param_1,iVar2 + 0x20);
      FUN_0055bbe8(param_1,local_5c);
      if (*(int *)(param_1 + 0x10) != 2) {
        return;
      }
      uVar8 = iVar2 + 0xc0;
    }
    goto LAB_005911f0;
  }
  local_60 = 0;
  FUN_00553f04(param_1,iVar2 + 0x20);
  FUN_00553b40(param_1,iVar2 + 0x24,0x20);
  FUN_00553f04(param_1,iVar2 + 0x44);
  FUN_0055b3d0(param_1,local_5c);
  FUN_00553f04(param_1,iVar2 + 0x78);
  iVar5 = *(int *)(param_1 + 0x10);
  bVar1 = iVar5 == 2;
  if (bVar1) {
    iVar6 = iVar2 + 0xc0;
  }
  else {
    iVar6 = 0;
  }
  if (*(int *)(iVar2 + 0x78) == 0) {
    if (bVar1) {
      *(undefined4 *)(iVar2 + 0x7c) = 0;
      iVar5 = *(int *)(param_1 + 0x10);
    }
LAB_005912fc:
    if (iVar5 == 1) {
      piVar4 = *(int **)(iVar2 + 0x80);
      if (piVar4 == (int *)0x0) {
        local_60 = 0;
      }
      else {
        puVar9 = (undefined4 *)piVar4[1];
        local_60 = *piVar4 * 4 + 8;
        puVar7 = puVar9 + *piVar4 + -1;
        for (; puVar9 <= puVar7; puVar9 = puVar9 + 1) {
          iVar5 = FUN_0058ecc0(*puVar9);
          local_60 = local_60 + iVar5;
        }
      }
    }
  }
  else {
    if (bVar1) {
      *(int *)(iVar2 + 0x7c) = iVar6;
    }
    FUN_00553b40(param_1,*(undefined4 *)(iVar2 + 0x7c),*(int *)(iVar2 + 0x78));
    iVar5 = *(int *)(param_1 + 0x10);
    if (iVar5 != 2) goto LAB_005912fc;
    iVar6 = iVar6 + *(int *)(iVar2 + 0x78);
  }
  uVar8 = iVar6 + 4;
  FUN_00553f04(param_1,&local_60);
  if (local_60 < 1) {
    if (*(int *)(param_1 + 0x10) == 2) {
      *(undefined4 *)(iVar2 + 0x80) = 0;
    }
  }
  else {
    if (*(int *)(param_1 + 0x10) == 2) {
      *(uint *)(iVar2 + 0x80) = uVar8;
    }
    FUN_0058f060(param_1,local_5c);
    uVar8 = uVar8 + local_60;
  }
LAB_005911f0:
  if (uVar8 <= (uint)(iVar2 + iVar3)) {
    return;
  }
  *(undefined4 *)(param_1 + 0x18) = 1;
  return;
}


// 0x0591468 (0x120 bytes)
void FUN_00591468(undefined8 param_1,int *param_2)

{
  int iVar1;
  GPiece<24> local_40;
  
  iVar1 = *param_2;
  FUN_00553b40(param_1,iVar1,0x15);
  FUN_00553b40(param_1,iVar1 + 0x15,0x11);
  FUN_00553c74(param_1,2);
  FUN_00553f04(param_1,iVar1 + 0x28);
  FUN_00553b40(param_1,iVar1 + 0x2c,0x20);
  FUN_00553c74(param_1,0);
  FUN_00553f04(param_1,iVar1 + 0x4c);
  FUN_0055b450(param_1,local_40);
  FUN_0055b3d0(param_1,local_40);
  FUN_00553f04(param_1,iVar1 + 0xc0);
  return;
}


// 0x0591588 (0x2e8 bytes)
void FUN_00591588(int param_1,int *param_2)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  GPiece<16> local_40;
  
  iVar2 = *param_2;
  iVar3 = param_2[1];
  FUN_00553f04(param_1,iVar2);
  FUN_00553f04(param_1,iVar2 + 4);
  FUN_00553f04(param_1,iVar2 + 8);
  FUN_00553b40(param_1,iVar2 + 0xc,0x40);
  FUN_00553b40(param_1,iVar2 + 0x4c,0x100);
  FUN_00553f04(param_1,iVar2 + 0x14c);
  FUN_00553f04(param_1,iVar2 + 0x150);
  FUN_00553f04(param_1,iVar2 + 0x154);
  FUN_00553f04(param_1,iVar2 + 0x158);
  FUN_00553f04(param_1,iVar2 + 0x15c);
  FUN_00553f04(param_1,iVar2 + 0x160);
  FUN_00553f04(param_1,iVar2 + 0x164);
  FUN_00553f04(param_1,iVar2 + 0x168);
  FUN_00553f04(param_1,iVar2 + 0x16c);
  FUN_00553f04(param_1,iVar2 + 0x170);
  FUN_00553f04(param_1,iVar2 + 0x174);
  FUN_00553f04(param_1,iVar2 + 0x178);
  FUN_00553f04(param_1,iVar2 + 0x17c);
  FUN_00553f04(param_1,iVar2 + 0x180);
  FUN_00553f04(param_1,iVar2 + 0x184);
  FUN_00553b40(param_1,iVar2 + 0x188,0x20);
  FUN_00553f04(param_1,iVar2 + 0x1a8);
  FUN_0055b3d0(param_1,local_40);
  FUN_00553f04(param_1,iVar2 + 0x1dc);
  bVar1 = *(int *)(param_1 + 0x10) == 2;
  if (bVar1) {
    uVar5 = iVar2 + 0x1e4;
  }
  else {
    uVar5 = 0;
  }
  iVar4 = *(int *)(iVar2 + 0x1dc);
  if (iVar4 == 0) {
    if (bVar1) {
      *(undefined4 *)(iVar2 + 0x1e0) = 0;
    }
  }
  else {
    if (bVar1) {
      *(uint *)(iVar2 + 0x1e0) = uVar5;
      FUN_00553b40(param_1,*(undefined4 *)(iVar2 + 0x1e0),iVar4);
      iVar4 = *(int *)(param_1 + 0x10);
    }
    else {
      FUN_00553b40(param_1,*(undefined4 *)(iVar2 + 0x1e0),iVar4);
      iVar4 = *(int *)(param_1 + 0x10);
    }
    if (iVar4 == 2) {
      uVar5 = uVar5 + *(int *)(iVar2 + 0x1dc);
    }
  }
  if ((uint)(iVar2 + iVar3) < uVar5) {
    *(undefined4 *)(param_1 + 0x18) = 1;
  }
  return;
}


// 0x0591870 (0x230 bytes)
void FUN_00591870(int param_1,int *param_2)

{
  int iVar1;
  int iVar2;
  size_t sVar3;
  undefined1 *puVar4;
  ulonglong uVar5;
  int iVar6;
  undefined1 *puVar7;
  undefined1 *puVar8;
  ulonglong uVar9;
  byte local_60 [24];
  
  iVar1 = *param_2;
  puVar7 = (undefined1 *)(iVar1 + param_2[1]);
  FUN_00553b40(param_1,iVar1,0x15);
  puVar8 = (undefined1 *)0x0;
  FUN_00553b40(param_1,iVar1 + 0x15,0x11);
  FUN_00553f04(param_1,iVar1 + 0x28);
  iVar6 = *(int *)(param_1 + 0x10);
  if (iVar6 == 2) {
    *(int *)(iVar1 + 0x2c) = iVar1 + 0x30;
    puVar8 = (undefined1 *)(iVar1 + 0x30 + *(int *)(iVar1 + 0x28) * 4);
    if (puVar7 < puVar8) {
      *(undefined4 *)(param_1 + 0x18) = 1;
      return;
    }
  }
  if (*(int *)(iVar1 + 0x28) != 0) {
    uVar9 = 0;
    do {
      while( true ) {
        iVar2 = (int)((uVar9 & 0x3fffffff) << 2);
        if (iVar6 == 1) {
          sVar3 = strlen(*(char **)(iVar2 + *(int *)(iVar1 + 0x2c)));
          local_60[0] = (byte)sVar3;
          if (0x20 < (sVar3 & 0xff)) {
            *(undefined4 *)(param_1 + 0x18) = 2;
            return;
          }
        }
        FUN_00554290(param_1,local_60);
        if (*(int *)(param_1 + 0x10) == 2) {
          *(undefined1 **)(iVar2 + *(int *)(iVar1 + 0x2c)) = puVar8;
        }
        FUN_00553b40(param_1,*(undefined4 *)(iVar2 + *(int *)(iVar1 + 0x2c)),local_60[0]);
        iVar6 = *(int *)(param_1 + 0x10);
        uVar5 = uVar9 + 1;
        uVar9 = uVar9 + 1;
        if (iVar6 == 2) break;
        if ((ulonglong)*(uint *)(iVar1 + 0x28) <= (uVar5 & 0xffffffff)) goto LAB_00591a18;
      }
      puVar4 = puVar8 + local_60[0];
      puVar8 = puVar4 + 1;
      if (puVar7 < puVar8) goto LAB_00591a28;
      *puVar4 = 0;
      iVar6 = *(int *)(param_1 + 0x10);
    } while ((uVar5 & 0xffffffff) < (ulonglong)*(uint *)(iVar1 + 0x28));
  }
LAB_00591a18:
  if ((iVar6 != 2) || (puVar8 <= puVar7)) {
    return;
  }
LAB_00591a28:
  *(undefined4 *)(param_1 + 0x18) = 1;
  return;
}


// 0x0591aa0 (0xd0 bytes)
void FUN_00591aa0(int param_1,int *param_2)

{
  int iVar1;
  
  iVar1 = *param_2;
  FUN_00553b40(param_1,iVar1,0x15);
  FUN_00553f04(param_1,iVar1 + 0x20);
  FUN_00553f04(param_1,iVar1 + 0x18);
  if (*(int *)(param_1 + 0x10) == 2) {
    *(int *)(iVar1 + 0x1c) = iVar1 + 0x24;
  }
  if (*(int *)(iVar1 + 0x18) == 0) {
    *(undefined4 *)(iVar1 + 0x1c) = 0;
    return;
  }
  FUN_00553b40(param_1,*(undefined4 *)(iVar1 + 0x1c),*(int *)(iVar1 + 0x18));
  return;
}


// 0x0591b70 (0xb8 bytes)
void FUN_00591b70(int param_1,int *param_2)

{
  int iVar1;
  
  iVar1 = *param_2;
  FUN_00553b40(param_1,iVar1,0x15);
  FUN_00553b40(param_1,iVar1 + 0x15,0x11);
  FUN_00553f04(param_1,iVar1 + 0x28);
  FUN_00553f04(param_1,iVar1 + 0x2c);
  if (*(int *)(param_1 + 0x10) == 2) {
    *(int *)(iVar1 + 0x30) = iVar1 + 0x34;
  }
  FUN_00553b40(param_1,*(undefined4 *)(iVar1 + 0x30),*(undefined4 *)(iVar1 + 0x2c));
  return;
}


// 0x0591c28 (0xcc bytes)
void FUN_00591c28(int param_1,int *param_2)

{
  int iVar1;
  
  iVar1 = *param_2;
  FUN_00553b40(param_1,iVar1,0x15);
  FUN_00553b40(param_1,iVar1 + 0x15,0x11);
  FUN_00553f04(param_1,iVar1 + 0x28);
  FUN_00553f04(param_1,iVar1 + 0x2c);
  FUN_00553f04(param_1,iVar1 + 0x30);
  if (*(int *)(param_1 + 0x10) == 2) {
    *(int *)(iVar1 + 0x34) = iVar1 + 0x38;
  }
  FUN_00553b40(param_1,*(undefined4 *)(iVar1 + 0x34),*(undefined4 *)(iVar1 + 0x30));
  return;
}


// 0x0591cf4 (0x198 bytes)
void FUN_00591cf4(int param_1,int *param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  int local_40;
  GPiece<12> local_3c;
  
  iVar1 = *param_2;
  local_40 = 0;
  iVar2 = param_2[1];
  FUN_00553b40(param_1,iVar1,0x10);
  FUN_00553f04(param_1,iVar1 + 0x10);
  FUN_00553f04(param_1,iVar1 + 0x14);
  FUN_00553f04(param_1,iVar1 + 0x18);
  FUN_00553f04(param_1,iVar1 + 0x1c);
  iVar3 = *(int *)(param_1 + 0x10);
  if (iVar3 == 2) {
    uVar4 = iVar1 + 0x24;
    if (*(int *)(iVar1 + 0x18) == 6) goto LAB_00591e04;
LAB_00591db4:
    if (iVar3 != 2) goto LAB_00591db8;
  }
  else {
    uVar4 = 0;
    if (*(int *)(iVar1 + 0x18) != 6) goto LAB_00591db4;
LAB_00591e04:
    if (iVar3 == 1) {
      local_40 = FUN_005a0fa0(*(undefined4 *)(iVar1 + 0x20));
    }
    FUN_00553f04(param_1,&local_40);
    if (0 < local_40) {
      if (*(int *)(param_1 + 0x10) == 2) {
        *(uint *)(iVar1 + 0x20) = uVar4;
      }
      FUN_00591588(param_1,local_3c);
      uVar4 = uVar4 + local_40;
      goto LAB_00591db8;
    }
    if (*(int *)(param_1 + 0x10) != 2) goto LAB_00591db8;
  }
  *(undefined4 *)(iVar1 + 0x20) = 0;
LAB_00591db8:
  if ((uint)(iVar1 + iVar2) < uVar4) {
    *(undefined4 *)(param_1 + 0x18) = 1;
  }
  return;
}


// 0x0591e8c (0x11c bytes)
void FUN_00591e8c(int param_1,int *param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined1 *puVar4;
  
  iVar1 = *param_2;
  iVar2 = param_2[1];
  FUN_00553b40(param_1,iVar1,0x15);
  puVar4 = (undefined1 *)0x0;
  FUN_00553b40(param_1,iVar1 + 0x15,0x11);
  FUN_00553f04(param_1,iVar1 + 0x28);
  if (*(int *)(param_1 + 0x10) == 2) {
    puVar4 = (undefined1 *)(iVar1 + 0x30);
    *(undefined1 **)(iVar1 + 0x2c) = puVar4;
    FUN_00553b40(param_1,*(undefined4 *)(iVar1 + 0x2c),*(undefined4 *)(iVar1 + 0x28));
    iVar3 = *(int *)(param_1 + 0x10);
  }
  else {
    FUN_00553b40(param_1,*(undefined4 *)(iVar1 + 0x2c),*(undefined4 *)(iVar1 + 0x28));
    iVar3 = *(int *)(param_1 + 0x10);
  }
  if (iVar3 == 2) {
    puVar4 = puVar4 + *(int *)(iVar1 + 0x28);
    *puVar4 = 0;
  }
  if ((undefined1 *)(iVar1 + iVar2) < puVar4) {
    *(undefined4 *)(param_1 + 0x18) = 1;
  }
  return;
}


// 0x0591fa8 (0x54 bytes)
void FUN_00591fa8(undefined8 param_1,int *param_2)

{
  int iVar1;
  
  iVar1 = *param_2;
  FUN_00553f04(param_1,iVar1);
  FUN_00553f04(param_1,iVar1 + 4);
  return;
}


// 0x0591ffc (0x84 bytes)
void FUN_00591ffc(undefined8 param_1,int *param_2)

{
  int iVar1;
  GPiece<16> local_30;
  
  iVar1 = *param_2;
  FUN_00553f04(param_1,iVar1);
  FUN_00553f04(param_1,iVar1 + 4);
  FUN_00553f04(param_1,iVar1 + 8);
  FUN_00590e4c(param_1,local_30);
  return;
}


// 0x0592080 (0xb4 bytes)
void FUN_00592080(int param_1,int *param_2)

{
  int iVar1;
  
  iVar1 = *param_2;
  FUN_00553b40(param_1,iVar1,0x15);
  FUN_00553f04(param_1,iVar1 + 0x18);
  FUN_00553f04(param_1,iVar1 + 0x1c);
  FUN_00553f04(param_1,iVar1 + 0x20);
  if (*(int *)(param_1 + 0x10) == 2) {
    *(int *)(iVar1 + 0x24) = iVar1 + 0x28;
  }
  FUN_00553b40(param_1,*(undefined4 *)(iVar1 + 0x24),*(undefined4 *)(iVar1 + 0x20));
  return;
}


// 0x0592134 (0xcc bytes)
void FUN_00592134(int param_1,int *param_2)

{
  int iVar1;
  
  iVar1 = *param_2;
  FUN_00553b40(param_1,iVar1,0x15);
  FUN_00553b40(param_1,iVar1 + 0x15,0x11);
  FUN_00553f04(param_1,iVar1 + 0x28);
  FUN_00553f04(param_1,iVar1 + 0x2c);
  FUN_00553f04(param_1,iVar1 + 0x30);
  if (*(int *)(param_1 + 0x10) == 2) {
    *(int *)(iVar1 + 0x34) = iVar1 + 0x38;
  }
  FUN_00553b40(param_1,*(undefined4 *)(iVar1 + 0x34),*(undefined4 *)(iVar1 + 0x30));
  return;
}


// 0x0592200 (0x234 bytes)
void FUN_00592200(undefined8 param_1,int *param_2)

{
  int iVar1;
  
  iVar1 = *param_2;
  FUN_00553b40(param_1,iVar1,0x15);
  FUN_00553c74(param_1,3);
  FUN_00553f04(param_1,iVar1 + 0x18);
  FUN_00553f04(param_1,iVar1 + 0x1c);
  FUN_00554160(param_1,iVar1 + 0x20);
  FUN_00554160(param_1,iVar1 + 0x22);
  FUN_00554160(param_1,iVar1 + 0x24);
  FUN_00553c74(param_1,2);
  FUN_00553f04(param_1,iVar1 + 0x28);
  FUN_00553f04(param_1,iVar1 + 0x2c);
  FUN_00553f04(param_1,iVar1 + 0x30);
  FUN_00553f04(param_1,iVar1 + 0x34);
  FUN_00553f04(param_1,iVar1 + 0x38);
  FUN_00553f04(param_1,iVar1 + 0x3c);
  FUN_00553f04(param_1,iVar1 + 0x40);
  FUN_00553f04(param_1,iVar1 + 0x44);
  FUN_00553f04(param_1,iVar1 + 0x48);
  FUN_00553f04(param_1,iVar1 + 0x4c);
  FUN_00553f04(param_1,iVar1 + 0x50);
  FUN_00553f04(param_1,iVar1 + 0x54);
  FUN_00553f04(param_1,iVar1 + 0x58);
  FUN_00553f04(param_1,iVar1 + 0x5c);
  FUN_00553b40(param_1,iVar1 + 0x60,0x40);
  FUN_00553b40(param_1,iVar1 + 0xa0,0x100);
  FUN_00554290(param_1,iVar1 + 0x1a0);
  FUN_00553c74(param_1,3);
  return;
}


// 0x0592434 (0x7c bytes)
void FUN_00592434(undefined8 param_1,int *param_2)

{
  int iVar1;
  
  iVar1 = *param_2;
  FUN_00553b40(param_1,iVar1,0x15);
  FUN_00553c74(param_1,1);
  FUN_00554160(param_1,iVar1 + 0x16);
  FUN_00554160(param_1,iVar1 + 0x18);
  return;
}


// 0x05924b0 (0xa8 bytes)
void FUN_005924b0(undefined8 param_1,int *param_2)

{
  int iVar1;
  
  iVar1 = *param_2;
  FUN_00553b40(param_1,iVar1,0x15);
  FUN_00553b40(param_1,iVar1 + 0x15,0x11);
  FUN_00553c74(param_1,2);
  FUN_00553f04(param_1,iVar1 + 0x28);
  FUN_00554160(param_1,iVar1 + 0x2c);
  FUN_00554160(param_1,iVar1 + 0x2e);
  return;
}


// 0x0592558 (0x100 bytes)
void FUN_00592558(undefined8 param_1,int *param_2)

{
  int iVar1;
  
  iVar1 = *param_2;
  FUN_00553b40(param_1,iVar1,0x15);
  FUN_00553b40(param_1,iVar1 + 0x15,0x11);
  FUN_00554290(param_1,iVar1 + 0x26);
  FUN_00553f04(param_1,iVar1 + 0x28);
  FUN_00553b40(param_1,iVar1 + 0x2c,0x20);
  FUN_00553f04(param_1,iVar1 + 0x4c);
  FUN_00553f04(param_1,iVar1 + 0x50);
  FUN_00553f04(param_1,iVar1 + 0x54);
  FUN_00553f04(param_1,iVar1 + 0x58);
  FUN_00553f04(param_1,iVar1 + 0x5c);
  return;
}


// 0x0592658 (0x204 bytes)
void FUN_00592658(int param_1,int *param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  size_t sVar4;
  undefined1 *puVar5;
  ulonglong uVar6;
  int iVar7;
  undefined1 *puVar8;
  ulonglong uVar9;
  byte local_50 [16];
  
  iVar1 = *param_2;
  iVar2 = param_2[1];
  FUN_00553b40(param_1,iVar1,0x15);
  puVar8 = (undefined1 *)0x0;
  FUN_00553b40(param_1,iVar1 + 0x15,0x11);
  FUN_00553f04(param_1,iVar1 + 0x28);
  iVar7 = *(int *)(param_1 + 0x10);
  if (iVar7 == 2) {
    *(int *)(iVar1 + 0x2c) = iVar1 + 0x30;
    puVar8 = (undefined1 *)(iVar1 + 0x30 + *(int *)(iVar1 + 0x28) * 4);
  }
  uVar9 = 0;
  if (*(int *)(iVar1 + 0x28) != 0) {
    do {
      iVar3 = (int)((uVar9 & 0x3fffffff) << 2);
      if (iVar7 == 1) {
        sVar4 = strlen(*(char **)(iVar3 + *(int *)(iVar1 + 0x2c)));
        local_50[0] = (byte)sVar4;
        if (0x20 < (sVar4 & 0xff)) {
          *(undefined4 *)(param_1 + 0x18) = 2;
          return;
        }
      }
      FUN_00554290(param_1,local_50);
      if (*(int *)(param_1 + 0x10) == 2) {
        *(undefined1 **)(iVar3 + *(int *)(iVar1 + 0x2c)) = puVar8;
      }
      FUN_00553b40(param_1,*(undefined4 *)(iVar3 + *(int *)(iVar1 + 0x2c)),local_50[0]);
      uVar6 = uVar9 + 1;
      uVar9 = uVar9 + 1;
      if (*(int *)(param_1 + 0x10) == 2) {
        puVar5 = puVar8 + local_50[0];
        puVar8 = puVar5 + 1;
        *puVar5 = 0;
        if ((ulonglong)*(uint *)(iVar1 + 0x28) <= (uVar6 & 0xffffffff)) break;
      }
      else if ((ulonglong)*(uint *)(iVar1 + 0x28) <= (uVar6 & 0xffffffff)) break;
      iVar7 = *(int *)(param_1 + 0x10);
    } while( true );
  }
  if ((undefined1 *)(iVar1 + iVar2) < puVar8) {
    *(undefined4 *)(param_1 + 0x18) = 1;
  }
  return;
}


// 0x059285c (0x4 bytes)
void FUN_0059285c(void)

{
  return;
}


// 0x0592860 (0x4 bytes)
void FUN_00592860(void)

{
  return;
}


// 0x0592864 (0x4 bytes)
void FUN_00592864(void)

{
  return;
}


// 0x0592868 (0x4 bytes)
void FUN_00592868(void)

{
  return;
}


// 0x059286c (0x4 bytes)
void FUN_0059286c(void)

{
  return;
}


// 0x0592870 (0x4 bytes)
void FUN_00592870(void)

{
  return;
}


// 0x0592874 (0x8 bytes)
undefined8 FUN_00592874(void)

{
  return 0x180;
}


// 0x059287c (0x8 bytes)
undefined8 FUN_0059287c(void)

{
  return 0x1c;
}


// 0x0592884 (0x8 bytes)
undefined8 FUN_00592884(void)

{
  return 0x1c;
}


// 0x059288c (0x8 bytes)
undefined8 FUN_0059288c(void)

{
  return 0x7c;
}


// 0x0592894 (0x8 bytes)
undefined8 FUN_00592894(void)

{
  return 0x50;
}


// 0x059289c (0x58 bytes)
undefined8 FUN_0059289c(undefined8 param_1,undefined8 param_2,undefined8 param_3,int param_4)

{
  (*(code *)**(undefined4 **)(PTR_PTR_0071be84 + 0x38))(param_1,param_4,param_4,param_4 + 0x18,1,0);
  return 0x1c;
}


// 0x05928f4 (0x58 bytes)
undefined8 FUN_005928f4(undefined8 param_1,undefined8 param_2,undefined8 param_3,int param_4)

{
  (*(code *)**(undefined4 **)(PTR_PTR_0071be84 + 0x38))(param_1,param_4,param_4,param_4 + 0x18,1,0);
  return 0x20;
}


// 0x059294c (0x58 bytes)
undefined8 FUN_0059294c(undefined8 param_1,undefined8 param_2,undefined8 param_3,int param_4)

{
  (*(code *)**(undefined4 **)(PTR_PTR_0071be84 + 0x38))(param_1,param_4,param_4,param_4 + 0x18,1,0);
  return 0x1c;
}


// 0x05929a4 (0x58 bytes)
undefined8 FUN_005929a4(undefined8 param_1,undefined8 param_2,undefined8 param_3,int param_4)

{
  (*(code *)**(undefined4 **)(PTR_PTR_0071be84 + 0x38))(param_1,param_4,param_4,param_4 + 0x18,1,0);
  return 0x1c;
}


// 0x05929fc (0x58 bytes)
undefined8 FUN_005929fc(undefined8 param_1,undefined8 param_2,undefined8 param_3,int param_4)

{
  (*(code *)**(undefined4 **)(PTR_PTR_0071be84 + 0x38))(param_1,param_4,param_4,param_4 + 0x18,1,0);
  return 0xc4;
}


// 0x0592a54 (0x58 bytes)
undefined8 FUN_00592a54(undefined8 param_1,undefined8 param_2,undefined8 param_3,int param_4)

{
  (*(code *)**(undefined4 **)(PTR_PTR_0071be84 + 0x38))(param_1,param_4,param_4,param_4 + 0x18,1,0);
  return 0x20;
}


// 0x0592aac (0x58 bytes)
undefined8 FUN_00592aac(undefined8 param_1,undefined8 param_2,undefined8 param_3,int param_4)

{
  (*(code *)**(undefined4 **)(PTR_PTR_0071be84 + 0x38))(param_1,param_4,param_4,param_4 + 0x18,1,0);
  return 0x1c;
}


// 0x0592b04 (0x60 bytes)
undefined8 FUN_00592b04(undefined8 param_1,undefined8 param_2,undefined8 param_3,int param_4)

{
  (*(code *)**(undefined4 **)(PTR_PTR_0071be84 + 0x38))
            (param_1,param_4,param_4 + 8,param_4,*(undefined1 *)(param_4 + 0x3d),0);
  return 0x40;
}


// 0x0592b64 (0x58 bytes)
undefined8 FUN_00592b64(undefined8 param_1,undefined8 param_2,undefined8 param_3,int param_4)

{
  (*(code *)**(undefined4 **)(PTR_PTR_0071be84 + 0x38))(param_1,param_4,param_4,param_4 + 0x18,1,0);
  return 0x20;
}


// 0x0592bbc (0x58 bytes)
undefined8 FUN_00592bbc(undefined8 param_1,undefined8 param_2,undefined8 param_3,int param_4)

{
  (*(code *)**(undefined4 **)(PTR_PTR_0071be84 + 0x38))(param_1,param_4,param_4,param_4 + 0x18,1,0);
  return 0x20;
}


// 0x0592c14 (0x58 bytes)
undefined8 FUN_00592c14(undefined8 param_1,undefined8 param_2,undefined8 param_3,int param_4)

{
  (*(code *)**(undefined4 **)(PTR_PTR_0071be84 + 0x38))(param_1,param_4,param_4,param_4 + 0x18,1,0);
  return 0xc4;
}


// 0x0592c6c (0x64 bytes)
undefined8 FUN_00592c6c(undefined8 param_1,undefined8 param_2,undefined8 param_3,int param_4)

{
  (*(code *)**(undefined4 **)(PTR_PTR_0071be84 + 0x38))
            (param_1,param_4,param_4,param_4 + 0x18,*(undefined1 *)(param_4 + 0x1c),0);
  return 600;
}


// 0x0592cd0 (0x58 bytes)
undefined8 FUN_00592cd0(undefined8 param_1,undefined8 param_2,undefined8 param_3,int param_4)

{
  (*(code *)**(undefined4 **)(PTR_PTR_0071be84 + 0x38))(param_1,param_4,param_4,param_4 + 0x18,1,0);
  return 0x1c;
}


// 0x0592d28 (0x58 bytes)
undefined8 FUN_00592d28(undefined8 param_1,undefined8 param_2,undefined8 param_3,int param_4)

{
  (*(code *)**(undefined4 **)(PTR_PTR_0071be84 + 0x38))(param_1,param_4,param_4,param_4 + 0x18,1,0);
  return 0x3c;
}


// 0x0592d80 (0x58 bytes)
undefined8 FUN_00592d80(undefined8 param_1,undefined8 param_2,undefined8 param_3,int param_4)

{
  (*(code *)**(undefined4 **)(PTR_PTR_0071be84 + 0x38))(param_1,param_4,param_4,param_4 + 0x18,1,0);
  return 0x1c;
}


// 0x0592dd8 (0x58 bytes)
undefined8 FUN_00592dd8(undefined8 param_1,undefined8 param_2,undefined8 param_3,int param_4)

{
  (*(code *)**(undefined4 **)(PTR_PTR_0071be84 + 0x38))(param_1,param_4,param_4,param_4 + 0x18,1,0);
  return 0x1c;
}


// 0x0592e30 (0x58 bytes)
undefined8 FUN_00592e30(undefined8 param_1,undefined8 param_2,undefined8 param_3,int param_4)

{
  (*(code *)**(undefined4 **)(PTR_PTR_0071be84 + 0x38))(param_1,param_4,param_4,param_4 + 0x18,1,0);
  return 0x20;
}


// 0x0592e88 (0x58 bytes)
undefined8 FUN_00592e88(undefined8 param_1,undefined8 param_2,undefined8 param_3,int param_4)

{
  (*(code *)**(undefined4 **)(PTR_PTR_0071be84 + 0x38))(param_1,param_4,param_4,param_4 + 0x18,1,0);
  return 0x20;
}


// 0x0592ee0 (0x58 bytes)
undefined8 FUN_00592ee0(undefined8 param_1,undefined8 param_2,undefined8 param_3,int param_4)

{
  (*(code *)**(undefined4 **)(PTR_PTR_0071be84 + 0x38))(param_1,param_4,param_4,param_4 + 0x18,1,0);
  return 0xc0;
}


// 0x0592f38 (0x58 bytes)
undefined8 FUN_00592f38(undefined8 param_1,undefined8 param_2,undefined8 param_3,int param_4)

{
  (*(code *)**(undefined4 **)(PTR_PTR_0071be84 + 0x38))(param_1,param_4,param_4,param_4 + 0x18,1,0);
  return 0xb8;
}


// 0x0592f90 (0x58 bytes)
undefined8 FUN_00592f90(undefined8 param_1,undefined8 param_2,undefined8 param_3,int param_4)

{
  (*(code *)**(undefined4 **)(PTR_PTR_0071be84 + 0x38))(param_1,param_4,param_4,param_4 + 0x18,1,0);
  return 0xbc;
}


// 0x0592fe8 (0x8 bytes)
undefined8 FUN_00592fe8(void)

{
  return 0x3c;
}


// 0x0592ff0 (0x58 bytes)
undefined8 FUN_00592ff0(undefined8 param_1,undefined8 param_2,undefined8 param_3,int param_4)

{
  (*(code *)**(undefined4 **)(PTR_PTR_0071be84 + 0x38))(param_1,param_4,param_4,param_4 + 0x18,1,0);
  return 0xb8;
}


// 0x0593048 (0x64 bytes)
undefined8 FUN_00593048(undefined8 param_1,undefined8 param_2,undefined8 param_3,int param_4)

{
  (*(code *)**(undefined4 **)(PTR_PTR_0071be84 + 0x38))
            (param_1,param_4,param_4,param_4 + 0x18,*(undefined1 *)(param_4 + 0x6c),0);
  return 0x70;
}


// 0x05930ac (0x64 bytes)
undefined8 FUN_005930ac(undefined8 param_1,undefined8 param_2,undefined8 param_3,int param_4)

{
  (*(code *)**(undefined4 **)(PTR_PTR_0071be84 + 0x38))
            (param_1,param_4,param_4,param_4 + 0x18,*(undefined1 *)(param_4 + 0x6c),0);
  return 0x70;
}


// 0x0593110 (0x64 bytes)
undefined8 FUN_00593110(undefined8 param_1,undefined8 param_2,undefined8 param_3,int param_4)

{
  (*(code *)**(undefined4 **)(PTR_PTR_0071be84 + 0x38))
            (param_1,param_4,param_4,param_4 + 0x18,*(undefined1 *)(param_4 + 100),0);
  return 0x68;
}


// 0x0593174 (0x64 bytes)
undefined8 FUN_00593174(undefined8 param_1,undefined8 param_2,undefined8 param_3,int param_4)

{
  (*(code *)**(undefined4 **)(PTR_PTR_0071be84 + 0x38))
            (param_1,param_4,param_4,param_4 + 0x18,*(undefined1 *)(param_4 + 0x148),0);
  return 0x14c;
}


// 0x05931d8 (0x64 bytes)
undefined8 FUN_005931d8(undefined8 param_1,undefined8 param_2,undefined8 param_3,int param_4)

{
  (*(code *)**(undefined4 **)(PTR_PTR_0071be84 + 0x38))
            (param_1,param_4,param_4,param_4 + 0x18,*(undefined1 *)(param_4 + 0x144),0);
  return 0x148;
}


// 0x059323c (0x58 bytes)
undefined8 FUN_0059323c(undefined8 param_1,undefined8 param_2,undefined8 param_3,int param_4)

{
  (*(code *)**(undefined4 **)(PTR_PTR_0071be84 + 0x38))(param_1,param_4,param_4,param_4 + 0x18,1,0);
  return 0x148;
}


// 0x0593294 (0x58 bytes)
undefined8 FUN_00593294(undefined8 param_1,undefined8 param_2,undefined8 param_3,int param_4)

{
  (*(code *)**(undefined4 **)(PTR_PTR_0071be84 + 0x38))(param_1,param_4,param_4,param_4 + 0x18,1,0);
  return 0x1a0;
}


// 0x05932ec (0x58 bytes)
undefined8 FUN_005932ec(undefined8 param_1,undefined8 param_2,undefined8 param_3,int param_4)

{
  (*(code *)**(undefined4 **)(PTR_PTR_0071be84 + 0x38))(param_1,param_4,param_4,param_4 + 0x18,1,0);
  return 100;
}


// 0x0593344 (0x64 bytes)
undefined8 FUN_00593344(undefined8 param_1,undefined8 param_2,undefined8 param_3,int param_4)

{
  (*(code *)**(undefined4 **)(PTR_PTR_0071be84 + 0x38))
            (param_1,param_4,param_4,param_4 + 0x18,*(undefined1 *)(param_4 + 0x8c),0);
  return 0x90;
}


// 0x05933a8 (0x64 bytes)
undefined8 FUN_005933a8(undefined8 param_1,undefined8 param_2,undefined8 param_3,int param_4)

{
  (*(code *)**(undefined4 **)(PTR_PTR_0071be84 + 0x38))
            (param_1,param_4,param_4,param_4 + 0x18,*(undefined1 *)(param_4 + 0x6c),0);
  return 0x70;
}


// 0x059340c (0x8 bytes)
undefined8 FUN_0059340c(void)

{
  return 0x38;
}


// 0x0593414 (0x8 bytes)
undefined8 FUN_00593414(void)

{
  return 0x38;
}


// 0x059341c (0x64 bytes)
undefined8 FUN_0059341c(undefined8 param_1,undefined8 param_2,undefined8 param_3,int param_4)

{
  (*(code *)**(undefined4 **)(PTR_PTR_0071be84 + 0x38))
            (param_1,param_4,param_4,param_4 + 0x18,*(undefined1 *)(param_4 + 0x44),0);
  return 0x48;
}


// 0x0593480 (0x58 bytes)
undefined8 FUN_00593480(undefined8 param_1,undefined8 param_2,undefined8 param_3,int param_4)

{
  (*(code *)**(undefined4 **)(PTR_PTR_0071be84 + 0x38))(param_1,param_4,param_4,param_4 + 0x18,1,0);
  return 0x1c;
}


// 0x05934d8 (0x58 bytes)
undefined8 FUN_005934d8(undefined8 param_1,undefined8 param_2,undefined8 param_3,int param_4)

{
  (*(code *)**(undefined4 **)(PTR_PTR_0071be84 + 0x38))(param_1,param_4,param_4,param_4 + 0x18,1,0);
  return 0x1c;
}


// 0x0593530 (0x58 bytes)
undefined8 FUN_00593530(undefined8 param_1,undefined8 param_2,undefined8 param_3,int param_4)

{
  (*(code *)**(undefined4 **)(PTR_PTR_0071be84 + 0x38))(param_1,param_4,param_4,param_4 + 0x18,1,0);
  return 0x40;
}


// 0x0593588 (0x8 bytes)
undefined8 FUN_00593588(void)

{
  return 0x38;
}


// 0x0593590 (0x58 bytes)
undefined8 FUN_00593590(undefined8 param_1,undefined8 param_2,undefined8 param_3,int param_4)

{
  (*(code *)**(undefined4 **)(PTR_PTR_0071be84 + 0x38))(param_1,param_4,param_4,param_4 + 0x18,1,0);
  return 0x1c;
}


// 0x05935e8 (0x58 bytes)
undefined8 FUN_005935e8(undefined8 param_1,undefined8 param_2,undefined8 param_3,int param_4)

{
  (*(code *)**(undefined4 **)(PTR_PTR_0071be84 + 0x38))(param_1,param_4,param_4,param_4 + 0x18,1,0);
  return 0x1c;
}


// 0x0593640 (0x64 bytes)
undefined8 FUN_00593640(undefined8 param_1,undefined8 param_2,undefined8 param_3,int param_4)

{
  (*(code *)**(undefined4 **)(PTR_PTR_0071be84 + 0x38))
            (param_1,param_4,param_4,param_4 + 0x18,*(undefined1 *)(param_4 + 0x44),0);
  return 0x48;
}


// 0x05936a4 (0x58 bytes)
undefined8 FUN_005936a4(undefined8 param_1,undefined8 param_2,undefined8 param_3,int param_4)

{
  (*(code *)**(undefined4 **)(PTR_PTR_0071be84 + 0x38))(param_1,param_4,param_4,param_4 + 0x18,1,0);
  return 0x1c;
}


// 0x05936fc (0x58 bytes)
undefined8 FUN_005936fc(undefined8 param_1,undefined8 param_2,undefined8 param_3,int param_4)

{
  (*(code *)**(undefined4 **)(PTR_PTR_0071be84 + 0x38))(param_1,param_4,param_4,param_4 + 0x18,1,0);
  return 0x1c;
}


// 0x0593754 (0x64 bytes)
undefined8 FUN_00593754(undefined8 param_1,undefined8 param_2,undefined8 param_3,int param_4)

{
  (*(code *)**(undefined4 **)(PTR_PTR_0071be84 + 0x38))
            (param_1,param_4,param_4,param_4 + 0x18,*(undefined1 *)(param_4 + 0x11c),0);
  return 0x120;
}


// 0x05937b8 (0x8 bytes)
undefined8 FUN_005937b8(void)

{
  return 0x1c;
}


// 0x05937c0 (0x64 bytes)
undefined8 FUN_005937c0(undefined8 param_1,undefined8 param_2,undefined8 param_3,int param_4)

{
  (*(code *)**(undefined4 **)(PTR_PTR_0071be84 + 0x38))
            (param_1,param_4,param_4,param_4 + 0x18,*(undefined1 *)(param_4 + 0xfc0),0);
  return 0xfc4;
}


// 0x0593824 (0x8 bytes)
undefined8 FUN_00593824(void)

{
  return 0x1c;
}


// 0x059382c (0x58 bytes)
undefined8 FUN_0059382c(undefined8 param_1,undefined8 param_2,undefined8 param_3,int param_4)

{
  (*(code *)**(undefined4 **)(PTR_PTR_0071be84 + 0x38))(param_1,param_4,param_4,param_4 + 0x18,1,0);
  return 0x20;
}


// 0x0593884 (0x58 bytes)
undefined8 FUN_00593884(undefined8 param_1,undefined8 param_2,undefined8 param_3,int param_4)

{
  (*(code *)**(undefined4 **)(PTR_PTR_0071be84 + 0x38))(param_1,param_4,param_4,param_4 + 0x18,1,0);
  return 0x1c;
}


// 0x05938dc (0x8 bytes)
undefined8 FUN_005938dc(void)

{
  return 0x2c;
}


// 0x05938e4 (0x64 bytes)
undefined8 FUN_005938e4(undefined8 param_1,undefined8 param_2,undefined8 param_3,int param_4)

{
  (*(code *)**(undefined4 **)(PTR_PTR_0071be84 + 0x38))
            (param_1,param_4,param_4,param_4 + 0x18,*(undefined1 *)(param_4 + 0x30),0);
  return 0x34;
}


// 0x0593948 (0x58 bytes)
undefined8 FUN_00593948(undefined8 param_1,undefined8 param_2,undefined8 param_3,int param_4)

{
  (*(code *)**(undefined4 **)(PTR_PTR_0071be84 + 0x38))(param_1,param_4,param_4,param_4 + 0x18,1,0);
  return 0x20;
}


// 0x05939a0 (0x58 bytes)
undefined8 FUN_005939a0(undefined8 param_1,undefined8 param_2,undefined8 param_3,int param_4)

{
  (*(code *)**(undefined4 **)(PTR_PTR_0071be84 + 0x38))(param_1,param_4,param_4,param_4 + 0x18,1,0);
  return 0x1c;
}


// 0x05939f8 (0x58 bytes)
undefined8 FUN_005939f8(undefined8 param_1,undefined8 param_2,undefined8 param_3,int param_4)

{
  (*(code *)**(undefined4 **)(PTR_PTR_0071be84 + 0x38))(param_1,param_4,param_4,param_4 + 0x18,1,0);
  return 0x168;
}


// 0x0593a50 (0x58 bytes)
undefined8 FUN_00593a50(undefined8 param_1,undefined8 param_2,undefined8 param_3,int param_4)

{
  (*(code *)**(undefined4 **)(PTR_PTR_0071be84 + 0x38))(param_1,param_4,param_4,param_4 + 0x18,1,0);
  return 0x148;
}


// 0x0593aa8 (0x58 bytes)
undefined8 FUN_00593aa8(undefined8 param_1,undefined8 param_2,undefined8 param_3,int param_4)

{
  (*(code *)**(undefined4 **)(PTR_PTR_0071be84 + 0x38))(param_1,param_4,param_4,param_4 + 0x18,1,0);
  return 0x1c;
}


// 0x0593b00 (0x58 bytes)
undefined8 FUN_00593b00(undefined8 param_1,undefined8 param_2,undefined8 param_3,int param_4)

{
  (*(code *)**(undefined4 **)(PTR_PTR_0071be84 + 0x38))(param_1,param_4,param_4,param_4 + 0x18,1,0);
  return 0x1c;
}


// 0x0593b58 (0x58 bytes)
undefined8 FUN_00593b58(undefined8 param_1,undefined8 param_2,undefined8 param_3,int param_4)

{
  (*(code *)**(undefined4 **)(PTR_PTR_0071be84 + 0x38))(param_1,param_4,param_4,param_4 + 0x18,1,0);
  return 0x1c;
}


// 0x0593bb0 (0x58 bytes)
undefined8 FUN_00593bb0(undefined8 param_1,undefined8 param_2,undefined8 param_3,int param_4)

{
  (*(code *)**(undefined4 **)(PTR_PTR_0071be84 + 0x38))(param_1,param_4,param_4,param_4 + 0x18,1,0);
  return 0x1c;
}


// 0x0593c08 (0x64 bytes)
undefined8 FUN_00593c08(undefined8 param_1,undefined8 param_2,undefined8 param_3,int param_4)

{
  (*(code *)**(undefined4 **)(PTR_PTR_0071be84 + 0x38))
            (param_1,param_4,param_4,param_4 + 0x18,*(undefined1 *)(param_4 + 0x84c),0);
  return 0x850;
}


// 0x0593c6c (0x64 bytes)
undefined8 FUN_00593c6c(undefined8 param_1,undefined8 param_2,undefined8 param_3,int param_4)

{
  (*(code *)**(undefined4 **)(PTR_PTR_0071be84 + 0x38))
            (param_1,param_4,param_4,param_4 + 0x18,*(undefined1 *)(param_4 + 0x848),0);
  return 0x84c;
}


// 0x0593cd0 (0x58 bytes)
undefined8 FUN_00593cd0(undefined8 param_1,undefined8 param_2,undefined8 param_3,int param_4)

{
  (*(code *)**(undefined4 **)(PTR_PTR_0071be84 + 0x38))(param_1,param_4,param_4,param_4 + 0x18,1,0);
  return 0x1c;
}


// 0x0593d28 (0x58 bytes)
undefined8 FUN_00593d28(undefined8 param_1,undefined8 param_2,undefined8 param_3,int param_4)

{
  (*(code *)**(undefined4 **)(PTR_PTR_0071be84 + 0x38))(param_1,param_4,param_4,param_4 + 0x18,1,0);
  return 0x1c;
}


// 0x0593d80 (0x58 bytes)
undefined8 FUN_00593d80(undefined8 param_1,undefined8 param_2,undefined8 param_3,int param_4)

{
  (*(code *)**(undefined4 **)(PTR_PTR_0071be84 + 0x38))(param_1,param_4,param_4,param_4 + 0x18,1,0);
  return 0x1c;
}


// 0x0593dd8 (0x64 bytes)
undefined8 FUN_00593dd8(undefined8 param_1,undefined8 param_2,undefined8 param_3,int param_4)

{
  (*(code *)**(undefined4 **)(PTR_PTR_0071be84 + 0x38))
            (param_1,param_4,param_4,param_4 + 0x18,*(undefined1 *)(param_4 + 0x4d4),0);
  return 0x4d8;
}


// 0x0593e3c (0x58 bytes)
undefined8 FUN_00593e3c(undefined8 param_1,undefined8 param_2,undefined8 param_3,int param_4)

{
  (*(code *)**(undefined4 **)(PTR_PTR_0071be84 + 0x38))(param_1,param_4,param_4,param_4 + 0x18,1,0);
  return 0x1c;
}


// 0x0593e94 (0x58 bytes)
undefined8 FUN_00593e94(undefined8 param_1,undefined8 param_2,undefined8 param_3,int param_4)

{
  (*(code *)**(undefined4 **)(PTR_PTR_0071be84 + 0x38))(param_1,param_4,param_4,param_4 + 0x18,1,0);
  return 0x1c;
}


// 0x0593eec (0x58 bytes)
undefined8 FUN_00593eec(undefined8 param_1,undefined8 param_2,undefined8 param_3,int param_4)

{
  (*(code *)**(undefined4 **)(PTR_PTR_0071be84 + 0x38))(param_1,param_4,param_4,param_4 + 0x18,1,0);
  return 0x1c;
}


// 0x0593f44 (0x58 bytes)
undefined8 FUN_00593f44(undefined8 param_1,undefined8 param_2,undefined8 param_3,int param_4)

{
  (*(code *)**(undefined4 **)(PTR_PTR_0071be84 + 0x38))(param_1,param_4,param_4,param_4 + 0x18,1,0);
  return 0x1c;
}


// 0x0593f9c (0x58 bytes)
undefined8 FUN_00593f9c(undefined8 param_1,undefined8 param_2,undefined8 param_3,int param_4)

{
  (*(code *)**(undefined4 **)(PTR_PTR_0071be84 + 0x38))(param_1,param_4,param_4,param_4 + 0x18,1,0);
  return 0x1c;
}


// 0x0593ff4 (0x64 bytes)
undefined8 FUN_00593ff4(undefined8 param_1,undefined8 param_2,undefined8 param_3,int param_4)

{
  (*(code *)**(undefined4 **)(PTR_PTR_0071be84 + 0x38))
            (param_1,param_4,param_4,param_4 + 0x18,*(undefined1 *)(param_4 + 0x16c),0);
  return 0x170;
}


// 0x0594058 (0x64 bytes)
undefined8 FUN_00594058(undefined8 param_1,undefined8 param_2,undefined8 param_3,int param_4)

{
  (*(code *)**(undefined4 **)(PTR_PTR_0071be84 + 0x38))
            (param_1,param_4,param_4,param_4 + 0x18,*(undefined1 *)(param_4 + 0x98c),0);
  return 0x994;
}


// 0x05940bc (0x58 bytes)
undefined8 FUN_005940bc(undefined8 param_1,undefined8 param_2,undefined8 param_3,int param_4)

{
  (*(code *)**(undefined4 **)(PTR_PTR_0071be84 + 0x38))(param_1,param_4,param_4,param_4 + 0x18,1,0);
  return 0x1c;
}


// 0x0594114 (0x64 bytes)
undefined8 FUN_00594114(undefined8 param_1,undefined8 param_2,undefined8 param_3,int param_4)

{
  (*(code *)**(undefined4 **)(PTR_PTR_0071be84 + 0x38))
            (param_1,param_4,param_4,param_4 + 0x18,*(undefined1 *)(param_4 + 0x24),0);
  return 0x28;
}


// 0x0594178 (0x58 bytes)
undefined8 FUN_00594178(undefined8 param_1,undefined8 param_2,undefined8 param_3,int param_4)

{
  (*(code *)**(undefined4 **)(PTR_PTR_0071be84 + 0x38))(param_1,param_4,param_4,param_4 + 0x18,1,0);
  return 0x1c;
}


// 0x05941d0 (0x58 bytes)
undefined8 FUN_005941d0(undefined8 param_1,undefined8 param_2,undefined8 param_3,int param_4)

{
  (*(code *)**(undefined4 **)(PTR_PTR_0071be84 + 0x38))(param_1,param_4,param_4,param_4 + 0x18,1,0);
  return 0x1c;
}


// 0x0594228 (0x58 bytes)
undefined8 FUN_00594228(undefined8 param_1,undefined8 param_2,undefined8 param_3,int param_4)

{
  (*(code *)**(undefined4 **)(PTR_PTR_0071be84 + 0x38))(param_1,param_4,param_4,param_4 + 0x2c,1,0);
  return 0x30;
}


// 0x0594280 (0x54 bytes)
undefined8 FUN_00594280(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  (*(code *)**(undefined4 **)(PTR_PTR_0071be84 + 0x38))(param_1,param_4,param_4,0,1,0);
  return 0x4d;
}


// 0x05942d4 (0x58 bytes)
undefined8 FUN_005942d4(undefined8 param_1,undefined8 param_2,undefined8 param_3,int param_4)

{
  (*(code *)**(undefined4 **)(PTR_PTR_0071be84 + 0x38))(param_1,param_4,param_4,param_4 + 0x18,1,0);
  return 0x28;
}


// 0x059432c (0x58 bytes)
undefined8 FUN_0059432c(undefined8 param_1,undefined8 param_2,undefined8 param_3,int param_4)

{
  (*(code *)**(undefined4 **)(PTR_PTR_0071be84 + 0x38))(param_1,param_4,param_4,param_4 + 0x18,1,0);
  return 0x1c;
}


// 0x0594384 (0x58 bytes)
undefined8 FUN_00594384(undefined8 param_1,undefined8 param_2,undefined8 param_3,int param_4)

{
  (*(code *)**(undefined4 **)(PTR_PTR_0071be84 + 0x38))(param_1,param_4,param_4,param_4 + 0x18,1,0);
  return 0x1c;
}


// 0x05943dc (0x58 bytes)
undefined8 FUN_005943dc(undefined8 param_1,undefined8 param_2,undefined8 param_3,int param_4)

{
  (*(code *)**(undefined4 **)(PTR_PTR_0071be84 + 0x38))(param_1,param_4,param_4,param_4 + 0x1c,1,0);
  return 0x20;
}


// 0x0594434 (0x64 bytes)
undefined8 FUN_00594434(undefined8 param_1,undefined8 param_2,undefined8 param_3,int param_4)

{
  (*(code *)**(undefined4 **)(PTR_PTR_0071be84 + 0x38))
            (param_1,param_4,param_4,param_4 + 0x5c,*(undefined1 *)(param_4 + 0x60),0);
  return 100;
}


// 0x0594498 (0x64 bytes)
undefined8 FUN_00594498(undefined8 param_1,undefined8 param_2,undefined8 param_3,int param_4)

{
  (*(code *)**(undefined4 **)(PTR_PTR_0071be84 + 0x38))
            (param_1,param_4,param_4,param_4 + 0x3c,*(undefined1 *)(param_4 + 0x40),0);
  return 0x44;
}


// 0x05944fc (0x58 bytes)
undefined8 FUN_005944fc(undefined8 param_1,undefined8 param_2,undefined8 param_3,int param_4)

{
  (*(code *)**(undefined4 **)(PTR_PTR_0071be84 + 0x38))(param_1,param_4,param_4,param_4 + 0x18,1,0);
  return 0x2c;
}


// 0x0594554 (0x58 bytes)
undefined8 FUN_00594554(undefined8 param_1,undefined8 param_2,undefined8 param_3,int param_4)

{
  (*(code *)**(undefined4 **)(PTR_PTR_0071be84 + 0x38))(param_1,param_4,param_4,param_4 + 0x58,1,0);
  return 0x5c;
}


// 0x05945ac (0x58 bytes)
undefined8 FUN_005945ac(undefined8 param_1,undefined8 param_2,undefined8 param_3,int param_4)

{
  (*(code *)**(undefined4 **)(PTR_PTR_0071be84 + 0x38))(param_1,param_4,param_4,param_4 + 0x20,1,0);
  return 0x24;
}


// 0x0594604 (0x58 bytes)
undefined8 FUN_00594604(undefined8 param_1,undefined8 param_2,undefined8 param_3,int param_4)

{
  (*(code *)**(undefined4 **)(PTR_PTR_0071be84 + 0x38))(param_1,param_4,param_4,param_4 + 0x1c,1,0);
  return 0x20;
}


// 0x059465c (0x58 bytes)
undefined8 FUN_0059465c(undefined8 param_1,undefined8 param_2,undefined8 param_3,int param_4)

{
  (*(code *)**(undefined4 **)(PTR_PTR_0071be84 + 0x38))(param_1,param_4,param_4,param_4 + 0x1c,1,0);
  return 0x20;
}


// 0x05946b4 (0x64 bytes)
undefined8 FUN_005946b4(undefined8 param_1,undefined8 param_2,undefined8 param_3,int param_4)

{
  (*(code *)**(undefined4 **)(PTR_PTR_0071be84 + 0x38))
            (param_1,param_4,param_4,param_4 + 0x18,*(undefined1 *)(param_4 + 0x40),0);
  return 0x44;
}


// 0x0594718 (0x58 bytes)
undefined8 FUN_00594718(undefined8 param_1,undefined8 param_2,undefined8 param_3,int param_4)

{
  (*(code *)**(undefined4 **)(PTR_PTR_0071be84 + 0x38))(param_1,param_4,param_4,param_4 + 0x20,1,0);
  return 0x24;
}


// 0x0594770 (0x58 bytes)
undefined8 FUN_00594770(undefined8 param_1,undefined8 param_2,undefined8 param_3,int param_4)

{
  (*(code *)**(undefined4 **)(PTR_PTR_0071be84 + 0x38))(param_1,param_4,param_4,param_4 + 0x18,1,0);
  return 0x1c;
}


// 0x05947c8 (0x58 bytes)
undefined8 FUN_005947c8(undefined8 param_1,undefined8 param_2,undefined8 param_3,int param_4)

{
  (*(code *)**(undefined4 **)(PTR_PTR_0071be84 + 0x38))(param_1,param_4,param_4,param_4 + 0x18,1,0);
  return 0x1c;
}


// 0x0594820 (0x64 bytes)
undefined8 FUN_00594820(undefined8 param_1,undefined8 param_2,undefined8 param_3,int param_4)

{
  (*(code *)**(undefined4 **)(PTR_PTR_0071be84 + 0x38))
            (param_1,param_4,param_4,param_4 + 0x18,*(undefined1 *)(param_4 + 0xcc),0);
  return 0xd0;
}


// 0x0594884 (0x64 bytes)
undefined8 FUN_00594884(undefined8 param_1,undefined8 param_2,undefined8 param_3,int param_4)

{
  (*(code *)**(undefined4 **)(PTR_PTR_0071be84 + 0x38))
            (param_1,param_4,param_4,param_4 + 0x18,*(undefined1 *)(param_4 + 0xcc),0);
  return 0xd0;
}


// 0x05948e8 (0x64 bytes)
undefined8 FUN_005948e8(undefined8 param_1,undefined8 param_2,undefined8 param_3,int param_4)

{
  (*(code *)**(undefined4 **)(PTR_PTR_0071be84 + 0x38))
            (param_1,param_4,param_4,param_4 + 0x18,*(undefined1 *)(param_4 + 0x1cc),0);
  return 0x1d0;
}


// 0x059494c (0x64 bytes)
undefined8 FUN_0059494c(undefined8 param_1,undefined8 param_2,undefined8 param_3,int param_4)

{
  (*(code *)**(undefined4 **)(PTR_PTR_0071be84 + 0x38))
            (param_1,param_4,param_4,param_4 + 0x18,*(undefined1 *)(param_4 + 0x1a0),0);
  return 0x1a4;
}


// 0x05949b0 (0x64 bytes)
undefined8 FUN_005949b0(undefined8 param_1,undefined8 param_2,undefined8 param_3,int param_4)

{
  (*(code *)**(undefined4 **)(PTR_PTR_0071be84 + 0x38))
            (param_1,param_4,param_4,param_4 + 0x18,*(undefined1 *)(param_4 + 0x1a0),0);
  return 0x1a4;
}


// 0x0594a14 (0x64 bytes)
undefined8 FUN_00594a14(undefined8 param_1,undefined8 param_2,undefined8 param_3,int param_4)

{
  (*(code *)**(undefined4 **)(PTR_PTR_0071be84 + 0x38))
            (param_1,param_4,param_4,param_4 + 0x18,*(undefined1 *)(param_4 + 0x80),0);
  return 0x84;
}


// 0x0594a78 (0x60 bytes)
undefined8 FUN_00594a78(undefined8 param_1,undefined8 param_2,undefined8 param_3,int param_4)

{
  (*(code *)**(undefined4 **)(PTR_PTR_0071be84 + 0x38))
            (param_1,param_4,param_4 + 0xb0,param_4 + 0xac,1,0);
  return 200;
}


// 0x0594ad8 (0x8 bytes)
undefined8 FUN_00594ad8(void)

{
  return 0x1fc;
}


// 0x0594ae0 (0x60 bytes)
undefined8 FUN_00594ae0(undefined8 param_1,undefined8 param_2,undefined8 param_3,int param_4)

{
  (*(code *)**(undefined4 **)(PTR_PTR_0071be84 + 0x38))
            (param_1,param_4,param_4 + 0xb0,param_4 + 0xac,1,0);
  return 200;
}


// 0x0594b40 (0x78 bytes)
undefined8 FUN_00594b40(undefined8 param_1,undefined8 param_2,undefined8 param_3,int param_4)

{
  ulonglong uVar1;
  ulonglong uVar2;
  
  uVar1 = (ulonglong)*(uint *)(param_4 + 0x1dc) ^ 3;
  uVar2 = (ulonglong)((int)uVar1 >> 0x1f);
  (*(code *)**(undefined4 **)(PTR_PTR_0071be84 + 0x38))
            (param_1,param_4,param_4 + 0x1e4,param_4 + 0x1e0,
             ((uVar2 ^ uVar1) - uVar2) - 1 >> 0x1f & 1,0);
  return 0x1fc;
}


// 0x0594bb8 (0x78 bytes)
undefined8 FUN_00594bb8(undefined8 param_1,undefined8 param_2,undefined8 param_3,int param_4)

{
  ulonglong uVar1;
  ulonglong uVar2;
  
  uVar1 = (ulonglong)*(uint *)(param_4 + 0x1dc) ^ 3;
  uVar2 = (ulonglong)((int)uVar1 >> 0x1f);
  (*(code *)**(undefined4 **)(PTR_PTR_0071be84 + 0x38))
            (param_1,param_4,param_4 + 0x1e4,param_4 + 0x1e0,
             ((uVar2 ^ uVar1) - uVar2) - 1 >> 0x1f & 1,0);
  return 0x1fc;
}


// 0x0594c30 (0x58 bytes)
undefined8 FUN_00594c30(undefined8 param_1,undefined8 param_2,undefined8 param_3,int param_4)

{
  (*(code *)**(undefined4 **)(PTR_PTR_0071be84 + 0x38))(param_1,param_4,param_4 + 4,param_4,1,0);
  return 0x1c;
}


// 0x0594c88 (0x68 bytes)
undefined8 FUN_00594c88(undefined8 param_1,undefined8 param_2,undefined8 param_3,int param_4)

{
  (*(code *)**(undefined4 **)(PTR_PTR_0071be84 + 0x38))
            (param_1,param_4,param_4 + 0xb0,param_4 + 0xac,*(undefined1 *)(param_4 + 0xc5),0);
  return 200;
}


// 0x0594cf0 (0x68 bytes)
undefined8 FUN_00594cf0(undefined8 param_1,undefined8 param_2,undefined8 param_3,int param_4)

{
  (*(code *)**(undefined4 **)(PTR_PTR_0071be84 + 0x38))
            (param_1,param_4,param_4 + 0x1b0,param_4 + 0x1ac,*(undefined1 *)(param_4 + 0x1c5),0);
  return 0x1c8;
}


// 0x0594d58 (0x60 bytes)
undefined8 FUN_00594d58(undefined8 param_1,undefined8 param_2,undefined8 param_3,int param_4)

{
  (*(code *)**(undefined4 **)(PTR_PTR_0071be84 + 0x38))
            (param_1,param_4,param_4 + 0xb0,param_4 + 0xac,1,0);
  return 200;
}


// 0x0594db8 (0x60 bytes)
undefined8 FUN_00594db8(undefined8 param_1,undefined8 param_2,undefined8 param_3,int param_4)

{
  (*(code *)**(undefined4 **)(PTR_PTR_0071be84 + 0x38))
            (param_1,param_4,param_4 + 0x1c4,param_4 + 0x1c0,1,0);
  return 0x1dc;
}


// 0x0594e18 (0x60 bytes)
undefined8 FUN_00594e18(undefined8 param_1,undefined8 param_2,undefined8 param_3,int param_4)

{
  (*(code *)**(undefined4 **)(PTR_PTR_0071be84 + 0x38))
            (param_1,param_4,param_4 + 0xb0,param_4 + 0xac,1,0);
  return 200;
}


// 0x0594e78 (0x60 bytes)
undefined8 FUN_00594e78(undefined8 param_1,undefined8 param_2,undefined8 param_3,int param_4)

{
  (*(code *)**(undefined4 **)(PTR_PTR_0071be84 + 0x38))
            (param_1,param_4,param_4 + 0xb0,param_4 + 0xac,1,0);
  return 200;
}


// 0x0594ed8 (0x68 bytes)
undefined8 FUN_00594ed8(undefined8 param_1,undefined8 param_2,undefined8 param_3,int param_4)

{
  (*(code *)**(undefined4 **)(PTR_PTR_0071be84 + 0x38))
            (param_1,param_4,param_4 + 0x1e8,param_4 + 0x1e4,*(undefined1 *)(param_4 + 0x1fd),0);
  return 0x200;
}


// 0x0594f40 (0x58 bytes)
undefined8 FUN_00594f40(undefined8 param_1,undefined8 param_2,undefined8 param_3,int param_4)

{
  (*(code *)**(undefined4 **)(PTR_PTR_0071be84 + 0x38))(param_1,param_4,param_4 + 4,param_4,1,0);
  return 0x1c;
}


// 0x0594f98 (0x64 bytes)
undefined8 FUN_00594f98(undefined8 param_1,undefined8 param_2,undefined8 param_3,int param_4)

{
  (*(code *)**(undefined4 **)(PTR_PTR_0071be84 + 0x38))
            (param_1,param_4,param_4,param_4 + 0x18,*(undefined1 *)(param_4 + 0x11c),0);
  return 0x120;
}


// 0x0594ffc (0x8 bytes)
undefined8 FUN_00594ffc(void)

{
  return 0x230;
}


// 0x0595004 (0x8 bytes)
undefined8 FUN_00595004(void)

{
  return 0x3b8;
}


// 0x059500c (0x54 bytes)
undefined8 FUN_0059500c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  (*(code *)**(undefined4 **)(PTR_PTR_0071be84 + 0x38))(param_1,param_4,param_4,0,1,0);
  return 0x18;
}


// 0x0595060 (0x58 bytes)
undefined8 FUN_00595060(undefined8 param_1,undefined8 param_2,undefined8 param_3,int param_4)

{
  (*(code *)**(undefined4 **)(PTR_PTR_0071be84 + 0x38))(param_1,param_4,param_4,param_4 + 0x18,1,0);
  return 0x20;
}


// 0x05950b8 (0x58 bytes)
undefined8 FUN_005950b8(undefined8 param_1,undefined8 param_2,undefined8 param_3,int param_4)

{
  (*(code *)**(undefined4 **)(PTR_PTR_0071be84 + 0x38))(param_1,param_4,param_4,param_4 + 0x18,1,0);
  return 0x20;
}


// 0x0595110 (0x58 bytes)
undefined8 FUN_00595110(undefined8 param_1,undefined8 param_2,undefined8 param_3,int param_4)

{
  (*(code *)**(undefined4 **)(PTR_PTR_0071be84 + 0x38))(param_1,param_4,param_4,param_4 + 0x18,1,0);
  return 0x1c;
}


// 0x0595168 (0x58 bytes)
undefined8 FUN_00595168(undefined8 param_1,undefined8 param_2,undefined8 param_3,int param_4)

{
  (*(code *)**(undefined4 **)(PTR_PTR_0071be84 + 0x38))(param_1,param_4,param_4,param_4 + 0x18,1,0);
  return 0x1c;
}


// 0x05951c0 (0x64 bytes)
undefined8 FUN_005951c0(undefined8 param_1,undefined8 param_2,undefined8 param_3,int param_4)

{
  (*(code *)**(undefined4 **)(PTR_PTR_0071be84 + 0x38))
            (param_1,param_4,param_4,param_4 + 0x18,*(undefined1 *)(param_4 + 0x44),0);
  return 0x48;
}


// 0x0595224 (0x78 bytes)
undefined8 FUN_00595224(undefined4 param_1,undefined8 param_2,undefined8 param_3,int param_4)

{
  if (*(int *)(param_4 + 0x18) == -0x3b6) {
    *(undefined4 *)PTR_DAT_0071be88 = 0;
  }
  (*(code *)**(undefined4 **)(PTR_PTR_0071be84 + 0x38))(param_1,param_4,param_4,param_4 + 0x18,1,0);
  return 0x1c;
}


// 0x059529c (0x58 bytes)
undefined8 FUN_0059529c(undefined8 param_1,undefined8 param_2,undefined8 param_3,int param_4)

{
  (*(code *)**(undefined4 **)(PTR_PTR_0071be84 + 0x38))(param_1,param_4,param_4,param_4 + 0x18,1,0);
  return 0x1c;
}


// 0x05952f4 (0x58 bytes)
undefined8 FUN_005952f4(undefined8 param_1,undefined8 param_2,undefined8 param_3,int param_4)

{
  (*(code *)**(undefined4 **)(PTR_PTR_0071be84 + 0x38))(param_1,param_4,param_4,param_4 + 0x18,1,0);
  return 0x24;
}


// 0x059534c (0x58 bytes)
undefined8 FUN_0059534c(undefined8 param_1,undefined8 param_2,undefined8 param_3,int param_4)

{
  (*(code *)**(undefined4 **)(PTR_PTR_0071be84 + 0x38))(param_1,param_4,param_4,param_4 + 0x18,1,0);
  return 0x1c;
}


// 0x05953a4 (0x58 bytes)
undefined8 FUN_005953a4(undefined8 param_1,undefined8 param_2,undefined8 param_3,int param_4)

{
  (*(code *)**(undefined4 **)(PTR_PTR_0071be84 + 0x38))(param_1,param_4,param_4,param_4 + 0x18,1,0);
  return 0x1c;
}


// 0x05953fc (0x58 bytes)
undefined8 FUN_005953fc(undefined8 param_1,undefined8 param_2,undefined8 param_3,int param_4)

{
  (*(code *)**(undefined4 **)(PTR_PTR_0071be84 + 0x38))(param_1,param_4,param_4,param_4 + 0x18,1,0);
  return 0x1c;
}


// 0x0595454 (0x58 bytes)
undefined8 FUN_00595454(undefined8 param_1,undefined8 param_2,undefined8 param_3,int param_4)

{
  (*(code *)**(undefined4 **)(PTR_PTR_0071be84 + 0x38))(param_1,param_4,param_4,param_4 + 0x1c,1,0);
  return 0x20;
}


// 0x05954ac (0x58 bytes)
undefined8 FUN_005954ac(undefined8 param_1,undefined8 param_2,undefined8 param_3,int param_4)

{
  (*(code *)**(undefined4 **)(PTR_PTR_0071be84 + 0x38))(param_1,param_4,param_4,param_4 + 0x18,1,0);
  return 0x20;
}


// 0x0595504 (0x58 bytes)
undefined8 FUN_00595504(undefined8 param_1,undefined8 param_2,undefined8 param_3,int param_4)

{
  (*(code *)**(undefined4 **)(PTR_PTR_0071be84 + 0x38))(param_1,param_4,param_4,param_4 + 0x18,1,0);
  return 0x20;
}


// 0x059555c (0x64 bytes)
undefined8 FUN_0059555c(undefined8 param_1,undefined8 param_2,undefined8 param_3,int param_4)

{
  (*(code *)**(undefined4 **)(PTR_PTR_0071be84 + 0x38))
            (param_1,param_4,param_4,param_4 + 0x18,*(undefined1 *)(param_4 + 0x44),0);
  return 0x48;
}


// 0x05955c0 (0x58 bytes)
undefined8 FUN_005955c0(undefined8 param_1,undefined8 param_2,undefined8 param_3,int param_4)

{
  (*(code *)**(undefined4 **)(PTR_PTR_0071be84 + 0x38))(param_1,param_4,param_4,param_4 + 0x18,1,0);
  return 0x1c;
}


// 0x0595618 (0x64 bytes)
undefined8 FUN_00595618(undefined8 param_1,undefined8 param_2,undefined8 param_3,int param_4)

{
  (*(code *)**(undefined4 **)(PTR_PTR_0071be84 + 0x38))
            (param_1,param_4,param_4,param_4 + 0x18,*(undefined1 *)(param_4 + 0x60),0);
  return 100;
}


// 0x059567c (0x58 bytes)
undefined8 FUN_0059567c(undefined8 param_1,undefined8 param_2,undefined8 param_3,int param_4)

{
  (*(code *)**(undefined4 **)(PTR_PTR_0071be84 + 0x38))(param_1,param_4,param_4,param_4 + 0x18,1,0);
  return 0x20;
}


// 0x05956d4 (0x64 bytes)
undefined8 FUN_005956d4(undefined8 param_1,undefined8 param_2,undefined8 param_3,int param_4)

{
  (*(code *)**(undefined4 **)(PTR_PTR_0071be84 + 0x38))
            (param_1,param_4,param_4,param_4 + 0x18,*(undefined1 *)(param_4 + 0x30),0);
  return 0x34;
}


// 0x0595738 (0x58 bytes)
undefined8 FUN_00595738(undefined8 param_1,undefined8 param_2,undefined8 param_3,int param_4)

{
  (*(code *)**(undefined4 **)(PTR_PTR_0071be84 + 0x38))(param_1,param_4,param_4,param_4 + 0x18,1,0);
  return 0x1c;
}


// 0x0595790 (0x58 bytes)
undefined8 FUN_00595790(undefined8 param_1,undefined8 param_2,undefined8 param_3,int param_4)

{
  (*(code *)**(undefined4 **)(PTR_PTR_0071be84 + 0x38))(param_1,param_4,param_4,param_4 + 0x18,1,0);
  return 0x1c;
}


// 0x05957e8 (0xc0 bytes)
undefined8 FUN_005957e8(undefined4 param_1,undefined8 param_2,undefined8 param_3,int param_4)

{
  GPiece<4> auStack_90;
  GPiece<4> local_8c;
  GPiece<4> auStack_88;
  GPiece<92> auStack_84;
  
  memset(auStack_88,0,0x54);
  FUN_00582b0c(param_1,auStack_84,auStack_90,local_8c,1);
  (*(code *)**(undefined4 **)(PTR_PTR_0071be84 + 0x38))
            (param_1,param_4,0,param_4 + 0x18,1,auStack_88);
  return 0x20;
}


// 0x05958a8 (0xd4 bytes)
/* WARNING: Removing unreachable block (ram,0x00595934) */

undefined8 FUN_005958a8(undefined4 param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4)

{
  GPiece<4> local_80;
  GPiece<4> local_7c;
  GPiece<4> auStack_78;
  GPiece<84> auStack_74;
  
  memset(auStack_78,0,0x54);
  FUN_00582b0c(param_1,auStack_74,local_7c,local_80,1);
  (*(code *)**(undefined4 **)(PTR_PTR_0071be84 + 0x38))(param_1,param_4,0,0,1,auStack_78);
  return 8;
}


// 0x059597c (0xe0 bytes)
undefined8 FUN_0059597c(undefined8 param_1,undefined8 param_2,undefined8 param_3,int param_4)

{
  int iVar1;
  GPiece<4> auStack_50;
  int local_4c;
  GPiece<48> auStack_48;
  
  iVar1 = FUN_00582b0c(param_1,auStack_48,auStack_50,&local_4c,0);
  if (iVar1 == 0) {
    iVar1 = -0xb;
    if (local_4c != 0) {
      if ((*(int *)(param_4 + 0x18) == 0) && (*(int *)(local_4c + 0x44) != 0)) {
        *(uint *)(local_4c + 0x14) = *(uint *)(local_4c + 0x14) | 0x80000000;
      }
      goto LAB_00595a00;
    }
  }
  *(int *)(param_4 + 0x18) = iVar1;
LAB_00595a00:
  (*(code *)**(undefined4 **)(PTR_PTR_0071be84 + 0x38))(param_1,param_4,param_4,param_4 + 0x18,1,0);
  return 0x34;
}


// 0x0595a5c (0xe0 bytes)
undefined4 FUN_00595a5c(undefined4 param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4)

{
  int iVar1;
  undefined4 uVar2;
  GPiece<4> auStack_80;
  int local_7c;
  GPiece<4> auStack_78;
  GPiece<92> auStack_74;
  
  memset(auStack_78,0,0x54);
  iVar1 = FUN_00582b0c(param_1,auStack_74,auStack_80,&local_7c,1);
  uVar2 = 0xffffffff;
  if (iVar1 == 0) {
    uVar2 = 0x10;
    if (*(int *)(local_7c + 0x11c) != 0) {
      (*(code *)**(undefined4 **)(PTR_PTR_0071be84 + 0x38))(param_1,param_4,0,0,1,auStack_78);
      uVar2 = 0x10;
    }
  }
  return uVar2;
}


// 0x0595b3c (0xbc bytes)
undefined8 FUN_00595b3c(undefined4 param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4)

{
  GPiece<4> auStack_90;
  GPiece<4> local_8c;
  GPiece<4> auStack_88;
  GPiece<92> auStack_84;
  
  memset(auStack_88,0,0x54);
  FUN_00582b0c(param_1,auStack_84,auStack_90,local_8c,1);
  (*(code *)**(undefined4 **)(PTR_PTR_0071be84 + 0x38))(param_1,param_4,0,0,1,auStack_88);
  return 0x40;
}


// 0x0595bf8 (0xc0 bytes)
undefined8 FUN_00595bf8(undefined4 param_1,undefined8 param_2,undefined8 param_3,int param_4)

{
  GPiece<4> auStack_90;
  GPiece<4> local_8c;
  GPiece<4> auStack_88;
  GPiece<92> auStack_84;
  
  memset(auStack_88,0,0x54);
  FUN_00582b0c(param_1,auStack_84,auStack_90,local_8c,1);
  (*(code *)**(undefined4 **)(PTR_PTR_0071be84 + 0x38))
            (param_1,param_4,0,param_4 + 0x18,1,auStack_88);
  return 0x40;
}


// 0x0595cb8 (0xbc bytes)
undefined8 FUN_00595cb8(undefined4 param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4)

{
  GPiece<4> auStack_90;
  GPiece<4> local_8c;
  GPiece<4> auStack_88;
  GPiece<92> auStack_84;
  
  memset(auStack_88,0,0x54);
  FUN_00582b0c(param_1,auStack_84,auStack_90,local_8c,1);
  (*(code *)**(undefined4 **)(PTR_PTR_0071be84 + 0x38))(param_1,param_4,0,0,1,auStack_88);
  return 0x28;
}


// 0x0595d74 (0xbc bytes)
undefined8 FUN_00595d74(undefined4 param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4)

{
  GPiece<4> auStack_90;
  GPiece<4> local_8c;
  GPiece<4> auStack_88;
  GPiece<92> auStack_84;
  
  memset(auStack_88,0,0x54);
  FUN_00582b0c(param_1,auStack_84,auStack_90,local_8c,1);
  (*(code *)**(undefined4 **)(PTR_PTR_0071be84 + 0x38))(param_1,param_4,0,0,1,auStack_88);
  return 0x34;
}


// 0x0595e30 (0xc0 bytes)
undefined8 FUN_00595e30(undefined4 param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4)

{
  GPiece<4> auStack_90;
  GPiece<4> local_8c;
  GPiece<4> auStack_88;
  GPiece<92> auStack_84;
  
  memset(auStack_88,0,0x54);
  FUN_00582b0c(param_1,auStack_84,auStack_90,local_8c,1);
  (*(code *)**(undefined4 **)(PTR_PTR_0071be84 + 0x38))(param_1,param_4,0,param_4,1,auStack_88);
  return 0xa8;
}


// 0x0595ef0 (0xc0 bytes)
undefined8 FUN_00595ef0(undefined4 param_1,undefined8 param_2,undefined8 param_3,int param_4)

{
  GPiece<4> auStack_90;
  GPiece<4> local_8c;
  GPiece<4> auStack_88;
  GPiece<92> auStack_84;
  
  memset(auStack_88,0,0x54);
  FUN_00582b0c(param_1,auStack_84,auStack_90,local_8c,1);
  (*(code *)**(undefined4 **)(PTR_PTR_0071be84 + 0x38))
            (param_1,param_4,0,param_4 + 0x18,1,auStack_88);
  return 0x24;
}


// 0x0595fb0 (0xf0 bytes)
/* WARNING: Removing unreachable block (ram,0x00596080) */

undefined8 FUN_00595fb0(undefined4 param_1,undefined8 param_2,undefined8 param_3,int param_4)

{
  int iVar1;
  GPiece<4> local_50;
  GPiece<4> auStack_4c;
  GPiece<48> auStack_48;
  
  if (*(int *)(param_4 + 0x18) == 0) {
    iVar1 = FUN_00582b0c(param_1,auStack_48,auStack_4c,local_50,1);
    if (iVar1 == 0) {
      iVar1 = -0xb;
    }
    *(int *)(param_4 + 0x18) = iVar1;
  }
  (*(code *)**(undefined4 **)(PTR_PTR_0071be84 + 0x38))(param_1,param_4,param_4,param_4 + 0x18,1,0);
  return 0x1c;
}


// 0x05960a0 (0x9c bytes)
undefined8 FUN_005960a0(undefined4 param_1,undefined8 param_2,undefined8 param_3,void *param_4)

{
  GPiece<12> local_f0;
  GPiece<24> auStack_e4;
  GPiece<172> auStack_cc;
  
  memcpy(auStack_e4,param_4,0xc4);
  (*(code *)**(undefined4 **)(PTR_PTR_0071be84 + 0x38))(param_1,local_f0,auStack_e4,auStack_cc,1,0);
  return 0xc4;
}


// 0x059613c (0xf0 bytes)
/* WARNING: Removing unreachable block (ram,0x005961c8) */

undefined8 FUN_0059613c(undefined4 param_1,undefined8 param_2,undefined8 param_3,int param_4)

{
  int iVar1;
  longlong lVar2;
  GPiece<4> local_40;
  GPiece<4> local_3c;
  GPiece<40> auStack_38;
  
  if (*(int *)(param_4 + 0x18) != 5) {
    FUN_00582b0c(param_1,auStack_38,local_3c,local_40,0);
    lVar2 = 0x11;
    iVar1 = 0x60;
    do {
      *(undefined4 *)(iVar1 + 4) = *(undefined4 *)(param_4 + 0x1c);
      lVar2 = lVar2 + -1;
      iVar1 = iVar1 + 8;
    } while (lVar2 != 0);
  }
  (*(code *)**(undefined4 **)(PTR_PTR_0071be84 + 0x38))(param_1,param_4,param_4,param_4 + 0x18,1,0);
  return 0xc4;
}


// 0x059622c (0x158 bytes)
undefined4 FUN_0059622c(undefined4 param_1,undefined8 param_2,undefined8 param_3,int param_4)

{
  undefined1 uVar1;
  undefined1 uVar2;
  undefined1 uVar3;
  int iVar4;
  undefined1 *local_50;
  GPiece<4> auStack_4c;
  GPiece<48> auStack_48;
  
  if (*(int *)(param_4 + 0x18) == 0) {
    iVar4 = FUN_00582b0c(param_1,auStack_48,auStack_4c,&local_50,0);
    if (iVar4 != 0) {
      return 0xffffffff;
    }
    if (local_50 == (undefined1 *)0x0) {
      return 0xffffffff;
    }
    uVar1 = *(undefined1 *)(param_4 + 0x1d);
    uVar2 = *(undefined1 *)(param_4 + 0x1e);
    uVar3 = *(undefined1 *)(param_4 + 0x1f);
    *local_50 = *(undefined1 *)(param_4 + 0x1c);
    local_50[1] = uVar1;
    local_50[2] = uVar2;
    local_50[3] = uVar3;
    uVar1 = *(undefined1 *)(param_4 + 0x21);
    uVar2 = *(undefined1 *)(param_4 + 0x22);
    uVar3 = *(undefined1 *)(param_4 + 0x23);
    local_50[4] = *(undefined1 *)(param_4 + 0x20);
    local_50[5] = uVar1;
    local_50[6] = uVar2;
    local_50[7] = uVar3;
    uVar1 = *(undefined1 *)(param_4 + 0x25);
    uVar2 = *(undefined1 *)(param_4 + 0x26);
    uVar3 = *(undefined1 *)(param_4 + 0x27);
    local_50[8] = *(undefined1 *)(param_4 + 0x24);
    local_50[9] = uVar1;
    local_50[10] = uVar2;
    local_50[0xb] = uVar3;
    uVar1 = *(undefined1 *)(param_4 + 0x29);
    uVar2 = *(undefined1 *)(param_4 + 0x2a);
    uVar3 = *(undefined1 *)(param_4 + 0x2b);
    local_50[0xc] = *(undefined1 *)(param_4 + 0x28);
    local_50[0xd] = uVar1;
    local_50[0xe] = uVar2;
    local_50[0xf] = uVar3;
    local_50[0x10] = *(undefined1 *)(param_4 + 0x2c);
  }
  (*(code *)**(undefined4 **)(PTR_PTR_0071be84 + 0x38))(param_1,param_4,param_4,param_4 + 0x18,1,0);
  return 0x30;
}


// 0x0596384 (0x118 bytes)
undefined8 FUN_00596384(undefined4 param_1,undefined8 param_2,undefined8 param_3,void *param_4)

{
  int iVar1;
  ulonglong uVar2;
  GPiece<24> auStack_470;
  GPiece<932> local_458;
  GPiece<140> auStack_b4;
  
  memset(auStack_470,0,0x440);
  memcpy(auStack_470,param_4,0x440);
  if ((*(uint *)((int)param_4 + 0x1c) & 0x200) != 0) {
    uVar2 = ZEXT48(PTR_DAT_0071be8c);
    iVar1 = memcmp(param_4,PTR_DAT_0071be8c,0x15);
    if (iVar1 == 0) {
      strcpy(auStack_b4,uVar2 + 0x15,0x80);
    }
  }
  (*(code *)**(undefined4 **)(PTR_PTR_0071be84 + 0x38))
            (param_1,auStack_470,auStack_470,local_458,*(undefined1 *)((int)param_4 + 0x43c),0);
  return 0;
}


// 0x059649c (0xc4 bytes)
int FUN_0059649c(void)

{
  undefined *puVar1;
  int iVar2;
  int in_r6;
  ulonglong uVar3;
  GPiece<4> auStack_50;
  int local_4c;
  int local_44;
  int local_38;
  
  puVar1 = PTR_DAT_0071be8c;
  uVar3 = ZEXT48(PTR_DAT_0071be8c);
  memset(PTR_DAT_0071be8c,0,0x95);
  FUN_0055442c(auStack_50,in_r6,in_r6 + 0x200,2);
  FUN_00553b40(auStack_50,puVar1,0x15);
  FUN_00553d84(auStack_50,uVar3 + 0x15);
  iVar2 = -1;
  if (local_38 == 0) {
    iVar2 = local_44 - local_4c;
  }
  return iVar2;
}


// 0x0596560 (0x35c bytes)
undefined8 FUN_00596560(undefined4 param_1,undefined8 param_2,undefined8 param_3,int *param_4)

{
  int iVar1;
  undefined4 *puVar2;
  size_t __n;
  int iVar3;
  undefined4 uVar4;
  ulonglong uVar5;
  undefined *puVar6;
  int local_250;
  int local_24c;
  GPiece<480> auStack_248;
  GPiece<4> local_68;
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
  undefined1 uStack_56;
  undefined1 uStack_55;
  undefined1 uStack_54;
  undefined1 uStack_53;
  undefined1 uStack_52;
  undefined1 uStack_51;
  undefined1 uStack_50;
  
  iVar1 = *param_4;
  uStack_64 = *(undefined1 *)(param_4 + 4);
  uStack_63 = *(undefined1 *)((int)param_4 + 0x11);
  uStack_62 = *(undefined1 *)((int)param_4 + 0x12);
  uStack_61 = *(undefined1 *)((int)param_4 + 0x13);
  uStack_60 = *(undefined1 *)(param_4 + 5);
  uStack_5f = *(undefined1 *)((int)param_4 + 0x15);
  uStack_5e = *(undefined1 *)((int)param_4 + 0x16);
  uStack_5d = *(undefined1 *)((int)param_4 + 0x17);
  uStack_5c = *(undefined1 *)(param_4 + 6);
  uStack_5b = *(undefined1 *)((int)param_4 + 0x19);
  uStack_5a = *(undefined1 *)((int)param_4 + 0x1a);
  uStack_59 = *(undefined1 *)((int)param_4 + 0x1b);
  uStack_57 = *(undefined1 *)((int)param_4 + 0x1d);
  uStack_56 = *(undefined1 *)((int)param_4 + 0x1e);
  uStack_55 = *(undefined1 *)((int)param_4 + 0x1f);
  uStack_58 = *(undefined1 *)(param_4 + 7);
  uStack_54 = *(undefined1 *)(param_4 + 8);
  uStack_53 = *(undefined1 *)((int)param_4 + 0x21);
  uStack_52 = *(undefined1 *)((int)param_4 + 0x22);
  uStack_51 = *(undefined1 *)((int)param_4 + 0x23);
  uStack_50 = *(undefined1 *)(param_4 + 9);
  puVar6 = PTR_PTR_0071be84;
  if ((((param_4[2] != 0) &&
       (iVar3 = FUN_00582a40(param_1,&local_24c), puVar6 = PTR_PTR_0071be84, local_24c != 0)) &&
      (iVar3 == 0)) && (iVar3 = FUN_00582a68(local_24c), puVar6 = PTR_PTR_0071be84, iVar3 != 0)) {
    puVar2 = *(undefined4 **)(PTR_PTR_0071be84 + 0x10);
    uVar4 = (*(code *)**(undefined4 **)(PTR_PTR_0071be84 + 0x3c))(param_4 + 4);
    iVar3 = (*(code *)*puVar2)(iVar3 + 0xf0,uVar4,param_1,&local_250);
    if ((iVar3 == 0) && (local_24c != 0)) {
      (*(code *)**(undefined4 **)(*(int *)PTR_DAT_0071be90 + 4))(local_250 + 0x48);
      __n = *(int *)(local_24c + 0x138) - iVar1;
      if (0x1d0 < (int)__n) {
        __n = 0x1d0;
      }
      memcpy(auStack_248,(void *)(*(int *)(local_24c + 0x134) + iVar1),__n);
      (*(code *)**(undefined4 **)(puVar6 + 0x2c))(local_250 + 4,1,0xa8,0x1fc,auStack_248,0,0,0);
    }
  }
  uVar5 = (ulonglong)((int)((ulonglong)(uint)param_4[2] ^ 3) >> 0x1f);
  (*(code *)**(undefined4 **)(puVar6 + 0x38))
            (param_1,auStack_248,&uStack_64,local_68,
             ((uVar5 ^ (ulonglong)(uint)param_4[2] ^ 3) - uVar5) - 1 >> 0x1f & 1,0);
  return 0x28;
}


// 0x05968bc (0xe8 bytes)
undefined8 FUN_005968bc(undefined4 param_1,undefined8 param_2,undefined8 param_3,int param_4)

{
  int iVar1;
  longlong lVar2;
  GPiece<4> local_40;
  GPiece<4> local_3c;
  GPiece<40> auStack_38;
  
  if (*(int *)(param_4 + 0x18) == 0) {
    FUN_00583198(param_4 + 0x44);
    FUN_00582b0c(param_1,auStack_38,local_3c,local_40,0);
    lVar2 = 0x11;
    iVar1 = 0x60;
    do {
      *(undefined4 *)(iVar1 + 4) = *(undefined4 *)(param_4 + 0x1c);
      lVar2 = lVar2 + -1;
      iVar1 = iVar1 + 8;
    } while (lVar2 != 0);
  }
  (*(code *)**(undefined4 **)(PTR_PTR_0071be84 + 0x38))(param_1,param_4,param_4,param_4 + 0x18,1,0);
  return 0xc4;
}


// 0x05969a4 (0x238 bytes)
/* WARNING: Removing unreachable block (ram,0x00596a54) */

undefined8 FUN_005969a4(undefined4 param_1,undefined8 param_2,undefined8 param_3,int param_4)

{
  undefined4 *puVar1;
  undefined *puVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  longlong lVar6;
  GPiece<4> local_70;
  GPiece<4> local_6c;
  int local_68;
  GPiece<60> auStack_64;
  
  if (*(int *)(param_4 + 0x18) == 0) {
    iVar5 = param_4 + 100;
    iVar3 = FUN_0053ecc4(iVar5);
    if (iVar3 == 0) {
      FUN_00583198(iVar5);
    }
    else {
      *(undefined4 *)(param_4 + 0x18) = 0xfffffc25;
      FUN_00583198(iVar5);
    }
  }
  FUN_00582b0c(param_1,auStack_64,local_6c,local_70,0);
  lVar6 = 0x11;
  iVar5 = 0x60;
  do {
    *(undefined4 *)(iVar5 + 4) = *(undefined4 *)(param_4 + 0x3c);
    puVar2 = PTR_PTR_0071be84;
    lVar6 = lVar6 + -1;
    iVar5 = iVar5 + 8;
  } while (lVar6 != 0);
  if (*(int *)(param_4 + 0x38) == 5) {
    (*(code *)**(undefined4 **)(PTR_PTR_0071be84 + 0x38))
              (param_1,param_4,param_4,param_4 + 0x18,0,0);
    if (iRam00000118 != 0) {
      puVar1 = *(undefined4 **)(puVar2 + 0x10);
      uVar4 = (*(code *)**(undefined4 **)(puVar2 + 0x3c))(param_4 + 0x20);
      iVar5 = (*(code *)*puVar1)(0xf0,uVar4,param_1,&local_68);
      if (iVar5 == 0) {
        *(int *)(local_68 + 0x34) = iRam00000118;
        memcpy((void *)0x120,(void *)(param_4 + 0x20),0xc4);
      }
    }
  }
  else {
    (*(code *)**(undefined4 **)(PTR_PTR_0071be84 + 0x38))
              (param_1,param_4,param_4,param_4 + 0x18,1,0);
  }
  return 0xe4;
}


// 0x0596bdc (0x22c bytes)
/* WARNING: Removing unreachable block (ram,0x00596c88) */

undefined8 FUN_00596bdc(undefined4 param_1,undefined8 param_2,undefined8 param_3,void *param_4)

{
  undefined4 *puVar1;
  undefined *puVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  longlong lVar6;
  GPiece<4> local_60;
  GPiece<4> local_5c;
  int local_58;
  GPiece<52> auStack_54;
  
  if (*(int *)((int)param_4 + 0x18) == 0) {
    iVar5 = (int)param_4 + 0x44;
    iVar3 = FUN_0053ecc4(iVar5);
    if (iVar3 == 0) {
      FUN_00583198(iVar5);
    }
    else {
      *(undefined4 *)((int)param_4 + 0x18) = 0xfffffc25;
      FUN_00583198(iVar5);
    }
  }
  FUN_00582b0c(param_1,auStack_54,local_5c,local_60,0);
  lVar6 = 0x11;
  iVar5 = 0x60;
  do {
    *(undefined4 *)(iVar5 + 4) = *(undefined4 *)((int)param_4 + 0x1c);
    puVar2 = PTR_PTR_0071be84;
    lVar6 = lVar6 + -1;
    iVar5 = iVar5 + 8;
  } while (lVar6 != 0);
  if (*(int *)((int)param_4 + 0x18) == 5) {
    (*(code *)**(undefined4 **)(PTR_PTR_0071be84 + 0x38))
              (param_1,param_4,param_4,(int)param_4 + 0x18,0,0);
    if (iRam00000118 != 0) {
      puVar1 = *(undefined4 **)(puVar2 + 0x10);
      uVar4 = (*(code *)**(undefined4 **)(puVar2 + 0x3c))(param_4);
      iVar5 = (*(code *)*puVar1)(0xf0,uVar4,param_1,&local_58);
      if (iVar5 == 0) {
        *(int *)(local_58 + 0x34) = iRam00000118;
        memcpy((void *)0x120,param_4,0xc4);
      }
    }
  }
  else {
    (*(code *)**(undefined4 **)(PTR_PTR_0071be84 + 0x38))
              (param_1,param_4,param_4,(int)param_4 + 0x18,1,0);
  }
  return 0xc4;
}


// 0x0596e08 (0x2c bytes)
void FUN_00596e08(undefined8 param_1,undefined4 *param_2)

{
  FUN_00553b40(param_1,*param_2,0x15);
  return;
}


// 0x0596e34 (0x5c bytes)
void FUN_00596e34(undefined8 param_1,int *param_2)

{
  int iVar1;
  
  iVar1 = *param_2;
  FUN_00553b40(param_1,iVar1,0x38);
  FUN_00553b40(param_1,iVar1 + 0x38,0x100);
  return;
}


// 0x0596e90 (0x5c bytes)
void FUN_00596e90(undefined8 param_1,int *param_2)

{
  int iVar1;
  
  iVar1 = *param_2;
  FUN_00553b40(param_1,iVar1,0x15);
  FUN_00553b40(param_1,iVar1 + 0x15,200);
  return;
}


// 0x0596eec (0x5c bytes)
void FUN_00596eec(undefined8 param_1,int *param_2)

{
  int iVar1;
  
  iVar1 = *param_2;
  FUN_00553b40(param_1,iVar1,0x15);
  FUN_00553b40(param_1,iVar1 + 0x15,0x80);
  return;
}


// 0x0596f48 (0x5c bytes)
void FUN_00596f48(undefined8 param_1,int *param_2)

{
  int iVar1;
  
  iVar1 = *param_2;
  FUN_00553b40(param_1,iVar1,0x15);
  FUN_00553b40(param_1,iVar1 + 0x15,0x38);
  return;
}


// 0x0596fa4 (0x5c bytes)
void FUN_00596fa4(undefined8 param_1,int *param_2)

{
  int iVar1;
  
  iVar1 = *param_2;
  FUN_00553b40(param_1,iVar1,0x15);
  FUN_00553b40(param_1,iVar1 + 0x15,0x11);
  return;
}


// 0x0597000 (0x5c bytes)
void FUN_00597000(undefined8 param_1,int *param_2)

{
  int iVar1;
  
  iVar1 = *param_2;
  FUN_00553b40(param_1,iVar1,0x15);
  FUN_00553b40(param_1,iVar1 + 0x15,0x11);
  return;
}


// 0x059705c (0x74 bytes)
void FUN_0059705c(undefined8 param_1,int *param_2)

{
  int iVar1;
  
  iVar1 = *param_2;
  FUN_00553b40(param_1,iVar1,0x15);
  FUN_00553b40(param_1,iVar1 + 0x15,0x11);
  FUN_00553b40(param_1,iVar1 + 0x26,0x4b0);
  return;
}


// 0x05970d0 (0x5c bytes)
void FUN_005970d0(undefined8 param_1,int *param_2)

{
  int iVar1;
  
  iVar1 = *param_2;
  FUN_00553b40(param_1,iVar1,0x15);
  FUN_00553b40(param_1,iVar1 + 0x15,0x11);
  return;
}


// 0x059712c (0x74 bytes)
void FUN_0059712c(undefined8 param_1,int *param_2)

{
  int iVar1;
  
  iVar1 = *param_2;
  FUN_00553b40(param_1,iVar1,0x15);
  FUN_00553b40(param_1,iVar1 + 0x15,0x20);
  FUN_00553b40(param_1,iVar1 + 0x35,0x800);
  return;
}


// 0x05971a0 (0x2c bytes)
void FUN_005971a0(undefined8 param_1,undefined4 *param_2)

{
  FUN_00553b40(param_1,*param_2,0x15);
  return;
}


// 0x05971cc (0x5c bytes)
void FUN_005971cc(undefined8 param_1,int *param_2)

{
  int iVar1;
  
  iVar1 = *param_2;
  FUN_00553b40(param_1,iVar1,0x15);
  FUN_00553b40(param_1,iVar1 + 0x15,0x11);
  return;
}


// 0x0597228 (0x5c bytes)
void FUN_00597228(undefined8 param_1,int *param_2)

{
  int iVar1;
  
  iVar1 = *param_2;
  FUN_00553b40(param_1,iVar1,0x15);
  FUN_00553b40(param_1,iVar1 + 0x15,0x11);
  return;
}


// 0x0597284 (0x5c bytes)
void FUN_00597284(undefined8 param_1,int *param_2)

{
  int iVar1;
  
  iVar1 = *param_2;
  FUN_00553b40(param_1,iVar1,0x15);
  FUN_00553b40(param_1,iVar1 + 0x15,0x11);
  return;
}


// 0x05972e0 (0x5c bytes)
void FUN_005972e0(undefined8 param_1,int *param_2)

{
  int iVar1;
  
  iVar1 = *param_2;
  FUN_00553b40(param_1,iVar1,0x15);
  FUN_00553b40(param_1,iVar1 + 0x15,0x11);
  return;
}


// 0x059733c (0x5c bytes)
void FUN_0059733c(undefined8 param_1,int *param_2)

{
  int iVar1;
  
  iVar1 = *param_2;
  FUN_00553b40(param_1,iVar1,0x15);
  FUN_00553b40(param_1,iVar1 + 0x15,0x11);
  return;
}


// 0x0597398 (0x2c bytes)
void FUN_00597398(undefined8 param_1,undefined4 *param_2)

{
  FUN_00553b40(param_1,*param_2,0x15);
  return;
}


// 0x05973c4 (0x2c bytes)
void FUN_005973c4(undefined8 param_1,undefined4 *param_2)

{
  FUN_00553b40(param_1,*param_2,0x15);
  return;
}


// 0x05973f0 (0x2c bytes)
void FUN_005973f0(undefined8 param_1,undefined4 *param_2)

{
  FUN_00553b40(param_1,*param_2,0x15);
  return;
}


// 0x059741c (0x2c bytes)
void FUN_0059741c(undefined8 param_1,undefined4 *param_2)

{
  FUN_00553b40(param_1,*param_2,0x10);
  return;
}


// 0x0597448 (0x78 bytes)
void FUN_00597448(undefined8 param_1,int *param_2)

{
  int iVar1;
  GPiece<16> local_30;
  
  iVar1 = *param_2;
  FUN_00553b40(param_1,iVar1,0x15);
  FUN_00553b40(param_1,iVar1 + 0x15,0x11);
  FUN_0059741c(param_1,local_30);
  return;
}


// 0x05974c0 (0x8c bytes)
void FUN_005974c0(undefined8 param_1,int *param_2)

{
  int iVar1;
  
  iVar1 = *param_2;
  FUN_00553b40(param_1,iVar1,0x15);
  FUN_00553b40(param_1,iVar1 + 0x15,0x11);
  FUN_00553b40(param_1,iVar1 + 0x26,0x20);
  FUN_00553b40(param_1,iVar1 + 0x46,0x100);
  return;
}


// 0x059754c (0x2c bytes)
void FUN_0059754c(undefined8 param_1,undefined4 *param_2)

{
  FUN_00553b40(param_1,*param_2,0x15);
  return;
}


// 0x0597578 (0x74 bytes)
void FUN_00597578(undefined8 param_1,int *param_2)

{
  int iVar1;
  
  iVar1 = *param_2;
  FUN_00553b40(param_1,iVar1,0x15);
  FUN_00553b40(param_1,iVar1 + 0x15,0x11);
  FUN_00553b40(param_1,iVar1 + 0x26,0x100);
  return;
}


// 0x05975ec (0x8c bytes)
void FUN_005975ec(undefined8 param_1,int *param_2)

{
  int iVar1;
  
  iVar1 = *param_2;
  FUN_00553b40(param_1,iVar1,0x15);
  FUN_00553b40(param_1,iVar1 + 0x15,0x11);
  FUN_00553b40(param_1,iVar1 + 0x26,0x20);
  FUN_00553b40(param_1,iVar1 + 0x46,0x20);
  return;
}


// 0x0597678 (0x5c bytes)
void FUN_00597678(undefined8 param_1,int *param_2)

{
  int iVar1;
  
  iVar1 = *param_2;
  FUN_00553b40(param_1,iVar1,0x15);
  FUN_00553b40(param_1,iVar1 + 0x15,0x11);
  return;
}


// 0x05976d4 (0x74 bytes)
void FUN_005976d4(undefined8 param_1,int *param_2)

{
  int iVar1;
  
  iVar1 = *param_2;
  FUN_00553b40(param_1,iVar1,0x15);
  FUN_00553b40(param_1,iVar1 + 0x15,0x11);
  FUN_00553b40(param_1,iVar1 + 0x26,0x20);
  return;
}


// 0x0597748 (0x5c bytes)
void FUN_00597748(undefined8 param_1,int *param_2)

{
  int iVar1;
  
  iVar1 = *param_2;
  FUN_00553b40(param_1,iVar1,0x15);
  FUN_00553b40(param_1,iVar1 + 0x15,0x11);
  return;
}


// 0x05977a4 (0x74 bytes)
void FUN_005977a4(undefined8 param_1,int *param_2)

{
  int iVar1;
  
  iVar1 = *param_2;
  FUN_00553b40(param_1,iVar1,0x15);
  FUN_00553b40(param_1,iVar1 + 0x15,0x11);
  FUN_00553b40(param_1,iVar1 + 0x26,0x20);
  return;
}


// 0x0597818 (0x74 bytes)
void FUN_00597818(undefined8 param_1,int *param_2)

{
  int iVar1;
  
  iVar1 = *param_2;
  FUN_00553b40(param_1,iVar1,0x15);
  FUN_00553b40(param_1,iVar1 + 0x15,0x11);
  FUN_00553b40(param_1,iVar1 + 0x26,0x20);
  return;
}


// 0x059788c (0xd4 bytes)
void FUN_0059788c(undefined8 param_1,int *param_2)

{
  int iVar1;
  
  iVar1 = *param_2;
  FUN_00553b40(param_1,iVar1,0x80);
  FUN_00553f04(param_1,iVar1 + 0x80);
  FUN_00553f04(param_1,iVar1 + 0x84);
  FUN_00553f04(param_1,iVar1 + 0x88);
  FUN_00553f04(param_1,iVar1 + 0x8c);
  FUN_00553f04(param_1,iVar1 + 0x90);
  FUN_00553f04(param_1,iVar1 + 0x94);
  FUN_00553b40(param_1,iVar1 + 0x98,0x15);
  return;
}


// 0x0597960 (0xa8 bytes)
void FUN_00597960(undefined8 param_1,int *param_2)

{
  int iVar1;
  
  iVar1 = *param_2;
  FUN_00553b40(param_1,iVar1,0x100);
  FUN_00553f04(param_1,iVar1 + 0x100);
  FUN_00553f04(param_1,iVar1 + 0x104);
  FUN_00553f04(param_1,iVar1 + 0x108);
  FUN_00553f04(param_1,iVar1 + 0x10c);
  FUN_00553f04(param_1,iVar1 + 0x110);
  return;
}


// 0x0597a08 (0x7c bytes)
void FUN_00597a08(undefined8 param_1,int *param_2)

{
  int iVar1;
  
  iVar1 = *param_2;
  FUN_00553f04(param_1,iVar1);
  FUN_00553f04(param_1,iVar1 + 4);
  FUN_00553f04(param_1,iVar1 + 8);
  FUN_00553f04(param_1,iVar1 + 0xc);
  return;
}


// 0x0597a84 (0x68 bytes)
void FUN_00597a84(undefined8 param_1,int *param_2)

{
  int iVar1;
  
  iVar1 = *param_2;
  FUN_00553b40(param_1,iVar1,0x15);
  FUN_00553c74(param_1,3);
  FUN_00553f04(param_1,iVar1 + 0x18);
  return;
}


// 0x0597aec (0x90 bytes)
void FUN_00597aec(undefined8 param_1,int *param_2)

{
  int iVar1;
  
  iVar1 = *param_2;
  FUN_00553b40(param_1,iVar1,0x15);
  FUN_00553c74(param_1,3);
  FUN_00553f04(param_1,iVar1 + 0x18);
  FUN_00553f04(param_1,iVar1 + 0x1c);
  FUN_00553f04(param_1,iVar1 + 0x20);
  return;
}


// 0x0597b7c (0x19c bytes)
void FUN_00597b7c(undefined8 param_1,int *param_2)

{
  int iVar1;
  
  iVar1 = *param_2;
  FUN_00553f04(param_1,iVar1);
  FUN_00553f04(param_1,iVar1 + 4);
  FUN_00553b40(param_1,iVar1 + 8,0x40);
  FUN_00553b40(param_1,iVar1 + 0x48,0x100);
  FUN_00553f04(param_1,iVar1 + 0x148);
  FUN_00553f04(param_1,iVar1 + 0x14c);
  FUN_00553f04(param_1,iVar1 + 0x150);
  FUN_00553f04(param_1,iVar1 + 0x154);
  FUN_00553f04(param_1,iVar1 + 0x158);
  FUN_00553f04(param_1,iVar1 + 0x15c);
  FUN_00553f04(param_1,iVar1 + 0x160);
  FUN_00553f04(param_1,iVar1 + 0x164);
  FUN_00553f04(param_1,iVar1 + 0x168);
  FUN_00553f04(param_1,iVar1 + 0x16c);
  FUN_00553f04(param_1,iVar1 + 0x170);
  FUN_00553f04(param_1,iVar1 + 0x174);
  FUN_00553f04(param_1,iVar1 + 0x178);
  FUN_00553f04(param_1,iVar1 + 0x17c);
  return;
}


// 0x0597d18 (0x7c bytes)
void FUN_00597d18(undefined8 param_1,int *param_2)

{
  int iVar1;
  
  iVar1 = *param_2;
  FUN_00553b40(param_1,iVar1,0x11);
  FUN_00553c74(param_1,3);
  FUN_00553f04(param_1,iVar1 + 0x14);
  FUN_00553f04(param_1,iVar1 + 0x18);
  return;
}


// 0x0597d94 (0x68 bytes)
void FUN_00597d94(undefined8 param_1,int *param_2)

{
  int iVar1;
  
  iVar1 = *param_2;
  FUN_00553b40(param_1,iVar1,0x15);
  FUN_00553c74(param_1,3);
  FUN_00553f04(param_1,iVar1 + 0x18);
  return;
}


// 0x0597dfc (0x98 bytes)
void FUN_00597dfc(undefined8 param_1,int *param_2)

{
  int iVar1;
  
  iVar1 = *param_2;
  FUN_00553b40(param_1,iVar1,0x15);
  FUN_00553b40(param_1,iVar1 + 0x15,0x11);
  FUN_00553c74(param_1,2);
  FUN_00553f04(param_1,iVar1 + 0x28);
  FUN_00553b40(param_1,iVar1 + 0x2c,0x100);
  return;
}


// 0x0597e94 (0x68 bytes)
void FUN_00597e94(undefined8 param_1,int *param_2)

{
  int iVar1;
  
  iVar1 = *param_2;
  FUN_00553b40(param_1,iVar1,0x15);
  FUN_00553c74(param_1,3);
  FUN_00553f04(param_1,iVar1 + 0x18);
  return;
}


// 0x0597efc (0x98 bytes)
void FUN_00597efc(undefined8 param_1,int *param_2)

{
  int iVar1;
  
  iVar1 = *param_2;
  FUN_00553b40(param_1,iVar1,0x15);
  FUN_00553b40(param_1,iVar1 + 0x15,0x11);
  FUN_00553c74(param_1,2);
  FUN_00553f04(param_1,iVar1 + 0x28);
  FUN_00553b40(param_1,iVar1 + 0x2c,0x20);
  return;
}


// 0x0597f94 (0x94 bytes)
void FUN_00597f94(undefined8 param_1,int *param_2)

{
  int iVar1;
  
  iVar1 = *param_2;
  FUN_00553b40(param_1,iVar1,0x15);
  FUN_00553b40(param_1,iVar1 + 0x15,0x11);
  FUN_00553c74(param_1,2);
  FUN_00553f04(param_1,iVar1 + 0x28);
  FUN_00553f04(param_1,iVar1 + 0x2c);
  return;
}


// 0x0598028 (0xbc bytes)
void FUN_00598028(undefined8 param_1,int *param_2)

{
  int iVar1;
  
  iVar1 = *param_2;
  FUN_00553b40(param_1,iVar1,0x15);
  FUN_00553b40(param_1,iVar1 + 0x15,0x11);
  FUN_00553c74(param_1,2);
  FUN_00553f04(param_1,iVar1 + 0x28);
  FUN_00553f04(param_1,iVar1 + 0x2c);
  FUN_00553f04(param_1,iVar1 + 0x30);
  FUN_00553f04(param_1,iVar1 + 0x34);
  return;
}


// 0x05980e4 (0x68 bytes)
void FUN_005980e4(undefined8 param_1,int *param_2)

{
  int iVar1;
  
  iVar1 = *param_2;
  FUN_00553b40(param_1,iVar1,0x15);
  FUN_00553c74(param_1,3);
  FUN_00553f04(param_1,iVar1 + 0x18);
  return;
}


// 0x059814c (0xa4 bytes)
void FUN_0059814c(undefined8 param_1,int *param_2)

{
  int iVar1;
  
  iVar1 = *param_2;
  FUN_00553b40(param_1,iVar1,0x15);
  FUN_00553c74(param_1,3);
  FUN_00553f04(param_1,iVar1 + 0x18);
  FUN_00553f04(param_1,iVar1 + 0x1c);
  FUN_00553f04(param_1,iVar1 + 0x20);
  FUN_00553f04(param_1,iVar1 + 0x24);
  return;
}


// 0x05981f0 (0xa8 bytes)
void FUN_005981f0(undefined8 param_1,int *param_2)

{
  int iVar1;
  
  iVar1 = *param_2;
  FUN_00553b40(param_1,iVar1,0x15);
  FUN_00553b40(param_1,iVar1 + 0x15,0x11);
  FUN_00553c74(param_1,3);
  FUN_00553f04(param_1,iVar1 + 0x28);
  FUN_00553f04(param_1,iVar1 + 0x2c);
  FUN_00553f04(param_1,iVar1 + 0x30);
  return;
}


// 0x0598298 (0x68 bytes)
void FUN_00598298(undefined8 param_1,int *param_2)

{
  int iVar1;
  
  iVar1 = *param_2;
  FUN_00553b40(param_1,iVar1,0x15);
  FUN_00553c74(param_1,3);
  FUN_00553f04(param_1,iVar1 + 0x18);
  return;
}


// 0x0598300 (0x90 bytes)
void FUN_00598300(undefined8 param_1,int *param_2)

{
  int iVar1;
  
  iVar1 = *param_2;
  FUN_00553b40(param_1,iVar1,0x15);
  FUN_00553c74(param_1,3);
  FUN_00553f04(param_1,iVar1 + 0x18);
  FUN_00553b40(param_1,iVar1 + 0x1c,0x11);
  FUN_00553c74(param_1,3);
  return;
}


// 0x0598390 (0x68 bytes)
void FUN_00598390(undefined8 param_1,int *param_2)

{
  int iVar1;
  
  iVar1 = *param_2;
  FUN_00553b40(param_1,iVar1,0x15);
  FUN_00553c74(param_1,3);
  FUN_00553f04(param_1,iVar1 + 0x18);
  return;
}


// 0x05983f8 (0x98 bytes)
void FUN_005983f8(undefined8 param_1,int *param_2)

{
  int iVar1;
  GPiece<16> local_30;
  
  iVar1 = *param_2;
  FUN_00598390(param_1,local_30);
  FUN_00553f04(param_1,iVar1 + 0x1c);
  FUN_00553f04(param_1,iVar1 + 0x20);
  FUN_00553f04(param_1,iVar1 + 0x24);
  FUN_00553f04(param_1,iVar1 + 0x28);
  return;
}


// 0x0598490 (0x68 bytes)
void FUN_00598490(undefined8 param_1,int *param_2)

{
  int iVar1;
  
  iVar1 = *param_2;
  FUN_00553b40(param_1,iVar1,0x15);
  FUN_00553c74(param_1,3);
  FUN_00553f04(param_1,iVar1 + 0x18);
  return;
}


// 0x05984f8 (0x68 bytes)
void FUN_005984f8(undefined8 param_1,int *param_2)

{
  int iVar1;
  
  iVar1 = *param_2;
  FUN_00553b40(param_1,iVar1,0x15);
  FUN_00553c74(param_1,3);
  FUN_00553f04(param_1,iVar1 + 0x18);
  return;
}


// 0x0598560 (0x68 bytes)
void FUN_00598560(undefined8 param_1,int *param_2)

{
  int iVar1;
  
  iVar1 = *param_2;
  FUN_00553b40(param_1,iVar1,0x15);
  FUN_00553c74(param_1,3);
  FUN_00553f04(param_1,iVar1 + 0x18);
  return;
}


// 0x05985c8 (0x80 bytes)
void FUN_005985c8(undefined8 param_1,int *param_2)

{
  int iVar1;
  
  iVar1 = *param_2;
  FUN_00553b40(param_1,iVar1,0x15);
  FUN_00553b40(param_1,iVar1 + 0x15,0x11);
  FUN_00553c74(param_1,2);
  FUN_00553f04(param_1,iVar1 + 0x28);
  return;
}


// 0x0598648 (0x68 bytes)
void FUN_00598648(undefined8 param_1,int *param_2)

{
  int iVar1;
  
  iVar1 = *param_2;
  FUN_00553b40(param_1,iVar1,0x15);
  FUN_00553c74(param_1,3);
  FUN_00553f04(param_1,iVar1 + 0x18);
  return;
}


// 0x05986b0 (0x80 bytes)
void FUN_005986b0(undefined8 param_1,int *param_2)

{
  int iVar1;
  
  iVar1 = *param_2;
  FUN_00553b40(param_1,iVar1,0x15);
  FUN_00553b40(param_1,iVar1 + 0x15,0x11);
  FUN_00553c74(param_1,2);
  FUN_00553f04(param_1,iVar1 + 0x28);
  return;
}


// 0x0598730 (0x68 bytes)
void FUN_00598730(undefined8 param_1,int *param_2)

{
  int iVar1;
  
  iVar1 = *param_2;
  FUN_00553b40(param_1,iVar1,0x15);
  FUN_00553c74(param_1,3);
  FUN_00553f04(param_1,iVar1 + 0x18);
  return;
}


// 0x0598798 (0xac bytes)
void FUN_00598798(undefined8 param_1,int *param_2)

{
  int iVar1;
  
  iVar1 = *param_2;
  FUN_00553b40(param_1,iVar1,0x15);
  FUN_00553b40(param_1,iVar1 + 0x15,0x11);
  FUN_00553c74(param_1,2);
  FUN_00553f04(param_1,iVar1 + 0x28);
  FUN_00553f04(param_1,iVar1 + 0x2c);
  FUN_00553b40(param_1,iVar1 + 0x30,0x4b0);
  return;
}


// 0x0598844 (0x68 bytes)
void FUN_00598844(undefined8 param_1,int *param_2)

{
  int iVar1;
  
  iVar1 = *param_2;
  FUN_00553b40(param_1,iVar1,0x15);
  FUN_00553c74(param_1,3);
  FUN_00553f04(param_1,iVar1 + 0x18);
  return;
}


// 0x05988ac (0xac bytes)
void FUN_005988ac(undefined8 param_1,int *param_2)

{
  int iVar1;
  
  iVar1 = *param_2;
  FUN_00553b40(param_1,iVar1,0x15);
  FUN_00553b40(param_1,iVar1 + 0x15,0x11);
  FUN_00553c74(param_1,2);
  FUN_00553f04(param_1,iVar1 + 0x28);
  FUN_00553f04(param_1,iVar1 + 0x2c);
  FUN_00553b40(param_1,iVar1 + 0x30,0x800);
  return;
}


// 0x0598958 (0x68 bytes)
void FUN_00598958(undefined8 param_1,int *param_2)

{
  int iVar1;
  
  iVar1 = *param_2;
  FUN_00553b40(param_1,iVar1,0x15);
  FUN_00553c74(param_1,3);
  FUN_00553f04(param_1,iVar1 + 0x18);
  return;
}


// 0x05989c0 (0x98 bytes)
void FUN_005989c0(undefined8 param_1,int *param_2)

{
  int iVar1;
  
  iVar1 = *param_2;
  FUN_00553b40(param_1,iVar1,0x15);
  FUN_00553b40(param_1,iVar1 + 0x15,0x11);
  FUN_00553c74(param_1,2);
  FUN_00553f04(param_1,iVar1 + 0x28);
  FUN_00553b40(param_1,iVar1 + 0x2c,0x4b0);
  return;
}


// 0x0598a58 (0x68 bytes)
void FUN_00598a58(undefined8 param_1,int *param_2)

{
  int iVar1;
  
  iVar1 = *param_2;
  FUN_00553b40(param_1,iVar1,0x15);
  FUN_00553c74(param_1,3);
  FUN_00553f04(param_1,iVar1 + 0x18);
  return;
}


// 0x0598ac0 (0x94 bytes)
void FUN_00598ac0(undefined8 param_1,int *param_2)

{
  int iVar1;
  
  iVar1 = *param_2;
  FUN_00553b40(param_1,iVar1,0x15);
  FUN_00553b40(param_1,iVar1 + 0x15,0x11);
  FUN_00553c74(param_1,2);
  FUN_00553f04(param_1,iVar1 + 0x28);
  FUN_00553f04(param_1,iVar1 + 0x2c);
  return;
}


// 0x0598b54 (0x68 bytes)
void FUN_00598b54(undefined8 param_1,int *param_2)

{
  int iVar1;
  
  iVar1 = *param_2;
  FUN_00553b40(param_1,iVar1,0x15);
  FUN_00553c74(param_1,3);
  FUN_00553f04(param_1,iVar1 + 0x18);
  return;
}


// 0x0598bbc (0x80 bytes)
void FUN_00598bbc(undefined8 param_1,int *param_2)

{
  int iVar1;
  
  iVar1 = *param_2;
  FUN_00553b40(param_1,iVar1,0x15);
  FUN_00553b40(param_1,iVar1 + 0x15,0x11);
  FUN_00553c74(param_1,2);
  FUN_00553f04(param_1,iVar1 + 0x28);
  return;
}


// 0x0598c3c (0x68 bytes)
void FUN_00598c3c(undefined8 param_1,int *param_2)

{
  int iVar1;
  
  iVar1 = *param_2;
  FUN_00553b40(param_1,iVar1,0x15);
  FUN_00553c74(param_1,3);
  FUN_00553f04(param_1,iVar1 + 0x18);
  return;
}


// 0x0598ca4 (0x80 bytes)
void FUN_00598ca4(undefined8 param_1,int *param_2)

{
  int iVar1;
  
  iVar1 = *param_2;
  FUN_00553b40(param_1,iVar1,0x15);
  FUN_00553b40(param_1,iVar1 + 0x15,0x11);
  FUN_00553c74(param_1,2);
  FUN_00553f04(param_1,iVar1 + 0x28);
  return;
}


// 0x0598d24 (0x54 bytes)
void FUN_00598d24(undefined8 param_1,int *param_2)

{
  int iVar1;
  
  iVar1 = *param_2;
  FUN_00553f04(param_1,iVar1);
  FUN_00553f04(param_1,iVar1 + 4);
  return;
}


// 0x0598d78 (0x7c bytes)
void FUN_00598d78(undefined8 param_1,int *param_2)

{
  int iVar1;
  
  iVar1 = *param_2;
  FUN_00553b40(param_1,iVar1,0x11);
  FUN_00553c74(param_1,3);
  FUN_00553f04(param_1,iVar1 + 0x14);
  FUN_00553f04(param_1,iVar1 + 0x18);
  return;
}


// 0x0598df4 (0xd4 bytes)
void FUN_00598df4(undefined8 param_1,int *param_2)

{
  int iVar1;
  
  iVar1 = *param_2;
  FUN_00553b40(param_1,iVar1,0x15);
  FUN_00553c74(param_1,3);
  FUN_00553f04(param_1,iVar1 + 0x18);
  FUN_00553b40(param_1,iVar1 + 0x1c,0x20);
  FUN_00553f04(param_1,iVar1 + 0x3c);
  FUN_00553f04(param_1,iVar1 + 0x40);
  FUN_00553f04(param_1,iVar1 + 0x44);
  FUN_00553b40(param_1,iVar1 + 0x48,0x100);
  return;
}


// 0x0598ec8 (0x80 bytes)
void FUN_00598ec8(undefined8 param_1,int *param_2)

{
  int iVar1;
  
  iVar1 = *param_2;
  FUN_00553b40(param_1,iVar1,0x15);
  FUN_00553b40(param_1,iVar1 + 0x15,0x11);
  FUN_00553c74(param_1,2);
  FUN_00553f04(param_1,iVar1 + 0x28);
  return;
}


// 0x0598f48 (0x68 bytes)
void FUN_00598f48(undefined8 param_1,int *param_2)

{
  int iVar1;
  
  iVar1 = *param_2;
  FUN_00553b40(param_1,iVar1,0x15);
  FUN_00553c74(param_1,3);
  FUN_00553f04(param_1,iVar1 + 0x18);
  return;
}


// 0x0598fb0 (0x98 bytes)
void FUN_00598fb0(undefined8 param_1,int *param_2)

{
  int iVar1;
  
  iVar1 = *param_2;
  FUN_00553b40(param_1,iVar1,0x15);
  FUN_00553b40(param_1,iVar1 + 0x15,0x11);
  FUN_00553c74(param_1,2);
  FUN_00553f04(param_1,iVar1 + 0x28);
  FUN_00553b40(param_1,iVar1 + 0x2c,0x4b0);
  return;
}


// 0x0599048 (0x80 bytes)
void FUN_00599048(undefined8 param_1,int *param_2)

{
  int iVar1;
  
  iVar1 = *param_2;
  FUN_00553b40(param_1,iVar1,0x15);
  FUN_00553b40(param_1,iVar1 + 0x15,0x11);
  FUN_00553c74(param_1,2);
  FUN_00553f04(param_1,iVar1 + 0x28);
  return;
}


// 0x05990c8 (0x98 bytes)
void FUN_005990c8(undefined8 param_1,int *param_2)

{
  int iVar1;
  
  iVar1 = *param_2;
  FUN_00553b40(param_1,iVar1,0x15);
  FUN_00553b40(param_1,iVar1 + 0x15,0x11);
  FUN_00553c74(param_1,2);
  FUN_00553f04(param_1,iVar1 + 0x28);
  FUN_00553b40(param_1,iVar1 + 0x2c,0x20);
  return;
}


// 0x0599160 (0x98 bytes)
void FUN_00599160(undefined8 param_1,int *param_2)

{
  int iVar1;
  
  iVar1 = *param_2;
  FUN_00553b40(param_1,iVar1,0x15);
  FUN_00553b40(param_1,iVar1 + 0x15,0x11);
  FUN_00553b40(param_1,iVar1 + 0x26,0x11);
  FUN_00553c74(param_1,1);
  FUN_00553f04(param_1,iVar1 + 0x38);
  return;
}


// 0x05991f8 (0x68 bytes)
void FUN_005991f8(undefined8 param_1,int *param_2)

{
  int iVar1;
  
  iVar1 = *param_2;
  FUN_00553b40(param_1,iVar1,0x15);
  FUN_00553c74(param_1,3);
  FUN_00553f04(param_1,iVar1 + 0x18);
  return;
}


// 0x0599260 (0x98 bytes)
void FUN_00599260(undefined8 param_1,int *param_2)

{
  int iVar1;
  
  iVar1 = *param_2;
  FUN_00553b40(param_1,iVar1,0x15);
  FUN_00553b40(param_1,iVar1 + 0x15,0x11);
  FUN_00553c74(param_1,2);
  FUN_00553f04(param_1,iVar1 + 0x28);
  FUN_00553b40(param_1,iVar1 + 0x2c,0x800);
  return;
}


// 0x05992f8 (0xa4 bytes)
void FUN_005992f8(undefined8 param_1,int *param_2)

{
  int iVar1;
  
  iVar1 = *param_2;
  FUN_00553b40(param_1,iVar1,0x15);
  FUN_00553c74(param_1,3);
  FUN_00553f04(param_1,iVar1 + 0x18);
  FUN_00553f04(param_1,iVar1 + 0x1c);
  FUN_00553f04(param_1,iVar1 + 0x20);
  FUN_00553f04(param_1,iVar1 + 0x24);
  return;
}


// 0x059939c (0x94 bytes)
void FUN_0059939c(undefined8 param_1,int *param_2)

{
  int iVar1;
  
  iVar1 = *param_2;
  FUN_00553b40(param_1,iVar1,0x15);
  FUN_00553b40(param_1,iVar1 + 0x15,0x11);
  FUN_00553c74(param_1,2);
  FUN_00553f04(param_1,iVar1 + 0x28);
  FUN_00553f04(param_1,iVar1 + 0x2c);
  return;
}


// 0x0599430 (0x80 bytes)
void FUN_00599430(undefined8 param_1,int *param_2)

{
  int iVar1;
  
  iVar1 = *param_2;
  FUN_00553b40(param_1,iVar1,0x15);
  FUN_00553b40(param_1,iVar1 + 0x15,0x11);
  FUN_00553c74(param_1,2);
  FUN_00553f04(param_1,iVar1 + 0x28);
  return;
}


// 0x05994b0 (0x80 bytes)
void FUN_005994b0(undefined8 param_1,int *param_2)

{
  int iVar1;
  
  iVar1 = *param_2;
  FUN_00553b40(param_1,iVar1,0x15);
  FUN_00553b40(param_1,iVar1 + 0x15,0x11);
  FUN_00553c74(param_1,2);
  FUN_00553f04(param_1,iVar1 + 0x28);
  return;
}


// 0x0599530 (0x80 bytes)
void FUN_00599530(undefined8 param_1,int *param_2)

{
  int iVar1;
  
  iVar1 = *param_2;
  FUN_00553b40(param_1,iVar1,0x15);
  FUN_00553b40(param_1,iVar1 + 0x15,0x11);
  FUN_00553c74(param_1,2);
  FUN_00553f04(param_1,iVar1 + 0x28);
  return;
}


// 0x05995b0 (0x90 bytes)
void FUN_005995b0(undefined8 param_1,int *param_2)

{
  int iVar1;
  
  iVar1 = *param_2;
  FUN_00553b40(param_1,iVar1,0x15);
  FUN_00553c74(param_1,3);
  FUN_00553f04(param_1,iVar1 + 0x18);
  FUN_00553f04(param_1,iVar1 + 0x1c);
  FUN_00553f04(param_1,iVar1 + 0x20);
  return;
}


// 0x0599640 (0x80 bytes)
void FUN_00599640(undefined8 param_1,int *param_2)

{
  int iVar1;
  
  iVar1 = *param_2;
  FUN_00553b40(param_1,iVar1,0x15);
  FUN_00553b40(param_1,iVar1 + 0x15,0x11);
  FUN_00553c74(param_1,2);
  FUN_00553f04(param_1,iVar1 + 0x28);
  return;
}


// 0x05996c0 (0x80 bytes)
void FUN_005996c0(undefined8 param_1,int *param_2)

{
  int iVar1;
  
  iVar1 = *param_2;
  FUN_00553b40(param_1,iVar1,0x15);
  FUN_00553b40(param_1,iVar1 + 0x15,0x14);
  FUN_00553c74(param_1,3);
  FUN_00553f04(param_1,iVar1 + 0x2c);
  return;
}


// 0x0599740 (0x94 bytes)
void FUN_00599740(undefined8 param_1,int *param_2)

{
  int iVar1;
  
  iVar1 = *param_2;
  FUN_00553b40(param_1,iVar1,0x15);
  FUN_00553b40(param_1,iVar1 + 0x15,0x11);
  FUN_00553c74(param_1,2);
  FUN_00553f04(param_1,iVar1 + 0x28);
  FUN_00553f04(param_1,iVar1 + 0x2c);
  return;
}


// 0x05997d4 (0xa8 bytes)
void FUN_005997d4(undefined8 param_1,int *param_2)

{
  int iVar1;
  
  iVar1 = *param_2;
  FUN_00553b40(param_1,iVar1,0x15);
  FUN_00553b40(param_1,iVar1 + 0x15,0x11);
  FUN_00553c74(param_1,2);
  FUN_00553f04(param_1,iVar1 + 0x28);
  FUN_00553f04(param_1,iVar1 + 0x2c);
  FUN_00553f04(param_1,iVar1 + 0x30);
  return;
}


// 0x059987c (0x80 bytes)
void FUN_0059987c(undefined8 param_1,int *param_2)

{
  int iVar1;
  
  iVar1 = *param_2;
  FUN_00553b40(param_1,iVar1,0x15);
  FUN_00553b40(param_1,iVar1 + 0x15,0x11);
  FUN_00553c74(param_1,2);
  FUN_00553f04(param_1,iVar1 + 0x28);
  return;
}


// 0x05998fc (0x68 bytes)
void FUN_005998fc(undefined8 param_1,int *param_2)

{
  int iVar1;
  
  iVar1 = *param_2;
  FUN_00553b40(param_1,iVar1,0x15);
  FUN_00553c74(param_1,3);
  FUN_00553f04(param_1,iVar1 + 0x18);
  return;
}


// 0x0599964 (0xd0 bytes)
void FUN_00599964(undefined8 param_1,int *param_2)

{
  int iVar1;
  
  iVar1 = *param_2;
  FUN_00553b40(param_1,iVar1,0x15);
  FUN_00553b40(param_1,iVar1 + 0x15,0x11);
  FUN_00553c74(param_1,2);
  FUN_00553f04(param_1,iVar1 + 0x28);
  FUN_00553f04(param_1,iVar1 + 0x2c);
  FUN_00553f04(param_1,iVar1 + 0x30);
  FUN_00553f04(param_1,iVar1 + 0x34);
  FUN_00553f04(param_1,iVar1 + 0x38);
  return;
}


// 0x0599a34 (0xbc bytes)
void FUN_00599a34(undefined8 param_1,int *param_2)

{
  int iVar1;
  
  iVar1 = *param_2;
  FUN_00553b40(param_1,iVar1,0x15);
  FUN_00553b40(param_1,iVar1 + 0x15,0x11);
  FUN_00553c74(param_1,2);
  FUN_00553f04(param_1,iVar1 + 0x28);
  FUN_00553f04(param_1,iVar1 + 0x2c);
  FUN_00553f04(param_1,iVar1 + 0x30);
  FUN_00553f04(param_1,iVar1 + 0x34);
  return;
}


// 0x0599af0 (0x80 bytes)
void FUN_00599af0(undefined8 param_1,int *param_2)

{
  int iVar1;
  
  iVar1 = *param_2;
  FUN_00553b40(param_1,iVar1,0x15);
  FUN_00553b40(param_1,iVar1 + 0x15,0x11);
  FUN_00553c74(param_1,2);
  FUN_00553f04(param_1,iVar1 + 0x28);
  return;
}


// 0x0599b70 (0x7c bytes)
void FUN_00599b70(undefined8 param_1,int *param_2)

{
  int iVar1;
  
  iVar1 = *param_2;
  FUN_00553b40(param_1,iVar1,0x15);
  FUN_00553c74(param_1,3);
  FUN_00553f04(param_1,iVar1 + 0x18);
  FUN_00553f04(param_1,iVar1 + 0x1c);
  return;
}


// 0x0599bec (0x94 bytes)
void FUN_00599bec(undefined8 param_1,int *param_2)

{
  int iVar1;
  
  iVar1 = *param_2;
  FUN_00553b40(param_1,iVar1,0x15);
  FUN_00553b40(param_1,iVar1 + 0x15,0x11);
  FUN_00553c74(param_1,2);
  FUN_00553f04(param_1,iVar1 + 0x28);
  FUN_00553f04(param_1,iVar1 + 0x2c);
  return;
}


// 0x0599c80 (0xe4 bytes)
void FUN_00599c80(undefined8 param_1,int *param_2)

{
  int iVar1;
  
  iVar1 = *param_2;
  FUN_00553b40(param_1,iVar1,0x15);
  FUN_00553c74(param_1,3);
  FUN_00553f04(param_1,iVar1 + 0x18);
  FUN_00553f04(param_1,iVar1 + 0x1c);
  FUN_00553f04(param_1,iVar1 + 0x20);
  FUN_00553b40(param_1,iVar1 + 0x24,0x20);
  FUN_00553b40(param_1,iVar1 + 0x44,0x100);
  FUN_00553c74(param_1,0);
  FUN_00553f04(param_1,iVar1 + 0x144);
  return;
}


// 0x0599d64 (0x98 bytes)
void FUN_00599d64(undefined8 param_1,int *param_2)

{
  int iVar1;
  
  iVar1 = *param_2;
  FUN_00553b40(param_1,iVar1,0x15);
  FUN_00553b40(param_1,iVar1 + 0x15,0x11);
  FUN_00553c74(param_1,2);
  FUN_00553f04(param_1,iVar1 + 0x28);
  FUN_00553b40(param_1,iVar1 + 0x2c,0x20);
  return;
}


// 0x0599dfc (0xec bytes)
void FUN_00599dfc(undefined8 param_1,int *param_2)

{
  int iVar1;
  
  iVar1 = *param_2;
  FUN_00553b40(param_1,iVar1,0x15);
  FUN_00553c74(param_1,3);
  FUN_00553f04(param_1,iVar1 + 0x18);
  FUN_00553f04(param_1,iVar1 + 0x1c);
  FUN_00553b40(param_1,iVar1 + 0x20,0x20);
  FUN_00553f04(param_1,iVar1 + 0x40);
  FUN_00553b40(param_1,iVar1 + 0x44,0x20);
  FUN_00553b40(param_1,iVar1 + 100,0x100);
  FUN_00553f04(param_1,iVar1 + 0x164);
  return;
}


// 0x0599ee8 (0x94 bytes)
void FUN_00599ee8(undefined8 param_1,int *param_2)

{
  int iVar1;
  
  iVar1 = *param_2;
  FUN_00553b40(param_1,iVar1,0x15);
  FUN_00553b40(param_1,iVar1 + 0x15,0x11);
  FUN_00553c74(param_1,2);
  FUN_00553f04(param_1,iVar1 + 0x28);
  FUN_00553f04(param_1,iVar1 + 0x2c);
  return;
}


// 0x0599f7c (0x80 bytes)
void FUN_00599f7c(undefined8 param_1,int *param_2)

{
  int iVar1;
  
  iVar1 = *param_2;
  FUN_00553b40(param_1,iVar1,0x15);
  FUN_00553b40(param_1,iVar1 + 0x15,0x11);
  FUN_00553c74(param_1,2);
  FUN_00553f04(param_1,iVar1 + 0x28);
  return;
}


// 0x0599ffc (0x80 bytes)
void FUN_00599ffc(undefined8 param_1,int *param_2)

{
  int iVar1;
  
  iVar1 = *param_2;
  FUN_00553b40(param_1,iVar1,0x15);
  FUN_00553b40(param_1,iVar1 + 0x15,0x11);
  FUN_00553c74(param_1,2);
  FUN_00553f04(param_1,iVar1 + 0x28);
  return;
}


// 0x059a07c (0x7c bytes)
void FUN_0059a07c(undefined8 param_1,int *param_2)

{
  int iVar1;
  
  iVar1 = *param_2;
  FUN_00553b40(param_1,iVar1,0x15);
  FUN_00553c74(param_1,3);
  FUN_00553f04(param_1,iVar1 + 0x18);
  FUN_00553f04(param_1,iVar1 + 0x1c);
  return;
}


// 0x059a0f8 (0x80 bytes)
void FUN_0059a0f8(undefined8 param_1,int *param_2)

{
  int iVar1;
  
  iVar1 = *param_2;
  FUN_00553b40(param_1,iVar1,0x15);
  FUN_00553b40(param_1,iVar1 + 0x15,0x11);
  FUN_00553c74(param_1,2);
  FUN_00553f04(param_1,iVar1 + 0x28);
  return;
}


// 0x059a178 (0x1ec bytes)
void FUN_0059a178(undefined8 param_1,int *param_2)

{
  int iVar1;
  
  iVar1 = *param_2;
  FUN_00553b40(param_1,iVar1,0x15);
  FUN_00553c74(param_1,3);
  FUN_00553f04(param_1,iVar1 + 0x18);
  FUN_00553f04(param_1,iVar1 + 0x1c);
  FUN_00553f04(param_1,iVar1 + 0x20);
  FUN_00553f04(param_1,iVar1 + 0x24);
  FUN_00553f04(param_1,iVar1 + 0x28);
  FUN_00553f04(param_1,iVar1 + 0x2c);
  FUN_00553f04(param_1,iVar1 + 0x30);
  FUN_00553b40(param_1,iVar1 + 0x34,0x100);
  FUN_00553b40(param_1,iVar1 + 0x134,0x40);
  FUN_00553f04(param_1,iVar1 + 0x174);
  FUN_00553f04(param_1,iVar1 + 0x178);
  FUN_00553f04(param_1,iVar1 + 0x17c);
  FUN_00553f04(param_1,iVar1 + 0x180);
  FUN_00553f04(param_1,iVar1 + 0x184);
  FUN_00553f04(param_1,iVar1 + 0x188);
  FUN_00553f04(param_1,iVar1 + 0x18c);
  FUN_00553f04(param_1,iVar1 + 400);
  FUN_00553f04(param_1,iVar1 + 0x194);
  FUN_00553f04(param_1,iVar1 + 0x198);
  FUN_00553f04(param_1,iVar1 + 0x19c);
  return;
}


// 0x059a364 (0x80 bytes)
void FUN_0059a364(undefined8 param_1,int *param_2)

{
  int iVar1;
  
  iVar1 = *param_2;
  FUN_00553b40(param_1,iVar1,0x15);
  FUN_00553b40(param_1,iVar1 + 0x15,0x11);
  FUN_00553c74(param_1,2);
  FUN_00553f04(param_1,iVar1 + 0x28);
  return;
}


// 0x059a3e4 (0x98 bytes)
void FUN_0059a3e4(undefined8 param_1,int *param_2)

{
  int iVar1;
  
  iVar1 = *param_2;
  FUN_00553b40(param_1,iVar1,0x15);
  FUN_00553b40(param_1,iVar1 + 0x15,0x11);
  FUN_00553b40(param_1,iVar1 + 0x26,0x40);
  FUN_00553c74(param_1,2);
  FUN_00553f04(param_1,iVar1 + 0x68);
  return;
}


// 0x059a47c (0xac bytes)
void FUN_0059a47c(undefined8 param_1,int *param_2)

{
  int iVar1;
  
  iVar1 = *param_2;
  FUN_00553b40(param_1,iVar1,0x15);
  FUN_00553b40(param_1,iVar1 + 0x15,0x11);
  FUN_00553c74(param_1,2);
  FUN_00553f04(param_1,iVar1 + 0x28);
  FUN_00553f04(param_1,iVar1 + 0x2c);
  FUN_00553b40(param_1,iVar1 + 0x30,0x20);
  return;
}


// 0x059a528 (0x58 bytes)
void FUN_0059a528(undefined8 param_1,int *param_2)

{
  int iVar1;
  
  iVar1 = *param_2;
  FUN_00553f04(param_1,iVar1);
  FUN_00553b40(param_1,iVar1 + 4,0x100);
  return;
}


// 0x059a580 (0xcc bytes)
void FUN_0059a580(undefined8 param_1,int *param_2)

{
  int iVar1;
  
  iVar1 = *param_2;
  FUN_00553b40(param_1,iVar1,0x11);
  FUN_00553c74(param_1,3);
  FUN_00553f04(param_1,iVar1 + 0x14);
  FUN_00553b40(param_1,iVar1 + 0x18,0x40);
  FUN_00553c74(param_1,0);
  FUN_00553b40(param_1,iVar1 + 0x58,0x20);
  FUN_00553c74(param_1,0);
  FUN_00553f04(param_1,iVar1 + 0x78);
  return;
}


// 0x059a64c (0x68 bytes)
void FUN_0059a64c(undefined8 param_1,int *param_2)

{
  int iVar1;
  
  iVar1 = *param_2;
  FUN_00553b40(param_1,iVar1,0x15);
  FUN_00553c74(param_1,3);
  FUN_00553f04(param_1,iVar1 + 0x18);
  return;
}


// 0x059a6b4 (0x80 bytes)
void FUN_0059a6b4(undefined8 param_1,int *param_2)

{
  int iVar1;
  
  iVar1 = *param_2;
  FUN_00553b40(param_1,iVar1,0x15);
  FUN_00553b40(param_1,iVar1 + 0x15,0x11);
  FUN_00553c74(param_1,2);
  FUN_00553f04(param_1,iVar1 + 0x28);
  return;
}


// 0x059a734 (0x68 bytes)
void FUN_0059a734(undefined8 param_1,int *param_2)

{
  int iVar1;
  
  iVar1 = *param_2;
  FUN_00553b40(param_1,iVar1,0x15);
  FUN_00553c74(param_1,3);
  FUN_00553f04(param_1,iVar1 + 0x18);
  return;
}


// 0x059a79c (0x80 bytes)
void FUN_0059a79c(undefined8 param_1,int *param_2)

{
  int iVar1;
  
  iVar1 = *param_2;
  FUN_00553b40(param_1,iVar1,0x15);
  FUN_00553b40(param_1,iVar1 + 0x15,0x11);
  FUN_00553c74(param_1,2);
  FUN_00553f04(param_1,iVar1 + 0x28);
  return;
}


// 0x059a81c (0x7c bytes)
void FUN_0059a81c(undefined8 param_1,int *param_2)

{
  int iVar1;
  
  iVar1 = *param_2;
  FUN_00553b40(param_1,iVar1,0x15);
  FUN_00553c74(param_1,3);
  FUN_00553f04(param_1,iVar1 + 0x18);
  FUN_00553f04(param_1,iVar1 + 0x1c);
  return;
}


// 0x059a898 (0x20c bytes)
void FUN_0059a898(undefined8 param_1,int *param_2)

{
  int iVar1;
  
  iVar1 = *param_2;
  FUN_00553b40(param_1,iVar1,0x15);
  FUN_00553b40(param_1,iVar1 + 0x15,0x11);
  FUN_00553c74(param_1,2);
  FUN_00553f04(param_1,iVar1 + 0x28);
  FUN_00553f04(param_1,iVar1 + 0x2c);
  FUN_00553f04(param_1,iVar1 + 0x30);
  FUN_00553f04(param_1,iVar1 + 0x34);
  FUN_00553b40(param_1,iVar1 + 0x38,0x40);
  FUN_00553b40(param_1,iVar1 + 0x78,0x20);
  FUN_00553b40(param_1,iVar1 + 0x98,0x20);
  FUN_00553f04(param_1,iVar1 + 0xb8);
  FUN_00553f04(param_1,iVar1 + 0xbc);
  FUN_00553f04(param_1,iVar1 + 0xc0);
  FUN_00553f04(param_1,iVar1 + 0xc4);
  FUN_00553f04(param_1,iVar1 + 200);
  FUN_00553f04(param_1,iVar1 + 0xcc);
  FUN_00553f04(param_1,iVar1 + 0xd0);
  FUN_00553f04(param_1,iVar1 + 0xd4);
  FUN_00553f04(param_1,iVar1 + 0xd8);
  FUN_00553f04(param_1,iVar1 + 0xdc);
  FUN_00553f04(param_1,iVar1 + 0xe0);
  FUN_00553f04(param_1,iVar1 + 0xe4);
  FUN_00553b40(param_1,iVar1 + 0xe8,0x11);
  return;
}


// 0x059aaa4 (0x7c bytes)
void FUN_0059aaa4(undefined8 param_1,int *param_2)

{
  int iVar1;
  
  iVar1 = *param_2;
  FUN_00553b40(param_1,iVar1,0x15);
  FUN_00553c74(param_1,3);
  FUN_00553f04(param_1,iVar1 + 0x18);
  FUN_00553f04(param_1,iVar1 + 0x1c);
  return;
}


// 0x059ab20 (0x98 bytes)
void FUN_0059ab20(undefined8 param_1,int *param_2)

{
  int iVar1;
  
  iVar1 = *param_2;
  FUN_00553b40(param_1,iVar1,0x15);
  FUN_00553b40(param_1,iVar1 + 0x15,0x11);
  FUN_00553c74(param_1,2);
  FUN_00553f04(param_1,iVar1 + 0x28);
  FUN_00553b40(param_1,iVar1 + 0x2c,0x20);
  return;
}


// 0x059abb8 (0x7c bytes)
void FUN_0059abb8(undefined8 param_1,int *param_2)

{
  int iVar1;
  
  iVar1 = *param_2;
  FUN_00553b40(param_1,iVar1,0x15);
  FUN_00553c74(param_1,3);
  FUN_00553f04(param_1,iVar1 + 0x18);
  FUN_00553f04(param_1,iVar1 + 0x1c);
  return;
}


// 0x059ac34 (0x68 bytes)
void FUN_0059ac34(undefined8 param_1,int *param_2)

{
  int iVar1;
  
  iVar1 = *param_2;
  FUN_00553b40(param_1,iVar1,0x15);
  FUN_00553c74(param_1,3);
  FUN_00553f04(param_1,iVar1 + 0x18);
  return;
}


// 0x059ac9c (0x80 bytes)
void FUN_0059ac9c(undefined8 param_1,int *param_2)

{
  int iVar1;
  
  iVar1 = *param_2;
  FUN_00553b40(param_1,iVar1,0x15);
  FUN_00553b40(param_1,iVar1 + 0x15,0x11);
  FUN_00553c74(param_1,2);
  FUN_00553f04(param_1,iVar1 + 0x28);
  return;
}


// 0x059ad1c (0x68 bytes)
void FUN_0059ad1c(undefined8 param_1,int *param_2)

{
  int iVar1;
  
  iVar1 = *param_2;
  FUN_00553b40(param_1,iVar1,0x15);
  FUN_00553c74(param_1,3);
  FUN_00553f04(param_1,iVar1 + 0x18);
  return;
}


// 0x059ad84 (0x68 bytes)
void FUN_0059ad84(undefined8 param_1,int *param_2)

{
  int iVar1;
  
  iVar1 = *param_2;
  FUN_00553b40(param_1,iVar1,0x15);
  FUN_00553c74(param_1,3);
  FUN_00553f04(param_1,iVar1 + 0x18);
  return;
}


// 0x059adec (0x94 bytes)
void FUN_0059adec(undefined8 param_1,int *param_2)

{
  int iVar1;
  
  iVar1 = *param_2;
  FUN_00553b40(param_1,iVar1,0x15);
  FUN_00553b40(param_1,iVar1 + 0x15,0x11);
  FUN_00553c74(param_1,2);
  FUN_00553f04(param_1,iVar1 + 0x28);
  FUN_00553f04(param_1,iVar1 + 0x2c);
  return;
}


// 0x059ae80 (0x84 bytes)
void FUN_0059ae80(undefined8 param_1,int *param_2)

{
  int iVar1;
  GPiece<16> local_30;
  
  iVar1 = *param_2;
  FUN_00553b40(param_1,iVar1,0x15);
  FUN_00553c74(param_1,3);
  FUN_00553f04(param_1,iVar1 + 0x18);
  FUN_0059741c(param_1,local_30);
  return;
}


// 0x059af04 (0xa8 bytes)
void FUN_0059af04(undefined8 param_1,int *param_2)

{
  int iVar1;
  
  iVar1 = *param_2;
  FUN_00553b40(param_1,iVar1,0x15);
  FUN_00553c74(param_1,3);
  FUN_00553f04(param_1,iVar1 + 0x18);
  FUN_00553b40(param_1,iVar1 + 0x1c,0x40);
  FUN_00553f04(param_1,iVar1 + 0x5c);
  FUN_00553f04(param_1,iVar1 + 0x60);
  return;
}


// 0x059afac (0x80 bytes)
void FUN_0059afac(undefined8 param_1,int *param_2)

{
  int iVar1;
  
  iVar1 = *param_2;
  FUN_00553b40(param_1,iVar1,0x15);
  FUN_00553b40(param_1,iVar1 + 0x15,0x11);
  FUN_00553c74(param_1,2);
  FUN_00553f04(param_1,iVar1 + 0x28);
  return;
}


// 0x059b02c (0x68 bytes)
void FUN_0059b02c(undefined8 param_1,int *param_2)

{
  int iVar1;
  
  iVar1 = *param_2;
  FUN_00553b40(param_1,iVar1,0x15);
  FUN_00553c74(param_1,3);
  FUN_00553f04(param_1,iVar1 + 0x18);
  return;
}


// 0x059b094 (0xbc bytes)
void FUN_0059b094(undefined8 param_1,int *param_2)

{
  int iVar1;
  
  iVar1 = *param_2;
  FUN_00553b40(param_1,iVar1,0x15);
  FUN_00553b40(param_1,iVar1 + 0x15,0x11);
  FUN_00553c74(param_1,2);
  FUN_00553f04(param_1,iVar1 + 0x28);
  FUN_00553f04(param_1,iVar1 + 0x2c);
  FUN_00553f04(param_1,iVar1 + 0x30);
  FUN_00553f04(param_1,iVar1 + 0x34);
  return;
}


// 0x059b150 (0x68 bytes)
void FUN_0059b150(undefined8 param_1,int *param_2)

{
  int iVar1;
  
  iVar1 = *param_2;
  FUN_00553b40(param_1,iVar1,0x15);
  FUN_00553c74(param_1,3);
  FUN_00553f04(param_1,iVar1 + 0x18);
  return;
}


// 0x059b1b8 (0x80 bytes)
void FUN_0059b1b8(undefined8 param_1,int *param_2)

{
  int iVar1;
  
  iVar1 = *param_2;
  FUN_00553b40(param_1,iVar1,0x15);
  FUN_00553b40(param_1,iVar1 + 0x15,0x11);
  FUN_00553c74(param_1,2);
  FUN_00553f04(param_1,iVar1 + 0x28);
  return;
}


// 0x059b238 (0x68 bytes)
void FUN_0059b238(undefined8 param_1,int *param_2)

{
  int iVar1;
  
  iVar1 = *param_2;
  FUN_00553b40(param_1,iVar1,0x15);
  FUN_00553c74(param_1,3);
  FUN_00553f04(param_1,iVar1 + 0x18);
  return;
}


// 0x059b2a0 (0x80 bytes)
void FUN_0059b2a0(undefined8 param_1,int *param_2)

{
  int iVar1;
  
  iVar1 = *param_2;
  FUN_00553b40(param_1,iVar1,0x15);
  FUN_00553b40(param_1,iVar1 + 0x15,0x11);
  FUN_00553c74(param_1,2);
  FUN_00553f04(param_1,iVar1 + 0x28);
  return;
}


// 0x059b320 (0xb8 bytes)
void FUN_0059b320(undefined8 param_1,int *param_2)

{
  int iVar1;
  
  iVar1 = *param_2;
  FUN_00553b40(param_1,iVar1,0x15);
  FUN_00553c74(param_1,3);
  FUN_00553f04(param_1,iVar1 + 0x18);
  FUN_00553b40(param_1,iVar1 + 0x1c,0x11);
  FUN_00553c74(param_1,3);
  FUN_00553f04(param_1,iVar1 + 0x30);
  FUN_00553f04(param_1,iVar1 + 0x34);
  return;
}


// 0x059b3d8 (0x94 bytes)
void FUN_0059b3d8(undefined8 param_1,int *param_2)

{
  int iVar1;
  
  iVar1 = *param_2;
  FUN_00553b40(param_1,iVar1,0x15);
  FUN_00553c74(param_1,3);
  FUN_00553f04(param_1,iVar1 + 0x18);
  FUN_00553b40(param_1,iVar1 + 0x1c,0x20);
  FUN_00553f04(param_1,iVar1 + 0x3c);
  return;
}


// 0x059b46c (0x94 bytes)
void FUN_0059b46c(undefined8 param_1,int *param_2)

{
  int iVar1;
  
  iVar1 = *param_2;
  FUN_00553b40(param_1,iVar1,0x15);
  FUN_00553c74(param_1,3);
  FUN_00553f04(param_1,iVar1 + 0x18);
  FUN_00553f04(param_1,iVar1 + 0x1c);
  FUN_00553b40(param_1,iVar1 + 0x20,0x20);
  return;
}


// 0x059b500 (0x94 bytes)
void FUN_0059b500(undefined8 param_1,int *param_2)

{
  int iVar1;
  
  iVar1 = *param_2;
  FUN_00553b40(param_1,iVar1,0x15);
  FUN_00553b40(param_1,iVar1 + 0x15,0x11);
  FUN_00553c74(param_1,2);
  FUN_00553f04(param_1,iVar1 + 0x28);
  FUN_00553f04(param_1,iVar1 + 0x2c);
  return;
}


// 0x059b594 (0x7c bytes)
void FUN_0059b594(undefined8 param_1,int *param_2)

{
  int iVar1;
  
  iVar1 = *param_2;
  FUN_00553b40(param_1,iVar1,0x15);
  FUN_00553c74(param_1,3);
  FUN_00553f04(param_1,iVar1 + 0x18);
  FUN_00553f04(param_1,iVar1 + 0x1c);
  return;
}


// 0x059b610 (0x80 bytes)
void FUN_0059b610(undefined8 param_1,int *param_2)

{
  int iVar1;
  
  iVar1 = *param_2;
  FUN_00553b40(param_1,iVar1,0x15);
  FUN_00553b40(param_1,iVar1 + 0x15,0x11);
  FUN_00553c74(param_1,2);
  FUN_00553f04(param_1,iVar1 + 0x28);
  return;
}


// 0x059b690 (0x68 bytes)
void FUN_0059b690(undefined8 param_1,int *param_2)

{
  int iVar1;
  
  iVar1 = *param_2;
  FUN_00553b40(param_1,iVar1,0x15);
  FUN_00553c74(param_1,3);
  FUN_00553f04(param_1,iVar1 + 0x18);
  return;
}


// 0x059b6f8 (0xac bytes)
void FUN_0059b6f8(undefined8 param_1,int *param_2)

{
  int iVar1;
  
  iVar1 = *param_2;
  FUN_00553b40(param_1,iVar1,0x15);
  FUN_00553b40(param_1,iVar1 + 0x15,0x11);
  FUN_00553c74(param_1,2);
  FUN_00553f04(param_1,iVar1 + 0x28);
  FUN_00553f04(param_1,iVar1 + 0x2c);
  FUN_00553b40(param_1,iVar1 + 0x30,0x4b0);
  return;
}


// 0x059b7a4 (0x68 bytes)
void FUN_0059b7a4(undefined8 param_1,int *param_2)

{
  int iVar1;
  
  iVar1 = *param_2;
  FUN_00553b40(param_1,iVar1,0x15);
  FUN_00553c74(param_1,3);
  FUN_00553f04(param_1,iVar1 + 0x18);
  return;
}


// 0x059b80c (0x98 bytes)
void FUN_0059b80c(undefined8 param_1,int *param_2)

{
  int iVar1;
  
  iVar1 = *param_2;
  FUN_00553b40(param_1,iVar1,0x15);
  FUN_00553b40(param_1,iVar1 + 0x15,0x11);
  FUN_00553c74(param_1,2);
  FUN_00553f04(param_1,iVar1 + 0x28);
  FUN_00553b40(param_1,iVar1 + 0x2c,0x4b0);
  return;
}


// 0x059b8a4 (0x98 bytes)
void FUN_0059b8a4(undefined8 param_1,int *param_2)

{
  int iVar1;
  
  iVar1 = *param_2;
  FUN_00553b40(param_1,iVar1,0x15);
  FUN_00553b40(param_1,iVar1 + 0x15,0x11);
  FUN_00553c74(param_1,2);
  FUN_00553f04(param_1,iVar1 + 0x28);
  FUN_00553b40(param_1,iVar1 + 0x2c,0x100);
  return;
}


// 0x059b93c (0x68 bytes)
void FUN_0059b93c(undefined8 param_1,int *param_2)

{
  int iVar1;
  
  iVar1 = *param_2;
  FUN_00553b40(param_1,iVar1,0x15);
  FUN_00553c74(param_1,3);
  FUN_00553f04(param_1,iVar1 + 0x18);
  return;
}


// 0x059b9a4 (0x80 bytes)
void FUN_0059b9a4(undefined8 param_1,int *param_2)

{
  int iVar1;
  
  iVar1 = *param_2;
  FUN_00553b40(param_1,iVar1,0x15);
  FUN_00553b40(param_1,iVar1 + 0x15,0x11);
  FUN_00553c74(param_1,2);
  FUN_00553f04(param_1,iVar1 + 0x28);
  return;
}


// 0x059ba24 (0x7c bytes)
void FUN_0059ba24(undefined8 param_1,int *param_2)

{
  int iVar1;
  
  iVar1 = *param_2;
  FUN_00553b40(param_1,iVar1,0x15);
  FUN_00553c74(param_1,3);
  FUN_00553f04(param_1,iVar1 + 0x18);
  FUN_00553f04(param_1,iVar1 + 0x1c);
  return;
}


// 0x059baa0 (0x7c bytes)
void FUN_0059baa0(undefined8 param_1,int *param_2)

{
  int iVar1;
  
  iVar1 = *param_2;
  FUN_00553b40(param_1,iVar1,0x15);
  FUN_00553c74(param_1,3);
  FUN_00553f04(param_1,iVar1 + 0x18);
  FUN_00553f04(param_1,iVar1 + 0x1c);
  return;
}


// 0x059bb1c (0xb0 bytes)
void FUN_0059bb1c(undefined8 param_1,int *param_2)

{
  int iVar1;
  
  iVar1 = *param_2;
  FUN_00553b40(param_1,iVar1,0x15);
  FUN_00553b40(param_1,iVar1 + 0x15,0x11);
  FUN_00553c74(param_1,2);
  FUN_00553f04(param_1,iVar1 + 0x28);
  FUN_00553b40(param_1,iVar1 + 0x2c,0x20);
  FUN_00553b40(param_1,iVar1 + 0x4c,0x20);
  return;
}


// 0x059bbcc (0x7c bytes)
void FUN_0059bbcc(undefined8 param_1,int *param_2)

{
  int iVar1;
  
  iVar1 = *param_2;
  FUN_00553b40(param_1,iVar1,0x15);
  FUN_00553c74(param_1,3);
  FUN_00553f04(param_1,iVar1 + 0x18);
  FUN_00553f04(param_1,iVar1 + 0x1c);
  return;
}


// 0x059bc48 (0x98 bytes)
void FUN_0059bc48(undefined8 param_1,int *param_2)

{
  int iVar1;
  
  iVar1 = *param_2;
  FUN_00553f04(param_1,iVar1);
  FUN_00553f04(param_1,iVar1 + 4);
  FUN_00553f04(param_1,iVar1 + 8);
  FUN_00553b40(param_1,iVar1 + 0xc,0x40);
  FUN_00553b40(param_1,iVar1 + 0x4c,0x40);
  return;
}


// 0x059bce0 (0xcc bytes)
void FUN_0059bce0(undefined8 param_1,int *param_2)

{
  int iVar1;
  
  iVar1 = *param_2;
  FUN_00553b40(param_1,iVar1,0x15);
  FUN_00553c74(param_1,3);
  FUN_00553f04(param_1,iVar1 + 0x18);
  FUN_00553f04(param_1,iVar1 + 0x1c);
  FUN_00553b40(param_1,iVar1 + 0x20,0x20);
  FUN_00553f04(param_1,iVar1 + 0x40);
  FUN_00554290(param_1,iVar1 + 0x44);
  FUN_00553c74(param_1,3);
  return;
}


// 0x059bdac (0xa4 bytes)
void FUN_0059bdac(undefined8 param_1,int *param_2)

{
  int iVar1;
  
  iVar1 = *param_2;
  FUN_00553b40(param_1,iVar1,0x15);
  FUN_00553c74(param_1,3);
  FUN_00553f04(param_1,iVar1 + 0x18);
  FUN_00553b40(param_1,iVar1 + 0x1c,0x100);
  FUN_00554290(param_1,iVar1 + 0x11c);
  FUN_00553c74(param_1,3);
  return;
}


// 0x059be50 (0xf8 bytes)
void FUN_0059be50(undefined8 param_1,int *param_2)

{
  int iVar1;
  
  iVar1 = *param_2;
  FUN_00553b40(param_1,iVar1,0x15);
  FUN_00553c74(param_1,3);
  FUN_00553f04(param_1,iVar1 + 0x18);
  FUN_00553f04(param_1,iVar1 + 0x1c);
  FUN_00553f04(param_1,iVar1 + 0x20);
  FUN_00553b40(param_1,iVar1 + 0x24,0x20);
  FUN_00553b40(param_1,iVar1 + 0x44,0x100);
  FUN_00553f04(param_1,iVar1 + 0x144);
  FUN_00554290(param_1,iVar1 + 0x148);
  FUN_00553c74(param_1,3);
  return;
}


// 0x059bf48 (0xb4 bytes)
void FUN_0059bf48(undefined8 param_1,int *param_2)

{
  int iVar1;
  
  iVar1 = *param_2;
  FUN_00553b40(param_1,iVar1,0x15);
  FUN_00553c74(param_1,3);
  FUN_00553f04(param_1,iVar1 + 0x18);
  FUN_00553b40(param_1,iVar1 + 0x1c,0x100);
  FUN_00553c74(param_1,0);
  FUN_00554290(param_1,iVar1 + 0x11c);
  FUN_00553c74(param_1,3);
  return;
}


// 0x059bffc (0x144 bytes)
void FUN_0059bffc(undefined8 param_1,int *param_2)

{
  int iVar1;
  
  iVar1 = *param_2;
  FUN_00553b40(param_1,iVar1,0x15);
  FUN_00553c74(param_1,3);
  FUN_00553f04(param_1,iVar1 + 0x18);
  FUN_00553f04(param_1,iVar1 + 0x1c);
  FUN_00553f04(param_1,iVar1 + 0x20);
  FUN_00553b40(param_1,iVar1 + 0x24,0x20);
  FUN_00553c74(param_1,0);
  FUN_00553f04(param_1,iVar1 + 0x44);
  FUN_00553b40(param_1,iVar1 + 0x48,0x20);
  FUN_00553b40(param_1,iVar1 + 0x68,0x100);
  FUN_00553c74(param_1,0);
  FUN_00553f04(param_1,iVar1 + 0x168);
  FUN_00554290(param_1,iVar1 + 0x16c);
  FUN_00553c74(param_1,3);
  return;
}


// 0x059c140 (0xc8 bytes)
void FUN_0059c140(undefined8 param_1,int *param_2)

{
  int iVar1;
  
  iVar1 = *param_2;
  FUN_00553b40(param_1,iVar1,0x15);
  FUN_00553c74(param_1,3);
  FUN_00553f04(param_1,iVar1 + 0x18);
  FUN_00553b40(param_1,iVar1 + 0x1c,0x40);
  FUN_00553c74(param_1,0);
  FUN_00553f04(param_1,iVar1 + 0x5c);
  FUN_00554290(param_1,iVar1 + 0x60);
  FUN_00553c74(param_1,3);
  return;
}


// 0x059c208 (0xb8 bytes)
void FUN_0059c208(undefined8 param_1,int *param_2)

{
  int iVar1;
  
  iVar1 = *param_2;
  FUN_00553b40(param_1,iVar1,0x15);
  FUN_00553c74(param_1,3);
  FUN_00553f04(param_1,iVar1 + 0x18);
  FUN_00553f04(param_1,iVar1 + 0x1c);
  FUN_00553b40(param_1,iVar1 + 0x20,0x20);
  FUN_00554290(param_1,iVar1 + 0x40);
  FUN_00553c74(param_1,3);
  return;
}


// 0x059c2c0 (0xd4 bytes)
void FUN_0059c2c0(undefined8 param_1,int *param_2)

{
  int iVar1;
  GPiece<16> local_30;
  
  iVar1 = *param_2;
  FUN_00553b40(param_1,iVar1,0x15);
  FUN_00553c74(param_1,3);
  FUN_00553f04(param_1,iVar1 + 0x18);
  FUN_00553f04(param_1,iVar1 + 0x1c);
  FUN_00553b40(param_1,iVar1 + 0x20,0x20);
  FUN_0059bc48(param_1,local_30);
  FUN_00554290(param_1,iVar1 + 0xcc);
  FUN_00553c74(param_1,3);
  return;
}


// 0x059c394 (0x130 bytes)
void FUN_0059c394(undefined8 param_1,int *param_2)

{
  int iVar1;
  
  iVar1 = *param_2;
  FUN_00553b40(param_1,iVar1,0x15);
  FUN_00553c74(param_1,3);
  FUN_00553f04(param_1,iVar1 + 0x18);
  FUN_00553f04(param_1,iVar1 + 0x1c);
  FUN_00553f04(param_1,iVar1 + 0x20);
  FUN_00553f04(param_1,iVar1 + 0x24);
  FUN_00553f04(param_1,iVar1 + 0x28);
  FUN_00553b40(param_1,iVar1 + 0x2c,0x4b0);
  FUN_00553b40(param_1,iVar1 + 0x4dc,0x4b0);
  FUN_00553c74(param_1,0);
  FUN_00554290(param_1,iVar1 + 0x98c);
  FUN_00553c74(param_1,3);
  FUN_00553f04(param_1,iVar1 + 0x990);
  return;
}


// 0x059c4c4 (0xb4 bytes)
void FUN_0059c4c4(undefined8 param_1,int *param_2)

{
  int iVar1;
  
  iVar1 = *param_2;
  FUN_00553b40(param_1,iVar1,0x15);
  FUN_00553c74(param_1,3);
  FUN_00553f04(param_1,iVar1 + 0x18);
  FUN_00553f04(param_1,iVar1 + 0x1c);
  FUN_00553f04(param_1,iVar1 + 0x20);
  FUN_00554290(param_1,iVar1 + 0x24);
  FUN_00553c74(param_1,3);
  return;
}


// 0x059c578 (0xb8 bytes)
void FUN_0059c578(undefined8 param_1,int *param_2)

{
  int iVar1;
  
  iVar1 = *param_2;
  FUN_00553b40(param_1,iVar1,0x15);
  FUN_00553c74(param_1,3);
  FUN_00553f04(param_1,iVar1 + 0x18);
  FUN_00553b40(param_1,iVar1 + 0x1c,0x20);
  FUN_00553f04(param_1,iVar1 + 0x3c);
  FUN_00554290(param_1,iVar1 + 0x40);
  FUN_00553c74(param_1,3);
  return;
}


// 0x059c630 (0xec bytes)
void FUN_0059c630(undefined8 param_1,int *param_2)

{
  int iVar1;
  GPiece<16> local_30;
  
  iVar1 = *param_2;
  FUN_00553b40(param_1,iVar1,0x15);
  FUN_00553c74(param_1,3);
  FUN_00553f04(param_1,iVar1 + 0x18);
  FUN_00553f04(param_1,iVar1 + 0x1c);
  FUN_00553b40(param_1,iVar1 + 0x20,0x20);
  FUN_00553b40(param_1,iVar1 + 0x40,0x100);
  FUN_0059bc48(param_1,local_30);
  FUN_00554290(param_1,iVar1 + 0x1cc);
  FUN_00553c74(param_1,3);
  return;
}


// 0x059c71c (0x108 bytes)
void FUN_0059c71c(undefined8 param_1,int *param_2)

{
  int iVar1;
  
  iVar1 = *param_2;
  FUN_00553b40(param_1,iVar1,0x15);
  FUN_00553c74(param_1,3);
  FUN_00553f04(param_1,iVar1 + 0x18);
  FUN_00553f04(param_1,iVar1 + 0x1c);
  FUN_00553b40(param_1,iVar1 + 0x20,0x20);
  FUN_00553b40(param_1,iVar1 + 0x40,0x800);
  FUN_00553c74(param_1,0);
  FUN_00553f04(param_1,iVar1 + 0x840);
  FUN_00553f04(param_1,iVar1 + 0x844);
  FUN_00554290(param_1,iVar1 + 0x848);
  FUN_00553c74(param_1,3);
  return;
}


// 0x059c824 (0xcc bytes)
void FUN_0059c824(undefined8 param_1,int *param_2)

{
  int iVar1;
  
  iVar1 = *param_2;
  FUN_00553b40(param_1,iVar1,0x15);
  FUN_00553c74(param_1,3);
  FUN_00553f04(param_1,iVar1 + 0x18);
  FUN_00553f04(param_1,iVar1 + 0x1c);
  FUN_00553b40(param_1,iVar1 + 0x20,0x20);
  FUN_00553f04(param_1,iVar1 + 0x40);
  FUN_00554290(param_1,iVar1 + 0x44);
  FUN_00553c74(param_1,3);
  return;
}


// 0x059c8f0 (0xcc bytes)
void FUN_0059c8f0(undefined8 param_1,int *param_2)

{
  int iVar1;
  
  iVar1 = *param_2;
  FUN_00553b40(param_1,iVar1,0x15);
  FUN_00553c74(param_1,3);
  FUN_00553f04(param_1,iVar1 + 0x18);
  FUN_00553f04(param_1,iVar1 + 0x1c);
  FUN_00553b40(param_1,iVar1 + 0x20,0x20);
  FUN_00553f04(param_1,iVar1 + 0x40);
  FUN_00554290(param_1,iVar1 + 0x44);
  FUN_00553c74(param_1,3);
  return;
}


// 0x059c9bc (0xd4 bytes)
void FUN_0059c9bc(undefined8 param_1,int *param_2)

{
  int iVar1;
  GPiece<16> local_30;
  
  iVar1 = *param_2;
  FUN_00553b40(param_1,iVar1,0x15);
  FUN_00553c74(param_1,3);
  FUN_00553f04(param_1,iVar1 + 0x18);
  FUN_00553f04(param_1,iVar1 + 0x1c);
  FUN_00553b40(param_1,iVar1 + 0x20,0x20);
  FUN_0059bc48(param_1,local_30);
  FUN_00554290(param_1,iVar1 + 0xcc);
  FUN_00553c74(param_1,3);
  return;
}


// 0x059ca90 (0xcc bytes)
void FUN_0059ca90(undefined8 param_1,int *param_2)

{
  int iVar1;
  
  iVar1 = *param_2;
  FUN_00553b40(param_1,iVar1,0x15);
  FUN_00553c74(param_1,3);
  FUN_00553f04(param_1,iVar1 + 0x18);
  FUN_00553f04(param_1,iVar1 + 0x1c);
  FUN_00553b40(param_1,iVar1 + 0x20,0x20);
  FUN_00553f04(param_1,iVar1 + 0x40);
  FUN_00554290(param_1,iVar1 + 0x44);
  FUN_00553c74(param_1,3);
  return;
}


// 0x059cb5c (0xc8 bytes)
void FUN_0059cb5c(undefined8 param_1,int *param_2)

{
  int iVar1;
  
  iVar1 = *param_2;
  FUN_00553b40(param_1,iVar1,0x15);
  FUN_00553c74(param_1,3);
  FUN_00553f04(param_1,iVar1 + 0x18);
  FUN_00553f04(param_1,iVar1 + 0x1c);
  FUN_00553b40(param_1,iVar1 + 0x20,4000);
  FUN_00553c74(param_1,0);
  FUN_00554290(param_1,iVar1 + 0xfc0);
  FUN_00553c74(param_1,3);
  return;
}


// 0x059cc24 (0xe4 bytes)
void FUN_0059cc24(undefined8 param_1,int *param_2)

{
  int iVar1;
  
  iVar1 = *param_2;
  FUN_00553b40(param_1,iVar1,0x15);
  FUN_00553c74(param_1,3);
  FUN_00553f04(param_1,iVar1 + 0x18);
  FUN_00553f04(param_1,iVar1 + 0x1c);
  FUN_00553b40(param_1,iVar1 + 0x20,0x20);
  FUN_00553b40(param_1,iVar1 + 0x40,0x100);
  FUN_00553f04(param_1,iVar1 + 0x140);
  FUN_00554290(param_1,iVar1 + 0x144);
  FUN_00553c74(param_1,3);
  return;
}


// 0x059cd08 (0xf4 bytes)
void FUN_0059cd08(undefined8 param_1,int *param_2)

{
  int iVar1;
  
  iVar1 = *param_2;
  FUN_00553b40(param_1,iVar1,0x15);
  FUN_00553c74(param_1,3);
  FUN_00553f04(param_1,iVar1 + 0x18);
  FUN_00553f04(param_1,iVar1 + 0x1c);
  FUN_00553b40(param_1,iVar1 + 0x20,0x40);
  FUN_00553f04(param_1,iVar1 + 0x60);
  FUN_00553f04(param_1,iVar1 + 100);
  FUN_00553f04(param_1,iVar1 + 0x68);
  FUN_00554290(param_1,iVar1 + 0x6c);
  FUN_00553c74(param_1,3);
  return;
}


// 0x059cdfc (0x12c bytes)
void FUN_0059cdfc(undefined8 param_1,int *param_2)

{
  int iVar1;
  
  iVar1 = *param_2;
  FUN_00553b40(param_1,iVar1,0x15);
  FUN_00553c74(param_1,3);
  FUN_00553f04(param_1,iVar1 + 0x18);
  FUN_00553f04(param_1,iVar1 + 0x1c);
  FUN_00553b40(param_1,iVar1 + 0x20,0x20);
  FUN_00553c74(param_1,0);
  FUN_00553f04(param_1,iVar1 + 0x40);
  FUN_00553f04(param_1,iVar1 + 0x44);
  FUN_00553b40(param_1,iVar1 + 0x48,0x40);
  FUN_00553c74(param_1,0);
  FUN_00553f04(param_1,iVar1 + 0x88);
  FUN_00554290(param_1,iVar1 + 0x8c);
  FUN_00553c74(param_1,3);
  return;
}


// 0x059cf28 (0x11c bytes)
void FUN_0059cf28(undefined8 param_1,int *param_2)

{
  int iVar1;
  
  iVar1 = *param_2;
  FUN_00553b40(param_1,iVar1,0x15);
  FUN_00553c74(param_1,3);
  FUN_00553f04(param_1,iVar1 + 0x18);
  FUN_00553f04(param_1,iVar1 + 0x1c);
  FUN_00553b40(param_1,iVar1 + 0x20,0x20);
  FUN_00553c74(param_1,0);
  FUN_00553f04(param_1,iVar1 + 0x40);
  FUN_00553f04(param_1,iVar1 + 0x44);
  FUN_00553f04(param_1,iVar1 + 0x48);
  FUN_00553b40(param_1,iVar1 + 0x4c,0x20);
  FUN_00554290(param_1,iVar1 + 0x6c);
  FUN_00553c74(param_1,3);
  return;
}


// 0x059d044 (0xac bytes)
void FUN_0059d044(undefined8 param_1,int *param_2)

{
  int iVar1;
  
  iVar1 = *param_2;
  FUN_00553b40(param_1,iVar1,0x15);
  FUN_00553b40(param_1,iVar1 + 0x15,0x11);
  FUN_00553c74(param_1,2);
  FUN_00553f04(param_1,iVar1 + 0x28);
  FUN_00554290(param_1,iVar1 + 0x2c);
  FUN_00553b40(param_1,iVar1 + 0x2d,0x20);
  return;
}


// 0x059d0f0 (0x11c bytes)
void FUN_0059d0f0(undefined8 param_1,int *param_2)

{
  int iVar1;
  
  iVar1 = *param_2;
  FUN_00553b40(param_1,iVar1,0x15);
  FUN_00553c74(param_1,3);
  FUN_00553f04(param_1,iVar1 + 0x18);
  FUN_00553f04(param_1,iVar1 + 0x1c);
  FUN_00553f04(param_1,iVar1 + 0x20);
  FUN_00553f04(param_1,iVar1 + 0x24);
  FUN_00553b40(param_1,iVar1 + 0x28,0x800);
  FUN_00553c74(param_1,0);
  FUN_00553f04(param_1,iVar1 + 0x828);
  FUN_00553b40(param_1,iVar1 + 0x82c,0x20);
  FUN_00554290(param_1,iVar1 + 0x84c);
  FUN_00553c74(param_1,3);
  return;
}


// 0x059d20c (0xcc bytes)
void FUN_0059d20c(undefined8 param_1,int *param_2)

{
  int iVar1;
  
  iVar1 = *param_2;
  FUN_00553b40(param_1,iVar1,0x15);
  FUN_00553c74(param_1,3);
  FUN_00553f04(param_1,iVar1 + 0x18);
  FUN_00553f04(param_1,iVar1 + 0x1c);
  FUN_00553b40(param_1,iVar1 + 0x20,0x40);
  FUN_00553f04(param_1,iVar1 + 0x60);
  FUN_00554290(param_1,iVar1 + 100);
  FUN_00553c74(param_1,3);
  return;
}


// 0x059d2d8 (0xa8 bytes)
void FUN_0059d2d8(undefined8 param_1,int *param_2)

{
  int iVar1;
  
  iVar1 = *param_2;
  FUN_00553f04(param_1,iVar1);
  FUN_00553f04(param_1,iVar1 + 4);
  FUN_00553b40(param_1,iVar1 + 8,0x15);
  FUN_00553b40(param_1,iVar1 + 0x1d,0x20);
  FUN_00554290(param_1,iVar1 + 0x3d);
  FUN_00553c74(param_1,2);
  return;
}


// 0x059d380 (0x110 bytes)
void FUN_0059d380(undefined8 param_1,int *param_2)

{
  int iVar1;
  
  iVar1 = *param_2;
  FUN_00553b40(param_1,iVar1,0x80);
  FUN_00553b40(param_1,iVar1 + 0x80,0x10);
  FUN_00553f04(param_1,iVar1 + 0x90);
  FUN_00553f04(param_1,iVar1 + 0x94);
  FUN_00553f04(param_1,iVar1 + 0x98);
  FUN_00553f04(param_1,iVar1 + 0x9c);
  FUN_00553f04(param_1,iVar1 + 0xa0);
  FUN_00554160(param_1,iVar1 + 0xa4);
  FUN_00554160(param_1,iVar1 + 0xa6);
  FUN_00554160(param_1,iVar1 + 0xa8);
  FUN_00554160(param_1,iVar1 + 0xaa);
  return;
}


// 0x059d490 (0x60 bytes)
void FUN_0059d490(undefined8 param_1,int *param_2)

{
  int iVar1;
  GPiece<16> local_30;
  
  iVar1 = *param_2;
  FUN_0059d380(param_1,local_30);
  FUN_00553b40(param_1,iVar1 + 0xac,0x15);
  return;
}


// 0x059d4f0 (0x8c bytes)
void FUN_0059d4f0(undefined8 param_1,int *param_2)

{
  int iVar1;
  GPiece<24> local_40;
  
  iVar1 = *param_2;
  FUN_0059d380(param_1,local_40);
  FUN_00596e34(param_1,local_40);
  FUN_00553b40(param_1,iVar1 + 0x1e4,0x15);
  return;
}


// 0x059d57c (0x8c bytes)
void FUN_0059d57c(undefined8 param_1,int *param_2)

{
  int iVar1;
  GPiece<24> local_40;
  
  iVar1 = *param_2;
  FUN_0059d380(param_1,local_40);
  FUN_00596e34(param_1,local_40);
  FUN_00553b40(param_1,iVar1 + 0x1e4,0x15);
  return;
}


// 0x059d608 (0x60 bytes)
void FUN_0059d608(undefined8 param_1,int *param_2)

{
  int iVar1;
  GPiece<16> local_30;
  
  iVar1 = *param_2;
  FUN_0059d380(param_1,local_30);
  FUN_00553b40(param_1,iVar1 + 0xac,0x15);
  return;
}


// 0x059d668 (0x74 bytes)
void FUN_0059d668(undefined8 param_1)

{
  GPiece<24> local_40;
  
  FUN_0059d380(param_1,local_40);
  FUN_00597960(param_1,local_40);
  return;
}


// 0x059d6dc (0x60 bytes)
void FUN_0059d6dc(undefined8 param_1,int *param_2)

{
  int iVar1;
  GPiece<16> local_30;
  
  iVar1 = *param_2;
  FUN_0059d380(param_1,local_30);
  FUN_00553b40(param_1,iVar1 + 0xac,0x15);
  return;
}


// 0x059d73c (0x60 bytes)
void FUN_0059d73c(undefined8 param_1,int *param_2)

{
  int iVar1;
  GPiece<16> local_30;
  
  iVar1 = *param_2;
  FUN_0059d380(param_1,local_30);
  FUN_00553b40(param_1,iVar1 + 0xac,0x15);
  return;
}


// 0x059d79c (0x60 bytes)
void FUN_0059d79c(undefined8 param_1,int *param_2)

{
  int iVar1;
  GPiece<16> local_30;
  
  iVar1 = *param_2;
  FUN_0059d380(param_1,local_30);
  FUN_00553b40(param_1,iVar1 + 0xac,0x15);
  return;
}


// 0x059d7fc (0x60 bytes)
void FUN_0059d7fc(undefined8 param_1,int *param_2)

{
  int iVar1;
  GPiece<16> local_30;
  
  iVar1 = *param_2;
  FUN_0059d380(param_1,local_30);
  FUN_00553b40(param_1,iVar1 + 0xac,0x15);
  return;
}


// 0x059d85c (0x8c bytes)
void FUN_0059d85c(undefined8 param_1,int *param_2)

{
  int iVar1;
  GPiece<24> local_40;
  
  iVar1 = *param_2;
  FUN_0059d380(param_1,local_40);
  FUN_00597960(param_1,local_40);
  FUN_00553b40(param_1,iVar1 + 0x1c0,0x15);
  return;
}


// 0x059d8e8 (0x94 bytes)
void FUN_0059d8e8(undefined8 param_1,int *param_2)

{
  int iVar1;
  
  iVar1 = *param_2;
  FUN_00553b40(param_1,iVar1,0x15);
  FUN_00553b40(param_1,iVar1 + 0x15,0x11);
  FUN_00553c74(param_1,0);
  FUN_00554160(param_1,iVar1 + 0x26);
  FUN_00554160(param_1,iVar1 + 0x28);
  return;
}


// 0x059d97c (0x120 bytes)
void FUN_0059d97c(undefined8 param_1,int *param_2)

{
  int iVar1;
  GPiece<24> local_40;
  
  iVar1 = *param_2;
  FUN_00553b40(param_1,iVar1,0x15);
  FUN_00553b40(param_1,iVar1 + 0x15,0x11);
  FUN_00553c74(param_1,2);
  FUN_00553f04(param_1,iVar1 + 0x28);
  FUN_00553f04(param_1,iVar1 + 0x2c);
  FUN_00553b40(param_1,iVar1 + 0x30,0x20);
  FUN_00553c74(param_1,0);
  FUN_00553f04(param_1,iVar1 + 0x50);
  FUN_0055b450(param_1,local_40);
  FUN_0055b3d0(param_1,local_40);
  return;
}


// 0x059da9c (0x88 bytes)
void FUN_0059da9c(undefined8 param_1,int *param_2)

{
  int iVar1;
  GPiece<16> local_30;
  
  iVar1 = *param_2;
  FUN_00553b40(param_1,iVar1,0x15);
  FUN_00553c74(param_1,3);
  FUN_00553f04(param_1,iVar1 + 0x18);
  FUN_0055bbe8(param_1,local_30);
  return;
}


// 0x059db24 (0x68 bytes)
void FUN_0059db24(undefined8 param_1,int *param_2)

{
  int iVar1;
  
  iVar1 = *param_2;
  FUN_00553f04(param_1,iVar1);
  FUN_00553f04(param_1,iVar1 + 4);
  FUN_00553f04(param_1,iVar1 + 8);
  return;
}


// 0x059db8c (0x68 bytes)
void FUN_0059db8c(undefined8 param_1,int *param_2)

{
  int iVar1;
  
  iVar1 = *param_2;
  FUN_00553f04(param_1,iVar1);
  FUN_00553b40(param_1,iVar1 + 4,0x15);
  FUN_00553c74(param_1,3);
  return;
}


// 0x059dbf4 (0x84 bytes)
void FUN_0059dbf4(undefined8 param_1,int *param_2)

{
  int iVar1;
  GPiece<16> local_30;
  
  iVar1 = *param_2;
  FUN_0059d380(param_1,local_30);
  FUN_00553f04(param_1,iVar1 + 0xac);
  FUN_00553b40(param_1,iVar1 + 0xb0,0x15);
  FUN_00553c74(param_1,3);
  return;
}


// 0x059dc78 (0xb0 bytes)
void FUN_0059dc78(undefined8 param_1,int *param_2)

{
  int iVar1;
  GPiece<24> local_40;
  
  iVar1 = *param_2;
  FUN_0059d380(param_1,local_40);
  FUN_00597960(param_1,local_40);
  FUN_00553f04(param_1,iVar1 + 0x1c0);
  FUN_00553b40(param_1,iVar1 + 0x1c4,0x15);
  FUN_00553c74(param_1,3);
  return;
}


// 0x059dd28 (0x84 bytes)
void FUN_0059dd28(undefined8 param_1,int *param_2)

{
  int iVar1;
  GPiece<16> local_30;
  
  iVar1 = *param_2;
  FUN_0059d380(param_1,local_30);
  FUN_00553f04(param_1,iVar1 + 0xac);
  FUN_00553b40(param_1,iVar1 + 0xb0,0x15);
  FUN_00553c74(param_1,3);
  return;
}


// 0x059ddac (0x98 bytes)
void FUN_0059ddac(undefined8 param_1,int *param_2)

{
  int iVar1;
  GPiece<16> local_30;
  
  iVar1 = *param_2;
  FUN_0059d380(param_1,local_30);
  FUN_00553f04(param_1,iVar1 + 0xac);
  FUN_00553b40(param_1,iVar1 + 0xb0,0x15);
  FUN_00554290(param_1,iVar1 + 0xc5);
  FUN_00553c74(param_1,2);
  return;
}


// 0x059de44 (0xb0 bytes)
void FUN_0059de44(undefined8 param_1,int *param_2)

{
  int iVar1;
  GPiece<24> local_40;
  
  iVar1 = *param_2;
  FUN_0059788c(param_1,local_40);
  FUN_00596e34(param_1,local_40);
  FUN_00553f04(param_1,iVar1 + 0x1e8);
  FUN_00553f04(param_1,iVar1 + 0x1ec);
  FUN_00553f04(param_1,iVar1 + 0x1f0);
  return;
}


// 0x059def4 (0x68 bytes)
void FUN_0059def4(undefined8 param_1,int *param_2)

{
  int iVar1;
  
  iVar1 = *param_2;
  FUN_00553f04(param_1,iVar1);
  FUN_00553b40(param_1,iVar1 + 4,0x15);
  FUN_00553c74(param_1,3);
  return;
}


// 0x059df5c (0xd0 bytes)
void FUN_0059df5c(undefined8 param_1,int *param_2)

{
  int iVar1;
  
  iVar1 = *param_2;
  FUN_00553b40(param_1,iVar1,0x1d0);
  FUN_00553f04(param_1,iVar1 + 0x1d0);
  FUN_00553f04(param_1,iVar1 + 0x1d4);
  FUN_00553f04(param_1,iVar1 + 0x1d8);
  FUN_00553f04(param_1,iVar1 + 0x1dc);
  FUN_00553f04(param_1,iVar1 + 0x1e0);
  FUN_00553b40(param_1,iVar1 + 0x1e4,0x15);
  FUN_00553c74(param_1,3);
  return;
}


// 0x059e02c (0xd0 bytes)
void FUN_0059e02c(undefined8 param_1,int *param_2)

{
  int iVar1;
  
  iVar1 = *param_2;
  FUN_00553b40(param_1,iVar1,0x1d0);
  FUN_00553f04(param_1,iVar1 + 0x1d0);
  FUN_00553f04(param_1,iVar1 + 0x1d4);
  FUN_00553f04(param_1,iVar1 + 0x1d8);
  FUN_00553f04(param_1,iVar1 + 0x1dc);
  FUN_00553f04(param_1,iVar1 + 0x1e0);
  FUN_00553b40(param_1,iVar1 + 0x1e4,0x15);
  FUN_00553c74(param_1,3);
  return;
}


// 0x059e0fc (0x84 bytes)
void FUN_0059e0fc(undefined8 param_1,int *param_2)

{
  int iVar1;
  GPiece<16> local_30;
  
  iVar1 = *param_2;
  FUN_0059d380(param_1,local_30);
  FUN_00553f04(param_1,iVar1 + 0xac);
  FUN_00553b40(param_1,iVar1 + 0xb0,0x15);
  FUN_00553c74(param_1,3);
  return;
}


// 0x059e180 (0xd0 bytes)
void FUN_0059e180(undefined8 param_1,int *param_2)

{
  int iVar1;
  
  iVar1 = *param_2;
  FUN_00553b40(param_1,iVar1,0x1d0);
  FUN_00553f04(param_1,iVar1 + 0x1d0);
  FUN_00553f04(param_1,iVar1 + 0x1d4);
  FUN_00553f04(param_1,iVar1 + 0x1d8);
  FUN_00553f04(param_1,iVar1 + 0x1dc);
  FUN_00553f04(param_1,iVar1 + 0x1e0);
  FUN_00553b40(param_1,iVar1 + 0x1e4,0x15);
  FUN_00553c74(param_1,3);
  return;
}


// 0x059e250 (0xa4 bytes)
void FUN_0059e250(undefined8 param_1,int *param_2)

{
  int iVar1;
  
  iVar1 = *param_2;
  FUN_00553f04(param_1,iVar1);
  FUN_00553f04(param_1,iVar1 + 4);
  FUN_00553f04(param_1,iVar1 + 8);
  FUN_00553f04(param_1,iVar1 + 0xc);
  FUN_00553b40(param_1,iVar1 + 0x10,0x15);
  FUN_00553c74(param_1,3);
  return;
}


// 0x059e2f4 (0x84 bytes)
void FUN_0059e2f4(undefined8 param_1,int *param_2)

{
  int iVar1;
  GPiece<16> local_30;
  
  iVar1 = *param_2;
  FUN_0059d380(param_1,local_30);
  FUN_00553c74(param_1,4);
  FUN_00553f04(param_1,iVar1 + 0xb0);
  FUN_00553b40(param_1,iVar1 + 0xb4,0x15);
  return;
}


// 0x059e378 (0x84 bytes)
void FUN_0059e378(undefined8 param_1,int *param_2)

{
  int iVar1;
  GPiece<16> local_30;
  
  iVar1 = *param_2;
  FUN_0059d380(param_1,local_30);
  FUN_00553f04(param_1,iVar1 + 0xac);
  FUN_00553b40(param_1,iVar1 + 0xb0,0x15);
  FUN_00553c74(param_1,3);
  return;
}


// 0x059e3fc (0xc0 bytes)
void FUN_0059e3fc(undefined8 param_1,int *param_2)

{
  int iVar1;
  
  iVar1 = *param_2;
  FUN_00553b40(param_1,iVar1,0x15);
  FUN_00553c74(param_1,3);
  FUN_00553f04(param_1,iVar1 + 0x18);
  FUN_00553f04(param_1,iVar1 + 0x1c);
  FUN_00553f04(param_1,iVar1 + 0x20);
  FUN_00553b40(param_1,iVar1 + 0x24,8);
  FUN_00553b40(param_1,iVar1 + 0x2c,8);
  return;
}


// 0x059e4bc (0x208 bytes)
void FUN_0059e4bc(undefined8 param_1,int *param_2)

{
  int iVar1;
  uint uVar2;
  
  iVar1 = *param_2;
  FUN_00553b40(param_1,iVar1,0x15);
  FUN_00553f04(param_1,iVar1 + 0x18);
  FUN_00553f04(param_1,iVar1 + 0x1c);
  uVar2 = *(uint *)(iVar1 + 0x1c);
  if ((uVar2 & 4) != 0) {
    FUN_00553f04(param_1,iVar1 + 0x20);
    uVar2 = *(uint *)(iVar1 + 0x1c);
  }
  if ((uVar2 & 8) != 0) {
    FUN_00553b40(param_1,iVar1 + 0x24,0x80);
    uVar2 = *(uint *)(iVar1 + 0x1c);
  }
  if ((uVar2 & 0x10) != 0) {
    FUN_00553b40(param_1,iVar1 + 0xa4,0x80);
    FUN_00553f04(param_1,iVar1 + 0x124);
    uVar2 = *(uint *)(iVar1 + 0x1c);
  }
  if ((uVar2 & 0x20) != 0) {
    FUN_00553b40(param_1,iVar1 + 0x128,0x100);
    uVar2 = *(uint *)(iVar1 + 0x1c);
  }
  if ((uVar2 & 0x40) != 0) {
    FUN_00553f04(param_1,iVar1 + 0x228);
    FUN_00553f04(param_1,iVar1 + 0x22c);
    FUN_00553f04(param_1,iVar1 + 0x230);
    uVar2 = *(uint *)(iVar1 + 0x1c);
  }
  if ((uVar2 & 0x80) != 0) {
    FUN_00553b40(param_1,iVar1 + 0x234,8);
    FUN_00553b40(param_1,iVar1 + 0x23c,0x80);
    uVar2 = *(uint *)(iVar1 + 0x1c);
  }
  if ((uVar2 & 0x100) != 0) {
    FUN_00553b40(param_1,iVar1 + 700,0x100);
  }
  FUN_00554290(param_1,iVar1 + 0x43c);
  return;
}


// 0x059e6c4 (0xe0 bytes)
void FUN_0059e6c4(undefined8 param_1,int *param_2)

{
  int iVar1;
  
  iVar1 = *param_2;
  FUN_00553b40(param_1,iVar1,0x15);
  FUN_00553c74(param_1,3);
  FUN_00553f04(param_1,iVar1 + 0x18);
  FUN_00553f04(param_1,iVar1 + 0x1c);
  FUN_00553f04(param_1,iVar1 + 0x20);
  FUN_00553f04(param_1,iVar1 + 0x24);
  FUN_00553f04(param_1,iVar1 + 0x28);
  FUN_00553f04(param_1,iVar1 + 0x2c);
  FUN_00553f04(param_1,iVar1 + 0x30);
  return;
}


// 0x059e7a4 (0xe0 bytes)
void FUN_0059e7a4(undefined8 param_1,int *param_2)

{
  int iVar1;
  
  iVar1 = *param_2;
  FUN_00553b40(param_1,iVar1,0x15);
  FUN_00553c74(param_1,3);
  FUN_00553f04(param_1,iVar1 + 0x18);
  FUN_00553f04(param_1,iVar1 + 0x1c);
  FUN_00553f04(param_1,iVar1 + 0x20);
  FUN_00553f04(param_1,iVar1 + 0x24);
  FUN_00553f04(param_1,iVar1 + 0x28);
  FUN_00553f04(param_1,iVar1 + 0x2c);
  FUN_00553f04(param_1,iVar1 + 0x30);
  return;
}


// 0x059e884 (0xcc bytes)
void FUN_0059e884(undefined8 param_1,int *param_2)

{
  int iVar1;
  
  iVar1 = *param_2;
  FUN_00553b40(param_1,iVar1,0x15);
  FUN_00553c74(param_1,3);
  FUN_00553f04(param_1,iVar1 + 0x18);
  FUN_00553f04(param_1,iVar1 + 0x1c);
  FUN_00553f04(param_1,iVar1 + 0x20);
  FUN_00553f04(param_1,iVar1 + 0x24);
  FUN_00553f04(param_1,iVar1 + 0x28);
  FUN_00553f04(param_1,iVar1 + 0x2c);
  return;
}


// 0x059e950 (0x7c bytes)
void FUN_0059e950(undefined8 param_1,int *param_2)

{
  int iVar1;
  
  iVar1 = *param_2;
  FUN_00553b40(param_1,iVar1,0x15);
  FUN_00553c74(param_1,3);
  FUN_00553f04(param_1,iVar1 + 0x18);
  FUN_00553f04(param_1,iVar1 + 0x1c);
  return;
}


// 0x059e9cc (0x90 bytes)
void FUN_0059e9cc(undefined8 param_1,int *param_2)

{
  int iVar1;
  
  iVar1 = *param_2;
  FUN_00553b40(param_1,iVar1,0x15);
  FUN_00553c74(param_1,3);
  FUN_00553f04(param_1,iVar1 + 0x18);
  FUN_00553f04(param_1,iVar1 + 0x1c);
  FUN_00553f04(param_1,iVar1 + 0x20);
  return;
}


// 0x059ea5c (0x7c bytes)
void FUN_0059ea5c(undefined8 param_1,int *param_2)

{
  int iVar1;
  
  iVar1 = *param_2;
  FUN_00553b40(param_1,iVar1,0x15);
  FUN_00553c74(param_1,3);
  FUN_00553f04(param_1,iVar1 + 0x18);
  FUN_00553f04(param_1,iVar1 + 0x1c);
  return;
}


// 0x059ead8 (0x7c bytes)
void FUN_0059ead8(undefined8 param_1,int *param_2)

{
  int iVar1;
  
  iVar1 = *param_2;
  FUN_00553b40(param_1,iVar1,0x15);
  FUN_00553c74(param_1,3);
  FUN_00553f04(param_1,iVar1 + 0x18);
  FUN_00553f04(param_1,iVar1 + 0x1c);
  return;
}


// 0x059eb54 (0xf0 bytes)
void FUN_0059eb54(undefined8 param_1,int *param_2)

{
  int iVar1;
  
  iVar1 = *param_2;
  FUN_00553b40(param_1,iVar1,0x15);
  FUN_00553c74(param_1,3);
  FUN_00553f04(param_1,iVar1 + 0x18);
  FUN_00553f04(param_1,iVar1 + 0x1c);
  FUN_00553f04(param_1,iVar1 + 0x20);
  FUN_00553f04(param_1,iVar1 + 0x24);
  FUN_00553f04(param_1,iVar1 + 0x28);
  FUN_00553f04(param_1,iVar1 + 0x2c);
  FUN_00554290(param_1,iVar1 + 0x30);
  FUN_00553c74(param_1,3);
  return;
}


// 0x059ec44 (0xc8 bytes)
void FUN_0059ec44(undefined8 param_1,int *param_2)

{
  int iVar1;
  
  iVar1 = *param_2;
  FUN_00553b40(param_1,iVar1,0x15);
  FUN_00553c74(param_1,3);
  FUN_00553f04(param_1,iVar1 + 0x18);
  FUN_00553f04(param_1,iVar1 + 0x1c);
  FUN_00553f04(param_1,iVar1 + 0x20);
  FUN_00553f04(param_1,iVar1 + 0x24);
  FUN_00554290(param_1,iVar1 + 0x28);
  FUN_00553c74(param_1,3);
  return;
}


// 0x059ed0c (0x128 bytes)
void FUN_0059ed0c(undefined8 param_1,int *param_2)

{
  int iVar1;
  
  iVar1 = *param_2;
  FUN_00553b40(param_1,iVar1,0x15);
  FUN_00553b40(param_1,iVar1 + 0x15,0x11);
  FUN_00553c74(param_1,2);
  FUN_00553f04(param_1,iVar1 + 0x28);
  FUN_00553f04(param_1,iVar1 + 0x2c);
  FUN_00553b40(param_1,iVar1 + 0x30,0x40);
  FUN_00553b40(param_1,iVar1 + 0x70,0x20);
  FUN_00553f04(param_1,iVar1 + 0x90);
  FUN_00553f04(param_1,iVar1 + 0x94);
  FUN_00553f04(param_1,iVar1 + 0x98);
  FUN_00553f04(param_1,iVar1 + 0x9c);
  FUN_00553f04(param_1,iVar1 + 0xa0);
  return;
}


// 0x059ee34 (0x7c bytes)
void FUN_0059ee34(undefined8 param_1,int *param_2)

{
  int iVar1;
  
  iVar1 = *param_2;
  FUN_00553b40(param_1,iVar1,0x15);
  FUN_00553c74(param_1,3);
  FUN_00553f04(param_1,iVar1 + 0x18);
  FUN_00553f04(param_1,iVar1 + 0x1c);
  return;
}


// 0x059eeb0 (0x7c bytes)
void FUN_0059eeb0(undefined8 param_1,int *param_2)

{
  int iVar1;
  
  iVar1 = *param_2;
  FUN_00553b40(param_1,iVar1,0x15);
  FUN_00553c74(param_1,3);
  FUN_00553f04(param_1,iVar1 + 0x18);
  FUN_00553f04(param_1,iVar1 + 0x1c);
  return;
}


// 0x059ef2c (0x7c bytes)
void FUN_0059ef2c(undefined8 param_1,int *param_2)

{
  int iVar1;
  
  iVar1 = *param_2;
  FUN_00553b40(param_1,iVar1,0x15);
  FUN_00553c74(param_1,3);
  FUN_00553f04(param_1,iVar1 + 0x18);
  FUN_00553f04(param_1,iVar1 + 0x1c);
  return;
}


// 0x059efa8 (0x240 bytes)
void FUN_0059efa8(undefined8 param_1,int *param_2)

{
  int iVar1;
  
  iVar1 = *param_2;
  FUN_00553b40(param_1,iVar1,0x15);
  FUN_00553c74(param_1,3);
  FUN_00553f04(param_1,iVar1 + 0x18);
  FUN_00553f04(param_1,iVar1 + 0x1c);
  FUN_00553f04(param_1,iVar1 + 0x20);
  FUN_00553f04(param_1,iVar1 + 0x24);
  FUN_00553b40(param_1,iVar1 + 0x28,0x40);
  FUN_00553b40(param_1,iVar1 + 0x68,0x20);
  FUN_00553b40(param_1,iVar1 + 0x88,0x20);
  FUN_00553b40(param_1,iVar1 + 0xa8,0x100);
  FUN_00553c74(param_1,0);
  FUN_00553f04(param_1,iVar1 + 0x1a8);
  FUN_00553f04(param_1,iVar1 + 0x1ac);
  FUN_00553f04(param_1,iVar1 + 0x1b0);
  FUN_00553f04(param_1,iVar1 + 0x1b4);
  FUN_00553f04(param_1,iVar1 + 0x1b8);
  FUN_00553f04(param_1,iVar1 + 0x1bc);
  FUN_00553f04(param_1,iVar1 + 0x1c0);
  FUN_00553f04(param_1,iVar1 + 0x1c4);
  FUN_00553f04(param_1,iVar1 + 0x1c8);
  FUN_00553f04(param_1,iVar1 + 0x1cc);
  FUN_00553f04(param_1,iVar1 + 0x1d0);
  FUN_00553f04(param_1,iVar1 + 0x1d4);
  FUN_00553f04(param_1,iVar1 + 0x1d8);
  FUN_00553f04(param_1,iVar1 + 0x1dc);
  FUN_00553f04(param_1,iVar1 + 0x1e0);
  return;
}


// 0x059f1e8 (0x15c bytes)
void FUN_0059f1e8(undefined8 param_1,int *param_2)

{
  int iVar1;
  
  iVar1 = *param_2;
  FUN_00553b40(param_1,iVar1,0x15);
  FUN_00553c74(param_1,3);
  FUN_00553f04(param_1,iVar1 + 0x18);
  FUN_00553f04(param_1,iVar1 + 0x1c);
  FUN_00553b40(param_1,iVar1 + 0x20,0x40);
  FUN_00553b40(param_1,iVar1 + 0x60,0x20);
  FUN_00553c74(param_1,0);
  FUN_00553f04(param_1,iVar1 + 0x80);
  FUN_00553f04(param_1,iVar1 + 0x84);
  FUN_00553f04(param_1,iVar1 + 0x88);
  FUN_00553f04(param_1,iVar1 + 0x8c);
  FUN_00553f04(param_1,iVar1 + 0x90);
  FUN_00553f04(param_1,iVar1 + 0x94);
  FUN_00553f04(param_1,iVar1 + 0x98);
  FUN_00553f04(param_1,iVar1 + 0x9c);
  return;
}


// 0x059f344 (0x17c bytes)
void FUN_0059f344(undefined8 param_1,int *param_2)

{
  int iVar1;
  
  iVar1 = *param_2;
  FUN_00553b40(param_1,iVar1,0x15);
  FUN_00553c74(param_1,3);
  FUN_00553f04(param_1,iVar1 + 0x18);
  FUN_00553f04(param_1,iVar1 + 0x1c);
  FUN_00554160(param_1,iVar1 + 0x20);
  FUN_00554160(param_1,iVar1 + 0x22);
  FUN_00554160(param_1,iVar1 + 0x24);
  FUN_00553c74(param_1,2);
  FUN_00553f04(param_1,iVar1 + 0x28);
  FUN_00553f04(param_1,iVar1 + 0x2c);
  FUN_00553f04(param_1,iVar1 + 0x30);
  FUN_00553f04(param_1,iVar1 + 0x34);
  FUN_00553f04(param_1,iVar1 + 0x38);
  FUN_00553f04(param_1,iVar1 + 0x3c);
  FUN_00553b40(param_1,iVar1 + 0x40,0x40);
  FUN_00554290(param_1,iVar1 + 0x80);
  FUN_00553c74(param_1,3);
  return;
}


// 0x059f4c0 (0x7c bytes)
void FUN_0059f4c0(undefined8 param_1,int *param_2)

{
  int iVar1;
  
  iVar1 = *param_2;
  FUN_00553b40(param_1,iVar1,0x15);
  FUN_00553c74(param_1,1);
  FUN_00554160(param_1,iVar1 + 0x16);
  FUN_00554160(param_1,iVar1 + 0x18);
  return;
}


// 0x059f53c (0x68 bytes)
void FUN_0059f53c(undefined8 param_1,int *param_2)

{
  int iVar1;
  
  iVar1 = *param_2;
  FUN_00553b40(param_1,iVar1,0x15);
  FUN_00553c74(param_1,1);
  FUN_00554160(param_1,iVar1 + 0x16);
  return;
}


// 0x059f5a4 (0x234 bytes)
void FUN_0059f5a4(undefined8 param_1,int *param_2)

{
  int iVar1;
  
  iVar1 = *param_2;
  FUN_00553b40(param_1,iVar1,0x15);
  FUN_00553c74(param_1,3);
  FUN_00553f04(param_1,iVar1 + 0x18);
  FUN_00553f04(param_1,iVar1 + 0x1c);
  FUN_00554160(param_1,iVar1 + 0x20);
  FUN_00554160(param_1,iVar1 + 0x22);
  FUN_00554160(param_1,iVar1 + 0x24);
  FUN_00553c74(param_1,2);
  FUN_00553f04(param_1,iVar1 + 0x28);
  FUN_00553f04(param_1,iVar1 + 0x2c);
  FUN_00553f04(param_1,iVar1 + 0x30);
  FUN_00553f04(param_1,iVar1 + 0x34);
  FUN_00553f04(param_1,iVar1 + 0x38);
  FUN_00553f04(param_1,iVar1 + 0x3c);
  FUN_00553f04(param_1,iVar1 + 0x40);
  FUN_00553f04(param_1,iVar1 + 0x44);
  FUN_00553f04(param_1,iVar1 + 0x48);
  FUN_00553f04(param_1,iVar1 + 0x4c);
  FUN_00553f04(param_1,iVar1 + 0x50);
  FUN_00553f04(param_1,iVar1 + 0x54);
  FUN_00553f04(param_1,iVar1 + 0x58);
  FUN_00553f04(param_1,iVar1 + 0x5c);
  FUN_00553b40(param_1,iVar1 + 0x60,0x40);
  FUN_00553b40(param_1,iVar1 + 0xa0,0x100);
  FUN_00554290(param_1,iVar1 + 0x1a0);
  FUN_00553c74(param_1,3);
  return;
}


// 0x059f7d8 (0x7c bytes)
void FUN_0059f7d8(undefined8 param_1,int *param_2)

{
  int iVar1;
  
  iVar1 = *param_2;
  FUN_00553b40(param_1,iVar1,0x15);
  FUN_00553c74(param_1,1);
  FUN_00554160(param_1,iVar1 + 0x16);
  FUN_00554160(param_1,iVar1 + 0x18);
  return;
}


// 0x059f854 (0xa8 bytes)
void FUN_0059f854(undefined8 param_1,int *param_2)

{
  int iVar1;
  
  iVar1 = *param_2;
  FUN_00553b40(param_1,iVar1,0x15);
  FUN_00553b40(param_1,iVar1 + 0x15,0x11);
  FUN_00553c74(param_1,2);
  FUN_00553f04(param_1,iVar1 + 0x28);
  FUN_00554160(param_1,iVar1 + 0x2c);
  FUN_00554160(param_1,iVar1 + 0x2e);
  return;
}


// 0x059f8fc (0xc4 bytes)
void FUN_0059f8fc(undefined8 param_1,int *param_2)

{
  int iVar1;
  GPiece<24> local_40;
  
  iVar1 = *param_2;
  FUN_0059d380(param_1,local_40);
  FUN_00596e34(param_1,local_40);
  FUN_00553f04(param_1,iVar1 + 0x1e4);
  FUN_00553b40(param_1,iVar1 + 0x1e8,0x15);
  FUN_00554290(param_1,iVar1 + 0x1fd);
  FUN_00553c74(param_1,2);
  return;
}


// 0x059f9c0 (0xb0 bytes)
void FUN_0059f9c0(undefined8 param_1,int *param_2)

{
  int iVar1;
  GPiece<16> local_30;
  
  iVar1 = *param_2;
  FUN_0059d380(param_1,local_30);
  FUN_00553b40(param_1,iVar1 + 0xac,0x100);
  FUN_00553f04(param_1,iVar1 + 0x1ac);
  FUN_00553b40(param_1,iVar1 + 0x1b0,0x15);
  FUN_00554290(param_1,iVar1 + 0x1c5);
  FUN_00553c74(param_1,2);
  return;
}


// 0x059fa70 (0x1d8 bytes)
int FUN_0059fa70(int param_1,undefined4 *param_2,undefined4 *param_3,undefined4 *param_4,
                undefined4 param_5)

{
  ulonglong uVar1;
  int iVar2;
  ulonglong uVar3;
  undefined8 uVar4;
  int iVar5;
  ulonglong local_f0 [5];
  ulonglong auStack_c8 [9];
  undefined4 local_80;
  undefined4 local_7c;
  undefined4 local_78;
  int local_74;
  int local_70;
  undefined4 local_6c;
  
  uVar3 = ZEXT48(&stack0x00000000);
  if ((((param_1 == 0) || (param_2 == (undefined4 *)0x0)) || (param_3 == (undefined4 *)0x0)) ||
     (param_4 == (undefined4 *)0x0)) {
    iVar5 = -1;
  }
  else {
    local_74 = 0;
    iVar2 = -(*(int *)(param_1 + 4) + 0x1eU & 0xfffffff0);
    *(ulonglong *)((int)local_f0 + iVar2) = uVar3;
    local_70 = (int)&local_80 + iVar2;
    local_f0[0] = uVar3;
    iVar5 = FUN_005a0648(param_1,uVar3 - 0x80);
    if (iVar5 != -1) {
      *(ulonglong *)((int)auStack_c8 + iVar2) = ZEXT48(&TOC_BASE);
      (*(code *)*param_2)(local_80,param_5);
      uVar4 = *(undefined8 *)((int)auStack_c8 + iVar2);
      uVar1 = uVar3 - 0x70 & 0xffffffff;
      do {
        local_6c = *(undefined4 *)(param_1 + 4);
        iVar5 = FUN_005a06cc(param_1,iVar5,uVar3 - 0x7c & 0xffffffff,uVar3 - 0x78 & 0xffffffff,uVar1
                             ,uVar3 - 0x74 & 0xffffffff);
        if (iVar5 == -1) {
          return -1;
        }
        *(undefined8 *)((int)auStack_c8 + iVar2) = uVar4;
        (*(code *)*param_3)(local_78,local_7c,uVar1,param_5);
        uVar4 = *(undefined8 *)((int)auStack_c8 + iVar2);
      } while (local_74 == 0);
      *(undefined8 *)((int)auStack_c8 + iVar2) = uVar4;
      (*(code *)*param_4)(local_80,param_5);
    }
  }
  return iVar5;
}


// 0x059fc48 (0xa8 bytes)
int FUN_0059fc48(undefined8 param_1,int param_2)

{
  int iVar1;
  GPiece<16> local_20;
  
  iVar1 = FUN_005a0ab8(param_1,8);
  if (iVar1 != -1) {
    iVar1 = FUN_005a0b48(param_1,iVar1,9,0x18,local_20);
    if (iVar1 != -1) {
      iVar1 = FUN_005a0b48(param_1,iVar1,2,0x1c,*(undefined4 *)(param_2 + 4));
    }
  }
  return iVar1;
}


// 0x059fcf0 (0xe4 bytes)
int FUN_0059fcf0(undefined8 param_1,undefined4 *param_2)

{
  int iVar1;
  GPiece<4> local_40;
  undefined1 *local_3c;
  undefined4 local_38;
  
  iVar1 = FUN_005a0ab8(param_1,7);
  if (iVar1 != -1) {
    local_40[0] = (undefined1)*param_2;
    local_38 = 1;
    local_3c = local_40;
    iVar1 = FUN_005a0b48(param_1,iVar1,0,0x14,&local_3c);
    if (iVar1 != -1) {
      local_40[0] = (undefined1)param_2[1];
      local_38 = 1;
      local_3c = local_40;
      iVar1 = FUN_005a0b48(param_1,iVar1,0,0x17,&local_3c);
    }
  }
  return iVar1;
}


// 0x059fdd4 (0x360 bytes)
int FUN_0059fdd4(undefined8 param_1,undefined4 *param_2)

{
  uint uVar1;
  int iVar2;
  GPiece<4> local_50;
  undefined4 *local_4c;
  undefined4 local_48;
  
  iVar2 = FUN_005a0ab8(param_1,*param_2);
  if (iVar2 != -1) {
    local_50[0] = (undefined1)param_2[1];
    local_48 = 1;
    local_4c = (undefined4 *)local_50;
    iVar2 = FUN_005a0b48(param_1,iVar2,0,0xc,&local_4c);
    if (iVar2 != -1) {
      local_50[0] = (undefined1)param_2[2];
      local_48 = 1;
      local_4c = (undefined4 *)local_50;
      iVar2 = FUN_005a0b48(param_1,iVar2,0,8,&local_4c);
      if (iVar2 != -1) {
        local_4c = param_2 + 3;
        local_48 = 4;
        iVar2 = FUN_005a0b48(param_1,iVar2,8,9,&local_4c);
        if (iVar2 != -1) {
          uVar1 = param_2[1];
          if ((uVar1 & 4) != 0) {
            local_50[0] = (undefined1)param_2[5];
            local_48 = 1;
            local_4c = (undefined4 *)local_50;
            iVar2 = FUN_005a0b48(param_1,iVar2,0,0x13,&local_4c);
            if (iVar2 == -1) {
              return -1;
            }
            uVar1 = param_2[1];
          }
          if ((uVar1 & 2) != 0) {
            local_50[0] = (undefined1)param_2[4];
            local_48 = 1;
            local_4c = (undefined4 *)local_50;
            iVar2 = FUN_005a0b48(param_1,iVar2,0,0x12,&local_4c);
            if (iVar2 == -1) {
              return -1;
            }
          }
          local_4c = param_2 + 6;
          local_48 = 4;
          iVar2 = FUN_005a0b48(param_1,iVar2,8,0,&local_4c);
          if (iVar2 != -1) {
            local_4c = param_2 + 7;
            local_48 = 4;
            iVar2 = FUN_005a0b48(param_1,iVar2,8,2,&local_4c);
            if (iVar2 != -1) {
              local_4c = param_2 + 8;
              local_48 = 4;
              iVar2 = FUN_005a0b48(param_1,iVar2,8,0,&local_4c);
              if (iVar2 != -1) {
                local_4c = param_2 + 9;
                local_48 = 4;
                iVar2 = FUN_005a0b48(param_1,iVar2,8,2,&local_4c);
                if (iVar2 != -1) {
                  local_50[0] = *(undefined1 *)(param_2 + 0xb);
                  local_48 = 1;
                  local_4c = (undefined4 *)local_50;
                  iVar2 = FUN_005a0b48(param_1,iVar2,0,0x15,&local_4c);
                  if (iVar2 != -1) {
                    local_50[0] = *(undefined1 *)((int)param_2 + 0x2d);
                    local_48 = 1;
                    local_4c = (undefined4 *)local_50;
                    iVar2 = FUN_005a0b48(param_1,iVar2,0,0x16,&local_4c);
                    if ((iVar2 != -1) &&
                       (iVar2 = FUN_005a0b48(param_1,iVar2,3,3,param_2[0xc]), iVar2 != -1)) {
                      local_4c = param_2 + 10;
                      local_48 = 4;
                      iVar2 = FUN_005a0b48(param_1,iVar2,8,0x1b,&local_4c);
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
  return iVar2;
}


// 0x05a0134 (0xe4 bytes)
int FUN_005a0134(undefined8 param_1,undefined4 *param_2)

{
  int iVar1;
  GPiece<4> local_40;
  undefined1 *local_3c;
  undefined4 local_38;
  
  iVar1 = FUN_005a0ab8(param_1,2);
  if (iVar1 != -1) {
    local_40[0] = (undefined1)*param_2;
    local_38 = 1;
    local_3c = local_40;
    iVar1 = FUN_005a0b48(param_1,iVar1,0,0x14,&local_3c);
    if (iVar1 != -1) {
      local_40[0] = (undefined1)param_2[1];
      local_38 = 1;
      local_3c = local_40;
      iVar1 = FUN_005a0b48(param_1,iVar1,0,0x17,&local_3c);
    }
  }
  return iVar1;
}


// 0x05a0218 (0x2d8 bytes)
int FUN_005a0218(undefined8 param_1,undefined4 *param_2)

{
  int iVar1;
  GPiece<4> local_50;
  undefined4 *local_4c;
  undefined4 local_48;
  
  iVar1 = FUN_005a0ab8(param_1,*param_2);
  if (iVar1 != -1) {
    local_50[0] = (undefined1)param_2[1];
    local_48 = 1;
    local_4c = (undefined4 *)local_50;
    iVar1 = FUN_005a0b48(param_1,iVar1,0,0x14,&local_4c);
    if (iVar1 != -1) {
      local_4c = param_2 + 2;
      local_48 = 4;
      iVar1 = FUN_005a0b48(param_1,iVar1,8,0xf,&local_4c);
      if (iVar1 != -1) {
        local_4c = param_2 + 3;
        local_48 = 4;
        iVar1 = FUN_005a0b48(param_1,iVar1,8,0x10,&local_4c);
        if (iVar1 != -1) {
          local_50[0] = (undefined1)param_2[4];
          local_48 = 1;
          local_4c = (undefined4 *)local_50;
          iVar1 = FUN_005a0b48(param_1,iVar1,0,0xd,&local_4c);
          if (iVar1 != -1) {
            local_50[0] = (undefined1)param_2[5];
            local_48 = 1;
            local_4c = (undefined4 *)local_50;
            iVar1 = FUN_005a0b48(param_1,iVar1,0,0xb,&local_4c);
            if (iVar1 != -1) {
              local_50[0] = (undefined1)param_2[6];
              local_48 = 1;
              local_4c = (undefined4 *)local_50;
              iVar1 = FUN_005a0b48(param_1,iVar1,0,10,&local_4c);
              if ((((iVar1 != -1) &&
                   (iVar1 = FUN_005a0b48(param_1,iVar1,3,3,param_2[9]), iVar1 != -1)) &&
                  (iVar1 = FUN_005a0b48(param_1,iVar1,3,5,param_2[10]), iVar1 != -1)) &&
                 ((iVar1 = FUN_005a0b48(param_1,iVar1,3,6,param_2[0xb]), iVar1 != -1 &&
                  (iVar1 = FUN_005a0b48(param_1,iVar1,3,0x1a,param_2[0xc]), iVar1 != -1)))) {
                local_4c = param_2 + 7;
                local_48 = 4;
                iVar1 = FUN_005a0b48(param_1,iVar1,8,0x19,&local_4c);
                if (iVar1 != -1) {
                  local_4c = param_2 + 8;
                  local_48 = 4;
                  iVar1 = FUN_005a0b48(param_1,iVar1,9,0x18,&local_4c);
                }
              }
            }
          }
        }
      }
    }
  }
  return iVar1;
}


// 0x05a04f0 (0xc0 bytes)
undefined8 FUN_005a04f0(int *param_1,uint param_2)

{
  ulonglong uVar1;
  int iVar3;
  undefined8 uVar2;
  ushort local_30 [8];
  
  if ((((param_1 != (int *)0x0) && (*param_1 != 0)) && (param_1[1] != 0)) &&
     (param_2 < (uint)param_1[1])) {
    iVar3 = FUN_00552728(*param_1 + param_2,local_30);
    if ((iVar3 == 0) && (uVar1 = ((ulonglong)local_30[0] << 0x20) >> 0x2c, uVar1 < 0x10)) {
                    /* WARNING: Could not recover jumptable at 0x005a05ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar2 = (*(code *)(PTR_DAT_0071be98 + *(int *)(PTR_DAT_0071be98 + (int)(uVar1 << 2))))();
      return uVar2;
    }
  }
  return 0xffffffffffffffff;
}


// 0x05a0648 (0x84 bytes)
undefined4 FUN_005a0648(int *param_1,uint *param_2)

{
  int iVar1;
  ushort local_20 [12];
  
  if ((((param_1 != (int *)0x0) && (*param_1 != 0)) && (param_1[1] != 0)) &&
     (((param_2 != (uint *)0x0 && (iVar1 = FUN_00552728(*param_1,local_20), iVar1 == 0)) &&
      (*param_2 = (uint)local_20[0], local_20[0] < 9)))) {
    return 4;
  }
  return 0xffffffff;
}


// 0x05a06cc (0x17c bytes)
undefined8
FUN_005a06cc(int *param_1,uint param_2,uint *param_3,uint *param_4,int *param_5,undefined4 *param_6)

{
  ulonglong uVar1;
  int iVar3;
  int iVar4;
  undefined8 uVar2;
  ushort local_60;
  ushort local_5e [11];
  
  if ((param_1 != (int *)0x0) && (iVar4 = *param_1, iVar4 != 0)) {
    if ((((param_1[1] != 0) &&
         ((((3 < (int)param_2 && (param_2 < (uint)param_1[1])) && (param_3 != (uint *)0x0)) &&
          ((param_4 != (uint *)0x0 && (param_5 != (int *)0x0)))))) && (*param_5 != 0)) &&
       ((param_5[1] != 0 && (param_6 != (undefined4 *)0x0)))) {
      *param_6 = 0;
      iVar3 = FUN_00552728(iVar4 + 2,local_5e);
      if ((iVar3 == 0) &&
         (((uint)local_5e[0] <= (uint)param_1[1] &&
          (iVar4 = FUN_00552728(iVar4 + param_2,&local_60), iVar4 == 0)))) {
        uVar1 = ((ulonglong)local_60 << 0x20) >> 0x2c;
        *param_4 = local_60 & 0xfff;
        *param_3 = (uint)(local_60 >> 0xc);
        if (uVar1 < 0xc) {
                    /* WARNING: Could not recover jumptable at 0x005a0844. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          uVar2 = (*(code *)(PTR_DAT_0071be9c + *(int *)(PTR_DAT_0071be9c + (int)(uVar1 << 2))))();
          return uVar2;
        }
      }
    }
  }
  return 0xffffffffffffffff;
}


// 0x05a0ab8 (0x90 bytes)
undefined4 FUN_005a0ab8(int *param_1,uint param_2)

{
  int iVar1;
  int iVar2;
  
  if ((((param_1 != (int *)0x0) && (iVar2 = *param_1, iVar2 != 0)) && (3 < (uint)param_1[1])) &&
     (param_2 < 9)) {
    iVar1 = FUN_00552704(iVar2,param_2 & 0xffff);
    if ((iVar1 == 0) && (iVar2 = FUN_00552704(iVar2 + 2,0), iVar2 == 0)) {
      return 4;
    }
  }
  return 0xffffffff;
}


// 0x05a0b48 (0xec bytes)
undefined4 FUN_005a0b48(int *param_1,undefined4 param_2,uint param_3,uint param_4,int *param_5)

{
  undefined4 uVar1;
  
  if ((((param_1 != (int *)0x0) && (*param_1 != 0)) && (3 < (uint)param_1[1])) &&
     ((param_3 < 0x10 && (param_4 < 0x1d)))) {
    if (param_5 == (int *)0x0) {
      return param_2;
    }
    if (*param_5 == 0) {
      return param_2;
    }
    if (param_5[1] == 0) {
      return param_2;
    }
    if (param_3 < 0xc) {
                    /* WARNING: Could not recover jumptable at 0x005a0c30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar1 = (*(code *)(PTR_DAT_0071bea0 + *(int *)(PTR_DAT_0071bea0 + param_3 * 4)))
                        (param_1,((ulonglong)param_3 & 0xf) << 0xc | (ulonglong)param_4 & 0xfff);
      return uVar1;
    }
  }
  return 0xffffffff;
}


// 0x05a0fa0 (0x1c bytes)
int FUN_005a0fa0(int param_1)

{
  int iVar1;
  
  iVar1 = 0;
  if (param_1 != 0) {
    iVar1 = *(int *)(param_1 + 0x1dc) + 0x1e4;
  }
  return iVar1;
}


// 0x05a0fbc (0x60 bytes)
int FUN_005a0fbc(int param_1)

{
  int iVar1;
  
  iVar1 = 0;
  if ((param_1 != 0) && (iVar1 = 0x24, *(int *)(param_1 + 0x18) == 6)) {
    iVar1 = FUN_005a0fa0(*(undefined4 *)(param_1 + 0x20));
    return iVar1 + 0x24;
  }
  return iVar1;
}


// 0x05a101c (0x160 bytes)
void FUN_005a101c(void)

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
  
  puVar17 = PTR_PTR_0071bee8;
  puVar16 = PTR_PTR_0071bee4;
  puVar15 = PTR_PTR_0071bee0;
  puVar14 = PTR_PTR_0071bedc;
  puVar13 = PTR_PTR_0071bed8;
  puVar12 = PTR_PTR_0071bed4;
  puVar11 = PTR_PTR_0071bed0;
  puVar10 = PTR_PTR_0071becc;
  puVar9 = PTR_PTR_0071bec8;
  puVar8 = PTR_PTR_0071bec4;
  puVar7 = PTR_PTR_0071bec0;
  puVar6 = PTR_PTR_0071bebc;
  puVar5 = PTR_PTR_0071beb8;
  puVar4 = PTR_PTR_0071beb4;
  puVar3 = PTR_PTR_0071beb0;
  puVar2 = PTR_PTR_0071beac;
  puVar1 = PTR_DAT_0071bea4;
  *(undefined **)PTR_DAT_0071bea4 = PTR_PTR_0071bea8;
  *(undefined **)(puVar1 + 4) = puVar2;
  *(undefined **)(puVar1 + 8) = puVar3;
  *(undefined **)(puVar1 + 0xc) = puVar4;
  *(undefined **)(puVar1 + 0x10) = puVar5;
  *(undefined **)(puVar1 + 0x14) = puVar6;
  *(undefined **)(puVar1 + 0x18) = puVar7;
  puVar19 = PTR_DAT_0071bf2c;
  *(undefined **)(puVar1 + 0x24) = puVar10;
  *(undefined **)(puVar1 + 0x28) = puVar11;
  puVar18 = PTR_PTR_0071bf14;
  puVar11 = PTR_PTR_0071bf10;
  *(undefined **)(puVar1 + 0x2c) = puVar12;
  *(undefined **)(puVar1 + 0x30) = puVar13;
  puVar13 = PTR_PTR_0071bf1c;
  puVar12 = PTR_PTR_0071bf18;
  *(undefined **)(puVar1 + 0x34) = puVar14;
  *(undefined **)(puVar1 + 0x38) = puVar15;
  puVar15 = PTR_PTR_0071bf24;
  puVar14 = PTR_PTR_0071bf20;
  *(undefined **)(puVar1 + 0x3c) = puVar16;
  puVar16 = PTR_PTR_0071bf28;
  puVar10 = PTR_PTR_0071bf04;
  puVar7 = PTR_PTR_0071bf00;
  puVar6 = PTR_PTR_0071befc;
  puVar5 = PTR_PTR_0071bef8;
  puVar4 = PTR_PTR_0071bef4;
  puVar3 = PTR_PTR_0071bef0;
  puVar2 = PTR_PTR_0071beec;
  *(undefined **)(puVar1 + 0x1c) = puVar8;
  *(undefined **)(puVar1 + 0x20) = puVar9;
  *(undefined **)(puVar1 + 0x40) = puVar17;
  puVar9 = PTR_PTR_0071bf0c;
  puVar8 = PTR_PTR_0071bf08;
  *(undefined **)(puVar1 + 0x44) = puVar2;
  *(undefined **)(puVar1 + 0x48) = puVar3;
  *(undefined **)(puVar1 + 0x4c) = puVar4;
  *(undefined **)(puVar1 + 0x50) = puVar5;
  *(undefined **)(puVar1 + 0x54) = puVar6;
  *(undefined **)(puVar1 + 0x58) = puVar7;
  *(undefined **)(puVar1 + 0x5c) = puVar10;
  *(undefined **)(puVar1 + 0x68) = puVar11;
  *(undefined **)(puVar1 + 0x6c) = puVar18;
  *(undefined **)(puVar1 + 0x70) = puVar12;
  *(undefined **)(puVar1 + 0x74) = puVar13;
  *(undefined **)(puVar1 + 0x78) = puVar14;
  *(undefined **)(puVar1 + 0x7c) = puVar15;
  *(undefined **)(puVar1 + 0x80) = puVar16;
  *(undefined **)puVar19 = puVar1;
  *(undefined **)(puVar1 + 0x60) = puVar8;
  *(undefined **)(puVar1 + 100) = puVar9;
  return;
}


// 0x05a117c (0x4c bytes)
undefined8 FUN_005a117c(undefined4 *param_1)

{
  int iVar1;
  
  FUN_005a101c();
  FUN_005a101c();
  iVar1 = *(int *)PTR_DAT_0071bf2c;
  *(undefined4 *)(iVar1 + 0x84) = param_1[1];
  *(undefined4 *)(iVar1 + 0x88) = *param_1;
  return 0;
}


// 0x05a11c8 (0xc bytes)
// strings: 0067e640: 'rt_msg_client ReleaseVersion 3.05.201103091800'

undefined4 FUN_005a11c8(void)

{
  return *(undefined4 *)PTR_PTR_0071bf30;
}


// 0x05a11d4 (0x8 bytes)
// strings: 006605f0: '08:14:18 Mar 10 2011'

undefined * FUN_005a11d4(void)

{
  return PTR_s_08_14_18_Mar_10_2011_0071bf34;
}


// 0x05a11dc (0x70 bytes)
undefined8 FUN_005a11dc(int param_1,undefined8 param_2,undefined1 *param_3,int param_4)

{
  if (*(undefined4 **)(param_1 + 0x58) != (undefined4 *)0x0) {
    (*(code *)**(undefined4 **)(param_1 + 0x58))
              (*(undefined4 *)(param_1 + 0x44),*param_3,param_3[1],param_3[2],param_3[3],
               param_4 + -4,param_3 + 4);
  }
  return 0;
}


// 0x05a124c (0x40 bytes)
undefined4 FUN_005a124c(uint param_1)

{
  if ((*(int *)(PTR_DAT_0071bea4 + 0x8c) != 0) && (param_1 < *(uint *)(PTR_DAT_0071bea4 + 0x90))) {
    return *(undefined4 *)(param_1 * 4 + *(int *)(PTR_DAT_0071bea4 + 0x8c));
  }
  return 0;
}


// 0x05a128c (0x110 bytes)
undefined8 FUN_005a128c(int *param_1)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  
  if ((((param_1 == (int *)0x0) || ((undefined4 *)param_1[0x29] == (undefined4 *)0x0)) ||
      ((uint)param_1[2] < 2)) || (iVar2 = (**(code **)param_1[0x29])(param_1[0x1e]), iVar2 == 0)) {
    return 0;
  }
  iVar2 = 0;
  do {
    iVar3 = *(int *)((int)param_1 + iVar2 + 0x7c);
    if (iVar3 != 0) {
      if (*param_1 != *(int *)(iVar3 + 8)) {
        return 0;
      }
      iVar3 = (**(code **)param_1[0x29])(iVar3);
      if (iVar3 == 0) {
        return 0;
      }
    }
    bVar1 = iVar2 == 4;
    iVar2 = iVar2 + 4;
    if (bVar1) {
      return 1;
    }
  } while( true );
}


// 0x05a139c (0x38 bytes)
undefined8 FUN_005a139c(ulonglong param_1)

{
  undefined8 uVar1;
  
  if (*(int *)(PTR_DAT_0071bea4 + 0x8c) == 0) {
    return 0;
  }
  if ((ulonglong)*(uint *)(PTR_DAT_0071bea4 + 0x90) <= (param_1 & 0xffffffff)) {
    return 0;
  }
  uVar1 = FUN_005a128c(*(undefined4 *)
                        ((int)((param_1 & 0xffffffff) << 2) + *(int *)(PTR_DAT_0071bea4 + 0x8c)));
  return uVar1;
}


// 0x05a13d4 (0x6c bytes)
undefined8 FUN_005a13d4(undefined8 param_1,undefined8 param_2,byte *param_3,int param_4)

{
  undefined8 uVar1;
  
  if ((param_4 != 0) && (*param_3 < 8)) {
                    /* WARNING: Could not recover jumptable at 0x005a143c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar1 = (*(code *)(PTR_DAT_0071bf38 + *(int *)(PTR_DAT_0071bf38 + (uint)*param_3 * 4)))();
    return uVar1;
  }
  return 52000;
}


// 0x05a1504 (0x54 bytes)
uint FUN_005a1504(void)

{
  uint uVar1;
  uint uVar2;
  
  uVar1 = FUN_005a124c();
  uVar2 = FUN_005a128c(uVar1);
  return uVar1 & (int)-(((int)uVar2 >> 0x1f ^ uVar2) - ((int)uVar2 >> 0x1f)) >> 0x1f;
}


// 0x05a1558 (0x84 bytes)
undefined8 FUN_005a1558(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  
  iVar1 = FUN_005a1504(*(undefined4 *)(param_1 + 8));
  (*(code *)**(undefined4 **)(iVar1 + 0x94))(param_1,param_3,param_4,param_2);
  return 0;
}


// 0x05a15dc (0x10 bytes)
undefined4 FUN_005a15dc(void)

{
  return *(undefined4 *)(PTR_DAT_0071bea4 + 0x90);
}


// 0x05a15ec (0x30 bytes)
undefined8 FUN_005a15ec(ulonglong param_1)

{
  undefined8 uVar1;
  
  if ((param_1 & 0xffffffff) < 7) {
                    /* WARNING: Could not recover jumptable at 0x005a1610. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar1 = (*(code *)(PTR_DAT_0071bf3c +
                      *(int *)(PTR_DAT_0071bf3c + ((uint)((param_1 & 0xffffffff) << 2) & 0x3fc))))()
    ;
    return uVar1;
  }
  return 0;
}


// 0x05a166c (0x4 bytes)
void FUN_005a166c(void)

{
  return;
}


// 0x05a1670 (0x160 bytes)
undefined8 FUN_005a1670(undefined4 *param_1,undefined8 param_2,char *param_3)

{
  char cVar1;
  undefined4 uVar2;
  int iVar3;
  undefined8 uVar4;
  undefined2 local_40;
  GPiece<2> local_3e;
  GPiece<2> local_3c;
  GPiece<2> local_3a;
  GPiece<4> auStack_38;
  GPiece<28> local_34;
  
  cVar1 = *param_3;
  FUN_00551f9c(param_3 + 1,&local_40);
  uVar4 = 2;
  if (cVar1 == '\0') {
    FUN_005525a8(param_3 + 3,auStack_38);
    return 0;
  }
  if (cVar1 == '\x01') {
    FUN_00551f9c(param_3 + 3,local_3a);
    FUN_00551f9c(param_3 + 5,local_3c);
    FUN_00551f9c(param_3 + 7,local_3e);
    if ((undefined4 *)param_1[0x18] != (undefined4 *)0x0) {
      uVar2 = *param_1;
      (**(code **)param_1[0x18])(param_1[0x11],local_40,local_34,1);
      iVar3 = FUN_005a139c(uVar2);
      if (iVar3 == 0) {
        return 0xcb23;
      }
    }
    uVar4 = 0;
  }
  return uVar4;
}


// 0x05a17d0 (0x160 bytes)
undefined8 FUN_005a17d0(undefined4 *param_1,int param_2,int param_3,uint param_4)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  int iVar3;
  undefined2 local_30 [12];
  
  if (param_2 - 2U < 3) {
    if (param_2 != 10) goto LAB_005a1884;
  }
  else {
    if ((((param_2 == 0x35) || (param_2 == 0x32)) || (param_2 == 0x33)) ||
       ((param_2 == 0x34 || (param_2 == 0x36)))) {
LAB_005a1884:
      if (param_4 < 2) {
        return 52000;
      }
      FUN_00551f9c(param_3,local_30);
      puVar1 = (undefined4 *)param_1[0x14];
      param_3 = param_3 + 2;
      iVar3 = 2;
      goto joined_r0x005a18b8;
    }
    if (param_2 != 10) {
      return 2;
    }
  }
  puVar1 = (undefined4 *)param_1[0x14];
  local_30[0] = 0xffff;
  iVar3 = 0;
joined_r0x005a18b8:
  if (puVar1 != (undefined4 *)0x0) {
    uVar2 = *param_1;
    (*(code *)*puVar1)(param_1[0x11],local_30[0],param_3,param_4 - iVar3);
    iVar3 = FUN_005a139c(uVar2);
    if (iVar3 == 0) {
      return 0xcb23;
    }
  }
  return 0;
}


// 0x05a1930 (0x524 bytes)
undefined8 FUN_005a1930(undefined4 *param_1,undefined8 param_2,byte *param_3)

{
  bool bVar1;
  byte bVar2;
  byte bVar3;
  undefined4 uVar4;
  int iVar5;
  uint uVar6;
  char cVar8;
  uint uVar7;
  byte *pbVar9;
  uint uVar10;
  undefined1 *puVar11;
  byte *pbVar12;
  byte *pbVar13;
  GPiece<2> auStack_960;
  ushort local_95e;
  GPiece<2> local_95c;
  GPiece<2> auStack_95a;
  GPiece<2> auStack_958;
  GPiece<2> auStack_956;
  GPiece<4> auStack_954;
  undefined4 local_950 [2];
  byte abStack_948 [128];
  GPiece<128> auStack_8c8;
  GPiece<2048> auStack_848;
  
  bVar2 = *param_3;
  pbVar12 = param_3 + 1;
  if ((bVar2 & 2) != 0) {
    FUN_00551ef4(pbVar12,auStack_960);
    FUN_00551ef4(param_3 + 2,auStack_960);
    FUN_00551ef4(param_3 + 3,auStack_960);
    FUN_00551ef4(param_3 + 4,auStack_960);
    FUN_00551ef4(param_3 + 5,auStack_960);
    pbVar12 = param_3 + 8;
    FUN_00551ef4(param_3 + 6,auStack_960);
    FUN_00551ef4(param_3 + 7,auStack_960);
  }
  pbVar9 = pbVar12;
  if ((bVar2 & 4) != 0) {
    pbVar9 = pbVar12 + 4;
    FUN_005525a8(pbVar12,local_950);
    FUN_005574b0(local_950[0]);
  }
  bVar1 = false;
  cVar8 = '\0';
  uVar6 = 0;
  if ((bVar2 & 8) != 0) {
    bVar3 = *pbVar9;
    uVar6 = bVar3 & 0x7f;
    if ((bVar3 & 0x7f) == 0) {
      return 2;
    }
    cVar8 = -((char)bVar3 >> 7);
    pbVar12 = pbVar9 + 1;
    if (cVar8 == '\0') {
      pbVar9 = pbVar12 + uVar6;
      uVar7 = 0;
      memcpy(abStack_948,pbVar12,uVar6);
    }
    else {
      pbVar13 = pbVar9 + 3;
      FUN_00551f9c(pbVar12,local_95c);
      pbVar9 = pbVar13 + uVar6;
      uVar7 = 0;
      memcpy(abStack_948,pbVar13,uVar6);
    }
    do {
      uVar10 = 0;
      do {
        while ((1 << (uVar10 & 0x3f) & (uint)abStack_948[uVar7]) != 0) {
          FUN_005525a8(pbVar9,auStack_954);
          bVar1 = uVar10 == 7;
          pbVar9 = pbVar9 + 4;
          uVar10 = uVar10 + 1;
          if (bVar1) goto LAB_005a1a44;
        }
        bVar1 = uVar10 != 7;
        uVar10 = uVar10 + 1;
      } while (bVar1);
LAB_005a1a44:
      uVar7 = uVar7 + 1;
    } while (uVar7 != uVar6);
    bVar1 = true;
  }
  if ((bVar2 & 0x10) != 0) {
    if (bVar1) {
      if (uVar6 == 0) goto LAB_005a1b48;
      uVar7 = 0;
    }
    else {
      bVar3 = *pbVar9;
      if ((char)bVar3 < '\0') {
        cVar8 = '\x01';
      }
      uVar6 = bVar3 & 0x7f;
      if ((bVar3 & 0x7f) == 0) {
        return 2;
      }
      pbVar12 = pbVar9 + 1;
      if (cVar8 != '\0') {
        pbVar12 = pbVar9 + 3;
        FUN_00551f9c(pbVar9 + 1,local_95c);
      }
      pbVar9 = pbVar12 + uVar6;
      uVar7 = 0;
      memcpy(abStack_948,pbVar12,uVar6);
    }
    do {
      uVar10 = 0;
      do {
        while( true ) {
          pbVar12 = pbVar9 + 2;
          pbVar13 = pbVar9 + 4;
          if ((1 << (uVar10 & 0x3f) & (uint)abStack_948[uVar7]) == 0) break;
          FUN_00551f9c(pbVar9,auStack_958);
          pbVar9 = pbVar9 + 6;
          FUN_00551f9c(pbVar12,auStack_956);
          FUN_00551f9c(pbVar13,auStack_95a);
          bVar1 = uVar10 == 7;
          uVar10 = uVar10 + 1;
          if (bVar1) goto LAB_005a1b3c;
        }
        bVar1 = uVar10 != 7;
        uVar10 = uVar10 + 1;
      } while (bVar1);
LAB_005a1b3c:
      uVar7 = uVar7 + 1;
    } while (uVar7 < uVar6);
  }
LAB_005a1b48:
  if ((bVar2 & 0x20) == 0) {
    return 0;
  }
  bVar2 = *pbVar9;
  uVar6 = (uint)bVar2;
  bVar1 = (char)bVar2 < '\0';
  if (bVar1) {
    bVar2 = bVar2 & 0x7f;
    uVar6 = uVar6 & 0x7f;
  }
  if (bVar2 == 0) {
    return 2;
  }
  pbVar12 = pbVar9 + 1;
  if (bVar1) {
    pbVar12 = pbVar9 + 3;
    FUN_00551f9c(pbVar9 + 1,local_95c);
  }
  pbVar9 = pbVar12 + uVar6;
  memcpy(auStack_8c8,pbVar12,uVar6);
  FUN_00551f9c(pbVar9,&local_95e);
  uVar7 = 0;
  if (local_95e != 0) {
    puVar11 = auStack_848;
    uVar10 = 0;
    do {
      pbVar9 = pbVar9 + 2;
      uVar10 = uVar10 + 1;
      FUN_00551f9c(pbVar9,puVar11);
      uVar7 = (uint)local_95e;
      puVar11 = puVar11 + 2;
    } while (uVar10 < uVar7);
  }
  if ((undefined4 *)param_1[0x17] == (undefined4 *)0x0) {
    return 0;
  }
  uVar4 = *param_1;
  (**(code **)param_1[0x17])(param_1[0x11],0,0,auStack_8c8,uVar6,0,auStack_848,uVar7);
  iVar5 = FUN_005a139c(uVar4);
  if (iVar5 != 0) {
    return 0;
  }
  return 0xcb23;
}


// 0x05a1e54 (0x2dc bytes)
/* WARNING: Removing unreachable block (ram,0x005a207c) */

undefined8 FUN_005a1e54(undefined4 *param_1,int param_2,int param_3,uint param_4)

{
  undefined4 uVar1;
  undefined8 uVar2;
  int iVar3;
  uint uVar4;
  ushort uVar5;
  ushort uVar6;
  undefined1 local_8c0;
  byte local_8bf;
  ushort local_8be [3];
  GPiece<128> auStack_8b8;
  ushort local_838 [1020];
  
  uVar2 = 2;
  if ((param_2 == 0x30) && (uVar2 = 52000, 1 < param_4)) {
    FUN_00551ef4(param_3,&local_8bf);
    if (local_8bf - 7 < 3) {
      FUN_00551f9c(param_3 + 1,local_8be);
      uVar6 = local_8be[0];
      if (local_8bf == 7) {
        uVar5 = 0;
        FUN_00551f9c(param_3 + 3,local_8be);
        uVar4 = (uint)local_8be[0];
      }
      else {
        uVar5 = 0;
        uVar4 = 0xffff;
        if (local_8bf == 8) {
          uVar4 = param_1[0x19];
        }
      }
    }
    else {
      if (2 < local_8bf - 0xb) {
        return 4;
      }
      FUN_00551ef4(param_3 + 1,&local_8c0);
      memcpy(auStack_8b8,(void *)(param_3 + 2),0);
      if (local_8bf == 0xc) {
        uVar4 = 0xffff;
        uVar5 = 1;
        local_838[0] = (ushort)param_1[0x19];
        uVar6 = 0;
      }
      else if (local_8bf == 0xd) {
        uVar4 = 0xffff;
        uVar5 = 1;
        local_838[0] = 0xffff;
        uVar6 = 0;
      }
      else {
        uVar4 = 0xffff;
        uVar6 = 0;
        uVar5 = 0;
        if (local_8bf == 0xb) {
          FUN_00551f9c((void *)(param_3 + 2),local_8be);
          if (param_4 < 5) {
            local_838[0] = local_8be[0];
            uVar4 = 0xffff;
            uVar6 = 0;
            uVar5 = 1;
          }
          else {
            memcpy(local_838,(void *)(param_3 + 4),(uint)local_8be[0] << 1);
            uVar4 = 0xffff;
            uVar5 = local_8be[0];
          }
        }
      }
    }
    if ((undefined4 *)param_1[0x17] != (undefined4 *)0x0) {
      uVar1 = *param_1;
      (**(code **)param_1[0x17])(param_1[0x11],uVar4,uVar6,auStack_8b8,0,0,local_838,uVar5);
      iVar3 = FUN_005a139c(uVar1);
      if (iVar3 == 0) {
        return 0xcb23;
      }
    }
    uVar2 = 0;
  }
  return uVar2;
}


// 0x05a2130 (0xa8 bytes)
undefined8 FUN_005a2130(undefined8 param_1,undefined8 param_2,int param_3,uint param_4)

{
  void *local_20;
  size_t local_1c [3];
  
  if (8 < param_4) {
    FUN_005525a8(param_3,&local_20);
    FUN_005525a8(param_3 + 4,local_1c);
    if (param_4 - 8 == local_1c[0]) {
      memcpy(local_20,(void *)(param_3 + 8),param_4 - 8);
      return 0;
    }
  }
  return 0;
}


// 0x05a21d8 (0x4c bytes)
undefined8 FUN_005a21d8(int param_1)

{
  int *piVar1;
  
  piVar1 = (int *)(param_1 * 4 + *(int *)(PTR_DAT_0071bea4 + 0x8c));
  if (*piVar1 != 0) {
    FUN_005519f0(piVar1);
  }
  return 0;
}


// 0x05a2224 (0x164 bytes)
ulonglong FUN_005a2224(undefined4 *param_1)

{
  uint uVar1;
  int iVar2;
  undefined *puVar3;
  longlong lVar4;
  int *piVar5;
  undefined4 uVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  GPiece<4> local_40;
  GPiece<20> local_3c;
  
  puVar3 = PTR_DAT_0071bea4;
  lVar4 = 0x28;
  *param_1 = 0;
  uVar1 = *(uint *)(puVar3 + 0x90);
  uVar6 = 10;
  if (uVar1 == 0) {
LAB_005a22bc:
    uVar9 = FUN_00551de8(local_3c,lVar4);
    if ((int)uVar9 != 0) goto LAB_005a2360;
    if (*(void **)(puVar3 + 0x8c) != (void *)0x0) {
      memcpy((void *)0x0,*(void **)(puVar3 + 0x8c),*(int *)(puVar3 + 0x90) << 2);
      FUN_005519f0(puVar3 + 0x8c);
    }
    *(undefined4 *)(puVar3 + 0x90) = uVar6;
    *(undefined4 *)(puVar3 + 0x8c) = 0;
    uVar8 = (ulonglong)uVar1;
  }
  else {
    piVar5 = *(int **)(puVar3 + 0x8c);
    uVar8 = 0;
    if (*piVar5 != 0) {
      uVar9 = (ulonglong)uVar1;
      uVar7 = 0;
      do {
        piVar5 = piVar5 + 1;
        uVar8 = uVar7 + 1;
        uVar9 = uVar9 - 1;
        if (uVar9 == 0) {
          uVar6 = (undefined4)(uVar7 + 0xb);
          lVar4 = (uVar7 + 0xb & 0x3fffffff) << 2;
          goto LAB_005a22bc;
        }
        uVar7 = uVar8;
      } while (*piVar5 != 0);
    }
  }
  uVar9 = FUN_00551de8(local_40,0xc0);
  if (uVar9 == 0) {
    iVar2 = *(int *)(puVar3 + 0x8c);
    uVar9 = 0;
    *param_1 = (int)uVar8;
    *(undefined4 *)((int)((uVar8 & 0xffffffff) << 2) + iVar2) = 0;
  }
LAB_005a2360:
  return uVar9 & 0xffffffff;
}


// 0x05a2388 (0x48 bytes)
undefined4 FUN_005a2388(void)

{
  undefined4 uVar1;
  
  uVar1 = 5;
  if (*(int *)(PTR_DAT_0071bea4 + 0x94) != 0) {
    uVar1 = FUN_00552e60(PTR_DAT_0071bea4 + 0x98,0);
  }
  return uVar1;
}


// 0x05a23d0 (0x30 bytes)
void FUN_005a23d0(void)

{
  FUN_00552c24(ZEXT48(PTR_DAT_0071bea4) + 0x98,0);
  return;
}


// 0x05a2400 (0x1a4 bytes)
ulonglong FUN_005a2400(undefined4 param_1,uint param_2,byte param_3,undefined8 param_4,uint param_5)

{
  int iVar1;
  ulonglong uVar2;
  undefined1 uStack_80;
  undefined1 uStack_7f;
  GPiece<2> auStack_7e;
  GPiece<76> local_7c;
  
  uVar2 = 52000;
  if (param_5 - 4 < 3) {
    uVar2 = FUN_005a2388();
    if (uVar2 == 0) {
      uVar2 = 2;
      iVar1 = FUN_005a1504(param_1);
      if ((iVar1 != 0) && (uVar2 = 0xcb2d, *(int *)(iVar1 + 8) == 8)) {
        FUN_00551ed8(&uStack_80,param_5 & 0xff);
        if (param_2 == 0) {
          FUN_00551ed8(&uStack_7f,param_3);
        }
        else {
          FUN_00551ed8(&uStack_7f,param_3 | 0x80);
          FUN_00551f78(auStack_7e,param_2 & 0xffff);
        }
        uVar2 = (*(code *)**(undefined4 **)(iVar1 + 0x98))
                          (*(undefined4 *)(iVar1 + 0x78),0x2f,0xffff,local_7c,0x40);
      }
      FUN_005a23d0();
      return uVar2 & 0xffffffff;
    }
  }
  return uVar2 & 0xffffffff;
}


// 0x05a25a4 (0x108 bytes)
ulonglong FUN_005a25a4(undefined4 param_1,undefined2 param_2,int param_3)

{
  int iVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  undefined1 local_30;
  GPiece<15> auStack_2f;
  
  uVar2 = 52000;
  if (param_3 - 1U < 3) {
    uVar2 = FUN_005a2388();
    uVar3 = 2;
    if (uVar2 == 0) {
      iVar1 = FUN_005a1504(param_1);
      if (iVar1 != 0) {
        FUN_00551f78(auStack_2f,param_2);
        uVar3 = (*(code *)**(undefined4 **)(iVar1 + 0x90))
                          (*(undefined4 *)(iVar1 + 0x78),0x2f,0xffff,&local_30,3,0x40);
      }
      FUN_005a23d0();
      return uVar3 & 0xffffffff;
    }
  }
  return uVar2 & 0xffffffff;
}


// 0x05a26ac (0xa0 bytes)
int FUN_005a26ac(undefined4 param_1)

{
  int iVar1;
  int iVar2;
  
  iVar1 = FUN_005a2388();
  iVar2 = 2;
  if (iVar1 != 0) {
    return iVar1;
  }
  iVar1 = FUN_005a1504(param_1);
  if (iVar1 != 0) {
    iVar2 = (*(code *)**(undefined4 **)(iVar1 + 0x94))(*(undefined4 *)(iVar1 + 0x78),0,0,0x2b);
  }
  FUN_005a23d0();
  return iVar2;
}


// 0x05a274c (0x194 bytes)
int FUN_005a274c(undefined4 param_1,ulonglong param_2,longlong param_3,undefined8 param_4,
                undefined1 param_5)

{
  int iVar1;
  int iVar2;
  ulonglong uVar3;
  undefined1 uStack_90;
  undefined1 uStack_8f;
  GPiece<2> auStack_8e;
  GPiece<84> local_8c;
  
  iVar1 = FUN_005a2388();
  iVar2 = 2;
  if (iVar1 != 0) {
    return iVar1;
  }
  iVar1 = FUN_005a1504(param_1);
  if (iVar1 != 0) {
    FUN_00551ed8(&uStack_90,param_5);
    uVar3 = ((param_3 - param_2 << 0x20) >> 0x23) + 1;
    if ((int)param_2 == 0) {
      FUN_00551ed8(&uStack_8f,uVar3 & 0xff);
    }
    else {
      FUN_00551ed8(&uStack_8f,uVar3 & 0xff | 0x80);
      FUN_00551f78(auStack_8e,param_2 & 0xffff);
    }
    iVar2 = (*(code *)**(undefined4 **)(iVar1 + 0x98))
                      (*(undefined4 *)(iVar1 + 0x78),0x29,0xffff,local_8c,0x40);
  }
  FUN_005a23d0();
  return iVar2;
}


// 0x05a28e0 (0xf0 bytes)
int FUN_005a28e0(undefined4 param_1,undefined2 param_2)

{
  int iVar1;
  int iVar2;
  undefined1 local_30;
  GPiece<15> auStack_2f;
  
  iVar1 = FUN_005a2388();
  iVar2 = 2;
  if (iVar1 != 0) {
    return iVar1;
  }
  iVar1 = FUN_005a1504(param_1);
  if (iVar1 != 0) {
    FUN_00551f78(auStack_2f,param_2);
    iVar2 = (*(code *)**(undefined4 **)(iVar1 + 0x90))
                      (*(undefined4 *)(iVar1 + 0x78),0x27,0xffff,&local_30,3,0x40);
  }
  FUN_005a23d0();
  return iVar2;
}


// 0x05a29d0 (0x154 bytes)
int FUN_005a29d0(undefined4 param_1,undefined1 *param_2)

{
  int iVar1;
  int iVar2;
  undefined1 uStack_70;
  undefined1 uStack_6f;
  undefined1 uStack_6e;
  undefined1 uStack_6d;
  GPiece<4> auStack_6c;
  GPiece<72> local_68;
  
  iVar1 = FUN_005a2388();
  iVar2 = 2;
  if (iVar1 != 0) {
    return iVar1;
  }
  iVar1 = FUN_005a1504(param_1);
  if (iVar1 != 0) {
    FUN_00551ed8(&uStack_70,*param_2);
    FUN_00551ed8(&uStack_6f,param_2[7]);
    FUN_00551ed8(&uStack_6e,param_2[0xb]);
    FUN_00551ed8(&uStack_6d,param_2[0xf]);
    FUN_00551f78(auStack_6c,*(undefined2 *)(param_2 + 0x10));
    iVar2 = (*(code *)**(undefined4 **)(iVar1 + 0x98))
                      (*(undefined4 *)(iVar1 + 0x78),0x31,0xffff,local_68,0x40);
  }
  FUN_005a23d0();
  return iVar2;
}


// 0x05a2b24 (0xe4 bytes)
int FUN_005a2b24(undefined4 param_1,undefined2 param_2)

{
  int iVar1;
  int iVar2;
  GPiece<24> auStack_30;
  
  iVar1 = FUN_005a2388();
  iVar2 = 2;
  if (iVar1 != 0) {
    return iVar1;
  }
  iVar1 = FUN_005a1504(param_1);
  if (iVar1 != 0) {
    FUN_00551f78(auStack_30,param_2);
    iVar2 = (*(code *)**(undefined4 **)(iVar1 + 0x90))
                      (*(undefined4 *)(iVar1 + 0x78),0x3d,0xffff,auStack_30,2,0x40);
  }
  FUN_005a23d0();
  return iVar2;
}


// 0x05a2c08 (0xc0 bytes)
int FUN_005a2c08(undefined4 param_1,int param_2)

{
  int iVar1;
  int iVar2;
  
  iVar1 = FUN_005a2388();
  iVar2 = 2;
  if (iVar1 != 0) {
    return iVar1;
  }
  iVar1 = FUN_005a1504(param_1);
  if ((iVar1 != 0) && (param_2 != 0)) {
    if (*(int *)(iVar1 + 0x78) != 0) {
      iVar2 = (*(code *)**(undefined4 **)(iVar1 + 0xb0))(iVar1,param_2);
    }
  }
  FUN_005a23d0();
  return iVar2;
}


// 0x05a2cc8 (0xe4 bytes)
int FUN_005a2cc8(undefined4 param_1,undefined2 param_2)

{
  int iVar1;
  int iVar2;
  GPiece<24> auStack_30;
  
  iVar1 = FUN_005a2388();
  iVar2 = 2;
  if (iVar1 != 0) {
    return iVar1;
  }
  iVar1 = FUN_005a1504(param_1);
  if (iVar1 != 0) {
    FUN_00551f78(auStack_30,param_2);
    iVar2 = (*(code *)**(undefined4 **)(iVar1 + 0x90))
                      (*(undefined4 *)(iVar1 + 0x78),0xe,0xffff,auStack_30,2,0x40);
  }
  FUN_005a23d0();
  return iVar2;
}


// 0x05a2dac (0xac bytes)
int FUN_005a2dac(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  int iVar2;
  
  iVar1 = FUN_005a2388();
  iVar2 = 2;
  if (iVar1 != 0) {
    return iVar1;
  }
  iVar1 = FUN_005a1504(param_1);
  if (iVar1 != 0) {
    iVar2 = (*(code *)**(undefined4 **)(iVar1 + 0xac))(iVar1,param_2);
  }
  FUN_005a23d0();
  return iVar2;
}


// 0x05a2e58 (0xb4 bytes)
int FUN_005a2e58(undefined4 param_1,byte param_2)

{
  int iVar1;
  GPiece<16> local_20;
  
  iVar1 = FUN_005a2388();
  if (iVar1 != 0) {
    return iVar1;
  }
  if ((param_2 & 0xf0) == 0) {
    iVar1 = FUN_005a1504(param_1);
    if (iVar1 != 0) {
      *(byte *)(iVar1 + 0x40) = param_2;
      iVar1 = (*(code *)**(undefined4 **)(iVar1 + 0x90))
                        (*(undefined4 *)(iVar1 + 0x78),0xd,0xffff,local_20,1,0x40);
      goto LAB_005a2e94;
    }
  }
  iVar1 = 2;
LAB_005a2e94:
  FUN_005a23d0();
  return iVar1;
}


// 0x05a2f0c (0xd4 bytes)
int FUN_005a2f0c(undefined4 param_1,int param_2)

{
  int iVar1;
  byte bVar3;
  int iVar2;
  
  iVar1 = FUN_005a2388();
  iVar2 = 2;
  if (iVar1 != 0) {
    return iVar1;
  }
  iVar1 = FUN_005a1504(param_1);
  if (iVar1 != 0) {
    bVar3 = *(byte *)(iVar1 + 0x40);
    if (param_2 == 0) {
      if ((bVar3 & 1) != 0) {
        bVar3 = bVar3 & 0xfe;
      }
    }
    else if ((bVar3 & 1) == 0) {
      bVar3 = bVar3 | 1;
    }
    iVar2 = FUN_005a2e58(param_1,bVar3);
  }
  FUN_005a23d0();
  return iVar2;
}


// 0x05a2fe0 (0xac bytes)
int FUN_005a2fe0(undefined4 param_1,undefined4 *param_2)

{
  int iVar1;
  int iVar2;
  
  iVar1 = FUN_005a2388();
  iVar2 = 2;
  if (iVar1 != 0) {
    return iVar1;
  }
  iVar1 = FUN_005a1504(param_1);
  if ((iVar1 != 0) && (iVar2 = 0xcb2d, *(int *)(iVar1 + 8) == 8)) {
    iVar2 = 0;
    *param_2 = *(undefined4 *)(iVar1 + 0x6c);
    param_2[1] = *(undefined4 *)(iVar1 + 0x70);
  }
  FUN_005a23d0();
  return iVar2;
}


// 0x05a308c (0xf8 bytes)
int FUN_005a308c(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                undefined4 param_5)

{
  int iVar1;
  int iVar2;
  
  iVar1 = FUN_005a2388();
  iVar2 = 2;
  if (iVar1 != 0) {
    return iVar1;
  }
  iVar1 = FUN_005a1504(param_1);
  if (iVar1 != 0) {
    iVar2 = (*(code *)**(undefined4 **)(iVar1 + 0xa0))(param_1,param_2,param_3,param_4,param_5);
  }
  FUN_005a23d0();
  return iVar2;
}


// 0x05a3184 (0x1a4 bytes)
int FUN_005a3184(undefined4 param_1,ulonglong param_2,ulonglong param_3,int param_4)

{
  int iVar1;
  int iVar2;
  ulonglong uVar3;
  undefined1 uStack_80;
  GPiece<3> auStack_7f;
  int local_7c;
  uint local_78;
  undefined1 *local_74;
  int local_70;
  int local_3c;
  undefined4 local_38;
  
  if ((((param_4 == 0) || ((int)param_3 == 0)) || ((param_3 & 0xffffffff) <= (param_2 & 0xffffffff))
      ) || (0xffff < (param_3 & 0xffffffff))) {
    iVar1 = 2;
  }
  else {
    iVar1 = FUN_005a2388();
    if (iVar1 == 0) {
      iVar2 = 2;
      iVar1 = FUN_005a1504(param_1);
      if ((iVar1 != 0) && (iVar2 = 0xcb2d, *(int *)(iVar1 + 8) == 8)) {
        uVar3 = ((param_3 - param_2 << 0x20) >> 0x23) + 1;
        if ((int)param_2 == 0) {
          FUN_00551ed8(&uStack_80,uVar3 & 0xff);
          local_70 = 1;
        }
        else {
          FUN_00551ed8(&uStack_80,uVar3 & 0xff | 0x80);
          FUN_00551f78(auStack_7f,param_2 & 0xffff);
          local_70 = 3;
        }
        local_74 = &uStack_80;
        local_78 = (uint)uVar3 & 0xff;
        local_3c = local_78 + local_70;
        local_38 = 2;
        local_7c = param_4;
        iVar2 = (*(code *)**(undefined4 **)(iVar1 + 0x98))
                          (*(undefined4 *)(iVar1 + 0x78),0x3a,0xffff,&local_7c,0x40);
      }
      FUN_005a23d0();
      return iVar2;
    }
  }
  return iVar1;
}


// 0x05a3328 (0xe0 bytes)
int FUN_005a3328(undefined4 param_1,uint param_2)

{
  int iVar1;
  int iVar2;
  GPiece<24> auStack_30;
  
  iVar1 = FUN_005a2388();
  if (iVar1 != 0) {
    return iVar1;
  }
  if (param_2 < 0x10000) {
    iVar1 = FUN_005a1504(param_1);
    iVar2 = 0xcb2d;
    if (iVar1 != 0) {
      if (*(int *)(iVar1 + 8) == 8) {
        FUN_00551f78(auStack_30,param_2 & 0xffff);
        iVar2 = (*(code *)**(undefined4 **)(iVar1 + 0x90))
                          (*(undefined4 *)(iVar1 + 0x78),0x38,0xffff,auStack_30,2,0x40);
      }
      goto LAB_005a3364;
    }
  }
  iVar2 = 2;
LAB_005a3364:
  FUN_005a23d0();
  return iVar2;
}


// 0x05a3408 (0x1a4 bytes)
int FUN_005a3408(undefined4 param_1,ulonglong param_2,ulonglong param_3,int param_4)

{
  int iVar1;
  int iVar2;
  ulonglong uVar3;
  undefined1 uStack_80;
  GPiece<3> auStack_7f;
  int local_7c;
  uint local_78;
  undefined1 *local_74;
  int local_70;
  int local_3c;
  undefined4 local_38;
  
  if ((((param_4 == 0) || ((int)param_3 == 0)) || ((param_3 & 0xffffffff) <= (param_2 & 0xffffffff))
      ) || (0xffff < (param_3 & 0xffffffff))) {
    iVar1 = 2;
  }
  else {
    iVar1 = FUN_005a2388();
    if (iVar1 == 0) {
      iVar2 = 2;
      iVar1 = FUN_005a1504(param_1);
      if ((iVar1 != 0) && (iVar2 = 0xcb2d, *(int *)(iVar1 + 8) == 8)) {
        uVar3 = ((param_3 - param_2 << 0x20) >> 0x23) + 1;
        if ((int)param_2 == 0) {
          FUN_00551ed8(&uStack_80,uVar3 & 0xff);
          local_70 = 1;
        }
        else {
          FUN_00551ed8(&uStack_80,uVar3 & 0xff | 0x80);
          FUN_00551f78(auStack_7f,param_2 & 0xffff);
          local_70 = 3;
        }
        local_74 = &uStack_80;
        local_78 = (uint)uVar3 & 0xff;
        local_3c = local_78 + local_70;
        local_38 = 2;
        local_7c = param_4;
        iVar2 = (*(code *)**(undefined4 **)(iVar1 + 0x98))
                          (*(undefined4 *)(iVar1 + 0x78),0x39,0xffff,&local_7c,0x40);
      }
      FUN_005a23d0();
      return iVar2;
    }
  }
  return iVar1;
}


// 0x05a35ac (0xe0 bytes)
int FUN_005a35ac(undefined4 param_1,uint param_2)

{
  int iVar1;
  int iVar2;
  GPiece<24> auStack_30;
  
  iVar1 = FUN_005a2388();
  if (iVar1 != 0) {
    return iVar1;
  }
  if (param_2 < 0x10000) {
    iVar1 = FUN_005a1504(param_1);
    iVar2 = 0xcb2d;
    if (iVar1 != 0) {
      if (*(int *)(iVar1 + 8) == 8) {
        FUN_00551f78(auStack_30,param_2 & 0xffff);
        iVar2 = (*(code *)**(undefined4 **)(iVar1 + 0x90))
                          (*(undefined4 *)(iVar1 + 0x78),0x37,0xffff,auStack_30,2,0x40);
      }
      goto LAB_005a35e8;
    }
  }
  iVar2 = 2;
LAB_005a35e8:
  FUN_005a23d0();
  return iVar2;
}


// 0x05a368c (0x2d0 bytes)
int FUN_005a368c(undefined4 param_1,ulonglong param_2,ulonglong param_3,int param_4,
                undefined4 param_5,int param_6,uint param_7)

{
  uint uVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  ulonglong uVar6;
  undefined1 uStack_60;
  GPiece<15> auStack_5f;
  
  if ((((param_6 == 0) || (0x578 < *(uint *)(param_6 + 0x40))) || (param_4 == 0)) ||
     ((param_3 & 0xffffffff) < (param_2 & 0xffffffff))) {
    iVar2 = 2;
  }
  else {
    iVar2 = FUN_005a2388();
    if (iVar2 == 0) {
      iVar4 = 2;
      iVar2 = FUN_005a1504(param_1);
      if (iVar2 != 0) {
        iVar4 = 0xcb2d;
        if (*(int *)(iVar2 + 8) == 8) {
          uVar6 = ((param_3 - param_2 << 0x20) >> 0x23) + 1;
          uVar3 = (*(code *)**(undefined4 **)(iVar2 + 0xa8))(iVar2,param_5);
          if ((int)param_2 == 0) {
            FUN_00551ed8(&uStack_60,uVar6 & 0xff);
            iVar4 = 1;
          }
          else {
            FUN_00551ed8(&uStack_60,uVar6 & 0xff | 0x80);
            FUN_00551f78(auStack_5f,param_2 & 0xffff);
            iVar4 = 3;
          }
          if (*(int *)(param_6 + 0x44) < 8) {
            iVar5 = *(int *)(param_6 + 0x44) * 8;
            uVar1 = (uint)uVar6 & 0xff;
            *(int *)(param_6 + iVar5) = param_4;
            *(uint *)(param_6 + iVar5 + 4) = uVar1;
            iVar5 = *(int *)(param_6 + 0x44) + 1;
            *(uint *)(param_6 + 0x40) = uVar1 + *(int *)(param_6 + 0x40);
            *(int *)(param_6 + 0x44) = iVar5;
            if (iVar5 < 8) {
              *(undefined1 **)(param_6 + iVar5 * 8) = &uStack_60;
              *(int *)(param_6 + iVar5 * 8 + 4) = iVar4;
              *(int *)(param_6 + 0x40) = iVar4 + *(int *)(param_6 + 0x40);
              *(int *)(param_6 + 0x44) = *(int *)(param_6 + 0x44) + 1;
            }
          }
          iVar4 = (*(code *)**(undefined4 **)(iVar2 + 0x98))
                            (uVar3,((longlong)
                                    ((ulonglong)
                                     ((((int)param_7 >> 0x1f ^ param_7) - ((int)param_7 >> 0x1f)) -
                                     1) << 0x20) >> 0x3f) + 0x36U & 0xffffffff,0xffff,param_6,
                             param_5);
          iVar2 = *(int *)(param_6 + 0x44) + -1;
          iVar5 = *(int *)(param_6 + 0x44) + -2;
          *(int *)(param_6 + 0x44) = iVar2;
          iVar2 = *(int *)(param_6 + iVar2 * 8 + 4);
          *(int *)(param_6 + 0x44) = iVar5;
          iVar2 = *(int *)(param_6 + 0x40) - iVar2;
          *(int *)(param_6 + 0x40) = iVar2;
          *(int *)(param_6 + 0x40) = iVar2 - *(int *)(param_6 + iVar5 * 8 + 4);
        }
      }
      FUN_005a23d0();
      return iVar4;
    }
  }
  return iVar2;
}


// 0x05a395c (0x70 bytes)
undefined4
FUN_005a395c(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5,undefined8 param_6,undefined8 param_7,undefined4 param_8)

{
  undefined4 uVar1;
  GPiece<80> local_50;
  
  uVar1 = FUN_005a368c(param_1,param_2,param_3,param_4,param_5,local_50,param_8);
  return uVar1;
}


// 0x05a39cc (0x2d8 bytes)
int FUN_005a39cc(undefined4 param_1,ulonglong param_2,ulonglong param_3,int param_4,
                undefined4 param_5,int param_6,uint param_7)

{
  uint uVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  ulonglong uVar6;
  undefined1 uStack_60;
  GPiece<15> auStack_5f;
  
  if ((((param_6 == 0) || (0x578 < *(uint *)(param_6 + 0x40))) || (param_4 == 0)) ||
     ((param_3 & 0xffffffff) < (param_2 & 0xffffffff))) {
    iVar2 = 2;
  }
  else {
    iVar2 = FUN_005a2388();
    if (iVar2 == 0) {
      iVar4 = 2;
      iVar2 = FUN_005a1504(param_1);
      if (iVar2 != 0) {
        iVar4 = 0xcb2d;
        if (*(int *)(iVar2 + 8) == 8) {
          uVar6 = ((param_3 - param_2 << 0x20) >> 0x23) + 1;
          uVar3 = (*(code *)**(undefined4 **)(iVar2 + 0xa8))(iVar2,param_5);
          if ((int)param_2 == 0) {
            FUN_00551ed8(&uStack_60,uVar6 & 0xff);
            iVar4 = 1;
          }
          else {
            FUN_00551ed8(&uStack_60,uVar6 & 0xff | 0x80);
            FUN_00551f78(auStack_5f,param_2 & 0xffff);
            iVar4 = 3;
          }
          if (*(int *)(param_6 + 0x44) < 8) {
            iVar5 = *(int *)(param_6 + 0x44) * 8;
            uVar1 = (uint)uVar6 & 0xff;
            *(int *)(param_6 + iVar5) = param_4;
            *(uint *)(param_6 + iVar5 + 4) = uVar1;
            iVar5 = *(int *)(param_6 + 0x44) + 1;
            *(uint *)(param_6 + 0x40) = uVar1 + *(int *)(param_6 + 0x40);
            *(int *)(param_6 + 0x44) = iVar5;
            if (iVar5 < 8) {
              *(undefined1 **)(param_6 + iVar5 * 8) = &uStack_60;
              *(int *)(param_6 + iVar5 * 8 + 4) = iVar4;
              *(int *)(param_6 + 0x40) = iVar4 + *(int *)(param_6 + 0x40);
              *(int *)(param_6 + 0x44) = *(int *)(param_6 + 0x44) + 1;
            }
          }
          iVar4 = (*(code *)**(undefined4 **)(iVar2 + 0x98))
                            (uVar3,((int)((((int)param_7 >> 0x1f ^ param_7) - ((int)param_7 >> 0x1f)
                                          ) + -1) >> 0x1f & 0xffffffd0U) + 0x34,0xffff,param_6,
                             param_5);
          iVar2 = *(int *)(param_6 + 0x44) + -1;
          iVar5 = *(int *)(param_6 + 0x44) + -2;
          *(int *)(param_6 + 0x44) = iVar2;
          iVar2 = *(int *)(param_6 + iVar2 * 8 + 4);
          *(int *)(param_6 + 0x44) = iVar5;
          iVar2 = *(int *)(param_6 + 0x40) - iVar2;
          *(int *)(param_6 + 0x40) = iVar2;
          *(int *)(param_6 + 0x40) = iVar2 - *(int *)(param_6 + iVar5 * 8 + 4);
        }
      }
      FUN_005a23d0();
      return iVar4;
    }
  }
  return iVar2;
}


// 0x05a3ca4 (0x70 bytes)
undefined4
FUN_005a3ca4(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5,undefined8 param_6,undefined8 param_7,undefined4 param_8)

{
  undefined4 uVar1;
  GPiece<80> local_50;
  
  uVar1 = FUN_005a39cc(param_1,param_2,param_3,param_4,param_5,local_50,param_8);
  return uVar1;
}


// 0x05a3d14 (0x194 bytes)
int FUN_005a3d14(undefined4 param_1,uint param_2,undefined4 param_3,int param_4,int param_5)

{
  uint uVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  
  if ((param_4 == 0) || (0x578 < *(uint *)(param_4 + 0x40))) {
    iVar2 = 2;
  }
  else {
    iVar2 = FUN_005a2388();
    if (iVar2 == 0) {
      iVar4 = 2;
      iVar2 = FUN_005a1504(param_1);
      if (iVar2 != 0) {
        iVar4 = 0xcb2d;
        if (*(int *)(iVar2 + 8) == 8) {
          uVar3 = (*(code *)**(undefined4 **)(iVar2 + 0xa8))(iVar2,param_3);
          iVar4 = 2;
          if (param_2 != 0xfffe) {
            uVar1 = (int)(param_2 ^ 0xffff) >> 0x1f;
            iVar4 = ((int)(uVar1 - (uVar1 ^ param_2 ^ 0xffff)) >> 0x1f & 0xfffffff8U) + 0xb;
          }
          if ((param_5 != 0) && (iVar4 - 2U < 2)) {
            iVar4 = iVar4 + 0x30;
          }
          iVar4 = (*(code *)**(undefined4 **)(iVar2 + 0x98))(uVar3,iVar4,param_2,param_4,param_3);
        }
      }
      FUN_005a23d0();
      return iVar4;
    }
  }
  return iVar2;
}


// 0x05a3ea8 (0x68 bytes)
undefined4
FUN_005a3ea8(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined8 param_4,
            undefined8 param_5,undefined4 param_6)

{
  undefined4 uVar1;
  GPiece<80> local_50;
  
  uVar1 = FUN_005a3d14(param_1,param_2,param_3,local_50,param_6);
  return uVar1;
}


// 0x05a3f10 (0x10c bytes)
int FUN_005a3f10(undefined4 param_1)

{
  undefined *puVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  iVar2 = FUN_005a2388();
  puVar1 = PTR_DAT_0071bea4;
  if (iVar2 == 0) {
    iVar2 = 0;
    if (*(int *)(PTR_DAT_0071bea4 + 0x90) != 0) {
      iVar4 = 0;
      do {
        iVar2 = 0;
        iVar3 = FUN_005a139c(iVar4);
        if ((iVar3 == 0) || (iVar3 = FUN_005a1504(iVar4), iVar3 == 0)) {
LAB_005a3f5c:
          if (*(uint *)(puVar1 + 0x90) <= iVar4 + 1U) break;
        }
        else {
          iVar2 = 3;
          if (*(undefined4 **)(iVar3 + 0x8c) == (undefined4 *)0x0) goto LAB_005a3f5c;
          iVar2 = (*(code *)**(undefined4 **)(iVar3 + 0x8c))(iVar4,param_1);
          if (*(uint *)(puVar1 + 0x90) <= iVar4 + 1U) break;
        }
        iVar4 = iVar4 + 1;
      } while (iVar2 == 0);
    }
    FUN_005a23d0();
  }
  return iVar2;
}


// 0x05a401c (0xc8 bytes)
int FUN_005a401c(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  int iVar2;
  
  iVar1 = FUN_005a2388();
  iVar2 = 2;
  if (iVar1 != 0) {
    return iVar1;
  }
  iVar1 = FUN_005a1504(param_1);
  if (iVar1 != 0) {
    iVar2 = 3;
    if (*(undefined4 **)(iVar1 + 0x8c) != (undefined4 *)0x0) {
      iVar2 = (*(code *)**(undefined4 **)(iVar1 + 0x8c))(param_1,param_2);
    }
  }
  FUN_005a23d0();
  return iVar2;
}


// 0x05a40e4 (0xc4 bytes)
int FUN_005a40e4(void)

{
  undefined *puVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  
  iVar2 = FUN_005a2388();
  puVar1 = PTR_DAT_0071bea4;
  if (iVar2 == 0) {
    if (*(int *)(PTR_DAT_0071bea4 + 0x90) != 0) {
      uVar4 = 0;
      do {
        uVar5 = uVar4 + 1;
        iVar3 = FUN_005a1504(uVar4);
        if (iVar3 != 0) {
          if (*(undefined4 **)(iVar3 + 0x88) != (undefined4 *)0x0) {
            (*(code *)**(undefined4 **)(iVar3 + 0x88))(uVar4,0);
          }
          FUN_005a21d8(uVar4);
        }
        uVar4 = uVar5;
      } while (uVar5 < *(uint *)(puVar1 + 0x90));
    }
    FUN_005a23d0();
  }
  return iVar2;
}


// 0x05a41a8 (0xc0 bytes)
int FUN_005a41a8(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  
  iVar1 = FUN_005a2388();
  if (iVar1 != 0) {
    return iVar1;
  }
  iVar1 = FUN_005a124c(param_1);
  if (iVar1 != 0) {
    if (*(undefined4 **)(iVar1 + 0x88) != (undefined4 *)0x0) {
      (*(code *)**(undefined4 **)(iVar1 + 0x88))(param_1,param_2);
    }
  }
  FUN_005a21d8(param_1);
  FUN_005a23d0();
  return 0;
}


// 0x05a4268 (0x34c bytes)
undefined8 FUN_005a4268(undefined4 *param_1,undefined8 param_2,char *param_3)

{
  bool bVar1;
  char cVar2;
  undefined4 uVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  char *pcVar7;
  char *pcVar8;
  uint uVar9;
  byte local_28d0 [2];
  GPiece<2> local_28ce;
  GPiece<12> local_28cc;
  GPiece<16> auStack_28c0;
  GPiece<16> auStack_28b0;
  GPiece<16> auStack_28a0;
  GPiece<16> auStack_2890;
  GPiece<16> auStack_2880;
  GPiece<16> auStack_2870;
  GPiece<16> auStack_2860;
  undefined8 uStack_2850;
  undefined4 uStack_2848;
  undefined2 uStack_2844;
  undefined1 uStack_2842;
  GPiece<2032> auStack_2840;
  GPiece<2032> auStack_2050;
  GPiece<2032> auStack_1860;
  GPiece<4072> auStack_1070;
  
  auStack_2860 = (GPiece<16>)0x0;
  auStack_28b0 = (GPiece<16>)0x0;
  auStack_28c0 = (GPiece<16>)0x0;
  auStack_28a0 = (GPiece<16>)0x0;
  auStack_2890 = (GPiece<16>)0x0;
  auStack_2880 = (GPiece<16>)0x0;
  auStack_2870 = (GPiece<16>)0x0;
  uStack_2844 = 0;
  uStack_2848 = 0;
  uStack_2842 = 0;
  uStack_2850 = 0;
  memset(auStack_1070,0,0xfe0);
  memset(auStack_2840,0,0x7f0);
  memset(auStack_2050,0,0x7f0);
  memset(auStack_1860,0,0x7f0);
  cVar2 = *param_3;
  FUN_00551ef4(param_3 + 1,local_28d0);
  pcVar8 = param_3 + 2;
  if ((char)local_28d0[0] < '\0') {
    pcVar8 = param_3 + 4;
    FUN_00551f9c(param_3 + 2,local_28ce);
    local_28d0[0] = local_28d0[0] & 0x7f;
  }
  uVar5 = 0;
  memcpy(auStack_28c0,pcVar8,(uint)local_28d0[0]);
  iVar6 = 0;
  pcVar8 = pcVar8 + local_28d0[0];
  if (local_28d0[0] != 0) {
    do {
      uVar9 = 0;
      do {
        if ((1 << (uVar9 & 0x3f) & (uint)(byte)auStack_28c0[uVar5]) != 0) {
          if (cVar2 == '\0') {
            pcVar7 = pcVar8 + 4;
            FUN_005525a8(pcVar8,auStack_1070 + iVar6 * 4);
          }
          else {
            iVar4 = iVar6 * 2;
            pcVar7 = pcVar8;
            if (cVar2 == '\x01') {
              FUN_00551f9c(pcVar8,auStack_2840 + iVar4);
              pcVar7 = pcVar8 + 6;
              FUN_00551f9c(pcVar8 + 2,auStack_2050 + iVar4);
              FUN_00551f9c(pcVar8 + 4,auStack_1860 + iVar4);
              if ((undefined4 *)param_1[0x18] != (undefined4 *)0x0) {
                uVar3 = *param_1;
                (**(code **)param_1[0x18])(param_1[0x11],uVar9 + uVar5 * 8 & 0xffff,local_28cc,1);
                iVar4 = FUN_005a139c(uVar3);
                if (iVar4 == 0) {
                  return 0xcb23;
                }
              }
            }
          }
          iVar6 = iVar6 + 1;
          pcVar8 = pcVar7;
        }
        bVar1 = uVar9 != 7;
        uVar9 = uVar9 + 1;
      } while (bVar1);
      uVar5 = uVar5 + 1;
    } while (uVar5 < local_28d0[0]);
  }
  return 0;
}


// 0x05a45b4 (0x78 bytes)
void FUN_005a45b4(undefined4 *param_1)

{
  memset(param_1,0,0x58);
  *param_1 = 0;
  param_1[5] = 0x275b;
  param_1[8] = 0x1e;
  *(undefined1 *)((int)param_1 + 0x35) = 1;
  *(undefined1 *)(param_1 + 0xd) = 0xe;
  param_1[9] = 0x8000;
  param_1[7] = 15000;
  param_1[10] = 0x8000;
  return;
}


// 0x05a462c (0x20 bytes)
undefined8 FUN_005a462c(undefined4 *param_1)

{
  param_1[2] = 1;
  param_1[1] = 0;
  *param_1 = 0;
  return 0;
}


// 0x05a464c (0xb4 bytes)
int FUN_005a464c(int param_1,undefined4 param_2)

{
  int iVar1;
  GPiece<4> auStack_30;
  undefined4 local_2c [5];
  
  iVar1 = FUN_005a2388();
  if (iVar1 == 0) {
    iVar1 = 2;
    if (param_1 != 0) {
      FUN_0055769c(local_2c);
      FUN_00552570(auStack_30,local_2c[0]);
      iVar1 = (*(code *)**(undefined4 **)(param_1 + 0x94))(param_2,auStack_30,4,0x2d);
    }
    FUN_005a23d0();
  }
  return iVar1;
}


// 0x05a4700 (0x80 bytes)
undefined8 FUN_005a4700(undefined8 param_1,undefined8 param_2,int param_3)

{
  int local_30;
  int local_2c;
  undefined4 local_28 [2];
  
  FUN_005525a8(param_3,&local_2c);
  FUN_0055769c(&local_30);
  FUN_005525a8(param_3 + 4,local_28);
  FUN_005574f4(local_30 - local_2c,local_28[0]);
  return 0;
}


// 0x05a4780 (0x1bc bytes)
undefined8 FUN_005a4780(int param_1,undefined8 param_2,byte *param_3,uint param_4)

{
  byte bVar1;
  undefined8 uVar2;
  int iVar3;
  undefined4 local_600 [2];
  GPiece<8> auStack_5f8;
  undefined4 local_5f0 [4];
  undefined1 uStack_5dd;
  GPiece<4> auStack_5dc;
  GPiece<4> auStack_5d8;
  GPiece<1396> auStack_5d4;
  
  if (0xc < param_4) {
    bVar1 = *param_3;
    FUN_005525a8(param_3 + 1,local_600);
    FUN_005525a8(param_3 + 5,local_5f0);
    FUN_005525a8(param_3 + 9,auStack_5f8);
    FUN_00551ed8(&uStack_5dd,bVar1);
    FUN_00552570(auStack_5dc,local_600[0]);
    FUN_00552570(auStack_5d8,local_5f0[0]);
    FUN_00552570(auStack_5d4,0x10);
    if (bVar1 < 0x1d) {
                    /* WARNING: Could not recover jumptable at 0x005a48dc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar2 = (*(code *)(*(int *)((uint)bVar1 * 4 + DAT_0071bf40) + DAT_0071bf40))();
      return uVar2;
    }
    FUN_00552570(auStack_5d4,0);
    iVar3 = FUN_005a1504(*(undefined4 *)(param_1 + 8));
    (*(code *)**(undefined4 **)(iVar3 + 0x90))(param_1,0x1d,0xffff,&uStack_5dd,0xd,0x40);
  }
  return 0;
}


// 0x05a52f0 (0x114 bytes)
int FUN_005a52f0(undefined4 *param_1,uint *param_2)

{
  int iVar1;
  int iVar2;
  
  iVar1 = FUN_005a2388();
  if (iVar1 != 0) {
    return iVar1;
  }
  iVar1 = FUN_005a2224(param_1);
  if (iVar1 == 0) {
    iVar2 = FUN_005a124c(*param_1);
    if (*param_2 < 2) {
      FUN_005a562c(iVar2);
    }
    else if (*param_2 == 2) {
      FUN_005aa4dc(iVar2);
    }
    iVar1 = 3;
    if (*(undefined4 **)(iVar2 + 0x84) != (undefined4 *)0x0) {
      iVar1 = (*(code *)**(undefined4 **)(iVar2 + 0x84))(*param_1,param_2);
    }
  }
  FUN_005a23d0();
  return iVar1;
}


// 0x05a5404 (0x178 bytes)
int FUN_005a5404(void)

{
  undefined *puVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  
  iVar2 = FUN_005a2388();
  puVar1 = PTR_DAT_0071bea4;
  if (iVar2 == 0) {
    if (*(int *)(PTR_DAT_0071bea4 + 0xac) == 1) {
      if (*(int *)(PTR_DAT_0071bea4 + 0x90) != 0) {
        uVar4 = 0;
        do {
          uVar5 = uVar4 + 1;
          iVar3 = FUN_005a1504(uVar4);
          if (iVar3 != 0) {
            if (*(undefined4 **)(iVar3 + 0x88) != (undefined4 *)0x0) {
              (*(code *)**(undefined4 **)(iVar3 + 0x88))(uVar4,6);
            }
            FUN_005a21d8(uVar4);
          }
          uVar4 = uVar5;
        } while (uVar5 < *(uint *)(puVar1 + 0x90));
      }
      if (*(int *)(puVar1 + 0x8c) != 0) {
        FUN_005519f0(puVar1 + 0x8c);
      }
      *(undefined4 *)(puVar1 + 0x90) = 0;
      *(undefined4 *)(puVar1 + 0x8c) = 0;
      FUN_005aa3d0();
      FUN_005aa4d4();
      *(int *)(puVar1 + 0xac) = *(int *)(puVar1 + 0xac) + -1;
      FUN_005a23d0();
      if (*(int *)(puVar1 + 0xac) == 0) {
        iVar3 = 0;
        goto LAB_005a5480;
      }
    }
    else {
      *(int *)(PTR_DAT_0071bea4 + 0xac) = *(int *)(PTR_DAT_0071bea4 + 0xac) + -1;
      FUN_005a23d0();
      iVar3 = *(int *)(puVar1 + 0xac);
      if (iVar3 == 0) {
LAB_005a5480:
        *(int *)(puVar1 + 0x94) = iVar3;
        iVar2 = FUN_00552f64(puVar1 + 0x98);
        return iVar2;
      }
    }
  }
  return iVar2;
}


// 0x05a557c (0xb0 bytes)
ulonglong FUN_005a557c(undefined4 param_1)

{
  undefined *puVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  
  puVar1 = PTR_DAT_0071bea4;
  uVar2 = 0;
  if (*(int *)(PTR_DAT_0071bea4 + 0xac) == 0) {
    uVar2 = FUN_00552fdc(PTR_DAT_0071bea4 + 0x98);
    if ((int)uVar2 != 0) goto LAB_005a55bc;
    *(undefined4 *)(puVar1 + 0x90) = 0;
    *(undefined4 *)(puVar1 + 0x94) = 1;
    *(undefined4 *)(puVar1 + 0x8c) = 0;
    uVar2 = FUN_005aa458(param_1);
    uVar3 = FUN_005aa4cc();
    if (uVar3 != 0) {
      uVar2 = uVar3;
    }
  }
  *(int *)(puVar1 + 0xac) = *(int *)(puVar1 + 0xac) + 1;
LAB_005a55bc:
  return uVar2 & 0xffffffff;
}


// 0x05a562c (0x7c bytes)
void FUN_005a562c(int param_1)

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
  
  puVar11 = PTR_PTR_0071bf94;
  puVar10 = PTR_PTR_0071bf90;
  puVar9 = PTR_PTR_0071bf8c;
  puVar8 = PTR_PTR_0071bf84;
  puVar7 = PTR_PTR_0071bf80;
  puVar6 = PTR_PTR_0071bf7c;
  puVar5 = PTR_PTR_0071bf78;
  puVar4 = PTR_PTR_0071bf74;
  puVar3 = PTR_PTR_0071bf70;
  puVar2 = PTR_PTR_0071bf6c;
  puVar1 = PTR_PTR_0071bf68;
  *(undefined **)(param_1 + 0xa4) = PTR_PTR_0071bf88;
  *(undefined **)(param_1 + 0xa8) = puVar9;
  *(undefined **)(param_1 + 0xac) = puVar10;
  *(undefined **)(param_1 + 0xb0) = puVar11;
  *(undefined **)(param_1 + 0x84) = puVar1;
  *(undefined **)(param_1 + 0x88) = puVar2;
  *(undefined **)(param_1 + 0x8c) = puVar3;
  *(undefined **)(param_1 + 0x90) = puVar4;
  *(undefined **)(param_1 + 0x94) = puVar5;
  *(undefined **)(param_1 + 0x98) = puVar6;
  *(undefined **)(param_1 + 0x9c) = puVar7;
  *(undefined **)(param_1 + 0xa0) = puVar8;
  return;
}


// 0x05a56a8 (0x30 bytes)
ulonglong FUN_005a56a8(int param_1)

{
  ulonglong uVar1;
  
  uVar1 = 0;
  if (param_1 != 0) {
    uVar1 = (ulonglong)((int)*(uint *)(param_1 + 0xc) >> 0x1f);
    uVar1 = (((uVar1 ^ *(uint *)(param_1 + 0xc)) - uVar1) + -1 << 0x20) >> 0x3f ^ 1;
  }
  return uVar1;
}


// 0x05a56d8 (0x50 bytes)
int FUN_005a56d8(int param_1,uint param_2)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0x80);
  if ((((*(int *)(param_1 + 0xc) == 1) && (iVar1 != 0)) && (*(int *)(iVar1 + 4) != 0)) &&
     ((param_2 & 0x50) == 0)) {
    return iVar1;
  }
  return *(int *)(param_1 + 0x78);
}


// 0x05a5728 (0x3c bytes)
undefined8 FUN_005a5728(int param_1,undefined4 param_2)

{
  if (*(int *)(param_1 + 0x7c) != 0) {
    *(undefined4 *)(*(int *)(*(int *)(param_1 + 0x7c) + 0xc) + 0x34) = param_2;
  }
  if (*(int *)(param_1 + 0x80) == 0) {
    return 0;
  }
  *(undefined4 *)(*(int *)(*(int *)(param_1 + 0x80) + 0xc) + 0x34) = param_2;
  return 0;
}


// 0x05a5764 (0x34 bytes)
undefined4 FUN_005a5764(int param_1)

{
  undefined4 uVar1;
  
  uVar1 = FUN_0054eb50(*(undefined4 *)(*(int *)(*(int *)(param_1 + 0x78) + 0xc) + 0x10));
  return uVar1;
}


// 0x05a5798 (0x1d8 bytes)
/* WARNING: Removing unreachable block (ram,0x005a58d0) */
/* WARNING: Removing unreachable block (ram,0x005a5964) */

undefined8
FUN_005a5798(undefined8 param_1,undefined4 *param_2,undefined4 *param_3,undefined4 *param_4,
            undefined4 *param_5)

{
  bool bVar1;
  int iVar2;
  int iVar4;
  undefined8 uVar3;
  int iVar5;
  int iVar6;
  int iVar7;
  GPiece<4> local_80;
  GPiece<12> local_7c;
  
  iVar4 = FUN_005a1504();
  uVar3 = 2;
  if (iVar4 != 0) {
    iVar6 = 0;
    iVar5 = 0;
    iVar7 = 0;
    do {
      iVar2 = *(int *)(iVar4 + iVar7 + 0x7c);
      if (iVar2 != 0) {
        FUN_005c20f0(*(int *)(iVar2 + 0xc) + 0x5c,local_80);
        iVar6 = iVar6 + *(int *)(*(int *)(iVar2 + 0xc) + 0x38);
        FUN_005c20f0(*(int *)(iVar2 + 0xc) + 0x40,local_7c);
        iVar5 = iVar5 + *(int *)(*(int *)(iVar2 + 0xc) + 0x3c);
      }
      bVar1 = iVar7 != 4;
      iVar7 = iVar7 + 4;
    } while (bVar1);
    *param_2 = 0;
    *param_3 = 0;
    if (iVar6 == 0) {
      *param_4 = 0;
      uVar3 = 52000;
    }
    else {
      uVar3 = 0;
      *param_4 = 0;
    }
    if (iVar5 == 0) {
      *param_5 = 0;
      uVar3 = 52000;
    }
    else {
      *param_5 = 0;
    }
  }
  return uVar3;
}


// 0x05a5970 (0x19c bytes)
undefined4 FUN_005a5970(int *param_1,int param_2,undefined4 *param_3)

{
  uint uVar1;
  undefined4 uVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  
  if ((*(int *)(param_2 + 0x44) != 0) && (*(int *)(param_2 + 0x40) != 0)) {
    iVar5 = *param_1;
    *param_3 = 0;
    uVar4 = *(uint *)(param_2 + 0x40);
    if (iVar5 == 0) {
      if (0x1000 < uVar4) {
        iVar5 = *(int *)(param_2 + 0x44);
        uVar3 = uVar4 - 0x1000;
        iVar6 = param_2 + iVar5 * 8;
        uVar1 = *(uint *)(iVar6 + -4);
        if (uVar1 < uVar4 - 0x1000) {
          do {
            iVar5 = iVar5 + -1;
            *(int *)(param_2 + 0x44) = iVar5;
            iVar6 = param_2 + iVar5 * 8;
            uVar4 = uVar4 - *(int *)(param_2 + iVar5 * 8 + 4);
            uVar3 = uVar4 - 0x1000;
            *(uint *)(param_2 + 0x40) = uVar4;
            if (uVar4 < 0x1001) goto LAB_005a5ad8;
            uVar1 = *(uint *)(iVar6 + -4);
          } while (uVar1 < uVar3);
        }
        *(uint *)(iVar6 + -4) = uVar1 - uVar3;
        *(uint *)(param_2 + 0x40) = *(int *)(param_2 + 0x40) - uVar3;
      }
LAB_005a5ad8:
      uVar2 = FUN_0054f908(*(undefined4 *)(param_1[3] + 0x10),param_2,param_3);
      return uVar2;
    }
    if (iVar5 != 1) {
      return 4;
    }
    uVar1 = uVar4;
    if (0x643 < uVar4) {
      uVar1 = 0x643;
    }
    do {
      if (uVar4 <= uVar1) {
        iVar5 = param_1[3];
        uVar2 = FUN_0054f7a0(*(undefined4 *)(iVar5 + 0x10),*(undefined8 *)(iVar5 + 4),
                             *(undefined4 *)(iVar5 + 0xc),param_2,param_3);
        return uVar2;
      }
      iVar5 = *(int *)(param_2 + 0x44) + -1;
      *(int *)(param_2 + 0x44) = iVar5;
      uVar4 = uVar4 - *(int *)(param_2 + iVar5 * 8 + 4);
      *(uint *)(param_2 + 0x40) = uVar4;
    } while (iVar5 != 0);
  }
  return 0;
}


// 0x05a5b0c (0x404 bytes)
/* WARNING: Removing unreachable block (ram,0x005a5ce8) */
/* WARNING: Removing unreachable block (ram,0x005a5d10) */
/* WARNING: Removing unreachable block (ram,0x005a5d18) */
/* WARNING: Removing unreachable block (ram,0x005a5dc8) */
/* WARNING: Removing unreachable block (ram,0x005a5e9c) */
/* WARNING: Removing unreachable block (ram,0x005a5de0) */
/* WARNING: Removing unreachable block (ram,0x005a5d28) */
/* WARNING: Removing unreachable block (ram,0x005a5eb8) */
/* WARNING: Removing unreachable block (ram,0x005a5eec) */
/* WARNING: Removing unreachable block (ram,0x005a5ef8) */
/* WARNING: Removing unreachable block (ram,0x005a5f0c) */
/* WARNING: Removing unreachable block (ram,0x005a5d3c) */
/* WARNING: Removing unreachable block (ram,0x005a5df4) */
/* WARNING: Removing unreachable block (ram,0x005a5d40) */
/* WARNING: Removing unreachable block (ram,0x005a5d78) */
/* WARNING: Removing unreachable block (ram,0x005a5e18) */
/* WARNING: Removing unreachable block (ram,0x005a5e30) */
/* WARNING: Removing unreachable block (ram,0x005a5d98) */
/* WARNING: Removing unreachable block (ram,0x005a5da8) */
/* WARNING: Removing unreachable block (ram,0x005a5db0) */

ulonglong FUN_005a5b0c(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  int local_d0 [2];
  uint auStack_c8 [17];
  uint local_84;
  
  iVar1 = *(int *)(param_1 + 0xc);
  if (*(int *)(iVar1 + 0x80) == 0) {
    *(undefined4 *)(iVar1 + 0x88) = 0;
    *(undefined4 *)(iVar1 + 0x84) = 0;
    if (*(int *)(iVar1 + 0x8c) == 0) {
      *(undefined4 *)(iVar1 + 0x94) = 0;
      *(undefined4 *)(iVar1 + 0x8c) = 0;
      *(undefined4 *)(iVar1 + 0x90) = 0;
      *(undefined4 *)(iVar1 + 0xac) = 0;
      *(undefined4 *)(iVar1 + 0xa4) = 0;
      *(undefined4 *)(iVar1 + 0xa8) = 0;
      uVar6 = FUN_005c20f0(iVar1 + 0x5c,local_d0);
      if (((int)uVar6 == 0) && (local_d0[0] != 0)) {
        uVar6 = FUN_005c20c8(iVar1 + 0x5c);
      }
      goto LAB_005a5b88;
    }
  }
  else {
    uVar6 = (ulonglong)*(uint *)(iVar1 + 0x80);
    if (8 < uVar6) {
      uVar6 = 8;
    }
    uVar7 = 0;
    local_84 = 0;
    uVar8 = (ulonglong)*(uint *)(iVar1 + 0x84);
    if ((int)uVar6 != 0) {
      iVar2 = *(int *)(iVar1 + 0x78);
      while( true ) {
        iVar5 = (int)((uVar7 & 0xffffffff) << 3);
        iVar3 = *(int *)((int)((uVar8 & 0xffffffff) << 2) + iVar2);
        if ((int)uVar7 < 8) {
          uVar4 = *(undefined4 *)(iVar3 + 4);
          *(uint *)((int)auStack_c8 + iVar5 + 4) = (uint)*(ushort *)(iVar3 + 8);
          uVar7 = (ulonglong)local_84 + 1;
          *(undefined4 *)((int)auStack_c8 + iVar5) = uVar4;
          local_84 = (uint)uVar7;
        }
        uVar6 = uVar6 - 1;
        if (uVar6 == 0) break;
        uVar8 = (uVar8 + 1) -
                (longlong)(int)((uVar8 + 1 & 0xffffffff) / (ulonglong)*(uint *)(iVar1 + 0x7c)) *
                (longlong)(int)*(uint *)(iVar1 + 0x7c);
      }
    }
    uVar6 = FUN_005a5970(param_1,auStack_c8,local_d0);
    if (uVar6 != 0) goto LAB_005a5b88;
  }
  uVar6 = 0;
LAB_005a5b88:
  return uVar6 & 0xffffffff;
}


// 0x05a5f10 (0x29c bytes)
/* WARNING: Removing unreachable block (ram,0x005a6080) */
/* WARNING: Removing unreachable block (ram,0x005a6090) */
/* WARNING: Removing unreachable block (ram,0x005a60a0) */
/* WARNING: Removing unreachable block (ram,0x005a60b0) */
/* WARNING: Removing unreachable block (ram,0x005a60c8) */
/* WARNING: Removing unreachable block (ram,0x005a60e0) */
/* WARNING: Removing unreachable block (ram,0x005a60ec) */
/* WARNING: Removing unreachable block (ram,0x005a60f4) */
/* WARNING: Removing unreachable block (ram,0x005a6100) */
/* WARNING: Removing unreachable block (ram,0x005a610c) */
/* WARNING: Removing unreachable block (ram,0x005a6128) */
/* WARNING: Removing unreachable block (ram,0x005a6140) */
/* WARNING: Removing unreachable block (ram,0x005a6148) */
/* WARNING: Removing unreachable block (ram,0x005a6180) */
/* WARNING: Removing unreachable block (ram,0x005a619c) */
/* WARNING: Removing unreachable block (ram,0x005a61a8) */

ulonglong FUN_005a5f10(int param_1,int param_2)

{
  int iVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  int iVar4;
  GPiece<4> local_60;
  GPiece<12> local_5c;
  
  iVar1 = *(int *)(param_1 + 0xc);
  iVar4 = iVar1 + 0x5c;
  uVar2 = FUN_005c21a8(iVar4,local_5c);
  if (((int)uVar2 != 0) || (param_2 == 0)) {
LAB_005a5f98:
    return uVar2 & 0xffffffff;
  }
  uVar3 = FUN_005c2368(iVar4,local_60);
  if (uVar3 == 0) {
    uVar3 = FUN_005a5b0c(param_1);
    if ((uVar3 == 0) && (uVar3 = FUN_005c21a8(iVar1 + 0x5c,local_5c), uVar3 == 0)) {
      if (param_2 != 0) {
        uVar2 = 0xcb2c;
      }
      goto LAB_005a5f98;
    }
  }
  return uVar3 & 0xffffffff;
}


// 0x05a61ac (0x56c bytes)
/* WARNING: Removing unreachable block (ram,0x005a66d4) */
/* WARNING: Removing unreachable block (ram,0x005a6708) */
/* WARNING: Removing unreachable block (ram,0x005a66f4) */
/* WARNING: Removing unreachable block (ram,0x005a66fc) */
/* WARNING: Removing unreachable block (ram,0x005a66b8) */
/* WARNING: Removing unreachable block (ram,0x005a66bc) */
/* WARNING: Removing unreachable block (ram,0x005a66c8) */
/* WARNING: Removing unreachable block (ram,0x005a6468) */
/* WARNING: Removing unreachable block (ram,0x005a6478) */
/* WARNING: Removing unreachable block (ram,0x005a6490) */
/* WARNING: Removing unreachable block (ram,0x005a64b0) */
/* WARNING: Type propagation algorithm not settling */

int FUN_005a61ac(int param_1)

{
  bool bVar1;
  undefined1 uVar2;
  undefined1 uVar3;
  undefined1 uVar4;
  short sVar5;
  int iVar6;
  undefined4 *puVar7;
  void *__src;
  bool bVar8;
  undefined *puVar9;
  int iVar10;
  uint uVar11;
  void *__dest;
  uint uVar12;
  int iVar13;
  int *piVar14;
  short sVar15;
  undefined1 *puVar16;
  byte in_cr0;
  byte in_cr1;
  byte in_cr2;
  byte in_cr3;
  byte unaff_cr4;
  byte in_cr5;
  byte in_cr6;
  byte in_cr7;
  uint uStack00000008;
  GPiece<2> local_60;
  ushort local_5e [11];
  
  uStack00000008 =
       (uint)(in_cr0 & 0xf) << 0x1c | (uint)(in_cr1 & 0xf) << 0x18 | (uint)(in_cr2 & 0xf) << 0x14 |
       (uint)(in_cr3 & 0xf) << 0x10 | (uint)(unaff_cr4 & 0xf) << 0xc | (uint)(in_cr5 & 0xf) << 8 |
       (uint)(in_cr6 & 0xf) << 4 | (uint)(in_cr7 & 0xf);
  iVar6 = *(int *)(param_1 + 0xc);
  piVar14 = (int *)(iVar6 + 0x8c);
  if (*piVar14 == 0) {
    return 0;
  }
  if (*(int *)(iVar6 + 0x80) + 1U < *(uint *)(iVar6 + 0x7c)) {
    sVar5 = *(short *)(iVar6 + 0xb0);
  }
  else {
    iVar10 = FUN_005a5b0c(param_1);
    if (iVar10 != 0) {
      return iVar10;
    }
    if (*(uint *)(iVar6 + 0x7c) <= *(int *)(iVar6 + 0x80) + 1U) {
      return 0xcb2c;
    }
    sVar5 = *(short *)(iVar6 + 0xb0);
  }
  if (sVar5 == 1) {
    __dest = *(void **)(iVar6 + 0x90);
    FUN_00551ef4(__dest,local_60);
    FUN_00551f9c((int)__dest + 1,local_5e);
    puVar9 = PTR_DAT_0071bf98;
    memcpy(*(void **)PTR_DAT_0071bf98,(void *)((int)__dest + 3),(uint)local_5e[0]);
    iVar10 = (int)__dest - *(int *)(iVar6 + 0x6c);
    iVar10 = (iVar10 + 3U & 0xfffffffc) - iVar10;
    if (iVar10 != 0) {
      __dest = (void *)((int)__dest + iVar10);
    }
    __src = *(void **)puVar9;
    *(short *)(iVar6 + 0x96) = 3 - (short)iVar10;
    memcpy(__dest,__src,(uint)local_5e[0]);
    *(void **)(iVar6 + 0x90) = __dest;
    *(ushort *)(iVar6 + 0x94) = local_5e[0];
  }
  uVar11 = 0;
  sVar5 = *(short *)(iVar6 + 0x94);
  iVar10 = FUN_005a124c(*(undefined4 *)(param_1 + 8));
  puVar7 = *(undefined4 **)(iVar10 + 0xbc);
  if (puVar7 != (undefined4 *)0x0) {
    uVar11 = (*(code *)*puVar7)(*(undefined4 *)(iVar10 + 0xb8),0,0);
  }
  bVar1 = -1 < (int)(((int)puVar7 >> 0x1f) - ((int)puVar7 >> 0x1f ^ (uint)puVar7));
  if ((bVar1) || (sVar5 == 0)) {
    bVar8 = false;
    sVar15 = 3;
    iVar13 = *piVar14 - *(int *)(iVar6 + 0x6c);
    iVar10 = *(int *)(iVar6 + 0x90) + -3;
    *(int *)(iVar6 + 0x90) = iVar10;
    puVar16 = (undefined1 *)(*piVar14 + ((iVar13 + 3U & 0xfffffffc) - iVar13));
  }
  else {
    if ((uVar11 & 0xe0000000) == 0xe0000000) {
      return 0xcb2d;
    }
    bVar8 = true;
    sVar15 = 7;
    uVar11 = (*(code *)**(undefined4 **)(iVar10 + 0xbc))
                       (*(undefined4 *)(iVar10 + 0xb8),*(undefined4 *)(iVar6 + 0x90),sVar5);
    iVar13 = *piVar14 - *(int *)(iVar6 + 0x6c);
    iVar10 = *(int *)(iVar6 + 0x90) + -7;
    *(int *)(iVar6 + 0x90) = iVar10;
    puVar16 = (undefined1 *)(*piVar14 + ((iVar13 + 3U & 0xfffffffc) - iVar13));
  }
  if (bVar1) {
    FUN_00551ed8(iVar10,0x3b);
    FUN_00551f78(*(int *)(iVar6 + 0x90) + 1,sVar5);
  }
  else {
    FUN_00551ed8(iVar10,0xbb);
    FUN_00551f78(*(int *)(iVar6 + 0x90) + 1,sVar5);
  }
  if (bVar8) {
    FUN_00552570(*(int *)(iVar6 + 0x90) + 3,uVar11);
  }
  uVar2 = *(undefined1 *)(iVar6 + 0x8d);
  uVar3 = *(undefined1 *)(iVar6 + 0x8e);
  uVar4 = *(undefined1 *)(iVar6 + 0x8f);
  *(short *)(iVar6 + 0x94) = sVar15 + sVar5;
  *puVar16 = *(undefined1 *)piVar14;
  puVar16[1] = uVar2;
  puVar16[2] = uVar3;
  puVar16[3] = uVar4;
  uVar2 = *(undefined1 *)(iVar6 + 0x91);
  uVar3 = *(undefined1 *)(iVar6 + 0x92);
  uVar4 = *(undefined1 *)(iVar6 + 0x93);
  puVar16[4] = *(undefined1 *)(iVar6 + 0x90);
  puVar16[5] = uVar2;
  puVar16[6] = uVar3;
  puVar16[7] = uVar4;
  uVar2 = *(undefined1 *)(iVar6 + 0x94);
  uVar3 = *(undefined1 *)(iVar6 + 0x96);
  uVar4 = *(undefined1 *)(iVar6 + 0x97);
  puVar16[9] = *(undefined1 *)(iVar6 + 0x95);
  puVar16[10] = uVar3;
  puVar16[8] = uVar2;
  puVar16[0xb] = uVar4;
  uVar11 = *(uint *)(iVar6 + 0x7c);
  uVar12 = *(int *)(iVar6 + 0x88) + 1;
  *(int *)(iVar6 + 0x80) = *(int *)(iVar6 + 0x80) + 1;
  *(undefined1 **)(*(int *)(iVar6 + 0x88) * 4 + *(int *)(iVar6 + 0x78)) = puVar16;
  *(uint *)(iVar6 + 0x88) = uVar12 - (uVar12 / uVar11) * uVar11;
  *piVar14 = 0;
  *(undefined4 *)(iVar6 + 0x94) = 0;
  *(undefined4 *)(iVar6 + 0x90) = 0;
  *(undefined4 *)(iVar6 + 0xa0) = 0;
  *(undefined4 *)(iVar6 + 0x98) = 0;
  *(undefined4 *)(iVar6 + 0x9c) = 0;
  *(undefined2 *)(iVar6 + 0xb0) = 0;
  return 0;
}


// 0x05a6718 (0x5f4 bytes)
ulonglong FUN_005a6718(int param_1,uint param_2,uint param_3,int param_4,byte param_5)

{
  bool bVar1;
  int iVar2;
  bool bVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  uint uVar6;
  short sVar7;
  uint uVar8;
  undefined2 uVar9;
  undefined1 uVar10;
  int iVar11;
  int iVar12;
  void *pvVar13;
  void *pvVar14;
  int iVar15;
  uint local_80;
  GPiece<12> local_7c;
  
  if ((param_4 == 0) || (uVar8 = *(uint *)(param_4 + 0x40), 0x578 < uVar8)) {
    uVar5 = 2;
    goto LAB_005a6790;
  }
  iVar2 = *(int *)(param_1 + 0xc);
  uVar4 = FUN_005c21a8(iVar2 + 0x5c,&local_80);
  uVar5 = uVar4;
  if ((int)uVar4 != 0) goto LAB_005a6790;
  if (uVar8 == 0) {
    uVar8 = *(ushort *)(iVar2 + 0x94) + 0x45 & 0xffffffc0;
    uVar6 = uVar8 - *(ushort *)(iVar2 + 0x94);
joined_r0x005a682c:
    if ((uVar6 <= local_80) && (uVar8 < 0x579)) {
      iVar2 = *(int *)(param_1 + 0xc);
      *(undefined4 *)(iVar2 + 0xa0) = 0;
      *(undefined4 *)(iVar2 + 0x98) = 0;
      *(undefined4 *)(iVar2 + 0x9c) = 0;
      goto LAB_005a6854;
    }
    uVar5 = FUN_005a61ac(param_1);
    if (uVar5 != 0) goto LAB_005a6790;
    uVar8 = *(uint *)(param_4 + 0x40);
  }
  else {
    if (*(int *)(iVar2 + 0x8c) != 0) {
      uVar8 = (uint)*(ushort *)(iVar2 + 0x94) + uVar8 + 0x45 & 0xffffffc0;
      uVar6 = uVar8 - *(ushort *)(iVar2 + 0x94);
      goto joined_r0x005a682c;
    }
LAB_005a6854:
    uVar8 = *(uint *)(param_4 + 0x40);
  }
  if (uVar8 < 0x644) {
    iVar2 = *(int *)(param_1 + 0xc);
    iVar15 = iVar2 + 0x5c;
    sVar7 = (short)uVar8;
    uVar9 = (undefined2)param_3;
    uVar10 = (undefined1)param_2;
    if (*(int *)(iVar2 + 0x8c) == 0) {
      iVar11 = uVar8 + 3;
      *(short *)(iVar2 + 0xa0) = sVar7;
      if (((param_2 - 0x33 < 2) || (param_2 == 0x36)) || (bVar1 = false, param_2 == 0x32)) {
        iVar11 = uVar8 + 4;
        bVar1 = true;
        *(short *)(iVar2 + 0xa0) = sVar7 + 1;
      }
      if (((param_2 == 3) || (param_2 == 0x33)) || (bVar3 = false, param_2 == 0x1b)) {
        iVar11 = iVar11 + 2;
        bVar3 = true;
        *(short *)(iVar2 + 0xa0) = *(short *)(iVar2 + 0xa0) + 2;
      }
      if (iVar11 + 7U < 0x644) {
        uVar5 = FUN_005a5f10(param_1,iVar11 + 0x1c);
        if ((((int)uVar5 != 0) || (uVar5 = FUN_005c22c0(iVar15,local_7c), (int)uVar5 != 0)) ||
           (uVar5 = FUN_005c2880(iVar15,iVar11 + 0x18), (int)uVar5 != 0)) goto LAB_005a6790;
        *(int *)(iVar2 + 0x8c) = 0;
        *(undefined4 *)(iVar2 + 0x90) = 0x18;
        iVar12 = (-*(int *)(iVar2 + 0x6c) + 0x1bU & 0xfffffffc) - (-*(int *)(iVar2 + 0x6c) + 0x18);
        if (iVar12 != 0) {
          *(int *)(iVar2 + 0x90) = iVar12 + 0x18;
          uVar5 = FUN_005c2880(iVar15,iVar12);
          if ((int)uVar5 != 0) goto LAB_005a6790;
        }
        iVar15 = *(int *)(iVar2 + 0x90);
        *(undefined1 *)(iVar2 + 0xb4) = uVar10;
        FUN_00551ed8(iVar15,param_2 & 0xff);
        *(int *)(iVar2 + 0x9c) = iVar15 + 1;
        FUN_00551f78(iVar15 + 1,*(undefined2 *)(iVar2 + 0xa0));
        pvVar13 = (void *)(iVar15 + 3);
        if (bVar1) {
          pvVar13 = (void *)(iVar15 + 4);
          FUN_00551ed8((void *)(iVar15 + 3),param_5);
        }
        pvVar14 = pvVar13;
        if (bVar3) {
          *(undefined2 *)(iVar2 + 0xb2) = uVar9;
          pvVar14 = (void *)((int)pvVar13 + 2);
          FUN_00551f78(pvVar13,param_3 & 0xffff);
        }
        iVar15 = *(int *)(param_4 + 0x44) + -1;
        if (-1 < iVar15) {
          do {
            iVar12 = param_4 + iVar15 * 8;
            memcpy(pvVar14,*(void **)(param_4 + iVar15 * 8),*(size_t *)(iVar12 + 4));
            bVar1 = iVar15 != 0;
            iVar15 = iVar15 + -1;
            pvVar14 = (void *)((int)pvVar14 + *(int *)(iVar12 + 4));
          } while (bVar1);
        }
        *(short *)(iVar2 + 0x94) = (short)iVar11;
        *(undefined2 *)(iVar2 + 0xb0) = 1;
LAB_005a69d0:
        uVar5 = uVar4;
        if ((param_5 & 0x80) != 0) {
          if ((*(int *)(iVar2 + 0xb8) == 0) || (*(uint *)(iVar2 + 0xbc) == 0xffff)) {
            *(uint *)(iVar2 + 0xbc) = param_3;
          }
          else if ((param_3 != *(uint *)(iVar2 + 0xbc)) && (param_3 != 0xffff)) {
            *(undefined4 *)(iVar2 + 0xbc) = 0xfffe;
          }
          *(undefined4 *)(iVar2 + 0xb8) = 1;
        }
        goto LAB_005a6790;
      }
    }
    else {
      if (*(int *)(iVar2 + 0x9c) == 0) {
        *(short *)(iVar2 + 0xa0) = sVar7;
        *(undefined2 *)(iVar2 + 0xb2) = uVar9;
        *(undefined1 *)(iVar2 + 0xb4) = uVar10;
        if (((param_2 - 0x33 < 2) || (param_2 == 0x36)) ||
           (bVar1 = false, uVar6 = uVar8 + 3, param_2 == 0x32)) {
          bVar1 = true;
          *(short *)(iVar2 + 0xa0) = *(short *)(iVar2 + 0xa0) + 1;
          uVar6 = uVar8 + 4;
        }
        uVar8 = uVar6;
        if (((param_2 == 3) || (param_2 == 0x33)) || (bVar3 = false, param_2 == 0x1b)) {
          uVar8 = uVar8 + 2;
          bVar3 = true;
          *(short *)(iVar2 + 0xa0) = *(short *)(iVar2 + 0xa0) + 2;
        }
      }
      else {
        bVar1 = false;
        bVar3 = false;
        *(short *)(iVar2 + 0xa0) = sVar7 + *(short *)(iVar2 + 0xa0);
      }
      if (uVar8 + *(ushort *)(iVar2 + 0x94) + 7 < 0x644) {
        uVar5 = FUN_005a5f10(param_1,uVar8);
        if (((int)uVar5 != 0) || (uVar5 = FUN_005c2880(iVar15,uVar8), (int)uVar5 != 0))
        goto LAB_005a6790;
        pvVar13 = (void *)((uint)*(ushort *)(iVar2 + 0x94) + *(int *)(iVar2 + 0x90));
        if (*(int *)(iVar2 + 0x9c) == 0) {
          FUN_00551ed8(pvVar13,param_2 & 0xff);
          *(int *)(iVar2 + 0x9c) = (int)pvVar13 + 1;
          pvVar14 = (void *)((int)pvVar13 + 3);
          if (bVar1) {
            pvVar14 = (void *)((int)pvVar13 + 4);
            FUN_00551ed8((void *)((int)pvVar13 + 3),param_5);
          }
          pvVar13 = pvVar14;
          if (bVar3) {
            *(undefined2 *)(iVar2 + 0xb2) = uVar9;
            pvVar13 = (void *)((int)pvVar14 + 2);
            FUN_00551f78(pvVar14,param_3 & 0xffff);
          }
          *(undefined1 *)(iVar2 + 0xb4) = uVar10;
          *(short *)(iVar2 + 0xb0) = *(short *)(iVar2 + 0xb0) + 1;
        }
        FUN_00551f78(*(undefined4 *)(iVar2 + 0x9c),*(undefined2 *)(iVar2 + 0xa0));
        iVar15 = *(int *)(param_4 + 0x44) + -1;
        if (-1 < iVar15) {
          do {
            iVar11 = param_4 + iVar15 * 8;
            memcpy(pvVar13,*(void **)(param_4 + iVar15 * 8),*(size_t *)(iVar11 + 4));
            bVar1 = iVar15 != 0;
            iVar15 = iVar15 + -1;
            pvVar13 = (void *)((int)pvVar13 + *(int *)(iVar11 + 4));
          } while (bVar1);
        }
        *(short *)(iVar2 + 0x94) = (short)uVar8 + *(short *)(iVar2 + 0x94);
        goto LAB_005a69d0;
      }
    }
  }
  uVar5 = 2;
LAB_005a6790:
  return uVar5 & 0xffffffff;
}


// 0x05a6d0c (0x70 bytes)
undefined4
FUN_005a6d0c(undefined4 param_1,undefined4 param_2,undefined4 param_3,longlong param_4,int param_5,
            undefined4 param_6)

{
  undefined4 uVar1;
  GPiece<80> local_50;
  
  if ((param_4 != 0) || (uVar1 = 2, param_5 == 0)) {
    uVar1 = FUN_005a6718(param_1,param_2,param_3,local_50,param_6);
  }
  return uVar1;
}


// 0x05a6d7c (0xb4 bytes)
/* WARNING: Removing unreachable block (ram,0x005a6e00) */

int FUN_005a6d7c(int param_1)

{
  int iVar1;
  int iVar2;
  GPiece<4> local_40;
  GPiece<20> auStack_3c;
  
  thunk_FUN_00556a58(auStack_3c);
  iVar1 = *(int *)(param_1 + 0xc);
  while( true ) {
    if (*(int *)(iVar1 + 0x80) == 0) {
      return 0;
    }
    iVar2 = FUN_005a5b0c(param_1);
    if (iVar2 != 0) break;
    thunk_FUN_00556bb8(auStack_3c,local_40);
  }
  return iVar2;
}


// 0x05a6e30 (0xa8 bytes)
ulonglong FUN_005a6e30(undefined4 param_1,int param_2,undefined4 param_3)

{
  ulonglong uVar1;
  
  uVar1 = 2;
  if (param_2 != 0) {
    if (*(uint *)(param_2 + 0x40) < 0x579) {
      uVar1 = FUN_005a6718(param_1,param_3,0xffff,param_2,0xc0);
      if (((int)uVar1 == 0) && (uVar1 = FUN_005a61ac(param_1), uVar1 == 0)) {
        uVar1 = FUN_005a6d7c(param_1,10);
        return uVar1;
      }
    }
  }
  return uVar1 & 0xffffffff;
}


// 0x05a6ed8 (0x68 bytes)
undefined4 FUN_005a6ed8(undefined4 param_1,longlong param_2,int param_3,undefined4 param_4)

{
  undefined4 uVar1;
  GPiece<80> local_50;
  
  if ((param_2 != 0) || (uVar1 = 2, param_3 == 0)) {
    uVar1 = FUN_005a6e30(param_1,local_50,param_4);
  }
  return uVar1;
}


// 0x05a6f40 (0x110 bytes)
undefined8 FUN_005a6f40(undefined4 *param_1,undefined8 param_2,undefined4 param_3,uint param_4)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  int iVar3;
  ushort local_30 [12];
  
  if (param_4 < 2) {
    return 52000;
  }
  FUN_00551f9c(param_3,local_30);
  param_1[0x1d] = (uint)local_30[0];
  if (*(char *)(param_1 + 0x10) == '\0') {
    param_1[0x1d] = 1;
    puVar1 = (undefined4 *)param_1[0x12];
    param_1[2] = 8;
  }
  else {
    puVar1 = (undefined4 *)param_1[0x12];
    param_1[2] = 8;
  }
  if (puVar1 != (undefined4 *)0x0) {
    uVar2 = *param_1;
    (*(code *)*puVar1)(param_1[0x11],1,param_1[0x19],param_1[0x1d],0);
    iVar3 = FUN_005a139c(uVar2);
    if (iVar3 == 0) {
      return 0xcb23;
    }
  }
  return 0;
}


// 0x05a7050 (0x504 bytes)
int FUN_005a7050(int param_1)

{
  bool bVar1;
  undefined1 uVar2;
  undefined1 uVar3;
  int iVar4;
  code *pcVar5;
  longlong lVar6;
  ulonglong *puVar7;
  ulonglong uVar8;
  undefined *puVar9;
  ulonglong uVar10;
  undefined *puVar11;
  int iVar12;
  void *__src;
  undefined4 uVar13;
  undefined1 uVar14;
  ulonglong unaff_r21;
  ulonglong unaff_r22;
  ulonglong uVar15;
  ulonglong unaff_r23;
  ulonglong unaff_r24;
  uint uVar16;
  ulonglong unaff_r25;
  ulonglong uVar17;
  ulonglong unaff_r26;
  ulonglong uVar18;
  ulonglong unaff_r27;
  longlong lVar19;
  ulonglong unaff_r28;
  ulonglong unaff_r29;
  undefined8 uVar20;
  ulonglong uVar21;
  ulonglong unaff_r30;
  uint uVar22;
  void *__dest;
  int iVar23;
  ulonglong unaff_r31;
  byte in_cr0;
  byte in_cr1;
  byte in_cr2;
  byte in_cr3;
  byte unaff_cr4;
  byte in_cr5;
  byte in_cr6;
  byte in_cr7;
  ulonglong in_LR;
  
  uVar10 = ZEXT48(&stack0x00000000);
  puVar11 = &TOC_BASE;
  uVar17 = ZEXT48(puVar11);
  puVar7 = (ulonglong *)(uVar10 - 0x130);
  *puVar7 = uVar10;
  puVar7[0x1d] = unaff_r23;
  puVar7[0x25] = unaff_r31;
  puVar7[0x1b] = unaff_r21;
  puVar7[0x1c] = unaff_r22;
  puVar7[0x1e] = unaff_r24;
  puVar7[0x1f] = unaff_r25;
  puVar7[0x20] = unaff_r26;
  puVar7[0x21] = unaff_r27;
  puVar7[0x22] = unaff_r28;
  puVar7[0x23] = unaff_r29;
  puVar7[0x24] = unaff_r30;
  *(uint *)(puVar7 + 0x27) =
       (uint)(in_cr0 & 0xf) << 0x1c | (uint)(in_cr1 & 0xf) << 0x18 | (uint)(in_cr2 & 0xf) << 0x14 |
       (uint)(in_cr3 & 0xf) << 0x10 | (uint)(unaff_cr4 & 0xf) << 0xc | (uint)(in_cr5 & 0xf) << 8 |
       (uint)(in_cr6 & 0xf) << 4 | (uint)(in_cr7 & 0xf);
  puVar7[0x28] = in_LR;
  iVar12 = *(int *)(param_1 + 4);
  uVar22 = *(uint *)(param_1 + 0xb4) ^ 1;
  uVar16 = (int)uVar22 >> 0x1f;
  *(undefined4 *)(iVar12 + 0x14) = 0;
  puVar9 = PTR_DAT_0071bf9c;
  bVar1 = -1 < (int)(((uVar16 ^ uVar22) - uVar16) + -1);
  if (bVar1) {
    __src = (void *)0x0;
    uVar16 = 1;
    uVar15 = 0;
    lVar19 = 0xb;
    uVar20 = 1;
    uVar21 = 8;
  }
  else {
    if (*(int *)(param_1 + 0x3c) != 0) {
      iVar4 = *(int *)(param_1 + 0x38);
      uVar14 = *(undefined1 *)(iVar4 + 0x12);
      uVar2 = *(undefined1 *)(iVar4 + 0x13);
      uVar3 = *(undefined1 *)(iVar4 + 0x14);
      *(undefined1 *)(iVar12 + 0x18) = *(undefined1 *)(iVar4 + 0x11);
      *(undefined1 *)(iVar12 + 0x19) = uVar14;
      *(undefined1 *)(iVar12 + 0x1a) = uVar2;
      *(undefined1 *)(iVar12 + 0x1b) = uVar3;
      uVar14 = *(undefined1 *)(iVar4 + 0x16);
      uVar2 = *(undefined1 *)(iVar4 + 0x17);
      uVar3 = *(undefined1 *)(iVar4 + 0x18);
      *(undefined1 *)(iVar12 + 0x1c) = *(undefined1 *)(iVar4 + 0x15);
      *(undefined1 *)(iVar12 + 0x1d) = uVar14;
      *(undefined1 *)(iVar12 + 0x1e) = uVar2;
      *(undefined1 *)(iVar12 + 0x1f) = uVar3;
      uVar14 = *(undefined1 *)(iVar4 + 0x1a);
      uVar2 = *(undefined1 *)(iVar4 + 0x1b);
      uVar3 = *(undefined1 *)(iVar4 + 0x1c);
      *(undefined1 *)(iVar12 + 0x20) = *(undefined1 *)(iVar4 + 0x19);
      *(undefined1 *)(iVar12 + 0x21) = uVar14;
      *(undefined1 *)(iVar12 + 0x22) = uVar2;
      *(undefined1 *)(iVar12 + 0x23) = uVar3;
      uVar14 = *(undefined1 *)(iVar4 + 0x1d);
      uVar2 = *(undefined1 *)(iVar4 + 0x1e);
      uVar3 = *(undefined1 *)(iVar4 + 0x1f);
      *(undefined1 *)(iVar12 + 0x27) = *(undefined1 *)(iVar4 + 0x20);
      *(undefined1 *)(iVar12 + 0x24) = uVar14;
      *(undefined1 *)(iVar12 + 0x25) = uVar2;
      *(undefined1 *)(iVar12 + 0x26) = uVar3;
      iVar12 = *(int *)(param_1 + 4);
      pcVar5 = (code *)**(undefined4 **)(*(int *)puVar9 + 0x84);
      puVar7[5] = ZEXT48(&TOC_BASE);
      uVar13 = (*pcVar5)(iVar12 + 0x18,0x10);
      uVar17 = puVar7[5];
      *(undefined4 *)(iVar12 + 0x14) = uVar13;
      iVar12 = 0;
      do {
        iVar4 = *(int *)(param_1 + 4);
        uVar14 = FUN_00552968();
        iVar23 = iVar12 + 1;
        *(undefined1 *)(iVar4 + iVar12 + 0x28) = uVar14;
        iVar12 = iVar23;
      } while (iVar23 != 0x10);
    }
    uVar15 = 0;
    pcVar5 = (code *)**(undefined4 **)(*(int *)puVar9 + 0x98);
    puVar7[5] = uVar17;
    __src = (void *)(*pcVar5)();
    puVar11 = (undefined *)puVar7[5];
    uVar17 = 0x12;
    if (__src != (void *)0x0) {
      uVar15 = (ulonglong)*(byte *)((int)__src + 2) * 0x100 +
               (ulonglong)*(byte *)((int)__src + 3) + 4;
      uVar17 = uVar15 + 0x12;
    }
    lVar19 = uVar17 + 3;
    uVar16 = 3;
    uVar20 = 3;
    uVar21 = uVar17;
    if (*(int *)(*(int *)(param_1 + 4) + 0x14) != 0) {
      uVar21 = uVar17 + 0x10;
      lVar19 = uVar17 + 0x13;
    }
  }
  lVar6 = (uVar10 - 0x130) - (lVar19 + 0x1eU & 0xfffffffffffffff0);
  *(ulonglong *)lVar6 = *puVar7;
  uVar18 = lVar6 + 0x70;
  uVar17 = lVar6 + 0x79;
  FUN_00551ed8(uVar18 & 0xffffffff,0x24);
  FUN_00551f78(lVar6 + 0x71U & 0xffffffff,uVar21 & 0xffff);
  FUN_00551f78(lVar6 + 0x73U & 0xffffffff,1);
  FUN_00551f78(lVar6 + 0x75U & 0xffffffff,0x71);
  FUN_00551f78(lVar6 + 0x77U & 0xffffffff,uVar20);
  if (bVar1) {
    FUN_00551f78(uVar17 & 0xffffffff,0);
  }
  else {
    if (uVar16 != 0) {
      uVar22 = 0;
      uVar21 = uVar17;
      iVar12 = *(int *)(puVar11 + -0x6388);
      do {
        uVar8 = uVar21 & 0xffffffff;
        uVar22 = uVar22 + 1;
        uVar21 = uVar21 + 2;
        FUN_00551f78(uVar8,*(undefined2 *)(iVar12 + 2));
        iVar12 = iVar12 + 4;
      } while (uVar16 != uVar22);
      uVar17 = uVar17 + (ulonglong)uVar16 * 2;
    }
    uVar21 = uVar17 + 2;
    __dest = (void *)uVar21;
    FUN_00551f78(uVar17 & 0xffffffff,uVar15 & 0xffff);
    if ((size_t)uVar15 == 0) {
      FUN_00552570(uVar21 & 0xffffffff,*(undefined4 *)(*(int *)(param_1 + 4) + 0x14));
      iVar12 = *(int *)(param_1 + 4);
      iVar4 = *(int *)(iVar12 + 0x14);
    }
    else {
      memcpy(__dest,__src,(size_t)uVar15);
      FUN_00552570(uVar21 + uVar15 & 0xffffffff,*(undefined4 *)(*(int *)(param_1 + 4) + 0x14));
      iVar12 = *(int *)(param_1 + 4);
      iVar4 = *(int *)(iVar12 + 0x14);
      __dest = (void *)(uVar21 + uVar15);
    }
    if (iVar4 != 0) {
      uVar14 = *(undefined1 *)(iVar12 + 0x29);
      uVar2 = *(undefined1 *)(iVar12 + 0x2a);
      uVar3 = *(undefined1 *)(iVar12 + 0x2b);
      *(undefined1 *)((int)__dest + 4) = *(undefined1 *)(iVar12 + 0x28);
      *(undefined1 *)((int)__dest + 5) = uVar14;
      *(undefined1 *)((int)__dest + 6) = uVar2;
      *(undefined1 *)((int)__dest + 7) = uVar3;
      uVar14 = *(undefined1 *)(iVar12 + 0x2d);
      uVar2 = *(undefined1 *)(iVar12 + 0x2e);
      uVar3 = *(undefined1 *)(iVar12 + 0x2f);
      *(undefined1 *)((int)__dest + 8) = *(undefined1 *)(iVar12 + 0x2c);
      *(undefined1 *)((int)__dest + 9) = uVar14;
      *(undefined1 *)((int)__dest + 10) = uVar2;
      *(undefined1 *)((int)__dest + 0xb) = uVar3;
      uVar14 = *(undefined1 *)(iVar12 + 0x31);
      uVar2 = *(undefined1 *)(iVar12 + 0x32);
      uVar3 = *(undefined1 *)(iVar12 + 0x33);
      *(undefined1 *)((int)__dest + 0xc) = *(undefined1 *)(iVar12 + 0x30);
      *(undefined1 *)((int)__dest + 0xd) = uVar14;
      *(undefined1 *)((int)__dest + 0xe) = uVar2;
      *(undefined1 *)((int)__dest + 0xf) = uVar3;
      uVar14 = *(undefined1 *)(iVar12 + 0x34);
      uVar2 = *(undefined1 *)(iVar12 + 0x35);
      uVar3 = *(undefined1 *)(iVar12 + 0x36);
      *(undefined1 *)((int)__dest + 0x13) = *(undefined1 *)(iVar12 + 0x37);
      *(undefined1 *)((int)__dest + 0x10) = uVar14;
      *(undefined1 *)((int)__dest + 0x11) = uVar2;
      *(undefined1 *)((int)__dest + 0x12) = uVar3;
    }
  }
  uVar13 = *(undefined4 *)(param_1 + 0x78);
  *(undefined4 *)((int)puVar7 + 0x74) = 0;
  *(undefined4 *)(puVar7 + 0xe) = 0;
  thunk_FUN_00556a58(uVar10 - 0xb8);
  while( true ) {
    *(int *)(puVar7 + 0x10) = (int)uVar18;
    *(int *)((int)puVar7 + 0x84) = (int)lVar19;
    *(int *)(puVar7 + 0x18) = (int)lVar19;
    *(undefined4 *)((int)puVar7 + 0xc4) = 1;
    iVar12 = FUN_005a5970(uVar13,uVar10 - 0xb0 & 0xffffffff,uVar10 - 0xbc & 0xffffffff);
    if (iVar12 != 0) {
      return iVar12;
    }
    uVar16 = *(uint *)((int)puVar7 + 0x74);
    thunk_FUN_00556bb8(uVar10 - 0xb8 & 0xffffffff,uVar10 - 0xc0 & 0xffffffff);
    lVar19 = lVar19 - (ulonglong)uVar16;
    uVar18 = uVar18 + uVar16;
    if (10 < *(uint *)(puVar7 + 0xe)) break;
    if ((int)lVar19 == 0) {
      return 0;
    }
  }
  return 0xcb25;
}


// 0x05a7554 (0x130 bytes)
/* WARNING: Removing unreachable block (ram,0x005a75b4) */
/* WARNING: Removing unreachable block (ram,0x005a75b8) */
/* WARNING: Removing unreachable block (ram,0x005a75d0) */
/* WARNING: Removing unreachable block (ram,0x005a760c) */
/* WARNING: Removing unreachable block (ram,0x005a7618) */
/* WARNING: Removing unreachable block (ram,0x005a7650) */

undefined4 FUN_005a7554(int param_1)

{
  undefined4 uVar1;
  GPiece<24> local_40;
  
  uVar1 = FUN_0054ea34(*(undefined4 *)(*(int *)(*(int *)(param_1 + 0x78) + 0xc) + 0x10),local_40);
  return uVar1;
}


// 0x05a7684 (0x218 bytes)
undefined4 FUN_005a7684(uint *param_1)

{
  longlong lVar1;
  uint uVar2;
  void *__src;
  uint __n;
  code *pcVar3;
  ulonglong *puVar4;
  ulonglong *puVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  undefined *puVar8;
  ulonglong uVar9;
  undefined4 uVar10;
  int iVar11;
  ulonglong unaff_r24;
  ulonglong unaff_r25;
  ulonglong unaff_r26;
  ulonglong unaff_r27;
  ulonglong unaff_r28;
  ulonglong unaff_r29;
  ulonglong unaff_r30;
  ulonglong unaff_r31;
  ulonglong in_LR;
  
  uVar9 = ZEXT48(&TOC_BASE);
  lVar1 = ZEXT48(&stack0x00000000) - 0xb0;
  puVar4 = (ulonglong *)lVar1;
  *puVar4 = ZEXT48(&stack0x00000000);
  puVar4[0x14] = unaff_r30;
  puVar4[0x18] = in_LR;
  puVar4[0x10] = unaff_r26;
  puVar4[0x12] = unaff_r28;
  puVar4[0x15] = unaff_r31;
  uVar2 = param_1[3];
  puVar4[0xe] = unaff_r24;
  __src = (void *)param_1[0xe];
  puVar4[0xf] = unaff_r25;
  puVar4[0x11] = unaff_r27;
  puVar4[0x13] = unaff_r29;
  __n = param_1[0xf];
  if (2 < uVar2) {
    return 2;
  }
  uVar2 = param_1[7];
  uVar6 = (ulonglong)__n + 0x48 & 0xffffffff;
  lVar1 = lVar1 - (uVar6 + 0x1e & 0xfffffffffffffff0);
  puVar5 = (ulonglong *)lVar1;
  *puVar5 = *puVar4;
  uVar7 = lVar1 + 0x70U & 0xffffffff;
  FUN_00552570(uVar7,uVar2);
  puVar8 = PTR_DAT_0071bf9c;
  uVar10 = 0;
  if (*(int *)PTR_DAT_0071bf9c != 0) {
    pcVar3 = (code *)**(undefined4 **)(*(int *)PTR_DAT_0071bf9c + 0x9c);
    puVar5[5] = ZEXT48(&TOC_BASE);
    uVar10 = (*pcVar3)();
    uVar9 = puVar5[5];
  }
  FUN_00552570(lVar1 + 0x74U & 0xffffffff,uVar10);
  if (param_1[0x2f] == 0) {
    memset(lVar1 + 0x78U & 0xffffffff,0,0x40);
  }
  else {
    uVar2 = *param_1;
    pcVar3 = (code *)**(undefined4 **)(*(int *)puVar8 + 0x4c);
    puVar5[5] = uVar9;
    iVar11 = (*pcVar3)(uVar2 & 0x3fffffff,0xffff,0,lVar1 + 0x78U & 0xffffffff);
    if (iVar11 != 0) {
      return 0xcb30;
    }
  }
  if ((__src != (void *)0x0) && (__n != 0)) {
    memcpy(puVar5 + 0x17,__src,__n);
  }
  uVar2 = (int)param_1[3] >> 0x1f;
  uVar10 = FUN_005a6d0c(param_1[0x1e],(int)(uVar2 - (uVar2 ^ param_1[3])) >> 0x1f & 0x15,0xffff,
                        uVar7,uVar6,0xc0);
  return uVar10;
}


// 0x05a789c (0x134 bytes)
int FUN_005a789c(uint *param_1,int param_2,int param_3,int param_4)

{
  undefined *puVar1;
  undefined2 uVar2;
  int iVar3;
  uint uVar4;
  undefined2 local_30 [8];
  
  uVar2 = 0xffff;
  if (param_2 == 0x1b) {
    FUN_00551f9c(param_3,local_30);
    param_3 = param_3 + 2;
    param_4 = param_4 + -2;
    uVar2 = local_30[0];
  }
  puVar1 = PTR_DAT_0071bf9c;
  iVar3 = 2;
  if (param_4 == 0x40) {
    if (param_1[0x2d] == 1) {
      (*(code *)**(undefined4 **)(*(int *)PTR_DAT_0071bf9c + 0x2c))
                (*param_1 & 0x3fffffff,uVar2,*(undefined4 *)(param_1[1] + 8),param_3);
      uVar4 = (*(code *)**(undefined4 **)(*(int *)puVar1 + 0x3c))(param_1[0x2e]);
      param_1[0x2f] = uVar4;
    }
    iVar3 = 0;
    if ((param_1[2] == 3) && (iVar3 = FUN_005a7684(param_1), iVar3 == 0)) {
      param_1[2] = 4;
    }
  }
  return iVar3;
}


// 0x05a79d0 (0x1f4 bytes)
int FUN_005a79d0(int *param_1,int param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined4 uVar3;
  int iVar4;
  undefined1 *puVar5;
  
  puVar2 = PTR_DAT_0071bf98;
  iVar4 = 2;
  if (*param_1 == *(int *)(param_2 + 8)) {
    puVar5 = PTR_DAT_0071bf98 + 8;
    puVar1 = PTR_DAT_0071bf98 + 8;
    *puVar5 = 0;
    puVar2[9] = 0;
    puVar2[10] = 0;
    puVar2[0xb] = 0;
    puVar2[0xc] = 0;
    puVar2[0xd] = 0;
    puVar2[0xe] = 0;
    puVar2[0xf] = 0;
    puVar2[0x10] = 0;
    puVar2[0x11] = 0;
    puVar2[0x12] = 0;
    puVar2[0x13] = 0;
    puVar2[0x14] = 0;
    puVar2[0x15] = 0;
    puVar2[0x16] = 0;
    puVar2[0x17] = 0;
    puVar2[0x18] = 0;
    puVar2[0x19] = 0;
    puVar2[0x1a] = 0;
    puVar2[0x1b] = 0;
    puVar2[0x1c] = 0;
    puVar2[0x1d] = 0;
    puVar2[0x1e] = 0;
    puVar2[0x1f] = 0;
    puVar2[0x20] = 0;
    puVar2[0x21] = 0;
    puVar2[0x22] = 0;
    puVar2[0x23] = 0;
    puVar2[0x24] = 0;
    puVar2[0x25] = 0;
    puVar2[0x26] = 0;
    puVar2[0x27] = 0;
    FUN_00552570(puVar1,param_1[7]);
    uVar3 = 0;
    if (*(int *)PTR_DAT_0071bf9c != 0) {
      uVar3 = (*(code *)**(undefined4 **)(*(int *)PTR_DAT_0071bf9c + 0x9c))();
    }
    FUN_00552570(puVar2 + 0xc,uVar3);
    FUN_0054eecc(puVar2 + 0x10,*(undefined8 *)(param_1 + 4));
    FUN_00551f78(puVar2 + 0x20,*(undefined2 *)((int)param_1 + 0x1a));
    FUN_00551f78(puVar2 + 0x22,*(undefined2 *)((int)param_1 + 0x66));
    FUN_00552570(puVar2 + 0x24,*(undefined2 *)((int)param_1 + 0x6a));
    iVar4 = FUN_005a6d0c(param_2,0x16,0xffff,puVar5,0x20,0xc0);
    if (iVar4 == 0) {
      thunk_FUN_00556a58(param_1[1] + 0xc);
      return 0;
    }
  }
  return iVar4;
}


// 0x05a7bc4 (0x204 bytes)
/* WARNING: Removing unreachable block (ram,0x005a7cbc) */
/* WARNING: Removing unreachable block (ram,0x005a7cc8) */
/* WARNING: Removing unreachable block (ram,0x005a7cd0) */
/* WARNING: Removing unreachable block (ram,0x005a7e88) */
/* WARNING: Removing unreachable block (ram,0x005a7cd8) */
/* WARNING: Removing unreachable block (ram,0x005a7d00) */

undefined8 FUN_005a7bc4(int *param_1,int param_2,ulonglong param_3,undefined4 param_4,int param_5)

{
  undefined8 uVar1;
  byte in_cr0;
  byte in_cr1;
  byte in_cr2;
  byte in_cr3;
  byte unaff_cr4;
  byte in_cr5;
  byte in_cr6;
  byte in_cr7;
  uint uStack00000008;
  GPiece<12> local_4c;
  
  uStack00000008 =
       (uint)(in_cr0 & 0xf) << 0x1c | (uint)(in_cr1 & 0xf) << 0x18 | (uint)(in_cr2 & 0xf) << 0x14 |
       (uint)(in_cr3 & 0xf) << 0x10 | (uint)(unaff_cr4 & 0xf) << 0xc | (uint)(in_cr5 & 0xf) << 8 |
       (uint)(in_cr6 & 0xf) << 4 | (uint)(in_cr7 & 0xf);
  uVar1 = 2;
  if (*param_1 == *(int *)(param_2 + 8)) {
    if ((param_5 == 0) || ((param_3 & 0x80) == 0)) {
      if ((param_3 & 0x7f) < 0x3d) {
                    /* WARNING: Could not recover jumptable at 0x005a7d90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        uVar1 = (*(code *)(PTR_DAT_0071bfa4 +
                          *(int *)(PTR_DAT_0071bfa4 + (int)((param_3 & 0x7f) << 2))))();
        return uVar1;
      }
      return 4;
    }
    FUN_005525a8(param_4,local_4c);
    uVar1 = 0xcb30;
    if (**(int **)(param_2 + 0xc) == 1) {
      uVar1 = 0xcb31;
    }
  }
  return uVar1;
}


// 0x05a8114 (0x858 bytes)
/* WARNING: Removing unreachable block (ram,0x005a85a8) */
/* WARNING: Removing unreachable block (ram,0x005a8864) */
/* WARNING: Removing unreachable block (ram,0x005a8894) */
/* WARNING: Removing unreachable block (ram,0x005a8824) */
/* WARNING: Removing unreachable block (ram,0x005a8798) */
/* WARNING: Removing unreachable block (ram,0x005a8918) */
/* WARNING: Removing unreachable block (ram,0x005a8758) */
/* WARNING: Removing unreachable block (ram,0x005a8770) */
/* WARNING: Removing unreachable block (ram,0x005a8898) */
/* WARNING: Removing unreachable block (ram,0x005a88c8) */
/* WARNING: Removing unreachable block (ram,0x005a88d8) */
/* WARNING: Removing unreachable block (ram,0x005a892c) */
/* WARNING: Removing unreachable block (ram,0x005a8950) */
/* WARNING: Removing unreachable block (ram,0x005a88ec) */
/* WARNING: Removing unreachable block (ram,0x005a880c) */
/* WARNING: Removing unreachable block (ram,0x005a879c) */
/* WARNING: Removing unreachable block (ram,0x005a87c0) */
/* WARNING: Removing unreachable block (ram,0x005a8818) */
/* WARNING: Removing unreachable block (ram,0x005a8828) */
/* WARNING: Removing unreachable block (ram,0x005a8850) */
/* WARNING: Removing unreachable block (ram,0x005a885c) */
/* WARNING: Removing unreachable block (ram,0x005a87cc) */
/* WARNING: Removing unreachable block (ram,0x005a895c) */
/* WARNING: Removing unreachable block (ram,0x005a87d4) */
/* WARNING: Removing unreachable block (ram,0x005a87e0) */
/* WARNING: Removing unreachable block (ram,0x005a87e4) */
/* WARNING: Removing unreachable block (ram,0x005a87e8) */
/* WARNING: Removing unreachable block (ram,0x005a87f0) */
/* WARNING: Removing unreachable block (ram,0x005a8814) */
/* WARNING: Removing unreachable block (ram,0x005a8540) */
/* WARNING: Removing unreachable block (ram,0x005a85b4) */
/* WARNING: Removing unreachable block (ram,0x005a85d4) */
/* WARNING: Removing unreachable block (ram,0x005a861c) */
/* WARNING: Removing unreachable block (ram,0x005a862c) */
/* WARNING: Removing unreachable block (ram,0x005a8550) */
/* WARNING: Removing unreachable block (ram,0x005a8558) */
/* WARNING: Removing unreachable block (ram,0x005a8594) */
/* WARNING: Removing unreachable block (ram,0x005a83b4) */
/* WARNING: Removing unreachable block (ram,0x005a868c) */
/* WARNING: Removing unreachable block (ram,0x005a86b8) */
/* WARNING: Removing unreachable block (ram,0x005a86d8) */

int FUN_005a8114(undefined8 param_1,int param_2)

{
  bool bVar1;
  int *piVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  int *piVar6;
  int iVar7;
  int iVar8;
  undefined1 *puVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  GPiece<8> auStack_80;
  GPiece<8> local_78;
  int local_70 [4];
  
  piVar6 = (int *)FUN_005a1504();
  if (piVar6 == (int *)0x0) {
    return 2;
  }
  if (piVar6[2] == 2) {
    iVar7 = FUN_005a7554(piVar6);
    if (iVar7 != 0) {
LAB_005a83bc:
      if (param_2 == 0) {
        return iVar7;
      }
LAB_005a83c4:
      if (((ulonglong)(uint)piVar6[2] < 0xd) &&
         ((1L << ((ulonglong)(uint)piVar6[2] & 0x7f) & 0x16fcU) != 0)) {
        if ((undefined4 *)piVar6[0x12] != (undefined4 *)0x0) {
          iVar8 = *piVar6;
          (**(code **)piVar6[0x12])(piVar6[0x11],0,0,0,1);
          iVar8 = FUN_005a139c(iVar8);
          if (iVar8 == 0) {
            return 0xcb23;
          }
        }
        piVar6[2] = 0xb;
        return iVar7;
      }
      if (iVar7 == 0) {
        return 0;
      }
      return iVar7;
    }
    if (piVar6[2] == 2) {
      return 0;
    }
  }
  iVar8 = 0;
  do {
    piVar2 = *(int **)((int)piVar6 + iVar8 + 0x7c);
    if ((piVar2 != (int *)0x0) && (piVar2[1] != 0)) {
      if (piVar6[2] == 8) {
        if (((*(byte *)((int)piVar6 + 0x41) & 4) != 0) && (*piVar2 == 0)) {
          local_70[0] = 0;
          FUN_0055743c(local_70);
        }
        if (*(int *)(piVar2[3] + 0x24) != 0) {
          thunk_FUN_00556bb8(piVar2[3] + 0x28,local_78);
        }
      }
      else if ((piVar6[2] == 6) && (*piVar2 == 1)) {
        thunk_FUN_00556bb8(piVar6[1] + 0xc,local_78);
      }
      if ((*(int *)(piVar2[3] + 0xb8) != 0) &&
         (uVar3 = *(uint *)(piVar2[3] + 0xbc), uVar3 != 0xffff)) {
        uVar11 = 0xf;
        uVar10 = 0;
        puVar9 = (undefined1 *)0x0;
        if (uVar3 != 0xfffe) {
          FUN_00551f78(auStack_80,uVar3 & 0xffff);
          uVar11 = 0x10;
          uVar10 = 2;
          puVar9 = auStack_80;
        }
        iVar7 = FUN_005a6d0c(piVar2,uVar11,0xffff,puVar9,uVar10,0);
        if (iVar7 != 0) goto LAB_005a83bc;
      }
      thunk_FUN_00556bb8(piVar2[3] + 0x14,local_78);
      if (((*(int *)(piVar2[3] + 0x34) == 0) || (*(int *)(piVar2[3] + 0xb8) != 0)) ||
         (bVar1 = false, piVar6[2] != 8)) {
        iVar7 = FUN_005a61ac(piVar2);
        if (iVar7 != 0) goto LAB_005a83bc;
        bVar1 = true;
        *(undefined4 *)(piVar2[3] + 0xb8) = 0;
      }
      if (((*(int *)(piVar2[3] + 0x80) != 0) && (bVar1)) &&
         (iVar7 = FUN_005a5b0c(piVar2), iVar7 != 0)) goto LAB_005a83bc;
    }
    bVar1 = iVar8 != 4;
    iVar8 = iVar8 + 4;
  } while (bVar1);
  iVar8 = 0;
  FUN_00550d54();
  do {
    iVar4 = *(int *)((int)piVar6 + iVar8 + 0x7c);
    if ((iVar4 != 0) && (*(int *)(iVar4 + 4) != 0)) {
      iVar5 = *(int *)(iVar4 + 0xc) + 0x40;
      iVar7 = FUN_005c26e4(iVar5,0,0);
      if (iVar7 != 0) goto LAB_005a83bc;
      FUN_005c21a8(iVar5,local_78);
      if (param_2 != 0) {
        if (*piVar6 != *(int *)(iVar4 + 8)) {
          iVar7 = 2;
          goto LAB_005a83c4;
        }
        iVar4 = *(int *)(iVar4 + 0xc) + 0x40;
        FUN_005c2368(iVar4,local_70);
        if ((local_70[0] != 0) &&
           (iVar7 = FUN_005c26e4(iVar4,1,*(undefined4 *)PTR_DAT_0071bf98), iVar7 != 0))
        goto LAB_005a83c4;
        FUN_005c2118(iVar4,local_78);
      }
    }
    bVar1 = iVar8 == 4;
    iVar8 = iVar8 + 4;
    if (bVar1) {
      if ((piVar6[2] == 8) && (*(int *)(*(int *)(piVar6[0x1e] + 0xc) + 0x24) != 0)) {
        thunk_FUN_00556bb8(*(int *)(piVar6[0x1e] + 0xc) + 0x1c,local_70);
      }
      return 0;
    }
  } while( true );
}


// 0x05a896c (0x64c bytes)
/* WARNING: Removing unreachable block (ram,0x005a8db8) */
/* WARNING: Removing unreachable block (ram,0x005a8dc4) */
/* WARNING: Removing unreachable block (ram,0x005a8dd4) */
/* WARNING: Removing unreachable block (ram,0x005a8f8c) */
/* WARNING: Removing unreachable block (ram,0x005a8e88) */

ulonglong FUN_005a896c(uint *param_1,undefined8 param_2,int param_3,uint param_4)

{
  uint uVar1;
  undefined *puVar2;
  ulonglong uVar3;
  int iVar5;
  ulonglong uVar4;
  uint uVar6;
  bool bVar7;
  uint uVar8;
  ushort local_120;
  GPiece<2> local_11e;
  ushort local_11c [2];
  int local_118 [2];
  undefined1 uStack_110;
  undefined1 uStack_10f;
  undefined1 uStack_10e;
  undefined1 uStack_10d;
  undefined1 uStack_10c;
  undefined1 uStack_10b;
  undefined1 uStack_10a;
  undefined1 uStack_109;
  undefined1 uStack_108;
  undefined1 uStack_107;
  undefined1 uStack_106;
  undefined1 uStack_105;
  undefined1 uStack_104;
  undefined1 uStack_103;
  undefined1 uStack_102;
  undefined1 uStack_101;
  GPiece<64> auStack_100;
  GPiece<64> auStack_c0;
  GPiece<64> auStack_80;
  
  FUN_00551f9c(param_3,local_11c);
  if (param_1[3] < 3) {
    uVar4 = (ulonglong)local_11c[0] / 100 & 0xff;
    iVar5 = (int)uVar4;
    if ((iVar5 != 0) && ((uVar3 = (ulonglong)local_11c[0] % 100, 1 < uVar4 || (0xc < uVar3)))) {
      uVar6 = param_1[1];
      *(int *)(uVar6 + 4) = iVar5 * 100 + (int)uVar3;
      if (param_4 < 3) {
        uVar8 = 2;
        local_120 = 0xffff;
        iVar5 = param_3 + 2;
      }
      else {
        iVar5 = param_3 + 4;
        FUN_00551f9c(param_3 + 2,&local_120);
        uVar8 = 4;
        uVar6 = param_1[1];
      }
      uVar1 = param_1[0x2d];
      *(uint *)(uVar6 + 8) = (uint)local_120;
      if (uVar1 == 1) {
        (*(code *)**(undefined4 **)(*(int *)PTR_DAT_0071bf9c + 0x1c))
                  (*param_1 & 0x3fffffff,0xffff,auStack_c0);
        uVar6 = param_1[1];
      }
      if ((*(uint *)(uVar6 + 8) & 0x200) != 0) {
        FUN_00551f9c(iVar5,local_11e);
        uVar8 = uVar8 + 2;
        iVar5 = iVar5 + 2;
      }
      puVar2 = PTR_DAT_0071bf9c;
      if (param_1[0x2d] == 1) {
        (*(code *)**(undefined4 **)(*(int *)PTR_DAT_0071bf9c + 0x18))
                  (*param_1 & 0x3fffffff,0xffff,*(undefined4 *)(param_1[1] + 8),auStack_c0);
        uVar6 = (*(code *)**(undefined4 **)(*(int *)puVar2 + 0x3c))(param_1[0x2e]);
        param_1[0x2f] = uVar6;
      }
      if ((uVar8 < param_4) &&
         (FUN_005525a8(iVar5,local_118), puVar2 = PTR_DAT_0071bf9c, local_118[0] != 0)) {
        uStack_110 = *(undefined1 *)(iVar5 + 4);
        uStack_10f = *(undefined1 *)(iVar5 + 5);
        uStack_10e = *(undefined1 *)(iVar5 + 6);
        uStack_10d = *(undefined1 *)(iVar5 + 7);
        uStack_10c = *(undefined1 *)(iVar5 + 8);
        uStack_10b = *(undefined1 *)(iVar5 + 9);
        uStack_10a = *(undefined1 *)(iVar5 + 10);
        uStack_109 = *(undefined1 *)(iVar5 + 0xb);
        uStack_108 = *(undefined1 *)(iVar5 + 0xc);
        uStack_107 = *(undefined1 *)(iVar5 + 0xd);
        uStack_106 = *(undefined1 *)(iVar5 + 0xe);
        uStack_105 = *(undefined1 *)(iVar5 + 0xf);
        uStack_104 = *(undefined1 *)(iVar5 + 0x10);
        uStack_101 = *(undefined1 *)(iVar5 + 0x13);
        uStack_103 = *(undefined1 *)(iVar5 + 0x11);
        uStack_102 = *(undefined1 *)(iVar5 + 0x12);
        uVar6 = param_1[1];
        if ((*(int *)(uVar6 + 0x14) != local_118[0]) || (param_1[0x2d] != 1)) goto LAB_005a8b04;
        (*(code *)**(undefined4 **)(*(int *)PTR_DAT_0071bf9c + 0x60))
                  (auStack_100,&uStack_110,uVar6 + 0x28,uVar6 + 0x18,0x10);
        (*(code *)**(undefined4 **)(*(int *)puVar2 + 0x2c))
                  (*param_1 & 0x3fffffff,0xffff,*(undefined4 *)(param_1[1] + 8),auStack_100);
        uVar6 = (*(code *)**(undefined4 **)(*(int *)puVar2 + 0x3c))(param_1[0x2e]);
        bVar7 = true;
        param_1[0x2f] = uVar6;
      }
      else {
LAB_005a8b04:
        bVar7 = false;
      }
      if ((param_1[0x2f] == 0) || (bVar7)) {
        uVar4 = FUN_005a7684(param_1);
        if (uVar4 == 0) {
          uVar4 = 0;
          param_1[2] = 4;
        }
      }
      else {
        iVar5 = *(int *)(param_1[1] + 8);
        if (((iVar5 == 0x400) || (iVar5 == 0x600)) || (uVar4 = 0xcb33, iVar5 == 1)) {
          uVar6 = param_1[0x1e];
          FUN_00550edc(0,auStack_80);
          FUN_00552604(auStack_80,auStack_80,0x40);
          uVar4 = FUN_005a6d0c(uVar6,0x12,0xffff,auStack_80,0x40,0xc0);
          if ((int)uVar4 == 0) {
            param_1[2] = 3;
          }
        }
      }
      goto LAB_005a8a4c;
    }
  }
  param_1[2] = 0xb;
  if ((undefined4 *)param_1[0x12] != (undefined4 *)0x0) {
    uVar6 = *param_1;
    (**(code **)param_1[0x12])(param_1[0x11],0,0,0,3);
    iVar5 = FUN_005a139c(uVar6);
    uVar4 = 0xcb23;
    if (iVar5 == 0) {
LAB_005a8a4c:
      return uVar4 & 0xffffffff;
    }
  }
  return 0;
}


// 0x05a8fb8 (0x38 bytes)
void FUN_005a8fb8(longlong param_1)

{
  GPiece<16> local_10;
  
  if (param_1 != 0) {
    FUN_005519f0(local_10);
  }
  return;
}


// 0x05a8ff0 (0x38 bytes)
undefined4 FUN_005a8ff0(undefined8 param_1)

{
  GPiece<16> local_10;
  
  FUN_00551de8(local_10,param_1);
  return 0;
}


// 0x05a9028 (0x120 bytes)
int FUN_005a9028(int param_1,undefined8 param_2,int param_3,uint param_4)

{
  int iVar1;
  ushort local_40 [8];
  
  if (*(int *)(param_1 + 0xc) == 1) {
    iVar1 = *(int *)(param_1 + 0x80);
    if (iVar1 == 0) {
      return 3;
    }
    if (0xf < param_4) {
      FUN_0054ef70(*(int *)(iVar1 + 0xc) + 4,param_3);
      if (0x11 < param_4) {
        FUN_00551f9c(param_3 + 0x10,local_40);
        *(uint *)(*(int *)(iVar1 + 0xc) + 0xc) = (uint)local_40[0];
        if (local_40[0] != 0) {
          *(undefined4 *)(iVar1 + 4) = 1;
          iVar1 = FUN_005a79d0(param_1,iVar1);
          if (iVar1 != 0) {
            return iVar1;
          }
          *(undefined4 *)(param_1 + 8) = 6;
          return 0;
        }
      }
    }
  }
  return 52000;
}


// 0x05a9148 (0x178 bytes)
int FUN_005a9148(int param_1,undefined8 param_2,int param_3,uint param_4)

{
  undefined4 uVar1;
  int iVar2;
  GPiece<2> auStack_30;
  ushort local_2e;
  ushort local_2c [2];
  int local_28 [2];
  
  if ((((((*(int *)(param_1 + 8) == 6) && (*(int *)(param_1 + 0xc) == 1)) && (1 < param_4)) &&
       ((FUN_00551f9c(param_3,&local_2e), (uint)local_2e == *(uint *)(param_1 + 100) &&
        (3 < param_4)))) &&
      ((FUN_005525a8(param_3 + 2,local_28), *(int *)(param_1 + 0x68) == local_28[0] &&
       ((7 < param_4 && (FUN_00551f9c(param_3 + 6,auStack_30), 0x17 < param_4)))))) &&
     (FUN_0054ef70(param_1 + 0x6c,param_3 + 8), 0x19 < param_4)) {
    FUN_00551f9c(param_3 + 0x18,local_2c);
    uVar1 = *(undefined4 *)(param_1 + 0x78);
    **(uint **)(param_1 + 4) = (uint)local_2c[0];
    iVar2 = FUN_005a6d0c(uVar1,0x17,0xffff,0,0,0xc0);
    if (iVar2 != 0) {
      return iVar2;
    }
    *(undefined4 *)(param_1 + 8) = 7;
    return 0;
  }
  return 52000;
}


// 0x05a92c0 (0x280 bytes)
undefined8 FUN_005a92c0(uint *param_1,int param_2,int param_3,int param_4)

{
  uint uVar1;
  int iVar2;
  undefined8 uVar3;
  undefined2 local_70 [2];
  GPiece<4> auStack_6c;
  undefined8 local_68;
  GPiece<72> auStack_60;
  
  if (param_2 == 8) {
    if (param_4 == 0x56) {
      FUN_00551f9c(param_3,local_70);
      FUN_005525a8(param_3 + 2,auStack_6c);
      FUN_0054ef70(&local_68,param_3 + 6);
      FUN_00552650(param_3 + 0x16,auStack_60,0x40);
      uVar3 = 1;
      if (param_1[0x2d] == 1) {
        (*(code *)**(undefined4 **)(*(int *)PTR_DAT_0071bf9c + 0x18))
                  (*param_1 & 0x3fffffff,local_70[0],*(undefined4 *)(param_1[1] + 8),auStack_60);
        uVar3 = 1;
      }
      goto LAB_005a9488;
    }
  }
  else {
    if (param_2 != 9) {
      return 2;
    }
    if (param_4 == 0x16) {
      FUN_00551f9c(param_3,local_70);
      FUN_005525a8(param_3 + 2,auStack_6c);
      FUN_0054ef70(&local_68,param_3 + 6);
      if (param_1[0x2d] == 1) {
        (*(code *)**(undefined4 **)(*(int *)PTR_DAT_0071bf9c + 0x58))
                  (*param_1 & 0x3fffffff,local_70[0]);
      }
      if ((undefined4 *)param_1[0x17] != (undefined4 *)0x0) {
        uVar1 = *param_1;
        (**(code **)param_1[0x17])(param_1[0x11],local_70[0],0,0,0,0,0,0);
        iVar2 = FUN_005a139c(uVar1);
        if (iVar2 == 0) {
          return 0xcb23;
        }
      }
      uVar3 = 0;
LAB_005a9488:
      if ((undefined4 *)param_1[0x13] != (undefined4 *)0x0) {
        uVar1 = *param_1;
        (**(code **)param_1[0x13])(param_1[0x11],local_70[0],local_68,uVar3);
        iVar2 = FUN_005a139c(uVar1);
        if (iVar2 == 0) {
          return 0xcb23;
        }
      }
      return 0;
    }
  }
  return 52000;
}


// 0x05a9540 (0x1ec bytes)
// strings: 0067e670: 'default_server_password_string'

undefined4 FUN_005a9540(undefined4 *param_1,undefined8 param_2,int param_3)

{
  char *__s;
  undefined4 uVar1;
  int iVar2;
  size_t __n;
  byte local_670 [2];
  short local_66e [3];
  GPiece<2> local_668;
  GPiece<1606> auStack_666;
  
  FUN_00551ef4(param_3,local_670);
  iVar2 = param_3 + 1;
  if ((local_670[0] & 2) != 0) {
    FUN_00551f9c(iVar2,local_66e);
    if (local_66e[0] != 0x643) goto LAB_005a9608;
    iVar2 = param_3 + 3;
  }
  if (((local_670[0] & 4) == 0) || (FUN_00551f9c(iVar2,local_66e), local_66e[0] == 0x643)) {
    iVar2 = 1;
    if ((local_670[0] & 1) != 0) {
      __s = *(char **)PTR_PTR_0071bff8;
      __n = strlen(__s);
      memcpy(auStack_666,__s,__n);
      iVar2 = __n + 2;
    }
    uVar1 = FUN_005a6d0c(param_1[0x1e],0x23,0xffff,local_668,iVar2,0xc0);
    return uVar1;
  }
LAB_005a9608:
  if ((undefined4 *)param_1[0x12] != (undefined4 *)0x0) {
    uVar1 = *param_1;
    (**(code **)param_1[0x12])(param_1[0x11],0,0,0,3);
    iVar2 = FUN_005a139c(uVar1);
    if (iVar2 == 0) {
      return 0xcb23;
    }
  }
  FUN_005a41a8(param_1[0x19],7);
  param_1[2] = 0xb;
  return 0xcb32;
}


// 0x05a972c (0x2a0 bytes)
int FUN_005a972c(uint *param_1,int param_2,undefined1 *param_3,uint param_4)

{
  undefined4 uVar1;
  int iVar2;
  uint uVar3;
  undefined1 *puVar4;
  byte in_cr0;
  byte in_cr1;
  byte in_cr2;
  byte in_cr3;
  byte unaff_cr4;
  byte in_cr5;
  byte in_cr6;
  byte in_cr7;
  uint uStack00000008;
  ushort local_50;
  ushort local_4e [3];
  GPiece<4> local_48;
  uint local_44 [3];
  
  uStack00000008 =
       (uint)(in_cr0 & 0xf) << 0x1c | (uint)(in_cr1 & 0xf) << 0x18 | (uint)(in_cr2 & 0xf) << 0x14 |
       (uint)(in_cr3 & 0xf) << 0x10 | (uint)(unaff_cr4 & 0xf) << 0xc | (uint)(in_cr5 & 0xf) << 8 |
       (uint)(in_cr6 & 0xf) << 4 | (uint)(in_cr7 & 0xf);
  if (param_2 == 7) {
    if (param_4 < 2) {
      return 52000;
    }
    FUN_00551f9c(param_3,local_4e);
    param_1[0x19] = (uint)local_4e[0];
    if ((*(byte *)((int)param_1 + 0x41) & 4) != 0) {
      FUN_005573e0();
    }
    iVar2 = FUN_005a6d0c(param_1[0x1e],0x21,0xffff,local_48,2,0xc0);
    if (iVar2 != 0) {
      return iVar2;
    }
    if (param_4 < 4) {
      return 52000;
    }
    puVar4 = param_3 + 6;
    FUN_005525a8(param_3 + 2,local_44);
    iVar2 = 6;
    uVar1 = 0;
    uVar3 = 7;
    param_1[0x1a] = local_44[0];
  }
  else {
    if (param_2 != 6) {
      return 52000;
    }
    if (param_4 == 0) {
      return 52000;
    }
    puVar4 = param_3 + 1;
    iVar2 = 1;
    uVar1 = FUN_005a15ec(*param_3);
    uVar3 = 2;
  }
  if ((param_4 <= uVar3) || (FUN_00551f9c(puVar4,&local_50), param_4 < iVar2 + 0x12U)) {
    return 52000;
  }
  FUN_0054ef70(param_1 + 0x1b,puVar4 + 2);
  if (param_2 != 7) {
    param_1[2] = 0xb;
    if ((undefined4 *)param_1[0x12] != (undefined4 *)0x0) {
      uVar3 = *param_1;
      (**(code **)param_1[0x12])(param_1[0x11],0,0,local_50,uVar1);
      iVar2 = FUN_005a139c(uVar3);
      if (iVar2 == 0) {
        return 0xcb23;
      }
    }
    return 0;
  }
  param_1[0x1d] = (uint)local_50;
  if (*(char *)(param_1 + 0x10) == '\0') {
    param_1[0x19] = 0;
    param_1[0x1d] = 1;
  }
  if (param_1[0x2d] == 1) {
    (*(code *)**(undefined4 **)(*(int *)PTR_DAT_0071bf9c + 100))
              (*param_1 & 0x3fffffff,param_1[0x19]);
  }
  if (param_1[3] == 0) {
    param_1[2] = 7;
    return 0;
  }
  if (param_1[3] == 1) {
    param_1[2] = 5;
    return 0;
  }
  return 4;
}


// 0x05a99cc (0x94 bytes)
void FUN_005a99cc(int param_1)

{
  int iStack00000030;
  
  if (param_1 != 0) {
    iStack00000030 = param_1;
    FUN_005c2ab8(*(int *)(param_1 + 0xc) + 0x40);
    FUN_005c2ab8(*(int *)(iStack00000030 + 0xc) + 0x5c);
    FUN_005519f0(*(int *)(iStack00000030 + 0xc) + 0x78);
    FUN_005519f0(iStack00000030 + 0xc);
    FUN_005519f0(&stack0x00000030);
  }
  return;
}


// 0x05a9a60 (0x1e8 bytes)
void FUN_005a9a60(uint param_1)

{
  bool bVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  undefined4 *puVar7;
  GPiece<24> local_50;
  
  iVar4 = FUN_005a124c(param_1);
  if (iVar4 == 0) {
    return;
  }
  iVar5 = FUN_005a139c(param_1);
  if (((iVar5 != 0) && (iVar5 = FUN_005a124c(param_1), iVar5 != 0)) && (*(int *)(iVar5 + 8) != 1)) {
    iVar6 = *(int *)(iVar5 + 0x78);
    if (iVar6 != 0) {
      if (*(int *)(iVar5 + 8) == 8) {
        FUN_005a61ac(iVar6);
        FUN_005a6d7c(iVar6,10);
      }
      *(undefined4 *)(iVar5 + 8) = 9;
      iVar6 = FUN_005a6ed8(iVar6,local_50,1,0x20);
      if (iVar6 != 0) goto LAB_005a9ac4;
    }
    iVar6 = 0;
    *(undefined4 *)(iVar5 + 8) = 10;
    do {
      iVar3 = *(int *)(iVar6 + iVar5 + 0x7c);
      if (iVar3 != 0) {
        FUN_0054fe64(*(undefined4 *)(*(int *)(iVar3 + 0xc) + 0x10));
      }
      bVar1 = iVar6 != 4;
      iVar6 = iVar6 + 4;
    } while (bVar1);
    *(undefined4 *)(iVar5 + 8) = 1;
  }
LAB_005a9ac4:
  puVar7 = (undefined4 *)(iVar4 + 0x7c);
  iVar5 = 0;
  do {
    uVar2 = *puVar7;
    puVar7 = puVar7 + 1;
    FUN_005a99cc(uVar2);
    bVar1 = iVar5 != 1;
    iVar5 = iVar5 + 1;
  } while (bVar1);
  if (*(int *)(iVar4 + 0x38) != 0) {
    FUN_005519f0(iVar4 + 0x38);
  }
  if (*(int *)(iVar4 + 4) != 0) {
    FUN_005519f0(iVar4 + 4);
  }
  if (*(int *)PTR_DAT_0071bf9c != 0) {
    (*(code *)**(undefined4 **)(*(int *)PTR_DAT_0071bf9c + 0x68))(param_1 & 0x3fffffff);
  }
  return;
}


// 0x05a9c48 (0x164 bytes)
/* WARNING: Removing unreachable block (ram,0x005a9ca8) */
/* WARNING: Removing unreachable block (ram,0x005a9cd4) */
/* WARNING: Removing unreachable block (ram,0x005a9d30) */
/* WARNING: Removing unreachable block (ram,0x005a9d68) */
/* WARNING: Removing unreachable block (ram,0x005a9da8) */
/* WARNING: Removing unreachable block (ram,0x005a9cfc) */

undefined4 FUN_005a9c48(void)

{
  GPiece<24> local_40;
  
  FUN_00551de8(local_40,0x10);
  FUN_005a99cc(0);
  return 0;
}


// 0x05a9dac (0x624 bytes)
ulonglong FUN_005a9dac(uint param_1,uint *param_2)

{
  bool bVar1;
  int iVar2;
  uint *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  uint uVar6;
  ulonglong uVar7;
  uint *puVar8;
  int iVar9;
  int *piVar10;
  undefined4 *puVar11;
  undefined4 uVar12;
  int iVar13;
  uint uVar14;
  uint uVar15;
  uint uVar16;
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
  GPiece<24> local_68;
  
  uStack00000008 =
       (uint)(in_cr0 & 0xf) << 0x1c | (uint)(in_cr1 & 0xf) << 0x18 | (uint)(in_cr2 & 0xf) << 0x14 |
       (uint)(in_cr3 & 0xf) << 0x10 | (uint)(unaff_cr4 & 0xf) << 0xc | (uint)(in_cr5 & 0xf) << 8 |
       (uint)(in_cr6 & 0xf) << 4 | (uint)(in_cr7 & 0xf);
  if (((param_2[3] != 0) && (param_2[0xf] != 0)) && (*param_2 < 3)) {
    FUN_0054edb0(&local_70);
    uVar14 = *param_2;
    uVar16 = param_2[9];
    uVar15 = param_2[10];
    if (((uVar14 < 3) && (uVar16 != 0)) && (uVar15 != 0)) {
      puVar8 = (uint *)FUN_005a124c(param_1);
      puVar5 = PTR_DAT_0071bf9c;
      uVar7 = 0xcb23;
      if (puVar8 == (uint *)0x0) goto LAB_005a9e20;
      *puVar8 = param_1;
      puVar8[2] = 0;
      if (*(int *)puVar5 == 0) {
LAB_005aa178:
        uVar6 = 2;
      }
      else {
        iVar9 = FUN_00550edc(0,0);
        uVar6 = 1;
        if (iVar9 != 0) goto LAB_005aa178;
      }
      puVar8[0x2d] = uVar6;
      if (uVar14 == 1) {
        uVar16 = uVar16 >> 1;
        uVar15 = uVar15 >> 1;
      }
      if (uVar16 < 0x643) {
        uVar16 = 0x643;
      }
      if (uVar15 < 0x643) {
        uVar15 = 0x643;
      }
      if (uVar14 < 2) {
        puVar11 = (undefined4 *)FUN_005a9c48(param_1,uVar16,uVar15);
        if (puVar11 != (undefined4 *)0x0) {
          puVar3 = (uint *)puVar11[3];
          uVar6 = puVar8[0x2d];
          *puVar11 = 0;
          puVar8[0x1f] = (uint)puVar11;
          *puVar3 = uVar6;
          goto LAB_005a9f1c;
        }
LAB_005aa3c8:
        uVar7 = 100;
        goto LAB_005a9e20;
      }
LAB_005a9f1c:
      if (uVar14 == 1) {
        puVar11 = (undefined4 *)FUN_005a9c48(param_1,uVar16,uVar15);
        if (puVar11 == (undefined4 *)0x0) goto LAB_005aa3c8;
        puVar3 = (uint *)puVar11[3];
        uVar14 = puVar8[0x2d];
        *puVar11 = 1;
        puVar8[0x20] = (uint)puVar11;
        *puVar3 = uVar14;
      }
      puVar4 = PTR_DAT_0071bf98;
      if (*(uint *)(PTR_DAT_0071bf98 + 0x28) < uVar15) {
        if (*(int *)PTR_DAT_0071bf98 != 0) {
          FUN_005519f0(PTR_DAT_0071bf98);
        }
        uVar7 = FUN_00551de8(puVar4,uVar15);
        if ((int)uVar7 != 0) goto LAB_005a9e20;
        *(uint *)(puVar4 + 0x28) = uVar15;
      }
      puVar8[2] = 1;
      piVar10 = (int *)FUN_005a124c(param_1);
      if (piVar10[0x2d] == 1) {
        param_1 = param_1 & 0x3fffffff;
        (*(code *)**(undefined4 **)(*(int *)puVar5 + 0x68))(param_1);
        (*(code *)**(undefined4 **)(*(int *)puVar5 + 0x14))(param_1,0);
        (*(code *)**(undefined4 **)(*(int *)puVar5 + 0x18))(param_1,0xffff,0x600,param_2[6]);
        puVar11 = (undefined4 *)(*(undefined4 **)puVar5)[1];
        uVar12 = (**(code **)**(undefined4 **)puVar5)(param_1);
        iVar13 = (*(code *)*puVar11)(uVar12,0xffff);
        iVar9 = *(int *)puVar5;
        piVar10[0x2e] = iVar13;
        iVar9 = (*(code *)**(undefined4 **)(iVar9 + 0x3c))(iVar13);
        piVar10[0x2f] = iVar9;
      }
      piVar10[2] = 0;
      uVar7 = FUN_00551de8(piVar10 + 1,0x38);
      if (uVar7 != 0) goto LAB_005a9e20;
      memcpy(piVar10 + 3,param_2,0x58);
      if ((param_2[0xb] == 0) || (param_2[0xc] == 0)) {
        piVar10[0xf] = 0;
        piVar10[0xe] = 0;
      }
      else {
        uVar7 = FUN_00551de8(piVar10 + 0xe,param_2[0xc]);
        if (uVar7 != 0) goto LAB_005a9e20;
        memcpy((void *)piVar10[0xe],(void *)param_2[0xb],param_2[0xc]);
        piVar10[0xf] = param_2[0xc];
      }
      iVar9 = 0;
      FUN_0054edb0(piVar10 + 0x1b);
      do {
        iVar13 = *(int *)((int)piVar10 + iVar9 + 0x7c);
        if (iVar13 != 0) {
          iVar2 = *(int *)(iVar13 + 0xc);
          *(undefined4 *)(iVar2 + 0xb8) = 0;
          *(undefined4 *)(iVar2 + 0x8c) = 0;
          *(undefined4 *)(iVar2 + 0xa4) = 0;
          *(undefined4 *)(iVar2 + 0x80) = 0;
          *(undefined4 *)(iVar2 + 0x84) = 0;
          *(undefined4 *)(iVar2 + 0x88) = 0;
          thunk_FUN_00556a58(iVar2 + 0x14);
          thunk_FUN_00556a58(*(int *)(iVar13 + 0xc) + 0x1c);
          iVar2 = *(int *)(iVar13 + 0xc);
          *(uint *)(iVar2 + 0x24) = param_2[7];
          *(undefined4 *)(iVar2 + 0x30) = 0;
          thunk_FUN_00556a58(iVar2 + 0x28);
          iVar2 = *(int *)(iVar13 + 0xc);
          *(uint *)(iVar2 + 0x34) = param_2[8];
          FUN_005c20c8(iVar2 + 0x40);
          FUN_005c20c8(*(int *)(iVar13 + 0xc) + 0x5c);
        }
        bVar1 = iVar9 != 4;
        iVar9 = iVar9 + 4;
      } while (bVar1);
      uVar14 = piVar10[3];
      piVar10[2] = 2;
      if (uVar14 == 1) {
        iVar9 = piVar10[0x20];
        if (iVar9 != 0) {
          uVar7 = FUN_005500a8(*(int *)(iVar9 + 0xc) + 0x10,local_70,param_2[5],local_68);
          if (uVar7 != 0) goto LAB_005a9e20;
          uVar14 = piVar10[3];
          *(undefined4 *)(iVar9 + 4) = 0;
          goto LAB_005aa13c;
        }
      }
      else {
LAB_005aa13c:
        if (uVar14 < 2) {
          iVar9 = piVar10[0x1f];
          if (iVar9 != 0) {
            iVar13 = *(int *)(iVar9 + 0xc);
            *(uint *)(iVar13 + 4) = param_2[1];
            *(uint *)(iVar13 + 8) = param_2[2];
            *(uint *)(iVar13 + 0xc) = param_2[3];
            uVar7 = FUN_005500a8(*(int *)(iVar9 + 0xc) + 0x10,*(undefined8 *)(param_2 + 1),
                                 param_2[3],local_68);
            if (uVar7 != 0) goto LAB_005a9e20;
            *(undefined4 *)(iVar9 + 4) = 1;
            piVar10[0x1e] = iVar9;
            goto LAB_005aa154;
          }
        }
        else {
          iVar9 = piVar10[0x1e];
          if (iVar9 != 0) {
LAB_005aa154:
            uVar7 = 52000;
            if (*piVar10 == *(int *)(iVar9 + 8)) {
              uVar7 = FUN_005a7554(piVar10);
            }
            goto LAB_005a9e20;
          }
        }
      }
      uVar7 = 3;
      goto LAB_005a9e20;
    }
  }
  uVar7 = 2;
LAB_005a9e20:
  return uVar7 & 0xffffffff;
}


// 0x05aa3d0 (0x88 bytes)
undefined8 FUN_005aa3d0(void)

{
  undefined *puVar1;
  
  puVar1 = PTR_DAT_0071bf98;
  if (*(int *)PTR_DAT_0071bf98 != 0) {
    FUN_005519f0(PTR_DAT_0071bf98);
    *(undefined4 *)(puVar1 + 0x28) = 0;
  }
  if (*(int *)PTR_DAT_0071bf9c != 0) {
    (*(code *)**(undefined4 **)(*(int *)PTR_DAT_0071bf9c + 0x6c))(0);
  }
  FUN_0054ff9c();
  return 0;
}


// 0x05aa458 (0x74 bytes)
int FUN_005aa458(undefined4 param_1)

{
  int iVar1;
  
  iVar1 = FUN_00550d60();
  if (iVar1 == 0) {
    if (*(int *)PTR_DAT_0071bf9c == 0) {
      param_1 = 0;
    }
    FUN_005510cc(0,param_1);
  }
  return iVar1;
}


// 0x05aa4cc (0x8 bytes)
undefined8 FUN_005aa4cc(void)

{
  return 0;
}


// 0x05aa4d4 (0x8 bytes)
undefined8 FUN_005aa4d4(void)

{
  return 0;
}


// 0x05aa4dc (0x7c bytes)
void FUN_005aa4dc(int param_1)

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
  
  puVar11 = PTR_PTR_0071c028;
  puVar10 = PTR_PTR_0071c024;
  puVar9 = PTR_PTR_0071c020;
  puVar8 = PTR_PTR_0071c018;
  puVar7 = PTR_PTR_0071c014;
  puVar6 = PTR_PTR_0071c010;
  puVar5 = PTR_PTR_0071c00c;
  puVar4 = PTR_PTR_0071c008;
  puVar3 = PTR_PTR_0071c004;
  puVar2 = PTR_PTR_0071c000;
  puVar1 = PTR_PTR_0071bffc;
  *(undefined **)(param_1 + 0xa4) = PTR_PTR_0071c01c;
  *(undefined **)(param_1 + 0xa8) = puVar9;
  *(undefined **)(param_1 + 0xac) = puVar10;
  *(undefined **)(param_1 + 0xb0) = puVar11;
  *(undefined **)(param_1 + 0x84) = puVar1;
  *(undefined **)(param_1 + 0x88) = puVar2;
  *(undefined **)(param_1 + 0x8c) = puVar3;
  *(undefined **)(param_1 + 0x90) = puVar4;
  *(undefined **)(param_1 + 0x94) = puVar5;
  *(undefined **)(param_1 + 0x98) = puVar6;
  *(undefined **)(param_1 + 0x9c) = puVar7;
  *(undefined **)(param_1 + 0xa0) = puVar8;
  return;
}


// 0x05aa558 (0x50 bytes)
ulonglong FUN_005aa558(int param_1)

{
  int *piVar1;
  ulonglong uVar2;
  
  uVar2 = 0;
  if ((((param_1 != 0) && (piVar1 = *(int **)(param_1 + 0xc), piVar1 != (int *)0x0)) &&
      (*piVar1 != 0)) && (piVar1[2] != 0)) {
    uVar2 = (ulonglong)(LZCOUNT((uint)((ulonglong)*(ushort *)(piVar1 + 1) - 1 >> 0x3f)) << 0x20) >>
            0x25;
  }
  return uVar2;
}


// 0x05aa5a8 (0x7c bytes)
uint FUN_005aa5a8(int param_1)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  
  uVar1 = *(uint *)(param_1 + 0x78);
  if (uVar1 == 0) {
    return 0;
  }
  uVar3 = FUN_005aa558(uVar1);
  uVar2 = (int)(uVar3 ^ 1) >> 0x1f;
  return uVar1 & (int)(((uVar2 ^ uVar3 ^ 1) - uVar2) + -1) >> 0x1f;
}


// 0x05aa624 (0xa0 bytes)
undefined4 FUN_005aa624(int param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 *puVar2;
  int iVar3;
  undefined4 uVar4;
  
  iVar1 = *(int *)(param_1 + 0x78);
  iVar3 = FUN_005aa558(iVar1);
  uVar4 = 2;
  if (iVar3 == 1) {
    puVar2 = *(undefined4 **)(iVar1 + 0xc);
    uVar4 = 3;
    if (puVar2 != (undefined4 *)0x0) {
      uVar4 = 7;
      if (*(int *)PTR_DAT_0071c02c != 0) {
        uVar4 = (*(code *)**(undefined4 **)(*(int *)PTR_DAT_0071c02c + 0x10))(*puVar2,param_2);
      }
    }
  }
  return uVar4;
}


// 0x05aa6c4 (0x10 bytes)
undefined8 FUN_005aa6c4(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 4;
}


// 0x05aa6d4 (0x100 bytes)
undefined8 FUN_005aa6d4(int param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  undefined8 uVar2;
  
  iVar1 = *(int *)(param_1 + 8);
  if ((((iVar1 - 2U < 6) || (iVar1 == 9)) || (iVar1 == 10)) || (iVar1 == 0xc)) {
    *(undefined4 *)(param_1 + 8) = 0xb;
    (*(code *)**(undefined4 **)(param_1 + 0x48))
              (*(undefined4 *)(param_1 + 0x44),0,*(undefined4 *)(param_1 + 100),
               *(undefined4 *)(param_1 + 0x74),param_2);
    uVar2 = 0;
  }
  else {
    uVar2 = 0xcb2d;
    if (iVar1 == 8) {
      *(undefined4 *)(param_1 + 8) = 0;
      uVar2 = 0;
      if (*(undefined4 **)(param_1 + 0x54) != (undefined4 *)0x0) {
        (*(code *)**(undefined4 **)(param_1 + 0x54))(*(undefined4 *)(param_1 + 0x44),param_3);
        return 0;
      }
    }
  }
  return uVar2;
}


// 0x05aa7d4 (0x188 bytes)
int FUN_005aa7d4(undefined8 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                undefined4 param_5)

{
  undefined4 *puVar1;
  undefined *puVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  
  iVar3 = FUN_005a1504();
  if (iVar3 != 0) {
    iVar3 = *(int *)(iVar3 + 0x78);
    iVar4 = FUN_005aa558(iVar3);
    puVar2 = PTR_DAT_0071c02c;
    iVar5 = 3;
    if (iVar4 == 1) {
      puVar1 = *(undefined4 **)(iVar3 + 0xc);
      if (puVar1 != (undefined4 *)0x0) {
        iVar5 = 7;
        if (*(int *)PTR_DAT_0071c02c != 0) {
          iVar5 = (*(code *)**(undefined4 **)(*(int *)PTR_DAT_0071c02c + 0x20))
                            (*puVar1,puVar1[2],0,0,param_2,param_4);
          if (iVar5 == 0) {
            iVar3 = (*(code *)**(undefined4 **)(*(int *)puVar2 + 0x20))
                              (*puVar1,puVar1[2],1,0,param_3,param_5);
            return iVar3;
          }
        }
      }
      return iVar5;
    }
  }
  return 2;
}


// 0x05aa95c (0x1b0 bytes)
int FUN_005aa95c(int param_1,int param_2,undefined1 param_3)

{
  undefined4 *puVar1;
  undefined *puVar2;
  int iVar3;
  int iVar4;
  undefined1 uStack_40;
  GPiece<3> auStack_3f;
  int local_3c [3];
  
  iVar3 = FUN_005aa558();
  puVar2 = PTR_DAT_0071c02c;
  if ((iVar3 == 1) && (param_2 != 0)) {
    puVar1 = *(undefined4 **)(param_1 + 0xc);
    iVar3 = 3;
    if (puVar1 != (undefined4 *)0x0) {
      iVar3 = 7;
      if (*(int *)PTR_DAT_0071c02c != 0) {
        FUN_00551ed8(&uStack_40,param_3);
        FUN_00551f78(auStack_3f,*(undefined2 *)(param_2 + 0x42));
        if (*(int *)(param_2 + 0x44) < 8) {
          iVar3 = *(int *)(param_2 + 0x44) * 8;
          *(undefined1 **)(param_2 + iVar3) = &uStack_40;
          *(undefined4 *)(param_2 + iVar3 + 4) = 3;
          *(int *)(param_2 + 0x40) = *(int *)(param_2 + 0x40) + 3;
          *(int *)(param_2 + 0x44) = *(int *)(param_2 + 0x44) + 1;
        }
        iVar3 = (*(code *)**(undefined4 **)(*(int *)puVar2 + 0x48))
                          (*puVar1,puVar1[2],0xe000,0,0,param_2,local_3c);
        if (iVar3 == 0) {
          iVar4 = *(int *)(param_2 + 0x44) + -1;
          *(int *)(param_2 + 0x44) = iVar4;
          *(int *)(param_2 + 0x40) = *(int *)(param_2 + 0x40) - *(int *)(param_2 + iVar4 * 8 + 4);
          if (local_3c[0] == 0) {
            iVar3 = 0x12d;
          }
        }
      }
    }
    return iVar3;
  }
  return 2;
}


// 0x05aab0c (0x13c bytes)
int FUN_005aab0c(int param_1,undefined8 param_2,undefined2 param_3,undefined1 param_4)

{
  undefined4 *puVar1;
  undefined *puVar2;
  int iVar3;
  int iVar4;
  undefined1 uStack_80;
  GPiece<3> auStack_7f;
  int local_7c;
  GPiece<72> local_78;
  
  iVar3 = FUN_005aa558();
  puVar2 = PTR_DAT_0071c02c;
  iVar4 = 2;
  if (iVar3 == 1) {
    puVar1 = *(undefined4 **)(param_1 + 0xc);
    iVar4 = 3;
    if (puVar1 != (undefined4 *)0x0) {
      iVar4 = 7;
      if (*(int *)PTR_DAT_0071c02c != 0) {
        FUN_00551ed8(&uStack_80,param_4);
        FUN_00551f78(auStack_7f,param_3);
        iVar4 = (*(code *)**(undefined4 **)(*(int *)puVar2 + 0x48))
                          (*puVar1,puVar1[2],0xe000,0,0,local_78,&local_7c);
        if ((iVar4 == 0) && (local_7c == 0)) {
          iVar4 = 0x12d;
        }
      }
    }
  }
  return iVar4;
}


// 0x05aac48 (0x368 bytes)
int FUN_005aac48(int param_1,uint param_2,undefined2 param_3,int param_4,ulonglong param_5)

{
  undefined4 *puVar1;
  int iVar2;
  undefined *puVar3;
  int iVar4;
  ulonglong uVar5;
  int iVar6;
  byte in_cr0;
  byte in_cr1;
  byte in_cr2;
  byte in_cr3;
  byte bVar7;
  byte unaff_cr4;
  byte in_cr5;
  byte in_cr6;
  byte in_cr7;
  uint uStack00000008;
  GPiece<2> auStack_70;
  GPiece<6> auStack_6e;
  undefined1 uStack_68;
  GPiece<3> auStack_67;
  int local_64 [3];
  
  uStack00000008 =
       (uint)(in_cr0 & 0xf) << 0x1c | (uint)(in_cr1 & 0xf) << 0x18 | (uint)(in_cr2 & 0xf) << 0x14 |
       (uint)(in_cr3 & 0xf) << 0x10 | (uint)(unaff_cr4 & 0xf) << 0xc | (uint)(in_cr5 & 0xf) << 8 |
       (uint)(in_cr6 & 0xf) << 4 | (uint)(in_cr7 & 0xf);
  iVar4 = FUN_005aa558();
  puVar3 = PTR_DAT_0071c02c;
  if ((iVar4 != 1) || (param_4 == 0)) {
    return 2;
  }
  puVar1 = *(undefined4 **)(param_1 + 0xc);
  if (puVar1 == (undefined4 *)0x0) {
    return 3;
  }
  if (*(int *)PTR_DAT_0071c02c == 0) {
    return 7;
  }
  bVar7 = (param_2 == 3) << 1;
  FUN_00551ed8(auStack_70,param_5 & 0xff);
  if (((bool)(bVar7 >> 1 & 1)) || (param_2 == 0x33)) {
    FUN_00551f78(auStack_6e,param_3);
    iVar4 = *(int *)(param_4 + 0x44);
    if (iVar4 < 8) {
      *(undefined1 **)(param_4 + iVar4 * 8) = auStack_6e;
      *(undefined4 *)(param_4 + iVar4 * 8 + 4) = 2;
      iVar4 = *(int *)(param_4 + 0x44) + 1;
      *(int *)(param_4 + 0x40) = *(int *)(param_4 + 0x40) + 2;
      *(int *)(param_4 + 0x44) = iVar4;
      if (param_2 == 0x33) goto LAB_005aaea8;
      goto LAB_005aad04;
    }
    if (param_2 != 0x33) goto LAB_005aad04;
LAB_005aaea8:
    if (iVar4 < 8) {
      *(undefined1 **)(param_4 + iVar4 * 8) = auStack_70;
      *(undefined4 *)(param_4 + iVar4 * 8 + 4) = 1;
      goto LAB_005aaf48;
    }
  }
  else {
LAB_005aad04:
    if ((param_2 == 0x32) && (*(int *)(param_4 + 0x44) < 8)) {
      iVar4 = *(int *)(param_4 + 0x44) * 8;
      *(undefined1 **)(param_4 + iVar4) = auStack_70;
      *(undefined4 *)(param_4 + iVar4 + 4) = 1;
LAB_005aaf48:
      *(int *)(param_4 + 0x40) = *(int *)(param_4 + 0x40) + 1;
      *(int *)(param_4 + 0x44) = *(int *)(param_4 + 0x44) + 1;
    }
  }
  FUN_00551ed8(&uStack_68,param_2 & 0xff);
  FUN_00551f78(auStack_67,*(undefined2 *)(param_4 + 0x42));
  if (*(int *)(param_4 + 0x44) < 8) {
    iVar4 = *(int *)(param_4 + 0x44) * 8;
    *(undefined1 **)(param_4 + iVar4) = &uStack_68;
    *(undefined4 *)(param_4 + iVar4 + 4) = 3;
    *(int *)(param_4 + 0x40) = *(int *)(param_4 + 0x40) + 3;
    *(int *)(param_4 + 0x44) = *(int *)(param_4 + 0x44) + 1;
  }
  uVar5 = (param_5 >> 6 & 1) << 0xe;
  if ((param_5 & 0x10) != 0) {
    uVar5 = uVar5 | 0x2000;
  }
  if ((param_5 & 0x80) != 0) {
    uVar5 = uVar5 | 0x1000;
  }
  iVar4 = (*(code *)**(undefined4 **)(*(int *)puVar3 + 0x48))
                    (*puVar1,puVar1[2],uVar5 | 0x8000,0,0,param_4,local_64);
  if (iVar4 != 0) {
    return iVar4;
  }
  iVar4 = *(int *)(param_4 + 0x44);
  *(int *)(param_4 + 0x44) = iVar4 + -1;
  iVar6 = *(int *)(param_4 + 0x40) - *(int *)(param_4 + (iVar4 + -1) * 8 + 4);
  *(int *)(param_4 + 0x40) = iVar6;
  if (!(bool)(bVar7 >> 1 & 1)) {
    if (param_2 == 0x33) {
      *(int *)(param_4 + 0x44) = iVar4 + -2;
      iVar2 = *(int *)(param_4 + (iVar4 + -2) * 8 + 4);
      *(int *)(param_4 + 0x44) = iVar4 + -3;
      iVar6 = iVar6 - iVar2;
      *(int *)(param_4 + 0x40) = iVar6;
      *(int *)(param_4 + 0x40) = iVar6 - *(int *)(param_4 + (iVar4 + -3) * 8 + 4);
      goto LAB_005aae20;
    }
    if (param_2 != 0x32) goto LAB_005aae20;
  }
  *(int *)(param_4 + 0x44) = iVar4 + -2;
  *(int *)(param_4 + 0x40) = iVar6 - *(int *)(param_4 + (iVar4 + -2) * 8 + 4);
LAB_005aae20:
  iVar4 = 0;
  if (local_64[0] == 0) {
    iVar4 = 0x12d;
  }
  return iVar4;
}


// 0x05aafb0 (0x320 bytes)
/* WARNING: Removing unreachable block (ram,0x005ab204) */
/* WARNING: Type propagation algorithm not settling */

int FUN_005aafb0(int param_1,uint param_2,undefined2 param_3,undefined8 param_4,short param_5,
                ulonglong param_6)

{
  undefined4 *puVar1;
  undefined *puVar2;
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
  GPiece<2> auStack_b0;
  GPiece<6> auStack_ae;
  undefined1 uStack_a8;
  GPiece<3> auStack_a7;
  int local_a4;
  undefined1 *local_a0 [5];
  undefined4 uStack_8c;
  uint local_5c;
  
  uStack00000008 =
       (uint)(in_cr0 & 0xf) << 0x1c | (uint)(in_cr1 & 0xf) << 0x18 | (uint)(in_cr2 & 0xf) << 0x14 |
       (uint)(in_cr3 & 0xf) << 0x10 | (uint)(unaff_cr4 & 0xf) << 0xc | (uint)(in_cr5 & 0xf) << 8 |
       (uint)(in_cr6 & 0xf) << 4 | (uint)(in_cr7 & 0xf);
  iVar4 = FUN_005aa558();
  puVar2 = PTR_DAT_0071c02c;
  if (iVar4 != 1) {
    return 2;
  }
  puVar1 = *(undefined4 **)(param_1 + 0xc);
  if (puVar1 == (undefined4 *)0x0) {
    return 3;
  }
  if (*(int *)PTR_DAT_0071c02c == 0) {
    return 7;
  }
  local_5c = 1;
  FUN_00551ed8(auStack_b0,param_6 & 0xff);
  if ((param_2 == 3) || (sVar5 = param_5, param_2 == 0x33)) {
    FUN_00551f78(auStack_ae,param_3);
    sVar5 = param_5 + 2;
    local_a0[3] = (undefined1 *)0x2;
    local_5c = 2;
    local_a0[2] = auStack_ae;
    if (param_2 == 0x33) {
      sVar5 = param_5 + 3;
      uStack_8c = 1;
      local_5c = 3;
      local_a0[4] = auStack_b0;
      goto LAB_005ab080;
    }
  }
  if (param_2 == 0x32) {
    if (local_5c < 8) {
      sVar5 = sVar5 + 1;
      local_a0[local_5c * 2 + 1] = (undefined1 *)0x1;
      local_a0[local_5c * 2] = auStack_b0;
      local_5c = local_5c + 1;
    }
    else {
      sVar5 = sVar5 + 1;
    }
  }
LAB_005ab080:
  FUN_00551ed8(&uStack_a8,param_2 & 0xff);
  FUN_00551f78(auStack_a7,sVar5);
  if (local_5c < 8) {
    local_a0[local_5c * 2 + 1] = (undefined1 *)0x3;
    local_a0[local_5c * 2] = &uStack_a8;
  }
  uVar3 = (param_6 >> 6 & 1) << 0xe;
  if ((param_6 & 0x10) != 0) {
    uVar3 = uVar3 | 0x2000;
  }
  if ((param_6 & 0x80) != 0) {
    uVar3 = uVar3 | 0x1000;
  }
  iVar4 = (*(code *)**(undefined4 **)(*(int *)puVar2 + 0x48))
                    (*puVar1,puVar1[2],uVar3 | 0x8000,0,0,local_a0,&local_a4);
  if ((iVar4 == 0) && (local_a4 == 0)) {
    iVar4 = 0x12d;
  }
  return iVar4;
}


// 0x05ab2d0 (0xb0 bytes)
/* WARNING: Removing unreachable block (ram,0x005ab354) */

undefined8 FUN_005ab2d0(void)

{
  int iVar2;
  undefined8 uVar1;
  GPiece<16> local_20;
  
  iVar2 = FUN_005a1504();
  uVar1 = 2;
  if (iVar2 != 0) {
    if ((*(byte *)(iVar2 + 0x41) & 4) != 0) {
      FUN_0055743c(local_20);
    }
    uVar1 = 0;
  }
  return uVar1;
}


// 0x05ab380 (0x19c bytes)
void FUN_005ab380(void)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined *puVar6;
  int iVar7;
  GPiece<24> local_40;
  
  iVar7 = FUN_005a124c();
  if (iVar7 != 0) {
    iVar1 = *(int *)(iVar7 + 0x78);
    if (iVar1 != 0) {
      *(undefined4 *)(iVar7 + 8) = 9;
      FUN_005aab0c(iVar1,local_40,1,0x20);
      puVar6 = PTR_DAT_0071c02c;
      piVar2 = *(int **)(iVar1 + 0xc);
      if (piVar2 != (int *)0x0) {
        iVar3 = *(int *)PTR_DAT_0071c02c;
        if (iVar3 != 0) {
          iVar4 = piVar2[2];
          if (iVar4 != 0) {
            iVar5 = *piVar2;
            *(undefined4 *)(iVar7 + 8) = 10;
            (*(code *)**(undefined4 **)(iVar3 + 0x3c))(iVar5,iVar4);
            piVar2[2] = 0;
          }
          if (*piVar2 != 0) {
            (*(code *)**(undefined4 **)(*(int *)puVar6 + 0x80))(*(undefined2 *)(piVar2 + 1));
            *piVar2 = 0;
          }
        }
        FUN_005519f0(iVar1 + 0xc);
      }
      FUN_005519f0(iVar7 + 0x78);
      *(undefined4 *)(iVar7 + 0x7c) = 0;
    }
    if (*(int *)(iVar7 + 0x38) != 0) {
      FUN_005519f0(iVar7 + 0x38);
    }
    *(undefined4 *)(iVar7 + 0x3c) = 0;
    if (*(int *)(iVar7 + 4) != 0) {
      FUN_005519f0(iVar7 + 4);
    }
  }
  *(undefined4 *)(iVar7 + 8) = 1;
  return;
}


// 0x05ab51c (0x470 bytes)
ulonglong FUN_005ab51c(undefined4 param_1,int *param_2)

{
  int iVar1;
  undefined4 *puVar2;
  undefined *puVar3;
  undefined4 *puVar6;
  ulonglong uVar4;
  ulonglong uVar5;
  short sVar7;
  ulonglong uVar8;
  uint uVar9;
  
  if ((((param_2[3] == 0) || (param_2[0xf] == 0)) || (*param_2 != 2)) ||
     (puVar6 = (undefined4 *)FUN_005a124c(param_1), puVar6 == (undefined4 *)0x0)) {
    return 2;
  }
  puVar6[2] = 0;
  uVar4 = FUN_00551de8(puVar6 + 1,4);
  uVar5 = uVar4;
  if ((int)uVar4 == 0) {
    memcpy(puVar6 + 3,param_2,0x58);
    if ((param_2[0xb] == 0) || (param_2[0xc] == 0)) {
      puVar6[0xf] = 0;
      puVar6[0xe] = 0;
    }
    else {
      uVar5 = FUN_00551de8(puVar6 + 0xe,param_2[0xc]);
      if (uVar5 != 0) goto LAB_005ab85c;
      memcpy((void *)puVar6[0xe],(void *)param_2[0xb],param_2[0xc]);
      puVar6[0xf] = param_2[0xc];
    }
    *puVar6 = param_1;
    uVar5 = FUN_00551de8(puVar6 + 0x1e,0x10);
    if (uVar5 == 0) {
      iVar1 = puVar6[0x1e];
      if (iVar1 != 0) {
        puVar6[0x20] = 0;
        *(undefined4 *)(iVar1 + 8) = param_1;
        puVar6[0x1f] = iVar1;
        uVar5 = FUN_00551de8(iVar1 + 0xc,0xc);
        puVar3 = PTR_DAT_0071c02c;
        if (uVar5 != 0) {
LAB_005ab85c:
          return uVar5 & 0xffffffff;
        }
        puVar2 = *(undefined4 **)(puVar6[0x1e] + 0xc);
        if (puVar2 != (undefined4 *)0x0) {
          if (*(int *)PTR_DAT_0071c02c == 0) {
            uVar5 = 7;
          }
          else {
            uVar9 = 0;
            uVar8 = ZEXT48(&stack0x00000000) - 0xc0;
            uVar5 = 0;
            do {
              do {
                sVar7 = FUN_00552968(uVar5);
                uVar5 = uVar8;
              } while (sVar7 == 0);
              uVar9 = uVar9 + 1;
              uVar5 = (*(code *)**(undefined4 **)(*(int *)puVar3 + 0x7c))(uVar8,puVar2);
              if ((int)uVar5 != 0xd301) {
                *(short *)(puVar2 + 1) = sVar7;
                if ((int)uVar5 != 0) goto LAB_005ab85c;
                break;
              }
            } while (uVar9 < 10);
            uVar5 = ZEXT48(&stack0x00000000) - 0xa4 & 0xffffffff;
            memset(uVar5,0,0x50);
            uVar5 = (*(code *)**(undefined4 **)(*(int *)puVar3 + 0x38))(*puVar2,uVar5,puVar2 + 2);
            if (uVar5 != 0) goto LAB_005ab85c;
            puVar6[2] = 2;
            uVar5 = uVar4;
          }
          goto LAB_005ab7c0;
        }
      }
      uVar5 = 3;
    }
  }
LAB_005ab7c0:
  return uVar5 & 0xffffffff;
}


// 0x05ab98c (0x108 bytes)
int FUN_005ab98c(int param_1,undefined8 param_2,undefined4 param_3,int param_4)

{
  int iVar1;
  int iVar2;
  ushort local_30 [8];
  
  iVar1 = FUN_005aa558(*(undefined4 *)(param_1 + 0x78));
  iVar2 = 0xcb2d;
  if (iVar1 != 0) {
    FUN_00551f9c(param_3,local_30);
    *(uint *)(param_1 + 0x74) = (uint)local_30[0];
    if (param_4 == 2) {
      *(undefined4 *)(param_1 + 8) = 8;
      (*(code *)**(undefined4 **)(param_1 + 0x48))
                (*(undefined4 *)(param_1 + 0x44),1,*(undefined4 *)(param_1 + 100),local_30[0],0);
      iVar2 = 0;
    }
    else {
      iVar2 = FUN_005aa6d4(param_1,1,0);
      if (iVar2 == 0) {
        return 0xcb32;
      }
    }
  }
  return iVar2;
}


// 0x05aba94 (0x110 bytes)
void FUN_005aba94(undefined8 param_1,undefined8 param_2,int param_3,uint param_4)

{
  int iVar1;
  int in_r10;
  byte local_40 [2];
  ushort local_3e [7];
  
  if (in_r10 != 0) {
    iVar1 = FUN_005aa558(*(undefined4 *)(in_r10 + 0x78));
    if ((iVar1 != 0) && (param_4 != 0)) {
      if (2 < param_4) {
        FUN_00551ef4(param_3,local_40);
        FUN_00551f9c(param_3 + 1,local_3e);
        if (((uint)local_3e[0] <= param_4 - 3) && (local_40[0] < 0x37)) {
                    /* WARNING: Could not recover jumptable at 0x005abba0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (*(code *)(PTR_DAT_0071c038 + *(int *)(PTR_DAT_0071c038 + (uint)local_40[0] * 4)))();
          return;
        }
        if (param_4 != 3) {
          FUN_005aa6d4(in_r10,1,0);
        }
      }
    }
  }
  return;
}


// 0x05abd98 (0x1d0 bytes)
int FUN_005abd98(int param_1,int param_2,int param_3,int param_4)

{
  int iVar1;
  int iVar2;
  undefined2 local_40 [2];
  GPiece<12> auStack_3c;
  
  iVar1 = FUN_005aa558(*(undefined4 *)(param_1 + 0x78));
  iVar2 = 0xcb2d;
  if (iVar1 != 0) {
    FUN_00551f9c(param_3,local_40);
    FUN_005525a8(param_3 + 2,auStack_3c);
    FUN_0054ef70(param_1 + 0x6c,param_3 + 6);
    iVar1 = 0x16;
    if (param_2 == 8) {
      iVar1 = 0x56;
    }
    if (iVar1 == param_4) {
      if ((*(undefined4 **)(param_1 + 0x5c) != (undefined4 *)0x0) && (param_2 == 9)) {
        (*(code *)**(undefined4 **)(param_1 + 0x5c))
                  (*(undefined4 *)(param_1 + 0x44),local_40[0],0,0,0,0,0,0);
      }
      iVar2 = 0;
      if (*(undefined4 **)(param_1 + 0x4c) != (undefined4 *)0x0) {
        (*(code *)**(undefined4 **)(param_1 + 0x4c))
                  (*(undefined4 *)(param_1 + 0x44),local_40[0],*(undefined8 *)(param_1 + 0x6c),
                   param_2 == 8);
        iVar2 = 0;
      }
    }
    else {
      iVar2 = FUN_005aa6d4(param_1,1,0);
      if (iVar2 == 0) {
        return 0xcb32;
      }
    }
  }
  return iVar2;
}


// 0x05abf68 (0x94 bytes)
undefined4 FUN_005abf68(int param_1)

{
  undefined4 uVar1;
  undefined1 uStack_50;
  GPiece<39> auStack_4f;
  
  FUN_00551ed8(&uStack_50,*(undefined1 *)(param_1 + 0x40));
  FUN_00551ed8(auStack_4f,*(undefined1 *)(param_1 + 0x41));
  uVar1 = FUN_005aab0c(*(undefined4 *)(param_1 + 0x78),&uStack_50,2,0x21);
  return uVar1;
}


// 0x05abffc (0x168 bytes)
ulonglong FUN_005abffc(int param_1,undefined8 param_2,int param_3,int param_4)

{
  ulonglong uVar1;
  int iVar2;
  ushort local_40;
  ushort local_3e;
  undefined4 local_3c [5];
  
  iVar2 = FUN_005aa558(*(undefined4 *)(param_1 + 0x78));
  uVar1 = 0xcb2d;
  if (iVar2 != 0) {
    FUN_00551f9c(param_3,&local_3e);
    *(uint *)(param_1 + 100) = (uint)local_3e;
    FUN_005525a8(param_3 + 2,local_3c);
    *(undefined4 *)(param_1 + 0x68) = local_3c[0];
    FUN_00551f9c(param_3 + 6,&local_40);
    *(uint *)(param_1 + 0x74) = (uint)local_40;
    FUN_0054ef70(param_1 + 0x6c,param_3 + 8);
    if (param_4 == 0x18) {
      if ((*(byte *)(param_1 + 0x41) & 4) != 0) {
        FUN_005573e0(param_1,1,0);
      }
      uVar1 = FUN_005abf68(param_1);
      if (uVar1 == 0) {
        *(undefined4 *)(param_1 + 8) = 7;
        uVar1 = 0;
      }
    }
    else {
      uVar1 = FUN_005aa6d4();
      if ((int)uVar1 == 0) {
        return uVar1 & 0xffffffff | 0xcb32;
      }
    }
  }
  return uVar1 & 0xffffffff;
}


// 0x05ac164 (0x78 bytes)
undefined4 FUN_005ac164(int param_1)

{
  undefined4 uVar1;
  GPiece<16> auStack_30;
  
  FUN_00551ed8(auStack_30,0);
  uVar1 = FUN_005aab0c(*(undefined4 *)(param_1 + 0x78),auStack_30,1,0x23);
  return uVar1;
}


// 0x05ac1dc (0x178 bytes)
/* WARNING: Removing unreachable block (ram,0x005ac318) */
/* WARNING: Removing unreachable block (ram,0x005ac330) */

ulonglong FUN_005ac1dc(int param_1,undefined8 param_2,int param_3,int param_4)

{
  int iVar3;
  ulonglong uVar1;
  ulonglong uVar2;
  byte local_30 [2];
  GPiece<14> local_2e;
  
  iVar3 = FUN_005aa558(*(undefined4 *)(param_1 + 0x78));
  uVar1 = 0xcb2d;
  if (iVar3 != 0) {
    FUN_00551ef4(param_3,local_30);
    if ((local_30[0] & 2) == 0) {
      iVar3 = 1;
      if ((local_30[0] & 4) != 0) {
        FUN_00551f9c(param_3 + 1,local_2e);
        iVar3 = 3;
      }
      if (iVar3 == param_4) {
        uVar1 = FUN_005ac164(param_1);
        if (uVar1 == 0) {
          uVar1 = 0;
          *(undefined4 *)(param_1 + 8) = 4;
        }
      }
      else {
        uVar2 = FUN_005aa6d4(param_1,1,0);
        uVar1 = 0xcb32;
        if (uVar2 != 0) {
          uVar1 = uVar2;
        }
      }
    }
    else {
      uVar1 = FUN_005aa6d4(param_1,1,0);
      if ((int)uVar1 == 0) {
        return 0xcb28;
      }
    }
  }
  return uVar1 & 0xffffffff;
}


// 0x05ac354 (0xa8 bytes)
undefined4 FUN_005ac354(int param_1)

{
  undefined4 uVar1;
  GPiece<2> auStack_50;
  GPiece<2> auStack_4e;
  GPiece<36> auStack_4c;
  
  FUN_00551f78(auStack_50,1);
  FUN_00551f78(auStack_4e,0x70);
  FUN_00551f78(auStack_4c,0);
  uVar1 = FUN_005aab0c(*(undefined4 *)(param_1 + 0x78),auStack_50,6,0x24);
  return uVar1;
}


// 0x05ac3fc (0x1b4 bytes)
void FUN_005ac3fc(undefined4 param_1,undefined4 param_2,uint param_3,undefined8 param_4,int param_5)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  
  if (param_5 != 0) {
    iVar1 = *(int *)(param_5 + 0x78);
    iVar3 = FUN_005aa558(iVar1);
    if (iVar3 != 0) {
      iVar1 = *(int *)(iVar1 + 0xc);
      if (param_3 == 1) {
        iVar3 = FUN_005ac354(param_5);
        if (iVar3 == 0) {
          *(undefined4 *)(param_5 + 8) = 0xc;
          return;
        }
        iVar3 = FUN_005aa6d4(param_5,1,1);
      }
      else {
        if ((param_3 == 0) || (5 < param_3)) {
          (*(code *)**(undefined4 **)(*(int *)PTR_DAT_0071c02c + 0x3c))(param_1,param_2);
          return;
        }
        uVar2 = (int)(param_3 ^ 2) >> 0x1f;
        iVar3 = FUN_005aa6d4(param_5,1,
                             ((int)(uVar2 - (uVar2 ^ param_3 ^ 2)) >> 0x1f & 0xfffffffcU) + 5);
      }
      if (iVar3 != 0) {
        (*(code *)**(undefined4 **)(*(int *)PTR_DAT_0071c02c + 0x3c))(param_1,param_2);
        *(undefined4 *)(iVar1 + 8) = 0;
      }
    }
  }
  return;
}


// 0x05ac5b0 (0x138 bytes)
int FUN_005ac5b0(int param_1,undefined8 param_2,int param_3,int param_4)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  GPiece<2> local_40;
  ushort local_3e [7];
  
  iVar1 = FUN_005aa558(*(undefined4 *)(param_1 + 0x78));
  iVar3 = 0xcb2d;
  if (iVar1 != 0) {
    FUN_00551ef4(param_3,local_40);
    uVar2 = FUN_005a15ec(local_40[0]);
    FUN_00551f9c(param_3 + 1,local_3e);
    *(uint *)(param_1 + 0x74) = (uint)local_3e[0];
    FUN_0054ef70(param_1 + 0x6c,param_3 + 3);
    if (param_4 == 0x13) {
      iVar3 = FUN_005aa6d4(param_1,uVar2,0);
    }
    else {
      iVar3 = FUN_005aa6d4(param_1,1,0);
      if (iVar3 == 0) {
        return 0xcb32;
      }
    }
  }
  return iVar3;
}


// 0x05ac6e8 (0x13c bytes)
undefined4 FUN_005ac6e8(int param_1)

{
  longlong lVar1;
  int iVar2;
  code *pcVar3;
  ulonglong *puVar4;
  ulonglong *puVar5;
  ulonglong uVar6;
  undefined *puVar7;
  undefined4 uVar8;
  uint uVar9;
  ulonglong unaff_r27;
  ulonglong unaff_r28;
  ulonglong unaff_r29;
  ulonglong unaff_r30;
  ulonglong unaff_r31;
  ulonglong in_LR;
  
  lVar1 = ZEXT48(&stack0x00000000) - 0xa0;
  puVar4 = (ulonglong *)lVar1;
  *puVar4 = ZEXT48(&stack0x00000000);
  puVar7 = PTR_DAT_0071c078;
  puVar4[0x16] = in_LR;
  uVar9 = *(uint *)(param_1 + 0x3c);
  iVar2 = *(int *)puVar7;
  puVar4[0xf] = unaff_r27;
  puVar4[0x11] = unaff_r29;
  puVar4[0x12] = unaff_r30;
  puVar4[0x13] = unaff_r31;
  puVar4[0x10] = unaff_r28;
  lVar1 = lVar1 - (((ulonglong)uVar9 + 0x48 & 0xffffffff) + 0x1e & 0xfffffffffffffff0);
  puVar5 = (ulonglong *)lVar1;
  *puVar5 = *puVar4;
  uVar8 = 0;
  if (iVar2 != 0) {
    pcVar3 = (code *)**(undefined4 **)(iVar2 + 0x9c);
    puVar5[5] = ZEXT48(&TOC_BASE);
    uVar8 = (*pcVar3)();
  }
  uVar6 = lVar1 + 0x70U & 0xffffffff;
  FUN_00552570(uVar6,*(undefined4 *)(param_1 + 0x1c));
  FUN_00552570(lVar1 + 0x74U & 0xffffffff,uVar8);
  memset(lVar1 + 0x78U & 0xffffffff,0,0x40);
  uVar9 = 0x48;
  if (*(size_t *)(param_1 + 0x3c) != 0) {
    memcpy(puVar5 + 0x17,*(void **)(param_1 + 0x38),*(size_t *)(param_1 + 0x3c));
    uVar9 = *(int *)(param_1 + 0x3c) + 0x48U & 0xffff;
  }
  uVar8 = FUN_005aab0c(*(undefined4 *)(param_1 + 0x78),uVar6,uVar9,0);
  return uVar8;
}


// 0x05ac824 (0x170 bytes)
/* WARNING: Removing unreachable block (ram,0x005ac908) */
/* WARNING: Removing unreachable block (ram,0x005ac944) */
/* WARNING: Removing unreachable block (ram,0x005ac978) */
/* WARNING: Removing unreachable block (ram,0x005ac988) */
/* WARNING: Removing unreachable block (ram,0x005ac94c) */
/* WARNING: Removing unreachable block (ram,0x005ac970) */
/* WARNING: Removing unreachable block (ram,0x005ac928) */
/* WARNING: Removing unreachable block (ram,0x005ac940) */

int FUN_005ac824(int param_1,undefined8 param_2,undefined4 param_3)

{
  int iVar1;
  int iVar2;
  GPiece<24> local_40;
  
  iVar1 = FUN_005aa558(*(undefined4 *)(param_1 + 0x78));
  iVar2 = 0xcb2d;
  if (iVar1 != 0) {
    FUN_00551f9c(param_3,local_40);
    iVar2 = FUN_005aa6d4(param_1,1,0);
    if (iVar2 == 0) {
      return 0xcb28;
    }
  }
  return iVar2;
}


// 0x05ac994 (0x8 bytes)
undefined8 FUN_005ac994(void)

{
  return 4;
}


// 0x05ac99c (0x8 bytes)
undefined8 FUN_005ac99c(void)

{
  return 4;
}


// 0x05ac9a4 (0x8 bytes)
undefined8 FUN_005ac9a4(void)

{
  return 4;
}


// 0x05ac9ac (0x8 bytes)
undefined8 FUN_005ac9ac(void)

{
  return 4;
}


// 0x05ac9b4 (0x8 bytes)
undefined8 FUN_005ac9b4(void)

{
  return 4;
}


// 0x05ac9bc (0x8 bytes)
undefined8 FUN_005ac9bc(void)

{
  return 4;
}


// 0x05ac9c4 (0x8 bytes)
undefined8 FUN_005ac9c4(void)

{
  return 4;
}


// 0x05ac9cc (0x8 bytes)
undefined8 FUN_005ac9cc(void)

{
  return 4;
}


// 0x05ac9d4 (0x4c bytes)
undefined8
FUN_005ac9d4(int param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,undefined8 param_5
            )

{
  (*(code *)**(undefined4 **)(param_1 + 0x70))(param_2,param_3,param_4,param_5);
  return 0;
}


// 0x05aca20 (0x48 bytes)
undefined8 FUN_005aca20(int param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  (*(code *)**(undefined4 **)(param_1 + 0x7c))(param_2,param_3,param_4);
  return 0;
}


// 0x05aca68 (0x54 bytes)
undefined8
FUN_005aca68(int param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,undefined8 param_5
            ,undefined8 param_6,undefined8 param_7)

{
  (*(code *)**(undefined4 **)(param_1 + 0x88))(param_2,param_3,param_4,param_5,param_6,param_7);
  return 0;
}


// 0x05acabc (0x50 bytes)
undefined8
FUN_005acabc(int param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,undefined8 param_5
            ,undefined8 param_6)

{
  (*(code *)**(undefined4 **)(param_1 + 0x8c))(param_2,param_3,param_4,param_5,param_6);
  return 0;
}


// 0x05acb0c (0x98 bytes)
undefined8 FUN_005acb0c(int param_1,uint param_2,int param_3,uint param_4,int *param_5)

{
  bool bVar1;
  uint uVar2;
  int iVar3;
  ulonglong uVar4;
  
  *param_5 = 0;
  if ((param_2 != 0) && (param_4 != 0)) {
    uVar4 = (ulonglong)param_2;
    iVar3 = 0;
    uVar2 = 0;
    do {
      if (*(char *)(iVar3 + param_1) == *(char *)(param_3 + uVar2)) {
        if (*param_5 == 0) {
          *param_5 = iVar3 + param_1;
        }
        uVar2 = uVar2 + 1;
        bVar1 = uVar2 < param_4;
      }
      else {
        uVar2 = 1;
        *param_5 = 0;
        bVar1 = 1 < param_4;
      }
      if (uVar4 == 1) {
        return 0;
      }
      uVar4 = uVar4 - 1;
      iVar3 = iVar3 + 1;
    } while (bVar1);
  }
  return 0;
}


// 0x05acba4 (0x28 bytes)
undefined8 FUN_005acba4(void *param_1,void *param_2,size_t param_3)

{
  memcpy(param_1,param_2,param_3);
  return 0;
}


// 0x05acbcc (0x74 bytes)
undefined4 FUN_005acbcc(undefined4 *param_1)

{
  undefined4 local_20;
  
  if (param_1 == (undefined4 *)0x0) {
    local_20 = 3;
  }
  else {
    *param_1 = 0;
    param_1[1] = 0;
    param_1[2] = 0;
    param_1[3] = 0;
    local_20 = 0;
  }
  return local_20;
}


// 0x05acc40 (0x278 bytes)
undefined4 FUN_005acc40(int *param_1)

{
  int iVar1;
  void *pvVar2;
  undefined4 uVar3;
  int *piStack00000030;
  undefined4 local_30;
  
  if (param_1 == (int *)0x0) {
    local_30 = 3;
  }
  else if (*param_1 == 0) {
    local_30 = 1;
  }
  else if (param_1[1] == 0) {
    local_30 = 1;
  }
  else if (param_1[2] == 0) {
    local_30 = 1;
  }
  else {
    piStack00000030 = param_1;
    FUN_005aceb8();
    FUN_005b2640();
    *(int *)(*(int *)PTR_DAT_0071c07c + 0x9c) = *piStack00000030;
    *(int *)(*(int *)PTR_DAT_0071c07c + 0xa0) = piStack00000030[1];
    *(int *)(*(int *)PTR_DAT_0071c07c + 0xa4) = piStack00000030[2];
    if (piStack00000030[3] == 0) {
      pvVar2 = (void *)FUN_005ad810(*(int *)PTR_DAT_0071c07c + 0xa8,*(int *)PTR_DAT_0071c07c + 0xe8)
      ;
    }
    else {
      pvVar2 = memcpy((void *)(*(int *)PTR_DAT_0071c07c + 0xa8),(void *)piStack00000030[3],
                            0x80);
    }
    if (*(int *)(*(int *)PTR_DAT_0071c07c + 0xa0) != 0) {
      pvVar2 = (void *)(*(code *)**(undefined4 **)(*(int *)PTR_DAT_0071c07c + 0xa0))
                                 (*(int *)PTR_PTR_0071c080 + 0x208,*(int *)PTR_PTR_0071c080 + 0x248)
      ;
    }
    if (*(int *)(*(int *)PTR_DAT_0071c07c + 0xa4) != 0) {
      iVar1 = *(int *)PTR_PTR_0071c080;
      uVar3 = (*(code *)**(undefined4 **)(*(int *)PTR_DAT_0071c07c + 0xa4))(pvVar2);
      *(undefined4 *)(iVar1 + 4) = uVar3;
    }
    local_30 = 0;
  }
  return local_30;
}


// 0x05aceb8 (0x220 bytes)
void FUN_005aceb8(void)

{
  *(undefined **)PTR_DAT_0071c084 = PTR_PTR_0071c088;
  *(undefined **)(PTR_DAT_0071c084 + 4) = PTR_PTR_0071c08c;
  *(undefined **)(PTR_DAT_0071c084 + 8) = PTR_PTR_0071c090;
  *(undefined **)(PTR_DAT_0071c084 + 0xc) = PTR_PTR_0071c094;
  *(undefined **)(PTR_DAT_0071c084 + 0x10) = PTR_PTR_0071c098;
  *(undefined **)(PTR_DAT_0071c084 + 0x14) = PTR_PTR_0071c09c;
  *(undefined **)(PTR_DAT_0071c084 + 0x18) = PTR_PTR_0071c0a0;
  *(undefined **)(PTR_DAT_0071c084 + 0x1c) = PTR_PTR_0071c0a4;
  *(undefined **)(PTR_DAT_0071c084 + 0x20) = PTR_PTR_0071c0a8;
  *(undefined **)(PTR_DAT_0071c084 + 0x24) = PTR_PTR_0071c0ac;
  *(undefined **)(PTR_DAT_0071c084 + 0x28) = PTR_PTR_0071c0b0;
  *(undefined **)(PTR_DAT_0071c084 + 0x2c) = PTR_PTR_0071c0b4;
  *(undefined **)(PTR_DAT_0071c084 + 0x30) = PTR_PTR_0071c0b8;
  *(undefined **)(PTR_DAT_0071c084 + 0x34) = PTR_PTR_0071c0bc;
  *(undefined **)(PTR_DAT_0071c084 + 0x38) = PTR_PTR_0071c0c0;
  *(undefined **)(PTR_DAT_0071c084 + 0x3c) = PTR_PTR_0071c0c4;
  *(undefined **)(PTR_DAT_0071c084 + 0x40) = PTR_PTR_0071c0c8;
  *(undefined **)(PTR_DAT_0071c084 + 0x44) = PTR_PTR_0071c0cc;
  *(undefined **)(PTR_DAT_0071c084 + 0x48) = PTR_PTR_0071c0d0;
  *(undefined **)(PTR_DAT_0071c084 + 0x4c) = PTR_PTR_0071c0d4;
  *(undefined **)(PTR_DAT_0071c084 + 0x50) = PTR_PTR_0071c0d8;
  *(undefined **)(PTR_DAT_0071c084 + 0x54) = PTR_PTR_0071c0dc;
  *(undefined **)(PTR_DAT_0071c084 + 0x58) = PTR_PTR_0071c0e0;
  *(undefined **)(PTR_DAT_0071c084 + 0x5c) = PTR_PTR_0071c0e4;
  *(undefined **)(PTR_DAT_0071c084 + 0x60) = PTR_PTR_0071c0e8;
  *(undefined **)(PTR_DAT_0071c084 + 100) = PTR_PTR_0071c0ec;
  *(undefined **)(PTR_DAT_0071c084 + 0x68) = PTR_PTR_0071c0f0;
  *(undefined **)(PTR_DAT_0071c084 + 0x6c) = PTR_PTR_0071c0f4;
  *(undefined **)(PTR_DAT_0071c084 + 0x70) = PTR_PTR_0071c0f8;
  *(undefined **)(PTR_DAT_0071c084 + 0x74) = PTR_PTR_0071c0fc;
  *(undefined **)(PTR_DAT_0071c084 + 0x78) = PTR_PTR_0071c100;
  *(undefined **)(PTR_DAT_0071c084 + 0x7c) = PTR_PTR_0071c104;
  *(undefined **)(PTR_DAT_0071c084 + 0x80) = PTR_PTR_0071c108;
  *(undefined **)(PTR_DAT_0071c084 + 0x84) = PTR_PTR_0071c10c;
  *(undefined **)(PTR_DAT_0071c084 + 0x88) = PTR_PTR_0071c110;
  *(undefined **)(PTR_DAT_0071c084 + 0x8c) = PTR_PTR_0071c114;
  *(undefined **)(PTR_DAT_0071c084 + 0x90) = PTR_PTR_0071c118;
  *(undefined **)(PTR_DAT_0071c084 + 0x94) = PTR_PTR_0071c11c;
  *(undefined **)(PTR_DAT_0071c084 + 0x98) = PTR_PTR_0071c120;
  *(undefined4 *)(PTR_DAT_0071c084 + 0x9c) = 0;
  *(undefined4 *)(PTR_DAT_0071c084 + 0xa0) = 0;
  *(undefined4 *)(PTR_DAT_0071c084 + 0xa4) = 0;
  *(undefined **)PTR_DAT_0071c07c = PTR_DAT_0071c084;
  return;
}


// 0x05ad0d8 (0x90 bytes)
undefined4 FUN_005ad0d8(int param_1)

{
  uint local_30;
  
  if (param_1 != 0) {
    for (local_30 = 0; local_30 < 0x40; local_30 = local_30 + 1) {
      if (*(char *)(param_1 + local_30) != '\0') {
        return 0;
      }
    }
  }
  return 1;
}


// 0x05ad168 (0xf0 bytes)
undefined4 * FUN_005ad168(void)

{
  undefined4 *local_1c [5];
  
  FUN_00551b80(local_1c,0x24);
  if (local_1c[0] != (undefined4 *)0x0) {
    *local_1c[0] = 0;
    local_1c[0][1] = 0;
    local_1c[0][2] = 0;
    local_1c[0][5] = 0;
    local_1c[0][6] = 0;
    local_1c[0][3] = 0;
    FUN_005ad5d4(local_1c[0],1);
    local_1c[0][8] = 0;
  }
  return local_1c[0];
}


// 0x05ad258 (0xbc bytes)
void FUN_005ad258(int param_1)

{
  int iStack00000030;
  GPiece<24> local_20;
  
  if (param_1 != 0) {
    iStack00000030 = param_1;
    if (*(int *)(param_1 + 0x14) != 0) {
      FUN_005519f0(param_1 + 0x14);
    }
    if (*(int *)(iStack00000030 + 0x18) != 0) {
      FUN_005519f0(iStack00000030 + 0x18);
    }
    FUN_005519f0(local_20);
  }
  return;
}


// 0x05ad314 (0x12c bytes)
void FUN_005ad314(int param_1,int *param_2)

{
  if (param_1 != 0) {
    param_2[2] = param_1;
    param_2[1] = 0;
    if (*(int *)(param_1 + 8) == 0) {
      *(int **)(param_1 + 8) = param_2;
      *param_2 = 0;
    }
    else {
      *param_2 = *(int *)(param_1 + 0xc);
      *(int **)(*param_2 + 4) = param_2;
    }
    *(int **)(param_1 + 0xc) = param_2;
  }
  if (((param_2[8] == 0) && (*(int *)(param_1 + 0x14) != 0xffff)) && (param_2[3] != 0xffff)) {
    param_2[8] = (int)PTR_PTR_0071c124;
  }
  return;
}


// 0x05ad440 (0xa0 bytes)
int FUN_005ad440(int param_1,uint param_2)

{
  undefined4 local_20;
  
  local_20 = 0;
  if (param_1 != 0) {
    local_20 = *(int *)(param_1 + 8);
  }
  for (; (local_20 != 0 && (*(uint *)(local_20 + 0xc) != (param_2 & 0x1fffffff)));
      local_20 = *(int *)(local_20 + 4)) {
  }
  return local_20;
}


// 0x05ad4e0 (0xf4 bytes)
void FUN_005ad4e0(int param_1,int *param_2)

{
  if ((param_1 != 0) && (param_2 != (int *)0x0)) {
    param_2[2] = 0;
    if (param_2[1] == 0) {
      *(int *)(param_1 + 0xc) = *param_2;
    }
    else {
      *(int *)param_2[1] = *param_2;
    }
    if (*param_2 == 0) {
      *(int *)(param_1 + 8) = param_2[1];
    }
    else {
      *(int *)(*param_2 + 4) = param_2[1];
    }
  }
  return;
}


// 0x05ad5d4 (0x98 bytes)
void FUN_005ad5d4(int param_1,undefined4 param_2)

{
  int iVar1;
  
  *(undefined4 *)(param_1 + 0x10) = param_2;
  iVar1 = *(int *)(param_1 + 0x10);
  if ((iVar1 == 0x400) || (iVar1 == 0x600)) {
    *(undefined **)(param_1 + 0x1c) = PTR_PTR_0071c10c;
  }
  else if (iVar1 == 1) {
    *(undefined **)(param_1 + 0x1c) = PTR_PTR_0071c128;
  }
  return;
}


// 0x05ad66c (0x100 bytes)
int FUN_005ad66c(undefined4 param_1,undefined4 param_2)

{
  undefined4 uStack00000030;
  undefined4 uStack00000038;
  GPiece<100> auStack_7c;
  byte local_18;
  byte local_17;
  byte local_16;
  byte local_15;
  
  uStack00000030 = param_1;
  uStack00000038 = param_2;
  FUN_005b89bc(auStack_7c);
  FUN_005b8a38(auStack_7c,uStack00000030,uStack00000038);
  FUN_005b8ec4(auStack_7c,&local_18,4);
  return (uint)local_15 * 0x1000000 + (uint)local_16 * 0x10000 + (uint)local_17 * 0x100 +
         (uint)local_18;
}


// 0x05ad76c (0xa4 bytes)
void FUN_005ad76c(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 uStack00000030;
  undefined4 uStack00000038;
  undefined4 uStack00000040;
  GPiece<24> auStack_20;
  
  uStack00000030 = param_1;
  uStack00000038 = param_2;
  uStack00000040 = param_3;
  FUN_005bd0b8(auStack_20);
  FUN_005bd940(auStack_20,uStack00000030,uStack00000038);
  FUN_005bd188(auStack_20,uStack00000040);
  return;
}


// 0x05ad810 (0x60 bytes)
void FUN_005ad810(undefined4 param_1,undefined4 param_2)

{
  undefined4 uStack00000030;
  undefined4 uStack00000038;
  
  uStack00000030 = param_1;
  uStack00000038 = param_2;
  FUN_005afa78();
  FUN_005b6b6c(uStack00000030,uStack00000038);
  return;
}


// 0x05ad870 (0x28 bytes)
// strings: 00660660: 'rt_crypt ReleaseVersion 3.05.201103091800'

undefined * FUN_005ad870(void)

{
  return PTR_s_rt_crypt_ReleaseVersion_3_05_201_0071c12c;
}


// 0x05ad898 (0xb8 bytes)
void FUN_005ad898(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 uStack00000030;
  undefined4 uStack00000038;
  undefined4 uStack00000040;
  undefined4 uStack00000048;
  GPiece<104> auStack_70;
  
  uStack00000030 = param_1;
  uStack00000038 = param_2;
  uStack00000040 = param_3;
  uStack00000048 = param_4;
  FUN_005b89bc(auStack_70);
  FUN_005b8a38(auStack_70,uStack00000030,uStack00000038);
  FUN_005b8ec4(auStack_70,uStack00000040,uStack00000048);
  return;
}


// 0x05ad950 (0x104 bytes)
void FUN_005ad950(int param_1,int param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5,
                 undefined4 param_6)

{
  int iStack00000030;
  int iStack00000038;
  undefined4 uStack00000040;
  undefined4 uStack00000048;
  undefined4 uStack00000050;
  undefined4 uStack00000058;
  GPiece<104> auStack_70;
  
  iStack00000030 = param_1;
  iStack00000038 = param_2;
  uStack00000040 = param_3;
  uStack00000048 = param_4;
  uStack00000050 = param_5;
  uStack00000058 = param_6;
  FUN_005b89bc(auStack_70);
  if ((iStack00000030 != 0) && (iStack00000038 != 0)) {
    FUN_005b8a38(auStack_70,iStack00000030,iStack00000038);
  }
  FUN_005b8a38(auStack_70,uStack00000040,uStack00000048);
  FUN_005b8ec4(auStack_70,uStack00000050,uStack00000058);
  return;
}


// 0x05ada54 (0x348 bytes)
undefined4 FUN_005ada54(uint param_1,int param_2)

{
  uint uVar1;
  int iVar2;
  uint uStack00000030;
  int iStack00000038;
  int *local_2c [9];
  
  uStack00000030 = param_1;
  iStack00000038 = param_2;
  iVar2 = FUN_00550e68(param_1);
  if (iVar2 != 0) {
    return 0;
  }
  FUN_00551b80(local_2c,0x2c);
  *local_2c[0] = 0;
  local_2c[0][1] = 0;
  local_2c[0][2] = 0;
  local_2c[0][3] = 0;
  local_2c[0][4] = 0;
  local_2c[0][5] = 0;
  local_2c[0][6] = 0;
  local_2c[0][7] = 0;
  local_2c[0][8] = 0;
  local_2c[0][9] = 0;
  local_2c[0][10] = 0;
  if (local_2c[0] != (int *)0x0) {
    local_2c[0][4] = uStack00000030;
    local_2c[0][5] = iStack00000038;
    local_2c[0][6] = 0;
    if (**(int **)PTR_PTR_0071c080 == 0) {
      **(undefined4 **)PTR_PTR_0071c080 = local_2c[0];
    }
    else {
      *local_2c[0] = *(int *)**(undefined4 **)PTR_PTR_0071c080;
      *(int **)(*local_2c[0] + 4) = local_2c[0];
    }
    *(int **)**(undefined4 **)PTR_PTR_0071c080 = local_2c[0];
    local_2c[0][1] = **(int **)PTR_PTR_0071c080;
    uVar1 = uStack00000030 & 0xc0000000;
    if (uVar1 == 0x40000000) {
      local_2c[0][7] = 0x600;
      FUN_005ae250(uStack00000030,*(int *)PTR_PTR_0071c080 + 0x188);
    }
    else if (uVar1 < 0x40000001) {
      if (uVar1 != 0) {
        return 0xffffffff;
      }
      local_2c[0][7] = 0x600;
      FUN_005ae250(uStack00000030,*(int *)PTR_PTR_0071c080 + 0x88);
    }
    else if (uVar1 == 0x80000000) {
      local_2c[0][7] = 1;
      FUN_005ae250(uStack00000030,*(int *)PTR_PTR_0071c080 + 8);
    }
    else {
      if (uVar1 != 0xc0000000) {
        return 0xffffffff;
      }
      local_2c[0][7] = 0x600;
      FUN_005ae250(uStack00000030,*(int *)PTR_PTR_0071c080 + 0x108);
    }
    return 0;
  }
  return 0xffffffff;
}


// 0x05add9c (0x74 bytes)
void FUN_005add9c(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 uStack00000030;
  undefined4 uStack00000038;
  
  uStack00000030 = param_1;
  uStack00000038 = param_2;
  iVar1 = FUN_00550e68(param_1);
  if (iVar1 != 0) {
    *(undefined4 *)(iVar1 + 0x14) = uStack00000038;
  }
  return;
}


// 0x05ade10 (0x280 bytes)
undefined4 FUN_005ade10(undefined4 param_1,undefined4 param_2,undefined4 param_3,void *param_4)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uStack00000030;
  undefined4 uStack00000038;
  undefined4 uStack00000040;
  void *pvStack00000048;
  int local_2c;
  undefined4 local_20;
  
  uStack00000030 = param_1;
  uStack00000038 = param_2;
  uStack00000040 = param_3;
  pvStack00000048 = param_4;
  iVar2 = FUN_00550e68(param_1);
  if (iVar2 == 0) {
    local_20 = 0xffffffff;
  }
  else {
    local_2c = FUN_005ad440(iVar2,uStack00000038);
    if (local_2c == 0) {
      local_2c = FUN_005ad168();
      *(undefined4 *)(local_2c + 0xc) = uStack00000038;
      FUN_005ad314(iVar2,local_2c);
    }
    FUN_005ad5d4(local_2c,uStack00000040);
    iVar2 = FUN_00550e20(pvStack00000048);
    if (iVar2 == 0) {
      if (*(int *)(local_2c + 0x14) == 0) {
        FUN_00551b80(local_2c + 0x14,0x40);
      }
      memcpy(*(void **)(local_2c + 0x14),pvStack00000048,0x40);
    }
    else if (*(int *)(local_2c + 0x14) != 0) {
      puVar1 = *(undefined4 **)(local_2c + 0x14);
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
      puVar1[10] = 0;
      puVar1[0xb] = 0;
      puVar1[0xc] = 0;
      puVar1[0xd] = 0;
      puVar1[0xe] = 0;
      puVar1[0xf] = 0;
    }
    uVar3 = FUN_005b044c(local_2c);
    *(undefined4 *)(local_2c + 0x20) = uVar3;
    local_20 = 0;
  }
  return local_20;
}


// 0x05ae090 (0x1c0 bytes)
undefined4 FUN_005ae090(undefined4 param_1,undefined4 param_2,undefined4 *param_3)

{
  int iVar1;
  int iVar2;
  undefined4 uStack00000030;
  undefined4 uStack00000038;
  undefined4 *puStack00000040;
  
  uStack00000030 = param_1;
  uStack00000038 = param_2;
  puStack00000040 = param_3;
  iVar1 = FUN_00550e68(param_1);
  if (((iVar1 != 0) && (iVar1 = FUN_005ad440(iVar1,uStack00000038), iVar1 != 0)) &&
     (iVar2 = FUN_00550e20(*(undefined4 *)(iVar1 + 0x14)), iVar2 == 0)) {
    memcpy(puStack00000040,*(void **)(iVar1 + 0x14),0x40);
    return 0;
  }
  if (puStack00000040 != (undefined4 *)0x0) {
    *puStack00000040 = 0;
    puStack00000040[1] = 0;
    puStack00000040[2] = 0;
    puStack00000040[3] = 0;
    puStack00000040[4] = 0;
    puStack00000040[5] = 0;
    puStack00000040[6] = 0;
    puStack00000040[7] = 0;
    puStack00000040[8] = 0;
    puStack00000040[9] = 0;
    puStack00000040[10] = 0;
    puStack00000040[0xb] = 0;
    puStack00000040[0xc] = 0;
    puStack00000040[0xd] = 0;
    puStack00000040[0xe] = 0;
    puStack00000040[0xf] = 0;
  }
  return 0xffffffff;
}


// 0x05ae250 (0x2f4 bytes)
undefined4 FUN_005ae250(undefined4 param_1,void *param_2)

{
  undefined4 *puVar1;
  int iVar2;
  int iVar3;
  undefined4 uStack00000030;
  void *pvStack00000038;
  
  uStack00000030 = param_1;
  pvStack00000038 = param_2;
  iVar2 = FUN_00550e68(param_1);
  if (iVar2 != 0) {
    iVar3 = FUN_00550e20(pvStack00000038);
    if ((iVar3 == 0) && (iVar3 = FUN_00550e20((int)pvStack00000038 + 0x40), iVar3 == 0)) {
      if (*(int *)(iVar2 + 0x20) == 0) {
        FUN_00551b80(iVar2 + 0x20,0x40);
      }
      if (*(int *)(iVar2 + 0x24) == 0) {
        FUN_00551b80(iVar2 + 0x24,0x40);
      }
      memcpy(*(void **)(iVar2 + 0x20),pvStack00000038,0x40);
      memcpy(*(void **)(iVar2 + 0x24),(void *)((int)pvStack00000038 + 0x40),0x40);
    }
    else {
      if (*(int *)(iVar2 + 0x20) != 0) {
        puVar1 = *(undefined4 **)(iVar2 + 0x20);
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
        puVar1[10] = 0;
        puVar1[0xb] = 0;
        puVar1[0xc] = 0;
        puVar1[0xd] = 0;
        puVar1[0xe] = 0;
        puVar1[0xf] = 0;
      }
      if (*(int *)(iVar2 + 0x24) != 0) {
        puVar1 = *(undefined4 **)(iVar2 + 0x24);
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
        puVar1[10] = 0;
        puVar1[0xb] = 0;
        puVar1[0xc] = 0;
        puVar1[0xd] = 0;
        puVar1[0xe] = 0;
        puVar1[0xf] = 0;
      }
    }
    return 0;
  }
  return 0xffffffff;
}


// 0x05ae544 (0x140 bytes)
undefined4 FUN_005ae544(undefined4 param_1,undefined4 param_2,undefined4 param_3,void *param_4)

{
  int iVar1;
  int iVar2;
  undefined4 uStack00000030;
  undefined4 uStack00000038;
  undefined4 uStack00000040;
  void *pvStack00000048;
  undefined4 local_20;
  
  uStack00000030 = param_1;
  uStack00000038 = param_2;
  uStack00000040 = param_3;
  pvStack00000048 = param_4;
  iVar1 = FUN_00550e68(param_1);
  if ((iVar1 == 0) || (iVar2 = FUN_005ad0d8(pvStack00000048), iVar2 != 0)) {
    local_20 = 0xffffffff;
  }
  else {
    if (*(int *)(iVar1 + 0x28) == 0) {
      FUN_00551b80(iVar1 + 0x28,0x40);
    }
    *(undefined4 *)(iVar1 + 0x1c) = uStack00000040;
    *(undefined4 *)(iVar1 + 0x18) = uStack00000038;
    memcpy(*(void **)(iVar1 + 0x28),pvStack00000048,0x40);
    local_20 = 0;
  }
  return local_20;
}


// 0x05ae684 (0x124 bytes)
undefined4 FUN_005ae684(undefined4 param_1,undefined4 param_2,void *param_3)

{
  int iVar1;
  int iVar2;
  undefined4 uStack00000030;
  undefined4 uStack00000038;
  void *pvStack00000040;
  
  uStack00000030 = param_1;
  uStack00000038 = param_2;
  pvStack00000040 = param_3;
  iVar1 = FUN_00550e68(param_1);
  if (pvStack00000040 != (void *)0x0) {
    if ((iVar1 != 0) && (iVar2 = FUN_005ad0d8(*(undefined4 *)(iVar1 + 0x28)), iVar2 == 0)) {
      memcpy(pvStack00000040,*(void **)(iVar1 + 0x28),0x40);
      return 0;
    }
    memset(pvStack00000040,0,0x40);
  }
  return 0xffffffff;
}


// 0x05ae7a8 (0x1d4 bytes)
undefined4 FUN_005ae7a8(undefined4 param_1,undefined4 param_2,undefined4 param_3,void *param_4)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uStack00000030;
  undefined4 uStack00000038;
  undefined4 uStack00000040;
  void *pvStack00000048;
  undefined4 local_2c;
  undefined4 local_20;
  
  uStack00000030 = param_1;
  uStack00000038 = param_2;
  uStack00000040 = param_3;
  pvStack00000048 = param_4;
  iVar1 = FUN_00550e68(param_1);
  if ((iVar1 == 0) || (iVar2 = FUN_005ad0d8(pvStack00000048), iVar2 != 0)) {
    local_20 = 0xffffffff;
  }
  else {
    local_2c = FUN_005ad440(iVar1,uStack00000038);
    if (local_2c == 0) {
      local_2c = FUN_005ad168();
      *(undefined4 *)(local_2c + 0xc) = uStack00000038;
      FUN_005ad314(iVar1,local_2c);
    }
    FUN_005ad5d4(local_2c,uStack00000040);
    if (*(int *)(local_2c + 0x18) == 0) {
      FUN_00551b80(local_2c + 0x18,0x40);
    }
    memcpy(*(void **)(local_2c + 0x18),pvStack00000048,0x40);
    uVar3 = FUN_005b044c(local_2c);
    *(undefined4 *)(local_2c + 0x20) = uVar3;
    local_20 = 0;
  }
  return local_20;
}


// 0x05ae97c (0x168 bytes)
undefined4 FUN_005ae97c(undefined4 param_1,undefined4 param_2,void *param_3)

{
  int iVar1;
  int iVar2;
  undefined4 uStack00000030;
  undefined4 uStack00000038;
  void *pvStack00000040;
  undefined4 local_20;
  
  uStack00000030 = param_1;
  uStack00000038 = param_2;
  pvStack00000040 = param_3;
  iVar1 = FUN_00550e68(param_1);
  if ((iVar1 == 0) || (pvStack00000040 == (void *)0x0)) {
    local_20 = 0xffffffff;
  }
  else {
    iVar1 = FUN_005ad440(iVar1,uStack00000038);
    if ((iVar1 == 0) || (iVar2 = FUN_005ad0d8(*(undefined4 *)(iVar1 + 0x18)), iVar2 != 0)) {
      memset(pvStack00000040,0,0x40);
      local_20 = 0xffffffff;
    }
    else {
      memcpy(pvStack00000040,*(void **)(iVar1 + 0x18),0x40);
      local_20 = 0;
    }
  }
  return local_20;
}


// 0x05aeae4 (0x184 bytes)
undefined4 FUN_005aeae4(undefined4 param_1,undefined4 param_2,int param_3)

{
  uint uVar1;
  int iVar2;
  undefined4 uStack00000030;
  undefined4 uStack00000038;
  int iStack00000040;
  undefined4 local_70;
  GPiece<76> auStack_6c;
  undefined4 local_20;
  
  uStack00000030 = param_1;
  uStack00000038 = param_2;
  iStack00000040 = param_3;
  iVar2 = FUN_005ad0d8(param_3);
  if (iVar2 == 0) {
    iVar2 = FUN_005ae97c(uStack00000030,uStack00000038,auStack_6c);
    if (iVar2 == 0) {
      local_70 = 0x40;
      do {
        uVar1 = local_70 - 1;
        if (-1 < (longlong)((longlong)((int)local_70 >> 0x1f) - (ulonglong)local_70 << 0x20)) {
          return 0;
        }
        if ((byte)auStack_6c[local_70 - 1] < *(byte *)(iStack00000040 + uVar1)) {
          return 1;
        }
        iVar2 = local_70 - 1;
        local_70 = uVar1;
      } while ((byte)auStack_6c[iVar2] <= *(byte *)(iStack00000040 + uVar1));
      local_20 = 0xffffffff;
    }
    else {
      local_20 = 1;
    }
  }
  else {
    local_20 = 0xffffffff;
  }
  return local_20;
}


// 0x05aec68 (0x108 bytes)
void FUN_005aec68(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uStack00000030;
  undefined4 uStack00000038;
  
  uStack00000030 = param_1;
  uStack00000038 = param_2;
  iVar1 = FUN_00550e68(param_1);
  if (iVar1 != 0) {
    iVar1 = FUN_005ad440(iVar1,uStack00000038);
    if (iVar1 != 0) {
      if (*(int *)(iVar1 + 0x18) != 0) {
        memset(*(undefined4 *)(iVar1 + 0x18),0,0x40);
      }
      uVar2 = FUN_005b044c(iVar1);
      *(undefined4 *)(iVar1 + 0x20) = uVar2;
    }
  }
  return;
}


// 0x05aed70 (0x27c bytes)
undefined4 FUN_005aed70(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uStack00000030;
  undefined4 uStack00000038;
  undefined4 uStack00000040;
  undefined4 uStack00000048;
  undefined4 local_30;
  undefined4 local_20;
  
  uStack00000030 = param_1;
  uStack00000038 = param_2;
  uStack00000040 = param_3;
  uStack00000048 = param_4;
  iVar1 = FUN_00550e68(param_1);
  if (iVar1 == 0) {
    local_20 = 0xffffffff;
  }
  else {
    iVar1 = FUN_005ad440(iVar1,uStack00000038);
    if (iVar1 == 0) {
      local_20 = 0xffffffff;
    }
    else {
      iVar2 = FUN_00550e68(uStack00000040);
      if (iVar2 == 0) {
        local_20 = 0xffffffff;
      }
      else {
        local_30 = FUN_005ad440(iVar2,uStack00000048);
        if (local_30 == 0) {
          local_30 = FUN_005ad168();
          *(undefined4 *)(local_30 + 0xc) = uStack00000048;
          FUN_005ad314(iVar2,local_30);
        }
        iVar2 = FUN_00550e20(*(undefined4 *)(iVar1 + 0x14));
        if (iVar2 == 0) {
          FUN_005ade10(uStack00000040,uStack00000048,*(undefined4 *)(iVar1 + 0x10),
                       *(undefined4 *)(iVar1 + 0x14));
        }
        iVar2 = FUN_005ad0d8(*(undefined4 *)(iVar1 + 0x18));
        if (iVar2 == 0) {
          FUN_005ae7a8(uStack00000040,uStack00000048,*(undefined4 *)(iVar1 + 0x10),
                       *(undefined4 *)(iVar1 + 0x18));
        }
        uVar3 = FUN_005b044c(local_30);
        *(undefined4 *)(local_30 + 0x20) = uVar3;
        local_20 = 0;
      }
    }
  }
  return local_20;
}


// 0x05aefec (0xb8 bytes)
undefined4 FUN_005aefec(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 uVar1;
  undefined4 uStack00000030;
  undefined4 uStack00000038;
  undefined4 uStack00000040;
  undefined4 uStack00000048;
  GPiece<64> auStack_90;
  GPiece<72> auStack_50;
  
  uStack00000030 = param_1;
  uStack00000038 = param_2;
  uStack00000040 = param_3;
  uStack00000048 = param_4;
  FUN_005b24b8(auStack_90,auStack_50);
  uVar1 = FUN_005af3a8(uStack00000030,uStack00000038,uStack00000040,auStack_90,uStack00000048);
  return uVar1;
}


// 0x05af0a4 (0x304 bytes)
uint FUN_005af0a4(undefined4 param_1,undefined4 param_2,undefined4 param_3,int param_4)

{
  int iVar1;
  int iVar2;
  undefined4 uStack00000030;
  undefined4 uStack00000038;
  undefined4 uStack00000040;
  int iStack00000048;
  uint local_b0;
  uint local_ac;
  int aiStack_a0 [16];
  int aiStack_60 [16];
  int local_20;
  uint local_1c;
  
  uStack00000030 = param_1;
  uStack00000038 = param_2;
  uStack00000040 = param_3;
  iStack00000048 = param_4;
  iVar1 = FUN_00550e68(param_1);
  if (iVar1 == 0) {
    local_1c = 0xffffffff;
  }
  else {
    iVar1 = FUN_005ad440(iVar1,uStack00000038);
    if (iVar1 == 0) {
      local_1c = 0xffffffff;
    }
    else {
      if ((iStack00000048 != 0) && (iVar2 = FUN_00550e20(uStack00000040), iVar2 == 0)) {
        iVar2 = FUN_005ad0d8(*(undefined4 *)(iVar1 + 0x18));
        if (iVar2 != 0) {
          local_20 = *(int *)(iVar1 + 0x10);
          if (((local_20 == 0x400) || (local_20 == 0x600)) || (local_20 == 1)) {
            local_b0 = (*(code *)**(undefined4 **)(iVar1 + 0x1c))(iStack00000048,0x40);
          }
          else {
            local_b0 = 0;
          }
          FUN_005b65d4(uStack00000040,iStack00000048,iStack00000048,0x40);
          return local_b0 & 0x1fffffff | 0x80000000;
        }
        FUN_005ad898(*(undefined4 *)(iVar1 + 0x18),4,aiStack_a0,0x40);
        FUN_005b65d4(uStack00000040,iStack00000048,aiStack_60,0x40);
        local_ac = 0;
        while( true ) {
          if (0xf < local_ac) {
            return 0;
          }
          if (aiStack_a0[local_ac] != aiStack_60[local_ac]) break;
          local_ac = local_ac + 1;
        }
        return 0xffffffff;
      }
      iVar1 = FUN_005ad0d8(*(undefined4 *)(iVar1 + 0x18));
      if (iVar1 == 0) {
        local_1c = 0xffffffff;
      }
      else {
        local_1c = 0;
      }
    }
  }
  return local_1c;
}


// 0x05af3a8 (0x318 bytes)
undefined4 FUN_005af3a8(undefined4 param_1,undefined4 param_2,uint param_3,int param_4,int param_5)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  undefined4 uStack00000030;
  undefined4 uStack00000038;
  uint uStack00000040;
  int iStack00000048;
  int iStack00000050;
  
  if ((((param_4 == 0) || (param_5 == 0)) ||
      (uStack00000030 = param_1, uStack00000038 = param_2, uStack00000040 = param_3,
      iStack00000048 = param_4, iStack00000050 = param_5, iVar1 = FUN_00550e20(param_4), iVar1 != 0)
      ) || (iVar1 = FUN_00550e20(iStack00000048 + 0x40), iVar1 != 0)) {
    return 0xffffffff;
  }
  iVar1 = FUN_00550e68(uStack00000030);
  if (iVar1 == 0) {
    return 0xffffffff;
  }
  iVar1 = FUN_005ad440(iVar1,uStack00000038);
  if (iVar1 == 0) {
    return 0xffffffff;
  }
  iVar2 = FUN_005ad0d8(*(undefined4 *)(iVar1 + 0x18));
  if (iVar2 == 0) {
    FUN_005ad898(*(undefined4 *)(iVar1 + 0x18),4,iStack00000050,0x40);
    uStack00000040 = 0;
  }
  else if ((uStack00000040 & 0xe0000000) != 0x80000000) {
    return 0xffffffff;
  }
  FUN_005b6898(iStack00000048,iStack00000048 + 0x40,iStack00000050,iStack00000050,0x40);
  if (uStack00000040 == 0) {
    return 0;
  }
  uVar3 = (*(code *)**(undefined4 **)(iVar1 + 0x1c))(iStack00000050,0x40);
  if (uStack00000040 != (uVar3 & 0x1fffffff | uStack00000040 & 0xe0000000)) {
    FUN_005b6c40(iStack00000050,iStack00000048);
    uVar3 = (*(code *)**(undefined4 **)(iVar1 + 0x1c))(iStack00000050,0x40);
    if (uStack00000040 != (uVar3 & 0x1fffffff | uStack00000040 & 0xe0000000)) {
      return 0xfffffffe;
    }
  }
  return 0;
}


// 0x05af6c0 (0xb4 bytes)
void FUN_005af6c0(undefined4 param_1,undefined4 param_2)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 uStack00000030;
  undefined4 uStack00000038;
  
  uStack00000030 = param_1;
  uStack00000038 = param_2;
  uVar1 = FUN_00550e68(param_1);
  iVar2 = FUN_005ad440(uVar1,uStack00000038);
  if (iVar2 != 0) {
    FUN_005ad4e0(uVar1,iVar2);
    FUN_005ad258(iVar2);
  }
  return;
}


// 0x05af774 (0x228 bytes)
/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_005af774(undefined4 param_1)

{
  int iVar1;
  int *piVar2;
  undefined4 uStack00000030;
  GPiece<16> local_18;
  
  uStack00000030 = param_1;
  piVar2 = (int *)FUN_00550e68(param_1);
  if (piVar2 != (int *)0x0) {
    while (iVar1 = piVar2[3], iVar1 != 0) {
      FUN_005ad4e0(piVar2,iVar1);
      FUN_005ad258(iVar1);
    }
    if (piVar2[9] != 0) {
      FUN_005519f0(piVar2 + 9);
    }
    if (piVar2[8] != 0) {
      FUN_005519f0(local_18);
      piVar2[8] = 0;
    }
    if (piVar2[10] != 0) {
      FUN_005519f0(piVar2 + 10);
    }
    if ((int *)**(int **)PTR_PTR_0071c080 == piVar2) {
      **(int **)PTR_PTR_0071c080 = piVar2[1];
    }
    *(int *)piVar2[1] = *piVar2;
    *(int *)(*piVar2 + 4) = piVar2[1];
    if ((int *)**(undefined4 **)PTR_PTR_0071c080 == piVar2) {
      **(undefined4 **)PTR_PTR_0071c080 = 0;
    }
    FUN_005519f0(local_18);
  }
  return;
}


// 0x05af99c (0xdc bytes)
void FUN_005af99c(uint param_1)

{
  uint uStack00000030;
  undefined4 local_20;
  
  local_20 = **(int **)PTR_PTR_0071c080;
  uStack00000030 = param_1;
  while (local_20 != 0) {
    if (((uStack00000030 ^ *(uint *)(local_20 + 0x10)) & 0xc0000000) == 0) {
      FUN_005af774(*(uint *)(local_20 + 0x10));
      local_20 = **(int **)PTR_PTR_0071c080;
    }
    else {
      local_20 = *(int *)(local_20 + 4);
      if (**(int **)PTR_PTR_0071c080 == local_20) {
        local_20 = 0;
      }
    }
  }
  return;
}


// 0x05afa78 (0x5c bytes)
void FUN_005afa78(void)

{
  if (*PTR_DAT_0071c130 == '\0') {
    *PTR_DAT_0071c130 = 1;
    FUN_00552944(0x35d2325);
  }
  return;
}


// 0x05afad4 (0xa0 bytes)
void FUN_005afad4(int param_1)

{
  undefined1 uVar1;
  int iStack00000030;
  undefined1 local_2c;
  
  iStack00000030 = param_1;
  FUN_005afa78();
  for (local_2c = 0; local_2c < 0x40; local_2c = local_2c + 1) {
    uVar1 = FUN_00552968();
    *(undefined1 *)((uint)local_2c + param_1) = uVar1;
  }
  return;
}


// 0x05afb74 (0x238 bytes)
void FUN_005afb74(int param_1,undefined1 *param_2,undefined1 *param_3,undefined4 param_4,
                 undefined4 param_5)

{
  undefined1 uVar1;
  undefined1 uVar2;
  undefined1 uVar3;
  int iStack00000030;
  undefined1 *puStack00000038;
  undefined1 *puStack00000040;
  undefined4 uStack00000048;
  undefined4 uStack00000050;
  
  uVar1 = param_2[1];
  uVar2 = param_2[2];
  uVar3 = param_2[3];
  *(undefined1 *)(param_1 + 0x10) = *param_2;
  *(undefined1 *)(param_1 + 0x11) = uVar1;
  *(undefined1 *)(param_1 + 0x12) = uVar2;
  *(undefined1 *)(param_1 + 0x13) = uVar3;
  uVar1 = param_2[5];
  uVar2 = param_2[6];
  uVar3 = param_2[7];
  *(undefined1 *)(param_1 + 0x14) = param_2[4];
  *(undefined1 *)(param_1 + 0x15) = uVar1;
  *(undefined1 *)(param_1 + 0x16) = uVar2;
  *(undefined1 *)(param_1 + 0x17) = uVar3;
  uVar1 = param_2[9];
  uVar2 = param_2[10];
  uVar3 = param_2[0xb];
  *(undefined1 *)(param_1 + 0x18) = param_2[8];
  *(undefined1 *)(param_1 + 0x19) = uVar1;
  *(undefined1 *)(param_1 + 0x1a) = uVar2;
  *(undefined1 *)(param_1 + 0x1b) = uVar3;
  uVar1 = param_2[0xd];
  uVar2 = param_2[0xe];
  uVar3 = param_2[0xf];
  *(undefined1 *)(param_1 + 0x1c) = param_2[0xc];
  *(undefined1 *)(param_1 + 0x1d) = uVar1;
  *(undefined1 *)(param_1 + 0x1e) = uVar2;
  *(undefined1 *)(param_1 + 0x1f) = uVar3;
  uVar1 = param_3[1];
  uVar2 = param_3[2];
  uVar3 = param_3[3];
  *(undefined1 *)(param_1 + 0x20) = *param_3;
  *(undefined1 *)(param_1 + 0x21) = uVar1;
  *(undefined1 *)(param_1 + 0x22) = uVar2;
  *(undefined1 *)(param_1 + 0x23) = uVar3;
  uVar1 = param_3[5];
  uVar2 = param_3[6];
  uVar3 = param_3[7];
  *(undefined1 *)(param_1 + 0x24) = param_3[4];
  *(undefined1 *)(param_1 + 0x25) = uVar1;
  *(undefined1 *)(param_1 + 0x26) = uVar2;
  *(undefined1 *)(param_1 + 0x27) = uVar3;
  uVar1 = param_3[9];
  uVar2 = param_3[10];
  uVar3 = param_3[0xb];
  *(undefined1 *)(param_1 + 0x28) = param_3[8];
  *(undefined1 *)(param_1 + 0x29) = uVar1;
  *(undefined1 *)(param_1 + 0x2a) = uVar2;
  *(undefined1 *)(param_1 + 0x2b) = uVar3;
  uVar1 = param_3[0xd];
  uVar2 = param_3[0xe];
  uVar3 = param_3[0xf];
  *(undefined1 *)(param_1 + 0x2c) = param_3[0xc];
  *(undefined1 *)(param_1 + 0x2d) = uVar1;
  *(undefined1 *)(param_1 + 0x2e) = uVar2;
  *(undefined1 *)(param_1 + 0x2f) = uVar3;
  iStack00000030 = param_1;
  puStack00000038 = param_2;
  puStack00000040 = param_3;
  uStack00000048 = param_4;
  uStack00000050 = param_5;
  FUN_005ad76c(param_4,param_5,param_1 + 0x30);
  FUN_005ad76c(iStack00000030 + 0x10,0x30,iStack00000030);
  FUN_005ad76c(iStack00000030,0x40,iStack00000030 + 0x10);
  FUN_005ad76c(iStack00000030,0x40,iStack00000030 + 0x20);
  FUN_005ad76c(iStack00000030,0x40,iStack00000030 + 0x30);
  return;
}


// 0x05afdac (0x118 bytes)
uint FUN_005afdac(int param_1,undefined4 param_2,int param_3)

{
  uint uVar1;
  int iStack00000030;
  undefined4 uStack00000038;
  int iStack00000040;
  uint local_120;
  GPiece<276> auStack_11c;
  
  local_120 = 0x60000000;
  if (param_3 != 0) {
    iStack00000030 = param_1;
    uStack00000038 = param_2;
    iStack00000040 = param_3;
    uVar1 = (*(code *)**(undefined4 **)(param_1 + 0x1c))(param_2,param_3);
    local_120 = uVar1 & 0x1fffffff | 0x60000000;
    FUN_005b5fd0(auStack_11c,*(undefined4 *)(iStack00000030 + 0x18),local_120);
    FUN_005b60b0(auStack_11c,uStack00000038,iStack00000040);
  }
  return local_120;
}


// 0x05afec4 (0x118 bytes)
uint FUN_005afec4(int param_1,undefined4 param_2,int param_3)

{
  uint uVar1;
  int iStack00000030;
  undefined4 uStack00000038;
  int iStack00000040;
  uint local_30;
  GPiece<36> auStack_2c;
  
  local_30 = 0x60000000;
  if (param_3 != 0) {
    iStack00000030 = param_1;
    uStack00000038 = param_2;
    iStack00000040 = param_3;
    uVar1 = (*(code *)**(undefined4 **)(param_1 + 0x1c))(param_2,param_3);
    local_30 = uVar1 & 0x1fffffff | 0x60000000;
    FUN_005bd46c(*(undefined4 *)(iStack00000030 + 0x18),local_30,auStack_2c);
    FUN_005bd668(auStack_2c,uStack00000038,iStack00000040);
  }
  return local_30;
}


// 0x05affdc (0x120 bytes)
uint FUN_005affdc(int param_1,undefined4 param_2,int param_3)

{
  uint uVar1;
  int iStack00000030;
  undefined4 uStack00000038;
  int iStack00000040;
  uint local_120;
  GPiece<276> auStack_11c;
  
  local_120 = 0x60000000;
  if (param_3 != 0) {
    iStack00000030 = param_1;
    uStack00000038 = param_2;
    iStack00000040 = param_3;
    uVar1 = (*(code *)**(undefined4 **)(param_1 + 0x1c))(param_2,param_3);
    local_120 = uVar1 & 0x1fffffff | 0x60000000;
    FUN_005b5fd0(auStack_11c,*(undefined4 *)(*(int *)(iStack00000030 + 8) + 0x28),local_120);
    FUN_005b60b0(auStack_11c,uStack00000038,iStack00000040);
  }
  return local_120;
}


// 0x05b00fc (0x120 bytes)
uint FUN_005b00fc(int param_1,undefined4 param_2,int param_3)

{
  uint uVar1;
  int iStack00000030;
  undefined4 uStack00000038;
  int iStack00000040;
  uint local_30;
  GPiece<36> auStack_2c;
  
  local_30 = 0x60000000;
  if (param_3 != 0) {
    iStack00000030 = param_1;
    uStack00000038 = param_2;
    iStack00000040 = param_3;
    uVar1 = (*(code *)**(undefined4 **)(param_1 + 0x1c))(param_2,param_3);
    local_30 = uVar1 & 0x1fffffff | 0x60000000;
    FUN_005bd46c(*(undefined4 *)(*(int *)(iStack00000030 + 8) + 0x28),local_30,auStack_2c);
    FUN_005bd668(auStack_2c,uStack00000038,iStack00000040);
  }
  return local_30;
}


// 0x05b021c (0xf8 bytes)
uint FUN_005b021c(int param_1,undefined4 param_2,int param_3)

{
  uint uVar1;
  int iStack00000030;
  undefined4 uStack00000038;
  int iStack00000040;
  undefined4 local_20;
  
  local_20 = 0xe0000000;
  if (param_3 != 0) {
    iStack00000030 = param_1;
    uStack00000038 = param_2;
    iStack00000040 = param_3;
    uVar1 = (*(code *)**(undefined4 **)(param_1 + 0x1c))(param_2,param_3);
    local_20 = uVar1 & 0x1fffffff | 0xe0000000;
    FUN_005b65d4(*(undefined4 *)(iStack00000030 + 0x14),uStack00000038,uStack00000038,iStack00000040
                );
  }
  return local_20;
}


// 0x05b0314 (0x138 bytes)
uint FUN_005b0314(int param_1,undefined4 param_2,int param_3)

{
  int iVar1;
  uint uVar2;
  int iStack00000030;
  undefined4 uStack00000038;
  int iStack00000040;
  uint local_a0;
  GPiece<64> auStack_9c;
  GPiece<84> auStack_5c;
  
  local_a0 = 0;
  iStack00000030 = param_1;
  uStack00000038 = param_2;
  iStack00000040 = param_3;
  FUN_005b24b8(auStack_9c,auStack_5c);
  iVar1 = FUN_00550e20(auStack_9c);
  if ((iVar1 == 0) && (local_a0 = 0x80000000, iStack00000040 != 0)) {
    uVar2 = (*(code *)**(undefined4 **)(iStack00000030 + 0x1c))(uStack00000038,iStack00000040);
    local_a0 = uVar2 & 0x1fffffff | 0x80000000;
    FUN_005b65d4(auStack_9c,uStack00000038,uStack00000038,iStack00000040);
  }
  return local_a0;
}


// 0x05b044c (0x2f4 bytes)
undefined * FUN_005b044c(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iStack00000030;
  GPiece<64> auStack_a0;
  GPiece<64> auStack_60;
  undefined *local_20;
  
  if (param_1 == 0) {
    local_20 = (undefined *)0x0;
  }
  else {
    iVar4 = *(int *)(param_1 + 8);
    iVar3 = *(int *)(param_1 + 0xc);
    iVar2 = *(int *)(param_1 + 0x10);
    iStack00000030 = param_1;
    iVar1 = FUN_005ad0d8(*(undefined4 *)(param_1 + 0x18));
    if (iVar1 == 0) {
      if (iVar2 == 1) {
        local_20 = PTR_PTR_0071c134;
      }
      else {
        local_20 = PTR_PTR_0071c138;
      }
    }
    else {
      iVar1 = FUN_005ad0d8(*(undefined4 *)(iVar4 + 0x28));
      if ((iVar1 == 0) &&
         (((iVar3 == 0xffff || ((*(uint *)(iVar4 + 0x10) & 0xc0000000) == 0)) ||
          (iVar1 = FUN_00550e20(*(undefined4 *)(iStack00000030 + 0x14)), iVar1 != 0)))) {
        if (iVar2 == 1) {
          local_20 = PTR_PTR_0071c13c;
        }
        else {
          local_20 = PTR_PTR_0071c140;
        }
      }
      else {
        iVar2 = FUN_00550e20(*(undefined4 *)(iStack00000030 + 0x14));
        if ((iVar2 == 0) &&
           ((*(int *)(iVar4 + 0x14) == 0xffff ||
            (iVar2 = FUN_005ad0d8(*(undefined4 *)(iStack00000030 + 0x18)), iVar2 != 0)))) {
          local_20 = PTR_PTR_0071c144;
        }
        else {
          if (((iVar3 != 0xffff) &&
              ((iVar3 = FUN_00550e20(*(undefined4 *)(iVar4 + 0x20)), iVar3 == 0 &&
               (*(int *)(iVar4 + 0x14) != 0xffff)))) &&
             (((*(uint *)(iVar4 + 0x10) & 0xc0000000) == 0x40000000 ||
              ((*(uint *)(iVar4 + 0x10) & 0xc0000000) == 0)))) {
            FUN_005b24b8(auStack_a0,auStack_60);
            iVar4 = FUN_00550e20(auStack_a0);
            if (iVar4 == 0) {
              return PTR_PTR_0071c124;
            }
          }
          local_20 = (undefined *)0x0;
        }
      }
    }
  }
  return local_20;
}


// 0x05b0740 (0x8a8 bytes)
uint FUN_005b0740(undefined4 param_1,int param_2,int param_3,int param_4)

{
  int iVar1;
  int iVar2;
  undefined4 uStack00000030;
  int iStack00000038;
  int iStack00000040;
  int iStack00000048;
  int local_1c0;
  uint local_1bc;
  uint local_1b8;
  int local_1b4;
  GPiece<268> auStack_1ac;
  GPiece<64> auStack_a0;
  GPiece<64> auStack_60;
  int local_20;
  uint local_1c;
  
  uStack00000030 = param_1;
  iStack00000038 = param_2;
  iStack00000040 = param_3;
  iStack00000048 = param_4;
  iVar1 = FUN_00550e68(param_1);
  local_1b8 = 0;
  local_1bc = 0;
  local_1c0 = 1;
  if (iVar1 == 0) {
    local_1c = 0;
  }
  else {
    local_1b4 = FUN_005ad440(iVar1,iStack00000038);
    if ((iStack00000048 == 0) || (iStack00000040 == 0)) {
      iStack00000048 = 0;
      local_1bc = 0;
    }
    else {
      if (local_1b4 == 0) {
        local_20 = *(int *)(iVar1 + 0x1c);
      }
      else {
        local_20 = *(int *)(local_1b4 + 0x10);
      }
      if ((local_20 == 0x400) || (local_20 == 0x600)) {
        local_1bc = FUN_005bd288(iStack00000040,iStack00000048);
        local_1c0 = 0x400;
      }
      else if (local_20 == 1) {
        local_1bc = FUN_005ad66c(iStack00000040,iStack00000048);
        local_1c0 = 1;
      }
      local_1bc = local_1bc & 0x1fffffff;
    }
    if ((iStack00000038 == 0xfffe) &&
       (iVar2 = FUN_005ad0d8(*(undefined4 *)(iVar1 + 0x28)), iVar2 == 0)) {
      local_1c = local_1bc | 0x20000000;
      if (iStack00000048 != 0) {
        if (local_1c0 == 1) {
          FUN_005b5fd0(auStack_1ac,*(undefined4 *)(iVar1 + 0x28),local_1c);
          FUN_005b60b0(auStack_1ac,iStack00000040,iStack00000048);
        }
        else {
          FUN_005bd46c(*(undefined4 *)(iVar1 + 0x28),local_1c,auStack_1ac);
          FUN_005bd668(auStack_1ac,iStack00000040,iStack00000048);
        }
      }
    }
    else if (iStack00000038 == 0xfffd) {
      FUN_005b24b8(auStack_a0,auStack_60);
      iVar1 = FUN_00550e20(auStack_a0);
      if ((iVar1 == 0) && (local_1b8 = local_1bc | 0x80000000, iStack00000048 != 0)) {
        FUN_005b65d4(auStack_a0,iStack00000040,iStack00000040,iStack00000048);
      }
      local_1c = local_1b8;
    }
    else {
      if ((iStack00000038 != 0xffff) || (*(int *)(iVar1 + 0x14) != 0xffff)) {
        local_1b4 = FUN_005ad440(iVar1,iStack00000038);
      }
      if ((local_1b4 != 0) || (iStack00000038 == 0xffff)) {
        if ((local_1b4 == 0) ||
           (iVar2 = FUN_005ad0d8(*(undefined4 *)(local_1b4 + 0x18)), iVar2 != 0)) {
          iVar2 = FUN_005ad0d8(*(undefined4 *)(iVar1 + 0x28));
          if ((iVar2 == 0) &&
             ((((iStack00000038 == 0xffff || ((*(uint *)(iVar1 + 0x10) & 0xc0000000) == 0)) ||
               (local_1b4 == 0)) ||
              (iVar2 = FUN_00550e20(*(undefined4 *)(local_1b4 + 0x14)), iVar2 != 0)))) {
            local_1b8 = local_1bc | 0x20000000;
            if (iStack00000048 != 0) {
              if (local_1c0 == 1) {
                FUN_005b5fd0(auStack_1ac,*(undefined4 *)(iVar1 + 0x28),local_1b8);
                FUN_005b60b0(auStack_1ac,iStack00000040,iStack00000048);
              }
              else {
                FUN_005bd46c(*(undefined4 *)(iVar1 + 0x28),local_1b8,auStack_1ac);
                FUN_005bd668(auStack_1ac,iStack00000040,iStack00000048);
              }
            }
          }
          else if (((local_1b4 == 0) ||
                   (iVar2 = FUN_00550e20(*(undefined4 *)(local_1b4 + 0x14)), iVar2 != 0)) ||
                  ((*(int *)(iVar1 + 0x14) != 0xffff &&
                   (iVar2 = FUN_005ad0d8(*(undefined4 *)(local_1b4 + 0x18)), iVar2 == 0)))) {
            if ((((iStack00000038 != 0xffff) &&
                 (iVar2 = FUN_00550e20(*(undefined4 *)(iVar1 + 0x20)), iVar2 == 0)) &&
                (*(int *)(iVar1 + 0x14) != 0xffff)) &&
               (((*(uint *)(iVar1 + 0x10) & 0xc0000000) == 0x40000000 ||
                ((*(uint *)(iVar1 + 0x10) & 0xc0000000) == 0)))) {
              FUN_005b24b8(auStack_a0,auStack_60);
              iVar1 = FUN_00550e20(auStack_a0);
              if ((iVar1 == 0) && (local_1b8 = local_1bc | 0x80000000, iStack00000048 != 0)) {
                FUN_005b65d4(auStack_a0,iStack00000040,iStack00000040,iStack00000048);
              }
            }
          }
          else {
            local_1b8 = local_1bc | 0xe0000000;
            if (iStack00000048 != 0) {
              FUN_005b65d4(*(undefined4 *)(local_1b4 + 0x14),iStack00000040,iStack00000040,
                           iStack00000048);
            }
          }
        }
        else {
          local_1b8 = local_1bc | 0x60000000;
          if (iStack00000048 != 0) {
            if (local_1c0 == 1) {
              FUN_005b5fd0(auStack_1ac,*(undefined4 *)(local_1b4 + 0x18),local_1b8);
              FUN_005b60b0(auStack_1ac,iStack00000040,iStack00000048);
            }
            else {
              FUN_005bd46c(*(undefined4 *)(local_1b4 + 0x18),local_1b8,auStack_1ac);
              FUN_005bd668(auStack_1ac,iStack00000040,iStack00000048);
            }
          }
        }
      }
      local_1c = local_1b8;
    }
  }
  return local_1c;
}


// 0x05b0fe8 (0x630 bytes)
uint FUN_005b0fe8(int param_1,int param_2,int param_3,int param_4)

{
  int iVar1;
  int iStack00000030;
  int iStack00000038;
  int iStack00000040;
  int iStack00000048;
  int local_1c0;
  uint local_1bc;
  uint local_1b8;
  GPiece<268> auStack_1b0;
  GPiece<64> auStack_a4;
  GPiece<68> auStack_64;
  int local_20;
  uint local_1c;
  
  local_1b8 = 0;
  local_1bc = 0;
  local_1c0 = 1;
  if (param_1 == 0) {
    local_1c = 0;
  }
  else {
    iStack00000030 = param_1;
    iStack00000038 = param_2;
    iStack00000040 = param_3;
    if ((param_4 == 0) || (param_3 == 0)) {
      iStack00000048 = 0;
      local_1bc = 0;
    }
    else {
      if (param_2 == 0) {
        local_20 = *(int *)(param_1 + 0x1c);
      }
      else {
        local_20 = *(int *)(param_2 + 0x10);
      }
      iStack00000048 = param_4;
      if ((local_20 == 0x400) || (local_20 == 0x600)) {
        local_1bc = FUN_005bd288(param_3,param_4);
        local_1c0 = 0x400;
      }
      else if (local_20 == 1) {
        local_1bc = FUN_005ad66c(param_3,param_4);
        local_1c0 = 1;
      }
      local_1bc = local_1bc & 0x1fffffff;
    }
    if ((iStack00000038 == 0) ||
       (iVar1 = FUN_005ad0d8(*(undefined4 *)(iStack00000038 + 0x18)), iVar1 != 0)) {
      iVar1 = FUN_005ad0d8(*(undefined4 *)(iStack00000030 + 0x28));
      if ((iVar1 == 0) &&
         (((((*(uint *)(iStack00000030 + 0x10) & 0xc0000000) == 0 || (iStack00000038 == 0)) ||
           (*(int *)(iStack00000038 + 0xc) == 0xffff)) ||
          (iVar1 = FUN_00550e20(*(undefined4 *)(iStack00000038 + 0x14)), iVar1 != 0)))) {
        local_1b8 = local_1bc | 0x20000000;
        if (iStack00000048 != 0) {
          if (local_1c0 == 1) {
            FUN_005b5fd0(auStack_1b0,*(undefined4 *)(iStack00000030 + 0x28),local_1b8);
            FUN_005b60b0(auStack_1b0,iStack00000040,iStack00000048);
          }
          else {
            FUN_005bd46c(*(undefined4 *)(iStack00000030 + 0x28),local_1b8,auStack_1b0);
            FUN_005bd668(auStack_1b0,iStack00000040,iStack00000048);
          }
        }
      }
      else if (((iStack00000038 == 0) ||
               (iVar1 = FUN_00550e20(*(undefined4 *)(iStack00000038 + 0x14)), iVar1 != 0)) ||
              ((*(int *)(iStack00000030 + 0x14) != 0xffff &&
               (iVar1 = FUN_005ad0d8(*(undefined4 *)(iStack00000038 + 0x18)), iVar1 == 0)))) {
        if ((((iStack00000038 != 0) && (*(int *)(iStack00000038 + 0xc) != 0xffff)) &&
            ((iVar1 = FUN_00550e20(*(undefined4 *)(iStack00000030 + 0x20)), iVar1 == 0 &&
             (*(int *)(iStack00000030 + 0x14) != 0xffff)))) &&
           (((*(uint *)(iStack00000030 + 0x10) & 0xc0000000) == 0x40000000 ||
            ((*(uint *)(iStack00000030 + 0x10) & 0xc0000000) == 0)))) {
          FUN_005b24b8(auStack_a4,auStack_64);
          iVar1 = FUN_00550e20(auStack_a4);
          if ((iVar1 == 0) && (local_1b8 = local_1bc | 0x80000000, iStack00000048 != 0)) {
            FUN_005b65d4(auStack_a4,iStack00000040,iStack00000040,iStack00000048);
          }
        }
      }
      else {
        local_1b8 = local_1bc | 0xe0000000;
        if (iStack00000048 != 0) {
          FUN_005b65d4(*(undefined4 *)(iStack00000038 + 0x14),iStack00000040,iStack00000040,
                       iStack00000048);
        }
      }
    }
    else {
      local_1b8 = local_1bc | 0x60000000;
      if (iStack00000048 != 0) {
        if (local_1c0 == 1) {
          FUN_005b5fd0(auStack_1b0,*(undefined4 *)(iStack00000038 + 0x18),local_1b8);
          FUN_005b60b0(auStack_1b0,iStack00000040,iStack00000048);
        }
        else {
          FUN_005bd46c(*(undefined4 *)(iStack00000038 + 0x18),local_1b8,auStack_1b0);
          FUN_005bd668(auStack_1b0,iStack00000040,iStack00000048);
        }
      }
    }
    local_1c = local_1b8;
  }
  return local_1c;
}


// 0x05b1618 (0x26c bytes)
uint FUN_005b1618(int param_1,int param_2,int param_3,int param_4)

{
  int iVar1;
  int iStack00000030;
  int iStack00000038;
  int iStack00000040;
  int iStack00000048;
  uint local_140;
  uint local_13c;
  GPiece<276> auStack_134;
  uint local_20;
  
  local_13c = 0;
  local_140 = 0;
  if (param_1 == 0) {
    local_20 = 0;
  }
  else {
    iStack00000030 = param_1;
    iStack00000038 = param_2;
    iStack00000040 = param_3;
    if ((param_4 == 0) || (param_3 == 0)) {
      iStack00000048 = 0;
      local_140 = 0;
    }
    else {
      iStack00000048 = param_4;
      if ((param_2 == 0x400) || (param_2 == 0x600)) {
        local_140 = FUN_005bd288(param_3,param_4);
        iStack00000038 = 0x400;
      }
      else if (param_2 == 1) {
        local_140 = FUN_005ad66c(param_3,param_4);
        iStack00000038 = 1;
      }
      local_140 = local_140 & 0x1fffffff;
    }
    iVar1 = FUN_005ad0d8(*(undefined4 *)(iStack00000030 + 0x28));
    if ((iVar1 == 0) && (local_13c = local_140 | 0x20000000, iStack00000048 != 0)) {
      if (iStack00000038 == 1) {
        FUN_005b5fd0(auStack_134,*(undefined4 *)(iStack00000030 + 0x28),local_13c);
        FUN_005b60b0(auStack_134,iStack00000040,iStack00000048);
      }
      else {
        FUN_005bd46c(*(undefined4 *)(iStack00000030 + 0x28),local_13c,auStack_134);
        FUN_005bd668(auStack_134,iStack00000040,iStack00000048);
      }
    }
    local_20 = local_13c;
  }
  return local_20;
}


// 0x05b1884 (0x640 bytes)
int FUN_005b1884(undefined4 param_1,undefined4 param_2,uint param_3,undefined4 param_4,int param_5)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined4 uStack00000030;
  undefined4 uStack00000038;
  uint uStack00000040;
  undefined4 uStack00000048;
  int iStack00000050;
  uint local_1bc;
  int local_1b4;
  GPiece<268> auStack_1ac;
  GPiece<64> auStack_a0;
  GPiece<68> auStack_60;
  int local_1c;
  
  uStack00000030 = param_1;
  uStack00000038 = param_2;
  uStack00000040 = param_3;
  uStack00000048 = param_4;
  iStack00000050 = param_5;
  iVar2 = FUN_00550e68(param_1);
  local_1b4 = 0;
  if (iVar2 == 0) {
    return -1;
  }
  iVar3 = FUN_005ad440(iVar2,uStack00000038);
  if (iVar3 == 0) {
    local_1c = *(int *)(iVar2 + 0x1c);
  }
  else {
    local_1c = *(int *)(iVar3 + 0x10);
  }
  uVar1 = uStack00000040 & 0xe0000000;
  if (uVar1 == 0x60000000) {
    if ((iVar3 == 0) || (iVar4 = FUN_005ad0d8(*(undefined4 *)(iVar3 + 0x18)), iVar4 != 0)) {
      local_1b4 = -1;
    }
    else if (local_1c == 1) {
      FUN_005b5fd0(auStack_1ac,*(undefined4 *)(iVar3 + 0x18),uStack00000040);
      FUN_005b6140(auStack_1ac,uStack00000048,iStack00000050);
    }
    else {
      FUN_005bd46c(*(undefined4 *)(iVar3 + 0x18),uStack00000040,auStack_1ac);
      FUN_005bd7c0(auStack_1ac,uStack00000048,iStack00000050);
    }
    goto LAB_005b1ccc;
  }
  if (uVar1 < 0x60000001) {
    if (uVar1 == 0) {
      local_1b4 = 0;
      goto LAB_005b1ccc;
    }
    if (uVar1 == 0x20000000) {
      iVar3 = FUN_005ad0d8(*(undefined4 *)(iVar2 + 0x28));
      if (iVar3 == 0) {
        if (local_1c == 1) {
          FUN_005b5fd0(auStack_1ac,*(undefined4 *)(iVar2 + 0x28),uStack00000040);
          FUN_005b6140(auStack_1ac,uStack00000048,iStack00000050);
        }
        else {
          FUN_005bd46c(*(undefined4 *)(iVar2 + 0x28),uStack00000040,auStack_1ac);
          FUN_005bd7c0(auStack_1ac,uStack00000048,iStack00000050);
        }
      }
      else {
        local_1b4 = -1;
      }
      goto LAB_005b1ccc;
    }
  }
  else {
    if (uVar1 == 0x80000000) {
      FUN_005b24b8(auStack_a0,auStack_60);
      FUN_005b6898(auStack_a0,auStack_60,uStack00000048,uStack00000048,iStack00000050);
      goto LAB_005b1ccc;
    }
    if (uVar1 == 0xe0000000) {
      FUN_005b6898(*(undefined4 *)(iVar2 + 0x20),*(undefined4 *)(iVar2 + 0x24),uStack00000048,
                   uStack00000048,iStack00000050);
      goto LAB_005b1ccc;
    }
  }
  local_1b4 = -1;
LAB_005b1ccc:
  if ((iStack00000050 != 0) && (local_1b4 == 0)) {
    if (local_1c == 1) {
      local_1bc = FUN_005ad66c(uStack00000048,iStack00000050);
    }
    else {
      local_1bc = FUN_005bd288(uStack00000048,iStack00000050);
    }
    local_1bc = local_1bc & 0x1fffffff | uStack00000040 & 0xe0000000;
    if ((uStack00000040 != local_1bc) &&
       (((uStack00000040 & 0xe0000000) == 0xe0000000 ||
        ((uStack00000040 & 0xe0000000) == 0x80000000)))) {
      if ((uStack00000040 & 0xe0000000) == 0x80000000) {
        FUN_005b24b8(auStack_a0,auStack_60);
        FUN_005b6c40(uStack00000048,auStack_a0);
      }
      else {
        FUN_005b6c40(uStack00000048,*(undefined4 *)(iVar2 + 0x20));
      }
      if (local_1c == 1) {
        local_1bc = FUN_005ad66c(uStack00000048,iStack00000050);
      }
      else {
        local_1bc = FUN_005bd288(uStack00000048,iStack00000050);
      }
      local_1bc = local_1bc & 0x1fffffff | uStack00000040 & 0xe0000000;
    }
    if (uStack00000040 != local_1bc) {
      local_1b4 = -2;
    }
  }
  return local_1b4;
}


// 0x05b1ec4 (0x5f4 bytes)
int FUN_005b1ec4(int param_1,int param_2,uint param_3,undefined4 param_4,int param_5)

{
  uint uVar1;
  int iVar2;
  int iStack00000030;
  int iStack00000038;
  uint uStack00000040;
  undefined4 uStack00000048;
  int iStack00000050;
  uint local_1bc;
  int local_1b8;
  GPiece<268> auStack_1b0;
  GPiece<64> auStack_a4;
  GPiece<72> auStack_64;
  int local_1c;
  
  local_1b8 = 0;
  if (param_1 == 0) {
    return -1;
  }
  if (param_2 == 0) {
    local_1c = *(int *)(param_1 + 0x1c);
  }
  else {
    local_1c = *(int *)(param_2 + 0x10);
  }
  uVar1 = param_3 & 0xe0000000;
  iStack00000030 = param_1;
  iStack00000038 = param_2;
  uStack00000040 = param_3;
  uStack00000048 = param_4;
  iStack00000050 = param_5;
  if (uVar1 == 0x60000000) {
    if ((param_2 == 0) || (iVar2 = FUN_005ad0d8(*(undefined4 *)(param_2 + 0x18)), iVar2 != 0)) {
      local_1b8 = -1;
    }
    else if (local_1c == 1) {
      FUN_005b5fd0(auStack_1b0,*(undefined4 *)(iStack00000038 + 0x18),uStack00000040);
      FUN_005b6140(auStack_1b0,uStack00000048,iStack00000050);
    }
    else {
      FUN_005bd46c(*(undefined4 *)(iStack00000038 + 0x18),uStack00000040,auStack_1b0);
      FUN_005bd7c0(auStack_1b0,uStack00000048,iStack00000050);
    }
    goto LAB_005b22d4;
  }
  if (uVar1 < 0x60000001) {
    if (uVar1 == 0) {
      local_1b8 = 0;
      goto LAB_005b22d4;
    }
    if (uVar1 == 0x20000000) {
      iVar2 = FUN_005ad0d8(*(undefined4 *)(param_1 + 0x28));
      if (iVar2 == 0) {
        if (local_1c == 1) {
          FUN_005b5fd0(auStack_1b0,*(undefined4 *)(iStack00000030 + 0x28),uStack00000040);
          FUN_005b6140(auStack_1b0,uStack00000048,iStack00000050);
        }
        else {
          FUN_005bd46c(*(undefined4 *)(iStack00000030 + 0x28),uStack00000040,auStack_1b0);
          FUN_005bd7c0(auStack_1b0,uStack00000048,iStack00000050);
        }
      }
      else {
        local_1b8 = -1;
      }
      goto LAB_005b22d4;
    }
  }
  else {
    if (uVar1 == 0x80000000) {
      FUN_005b24b8(auStack_a4,auStack_64);
      FUN_005b6898(auStack_a4,auStack_64,uStack00000048,uStack00000048,iStack00000050);
      goto LAB_005b22d4;
    }
    if (uVar1 == 0xe0000000) {
      FUN_005b6898(*(undefined4 *)(param_1 + 0x20),*(undefined4 *)(param_1 + 0x24),param_4,param_4,
                   param_5);
      goto LAB_005b22d4;
    }
  }
  local_1b8 = -1;
LAB_005b22d4:
  if ((iStack00000050 != 0) && (local_1b8 == 0)) {
    if (local_1c == 1) {
      local_1bc = FUN_005ad66c(uStack00000048,iStack00000050);
    }
    else {
      local_1bc = FUN_005bd288(uStack00000048,iStack00000050);
    }
    local_1bc = local_1bc & 0x1fffffff | uStack00000040 & 0xe0000000;
    if ((uStack00000040 != local_1bc) && ((uStack00000040 & 0xe0000000) == 0xe0000000)) {
      if ((uStack00000040 & 0xe0000000) == 0x80000000) {
        FUN_005b24b8(auStack_a4,auStack_64);
        FUN_005b6c40(uStack00000048,auStack_a4);
      }
      else {
        FUN_005b6c40(uStack00000048,*(undefined4 *)(iStack00000030 + 0x20));
      }
      if (local_1c == 1) {
        local_1bc = FUN_005ad66c(uStack00000048,iStack00000050);
      }
      else {
        local_1bc = FUN_005bd288(uStack00000048,iStack00000050);
      }
      local_1bc = local_1bc & 0x1fffffff | uStack00000040 & 0xe0000000;
    }
    if (uStack00000040 != local_1bc) {
      local_1b8 = -2;
    }
  }
  return local_1b8;
}


// 0x05b24b8 (0x154 bytes)
void FUN_005b24b8(undefined4 *param_1,undefined4 *param_2)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  
  iVar1 = *(int *)PTR_PTR_0071c080;
  uVar2 = *(undefined4 *)(iVar1 + 0x20c);
  uVar3 = *(undefined4 *)(iVar1 + 0x210);
  uVar4 = *(undefined4 *)(iVar1 + 0x214);
  *param_1 = *(undefined4 *)(iVar1 + 0x208);
  param_1[1] = uVar2;
  param_1[2] = uVar3;
  param_1[3] = uVar4;
  uVar2 = *(undefined4 *)(iVar1 + 0x21c);
  uVar3 = *(undefined4 *)(iVar1 + 0x220);
  uVar4 = *(undefined4 *)(iVar1 + 0x224);
  param_1[4] = *(undefined4 *)(iVar1 + 0x218);
  param_1[5] = uVar2;
  param_1[6] = uVar3;
  param_1[7] = uVar4;
  uVar2 = *(undefined4 *)(iVar1 + 0x22c);
  uVar3 = *(undefined4 *)(iVar1 + 0x230);
  uVar4 = *(undefined4 *)(iVar1 + 0x234);
  param_1[8] = *(undefined4 *)(iVar1 + 0x228);
  param_1[9] = uVar2;
  param_1[10] = uVar3;
  param_1[0xb] = uVar4;
  uVar2 = *(undefined4 *)(iVar1 + 0x23c);
  uVar3 = *(undefined4 *)(iVar1 + 0x240);
  uVar4 = *(undefined4 *)(iVar1 + 0x244);
  param_1[0xc] = *(undefined4 *)(iVar1 + 0x238);
  param_1[0xd] = uVar2;
  param_1[0xe] = uVar3;
  param_1[0xf] = uVar4;
  iVar1 = *(int *)PTR_PTR_0071c080;
  uVar2 = *(undefined4 *)(iVar1 + 0x24c);
  uVar3 = *(undefined4 *)(iVar1 + 0x250);
  uVar4 = *(undefined4 *)(iVar1 + 0x254);
  *param_2 = *(undefined4 *)(iVar1 + 0x248);
  param_2[1] = uVar2;
  param_2[2] = uVar3;
  param_2[3] = uVar4;
  uVar2 = *(undefined4 *)(iVar1 + 0x25c);
  uVar3 = *(undefined4 *)(iVar1 + 0x260);
  uVar4 = *(undefined4 *)(iVar1 + 0x264);
  param_2[4] = *(undefined4 *)(iVar1 + 600);
  param_2[5] = uVar2;
  param_2[6] = uVar3;
  param_2[7] = uVar4;
  uVar2 = *(undefined4 *)(iVar1 + 0x26c);
  uVar3 = *(undefined4 *)(iVar1 + 0x270);
  uVar4 = *(undefined4 *)(iVar1 + 0x274);
  param_2[8] = *(undefined4 *)(iVar1 + 0x268);
  param_2[9] = uVar2;
  param_2[10] = uVar3;
  param_2[0xb] = uVar4;
  uVar2 = *(undefined4 *)(iVar1 + 0x27c);
  uVar3 = *(undefined4 *)(iVar1 + 0x280);
  uVar4 = *(undefined4 *)(iVar1 + 0x284);
  param_2[0xc] = *(undefined4 *)(iVar1 + 0x278);
  param_2[0xd] = uVar2;
  param_2[0xe] = uVar3;
  param_2[0xf] = uVar4;
  return;
}


// 0x05b260c (0x34 bytes)
undefined4 FUN_005b260c(void)

{
  return *(undefined4 *)(*(int *)PTR_PTR_0071c080 + 4);
}


// 0x05b2640 (0xc4 bytes)
void FUN_005b2640(void)

{
  *(undefined **)PTR_DAT_0071c148 = PTR_PTR_0071c14c;
  *(undefined **)(PTR_DAT_0071c148 + 4) = PTR_PTR_0071c150;
  *(undefined **)(PTR_DAT_0071c148 + 8) = PTR_PTR_0071c154;
  *(undefined **)(PTR_DAT_0071c148 + 0xc) = PTR_PTR_0071c158;
  *(undefined **)(PTR_DAT_0071c148 + 0x10) = PTR_PTR_0071c15c;
  *(undefined **)(PTR_DAT_0071c148 + 0x14) = PTR_PTR_0071c160;
  *(undefined **)(PTR_DAT_0071c148 + 0x18) = PTR_PTR_0071c164;
  *(undefined **)(PTR_DAT_0071c148 + 0x1c) = PTR_PTR_0071c168;
  *(undefined **)(PTR_DAT_0071c148 + 0x20) = PTR_PTR_0071c16c;
  *(undefined **)(PTR_DAT_0071c148 + 0x24) = PTR_PTR_0071c170;
  *(undefined **)(PTR_DAT_0071c148 + 0x28) = PTR_PTR_0071c174;
  *(undefined **)(PTR_DAT_0071c148 + 0x2c) = PTR_PTR_0071c178;
  *(undefined **)(PTR_DAT_0071c148 + 0x30) = PTR_PTR_0071c17c;
  *(undefined **)PTR_DAT_0071c180 = PTR_DAT_0071c148;
  return;
}


// 0x05b2704 (0x28 bytes)
// strings: 00660a88: 'rt_cert version: 3.05.201103091800'

undefined * FUN_005b2704(void)

{
  return PTR_s_rt_cert_version__3_05_2011030918_0071c184;
}


// 0x05b272c (0x23c bytes)
int * FUN_005b272c(int *param_1)

{
  int iVar1;
  undefined4 uVar2;
  int *piStack00000030;
  int *local_20;
  
  if (param_1 == (int *)0x0) {
    local_20 = (int *)0x0;
  }
  else {
    piStack00000030 = param_1;
    iVar1 = FUN_005b2b9c(param_1 + 0x1a);
    if (iVar1 != 0) {
      if ((*(uint *)(iVar1 + 0x14) & 0x80) != 0) {
        return (int *)0x0;
      }
      uVar2 = FUN_005b2968(iVar1);
      FUN_005b3128(uVar2);
    }
    if ((piStack00000030[5] & 0x80U) == 0) {
      if (*(int *)PTR_DAT_0071c18c == 0) {
        *(int **)PTR_DAT_0071c18c = piStack00000030;
        *piStack00000030 = *(int *)PTR_DAT_0071c18c;
        piStack00000030[1] = *(int *)PTR_DAT_0071c18c;
      }
      else {
        *piStack00000030 = **(int **)PTR_DAT_0071c18c;
        piStack00000030[1] = *(int *)PTR_DAT_0071c18c;
        *(int **)(*piStack00000030 + 4) = piStack00000030;
        *(int **)piStack00000030[1] = piStack00000030;
      }
    }
    else if (*(int *)PTR_DAT_0071c188 == 0) {
      *(int **)PTR_DAT_0071c188 = piStack00000030;
      *piStack00000030 = *(int *)PTR_DAT_0071c188;
      piStack00000030[1] = *(int *)PTR_DAT_0071c188;
    }
    else {
      *piStack00000030 = **(int **)PTR_DAT_0071c188;
      piStack00000030[1] = *(int *)PTR_DAT_0071c188;
      *(int **)(*piStack00000030 + 4) = piStack00000030;
      *(int **)piStack00000030[1] = piStack00000030;
    }
    local_20 = piStack00000030;
  }
  return local_20;
}


// 0x05b2968 (0x1c8 bytes)
int * FUN_005b2968(int *param_1)

{
  int *local_30;
  int *local_20;
  
  if (param_1 == (int *)0x0) {
    local_20 = (int *)0x0;
  }
  else {
    if (param_1 == *(int **)PTR_DAT_0071c18c) {
      local_30 = *(int **)PTR_DAT_0071c18c;
      *(int *)PTR_DAT_0071c18c = local_30[1];
      if (*(int **)PTR_DAT_0071c18c == local_30) {
        *(undefined4 *)PTR_DAT_0071c18c = 0;
      }
    }
    else {
      local_30 = param_1;
      if (param_1 == *(int **)PTR_DAT_0071c188) {
        local_30 = *(int **)PTR_DAT_0071c188;
        *(int *)PTR_DAT_0071c188 = local_30[1];
        if (*(int **)PTR_DAT_0071c188 == local_30) {
          *(undefined4 *)PTR_DAT_0071c188 = 0;
        }
      }
      else {
        do {
          if (((local_30 == (int *)0x0) || (local_30 == *(int **)PTR_DAT_0071c188)) ||
             (local_30 == *(int **)PTR_DAT_0071c18c)) goto LAB_005b2ab8;
          local_30 = (int *)local_30[1];
        } while (local_30 != param_1);
        local_30 = (int *)0x0;
      }
    }
LAB_005b2ab8:
    if (local_30 == (int *)0x0) {
      local_20 = (int *)0x0;
    }
    else {
      *(int *)param_1[1] = *param_1;
      *(int *)(*param_1 + 4) = param_1[1];
      local_20 = param_1;
    }
  }
  return local_20;
}


// 0x05b2b30 (0x6c bytes)
int FUN_005b2b30(void *param_1,void *param_2)

{
  int iVar1;
  void *pvStack00000030;
  void *pvStack00000038;
  
  pvStack00000030 = param_1;
  pvStack00000038 = param_2;
  iVar1 = memcmp(param_1,param_2,0x10);
  return iVar1;
}


// 0x05b2b9c (0x134 bytes)
int FUN_005b2b9c(undefined4 param_1)

{
  int iVar1;
  undefined4 uStack00000030;
  int local_30;
  
  local_30 = *(int *)PTR_DAT_0071c188;
  uStack00000030 = param_1;
  do {
    if (local_30 == 0) break;
    iVar1 = FUN_005b2b30(local_30 + 0x68,uStack00000030);
    if (iVar1 == 0) {
      return local_30;
    }
    local_30 = *(int *)(local_30 + 4);
  } while (local_30 != *(int *)PTR_DAT_0071c188);
  local_30 = *(int *)PTR_DAT_0071c18c;
  while( true ) {
    if (local_30 == 0) {
      return 0;
    }
    iVar1 = FUN_005b2b30(local_30 + 0x68,uStack00000030);
    if (iVar1 == 0) break;
    local_30 = *(int *)(local_30 + 4);
    if (local_30 == *(int *)PTR_DAT_0071c18c) {
      return 0;
    }
  }
  return local_30;
}


// 0x05b2cd0 (0x264 bytes)
int FUN_005b2cd0(uint *param_1,byte *param_2)

{
  int iVar1;
  byte *pbStack00000038;
  int local_20;
  
  *param_1 = (uint)*param_2;
  pbStack00000038 = param_2 + 1;
  param_1[1] = *param_1 & 0xc0;
  param_1[2] = *param_1 & 0x20;
  param_1[3] = *param_1 & 0x1f;
  iVar1 = 1;
  if (*param_1 != 0) {
    param_1[4] = (uint)*pbStack00000038;
    pbStack00000038 = param_2 + 2;
    local_20 = 2;
    iVar1 = 2;
    if ((param_1[4] & 0x80) != 0) {
      if (param_1[4] == 0x81) {
        param_1[4] = (uint)*pbStack00000038;
        pbStack00000038 = param_2 + 3;
        iVar1 = 3;
      }
      else {
        iVar1 = local_20;
        if (param_1[4] == 0x82) {
          param_1[4] = (uint)*pbStack00000038;
          param_1[4] = param_1[4] << 8;
          param_1[4] = param_1[4] + (uint)param_2[3];
          pbStack00000038 = param_2 + 4;
          local_20 = 4;
          iVar1 = local_20;
        }
      }
    }
  }
  local_20 = iVar1;
  if ((*param_1 == 3) && (*pbStack00000038 == 0)) {
    param_1[4] = param_1[4] - 1;
    local_20 = local_20 + 1;
  }
  return local_20;
}


// 0x05b2f34 (0x1f4 bytes)
int FUN_005b2f34(int param_1,undefined4 *param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 uVar1;
  int iVar2;
  int iStack00000030;
  undefined4 *puStack00000038;
  undefined4 uStack00000040;
  undefined4 uStack00000048;
  int local_20;
  
  if (param_2 == (undefined4 *)0x0) {
    local_20 = 0;
  }
  else {
    iStack00000030 = param_1;
    puStack00000038 = param_2;
    uStack00000040 = param_3;
    uStack00000048 = param_4;
    if ((param_1 != 0x80) && (*(int *)PTR_DAT_0071c190 == 0)) {
      uVar1 = FUN_005b2f34(0x80,param_2,param_3,param_4);
      FUN_005b3280(uVar1,PTR_DAT_0071c194,0x3be);
      FUN_005b5610(uVar1);
      iVar2 = FUN_005b272c(uVar1);
      if (iVar2 == 0) {
        FUN_005b3128(uVar1);
      }
      else {
        *(undefined4 *)PTR_DAT_0071c190 = uVar1;
      }
    }
    local_20 = (*(code *)*puStack00000038)(0x308);
    if (local_20 != 0) {
      memset(local_20,0,0x308);
      *(int *)(local_20 + 0x14) = iStack00000030;
      *(undefined4 *)(local_20 + 0xc) = uStack00000040;
      *(undefined4 *)(local_20 + 0x28) = uStack00000048;
    }
  }
  return local_20;
}


// 0x05b3128 (0xa8 bytes)
void FUN_005b3128(int param_1)

{
  int iStack00000030;
  
  if ((param_1 != 0) && (*(int *)(param_1 + 0xc) != 0)) {
    iStack00000030 = param_1;
    (*(code *)**(undefined4 **)(param_1 + 0xc))(param_1);
    if (iStack00000030 == *(int *)PTR_DAT_0071c190) {
      *(undefined4 *)PTR_DAT_0071c190 = 0;
    }
  }
  return;
}


// 0x05b31d0 (0xb0 bytes)
void FUN_005b31d0(void)

{
  int iVar1;
  
  while (iVar1 = *(int *)PTR_DAT_0071c18c, iVar1 != 0) {
    FUN_005b2968(iVar1);
    FUN_005b3128(iVar1);
  }
  while (iVar1 = *(int *)PTR_DAT_0071c188, iVar1 != 0) {
    FUN_005b2968(iVar1);
    FUN_005b3128(iVar1);
  }
  *(undefined4 *)PTR_DAT_0071c190 = 0;
  return;
}


// 0x05b3280 (0x624 bytes)
/* WARNING: Removing unreachable block (ram,0x005b37e8) */
/* WARNING: Removing unreachable block (ram,0x005b3870) */
/* WARNING: Removing unreachable block (ram,0x005b3860) */
/* WARNING: Removing unreachable block (ram,0x005b35ec) */
/* WARNING: Removing unreachable block (ram,0x005b369c) */
/* WARNING: Removing unreachable block (ram,0x005b364c) */
/* WARNING: Removing unreachable block (ram,0x005b3668) */
/* WARNING: Removing unreachable block (ram,0x005b36a8) */
/* WARNING: Removing unreachable block (ram,0x005b3674) */
/* WARNING: Removing unreachable block (ram,0x005b3680) */
/* WARNING: Removing unreachable block (ram,0x005b36b4) */
/* WARNING: Removing unreachable block (ram,0x005b3658) */
/* WARNING: Removing unreachable block (ram,0x005b3664) */
/* WARNING: Removing unreachable block (ram,0x005b36c0) */
/* WARNING: Removing unreachable block (ram,0x005b3690) */
/* WARNING: Removing unreachable block (ram,0x005b36cc) */
/* WARNING: Removing unreachable block (ram,0x005b36e4) */
/* WARNING: Removing unreachable block (ram,0x005b3720) */
/* WARNING: Removing unreachable block (ram,0x005b37d8) */
/* WARNING: Removing unreachable block (ram,0x005b37dc) */
/* WARNING: Removing unreachable block (ram,0x005b3370) */

undefined4 FUN_005b3280(int param_1,int param_2,undefined4 param_3)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iStack00000030;
  int iStack00000038;
  undefined4 uStack00000040;
  int local_40 [4];
  int local_30;
  
  iStack00000030 = param_1;
  iStack00000038 = param_2;
  uStack00000040 = param_3;
  iVar2 = FUN_005b2cd0(local_40,param_2);
  iVar2 = iStack00000038 + iVar2;
  if (local_40[0] == 0x30) {
    iStack00000038 = iVar2;
    iVar3 = FUN_005b2cd0(local_40,iVar2);
    iStack00000038 = iStack00000038 + iVar3;
    iVar3 = local_30 + iVar3;
    iVar4 = FUN_005b38a4(iStack00000030,iStack00000038,local_30);
    if (local_30 == iVar4) {
      iStack00000038 = iStack00000038 + local_30;
      uVar1 = *(uint *)(iStack00000030 + 0x18);
      if (uVar1 == 2) {
        FUN_005ba8b8(iVar2,iVar3,iStack00000030 + 0x58);
      }
      else if (uVar1 < 3) {
        if (uVar1 != 1) {
          return 0;
        }
        FUN_005ba040(iVar2,iVar3,iStack00000030 + 0x58);
      }
      else if (uVar1 == 3) {
        FUN_005bbd60(iVar2,iVar3,iStack00000030 + 0x58);
      }
      else {
        if (uVar1 != 4) {
          return 0;
        }
        FUN_005ad898(iVar2,iVar3,iStack00000030 + 0x54,0x14);
      }
      iVar2 = FUN_005b2cd0(local_40,iStack00000038);
      iStack00000038 = iStack00000038 + iVar2;
      FUN_005b2cd0(local_40,iStack00000038);
    }
  }
  return 0;
}


// 0x05b38a4 (0xd50 bytes)
/* WARNING: Removing unreachable block (ram,0x005b4230) */
/* WARNING: Removing unreachable block (ram,0x005b4280) */
/* WARNING: Removing unreachable block (ram,0x005b42d0) */
/* WARNING: Removing unreachable block (ram,0x005b42e0) */
/* WARNING: Removing unreachable block (ram,0x005b42f8) */
/* WARNING: Removing unreachable block (ram,0x005b431c) */
/* WARNING: Removing unreachable block (ram,0x005b4328) */
/* WARNING: Removing unreachable block (ram,0x005b43a8) */
/* WARNING: Removing unreachable block (ram,0x005b44b8) */
/* WARNING: Removing unreachable block (ram,0x005b441c) */
/* WARNING: Removing unreachable block (ram,0x005b44a4) */
/* WARNING: Removing unreachable block (ram,0x005b4438) */
/* WARNING: Removing unreachable block (ram,0x005b44b4) */
/* WARNING: Removing unreachable block (ram,0x005b4104) */
/* WARNING: Removing unreachable block (ram,0x005b3edc) */
/* WARNING: Removing unreachable block (ram,0x005b3de8) */
/* WARNING: Removing unreachable block (ram,0x005b3b10) */
/* WARNING: Removing unreachable block (ram,0x005b3b98) */
/* WARNING: Removing unreachable block (ram,0x005b3b4c) */
/* WARNING: Removing unreachable block (ram,0x005b3b68) */
/* WARNING: Removing unreachable block (ram,0x005b3bac) */
/* WARNING: Removing unreachable block (ram,0x005b3b74) */
/* WARNING: Removing unreachable block (ram,0x005b3bc0) */
/* WARNING: Removing unreachable block (ram,0x005b3b80) */
/* WARNING: Removing unreachable block (ram,0x005b3b58) */
/* WARNING: Removing unreachable block (ram,0x005b3b84) */
/* WARNING: Removing unreachable block (ram,0x005b3b64) */
/* WARNING: Removing unreachable block (ram,0x005b3da4) */
/* WARNING: Removing unreachable block (ram,0x005b3e98) */
/* WARNING: Removing unreachable block (ram,0x005b41bc) */
/* WARNING: Removing unreachable block (ram,0x005b44e0) */

uint FUN_005b38a4(int param_1,byte *param_2,uint param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iStack00000030;
  byte *pbStack00000038;
  uint uStack00000040;
  size_t local_44;
  uint local_38;
  int local_34 [4];
  uint local_24;
  
  local_38 = 0;
  *(undefined4 *)(param_1 + 0x10) = 0;
  iStack00000030 = param_1;
  pbStack00000038 = param_2;
  uStack00000040 = param_3;
  while( true ) {
    iVar1 = FUN_005b2cd0(local_34,pbStack00000038);
    pbStack00000038 = pbStack00000038 + iVar1;
    if (local_34[0] != 0xa0) break;
    iVar2 = FUN_005b2cd0(local_34,pbStack00000038);
    *(uint *)(iStack00000030 + 0x10) = (uint)pbStack00000038[iVar2];
    pbStack00000038 = pbStack00000038 + iVar2 + 1;
    local_38 = local_38 + iVar1 + iVar2 + 1;
  }
  if (local_34[0] == 2) {
    local_44 = local_24;
    if (0x14 < local_24) {
      local_44 = 0x14;
    }
    memcpy((void *)((iStack00000030 - local_44) + 0x54),
                 pbStack00000038 + (local_24 - local_44),local_44);
    *(size_t *)(iStack00000030 + 0x1c) = local_44;
  }
  pbStack00000038 = pbStack00000038 + local_24;
  iVar2 = FUN_005b2cd0(local_34,pbStack00000038);
  pbStack00000038 = pbStack00000038 + iVar2;
  local_38 = local_38 + iVar1 + local_24 + iVar2;
  if (local_34[0] == 0x30) {
    iVar1 = FUN_005b2cd0(local_34,pbStack00000038);
    pbStack00000038 = pbStack00000038 + local_24 + iVar1;
    iVar2 = FUN_005b2cd0(local_34,pbStack00000038);
    local_38 = local_38 + iVar1 + local_24 * 2 + iVar2;
    pbStack00000038 = pbStack00000038 + local_24 + iVar2;
  }
  iVar1 = FUN_005b2cd0(local_34,pbStack00000038);
  pbStack00000038 = pbStack00000038 + iVar1;
  if (local_34[0] == 0x30) {
    FUN_005b45f4(iStack00000030 + 0xb8,pbStack00000038,local_24);
  }
  pbStack00000038 = pbStack00000038 + local_24;
  iVar2 = FUN_005b2cd0(local_34,pbStack00000038);
  pbStack00000038 = pbStack00000038 + iVar2;
  iVar2 = local_38 + iVar1 + local_24 + iVar2;
  if (local_34[0] == 0x30) {
    iVar1 = FUN_005b2cd0(local_34,pbStack00000038);
    pbStack00000038 = pbStack00000038 + local_24 + iVar1;
    iVar3 = FUN_005b2cd0(local_34,pbStack00000038);
    pbStack00000038 = pbStack00000038 + iVar3;
    iVar2 = iVar2 + iVar1 + local_24 + iVar3;
  }
  pbStack00000038 = pbStack00000038 + local_24;
  local_38 = iVar2 + local_24 * 2;
  iVar1 = FUN_005b2cd0(local_34,pbStack00000038);
  pbStack00000038 = pbStack00000038 + iVar1;
  if (local_34[0] == 0x30) {
    FUN_005b45f4(iStack00000030 + 0x68,pbStack00000038,local_24);
  }
  pbStack00000038 = pbStack00000038 + local_24;
  iVar2 = FUN_005b2cd0(local_34,pbStack00000038);
  pbStack00000038 = pbStack00000038 + iVar2;
  iVar2 = local_38 + iVar1 + iVar2;
  if (local_34[0] == 0x30) {
    iVar1 = FUN_005b2cd0(local_34,pbStack00000038);
    pbStack00000038 = pbStack00000038 + iVar1;
    iVar3 = FUN_005b2cd0(local_34,pbStack00000038);
    pbStack00000038 = pbStack00000038 + local_24 + iVar3;
    iVar4 = FUN_005b2cd0(local_34,pbStack00000038);
    pbStack00000038 = pbStack00000038 + local_24 + iVar4;
    iVar5 = FUN_005b2cd0(local_34,pbStack00000038);
    local_38 = iVar2 + iVar1 + iVar3 + local_24 * 3 + iVar4 + iVar5;
    pbStack00000038 = pbStack00000038 + local_24 + iVar5;
  }
  else {
    pbStack00000038 = pbStack00000038 + local_24;
    local_38 = iVar2 + local_24;
  }
  for (; local_38 < uStack00000040; local_38 = local_38 + iVar1 + local_24) {
    iVar1 = FUN_005b2cd0(local_34,pbStack00000038);
    pbStack00000038 = pbStack00000038 + local_24 + iVar1;
  }
  return local_38;
}


// 0x05b45f4 (0x77c bytes)
/* WARNING: Removing unreachable block (ram,0x005b4750) */
/* WARNING: Removing unreachable block (ram,0x005b47a0) */
/* WARNING: Removing unreachable block (ram,0x005b47c8) */
/* WARNING: Removing unreachable block (ram,0x005b4854) */
/* WARNING: Removing unreachable block (ram,0x005b4868) */
/* WARNING: Removing unreachable block (ram,0x005b4870) */
/* WARNING: Removing unreachable block (ram,0x005b48d0) */
/* WARNING: Removing unreachable block (ram,0x005b4b04) */
/* WARNING: Removing unreachable block (ram,0x005b48dc) */
/* WARNING: Removing unreachable block (ram,0x005b48ec) */
/* WARNING: Removing unreachable block (ram,0x005b48e8) */
/* WARNING: Removing unreachable block (ram,0x005b483c) */
/* WARNING: Removing unreachable block (ram,0x005b4848) */
/* WARNING: Removing unreachable block (ram,0x005b4d18) */

uint FUN_005b45f4(undefined4 param_1,int param_2,uint param_3)

{
  int iVar1;
  int iVar2;
  undefined4 uStack00000030;
  int iStack00000038;
  uint uStack00000040;
  uint local_84;
  int local_80 [4];
  int local_70;
  
  local_84 = 0;
  uStack00000030 = param_1;
  iStack00000038 = param_2;
  uStack00000040 = param_3;
  FUN_005bbd60(param_2,param_3,param_1);
  while (local_84 < uStack00000040) {
    iVar1 = FUN_005b2cd0(local_80,iStack00000038);
    iStack00000038 = iStack00000038 + iVar1;
    if (local_80[0] == 0x31) {
      iVar2 = FUN_005b2cd0(local_80,iStack00000038);
      iStack00000038 = iStack00000038 + iVar2 + local_70;
      local_84 = local_84 + iVar1 + iVar2 + local_70;
    }
    else {
      iStack00000038 = iStack00000038 + local_70;
      local_84 = local_84 + iVar1 + local_70;
    }
  }
  return local_84;
}


// 0x05b4d70 (0x230 bytes)
// strings: 00660ab0: '%02d%02d%02d%02d%02d%02d'

undefined4 FUN_005b4d70(int *param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  uint uVar2;
  ulonglong uVar3;
  int *piStack00000030;
  undefined4 uStack00000038;
  undefined4 uStack00000040;
  uint local_40;
  int local_3c;
  int local_38;
  uint local_34;
  uint local_30;
  int local_2c [5];
  
  piStack00000030 = param_1;
  uStack00000038 = param_2;
  uStack00000040 = param_3;
  FUN_005c8480(param_2,PTR_s__02d_02d_02d_02d_02d_02d_0071c198,&local_40,&local_3c,&local_38,
               &local_34,&local_30,local_2c);
  piStack00000030[1] = local_40 * 0x16f;
  iVar1 = local_3c + 9 >> 0x1f;
  uVar3 = ((longlong)((local_3c + 9) / 0xc + iVar1) - (longlong)iVar1) + (ulonglong)local_40;
  uVar2 = (int)((uVar3 & 0xffffffff) << 3) - (int)uVar3;
  piStack00000030[1] =
       piStack00000030[1] - (((int)uVar2 >> 2) + (uint)((int)uVar2 < 0 && (uVar2 & 3) != 0));
  piStack00000030[1] = piStack00000030[1] + (local_3c * 0x113) / 9;
  piStack00000030[1] = piStack00000030[1] + local_38 + 0x256839;
  if (0x45 < (int)local_40) {
    piStack00000030[1] = piStack00000030[1] + -0x8ead;
  }
  if ((int)local_34 < 0xc) {
    local_34 = local_34 + 0xc;
  }
  else {
    piStack00000030[1] = piStack00000030[1] + 1;
    local_34 = local_34 - 0xc;
  }
  uVar3 = ((ulonglong)local_34 & 0x3ffffff) * 0x40 + ((ulonglong)local_34 & 0x3fffffff) * -4 +
          (ulonglong)local_30 & 0x3fffffff;
  *piStack00000030 = ((int)(uVar3 << 6) - (int)(uVar3 << 2)) + local_2c[0];
  return uStack00000040;
}


// 0x05b4fa0 (0x230 bytes)
// strings: 00660ab0: '%02d%02d%02d%02d%02d%02d'

undefined4 FUN_005b4fa0(int *param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  uint uVar2;
  ulonglong uVar3;
  int *piStack00000030;
  undefined4 uStack00000038;
  undefined4 uStack00000040;
  uint local_40;
  int local_3c;
  int local_38;
  uint local_34;
  uint local_30;
  int local_2c [5];
  
  piStack00000030 = param_1;
  uStack00000038 = param_2;
  uStack00000040 = param_3;
  FUN_005c8480(param_2,PTR_s__02d_02d_02d_02d_02d_02d_0071c198,&local_40,&local_3c,&local_38,
               &local_34,&local_30,local_2c);
  piStack00000030[1] = local_40 * 0x16f;
  iVar1 = local_3c + 9 >> 0x1f;
  uVar3 = ((longlong)((local_3c + 9) / 0xc + iVar1) - (longlong)iVar1) + (ulonglong)local_40;
  uVar2 = (int)((uVar3 & 0xffffffff) << 3) - (int)uVar3;
  piStack00000030[1] =
       piStack00000030[1] - (((int)uVar2 >> 2) + (uint)((int)uVar2 < 0 && (uVar2 & 3) != 0));
  piStack00000030[1] = piStack00000030[1] + (local_3c * 0x113) / 9;
  piStack00000030[1] = piStack00000030[1] + local_38 + 0x256839;
  if (0x45 < (int)local_40) {
    piStack00000030[1] = piStack00000030[1] + -0x8ead;
  }
  if ((int)local_34 < 0xc) {
    local_34 = local_34 + 0xc;
  }
  else {
    piStack00000030[1] = piStack00000030[1] + 1;
    local_34 = local_34 - 0xc;
  }
  uVar3 = ((ulonglong)local_34 & 0x3ffffff) * 0x40 + ((ulonglong)local_34 & 0x3fffffff) * -4 +
          (ulonglong)local_30 & 0x3fffffff;
  *piStack00000030 = ((int)(uVar3 << 6) - (int)(uVar3 << 2)) + local_2c[0];
  return uStack00000040;
}


// 0x05b51d0 (0x324 bytes)
undefined4 FUN_005b51d0(undefined4 param_1,undefined4 param_2)

{
  longlong lVar1;
  ulonglong *puVar2;
  int iVar3;
  undefined4 uVar4;
  ulonglong unaff_r31;
  ulonglong in_LR;
  GPiece<288> auStack_120;
  
  lVar1 = ZEXT48(&stack0x00000000) - 0x1a0;
  puVar2 = (ulonglong *)lVar1;
  *puVar2 = ZEXT48(&stack0x00000000);
  puVar2[0x33] = unaff_r31;
  puVar2[0x36] = in_LR;
  *(undefined4 *)(puVar2 + 0x3a) = param_1;
  *(undefined4 *)(puVar2 + 0x3b) = param_2;
  *(undefined4 *)((int)puVar2 + 0x74) = 0x100;
  iVar3 = FUN_005b2b30(*(int *)(puVar2 + 0x3a) + 0xb8,*(int *)(puVar2 + 0x3b) + 0x68);
  if (iVar3 == 0) {
    if ((*(int *)(*(int *)(puVar2 + 0x3b) + 0x20) == 0) ||
       ((*(byte *)(*(int *)(puVar2 + 0x3b) + 0x207) & 1) == 0)) {
      *(undefined4 *)((int)puVar2 + 0x184) = 1;
    }
    else {
      memcpy(auStack_120,(void *)(*(int *)(puVar2 + 0x3a) + 0x208),0x100);
      FUN_005b6d80((*(int *)(puVar2 + 0x3b) - *(int *)(*(int *)(puVar2 + 0x3b) + 0x20)) + 0x208,
                   *(undefined4 *)(*(int *)(puVar2 + 0x3b) + 0x20),
                   *(undefined4 *)(*(int *)(puVar2 + 0x3b) + 0x24),
                   (lVar1 - (ulonglong)*(uint *)(*(int *)(puVar2 + 0x3b) + 0x20)) + 0x180 &
                   0xffffffff,*(undefined4 *)(*(int *)(puVar2 + 0x3b) + 0x20));
      *(undefined4 *)(puVar2 + 0xe) = 2;
      while (*(char *)((int)puVar2 + *(int *)(puVar2 + 0xe) + 0x80) != -1) {
        *(int *)(puVar2 + 0xe) = *(int *)(puVar2 + 0xe) + 1;
      }
      while (*(char *)((int)puVar2 + *(int *)(puVar2 + 0xe) + 0x80) == -1) {
        *(int *)(puVar2 + 0xe) = *(int *)(puVar2 + 0xe) + 1;
      }
      uVar4 = FUN_005b5d80((ulonglong)*(uint *)(puVar2 + 0xe) + lVar1 + 0x87 & 0xffffffff,
                           *(undefined1 *)((int)puVar2 + *(int *)(puVar2 + 0xe) + 0x86));
      *(undefined4 *)(puVar2 + 0xf) = uVar4;
      *(undefined4 *)(puVar2 + 0x30) = *(undefined4 *)(*(int *)(puVar2 + 0x3a) + 0x18);
      if (*(int *)(puVar2 + 0x30) == 2) {
        *(undefined4 *)((int)puVar2 + 0x74) = 0x10;
      }
      else if (*(uint *)(puVar2 + 0x30) < 3) {
        if (*(int *)(puVar2 + 0x30) == 1) {
          *(undefined4 *)((int)puVar2 + 0x74) = 0x10;
        }
      }
      else if (*(int *)(puVar2 + 0x30) == 3) {
        *(undefined4 *)((int)puVar2 + 0x74) = 0x10;
      }
      else if (*(int *)(puVar2 + 0x30) == 4) {
        *(undefined4 *)((int)puVar2 + 0x74) = 0x14;
      }
      iVar3 = memcmp((void *)((*(int *)(puVar2 + 0x3a) - *(int *)((int)puVar2 + 0x74)) + 0x68)
                           ,(void *)((int)puVar2 + (0x180 - *(int *)((int)puVar2 + 0x74))),
                           *(size_t *)((int)puVar2 + 0x74));
      if (iVar3 == 0) {
        *(undefined4 *)((int)puVar2 + 0x184) = 0;
      }
      else {
        *(undefined4 *)((int)puVar2 + 0x184) = 0xffffffff;
      }
    }
  }
  else {
    *(undefined4 *)((int)puVar2 + 0x184) = 1;
  }
  return *(undefined4 *)((int)puVar2 + 0x184);
}


// 0x05b54f4 (0x38 bytes)
undefined4 FUN_005b54f4(int param_1)

{
  return *(undefined4 *)(param_1 + 0x20);
}


// 0x05b552c (0xe4 bytes)
int FUN_005b552c(int param_1,undefined4 param_2,int param_3)

{
  int iStack00000030;
  undefined4 uStack00000038;
  int iStack00000040;
  undefined4 local_20;
  
  if (*(int *)(param_1 + 0x20) == param_3) {
    iStack00000030 = param_1;
    uStack00000038 = param_2;
    iStack00000040 = param_3;
    FUN_005b6d80((param_1 - *(int *)(param_1 + 0x20)) + 0x208,*(undefined4 *)(param_1 + 0x20),
                 *(undefined4 *)(param_1 + 0x24),param_2,param_3);
    local_20 = iStack00000040;
  }
  else {
    local_20 = 0;
  }
  return local_20;
}


// 0x05b5610 (0x470 bytes)
undefined4 FUN_005b5610(int param_1)

{
  int iVar1;
  uint uVar2;
  int iStack00000030;
  undefined4 local_30;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  
  if (param_1 == 0) {
    local_20 = 0x200;
  }
  else if ((*(uint *)(param_1 + 0x14) & 4) == 0) {
    if (*(int *)(param_1 + 0x28) != 0) {
      uVar2 = *(uint *)(param_1 + 0x28) / 0x15180;
      iVar1 = *(int *)(param_1 + 0x28) + uVar2 * -0x15180;
      local_28 = iVar1 + 0xa8c0;
      local_24 = uVar2 + 0x253d8b;
      if (0x1517f < local_28) {
        local_24 = uVar2 + 0x253d8c;
        local_28 = iVar1 - 0xa8c0;
      }
      if ((*(uint *)(param_1 + 0x3c) <= local_24) &&
         ((*(uint *)(param_1 + 0x3c) < local_24 || (*(uint *)(param_1 + 0x38) <= local_28)))) {
        *(uint *)(param_1 + 0x14) = *(uint *)(param_1 + 0x14) | 0x100;
      }
    }
    iStack00000030 = param_1;
    if (*(int *)(param_1 + 8) == 0) {
      iVar1 = FUN_005b2b30(param_1 + 0x68,param_1 + 0xb8);
      if (iVar1 == 0) {
        *(uint *)(iStack00000030 + 0x14) = *(uint *)(iStack00000030 + 0x14) | 0x40;
        local_30 = iStack00000030;
      }
      else {
        *(uint *)(iStack00000030 + 0x14) = *(uint *)(iStack00000030 + 0x14) & 0xffffffbf;
        local_30 = FUN_005b2b9c(iStack00000030 + 0xb8);
      }
      *(int *)(iStack00000030 + 8) = local_30;
      if ((local_30 == 0) || (iVar1 = FUN_005b51d0(iStack00000030,local_30), iVar1 != 0)) {
        *(uint *)(iStack00000030 + 0x14) = *(uint *)(iStack00000030 + 0x14) & 0xffffffe7;
        *(uint *)(iStack00000030 + 0x14) = *(uint *)(iStack00000030 + 0x14) | 8;
        *(uint *)(iStack00000030 + 0x14) = *(uint *)(iStack00000030 + 0x14) | 4;
      }
      else if ((*(uint *)(iStack00000030 + 0x14) & 0x40) == 0) {
        *(uint *)(iStack00000030 + 0x14) = *(uint *)(iStack00000030 + 0x14) | 0x18;
      }
      else {
        *(uint *)(iStack00000030 + 0x14) = *(uint *)(iStack00000030 + 0x14) & 0xffffffe7;
        *(uint *)(iStack00000030 + 0x14) = *(uint *)(iStack00000030 + 0x14) | 4;
        if ((*(uint *)(iStack00000030 + 0x14) & 0x80) != 0) {
          *(uint *)(iStack00000030 + 0x14) = *(uint *)(iStack00000030 + 0x14) | 0x10;
        }
      }
    }
    if ((*(uint *)(iStack00000030 + 0x14) & 0x18) == 0x18) {
      if ((*(uint *)(iStack00000030 + 0x14) & 0x40) == 0) {
        uVar2 = FUN_005b5610(*(undefined4 *)(iStack00000030 + 8));
        if ((uVar2 & 0x18) != 0x18) {
          *(uint *)(iStack00000030 + 0x14) = *(uint *)(iStack00000030 + 0x14) & 0xffffffe7;
          *(uint *)(iStack00000030 + 0x14) = *(uint *)(iStack00000030 + 0x14) | uVar2 & 0x118;
          *(uint *)(iStack00000030 + 0x14) = *(uint *)(iStack00000030 + 0x14) | 4;
        }
        local_20 = *(undefined4 *)(iStack00000030 + 0x14);
      }
      else {
        local_20 = *(undefined4 *)(iStack00000030 + 0x14);
      }
    }
    else {
      local_20 = *(undefined4 *)(iStack00000030 + 0x14);
    }
  }
  else {
    local_20 = *(undefined4 *)(param_1 + 0x14);
  }
  return local_20;
}


// 0x05b5a80 (0x208 bytes)
uint FUN_005b5a80(int param_1,undefined4 *param_2)

{
  undefined4 *local_30;
  uint local_28;
  
  if (param_2 != (undefined4 *)0x0) {
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
    param_2[0xf] = 0;
    if ((param_1 != 0) && (*(int *)(param_1 + 0x20) == 0x40)) {
      local_30 = param_2;
      for (local_28 = 0; local_28 < 0x40; local_28 = local_28 + 4) {
        *local_30 = CONCAT13(*(undefined1 *)((param_1 - local_28) + 0x204),
                             CONCAT12(*(undefined1 *)((param_1 - local_28) + 0x205),
                                      CONCAT11(*(undefined1 *)((param_1 - local_28) + 0x206),
                                               *(undefined1 *)((param_1 - local_28) + 0x207))));
        local_30 = local_30 + 1;
      }
      return local_28;
    }
  }
  return 0;
}


// 0x05b5c88 (0xc4 bytes)
undefined4 FUN_005b5c88(int param_1,void *param_2)

{
  int iStack00000030;
  void *pvStack00000038;
  undefined4 local_20;
  
  if (param_2 == (void *)0x0) {
    local_20 = 0;
  }
  else {
    iStack00000030 = param_1;
    pvStack00000038 = param_2;
    memcpy(param_2,(void *)((param_1 - *(int *)(param_1 + 0x20)) + 0x208),
                 *(size_t *)(param_1 + 0x20));
    local_20 = *(undefined4 *)(iStack00000030 + 0x20);
  }
  return local_20;
}


// 0x05b5d4c (0x34 bytes)
int FUN_005b5d4c(int param_1)

{
  return param_1 + 0x78;
}


// 0x05b5d80 (0xe0 bytes)
int FUN_005b5d80(void *param_1,size_t param_2)

{
  int iVar1;
  void *pvStack00000030;
  size_t sStack00000038;
  int *local_30;
  
  local_30 = (int *)PTR_DAT_0071c19c;
  pvStack00000030 = param_1;
  sStack00000038 = param_2;
  while( true ) {
    if (*local_30 == 0) {
      return 0;
    }
    if ((local_30[1] == sStack00000038) &&
       (iVar1 = memcmp(pvStack00000030,local_30 + 2,sStack00000038), iVar1 == 0)) break;
    local_30 = local_30 + 6;
  }
  return *local_30;
}


// 0x05b5e60 (0xe8 bytes)
int FUN_005b5e60(void *param_1,int param_2)

{
  void *pvStack00000030;
  int iStack00000038;
  int *local_30;
  
  local_30 = (int *)PTR_DAT_0071c19c;
  while( true ) {
    if (*local_30 == 0) {
      return 0;
    }
    if (*local_30 == param_2) break;
    local_30 = local_30 + 6;
  }
  pvStack00000030 = param_1;
  iStack00000038 = param_2;
  memcpy(param_1,local_30 + 2,local_30[1]);
  return local_30[1];
}


// 0x05b5fd0 (0xd8 bytes)
undefined8 FUN_005b5fd0(undefined4 *param_1,int param_2)

{
  byte bVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  byte local_10 [16];
  
  iVar2 = 0;
  do {
    *(byte *)((int)param_1 + iVar2 + 0xc) = ~(byte)iVar2;
    iVar2 = iVar2 + 1;
  } while (iVar2 < 0x100);
  uVar3 = 0;
  uVar4 = 0;
  uVar5 = 0;
  do {
    bVar1 = *(byte *)((int)param_1 + uVar3 + 0xc);
    uVar5 = uVar5 + local_10[uVar4] + (uint)bVar1 & 0xff;
    *(undefined1 *)((int)param_1 + uVar3 + 0xc) = *(undefined1 *)((int)param_1 + uVar5 + 0xc);
    *(byte *)((int)param_1 + uVar5 + 0xc) = bVar1;
    uVar3 = uVar3 + 5 & 0xff;
    uVar4 = uVar4 + 1 & 3;
  } while (uVar3 != 0);
  uVar3 = 0;
  uVar4 = 0;
  uVar5 = 0;
  do {
    bVar1 = *(byte *)((int)param_1 + uVar3 + 0xc);
    uVar5 = uVar5 + *(byte *)(uVar4 + param_2) + (uint)bVar1 & 0xff;
    *(undefined1 *)((int)param_1 + uVar3 + 0xc) = *(undefined1 *)((int)param_1 + uVar5 + 0xc);
    *(byte *)((int)param_1 + uVar5 + 0xc) = bVar1;
    uVar3 = uVar3 + 3 & 0xff;
    uVar4 = uVar4 + 1 & 0x3f;
  } while (uVar3 != 0);
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = 0;
  return 0;
}


// 0x05b60b0 (0x8c bytes)
undefined8 FUN_005b60b0(int *param_1,int param_2,longlong param_3)

{
  byte bVar1;
  byte bVar2;
  byte bVar3;
  uint uVar4;
  uint uVar5;
  longlong lVar6;
  
  lVar6 = 0;
  uVar5 = param_1[2];
  uVar4 = param_1[1] & 0xff;
  do {
    uVar4 = uVar4 + 5 & 0xff;
    bVar1 = *(byte *)((int)param_1 + uVar4 + 0xc);
    uVar5 = (uVar5 & 0xff) + (uint)bVar1 & 0xff;
    bVar2 = *(byte *)((int)param_1 + uVar5 + 0xc);
    *(byte *)((int)param_1 + uVar5 + 0xc) = bVar1;
    *(byte *)((int)param_1 + uVar4 + 0xc) = bVar2;
    bVar3 = *(byte *)((int)lVar6 + param_2);
    *(byte *)((int)lVar6 + param_2) =
         *(byte *)((int)param_1 + ((uint)bVar2 + (uint)bVar1 & 0xff) + 0xc) ^ bVar3;
    uVar5 = uVar5 + *(byte *)((int)param_1 + bVar3 + 0xc);
    lVar6 = lVar6 + 1;
  } while (lVar6 < param_3);
  param_1[1] = uVar4;
  param_1[2] = uVar5 & 0xff;
  *param_1 = *param_1 + (int)param_3;
  return 0;
}


// 0x05b6140 (0x8c bytes)
undefined8 FUN_005b6140(int *param_1,int param_2,longlong param_3)

{
  byte bVar1;
  byte bVar2;
  uint uVar3;
  uint uVar4;
  longlong lVar5;
  
  lVar5 = 0;
  uVar4 = param_1[2];
  uVar3 = param_1[1] & 0xff;
  do {
    uVar3 = uVar3 + 5 & 0xff;
    bVar1 = *(byte *)((int)param_1 + uVar3 + 0xc);
    uVar4 = (uVar4 & 0xff) + (uint)bVar1 & 0xff;
    bVar2 = *(byte *)((int)param_1 + uVar4 + 0xc);
    *(byte *)((int)param_1 + uVar4 + 0xc) = bVar1;
    *(byte *)((int)param_1 + uVar3 + 0xc) = bVar2;
    bVar1 = *(byte *)((int)param_1 + ((uint)bVar2 + (uint)bVar1 & 0xff) + 0xc) ^
            *(byte *)((int)lVar5 + param_2);
    *(byte *)((int)lVar5 + param_2) = bVar1;
    uVar4 = uVar4 + *(byte *)((int)param_1 + bVar1 + 0xc);
    lVar5 = lVar5 + 1;
  } while (lVar5 < param_3);
  param_1[1] = uVar3;
  param_1[2] = uVar4 & 0xff;
  *param_1 = *param_1 + (int)param_3;
  return 0;
}


// 0x05b61d0 (0x1a8 bytes)
void * FUN_005b61d0(void *param_1,undefined4 param_2,void *param_3,void *param_4)

{
  void *pvVar1;
  void *pvStack00000030;
  undefined4 uStack00000038;
  void *pvStack00000040;
  void *pvStack00000048;
  GPiece<512> auStack_81c;
  GPiece<64> auStack_61c;
  GPiece<448> auStack_5dc;
  GPiece<64> auStack_41c;
  GPiece<448> auStack_3dc;
  GPiece<532> auStack_21c;
  
  pvStack00000030 = param_1;
  uStack00000038 = param_2;
  pvStack00000040 = param_3;
  pvStack00000048 = param_4;
  FUN_005bdf90(auStack_81c,param_2);
  memcpy(auStack_61c,pvStack00000030,0x40);
  memset(auStack_5dc,0,0x1c0);
  memcpy(auStack_41c,pvStack00000040,0x40);
  memset(auStack_3dc,0,0x1c0);
  FUN_005c07f4(auStack_21c,auStack_41c,auStack_81c,auStack_61c);
  pvVar1 = memcpy(pvStack00000048,auStack_21c,0x40);
  return pvVar1;
}


// 0x05b6378 (0x25c bytes)
void * FUN_005b6378(void *param_1,void *param_2,void *param_3,void *param_4)

{
  int iVar1;
  void *pvVar2;
  void *pvStack00000030;
  void *pvStack00000038;
  void *pvStack00000040;
  void *pvStack00000048;
  GPiece<64> auStack_818;
  GPiece<448> auStack_7d8;
  GPiece<64> auStack_618;
  GPiece<448> auStack_5d8;
  GPiece<64> auStack_418;
  GPiece<448> auStack_3d8;
  GPiece<528> auStack_218;
  
  pvStack00000030 = param_1;
  pvStack00000038 = param_2;
  pvStack00000040 = param_3;
  pvStack00000048 = param_4;
  memcpy(auStack_818,param_2,0x40);
  memset(auStack_7d8,0,0x1c0);
  memcpy(auStack_618,pvStack00000030,0x40);
  memset(auStack_5d8,0,0x1c0);
  memcpy(auStack_418,pvStack00000040,0x40);
  memset(auStack_3d8,0,0x1c0);
  iVar1 = FUN_005b872c(0x11,auStack_618,auStack_818);
  if (iVar1 == 0) {
    FUN_005c07f4(auStack_218,auStack_418,auStack_818,auStack_618);
  }
  else {
    FUN_005b7754(auStack_218,auStack_418,iVar1);
  }
  pvVar2 = memcpy(pvStack00000048,auStack_218,0x40);
  return pvVar2;
}


// 0x05b65d4 (0x2c4 bytes)
int FUN_005b65d4(undefined4 param_1,int param_2,int param_3,int param_4)

{
  undefined1 *puVar1;
  int iVar2;
  undefined4 uStack00000030;
  int iStack00000038;
  int iStack00000040;
  int iStack00000048;
  uint local_20;
  int local_1c;
  undefined1 local_18;
  undefined1 uStack_17;
  undefined1 uStack_16;
  undefined1 uStack_15;
  
  local_1c = 0;
  uStack00000030 = param_1;
  iStack00000038 = param_2;
  iStack00000040 = param_3;
  for (iStack00000048 = param_4; 0x3f < iStack00000048; iStack00000048 = iStack00000048 + -0x40) {
    for (local_20 = 0; local_20 < 0x40; local_20 = local_20 + 4) {
      iVar2 = (uint)*(byte *)(local_20 + iStack00000038 + 3) * 0x1000000 +
              (uint)*(byte *)(local_20 + iStack00000038 + 2) * 0x10000 +
              (uint)*(byte *)(local_20 + iStack00000038 + 1) * 0x100 +
              (uint)*(byte *)(local_20 + iStack00000038);
      puVar1 = (undefined1 *)(local_20 + iStack00000040);
      local_18 = (undefined1)((uint)iVar2 >> 0x18);
      *puVar1 = local_18;
      uStack_17 = (undefined1)((uint)iVar2 >> 0x10);
      puVar1[1] = uStack_17;
      uStack_16 = (undefined1)((uint)iVar2 >> 8);
      puVar1[2] = uStack_16;
      uStack_15 = (undefined1)iVar2;
      puVar1[3] = uStack_15;
    }
    FUN_005b61d0(uStack00000030,0x11,iStack00000040,iStack00000040);
    for (local_20 = 0; local_20 < 0x40; local_20 = local_20 + 4) {
      iVar2 = (uint)*(byte *)(local_20 + iStack00000040 + 3) * 0x1000000 +
              (uint)*(byte *)(local_20 + iStack00000040 + 2) * 0x10000 +
              (uint)*(byte *)(local_20 + iStack00000040 + 1) * 0x100 +
              (uint)*(byte *)(local_20 + iStack00000040);
      puVar1 = (undefined1 *)(local_20 + iStack00000040);
      local_18 = (undefined1)((uint)iVar2 >> 0x18);
      *puVar1 = local_18;
      uStack_17 = (undefined1)((uint)iVar2 >> 0x10);
      puVar1[1] = uStack_17;
      uStack_16 = (undefined1)((uint)iVar2 >> 8);
      puVar1[2] = uStack_16;
      uStack_15 = (undefined1)iVar2;
      puVar1[3] = uStack_15;
    }
    local_1c = local_1c + 0x40;
    iStack00000040 = iStack00000040 + 0x40;
    iStack00000038 = iStack00000038 + 0x40;
  }
  return local_1c;
}


// 0x05b6898 (0x2d4 bytes)
int FUN_005b6898(undefined4 param_1,undefined4 param_2,int param_3,int param_4,uint param_5)

{
  undefined1 *puVar1;
  int iVar2;
  undefined4 uStack00000030;
  undefined4 uStack00000038;
  int iStack00000040;
  int iStack00000048;
  uint uStack00000050;
  uint local_20;
  int local_1c;
  undefined1 local_18;
  undefined1 uStack_17;
  undefined1 uStack_16;
  undefined1 uStack_15;
  
  local_1c = 0;
  uStack00000030 = param_1;
  uStack00000038 = param_2;
  iStack00000040 = param_3;
  iStack00000048 = param_4;
  for (uStack00000050 = param_5; 0x3f < uStack00000050; uStack00000050 = uStack00000050 - 0x40) {
    for (local_20 = 0; local_20 < 0x40; local_20 = local_20 + 4) {
      iVar2 = (uint)*(byte *)(local_20 + iStack00000040 + 3) * 0x1000000 +
              (uint)*(byte *)(local_20 + iStack00000040 + 2) * 0x10000 +
              (uint)*(byte *)(local_20 + iStack00000040 + 1) * 0x100 +
              (uint)*(byte *)(local_20 + iStack00000040);
      puVar1 = (undefined1 *)(local_20 + iStack00000048);
      local_18 = (undefined1)((uint)iVar2 >> 0x18);
      *puVar1 = local_18;
      uStack_17 = (undefined1)((uint)iVar2 >> 0x10);
      puVar1[1] = uStack_17;
      uStack_16 = (undefined1)((uint)iVar2 >> 8);
      puVar1[2] = uStack_16;
      uStack_15 = (undefined1)iVar2;
      puVar1[3] = uStack_15;
    }
    FUN_005b6378(uStack00000030,uStack00000038,iStack00000048,iStack00000048);
    for (local_20 = 0; local_20 < 0x40; local_20 = local_20 + 4) {
      iVar2 = (uint)*(byte *)(local_20 + iStack00000048 + 3) * 0x1000000 +
              (uint)*(byte *)(local_20 + iStack00000048 + 2) * 0x10000 +
              (uint)*(byte *)(local_20 + iStack00000048 + 1) * 0x100 +
              (uint)*(byte *)(local_20 + iStack00000048);
      puVar1 = (undefined1 *)(local_20 + iStack00000048);
      local_18 = (undefined1)((uint)iVar2 >> 0x18);
      *puVar1 = local_18;
      uStack_17 = (undefined1)((uint)iVar2 >> 0x10);
      puVar1[1] = uStack_17;
      uStack_16 = (undefined1)((uint)iVar2 >> 8);
      puVar1[2] = uStack_16;
      uStack_15 = (undefined1)iVar2;
      puVar1[3] = uStack_15;
    }
    local_1c = local_1c + 0x40;
    iStack00000040 = iStack00000040 + 0x40;
    iStack00000048 = iStack00000048 + 0x40;
  }
  return local_1c;
}


// 0x05b6b6c (0xd4 bytes)
void * FUN_005b6b6c(void *param_1,void *param_2)

{
  void *pvVar1;
  void *pvStack00000030;
  void *pvStack00000038;
  GPiece<512> auStack_41c;
  GPiece<532> auStack_21c;
  
  pvStack00000030 = param_1;
  pvStack00000038 = param_2;
  FUN_005c0c8c(auStack_41c,auStack_21c,0x11,0x200);
  memcpy(pvStack00000030,auStack_41c,0x40);
  pvVar1 = memcpy(pvStack00000038,auStack_21c,0x40);
  return pvVar1;
}


// 0x05b6c40 (0x140 bytes)
void FUN_005b6c40(undefined4 param_1,void *param_2)

{
  undefined4 uStack00000030;
  void *pvStack00000038;
  GPiece<512> auStack_41c;
  GPiece<532> auStack_21c;
  
  uStack00000030 = param_1;
  pvStack00000038 = param_2;
  memset(auStack_41c,0,0x200);
  memset(auStack_21c,0,0x200);
  FUN_005bdae0(uStack00000030,auStack_41c,0x40);
  memcpy(auStack_21c,pvStack00000038,0x40);
  FUN_005c1300(auStack_41c,auStack_21c);
  FUN_005bdbfc(auStack_41c,uStack00000030,0x40);
  return;
}


// 0x05b6d80 (0x1b4 bytes)
void FUN_005b6d80(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5)

{
  undefined4 uStack00000030;
  undefined4 uStack00000038;
  undefined4 uStack00000040;
  undefined4 uStack00000048;
  undefined4 uStack00000050;
  GPiece<512> local_810;
  GPiece<512> auStack_610;
  GPiece<512> auStack_410;
  GPiece<520> auStack_210;
  
  uStack00000030 = param_1;
  uStack00000038 = param_2;
  uStack00000040 = param_3;
  uStack00000048 = param_4;
  uStack00000050 = param_5;
  memset(local_810,0,0x200);
  memset(auStack_610,0,0x200);
  memset(auStack_410,0,0x200);
  memset(auStack_210,0,0x200);
  FUN_005bdd00(uStack00000030,auStack_610,uStack00000038);
  FUN_005bdd00(uStack00000048,auStack_410,uStack00000050);
  FUN_005c07f4(auStack_210,auStack_410,local_810,auStack_610);
  FUN_005bde60(auStack_210,uStack00000048,uStack00000050);
  return;
}


// 0x05b6f34 (0x254 bytes)
void FUN_005b6f34(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5)

{
  int iVar1;
  undefined4 uStack00000030;
  undefined4 uStack00000038;
  undefined4 uStack00000040;
  undefined4 uStack00000048;
  undefined4 uStack00000050;
  GPiece<512> auStack_81c;
  GPiece<512> auStack_61c;
  GPiece<512> auStack_41c;
  GPiece<532> auStack_21c;
  
  uStack00000030 = param_1;
  uStack00000038 = param_2;
  uStack00000040 = param_3;
  uStack00000048 = param_4;
  uStack00000050 = param_5;
  memset(auStack_81c,0,0x200);
  memset(auStack_61c,0,0x200);
  memset(auStack_41c,0,0x200);
  memset(auStack_21c,0,0x200);
  FUN_005bdd00(uStack00000030,auStack_61c,uStack00000050);
  FUN_005bdd00(uStack00000038,auStack_81c,uStack00000050);
  FUN_005bdd00(uStack00000048,auStack_41c,uStack00000050);
  iVar1 = FUN_005b872c(uStack00000040,auStack_61c,auStack_81c);
  if (iVar1 == 0) {
    FUN_005c07f4(auStack_21c,auStack_41c,auStack_81c,auStack_61c);
  }
  else {
    FUN_005b7754(auStack_21c,auStack_41c,iVar1);
  }
  FUN_005bde60(auStack_21c,uStack00000048,uStack00000050);
  return;
}


// 0x05b7188 (0xec bytes)
void FUN_005b7188(undefined4 param_1,undefined4 param_2,undefined4 param_3,int param_4)

{
  uint uVar1;
  undefined4 uStack00000030;
  undefined4 uStack00000038;
  undefined4 uStack00000040;
  int iStack00000048;
  GPiece<512> auStack_41c;
  GPiece<532> auStack_21c;
  
  uVar1 = param_4 + 7U >> 3;
  uStack00000030 = param_1;
  uStack00000038 = param_2;
  uStack00000040 = param_3;
  iStack00000048 = param_4;
  FUN_005c0c8c(auStack_41c,auStack_21c,param_3,param_4);
  FUN_005bde60(auStack_41c,uStack00000030,uVar1);
  FUN_005bde60(auStack_21c,uStack00000038,uVar1);
  return;
}


// 0x05b7274 (0xb8 bytes)
void FUN_005b7274(int param_1,int param_2)

{
  undefined4 local_20;
  
  for (local_20 = 0; local_20 < 0x20; local_20 = local_20 + 1) {
    *(undefined4 *)(param_2 + local_20 * 4) = *(undefined4 *)(param_1 + local_20 * 4);
  }
  for (; local_20 < 0x80; local_20 = local_20 + 1) {
    *(undefined4 *)(param_2 + local_20 * 4) = 0;
  }
  return;
}


// 0x05b732c (0x80 bytes)
void FUN_005b732c(int param_1,int param_2)

{
  undefined4 local_20;
  
  for (local_20 = 0; local_20 < 0x20; local_20 = local_20 + 1) {
    *(undefined4 *)(param_2 + local_20 * 4) = *(undefined4 *)(param_1 + local_20 * 4);
  }
  return;
}


// 0x05b73ac (0xa8 bytes)
undefined4 FUN_005b73ac(int param_1,int param_2)

{
  uint local_30;
  
  local_30 = 0;
  while( true ) {
    if (0x1f < local_30) {
      return 1;
    }
    if (*(int *)(param_1 + local_30 * 4) != *(int *)(param_2 + local_30 * 4)) break;
    local_30 = local_30 + 1;
  }
  return 0;
}


// 0x05b7454 (0x300 bytes)
undefined4 FUN_005b7454(undefined4 param_1,undefined4 param_2,undefined4 param_3,int param_4)

{
  undefined4 uStack00000030;
  undefined4 uStack00000038;
  undefined4 uStack00000040;
  int iStack00000048;
  GPiece<512> auStack_410;
  GPiece<520> auStack_210;
  
  uStack00000030 = param_1;
  uStack00000038 = param_2;
  uStack00000040 = param_3;
  iStack00000048 = param_4;
  FUN_005b732c(param_2,param_4);
  FUN_005b732c(uStack00000040,iStack00000048 + 0x80);
  FUN_005c13d0(auStack_410,uStack00000038,uStack00000040);
  FUN_005c1338(auStack_410,uStack00000038);
  FUN_005c1338(auStack_410,uStack00000040);
  FUN_005be478(auStack_410,1);
  FUN_005bdf90(auStack_210,uStack00000030);
  FUN_005bf0e8(auStack_210,auStack_410,auStack_210);
  FUN_005bf0e8(uStack00000040,uStack00000038,auStack_410);
  FUN_005b732c(auStack_410,iStack00000048 + 0x200);
  FUN_005bf0e8(uStack00000038,uStack00000040,auStack_410);
  FUN_005b732c(auStack_410,iStack00000048 + 0x280);
  FUN_005b7274(iStack00000048,auStack_410);
  FUN_005be554(auStack_410,1);
  FUN_005be820(auStack_410,auStack_210,auStack_410);
  FUN_005b732c(auStack_410,iStack00000048 + 0x100);
  FUN_005b7274(iStack00000048 + 0x80,auStack_410);
  FUN_005be554(auStack_410,1);
  FUN_005be820(auStack_410,auStack_210,auStack_410);
  FUN_005b732c(auStack_410,iStack00000048 + 0x180);
  return 0;
}


// 0x05b7754 (0x3f8 bytes)
void FUN_005b7754(void *param_1,undefined4 param_2,int param_3)

{
  int iVar1;
  void *pvStack00000030;
  undefined4 uStack00000038;
  int iStack00000040;
  GPiece<512> auStack_61c;
  GPiece<512> auStack_41c;
  GPiece<532> auStack_21c;
  
  pvStack00000030 = param_1;
  uStack00000038 = param_2;
  iStack00000040 = param_3;
  FUN_005b7274(param_3 + 0x100,auStack_41c);
  FUN_005b7274(iStack00000040 + 0x180,auStack_21c);
  FUN_005b7274(iStack00000040,auStack_61c);
  FUN_005c07f4(auStack_41c,uStack00000038,auStack_41c,auStack_61c);
  FUN_005b7274(iStack00000040 + 0x80,auStack_61c);
  FUN_005c07f4(auStack_21c,uStack00000038,auStack_21c,auStack_61c);
  iVar1 = FUN_005c1118(auStack_21c,auStack_41c);
  if (iVar1 == 0) {
    memcpy(pvStack00000030,auStack_41c,0x200);
    FUN_005c1338(auStack_21c,auStack_41c);
    FUN_005b7274(iStack00000040 + 0x280,auStack_41c);
    FUN_005b7274(iStack00000040 + 0x80,auStack_61c);
    FUN_005c13d0(auStack_21c,auStack_21c,auStack_41c);
    FUN_005c0ed4(auStack_21c,auStack_61c);
    FUN_005b7274(iStack00000040,auStack_61c);
    FUN_005c13d0(auStack_21c,auStack_21c,auStack_61c);
    FUN_005c1300(pvStack00000030,auStack_21c);
  }
  else {
    memcpy(pvStack00000030,auStack_21c,0x200);
    FUN_005c1338(auStack_41c,auStack_21c);
    FUN_005b7274(iStack00000040 + 0x200,auStack_21c);
    FUN_005b7274(iStack00000040,auStack_61c);
    FUN_005c13d0(auStack_41c,auStack_41c,auStack_21c);
    FUN_005c0ed4(auStack_41c,auStack_61c);
    FUN_005b7274(iStack00000040 + 0x80,auStack_61c);
    FUN_005c13d0(auStack_41c,auStack_41c,auStack_61c);
    FUN_005c1300(pvStack00000030,auStack_41c);
  }
  return;
}


// 0x05b7b4c (0x480 bytes)
void * FUN_005b7b4c(void *param_1,void *param_2)

{
  uint uVar1;
  int iVar2;
  void *pvVar3;
  void *pvStack00000030;
  void *pvStack00000038;
  GPiece<512> auStack_818;
  GPiece<512> auStack_618;
  GPiece<512> auStack_418;
  GPiece<528> auStack_218;
  
  pvStack00000030 = param_1;
  pvStack00000038 = param_2;
  uVar1 = FUN_005c1378(param_1);
  FUN_005beb7c(pvStack00000030,auStack_418);
  FUN_005bdf90(auStack_218,0);
  FUN_005be33c(auStack_218,uVar1 >> 1);
  while( true ) {
    while( true ) {
      memcpy(auStack_818,pvStack00000030,0x200);
      FUN_005c13d0(auStack_618,auStack_218,auStack_218);
      iVar2 = FUN_005c1118(auStack_618,auStack_818);
      if (iVar2 != 0) break;
      FUN_005c1338(auStack_618,auStack_818);
      FUN_005c13d0(auStack_818,auStack_218,auStack_418);
      FUN_005c11f0(auStack_818,0x800);
      FUN_005c1300(auStack_818,auStack_218);
      FUN_005c13d0(auStack_818,auStack_818,auStack_618);
      FUN_005c11f0(auStack_818,uVar1 + 1);
      iVar2 = FUN_005be064(auStack_818);
      if (iVar2 != 0) goto LAB_005b7ed0;
      FUN_005c1338(auStack_218,auStack_818);
    }
    FUN_005c1338(auStack_818,auStack_618);
    FUN_005c13d0(auStack_618,auStack_218,auStack_418);
    FUN_005c11f0(auStack_618,0x800);
    FUN_005c1300(auStack_618,auStack_218);
    FUN_005c13d0(auStack_618,auStack_618,auStack_818);
    FUN_005c11f0(auStack_618,uVar1 + 1);
    iVar2 = FUN_005be064(auStack_618);
    if (iVar2 != 0) break;
    FUN_005c1300(auStack_218,auStack_618);
  }
  FUN_005be478(auStack_218,1);
LAB_005b7ed0:
  FUN_005c13d0(auStack_618,auStack_218,auStack_218);
  while (iVar2 = FUN_005c10d0(auStack_618,pvStack00000030), iVar2 != 0) {
    FUN_005c1338(auStack_618,auStack_218);
    FUN_005be554(auStack_218,1);
    FUN_005c1338(auStack_618,auStack_218);
  }
  pvVar3 = memcpy(pvStack00000038,auStack_218,0x200);
  return pvVar3;
}


// 0x05b7fcc (0x154 bytes)
void FUN_005b7fcc(undefined4 param_1,undefined4 param_2,undefined4 param_3,void *param_4,
                 undefined4 param_5)

{
  undefined4 uStack00000030;
  undefined4 uStack00000038;
  undefined4 uStack00000040;
  void *pvStack00000048;
  undefined4 uStack00000050;
  GPiece<512> auStack_410;
  GPiece<520> auStack_210;
  
  uStack00000030 = param_1;
  uStack00000038 = param_2;
  uStack00000040 = param_3;
  pvStack00000048 = param_4;
  uStack00000050 = param_5;
  FUN_005c13d0(auStack_210,param_2,param_3);
  memcpy(pvStack00000048,auStack_210,0x200);
  FUN_005c1338(auStack_210,uStack00000038);
  FUN_005c1338(auStack_210,uStack00000040);
  FUN_005be478(auStack_210,1);
  FUN_005bdf90(auStack_410,uStack00000030);
  FUN_005bf0e8(auStack_410,auStack_210,uStack00000050);
  return;
}


// 0x05b8120 (0x60c bytes)
void FUN_005b8120(undefined4 param_1,void *param_2,undefined4 param_3,void *param_4,void *param_5)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 uStack00000030;
  void *pvStack00000038;
  undefined4 uStack00000040;
  void *pvStack00000048;
  void *pvStack00000050;
  uint local_820;
  GPiece<512> auStack_818;
  GPiece<512> auStack_618;
  GPiece<512> auStack_418;
  GPiece<528> auStack_218;
  
  uStack00000030 = param_1;
  pvStack00000038 = param_2;
  uStack00000040 = param_3;
  pvStack00000048 = param_4;
  pvStack00000050 = param_5;
  FUN_005bdf90(auStack_818,param_1);
  FUN_005c13d0(auStack_818,auStack_818,uStack00000040);
  FUN_005be554(auStack_818,1);
  uVar1 = FUN_005c1378(pvStack00000038);
  local_820 = FUN_005c1378(auStack_818);
  FUN_005beb7c(pvStack00000038,auStack_218);
  memcpy(auStack_418,auStack_818,0x200);
  if (local_820 < 0x801) {
    local_820 = 0x800;
  }
  else {
    FUN_005c11f0(auStack_418,local_820 - 0x800);
  }
  FUN_005c13d0(auStack_618,auStack_418,auStack_218);
  FUN_005c11f0(auStack_618,0x1000 - local_820);
  FUN_005c1300(auStack_618,auStack_818);
  FUN_005c11f0(auStack_618,uVar1);
  FUN_005c13d0(auStack_218,auStack_618,pvStack00000038);
  while (iVar2 = FUN_005c10d0(auStack_218,auStack_818), iVar2 != 0) {
    FUN_005c1338(auStack_218,pvStack00000038);
    FUN_005be554(auStack_618,1);
  }
  while (iVar2 = FUN_005c1160(auStack_218,auStack_818), iVar2 != 0) {
    FUN_005c1300(auStack_218,pvStack00000038);
    FUN_005be478(auStack_618,1);
  }
  FUN_005beb7c(auStack_618,auStack_218);
  uVar1 = FUN_005c1378(auStack_618);
  FUN_005c13d0(auStack_218,auStack_418,auStack_218);
  FUN_005c11f0(auStack_218,0x1000 - local_820);
  FUN_005c1300(auStack_218,auStack_818);
  FUN_005c11f0(auStack_218,uVar1);
  FUN_005c13d0(auStack_418,auStack_218,auStack_618);
  while (iVar2 = FUN_005c1118(auStack_418,auStack_818), iVar2 != 0) {
    FUN_005be478(auStack_218,1);
    FUN_005c1300(auStack_418,auStack_618);
  }
  FUN_005be1e0(auStack_418,auStack_818);
  memcpy(auStack_818,pvStack00000038,0x200);
  FUN_005c1338(auStack_818,auStack_218);
  FUN_005be478(auStack_818,1);
  FUN_005c11f0(auStack_818,1);
  FUN_005c13d0(auStack_618,auStack_818,auStack_818);
  FUN_005c1338(auStack_618,pvStack00000038);
  FUN_005b7b4c(auStack_618,auStack_218);
  memcpy(pvStack00000048,auStack_818,0x200);
  memcpy(pvStack00000050,auStack_818,0x200);
  FUN_005c1300(pvStack00000048,auStack_218);
  FUN_005c1338(pvStack00000050,auStack_218);
  return;
}


// 0x05b872c (0x290 bytes)
undefined * FUN_005b872c(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  undefined4 uStack00000030;
  undefined4 uStack00000038;
  undefined4 uStack00000040;
  uint local_630;
  GPiece<512> auStack_62c;
  GPiece<512> auStack_42c;
  GPiece<548> auStack_22c;
  
  local_630 = 0;
  uStack00000030 = param_1;
  uStack00000038 = param_2;
  uStack00000040 = param_3;
  while( true ) {
    if (3 < local_630) {
      FUN_005b732c(uStack00000038,
                   PTR_DAT_0071c1a0 +
                   *(uint *)PTR_DAT_0071c1a4 * 0x400 +
                   (*(uint *)PTR_DAT_0071c1a4 & 0xffffff) * -0x100);
      *(uint *)PTR_DAT_0071c1a4 = *(int *)PTR_DAT_0071c1a4 + 1U & 3;
      return (undefined *)0x0;
    }
    FUN_005b7274(PTR_DAT_0071c1a0 + local_630 * 0x400 + (local_630 & 0xffffff) * -0x100,auStack_62c)
    ;
    FUN_005b7274(PTR_DAT_0071c1a0 + local_630 * 0x400 + (local_630 & 0xffffff) * -0x100 + 0x80,
                 auStack_42c);
    FUN_005c13d0(auStack_22c,auStack_62c,auStack_42c);
    iVar1 = FUN_005be1e0(auStack_22c,uStack00000038);
    if (iVar1 != 0) break;
    iVar1 = FUN_005b73ac(PTR_DAT_0071c1a0 + local_630 * 0x400 + (local_630 & 0xffffff) * -0x100,
                         uStack00000038);
    if (iVar1 != 0) {
      FUN_005b8120(uStack00000030,uStack00000038,uStack00000040,auStack_62c,auStack_42c);
      FUN_005b7454(uStack00000030,auStack_62c,auStack_42c,
                   PTR_DAT_0071c1a0 + local_630 * 0x400 + (local_630 & 0xffffff) * -0x100);
      return PTR_DAT_0071c1a0 +
             ((int)(((ulonglong)local_630 & 0xffffff) << 10) -
             (int)(((ulonglong)local_630 & 0xffffff) << 8));
    }
    local_630 = local_630 + 1;
  }
  return PTR_DAT_0071c1a0 +
         ((int)(((ulonglong)local_630 & 0xffffff) << 10) -
         (int)(((ulonglong)local_630 & 0xffffff) << 8));
}


// 0x05b89bc (0x7c bytes)
void FUN_005b89bc(void *param_1)

{
  void *pvStack00000030;
  
  pvStack00000030 = param_1;
  memcpy(param_1,PTR_DAT_0071c1a8,0x60);
  FUN_005b9178((int)pvStack00000030 + 0x54);
  return;
}


// 0x05b8a38 (0x48c bytes)
void * FUN_005b8a38(undefined1 *param_1,undefined1 *param_2,uint param_3)

{
  undefined1 uVar1;
  undefined1 uVar2;
  undefined1 uVar3;
  uint uVar4;
  uint __n;
  void *pvVar5;
  undefined1 *puStack00000030;
  undefined1 *puStack00000038;
  uint uStack00000040;
  
  uVar4 = *(uint *)(param_1 + 0x58);
  *(uint *)(param_1 + 0x58) = param_3 * 8 + uVar4;
  if (*(uint *)(param_1 + 0x58) < uVar4) {
    *(int *)(param_1 + 0x5c) = *(int *)(param_1 + 0x5c) + 1;
  }
  *(uint *)(param_1 + 0x5c) = *(int *)(param_1 + 0x5c) + (param_3 >> 0x1d);
  uVar4 = uVar4 >> 3 & 0x3f;
  puStack00000030 = param_1;
  puStack00000038 = param_2;
  uStack00000040 = param_3;
  if (uVar4 != 0) {
    __n = 0x40 - uVar4;
    if (param_3 < __n) {
      pvVar5 = memcpy(param_1 + uVar4,param_2,param_3);
      return pvVar5;
    }
    memcpy(param_1 + uVar4,param_2,__n);
    FUN_005b91e0(puStack00000030,0x40,*(undefined4 *)(puStack00000030 + 0x54));
    FUN_005b9210(puStack00000030);
    puStack00000038 = puStack00000038 + __n;
    uStack00000040 = uStack00000040 - __n;
  }
  for (; 0x3f < uStack00000040; uStack00000040 = uStack00000040 - 0x40) {
    uVar1 = puStack00000038[1];
    uVar2 = puStack00000038[2];
    uVar3 = puStack00000038[3];
    *puStack00000030 = *puStack00000038;
    puStack00000030[1] = uVar1;
    puStack00000030[2] = uVar2;
    puStack00000030[3] = uVar3;
    uVar1 = puStack00000038[5];
    uVar2 = puStack00000038[6];
    uVar3 = puStack00000038[7];
    puStack00000030[4] = puStack00000038[4];
    puStack00000030[5] = uVar1;
    puStack00000030[6] = uVar2;
    puStack00000030[7] = uVar3;
    uVar1 = puStack00000038[9];
    uVar2 = puStack00000038[10];
    uVar3 = puStack00000038[0xb];
    puStack00000030[8] = puStack00000038[8];
    puStack00000030[9] = uVar1;
    puStack00000030[10] = uVar2;
    puStack00000030[0xb] = uVar3;
    uVar1 = puStack00000038[0xd];
    uVar2 = puStack00000038[0xe];
    uVar3 = puStack00000038[0xf];
    puStack00000030[0xc] = puStack00000038[0xc];
    puStack00000030[0xd] = uVar1;
    puStack00000030[0xe] = uVar2;
    puStack00000030[0xf] = uVar3;
    uVar1 = puStack00000038[0x11];
    uVar2 = puStack00000038[0x12];
    uVar3 = puStack00000038[0x13];
    puStack00000030[0x10] = puStack00000038[0x10];
    puStack00000030[0x11] = uVar1;
    puStack00000030[0x12] = uVar2;
    puStack00000030[0x13] = uVar3;
    uVar1 = puStack00000038[0x15];
    uVar2 = puStack00000038[0x16];
    uVar3 = puStack00000038[0x17];
    puStack00000030[0x14] = puStack00000038[0x14];
    puStack00000030[0x15] = uVar1;
    puStack00000030[0x16] = uVar2;
    puStack00000030[0x17] = uVar3;
    uVar1 = puStack00000038[0x19];
    uVar2 = puStack00000038[0x1a];
    uVar3 = puStack00000038[0x1b];
    puStack00000030[0x18] = puStack00000038[0x18];
    puStack00000030[0x19] = uVar1;
    puStack00000030[0x1a] = uVar2;
    puStack00000030[0x1b] = uVar3;
    uVar1 = puStack00000038[0x1d];
    uVar2 = puStack00000038[0x1e];
    uVar3 = puStack00000038[0x1f];
    puStack00000030[0x1c] = puStack00000038[0x1c];
    puStack00000030[0x1d] = uVar1;
    puStack00000030[0x1e] = uVar2;
    puStack00000030[0x1f] = uVar3;
    uVar1 = puStack00000038[0x21];
    uVar2 = puStack00000038[0x22];
    uVar3 = puStack00000038[0x23];
    puStack00000030[0x20] = puStack00000038[0x20];
    puStack00000030[0x21] = uVar1;
    puStack00000030[0x22] = uVar2;
    puStack00000030[0x23] = uVar3;
    uVar1 = puStack00000038[0x25];
    uVar2 = puStack00000038[0x26];
    uVar3 = puStack00000038[0x27];
    puStack00000030[0x24] = puStack00000038[0x24];
    puStack00000030[0x25] = uVar1;
    puStack00000030[0x26] = uVar2;
    puStack00000030[0x27] = uVar3;
    uVar1 = puStack00000038[0x29];
    uVar2 = puStack00000038[0x2a];
    uVar3 = puStack00000038[0x2b];
    puStack00000030[0x28] = puStack00000038[0x28];
    puStack00000030[0x29] = uVar1;
    puStack00000030[0x2a] = uVar2;
    puStack00000030[0x2b] = uVar3;
    uVar1 = puStack00000038[0x2d];
    uVar2 = puStack00000038[0x2e];
    uVar3 = puStack00000038[0x2f];
    puStack00000030[0x2c] = puStack00000038[0x2c];
    puStack00000030[0x2d] = uVar1;
    puStack00000030[0x2e] = uVar2;
    puStack00000030[0x2f] = uVar3;
    uVar1 = puStack00000038[0x31];
    uVar2 = puStack00000038[0x32];
    uVar3 = puStack00000038[0x33];
    puStack00000030[0x30] = puStack00000038[0x30];
    puStack00000030[0x31] = uVar1;
    puStack00000030[0x32] = uVar2;
    puStack00000030[0x33] = uVar3;
    uVar1 = puStack00000038[0x35];
    uVar2 = puStack00000038[0x36];
    uVar3 = puStack00000038[0x37];
    puStack00000030[0x34] = puStack00000038[0x34];
    puStack00000030[0x35] = uVar1;
    puStack00000030[0x36] = uVar2;
    puStack00000030[0x37] = uVar3;
    uVar1 = puStack00000038[0x39];
    uVar2 = puStack00000038[0x3a];
    uVar3 = puStack00000038[0x3b];
    puStack00000030[0x38] = puStack00000038[0x38];
    puStack00000030[0x39] = uVar1;
    puStack00000030[0x3a] = uVar2;
    puStack00000030[0x3b] = uVar3;
    uVar1 = puStack00000038[0x3d];
    uVar2 = puStack00000038[0x3e];
    uVar3 = puStack00000038[0x3f];
    puStack00000030[0x3c] = puStack00000038[0x3c];
    puStack00000030[0x3d] = uVar1;
    puStack00000030[0x3e] = uVar2;
    puStack00000030[0x3f] = uVar3;
    FUN_005b91e0(puStack00000030,0x40,*(undefined4 *)(puStack00000030 + 0x54));
    FUN_005b9210(puStack00000030);
    puStack00000038 = puStack00000038 + 0x40;
  }
  pvVar5 = memcpy(puStack00000030,puStack00000038,uStack00000040);
  return pvVar5;
}


// 0x05b8ec4 (0x2b4 bytes)
void FUN_005b8ec4(undefined4 *param_1,int param_2,uint param_3)

{
  int iVar1;
  uint uVar2;
  undefined1 *puVar3;
  int iVar4;
  undefined4 *puStack00000030;
  int iStack00000038;
  uint uStack00000040;
  
  uVar2 = (int)param_1[0x16] >> 3 & 0x3f;
  puVar3 = (undefined1 *)((int)param_1 + uVar2);
  *puVar3 = 0x80;
  puVar3 = puVar3 + 1;
  iVar1 = -uVar2;
  iVar4 = iVar1 + 0x3f;
  puStack00000030 = param_1;
  iStack00000038 = param_2;
  uStack00000040 = param_3;
  if (iVar4 < 8) {
    memset(puVar3,0,iVar4);
    FUN_005b91e0(puStack00000030,0x40,puStack00000030[0x15]);
    FUN_005b9210(puStack00000030);
    *puStack00000030 = 0;
    puStack00000030[1] = 0;
    puStack00000030[2] = 0;
    puStack00000030[3] = 0;
    puStack00000030[4] = 0;
    puStack00000030[5] = 0;
    puStack00000030[6] = 0;
    puStack00000030[7] = 0;
    puStack00000030[8] = 0;
    puStack00000030[9] = 0;
    puStack00000030[10] = 0;
    puStack00000030[0xb] = 0;
    puStack00000030[0xc] = 0;
    puStack00000030[0xd] = 0;
  }
  else {
    memset(puVar3,0,iVar1 + 0x37);
  }
  puStack00000030[0xe] = puStack00000030[0x17];
  puStack00000030[0xf] = puStack00000030[0x16];
  FUN_005b91e0(puStack00000030,0x38,puStack00000030[0x15]);
  FUN_005b9210(puStack00000030);
  if (0x14 < uStack00000040) {
    memset(iStack00000038 + 0x14,0,uStack00000040 - 0x14);
    uStack00000040 = 0x14;
  }
  FUN_005b91e8(iStack00000038,puStack00000030 + 0x10,uStack00000040);
  *puStack00000030 = 0;
  return;
}


// 0x05b9178 (0x68 bytes)
void FUN_005b9178(undefined4 *param_1)

{
  if (*(ushort *)PTR_DAT_0071c1ac >> 8 == 0x23) {
    *param_1 = 1;
  }
  else {
    *param_1 = 0;
  }
  return;
}


// 0x05b91e0 (0x4 bytes)
void FUN_005b91e0(void)

{
  return;
}


// 0x05b91e8 (0x20 bytes)
void FUN_005b91e8(int param_1,int param_2,uint param_3)

{
  uint uVar1;
  
  uVar1 = 0;
  do {
    *(undefined4 *)(uVar1 + param_1) = *(undefined4 *)(uVar1 + param_2);
    uVar1 = uVar1 + 4;
  } while (uVar1 < param_3);
  return;
}


// 0x05b9210 (0xe2c bytes)
undefined8 FUN_005b9210(int param_1)

{
  uint uVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  int iVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  uint local_40 [4];
  uint local_30;
  uint local_2c;
  uint local_28;
  uint local_24;
  uint local_20;
  uint local_1c;
  uint local_18;
  uint local_14;
  uint local_10;
  uint local_c;
  uint local_8;
  uint local_4;
  
  uVar14 = *(uint *)(param_1 + 0x40);
  uVar11 = *(uint *)(param_1 + 0x44);
  uVar12 = *(uint *)(param_1 + 0x48);
  uVar4 = (ulonglong)uVar12;
  uVar13 = *(uint *)(param_1 + 0x4c);
  uVar1 = *(uint *)(param_1 + 0x50);
  iVar10 = 0;
  do {
    *(undefined4 *)((int)local_40 + iVar10) = *(undefined4 *)(iVar10 + param_1);
    iVar10 = iVar10 + 4;
  } while (iVar10 < 0x40);
  uVar3 = ((ulonglong)uVar11 & 3) << 0x1e | (ulonglong)(uVar11 >> 2);
  uVar7 = (ulonglong)uVar1 + 0x5a827999 + (ulonglong)((uVar12 ^ uVar13) & uVar11 ^ uVar13) +
          (((ulonglong)uVar14 & 0x7ffffff) << 5 | (ulonglong)(uVar14 >> 0x1b));
  uVar2 = ((ulonglong)uVar14 & 3) << 0x1e | (ulonglong)(uVar14 >> 2);
  uVar5 = (ulonglong)uVar13 + ZEXT48(&stack0x00000000) + 0x5a827999 +
          ((uVar3 ^ uVar4) & (ulonglong)uVar14 ^ uVar4) +
          ((uVar7 & 0x7ffffff) << 5 | (uVar7 << 0x20) >> 0x3b);
  uVar8 = (uVar7 & 3) << 0x1e | (uVar7 << 0x20) >> 0x22;
  uVar4 = uVar4 + local_40[2] + 0x5a827999 + ((uVar2 ^ uVar3) & uVar7 ^ uVar3) +
          ((uVar5 & 0x7ffffff) << 5 | (uVar5 << 0x20) >> 0x3b);
  uVar6 = (uVar5 & 3) << 0x1e | (uVar5 << 0x20) >> 0x22;
  uVar3 = uVar3 + local_40[3] + 0x5a827999 + ((uVar8 ^ uVar2) & uVar5 ^ uVar2) +
          ((uVar4 & 0x7ffffff) << 5 | (uVar4 << 0x20) >> 0x3b);
  uVar7 = (uVar4 & 3) << 0x1e | (uVar4 << 0x20) >> 0x22;
  uVar4 = uVar2 + local_30 + 0x5a827999 + ((uVar6 ^ uVar8) & uVar4 ^ uVar8) +
          ((uVar3 & 0x7ffffff) << 5 | (uVar3 << 0x20) >> 0x3b);
  uVar5 = (uVar3 & 3) << 0x1e | (uVar3 << 0x20) >> 0x22;
  uVar8 = uVar8 + local_2c + 0x5a827999 + ((uVar7 ^ uVar6) & uVar3 ^ uVar6) +
          ((uVar4 & 0x7ffffff) << 5 | (uVar4 << 0x20) >> 0x3b);
  uVar2 = (uVar4 & 3) << 0x1e | (uVar4 << 0x20) >> 0x22;
  uVar3 = uVar6 + local_28 + 0x5a827999 + ((uVar5 ^ uVar7) & uVar4 ^ uVar7) +
          ((uVar8 & 0x7ffffff) << 5 | (uVar8 << 0x20) >> 0x3b);
  uVar9 = (uVar8 & 3) << 0x1e | (uVar8 << 0x20) >> 0x22;
  uVar4 = uVar7 + local_24 + 0x5a827999 + ((uVar2 ^ uVar5) & uVar8 ^ uVar5) +
          ((uVar3 & 0x7ffffff) << 5 | (uVar3 << 0x20) >> 0x3b);
  uVar6 = (uVar3 & 3) << 0x1e | (uVar3 << 0x20) >> 0x22;
  uVar3 = uVar5 + local_20 + 0x5a827999 + ((uVar9 ^ uVar2) & uVar3 ^ uVar2) +
          ((uVar4 & 0x7ffffff) << 5 | (uVar4 << 0x20) >> 0x3b);
  uVar7 = (uVar4 & 3) << 0x1e | (uVar4 << 0x20) >> 0x22;
  uVar4 = uVar2 + local_1c + 0x5a827999 + ((uVar6 ^ uVar9) & uVar4 ^ uVar9) +
          ((uVar3 & 0x7ffffff) << 5 | (uVar3 << 0x20) >> 0x3b);
  uVar5 = (uVar3 & 3) << 0x1e | (uVar3 << 0x20) >> 0x22;
  uVar8 = uVar9 + local_18 + 0x5a827999 + ((uVar7 ^ uVar6) & uVar3 ^ uVar6) +
          ((uVar4 & 0x7ffffff) << 5 | (uVar4 << 0x20) >> 0x3b);
  uVar2 = (uVar4 & 3) << 0x1e | (uVar4 << 0x20) >> 0x22;
  uVar3 = uVar6 + local_14 + 0x5a827999 + ((uVar5 ^ uVar7) & uVar4 ^ uVar7) +
          ((uVar8 & 0x7ffffff) << 5 | (uVar8 << 0x20) >> 0x3b);
  uVar6 = (uVar8 & 3) << 0x1e | (uVar8 << 0x20) >> 0x22;
  uVar4 = uVar7 + local_10 + 0x5a827999 + ((uVar2 ^ uVar5) & uVar8 ^ uVar5) +
          ((uVar3 & 0x7ffffff) << 5 | (uVar3 << 0x20) >> 0x3b);
  uVar7 = (uVar3 & 3) << 0x1e | (uVar3 << 0x20) >> 0x22;
  uVar3 = uVar5 + local_c + 0x5a827999 + ((uVar6 ^ uVar2) & uVar3 ^ uVar2) +
          ((uVar4 & 0x7ffffff) << 5 | (uVar4 << 0x20) >> 0x3b);
  uVar5 = (uVar4 & 3) << 0x1e | (uVar4 << 0x20) >> 0x22;
  uVar4 = uVar2 + local_8 + 0x5a827999 + ((uVar7 ^ uVar6) & uVar4 ^ uVar6) +
          ((uVar3 & 0x7ffffff) << 5 | (uVar3 << 0x20) >> 0x3b);
  uVar2 = (uVar3 & 3) << 0x1e | (uVar3 << 0x20) >> 0x22;
  uVar3 = uVar6 + local_4 + 0x5a827999 + ((uVar5 ^ uVar7) & uVar3 ^ uVar7) +
          ((uVar4 & 0x7ffffff) << 5 | (uVar4 << 0x20) >> 0x3b);
  uVar14 = 0;
  do {
    uVar11 = uVar14 + 8 & 0x3f;
    uVar12 = uVar11 + 0x18 & 0x3f;
    uVar13 = uVar12 + 0x14 & 0x3f;
    uVar11 = *(uint *)((int)local_40 + uVar14) ^ *(uint *)((int)local_40 + uVar11) ^
             *(uint *)((int)local_40 + uVar12) ^ *(uint *)((int)local_40 + uVar13);
    uVar14 = uVar13 + 0xc & 0x3f;
    *(uint *)((int)local_40 + uVar14) = uVar11 << 1 | uVar11 >> 0x1f;
    uVar14 = uVar14 + 4;
  } while (uVar14 < 0x40);
  uVar6 = (uVar4 & 3) << 0x1e | (uVar4 << 0x20) >> 0x22;
  uVar7 = uVar7 + 0x5a827999 + ((uVar2 ^ uVar5) & uVar4 ^ uVar5) +
          ((uVar3 & 0x7ffffff) << 5 | (uVar3 << 0x20) >> 0x3b);
  uVar9 = (uVar3 & 3) << 0x1e | (uVar3 << 0x20) >> 0x22;
  uVar4 = uVar5 + ZEXT48(&stack0x00000000) + 0x5a827999 + ((uVar6 ^ uVar2) & uVar3 ^ uVar2) +
          ((uVar7 & 0x7ffffff) << 5 | (uVar7 << 0x20) >> 0x3b);
  uVar8 = (uVar7 & 3) << 0x1e | (uVar7 << 0x20) >> 0x22;
  uVar2 = uVar2 + local_40[2] + 0x5a827999 + ((uVar9 ^ uVar6) & uVar7 ^ uVar6) +
          ((uVar4 & 0x7ffffff) << 5 | (uVar4 << 0x20) >> 0x3b);
  uVar5 = (uVar4 & 3) << 0x1e | (uVar4 << 0x20) >> 0x22;
  uVar4 = uVar6 + local_40[3] + 0x5a827999 + ((uVar8 ^ uVar9) & uVar4 ^ uVar9) +
          ((uVar2 & 0x7ffffff) << 5 | (uVar2 << 0x20) >> 0x3b);
  uVar3 = (uVar2 & 3) << 0x1e | (uVar2 << 0x20) >> 0x22;
  uVar6 = uVar9 + local_30 + 0x6ed9eba1 + (uVar5 ^ uVar8 ^ uVar2) +
          ((uVar4 & 0x7ffffff) << 5 | (uVar4 << 0x20) >> 0x3b);
  uVar2 = (uVar4 & 3) << 0x1e | (uVar4 << 0x20) >> 0x22;
  uVar7 = uVar8 + local_2c + 0x6ed9eba1 + (uVar3 ^ uVar5 ^ uVar4) +
          ((uVar6 & 0x7ffffff) << 5 | (uVar6 << 0x20) >> 0x3b);
  uVar8 = (uVar6 & 3) << 0x1e | (uVar6 << 0x20) >> 0x22;
  uVar4 = uVar5 + local_28 + 0x6ed9eba1 + (uVar2 ^ uVar3 ^ uVar6) +
          ((uVar7 & 0x7ffffff) << 5 | (uVar7 << 0x20) >> 0x3b);
  uVar6 = (uVar7 & 3) << 0x1e | (uVar7 << 0x20) >> 0x22;
  uVar3 = uVar3 + local_24 + 0x6ed9eba1 + (uVar8 ^ uVar2 ^ uVar7) +
          ((uVar4 & 0x7ffffff) << 5 | (uVar4 << 0x20) >> 0x3b);
  uVar7 = (uVar4 & 3) << 0x1e | (uVar4 << 0x20) >> 0x22;
  uVar4 = uVar2 + local_20 + 0x6ed9eba1 + (uVar6 ^ uVar8 ^ uVar4) +
          ((uVar3 & 0x7ffffff) << 5 | (uVar3 << 0x20) >> 0x3b);
  uVar5 = (uVar3 & 3) << 0x1e | (uVar3 << 0x20) >> 0x22;
  uVar8 = uVar8 + local_1c + 0x6ed9eba1 + (uVar7 ^ uVar6 ^ uVar3) +
          ((uVar4 & 0x7ffffff) << 5 | (uVar4 << 0x20) >> 0x3b);
  uVar2 = (uVar4 & 3) << 0x1e | (uVar4 << 0x20) >> 0x22;
  uVar3 = uVar6 + local_18 + 0x6ed9eba1 + (uVar5 ^ uVar7 ^ uVar4) +
          ((uVar8 & 0x7ffffff) << 5 | (uVar8 << 0x20) >> 0x3b);
  uVar9 = (uVar8 & 3) << 0x1e | (uVar8 << 0x20) >> 0x22;
  uVar4 = uVar7 + local_14 + 0x6ed9eba1 + (uVar2 ^ uVar5 ^ uVar8) +
          ((uVar3 & 0x7ffffff) << 5 | (uVar3 << 0x20) >> 0x3b);
  uVar6 = (uVar3 & 3) << 0x1e | (uVar3 << 0x20) >> 0x22;
  uVar3 = uVar5 + local_10 + 0x6ed9eba1 + (uVar9 ^ uVar2 ^ uVar3) +
          ((uVar4 & 0x7ffffff) << 5 | (uVar4 << 0x20) >> 0x3b);
  uVar7 = (uVar4 & 3) << 0x1e | (uVar4 << 0x20) >> 0x22;
  uVar4 = uVar2 + local_c + 0x6ed9eba1 + (uVar6 ^ uVar9 ^ uVar4) +
          ((uVar3 & 0x7ffffff) << 5 | (uVar3 << 0x20) >> 0x3b);
  uVar5 = (uVar3 & 3) << 0x1e | (uVar3 << 0x20) >> 0x22;
  uVar3 = uVar9 + local_8 + 0x6ed9eba1 + (uVar7 ^ uVar6 ^ uVar3) +
          ((uVar4 & 0x7ffffff) << 5 | (uVar4 << 0x20) >> 0x3b);
  uVar2 = (uVar4 & 3) << 0x1e | (uVar4 << 0x20) >> 0x22;
  uVar4 = uVar6 + local_4 + 0x6ed9eba1 + (uVar5 ^ uVar7 ^ uVar4) +
          ((uVar3 & 0x7ffffff) << 5 | (uVar3 << 0x20) >> 0x3b);
  uVar14 = 0;
  do {
    uVar11 = uVar14 + 8 & 0x3f;
    uVar12 = uVar11 + 0x18 & 0x3f;
    uVar13 = uVar12 + 0x14 & 0x3f;
    uVar11 = *(uint *)((int)local_40 + uVar14) ^ *(uint *)((int)local_40 + uVar11) ^
             *(uint *)((int)local_40 + uVar12) ^ *(uint *)((int)local_40 + uVar13);
    uVar14 = uVar13 + 0xc & 0x3f;
    *(uint *)((int)local_40 + uVar14) = uVar11 << 1 | uVar11 >> 0x1f;
    uVar14 = uVar14 + 4;
  } while (uVar14 < 0x40);
  uVar9 = (uVar3 & 3) << 0x1e | (uVar3 << 0x20) >> 0x22;
  uVar7 = uVar7 + 0x6ed9eba1 + (uVar2 ^ uVar5 ^ uVar3) +
          ((uVar4 & 0x7ffffff) << 5 | (uVar4 << 0x20) >> 0x3b);
  uVar8 = (uVar4 & 3) << 0x1e | (uVar4 << 0x20) >> 0x22;
  uVar3 = uVar5 + ZEXT48(&stack0x00000000) + 0x6ed9eba1 + (uVar9 ^ uVar2 ^ uVar4) +
          ((uVar7 & 0x7ffffff) << 5 | (uVar7 << 0x20) >> 0x3b);
  uVar6 = (uVar7 & 3) << 0x1e | (uVar7 << 0x20) >> 0x22;
  uVar4 = uVar2 + local_40[2] + 0x6ed9eba1 + (uVar8 ^ uVar9 ^ uVar7) +
          ((uVar3 & 0x7ffffff) << 5 | (uVar3 << 0x20) >> 0x3b);
  uVar5 = (uVar3 & 3) << 0x1e | (uVar3 << 0x20) >> 0x22;
  uVar7 = uVar9 + local_40[3] + 0x6ed9eba1 + (uVar6 ^ uVar8 ^ uVar3) +
          ((uVar4 & 0x7ffffff) << 5 | (uVar4 << 0x20) >> 0x3b);
  uVar2 = (uVar4 & 3) << 0x1e | (uVar4 << 0x20) >> 0x22;
  uVar3 = uVar8 + local_30 + 0x6ed9eba1 + (uVar5 ^ uVar6 ^ uVar4) +
          ((uVar7 & 0x7ffffff) << 5 | (uVar7 << 0x20) >> 0x3b);
  uVar8 = (uVar7 & 3) << 0x1e | (uVar7 << 0x20) >> 0x22;
  uVar4 = uVar6 + local_2c + 0x6ed9eba1 + (uVar2 ^ uVar5 ^ uVar7) +
          ((uVar3 & 0x7ffffff) << 5 | (uVar3 << 0x20) >> 0x3b);
  uVar6 = (uVar3 & 3) << 0x1e | (uVar3 << 0x20) >> 0x22;
  uVar3 = uVar5 + local_28 + 0x6ed9eba1 + (uVar8 ^ uVar2 ^ uVar3) +
          ((uVar4 & 0x7ffffff) << 5 | (uVar4 << 0x20) >> 0x3b);
  uVar7 = (uVar4 & 3) << 0x1e | (uVar4 << 0x20) >> 0x22;
  uVar4 = uVar2 + local_24 + 0x6ed9eba1 + (uVar6 ^ uVar8 ^ uVar4) +
          ((uVar3 & 0x7ffffff) << 5 | (uVar3 << 0x20) >> 0x3b);
  uVar5 = (uVar3 & 3) << 0x1e | (uVar3 << 0x20) >> 0x22;
  uVar8 = uVar8 + local_20 + -0x70e44324 + ((uVar3 ^ uVar7) & uVar6 | uVar3 & uVar7) +
          ((uVar4 & 0x7ffffff) << 5 | (uVar4 << 0x20) >> 0x3b);
  uVar2 = (uVar4 & 3) << 0x1e | (uVar4 << 0x20) >> 0x22;
  uVar3 = uVar6 + local_1c + -0x70e44324 + ((uVar4 ^ uVar5) & uVar7 | uVar4 & uVar5) +
          ((uVar8 & 0x7ffffff) << 5 | (uVar8 << 0x20) >> 0x3b);
  uVar9 = (uVar8 & 3) << 0x1e | (uVar8 << 0x20) >> 0x22;
  uVar4 = uVar7 + local_18 + -0x70e44324 + ((uVar8 ^ uVar2) & uVar5 | uVar8 & uVar2) +
          ((uVar3 & 0x7ffffff) << 5 | (uVar3 << 0x20) >> 0x3b);
  uVar6 = (uVar3 & 3) << 0x1e | (uVar3 << 0x20) >> 0x22;
  uVar3 = uVar5 + local_14 + -0x70e44324 + ((uVar3 ^ uVar9) & uVar2 | uVar3 & uVar9) +
          ((uVar4 & 0x7ffffff) << 5 | (uVar4 << 0x20) >> 0x3b);
  uVar7 = (uVar4 & 3) << 0x1e | (uVar4 << 0x20) >> 0x22;
  uVar4 = uVar2 + local_10 + -0x70e44324 + ((uVar4 ^ uVar6) & uVar9 | uVar4 & uVar6) +
          ((uVar3 & 0x7ffffff) << 5 | (uVar3 << 0x20) >> 0x3b);
  uVar5 = (uVar3 & 3) << 0x1e | (uVar3 << 0x20) >> 0x22;
  uVar8 = uVar9 + local_c + -0x70e44324 + ((uVar3 ^ uVar7) & uVar6 | uVar3 & uVar7) +
          ((uVar4 & 0x7ffffff) << 5 | (uVar4 << 0x20) >> 0x3b);
  uVar2 = (uVar4 & 3) << 0x1e | (uVar4 << 0x20) >> 0x22;
  uVar3 = uVar6 + local_8 + -0x70e44324 + ((uVar4 ^ uVar5) & uVar7 | uVar4 & uVar5) +
          ((uVar8 & 0x7ffffff) << 5 | (uVar8 << 0x20) >> 0x3b);
  uVar6 = (uVar8 & 3) << 0x1e | (uVar8 << 0x20) >> 0x22;
  uVar4 = uVar7 + local_4 + -0x70e44324 + ((uVar8 ^ uVar2) & uVar5 | uVar8 & uVar2) +
          ((uVar3 & 0x7ffffff) << 5 | (uVar3 << 0x20) >> 0x3b);
  uVar14 = 0;
  do {
    uVar11 = uVar14 + 8 & 0x3f;
    uVar12 = uVar11 + 0x18 & 0x3f;
    uVar13 = uVar12 + 0x14 & 0x3f;
    uVar11 = *(uint *)((int)local_40 + uVar14) ^ *(uint *)((int)local_40 + uVar11) ^
             *(uint *)((int)local_40 + uVar12) ^ *(uint *)((int)local_40 + uVar13);
    uVar14 = uVar13 + 0xc & 0x3f;
    *(uint *)((int)local_40 + uVar14) = uVar11 << 1 | uVar11 >> 0x1f;
    uVar14 = uVar14 + 4;
  } while (uVar14 < 0x40);
  uVar8 = (uVar3 & 3) << 0x1e | (uVar3 << 0x20) >> 0x22;
  uVar3 = (uVar5 - 0x70e44324) + ((uVar3 ^ uVar6) & uVar2 | uVar3 & uVar6) +
          ((uVar4 & 0x7ffffff) << 5 | (uVar4 << 0x20) >> 0x3b);
  uVar7 = (uVar4 & 3) << 0x1e | (uVar4 << 0x20) >> 0x22;
  uVar4 = uVar2 + ZEXT48(&stack0x00000000) + -0x70e44324 + ((uVar4 ^ uVar8) & uVar6 | uVar4 & uVar8)
          + ((uVar3 & 0x7ffffff) << 5 | (uVar3 << 0x20) >> 0x3b);
  uVar5 = (uVar3 & 3) << 0x1e | (uVar3 << 0x20) >> 0x22;
  uVar6 = uVar6 + local_40[2] + -0x70e44324 + ((uVar3 ^ uVar7) & uVar8 | uVar3 & uVar7) +
          ((uVar4 & 0x7ffffff) << 5 | (uVar4 << 0x20) >> 0x3b);
  uVar2 = (uVar4 & 3) << 0x1e | (uVar4 << 0x20) >> 0x22;
  uVar3 = uVar8 + local_40[3] + -0x70e44324 + ((uVar4 ^ uVar5) & uVar7 | uVar4 & uVar5) +
          ((uVar6 & 0x7ffffff) << 5 | (uVar6 << 0x20) >> 0x3b);
  uVar8 = (uVar6 & 3) << 0x1e | (uVar6 << 0x20) >> 0x22;
  uVar4 = uVar7 + local_30 + -0x70e44324 + ((uVar6 ^ uVar2) & uVar5 | uVar6 & uVar2) +
          ((uVar3 & 0x7ffffff) << 5 | (uVar3 << 0x20) >> 0x3b);
  uVar6 = (uVar3 & 3) << 0x1e | (uVar3 << 0x20) >> 0x22;
  uVar3 = uVar5 + local_2c + -0x70e44324 + ((uVar3 ^ uVar8) & uVar2 | uVar3 & uVar8) +
          ((uVar4 & 0x7ffffff) << 5 | (uVar4 << 0x20) >> 0x3b);
  uVar7 = (uVar4 & 3) << 0x1e | (uVar4 << 0x20) >> 0x22;
  uVar4 = uVar2 + local_28 + -0x70e44324 + ((uVar4 ^ uVar6) & uVar8 | uVar4 & uVar6) +
          ((uVar3 & 0x7ffffff) << 5 | (uVar3 << 0x20) >> 0x3b);
  uVar5 = (uVar3 & 3) << 0x1e | (uVar3 << 0x20) >> 0x22;
  uVar8 = uVar8 + local_24 + -0x70e44324 + ((uVar3 ^ uVar7) & uVar6 | uVar3 & uVar7) +
          ((uVar4 & 0x7ffffff) << 5 | (uVar4 << 0x20) >> 0x3b);
  uVar2 = (uVar4 & 3) << 0x1e | (uVar4 << 0x20) >> 0x22;
  uVar3 = uVar6 + local_20 + -0x70e44324 + ((uVar4 ^ uVar5) & uVar7 | uVar4 & uVar5) +
          ((uVar8 & 0x7ffffff) << 5 | (uVar8 << 0x20) >> 0x3b);
  uVar9 = (uVar8 & 3) << 0x1e | (uVar8 << 0x20) >> 0x22;
  uVar4 = uVar7 + local_1c + -0x70e44324 + ((uVar8 ^ uVar2) & uVar5 | uVar8 & uVar2) +
          ((uVar3 & 0x7ffffff) << 5 | (uVar3 << 0x20) >> 0x3b);
  uVar6 = (uVar3 & 3) << 0x1e | (uVar3 << 0x20) >> 0x22;
  uVar3 = uVar5 + local_18 + -0x70e44324 + ((uVar3 ^ uVar9) & uVar2 | uVar3 & uVar9) +
          ((uVar4 & 0x7ffffff) << 5 | (uVar4 << 0x20) >> 0x3b);
  uVar7 = (uVar4 & 3) << 0x1e | (uVar4 << 0x20) >> 0x22;
  uVar4 = uVar2 + local_14 + -0x70e44324 + ((uVar4 ^ uVar6) & uVar9 | uVar4 & uVar6) +
          ((uVar3 & 0x7ffffff) << 5 | (uVar3 << 0x20) >> 0x3b);
  uVar5 = (uVar3 & 3) << 0x1e | (uVar3 << 0x20) >> 0x22;
  uVar3 = uVar9 + local_10 + -0x359d3e2a + (uVar7 ^ uVar6 ^ uVar3) +
          ((uVar4 & 0x7ffffff) << 5 | (uVar4 << 0x20) >> 0x3b);
  uVar2 = (uVar4 & 3) << 0x1e | (uVar4 << 0x20) >> 0x22;
  uVar4 = uVar6 + local_c + -0x359d3e2a + (uVar5 ^ uVar7 ^ uVar4) +
          ((uVar3 & 0x7ffffff) << 5 | (uVar3 << 0x20) >> 0x3b);
  uVar6 = (uVar3 & 3) << 0x1e | (uVar3 << 0x20) >> 0x22;
  uVar3 = uVar7 + local_8 + -0x359d3e2a + (uVar2 ^ uVar5 ^ uVar3) +
          ((uVar4 & 0x7ffffff) << 5 | (uVar4 << 0x20) >> 0x3b);
  uVar7 = (uVar4 & 3) << 0x1e | (uVar4 << 0x20) >> 0x22;
  uVar4 = uVar5 + local_4 + -0x359d3e2a + (uVar6 ^ uVar2 ^ uVar4) +
          ((uVar3 & 0x7ffffff) << 5 | (uVar3 << 0x20) >> 0x3b);
  uVar14 = 0;
  do {
    uVar11 = uVar14 + 8 & 0x3f;
    uVar12 = uVar11 + 0x18 & 0x3f;
    uVar13 = uVar12 + 0x14 & 0x3f;
    uVar11 = *(uint *)((int)local_40 + uVar14) ^ *(uint *)((int)local_40 + uVar11) ^
             *(uint *)((int)local_40 + uVar12) ^ *(uint *)((int)local_40 + uVar13);
    uVar14 = uVar13 + 0xc & 0x3f;
    *(uint *)((int)local_40 + uVar14) = uVar11 << 1 | uVar11 >> 0x1f;
    uVar14 = uVar14 + 4;
  } while (uVar14 < 0x40);
  uVar5 = (uVar3 & 3) << 0x1e | (uVar3 << 0x20) >> 0x22;
  uVar2 = (uVar2 - 0x359d3e2a) + (uVar7 ^ uVar6 ^ uVar3) +
          ((uVar4 & 0x7ffffff) << 5 | (uVar4 << 0x20) >> 0x3b);
  uVar3 = (uVar4 & 3) << 0x1e | (uVar4 << 0x20) >> 0x22;
  uVar6 = uVar6 + ZEXT48(&stack0x00000000) + -0x359d3e2a + (uVar5 ^ uVar7 ^ uVar4) +
          ((uVar2 & 0x7ffffff) << 5 | (uVar2 << 0x20) >> 0x3b);
  uVar4 = (uVar2 & 3) << 0x1e | (uVar2 << 0x20) >> 0x22;
  uVar2 = uVar7 + local_40[2] + -0x359d3e2a + (uVar3 ^ uVar5 ^ uVar2) +
          ((uVar6 & 0x7ffffff) << 5 | (uVar6 << 0x20) >> 0x3b);
  uVar8 = (uVar6 & 3) << 0x1e | (uVar6 << 0x20) >> 0x22;
  uVar5 = uVar5 + local_40[3] + -0x359d3e2a + (uVar4 ^ uVar3 ^ uVar6) +
          ((uVar2 & 0x7ffffff) << 5 | (uVar2 << 0x20) >> 0x3b);
  uVar6 = (uVar2 & 3) << 0x1e | (uVar2 << 0x20) >> 0x22;
  uVar2 = uVar3 + local_30 + -0x359d3e2a + (uVar8 ^ uVar4 ^ uVar2) +
          ((uVar5 & 0x7ffffff) << 5 | (uVar5 << 0x20) >> 0x3b);
  uVar7 = (uVar5 & 3) << 0x1e | (uVar5 << 0x20) >> 0x22;
  uVar4 = uVar4 + local_2c + -0x359d3e2a + (uVar6 ^ uVar8 ^ uVar5) +
          ((uVar2 & 0x7ffffff) << 5 | (uVar2 << 0x20) >> 0x3b);
  uVar3 = (uVar2 & 3) << 0x1e | (uVar2 << 0x20) >> 0x22;
  uVar5 = uVar8 + local_28 + -0x359d3e2a + (uVar7 ^ uVar6 ^ uVar2) +
          ((uVar4 & 0x7ffffff) << 5 | (uVar4 << 0x20) >> 0x3b);
  uVar2 = (uVar4 & 3) << 0x1e | (uVar4 << 0x20) >> 0x22;
  uVar4 = uVar6 + local_24 + -0x359d3e2a + (uVar3 ^ uVar7 ^ uVar4) +
          ((uVar5 & 0x7ffffff) << 5 | (uVar5 << 0x20) >> 0x3b);
  uVar9 = (uVar5 & 3) << 0x1e | (uVar5 << 0x20) >> 0x22;
  uVar5 = uVar7 + local_20 + -0x359d3e2a + (uVar2 ^ uVar3 ^ uVar5) +
          ((uVar4 & 0x7ffffff) << 5 | (uVar4 << 0x20) >> 0x3b);
  uVar8 = (uVar4 & 3) << 0x1e | (uVar4 << 0x20) >> 0x22;
  uVar4 = uVar3 + local_1c + -0x359d3e2a + (uVar9 ^ uVar2 ^ uVar4) +
          ((uVar5 & 0x7ffffff) << 5 | (uVar5 << 0x20) >> 0x3b);
  uVar6 = (uVar5 & 3) << 0x1e | (uVar5 << 0x20) >> 0x22;
  uVar3 = uVar2 + local_18 + -0x359d3e2a + (uVar8 ^ uVar9 ^ uVar5) +
          ((uVar4 & 0x7ffffff) << 5 | (uVar4 << 0x20) >> 0x3b);
  uVar7 = (uVar4 & 3) << 0x1e | (uVar4 << 0x20) >> 0x22;
  uVar9 = uVar9 + local_14 + -0x359d3e2a + (uVar6 ^ uVar8 ^ uVar4) +
          ((uVar3 & 0x7ffffff) << 5 | (uVar3 << 0x20) >> 0x3b);
  uVar4 = (uVar3 & 0xffffffff) << 0x1e;
  uVar5 = uVar4 & 0xffffffff | (uVar3 << 0x20) >> 0x22;
  uVar8 = uVar8 + local_10 + -0x359d3e2a + (uVar7 ^ uVar6 ^ uVar3) +
          ((uVar9 & 0x7ffffff) << 5 | (uVar9 << 0x20) >> 0x3b);
  uVar2 = (uVar9 & 0xffffffff) << 0x1e;
  uVar14 = (uint)uVar2 | (uint)uVar9 >> 2;
  uVar6 = uVar6 + local_c + -0x359d3e2a + (uVar5 ^ uVar7 ^ uVar9) +
          ((uVar8 & 0x7ffffff) << 5 | (uVar8 << 0x20) >> 0x3b);
  uVar11 = (uint)((uVar8 & 0xffffffff) << 0x1e) | (uint)uVar8 >> 2;
  uVar2 = uVar7 + local_8 + -0x359d3e2a +
          ((uVar2 & 0xffffffff | (uVar9 << 0x20) >> 0x22) ^ uVar5 ^ uVar8) +
          ((uVar6 & 0x7ffffff) << 5 | (uVar6 << 0x20) >> 0x3b);
  uVar12 = (uint)uVar2;
  *(uint *)(param_1 + 0x40) =
       *(int *)(param_1 + 0x40) +
       ((uint)uVar4 | (uint)uVar3 >> 2) + local_4 + -0x359d3e2a + (uVar11 ^ uVar14 ^ (uint)uVar6) +
       ((uint)((uVar2 & 0xffffffff) << 5) | uVar12 >> 0x1b);
  *(uint *)(param_1 + 0x44) = *(int *)(param_1 + 0x44) + uVar12;
  *(uint *)(param_1 + 0x48) =
       *(int *)(param_1 + 0x48) + ((uint)((uVar6 & 0xffffffff) << 0x1e) | (uint)uVar6 >> 2);
  *(uint *)(param_1 + 0x4c) = *(int *)(param_1 + 0x4c) + uVar11;
  *(uint *)(param_1 + 0x50) = *(int *)(param_1 + 0x50) + uVar14;
  return 0;
}


// 0x05ba040 (0xa4 bytes)
void FUN_005ba040(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 uStack00000030;
  undefined4 uStack00000038;
  undefined4 uStack00000040;
  GPiece<72> auStack_50;
  
  uStack00000030 = param_1;
  uStack00000038 = param_2;
  uStack00000040 = param_3;
  FUN_005ba0e4(auStack_50);
  FUN_005ba178(auStack_50,uStack00000030,uStack00000038);
  FUN_005ba31c(auStack_50,uStack00000040);
  return;
}


// 0x05ba0e4 (0x94 bytes)
void FUN_005ba0e4(undefined4 *param_1)

{
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
  return;
}


// 0x05ba178 (0x1a4 bytes)
void * FUN_005ba178(int param_1,void *param_2,uint param_3)

{
  void *pvVar1;
  int iStack00000030;
  void *pvStack00000038;
  uint uStack00000040;
  undefined4 local_1c;
  undefined4 local_18;
  
  local_1c = *(int *)(param_1 + 0x30);
  *(uint *)(param_1 + 0x30) = local_1c + param_3 & 0xf;
  local_18 = 0x10 - local_1c;
  iStack00000030 = param_1;
  pvStack00000038 = param_2;
  uStack00000040 = param_3;
  if (param_3 < local_18) {
    local_18 = 0;
  }
  else {
    memcpy((void *)(param_1 + 0x20 + local_1c),param_2,local_18);
    FUN_005ba4d0(iStack00000030,iStack00000030 + 0x20);
    for (; local_18 + 0xf < uStack00000040; local_18 = local_18 + 0x10) {
      FUN_005ba4d0(iStack00000030,local_18 + (int)pvStack00000038);
    }
    local_1c = 0;
  }
  pvVar1 = memcpy((void *)(iStack00000030 + 0x20 + local_1c),
                        (void *)(local_18 + (int)pvStack00000038),uStack00000040 - local_18);
  return pvVar1;
}


// 0x05ba31c (0x1b4 bytes)
void FUN_005ba31c(undefined4 *param_1,undefined1 *param_2)

{
  undefined1 uVar1;
  undefined1 uVar2;
  undefined1 uVar3;
  undefined4 *puStack00000030;
  undefined1 *puStack00000038;
  
  puStack00000030 = param_1;
  puStack00000038 = param_2;
  FUN_005ba178(param_1,*(undefined4 *)(PTR_PTR_0071c1b0 + (0x10 - param_1[0xc]) * 4),
               0x10 - param_1[0xc]);
  FUN_005ba178(puStack00000030,puStack00000030 + 4,0x10);
  uVar1 = *(undefined1 *)((int)puStack00000030 + 1);
  uVar2 = *(undefined1 *)((int)puStack00000030 + 2);
  uVar3 = *(undefined1 *)((int)puStack00000030 + 3);
  *puStack00000038 = *(undefined1 *)puStack00000030;
  puStack00000038[1] = uVar1;
  puStack00000038[2] = uVar2;
  puStack00000038[3] = uVar3;
  uVar1 = *(undefined1 *)((int)puStack00000030 + 5);
  uVar2 = *(undefined1 *)((int)puStack00000030 + 6);
  uVar3 = *(undefined1 *)((int)puStack00000030 + 7);
  puStack00000038[4] = *(undefined1 *)(puStack00000030 + 1);
  puStack00000038[5] = uVar1;
  puStack00000038[6] = uVar2;
  puStack00000038[7] = uVar3;
  uVar1 = *(undefined1 *)((int)puStack00000030 + 9);
  uVar2 = *(undefined1 *)((int)puStack00000030 + 10);
  uVar3 = *(undefined1 *)((int)puStack00000030 + 0xb);
  puStack00000038[8] = *(undefined1 *)(puStack00000030 + 2);
  puStack00000038[9] = uVar1;
  puStack00000038[10] = uVar2;
  puStack00000038[0xb] = uVar3;
  uVar1 = *(undefined1 *)((int)puStack00000030 + 0xd);
  uVar2 = *(undefined1 *)((int)puStack00000030 + 0xe);
  uVar3 = *(undefined1 *)((int)puStack00000030 + 0xf);
  puStack00000038[0xc] = *(undefined1 *)(puStack00000030 + 3);
  puStack00000038[0xd] = uVar1;
  puStack00000038[0xe] = uVar2;
  puStack00000038[0xf] = uVar3;
  *puStack00000030 = 0;
  puStack00000030[1] = 0;
  puStack00000030[2] = 0;
  puStack00000030[3] = 0;
  puStack00000030[4] = 0;
  puStack00000030[5] = 0;
  puStack00000030[6] = 0;
  puStack00000030[7] = 0;
  puStack00000030[8] = 0;
  puStack00000030[9] = 0;
  puStack00000030[10] = 0;
  puStack00000030[0xb] = 0;
  puStack00000030[0xc] = 0;
  return;
}


// 0x05ba4d0 (0x3e8 bytes)
void FUN_005ba4d0(undefined1 *param_1,int param_2)

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
  byte bVar17;
  uint local_50;
  uint local_4c;
  uint local_48;
  byte abStack_40 [32];
  byte abStack_20 [24];
  
  uVar1 = *param_1;
  uVar2 = param_1[1];
  uVar3 = param_1[2];
  uVar4 = param_1[3];
  uVar5 = param_1[4];
  uVar6 = param_1[5];
  uVar7 = param_1[6];
  uVar8 = param_1[7];
  uVar9 = param_1[8];
  uVar10 = param_1[9];
  uVar11 = param_1[10];
  uVar12 = param_1[0xb];
  uVar13 = param_1[0xc];
  uVar14 = param_1[0xd];
  uVar15 = param_1[0xe];
  uVar16 = param_1[0xf];
  for (local_48 = 0; local_48 < 0x10; local_48 = local_48 + 1) {
    abStack_20[local_48] = param_1[local_48] ^ *(byte *)(local_48 + param_2);
  }
  local_50 = 0;
  for (local_48 = 0; local_48 < 0x12; local_48 = local_48 + 1) {
    for (local_4c = 0; local_4c < 0x30; local_4c = local_4c + 1) {
      abStack_40[local_4c] = abStack_40[local_4c] ^ PTR_DAT_0071c1b4[local_50];
      local_50 = (uint)abStack_40[local_4c];
    }
    local_50 = local_50 + local_48 & 0xff;
  }
  *param_1 = uVar1;
  param_1[1] = uVar2;
  param_1[2] = uVar3;
  param_1[3] = uVar4;
  param_1[4] = uVar5;
  param_1[5] = uVar6;
  param_1[6] = uVar7;
  param_1[7] = uVar8;
  param_1[8] = uVar9;
  param_1[9] = uVar10;
  param_1[10] = uVar11;
  param_1[0xb] = uVar12;
  param_1[0xc] = uVar13;
  param_1[0xd] = uVar14;
  param_1[0xe] = uVar15;
  param_1[0xf] = uVar16;
  bVar17 = param_1[0x1f];
  for (local_48 = 0; local_48 < 0x10; local_48 = local_48 + 1) {
    param_1[local_48 + 0x10] =
         param_1[local_48 + 0x10] ^ PTR_DAT_0071c1b4[*(byte *)(local_48 + param_2) ^ bVar17];
    bVar17 = param_1[local_48 + 0x10];
  }
  return;
}


// 0x05ba8b8 (0xa4 bytes)
void FUN_005ba8b8(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 uStack00000030;
  undefined4 uStack00000038;
  undefined4 uStack00000040;
  GPiece<104> auStack_70;
  
  uStack00000030 = param_1;
  uStack00000038 = param_2;
  uStack00000040 = param_3;
  FUN_005ba95c(auStack_70);
  FUN_005ba9f8(auStack_70,uStack00000030,uStack00000038);
  FUN_005bac08(auStack_70,uStack00000040);
  return;
}


// 0x05ba95c (0x9c bytes)
void FUN_005ba95c(undefined4 *param_1)

{
  param_1[5] = 0;
  param_1[4] = param_1[5];
  *param_1 = 0x67452301;
  param_1[1] = 0xefcdab89;
  param_1[2] = 0x98badcfe;
  param_1[3] = 0x10325476;
  return;
}


// 0x05ba9f8 (0x210 bytes)
void * FUN_005ba9f8(int param_1,void *param_2,uint param_3)

{
  void *pvVar1;
  int iStack00000030;
  void *pvStack00000038;
  uint uStack00000040;
  undefined4 local_1c;
  undefined4 local_18;
  
  local_1c = *(uint *)(param_1 + 0x10) >> 3 & 0x3f;
  *(uint *)(param_1 + 0x10) = *(int *)(param_1 + 0x10) + param_3 * 8;
  if ((ulonglong)*(uint *)(param_1 + 0x10) < ((ulonglong)param_3 & 0x1fffffff) << 3) {
    *(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) + 1;
  }
  *(uint *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) + (param_3 >> 0x1d);
  local_18 = 0x40 - local_1c;
  iStack00000030 = param_1;
  pvStack00000038 = param_2;
  uStack00000040 = param_3;
  if (param_3 < local_18) {
    local_18 = 0;
  }
  else {
    memcpy((void *)(param_1 + 0x18 + local_1c),param_2,local_18);
    FUN_005bad38(iStack00000030,iStack00000030 + 0x18);
    for (; local_18 + 0x3f < uStack00000040; local_18 = local_18 + 0x40) {
      FUN_005bad38(iStack00000030,local_18 + (int)pvStack00000038);
    }
    local_1c = 0;
  }
  pvVar1 = memcpy((void *)(iStack00000030 + 0x18 + local_1c),
                        (void *)(local_18 + (int)pvStack00000038),uStack00000040 - local_18);
  return pvVar1;
}


// 0x05bac08 (0x130 bytes)
void FUN_005bac08(int param_1,undefined4 param_2)

{
  uint uVar1;
  int iStack00000030;
  undefined4 uStack00000038;
  GPiece<8> auStack_28;
  int local_20;
  
  iStack00000030 = param_1;
  uStack00000038 = param_2;
  FUN_005bbb08(auStack_28,param_1 + 0x10,8);
  uVar1 = *(uint *)(iStack00000030 + 0x10) >> 3 & 0x3f;
  if (uVar1 < 0x38) {
    local_20 = 0x38 - uVar1;
  }
  else {
    local_20 = 0x78 - uVar1;
  }
  FUN_005ba9f8(iStack00000030,PTR_DAT_0071c1b8,local_20);
  FUN_005ba9f8(iStack00000030,auStack_28,8);
  FUN_005bbb08(uStack00000038,iStack00000030,0x10);
  memset(iStack00000030,0,0x58);
  return;
}


// 0x05bad38 (0xdd0 bytes)
void FUN_005bad38(int *param_1,undefined4 param_2)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  int *piStack00000030;
  undefined4 uStack00000038;
  int local_50;
  int local_4c;
  int local_48;
  int local_44;
  int local_40;
  int local_3c;
  int local_38;
  int local_34;
  int local_30;
  int local_2c;
  int local_28;
  int local_24;
  int local_20;
  int local_1c;
  int local_18;
  int local_14;
  
  iVar1 = *param_1;
  uVar5 = param_1[1];
  uVar4 = param_1[2];
  uVar3 = param_1[3];
  piStack00000030 = param_1;
  uStack00000038 = param_2;
  FUN_005bbc50(&local_50,param_2,0x40);
  uVar2 = iVar1 + (uVar5 & uVar4 | ~uVar5 & uVar3) + local_50;
  uVar2 = uVar2 * 8 | uVar2 >> 0x1d;
  uVar3 = uVar3 + (uVar2 & uVar5 | ~uVar2 & uVar4) + local_4c;
  uVar3 = uVar3 * 0x80 | uVar3 >> 0x19;
  uVar4 = uVar4 + (uVar3 & uVar2 | ~uVar3 & uVar5) + local_48;
  uVar4 = uVar4 * 0x800 | uVar4 >> 0x15;
  uVar5 = uVar5 + (uVar4 & uVar3 | ~uVar4 & uVar2) + local_44;
  uVar5 = uVar5 * 0x80000 | uVar5 >> 0xd;
  uVar2 = uVar2 + (uVar5 & uVar4 | ~uVar5 & uVar3) + local_40;
  uVar2 = uVar2 * 8 | uVar2 >> 0x1d;
  uVar3 = uVar3 + (uVar2 & uVar5 | ~uVar2 & uVar4) + local_3c;
  uVar3 = uVar3 * 0x80 | uVar3 >> 0x19;
  uVar4 = uVar4 + (uVar3 & uVar2 | ~uVar3 & uVar5) + local_38;
  uVar4 = uVar4 * 0x800 | uVar4 >> 0x15;
  uVar5 = uVar5 + (uVar4 & uVar3 | ~uVar4 & uVar2) + local_34;
  uVar5 = uVar5 * 0x80000 | uVar5 >> 0xd;
  uVar2 = uVar2 + (uVar5 & uVar4 | ~uVar5 & uVar3) + local_30;
  uVar2 = uVar2 * 8 | uVar2 >> 0x1d;
  uVar3 = uVar3 + (uVar2 & uVar5 | ~uVar2 & uVar4) + local_2c;
  uVar3 = uVar3 * 0x80 | uVar3 >> 0x19;
  uVar4 = uVar4 + (uVar3 & uVar2 | ~uVar3 & uVar5) + local_28;
  uVar4 = uVar4 * 0x800 | uVar4 >> 0x15;
  uVar5 = uVar5 + (uVar4 & uVar3 | ~uVar4 & uVar2) + local_24;
  uVar5 = uVar5 * 0x80000 | uVar5 >> 0xd;
  uVar2 = uVar2 + (uVar5 & uVar4 | ~uVar5 & uVar3) + local_20;
  uVar2 = uVar2 * 8 | uVar2 >> 0x1d;
  uVar3 = uVar3 + (uVar2 & uVar5 | ~uVar2 & uVar4) + local_1c;
  uVar3 = uVar3 * 0x80 | uVar3 >> 0x19;
  uVar4 = uVar4 + (uVar3 & uVar2 | ~uVar3 & uVar5) + local_18;
  uVar4 = uVar4 * 0x800 | uVar4 >> 0x15;
  uVar5 = uVar5 + (uVar4 & uVar3 | ~uVar4 & uVar2) + local_14;
  uVar5 = uVar5 * 0x80000 | uVar5 >> 0xd;
  uVar2 = ((uVar4 | uVar3) & uVar5 | uVar4 & uVar3) + local_50 + uVar2 + 0x5a827999;
  uVar2 = uVar2 * 8 | uVar2 >> 0x1d;
  uVar3 = ((uVar5 | uVar4) & uVar2 | uVar5 & uVar4) + local_40 + uVar3 + 0x5a827999;
  uVar3 = uVar3 * 0x20 | uVar3 >> 0x1b;
  uVar4 = ((uVar2 | uVar5) & uVar3 | uVar2 & uVar5) + local_30 + uVar4 + 0x5a827999;
  uVar4 = uVar4 * 0x200 | uVar4 >> 0x17;
  uVar5 = ((uVar3 | uVar2) & uVar4 | uVar3 & uVar2) + local_20 + uVar5 + 0x5a827999;
  uVar5 = uVar5 * 0x2000 | uVar5 >> 0x13;
  uVar2 = ((uVar4 | uVar3) & uVar5 | uVar4 & uVar3) + local_4c + uVar2 + 0x5a827999;
  uVar2 = uVar2 * 8 | uVar2 >> 0x1d;
  uVar3 = ((uVar5 | uVar4) & uVar2 | uVar5 & uVar4) + local_3c + uVar3 + 0x5a827999;
  uVar3 = uVar3 * 0x20 | uVar3 >> 0x1b;
  uVar4 = ((uVar2 | uVar5) & uVar3 | uVar2 & uVar5) + local_2c + uVar4 + 0x5a827999;
  uVar4 = uVar4 * 0x200 | uVar4 >> 0x17;
  uVar5 = ((uVar3 | uVar2) & uVar4 | uVar3 & uVar2) + local_1c + uVar5 + 0x5a827999;
  uVar5 = uVar5 * 0x2000 | uVar5 >> 0x13;
  uVar2 = ((uVar4 | uVar3) & uVar5 | uVar4 & uVar3) + local_48 + uVar2 + 0x5a827999;
  uVar2 = uVar2 * 8 | uVar2 >> 0x1d;
  uVar3 = ((uVar5 | uVar4) & uVar2 | uVar5 & uVar4) + local_38 + uVar3 + 0x5a827999;
  uVar3 = uVar3 * 0x20 | uVar3 >> 0x1b;
  uVar4 = ((uVar2 | uVar5) & uVar3 | uVar2 & uVar5) + local_28 + uVar4 + 0x5a827999;
  uVar4 = uVar4 * 0x200 | uVar4 >> 0x17;
  uVar5 = ((uVar3 | uVar2) & uVar4 | uVar3 & uVar2) + local_18 + uVar5 + 0x5a827999;
  uVar5 = uVar5 * 0x2000 | uVar5 >> 0x13;
  uVar2 = ((uVar4 | uVar3) & uVar5 | uVar4 & uVar3) + local_44 + uVar2 + 0x5a827999;
  uVar2 = uVar2 * 8 | uVar2 >> 0x1d;
  uVar3 = ((uVar5 | uVar4) & uVar2 | uVar5 & uVar4) + local_34 + uVar3 + 0x5a827999;
  uVar3 = uVar3 * 0x20 | uVar3 >> 0x1b;
  uVar4 = ((uVar2 | uVar5) & uVar3 | uVar2 & uVar5) + local_24 + uVar4 + 0x5a827999;
  uVar4 = uVar4 * 0x200 | uVar4 >> 0x17;
  uVar5 = ((uVar3 | uVar2) & uVar4 | uVar3 & uVar2) + local_14 + uVar5 + 0x5a827999;
  uVar5 = uVar5 * 0x2000 | uVar5 >> 0x13;
  uVar2 = (uVar5 ^ uVar4 ^ uVar3) + local_50 + uVar2 + 0x6ed9eba1;
  uVar2 = uVar2 * 8 | uVar2 >> 0x1d;
  uVar3 = (uVar2 ^ uVar5 ^ uVar4) + local_30 + uVar3 + 0x6ed9eba1;
  uVar3 = uVar3 * 0x200 | uVar3 >> 0x17;
  uVar4 = (uVar3 ^ uVar2 ^ uVar5) + local_40 + uVar4 + 0x6ed9eba1;
  uVar4 = uVar4 * 0x800 | uVar4 >> 0x15;
  uVar5 = (uVar4 ^ uVar3 ^ uVar2) + local_20 + uVar5 + 0x6ed9eba1;
  uVar5 = uVar5 * 0x8000 | uVar5 >> 0x11;
  uVar2 = (uVar5 ^ uVar4 ^ uVar3) + local_48 + uVar2 + 0x6ed9eba1;
  uVar2 = uVar2 * 8 | uVar2 >> 0x1d;
  uVar3 = (uVar2 ^ uVar5 ^ uVar4) + local_28 + uVar3 + 0x6ed9eba1;
  uVar3 = uVar3 * 0x200 | uVar3 >> 0x17;
  uVar4 = (uVar3 ^ uVar2 ^ uVar5) + local_38 + uVar4 + 0x6ed9eba1;
  uVar4 = uVar4 * 0x800 | uVar4 >> 0x15;
  uVar5 = (uVar4 ^ uVar3 ^ uVar2) + local_18 + uVar5 + 0x6ed9eba1;
  uVar5 = uVar5 * 0x8000 | uVar5 >> 0x11;
  uVar2 = (uVar5 ^ uVar4 ^ uVar3) + local_4c + uVar2 + 0x6ed9eba1;
  uVar2 = uVar2 * 8 | uVar2 >> 0x1d;
  uVar3 = (uVar2 ^ uVar5 ^ uVar4) + local_2c + uVar3 + 0x6ed9eba1;
  uVar3 = uVar3 * 0x200 | uVar3 >> 0x17;
  uVar4 = (uVar3 ^ uVar2 ^ uVar5) + local_3c + uVar4 + 0x6ed9eba1;
  uVar4 = uVar4 * 0x800 | uVar4 >> 0x15;
  uVar5 = (uVar4 ^ uVar3 ^ uVar2) + local_1c + uVar5 + 0x6ed9eba1;
  uVar5 = uVar5 * 0x8000 | uVar5 >> 0x11;
  uVar2 = (uVar5 ^ uVar4 ^ uVar3) + local_44 + uVar2 + 0x6ed9eba1;
  uVar2 = uVar2 * 8 | uVar2 >> 0x1d;
  uVar3 = (uVar2 ^ uVar5 ^ uVar4) + local_24 + uVar3 + 0x6ed9eba1;
  uVar3 = uVar3 * 0x200 | uVar3 >> 0x17;
  uVar4 = (uVar3 ^ uVar2 ^ uVar5) + local_34 + uVar4 + 0x6ed9eba1;
  uVar4 = uVar4 * 0x800 | uVar4 >> 0x15;
  uVar5 = (uVar4 ^ uVar3 ^ uVar2) + local_14 + uVar5 + 0x6ed9eba1;
  *piStack00000030 = *piStack00000030 + uVar2;
  piStack00000030[1] = piStack00000030[1] + (uVar5 * 0x8000 | uVar5 >> 0x11);
  piStack00000030[2] = piStack00000030[2] + uVar4;
  piStack00000030[3] = piStack00000030[3] + uVar3;
  return;
}


// 0x05bbb08 (0x148 bytes)
void FUN_005bbb08(int param_1,int param_2,uint param_3)

{
  undefined4 local_20;
  undefined4 local_1c;
  
  local_1c = 0;
  for (local_20 = 0; local_20 < param_3; local_20 = local_20 + 4) {
    *(char *)(local_20 + param_1) = (char)*(undefined4 *)(local_1c * 4 + param_2);
    *(char *)(local_20 + param_1 + 1) = (char)((uint)*(undefined4 *)(local_1c * 4 + param_2) >> 8);
    *(char *)(local_20 + param_1 + 2) =
         (char)((uint)*(undefined4 *)(local_1c * 4 + param_2) >> 0x10);
    *(char *)(local_20 + param_1 + 3) =
         (char)((uint)*(undefined4 *)(local_1c * 4 + param_2) >> 0x18);
    local_1c = local_1c + 1;
  }
  return;
}


// 0x05bbc50 (0x110 bytes)
void FUN_005bbc50(int param_1,int param_2,uint param_3)

{
  undefined4 local_20;
  undefined4 local_1c;
  
  local_1c = 0;
  for (local_20 = 0; local_20 < param_3; local_20 = local_20 + 4) {
    *(uint *)(local_1c * 4 + param_1) =
         CONCAT13(*(undefined1 *)(local_20 + param_2 + 3),
                  CONCAT12(*(undefined1 *)(local_20 + param_2 + 2),
                           CONCAT11(*(undefined1 *)(local_20 + param_2 + 1),
                                    *(undefined1 *)(local_20 + param_2))));
    local_1c = local_1c + 1;
  }
  return;
}


// 0x05bbd60 (0xa4 bytes)
void FUN_005bbd60(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 uStack00000030;
  undefined4 uStack00000038;
  undefined4 uStack00000040;
  GPiece<104> auStack_70;
  
  uStack00000030 = param_1;
  uStack00000038 = param_2;
  uStack00000040 = param_3;
  FUN_005bbefc(auStack_70);
  FUN_005bbf98(auStack_70,uStack00000030,uStack00000038);
  FUN_005bc36c(uStack00000040,auStack_70);
  return;
}


// 0x05bbe04 (0xf8 bytes)
void FUN_005bbe04(int param_1,int param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5)

{
  int iStack00000030;
  int iStack00000038;
  undefined4 uStack00000040;
  undefined4 uStack00000048;
  undefined4 uStack00000050;
  GPiece<104> auStack_70;
  
  iStack00000030 = param_1;
  iStack00000038 = param_2;
  uStack00000040 = param_3;
  uStack00000048 = param_4;
  uStack00000050 = param_5;
  FUN_005bbefc(auStack_70);
  if ((iStack00000030 != 0) && (iStack00000038 != 0)) {
    FUN_005bbf98(auStack_70,iStack00000030,iStack00000038);
  }
  FUN_005bbf98(auStack_70,uStack00000040,uStack00000048);
  FUN_005bc36c(uStack00000050,auStack_70);
  return;
}


// 0x05bbefc (0x9c bytes)
void FUN_005bbefc(undefined4 *param_1)

{
  param_1[5] = 0;
  param_1[4] = param_1[5];
  *param_1 = 0x67452301;
  param_1[1] = 0xefcdab89;
  param_1[2] = 0x98badcfe;
  param_1[3] = 0x10325476;
  return;
}


// 0x05bbf98 (0x3d4 bytes)
void * FUN_005bbf98(int param_1,undefined1 *param_2,uint param_3)

{
  undefined1 uVar1;
  undefined1 uVar2;
  undefined1 uVar3;
  uint __n;
  void *pvVar4;
  int iStack00000030;
  undefined1 *puStack00000038;
  uint uStack00000040;
  uint local_1c;
  
  local_1c = *(uint *)(param_1 + 0x10) & 0x3f;
  *(uint *)(param_1 + 0x10) = *(int *)(param_1 + 0x10) + param_3;
  if (*(uint *)(param_1 + 0x10) < param_3) {
    *(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) + 1;
  }
  __n = 0x40 - local_1c;
  iStack00000030 = param_1;
  puStack00000038 = param_2;
  uStack00000040 = param_3;
  if (__n <= param_3) {
    memcpy((void *)(param_1 + 0x18 + local_1c),param_2,__n);
    puStack00000038 = puStack00000038 + __n;
    uStack00000040 = uStack00000040 - __n;
    local_1c = 0;
    FUN_005bc508(iStack00000030);
    while (0x3f < uStack00000040) {
      uVar1 = puStack00000038[1];
      uVar2 = puStack00000038[2];
      uVar3 = puStack00000038[3];
      *(undefined1 *)(iStack00000030 + 0x18) = *puStack00000038;
      *(undefined1 *)(iStack00000030 + 0x19) = uVar1;
      *(undefined1 *)(iStack00000030 + 0x1a) = uVar2;
      *(undefined1 *)(iStack00000030 + 0x1b) = uVar3;
      uVar1 = puStack00000038[5];
      uVar2 = puStack00000038[6];
      uVar3 = puStack00000038[7];
      *(undefined1 *)(iStack00000030 + 0x1c) = puStack00000038[4];
      *(undefined1 *)(iStack00000030 + 0x1d) = uVar1;
      *(undefined1 *)(iStack00000030 + 0x1e) = uVar2;
      *(undefined1 *)(iStack00000030 + 0x1f) = uVar3;
      uVar1 = puStack00000038[9];
      uVar2 = puStack00000038[10];
      uVar3 = puStack00000038[0xb];
      *(undefined1 *)(iStack00000030 + 0x20) = puStack00000038[8];
      *(undefined1 *)(iStack00000030 + 0x21) = uVar1;
      *(undefined1 *)(iStack00000030 + 0x22) = uVar2;
      *(undefined1 *)(iStack00000030 + 0x23) = uVar3;
      uVar1 = puStack00000038[0xd];
      uVar2 = puStack00000038[0xe];
      uVar3 = puStack00000038[0xf];
      *(undefined1 *)(iStack00000030 + 0x24) = puStack00000038[0xc];
      *(undefined1 *)(iStack00000030 + 0x25) = uVar1;
      *(undefined1 *)(iStack00000030 + 0x26) = uVar2;
      *(undefined1 *)(iStack00000030 + 0x27) = uVar3;
      uVar1 = puStack00000038[0x11];
      uVar2 = puStack00000038[0x12];
      uVar3 = puStack00000038[0x13];
      *(undefined1 *)(iStack00000030 + 0x28) = puStack00000038[0x10];
      *(undefined1 *)(iStack00000030 + 0x29) = uVar1;
      *(undefined1 *)(iStack00000030 + 0x2a) = uVar2;
      *(undefined1 *)(iStack00000030 + 0x2b) = uVar3;
      uVar1 = puStack00000038[0x15];
      uVar2 = puStack00000038[0x16];
      uVar3 = puStack00000038[0x17];
      *(undefined1 *)(iStack00000030 + 0x2c) = puStack00000038[0x14];
      *(undefined1 *)(iStack00000030 + 0x2d) = uVar1;
      *(undefined1 *)(iStack00000030 + 0x2e) = uVar2;
      *(undefined1 *)(iStack00000030 + 0x2f) = uVar3;
      uVar1 = puStack00000038[0x19];
      uVar2 = puStack00000038[0x1a];
      uVar3 = puStack00000038[0x1b];
      *(undefined1 *)(iStack00000030 + 0x30) = puStack00000038[0x18];
      *(undefined1 *)(iStack00000030 + 0x31) = uVar1;
      *(undefined1 *)(iStack00000030 + 0x32) = uVar2;
      *(undefined1 *)(iStack00000030 + 0x33) = uVar3;
      uVar1 = puStack00000038[0x1d];
      uVar2 = puStack00000038[0x1e];
      uVar3 = puStack00000038[0x1f];
      *(undefined1 *)(iStack00000030 + 0x34) = puStack00000038[0x1c];
      *(undefined1 *)(iStack00000030 + 0x35) = uVar1;
      *(undefined1 *)(iStack00000030 + 0x36) = uVar2;
      *(undefined1 *)(iStack00000030 + 0x37) = uVar3;
      uVar1 = puStack00000038[0x21];
      uVar2 = puStack00000038[0x22];
      uVar3 = puStack00000038[0x23];
      *(undefined1 *)(iStack00000030 + 0x38) = puStack00000038[0x20];
      *(undefined1 *)(iStack00000030 + 0x39) = uVar1;
      *(undefined1 *)(iStack00000030 + 0x3a) = uVar2;
      *(undefined1 *)(iStack00000030 + 0x3b) = uVar3;
      uVar1 = puStack00000038[0x25];
      uVar2 = puStack00000038[0x26];
      uVar3 = puStack00000038[0x27];
      *(undefined1 *)(iStack00000030 + 0x3c) = puStack00000038[0x24];
      *(undefined1 *)(iStack00000030 + 0x3d) = uVar1;
      *(undefined1 *)(iStack00000030 + 0x3e) = uVar2;
      *(undefined1 *)(iStack00000030 + 0x3f) = uVar3;
      uVar1 = puStack00000038[0x29];
      uVar2 = puStack00000038[0x2a];
      uVar3 = puStack00000038[0x2b];
      *(undefined1 *)(iStack00000030 + 0x40) = puStack00000038[0x28];
      *(undefined1 *)(iStack00000030 + 0x41) = uVar1;
      *(undefined1 *)(iStack00000030 + 0x42) = uVar2;
      *(undefined1 *)(iStack00000030 + 0x43) = uVar3;
      uVar1 = puStack00000038[0x2d];
      uVar2 = puStack00000038[0x2e];
      uVar3 = puStack00000038[0x2f];
      *(undefined1 *)(iStack00000030 + 0x44) = puStack00000038[0x2c];
      *(undefined1 *)(iStack00000030 + 0x45) = uVar1;
      *(undefined1 *)(iStack00000030 + 0x46) = uVar2;
      *(undefined1 *)(iStack00000030 + 0x47) = uVar3;
      uVar1 = puStack00000038[0x31];
      uVar2 = puStack00000038[0x32];
      uVar3 = puStack00000038[0x33];
      *(undefined1 *)(iStack00000030 + 0x48) = puStack00000038[0x30];
      *(undefined1 *)(iStack00000030 + 0x49) = uVar1;
      *(undefined1 *)(iStack00000030 + 0x4a) = uVar2;
      *(undefined1 *)(iStack00000030 + 0x4b) = uVar3;
      uVar1 = puStack00000038[0x35];
      uVar2 = puStack00000038[0x36];
      uVar3 = puStack00000038[0x37];
      *(undefined1 *)(iStack00000030 + 0x4c) = puStack00000038[0x34];
      *(undefined1 *)(iStack00000030 + 0x4d) = uVar1;
      *(undefined1 *)(iStack00000030 + 0x4e) = uVar2;
      *(undefined1 *)(iStack00000030 + 0x4f) = uVar3;
      uVar1 = puStack00000038[0x39];
      uVar2 = puStack00000038[0x3a];
      uVar3 = puStack00000038[0x3b];
      *(undefined1 *)(iStack00000030 + 0x50) = puStack00000038[0x38];
      *(undefined1 *)(iStack00000030 + 0x51) = uVar1;
      *(undefined1 *)(iStack00000030 + 0x52) = uVar2;
      *(undefined1 *)(iStack00000030 + 0x53) = uVar3;
      uVar1 = puStack00000038[0x3d];
      uVar2 = puStack00000038[0x3e];
      uVar3 = puStack00000038[0x3f];
      *(undefined1 *)(iStack00000030 + 0x54) = puStack00000038[0x3c];
      *(undefined1 *)(iStack00000030 + 0x55) = uVar1;
      *(undefined1 *)(iStack00000030 + 0x56) = uVar2;
      *(undefined1 *)(iStack00000030 + 0x57) = uVar3;
      puStack00000038 = puStack00000038 + 0x40;
      uStack00000040 = uStack00000040 - 0x40;
      FUN_005bc508(iStack00000030);
    }
  }
  pvVar4 = memcpy((void *)(iStack00000030 + 0x18 + local_1c),puStack00000038,uStack00000040);
  return pvVar4;
}


// 0x05bc36c (0x16c bytes)
void FUN_005bc36c(undefined4 param_1,int param_2)

{
  uint uVar1;
  undefined4 uStack00000030;
  int iStack00000038;
  GPiece<8> auStack_38;
  GPiece<16> local_30;
  int local_20;
  
  uVar1 = *(uint *)(param_2 + 0x10) & 0x3f;
  if (uVar1 < 0x38) {
    local_20 = 0x38 - uVar1;
  }
  else {
    local_20 = 0x78 - uVar1;
  }
  uStack00000030 = param_1;
  iStack00000038 = param_2;
  FUN_005bbf98(param_2,PTR_DAT_0071c1bc,local_20);
  FUN_005bc4d8(auStack_38,local_30,8);
  FUN_005bbf98(iStack00000038,auStack_38,8);
  FUN_005bc4d8(uStack00000030,iStack00000038,0x10);
  memset(iStack00000038,0,0x60);
  return;
}


// 0x05bc4d8 (0x2c bytes)
void FUN_005bc4d8(int param_1,int param_2,uint param_3)

{
  byte *pbVar1;
  uint uVar2;
  
  uVar2 = 0;
  if (param_3 != 0) {
    do {
      pbVar1 = (byte *)(uVar2 + param_2);
      *(uint *)(uVar2 + param_1) =
           (uint)pbVar1[3] << 0x18 | (uint)pbVar1[2] << 0x10 | (uint)pbVar1[1] << 8 | (uint)*pbVar1;
      uVar2 = uVar2 + 4;
    } while (uVar2 < param_3);
    return;
  }
  return;
}


// 0x05bc508 (0xba8 bytes)
undefined8 FUN_005bc508(longlong param_1)

{
  uint uVar1;
  int iVar2;
  uint *puVar3;
  uint *puVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  
  puVar3 = (uint *)FUN_005bc4d8(param_1 + 0x18,param_1 + 0x18,0x40);
  puVar4 = puVar3 + -6;
  uVar6 = (ulonglong)puVar3[-5];
  uVar1 = puVar3[-4];
  uVar5 = ((ulonglong)*puVar4 + (ulonglong)*puVar3 +
          ((ulonglong)(puVar3[-5] & uVar1) | ~uVar6 & (ulonglong)puVar3[-3])) - 0x28955b88;
  uVar5 = ((uVar5 & 0x1ffffff) << 7 | (uVar5 << 0x20) >> 0x39) + uVar6;
  uVar7 = ((ulonglong)puVar3[-3] + (ulonglong)puVar3[1] +
          (uVar5 & uVar6 | ~uVar5 & (ulonglong)uVar1)) - 0x173848aa;
  uVar8 = ((uVar7 & 0xfffff) << 0xc | (uVar7 << 0x20) >> 0x34) + uVar5;
  uVar7 = (ulonglong)uVar1 + (ulonglong)puVar3[2] + (uVar8 & uVar5 | ~uVar8 & uVar6) + 0x242070db;
  uVar7 = ((uVar7 & 0x7fff) << 0x11 | (uVar7 << 0x20) >> 0x2f) + uVar8;
  uVar6 = (uVar6 + puVar3[3] + (uVar7 & uVar8 | ~uVar7 & uVar5)) - 0x3e423112;
  uVar6 = ((uVar6 & 0x3ff) << 0x16 | (uVar6 << 0x20) >> 0x2a) + uVar7;
  uVar5 = (uVar5 + puVar3[4] + (uVar6 & uVar7 | ~uVar6 & uVar8)) - 0xa83f051;
  uVar5 = ((uVar5 & 0x1ffffff) << 7 | (uVar5 << 0x20) >> 0x39) + uVar6;
  uVar8 = uVar8 + puVar3[5] + (uVar5 & uVar6 | ~uVar5 & uVar7) + 0x4787c62a;
  uVar8 = ((uVar8 & 0xfffff) << 0xc | (uVar8 << 0x20) >> 0x34) + uVar5;
  uVar7 = (uVar7 + puVar3[6] + (uVar8 & uVar5 | ~uVar8 & uVar6)) - 0x57cfb9ed;
  uVar7 = ((uVar7 & 0x7fff) << 0x11 | (uVar7 << 0x20) >> 0x2f) + uVar8;
  uVar6 = (uVar6 + puVar3[7] + (uVar7 & uVar8 | ~uVar7 & uVar5)) - 0x2b96aff;
  uVar6 = ((uVar6 & 0x3ff) << 0x16 | (uVar6 << 0x20) >> 0x2a) + uVar7;
  uVar5 = uVar5 + puVar3[8] + (uVar6 & uVar7 | ~uVar6 & uVar8) + 0x698098d8;
  uVar5 = ((uVar5 & 0x1ffffff) << 7 | (uVar5 << 0x20) >> 0x39) + uVar6;
  uVar8 = (uVar8 + puVar3[9] + (uVar5 & uVar6 | ~uVar5 & uVar7)) - 0x74bb0851;
  uVar8 = ((uVar8 & 0xfffff) << 0xc | (uVar8 << 0x20) >> 0x34) + uVar5;
  uVar7 = (uVar7 + puVar3[10] + (uVar8 & uVar5 | ~uVar8 & uVar6)) - 0xa44f;
  uVar7 = ((uVar7 & 0x7fff) << 0x11 | (uVar7 << 0x20) >> 0x2f) + uVar8;
  uVar6 = (uVar6 + puVar3[0xb] + (uVar7 & uVar8 | ~uVar7 & uVar5)) - 0x76a32842;
  uVar6 = ((uVar6 & 0x3ff) << 0x16 | (uVar6 << 0x20) >> 0x2a) + uVar7;
  uVar5 = uVar5 + puVar3[0xc] + (uVar6 & uVar7 | ~uVar6 & uVar8) + 0x6b901122;
  uVar5 = ((uVar5 & 0x1ffffff) << 7 | (uVar5 << 0x20) >> 0x39) + uVar6;
  uVar8 = (uVar8 + puVar3[0xd] + (uVar5 & uVar6 | ~uVar5 & uVar7)) - 0x2678e6d;
  uVar8 = ((uVar8 & 0xfffff) << 0xc | (uVar8 << 0x20) >> 0x34) + uVar5;
  uVar7 = (uVar7 + puVar3[0xe] + (uVar8 & uVar5 | ~uVar8 & uVar6)) - 0x5986bc72;
  uVar7 = ((uVar7 & 0x7fff) << 0x11 | (uVar7 << 0x20) >> 0x2f) + uVar8;
  uVar6 = uVar6 + puVar3[0xf] + (uVar7 & uVar8 | ~uVar7 & uVar5) + 0x49b40821;
  uVar6 = ((uVar6 & 0x3ff) << 0x16 | (uVar6 << 0x20) >> 0x2a) + uVar7;
  uVar5 = (uVar5 + puVar3[1] + (uVar6 & uVar8 | ~uVar8 & uVar7)) - 0x9e1da9e;
  uVar5 = ((uVar5 & 0x7ffffff) << 5 | (uVar5 << 0x20) >> 0x3b) + uVar6;
  uVar8 = (uVar8 + puVar3[6] + (uVar5 & uVar7 | ~uVar7 & uVar6)) - 0x3fbf4cc0;
  uVar8 = ((uVar8 & 0x7fffff) << 9 | (uVar8 << 0x20) >> 0x37) + uVar5;
  uVar7 = uVar7 + puVar3[0xb] + (uVar8 & uVar6 | ~uVar6 & uVar5) + 0x265e5a51;
  uVar7 = ((uVar7 & 0x3ffff) << 0xe | (uVar7 << 0x20) >> 0x32) + uVar8;
  uVar6 = (uVar6 + *puVar3 + (uVar7 & uVar5 | ~uVar5 & uVar8)) - 0x16493856;
  uVar6 = ((uVar6 & 0xfff) << 0x14 | (uVar6 << 0x20) >> 0x2c) + uVar7;
  uVar5 = (uVar5 + puVar3[5] + (uVar6 & uVar8 | ~uVar8 & uVar7)) - 0x29d0efa3;
  uVar5 = ((uVar5 & 0x7ffffff) << 5 | (uVar5 << 0x20) >> 0x3b) + uVar6;
  uVar8 = uVar8 + puVar3[10] + (uVar5 & uVar7 | ~uVar7 & uVar6) + 0x2441453;
  uVar8 = ((uVar8 & 0x7fffff) << 9 | (uVar8 << 0x20) >> 0x37) + uVar5;
  uVar7 = (uVar7 + puVar3[0xf] + (uVar8 & uVar6 | ~uVar6 & uVar5)) - 0x275e197f;
  uVar7 = ((uVar7 & 0x3ffff) << 0xe | (uVar7 << 0x20) >> 0x32) + uVar8;
  uVar6 = (uVar6 + puVar3[4] + (uVar7 & uVar5 | ~uVar5 & uVar8)) - 0x182c0438;
  uVar6 = ((uVar6 & 0xfff) << 0x14 | (uVar6 << 0x20) >> 0x2c) + uVar7;
  uVar5 = uVar5 + puVar3[9] + (uVar6 & uVar8 | ~uVar8 & uVar7) + 0x21e1cde6;
  uVar5 = ((uVar5 & 0x7ffffff) << 5 | (uVar5 << 0x20) >> 0x3b) + uVar6;
  uVar8 = (uVar8 + puVar3[0xe] + (uVar5 & uVar7 | ~uVar7 & uVar6)) - 0x3cc8f82a;
  uVar8 = ((uVar8 & 0x7fffff) << 9 | (uVar8 << 0x20) >> 0x37) + uVar5;
  uVar7 = (uVar7 + puVar3[3] + (uVar8 & uVar6 | ~uVar6 & uVar5)) - 0xb2af279;
  uVar7 = ((uVar7 & 0x3ffff) << 0xe | (uVar7 << 0x20) >> 0x32) + uVar8;
  uVar6 = uVar6 + puVar3[8] + (uVar7 & uVar5 | ~uVar5 & uVar8) + 0x455a14ed;
  uVar6 = ((uVar6 & 0xfff) << 0x14 | (uVar6 << 0x20) >> 0x2c) + uVar7;
  uVar5 = (uVar5 + puVar3[0xd] + (uVar6 & uVar8 | ~uVar8 & uVar7)) - 0x561c16fb;
  uVar5 = ((uVar5 & 0x7ffffff) << 5 | (uVar5 << 0x20) >> 0x3b) + uVar6;
  uVar8 = (uVar8 + puVar3[2] + (uVar5 & uVar7 | ~uVar7 & uVar6)) - 0x3105c08;
  uVar8 = ((uVar8 & 0x7fffff) << 9 | (uVar8 << 0x20) >> 0x37) + uVar5;
  uVar7 = uVar7 + puVar3[7] + (uVar8 & uVar6 | ~uVar6 & uVar5) + 0x676f02d9;
  uVar7 = ((uVar7 & 0x3ffff) << 0xe | (uVar7 << 0x20) >> 0x32) + uVar8;
  uVar6 = (uVar6 + puVar3[0xc] + (uVar7 & uVar5 | ~uVar5 & uVar8)) - 0x72d5b376;
  uVar6 = ((uVar6 & 0xfff) << 0x14 | (uVar6 << 0x20) >> 0x2c) + uVar7;
  uVar5 = (uVar5 + puVar3[5] + (uVar7 ^ uVar8 ^ uVar6)) - 0x5c6be;
  uVar5 = ((uVar5 & 0xfffffff) << 4 | (uVar5 << 0x20) >> 0x3c) + uVar6;
  uVar8 = (uVar8 + puVar3[8] + (uVar6 ^ uVar7 ^ uVar5)) - 0x788e097f;
  uVar8 = ((uVar8 & 0x1fffff) << 0xb | (uVar8 << 0x20) >> 0x35) + uVar5;
  uVar7 = uVar7 + puVar3[0xb] + (uVar5 ^ uVar6 ^ uVar8) + 0x6d9d6122;
  uVar7 = ((uVar7 & 0xffff) << 0x10 | (uVar7 << 0x20) >> 0x30) + uVar8;
  uVar6 = (uVar6 + puVar3[0xe] + (uVar8 ^ uVar5 ^ uVar7)) - 0x21ac7f4;
  uVar6 = ((uVar6 & 0x1ff) << 0x17 | (uVar6 << 0x20) >> 0x29) + uVar7;
  uVar5 = (uVar5 + puVar3[1] + (uVar7 ^ uVar8 ^ uVar6)) - 0x5b4115bc;
  uVar5 = ((uVar5 & 0xfffffff) << 4 | (uVar5 << 0x20) >> 0x3c) + uVar6;
  uVar8 = uVar8 + puVar3[4] + (uVar6 ^ uVar7 ^ uVar5) + 0x4bdecfa9;
  uVar8 = ((uVar8 & 0x1fffff) << 0xb | (uVar8 << 0x20) >> 0x35) + uVar5;
  uVar7 = (uVar7 + puVar3[7] + (uVar5 ^ uVar6 ^ uVar8)) - 0x944b4a0;
  uVar7 = ((uVar7 & 0xffff) << 0x10 | (uVar7 << 0x20) >> 0x30) + uVar8;
  uVar6 = (uVar6 + puVar3[10] + (uVar8 ^ uVar5 ^ uVar7)) - 0x41404390;
  uVar6 = ((uVar6 & 0x1ff) << 0x17 | (uVar6 << 0x20) >> 0x29) + uVar7;
  uVar5 = uVar5 + puVar3[0xd] + (uVar7 ^ uVar8 ^ uVar6) + 0x289b7ec6;
  uVar5 = ((uVar5 & 0xfffffff) << 4 | (uVar5 << 0x20) >> 0x3c) + uVar6;
  uVar8 = (uVar8 + *puVar3 + (uVar6 ^ uVar7 ^ uVar5)) - 0x155ed806;
  uVar8 = ((uVar8 & 0x1fffff) << 0xb | (uVar8 << 0x20) >> 0x35) + uVar5;
  uVar7 = (uVar7 + puVar3[3] + (uVar5 ^ uVar6 ^ uVar8)) - 0x2b10cf7b;
  uVar7 = ((uVar7 & 0xffff) << 0x10 | (uVar7 << 0x20) >> 0x30) + uVar8;
  uVar6 = uVar6 + puVar3[6] + (uVar8 ^ uVar5 ^ uVar7) + 0x4881d05;
  uVar6 = ((uVar6 & 0x1ff) << 0x17 | (uVar6 << 0x20) >> 0x29) + uVar7;
  uVar5 = (uVar5 + puVar3[9] + (uVar7 ^ uVar8 ^ uVar6)) - 0x262b2fc7;
  uVar5 = ((uVar5 & 0xfffffff) << 4 | (uVar5 << 0x20) >> 0x3c) + uVar6;
  uVar8 = (uVar8 + puVar3[0xc] + (uVar6 ^ uVar7 ^ uVar5)) - 0x1924661b;
  uVar8 = ((uVar8 & 0x1fffff) << 0xb | (uVar8 << 0x20) >> 0x35) + uVar5;
  uVar7 = uVar7 + puVar3[0xf] + (uVar5 ^ uVar6 ^ uVar8) + 0x1fa27cf8;
  uVar7 = ((uVar7 & 0xffff) << 0x10 | (uVar7 << 0x20) >> 0x30) + uVar8;
  uVar6 = (uVar6 + puVar3[2] + (uVar8 ^ uVar5 ^ uVar7)) - 0x3b53a99b;
  uVar6 = ((uVar6 & 0x1ff) << 0x17 | (uVar6 << 0x20) >> 0x29) + uVar7;
  uVar5 = (uVar5 + *puVar3 + ((~uVar8 | uVar6) ^ uVar7)) - 0xbd6ddbc;
  uVar5 = ((uVar5 & 0x3ffffff) << 6 | (uVar5 << 0x20) >> 0x3a) + uVar6;
  uVar8 = uVar8 + puVar3[7] + ((~uVar7 | uVar5) ^ uVar6) + 0x432aff97;
  uVar8 = ((uVar8 & 0x3fffff) << 10 | (uVar8 << 0x20) >> 0x36) + uVar5;
  uVar7 = (uVar7 + puVar3[0xe] + ((~uVar6 | uVar8) ^ uVar5)) - 0x546bdc59;
  uVar7 = ((uVar7 & 0x1ffff) << 0xf | (uVar7 << 0x20) >> 0x31) + uVar8;
  uVar6 = (uVar6 + puVar3[5] + ((~uVar5 | uVar7) ^ uVar8)) - 0x36c5fc7;
  uVar6 = ((uVar6 & 0x7ff) << 0x15 | (uVar6 << 0x20) >> 0x2b) + uVar7;
  uVar5 = uVar5 + puVar3[0xc] + ((~uVar8 | uVar6) ^ uVar7) + 0x655b59c3;
  uVar5 = ((uVar5 & 0x3ffffff) << 6 | (uVar5 << 0x20) >> 0x3a) + uVar6;
  uVar8 = (uVar8 + puVar3[3] + ((~uVar7 | uVar5) ^ uVar6)) - 0x70f3336e;
  uVar8 = ((uVar8 & 0x3fffff) << 10 | (uVar8 << 0x20) >> 0x36) + uVar5;
  uVar7 = (uVar7 + puVar3[10] + ((~uVar6 | uVar8) ^ uVar5)) - 0x100b83;
  uVar7 = ((uVar7 & 0x1ffff) << 0xf | (uVar7 << 0x20) >> 0x31) + uVar8;
  uVar6 = (uVar6 + puVar3[1] + ((~uVar5 | uVar7) ^ uVar8)) - 0x7a7ba22f;
  uVar6 = ((uVar6 & 0x7ff) << 0x15 | (uVar6 << 0x20) >> 0x2b) + uVar7;
  uVar5 = uVar5 + puVar3[8] + ((~uVar8 | uVar6) ^ uVar7) + 0x6fa87e4f;
  uVar5 = ((uVar5 & 0x3ffffff) << 6 | (uVar5 << 0x20) >> 0x3a) + uVar6;
  uVar8 = (uVar8 + puVar3[0xf] + ((~uVar7 | uVar5) ^ uVar6)) - 0x1d31920;
  uVar8 = ((uVar8 & 0x3fffff) << 10 | (uVar8 << 0x20) >> 0x36) + uVar5;
  uVar7 = (uVar7 + puVar3[6] + ((~uVar6 | uVar8) ^ uVar5)) - 0x5cfebcec;
  uVar7 = ((uVar7 & 0x1ffff) << 0xf | (uVar7 << 0x20) >> 0x31) + uVar8;
  uVar6 = uVar6 + puVar3[0xd] + ((~uVar5 | uVar7) ^ uVar8) + 0x4e0811a1;
  uVar6 = ((uVar6 & 0x7ff) << 0x15 | (uVar6 << 0x20) >> 0x2b) + uVar7;
  uVar5 = (uVar5 + puVar3[4] + ((~uVar8 | uVar6) ^ uVar7)) - 0x8ac817e;
  uVar5 = ((uVar5 & 0x3ffffff) << 6 | (uVar5 << 0x20) >> 0x3a) + uVar6;
  uVar8 = (uVar8 + puVar3[0xb] + ((~uVar7 | uVar5) ^ uVar6)) - 0x42c50dcb;
  uVar8 = ((uVar8 & 0x3fffff) << 10 | (uVar8 << 0x20) >> 0x36) + uVar5;
  uVar7 = uVar7 + puVar3[2] + ((~uVar6 | uVar8) ^ uVar5) + 0x2ad7d2bb;
  uVar7 = ((uVar7 & 0x1ffff) << 0xf | (uVar7 << 0x20) >> 0x31) + uVar8;
  uVar6 = (uVar6 + puVar3[9] + ((~uVar5 | uVar7) ^ uVar8)) - 0x14792c6f;
  iVar2 = (int)uVar7;
  puVar3[-3] = puVar3[-3] + (int)uVar8;
  puVar3[-4] = puVar3[-4] + iVar2;
  puVar3[-5] = puVar3[-5] + ((uint)((uVar6 & 0xffffffff) << 0x15) | (uint)uVar6 >> 0xb) + iVar2;
  *puVar4 = *puVar4 + (int)uVar5;
  return 0;
}


// 0x05bd0b8 (0xd0 bytes)
void FUN_005bd0b8(undefined4 *param_1)

{
  undefined4 *puStack00000030;
  GPiece<24> local_20;
  
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  puStack00000030 = param_1;
  FUN_005bd638(param_1,param_1,0x10);
  FUN_005bd668(puStack00000030,local_20,0x10);
  return;
}


// 0x05bd188 (0x100 bytes)
void FUN_005bd188(undefined4 param_1,undefined4 param_2)

{
  undefined4 uStack00000030;
  undefined4 uStack00000038;
  GPiece<24> local_20;
  
  uStack00000030 = param_1;
  uStack00000038 = param_2;
  FUN_005bd638(param_2,local_20,0x10);
  return;
}


// 0x05bd288 (0x9c bytes)
int FUN_005bd288(undefined4 param_1,undefined4 param_2)

{
  undefined4 uStack00000030;
  undefined4 uStack00000038;
  int local_20;
  int local_1c;
  int local_18;
  int local_14;
  
  uStack00000030 = param_1;
  uStack00000038 = param_2;
  FUN_005bd0b8(&local_20);
  FUN_005bd940(&local_20,uStack00000030,uStack00000038);
  return local_20 + local_1c + local_18 + local_14;
}


// 0x05bd324 (0x148 bytes)
void FUN_005bd324(undefined1 *param_1,undefined1 *param_2)

{
  undefined1 uVar1;
  undefined1 uVar2;
  undefined1 uVar3;
  undefined1 *puStack00000030;
  undefined1 *puStack00000038;
  GPiece<36> local_2c;
  
  uVar1 = param_1[1];
  uVar2 = param_1[2];
  uVar3 = param_1[3];
  *param_2 = *param_1;
  param_2[1] = uVar1;
  param_2[2] = uVar2;
  param_2[3] = uVar3;
  uVar1 = param_1[5];
  uVar2 = param_1[6];
  uVar3 = param_1[7];
  param_2[4] = param_1[4];
  param_2[5] = uVar1;
  param_2[6] = uVar2;
  param_2[7] = uVar3;
  uVar1 = param_1[9];
  uVar2 = param_1[10];
  uVar3 = param_1[0xb];
  param_2[8] = param_1[8];
  param_2[9] = uVar1;
  param_2[10] = uVar2;
  param_2[0xb] = uVar3;
  uVar1 = param_1[0xd];
  uVar2 = param_1[0xe];
  uVar3 = param_1[0xf];
  param_2[0xc] = param_1[0xc];
  param_2[0xd] = uVar1;
  param_2[0xe] = uVar2;
  param_2[0xf] = uVar3;
  puStack00000030 = param_1;
  puStack00000038 = param_2;
  FUN_005bd638(param_2,param_2,0x10);
  FUN_005bd668(puStack00000038,local_2c,0x10);
  return;
}


// 0x05bd46c (0x1c8 bytes)
void FUN_005bd46c(undefined1 *param_1,undefined4 param_2,undefined1 *param_3)

{
  undefined1 uVar1;
  undefined1 uVar2;
  undefined1 uVar3;
  undefined1 *puStack00000030;
  undefined4 uStack00000038;
  undefined1 *puStack00000040;
  GPiece<4> local_2c;
  GPiece<32> local_28;
  
  uVar1 = param_1[1];
  uVar2 = param_1[2];
  uVar3 = param_1[3];
  *param_3 = *param_1;
  param_3[1] = uVar1;
  param_3[2] = uVar2;
  param_3[3] = uVar3;
  uVar1 = param_1[5];
  uVar2 = param_1[6];
  uVar3 = param_1[7];
  param_3[4] = param_1[4];
  param_3[5] = uVar1;
  param_3[6] = uVar2;
  param_3[7] = uVar3;
  uVar1 = param_1[9];
  uVar2 = param_1[10];
  uVar3 = param_1[0xb];
  param_3[8] = param_1[8];
  param_3[9] = uVar1;
  param_3[10] = uVar2;
  param_3[0xb] = uVar3;
  uVar1 = param_1[0xd];
  uVar2 = param_1[0xe];
  uVar3 = param_1[0xf];
  param_3[0xc] = param_1[0xc];
  param_3[0xd] = uVar1;
  param_3[0xe] = uVar2;
  param_3[0xf] = uVar3;
  puStack00000030 = param_1;
  uStack00000038 = param_2;
  puStack00000040 = param_3;
  FUN_005bd638(param_3,param_3,0x10);
  FUN_005bd940(puStack00000040,local_2c,4);
  FUN_005bd638(local_28,local_28,0x10);
  FUN_005bd668(puStack00000040,local_28,0x10);
  return;
}


// 0x05bd638 (0x2c bytes)
void FUN_005bd638(int param_1,int param_2,uint param_3)

{
  byte *pbVar1;
  uint uVar2;
  
  uVar2 = 0;
  if (param_3 != 0) {
    do {
      pbVar1 = (byte *)(uVar2 + param_2);
      *(uint *)(uVar2 + param_1) =
           (uint)pbVar1[3] << 0x18 | (uint)pbVar1[2] << 0x10 | (uint)pbVar1[1] << 8 | (uint)*pbVar1;
      uVar2 = uVar2 + 4;
    } while (uVar2 < param_3);
    return;
  }
  return;
}


// 0x05bd668 (0x154 bytes)
ulonglong FUN_005bd668(uint *param_1,uint *param_2,int param_3)

{
  undefined4 uVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  uint *puVar8;
  
  uVar2 = (ulonglong)*param_1;
  uVar4 = (ulonglong)param_1[1];
  uVar6 = (ulonglong)param_1[2];
  uVar7 = (ulonglong)param_1[3];
  uVar1 = *(undefined4 *)(param_3 + (int)param_2);
  *(undefined4 *)(param_3 + (int)param_2) = 0;
  FUN_005bd638(param_2);
  puVar8 = param_2;
  if (0 < param_3) {
    do {
      param_3 = param_3 + -4;
      uVar7 = uVar7 ^ 0x5b3aa654;
      uVar6 = uVar6 + uVar2 + uVar7;
      uVar6 = (uVar6 & 0x1ffffff) << 7 | (uVar6 << 0x20) >> 0x39;
      uVar4 = uVar4 + uVar7 + uVar6;
      uVar6 = uVar6 ^ 0x75970a4d;
      uVar5 = (uVar4 & 0x1fffff) << 0xb | (uVar4 << 0x20) >> 0x35;
      uVar2 = uVar2 + uVar6 + uVar5;
      uVar3 = (uVar2 & 0x7fff) << 0x11 | (uVar2 << 0x20) >> 0x2f;
      uVar4 = ~uVar5;
      uVar2 = ~uVar3;
      uVar7 = uVar7 + (uVar3 & uVar5 | uVar6 & uVar4) ^ (ulonglong)*puVar8;
      *puVar8 = (uint)uVar7;
      puVar8 = puVar8 + 1;
    } while (0 < param_3);
  }
  FUN_005bd638(param_2,param_2,(int)puVar8 + (param_3 - (int)param_2));
  *(undefined4 *)(param_3 + (int)puVar8) = uVar1;
  *param_1 = (uint)uVar2;
  param_1[1] = (uint)uVar4;
  param_1[2] = (uint)uVar6;
  param_1[3] = (uint)uVar7;
  return uVar2 + uVar4 + uVar6 + uVar7 & 0xffffffff;
}


// 0x05bd7c0 (0x178 bytes)
ulonglong FUN_005bd7c0(uint *param_1,longlong param_2,longlong param_3)

{
  undefined4 uVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  uint *puVar10;
  longlong lVar9;
  int iVar11;
  
  uVar3 = (ulonglong)*param_1;
  uVar4 = (ulonglong)param_1[1];
  uVar6 = (ulonglong)param_1[2];
  uVar7 = (ulonglong)param_1[3];
  iVar11 = (int)param_3;
  uVar1 = *(undefined4 *)(iVar11 + (int)param_2);
  *(undefined4 *)(iVar11 + (int)param_2) = 0;
  FUN_005bd638(param_2);
  uVar2 = 0;
  lVar9 = param_2;
  while (puVar10 = (uint *)lVar9, 0 < iVar11) {
    param_3 = param_3 + -4;
    uVar8 = uVar7 ^ 0x5b3aa654;
    uVar6 = uVar6 + uVar3 + uVar8;
    uVar6 = (uVar6 & 0x1ffffff) << 7 | (uVar6 << 0x20) >> 0x39;
    uVar4 = uVar4 + uVar8 + uVar6;
    uVar6 = uVar6 ^ 0x75970a4d;
    uVar5 = (uVar4 & 0x1fffff) << 0xb | (uVar4 << 0x20) >> 0x35;
    uVar3 = uVar3 + uVar6 + uVar5;
    uVar2 = (uVar3 & 0x7fff) << 0x11 | (uVar3 << 0x20) >> 0x2f;
    uVar4 = ~uVar5;
    uVar3 = ~uVar2;
    uVar7 = (ulonglong)*puVar10;
    uVar2 = uVar8 + (uVar2 & uVar5 | uVar6 & uVar4) ^ uVar7;
    *puVar10 = (uint)uVar2;
    lVar9 = lVar9 + 4;
    iVar11 = (int)param_3;
  }
  if (iVar11 != 0) {
    uVar7 = uVar7 ^ uVar2 & (uint)(-1 << ((uint)((param_3 + 4U & 0xffffffff) << 3) & 0x1f |
                                         (uint)(param_3 + 4U) >> 0x1d));
  }
  FUN_005bd638(param_2,param_2,(lVar9 - param_2) + param_3);
  *(undefined4 *)((int)param_3 + (int)puVar10) = uVar1;
  *param_1 = (uint)uVar3;
  param_1[1] = (uint)uVar4;
  param_1[2] = (uint)uVar6;
  param_1[3] = (uint)uVar7;
  return uVar3 + uVar4 + uVar6 + uVar7 & 0xffffffff;
}


// 0x05bd940 (0x150 bytes)
ulonglong FUN_005bd940(uint *param_1,uint *param_2,int param_3)

{
  undefined4 uVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  uint *puVar8;
  
  uVar2 = (ulonglong)*param_1;
  uVar4 = (ulonglong)param_1[1];
  uVar6 = (ulonglong)param_1[2];
  uVar7 = (ulonglong)param_1[3];
  uVar1 = *(undefined4 *)(param_3 + (int)param_2);
  *(undefined4 *)(param_3 + (int)param_2) = 0;
  FUN_005bd638(param_2);
  puVar8 = param_2;
  if (0 < param_3) {
    do {
      param_3 = param_3 + -4;
      uVar7 = uVar7 ^ 0x5b3aa654;
      uVar6 = uVar6 + uVar2 + uVar7;
      uVar6 = (uVar6 & 0x1ffffff) << 7 | (uVar6 << 0x20) >> 0x39;
      uVar4 = uVar4 + uVar7 + uVar6;
      uVar6 = uVar6 ^ 0x75970a4d;
      uVar5 = (uVar4 & 0x1fffff) << 0xb | (uVar4 << 0x20) >> 0x35;
      uVar2 = uVar2 + uVar6 + uVar5;
      uVar3 = (uVar2 & 0x7fff) << 0x11 | (uVar2 << 0x20) >> 0x2f;
      uVar4 = ~uVar5;
      uVar2 = ~uVar3;
      uVar7 = uVar7 + (uVar3 & uVar5 | uVar6 & uVar4) ^ (ulonglong)*puVar8;
      puVar8 = puVar8 + 1;
    } while (0 < param_3);
  }
  FUN_005bd638(param_2,param_2,(int)puVar8 + (param_3 - (int)param_2));
  *(undefined4 *)(param_3 + (int)puVar8) = uVar1;
  *param_1 = (uint)uVar2;
  param_1[1] = (uint)uVar4;
  param_1[2] = (uint)uVar6;
  param_1[3] = (uint)uVar7;
  return uVar2 + uVar4 + uVar6 + uVar7 & 0xffffffff;
}


// 0x05bda98 (0x48 bytes)
undefined4 FUN_005bda98(undefined4 param_1)

{
  undefined4 uVar1;
  
  uVar1 = *(undefined4 *)PTR_DAT_0071c1c0;
  *(undefined4 *)PTR_DAT_0071c1c0 = param_1;
  return uVar1;
}


// 0x05bdae0 (0x11c bytes)
void FUN_005bdae0(byte *param_1,int *param_2,uint param_3)

{
  byte bVar1;
  byte *pbVar2;
  byte *pbVar3;
  byte *pbVar4;
  byte *pbStack00000030;
  int *piStack00000038;
  uint local_1c;
  
  pbStack00000030 = param_1;
  piStack00000038 = param_2;
  for (local_1c = 0; local_1c < param_3; local_1c = local_1c + 4) {
    bVar1 = *pbStack00000030;
    pbVar2 = pbStack00000030 + 1;
    pbVar3 = pbStack00000030 + 2;
    pbVar4 = pbStack00000030 + 3;
    pbStack00000030 = pbStack00000030 + 4;
    *piStack00000038 =
         (uint)bVar1 + (uint)*pbVar2 * 0x100 + (uint)*pbVar3 * 0x10000 + (uint)*pbVar4 * 0x1000000;
    piStack00000038 = piStack00000038 + 1;
  }
  return;
}


// 0x05bdbfc (0x104 bytes)
void FUN_005bdbfc(undefined4 *param_1,undefined1 *param_2,uint param_3)

{
  undefined4 uVar1;
  undefined4 *puStack00000030;
  undefined1 *puStack00000038;
  uint local_1c;
  
  puStack00000030 = param_1;
  puStack00000038 = param_2;
  for (local_1c = 0; local_1c < param_3; local_1c = local_1c + 4) {
    uVar1 = *puStack00000030;
    puStack00000030 = puStack00000030 + 1;
    *puStack00000038 = (char)uVar1;
    puStack00000038[1] = (char)((uint)uVar1 >> 8);
    puStack00000038[2] = (char)((uint)uVar1 >> 0x10);
    puStack00000038[3] = (char)((uint)uVar1 >> 0x18);
    puStack00000038 = puStack00000038 + 4;
  }
  return;
}


// 0x05bdd00 (0x160 bytes)
void FUN_005bdd00(byte *param_1,int param_2,uint param_3)

{
  byte *pbStack00000030;
  int *piStack00000038;
  uint local_20;
  
  piStack00000038 = (int *)(param_2 + (param_3 & 0xfffffffc));
  pbStack00000030 = param_1;
  for (local_20 = 0; local_20 < param_3; local_20 = local_20 + 4) {
    piStack00000038 = piStack00000038 + -1;
    *piStack00000038 = (uint)*pbStack00000030 << 0x18;
    *piStack00000038 = *piStack00000038 + (uint)pbStack00000030[1] * 0x10000;
    *piStack00000038 = *piStack00000038 + (uint)pbStack00000030[2] * 0x100;
    *piStack00000038 = *piStack00000038 + (uint)pbStack00000030[3];
    pbStack00000030 = pbStack00000030 + 4;
  }
  return;
}


// 0x05bde60 (0x130 bytes)
void FUN_005bde60(int param_1,undefined1 *param_2,uint param_3)

{
  undefined4 *puStack00000030;
  undefined1 *puStack00000038;
  uint local_20;
  
  puStack00000030 = (undefined4 *)(param_1 + (param_3 & 0xfffffffc));
  puStack00000038 = param_2;
  for (local_20 = 0; local_20 < param_3; local_20 = local_20 + 4) {
    puStack00000030 = puStack00000030 + -1;
    *puStack00000038 = (char)((uint)*puStack00000030 >> 0x18);
    puStack00000038[1] = (char)((uint)*puStack00000030 >> 0x10);
    puStack00000038[2] = (char)((uint)*puStack00000030 >> 8);
    puStack00000038[3] = (char)*puStack00000030;
    puStack00000038 = puStack00000038 + 4;
  }
  return;
}


// 0x05bdf90 (0x74 bytes)
void FUN_005bdf90(undefined4 *param_1,undefined4 param_2)

{
  undefined4 *puStack00000030;
  undefined4 uStack00000038;
  
  puStack00000030 = param_1;
  uStack00000038 = param_2;
  memset(param_1,0,0x200);
  *puStack00000030 = uStack00000038;
  return;
}


// 0x05be004 (0x60 bytes)
bool FUN_005be004(uint *param_1)

{
  return (*param_1 & 1) == 0;
}


// 0x05be064 (0x84 bytes)
undefined4 FUN_005be064(int param_1)

{
  int local_30;
  
  local_30 = 0;
  while( true ) {
    if (0x7f < local_30) {
      return 1;
    }
    if (*(int *)(param_1 + local_30 * 4) != 0) break;
    local_30 = local_30 + 1;
  }
  return 0;
}


// 0x05be0e8 (0xa4 bytes)
undefined4 FUN_005be0e8(int *param_1)

{
  int local_30;
  undefined4 local_20;
  
  if (*param_1 == 1) {
    for (local_30 = 1; local_30 < 0x80; local_30 = local_30 + 1) {
      if (param_1[local_30] != 0) {
        return 0;
      }
    }
    local_20 = 1;
  }
  else {
    local_20 = 0;
  }
  return local_20;
}


// 0x05be18c (0x54 bytes)
bool FUN_005be18c(int param_1)

{
  return *(int *)(param_1 + 0x1fc) < 0;
}


// 0x05be1e0 (0xbc bytes)
undefined4 FUN_005be1e0(int param_1,int param_2)

{
  uint local_28;
  
  local_28 = 0;
  while( true ) {
    if (0x7f < local_28) {
      return 1;
    }
    if (*(int *)(local_28 * 4 + param_1) != *(int *)(local_28 * 4 + param_2)) break;
    local_28 = local_28 + 1;
  }
  return 0;
}


// 0x05be29c (0xa0 bytes)
ulonglong FUN_005be29c(int param_1,uint param_2)

{
  uint uVar1;
  ulonglong uVar2;
  
  uVar1 = *(uint *)(param_1 + (param_2 >> 5) * 4) & 1 << (param_2 + (param_2 >> 5) * -0x20 & 0x3f);
  uVar2 = (ulonglong)((int)uVar1 >> 0x1f);
  return (-((uVar2 ^ uVar1) - uVar2) << 0x20) >> 0x3f;
}


// 0x05be33c (0x9c bytes)
void FUN_005be33c(int param_1,uint param_2)

{
  uint uVar1;
  
  uVar1 = param_2 >> 5;
  *(uint *)(param_1 + uVar1 * 4) =
       *(uint *)(param_1 + uVar1 * 4) | 1 << (param_2 + uVar1 * -0x20 & 0x3f);
  return;
}


// 0x05be3d8 (0xa0 bytes)
void FUN_005be3d8(int param_1,uint param_2)

{
  uint uVar1;
  
  uVar1 = param_2 >> 5;
  *(uint *)(param_1 + uVar1 * 4) =
       *(uint *)(param_1 + uVar1 * 4) & ~(1 << (param_2 + uVar1 * -0x20 & 0x3f));
  return;
}


// 0x05be478 (0xdc bytes)
void FUN_005be478(uint *param_1,uint param_2)

{
  uint *local_20;
  uint local_1c;
  
  local_1c = 0;
  local_20 = param_1;
  do {
    if (0x7f < local_1c) {
      return;
    }
    if (local_1c == 0) {
      *local_20 = *local_20 + param_2;
      if (param_2 <= *local_20) {
        return;
      }
    }
    else {
      *local_20 = *local_20 + 1;
      if (*local_20 != 0) {
        return;
      }
    }
    local_1c = local_1c + 1;
    local_20 = local_20 + 1;
  } while( true );
}


// 0x05be554 (0x124 bytes)
void FUN_005be554(uint *param_1,uint param_2)

{
  uint *local_20;
  uint local_1c;
  
  local_1c = 0;
  local_20 = param_1;
  do {
    if (0x7f < local_1c) {
      return;
    }
    if (local_1c == 0) {
      if (param_2 <= *local_20) {
        *local_20 = *local_20 - param_2;
        return;
      }
      *local_20 = *local_20 - param_2;
    }
    else {
      if (*local_20 != 0) {
        *local_20 = *local_20 - 1;
        return;
      }
      *local_20 = *local_20 - 1;
    }
    local_1c = local_1c + 1;
    local_20 = local_20 + 1;
  } while( true );
}


// 0x05be678 (0xd4 bytes)
void * FUN_005be678(void *param_1,void *param_2,undefined4 param_3)

{
  void *pvVar1;
  void *pvStack00000030;
  void *pvStack00000038;
  undefined4 uStack00000040;
  GPiece<532> auStack_21c;
  
  pvStack00000030 = param_1;
  pvStack00000038 = param_2;
  uStack00000040 = param_3;
  memcpy(auStack_21c,param_2,0x200);
  FUN_005c1300(auStack_21c,uStack00000040);
  pvVar1 = memcpy(pvStack00000030,auStack_21c,0x200);
  return pvVar1;
}


// 0x05be74c (0xd4 bytes)
void * FUN_005be74c(void *param_1,void *param_2,undefined4 param_3)

{
  void *pvVar1;
  void *pvStack00000030;
  void *pvStack00000038;
  undefined4 uStack00000040;
  GPiece<532> auStack_21c;
  
  pvStack00000030 = param_1;
  pvStack00000038 = param_2;
  uStack00000040 = param_3;
  memcpy(auStack_21c,param_2,0x200);
  FUN_005c1338(auStack_21c,uStack00000040);
  pvVar1 = memcpy(pvStack00000030,auStack_21c,0x200);
  return pvVar1;
}


// 0x05be820 (0xd4 bytes)
void * FUN_005be820(void *param_1,void *param_2,undefined4 param_3)

{
  void *pvVar1;
  void *pvStack00000030;
  void *pvStack00000038;
  undefined4 uStack00000040;
  GPiece<532> auStack_21c;
  
  pvStack00000030 = param_1;
  pvStack00000038 = param_2;
  uStack00000040 = param_3;
  memcpy(auStack_21c,param_2,0x200);
  FUN_005c0ed4(auStack_21c,uStack00000040);
  pvVar1 = memcpy(pvStack00000030,auStack_21c,0x200);
  return pvVar1;
}


// 0x05be8f4 (0x288 bytes)
void FUN_005be8f4(void *param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  void *pvStack00000030;
  undefined4 uStack00000038;
  undefined4 uStack00000040;
  uint local_420;
  GPiece<512> auStack_418;
  GPiece<528> auStack_218;
  
  pvStack00000030 = param_1;
  uStack00000038 = param_2;
  uStack00000040 = param_3;
  iVar1 = FUN_005c1378(param_2);
  while( true ) {
    memcpy(auStack_218,pvStack00000030,0x200);
    local_420 = FUN_005c1378(auStack_218);
    if (local_420 < iVar1 + 2U) break;
    if (local_420 < 0x801) {
      local_420 = 0x800;
    }
    else {
      FUN_005c11f0(auStack_218,local_420 - 0x800);
    }
    FUN_005c13d0(auStack_418,auStack_218,uStack00000040);
    FUN_005c11f0(auStack_418,0x800);
    FUN_005c1300(auStack_218,auStack_418);
    if (local_420 < iVar1 + 0x800U) {
      FUN_005c11f0(auStack_218,(iVar1 - local_420) + 0x800);
    }
    else if (iVar1 + 0x800U < local_420) {
      FUN_005c1278(auStack_218,(local_420 - iVar1) + -0x800);
    }
    FUN_005c13d0(auStack_218,auStack_218,uStack00000038);
    FUN_005c1338(pvStack00000030,auStack_218);
  }
  while (iVar1 = FUN_005c11a8(pvStack00000030,uStack00000038), iVar1 != 0) {
    FUN_005c1338(pvStack00000030,uStack00000038);
  }
  return;
}


// 0x05beb7c (0x56c bytes)
void * FUN_005beb7c(void *param_1,void *param_2)

{
  int iVar1;
  void *pvVar2;
  int iVar3;
  void *pvStack00000030;
  void *pvStack00000038;
  GPiece<256> auStack_81c;
  int local_71c;
  GPiece<512> auStack_61c;
  GPiece<512> auStack_41c;
  GPiece<532> auStack_21c;
  
  pvStack00000030 = param_1;
  pvStack00000038 = param_2;
  memcpy(auStack_61c,param_1,0x200);
  iVar1 = FUN_005c1378(auStack_61c);
  if (iVar1 < 0x801) {
    if (iVar1 < 0x800) {
      FUN_005c1278(auStack_61c,0x800 - iVar1);
    }
  }
  else {
    FUN_005c11f0(auStack_61c,iVar1 + -0x800);
  }
  FUN_005bdf90(auStack_41c,0);
  FUN_005be33c(auStack_41c,0x800);
  FUN_005c1338(auStack_41c,auStack_61c);
  memcpy(auStack_81c,auStack_41c,0x200);
  while( true ) {
    if (local_71c != 0) {
      FUN_005bdf90(auStack_81c,1);
      FUN_005c1278(auStack_81c,0x800);
      FUN_005be554(auStack_81c,1);
      pvVar2 = memcpy(pvStack00000038,auStack_81c,0x200);
      return pvVar2;
    }
    FUN_005c13d0(auStack_21c,auStack_81c,auStack_61c);
    FUN_005c11f0(auStack_21c,0x800);
    iVar3 = FUN_005be1e0(auStack_21c,auStack_41c);
    if (iVar3 != 0) break;
    FUN_005be74c(auStack_21c,auStack_41c,auStack_21c);
    FUN_005c1300(auStack_81c,auStack_21c);
    FUN_005c13d0(auStack_21c,auStack_21c,auStack_81c);
    FUN_005c11f0(auStack_21c,0x800);
    FUN_005c1300(auStack_81c,auStack_21c);
  }
  FUN_005c13d0(auStack_21c,auStack_81c,auStack_61c);
  FUN_005bdf90(auStack_41c,0);
  FUN_005be33c(auStack_41c,iVar1);
  FUN_005c1338(auStack_41c,pvStack00000030);
  FUN_005c1278(auStack_41c,0x1000 - iVar1);
  FUN_005c1338(auStack_21c,auStack_41c);
  if (0x800 < iVar1) {
    memcpy(auStack_41c,pvStack00000030,0x200);
    FUN_005c1278(auStack_41c,0x1800 - iVar1);
    FUN_005c11f0(auStack_41c,0x800);
    FUN_005c13d0(auStack_41c,auStack_41c,auStack_81c);
    FUN_005c11f0(auStack_41c,0x800);
    FUN_005c1300(auStack_21c,auStack_41c);
  }
  iVar1 = FUN_005be18c(auStack_21c);
  if (iVar1 == 0) {
    while (iVar1 = FUN_005c11a8(auStack_21c,auStack_61c), iVar1 != 0) {
      FUN_005be554(auStack_81c,1);
      FUN_005c1338(auStack_21c,auStack_61c);
    }
    FUN_005be554(auStack_81c,1);
  }
  pvVar2 = memcpy(pvStack00000038,auStack_81c,0x200);
  return pvVar2;
}


// 0x05bf0e8 (0x7b4 bytes)
void * FUN_005bf0e8(void *param_1,undefined4 param_2,void *param_3)

{
  int iVar1;
  void *pvVar2;
  void *pvStack00000030;
  undefined4 uStack00000038;
  void *pvStack00000040;
  undefined1 *local_c20;
  uint local_c1c;
  uint local_c18;
  GPiece<512> auStack_c10;
  GPiece<512> auStack_a10;
  GPiece<512> auStack_810;
  GPiece<512> auStack_610;
  GPiece<512> auStack_410;
  GPiece<520> auStack_210;
  
  pvStack00000030 = param_1;
  uStack00000038 = param_2;
  pvStack00000040 = param_3;
  FUN_005beb7c(param_2,auStack_410);
  FUN_005bdf90(auStack_c10,1);
  memcpy(auStack_810,pvStack00000030,0x200);
  FUN_005be8f4(auStack_810,uStack00000038,auStack_410);
  FUN_005bf89c(uStack00000038,auStack_810,auStack_a10,auStack_610);
  FUN_005c1300(auStack_a10,auStack_c10);
  FUN_005be74c(auStack_610,auStack_810,auStack_610);
  local_c18 = FUN_005c1378(auStack_810);
  local_c1c = FUN_005c1378(auStack_610);
  do {
    while (local_c1c <= local_c18 + 1) {
      if (local_c1c + 1 < local_c18) {
        memcpy(auStack_210,auStack_a10,0x200);
        FUN_005c1278(auStack_610,(local_c18 - local_c1c) + -1);
        FUN_005c1278(auStack_210,(local_c18 - local_c1c) + -1);
        FUN_005be8f4(auStack_210,uStack00000038,auStack_410);
        iVar1 = FUN_005c1118(auStack_c10,auStack_210);
        if (iVar1 != 0) {
          FUN_005c1300(auStack_c10,uStack00000038);
        }
        FUN_005c1338(auStack_c10,auStack_210);
        FUN_005c1338(auStack_810,auStack_610);
        FUN_005c11f0(auStack_610,(local_c18 - local_c1c) + -1);
        iVar1 = FUN_005be0e8(auStack_810);
        if (iVar1 != 0) {
          local_c20 = auStack_c10;
          goto LAB_005bf850;
        }
        local_c18 = FUN_005c1378(auStack_810);
      }
      else {
        iVar1 = FUN_005c10d0(auStack_810,auStack_610);
        if (iVar1 == 0) {
          iVar1 = FUN_005c1118(auStack_810,auStack_610);
          if (iVar1 == 0) {
            FUN_005c1300(auStack_610,pvStack00000030);
            FUN_005be478(auStack_a10,1);
            local_c1c = FUN_005c1378(auStack_610);
          }
          else {
            iVar1 = FUN_005c1118(auStack_a10,auStack_c10);
            if (iVar1 != 0) {
              FUN_005c1300(auStack_a10,uStack00000038);
            }
            FUN_005c1338(auStack_a10,auStack_c10);
            FUN_005c1338(auStack_610,auStack_810);
            iVar1 = FUN_005be0e8(auStack_610);
            if (iVar1 != 0) {
              local_c20 = auStack_a10;
LAB_005bf850:
              pvVar2 = memcpy(pvStack00000040,local_c20,0x200);
              return pvVar2;
            }
            local_c1c = FUN_005c1378(auStack_610);
          }
        }
        else {
          iVar1 = FUN_005c1118(auStack_c10,auStack_a10);
          if (iVar1 != 0) {
            FUN_005c1300(auStack_c10,uStack00000038);
          }
          FUN_005c1338(auStack_c10,auStack_a10);
          FUN_005c1338(auStack_810,auStack_610);
          iVar1 = FUN_005be0e8(auStack_810);
          if (iVar1 != 0) {
            local_c20 = auStack_c10;
            goto LAB_005bf850;
          }
          local_c18 = FUN_005c1378(auStack_810);
        }
      }
    }
    memcpy(auStack_210,auStack_c10,0x200);
    FUN_005c1278(auStack_810,(local_c1c - local_c18) + -1);
    FUN_005c1278(auStack_210,(local_c1c - local_c18) + -1);
    FUN_005be8f4(auStack_210,uStack00000038,auStack_410);
    iVar1 = FUN_005c1118(auStack_a10,auStack_210);
    if (iVar1 != 0) {
      FUN_005c1300(auStack_a10,uStack00000038);
    }
    FUN_005c1338(auStack_a10,auStack_210);
    FUN_005c1338(auStack_610,auStack_810);
    FUN_005c11f0(auStack_810,(local_c1c - local_c18) + -1);
    iVar1 = FUN_005be0e8(auStack_610);
    if (iVar1 != 0) {
      local_c20 = auStack_a10;
      goto LAB_005bf850;
    }
    local_c1c = FUN_005c1378(auStack_610);
  } while( true );
}


// 0x05bf89c (0x3d4 bytes)
void * FUN_005bf89c(void *param_1,undefined4 param_2,void *param_3,void *param_4)

{
  int iVar1;
  void *pvVar2;
  void *pvStack00000030;
  undefined4 uStack00000038;
  void *pvStack00000040;
  void *pvStack00000048;
  uint local_81c;
  GPiece<512> auStack_814;
  GPiece<512> auStack_614;
  GPiece<512> auStack_414;
  GPiece<524> auStack_214;
  
  pvStack00000030 = param_1;
  uStack00000038 = param_2;
  pvStack00000040 = param_3;
  pvStack00000048 = param_4;
  iVar1 = FUN_005c1378(param_2);
  FUN_005beb7c(uStack00000038,auStack_614);
  FUN_005bdf90(auStack_414,0);
  memcpy(auStack_814,pvStack00000030,0x200);
  while( true ) {
    local_81c = FUN_005c1378(auStack_814);
    if (local_81c < iVar1 + 2U) break;
    if (local_81c < 0x801) {
      local_81c = 0x800;
    }
    else {
      FUN_005c11f0(auStack_814,local_81c - 0x800);
    }
    FUN_005c13d0(auStack_214,auStack_814,auStack_614);
    FUN_005c11f0(auStack_214,0x800);
    FUN_005c1300(auStack_214,auStack_814);
    if (local_81c < iVar1 + 0x800U) {
      FUN_005c11f0(auStack_214,(iVar1 - local_81c) + 0x800);
    }
    else if (iVar1 + 0x800U < local_81c) {
      FUN_005c1278(auStack_214,(local_81c - iVar1) + -0x800);
    }
    FUN_005c1300(auStack_414,auStack_214);
    if (0x800 < local_81c) {
      memcpy(auStack_814,pvStack00000030,0x200);
      memcpy(auStack_214,auStack_414,0x200);
    }
    FUN_005c13d0(auStack_214,auStack_214,uStack00000038);
    FUN_005c1338(auStack_814,auStack_214);
  }
  while( true ) {
    iVar1 = FUN_005c11a8(auStack_814,uStack00000038);
    if (iVar1 == 0) break;
    FUN_005be478(auStack_414,1);
    FUN_005c1338(auStack_814,uStack00000038);
  }
  memcpy(pvStack00000040,auStack_414,0x200);
  pvVar2 = memcpy(pvStack00000048,auStack_814,0x200);
  return pvVar2;
}


// 0x05bfc70 (0x2c4 bytes)
void * FUN_005bfc70(void *param_1,void *param_2,int param_3,void *param_4)

{
  int iVar1;
  int iVar2;
  void *pvVar3;
  void *pvStack00000030;
  void *pvStack00000038;
  int iStack00000040;
  void *pvStack00000048;
  uint local_428;
  uint local_424;
  uint local_420;
  GPiece<512> auStack_41c;
  GPiece<532> auStack_21c;
  
  pvStack00000030 = param_1;
  pvStack00000038 = param_2;
  iStack00000040 = param_3;
  pvStack00000048 = param_4;
  iVar1 = FUN_005c1378(param_3);
  iVar2 = FUN_005be064(pvStack00000048);
  if (iVar2 == 0) {
    FUN_005beb7c(pvStack00000048,auStack_41c);
    memcpy(auStack_21c,pvStack00000038,0x200);
    FUN_005be8f4(auStack_21c,pvStack00000048,auStack_41c);
    local_420 = iVar1 - 1;
    local_428 = 1 << (local_420 & 0x1f);
    local_424 = local_420 >> 5;
    for (; local_420 != 0; local_420 = local_420 - 1) {
      local_428 = local_428 >> 1;
      if (local_428 == 0) {
        local_428 = 0x80000000;
        local_424 = local_424 - 1;
      }
      FUN_005c13d0(auStack_21c,auStack_21c,auStack_21c);
      FUN_005be8f4(auStack_21c,pvStack00000048,auStack_41c);
      if ((*(uint *)(iStack00000040 + local_424 * 4) & local_428) != 0) {
        FUN_005c13d0(auStack_21c,auStack_21c,pvStack00000038);
        FUN_005be8f4(auStack_21c,pvStack00000048,auStack_41c);
      }
    }
    pvVar3 = memcpy(pvStack00000030,auStack_21c,0x200);
  }
  else {
    pvVar3 = memcpy(pvStack00000030,pvStack00000048,0x200);
  }
  return pvVar3;
}


// 0x05bff34 (0x2a4 bytes)
undefined4 FUN_005bff34(void *param_1,undefined4 param_2)

{
  int iVar1;
  void *pvStack00000030;
  undefined4 uStack00000038;
  uint local_62c;
  uint local_628;
  GPiece<512> auStack_624;
  GPiece<512> auStack_424;
  GPiece<516> auStack_224;
  undefined4 local_20;
  
  pvStack00000030 = param_1;
  uStack00000038 = param_2;
  memcpy(auStack_624,param_1,0x200);
  FUN_005be554(auStack_624,1);
  memcpy(auStack_424,auStack_624,0x200);
  local_628 = 0;
  while (iVar1 = FUN_005be29c(auStack_424,local_628), iVar1 == 0) {
    local_628 = local_628 + 1;
  }
  if (local_628 != 0) {
    FUN_005c11f0(auStack_424,local_628);
  }
  FUN_005c07f4(auStack_224,uStack00000038,auStack_424,pvStack00000030);
  iVar1 = FUN_005be0e8(auStack_224);
  if ((iVar1 == 0) && (iVar1 = FUN_005be1e0(auStack_224,auStack_624), iVar1 == 0)) {
    for (local_62c = 1; local_62c < local_628; local_62c = local_62c + 1) {
      FUN_005c13d0(auStack_224,auStack_224,auStack_224);
      FUN_005c0ed4(auStack_224,pvStack00000030);
      iVar1 = FUN_005be1e0(auStack_224,auStack_624);
      if (iVar1 != 0) {
        return 1;
      }
      iVar1 = FUN_005be0e8(auStack_224);
      if (iVar1 != 0) {
        return 0;
      }
    }
    local_20 = 0;
  }
  else {
    local_20 = 1;
  }
  return local_20;
}


// 0x05c01d8 (0x154 bytes)
void FUN_005c01d8(int param_1,uint param_2)

{
  undefined4 uVar1;
  uint uVar2;
  int iStack00000030;
  uint uStack00000038;
  undefined4 local_30;
  
  local_30 = 0;
  uStack00000038 = param_2;
  if (0x1000 < param_2) {
    uStack00000038 = 0x1000;
  }
  iStack00000030 = param_1;
  if (*(int *)PTR_DAT_0071c1c4 == 0) {
    *(undefined4 *)PTR_DAT_0071c1c4 = 1;
    FUN_00552944(0x2eb3ae77);
  }
  for (; 0x20 < uStack00000038; uStack00000038 = uStack00000038 - 0x20) {
    uVar1 = FUN_00552968();
    *(undefined4 *)(iStack00000030 + local_30 * 4) = uVar1;
    local_30 = local_30 + 1;
  }
  uVar2 = FUN_00552968();
  *(uint *)(iStack00000030 + local_30 * 4) = (uVar2 | 0x80000000) >> (0x20 - uStack00000038 & 0x3f);
  while (local_30 = local_30 + 1, local_30 < 0x80) {
    *(undefined4 *)(iStack00000030 + local_30 * 4) = 0;
  }
  return;
}


// 0x05c032c (0x1cc bytes)
int FUN_005c032c(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 uStack00000030;
  undefined4 uStack00000038;
  undefined4 *local_40;
  byte *local_3c;
  int local_38;
  uint local_34;
  int local_30;
  int local_28;
  undefined4 *local_1c;
  
  local_28 = 1;
  local_34 = 0;
  local_38 = 0;
  local_3c = PTR_DAT_0071c1c8;
  local_40 = (undefined4 *)PTR_PTR_0071c1cc;
  uStack00000030 = param_1;
  uStack00000038 = param_2;
  iVar1 = FUN_005c1378(param_1);
  local_30 = *(int *)PTR_DAT_0071c1d0;
  while( true ) {
    if (local_38 == 0) {
      local_34 = (uint)*local_3c;
      local_3c = local_3c + 1;
      local_38 = 8;
    }
    if ((local_34 & 1) == 0) {
      local_1c = (undefined4 *)*local_40;
    }
    else {
      local_1c = (undefined4 *)local_40[1];
    }
    local_40 = local_1c;
    local_34 = local_34 >> 1;
    local_38 = local_38 + -1;
    if (local_1c[2] == 0) break;
    if (local_1c[2] != -1) {
      local_30 = local_30 + local_1c[2];
      local_28 = FUN_005c1500(uStack00000030,local_30,iVar1 + 0x1fU >> 5);
      if (local_28 == 0) {
        return 0;
      }
    }
  }
  return local_28;
}


// 0x05c04f8 (0x2fc bytes)
void FUN_005c04f8(uint *param_1,uint param_2)

{
  int iVar1;
  uint *puStack00000030;
  uint uStack00000038;
  uint local_240;
  undefined4 *local_23c;
  byte *local_238;
  int local_234;
  uint local_230;
  int local_22c;
  GPiece<520> auStack_228;
  undefined4 *local_20;
  
  local_230 = 0;
  local_234 = 0;
  local_238 = PTR_DAT_0071c1d4;
  local_23c = (undefined4 *)PTR_PTR_0071c1cc;
  puStack00000030 = param_1;
  uStack00000038 = param_2;
  do {
    FUN_005c01d8(puStack00000030,uStack00000038);
    *puStack00000030 = *puStack00000030 | 1;
    FUN_005be33c(puStack00000030,uStack00000038 - 2);
    iVar1 = FUN_005c1500(puStack00000030,0x906,((ulonglong)uStack00000038 + 0x1f << 0x20) >> 0x25);
    FUN_005be478(puStack00000030,0x906 - iVar1);
    *puStack00000030 = *puStack00000030 | 1;
    do {
      do {
        do {
          if (local_234 == 0) {
            local_230 = (uint)*local_238;
            local_238 = local_238 + 1;
            local_234 = 8;
          }
          if ((local_230 & 1) == 0) {
            local_20 = (undefined4 *)*local_23c;
          }
          else {
            local_20 = (undefined4 *)local_23c[1];
          }
          local_23c = local_20;
          local_230 = local_230 >> 1;
          local_234 = local_234 + -1;
          if (local_20[2] == 0) {
            local_23c = (undefined4 *)PTR_PTR_0071c1cc;
            local_238 = PTR_DAT_0071c1d4;
            local_234 = 0;
          }
        } while (local_23c[2] == -1);
        FUN_005be478(puStack00000030,local_23c[2]);
        iVar1 = FUN_005c032c(puStack00000030,0x800);
      } while (iVar1 == 0);
      local_22c = 1;
      FUN_005bdf90(auStack_228,0);
      local_240 = 0x24242212;
      while ((local_240 != 0 && (local_22c != 0))) {
        FUN_005be478(auStack_228,local_240 & 0xf);
        local_240 = local_240 >> 4;
        local_22c = FUN_005bff34(puStack00000030,auStack_228);
      }
    } while (local_22c == 0);
  } while (local_22c == 0);
  return;
}


// 0x05c07f4 (0x498 bytes)
void * FUN_005c07f4(void *param_1,void *param_2,int param_3,uint *param_4)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  void *pvVar4;
  void *pvStack00000030;
  void *pvStack00000038;
  int iStack00000040;
  uint *puStack00000048;
  uint local_420;
  uint local_41c;
  uint local_418;
  GPiece<512> auStack_414;
  GPiece<524> auStack_214;
  
  pvStack00000030 = param_1;
  pvStack00000038 = param_2;
  iStack00000040 = param_3;
  puStack00000048 = param_4;
  uVar1 = FUN_005c1378(param_4);
  iVar2 = FUN_005c1378(iStack00000040);
  iVar3 = FUN_005be064(puStack00000048);
  if (iVar3 == 0) {
    iVar3 = FUN_005be004(puStack00000048);
    if (iVar3 == 0) {
      iVar3 = *puStack00000048 + (int)(((ulonglong)*puStack00000048 + 2 & 4) << 1);
      iVar3 = iVar3 * (2 - *puStack00000048 * iVar3);
      iVar3 = iVar3 * (2 - *puStack00000048 * iVar3);
      iVar3 = -(iVar3 * (2 - *puStack00000048 * iVar3));
      memcpy(auStack_414,pvStack00000038,0x200);
      FUN_005c1278(auStack_414,uVar1);
      FUN_005c0ed4(auStack_414,puStack00000048);
      if (iVar2 == 0) {
        pvVar4 = (void *)FUN_005bdf90(pvStack00000030,1);
      }
      else {
        memcpy(auStack_214,auStack_414,0x200);
        local_418 = iVar2 - 1;
        local_420 = 1 << (local_418 & 0x1f);
        local_41c = local_418 >> 5;
        for (; local_418 != 0; local_418 = local_418 - 1) {
          local_420 = local_420 >> 1;
          if (local_420 == 0) {
            local_420 = 0x80000000;
            local_41c = local_41c - 1;
          }
          FUN_005c1540(auStack_214,auStack_214,auStack_214,puStack00000048,iVar3);
          if ((*(uint *)(iStack00000040 + local_41c * 4) & local_420) != 0) {
            FUN_005c1540(auStack_214,auStack_214,auStack_414,puStack00000048,iVar3);
          }
          if (*(int *)PTR_DAT_0071c1c0 != 0) {
            (*(code *)**(undefined4 **)PTR_DAT_0071c1c0)();
          }
        }
        FUN_005bdf90(auStack_414,1);
        FUN_005c1540(auStack_214,auStack_214,auStack_414,puStack00000048,iVar3);
        pvVar4 = memcpy(pvStack00000030,auStack_214,0x200);
      }
    }
    else {
      pvVar4 = (void *)FUN_005bfc70(pvStack00000030,pvStack00000038,iStack00000040,puStack00000048);
    }
  }
  else {
    pvVar4 = memcpy(pvStack00000030,puStack00000048,0x200);
  }
  return pvVar4;
}


// 0x05c0c8c (0x248 bytes)
void FUN_005c0c8c(void *param_1,void *param_2,undefined4 param_3,uint param_4)

{
  int iVar1;
  void *pvStack00000030;
  void *pvStack00000038;
  undefined4 uStack00000040;
  uint uStack00000048;
  GPiece<512> auStack_41c;
  GPiece<532> auStack_21c;
  
  pvStack00000030 = param_1;
  pvStack00000038 = param_2;
  uStack00000040 = param_3;
  uStack00000048 = param_4;
  do {
    FUN_005c04f8(auStack_41c,uStack00000048 >> 1);
    iVar1 = FUN_005c1500(auStack_41c,uStack00000040,
                         ((ulonglong)(uStack00000048 >> 1) + 0x1f << 0x20) >> 0x25);
  } while (iVar1 == 1);
  memcpy(auStack_21c,auStack_41c,0x200);
  do {
    FUN_005c04f8(auStack_41c,uStack00000048 >> 1);
    iVar1 = FUN_005c1500(auStack_41c,uStack00000040,
                         ((ulonglong)(uStack00000048 >> 1) + 0x1f << 0x20) >> 0x25);
  } while (iVar1 == 1);
  FUN_005c13d0(pvStack00000030,auStack_41c,auStack_21c);
  memcpy(pvStack00000038,pvStack00000030,0x200);
  FUN_005c1338(pvStack00000038,auStack_41c);
  FUN_005c1338(pvStack00000038,auStack_21c);
  FUN_005be478(pvStack00000038,1);
  FUN_005bdf90(auStack_41c,uStack00000040);
  FUN_005bf0e8(auStack_41c,pvStack00000038,pvStack00000038);
  return;
}


// 0x05c0ed4 (0x1fc bytes)
void FUN_005c0ed4(undefined4 param_1,void *param_2)

{
  uint uVar1;
  int iVar2;
  undefined4 uStack00000030;
  void *pvStack00000038;
  uint local_21c;
  uint local_218;
  GPiece<524> auStack_214;
  
  uStack00000030 = param_1;
  pvStack00000038 = param_2;
  memcpy(auStack_214,param_2,0x200);
  local_218 = FUN_005c1378(uStack00000030);
  uVar1 = FUN_005c1378(auStack_214);
  local_21c = uVar1;
  if (uVar1 < local_218) {
    FUN_005c1278(auStack_214,local_218 - uVar1);
    local_21c = local_218;
  }
  while( true ) {
    while( true ) {
      if (local_218 < uVar1) {
        return;
      }
      if (local_218 < local_21c) {
        FUN_005c11f0(auStack_214,local_21c - local_218);
        local_21c = local_218;
      }
      iVar2 = FUN_005c11a8(uStack00000030,auStack_214);
      if (iVar2 == 0) break;
      FUN_005c1338(uStack00000030,auStack_214);
      local_218 = FUN_005c1378(uStack00000030);
    }
    if (local_21c <= uVar1) break;
    FUN_005c11f0(auStack_214,1);
    local_21c = local_21c - 1;
  }
  return;
}


// 0x05c10d0 (0x40 bytes)
undefined8 FUN_005c10d0(int param_1,int param_2)

{
  int iVar1;
  
  iVar1 = 0x200;
  while( true ) {
    iVar1 = iVar1 + -4;
    if (*(uint *)(iVar1 + param_1) < *(uint *)(iVar1 + param_2)) {
      return 0;
    }
    if (*(uint *)(iVar1 + param_2) < *(uint *)(iVar1 + param_1)) break;
    if (iVar1 < 1) {
      return 0;
    }
  }
  return 1;
}


// 0x05c1118 (0x40 bytes)
undefined8 FUN_005c1118(int param_1,int param_2)

{
  int iVar1;
  
  iVar1 = 0x200;
  while( true ) {
    iVar1 = iVar1 + -4;
    if (*(uint *)(iVar1 + param_2) < *(uint *)(iVar1 + param_1)) {
      return 0;
    }
    if (*(uint *)(iVar1 + param_1) < *(uint *)(iVar1 + param_2)) break;
    if (iVar1 < 1) {
      return 0;
    }
  }
  return 1;
}


// 0x05c1160 (0x40 bytes)
undefined8 FUN_005c1160(int param_1,int param_2)

{
  int iVar1;
  
  iVar1 = 0x200;
  while( true ) {
    iVar1 = iVar1 + -4;
    if (*(uint *)(iVar1 + param_1) < *(uint *)(iVar1 + param_2)) {
      return 1;
    }
    if (*(uint *)(iVar1 + param_2) < *(uint *)(iVar1 + param_1)) break;
    if (iVar1 < 1) {
      return 1;
    }
  }
  return 0;
}


// 0x05c11a8 (0x40 bytes)
undefined8 FUN_005c11a8(int param_1,int param_2)

{
  int iVar1;
  
  iVar1 = 0x200;
  while( true ) {
    iVar1 = iVar1 + -4;
    if (*(uint *)(iVar1 + param_2) < *(uint *)(iVar1 + param_1)) {
      return 1;
    }
    if (*(uint *)(iVar1 + param_1) < *(uint *)(iVar1 + param_2)) break;
    if (iVar1 < 1) {
      return 1;
    }
  }
  return 0;
}


// 0x05c11f0 (0x80 bytes)
void FUN_005c11f0(int param_1,ulonglong param_2)

{
  longlong lVar1;
  uint uVar3;
  longlong lVar2;
  int iVar4;
  ulonglong uVar5;
  
  iVar4 = 0;
  lVar1 = (param_2 & 0x1f ^ 0x1f) + 1;
  lVar2 = (param_2 >> 5 & 0x7ffffff) << 2;
  uVar5 = 0;
  uVar3 = (uint)lVar2;
  if ((uVar3 < 0x1fd) && (uVar5 = (ulonglong)*(uint *)(uVar3 + param_1) << 0x20, uVar3 != 0x1fc)) {
    do {
      lVar2 = lVar2 + 4;
      uVar3 = *(uint *)((int)lVar2 + param_1);
      uVar5 = uVar5 | uVar3;
      *(uint *)(iVar4 + param_1) = (uint)(uVar5 << lVar1) | (uint)(uVar5 >> 0x40 - lVar1);
      iVar4 = iVar4 + 4;
      uVar5 = (ulonglong)uVar3 << 0x20;
    } while ((int)lVar2 < 0x1fc);
  }
  uVar5 = (uVar5 << lVar1 | uVar5 >> 0x40 - lVar1) & 0xffffffff;
  do {
    *(int *)(iVar4 + param_1) = (int)uVar5;
    iVar4 = iVar4 + 4;
    uVar5 = 0;
  } while (iVar4 < 0x200);
  return;
}


// 0x05c1278 (0x84 bytes)
void FUN_005c1278(int param_1,ulonglong param_2)

{
  uint uVar1;
  ulonglong uVar2;
  int iVar4;
  longlong lVar3;
  int iVar5;
  ulonglong uVar6;
  
  uVar2 = param_2 & 0x1f;
  iVar5 = 0x200;
  lVar3 = (param_2 >> 5 & 0x7ffffff) * -4;
  iVar4 = (int)lVar3 + 0x200;
  uVar6 = 0;
  if (3 < iVar4) {
    lVar3 = lVar3 + 0x1fc;
    uVar6 = (ulonglong)*(uint *)((int)lVar3 + param_1);
    if (iVar4 != 4) {
      do {
        lVar3 = lVar3 + -4;
        uVar1 = *(uint *)((int)lVar3 + param_1);
        uVar6 = uVar6 | (ulonglong)uVar1 << 0x20;
        iVar5 = iVar5 + -4;
        *(uint *)(iVar5 + param_1) = (uint)(uVar6 << uVar2) | (uint)(uVar6 >> 0x40 - uVar2);
        uVar6 = (ulonglong)uVar1;
      } while (0 < (int)lVar3);
    }
  }
  do {
    iVar5 = iVar5 + -4;
    *(uint *)(iVar5 + param_1) = (uint)(uVar6 << uVar2) | (uint)(uVar6 >> 0x40 - uVar2);
    uVar6 = 0;
  } while (0 < iVar5);
  return;
}


// 0x05c1300 (0x34 bytes)
void FUN_005c1300(int param_1,int param_2)

{
  bool bVar1;
  int iVar2;
  ulonglong uVar3;
  
  iVar2 = 0;
  uVar3 = 0;
  do {
    uVar3 = (uVar3 >> 0x20) + (ulonglong)*(uint *)(iVar2 + param_1) +
            (ulonglong)*(uint *)(iVar2 + param_2);
    bVar1 = iVar2 < 0x1fc;
    *(int *)(iVar2 + param_1) = (int)uVar3;
    iVar2 = iVar2 + 4;
  } while (bVar1);
  return;
}


// 0x05c1338 (0x38 bytes)
void FUN_005c1338(int param_1,int param_2)

{
  bool bVar1;
  int iVar2;
  longlong lVar3;
  
  iVar2 = 0;
  lVar3 = 0;
  do {
    lVar3 = ((longlong)(int)((ulonglong)lVar3 >> 0x20) + (ulonglong)*(uint *)(iVar2 + param_1)) -
            (ulonglong)*(uint *)(iVar2 + param_2);
    bVar1 = iVar2 < 0x1fc;
    *(int *)(iVar2 + param_1) = (int)lVar3;
    iVar2 = iVar2 + 4;
  } while (bVar1);
  return;
}


// 0x05c1378 (0x50 bytes)
longlong FUN_005c1378(int param_1)

{
  int iVar1;
  ulonglong uVar2;
  int iVar3;
  
  uVar2 = 0x200;
  do {
    iVar3 = (int)uVar2;
    uVar2 = uVar2 - 4;
    iVar1 = *(int *)((int)uVar2 + param_1);
    if (iVar3 < 5) {
      if (iVar1 == 0) {
        iVar1 = 1;
      }
      break;
    }
  } while (iVar1 == 0);
  return ((uVar2 * 8 & 0xffffffff | uVar2 >> 0x3d) + 0x20) - LZCOUNT(iVar1);
}


// 0x05c13d0 (0x12c bytes)
void FUN_005c13d0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  uint uVar1;
  longlong lVar2;
  int iVar5;
  ulonglong uVar3;
  ulonglong uVar4;
  ulonglong uVar6;
  int iVar8;
  ulonglong uVar7;
  longlong lVar9;
  longlong lVar10;
  ulonglong local_250 [65];
  undefined8 local_48;
  uint local_40;
  undefined8 local_38;
  undefined8 local_30;
  undefined8 local_28;
  
  local_250[0] = ZEXT48(&stack0x00000000);
  local_48 = param_1;
  local_38 = param_8;
  local_30 = param_7;
  local_28 = param_6;
  lVar2 = FUN_005c1378(param_2);
  iVar8 = (int)param_2;
  uVar6 = lVar2 + 0x1fU >> 3;
  local_40 = (uint)uVar6 & 0xfffffffc;
  uVar6 = uVar6 & 0xfffffffc;
  lVar2 = FUN_005c1378(param_3);
  iVar5 = 0;
  do {
    *(undefined4 *)((int)local_250 + iVar5) = 0;
    iVar5 = iVar5 + 4;
  } while (iVar5 < 0x208);
  do {
    uVar6 = uVar6 - 4;
    uVar1 = *(uint *)((int)uVar6 + iVar8);
    uVar7 = (ulonglong)((uint)(lVar2 + 0x1fU >> 3) & 0xfffffffc);
    lVar9 = uVar7 + uVar6;
    if (0x200 < (int)lVar9) {
      lVar9 = 0x200;
      uVar7 = 0x200 - uVar6;
    }
    do {
      uVar7 = uVar7 - 4;
      lVar9 = lVar9 + -4;
      uVar3 = (ulonglong)*(uint *)((int)uVar7 + (int)param_3) * (ulonglong)uVar1;
      lVar10 = lVar9;
      do {
        uVar4 = uVar3 + *(uint *)((int)local_250 + (int)lVar10);
        *(int *)((int)local_250 + (int)lVar10) = (int)uVar4;
        uVar3 = uVar4 >> 0x20;
        lVar10 = lVar10 + 4;
      } while ((int)(uVar4 >> 0x20) != 0);
    } while (0 < (int)uVar7);
  } while (0 < (int)uVar6);
  iVar5 = 0;
  do {
    *(undefined4 *)(iVar5 + (int)local_48) = *(undefined4 *)((int)local_250 + iVar5);
    iVar5 = iVar5 + 4;
  } while (iVar5 < 0x200);
  return;
}


// 0x05c1500 (0x38 bytes)
longlong FUN_005c1500(int param_1,ulonglong param_2,ulonglong param_3)

{
  longlong lVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  
  lVar1 = 0;
  uVar3 = (param_3 & 0x3fffffff) << 2 | param_3 >> 0x3e;
  do {
    uVar3 = uVar3 - 4;
    uVar2 = (lVar1 << 0x20) + (ulonglong)*(uint *)((int)uVar3 + param_1);
    lVar1 = uVar2 - (uVar2 / param_2) * param_2;
  } while (0 < (int)uVar3);
  return lVar1;
}


// 0x05c1540 (0x194 bytes)
// strings: 005c159c: '}H(.})Jx|' (raw)

undefined8
FUN_005c1540(ulonglong param_1,ulonglong param_2,ulonglong param_3,ulonglong param_4,
            longlong param_5)

{
  longlong lVar1;
  uint uVar2;
  ulonglong *puVar3;
  uint uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  longlong lVar7;
  int iVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  int iVar11;
  int iVar12;
  ulonglong in_LR;
  
  lVar1 = ZEXT48(&stack0x00000000) - 0x260;
  puVar3 = (ulonglong *)lVar1;
  *puVar3 = ZEXT48(&stack0x00000000);
  puVar3[0x4a] = in_LR;
  puVar3[0x44] = param_1;
  puVar3[0x45] = param_2;
  puVar3[0x46] = param_3;
  puVar3[0x47] = param_4;
  iVar8 = 0;
  do {
    *(undefined4 *)(iVar8 + (int)puVar3) = 0;
    iVar8 = iVar8 + 4;
  } while (iVar8 < 0x204);
  lVar7 = FUN_005c1378(param_4);
  uVar4 = (uint)(lVar7 + 0x1fU >> 3) & 0xfffffffc;
  uVar9 = puVar3[0x45];
  uVar10 = puVar3[0x46];
  iVar8 = 0;
  do {
    uVar2 = *(uint *)(iVar8 + (int)uVar10);
    iVar11 = 0;
    uVar5 = 0;
LAB_005c15a8:
    uVar5 = uVar5 + (ulonglong)*(uint *)(iVar11 + (int)uVar9) * (ulonglong)uVar2;
    do {
      uVar6 = uVar5 + *(uint *)(iVar11 + (int)puVar3);
      *(int *)(iVar11 + (int)puVar3) = (int)uVar6;
      iVar11 = iVar11 + 4;
      uVar5 = uVar6 >> 0x20;
      if (iVar11 < (int)uVar4) goto LAB_005c15a8;
    } while ((int)(uVar6 >> 0x20) != 0);
    uVar2 = *(uint *)puVar3;
    uVar5 = 0;
    iVar11 = 0;
    do {
      iVar12 = iVar11;
      uVar5 = uVar5 + (ulonglong)*(uint *)(iVar12 + (int)param_4) *
                      ((ulonglong)uVar2 * param_5 & 0xffffffff) +
              (ulonglong)*(uint *)(iVar12 + (int)puVar3);
      *(int *)(iVar12 + -4 + (int)puVar3) = (int)uVar5;
      iVar11 = iVar12 + 4;
      uVar5 = uVar5 >> 0x20;
    } while (iVar11 < (int)uVar4);
    uVar5 = uVar5 + *(uint *)(iVar11 + (int)puVar3);
    *(int *)(iVar12 + (int)puVar3) = (int)uVar5;
    lVar7 = (uVar5 >> 0x20) + (ulonglong)*(uint *)(iVar12 + 8 + (int)puVar3);
    *(int *)(iVar12 + 4 + (int)puVar3) = (int)lVar7;
    *(int *)(iVar12 + 8 + (int)puVar3) =
         (int)((ulonglong)lVar7 >> 0x20) + *(int *)(iVar12 + 0xc + (int)puVar3);
    iVar8 = iVar8 + 4;
    if ((int)uVar4 <= iVar8) {
      iVar8 = FUN_005c10d0(lVar1,param_4);
      if (iVar8 != 0) {
        FUN_005c1338(lVar1,puVar3[0x47]);
      }
      uVar9 = puVar3[0x44];
      iVar8 = 0;
      do {
        *(undefined4 *)(iVar8 + (int)uVar9) = *(undefined4 *)(iVar8 + (int)puVar3);
        iVar8 = iVar8 + 4;
      } while (iVar8 < 0x200);
      return 0;
    }
  } while( true );
}


// 0x05c16d8 (0x8 bytes)
undefined8 FUN_005c16d8(void)

{
  return 0;
}


// 0x05c16e0 (0x9c bytes)
undefined8 FUN_005c16e0(void)

{
  undefined *puVar1;
  
  puVar1 = PTR_DAT_0071c1d8;
  if (*PTR_DAT_0071c1d8 != '\0') {
    cellNetCtlTerm();
  }
  *puVar1 = 0;
  sys_net_free_thread_context(0,2);
  if (puVar1[1] != '\0') {
    sys_net_finalize_network();
  }
  puVar1[1] = 0;
  if (puVar1[2] != '\0') {
    cellSysmoduleUnloadModule(0);
  }
  puVar1[2] = 0;
  return 0;
}


// 0x05c1788 (0x148 bytes)
undefined4 FUN_005c1788(char *param_1)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  byte in_cr0;
  byte in_cr1;
  byte in_cr2;
  byte in_cr3;
  byte unaff_cr4;
  byte in_cr5;
  byte in_cr6;
  byte in_cr7;
  uint uStack00000008;
  int iStack_74;
  int local_30 [6];
  
  uStack00000008 =
       (uint)(in_cr0 & 0xf) << 0x1c | (uint)(in_cr1 & 0xf) << 0x18 | (uint)(in_cr2 & 0xf) << 0x14 |
       (uint)(in_cr3 & 0xf) << 0x10 | (uint)(unaff_cr4 & 0xf) << 0xc | (uint)(in_cr5 & 0xf) << 8 |
       (uint)(in_cr6 & 0xf) << 4 | (uint)(in_cr7 & 0xf);
  iVar3 = 0x14;
  do {
    iVar2 = cellNetCtlGetState(local_30);
    if (iVar2 < 0) {
      printf(*(char **)(iStack_74 + -0x614c),iVar2);
      return 0xffffffff;
    }
    if (local_30[0] == 3) {
      return 0;
    }
    syscall_sys_timer_usleep(500000);
    bVar1 = iVar3 == 0;
    iVar3 = iVar3 + -1;
    if (bVar1) {
      FUN_005c756c(*(undefined4 *)(iStack_74 + -0x6148));
      return 0xffffffff;
    }
  } while (*param_1 == '\0');
  return 0xffffffff;
}


// 0x05c18d0 (0x180 bytes)
undefined4 FUN_005c18d0(undefined4 param_1,int param_2)

{
  char cVar1;
  undefined *puVar2;
  int iVar3;
  int iStack_74;
  int local_30;
  GPiece<20> local_2c;
  
  puVar2 = PTR_DAT_0071c1d8;
  if (PTR_DAT_0071c1d8[2] == '\0') {
    iVar3 = cellSysmoduleLoadModule(0);
    if (iVar3 < 0) {
      FUN_005c756c(*(undefined4 *)(iStack_74 + -0x6144));
      return 0xfffffff8;
    }
    cVar1 = puVar2[1];
    puVar2[2] = 1;
  }
  else {
    cVar1 = PTR_DAT_0071c1d8[1];
  }
  if (cVar1 == '\0') {
    iVar3 = sys_net_initialize_network_ex(local_2c);
    if (iVar3 != 0) {
      FUN_005c756c(*(undefined4 *)(iStack_74 + -0x6140));
      return 0xfffffff7;
    }
    puVar2[1] = 1;
    cVar1 = *puVar2;
  }
  else {
    cVar1 = *puVar2;
  }
  if (cVar1 == '\0') {
    iVar3 = cellNetCtlGetState(&local_30);
    if ((((iVar3 < 0) || (local_30 == 0)) && (iVar3 = cellNetCtlInit(), iVar3 < 0)) &&
       (iVar3 != -0x7fecfefe)) {
      printf(*(char **)(iStack_74 + -0x613c),iVar3);
      return 0xfffffff9;
    }
    *puVar2 = 1;
  }
  if ((param_2 != 0) && (iVar3 = FUN_005c1788(param_1), iVar3 < 0)) {
    return 0xfffffffa;
  }
  return 0;
}


// 0x05c1a58 (0x60 bytes)
// strings: 00660db4: 'Error, no active pool\n'

undefined8 FUN_005c1a58(int param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  if (*(int *)(param_1 + 0x408) == 0) {
    FUN_004ffac4(5,"Error, no active pool\n");
    uVar1 = 0;
  }
  else {
    uVar1 = idol::AllocateMemAlign(*(int *)(param_1 + 0x408),param_2,param_3);
  }
  return uVar1;
}


// 0x05c1ab8 (0x58 bytes)
// strings: 00660db4: 'Error, no active pool\n'

undefined8 FUN_005c1ab8(undefined4 param_1,int param_2)

{
  undefined8 uVar1;
  
  if (*(int *)(param_2 + 0x408) == 0) {
    FUN_004ffac4(5,"Error, no active pool\n");
    uVar1 = 0;
  }
  else {
    uVar1 = idol::AllocateMemAlign(*(int *)(param_2 + 0x408),param_1,0x10);
  }
  return uVar1;
}


// 0x05c1b10 (0x64 bytes)
// strings: 00660db4: 'Error, no active pool\n'

undefined8 FUN_005c1b10(undefined4 param_1,undefined4 param_2,int param_3)

{
  undefined8 uVar1;
  
  if (*(int *)(param_3 + 0x408) == 0) {
    FUN_004ffac4(5,"Error, no active pool\n");
    uVar1 = 0;
  }
  else {
    uVar1 = idol::AllocateMemAlign(*(int *)(param_3 + 0x408),param_1,param_2);
  }
  return uVar1;
}


// 0x05c1b74 (0x68 bytes)
// strings: 00660db4: 'Error, no active pool\n'

undefined8 FUN_005c1b74(undefined4 param_1,int param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  if (*(int *)(param_2 + 0x408) == 0) {
    FUN_004ffac4(5,"Error, no active pool\n");
    uVar1 = 0;
  }
  else {
    uVar1 = idol::AllocateMemAlign(*(int *)(param_2 + 0x408),param_1,param_3);
  }
  return uVar1;
}


// 0x05c1bdc (0x58 bytes)
// strings: 00660db4: 'Error, no active pool\n'

undefined8 FUN_005c1bdc(undefined4 param_1,int param_2)

{
  undefined8 uVar1;
  
  if (*(int *)(param_2 + 0x408) == 0) {
    FUN_004ffac4(5,"Error, no active pool\n");
    uVar1 = 0;
  }
  else {
    uVar1 = idol::AllocateMemAlign(*(int *)(param_2 + 0x408),param_1,0x10);
  }
  return uVar1;
}


// 0x05c1c34 (0x64 bytes)
// strings: 00660db4: 'Error, no active pool\n'

undefined8 FUN_005c1c34(undefined4 param_1,undefined4 param_2,int param_3)

{
  undefined8 uVar1;
  
  if (*(int *)(param_3 + 0x408) == 0) {
    FUN_004ffac4(5,"Error, no active pool\n");
    uVar1 = 0;
  }
  else {
    uVar1 = idol::AllocateMemAlign(*(int *)(param_3 + 0x408),param_1,param_2);
  }
  return uVar1;
}


// 0x05c1c98 (0x68 bytes)
// strings: 00660db4: 'Error, no active pool\n'

undefined8 FUN_005c1c98(undefined4 param_1,int param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  if (*(int *)(param_2 + 0x408) == 0) {
    FUN_004ffac4(5,"Error, no active pool\n");
    uVar1 = 0;
  }
  else {
    uVar1 = idol::AllocateMemAlign(*(int *)(param_2 + 0x408),param_1,param_3);
  }
  return uVar1;
}


// 0x05c1d00 (0x4 bytes)
void FUN_005c1d00(void)

{
  return;
}


// 0x05c1d04 (0x4 bytes)
void FUN_005c1d04(void)

{
  return;
}


// 0x05c1d08 (0x4 bytes)
void FUN_005c1d08(void)

{
  return;
}


// 0x05c1d0c (0x4 bytes)
void FUN_005c1d0c(void)

{
  return;
}


// 0x05c1d10 (0x4 bytes)
void FUN_005c1d10(void)

{
  return;
}


// 0x05c1d14 (0x4 bytes)
void FUN_005c1d14(void)

{
  return;
}


// 0x05c1d18 (0x8 bytes)
undefined8 FUN_005c1d18(undefined8 param_1,undefined8 param_2)

{
  return param_2;
}


// 0x05c1d20 (0x8 bytes)
undefined8 FUN_005c1d20(undefined8 param_1,undefined8 param_2)

{
  return param_2;
}


// 0x05c1d28 (0x8 bytes)
undefined8 FUN_005c1d28(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  return param_3;
}


// 0x05c1d30 (0x84 bytes)
// strings: 00660dcc: 'Error, out of Pool stack space'

void FUN_005c1d30(int param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  int iVar2;
  
  iVar2 = *(int *)(param_1 + 0x404);
  if (0x7e < iVar2) {
    FUN_004ffac4(5,"Error, out of Pool stack space");
    iVar2 = *(int *)(param_1 + 0x404);
  }
  iVar1 = param_1 + (iVar2 + 1) * 8;
  *(int *)(param_1 + 0x404) = iVar2 + 1;
  *(undefined4 *)(iVar1 + 4) = param_2;
  *(undefined4 *)(iVar1 + 8) = param_3;
  *(undefined4 *)(param_1 + 0x408) = param_2;
  return;
}


// 0x05c1db4 (0x74 bytes)
// strings: 00660dec: 'Error, popping past top of pool stack'

void FUN_005c1db4(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = *(int *)(param_1 + 0x404);
  if (iVar1 < 0) {
    FUN_004ffac4(5,"Error, popping past top of pool stack");
    iVar1 = *(int *)(param_1 + 0x404);
  }
  iVar1 = iVar1 + -1;
  uVar2 = 0;
  *(int *)(param_1 + 0x404) = iVar1;
  if (-1 < iVar1) {
    uVar2 = *(undefined4 *)(param_1 + iVar1 * 8 + 4);
  }
  *(undefined4 *)(param_1 + 0x408) = uVar2;
  return;
}


// 0x05c1e28 (0x44 bytes)
undefined8 FUN_005c1e28(undefined4 *param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  puVar1 = PTR_DAT_0071c1f0;
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


// 0x05c1e6c (0x44 bytes)
undefined8 FUN_005c1e6c(undefined4 *param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  puVar1 = PTR_DAT_0071c1f0;
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


// 0x05c1eb0 (0x44 bytes)
undefined8 FUN_005c1eb0(undefined4 *param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  puVar1 = PTR_DAT_0071c1f0;
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


// 0x05c1ef4 (0x44 bytes)
undefined8 FUN_005c1ef4(undefined4 *param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  puVar1 = PTR_PTR_0071c1f4;
  uVar2 = 3;
  if (param_1 != (undefined4 *)0x0) {
    uVar2 = 2;
    *param_1 = 0;
    if (*(int *)(*(int *)puVar1 + 0x18) != 0) {
      uVar2 = 0;
      *param_1 = *(undefined4 *)(*(int *)puVar1 + 0x30);
    }
  }
  return uVar2;
}


// 0x05c1f38 (0x8 bytes)
undefined1 FUN_005c1f38(int param_1)

{
  return *(undefined1 *)(param_1 + 0x44f);
}


// 0x05c1f40 (0x4c bytes)
undefined8 FUN_005c1f40(undefined4 *param_1)

{
  int iVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  puVar2 = PTR_PTR_0071c1f4;
  uVar3 = 3;
  if (param_1 != (undefined4 *)0x0) {
    uVar3 = 2;
    param_1[1] = 0;
    *param_1 = 0;
    iVar1 = *(int *)puVar2;
    if (*(int *)(iVar1 + 0x18) != 0) {
      uVar3 = 0;
      *param_1 = *(undefined4 *)(iVar1 + 0x34);
      param_1[1] = *(undefined4 *)(iVar1 + 0x38);
    }
  }
  return uVar3;
}


// 0x05c1f8c (0x9c bytes)
undefined4 FUN_005c1f8c(undefined4 *param_1,undefined4 *param_2)

{
  undefined *puVar1;
  undefined4 uVar2;
  
  if ((param_1 != (undefined4 *)0x0) &&
     (*param_1 = 0, puVar1 = PTR_DAT_0071c1f0, param_2 != (undefined4 *)0x0)) {
    *param_2 = 0;
    if (*(int *)puVar1 == 0) {
      return 0xf;
    }
    uVar2 = (*(code *)**(undefined4 **)(*(int *)puVar1 + 0x88))
                      (*(undefined4 *)(*(int *)PTR_PTR_0071c1f4 + 8),param_2,param_1);
    uVar2 = FUN_00540808(uVar2);
    return uVar2;
  }
  return 3;
}


// 0x05c2028 (0xa0 bytes)
undefined4 FUN_005c2028(int param_1,int param_2)

{
  undefined4 uVar1;
  GPiece<16> local_10;
  
  uVar1 = 2;
  if ((param_1 != 0) && (param_2 != 0)) {
    if ((*(byte *)(param_1 + 0xc) & 1) != 0) {
      uVar1 = FUN_005c4620(param_1,param_2);
      return uVar1;
    }
    uVar1 = FUN_005c4188(local_10,param_2);
  }
  return uVar1;
}


// 0x05c20c8 (0x28 bytes)
undefined8 FUN_005c20c8(undefined4 *param_1)

{
  undefined8 uVar1;
  
  uVar1 = 2;
  if (param_1 != (undefined4 *)0x0) {
    uVar1 = 0;
    param_1[3] = 0;
    *param_1 = 0;
    param_1[1] = 0;
  }
  return uVar1;
}


// 0x05c20f0 (0x28 bytes)
undefined8 FUN_005c20f0(int param_1,undefined4 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = 2;
  if ((param_1 != 0) && (param_2 != (undefined4 *)0x0)) {
    uVar1 = 0;
    *param_2 = *(undefined4 *)(param_1 + 0xc);
  }
  return uVar1;
}


// 0x05c2118 (0x60 bytes)
undefined8 FUN_005c2118(uint *param_1,uint *param_2)

{
  uint uVar1;
  uint uVar2;
  undefined8 uVar3;
  
  uVar3 = 2;
  if ((param_1 != (uint *)0x0) && (param_2 != (uint *)0x0)) {
    uVar2 = param_1[3];
    uVar3 = 0;
    if (uVar2 != 0) {
      uVar1 = *param_1;
      uVar2 = param_1[1] - uVar1;
      if (param_1[1] <= uVar1) {
        *param_2 = param_1[2] - uVar1;
        return 0;
      }
    }
    *param_2 = uVar2;
  }
  return uVar3;
}


// 0x05c2178 (0x30 bytes)
undefined8 FUN_005c2178(int param_1,int *param_2)

{
  undefined8 uVar1;
  
  uVar1 = 2;
  if ((param_1 != 0) && (param_2 != (int *)0x0)) {
    uVar1 = 0;
    *param_2 = *(int *)(param_1 + 8) - *(int *)(param_1 + 0xc);
  }
  return uVar1;
}


// 0x05c21a8 (0x70 bytes)
undefined8 FUN_005c21a8(uint *param_1,int *param_2)

{
  uint uVar1;
  undefined8 uVar2;
  
  uVar2 = 2;
  if ((param_1 != (uint *)0x0) && (param_2 != (int *)0x0)) {
    if (param_1[3] == param_1[2]) {
      *param_2 = 0;
      return 0;
    }
    uVar1 = param_1[1];
    if (*param_1 <= uVar1) {
      *param_2 = param_1[2] - uVar1;
      return 0;
    }
    uVar2 = 0;
    *param_2 = *param_1 - uVar1;
  }
  return uVar2;
}


// 0x05c2218 (0xa8 bytes)
/* WARNING: Removing unreachable block (ram,0x005c2274) */

int FUN_005c2218(int param_1,int param_2)

{
  int iVar1;
  GPiece<16> local_20;
  
  iVar1 = 2;
  if (((param_1 != 0) && (param_2 != 0)) && (iVar1 = FUN_005c20f0(param_1,local_20), iVar1 == 0)) {
    return 200;
  }
  return iVar1;
}


// 0x05c22c0 (0xa8 bytes)
/* WARNING: Removing unreachable block (ram,0x005c231c) */

int FUN_005c22c0(int param_1,int param_2)

{
  int iVar1;
  GPiece<16> local_20;
  
  iVar1 = 2;
  if (((param_1 != 0) && (param_2 != 0)) && (iVar1 = FUN_005c2178(param_1,local_20), iVar1 == 0)) {
    return 200;
  }
  return iVar1;
}


// 0x05c2368 (0x60 bytes)
undefined8 FUN_005c2368(uint *param_1,undefined4 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = 2;
  if ((param_1 != (uint *)0x0) && (param_2 != (undefined4 *)0x0)) {
    uVar1 = 0;
    if ((param_1[1] <= *param_1) && ((param_1[3] != 0 && (*param_1 != 0)))) {
      *param_2 = 1;
      return 0;
    }
    *param_2 = 0;
  }
  return uVar1;
}


// 0x05c23c8 (0x1c bytes)
undefined8 FUN_005c23c8(int param_1,undefined4 param_2)

{
  undefined8 uVar1;
  
  uVar1 = 2;
  if (param_1 != 0) {
    uVar1 = 0;
    *(undefined4 *)(param_1 + 0x18) = param_2;
  }
  return uVar1;
}


// 0x05c23e4 (0x160 bytes)
/* WARNING: Removing unreachable block (ram,0x005c2500) */

ulonglong FUN_005c23e4(void *param_1,int *param_2,int param_3)

{
  ulonglong uVar1;
  ulonglong uVar2;
  GPiece<4> local_40;
  GPiece<20> local_3c;
  
  if (((param_1 == (void *)0x0) || (param_2 == (int *)0x0)) || (param_3 == 0)) {
    uVar2 = 2;
  }
  else {
    uVar1 = FUN_005c20f0(param_2,local_40);
    uVar2 = uVar1;
    if ((int)uVar1 == 0) {
      if (param_3 != 0) {
        return 200;
      }
      uVar2 = FUN_005c2118(param_2,local_3c);
      if (uVar2 == 0) {
        memcpy(param_1,(void *)(param_2[4] + *param_2),0);
        uVar2 = uVar1;
      }
    }
  }
  return uVar2 & 0xffffffff;
}


// 0x05c2544 (0x1a0 bytes)
/* WARNING: Removing unreachable block (ram,0x005c263c) */

int FUN_005c2544(int param_1,void *param_2,int param_3)

{
  int iVar1;
  int iVar2;
  GPiece<24> local_40;
  
  if (((param_1 == 0) || (param_2 == (void *)0x0)) || (param_3 == 0)) {
    iVar2 = 2;
  }
  else {
    iVar2 = FUN_005c2178(param_1,local_40);
    if (iVar2 == 0) {
      if (param_3 != 0) {
        return 200;
      }
      memcpy((void *)(*(int *)(param_1 + 4) + *(int *)(param_1 + 0x10)),param_2,0);
      iVar1 = *(int *)(param_1 + 4);
      *(int *)(param_1 + 4) = iVar1;
      *(undefined4 *)(param_1 + 0xc) = *(undefined4 *)(param_1 + 0xc);
      if (*(int *)(param_1 + 8) == iVar1) {
        *(undefined4 *)(param_1 + 4) = 0;
      }
    }
  }
  return iVar2;
}


// 0x05c26e4 (0x148 bytes)
/* WARNING: Removing unreachable block (ram,0x005c27b8) */
/* WARNING: Removing unreachable block (ram,0x005c27c0) */
/* WARNING: Removing unreachable block (ram,0x005c27dc) */
/* WARNING: Removing unreachable block (ram,0x005c27ec) */

int FUN_005c26e4(int *param_1,int param_2,int param_3)

{
  int iVar1;
  GPiece<16> local_30;
  
  if (param_1 != (int *)0x0) {
    if (param_2 == 0) {
      if (param_1[6] == 0) {
LAB_005c2730:
        iVar1 = 0;
        if ((*param_1 != 0) && (iVar1 = FUN_005c20f0(param_1,local_30), iVar1 == 0)) {
          param_1[1] = 0;
          *param_1 = 0;
          return 0;
        }
        return iVar1;
      }
    }
    else if (param_3 != 0) goto LAB_005c2730;
  }
  return 2;
}


// 0x05c282c (0x54 bytes)
undefined8 FUN_005c282c(int param_1,int param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  if (param_1 == 0) {
    return 2;
  }
  if (param_2 == 0) {
    if (*(int *)(param_1 + 0x18) != 0) {
      return 2;
    }
    iVar1 = *(int *)(param_1 + 0x14);
  }
  else {
    iVar1 = *(int *)(param_1 + 0x14);
    if (iVar1 == 0) {
      return 0xc9;
    }
  }
  uVar2 = FUN_005c26e4(param_1,param_2,iVar1);
  return uVar2;
}


// 0x05c2880 (0x11c bytes)
int FUN_005c2880(int param_1,int param_2)

{
  int iVar1;
  GPiece<24> local_30;
  
  iVar1 = 2;
  if ((param_1 != 0) && (iVar1 = 0, param_2 != 0)) {
    iVar1 = FUN_005c2178(param_1,local_30);
    if (iVar1 == 0) {
      if (param_2 != 0) {
        return 200;
      }
      if (*(int *)(param_1 + 8) == *(int *)(param_1 + 4)) {
        *(undefined4 *)(param_1 + 4) = 0;
      }
      else {
        *(int *)(param_1 + 4) = *(int *)(param_1 + 4);
      }
      *(undefined4 *)(param_1 + 0xc) = *(undefined4 *)(param_1 + 0xc);
      if (*(int *)(param_1 + 0x18) == 0) {
        iVar1 = FUN_005c282c(param_1,0);
        return iVar1;
      }
    }
  }
  return iVar1;
}


// 0x05c299c (0x11c bytes)
int FUN_005c299c(int *param_1,int param_2)

{
  int iVar1;
  GPiece<24> local_30;
  
  iVar1 = 2;
  if ((param_1 != (int *)0x0) && (iVar1 = 0, param_2 != 0)) {
    iVar1 = FUN_005c20f0(param_1,local_30);
    if (iVar1 == 0) {
      if (param_2 != 0) {
        return 200;
      }
      if (param_1[2] == *param_1) {
        *param_1 = 0;
      }
      else {
        *param_1 = *param_1;
      }
      param_1[3] = param_1[3];
      if (param_1[6] == 0) {
        iVar1 = FUN_005c282c(param_1,0);
        return iVar1;
      }
    }
  }
  return iVar1;
}


// 0x05c2ab8 (0x70 bytes)
undefined8 FUN_005c2ab8(undefined4 *param_1)

{
  undefined8 uVar1;
  
  uVar1 = 2;
  if (param_1 != (undefined4 *)0x0) {
    if (param_1[4] != 0) {
      FUN_005519f0(param_1 + 4);
    }
    uVar1 = 0;
    param_1[4] = 0;
    param_1[3] = 0;
    *param_1 = 0;
    param_1[1] = 0;
    param_1[2] = 0;
  }
  return uVar1;
}


// 0x05c2b28 (0xc4 bytes)
undefined8 FUN_005c2b28(undefined4 *param_1,int param_2,undefined4 param_3)

{
  int iVar1;
  undefined8 uVar2;
  
  uVar2 = 2;
  if (param_1 != (undefined4 *)0x0) {
    if (param_2 != 0) {
      param_1[6] = 0;
      *param_1 = 0;
      param_1[1] = 0;
      param_1[2] = 0;
      param_1[3] = 0;
      param_1[4] = 0;
      param_1[5] = 0;
      iVar1 = FUN_00551de8(param_1 + 4,param_2);
      uVar2 = 100;
      if ((iVar1 == 0) && (param_1[4] != 0)) {
        uVar2 = 0;
        param_1[6] = 0;
        param_1[2] = param_2;
        param_1[5] = param_3;
        *param_1 = 0;
        param_1[1] = 0;
        param_1[3] = 0;
      }
    }
  }
  return uVar2;
}


// 0x05c2bec (0x48 bytes)
bool FUN_005c2bec(char *param_1,char *param_2)

{
  bool bVar1;
  
  bVar1 = false;
  if (*param_2 <= *param_1) {
    bVar1 = *param_1 <= param_2[1];
  }
  return bVar1;
}


// 0x05c2c34 (0x3c bytes)
bool FUN_005c2c34(byte *param_1,byte *param_2)

{
  bool bVar1;
  
  bVar1 = false;
  if (*param_2 <= *param_1) {
    bVar1 = *param_1 <= param_2[1];
  }
  return bVar1;
}


// 0x05c2c70 (0x48 bytes)
bool FUN_005c2c70(short *param_1,short *param_2)

{
  bool bVar1;
  
  bVar1 = false;
  if (*param_2 <= *param_1) {
    bVar1 = *param_1 <= param_2[1];
  }
  return bVar1;
}


// 0x05c2cb8 (0x3c bytes)
bool FUN_005c2cb8(ushort *param_1,ushort *param_2)

{
  bool bVar1;
  
  bVar1 = false;
  if (*param_2 <= *param_1) {
    bVar1 = *param_1 <= param_2[1];
  }
  return bVar1;
}


// 0x05c2cf4 (0x3c bytes)
bool FUN_005c2cf4(int *param_1,int *param_2)

{
  bool bVar1;
  
  bVar1 = false;
  if (*param_2 <= *param_1) {
    bVar1 = *param_1 <= param_2[1];
  }
  return bVar1;
}


// 0x05c2d30 (0x3c bytes)
bool FUN_005c2d30(uint *param_1,uint *param_2)

{
  bool bVar1;
  
  bVar1 = false;
  if (*param_2 <= *param_1) {
    bVar1 = *param_1 <= param_2[1];
  }
  return bVar1;
}


// 0x05c2d6c (0x3c bytes)
bool FUN_005c2d6c(longlong *param_1,longlong *param_2)

{
  bool bVar1;
  
  bVar1 = false;
  if (*param_2 <= *param_1) {
    bVar1 = *param_1 <= param_2[1];
  }
  return bVar1;
}


// 0x05c2da8 (0x3c bytes)
bool FUN_005c2da8(ulonglong *param_1,ulonglong *param_2)

{
  bool bVar1;
  
  bVar1 = false;
  if (*param_2 <= *param_1) {
    bVar1 = *param_1 <= param_2[1];
  }
  return bVar1;
}


// 0x05c2de4 (0x3c bytes)
bool FUN_005c2de4(float *param_1,float *param_2)

{
  bool bVar1;
  
  bVar1 = false;
  if (*param_2 <= *param_1) {
    bVar1 = *param_1 <= param_2[1];
  }
  return bVar1;
}


// 0x05c2e20 (0x3c bytes)
bool FUN_005c2e20(double *param_1,double *param_2)

{
  bool bVar1;
  
  bVar1 = false;
  if (*param_2 <= *param_1) {
    bVar1 = *param_1 <= param_2[1];
  }
  return bVar1;
}


// 0x05c2e5c (0x68 bytes)
bool FUN_005c2e5c(undefined8 param_1,uint *param_2)

{
  bool bVar1;
  uint uVar2;
  
  uVar2 = FUN_005565bc(param_1,param_2[1]);
  bVar1 = false;
  if (*param_2 <= uVar2) {
    bVar1 = uVar2 < param_2[1];
  }
  return bVar1;
}


// 0x05c2ec4 (0xf4 bytes)
undefined8 FUN_005c2ec4(int *param_1,int *param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined4 *puVar4;
  
  if ((((param_1 == (int *)0x0) || (iVar1 = param_1[2], iVar1 == 0)) || (*param_1 == 0)) ||
     (param_2 == (int *)0x0)) {
    return 2;
  }
  iVar2 = param_2[2];
  if (iVar2 == 0) {
    iVar3 = param_2[1];
    param_1[3] = iVar3;
    if (iVar3 != 0) {
      *(undefined4 *)(iVar3 + 8) = 0;
      goto LAB_005c2f28;
    }
  }
  else {
    iVar3 = param_2[1];
    *(int *)(iVar2 + 4) = iVar3;
    if (iVar3 != 0) {
      *(int *)(iVar3 + 8) = iVar2;
      goto LAB_005c2f28;
    }
  }
  param_1[4] = iVar2;
LAB_005c2f28:
  puVar4 = *(undefined4 **)(iVar1 + 0xc);
  param_1[1] = (param_1[1] - *param_2) + -0xc;
  (*(code *)*puVar4)(iVar1,param_2);
  return 0;
}


// 0x05c2fb8 (0x78 bytes)
void FUN_005c2fb8(int *param_1)

{
  int iVar1;
  int iVar2;
  
  if (((param_1 != (int *)0x0) && (param_1[2] != 0)) && (*param_1 != 0)) {
    iVar2 = param_1[3];
    while (iVar2 != 0) {
      iVar1 = *(int *)(iVar2 + 4);
      FUN_005c2ec4(param_1,iVar2);
      iVar2 = iVar1;
    }
  }
  return;
}


// 0x05c3030 (0x3c bytes)
undefined8 FUN_005c3030(uint *param_1,uint param_2)

{
  undefined8 uVar1;
  
  uVar1 = 2;
  if ((((param_1 != (uint *)0x0) && (param_1[2] != 0)) && (*param_1 != 0)) && (0xc < param_2)) {
    uVar1 = 0;
    *param_1 = param_2;
  }
  return uVar1;
}


// 0x05c306c (0x2d8 bytes)
undefined8 FUN_005c306c(int *param_1,int *param_2,int param_3,size_t param_4)

{
  bool bVar1;
  int *piVar2;
  size_t __n;
  void *__src;
  int *piVar3;
  uint uVar4;
  int *__src_00;
  void *__dest;
  int iVar5;
  int iVar6;
  
  if ((((param_1 == (int *)0x0) || (iVar6 = param_1[2], iVar6 == 0)) || (*param_1 == 0)) ||
     ((((int *)*param_2 == (int *)0x0 || (param_3 == 0)) || (*(int *)(param_3 + 0x40) == 0)))) {
    return 2;
  }
  uVar4 = *(int *)(param_3 + 0x40) + 0xc + *(int *)*param_2;
  if (uVar4 <= (uint)(*param_1 - param_1[1])) {
    piVar3 = (int *)(*(code *)**(undefined4 **)(iVar6 + 8))(iVar6,uVar4);
    if (piVar3 != (int *)0x0) {
      piVar2 = (int *)*param_2;
      param_1[1] = param_1[1] + *(int *)(param_3 + 0x40);
      __src_00 = (int *)0x0;
      *piVar3 = *(int *)(param_3 + 0x40) + *piVar2;
      if (piVar2 != (int *)0x0) {
        __src_00 = piVar2 + 3;
      }
      memcpy(piVar3 + 3,__src_00,param_4);
      iVar6 = *(int *)(param_3 + 0x44) + -1;
      if (-1 < iVar6) {
        __dest = (void *)((int)(piVar3 + 3) + param_4);
        do {
          while( true ) {
            iVar5 = param_3 + iVar6 * 8;
            __src = *(void **)(param_3 + iVar6 * 8);
            if (__src != (void *)0x0) break;
LAB_005c31b0:
            bVar1 = iVar6 == 0;
            iVar6 = iVar6 + -1;
            if (bVar1) goto LAB_005c3208;
          }
          __n = *(size_t *)(iVar5 + 4);
          if (__n == 0) goto LAB_005c31b0;
          memcpy(__dest,__src,__n);
          bVar1 = iVar6 != 0;
          iVar6 = iVar6 + -1;
          __dest = (void *)((int)__dest + *(int *)(iVar5 + 4));
        } while (bVar1);
      }
LAB_005c3208:
      piVar3[1] = *(int *)(*param_2 + 4);
      iVar6 = *(int *)(*param_2 + 8);
      piVar3[2] = iVar6;
      if (param_1[3] == *param_2) {
        param_1[3] = (int)piVar3;
        iVar6 = piVar3[1];
      }
      else {
        *(int **)(iVar6 + 4) = piVar3;
        iVar6 = piVar3[1];
      }
      if (iVar6 == 0) {
        param_1[4] = (int)piVar3;
      }
      else {
        *(int **)(iVar6 + 8) = piVar3;
      }
      (*(code *)**(undefined4 **)(param_1[2] + 0xc))(param_1[2],*param_2);
      *param_2 = (int)piVar3;
      return 0;
    }
  }
  return 0x12d;
}


// 0x05c3344 (0x294 bytes)
undefined8 FUN_005c3344(int *param_1,int param_2,int param_3)

{
  bool bVar1;
  size_t __n;
  undefined4 uVar2;
  void *__src;
  undefined4 *puVar3;
  undefined4 *__dest;
  int iVar4;
  int iVar5;
  
  if ((((param_1 == (int *)0x0) || (iVar5 = param_1[2], iVar5 == 0)) || (*param_1 == 0)) ||
     ((param_3 == 0 || (iVar4 = *(int *)(param_3 + 0x40), iVar4 == 0)))) {
    return 2;
  }
  if (iVar4 + 0xcU <= (uint)(*param_1 - param_1[1])) {
    puVar3 = (undefined4 *)(*(code *)**(undefined4 **)(iVar5 + 8))(iVar5,iVar4 + 0xc);
    if (puVar3 != (undefined4 *)0x0) {
      param_1[1] = iVar4 + 0xc + param_1[1];
      *puVar3 = *(undefined4 *)(param_3 + 0x40);
      iVar5 = *(int *)(param_3 + 0x44) + -1;
      if (-1 < iVar5) {
        __dest = puVar3 + 3;
        do {
          while( true ) {
            iVar4 = param_3 + iVar5 * 8;
            __src = *(void **)(param_3 + iVar5 * 8);
            if (__src != (void *)0x0) break;
LAB_005c3434:
            bVar1 = iVar5 == 0;
            iVar5 = iVar5 + -1;
            if (bVar1) goto LAB_005c348c;
          }
          __n = *(size_t *)(iVar4 + 4);
          if (__n == 0) goto LAB_005c3434;
          memcpy(__dest,__src,__n);
          bVar1 = iVar5 != 0;
          iVar5 = iVar5 + -1;
          __dest = (undefined4 *)((int)__dest + *(int *)(iVar4 + 4));
        } while (bVar1);
      }
LAB_005c348c:
      if (param_2 == 0) {
        iVar5 = param_1[3];
        puVar3[2] = 0;
        puVar3[1] = iVar5;
        param_1[3] = (int)puVar3;
        iVar5 = puVar3[1];
      }
      else {
        uVar2 = *(undefined4 *)(param_2 + 4);
        puVar3[2] = param_2;
        puVar3[1] = uVar2;
        *(undefined4 **)(param_2 + 4) = puVar3;
        iVar5 = puVar3[1];
      }
      if (iVar5 != 0) {
        *(undefined4 **)(iVar5 + 8) = puVar3;
        return 0;
      }
      param_1[4] = (int)puVar3;
      return 0;
    }
  }
  return 0x12d;
}


// 0x05c35d8 (0xc bytes)
void FUN_005c35d8(undefined8 param_1,undefined8 param_2)

{
  FUN_005c3344(param_1,0,param_2);
  return;
}


// 0x05c35e4 (0x7c bytes)
void FUN_005c35e4(int *param_1)

{
  if (((param_1 != (int *)0x0) && (param_1[2] != 0)) && (*param_1 != 0)) {
    FUN_005c2fb8(param_1);
    param_1[4] = 0;
    *param_1 = 0;
    param_1[1] = 0;
    param_1[2] = 0;
    param_1[3] = 0;
    return;
  }
  return;
}


// 0x05c3660 (0x48 bytes)
undefined8 FUN_005c3660(uint *param_1,uint param_2,uint param_3)

{
  if (((param_1 != (uint *)0x0) && (param_2 != 0)) && (0xc < param_3)) {
    param_1[2] = param_2;
    param_1[4] = 0;
    *param_1 = param_3;
    param_1[1] = 0;
    param_1[3] = 0;
    return 0;
  }
  return 2;
}


// 0x05c36a8 (0x78 bytes)
undefined8 FUN_005c36a8(int param_1,int *param_2)

{
  param_2[2] = *(int *)(param_1 + 0x3c) + *(int *)(param_1 + 0x38);
  param_2[3] = *(int *)(param_1 + 0x48);
  param_2[1] = *(int *)(param_1 + 0x48) * (*(int *)(param_1 + 0x44) + 1);
  *param_2 = *(int *)(param_1 + 100) + *(int *)(param_1 + 0x68);
  *(undefined4 *)(param_1 + 0x5c) = 0;
  *(undefined4 *)(param_1 + 0x68) = *(undefined4 *)(param_1 + 0x3c);
  *(int *)(param_1 + 0x6c) = *(int *)(param_1 + 0x40) - *(int *)(param_1 + 0x44);
  *(undefined4 *)(param_1 + 100) = *(undefined4 *)(param_1 + 0x38);
  *(undefined4 *)(param_1 + 0x54) = 0;
  *(int *)(param_1 + 0x60) = *(int *)(param_1 + 0x40);
  return 0;
}


// 0x05c3720 (0x94 bytes)
undefined8 FUN_005c3720(int param_1,undefined4 *param_2)

{
  *param_2 = *(undefined4 *)(param_1 + 0x38);
  param_2[2] = *(undefined4 *)(param_1 + 0x3c);
  param_2[4] = *(undefined4 *)(param_1 + 0x40);
  param_2[7] = *(undefined4 *)(param_1 + 0x44);
  param_2[9] = *(undefined4 *)(param_1 + 0x54);
  param_2[10] = *(undefined4 *)(param_1 + 0x58);
  param_2[8] = *(undefined4 *)(param_1 + 0x5c);
  param_2[5] = *(undefined4 *)(param_1 + 0x60);
  param_2[1] = *(undefined4 *)(param_1 + 100);
  param_2[3] = *(undefined4 *)(param_1 + 0x68);
  param_2[6] = *(undefined4 *)(param_1 + 0x6c);
  *(undefined4 *)(param_1 + 0x5c) = 0;
  *(undefined4 *)(param_1 + 0x68) = *(undefined4 *)(param_1 + 0x3c);
  *(int *)(param_1 + 0x6c) = *(int *)(param_1 + 0x40) - *(int *)(param_1 + 0x44);
  *(undefined4 *)(param_1 + 100) = *(undefined4 *)(param_1 + 0x38);
  *(undefined4 *)(param_1 + 0x54) = 0;
  *(int *)(param_1 + 0x60) = *(int *)(param_1 + 0x40);
  return 0;
}


// 0x05c37b4 (0x3c bytes)
undefined8 FUN_005c37b4(int param_1,int param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  param_2 = param_2 - *(int *)(param_1 + 0x2c);
  uVar2 = 0xec55;
  iVar1 = *(int *)(param_2 + 4);
  if (iVar1 < 0) {
    uVar2 = 0;
    *(int *)(param_2 + 4) = iVar1 + 1;
  }
  return uVar2;
}


// 0x05c37f0 (0x1c bytes)
undefined8 FUN_005c37f0(int param_1,longlong param_2)

{
  undefined8 uVar1;
  
  uVar1 = 2;
  if (param_2 != 0) {
    uVar1 = 0;
    *(int *)(param_1 + 0x34) = (int)param_2;
  }
  return uVar1;
}


// 0x05c380c (0x10 bytes)
undefined4 FUN_005c380c(int param_1)

{
  return *(undefined4 *)(param_1 + -4);
}


// 0x05c381c (0xd0 bytes)
// strings: 0067e738: '\n\nAborted Function=%s\nCalled by Function=%s\n' | 0067e770: 'MemBlock:\n  AllocatingFunction=%s\n  Usage=%u\n  LockCnt=%u\n  Size=%u\n'

void FUN_005c381c(int param_1,int param_2,undefined8 param_3)

{
  undefined4 *puVar1;
  ulonglong uVar2;
  GPiece<40> auStack_50;
  
  uVar2 = ZEXT48(PTR_DAT_0071c1fc);
  puVar1 = (undefined4 *)printf(PTR_s_Aborted_Function__s_Called_by_Fu_0071c1f8,param_3,uVar2)
  ;
  if (param_2 != 0) {
    printf(PTR_s_MemBlock__AllocatingFunction__s_U_0071c200,uVar2,
                 *(uint *)(param_2 + 4) >> 0x1f,(ulonglong)*(uint *)(param_2 + 4) & 0x7fffffff,
                 (ulonglong)*(uint *)(param_2 + 8));
    puVar1 = *(undefined4 **)(param_1 + 0x34);
    if (puVar1 != (undefined4 *)0x0) {
      puVar1 = (undefined4 *)(*(code *)*puVar1)(auStack_50);
    }
  }
                    /* WARNING: Subroutine does not return */
  abort(puVar1);
}


// 0x05c38f0 (0x10c bytes)
// strings: 00660e18: 'rt_mempool_check_integrity_'

void FUN_005c38f0(int param_1,int param_2)

{
  int iVar1;
  int *piVar2;
  int *piVar3;
  
  if (param_2 == 0) {
    iVar1 = *(int *)(param_1 + 0x50);
    do {
      piVar2 = (int *)(iVar1 + 0x14);
      if (*(int **)(iVar1 + 0x10) != piVar2) {
        do {
          piVar3 = (int *)((int)piVar2 + piVar2[2] + *(int *)(param_1 + 0x2c));
          if (*piVar2 != *piVar3) {
            FUN_005c381c(param_1,piVar2,PTR_s_rt_mempool_check_integrity__0071c204);
          }
          piVar2 = piVar3 + 1;
        } while (*(int **)(iVar1 + 0x10) != piVar2);
      }
      iVar1 = *(int *)(iVar1 + 0xc);
    } while (iVar1 != 0);
  }
  else {
    piVar2 = (int *)(param_2 - *(int *)(param_1 + 0x2c));
    if (*piVar2 != *(int *)(param_2 + piVar2[2])) {
      FUN_005c381c(param_1,piVar2,PTR_s_rt_mempool_check_integrity__0071c204);
      return;
    }
  }
  return;
}


// 0x05c39fc (0x44 bytes)
void FUN_005c39fc(int param_1)

{
  if (*(int *)(param_1 + -0xc) == *(int *)(param_1 + *(int *)(param_1 + -4))) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  abort();
}


// 0x05c3a44 (0x5c bytes)
undefined8 FUN_005c3a44(int param_1,undefined4 param_2)

{
  undefined4 uStack00000038;
  
  uStack00000038 = param_2;
  FUN_005519f0(&stack0x00000038);
  *(int *)(param_1 + 0x38) = *(int *)(param_1 + 0x38) - *(int *)(param_1 + 0x28);
  *(int *)(param_1 + 0x40) = *(int *)(param_1 + 0x40) + -1;
  return 0;
}


// 0x05c3aa0 (0xbc bytes)
undefined8 FUN_005c3aa0(int param_1,int param_2)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  
  iVar1 = *(int *)(param_1 + 0x50);
  *(int *)(param_2 + 0x10) = param_2 + 0x14;
  *(undefined4 *)(param_2 + 4) = 0;
  if (iVar1 != param_2) {
    iVar1 = *(int *)(param_2 + 0xc);
    if (iVar1 != 0) {
      *(undefined4 *)(iVar1 + 8) = *(undefined4 *)(param_2 + 8);
    }
    uVar2 = *(uint *)(param_1 + 0x40);
    uVar3 = *(uint *)(param_1 + 0x24);
    *(int *)(*(int *)(param_2 + 8) + 0xc) = iVar1;
    if (uVar3 < uVar2) {
      FUN_005c3a44(param_1,param_2);
      return 0;
    }
    *(undefined4 *)(param_2 + 8) = 0;
    iVar1 = *(int *)(param_1 + 0x4c);
    iVar4 = *(int *)(param_1 + 0x44);
    *(int *)(param_2 + 0xc) = iVar1;
    *(int *)(param_1 + 0x44) = iVar4 + 1;
    if (iVar1 != 0) {
      *(int *)(iVar1 + 8) = param_2;
    }
    *(int *)(param_1 + 0x4c) = param_2;
  }
  return 0;
}


// 0x05c3b5c (0x108 bytes)
undefined8 FUN_005c3b5c(int param_1,int param_2)

{
  int *piVar1;
  int iVar2;
  undefined8 uVar3;
  int *piVar4;
  uint uVar5;
  GPiece<16> local_10;
  
  uVar3 = 0xec54;
  piVar4 = (int *)(param_2 - *(int *)(param_1 + 0x2c));
  uVar5 = piVar4[1] - 1;
  if ((piVar4[1] & 0x7fffffffU) != 0) {
    piVar4[1] = uVar5;
    if (((uVar5 & 0x7fffffff) == 0) && (-1 < (int)uVar5)) {
      piVar1 = (int *)*piVar4;
      if (piVar1 == (int *)0x0) {
        *(int *)(param_1 + 0x38) = *(int *)(param_1 + 0x38) - (piVar4[2] + *(int *)(param_1 + 0x2c))
        ;
        FUN_005519f0(local_10);
        return 0;
      }
      *(int *)(param_1 + 0x3c) = *(int *)(param_1 + 0x3c) - piVar4[2];
      iVar2 = *piVar1;
      *piVar1 = iVar2 + -1;
      if (iVar2 + -1 == 0) {
        FUN_005c3aa0(param_1,piVar1);
        return 0;
      }
    }
    uVar3 = 0;
  }
  return uVar3;
}


// 0x05c3c64 (0xf0 bytes)
undefined8 FUN_005c3c64(int param_1,int param_2)

{
  int *piVar1;
  int iVar2;
  int *piVar3;
  undefined8 uVar4;
  GPiece<16> local_10;
  
  piVar3 = (int *)(param_2 - *(int *)(param_1 + 0x2c));
  uVar4 = 0xec55;
  if (piVar3[1] < 0) {
    piVar3[1] = piVar3[1] & 0x7fffffff;
    uVar4 = 0;
    *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) + -1;
    if (piVar3[1] == 0) {
      piVar1 = (int *)*piVar3;
      if (piVar1 == (int *)0x0) {
        *(int *)(param_1 + 0x38) = *(int *)(param_1 + 0x38) - (piVar3[2] + *(int *)(param_1 + 0x2c))
        ;
        FUN_005519f0(local_10);
        uVar4 = 0;
      }
      else {
        *(int *)(param_1 + 0x3c) = *(int *)(param_1 + 0x3c) - piVar3[2];
        iVar2 = *piVar1;
        *piVar1 = iVar2 + -1;
        if (iVar2 + -1 == 0) {
          FUN_005c3aa0(param_1,piVar1);
          uVar4 = 0;
        }
      }
    }
  }
  return uVar4;
}


// 0x05c3d54 (0xec bytes)
undefined8 FUN_005c3d54(int param_1)

{
  int iVar1;
  GPiece<4> local_20;
  GPiece<20> local_1c;
  
  iVar1 = *(int *)(param_1 + 0x50);
  if (iVar1 != 0) {
    do {
      *(undefined4 *)(param_1 + 0x50) = *(undefined4 *)(iVar1 + 0xc);
      FUN_005519f0(local_1c);
      iVar1 = *(int *)(param_1 + 0x50);
    } while (iVar1 != 0);
  }
  iVar1 = *(int *)(param_1 + 0x4c);
  if (iVar1 != 0) {
    do {
      *(undefined4 *)(param_1 + 0x4c) = *(undefined4 *)(iVar1 + 0xc);
      FUN_005519f0(local_1c);
      iVar1 = *(int *)(param_1 + 0x4c);
    } while (iVar1 != 0);
  }
  FUN_005519f0(local_20);
  return 0;
}


// 0x05c3e40 (0x14c bytes)
/* WARNING: Removing unreachable block (ram,0x005c3f40) */
/* WARNING: Removing unreachable block (ram,0x005c3f00) */
/* WARNING: Removing unreachable block (ram,0x005c3f78) */

undefined4 FUN_005c3e40(int param_1)

{
  int iVar1;
  uint uVar2;
  GPiece<16> local_20;
  
  iVar1 = FUN_00551b80(local_20,*(undefined4 *)(param_1 + 0x28));
  if (iVar1 != 0) {
    return 0;
  }
  uVar2 = *(int *)(param_1 + 0x40) + 1;
  *(uint *)(param_1 + 0x40) = uVar2;
  if (*(uint *)(param_1 + 0x60) < uVar2) {
    *(uint *)(param_1 + 0x60) = uVar2;
    uVar2 = *(int *)(param_1 + 0x38) + *(int *)(param_1 + 0x28);
    *(uint *)(param_1 + 0x38) = uVar2;
    if (uVar2 <= *(uint *)(param_1 + 100)) {
      uRam00000000 = 0;
      uRam00000004 = 0;
      uRam00000008 = 0;
      uRam0000000c = 0;
      uRam00000010 = 0x14;
      return 0;
    }
  }
  else {
    uVar2 = *(int *)(param_1 + 0x38) + *(int *)(param_1 + 0x28);
    *(uint *)(param_1 + 0x38) = uVar2;
    if (uVar2 <= *(uint *)(param_1 + 100)) {
      uRam00000000 = 0;
      uRam00000004 = 0;
      uRam00000008 = 0;
      uRam0000000c = 0;
      uRam00000010 = 0x14;
      return 0;
    }
  }
  *(uint *)(param_1 + 100) = uVar2;
  uRam00000010 = 0x14;
  uRam0000000c = 0;
  uRam00000008 = 0;
  uRam00000004 = 0;
  uRam00000000 = 0;
  return 0;
}


// 0x05c3f8c (0x1fc bytes)
int FUN_005c3f8c(int param_1,uint param_2)

{
  undefined4 *puVar1;
  uint uVar2;
  int *piVar4;
  longlong lVar3;
  int iVar5;
  uint uVar6;
  uint uVar7;
  GPiece<24> local_30;
  
  if ((param_2 & 3) != 0) {
    param_2 = (param_2 & 0xfffffffc) + 4;
  }
  piVar4 = *(int **)(param_1 + 0x50);
  uVar7 = param_2 + *(int *)(param_1 + 0x2c);
  if (*(uint *)(param_1 + 0x48) < uVar7) {
    lVar3 = FUN_00551b80(local_30,uVar7);
    if (lVar3 != 0) {
      return 0;
    }
    puVar1 = (undefined4 *)0x0;
    uVar7 = uVar7 + *(int *)(param_1 + 0x38);
    *(uint *)(param_1 + 0x38) = uVar7;
    uRam00000000 = 0;
    if (*(uint *)(param_1 + 100) < uVar7) {
      *(uint *)(param_1 + 100) = uVar7;
    }
    *(int *)(param_1 + 0x5c) = *(int *)(param_1 + 0x5c) + 1;
    goto LAB_005c40b4;
  }
  if (*(uint *)(param_1 + 0x48) - piVar4[1] < uVar7) {
    piVar4 = *(int **)(param_1 + 0x4c);
    if (piVar4 == (int *)0x0) {
      piVar4 = (int *)FUN_005c3e40(param_1);
      if (piVar4 == (int *)0x0) {
        return 0;
      }
      uVar2 = *(uint *)(param_1 + 0x40);
LAB_005c4124:
      *(uint *)(param_1 + 0x6c) = uVar2;
    }
    else {
      *(int *)(param_1 + 0x4c) = piVar4[3];
      if (piVar4[3] != 0) {
        *(undefined4 *)(piVar4[3] + 8) = 0;
      }
      iVar5 = *(int *)(param_1 + 0x44) + -1;
      uVar2 = *(int *)(param_1 + 0x40) - iVar5;
      *(int *)(param_1 + 0x44) = iVar5;
      if (*(uint *)(param_1 + 0x6c) < uVar2) goto LAB_005c4124;
    }
    piVar4[2] = 0;
    iVar5 = *(int *)(param_1 + 0x50);
    piVar4[3] = iVar5;
    if (iVar5 != 0) {
      *(int **)(iVar5 + 8) = piVar4;
    }
    *(int **)(param_1 + 0x50) = piVar4;
  }
  puVar1 = (undefined4 *)piVar4[4];
  *piVar4 = *piVar4 + 1;
  piVar4[1] = uVar7 + piVar4[1];
  uVar2 = *(uint *)(param_1 + 0x68);
  uVar6 = param_2 + *(int *)(param_1 + 0x3c);
  piVar4[4] = (int)puVar1 + uVar7;
  *(uint *)(param_1 + 0x3c) = uVar6;
  if (uVar2 < uVar6) {
    *(uint *)(param_1 + 0x68) = uVar6;
  }
  *puVar1 = piVar4;
LAB_005c40b4:
  puVar1[2] = param_2;
  puVar1[1] = 0x80000000;
  *(int *)(param_1 + 0x54) = *(int *)(param_1 + 0x54) + 1;
  *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) + 1;
  return *(int *)(param_1 + 0x2c) + (int)puVar1;
}


// 0x05c4188 (0x1e8 bytes)
/* WARNING: Removing unreachable block (ram,0x005c4360) */

ulonglong FUN_005c4188(undefined4 *param_1,undefined4 *param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  ulonglong uVar9;
  GPiece<24> local_30;
  
  uVar9 = FUN_00551de8(local_30,0x70);
  if (uVar9 != 0) goto LAB_005c42e4;
  uRam0000002c = 0xc;
  uRam00000048 = param_1[1];
  if ((uRam00000048 & 3) == 0) {
    uRam00000028 = uRam00000048 + 0x14;
    if ((uRam00000028 & 3) == 0) goto LAB_005c4208;
    uRam00000028 = (uRam00000028 & 0xfffffffc) + 4;
    uRam00000024 = *param_1;
    iRam0000004c = FUN_005c3e40(0);
  }
  else {
    uRam00000028 = uRam00000048 & 0xfffffffc;
    uRam00000048 = uRam00000028 + 4;
    uRam00000028 = uRam00000028 + 0x18;
LAB_005c4208:
    uRam00000024 = *param_1;
    iRam0000004c = FUN_005c3e40(0);
  }
  if (iRam0000004c != 0) {
    iRam00000044 = iRam00000044 + 1;
    iRam00000050 = FUN_005c3e40(0);
    puVar8 = PTR_PTR_0071c224;
    puVar7 = PTR_PTR_0071c220;
    puVar6 = PTR_PTR_0071c21c;
    puVar5 = PTR_PTR_0071c218;
    puVar4 = PTR_PTR_0071c214;
    puVar3 = PTR_PTR_0071c210;
    puVar2 = PTR_PTR_0071c20c;
    puVar1 = PTR_PTR_0071c208;
    if (iRam00000050 != 0) {
      puRam00000020 = PTR_PTR_0071c228;
      *param_2 = 0;
      puRam00000000 = puVar1;
      puRam00000004 = puVar2;
      puRam00000008 = puVar3;
      puRam0000000c = puVar4;
      puRam00000010 = puVar5;
      puRam00000014 = puVar6;
      puRam00000018 = puVar7;
      puRam0000001c = puVar8;
      return 0;
    }
  }
  uVar9 = 100;
  FUN_005c3d54(0);
LAB_005c42e4:
  return uVar9 & 0xffffffff;
}


// 0x05c4370 (0x124 bytes)
int FUN_005c4370(int param_1,uint param_2)

{
  uint uVar1;
  uint uVar2;
  byte bVar3;
  ulonglong uVar4;
  byte bVar5;
  int iVar6;
  ulonglong uVar7;
  undefined4 uVar8;
  int iVar9;
  int iVar10;
  
  if ((param_1 != 0) && (param_2 != 0)) {
    uVar1 = *(uint *)(param_1 + 0x18);
    uVar2 = *(uint *)(param_1 + 0x1c);
    if ((param_2 <= uVar1 * uVar2) &&
       ((param_2 <= (*(int *)(param_1 + 0x14) - uVar2) - uVar1 * *(uint *)(param_1 + 0x20) &&
        (uVar4 = (ulonglong)((param_2 + uVar1) - 1) / (ulonglong)uVar1, 0 < (int)uVar2)))) {
      uVar7 = (ulonglong)uVar2;
      iVar6 = *(int *)(param_1 + 0x2c);
      iVar10 = 0;
      iVar9 = 0;
      do {
        iVar9 = iVar9 + 1;
        if (*(char *)(iVar10 + iVar6) == '\0') {
          if ((int)uVar4 == iVar9) {
            uVar7 = *(uint *)(param_1 + 0x20) + uVar4;
            uVar8 = (undefined4)uVar7;
            *(undefined4 *)(param_1 + 0x20) = uVar8;
            if ((ulonglong)*(uint *)(param_1 + 0x24) < (uVar7 & 0xffffffff)) {
              *(undefined4 *)(param_1 + 0x24) = uVar8;
            }
            bVar5 = 1;
            if ((int)uVar4 + -1 < 0) {
              uVar4 = 1;
            }
            while( true ) {
              bVar3 = bVar5 & 0x7f;
              bVar5 = bVar5 + 1;
              *(byte *)(iVar10 + iVar6) = bVar3 | 0x80;
              iVar6 = iVar10 * *(int *)(param_1 + 0x18);
              iVar10 = iVar10 + -1;
              uVar4 = uVar4 - 1;
              if (uVar4 == 0) break;
              iVar6 = *(int *)(param_1 + 0x2c);
            }
            return iVar6 + *(int *)(param_1 + 0x28);
          }
        }
        else {
          iVar9 = 0;
        }
        iVar10 = iVar10 + 1;
        uVar7 = uVar7 - 1;
      } while (uVar7 != 0);
    }
  }
  return 0;
}


// 0x05c4494 (0x94 bytes)
undefined8 FUN_005c4494(int param_1,int param_2)

{
  int iVar1;
  undefined1 *puVar2;
  uint uVar3;
  uint uVar4;
  ulonglong uVar5;
  
  if (((param_1 != 0) && (param_2 != 0)) &&
     (uVar3 = param_2 - *(int *)(param_1 + 0x28), uVar4 = uVar3 / *(uint *)(param_1 + 0x18),
     uVar3 == uVar4 * *(uint *)(param_1 + 0x18))) {
    iVar1 = *(int *)(param_1 + 0x2c);
    uVar5 = (ulonglong)*(byte *)(uVar4 + iVar1) & 0x7f;
    *(int *)(param_1 + 0x20) = *(int *)(param_1 + 0x20) - (int)uVar5;
    if ((int)uVar5 != 0) {
      while( true ) {
        puVar2 = (undefined1 *)(uVar4 + iVar1);
        uVar4 = uVar4 + 1;
        *puVar2 = 0;
        uVar5 = uVar5 - 1;
        if (uVar5 == 0) break;
        iVar1 = *(int *)(param_1 + 0x2c);
      }
    }
    return 0;
  }
  return 2;
}


// 0x05c4528 (0x68 bytes)
undefined8 FUN_005c4528(int param_1,int *param_2)

{
  int iVar1;
  int iVar2;
  undefined8 uVar3;
  int iVar4;
  
  uVar3 = 2;
  if ((param_1 != 0) && (param_2 != (int *)0x0)) {
    param_2[3] = 0;
    *param_2 = 0;
    param_2[1] = 0;
    param_2[2] = 0;
    iVar1 = *(int *)(param_1 + 0x18);
    uVar3 = 0;
    iVar4 = *(int *)(param_1 + 0x20) * iVar1;
    param_2[2] = iVar4;
    *param_2 = iVar1 * *(int *)(param_1 + 0x24);
    iVar1 = *(int *)(param_1 + 0x1c);
    iVar2 = *(int *)(param_1 + 0x14);
    param_2[1] = iVar2;
    param_2[3] = (iVar2 - iVar1) - iVar4;
  }
  return uVar3;
}


// 0x05c4590 (0x90 bytes)
undefined8 FUN_005c4590(undefined4 *param_1)

{
  undefined8 uVar1;
  GPiece<16> local_10;
  
  uVar1 = 2;
  if (param_1 != (undefined4 *)0x0) {
    FUN_005519f0(param_1 + 10);
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
    FUN_005519f0(local_10);
    uVar1 = 0;
  }
  return uVar1;
}


// 0x05c4620 (0x1e0 bytes)
ulonglong FUN_005c4620(uint *param_1,undefined4 *param_2)

{
  ulonglong uVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  GPiece<24> local_30;
  
  if ((param_2 != (undefined4 *)0x0) && (param_1 != (uint *)0x0)) {
    if (((*param_1 & 3) == 0) && (((param_1[1] & 3) == 0 && (param_1[1] < *param_1)))) {
      uVar1 = FUN_00551de8(local_30,0x30);
      uVar2 = uVar1;
      if ((int)uVar1 == 0) {
        iRam0000002c = 0;
        puRam00000000 = (undefined *)0x0;
        puRam00000004 = (undefined *)0x0;
        puRam00000008 = (undefined *)0x0;
        puRam0000000c = (undefined *)0x0;
        uRam00000010 = 0;
        uRam00000014 = 0;
        uRam00000018 = 0;
        iRam0000001c = 0;
        uRam00000020 = 0;
        uRam00000024 = 0;
        iRam00000028 = 0;
        uVar2 = FUN_00551b80(0x28,*param_1);
        if (uVar2 == 0) {
          uRam00000014 = *param_1;
          uRam00000018 = param_1[1];
          uRam00000010 = 0;
          uRam00000020 = 0;
          uRam00000024 = 0;
          uVar3 = (ulonglong)uRam00000014 -
                  (longlong)(int)(uRam00000014 / uRam00000018) * (longlong)(int)uRam00000018;
          uVar2 = (ulonglong)*param_1 / (ulonglong)param_1[1];
          iRam0000001c = (int)uVar2;
          if ((uVar3 & 0xffffffff) < uVar2) {
            iRam0000001c = iRam0000001c -
                           (int)((((ulonglong)uRam00000018 + (uVar2 - uVar3)) - 1 & 0xffffffff) /
                                (ulonglong)uRam00000018);
          }
          iRam0000002c = iRam0000001c * uRam00000018 + iRam00000028;
          memset(iRam0000002c,0,iRam0000001c);
          puRam0000000c = PTR_PTR_0071c238;
          puRam00000000 = PTR_PTR_0071c22c;
          *param_2 = 0;
          puRam00000004 = PTR_PTR_0071c230;
          puRam00000008 = PTR_PTR_0071c234;
          return uVar1 & 0xffffffff;
        }
        FUN_005c4590(0);
      }
      goto LAB_005c4684;
    }
  }
  uVar2 = 2;
LAB_005c4684:
  return uVar2 & 0xffffffff;
}


