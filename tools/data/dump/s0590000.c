//==== 0059033c  ns=Global  size=0x294
// sig: undefined FUN_0059033c(void)
// callers(0): 
// callees(2): 00553b40 FUN_00553b40; 00553f04 FUN_00553f04

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



//==== 005905d0  ns=Global  size=0x58
// sig: undefined FUN_005905d0(void)
// callers(0): 
// callees(2): 00553b40 FUN_00553b40; 00553f04 FUN_00553f04

void FUN_005905d0(undefined8 param_1,int *param_2)

{
  int iVar1;
  
  iVar1 = *param_2;
  FUN_00553b40(param_1,iVar1,0x15);
  FUN_00553f04(param_1,iVar1 + 0x18);
  return;
}



//==== 00590628  ns=Global  size=0x58
// sig: undefined FUN_00590628(void)
// callers(0): 
// callees(2): 00553b40 FUN_00553b40; 00553f04 FUN_00553f04

void FUN_00590628(undefined8 param_1,int *param_2)

{
  int iVar1;
  
  iVar1 = *param_2;
  FUN_00553b40(param_1,iVar1,0x15);
  FUN_00553f04(param_1,iVar1 + 0x18);
  return;
}



//==== 00590680  ns=Global  size=0x68
// sig: undefined FUN_00590680(void)
// callers(0): 
// callees(3): 00553b40 FUN_00553b40; 00553c74 FUN_00553c74; 00553f04 FUN_00553f04

void FUN_00590680(undefined8 param_1,int *param_2)

{
  int iVar1;
  
  iVar1 = *param_2;
  FUN_00553b40(param_1,iVar1,0x15);
  FUN_00553c74(param_1,3);
  FUN_00553f04(param_1,iVar1 + 0x18);
  return;
}



//==== 005906e8  ns=Global  size=0xd0
// sig: undefined FUN_005906e8(void)
// callers(0): 
// callees(3): 00553b40 FUN_00553b40; 00553f04 FUN_00553f04; 00554290 FUN_00554290

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



//==== 005907b8  ns=Global  size=0xac
// sig: undefined FUN_005907b8(void)
// callers(0): 
// callees(3): 00553b40 FUN_00553b40; 00553f04 FUN_00553f04; 00554290 FUN_00554290

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



//==== 00590864  ns=Global  size=0x9c
// sig: undefined FUN_00590864(void)
// callers(0): 
// callees(3): 00553b40 FUN_00553b40; 00553f04 FUN_00553f04; 00554290 FUN_00554290

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



//==== 00590900  ns=Global  size=0x6c
// sig: undefined FUN_00590900(void)
// callers(0): 
// callees(3): 00553b40 FUN_00553b40; 00553f04 FUN_00553f04; 00554290 FUN_00554290

void FUN_00590900(undefined8 param_1,int *param_2)

{
  int iVar1;
  
  iVar1 = *param_2;
  FUN_00553b40(param_1,iVar1,0x15);
  FUN_00553f04(param_1,iVar1 + 0x18);
  FUN_00554290(param_1,iVar1 + 0x1c);
  return;
}



//==== 0059096c  ns=Global  size=0xf4
// sig: undefined FUN_0059096c(void)
// callers(0): 
// callees(4): 00553b40 FUN_00553b40; 00553c74 FUN_00553c74; 00553f04 FUN_00553f04; 00554290 FUN_00554290

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



//==== 00590a60  ns=Global  size=0xc8
// sig: undefined FUN_00590a60(void)
// callers(0): 
// callees(3): 00553b40 FUN_00553b40; 00553f04 FUN_00553f04; 00554290 FUN_00554290

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



//==== 00590b28  ns=Global  size=0xb0
// sig: undefined FUN_00590b28(void)
// callers(0): 
// callees(4): 00553b40 FUN_00553b40; 00553c74 FUN_00553c74; 00553f04 FUN_00553f04; 0055bbe8 FUN_0055bbe8

void FUN_00590b28(undefined8 param_1,int *param_2)

{
  int iVar1;
  undefined1 local_30 [16];
  
  iVar1 = *param_2;
  FUN_00553b40(param_1,iVar1,0x15);
  FUN_00553c74(param_1,3);
  FUN_00553f04(param_1,iVar1 + 0x18);
  FUN_00553f04(param_1,iVar1 + 0x1c);
  FUN_0055bbe8(param_1,local_30);
  FUN_00553f04(param_1,iVar1 + 0xbc);
  return;
}



//==== 00590bd8  ns=Global  size=0x88
// sig: undefined FUN_00590bd8(void)
// callers(0): 
// callees(2): 00553f04 FUN_00553f04; 0055bbe8 FUN_0055bbe8

void FUN_00590bd8(undefined8 param_1,int *param_2)

{
  int iVar1;
  undefined1 local_30 [16];
  
  iVar1 = *param_2;
  FUN_00553f04(param_1,iVar1);
  FUN_00553f04(param_1,iVar1 + 4);
  FUN_00553f04(param_1,iVar1 + 8);
  FUN_0055bbe8(param_1,local_30);
  return;
}



//==== 00590c60  ns=Global  size=0x9c
// sig: undefined FUN_00590c60(void)
// callers(0): 
// callees(4): 00553b40 FUN_00553b40; 00553c74 FUN_00553c74; 00553f04 FUN_00553f04; 0055bbe8 FUN_0055bbe8

void FUN_00590c60(undefined8 param_1,int *param_2)

{
  int iVar1;
  undefined1 local_30 [16];
  
  iVar1 = *param_2;
  FUN_00553b40(param_1,iVar1,0x15);
  FUN_00553c74(param_1,3);
  FUN_00553f04(param_1,iVar1 + 0x18);
  FUN_00553f04(param_1,iVar1 + 0x1c);
  FUN_0055bbe8(param_1,local_30);
  return;
}



//==== 00590cfc  ns=Global  size=0x8c
// sig: undefined FUN_00590cfc(void)
// callers(0): 
// callees(3): 00553b40 FUN_00553b40; 00553f04 FUN_00553f04; 0055bbe8 FUN_0055bbe8

void FUN_00590cfc(undefined8 param_1,int *param_2)

{
  int iVar1;
  undefined1 local_30 [16];
  
  iVar1 = *param_2;
  FUN_00553b40(param_1,iVar1,0x15);
  FUN_00553f04(param_1,iVar1 + 0x18);
  FUN_00553f04(param_1,iVar1 + 0x1c);
  FUN_0055bbe8(param_1,local_30);
  return;
}



//==== 00590d88  ns=Global  size=0xc4
// sig: undefined FUN_00590d88(void)
// callers(0): 
// callees(4): 00553b40 FUN_00553b40; 00553c74 FUN_00553c74; 00553f04 FUN_00553f04; 0055bbe8 FUN_0055bbe8

void FUN_00590d88(undefined8 param_1,int *param_2)

