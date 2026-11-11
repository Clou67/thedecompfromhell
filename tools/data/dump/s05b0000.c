//==== 005b00fc  ns=Global  size=0x120
// sig: undefined FUN_005b00fc(void)
// callers(0): 
// callees(2): 005bd46c FUN_005bd46c; 005bd668 FUN_005bd668

uint FUN_005b00fc(int param_1,undefined4 param_2,int param_3)

{
  uint uVar1;
  int iStack00000030;
  undefined4 uStack00000038;
  int iStack00000040;
  uint local_30;
  undefined1 auStack_2c [36];
  
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



//==== 005b021c  ns=Global  size=0xf8
// sig: undefined FUN_005b021c(void)
// callers(0): 
// callees(1): 005b65d4 FUN_005b65d4

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



//==== 005b0314  ns=Global  size=0x138
// sig: undefined FUN_005b0314(void)
// callers(0): 
// callees(3): 00550e20 FUN_00550e20; 005b24b8 FUN_005b24b8; 005b65d4 FUN_005b65d4

uint FUN_005b0314(int param_1,undefined4 param_2,int param_3)

{
  int iVar1;
  uint uVar2;
  int iStack00000030;
  undefined4 uStack00000038;
  int iStack00000040;
  uint local_a0;
  undefined1 auStack_9c [64];
  undefined1 auStack_5c [84];
  
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



//==== 005b044c  ns=Global  size=0x2f4
// sig: undefined FUN_005b044c(void)
// callers(4): 005ade10 FUN_005ade10; 005ae7a8 FUN_005ae7a8; 005aec68 FUN_005aec68; 005aed70 FUN_005aed70
// callees(3): 00550e20 FUN_00550e20; 005ad0d8 FUN_005ad0d8; 005b24b8 FUN_005b24b8

undefined * FUN_005b044c(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iStack00000030;
  undefined1 auStack_a0 [64];
  undefined1 auStack_60 [64];
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



//==== 005b0740  ns=Global  size=0x8a8
// sig: undefined FUN_005b0740(void)
// callers(0): 
// callees(12): 00550e20 FUN_00550e20; 00550e68 FUN_00550e68; 005ad0d8 FUN_005ad0d8; 005ad440 FUN_005ad440; 005ad66c FUN_005ad66c; 005b24b8 FUN_005b24b8; 005b5fd0 FUN_005b5fd0; 005b60b0 FUN_005b60b0; 005b65d4 FUN_005b65d4; 005bd288 FUN_005bd288; 005bd46c FUN_005bd46c; 005bd668 FUN_005bd668

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
  undefined1 auStack_1ac [268];
  undefined1 auStack_a0 [64];
  undefined1 auStack_60 [64];
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



//==== 005b0fe8  ns=Global  size=0x630
// sig: undefined FUN_005b0fe8(void)
// callers(0): 
// callees(10): 00550e20 FUN_00550e20; 005ad0d8 FUN_005ad0d8; 005ad66c FUN_005ad66c; 005b24b8 FUN_005b24b8; 005b5fd0 FUN_005b5fd0; 005b60b0 FUN_005b60b0; 005b65d4 FUN_005b65d4; 005bd288 FUN_005bd288; 005bd46c FUN_005bd46c; 005bd668 FUN_005bd668

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
  undefined1 auStack_1b0 [268];
  undefined1 auStack_a4 [64];
  undefined1 auStack_64 [68];
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



//==== 005b1618  ns=Global  size=0x26c
// sig: undefined FUN_005b1618(void)
// callers(0): 
// callees(7): 005ad0d8 FUN_005ad0d8; 005ad66c FUN_005ad66c; 005b5fd0 FUN_005b5fd0; 005b60b0 FUN_005b60b0; 005bd288 FUN_005bd288; 005bd46c FUN_005bd46c; 005bd668 FUN_005bd668

uint FUN_005b1618(int param_1,int param_2,int param_3,int param_4)

{
  int iVar1;
  int iStack00000030;
  int iStack00000038;
  int iStack00000040;
  int iStack00000048;
  uint local_140;
  uint local_13c;
  undefined1 auStack_134 [276];
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



//==== 005b1884  ns=Global  size=0x640
// sig: undefined FUN_005b1884(void)
// callers(0): 
// callees(12): 00550e68 FUN_00550e68; 005ad0d8 FUN_005ad0d8; 005ad440 FUN_005ad440; 005ad66c FUN_005ad66c; 005b24b8 FUN_005b24b8; 005b5fd0 FUN_005b5fd0; 005b6140 FUN_005b6140; 005b6898 FUN_005b6898; 005b6c40 FUN_005b6c40; 005bd288 FUN_005bd288; 005bd46c FUN_005bd46c; 005bd7c0 FUN_005bd7c0

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
  undefined1 auStack_1ac [268];
  undefined1 auStack_a0 [64];
  undefined1 auStack_60 [68];
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



//==== 005b1ec4  ns=Global  size=0x5f4
// sig: undefined FUN_005b1ec4(void)
// callers(0): 
// callees(10): 005ad0d8 FUN_005ad0d8; 005ad66c FUN_005ad66c; 005b24b8 FUN_005b24b8; 005b5fd0 FUN_005b5fd0; 005b6140 FUN_005b6140; 005b6898 FUN_005b6898; 005b6c40 FUN_005b6c40; 005bd288 FUN_005bd288; 005bd46c FUN_005bd46c; 005bd7c0 FUN_005bd7c0

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
  undefined1 auStack_1b0 [268];
  undefined1 auStack_a4 [64];
  undefined1 auStack_64 [72];
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



//==== 005b24b8  ns=Global  size=0x154
// sig: undefined FUN_005b24b8(void)
// callers(7): 005aefec FUN_005aefec; 005b0314 FUN_005b0314; 005b044c FUN_005b044c; 005b0740 FUN_005b0740; 005b0fe8 FUN_005b0fe8; 005b1884 FUN_005b1884; 005b1ec4 FUN_005b1ec4
// callees(0): 

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



//==== 005b260c  ns=Global  size=0x34
// sig: undefined FUN_005b260c(void)
// callers(0): 
// callees(0): 

undefined4 FUN_005b260c(void)

{
  return *(undefined4 *)(*(int *)PTR_PTR_0071c080 + 4);
}



//==== 005b2640  ns=Global  size=0xc4
// sig: undefined FUN_005b2640(void)
// callers(1): 005acc40 FUN_005acc40
// callees(0): 

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



//==== 005b2704  ns=Global  size=0x28
// sig: undefined FUN_005b2704(void)
// callers(0): 
// callees(0): 
// strings: 00660a88: 'rt_cert version: 3.05.201103091800'

undefined * FUN_005b2704(void)

{
  return PTR_s_rt_cert_version__3_05_2011030918_0071c184;
}



//==== 005b272c  ns=Global  size=0x23c
// sig: undefined FUN_005b272c(void)
// callers(1): 005b2f34 FUN_005b2f34
// callees(3): 005b2968 FUN_005b2968; 005b2b9c FUN_005b2b9c; 005b3128 FUN_005b3128

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



//==== 005b2968  ns=Global  size=0x1c8
// sig: undefined FUN_005b2968(void)
// callers(2): 005b272c FUN_005b272c; 005b31d0 FUN_005b31d0
// callees(0): 

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



//==== 005b2b30  ns=Global  size=0x6c
// sig: undefined FUN_005b2b30(void)
// callers(3): 005b2b9c FUN_005b2b9c; 005b51d0 FUN_005b51d0; 005b5610 FUN_005b5610
// callees(1): 005d0218 libc::memcmp

int FUN_005b2b30(void *param_1,void *param_2)

{
  int iVar1;
  void *pvStack00000030;
  void *pvStack00000038;
  
  pvStack00000030 = param_1;
  pvStack00000038 = param_2;
  iVar1 = libc::memcmp(param_1,param_2,0x10);
  return iVar1;
}



//==== 005b2b9c  ns=Global  size=0x134
// sig: undefined FUN_005b2b9c(void)
// callers(2): 005b272c FUN_005b272c; 005b5610 FUN_005b5610
// callees(1): 005b2b30 FUN_005b2b30

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



//==== 005b2cd0  ns=Global  size=0x264
// sig: undefined FUN_005b2cd0(void)
// callers(3): 005b3280 FUN_005b3280; 005b38a4 FUN_005b38a4; 005b45f4 FUN_005b45f4
// callees(0): 

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



//==== 005b2f34  ns=Global  size=0x1f4
// sig: undefined FUN_005b2f34(void)
// callers(1): 005b2f34 FUN_005b2f34
// callees(6): 005b272c FUN_005b272c; 005b2f34 FUN_005b2f34; 005b3128 FUN_005b3128; 005b3280 FUN_005b3280; 005b5610 FUN_005b5610; 005d0140 libc::memset

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
      libc::memset(local_20,0,0x308);
      *(int *)(local_20 + 0x14) = iStack00000030;
      *(undefined4 *)(local_20 + 0xc) = uStack00000040;
      *(undefined4 *)(local_20 + 0x28) = uStack00000048;
    }
  }
  return local_20;
}



//==== 005b3128  ns=Global  size=0xa8
// sig: undefined FUN_005b3128(void)
// callers(3): 005b272c FUN_005b272c; 005b2f34 FUN_005b2f34; 005b31d0 FUN_005b31d0
// callees(0): 

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



//==== 005b31d0  ns=Global  size=0xb0
// sig: undefined FUN_005b31d0(void)
// callers(0): 
// callees(2): 005b2968 FUN_005b2968; 005b3128 FUN_005b3128

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



//==== 005b3280  ns=Global  size=0x624
// sig: undefined FUN_005b3280(void)
// callers(1): 005b2f34 FUN_005b2f34
// callees(8): 005ad898 FUN_005ad898; 005b2cd0 FUN_005b2cd0; 005b38a4 FUN_005b38a4; 005b5d80 FUN_005b5d80; 005ba040 FUN_005ba040; 005ba8b8 FUN_005ba8b8; 005bbd60 FUN_005bbd60; 005c5ad0 libc::memcpy

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



//==== 005b38a4  ns=Global  size=0xd50
// sig: undefined FUN_005b38a4(void)
// callers(1): 005b3280 FUN_005b3280
// callees(7): 005b2cd0 FUN_005b2cd0; 005b45f4 FUN_005b45f4; 005b4d70 FUN_005b4d70; 005b4fa0 FUN_005b4fa0; 005b5d80 FUN_005b5d80; 005c5ad0 libc::memcpy; 005d0140 libc::memset

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
    libc::memcpy((void *)((iStack00000030 - local_44) + 0x54),
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



//==== 005b45f4  ns=Global  size=0x77c
// sig: undefined FUN_005b45f4(void)
// callers(1): 005b38a4 FUN_005b38a4
// callees(4): 005b2cd0 FUN_005b2cd0; 005b5d80 FUN_005b5d80; 005bbd60 FUN_005bbd60; 005c5ad0 libc::memcpy

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



//==== 005b4d70  ns=Global  size=0x230
// sig: undefined FUN_005b4d70(void)
// callers(1): 005b38a4 FUN_005b38a4
// callees(1): 005c8480 FUN_005c8480
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



//==== 005b4fa0  ns=Global  size=0x230
// sig: undefined FUN_005b4fa0(void)
// callers(1): 005b38a4 FUN_005b38a4
// callees(1): 005c8480 FUN_005c8480
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



//==== 005b51d0  ns=Global  size=0x324
// sig: undefined FUN_005b51d0(void)
// callers(1): 005b5610 FUN_005b5610
// callees(5): 005b2b30 FUN_005b2b30; 005b5d80 FUN_005b5d80; 005b6d80 FUN_005b6d80; 005c5ad0 libc::memcpy; 005d0218 libc::memcmp

undefined4 FUN_005b51d0(undefined4 param_1,undefined4 param_2)

{
  longlong lVar1;
  ulonglong *puVar2;
  int iVar3;
  undefined4 uVar4;
  ulonglong unaff_r31;
  ulonglong in_LR;
  undefined1 auStack_120 [288];
  
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
      libc::memcpy(auStack_120,(void *)(*(int *)(puVar2 + 0x3a) + 0x208),0x100);
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
      iVar3 = libc::memcmp((void *)((*(int *)(puVar2 + 0x3a) - *(int *)((int)puVar2 + 0x74)) + 0x68)
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



//==== 005b54f4  ns=Global  size=0x38
// sig: undefined FUN_005b54f4(void)
// callers(0): 
// callees(0): 

undefined4 FUN_005b54f4(int param_1)

{
  return *(undefined4 *)(param_1 + 0x20);
}



//==== 005b552c  ns=Global  size=0xe4
// sig: undefined FUN_005b552c(void)
// callers(0): 
// callees(1): 005b6d80 FUN_005b6d80

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



//==== 005b5610  ns=Global  size=0x470
// sig: undefined FUN_005b5610(void)
// callers(2): 005b2f34 FUN_005b2f34; 005b5610 FUN_005b5610
// callees(4): 005b2b30 FUN_005b2b30; 005b2b9c FUN_005b2b9c; 005b51d0 FUN_005b51d0; 005b5610 FUN_005b5610

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



//==== 005b5a80  ns=Global  size=0x208
// sig: undefined FUN_005b5a80(void)
// callers(0): 
// callees(0): 

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



//==== 005b5c88  ns=Global  size=0xc4
// sig: undefined FUN_005b5c88(void)
// callers(0): 
// callees(1): 005c5ad0 libc::memcpy

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
    libc::memcpy(param_2,(void *)((param_1 - *(int *)(param_1 + 0x20)) + 0x208),
                 *(size_t *)(param_1 + 0x20));
    local_20 = *(undefined4 *)(iStack00000030 + 0x20);
  }
  return local_20;
}



//==== 005b5d4c  ns=Global  size=0x34
// sig: undefined FUN_005b5d4c(void)
// callers(0): 
// callees(0): 

int FUN_005b5d4c(int param_1)

{
  return param_1 + 0x78;
}



//==== 005b5d80  ns=Global  size=0xe0
// sig: undefined FUN_005b5d80(void)
// callers(4): 005b3280 FUN_005b3280; 005b38a4 FUN_005b38a4; 005b45f4 FUN_005b45f4; 005b51d0 FUN_005b51d0
// callees(1): 005d0218 libc::memcmp

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
       (iVar1 = libc::memcmp(pvStack00000030,local_30 + 2,sStack00000038), iVar1 == 0)) break;
    local_30 = local_30 + 6;
  }
  return *local_30;
}



