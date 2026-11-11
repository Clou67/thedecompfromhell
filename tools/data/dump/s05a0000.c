//==== 005a0134  ns=Global  size=0xe4
// sig: undefined FUN_005a0134(void)
// callers(1): 0058b678 FUN_0058b678
// callees(2): 005a0ab8 FUN_005a0ab8; 005a0b48 FUN_005a0b48

int FUN_005a0134(undefined8 param_1,undefined4 *param_2)

{
  int iVar1;
  undefined1 local_40 [4];
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



//==== 005a0218  ns=Global  size=0x2d8
// sig: undefined FUN_005a0218(void)
// callers(2): 0058b678 FUN_0058b678; 0058bc5c FUN_0058bc5c
// callees(2): 005a0ab8 FUN_005a0ab8; 005a0b48 FUN_005a0b48

int FUN_005a0218(undefined8 param_1,undefined4 *param_2)

{
  int iVar1;
  undefined1 local_50 [4];
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



//==== 005a04f0  ns=Global  size=0xc0
// sig: undefined FUN_005a04f0(void)
// callers(0): 
// callees(1): 00552728 FUN_00552728

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



//==== 005a0648  ns=Global  size=0x84
// sig: undefined FUN_005a0648(void)
// callers(1): 0059fa70 FUN_0059fa70
// callees(1): 00552728 FUN_00552728

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



//==== 005a06cc  ns=Global  size=0x17c
// sig: undefined FUN_005a06cc(void)
// callers(1): 0059fa70 FUN_0059fa70
// callees(1): 00552728 FUN_00552728

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



//==== 005a0ab8  ns=Global  size=0x90
// sig: undefined FUN_005a0ab8(void)
// callers(5): 0059fc48 FUN_0059fc48; 0059fcf0 FUN_0059fcf0; 0059fdd4 FUN_0059fdd4; 005a0134 FUN_005a0134; 005a0218 FUN_005a0218
// callees(1): 00552704 FUN_00552704

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



//==== 005a0b48  ns=Global  size=0xec
// sig: undefined FUN_005a0b48(void)
// callers(5): 0059fc48 FUN_0059fc48; 0059fcf0 FUN_0059fcf0; 0059fdd4 FUN_0059fdd4; 005a0134 FUN_005a0134; 005a0218 FUN_005a0218
// callees(0): 

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



//==== 005a0fa0  ns=Global  size=0x1c
// sig: undefined FUN_005a0fa0(void)
// callers(2): 00591cf4 FUN_00591cf4; 005a0fbc FUN_005a0fbc
// callees(0): 

int FUN_005a0fa0(int param_1)

{
  int iVar1;
  
  iVar1 = 0;
  if (param_1 != 0) {
    iVar1 = *(int *)(param_1 + 0x1dc) + 0x1e4;
  }
  return iVar1;
}



//==== 005a0fbc  ns=Global  size=0x60
// sig: undefined FUN_005a0fbc(void)
// callers(0): 
// callees(1): 005a0fa0 FUN_005a0fa0

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



//==== 005a101c  ns=Global  size=0x160
// sig: undefined FUN_005a101c(void)
// callers(1): 005a117c FUN_005a117c
// callees(0): 

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



//==== 005a117c  ns=Global  size=0x4c
// sig: undefined FUN_005a117c(void)
// callers(1): 004f5be4 FUN_004f5be4
// callees(1): 005a101c FUN_005a101c

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



//==== 005a11c8  ns=Global  size=0xc
// sig: undefined FUN_005a11c8(void)
// callers(0): 
// callees(0): 
// strings: 0067e640: 'rt_msg_client ReleaseVersion 3.05.201103091800'

undefined4 FUN_005a11c8(void)

{
  return *(undefined4 *)PTR_PTR_0071bf30;
}



//==== 005a11d4  ns=Global  size=0x8
// sig: undefined FUN_005a11d4(void)
// callers(0): 
// callees(0): 
// strings: 006605f0: '08:14:18 Mar 10 2011'

undefined * FUN_005a11d4(void)

{
  return PTR_s_08_14_18_Mar_10_2011_0071bf34;
}



//==== 005a11dc  ns=Global  size=0x70
// sig: undefined FUN_005a11dc(void)
// callers(0): 
// callees(0): 

undefined8 FUN_005a11dc(int param_1,undefined8 param_2,undefined1 *param_3,int param_4)

{
  if (*(undefined4 **)(param_1 + 0x58) != (undefined4 *)0x0) {
    (*(code *)**(undefined4 **)(param_1 + 0x58))
              (*(undefined4 *)(param_1 + 0x44),*param_3,param_3[1],param_3[2],param_3[3],
               param_4 + -4,param_3 + 4);
  }
  return 0;
}



//==== 005a124c  ns=Global  size=0x40
// sig: undefined FUN_005a124c(void)
// callers(8): 005a1504 FUN_005a1504; 005a41a8 FUN_005a41a8; 005a52f0 FUN_005a52f0; 005a61ac FUN_005a61ac; 005a9a60 FUN_005a9a60; 005a9dac FUN_005a9dac; 005ab380 FUN_005ab380; 005ab51c FUN_005ab51c
// callees(0): 

undefined4 FUN_005a124c(uint param_1)

{
  if ((*(int *)(PTR_DAT_0071bea4 + 0x8c) != 0) && (param_1 < *(uint *)(PTR_DAT_0071bea4 + 0x90))) {
    return *(undefined4 *)(param_1 * 4 + *(int *)(PTR_DAT_0071bea4 + 0x8c));
  }
  return 0;
}



//==== 005a128c  ns=Global  size=0x110
// sig: undefined FUN_005a128c(void)
// callers(2): 005a139c FUN_005a139c; 005a1504 FUN_005a1504
// callees(0): 

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



//==== 005a139c  ns=Global  size=0x38
// sig: undefined FUN_005a139c(void)
// callers(13): 005a1670 FUN_005a1670; 005a17d0 FUN_005a17d0; 005a1930 FUN_005a1930; 005a1e54 FUN_005a1e54; 005a3f10 FUN_005a3f10; 005a4268 FUN_005a4268; 005a6f40 FUN_005a6f40; 005a8114 FUN_005a8114; 005a896c FUN_005a896c; 005a92c0 FUN_005a92c0; 005a9540 FUN_005a9540; 005a972c FUN_005a972c; 005a9a60 FUN_005a9a60
// callees(1): 005a128c FUN_005a128c

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



//==== 005a13d4  ns=Global  size=0x6c
// sig: undefined FUN_005a13d4(void)
// callers(0): 
// callees(0): 

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



//==== 005a1504  ns=Global  size=0x54
// sig: undefined FUN_005a1504(void)
// callers(31): 005a1558 FUN_005a1558; 005a2400 FUN_005a2400; 005a25a4 FUN_005a25a4; 005a26ac FUN_005a26ac; 005a274c FUN_005a274c; 005a28e0 FUN_005a28e0; 005a29d0 FUN_005a29d0; 005a2b24 FUN_005a2b24; 005a2c08 FUN_005a2c08; 005a2cc8 FUN_005a2cc8; 005a2dac FUN_005a2dac; 005a2e58 FUN_005a2e58; 005a2f0c FUN_005a2f0c; 005a2fe0 FUN_005a2fe0; 005a308c FUN_005a308c; 005a3184 FUN_005a3184; 005a3328 FUN_005a3328; 005a3408 FUN_005a3408; 005a35ac FUN_005a35ac; 005a368c FUN_005a368c; 005a39cc FUN_005a39cc; 005a3d14 FUN_005a3d14; 005a3f10 FUN_005a3f10; 005a401c FUN_005a401c; 005a40e4 FUN_005a40e4
// callees(2): 005a124c FUN_005a124c; 005a128c FUN_005a128c

uint FUN_005a1504(void)

{
  uint uVar1;
  uint uVar2;
  
  uVar1 = FUN_005a124c();
  uVar2 = FUN_005a128c(uVar1);
  return uVar1 & (int)-(((int)uVar2 >> 0x1f ^ uVar2) - ((int)uVar2 >> 0x1f)) >> 0x1f;
}



//==== 005a1558  ns=Global  size=0x84
// sig: undefined FUN_005a1558(void)
// callers(0): 
// callees(1): 005a1504 FUN_005a1504

undefined8 FUN_005a1558(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  
  iVar1 = FUN_005a1504(*(undefined4 *)(param_1 + 8));
  (*(code *)**(undefined4 **)(iVar1 + 0x94))(param_1,param_3,param_4,param_2);
  return 0;
}



//==== 005a15dc  ns=Global  size=0x10
// sig: undefined FUN_005a15dc(void)
// callers(0): 
// callees(0): 

undefined4 FUN_005a15dc(void)

{
  return *(undefined4 *)(PTR_DAT_0071bea4 + 0x90);
}



//==== 005a15ec  ns=Global  size=0x30
// sig: undefined FUN_005a15ec(void)
// callers(2): 005a972c FUN_005a972c; 005ac5b0 FUN_005ac5b0
// callees(0): 

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



//==== 005a166c  ns=Global  size=0x4
// sig: undefined FUN_005a166c(void)
// callers(0): 
// callees(0): 

void FUN_005a166c(void)

{
  return;
}



//==== 005a1670  ns=Global  size=0x160
// sig: undefined FUN_005a1670(void)
// callers(0): 
// callees(3): 00551f9c FUN_00551f9c; 005525a8 FUN_005525a8; 005a139c FUN_005a139c

undefined8 FUN_005a1670(undefined4 *param_1,undefined8 param_2,char *param_3)

{
  char cVar1;
  undefined4 uVar2;
  int iVar3;
  undefined8 uVar4;
  undefined2 local_40;
  undefined1 local_3e [2];
  undefined1 local_3c [2];
  undefined1 local_3a [2];
  undefined1 auStack_38 [4];
  undefined1 local_34 [28];
  
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



//==== 005a17d0  ns=Global  size=0x160
// sig: undefined FUN_005a17d0(void)
// callers(0): 
// callees(2): 00551f9c FUN_00551f9c; 005a139c FUN_005a139c

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



//==== 005a1930  ns=Global  size=0x524
// sig: undefined FUN_005a1930(void)
// callers(0): 
// callees(6): 00551ef4 FUN_00551ef4; 00551f9c FUN_00551f9c; 005525a8 FUN_005525a8; 005574b0 FUN_005574b0; 005a139c FUN_005a139c; 005c5ad0 libc::memcpy

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
  undefined1 auStack_960 [2];
  ushort local_95e;
  undefined1 local_95c [2];
  undefined1 auStack_95a [2];
  undefined1 auStack_958 [2];
  undefined1 auStack_956 [2];
  undefined1 auStack_954 [4];
  undefined4 local_950 [2];
  byte abStack_948 [128];
  undefined1 auStack_8c8 [128];
  undefined1 auStack_848 [2048];
  
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
      libc::memcpy(abStack_948,pbVar12,uVar6);
    }
    else {
      pbVar13 = pbVar9 + 3;
      FUN_00551f9c(pbVar12,local_95c);
      pbVar9 = pbVar13 + uVar6;
      uVar7 = 0;
      libc::memcpy(abStack_948,pbVar13,uVar6);
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
      libc::memcpy(abStack_948,pbVar12,uVar6);
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
  libc::memcpy(auStack_8c8,pbVar12,uVar6);
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



//==== 005a1e54  ns=Global  size=0x2dc
// sig: undefined FUN_005a1e54(void)
// callers(0): 
// callees(4): 00551ef4 FUN_00551ef4; 00551f9c FUN_00551f9c; 005a139c FUN_005a139c; 005c5ad0 libc::memcpy

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
  undefined1 auStack_8b8 [128];
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
      libc::memcpy(auStack_8b8,(void *)(param_3 + 2),0);
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
            libc::memcpy(local_838,(void *)(param_3 + 4),(uint)local_8be[0] << 1);
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



//==== 005a2130  ns=Global  size=0xa8
// sig: undefined FUN_005a2130(void)
// callers(0): 
// callees(2): 005525a8 FUN_005525a8; 005c5ad0 libc::memcpy

undefined8 FUN_005a2130(undefined8 param_1,undefined8 param_2,int param_3,uint param_4)

{
  void *local_20;
  size_t local_1c [3];
  
  if (8 < param_4) {
    FUN_005525a8(param_3,&local_20);
    FUN_005525a8(param_3 + 4,local_1c);
    if (param_4 - 8 == local_1c[0]) {
      libc::memcpy(local_20,(void *)(param_3 + 8),param_4 - 8);
      return 0;
    }
  }
  return 0;
}



//==== 005a21d8  ns=Global  size=0x4c
// sig: undefined FUN_005a21d8(void)
// callers(3): 005a40e4 FUN_005a40e4; 005a41a8 FUN_005a41a8; 005a5404 FUN_005a5404
// callees(1): 005519f0 FUN_005519f0

undefined8 FUN_005a21d8(int param_1)

{
  int *piVar1;
  
  piVar1 = (int *)(param_1 * 4 + *(int *)(PTR_DAT_0071bea4 + 0x8c));
  if (*piVar1 != 0) {
    FUN_005519f0(piVar1);
  }
  return 0;
}



//==== 005a2224  ns=Global  size=0x164
// sig: undefined FUN_005a2224(void)
// callers(1): 005a52f0 FUN_005a52f0
// callees(3): 005519f0 FUN_005519f0; 00551de8 FUN_00551de8; 005c5ad0 libc::memcpy

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
  undefined1 local_40 [4];
  undefined1 local_3c [20];
  
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
      libc::memcpy((void *)0x0,*(void **)(puVar3 + 0x8c),*(int *)(puVar3 + 0x90) << 2);
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



//==== 005a2388  ns=Global  size=0x48
// sig: undefined FUN_005a2388(void)
// callers(28): 005a2400 FUN_005a2400; 005a25a4 FUN_005a25a4; 005a26ac FUN_005a26ac; 005a274c FUN_005a274c; 005a28e0 FUN_005a28e0; 005a29d0 FUN_005a29d0; 005a2b24 FUN_005a2b24; 005a2c08 FUN_005a2c08; 005a2cc8 FUN_005a2cc8; 005a2dac FUN_005a2dac; 005a2e58 FUN_005a2e58; 005a2f0c FUN_005a2f0c; 005a2fe0 FUN_005a2fe0; 005a308c FUN_005a308c; 005a3184 FUN_005a3184; 005a3328 FUN_005a3328; 005a3408 FUN_005a3408; 005a35ac FUN_005a35ac; 005a368c FUN_005a368c; 005a39cc FUN_005a39cc; 005a3d14 FUN_005a3d14; 005a3f10 FUN_005a3f10; 005a401c FUN_005a401c; 005a40e4 FUN_005a40e4; 005a41a8 FUN_005a41a8
// callees(1): 00552e60 FUN_00552e60

undefined4 FUN_005a2388(void)

{
  undefined4 uVar1;
  
  uVar1 = 5;
  if (*(int *)(PTR_DAT_0071bea4 + 0x94) != 0) {
    uVar1 = FUN_00552e60(PTR_DAT_0071bea4 + 0x98,0);
  }
  return uVar1;
}



//==== 005a23d0  ns=Global  size=0x30
// sig: undefined FUN_005a23d0(void)
// callers(28): 005a2400 FUN_005a2400; 005a25a4 FUN_005a25a4; 005a26ac FUN_005a26ac; 005a274c FUN_005a274c; 005a28e0 FUN_005a28e0; 005a29d0 FUN_005a29d0; 005a2b24 FUN_005a2b24; 005a2c08 FUN_005a2c08; 005a2cc8 FUN_005a2cc8; 005a2dac FUN_005a2dac; 005a2e58 FUN_005a2e58; 005a2f0c FUN_005a2f0c; 005a2fe0 FUN_005a2fe0; 005a308c FUN_005a308c; 005a3184 FUN_005a3184; 005a3328 FUN_005a3328; 005a3408 FUN_005a3408; 005a35ac FUN_005a35ac; 005a368c FUN_005a368c; 005a39cc FUN_005a39cc; 005a3d14 FUN_005a3d14; 005a3f10 FUN_005a3f10; 005a401c FUN_005a401c; 005a40e4 FUN_005a40e4; 005a41a8 FUN_005a41a8
// callees(1): 00552c24 FUN_00552c24

void FUN_005a23d0(void)

{
  FUN_00552c24(ZEXT48(PTR_DAT_0071bea4) + 0x98,0);
  return;
}



//==== 005a2400  ns=Global  size=0x1a4
// sig: undefined FUN_005a2400(void)
// callers(0): 
// callees(5): 00551ed8 FUN_00551ed8; 00551f78 FUN_00551f78; 005a1504 FUN_005a1504; 005a2388 FUN_005a2388; 005a23d0 FUN_005a23d0

ulonglong FUN_005a2400(undefined4 param_1,uint param_2,byte param_3,undefined8 param_4,uint param_5)

{
  int iVar1;
  ulonglong uVar2;
  undefined1 uStack_80;
  undefined1 uStack_7f;
  undefined1 auStack_7e [2];
  undefined1 local_7c [76];
  
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



//==== 005a25a4  ns=Global  size=0x108
// sig: undefined FUN_005a25a4(void)
// callers(0): 
// callees(4): 00551f78 FUN_00551f78; 005a1504 FUN_005a1504; 005a2388 FUN_005a2388; 005a23d0 FUN_005a23d0

ulonglong FUN_005a25a4(undefined4 param_1,undefined2 param_2,int param_3)

{
  int iVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  undefined1 local_30;
  undefined1 auStack_2f [15];
  
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



//==== 005a26ac  ns=Global  size=0xa0
// sig: undefined FUN_005a26ac(void)
// callers(0): 
// callees(3): 005a1504 FUN_005a1504; 005a2388 FUN_005a2388; 005a23d0 FUN_005a23d0

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



//==== 005a274c  ns=Global  size=0x194
// sig: undefined FUN_005a274c(void)
// callers(0): 
// callees(5): 00551ed8 FUN_00551ed8; 00551f78 FUN_00551f78; 005a1504 FUN_005a1504; 005a2388 FUN_005a2388; 005a23d0 FUN_005a23d0

int FUN_005a274c(undefined4 param_1,ulonglong param_2,longlong param_3,undefined8 param_4,
                undefined1 param_5)

{
  int iVar1;
  int iVar2;
  ulonglong uVar3;
  undefined1 uStack_90;
  undefined1 uStack_8f;
  undefined1 auStack_8e [2];
  undefined1 local_8c [84];
  
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



//==== 005a28e0  ns=Global  size=0xf0
// sig: undefined FUN_005a28e0(void)
// callers(0): 
// callees(4): 00551f78 FUN_00551f78; 005a1504 FUN_005a1504; 005a2388 FUN_005a2388; 005a23d0 FUN_005a23d0

int FUN_005a28e0(undefined4 param_1,undefined2 param_2)

{
  int iVar1;
  int iVar2;
  undefined1 local_30;
  undefined1 auStack_2f [15];
  
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



//==== 005a29d0  ns=Global  size=0x154
// sig: undefined FUN_005a29d0(void)
// callers(0): 
// callees(5): 00551ed8 FUN_00551ed8; 00551f78 FUN_00551f78; 005a1504 FUN_005a1504; 005a2388 FUN_005a2388; 005a23d0 FUN_005a23d0

int FUN_005a29d0(undefined4 param_1,undefined1 *param_2)

{
  int iVar1;
  int iVar2;
  undefined1 uStack_70;
  undefined1 uStack_6f;
  undefined1 uStack_6e;
  undefined1 uStack_6d;
  undefined1 auStack_6c [4];
  undefined1 local_68 [72];
  
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



//==== 005a2b24  ns=Global  size=0xe4
// sig: undefined FUN_005a2b24(void)
// callers(0): 
// callees(4): 00551f78 FUN_00551f78; 005a1504 FUN_005a1504; 005a2388 FUN_005a2388; 005a23d0 FUN_005a23d0

int FUN_005a2b24(undefined4 param_1,undefined2 param_2)

{
  int iVar1;
  int iVar2;
  undefined1 auStack_30 [24];
  
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



//==== 005a2c08  ns=Global  size=0xc0
// sig: undefined FUN_005a2c08(void)
// callers(0): 
// callees(3): 005a1504 FUN_005a1504; 005a2388 FUN_005a2388; 005a23d0 FUN_005a23d0

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



//==== 005a2cc8  ns=Global  size=0xe4
// sig: undefined FUN_005a2cc8(void)
// callers(0): 
// callees(4): 00551f78 FUN_00551f78; 005a1504 FUN_005a1504; 005a2388 FUN_005a2388; 005a23d0 FUN_005a23d0

int FUN_005a2cc8(undefined4 param_1,undefined2 param_2)

{
  int iVar1;
  int iVar2;
  undefined1 auStack_30 [24];
  
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



//==== 005a2dac  ns=Global  size=0xac
// sig: undefined FUN_005a2dac(void)
// callers(0): 
// callees(3): 005a1504 FUN_005a1504; 005a2388 FUN_005a2388; 005a23d0 FUN_005a23d0

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



//==== 005a2e58  ns=Global  size=0xb4
// sig: undefined FUN_005a2e58(void)
// callers(1): 005a2f0c FUN_005a2f0c
// callees(3): 005a1504 FUN_005a1504; 005a2388 FUN_005a2388; 005a23d0 FUN_005a23d0

int FUN_005a2e58(undefined4 param_1,byte param_2)

{
  int iVar1;
  undefined1 local_20 [16];
  
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



//==== 005a2f0c  ns=Global  size=0xd4
// sig: undefined FUN_005a2f0c(void)
// callers(0): 
// callees(4): 005a1504 FUN_005a1504; 005a2388 FUN_005a2388; 005a23d0 FUN_005a23d0; 005a2e58 FUN_005a2e58

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



//==== 005a2fe0  ns=Global  size=0xac
// sig: undefined FUN_005a2fe0(void)
// callers(0): 
// callees(3): 005a1504 FUN_005a1504; 005a2388 FUN_005a2388; 005a23d0 FUN_005a23d0

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



//==== 005a308c  ns=Global  size=0xf8
// sig: undefined FUN_005a308c(void)
// callers(0): 
// callees(3): 005a1504 FUN_005a1504; 005a2388 FUN_005a2388; 005a23d0 FUN_005a23d0

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



//==== 005a3184  ns=Global  size=0x1a4
// sig: undefined FUN_005a3184(void)
// callers(0): 
// callees(5): 00551ed8 FUN_00551ed8; 00551f78 FUN_00551f78; 005a1504 FUN_005a1504; 005a2388 FUN_005a2388; 005a23d0 FUN_005a23d0

int FUN_005a3184(undefined4 param_1,ulonglong param_2,ulonglong param_3,int param_4)

{
  int iVar1;
  int iVar2;
  ulonglong uVar3;
  undefined1 uStack_80;
  undefined1 auStack_7f [3];
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



//==== 005a3328  ns=Global  size=0xe0
// sig: undefined FUN_005a3328(void)
// callers(0): 
// callees(4): 00551f78 FUN_00551f78; 005a1504 FUN_005a1504; 005a2388 FUN_005a2388; 005a23d0 FUN_005a23d0

int FUN_005a3328(undefined4 param_1,uint param_2)

{
  int iVar1;
  int iVar2;
  undefined1 auStack_30 [24];
  
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



//==== 005a3408  ns=Global  size=0x1a4
// sig: undefined FUN_005a3408(void)
// callers(0): 
// callees(5): 00551ed8 FUN_00551ed8; 00551f78 FUN_00551f78; 005a1504 FUN_005a1504; 005a2388 FUN_005a2388; 005a23d0 FUN_005a23d0

int FUN_005a3408(undefined4 param_1,ulonglong param_2,ulonglong param_3,int param_4)

{
  int iVar1;
  int iVar2;
  ulonglong uVar3;
  undefined1 uStack_80;
  undefined1 auStack_7f [3];
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



//==== 005a35ac  ns=Global  size=0xe0
// sig: undefined FUN_005a35ac(void)
// callers(0): 
// callees(4): 00551f78 FUN_00551f78; 005a1504 FUN_005a1504; 005a2388 FUN_005a2388; 005a23d0 FUN_005a23d0

int FUN_005a35ac(undefined4 param_1,uint param_2)

{
  int iVar1;
  int iVar2;
  undefined1 auStack_30 [24];
  
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



//==== 005a368c  ns=Global  size=0x2d0
// sig: undefined FUN_005a368c(void)
// callers(1): 005a395c FUN_005a395c
// callees(5): 00551ed8 FUN_00551ed8; 00551f78 FUN_00551f78; 005a1504 FUN_005a1504; 005a2388 FUN_005a2388; 005a23d0 FUN_005a23d0

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
  undefined1 auStack_5f [15];
  
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



//==== 005a395c  ns=Global  size=0x70
// sig: undefined FUN_005a395c(void)
// callers(0): 
// callees(1): 005a368c FUN_005a368c

undefined4
FUN_005a395c(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5,undefined8 param_6,undefined8 param_7,undefined4 param_8)

{
  undefined4 uVar1;
  undefined1 local_50 [80];
  
  uVar1 = FUN_005a368c(param_1,param_2,param_3,param_4,param_5,local_50,param_8);
  return uVar1;
}



//==== 005a39cc  ns=Global  size=0x2d8
// sig: undefined FUN_005a39cc(void)
// callers(1): 005a3ca4 FUN_005a3ca4
// callees(5): 00551ed8 FUN_00551ed8; 00551f78 FUN_00551f78; 005a1504 FUN_005a1504; 005a2388 FUN_005a2388; 005a23d0 FUN_005a23d0

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
  undefined1 auStack_5f [15];
  
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



//==== 005a3ca4  ns=Global  size=0x70
// sig: undefined FUN_005a3ca4(void)
// callers(0): 
// callees(1): 005a39cc FUN_005a39cc

undefined4
FUN_005a3ca4(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5,undefined8 param_6,undefined8 param_7,undefined4 param_8)

{
  undefined4 uVar1;
  undefined1 local_50 [80];
  
  uVar1 = FUN_005a39cc(param_1,param_2,param_3,param_4,param_5,local_50,param_8);
  return uVar1;
}



//==== 005a3d14  ns=Global  size=0x194
// sig: undefined FUN_005a3d14(void)
// callers(1): 005a3ea8 FUN_005a3ea8
// callees(3): 005a1504 FUN_005a1504; 005a2388 FUN_005a2388; 005a23d0 FUN_005a23d0

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



//==== 005a3ea8  ns=Global  size=0x68
// sig: undefined FUN_005a3ea8(void)
// callers(0): 
// callees(1): 005a3d14 FUN_005a3d14

undefined4
FUN_005a3ea8(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined8 param_4,
            undefined8 param_5,undefined4 param_6)

{
  undefined4 uVar1;
  undefined1 local_50 [80];
  
  uVar1 = FUN_005a3d14(param_1,param_2,param_3,local_50,param_6);
  return uVar1;
}



//==== 005a3f10  ns=Global  size=0x10c
// sig: undefined FUN_005a3f10(void)
// callers(0): 
// callees(4): 005a139c FUN_005a139c; 005a1504 FUN_005a1504; 005a2388 FUN_005a2388; 005a23d0 FUN_005a23d0

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



//==== 005a401c  ns=Global  size=0xc8
// sig: undefined FUN_005a401c(void)
// callers(0): 
// callees(3): 005a1504 FUN_005a1504; 005a2388 FUN_005a2388; 005a23d0 FUN_005a23d0

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



//==== 005a40e4  ns=Global  size=0xc4
// sig: undefined FUN_005a40e4(void)
// callers(0): 
// callees(4): 005a1504 FUN_005a1504; 005a21d8 FUN_005a21d8; 005a2388 FUN_005a2388; 005a23d0 FUN_005a23d0

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



//==== 005a41a8  ns=Global  size=0xc0
// sig: undefined FUN_005a41a8(void)
// callers(1): 005a9540 FUN_005a9540
// callees(4): 005a124c FUN_005a124c; 005a21d8 FUN_005a21d8; 005a2388 FUN_005a2388; 005a23d0 FUN_005a23d0

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



//==== 005a4268  ns=Global  size=0x34c
// sig: undefined FUN_005a4268(void)
// callers(0): 
// callees(6): 00551ef4 FUN_00551ef4; 00551f9c FUN_00551f9c; 005525a8 FUN_005525a8; 005a139c FUN_005a139c; 005c5ad0 libc::memcpy; 005d0140 libc::memset

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
  undefined1 local_28ce [2];
  undefined1 local_28cc [12];
  undefined1 auStack_28c0 [16];
  undefined1 auStack_28b0 [16];
  undefined1 auStack_28a0 [16];
  undefined1 auStack_2890 [16];
  undefined1 auStack_2880 [16];
  undefined1 auStack_2870 [16];
  undefined1 auStack_2860 [16];
  undefined8 uStack_2850;
  undefined4 uStack_2848;
  undefined2 uStack_2844;
  undefined1 uStack_2842;
  undefined1 auStack_2840 [2032];
  undefined1 auStack_2050 [2032];
  undefined1 auStack_1860 [2032];
  undefined1 auStack_1070 [4072];
  
  auStack_2860 = (undefined1  [16])0x0;
  auStack_28b0 = (undefined1  [16])0x0;
  auStack_28c0 = (undefined1  [16])0x0;
  auStack_28a0 = (undefined1  [16])0x0;
  auStack_2890 = (undefined1  [16])0x0;
  auStack_2880 = (undefined1  [16])0x0;
  auStack_2870 = (undefined1  [16])0x0;
  uStack_2844 = 0;
  uStack_2848 = 0;
  uStack_2842 = 0;
  uStack_2850 = 0;
  libc::memset(auStack_1070,0,0xfe0);
  libc::memset(auStack_2840,0,0x7f0);
  libc::memset(auStack_2050,0,0x7f0);
  libc::memset(auStack_1860,0,0x7f0);
  cVar2 = *param_3;
  FUN_00551ef4(param_3 + 1,local_28d0);
  pcVar8 = param_3 + 2;
  if ((char)local_28d0[0] < '\0') {
    pcVar8 = param_3 + 4;
    FUN_00551f9c(param_3 + 2,local_28ce);
    local_28d0[0] = local_28d0[0] & 0x7f;
  }
  uVar5 = 0;
  libc::memcpy(auStack_28c0,pcVar8,(uint)local_28d0[0]);
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



//==== 005a45b4  ns=Global  size=0x78
// sig: undefined FUN_005a45b4(void)
// callers(0): 
// callees(1): 005d0140 libc::memset

void FUN_005a45b4(undefined4 *param_1)

{
  libc::memset(param_1,0,0x58);
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



//==== 005a462c  ns=Global  size=0x20
// sig: undefined FUN_005a462c(void)
// callers(1): 004f5be4 FUN_004f5be4
// callees(0): 

undefined8 FUN_005a462c(undefined4 *param_1)

{
  param_1[2] = 1;
  param_1[1] = 0;
  *param_1 = 0;
  return 0;
}



//==== 005a464c  ns=Global  size=0xb4
// sig: undefined FUN_005a464c(void)
// callers(2): 005a8114 FUN_005a8114; 005ab2d0 FUN_005ab2d0
// callees(4): 00552570 FUN_00552570; 0055769c FUN_0055769c; 005a2388 FUN_005a2388; 005a23d0 FUN_005a23d0

int FUN_005a464c(int param_1,undefined4 param_2)

{
  int iVar1;
  undefined1 auStack_30 [4];
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



//==== 005a4700  ns=Global  size=0x80
// sig: undefined FUN_005a4700(void)
// callers(0): 
// callees(3): 005525a8 FUN_005525a8; 005574f4 FUN_005574f4; 0055769c FUN_0055769c

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



//==== 005a4780  ns=Global  size=0x1bc
// sig: undefined FUN_005a4780(void)
// callers(0): 
// callees(4): 00551ed8 FUN_00551ed8; 00552570 FUN_00552570; 005525a8 FUN_005525a8; 005a1504 FUN_005a1504

undefined8 FUN_005a4780(int param_1,undefined8 param_2,byte *param_3,uint param_4)

{
  byte bVar1;
  undefined8 uVar2;
  int iVar3;
  undefined4 local_600 [2];
  undefined1 auStack_5f8 [8];
  undefined4 local_5f0 [4];
  undefined1 uStack_5dd;
  undefined1 auStack_5dc [4];
  undefined1 auStack_5d8 [4];
  undefined1 auStack_5d4 [1396];
  
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



//==== 005a52f0  ns=Global  size=0x114
// sig: undefined FUN_005a52f0(void)
// callers(0): 
// callees(6): 005a124c FUN_005a124c; 005a2224 FUN_005a2224; 005a2388 FUN_005a2388; 005a23d0 FUN_005a23d0; 005a562c FUN_005a562c; 005aa4dc FUN_005aa4dc

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



//==== 005a5404  ns=Global  size=0x178
// sig: undefined FUN_005a5404(void)
// callers(0): 
// callees(8): 005519f0 FUN_005519f0; 00552f64 FUN_00552f64; 005a1504 FUN_005a1504; 005a21d8 FUN_005a21d8; 005a2388 FUN_005a2388; 005a23d0 FUN_005a23d0; 005aa3d0 FUN_005aa3d0; 005aa4d4 FUN_005aa4d4

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



//==== 005a557c  ns=Global  size=0xb0
// sig: undefined FUN_005a557c(void)
// callers(0): 
// callees(3): 00552fdc FUN_00552fdc; 005aa458 FUN_005aa458; 005aa4cc FUN_005aa4cc

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



//==== 005a562c  ns=Global  size=0x7c
// sig: undefined FUN_005a562c(void)
// callers(1): 005a52f0 FUN_005a52f0
// callees(0): 

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



//==== 005a56a8  ns=Global  size=0x30
// sig: undefined FUN_005a56a8(void)
// callers(0): 
// callees(0): 

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



//==== 005a56d8  ns=Global  size=0x50
// sig: undefined FUN_005a56d8(void)
// callers(0): 
// callees(0): 

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



//==== 005a5728  ns=Global  size=0x3c
// sig: undefined FUN_005a5728(void)
// callers(0): 
// callees(0): 

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



//==== 005a5764  ns=Global  size=0x34
// sig: undefined FUN_005a5764(void)
// callers(0): 
// callees(1): 0054eb50 FUN_0054eb50

undefined4 FUN_005a5764(int param_1)

{
  undefined4 uVar1;
  
  uVar1 = FUN_0054eb50(*(undefined4 *)(*(int *)(*(int *)(param_1 + 0x78) + 0xc) + 0x10));
  return uVar1;
}



//==== 005a5798  ns=Global  size=0x1d8
// sig: undefined FUN_005a5798(void)
// callers(0): 
// callees(2): 005a1504 FUN_005a1504; 005c20f0 FUN_005c20f0

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
  undefined1 local_80 [4];
  undefined1 local_7c [12];
  
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



//==== 005a5970  ns=Global  size=0x19c
// sig: undefined FUN_005a5970(void)
// callers(2): 005a5b0c FUN_005a5b0c; 005a7050 FUN_005a7050
// callees(2): 0054f7a0 FUN_0054f7a0; 0054f908 FUN_0054f908

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



//==== 005a5b0c  ns=Global  size=0x404
// sig: undefined FUN_005a5b0c(void)
// callers(4): 005a5f10 FUN_005a5f10; 005a61ac FUN_005a61ac; 005a6d7c FUN_005a6d7c; 005a8114 FUN_005a8114
// callees(5): 00556f40 thunk_FUN_00556a58; 005a5970 FUN_005a5970; 005c20c8 FUN_005c20c8; 005c20f0 FUN_005c20f0; 005c299c FUN_005c299c

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



//==== 005a5f10  ns=Global  size=0x29c
// sig: undefined FUN_005a5f10(void)
// callers(2): 005a61ac FUN_005a61ac; 005a6718 FUN_005a6718
// callees(5): 005a5b0c FUN_005a5b0c; 005c21a8 FUN_005c21a8; 005c22c0 FUN_005c22c0; 005c2368 FUN_005c2368; 005c2880 FUN_005c2880

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
  undefined1 local_60 [4];
  undefined1 local_5c [12];
  
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



//==== 005a61ac  ns=Global  size=0x56c
// sig: undefined FUN_005a61ac(void)
// callers(4): 005a6718 FUN_005a6718; 005a6e30 FUN_005a6e30; 005a8114 FUN_005a8114; 005a9a60 FUN_005a9a60
// callees(10): 00551ed8 FUN_00551ed8; 00551ef4 FUN_00551ef4; 00551f78 FUN_00551f78; 00551f9c FUN_00551f9c; 00552570 FUN_00552570; 005a124c FUN_005a124c; 005a5b0c FUN_005a5b0c; 005a5f10 FUN_005a5f10; 005c2880 FUN_005c2880; 005c5ad0 libc::memcpy

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
  undefined1 local_60 [2];
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
    libc::memcpy(*(void **)PTR_DAT_0071bf98,(void *)((int)__dest + 3),(uint)local_5e[0]);
    iVar10 = (int)__dest - *(int *)(iVar6 + 0x6c);
    iVar10 = (iVar10 + 3U & 0xfffffffc) - iVar10;
    if (iVar10 != 0) {
      __dest = (void *)((int)__dest + iVar10);
    }
    __src = *(void **)puVar9;
    *(short *)(iVar6 + 0x96) = 3 - (short)iVar10;
    libc::memcpy(__dest,__src,(uint)local_5e[0]);
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



//==== 005a6718  ns=Global  size=0x5f4
// sig: undefined FUN_005a6718(void)
// callers(2): 005a6d0c FUN_005a6d0c; 005a6e30 FUN_005a6e30
// callees(8): 00551ed8 FUN_00551ed8; 00551f78 FUN_00551f78; 005a5f10 FUN_005a5f10; 005a61ac FUN_005a61ac; 005c21a8 FUN_005c21a8; 005c22c0 FUN_005c22c0; 005c2880 FUN_005c2880; 005c5ad0 libc::memcpy

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
  undefined1 local_7c [12];
  
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
            libc::memcpy(pvVar14,*(void **)(param_4 + iVar15 * 8),*(size_t *)(iVar12 + 4));
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
            libc::memcpy(pvVar13,*(void **)(param_4 + iVar15 * 8),*(size_t *)(iVar11 + 4));
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



//==== 005a6d0c  ns=Global  size=0x70
// sig: undefined FUN_005a6d0c(void)
// callers(7): 005a7684 FUN_005a7684; 005a79d0 FUN_005a79d0; 005a8114 FUN_005a8114; 005a896c FUN_005a896c; 005a9148 FUN_005a9148; 005a9540 FUN_005a9540; 005a972c FUN_005a972c
// callees(1): 005a6718 FUN_005a6718

undefined4
FUN_005a6d0c(undefined4 param_1,undefined4 param_2,undefined4 param_3,longlong param_4,int param_5,
            undefined4 param_6)

{
  undefined4 uVar1;
  undefined1 local_50 [80];
  
  if ((param_4 != 0) || (uVar1 = 2, param_5 == 0)) {
    uVar1 = FUN_005a6718(param_1,param_2,param_3,local_50,param_6);
  }
  return uVar1;
}



//==== 005a6d7c  ns=Global  size=0xb4
// sig: undefined FUN_005a6d7c(void)
// callers(2): 005a6e30 FUN_005a6e30; 005a9a60 FUN_005a9a60
// callees(3): 00556c4c thunk_FUN_00556bb8; 00556f40 thunk_FUN_00556a58; 005a5b0c FUN_005a5b0c

/* WARNING: Removing unreachable block (ram,0x005a6e00) */

int FUN_005a6d7c(int param_1)

{
  int iVar1;
  int iVar2;
  undefined1 local_40 [4];
  undefined1 auStack_3c [20];
  
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



//==== 005a6e30  ns=Global  size=0xa8
// sig: undefined FUN_005a6e30(void)
// callers(1): 005a6ed8 FUN_005a6ed8
// callees(3): 005a61ac FUN_005a61ac; 005a6718 FUN_005a6718; 005a6d7c FUN_005a6d7c

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



//==== 005a6ed8  ns=Global  size=0x68
// sig: undefined FUN_005a6ed8(void)
// callers(1): 005a9a60 FUN_005a9a60
// callees(1): 005a6e30 FUN_005a6e30

undefined4 FUN_005a6ed8(undefined4 param_1,longlong param_2,int param_3,undefined4 param_4)

{
  undefined4 uVar1;
  undefined1 local_50 [80];
  
  if ((param_2 != 0) || (uVar1 = 2, param_3 == 0)) {
    uVar1 = FUN_005a6e30(param_1,local_50,param_4);
  }
  return uVar1;
}



//==== 005a6f40  ns=Global  size=0x110
// sig: undefined FUN_005a6f40(void)
// callers(0): 
// callees(2): 00551f9c FUN_00551f9c; 005a139c FUN_005a139c

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



//==== 005a7050  ns=Global  size=0x504
// sig: undefined FUN_005a7050(void)
// callers(1): 005a7554 FUN_005a7554
// callees(8): 00551ed8 FUN_00551ed8; 00551f78 FUN_00551f78; 00552570 FUN_00552570; 00552968 FUN_00552968; 00556c4c thunk_FUN_00556bb8; 00556f40 thunk_FUN_00556a58; 005a5970 FUN_005a5970; 005c5ad0 libc::memcpy

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
      libc::memcpy(__dest,__src,(size_t)uVar15);
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



//==== 005a7554  ns=Global  size=0x130
// sig: undefined FUN_005a7554(void)
// callers(2): 005a8114 FUN_005a8114; 005a9dac FUN_005a9dac
// callees(3): 0054ea34 FUN_0054ea34; 00556f40 thunk_FUN_00556a58; 005a7050 FUN_005a7050

/* WARNING: Removing unreachable block (ram,0x005a75b4) */
/* WARNING: Removing unreachable block (ram,0x005a75b8) */
/* WARNING: Removing unreachable block (ram,0x005a75d0) */
/* WARNING: Removing unreachable block (ram,0x005a760c) */
/* WARNING: Removing unreachable block (ram,0x005a7618) */
/* WARNING: Removing unreachable block (ram,0x005a7650) */

undefined4 FUN_005a7554(int param_1)

{
  undefined4 uVar1;
  undefined1 local_40 [24];
  
  uVar1 = FUN_0054ea34(*(undefined4 *)(*(int *)(*(int *)(param_1 + 0x78) + 0xc) + 0x10),local_40);
  return uVar1;
}



//==== 005a7684  ns=Global  size=0x218
// sig: undefined FUN_005a7684(void)
// callers(2): 005a789c FUN_005a789c; 005a896c FUN_005a896c
// callees(4): 00552570 FUN_00552570; 005a6d0c FUN_005a6d0c; 005c5ad0 libc::memcpy; 005d0140 libc::memset

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
    libc::memset(lVar1 + 0x78U & 0xffffffff,0,0x40);
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
    libc::memcpy(puVar5 + 0x17,__src,__n);
  }
  uVar2 = (int)param_1[3] >> 0x1f;
  uVar10 = FUN_005a6d0c(param_1[0x1e],(int)(uVar2 - (uVar2 ^ param_1[3])) >> 0x1f & 0x15,0xffff,
                        uVar7,uVar6,0xc0);
  return uVar10;
}



//==== 005a789c  ns=Global  size=0x134
// sig: undefined FUN_005a789c(void)
// callers(0): 
// callees(2): 00551f9c FUN_00551f9c; 005a7684 FUN_005a7684

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



//==== 005a79d0  ns=Global  size=0x1f4
// sig: undefined FUN_005a79d0(void)
// callers(2): 005a8114 FUN_005a8114; 005a9028 FUN_005a9028
// callees(5): 0054eecc FUN_0054eecc; 00551f78 FUN_00551f78; 00552570 FUN_00552570; 00556f40 thunk_FUN_00556a58; 005a6d0c FUN_005a6d0c

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



//==== 005a7bc4  ns=Global  size=0x204
// sig: undefined FUN_005a7bc4(void)
// callers(1): 005a8114 FUN_005a8114
// callees(1): 005525a8 FUN_005525a8

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
  undefined1 local_4c [12];
  
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



//==== 005a8114  ns=Global  size=0x858
// sig: undefined FUN_005a8114(void)
// callers(0): 
// callees(26): 0054ee38 FUN_0054ee38; 0054f314 FUN_0054f314; 0054f464 FUN_0054f464; 00550d54 FUN_00550d54; 00551f78 FUN_00551f78; 00551f9c FUN_00551f9c; 00556c4c thunk_FUN_00556bb8; 00556f40 thunk_FUN_00556a58; 0055743c FUN_0055743c; 005a139c FUN_005a139c; 005a1504 FUN_005a1504; 005a464c FUN_005a464c; 005a5b0c FUN_005a5b0c; 005a61ac FUN_005a61ac; 005a6d0c FUN_005a6d0c; 005a7554 FUN_005a7554; 005a79d0 FUN_005a79d0; 005a7bc4 FUN_005a7bc4; 005c2118 FUN_005c2118; 005c21a8 FUN_005c21a8; 005c2218 FUN_005c2218; 005c22c0 FUN_005c22c0; 005c2368 FUN_005c2368; 005c26e4 FUN_005c26e4; 005c2880 FUN_005c2880; 005c299c FUN_005c299c

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
  undefined1 auStack_80 [8];
  undefined1 local_78 [8];
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



//==== 005a896c  ns=Global  size=0x64c
// sig: undefined FUN_005a896c(void)
// callers(0): 
// callees(7): 00550edc FUN_00550edc; 00551f9c FUN_00551f9c; 005525a8 FUN_005525a8; 00552604 FUN_00552604; 005a139c FUN_005a139c; 005a6d0c FUN_005a6d0c; 005a7684 FUN_005a7684

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
  undefined1 local_11e [2];
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
  undefined1 auStack_100 [64];
  undefined1 auStack_c0 [64];
  undefined1 auStack_80 [64];
  
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



//==== 005a8fb8  ns=Global  size=0x38
// sig: undefined FUN_005a8fb8(void)
// callers(0): 
// callees(1): 005519f0 FUN_005519f0

void FUN_005a8fb8(longlong param_1)

{
  undefined1 local_10 [16];
  
  if (param_1 != 0) {
    FUN_005519f0(local_10);
  }
  return;
}



//==== 005a8ff0  ns=Global  size=0x38
// sig: undefined FUN_005a8ff0(void)
// callers(0): 
// callees(1): 00551de8 FUN_00551de8

undefined4 FUN_005a8ff0(undefined8 param_1)

{
  undefined1 local_10 [16];
  
  FUN_00551de8(local_10,param_1);
  return 0;
}



//==== 005a9028  ns=Global  size=0x120
// sig: undefined FUN_005a9028(void)
// callers(0): 
// callees(3): 0054ef70 FUN_0054ef70; 00551f9c FUN_00551f9c; 005a79d0 FUN_005a79d0

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



//==== 005a9148  ns=Global  size=0x178
// sig: undefined FUN_005a9148(void)
// callers(0): 
// callees(4): 0054ef70 FUN_0054ef70; 00551f9c FUN_00551f9c; 005525a8 FUN_005525a8; 005a6d0c FUN_005a6d0c

int FUN_005a9148(int param_1,undefined8 param_2,int param_3,uint param_4)

{
  undefined4 uVar1;
  int iVar2;
  undefined1 auStack_30 [2];
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



//==== 005a92c0  ns=Global  size=0x280
// sig: undefined FUN_005a92c0(void)
// callers(0): 
// callees(5): 0054ef70 FUN_0054ef70; 00551f9c FUN_00551f9c; 005525a8 FUN_005525a8; 00552650 FUN_00552650; 005a139c FUN_005a139c

undefined8 FUN_005a92c0(uint *param_1,int param_2,int param_3,int param_4)

{
  uint uVar1;
  int iVar2;
  undefined8 uVar3;
  undefined2 local_70 [2];
  undefined1 auStack_6c [4];
  undefined8 local_68;
  undefined1 auStack_60 [72];
  
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



//==== 005a9540  ns=Global  size=0x1ec
// sig: undefined FUN_005a9540(void)
// callers(0): 
// callees(7): 00551ef4 FUN_00551ef4; 00551f9c FUN_00551f9c; 005a139c FUN_005a139c; 005a41a8 FUN_005a41a8; 005a6d0c FUN_005a6d0c; 005c5ad0 libc::memcpy; 005c8510 libc::strlen
// strings: 0067e670: 'default_server_password_string'

undefined4 FUN_005a9540(undefined4 *param_1,undefined8 param_2,int param_3)

{
  char *__s;
  undefined4 uVar1;
  int iVar2;
  size_t __n;
  byte local_670 [2];
  short local_66e [3];
  undefined1 local_668 [2];
  undefined1 auStack_666 [1606];
  
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
      __n = libc::strlen(__s);
      libc::memcpy(auStack_666,__s,__n);
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



//==== 005a972c  ns=Global  size=0x2a0
// sig: undefined FUN_005a972c(void)
// callers(0): 
// callees(7): 0054ef70 FUN_0054ef70; 00551f9c FUN_00551f9c; 005525a8 FUN_005525a8; 005573e0 FUN_005573e0; 005a139c FUN_005a139c; 005a15ec FUN_005a15ec; 005a6d0c FUN_005a6d0c

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
  undefined1 local_48 [4];
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



//==== 005a99cc  ns=Global  size=0x94
// sig: undefined FUN_005a99cc(void)
// callers(2): 005a9a60 FUN_005a9a60; 005a9c48 FUN_005a9c48
// callees(2): 005519f0 FUN_005519f0; 005c2ab8 FUN_005c2ab8

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



//==== 005a9a60  ns=Global  size=0x1e8
// sig: undefined FUN_005a9a60(void)
// callers(0): 
// callees(8): 0054fe64 FUN_0054fe64; 005519f0 FUN_005519f0; 005a124c FUN_005a124c; 005a139c FUN_005a139c; 005a61ac FUN_005a61ac; 005a6d7c FUN_005a6d7c; 005a6ed8 FUN_005a6ed8; 005a99cc FUN_005a99cc

void FUN_005a9a60(uint param_1)

{
  bool bVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  undefined4 *puVar7;
  undefined1 local_50 [24];
  
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



//==== 005a9c48  ns=Global  size=0x164
// sig: undefined FUN_005a9c48(void)
// callers(1): 005a9dac FUN_005a9dac
// callees(3): 00551de8 FUN_00551de8; 005a99cc FUN_005a99cc; 005c2b28 FUN_005c2b28

/* WARNING: Removing unreachable block (ram,0x005a9ca8) */
/* WARNING: Removing unreachable block (ram,0x005a9cd4) */
/* WARNING: Removing unreachable block (ram,0x005a9d30) */
/* WARNING: Removing unreachable block (ram,0x005a9d68) */
/* WARNING: Removing unreachable block (ram,0x005a9da8) */
/* WARNING: Removing unreachable block (ram,0x005a9cfc) */

undefined4 FUN_005a9c48(void)

{
  undefined1 local_40 [24];
  
  FUN_00551de8(local_40,0x10);
  FUN_005a99cc(0);
  return 0;
}



//==== 005a9dac  ns=Global  size=0x624
// sig: undefined FUN_005a9dac(void)
// callers(0): 
// callees(11): 0054edb0 FUN_0054edb0; 005500a8 FUN_005500a8; 00550edc FUN_00550edc; 005519f0 FUN_005519f0; 00551de8 FUN_00551de8; 00556f40 thunk_FUN_00556a58; 005a124c FUN_005a124c; 005a7554 FUN_005a7554; 005a9c48 FUN_005a9c48; 005c20c8 FUN_005c20c8; 005c5ad0 libc::memcpy

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
  undefined1 local_68 [24];
  
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
      libc::memcpy(piVar10 + 3,param_2,0x58);
      if ((param_2[0xb] == 0) || (param_2[0xc] == 0)) {
        piVar10[0xf] = 0;
        piVar10[0xe] = 0;
      }
      else {
        uVar7 = FUN_00551de8(piVar10 + 0xe,param_2[0xc]);
        if (uVar7 != 0) goto LAB_005a9e20;
        libc::memcpy((void *)piVar10[0xe],(void *)param_2[0xb],param_2[0xc]);
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



//==== 005aa3d0  ns=Global  size=0x88
// sig: undefined FUN_005aa3d0(void)
// callers(1): 005a5404 FUN_005a5404
// callees(2): 0054ff9c FUN_0054ff9c; 005519f0 FUN_005519f0

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



//==== 005aa458  ns=Global  size=0x74
// sig: undefined FUN_005aa458(void)
// callers(1): 005a557c FUN_005a557c
// callees(2): 00550d60 FUN_00550d60; 005510cc FUN_005510cc

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



//==== 005aa4cc  ns=Global  size=0x8
// sig: undefined FUN_005aa4cc(void)
// callers(1): 005a557c FUN_005a557c
// callees(0): 

undefined8 FUN_005aa4cc(void)

{
  return 0;
}



//==== 005aa4d4  ns=Global  size=0x8
// sig: undefined FUN_005aa4d4(void)
// callers(1): 005a5404 FUN_005a5404
// callees(0): 

undefined8 FUN_005aa4d4(void)

{
  return 0;
}



//==== 005aa4dc  ns=Global  size=0x7c
// sig: undefined FUN_005aa4dc(void)
// callers(1): 005a52f0 FUN_005a52f0
// callees(0): 

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



//==== 005aa558  ns=Global  size=0x50
// sig: undefined FUN_005aa558(void)
// callers(15): 005aa5a8 FUN_005aa5a8; 005aa624 FUN_005aa624; 005aa7d4 FUN_005aa7d4; 005aa95c FUN_005aa95c; 005aab0c FUN_005aab0c; 005aac48 FUN_005aac48; 005aafb0 FUN_005aafb0; 005ab98c FUN_005ab98c; 005aba94 FUN_005aba94; 005abd98 FUN_005abd98; 005abffc FUN_005abffc; 005ac1dc FUN_005ac1dc; 005ac3fc FUN_005ac3fc; 005ac5b0 FUN_005ac5b0; 005ac824 FUN_005ac824
// callees(0): 

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



//==== 005aa5a8  ns=Global  size=0x7c
// sig: undefined FUN_005aa5a8(void)
// callers(0): 
// callees(1): 005aa558 FUN_005aa558

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



//==== 005aa624  ns=Global  size=0xa0
// sig: undefined FUN_005aa624(void)
// callers(0): 
// callees(1): 005aa558 FUN_005aa558

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



//==== 005aa6c4  ns=Global  size=0x10
// sig: undefined FUN_005aa6c4(void)
// callers(0): 
// callees(0): 

undefined8 FUN_005aa6c4(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 4;
}



//==== 005aa6d4  ns=Global  size=0x100
// sig: undefined FUN_005aa6d4(void)
// callers(8): 005ab98c FUN_005ab98c; 005aba94 FUN_005aba94; 005abd98 FUN_005abd98; 005abffc FUN_005abffc; 005ac1dc FUN_005ac1dc; 005ac3fc FUN_005ac3fc; 005ac5b0 FUN_005ac5b0; 005ac824 FUN_005ac824
// callees(0): 

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



//==== 005aa7d4  ns=Global  size=0x188
// sig: undefined FUN_005aa7d4(void)
// callers(0): 
// callees(2): 005a1504 FUN_005a1504; 005aa558 FUN_005aa558

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



//==== 005aa95c  ns=Global  size=0x1b0
// sig: undefined FUN_005aa95c(void)
// callers(0): 
// callees(3): 00551ed8 FUN_00551ed8; 00551f78 FUN_00551f78; 005aa558 FUN_005aa558

int FUN_005aa95c(int param_1,int param_2,undefined1 param_3)

{
  undefined4 *puVar1;
  undefined *puVar2;
  int iVar3;
  int iVar4;
  undefined1 uStack_40;
  undefined1 auStack_3f [3];
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



//==== 005aab0c  ns=Global  size=0x13c
// sig: undefined FUN_005aab0c(void)
// callers(5): 005ab380 FUN_005ab380; 005abf68 FUN_005abf68; 005ac164 FUN_005ac164; 005ac354 FUN_005ac354; 005ac6e8 FUN_005ac6e8
// callees(3): 00551ed8 FUN_00551ed8; 00551f78 FUN_00551f78; 005aa558 FUN_005aa558

int FUN_005aab0c(int param_1,undefined8 param_2,undefined2 param_3,undefined1 param_4)

{
  undefined4 *puVar1;
  undefined *puVar2;
  int iVar3;
  int iVar4;
  undefined1 uStack_80;
  undefined1 auStack_7f [3];
  int local_7c;
  undefined1 local_78 [72];
  
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



//==== 005aac48  ns=Global  size=0x368
// sig: undefined FUN_005aac48(void)
// callers(0): 
// callees(3): 00551ed8 FUN_00551ed8; 00551f78 FUN_00551f78; 005aa558 FUN_005aa558

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
  undefined1 auStack_70 [2];
  undefined1 auStack_6e [6];
  undefined1 uStack_68;
  undefined1 auStack_67 [3];
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



//==== 005aafb0  ns=Global  size=0x320
// sig: undefined FUN_005aafb0(void)
// callers(0): 
// callees(3): 00551ed8 FUN_00551ed8; 00551f78 FUN_00551f78; 005aa558 FUN_005aa558

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
  undefined1 auStack_b0 [2];
  undefined1 auStack_ae [6];
  undefined1 uStack_a8;
  undefined1 auStack_a7 [3];
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



//==== 005ab2d0  ns=Global  size=0xb0
// sig: undefined FUN_005ab2d0(void)
// callers(0): 
// callees(3): 0055743c FUN_0055743c; 005a1504 FUN_005a1504; 005a464c FUN_005a464c

/* WARNING: Removing unreachable block (ram,0x005ab354) */

undefined8 FUN_005ab2d0(void)

{
  int iVar2;
  undefined8 uVar1;
  undefined1 local_20 [16];
  
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



//==== 005ab380  ns=Global  size=0x19c
// sig: undefined FUN_005ab380(void)
// callers(0): 
// callees(3): 005519f0 FUN_005519f0; 005a124c FUN_005a124c; 005aab0c FUN_005aab0c

void FUN_005ab380(void)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined *puVar6;
  int iVar7;
  undefined1 local_40 [24];
  
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



//==== 005ab51c  ns=Global  size=0x470
// sig: undefined FUN_005ab51c(void)
// callers(0): 
// callees(5): 00551de8 FUN_00551de8; 00552968 FUN_00552968; 005a124c FUN_005a124c; 005c5ad0 libc::memcpy; 005d0140 libc::memset

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
    libc::memcpy(puVar6 + 3,param_2,0x58);
    if ((param_2[0xb] == 0) || (param_2[0xc] == 0)) {
      puVar6[0xf] = 0;
      puVar6[0xe] = 0;
    }
    else {
      uVar5 = FUN_00551de8(puVar6 + 0xe,param_2[0xc]);
      if (uVar5 != 0) goto LAB_005ab85c;
      libc::memcpy((void *)puVar6[0xe],(void *)param_2[0xb],param_2[0xc]);
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
            libc::memset(uVar5,0,0x50);
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



//==== 005ab98c  ns=Global  size=0x108
// sig: undefined FUN_005ab98c(void)
// callers(0): 
// callees(3): 00551f9c FUN_00551f9c; 005aa558 FUN_005aa558; 005aa6d4 FUN_005aa6d4

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



//==== 005aba94  ns=Global  size=0x110
// sig: undefined FUN_005aba94(void)
// callers(0): 
// callees(4): 00551ef4 FUN_00551ef4; 00551f9c FUN_00551f9c; 005aa558 FUN_005aa558; 005aa6d4 FUN_005aa6d4

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



//==== 005abd98  ns=Global  size=0x1d0
// sig: undefined FUN_005abd98(void)
// callers(0): 
// callees(5): 0054ef70 FUN_0054ef70; 00551f9c FUN_00551f9c; 005525a8 FUN_005525a8; 005aa558 FUN_005aa558; 005aa6d4 FUN_005aa6d4

int FUN_005abd98(int param_1,int param_2,int param_3,int param_4)

{
  int iVar1;
  int iVar2;
  undefined2 local_40 [2];
  undefined1 auStack_3c [12];
  
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



//==== 005abf68  ns=Global  size=0x94
// sig: undefined FUN_005abf68(void)
// callers(1): 005abffc FUN_005abffc
// callees(2): 00551ed8 FUN_00551ed8; 005aab0c FUN_005aab0c

undefined4 FUN_005abf68(int param_1)

{
  undefined4 uVar1;
  undefined1 uStack_50;
  undefined1 auStack_4f [39];
  
  FUN_00551ed8(&uStack_50,*(undefined1 *)(param_1 + 0x40));
  FUN_00551ed8(auStack_4f,*(undefined1 *)(param_1 + 0x41));
  uVar1 = FUN_005aab0c(*(undefined4 *)(param_1 + 0x78),&uStack_50,2,0x21);
  return uVar1;
}



//==== 005abffc  ns=Global  size=0x168
// sig: undefined FUN_005abffc(void)
// callers(0): 
// callees(7): 0054ef70 FUN_0054ef70; 00551f9c FUN_00551f9c; 005525a8 FUN_005525a8; 005573e0 FUN_005573e0; 005aa558 FUN_005aa558; 005aa6d4 FUN_005aa6d4; 005abf68 FUN_005abf68

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



//==== 005ac164  ns=Global  size=0x78
// sig: undefined FUN_005ac164(void)
// callers(1): 005ac1dc FUN_005ac1dc
// callees(2): 00551ed8 FUN_00551ed8; 005aab0c FUN_005aab0c

undefined4 FUN_005ac164(int param_1)

{
  undefined4 uVar1;
  undefined1 auStack_30 [16];
  
  FUN_00551ed8(auStack_30,0);
  uVar1 = FUN_005aab0c(*(undefined4 *)(param_1 + 0x78),auStack_30,1,0x23);
  return uVar1;
}



//==== 005ac1dc  ns=Global  size=0x178
// sig: undefined FUN_005ac1dc(void)
// callers(0): 
// callees(5): 00551ef4 FUN_00551ef4; 00551f9c FUN_00551f9c; 005aa558 FUN_005aa558; 005aa6d4 FUN_005aa6d4; 005ac164 FUN_005ac164

/* WARNING: Removing unreachable block (ram,0x005ac318) */
/* WARNING: Removing unreachable block (ram,0x005ac330) */

ulonglong FUN_005ac1dc(int param_1,undefined8 param_2,int param_3,int param_4)

{
  int iVar3;
  ulonglong uVar1;
  ulonglong uVar2;
  byte local_30 [2];
  undefined1 local_2e [14];
  
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



//==== 005ac354  ns=Global  size=0xa8
// sig: undefined FUN_005ac354(void)
// callers(1): 005ac3fc FUN_005ac3fc
// callees(2): 00551f78 FUN_00551f78; 005aab0c FUN_005aab0c

undefined4 FUN_005ac354(int param_1)

{
  undefined4 uVar1;
  undefined1 auStack_50 [2];
  undefined1 auStack_4e [2];
  undefined1 auStack_4c [36];
  
  FUN_00551f78(auStack_50,1);
  FUN_00551f78(auStack_4e,0x70);
  FUN_00551f78(auStack_4c,0);
  uVar1 = FUN_005aab0c(*(undefined4 *)(param_1 + 0x78),auStack_50,6,0x24);
  return uVar1;
}



//==== 005ac3fc  ns=Global  size=0x1b4
// sig: undefined FUN_005ac3fc(void)
// callers(0): 
// callees(3): 005aa558 FUN_005aa558; 005aa6d4 FUN_005aa6d4; 005ac354 FUN_005ac354

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



//==== 005ac5b0  ns=Global  size=0x138
// sig: undefined FUN_005ac5b0(void)
// callers(0): 
// callees(6): 0054ef70 FUN_0054ef70; 00551ef4 FUN_00551ef4; 00551f9c FUN_00551f9c; 005a15ec FUN_005a15ec; 005aa558 FUN_005aa558; 005aa6d4 FUN_005aa6d4

int FUN_005ac5b0(int param_1,undefined8 param_2,int param_3,int param_4)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  undefined1 local_40 [2];
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



//==== 005ac6e8  ns=Global  size=0x13c
// sig: undefined FUN_005ac6e8(void)
// callers(1): 005ac824 FUN_005ac824
// callees(4): 00552570 FUN_00552570; 005aab0c FUN_005aab0c; 005c5ad0 libc::memcpy; 005d0140 libc::memset

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
  libc::memset(lVar1 + 0x78U & 0xffffffff,0,0x40);
  uVar9 = 0x48;
  if (*(size_t *)(param_1 + 0x3c) != 0) {
    libc::memcpy(puVar5 + 0x17,*(void **)(param_1 + 0x38),*(size_t *)(param_1 + 0x3c));
    uVar9 = *(int *)(param_1 + 0x3c) + 0x48U & 0xffff;
  }
  uVar8 = FUN_005aab0c(*(undefined4 *)(param_1 + 0x78),uVar6,uVar9,0);
  return uVar8;
}



//==== 005ac824  ns=Global  size=0x170
// sig: undefined FUN_005ac824(void)
// callers(0): 
// callees(4): 00551f9c FUN_00551f9c; 005aa558 FUN_005aa558; 005aa6d4 FUN_005aa6d4; 005ac6e8 FUN_005ac6e8

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
  undefined1 local_40 [24];
  
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



//==== 005ac994  ns=Global  size=0x8
// sig: undefined FUN_005ac994(void)
// callers(0): 
// callees(0): 

undefined8 FUN_005ac994(void)

{
  return 4;
}



//==== 005ac99c  ns=Global  size=0x8
// sig: undefined FUN_005ac99c(void)
// callers(0): 
// callees(0): 

undefined8 FUN_005ac99c(void)

{
  return 4;
}



//==== 005ac9a4  ns=Global  size=0x8
// sig: undefined FUN_005ac9a4(void)
// callers(0): 
// callees(0): 

undefined8 FUN_005ac9a4(void)

{
  return 4;
}



//==== 005ac9ac  ns=Global  size=0x8
// sig: undefined FUN_005ac9ac(void)
// callers(0): 
// callees(0): 

undefined8 FUN_005ac9ac(void)

{
  return 4;
}



//==== 005ac9b4  ns=Global  size=0x8
// sig: undefined FUN_005ac9b4(void)
// callers(0): 
// callees(0): 

undefined8 FUN_005ac9b4(void)

{
  return 4;
}



//==== 005ac9bc  ns=Global  size=0x8
// sig: undefined FUN_005ac9bc(void)
// callers(0): 
// callees(0): 

undefined8 FUN_005ac9bc(void)

{
  return 4;
}



//==== 005ac9c4  ns=Global  size=0x8
// sig: undefined FUN_005ac9c4(void)
// callers(0): 
// callees(0): 

undefined8 FUN_005ac9c4(void)

{
  return 4;
}



//==== 005ac9cc  ns=Global  size=0x8
// sig: undefined FUN_005ac9cc(void)
// callers(0): 
// callees(0): 

undefined8 FUN_005ac9cc(void)

{
  return 4;
}



//==== 005ac9d4  ns=Global  size=0x4c
// sig: undefined FUN_005ac9d4(void)
// callers(0): 
// callees(0): 

undefined8
FUN_005ac9d4(int param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,undefined8 param_5
            )

{
  (*(code *)**(undefined4 **)(param_1 + 0x70))(param_2,param_3,param_4,param_5);
  return 0;
}



//==== 005aca20  ns=Global  size=0x48
// sig: undefined FUN_005aca20(void)
// callers(0): 
// callees(0): 

undefined8 FUN_005aca20(int param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  (*(code *)**(undefined4 **)(param_1 + 0x7c))(param_2,param_3,param_4);
  return 0;
}



//==== 005aca68  ns=Global  size=0x54
// sig: undefined FUN_005aca68(void)
// callers(0): 
// callees(0): 

undefined8
FUN_005aca68(int param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,undefined8 param_5
            ,undefined8 param_6,undefined8 param_7)

{
  (*(code *)**(undefined4 **)(param_1 + 0x88))(param_2,param_3,param_4,param_5,param_6,param_7);
  return 0;
}



//==== 005acabc  ns=Global  size=0x50
// sig: undefined FUN_005acabc(void)
// callers(0): 
// callees(0): 

undefined8
FUN_005acabc(int param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,undefined8 param_5
            ,undefined8 param_6)

{
  (*(code *)**(undefined4 **)(param_1 + 0x8c))(param_2,param_3,param_4,param_5,param_6);
  return 0;
}



//==== 005acb0c  ns=Global  size=0x98
// sig: undefined FUN_005acb0c(void)
// callers(0): 
// callees(0): 

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



//==== 005acba4  ns=Global  size=0x28
// sig: undefined FUN_005acba4(void)
// callers(0): 
// callees(1): 005c5ad0 libc::memcpy

undefined8 FUN_005acba4(void *param_1,void *param_2,size_t param_3)

{
  libc::memcpy(param_1,param_2,param_3);
  return 0;
}



//==== 005acbcc  ns=Global  size=0x74
// sig: undefined FUN_005acbcc(void)
// callers(1): 004f5be4 FUN_004f5be4
// callees(0): 

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



//==== 005acc40  ns=Global  size=0x278
// sig: undefined FUN_005acc40(void)
// callers(1): 004f5be4 FUN_004f5be4
// callees(4): 005aceb8 FUN_005aceb8; 005ad810 FUN_005ad810; 005b2640 FUN_005b2640; 005c5ad0 libc::memcpy

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
      pvVar2 = libc::memcpy((void *)(*(int *)PTR_DAT_0071c07c + 0xa8),(void *)piStack00000030[3],
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



//==== 005aceb8  ns=Global  size=0x220
// sig: undefined FUN_005aceb8(void)
// callers(1): 005acc40 FUN_005acc40
// callees(0): 

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



//==== 005ad0d8  ns=Global  size=0x90
// sig: undefined FUN_005ad0d8(void)
// callers(14): 005ae544 FUN_005ae544; 005ae684 FUN_005ae684; 005ae7a8 FUN_005ae7a8; 005ae97c FUN_005ae97c; 005aeae4 FUN_005aeae4; 005aed70 FUN_005aed70; 005af0a4 FUN_005af0a4; 005af3a8 FUN_005af3a8; 005b044c FUN_005b044c; 005b0740 FUN_005b0740; 005b0fe8 FUN_005b0fe8; 005b1618 FUN_005b1618; 005b1884 FUN_005b1884; 005b1ec4 FUN_005b1ec4
// callees(0): 

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



//==== 005ad168  ns=Global  size=0xf0
// sig: undefined FUN_005ad168(void)
// callers(3): 005ade10 FUN_005ade10; 005ae7a8 FUN_005ae7a8; 005aed70 FUN_005aed70
// callees(2): 00551b80 FUN_00551b80; 005ad5d4 FUN_005ad5d4

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



//==== 005ad258  ns=Global  size=0xbc
// sig: undefined FUN_005ad258(void)
// callers(2): 005af6c0 FUN_005af6c0; 005af774 FUN_005af774
// callees(1): 005519f0 FUN_005519f0

void FUN_005ad258(int param_1)

{
  int iStack00000030;
  undefined1 local_20 [24];
  
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



//==== 005ad314  ns=Global  size=0x12c
// sig: undefined FUN_005ad314(void)
// callers(3): 005ade10 FUN_005ade10; 005ae7a8 FUN_005ae7a8; 005aed70 FUN_005aed70
// callees(0): 

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



//==== 005ad440  ns=Global  size=0xa0
// sig: undefined FUN_005ad440(void)
// callers(11): 005ade10 FUN_005ade10; 005ae090 FUN_005ae090; 005ae7a8 FUN_005ae7a8; 005ae97c FUN_005ae97c; 005aec68 FUN_005aec68; 005aed70 FUN_005aed70; 005af0a4 FUN_005af0a4; 005af3a8 FUN_005af3a8; 005af6c0 FUN_005af6c0; 005b0740 FUN_005b0740; 005b1884 FUN_005b1884
// callees(0): 

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



//==== 005ad4e0  ns=Global  size=0xf4
// sig: undefined FUN_005ad4e0(void)
// callers(2): 005af6c0 FUN_005af6c0; 005af774 FUN_005af774
// callees(0): 

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



//==== 005ad5d4  ns=Global  size=0x98
// sig: undefined FUN_005ad5d4(void)
// callers(3): 005ad168 FUN_005ad168; 005ade10 FUN_005ade10; 005ae7a8 FUN_005ae7a8
// callees(0): 

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



//==== 005ad66c  ns=Global  size=0x100
// sig: undefined FUN_005ad66c(void)
// callers(5): 005b0740 FUN_005b0740; 005b0fe8 FUN_005b0fe8; 005b1618 FUN_005b1618; 005b1884 FUN_005b1884; 005b1ec4 FUN_005b1ec4
// callees(3): 005b89bc FUN_005b89bc; 005b8a38 FUN_005b8a38; 005b8ec4 FUN_005b8ec4

int FUN_005ad66c(undefined4 param_1,undefined4 param_2)

{
  undefined4 uStack00000030;
  undefined4 uStack00000038;
  undefined1 auStack_7c [100];
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



//==== 005ad76c  ns=Global  size=0xa4
// sig: undefined FUN_005ad76c(void)
// callers(1): 005afb74 FUN_005afb74
// callees(3): 005bd0b8 FUN_005bd0b8; 005bd188 FUN_005bd188; 005bd940 FUN_005bd940

void FUN_005ad76c(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 uStack00000030;
  undefined4 uStack00000038;
  undefined4 uStack00000040;
  undefined1 auStack_20 [24];
  
  uStack00000030 = param_1;
  uStack00000038 = param_2;
  uStack00000040 = param_3;
  FUN_005bd0b8(auStack_20);
  FUN_005bd940(auStack_20,uStack00000030,uStack00000038);
  FUN_005bd188(auStack_20,uStack00000040);
  return;
}



//==== 005ad810  ns=Global  size=0x60
// sig: undefined FUN_005ad810(void)
// callers(1): 005acc40 FUN_005acc40
// callees(2): 005afa78 FUN_005afa78; 005b6b6c FUN_005b6b6c

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



//==== 005ad870  ns=Global  size=0x28
// sig: undefined FUN_005ad870(void)
// callers(0): 
// callees(0): 
// strings: 00660660: 'rt_crypt ReleaseVersion 3.05.201103091800'

undefined * FUN_005ad870(void)

{
  return PTR_s_rt_crypt_ReleaseVersion_3_05_201_0071c12c;
}



//==== 005ad898  ns=Global  size=0xb8
// sig: undefined FUN_005ad898(void)
// callers(3): 005af0a4 FUN_005af0a4; 005af3a8 FUN_005af3a8; 005b3280 FUN_005b3280
// callees(3): 005b89bc FUN_005b89bc; 005b8a38 FUN_005b8a38; 005b8ec4 FUN_005b8ec4

void FUN_005ad898(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 uStack00000030;
  undefined4 uStack00000038;
  undefined4 uStack00000040;
  undefined4 uStack00000048;
  undefined1 auStack_70 [104];
  
  uStack00000030 = param_1;
  uStack00000038 = param_2;
  uStack00000040 = param_3;
  uStack00000048 = param_4;
  FUN_005b89bc(auStack_70);
  FUN_005b8a38(auStack_70,uStack00000030,uStack00000038);
  FUN_005b8ec4(auStack_70,uStack00000040,uStack00000048);
  return;
}



//==== 005ad950  ns=Global  size=0x104
// sig: undefined FUN_005ad950(void)
// callers(0): 
// callees(3): 005b89bc FUN_005b89bc; 005b8a38 FUN_005b8a38; 005b8ec4 FUN_005b8ec4

void FUN_005ad950(int param_1,int param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5,
                 undefined4 param_6)

{
  int iStack00000030;
  int iStack00000038;
  undefined4 uStack00000040;
  undefined4 uStack00000048;
  undefined4 uStack00000050;
  undefined4 uStack00000058;
  undefined1 auStack_70 [104];
  
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



//==== 005ada54  ns=Global  size=0x348
// sig: undefined FUN_005ada54(void)
// callers(0): 
// callees(3): 00550e68 FUN_00550e68; 00551b80 FUN_00551b80; 005ae250 FUN_005ae250

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



//==== 005add9c  ns=Global  size=0x74
// sig: undefined FUN_005add9c(void)
// callers(0): 
// callees(1): 00550e68 FUN_00550e68

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



//==== 005ade10  ns=Global  size=0x280
// sig: undefined FUN_005ade10(void)
// callers(1): 005aed70 FUN_005aed70
// callees(9): 00550e20 FUN_00550e20; 00550e68 FUN_00550e68; 00551b80 FUN_00551b80; 005ad168 FUN_005ad168; 005ad314 FUN_005ad314; 005ad440 FUN_005ad440; 005ad5d4 FUN_005ad5d4; 005b044c FUN_005b044c; 005c5ad0 libc::memcpy

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
      libc::memcpy(*(void **)(local_2c + 0x14),pvStack00000048,0x40);
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



//==== 005ae090  ns=Global  size=0x1c0
// sig: undefined FUN_005ae090(void)
// callers(0): 
// callees(4): 00550e20 FUN_00550e20; 00550e68 FUN_00550e68; 005ad440 FUN_005ad440; 005c5ad0 libc::memcpy

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
    libc::memcpy(puStack00000040,*(void **)(iVar1 + 0x14),0x40);
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



//==== 005ae250  ns=Global  size=0x2f4
// sig: undefined FUN_005ae250(void)
// callers(1): 005ada54 FUN_005ada54
// callees(4): 00550e20 FUN_00550e20; 00550e68 FUN_00550e68; 00551b80 FUN_00551b80; 005c5ad0 libc::memcpy

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
      libc::memcpy(*(void **)(iVar2 + 0x20),pvStack00000038,0x40);
      libc::memcpy(*(void **)(iVar2 + 0x24),(void *)((int)pvStack00000038 + 0x40),0x40);
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



//==== 005ae544  ns=Global  size=0x140
// sig: undefined FUN_005ae544(void)
// callers(0): 
// callees(4): 00550e68 FUN_00550e68; 00551b80 FUN_00551b80; 005ad0d8 FUN_005ad0d8; 005c5ad0 libc::memcpy

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
    libc::memcpy(*(void **)(iVar1 + 0x28),pvStack00000048,0x40);
    local_20 = 0;
  }
  return local_20;
}



//==== 005ae684  ns=Global  size=0x124
// sig: undefined FUN_005ae684(void)
// callers(0): 
// callees(4): 00550e68 FUN_00550e68; 005ad0d8 FUN_005ad0d8; 005c5ad0 libc::memcpy; 005d0140 libc::memset

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
      libc::memcpy(pvStack00000040,*(void **)(iVar1 + 0x28),0x40);
      return 0;
    }
    libc::memset(pvStack00000040,0,0x40);
  }
  return 0xffffffff;
}



//==== 005ae7a8  ns=Global  size=0x1d4
// sig: undefined FUN_005ae7a8(void)
// callers(1): 005aed70 FUN_005aed70
// callees(9): 00550e68 FUN_00550e68; 00551b80 FUN_00551b80; 005ad0d8 FUN_005ad0d8; 005ad168 FUN_005ad168; 005ad314 FUN_005ad314; 005ad440 FUN_005ad440; 005ad5d4 FUN_005ad5d4; 005b044c FUN_005b044c; 005c5ad0 libc::memcpy

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
    libc::memcpy(*(void **)(local_2c + 0x18),pvStack00000048,0x40);
    uVar3 = FUN_005b044c(local_2c);
    *(undefined4 *)(local_2c + 0x20) = uVar3;
    local_20 = 0;
  }
  return local_20;
}



//==== 005ae97c  ns=Global  size=0x168
// sig: undefined FUN_005ae97c(void)
// callers(1): 005aeae4 FUN_005aeae4
// callees(5): 00550e68 FUN_00550e68; 005ad0d8 FUN_005ad0d8; 005ad440 FUN_005ad440; 005c5ad0 libc::memcpy; 005d0140 libc::memset

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
      libc::memset(pvStack00000040,0,0x40);
      local_20 = 0xffffffff;
    }
    else {
      libc::memcpy(pvStack00000040,*(void **)(iVar1 + 0x18),0x40);
      local_20 = 0;
    }
  }
  return local_20;
}



//==== 005aeae4  ns=Global  size=0x184
// sig: undefined FUN_005aeae4(void)
// callers(0): 
// callees(2): 005ad0d8 FUN_005ad0d8; 005ae97c FUN_005ae97c

undefined4 FUN_005aeae4(undefined4 param_1,undefined4 param_2,int param_3)

{
  uint uVar1;
  int iVar2;
  undefined4 uStack00000030;
  undefined4 uStack00000038;
  int iStack00000040;
  undefined4 local_70;
  undefined1 auStack_6c [76];
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



//==== 005aec68  ns=Global  size=0x108
// sig: undefined FUN_005aec68(void)
// callers(0): 
// callees(4): 00550e68 FUN_00550e68; 005ad440 FUN_005ad440; 005b044c FUN_005b044c; 005d0140 libc::memset

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
        libc::memset(*(undefined4 *)(iVar1 + 0x18),0,0x40);
      }
      uVar2 = FUN_005b044c(iVar1);
      *(undefined4 *)(iVar1 + 0x20) = uVar2;
    }
  }
  return;
}



//==== 005aed70  ns=Global  size=0x27c
// sig: undefined FUN_005aed70(void)
// callers(0): 
// callees(9): 00550e20 FUN_00550e20; 00550e68 FUN_00550e68; 005ad0d8 FUN_005ad0d8; 005ad168 FUN_005ad168; 005ad314 FUN_005ad314; 005ad440 FUN_005ad440; 005ade10 FUN_005ade10; 005ae7a8 FUN_005ae7a8; 005b044c FUN_005b044c

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



//==== 005aefec  ns=Global  size=0xb8
// sig: undefined FUN_005aefec(void)
// callers(0): 
// callees(2): 005af3a8 FUN_005af3a8; 005b24b8 FUN_005b24b8

undefined4 FUN_005aefec(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 uVar1;
  undefined4 uStack00000030;
  undefined4 uStack00000038;
  undefined4 uStack00000040;
  undefined4 uStack00000048;
  undefined1 auStack_90 [64];
  undefined1 auStack_50 [72];
  
  uStack00000030 = param_1;
  uStack00000038 = param_2;
  uStack00000040 = param_3;
  uStack00000048 = param_4;
  FUN_005b24b8(auStack_90,auStack_50);
  uVar1 = FUN_005af3a8(uStack00000030,uStack00000038,uStack00000040,auStack_90,uStack00000048);
  return uVar1;
}



//==== 005af0a4  ns=Global  size=0x304
// sig: undefined FUN_005af0a4(void)
// callers(0): 
// callees(6): 00550e20 FUN_00550e20; 00550e68 FUN_00550e68; 005ad0d8 FUN_005ad0d8; 005ad440 FUN_005ad440; 005ad898 FUN_005ad898; 005b65d4 FUN_005b65d4

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



//==== 005af3a8  ns=Global  size=0x318
// sig: undefined FUN_005af3a8(void)
// callers(1): 005aefec FUN_005aefec
// callees(7): 00550e20 FUN_00550e20; 00550e68 FUN_00550e68; 005ad0d8 FUN_005ad0d8; 005ad440 FUN_005ad440; 005ad898 FUN_005ad898; 005b6898 FUN_005b6898; 005b6c40 FUN_005b6c40

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



//==== 005af6c0  ns=Global  size=0xb4
// sig: undefined FUN_005af6c0(void)
// callers(0): 
// callees(4): 00550e68 FUN_00550e68; 005ad258 FUN_005ad258; 005ad440 FUN_005ad440; 005ad4e0 FUN_005ad4e0

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



//==== 005af774  ns=Global  size=0x228
// sig: undefined FUN_005af774(void)
// callers(1): 005af99c FUN_005af99c
// callees(4): 00550e68 FUN_00550e68; 005519f0 FUN_005519f0; 005ad258 FUN_005ad258; 005ad4e0 FUN_005ad4e0

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_005af774(undefined4 param_1)

{
  int iVar1;
  int *piVar2;
  undefined4 uStack00000030;
  undefined1 local_18 [16];
  
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



//==== 005af99c  ns=Global  size=0xdc
// sig: undefined FUN_005af99c(void)
// callers(0): 
// callees(1): 005af774 FUN_005af774

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



//==== 005afa78  ns=Global  size=0x5c
// sig: undefined FUN_005afa78(void)
// callers(2): 005ad810 FUN_005ad810; 005afad4 FUN_005afad4
// callees(1): 00552944 FUN_00552944

void FUN_005afa78(void)

{
  if (*PTR_DAT_0071c130 == '\0') {
    *PTR_DAT_0071c130 = 1;
    FUN_00552944(0x35d2325);
  }
  return;
}



//==== 005afad4  ns=Global  size=0xa0
// sig: undefined FUN_005afad4(void)
// callers(0): 
// callees(2): 00552968 FUN_00552968; 005afa78 FUN_005afa78

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



//==== 005afb74  ns=Global  size=0x238
// sig: undefined FUN_005afb74(void)
// callers(0): 
// callees(1): 005ad76c FUN_005ad76c

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



//==== 005afdac  ns=Global  size=0x118
// sig: undefined FUN_005afdac(void)
// callers(0): 
// callees(2): 005b5fd0 FUN_005b5fd0; 005b60b0 FUN_005b60b0

uint FUN_005afdac(int param_1,undefined4 param_2,int param_3)

{
  uint uVar1;
  int iStack00000030;
  undefined4 uStack00000038;
  int iStack00000040;
  uint local_120;
  undefined1 auStack_11c [276];
  
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



//==== 005afec4  ns=Global  size=0x118
// sig: undefined FUN_005afec4(void)
// callers(0): 
// callees(2): 005bd46c FUN_005bd46c; 005bd668 FUN_005bd668

uint FUN_005afec4(int param_1,undefined4 param_2,int param_3)

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
    FUN_005bd46c(*(undefined4 *)(iStack00000030 + 0x18),local_30,auStack_2c);
    FUN_005bd668(auStack_2c,uStack00000038,iStack00000040);
  }
  return local_30;
}



//==== 005affdc  ns=Global  size=0x120
// sig: undefined FUN_005affdc(void)
// callers(0): 
// callees(2): 005b5fd0 FUN_005b5fd0; 005b60b0 FUN_005b60b0

uint FUN_005affdc(int param_1,undefined4 param_2,int param_3)

{
  uint uVar1;
  int iStack00000030;
  undefined4 uStack00000038;
  int iStack00000040;
  uint local_120;
  undefined1 auStack_11c [276];
  
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



