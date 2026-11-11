//==== 00570030  ns=Global  size=0x110
// sig: undefined FUN_00570030(void)
// callers(0): 
// callees(1): 005710ec FUN_005710ec

int FUN_00570030(int param_1,undefined4 param_2,undefined4 *param_3,int param_4,undefined4 param_5,
                undefined4 *param_6)

{
  int iVar1;
  undefined1 local_20 [4];
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



//==== 00570140  ns=Global  size=0x88
// sig: undefined FUN_00570140(void)
// callers(0): 
// callees(1): 00571468 FUN_00571468

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



//==== 005701c8  ns=Global  size=0xa4
// sig: undefined FUN_005701c8(void)
// callers(0): 
// callees(1): 00571074 FUN_00571074

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



//==== 0057026c  ns=Global  size=0xd4
// sig: undefined FUN_0057026c(void)
// callers(0): 
// callees(2): 0056fce0 FUN_0056fce0; 00571074 FUN_00571074

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



//==== 00570340  ns=Global  size=0xc8
// sig: undefined FUN_00570340(void)
// callers(0): 
// callees(1): 00571580 FUN_00571580

int FUN_00570340(int param_1,undefined8 param_2,int param_3,int param_4,undefined4 param_5,
                undefined4 *param_6)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 uStack00000038;
  undefined1 local_20 [24];
  
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



//==== 00570408  ns=Global  size=0x124
// sig: undefined FUN_00570408(void)
// callers(0): 
// callees(2): 0056fce0 FUN_0056fce0; 00571878 FUN_00571878

int FUN_00570408(int param_1,int param_2,undefined4 param_3,undefined4 *param_4)

{
  int iVar1;
  int iStack00000030;
  undefined1 local_30 [24];
  
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



//==== 0057052c  ns=Global  size=0xec
// sig: undefined FUN_0057052c(void)
// callers(4): 00570618 FUN_00570618; 0057080c FUN_0057080c; 00570a1c FUN_00570a1c; 00570e40 FUN_00570e40
// callees(1): 00572444 FUN_00572444

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



//==== 00570618  ns=Global  size=0x1f4
// sig: undefined FUN_00570618(void)
// callers(0): 
// callees(6): 0056fce0 FUN_0056fce0; 0057052c FUN_0057052c; 00571bb8 FUN_00571bb8; 00571c90 FUN_00571c90; 005723f4 FUN_005723f4; 0057241c FUN_0057241c

int FUN_00570618(int param_1,undefined4 *param_2)

{
  undefined *puVar1;
  int iVar2;
  int iStack00000030;
  undefined1 local_40 [24];
  
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



//==== 0057080c  ns=Global  size=0x210
// sig: undefined FUN_0057080c(void)
// callers(0): 
// callees(6): 0056fce0 FUN_0056fce0; 0057052c FUN_0057052c; 00571a64 FUN_00571a64; 00571bb8 FUN_00571bb8; 00571c90 FUN_00571c90; 0057241c FUN_0057241c

int FUN_0057080c(int param_1,int param_2,undefined4 param_3,undefined4 *param_4)

{
  undefined *puVar1;
  int iVar2;
  int iStack00000030;
  undefined1 local_50 [24];
  
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



//==== 00570a1c  ns=Global  size=0x424
// sig: undefined FUN_00570a1c(void)
// callers(0): 
// callees(11): 0057052c FUN_0057052c; 00571664 FUN_00571664; 005716e4 FUN_005716e4; 0057175c FUN_0057175c; 00571c54 FUN_00571c54; 00571c90 FUN_00571c90; 00571e90 FUN_00571e90; 00571f34 FUN_00571f34; 00572384 FUN_00572384; 0057241c FUN_0057241c; 005728a8 FUN_005728a8

int FUN_00570a1c(int *param_1,undefined8 param_2,int *param_3,int *param_4,undefined4 *param_5)

{
  undefined *puVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  longlong lVar5;
  int iStack00000038;
  undefined1 local_60 [24];
  
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



//==== 00570e40  ns=Global  size=0x7c
// sig: undefined FUN_00570e40(void)
// callers(0): 
// callees(2): 0057052c FUN_0057052c; 005724ac FUN_005724ac

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



//==== 00570ebc  ns=Global  size=0x90
// sig: undefined FUN_00570ebc(void)
// callers(0): 
// callees(1): 005724d4 FUN_005724d4

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



//==== 00570f4c  ns=Global  size=0x3c
// sig: undefined FUN_00570f4c(void)
// callers(0): 
// callees(1): 0055bcec FUN_0055bcec

undefined8 FUN_00570f4c(undefined4 *param_1,undefined8 param_2)

{
  undefined4 uVar1;
  
  uVar1 = FUN_0055bcec(param_2);
  *param_1 = uVar1;
  return 0;
}



//==== 00570f88  ns=Global  size=0x30
// sig: undefined FUN_00570f88(void)
// callers(0): 
// callees(1): 0055bde8 FUN_0055bde8

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



//==== 00570fb8  ns=Global  size=0x3c
// sig: undefined FUN_00570fb8(void)
// callers(0): 
// callees(1): 0055bde8 FUN_0055bde8

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



//==== 00570ff4  ns=Global  size=0x4c
// sig: undefined FUN_00570ff4(void)
// callers(0): 
// callees(0): 

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



//==== 00571040  ns=Global  size=0xc
// sig: undefined FUN_00571040(void)
// callers(0): 
// callees(0): 
// strings: 0067dc38: 'rt_socket  ReleaseVersion 3.05.201103091800'

undefined4 FUN_00571040(void)

{
  return *(undefined4 *)PTR_PTR_0071b560;
}



//==== 0057104c  ns=Global  size=0x28
// sig: undefined FUN_0057104c(void)
// callers(0): 
// callees(1): 0057254c FUN_0057254c

undefined4 FUN_0057104c(void)

{
  undefined4 uVar1;
  
  uVar1 = FUN_0057254c();
  return uVar1;
}



//==== 00571074  ns=Global  size=0x28
// sig: undefined FUN_00571074(void)
// callers(2): 005701c8 FUN_005701c8; 0057026c FUN_0057026c
// callees(1): 00572944 FUN_00572944

undefined4 FUN_00571074(void)

{
  undefined4 uVar1;
  
  uVar1 = FUN_00572944();
  return uVar1;
}



//==== 0057109c  ns=Global  size=0x28
// sig: undefined FUN_0057109c(void)
// callers(1): 0056fe64 FUN_0056fe64
// callees(1): 00572ae0 FUN_00572ae0

undefined4 FUN_0057109c(void)

{
  undefined4 uVar1;
  
  uVar1 = FUN_00572ae0();
  return uVar1;
}



//==== 005710c4  ns=Global  size=0x28
// sig: undefined FUN_005710c4(void)
// callers(1): 0056fe8c FUN_0056fe8c
// callees(1): 00572c90 FUN_00572c90

undefined4 FUN_005710c4(void)

{
  undefined4 uVar1;
  
  uVar1 = FUN_00572c90();
  return uVar1;
}



//==== 005710ec  ns=Global  size=0x128
// sig: undefined FUN_005710ec(void)
// callers(1): 00570030 FUN_00570030
// callees(2): 00572554 FUN_00572554; 00650204 sys::recvfrom

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
      sVar1 = sys::recvfrom(param_1,param_2,param_3,0,asStack_3c,&local_40);
      if (-1 < sVar1) {
        *param_4 = sVar1;
        *(undefined4 *)param_5 = asStack_3c[0].sa_data._2_4_;
        *param_6 = (uint)(ushort)asStack_3c[0].sa_data._0_2_;
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



//==== 00571214  ns=Global  size=0x254
// sig: undefined FUN_00571214(void)
// callers(1): 0056ffb0 FUN_0056ffb0
// callees(2): 00572554 FUN_00572554; 00650204 sys::recvfrom

undefined4 FUN_00571214(int param_1,char *param_2,undefined4 *param_3,uint *param_4)

{
  ssize_t sVar1;
  undefined4 uVar2;
  socklen_t local_8a0;
  sockaddr sStack_89c;
  undefined2 local_888;
  undefined2 local_886;
  undefined1 auStack_868 [20];
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
    sVar1 = sys::recvfrom(param_1,auStack_868,0x800,0,&sStack_89c,&local_8a0);
    if (sVar1 == -1) {
      uVar2 = FUN_00572554();
    }
    else {
      if (sVar1 == 0x34) {
        local_888 = CONCAT11(uStack_850,uStack_84f);
        local_886 = CONCAT11(uStack_84e,uStack_84d);
        if ((cStack_854 == '\0') && (local_888 == -0x5433)) {
          *param_4 = (uint)local_886;
          *(undefined4 *)param_2 = sStack_89c.sa_data._2_4_;
          *param_3 = 1;
          return 0;
        }
      }
      uVar2 = 0;
    }
  }
  return uVar2;
}



//==== 00571468  ns=Global  size=0x118
// sig: undefined FUN_00571468(void)
// callers(1): 00570140 FUN_00570140
// callees(2): 00572554 FUN_00572554; 00650324 sce::sendto

undefined4 FUN_00571468(int param_1,int param_2,undefined4 *param_3,undefined2 param_4)

{
  ssize_t sVar1;
  undefined4 uVar2;
  uint uVar3;
  ushort *puVar4;
  longlong lVar5;
  sockaddr sStack_40;
  undefined1 local_30 [2];
  ushort local_2e;
  undefined2 local_2c;
  undefined2 local_2a;
  undefined1 auStack_20 [16];
  
  if ((param_3 == (undefined4 *)0x0) || (*param_3 = 0, param_2 == 0)) {
    uVar2 = 2;
  }
  else {
    lVar5 = 0x10;
    sStack_40.sa_family._1_1_ = 2;
    auStack_20 = (undefined1  [16])0x0;
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
    sStack_40.sa_data._2_4_ = param_2;
    local_2a = param_4;
    sVar1 = sce::sendto(param_1,local_30,0x20,0,&sStack_40,0x10);
    if (sVar1 != -1) {
      *param_3 = 1;
      return 0;
    }
    uVar2 = FUN_00572554();
  }
  return uVar2;
}



//==== 00571580  ns=Global  size=0xe4
// sig: undefined FUN_00571580(void)
// callers(1): 00570340 FUN_00570340
// callees(2): 00572554 FUN_00572554; 00650324 sce::sendto

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
        sStack_20.sa_family._1_1_ = 2;
        sStack_20.sa_data._0_2_ = param_5;
        sStack_20.sa_data._2_4_ = param_4;
        sVar1 = sce::sendto(param_1,param_2,param_3,0,&sStack_20,0x10);
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



//==== 00571664  ns=Global  size=0x80
// sig: undefined FUN_00571664(void)
// callers(1): 00570a1c FUN_00570a1c
// callees(2): 00572554 FUN_00572554; 00650344 sce::socket

undefined4 FUN_00571664(int *param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  uVar2 = 2;
  if (param_1 != (int *)0x0) {
    iVar1 = sce::socket(2,3,1);
    uVar2 = 0;
    *param_1 = iVar1;
    if (iVar1 == -1) {
      uVar2 = FUN_00572554();
      return uVar2;
    }
  }
  return uVar2;
}



//==== 005716e4  ns=Global  size=0x78
// sig: undefined FUN_005716e4(void)
// callers(1): 00570a1c FUN_00570a1c
// callees(2): 00572554 FUN_00572554; 00650344 sce::socket

undefined4 FUN_005716e4(int *param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = sce::socket(2,2,0);
  if (iVar1 != -1) {
    *param_1 = iVar1;
    return 0;
  }
  *param_1 = -1;
  uVar2 = FUN_00572554();
  return uVar2;
}



//==== 0057175c  ns=Global  size=0x78
// sig: undefined FUN_0057175c(void)
// callers(1): 00570a1c FUN_00570a1c
// callees(2): 00572554 FUN_00572554; 00650344 sce::socket

undefined4 FUN_0057175c(int *param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = sce::socket(2,1,0);
  if (iVar1 != -1) {
    *param_1 = iVar1;
    return 0;
  }
  *param_1 = -1;
  uVar2 = FUN_00572554();
  return uVar2;
}



//==== 005717d4  ns=Global  size=0xa4
// sig: undefined FUN_005717d4(void)
// callers(0): 
// callees(2): 00572554 FUN_00572554; 006503e4 sce::send

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
  sVar1 = sce::send(param_1,param_2,param_3,0);
  if (-1 < sVar1) {
    *param_4 = sVar1;
    return 0;
  }
  *param_4 = 0;
  uVar2 = FUN_00572554();
  return uVar2;
}



//==== 00571878  ns=Global  size=0xa4
// sig: undefined FUN_00571878(void)
// callers(1): 00570408 FUN_00570408
// callees(2): 00572554 FUN_00572554; 006503e4 sce::send

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
  sVar1 = sce::send(param_1,param_2,param_3,0);
  if (-1 < sVar1) {
    *param_4 = sVar1;
    return 0;
  }
  *param_4 = 0;
  uVar2 = FUN_00572554();
  return uVar2;
}



//==== 0057191c  ns=Global  size=0xa4
// sig: undefined FUN_0057191c(void)
// callers(0): 
// callees(2): 00572554 FUN_00572554; 00650404 sys::recv

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
  sVar1 = sys::recv(param_1,param_2,param_3,0);
  if (-1 < sVar1) {
    *param_4 = sVar1;
    return 0;
  }
  *param_4 = 0;
  uVar2 = FUN_00572554();
  return uVar2;
}



//==== 005719c0  ns=Global  size=0xa4
// sig: undefined FUN_005719c0(void)
// callers(0): 
// callees(2): 00572554 FUN_00572554; 00650404 sys::recv

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
  sVar1 = sys::recv(param_1,param_2,param_3,2);
  if (-1 < sVar1) {
    *param_4 = sVar1;
    return 0;
  }
  *param_4 = 0;
  uVar2 = FUN_00572554();
  return uVar2;
}



//==== 00571a64  ns=Global  size=0xa4
// sig: undefined FUN_00571a64(void)
// callers(1): 0057080c FUN_0057080c
// callees(2): 00572554 FUN_00572554; 00650404 sys::recv

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
  sVar1 = sys::recv(param_1,param_2,param_3,0);
  if (-1 < sVar1) {
    *param_4 = sVar1;
    return 0;
  }
  *param_4 = 0;
  uVar2 = FUN_00572554();
  return uVar2;
}



//==== 00571b08  ns=Global  size=0xb0
// sig: undefined FUN_00571b08(void)
// callers(0): 
// callees(2): 00572554 FUN_00572554; 006502a4 sys::connect

undefined4 FUN_00571b08(int param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  sockaddr sStack_10;
  
  sStack_10.sa_data[0xd] = '\0';
  sStack_10.sa_family._0_1_ = 0;
  sStack_10.sa_data[6] = '\0';
  sStack_10.sa_data[7] = '\0';
  sStack_10.sa_data[8] = '\0';
  sStack_10.sa_data[9] = '\0';
  sStack_10.sa_data[10] = '\0';
  sStack_10.sa_data[0xb] = '\0';
  sStack_10.sa_data[0xc] = '\0';
  sStack_10.sa_family._1_1_ = 2;
  sStack_10.sa_data._0_2_ = SUB42(*(undefined4 *)(param_2 + 4),0);
  iVar1 = sys::connect(param_1,&sStack_10,0x10);
  uVar2 = 0;
  if (iVar1 != 0) {
    uVar2 = FUN_00572554();
  }
  return uVar2;
}



//==== 00571bb8  ns=Global  size=0x9c
// sig: undefined FUN_00571bb8(void)
// callers(2): 00570618 FUN_00570618; 0057080c FUN_0057080c
// callees(2): 00572554 FUN_00572554; 006503c4 sys::accept

undefined4 FUN_00571bb8(int param_1,int *param_2)