//==== 005b5e60  ns=Global  size=0xe8
// sig: undefined FUN_005b5e60(void)
// callers(0): 
// callees(1): 005c5ad0 libc::memcpy

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
  libc::memcpy(param_1,local_30 + 2,local_30[1]);
  return local_30[1];
}



//==== 005b5fd0  ns=Global  size=0xd8
// sig: undefined FUN_005b5fd0(void)
// callers(7): 005afdac FUN_005afdac; 005affdc FUN_005affdc; 005b0740 FUN_005b0740; 005b0fe8 FUN_005b0fe8; 005b1618 FUN_005b1618; 005b1884 FUN_005b1884; 005b1ec4 FUN_005b1ec4
// callees(0): 

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



//==== 005b60b0  ns=Global  size=0x8c
// sig: undefined FUN_005b60b0(void)
// callers(5): 005afdac FUN_005afdac; 005affdc FUN_005affdc; 005b0740 FUN_005b0740; 005b0fe8 FUN_005b0fe8; 005b1618 FUN_005b1618
// callees(0): 

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



//==== 005b6140  ns=Global  size=0x8c
// sig: undefined FUN_005b6140(void)
// callers(2): 005b1884 FUN_005b1884; 005b1ec4 FUN_005b1ec4
// callees(0): 

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



//==== 005b61d0  ns=Global  size=0x1a8
// sig: undefined FUN_005b61d0(void)
// callers(1): 005b65d4 FUN_005b65d4
// callees(4): 005bdf90 FUN_005bdf90; 005c07f4 FUN_005c07f4; 005c5ad0 libc::memcpy; 005d0140 libc::memset

void * FUN_005b61d0(void *param_1,undefined4 param_2,void *param_3,void *param_4)

{
  void *pvVar1;
  void *pvStack00000030;
  undefined4 uStack00000038;
  void *pvStack00000040;
  void *pvStack00000048;
  undefined1 auStack_81c [512];
  undefined1 auStack_61c [64];
  undefined1 auStack_5dc [448];
  undefined1 auStack_41c [64];
  undefined1 auStack_3dc [448];
  undefined1 auStack_21c [532];
  
  pvStack00000030 = param_1;
  uStack00000038 = param_2;
  pvStack00000040 = param_3;
  pvStack00000048 = param_4;
  FUN_005bdf90(auStack_81c,param_2);
  libc::memcpy(auStack_61c,pvStack00000030,0x40);
  libc::memset(auStack_5dc,0,0x1c0);
  libc::memcpy(auStack_41c,pvStack00000040,0x40);
  libc::memset(auStack_3dc,0,0x1c0);
  FUN_005c07f4(auStack_21c,auStack_41c,auStack_81c,auStack_61c);
  pvVar1 = libc::memcpy(pvStack00000048,auStack_21c,0x40);
  return pvVar1;
}



