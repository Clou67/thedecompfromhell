//==== 0056072c  ns=Global  size=0x620
// sig: undefined FUN_0056072c(void)
// callers(0): 
// callees(19): 00550d54 FUN_00550d54; 00551f9c FUN_00551f9c; 005567a4 FUN_005567a4; 00556a58 FUN_00556a58; 0055da5c FUN_0055da5c; 0055e0b8 FUN_0055e0b8; 0055e1b0 FUN_0055e1b0; 0055e544 FUN_0055e544; 0055ed98 FUN_0055ed98; 0055f8cc FUN_0055f8cc; 00563b9c FUN_00563b9c; 00563ca8 FUN_00563ca8; 00564034 FUN_00564034; 0056469c FUN_0056469c; 00569e74 FUN_00569e74; 0056cedc FUN_0056cedc; 0056f3fc FUN_0056f3fc; 005c2ec4 FUN_005c2ec4; 005c2fb8 FUN_005c2fb8

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
  undefined1 local_90 [2];
  undefined1 local_8e [2];
  undefined1 local_8c [4];
  uint local_88;
  uint local_84;
  undefined1 local_80 [16];
  
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



//==== 00561054  ns=Global  size=0x2a0
// sig: undefined FUN_00561054(void)
// callers(0): 
// callees(8): 00550d54 FUN_00550d54; 005567a4 FUN_005567a4; 00556a58 FUN_00556a58; 0055da5c FUN_0055da5c; 0055e0b8 FUN_0055e0b8; 0055e1b0 FUN_0055e1b0; 0055e544 FUN_0055e544; 0055f8cc FUN_0055f8cc

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



//==== 005612f4  ns=Global  size=0x30
// sig: undefined FUN_005612f4(void)
// callers(0): 
// callees(1): 0054eb50 FUN_0054eb50

undefined4 FUN_005612f4(undefined4 *param_1)

{
  undefined4 uVar1;
  
  uVar1 = FUN_0054eb50(*(undefined4 *)*param_1);
  return uVar1;
}



//==== 00561324  ns=Global  size=0x58
// sig: undefined FUN_00561324(void)
// callers(0): 
// callees(1): 0056f244 FUN_0056f244

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



//==== 0056137c  ns=Global  size=0x15c
// sig: undefined FUN_0056137c(void)
// callers(1): 00562954 FUN_00562954
// callees(3): 0054edf0 FUN_0054edf0; 0055c8f0 FUN_0055c8f0; 0056f244 FUN_0056f244

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



//==== 005614d8  ns=Global  size=0xac
// sig: undefined FUN_005614d8(void)
// callers(0): 
// callees(1): 005c3030 FUN_005c3030

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



//==== 00561584  ns=Global  size=0x374
// sig: undefined FUN_00561584(void)
// callers(2): 005633b0 FUN_005633b0; 0056a278 FUN_0056a278
// callees(6): 0054ff9c FUN_0054ff9c; 005519f0 FUN_005519f0; 0055d1fc FUN_0055d1fc; 0056ec2c FUN_0056ec2c; 005c35e4 FUN_005c35e4; 005d0140 libc::memset

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
          libc::memset(piVar5,0,0x130);
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
    libc::memset(piStack00000030,0,0x10c);
    FUN_005519f0(&stack0x00000030);
  }
  return;
}



//==== 005618f8  ns=Global  size=0x64
// sig: undefined FUN_005618f8(void)
// callers(1): 005633b0 FUN_005633b0
// callees(1): 00550edc FUN_00550edc

undefined8 FUN_005618f8(ulonglong param_1)

{
  int iVar1;
  
  iVar1 = FUN_00550edc(param_1 & 0xc0000000,0);
  if ((iVar1 == 0) && (*(int *)(PTR_DAT_0071b2c4 + 0x10c) == 0)) {
    return 1;
  }
  return 2;
}



//==== 0056195c  ns=Global  size=0x1a4
// sig: undefined FUN_0056195c(void)
// callers(3): 00561ce4 FUN_00561ce4; 00561ff4 FUN_00561ff4; 0056248c FUN_0056248c
// callees(7): 00551f9c FUN_00551f9c; 00563ecc FUN_00563ecc; 00564144 FUN_00564144; 00564228 FUN_00564228; 0056428c FUN_0056428c; 00564524 FUN_00564524; 005c306c FUN_005c306c

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



//==== 00561b00  ns=Global  size=0x1e4
// sig: undefined FUN_00561b00(void)
// callers(9): 00561ce4 FUN_00561ce4; 00561ff4 FUN_00561ff4; 0056248c FUN_0056248c; 00562784 FUN_00562784; 005657bc FUN_005657bc; 0056590c FUN_0056590c; 00566040 FUN_00566040; 00566ef4 FUN_00566ef4; 00569498 FUN_00569498
// callees(4): 00552570 FUN_00552570; 00563ecc FUN_00563ecc; 005c3344 FUN_005c3344; 005d0140 libc::memset

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
  undefined1 auStack_100 [4];
  int local_fc [17];
  uint local_b8;
  undefined1 auStack_b4 [20];
  int local_a0;
  
  libc::memset(auStack_b4,0,0x58);
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



//==== 00561ce4  ns=Global  size=0x310
// sig: undefined FUN_00561ce4(void)
// callers(0): 
// callees(5): 0056195c FUN_0056195c; 00561b00 FUN_00561b00; 00564144 FUN_00564144; 00564180 FUN_00564180; 005642f0 FUN_005642f0

undefined4 FUN_00561ce4(int param_1,uint param_2,undefined1 param_3,undefined4 param_4,int param_5)