{
  int iVar1;
  undefined4 uVar2;
  socklen_t local_30;
  sockaddr asStack_2c [2];
  
  uVar2 = 2;
  if (param_2 != (int *)0x0) {
    local_30 = 0x10;
    iVar1 = sys::accept(param_1,asStack_2c,&local_30);
    uVar2 = 0;
    if (iVar1 < 0) {
      param_2[2] = 0;
      *param_2 = -1;
      uVar2 = FUN_00572554();
    }
    else {
      *param_2 = iVar1;
      param_2[2] = asStack_2c[0].sa_data._2_4_;
      param_2[1] = (uint)(ushort)asStack_2c[0].sa_data._0_2_;
    }
  }
  return uVar2;
}



//==== 00571c54  ns=Global  size=0x3c
// sig: undefined FUN_00571c54(void)
// callers(1): 00570a1c FUN_00570a1c
// callees(2): 00572554 FUN_00572554; 00650224 sys::listen

undefined4 FUN_00571c54(int param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = sys::listen(param_1,param_2);
  uVar2 = 0;
  if (iVar1 != 0) {
    uVar2 = FUN_00572554();
  }
  return uVar2;
}



//==== 00571c90  ns=Global  size=0x28
// sig: undefined FUN_00571c90(void)
// callers(3): 00570618 FUN_00570618; 0057080c FUN_0057080c; 00570a1c FUN_00570a1c
// callees(1): 005732f0 FUN_005732f0

undefined4 FUN_00571c90(void)

{
  undefined4 uVar1;
  
  uVar1 = FUN_005732f0();
  return uVar1;
}



//==== 00571cb8  ns=Global  size=0x98
// sig: undefined FUN_00571cb8(void)
// callers(1): 0056fef8 FUN_0056fef8
// callees(3): 00572554 FUN_00572554; 005c5ad0 libc::memcpy; 006502e4 sys::gethostbyname

undefined4 FUN_00571cb8(undefined4 *param_1,char *param_2)

{
  hostent *phVar1;
  undefined4 uVar2;
  undefined4 local_1c [5];
  
  uVar2 = 2;
  if (param_2 != (char *)0x0) {
    phVar1 = sys::gethostbyname(param_2);
    if (phVar1 == (hostent *)0x0) {
      uVar2 = FUN_00572554();
      return uVar2;
    }
    libc::memcpy(local_1c,*phVar1->h_addr_list,phVar1->h_length);
    uVar2 = 0;
    *param_1 = local_1c[0];
  }
  return uVar2;
}



//==== 00571d50  ns=Global  size=0x28
// sig: undefined FUN_00571d50(void)
// callers(2): 0056ff50 FUN_0056ff50; 00571f34 FUN_00571f34
// callees(1): 00572e88 FUN_00572e88

undefined4 FUN_00571d50(void)

{
  undefined4 uVar1;
  
  uVar1 = FUN_00572e88();
  return uVar1;
}



//==== 00571d78  ns=Global  size=0x28
// sig: undefined FUN_00571d78(void)
// callers(0): 
// callees(1): 00572fb8 FUN_00572fb8

undefined4 FUN_00571d78(void)

{
  undefined4 uVar1;
  
  uVar1 = FUN_00572fb8();
  return uVar1;
}



//==== 00571da0  ns=Global  size=0x28
// sig: undefined FUN_00571da0(void)
// callers(0): 
// callees(1): 005731dc FUN_005731dc

undefined4 FUN_00571da0(void)

{
  undefined4 uVar1;
  
  uVar1 = FUN_005731dc();
  return uVar1;
}



//==== 00571dc8  ns=Global  size=0x28
// sig: undefined FUN_00571dc8(void)
// callers(0): 
// callees(1): 005731dc FUN_005731dc

undefined4 FUN_00571dc8(void)

{
  undefined4 uVar1;
  
  uVar1 = FUN_005731dc();
  return uVar1;
}



//==== 00571df0  ns=Global  size=0xa0
// sig: undefined FUN_00571df0(void)
// callers(0): 
// callees(2): 00572554 FUN_00572554; 006503a4 sys::bind

undefined4 FUN_00571df0(int param_1,undefined4 param_2,undefined2 param_3)

{
  int iVar1;
  undefined4 uVar2;
  sockaddr sStack_10;
  
  sStack_10.sa_data[0xd] = '\0';
  sStack_10.sa_family._0_1_ = 0;
  sStack_10.sa_data[6] = '\0';
  sStack_10.sa_data[7] = '\0';
  sStack_10.sa_data[8] = '\0';
  sStack_10.sa_data[9] = '\0';
  sStack_10.sa_data[10] = '\0';
  sStack_10.sa_data[0xb] = '\0';
  sStack_10.sa_data[0xc] = '\0';
  sStack_10.sa_family._1_1_ = 2;
  sStack_10.sa_data._0_2_ = param_3;
  sStack_10.sa_data._2_4_ = param_2;
  iVar1 = sys::bind(param_1,&sStack_10,0x10);
  uVar2 = 0;
  if (iVar1 != 0) {
    uVar2 = FUN_00572554();
  }
  return uVar2;
}



//==== 00571e90  ns=Global  size=0xa4
// sig: undefined FUN_00571e90(void)
// callers(1): 00570a1c FUN_00570a1c
// callees(2): 00572554 FUN_00572554; 006503a4 sys::bind

undefined4 FUN_00571e90(int param_1,undefined2 param_2)

{
  int iVar1;
  undefined4 uVar2;
  sockaddr sStack_10;
  
  sStack_10.sa_data[0xd] = '\0';
  sStack_10.sa_family._0_1_ = 0;
  sStack_10.sa_data[6] = '\0';
  sStack_10.sa_data[7] = '\0';
  sStack_10.sa_data[8] = '\0';
  sStack_10.sa_data[9] = '\0';
  sStack_10.sa_data[10] = '\0';
  sStack_10.sa_data[0xb] = '\0';
  sStack_10.sa_data[0xc] = '\0';
  sStack_10.sa_family._1_1_ = 2;
  sStack_10.sa_data[2] = '\0';
  sStack_10.sa_data[3] = '\0';
  sStack_10.sa_data[4] = '\0';
  sStack_10.sa_data[5] = '\0';
  sStack_10.sa_data._0_2_ = param_2;
  iVar1 = sys::bind(param_1,&sStack_10,0x10);
  uVar2 = 0;
  if (iVar1 != 0) {
    uVar2 = FUN_00572554();
  }
  return uVar2;
}



//==== 00571f34  ns=Global  size=0x180
// sig: undefined FUN_00571f34(void)
// callers(1): 00570a1c FUN_00570a1c
// callees(5): 00571d50 FUN_00571d50; 00572554 FUN_00572554; 005c1ef4 FUN_005c1ef4; 006501e4 sys::getsockname; 006503a4 sys::bind

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
  local_34.sa_family._0_1_ = 0;
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
  local_34.sa_family._1_1_ = 2;
  FUN_005c1ef4(&local_48);
  if ((local_48 == 1) && (iVar1 = FUN_00571d50(local_4c), iVar1 == 0)) {
    local_34.sa_data[2] = local_4c[0];
    local_34.sa_data[3] = local_4c[1];
    local_34.sa_data[4] = local_4c[2];
    local_34.sa_data[5] = local_4c[3];
  }
  local_34.sa_data._0_2_ = SUB42(*param_2,0);
  iVar1 = sys::bind(param_1,&local_34,0x10);
  if (iVar1 == 0) {
    if (*param_2 != 0) {
      return 0;
    }
    local_50 = 0x10;
    iVar1 = sys::getsockname(param_1,&sStack_44,&local_50);
    if (iVar1 == 0) {
      *param_2 = (uint)(ushort)sStack_44.sa_data._0_2_;
      return 0;
    }
  }
  uVar2 = FUN_00572554();
  return uVar2;
}



//==== 005720b4  ns=Global  size=0x94
// sig: undefined FUN_005720b4(void)
// callers(0): 
// callees(2): 00572554 FUN_00572554; 00650264 sys::getsockopt

undefined4 FUN_005720b4(int param_1,undefined4 *param_2)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 local_20;
  socklen_t local_1c [5];
  
  local_1c[0] = 4;
  iVar1 = sys::getsockopt(param_1,0xffff,0x1001,&local_20,local_1c);
  if (iVar1 == 0) {
    *param_2 = local_20;
    return 0;
  }
  *param_2 = 0;
  uVar2 = FUN_00572554();
  return uVar2;
}



//==== 00572148  ns=Global  size=0x94
// sig: undefined FUN_00572148(void)
// callers(0): 
// callees(2): 00572554 FUN_00572554; 00650264 sys::getsockopt

undefined4 FUN_00572148(int param_1,undefined4 *param_2)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 local_20;
  socklen_t local_1c [5];
  
  local_1c[0] = 4;
  iVar1 = sys::getsockopt(param_1,0xffff,0x1002,&local_20,local_1c);
  if (iVar1 == 0) {
    *param_2 = local_20;
    return 0;
  }
  *param_2 = 0;
  uVar2 = FUN_00572554();
  return uVar2;
}



//==== 005721dc  ns=Global  size=0xa0
// sig: undefined FUN_005721dc(void)
// callers(0): 
// callees(2): 00572554 FUN_00572554; 00650264 sys::getsockopt

undefined4 FUN_005721dc(int param_1,undefined4 *param_2)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 local_20;
  socklen_t local_1c [5];
  
  uVar2 = 2;
  if (param_2 != (undefined4 *)0x0) {
    local_1c[0] = 4;
    iVar1 = sys::getsockopt(param_1,0xffff,0x1008,&local_20,local_1c);
    uVar2 = 0;
    if (iVar1 != 0) {
      uVar2 = FUN_00572554();
      return uVar2;
    }
    *param_2 = local_20;
  }
  return uVar2;
}



//==== 0057227c  ns=Global  size=0x58
// sig: undefined FUN_0057227c(void)
// callers(0): 
// callees(2): 00572554 FUN_00572554; 00650304 sce::setsockopt

undefined4 FUN_0057227c(int param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 local_10 [4];
  
  local_10[0] = param_2;
  iVar1 = sce::setsockopt(param_1,0xffff,0x1002,local_10,4);
  uVar2 = 0;
  if (iVar1 != 0) {
    uVar2 = FUN_00572554();
  }
  return uVar2;
}



//==== 005722d4  ns=Global  size=0x58
// sig: undefined FUN_005722d4(void)
// callers(0): 
// callees(2): 00572554 FUN_00572554; 00650304 sce::setsockopt

undefined4 FUN_005722d4(int param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 local_10 [4];
  
  local_10[0] = param_2;
  iVar1 = sce::setsockopt(param_1,0xffff,0x1001,local_10,4);
  uVar2 = 0;
  if (iVar1 != 0) {
    uVar2 = FUN_00572554();
  }
  return uVar2;
}



//==== 0057232c  ns=Global  size=0x58
// sig: undefined FUN_0057232c(void)
// callers(0): 
// callees(2): 00572554 FUN_00572554; 00650304 sce::setsockopt

undefined4 FUN_0057232c(int param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 local_10 [4];
  
  local_10[0] = param_2;
  iVar1 = sce::setsockopt(param_1,0xffff,4,local_10,4);
  uVar2 = 0;
  if (iVar1 != 0) {
    uVar2 = FUN_00572554();
  }
  return uVar2;
}



//==== 00572384  ns=Global  size=0x70
// sig: undefined FUN_00572384(void)
// callers(1): 00570a1c FUN_00570a1c
// callees(2): 00572554 FUN_00572554; 00650304 sce::setsockopt

undefined4 FUN_00572384(int param_1,uint param_2)

{
  uint uVar1;
  int iVar2;
  undefined4 uVar3;
  uint local_10 [4];
  
  uVar1 = (int)(param_2 ^ 1) >> 0x1f;
  local_10[0] = ((uVar1 ^ param_2 ^ 1) - uVar1) - 1 >> 0x1f;
  iVar2 = sce::setsockopt(param_1,0xffff,0x20,local_10,4);
  uVar3 = 0;
  if (iVar2 != 0) {
    uVar3 = FUN_00572554();
  }
  return uVar3;
}



//==== 005723f4  ns=Global  size=0x28
// sig: undefined FUN_005723f4(void)
// callers(1): 00570618 FUN_00570618
// callees(1): 0057253c FUN_0057253c

undefined4 FUN_005723f4(void)

{
  undefined4 uVar1;
  
  uVar1 = FUN_0057253c();
  return uVar1;
}



//==== 0057241c  ns=Global  size=0x28
// sig: undefined FUN_0057241c(void)
// callers(3): 00570618 FUN_00570618; 0057080c FUN_0057080c; 00570a1c FUN_00570a1c
// callees(1): 005732a0 FUN_005732a0

undefined4 FUN_0057241c(void)

{
  undefined4 uVar1;
  
  uVar1 = FUN_005732a0();
  return uVar1;
}



//==== 00572444  ns=Global  size=0x28
// sig: undefined FUN_00572444(void)
// callers(1): 0057052c FUN_0057052c
// callees(1): 00573340 FUN_00573340

undefined4 FUN_00572444(void)

{
  undefined4 uVar1;
  
  uVar1 = FUN_00573340();
  return uVar1;
}



//==== 0057246c  ns=Global  size=0x40
// sig: undefined FUN_0057246c(void)
// callers(0): 
// callees(2): 00572554 FUN_00572554; 00650364 sce::shutdown

undefined4 FUN_0057246c(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = sce::shutdown(param_1,2);
  uVar2 = 0;
  if (iVar1 != 0) {
    uVar2 = FUN_00572554();
  }
  return uVar2;
}



//==== 005724ac  ns=Global  size=0x28
// sig: undefined FUN_005724ac(void)
// callers(1): 00570e40 FUN_00570e40
// callees(1): 00572534 FUN_00572534

undefined4 FUN_005724ac(void)

{
  undefined4 uVar1;
  
  uVar1 = FUN_00572534();
  return uVar1;
}



//==== 005724d4  ns=Global  size=0x28
// sig: undefined FUN_005724d4(void)
// callers(1): 00570ebc FUN_00570ebc
// callees(1): 0057252c FUN_0057252c

undefined4 FUN_005724d4(void)

{
  undefined4 uVar1;
  
  uVar1 = FUN_0057252c();
  return uVar1;
}



//==== 005724fc  ns=Global  size=0x30
// sig: undefined FUN_005724fc(void)
// callers(0): 
// callees(1): 005cccec libc::strcpy
// strings: 0067dc20: '03.09.2011.18.00.00'

undefined8 FUN_005724fc(undefined8 param_1,undefined8 param_2)

{
  libc::strcpy(param_1,PTR_s_03_09_2011_18_00_00_0071b564,param_2);
  return 0;
}



//==== 0057252c  ns=Global  size=0x8
// sig: undefined FUN_0057252c(void)
// callers(1): 005724d4 FUN_005724d4
// callees(0): 

undefined8 FUN_0057252c(void)

{
  return 0;
}



//==== 00572534  ns=Global  size=0x8
// sig: undefined FUN_00572534(void)
// callers(1): 005724ac FUN_005724ac
// callees(0): 

undefined8 FUN_00572534(void)

{
  return 0;
}



//==== 0057253c  ns=Global  size=0x10
// sig: undefined FUN_0057253c(void)
// callers(1): 005723f4 FUN_005723f4
// callees(0): 

undefined8 FUN_0057253c(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 4;
}



//==== 0057254c  ns=Global  size=0x8
// sig: undefined FUN_0057254c(void)
// callers(1): 0057104c FUN_0057104c
// callees(0): 

undefined8 FUN_0057254c(void)

{
  return 4;
}