//==== 005b6378  ns=Global  size=0x25c
// sig: undefined FUN_005b6378(void)
// callers(1): 005b6898 FUN_005b6898
// callees(5): 005b7754 FUN_005b7754; 005b872c FUN_005b872c; 005c07f4 FUN_005c07f4; 005c5ad0 libc::memcpy; 005d0140 libc::memset

void * FUN_005b6378(void *param_1,void *param_2,void *param_3,void *param_4)

{
  int iVar1;
  void *pvVar2;
  void *pvStack00000030;
  void *pvStack00000038;
  void *pvStack00000040;
  void *pvStack00000048;
  undefined1 auStack_818 [64];
  undefined1 auStack_7d8 [448];
  undefined1 auStack_618 [64];
  undefined1 auStack_5d8 [448];
  undefined1 auStack_418 [64];
  undefined1 auStack_3d8 [448];
  undefined1 auStack_218 [528];
  
  pvStack00000030 = param_1;
  pvStack00000038 = param_2;
  pvStack00000040 = param_3;
  pvStack00000048 = param_4;
  libc::memcpy(auStack_818,param_2,0x40);
  libc::memset(auStack_7d8,0,0x1c0);
  libc::memcpy(auStack_618,pvStack00000030,0x40);
  libc::memset(auStack_5d8,0,0x1c0);
  libc::memcpy(auStack_418,pvStack00000040,0x40);
  libc::memset(auStack_3d8,0,0x1c0);
  iVar1 = FUN_005b872c(0x11,auStack_618,auStack_818);
  if (iVar1 == 0) {
    FUN_005c07f4(auStack_218,auStack_418,auStack_818,auStack_618);
  }
  else {
    FUN_005b7754(auStack_218,auStack_418,iVar1);
  }
  pvVar2 = libc::memcpy(pvStack00000048,auStack_218,0x40);
  return pvVar2;
}



//==== 005b65d4  ns=Global  size=0x2c4
// sig: undefined FUN_005b65d4(void)
// callers(5): 005af0a4 FUN_005af0a4; 005b021c FUN_005b021c; 005b0314 FUN_005b0314; 005b0740 FUN_005b0740; 005b0fe8 FUN_005b0fe8
// callees(1): 005b61d0 FUN_005b61d0

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



//==== 005b6898  ns=Global  size=0x2d4
// sig: undefined FUN_005b6898(void)
// callers(3): 005af3a8 FUN_005af3a8; 005b1884 FUN_005b1884; 005b1ec4 FUN_005b1ec4
// callees(1): 005b6378 FUN_005b6378

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



//==== 005b6b6c  ns=Global  size=0xd4
// sig: undefined FUN_005b6b6c(void)
// callers(1): 005ad810 FUN_005ad810
// callees(2): 005c0c8c FUN_005c0c8c; 005c5ad0 libc::memcpy

void * FUN_005b6b6c(void *param_1,void *param_2)

{
  void *pvVar1;
  void *pvStack00000030;
  void *pvStack00000038;
  undefined1 auStack_41c [512];
  undefined1 auStack_21c [532];
  
  pvStack00000030 = param_1;
  pvStack00000038 = param_2;
  FUN_005c0c8c(auStack_41c,auStack_21c,0x11,0x200);
  libc::memcpy(pvStack00000030,auStack_41c,0x40);
  pvVar1 = libc::memcpy(pvStack00000038,auStack_21c,0x40);
  return pvVar1;
}



//==== 005b6c40  ns=Global  size=0x140
// sig: undefined FUN_005b6c40(void)
// callers(3): 005af3a8 FUN_005af3a8; 005b1884 FUN_005b1884; 005b1ec4 FUN_005b1ec4
// callees(5): 005bdae0 FUN_005bdae0; 005bdbfc FUN_005bdbfc; 005c1300 FUN_005c1300; 005c5ad0 libc::memcpy; 005d0140 libc::memset

void FUN_005b6c40(undefined4 param_1,void *param_2)

{
  undefined4 uStack00000030;
  void *pvStack00000038;
  undefined1 auStack_41c [512];
  undefined1 auStack_21c [532];
  
  uStack00000030 = param_1;
  pvStack00000038 = param_2;
  libc::memset(auStack_41c,0,0x200);
  libc::memset(auStack_21c,0,0x200);
  FUN_005bdae0(uStack00000030,auStack_41c,0x40);
  libc::memcpy(auStack_21c,pvStack00000038,0x40);
  FUN_005c1300(auStack_41c,auStack_21c);
  FUN_005bdbfc(auStack_41c,uStack00000030,0x40);
  return;
}



//==== 005b6d80  ns=Global  size=0x1b4
// sig: undefined FUN_005b6d80(void)
// callers(2): 005b51d0 FUN_005b51d0; 005b552c FUN_005b552c
// callees(4): 005bdd00 FUN_005bdd00; 005bde60 FUN_005bde60; 005c07f4 FUN_005c07f4; 005d0140 libc::memset

void FUN_005b6d80(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5)

{
  undefined4 uStack00000030;
  undefined4 uStack00000038;
  undefined4 uStack00000040;
  undefined4 uStack00000048;
  undefined4 uStack00000050;
  undefined1 local_810 [512];
  undefined1 auStack_610 [512];
  undefined1 auStack_410 [512];
  undefined1 auStack_210 [520];
  
  uStack00000030 = param_1;
  uStack00000038 = param_2;
  uStack00000040 = param_3;
  uStack00000048 = param_4;
  uStack00000050 = param_5;
  libc::memset(local_810,0,0x200);
  libc::memset(auStack_610,0,0x200);
  libc::memset(auStack_410,0,0x200);
  libc::memset(auStack_210,0,0x200);
  FUN_005bdd00(uStack00000030,auStack_610,uStack00000038);
  FUN_005bdd00(uStack00000048,auStack_410,uStack00000050);
  FUN_005c07f4(auStack_210,auStack_410,local_810,auStack_610);
  FUN_005bde60(auStack_210,uStack00000048,uStack00000050);
  return;
}



//==== 005b6f34  ns=Global  size=0x254
// sig: undefined FUN_005b6f34(void)
// callers(0): 
// callees(6): 005b7754 FUN_005b7754; 005b872c FUN_005b872c; 005bdd00 FUN_005bdd00; 005bde60 FUN_005bde60; 005c07f4 FUN_005c07f4; 005d0140 libc::memset

void FUN_005b6f34(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5)

