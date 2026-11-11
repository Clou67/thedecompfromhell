//==== 0054021c  ns=Global  size=0x240
// sig: undefined FUN_0054021c(void)
// callers(0): 
// callees(1): 0054eecc FUN_0054eecc

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



//==== 0054045c  ns=Global  size=0x38
// sig: undefined FUN_0054045c(void)
// callers(1): 0053f6bc FUN_0053f6bc
// callees(0): 

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



//==== 00540494  ns=Global  size=0x8
// sig: undefined FUN_00540494(void)
// callers(0): 
// callees(0): 

undefined4 FUN_00540494(int param_1)

{
  return *(undefined4 *)(param_1 + 0x45c);
}



//==== 0054049c  ns=Global  size=0x8
// sig: undefined FUN_0054049c(void)
// callers(1): 004f5be4 FUN_004f5be4
// callees(0): 

undefined8 FUN_0054049c(void)

{
  return 0;
}



//==== 005404a4  ns=Global  size=0x10
// sig: undefined FUN_005404a4(void)
// callers(0): 
// callees(0): 

undefined4 FUN_005404a4(void)

{
  return **(undefined4 **)PTR_PTR_0071b104;
}



//==== 005404b4  ns=Global  size=0xc
// sig: undefined FUN_005404b4(void)
// callers(0): 
// callees(0): 

undefined4 FUN_005404b4(int param_1)

{
  return *(undefined4 *)(param_1 + 0x458);
}



//==== 005404c0  ns=Global  size=0x38
// sig: undefined FUN_005404c0(void)
// callers(1): 0053e6c4 FUN_0053e6c4
// callees(0): 

undefined8 FUN_005404c0(undefined4 *param_1,int param_2)

{
  if ((param_1 != (undefined4 *)0x0) && (*param_1 = 0x100, param_2 != 0)) {
    *param_1 = *(undefined4 *)(param_2 + 0x404);
    return 0;
  }
  return 3;
}



//==== 005404f8  ns=Global  size=0x10
// sig: undefined FUN_005404f8(void)
// callers(1): 00546398 FUN_00546398
// callees(0): 

void FUN_005404f8(undefined4 param_1)

{
  *(undefined4 *)(*(int *)PTR_PTR_0071b104 + 4) = param_1;
  return;
}



//==== 00540508  ns=Global  size=0x84
// sig: undefined FUN_00540508(void)
// callers(2): 0053e4c0 FUN_0053e4c0; 0054328c FUN_0054328c
// callees(0): 

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



//==== 0054058c  ns=Global  size=0x74
// sig: undefined FUN_0054058c(void)
// callers(4): 0053e40c FUN_0053e40c; 0054328c FUN_0054328c; 00544ad4 FUN_00544ad4; 00559a4c FUN_00559a4c
// callees(0): 

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



//==== 00540600  ns=Global  size=0x54
// sig: undefined FUN_00540600(void)
// callers(3): 00541ac0 FUN_00541ac0; 00543838 FUN_00543838; 00544198 FUN_00544198
// callees(0): 

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



//==== 00540654  ns=Global  size=0x38
// sig: undefined FUN_00540654(void)
// callers(1): 00547fd0 FUN_00547fd0
// callees(0): 

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



//==== 00540754  ns=Global  size=0x88
// sig: undefined FUN_00540754(void)
// callers(1): 00545408 FUN_00545408
// callees(0): 

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



//==== 005407dc  ns=Global  size=0x2c
// sig: undefined FUN_005407dc(void)
// callers(0): 
// callees(0): 

bool FUN_005407dc(void)

{
  int iVar1;
  
  iVar1 = *(int *)PTR_DAT_0071b10c;
  if (iVar1 != 0) {
    *(undefined4 *)(iVar1 + 0x10c) = 1;
  }
  return iVar1 == 0;
}



//==== 00540808  ns=Global  size=0xabc
// sig: undefined FUN_00540808(void)
// callers(148): 0053bdfc FUN_0053bdfc; 0053bef8 FUN_0053bef8; 0053c038 FUN_0053c038; 0053c114 FUN_0053c114; 0053c21c FUN_0053c21c; 0053c308 FUN_0053c308; 0053c3f4 FUN_0053c3f4; 0053c4e0 FUN_0053c4e0; 0053c804 FUN_0053c804; 0053c8c8 FUN_0053c8c8; 0053c984 FUN_0053c984; 0053ca3c FUN_0053ca3c; 0053cad4 FUN_0053cad4; 0053cb70 FUN_0053cb70; 0053cc40 FUN_0053cc40; 0053cd10 FUN_0053cd10; 0053cdf4 FUN_0053cdf4; 0053ced8 FUN_0053ced8; 0053cf94 FUN_0053cf94; 0053d050 FUN_0053d050; 0053d10c FUN_0053d10c; 0053d1f0 FUN_0053d1f0; 0053d2c0 FUN_0053d2c0; 0053d390 FUN_0053d390; 0053d444 FUN_0053d444
// callees(0): 

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



//==== 005412c4  ns=Global  size=0xcc
// sig: undefined FUN_005412c4(void)
// callers(6): 0053eb5c FUN_0053eb5c; 00547fd0 FUN_00547fd0; 00576178 FUN_00576178; 00579370 FUN_00579370; 00579f94 FUN_00579f94; 0057a6dc FUN_0057a6dc
// callees(1): 00540808 FUN_00540808

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



//==== 00541390  ns=Global  size=0xe4
// sig: undefined FUN_00541390(void)
// callers(5): 0053e610 FUN_0053e610; 0054c228 FUN_0054c228; 0054c800 FUN_0054c800; 0054ddd8 FUN_0054ddd8; 0054e544 FUN_0054e544
// callees(1): 00540808 FUN_00540808

/* WARNING: Removing unreachable block (ram,0x00541420) */

int FUN_00541390(int param_1,undefined4 *param_2)