//==== 00572554  ns=Global  size=0x64
// sig: undefined FUN_00572554(void)
// callers(36): 005710ec FUN_005710ec; 00571214 FUN_00571214; 00571468 FUN_00571468; 00571580 FUN_00571580; 00571664 FUN_00571664; 005716e4 FUN_005716e4; 0057175c FUN_0057175c; 005717d4 FUN_005717d4; 00571878 FUN_00571878; 0057191c FUN_0057191c; 005719c0 FUN_005719c0; 00571a64 FUN_00571a64; 00571b08 FUN_00571b08; 00571bb8 FUN_00571bb8; 00571c54 FUN_00571c54; 00571cb8 FUN_00571cb8; 00571df0 FUN_00571df0; 00571e90 FUN_00571e90; 00571f34 FUN_00571f34; 005720b4 FUN_005720b4; 00572148 FUN_00572148; 005721dc FUN_005721dc; 0057227c FUN_0057227c; 005722d4 FUN_005722d4; 0057232c FUN_0057232c
// callees(1): 00650284 sys::_sys_net_errno_loc

undefined8 FUN_00572554(void)

{
  int *piVar2;
  undefined8 uVar1;
  undefined4 uStack_44;
  
  piVar2 = (int *)sys::_sys_net_errno_loc();
  if (*piVar2 - 4U < 0x44) {
                    /* WARNING: Could not recover jumptable at 0x00572590. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar1 = (*(code *)(*(int *)((*piVar2 + -4) * 4 + *(int *)(uStack_44 + -0x6dc0)) +
                      *(int *)(uStack_44 + -0x6dc0)))();
    return uVar1;
  }
  return 0xcf0b;
}



//==== 005728a8  ns=Global  size=0x9c
// sig: undefined FUN_005728a8(void)
// callers(1): 00570a1c FUN_00570a1c
// callees(2): 00572554 FUN_00572554; 006502a4 sys::connect

undefined4 FUN_005728a8(int param_1,undefined4 param_2,undefined2 param_3)

{
  int iVar1;
  undefined4 uVar2;
  sockaddr sStack_10;
  
  sStack_10.sa_data[0xd] = '\0';
  sStack_10.sa_family._0_1_ = 0;
  sStack_10.sa_data[6] = '\0';
  sStack_10.sa_data[7] = '\0';
  sStack_10.sa_data[8] = '\0';
  sStack_10.sa_data[9] = '\0';
  sStack_10.sa_data[10] = '\0';
  sStack_10.sa_data[0xb] = '\0';
  sStack_10.sa_data[0xc] = '\0';
  sStack_10.sa_family._1_1_ = 2;
  sStack_10.sa_data._0_2_ = param_3;
  sStack_10.sa_data._2_4_ = param_2;
  iVar1 = sys::connect(param_1,&sStack_10,0x10);
  uVar2 = 0;
  if (iVar1 != 0) {
    uVar2 = FUN_00572554();
  }
  return uVar2;
}



//==== 00572944  ns=Global  size=0x19c
// sig: undefined FUN_00572944(void)
// callers(1): 00571074 FUN_00571074
// callees(4): 00572554 FUN_00572554; 005c5ad0 libc::memcpy; 00650324 sce::sendto; 006503e4 sce::send

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
      libc::memcpy((void *)((int)__buf + __n),(void *)*puVar3,puVar3[1]);
      __n = __n + puVar3[1];
    } while (iVar1 < *(int *)(param_2 + 0x44));
  }
  if ((param_3 == 0) || (param_4 == 0)) {
    iVar1 = sce::send(param_1,__buf,__n,0);
  }
  else {
    sStack_70.sa_family._1_1_ = 2;
    sStack_70.sa_data._0_2_ = SUB42(param_4,0);
    sStack_70.sa_data._2_4_ = param_3;
    iVar1 = sce::sendto(param_1,__buf,__n,0,&sStack_70,0x10);
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



//==== 00572ae0  ns=Global  size=0x1b0
// sig: undefined FUN_00572ae0(void)
// callers(1): 0057109c FUN_0057109c
// callees(4): 00572554 FUN_00572554; 005d0140 libc::memset; 00650384 sys::inet_aton; 00650464 cell::cellNetCtlGetInfo

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
  libc::memset(param_1,0,(param_2 & 0x1fffffff) << 3);
  if ((param_2 & 0xffffffff) <= (ulonglong)*param_3) {
    return 0;
  }
  iVar2 = cell::cellNetCtlGetInfo(0x13,acStack_13c);
  if (-1 < iVar2) {
    iVar2 = sys::inet_aton(acStack_13c,&local_140);
    if (iVar2 != 0) {
      *(in_addr_t *)(*param_3 * 8 + param_1) = local_140.s_addr;
      uVar1 = *param_3;
      *param_3 = uVar1 + 1;
      if ((ulonglong)(uVar1 + 1) < (param_2 & 0xffffffff)) {
        iVar2 = cell::cellNetCtlGetInfo(0x14,acStack_13c);
        if ((iVar2 < 0) || (iVar2 = sys::inet_aton(acStack_13c,&local_140), iVar2 == 0))
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



//==== 00572c90  ns=Global  size=0x1f8
// sig: undefined FUN_00572c90(void)
// callers(1): 005710c4 FUN_005710c4
// callees(2): 00572554 FUN_00572554; 00650244 sys::socketselect

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
  iVar3 = sys::socketselect(param_1 + 1);
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



//==== 00572e88  ns=Global  size=0xa0
// sig: undefined FUN_00572e88(void)
// callers(1): 00571d50 FUN_00571d50
// callees(3): 00572554 FUN_00572554; 00650384 sys::inet_aton; 00650464 cell::cellNetCtlGetInfo

undefined4 FUN_00572e88(in_addr_t *param_1)

{
  int iVar1;
  undefined4 uVar2;
  in_addr local_130;
  char acStack_12c [276];
  
  *param_1 = 0;
  iVar1 = cell::cellNetCtlGetInfo(0x10,acStack_12c);
  if (-1 < iVar1) {
    iVar1 = sys::inet_aton(acStack_12c,&local_130);
    if (iVar1 != 0) {
      *param_1 = local_130.s_addr;
      return 0;
    }
  }
  uVar2 = FUN_00572554();
  return uVar2;
}



//==== 00572f28  ns=Global  size=0x90
// sig: undefined FUN_00572f28(void)
// callers(2): 00572fb8 FUN_00572fb8; 005731dc FUN_005731dc
// callees(2): 00572554 FUN_00572554; 006501a4 sys::socketpoll

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
  iVar2 = sys::socketpoll(param_1,param_2,param_3);
  if (iVar2 != -1) {
    *param_4 = iVar2;
    return 0;
  }
  *param_4 = 0;
  uVar1 = FUN_00572554();
  return uVar1;
}



//==== 00572fb8  ns=Global  size=0x224
// sig: undefined FUN_00572fb8(void)
// callers(1): 00571d78 FUN_00571d78
// callees(2): 00572f28 FUN_00572f28; 00650404 sys::recv

int FUN_00572fb8(int param_1,int param_2,undefined4 param_3,int *param_4)

{
  int iVar1;
  ssize_t sVar2;
  int *piVar3;
  int iVar4;
  int local_70 [2];
  undefined1 auStack_68 [24];
  
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
        sVar2 = sys::recv(*piVar3,auStack_68,1,2);
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



//==== 005731dc  ns=Global  size=0xc4
// sig: undefined FUN_005731dc(void)
// callers(2): 00571da0 FUN_00571da0; 00571dc8 FUN_00571dc8
// callees(1): 00572f28 FUN_00572f28

int FUN_005731dc(int param_1,undefined4 param_2,undefined4 param_3,undefined4 *param_4)

{
  int iVar1;
  undefined1 local_20 [16];
  
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



//==== 005732a0  ns=Global  size=0x50
// sig: undefined FUN_005732a0(void)
// callers(1): 0057241c FUN_0057241c
// callees(2): 00572554 FUN_00572554; 00650304 sce::setsockopt

undefined4 FUN_005732a0(int param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 local_10 [4];
  
  local_10[0] = param_2;
  iVar1 = sce::setsockopt(param_1,0xffff,0x1100,local_10,4);
  uVar2 = 0;
  if (iVar1 != 0) {
    uVar2 = FUN_00572554();
  }
  return uVar2;
}



//==== 005732f0  ns=Global  size=0x50
// sig: undefined FUN_005732f0(void)
// callers(1): 00571c90 FUN_00571c90
// callees(2): 00572554 FUN_00572554; 00650304 sce::setsockopt

undefined4 FUN_005732f0(int param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 local_10 [4];
  
  local_10[0] = param_2;
  iVar1 = sce::setsockopt(param_1,6,1,local_10,4);
  uVar2 = 0;
  if (iVar1 != 0) {
    uVar2 = FUN_00572554();
  }
  return uVar2;
}



//==== 00573340  ns=Global  size=0x4c
// sig: undefined FUN_00573340(void)
// callers(1): 00572444 FUN_00572444
// callees(2): 00572554 FUN_00572554; 006502c4 sce::socketclose

void FUN_00573340(void)

{
  int iVar1;
  
  iVar1 = sce::socketclose();
  if (iVar1 == 0) {
    return;
  }
  FUN_00572554(0);
  return;
}



//==== 0057338c  ns=Global  size=0x44
// sig: undefined FUN_0057338c(void)
// callers(0): 
// callees(0): 

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



//==== 005733d0  ns=Global  size=0x44
// sig: undefined FUN_005733d0(void)
// callers(0): 
// callees(0): 

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



//==== 00573414  ns=Global  size=0x44
// sig: undefined FUN_00573414(void)
// callers(0): 
// callees(0): 

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



//==== 00573458  ns=Global  size=0x44
// sig: undefined FUN_00573458(void)
// callers(0): 
// callees(0): 

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



//==== 0057349c  ns=Global  size=0x44
// sig: undefined FUN_0057349c(void)
// callers(0): 
// callees(0): 

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



//==== 005734e0  ns=Global  size=0x90
// sig: undefined FUN_005734e0(void)
// callers(0): 
// callees(4): 00540808 FUN_00540808; 005450d8 FUN_005450d8; 00545114 FUN_00545114; 0057c914 FUN_0057c914

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



//==== 00573570  ns=Global  size=0xa0
// sig: undefined FUN_00573570(void)
// callers(0): 
// callees(4): 00540808 FUN_00540808; 005450d8 FUN_005450d8; 00545114 FUN_00545114; 0057c7c8 FUN_0057c7c8

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



//==== 00573610  ns=Global  size=0xb4
// sig: undefined FUN_00573610(void)
// callers(0): 
// callees(4): 00540808 FUN_00540808; 005450d8 FUN_005450d8; 00545114 FUN_00545114; 00574bd8 FUN_00574bd8

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



//==== 005736c4  ns=Global  size=0xa0
// sig: undefined FUN_005736c4(void)
// callers(0): 
// callees(4): 00540808 FUN_00540808; 005450d8 FUN_005450d8; 00545114 FUN_00545114; 00574bd4 thunk_FUN_005746ac

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



//==== 00573764  ns=Global  size=0xa0
// sig: undefined FUN_00573764(void)
// callers(0): 
// callees(4): 00540808 FUN_00540808; 005450d8 FUN_005450d8; 00545114 FUN_00545114; 00574bd0 thunk_FUN_00574608

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



//==== 00573804  ns=Global  size=0xb4
// sig: undefined FUN_00573804(void)
// callers(0): 
// callees(4): 00540808 FUN_00540808; 005450d8 FUN_005450d8; 00545114 FUN_00545114; 00574744 FUN_00574744

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



//==== 005738b8  ns=Global  size=0xbc
// sig: undefined FUN_005738b8(void)
// callers(0): 
// callees(4): 00540808 FUN_00540808; 005450d8 FUN_005450d8; 00545114 FUN_00545114; 005745d0 FUN_005745d0

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



//==== 00573974  ns=Global  size=0xc4
// sig: undefined FUN_00573974(void)
// callers(0): 
// callees(5): 00540808 FUN_00540808; 005450d8 FUN_005450d8; 00545114 FUN_00545114; 005745d0 FUN_005745d0; 005763fc FUN_005763fc

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



//==== 00573a38  ns=Global  size=0xf0
// sig: undefined FUN_00573a38(void)
// callers(0): 
// callees(4): 00540808 FUN_00540808; 005450d8 FUN_005450d8; 00545114 FUN_00545114; 0057c6b8 FUN_0057c6b8

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



//==== 00573b28  ns=Global  size=0xc8
// sig: undefined FUN_00573b28(void)
// callers(0): 
// callees(4): 00540808 FUN_00540808; 005450d8 FUN_005450d8; 00545114 FUN_00545114; 0057ca08 FUN_0057ca08

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



//==== 00573bf0  ns=Global  size=0xc8
// sig: undefined FUN_00573bf0(void)
// callers(0): 
// callees(4): 00540808 FUN_00540808; 005450d8 FUN_005450d8; 00545114 FUN_00545114; 0057cc5c FUN_0057cc5c

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



//==== 00573cb8  ns=Global  size=0xa0
// sig: undefined FUN_00573cb8(void)
// callers(0): 
// callees(4): 00540808 FUN_00540808; 005450d8 FUN_005450d8; 00545114 FUN_00545114; 0057786c FUN_0057786c

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



//==== 00573d58  ns=Global  size=0xa0
// sig: undefined FUN_00573d58(void)
// callers(0): 
// callees(4): 00540808 FUN_00540808; 005450d8 FUN_005450d8; 00545114 FUN_00545114; 00575c80 FUN_00575c80

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



//==== 00573df8  ns=Global  size=0x18
// sig: undefined FUN_00573df8(void)
// callers(0): 
// callees(0): 

undefined8 FUN_00573df8(undefined4 *param_1)

{
  param_1[1] = 0;
  *param_1 = 0;
  return 0;
}



//==== 00573e10  ns=Global  size=0x24
// sig: undefined FUN_00573e10(void)
// callers(0): 
// callees(0): 

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



//==== 00573e34  ns=Global  size=0x3c
// sig: undefined FUN_00573e34(void)
// callers(1): 004f5be4 FUN_004f5be4
// callees(0): 

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



//==== 00573e70  ns=Global  size=0x90
// sig: undefined FUN_00573e70(void)
// callers(0): 
// callees(4): 00540808 FUN_00540808; 005450d8 FUN_005450d8; 00545114 FUN_00545114; 00575a08 FUN_00575a08

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



//==== 00573f00  ns=Global  size=0xa0
// sig: undefined FUN_00573f00(void)
// callers(0): 
// callees(4): 00540808 FUN_00540808; 005450d8 FUN_005450d8; 00545114 FUN_00545114; 00575ff8 FUN_00575ff8

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



//==== 00573fa0  ns=Global  size=0xa0
// sig: undefined FUN_00573fa0(void)
// callers(0): 
// callees(4): 00540808 FUN_00540808; 005450d8 FUN_005450d8; 00545114 FUN_00545114; 00575a94 FUN_00575a94

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



//==== 00574040  ns=Global  size=0x14c
// sig: undefined FUN_00574040(void)
// callers(0): 
// callees(4): 00540808 FUN_00540808; 005450d8 FUN_005450d8; 00545114 FUN_00545114; 005798e8 FUN_005798e8

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



//==== 0057418c  ns=Global  size=0x140
// sig: undefined FUN_0057418c(void)
// callers(0): 
// callees(4): 00540808 FUN_00540808; 005450d8 FUN_005450d8; 00545114 FUN_00545114; 00578f44 FUN_00578f44

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



//==== 005742cc  ns=Global  size=0xb4
// sig: undefined FUN_005742cc(void)
// callers(0): 
// callees(4): 00540808 FUN_00540808; 005450d8 FUN_005450d8; 00545114 FUN_00545114; 0057c628 FUN_0057c628

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



//==== 00574380  ns=Global  size=0x12c
// sig: undefined FUN_00574380(void)
// callers(0): 
// callees(4): 00540808 FUN_00540808; 005450d8 FUN_005450d8; 00545114 FUN_00545114; 0057c0f8 FUN_0057c0f8

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



//==== 005744ac  ns=Global  size=0x7c
// sig: undefined FUN_005744ac(void)
// callers(1): 004f5be4 FUN_004f5be4
// callees(1): 00574924 FUN_00574924

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



//==== 00574528  ns=Global  size=0x90
// sig: undefined FUN_00574528(void)
// callers(0): 
// callees(4): 00540808 FUN_00540808; 005450d8 FUN_005450d8; 00545114 FUN_00545114; 0057cd34 FUN_0057cd34

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



//==== 005745b8  ns=Global  size=0x18
// sig: undefined FUN_005745b8(void)
// callers(2): 00576178 FUN_00576178; 00579370 FUN_00579370
// callees(0): 

undefined8 FUN_005745b8(void)

{
  *(undefined4 *)(*(int *)PTR_DAT_0071b570 + 300) = 0;
  return 0;
}



//==== 005745d0  ns=Global  size=0x38
// sig: undefined FUN_005745d0(void)
// callers(20): 005738b8 FUN_005738b8; 00573974 FUN_00573974; 00574608 FUN_00574608; 005746ac FUN_005746ac; 0057477c FUN_0057477c; 00574838 FUN_00574838; 005757c8 FUN_005757c8; 00575a94 FUN_00575a94; 00575c80 FUN_00575c80; 00575ff8 FUN_00575ff8; 00577838 FUN_00577838; 0057786c FUN_0057786c; 00577e18 FUN_00577e18; 005783e4 FUN_005783e4; 0057980c FUN_0057980c; 0057ae68 FUN_0057ae68; 0057b098 FUN_0057b098; 0057b218 FUN_0057b218; 0057b678 FUN_0057b678; 0057bd80 FUN_0057bd80
// callees(0): 

undefined4 FUN_005745d0(uint param_1)

{
  undefined4 uVar1;
  
  uVar1 = 0;
  if (param_1 < *(uint *)(*(int *)PTR_DAT_0071b570 + 0x100)) {
    uVar1 = *(undefined4 *)(param_1 * 4 + *(int *)(PTR_DAT_0071b574 + 0x17c));
  }
  return uVar1;
}



//==== 00574608  ns=Global  size=0xa4
// sig: undefined FUN_00574608(void)
// callers(3): 005757c8 FUN_005757c8; 0057786c FUN_0057786c; 0057b218 FUN_0057b218
// callees(1): 005745d0 FUN_005745d0

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



//==== 005746ac  ns=Global  size=0x98
// sig: undefined FUN_005746ac(void)
// callers(5): 00577e18 FUN_00577e18; 00578f44 FUN_00578f44; 0057ae68 FUN_0057ae68; 0057b098 FUN_0057b098; 0057b678 FUN_0057b678
// callees(1): 005745d0 FUN_005745d0

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



//==== 00574744  ns=Global  size=0x38
// sig: undefined FUN_00574744(void)
// callers(6): 00573804 FUN_00573804; 00577e18 FUN_00577e18; 00578634 FUN_00578634; 0057a1c4 FUN_0057a1c4; 0057a288 FUN_0057a288; 0057ab08 FUN_0057ab08
// callees(0): 

undefined8 FUN_00574744(undefined4 *param_1,int param_2)

{
  if ((param_1 != (undefined4 *)0x0) && (*param_1 = 0x100, param_2 != 0)) {
    *param_1 = *(undefined4 *)(param_2 + 0x414);
    return 0;
  }
  return 3;
}



//==== 0057477c  ns=Global  size=0xbc
// sig: undefined FUN_0057477c(void)
// callers(1): 0057b678 FUN_0057b678
// callees(1): 005745d0 FUN_005745d0

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



//==== 00574838  ns=Global  size=0xd0
// sig: undefined FUN_00574838(void)
// callers(8): 00575c80 FUN_00575c80; 0057786c FUN_0057786c; 00577e18 FUN_00577e18; 0057ae68 FUN_0057ae68; 0057b098 FUN_0057b098; 0057b218 FUN_0057b218; 0057b678 FUN_0057b678; 0057bd80 FUN_0057bd80
// callees(1): 005745d0 FUN_005745d0

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



//==== 00574908  ns=Global  size=0x1c
// sig: undefined FUN_00574908(void)
// callers(5): 00576178 FUN_00576178; 00577e18 FUN_00577e18; 00579370 FUN_00579370; 00579f94 FUN_00579f94; 0057a6dc FUN_0057a6dc
// callees(0): 

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



//==== 00574924  ns=Global  size=0x2ac
// sig: undefined FUN_00574924(void)
// callers(1): 005744ac FUN_005744ac
// callees(0): 

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



//==== 00574bd0  ns=Global  size=0x4
// sig: undefined thunk_FUN_00574608(void)
// callers(1): 00573764 FUN_00573764
// callees(0): 

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



//==== 00574bd4  ns=Global  size=0x4
// sig: undefined thunk_FUN_005746ac(void)
// callers(1): 005736c4 FUN_005736c4
// callees(0): 

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



//==== 00574bd8  ns=Global  size=0x160
// sig: undefined FUN_00574bd8(void)
// callers(1): 00573610 FUN_00573610
// callees(0): 

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



//==== 00574d38  ns=Global  size=0x70
// sig: undefined FUN_00574d38(void)
// callers(5): 005763fc FUN_005763fc; 00576994 FUN_00576994; 005798e8 FUN_005798e8; 0057b678 FUN_0057b678; 0057bd80 FUN_0057bd80
// callees(0): 

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



//==== 00575234  ns=Global  size=0x234
// sig: undefined FUN_00575234(void)
// callers(0): 
// callees(1): 005519f0 FUN_005519f0
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



//==== 00575468  ns=Global  size=0x360
// sig: undefined FUN_00575468(void)
// callers(0): 
// callees(2): 00540808 FUN_00540808; 00551de8 FUN_00551de8

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



//==== 005757c8  ns=Global  size=0x240
// sig: undefined FUN_005757c8(void)
// callers(4): 00575a08 FUN_00575a08; 00575ff8 FUN_00575ff8; 00577e18 FUN_00577e18; 0057b64c FUN_0057b64c
// callees(4): 005472a4 FUN_005472a4; 005745d0 FUN_005745d0; 00574608 FUN_00574608; 0057cdb0 FUN_0057cdb0

undefined8 FUN_005757c8(int param_1)

{
  uint uVar1;
  undefined4 *puVar2;
  int iVar3;
  undefined *puVar4;
  int iVar5;
  int iVar6;
  undefined1 local_40 [24];
  
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



//==== 00575a08  ns=Global  size=0x8c
// sig: undefined FUN_00575a08(void)
// callers(2): 00573e70 FUN_00573e70; 00576178 FUN_00576178
// callees(1): 005757c8 FUN_005757c8

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



//==== 00575a94  ns=Global  size=0xf0
// sig: undefined FUN_00575a94(void)
// callers(1): 00573fa0 FUN_00573fa0
// callees(3): 005745d0 FUN_005745d0; 0057cdb0 FUN_0057cdb0; 0057ce10 FUN_0057ce10

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



//==== 00575b84  ns=Global  size=0xfc
// sig: undefined FUN_00575b84(void)
// callers(0): 
// callees(1): 0057ce10 FUN_0057ce10

int FUN_00575b84(void)

{
  undefined4 *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  int iVar4;
  undefined1 local_30 [16];
  
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



//==== 00575c80  ns=Global  size=0x378
// sig: undefined FUN_00575c80(void)
// callers(1): 00573d58 FUN_00573d58
// callees(4): 00541a44 FUN_00541a44; 00546bdc FUN_00546bdc; 005745d0 FUN_005745d0; 00574838 FUN_00574838

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
  undefined1 local_f8 [4];
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
  undefined1 auStack_c0 [48];
  int local_90;
  undefined1 local_8c;
  undefined4 local_88;
  undefined4 local_84;
  undefined1 auStack_80 [16];
  undefined1 auStack_70 [16];
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
    auStack_80 = (undefined1  [16])0x0;
    auStack_70 = (undefined1  [16])0x0;
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



//==== 00575ff8  ns=Global  size=0x180
// sig: undefined FUN_00575ff8(void)
// callers(1): 00573f00 FUN_00573f00
// callees(4): 00546bdc FUN_00546bdc; 005745d0 FUN_005745d0; 005757c8 FUN_005757c8; 005d0140 libc::memset

undefined8 FUN_00575ff8(uint param_1)

{
  undefined *puVar1;
  int iVar2;
  int iVar3;
  undefined2 local_a0 [2];
  undefined1 auStack_9c [48];
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
    libc::memset(&local_6c,0,0x4c);
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



//==== 00576178  ns=Global  size=0x284
// sig: undefined FUN_00576178(void)
// callers(1): 00579f94 FUN_00579f94
// callees(11): 005412c4 FUN_005412c4; 00541a44 FUN_00541a44; 00546bdc FUN_00546bdc; 005472a4 FUN_005472a4; 0054a110 FUN_0054a110; 005745b8 FUN_005745b8; 00574908 FUN_00574908; 00575a08 FUN_00575a08; 0057d05c FUN_0057d05c; 005c2ab8 FUN_005c2ab8; 005d0140 libc::memset

undefined8 FUN_00576178(int param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  int iVar3;
  undefined8 uVar4;
  uint uVar5;
  int iVar6;
  undefined1 local_b0 [4];
  undefined1 auStack_ac [48];
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
    libc::memset(&local_7c,0,0x4c);
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



//==== 005763fc  ns=Global  size=0x598
// sig: undefined FUN_005763fc(void)
// callers(2): 00573974 FUN_00573974; 005776c8 FUN_005776c8
// callees(13): 00541a44 FUN_00541a44; 00546bdc FUN_00546bdc; 00553b40 FUN_00553b40; 00553f04 FUN_00553f04; 00554160 FUN_00554160; 00554290 FUN_00554290; 005543a4 FUN_005543a4; 0055442c FUN_0055442c; 0055abd4 FUN_0055abd4; 0055b100 FUN_0055b100; 00574d38 FUN_00574d38; 005c5ad0 libc::memcpy; 005d0140 libc::memset

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
  undefined1 local_160 [2];
  undefined1 local_15e [2];
  undefined1 local_15c [4];
  undefined1 local_158 [4];
  undefined1 auStack_154 [24];
  int local_13c;
  undefined1 auStack_138 [48];
  undefined1 local_108 [16];
  undefined1 local_f8 [60];
  undefined1 local_bc [108];
  
  puVar1 = PTR_DAT_0071b574;
  iVar9 = 3;
  if (param_2 != 0) {
    iVar9 = *(int *)(PTR_DAT_0071b574 + 0x138);
    if (iVar9 != 0) {
      if ((*(char *)(param_2 + 9) != '\0') && (param_3 == 0)) {
        libc::memset(local_bc,0,0x60);
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
        libc::memset(local_108,0,0x4c);
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
        libc::memcpy(*(void **)(param_2 + 0x28),*(void **)(param_2 + 0x24),*psVar4);
        return 0;
      }
    }
    iVar9 = 10;
  }
  return iVar9;
}



//==== 00576994  ns=Global  size=0x78c
// sig: undefined FUN_00576994(void)
// callers(4): 005776c8 FUN_005776c8; 00577838 FUN_00577838; 0057786c FUN_0057786c; 0057b218 FUN_0057b218
// callees(12): 00540808 FUN_00540808; 00546bdc FUN_00546bdc; 00553f04 FUN_00553f04; 00554160 FUN_00554160; 00554290 FUN_00554290; 005543a4 FUN_005543a4; 0055442c FUN_0055442c; 0055ac68 FUN_0055ac68; 0055b100 FUN_0055b100; 00574d38 FUN_00574d38; 005c5ad0 libc::memcpy; 005d0140 libc::memset

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
  undefined1 local_1fc [4];
  undefined1 local_1f8 [4];
  undefined1 local_1f4;
  undefined1 local_1f3;
  undefined1 local_1f2 [2];
  undefined1 local_1f0 [24];
  undefined1 auStack_1d8 [24];
  undefined4 local_1c0;
  undefined1 auStack_1bc [24];
  undefined4 local_1a4;
  undefined1 auStack_1a0 [48];
  undefined1 local_170 [64];
  undefined8 uStack_130;
  undefined1 local_124 [48];
  undefined1 auStack_f4 [100];
  
  uVar10 = 3;
  if (param_1 == 0) goto LAB_00576ef4;
  uStack_130 = 0;
  libc::memset(local_124,0,0x60);
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
            libc::memcpy(__dest,__src,*(int *)(iVar1 + 4) * *(int *)(iVar1 + 8));
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



//==== 005776c8  ns=Global  size=0x170
// sig: undefined FUN_005776c8(void)
// callers(0): 
// callees(3): 005763fc FUN_005763fc; 00576994 FUN_00576994; 0057cdb0 FUN_0057cdb0

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



//==== 00577838  ns=Global  size=0x34
// sig: undefined FUN_00577838(void)
// callers(0): 
// callees(2): 005745d0 FUN_005745d0; 00576994 FUN_00576994

void FUN_00577838(void)

{
  undefined4 uVar1;
  
  uVar1 = FUN_005745d0();
  FUN_00576994(uVar1,0,0);
  return;
}



//==== 0057786c  ns=Global  size=0x224
// sig: undefined FUN_0057786c(void)
// callers(1): 00573cb8 FUN_00573cb8
// callees(5): 00546bdc FUN_00546bdc; 005745d0 FUN_005745d0; 00574608 FUN_00574608; 00574838 FUN_00574838; 00576994 FUN_00576994

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
  undefined1 auStack_c0 [48];
  int local_90;
  undefined1 local_8c;
  undefined4 local_88;
  undefined4 local_84;
  undefined1 auStack_80 [16];
  undefined1 auStack_70 [16];
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
      auStack_80 = (undefined1  [16])0x0;
      local_84 = 0xffffffff;
      auStack_70 = (undefined1  [16])0x0;
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



//==== 00577a90  ns=Global  size=0x104
// sig: undefined FUN_00577a90(void)
// callers(7): 00577b94 FUN_00577b94; 00577c54 FUN_00577c54; 00577df0 FUN_00577df0; 00578634 FUN_00578634; 00578cdc FUN_00578cdc; 0057a9d4 FUN_0057a9d4; 0057ab08 FUN_0057ab08
// callees(1): 00547ec0 FUN_00547ec0

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



//==== 00577b94  ns=Global  size=0xc0
// sig: undefined FUN_00577b94(void)
// callers(1): 00577c54 FUN_00577c54
// callees(2): 00577a90 FUN_00577a90; 005c2178 FUN_005c2178

undefined8 FUN_00577b94(undefined4 *param_1,undefined4 param_2)

{
  char *pcVar1;
  int iVar2;
  undefined1 local_20 [24];
  
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



//==== 00577c54  ns=Global  size=0x19c
// sig: undefined FUN_00577c54(void)
// callers(0): 
// callees(5): 00577a90 FUN_00577a90; 00577b94 FUN_00577b94; 005c2544 FUN_005c2544; 005c282c FUN_005c282c; 005c5ad0 libc::memcpy

int FUN_00577c54(uint param_1,int param_2,int param_3)

{
  int iVar1;
  int iVar2;
  undefined1 local_30 [16];
  
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
        libc::memcpy(*(void **)(iVar1 + 0x10),*(void **)(iVar1 + 0x3c),*(size_t *)(iVar1 + 0x34));
        return 0;
      }
    }
    iVar1 = 0x1a;
  }
  return iVar1;
}



//==== 00577df0  ns=Global  size=0x28
// sig: undefined FUN_00577df0(void)
// callers(5): 00577e18 FUN_00577e18; 0057834c FUN_0057834c; 00578634 FUN_00578634; 00578c38 FUN_00578c38; 0057a288 FUN_0057a288
// callees(1): 00577a90 FUN_00577a90

undefined4 FUN_00577df0(undefined4 param_1)

{
  undefined4 uVar1;
  
  uVar1 = FUN_00577a90(param_1);
  return uVar1;
}



//==== 00577e18  ns=Global  size=0x534
// sig: undefined FUN_00577e18(void)
// callers(1): 00579f68 FUN_00579f68
// callees(12): 0054170c FUN_0054170c; 005472a4 FUN_005472a4; 005745d0 FUN_005745d0; 005746ac FUN_005746ac; 00574744 FUN_00574744; 00574838 FUN_00574838; 00574908 FUN_00574908; 005757c8 FUN_005757c8; 00577df0 FUN_00577df0; 0057a288 FUN_0057a288; 0057cdb0 FUN_0057cdb0; 0057d014 FUN_0057d014

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
  undefined1 local_dc [12];
  undefined1 local_d0 [16];
  undefined1 local_c0 [56];
  
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



//==== 0057834c  ns=Global  size=0x98
// sig: undefined FUN_0057834c(void)
// callers(2): 005783e4 FUN_005783e4; 005785a4 FUN_005785a4
// callees(1): 00577df0 FUN_00577df0

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



//==== 005783e4  ns=Global  size=0x1c0
// sig: undefined FUN_005783e4(void)
// callers(1): 00579e48 FUN_00579e48
// callees(6): 0054170c FUN_0054170c; 005745d0 FUN_005745d0; 0057834c FUN_0057834c; 0057cdb0 FUN_0057cdb0; 0057ce10 FUN_0057ce10; 0057d158 FUN_0057d158

void FUN_005783e4(int param_1,uint param_2)

{
  undefined4 *puVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  undefined1 local_60 [24];
  
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



//==== 005785a4  ns=Global  size=0x90
// sig: undefined FUN_005785a4(void)
// callers(3): 00579370 FUN_00579370; 00579f94 FUN_00579f94; 0057a6dc FUN_0057a6dc
// callees(3): 0057834c FUN_0057834c; 0057cdb0 FUN_0057cdb0; 0057d158 FUN_0057d158

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



//==== 00578634  ns=Global  size=0x604
// sig: undefined FUN_00578634(void)
// callers(0): 
// callees(15): 0054536c FUN_0054536c; 00546bdc FUN_00546bdc; 005472a4 FUN_005472a4; 00574744 FUN_00574744; 00577a90 FUN_00577a90; 00577df0 FUN_00577df0; 0057cdb0 FUN_0057cdb0; 005c20f0 FUN_005c20f0; 005c2218 FUN_005c2218; 005c2368 FUN_005c2368; 005c282c FUN_005c282c; 005c299c FUN_005c299c; 005c2ab8 FUN_005c2ab8; 005c5ad0 libc::memcpy; 005d0140 libc::memset

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
  undefined1 local_220 [4];
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
                  local_204._0_1_ = (undefined1)((ushort)sVar15 >> 8);
                  local_204._1_1_ = (undefined1)sVar15;
                  local_202._0_1_ = (undefined1)(uVar16 >> 8);
                  local_202._1_1_ = (undefined1)uVar16;
                  puVar5[2] = local_20a;
                  *puVar5 = uVar19;
                  puVar5[1] = local_20b;
                  puVar5[3] = local_209;
                  puVar5[4] = local_208;
                  puVar5[5] = uStack_207;
                  *(short *)(puVar5 + 6) = local_206;
                  puVar5[9] = (undefined1)local_204;
                  puVar5[10] = local_202._0_1_;
                  puVar5[0xb] = (undefined1)local_202;
                  puVar5[8] = local_204._0_1_;
                  local_20c = uVar19;
                  local_204 = sVar15;
                  local_202 = (short)uVar16;
                  iVar13 = FUN_005c2368(local_f0,local_d0 & 0xffffffff);
                  if (iVar13 != 0) goto LAB_00578b10;
                  if (local_214 != 0) {
                    iVar13 = FUN_005c282c(local_f0,1);
                    if (iVar13 != 0) goto LAB_00578b10;
                    libc::memcpy(*(void **)(iVar11 + 0x10),*(void **)(iVar11 + 0x3c),
                                 *(size_t *)(iVar11 + 0x34));
                  }
                  iVar11 = FUN_005c2218(local_f0,local_c8 & 0xffffffff);
                  if (iVar11 != 0) goto LAB_00578b10;
                  iVar11 = __n + 0xc;
                  libc::memcpy(PTR_DAT_0071b68c,local_21c,__n);
                }
                libc::memset(local_e8 & 0xffffffff,0,0x4c);
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
                libc::memcpy(*(void **)(pcVar12 + 0x10),*(void **)(pcVar12 + 0x3c),
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



//==== 00578c38  ns=Global  size=0xa4
// sig: undefined FUN_00578c38(void)
// callers(0): 
// callees(1): 00577df0 FUN_00577df0

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



//==== 00578cdc  ns=Global  size=0x268
// sig: undefined FUN_00578cdc(void)
// callers(0): 
// callees(5): 005472a4 FUN_005472a4; 00547ec0 FUN_00547ec0; 00577a90 FUN_00577a90; 0057cdb0 FUN_0057cdb0; 005c2b28 FUN_005c2b28

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



//==== 00578f44  ns=Global  size=0x42c
// sig: undefined FUN_00578f44(void)
// callers(1): 0057418c FUN_0057418c
// callees(6): 005472a4 FUN_005472a4; 00547ec0 FUN_00547ec0; 005746ac FUN_005746ac; 0057cdb0 FUN_0057cdb0; 005c5ad0 libc::memcpy; 005cccec libc::strcpy

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
  undefined1 local_a0 [24];
  
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
              libc::strcpy(puVar7 + 5,in_stack_00000074,0xf);
              *(undefined1 *)((int)puVar7 + 0x23) = 0;
              *(char *)(puVar7 + 2) = (char)in_stack_0000007c;
              puVar7[0x10] = 0;
              puVar7[0xf] = param_6;
              if (param_8 != (void *)0x0) {
                libc::memcpy((void *)puVar7[9],param_8,__n);
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



//==== 00579370  ns=Global  size=0x49c
// sig: undefined FUN_00579370(void)
// callers(0): 
// callees(12): 005412c4 FUN_005412c4; 0054170c FUN_0054170c; 00541a44 FUN_00541a44; 00546bdc FUN_00546bdc; 0055abd4 FUN_0055abd4; 0055b234 FUN_0055b234; 005745b8 FUN_005745b8; 00574908 FUN_00574908; 005785a4 FUN_005785a4; 0057d158 FUN_0057d158; 005cccec libc::strcpy; 005d0140 libc::memset

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
  undefined1 auStack_d4 [48];
  int local_a4;
  undefined1 local_a0;
  undefined4 local_9c;
  undefined1 auStack_98 [4];
  undefined1 auStack_94 [36];
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
              libc::strcpy(iVar8 + 0x18,param_1 + 2,0x17);
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
                libc::memset(&local_a4,0,0x4c);
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



//==== 0057980c  ns=Global  size=0xdc
// sig: undefined FUN_0057980c(void)
// callers(2): 005798e8 FUN_005798e8; 0057b678 FUN_0057b678
// callees(3): 005745d0 FUN_005745d0; 0057cdb0 FUN_0057cdb0; 005cc784 FUN_005cc784

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



//==== 005798e8  ns=Global  size=0x3d4
// sig: undefined FUN_005798e8(void)
// callers(1): 00574040 FUN_00574040
// callees(12): 00541a44 FUN_00541a44; 00546bdc FUN_00546bdc; 00553b40 FUN_00553b40; 00553f04 FUN_00553f04; 00554160 FUN_00554160; 00554290 FUN_00554290; 005543a4 FUN_005543a4; 0055442c FUN_0055442c; 00574d38 FUN_00574d38; 0057980c FUN_0057980c; 005cc8d8 libc::strcpy; 005d0140 libc::memset

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
  undefined1 local_140 [4];
  undefined1 auStack_13c [24];
  int local_124;
  undefined1 local_120;
  undefined1 local_11f;
  undefined1 local_11e;
  undefined1 local_11d;
  undefined1 local_11c [2];
  undefined1 local_11a [2];
  undefined1 local_118 [4];
  undefined1 local_114 [4];
  undefined1 local_110 [4];
  char acStack_10c [16];
  undefined1 auStack_fc [48];
  undefined1 local_cc [84];
  
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
      libc::strcpy(acStack_10c,in_stack_00000074);
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
          libc::memset(local_cc,0,0x4c);
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



//==== 00579cbc  ns=Global  size=0x18c
// sig: undefined FUN_00579cbc(void)
// callers(1): 0057a288 FUN_0057a288
// callees(1): 0057cdb0 FUN_0057cdb0

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



//==== 00579e48  ns=Global  size=0x120
// sig: undefined FUN_00579e48(void)
// callers(0): 
// callees(4): 005783e4 FUN_005783e4; 0057cdb0 FUN_0057cdb0; 0057d158 FUN_0057d158; 005cc8d8 libc::strcpy

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
      libc::strcpy((char *)(piVar6 + 6),param_4 + 0x14);
      if (*piVar6 == 0) {
        FUN_005783e4(param_1,uVar1);
      }
    }
  }
  return 0x2c;
}



//==== 00579f68  ns=Global  size=0x2c
// sig: undefined FUN_00579f68(void)
// callers(0): 
// callees(1): 00577e18 FUN_00577e18

undefined8 FUN_00579f68(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_00577e18(param_1,param_3);
  return 1;
}



//==== 00579f94  ns=Global  size=0x230
// sig: undefined FUN_00579f94(void)
// callers(0): 
// callees(6): 005412c4 FUN_005412c4; 0054a110 FUN_0054a110; 00574908 FUN_00574908; 00576178 FUN_00576178; 005785a4 FUN_005785a4; 0057cdb0 FUN_0057cdb0

undefined4 FUN_00579f94(int param_1,undefined8 param_2,uint param_3,ushort *param_4)

{
  ushort uVar1;
  ushort uVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  undefined *puVar6;
  undefined4 *puVar7;
  undefined1 local_50 [16];
  
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



//==== 0057a1c4  ns=Global  size=0xc4
// sig: undefined FUN_0057a1c4(void)
// callers(0): 
// callees(2): 0054a110 FUN_0054a110; 00574744 FUN_00574744

/* WARNING: Removing unreachable block (ram,0x0057a274) */

undefined8 FUN_0057a1c4(int param_1,undefined8 param_2,uint param_3)

{
  undefined1 local_30 [24];
  
  if ((((param_1 != 0) && (param_3 < 0x100)) &&
      (*(int *)(*(int *)PTR_DAT_0071b690 + 0x138) == param_1)) && (*(int *)(param_1 + 0x400) != 0))
  {
    FUN_00574744(local_30,*(int *)(*(int *)PTR_DAT_0071b690 + 0x138));
  }
  return 4;
}



//==== 0057a288  ns=Global  size=0x364
// sig: undefined FUN_0057a288(void)
// callers(3): 00577e18 FUN_00577e18; 0057a5ec FUN_0057a5ec; 0057a6dc FUN_0057a6dc
// callees(8): 0054170c FUN_0054170c; 00546bdc FUN_00546bdc; 00574744 FUN_00574744; 00577df0 FUN_00577df0; 00579cbc FUN_00579cbc; 0057cdb0 FUN_0057cdb0; 0057d158 FUN_0057d158; 005d0140 libc::memset

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
  undefined1 auStack_e4 [48];
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
    libc::memset(&local_b4,0,0x4c);
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
    libc::memset(&local_b4,0,0x4c);
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



//==== 0057a5ec  ns=Global  size=0xf0
// sig: undefined FUN_0057a5ec(void)
// callers(0): 
// callees(3): 0054170c FUN_0054170c; 0054a110 FUN_0054a110; 0057a288 FUN_0057a288

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



//==== 0057a6dc  ns=Global  size=0x2f8
// sig: undefined FUN_0057a6dc(void)
// callers(0): 
// callees(7): 005412c4 FUN_005412c4; 0054170c FUN_0054170c; 0054a110 FUN_0054a110; 00574908 FUN_00574908; 005785a4 FUN_005785a4; 0057a288 FUN_0057a288; 0057cdb0 FUN_0057cdb0

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
  undefined1 local_50 [24];
  
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



//==== 0057a9d4  ns=Global  size=0x134
// sig: undefined FUN_0057a9d4(void)
// callers(0): 
// callees(3): 005472a4 FUN_005472a4; 00577a90 FUN_00577a90; 005c2ab8 FUN_005c2ab8

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



//==== 0057ab08  ns=Global  size=0x360
// sig: undefined FUN_0057ab08(void)
// callers(0): 
// callees(11): 005472a4 FUN_005472a4; 00547ec0 FUN_00547ec0; 00574744 FUN_00574744; 00577a90 FUN_00577a90; 0057cdb0 FUN_0057cdb0; 005c2178 FUN_005c2178; 005c2544 FUN_005c2544; 005c282c FUN_005c282c; 005c299c FUN_005c299c; 005c2b28 FUN_005c2b28; 005c5ad0 libc::memcpy

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
  undefined1 local_50 [4];
  undefined1 local_4c [20];
  
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
        libc::memcpy(*(void **)(pcVar5 + 0x10),*(void **)(pcVar5 + 0x3c),*(size_t *)(pcVar5 + 0x34))
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



//==== 0057ae68  ns=Global  size=0x230
// sig: undefined FUN_0057ae68(void)
// callers(0): 
// callees(4): 00546bdc FUN_00546bdc; 005745d0 FUN_005745d0; 005746ac FUN_005746ac; 00574838 FUN_00574838

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
  undefined1 auStack_b0 [48];
  undefined4 local_80;
  undefined1 local_7c;
  undefined4 local_78;
  undefined4 local_74;
  undefined1 auStack_70 [16];
  undefined1 auStack_60 [16];
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
    auStack_60 = (undefined1  [16])0x0;
    uStack_40 = 0;
    auStack_70 = (undefined1  [16])0x0;
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



//==== 0057b098  ns=Global  size=0x180
// sig: undefined FUN_0057b098(void)
// callers(0): 
// callees(3): 005745d0 FUN_005745d0; 005746ac FUN_005746ac; 00574838 FUN_00574838

undefined8 FUN_0057b098(int param_1,undefined8 param_2,undefined8 param_3,byte *param_4)

{
  byte bVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined1 local_40 [32];
  
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



//==== 0057b218  ns=Global  size=0x434
// sig: undefined FUN_0057b218(void)
// callers(0): 
// callees(7): 00541a44 FUN_00541a44; 00546bdc FUN_00546bdc; 005745d0 FUN_005745d0; 00574608 FUN_00574608; 00574838 FUN_00574838; 00576994 FUN_00576994; 005d0140 libc::memset

undefined4 FUN_0057b218(int param_1,undefined8 param_2,undefined4 param_3,undefined4 *param_4)

{
  ushort uVar1;
  int iVar2;
  undefined *puVar3;
  undefined4 uVar5;
  int iVar6;
  longlong lVar4;
  uint uVar7;
  undefined1 local_120 [4];
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
  undefined1 auStack_e8 [48];
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
      libc::memset(&local_b8,0,0x4c);
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



//==== 0057b64c  ns=Global  size=0x2c
// sig: undefined FUN_0057b64c(void)
// callers(0): 
// callees(1): 005757c8 FUN_005757c8

undefined8 FUN_0057b64c(void)

{
  undefined2 *in_r6;
  
  FUN_005757c8(*in_r6);
  return 2;
}



//==== 0057b678  ns=Global  size=0x708
// sig: undefined FUN_0057b678(void)
// callers(0): 
// callees(18): 005472a4 FUN_005472a4; 00547ec0 FUN_00547ec0; 00553b40 FUN_00553b40; 00553c74 FUN_00553c74; 00553f04 FUN_00553f04; 00554160 FUN_00554160; 00554290 FUN_00554290; 005543a4 FUN_005543a4; 0055442c FUN_0055442c; 005745d0 FUN_005745d0; 005746ac FUN_005746ac; 0057477c FUN_0057477c; 00574838 FUN_00574838; 00574d38 FUN_00574d38; 0057980c FUN_0057980c; 0057cdb0 FUN_0057cdb0; 005c5ad0 libc::memcpy; 005cc8d8 libc::strcpy

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
  undefined1 auStack_c8 [28];
  byte local_ac;
  byte local_ab;
  undefined1 local_aa;
  undefined1 local_a9;
  undefined1 local_a8 [2];
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
  libc::strcpy((char *)(local_cc + 5),acStack_98);
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
  libc::memcpy((void *)local_cc[10],(void *)local_cc[9],*psVar12);
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



//==== 0057bd80  ns=Global  size=0x378
// sig: undefined FUN_0057bd80(void)
// callers(0): 
// callees(10): 00553c74 FUN_00553c74; 00553f04 FUN_00553f04; 00554160 FUN_00554160; 00554290 FUN_00554290; 005543a4 FUN_005543a4; 0055442c FUN_0055442c; 005745d0 FUN_005745d0; 00574838 FUN_00574838; 00574d38 FUN_00574d38; 005c5ad0 libc::memcpy

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
  undefined1 local_90 [2];
  byte local_8e;
  byte local_8d;
  ushort local_8c [2];
  undefined4 local_88;
  undefined1 local_84 [4];
  undefined1 auStack_80 [40];
  
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
              libc::memcpy((void *)(iVar3 + iVar2),__src,*(int *)(iVar1 + 4) * *(int *)(iVar1 + 8));
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



//==== 0057c0f8  ns=Global  size=0x2f8
// sig: undefined FUN_0057c0f8(void)
// callers(1): 00574380 FUN_00574380
// callees(0): 

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



//==== 0057c4a8  ns=Global  size=0x180
// sig: undefined FUN_0057c4a8(void)
// callers(2): 0057c4a8 FUN_0057c4a8; 0057ca08 FUN_0057ca08
// callees(1): 0057c4a8 FUN_0057c4a8

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



//==== 0057c628  ns=Global  size=0x90
// sig: undefined FUN_0057c628(void)
// callers(1): 005742cc FUN_005742cc
// callees(0): 

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



//==== 0057c6b8  ns=Global  size=0x88
// sig: undefined FUN_0057c6b8(void)
// callers(1): 00573a38 FUN_00573a38
// callees(0): 

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



//==== 0057c740  ns=Global  size=0x88
// sig: undefined FUN_0057c740(void)
// callers(0): 
// callees(0): 

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



//==== 0057c7c8  ns=Global  size=0x14c
// sig: undefined FUN_0057c7c8(void)
// callers(2): 00573570 FUN_00573570; 0057c914 FUN_0057c914
// callees(1): 0054285c FUN_0054285c

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



//==== 0057c914  ns=Global  size=0xf4
// sig: undefined FUN_0057c914(void)
// callers(1): 005734e0 FUN_005734e0
// callees(2): 0054285c FUN_0054285c; 0057c7c8 FUN_0057c7c8

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



//==== 0057ca08  ns=Global  size=0x254
// sig: undefined FUN_0057ca08(void)
// callers(2): 00573b28 FUN_00573b28; 0057cc5c FUN_0057cc5c
// callees(3): 005519f0 FUN_005519f0; 0057c4a8 FUN_0057c4a8; 005cccec libc::strcpy

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
          libc::strcpy(piVar6 + 2,param_2,0x20);
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



//==== 0057cc5c  ns=Global  size=0xd8
// sig: undefined FUN_0057cc5c(void)
// callers(1): 00573bf0 FUN_00573bf0
// callees(1): 0057ca08 FUN_0057ca08

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



//==== 0057cd34  ns=Global  size=0x7c
// sig: undefined FUN_0057cd34(void)
// callers(1): 00574528 FUN_00574528
// callees(2): 00540808 FUN_00540808; 00551de8 FUN_00551de8

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



//==== 0057cdb0  ns=Global  size=0x60
// sig: undefined FUN_0057cdb0(void)
// callers(17): 005757c8 FUN_005757c8; 00575a94 FUN_00575a94; 005776c8 FUN_005776c8; 00577e18 FUN_00577e18; 005783e4 FUN_005783e4; 005785a4 FUN_005785a4; 00578634 FUN_00578634; 00578cdc FUN_00578cdc; 00578f44 FUN_00578f44; 0057980c FUN_0057980c; 00579cbc FUN_00579cbc; 00579e48 FUN_00579e48; 00579f94 FUN_00579f94; 0057a288 FUN_0057a288; 0057a6dc FUN_0057a6dc; 0057ab08 FUN_0057ab08; 0057b678 FUN_0057b678
// callees(0): 

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



//==== 0057ce10  ns=Global  size=0x1dc
// sig: undefined FUN_0057ce10(void)
// callers(3): 00575a94 FUN_00575a94; 00575b84 FUN_00575b84; 005783e4 FUN_005783e4
// callees(4): 00541a44 FUN_00541a44; 00546bdc FUN_00546bdc; 005cccec libc::strcpy; 005d0140 libc::memset

undefined8 FUN_0057ce10(int param_1,int param_2)

{
  int iVar1;
  undefined *puVar2;
  undefined8 uVar3;
  int iVar4;
  undefined1 local_e0 [2];
  undefined2 local_de;
  undefined2 local_dc;
  undefined2 local_da;
  undefined2 local_d8;
  undefined2 local_d6;
  undefined1 auStack_cc [24];
  undefined1 auStack_b4 [48];
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
        libc::strcpy(auStack_cc,iVar4 + 0x18,0x18);
        libc::memset(&local_84,0,0x4c);
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



//==== 0057cfec  ns=Global  size=0x28
// sig: undefined FUN_0057cfec(void)
// callers(0): 
// callees(1): 005472a4 FUN_005472a4

void FUN_0057cfec(void)

{
  FUN_005472a4(PTR_DAT_0071b6a8);
  return;
}



//==== 0057d014  ns=Global  size=0x48
// sig: undefined FUN_0057d014(void)
// callers(2): 00577e18 FUN_00577e18; 0057d05c FUN_0057d05c
// callees(1): 005472a4 FUN_005472a4

void FUN_0057d014(int param_1,uint param_2)

{
  if ((param_2 < 0x100) && (param_1 != 0)) {
    FUN_005472a4(param_2 * 4 + *(int *)PTR_DAT_0071b6a8);
  }
  return;
}



//==== 0057d05c  ns=Global  size=0x80
// sig: undefined FUN_0057d05c(void)
// callers(2): 00576178 FUN_00576178; 0057d0dc FUN_0057d0dc
// callees(1): 0057d014 FUN_0057d014

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



//==== 0057d0dc  ns=Global  size=0x7c
// sig: undefined FUN_0057d0dc(void)
// callers(0): 
// callees(1): 0057d05c FUN_0057d05c

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



//==== 0057d158  ns=Global  size=0x84
// sig: undefined FUN_0057d158(void)
// callers(5): 005783e4 FUN_005783e4; 005785a4 FUN_005785a4; 00579370 FUN_00579370; 00579e48 FUN_00579e48; 0057a288 FUN_0057a288
// callees(1): 00547ec0 FUN_00547ec0

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



//==== 0057d1dc  ns=Global  size=0x60
// sig: undefined FUN_0057d1dc(void)
// callers(0): 
// callees(2): 00547ec0 FUN_00547ec0; 005d0140 libc::memset

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
  libc::memset(uVar2,0,0x400);
  return;
}



//==== 0057d23c  ns=Global  size=0x68
// sig: undefined FUN_0057d23c(void)
// callers(0): 
// callees(1): 005822ac FUN_005822ac

undefined4 FUN_0057d23c(int param_1,undefined8 param_2,undefined8 param_3)

{
  undefined4 uVar1;
  
  uVar1 = (*(code *)**(undefined4 **)(PTR_PTR_0071b6b0 + 0x2c))
                    (param_3,1,0x86,0x26,param_1,param_1,0,param_1 + 0x15);
  return uVar1;
}



//==== 0057d2a4  ns=Global  size=0x64
// sig: undefined FUN_0057d2a4(void)
// callers(2): 004f6454 FUN_004f6454; 004f69b8 FUN_004f69b8
// callees(1): 005822ac FUN_005822ac

undefined4 FUN_0057d2a4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined4 uVar1;
  
  uVar1 = (*(code *)**(undefined4 **)(PTR_PTR_0071b6b0 + 0x2c))
                    (param_3,4,0x2a,0x15,param_1,param_1,0,0);
  return uVar1;
}



//==== 0057d308  ns=Global  size=0x68
// sig: undefined FUN_0057d308(void)
// callers(0): 
// callees(1): 005822ac FUN_005822ac

undefined4 FUN_0057d308(undefined8 param_1,undefined8 param_2)

{
  undefined4 uVar1;
  
  uVar1 = (*(code *)**(undefined4 **)(PTR_PTR_0071b6b0 + 0x2c))
                    (param_2,1,0x49,0x1c,param_1,0,0,param_1);
  return uVar1;
}



//==== 0057d370  ns=Global  size=0x8c
// sig: undefined FUN_0057d370(void)
// callers(2): 004f6134 FUN_004f6134; 004f69b8 FUN_004f69b8
// callees(1): 005822ac FUN_005822ac

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



//==== 0057d3fc  ns=Global  size=0x70
// sig: undefined FUN_0057d3fc(void)
// callers(1): 004f64bc FUN_004f64bc
// callees(1): 005822ac FUN_005822ac

undefined4 FUN_0057d3fc(int param_1,undefined8 param_2)

{
  undefined4 uVar1;
  
  uVar1 = (*(code *)**(undefined4 **)(PTR_PTR_0071b6b0 + 0x2c))
                    (param_2,4,10,0x50,param_1,0,0,param_1 + 0x15);
  return uVar1;
}



//==== 0057d46c  ns=Global  size=0x90
// sig: undefined FUN_0057d46c(void)
// callers(0): 
// callees(1): 005822ac FUN_005822ac

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



//==== 0057d4fc  ns=Global  size=0x68
// sig: undefined FUN_0057d4fc(void)
// callers(0): 
// callees(1): 005822ac FUN_005822ac

undefined4 FUN_0057d4fc(int param_1,undefined8 param_2,undefined8 param_3)

{
  undefined4 uVar1;
  
  uVar1 = (*(code *)**(undefined4 **)(PTR_PTR_0071b6b0 + 0x2c))
                    (param_3,1,0x11,0x126,param_1,param_1,0,param_1 + 0x15);
  return uVar1;
}



//==== 0057d564  ns=Global  size=0x68
// sig: undefined FUN_0057d564(void)
// callers(0): 
// callees(1): 005822ac FUN_005822ac

undefined4 FUN_0057d564(int param_1,undefined8 param_2,undefined8 param_3)

{
  undefined4 uVar1;
  
  uVar1 = (*(code *)**(undefined4 **)(PTR_PTR_0071b6b0 + 0x2c))
                    (param_3,4,0x39,300,param_1,param_1,0,param_1 + 0x15);
  return uVar1;
}



//==== 0057d5cc  ns=Global  size=0x90
// sig: undefined FUN_0057d5cc(void)
// callers(0): 
// callees(1): 005822ac FUN_005822ac

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



//==== 0057d65c  ns=Global  size=0x90
// sig: undefined FUN_0057d65c(void)
// callers(0): 
// callees(1): 005822ac FUN_005822ac

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



//==== 0057d6ec  ns=Global  size=0x90
// sig: undefined FUN_0057d6ec(void)
// callers(0): 
// callees(1): 005822ac FUN_005822ac

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



//==== 0057d77c  ns=Global  size=0x68
// sig: undefined FUN_0057d77c(void)
// callers(0): 
// callees(1): 005822ac FUN_005822ac

undefined4 FUN_0057d77c(int param_1,undefined8 param_2,undefined8 param_3)

{
  undefined4 uVar1;
  
  uVar1 = (*(code *)**(undefined4 **)(PTR_PTR_0071b6b0 + 0x2c))
                    (param_3,4,0x5d,0x26,param_1,param_1,0,param_1 + 0x15);
  return uVar1;
}



//==== 0057d7e4  ns=Global  size=0x84
// sig: undefined FUN_0057d7e4(void)
// callers(0): 
// callees(1): 005822ac FUN_005822ac

undefined4 FUN_0057d7e4(int param_1,undefined8 param_2,undefined8 param_3)

{
  undefined4 uVar1;
  
  uVar1 = (*(code *)**(undefined4 **)(PTR_PTR_0071b6b0 + 0x2c))
                    (param_3,4,0x88,*(int *)(param_1 + 0x88) * 4 + *(int *)(param_1 + 0x8c) + 0x98,
                     param_1,param_1,0,param_1 + 0x15);
  return uVar1;
}



//==== 0057d868  ns=Global  size=0x84
// sig: undefined FUN_0057d868(void)
// callers(0): 
// callees(1): 005822ac FUN_005822ac

undefined4 FUN_0057d868(int param_1,undefined8 param_2,undefined8 param_3)

{
  undefined4 uVar1;
  
  uVar1 = (*(code *)**(undefined4 **)(PTR_PTR_0071b6b0 + 0x2c))
                    (param_3,4,0x94,
                     *(int *)(param_1 + 0x114) * 4 + *(int *)(param_1 + 0x118) + 0x124,param_1,
                     param_1,0,param_1 + 0x15);
  return uVar1;
}



//==== 0057d8ec  ns=Global  size=0x6c
// sig: undefined FUN_0057d8ec(void)
// callers(0): 
// callees(1): 005822ac FUN_005822ac

undefined4 FUN_0057d8ec(int param_1,undefined8 param_2)

{
  undefined4 uVar1;
  
  uVar1 = (*(code *)**(undefined4 **)(PTR_PTR_0071b6b0 + 0x2c))
                    (param_2,4,0x92,0x2c,param_1,param_1,0,param_1 + 0x15);
  return uVar1;
}



//==== 0057d958  ns=Global  size=0x68
// sig: undefined FUN_0057d958(void)
// callers(0): 
// callees(1): 005822ac FUN_005822ac

undefined4 FUN_0057d958(int param_1,undefined8 param_2,undefined8 param_3)

{
  undefined4 uVar1;
  
  uVar1 = (*(code *)**(undefined4 **)(PTR_PTR_0071b6b0 + 0x2c))
                    (param_3,4,0x79,0x2c,param_1,param_1,0,param_1 + 0x15);
  return uVar1;
}



//==== 0057d9c0  ns=Global  size=0xa4
// sig: undefined FUN_0057d9c0(void)
// callers(0): 
// callees(1): 005822ac FUN_005822ac

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



//==== 0057da64  ns=Global  size=0x68
// sig: undefined FUN_0057da64(void)
// callers(0): 
// callees(1): 005822ac FUN_005822ac

undefined4 FUN_0057da64(int param_1,undefined8 param_2,undefined8 param_3)

{
  undefined4 uVar1;
  
  uVar1 = (*(code *)**(undefined4 **)(PTR_PTR_0071b6b0 + 0x2c))
                    (param_3,4,0x71,0x2c,param_1,param_1,0,param_1 + 0x15);
  return uVar1;
}



//==== 0057dacc  ns=Global  size=0x68
// sig: undefined FUN_0057dacc(void)
// callers(0): 
// callees(1): 005822ac FUN_005822ac

undefined4 FUN_0057dacc(int param_1,undefined8 param_2,undefined8 param_3)

{
  undefined4 uVar1;
  
  uVar1 = (*(code *)**(undefined4 **)(PTR_PTR_0071b6b0 + 0x2c))
                    (param_3,1,0x29,0x30,param_1,param_1,0,param_1 + 0x15);
  return uVar1;
}



//==== 0057db34  ns=Global  size=0x68
// sig: undefined FUN_0057db34(void)
// callers(0): 
// callees(1): 005822ac FUN_005822ac

undefined4 FUN_0057db34(int param_1,undefined8 param_2,undefined8 param_3)

{
  undefined4 uVar1;
  
  uVar1 = (*(code *)**(undefined4 **)(PTR_PTR_0071b6b0 + 0x2c))
                    (param_3,4,0x69,0x30,param_1,param_1,0,param_1 + 0x15);
  return uVar1;
}



//==== 0057db9c  ns=Global  size=0x68
// sig: undefined FUN_0057db9c(void)
// callers(0): 
// callees(1): 005822ac FUN_005822ac

undefined4 FUN_0057db9c(int param_1,undefined8 param_2,undefined8 param_3)

{
  undefined4 uVar1;
  
  uVar1 = (*(code *)**(undefined4 **)(PTR_PTR_0071b6b0 + 0x2c))
                    (param_3,1,0x2b,0x2a,param_1,param_1,0,param_1 + 0x15);
  return uVar1;
}



//==== 0057dc04  ns=Global  size=0x68
// sig: undefined FUN_0057dc04(void)
// callers(0): 
// callees(1): 005822ac FUN_005822ac

undefined4 FUN_0057dc04(int param_1,undefined8 param_2,undefined8 param_3)

{
  undefined4 uVar1;
  
  uVar1 = (*(code *)**(undefined4 **)(PTR_PTR_0071b6b0 + 0x2c))
                    (param_3,1,0x2d,0x2c,param_1,param_1,0,param_1 + 0x15);
  return uVar1;
}



//==== 0057dc6c  ns=Global  size=0x68
// sig: undefined FUN_0057dc6c(void)
// callers(0): 
// callees(1): 005822ac FUN_005822ac

undefined4 FUN_0057dc6c(int param_1,undefined8 param_2,undefined8 param_3)

{
  undefined4 uVar1;
  
  uVar1 = (*(code *)**(undefined4 **)(PTR_PTR_0071b6b0 + 0x2c))
                    (param_3,1,0x2f,0x2c,param_1,param_1,0,param_1 + 0x15);
  return uVar1;
}



//==== 0057dcd4  ns=Global  size=0x4
// sig: undefined thunk_FUN_0057dc6c(void)
// callers(0): 
// callees(0): 

undefined4 thunk_FUN_0057dc6c(int param_1,undefined8 param_2,undefined8 param_3)

{
  undefined4 uVar1;
  
  uVar1 = (*(code *)**(undefined4 **)(PTR_PTR_0071b6b0 + 0x2c))
                    (param_3,1,0x2f,0x2c,param_1,param_1,0,param_1 + 0x15);
  return uVar1;
}



//==== 0057dcd8  ns=Global  size=0x68
// sig: undefined FUN_0057dcd8(void)
// callers(2): 004f61fc FUN_004f61fc; 004f69b8 FUN_004f69b8
// callees(1): 005822ac FUN_005822ac

undefined4 FUN_0057dcd8(int param_1,undefined8 param_2,undefined8 param_3)

{
  undefined4 uVar1;
  
  uVar1 = (*(code *)**(undefined4 **)(PTR_PTR_0071b6b0 + 0x2c))
                    (param_3,1,0x31,0x2c,param_1,param_1,0,param_1 + 0x15);
  return uVar1;
}



//==== 0057dd40  ns=Global  size=0x68
// sig: undefined FUN_0057dd40(void)
// callers(0): 
// callees(1): 005822ac FUN_005822ac

undefined4 FUN_0057dd40(int param_1,undefined8 param_2,undefined8 param_3)

{
  undefined4 uVar1;
  
  uVar1 = (*(code *)**(undefined4 **)(PTR_PTR_0071b6b0 + 0x2c))
                    (param_3,4,0x35,0x2c,param_1,param_1,0,param_1 + 0x15);
  return uVar1;
}



//==== 0057dda8  ns=Global  size=0x68
// sig: undefined FUN_0057dda8(void)
// callers(0): 
// callees(1): 005822ac FUN_005822ac

undefined4 FUN_0057dda8(int param_1,undefined8 param_2,undefined8 param_3)

{
  undefined4 uVar1;
  
  uVar1 = (*(code *)**(undefined4 **)(PTR_PTR_0071b6b0 + 0x2c))
                    (param_3,1,0x35,0x2c,param_1,param_1,0,param_1 + 0x15);
  return uVar1;
}



//==== 0057de10  ns=Global  size=0x68
// sig: undefined FUN_0057de10(void)
// callers(0): 
// callees(1): 005822ac FUN_005822ac

undefined4 FUN_0057de10(int param_1,undefined8 param_2,undefined8 param_3)

{
  undefined4 uVar1;
  
  uVar1 = (*(code *)**(undefined4 **)(PTR_PTR_0071b6b0 + 0x2c))
                    (param_3,1,0x39,0x50,param_1,param_1,0,param_1 + 0x15);
  return uVar1;
}



//==== 0057de78  ns=Global  size=0x68
// sig: undefined FUN_0057de78(void)
// callers(0): 
// callees(1): 005822ac FUN_005822ac

undefined4 FUN_0057de78(int param_1,undefined8 param_2,undefined8 param_3)

{
  undefined4 uVar1;
  
  uVar1 = (*(code *)**(undefined4 **)(PTR_PTR_0071b6b0 + 0x2c))
                    (param_3,1,0x37,0x6c,param_1,param_1,0,param_1 + 0x15);
  return uVar1;
}



//==== 0057dee0  ns=Global  size=0xa4
// sig: undefined FUN_0057dee0(void)
// callers(0): 
// callees(1): 005822ac FUN_005822ac

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



//==== 0057df84  ns=Global  size=0x78
// sig: undefined FUN_0057df84(void)
// callers(0): 
// callees(1): 005822ac FUN_005822ac

undefined4 FUN_0057df84(int param_1,undefined8 param_2)

{
  undefined4 uVar1;
  
  uVar1 = (*(code *)**(undefined4 **)(PTR_PTR_0071b6b0 + 0x2c))
                    (param_2,4,0x5b,*(int *)(param_1 + 0x30) + 0x39,param_1,0,0,param_1 + 0x15);
  return uVar1;
}



//==== 0057dffc  ns=Global  size=0x90
// sig: undefined FUN_0057dffc(void)
// callers(0): 
// callees(1): 005822ac FUN_005822ac

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



//==== 0057e08c  ns=Global  size=0x90
// sig: undefined FUN_0057e08c(void)
// callers(0): 
// callees(1): 005822ac FUN_005822ac

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



//==== 0057e11c  ns=Global  size=0x90
// sig: undefined FUN_0057e11c(void)
// callers(0): 
// callees(1): 005822ac FUN_005822ac

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



//==== 0057e1ac  ns=Global  size=0x90
// sig: undefined FUN_0057e1ac(void)
// callers(0): 
// callees(1): 005822ac FUN_005822ac

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



//==== 0057e23c  ns=Global  size=0x68
// sig: undefined FUN_0057e23c(void)
// callers(0): 
// callees(1): 005822ac FUN_005822ac

undefined4 FUN_0057e23c(int param_1,undefined8 param_2,undefined8 param_3)

{
  undefined4 uVar1;
  
  uVar1 = (*(code *)**(undefined4 **)(PTR_PTR_0071b6b0 + 0x2c))
                    (param_3,1,0xc0,0x26,param_1,param_1,0,param_1 + 0x15);
  return uVar1;
}



//==== 0057e2a4  ns=Global  size=0x68
// sig: undefined FUN_0057e2a4(void)
// callers(0): 
// callees(1): 005822ac FUN_005822ac

undefined4 FUN_0057e2a4(int param_1,undefined8 param_2,undefined8 param_3)

{
  undefined4 uVar1;
  
  uVar1 = (*(code *)**(undefined4 **)(PTR_PTR_0071b6b0 + 0x2c))
                    (param_3,1,0xc2,0x2c,param_1,param_1,0,param_1 + 0x15);
  return uVar1;
}



//==== 0057e30c  ns=Global  size=0x68
// sig: undefined FUN_0057e30c(void)
// callers(0): 
// callees(1): 005822ac FUN_005822ac

undefined4 FUN_0057e30c(int param_1,undefined8 param_2,undefined8 param_3)

{
  undefined4 uVar1;
  
  uVar1 = (*(code *)**(undefined4 **)(PTR_PTR_0071b6b0 + 0x2c))
                    (param_3,1,0xc4,0x2c,param_1,param_1,0,param_1 + 0x15);
  return uVar1;
}



//==== 0057e374  ns=Global  size=0xa8
// sig: undefined FUN_0057e374(void)
// callers(0): 
// callees(1): 005822ac FUN_005822ac

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



//==== 0057e41c  ns=Global  size=0x68
// sig: undefined FUN_0057e41c(void)
// callers(0): 
// callees(1): 005822ac FUN_005822ac

undefined4 FUN_0057e41c(int param_1,undefined8 param_2,undefined8 param_3)

{
  undefined4 uVar1;
  
  uVar1 = (*(code *)**(undefined4 **)(PTR_PTR_0071b6b0 + 0x2c))
                    (param_3,1,0x4b,0x2c,param_1,param_1,0,param_1 + 0x15);
  return uVar1;
}



//==== 0057e484  ns=Global  size=0x68
// sig: undefined FUN_0057e484(void)
// callers(0): 
// callees(1): 005822ac FUN_005822ac

undefined4 FUN_0057e484(int param_1,undefined8 param_2,undefined8 param_3)

{
  undefined4 uVar1;
  
  uVar1 = (*(code *)**(undefined4 **)(PTR_PTR_0071b6b0 + 0x2c))
                    (param_3,1,0x4c,0x2c,param_1,param_1,0,param_1 + 0x15);
  return uVar1;
}



//==== 0057e4ec  ns=Global  size=0x64
// sig: undefined FUN_0057e4ec(void)
// callers(0): 
// callees(1): 005822ac FUN_005822ac

undefined4 FUN_0057e4ec(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined4 uVar1;
  
  uVar1 = (*(code *)**(undefined4 **)(PTR_PTR_0071b6b0 + 0x2c))
                    (param_3,4,0x33,0x28,param_1,param_1,0,0);
  return uVar1;
}



//==== 0057e550  ns=Global  size=0x64
// sig: undefined FUN_0057e550(void)
// callers(0): 
// callees(1): 005822ac FUN_005822ac

undefined4 FUN_0057e550(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined4 uVar1;
  
  uVar1 = (*(code *)**(undefined4 **)(PTR_PTR_0071b6b0 + 0x2c))
                    (param_3,4,0x31,0x1c,param_1,param_1,0,0);
  return uVar1;
}



//==== 0057e5b4  ns=Global  size=0x68
// sig: undefined FUN_0057e5b4(void)
// callers(0): 
// callees(1): 005822ac FUN_005822ac

undefined4 FUN_0057e5b4(int param_1,undefined8 param_2,undefined8 param_3)

{
  undefined4 uVar1;
  
  uVar1 = (*(code *)**(undefined4 **)(PTR_PTR_0071b6b0 + 0x2c))
                    (param_3,1,0x52,0x26,param_1,param_1,0,param_1 + 0x15);
  return uVar1;
}



//==== 0057e61c  ns=Global  size=0x68
// sig: undefined FUN_0057e61c(void)
// callers(0): 
// callees(1): 005822ac FUN_005822ac

undefined4 FUN_0057e61c(int param_1,undefined8 param_2,undefined8 param_3)

{
  undefined4 uVar1;
  
  uVar1 = (*(code *)**(undefined4 **)(PTR_PTR_0071b6b0 + 0x2c))
                    (param_3,1,0x1b,0x26,param_1,param_1,0,param_1 + 0x15);
  return uVar1;
}



//==== 0057e684  ns=Global  size=0x68
// sig: undefined FUN_0057e684(void)
// callers(0): 
// callees(1): 005822ac FUN_005822ac

undefined4 FUN_0057e684(int param_1,undefined8 param_2,undefined8 param_3)

{
  undefined4 uVar1;
  
  uVar1 = (*(code *)**(undefined4 **)(PTR_PTR_0071b6b0 + 0x2c))
                    (param_3,1,0x88,0x30,param_1,param_1,0,param_1 + 0x15);
  return uVar1;
}



//==== 0057e6ec  ns=Global  size=0x68
// sig: undefined FUN_0057e6ec(void)
// callers(0): 
// callees(1): 005822ac FUN_005822ac

undefined4 FUN_0057e6ec(int param_1,undefined8 param_2,undefined8 param_3)

{
  undefined4 uVar1;
  
  uVar1 = (*(code *)**(undefined4 **)(PTR_PTR_0071b6b0 + 0x2c))
                    (param_3,1,0x8a,0x38,param_1,param_1,0,param_1 + 0x15);
  return uVar1;
}



//==== 0057e754  ns=Global  size=0x68
// sig: undefined FUN_0057e754(void)
// callers(0): 
// callees(1): 005822ac FUN_005822ac

undefined4 FUN_0057e754(int param_1,undefined8 param_2,undefined8 param_3)

{
  undefined4 uVar1;
  
  uVar1 = (*(code *)**(undefined4 **)(PTR_PTR_0071b6b0 + 0x2c))
                    (param_3,1,0x17,0x46,param_1,param_1,0,param_1 + 0x15);
  return uVar1;
}



//==== 0057e7bc  ns=Global  size=0x68
// sig: undefined FUN_0057e7bc(void)
// callers(0): 
// callees(1): 005822ac FUN_005822ac

undefined4 FUN_0057e7bc(int param_1,undefined8 param_2,undefined8 param_3)

{
  undefined4 uVar1;
  
  uVar1 = (*(code *)**(undefined4 **)(PTR_PTR_0071b6b0 + 0x2c))
                    (param_3,1,0x8c,0x26,param_1,param_1,0,param_1 + 0x15);
  return uVar1;
}



//==== 0057e824  ns=Global  size=0x68
// sig: undefined FUN_0057e824(void)
// callers(0): 
// callees(1): 005822ac FUN_005822ac

undefined4 FUN_0057e824(int param_1,undefined8 param_2,undefined8 param_3)

{
  undefined4 uVar1;
  
  uVar1 = (*(code *)**(undefined4 **)(PTR_PTR_0071b6b0 + 0x2c))
                    (param_3,4,0x25,0x36,param_1,param_1,0,param_1 + 0x15);
  return uVar1;
}



//==== 0057e88c  ns=Global  size=0x68
// sig: undefined FUN_0057e88c(void)
// callers(0): 
// callees(1): 005822ac FUN_005822ac

undefined4 FUN_0057e88c(int param_1,undefined8 param_2,undefined8 param_3)

{
  undefined4 uVar1;
  
  uVar1 = (*(code *)**(undefined4 **)(PTR_PTR_0071b6b0 + 0x2c))
                    (param_3,1,0x9b,0x2c,param_1,param_1,0,param_1 + 0x15);
  return uVar1;
}



//==== 0057e8f4  ns=Global  size=0x68
// sig: undefined FUN_0057e8f4(void)
// callers(0): 
// callees(1): 005822ac FUN_005822ac

undefined4 FUN_0057e8f4(int param_1,undefined8 param_2,undefined8 param_3)

{
  undefined4 uVar1;
  
  uVar1 = (*(code *)**(undefined4 **)(PTR_PTR_0071b6b0 + 0x2c))
                    (param_3,1,0x9d,0x2c,param_1,param_1,0,param_1 + 0x15);
  return uVar1;
}



//==== 0057e95c  ns=Global  size=0x68
// sig: undefined FUN_0057e95c(void)
// callers(0): 
// callees(1): 005822ac FUN_005822ac

undefined4 FUN_0057e95c(int param_1,undefined8 param_2,undefined8 param_3)

{
  undefined4 uVar1;
  
  uVar1 = (*(code *)**(undefined4 **)(PTR_PTR_0071b6b0 + 0x2c))
                    (param_3,1,0x9f,0x2c,param_1,param_1,0,param_1 + 0x15);
  return uVar1;
}



//==== 0057e9c4  ns=Global  size=0x68
// sig: undefined FUN_0057e9c4(void)
// callers(0): 
// callees(1): 005822ac FUN_005822ac

undefined4 FUN_0057e9c4(int param_1,undefined8 param_2,undefined8 param_3)

{
  undefined4 uVar1;
  
  uVar1 = (*(code *)**(undefined4 **)(PTR_PTR_0071b6b0 + 0x2c))
                    (param_3,1,0xa1,0x2c,param_1,param_1,0,param_1 + 0x15);
  return uVar1;
}



//==== 0057ea2c  ns=Global  size=0x68
// sig: undefined FUN_0057ea2c(void)
// callers(0): 
// callees(1): 005822ac FUN_005822ac

undefined4 FUN_0057ea2c(int param_1,undefined8 param_2,undefined8 param_3)

{
  undefined4 uVar1;
  
  uVar1 = (*(code *)**(undefined4 **)(PTR_PTR_0071b6b0 + 0x2c))
                    (param_3,4,0x7b,0x38,param_1,param_1,0,param_1 + 0x15);
  return uVar1;
}



//==== 0057ea94  ns=Global  size=0x68
// sig: undefined FUN_0057ea94(void)
// callers(0): 
// callees(1): 005822ac FUN_005822ac

undefined4 FUN_0057ea94(int param_1,undefined8 param_2,undefined8 param_3)

{
  undefined4 uVar1;
  
  uVar1 = (*(code *)**(undefined4 **)(PTR_PTR_0071b6b0 + 0x2c))
                    (param_3,1,0xc6,0x30,param_1,param_1,0,param_1 + 0x15);
  return uVar1;
}



//==== 0057eafc  ns=Global  size=0x68
// sig: undefined FUN_0057eafc(void)
// callers(0): 
// callees(1): 005822ac FUN_005822ac

undefined4 FUN_0057eafc(int param_1,undefined8 param_2,undefined8 param_3)

{
  undefined4 uVar1;
  
  uVar1 = (*(code *)**(undefined4 **)(PTR_PTR_0071b6b0 + 0x2c))
                    (param_3,4,0x6b,0x2c,param_1,param_1,0,param_1 + 0x15);
  return uVar1;
}



//==== 0057eb64  ns=Global  size=0x4c
// sig: undefined FUN_0057eb64(void)
// callers(2): 0057f6a4 FUN_0057f6a4; 0057f774 FUN_0057f774
// callees(0): 

void FUN_0057eb64(int param_1,undefined4 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR_DAT_0071b6b8;
  *(undefined4 *)(param_1 + 0x140) = param_2;
  (*(code *)**(undefined4 **)(*(int *)puVar1 + 4))(param_1 + 0x144);
  return;
}



//==== 0057ebb0  ns=Global  size=0x8c
// sig: undefined FUN_0057ebb0(void)
// callers(0): 
// callees(1): 005822ac FUN_005822ac

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



//==== 0057ec3c  ns=Global  size=0x64
// sig: undefined FUN_0057ec3c(void)
// callers(0): 
// callees(1): 005822ac FUN_005822ac

undefined4 FUN_0057ec3c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined4 uVar1;
  
  uVar1 = (*(code *)**(undefined4 **)(PTR_PTR_0071b6b0 + 0x2c))
                    (param_3,1,0xdc,0x1c,param_1,param_1,0,0);
  return uVar1;
}



//==== 0057eca0  ns=Global  size=0x64
// sig: undefined FUN_0057eca0(void)
// callers(0): 
// callees(1): 005822ac FUN_005822ac

undefined4 FUN_0057eca0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined4 uVar1;
  
  uVar1 = (*(code *)**(undefined4 **)(PTR_PTR_0071b6b0 + 0x2c))
                    (param_3,4,0x37,0x1a,param_1,param_1,0,0);
  return uVar1;
}



//==== 0057ed04  ns=Global  size=0x64
// sig: undefined FUN_0057ed04(void)
// callers(0): 
// callees(1): 005822ac FUN_005822ac

undefined4 FUN_0057ed04(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined4 uVar1;
  
  uVar1 = (*(code *)**(undefined4 **)(PTR_PTR_0071b6b0 + 0x2c))
                    (param_3,4,0x96,0x1a,param_1,param_1,0,0);
  return uVar1;
}



//==== 0057ed68  ns=Global  size=0x64
// sig: undefined FUN_0057ed68(void)
// callers(0): 
// callees(1): 005822ac FUN_005822ac

undefined4 FUN_0057ed68(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined4 uVar1;
  
  uVar1 = (*(code *)**(undefined4 **)(PTR_PTR_0071b6b0 + 0x2c))
                    (param_3,4,0x1f,0x1a,param_1,param_1,0,0);
  return uVar1;
}



//==== 0057edcc  ns=Global  size=0x8c
// sig: undefined FUN_0057edcc(void)
// callers(0): 
// callees(1): 005822ac FUN_005822ac

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



//==== 0057ee58  ns=Global  size=0xa4
// sig: undefined FUN_0057ee58(void)
// callers(0): 
// callees(1): 005822ac FUN_005822ac

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



//==== 0057eefc  ns=Global  size=0x64
// sig: undefined FUN_0057eefc(void)
// callers(0): 
// callees(1): 005822ac FUN_005822ac

undefined4 FUN_0057eefc(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined4 uVar1;
  
  uVar1 = (*(code *)**(undefined4 **)(PTR_PTR_0071b6b0 + 0x2c))
                    (param_3,4,0x28,0x34,param_1,param_1,0,0);
  return uVar1;
}



//==== 0057ef60  ns=Global  size=0x68
// sig: undefined FUN_0057ef60(void)
// callers(0): 
// callees(1): 005822ac FUN_005822ac

undefined4 FUN_0057ef60(undefined8 param_1,undefined8 param_2)

{
  undefined4 uVar1;
  
  uVar1 = (*(code *)**(undefined4 **)(PTR_PTR_0071b6b0 + 0x2c))(param_2,4,0x2c,0x10,param_1,0,0,0);
  return uVar1;
}



//==== 0057efc8  ns=Global  size=0x64
// sig: undefined FUN_0057efc8(void)
// callers(0): 
// callees(1): 005822ac FUN_005822ac

undefined4 FUN_0057efc8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined4 uVar1;
  
  uVar1 = (*(code *)**(undefined4 **)(PTR_PTR_0071b6b0 + 0x2c))
                    (param_3,4,0x2d,0x1c,param_1,param_1,0,0);
  return uVar1;
}