{
  int iVar1;
  undefined4 uStack00000030;
  undefined4 uStack00000038;
  undefined4 uStack00000040;
  undefined4 uStack00000048;
  undefined4 uStack00000050;
  undefined1 auStack_81c [512];
  undefined1 auStack_61c [512];
  undefined1 auStack_41c [512];
  undefined1 auStack_21c [532];
  
  uStack00000030 = param_1;
  uStack00000038 = param_2;
  uStack00000040 = param_3;
  uStack00000048 = param_4;
  uStack00000050 = param_5;
  libc::memset(auStack_81c,0,0x200);
  libc::memset(auStack_61c,0,0x200);
  libc::memset(auStack_41c,0,0x200);
  libc::memset(auStack_21c,0,0x200);
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



//==== 005b7188  ns=Global  size=0xec
// sig: undefined FUN_005b7188(void)
// callers(0): 
// callees(2): 005bde60 FUN_005bde60; 005c0c8c FUN_005c0c8c

void FUN_005b7188(undefined4 param_1,undefined4 param_2,undefined4 param_3,int param_4)

{
  uint uVar1;
  undefined4 uStack00000030;
  undefined4 uStack00000038;
  undefined4 uStack00000040;
  int iStack00000048;
  undefined1 auStack_41c [512];
  undefined1 auStack_21c [532];
  
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



//==== 005b7274  ns=Global  size=0xb8
// sig: undefined FUN_005b7274(void)
// callers(3): 005b7454 FUN_005b7454; 005b7754 FUN_005b7754; 005b872c FUN_005b872c
// callees(0): 

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



//==== 005b732c  ns=Global  size=0x80
// sig: undefined FUN_005b732c(void)
// callers(2): 005b7454 FUN_005b7454; 005b872c FUN_005b872c
// callees(0): 

void FUN_005b732c(int param_1,int param_2)

{
  undefined4 local_20;
  
  for (local_20 = 0; local_20 < 0x20; local_20 = local_20 + 1) {
    *(undefined4 *)(param_2 + local_20 * 4) = *(undefined4 *)(param_1 + local_20 * 4);
  }
  return;
}



//==== 005b73ac  ns=Global  size=0xa8
// sig: undefined FUN_005b73ac(void)
// callers(1): 005b872c FUN_005b872c
// callees(0): 

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



//==== 005b7454  ns=Global  size=0x300
// sig: undefined FUN_005b7454(void)
// callers(1): 005b872c FUN_005b872c
// callees(9): 005b7274 FUN_005b7274; 005b732c FUN_005b732c; 005bdf90 FUN_005bdf90; 005be478 FUN_005be478; 005be554 FUN_005be554; 005be820 FUN_005be820; 005bf0e8 FUN_005bf0e8; 005c1338 FUN_005c1338; 005c13d0 FUN_005c13d0

undefined4 FUN_005b7454(undefined4 param_1,undefined4 param_2,undefined4 param_3,int param_4)

{
  undefined4 uStack00000030;
  undefined4 uStack00000038;
  undefined4 uStack00000040;
  int iStack00000048;
  undefined1 auStack_410 [512];
  undefined1 auStack_210 [520];
  
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



//==== 005b7754  ns=Global  size=0x3f8
// sig: undefined FUN_005b7754(void)
// callers(2): 005b6378 FUN_005b6378; 005b6f34 FUN_005b6f34
// callees(8): 005b7274 FUN_005b7274; 005c07f4 FUN_005c07f4; 005c0ed4 FUN_005c0ed4; 005c1118 FUN_005c1118; 005c1300 FUN_005c1300; 005c1338 FUN_005c1338; 005c13d0 FUN_005c13d0; 005c5ad0 libc::memcpy

void FUN_005b7754(void *param_1,undefined4 param_2,int param_3)

{
  int iVar1;
  void *pvStack00000030;
  undefined4 uStack00000038;
  int iStack00000040;
  undefined1 auStack_61c [512];
  undefined1 auStack_41c [512];
  undefined1 auStack_21c [532];
  
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
    libc::memcpy(pvStack00000030,auStack_41c,0x200);
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
    libc::memcpy(pvStack00000030,auStack_21c,0x200);
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



//==== 005b7b4c  ns=Global  size=0x480
// sig: undefined FUN_005b7b4c(void)
// callers(1): 005b8120 FUN_005b8120
// callees(14): 005bdf90 FUN_005bdf90; 005be064 FUN_005be064; 005be33c FUN_005be33c; 005be478 FUN_005be478; 005be554 FUN_005be554; 005beb7c FUN_005beb7c; 005c10d0 FUN_005c10d0; 005c1118 FUN_005c1118; 005c11f0 FUN_005c11f0; 005c1300 FUN_005c1300; 005c1338 FUN_005c1338; 005c1378 FUN_005c1378; 005c13d0 FUN_005c13d0; 005c5ad0 libc::memcpy

void * FUN_005b7b4c(void *param_1,void *param_2)

{
  uint uVar1;
  int iVar2;
  void *pvVar3;
  void *pvStack00000030;
  void *pvStack00000038;
  undefined1 auStack_818 [512];
  undefined1 auStack_618 [512];
  undefined1 auStack_418 [512];
  undefined1 auStack_218 [528];
  
  pvStack00000030 = param_1;
  pvStack00000038 = param_2;
  uVar1 = FUN_005c1378(param_1);
  FUN_005beb7c(pvStack00000030,auStack_418);
  FUN_005bdf90(auStack_218,0);
  FUN_005be33c(auStack_218,uVar1 >> 1);
  while( true ) {
    while( true ) {
      libc::memcpy(auStack_818,pvStack00000030,0x200);
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
  pvVar3 = libc::memcpy(pvStack00000038,auStack_218,0x200);
  return pvVar3;
}



//==== 005b7fcc  ns=Global  size=0x154
// sig: undefined FUN_005b7fcc(void)
// callers(0): 
// callees(6): 005bdf90 FUN_005bdf90; 005be478 FUN_005be478; 005bf0e8 FUN_005bf0e8; 005c1338 FUN_005c1338; 005c13d0 FUN_005c13d0; 005c5ad0 libc::memcpy

void FUN_005b7fcc(undefined4 param_1,undefined4 param_2,undefined4 param_3,void *param_4,
                 undefined4 param_5)

{
  undefined4 uStack00000030;
  undefined4 uStack00000038;
  undefined4 uStack00000040;
  void *pvStack00000048;
  undefined4 uStack00000050;
  undefined1 auStack_410 [512];
  undefined1 auStack_210 [520];
  
  uStack00000030 = param_1;
  uStack00000038 = param_2;
  uStack00000040 = param_3;
  pvStack00000048 = param_4;
  uStack00000050 = param_5;
  FUN_005c13d0(auStack_210,param_2,param_3);
  libc::memcpy(pvStack00000048,auStack_210,0x200);
  FUN_005c1338(auStack_210,uStack00000038);
  FUN_005c1338(auStack_210,uStack00000040);
  FUN_005be478(auStack_210,1);
  FUN_005bdf90(auStack_410,uStack00000030);
  FUN_005bf0e8(auStack_410,auStack_210,uStack00000050);
  return;
}



//==== 005b8120  ns=Global  size=0x60c
// sig: undefined FUN_005b8120(void)
// callers(1): 005b872c FUN_005b872c
// callees(15): 005b7b4c FUN_005b7b4c; 005bdf90 FUN_005bdf90; 005be1e0 FUN_005be1e0; 005be478 FUN_005be478; 005be554 FUN_005be554; 005beb7c FUN_005beb7c; 005c10d0 FUN_005c10d0; 005c1118 FUN_005c1118; 005c1160 FUN_005c1160; 005c11f0 FUN_005c11f0; 005c1300 FUN_005c1300; 005c1338 FUN_005c1338; 005c1378 FUN_005c1378; 005c13d0 FUN_005c13d0; 005c5ad0 libc::memcpy

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
  undefined1 auStack_818 [512];
  undefined1 auStack_618 [512];
  undefined1 auStack_418 [512];
  undefined1 auStack_218 [528];
  
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
  libc::memcpy(auStack_418,auStack_818,0x200);
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
  libc::memcpy(auStack_818,pvStack00000038,0x200);
  FUN_005c1338(auStack_818,auStack_218);
  FUN_005be478(auStack_818,1);
  FUN_005c11f0(auStack_818,1);
  FUN_005c13d0(auStack_618,auStack_818,auStack_818);
  FUN_005c1338(auStack_618,pvStack00000038);
  FUN_005b7b4c(auStack_618,auStack_218);
  libc::memcpy(pvStack00000048,auStack_818,0x200);
  libc::memcpy(pvStack00000050,auStack_818,0x200);
  FUN_005c1300(pvStack00000048,auStack_218);
  FUN_005c1338(pvStack00000050,auStack_218);
  return;
}



//==== 005b872c  ns=Global  size=0x290
// sig: undefined FUN_005b872c(void)
// callers(2): 005b6378 FUN_005b6378; 005b6f34 FUN_005b6f34
// callees(7): 005b7274 FUN_005b7274; 005b732c FUN_005b732c; 005b73ac FUN_005b73ac; 005b7454 FUN_005b7454; 005b8120 FUN_005b8120; 005be1e0 FUN_005be1e0; 005c13d0 FUN_005c13d0

undefined * FUN_005b872c(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  undefined4 uStack00000030;
  undefined4 uStack00000038;
  undefined4 uStack00000040;
  uint local_630;
  undefined1 auStack_62c [512];
  undefined1 auStack_42c [512];
  undefined1 auStack_22c [548];
  
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



//==== 005b89bc  ns=Global  size=0x7c
// sig: undefined FUN_005b89bc(void)
// callers(3): 005ad66c FUN_005ad66c; 005ad898 FUN_005ad898; 005ad950 FUN_005ad950
// callees(2): 005b9178 FUN_005b9178; 005c5ad0 libc::memcpy

void FUN_005b89bc(void *param_1)

{
  void *pvStack00000030;
  
  pvStack00000030 = param_1;
  libc::memcpy(param_1,PTR_DAT_0071c1a8,0x60);
  FUN_005b9178((int)pvStack00000030 + 0x54);
  return;
}



//==== 005b8a38  ns=Global  size=0x48c
// sig: undefined FUN_005b8a38(void)
// callers(3): 005ad66c FUN_005ad66c; 005ad898 FUN_005ad898; 005ad950 FUN_005ad950
// callees(3): 005b91e0 FUN_005b91e0; 005b9210 FUN_005b9210; 005c5ad0 libc::memcpy

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
      pvVar5 = libc::memcpy(param_1 + uVar4,param_2,param_3);
      return pvVar5;
    }
    libc::memcpy(param_1 + uVar4,param_2,__n);
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
  pvVar5 = libc::memcpy(puStack00000030,puStack00000038,uStack00000040);
  return pvVar5;
}



//==== 005b8ec4  ns=Global  size=0x2b4
// sig: undefined FUN_005b8ec4(void)
// callers(3): 005ad66c FUN_005ad66c; 005ad898 FUN_005ad898; 005ad950 FUN_005ad950
// callees(4): 005b91e0 FUN_005b91e0; 005b91e8 FUN_005b91e8; 005b9210 FUN_005b9210; 005d0140 libc::memset

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
    libc::memset(puVar3,0,iVar4);
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
    libc::memset(puVar3,0,iVar1 + 0x37);
  }
  puStack00000030[0xe] = puStack00000030[0x17];
  puStack00000030[0xf] = puStack00000030[0x16];
  FUN_005b91e0(puStack00000030,0x38,puStack00000030[0x15]);
  FUN_005b9210(puStack00000030);
  if (0x14 < uStack00000040) {
    libc::memset(iStack00000038 + 0x14,0,uStack00000040 - 0x14);
    uStack00000040 = 0x14;
  }
  FUN_005b91e8(iStack00000038,puStack00000030 + 0x10,uStack00000040);
  *puStack00000030 = 0;
  return;
}



//==== 005b9178  ns=Global  size=0x68
// sig: undefined FUN_005b9178(void)
// callers(1): 005b89bc FUN_005b89bc
// callees(0): 

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



//==== 005b91e0  ns=Global  size=0x4
// sig: undefined FUN_005b91e0(void)
// callers(2): 005b8a38 FUN_005b8a38; 005b8ec4 FUN_005b8ec4
// callees(0): 

void FUN_005b91e0(void)

{
  return;
}



//==== 005b91e8  ns=Global  size=0x20
// sig: undefined FUN_005b91e8(void)
// callers(1): 005b8ec4 FUN_005b8ec4
// callees(0): 

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



//==== 005b9210  ns=Global  size=0xe2c
// sig: undefined FUN_005b9210(void)
// callers(2): 005b8a38 FUN_005b8a38; 005b8ec4 FUN_005b8ec4
// callees(0): 

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



//==== 005ba040  ns=Global  size=0xa4
// sig: undefined FUN_005ba040(void)
// callers(1): 005b3280 FUN_005b3280
// callees(3): 005ba0e4 FUN_005ba0e4; 005ba178 FUN_005ba178; 005ba31c FUN_005ba31c

void FUN_005ba040(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 uStack00000030;
  undefined4 uStack00000038;
  undefined4 uStack00000040;
  undefined1 auStack_50 [72];
  
  uStack00000030 = param_1;
  uStack00000038 = param_2;
  uStack00000040 = param_3;
  FUN_005ba0e4(auStack_50);
  FUN_005ba178(auStack_50,uStack00000030,uStack00000038);
  FUN_005ba31c(auStack_50,uStack00000040);
  return;
}



//==== 005ba0e4  ns=Global  size=0x94
// sig: undefined FUN_005ba0e4(void)
// callers(1): 005ba040 FUN_005ba040
// callees(0): 

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



//==== 005ba178  ns=Global  size=0x1a4
// sig: undefined FUN_005ba178(void)
// callers(2): 005ba040 FUN_005ba040; 005ba31c FUN_005ba31c
// callees(2): 005ba4d0 FUN_005ba4d0; 005c5ad0 libc::memcpy

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
    libc::memcpy((void *)(param_1 + 0x20 + local_1c),param_2,local_18);
    FUN_005ba4d0(iStack00000030,iStack00000030 + 0x20);
    for (; local_18 + 0xf < uStack00000040; local_18 = local_18 + 0x10) {
      FUN_005ba4d0(iStack00000030,local_18 + (int)pvStack00000038);
    }
    local_1c = 0;
  }
  pvVar1 = libc::memcpy((void *)(iStack00000030 + 0x20 + local_1c),
                        (void *)(local_18 + (int)pvStack00000038),uStack00000040 - local_18);
  return pvVar1;
}