{
  int iVar1;
  undefined1 local_30 [16];
  
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



//==== 00590e4c  ns=Global  size=0xc4
// sig: undefined FUN_00590e4c(void)
// callers(3): 00590f10 FUN_00590f10; 00590f98 FUN_00590f98; 00591ffc FUN_00591ffc
// callees(4): 00553b40 FUN_00553b40; 00553c74 FUN_00553c74; 00553f04 FUN_00553f04; 0055bbe8 FUN_0055bbe8

void FUN_00590e4c(undefined8 param_1,int *param_2)

{
  int iVar1;
  undefined1 local_30 [16];
  
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



//==== 00590f10  ns=Global  size=0x88
// sig: undefined FUN_00590f10(void)
// callers(0): 
// callees(3): 00553b40 FUN_00553b40; 00553f04 FUN_00553f04; 00590e4c FUN_00590e4c

void FUN_00590f10(undefined8 param_1,int *param_2)

{
  int iVar1;
  undefined1 local_30 [16];
  
  iVar1 = *param_2;
  FUN_00553b40(param_1,iVar1,0x15);
  FUN_00553f04(param_1,iVar1 + 0x18);
  FUN_00553f04(param_1,iVar1 + 0x1c);
  FUN_00590e4c(param_1,local_30);
  return;
}



//==== 00590f98  ns=Global  size=0x34
// sig: undefined FUN_00590f98(void)
// callers(0): 
// callees(1): 00590e4c FUN_00590e4c

void FUN_00590f98(undefined8 param_1)

{
  undefined1 local_10 [16];
  
  FUN_00590e4c(param_1,local_10);
  return;
}



//==== 00590fcc  ns=Global  size=0x10c
// sig: undefined FUN_00590fcc(void)
// callers(0): 
// callees(5): 00553b40 FUN_00553b40; 00553c74 FUN_00553c74; 00553f04 FUN_00553f04; 0055b3d0 FUN_0055b3d0; 0055b450 FUN_0055b450

void FUN_00590fcc(undefined8 param_1,int *param_2)

{
  int iVar1;
  undefined1 local_40 [24];
  
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



//==== 005910d8  ns=Global  size=0x390
// sig: undefined FUN_005910d8(void)
// callers(0): 
// callees(6): 00553b40 FUN_00553b40; 00553f04 FUN_00553f04; 0055b3d0 FUN_0055b3d0; 0055bbe8 FUN_0055bbe8; 0058ecc0 FUN_0058ecc0; 0058f060 FUN_0058f060

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
  undefined1 local_5c [12];
  
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



//==== 00591468  ns=Global  size=0x120
// sig: undefined FUN_00591468(void)
// callers(0): 
// callees(5): 00553b40 FUN_00553b40; 00553c74 FUN_00553c74; 00553f04 FUN_00553f04; 0055b3d0 FUN_0055b3d0; 0055b450 FUN_0055b450

void FUN_00591468(undefined8 param_1,int *param_2)

{
  int iVar1;
  undefined1 local_40 [24];
  
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



//==== 00591588  ns=Global  size=0x2e8
// sig: undefined FUN_00591588(void)
// callers(1): 00591cf4 FUN_00591cf4
// callees(3): 00553b40 FUN_00553b40; 00553f04 FUN_00553f04; 0055b3d0 FUN_0055b3d0

void FUN_00591588(int param_1,int *param_2)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  undefined1 local_40 [16];
  
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



//==== 00591870  ns=Global  size=0x230
// sig: undefined FUN_00591870(void)
// callers(0): 
// callees(4): 00553b40 FUN_00553b40; 00553f04 FUN_00553f04; 00554290 FUN_00554290; 005c8510 libc::strlen

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
          sVar3 = libc::strlen(*(char **)(iVar2 + *(int *)(iVar1 + 0x2c)));
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



//==== 00591aa0  ns=Global  size=0xd0
// sig: undefined FUN_00591aa0(void)
// callers(0): 
// callees(2): 00553b40 FUN_00553b40; 00553f04 FUN_00553f04

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



//==== 00591b70  ns=Global  size=0xb8
// sig: undefined FUN_00591b70(void)
// callers(0): 
// callees(2): 00553b40 FUN_00553b40; 00553f04 FUN_00553f04

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



//==== 00591c28  ns=Global  size=0xcc
// sig: undefined FUN_00591c28(void)
// callers(0): 
// callees(2): 00553b40 FUN_00553b40; 00553f04 FUN_00553f04

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



//==== 00591cf4  ns=Global  size=0x198
// sig: undefined FUN_00591cf4(void)
// callers(0): 
// callees(4): 00553b40 FUN_00553b40; 00553f04 FUN_00553f04; 00591588 FUN_00591588; 005a0fa0 FUN_005a0fa0

void FUN_00591cf4(int param_1,int *param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  int local_40;
  undefined1 local_3c [12];
  
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



//==== 00591e8c  ns=Global  size=0x11c
// sig: undefined FUN_00591e8c(void)
// callers(0): 
// callees(2): 00553b40 FUN_00553b40; 00553f04 FUN_00553f04

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



//==== 00591fa8  ns=Global  size=0x54
// sig: undefined FUN_00591fa8(void)
// callers(0): 
// callees(1): 00553f04 FUN_00553f04

void FUN_00591fa8(undefined8 param_1,int *param_2)

{
  int iVar1;
  
  iVar1 = *param_2;
  FUN_00553f04(param_1,iVar1);
  FUN_00553f04(param_1,iVar1 + 4);
  return;
}



//==== 00591ffc  ns=Global  size=0x84
// sig: undefined FUN_00591ffc(void)
// callers(0): 
// callees(2): 00553f04 FUN_00553f04; 00590e4c FUN_00590e4c

void FUN_00591ffc(undefined8 param_1,int *param_2)

{
  int iVar1;
  undefined1 local_30 [16];
  
  iVar1 = *param_2;
  FUN_00553f04(param_1,iVar1);
  FUN_00553f04(param_1,iVar1 + 4);
  FUN_00553f04(param_1,iVar1 + 8);
  FUN_00590e4c(param_1,local_30);
  return;
}



//==== 00592080  ns=Global  size=0xb4
// sig: undefined FUN_00592080(void)
// callers(0): 
// callees(2): 00553b40 FUN_00553b40; 00553f04 FUN_00553f04

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



//==== 00592134  ns=Global  size=0xcc
// sig: undefined FUN_00592134(void)
// callers(0): 
// callees(2): 00553b40 FUN_00553b40; 00553f04 FUN_00553f04

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



//==== 00592200  ns=Global  size=0x234
// sig: undefined FUN_00592200(void)
// callers(0): 
// callees(5): 00553b40 FUN_00553b40; 00553c74 FUN_00553c74; 00553f04 FUN_00553f04; 00554160 FUN_00554160; 00554290 FUN_00554290

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



//==== 00592434  ns=Global  size=0x7c
// sig: undefined FUN_00592434(void)
// callers(0): 
// callees(3): 00553b40 FUN_00553b40; 00553c74 FUN_00553c74; 00554160 FUN_00554160

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



//==== 005924b0  ns=Global  size=0xa8
// sig: undefined FUN_005924b0(void)
// callers(0): 
// callees(4): 00553b40 FUN_00553b40; 00553c74 FUN_00553c74; 00553f04 FUN_00553f04; 00554160 FUN_00554160

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



//==== 00592558  ns=Global  size=0x100
// sig: undefined FUN_00592558(void)
// callers(0): 
// callees(3): 00553b40 FUN_00553b40; 00553f04 FUN_00553f04; 00554290 FUN_00554290

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



//==== 00592658  ns=Global  size=0x204
// sig: undefined FUN_00592658(void)
// callers(0): 
// callees(4): 00553b40 FUN_00553b40; 00553f04 FUN_00553f04; 00554290 FUN_00554290; 005c8510 libc::strlen

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
        sVar4 = libc::strlen(*(char **)(iVar3 + *(int *)(iVar1 + 0x2c)));
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



//==== 0059285c  ns=Global  size=0x4
// sig: undefined FUN_0059285c(void)
// callers(0): 
// callees(0): 

void FUN_0059285c(void)

{
  return;
}



//==== 00592860  ns=Global  size=0x4
// sig: undefined FUN_00592860(void)
// callers(0): 
// callees(0): 

void FUN_00592860(void)

{
  return;
}



//==== 00592864  ns=Global  size=0x4
// sig: undefined FUN_00592864(void)
// callers(0): 
// callees(0): 

void FUN_00592864(void)

{
  return;
}



//==== 00592868  ns=Global  size=0x4
// sig: undefined FUN_00592868(void)
// callers(0): 
// callees(0): 

void FUN_00592868(void)

{
  return;
}



//==== 0059286c  ns=Global  size=0x4
// sig: undefined FUN_0059286c(void)
// callers(0): 
// callees(0): 

void FUN_0059286c(void)

{
  return;
}



//==== 00592870  ns=Global  size=0x4
// sig: undefined FUN_00592870(void)
// callers(0): 
// callees(0): 

void FUN_00592870(void)

{
  return;
}



//==== 00592874  ns=Global  size=0x8
// sig: undefined FUN_00592874(void)
// callers(0): 
// callees(0): 

undefined8 FUN_00592874(void)

{
  return 0x180;
}



//==== 0059287c  ns=Global  size=0x8
// sig: undefined FUN_0059287c(void)
// callers(0): 
// callees(0): 

undefined8 FUN_0059287c(void)

{
  return 0x1c;
}



//==== 00592884  ns=Global  size=0x8
// sig: undefined FUN_00592884(void)
// callers(0): 
// callees(0): 

undefined8 FUN_00592884(void)

{
  return 0x1c;
}



//==== 0059288c  ns=Global  size=0x8
// sig: undefined FUN_0059288c(void)
// callers(0): 
// callees(0): 

undefined8 FUN_0059288c(void)

{
  return 0x7c;
}



//==== 00592894  ns=Global  size=0x8
// sig: undefined FUN_00592894(void)
// callers(0): 
// callees(0): 

undefined8 FUN_00592894(void)

{
  return 0x50;
}



//==== 0059289c  ns=Global  size=0x58
// sig: undefined FUN_0059289c(void)
// callers(0): 
// callees(1): 0058203c FUN_0058203c

undefined8 FUN_0059289c(undefined8 param_1,undefined8 param_2,undefined8 param_3,int param_4)

{
  (*(code *)**(undefined4 **)(PTR_PTR_0071be84 + 0x38))(param_1,param_4,param_4,param_4 + 0x18,1,0);
  return 0x1c;
}



//==== 005928f4  ns=Global  size=0x58
// sig: undefined FUN_005928f4(void)
// callers(0): 
// callees(1): 0058203c FUN_0058203c

undefined8 FUN_005928f4(undefined8 param_1,undefined8 param_2,undefined8 param_3,int param_4)

{
  (*(code *)**(undefined4 **)(PTR_PTR_0071be84 + 0x38))(param_1,param_4,param_4,param_4 + 0x18,1,0);
  return 0x20;
}



//==== 0059294c  ns=Global  size=0x58
// sig: undefined FUN_0059294c(void)
// callers(0): 
// callees(1): 0058203c FUN_0058203c

undefined8 FUN_0059294c(undefined8 param_1,undefined8 param_2,undefined8 param_3,int param_4)

{
  (*(code *)**(undefined4 **)(PTR_PTR_0071be84 + 0x38))(param_1,param_4,param_4,param_4 + 0x18,1,0);
  return 0x1c;
}



//==== 005929a4  ns=Global  size=0x58
// sig: undefined FUN_005929a4(void)
// callers(0): 
// callees(1): 0058203c FUN_0058203c

undefined8 FUN_005929a4(undefined8 param_1,undefined8 param_2,undefined8 param_3,int param_4)

{
  (*(code *)**(undefined4 **)(PTR_PTR_0071be84 + 0x38))(param_1,param_4,param_4,param_4 + 0x18,1,0);
  return 0x1c;
}



//==== 005929fc  ns=Global  size=0x58
// sig: undefined FUN_005929fc(void)
// callers(0): 
// callees(1): 0058203c FUN_0058203c

undefined8 FUN_005929fc(undefined8 param_1,undefined8 param_2,undefined8 param_3,int param_4)

{
  (*(code *)**(undefined4 **)(PTR_PTR_0071be84 + 0x38))(param_1,param_4,param_4,param_4 + 0x18,1,0);
  return 0xc4;
}



//==== 00592a54  ns=Global  size=0x58
// sig: undefined FUN_00592a54(void)
// callers(0): 
// callees(1): 0058203c FUN_0058203c

undefined8 FUN_00592a54(undefined8 param_1,undefined8 param_2,undefined8 param_3,int param_4)

{
  (*(code *)**(undefined4 **)(PTR_PTR_0071be84 + 0x38))(param_1,param_4,param_4,param_4 + 0x18,1,0);
  return 0x20;
}



//==== 00592aac  ns=Global  size=0x58
// sig: undefined FUN_00592aac(void)
// callers(0): 
// callees(1): 0058203c FUN_0058203c

undefined8 FUN_00592aac(undefined8 param_1,undefined8 param_2,undefined8 param_3,int param_4)

{
  (*(code *)**(undefined4 **)(PTR_PTR_0071be84 + 0x38))(param_1,param_4,param_4,param_4 + 0x18,1,0);
  return 0x1c;
}



//==== 00592b04  ns=Global  size=0x60
// sig: undefined FUN_00592b04(void)
// callers(0): 
// callees(1): 0058203c FUN_0058203c

undefined8 FUN_00592b04(undefined8 param_1,undefined8 param_2,undefined8 param_3,int param_4)

{
  (*(code *)**(undefined4 **)(PTR_PTR_0071be84 + 0x38))
            (param_1,param_4,param_4 + 8,param_4,*(undefined1 *)(param_4 + 0x3d),0);
  return 0x40;
}



//==== 00592b64  ns=Global  size=0x58
// sig: undefined FUN_00592b64(void)
// callers(0): 
// callees(1): 0058203c FUN_0058203c

undefined8 FUN_00592b64(undefined8 param_1,undefined8 param_2,undefined8 param_3,int param_4)

{
  (*(code *)**(undefined4 **)(PTR_PTR_0071be84 + 0x38))(param_1,param_4,param_4,param_4 + 0x18,1,0);
  return 0x20;
}



//==== 00592bbc  ns=Global  size=0x58
// sig: undefined FUN_00592bbc(void)
// callers(0): 
// callees(1): 0058203c FUN_0058203c

undefined8 FUN_00592bbc(undefined8 param_1,undefined8 param_2,undefined8 param_3,int param_4)

{
  (*(code *)**(undefined4 **)(PTR_PTR_0071be84 + 0x38))(param_1,param_4,param_4,param_4 + 0x18,1,0);
  return 0x20;
}



//==== 00592c14  ns=Global  size=0x58
// sig: undefined FUN_00592c14(void)
// callers(0): 
// callees(1): 0058203c FUN_0058203c

undefined8 FUN_00592c14(undefined8 param_1,undefined8 param_2,undefined8 param_3,int param_4)

{
  (*(code *)**(undefined4 **)(PTR_PTR_0071be84 + 0x38))(param_1,param_4,param_4,param_4 + 0x18,1,0);
  return 0xc4;
}



//==== 00592c6c  ns=Global  size=0x64
// sig: undefined FUN_00592c6c(void)
// callers(0): 
// callees(1): 0058203c FUN_0058203c

undefined8 FUN_00592c6c(undefined8 param_1,undefined8 param_2,undefined8 param_3,int param_4)

{
  (*(code *)**(undefined4 **)(PTR_PTR_0071be84 + 0x38))
            (param_1,param_4,param_4,param_4 + 0x18,*(undefined1 *)(param_4 + 0x1c),0);
  return 600;
}



//==== 00592cd0  ns=Global  size=0x58
// sig: undefined FUN_00592cd0(void)
// callers(0): 
// callees(1): 0058203c FUN_0058203c

undefined8 FUN_00592cd0(undefined8 param_1,undefined8 param_2,undefined8 param_3,int param_4)

{
  (*(code *)**(undefined4 **)(PTR_PTR_0071be84 + 0x38))(param_1,param_4,param_4,param_4 + 0x18,1,0);
  return 0x1c;
}



//==== 00592d28  ns=Global  size=0x58
// sig: undefined FUN_00592d28(void)
// callers(0): 
// callees(1): 0058203c FUN_0058203c

undefined8 FUN_00592d28(undefined8 param_1,undefined8 param_2,undefined8 param_3,int param_4)

{
  (*(code *)**(undefined4 **)(PTR_PTR_0071be84 + 0x38))(param_1,param_4,param_4,param_4 + 0x18,1,0);
  return 0x3c;
}



//==== 00592d80  ns=Global  size=0x58
// sig: undefined FUN_00592d80(void)
// callers(0): 
// callees(1): 0058203c FUN_0058203c

undefined8 FUN_00592d80(undefined8 param_1,undefined8 param_2,undefined8 param_3,int param_4)

{
  (*(code *)**(undefined4 **)(PTR_PTR_0071be84 + 0x38))(param_1,param_4,param_4,param_4 + 0x18,1,0);
  return 0x1c;
}



//==== 00592dd8  ns=Global  size=0x58
// sig: undefined FUN_00592dd8(void)
// callers(0): 
// callees(1): 0058203c FUN_0058203c

undefined8 FUN_00592dd8(undefined8 param_1,undefined8 param_2,undefined8 param_3,int param_4)

{
  (*(code *)**(undefined4 **)(PTR_PTR_0071be84 + 0x38))(param_1,param_4,param_4,param_4 + 0x18,1,0);
  return 0x1c;
}



//==== 00592e30  ns=Global  size=0x58
// sig: undefined FUN_00592e30(void)
// callers(0): 
// callees(1): 0058203c FUN_0058203c

undefined8 FUN_00592e30(undefined8 param_1,undefined8 param_2,undefined8 param_3,int param_4)

{
  (*(code *)**(undefined4 **)(PTR_PTR_0071be84 + 0x38))(param_1,param_4,param_4,param_4 + 0x18,1,0);
  return 0x20;
}



//==== 00592e88  ns=Global  size=0x58
// sig: undefined FUN_00592e88(void)
// callers(0): 
// callees(1): 0058203c FUN_0058203c

undefined8 FUN_00592e88(undefined8 param_1,undefined8 param_2,undefined8 param_3,int param_4)

{
  (*(code *)**(undefined4 **)(PTR_PTR_0071be84 + 0x38))(param_1,param_4,param_4,param_4 + 0x18,1,0);
  return 0x20;
}



//==== 00592ee0  ns=Global  size=0x58
// sig: undefined FUN_00592ee0(void)
// callers(0): 
// callees(1): 0058203c FUN_0058203c

undefined8 FUN_00592ee0(undefined8 param_1,undefined8 param_2,undefined8 param_3,int param_4)

{
  (*(code *)**(undefined4 **)(PTR_PTR_0071be84 + 0x38))(param_1,param_4,param_4,param_4 + 0x18,1,0);
  return 0xc0;
}



//==== 00592f38  ns=Global  size=0x58
// sig: undefined FUN_00592f38(void)
// callers(0): 
// callees(1): 0058203c FUN_0058203c

undefined8 FUN_00592f38(undefined8 param_1,undefined8 param_2,undefined8 param_3,int param_4)

{
  (*(code *)**(undefined4 **)(PTR_PTR_0071be84 + 0x38))(param_1,param_4,param_4,param_4 + 0x18,1,0);
  return 0xb8;
}



//==== 00592f90  ns=Global  size=0x58
// sig: undefined FUN_00592f90(void)
// callers(0): 
// callees(1): 0058203c FUN_0058203c

undefined8 FUN_00592f90(undefined8 param_1,undefined8 param_2,undefined8 param_3,int param_4)

{
  (*(code *)**(undefined4 **)(PTR_PTR_0071be84 + 0x38))(param_1,param_4,param_4,param_4 + 0x18,1,0);
  return 0xbc;
}



//==== 00592fe8  ns=Global  size=0x8
// sig: undefined FUN_00592fe8(void)
// callers(0): 
// callees(0): 

undefined8 FUN_00592fe8(void)

{
  return 0x3c;
}



//==== 00592ff0  ns=Global  size=0x58
// sig: undefined FUN_00592ff0(void)
// callers(0): 
// callees(1): 0058203c FUN_0058203c

undefined8 FUN_00592ff0(undefined8 param_1,undefined8 param_2,undefined8 param_3,int param_4)

{
  (*(code *)**(undefined4 **)(PTR_PTR_0071be84 + 0x38))(param_1,param_4,param_4,param_4 + 0x18,1,0);
  return 0xb8;
}



//==== 00593048  ns=Global  size=0x64
// sig: undefined FUN_00593048(void)
// callers(0): 
// callees(1): 0058203c FUN_0058203c

undefined8 FUN_00593048(undefined8 param_1,undefined8 param_2,undefined8 param_3,int param_4)

{
  (*(code *)**(undefined4 **)(PTR_PTR_0071be84 + 0x38))
            (param_1,param_4,param_4,param_4 + 0x18,*(undefined1 *)(param_4 + 0x6c),0);
  return 0x70;
}



//==== 005930ac  ns=Global  size=0x64
// sig: undefined FUN_005930ac(void)
// callers(0): 
// callees(1): 0058203c FUN_0058203c

undefined8 FUN_005930ac(undefined8 param_1,undefined8 param_2,undefined8 param_3,int param_4)

{
  (*(code *)**(undefined4 **)(PTR_PTR_0071be84 + 0x38))
            (param_1,param_4,param_4,param_4 + 0x18,*(undefined1 *)(param_4 + 0x6c),0);
  return 0x70;
}



//==== 00593110  ns=Global  size=0x64
// sig: undefined FUN_00593110(void)
// callers(0): 
// callees(1): 0058203c FUN_0058203c

undefined8 FUN_00593110(undefined8 param_1,undefined8 param_2,undefined8 param_3,int param_4)

{
  (*(code *)**(undefined4 **)(PTR_PTR_0071be84 + 0x38))
            (param_1,param_4,param_4,param_4 + 0x18,*(undefined1 *)(param_4 + 100),0);
  return 0x68;
}



//==== 00593174  ns=Global  size=0x64
// sig: undefined FUN_00593174(void)
// callers(0): 
// callees(1): 0058203c FUN_0058203c

undefined8 FUN_00593174(undefined8 param_1,undefined8 param_2,undefined8 param_3,int param_4)

{
  (*(code *)**(undefined4 **)(PTR_PTR_0071be84 + 0x38))
            (param_1,param_4,param_4,param_4 + 0x18,*(undefined1 *)(param_4 + 0x148),0);
  return 0x14c;
}



//==== 005931d8  ns=Global  size=0x64
// sig: undefined FUN_005931d8(void)
// callers(0): 
// callees(1): 0058203c FUN_0058203c

undefined8 FUN_005931d8(undefined8 param_1,undefined8 param_2,undefined8 param_3,int param_4)

{
  (*(code *)**(undefined4 **)(PTR_PTR_0071be84 + 0x38))
            (param_1,param_4,param_4,param_4 + 0x18,*(undefined1 *)(param_4 + 0x144),0);
  return 0x148;
}



//==== 0059323c  ns=Global  size=0x58
// sig: undefined FUN_0059323c(void)
// callers(0): 
// callees(1): 0058203c FUN_0058203c

undefined8 FUN_0059323c(undefined8 param_1,undefined8 param_2,undefined8 param_3,int param_4)

{
  (*(code *)**(undefined4 **)(PTR_PTR_0071be84 + 0x38))(param_1,param_4,param_4,param_4 + 0x18,1,0);
  return 0x148;
}



//==== 00593294  ns=Global  size=0x58
// sig: undefined FUN_00593294(void)
// callers(0): 
// callees(1): 0058203c FUN_0058203c

undefined8 FUN_00593294(undefined8 param_1,undefined8 param_2,undefined8 param_3,int param_4)

{
  (*(code *)**(undefined4 **)(PTR_PTR_0071be84 + 0x38))(param_1,param_4,param_4,param_4 + 0x18,1,0);
  return 0x1a0;
}



//==== 005932ec  ns=Global  size=0x58
// sig: undefined FUN_005932ec(void)
// callers(0): 
// callees(1): 0058203c FUN_0058203c

undefined8 FUN_005932ec(undefined8 param_1,undefined8 param_2,undefined8 param_3,int param_4)

{
  (*(code *)**(undefined4 **)(PTR_PTR_0071be84 + 0x38))(param_1,param_4,param_4,param_4 + 0x18,1,0);
  return 100;
}



//==== 00593344  ns=Global  size=0x64
// sig: undefined FUN_00593344(void)
// callers(0): 
// callees(1): 0058203c FUN_0058203c

undefined8 FUN_00593344(undefined8 param_1,undefined8 param_2,undefined8 param_3,int param_4)

{
  (*(code *)**(undefined4 **)(PTR_PTR_0071be84 + 0x38))
            (param_1,param_4,param_4,param_4 + 0x18,*(undefined1 *)(param_4 + 0x8c),0);
  return 0x90;
}



//==== 005933a8  ns=Global  size=0x64
// sig: undefined FUN_005933a8(void)
// callers(0): 
// callees(1): 0058203c FUN_0058203c

undefined8 FUN_005933a8(undefined8 param_1,undefined8 param_2,undefined8 param_3,int param_4)

{
  (*(code *)**(undefined4 **)(PTR_PTR_0071be84 + 0x38))
            (param_1,param_4,param_4,param_4 + 0x18,*(undefined1 *)(param_4 + 0x6c),0);
  return 0x70;
}



//==== 0059340c  ns=Global  size=0x8
// sig: undefined FUN_0059340c(void)
// callers(0): 
// callees(0): 

undefined8 FUN_0059340c(void)

{
  return 0x38;
}



//==== 00593414  ns=Global  size=0x8
// sig: undefined FUN_00593414(void)
// callers(0): 
// callees(0): 

undefined8 FUN_00593414(void)

{
  return 0x38;
}



//==== 0059341c  ns=Global  size=0x64
// sig: undefined FUN_0059341c(void)
// callers(0): 
// callees(1): 0058203c FUN_0058203c

undefined8 FUN_0059341c(undefined8 param_1,undefined8 param_2,undefined8 param_3,int param_4)

{
  (*(code *)**(undefined4 **)(PTR_PTR_0071be84 + 0x38))
            (param_1,param_4,param_4,param_4 + 0x18,*(undefined1 *)(param_4 + 0x44),0);
  return 0x48;
}



//==== 00593480  ns=Global  size=0x58
// sig: undefined FUN_00593480(void)
// callers(0): 
// callees(1): 0058203c FUN_0058203c

undefined8 FUN_00593480(undefined8 param_1,undefined8 param_2,undefined8 param_3,int param_4)

{
  (*(code *)**(undefined4 **)(PTR_PTR_0071be84 + 0x38))(param_1,param_4,param_4,param_4 + 0x18,1,0);
  return 0x1c;
}



//==== 005934d8  ns=Global  size=0x58
// sig: undefined FUN_005934d8(void)
// callers(0): 
// callees(1): 0058203c FUN_0058203c

undefined8 FUN_005934d8(undefined8 param_1,undefined8 param_2,undefined8 param_3,int param_4)

{
  (*(code *)**(undefined4 **)(PTR_PTR_0071be84 + 0x38))(param_1,param_4,param_4,param_4 + 0x18,1,0);
  return 0x1c;
}



//==== 00593530  ns=Global  size=0x58
// sig: undefined FUN_00593530(void)
// callers(0): 
// callees(1): 0058203c FUN_0058203c

undefined8 FUN_00593530(undefined8 param_1,undefined8 param_2,undefined8 param_3,int param_4)

{
  (*(code *)**(undefined4 **)(PTR_PTR_0071be84 + 0x38))(param_1,param_4,param_4,param_4 + 0x18,1,0);
  return 0x40;
}



//==== 00593588  ns=Global  size=0x8
// sig: undefined FUN_00593588(void)
// callers(0): 
// callees(0): 

undefined8 FUN_00593588(void)

{
  return 0x38;
}



//==== 00593590  ns=Global  size=0x58
// sig: undefined FUN_00593590(void)
// callers(0): 
// callees(1): 0058203c FUN_0058203c

undefined8 FUN_00593590(undefined8 param_1,undefined8 param_2,undefined8 param_3,int param_4)

{
  (*(code *)**(undefined4 **)(PTR_PTR_0071be84 + 0x38))(param_1,param_4,param_4,param_4 + 0x18,1,0);
  return 0x1c;
}



//==== 005935e8  ns=Global  size=0x58
// sig: undefined FUN_005935e8(void)
// callers(0): 
// callees(1): 0058203c FUN_0058203c

undefined8 FUN_005935e8(undefined8 param_1,undefined8 param_2,undefined8 param_3,int param_4)

{
  (*(code *)**(undefined4 **)(PTR_PTR_0071be84 + 0x38))(param_1,param_4,param_4,param_4 + 0x18,1,0);
  return 0x1c;
}



//==== 00593640  ns=Global  size=0x64
// sig: undefined FUN_00593640(void)
// callers(0): 
// callees(1): 0058203c FUN_0058203c

undefined8 FUN_00593640(undefined8 param_1,undefined8 param_2,undefined8 param_3,int param_4)

{
  (*(code *)**(undefined4 **)(PTR_PTR_0071be84 + 0x38))
            (param_1,param_4,param_4,param_4 + 0x18,*(undefined1 *)(param_4 + 0x44),0);
  return 0x48;
}



//==== 005936a4  ns=Global  size=0x58
// sig: undefined FUN_005936a4(void)
// callers(0): 
// callees(1): 0058203c FUN_0058203c

undefined8 FUN_005936a4(undefined8 param_1,undefined8 param_2,undefined8 param_3,int param_4)

{
  (*(code *)**(undefined4 **)(PTR_PTR_0071be84 + 0x38))(param_1,param_4,param_4,param_4 + 0x18,1,0);
  return 0x1c;
}



//==== 005936fc  ns=Global  size=0x58
// sig: undefined FUN_005936fc(void)
// callers(0): 
// callees(1): 0058203c FUN_0058203c

undefined8 FUN_005936fc(undefined8 param_1,undefined8 param_2,undefined8 param_3,int param_4)

{
  (*(code *)**(undefined4 **)(PTR_PTR_0071be84 + 0x38))(param_1,param_4,param_4,param_4 + 0x18,1,0);
  return 0x1c;
}



//==== 00593754  ns=Global  size=0x64
// sig: undefined FUN_00593754(void)
// callers(0): 
// callees(1): 0058203c FUN_0058203c

undefined8 FUN_00593754(undefined8 param_1,undefined8 param_2,undefined8 param_3,int param_4)

{
  (*(code *)**(undefined4 **)(PTR_PTR_0071be84 + 0x38))
            (param_1,param_4,param_4,param_4 + 0x18,*(undefined1 *)(param_4 + 0x11c),0);
  return 0x120;
}



//==== 005937b8  ns=Global  size=0x8
// sig: undefined FUN_005937b8(void)
// callers(0): 
// callees(0): 

undefined8 FUN_005937b8(void)

{
  return 0x1c;
}



//==== 005937c0  ns=Global  size=0x64
// sig: undefined FUN_005937c0(void)
// callers(0): 
// callees(1): 0058203c FUN_0058203c

undefined8 FUN_005937c0(undefined8 param_1,undefined8 param_2,undefined8 param_3,int param_4)

{
  (*(code *)**(undefined4 **)(PTR_PTR_0071be84 + 0x38))
            (param_1,param_4,param_4,param_4 + 0x18,*(undefined1 *)(param_4 + 0xfc0),0);
  return 0xfc4;
}



//==== 00593824  ns=Global  size=0x8
// sig: undefined FUN_00593824(void)
// callers(0): 
// callees(0): 

undefined8 FUN_00593824(void)

{
  return 0x1c;
}



//==== 0059382c  ns=Global  size=0x58
// sig: undefined FUN_0059382c(void)
// callers(0): 
// callees(1): 0058203c FUN_0058203c

undefined8 FUN_0059382c(undefined8 param_1,undefined8 param_2,undefined8 param_3,int param_4)

{
  (*(code *)**(undefined4 **)(PTR_PTR_0071be84 + 0x38))(param_1,param_4,param_4,param_4 + 0x18,1,0);
  return 0x20;
}



//==== 00593884  ns=Global  size=0x58
// sig: undefined FUN_00593884(void)
// callers(0): 
// callees(1): 0058203c FUN_0058203c

undefined8 FUN_00593884(undefined8 param_1,undefined8 param_2,undefined8 param_3,int param_4)

{
  (*(code *)**(undefined4 **)(PTR_PTR_0071be84 + 0x38))(param_1,param_4,param_4,param_4 + 0x18,1,0);
  return 0x1c;
}



//==== 005938dc  ns=Global  size=0x8
// sig: undefined FUN_005938dc(void)
// callers(0): 
// callees(0): 

undefined8 FUN_005938dc(void)

{
  return 0x2c;
}



//==== 005938e4  ns=Global  size=0x64
// sig: undefined FUN_005938e4(void)
// callers(0): 
// callees(1): 0058203c FUN_0058203c

undefined8 FUN_005938e4(undefined8 param_1,undefined8 param_2,undefined8 param_3,int param_4)

{
  (*(code *)**(undefined4 **)(PTR_PTR_0071be84 + 0x38))
            (param_1,param_4,param_4,param_4 + 0x18,*(undefined1 *)(param_4 + 0x30),0);
  return 0x34;
}



//==== 00593948  ns=Global  size=0x58
// sig: undefined FUN_00593948(void)
// callers(0): 
// callees(1): 0058203c FUN_0058203c

undefined8 FUN_00593948(undefined8 param_1,undefined8 param_2,undefined8 param_3,int param_4)

{
  (*(code *)**(undefined4 **)(PTR_PTR_0071be84 + 0x38))(param_1,param_4,param_4,param_4 + 0x18,1,0);
  return 0x20;
}



//==== 005939a0  ns=Global  size=0x58
// sig: undefined FUN_005939a0(void)
// callers(0): 
// callees(1): 0058203c FUN_0058203c

undefined8 FUN_005939a0(undefined8 param_1,undefined8 param_2,undefined8 param_3,int param_4)

{
  (*(code *)**(undefined4 **)(PTR_PTR_0071be84 + 0x38))(param_1,param_4,param_4,param_4 + 0x18,1,0);
  return 0x1c;
}



//==== 005939f8  ns=Global  size=0x58
// sig: undefined FUN_005939f8(void)
// callers(0): 
// callees(1): 0058203c FUN_0058203c

undefined8 FUN_005939f8(undefined8 param_1,undefined8 param_2,undefined8 param_3,int param_4)

{
  (*(code *)**(undefined4 **)(PTR_PTR_0071be84 + 0x38))(param_1,param_4,param_4,param_4 + 0x18,1,0);
  return 0x168;
}



//==== 00593a50  ns=Global  size=0x58
// sig: undefined FUN_00593a50(void)
// callers(0): 
// callees(1): 0058203c FUN_0058203c

undefined8 FUN_00593a50(undefined8 param_1,undefined8 param_2,undefined8 param_3,int param_4)

{
  (*(code *)**(undefined4 **)(PTR_PTR_0071be84 + 0x38))(param_1,param_4,param_4,param_4 + 0x18,1,0);
  return 0x148;
}



//==== 00593aa8  ns=Global  size=0x58
// sig: undefined FUN_00593aa8(void)
// callers(0): 
// callees(1): 0058203c FUN_0058203c

undefined8 FUN_00593aa8(undefined8 param_1,undefined8 param_2,undefined8 param_3,int param_4)

{
  (*(code *)**(undefined4 **)(PTR_PTR_0071be84 + 0x38))(param_1,param_4,param_4,param_4 + 0x18,1,0);
  return 0x1c;
}



//==== 00593b00  ns=Global  size=0x58
// sig: undefined FUN_00593b00(void)
// callers(0): 
// callees(1): 0058203c FUN_0058203c

undefined8 FUN_00593b00(undefined8 param_1,undefined8 param_2,undefined8 param_3,int param_4)

{
  (*(code *)**(undefined4 **)(PTR_PTR_0071be84 + 0x38))(param_1,param_4,param_4,param_4 + 0x18,1,0);
  return 0x1c;
}



//==== 00593b58  ns=Global  size=0x58
// sig: undefined FUN_00593b58(void)
// callers(0): 
// callees(1): 0058203c FUN_0058203c

undefined8 FUN_00593b58(undefined8 param_1,undefined8 param_2,undefined8 param_3,int param_4)

{
  (*(code *)**(undefined4 **)(PTR_PTR_0071be84 + 0x38))(param_1,param_4,param_4,param_4 + 0x18,1,0);
  return 0x1c;
}



//==== 00593bb0  ns=Global  size=0x58
// sig: undefined FUN_00593bb0(void)
// callers(0): 
// callees(1): 0058203c FUN_0058203c

undefined8 FUN_00593bb0(undefined8 param_1,undefined8 param_2,undefined8 param_3,int param_4)

{
  (*(code *)**(undefined4 **)(PTR_PTR_0071be84 + 0x38))(param_1,param_4,param_4,param_4 + 0x18,1,0);
  return 0x1c;
}



//==== 00593c08  ns=Global  size=0x64
// sig: undefined FUN_00593c08(void)
// callers(0): 
// callees(1): 0058203c FUN_0058203c

undefined8 FUN_00593c08(undefined8 param_1,undefined8 param_2,undefined8 param_3,int param_4)

{
  (*(code *)**(undefined4 **)(PTR_PTR_0071be84 + 0x38))
            (param_1,param_4,param_4,param_4 + 0x18,*(undefined1 *)(param_4 + 0x84c),0);
  return 0x850;
}



//==== 00593c6c  ns=Global  size=0x64
// sig: undefined FUN_00593c6c(void)
// callers(0): 
// callees(1): 0058203c FUN_0058203c

undefined8 FUN_00593c6c(undefined8 param_1,undefined8 param_2,undefined8 param_3,int param_4)

{
  (*(code *)**(undefined4 **)(PTR_PTR_0071be84 + 0x38))
            (param_1,param_4,param_4,param_4 + 0x18,*(undefined1 *)(param_4 + 0x848),0);
  return 0x84c;
}



//==== 00593cd0  ns=Global  size=0x58
// sig: undefined FUN_00593cd0(void)
// callers(0): 
// callees(1): 0058203c FUN_0058203c

undefined8 FUN_00593cd0(undefined8 param_1,undefined8 param_2,undefined8 param_3,int param_4)

{
  (*(code *)**(undefined4 **)(PTR_PTR_0071be84 + 0x38))(param_1,param_4,param_4,param_4 + 0x18,1,0);
  return 0x1c;
}



//==== 00593d28  ns=Global  size=0x58
// sig: undefined FUN_00593d28(void)
// callers(0): 
// callees(1): 0058203c FUN_0058203c

undefined8 FUN_00593d28(undefined8 param_1,undefined8 param_2,undefined8 param_3,int param_4)

{
  (*(code *)**(undefined4 **)(PTR_PTR_0071be84 + 0x38))(param_1,param_4,param_4,param_4 + 0x18,1,0);
  return 0x1c;
}



//==== 00593d80  ns=Global  size=0x58
// sig: undefined FUN_00593d80(void)
// callers(0): 
// callees(1): 0058203c FUN_0058203c

undefined8 FUN_00593d80(undefined8 param_1,undefined8 param_2,undefined8 param_3,int param_4)

{
  (*(code *)**(undefined4 **)(PTR_PTR_0071be84 + 0x38))(param_1,param_4,param_4,param_4 + 0x18,1,0);
  return 0x1c;
}



//==== 00593dd8  ns=Global  size=0x64
// sig: undefined FUN_00593dd8(void)
// callers(0): 
// callees(1): 0058203c FUN_0058203c

undefined8 FUN_00593dd8(undefined8 param_1,undefined8 param_2,undefined8 param_3,int param_4)

{
  (*(code *)**(undefined4 **)(PTR_PTR_0071be84 + 0x38))
            (param_1,param_4,param_4,param_4 + 0x18,*(undefined1 *)(param_4 + 0x4d4),0);
  return 0x4d8;
}



//==== 00593e3c  ns=Global  size=0x58
// sig: undefined FUN_00593e3c(void)
// callers(0): 
// callees(1): 0058203c FUN_0058203c

undefined8 FUN_00593e3c(undefined8 param_1,undefined8 param_2,undefined8 param_3,int param_4)

{
  (*(code *)**(undefined4 **)(PTR_PTR_0071be84 + 0x38))(param_1,param_4,param_4,param_4 + 0x18,1,0);
  return 0x1c;
}



//==== 00593e94  ns=Global  size=0x58
// sig: undefined FUN_00593e94(void)
// callers(0): 
// callees(1): 0058203c FUN_0058203c

undefined8 FUN_00593e94(undefined8 param_1,undefined8 param_2,undefined8 param_3,int param_4)

{
  (*(code *)**(undefined4 **)(PTR_PTR_0071be84 + 0x38))(param_1,param_4,param_4,param_4 + 0x18,1,0);
  return 0x1c;
}



//==== 00593eec  ns=Global  size=0x58
// sig: undefined FUN_00593eec(void)
// callers(0): 
// callees(1): 0058203c FUN_0058203c

undefined8 FUN_00593eec(undefined8 param_1,undefined8 param_2,undefined8 param_3,int param_4)

{
  (*(code *)**(undefined4 **)(PTR_PTR_0071be84 + 0x38))(param_1,param_4,param_4,param_4 + 0x18,1,0);
  return 0x1c;
}



//==== 00593f44  ns=Global  size=0x58
// sig: undefined FUN_00593f44(void)
// callers(0): 
// callees(1): 0058203c FUN_0058203c

undefined8 FUN_00593f44(undefined8 param_1,undefined8 param_2,undefined8 param_3,int param_4)

{
  (*(code *)**(undefined4 **)(PTR_PTR_0071be84 + 0x38))(param_1,param_4,param_4,param_4 + 0x18,1,0);
  return 0x1c;
}



//==== 00593f9c  ns=Global  size=0x58
// sig: undefined FUN_00593f9c(void)
// callers(0): 
// callees(1): 0058203c FUN_0058203c

undefined8 FUN_00593f9c(undefined8 param_1,undefined8 param_2,undefined8 param_3,int param_4)

{
  (*(code *)**(undefined4 **)(PTR_PTR_0071be84 + 0x38))(param_1,param_4,param_4,param_4 + 0x18,1,0);
  return 0x1c;
}



//==== 00593ff4  ns=Global  size=0x64
// sig: undefined FUN_00593ff4(void)
// callers(0): 
// callees(1): 0058203c FUN_0058203c

undefined8 FUN_00593ff4(undefined8 param_1,undefined8 param_2,undefined8 param_3,int param_4)

{
  (*(code *)**(undefined4 **)(PTR_PTR_0071be84 + 0x38))
            (param_1,param_4,param_4,param_4 + 0x18,*(undefined1 *)(param_4 + 0x16c),0);
  return 0x170;
}



//==== 00594058  ns=Global  size=0x64
// sig: undefined FUN_00594058(void)
// callers(0): 
// callees(1): 0058203c FUN_0058203c

undefined8 FUN_00594058(undefined8 param_1,undefined8 param_2,undefined8 param_3,int param_4)

{
  (*(code *)**(undefined4 **)(PTR_PTR_0071be84 + 0x38))
            (param_1,param_4,param_4,param_4 + 0x18,*(undefined1 *)(param_4 + 0x98c),0);
  return 0x994;
}



//==== 005940bc  ns=Global  size=0x58
// sig: undefined FUN_005940bc(void)
// callers(0): 
// callees(1): 0058203c FUN_0058203c

undefined8 FUN_005940bc(undefined8 param_1,undefined8 param_2,undefined8 param_3,int param_4)

{
  (*(code *)**(undefined4 **)(PTR_PTR_0071be84 + 0x38))(param_1,param_4,param_4,param_4 + 0x18,1,0);
  return 0x1c;
}



//==== 00594114  ns=Global  size=0x64
// sig: undefined FUN_00594114(void)
// callers(0): 
// callees(1): 0058203c FUN_0058203c

undefined8 FUN_00594114(undefined8 param_1,undefined8 param_2,undefined8 param_3,int param_4)

{
  (*(code *)**(undefined4 **)(PTR_PTR_0071be84 + 0x38))
            (param_1,param_4,param_4,param_4 + 0x18,*(undefined1 *)(param_4 + 0x24),0);
  return 0x28;
}



//==== 00594178  ns=Global  size=0x58
// sig: undefined FUN_00594178(void)
// callers(0): 
// callees(1): 0058203c FUN_0058203c

undefined8 FUN_00594178(undefined8 param_1,undefined8 param_2,undefined8 param_3,int param_4)

{
  (*(code *)**(undefined4 **)(PTR_PTR_0071be84 + 0x38))(param_1,param_4,param_4,param_4 + 0x18,1,0);
  return 0x1c;
}



//==== 005941d0  ns=Global  size=0x58
// sig: undefined FUN_005941d0(void)
// callers(0): 
// callees(1): 0058203c FUN_0058203c

undefined8 FUN_005941d0(undefined8 param_1,undefined8 param_2,undefined8 param_3,int param_4)

{
  (*(code *)**(undefined4 **)(PTR_PTR_0071be84 + 0x38))(param_1,param_4,param_4,param_4 + 0x18,1,0);
  return 0x1c;
}



//==== 00594228  ns=Global  size=0x58
// sig: undefined FUN_00594228(void)
// callers(0): 
// callees(1): 0058203c FUN_0058203c

undefined8 FUN_00594228(undefined8 param_1,undefined8 param_2,undefined8 param_3,int param_4)

{
  (*(code *)**(undefined4 **)(PTR_PTR_0071be84 + 0x38))(param_1,param_4,param_4,param_4 + 0x2c,1,0);
  return 0x30;
}



//==== 00594280  ns=Global  size=0x54
// sig: undefined FUN_00594280(void)
// callers(0): 
// callees(1): 0058203c FUN_0058203c

undefined8 FUN_00594280(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  (*(code *)**(undefined4 **)(PTR_PTR_0071be84 + 0x38))(param_1,param_4,param_4,0,1,0);
  return 0x4d;
}



//==== 005942d4  ns=Global  size=0x58
// sig: undefined FUN_005942d4(void)
// callers(0): 
// callees(1): 0058203c FUN_0058203c

undefined8 FUN_005942d4(undefined8 param_1,undefined8 param_2,undefined8 param_3,int param_4)

{
  (*(code *)**(undefined4 **)(PTR_PTR_0071be84 + 0x38))(param_1,param_4,param_4,param_4 + 0x18,1,0);
  return 0x28;
}



//==== 0059432c  ns=Global  size=0x58
// sig: undefined FUN_0059432c(void)
// callers(0): 
// callees(1): 0058203c FUN_0058203c

undefined8 FUN_0059432c(undefined8 param_1,undefined8 param_2,undefined8 param_3,int param_4)

{
  (*(code *)**(undefined4 **)(PTR_PTR_0071be84 + 0x38))(param_1,param_4,param_4,param_4 + 0x18,1,0);
  return 0x1c;
}



//==== 00594384  ns=Global  size=0x58
// sig: undefined FUN_00594384(void)
// callers(0): 
// callees(1): 0058203c FUN_0058203c

undefined8 FUN_00594384(undefined8 param_1,undefined8 param_2,undefined8 param_3,int param_4)

{
  (*(code *)**(undefined4 **)(PTR_PTR_0071be84 + 0x38))(param_1,param_4,param_4,param_4 + 0x18,1,0);
  return 0x1c;
}



//==== 005943dc  ns=Global  size=0x58
// sig: undefined FUN_005943dc(void)
// callers(0): 
// callees(1): 0058203c FUN_0058203c

undefined8 FUN_005943dc(undefined8 param_1,undefined8 param_2,undefined8 param_3,int param_4)

{
  (*(code *)**(undefined4 **)(PTR_PTR_0071be84 + 0x38))(param_1,param_4,param_4,param_4 + 0x1c,1,0);
  return 0x20;
}



//==== 00594434  ns=Global  size=0x64
// sig: undefined FUN_00594434(void)
// callers(0): 
// callees(1): 0058203c FUN_0058203c

undefined8 FUN_00594434(undefined8 param_1,undefined8 param_2,undefined8 param_3,int param_4)

{
  (*(code *)**(undefined4 **)(PTR_PTR_0071be84 + 0x38))
            (param_1,param_4,param_4,param_4 + 0x5c,*(undefined1 *)(param_4 + 0x60),0);
  return 100;
}



//==== 00594498  ns=Global  size=0x64
// sig: undefined FUN_00594498(void)
// callers(0): 
// callees(1): 0058203c FUN_0058203c

undefined8 FUN_00594498(undefined8 param_1,undefined8 param_2,undefined8 param_3,int param_4)

{
  (*(code *)**(undefined4 **)(PTR_PTR_0071be84 + 0x38))
            (param_1,param_4,param_4,param_4 + 0x3c,*(undefined1 *)(param_4 + 0x40),0);
  return 0x44;
}



//==== 005944fc  ns=Global  size=0x58
// sig: undefined FUN_005944fc(void)
// callers(0): 
// callees(1): 0058203c FUN_0058203c

undefined8 FUN_005944fc(undefined8 param_1,undefined8 param_2,undefined8 param_3,int param_4)

{
  (*(code *)**(undefined4 **)(PTR_PTR_0071be84 + 0x38))(param_1,param_4,param_4,param_4 + 0x18,1,0);
  return 0x2c;
}



//==== 00594554  ns=Global  size=0x58
// sig: undefined FUN_00594554(void)
// callers(0): 
// callees(1): 0058203c FUN_0058203c

undefined8 FUN_00594554(undefined8 param_1,undefined8 param_2,undefined8 param_3,int param_4)

{
  (*(code *)**(undefined4 **)(PTR_PTR_0071be84 + 0x38))(param_1,param_4,param_4,param_4 + 0x58,1,0);
  return 0x5c;
}



//==== 005945ac  ns=Global  size=0x58
// sig: undefined FUN_005945ac(void)
// callers(0): 
// callees(1): 0058203c FUN_0058203c

undefined8 FUN_005945ac(undefined8 param_1,undefined8 param_2,undefined8 param_3,int param_4)

{
  (*(code *)**(undefined4 **)(PTR_PTR_0071be84 + 0x38))(param_1,param_4,param_4,param_4 + 0x20,1,0);
  return 0x24;
}



//==== 00594604  ns=Global  size=0x58
// sig: undefined FUN_00594604(void)
// callers(0): 
// callees(1): 0058203c FUN_0058203c

undefined8 FUN_00594604(undefined8 param_1,undefined8 param_2,undefined8 param_3,int param_4)

{
  (*(code *)**(undefined4 **)(PTR_PTR_0071be84 + 0x38))(param_1,param_4,param_4,param_4 + 0x1c,1,0);
  return 0x20;
}



//==== 0059465c  ns=Global  size=0x58
// sig: undefined FUN_0059465c(void)
// callers(0): 
// callees(1): 0058203c FUN_0058203c

undefined8 FUN_0059465c(undefined8 param_1,undefined8 param_2,undefined8 param_3,int param_4)

{
  (*(code *)**(undefined4 **)(PTR_PTR_0071be84 + 0x38))(param_1,param_4,param_4,param_4 + 0x1c,1,0);
  return 0x20;
}



//==== 005946b4  ns=Global  size=0x64
// sig: undefined FUN_005946b4(void)
// callers(0): 
// callees(1): 0058203c FUN_0058203c

undefined8 FUN_005946b4(undefined8 param_1,undefined8 param_2,undefined8 param_3,int param_4)

{
  (*(code *)**(undefined4 **)(PTR_PTR_0071be84 + 0x38))
            (param_1,param_4,param_4,param_4 + 0x18,*(undefined1 *)(param_4 + 0x40),0);
  return 0x44;
}



//==== 00594718  ns=Global  size=0x58
// sig: undefined FUN_00594718(void)
// callers(0): 
// callees(1): 0058203c FUN_0058203c

undefined8 FUN_00594718(undefined8 param_1,undefined8 param_2,undefined8 param_3,int param_4)

{
  (*(code *)**(undefined4 **)(PTR_PTR_0071be84 + 0x38))(param_1,param_4,param_4,param_4 + 0x20,1,0);
  return 0x24;
}



//==== 00594770  ns=Global  size=0x58
// sig: undefined FUN_00594770(void)
// callers(0): 
// callees(1): 0058203c FUN_0058203c

undefined8 FUN_00594770(undefined8 param_1,undefined8 param_2,undefined8 param_3,int param_4)

{
  (*(code *)**(undefined4 **)(PTR_PTR_0071be84 + 0x38))(param_1,param_4,param_4,param_4 + 0x18,1,0);
  return 0x1c;
}



//==== 005947c8  ns=Global  size=0x58
// sig: undefined FUN_005947c8(void)
// callers(0): 
// callees(1): 0058203c FUN_0058203c

undefined8 FUN_005947c8(undefined8 param_1,undefined8 param_2,undefined8 param_3,int param_4)

{
  (*(code *)**(undefined4 **)(PTR_PTR_0071be84 + 0x38))(param_1,param_4,param_4,param_4 + 0x18,1,0);
  return 0x1c;
}



//==== 00594820  ns=Global  size=0x64
// sig: undefined FUN_00594820(void)
// callers(0): 
// callees(1): 0058203c FUN_0058203c

undefined8 FUN_00594820(undefined8 param_1,undefined8 param_2,undefined8 param_3,int param_4)

{
  (*(code *)**(undefined4 **)(PTR_PTR_0071be84 + 0x38))
            (param_1,param_4,param_4,param_4 + 0x18,*(undefined1 *)(param_4 + 0xcc),0);
  return 0xd0;
}



//==== 00594884  ns=Global  size=0x64
// sig: undefined FUN_00594884(void)
// callers(0): 
// callees(1): 0058203c FUN_0058203c

undefined8 FUN_00594884(undefined8 param_1,undefined8 param_2,undefined8 param_3,int param_4)

{
  (*(code *)**(undefined4 **)(PTR_PTR_0071be84 + 0x38))
            (param_1,param_4,param_4,param_4 + 0x18,*(undefined1 *)(param_4 + 0xcc),0);
  return 0xd0;
}



//==== 005948e8  ns=Global  size=0x64
// sig: undefined FUN_005948e8(void)
// callers(0): 
// callees(1): 0058203c FUN_0058203c

undefined8 FUN_005948e8(undefined8 param_1,undefined8 param_2,undefined8 param_3,int param_4)

{
  (*(code *)**(undefined4 **)(PTR_PTR_0071be84 + 0x38))
            (param_1,param_4,param_4,param_4 + 0x18,*(undefined1 *)(param_4 + 0x1cc),0);
  return 0x1d0;
}



//==== 0059494c  ns=Global  size=0x64
// sig: undefined FUN_0059494c(void)
// callers(0): 
// callees(1): 0058203c FUN_0058203c

undefined8 FUN_0059494c(undefined8 param_1,undefined8 param_2,undefined8 param_3,int param_4)

{
  (*(code *)**(undefined4 **)(PTR_PTR_0071be84 + 0x38))
            (param_1,param_4,param_4,param_4 + 0x18,*(undefined1 *)(param_4 + 0x1a0),0);
  return 0x1a4;
}



//==== 005949b0  ns=Global  size=0x64
// sig: undefined FUN_005949b0(void)
// callers(0): 
// callees(1): 0058203c FUN_0058203c

undefined8 FUN_005949b0(undefined8 param_1,undefined8 param_2,undefined8 param_3,int param_4)

{
  (*(code *)**(undefined4 **)(PTR_PTR_0071be84 + 0x38))
            (param_1,param_4,param_4,param_4 + 0x18,*(undefined1 *)(param_4 + 0x1a0),0);
  return 0x1a4;
}



//==== 00594a14  ns=Global  size=0x64
// sig: undefined FUN_00594a14(void)
// callers(0): 
// callees(1): 0058203c FUN_0058203c

undefined8 FUN_00594a14(undefined8 param_1,undefined8 param_2,undefined8 param_3,int param_4)

{
  (*(code *)**(undefined4 **)(PTR_PTR_0071be84 + 0x38))
            (param_1,param_4,param_4,param_4 + 0x18,*(undefined1 *)(param_4 + 0x80),0);
  return 0x84;
}



//==== 00594a78  ns=Global  size=0x60
// sig: undefined FUN_00594a78(void)
// callers(0): 
// callees(1): 0058203c FUN_0058203c

undefined8 FUN_00594a78(undefined8 param_1,undefined8 param_2,undefined8 param_3,int param_4)

{
  (*(code *)**(undefined4 **)(PTR_PTR_0071be84 + 0x38))
            (param_1,param_4,param_4 + 0xb0,param_4 + 0xac,1,0);
  return 200;
}



//==== 00594ad8  ns=Global  size=0x8
// sig: undefined FUN_00594ad8(void)
// callers(0): 
// callees(0): 

undefined8 FUN_00594ad8(void)

{
  return 0x1fc;
}



//==== 00594ae0  ns=Global  size=0x60
// sig: undefined FUN_00594ae0(void)
// callers(0): 
// callees(1): 0058203c FUN_0058203c

undefined8 FUN_00594ae0(undefined8 param_1,undefined8 param_2,undefined8 param_3,int param_4)

{
  (*(code *)**(undefined4 **)(PTR_PTR_0071be84 + 0x38))
            (param_1,param_4,param_4 + 0xb0,param_4 + 0xac,1,0);
  return 200;
}



//==== 00594b40  ns=Global  size=0x78
// sig: undefined FUN_00594b40(void)
// callers(0): 
// callees(1): 0058203c FUN_0058203c

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



//==== 00594bb8  ns=Global  size=0x78
// sig: undefined FUN_00594bb8(void)
// callers(0): 
// callees(1): 0058203c FUN_0058203c

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



//==== 00594c30  ns=Global  size=0x58
// sig: undefined FUN_00594c30(void)
// callers(0): 
// callees(1): 0058203c FUN_0058203c

undefined8 FUN_00594c30(undefined8 param_1,undefined8 param_2,undefined8 param_3,int param_4)

{
  (*(code *)**(undefined4 **)(PTR_PTR_0071be84 + 0x38))(param_1,param_4,param_4 + 4,param_4,1,0);
  return 0x1c;
}



//==== 00594c88  ns=Global  size=0x68
// sig: undefined FUN_00594c88(void)
// callers(0): 
// callees(1): 0058203c FUN_0058203c

undefined8 FUN_00594c88(undefined8 param_1,undefined8 param_2,undefined8 param_3,int param_4)

{
  (*(code *)**(undefined4 **)(PTR_PTR_0071be84 + 0x38))
            (param_1,param_4,param_4 + 0xb0,param_4 + 0xac,*(undefined1 *)(param_4 + 0xc5),0);
  return 200;
}



//==== 00594cf0  ns=Global  size=0x68
// sig: undefined FUN_00594cf0(void)
// callers(0): 
// callees(1): 0058203c FUN_0058203c

undefined8 FUN_00594cf0(undefined8 param_1,undefined8 param_2,undefined8 param_3,int param_4)

{
  (*(code *)**(undefined4 **)(PTR_PTR_0071be84 + 0x38))
            (param_1,param_4,param_4 + 0x1b0,param_4 + 0x1ac,*(undefined1 *)(param_4 + 0x1c5),0);
  return 0x1c8;
}



//==== 00594d58  ns=Global  size=0x60
// sig: undefined FUN_00594d58(void)
// callers(0): 
// callees(1): 0058203c FUN_0058203c

undefined8 FUN_00594d58(undefined8 param_1,undefined8 param_2,undefined8 param_3,int param_4)

{
  (*(code *)**(undefined4 **)(PTR_PTR_0071be84 + 0x38))
            (param_1,param_4,param_4 + 0xb0,param_4 + 0xac,1,0);
  return 200;
}



//==== 00594db8  ns=Global  size=0x60
// sig: undefined FUN_00594db8(void)
// callers(0): 
// callees(1): 0058203c FUN_0058203c

undefined8 FUN_00594db8(undefined8 param_1,undefined8 param_2,undefined8 param_3,int param_4)

{
  (*(code *)**(undefined4 **)(PTR_PTR_0071be84 + 0x38))
            (param_1,param_4,param_4 + 0x1c4,param_4 + 0x1c0,1,0);
  return 0x1dc;
}



//==== 00594e18  ns=Global  size=0x60
// sig: undefined FUN_00594e18(void)
// callers(0): 
// callees(1): 0058203c FUN_0058203c

undefined8 FUN_00594e18(undefined8 param_1,undefined8 param_2,undefined8 param_3,int param_4)

{
  (*(code *)**(undefined4 **)(PTR_PTR_0071be84 + 0x38))
            (param_1,param_4,param_4 + 0xb0,param_4 + 0xac,1,0);
  return 200;
}



//==== 00594e78  ns=Global  size=0x60
// sig: undefined FUN_00594e78(void)
// callers(0): 
// callees(1): 0058203c FUN_0058203c

undefined8 FUN_00594e78(undefined8 param_1,undefined8 param_2,undefined8 param_3,int param_4)

{
  (*(code *)**(undefined4 **)(PTR_PTR_0071be84 + 0x38))
            (param_1,param_4,param_4 + 0xb0,param_4 + 0xac,1,0);
  return 200;
}



//==== 00594ed8  ns=Global  size=0x68
// sig: undefined FUN_00594ed8(void)
// callers(0): 
// callees(1): 0058203c FUN_0058203c

undefined8 FUN_00594ed8(undefined8 param_1,undefined8 param_2,undefined8 param_3,int param_4)

{
  (*(code *)**(undefined4 **)(PTR_PTR_0071be84 + 0x38))
            (param_1,param_4,param_4 + 0x1e8,param_4 + 0x1e4,*(undefined1 *)(param_4 + 0x1fd),0);
  return 0x200;
}



//==== 00594f40  ns=Global  size=0x58
// sig: undefined FUN_00594f40(void)
// callers(0): 
// callees(1): 0058203c FUN_0058203c

undefined8 FUN_00594f40(undefined8 param_1,undefined8 param_2,undefined8 param_3,int param_4)

{
  (*(code *)**(undefined4 **)(PTR_PTR_0071be84 + 0x38))(param_1,param_4,param_4 + 4,param_4,1,0);
  return 0x1c;
}



//==== 00594f98  ns=Global  size=0x64
// sig: undefined FUN_00594f98(void)
// callers(0): 
// callees(1): 0058203c FUN_0058203c

undefined8 FUN_00594f98(undefined8 param_1,undefined8 param_2,undefined8 param_3,int param_4)

{
  (*(code *)**(undefined4 **)(PTR_PTR_0071be84 + 0x38))
            (param_1,param_4,param_4,param_4 + 0x18,*(undefined1 *)(param_4 + 0x11c),0);
  return 0x120;
}



//==== 00594ffc  ns=Global  size=0x8
// sig: undefined FUN_00594ffc(void)
// callers(0): 
// callees(0): 

undefined8 FUN_00594ffc(void)

{
  return 0x230;
}



//==== 00595004  ns=Global  size=0x8
// sig: undefined FUN_00595004(void)
// callers(0): 
// callees(0): 

undefined8 FUN_00595004(void)

{
  return 0x3b8;
}



//==== 0059500c  ns=Global  size=0x54
// sig: undefined FUN_0059500c(void)
// callers(0): 
// callees(1): 0058203c FUN_0058203c

undefined8 FUN_0059500c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  (*(code *)**(undefined4 **)(PTR_PTR_0071be84 + 0x38))(param_1,param_4,param_4,0,1,0);
  return 0x18;
}



//==== 00595060  ns=Global  size=0x58
// sig: undefined FUN_00595060(void)
// callers(0): 
// callees(1): 0058203c FUN_0058203c

undefined8 FUN_00595060(undefined8 param_1,undefined8 param_2,undefined8 param_3,int param_4)

{
  (*(code *)**(undefined4 **)(PTR_PTR_0071be84 + 0x38))(param_1,param_4,param_4,param_4 + 0x18,1,0);
  return 0x20;
}



//==== 005950b8  ns=Global  size=0x58
// sig: undefined FUN_005950b8(void)
// callers(0): 
// callees(1): 0058203c FUN_0058203c

undefined8 FUN_005950b8(undefined8 param_1,undefined8 param_2,undefined8 param_3,int param_4)

{
  (*(code *)**(undefined4 **)(PTR_PTR_0071be84 + 0x38))(param_1,param_4,param_4,param_4 + 0x18,1,0);
  return 0x20;
}



//==== 00595110  ns=Global  size=0x58
// sig: undefined FUN_00595110(void)
// callers(0): 
// callees(1): 0058203c FUN_0058203c

undefined8 FUN_00595110(undefined8 param_1,undefined8 param_2,undefined8 param_3,int param_4)

{
  (*(code *)**(undefined4 **)(PTR_PTR_0071be84 + 0x38))(param_1,param_4,param_4,param_4 + 0x18,1,0);
  return 0x1c;
}



//==== 00595168  ns=Global  size=0x58
// sig: undefined FUN_00595168(void)
// callers(0): 
// callees(1): 0058203c FUN_0058203c

undefined8 FUN_00595168(undefined8 param_1,undefined8 param_2,undefined8 param_3,int param_4)

{
  (*(code *)**(undefined4 **)(PTR_PTR_0071be84 + 0x38))(param_1,param_4,param_4,param_4 + 0x18,1,0);
  return 0x1c;
}



//==== 005951c0  ns=Global  size=0x64
// sig: undefined FUN_005951c0(void)
// callers(0): 
// callees(1): 0058203c FUN_0058203c

undefined8 FUN_005951c0(undefined8 param_1,undefined8 param_2,undefined8 param_3,int param_4)

{
  (*(code *)**(undefined4 **)(PTR_PTR_0071be84 + 0x38))
            (param_1,param_4,param_4,param_4 + 0x18,*(undefined1 *)(param_4 + 0x44),0);
  return 0x48;
}



//==== 00595224  ns=Global  size=0x78
// sig: undefined FUN_00595224(void)
// callers(0): 
// callees(1): 0058203c FUN_0058203c

undefined8 FUN_00595224(undefined4 param_1,undefined8 param_2,undefined8 param_3,int param_4)

{
  if (*(int *)(param_4 + 0x18) == -0x3b6) {
    *(undefined4 *)PTR_DAT_0071be88 = 0;
  }
  (*(code *)**(undefined4 **)(PTR_PTR_0071be84 + 0x38))(param_1,param_4,param_4,param_4 + 0x18,1,0);
  return 0x1c;
}



//==== 0059529c  ns=Global  size=0x58
// sig: undefined FUN_0059529c(void)
// callers(0): 
// callees(1): 0058203c FUN_0058203c

undefined8 FUN_0059529c(undefined8 param_1,undefined8 param_2,undefined8 param_3,int param_4)

{
  (*(code *)**(undefined4 **)(PTR_PTR_0071be84 + 0x38))(param_1,param_4,param_4,param_4 + 0x18,1,0);
  return 0x1c;
}



//==== 005952f4  ns=Global  size=0x58
// sig: undefined FUN_005952f4(void)
// callers(0): 
// callees(1): 0058203c FUN_0058203c

undefined8 FUN_005952f4(undefined8 param_1,undefined8 param_2,undefined8 param_3,int param_4)

{
  (*(code *)**(undefined4 **)(PTR_PTR_0071be84 + 0x38))(param_1,param_4,param_4,param_4 + 0x18,1,0);
  return 0x24;
}



//==== 0059534c  ns=Global  size=0x58
// sig: undefined FUN_0059534c(void)
// callers(0): 
// callees(1): 0058203c FUN_0058203c

undefined8 FUN_0059534c(undefined8 param_1,undefined8 param_2,undefined8 param_3,int param_4)

{
  (*(code *)**(undefined4 **)(PTR_PTR_0071be84 + 0x38))(param_1,param_4,param_4,param_4 + 0x18,1,0);
  return 0x1c;
}



//==== 005953a4  ns=Global  size=0x58
// sig: undefined FUN_005953a4(void)
// callers(0): 
// callees(1): 0058203c FUN_0058203c

undefined8 FUN_005953a4(undefined8 param_1,undefined8 param_2,undefined8 param_3,int param_4)

{
  (*(code *)**(undefined4 **)(PTR_PTR_0071be84 + 0x38))(param_1,param_4,param_4,param_4 + 0x18,1,0);
  return 0x1c;
}



//==== 005953fc  ns=Global  size=0x58
// sig: undefined FUN_005953fc(void)
// callers(0): 
// callees(1): 0058203c FUN_0058203c

undefined8 FUN_005953fc(undefined8 param_1,undefined8 param_2,undefined8 param_3,int param_4)

{
  (*(code *)**(undefined4 **)(PTR_PTR_0071be84 + 0x38))(param_1,param_4,param_4,param_4 + 0x18,1,0);
  return 0x1c;
}



//==== 00595454  ns=Global  size=0x58
// sig: undefined FUN_00595454(void)
// callers(0): 
// callees(1): 0058203c FUN_0058203c

undefined8 FUN_00595454(undefined8 param_1,undefined8 param_2,undefined8 param_3,int param_4)

{
  (*(code *)**(undefined4 **)(PTR_PTR_0071be84 + 0x38))(param_1,param_4,param_4,param_4 + 0x1c,1,0);
  return 0x20;
}



//==== 005954ac  ns=Global  size=0x58
// sig: undefined FUN_005954ac(void)
// callers(0): 
// callees(1): 0058203c FUN_0058203c

undefined8 FUN_005954ac(undefined8 param_1,undefined8 param_2,undefined8 param_3,int param_4)

{
  (*(code *)**(undefined4 **)(PTR_PTR_0071be84 + 0x38))(param_1,param_4,param_4,param_4 + 0x18,1,0);
  return 0x20;
}



//==== 00595504  ns=Global  size=0x58
// sig: undefined FUN_00595504(void)
// callers(0): 
// callees(1): 0058203c FUN_0058203c

undefined8 FUN_00595504(undefined8 param_1,undefined8 param_2,undefined8 param_3,int param_4)

{
  (*(code *)**(undefined4 **)(PTR_PTR_0071be84 + 0x38))(param_1,param_4,param_4,param_4 + 0x18,1,0);
  return 0x20;
}



//==== 0059555c  ns=Global  size=0x64
// sig: undefined FUN_0059555c(void)
// callers(0): 
// callees(1): 0058203c FUN_0058203c

undefined8 FUN_0059555c(undefined8 param_1,undefined8 param_2,undefined8 param_3,int param_4)

{
  (*(code *)**(undefined4 **)(PTR_PTR_0071be84 + 0x38))
            (param_1,param_4,param_4,param_4 + 0x18,*(undefined1 *)(param_4 + 0x44),0);
  return 0x48;
}



//==== 005955c0  ns=Global  size=0x58
// sig: undefined FUN_005955c0(void)
// callers(0): 
// callees(1): 0058203c FUN_0058203c

undefined8 FUN_005955c0(undefined8 param_1,undefined8 param_2,undefined8 param_3,int param_4)

{
  (*(code *)**(undefined4 **)(PTR_PTR_0071be84 + 0x38))(param_1,param_4,param_4,param_4 + 0x18,1,0);
  return 0x1c;
}



//==== 00595618  ns=Global  size=0x64
// sig: undefined FUN_00595618(void)
// callers(0): 
// callees(1): 0058203c FUN_0058203c

undefined8 FUN_00595618(undefined8 param_1,undefined8 param_2,undefined8 param_3,int param_4)

{
  (*(code *)**(undefined4 **)(PTR_PTR_0071be84 + 0x38))
            (param_1,param_4,param_4,param_4 + 0x18,*(undefined1 *)(param_4 + 0x60),0);
  return 100;
}



//==== 0059567c  ns=Global  size=0x58
// sig: undefined FUN_0059567c(void)
// callers(0): 
// callees(1): 0058203c FUN_0058203c

undefined8 FUN_0059567c(undefined8 param_1,undefined8 param_2,undefined8 param_3,int param_4)

{
  (*(code *)**(undefined4 **)(PTR_PTR_0071be84 + 0x38))(param_1,param_4,param_4,param_4 + 0x18,1,0);
  return 0x20;
}



//==== 005956d4  ns=Global  size=0x64
// sig: undefined FUN_005956d4(void)
// callers(0): 
// callees(1): 0058203c FUN_0058203c

undefined8 FUN_005956d4(undefined8 param_1,undefined8 param_2,undefined8 param_3,int param_4)

{
  (*(code *)**(undefined4 **)(PTR_PTR_0071be84 + 0x38))
            (param_1,param_4,param_4,param_4 + 0x18,*(undefined1 *)(param_4 + 0x30),0);
  return 0x34;
}



//==== 00595738  ns=Global  size=0x58
// sig: undefined FUN_00595738(void)
// callers(0): 
// callees(1): 0058203c FUN_0058203c

undefined8 FUN_00595738(undefined8 param_1,undefined8 param_2,undefined8 param_3,int param_4)

{
  (*(code *)**(undefined4 **)(PTR_PTR_0071be84 + 0x38))(param_1,param_4,param_4,param_4 + 0x18,1,0);
  return 0x1c;
}



//==== 00595790  ns=Global  size=0x58
// sig: undefined FUN_00595790(void)
// callers(0): 
// callees(1): 0058203c FUN_0058203c

undefined8 FUN_00595790(undefined8 param_1,undefined8 param_2,undefined8 param_3,int param_4)

{
  (*(code *)**(undefined4 **)(PTR_PTR_0071be84 + 0x38))(param_1,param_4,param_4,param_4 + 0x18,1,0);
  return 0x1c;
}



//==== 005957e8  ns=Global  size=0xc0
// sig: undefined FUN_005957e8(void)
// callers(0): 
// callees(3): 0058203c FUN_0058203c; 00582b0c FUN_00582b0c; 005d0140 libc::memset

undefined8 FUN_005957e8(undefined4 param_1,undefined8 param_2,undefined8 param_3,int param_4)

{
  undefined1 auStack_90 [4];
  undefined1 local_8c [4];
  undefined1 auStack_88 [4];
  undefined1 auStack_84 [92];
  
  libc::memset(auStack_88,0,0x54);
  FUN_00582b0c(param_1,auStack_84,auStack_90,local_8c,1);
  (*(code *)**(undefined4 **)(PTR_PTR_0071be84 + 0x38))
            (param_1,param_4,0,param_4 + 0x18,1,auStack_88);
  return 0x20;
}



//==== 005958a8  ns=Global  size=0xd4
// sig: undefined FUN_005958a8(void)
// callers(0): 
// callees(3): 0058203c FUN_0058203c; 00582b0c FUN_00582b0c; 005d0140 libc::memset

/* WARNING: Removing unreachable block (ram,0x00595934) */

undefined8 FUN_005958a8(undefined4 param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4)

{
  undefined1 local_80 [4];
  undefined1 local_7c [4];
  undefined1 auStack_78 [4];
  undefined1 auStack_74 [84];
  
  libc::memset(auStack_78,0,0x54);
  FUN_00582b0c(param_1,auStack_74,local_7c,local_80,1);
  (*(code *)**(undefined4 **)(PTR_PTR_0071be84 + 0x38))(param_1,param_4,0,0,1,auStack_78);
  return 8;
}



//==== 0059597c  ns=Global  size=0xe0
// sig: undefined FUN_0059597c(void)
// callers(0): 
// callees(2): 0058203c FUN_0058203c; 00582b0c FUN_00582b0c

undefined8 FUN_0059597c(undefined8 param_1,undefined8 param_2,undefined8 param_3,int param_4)

{
  int iVar1;
  undefined1 auStack_50 [4];
  int local_4c;
  undefined1 auStack_48 [48];
  
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



//==== 00595a5c  ns=Global  size=0xe0
// sig: undefined FUN_00595a5c(void)
// callers(0): 
// callees(3): 0058203c FUN_0058203c; 00582b0c FUN_00582b0c; 005d0140 libc::memset

undefined4 FUN_00595a5c(undefined4 param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4)

{
  int iVar1;
  undefined4 uVar2;
  undefined1 auStack_80 [4];
  int local_7c;
  undefined1 auStack_78 [4];
  undefined1 auStack_74 [92];
  
  libc::memset(auStack_78,0,0x54);
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



//==== 00595b3c  ns=Global  size=0xbc
// sig: undefined FUN_00595b3c(void)
// callers(0): 
// callees(3): 0058203c FUN_0058203c; 00582b0c FUN_00582b0c; 005d0140 libc::memset

undefined8 FUN_00595b3c(undefined4 param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4)

{
  undefined1 auStack_90 [4];
  undefined1 local_8c [4];
  undefined1 auStack_88 [4];
  undefined1 auStack_84 [92];
  
  libc::memset(auStack_88,0,0x54);
  FUN_00582b0c(param_1,auStack_84,auStack_90,local_8c,1);
  (*(code *)**(undefined4 **)(PTR_PTR_0071be84 + 0x38))(param_1,param_4,0,0,1,auStack_88);
  return 0x40;
}



//==== 00595bf8  ns=Global  size=0xc0
// sig: undefined FUN_00595bf8(void)
// callers(0): 
// callees(3): 0058203c FUN_0058203c; 00582b0c FUN_00582b0c; 005d0140 libc::memset

undefined8 FUN_00595bf8(undefined4 param_1,undefined8 param_2,undefined8 param_3,int param_4)

{
  undefined1 auStack_90 [4];
  undefined1 local_8c [4];
  undefined1 auStack_88 [4];
  undefined1 auStack_84 [92];
  
  libc::memset(auStack_88,0,0x54);
  FUN_00582b0c(param_1,auStack_84,auStack_90,local_8c,1);
  (*(code *)**(undefined4 **)(PTR_PTR_0071be84 + 0x38))
            (param_1,param_4,0,param_4 + 0x18,1,auStack_88);
  return 0x40;
}



//==== 00595cb8  ns=Global  size=0xbc
// sig: undefined FUN_00595cb8(void)
// callers(0): 
// callees(3): 0058203c FUN_0058203c; 00582b0c FUN_00582b0c; 005d0140 libc::memset

undefined8 FUN_00595cb8(undefined4 param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4)

{
  undefined1 auStack_90 [4];
  undefined1 local_8c [4];
  undefined1 auStack_88 [4];
  undefined1 auStack_84 [92];
  
  libc::memset(auStack_88,0,0x54);
  FUN_00582b0c(param_1,auStack_84,auStack_90,local_8c,1);
  (*(code *)**(undefined4 **)(PTR_PTR_0071be84 + 0x38))(param_1,param_4,0,0,1,auStack_88);
  return 0x28;
}



//==== 00595d74  ns=Global  size=0xbc
// sig: undefined FUN_00595d74(void)
// callers(0): 
// callees(3): 0058203c FUN_0058203c; 00582b0c FUN_00582b0c; 005d0140 libc::memset

undefined8 FUN_00595d74(undefined4 param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4)

{
  undefined1 auStack_90 [4];
  undefined1 local_8c [4];
  undefined1 auStack_88 [4];
  undefined1 auStack_84 [92];
  
  libc::memset(auStack_88,0,0x54);
  FUN_00582b0c(param_1,auStack_84,auStack_90,local_8c,1);
  (*(code *)**(undefined4 **)(PTR_PTR_0071be84 + 0x38))(param_1,param_4,0,0,1,auStack_88);
  return 0x34;
}



//==== 00595e30  ns=Global  size=0xc0
// sig: undefined FUN_00595e30(void)
// callers(0): 
// callees(3): 0058203c FUN_0058203c; 00582b0c FUN_00582b0c; 005d0140 libc::memset

undefined8 FUN_00595e30(undefined4 param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4)

{
  undefined1 auStack_90 [4];
  undefined1 local_8c [4];
  undefined1 auStack_88 [4];
  undefined1 auStack_84 [92];
  
  libc::memset(auStack_88,0,0x54);
  FUN_00582b0c(param_1,auStack_84,auStack_90,local_8c,1);
  (*(code *)**(undefined4 **)(PTR_PTR_0071be84 + 0x38))(param_1,param_4,0,param_4,1,auStack_88);
  return 0xa8;
}



//==== 00595ef0  ns=Global  size=0xc0
// sig: undefined FUN_00595ef0(void)
// callers(0): 
// callees(3): 0058203c FUN_0058203c; 00582b0c FUN_00582b0c; 005d0140 libc::memset

undefined8 FUN_00595ef0(undefined4 param_1,undefined8 param_2,undefined8 param_3,int param_4)

{
  undefined1 auStack_90 [4];
  undefined1 local_8c [4];
  undefined1 auStack_88 [4];
  undefined1 auStack_84 [92];
  
  libc::memset(auStack_88,0,0x54);
  FUN_00582b0c(param_1,auStack_84,auStack_90,local_8c,1);
  (*(code *)**(undefined4 **)(PTR_PTR_0071be84 + 0x38))
            (param_1,param_4,0,param_4 + 0x18,1,auStack_88);
  return 0x24;
}



//==== 00595fb0  ns=Global  size=0xf0
// sig: undefined FUN_00595fb0(void)
// callers(0): 
// callees(2): 0058203c FUN_0058203c; 00582b0c FUN_00582b0c

/* WARNING: Removing unreachable block (ram,0x00596080) */

undefined8 FUN_00595fb0(undefined4 param_1,undefined8 param_2,undefined8 param_3,int param_4)

{
  int iVar1;
  undefined1 local_50 [4];
  undefined1 auStack_4c [4];
  undefined1 auStack_48 [48];
  
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



//==== 005960a0  ns=Global  size=0x9c
// sig: undefined FUN_005960a0(void)
// callers(0): 
// callees(2): 0058203c FUN_0058203c; 005c5ad0 libc::memcpy

undefined8 FUN_005960a0(undefined4 param_1,undefined8 param_2,undefined8 param_3,void *param_4)

{
  undefined1 local_f0 [12];
  undefined1 auStack_e4 [24];
  undefined1 auStack_cc [172];
  
  libc::memcpy(auStack_e4,param_4,0xc4);
  (*(code *)**(undefined4 **)(PTR_PTR_0071be84 + 0x38))(param_1,local_f0,auStack_e4,auStack_cc,1,0);
  return 0xc4;
}



//==== 0059613c  ns=Global  size=0xf0
// sig: undefined FUN_0059613c(void)
// callers(0): 
// callees(2): 0058203c FUN_0058203c; 00582b0c FUN_00582b0c

/* WARNING: Removing unreachable block (ram,0x005961c8) */

undefined8 FUN_0059613c(undefined4 param_1,undefined8 param_2,undefined8 param_3,int param_4)

{
  int iVar1;
  longlong lVar2;
  undefined1 local_40 [4];
  undefined1 local_3c [4];
  undefined1 auStack_38 [40];
  
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



//==== 0059622c  ns=Global  size=0x158
// sig: undefined FUN_0059622c(void)
// callers(0): 
// callees(2): 0058203c FUN_0058203c; 00582b0c FUN_00582b0c

undefined4 FUN_0059622c(undefined4 param_1,undefined8 param_2,undefined8 param_3,int param_4)

{
  undefined1 uVar1;
  undefined1 uVar2;
  undefined1 uVar3;
  int iVar4;
  undefined1 *local_50;
  undefined1 auStack_4c [4];
  undefined1 auStack_48 [48];
  
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



//==== 00596384  ns=Global  size=0x118
// sig: undefined FUN_00596384(void)
// callers(0): 
// callees(5): 0058203c FUN_0058203c; 005c5ad0 libc::memcpy; 005cccec libc::strcpy; 005d0140 libc::memset; 005d0218 libc::memcmp

undefined8 FUN_00596384(undefined4 param_1,undefined8 param_2,undefined8 param_3,void *param_4)

{
  int iVar1;
  ulonglong uVar2;
  undefined1 auStack_470 [24];
  undefined1 local_458 [932];
  undefined1 auStack_b4 [140];
  
  libc::memset(auStack_470,0,0x440);
  libc::memcpy(auStack_470,param_4,0x440);
  if ((*(uint *)((int)param_4 + 0x1c) & 0x200) != 0) {
    uVar2 = ZEXT48(PTR_DAT_0071be8c);
    iVar1 = libc::memcmp(param_4,PTR_DAT_0071be8c,0x15);
    if (iVar1 == 0) {
      libc::strcpy(auStack_b4,uVar2 + 0x15,0x80);
    }
  }
  (*(code *)**(undefined4 **)(PTR_PTR_0071be84 + 0x38))
            (param_1,auStack_470,auStack_470,local_458,*(undefined1 *)((int)param_4 + 0x43c),0);
  return 0;
}



//==== 0059649c  ns=Global  size=0xc4
// sig: undefined FUN_0059649c(void)
// callers(0): 
// callees(4): 00553b40 FUN_00553b40; 00553d84 FUN_00553d84; 0055442c FUN_0055442c; 005d0140 libc::memset

int FUN_0059649c(void)

{
  undefined *puVar1;
  int iVar2;
  int in_r6;
  ulonglong uVar3;
  undefined1 auStack_50 [4];
  int local_4c;
  int local_44;
  int local_38;
  
  puVar1 = PTR_DAT_0071be8c;
  uVar3 = ZEXT48(PTR_DAT_0071be8c);
  libc::memset(PTR_DAT_0071be8c,0,0x95);
  FUN_0055442c(auStack_50,in_r6,in_r6 + 0x200,2);
  FUN_00553b40(auStack_50,puVar1,0x15);
  FUN_00553d84(auStack_50,uVar3 + 0x15);
  iVar2 = -1;
  if (local_38 == 0) {
    iVar2 = local_44 - local_4c;
  }
  return iVar2;
}



//==== 00596560  ns=Global  size=0x35c
// sig: undefined FUN_00596560(void)
// callers(0): 
// callees(7): 00581078 FUN_00581078; 00581df0 FUN_00581df0; 0058203c FUN_0058203c; 005822ac FUN_005822ac; 00582a40 FUN_00582a40; 00582a68 FUN_00582a68; 005c5ad0 libc::memcpy

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
  undefined1 auStack_248 [480];
  undefined1 local_68 [4];
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
      libc::memcpy(auStack_248,(void *)(*(int *)(local_24c + 0x134) + iVar1),__n);
      (*(code *)**(undefined4 **)(puVar6 + 0x2c))(local_250 + 4,1,0xa8,0x1fc,auStack_248,0,0,0);
    }
  }
  uVar5 = (ulonglong)((int)((ulonglong)(uint)param_4[2] ^ 3) >> 0x1f);
  (*(code *)**(undefined4 **)(puVar6 + 0x38))
            (param_1,auStack_248,&uStack_64,local_68,
             ((uVar5 ^ (ulonglong)(uint)param_4[2] ^ 3) - uVar5) - 1 >> 0x1f & 1,0);
  return 0x28;
}



//==== 005968bc  ns=Global  size=0xe8
// sig: undefined FUN_005968bc(void)
// callers(0): 
// callees(3): 0058203c FUN_0058203c; 00582b0c FUN_00582b0c; 00583198 FUN_00583198

undefined8 FUN_005968bc(undefined4 param_1,undefined8 param_2,undefined8 param_3,int param_4)

{
  int iVar1;
  longlong lVar2;
  undefined1 local_40 [4];
  undefined1 local_3c [4];
  undefined1 auStack_38 [40];
  
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



//==== 005969a4  ns=Global  size=0x238
// sig: undefined FUN_005969a4(void)
// callers(0): 
// callees(7): 0053ecc4 FUN_0053ecc4; 00581078 FUN_00581078; 00581df0 FUN_00581df0; 0058203c FUN_0058203c; 00582b0c FUN_00582b0c; 00583198 FUN_00583198; 005c5ad0 libc::memcpy

/* WARNING: Removing unreachable block (ram,0x00596a54) */

undefined8 FUN_005969a4(undefined4 param_1,undefined8 param_2,undefined8 param_3,int param_4)

{
  undefined4 *puVar1;
  undefined *puVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  longlong lVar6;
  undefined1 local_70 [4];
  undefined1 local_6c [4];
  int local_68;
  undefined1 auStack_64 [60];
  
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
        libc::memcpy((void *)0x120,(void *)(param_4 + 0x20),0xc4);
      }
    }
  }
  else {
    (*(code *)**(undefined4 **)(PTR_PTR_0071be84 + 0x38))
              (param_1,param_4,param_4,param_4 + 0x18,1,0);
  }
  return 0xe4;
}



//==== 00596bdc  ns=Global  size=0x22c
// sig: undefined FUN_00596bdc(void)
// callers(0): 
// callees(7): 0053ecc4 FUN_0053ecc4; 00581078 FUN_00581078; 00581df0 FUN_00581df0; 0058203c FUN_0058203c; 00582b0c FUN_00582b0c; 00583198 FUN_00583198; 005c5ad0 libc::memcpy

/* WARNING: Removing unreachable block (ram,0x00596c88) */

undefined8 FUN_00596bdc(undefined4 param_1,undefined8 param_2,undefined8 param_3,void *param_4)

{
  undefined4 *puVar1;
  undefined *puVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  longlong lVar6;
  undefined1 local_60 [4];
  undefined1 local_5c [4];
  int local_58;
  undefined1 auStack_54 [52];
  
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
        libc::memcpy((void *)0x120,param_4,0xc4);
      }
    }
  }
  else {
    (*(code *)**(undefined4 **)(PTR_PTR_0071be84 + 0x38))
              (param_1,param_4,param_4,(int)param_4 + 0x18,1,0);
  }
  return 0xc4;
}



//==== 00596e08  ns=Global  size=0x2c
// sig: undefined FUN_00596e08(void)
// callers(0): 
// callees(1): 00553b40 FUN_00553b40

void FUN_00596e08(undefined8 param_1,undefined4 *param_2)

{
  FUN_00553b40(param_1,*param_2,0x15);
  return;
}



//==== 00596e34  ns=Global  size=0x5c
// sig: undefined FUN_00596e34(void)
// callers(4): 0059d4f0 FUN_0059d4f0; 0059d57c FUN_0059d57c; 0059de44 FUN_0059de44; 0059f8fc FUN_0059f8fc
// callees(1): 00553b40 FUN_00553b40

void FUN_00596e34(undefined8 param_1,int *param_2)

{
  int iVar1;
  
  iVar1 = *param_2;
  FUN_00553b40(param_1,iVar1,0x38);
  FUN_00553b40(param_1,iVar1 + 0x38,0x100);
  return;
}



//==== 00596e90  ns=Global  size=0x5c
// sig: undefined FUN_00596e90(void)
// callers(0): 
// callees(1): 00553b40 FUN_00553b40

void FUN_00596e90(undefined8 param_1,int *param_2)

{
  int iVar1;
  
  iVar1 = *param_2;
  FUN_00553b40(param_1,iVar1,0x15);
  FUN_00553b40(param_1,iVar1 + 0x15,200);
  return;
}



//==== 00596eec  ns=Global  size=0x5c
// sig: undefined FUN_00596eec(void)
// callers(0): 
// callees(1): 00553b40 FUN_00553b40

void FUN_00596eec(undefined8 param_1,int *param_2)

{
  int iVar1;
  
  iVar1 = *param_2;
  FUN_00553b40(param_1,iVar1,0x15);
  FUN_00553b40(param_1,iVar1 + 0x15,0x80);
  return;
}



//==== 00596f48  ns=Global  size=0x5c
// sig: undefined FUN_00596f48(void)
// callers(0): 
// callees(1): 00553b40 FUN_00553b40

void FUN_00596f48(undefined8 param_1,int *param_2)

{
  int iVar1;
  
  iVar1 = *param_2;
  FUN_00553b40(param_1,iVar1,0x15);
  FUN_00553b40(param_1,iVar1 + 0x15,0x38);
  return;
}



//==== 00596fa4  ns=Global  size=0x5c
// sig: undefined FUN_00596fa4(void)
// callers(0): 
// callees(1): 00553b40 FUN_00553b40

void FUN_00596fa4(undefined8 param_1,int *param_2)

{
  int iVar1;
  
  iVar1 = *param_2;
  FUN_00553b40(param_1,iVar1,0x15);
  FUN_00553b40(param_1,iVar1 + 0x15,0x11);
  return;
}



//==== 00597000  ns=Global  size=0x5c
// sig: undefined FUN_00597000(void)
// callers(0): 
// callees(1): 00553b40 FUN_00553b40

void FUN_00597000(undefined8 param_1,int *param_2)

{
  int iVar1;
  
  iVar1 = *param_2;
  FUN_00553b40(param_1,iVar1,0x15);
  FUN_00553b40(param_1,iVar1 + 0x15,0x11);
  return;
}



//==== 0059705c  ns=Global  size=0x74
// sig: undefined FUN_0059705c(void)
// callers(0): 
// callees(1): 00553b40 FUN_00553b40

void FUN_0059705c(undefined8 param_1,int *param_2)

{
  int iVar1;
  
  iVar1 = *param_2;
  FUN_00553b40(param_1,iVar1,0x15);
  FUN_00553b40(param_1,iVar1 + 0x15,0x11);
  FUN_00553b40(param_1,iVar1 + 0x26,0x4b0);
  return;
}



//==== 005970d0  ns=Global  size=0x5c
// sig: undefined FUN_005970d0(void)
// callers(0): 
// callees(1): 00553b40 FUN_00553b40

void FUN_005970d0(undefined8 param_1,int *param_2)

{
  int iVar1;
  
  iVar1 = *param_2;
  FUN_00553b40(param_1,iVar1,0x15);
  FUN_00553b40(param_1,iVar1 + 0x15,0x11);
  return;
}



//==== 0059712c  ns=Global  size=0x74
// sig: undefined FUN_0059712c(void)
// callers(0): 
// callees(1): 00553b40 FUN_00553b40

void FUN_0059712c(undefined8 param_1,int *param_2)

{
  int iVar1;
  
  iVar1 = *param_2;
  FUN_00553b40(param_1,iVar1,0x15);
  FUN_00553b40(param_1,iVar1 + 0x15,0x20);
  FUN_00553b40(param_1,iVar1 + 0x35,0x800);
  return;
}



//==== 005971a0  ns=Global  size=0x2c
// sig: undefined FUN_005971a0(void)
// callers(0): 
// callees(1): 00553b40 FUN_00553b40

void FUN_005971a0(undefined8 param_1,undefined4 *param_2)

{
  FUN_00553b40(param_1,*param_2,0x15);
  return;
}



//==== 005971cc  ns=Global  size=0x5c
// sig: undefined FUN_005971cc(void)
// callers(0): 
// callees(1): 00553b40 FUN_00553b40

void FUN_005971cc(undefined8 param_1,int *param_2)

{
  int iVar1;
  
  iVar1 = *param_2;
  FUN_00553b40(param_1,iVar1,0x15);
  FUN_00553b40(param_1,iVar1 + 0x15,0x11);
  return;
}



//==== 00597228  ns=Global  size=0x5c
// sig: undefined FUN_00597228(void)
// callers(0): 
// callees(1): 00553b40 FUN_00553b40

void FUN_00597228(undefined8 param_1,int *param_2)

{
  int iVar1;
  
  iVar1 = *param_2;
  FUN_00553b40(param_1,iVar1,0x15);
  FUN_00553b40(param_1,iVar1 + 0x15,0x11);
  return;
}



//==== 00597284  ns=Global  size=0x5c
// sig: undefined FUN_00597284(void)
// callers(0): 
// callees(1): 00553b40 FUN_00553b40

void FUN_00597284(undefined8 param_1,int *param_2)

{
  int iVar1;
  
  iVar1 = *param_2;
  FUN_00553b40(param_1,iVar1,0x15);
  FUN_00553b40(param_1,iVar1 + 0x15,0x11);
  return;
}



//==== 005972e0  ns=Global  size=0x5c
// sig: undefined FUN_005972e0(void)
// callers(0): 
// callees(1): 00553b40 FUN_00553b40

void FUN_005972e0(undefined8 param_1,int *param_2)

{
  int iVar1;
  
  iVar1 = *param_2;
  FUN_00553b40(param_1,iVar1,0x15);
  FUN_00553b40(param_1,iVar1 + 0x15,0x11);
  return;
}



//==== 0059733c  ns=Global  size=0x5c
// sig: undefined FUN_0059733c(void)
// callers(0): 
// callees(1): 00553b40 FUN_00553b40

void FUN_0059733c(undefined8 param_1,int *param_2)

{
  int iVar1;
  
  iVar1 = *param_2;
  FUN_00553b40(param_1,iVar1,0x15);
  FUN_00553b40(param_1,iVar1 + 0x15,0x11);
  return;
}



//==== 00597398  ns=Global  size=0x2c
// sig: undefined FUN_00597398(void)
// callers(0): 
// callees(1): 00553b40 FUN_00553b40

void FUN_00597398(undefined8 param_1,undefined4 *param_2)

{
  FUN_00553b40(param_1,*param_2,0x15);
  return;
}



//==== 005973c4  ns=Global  size=0x2c
// sig: undefined FUN_005973c4(void)
// callers(0): 
// callees(1): 00553b40 FUN_00553b40

void FUN_005973c4(undefined8 param_1,undefined4 *param_2)

{
  FUN_00553b40(param_1,*param_2,0x15);
  return;
}



//==== 005973f0  ns=Global  size=0x2c
// sig: undefined FUN_005973f0(void)
// callers(0): 
// callees(1): 00553b40 FUN_00553b40

void FUN_005973f0(undefined8 param_1,undefined4 *param_2)

{
  FUN_00553b40(param_1,*param_2,0x15);
  return;
}



//==== 0059741c  ns=Global  size=0x2c
// sig: undefined FUN_0059741c(void)
// callers(2): 00597448 FUN_00597448; 0059ae80 FUN_0059ae80
// callees(1): 00553b40 FUN_00553b40

void FUN_0059741c(undefined8 param_1,undefined4 *param_2)

{
  FUN_00553b40(param_1,*param_2,0x10);
  return;
}



//==== 00597448  ns=Global  size=0x78
// sig: undefined FUN_00597448(void)
// callers(0): 
// callees(2): 00553b40 FUN_00553b40; 0059741c FUN_0059741c

void FUN_00597448(undefined8 param_1,int *param_2)

{
  int iVar1;
  undefined1 local_30 [16];
  
  iVar1 = *param_2;
  FUN_00553b40(param_1,iVar1,0x15);
  FUN_00553b40(param_1,iVar1 + 0x15,0x11);
  FUN_0059741c(param_1,local_30);
  return;
}



//==== 005974c0  ns=Global  size=0x8c
// sig: undefined FUN_005974c0(void)
// callers(0): 
// callees(1): 00553b40 FUN_00553b40

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



//==== 0059754c  ns=Global  size=0x2c
// sig: undefined FUN_0059754c(void)
// callers(0): 
// callees(1): 00553b40 FUN_00553b40

void FUN_0059754c(undefined8 param_1,undefined4 *param_2)

{
  FUN_00553b40(param_1,*param_2,0x15);
  return;
}



//==== 00597578  ns=Global  size=0x74
// sig: undefined FUN_00597578(void)
// callers(0): 
// callees(1): 00553b40 FUN_00553b40

void FUN_00597578(undefined8 param_1,int *param_2)

{
  int iVar1;
  
  iVar1 = *param_2;
  FUN_00553b40(param_1,iVar1,0x15);
  FUN_00553b40(param_1,iVar1 + 0x15,0x11);
  FUN_00553b40(param_1,iVar1 + 0x26,0x100);
  return;
}



//==== 005975ec  ns=Global  size=0x8c
// sig: undefined FUN_005975ec(void)
// callers(0): 
// callees(1): 00553b40 FUN_00553b40

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



//==== 00597678  ns=Global  size=0x5c
// sig: undefined FUN_00597678(void)
// callers(0): 
// callees(1): 00553b40 FUN_00553b40

void FUN_00597678(undefined8 param_1,int *param_2)

{
  int iVar1;
  
  iVar1 = *param_2;
  FUN_00553b40(param_1,iVar1,0x15);
  FUN_00553b40(param_1,iVar1 + 0x15,0x11);
  return;
}



//==== 005976d4  ns=Global  size=0x74
// sig: undefined FUN_005976d4(void)
// callers(0): 
// callees(1): 00553b40 FUN_00553b40

void FUN_005976d4(undefined8 param_1,int *param_2)

{
  int iVar1;
  
  iVar1 = *param_2;
  FUN_00553b40(param_1,iVar1,0x15);
  FUN_00553b40(param_1,iVar1 + 0x15,0x11);
  FUN_00553b40(param_1,iVar1 + 0x26,0x20);
  return;
}



//==== 00597748  ns=Global  size=0x5c
// sig: undefined FUN_00597748(void)
// callers(0): 
// callees(1): 00553b40 FUN_00553b40

void FUN_00597748(undefined8 param_1,int *param_2)

{
  int iVar1;
  
  iVar1 = *param_2;
  FUN_00553b40(param_1,iVar1,0x15);
  FUN_00553b40(param_1,iVar1 + 0x15,0x11);
  return;
}



//==== 005977a4  ns=Global  size=0x74
// sig: undefined FUN_005977a4(void)
// callers(0): 
// callees(1): 00553b40 FUN_00553b40

void FUN_005977a4(undefined8 param_1,int *param_2)

{
  int iVar1;
  
  iVar1 = *param_2;
  FUN_00553b40(param_1,iVar1,0x15);
  FUN_00553b40(param_1,iVar1 + 0x15,0x11);
  FUN_00553b40(param_1,iVar1 + 0x26,0x20);
  return;
}



//==== 00597818  ns=Global  size=0x74
// sig: undefined FUN_00597818(void)
// callers(0): 
// callees(1): 00553b40 FUN_00553b40

void FUN_00597818(undefined8 param_1,int *param_2)

{
  int iVar1;
  
  iVar1 = *param_2;
  FUN_00553b40(param_1,iVar1,0x15);
  FUN_00553b40(param_1,iVar1 + 0x15,0x11);
  FUN_00553b40(param_1,iVar1 + 0x26,0x20);
  return;
}



//==== 0059788c  ns=Global  size=0xd4
// sig: undefined FUN_0059788c(void)
// callers(1): 0059de44 FUN_0059de44
// callees(2): 00553b40 FUN_00553b40; 00553f04 FUN_00553f04

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



//==== 00597960  ns=Global  size=0xa8
// sig: undefined FUN_00597960(void)
// callers(3): 0059d668 FUN_0059d668; 0059d85c FUN_0059d85c; 0059dc78 FUN_0059dc78
// callees(2): 00553b40 FUN_00553b40; 00553f04 FUN_00553f04

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



//==== 00597a08  ns=Global  size=0x7c
// sig: undefined FUN_00597a08(void)
// callers(0): 
// callees(1): 00553f04 FUN_00553f04

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



//==== 00597a84  ns=Global  size=0x68
// sig: undefined FUN_00597a84(void)
// callers(0): 
// callees(3): 00553b40 FUN_00553b40; 00553c74 FUN_00553c74; 00553f04 FUN_00553f04

void FUN_00597a84(undefined8 param_1,int *param_2)

{
  int iVar1;
  
  iVar1 = *param_2;
  FUN_00553b40(param_1,iVar1,0x15);
  FUN_00553c74(param_1,3);
  FUN_00553f04(param_1,iVar1 + 0x18);
  return;
}



//==== 00597aec  ns=Global  size=0x90
// sig: undefined FUN_00597aec(void)
// callers(0): 
// callees(3): 00553b40 FUN_00553b40; 00553c74 FUN_00553c74; 00553f04 FUN_00553f04

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



//==== 00597b7c  ns=Global  size=0x19c
// sig: undefined FUN_00597b7c(void)
// callers(0): 
// callees(2): 00553b40 FUN_00553b40; 00553f04 FUN_00553f04

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



//==== 00597d18  ns=Global  size=0x7c
// sig: undefined FUN_00597d18(void)
// callers(0): 
// callees(3): 00553b40 FUN_00553b40; 00553c74 FUN_00553c74; 00553f04 FUN_00553f04

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



//==== 00597d94  ns=Global  size=0x68
// sig: undefined FUN_00597d94(void)
// callers(0): 
// callees(3): 00553b40 FUN_00553b40; 00553c74 FUN_00553c74; 00553f04 FUN_00553f04

void FUN_00597d94(undefined8 param_1,int *param_2)

{
  int iVar1;
  
  iVar1 = *param_2;
  FUN_00553b40(param_1,iVar1,0x15);
  FUN_00553c74(param_1,3);
  FUN_00553f04(param_1,iVar1 + 0x18);
  return;
}



//==== 00597dfc  ns=Global  size=0x98
// sig: undefined FUN_00597dfc(void)
// callers(0): 
// callees(3): 00553b40 FUN_00553b40; 00553c74 FUN_00553c74; 00553f04 FUN_00553f04

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



//==== 00597e94  ns=Global  size=0x68
// sig: undefined FUN_00597e94(void)
// callers(0): 
// callees(3): 00553b40 FUN_00553b40; 00553c74 FUN_00553c74; 00553f04 FUN_00553f04

void FUN_00597e94(undefined8 param_1,int *param_2)

{
  int iVar1;
  
  iVar1 = *param_2;
  FUN_00553b40(param_1,iVar1,0x15);
  FUN_00553c74(param_1,3);
  FUN_00553f04(param_1,iVar1 + 0x18);
  return;
}



//==== 00597efc  ns=Global  size=0x98
// sig: undefined FUN_00597efc(void)
// callers(0): 
// callees(3): 00553b40 FUN_00553b40; 00553c74 FUN_00553c74; 00553f04 FUN_00553f04

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



//==== 00597f94  ns=Global  size=0x94
// sig: undefined FUN_00597f94(void)
// callers(0): 
// callees(3): 00553b40 FUN_00553b40; 00553c74 FUN_00553c74; 00553f04 FUN_00553f04

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



//==== 00598028  ns=Global  size=0xbc
// sig: undefined FUN_00598028(void)
// callers(0): 
// callees(3): 00553b40 FUN_00553b40; 00553c74 FUN_00553c74; 00553f04 FUN_00553f04

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



//==== 005980e4  ns=Global  size=0x68
// sig: undefined FUN_005980e4(void)
// callers(0): 
// callees(3): 00553b40 FUN_00553b40; 00553c74 FUN_00553c74; 00553f04 FUN_00553f04

void FUN_005980e4(undefined8 param_1,int *param_2)

{
  int iVar1;
  
  iVar1 = *param_2;
  FUN_00553b40(param_1,iVar1,0x15);
  FUN_00553c74(param_1,3);
  FUN_00553f04(param_1,iVar1 + 0x18);
  return;
}



//==== 0059814c  ns=Global  size=0xa4
// sig: undefined FUN_0059814c(void)
// callers(0): 
// callees(3): 00553b40 FUN_00553b40; 00553c74 FUN_00553c74; 00553f04 FUN_00553f04

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



//==== 005981f0  ns=Global  size=0xa8
// sig: undefined FUN_005981f0(void)
// callers(0): 
// callees(3): 00553b40 FUN_00553b40; 00553c74 FUN_00553c74; 00553f04 FUN_00553f04

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



//==== 00598298  ns=Global  size=0x68
// sig: undefined FUN_00598298(void)
// callers(0): 
// callees(3): 00553b40 FUN_00553b40; 00553c74 FUN_00553c74; 00553f04 FUN_00553f04

void FUN_00598298(undefined8 param_1,int *param_2)

{
  int iVar1;
  
  iVar1 = *param_2;
  FUN_00553b40(param_1,iVar1,0x15);
  FUN_00553c74(param_1,3);
  FUN_00553f04(param_1,iVar1 + 0x18);
  return;
}



//==== 00598300  ns=Global  size=0x90
// sig: undefined FUN_00598300(void)
// callers(0): 
// callees(3): 00553b40 FUN_00553b40; 00553c74 FUN_00553c74; 00553f04 FUN_00553f04

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



//==== 00598390  ns=Global  size=0x68
// sig: undefined FUN_00598390(void)
// callers(1): 005983f8 FUN_005983f8
// callees(3): 00553b40 FUN_00553b40; 00553c74 FUN_00553c74; 00553f04 FUN_00553f04

void FUN_00598390(undefined8 param_1,int *param_2)

{
  int iVar1;
  
  iVar1 = *param_2;
  FUN_00553b40(param_1,iVar1,0x15);
  FUN_00553c74(param_1,3);
  FUN_00553f04(param_1,iVar1 + 0x18);
  return;
}



//==== 005983f8  ns=Global  size=0x98
// sig: undefined FUN_005983f8(void)
// callers(0): 
// callees(2): 00553f04 FUN_00553f04; 00598390 FUN_00598390

void FUN_005983f8(undefined8 param_1,int *param_2)

{
  int iVar1;
  undefined1 local_30 [16];
  
  iVar1 = *param_2;
  FUN_00598390(param_1,local_30);
  FUN_00553f04(param_1,iVar1 + 0x1c);
  FUN_00553f04(param_1,iVar1 + 0x20);
  FUN_00553f04(param_1,iVar1 + 0x24);
  FUN_00553f04(param_1,iVar1 + 0x28);
  return;
}



//==== 00598490  ns=Global  size=0x68
// sig: undefined FUN_00598490(void)
// callers(0): 
// callees(3): 00553b40 FUN_00553b40; 00553c74 FUN_00553c74; 00553f04 FUN_00553f04

void FUN_00598490(undefined8 param_1,int *param_2)

{
  int iVar1;
  
  iVar1 = *param_2;
  FUN_00553b40(param_1,iVar1,0x15);
  FUN_00553c74(param_1,3);
  FUN_00553f04(param_1,iVar1 + 0x18);
  return;
}



//==== 005984f8  ns=Global  size=0x68
// sig: undefined FUN_005984f8(void)
// callers(0): 
// callees(3): 00553b40 FUN_00553b40; 00553c74 FUN_00553c74; 00553f04 FUN_00553f04

void FUN_005984f8(undefined8 param_1,int *param_2)

{
  int iVar1;
  
  iVar1 = *param_2;
  FUN_00553b40(param_1,iVar1,0x15);
  FUN_00553c74(param_1,3);
  FUN_00553f04(param_1,iVar1 + 0x18);
  return;
}



//==== 00598560  ns=Global  size=0x68
// sig: undefined FUN_00598560(void)
// callers(0): 
// callees(3): 00553b40 FUN_00553b40; 00553c74 FUN_00553c74; 00553f04 FUN_00553f04

void FUN_00598560(undefined8 param_1,int *param_2)

{
  int iVar1;
  
  iVar1 = *param_2;
  FUN_00553b40(param_1,iVar1,0x15);
  FUN_00553c74(param_1,3);
  FUN_00553f04(param_1,iVar1 + 0x18);
  return;
}



//==== 005985c8  ns=Global  size=0x80
// sig: undefined FUN_005985c8(void)
// callers(0): 
// callees(3): 00553b40 FUN_00553b40; 00553c74 FUN_00553c74; 00553f04 FUN_00553f04

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



//==== 00598648  ns=Global  size=0x68
// sig: undefined FUN_00598648(void)
// callers(0): 
// callees(3): 00553b40 FUN_00553b40; 00553c74 FUN_00553c74; 00553f04 FUN_00553f04

void FUN_00598648(undefined8 param_1,int *param_2)

{
  int iVar1;
  
  iVar1 = *param_2;
  FUN_00553b40(param_1,iVar1,0x15);
  FUN_00553c74(param_1,3);
  FUN_00553f04(param_1,iVar1 + 0x18);
  return;
}



//==== 005986b0  ns=Global  size=0x80
// sig: undefined FUN_005986b0(void)
// callers(0): 
// callees(3): 00553b40 FUN_00553b40; 00553c74 FUN_00553c74; 00553f04 FUN_00553f04

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



//==== 00598730  ns=Global  size=0x68
// sig: undefined FUN_00598730(void)
// callers(0): 
// callees(3): 00553b40 FUN_00553b40; 00553c74 FUN_00553c74; 00553f04 FUN_00553f04

void FUN_00598730(undefined8 param_1,int *param_2)

{
  int iVar1;
  
  iVar1 = *param_2;
  FUN_00553b40(param_1,iVar1,0x15);
  FUN_00553c74(param_1,3);
  FUN_00553f04(param_1,iVar1 + 0x18);
  return;
}



//==== 00598798  ns=Global  size=0xac
// sig: undefined FUN_00598798(void)
// callers(0): 
// callees(3): 00553b40 FUN_00553b40; 00553c74 FUN_00553c74; 00553f04 FUN_00553f04

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



//==== 00598844  ns=Global  size=0x68
// sig: undefined FUN_00598844(void)
// callers(0): 
// callees(3): 00553b40 FUN_00553b40; 00553c74 FUN_00553c74; 00553f04 FUN_00553f04

void FUN_00598844(undefined8 param_1,int *param_2)

{
  int iVar1;
  
  iVar1 = *param_2;
  FUN_00553b40(param_1,iVar1,0x15);
  FUN_00553c74(param_1,3);
  FUN_00553f04(param_1,iVar1 + 0x18);
  return;
}



//==== 005988ac  ns=Global  size=0xac
// sig: undefined FUN_005988ac(void)
// callers(0): 
// callees(3): 00553b40 FUN_00553b40; 00553c74 FUN_00553c74; 00553f04 FUN_00553f04

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



//==== 00598958  ns=Global  size=0x68
// sig: undefined FUN_00598958(void)
// callers(0): 
// callees(3): 00553b40 FUN_00553b40; 00553c74 FUN_00553c74; 00553f04 FUN_00553f04

void FUN_00598958(undefined8 param_1,int *param_2)

{
  int iVar1;
  
  iVar1 = *param_2;
  FUN_00553b40(param_1,iVar1,0x15);
  FUN_00553c74(param_1,3);
  FUN_00553f04(param_1,iVar1 + 0x18);
  return;
}



//==== 005989c0  ns=Global  size=0x98
// sig: undefined FUN_005989c0(void)
// callers(0): 
// callees(3): 00553b40 FUN_00553b40; 00553c74 FUN_00553c74; 00553f04 FUN_00553f04

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



//==== 00598a58  ns=Global  size=0x68
// sig: undefined FUN_00598a58(void)
// callers(0): 
// callees(3): 00553b40 FUN_00553b40; 00553c74 FUN_00553c74; 00553f04 FUN_00553f04

void FUN_00598a58(undefined8 param_1,int *param_2)

{
  int iVar1;
  
  iVar1 = *param_2;
  FUN_00553b40(param_1,iVar1,0x15);
  FUN_00553c74(param_1,3);
  FUN_00553f04(param_1,iVar1 + 0x18);
  return;
}



//==== 00598ac0  ns=Global  size=0x94
// sig: undefined FUN_00598ac0(void)
// callers(0): 
// callees(3): 00553b40 FUN_00553b40; 00553c74 FUN_00553c74; 00553f04 FUN_00553f04

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



//==== 00598b54  ns=Global  size=0x68
// sig: undefined FUN_00598b54(void)
// callers(0): 
// callees(3): 00553b40 FUN_00553b40; 00553c74 FUN_00553c74; 00553f04 FUN_00553f04

void FUN_00598b54(undefined8 param_1,int *param_2)

{
  int iVar1;
  
  iVar1 = *param_2;
  FUN_00553b40(param_1,iVar1,0x15);
  FUN_00553c74(param_1,3);
  FUN_00553f04(param_1,iVar1 + 0x18);
  return;
}



//==== 00598bbc  ns=Global  size=0x80
// sig: undefined FUN_00598bbc(void)
// callers(0): 
// callees(3): 00553b40 FUN_00553b40; 00553c74 FUN_00553c74; 00553f04 FUN_00553f04

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



//==== 00598c3c  ns=Global  size=0x68
// sig: undefined FUN_00598c3c(void)
// callers(0): 
// callees(3): 00553b40 FUN_00553b40; 00553c74 FUN_00553c74; 00553f04 FUN_00553f04

void FUN_00598c3c(undefined8 param_1,int *param_2)

{
  int iVar1;
  
  iVar1 = *param_2;
  FUN_00553b40(param_1,iVar1,0x15);
  FUN_00553c74(param_1,3);
  FUN_00553f04(param_1,iVar1 + 0x18);
  return;
}



//==== 00598ca4  ns=Global  size=0x80
// sig: undefined FUN_00598ca4(void)
// callers(0): 
// callees(3): 00553b40 FUN_00553b40; 00553c74 FUN_00553c74; 00553f04 FUN_00553f04

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



//==== 00598d24  ns=Global  size=0x54
// sig: undefined FUN_00598d24(void)
// callers(0): 
// callees(1): 00553f04 FUN_00553f04

void FUN_00598d24(undefined8 param_1,int *param_2)

{
  int iVar1;
  
  iVar1 = *param_2;
  FUN_00553f04(param_1,iVar1);
  FUN_00553f04(param_1,iVar1 + 4);
  return;
}



//==== 00598d78  ns=Global  size=0x7c
// sig: undefined FUN_00598d78(void)
// callers(0): 
// callees(3): 00553b40 FUN_00553b40; 00553c74 FUN_00553c74; 00553f04 FUN_00553f04

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



//==== 00598df4  ns=Global  size=0xd4
// sig: undefined FUN_00598df4(void)
// callers(0): 
// callees(3): 00553b40 FUN_00553b40; 00553c74 FUN_00553c74; 00553f04 FUN_00553f04

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



//==== 00598ec8  ns=Global  size=0x80
// sig: undefined FUN_00598ec8(void)
// callers(0): 
// callees(3): 00553b40 FUN_00553b40; 00553c74 FUN_00553c74; 00553f04 FUN_00553f04

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



//==== 00598f48  ns=Global  size=0x68
// sig: undefined FUN_00598f48(void)
// callers(0): 
// callees(3): 00553b40 FUN_00553b40; 00553c74 FUN_00553c74; 00553f04 FUN_00553f04

void FUN_00598f48(undefined8 param_1,int *param_2)

{
  int iVar1;
  
  iVar1 = *param_2;
  FUN_00553b40(param_1,iVar1,0x15);
  FUN_00553c74(param_1,3);
  FUN_00553f04(param_1,iVar1 + 0x18);
  return;
}



//==== 00598fb0  ns=Global  size=0x98
// sig: undefined FUN_00598fb0(void)
// callers(0): 
// callees(3): 00553b40 FUN_00553b40; 00553c74 FUN_00553c74; 00553f04 FUN_00553f04

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



//==== 00599048  ns=Global  size=0x80
// sig: undefined FUN_00599048(void)
// callers(0): 
// callees(3): 00553b40 FUN_00553b40; 00553c74 FUN_00553c74; 00553f04 FUN_00553f04

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



//==== 005990c8  ns=Global  size=0x98
// sig: undefined FUN_005990c8(void)
// callers(0): 
// callees(3): 00553b40 FUN_00553b40; 00553c74 FUN_00553c74; 00553f04 FUN_00553f04

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



//==== 00599160  ns=Global  size=0x98
// sig: undefined FUN_00599160(void)
// callers(0): 
// callees(3): 00553b40 FUN_00553b40; 00553c74 FUN_00553c74; 00553f04 FUN_00553f04

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



//==== 005991f8  ns=Global  size=0x68
// sig: undefined FUN_005991f8(void)
// callers(0): 
// callees(3): 00553b40 FUN_00553b40; 00553c74 FUN_00553c74; 00553f04 FUN_00553f04

void FUN_005991f8(undefined8 param_1,int *param_2)

{
  int iVar1;
  
  iVar1 = *param_2;
  FUN_00553b40(param_1,iVar1,0x15);
  FUN_00553c74(param_1,3);
  FUN_00553f04(param_1,iVar1 + 0x18);
  return;
}



//==== 00599260  ns=Global  size=0x98
// sig: undefined FUN_00599260(void)
// callers(0): 
// callees(3): 00553b40 FUN_00553b40; 00553c74 FUN_00553c74; 00553f04 FUN_00553f04

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



//==== 005992f8  ns=Global  size=0xa4
// sig: undefined FUN_005992f8(void)
// callers(0): 
// callees(3): 00553b40 FUN_00553b40; 00553c74 FUN_00553c74; 00553f04 FUN_00553f04

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



//==== 0059939c  ns=Global  size=0x94
// sig: undefined FUN_0059939c(void)
// callers(0): 
// callees(3): 00553b40 FUN_00553b40; 00553c74 FUN_00553c74; 00553f04 FUN_00553f04

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



//==== 00599430  ns=Global  size=0x80
// sig: undefined FUN_00599430(void)
// callers(0): 
// callees(3): 00553b40 FUN_00553b40; 00553c74 FUN_00553c74; 00553f04 FUN_00553f04

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



//==== 005994b0  ns=Global  size=0x80
// sig: undefined FUN_005994b0(void)
// callers(0): 
// callees(3): 00553b40 FUN_00553b40; 00553c74 FUN_00553c74; 00553f04 FUN_00553f04

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



//==== 00599530  ns=Global  size=0x80
// sig: undefined FUN_00599530(void)
// callers(0): 
// callees(3): 00553b40 FUN_00553b40; 00553c74 FUN_00553c74; 00553f04 FUN_00553f04

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



//==== 005995b0  ns=Global  size=0x90
// sig: undefined FUN_005995b0(void)
// callers(0): 
// callees(3): 00553b40 FUN_00553b40; 00553c74 FUN_00553c74; 00553f04 FUN_00553f04

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



//==== 00599640  ns=Global  size=0x80
// sig: undefined FUN_00599640(void)
// callers(0): 
// callees(3): 00553b40 FUN_00553b40; 00553c74 FUN_00553c74; 00553f04 FUN_00553f04

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



//==== 005996c0  ns=Global  size=0x80
// sig: undefined FUN_005996c0(void)
// callers(0): 
// callees(3): 00553b40 FUN_00553b40; 00553c74 FUN_00553c74; 00553f04 FUN_00553f04

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



//==== 00599740  ns=Global  size=0x94
// sig: undefined FUN_00599740(void)
// callers(0): 
// callees(3): 00553b40 FUN_00553b40; 00553c74 FUN_00553c74; 00553f04 FUN_00553f04

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



//==== 005997d4  ns=Global  size=0xa8
// sig: undefined FUN_005997d4(void)
// callers(0): 
// callees(3): 00553b40 FUN_00553b40; 00553c74 FUN_00553c74; 00553f04 FUN_00553f04

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



//==== 0059987c  ns=Global  size=0x80
// sig: undefined FUN_0059987c(void)
// callers(0): 
// callees(3): 00553b40 FUN_00553b40; 00553c74 FUN_00553c74; 00553f04 FUN_00553f04

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



//==== 005998fc  ns=Global  size=0x68
// sig: undefined FUN_005998fc(void)
// callers(0): 
// callees(3): 00553b40 FUN_00553b40; 00553c74 FUN_00553c74; 00553f04 FUN_00553f04

void FUN_005998fc(undefined8 param_1,int *param_2)

{
  int iVar1;
  
  iVar1 = *param_2;
  FUN_00553b40(param_1,iVar1,0x15);
  FUN_00553c74(param_1,3);
  FUN_00553f04(param_1,iVar1 + 0x18);
  return;
}



//==== 00599964  ns=Global  size=0xd0
// sig: undefined FUN_00599964(void)
// callers(0): 
// callees(3): 00553b40 FUN_00553b40; 00553c74 FUN_00553c74; 00553f04 FUN_00553f04

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



//==== 00599a34  ns=Global  size=0xbc
// sig: undefined FUN_00599a34(void)
// callers(0): 
// callees(3): 00553b40 FUN_00553b40; 00553c74 FUN_00553c74; 00553f04 FUN_00553f04

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



//==== 00599af0  ns=Global  size=0x80
// sig: undefined FUN_00599af0(void)
// callers(0): 
// callees(3): 00553b40 FUN_00553b40; 00553c74 FUN_00553c74; 00553f04 FUN_00553f04

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



//==== 00599b70  ns=Global  size=0x7c
// sig: undefined FUN_00599b70(void)
// callers(0): 
// callees(3): 00553b40 FUN_00553b40; 00553c74 FUN_00553c74; 00553f04 FUN_00553f04

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



//==== 00599bec  ns=Global  size=0x94
// sig: undefined FUN_00599bec(void)
// callers(0): 
// callees(3): 00553b40 FUN_00553b40; 00553c74 FUN_00553c74; 00553f04 FUN_00553f04

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



//==== 00599c80  ns=Global  size=0xe4
// sig: undefined FUN_00599c80(void)
// callers(0): 
// callees(3): 00553b40 FUN_00553b40; 00553c74 FUN_00553c74; 00553f04 FUN_00553f04

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



//==== 00599d64  ns=Global  size=0x98
// sig: undefined FUN_00599d64(void)
// callers(0): 
// callees(3): 00553b40 FUN_00553b40; 00553c74 FUN_00553c74; 00553f04 FUN_00553f04

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



//==== 00599dfc  ns=Global  size=0xec
// sig: undefined FUN_00599dfc(void)
// callers(0): 
// callees(3): 00553b40 FUN_00553b40; 00553c74 FUN_00553c74; 00553f04 FUN_00553f04

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



//==== 00599ee8  ns=Global  size=0x94
// sig: undefined FUN_00599ee8(void)
// callers(0): 
// callees(3): 00553b40 FUN_00553b40; 00553c74 FUN_00553c74; 00553f04 FUN_00553f04

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



//==== 00599f7c  ns=Global  size=0x80
// sig: undefined FUN_00599f7c(void)
// callers(0): 
// callees(3): 00553b40 FUN_00553b40; 00553c74 FUN_00553c74; 00553f04 FUN_00553f04

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



//==== 00599ffc  ns=Global  size=0x80
// sig: undefined FUN_00599ffc(void)
// callers(0): 
// callees(3): 00553b40 FUN_00553b40; 00553c74 FUN_00553c74; 00553f04 FUN_00553f04

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



//==== 0059a07c  ns=Global  size=0x7c
// sig: undefined FUN_0059a07c(void)
// callers(0): 
// callees(3): 00553b40 FUN_00553b40; 00553c74 FUN_00553c74; 00553f04 FUN_00553f04

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



//==== 0059a0f8  ns=Global  size=0x80
// sig: undefined FUN_0059a0f8(void)
// callers(0): 
// callees(3): 00553b40 FUN_00553b40; 00553c74 FUN_00553c74; 00553f04 FUN_00553f04

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



//==== 0059a178  ns=Global  size=0x1ec
// sig: undefined FUN_0059a178(void)
// callers(0): 
// callees(3): 00553b40 FUN_00553b40; 00553c74 FUN_00553c74; 00553f04 FUN_00553f04

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



//==== 0059a364  ns=Global  size=0x80
// sig: undefined FUN_0059a364(void)
// callers(0): 
// callees(3): 00553b40 FUN_00553b40; 00553c74 FUN_00553c74; 00553f04 FUN_00553f04

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



//==== 0059a3e4  ns=Global  size=0x98
// sig: undefined FUN_0059a3e4(void)
// callers(0): 
// callees(3): 00553b40 FUN_00553b40; 00553c74 FUN_00553c74; 00553f04 FUN_00553f04

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



//==== 0059a47c  ns=Global  size=0xac
// sig: undefined FUN_0059a47c(void)
// callers(0): 
// callees(3): 00553b40 FUN_00553b40; 00553c74 FUN_00553c74; 00553f04 FUN_00553f04

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



//==== 0059a528  ns=Global  size=0x58
// sig: undefined FUN_0059a528(void)
// callers(0): 
// callees(2): 00553b40 FUN_00553b40; 00553f04 FUN_00553f04

void FUN_0059a528(undefined8 param_1,int *param_2)

{
  int iVar1;
  
  iVar1 = *param_2;
  FUN_00553f04(param_1,iVar1);
  FUN_00553b40(param_1,iVar1 + 4,0x100);
  return;
}



//==== 0059a580  ns=Global  size=0xcc
// sig: undefined FUN_0059a580(void)
// callers(0): 
// callees(3): 00553b40 FUN_00553b40; 00553c74 FUN_00553c74; 00553f04 FUN_00553f04

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



//==== 0059a64c  ns=Global  size=0x68
// sig: undefined FUN_0059a64c(void)
// callers(0): 
// callees(3): 00553b40 FUN_00553b40; 00553c74 FUN_00553c74; 00553f04 FUN_00553f04

void FUN_0059a64c(undefined8 param_1,int *param_2)

{
  int iVar1;
  
  iVar1 = *param_2;
  FUN_00553b40(param_1,iVar1,0x15);
  FUN_00553c74(param_1,3);
  FUN_00553f04(param_1,iVar1 + 0x18);
  return;
}



//==== 0059a6b4  ns=Global  size=0x80
// sig: undefined FUN_0059a6b4(void)
// callers(0): 
// callees(3): 00553b40 FUN_00553b40; 00553c74 FUN_00553c74; 00553f04 FUN_00553f04

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



//==== 0059a734  ns=Global  size=0x68
// sig: undefined FUN_0059a734(void)
// callers(0): 
// callees(3): 00553b40 FUN_00553b40; 00553c74 FUN_00553c74; 00553f04 FUN_00553f04

void FUN_0059a734(undefined8 param_1,int *param_2)

{
  int iVar1;
  
  iVar1 = *param_2;
  FUN_00553b40(param_1,iVar1,0x15);
  FUN_00553c74(param_1,3);
  FUN_00553f04(param_1,iVar1 + 0x18);
  return;
}



//==== 0059a79c  ns=Global  size=0x80
// sig: undefined FUN_0059a79c(void)
// callers(0): 
// callees(3): 00553b40 FUN_00553b40; 00553c74 FUN_00553c74; 00553f04 FUN_00553f04

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



//==== 0059a81c  ns=Global  size=0x7c
// sig: undefined FUN_0059a81c(void)
// callers(0): 
// callees(3): 00553b40 FUN_00553b40; 00553c74 FUN_00553c74; 00553f04 FUN_00553f04

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



//==== 0059a898  ns=Global  size=0x20c
// sig: undefined FUN_0059a898(void)
// callers(0): 
// callees(3): 00553b40 FUN_00553b40; 00553c74 FUN_00553c74; 00553f04 FUN_00553f04

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



//==== 0059aaa4  ns=Global  size=0x7c
// sig: undefined FUN_0059aaa4(void)
// callers(0): 
// callees(3): 00553b40 FUN_00553b40; 00553c74 FUN_00553c74; 00553f04 FUN_00553f04

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



//==== 0059ab20  ns=Global  size=0x98
// sig: undefined FUN_0059ab20(void)
// callers(0): 
// callees(3): 00553b40 FUN_00553b40; 00553c74 FUN_00553c74; 00553f04 FUN_00553f04

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



//==== 0059abb8  ns=Global  size=0x7c
// sig: undefined FUN_0059abb8(void)
// callers(0): 
// callees(3): 00553b40 FUN_00553b40; 00553c74 FUN_00553c74; 00553f04 FUN_00553f04

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



//==== 0059ac34  ns=Global  size=0x68
// sig: undefined FUN_0059ac34(void)
// callers(0): 
// callees(3): 00553b40 FUN_00553b40; 00553c74 FUN_00553c74; 00553f04 FUN_00553f04

void FUN_0059ac34(undefined8 param_1,int *param_2)

{
  int iVar1;
  
  iVar1 = *param_2;
  FUN_00553b40(param_1,iVar1,0x15);
  FUN_00553c74(param_1,3);
  FUN_00553f04(param_1,iVar1 + 0x18);
  return;
}



//==== 0059ac9c  ns=Global  size=0x80
// sig: undefined FUN_0059ac9c(void)
// callers(0): 
// callees(3): 00553b40 FUN_00553b40; 00553c74 FUN_00553c74; 00553f04 FUN_00553f04

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



//==== 0059ad1c  ns=Global  size=0x68
// sig: undefined FUN_0059ad1c(void)
// callers(0): 
// callees(3): 00553b40 FUN_00553b40; 00553c74 FUN_00553c74; 00553f04 FUN_00553f04

void FUN_0059ad1c(undefined8 param_1,int *param_2)

{
  int iVar1;
  
  iVar1 = *param_2;
  FUN_00553b40(param_1,iVar1,0x15);
  FUN_00553c74(param_1,3);
  FUN_00553f04(param_1,iVar1 + 0x18);
  return;
}



//==== 0059ad84  ns=Global  size=0x68
// sig: undefined FUN_0059ad84(void)
// callers(0): 
// callees(3): 00553b40 FUN_00553b40; 00553c74 FUN_00553c74; 00553f04 FUN_00553f04

void FUN_0059ad84(undefined8 param_1,int *param_2)

{
  int iVar1;
  
  iVar1 = *param_2;
  FUN_00553b40(param_1,iVar1,0x15);
  FUN_00553c74(param_1,3);
  FUN_00553f04(param_1,iVar1 + 0x18);
  return;
}



//==== 0059adec  ns=Global  size=0x94
// sig: undefined FUN_0059adec(void)
// callers(0): 
// callees(3): 00553b40 FUN_00553b40; 00553c74 FUN_00553c74; 00553f04 FUN_00553f04

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



//==== 0059ae80  ns=Global  size=0x84
// sig: undefined FUN_0059ae80(void)
// callers(0): 
// callees(4): 00553b40 FUN_00553b40; 00553c74 FUN_00553c74; 00553f04 FUN_00553f04; 0059741c FUN_0059741c

void FUN_0059ae80(undefined8 param_1,int *param_2)

{
  int iVar1;
  undefined1 local_30 [16];
  
  iVar1 = *param_2;
  FUN_00553b40(param_1,iVar1,0x15);
  FUN_00553c74(param_1,3);
  FUN_00553f04(param_1,iVar1 + 0x18);
  FUN_0059741c(param_1,local_30);
  return;
}



//==== 0059af04  ns=Global  size=0xa8
// sig: undefined FUN_0059af04(void)
// callers(0): 
// callees(3): 00553b40 FUN_00553b40; 00553c74 FUN_00553c74; 00553f04 FUN_00553f04

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



//==== 0059afac  ns=Global  size=0x80
// sig: undefined FUN_0059afac(void)
// callers(0): 
// callees(3): 00553b40 FUN_00553b40; 00553c74 FUN_00553c74; 00553f04 FUN_00553f04

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



//==== 0059b02c  ns=Global  size=0x68
// sig: undefined FUN_0059b02c(void)
// callers(0): 
// callees(3): 00553b40 FUN_00553b40; 00553c74 FUN_00553c74; 00553f04 FUN_00553f04

void FUN_0059b02c(undefined8 param_1,int *param_2)

{
  int iVar1;
  
  iVar1 = *param_2;
  FUN_00553b40(param_1,iVar1,0x15);
  FUN_00553c74(param_1,3);
  FUN_00553f04(param_1,iVar1 + 0x18);
  return;
}



//==== 0059b094  ns=Global  size=0xbc
// sig: undefined FUN_0059b094(void)
// callers(0): 
// callees(3): 00553b40 FUN_00553b40; 00553c74 FUN_00553c74; 00553f04 FUN_00553f04

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



//==== 0059b150  ns=Global  size=0x68
// sig: undefined FUN_0059b150(void)
// callers(0): 
// callees(3): 00553b40 FUN_00553b40; 00553c74 FUN_00553c74; 00553f04 FUN_00553f04

void FUN_0059b150(undefined8 param_1,int *param_2)

{
  int iVar1;
  
  iVar1 = *param_2;
  FUN_00553b40(param_1,iVar1,0x15);
  FUN_00553c74(param_1,3);
  FUN_00553f04(param_1,iVar1 + 0x18);
  return;
}



//==== 0059b1b8  ns=Global  size=0x80
// sig: undefined FUN_0059b1b8(void)
// callers(0): 
// callees(3): 00553b40 FUN_00553b40; 00553c74 FUN_00553c74; 00553f04 FUN_00553f04

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



//==== 0059b238  ns=Global  size=0x68
// sig: undefined FUN_0059b238(void)
// callers(0): 
// callees(3): 00553b40 FUN_00553b40; 00553c74 FUN_00553c74; 00553f04 FUN_00553f04

void FUN_0059b238(undefined8 param_1,int *param_2)

{
  int iVar1;
  
  iVar1 = *param_2;
  FUN_00553b40(param_1,iVar1,0x15);
  FUN_00553c74(param_1,3);
  FUN_00553f04(param_1,iVar1 + 0x18);
  return;
}



//==== 0059b2a0  ns=Global  size=0x80
// sig: undefined FUN_0059b2a0(void)
// callers(0): 
// callees(3): 00553b40 FUN_00553b40; 00553c74 FUN_00553c74; 00553f04 FUN_00553f04

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



//==== 0059b320  ns=Global  size=0xb8
// sig: undefined FUN_0059b320(void)
// callers(0): 
// callees(3): 00553b40 FUN_00553b40; 00553c74 FUN_00553c74; 00553f04 FUN_00553f04

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



//==== 0059b3d8  ns=Global  size=0x94
// sig: undefined FUN_0059b3d8(void)
// callers(0): 
// callees(3): 00553b40 FUN_00553b40; 00553c74 FUN_00553c74; 00553f04 FUN_00553f04

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



//==== 0059b46c  ns=Global  size=0x94
// sig: undefined FUN_0059b46c(void)
// callers(0): 
// callees(3): 00553b40 FUN_00553b40; 00553c74 FUN_00553c74; 00553f04 FUN_00553f04

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



//==== 0059b500  ns=Global  size=0x94
// sig: undefined FUN_0059b500(void)
// callers(0): 
// callees(3): 00553b40 FUN_00553b40; 00553c74 FUN_00553c74; 00553f04 FUN_00553f04

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



//==== 0059b594  ns=Global  size=0x7c
// sig: undefined FUN_0059b594(void)
// callers(0): 
// callees(3): 00553b40 FUN_00553b40; 00553c74 FUN_00553c74; 00553f04 FUN_00553f04

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



//==== 0059b610  ns=Global  size=0x80
// sig: undefined FUN_0059b610(void)
// callers(0): 
// callees(3): 00553b40 FUN_00553b40; 00553c74 FUN_00553c74; 00553f04 FUN_00553f04

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



//==== 0059b690  ns=Global  size=0x68
// sig: undefined FUN_0059b690(void)
// callers(0): 
// callees(3): 00553b40 FUN_00553b40; 00553c74 FUN_00553c74; 00553f04 FUN_00553f04

void FUN_0059b690(undefined8 param_1,int *param_2)

{
  int iVar1;
  
  iVar1 = *param_2;
  FUN_00553b40(param_1,iVar1,0x15);
  FUN_00553c74(param_1,3);
  FUN_00553f04(param_1,iVar1 + 0x18);
  return;
}



//==== 0059b6f8  ns=Global  size=0xac
// sig: undefined FUN_0059b6f8(void)
// callers(0): 
// callees(3): 00553b40 FUN_00553b40; 00553c74 FUN_00553c74; 00553f04 FUN_00553f04

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



//==== 0059b7a4  ns=Global  size=0x68
// sig: undefined FUN_0059b7a4(void)
// callers(0): 
// callees(3): 00553b40 FUN_00553b40; 00553c74 FUN_00553c74; 00553f04 FUN_00553f04

void FUN_0059b7a4(undefined8 param_1,int *param_2)

{
  int iVar1;
  
  iVar1 = *param_2;
  FUN_00553b40(param_1,iVar1,0x15);
  FUN_00553c74(param_1,3);
  FUN_00553f04(param_1,iVar1 + 0x18);
  return;
}



//==== 0059b80c  ns=Global  size=0x98
// sig: undefined FUN_0059b80c(void)
// callers(0): 
// callees(3): 00553b40 FUN_00553b40; 00553c74 FUN_00553c74; 00553f04 FUN_00553f04

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



//==== 0059b8a4  ns=Global  size=0x98
// sig: undefined FUN_0059b8a4(void)
// callers(0): 
// callees(3): 00553b40 FUN_00553b40; 00553c74 FUN_00553c74; 00553f04 FUN_00553f04

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



//==== 0059b93c  ns=Global  size=0x68
// sig: undefined FUN_0059b93c(void)
// callers(0): 
// callees(3): 00553b40 FUN_00553b40; 00553c74 FUN_00553c74; 00553f04 FUN_00553f04

void FUN_0059b93c(undefined8 param_1,int *param_2)

{
  int iVar1;
  
  iVar1 = *param_2;
  FUN_00553b40(param_1,iVar1,0x15);
  FUN_00553c74(param_1,3);
  FUN_00553f04(param_1,iVar1 + 0x18);
  return;
}



//==== 0059b9a4  ns=Global  size=0x80
// sig: undefined FUN_0059b9a4(void)
// callers(0): 
// callees(3): 00553b40 FUN_00553b40; 00553c74 FUN_00553c74; 00553f04 FUN_00553f04

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



//==== 0059ba24  ns=Global  size=0x7c
// sig: undefined FUN_0059ba24(void)
// callers(0): 
// callees(3): 00553b40 FUN_00553b40; 00553c74 FUN_00553c74; 00553f04 FUN_00553f04

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



//==== 0059baa0  ns=Global  size=0x7c
// sig: undefined FUN_0059baa0(void)
// callers(0): 
// callees(3): 00553b40 FUN_00553b40; 00553c74 FUN_00553c74; 00553f04 FUN_00553f04

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



//==== 0059bb1c  ns=Global  size=0xb0
// sig: undefined FUN_0059bb1c(void)
// callers(0): 
// callees(3): 00553b40 FUN_00553b40; 00553c74 FUN_00553c74; 00553f04 FUN_00553f04

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



//==== 0059bbcc  ns=Global  size=0x7c
// sig: undefined FUN_0059bbcc(void)
// callers(0): 
// callees(3): 00553b40 FUN_00553b40; 00553c74 FUN_00553c74; 00553f04 FUN_00553f04

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



//==== 0059bc48  ns=Global  size=0x98
// sig: undefined FUN_0059bc48(void)
// callers(3): 0059c2c0 FUN_0059c2c0; 0059c630 FUN_0059c630; 0059c9bc FUN_0059c9bc
// callees(2): 00553b40 FUN_00553b40; 00553f04 FUN_00553f04

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



//==== 0059bce0  ns=Global  size=0xcc
// sig: undefined FUN_0059bce0(void)
// callers(0): 
// callees(4): 00553b40 FUN_00553b40; 00553c74 FUN_00553c74; 00553f04 FUN_00553f04; 00554290 FUN_00554290

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



//==== 0059bdac  ns=Global  size=0xa4
// sig: undefined FUN_0059bdac(void)
// callers(0): 
// callees(4): 00553b40 FUN_00553b40; 00553c74 FUN_00553c74; 00553f04 FUN_00553f04; 00554290 FUN_00554290

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



//==== 0059be50  ns=Global  size=0xf8
// sig: undefined FUN_0059be50(void)
// callers(0): 
// callees(4): 00553b40 FUN_00553b40; 00553c74 FUN_00553c74; 00553f04 FUN_00553f04; 00554290 FUN_00554290

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



//==== 0059bf48  ns=Global  size=0xb4
// sig: undefined FUN_0059bf48(void)
// callers(0): 
// callees(4): 00553b40 FUN_00553b40; 00553c74 FUN_00553c74; 00553f04 FUN_00553f04; 00554290 FUN_00554290

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



//==== 0059bffc  ns=Global  size=0x144
// sig: undefined FUN_0059bffc(void)
// callers(0): 
// callees(4): 00553b40 FUN_00553b40; 00553c74 FUN_00553c74; 00553f04 FUN_00553f04; 00554290 FUN_00554290

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



//==== 0059c140  ns=Global  size=0xc8
// sig: undefined FUN_0059c140(void)
// callers(0): 
// callees(4): 00553b40 FUN_00553b40; 00553c74 FUN_00553c74; 00553f04 FUN_00553f04; 00554290 FUN_00554290

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



//==== 0059c208  ns=Global  size=0xb8
// sig: undefined FUN_0059c208(void)
// callers(0): 
// callees(4): 00553b40 FUN_00553b40; 00553c74 FUN_00553c74; 00553f04 FUN_00553f04; 00554290 FUN_00554290

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



//==== 0059c2c0  ns=Global  size=0xd4
// sig: undefined FUN_0059c2c0(void)
// callers(0): 
// callees(5): 00553b40 FUN_00553b40; 00553c74 FUN_00553c74; 00553f04 FUN_00553f04; 00554290 FUN_00554290; 0059bc48 FUN_0059bc48

void FUN_0059c2c0(undefined8 param_1,int *param_2)

{
  int iVar1;
  undefined1 local_30 [16];
  
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



//==== 0059c394  ns=Global  size=0x130
// sig: undefined FUN_0059c394(void)
// callers(0): 
// callees(4): 00553b40 FUN_00553b40; 00553c74 FUN_00553c74; 00553f04 FUN_00553f04; 00554290 FUN_00554290

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



//==== 0059c4c4  ns=Global  size=0xb4
// sig: undefined FUN_0059c4c4(void)
// callers(0): 
// callees(4): 00553b40 FUN_00553b40; 00553c74 FUN_00553c74; 00553f04 FUN_00553f04; 00554290 FUN_00554290

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



//==== 0059c578  ns=Global  size=0xb8
// sig: undefined FUN_0059c578(void)
// callers(0): 
// callees(4): 00553b40 FUN_00553b40; 00553c74 FUN_00553c74; 00553f04 FUN_00553f04; 00554290 FUN_00554290

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



//==== 0059c630  ns=Global  size=0xec
// sig: undefined FUN_0059c630(void)
// callers(0): 
// callees(5): 00553b40 FUN_00553b40; 00553c74 FUN_00553c74; 00553f04 FUN_00553f04; 00554290 FUN_00554290; 0059bc48 FUN_0059bc48

void FUN_0059c630(undefined8 param_1,int *param_2)

{
  int iVar1;
  undefined1 local_30 [16];
  
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



//==== 0059c71c  ns=Global  size=0x108
// sig: undefined FUN_0059c71c(void)
// callers(0): 
// callees(4): 00553b40 FUN_00553b40; 00553c74 FUN_00553c74; 00553f04 FUN_00553f04; 00554290 FUN_00554290

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



//==== 0059c824  ns=Global  size=0xcc
// sig: undefined FUN_0059c824(void)
// callers(0): 
// callees(4): 00553b40 FUN_00553b40; 00553c74 FUN_00553c74; 00553f04 FUN_00553f04; 00554290 FUN_00554290

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



//==== 0059c8f0  ns=Global  size=0xcc
// sig: undefined FUN_0059c8f0(void)
// callers(0): 
// callees(4): 00553b40 FUN_00553b40; 00553c74 FUN_00553c74; 00553f04 FUN_00553f04; 00554290 FUN_00554290

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



//==== 0059c9bc  ns=Global  size=0xd4
// sig: undefined FUN_0059c9bc(void)
// callers(0): 
// callees(5): 00553b40 FUN_00553b40; 00553c74 FUN_00553c74; 00553f04 FUN_00553f04; 00554290 FUN_00554290; 0059bc48 FUN_0059bc48

void FUN_0059c9bc(undefined8 param_1,int *param_2)

{
  int iVar1;
  undefined1 local_30 [16];
  
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



//==== 0059ca90  ns=Global  size=0xcc
// sig: undefined FUN_0059ca90(void)
// callers(0): 
// callees(4): 00553b40 FUN_00553b40; 00553c74 FUN_00553c74; 00553f04 FUN_00553f04; 00554290 FUN_00554290

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



//==== 0059cb5c  ns=Global  size=0xc8
// sig: undefined FUN_0059cb5c(void)
// callers(0): 
// callees(4): 00553b40 FUN_00553b40; 00553c74 FUN_00553c74; 00553f04 FUN_00553f04; 00554290 FUN_00554290

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



//==== 0059cc24  ns=Global  size=0xe4
// sig: undefined FUN_0059cc24(void)
// callers(0): 
// callees(4): 00553b40 FUN_00553b40; 00553c74 FUN_00553c74; 00553f04 FUN_00553f04; 00554290 FUN_00554290

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



//==== 0059cd08  ns=Global  size=0xf4
// sig: undefined FUN_0059cd08(void)
// callers(0): 
// callees(4): 00553b40 FUN_00553b40; 00553c74 FUN_00553c74; 00553f04 FUN_00553f04; 00554290 FUN_00554290

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



//==== 0059cdfc  ns=Global  size=0x12c
// sig: undefined FUN_0059cdfc(void)
// callers(0): 
// callees(4): 00553b40 FUN_00553b40; 00553c74 FUN_00553c74; 00553f04 FUN_00553f04; 00554290 FUN_00554290

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



//==== 0059cf28  ns=Global  size=0x11c
// sig: undefined FUN_0059cf28(void)
// callers(0): 
// callees(4): 00553b40 FUN_00553b40; 00553c74 FUN_00553c74; 00553f04 FUN_00553f04; 00554290 FUN_00554290

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



//==== 0059d044  ns=Global  size=0xac
// sig: undefined FUN_0059d044(void)
// callers(0): 
// callees(4): 00553b40 FUN_00553b40; 00553c74 FUN_00553c74; 00553f04 FUN_00553f04; 00554290 FUN_00554290

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



//==== 0059d0f0  ns=Global  size=0x11c
// sig: undefined FUN_0059d0f0(void)
// callers(0): 
// callees(4): 00553b40 FUN_00553b40; 00553c74 FUN_00553c74; 00553f04 FUN_00553f04; 00554290 FUN_00554290

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



//==== 0059d20c  ns=Global  size=0xcc
// sig: undefined FUN_0059d20c(void)
// callers(0): 
// callees(4): 00553b40 FUN_00553b40; 00553c74 FUN_00553c74; 00553f04 FUN_00553f04; 00554290 FUN_00554290

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



//==== 0059d2d8  ns=Global  size=0xa8
// sig: undefined FUN_0059d2d8(void)
// callers(0): 
// callees(4): 00553b40 FUN_00553b40; 00553c74 FUN_00553c74; 00553f04 FUN_00553f04; 00554290 FUN_00554290

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



//==== 0059d380  ns=Global  size=0x110
// sig: undefined FUN_0059d380(void)
// callers(19): 0059d490 FUN_0059d490; 0059d4f0 FUN_0059d4f0; 0059d57c FUN_0059d57c; 0059d608 FUN_0059d608; 0059d668 FUN_0059d668; 0059d6dc FUN_0059d6dc; 0059d73c FUN_0059d73c; 0059d79c FUN_0059d79c; 0059d7fc FUN_0059d7fc; 0059d85c FUN_0059d85c; 0059dbf4 FUN_0059dbf4; 0059dc78 FUN_0059dc78; 0059dd28 FUN_0059dd28; 0059ddac FUN_0059ddac; 0059e0fc FUN_0059e0fc; 0059e2f4 FUN_0059e2f4; 0059e378 FUN_0059e378; 0059f8fc FUN_0059f8fc; 0059f9c0 FUN_0059f9c0
// callees(3): 00553b40 FUN_00553b40; 00553f04 FUN_00553f04; 00554160 FUN_00554160

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



//==== 0059d490  ns=Global  size=0x60
// sig: undefined FUN_0059d490(void)
// callers(0): 
// callees(2): 00553b40 FUN_00553b40; 0059d380 FUN_0059d380

void FUN_0059d490(undefined8 param_1,int *param_2)

{
  int iVar1;
  undefined1 local_30 [16];
  
  iVar1 = *param_2;
  FUN_0059d380(param_1,local_30);
  FUN_00553b40(param_1,iVar1 + 0xac,0x15);
  return;
}



//==== 0059d4f0  ns=Global  size=0x8c
// sig: undefined FUN_0059d4f0(void)
// callers(0): 
// callees(3): 00553b40 FUN_00553b40; 00596e34 FUN_00596e34; 0059d380 FUN_0059d380

void FUN_0059d4f0(undefined8 param_1,int *param_2)

{
  int iVar1;
  undefined1 local_40 [24];
  
  iVar1 = *param_2;
  FUN_0059d380(param_1,local_40);
  FUN_00596e34(param_1,local_40);
  FUN_00553b40(param_1,iVar1 + 0x1e4,0x15);
  return;
}



//==== 0059d57c  ns=Global  size=0x8c
// sig: undefined FUN_0059d57c(void)
// callers(0): 
// callees(3): 00553b40 FUN_00553b40; 00596e34 FUN_00596e34; 0059d380 FUN_0059d380

void FUN_0059d57c(undefined8 param_1,int *param_2)

{
  int iVar1;
  undefined1 local_40 [24];
  
  iVar1 = *param_2;
  FUN_0059d380(param_1,local_40);
  FUN_00596e34(param_1,local_40);
  FUN_00553b40(param_1,iVar1 + 0x1e4,0x15);
  return;
}



//==== 0059d608  ns=Global  size=0x60
// sig: undefined FUN_0059d608(void)
// callers(0): 
// callees(2): 00553b40 FUN_00553b40; 0059d380 FUN_0059d380

void FUN_0059d608(undefined8 param_1,int *param_2)

{
  int iVar1;
  undefined1 local_30 [16];
  
  iVar1 = *param_2;
  FUN_0059d380(param_1,local_30);
  FUN_00553b40(param_1,iVar1 + 0xac,0x15);
  return;
}



//==== 0059d668  ns=Global  size=0x74
// sig: undefined FUN_0059d668(void)
// callers(0): 
// callees(2): 00597960 FUN_00597960; 0059d380 FUN_0059d380

void FUN_0059d668(undefined8 param_1)

{
  undefined1 local_40 [24];
  
  FUN_0059d380(param_1,local_40);
  FUN_00597960(param_1,local_40);
  return;
}



//==== 0059d6dc  ns=Global  size=0x60
// sig: undefined FUN_0059d6dc(void)
// callers(0): 
// callees(2): 00553b40 FUN_00553b40; 0059d380 FUN_0059d380

void FUN_0059d6dc(undefined8 param_1,int *param_2)

{
  int iVar1;
  undefined1 local_30 [16];
  
  iVar1 = *param_2;
  FUN_0059d380(param_1,local_30);
  FUN_00553b40(param_1,iVar1 + 0xac,0x15);
  return;
}



//==== 0059d73c  ns=Global  size=0x60
// sig: undefined FUN_0059d73c(void)
// callers(0): 
// callees(2): 00553b40 FUN_00553b40; 0059d380 FUN_0059d380

void FUN_0059d73c(undefined8 param_1,int *param_2)

{
  int iVar1;
  undefined1 local_30 [16];
  
  iVar1 = *param_2;
  FUN_0059d380(param_1,local_30);
  FUN_00553b40(param_1,iVar1 + 0xac,0x15);
  return;
}



//==== 0059d79c  ns=Global  size=0x60
// sig: undefined FUN_0059d79c(void)
// callers(0): 
// callees(2): 00553b40 FUN_00553b40; 0059d380 FUN_0059d380

void FUN_0059d79c(undefined8 param_1,int *param_2)

{
  int iVar1;
  undefined1 local_30 [16];
  
  iVar1 = *param_2;
  FUN_0059d380(param_1,local_30);
  FUN_00553b40(param_1,iVar1 + 0xac,0x15);
  return;
}



//==== 0059d7fc  ns=Global  size=0x60
// sig: undefined FUN_0059d7fc(void)
// callers(0): 
// callees(2): 00553b40 FUN_00553b40; 0059d380 FUN_0059d380

void FUN_0059d7fc(undefined8 param_1,int *param_2)

{
  int iVar1;
  undefined1 local_30 [16];
  
  iVar1 = *param_2;
  FUN_0059d380(param_1,local_30);
  FUN_00553b40(param_1,iVar1 + 0xac,0x15);
  return;
}



//==== 0059d85c  ns=Global  size=0x8c
// sig: undefined FUN_0059d85c(void)
// callers(0): 
// callees(3): 00553b40 FUN_00553b40; 00597960 FUN_00597960; 0059d380 FUN_0059d380

void FUN_0059d85c(undefined8 param_1,int *param_2)

{
  int iVar1;
  undefined1 local_40 [24];
  
  iVar1 = *param_2;
  FUN_0059d380(param_1,local_40);
  FUN_00597960(param_1,local_40);
  FUN_00553b40(param_1,iVar1 + 0x1c0,0x15);
  return;
}



//==== 0059d8e8  ns=Global  size=0x94
// sig: undefined FUN_0059d8e8(void)
// callers(0): 
// callees(3): 00553b40 FUN_00553b40; 00553c74 FUN_00553c74; 00554160 FUN_00554160

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



//==== 0059d97c  ns=Global  size=0x120
// sig: undefined FUN_0059d97c(void)
// callers(0): 
// callees(5): 00553b40 FUN_00553b40; 00553c74 FUN_00553c74; 00553f04 FUN_00553f04; 0055b3d0 FUN_0055b3d0; 0055b450 FUN_0055b450

void FUN_0059d97c(undefined8 param_1,int *param_2)

{
  int iVar1;
  undefined1 local_40 [24];
  
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



//==== 0059da9c  ns=Global  size=0x88
// sig: undefined FUN_0059da9c(void)
// callers(0): 
// callees(4): 00553b40 FUN_00553b40; 00553c74 FUN_00553c74; 00553f04 FUN_00553f04; 0055bbe8 FUN_0055bbe8

void FUN_0059da9c(undefined8 param_1,int *param_2)

{
  int iVar1;
  undefined1 local_30 [16];
  
  iVar1 = *param_2;
  FUN_00553b40(param_1,iVar1,0x15);
  FUN_00553c74(param_1,3);
  FUN_00553f04(param_1,iVar1 + 0x18);
  FUN_0055bbe8(param_1,local_30);
  return;
}



//==== 0059db24  ns=Global  size=0x68
// sig: undefined FUN_0059db24(void)
// callers(0): 
// callees(1): 00553f04 FUN_00553f04

void FUN_0059db24(undefined8 param_1,int *param_2)

{
  int iVar1;
  
  iVar1 = *param_2;
  FUN_00553f04(param_1,iVar1);
  FUN_00553f04(param_1,iVar1 + 4);
  FUN_00553f04(param_1,iVar1 + 8);
  return;
}



//==== 0059db8c  ns=Global  size=0x68
// sig: undefined FUN_0059db8c(void)
// callers(0): 
// callees(3): 00553b40 FUN_00553b40; 00553c74 FUN_00553c74; 00553f04 FUN_00553f04

void FUN_0059db8c(undefined8 param_1,int *param_2)

{
  int iVar1;
  
  iVar1 = *param_2;
  FUN_00553f04(param_1,iVar1);
  FUN_00553b40(param_1,iVar1 + 4,0x15);
  FUN_00553c74(param_1,3);
  return;
}



//==== 0059dbf4  ns=Global  size=0x84
// sig: undefined FUN_0059dbf4(void)
// callers(0): 
// callees(4): 00553b40 FUN_00553b40; 00553c74 FUN_00553c74; 00553f04 FUN_00553f04; 0059d380 FUN_0059d380

void FUN_0059dbf4(undefined8 param_1,int *param_2)

{
  int iVar1;
  undefined1 local_30 [16];
  
  iVar1 = *param_2;
  FUN_0059d380(param_1,local_30);
  FUN_00553f04(param_1,iVar1 + 0xac);
  FUN_00553b40(param_1,iVar1 + 0xb0,0x15);
  FUN_00553c74(param_1,3);
  return;
}



//==== 0059dc78  ns=Global  size=0xb0
// sig: undefined FUN_0059dc78(void)
// callers(0): 
// callees(5): 00553b40 FUN_00553b40; 00553c74 FUN_00553c74; 00553f04 FUN_00553f04; 00597960 FUN_00597960; 0059d380 FUN_0059d380

void FUN_0059dc78(undefined8 param_1,int *param_2)

{
  int iVar1;
  undefined1 local_40 [24];
  
  iVar1 = *param_2;
  FUN_0059d380(param_1,local_40);
  FUN_00597960(param_1,local_40);
  FUN_00553f04(param_1,iVar1 + 0x1c0);
  FUN_00553b40(param_1,iVar1 + 0x1c4,0x15);
  FUN_00553c74(param_1,3);
  return;
}



//==== 0059dd28  ns=Global  size=0x84
// sig: undefined FUN_0059dd28(void)
// callers(0): 
// callees(4): 00553b40 FUN_00553b40; 00553c74 FUN_00553c74; 00553f04 FUN_00553f04; 0059d380 FUN_0059d380

void FUN_0059dd28(undefined8 param_1,int *param_2)

{
  int iVar1;
  undefined1 local_30 [16];
  
  iVar1 = *param_2;
  FUN_0059d380(param_1,local_30);
  FUN_00553f04(param_1,iVar1 + 0xac);
  FUN_00553b40(param_1,iVar1 + 0xb0,0x15);
  FUN_00553c74(param_1,3);
  return;
}



//==== 0059ddac  ns=Global  size=0x98
// sig: undefined FUN_0059ddac(void)
// callers(0): 
// callees(5): 00553b40 FUN_00553b40; 00553c74 FUN_00553c74; 00553f04 FUN_00553f04; 00554290 FUN_00554290; 0059d380 FUN_0059d380

void FUN_0059ddac(undefined8 param_1,int *param_2)

{
  int iVar1;
  undefined1 local_30 [16];
  
  iVar1 = *param_2;
  FUN_0059d380(param_1,local_30);
  FUN_00553f04(param_1,iVar1 + 0xac);
  FUN_00553b40(param_1,iVar1 + 0xb0,0x15);
  FUN_00554290(param_1,iVar1 + 0xc5);
  FUN_00553c74(param_1,2);
  return;
}



//==== 0059de44  ns=Global  size=0xb0
// sig: undefined FUN_0059de44(void)
// callers(0): 
// callees(3): 00553f04 FUN_00553f04; 00596e34 FUN_00596e34; 0059788c FUN_0059788c

void FUN_0059de44(undefined8 param_1,int *param_2)

{
  int iVar1;
  undefined1 local_40 [24];
  
  iVar1 = *param_2;
  FUN_0059788c(param_1,local_40);
  FUN_00596e34(param_1,local_40);
  FUN_00553f04(param_1,iVar1 + 0x1e8);
  FUN_00553f04(param_1,iVar1 + 0x1ec);
  FUN_00553f04(param_1,iVar1 + 0x1f0);
  return;
}



//==== 0059def4  ns=Global  size=0x68
// sig: undefined FUN_0059def4(void)
// callers(0): 
// callees(3): 00553b40 FUN_00553b40; 00553c74 FUN_00553c74; 00553f04 FUN_00553f04

void FUN_0059def4(undefined8 param_1,int *param_2)

{
  int iVar1;
  
  iVar1 = *param_2;
  FUN_00553f04(param_1,iVar1);
  FUN_00553b40(param_1,iVar1 + 4,0x15);
  FUN_00553c74(param_1,3);
  return;
}



//==== 0059df5c  ns=Global  size=0xd0
// sig: undefined FUN_0059df5c(void)
// callers(0): 
// callees(3): 00553b40 FUN_00553b40; 00553c74 FUN_00553c74; 00553f04 FUN_00553f04

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



//==== 0059e02c  ns=Global  size=0xd0
// sig: undefined FUN_0059e02c(void)
// callers(0): 
// callees(3): 00553b40 FUN_00553b40; 00553c74 FUN_00553c74; 00553f04 FUN_00553f04

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



//==== 0059e0fc  ns=Global  size=0x84
// sig: undefined FUN_0059e0fc(void)
// callers(0): 
// callees(4): 00553b40 FUN_00553b40; 00553c74 FUN_00553c74; 00553f04 FUN_00553f04; 0059d380 FUN_0059d380

void FUN_0059e0fc(undefined8 param_1,int *param_2)

{
  int iVar1;
  undefined1 local_30 [16];
  
  iVar1 = *param_2;
  FUN_0059d380(param_1,local_30);
  FUN_00553f04(param_1,iVar1 + 0xac);
  FUN_00553b40(param_1,iVar1 + 0xb0,0x15);
  FUN_00553c74(param_1,3);
  return;
}



//==== 0059e180  ns=Global  size=0xd0
// sig: undefined FUN_0059e180(void)
// callers(0): 
// callees(3): 00553b40 FUN_00553b40; 00553c74 FUN_00553c74; 00553f04 FUN_00553f04

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



//==== 0059e250  ns=Global  size=0xa4
// sig: undefined FUN_0059e250(void)
// callers(0): 
// callees(3): 00553b40 FUN_00553b40; 00553c74 FUN_00553c74; 00553f04 FUN_00553f04

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



//==== 0059e2f4  ns=Global  size=0x84
// sig: undefined FUN_0059e2f4(void)
// callers(0): 
// callees(4): 00553b40 FUN_00553b40; 00553c74 FUN_00553c74; 00553f04 FUN_00553f04; 0059d380 FUN_0059d380

void FUN_0059e2f4(undefined8 param_1,int *param_2)

{
  int iVar1;
  undefined1 local_30 [16];
  
  iVar1 = *param_2;
  FUN_0059d380(param_1,local_30);
  FUN_00553c74(param_1,4);
  FUN_00553f04(param_1,iVar1 + 0xb0);
  FUN_00553b40(param_1,iVar1 + 0xb4,0x15);
  return;
}



//==== 0059e378  ns=Global  size=0x84
// sig: undefined FUN_0059e378(void)
// callers(0): 
// callees(4): 00553b40 FUN_00553b40; 00553c74 FUN_00553c74; 00553f04 FUN_00553f04; 0059d380 FUN_0059d380

void FUN_0059e378(undefined8 param_1,int *param_2)

{
  int iVar1;
  undefined1 local_30 [16];
  
  iVar1 = *param_2;
  FUN_0059d380(param_1,local_30);
  FUN_00553f04(param_1,iVar1 + 0xac);
  FUN_00553b40(param_1,iVar1 + 0xb0,0x15);
  FUN_00553c74(param_1,3);
  return;
}



//==== 0059e3fc  ns=Global  size=0xc0
// sig: undefined FUN_0059e3fc(void)
// callers(0): 
// callees(3): 00553b40 FUN_00553b40; 00553c74 FUN_00553c74; 00553f04 FUN_00553f04

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



//==== 0059e4bc  ns=Global  size=0x208
// sig: undefined FUN_0059e4bc(void)
// callers(0): 
// callees(3): 00553b40 FUN_00553b40; 00553f04 FUN_00553f04; 00554290 FUN_00554290

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



//==== 0059e6c4  ns=Global  size=0xe0
// sig: undefined FUN_0059e6c4(void)
// callers(0): 
// callees(3): 00553b40 FUN_00553b40; 00553c74 FUN_00553c74; 00553f04 FUN_00553f04

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



//==== 0059e7a4  ns=Global  size=0xe0
// sig: undefined FUN_0059e7a4(void)
// callers(0): 
// callees(3): 00553b40 FUN_00553b40; 00553c74 FUN_00553c74; 00553f04 FUN_00553f04

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



//==== 0059e884  ns=Global  size=0xcc
// sig: undefined FUN_0059e884(void)
// callers(0): 
// callees(3): 00553b40 FUN_00553b40; 00553c74 FUN_00553c74; 00553f04 FUN_00553f04

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



//==== 0059e950  ns=Global  size=0x7c
// sig: undefined FUN_0059e950(void)
// callers(0): 
// callees(3): 00553b40 FUN_00553b40; 00553c74 FUN_00553c74; 00553f04 FUN_00553f04

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



//==== 0059e9cc  ns=Global  size=0x90
// sig: undefined FUN_0059e9cc(void)
// callers(0): 
// callees(3): 00553b40 FUN_00553b40; 00553c74 FUN_00553c74; 00553f04 FUN_00553f04

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



//==== 0059ea5c  ns=Global  size=0x7c
// sig: undefined FUN_0059ea5c(void)
// callers(0): 
// callees(3): 00553b40 FUN_00553b40; 00553c74 FUN_00553c74; 00553f04 FUN_00553f04

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



//==== 0059ead8  ns=Global  size=0x7c
// sig: undefined FUN_0059ead8(void)
// callers(0): 
// callees(3): 00553b40 FUN_00553b40; 00553c74 FUN_00553c74; 00553f04 FUN_00553f04

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



//==== 0059eb54  ns=Global  size=0xf0
// sig: undefined FUN_0059eb54(void)
// callers(0): 
// callees(4): 00553b40 FUN_00553b40; 00553c74 FUN_00553c74; 00553f04 FUN_00553f04; 00554290 FUN_00554290

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



//==== 0059ec44  ns=Global  size=0xc8
// sig: undefined FUN_0059ec44(void)
// callers(0): 
// callees(4): 00553b40 FUN_00553b40; 00553c74 FUN_00553c74; 00553f04 FUN_00553f04; 00554290 FUN_00554290

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



//==== 0059ed0c  ns=Global  size=0x128
// sig: undefined FUN_0059ed0c(void)
// callers(0): 
// callees(3): 00553b40 FUN_00553b40; 00553c74 FUN_00553c74; 00553f04 FUN_00553f04

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



//==== 0059ee34  ns=Global  size=0x7c
// sig: undefined FUN_0059ee34(void)
// callers(0): 
// callees(3): 00553b40 FUN_00553b40; 00553c74 FUN_00553c74; 00553f04 FUN_00553f04

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



//==== 0059eeb0  ns=Global  size=0x7c
// sig: undefined FUN_0059eeb0(void)
// callers(0): 
// callees(3): 00553b40 FUN_00553b40; 00553c74 FUN_00553c74; 00553f04 FUN_00553f04

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



//==== 0059ef2c  ns=Global  size=0x7c
// sig: undefined FUN_0059ef2c(void)
// callers(0): 
// callees(3): 00553b40 FUN_00553b40; 00553c74 FUN_00553c74; 00553f04 FUN_00553f04

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



//==== 0059efa8  ns=Global  size=0x240
// sig: undefined FUN_0059efa8(void)
// callers(0): 
// callees(3): 00553b40 FUN_00553b40; 00553c74 FUN_00553c74; 00553f04 FUN_00553f04

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



//==== 0059f1e8  ns=Global  size=0x15c
// sig: undefined FUN_0059f1e8(void)
// callers(0): 
// callees(3): 00553b40 FUN_00553b40; 00553c74 FUN_00553c74; 00553f04 FUN_00553f04

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



//==== 0059f344  ns=Global  size=0x17c
// sig: undefined FUN_0059f344(void)
// callers(0): 
// callees(5): 00553b40 FUN_00553b40; 00553c74 FUN_00553c74; 00553f04 FUN_00553f04; 00554160 FUN_00554160; 00554290 FUN_00554290

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



//==== 0059f4c0  ns=Global  size=0x7c
// sig: undefined FUN_0059f4c0(void)
// callers(0): 
// callees(3): 00553b40 FUN_00553b40; 00553c74 FUN_00553c74; 00554160 FUN_00554160

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



//==== 0059f53c  ns=Global  size=0x68
// sig: undefined FUN_0059f53c(void)
// callers(0): 
// callees(3): 00553b40 FUN_00553b40; 00553c74 FUN_00553c74; 00554160 FUN_00554160

void FUN_0059f53c(undefined8 param_1,int *param_2)

{
  int iVar1;
  
  iVar1 = *param_2;
  FUN_00553b40(param_1,iVar1,0x15);
  FUN_00553c74(param_1,1);
  FUN_00554160(param_1,iVar1 + 0x16);
  return;
}



//==== 0059f5a4  ns=Global  size=0x234
// sig: undefined FUN_0059f5a4(void)
// callers(0): 
// callees(5): 00553b40 FUN_00553b40; 00553c74 FUN_00553c74; 00553f04 FUN_00553f04; 00554160 FUN_00554160; 00554290 FUN_00554290

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



//==== 0059f7d8  ns=Global  size=0x7c
// sig: undefined FUN_0059f7d8(void)
// callers(0): 
// callees(3): 00553b40 FUN_00553b40; 00553c74 FUN_00553c74; 00554160 FUN_00554160

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



//==== 0059f854  ns=Global  size=0xa8
// sig: undefined FUN_0059f854(void)
// callers(0): 
// callees(4): 00553b40 FUN_00553b40; 00553c74 FUN_00553c74; 00553f04 FUN_00553f04; 00554160 FUN_00554160

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



//==== 0059f8fc  ns=Global  size=0xc4
// sig: undefined FUN_0059f8fc(void)
// callers(0): 
// callees(6): 00553b40 FUN_00553b40; 00553c74 FUN_00553c74; 00553f04 FUN_00553f04; 00554290 FUN_00554290; 00596e34 FUN_00596e34; 0059d380 FUN_0059d380

void FUN_0059f8fc(undefined8 param_1,int *param_2)

{
  int iVar1;
  undefined1 local_40 [24];
  
  iVar1 = *param_2;
  FUN_0059d380(param_1,local_40);
  FUN_00596e34(param_1,local_40);
  FUN_00553f04(param_1,iVar1 + 0x1e4);
  FUN_00553b40(param_1,iVar1 + 0x1e8,0x15);
  FUN_00554290(param_1,iVar1 + 0x1fd);
  FUN_00553c74(param_1,2);
  return;
}



//==== 0059f9c0  ns=Global  size=0xb0
// sig: undefined FUN_0059f9c0(void)
// callers(0): 
// callees(5): 00553b40 FUN_00553b40; 00553c74 FUN_00553c74; 00553f04 FUN_00553f04; 00554290 FUN_00554290; 0059d380 FUN_0059d380

void FUN_0059f9c0(undefined8 param_1,int *param_2)

{
  int iVar1;
  undefined1 local_30 [16];
  
  iVar1 = *param_2;
  FUN_0059d380(param_1,local_30);
  FUN_00553b40(param_1,iVar1 + 0xac,0x100);
  FUN_00553f04(param_1,iVar1 + 0x1ac);
  FUN_00553b40(param_1,iVar1 + 0x1b0,0x15);
  FUN_00554290(param_1,iVar1 + 0x1c5);
  FUN_00553c74(param_1,2);
  return;
}



//==== 0059fa70  ns=Global  size=0x1d8
// sig: undefined FUN_0059fa70(void)
// callers(2): 0058c720 FUN_0058c720; 0058c90c FUN_0058c90c
// callees(2): 005a0648 FUN_005a0648; 005a06cc FUN_005a06cc

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



//==== 0059fc48  ns=Global  size=0xa8
// sig: undefined FUN_0059fc48(void)
// callers(1): 0058d4c8 FUN_0058d4c8
// callees(2): 005a0ab8 FUN_005a0ab8; 005a0b48 FUN_005a0b48

int FUN_0059fc48(undefined8 param_1,int param_2)

{
  int iVar1;
  undefined1 local_20 [16];
  
  iVar1 = FUN_005a0ab8(param_1,8);
  if (iVar1 != -1) {
    iVar1 = FUN_005a0b48(param_1,iVar1,9,0x18,local_20);
    if (iVar1 != -1) {
      iVar1 = FUN_005a0b48(param_1,iVar1,2,0x1c,*(undefined4 *)(param_2 + 4));
    }
  }
  return iVar1;
}



//==== 0059fcf0  ns=Global  size=0xe4
// sig: undefined FUN_0059fcf0(void)
// callers(2): 0058c274 FUN_0058c274; 0058cab0 FUN_0058cab0
// callees(2): 005a0ab8 FUN_005a0ab8; 005a0b48 FUN_005a0b48

int FUN_0059fcf0(undefined8 param_1,undefined4 *param_2)

{
  int iVar1;
  undefined1 local_40 [4];
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



//==== 0059fdd4  ns=Global  size=0x360
// sig: undefined FUN_0059fdd4(void)
// callers(2): 0058cab0 FUN_0058cab0; 0058d010 FUN_0058d010
// callees(2): 005a0ab8 FUN_005a0ab8; 005a0b48 FUN_005a0b48

int FUN_0059fdd4(undefined8 param_1,undefined4 *param_2)

{
  uint uVar1;
  int iVar2;
  undefined1 local_50 [4];
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