//==== 0057f02c  ns=Global  size=0x64
// sig: undefined FUN_0057f02c(void)
// callers(0): 
// callees(1): 005822ac FUN_005822ac

undefined4 FUN_0057f02c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined4 uVar1;
  
  uVar1 = (*(code *)**(undefined4 **)(PTR_PTR_0071b6b0 + 0x2c))
                    (param_3,4,0x41,0x15,param_1,param_1,0,0);
  return uVar1;
}



//==== 0057f090  ns=Global  size=0x8c
// sig: undefined FUN_0057f090(void)
// callers(0): 
// callees(1): 005822ac FUN_005822ac

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



//==== 0057f11c  ns=Global  size=0x68
// sig: undefined FUN_0057f11c(void)
// callers(0): 
// callees(1): 005822ac FUN_005822ac

undefined4 FUN_0057f11c(int param_1,undefined8 param_2,undefined8 param_3)

{
  undefined4 uVar1;
  
  uVar1 = (*(code *)**(undefined4 **)(PTR_PTR_0071b6b0 + 0x2c))
                    (param_3,4,0x6d,0x4a,param_1,param_1,0,param_1 + 0x15);
  return uVar1;
}



//==== 0057f184  ns=Global  size=0x68
// sig: undefined FUN_0057f184(void)
// callers(0): 
// callees(1): 005822ac FUN_005822ac