//==== 005ba31c  ns=Global  size=0x1b4
// sig: undefined FUN_005ba31c(void)
// callers(1): 005ba040 FUN_005ba040
// callees(1): 005ba178 FUN_005ba178

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



//==== 005ba4d0  ns=Global  size=0x3e8
// sig: undefined FUN_005ba4d0(void)
// callers(1): 005ba178 FUN_005ba178
// callees(0): 

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



//==== 005ba8b8  ns=Global  size=0xa4
// sig: undefined FUN_005ba8b8(void)
// callers(1): 005b3280 FUN_005b3280
// callees(3): 005ba95c FUN_005ba95c; 005ba9f8 FUN_005ba9f8; 005bac08 FUN_005bac08

void FUN_005ba8b8(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 uStack00000030;
  undefined4 uStack00000038;
  undefined4 uStack00000040;
  undefined1 auStack_70 [104];
  
  uStack00000030 = param_1;
  uStack00000038 = param_2;
  uStack00000040 = param_3;
  FUN_005ba95c(auStack_70);
  FUN_005ba9f8(auStack_70,uStack00000030,uStack00000038);
  FUN_005bac08(auStack_70,uStack00000040);
  return;
}



//==== 005ba95c  ns=Global  size=0x9c
// sig: undefined FUN_005ba95c(void)
// callers(1): 005ba8b8 FUN_005ba8b8
// callees(0): 

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



//==== 005ba9f8  ns=Global  size=0x210
// sig: undefined FUN_005ba9f8(void)
// callers(2): 005ba8b8 FUN_005ba8b8; 005bac08 FUN_005bac08
// callees(2): 005bad38 FUN_005bad38; 005c5ad0 libc::memcpy

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
    libc::memcpy((void *)(param_1 + 0x18 + local_1c),param_2,local_18);
    FUN_005bad38(iStack00000030,iStack00000030 + 0x18);
    for (; local_18 + 0x3f < uStack00000040; local_18 = local_18 + 0x40) {
      FUN_005bad38(iStack00000030,local_18 + (int)pvStack00000038);
    }
    local_1c = 0;
  }
  pvVar1 = libc::memcpy((void *)(iStack00000030 + 0x18 + local_1c),
                        (void *)(local_18 + (int)pvStack00000038),uStack00000040 - local_18);
  return pvVar1;
}



//==== 005bac08  ns=Global  size=0x130
// sig: undefined FUN_005bac08(void)
// callers(1): 005ba8b8 FUN_005ba8b8
// callees(3): 005ba9f8 FUN_005ba9f8; 005bbb08 FUN_005bbb08; 005d0140 libc::memset

void FUN_005bac08(int param_1,undefined4 param_2)

{
  uint uVar1;
  int iStack00000030;
  undefined4 uStack00000038;
  undefined1 auStack_28 [8];
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
  libc::memset(iStack00000030,0,0x58);
  return;
}



//==== 005bad38  ns=Global  size=0xdd0
// sig: undefined FUN_005bad38(void)
// callers(1): 005ba9f8 FUN_005ba9f8
// callees(1): 005bbc50 FUN_005bbc50

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



//==== 005bbb08  ns=Global  size=0x148
// sig: undefined FUN_005bbb08(void)
// callers(1): 005bac08 FUN_005bac08
// callees(0): 

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



//==== 005bbc50  ns=Global  size=0x110
// sig: undefined FUN_005bbc50(void)
// callers(1): 005bad38 FUN_005bad38
// callees(0): 

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



//==== 005bbd60  ns=Global  size=0xa4
// sig: undefined FUN_005bbd60(void)
// callers(2): 005b3280 FUN_005b3280; 005b45f4 FUN_005b45f4
// callees(3): 005bbefc FUN_005bbefc; 005bbf98 FUN_005bbf98; 005bc36c FUN_005bc36c