{
  uint *puVar1;
  uint uVar2;
  undefined4 uVar3;
  int iVar4;
  uint uVar5;
  ushort local_70;
  ushort local_6e;
  undefined1 local_6c [4];
  undefined1 auStack_68 [16];
  
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



//==== 00561ff4  ns=Global  size=0x498
// sig: undefined FUN_00561ff4(void)
// callers(0): 
// callees(5): 0055e390 FUN_0055e390; 0056195c FUN_0056195c; 00561b00 FUN_00561b00; 005642f0 FUN_005642f0; 005c5ad0 libc::memcpy

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
  undefined1 auStack_100 [4];
  undefined1 local_fc [4];
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
        libc::memcpy((void *)(iVar12 + *(int *)(param_1 + 0x6c)),*(void **)((int)param_7 + iVar3),
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
    libc::memcpy(local_f8,param_7,0x48);
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



//==== 0056248c  ns=Global  size=0x2f8
// sig: undefined FUN_0056248c(void)
// callers(0): 
// callees(5): 0055e390 FUN_0055e390; 0056195c FUN_0056195c; 00561b00 FUN_00561b00; 00564180 FUN_00564180; 005642f0 FUN_005642f0

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
  undefined1 auStack_7e [6];
  undefined1 local_78 [8];
  
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



//==== 00562784  ns=Global  size=0x160
// sig: undefined FUN_00562784(void)
// callers(0): 
// callees(3): 00561b00 FUN_00561b00; 00564180 FUN_00564180; 005642f0 FUN_005642f0

void FUN_00562784(int param_1,int *param_2)

{
  int iVar1;
  short sVar2;
  undefined1 local_80 [2];
  undefined1 auStack_7e [6];
  undefined1 local_78 [80];
  
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



//==== 005628e4  ns=Global  size=0x70
// sig: undefined FUN_005628e4(void)
// callers(3): 00562954 FUN_00562954; 005633b0 FUN_005633b0; 00569774 FUN_00569774
// callees(1): 00552968 FUN_00552968

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



//==== 00562954  ns=Global  size=0x854
// sig: undefined FUN_00562954(void)
// callers(1): 005631a8 FUN_005631a8
// callees(17): 0054edb0 FUN_0054edb0; 0054ee38 FUN_0054ee38; 00551de8 FUN_00551de8; 00556a58 FUN_00556a58; 0055c8f0 FUN_0055c8f0; 0055ce90 FUN_0055ce90; 0055d0ac FUN_0055d0ac; 0055d994 FUN_0055d994; 0056137c FUN_0056137c; 005628e4 FUN_005628e4; 00563b70 FUN_00563b70; 00563c0c FUN_00563c0c; 00563c38 FUN_00563c38; 005641d0 FUN_005641d0; 00566594 FUN_00566594; 00569498 FUN_00569498; 005c3660 FUN_005c3660

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
  undefined1 local_b0 [4];
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



//==== 005631a8  ns=Global  size=0x208
// sig: undefined FUN_005631a8(void)
// callers(0): 
// callees(3): 0054ee38 FUN_0054ee38; 0055efec FUN_0055efec; 00562954 FUN_00562954

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



//==== 005633b0  ns=Global  size=0x7c0
// sig: undefined FUN_005633b0(void)
// callers(1): 0056a358 FUN_0056a358
// callees(16): 0054e8dc FUN_0054e8dc; 0054e920 FUN_0054e920; 00550d60 FUN_00550d60; 005510cc FUN_005510cc; 00551de8 FUN_00551de8; 00556a58 FUN_00556a58; 0055d428 FUN_0055d428; 00561584 FUN_00561584; 005618f8 FUN_005618f8; 005628e4 FUN_005628e4; 00563b70 FUN_00563b70; 00563d60 FUN_00563d60; 0056a81c FUN_0056a81c; 0056eccc FUN_0056eccc; 005c2028 FUN_005c2028; 005c3660 FUN_005c3660

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
  undefined1 local_a0 [104];
  
  if ((((param_1 != (undefined4 *)0x0) && (param_2 != 0)) &&
      (iVar1 = *(int *)(param_2 + 0x40), *param_1 = 0, iVar1 != 0)) &&
     ((*(int *)(param_2 + 0x44) != 0 && (*(int *)(param_2 + 0x48) != 0)))) {
    FUN_00551de8(local_a0,0x10c);
    FUN_00561584(0);
    return 100;
  }
  return 2;
}



//==== 00563b70  ns=Global  size=0x2c
// sig: undefined FUN_00563b70(void)
// callers(4): 0055ed98 FUN_0055ed98; 00562954 FUN_00562954; 005633b0 FUN_005633b0; 00569774 FUN_00569774
// callees(0): 

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



//==== 00563b9c  ns=Global  size=0x70
// sig: undefined FUN_00563b9c(void)
// callers(2): 0055d994 FUN_0055d994; 0056072c FUN_0056072c
// callees(0): 

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



//==== 00563c0c  ns=Global  size=0x2c
// sig: undefined FUN_00563c0c(void)
// callers(2): 00562954 FUN_00562954; 00569774 FUN_00569774
// callees(0): 

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



//==== 00563c38  ns=Global  size=0x70
// sig: undefined FUN_00563c38(void)
// callers(3): 0055ed98 FUN_0055ed98; 00562954 FUN_00562954; 00569774 FUN_00569774
// callees(0): 

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



//==== 00563ca8  ns=Global  size=0xb8
// sig: undefined FUN_00563ca8(void)
// callers(1): 0056072c FUN_0056072c
// callees(0): 

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



//==== 00563d60  ns=Global  size=0x2c
// sig: undefined FUN_00563d60(void)
// callers(3): 0055d1fc FUN_0055d1fc; 0055d428 FUN_0055d428; 005633b0 FUN_005633b0
// callees(0): 

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



//==== 00563d8c  ns=Global  size=0x70
// sig: undefined FUN_00563d8c(void)
// callers(2): 0055d1fc FUN_0055d1fc; 0055d428 FUN_0055d428
// callees(0): 

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



//==== 00563dfc  ns=Global  size=0xd0
// sig: undefined FUN_00563dfc(void)
// callers(4): 0055e544 FUN_0055e544; 0055f8cc FUN_0055f8cc; 00565d50 FUN_00565d50; 00566040 FUN_00566040
// callees(0): 

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



//==== 00563ecc  ns=Global  size=0x38
// sig: undefined FUN_00563ecc(void)
// callers(2): 0056195c FUN_0056195c; 00561b00 FUN_00561b00
// callees(0): 

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



//==== 00563f04  ns=Global  size=0x3c
// sig: undefined FUN_00563f04(void)
// callers(2): 0055e544 FUN_0055e544; 0055f5d8 FUN_0055f5d8
// callees(1): 00551f9c FUN_00551f9c

short FUN_00563f04(int param_1)

{
  short local_10 [8];
  
  FUN_00551f9c(*(undefined4 *)(param_1 + 0x118),local_10);
  return local_10[0] * 2 + 2;
}



//==== 00563f40  ns=Global  size=0x3c
// sig: undefined FUN_00563f40(void)
// callers(3): 0055f8cc FUN_0055f8cc; 00563f7c FUN_00563f7c; 005644a8 FUN_005644a8
// callees(1): 00551f9c FUN_00551f9c

void FUN_00563f40(undefined8 param_1,ushort *param_2)

{
  FUN_00551f9c();
  *param_2 = *param_2 & 0xfc00;
  return;
}



//==== 00563f7c  ns=Global  size=0x88
// sig: undefined FUN_00563f7c(void)
// callers(1): 00569774 FUN_00569774
// callees(2): 00551f9c FUN_00551f9c; 00563f40 FUN_00563f40

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



//==== 00564004  ns=Global  size=0x30
// sig: undefined FUN_00564004(void)
// callers(3): 0055f8cc FUN_0055f8cc; 00567254 FUN_00567254; 00569774 FUN_00569774
// callees(1): 00551f9c FUN_00551f9c

ushort FUN_00564004(undefined8 param_1)

{
  ushort local_10 [8];
  
  FUN_00551f9c(param_1,local_10);
  return local_10[0] & 0x3ff;
}



//==== 00564034  ns=Global  size=0xa0
// sig: undefined FUN_00564034(void)
// callers(4): 0055e544 FUN_0055e544; 0055f8cc FUN_0055f8cc; 0056072c FUN_0056072c; 00569774 FUN_00569774
// callees(1): 00551f9c FUN_00551f9c

void FUN_00564034(int param_1,int *param_2,ushort *param_3)

{
  ushort local_40 [8];
  
  FUN_00551f9c(param_1,local_40);
  *param_2 = ((int)((local_40[0] & 0x6000) - 1) >> 0x1f & 0xfffffffeU) + 4 + param_1;
  FUN_00551f9c(param_1,param_3);
  *param_3 = *param_3 & 0x7ff;
  return;
}



//==== 005640d4  ns=Global  size=0x70
// sig: undefined FUN_005640d4(void)
// callers(5): 0055ded8 FUN_0055ded8; 0055f880 FUN_0055f880; 0055f8cc FUN_0055f8cc; 005657bc FUN_005657bc; 00567254 FUN_00567254
// callees(1): 00551f9c FUN_00551f9c

undefined2 FUN_005640d4(int param_1)

{
  undefined1 local_30 [2];
  ushort local_2e [11];
  
  FUN_00551f9c(param_1,local_2e);
  if ((local_2e[0] & 0x6000) != 0) {
    FUN_00551f9c(param_1 + 2,local_30);
  }
  return 0;
}



//==== 00564144  ns=Global  size=0x3c
// sig: undefined FUN_00564144(void)
// callers(6): 0055e390 FUN_0055e390; 0055f8cc FUN_0055f8cc; 0056195c FUN_0056195c; 00561ce4 FUN_00561ce4; 00564524 FUN_00564524; 005645c4 FUN_005645c4
// callees(1): 00551f9c FUN_00551f9c

void FUN_00564144(undefined8 param_1,ushort *param_2)

{
  FUN_00551f9c();
  *param_2 = *param_2 & 0x7ff;
  return;
}



//==== 00564180  ns=Global  size=0x50
// sig: undefined FUN_00564180(void)
// callers(13): 0055f0a0 FUN_0055f0a0; 0055f31c FUN_0055f31c; 0055f8cc FUN_0055f8cc; 00561ce4 FUN_00561ce4; 0056248c FUN_0056248c; 00562784 FUN_00562784; 00564524 FUN_00564524; 005645c4 FUN_005645c4; 005657bc FUN_005657bc; 0056590c FUN_0056590c; 00566040 FUN_00566040; 00566ef4 FUN_00566ef4; 00569498 FUN_00569498
// callees(1): 00551f9c FUN_00551f9c

void FUN_00564180(undefined8 param_1,short *param_2)

{
  ushort local_30 [12];
  
  FUN_00551f9c(param_1,local_30);
  *param_2 = ((ushort)((int)((local_30[0] & 0x6000) - 1) >> 0x1f) & 0xfffe) + 4;
  return;
}



//==== 005641d0  ns=Global  size=0x2c
// sig: undefined FUN_005641d0(void)
// callers(3): 0055e544 FUN_0055e544; 0055f5d8 FUN_0055f5d8; 00562954 FUN_00562954
// callees(1): 00551f78 FUN_00551f78

void FUN_005641d0(int param_1)

{
  FUN_00551f78(*(undefined4 *)(param_1 + 0x118),0);
  return;
}



//==== 005641fc  ns=Global  size=0x2c
// sig: undefined FUN_005641fc(void)
// callers(3): 0055f0a0 FUN_0055f0a0; 0055f31c FUN_0055f31c; 005642f0 FUN_005642f0
// callees(1): 00551f78 FUN_00551f78

void FUN_005641fc(int param_1)

{
  FUN_00551f78(param_1 + 2);
  return;
}



//==== 00564228  ns=Global  size=0x64
// sig: undefined FUN_00564228(void)
// callers(4): 0055f0a0 FUN_0055f0a0; 0055f31c FUN_0055f31c; 0056195c FUN_0056195c; 005642f0 FUN_005642f0
// callees(2): 00551f78 FUN_00551f78; 00551f9c FUN_00551f9c

void FUN_00564228(undefined8 param_1,ushort param_2)

{
  ushort local_30 [8];
  
  FUN_00551f9c(param_1,local_30);
  FUN_00551f78(param_1,param_2 & 0x7ff | local_30[0] & 0xf800);
  return;
}



//==== 0056428c  ns=Global  size=0x64
// sig: undefined FUN_0056428c(void)
// callers(4): 0055f0a0 FUN_0055f0a0; 0055f31c FUN_0055f31c; 0056195c FUN_0056195c; 005642f0 FUN_005642f0
// callees(2): 00551f78 FUN_00551f78; 00551f9c FUN_00551f9c

void FUN_0056428c(undefined8 param_1,ushort param_2)

{
  ushort local_30 [8];
  
  FUN_00551f9c(param_1,local_30);
  FUN_00551f78(param_1,param_2 & 0xf800 | local_30[0] & 0x7ff);
  return;
}



//==== 005642f0  ns=Global  size=0x158
// sig: undefined FUN_005642f0(void)
// callers(9): 00561ce4 FUN_00561ce4; 00561ff4 FUN_00561ff4; 0056248c FUN_0056248c; 00562784 FUN_00562784; 005657bc FUN_005657bc; 0056590c FUN_0056590c; 00566040 FUN_00566040; 00566ef4 FUN_00566ef4; 00569498 FUN_00569498
// callees(3): 005641fc FUN_005641fc; 00564228 FUN_00564228; 0056428c FUN_0056428c

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



//==== 00564448  ns=Global  size=0x60
// sig: undefined FUN_00564448(void)
// callers(6): 0055e1b0 FUN_0055e1b0; 0055e544 FUN_0055e544; 0055f0a0 FUN_0055f0a0; 0055f31c FUN_0055f31c; 0055f5d8 FUN_0055f5d8; 0056674c FUN_0056674c
// callees(2): 00551f78 FUN_00551f78; 00551f9c FUN_00551f9c

void FUN_00564448(undefined8 param_1,ushort param_2)

{
  ushort local_30 [8];
  
  FUN_00551f9c(param_1,local_30);
  FUN_00551f78(param_1,param_2 & 0xfc00 | local_30[0]);
  return;
}



//==== 005644a8  ns=Global  size=0x5c
// sig: undefined FUN_005644a8(void)
// callers(6): 0055e1b0 FUN_0055e1b0; 0055e544 FUN_0055e544; 0055f0a0 FUN_0055f0a0; 0055f31c FUN_0055f31c; 00564504 FUN_00564504; 0056674c FUN_0056674c
// callees(2): 00551f78 FUN_00551f78; 00563f40 FUN_00563f40

void FUN_005644a8(undefined8 param_1,ushort param_2)

{
  ushort local_30 [8];
  
  FUN_00563f40(param_1,local_30);
  FUN_00551f78(param_1,param_2 & 0x3ff | local_30[0]);
  return;
}



//==== 00564504  ns=Global  size=0x20
// sig: undefined FUN_00564504(void)
// callers(1): 0055e0b8 FUN_0055e0b8
// callees(1): 005644a8 FUN_005644a8

void FUN_00564504(int param_1,undefined2 *param_2)

{
  param_2[2] = 0;
  *param_2 = 0;
  param_2[1] = 0;
  FUN_005644a8(param_2,*(undefined2 *)(param_1 + 0x6e));
  return;
}



//==== 00564524  ns=Global  size=0xa0
// sig: undefined FUN_00564524(void)
// callers(2): 0055e544 FUN_0055e544; 0056195c FUN_0056195c
// callees(3): 00552570 FUN_00552570; 00564144 FUN_00564144; 00564180 FUN_00564180

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



//==== 005645c4  ns=Global  size=0xd8
// sig: undefined FUN_005645c4(void)
// callers(2): 0055e390 FUN_0055e390; 0055e544 FUN_0055e544
// callees(3): 005525a8 FUN_005525a8; 00564144 FUN_00564144; 00564180 FUN_00564180

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



//==== 0056469c  ns=Global  size=0x16c
// sig: undefined FUN_0056469c(void)
// callers(1): 0056072c FUN_0056072c
// callees(1): 005567a4 FUN_005567a4

/* WARNING: Removing unreachable block (ram,0x005646f8) */

void FUN_0056469c(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  undefined1 local_50 [24];
  
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



//==== 00564808  ns=Global  size=0x8
// sig: undefined FUN_00564808(void)
// callers(0): 
// callees(0): 

undefined8 FUN_00564808(void)

{
  return 4;
}



//==== 00564810  ns=Global  size=0x8
// sig: undefined FUN_00564810(void)
// callers(0): 
// callees(0): 

undefined8 FUN_00564810(void)

{
  return 4;
}



//==== 00564818  ns=Global  size=0x1f0
// sig: undefined FUN_00564818(void)
// callers(0): 
// callees(0): 

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



//==== 00564a08  ns=Global  size=0xcc
// sig: undefined FUN_00564a08(void)
// callers(0): 
// callees(0): 

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



//==== 00564ad4  ns=Global  size=0xa0
// sig: undefined FUN_00564ad4(void)
// callers(0): 
// callees(0): 

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



//==== 00564b74  ns=Global  size=0x34c
// sig: undefined FUN_00564b74(void)
// callers(0): 
// callees(0): 

undefined8 FUN_00564b74(int param_1,int param_2)

{
  undefined *puVar1;
  int iVar2;
  undefined1 local_90 [64];
  
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



//==== 00564ec0  ns=Global  size=0x34c
// sig: undefined FUN_00564ec0(void)
// callers(1): 00565c20 FUN_00565c20
// callees(0): 

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



//==== 0056520c  ns=Global  size=0x2fc
// sig: undefined FUN_0056520c(void)
// callers(1): 00565d50 FUN_00565d50
// callees(0): 

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



//==== 00565508  ns=Global  size=0x120
// sig: undefined FUN_00565508(void)
// callers(0): 
// callees(0): 

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



//==== 00565628  ns=Global  size=0x194
// sig: undefined FUN_00565628(void)
// callers(0): 
// callees(1): 00550edc FUN_00550edc

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



//==== 005657bc  ns=Global  size=0x150
// sig: undefined FUN_005657bc(void)
// callers(1): 0056590c FUN_0056590c
// callees(4): 00561b00 FUN_00561b00; 005640d4 FUN_005640d4; 00564180 FUN_00564180; 005642f0 FUN_005642f0

int FUN_005657bc(undefined8 param_1,int param_2)

{
  undefined2 uVar2;
  int iVar1;
  short sVar3;
  ushort local_90 [2];
  undefined4 local_8c;
  undefined1 auStack_88 [4];
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



//==== 0056590c  ns=Global  size=0x314
// sig: undefined FUN_0056590c(void)
// callers(1): 00565c20 FUN_00565c20
// callees(4): 00561b00 FUN_00561b00; 00564180 FUN_00564180; 005642f0 FUN_005642f0; 005657bc FUN_005657bc

int FUN_0056590c(int *param_1)

{
  undefined4 *puVar1;
  int iVar2;
  int iVar3;
  short sVar4;
  ushort local_a0;
  undefined1 auStack_9e [6];
  undefined1 local_98 [8];
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



//==== 00565c20  ns=Global  size=0x130
// sig: undefined FUN_00565c20(void)
// callers(1): 00565d50 FUN_00565d50
// callees(2): 00564ec0 FUN_00564ec0; 0056590c FUN_0056590c

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



//==== 00565d50  ns=Global  size=0xe8
// sig: undefined FUN_00565d50(void)
// callers(1): 00565e38 FUN_00565e38
// callees(3): 00563dfc FUN_00563dfc; 0056520c FUN_0056520c; 00565c20 FUN_00565c20

/* WARNING: Removing unreachable block (ram,0x00565e0c) */

ulonglong FUN_00565d50(undefined8 param_1,undefined4 *param_2)

{
  ulonglong uVar1;
  ulonglong uVar2;
  undefined1 local_150 [304];
  
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



//==== 00565e38  ns=Global  size=0xf4
// sig: undefined FUN_00565e38(void)
// callers(0): 
// callees(2): 0055f5d8 FUN_0055f5d8; 00565d50 FUN_00565d50

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



//==== 00565f2c  ns=Global  size=0x114
// sig: undefined FUN_00565f2c(void)
// callers(0): 
// callees(1): 00552650 FUN_00552650

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



//==== 00566040  ns=Global  size=0x4f0
// sig: undefined FUN_00566040(void)
// callers(0): 
// callees(7): 00550edc FUN_00550edc; 00552604 FUN_00552604; 0055f5d8 FUN_0055f5d8; 00561b00 FUN_00561b00; 00563dfc FUN_00563dfc; 00564180 FUN_00564180; 005642f0 FUN_005642f0

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
  undefined1 auStack_12e [6];
  undefined1 auStack_128 [64];
  undefined1 auStack_e8 [64];
  undefined1 local_a8 [8];
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



//==== 00566530  ns=Global  size=0x2c
// sig: undefined FUN_00566530(void)
// callers(0): 
// callees(1): 005519f0 FUN_005519f0

void FUN_00566530(undefined4 param_1)

{
  undefined4 uStack00000030;
  
  uStack00000030 = param_1;
  FUN_005519f0(&stack0x00000030);
  return;
}



//==== 0056655c  ns=Global  size=0x38
// sig: undefined FUN_0056655c(void)
// callers(0): 
// callees(1): 00551b80 FUN_00551b80

undefined4 FUN_0056655c(undefined8 param_1)

{
  undefined1 local_10 [16];
  
  FUN_00551b80(local_10,param_1);
  return 0;
}



//==== 00566594  ns=Global  size=0x1b8
// sig: undefined FUN_00566594(void)
// callers(1): 00562954 FUN_00562954
// callees(1): 00552968 FUN_00552968

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



//==== 0056674c  ns=Global  size=0xc8
// sig: undefined FUN_0056674c(void)
// callers(4): 0055ef58 FUN_0055ef58; 005668a4 FUN_005668a4; 00567254 FUN_00567254; 00569774 FUN_00569774
// callees(4): 0054fa58 FUN_0054fa58; 0055cd34 FUN_0055cd34; 00564448 FUN_00564448; 005644a8 FUN_005644a8

undefined8 FUN_0056674c(undefined4 param_1,int param_2)

{
  undefined4 *local_40;
  undefined1 local_3c [4];
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



//==== 00566814  ns=Global  size=0x90
// sig: undefined FUN_00566814(void)
// callers(1): 0055f8cc FUN_0055f8cc
// callees(1): 005c2fb8 FUN_005c2fb8

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



//==== 005668a4  ns=Global  size=0x164
// sig: undefined FUN_005668a4(void)
// callers(1): 0055f8cc FUN_0055f8cc
// callees(3): 0055ded8 FUN_0055ded8; 0055f880 FUN_0055f880; 0056674c FUN_0056674c

undefined4 FUN_005668a4(undefined4 param_1,undefined4 param_2,uint *param_3)

{
  undefined4 uVar1;
  ulonglong uVar2;
  undefined1 local_30 [16];
  
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



//==== 00566a08  ns=Global  size=0x4ec
// sig: undefined FUN_00566a08(void)
// callers(1): 00569774 FUN_00569774
// callees(6): 00551ef4 FUN_00551ef4; 00551f9c FUN_00551f9c; 005525a8 FUN_005525a8; 00552968 FUN_00552968; 00569e74 FUN_00569e74; 005c5ad0 libc::memcpy

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
  undefined1 local_70 [4];
  undefined1 local_6c [4];
  undefined8 uStack_68;
  undefined4 uStack_60;
  
  if (param_4 < 0xc) {
    uStack_60 = 0;
    uStack_68 = 0;
    libc::memcpy(&uStack_68,param_3,param_4 & 0xffff);
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



//==== 00566ef4  ns=Global  size=0x360
// sig: undefined FUN_00566ef4(void)
// callers(0): 
// callees(4): 00552570 FUN_00552570; 00561b00 FUN_00561b00; 00564180 FUN_00564180; 005642f0 FUN_005642f0

int FUN_00566ef4(int param_1,int param_2)

{
  undefined *puVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  short sVar5;
  ulonglong uVar6;
  ushort local_a0 [2];
  undefined1 auStack_9c [4];
  undefined4 local_98;
  undefined1 auStack_94 [4];
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



//==== 00567254  ns=Global  size=0x1c0
// sig: undefined FUN_00567254(void)
// callers(1): 0055f8cc FUN_0055f8cc
// callees(5): 0055ded8 FUN_0055ded8; 0055f880 FUN_0055f880; 00564004 FUN_00564004; 005640d4 FUN_005640d4; 0056674c FUN_0056674c

/* WARNING: Removing unreachable block (ram,0x00567448) */

ulonglong FUN_00567254(undefined4 param_1,int *param_2,undefined8 param_3,undefined4 param_4)

{
  short sVar3;
  ulonglong uVar1;
  uint uVar2;
  uint uVar4;
  undefined1 local_288 [512];
  
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



//==== 00569498  ns=Global  size=0x2dc
// sig: undefined FUN_00569498(void)
// callers(3): 0055efec FUN_0055efec; 00562954 FUN_00562954; 00569774 FUN_00569774
// callees(6): 00551ed8 FUN_00551ed8; 00551f78 FUN_00551f78; 00552570 FUN_00552570; 00561b00 FUN_00561b00; 00564180 FUN_00564180; 005642f0 FUN_005642f0

int FUN_00569498(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  short sVar3;
  undefined4 uVar4;
  undefined1 local_b0 [2];
  undefined1 auStack_ae [6];
  undefined1 auStack_a8 [4];
  undefined1 uStack_a4;
  undefined1 uStack_a3;
  undefined1 auStack_a2 [2];
  undefined1 auStack_a0 [2];
  undefined1 uStack_9e;
  undefined1 uStack_9d;
  undefined1 auStack_9c [20];
  undefined1 local_88 [80];
  
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



//==== 00569774  ns=Global  size=0x700
// sig: undefined FUN_00569774(void)
// callers(1): 0055f8cc FUN_0055f8cc
// callees(15): 00551de8 FUN_00551de8; 0055d0ac FUN_0055d0ac; 0055d994 FUN_0055d994; 005628e4 FUN_005628e4; 00563b70 FUN_00563b70; 00563c0c FUN_00563c0c; 00563c38 FUN_00563c38; 00563f7c FUN_00563f7c; 00564004 FUN_00564004; 00564034 FUN_00564034; 0056674c FUN_0056674c; 00566a08 FUN_00566a08; 00569498 FUN_00569498; 00569e74 FUN_00569e74; 005c3660 FUN_005c3660

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
  undefined1 local_d0 [4];
  undefined1 local_cc [28];
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



//==== 00569e74  ns=Global  size=0x84
// sig: undefined FUN_00569e74(void)
// callers(3): 0056072c FUN_0056072c; 00566a08 FUN_00566a08; 00569774 FUN_00569774
// callees(0): 

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



//==== 00569ef8  ns=Global  size=0x3c
// sig: undefined FUN_00569ef8(void)
// callers(2): 0055d6cc FUN_0055d6cc; 0055d7a0 FUN_0055d7a0
// callees(0): 

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



//==== 00569f34  ns=Global  size=0x4c
// sig: undefined FUN_00569f34(void)
// callers(2): 0055d6cc FUN_0055d6cc; 0055d7a0 FUN_0055d7a0
// callees(0): 

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



//==== 00569f80  ns=Global  size=0x168
// sig: undefined FUN_00569f80(void)
// callers(0): 
// callees(1): 005519f0 FUN_005519f0
// strings: 0056a018: '}HSx}+Kxy*' (raw)

undefined8 FUN_00569f80(uint param_1)

{
  ushort uVar1;
  ushort *puVar2;
  ushort *puVar3;
  ushort *puVar4;
  undefined1 local_10 [4];
  undefined1 local_c [12];
  
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



//==== 0056a0e8  ns=Global  size=0x190
// sig: undefined FUN_0056a0e8(void)
// callers(0): 
// callees(1): 00551de8 FUN_00551de8

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



//==== 0056a278  ns=Global  size=0xe0
// sig: undefined FUN_0056a278(void)
// callers(0): 
// callees(2): 005519f0 FUN_005519f0; 00561584 FUN_00561584

undefined8 FUN_0056a278(void)

{
  int iVar1;
  int *piVar2;
  undefined *puVar3;
  undefined1 local_20 [16];
  
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



//==== 0056a358  ns=Global  size=0x7c
// sig: undefined FUN_0056a358(void)
// callers(0): 
// callees(1): 005633b0 FUN_005633b0

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



//==== 0056a3d4  ns=Global  size=0x174
// sig: undefined FUN_0056a3d4(void)
// callers(3): 0056aa1c FUN_0056aa1c; 0056ab38 FUN_0056ab38; 0056ba6c FUN_0056ba6c
// callees(0): 

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



//==== 0056a548  ns=Global  size=0x6c
// sig: undefined FUN_0056a548(void)
// callers(0): 
// callees(0): 

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



//==== 0056a5b4  ns=Global  size=0x80
// sig: undefined FUN_0056a5b4(void)
// callers(0): 
// callees(0): 

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



//==== 0056a634  ns=Global  size=0x54
// sig: undefined FUN_0056a634(void)
// callers(0): 
// callees(0): 

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



//==== 0056a688  ns=Global  size=0x80
// sig: undefined FUN_0056a688(void)
// callers(0): 
// callees(0): 

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



//==== 0056a708  ns=Global  size=0x5c
// sig: undefined FUN_0056a708(void)
// callers(0): 
// callees(0): 

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



//==== 0056a764  ns=Global  size=0x54
// sig: undefined FUN_0056a764(void)
// callers(0): 
// callees(0): 

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



//==== 0056a7b8  ns=Global  size=0x58
// sig: undefined FUN_0056a7b8(void)
// callers(0): 
// callees(0): 

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



//==== 0056a810  ns=Global  size=0xc
// sig: undefined FUN_0056a810(void)
// callers(0): 
// callees(0): 
// strings: 0067dbf0: 'rt_upnp ReleaseVersion 3.05.201103091800'

undefined4 FUN_0056a810(void)

{
  return *(undefined4 *)PTR_PTR_0071b408;
}



//==== 0056a81c  ns=Global  size=0x1c
// sig: undefined FUN_0056a81c(void)
// callers(1): 005633b0 FUN_005633b0
// callees(0): 

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



//==== 0056a838  ns=Global  size=0x100
// sig: undefined FUN_0056a838(void)
// callers(2): 0055cf18 FUN_0055cf18; 0055cf70 FUN_0055cf70
// callees(1): 0054edf0 FUN_0054edf0

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



//==== 0056a938  ns=Global  size=0x6c
// sig: undefined FUN_0056a938(void)
// callers(7): 0056aed8 FUN_0056aed8; 0056b458 FUN_0056b458; 0056b5c0 FUN_0056b5c0; 0056b6c4 FUN_0056b6c4; 0056b7c8 FUN_0056b7c8; 0056c6a8 FUN_0056c6a8; 0056eac4 FUN_0056eac4
// callees(1): 00551de8 FUN_00551de8

undefined8 FUN_0056a938(int param_1)

{
  int iVar1;
  
  if ((*(int *)(param_1 + 0x38) == 0) && (iVar1 = FUN_00551de8(param_1 + 0x38,0x2e78), iVar1 != 0))
  {
    return 100;
  }
  return 0;
}



//==== 0056a9a4  ns=Global  size=0x78
// sig: undefined FUN_0056a9a4(void)
// callers(0): 
// callees(1): 0054edb0 FUN_0054edb0

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



//==== 0056aa1c  ns=Global  size=0x11c
// sig: undefined FUN_0056aa1c(void)
// callers(2): 0056ab38 FUN_0056ab38; 0056aed8 FUN_0056aed8
// callees(3): 0056a3d4 FUN_0056a3d4; 005cc9c4 FUN_005cc9c4; 005cccec libc::strcpy
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
    libc::strcpy(param_3,param_1 + 4,0x800);
    FUN_005cc9c4(param_3,iVar1,0x800);
    return 0;
  }
  libc::strcpy(param_3,iVar1,0x800);
  return 0;
}



//==== 0056ab38  ns=Global  size=0x1ec
// sig: undefined FUN_0056ab38(void)
// callers(2): 0056b17c FUN_0056b17c; 0056b7c8 FUN_0056b7c8
// callees(5): 0056a3d4 FUN_0056a3d4; 0056aa1c FUN_0056aa1c; 005c8510 libc::strlen; 005cc9c4 FUN_005cc9c4; 005cccec libc::strcpy
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
      libc::strcpy(param_3,param_1 + 4,0x800);
      FUN_005cc9c4(param_3,iVar5,0x800);
      return 0;
    }
    FUN_0056aa1c(param_1,param_2,param_3);
    sVar7 = libc::strlen(param_3);
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
    libc::strcpy(pcVar4,iVar5,0x800 - iVar8);
    return 0;
  }
  libc::strcpy(param_3,iVar5,0x800);
  return 0;
}



//==== 0056ad24  ns=Global  size=0x1b4
// sig: undefined FUN_0056ad24(void)
// callers(3): 0056aed8 FUN_0056aed8; 0056b17c FUN_0056b17c; 0056b7c8 FUN_0056b7c8
// callees(5): 0054ef70 FUN_0054ef70; 0055661c FUN_0055661c; 005c8510 libc::strlen; 005c8a8c FUN_005c8a8c; 005cccec libc::strcpy

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
      sVar4 = libc::strlen(param_1);
      bVar1 = iVar7 != 1;
      if (sVar4 <= uVar8) break;
      pcVar5 = local_70[0];
      if (param_1[uVar8] == '/') {
        iVar7 = iVar7 + 1;
        pcVar5 = pcVar9;
        if ((bVar1) && (pcVar5 = local_70[0], iVar7 == 3)) {
          libc::strcpy(param_2,pcVar9,0x200);
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



//==== 0056aed8  ns=Global  size=0x2a4
// sig: undefined FUN_0056aed8(void)
// callers(0): 
// callees(9): 0054ee84 FUN_0054ee84; 005500a8 FUN_005500a8; 00556a58 FUN_00556a58; 0056a938 FUN_0056a938; 0056aa1c FUN_0056aa1c; 0056ad24 FUN_0056ad24; 0056ee38 FUN_0056ee38; 0056ee40 FUN_0056ee40; 005cd2a8 libc::snprintf
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
  undefined1 local_64 [12];
  undefined4 uStack_58;
  undefined1 auStack_50 [24];
  
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
        libc::snprintf((char *)(*(uint *)(param_1 + 0x38) + 0x2078),
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



//==== 0056b17c  ns=Global  size=0x2dc
// sig: undefined FUN_0056b17c(void)
// callers(4): 0056b458 FUN_0056b458; 0056b5c0 FUN_0056b5c0; 0056b6c4 FUN_0056b6c4; 0056eac4 FUN_0056eac4
// callees(10): 0054edb0 FUN_0054edb0; 0054ee84 FUN_0054ee84; 005500a8 FUN_005500a8; 0056ab38 FUN_0056ab38; 0056ad24 FUN_0056ad24; 0056ee38 FUN_0056ee38; 0056ee40 FUN_0056ee40; 005c8510 libc::strlen; 005cccec libc::strcpy; 005cd2a8 libc::snprintf
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
  undefined1 auStack_860 [16];
  undefined1 local_850 [16];
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
          libc::strcpy(iVar1 + 0x2c78,PTR_s_WANIPConnection_0071b418,0x200);
        }
        else {
          libc::strcpy(iVar1 + 0x2c78,PTR_s_WANPPPConnection_0071b41c,0x200);
        }
        uVar4 = FUN_005500a8(*(undefined4 *)(param_1 + 0x38),local_86c,local_870,local_850);
        if (uVar4 == 0) {
          param_2 = param_2 & 0xffffffff;
          FUN_0054ee84(auStack_860,local_86c);
          libc::snprintf(acStack_840,PTR_s_<s:Envelope_xmlns:s__http:__sche_0071b420,param_2,
                         (ulonglong)*(uint *)(param_1 + 0x38) + 0x2c78 & 0xffffffff,
                         param_3 & 0xffffffff,param_2);
          uVar2 = *(uint *)(param_1 + 0x38);
          sVar7 = libc::strlen(acStack_840);
          libc::snprintf((char *)(uVar2 + 0x2078),PTR_s_POST___s_HTTP_1_1_HOST___s__d_Co_0071b424,
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



//==== 0056b458  ns=Global  size=0x168
// sig: undefined FUN_0056b458(void)
// callers(0): 
// callees(5): 0054ee84 FUN_0054ee84; 00556a58 FUN_00556a58; 0056a938 FUN_0056a938; 0056b17c FUN_0056b17c; 005cd2a8 libc::snprintf
// strings: 0067d460: '<NewRemoteHost></NewRemoteHost><NewExternalPort>%d</NewExternalPort><NewProtocol>UDP</NewProtocol><NewInternalPort>%d</NewInternalPort><NewInternalClient>%s</Ne' | 0067d590: 'AddPortMapping'

int FUN_0056b458(undefined8 *param_1,undefined4 param_2,undefined8 param_3,int param_4)

{
  int iVar1;
  undefined1 auStack_40 [16];
  
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
      libc::snprintf((char *)(*(int *)(param_1 + 7) + 0x2a78),
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



//==== 0056b5c0  ns=Global  size=0x104
// sig: undefined FUN_0056b5c0(void)
// callers(0): 
// callees(3): 00556a58 FUN_00556a58; 0056a938 FUN_0056a938; 0056b17c FUN_0056b17c
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



//==== 0056b6c4  ns=Global  size=0x104
// sig: undefined FUN_0056b6c4(void)
// callers(0): 
// callees(3): 00556a58 FUN_00556a58; 0056a938 FUN_0056a938; 0056b17c FUN_0056b17c
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



//==== 0056b7c8  ns=Global  size=0x2a4
// sig: undefined FUN_0056b7c8(void)
// callers(0): 
// callees(11): 0054edb0 FUN_0054edb0; 0054ee84 FUN_0054ee84; 005500a8 FUN_005500a8; 00556a58 FUN_00556a58; 0056a938 FUN_0056a938; 0056ab38 FUN_0056ab38; 0056ad24 FUN_0056ad24; 0056ee38 FUN_0056ee38; 0056ee40 FUN_0056ee40; 005c8510 libc::strlen; 005cd2a8 libc::snprintf
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
  undefined1 local_874 [12];
  undefined4 uStack_868;
  undefined1 auStack_860 [24];
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
                libc::snprintf(acStack_848,PTR_s_<s:Envelope_xmlns:SOAP_ENV__http_0071b43c,
                               ZEXT48(PTR_s_PortMappingNumberOfEntries_0071b440));
                uVar2 = *(uint *)(param_1 + 0x38);
                sVar8 = libc::strlen(acStack_848);
                libc::snprintf((char *)(uVar2 + 0x2078),
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



//==== 0056ba6c  ns=Global  size=0x34c
// sig: undefined FUN_0056ba6c(void)
// callers(1): 0056bedc FUN_0056bedc
// callees(5): 0055661c FUN_0055661c; 0056a3d4 FUN_0056a3d4; 005c8510 libc::strlen; 005c87ac FUN_005c87ac; 005c8a8c FUN_005c8a8c
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
  undefined1 local_90 [4];
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
      sVar4 = libc::strlen(__s);
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
          sVar4 = libc::strlen(pcVar9);
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



//==== 0056bedc  ns=Global  size=0x2bc
// sig: undefined FUN_0056bedc(void)
// callers(2): 0056c198 FUN_0056c198; 0056c550 FUN_0056c550
// callees(7): 0054f464 FUN_0054f464; 00556c4c thunk_FUN_00556bb8; 0056ba6c FUN_0056ba6c; 0056ee48 FUN_0056ee48; 0056ee50 FUN_0056ee50; 005c8700 FUN_005c8700; 005cccec libc::strcpy

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
      libc::strcpy(*(int *)(param_1 + 0x38) + 0x2c78,iVar5,0x200);
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



//==== 0056c198  ns=Global  size=0x220
// sig: undefined FUN_0056c198(void)
// callers(0): 
// callees(6): 0054fe64 FUN_0054fe64; 0056bedc FUN_0056bedc; 0056ee40 FUN_0056ee40; 0056ee48 FUN_0056ee48; 0056ee60 FUN_0056ee60; 005d0140 libc::memset

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
  undefined1 local_40 [16];
  
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
    libc::memset(iVar2 + 0x1028,0,0x100c);
    *(undefined4 *)(param_1 + 0x1c) = 0;
  }
  return iVar3;
}



//==== 0056c3b8  ns=Global  size=0x154
// sig: undefined FUN_0056c3b8(void)
// callers(0): 
// callees(6): 0054ea34 FUN_0054ea34; 0054fbd4 FUN_0054fbd4; 0054fe64 FUN_0054fe64; 00556c4c thunk_FUN_00556bb8; 0056ee40 FUN_0056ee40; 005c8510 libc::strlen

/* WARNING: Removing unreachable block (ram,0x0056c490) */
/* WARNING: Removing unreachable block (ram,0x0056c4e0) */
/* WARNING: Removing unreachable block (ram,0x0056c500) */
/* WARNING: Removing unreachable block (ram,0x0056c4cc) */
/* WARNING: Removing unreachable block (ram,0x0056c4d0) */

int FUN_0056c3b8(int param_1,undefined4 *param_2)

{
  int iVar1;
  undefined4 *puVar2;
  undefined1 local_30 [4];
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



//==== 0056c50c  ns=Global  size=0x44
// sig: undefined FUN_0056c50c(void)
// callers(2): 0056c550 FUN_0056c550; 0056ec2c FUN_0056ec2c
// callees(1): 005519f0 FUN_005519f0

undefined8 FUN_0056c50c(int param_1)

{
  FUN_005519f0(param_1 + 0x38);
  *(undefined4 *)(param_1 + 0x38) = 0;
  return 0;
}



//==== 0056c550  ns=Global  size=0x158
// sig: undefined FUN_0056c550(void)
// callers(0): 
// callees(5): 0054fe64 FUN_0054fe64; 0056bedc FUN_0056bedc; 0056c50c FUN_0056c50c; 0056ee40 FUN_0056ee40; 005d0140 libc::memset

/* WARNING: Removing unreachable block (ram,0x0056c688) */

undefined8 FUN_0056c550(int param_1)

{
  undefined4 *puVar1;
  int iVar2;
  undefined8 uVar3;
  undefined1 local_30 [16];
  
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
    libc::memset(puVar1 + 0x40a,0,0x100c);
    iVar2 = *(int *)(param_1 + 0x38);
  }
  (*(code *)**(undefined4 **)(iVar2 + 0x2074))(param_1,uVar3,*(undefined4 *)(iVar2 + 8));
  *(undefined4 *)(param_1 + 0x1c) = 0;
  *(undefined4 *)(*(int *)(param_1 + 0x38) + 0x2074) = 0;
  FUN_0056c50c(param_1);
  return uVar3;
}



//==== 0056c6a8  ns=Global  size=0x328
// sig: undefined FUN_0056c6a8(void)
// callers(0): 
// callees(10): 0054edb0 FUN_0054edb0; 0054ef70 FUN_0054ef70; 0054fa58 FUN_0054fa58; 0054fe64 FUN_0054fe64; 005500a8 FUN_005500a8; 00556a58 FUN_00556a58; 0056a938 FUN_0056a938; 005c8510 libc::strlen; 005cd2a8 libc::snprintf; 005d0140 libc::memset
// strings: 0067d8d0: 'urn:schemas-upnp-org:service:Layer3Forwarding:1' | 0067d870: 'M-SEARCH * HTTP/1.1\r\nHost: %s:%d\r\nMan: "ssdp:discover"\r\nST: %s\r\nMX: 1\r\n\r\n' | 0067d8c0: '239.255.255.250' | 0067d900: 'urn:schemas-upnp-org:service:WANCommonInterfaceConfig:1' | 0067d938: 'urn:schemas-upnp-org:service:WANIPConnection:1' | 0067d968: 'urn:schemas-upnp-org:service:WANPPPConnection:1'

ulonglong FUN_0056c6a8(int param_1,uint param_2,int param_3)

{
  int iVar1;
  undefined *puVar2;
  ulonglong uVar3;
  size_t sVar4;
  undefined4 *puVar5;
  ulonglong uVar6;
  undefined1 local_60 [4];
  undefined8 local_5c;
  undefined8 local_54;
  undefined1 local_4c [8];
  undefined4 uStack_44;
  undefined4 uStack_40;
  
  if (param_1 != 0) {
    uVar6 = 0xd6da;
    if (*(int *)(param_1 + 0x1c) != 0) goto LAB_0056c768;
    if (param_3 != 0) {
      uVar6 = FUN_0056a938(param_1);
      if ((int)uVar6 != 0) goto LAB_0056c768;
      if (*(int *)PTR_DAT_0071b404 == 0) {
        libc::memset(*(int *)(param_1 + 0x38) + 0x1c,0,0x100c);
        puVar2 = PTR_s_239_255_255_250_0071b46c;
        if (param_2 == 0x40) {
          libc::snprintf((char *)(*(int *)(param_1 + 0x38) + 0x2078),
                         PTR_s_M_SEARCH___HTTP_1_1_Host___s__d_M_0071b468,
                         ZEXT48(PTR_s_239_255_255_250_0071b46c),0x76c,
                         ZEXT48(PTR_s_urn_schemas_upnp_org_service_WAN_0071b474));
        }
        else if (param_2 < 0x41) {
          if (param_2 != 0x20) goto LAB_0056c764;
          libc::snprintf((char *)(*(int *)(param_1 + 0x38) + 0x2078),
                         PTR_s_M_SEARCH___HTTP_1_1_Host___s__d_M_0071b468,
                         ZEXT48(PTR_s_239_255_255_250_0071b46c),0x76c,
                         ZEXT48(PTR_s_urn_schemas_upnp_org_service_Lay_0071b470));
        }
        else if (param_2 == 0x800) {
          libc::snprintf((char *)(*(int *)(param_1 + 0x38) + 0x2078),
                         PTR_s_M_SEARCH___HTTP_1_1_Host___s__d_M_0071b468,
                         ZEXT48(PTR_s_239_255_255_250_0071b46c),0x76c,
                         ZEXT48(PTR_s_urn_schemas_upnp_org_service_WAN_0071b47c));
        }
        else {
          if (param_2 != 0x1000) goto LAB_0056c764;
          libc::snprintf((char *)(*(int *)(param_1 + 0x38) + 0x2078),
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
        sVar4 = libc::strlen((char *)(puVar5 + 0x81e));
        uVar3 = FUN_0054fa58(*puVar5,local_5c,0x76c,puVar5 + 0x81e,sVar4,local_60);
        if (uVar3 != 0) {
          puVar5 = *(undefined4 **)(param_1 + 0x38);
LAB_0056c904:
          FUN_0054fe64(*puVar5);
          return uVar3 & 0xffffffff;
        }
        puVar5 = *(undefined4 **)(param_1 + 0x38);
        sVar4 = libc::strlen((char *)(puVar5 + 0x81e));
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



//==== 0056c9d0  ns=Global  size=0x70
// sig: undefined FUN_0056c9d0(void)
// callers(1): 0056cedc FUN_0056cedc
// callees(0): 

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



//==== 0056cedc  ns=Global  size=0x104
// sig: undefined FUN_0056cedc(void)
// callers(2): 0056072c FUN_0056072c; 0056eac4 FUN_0056eac4
// callees(1): 0056c9d0 FUN_0056c9d0

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



//==== 0056eac4  ns=Global  size=0x168
// sig: undefined FUN_0056eac4(void)
// callers(1): 0056ec2c FUN_0056ec2c
// callees(7): 0054edf0 FUN_0054edf0; 00550d54 FUN_00550d54; 00556a58 FUN_00556a58; 0056a938 FUN_0056a938; 0056b17c FUN_0056b17c; 0056cedc FUN_0056cedc; 005cd2a8 libc::snprintf
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
          libc::snprintf((char *)(iVar2 + 0x2a78),__format,(ulonglong)*(uint *)(param_1 + 0x14));
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



//==== 0056ec2c  ns=Global  size=0xa0
// sig: undefined FUN_0056ec2c(void)
// callers(1): 00561584 FUN_00561584
// callees(4): 0054fe64 FUN_0054fe64; 005519f0 FUN_005519f0; 0056c50c FUN_0056c50c; 0056eac4 FUN_0056eac4

undefined8 FUN_0056ec2c(int param_1)

{
  int iVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined1 local_10 [16];
  
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



//==== 0056eccc  ns=Global  size=0x16c
// sig: undefined FUN_0056eccc(void)
// callers(1): 005633b0 FUN_005633b0
// callees(3): 0054e8dc FUN_0054e8dc; 005519f0 FUN_005519f0; 00551de8 FUN_00551de8

ulonglong FUN_0056eccc(undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  ulonglong uVar1;
  ulonglong uVar2;
  undefined1 local_40 [16];
  
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



//==== 0056ee38  ns=Global  size=0x8
// sig: undefined FUN_0056ee38(void)
// callers(3): 0056aed8 FUN_0056aed8; 0056b17c FUN_0056b17c; 0056b7c8 FUN_0056b7c8
// callees(0): 

undefined8 FUN_0056ee38(void)

{
  return 4;
}



//==== 0056ee40  ns=Global  size=0x8
// sig: undefined FUN_0056ee40(void)
// callers(6): 0056aed8 FUN_0056aed8; 0056b17c FUN_0056b17c; 0056b7c8 FUN_0056b7c8; 0056c198 FUN_0056c198; 0056c3b8 FUN_0056c3b8; 0056c550 FUN_0056c550
// callees(0): 

undefined8 FUN_0056ee40(void)

{
  return 4;
}



//==== 0056ee48  ns=Global  size=0x8
// sig: undefined FUN_0056ee48(void)
// callers(2): 0056bedc FUN_0056bedc; 0056c198 FUN_0056c198
// callees(0): 

undefined8 FUN_0056ee48(void)

{
  return 4;
}



//==== 0056ee50  ns=Global  size=0x8
// sig: undefined FUN_0056ee50(void)
// callers(1): 0056bedc FUN_0056bedc
// callees(0): 

undefined8 FUN_0056ee50(void)

{
  return 4;
}



//==== 0056ee58  ns=Global  size=0x8
// sig: undefined FUN_0056ee58(void)
// callers(0): 
// callees(0): 

undefined8 FUN_0056ee58(void)

{
  return 4;
}



//==== 0056ee60  ns=Global  size=0x8
// sig: undefined FUN_0056ee60(void)
// callers(1): 0056c198 FUN_0056c198
// callees(0): 

undefined8 FUN_0056ee60(void)

{
  return 4;
}



//==== 0056ee68  ns=Global  size=0x3c
// sig: undefined FUN_0056ee68(void)
// callers(0): 
// callees(0): 

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



//==== 0056eea4  ns=Global  size=0x120
// sig: undefined FUN_0056eea4(void)
// callers(1): 0055d060 FUN_0055d060
// callees(1): 0054ee38 FUN_0054ee38

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



//==== 0056efc4  ns=Global  size=0xb8
// sig: undefined FUN_0056efc4(void)
// callers(1): 0055f8cc FUN_0055f8cc
// callees(1): 0054ee38 FUN_0054ee38

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



//==== 0056f07c  ns=Global  size=0x1c8
// sig: undefined FUN_0056f07c(void)
// callers(1): 0055d140 FUN_0055d140
// callees(1): 0054ee38 FUN_0054ee38

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



//==== 0056f244  ns=Global  size=0x1b8
// sig: undefined FUN_0056f244(void)
// callers(3): 00561324 FUN_00561324; 0056137c FUN_0056137c; 0056f3fc FUN_0056f3fc
// callees(3): 0054edb0 FUN_0054edb0; 0054edf0 FUN_0054edf0; 0054ee38 FUN_0054ee38

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



//==== 0056f3fc  ns=Global  size=0x278
// sig: undefined FUN_0056f3fc(void)
// callers(2): 0055d428 FUN_0055d428; 0056072c FUN_0056072c
// callees(4): 0054fa58 FUN_0054fa58; 00556c4c thunk_FUN_00556bb8; 00556f40 thunk_FUN_00556a58; 0056f244 FUN_0056f244

/* WARNING: Removing unreachable block (ram,0x0056f604) */

int FUN_0056f3fc(undefined4 *param_1)

{
  bool bVar1;
  bool bVar2;
  int iVar3;
  undefined4 uVar4;
  int *piVar5;
  undefined1 local_90 [8];
  undefined1 auStack_88 [4];
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



//==== 0056f674  ns=Global  size=0x134
// sig: undefined FUN_0056f674(void)
// callers(1): 0055f8cc FUN_0055f8cc
// callees(3): 0054ee38 FUN_0054ee38; 00552728 FUN_00552728; 00556a58 FUN_00556a58

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



//==== 0056f7a8  ns=Global  size=0x15c
// sig: undefined FUN_0056f7a8(void)
// callers(1): 0055d428 FUN_0055d428
// callees(2): 00551de8 FUN_00551de8; 00556f40 thunk_FUN_00556a58

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



//==== 0056f904  ns=Global  size=0x174
// sig: undefined FUN_0056f904(void)
// callers(1): 0055d8e8 FUN_0055d8e8
// callees(4): 0054edf0 FUN_0054edf0; 0054ee38 FUN_0054ee38; 00551de8 FUN_00551de8; 00556f40 thunk_FUN_00556a58

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



//==== 0056fa78  ns=Global  size=0x70
// sig: undefined FUN_0056fa78(void)
// callers(1): 0055d428 FUN_0055d428
// callees(1): 00551de8 FUN_00551de8

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



//==== 0056fae8  ns=Global  size=0x88
// sig: undefined FUN_0056fae8(void)
// callers(1): 0055d1fc FUN_0055d1fc
// callees(1): 005519f0 FUN_005519f0

undefined8 FUN_0056fae8(int param_1)

{
  int iVar1;
  undefined8 uVar2;
  int iStack00000030;
  undefined1 local_20 [16];
  
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



//==== 0056fb70  ns=Global  size=0x128
// sig: undefined FUN_0056fb70(void)
// callers(2): 0056fc98 FUN_0056fc98; 0056fcbc FUN_0056fcbc
// callees(0): 

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



//==== 0056fc98  ns=Global  size=0x24
// sig: undefined FUN_0056fc98(void)
// callers(1): 004f5be4 FUN_004f5be4
// callees(1): 0056fb70 FUN_0056fb70

undefined8 FUN_0056fc98(void)

{
  FUN_0056fb70();
  return 0;
}



//==== 0056fcbc  ns=Global  size=0x24
// sig: undefined FUN_0056fcbc(void)
// callers(0): 
// callees(1): 0056fb70 FUN_0056fb70

undefined8 FUN_0056fcbc(void)

{
  FUN_0056fb70();
  return 0;
}



//==== 0056fce0  ns=Global  size=0x50
// sig: undefined FUN_0056fce0(void)
// callers(5): 0056fdb0 FUN_0056fdb0; 0057026c FUN_0057026c; 00570408 FUN_00570408; 00570618 FUN_00570618; 0057080c FUN_0057080c
// callees(0): 

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



//==== 0056fd30  ns=Global  size=0x20
// sig: undefined FUN_0056fd30(void)
// callers(0): 
// callees(0): 

ulonglong FUN_0056fd30(undefined8 param_1)

{
  uint uStack00000030;
  
  uStack00000030 = (uint)((ulonglong)param_1 >> 0x20);
  return (((longlong)((int)uStack00000030 >> 0x1f) ^ (ulonglong)uStack00000030) -
         (longlong)((int)uStack00000030 >> 0x1f)) - 1 >> 0x1f & 1;
}



//==== 0056fd50  ns=Global  size=0x2c
// sig: undefined FUN_0056fd50(void)
// callers(0): 
// callees(0): 

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



//==== 0056fd7c  ns=Global  size=0x8
// sig: undefined FUN_0056fd7c(void)
// callers(0): 
// callees(0): 

undefined8 FUN_0056fd7c(void)

{
  return 0;
}



//==== 0056fd84  ns=Global  size=0x2c
// sig: undefined FUN_0056fd84(void)
// callers(0): 
// callees(0): 

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



//==== 0056fdb0  ns=Global  size=0xac
// sig: undefined FUN_0056fdb0(void)
// callers(0): 
// callees(1): 0056fce0 FUN_0056fce0

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



//==== 0056fe5c  ns=Global  size=0x8
// sig: undefined FUN_0056fe5c(void)
// callers(0): 
// callees(0): 

undefined8 FUN_0056fe5c(void)

{
  return 0;
}



//==== 0056fe64  ns=Global  size=0x28
// sig: undefined FUN_0056fe64(void)
// callers(0): 
// callees(1): 0057109c FUN_0057109c

undefined4 FUN_0056fe64(void)

{
  undefined4 uVar1;
  
  uVar1 = FUN_0057109c();
  return uVar1;
}



//==== 0056fe8c  ns=Global  size=0x6c
// sig: undefined FUN_0056fe8c(void)
// callers(0): 
// callees(1): 005710c4 FUN_005710c4

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



//==== 0056fef8  ns=Global  size=0x58
// sig: undefined FUN_0056fef8(void)
// callers(0): 
// callees(1): 00571cb8 FUN_00571cb8

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



//==== 0056ff50  ns=Global  size=0x50
// sig: undefined FUN_0056ff50(void)
// callers(0): 
// callees(1): 00571d50 FUN_00571d50

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



//==== 0056ffa0  ns=Global  size=0x10
// sig: undefined FUN_0056ffa0(void)
// callers(0): 
// callees(0): 

void FUN_0056ffa0(undefined4 *param_1)

{
  param_1[1] = 0;
  *param_1 = 0;
  return;
}



//==== 0056ffb0  ns=Global  size=0x80
// sig: undefined FUN_0056ffb0(void)
// callers(0): 
// callees(1): 00571214 FUN_00571214

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