undefined4 FUN_0057f184(int param_1,undefined8 param_2,undefined8 param_3)

{
  undefined4 uVar1;
  
  uVar1 = (*(code *)**(undefined4 **)(PTR_PTR_0071b6b0 + 0x2c))
                    (param_3,4,0x7e,0x38,param_1,param_1,0,param_1 + 0x15);
  return uVar1;
}



//==== 0057f1ec  ns=Global  size=0x68
// sig: undefined FUN_0057f1ec(void)
// callers(0): 
// callees(1): 005822ac FUN_005822ac

undefined4 FUN_0057f1ec(int param_1,undefined8 param_2,undefined8 param_3)

{
  undefined4 uVar1;
  
  uVar1 = (*(code *)**(undefined4 **)(PTR_PTR_0071b6b0 + 0x2c))
                    (param_3,4,0x80,0x26,param_1,param_1,0,param_1 + 0x15);
  return uVar1;
}



//==== 0057f254  ns=Global  size=0x68
// sig: undefined FUN_0057f254(void)
// callers(0): 
// callees(1): 005822ac FUN_005822ac

undefined4 FUN_0057f254(int param_1,undefined8 param_2,undefined8 param_3)

{
  undefined4 uVar1;
  
  uVar1 = (*(code *)**(undefined4 **)(PTR_PTR_0071b6b0 + 0x2c))
                    (param_3,4,0x82,0x2c,param_1,param_1,0,param_1 + 0x15);
  return uVar1;
}