void FUN_005bbd60(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 uStack00000030;
  undefined4 uStack00000038;
  undefined4 uStack00000040;
  undefined1 auStack_70 [104];
  
  uStack00000030 = param_1;
  uStack00000038 = param_2;
  uStack00000040 = param_3;
  FUN_005bbefc(auStack_70);
  FUN_005bbf98(auStack_70,uStack00000030,uStack00000038);
  FUN_005bc36c(uStack00000040,auStack_70);
  return;
}



//==== 005bbe04  ns=Global  size=0xf8
// sig: undefined FUN_005bbe04(void)
// callers(0): 
// callees(3): 005bbefc FUN_005bbefc; 005bbf98 FUN_005bbf98; 005bc36c FUN_005bc36c

void FUN_005bbe04(int param_1,int param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5)

{
  int iStack00000030;
  int iStack00000038;
  undefined4 uStack00000040;
  undefined4 uStack00000048;
  undefined4 uStack00000050;
  undefined1 auStack_70 [104];
  
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



//==== 005bbefc  ns=Global  size=0x9c
// sig: undefined FUN_005bbefc(void)
// callers(2): 005bbd60 FUN_005bbd60; 005bbe04 FUN_005bbe04
// callees(0): 

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



//==== 005bbf98  ns=Global  size=0x3d4
// sig: undefined FUN_005bbf98(void)
// callers(3): 005bbd60 FUN_005bbd60; 005bbe04 FUN_005bbe04; 005bc36c FUN_005bc36c
// callees(2): 005bc508 FUN_005bc508; 005c5ad0 libc::memcpy

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
    libc::memcpy((void *)(param_1 + 0x18 + local_1c),param_2,__n);
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
  pvVar4 = libc::memcpy((void *)(iStack00000030 + 0x18 + local_1c),puStack00000038,uStack00000040);
  return pvVar4;
}



//==== 005bc36c  ns=Global  size=0x16c
// sig: undefined FUN_005bc36c(void)
// callers(2): 005bbd60 FUN_005bbd60; 005bbe04 FUN_005bbe04
// callees(3): 005bbf98 FUN_005bbf98; 005bc4d8 FUN_005bc4d8; 005d0140 libc::memset

void FUN_005bc36c(undefined4 param_1,int param_2)

{
  uint uVar1;
  undefined4 uStack00000030;
  int iStack00000038;
  undefined1 auStack_38 [8];
  undefined1 local_30 [16];
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
  libc::memset(iStack00000038,0,0x60);
  return;
}



//==== 005bc4d8  ns=Global  size=0x2c
// sig: undefined FUN_005bc4d8(void)
// callers(2): 005bc36c FUN_005bc36c; 005bc508 FUN_005bc508
// callees(0): 

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



//==== 005bc508  ns=Global  size=0xba8
// sig: undefined FUN_005bc508(void)
// callers(1): 005bbf98 FUN_005bbf98
// callees(1): 005bc4d8 FUN_005bc4d8

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



//==== 005bd0b8  ns=Global  size=0xd0
// sig: undefined FUN_005bd0b8(void)
// callers(2): 005ad76c FUN_005ad76c; 005bd288 FUN_005bd288
// callees(2): 005bd638 FUN_005bd638; 005bd668 FUN_005bd668

void FUN_005bd0b8(undefined4 *param_1)

{
  undefined4 *puStack00000030;
  undefined1 local_20 [24];
  
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  puStack00000030 = param_1;
  FUN_005bd638(param_1,param_1,0x10);
  FUN_005bd668(puStack00000030,local_20,0x10);
  return;
}



//==== 005bd188  ns=Global  size=0x100
// sig: undefined FUN_005bd188(void)
// callers(1): 005ad76c FUN_005ad76c
// callees(1): 005bd638 FUN_005bd638

void FUN_005bd188(undefined4 param_1,undefined4 param_2)

{
  undefined4 uStack00000030;
  undefined4 uStack00000038;
  undefined1 local_20 [24];
  
  uStack00000030 = param_1;
  uStack00000038 = param_2;
  FUN_005bd638(param_2,local_20,0x10);
  return;
}



//==== 005bd288  ns=Global  size=0x9c
// sig: undefined FUN_005bd288(void)
// callers(5): 005b0740 FUN_005b0740; 005b0fe8 FUN_005b0fe8; 005b1618 FUN_005b1618; 005b1884 FUN_005b1884; 005b1ec4 FUN_005b1ec4
// callees(2): 005bd0b8 FUN_005bd0b8; 005bd940 FUN_005bd940

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



//==== 005bd324  ns=Global  size=0x148
// sig: undefined FUN_005bd324(void)
// callers(0): 
// callees(2): 005bd638 FUN_005bd638; 005bd668 FUN_005bd668

void FUN_005bd324(undefined1 *param_1,undefined1 *param_2)