{
  undefined *puVar1;
  undefined4 uVar2;
  int iVar3;
  undefined1 local_20 [24];
  
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



//==== 00541474  ns=Global  size=0x118
// sig: undefined FUN_00541474(void)
// callers(1): 0053f504 FUN_0053f504
// callees(1): 00540808 FUN_00540808

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



//==== 0054158c  ns=Global  size=0x180
// sig: undefined FUN_0054158c(void)
// callers(1): 0053f5cc FUN_0053f5cc
// callees(1): 00540808 FUN_00540808

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



//==== 0054170c  ns=Global  size=0x34
// sig: undefined FUN_0054170c(void)
// callers(18): 00541980 FUN_00541980; 00542600 FUN_00542600; 005433e8 FUN_005433e8; 00544ad4 FUN_00544ad4; 00545010 FUN_00545010; 00546ff0 FUN_00546ff0; 0054a248 FUN_0054a248; 0054b368 FUN_0054b368; 0054b7dc FUN_0054b7dc; 0054bc2c FUN_0054bc2c; 0054c228 FUN_0054c228; 0054c800 FUN_0054c800; 00577e18 FUN_00577e18; 005783e4 FUN_005783e4; 00579370 FUN_00579370; 0057a288 FUN_0057a288; 0057a5ec FUN_0057a5ec; 0057a6dc FUN_0057a6dc
// callees(0): 

undefined4 FUN_0054170c(int param_1,uint param_2)

{
  if (param_1 != 0) {
    if (param_2 < 0x100) {
      return *(undefined4 *)(param_1 + param_2 * 4);
    }
  }
  return 0;
}



//==== 00541740  ns=Global  size=0x240
// sig: undefined FUN_00541740(void)
// callers(4): 005460c8 FUN_005460c8; 0054ddd8 FUN_0054ddd8; 0054e544 FUN_0054e544; 00559fc4 FUN_00559fc4
// callees(1): 00540808 FUN_00540808

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
  undefined1 local_50 [2];
  undefined1 local_4e [22];
  
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



//==== 00541980  ns=Global  size=0xc4
// sig: undefined FUN_00541980(void)
// callers(0): 
// callees(1): 0054170c FUN_0054170c

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



//==== 00541a44  ns=Global  size=0x8
// sig: undefined FUN_00541a44(void)
// callers(10): 0054a110 FUN_0054a110; 0054a248 FUN_0054a248; 0054b368 FUN_0054b368; 00575c80 FUN_00575c80; 00576178 FUN_00576178; 005763fc FUN_005763fc; 00579370 FUN_00579370; 005798e8 FUN_005798e8; 0057b218 FUN_0057b218; 0057ce10 FUN_0057ce10
// callees(0): 

undefined1 FUN_00541a44(undefined1 param_1)

{
  return param_1;
}



//==== 00541a4c  ns=Global  size=0x74
// sig: undefined FUN_00541a4c(void)
// callers(1): 00541ac0 FUN_00541ac0
// callees(0): 

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



//==== 00541ac0  ns=Global  size=0x4bc
// sig: undefined FUN_00541ac0(void)
// callers(1): 00543838 FUN_00543838
// callees(3): 00540600 FUN_00540600; 00540808 FUN_00540808; 00541a4c FUN_00541a4c

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
  undefined1 local_80 [2];
  undefined1 local_7e [6];
  undefined1 auStack_78 [48];
  
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



//==== 00541f7c  ns=Global  size=0x3c
// sig: undefined FUN_00541f7c(void)
// callers(0): 
// callees(0): 

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



//==== 00541fb8  ns=Global  size=0x3c
// sig: undefined FUN_00541fb8(void)
// callers(3): 0054695c FUN_0054695c; 005469c8 FUN_005469c8; 00546b20 FUN_00546b20
// callees(0): 

undefined4 FUN_00541fb8(void)

{
  int iVar1;
  
  if ((*(int *)PTR_DAT_0071b118 != 0) &&
     (iVar1 = *(int *)(*(int *)PTR_DAT_0071b118 + 0x138), iVar1 != 0)) {
    return *(undefined4 *)(iVar1 + 0x444);
  }
  return 0xffffffff;
}



//==== 00541ff4  ns=Global  size=0x98
// sig: undefined FUN_00541ff4(void)
// callers(0): 
// callees(0): 

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



//==== 0054208c  ns=Global  size=0x54
// sig: undefined FUN_0054208c(void)
// callers(0): 
// callees(0): 

void FUN_0054208c(undefined4 param_1,undefined4 param_2)

{
  if (*(int *)PTR_DAT_0071b10c != 0) {
    (*(code *)**(undefined4 **)(*(int *)PTR_DAT_0071b10c + 0x3c))(param_1,param_2);
  }
  return;
}



//==== 005420e0  ns=Global  size=0x138
// sig: undefined FUN_005420e0(void)
// callers(0): 
// callees(0): 

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



//==== 00542218  ns=Global  size=0x74
// sig: undefined FUN_00542218(void)
// callers(0): 
// callees(0): 

void FUN_00542218(int param_1)

{
  undefined1 local_20 [32];
  
  if (*(int *)(param_1 + 0x4d8) != 0) {
    (*(code *)**(undefined4 **)(param_1 + 0x4d8))(local_20);
  }
  return;
}



//==== 0054228c  ns=Global  size=0x150
// sig: undefined FUN_0054228c(void)
// callers(1): 0053dedc FUN_0053dedc
// callees(1): 00540808 FUN_00540808

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



//==== 005423dc  ns=Global  size=0x9c
// sig: undefined FUN_005423dc(void)
// callers(1): 0053c4e0 FUN_0053c4e0
// callees(1): 00540808 FUN_00540808

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



//==== 00542478  ns=Global  size=0xa8
// sig: undefined FUN_00542478(void)
// callers(1): 0053c3f4 FUN_0053c3f4
// callees(1): 00540808 FUN_00540808

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



//==== 00542520  ns=Global  size=0xe0
// sig: undefined FUN_00542520(void)
// callers(1): 0058c6a4 FUN_0058c6a4
// callees(1): 00540808 FUN_00540808

undefined4 FUN_00542520(int param_1,int *param_2,int param_3,int param_4)

{
  undefined4 uVar1;
  undefined1 local_10 [16];
  
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



//==== 00542600  ns=Global  size=0x8c
// sig: undefined FUN_00542600(void)
// callers(1): 0053e8f4 FUN_0053e8f4
// callees(1): 0054170c FUN_0054170c

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



//==== 0054268c  ns=Global  size=0x48
// sig: undefined FUN_0054268c(void)
// callers(1): 0058ac48 FUN_0058ac48
// callees(0): 

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



//==== 005426d4  ns=Global  size=0x80
// sig: undefined FUN_005426d4(void)
// callers(1): 0053c038 FUN_0053c038
// callees(1): 00540808 FUN_00540808

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



//==== 00542754  ns=Global  size=0x7c
// sig: undefined FUN_00542754(void)
// callers(2): 00542b20 FUN_00542b20; 005487f0 FUN_005487f0
// callees(0): 

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



//==== 005427d0  ns=Global  size=0x8c
// sig: undefined FUN_005427d0(void)
// callers(1): 0053bdfc FUN_0053bdfc
// callees(1): 00540808 FUN_00540808

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



//==== 0054285c  ns=Global  size=0x5c
// sig: undefined FUN_0054285c(void)
// callers(4): 0054ceb0 FUN_0054ceb0; 0054cf00 FUN_0054cf00; 0057c7c8 FUN_0057c7c8; 0057c914 FUN_0057c914
// callees(0): 

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



//==== 005428b8  ns=Global  size=0x40
// sig: undefined FUN_005428b8(void)
// callers(2): 00548b58 FUN_00548b58; 00549200 FUN_00549200
// callees(0): 

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



//==== 005428f8  ns=Global  size=0x34
// sig: undefined FUN_005428f8(void)
// callers(0): 
// callees(0): 

undefined4 FUN_005428f8(int param_1)

{
  undefined4 uVar1;
  
  uVar1 = 0;
  if (param_1 - 1U < 0x10) {
    uVar1 = *(undefined4 *)(*(int *)PTR_PTR_0071b104 + param_1 * 4 + 0x1094);
  }
  return uVar1;
}



//==== 0054292c  ns=Global  size=0x44
// sig: undefined FUN_0054292c(void)
// callers(0): 
// callees(0): 

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



//==== 00542970  ns=Global  size=0x44
// sig: undefined FUN_00542970(void)
// callers(5): 00542b20 FUN_00542b20; 00542cf4 FUN_00542cf4; 005474b4 FUN_005474b4; 00548b58 FUN_00548b58; 00549200 FUN_00549200
// callees(0): 

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



//==== 005429b4  ns=Global  size=0x28
// sig: undefined FUN_005429b4(void)
// callers(2): 00546398 FUN_00546398; 00547c38 FUN_00547c38
// callees(0): 

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



//==== 005429dc  ns=Global  size=0x144
// sig: undefined FUN_005429dc(void)
// callers(0): 
// callees(0): 

void FUN_005429dc(undefined2 param_1,int param_2)

{
  undefined *puVar1;
  int iVar2;
  undefined1 local_30 [24];
  
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



//==== 00542b20  ns=Global  size=0x17c
// sig: undefined FUN_00542b20(void)
// callers(0): 
// callees(3): 00540808 FUN_00540808; 00542754 FUN_00542754; 00542970 FUN_00542970

void FUN_00542b20(undefined4 param_1,undefined4 param_2,int param_3)

{
  undefined4 *puVar1;
  int iVar2;
  uint uVar3;
  undefined1 local_50 [8];
  undefined1 local_48 [24];
  
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



//==== 00542c9c  ns=Global  size=0x58
// sig: undefined FUN_00542c9c(void)
// callers(0): 
// callees(1): 005d0140 libc::memset

undefined8 FUN_00542c9c(undefined4 *param_1)

{
  undefined8 uVar1;
  
  uVar1 = 3;
  if (param_1 != (undefined4 *)0x0) {
    libc::memset(param_1,0,0x78);
    uVar1 = 0;
    *param_1 = 1;
  }
  return uVar1;
}



//==== 00542cf4  ns=Global  size=0xe0
// sig: undefined FUN_00542cf4(void)
// callers(0): 
// callees(1): 00542970 FUN_00542970

void FUN_00542cf4(int param_1,ulonglong param_2)

{
  undefined4 *puVar1;
  uint uVar2;
  int iVar3;
  undefined1 local_50 [40];
  
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



//==== 00542e94  ns=Global  size=0x28c
// sig: undefined FUN_00542e94(void)
// callers(2): 00548b58 FUN_00548b58; 00549200 FUN_00549200
// callees(2): 00540808 FUN_00540808; 005d0140 libc::memset

undefined4 FUN_00542e94(int param_1)

{
  undefined *puVar1;
  int iVar2;
  undefined4 uVar3;
  undefined1 local_f0 [12];
  undefined1 local_e4 [100];
  
  puVar1 = PTR_DAT_0071b114;
  if ((*(int *)PTR_DAT_0071b10c == 0) || (*(int *)PTR_DAT_0071b114 == 0)) {
    return 2;
  }
  if (*(int *)(param_1 + 0x45c) == 0) {
    libc::memset(local_e4,0,0x58);
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



//==== 00543120  ns=Global  size=0x16c
// sig: undefined FUN_00543120(void)
// callers(2): 00546398 FUN_00546398; 0055a634 FUN_0055a634
// callees(1): 00540808 FUN_00540808

int FUN_00543120(void)

{
  undefined *puVar1;
  undefined4 uVar2;
  int iVar3;
  undefined1 local_70 [104];
  
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



//==== 0054328c  ns=Global  size=0x15c
// sig: undefined FUN_0054328c(void)
// callers(1): 0053e358 FUN_0053e358
// callees(2): 00540508 FUN_00540508; 0054058c FUN_0054058c

ulonglong FUN_0054328c(undefined4 *param_1,int param_2)

{
  ulonglong uVar1;
  ulonglong uVar2;
  undefined1 local_40 [24];
  
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



//==== 005433e8  ns=Global  size=0x58
// sig: undefined FUN_005433e8(void)
// callers(1): 00544ad4 FUN_00544ad4
// callees(1): 0054170c FUN_0054170c

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



//==== 00543440  ns=Global  size=0xc8
// sig: undefined FUN_00543440(void)
// callers(0): 
// callees(2): 00540808 FUN_00540808; 005d0140 libc::memset

undefined8 FUN_00543440(int param_1,undefined2 param_2,undefined8 param_3)

{
  undefined4 uVar2;
  undefined8 uVar1;
  
  libc::memset(param_3,0,0xe4);
  if ((param_1 != 0) && (*(int *)(param_1 + 0x454) == 2)) {
    uVar2 = (*(code *)**(undefined4 **)(*(int *)PTR_DAT_0071b114 + 0xc))
                      (*(undefined4 *)(param_1 + 0x45c),param_2,param_3);
    uVar1 = FUN_00540808(uVar2);
    return uVar1;
  }
  return 5;
}



//==== 00543508  ns=Global  size=0x1b0
// sig: undefined FUN_00543508(void)
// callers(0): 
// callees(0): 

/* WARNING: Removing unreachable block (ram,0x005436ac) */
/* WARNING: Removing unreachable block (ram,0x0054363c) */
/* WARNING: Removing unreachable block (ram,0x00543644) */
/* WARNING: Removing unreachable block (ram,0x0054364c) */
/* WARNING: Removing unreachable block (ram,0x005436a4) */
/* WARNING: Removing unreachable block (ram,0x00543678) */

void FUN_00543508(undefined8 param_1,undefined8 param_2,undefined4 *param_3,undefined4 *param_4,
                 int param_5)

{
  undefined1 local_60 [56];
  
  if (*(int *)(param_5 + 0x508) != 0) {
    (*(code *)**(undefined4 **)(param_5 + 0x508))(local_60);
    *param_3 = 1;
    *param_4 = 0;
  }
  return;
}



//==== 005436b8  ns=Global  size=0xfc
// sig: undefined FUN_005436b8(void)
// callers(3): 00545d44 FUN_00545d44; 0058cab0 FUN_0058cab0; 0058d010 FUN_0058d010
// callees(1): 00540808 FUN_00540808

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



//==== 005437b4  ns=Global  size=0x84
// sig: undefined FUN_005437b4(void)
// callers(1): 0053c21c FUN_0053c21c
// callees(0): 

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



//==== 00543838  ns=Global  size=0x364
// sig: undefined FUN_00543838(void)
// callers(0): 
// callees(4): 00540600 FUN_00540600; 00540808 FUN_00540808; 00541ac0 FUN_00541ac0; 005c5ad0 libc::memcpy

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
  undefined1 auStack_70 [32];
  
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
      libc::memcpy(__dest,__src,__n);
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



//==== 00543b9c  ns=Global  size=0x4a4
// sig: undefined FUN_00543b9c(void)
// callers(1): 0053c114 FUN_0053c114
// callees(2): 00540808 FUN_00540808; 0054ee38 FUN_0054ee38

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



//==== 00544040  ns=Global  size=0x158
// sig: undefined FUN_00544040(void)
// callers(1): 0058ac48 FUN_0058ac48
// callees(3): 00540808 FUN_00540808; 00551ad4 FUN_00551ad4; 005c5ad0 libc::memcpy

undefined4 FUN_00544040(int param_1,int *param_2,int param_3,undefined4 param_4)

{
  ushort uVar1;
  void *__src;
  undefined4 uVar2;
  undefined1 local_30 [24];
  
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
    libc::memcpy(*(void **)(param_1 + 0x410),__src,(uint)uVar1);
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



//==== 00544198  ns=Global  size=0x314
// sig: undefined FUN_00544198(void)
// callers(1): 0053c308 FUN_0053c308
// callees(3): 00540600 FUN_00540600; 00540808 FUN_00540808; 0055af1c FUN_0055af1c

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
  undefined1 auStack_90 [32];
  int local_70;
  int local_6c;
  undefined1 auStack_68 [32];
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



//==== 005444ac  ns=Global  size=0x50
// sig: undefined FUN_005444ac(void)
// callers(1): 0053e2a4 FUN_0053e2a4
// callees(1): 005cccec libc::strcpy

undefined8 FUN_005444ac(int param_1,int param_2)

{
  undefined8 uVar1;
  
  uVar1 = 3;
  if (param_2 != 0) {
    if (param_1 != 0) {
      libc::strcpy(param_1,param_2 + 0x428,0x14);
      uVar1 = 0;
    }
  }
  return uVar1;
}



//==== 005444fc  ns=Global  size=0x4c
// sig: undefined FUN_005444fc(void)
// callers(1): 00549200 FUN_00549200
// callees(1): 0054ef70 FUN_0054ef70

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



//==== 00544548  ns=Global  size=0x1a4
// sig: undefined FUN_00544548(void)
// callers(2): 0053ecc4 FUN_0053ecc4; 00549200 FUN_00549200
// callees(2): 00540808 FUN_00540808; 0054ef70 FUN_0054ef70

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



//==== 005446ec  ns=Global  size=0x190
// sig: undefined FUN_005446ec(void)
// callers(2): 0054487c FUN_0054487c; 00544a60 FUN_00544a60
// callees(5): 00540808 FUN_00540808; 0054ef20 FUN_0054ef20; 005502bc FUN_005502bc; 005cccec libc::strcpy; 005d0140 libc::memset

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
      libc::memset(uVar4,0,0x10c);
      libc::strcpy(uVar4,ZEXT48(PTR_DAT_0071b150) + 0x580,0x100);
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



//==== 0054487c  ns=Global  size=0x104
// sig: undefined FUN_0054487c(void)
// callers(1): 0053e008 FUN_0053e008
// callees(6): 00540808 FUN_00540808; 005446ec FUN_005446ec; 0054ef70 FUN_0054ef70; 005502bc FUN_005502bc; 005cccec libc::strcpy; 005d0140 libc::memset

int FUN_0054487c(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  undefined1 auStack_130 [256];
  undefined1 auStack_30 [16];
  
  iVar2 = 3;
  if ((param_1 != 0) && (*(int *)(param_1 + 0x110) != 0)) {
    if (*(char *)(param_1 + 0x100) == '\0') {
      libc::strcpy(PTR_DAT_0071b150 + 0x580,param_1,0x100);
      iVar2 = FUN_005446ec(0);
    }
    else {
      libc::memset(auStack_130,0,0x10c);
      libc::strcpy(auStack_130,param_1,0x100);
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



//==== 00544980  ns=Global  size=0xe0
// sig: undefined FUN_00544980(void)
// callers(1): 00544a60 FUN_00544a60
// callees(3): 00540808 FUN_00540808; 0054eecc FUN_0054eecc; 005d0140 libc::memset

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
  libc::memset(PTR_DAT_0071b150 + 0x580,0,0x100);
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



//==== 00544a60  ns=Global  size=0x74
// sig: undefined FUN_00544a60(void)
// callers(0): 
// callees(2): 005446ec FUN_005446ec; 00544980 FUN_00544980

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



//==== 00544ad4  ns=Global  size=0x53c
// sig: undefined FUN_00544ad4(void)
// callers(2): 0054a6e8 FUN_0054a6e8; 0054a8f8 FUN_0054a8f8
// callees(4): 0054058c FUN_0054058c; 0054170c FUN_0054170c; 005433e8 FUN_005433e8; 0054eecc FUN_0054eecc

int FUN_00544ad4(int param_1,uint param_2)

{
  undefined *puVar1;
  int iVar2;
  int iVar3;
  undefined8 *puVar4;
  undefined1 local_80 [8];
  undefined1 auStack_78 [16];
  undefined1 local_68 [16];
  undefined1 local_58 [24];
  
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



//==== 00545010  ns=Global  size=0xc8
// sig: undefined FUN_00545010(void)
// callers(1): 0053e778 FUN_0053e778
// callees(2): 0054170c FUN_0054170c; 0054eecc FUN_0054eecc

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



//==== 005450d8  ns=Global  size=0x3c
// sig: undefined FUN_005450d8(void)
// callers(81): 0053c804 FUN_0053c804; 0053c8c8 FUN_0053c8c8; 0053c984 FUN_0053c984; 0053ca3c FUN_0053ca3c; 0053cad4 FUN_0053cad4; 0053cb70 FUN_0053cb70; 0053cc40 FUN_0053cc40; 0053cd10 FUN_0053cd10; 0053cdf4 FUN_0053cdf4; 0053ced8 FUN_0053ced8; 0053cf94 FUN_0053cf94; 0053d050 FUN_0053d050; 0053d10c FUN_0053d10c; 0053d1f0 FUN_0053d1f0; 0053d2c0 FUN_0053d2c0; 0053d390 FUN_0053d390; 0053d444 FUN_0053d444; 0053d508 FUN_0053d508; 0053d608 FUN_0053d608; 0053d6e4 FUN_0053d6e4; 0053d7a8 FUN_0053d7a8; 0053d85c FUN_0053d85c; 0053d930 FUN_0053d930; 0053da5c FUN_0053da5c; 0053db40 FUN_0053db40
// callees(1): 00552c24 FUN_00552c24

undefined4 FUN_005450d8(void)

{
  undefined4 uVar1;
  
  uVar1 = FUN_00552c24(*(int *)PTR_PTR_0071b104 + 0x1c,0);
  return uVar1;
}



//==== 00545114  ns=Global  size=0x54
// sig: undefined FUN_00545114(void)
// callers(81): 0053c804 FUN_0053c804; 0053c8c8 FUN_0053c8c8; 0053c984 FUN_0053c984; 0053ca3c FUN_0053ca3c; 0053cad4 FUN_0053cad4; 0053cb70 FUN_0053cb70; 0053cc40 FUN_0053cc40; 0053cd10 FUN_0053cd10; 0053cdf4 FUN_0053cdf4; 0053ced8 FUN_0053ced8; 0053cf94 FUN_0053cf94; 0053d050 FUN_0053d050; 0053d10c FUN_0053d10c; 0053d1f0 FUN_0053d1f0; 0053d2c0 FUN_0053d2c0; 0053d390 FUN_0053d390; 0053d444 FUN_0053d444; 0053d508 FUN_0053d508; 0053d608 FUN_0053d608; 0053d6e4 FUN_0053d6e4; 0053d7a8 FUN_0053d7a8; 0053d85c FUN_0053d85c; 0053d930 FUN_0053d930; 0053da5c FUN_0053da5c; 0053db40 FUN_0053db40
// callees(1): 00552e60 FUN_00552e60

undefined4 FUN_00545114(void)

{
  undefined4 uVar1;
  
  uVar1 = 5;
  if (*(int *)(*(int *)PTR_PTR_0071b104 + 0x18) != 0) {
    uVar1 = FUN_00552e60(*(int *)PTR_PTR_0071b104 + 0x1c,0);
  }
  return uVar1;
}



//==== 00545168  ns=Global  size=0x74
// sig: undefined FUN_00545168(void)
// callers(1): 00546ff0 FUN_00546ff0
// callees(1): 0054edb0 FUN_0054edb0

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



//==== 005451dc  ns=Global  size=0x190
// sig: undefined FUN_005451dc(void)
// callers(2): 00545b74 FUN_00545b74; 00547c38 FUN_00547c38
// callees(4): 00540808 FUN_00540808; 0054eecc FUN_0054eecc; 0054fef4 FUN_0054fef4; 005d0140 libc::memset

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
  undefined1 auStack_70 [24];
  
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
  libc::memset(pcVar5,0,0x2000);
  return 0;
}



//==== 0054536c  ns=Global  size=0x2c
// sig: undefined FUN_0054536c(void)
// callers(5): 0053e5c8 FUN_0053e5c8; 00546ff0 FUN_00546ff0; 00549200 FUN_00549200; 0054b7dc FUN_0054b7dc; 00578634 FUN_00578634
// callees(1): 00556f3c thunk_FUN_00556eb4

undefined4 FUN_0054536c(void)

{
  undefined4 local_10 [4];
  
  thunk_FUN_00556eb4(local_10);
  return local_10[0];
}



//==== 00545398  ns=Global  size=0x70
// sig: undefined FUN_00545398(void)
// callers(2): 0053e574 FUN_0053e574; 0054b7dc FUN_0054b7dc
// callees(1): 005576c4 FUN_005576c4

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



//==== 00545408  ns=Global  size=0x274
// sig: undefined FUN_00545408(void)
// callers(2): 0054589c FUN_0054589c; 005474b4 FUN_005474b4
// callees(3): 00540754 FUN_00540754; 00540808 FUN_00540808; 00550d54 FUN_00550d54

int FUN_00545408(int param_1)

{
  undefined4 *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  int iVar5;
  int iVar6;
  longlong lVar4;
  undefined1 local_30 [4];
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



//==== 0054567c  ns=Global  size=0x108
// sig: undefined FUN_0054567c(void)
// callers(2): 0054589c FUN_0054589c; 005474b4 FUN_005474b4
// callees(3): 00540808 FUN_00540808; 0054eecc FUN_0054eecc; 0054f210 FUN_0054f210

ulonglong FUN_0054567c(void)

{
  undefined *puVar1;
  undefined4 uVar3;
  uint uVar4;
  ulonglong uVar2;
  byte *pbVar5;
  undefined1 auStack_58 [24];
  
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



//==== 0054589c  ns=Global  size=0x54
// sig: undefined FUN_0054589c(void)
// callers(1): 0053e184 FUN_0053e184
// callees(2): 00545408 FUN_00545408; 0054567c FUN_0054567c

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



//==== 005458f0  ns=Global  size=0xf8
// sig: undefined FUN_005458f0(void)
// callers(0): 
// callees(3): 0054edf0 FUN_0054edf0; 0054ee38 FUN_0054ee38; 00556c4c thunk_FUN_00556bb8

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



//==== 005459e8  ns=Global  size=0x18c
// sig: undefined FUN_005459e8(void)
// callers(4): 00551694 FUN_00551694; 00551830 FUN_00551830; 00559a4c FUN_00559a4c; 0055a634 FUN_0055a634
// callees(2): 00540808 FUN_00540808; 0054edf0 FUN_0054edf0

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



//==== 00545b74  ns=Global  size=0x1d0
// sig: undefined FUN_00545b74(void)
// callers(1): 0053e9bc FUN_0053e9bc
// callees(9): 00540808 FUN_00540808; 005451dc FUN_005451dc; 0054edf0 FUN_0054edf0; 0054ee38 FUN_0054ee38; 0054ef64 FUN_0054ef64; 0054f760 FUN_0054f760; 005501f8 FUN_005501f8; 00556a58 FUN_00556a58; 005d0140 libc::memset

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
  undefined1 local_3c [12];
  
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
        libc::memset(pcVar8,0,0x2000);
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



//==== 00545d44  ns=Global  size=0x384
// sig: undefined FUN_00545d44(void)
// callers(1): 005460c8 FUN_005460c8
// callees(6): 0053fe40 FUN_0053fe40; 00540808 FUN_00540808; 005436b8 FUN_005436b8; 005533d4 FUN_005533d4; 005534b0 FUN_005534b0; 00553518 FUN_00553518

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
  undefined1 local_d4 [12];
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



//==== 005460c8  ns=Global  size=0x128
// sig: undefined FUN_005460c8(void)
// callers(1): 0053ec10 FUN_0053ec10
// callees(2): 00541740 FUN_00541740; 00545d44 FUN_00545d44

/* WARNING: Removing unreachable block (ram,0x005461d0) */

undefined4 FUN_005460c8(int *param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  undefined1 local_30 [24];
  
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



//==== 005461f0  ns=Global  size=0xa0
// sig: undefined FUN_005461f0(void)
// callers(0): 
// callees(2): 0053c6dc FUN_0053c6dc; 005d0140 libc::memset

undefined8 FUN_005461f0(undefined4 *param_1)

{
  undefined8 uVar1;
  
  uVar1 = 3;
  if (param_1 != (undefined4 *)0x0) {
    libc::memset(param_1,0,0xcc);
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



//==== 00546290  ns=Global  size=0x108
// sig: undefined FUN_00546290(void)
// callers(2): 0057fcb0 CMediusManager::ConnectToMAS; 00583ca4 CMediusManager::ConnectToMLS
// callees(3): 0053c6dc FUN_0053c6dc; 00552968 FUN_00552968; 005d0140 libc::memset

undefined8 FUN_00546290(undefined4 *param_1)

{
  int iVar1;
  undefined *puVar2;
  undefined8 uVar3;
  uint uVar4;
  
  uVar3 = 3;
  if (param_1 != (undefined4 *)0x0) {
    libc::memset(param_1,0,0x178);
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



//==== 00546398  ns=Global  size=0x574
// sig: undefined FUN_00546398(void)
// callers(1): 0053f7e4 FUN_0053f7e4
// callees(14): 0053fbc0 FUN_0053fbc0; 005404f8 FUN_005404f8; 00540808 FUN_00540808; 005429b4 FUN_005429b4; 00543120 FUN_00543120; 0054b054 FUN_0054b054; 0054bab0 FUN_0054bab0; 00552944 FUN_00552944; 00552968 FUN_00552968; 00555c7c FUN_00555c7c; 00556d54 FUN_00556d54; 00556f40 thunk_FUN_00556a58; 005c5ad0 libc::memcpy; 005d0140 libc::memset

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
        libc::memcpy((void *)(iVar1 + 0x3c),param_1 + 3,0x48);
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
        libc::memset(*(int *)PTR_PTR_0071b178 + 0x208,0,0x80);
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
        libc::memset(puVar10,0,0x2000);
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



//==== 0054690c  ns=Global  size=0x50
// sig: undefined FUN_0054690c(void)
// callers(3): 0054695c FUN_0054695c; 005469c8 FUN_005469c8; 00546b20 FUN_00546b20
// callees(1): 005558c4 FUN_005558c4

void FUN_0054690c(undefined8 param_1,int param_2,undefined4 param_3)

{
  undefined4 uVar1;
  
  uVar1 = FUN_005558c4(param_2,param_1,param_3);
  if (param_2 != 0) {
    *(undefined4 *)(param_2 + 0x4ac) = uVar1;
  }
  return;
}



//==== 0054695c  ns=Global  size=0x6c
// sig: undefined FUN_0054695c(void)
// callers(0): 
// callees(2): 00541fb8 FUN_00541fb8; 0054690c FUN_0054690c

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



//==== 005469c8  ns=Global  size=0x158
// sig: undefined FUN_005469c8(void)
// callers(0): 
// callees(2): 00541fb8 FUN_00541fb8; 0054690c FUN_0054690c

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



//==== 00546b20  ns=Global  size=0xbc
// sig: undefined FUN_00546b20(void)
// callers(0): 
// callees(3): 00541fb8 FUN_00541fb8; 0054690c FUN_0054690c; 0054edb0 FUN_0054edb0

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



//==== 00546bdc  ns=Global  size=0x1ac
// sig: undefined FUN_00546bdc(void)
// callers(21): 0053de1c FUN_0053de1c; 00546d88 FUN_00546d88; 00546ff0 FUN_00546ff0; 0054a110 FUN_0054a110; 0054a248 FUN_0054a248; 0054b368 FUN_0054b368; 0054b7dc FUN_0054b7dc; 00575c80 FUN_00575c80; 00575ff8 FUN_00575ff8; 00576178 FUN_00576178; 005763fc FUN_005763fc; 00576994 FUN_00576994; 0057786c FUN_0057786c; 00578634 FUN_00578634; 00579370 FUN_00579370; 005798e8 FUN_005798e8; 0057a288 FUN_0057a288; 0057ae68 FUN_0057ae68; 0057b218 FUN_0057b218; 0057ce10 FUN_0057ce10; 00581d58 FUN_00581d58
// callees(2): 00540808 FUN_00540808; 00554fd4 FUN_00554fd4

int FUN_00546bdc(int *param_1,int *param_2,undefined4 param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined1 local_30 [24];
  
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



//==== 00546d88  ns=Global  size=0x268
// sig: undefined FUN_00546d88(void)
// callers(0): 
// callees(5): 00540808 FUN_00540808; 00546bdc FUN_00546bdc; 00551f78 FUN_00551f78; 005c5ad0 libc::memcpy; 005d0140 libc::memset

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
      libc::memcpy((void *)(iVar9 + 2),param_2,(size_t)param_3);
      uVar7 = uVar6 - 0x9c & 0xffffffff;
      libc::memset(uVar7,0,0x4c);
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



//==== 00546ff0  ns=Global  size=0x240
// sig: undefined FUN_00546ff0(void)
// callers(1): 0053ea94 FUN_0053ea94
// callees(5): 0054170c FUN_0054170c; 00545168 FUN_00545168; 0054536c FUN_0054536c; 00546bdc FUN_00546bdc; 005d0140 libc::memset

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
  undefined1 auStack_d8 [48];
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
          libc::memset(&local_a8,0,0x4c);
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



//==== 00547230  ns=Global  size=0x74
// sig: undefined FUN_00547230(void)
// callers(1): 0053f148 FUN_0053f148
// callees(2): 005519cc FUN_005519cc; 005519e0 FUN_005519e0

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



//==== 005472a4  ns=Global  size=0x34
// sig: undefined FUN_005472a4(void)
// callers(13): 005472d8 FUN_005472d8; 00547c38 FUN_00547c38; 005757c8 FUN_005757c8; 00576178 FUN_00576178; 00577e18 FUN_00577e18; 00578634 FUN_00578634; 00578cdc FUN_00578cdc; 00578f44 FUN_00578f44; 0057a9d4 FUN_0057a9d4; 0057ab08 FUN_0057ab08; 0057b678 FUN_0057b678; 0057cfec FUN_0057cfec; 0057d014 FUN_0057d014
// callees(1): 005519f0 FUN_005519f0

void FUN_005472a4(int *param_1)

{
  if (*param_1 != 0) {
    FUN_005519f0();
  }
  return;
}



//==== 005472d8  ns=Global  size=0x1dc
// sig: undefined FUN_005472d8(void)
// callers(3): 005474b4 FUN_005474b4; 005478bc FUN_005478bc; 00547c38 FUN_00547c38
// callees(1): 005472a4 FUN_005472a4

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



//==== 005474b4  ns=Global  size=0x408
// sig: undefined FUN_005474b4(void)
// callers(2): 0053e214 FUN_0053e214; 00549200 FUN_00549200
// callees(12): 00540808 FUN_00540808; 00542970 FUN_00542970; 00545408 FUN_00545408; 0054567c FUN_0054567c; 005472d8 FUN_005472d8; 0054ca88 FUN_0054ca88; 0054eecc FUN_0054eecc; 00554ce4 FUN_00554ce4; 00556c4c thunk_FUN_00556bb8; 00556f3c thunk_FUN_00556eb4; 005576c4 FUN_005576c4; 00558ba0 FUN_00558ba0

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
  undefined1 auStack_b0 [4];
  uint local_ac;
  undefined1 local_a8 [8];
  undefined1 auStack_a0 [16];
  undefined1 local_90 [64];
  
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



//==== 005478bc  ns=Global  size=0x37c
// sig: undefined FUN_005478bc(void)
// callers(1): 0053e0e4 FUN_0053e0e4
// callees(3): 005472d8 FUN_005472d8; 00556f40 thunk_FUN_00556a58; 00557b94 FUN_00557b94

undefined8 FUN_005478bc(int *param_1)

{
  int iVar1;
  undefined *puVar2;
  int iVar3;
  undefined1 local_40 [32];
  
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



//==== 00547c38  ns=Global  size=0x288
// sig: undefined FUN_00547c38(void)
// callers(1): 0053f6bc FUN_0053f6bc
// callees(5): 005429b4 FUN_005429b4; 005451dc FUN_005451dc; 005472a4 FUN_005472a4; 005472d8 FUN_005472d8; 00554dbc FUN_00554dbc

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



//==== 00547ec0  ns=Global  size=0x38
// sig: undefined FUN_00547ec0(void)
// callers(9): 00547ef8 FUN_00547ef8; 00548aa4 FUN_00548aa4; 00577a90 FUN_00577a90; 00578cdc FUN_00578cdc; 00578f44 FUN_00578f44; 0057ab08 FUN_0057ab08; 0057b678 FUN_0057b678; 0057d158 FUN_0057d158; 0057d1dc FUN_0057d1dc
// callees(1): 00551de8 FUN_00551de8

undefined4 FUN_00547ec0(undefined8 param_1)

{
  undefined1 local_10 [16];
  
  FUN_00551de8(local_10,param_1);
  return 0;
}



//==== 00547ef8  ns=Global  size=0xd8
// sig: undefined FUN_00547ef8(void)
// callers(4): 00547fd0 FUN_00547fd0; 0054853c FUN_0054853c; 00548b58 FUN_00548b58; 0054a248 FUN_0054a248
// callees(1): 00547ec0 FUN_00547ec0

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



//==== 00547fd0  ns=Global  size=0x56c
// sig: undefined FUN_00547fd0(void)
// callers(0): 
// callees(3): 00540654 FUN_00540654; 005412c4 FUN_005412c4; 00547ef8 FUN_00547ef8

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
  undefined1 local_80 [4];
  undefined1 local_7c [28];
  undefined1 local_60 [16];
  undefined1 local_50 [32];
  
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



//==== 0054853c  ns=Global  size=0x2b4
// sig: undefined FUN_0054853c(void)
// callers(2): 005487f0 FUN_005487f0; 00548b58 FUN_00548b58
// callees(1): 00547ef8 FUN_00547ef8

/* WARNING: Removing unreachable block (ram,0x005486dc) */
/* WARNING: Removing unreachable block (ram,0x00548744) */

void FUN_0054853c(int param_1,uint param_2,int param_3)

{
  undefined *puVar1;
  int iVar2;
  undefined1 local_70 [4];
  undefined1 local_6c [16];
  undefined1 local_5c [36];
  
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



//==== 005487f0  ns=Global  size=0x2b4
// sig: undefined FUN_005487f0(void)
// callers(0): 
// callees(2): 00542754 FUN_00542754; 0054853c FUN_0054853c

void FUN_005487f0(short param_1,int param_2,int param_3,undefined4 param_4,int param_5)

{
  bool bVar1;
  ulonglong uVar2;
  int iVar3;
  undefined4 uVar4;
  undefined8 uVar5;
  int *piVar6;
  undefined1 local_50 [24];
  
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



//==== 00548aa4  ns=Global  size=0xb4
// sig: undefined FUN_00548aa4(void)
// callers(2): 00548b58 FUN_00548b58; 00549200 FUN_00549200
// callees(1): 00547ec0 FUN_00547ec0

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



//==== 00548b58  ns=Global  size=0x6a8
// sig: undefined FUN_00548b58(void)
// callers(2): 0053ed64 FUN_0053ed64; 0053ee5c FUN_0053ee5c
// callees(8): 005428b8 FUN_005428b8; 00542970 FUN_00542970; 00542e94 FUN_00542e94; 00547ef8 FUN_00547ef8; 0054853c FUN_0054853c; 00548aa4 FUN_00548aa4; 00557384 FUN_00557384; 00557df0 FUN_00557df0

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
  undefined1 local_7c [52];
  
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



//==== 00549200  ns=Global  size=0xe88
// sig: undefined FUN_00549200(void)
// callers(2): 0053ef58 FUN_0053ef58; 0053f050 FUN_0053f050
// callees(13): 0053fe40 FUN_0053fe40; 00540808 FUN_00540808; 005428b8 FUN_005428b8; 00542970 FUN_00542970; 00542e94 FUN_00542e94; 005444fc FUN_005444fc; 00544548 FUN_00544548; 0054536c FUN_0054536c; 005474b4 FUN_005474b4; 00548aa4 FUN_00548aa4; 00557384 FUN_00557384; 00557df0 FUN_00557df0; 005d0140 libc::memset

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
  undefined1 local_210 [2];
  undefined1 local_20e [2];
  undefined1 local_20c [4];
  undefined1 local_208 [60];
  undefined1 local_1cc [4];
  undefined1 local_1c8 [88];
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
        libc::memset(&uStack_170,0,0x100);
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



//==== 0054a088  ns=Global  size=0x88
// sig: undefined FUN_0054a088(void)
// callers(1): 0053f458 FUN_0053f458
// callees(1): 005506dc FUN_005506dc

undefined8 FUN_0054a088(undefined4 *param_1)

{
  undefined8 uVar1;
  undefined1 auStack_60 [16];
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



//==== 0054a110  ns=Global  size=0x138
// sig: undefined FUN_0054a110(void)
// callers(6): 0054a248 FUN_0054a248; 00576178 FUN_00576178; 00579f94 FUN_00579f94; 0057a1c4 FUN_0057a1c4; 0057a5ec FUN_0057a5ec; 0057a6dc FUN_0057a6dc
// callees(3): 00541a44 FUN_00541a44; 00546bdc FUN_00546bdc; 0055b234 FUN_0055b234

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
  undefined1 auStack_b0 [48];
  int local_80;
  undefined1 local_7c;
  undefined4 local_78;
  int local_74;
  undefined1 auStack_70 [16];
  undefined1 auStack_60 [16];
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
      auStack_70 = (undefined1  [16])0x0;
      uStack_40 = 0;
      local_be = (undefined2)*(undefined4 *)(iVar1 + 0x10);
      auStack_60 = (undefined1  [16])0x0;
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



//==== 0054a248  ns=Global  size=0x4a0
// sig: undefined FUN_0054a248(void)
// callers(3): 0054a6e8 FUN_0054a6e8; 0054a8f8 FUN_0054a8f8; 0054b6b4 FUN_0054b6b4
// callees(8): 0054170c FUN_0054170c; 00541a44 FUN_00541a44; 00546bdc FUN_00546bdc; 00547ef8 FUN_00547ef8; 0054a110 FUN_0054a110; 0054eecc FUN_0054eecc; 00550edc FUN_00550edc; 005d0140 libc::memset

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
  undefined1 local_15c [268];
  
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



//==== 0054a6e8  ns=Global  size=0x210
// sig: undefined FUN_0054a6e8(void)
// callers(0): 
// callees(2): 00544ad4 FUN_00544ad4; 0054a248 FUN_0054a248

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



//==== 0054a8f8  ns=Global  size=0xf0
// sig: undefined FUN_0054a8f8(void)
// callers(0): 
// callees(3): 00544ad4 FUN_00544ad4; 0054a248 FUN_0054a248; 0054edf0 FUN_0054edf0

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



//==== 0054a9e8  ns=Global  size=0x5a8
// sig: undefined FUN_0054a9e8(void)
// callers(5): 0054af90 FUN_0054af90; 00580ca0 FUN_00580ca0; 00580e18 FUN_00580e18; 0058cab0 FUN_0058cab0; 0058d010 FUN_0058d010
// callees(2): 00540808 FUN_00540808; 0054e8dc FUN_0054e8dc

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
  undefined1 local_70 [4];
  undefined1 auStack_6c [2];
  ushort local_6a;
  undefined1 local_68 [4];
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



//==== 0054af90  ns=Global  size=0x78
// sig: undefined FUN_0054af90(void)
// callers(2): 0053e840 FUN_0053e840; 0055983c FUN_0055983c
// callees(1): 0054a9e8 FUN_0054a9e8

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



//==== 0054b008  ns=Global  size=0x8
// sig: undefined FUN_0054b008(void)
// callers(0): 
// callees(0): 

undefined8 FUN_0054b008(void)

{
  return 4;
}



//==== 0054b010  ns=Global  size=0x8
// sig: undefined FUN_0054b010(void)
// callers(0): 
// callees(0): 

undefined8 FUN_0054b010(void)

{
  return 0xc;
}



//==== 0054b018  ns=Global  size=0x8
// sig: undefined FUN_0054b018(void)
// callers(0): 
// callees(0): 

undefined8 FUN_0054b018(void)

{
  return 0xffffffffffffffff;
}



//==== 0054b020  ns=Global  size=0x34
// sig: undefined FUN_0054b020(void)
// callers(1): 0054b054 FUN_0054b054
// callees(1): 00554770 FUN_00554770

void FUN_0054b020(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_00554770(param_1,0,param_2,1,param_3);
  return;
}



//==== 0054b054  ns=Global  size=0x224
// sig: undefined FUN_0054b054(void)
// callers(1): 00546398 FUN_00546398
// callees(1): 0054b020 FUN_0054b020

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



//==== 0054b278  ns=Global  size=0xf0
// sig: undefined FUN_0054b278(void)
// callers(0): 
// callees(1): 00551f9c FUN_00551f9c

undefined2 FUN_0054b278(int param_1,undefined8 param_2,undefined4 param_3,int param_4)

{
  undefined1 local_50 [4];
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



//==== 0054b368  ns=Global  size=0x34c
// sig: undefined FUN_0054b368(void)
// callers(0): 
// callees(4): 0054170c FUN_0054170c; 00541a44 FUN_00541a44; 00546bdc FUN_00546bdc; 0054eecc FUN_0054eecc

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
  undefined1 auStack_f8 [16];
  int local_e8;
  uint local_e4;
  undefined1 *local_e0;
  undefined4 local_dc;
  undefined4 local_d8;
  undefined4 local_d4;
  undefined1 auStack_d0 [48];
  int local_a0;
  undefined1 local_9c;
  undefined4 local_98;
  uint local_94;
  undefined1 auStack_90 [16];
  undefined1 auStack_80 [16];
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
          auStack_80 = (undefined1  [16])0x0;
          uStack_60 = 0;
          auStack_90 = (undefined1  [16])0x0;
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



//==== 0054b6b4  ns=Global  size=0x128
// sig: undefined FUN_0054b6b4(void)
// callers(0): 
// callees(1): 0054a248 FUN_0054a248

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



//==== 0054b7dc  ns=Global  size=0x28c
// sig: undefined FUN_0054b7dc(void)
// callers(0): 
// callees(6): 0054170c FUN_0054170c; 0054536c FUN_0054536c; 00545398 FUN_00545398; 00546bdc FUN_00546bdc; 0054eecc FUN_0054eecc; 005d0140 libc::memset

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
  undefined1 auStack_c8 [16];
  undefined1 auStack_b8 [48];
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
      libc::memset(&local_88,0,0x4c);
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



//==== 0054ba68  ns=Global  size=0x48
// sig: undefined FUN_0054ba68(void)
// callers(0): 
// callees(1): 005cccec libc::strcpy

undefined4 FUN_0054ba68(int param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4)

{
  undefined4 uVar1;
  
  uVar1 = 0xffffffff;
  if (param_1 != 0) {
    libc::strcpy(param_1 + 0x428,param_4,0x14);
    uVar1 = 0x14;
  }
  return uVar1;
}



//==== 0054bab0  ns=Global  size=0x14
// sig: undefined FUN_0054bab0(void)
// callers(1): 00546398 FUN_00546398
// callees(0): 

undefined8 FUN_0054bab0(void)

{
  *(undefined4 *)(PTR_DAT_0071b22c + 0x58) = 0;
  return 0;
}



//==== 0054bac4  ns=Global  size=0x10
// sig: undefined FUN_0054bac4(void)
// callers(0): 
// callees(0): 

void FUN_0054bac4(undefined4 param_1,undefined4 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR_DAT_0071b22c;
  *(undefined4 *)(PTR_DAT_0071b22c + 0x40) = param_2;
  *(undefined4 *)(puVar1 + 0x3c) = param_1;
  return;
}



//==== 0054bad4  ns=Global  size=0x158
// sig: undefined FUN_0054bad4(void)
// callers(0): 
// callees(0): 

void FUN_0054bad4(void)

{
  undefined *puVar1;
  uint in_r6;
  undefined1 local_34 [20];
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



//==== 0054bc2c  ns=Global  size=0x1b8
// sig: undefined FUN_0054bc2c(void)
// callers(1): 0054ca88 FUN_0054ca88
// callees(2): 00540808 FUN_00540808; 0054170c FUN_0054170c

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



//==== 0054bde4  ns=Global  size=0xd0
// sig: undefined FUN_0054bde4(void)
// callers(1): 0054c800 FUN_0054c800
// callees(1): 00540808 FUN_00540808

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



//==== 0054beb4  ns=Global  size=0xcc
// sig: undefined FUN_0054beb4(void)
// callers(0): 
// callees(1): 00540808 FUN_00540808

ulonglong FUN_0054beb4(undefined8 param_1,undefined2 param_2)

{
  undefined4 uVar2;
  ulonglong uVar1;
  undefined1 local_50 [12];
  undefined1 local_44 [44];
  
  uVar2 = (*(code *)**(undefined4 **)(*(int *)PTR_DAT_0071b234 + 0x98))(param_1,param_2,local_50);
  uVar1 = FUN_00540808(uVar2);
  if (uVar1 == 0) {
    (*(code *)**(undefined4 **)(PTR_DAT_0071b22c + 0x3c))(local_44);
    uVar1 = 0;
  }
  return uVar1 & 0xffffffff;
}



//==== 0054bf80  ns=Global  size=0xc8
// sig: undefined FUN_0054bf80(void)
// callers(0): 
// callees(1): 00540808 FUN_00540808

ulonglong FUN_0054bf80(undefined8 param_1,undefined2 param_2)

{
  undefined4 uVar2;
  ulonglong uVar1;
  undefined1 local_40 [4];
  undefined1 local_3c [36];
  
  uVar2 = (*(code *)**(undefined4 **)(*(int *)PTR_DAT_0071b234 + 0x94))(param_1,param_2,local_40);
  uVar1 = FUN_00540808(uVar2);
  if (uVar1 == 0) {
    (*(code *)**(undefined4 **)(PTR_DAT_0071b22c + 0x44))(local_3c);
    uVar1 = 0;
  }
  return uVar1 & 0xffffffff;
}



//==== 0054c048  ns=Global  size=0x1e0
// sig: undefined FUN_0054c048(void)
// callers(0): 
// callees(1): 00540808 FUN_00540808
// strings: 0071b240: '?333' (raw)

ulonglong FUN_0054c048(undefined8 param_1,undefined2 param_2)

{
  undefined *puVar1;
  undefined4 uVar3;
  ulonglong uVar2;
  ushort local_60 [2];
  undefined1 auStack_5c [12];
  undefined1 local_50 [48];
  
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



//==== 0054c228  ns=Global  size=0x5d8
// sig: undefined FUN_0054c228(void)
// callers(0): 
// callees(3): 00540808 FUN_00540808; 00541390 FUN_00541390; 0054170c FUN_0054170c

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
  undefined1 local_9c [12];
  undefined1 local_90 [64];
  
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



//==== 0054c800  ns=Global  size=0x288
// sig: undefined FUN_0054c800(void)
// callers(2): 0054ca88 FUN_0054ca88; 0054cc9c FUN_0054cc9c
// callees(4): 00540808 FUN_00540808; 00541390 FUN_00541390; 0054170c FUN_0054170c; 0054bde4 FUN_0054bde4

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
  undefined1 auStack_60 [16];
  
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



//==== 0054ca88  ns=Global  size=0x214
// sig: undefined FUN_0054ca88(void)
// callers(1): 005474b4 FUN_005474b4
// callees(4): 00540808 FUN_00540808; 0054bc2c FUN_0054bc2c; 0054c800 FUN_0054c800; 00556f3c thunk_FUN_00556eb4

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



//==== 0054cc9c  ns=Global  size=0x124
// sig: undefined FUN_0054cc9c(void)
// callers(0): 
// callees(5): 00540808 FUN_00540808; 0054c800 FUN_0054c800; 00556f3c thunk_FUN_00556eb4; 005c5ad0 libc::memcpy; 005d0140 libc::memset

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
    libc::memset(PTR_DAT_0071b22c,0,0x6c);
    libc::memcpy(__dest,param_1,0x58);
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



//==== 0054cdc0  ns=Global  size=0x70
// sig: undefined FUN_0054cdc0(void)
// callers(0): 
// callees(2): 0055b364 FUN_0055b364; 005d0140 libc::memset

undefined8 FUN_0054cdc0(int param_1)

{
  undefined8 uVar1;
  
  uVar1 = 3;
  if (param_1 != 0) {
    libc::memset(param_1,0,0x58);
    *(undefined4 *)(param_1 + 0x54) = 1;
    FUN_0055b364(param_1 + 8);
    uVar1 = 0;
  }
  return uVar1;
}



//==== 0054ce30  ns=Global  size=0x80
// sig: undefined FUN_0054ce30(void)
// callers(0): 
// callees(1): 0055b364 FUN_0055b364

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



//==== 0054ceb0  ns=Global  size=0x50
// sig: undefined FUN_0054ceb0(void)
// callers(1): 0053f170 FUN_0053f170
// callees(3): 00540808 FUN_00540808; 0054285c FUN_0054285c; 00554550 FUN_00554550

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



//==== 0054cf00  ns=Global  size=0x60
// sig: undefined FUN_0054cf00(void)
// callers(1): 0053f200 FUN_0053f200
// callees(3): 00540808 FUN_00540808; 0054285c FUN_0054285c; 005544b8 FUN_005544b8

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



//==== 0054cf60  ns=Global  size=0x38
// sig: undefined FUN_0054cf60(void)
// callers(1): 0053f2a0 FUN_0053f2a0
// callees(2): 00540808 FUN_00540808; 0055479c FUN_0055479c

undefined4 FUN_0054cf60(undefined8 param_1)

{
  undefined4 uVar1;
  
  uVar1 = FUN_0055479c(param_1,2);
  uVar1 = FUN_00540808(uVar1);
  return uVar1;
}



//==== 0054cf98  ns=Global  size=0x38
// sig: undefined FUN_0054cf98(void)
// callers(1): 0053f37c FUN_0053f37c
// callees(2): 00540808 FUN_00540808; 00554a50 FUN_00554a50

undefined4 FUN_0054cf98(undefined8 param_1)

{
  undefined4 uVar1;
  
  uVar1 = FUN_00554a50(param_1,2);
  uVar1 = FUN_00540808(uVar1);
  return uVar1;
}



//==== 0054cfd0  ns=Global  size=0x44
// sig: undefined FUN_0054cfd0(void)
// callers(0): 
// callees(0): 

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



//==== 0054d014  ns=Global  size=0x60
// sig: undefined FUN_0054d014(void)
// callers(1): 0054d0bc FUN_0054d0bc
// callees(1): 00558a74 FUN_00558a74

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



//==== 0054d074  ns=Global  size=0x48
// sig: undefined FUN_0054d074(void)
// callers(1): 0054d0bc FUN_0054d0bc
// callees(1): 00558b38 FUN_00558b38

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



//==== 0054d0bc  ns=Global  size=0x98
// sig: undefined FUN_0054d0bc(void)
// callers(0): 
// callees(2): 0054d014 FUN_0054d014; 0054d074 FUN_0054d074

void FUN_0054d0bc(int param_1)

{
  undefined4 local_820;
  undefined1 auStack_81c [2060];
  
  if ((param_1 != 0) && (*(int *)(param_1 + 0x478) != 0)) {
    FUN_0054d074(param_1,&local_820);
    FUN_0054d014(param_1,auStack_81c,&local_820);
    return;
  }
  return;
}



//==== 0054d154  ns=Global  size=0x48
// sig: undefined FUN_0054d154(void)
// callers(0): 
// callees(1): 00558a0c FUN_00558a0c

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



//==== 0054d19c  ns=Global  size=0x2a4
// sig: undefined FUN_0054d19c(void)
// callers(0): 
// callees(1): 005d0140 libc::memset

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
    libc::memset(local_e8,0,0x7f);
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
        libc::memset(local_e8,0,0x7f);
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



//==== 0054d440  ns=Global  size=0xcc
// sig: undefined FUN_0054d440(void)
// callers(0): 
// callees(2): 00557718 FUN_00557718; 00558968 FUN_00558968

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



//==== 0054d50c  ns=Global  size=0xb0
// sig: undefined FUN_0054d50c(void)
// callers(3): 0054d734 FUN_0054d734; 0054ddd8 FUN_0054ddd8; 0054e544 FUN_0054e544
// callees(1): 00540808 FUN_00540808

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



//==== 0054d734  ns=Global  size=0x318
// sig: undefined FUN_0054d734(void)
// callers(0): 
// callees(2): 0054d50c FUN_0054d50c; 005d0140 libc::memset

/* WARNING: Removing unreachable block (ram,0x0054da40) */
/* WARNING: Removing unreachable block (ram,0x0054d964) */

void FUN_0054d734(int param_1,undefined4 param_2,int param_3,uint param_4,undefined4 param_5,
                 int param_6,undefined2 param_7)

{
  bool bVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  undefined1 local_880 [4];
  undefined1 local_87c [8];
  undefined1 local_874 [12];
  undefined4 uStack_868;
  undefined1 local_860 [2040];
  
  if (*(int *)(param_1 + 0x478) != 0) {
    libc::memset(local_860,0,0x7f0);
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



//==== 0054da4c  ns=Global  size=0x38c
// sig: undefined FUN_0054da4c(void)
// callers(2): 0054ddd8 FUN_0054ddd8; 0054e544 FUN_0054e544
// callees(3): 00557e84 FUN_00557e84; 00558604 FUN_00558604; 00558ba0 FUN_00558ba0

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
  undefined1 local_90 [32];
  
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



//==== 0054ddd8  ns=Global  size=0x274
// sig: undefined FUN_0054ddd8(void)
// callers(2): 0054e04c FUN_0054e04c; 0054e2cc FUN_0054e2cc
// callees(6): 00540808 FUN_00540808; 00541390 FUN_00541390; 00541740 FUN_00541740; 0054d50c FUN_0054d50c; 0054da4c FUN_0054da4c; 005d0140 libc::memset

ulonglong FUN_0054ddd8(int param_1,ulonglong param_2,ulonglong param_3,int param_4,
                      undefined4 param_5)

{
  ulonglong uVar1;
  undefined4 uVar2;
  ulonglong uVar3;
  undefined1 local_840 [8];
  undefined1 local_838 [2];
  undefined2 uStack_836;
  int local_834;
  undefined1 auStack_830 [2040];
  
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
      libc::memset(auStack_830,0,0x7f0);
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



//==== 0054e04c  ns=Global  size=0x280
// sig: undefined FUN_0054e04c(void)
// callers(0): 
// callees(4): 0054ddd8 FUN_0054ddd8; 00557718 FUN_00557718; 00558d74 FUN_00558d74; 00558e9c FUN_00558e9c

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



//==== 0054e2cc  ns=Global  size=0x278
// sig: undefined FUN_0054e2cc(void)
// callers(0): 
// callees(4): 0054ddd8 FUN_0054ddd8; 00557718 FUN_00557718; 00558c7c FUN_00558c7c; 00558e18 FUN_00558e18

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



//==== 0054e544  ns=Global  size=0x1a8
// sig: undefined FUN_0054e544(void)
// callers(2): 0054e6ec FUN_0054e6ec; 0054e7d0 FUN_0054e7d0
// callees(5): 00540808 FUN_00540808; 00541390 FUN_00541390; 00541740 FUN_00541740; 0054d50c FUN_0054d50c; 0054da4c FUN_0054da4c

ulonglong FUN_0054e544(int param_1,undefined4 param_2,undefined4 param_3)

{
  ulonglong uVar1;
  undefined4 uVar2;
  undefined1 local_40 [4];
  int local_3c;
  undefined1 local_38 [2];
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



//==== 0054e6ec  ns=Global  size=0xe4
// sig: undefined FUN_0054e6ec(void)
// callers(0): 
// callees(4): 0054e544 FUN_0054e544; 00557718 FUN_00557718; 00558d74 FUN_00558d74; 00558e9c FUN_00558e9c

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



//==== 0054e7d0  ns=Global  size=0xf8
// sig: undefined FUN_0054e7d0(void)
// callers(0): 
// callees(4): 0054e544 FUN_0054e544; 00557718 FUN_00557718; 00558c7c FUN_00558c7c; 00558e18 FUN_00558e18

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



//==== 0054e8c8  ns=Global  size=0xc
// sig: undefined FUN_0054e8c8(void)
// callers(0): 
// callees(0): 
// strings: 0067d190: 'rt_comm ReleaseVersion 3.05.201103091800'

undefined4 FUN_0054e8c8(void)

{
  return *(undefined4 *)PTR_PTR_0071b25c;
}



//==== 0054e8d4  ns=Global  size=0x8
// sig: undefined FUN_0054e8d4(void)
// callers(0): 
// callees(0): 
// strings: 006600f8: '2011-03-09_18:00:00'

undefined * FUN_0054e8d4(void)

{
  return PTR_s_2011_03_09_18_00_00_0071b260;
}



//==== 0054e8dc  ns=Global  size=0x44
// sig: undefined FUN_0054e8dc(void)
// callers(3): 0054a9e8 FUN_0054a9e8; 005633b0 FUN_005633b0; 0056eccc FUN_0056eccc
// callees(0): 

undefined4 FUN_0054e8dc(void)

{
  undefined4 uVar1;
  
  uVar1 = (*(code *)**(undefined4 **)(*(int *)PTR_DAT_0071b264 + 0x34))();
  return uVar1;
}



//==== 0054e920  ns=Global  size=0x44
// sig: undefined FUN_0054e920(void)
// callers(2): 0055a634 FUN_0055a634; 005633b0 FUN_005633b0
// callees(0): 

undefined4 FUN_0054e920(void)

{
  undefined4 uVar1;
  
  uVar1 = (*(code *)**(undefined4 **)(*(int *)PTR_DAT_0071b264 + 0x38))();
  return uVar1;
}



//==== 0054e964  ns=Global  size=0x44
// sig: undefined FUN_0054e964(void)
// callers(0): 
// callees(0): 

undefined4 FUN_0054e964(void)

{
  undefined4 uVar1;
  
  uVar1 = (*(code *)**(undefined4 **)(*(int *)PTR_DAT_0071b264 + 0x3c))();
  return uVar1;
}



//==== 0054e9a8  ns=Global  size=0x44
// sig: undefined FUN_0054e9a8(void)
// callers(0): 
// callees(0): 

undefined4 FUN_0054e9a8(void)

{
  undefined4 uVar1;
  
  uVar1 = (*(code *)**(undefined4 **)(*(int *)PTR_DAT_0071b264 + 0x44))();
  return uVar1;
}



//==== 0054e9ec  ns=Global  size=0x48
// sig: undefined FUN_0054e9ec(void)
// callers(14): 0054ea34 FUN_0054ea34; 0054eaf4 FUN_0054eaf4; 0054eb50 FUN_0054eb50; 0054ebb0 FUN_0054ebb0; 0054ec60 FUN_0054ec60; 0054f128 FUN_0054f128; 0054f314 FUN_0054f314; 0054f464 FUN_0054f464; 0054f600 FUN_0054f600; 0054f7a0 FUN_0054f7a0; 0054f908 FUN_0054f908; 0054fa58 FUN_0054fa58; 0054fbd4 FUN_0054fbd4; 0054fe64 FUN_0054fe64
// callees(0): 

bool FUN_0054e9ec(int *param_1)

{
  bool bVar1;
  
  bVar1 = false;
  if (((param_1 != (int *)0x0) && (*param_1 != 0)) && (param_1[1] != 0)) {
    bVar1 = (uint)param_1[3] < 4;
  }
  return bVar1;
}



//==== 0054ea34  ns=Global  size=0xc0
// sig: undefined FUN_0054ea34(void)
// callers(6): 0054ec60 FUN_0054ec60; 0054f464 FUN_0054f464; 0054f908 FUN_0054f908; 0054fbd4 FUN_0054fbd4; 0056c3b8 FUN_0056c3b8; 005a7554 FUN_005a7554
// callees(1): 0054e9ec FUN_0054e9ec

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



//==== 0054eaf4  ns=Global  size=0x5c
// sig: undefined FUN_0054eaf4(void)
// callers(1): 0055d428 FUN_0055d428
// callees(1): 0054e9ec FUN_0054e9ec

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



//==== 0054eb50  ns=Global  size=0x60
// sig: undefined FUN_0054eb50(void)
// callers(2): 005612f4 FUN_005612f4; 005a5764 FUN_005a5764
// callees(1): 0054e9ec FUN_0054e9ec

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



//==== 0054ebb0  ns=Global  size=0xb0
// sig: undefined FUN_0054ebb0(void)
// callers(0): 
// callees(1): 0054e9ec FUN_0054e9ec

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



//==== 0054ec60  ns=Global  size=0xe4
// sig: undefined FUN_0054ec60(void)
// callers(0): 
// callees(2): 0054e9ec FUN_0054e9ec; 0054ea34 FUN_0054ea34

/* WARNING: Removing unreachable block (ram,0x0054ed30) */

int FUN_0054ec60(int param_1,undefined4 *param_2)

{
  int iVar1;
  int iVar2;
  undefined1 local_30 [16];
  
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



//==== 0054ed44  ns=Global  size=0x6c
// sig: undefined FUN_0054ed44(void)
// callers(1): 0054efdc FUN_0054efdc
// callees(0): 

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



//==== 0054edb0  ns=Global  size=0x40
// sig: undefined FUN_0054edb0(void)
// callers(12): 00545168 FUN_00545168; 00546b20 FUN_00546b20; 005501f8 FUN_005501f8; 0055d428 FUN_0055d428; 0055f8cc FUN_0055f8cc; 00562954 FUN_00562954; 0056a9a4 FUN_0056a9a4; 0056b17c FUN_0056b17c; 0056b7c8 FUN_0056b7c8; 0056c6a8 FUN_0056c6a8; 0056f244 FUN_0056f244; 005a9dac FUN_005a9dac
// callees(0): 

void FUN_0054edb0(void)

{
  (*(code *)**(undefined4 **)(*(int *)PTR_DAT_0071b264 + 0x50))();
  return;
}



//==== 0054edf0  ns=Global  size=0x48
// sig: undefined FUN_0054edf0(void)
// callers(13): 005458f0 FUN_005458f0; 005459e8 FUN_005459e8; 00545b74 FUN_00545b74; 0054a8f8 FUN_0054a8f8; 0055a634 FUN_0055a634; 0055f0a0 FUN_0055f0a0; 0055f31c FUN_0055f31c; 0055f8cc FUN_0055f8cc; 0056137c FUN_0056137c; 0056a838 FUN_0056a838; 0056eac4 FUN_0056eac4; 0056f244 FUN_0056f244; 0056f904 FUN_0056f904
// callees(0): 

undefined4 FUN_0054edf0(undefined8 param_1)

{
  undefined4 uVar1;
  undefined8 uStack00000030;
  
  uStack00000030 = param_1;
  uVar1 = (*(code *)**(undefined4 **)(*(int *)PTR_DAT_0071b264 + 0x54))();
  return uVar1;
}



//==== 0054ee38  ns=Global  size=0x4c
// sig: undefined FUN_0054ee38(void)
// callers(14): 00543b9c FUN_00543b9c; 005458f0 FUN_005458f0; 00545b74 FUN_00545b74; 0055cf70 FUN_0055cf70; 0055f8cc FUN_0055f8cc; 00562954 FUN_00562954; 005631a8 FUN_005631a8; 0056eea4 FUN_0056eea4; 0056efc4 FUN_0056efc4; 0056f07c FUN_0056f07c; 0056f244 FUN_0056f244; 0056f674 FUN_0056f674; 0056f904 FUN_0056f904; 005a8114 FUN_005a8114
// callees(0): 

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



//==== 0054ee84  ns=Global  size=0x48
// sig: undefined FUN_0054ee84(void)
// callers(5): 0053fc0c FUN_0053fc0c; 0056aed8 FUN_0056aed8; 0056b17c FUN_0056b17c; 0056b458 FUN_0056b458; 0056b7c8 FUN_0056b7c8
// callees(0): 

undefined4 FUN_0054ee84(undefined8 param_1,undefined8 param_2)

{
  undefined4 uVar1;
  undefined8 uStack00000038;
  
  uStack00000038 = param_2;
  uVar1 = (*(code *)**(undefined4 **)(*(int *)PTR_DAT_0071b264 + 0x5c))();
  return uVar1;
}



//==== 0054eecc  ns=Global  size=0x48
// sig: undefined FUN_0054eecc(void)
// callers(11): 0054021c FUN_0054021c; 00544980 FUN_00544980; 00544ad4 FUN_00544ad4; 00545010 FUN_00545010; 005451dc FUN_005451dc; 0054567c FUN_0054567c; 005474b4 FUN_005474b4; 0054a248 FUN_0054a248; 0054b368 FUN_0054b368; 0054b7dc FUN_0054b7dc; 005a79d0 FUN_005a79d0
// callees(0): 

undefined4 FUN_0054eecc(undefined8 param_1,undefined8 param_2)

{
  undefined4 uVar1;
  undefined8 uStack00000038;
  
  uStack00000038 = param_2;
  uVar1 = (*(code *)**(undefined4 **)(*(int *)PTR_DAT_0071b264 + 0x60))();
  return uVar1;
}



//==== 0054ef14  ns=Global  size=0xc
// sig: undefined FUN_0054ef14(void)
// callers(0): 
// callees(0): 

undefined4 FUN_0054ef14(void)

{
  return *(undefined4 *)PTR_DAT_0071b26c;
}



//==== 0054ef20  ns=Global  size=0x44
// sig: undefined FUN_0054ef20(void)
// callers(1): 005446ec FUN_005446ec
// callees(0): 

undefined4 FUN_0054ef20(void)

{
  undefined4 uVar1;
  
  uVar1 = (*(code *)**(undefined4 **)(*(int *)PTR_DAT_0071b264 + 0x68))();
  return uVar1;
}



//==== 0054ef64  ns=Global  size=0xc
// sig: undefined FUN_0054ef64(void)
// callers(1): 00545b74 FUN_00545b74
// callees(0): 

void FUN_0054ef64(undefined4 *param_1)

{
  *param_1 = 0;
  return;
}



//==== 0054ef70  ns=Global  size=0x54
// sig: undefined FUN_0054ef70(void)
// callers(13): 0053ffdc FUN_0053ffdc; 005444fc FUN_005444fc; 00544548 FUN_00544548; 0054487c FUN_0054487c; 0056ad24 FUN_0056ad24; 0056c6a8 FUN_0056c6a8; 005a9028 FUN_005a9028; 005a9148 FUN_005a9148; 005a92c0 FUN_005a92c0; 005a972c FUN_005a972c; 005abd98 FUN_005abd98; 005abffc FUN_005abffc; 005ac5b0 FUN_005ac5b0
// callees(0): 

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



//==== 0054efc4  ns=Global  size=0x18
// sig: undefined FUN_0054efc4(void)
// callers(1): 005500a8 FUN_005500a8
// callees(0): 

void FUN_0054efc4(undefined4 *param_1)

{
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  return;
}



//==== 0054efdc  ns=Global  size=0xb4
// sig: undefined FUN_0054efdc(void)
// callers(2): 0054f090 FUN_0054f090; 005506dc FUN_005506dc
// callees(3): 0054ed44 FUN_0054ed44; 00556bb8 FUN_00556bb8; 00556f40 thunk_FUN_00556a58

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



//==== 0054f090  ns=Global  size=0x98
// sig: undefined FUN_0054f090(void)
// callers(8): 0054f128 FUN_0054f128; 0054f314 FUN_0054f314; 0054f464 FUN_0054f464; 0054f600 FUN_0054f600; 0054f7a0 FUN_0054f7a0; 0054f908 FUN_0054f908; 0054fa58 FUN_0054fa58; 0054fbd4 FUN_0054fbd4
// callees(1): 0054efdc FUN_0054efdc

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



//==== 0054f128  ns=Global  size=0xe8
// sig: undefined FUN_0054f128(void)
// callers(1): 0054f210 FUN_0054f210
// callees(2): 0054e9ec FUN_0054e9ec; 0054f090 FUN_0054f090

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



//==== 0054f210  ns=Global  size=0x104
// sig: undefined FUN_0054f210(void)
// callers(2): 0054567c FUN_0054567c; 00550720 FUN_00550720
// callees(1): 0054f128 FUN_0054f128

/* WARNING: Removing unreachable block (ram,0x0054f2b0) */
/* WARNING: Removing unreachable block (ram,0x0054f2c0) */
/* WARNING: Removing unreachable block (ram,0x0054f2ec) */

undefined4 FUN_0054f210(void)

{
  undefined4 uVar1;
  undefined1 local_40 [4];
  undefined1 local_3c [4];
  undefined1 local_38 [16];
  
  uVar1 = 5;
  if (*(int *)PTR_DAT_0071b26c != 0) {
    uVar1 = FUN_0054f128(*(undefined4 *)(PTR_DAT_0071b26c + 4),local_3c,local_38,local_40);
  }
  return uVar1;
}



//==== 0054f314  ns=Global  size=0x150
// sig: undefined FUN_0054f314(void)
// callers(3): 00550720 FUN_00550720; 0055f8cc FUN_0055f8cc; 005a8114 FUN_005a8114
// callees(2): 0054e9ec FUN_0054e9ec; 0054f090 FUN_0054f090

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



//==== 0054f464  ns=Global  size=0x19c
// sig: undefined FUN_0054f464(void)
// callers(2): 0056bedc FUN_0056bedc; 005a8114 FUN_005a8114
// callees(3): 0054e9ec FUN_0054e9ec; 0054ea34 FUN_0054ea34; 0054f090 FUN_0054f090

/* WARNING: Removing unreachable block (ram,0x0054f5f4) */

ulonglong FUN_0054f464(int param_1,int param_2,undefined4 param_3,undefined4 *param_4)

{
  int iVar2;
  ulonglong uVar1;
  undefined1 local_40 [16];
  
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



//==== 0054f600  ns=Global  size=0x160
// sig: undefined FUN_0054f600(void)
// callers(1): 0054f760 FUN_0054f760
// callees(2): 0054e9ec FUN_0054e9ec; 0054f090 FUN_0054f090

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



//==== 0054f760  ns=Global  size=0x40
// sig: undefined FUN_0054f760(void)
// callers(1): 00545b74 FUN_00545b74
// callees(1): 0054f600 FUN_0054f600

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



//==== 0054f7a0  ns=Global  size=0x168
// sig: undefined FUN_0054f7a0(void)
// callers(5): 0055e544 FUN_0055e544; 0055f0a0 FUN_0055f0a0; 0055f31c FUN_0055f31c; 0055f5d8 FUN_0055f5d8; 005a5970 FUN_005a5970
// callees(2): 0054e9ec FUN_0054e9ec; 0054f090 FUN_0054f090

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



//==== 0054f908  ns=Global  size=0x150
// sig: undefined FUN_0054f908(void)
// callers(1): 005a5970 FUN_005a5970
// callees(3): 0054e9ec FUN_0054e9ec; 0054ea34 FUN_0054ea34; 0054f090 FUN_0054f090

/* WARNING: Removing unreachable block (ram,0x0054fa4c) */

ulonglong FUN_0054f908(int param_1,undefined4 param_2,undefined4 *param_3)

{
  int iVar2;
  ulonglong uVar1;
  undefined1 local_40 [24];
  
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



//==== 0054fa58  ns=Global  size=0x17c
// sig: undefined FUN_0054fa58(void)
// callers(7): 005502bc FUN_005502bc; 00550720 FUN_00550720; 0055e0b8 FUN_0055e0b8; 0055e1b0 FUN_0055e1b0; 0056674c FUN_0056674c; 0056c6a8 FUN_0056c6a8; 0056f3fc FUN_0056f3fc
// callees(2): 0054e9ec FUN_0054e9ec; 0054f090 FUN_0054f090

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



//==== 0054fbd4  ns=Global  size=0x164
// sig: undefined FUN_0054fbd4(void)
// callers(1): 0056c3b8 FUN_0056c3b8
// callees(3): 0054e9ec FUN_0054e9ec; 0054ea34 FUN_0054ea34; 0054f090 FUN_0054f090

/* WARNING: Removing unreachable block (ram,0x0054fd2c) */

ulonglong FUN_0054fbd4(int param_1,undefined4 param_2,undefined4 param_3,undefined4 *param_4)

{
  int iVar2;
  ulonglong uVar1;
  undefined1 local_40 [16];
  
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



//==== 0054fd38  ns=Global  size=0x8c
// sig: undefined FUN_0054fd38(void)
// callers(3): 0054fdc4 FUN_0054fdc4; 0054ff9c FUN_0054ff9c; 00550d60 FUN_00550d60
// callees(1): 00556f40 thunk_FUN_00556a58

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



//==== 0054fdc4  ns=Global  size=0x70
// sig: undefined FUN_0054fdc4(void)
// callers(1): 0053c1f0 FUN_0053c1f0
// callees(1): 0054fd38 FUN_0054fd38

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



//==== 0054fe34  ns=Global  size=0x30
// sig: undefined FUN_0054fe34(void)
// callers(2): 0054fe64 FUN_0054fe64; 005500a8 FUN_005500a8
// callees(1): 005519f0 FUN_005519f0

void FUN_0054fe34(void)

{
  undefined1 local_10 [16];
  
  FUN_005519f0(local_10);
  return;
}



//==== 0054fe64  ns=Global  size=0x90
// sig: undefined FUN_0054fe64(void)
// callers(11): 0054fef4 FUN_0054fef4; 0054ff48 FUN_0054ff48; 005502bc FUN_005502bc; 00550720 FUN_00550720; 0055d1fc FUN_0055d1fc; 0056c198 FUN_0056c198; 0056c3b8 FUN_0056c3b8; 0056c550 FUN_0056c550; 0056c6a8 FUN_0056c6a8; 0056ec2c FUN_0056ec2c; 005a9a60 FUN_005a9a60
// callees(2): 0054e9ec FUN_0054e9ec; 0054fe34 FUN_0054fe34

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



//==== 0054fef4  ns=Global  size=0x54
// sig: undefined FUN_0054fef4(void)
// callers(2): 005451dc FUN_005451dc; 0054ff9c FUN_0054ff9c
// callees(1): 0054fe64 FUN_0054fe64

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



//==== 0054ff48  ns=Global  size=0x54
// sig: undefined FUN_0054ff48(void)
// callers(1): 0054ff9c FUN_0054ff9c
// callees(2): 0054fe64 FUN_0054fe64; 005d0140 libc::memset

undefined8 FUN_0054ff48(void)

{
  undefined *puVar1;
  
  puVar1 = PTR_DAT_0071b26c;
  if (*(int *)(PTR_DAT_0071b26c + 0x280) != 0) {
    FUN_0054fe64(*(undefined4 *)(PTR_DAT_0071b26c + 0x60));
    libc::memset(puVar1 + 0x60,0,0x224);
  }
  return 0;
}



//==== 0054ff9c  ns=Global  size=0xb8
// sig: undefined FUN_0054ff9c(void)
// callers(2): 00561584 FUN_00561584; 005aa3d0 FUN_005aa3d0
// callees(4): 0054fd38 FUN_0054fd38; 0054fef4 FUN_0054fef4; 0054ff48 FUN_0054ff48; 005d0140 libc::memset

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
      libc::memset(puVar2 + 0x60,0,0x224);
      *(undefined4 *)(puVar2 + 8) = 0;
      *(undefined4 *)puVar2 = 0;
      *(undefined4 *)(puVar2 + 4) = 0;
      return;
    }
  }
  return;
}