//==== 0057f2bc  ns=Global  size=0x68
// sig: undefined FUN_0057f2bc(void)
// callers(0): 
// callees(1): 005822ac FUN_005822ac

undefined4 FUN_0057f2bc(int param_1,undefined8 param_2,undefined8 param_3)

{
  undefined4 uVar1;
  
  uVar1 = (*(code *)**(undefined4 **)(PTR_PTR_0071b6b0 + 0x2c))
                    (param_3,4,0x84,0x38,param_1,param_1,0,param_1 + 0x15);
  return uVar1;
}



//==== 0057f324  ns=Global  size=0x104
// sig: undefined FUN_0057f324(void)
// callers(3): 0057f428 FUN_0057f428; 0057f4fc FUN_0057f4fc; 0057f5d0 FUN_0057f5d0
// callees(1): 005c8510 libc::strlen

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
      sVar1 = libc::strlen(__s);
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



//==== 0057f428  ns=Global  size=0xd4
// sig: undefined FUN_0057f428(void)
// callers(0): 
// callees(2): 0057f324 FUN_0057f324; 005822ac FUN_005822ac

undefined4 FUN_0057f428(int param_1,undefined8 param_2,undefined4 param_3)

{
  int iVar1;
  undefined4 uVar2;
  undefined1 local_30 [24];
  
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



//==== 0057f4fc  ns=Global  size=0xd4
// sig: undefined FUN_0057f4fc(void)
// callers(0): 
// callees(2): 0057f324 FUN_0057f324; 005822ac FUN_005822ac

undefined4 FUN_0057f4fc(int param_1,undefined8 param_2,undefined4 param_3)

{
  int iVar1;
  undefined4 uVar2;
  undefined1 local_30 [24];
  
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



//==== 0057f5d0  ns=Global  size=0xd4
// sig: undefined FUN_0057f5d0(void)
// callers(0): 
// callees(2): 0057f324 FUN_0057f324; 005822ac FUN_005822ac

undefined4 FUN_0057f5d0(int param_1,undefined8 param_2,undefined4 param_3)

{
  int iVar1;
  undefined4 uVar2;
  undefined1 local_30 [24];
  
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



//==== 0057f6a4  ns=Global  size=0xd0
// sig: undefined FUN_0057f6a4(void)
// callers(0): 
// callees(3): 0057eb64 FUN_0057eb64; 005822ac FUN_005822ac; 00582788 FUN_00582788

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



//==== 0057f774  ns=Global  size=0xe0
// sig: undefined FUN_0057f774(void)
// callers(0): 
// callees(3): 0057eb64 FUN_0057eb64; 005822ac FUN_005822ac; 00582788 FUN_00582788

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



//==== 0057f854  ns=Global  size=0x17c
// sig: undefined FUN_0057f854(void)
// callers(1): 00583f70 FUN_00583f70
// callees(3): 005822ac FUN_005822ac; 00582788 FUN_00582788; 005827f8 FUN_005827f8

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



//==== 0057f9d0  ns=CMediusManager  size=0x104
// sig: undefined MediusTicketLogin(void)
// callers(1): 004f64bc FUN_004f64bc
// callees(2): 005822ac FUN_005822ac; 005827f8 FUN_005827f8

undefined4
CMediusManager::MediusTicketLogin
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



//==== 0057fad4  ns=Global  size=0x28
// sig: undefined FUN_0057fad4(void)
// callers(1): 004f5be4 FUN_004f5be4
// callees(0): 

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



//==== 0057fafc  ns=CMediusManager  size=0x1b4
// sig: undefined RequestSessionMAS(void)
// callers(2): 004f6624 FUN_004f6624; 004f69b8 FUN_004f69b8
// callees(1): 005822ac FUN_005822ac

undefined4
CMediusManager::RequestSessionMAS(undefined4 *param_1,undefined8 param_2,undefined4 param_3)

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



//==== 0057fcb0  ns=CMediusManager  size=0x18c
// sig: undefined ConnectToMAS(void)
// callers(1): 004f66c4 FUN_004f66c4
// callees(5): 00546290 FUN_00546290; 005c5ad0 libc::memcpy; 005c8510 libc::strlen; 005cccec libc::strcpy; 005d0140 libc::memset

void CMediusManager::ConnectToMAS
               (undefined4 *param_1,char *param_2,char *param_3,undefined4 param_4,
               undefined4 param_5)

{
  size_t sVar1;
  undefined1 auStack_1c0 [228];
  undefined1 auStack_dc [164];
  
  libc::memset(param_1,0,0x128);
  FUN_00546290(auStack_1c0);
  libc::memcpy(param_1 + 0x27,auStack_dc,0x74);
  param_1[0xd] = param_5;
  *param_1 = 1;
  if (param_2 == (char *)0x0) {
    *(undefined1 *)(param_1 + 0x1e) = 0;
  }
  else {
    sVar1 = libc::strlen(param_2);
    libc::strcpy(param_1 + 0x1e,param_2,sVar1 + 1);
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
  sVar1 = libc::strlen(param_3);
  libc::strcpy(param_1 + 2,param_3,sVar1 + 1);
  *(undefined1 *)(param_1 + 8) = 0;
  param_1[0x46] = 0;
  param_1[6] = param_4;
  param_1[7] = 0;
  param_1[0xc] = 0;
  param_1[0x45] = 0;
  return;
}



//==== 0057fe3c  ns=Global  size=0xc0
// sig: undefined FUN_0057fe3c(void)
// callers(0): 
// callees(2): 005565bc FUN_005565bc; 005822ac FUN_005822ac

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



//==== 0057fefc  ns=Global  size=0xa4
// sig: undefined FUN_0057fefc(void)
// callers(0): 
// callees(2): 005565bc FUN_005565bc; 005822ac FUN_005822ac

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



//==== 0057ffa0  ns=Global  size=0x9c
// sig: undefined FUN_0057ffa0(void)
// callers(0): 
// callees(2): 005565bc FUN_005565bc; 005822ac FUN_005822ac

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