{
  undefined1 uVar1;
  undefined1 uVar2;
  undefined1 uVar3;
  undefined1 *puStack00000030;
  undefined1 *puStack00000038;
  undefined1 local_2c [36];
  
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



//==== 005bd46c  ns=Global  size=0x1c8
// sig: undefined FUN_005bd46c(void)
// callers(7): 005afec4 FUN_005afec4; 005b00fc FUN_005b00fc; 005b0740 FUN_005b0740; 005b0fe8 FUN_005b0fe8; 005b1618 FUN_005b1618; 005b1884 FUN_005b1884; 005b1ec4 FUN_005b1ec4
// callees(3): 005bd638 FUN_005bd638; 005bd668 FUN_005bd668; 005bd940 FUN_005bd940

void FUN_005bd46c(undefined1 *param_1,undefined4 param_2,undefined1 *param_3)

{
  undefined1 uVar1;
  undefined1 uVar2;
  undefined1 uVar3;
  undefined1 *puStack00000030;
  undefined4 uStack00000038;
  undefined1 *puStack00000040;
  undefined1 local_2c [4];
  undefined1 local_28 [32];
  
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



//==== 005bd638  ns=Global  size=0x2c
// sig: undefined FUN_005bd638(void)
// callers(7): 005bd0b8 FUN_005bd0b8; 005bd188 FUN_005bd188; 005bd324 FUN_005bd324; 005bd46c FUN_005bd46c; 005bd668 FUN_005bd668; 005bd7c0 FUN_005bd7c0; 005bd940 FUN_005bd940
// callees(0): 

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



//==== 005bd668  ns=Global  size=0x154
// sig: undefined FUN_005bd668(void)
// callers(8): 005afec4 FUN_005afec4; 005b00fc FUN_005b00fc; 005b0740 FUN_005b0740; 005b0fe8 FUN_005b0fe8; 005b1618 FUN_005b1618; 005bd0b8 FUN_005bd0b8; 005bd324 FUN_005bd324; 005bd46c FUN_005bd46c
// callees(1): 005bd638 FUN_005bd638

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



//==== 005bd7c0  ns=Global  size=0x178
// sig: undefined FUN_005bd7c0(void)
// callers(2): 005b1884 FUN_005b1884; 005b1ec4 FUN_005b1ec4
// callees(1): 005bd638 FUN_005bd638

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



//==== 005bd940  ns=Global  size=0x150
// sig: undefined FUN_005bd940(void)
// callers(3): 005ad76c FUN_005ad76c; 005bd288 FUN_005bd288; 005bd46c FUN_005bd46c
// callees(1): 005bd638 FUN_005bd638

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



//==== 005bda98  ns=Global  size=0x48
// sig: undefined FUN_005bda98(void)
// callers(0): 
// callees(0): 

undefined4 FUN_005bda98(undefined4 param_1)

{
  undefined4 uVar1;
  
  uVar1 = *(undefined4 *)PTR_DAT_0071c1c0;
  *(undefined4 *)PTR_DAT_0071c1c0 = param_1;
  return uVar1;
}



//==== 005bdae0  ns=Global  size=0x11c
// sig: undefined FUN_005bdae0(void)
// callers(1): 005b6c40 FUN_005b6c40
// callees(0): 

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



//==== 005bdbfc  ns=Global  size=0x104
// sig: undefined FUN_005bdbfc(void)
// callers(1): 005b6c40 FUN_005b6c40
// callees(0): 

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



//==== 005bdd00  ns=Global  size=0x160
// sig: undefined FUN_005bdd00(void)
// callers(2): 005b6d80 FUN_005b6d80; 005b6f34 FUN_005b6f34
// callees(0): 

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



//==== 005bde60  ns=Global  size=0x130
// sig: undefined FUN_005bde60(void)
// callers(3): 005b6d80 FUN_005b6d80; 005b6f34 FUN_005b6f34; 005b7188 FUN_005b7188
// callees(0): 

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



//==== 005bdf90  ns=Global  size=0x74
// sig: undefined FUN_005bdf90(void)
// callers(11): 005b61d0 FUN_005b61d0; 005b7454 FUN_005b7454; 005b7b4c FUN_005b7b4c; 005b7fcc FUN_005b7fcc; 005b8120 FUN_005b8120; 005beb7c FUN_005beb7c; 005bf0e8 FUN_005bf0e8; 005bf89c FUN_005bf89c; 005c04f8 FUN_005c04f8; 005c07f4 FUN_005c07f4; 005c0c8c FUN_005c0c8c
// callees(1): 005d0140 libc::memset

void FUN_005bdf90(undefined4 *param_1,undefined4 param_2)

{
  undefined4 *puStack00000030;
  undefined4 uStack00000038;
  
  puStack00000030 = param_1;
  uStack00000038 = param_2;
  libc::memset(param_1,0,0x200);
  *puStack00000030 = uStack00000038;
  return;
}



//==== 005be004  ns=Global  size=0x60
// sig: undefined FUN_005be004(void)
// callers(1): 005c07f4 FUN_005c07f4
// callees(0): 

bool FUN_005be004(uint *param_1)

{
  return (*param_1 & 1) == 0;
}



//==== 005be064  ns=Global  size=0x84
// sig: undefined FUN_005be064(void)
// callers(3): 005b7b4c FUN_005b7b4c; 005bfc70 FUN_005bfc70; 005c07f4 FUN_005c07f4
// callees(0): 

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



//==== 005be0e8  ns=Global  size=0xa4
// sig: undefined FUN_005be0e8(void)
// callers(2): 005bf0e8 FUN_005bf0e8; 005bff34 FUN_005bff34
// callees(0): 

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



//==== 005be18c  ns=Global  size=0x54
// sig: undefined FUN_005be18c(void)
// callers(1): 005beb7c FUN_005beb7c
// callees(0): 

bool FUN_005be18c(int param_1)

{
  return *(int *)(param_1 + 0x1fc) < 0;
}



//==== 005be1e0  ns=Global  size=0xbc
// sig: undefined FUN_005be1e0(void)
// callers(4): 005b8120 FUN_005b8120; 005b872c FUN_005b872c; 005beb7c FUN_005beb7c; 005bff34 FUN_005bff34
// callees(0): 

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



//==== 005be29c  ns=Global  size=0xa0
// sig: undefined FUN_005be29c(void)
// callers(1): 005bff34 FUN_005bff34
// callees(0): 

ulonglong FUN_005be29c(int param_1,uint param_2)

{
  uint uVar1;
  ulonglong uVar2;
  
  uVar1 = *(uint *)(param_1 + (param_2 >> 5) * 4) & 1 << (param_2 + (param_2 >> 5) * -0x20 & 0x3f);
  uVar2 = (ulonglong)((int)uVar1 >> 0x1f);
  return (-((uVar2 ^ uVar1) - uVar2) << 0x20) >> 0x3f;
}



//==== 005be33c  ns=Global  size=0x9c
// sig: undefined FUN_005be33c(void)
// callers(3): 005b7b4c FUN_005b7b4c; 005beb7c FUN_005beb7c; 005c04f8 FUN_005c04f8
// callees(0): 

void FUN_005be33c(int param_1,uint param_2)

{
  uint uVar1;
  
  uVar1 = param_2 >> 5;
  *(uint *)(param_1 + uVar1 * 4) =
       *(uint *)(param_1 + uVar1 * 4) | 1 << (param_2 + uVar1 * -0x20 & 0x3f);
  return;
}



//==== 005be3d8  ns=Global  size=0xa0
// sig: undefined FUN_005be3d8(void)
// callers(0): 
// callees(0): 

void FUN_005be3d8(int param_1,uint param_2)

{
  uint uVar1;
  
  uVar1 = param_2 >> 5;
  *(uint *)(param_1 + uVar1 * 4) =
       *(uint *)(param_1 + uVar1 * 4) & ~(1 << (param_2 + uVar1 * -0x20 & 0x3f));
  return;
}



//==== 005be478  ns=Global  size=0xdc
// sig: undefined FUN_005be478(void)
// callers(8): 005b7454 FUN_005b7454; 005b7b4c FUN_005b7b4c; 005b7fcc FUN_005b7fcc; 005b8120 FUN_005b8120; 005bf0e8 FUN_005bf0e8; 005bf89c FUN_005bf89c; 005c04f8 FUN_005c04f8; 005c0c8c FUN_005c0c8c
// callees(0): 

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



//==== 005be554  ns=Global  size=0x124
// sig: undefined FUN_005be554(void)
// callers(5): 005b7454 FUN_005b7454; 005b7b4c FUN_005b7b4c; 005b8120 FUN_005b8120; 005beb7c FUN_005beb7c; 005bff34 FUN_005bff34
// callees(0): 

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



//==== 005be678  ns=Global  size=0xd4
// sig: undefined FUN_005be678(void)
// callers(0): 
// callees(2): 005c1300 FUN_005c1300; 005c5ad0 libc::memcpy

void * FUN_005be678(void *param_1,void *param_2,undefined4 param_3)

{
  void *pvVar1;
  void *pvStack00000030;
  void *pvStack00000038;
  undefined4 uStack00000040;
  undefined1 auStack_21c [532];
  
  pvStack00000030 = param_1;
  pvStack00000038 = param_2;
  uStack00000040 = param_3;
  libc::memcpy(auStack_21c,param_2,0x200);
  FUN_005c1300(auStack_21c,uStack00000040);
  pvVar1 = libc::memcpy(pvStack00000030,auStack_21c,0x200);
  return pvVar1;
}



//==== 005be74c  ns=Global  size=0xd4
// sig: undefined FUN_005be74c(void)
// callers(2): 005beb7c FUN_005beb7c; 005bf0e8 FUN_005bf0e8
// callees(2): 005c1338 FUN_005c1338; 005c5ad0 libc::memcpy

void * FUN_005be74c(void *param_1,void *param_2,undefined4 param_3)

{
  void *pvVar1;
  void *pvStack00000030;
  void *pvStack00000038;
  undefined4 uStack00000040;
  undefined1 auStack_21c [532];
  
  pvStack00000030 = param_1;
  pvStack00000038 = param_2;
  uStack00000040 = param_3;
  libc::memcpy(auStack_21c,param_2,0x200);
  FUN_005c1338(auStack_21c,uStack00000040);
  pvVar1 = libc::memcpy(pvStack00000030,auStack_21c,0x200);
  return pvVar1;
}



//==== 005be820  ns=Global  size=0xd4
// sig: undefined FUN_005be820(void)
// callers(1): 005b7454 FUN_005b7454
// callees(2): 005c0ed4 FUN_005c0ed4; 005c5ad0 libc::memcpy

void * FUN_005be820(void *param_1,void *param_2,undefined4 param_3)

{
  void *pvVar1;
  void *pvStack00000030;
  void *pvStack00000038;
  undefined4 uStack00000040;
  undefined1 auStack_21c [532];
  
  pvStack00000030 = param_1;
  pvStack00000038 = param_2;
  uStack00000040 = param_3;
  libc::memcpy(auStack_21c,param_2,0x200);
  FUN_005c0ed4(auStack_21c,uStack00000040);
  pvVar1 = libc::memcpy(pvStack00000030,auStack_21c,0x200);
  return pvVar1;
}



//==== 005be8f4  ns=Global  size=0x288
// sig: undefined FUN_005be8f4(void)
// callers(2): 005bf0e8 FUN_005bf0e8; 005bfc70 FUN_005bfc70
// callees(8): 005c11a8 FUN_005c11a8; 005c11f0 FUN_005c11f0; 005c1278 FUN_005c1278; 005c1300 FUN_005c1300; 005c1338 FUN_005c1338; 005c1378 FUN_005c1378; 005c13d0 FUN_005c13d0; 005c5ad0 libc::memcpy

void FUN_005be8f4(void *param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  void *pvStack00000030;
  undefined4 uStack00000038;
  undefined4 uStack00000040;
  uint local_420;
  undefined1 auStack_418 [512];
  undefined1 auStack_218 [528];
  
  pvStack00000030 = param_1;
  uStack00000038 = param_2;
  uStack00000040 = param_3;
  iVar1 = FUN_005c1378(param_2);
  while( true ) {
    libc::memcpy(auStack_218,pvStack00000030,0x200);
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



//==== 005beb7c  ns=Global  size=0x56c
// sig: undefined FUN_005beb7c(void)
// callers(5): 005b7b4c FUN_005b7b4c; 005b8120 FUN_005b8120; 005bf0e8 FUN_005bf0e8; 005bf89c FUN_005bf89c; 005bfc70 FUN_005bfc70
// callees(14): 005bdf90 FUN_005bdf90; 005be18c FUN_005be18c; 005be1e0 FUN_005be1e0; 005be33c FUN_005be33c; 005be554 FUN_005be554; 005be74c FUN_005be74c; 005c11a8 FUN_005c11a8; 005c11f0 FUN_005c11f0; 005c1278 FUN_005c1278; 005c1300 FUN_005c1300; 005c1338 FUN_005c1338; 005c1378 FUN_005c1378; 005c13d0 FUN_005c13d0; 005c5ad0 libc::memcpy

void * FUN_005beb7c(void *param_1,void *param_2)

{
  int iVar1;
  void *pvVar2;
  int iVar3;
  void *pvStack00000030;
  void *pvStack00000038;
  undefined1 auStack_81c [256];
  int local_71c;
  undefined1 auStack_61c [512];
  undefined1 auStack_41c [512];
  undefined1 auStack_21c [532];
  
  pvStack00000030 = param_1;
  pvStack00000038 = param_2;
  libc::memcpy(auStack_61c,param_1,0x200);
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
  libc::memcpy(auStack_81c,auStack_41c,0x200);
  while( true ) {
    if (local_71c != 0) {
      FUN_005bdf90(auStack_81c,1);
      FUN_005c1278(auStack_81c,0x800);
      FUN_005be554(auStack_81c,1);
      pvVar2 = libc::memcpy(pvStack00000038,auStack_81c,0x200);
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
    libc::memcpy(auStack_41c,pvStack00000030,0x200);
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
  pvVar2 = libc::memcpy(pvStack00000038,auStack_81c,0x200);
  return pvVar2;
}



//==== 005bf0e8  ns=Global  size=0x7b4
// sig: undefined FUN_005bf0e8(void)
// callers(3): 005b7454 FUN_005b7454; 005b7fcc FUN_005b7fcc; 005c0c8c FUN_005c0c8c
// callees(15): 005bdf90 FUN_005bdf90; 005be0e8 FUN_005be0e8; 005be478 FUN_005be478; 005be74c FUN_005be74c; 005be8f4 FUN_005be8f4; 005beb7c FUN_005beb7c; 005bf89c FUN_005bf89c; 005c10d0 FUN_005c10d0; 005c1118 FUN_005c1118; 005c11f0 FUN_005c11f0; 005c1278 FUN_005c1278; 005c1300 FUN_005c1300; 005c1338 FUN_005c1338; 005c1378 FUN_005c1378; 005c5ad0 libc::memcpy

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
  undefined1 auStack_c10 [512];
  undefined1 auStack_a10 [512];
  undefined1 auStack_810 [512];
  undefined1 auStack_610 [512];
  undefined1 auStack_410 [512];
  undefined1 auStack_210 [520];
  
  pvStack00000030 = param_1;
  uStack00000038 = param_2;
  pvStack00000040 = param_3;
  FUN_005beb7c(param_2,auStack_410);
  FUN_005bdf90(auStack_c10,1);
  libc::memcpy(auStack_810,pvStack00000030,0x200);
  FUN_005be8f4(auStack_810,uStack00000038,auStack_410);
  FUN_005bf89c(uStack00000038,auStack_810,auStack_a10,auStack_610);
  FUN_005c1300(auStack_a10,auStack_c10);
  FUN_005be74c(auStack_610,auStack_810,auStack_610);
  local_c18 = FUN_005c1378(auStack_810);
  local_c1c = FUN_005c1378(auStack_610);
  do {
    while (local_c1c <= local_c18 + 1) {
      if (local_c1c + 1 < local_c18) {
        libc::memcpy(auStack_210,auStack_a10,0x200);
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
              pvVar2 = libc::memcpy(pvStack00000040,local_c20,0x200);
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
    libc::memcpy(auStack_210,auStack_c10,0x200);
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



//==== 005bf89c  ns=Global  size=0x3d4
// sig: undefined FUN_005bf89c(void)
// callers(1): 005bf0e8 FUN_005bf0e8
// callees(11): 005bdf90 FUN_005bdf90; 005be478 FUN_005be478; 005beb7c FUN_005beb7c; 005c11a8 FUN_005c11a8; 005c11f0 FUN_005c11f0; 005c1278 FUN_005c1278; 005c1300 FUN_005c1300; 005c1338 FUN_005c1338; 005c1378 FUN_005c1378; 005c13d0 FUN_005c13d0; 005c5ad0 libc::memcpy

void * FUN_005bf89c(void *param_1,undefined4 param_2,void *param_3,void *param_4)

{
  int iVar1;
  void *pvVar2;
  void *pvStack00000030;
  undefined4 uStack00000038;
  void *pvStack00000040;
  void *pvStack00000048;
  uint local_81c;
  undefined1 auStack_814 [512];
  undefined1 auStack_614 [512];
  undefined1 auStack_414 [512];
  undefined1 auStack_214 [524];
  
  pvStack00000030 = param_1;
  uStack00000038 = param_2;
  pvStack00000040 = param_3;
  pvStack00000048 = param_4;
  iVar1 = FUN_005c1378(param_2);
  FUN_005beb7c(uStack00000038,auStack_614);
  FUN_005bdf90(auStack_414,0);
  libc::memcpy(auStack_814,pvStack00000030,0x200);
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
      libc::memcpy(auStack_814,pvStack00000030,0x200);
      libc::memcpy(auStack_214,auStack_414,0x200);
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
  libc::memcpy(pvStack00000040,auStack_414,0x200);
  pvVar2 = libc::memcpy(pvStack00000048,auStack_814,0x200);
  return pvVar2;
}



//==== 005bfc70  ns=Global  size=0x2c4
// sig: undefined FUN_005bfc70(void)
// callers(1): 005c07f4 FUN_005c07f4
// callees(6): 005be064 FUN_005be064; 005be8f4 FUN_005be8f4; 005beb7c FUN_005beb7c; 005c1378 FUN_005c1378; 005c13d0 FUN_005c13d0; 005c5ad0 libc::memcpy

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
  undefined1 auStack_41c [512];
  undefined1 auStack_21c [532];
  
  pvStack00000030 = param_1;
  pvStack00000038 = param_2;
  iStack00000040 = param_3;
  pvStack00000048 = param_4;
  iVar1 = FUN_005c1378(param_3);
  iVar2 = FUN_005be064(pvStack00000048);
  if (iVar2 == 0) {
    FUN_005beb7c(pvStack00000048,auStack_41c);
    libc::memcpy(auStack_21c,pvStack00000038,0x200);
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
    pvVar3 = libc::memcpy(pvStack00000030,auStack_21c,0x200);
  }
  else {
    pvVar3 = libc::memcpy(pvStack00000030,pvStack00000048,0x200);
  }
  return pvVar3;
}



//==== 005bff34  ns=Global  size=0x2a4
// sig: undefined FUN_005bff34(void)
// callers(1): 005c04f8 FUN_005c04f8
// callees(9): 005be0e8 FUN_005be0e8; 005be1e0 FUN_005be1e0; 005be29c FUN_005be29c; 005be554 FUN_005be554; 005c07f4 FUN_005c07f4; 005c0ed4 FUN_005c0ed4; 005c11f0 FUN_005c11f0; 005c13d0 FUN_005c13d0; 005c5ad0 libc::memcpy

undefined4 FUN_005bff34(void *param_1,undefined4 param_2)

{
  int iVar1;
  void *pvStack00000030;
  undefined4 uStack00000038;
  uint local_62c;
  uint local_628;
  undefined1 auStack_624 [512];
  undefined1 auStack_424 [512];
  undefined1 auStack_224 [516];
  undefined4 local_20;
  
  pvStack00000030 = param_1;
  uStack00000038 = param_2;
  libc::memcpy(auStack_624,param_1,0x200);
  FUN_005be554(auStack_624,1);
  libc::memcpy(auStack_424,auStack_624,0x200);
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



