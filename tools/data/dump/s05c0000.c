//==== 005c01d8  ns=Global  size=0x154
// sig: undefined FUN_005c01d8(void)
// callers(1): 005c04f8 FUN_005c04f8
// callees(2): 00552944 FUN_00552944; 00552968 FUN_00552968

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



//==== 005c032c  ns=Global  size=0x1cc
// sig: undefined FUN_005c032c(void)
// callers(1): 005c04f8 FUN_005c04f8
// callees(2): 005c1378 FUN_005c1378; 005c1500 FUN_005c1500

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



//==== 005c04f8  ns=Global  size=0x2fc
// sig: undefined FUN_005c04f8(void)
// callers(1): 005c0c8c FUN_005c0c8c
// callees(7): 005bdf90 FUN_005bdf90; 005be33c FUN_005be33c; 005be478 FUN_005be478; 005bff34 FUN_005bff34; 005c01d8 FUN_005c01d8; 005c032c FUN_005c032c; 005c1500 FUN_005c1500

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
  undefined1 auStack_228 [520];
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



//==== 005c07f4  ns=Global  size=0x498
// sig: undefined FUN_005c07f4(void)
// callers(6): 005b61d0 FUN_005b61d0; 005b6378 FUN_005b6378; 005b6d80 FUN_005b6d80; 005b6f34 FUN_005b6f34; 005b7754 FUN_005b7754; 005bff34 FUN_005bff34
// callees(9): 005bdf90 FUN_005bdf90; 005be004 FUN_005be004; 005be064 FUN_005be064; 005bfc70 FUN_005bfc70; 005c0ed4 FUN_005c0ed4; 005c1278 FUN_005c1278; 005c1378 FUN_005c1378; 005c1540 FUN_005c1540; 005c5ad0 libc::memcpy

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
  undefined1 auStack_414 [512];
  undefined1 auStack_214 [524];
  
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
      libc::memcpy(auStack_414,pvStack00000038,0x200);
      FUN_005c1278(auStack_414,uVar1);
      FUN_005c0ed4(auStack_414,puStack00000048);
      if (iVar2 == 0) {
        pvVar4 = (void *)FUN_005bdf90(pvStack00000030,1);
      }
      else {
        libc::memcpy(auStack_214,auStack_414,0x200);
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
        pvVar4 = libc::memcpy(pvStack00000030,auStack_214,0x200);
      }
    }
    else {
      pvVar4 = (void *)FUN_005bfc70(pvStack00000030,pvStack00000038,iStack00000040,puStack00000048);
    }
  }
  else {
    pvVar4 = libc::memcpy(pvStack00000030,puStack00000048,0x200);
  }
  return pvVar4;
}



//==== 005c0c8c  ns=Global  size=0x248
// sig: undefined FUN_005c0c8c(void)
// callers(2): 005b6b6c FUN_005b6b6c; 005b7188 FUN_005b7188
// callees(8): 005bdf90 FUN_005bdf90; 005be478 FUN_005be478; 005bf0e8 FUN_005bf0e8; 005c04f8 FUN_005c04f8; 005c1338 FUN_005c1338; 005c13d0 FUN_005c13d0; 005c1500 FUN_005c1500; 005c5ad0 libc::memcpy

void FUN_005c0c8c(void *param_1,void *param_2,undefined4 param_3,uint param_4)

{
  int iVar1;
  void *pvStack00000030;
  void *pvStack00000038;
  undefined4 uStack00000040;
  uint uStack00000048;
  undefined1 auStack_41c [512];
  undefined1 auStack_21c [532];
  
  pvStack00000030 = param_1;
  pvStack00000038 = param_2;
  uStack00000040 = param_3;
  uStack00000048 = param_4;
  do {
    FUN_005c04f8(auStack_41c,uStack00000048 >> 1);
    iVar1 = FUN_005c1500(auStack_41c,uStack00000040,
                         ((ulonglong)(uStack00000048 >> 1) + 0x1f << 0x20) >> 0x25);
  } while (iVar1 == 1);
  libc::memcpy(auStack_21c,auStack_41c,0x200);
  do {
    FUN_005c04f8(auStack_41c,uStack00000048 >> 1);
    iVar1 = FUN_005c1500(auStack_41c,uStack00000040,
                         ((ulonglong)(uStack00000048 >> 1) + 0x1f << 0x20) >> 0x25);
  } while (iVar1 == 1);
  FUN_005c13d0(pvStack00000030,auStack_41c,auStack_21c);
  libc::memcpy(pvStack00000038,pvStack00000030,0x200);
  FUN_005c1338(pvStack00000038,auStack_41c);
  FUN_005c1338(pvStack00000038,auStack_21c);
  FUN_005be478(pvStack00000038,1);
  FUN_005bdf90(auStack_41c,uStack00000040);
  FUN_005bf0e8(auStack_41c,pvStack00000038,pvStack00000038);
  return;
}



//==== 005c0ed4  ns=Global  size=0x1fc
// sig: undefined FUN_005c0ed4(void)
// callers(4): 005b7754 FUN_005b7754; 005be820 FUN_005be820; 005bff34 FUN_005bff34; 005c07f4 FUN_005c07f4
// callees(6): 005c11a8 FUN_005c11a8; 005c11f0 FUN_005c11f0; 005c1278 FUN_005c1278; 005c1338 FUN_005c1338; 005c1378 FUN_005c1378; 005c5ad0 libc::memcpy

void FUN_005c0ed4(undefined4 param_1,void *param_2)

{
  uint uVar1;
  int iVar2;
  undefined4 uStack00000030;
  void *pvStack00000038;
  uint local_21c;
  uint local_218;
  undefined1 auStack_214 [524];
  
  uStack00000030 = param_1;
  pvStack00000038 = param_2;
  libc::memcpy(auStack_214,param_2,0x200);
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



//==== 005c10d0  ns=Global  size=0x40
// sig: undefined FUN_005c10d0(void)
// callers(4): 005b7b4c FUN_005b7b4c; 005b8120 FUN_005b8120; 005bf0e8 FUN_005bf0e8; 005c1540 FUN_005c1540
// callees(0): 

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



//==== 005c1118  ns=Global  size=0x40
// sig: undefined FUN_005c1118(void)
// callers(4): 005b7754 FUN_005b7754; 005b7b4c FUN_005b7b4c; 005b8120 FUN_005b8120; 005bf0e8 FUN_005bf0e8
// callees(0): 

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



//==== 005c1160  ns=Global  size=0x40
// sig: undefined FUN_005c1160(void)
// callers(1): 005b8120 FUN_005b8120
// callees(0): 

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



//==== 005c11a8  ns=Global  size=0x40
// sig: undefined FUN_005c11a8(void)
// callers(4): 005be8f4 FUN_005be8f4; 005beb7c FUN_005beb7c; 005bf89c FUN_005bf89c; 005c0ed4 FUN_005c0ed4
// callees(0): 

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



//==== 005c11f0  ns=Global  size=0x80
// sig: undefined FUN_005c11f0(void)
// callers(8): 005b7b4c FUN_005b7b4c; 005b8120 FUN_005b8120; 005be8f4 FUN_005be8f4; 005beb7c FUN_005beb7c; 005bf0e8 FUN_005bf0e8; 005bf89c FUN_005bf89c; 005bff34 FUN_005bff34; 005c0ed4 FUN_005c0ed4
// callees(0): 

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



//==== 005c1278  ns=Global  size=0x84
// sig: undefined FUN_005c1278(void)
// callers(6): 005be8f4 FUN_005be8f4; 005beb7c FUN_005beb7c; 005bf0e8 FUN_005bf0e8; 005bf89c FUN_005bf89c; 005c07f4 FUN_005c07f4; 005c0ed4 FUN_005c0ed4
// callees(0): 

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



//==== 005c1300  ns=Global  size=0x34
// sig: undefined FUN_005c1300(void)
// callers(9): 005b6c40 FUN_005b6c40; 005b7754 FUN_005b7754; 005b7b4c FUN_005b7b4c; 005b8120 FUN_005b8120; 005be678 FUN_005be678; 005be8f4 FUN_005be8f4; 005beb7c FUN_005beb7c; 005bf0e8 FUN_005bf0e8; 005bf89c FUN_005bf89c
// callees(0): 

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



//==== 005c1338  ns=Global  size=0x38
// sig: undefined FUN_005c1338(void)
// callers(13): 005b7454 FUN_005b7454; 005b7754 FUN_005b7754; 005b7b4c FUN_005b7b4c; 005b7fcc FUN_005b7fcc; 005b8120 FUN_005b8120; 005be74c FUN_005be74c; 005be8f4 FUN_005be8f4; 005beb7c FUN_005beb7c; 005bf0e8 FUN_005bf0e8; 005bf89c FUN_005bf89c; 005c0c8c FUN_005c0c8c; 005c0ed4 FUN_005c0ed4; 005c1540 FUN_005c1540
// callees(0): 

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



//==== 005c1378  ns=Global  size=0x50
// sig: undefined FUN_005c1378(void)
// callers(12): 005b7b4c FUN_005b7b4c; 005b8120 FUN_005b8120; 005be8f4 FUN_005be8f4; 005beb7c FUN_005beb7c; 005bf0e8 FUN_005bf0e8; 005bf89c FUN_005bf89c; 005bfc70 FUN_005bfc70; 005c032c FUN_005c032c; 005c07f4 FUN_005c07f4; 005c0ed4 FUN_005c0ed4; 005c13d0 FUN_005c13d0; 005c1540 FUN_005c1540
// callees(0): 

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



//==== 005c13d0  ns=Global  size=0x12c
// sig: undefined FUN_005c13d0(void)
// callers(12): 005b7454 FUN_005b7454; 005b7754 FUN_005b7754; 005b7b4c FUN_005b7b4c; 005b7fcc FUN_005b7fcc; 005b8120 FUN_005b8120; 005b872c FUN_005b872c; 005be8f4 FUN_005be8f4; 005beb7c FUN_005beb7c; 005bf89c FUN_005bf89c; 005bfc70 FUN_005bfc70; 005bff34 FUN_005bff34; 005c0c8c FUN_005c0c8c
// callees(1): 005c1378 FUN_005c1378

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



//==== 005c1500  ns=Global  size=0x38
// sig: undefined FUN_005c1500(void)
// callers(3): 005c032c FUN_005c032c; 005c04f8 FUN_005c04f8; 005c0c8c FUN_005c0c8c
// callees(0): 

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



//==== 005c1540  ns=Global  size=0x194
// sig: undefined FUN_005c1540(void)
// callers(1): 005c07f4 FUN_005c07f4
// callees(3): 005c10d0 FUN_005c10d0; 005c1338 FUN_005c1338; 005c1378 FUN_005c1378
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



//==== 005c16d8  ns=Global  size=0x8
// sig: undefined FUN_005c16d8(void)
// callers(0): 
// callees(0): 

undefined8 FUN_005c16d8(void)

{
  return 0;
}



//==== 005c16e0  ns=Global  size=0x9c
// sig: undefined FUN_005c16e0(void)
// callers(0): 
// callees(4): 0064f484 cell::cellSysmoduleUnloadModule; 0064fd24 sys::sys_net_finalize_network; 00650424 sys::sys_net_free_thread_context; 00650444 cell::cellNetCtlTerm

undefined8 FUN_005c16e0(void)

{
  undefined *puVar1;
  
  puVar1 = PTR_DAT_0071c1d8;
  if (*PTR_DAT_0071c1d8 != '\0') {
    cell::cellNetCtlTerm();
  }
  *puVar1 = 0;
  sys::sys_net_free_thread_context(0,2);
  if (puVar1[1] != '\0') {
    sys::sys_net_finalize_network();
  }
  puVar1[1] = 0;
  if (puVar1[2] != '\0') {
    cell::cellSysmoduleUnloadModule(0);
  }
  puVar1[2] = 0;
  return 0;
}



//==== 005c1788  ns=Global  size=0x148
// sig: undefined FUN_005c1788(void)
// callers(1): 005c18d0 FUN_005c18d0
// callees(4): 005c756c FUN_005c756c; 005cd098 libc::printf; 0064fd84 cell::cellNetCtlGetState; 0800008d syscall::syscall_sys_timer_usleep

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
    iVar2 = cell::cellNetCtlGetState(local_30);
    if (iVar2 < 0) {
      libc::printf(*(char **)(iStack_74 + -0x614c),iVar2);
      return 0xffffffff;
    }
    if (local_30[0] == 3) {
      return 0;
    }
    syscall::syscall_sys_timer_usleep(500000);
    bVar1 = iVar3 == 0;
    iVar3 = iVar3 + -1;
    if (bVar1) {
      FUN_005c756c(*(undefined4 *)(iStack_74 + -0x6148));
      return 0xffffffff;
    }
  } while (*param_1 == '\0');
  return 0xffffffff;
}



//==== 005c18d0  ns=Global  size=0x180
// sig: undefined FUN_005c18d0(void)
// callers(1): 004e668c FUN_004e668c
// callees(7): 005c1788 FUN_005c1788; 005c756c FUN_005c756c; 005cd098 libc::printf; 0064f4a4 cell::cellSysmoduleLoadModule; 0064fd84 cell::cellNetCtlGetState; 0064fda4 cell::cellNetCtlInit; 006501c4 sys::sys_net_initialize_network_ex

undefined4 FUN_005c18d0(undefined4 param_1,int param_2)

{
  char cVar1;
  undefined *puVar2;
  int iVar3;
  int iStack_74;
  int local_30;
  undefined1 local_2c [20];
  
  puVar2 = PTR_DAT_0071c1d8;
  if (PTR_DAT_0071c1d8[2] == '\0') {
    iVar3 = cell::cellSysmoduleLoadModule(0);
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
    iVar3 = sys::sys_net_initialize_network_ex(local_2c);
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
    iVar3 = cell::cellNetCtlGetState(&local_30);
    if ((((iVar3 < 0) || (local_30 == 0)) && (iVar3 = cell::cellNetCtlInit(), iVar3 < 0)) &&
       (iVar3 != -0x7fecfefe)) {
      libc::printf(*(char **)(iStack_74 + -0x613c),iVar3);
      return 0xfffffff9;
    }
    *puVar2 = 1;
  }
  if ((param_2 != 0) && (iVar3 = FUN_005c1788(param_1), iVar3 < 0)) {
    return 0xfffffffa;
  }
  return 0;
}



//==== 005c1a58  ns=Global  size=0x60
// sig: undefined FUN_005c1a58(void)
// callers(0): 
// callees(2): 004fe098 idol::AllocateMemAlign; 004ffac4 FUN_004ffac4
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



//==== 005c1ab8  ns=Global  size=0x58
// sig: undefined FUN_005c1ab8(void)
// callers(0): 
// callees(2): 004fe098 idol::AllocateMemAlign; 004ffac4 FUN_004ffac4
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



//==== 005c1b10  ns=Global  size=0x64
// sig: undefined FUN_005c1b10(void)
// callers(0): 
// callees(2): 004fe098 idol::AllocateMemAlign; 004ffac4 FUN_004ffac4
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



//==== 005c1b74  ns=Global  size=0x68
// sig: undefined FUN_005c1b74(void)
// callers(0): 
// callees(2): 004fe098 idol::AllocateMemAlign; 004ffac4 FUN_004ffac4
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



//==== 005c1bdc  ns=Global  size=0x58
// sig: undefined FUN_005c1bdc(void)
// callers(0): 
// callees(2): 004fe098 idol::AllocateMemAlign; 004ffac4 FUN_004ffac4
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



//==== 005c1c34  ns=Global  size=0x64
// sig: undefined FUN_005c1c34(void)
// callers(0): 
// callees(2): 004fe098 idol::AllocateMemAlign; 004ffac4 FUN_004ffac4
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



//==== 005c1c98  ns=Global  size=0x68
// sig: undefined FUN_005c1c98(void)
// callers(0): 
// callees(2): 004fe098 idol::AllocateMemAlign; 004ffac4 FUN_004ffac4
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



//==== 005c1d00  ns=Global  size=0x4
// sig: undefined FUN_005c1d00(void)
// callers(0): 
// callees(0): 

void FUN_005c1d00(void)

{
  return;
}



//==== 005c1d04  ns=Global  size=0x4
// sig: undefined FUN_005c1d04(void)
// callers(0): 
// callees(0): 

void FUN_005c1d04(void)

{
  return;
}



//==== 005c1d08  ns=Global  size=0x4
// sig: undefined FUN_005c1d08(void)
// callers(0): 
// callees(0): 

void FUN_005c1d08(void)

{
  return;
}



//==== 005c1d0c  ns=Global  size=0x4
// sig: undefined FUN_005c1d0c(void)
// callers(0): 
// callees(0): 

void FUN_005c1d0c(void)

{
  return;
}



//==== 005c1d10  ns=Global  size=0x4
// sig: undefined FUN_005c1d10(void)
// callers(0): 
// callees(0): 

void FUN_005c1d10(void)

{
  return;
}



//==== 005c1d14  ns=Global  size=0x4
// sig: undefined FUN_005c1d14(void)
// callers(0): 
// callees(0): 

void FUN_005c1d14(void)

{
  return;
}



//==== 005c1d18  ns=Global  size=0x8
// sig: undefined FUN_005c1d18(void)
// callers(0): 
// callees(0): 

undefined8 FUN_005c1d18(undefined8 param_1,undefined8 param_2)

{
  return param_2;
}



//==== 005c1d20  ns=Global  size=0x8
// sig: undefined FUN_005c1d20(void)
// callers(0): 
// callees(0): 

undefined8 FUN_005c1d20(undefined8 param_1,undefined8 param_2)

{
  return param_2;
}



//==== 005c1d28  ns=Global  size=0x8
// sig: undefined FUN_005c1d28(void)
// callers(0): 
// callees(0): 

undefined8 FUN_005c1d28(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  return param_3;
}



//==== 005c1d30  ns=Global  size=0x84
// sig: undefined FUN_005c1d30(void)
// callers(0): 
// callees(1): 004ffac4 FUN_004ffac4
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



//==== 005c1db4  ns=Global  size=0x74
// sig: undefined FUN_005c1db4(void)
// callers(0): 
// callees(1): 004ffac4 FUN_004ffac4
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



//==== 005c1e28  ns=Global  size=0x44
// sig: undefined FUN_005c1e28(void)
// callers(0): 
// callees(0): 

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



//==== 005c1e6c  ns=Global  size=0x44
// sig: undefined FUN_005c1e6c(void)
// callers(0): 
// callees(0): 

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



//==== 005c1eb0  ns=Global  size=0x44
// sig: undefined FUN_005c1eb0(void)
// callers(0): 
// callees(0): 

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



//==== 005c1ef4  ns=Global  size=0x44
// sig: undefined FUN_005c1ef4(void)
// callers(1): 00571f34 FUN_00571f34
// callees(0): 

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



//==== 005c1f38  ns=Global  size=0x8
// sig: undefined FUN_005c1f38(void)
// callers(2): 0058cab0 FUN_0058cab0; 0058d010 FUN_0058d010
// callees(0): 

undefined1 FUN_005c1f38(int param_1)

{
  return *(undefined1 *)(param_1 + 0x44f);
}



//==== 005c1f40  ns=Global  size=0x4c
// sig: undefined FUN_005c1f40(void)
// callers(0): 
// callees(0): 

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



//==== 005c1f8c  ns=Global  size=0x9c
// sig: undefined FUN_005c1f8c(void)
// callers(0): 
// callees(1): 00540808 FUN_00540808

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



//==== 005c2028  ns=Global  size=0xa0
// sig: undefined FUN_005c2028(void)
// callers(1): 005633b0 FUN_005633b0
// callees(2): 005c4188 FUN_005c4188; 005c4620 FUN_005c4620

undefined4 FUN_005c2028(int param_1,int param_2)

{
  undefined4 uVar1;
  undefined1 local_10 [16];
  
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



//==== 005c20c8  ns=Global  size=0x28
// sig: undefined FUN_005c20c8(void)
// callers(3): 005a5b0c FUN_005a5b0c; 005a9dac FUN_005a9dac; 005c26e4 FUN_005c26e4
// callees(0): 

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



//==== 005c20f0  ns=Global  size=0x28
// sig: undefined FUN_005c20f0(void)
// callers(7): 00578634 FUN_00578634; 005a5798 FUN_005a5798; 005a5b0c FUN_005a5b0c; 005c2218 FUN_005c2218; 005c23e4 FUN_005c23e4; 005c26e4 FUN_005c26e4; 005c299c FUN_005c299c
// callees(0): 

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



//==== 005c2118  ns=Global  size=0x60
// sig: undefined FUN_005c2118(void)
// callers(2): 005a8114 FUN_005a8114; 005c23e4 FUN_005c23e4
// callees(0): 

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



//==== 005c2178  ns=Global  size=0x30
// sig: undefined FUN_005c2178(void)
// callers(5): 00577b94 FUN_00577b94; 0057ab08 FUN_0057ab08; 005c22c0 FUN_005c22c0; 005c2544 FUN_005c2544; 005c2880 FUN_005c2880
// callees(0): 

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



//==== 005c21a8  ns=Global  size=0x70
// sig: undefined FUN_005c21a8(void)
// callers(3): 005a5f10 FUN_005a5f10; 005a6718 FUN_005a6718; 005a8114 FUN_005a8114
// callees(0): 

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



//==== 005c2218  ns=Global  size=0xa8
// sig: undefined FUN_005c2218(void)
// callers(2): 00578634 FUN_00578634; 005a8114 FUN_005a8114
// callees(1): 005c20f0 FUN_005c20f0

/* WARNING: Removing unreachable block (ram,0x005c2274) */

int FUN_005c2218(int param_1,int param_2)

{
  int iVar1;
  undefined1 local_20 [16];
  
  iVar1 = 2;
  if (((param_1 != 0) && (param_2 != 0)) && (iVar1 = FUN_005c20f0(param_1,local_20), iVar1 == 0)) {
    return 200;
  }
  return iVar1;
}



//==== 005c22c0  ns=Global  size=0xa8
// sig: undefined FUN_005c22c0(void)
// callers(3): 005a5f10 FUN_005a5f10; 005a6718 FUN_005a6718; 005a8114 FUN_005a8114
// callees(1): 005c2178 FUN_005c2178

/* WARNING: Removing unreachable block (ram,0x005c231c) */

int FUN_005c22c0(int param_1,int param_2)

{
  int iVar1;
  undefined1 local_20 [16];
  
  iVar1 = 2;
  if (((param_1 != 0) && (param_2 != 0)) && (iVar1 = FUN_005c2178(param_1,local_20), iVar1 == 0)) {
    return 200;
  }
  return iVar1;
}



//==== 005c2368  ns=Global  size=0x60
// sig: undefined FUN_005c2368(void)
// callers(3): 00578634 FUN_00578634; 005a5f10 FUN_005a5f10; 005a8114 FUN_005a8114
// callees(0): 

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



//==== 005c23c8  ns=Global  size=0x1c
// sig: undefined FUN_005c23c8(void)
// callers(0): 
// callees(0): 

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



//==== 005c23e4  ns=Global  size=0x160
// sig: undefined FUN_005c23e4(void)
// callers(1): 005c26e4 FUN_005c26e4
// callees(3): 005c20f0 FUN_005c20f0; 005c2118 FUN_005c2118; 005c5ad0 libc::memcpy

/* WARNING: Removing unreachable block (ram,0x005c2500) */

ulonglong FUN_005c23e4(void *param_1,int *param_2,int param_3)

{
  ulonglong uVar1;
  ulonglong uVar2;
  undefined1 local_40 [4];
  undefined1 local_3c [20];
  
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
        libc::memcpy(param_1,(void *)(param_2[4] + *param_2),0);
        uVar2 = uVar1;
      }
    }
  }
  return uVar2 & 0xffffffff;
}



//==== 005c2544  ns=Global  size=0x1a0
// sig: undefined FUN_005c2544(void)
// callers(3): 00577c54 FUN_00577c54; 0057ab08 FUN_0057ab08; 005c26e4 FUN_005c26e4
// callees(2): 005c2178 FUN_005c2178; 005c5ad0 libc::memcpy

/* WARNING: Removing unreachable block (ram,0x005c263c) */

int FUN_005c2544(int param_1,void *param_2,int param_3)

{
  int iVar1;
  int iVar2;
  undefined1 local_40 [24];
  
  if (((param_1 == 0) || (param_2 == (void *)0x0)) || (param_3 == 0)) {
    iVar2 = 2;
  }
  else {
    iVar2 = FUN_005c2178(param_1,local_40);
    if (iVar2 == 0) {
      if (param_3 != 0) {
        return 200;
      }
      libc::memcpy((void *)(*(int *)(param_1 + 4) + *(int *)(param_1 + 0x10)),param_2,0);
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



//==== 005c26e4  ns=Global  size=0x148
// sig: undefined FUN_005c26e4(void)
// callers(2): 005a8114 FUN_005a8114; 005c282c FUN_005c282c
// callees(4): 005c20c8 FUN_005c20c8; 005c20f0 FUN_005c20f0; 005c23e4 FUN_005c23e4; 005c2544 FUN_005c2544

/* WARNING: Removing unreachable block (ram,0x005c27b8) */
/* WARNING: Removing unreachable block (ram,0x005c27c0) */
/* WARNING: Removing unreachable block (ram,0x005c27dc) */
/* WARNING: Removing unreachable block (ram,0x005c27ec) */

int FUN_005c26e4(int *param_1,int param_2,int param_3)

{
  int iVar1;
  undefined1 local_30 [16];
  
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



//==== 005c282c  ns=Global  size=0x54
// sig: undefined FUN_005c282c(void)
// callers(5): 00577c54 FUN_00577c54; 00578634 FUN_00578634; 0057ab08 FUN_0057ab08; 005c2880 FUN_005c2880; 005c299c FUN_005c299c
// callees(1): 005c26e4 FUN_005c26e4

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



//==== 005c2880  ns=Global  size=0x11c
// sig: undefined FUN_005c2880(void)
// callers(4): 005a5f10 FUN_005a5f10; 005a61ac FUN_005a61ac; 005a6718 FUN_005a6718; 005a8114 FUN_005a8114
// callees(2): 005c2178 FUN_005c2178; 005c282c FUN_005c282c

int FUN_005c2880(int param_1,int param_2)

{
  int iVar1;
  undefined1 local_30 [24];
  
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



//==== 005c299c  ns=Global  size=0x11c
// sig: undefined FUN_005c299c(void)
// callers(4): 00578634 FUN_00578634; 0057ab08 FUN_0057ab08; 005a5b0c FUN_005a5b0c; 005a8114 FUN_005a8114
// callees(2): 005c20f0 FUN_005c20f0; 005c282c FUN_005c282c

int FUN_005c299c(int *param_1,int param_2)

{
  int iVar1;
  undefined1 local_30 [24];
  
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



//==== 005c2ab8  ns=Global  size=0x70
// sig: undefined FUN_005c2ab8(void)
// callers(4): 00576178 FUN_00576178; 00578634 FUN_00578634; 0057a9d4 FUN_0057a9d4; 005a99cc FUN_005a99cc
// callees(1): 005519f0 FUN_005519f0

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



//==== 005c2b28  ns=Global  size=0xc4
// sig: undefined FUN_005c2b28(void)
// callers(3): 00578cdc FUN_00578cdc; 0057ab08 FUN_0057ab08; 005a9c48 FUN_005a9c48
// callees(1): 00551de8 FUN_00551de8

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



//==== 005c2bec  ns=Global  size=0x48
// sig: undefined FUN_005c2bec(void)
// callers(0): 
// callees(0): 

bool FUN_005c2bec(char *param_1,char *param_2)

{
  bool bVar1;
  
  bVar1 = false;
  if (*param_2 <= *param_1) {
    bVar1 = *param_1 <= param_2[1];
  }
  return bVar1;
}



//==== 005c2c34  ns=Global  size=0x3c
// sig: undefined FUN_005c2c34(void)
// callers(0): 
// callees(0): 

bool FUN_005c2c34(byte *param_1,byte *param_2)

{
  bool bVar1;
  
  bVar1 = false;
  if (*param_2 <= *param_1) {
    bVar1 = *param_1 <= param_2[1];
  }
  return bVar1;
}



//==== 005c2c70  ns=Global  size=0x48
// sig: undefined FUN_005c2c70(void)
// callers(0): 
// callees(0): 

bool FUN_005c2c70(short *param_1,short *param_2)

{
  bool bVar1;
  
  bVar1 = false;
  if (*param_2 <= *param_1) {
    bVar1 = *param_1 <= param_2[1];
  }
  return bVar1;
}



//==== 005c2cb8  ns=Global  size=0x3c
// sig: undefined FUN_005c2cb8(void)
// callers(0): 
// callees(0): 

bool FUN_005c2cb8(ushort *param_1,ushort *param_2)

{
  bool bVar1;
  
  bVar1 = false;
  if (*param_2 <= *param_1) {
    bVar1 = *param_1 <= param_2[1];
  }
  return bVar1;
}



//==== 005c2cf4  ns=Global  size=0x3c
// sig: undefined FUN_005c2cf4(void)
// callers(0): 
// callees(0): 

bool FUN_005c2cf4(int *param_1,int *param_2)

{
  bool bVar1;
  
  bVar1 = false;
  if (*param_2 <= *param_1) {
    bVar1 = *param_1 <= param_2[1];
  }
  return bVar1;
}



//==== 005c2d30  ns=Global  size=0x3c
// sig: undefined FUN_005c2d30(void)
// callers(0): 
// callees(0): 

bool FUN_005c2d30(uint *param_1,uint *param_2)

{
  bool bVar1;
  
  bVar1 = false;
  if (*param_2 <= *param_1) {
    bVar1 = *param_1 <= param_2[1];
  }
  return bVar1;
}



//==== 005c2d6c  ns=Global  size=0x3c
// sig: undefined FUN_005c2d6c(void)
// callers(0): 
// callees(0): 

bool FUN_005c2d6c(longlong *param_1,longlong *param_2)

{
  bool bVar1;
  
  bVar1 = false;
  if (*param_2 <= *param_1) {
    bVar1 = *param_1 <= param_2[1];
  }
  return bVar1;
}



//==== 005c2da8  ns=Global  size=0x3c
// sig: undefined FUN_005c2da8(void)
// callers(0): 
// callees(0): 

bool FUN_005c2da8(ulonglong *param_1,ulonglong *param_2)

{
  bool bVar1;
  
  bVar1 = false;
  if (*param_2 <= *param_1) {
    bVar1 = *param_1 <= param_2[1];
  }
  return bVar1;
}



//==== 005c2de4  ns=Global  size=0x3c
// sig: undefined FUN_005c2de4(void)
// callers(0): 
// callees(0): 

bool FUN_005c2de4(float *param_1,float *param_2)

{
  bool bVar1;
  
  bVar1 = false;
  if (*param_2 <= *param_1) {
    bVar1 = *param_1 <= param_2[1];
  }
  return bVar1;
}



//==== 005c2e20  ns=Global  size=0x3c
// sig: undefined FUN_005c2e20(void)
// callers(0): 
// callees(0): 

bool FUN_005c2e20(double *param_1,double *param_2)

{
  bool bVar1;
  
  bVar1 = false;
  if (*param_2 <= *param_1) {
    bVar1 = *param_1 <= param_2[1];
  }
  return bVar1;
}



//==== 005c2e5c  ns=Global  size=0x68
// sig: undefined FUN_005c2e5c(void)
// callers(0): 
// callees(1): 005565bc FUN_005565bc

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



//==== 005c2ec4  ns=Global  size=0xf4
// sig: undefined FUN_005c2ec4(void)
// callers(6): 0055dc20 FUN_0055dc20; 0055de18 FUN_0055de18; 0055e1b0 FUN_0055e1b0; 0055f8cc FUN_0055f8cc; 0056072c FUN_0056072c; 005c2fb8 FUN_005c2fb8
// callees(0): 

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



//==== 005c2fb8  ns=Global  size=0x78
// sig: undefined FUN_005c2fb8(void)
// callers(3): 0056072c FUN_0056072c; 00566814 FUN_00566814; 005c35e4 FUN_005c35e4
// callees(1): 005c2ec4 FUN_005c2ec4

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



//==== 005c3030  ns=Global  size=0x3c
// sig: undefined FUN_005c3030(void)
// callers(1): 005614d8 FUN_005614d8
// callees(0): 

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



//==== 005c306c  ns=Global  size=0x2d8
// sig: undefined FUN_005c306c(void)
// callers(1): 0056195c FUN_0056195c
// callees(1): 005c5ad0 libc::memcpy

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
      libc::memcpy(piVar3 + 3,__src_00,param_4);
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
          libc::memcpy(__dest,__src,__n);
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



//==== 005c3344  ns=Global  size=0x294
// sig: undefined FUN_005c3344(void)
// callers(3): 0055f8cc FUN_0055f8cc; 00561b00 FUN_00561b00; 005c35d8 FUN_005c35d8
// callees(1): 005c5ad0 libc::memcpy

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
          libc::memcpy(__dest,__src,__n);
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



//==== 005c35d8  ns=Global  size=0xc
// sig: undefined FUN_005c35d8(void)
// callers(1): 0055f8cc FUN_0055f8cc
// callees(1): 005c3344 FUN_005c3344

void FUN_005c35d8(undefined8 param_1,undefined8 param_2)

{
  FUN_005c3344(param_1,0,param_2);
  return;
}



//==== 005c35e4  ns=Global  size=0x7c
// sig: undefined FUN_005c35e4(void)
// callers(3): 0055d1fc FUN_0055d1fc; 0055ed98 FUN_0055ed98; 00561584 FUN_00561584
// callees(1): 005c2fb8 FUN_005c2fb8

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



//==== 005c3660  ns=Global  size=0x48
// sig: undefined FUN_005c3660(void)
// callers(4): 0055d428 FUN_0055d428; 00562954 FUN_00562954; 005633b0 FUN_005633b0; 00569774 FUN_00569774
// callees(0): 

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



//==== 005c36a8  ns=Global  size=0x78
// sig: undefined FUN_005c36a8(void)
// callers(0): 
// callees(0): 

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



//==== 005c3720  ns=Global  size=0x94
// sig: undefined FUN_005c3720(void)
// callers(0): 
// callees(0): 

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



//==== 005c37b4  ns=Global  size=0x3c
// sig: undefined FUN_005c37b4(void)
// callers(0): 
// callees(0): 

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



//==== 005c37f0  ns=Global  size=0x1c
// sig: undefined FUN_005c37f0(void)
// callers(0): 
// callees(0): 

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



//==== 005c380c  ns=Global  size=0x10
// sig: undefined FUN_005c380c(void)
// callers(0): 
// callees(0): 

undefined4 FUN_005c380c(int param_1)

{
  return *(undefined4 *)(param_1 + -4);
}



//==== 005c381c  ns=Global  size=0xd0
// sig: undefined FUN_005c381c(void)
// callers(1): 005c38f0 FUN_005c38f0
// callees(2): 005c4840 idol::abort; 005cd098 libc::printf
// strings: 0067e738: '\n\nAborted Function=%s\nCalled by Function=%s\n' | 0067e770: 'MemBlock:\n  AllocatingFunction=%s\n  Usage=%u\n  LockCnt=%u\n  Size=%u\n'

void FUN_005c381c(int param_1,int param_2,undefined8 param_3)

{
  undefined4 *puVar1;
  ulonglong uVar2;
  undefined1 auStack_50 [40];
  
  uVar2 = ZEXT48(PTR_DAT_0071c1fc);
  puVar1 = (undefined4 *)libc::printf(PTR_s_Aborted_Function__s_Called_by_Fu_0071c1f8,param_3,uVar2)
  ;
  if (param_2 != 0) {
    libc::printf(PTR_s_MemBlock__AllocatingFunction__s_U_0071c200,uVar2,
                 *(uint *)(param_2 + 4) >> 0x1f,(ulonglong)*(uint *)(param_2 + 4) & 0x7fffffff,
                 (ulonglong)*(uint *)(param_2 + 8));
    puVar1 = *(undefined4 **)(param_1 + 0x34);
    if (puVar1 != (undefined4 *)0x0) {
      puVar1 = (undefined4 *)(*(code *)*puVar1)(auStack_50);
    }
  }
                    /* WARNING: Subroutine does not return */
  idol::abort(puVar1);
}



//==== 005c38f0  ns=Global  size=0x10c
// sig: undefined FUN_005c38f0(void)
// callers(0): 
// callees(1): 005c381c FUN_005c381c
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



//==== 005c39fc  ns=Global  size=0x44
// sig: undefined FUN_005c39fc(void)
// callers(0): 
// callees(1): 005c4840 idol::abort

void FUN_005c39fc(int param_1)

{
  if (*(int *)(param_1 + -0xc) == *(int *)(param_1 + *(int *)(param_1 + -4))) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  idol::abort();
}



//==== 005c3a44  ns=Global  size=0x5c
// sig: undefined FUN_005c3a44(void)
// callers(1): 005c3aa0 FUN_005c3aa0
// callees(1): 005519f0 FUN_005519f0

undefined8 FUN_005c3a44(int param_1,undefined4 param_2)

{
  undefined4 uStack00000038;
  
  uStack00000038 = param_2;
  FUN_005519f0(&stack0x00000038);
  *(int *)(param_1 + 0x38) = *(int *)(param_1 + 0x38) - *(int *)(param_1 + 0x28);
  *(int *)(param_1 + 0x40) = *(int *)(param_1 + 0x40) + -1;
  return 0;
}



//==== 005c3aa0  ns=Global  size=0xbc
// sig: undefined FUN_005c3aa0(void)
// callers(2): 005c3b5c FUN_005c3b5c; 005c3c64 FUN_005c3c64
// callees(1): 005c3a44 FUN_005c3a44

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



//==== 005c3b5c  ns=Global  size=0x108
// sig: undefined FUN_005c3b5c(void)
// callers(0): 
// callees(2): 005519f0 FUN_005519f0; 005c3aa0 FUN_005c3aa0

undefined8 FUN_005c3b5c(int param_1,int param_2)

{
  int *piVar1;
  int iVar2;
  undefined8 uVar3;
  int *piVar4;
  uint uVar5;
  undefined1 local_10 [16];
  
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



//==== 005c3c64  ns=Global  size=0xf0
// sig: undefined FUN_005c3c64(void)
// callers(0): 
// callees(2): 005519f0 FUN_005519f0; 005c3aa0 FUN_005c3aa0

undefined8 FUN_005c3c64(int param_1,int param_2)

{
  int *piVar1;
  int iVar2;
  int *piVar3;
  undefined8 uVar4;
  undefined1 local_10 [16];
  
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



//==== 005c3d54  ns=Global  size=0xec
// sig: undefined FUN_005c3d54(void)
// callers(1): 005c4188 FUN_005c4188
// callees(1): 005519f0 FUN_005519f0

undefined8 FUN_005c3d54(int param_1)

{
  int iVar1;
  undefined1 local_20 [4];
  undefined1 local_1c [20];
  
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



//==== 005c3e40  ns=Global  size=0x14c
// sig: undefined FUN_005c3e40(void)
// callers(2): 005c3f8c FUN_005c3f8c; 005c4188 FUN_005c4188
// callees(2): 005519f0 FUN_005519f0; 00551b80 FUN_00551b80

/* WARNING: Removing unreachable block (ram,0x005c3f40) */
/* WARNING: Removing unreachable block (ram,0x005c3f00) */
/* WARNING: Removing unreachable block (ram,0x005c3f78) */

undefined4 FUN_005c3e40(int param_1)

{
  int iVar1;
  uint uVar2;
  undefined1 local_20 [16];
  
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



//==== 005c3f8c  ns=Global  size=0x1fc
// sig: undefined FUN_005c3f8c(void)
// callers(0): 
// callees(2): 00551b80 FUN_00551b80; 005c3e40 FUN_005c3e40

int FUN_005c3f8c(int param_1,uint param_2)

{
  undefined4 *puVar1;
  uint uVar2;
  int *piVar4;
  longlong lVar3;
  int iVar5;
  uint uVar6;
  uint uVar7;
  undefined1 local_30 [24];
  
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



//==== 005c4188  ns=Global  size=0x1e8
// sig: undefined FUN_005c4188(void)
// callers(1): 005c2028 FUN_005c2028
// callees(3): 00551de8 FUN_00551de8; 005c3d54 FUN_005c3d54; 005c3e40 FUN_005c3e40

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
  undefined1 local_30 [24];
  
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



//==== 005c4370  ns=Global  size=0x124
// sig: undefined FUN_005c4370(void)
// callers(0): 
// callees(0): 

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



//==== 005c4494  ns=Global  size=0x94
// sig: undefined FUN_005c4494(void)
// callers(0): 
// callees(0): 

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



//==== 005c4528  ns=Global  size=0x68
// sig: undefined FUN_005c4528(void)
// callers(0): 
// callees(0): 

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



//==== 005c4590  ns=Global  size=0x90
// sig: undefined FUN_005c4590(void)
// callers(1): 005c4620 FUN_005c4620
// callees(1): 005519f0 FUN_005519f0

undefined8 FUN_005c4590(undefined4 *param_1)

{
  undefined8 uVar1;
  undefined1 local_10 [16];
  
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



//==== 005c4620  ns=Global  size=0x1e0
// sig: undefined FUN_005c4620(void)
// callers(1): 005c2028 FUN_005c2028
// callees(4): 00551b80 FUN_00551b80; 00551de8 FUN_00551de8; 005c4590 FUN_005c4590; 005d0140 libc::memset

ulonglong FUN_005c4620(uint *param_1,undefined4 *param_2)

{
  ulonglong uVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  undefined1 local_30 [24];
  
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
          libc::memset(iRam0000002c,0,iRam0000001c);
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



//==== 005c4800  ns=Global  size=0x40
// sig: undefined FUN_005c4800(void)
// callers(1): 005c4840 idol::abort
// callees(0): 

int FUN_005c4800(ulonglong param_1,int param_2)

{
  char cVar1;
  char *pcVar2;
  ulonglong uVar3;
  char cVar4;
  int iVar5;
  longlong lVar6;
  
  iVar5 = 0xf;
  lVar6 = 0x10;
  do {
    uVar3 = param_1 & 0xf;
    pcVar2 = (char *)(param_2 + iVar5);
    param_1 = param_1 >> 4;
    iVar5 = iVar5 + -1;
    cVar1 = (char)uVar3;
    cVar4 = cVar1 + '0';
    if (9 < uVar3) {
      cVar4 = cVar1 + 'W';
    }
    *pcVar2 = cVar4;
    lVar6 = lVar6 + -1;
  } while (lVar6 != 0);
  return param_2;
}



//==== 005c4840  ns=idol  size=0x148
// sig: undefined abort(void)
// callers(57): 005c381c FUN_005c381c; 005c39fc FUN_005c39fc; 005cef7c FUN_005cef7c; 005d04b0 FUN_005d04b0; 005d0504 FUN_005d0504; 005d05b8 FUN_005d05b8; 005d05f4 FUN_005d05f4; 005d06a4 FUN_005d06a4; 005d0854 FUN_005d0854; 005d0948 FUN_005d0948; 005d0a3c FUN_005d0a3c; 005d0b80 FUN_005d0b80; 005d0cf8 FUN_005d0cf8; 005d16bc FUN_005d16bc; 005d172c FUN_005d172c; 005d1770 FUN_005d1770; 005d2264 FUN_005d2264; 005d309c FUN_005d309c; 005d4f08 FUN_005d4f08; 005d53a8 FUN_005d53a8; 005d541c FUN_005d541c; 005d5584 FUN_005d5584; 005ddd80 FUN_005ddd80; 005dde04 FUN_005dde04; 005dde88 FUN_005dde88
// callees(4): 005c4800 FUN_005c4800; 005c4ec8 idol::exit; 006507e4 sys::sys_process_exit; 08000193 syscall::syscall_sys_tty_write
// strings: 0067e7b8: 'abort() is called from 0x' | 0067e7e0: '                  from 0x' | 0067e800: '\n\nContinue... (Lv-2 is still running.)\n'

/* WARNING: Heritage AFTER dead removal. Example location: x0x00000010 : 0x005c48a4 */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

int idol::abort(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined4 uVar3;
  uint uVar4;
  longlong in_stack_00000000;
  undefined8 in_stack_00000010;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [24];
  
  syscall::syscall_sys_tty_write(4,0);
  syscall::syscall_sys_tty_write(1,PTR_s_abort___is_called_from_0x_0071c23c,0x19,auStack_50);
  uVar3 = FUN_005c4800(in_stack_00000010,auStack_48);
  syscall::syscall_sys_tty_write(1,uVar3,0x10,auStack_50);
  puVar1 = PTR_DAT_0071c240;
  syscall::syscall_sys_tty_write(1,PTR_DAT_0071c240,1,auStack_50);
  puVar2 = PTR_s_from_0x_0071c244;
  if (in_stack_00000000 != 0) {
    do {
      syscall::syscall_sys_tty_write(1,puVar2,0x19,auStack_50);
      uVar3 = FUN_005c4800(((longlong *)in_stack_00000000)[2],auStack_48);
      syscall::syscall_sys_tty_write(1,uVar3,0x10,auStack_50);
      syscall::syscall_sys_tty_write(1,puVar1,1,auStack_50);
      in_stack_00000000 = *(longlong *)in_stack_00000000;
    } while (in_stack_00000000 != 0);
  }
  syscall::syscall_sys_tty_write(1,PTR_s_Continue_____Lv_2_is_still_runni_0071c248,0x27,auStack_50);
  sys::sys_process_exit(1);
  uVar4 = 1;
  exit(1);
  return ((int)uVar4 >> 0x1f ^ uVar4) - ((int)uVar4 >> 0x1f);
}



//==== 005c4988  ns=Global  size=0x14
// sig: undefined FUN_005c4988(void)
// callers(6): 0013c5e8 pause::DrawTVTextures; 0013fd08 pause::IconList_Draw; 00144ec0 pause::MenuButton_Draw; 00149f88 pause::SlotConfig_Draw; 0017007c vendor::DrawWeaponIcons; 001717a8 vendor::Vendor_DrawFlickerText
// callees(0): 

int FUN_005c4988(uint param_1)

{
  return ((int)param_1 >> 0x1f ^ param_1) - ((int)param_1 >> 0x1f);
}



//==== 005c499c  ns=Global  size=0x2c
// sig: undefined FUN_005c499c(void)
// callers(1): 005c4c20 FUN_005c4c20
// callees(0): 

uint * FUN_005c499c(uint *param_1,uint param_2,longlong param_3)

{
  uint *puVar1;
  
  puVar1 = param_1;
  if (param_3 != 0) {
    param_2 = param_2 | 1;
    puVar1 = param_1 + 1;
    *param_1 = (uint)param_3;
  }
  *puVar1 = param_2;
  return puVar1 + 1;
}



//==== 005c49c8  ns=Global  size=0x1cc
// sig: undefined FUN_005c49c8(void)
// callers(2): 00014c0c crt0::exit; 005c4ec8 idol::exit
// callees(2): 005cbb70 FUN_005cbb70; 005cbbec FUN_005cbbec

void FUN_005c49c8(void)

{
  uint *puVar1;
  undefined4 *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  
  FUN_005cbbec(1);
  puVar3 = PTR_DAT_0071c24c;
  if (*(int *)PTR_DAT_0071c24c != 0) {
    *(int *)(PTR_DAT_0071c24c + 4) = *(int *)(PTR_DAT_0071c24c + 4) + -4;
    while (puVar1 = *(uint **)(puVar3 + 4), *(uint **)puVar3 <= puVar1) {
      while( true ) {
        puVar2 = (undefined4 *)*puVar1;
        if (((uint)puVar2 & 1) != 0) break;
        (*(code *)*puVar2)(0);
        *(int *)(puVar3 + 4) = *(int *)(puVar3 + 4) + -4;
        puVar1 = *(uint **)(puVar3 + 4);
        if (puVar1 < *(uint **)puVar3) goto LAB_005c4a88;
      }
      (**(code **)((uint)puVar2 & 0xfffffffe))(puVar1[-1]);
      *(int *)(puVar3 + 4) = *(int *)(puVar3 + 4) + -8;
    }
  }
LAB_005c4a88:
  puVar4 = PTR_DAT_0071c254;
  puVar3 = PTR_PTR_0071c250;
  *(int *)PTR_PTR_0071c250 = *(int *)PTR_PTR_0071c250 + -4;
  do {
    puVar1 = *(uint **)puVar3;
    while( true ) {
      if (puVar1 < puVar4) {
        FUN_005cbb70(1);
        return;
      }
      puVar2 = (undefined4 *)*puVar1;
      if (((uint)puVar2 & 1) != 0) break;
      (*(code *)*puVar2)(0);
      *(int *)puVar3 = *(int *)puVar3 + -4;
      puVar1 = *(uint **)puVar3;
    }
    (**(code **)((uint)puVar2 & 0xfffffffe))(puVar1[-1]);
    *(int *)puVar3 = *(int *)puVar3 + -8;
  } while( true );
}



//==== 005c4b94  ns=Global  size=0x8c
// sig: undefined FUN_005c4b94(void)
// callers(1): 005c4c20 FUN_005c4c20
// callees(1): 005d579c FUN_005d579c

bool FUN_005c4b94(uint param_1)

{
  int iVar1;
  int iVar2;
  undefined *puVar3;
  int iVar4;
  
  puVar3 = PTR_DAT_0071c24c;
  iVar1 = *(int *)PTR_DAT_0071c24c;
  iVar2 = *(int *)(PTR_DAT_0071c24c + 4);
  iVar4 = FUN_005d579c(iVar1,((ulonglong)param_1 & 0x3fffffff) << 2);
  if (iVar4 != 0) {
    *(int *)puVar3 = iVar4;
    *(int *)(puVar3 + 4) = iVar4 + (iVar2 - iVar1);
    *(uint *)(puVar3 + 0x108) = param_1 + *(int *)(puVar3 + 0x108);
  }
  return iVar4 == 0;
}



//==== 005c4c20  ns=Global  size=0x160
// sig: undefined FUN_005c4c20(void)
// callers(1): 005c4d80 FUN_005c4d80
// callees(4): 005c499c FUN_005c499c; 005c4b94 FUN_005c4b94; 005cbb70 FUN_005cbb70; 005cbbec FUN_005cbbec

undefined4 FUN_005c4c20(undefined4 param_1,uint param_2)

{
  uint uVar1;
  undefined *puVar2;
  undefined *puVar3;
  int iVar4;
  undefined4 uVar5;
  int iVar6;
  
  FUN_005cbbec(1);
  puVar3 = PTR_PTR_0071c250;
  puVar2 = PTR_DAT_0071c24c;
  iVar6 = ((int)((((int)param_2 >> 0x1f ^ param_2) - ((int)param_2 >> 0x1f)) + -1) >> 0x1f &
          0xfffffffcU) + 8;
  if (*(int *)PTR_DAT_0071c24c == 0) {
    if (PTR_DAT_0071c24c + 0x108 < (undefined *)(iVar6 + *(int *)PTR_PTR_0071c250)) {
      iVar6 = FUN_005c4b94(0x20);
      if (iVar6 != 0) {
        return 1;
      }
      uVar5 = FUN_005c499c(*(undefined4 *)(puVar2 + 4),param_1,param_2);
      *(undefined4 *)(puVar2 + 4) = uVar5;
    }
    else {
      uVar5 = FUN_005c499c(*(int *)PTR_PTR_0071c250,param_1,param_2);
      *(undefined4 *)puVar3 = uVar5;
    }
  }
  else {
    uVar1 = *(uint *)(PTR_DAT_0071c24c + 0x108);
    iVar4 = *(int *)(PTR_DAT_0071c24c + 4);
    if (*(int *)PTR_DAT_0071c24c + uVar1 < (uint)(iVar6 + iVar4)) {
      iVar6 = FUN_005c4b94(uVar1 + ((int)uVar1 >> 1) + (uint)((int)uVar1 < 0 && (uVar1 & 1) != 0));
      if (iVar6 != 0) {
        return 1;
      }
      iVar4 = *(int *)(puVar2 + 4);
    }
    uVar5 = FUN_005c499c(iVar4,param_1,param_2);
    *(undefined4 *)(puVar2 + 4) = uVar5;
  }
  FUN_005cbb70(1);
  return 0;
}



//==== 005c4d80  ns=Global  size=0xc
// sig: undefined FUN_005c4d80(void)
// callers(3): 005e3558 FUN_005e3558; 005e38b0 FUN_005e38b0; 005e39dc FUN_005e39dc
// callees(1): 005c4c20 FUN_005c4c20

void FUN_005c4d80(undefined8 param_1)

{
  FUN_005c4c20(param_1,0,0);
  return;
}



//==== 005c4d8c  ns=Global  size=0x108
// sig: undefined FUN_005c4d8c(void)
// callers(4): 0053022c FUN_0053022c; 00531798 FUN_00531798; 00531a30 FUN_00531a30; 00531e64 FUN_00531e64
// callees(0): 

int FUN_005c4d8c(undefined4 param_1,int param_2,ulonglong param_3,int param_4,undefined4 *param_5)

{
  ulonglong uVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  
  if (param_3 != 0) {
    do {
      while( true ) {
        uVar1 = (param_3 << 0x20) >> 0x21;
        uVar3 = (uint)param_3 >> 1;
        iVar4 = param_2 + uVar3 * param_4;
        iVar2 = (*(code *)*param_5)(param_1,iVar4);
        if (-1 < iVar2) break;
        param_3 = uVar1;
        if (uVar3 == 0) {
          return 0;
        }
      }
      param_2 = iVar4 + param_4;
      if (iVar2 == 0) {
        return iVar4;
      }
      param_3 = (param_3 - uVar1) - 1;
    } while ((int)param_3 != 0);
  }
  return 0;
}



//==== 005c4e94  ns=Global  size=0x34
// sig: undefined FUN_005c4e94(void)
// callers(1): 004f7450 FUN_004f7450
// callees(2): 005c5900 FUN_005c5900; 005d58bc FUN_005d58bc

undefined4 FUN_005c4e94(void)

{
  undefined4 uVar1;
  
  uVar1 = FUN_005c5900();
  uVar1 = FUN_005d58bc(uVar1);
  return uVar1;
}



//==== 005c4ec8  ns=idol  size=0x48
// sig: void exit(int __status)
// callers(3): 00013a20 boot::GameShutDown; 00014c7c boot::entry; 005c4840 idol::abort
// callees(5): 00014b98 idol::ExitToSystem; 005c49c8 FUN_005c49c8; 005c8b94 FUN_005c8b94; 0064ed80 FUN_0064ed80; 080003dc syscall::syscall_syscall_988

void idol::exit(int __status)

{
  undefined4 uVar1;
  ushort *puVar2;
  
  syscall::syscall_syscall_988(1,0);
  ExitToSystem();
  FUN_005c49c8();
  FUN_0064ed80();
  puVar2 = (ushort *)FUN_005c8b94(__status);
  if (((*puVar2 & 3) != 0) && (-1 < (short)puVar2[2])) {
    FUN_005c50cc(puVar2);
    FUN_005cbbec(2);
    uVar1 = *(undefined4 *)(puVar2 + 0x22);
    FUN_005d03b4(uVar1);
    if ((*puVar2 & 0x40) != 0) {
      FUN_005d580c(*(undefined4 *)(puVar2 + 4));
    }
    puVar2[4] = 0;
    puVar2[5] = 0;
    FUN_005cf554(puVar2[2]);
    FUN_005c8e64(puVar2);
    FUN_005d0370(uVar1);
    FUN_005d045c(uVar1);
    if (((puVar2 != (ushort *)PTR_DAT_0071c258) && (puVar2 != (ushort *)PTR_DAT_0071c25c)) &&
       (puVar2 != (ushort *)PTR_DAT_0071c260)) {
      FUN_005d580c(uVar1);
    }
    FUN_005cbb70(2);
  }
  return;
}



//==== 005c4f10  ns=Global  size=0x14c
// sig: undefined FUN_005c4f10(void)
// callers(6): 004ded28 FUN_004ded28; 004e3538 FUN_004e3538; 004f9ee4 FUN_004f9ee4; 005c505c FUN_005c505c; 005c8f4c FUN_005c8f4c; 0064c764 FUN_0064c764
// callees(9): 005c50cc FUN_005c50cc; 005c8e64 FUN_005c8e64; 005cbb70 FUN_005cbb70; 005cbbec FUN_005cbbec; 005cf554 FUN_005cf554; 005d0370 FUN_005d0370; 005d03b4 FUN_005d03b4; 005d045c FUN_005d045c; 005d580c FUN_005d580c

undefined4 FUN_005c4f10(ushort *param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int iVar3;
  
  if (((*param_1 & 3) == 0) || ((short)param_1[2] < 0)) {
    uVar2 = 0xffffffff;
  }
  else {
    uVar2 = FUN_005c50cc(param_1);
    FUN_005cbbec(2);
    uVar1 = *(undefined4 *)(param_1 + 0x22);
    FUN_005d03b4(uVar1);
    if ((*param_1 & 0x40) != 0) {
      FUN_005d580c(*(undefined4 *)(param_1 + 4));
    }
    param_1[4] = 0;
    param_1[5] = 0;
    iVar3 = FUN_005cf554(param_1[2]);
    if (iVar3 != 0) {
      uVar2 = 0xffffffff;
    }
    FUN_005c8e64(param_1);
    FUN_005d0370(uVar1);
    FUN_005d045c(uVar1);
    if (((param_1 != (ushort *)PTR_DAT_0071c258) && (param_1 != (ushort *)PTR_DAT_0071c25c)) &&
       (param_1 != (ushort *)PTR_DAT_0071c260)) {
      FUN_005d580c(uVar1);
    }
    FUN_005cbb70(2);
  }
  return uVar2;
}



//==== 005c505c  ns=Global  size=0x70
// sig: undefined FUN_005c505c(void)
// callers(1): 00014bc0 crt0::_libc_cleanup
// callees(1): 005c4f10 FUN_005c4f10

void FUN_005c505c(void)

{
  int iVar1;
  int iVar2;
  undefined *puVar3;
  undefined *puVar4;
  
  puVar4 = PTR_DAT_0071c264;
  iVar2 = *(int *)PTR_DAT_0071c264;
  puVar3 = PTR_DAT_0071c258;
  while (PTR_DAT_0071c258 = puVar3, iVar2 != 0) {
    iVar1 = *(int *)(iVar2 + 0x3c);
    FUN_005c4f10(iVar2);
    iVar2 = iVar1;
    puVar3 = PTR_DAT_0071c258;
  }
  *(undefined4 *)puVar4 = 0;
  FUN_005c4f10(puVar3);
  FUN_005c4f10(PTR_DAT_0071c25c);
  FUN_005c4f10(PTR_DAT_0071c260);
  return;
}



//==== 005c50cc  ns=Global  size=0x224
// sig: undefined FUN_005c50cc(void)
// callers(9): 005c4f10 FUN_005c4f10; 005c50cc FUN_005c50cc; 005c5638 FUN_005c5638; 005c9568 FUN_005c9568; 005c9998 FUN_005c9998; 005cee5c FUN_005cee5c; 005d5914 FUN_005d5914; 005d5a08 FUN_005d5a08; 005e3b1c FUN_005e3b1c
// callees(6): 005c50cc FUN_005c50cc; 005cbb70 FUN_005cbb70; 005cbbbc FUN_005cbbbc; 005cbbec FUN_005cbbec; 005cbc38 FUN_005cbc38; 005cfe6c FUN_005cfe6c

int FUN_005c50cc(ushort *param_1)

{
  ushort uVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  
  if (param_1 != (ushort *)0x0) {
    FUN_005cbc38(param_1);
    uVar1 = *param_1;
    if ((uVar1 & 0x2000) == 0) {
      FUN_005cbbbc(param_1);
      return 0;
    }
    uVar7 = *(uint *)(param_1 + 4);
    uVar6 = *(uint *)(param_1 + 8);
    if (uVar7 < uVar6) {
      do {
        iVar3 = FUN_005cfe6c(param_1[2],uVar7,uVar6 - uVar7);
        uVar7 = uVar7 + iVar3;
        if (iVar3 < 1) {
          uVar2 = *(undefined4 *)(param_1 + 4);
          *(undefined4 *)(param_1 + 0x18) = uVar2;
          *param_1 = *param_1 | 0x200;
          *(undefined4 *)(param_1 + 8) = uVar2;
          *(undefined4 *)(param_1 + 0xc) = uVar2;
          FUN_005cbbbc(param_1);
          return -1;
        }
        uVar6 = *(uint *)(param_1 + 8);
        *(longlong *)(param_1 + 0x24) = *(longlong *)(param_1 + 0x24) + (longlong)iVar3;
      } while (uVar7 < uVar6);
      uVar1 = *param_1;
      uVar7 = *(uint *)(param_1 + 4);
    }
    *(uint *)(param_1 + 0x18) = uVar7;
    *param_1 = (ushort)((((ulonglong)uVar1 << 0x20) >> 0x2e) << 0xe) |
               (ushort)((((ulonglong)uVar1 & 0x1fff) << 0x12) >> 0x10) >> 2;
    *(uint *)(param_1 + 8) = uVar7;
    *(uint *)(param_1 + 0xc) = uVar7;
    FUN_005cbbbc(param_1);
    return 0;
  }
  FUN_005cbbec(2);
  iVar3 = FUN_005c50cc(PTR_DAT_0071c268);
  iVar3 = iVar3 >> 0x1f;
  iVar4 = FUN_005c50cc(PTR_DAT_0071c26c);
  if (iVar4 < 0) {
    iVar3 = -1;
  }
  iVar4 = FUN_005c50cc(PTR_DAT_0071c270);
  if (iVar4 < 0) {
    iVar3 = -1;
  }
  for (iVar4 = *(int *)PTR_DAT_0071c274; iVar4 != 0; iVar4 = *(int *)(iVar4 + 0x3c)) {
    while (iVar5 = FUN_005c50cc(iVar4), -1 < iVar5) {
      iVar4 = *(int *)(iVar4 + 0x3c);
      if (iVar4 == 0) goto LAB_005c52b4;
    }
    iVar3 = -1;
  }
LAB_005c52b4:
  FUN_005cbb70(2);
  return iVar3;
}



//==== 005c52f0  ns=Global  size=0x74
// sig: undefined FUN_005c52f0(void)
// callers(4): 004ded28 FUN_004ded28; 004e3538 FUN_004e3538; 004f9ee4 FUN_004f9ee4; 0064c764 FUN_0064c764
// callees(4): 005c8dcc FUN_005c8dcc; 005c8f4c FUN_005c8f4c; 005cbb70 FUN_005cbb70; 005cbbec FUN_005cbbec

undefined4 FUN_005c52f0(undefined4 param_1,undefined4 param_2)

{
  undefined4 uVar1;
  
  FUN_005cbbec(2);
  uVar1 = FUN_005c8dcc();
  uVar1 = FUN_005c8f4c(param_1,param_2,uVar1,0xffffffffffffffff);
  FUN_005cbb70(2);
  return uVar1;
}



//==== 005c5364  ns=Global  size=0x204
// sig: undefined FUN_005c5364(void)
// callers(3): 004ded28 FUN_004ded28; 004e3538 FUN_004e3538; 0064c764 FUN_0064c764
// callees(4): 005c5ad0 libc::memcpy; 005c91f4 FUN_005c91f4; 005cbbbc FUN_005cbbbc; 005cbc38 FUN_005cbc38

ulonglong FUN_005c5364(longlong param_1,uint param_2,int param_3,ushort *param_4)

{
  uint uVar1;
  undefined1 *puVar2;
  void *__dest;
  int iVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  
  uVar5 = (longlong)(int)param_2 * (longlong)param_3;
  if ((int)uVar5 == 0) {
    return 0;
  }
  FUN_005cbc38(param_4);
  uVar4 = uVar5 & 0xffffffff;
  uVar6 = uVar5;
  if ((*param_4 & 0x4000) == 0) {
    uVar4 = *(ulonglong *)(param_4 + 0x24);
LAB_005c5418:
    do {
      if (*(int *)(param_4 + 0x14) != 0) {
        *(int *)(param_4 + 10) = *(int *)(param_4 + 0x14);
        param_4[0x14] = 0;
        param_4[0x15] = 0;
      }
      uVar1 = *(uint *)(param_4 + 0x30);
      if ((uVar4 < (ulonglong)uVar1 - *(longlong *)(param_4 + 0x28)) || (uVar1 <= uVar4)) {
        iVar3 = FUN_005c91f4(param_4);
        if (iVar3 < 1) break;
        uVar4 = *(ulonglong *)(param_4 + 0x24);
        uVar1 = *(uint *)(param_4 + 0x30);
      }
      __dest = (void *)param_1;
      uVar7 = uVar1 - uVar4;
      if ((uVar6 & 0xffffffff) < (uVar1 - uVar4 & 0xffffffff)) {
        uVar7 = uVar6;
      }
      uVar6 = uVar6 - uVar7;
      param_1 = param_1 + uVar7;
      libc::memcpy(__dest,*(void **)(param_4 + 8),(size_t)uVar7);
      uVar4 = (uVar7 & 0xffffffff) + *(longlong *)(param_4 + 0x24);
      *(size_t *)(param_4 + 8) = (size_t)uVar7 + *(int *)(param_4 + 8);
      *(ulonglong *)(param_4 + 0x2c) = *(longlong *)(param_4 + 0x2c) + (uVar7 & 0xffffffff);
      *(ulonglong *)(param_4 + 0x24) = uVar4;
    } while ((int)uVar6 != 0);
LAB_005c54c8:
    FUN_005cbbbc(param_4);
    uVar5 = (uVar5 - uVar6 & 0xffffffff) / (ulonglong)param_2;
  }
  else {
    do {
      puVar2 = *(undefined1 **)(param_4 + 0xe);
      if ((undefined1 *)((int)param_4 + 0x43) <= puVar2) {
        if ((int)uVar6 == 0) goto LAB_005c54c8;
        uVar4 = *(ulonglong *)(param_4 + 0x24);
        goto LAB_005c5418;
      }
      uVar6 = uVar6 - 1;
      *(undefined1 *)param_1 = *puVar2;
      *(undefined1 **)(param_4 + 0xe) = puVar2 + 1;
      uVar4 = uVar4 - 1;
      param_1 = param_1 + 1;
    } while (uVar4 != 0);
    FUN_005cbbbc(param_4);
    uVar5 = (uVar5 - uVar6 & 0xffffffff) / (ulonglong)param_2;
  }
  return uVar5;
}



//==== 005c5568  ns=Global  size=0x74
// sig: undefined FUN_005c5568(void)
// callers(2): 004e3538 FUN_004e3538; 0064c764 FUN_0064c764
// callees(3): 005c9568 FUN_005c9568; 005cbbbc FUN_005cbbbc; 005cbc38 FUN_005cbc38

undefined4 FUN_005c5568(undefined8 param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 uVar1;
  
  FUN_005cbc38();
  uVar1 = FUN_005c9568(param_1,0,param_2,param_3);
  FUN_005cbbbc(param_1);
  return uVar1;
}



//==== 005c55dc  ns=Global  size=0x5c
// sig: undefined FUN_005c55dc(void)
// callers(2): 004e3538 FUN_004e3538; 0064c764 FUN_0064c764
// callees(3): 005c8bdc FUN_005c8bdc; 005cbbbc FUN_005cbbbc; 005cbc38 FUN_005cbc38

undefined4 FUN_005c55dc(undefined8 param_1)

{
  undefined4 uVar1;
  
  FUN_005cbc38();
  uVar1 = FUN_005c8bdc(param_1,0);
  FUN_005cbbbc(param_1);
  return uVar1;
}



//==== 005c5638  ns=Global  size=0x278
// sig: undefined FUN_005c5638(void)
// callers(5): 004f9ee4 FUN_004f9ee4; 005cd028 FUN_005cd028; 005cd128 FUN_005cd128; 005cd3d4 FUN_005cd3d4; 005cd4bc FUN_005cd4bc
// callees(6): 005c50cc FUN_005c50cc; 005c5984 FUN_005c5984; 005c5ad0 libc::memcpy; 005c9998 FUN_005c9998; 005cbbbc FUN_005cbbbc; 005cbc38 FUN_005cbc38

ulonglong FUN_005c5638(void *param_1,uint param_2,ulonglong param_3,ushort *param_4)

{
  ushort uVar1;
  void *__dest;
  int iVar2;
  int iVar3;
  size_t sVar4;
  size_t sVar5;
  size_t __n;
  size_t __n_00;
  
  sVar4 = param_2 * (int)param_3;
  if (sVar4 == 0) {
    return 0;
  }
  if (param_2 == 0) {
    return param_3 & 0xffffffff;
  }
  FUN_005cbc38(param_4);
  sVar5 = sVar4;
  do {
    iVar2 = 0;
    if (*(uint *)(param_4 + 8) < *(uint *)(param_4 + 0xc)) {
      uVar1 = *param_4;
    }
    else {
      iVar3 = FUN_005c9998(param_4);
      if (iVar3 < 0) break;
      uVar1 = *param_4;
    }
    __n = sVar5;
    if ((uVar1 & 0x400) != 0) {
      iVar2 = FUN_005c5984(param_1,10,sVar5);
      if (iVar2 != 0) {
        __n = (iVar2 - (int)param_1) + 1;
      }
    }
    __dest = *(void **)(param_4 + 8);
    __n_00 = *(int *)(param_4 + 0xc) - (int)__dest;
    if (__n_00 < __n) {
      sVar5 = sVar5 - __n_00;
      libc::memcpy(__dest,param_1,__n_00);
      *(size_t *)(param_4 + 8) = *(int *)(param_4 + 8) + __n_00;
      __n = __n_00;
    }
    else {
      libc::memcpy(__dest,param_1,__n);
      sVar5 = sVar5 - __n;
      *(size_t *)(param_4 + 8) = *(int *)(param_4 + 8) + __n;
      if ((iVar2 != 0) && (iVar2 = FUN_005c50cc(param_4), iVar2 != 0)) break;
    }
    param_1 = (void *)((int)param_1 + __n);
  } while (sVar5 != 0);
  if ((*param_4 & 0x800) != 0) {
    FUN_005c50cc(param_4);
  }
  FUN_005cbbbc(param_4);
  return (ulonglong)(sVar4 - sVar5) / (ulonglong)param_2;
}



//==== 005c58b0  ns=Global  size=0x50
// sig: undefined FUN_005c58b0(void)
// callers(5): 0052ca3c FUN_0052ca3c; 0052da68 FUN_0052da68; 005571d8 FUN_005571d8; 00557270 FUN_00557270; 00557308 FUN_00557308
// callees(2): 005cbe4c FUN_005cbe4c; 08000090 syscall::syscall_sys_time_get_timezone

undefined4 FUN_005c58b0(undefined8 *param_1)

{
  undefined4 uVar1;
  undefined1 auStack_30 [4];
  undefined1 auStack_2c [20];
  
  syscall::syscall_sys_time_get_timezone(auStack_30,auStack_2c);
  uVar1 = FUN_005cbe4c(0,*param_1,0);
  return uVar1;
}



//==== 005c5900  ns=Global  size=0x84
// sig: undefined FUN_005c5900(void)
// callers(2): 0052ca3c FUN_0052ca3c; 005c4e94 FUN_005c4e94
// callees(2): 005cbe4c FUN_005cbe4c; 08000090 syscall::syscall_sys_time_get_timezone

undefined4 FUN_005c5900(longlong *param_1)

{
  undefined4 uVar1;
  int local_30;
  uint local_2c [3];
  
  syscall::syscall_sys_time_get_timezone(&local_30,local_2c);
  uVar1 = FUN_005cbe4c(0,(longlong)(local_30 * 0x3c) + *param_1,
                       ((int)local_2c[0] >> 0x1f) - ((int)local_2c[0] >> 0x1f ^ local_2c[0]) >> 0x1f
                      );
  return uVar1;
}



//==== 005c5984  ns=Global  size=0x14c
// sig: undefined FUN_005c5984(void)
// callers(7): 005c5638 FUN_005c5638; 005cac2c FUN_005cac2c; 005caf7c FUN_005caf7c; 005d6d30 FUN_005d6d30; 005d7d48 FUN_005d7d48; 005d853c FUN_005d853c; 005da754 FUN_005da754
// callees(0): 

longlong FUN_005c5984(longlong param_1,ulonglong param_2,ulonglong param_3)

{
  ulonglong uVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  
  param_2 = param_2 & 0xff;
  if ((param_3 & 0xffffffff) != 0) {
    if ((param_3 & 0xffffffff) < 8) {
      do {
        if (param_2 == *(byte *)param_1) {
          return param_1;
        }
        param_1 = param_1 + 1;
        param_3 = param_3 - 1;
      } while (param_3 != 0);
      return 0;
    }
    dataCacheBlockTouch(param_1);
    uVar4 = -param_1 & 7;
    if (uVar4 != 0) {
      param_3 = param_3 - uVar4;
      do {
        if (*(byte *)param_1 == param_2) {
          return param_1;
        }
        param_1 = param_1 + 1;
        uVar4 = uVar4 - 1;
      } while (uVar4 != 0);
      if ((param_3 & 0xffffffff) < 8) goto LAB_005c5aac;
    }
    uVar3 = param_1 + param_3;
    uVar2 = param_2 << 8 | param_2;
    uVar2 = uVar2 << 0x10 | uVar2;
    uVar4 = -param_1 & 0x7f;
    if (uVar4 == 0) goto LAB_005c5a44;
    if (uVar4 < (param_3 & 0xffffffff)) {
      param_3 = param_3 - uVar4;
      uVar4 = uVar4 >> 3;
    }
    else {
      uVar4 = param_3 >> 3;
      param_3 = param_3 & 7;
    }
    while( true ) {
      do {
        uVar1 = *(ulonglong *)param_1 ^ (uVar2 << 0x20 | uVar2);
        uVar1 = (ulonglong)
                LZCOUNT(~(uVar1 | 0x7f7f7f7f7f7f7f7f |
                         (uVar1 & 0x7f7f7f7f7f7f7f7f) + 0x7f7f7f7f7f7f7f7f)) >> 3;
        if (uVar1 < 8) {
          return param_1 + uVar1;
        }
        param_1 = param_1 + 8;
        uVar4 = uVar4 - 1;
      } while (uVar4 != 0);
      if ((longlong)(uVar3 & 0xfffffffffffffff8) <= param_1) break;
LAB_005c5a44:
      dataCacheBlockTouch(param_1 + 0x80);
      uVar4 = param_3 >> 3;
      if (0xf < (uVar4 & 0xffffffff)) {
        uVar4 = 0x10;
      }
      param_3 = param_3 + uVar4 * -8;
    }
    if ((param_3 & 0xffffffff) != 0) {
LAB_005c5aac:
      do {
        if (param_2 == *(byte *)param_1) {
          return param_1;
        }
        param_1 = param_1 + 1;
        param_3 = param_3 - 1;
      } while (param_3 != 0);
      return 0;
    }
  }
  return 0;
}



//==== 005c5ad0  ns=libc  size=0x5c4
// sig: void * memcpy(void * __dest, void * __src, size_t __n)
// callers(217): 000109e4 boot::FrontEnd_UpdateSceneCamera; 00011648 boot::LoadGameplay; 0001401c boot::boot; 000564d0 collproc::CollMoby_TransformVerts; 000611a0 debug::DebugFontPrintN; 00066088 draw::ComposeCameraMatrix; 00085300 hero::Hero_TransAnim; 000dcf58 loaders::NAVG_LoadFile; 000e0854 loaders::LoadGadgetModel; 000e1b28 map::Map_LoadPlanetMap; 000e4c0c map::Map_SaveRevealMask; 000e91a8 mesh::StageTileBuf; 000e9c08 mesh::WaterTile_StepWave; 000fa940 mobyfunc::InterpolateAnimation; 00112af0 mobyutil::MB_ToastMessageByIndex; 00112c20 mobyutil::MB_UnlockLevel; 001402c8 pause::MenuText_Draw; 0015dfe0 space::Space_SetCutsceneCamera; 00161788 space::UpdateSpace; 00165800 map::ReadIndexedBuffer; 001683a0 update::UpdateSceneCamera; 0016da88 vendor::Vendor_PreUpdate; 001e8018 mobyupd::update1160::UpdateMoby_1160_JetFighterUnused; 002409e0 mobyupdate_helpers::M16_002409e0; 002edb38 mobyupdate_helpers::M211_002edb38
// callees(0): 

void * libc::memcpy(void *__dest,void *__src,size_t __n)

{
  int iVar1;
  int iVar2;
  undefined2 *puVar3;
  undefined4 *puVar4;
  undefined8 *puVar7;
  ulonglong uVar5;
  undefined1 *puVar8;
  ulonglong uVar6;
  undefined8 *puVar9;
  ulonglong uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  longlong lVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  ulonglong uVar16;
  ulonglong uVar17;
  undefined8 *puVar18;
  undefined8 uVar19;
  longlong lVar20;
  longlong lVar21;
  ulonglong uVar22;
  
  uVar10 = (ulonglong)(int)__n;
  uVar17 = ZEXT48(__dest);
  uVar5 = ZEXT48(__src);
  if (uVar10 < 8) {
    uVar22 = uVar10;
    uVar16 = uVar17;
    if (uVar10 == 0) {
      return __dest;
    }
  }
  else {
    dataCacheBlockTouch(uVar5);
    if ((uVar5 & 0xfff) < (uVar17 & 0xfff)) {
      uVar5 = uVar5 + uVar10;
      uVar17 = uVar17 + uVar10;
      dataCacheBlockTouch(uVar5 - 0x80);
      for (uVar22 = uVar5 & 7; uVar22 != 0; uVar22 = uVar22 - 1) {
        uVar5 = uVar5 - 1;
        uVar10 = uVar10 - 1;
        uVar17 = uVar17 - 1;
        *(undefined1 *)uVar17 = *(undefined1 *)uVar5;
      }
      if (uVar10 == 0) {
        return __dest;
      }
      uVar22 = uVar17 & 3;
      if (uVar22 == 1) {
        if (0xf < uVar10) {
          uVar22 = uVar10 >> 4;
          uVar6 = uVar5;
          uVar16 = uVar17;
          do {
            uVar5 = uVar6 - 0x10;
            uVar17 = uVar16 - 0x10;
            uVar10 = uVar10 - 0x10;
            lVar21 = *(longlong *)uVar5;
            uVar11 = *(undefined8 *)((int)uVar6 + -8);
            iVar1 = (int)uVar16;
            *(char *)(iVar1 + -1) = (char)uVar11;
            dataCacheBlockTouch(uVar6 - 0x90);
            *(undefined1 *)uVar17 = (char)((ulonglong)lVar21 >> 0x38);
            *(uint *)(iVar1 + -9) = (uint)((ulonglong)uVar11 >> 0x28) | (uint)(lVar21 << 0x18);
            *(int *)(iVar1 + -5) = (int)((ulonglong)uVar11 >> 8);
            *(int *)(iVar1 + -0xd) = (int)((ulonglong)lVar21 >> 8);
            *(short *)(iVar1 + -0xf) = (short)((ulonglong)lVar21 >> 0x28);
            uVar22 = uVar22 - 1;
            uVar6 = uVar5;
            uVar16 = uVar17;
          } while (uVar22 != 0);
        }
      }
      else if (uVar22 == 2) {
        if (0xf < uVar10) {
          uVar22 = uVar10 >> 4;
          uVar6 = uVar5;
          uVar16 = uVar17;
          do {
            uVar5 = uVar6 - 0x10;
            uVar17 = uVar16 - 0x10;
            uVar10 = uVar10 - 0x10;
            uVar11 = *(undefined8 *)((int)uVar6 + -8);
            lVar21 = *(longlong *)uVar5;
            iVar1 = (int)uVar16;
            *(short *)(iVar1 + -2) = (short)uVar11;
            dataCacheBlockTouch(uVar6 - 0x90);
            *(undefined2 *)uVar17 = (short)((ulonglong)lVar21 >> 0x30);
            *(uint *)(iVar1 + -10) =
                 (uint)(ushort)((ulonglong)uVar11 >> 0x30) | (uint)(lVar21 << 0x10);
            *(int *)(iVar1 + -6) = (int)((ulonglong)uVar11 >> 0x10);
            *(int *)(iVar1 + -0xe) = (int)((ulonglong)lVar21 >> 0x10);
            uVar22 = uVar22 - 1;
            uVar6 = uVar5;
            uVar16 = uVar17;
          } while (uVar22 != 0);
        }
      }
      else if (uVar22 == 3) {
        if (0xf < uVar10) {
          uVar22 = uVar10 >> 4;
          uVar6 = uVar5;
          uVar16 = uVar17;
          do {
            uVar5 = uVar6 - 0x10;
            uVar17 = uVar16 - 0x10;
            uVar10 = uVar10 - 0x10;
            uVar11 = *(undefined8 *)((int)uVar6 + -8);
            lVar21 = *(longlong *)uVar5;
            iVar1 = (int)uVar16;
            *(char *)(iVar1 + -1) = (char)uVar11;
            dataCacheBlockTouch(uVar6 - 0x90);
            *(undefined1 *)uVar17 = (char)((ulonglong)lVar21 >> 0x38);
            *(uint *)(iVar1 + -0xb) = (uint)(byte)((ulonglong)uVar11 >> 0x38) | (uint)(lVar21 << 8);
            *(short *)(iVar1 + -3) = (short)((ulonglong)uVar11 >> 8);
            *(int *)(iVar1 + -7) = (int)((ulonglong)uVar11 >> 0x18);
            *(int *)(iVar1 + -0xf) = (int)((ulonglong)lVar21 >> 0x18);
            uVar22 = uVar22 - 1;
            uVar6 = uVar5;
            uVar16 = uVar17;
          } while (uVar22 != 0);
        }
      }
      else {
        uVar22 = uVar5;
        uVar6 = uVar10;
        uVar16 = uVar17;
        if ((uVar17 & 7) == 0) {
          while (uVar5 = uVar22, uVar10 = uVar6, uVar17 = uVar16, 0x2f < uVar6) {
            uVar5 = uVar22 - 0x30;
            uVar10 = uVar6 - 0x30;
            uVar17 = uVar16 - 0x30;
            iVar1 = (int)uVar22;
            uVar14 = *(undefined8 *)(iVar1 + -0x10);
            uVar19 = *(undefined8 *)(iVar1 + -0x18);
            uVar15 = *(undefined8 *)(iVar1 + -0x20);
            uVar12 = *(undefined8 *)(iVar1 + -0x28);
            uVar11 = *(undefined8 *)uVar5;
            iVar2 = (int)uVar16;
            *(undefined8 *)(iVar2 + -8) = *(undefined8 *)(iVar1 + -8);
            *(undefined8 *)(iVar2 + -0x10) = uVar14;
            *(undefined8 *)(iVar2 + -0x18) = uVar19;
            *(undefined8 *)(iVar2 + -0x20) = uVar15;
            *(undefined8 *)(iVar2 + -0x28) = uVar12;
            *(undefined8 *)uVar17 = uVar11;
            if (uVar10 < 0x30) break;
            uVar14 = *(undefined8 *)(iVar1 + -0x40);
            uVar19 = *(undefined8 *)(iVar1 + -0x48);
            uVar15 = *(undefined8 *)(iVar1 + -0x50);
            uVar12 = *(undefined8 *)(iVar1 + -0x58);
            uVar11 = *(undefined8 *)(uVar22 - 0x60);
            *(undefined8 *)(iVar2 + -0x38) = *(undefined8 *)(iVar1 + -0x38);
            *(undefined8 *)(iVar2 + -0x40) = uVar14;
            *(undefined8 *)(iVar2 + -0x48) = uVar19;
            *(undefined8 *)(iVar2 + -0x50) = uVar15;
            *(undefined8 *)(iVar2 + -0x58) = uVar12;
            *(undefined8 *)(uVar16 - 0x60) = uVar11;
            dataCacheBlockTouch(uVar22 - 0x160);
            uVar22 = uVar22 - 0x60;
            uVar6 = uVar6 - 0x60;
            uVar16 = uVar16 - 0x60;
          }
          if (7 < uVar10) {
            uVar22 = uVar10 >> 3;
            do {
              uVar5 = uVar5 - 8;
              uVar10 = uVar10 - 8;
              uVar17 = uVar17 - 8;
              *(undefined8 *)uVar17 = *(undefined8 *)uVar5;
              uVar22 = uVar22 - 1;
            } while (uVar22 != 0);
          }
        }
        else {
          while (0x17 < uVar10) {
            uVar10 = uVar10 - 0x18;
            uVar14 = *(undefined8 *)((int)uVar5 + -8);
            uVar12 = *(undefined8 *)((int)uVar5 + -0x10);
            uVar11 = *(undefined8 *)(uVar5 - 0x18);
            dataCacheBlockTouch(uVar5 - 0x118);
            iVar1 = (int)uVar17;
            *(int *)(iVar1 + -4) = (int)uVar14;
            *(int *)(iVar1 + -8) = (int)((ulonglong)uVar14 >> 0x20);
            *(int *)(iVar1 + -0x10) = (int)((ulonglong)uVar12 >> 0x20);
            *(undefined4 *)(uVar17 - 0x18) = (int)((ulonglong)uVar11 >> 0x20);
            *(int *)(iVar1 + -0xc) = (int)uVar12;
            *(int *)(iVar1 + -0x14) = (int)uVar11;
            uVar5 = uVar5 - 0x18;
            uVar17 = uVar17 - 0x18;
          }
        }
      }
      if (uVar10 != 0) {
        do {
          uVar5 = uVar5 - 1;
          uVar17 = uVar17 - 1;
          *(undefined1 *)uVar17 = *(undefined1 *)uVar5;
          uVar10 = uVar10 - 1;
        } while (uVar10 != 0);
        return __dest;
      }
      return __dest;
    }
    dataCacheBlockTouch(uVar5 + 0x80);
    if (((uint)__src & 7) != 0) {
      lVar21 = 8 - (uVar5 & 7);
      do {
        puVar8 = (undefined1 *)uVar5;
        uVar10 = uVar10 - 1;
        uVar5 = uVar5 + 1;
        *(undefined1 *)uVar17 = *puVar8;
        uVar17 = uVar17 + 1;
        lVar21 = lVar21 + -1;
      } while (lVar21 != 0);
    }
    if (uVar10 == 0) {
      return __dest;
    }
    uVar22 = uVar17 & 3;
    if (uVar22 == 1) {
      if (0xf < uVar10) {
        uVar22 = uVar10 >> 4;
        do {
          lVar20 = *(longlong *)uVar5;
          lVar21 = uVar5 + 0x80;
          uVar10 = uVar10 - 0x10;
          lVar13 = ((longlong *)uVar5)[1];
          uVar5 = uVar5 + 0x10;
          dataCacheBlockTouch(lVar21);
          puVar8 = (undefined1 *)uVar17;
          puVar8[0xf] = (char)lVar13;
          *puVar8 = (char)((ulonglong)lVar20 >> 0x38);
          *(uint *)(puVar8 + 7) = (uint)((ulonglong)lVar13 >> 0x28) | (uint)(lVar20 << 0x18);
          *(short *)(puVar8 + 1) = (short)((ulonglong)lVar20 >> 0x28);
          *(int *)(puVar8 + 3) = (int)((ulonglong)lVar20 >> 8);
          *(int *)(puVar8 + 0xb) = (int)((ulonglong)lVar13 >> 8);
          uVar17 = uVar17 + 0x10;
          uVar22 = uVar22 - 1;
        } while (uVar22 != 0);
      }
      goto LAB_005c5b14;
    }
    if (uVar22 == 2) {
      if (0xf < uVar10) {
        uVar22 = uVar10 >> 4;
        do {
          lVar20 = *(longlong *)uVar5;
          lVar13 = uVar5 + 0x80;
          uVar10 = uVar10 - 0x10;
          lVar21 = ((longlong *)uVar5)[1];
          uVar5 = uVar5 + 0x10;
          dataCacheBlockTouch(lVar13);
          puVar3 = (undefined2 *)uVar17;
          puVar3[7] = (short)lVar21;
          *puVar3 = (short)((ulonglong)lVar20 >> 0x30);
          *(uint *)(puVar3 + 3) = (uint)(ushort)((ulonglong)lVar21 >> 0x30) | (uint)(lVar20 << 0x10)
          ;
          *(int *)(puVar3 + 1) = (int)((ulonglong)lVar20 >> 0x10);
          *(int *)(puVar3 + 5) = (int)((ulonglong)lVar21 >> 0x10);
          uVar17 = uVar17 + 0x10;
          uVar22 = uVar22 - 1;
        } while (uVar22 != 0);
      }
      goto LAB_005c5b14;
    }
    if (uVar22 == 3) {
      if (0xf < uVar10) {
        uVar22 = uVar10 >> 4;
        do {
          lVar21 = *(longlong *)uVar5;
          lVar13 = uVar5 + 0x80;
          uVar10 = uVar10 - 0x10;
          lVar20 = ((longlong *)uVar5)[1];
          uVar5 = uVar5 + 0x10;
          dataCacheBlockTouch(lVar13);
          puVar8 = (undefined1 *)uVar17;
          puVar8[0xf] = (char)lVar20;
          *puVar8 = (char)((ulonglong)lVar21 >> 0x38);
          *(uint *)(puVar8 + 5) = (uint)(byte)((ulonglong)lVar20 >> 0x38) | (uint)(lVar21 << 8);
          *(int *)(puVar8 + 1) = (int)((ulonglong)lVar21 >> 0x18);
          *(int *)(puVar8 + 9) = (int)((ulonglong)lVar20 >> 0x18);
          *(short *)(puVar8 + 0xd) = (short)((ulonglong)lVar20 >> 8);
          uVar17 = uVar17 + 0x10;
          uVar22 = uVar22 - 1;
        } while (uVar22 != 0);
      }
      goto LAB_005c5b14;
    }
    if ((uVar17 & 7) != 0) {
      while (0x17 < uVar10) {
        puVar7 = (undefined8 *)uVar5;
        uVar12 = *puVar7;
        uVar10 = uVar10 - 0x18;
        uVar11 = puVar7[1];
        uVar14 = puVar7[2];
        dataCacheBlockTouch(uVar5 + 0x100);
        puVar4 = (undefined4 *)uVar17;
        puVar4[1] = (int)uVar12;
        *puVar4 = (int)((ulonglong)uVar12 >> 0x20);
        puVar4[2] = (int)((ulonglong)uVar11 >> 0x20);
        puVar4[3] = (int)uVar11;
        uVar5 = uVar5 + 0x18;
        puVar4[4] = (int)((ulonglong)uVar14 >> 0x20);
        puVar4[5] = (int)uVar14;
        uVar17 = uVar17 + 0x18;
      }
      goto LAB_005c5b14;
    }
    uVar6 = uVar5;
    uVar22 = uVar10;
    uVar16 = uVar17;
    if (0x100 < uVar10) {
      do {
        puVar7 = (undefined8 *)uVar6;
        uVar11 = puVar7[1];
        uVar15 = puVar7[2];
        uVar12 = puVar7[3];
        uVar19 = puVar7[4];
        uVar14 = puVar7[5];
        uVar5 = uVar6 + 0x30;
        puVar18 = (undefined8 *)uVar17;
        *puVar18 = *puVar7;
        puVar18[1] = uVar11;
        puVar18[2] = uVar15;
        puVar18[3] = uVar12;
        puVar18[4] = uVar19;
        puVar18[5] = uVar14;
        uVar22 = uVar10 - 0x30;
        uVar16 = uVar17 + 0x30;
        if (uVar10 - 0x30 < 0x30) break;
        puVar9 = (undefined8 *)uVar5;
        uVar10 = uVar10 - 0x60;
        uVar15 = puVar7[7];
        uVar11 = puVar7[8];
        uVar19 = puVar7[9];
        uVar14 = puVar7[10];
        uVar12 = puVar7[0xb];
        uVar5 = uVar6 + 0x60;
        *(undefined8 *)(uVar17 + 0x30) = *puVar9;
        puVar18[7] = uVar15;
        puVar18[8] = uVar11;
        puVar18[9] = uVar19;
        puVar18[10] = uVar14;
        puVar18[0xb] = uVar12;
        uVar17 = uVar17 + 0x60;
        dataCacheBlockTouch(uVar6 + 0x160);
        uVar6 = uVar5;
        uVar22 = uVar10;
        uVar16 = uVar17;
      } while (0x2f < uVar10);
    }
  }
  uVar10 = uVar22;
  uVar17 = uVar16;
  if (0xf < uVar22) {
    uVar22 = uVar22 >> 3;
    do {
      puVar7 = (undefined8 *)uVar5;
      uVar10 = uVar10 - 8;
      uVar5 = uVar5 + 8;
      *(undefined8 *)uVar17 = *puVar7;
      uVar17 = uVar17 + 8;
      uVar22 = uVar22 - 1;
    } while (uVar22 != 0);
  }
LAB_005c5b14:
  if (uVar10 != 0) {
    do {
      puVar8 = (undefined1 *)uVar5;
      uVar5 = uVar5 + 1;
      *(undefined1 *)uVar17 = *puVar8;
      uVar17 = uVar17 + 1;
      uVar10 = uVar10 - 1;
    } while (uVar10 != 0);
    return __dest;
  }
  return __dest;
}



//==== 005c6094  ns=Global  size=0x12d4
// sig: undefined FUN_005c6094(void)
// callers(11): 005054a4 FUN_005054a4; 00531798 FUN_00531798; 00531a30 FUN_00531a30; 005871e4 FUN_005871e4; 005c7c20 FUN_005c7c20; 005ebac0 FUN_005ebac0; 005f0370 FUN_005f0370; 005f1788 FUN_005f1788; 005f5398 FUN_005f5398; 00644278 FUN_00644278; 00644340 FUN_00644340
// callees(0): 

/* WARNING: Type propagation algorithm not settling */

undefined8 * FUN_005c6094(undefined8 *param_1,undefined8 *param_2,uint param_3)

{
  undefined1 uVar1;
  undefined1 uVar2;
  undefined1 uVar3;
  undefined2 uVar4;
  undefined2 uVar5;
  undefined2 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  uint uVar10;
  undefined8 *puVar11;
  undefined8 uVar12;
  int iVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  longlong lVar16;
  undefined1 *puVar17;
  undefined1 *puVar18;
  uint uVar19;
  undefined4 *puVar20;
  undefined2 *puVar21;
  undefined2 *puVar22;
  undefined4 *puVar23;
  undefined8 *puVar24;
  undefined1 *puVar25;
  undefined4 *puVar26;
  undefined2 *puVar27;
  int iVar28;
  undefined8 *puVar29;
  undefined1 *puVar30;
  undefined4 *puVar31;
  undefined2 *puVar32;
  undefined8 *puVar33;
  undefined8 *puVar34;
  undefined8 *puVar35;
  undefined8 *puVar36;
  undefined8 *puVar37;
  
  if (param_1 == param_2) {
    return param_1;
  }
  if ((param_2 < param_1) && (puVar11 = (undefined8 *)((int)param_2 + param_3), param_1 < puVar11))
  {
    puVar34 = (undefined8 *)((int)param_1 + param_3);
    if (param_3 < 0x21) {
LAB_005c61c0:
      if (param_3 < 4) goto joined_r0x005c6248;
    }
    else {
      uVar19 = (uint)puVar34 & 7;
      uVar10 = (uint)puVar11 & 7;
      iVar28 = uVar19 - uVar10;
      if (uVar19 <= uVar10) {
        iVar28 = uVar10 - uVar19;
      }
      uVar19 = uVar19 | uVar10;
      if (uVar19 == 0) {
        lVar16 = (((ulonglong)(param_3 - 0x20) << 0x20) >> 0x25) + 1;
        do {
          uVar10 = param_3;
          puVar35 = puVar11 + -1;
          puVar33 = puVar11 + -2;
          puVar37 = puVar11 + -3;
          puVar11 = puVar11 + -4;
          puVar36 = puVar34 + -1;
          puVar29 = puVar34 + -2;
          puVar24 = puVar34 + -3;
          puVar34 = puVar34 + -4;
          uVar12 = *puVar33;
          uVar15 = *puVar37;
          uVar14 = *puVar11;
          param_3 = uVar10 - 0x20;
          *puVar36 = *puVar35;
          *puVar29 = uVar12;
          *puVar24 = uVar15;
          *puVar34 = uVar14;
          lVar16 = lVar16 + -1;
        } while (lVar16 != 0);
        if (7 < param_3) {
          lVar16 = (((ulonglong)(uVar10 - 0x28) << 0x20) >> 0x23) + 1;
          do {
            puVar11 = puVar11 + -1;
            puVar34 = puVar34 + -1;
            param_3 = param_3 - 8;
            *puVar34 = *puVar11;
            lVar16 = lVar16 + -1;
          } while (lVar16 != 0);
        }
        goto LAB_005c61c0;
      }
      if ((uVar19 & 3) == 0) {
        lVar16 = (((ulonglong)(param_3 - 0x10) << 0x20) >> 0x24) + 1;
        if (iVar28 == 0) {
          puVar11 = (undefined8 *)((int)puVar11 + -4);
          puVar34 = (undefined8 *)((int)puVar34 + -4);
          uVar10 = param_3 - 4;
          *(undefined4 *)puVar34 = *(undefined4 *)puVar11;
          if (0x1f < uVar10) {
            lVar16 = (((ulonglong)(param_3 - 0x24) << 0x20) >> 0x25) + 1;
            do {
              puVar35 = puVar11 + -1;
              puVar33 = puVar11 + -2;
              puVar37 = puVar11 + -3;
              puVar11 = puVar11 + -4;
              puVar36 = puVar34 + -1;
              puVar29 = puVar34 + -2;
              puVar24 = puVar34 + -3;
              puVar34 = puVar34 + -4;
              uVar12 = *puVar33;
              uVar15 = *puVar37;
              uVar14 = *puVar11;
              uVar10 = uVar10 - 0x20;
              *puVar36 = *puVar35;
              *puVar29 = uVar12;
              *puVar24 = uVar15;
              *puVar34 = uVar14;
              lVar16 = lVar16 + -1;
            } while (lVar16 != 0);
          }
          param_3 = uVar10;
          if (7 < param_3) {
            lVar16 = (((ulonglong)(param_3 - 8) << 0x20) >> 0x23) + 1;
            do {
              puVar11 = puVar11 + -1;
              puVar34 = puVar34 + -1;
              param_3 = param_3 - 8;
              *puVar34 = *puVar11;
              lVar16 = lVar16 + -1;
            } while (lVar16 != 0);
          }
        }
        else {
          do {
            uVar10 = param_3;
            puVar31 = (undefined4 *)((int)puVar11 + -4);
            puVar37 = puVar11 + -1;
            puVar23 = (undefined4 *)((int)puVar11 + -0xc);
            puVar11 = puVar11 + -2;
            puVar20 = (undefined4 *)((int)puVar34 + -4);
            puVar33 = puVar34 + -1;
            puVar26 = (undefined4 *)((int)puVar34 + -0xc);
            puVar34 = puVar34 + -2;
            uVar7 = *(undefined4 *)puVar37;
            uVar8 = *puVar23;
            uVar9 = *(undefined4 *)puVar11;
            param_3 = uVar10 - 0x10;
            *puVar20 = *puVar31;
            *(undefined4 *)puVar33 = uVar7;
            *puVar26 = uVar8;
            *(undefined4 *)puVar34 = uVar9;
            lVar16 = lVar16 + -1;
          } while (lVar16 != 0);
          if (3 < param_3) {
            lVar16 = (((ulonglong)(uVar10 - 0x14) << 0x20) >> 0x22) + 1;
            do {
              puVar11 = (undefined8 *)((int)puVar11 + -4);
              puVar34 = (undefined8 *)((int)puVar34 + -4);
              param_3 = param_3 - 4;
              *(undefined4 *)puVar34 = *(undefined4 *)puVar11;
              lVar16 = lVar16 + -1;
            } while (lVar16 != 0);
          }
        }
        goto LAB_005c61c0;
      }
      if ((uVar19 & 1) == 0) {
        if (iVar28 == 0) {
          puVar33 = (undefined8 *)((int)puVar11 + -2);
          puVar37 = (undefined8 *)((int)puVar34 + -2);
          *(undefined2 *)puVar37 = *(undefined2 *)puVar33;
          uVar10 = param_3 - 2;
          if (((uint)puVar37 & 7) != 0) {
            puVar33 = (undefined8 *)((int)puVar11 + -6);
            puVar37 = (undefined8 *)((int)puVar34 + -6);
            *(undefined4 *)puVar37 = *(undefined4 *)puVar33;
            uVar10 = param_3 - 6;
          }
          param_3 = uVar10;
          puVar11 = puVar33;
          puVar34 = puVar37;
          if (0x1f < param_3) {
            lVar16 = (((ulonglong)(param_3 - 0x20) << 0x20) >> 0x25) + 1;
            do {
              puVar35 = puVar33 + -1;
              puVar34 = puVar33 + -2;
              puVar11 = puVar33 + -3;
              puVar33 = puVar33 + -4;
              puVar36 = puVar37 + -1;
              puVar29 = puVar37 + -2;
              puVar24 = puVar37 + -3;
              puVar37 = puVar37 + -4;
              uVar12 = *puVar34;
              uVar15 = *puVar11;
              uVar14 = *puVar33;
              param_3 = param_3 - 0x20;
              *puVar36 = *puVar35;
              *puVar29 = uVar12;
              *puVar24 = uVar15;
              *puVar37 = uVar14;
              lVar16 = lVar16 + -1;
              puVar11 = puVar33;
              puVar34 = puVar37;
            } while (lVar16 != 0);
          }
          if (7 < param_3) {
            lVar16 = (((ulonglong)(param_3 - 8) << 0x20) >> 0x23) + 1;
            do {
              puVar11 = puVar11 + -1;
              puVar34 = puVar34 + -1;
              param_3 = param_3 - 8;
              *puVar34 = *puVar11;
              lVar16 = lVar16 + -1;
            } while (lVar16 != 0);
          }
        }
        else {
          lVar16 = (((ulonglong)(param_3 - 8) << 0x20) >> 0x23) + 1;
          if (iVar28 == 4) {
            puVar11 = (undefined8 *)((int)puVar11 + -2);
            puVar34 = (undefined8 *)((int)puVar34 + -2);
            uVar10 = param_3 - 2;
            *(undefined2 *)puVar34 = *(undefined2 *)puVar11;
            if (0xf < uVar10) {
              lVar16 = (((ulonglong)(param_3 - 0x12) << 0x20) >> 0x24) + 1;
              do {
                puVar31 = (undefined4 *)((int)puVar11 + -4);
                puVar37 = puVar11 + -1;
                puVar23 = (undefined4 *)((int)puVar11 + -0xc);
                puVar11 = puVar11 + -2;
                puVar20 = (undefined4 *)((int)puVar34 + -4);
                puVar33 = puVar34 + -1;
                puVar26 = (undefined4 *)((int)puVar34 + -0xc);
                puVar34 = puVar34 + -2;
                uVar7 = *(undefined4 *)puVar37;
                uVar8 = *puVar23;
                uVar9 = *(undefined4 *)puVar11;
                uVar10 = uVar10 - 0x10;
                *puVar20 = *puVar31;
                *(undefined4 *)puVar33 = uVar7;
                *puVar26 = uVar8;
                *(undefined4 *)puVar34 = uVar9;
                lVar16 = lVar16 + -1;
              } while (lVar16 != 0);
            }
            param_3 = uVar10;
            if (3 < param_3) {
              lVar16 = (((ulonglong)(param_3 - 4) << 0x20) >> 0x22) + 1;
              do {
                puVar11 = (undefined8 *)((int)puVar11 + -4);
                puVar34 = (undefined8 *)((int)puVar34 + -4);
                param_3 = param_3 - 4;
                *(undefined4 *)puVar34 = *(undefined4 *)puVar11;
                lVar16 = lVar16 + -1;
              } while (lVar16 != 0);
            }
          }
          else {
            do {
              uVar10 = param_3;
              puVar32 = (undefined2 *)((int)puVar11 + -2);
              puVar23 = (undefined4 *)((int)puVar11 + -4);
              puVar21 = (undefined2 *)((int)puVar11 + -6);
              puVar11 = puVar11 + -1;
              puVar22 = (undefined2 *)((int)puVar34 + -2);
              puVar31 = (undefined4 *)((int)puVar34 + -4);
              puVar27 = (undefined2 *)((int)puVar34 + -6);
              puVar34 = puVar34 + -1;
              uVar4 = *(undefined2 *)puVar23;
              uVar5 = *puVar21;
              uVar6 = *(undefined2 *)puVar11;
              param_3 = uVar10 - 8;
              *puVar22 = *puVar32;
              *(undefined2 *)puVar31 = uVar4;
              *puVar27 = uVar5;
              *(undefined2 *)puVar34 = uVar6;
              lVar16 = lVar16 + -1;
            } while (lVar16 != 0);
            if (1 < param_3) {
              lVar16 = (((ulonglong)(uVar10 - 10) << 0x20) >> 0x21) + 1;
              do {
                puVar11 = (undefined8 *)((int)puVar11 + -2);
                puVar34 = (undefined8 *)((int)puVar34 + -2);
                param_3 = param_3 - 2;
                *(undefined2 *)puVar34 = *(undefined2 *)puVar11;
                lVar16 = lVar16 + -1;
              } while (lVar16 != 0);
            }
          }
        }
        goto LAB_005c61c0;
      }
      if (iVar28 == 0) {
        puVar37 = (undefined8 *)((int)puVar11 + -1);
        puVar33 = (undefined8 *)((int)puVar34 + -1);
        uVar10 = (uint)puVar33 & 7;
        uVar19 = param_3 - 1;
        *(undefined1 *)puVar33 = *(undefined1 *)puVar37;
        if (uVar10 == 4) {
LAB_005c7110:
          uVar19 = uVar19 - 4;
          *(undefined4 *)((int)puVar33 + -4) = *(undefined4 *)((int)puVar37 + -4);
          puVar37 = (undefined8 *)((int)puVar37 + -4);
          puVar33 = (undefined8 *)((int)puVar33 + -4);
        }
        else if (uVar10 == 6) {
          uVar19 = param_3 - 3;
          *(undefined2 *)((int)puVar34 + -3) = *(undefined2 *)((int)puVar11 + -3);
          puVar37 = (undefined8 *)((int)puVar11 + -3);
          puVar33 = (undefined8 *)((int)puVar34 + -3);
        }
        else if (uVar10 == 2) {
          puVar37 = (undefined8 *)((int)puVar11 + -3);
          puVar33 = (undefined8 *)((int)puVar34 + -3);
          uVar19 = param_3 - 3;
          *(undefined2 *)puVar33 = *(undefined2 *)puVar37;
          goto LAB_005c7110;
        }
        puVar34 = puVar33;
        puVar11 = puVar37;
        param_3 = uVar19;
        if (0x1f < uVar19) {
          lVar16 = (((ulonglong)(uVar19 - 0x20) << 0x20) >> 0x25) + 1;
          do {
            puVar35 = puVar11 + -1;
            puVar33 = puVar11 + -2;
            puVar37 = puVar11 + -3;
            puVar11 = puVar11 + -4;
            puVar36 = puVar34 + -1;
            puVar29 = puVar34 + -2;
            puVar24 = puVar34 + -3;
            puVar34 = puVar34 + -4;
            uVar12 = *puVar33;
            uVar15 = *puVar37;
            uVar14 = *puVar11;
            param_3 = param_3 - 0x20;
            *puVar36 = *puVar35;
            *puVar29 = uVar12;
            *puVar24 = uVar15;
            *puVar34 = uVar14;
            lVar16 = lVar16 + -1;
          } while (lVar16 != 0);
        }
        if (7 < param_3) {
          lVar16 = (((ulonglong)(param_3 - 8) << 0x20) >> 0x23) + 1;
          do {
            puVar11 = puVar11 + -1;
            puVar34 = puVar34 + -1;
            param_3 = param_3 - 8;
            *puVar34 = *puVar11;
            lVar16 = lVar16 + -1;
          } while (lVar16 != 0);
        }
        goto LAB_005c61c0;
      }
      if (iVar28 == 4) {
        puVar33 = (undefined8 *)((int)puVar34 + -1);
        *(undefined1 *)puVar33 = *(undefined1 *)((int)puVar11 + -1);
        puVar37 = (undefined8 *)((int)puVar11 + -1);
        uVar10 = param_3 - 1;
        if (((uint)puVar33 & 3) != 0) {
          *(undefined2 *)((int)puVar34 + -3) = *(undefined2 *)((int)puVar11 + -3);
          puVar37 = (undefined8 *)((int)puVar11 + -3);
          uVar10 = param_3 - 3;
          puVar33 = (undefined8 *)((int)puVar34 + -3);
        }
        puVar34 = puVar33;
        param_3 = uVar10;
        puVar11 = puVar37;
        if (0xf < param_3) {
          lVar16 = (((ulonglong)(param_3 - 0x10) << 0x20) >> 0x24) + 1;
          do {
            puVar31 = (undefined4 *)((int)puVar11 + -4);
            puVar37 = puVar11 + -1;
            puVar23 = (undefined4 *)((int)puVar11 + -0xc);
            puVar11 = puVar11 + -2;
            puVar20 = (undefined4 *)((int)puVar34 + -4);
            puVar33 = puVar34 + -1;
            puVar26 = (undefined4 *)((int)puVar34 + -0xc);
            puVar34 = puVar34 + -2;
            uVar7 = *(undefined4 *)puVar37;
            uVar8 = *puVar23;
            uVar9 = *(undefined4 *)puVar11;
            param_3 = param_3 - 0x10;
            *puVar20 = *puVar31;
            *(undefined4 *)puVar33 = uVar7;
            *puVar26 = uVar8;
            *(undefined4 *)puVar34 = uVar9;
            lVar16 = lVar16 + -1;
          } while (lVar16 != 0);
        }
        if (3 < param_3) {
          lVar16 = (((ulonglong)(param_3 - 4) << 0x20) >> 0x22) + 1;
          do {
            puVar11 = (undefined8 *)((int)puVar11 + -4);
            puVar34 = (undefined8 *)((int)puVar34 + -4);
            param_3 = param_3 - 4;
            *(undefined4 *)puVar34 = *(undefined4 *)puVar11;
            lVar16 = lVar16 + -1;
          } while (lVar16 != 0);
        }
        goto LAB_005c61c0;
      }
      if (iVar28 == 2) {
        puVar11 = (undefined8 *)((int)puVar11 + -1);
        puVar34 = (undefined8 *)((int)puVar34 + -1);
        uVar10 = param_3 - 1;
        *(undefined1 *)puVar34 = *(undefined1 *)puVar11;
        if (7 < uVar10) {
          lVar16 = (((ulonglong)(param_3 - 9) << 0x20) >> 0x23) + 1;
          do {
            puVar32 = (undefined2 *)((int)puVar11 + -2);
            puVar23 = (undefined4 *)((int)puVar11 + -4);
            puVar21 = (undefined2 *)((int)puVar11 + -6);
            puVar11 = puVar11 + -1;
            puVar22 = (undefined2 *)((int)puVar34 + -2);
            puVar31 = (undefined4 *)((int)puVar34 + -4);
            puVar27 = (undefined2 *)((int)puVar34 + -6);
            puVar34 = puVar34 + -1;
            uVar4 = *(undefined2 *)puVar23;
            uVar5 = *puVar21;
            uVar6 = *(undefined2 *)puVar11;
            uVar10 = uVar10 - 8;
            *puVar22 = *puVar32;
            *(undefined2 *)puVar31 = uVar4;
            *puVar27 = uVar5;
            *(undefined2 *)puVar34 = uVar6;
            lVar16 = lVar16 + -1;
          } while (lVar16 != 0);
        }
        param_3 = uVar10;
        if (1 < param_3) {
          lVar16 = (((ulonglong)(param_3 - 2) << 0x20) >> 0x21) + 1;
          do {
            puVar11 = (undefined8 *)((int)puVar11 + -2);
            puVar34 = (undefined8 *)((int)puVar34 + -2);
            param_3 = param_3 - 2;
            *(undefined2 *)puVar34 = *(undefined2 *)puVar11;
            lVar16 = lVar16 + -1;
          } while (lVar16 != 0);
        }
        goto LAB_005c61c0;
      }
    }
    lVar16 = (((ulonglong)(param_3 - 4) << 0x20) >> 0x22) + 1;
    do {
      puVar30 = (undefined1 *)((int)puVar11 + -1);
      puVar21 = (undefined2 *)((int)puVar11 + -2);
      puVar18 = (undefined1 *)((int)puVar11 + -3);
      puVar11 = (undefined8 *)((int)puVar11 + -4);
      puVar17 = (undefined1 *)((int)puVar34 + -1);
      puVar32 = (undefined2 *)((int)puVar34 + -2);
      puVar25 = (undefined1 *)((int)puVar34 + -3);
      puVar34 = (undefined8 *)((int)puVar34 + -4);
      uVar1 = *(undefined1 *)puVar21;
      uVar2 = *puVar18;
      uVar3 = *(undefined1 *)puVar11;
      param_3 = param_3 - 4;
      *puVar17 = *puVar30;
      *(undefined1 *)puVar32 = uVar1;
      *puVar25 = uVar2;
      *(undefined1 *)puVar34 = uVar3;
      lVar16 = lVar16 + -1;
    } while (lVar16 != 0);
joined_r0x005c6248:
    for (; param_3 != 0; param_3 = param_3 - 1) {
      puVar11 = (undefined8 *)((int)puVar11 + -1);
      puVar34 = (undefined8 *)((int)puVar34 + -1);
      *(undefined1 *)puVar34 = *(undefined1 *)puVar11;
    }
    return param_1;
  }
  puVar11 = param_1;
  if (param_3 < 0x21) {
LAB_005c6298:
    if (param_3 < 4) goto LAB_005c62fc;
  }
  else {
    uVar19 = (uint)param_1 & 7;
    uVar10 = (uint)param_2 & 7;
    iVar28 = uVar19 - uVar10;
    if (uVar10 < uVar19) {
      if (uVar19 != 0 || uVar10 != 0) goto LAB_005c6364;
LAB_005c644c:
      iVar28 = 0;
      lVar16 = (((ulonglong)(param_3 - 0x20) << 0x20) >> 0x25) + 1;
      do {
        uVar10 = param_3;
        puVar11 = (undefined8 *)(iVar28 + (int)param_2);
        puVar34 = (undefined8 *)(iVar28 + (int)param_1);
        param_3 = uVar10 - 0x20;
        iVar28 = iVar28 + 0x20;
        uVar15 = puVar11[1];
        uVar14 = puVar11[2];
        uVar12 = puVar11[3];
        *puVar34 = *puVar11;
        puVar34[3] = uVar12;
        puVar34[1] = uVar15;
        puVar34[2] = uVar14;
        lVar16 = lVar16 + -1;
      } while (lVar16 != 0);
      param_2 = (undefined8 *)(iVar28 + (int)param_2);
      puVar11 = (undefined8 *)((int)param_1 + iVar28);
      if (param_3 < 8) goto LAB_005c6298;
      iVar28 = 0;
      lVar16 = (((ulonglong)(uVar10 - 0x28) << 0x20) >> 0x23) + 1;
      do {
        puVar34 = (undefined8 *)(iVar28 + (int)param_2);
        puVar37 = (undefined8 *)(iVar28 + (int)puVar11);
        param_3 = param_3 - 8;
        iVar28 = iVar28 + 8;
        *puVar37 = *puVar34;
        lVar16 = lVar16 + -1;
      } while (lVar16 != 0);
LAB_005c64f0:
      param_2 = (undefined8 *)((int)param_2 + iVar28);
      puVar11 = (undefined8 *)((int)puVar11 + iVar28);
      goto LAB_005c6298;
    }
    iVar28 = uVar10 - uVar19;
    if (uVar19 == 0 && uVar10 == 0) goto LAB_005c644c;
LAB_005c6364:
    if (((uVar19 | uVar10) & 3) == 0) {
      lVar16 = (((ulonglong)(param_3 - 0x10) << 0x20) >> 0x24) + 1;
      iVar13 = 0;
      if (iVar28 == 0) {
        uVar10 = param_3 - 4;
        uVar7 = *(undefined4 *)param_2;
        param_2 = (undefined8 *)((int)param_2 + 4);
        *(undefined4 *)param_1 = uVar7;
        puVar11 = (undefined8 *)((int)param_1 + 4);
        if (0x1f < uVar10) {
          lVar16 = (((ulonglong)(param_3 - 0x24) << 0x20) >> 0x25) + 1;
          puVar34 = param_2;
          puVar37 = puVar11;
          do {
            param_2 = puVar34 + 4;
            puVar11 = puVar37 + 4;
            uVar10 = uVar10 - 0x20;
            uVar15 = *puVar34;
            uVar14 = puVar34[1];
            uVar12 = puVar34[2];
            puVar37[3] = puVar34[3];
            *puVar37 = uVar15;
            puVar37[1] = uVar14;
            puVar37[2] = uVar12;
            lVar16 = lVar16 + -1;
            puVar34 = param_2;
            puVar37 = puVar11;
          } while (lVar16 != 0);
        }
        param_3 = uVar10;
        if (7 < param_3) {
          iVar28 = 0;
          lVar16 = (((ulonglong)(param_3 - 8) << 0x20) >> 0x23) + 1;
          do {
            puVar34 = (undefined8 *)(iVar28 + (int)param_2);
            puVar37 = (undefined8 *)(iVar28 + (int)puVar11);
            param_3 = param_3 - 8;
            iVar28 = iVar28 + 8;
            *puVar37 = *puVar34;
            lVar16 = lVar16 + -1;
          } while (lVar16 != 0);
LAB_005c6440:
          param_2 = (undefined8 *)((int)param_2 + iVar28);
          puVar11 = (undefined8 *)((int)puVar11 + iVar28);
        }
      }
      else {
        do {
          uVar10 = param_3;
          puVar23 = (undefined4 *)((int)param_2 + iVar13);
          puVar31 = (undefined4 *)(iVar13 + (int)param_1);
          param_3 = uVar10 - 0x10;
          iVar13 = iVar13 + 0x10;
          uVar7 = puVar23[1];
          uVar8 = puVar23[2];
          uVar9 = puVar23[3];
          *puVar31 = *puVar23;
          puVar31[3] = uVar9;
          puVar31[1] = uVar7;
          puVar31[2] = uVar8;
          lVar16 = lVar16 + -1;
        } while (lVar16 != 0);
        param_2 = (undefined8 *)(iVar13 + (int)param_2);
        puVar11 = (undefined8 *)((int)param_1 + iVar13);
        if (3 < param_3) {
          iVar28 = 0;
          lVar16 = (((ulonglong)(uVar10 - 0x14) << 0x20) >> 0x22) + 1;
          do {
            puVar23 = (undefined4 *)(iVar28 + (int)param_2);
            puVar31 = (undefined4 *)(iVar28 + (int)puVar11);
            param_3 = param_3 - 4;
            iVar28 = iVar28 + 4;
            *puVar31 = *puVar23;
            lVar16 = lVar16 + -1;
          } while (lVar16 != 0);
          goto LAB_005c64f0;
        }
      }
      goto LAB_005c6298;
    }
    if (((uVar19 | uVar10) & 1) == 0) {
      if (iVar28 == 0) {
        puVar11 = (undefined8 *)((int)param_1 + 2);
        puVar34 = (undefined8 *)((int)param_2 + 2);
        *(undefined2 *)param_1 = *(undefined2 *)param_2;
        uVar10 = param_3 - 2;
        if (((uint)puVar11 & 7) != 0) {
          uVar7 = *(undefined4 *)puVar34;
          puVar34 = (undefined8 *)((int)param_2 + 6);
          *(undefined4 *)puVar11 = uVar7;
          puVar11 = (undefined8 *)((int)param_1 + 6);
          uVar10 = param_3 - 6;
        }
        param_3 = uVar10;
        param_2 = puVar34;
        if (0x1f < param_3) {
          iVar28 = 0;
          lVar16 = (((ulonglong)(param_3 - 0x20) << 0x20) >> 0x25) + 1;
          do {
            puVar37 = (undefined8 *)(iVar28 + (int)puVar34);
            puVar33 = (undefined8 *)(iVar28 + (int)puVar11);
            param_3 = param_3 - 0x20;
            iVar28 = iVar28 + 0x20;
            uVar15 = puVar37[1];
            uVar14 = puVar37[2];
            uVar12 = puVar37[3];
            *puVar33 = *puVar37;
            puVar33[3] = uVar12;
            puVar33[1] = uVar15;
            puVar33[2] = uVar14;
            lVar16 = lVar16 + -1;
          } while (lVar16 != 0);
          puVar11 = (undefined8 *)((int)puVar11 + iVar28);
          param_2 = (undefined8 *)((int)puVar34 + iVar28);
        }
        if (7 < param_3) {
          iVar28 = 0;
          lVar16 = (((ulonglong)(param_3 - 8) << 0x20) >> 0x23) + 1;
          do {
            puVar34 = (undefined8 *)(iVar28 + (int)param_2);
            puVar37 = (undefined8 *)(iVar28 + (int)puVar11);
            param_3 = param_3 - 8;
            iVar28 = iVar28 + 8;
            *puVar37 = *puVar34;
            lVar16 = lVar16 + -1;
          } while (lVar16 != 0);
          goto LAB_005c64f0;
        }
      }
      else {
        lVar16 = (((ulonglong)(param_3 - 8) << 0x20) >> 0x23) + 1;
        iVar13 = 0;
        if (iVar28 == 4) {
          uVar10 = param_3 - 2;
          uVar4 = *(undefined2 *)param_2;
          param_2 = (undefined8 *)((int)param_2 + 2);
          *(undefined2 *)param_1 = uVar4;
          puVar11 = (undefined8 *)((int)param_1 + 2);
          if (0xf < uVar10) {
            lVar16 = (((ulonglong)(param_3 - 0x12) << 0x20) >> 0x24) + 1;
            puVar34 = puVar11;
            puVar37 = param_2;
            do {
              param_2 = puVar37 + 2;
              puVar11 = puVar34 + 2;
              uVar10 = uVar10 - 0x10;
              uVar7 = *(undefined4 *)puVar37;
              uVar8 = *(undefined4 *)((int)puVar37 + 4);
              uVar9 = *(undefined4 *)(puVar37 + 1);
              *(undefined4 *)((int)puVar34 + 0xc) = *(undefined4 *)((int)puVar37 + 0xc);
              *(undefined4 *)puVar34 = uVar7;
              *(undefined4 *)((int)puVar34 + 4) = uVar8;
              *(undefined4 *)(puVar34 + 1) = uVar9;
              lVar16 = lVar16 + -1;
              puVar34 = puVar11;
              puVar37 = param_2;
            } while (lVar16 != 0);
          }
          param_3 = uVar10;
          if (3 < param_3) {
            iVar28 = 0;
            lVar16 = (((ulonglong)(param_3 - 4) << 0x20) >> 0x22) + 1;
            do {
              puVar23 = (undefined4 *)(iVar28 + (int)param_2);
              puVar31 = (undefined4 *)(iVar28 + (int)puVar11);
              param_3 = param_3 - 4;
              iVar28 = iVar28 + 4;
              *puVar31 = *puVar23;
              lVar16 = lVar16 + -1;
            } while (lVar16 != 0);
            goto LAB_005c6440;
          }
        }
        else {
          do {
            uVar10 = param_3;
            puVar21 = (undefined2 *)(iVar13 + (int)param_2);
            puVar32 = (undefined2 *)(iVar13 + (int)param_1);
            param_3 = uVar10 - 8;
            iVar13 = iVar13 + 8;
            uVar4 = puVar21[1];
            uVar5 = puVar21[2];
            uVar6 = puVar21[3];
            *puVar32 = *puVar21;
            puVar32[3] = uVar6;
            puVar32[1] = uVar4;
            puVar32[2] = uVar5;
            lVar16 = lVar16 + -1;
          } while (lVar16 != 0);
          param_2 = (undefined8 *)((int)param_2 + iVar13);
          puVar11 = (undefined8 *)(iVar13 + (int)param_1);
          if (1 < param_3) {
            iVar28 = 0;
            lVar16 = (((ulonglong)(uVar10 - 10) << 0x20) >> 0x21) + 1;
            do {
              puVar21 = (undefined2 *)(iVar28 + (int)param_2);
              puVar32 = (undefined2 *)(iVar28 + (int)puVar11);
              param_3 = param_3 - 2;
              iVar28 = iVar28 + 2;
              *puVar32 = *puVar21;
              lVar16 = lVar16 + -1;
            } while (lVar16 != 0);
            goto LAB_005c64f0;
          }
        }
      }
      goto LAB_005c6298;
    }
    if (iVar28 == 0) {
      puVar33 = (undefined8 *)((int)param_1 + 1);
      uVar10 = (uint)puVar33 & 7;
      puVar35 = (undefined8 *)((int)param_2 + 1);
      uVar19 = param_3 - 1;
      *(undefined1 *)param_1 = *(undefined1 *)param_2;
      puVar34 = puVar35;
      puVar37 = puVar33;
      if (uVar10 == 4) {
LAB_005c6d3c:
        uVar19 = uVar19 - 4;
        puVar11 = (undefined8 *)((int)puVar37 + 4);
        puVar36 = (undefined8 *)((int)puVar34 + 4);
        *(undefined4 *)puVar37 = *(undefined4 *)puVar34;
      }
      else if (uVar10 == 6) {
        uVar19 = param_3 - 3;
        puVar11 = (undefined8 *)((int)param_1 + 3);
        puVar36 = (undefined8 *)((int)param_2 + 3);
        *(undefined2 *)puVar33 = *(undefined2 *)puVar35;
      }
      else {
        puVar36 = puVar35;
        puVar11 = puVar33;
        if (uVar10 == 2) {
          uVar19 = param_3 - 3;
          puVar37 = (undefined8 *)((int)param_1 + 3);
          puVar34 = (undefined8 *)((int)param_2 + 3);
          *(undefined2 *)puVar33 = *(undefined2 *)puVar35;
          goto LAB_005c6d3c;
        }
      }
      param_2 = puVar36;
      param_3 = uVar19;
      if (0x1f < uVar19) {
        iVar28 = 0;
        lVar16 = (((ulonglong)(uVar19 - 0x20) << 0x20) >> 0x25) + 1;
        do {
          puVar34 = (undefined8 *)(iVar28 + (int)puVar36);
          puVar37 = (undefined8 *)(iVar28 + (int)puVar11);
          param_3 = param_3 - 0x20;
          iVar28 = iVar28 + 0x20;
          uVar15 = puVar34[1];
          uVar14 = puVar34[2];
          uVar12 = puVar34[3];
          *puVar37 = *puVar34;
          puVar37[3] = uVar12;
          puVar37[1] = uVar15;
          puVar37[2] = uVar14;
          lVar16 = lVar16 + -1;
        } while (lVar16 != 0);
        puVar11 = (undefined8 *)((int)puVar11 + iVar28);
        param_2 = (undefined8 *)((int)puVar36 + iVar28);
      }
      if (7 < param_3) {
        iVar28 = 0;
        lVar16 = (((ulonglong)(param_3 - 8) << 0x20) >> 0x23) + 1;
        do {
          puVar34 = (undefined8 *)(iVar28 + (int)param_2);
          puVar37 = (undefined8 *)(iVar28 + (int)puVar11);
          param_3 = param_3 - 8;
          iVar28 = iVar28 + 8;
          *puVar37 = *puVar34;
          lVar16 = lVar16 + -1;
        } while (lVar16 != 0);
        goto LAB_005c64f0;
      }
      goto LAB_005c6298;
    }
    if (iVar28 == 4) {
      puVar37 = (undefined8 *)((int)param_1 + 1);
      *(undefined1 *)param_1 = *(undefined1 *)param_2;
      puVar34 = (undefined8 *)((int)param_2 + 1);
      puVar11 = puVar37;
      uVar10 = param_3 - 1;
      if (((uint)puVar37 & 3) != 0) {
        puVar11 = (undefined8 *)((int)param_1 + 3);
        puVar34 = (undefined8 *)((int)param_2 + 3);
        *(undefined2 *)puVar37 = *(undefined2 *)((int)param_2 + 1);
        uVar10 = param_3 - 3;
      }
      param_3 = uVar10;
      param_2 = puVar34;
      if (0xf < param_3) {
        iVar28 = 0;
        lVar16 = (((ulonglong)(param_3 - 0x10) << 0x20) >> 0x24) + 1;
        do {
          puVar23 = (undefined4 *)(iVar28 + (int)puVar34);
          puVar31 = (undefined4 *)(iVar28 + (int)puVar11);
          param_3 = param_3 - 0x10;
          iVar28 = iVar28 + 0x10;
          uVar7 = puVar23[1];
          uVar8 = puVar23[2];
          uVar9 = puVar23[3];
          *puVar31 = *puVar23;
          puVar31[3] = uVar9;
          puVar31[1] = uVar7;
          puVar31[2] = uVar8;
          lVar16 = lVar16 + -1;
        } while (lVar16 != 0);
        puVar11 = (undefined8 *)((int)puVar11 + iVar28);
        param_2 = (undefined8 *)((int)puVar34 + iVar28);
      }
      if (3 < param_3) {
        iVar28 = 0;
        lVar16 = (((ulonglong)(param_3 - 4) << 0x20) >> 0x22) + 1;
        do {
          puVar23 = (undefined4 *)(iVar28 + (int)param_2);
          puVar31 = (undefined4 *)(iVar28 + (int)puVar11);
          param_3 = param_3 - 4;
          iVar28 = iVar28 + 4;
          *puVar31 = *puVar23;
          lVar16 = lVar16 + -1;
        } while (lVar16 != 0);
        goto LAB_005c64f0;
      }
      goto LAB_005c6298;
    }
    if (iVar28 == 2) {
      uVar10 = param_3 - 1;
      puVar11 = (undefined8 *)((int)param_1 + 1);
      uVar1 = *(undefined1 *)param_2;
      param_2 = (undefined8 *)((int)param_2 + 1);
      *(undefined1 *)param_1 = uVar1;
      if (7 < uVar10) {
        lVar16 = (((ulonglong)(param_3 - 9) << 0x20) >> 0x23) + 1;
        puVar34 = param_2;
        puVar37 = puVar11;
        do {
          param_2 = puVar34 + 1;
          puVar11 = puVar37 + 1;
          uVar10 = uVar10 - 8;
          uVar4 = *(undefined2 *)puVar34;
          uVar5 = *(undefined2 *)((int)puVar34 + 2);
          uVar6 = *(undefined2 *)((int)puVar34 + 4);
          *(undefined2 *)((int)puVar37 + 6) = *(undefined2 *)((int)puVar34 + 6);
          *(undefined2 *)puVar37 = uVar4;
          *(undefined2 *)((int)puVar37 + 2) = uVar5;
          *(undefined2 *)((int)puVar37 + 4) = uVar6;
          lVar16 = lVar16 + -1;
          puVar34 = param_2;
          puVar37 = puVar11;
        } while (lVar16 != 0);
      }
      param_3 = uVar10;
      if (1 < param_3) {
        iVar28 = 0;
        lVar16 = (((ulonglong)(param_3 - 2) << 0x20) >> 0x21) + 1;
        do {
          puVar21 = (undefined2 *)(iVar28 + (int)param_2);
          puVar32 = (undefined2 *)(iVar28 + (int)puVar11);
          param_3 = param_3 - 2;
          iVar28 = iVar28 + 2;
          *puVar32 = *puVar21;
          lVar16 = lVar16 + -1;
        } while (lVar16 != 0);
        goto LAB_005c6440;
      }
      goto LAB_005c6298;
    }
  }
  iVar28 = 0;
  lVar16 = (((ulonglong)(param_3 - 4) << 0x20) >> 0x22) + 1;
  do {
    puVar18 = (undefined1 *)(iVar28 + (int)param_2);
    puVar30 = (undefined1 *)(iVar28 + (int)puVar11);
    param_3 = param_3 - 4;
    iVar28 = iVar28 + 4;
    uVar1 = puVar18[1];
    uVar2 = puVar18[2];
    uVar3 = puVar18[3];
    *puVar30 = *puVar18;
    puVar30[3] = uVar3;
    puVar30[1] = uVar1;
    puVar30[2] = uVar2;
    lVar16 = lVar16 + -1;
  } while (lVar16 != 0);
  puVar11 = (undefined8 *)((int)puVar11 + iVar28);
  param_2 = (undefined8 *)((int)param_2 + iVar28);
LAB_005c62fc:
  if (param_3 == 0) {
    return param_1;
  }
  do {
    *(undefined1 *)puVar11 = *(undefined1 *)param_2;
    param_3 = param_3 - 1;
    param_2 = (undefined8 *)((int)param_2 + 1);
    puVar11 = (undefined8 *)((int)puVar11 + 1);
  } while (param_3 != 0);
  return param_1;
}



//==== 005c7368  ns=Global  size=0x204
// sig: undefined FUN_005c7368(void)
// callers(2): 0052c93c FUN_0052c93c; 0052ca3c FUN_0052ca3c
// callees(3): 005cbdbc FUN_005cbdbc; 005cbe4c FUN_005cbe4c; 08000000 syscall::syscall_syscall_00000000

longlong FUN_005c7368(int *param_1)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  int iVar4;
  int local_30;
  int local_2c [5];
  
  syscall::syscall_syscall_00000000(&local_30,local_2c);
  lVar3 = (longlong)(param_1[4] / 0xc);
  lVar2 = (longlong)param_1[4] + lVar3 * -0xc;
  if (lVar2 < 0) {
    lVar2 = lVar2 + 0xc;
    lVar3 = lVar3 + -1;
  }
  if (lVar3 < 0) {
    iVar4 = param_1[5];
    if ((longlong)iVar4 < -0x80000000 - lVar3) {
      return -1;
    }
  }
  else if (lVar3 == 0) {
    iVar4 = param_1[5];
  }
  else {
    iVar4 = param_1[5];
    if (0x7fffffff - lVar3 < (longlong)iVar4) {
      return -1;
    }
  }
  iVar1 = FUN_005cbdbc((int)(lVar3 + iVar4),(int)lVar2);
  lVar2 = (lVar3 + iVar4) * 0x1e13380 + -0x15180 +
          (longlong)iVar1 * 0x15180 + (longlong)(param_1[3] * 0x15180) +
          (longlong)(param_1[1] * 0x3c + param_1[2] * 0xe10 + *param_1);
  if (lVar2 < 0) {
    return -1;
  }
  lVar2 = lVar2 + -0x83aa7e80;
  FUN_005cbe4c(param_1,lVar2,param_1[8]);
  return (lVar2 - local_2c[0] * 0x3c) - (longlong)(local_30 * 0x3c);
}



//==== 005c756c  ns=Global  size=0xbc
// sig: undefined FUN_005c756c(void)
// callers(8): 0050fbfc FUN_0050fbfc; 0051007c FUN_0051007c; 005c1788 FUN_005c1788; 005c18d0 FUN_005c18d0; 0063ff34 989snd::sndHost_FileAsyncIsReadComplete; 00642428 FUN_00642428; 006424cc FUN_006424cc; 00649b44 FUN_00649b44
// callees(4): 005cbbbc FUN_005cbbbc; 005cbc38 FUN_005cbc38; 005d5914 FUN_005d5914; 005d5a08 FUN_005d5a08

undefined4 FUN_005c756c(undefined4 param_1)

{
  undefined *puVar1;
  int iVar2;
  
  puVar1 = PTR_DAT_0071c278;
  FUN_005cbc38(PTR_DAT_0071c278);
  iVar2 = FUN_005d5a08(param_1,puVar1);
  if ((-1 < iVar2) && (iVar2 = FUN_005d5914(10,puVar1), -1 < iVar2)) {
    FUN_005cbbbc(puVar1);
    return 0;
  }
  FUN_005cbbbc(puVar1);
  return 0xffffffff;
}



//==== 005c7628  ns=Global  size=0x18c
// sig: undefined FUN_005c7628(void)
// callers(1): 005c7d1c FUN_005c7d1c
// callees(1): 005c5ad0 libc::memcpy

void * FUN_005c7628(void *param_1,void *param_2,void *param_3,uint param_4)

{
  undefined1 uVar1;
  undefined1 *puVar2;
  undefined1 *puVar3;
  undefined1 *puVar4;
  uint __n;
  void *pvVar5;
  int iVar6;
  undefined1 auStack_150 [264];
  
  if (param_4 < 0x40) {
    if (param_4 != 0) {
      iVar6 = 0;
      do {
        puVar2 = (undefined1 *)(iVar6 + (int)param_3);
        puVar3 = (undefined1 *)(iVar6 + (int)param_1);
        puVar4 = (undefined1 *)(iVar6 + (int)param_2);
        iVar6 = iVar6 + 1;
        uVar1 = *puVar3;
        *puVar3 = *puVar2;
        *puVar2 = *puVar4;
        *puVar4 = uVar1;
        param_4 = param_4 - 1;
      } while (param_4 != 0);
    }
    return param_1;
  }
  do {
    __n = param_4;
    if (0x100 < param_4) {
      __n = 0x100;
    }
    param_4 = param_4 - __n;
    libc::memcpy(auStack_150,param_1,__n);
    libc::memcpy(param_1,param_3,__n);
    libc::memcpy(param_3,param_2,__n);
    pvVar5 = libc::memcpy(param_2,auStack_150,__n);
    param_3 = (void *)((int)param_3 + __n);
    param_2 = (void *)((int)param_2 + __n);
    param_1 = (void *)((int)param_1 + __n);
  } while (param_4 != 0);
  return pvVar5;
}



//==== 005c77b4  ns=Global  size=0x144
// sig: undefined FUN_005c77b4(void)
// callers(3): 005c78f8 FUN_005c78f8; 005c7ac8 FUN_005c7ac8; 005c7d1c FUN_005c7d1c
// callees(1): 005c5ad0 libc::memcpy

void * FUN_005c77b4(void *param_1,void *param_2,uint param_3)

{
  undefined1 uVar1;
  undefined1 *puVar2;
  undefined1 *puVar3;
  uint __n;
  void *pvVar4;
  int iVar5;
  undefined1 auStack_140 [264];
  
  if (param_3 < 0x40) {
    if (param_3 != 0) {
      iVar5 = 0;
      do {
        puVar2 = (undefined1 *)(iVar5 + (int)param_1);
        puVar3 = (undefined1 *)(iVar5 + (int)param_2);
        iVar5 = iVar5 + 1;
        uVar1 = *puVar2;
        *puVar2 = *puVar3;
        *puVar3 = uVar1;
        param_3 = param_3 - 1;
      } while (param_3 != 0);
    }
    return param_1;
  }
  do {
    __n = param_3;
    if (0x100 < param_3) {
      __n = 0x100;
    }
    param_3 = param_3 - __n;
    libc::memcpy(auStack_140,param_1,__n);
    libc::memcpy(param_1,param_2,__n);
    pvVar4 = libc::memcpy(param_2,auStack_140,__n);
    param_1 = (void *)((int)param_1 + __n);
    param_2 = (void *)((int)param_2 + __n);
  } while (param_3 != 0);
  return pvVar4;
}



//==== 005c78f8  ns=Global  size=0x1d0
// sig: undefined FUN_005c78f8(void)
// callers(1): 005c7d1c FUN_005c7d1c
// callees(1): 005c77b4 FUN_005c77b4

void FUN_005c78f8(int param_1,uint param_2,uint param_3,int param_4,undefined4 *param_5)

{
  longlong lVar1;
  int iVar2;
  int iVar3;
  ulonglong uVar4;
  int iVar5;
  int iVar6;
  ulonglong uVar7;
  
  uVar7 = ((ulonglong)param_2 & 0x7fffffff) * 2 + 2;
  if ((ulonglong)param_3 < (uVar7 & 0xffffffff)) {
    return;
  }
  iVar3 = (int)uVar7;
  iVar5 = param_2 * param_4 + param_1;
  do {
    iVar6 = param_1 + iVar3 * param_4;
    iVar3 = iVar6 - param_4;
    if ((param_3 == (uint)uVar7) || (iVar2 = (*(code *)*param_5)(iVar6,iVar3), iVar2 < 0)) {
      uVar7 = uVar7 - 1;
      FUN_005c77b4(iVar5,iVar3,param_4);
      uVar4 = (uVar7 & 0x7fffffff) * 2 + 2;
      iVar6 = iVar3;
      if ((ulonglong)param_3 < (uVar4 & 0xffffffff)) goto LAB_005c7a10;
    }
    else {
      FUN_005c77b4(iVar5,iVar6,param_4);
      uVar4 = (uVar7 & 0x7fffffff) * 2 + 2;
      if ((ulonglong)param_3 < (uVar4 & 0xffffffff)) {
LAB_005c7a10:
        if ((ulonglong)param_2 < (uVar7 & 0xffffffff)) {
          do {
            lVar1 = uVar7 - 1;
            uVar7 = (ulonglong)(lVar1 << 0x20) >> 0x21;
            iVar5 = param_1 + param_4 * ((uint)lVar1 >> 1);
            iVar3 = (*(code *)*param_5)(iVar6,iVar5);
            if (iVar3 < 1) {
              return;
            }
            FUN_005c77b4(iVar5,iVar6,param_4);
            iVar6 = iVar5;
          } while (param_2 < uVar7);
        }
        return;
      }
    }
    iVar3 = (int)uVar4;
    uVar7 = uVar4;
    iVar5 = iVar6;
  } while( true );
}



//==== 005c7ac8  ns=Global  size=0x158
// sig: undefined FUN_005c7ac8(void)
// callers(1): 005c7d1c FUN_005c7d1c
// callees(1): 005c77b4 FUN_005c77b4

void FUN_005c7ac8(undefined8 param_1,undefined8 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 *param_5)

{
  int iVar1;
  
  iVar1 = (*(code *)*param_5)(param_2,param_1);
  if (iVar1 < 0) {
    FUN_005c77b4(param_1,param_2,param_4);
    iVar1 = (*(code *)*param_5)(param_3,param_2);
  }
  else {
    iVar1 = (*(code *)*param_5)(param_3,param_2);
  }
  if (iVar1 < 0) {
    FUN_005c77b4(param_2,param_3,param_4);
  }
  iVar1 = (*(code *)*param_5)(param_2,param_1);
  if (iVar1 < 0) {
    FUN_005c77b4(param_1,param_2,param_4);
    return;
  }
  return;
}



//==== 005c7c20  ns=Global  size=0xfc
// sig: undefined FUN_005c7c20(void)
// callers(1): 005c7d1c FUN_005c7d1c
// callees(2): 005c5ad0 libc::memcpy; 005c6094 FUN_005c6094

ulonglong FUN_005c7c20(ulonglong param_1,longlong param_2,ulonglong param_3)

{
  size_t __n;
  void *pvVar1;
  int iVar2;
  longlong lVar3;
  ulonglong uVar4;
  undefined1 auStack_150 [264];
  
  iVar2 = (int)param_3;
  lVar3 = (param_2 - param_1) + param_3;
  uVar4 = param_1;
  if (iVar2 != 0) {
    do {
      uVar4 = param_3;
      if (0x100 < (param_3 & 0xffffffff)) {
        uVar4 = 0x100;
      }
      __n = (size_t)uVar4;
      param_3 = param_3 - uVar4;
      libc::memcpy(auStack_150,(void *)((int)param_2 + (iVar2 - __n)),__n);
      FUN_005c6094(param_1 + uVar4 & 0xffffffff,param_1 & 0xffffffff,lVar3 - uVar4 & 0xffffffff);
      pvVar1 = libc::memcpy((void *)param_1,auStack_150,__n);
      uVar4 = (ulonglong)(int)pvVar1;
    } while ((int)param_3 != 0);
  }
  return uVar4;
}



//==== 005c7d1c  ns=Global  size=0x5ec
// sig: undefined FUN_005c7d1c(void)
// callers(2): 005c7d1c FUN_005c7d1c; 005c8308 FUN_005c8308
// callees(6): 005c7628 FUN_005c7628; 005c77b4 FUN_005c77b4; 005c78f8 FUN_005c78f8; 005c7ac8 FUN_005c7ac8; 005c7c20 FUN_005c7c20; 005c7d1c FUN_005c7d1c

void FUN_005c7d1c(uint param_1,ulonglong param_2,longlong param_3,uint param_4,undefined4 *param_5)

{
  int iVar1;
  int iVar2;
  ulonglong uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  
  if ((int)param_3 == 0) {
LAB_005c8264:
    if (0x20 < (param_2 & 0xffffffff)) {
      uVar3 = (param_2 << 0x20) >> 0x21;
      if ((uint)param_2 >> 1 != 0) {
        do {
          uVar3 = uVar3 - 1;
          FUN_005c78f8(param_1,uVar3 & 0xffffffff,param_2 & 0xffffffff,param_4,param_5);
        } while ((int)uVar3 != 0);
      }
      iVar2 = param_4 * (uint)param_2 + param_1;
      do {
        iVar2 = iVar2 - param_4;
        param_2 = param_2 - 1;
        FUN_005c77b4(param_1,iVar2,param_4);
        FUN_005c78f8(param_1,0,param_2 & 0xffffffff,param_4,param_5);
      } while ((int)param_2 != 1);
      return;
    }
  }
  else if (0x20 < (param_2 & 0xffffffff)) {
LAB_005c7db0:
    uVar4 = param_4 * (uint)param_2 + param_1;
    iVar2 = uVar4 - param_4;
    uVar9 = param_4 * ((uint)param_2 >> 1) + param_1;
    uVar5 = uVar9 + param_4;
    if (param_4 * 0x28 < iVar2 - param_1) {
      uVar7 = param_4 * (((iVar2 - param_1) / param_4 >> 3) + 1);
      FUN_005c7ac8(param_1,param_1 + uVar7,param_1 + (uVar7 & 0x7fffffff) * 2,param_4,param_5);
      FUN_005c7ac8(uVar9 - uVar7,uVar9,uVar9 + uVar7,param_4,param_5);
      FUN_005c7ac8(iVar2 + (uVar7 & 0x7fffffff) * -2,iVar2 - uVar7,iVar2,param_4,param_5);
      FUN_005c7ac8(param_1 + uVar7,uVar9,iVar2 - uVar7,param_4,param_5);
    }
    else {
      FUN_005c7ac8(param_1,uVar9,iVar2,param_4,param_5);
    }
    if (param_1 < uVar9) {
      iVar2 = uVar9 - param_4;
      do {
        uVar7 = uVar9 + -param_4;
        iVar2 = iVar2 + -param_4;
        iVar1 = (*(code *)*param_5)(uVar7,uVar9);
        if (iVar1 != 0) break;
        uVar9 = uVar7;
      } while (param_1 < param_4 + iVar2);
    }
    iVar2 = uVar5 + param_4;
    uVar7 = uVar5;
    while (uVar6 = uVar5, uVar10 = uVar9, uVar7 < uVar4) {
      iVar2 = iVar2 + param_4;
      iVar1 = (*(code *)*param_5)(uVar5,uVar9);
      uVar7 = iVar2 - param_4;
      if (iVar1 != 0) break;
      uVar5 = uVar5 + param_4;
    }
LAB_005c7f2c:
    do {
      if (uVar6 < uVar4) goto LAB_005c7fd8;
      do {
        do {
          if (param_1 < uVar9) {
            iVar2 = uVar9 - param_4;
            uVar7 = uVar10;
            do {
              uVar8 = -param_4 + uVar9;
              iVar2 = iVar2 + -param_4;
              iVar1 = (*(code *)*param_5)(uVar8,uVar7);
              if (-1 < iVar1) {
                if (iVar1 != 0) break;
                uVar7 = uVar10 - param_4;
                FUN_005c77b4(uVar7,uVar8,param_4);
                uVar10 = uVar7;
              }
              uVar9 = uVar8;
            } while (param_1 < iVar2 + param_4);
          }
          if (param_1 == uVar9) {
            if (uVar6 != uVar4) {
              if (uVar5 == uVar6) {
                FUN_005c77b4(uVar5,uVar10,param_4);
              }
              else {
                FUN_005c7628(uVar6,uVar10,uVar5,param_4);
              }
              uVar5 = uVar5 + param_4;
              uVar9 = param_1;
              uVar6 = uVar6 + param_4;
              uVar10 = uVar10 + param_4;
              goto LAB_005c7f2c;
            }
            uVar3 = (ulonglong)(uVar10 - param_1) / (ulonglong)param_4;
            param_2 = (ulonglong)(uVar4 - uVar5) / (ulonglong)param_4;
            param_3 = ((ulonglong)(param_3 << 0x20) >> 0x21) +
                      ((ulonglong)(param_3 << 0x20) >> 0x22);
            if (param_2 < uVar3) {
              FUN_005c7d1c(uVar5,param_2,param_3,param_4,param_5);
              param_2 = uVar3;
            }
            else {
              FUN_005c7d1c(param_1,uVar3,param_3,param_4,param_5);
              param_1 = uVar5;
            }
            if ((int)param_3 == 0) goto LAB_005c8264;
            if (param_2 < 0x21) goto LAB_005c8114;
            goto LAB_005c7db0;
          }
          if (uVar6 == uVar4) {
            uVar9 = uVar9 - param_4;
            uVar10 = uVar10 - param_4;
            uVar5 = uVar5 - param_4;
            uVar6 = uVar4;
            if (uVar9 == uVar10) {
              FUN_005c77b4(uVar10,uVar5,param_4);
            }
            else {
              FUN_005c7628(uVar9,uVar5,uVar10,param_4);
            }
            goto LAB_005c7f2c;
          }
          uVar9 = uVar9 - param_4;
          uVar7 = uVar6 + param_4;
          FUN_005c77b4(uVar6,uVar9,param_4);
          uVar6 = uVar7;
        } while (uVar4 <= uVar7);
LAB_005c7fd8:
        iVar2 = (*(code *)*param_5)(uVar10,uVar6);
        if (iVar2 < 0) goto LAB_005c801c;
      } while (iVar2 != 0);
      FUN_005c77b4(uVar5,uVar6,param_4);
      uVar5 = uVar5 + param_4;
LAB_005c801c:
      uVar6 = uVar6 + param_4;
    } while( true );
  }
LAB_005c8114:
  uVar9 = param_1;
  if (1 < (param_2 & 0xffffffff)) {
LAB_005c812c:
    param_2 = param_2 - 1;
    if ((int)param_2 != 0) {
      while( true ) {
        uVar9 = uVar9 + param_4;
        iVar2 = (*(code *)*param_5)(uVar9,param_1);
        uVar5 = uVar9;
        if (iVar2 < 0) break;
        do {
          uVar4 = uVar5;
          iVar2 = (*(code *)*param_5)(uVar9,uVar4 - param_4);
          uVar5 = uVar4 - param_4;
        } while (iVar2 < 0);
        if (uVar9 == uVar4) goto LAB_005c812c;
        param_2 = param_2 - 1;
        FUN_005c7c20(uVar4,uVar9,param_4);
        if ((int)param_2 == 0) {
          return;
        }
      }
      FUN_005c7c20(param_1,uVar9,param_4);
      goto LAB_005c812c;
    }
  }
  return;
}



//==== 005c8308  ns=Global  size=0x10
// sig: undefined FUN_005c8308(void)
// callers(4): 0050bfd4 FUN_0050bfd4; 005123b8 FUN_005123b8; 0053087c FUN_0053087c; 00586c7c FUN_00586c7c
// callees(1): 005c7d1c FUN_005c7d1c

void FUN_005c8308(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  FUN_005c7d1c(param_1,param_2,param_2,param_3,param_4);
  return;
}



//==== 005c8318  ns=Global  size=0x108
// sig: int rand(void)
// callers(122): 000fc620 mobyutil::MB_randInt; 000fc668 mobyutil::MB_DropAmmo; 000fcbe8 mobyutil::MB_randRangeFloat; 000fcc68 mobyutil::MB_randRot; 000fcd60 mobyutil::MB_DistributeBolts; 000fe484 mobyutil::MB_randRange; 000fe4f0 mobyutil::MB_randRangeSigned; 000fe580 mobyutil::MB_randFalloff; 000fe788 mobyutil::MB_randVector; 000fe8c8 mobyutil::MB_randCircle; 000fea60 mobyutil::MB_randSphere; 00108240 mobyutil::MB_randPrimPoints; 00108df0 mobyutil::MB_RandomizeAnimSpeed; 0010aa50 mobyutil::MB_MistDeathEffect; 0010e030 mobyutil::MB_genericExplosion; 0010fb28 mobyutil::MB_SpawnExplosionSparks; 00110040 mobyutil::MB_SpawnExplosionSparks2; 00110950 mobyutil::MB_RandomizeVector; 00110a60 mobyutil::MB_RandomizeVector; 001136c8 mobyutil::DoMeander; 001162a0 mobyutil::???_MB_SpawnRingPartFx; 00119600 mobyutil::MB_SpawnSparks_oClass2EE; 00119b38 mobyutil::MB_UpdateDebris; 0011a1a0 mobyutil::MB_SpawnSparksPair; 0011a560 mobyutil::MB_SpawnDebrisMoby
// callees(0): 

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int rand(void)

{
  uint uVar1;
  uint *puVar2;
  int iVar3;
  int *piVar4;
  int *piVar5;
  uint uVar6;
  int in_r13;
  longlong lVar7;
  
  if (*(char *)(in_r13 + -0x6ff8) == '\0') {
    lVar7 = 8;
    iVar3 = *(int *)(in_r13 + -0x7000);
    do {
      iVar3 = iVar3 * 0x19660d + 0x3c6ef35f;
      lVar7 = lVar7 + -1;
    } while (lVar7 != 0);
    *(int *)(in_r13 + -0x7000) = iVar3;
    piVar4 = (int *)(in_r13 + -0x6ff0);
    do {
      piVar5 = piVar4 + 1;
      iVar3 = iVar3 * 0x19660d + 0x3c6ef35f;
      *piVar4 = iVar3;
      piVar4 = piVar5;
    } while (piVar5 != (int *)(in_r13 + -0x6f70));
    *(undefined1 *)(in_r13 + -0x6ff8) = 1;
    *(int *)(in_r13 + -0x7000) = iVar3;
    *(undefined4 *)(in_r13 + -0x6ff4) = *(undefined4 *)(in_r13 + -0x6f74);
  }
  puVar2 = (uint *)((*(uint *)(in_r13 + -0x6ff4) & 0x1f) * 4 + in_r13 + -0x6ff0);
  uVar6 = *(uint *)(in_r13 + -0x7000) * 0x19660d + 0x3c6ef35f;
  *(uint *)(in_r13 + -0x7000) = uVar6;
  uVar1 = *puVar2;
  *(uint *)(in_r13 + -0x6ff4) = uVar1;
  *puVar2 = uVar6;
  return uVar1 & 0x3fffffff;
}



//==== 005c8420  ns=Global  size=0x20
// sig: undefined seedRand(undefined4 number)
// callers(2): 000dcf58 loaders::NAVG_LoadFile; 001595d0 skyfunc::SkyLevelGeneric
// callees(0): 

void seedRand(undefined4 number)

{
  int rand_register_r13;
  
  *(undefined4 *)(rand_register_r13 + -0x7000) = number;
  *(undefined1 *)(rand_register_r13 + -0x6ff8) = 0;
  return;
}



//==== 005c8440  ns=Global  size=0x40
// sig: undefined FUN_005c8440(void)
// callers(0): 
// callees(0): 

uint FUN_005c8440(undefined4 *param_1,uint param_2,int param_3)

{
  byte *pbVar1;
  
  pbVar1 = (byte *)*param_1;
  if (param_3 == 0) {
    *param_1 = pbVar1 + -1;
  }
  else {
    param_2 = 0xffffffff;
    if (*pbVar1 != 0) {
      *param_1 = pbVar1 + 1;
      param_2 = (uint)*pbVar1;
    }
  }
  return param_2;
}



//==== 005c8480  ns=Global  size=0x64
// sig: undefined FUN_005c8480(void)
// callers(2): 005b4d70 FUN_005b4d70; 005b4fa0 FUN_005b4fa0
// callees(1): 005c9b38 FUN_005c9b38

undefined4
FUN_005c8480(undefined4 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
            undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  undefined4 uVar1;
  undefined4 uStack00000030;
  undefined8 uStack00000040;
  undefined8 uStack00000048;
  undefined8 uStack00000050;
  undefined8 uStack00000058;
  undefined8 uStack00000060;
  undefined8 uStack00000068;
  
  uStack00000030 = param_1;
  uStack00000040 = param_3;
  uStack00000048 = param_4;
  uStack00000050 = param_5;
  uStack00000058 = param_6;
  uStack00000060 = param_7;
  uStack00000068 = param_8;
  uVar1 = FUN_005c9b38(PTR_PTR_0071c27c,&stack0x00000030,param_2,&stack0x00000040);
  return uVar1;
}



//==== 005c84e4  ns=fios  size=0x2c
// sig: undefined strerror_wrapper(void)
// callers(28): 00528598 FUN_00528598; 00529808 FUN_00529808; 0052cc20 FUN_0052cc20; 0052cccc fios::rwlock_wlock_checked; 0052cd7c FUN_0052cd7c; 0052ce28 FUN_0052ce28; 0052ced8 FUN_0052ced8; 0052cf74 FUN_0052cf74; 0052d0e8 FUN_0052d0e8; 0052d19c FUN_0052d19c; 0052d2c0 FUN_0052d2c0; 0052d370 FUN_0052d370; 0052d478 FUN_0052d478; 0052d580 FUN_0052d580; 0052d654 FUN_0052d654; 0052d728 FUN_0052d728; 0052d814 FUN_0052d814; 0052db8c FUN_0052db8c; 0052dc40 FUN_0052dc40; 0052dcf0 FUN_0052dcf0; 0052dda0 fios::lwmutex_unlock_checked; 0052de58 fios::lwmutex_lock_checked; 0052df14 FUN_0052df14; 0052dfc4 FUN_0052dfc4; 0052e0b8 FUN_0052e0b8
// callees(1): 005cb4fc fios::strerror

undefined4 fios::strerror_wrapper(undefined8 param_1)

{
  undefined4 uVar1;
  
  uVar1 = strerror(param_1,0);
  return uVar1;
}



//==== 005c8510  ns=libc  size=0xa4
// sig: size_t strlen(char * __s)
// callers(80): 000627d0 debug::UpdateDebugSelections; 000ccda0 hud::GetHelpLen; 000ce170 hud::Draw_QuickSelectHud; 000cf6f0 hud::Draw_ClankCommandHud; 0011b960 music::music_UppercaseCdromPath; 00146b14 pause::GoldBoltWidget_Update; 0016fc10 vendor::Vendor_DrawScrollText; 00172c40 vendor::Vendor_HudUpdate; 001e5158 mobyupd::update1160::M1160_ScanTargets; 001e6130 mobyupd::update1160::M1160_Hud_Draw; 00272f40 mobyupdate_helpers::M1421_00272f40; 0042664c mobyupdate_helpers::M1807_0042664c; 004d4dd0 FUN_004d4dd0; 004e64b4 FUN_004e64b4; 004eef00 FUN_004eef00; 004ef3bc FUN_004ef3bc; 004fa800 FUN_004fa800; 00503554 FUN_00503554; 00503650 FUN_00503650; 005036f0 FUN_005036f0; 005037a0 FUN_005037a0; 00503810 FUN_00503810; 00504988 FUN_00504988; 00504fdc FUN_00504fdc; 005085cc fios::LoadAssetAsync
// callees(0): 

size_t libc::strlen(char *__s)

{
  char *pcVar2;
  longlong lVar1;
  ulonglong *puVar3;
  ulonglong uVar4;
  longlong lVar5;
  
  lVar1 = (longlong)(int)__s;
  for (uVar4 = -lVar1 & 7; uVar4 != 0; uVar4 = uVar4 - 1) {
    pcVar2 = (char *)lVar1;
    lVar1 = lVar1 + 1;
    if (*pcVar2 == '\0') {
      return (int)pcVar2 - (int)__s;
    }
  }
  dataCacheBlockTouch(lVar1);
  dataCacheBlockTouch(lVar1 + 0x80);
  do {
    dataCacheBlockTouch(lVar1 + 0x100);
    lVar5 = 0x10;
    do {
      puVar3 = (ulonglong *)lVar1;
      uVar4 = *puVar3;
      uVar4 = (ulonglong)
              LZCOUNT(~(uVar4 | 0x7f7f7f7f7f7f7f7f |
                       (uVar4 & 0x7f7f7f7f7f7f7f7f) + 0x7f7f7f7f7f7f7f7f)) >> 3;
      lVar1 = lVar1 + 8;
      if (uVar4 < 8) {
        return (int)puVar3 + ((int)uVar4 - (int)__s);
      }
      lVar5 = lVar5 + -1;
    } while (lVar5 != 0);
  } while( true );
}



//==== 005c85b4  ns=Global  size=0x14c
// sig: undefined FUN_005c85b4(void)
// callers(4): 005110d8 FUN_005110d8; 00517398 FUN_00517398; 005177d8 FUN_005177d8; 005d5a08 FUN_005d5a08
// callees(0): 

ulonglong FUN_005c85b4(ulonglong param_1,ulonglong param_2)

{
  ulonglong uVar1;
  byte *pbVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  longlong lVar6;
  
  param_2 = param_2 & 0xff;
  uVar4 = 0xffffffffffffffff;
  dataCacheBlockTouch(param_1);
  uVar3 = -param_1 & 7;
  dataCacheBlockTouch(param_1 + 0x80);
  for (; uVar3 != 0; uVar3 = uVar3 - 1) {
    pbVar2 = (byte *)param_1;
    if (*pbVar2 == param_2) {
      uVar4 = param_1;
    }
    param_1 = param_1 + 1;
    if ((ulonglong)*pbVar2 == 0) {
      if ((uVar4 + 1 & 0xffffffff) == 0) {
        return 0;
      }
      return uVar4;
    }
  }
  uVar3 = param_2 << 8 | param_2;
  uVar3 = uVar3 << 0x10 | uVar3;
  do {
    dataCacheBlockTouch(param_1 + 0x100);
    lVar6 = 0x10;
    do {
      uVar1 = *(ulonglong *)param_1;
      uVar5 = (ulonglong)
              LZCOUNT(~(uVar1 | 0x7f7f7f7f7f7f7f7f |
                       (uVar1 & 0x7f7f7f7f7f7f7f7f) + 0x7f7f7f7f7f7f7f7f)) >> 3;
      uVar1 = uVar1 ^ (uVar3 << 0x20 | uVar3);
      uVar1 = (ulonglong)
              LZCOUNT(~(uVar1 | 0x7f7f7f7f7f7f7f7f |
                       (uVar1 & 0x7f7f7f7f7f7f7f7f) + 0x7f7f7f7f7f7f7f7f)) >> 3;
      if ((uVar5 < uVar1) || ((uVar1 < 8 && (uVar4 = param_1 + uVar1, uVar5 != 8)))) {
        uVar3 = ~uVar4 & 7;
        if ((uVar4 + 1 & 0xffffffff) == 0) {
          return 0;
        }
        uVar5 = uVar4;
        if (uVar3 != 0) {
          do {
            uVar5 = uVar5 + 1;
            if ((ulonglong)*(byte *)uVar5 == 0) {
              return uVar4;
            }
            if (*(byte *)uVar5 == param_2) {
              uVar4 = uVar5;
            }
            uVar3 = uVar3 - 1;
          } while (uVar3 != 0);
          return uVar4;
        }
        return uVar4;
      }
      param_1 = param_1 + 8;
      lVar6 = lVar6 + -1;
    } while (lVar6 != 0);
  } while( true );
}



//==== 005c8700  ns=Global  size=0xac
// sig: undefined FUN_005c8700(void)
// callers(8): 0001401c boot::boot; 004d31b0 FUN_004d31b0; 004ef248 FUN_004ef248; 004ef4d0 FUN_004ef4d0; 00504988 FUN_00504988; 0056bedc FUN_0056bedc; 00622fbc FUN_00622fbc; 0064c764 FUN_0064c764
// callees(1): 005cc578 libc::strchr

char * FUN_005c8700(char *param_1,char *param_2)

{
  char cVar1;
  char *pcVar2;
  char *pcVar3;
  
  cVar1 = *param_2;
  if (cVar1 != '\0') {
    while (param_1 = libc::strchr(param_1,(int)cVar1), pcVar3 = param_2, pcVar2 = param_1,
          param_1 != (char *)0x0) {
      do {
        cVar1 = pcVar3[1];
        pcVar2 = pcVar2 + 1;
        if (cVar1 == '\0') {
          return param_1;
        }
        pcVar3 = pcVar3 + 1;
      } while (*pcVar2 == cVar1);
      param_1 = param_1 + 1;
      cVar1 = *param_2;
    }
    param_1 = (char *)0x0;
  }
  return param_1;
}



//==== 005c87ac  ns=Global  size=0xe4
// sig: undefined FUN_005c87ac(void)
// callers(1): 0056ba6c FUN_0056ba6c
// callees(2): 005d5c2c FUN_005d5c2c; 005d5c9c FUN_005d5c9c

char * FUN_005c87ac(int param_1,undefined4 param_2)

{
  char *pcVar1;
  int iVar2;
  char *pcVar3;
  int in_r13;
  char *pcVar4;
  
  if (param_1 == 0) {
    param_1 = *(int *)(in_r13 + -0x6ffc);
  }
  iVar2 = FUN_005d5c9c(param_1,param_2);
  pcVar4 = (char *)(param_1 + iVar2);
  if (*pcVar4 != '\0') {
    iVar2 = FUN_005d5c2c(pcVar4,param_2);
    pcVar1 = pcVar4 + iVar2;
    pcVar3 = pcVar1;
    if (*pcVar1 != '\0') {
      pcVar3 = pcVar1 + 1;
      *pcVar1 = '\0';
    }
    *(char **)(in_r13 + -0x6ffc) = pcVar3;
    return pcVar4;
  }
  *(undefined **)(in_r13 + -0x6ffc) = PTR_DAT_0071c280;
  return (char *)0x0;
}



//==== 005c8890  ns=Global  size=0x1fc
// sig: undefined FUN_005c8890(void)
// callers(1): 005c8a8c FUN_005c8a8c
// callees(2): 005cac2c FUN_005cac2c; 005d5904 FUN_005d5904

uint FUN_005c8890(byte *param_1,undefined4 *param_2,undefined4 param_3,undefined4 *param_4)

{
  byte bVar1;
  byte *pbVar2;
  uint uVar3;
  undefined4 *puVar4;
  uint uVar5;
  uint uVar6;
  byte *pbVar7;
  undefined4 auStack_40 [4];
  
  if (param_2 == (undefined4 *)0x0) {
    param_2 = auStack_40;
  }
  bVar1 = *param_1;
  pbVar7 = param_1;
  while ((*(ushort *)((uint)bVar1 * 2 + *(int *)PTR_PTR_0071c284) & 0x144) != 0) {
    pbVar7 = pbVar7 + 1;
    bVar1 = *pbVar7;
  }
  uVar6 = (uint)(char)bVar1;
  if ((bVar1 == 0x2d) || (bVar1 == 0x2b)) {
    uVar3 = FUN_005cac2c(pbVar7 + 1,param_2,param_3,param_4);
    pbVar2 = (byte *)*param_2;
    if (pbVar7 + 1 != pbVar2) goto LAB_005c8948;
LAB_005c89c0:
    *param_2 = param_1;
LAB_005c89c4:
    if (uVar3 != 0) goto LAB_005c89cc;
  }
  else {
    uVar6 = 0x2b;
    uVar3 = FUN_005cac2c(pbVar7,param_2,param_3,param_4);
    pbVar2 = (byte *)*param_2;
    if (pbVar7 == pbVar2) goto LAB_005c89c0;
LAB_005c8948:
    if (param_1 == pbVar2) goto LAB_005c89c4;
  }
  if (uVar6 == 0x2b) {
    if (-1 < (int)uVar3) {
      return uVar3;
    }
  }
  else {
    uVar5 = uVar3;
    if ((uVar6 != 0x2d) || (uVar5 = -uVar3, uVar3 < 0x80000001)) {
      return uVar5;
    }
  }
LAB_005c89cc:
  puVar4 = (undefined4 *)FUN_005d5904();
  *puVar4 = 0x8001001c;
  if (param_4 != (undefined4 *)0x0) {
    *param_4 = 1;
  }
  uVar3 = (int)(uVar6 ^ 0x2d) >> 0x1f;
  return ((int)(uVar3 - (uVar3 ^ uVar6 ^ 0x2d)) >> 0x1f) + 0x80000000;
}



//==== 005c8a8c  ns=Global  size=0x8
// sig: undefined FUN_005c8a8c(void)
// callers(4): 0056ad24 FUN_0056ad24; 0056ba6c FUN_0056ba6c; 00581df0 FUN_00581df0; 005db9f0 FUN_005db9f0
// callees(1): 005c8890 FUN_005c8890

void FUN_005c8a8c(void)

{
  FUN_005c8890();
  return;
}



//==== 005c8a94  ns=Global  size=0x70
// sig: undefined FUN_005c8a94(void)
// callers(4): 004f9e10 FUN_004f9e10; 006192e4 FUN_006192e4; 00619370 FUN_00619370; 00641910 FUN_00641910
// callees(1): 005cd5c4 libc::vsnprintf

int FUN_005c8a94(undefined1 *param_1,int param_2,char *param_3,__gnuc_va_list param_4)

{
  int iVar1;
  undefined1 *local_10;
  int local_c;
  
  local_c = param_2 + -1;
  local_10 = param_1;
  if (param_2 == 0) {
    local_c = 0;
    local_10 = (undefined1 *)0x0;
  }
  iVar1 = libc::vsnprintf(PTR_PTR_0071c288,(size_t)&local_10,param_3,param_4);
  if (local_10 != (undefined1 *)0x0) {
    *local_10 = 0;
  }
  return iVar1;
}



//==== 005c8b04  ns=Global  size=0x84
// sig: undefined FUN_005c8b04(void)
// callers(0): 
// callees(1): 005c5ad0 libc::memcpy

int * FUN_005c8b04(int *param_1,void *param_2,uint param_3)

{
  uint __n;
  
  __n = param_1[1];
  if (param_3 < (uint)param_1[1]) {
    __n = param_3;
  }
  if (__n != 0) {
    libc::memcpy((void *)*param_1,param_2,__n);
    *param_1 = *param_1 + __n;
    param_1[1] = param_1[1] - __n;
  }
  return param_1;
}



//==== 005c8b88  ns=Global  size=0xc
// sig: undefined FUN_005c8b88(void)
// callers(0): 
// callees(0): 

undefined4 FUN_005c8b88(void)

{
  return *(undefined4 *)PTR_PTR_0071c28c;
}



//==== 005c8b94  ns=Global  size=0x30
// sig: undefined FUN_005c8b94(void)
// callers(1): 005c4ec8 idol::exit
// callees(2): 00014c44 crt0::_exit; 080003dc syscall::syscall_syscall_988

int FUN_005c8b94(int param_1,undefined8 param_2,uint param_3)

{
  int iVar1;
  ulonglong uVar2;
  
  uVar2 = 0;
  syscall::syscall_syscall_988(1);
  crt0::_exit(param_1);
  iVar1 = 0;
  if ((uVar2 & 0xffffffff) < (ulonglong)param_3) {
    iVar1 = param_3 - (int)uVar2;
  }
  return iVar1;
}



//==== 005c8bc4  ns=Global  size=0x18
// sig: undefined FUN_005c8bc4(void)
// callers(2): 005c8bdc FUN_005c8bdc; 005c9568 FUN_005c9568
// callees(0): 

int FUN_005c8bc4(undefined8 param_1,uint param_2,uint param_3)

{
  int iVar1;
  
  iVar1 = 0;
  if (param_2 < param_3) {
    iVar1 = param_3 - param_2;
  }
  return iVar1;
}



//==== 005c8bdc  ns=Global  size=0x1f0
// sig: undefined FUN_005c8bdc(void)
// callers(1): 005c55dc FUN_005c55dc
// callees(3): 005c8bc4 FUN_005c8bc4; 005cfb10 FUN_005cfb10; 005d5904 FUN_005d5904

int FUN_005c8bdc(ushort *param_1,int *param_2)

{
  ushort uVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 *puVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  
  if ((param_1[0x32] & 1) == 0) {
    iVar3 = FUN_005cfb10(param_1[2],0,1);
  }
  else {
    iVar3 = FUN_005cfb10(param_1[2],(int)*(undefined8 *)(param_1 + 0x2c),1);
    param_1[0x2c] = 0;
    param_1[0x2d] = 0;
    param_1[0x2e] = 0;
    param_1[0x2f] = 0;
  }
  uVar1 = *param_1;
  if (((uVar1 & 3) != 0) && (iVar3 != -1)) {
    if ((uVar1 & 0x2000) == 0) {
      if ((uVar1 & 0x1000) != 0) {
        iVar5 = *(int *)(param_1 + 0x14);
        uVar2 = *(undefined4 *)(param_1 + 0xe);
        if (iVar5 == 0) {
          iVar5 = *(int *)(param_1 + 0x30);
        }
        iVar5 = FUN_005c8bc4(param_1,*(ulonglong *)(param_1 + 0x24) & 0xffffffff,iVar5);
        iVar6 = FUN_005c8bc4(param_1,uVar2,(int)param_1 + 0x43);
        iVar7 = FUN_005c8bc4(param_1,*(undefined4 *)(param_1 + 8),*(undefined4 *)(param_1 + 0x16));
        iVar3 = iVar3 - (iVar6 + iVar5 + iVar7);
      }
    }
    else {
      iVar5 = FUN_005c8bc4(param_1,*(undefined4 *)(param_1 + 4),*(undefined4 *)(param_1 + 8));
      iVar3 = iVar3 + iVar5;
    }
    if (param_2 != (int *)0x0) {
      *param_2 = iVar3;
      iVar3 = 0;
      param_2[1] = *(int *)(param_1 + 0x1a);
      *(ushort *)(param_2 + 2) = param_1[0x1c];
      *(ushort *)((int)param_2 + 10) = param_1[0x1d];
    }
    return iVar3;
  }
  puVar4 = (undefined4 *)FUN_005d5904();
  *puVar4 = 0x8001001e;
  return -1;
}



//==== 005c8dcc  ns=Global  size=0x98
// sig: undefined FUN_005c8dcc(void)
// callers(1): 005c52f0 FUN_005c52f0
// callees(2): 005d5838 FUN_005d5838; 005d5904 FUN_005d5904

undefined2 * FUN_005c8dcc(void)

{
  int iVar1;
  undefined *puVar2;
  undefined2 *puVar3;
  undefined4 *puVar4;
  
  puVar3 = (undefined2 *)FUN_005d5838(0x68);
  puVar2 = PTR_DAT_0071c290;
  if (puVar3 == (undefined2 *)0x0) {
    puVar4 = (undefined4 *)FUN_005d5904();
    puVar3 = (undefined2 *)0x0;
    *puVar4 = 0x80010004;
  }
  else {
    *(undefined4 *)(puVar3 + 0x1e) = 0;
    iVar1 = *(int *)puVar2;
    if (iVar1 == 0) {
      *(undefined2 **)puVar2 = puVar3;
      *(undefined1 *)(puVar3 + 1) = 0;
    }
    else {
      *(int *)(puVar3 + 0x1e) = iVar1;
      *(undefined2 **)puVar2 = puVar3;
      *(char *)(puVar3 + 1) = *(char *)(iVar1 + 2) + '\x01';
    }
    *puVar3 = 0x80;
  }
  return puVar3;
}



//==== 005c8e64  ns=Global  size=0xe8
// sig: undefined FUN_005c8e64(void)
// callers(2): 005c4f10 FUN_005c4f10; 005c8f4c FUN_005c8f4c
// callees(1): 005d580c FUN_005d580c

void FUN_005c8e64(ushort *param_1)

{
  ushort *puVar1;
  ushort *puVar2;
  uint uVar3;
  
  if ((*param_1 & 0x80) == 0) {
    *param_1 = 0;
    uVar3 = (int)param_1 + 0x43;
    param_1[2] = 0xffff;
    param_1[0x32] = 0;
    *(ushort **)(param_1 + 0x10) = param_1 + 0x14;
    *(ulonglong *)(param_1 + 0x24) = (ulonglong)uVar3;
    *(uint *)(param_1 + 0x30) = uVar3;
    *(uint *)(param_1 + 4) = uVar3;
    *(uint *)(param_1 + 8) = uVar3;
    *(uint *)(param_1 + 10) = uVar3;
    *(uint *)(param_1 + 0x16) = uVar3;
    *(uint *)(param_1 + 0xc) = uVar3;
    *(uint *)(param_1 + 0x18) = uVar3;
    *(uint *)(param_1 + 0xe) = uVar3;
    param_1[0x28] = 0;
    param_1[0x29] = 0;
    param_1[0x2a] = 0;
    param_1[0x2b] = 0;
    param_1[0x2c] = 0;
    param_1[0x2d] = 0;
    param_1[0x2e] = 0;
    param_1[0x2f] = 0;
    return;
  }
  puVar1 = *(ushort **)PTR_DAT_0071c294;
  if (puVar1 != (ushort *)0x0) {
    if (param_1 == puVar1) {
      *(undefined4 *)PTR_DAT_0071c294 = *(undefined4 *)(param_1 + 0x1e);
    }
    else {
      do {
        puVar2 = puVar1;
        puVar1 = *(ushort **)(puVar2 + 0x1e);
        if (puVar1 == (ushort *)0x0) goto LAB_005c8eb8;
      } while (param_1 != puVar1);
      *(undefined4 *)(puVar2 + 0x1e) = *(undefined4 *)(param_1 + 0x1e);
    }
  }
LAB_005c8eb8:
  FUN_005d580c(param_1);
  return;
}



//==== 005c8f4c  ns=Global  size=0x2a8
// sig: undefined FUN_005c8f4c(void)
// callers(1): 005c52f0 FUN_005c52f0
// callees(7): 005c4f10 FUN_005c4f10; 005c5ad0 libc::memcpy; 005c8e64 FUN_005c8e64; 005d04b0 FUN_005d04b0; 005d5838 FUN_005d5838; 005d5904 FUN_005d5904; 005d68b0 FUN_005d68b0

ushort * FUN_005c8f4c(int param_1,char *param_2,ushort *param_3,ushort param_4)

{
  undefined1 uVar1;
  char cVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  ushort uVar7;
  int iVar5;
  undefined4 *puVar6;
  uint uVar8;
  ushort *puVar9;
  
  if (param_3 == (ushort *)0x0) {
    return (ushort *)0x0;
  }
  uVar1 = *(undefined1 *)(param_3 + 1);
  uVar3 = *(undefined4 *)(param_3 + 0x1e);
  uVar4 = *(undefined4 *)(param_3 + 0x22);
  uVar7 = *param_3;
  libc::memcpy(param_3,PTR_DAT_0071c298,0x68);
  uVar8 = (int)param_3 + 0x43;
  param_3[0x32] = 0;
  param_3[0x28] = 0;
  param_3[0x29] = 0;
  param_3[0x2a] = 0;
  param_3[0x2b] = 0;
  param_3[0x2c] = 0;
  param_3[0x2d] = 0;
  param_3[0x2e] = 0;
  param_3[0x2f] = 0;
  *(undefined1 *)(param_3 + 1) = uVar1;
  *(undefined4 *)(param_3 + 0x1e) = uVar3;
  *(undefined4 *)(param_3 + 0x22) = uVar4;
  *(ushort **)(param_3 + 0x10) = param_3 + 0x14;
  *(ulonglong *)(param_3 + 0x24) = (ulonglong)uVar8;
  *(uint *)(param_3 + 0x30) = uVar8;
  *(uint *)(param_3 + 4) = uVar8;
  *(uint *)(param_3 + 8) = uVar8;
  *(uint *)(param_3 + 10) = uVar8;
  *(uint *)(param_3 + 0x16) = uVar8;
  *(uint *)(param_3 + 0xc) = uVar8;
  *(uint *)(param_3 + 0x18) = uVar8;
  *(uint *)(param_3 + 0xe) = uVar8;
  cVar2 = *param_2;
  uVar8 = 1;
  if ((cVar2 != 'r') && (uVar8 = 0x1a, cVar2 != 'w')) {
    uVar8 = -((uint)LZCOUNT((int)cVar2 ^ 0x61) >> 5) & 0x16;
  }
  *param_3 = uVar7 & 0x80 | (ushort)uVar8;
  if ((uVar8 & 3) == 0) {
    FUN_005c4f10(param_3);
    puVar6 = (undefined4 *)FUN_005d5904();
    *puVar6 = 0x80010002;
    return (ushort *)0x0;
  }
  param_2 = param_2 + 1;
  cVar2 = *param_2;
  if (cVar2 == 'b') goto LAB_005c90a0;
  while ((cVar2 == '+' && (uVar7 = *param_3 | 3, (*param_3 & 3) != 3))) {
    while( true ) {
      *param_3 = uVar7;
      param_2 = param_2 + 1;
      cVar2 = *param_2;
      if (cVar2 != 'b') break;
LAB_005c90a0:
      uVar7 = *param_3 | 0x20;
      if ((*param_3 & 0x20) != 0) goto LAB_005c90b4;
    }
  }
LAB_005c90b4:
  if (param_1 == 0) {
    if ((short)param_4 < 0) goto LAB_005c91c0;
    param_3[2] = param_4;
  }
  else {
    uVar7 = FUN_005d68b0(param_1,*param_3,param_2);
    param_3[2] = uVar7;
    if ((short)uVar7 < 0) {
LAB_005c91c0:
      FUN_005c8e64(param_3);
      return (ushort *)0x0;
    }
  }
  puVar9 = param_3;
  if ((*param_3 & 0x80) != 0) {
    iVar5 = FUN_005d5838(0x28);
    *(int *)(param_3 + 0x22) = iVar5;
    if (iVar5 != 0) {
      FUN_005d04b0(iVar5);
      return param_3;
    }
    puVar9 = (ushort *)0x0;
    FUN_005c8e64(param_3);
    puVar6 = (undefined4 *)FUN_005d5904();
    *puVar6 = 0x80010004;
  }
  return puVar9;
}



//==== 005c91f4  ns=Global  size=0x374
// sig: undefined FUN_005c91f4(void)
// callers(1): 005c5364 FUN_005c5364
// callees(3): 005cfb10 FUN_005cfb10; 005cfc44 FUN_005cfc44; 005d5838 FUN_005d5838

undefined4 FUN_005c91f4(ushort *param_1)

{
  ushort uVar1;
  int iVar2;
  undefined4 uVar3;
  uint uVar4;
  ushort uVar5;
  uint uVar6;
  
  if (((ulonglong)*(uint *)(param_1 + 0x30) - *(longlong *)(param_1 + 0x28) <=
       *(ulonglong *)(param_1 + 0x24)) &&
     (*(ulonglong *)(param_1 + 0x24) < (ulonglong)*(uint *)(param_1 + 0x30))) {
    return 1;
  }
  uVar5 = *param_1;
  if ((uVar5 & 0x100) != 0) {
    return 0;
  }
  if ((uVar5 & 0xa001) != 1) {
    *param_1 = ((short)uVar5 >> 0xf & 0xc000U) + 0x4200 | uVar5;
    return 0xffffffff;
  }
  if ((uVar5 & 0x800) == 0) {
    uVar6 = (int)param_1 + 0x43;
    uVar4 = *(uint *)(param_1 + 4);
    if (uVar6 == *(uint *)(param_1 + 4)) {
      iVar2 = *(int *)PTR_PTR_0071c29c;
      if (iVar2 != 0) {
        uVar4 = FUN_005d5838(iVar2);
        *(uint *)(param_1 + 4) = uVar4;
        if (uVar4 != 0) {
          *param_1 = *param_1 | 0x40;
          *(ulonglong *)(param_1 + 0x24) = (ulonglong)uVar4 + *(longlong *)(param_1 + 0x2c);
          *(uint *)(param_1 + 6) = uVar4 + iVar2;
          *(uint *)(param_1 + 0x18) = uVar4;
          *(uint *)(param_1 + 0x16) = uVar4;
          goto LAB_005c9280;
        }
      }
      *(uint *)(param_1 + 4) = uVar6;
      *(ushort **)(param_1 + 6) = param_1 + 0x22;
      uVar4 = uVar6;
    }
LAB_005c9280:
    uVar5 = param_1[0x32];
    *(uint *)(param_1 + 8) = uVar4;
    *(uint *)(param_1 + 10) = uVar4;
    *(uint *)(param_1 + 0xc) = uVar4;
    *(uint *)(param_1 + 0x30) = uVar4;
    if ((uVar5 & 1) != 0) goto LAB_005c93cc;
LAB_005c92a0:
    if ((uVar5 & 2) != 0) goto LAB_005c9418;
LAB_005c92b0:
    iVar2 = *(int *)(param_1 + 6);
    if ((*(ulonglong *)(param_1 + 0x2c) < (ulonglong)(longlong)(int)(iVar2 - uVar4)) &&
       ((uVar5 & 4) == 0)) {
      FUN_005cfb10(param_1[2],0,0);
      uVar4 = *(uint *)(param_1 + 4);
      iVar2 = *(int *)(param_1 + 6);
      goto LAB_005c92d8;
    }
  }
  else {
    uVar5 = param_1[0x32];
    uVar4 = *(uint *)(param_1 + 4);
    *(uint *)(param_1 + 8) = uVar4;
    *(uint *)(param_1 + 10) = uVar4;
    *(uint *)(param_1 + 0xc) = uVar4;
    *(uint *)(param_1 + 0x30) = uVar4;
    if ((uVar5 & 1) == 0) goto LAB_005c92a0;
LAB_005c93cc:
    FUN_005cfb10(param_1[2],(int)*(undefined8 *)(param_1 + 0x24) - uVar4,0);
    uVar1 = param_1[0x32];
    uVar4 = *(uint *)(param_1 + 4);
    uVar5 = uVar1 & 0xfffe;
    param_1[0x2c] = 0;
    param_1[0x2d] = 0;
    param_1[0x2e] = 0;
    param_1[0x2f] = 0;
    param_1[0x32] = uVar5;
    if ((uVar1 & 2) == 0) goto LAB_005c92b0;
LAB_005c9418:
    iVar2 = *(int *)(param_1 + 6);
  }
  param_1[0x32] = uVar5 | 2;
  param_1[0x2c] = 0;
  param_1[0x2d] = 0;
  param_1[0x2e] = 0;
  param_1[0x2f] = 0;
LAB_005c92d8:
  iVar2 = FUN_005cfc44(param_1[2],uVar4,iVar2 - uVar4);
  if (iVar2 < 0) {
    uVar3 = 0xffffffff;
    *param_1 = *param_1 | 0x4200;
  }
  else {
    if (iVar2 != 0) {
      *param_1 = *param_1 | 0x5000;
      if ((param_1[0x32] & 2) != 0) {
        *(int *)(param_1 + 0x30) = iVar2 + (int)*(undefined8 *)(param_1 + 0x24);
        *(int *)(param_1 + 10) = iVar2 + *(int *)(param_1 + 4);
        *(longlong *)(param_1 + 0x28) = (longlong)iVar2;
        return 1;
      }
      uVar4 = *(int *)(param_1 + 4) + iVar2;
      param_1[0x32] = param_1[0x32] | 2;
      *(longlong *)(param_1 + 0x28) = (longlong)iVar2;
      *(uint *)(param_1 + 0x30) = uVar4;
      *(int *)(param_1 + 8) = (int)*(ulonglong *)(param_1 + 0x24);
      *(uint *)(param_1 + 10) = uVar4;
      if (*(ulonglong *)(param_1 + 0x24) <= (ulonglong)uVar4) {
        return 1;
      }
      FUN_005cfb10(param_1[2],(int)*(undefined8 *)(param_1 + 0x2c),0);
    }
    uVar3 = 0;
    *param_1 = (ushort)((((ulonglong)*param_1 << 0x20) >> 0x2d) << 0xd) |
               (ushort)((((ulonglong)*param_1 & 0xfff) << 0x13) >> 0x10) >> 3 | 0x4100;
  }
  return uVar3;
}



//==== 005c9568  ns=Global  size=0x430
// sig: undefined FUN_005c9568(void)
// callers(1): 005c5568 FUN_005c5568
// callees(4): 005c50cc FUN_005c50cc; 005c8bc4 FUN_005c8bc4; 005cfb10 FUN_005cfb10; 005d5904 FUN_005d5904

undefined4 FUN_005c9568(ushort *param_1,uint *param_2,longlong param_3,uint param_4)

{
  undefined4 uVar1;
  longlong lVar2;
  int iVar3;
  undefined4 *puVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  ulonglong uVar8;
  ushort uVar9;
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
  if (((*param_1 & 3) == 0) || (iVar3 = FUN_005c50cc(param_1), iVar3 != 0)) goto LAB_005c9730;
  if (param_2 != (uint *)0x0) {
    param_3 = param_3 + (ulonglong)*param_2;
  }
  uVar9 = param_1[0x32] & 0xfffa;
  param_1[0x32] = uVar9;
  iVar3 = (int)param_3;
  if (param_4 == 1) {
    uVar8 = (longlong)iVar3 + *(longlong *)(param_1 + 0x24);
    *(ulonglong *)(param_1 + 0x24) = uVar8;
    if (((ulonglong)*(uint *)(param_1 + 0x30) - *(longlong *)(param_1 + 0x28) <= uVar8) &&
       (uVar8 < *(uint *)(param_1 + 0x30))) {
      uVar9 = uVar9 | 1;
      *(int *)(param_1 + 8) = *(int *)(param_1 + 8) + iVar3;
      param_1[0x32] = uVar9;
    }
    if ((uVar9 & 2) != 0) {
      param_3 = param_3 + *(longlong *)(param_1 + 0x2c);
      param_1[0x2c] = 0;
      param_1[0x2d] = 0;
      param_1[0x2e] = 0;
      param_1[0x2f] = 0;
    }
    iVar3 = (int)param_3;
    if ((*param_1 & 0x1000) != 0) {
      iVar5 = FUN_005c8bc4(param_1,*(undefined4 *)(param_1 + 0xe),(int)param_1 + 0x43);
      iVar6 = *(int *)(param_1 + 0x14);
      if (iVar6 == 0) {
        iVar6 = *(int *)(param_1 + 0x30);
      }
      iVar6 = FUN_005c8bc4(param_1,*(longlong *)(param_1 + 0x24) - param_3 & 0xffffffff,iVar6);
      iVar7 = FUN_005c8bc4(param_1,*(undefined4 *)(param_1 + 8),*(undefined4 *)(param_1 + 0x16));
      iVar3 = iVar3 - (iVar5 + iVar6 + iVar7);
    }
LAB_005c961c:
    iVar3 = FUN_005cfb10(param_1[2],iVar3,param_4);
    uVar9 = param_1[0x32];
  }
  else {
    if (param_4 == 0) {
      if (iVar3 < 0) {
        if (((ulonglong)*(uint *)(param_1 + 0x30) - *(longlong *)(param_1 + 0x28) <=
             *(ulonglong *)(param_1 + 0x24)) &&
           (*(ulonglong *)(param_1 + 0x24) < (ulonglong)*(uint *)(param_1 + 0x30))) {
          param_1[0x32] = uVar9 | 1;
        }
      }
      else {
        uVar8 = param_3 + (ulonglong)*(uint *)(param_1 + 4) & 0xffffffff;
        lVar2 = *(longlong *)(param_1 + 0x24);
        *(ulonglong *)(param_1 + 0x24) = uVar8;
        *(ulonglong *)(param_1 + 0x2c) = uVar8 - lVar2;
        if (((ulonglong)*(uint *)(param_1 + 0x30) - *(longlong *)(param_1 + 0x28) <= uVar8) &&
           (uVar8 < *(uint *)(param_1 + 0x30))) {
          param_1[0x32] = uVar9 | 1;
          *(int *)(param_1 + 8) = *(int *)(param_1 + 8) + (int)(uVar8 - lVar2);
        }
        param_1[0x2c] = 0;
        param_1[0x2d] = 0;
        param_1[0x2e] = 0;
        param_1[0x2f] = 0;
      }
      goto LAB_005c961c;
    }
    if (param_4 == 2) {
      if (-1 < iVar3) {
        param_1[0x32] = uVar9 | 4;
      }
      iVar3 = FUN_005cfb10(param_1[2],iVar3,2);
      uVar8 = (ulonglong)(uint)(iVar3 + *(int *)(param_1 + 4));
      lVar2 = *(longlong *)(param_1 + 0x24);
      *(ulonglong *)(param_1 + 0x24) = uVar8;
      *(ulonglong *)(param_1 + 0x2c) = uVar8 - lVar2;
      if ((uVar8 < (ulonglong)*(uint *)(param_1 + 0x30) - *(longlong *)(param_1 + 0x28)) ||
         (*(uint *)(param_1 + 0x30) <= uVar8)) {
        uVar9 = param_1[0x32];
      }
      else {
        uVar9 = param_1[0x32] | 1;
        *(int *)(param_1 + 8) = *(int *)(param_1 + 8) + (int)(uVar8 - lVar2);
        param_1[0x32] = uVar9;
      }
      param_1[0x2c] = 0;
      param_1[0x2d] = 0;
      param_1[0x2e] = 0;
      param_1[0x2f] = 0;
    }
    else if (param_4 < 3) goto LAB_005c961c;
  }
  if ((uVar9 & 2) == 0) {
    *(longlong *)(param_1 + 0x2c) = (longlong)iVar3;
  }
  if (iVar3 == -1) {
LAB_005c9730:
    puVar4 = (undefined4 *)FUN_005d5904();
    *puVar4 = 0x8001001e;
    return 0xffffffff;
  }
  if ((*(ulonglong *)(param_1 + 0x24) <
       (ulonglong)*(uint *)(param_1 + 0x30) - *(longlong *)(param_1 + 0x28)) ||
     ((ulonglong)*(uint *)(param_1 + 0x30) <= *(ulonglong *)(param_1 + 0x24))) {
    uVar9 = *param_1;
  }
  else {
    uVar9 = *param_1;
    if ((uVar9 & 0x2000) == 0) goto LAB_005c96c4;
  }
  uVar1 = *(undefined4 *)(param_1 + 4);
  *(int *)(param_1 + 0xe) = (int)param_1 + 0x43;
  *(ushort **)(param_1 + 0x10) = param_1 + 0x14;
  param_1[0x14] = 0;
  param_1[0x15] = 0;
  *(undefined4 *)(param_1 + 0x30) = uVar1;
  param_1[0x28] = 0;
  param_1[0x29] = 0;
  param_1[0x2a] = 0;
  param_1[0x2b] = 0;
  *(undefined4 *)(param_1 + 8) = uVar1;
  *(undefined4 *)(param_1 + 10) = uVar1;
  *(undefined4 *)(param_1 + 0x16) = uVar1;
  *(undefined4 *)(param_1 + 0xc) = uVar1;
  *(undefined4 *)(param_1 + 0x18) = uVar1;
LAB_005c96c4:
  if (param_2 != (uint *)0x0) {
    *(uint *)(param_1 + 0x1a) = param_2[1];
    param_1[0x1c] = *(ushort *)(param_2 + 2);
    param_1[0x1d] = *(ushort *)((int)param_2 + 10);
  }
  *param_1 = uVar9 & 0xceff;
  return 0;
}



//==== 005c9998  ns=Global  size=0x1a0
// sig: undefined FUN_005c9998(void)
// callers(3): 005c5638 FUN_005c5638; 005d5914 FUN_005d5914; 005d5a08 FUN_005d5a08
// callees(2): 005c50cc FUN_005c50cc; 005d5838 FUN_005d5838

undefined4 FUN_005c9998(ushort *param_1)

{
  int iVar1;
  uint uVar2;
  ushort uVar3;
  uint uVar4;
  
  if (*(uint *)(param_1 + 8) < *(uint *)(param_1 + 0xc)) {
    return 0;
  }
  uVar3 = *param_1;
  if ((uVar3 & 0x9002) != 2) {
    *param_1 = ((short)uVar3 >> 0xf & 0xc000U) + 0x4200 | uVar3;
    return 0xffffffff;
  }
  if (((uVar3 & 0x6000) == 0x6000) && (*(uint *)(param_1 + 6) <= *(uint *)(param_1 + 8))) {
    iVar1 = FUN_005c50cc(param_1);
    if (iVar1 != 0) {
      return 0xffffffff;
    }
    uVar3 = *param_1;
  }
  if ((uVar3 & 0x800) == 0) {
    uVar4 = (int)param_1 + 0x43;
    uVar2 = *(uint *)(param_1 + 4);
    if (uVar4 == *(uint *)(param_1 + 4)) {
      iVar1 = *(int *)PTR_PTR_0071c2a0;
      if (iVar1 != 0) {
        uVar2 = FUN_005d5838(iVar1);
        *(uint *)(param_1 + 4) = uVar2;
        if (uVar2 != 0) {
          uVar3 = *param_1 | 0x40;
          *(uint *)(param_1 + 6) = uVar2 + iVar1;
          *param_1 = uVar3;
          *(uint *)(param_1 + 0x18) = uVar2;
          *(ulonglong *)(param_1 + 0x24) = (ulonglong)uVar2;
          *(uint *)(param_1 + 0x16) = uVar2;
          goto LAB_005c9a18;
        }
        uVar3 = *param_1;
      }
      *(uint *)(param_1 + 4) = uVar4;
      *(ushort **)(param_1 + 6) = param_1 + 0x22;
      uVar2 = uVar4;
    }
  }
  else {
    uVar2 = *(uint *)(param_1 + 4);
  }
LAB_005c9a18:
  param_1[0x28] = 0;
  param_1[0x29] = 0;
  param_1[0x2a] = 0;
  param_1[0x2b] = 0;
  *(undefined4 *)(param_1 + 0xc) = *(undefined4 *)(param_1 + 6);
  *param_1 = uVar3 | 0x6000;
  *(uint *)(param_1 + 0x30) = uVar2;
  param_1[0x32] = param_1[0x32] & 0xfffe;
  *(uint *)(param_1 + 8) = uVar2;
  *(uint *)(param_1 + 10) = uVar2;
  return 0;
}



//==== 005c9b38  ns=Global  size=0x5c8
// sig: undefined FUN_005c9b38(void)
// callers(1): 005c8480 FUN_005c8480
// callees(5): 005cc0a8 libc::memcpy4; 005cc0d8 FUN_005cc0d8; 005cc578 libc::strchr; 005d6920 FUN_005d6920; 005d9b38 libc::mbrtowc
// strings: 0067e830: 'hjltzL' | 0067e838: 'cCn[' (raw)

int FUN_005c9b38(undefined4 *param_1,undefined4 param_2,byte *param_3,undefined8 param_4)

{
  byte bVar1;
  ushort uVar2;
  undefined *puVar3;
  size_t sVar6;
  ulonglong uVar4;
  char cVar8;
  char *pcVar7;
  ulonglong uVar5;
  longlong lVar9;
  byte *pbVar10;
  longlong lVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  wchar_t local_70 [2];
  mbstate_t local_6c;
  undefined4 *local_64;
  undefined4 local_60;
  undefined1 auStack_5c [4];
  byte *local_58;
  int local_54;
  int local_4c;
  undefined1 local_48;
  byte local_47;
  char local_46;
  
  local_6c.__count = 0;
  local_6c.__value.__wch._0_2_ = 0;
  local_6c.__value.__wch._2_2_ = 0;
  local_64 = param_1;
  local_60 = param_2;
  libc::memcpy4(auStack_5c,param_4);
  puVar3 = PTR_PTR_0071c2a4;
  lVar11 = 0;
  local_54 = 0;
  local_58 = param_3;
LAB_005c9bac:
  iVar12 = (int)lVar11;
  local_70[0] = L'\0';
  sVar6 = libc::mbrtowc(local_70,(char *)local_58,0x7fffffff,&local_6c);
  do {
    uVar5 = (ulonglong)(int)sVar6;
    if ((int)sVar6 < 1) {
      uVar5 = -(ulonglong)*local_58 >> 0x3f;
    }
    uVar4 = FUN_005cc0d8(local_70[0]);
    if ((*(ushort *)((int)((uVar4 & 0xffffffff) << 1) + *(int *)puVar3) & 0x144) == 0) {
      uVar4 = ZEXT48(local_58);
      iVar14 = (int)uVar5 + ((int)(((ushort)local_70[0] ^ 0x25) - 1) >> 0x1f);
      if (iVar14 < 1) goto LAB_005c9da8;
      iVar13 = 0;
      do {
        iVar13 = iVar13 + 1;
        local_54 = local_54 + 1;
        cVar8 = (*(code *)*local_64)(local_60,0,1);
        pcVar7 = (char *)uVar4;
        uVar4 = uVar4 + 1;
        if (*pcVar7 != cVar8) {
          if (cVar8 == -1) {
            return iVar12;
          }
          local_54 = local_54 + -1;
          (*(code *)*local_64)(local_60,cVar8,0);
          return iVar12;
        }
      } while (iVar14 != iVar13);
      lVar9 = uVar5 + ZEXT48(local_58);
      local_58 = (byte *)lVar9;
    }
    else {
      do {
        local_54 = local_54 + 1;
        uVar4 = (*(code *)*local_64)(local_60,0,1);
      } while ((*(ushort *)(((uint)((uVar4 & 0xffffffff) << 1) & 0x1fe) + *(int *)puVar3) & 0x144)
               != 0);
      if ((int)uVar4 == -1) {
        uVar4 = ZEXT48(local_58);
        local_54 = local_54 + -1;
      }
      else {
        local_54 = local_54 + -1;
        (*(code *)*local_64)(local_60,(int)uVar4,0);
        uVar4 = ZEXT48(local_58);
      }
LAB_005c9da8:
      lVar9 = uVar5 + uVar4;
      local_58 = (byte *)lVar9;
    }
    if (local_70[0] == L'%') break;
    if (local_70[0] == L'\0') {
      return iVar12;
    }
    local_70[0] = L'\0';
    sVar6 = libc::mbrtowc(local_70,(char *)local_58,0x7fffffff,&local_6c);
  } while( true );
  if (*(byte *)lVar9 == 0x2a) {
    lVar9 = lVar9 + 1;
    iVar14 = *(int *)puVar3;
    local_58 = (byte *)lVar9;
    local_48 = 0x2a;
    bVar1 = *local_58;
    uVar2 = *(ushort *)((uint)bVar1 * 2 + iVar14);
  }
  else {
    iVar14 = *(int *)puVar3;
    local_48 = 0;
    bVar1 = *(byte *)lVar9;
    uVar2 = *(ushort *)((uint)bVar1 * 2 + iVar14);
  }
  local_4c = 0;
  if ((uVar2 & 0x20) != 0) {
    do {
      local_4c = local_4c * 10 + (uint)bVar1 + -0x30;
      do {
        lVar9 = lVar9 + 1;
        local_58 = (byte *)lVar9;
        bVar1 = *local_58;
        if ((*(ushort *)((uint)bVar1 * 2 + iVar14) & 0x20) == 0) {
          pcVar7 = libc::strchr(PTR_s_hjltzL_0071c2a8,(int)(char)bVar1);
          if (pcVar7 != (char *)0x0) goto LAB_005c9e8c;
          pcVar7 = (char *)0x0;
          goto LAB_005ca08c;
        }
      } while (local_4c == 0x7fffffff);
    } while( true );
  }
  local_4c = 0;
  pcVar7 = libc::strchr(PTR_s_hjltzL_0071c2a8,(int)(char)bVar1);
  if (pcVar7 == (char *)0x0) {
LAB_005ca08c:
    local_47 = (byte)pcVar7;
    pbVar10 = local_58;
  }
  else {
LAB_005c9e8c:
    pbVar10 = local_58 + 1;
    local_47 = *local_58;
    if (local_47 == 0x68) {
      if (*pbVar10 == 0x68) {
        local_47 = 0x62;
        pbVar10 = local_58 + 2;
      }
    }
    else if ((local_47 == 0x6c) && (*pbVar10 == 0x6c)) {
      local_47 = 0x71;
      pbVar10 = local_58 + 2;
    }
  }
  local_58 = pbVar10;
  pcVar7 = libc::strchr(PTR_DAT_0071c2ac,(int)(char)*local_58);
  if (pcVar7 == (char *)0x0) {
    do {
      local_54 = local_54 + 1;
      uVar5 = (*(code *)*local_64)(local_60,0,1);
    } while ((*(ushort *)(((uint)((uVar5 & 0xffffffff) << 1) & 0x1fe) + *(int *)puVar3) & 0x144) !=
             0);
    if ((int)uVar5 == -1) {
      local_54 = local_54 + -1;
    }
    else {
      local_54 = local_54 + -1;
      (*(code *)*local_64)(local_60,(int)uVar5,0);
    }
  }
  iVar14 = FUN_005d6920(&local_64);
  if (iVar14 < 1) {
    if (iVar12 == 0) {
      iVar12 = iVar14;
    }
    return iVar12;
  }
  local_58 = local_58 + 1;
  lVar11 = lVar11 - (((longlong)((int)local_46 >> 0x1f) -
                      ((longlong)((int)local_46 >> 0x1f) ^ (longlong)local_46) << 0x20) >> 0x3f);
  goto LAB_005c9bac;
}



//==== 005ca100  ns=Global  size=0x398
// sig: undefined FUN_005ca100(void)
// callers(1): 005ca498 FUN_005ca498
// callees(10): 005ca4a0 FUN_005ca4a0; 005ca99c FUN_005ca99c; 005caf7c FUN_005caf7c; 005d5d10 FUN_005d5d10; 005d5f5c FUN_005d5f5c; 005d60b0 FUN_005d60b0; 005d615c FUN_005d615c; 005d63b4 FUN_005d63b4; 005d6450 FUN_005d6450; 005d6668 FUN_005d6668

double FUN_005ca100(undefined4 param_1,undefined8 param_2,int param_3,undefined4 *param_4)

{
  uint uVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  int iVar5;
  undefined8 uVar4;
  longlong lVar6;
  double *pdVar7;
  double *pdVar8;
  int iVar9;
  int *piVar10;
  ulonglong uVar11;
  undefined4 uStack00000030;
  double local_e0;
  int local_d8 [4];
  undefined4 local_c8;
  undefined4 uStack_c4;
  undefined8 local_c0;
  undefined8 local_b8;
  undefined8 local_b0;
  undefined8 local_a8;
  undefined8 local_a0;
  undefined4 local_98;
  undefined4 uStack_94;
  undefined8 local_90;
  undefined4 local_80 [2];
  undefined8 local_78;
  undefined4 local_70 [2];
  undefined8 local_68;
  longlong local_60;
  
  uStack00000030 = param_1;
  uVar3 = FUN_005ca99c(&stack0x00000030);
  if (param_4 != (undefined4 *)0x0) {
    *param_4 = 0;
  }
  uVar2 = (uVar3 & 7) << 0x1c | (uVar3 << 0x20) >> 0x24;
  uVar1 = (uint)(uVar2 << 4) | (uint)uVar2 >> 0x1c;
  if (uVar1 == 1) {
    iVar5 = FUN_005ca4a0(param_1,uStack00000030,param_2,local_d8,2);
    if ((iVar5 != 0) && (local_d8[1] != 0)) {
      local_60 = (longlong)local_d8[1];
      local_98 = 0x401c;
      local_90 = 0xee6b280000000000;
      FUN_005d60b0((double)local_60,&local_c8);
      if (1 < iVar5) {
        piVar10 = local_d8 + 1;
        iVar9 = 1;
        do {
          piVar10 = piVar10 + 1;
          iVar9 = iVar9 + 1;
          FUN_005d615c(&local_a8,CONCAT44(local_c8,uStack_c4),local_c0,CONCAT44(local_98,uStack_94),
                       local_90);
          local_60 = (longlong)*piVar10;
          FUN_005d60b0((double)local_60,&local_b8);
          FUN_005d63b4(local_80,local_a8,local_a0,local_b8,local_b0);
          local_c8 = local_80[0];
          local_c0 = local_78;
        } while (iVar5 != iVar9);
      }
      if (param_3 + local_d8[0] != 0) {
        FUN_005d6450(local_70,CONCAT44(local_c8,uStack_c4),local_c0,param_3 + local_d8[0]);
        local_c8 = local_70[0];
        local_c0 = local_68;
      }
      local_e0 = (double)FUN_005d6668(CONCAT44(local_c8,uStack_c4),local_c0,param_4);
      goto LAB_005ca19c;
    }
  }
  else {
    if (uVar1 == 2) {
      uVar2 = FUN_005caf7c(param_1,uStack00000030,param_2,local_d8,2);
      if ((int)uVar2 == 0) {
        local_e0 = DAT_0071c2b0;
      }
      else {
        uVar11 = uVar2 & 0xffffffff;
        local_60 = (longlong)*(int *)((int)local_d8 + (int)((uVar2 & 0xffffffff) << 2));
        local_e0 = (double)local_60;
        pdVar7 = (double *)PTR_DAT_0071c2b8;
        if ((int)uVar2 + -1 < 0) {
          uVar11 = 1;
        }
        while (uVar11 = uVar11 - 1, pdVar8 = pdVar7, uVar11 != 0) {
          while( true ) {
            uVar2 = uVar2 - 1;
            iVar5 = *(int *)((int)local_d8 + (int)((uVar2 & 0xffffffff) << 2));
            lVar6 = (longlong)iVar5;
            pdVar7 = pdVar8 + 1;
            if (iVar5 == 0) break;
            local_e0 = (double)lVar6 * *pdVar8 + local_e0;
            uVar11 = uVar11 - 1;
            pdVar8 = pdVar8 + 1;
            local_60 = lVar6;
            if (uVar11 == 0) goto LAB_005ca39c;
          }
        }
      }
LAB_005ca39c:
      uVar4 = FUN_005d5d10(&local_e0,local_d8[0]);
      local_e0 = (double)FUN_005d5f5c(local_e0,uVar4,param_3,param_4);
      goto LAB_005ca19c;
    }
    if (uVar1 == 3) {
      local_e0 = *(double *)PTR_DAT_0071c2bc;
      goto LAB_005ca19c;
    }
    if (uVar1 == 4) {
      local_e0 = *(double *)PTR_DAT_0071c2c0;
      goto LAB_005ca19c;
    }
  }
  local_e0 = DAT_0071c2b0;
LAB_005ca19c:
  if ((uVar3 & 8) == 0) {
    return local_e0;
  }
  return -local_e0;
}



//==== 005ca498  ns=Global  size=0x8
// sig: undefined FUN_005ca498(void)
// callers(2): 00623834 FUN_00623834; 00624044 FUN_00624044
// callees(1): 005ca100 FUN_005ca100

void FUN_005ca498(void)

{
  FUN_005ca100();
  return;
}



//==== 005ca4a0  ns=Global  size=0x4fc
// sig: undefined FUN_005ca4a0(void)
// callers(2): 005ca100 FUN_005ca100; 005da1bc FUN_005da1bc
// callees(0): 

uint FUN_005ca4a0(byte *param_1,byte *param_2,int *param_3,longlong param_4,ulonglong param_5)

{
  bool bVar1;
  byte bVar2;
  ushort uVar3;
  int iVar4;
  int iVar5;
  int *piVar6;
  bool bVar7;
  ulonglong uVar8;
  byte bVar9;
  ulonglong uVar10;
  longlong lVar11;
  int iVar12;
  longlong lVar13;
  longlong lVar14;
  byte *pbVar15;
  ulonglong uVar16;
  uint uVar17;
  longlong lVar18;
  uint uVar19;
  int iVar21;
  longlong lVar20;
  char acStack_71 [49];
  
  param_5 = (param_5 & 0x1fffffff) * 8 + param_5;
  if (0x2d < (int)param_5) {
    param_5 = 0x2d;
  }
  bVar7 = false;
  piVar6 = (int *)param_4;
  piVar6[1] = 0;
  *piVar6 = 0;
  bVar9 = *param_2;
  if (bVar9 == 0x30) {
    do {
      param_2 = param_2 + 1;
      bVar9 = *param_2;
    } while (bVar9 == 0x30);
    bVar7 = true;
  }
  uVar10 = (ulonglong)bVar9;
  uVar8 = 0;
  iVar21 = (int)param_5;
  bVar1 = iVar21 < 0;
  iVar4 = *(int *)PTR_PTR_0071c2c8;
  if ((*(ushort *)((uint)bVar9 * 2 + iVar4) & 0x20) != 0) {
    do {
      while( true ) {
        pbVar15 = param_2;
        if (!bVar1) break;
        *piVar6 = *piVar6 + 1;
        bVar9 = pbVar15[1];
        uVar10 = (ulonglong)bVar9;
        param_2 = pbVar15 + 1;
        if ((*(ushort *)((uint)bVar9 * 2 + iVar4) & 0x20) == 0) goto LAB_005ca5b0;
      }
      acStack_71[(int)uVar8 + 1] = (char)uVar10 + -0x30;
      bVar9 = pbVar15[1];
      uVar10 = (ulonglong)bVar9;
      uVar8 = uVar8 + 1;
      bVar1 = iVar21 < (int)uVar8;
      param_2 = pbVar15 + 1;
    } while ((*(ushort *)((uint)bVar9 * 2 + iVar4) & 0x20) != 0);
LAB_005ca5b0:
    param_2 = pbVar15 + 1;
    bVar7 = true;
  }
  if (**(char **)(PTR_PTR_0071c2cc + 0x2c) == (char)uVar10) {
    param_2 = param_2 + 1;
    uVar10 = (ulonglong)*param_2;
  }
  if (((int)uVar8 == 0) && ((char)uVar10 == '0')) {
    iVar12 = *piVar6;
    do {
      iVar12 = iVar12 + -1;
      *piVar6 = iVar12;
      param_2 = param_2 + 1;
      uVar10 = (ulonglong)*param_2;
    } while (*param_2 == 0x30);
    bVar7 = true;
  }
  if ((*(ushort *)((int)(uVar10 << 1) + iVar4) & 0x20) != 0) {
    do {
      iVar12 = (int)uVar8;
      if (!bVar1) {
        iVar5 = *piVar6;
        uVar8 = uVar8 + 1;
        acStack_71[iVar12 + 1] = (char)uVar10 + -0x30;
        bVar1 = iVar21 < (int)uVar8;
        *piVar6 = iVar5 + -1;
      }
      param_2 = param_2 + 1;
      uVar10 = (ulonglong)*param_2;
    } while ((*(ushort *)((uint)*param_2 * 2 + iVar4) & 0x20) != 0);
    bVar7 = true;
  }
  if (bVar1) {
    if ('\x04' < acStack_71[iVar21 + 1]) {
      acStack_71[iVar21] = acStack_71[iVar21] + '\x01';
    }
    *piVar6 = *piVar6 + 1;
    uVar8 = param_5;
  }
  if ((int)uVar8 < 1) {
    if ((int)uVar8 == 0) {
LAB_005ca700:
      uVar8 = 1;
      acStack_71[1] = 0;
    }
  }
  else if (acStack_71[(int)(uVar8 - 1) + 1] == '\0') {
    uVar10 = uVar8 & 0xffffffff;
    iVar21 = *piVar6;
    uVar16 = uVar8 - 1;
    do {
      uVar8 = uVar16;
      iVar21 = iVar21 + 1;
      uVar10 = uVar10 - 1;
      if (uVar10 == 0) {
        *piVar6 = iVar21;
        goto LAB_005ca700;
      }
      uVar16 = uVar8 - 1;
    } while (acStack_71[(int)(uVar8 - 1) + 1] == '\0');
    *piVar6 = iVar21;
  }
  if (!bVar7) {
    uVar19 = 0;
  }
  else {
    iVar12 = (int)uVar8;
    uVar10 = (longlong)(iVar12 / 9 + (iVar12 >> 0x1f)) - (longlong)(iVar12 >> 0x1f);
    lVar14 = 9 - (uVar8 - ((uVar10 & 0x1fffffff) * 8 + uVar10));
    iVar21 = (int)lVar14 >> 0x1f;
    lVar11 = (longlong)iVar21;
    uVar10 = ((int)lVar14 / 9 + iVar21) - lVar11;
    uVar10 = lVar14 - ((uVar10 & 0x1fffffff) * 8 + uVar10);
    uVar16 = (ulonglong)((int)uVar10 >> 0x1f);
    lVar13 = uVar16 - (uVar16 ^ uVar10);
    lVar20 = (lVar13 << 0x20) >> 0x3f;
    lVar18 = -lVar20;
    uVar19 = (uint)lVar13 >> 0x1f;
    if (0 < iVar12) {
      uVar8 = uVar8 & 0xffffffff;
      param_4 = lVar20 * -4 + param_4;
      iVar21 = 0;
      lVar20 = param_4;
      while( true ) {
        uVar19 = (uint)lVar18;
        iVar12 = (int)lVar14;
        uVar10 = (iVar12 / 9 + (iVar12 >> 0x1f)) - lVar11;
        if (iVar12 == (int)((uVar10 & 0xffffffff) << 3) + (int)uVar10) {
          lVar20 = lVar20 + 4;
          lVar18 = lVar18 + 1;
          uVar19 = (uint)lVar18;
          param_4 = param_4 + 4;
          *(int *)lVar20 = (int)acStack_71[iVar21 + 1];
        }
        else {
          *(int *)param_4 = *(int *)param_4 * 10 + (int)acStack_71[iVar21 + 1];
        }
        if (uVar8 == 1) break;
        uVar8 = uVar8 - 1;
        lVar14 = lVar14 + 1;
        iVar21 = iVar21 + 1;
        lVar11 = (longlong)((int)lVar14 >> 0x1f);
      }
    }
    if ((*param_2 == 0x65) || (*param_2 == 0x45)) {
      pbVar15 = param_2 + 1;
      bVar9 = *pbVar15;
      if ((bVar9 == 0x2b) || (bVar9 == 0x2d)) {
        pbVar15 = param_2 + 2;
        bVar2 = *pbVar15;
      }
      else {
        bVar2 = bVar9;
        bVar9 = 0x2b;
      }
      bVar1 = false;
      iVar12 = 0;
      iVar21 = 0;
      if ((*(ushort *)((uint)bVar2 * 2 + iVar4) & 0x20) != 0) {
        do {
          uVar17 = (uint)bVar2;
          pbVar15 = pbVar15 + 1;
          bVar2 = *pbVar15;
          iVar12 = iVar21 * 10 + uVar17 + -0x30;
          uVar3 = *(ushort *)((uint)bVar2 * 2 + iVar4);
          while( true ) {
            if ((uVar3 & 0x20) == 0) {
              bVar1 = true;
              goto LAB_005ca8e8;
            }
            iVar21 = iVar12;
            if (iVar12 < 100000000) break;
            pbVar15 = pbVar15 + 1;
            bVar2 = *pbVar15;
            uVar3 = *(ushort *)((uint)bVar2 * 2 + iVar4);
          }
        } while( true );
      }
LAB_005ca8e8:
      if (bVar9 == 0x2d) {
        iVar12 = -iVar12;
      }
      *piVar6 = iVar12 + *piVar6;
      if (bVar1) {
        param_2 = pbVar15;
      }
    }
  }
  if (param_3 != (int *)0x0) {
    if (!bVar7) {
      param_2 = param_1;
    }
    *param_3 = (int)param_2;
  }
  return uVar19;
}



//==== 005ca99c  ns=Global  size=0x290
// sig: undefined FUN_005ca99c(void)
// callers(2): 005ca100 FUN_005ca100; 005da1bc FUN_005da1bc
// callees(0): 

uint FUN_005ca99c(undefined4 *param_1,undefined4 *param_2)

{
  byte bVar1;
  uint uVar2;
  byte *pbVar3;
  byte *pbVar4;
  
  pbVar3 = (byte *)*param_1;
  while (bVar1 = *pbVar3, (*(ushort *)((uint)bVar1 * 2 + *(int *)PTR_PTR_0071c2d0) & 0x144) != 0) {
    pbVar3 = pbVar3 + 1;
  }
  if (bVar1 == 0x2d) {
    pbVar3 = pbVar3 + 1;
    uVar2 = 8;
  }
  else {
    uVar2 = 0;
    if (bVar1 == 0x2b) {
      pbVar3 = pbVar3 + 1;
    }
  }
  bVar1 = *pbVar3;
  if ((bVar1 == 0x6e) || (bVar1 == 0x4e)) {
    pbVar4 = pbVar3 + 1;
    if ((*pbVar4 != 0x61) && (*pbVar4 != 0x41)) goto LAB_005caa78;
    pbVar4 = pbVar3 + 2;
    if ((*pbVar4 != 0x6e) && (*pbVar4 != 0x4e)) goto LAB_005caa78;
    pbVar4 = pbVar3 + 3;
    pbVar3 = pbVar4;
    if (*pbVar4 == 0x28) {
      do {
        do {
          pbVar3 = pbVar3 + 1;
        } while ((*(ushort *)((uint)*pbVar3 * 2 + *(int *)PTR_PTR_0071c2d0) & 0x232) != 0);
      } while (*pbVar3 == 0x5f);
    }
    uVar2 = 4;
    if (*pbVar3 == 0x29) {
      pbVar4 = pbVar3 + 1;
    }
  }
  else {
    if ((bVar1 != 0x69) && (bVar1 != 0x49)) {
      if ((bVar1 == 0x30) && ((pbVar3[1] == 0x78 || (pbVar3[1] == 0x58)))) {
        pbVar3 = pbVar3 + 2;
        uVar2 = uVar2 | 2;
      }
      else {
        uVar2 = uVar2 | 1;
      }
      goto LAB_005caa2c;
    }
    pbVar4 = pbVar3 + 1;
    if ((*pbVar4 == 0x6e) || (*pbVar4 == 0x4e)) {
      pbVar4 = pbVar3 + 2;
      if ((*pbVar4 == 0x66) || (*pbVar4 == 0x46)) {
        pbVar4 = pbVar3 + 3;
        uVar2 = uVar2 | 3;
        if ((((*pbVar4 == 0x69) || (*pbVar4 == 0x49)) &&
            ((pbVar3[4] == 0x6e || (pbVar3[4] == 0x4e)))) &&
           ((((pbVar3[5] == 0x69 || (pbVar3[5] == 0x49)) &&
             ((pbVar3[6] == 0x74 || (pbVar3[6] == 0x54)))) &&
            ((pbVar3[7] == 0x79 || (pbVar3[7] == 0x59)))))) {
          pbVar4 = pbVar3 + 8;
        }
        goto LAB_005caa7c;
      }
    }
LAB_005caa78:
    uVar2 = 0;
  }
LAB_005caa7c:
  pbVar3 = pbVar4;
  if (param_2 != (undefined4 *)0x0) {
    *param_2 = pbVar3;
    *param_1 = pbVar3;
    return uVar2;
  }
LAB_005caa2c:
  *param_1 = pbVar3;
  return uVar2;
}



//==== 005cac2c  ns=Global  size=0x348
// sig: undefined FUN_005cac2c(void)
// callers(2): 005c8890 FUN_005c8890; 005caf74 FUN_005caf74
// callees(2): 005c5984 FUN_005c5984; 005d5904 FUN_005d5904
// strings: 006610b8: '0123456789abcdefghijklmnopqrstuvwxyz'

uint FUN_005cac2c(byte *param_1,undefined4 *param_2,uint param_3,undefined4 *param_4)

{
  byte bVar1;
  undefined *puVar2;
  undefined *puVar3;
  int iVar4;
  undefined4 *puVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  byte *pbVar9;
  uint uVar10;
  int iVar11;
  byte bVar12;
  byte *pbVar13;
  byte *pbVar14;
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
  if (param_4 != (undefined4 *)0x0) {
    *param_4 = 0;
  }
  puVar3 = PTR_s_0123456789abcdefghijklmnopqrstuv_0071c2d8;
  puVar2 = PTR_PTR_0071c2d4;
  bVar12 = *param_1;
  pbVar13 = param_1;
  while ((*(ushort *)((uint)bVar12 * 2 + *(int *)PTR_PTR_0071c2d4) & 0x144) != 0) {
    pbVar13 = pbVar13 + 1;
    bVar12 = *pbVar13;
  }
  if ((bVar12 == 0x2d) || (bVar12 == 0x2b)) {
    pbVar13 = pbVar13 + 1;
  }
  else {
    bVar12 = 0x2b;
  }
  if ((((int)param_3 < 0) || (param_3 == 1)) || (0x24 < (int)param_3)) goto LAB_005cad18;
  pbVar9 = pbVar13;
  if ((int)param_3 < 1) {
    param_3 = 10;
    uVar7 = 10;
    if (*pbVar13 == 0x30) {
      if ((pbVar13[1] != 0x78) && (param_3 = 8, pbVar13[1] != 0x58)) goto LAB_005cadb4;
      pbVar13 = pbVar13 + 2;
      param_3 = 0x10;
      goto LAB_005cad94;
    }
  }
  else {
    if (param_3 == 0x10) {
      uVar7 = 0x10;
      if (*pbVar13 != 0x30) goto LAB_005cadd8;
      if ((pbVar13[1] != 0x78) && (pbVar13[1] != 0x58)) goto LAB_005cadb4;
      pbVar13 = pbVar13 + 2;
    }
LAB_005cad94:
    bVar1 = *pbVar13;
    pbVar9 = pbVar13;
    while (uVar7 = param_3, bVar1 == 0x30) {
LAB_005cadb4:
      pbVar13 = pbVar13 + 1;
      bVar1 = *pbVar13;
    }
  }
LAB_005cadd8:
  iVar11 = 0;
  pbVar14 = pbVar13;
  uVar6 = 0;
  uVar8 = 0;
  while( true ) {
    uVar10 = uVar6;
    bVar1 = *pbVar14;
    uVar6 = (uint)bVar1;
    if ((*(ushort *)((uint)bVar1 * 2 + *(int *)puVar2) & 2) != 0) {
      uVar6 = bVar1 + 0x20;
    }
    iVar4 = FUN_005c5984(puVar3,uVar6,uVar7);
    if (iVar4 == 0) break;
    iVar11 = iVar4 - (int)puVar3;
    pbVar14 = pbVar14 + 1;
    uVar6 = uVar10 * param_3 + (int)(char)iVar11;
    uVar8 = uVar10;
  }
  if (pbVar14 != pbVar9) {
    if (((int)(pbVar14 + (-(int)(char)puVar3[param_3 + 0x28] - (int)pbVar13)) < 0) ||
       ((((int)(pbVar14 + (-(int)(char)puVar3[param_3 + 0x28] - (int)pbVar13)) < 1 &&
         (uVar7 = uVar10 - (int)(char)iVar11, uVar7 <= uVar10)) && (uVar7 / param_3 == uVar8)))) {
      if (bVar12 == 0x2d) {
        uVar10 = -uVar10;
      }
    }
    else {
      puVar5 = (undefined4 *)FUN_005d5904();
      *puVar5 = 0x8001001c;
      if (param_4 == (undefined4 *)0x0) {
        uVar10 = 0xffffffff;
      }
      else {
        uVar10 = 0xffffffff;
        *param_4 = 1;
      }
    }
    if (param_2 == (undefined4 *)0x0) {
      return uVar10;
    }
    *param_2 = pbVar14;
    return uVar10;
  }
LAB_005cad18:
  if (param_2 != (undefined4 *)0x0) {
    *param_2 = param_1;
  }
  return 0;
}



//==== 005caf74  ns=Global  size=0x8
// sig: undefined FUN_005caf74(void)
// callers(3): 004f9080 FUN_004f9080; 00623834 FUN_00623834; 00624044 FUN_00624044
// callees(1): 005cac2c FUN_005cac2c

void FUN_005caf74(void)

{
  FUN_005cac2c();
  return;
}



//==== 005caf7c  ns=Global  size=0x580
// sig: undefined FUN_005caf7c(void)
// callers(2): 005ca100 FUN_005ca100; 005da1bc FUN_005da1bc
// callees(1): 005c5984 FUN_005c5984
// strings: 00661108: '0123456789abcdefABCDEF'

int FUN_005caf7c(byte *param_1,byte *param_2,undefined4 *param_3,uint *param_4,ulonglong param_5)

{
  bool bVar1;
  bool bVar2;
  bool bVar3;
  byte bVar4;
  ushort uVar5;
  ulonglong uVar6;
  bool bVar7;
  undefined *puVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  int iVar11;
  int iVar12;
  byte bVar13;
  uint uVar14;
  uint uVar15;
  longlong lVar16;
  int iVar17;
  uint *puVar18;
  byte *pbVar19;
  longlong lVar20;
  int iVar21;
  int iVar22;
  byte in_cr0;
  byte in_cr1;
  byte in_cr2;
  byte in_cr3;
  byte unaff_cr4;
  byte in_cr5;
  byte in_cr6;
  byte in_cr7;
  uint uStack00000008;
  
  puVar8 = PTR_s_0123456789abcdefABCDEF_0071c2dc;
  uStack00000008 =
       (uint)(in_cr0 & 0xf) << 0x1c | (uint)(in_cr1 & 0xf) << 0x18 | (uint)(in_cr2 & 0xf) << 0x14 |
       (uint)(in_cr3 & 0xf) << 0x10 | (uint)(unaff_cr4 & 0xf) << 0xc | (uint)(in_cr5 & 0xf) << 8 |
       (uint)(in_cr6 & 0xf) << 4 | (uint)(in_cr7 & 0xf);
  bVar7 = false;
  lVar16 = (param_5 & 0x1fffffff) * 8 - param_5;
  if (*param_2 == 0x30) {
    do {
      param_2 = param_2 + 1;
    } while (*param_2 == 0x30);
    bVar7 = true;
  }
  iVar17 = (int)lVar16;
  bVar1 = 0 < iVar17;
  bVar2 = iVar17 < 0;
  bVar3 = iVar17 == 0;
  lVar20 = 0;
  *param_4 = 0;
  puVar18 = param_4;
  while( true ) {
    iVar11 = FUN_005c5984(puVar8,*param_2,0x16);
    iVar21 = (int)lVar20;
    if (iVar11 == 0) break;
    if (bVar1) {
      uVar9 = (longlong)(iVar21 / 7 + (iVar21 >> 0x1f)) - (longlong)(iVar21 >> 0x1f);
      lVar20 = lVar20 + 1;
      iVar12 = (int)lVar20;
      bVar1 = iVar12 < iVar17;
      bVar2 = iVar17 < iVar12;
      bVar3 = iVar12 == iVar17;
      if (iVar21 == (int)((uVar9 & 0xffffffff) << 3) - (int)uVar9) {
        puVar18 = puVar18 + 1;
        *puVar18 = 0;
      }
      *puVar18 = *puVar18 * 0x10 + (int)*(char *)(iVar11 + 0x18);
    }
    else {
      *param_4 = *param_4 + 1;
      if (bVar3) {
        bVar1 = false;
        bVar3 = true;
        bVar2 = false;
        lVar20 = lVar16;
        if ('\a' < *(char *)(iVar11 + 0x18)) {
          lVar20 = lVar16 + 1;
          iVar11 = (int)lVar20;
          bVar1 = iVar11 < iVar17;
          bVar2 = iVar17 < iVar11;
          bVar3 = iVar11 == iVar17;
          *puVar18 = *puVar18 + 1;
        }
      }
    }
    param_2 = param_2 + 1;
    bVar7 = true;
  }
  if (bVar2) {
    lVar20 = lVar16;
  }
  if (*param_2 == **(byte **)(PTR_PTR_0071c2e0 + 0x2c)) {
    param_2 = param_2 + 1;
  }
  if (((int)lVar20 == 0) && (*param_2 == 0x30)) {
    uVar14 = *param_4;
    do {
      param_2 = param_2 + 1;
      uVar14 = uVar14 - 1;
      *param_4 = uVar14;
    } while (*param_2 == 0x30);
    bVar7 = true;
  }
  do {
    iVar12 = FUN_005c5984(puVar8,*param_2,0x16);
    iVar11 = iVar12 - (int)puVar8;
    iVar21 = (int)lVar20;
    while( true ) {
      iVar22 = (int)lVar20;
      if (iVar12 == 0) {
        uVar9 = (longlong)(iVar22 / 7 + (iVar22 >> 0x1f)) - (longlong)(iVar21 >> 0x1f);
        lVar16 = lVar20 - ((uVar9 & 0x1fffffff) * 8 - uVar9);
        if ((int)lVar16 == 0) {
          uVar9 = (ulonglong)*param_4;
        }
        else {
          uVar9 = 7 - lVar16;
          lVar20 = lVar20 + uVar9;
          *puVar18 = *puVar18 << ((uint)((uVar9 & 0xffffffff) << 2) & 0x3c);
          uVar9 = *param_4 - uVar9;
          *param_4 = (uint)uVar9;
        }
        iVar17 = (int)lVar20;
        if ((iVar17 < 7) || (*puVar18 != 0)) goto LAB_005cb324;
        uVar10 = lVar20 - 7;
        uVar6 = (uVar10 & 0xffffffff) * 0x24924925 >> 0x20;
        lVar16 = ((uVar6 + ((uVar10 - uVar6 << 0x20) >> 0x21) << 0x20) >> 0x22) + 1;
        if ((int)uVar10 < 0) {
          lVar16 = 1;
        }
        goto LAB_005cb30c;
      }
      param_2 = param_2 + 1;
      bVar7 = true;
      if (iVar17 <= iVar21) break;
      uVar9 = (longlong)(iVar22 / 7 + (iVar22 >> 0x1f)) - (longlong)(iVar21 >> 0x1f);
      lVar20 = lVar20 + 1;
      if (iVar22 == (int)((uVar9 & 0xffffffff) << 3) - (int)uVar9) {
        puVar18 = puVar18 + 1;
        *puVar18 = 0;
      }
      *puVar18 = *puVar18 * 0x10 + (int)(char)puVar8[iVar11 + 0x18];
      *param_4 = *param_4 - 1;
      iVar12 = FUN_005c5984(puVar8,*param_2,0x16);
      iVar11 = iVar12 - (int)puVar8;
      iVar21 = (int)lVar20;
    }
  } while( true );
  while (*puVar18 == 0) {
LAB_005cb30c:
    puVar18 = puVar18 + -1;
    uVar9 = uVar9 + 7;
    *param_4 = (uint)uVar9;
    lVar20 = lVar20 + -7;
    iVar17 = (int)lVar20;
    lVar16 = lVar16 + -1;
    if (lVar16 == 0) break;
  }
LAB_005cb324:
  uVar14 = (uint)((uVar9 & 0xffffffff) << 2);
  *param_4 = uVar14;
  pbVar19 = param_2;
  if ((bVar7) && ((*param_2 == 0x70 || (*param_2 == 0x50)))) {
    pbVar19 = param_2 + 1;
    bVar13 = *pbVar19;
    if ((bVar13 == 0x2b) || (bVar13 == 0x2d)) {
      pbVar19 = param_2 + 2;
    }
    else {
      bVar13 = 0x2b;
    }
    bVar7 = false;
    bVar4 = *pbVar19;
    iVar12 = 0;
    iVar11 = *(int *)PTR_PTR_0071c2e4;
    iVar21 = 0;
    if ((*(ushort *)((uint)bVar4 * 2 + iVar11) & 0x20) != 0) {
      do {
        uVar15 = (uint)bVar4;
        pbVar19 = pbVar19 + 1;
        bVar4 = *pbVar19;
        iVar12 = iVar21 * 10 + uVar15 + -0x30;
        uVar5 = *(ushort *)((uint)bVar4 * 2 + iVar11);
        while( true ) {
          if ((uVar5 & 0x20) == 0) {
            bVar7 = true;
            goto LAB_005cb4b4;
          }
          iVar21 = iVar12;
          if (iVar12 < 100000000) break;
          pbVar19 = pbVar19 + 1;
          bVar4 = *pbVar19;
          uVar5 = *(ushort *)((uint)bVar4 * 2 + iVar11);
        }
      } while( true );
    }
LAB_005cb4b4:
    if (bVar13 == 0x2d) {
      iVar12 = -iVar12;
    }
    *param_4 = iVar12 + uVar14;
    param_1 = param_2;
  }
  if (param_3 != (undefined4 *)0x0) {
    if (!bVar7) {
      pbVar19 = param_1;
    }
    *param_3 = pbVar19;
  }
  return iVar17 / 7;
}



//==== 005cb4fc  ns=fios  size=0x674
// sig: undefined strerror(void)
// callers(1): 005c84e4 fios::strerror_wrapper
// callees(1): 005cc8d8 libc::strcpy
// strings: 0067ec60: 'error 0xxxxxxxxx' | 0067eaf8: 'no locks available' | 0067ea78: 'filename too long' | 0067e850: 'no error' | 0067eb88: 'not supported' | 0067eb70: 'directory not empty' | 0067ebb8: 'no such device or address' | 0067eb60: 'not a directory' | 0067e9b8: 'operation in progress' | 0067e8d0: 'bad message' | 0067e840: 'improper link' | 0067ea58: 'bad message buffer length' | 0067e878: 'permission denied' | 0067e860: 'argument list too long' | 0067ea30: 'too many open files' | 0067ea08: 'input/output error' | 0067e8b8: 'bad file descriptor' | 0067eb28: 'no space left on device' | 0067ea90: 'too many files open in system' | 0067ec10: 'read-only file system' | 0067ebf0: 'broken pipe' | 0067eb98: 'bad I/O control operation' | 0067ec28: 'invalid seek' | 0067e908: 'no child processes' | 0067e960: 'bad address' | 0067e950: 'file exists' | 0067e8f0: 'operation canceled' | 0067ea20: 'is a directory' | 0067e998: 'multibyte encoding error' | 0067ec00: 'range error'

char * fios::strerror(ulonglong param_1,char *param_2)

{
  byte bVar1;
  char cVar2;
  uint uVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  char cVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  char cVar11;
  int in_r13;
  char *pcVar12;
  char *pcVar13;
  char *pcVar14;
  char *pcVar15;
  char *pcVar16;
  char *pcVar17;
  char *pcVar18;
  char *pcVar19;
  
  uVar3 = (uint)param_1;
  if (uVar3 == 0x80010021) {
    return PTR_s_too_many_links_0071c344;
  }
  if ((int)uVar3 < -0x7ffeffde) {
    if (uVar3 == 0x8001000b) {
      return PTR_s_operation_timed_out_0071c39c;
    }
    if ((int)uVar3 < -0x7ffefff4) {
      pcVar12 = PTR_s_no_such_process_0071c398;
      if (uVar3 != 0x80010005) {
        if ((int)uVar3 < -0x7ffefffa) {
          pcVar12 = PTR_s_invalid_argument_0071c334;
          if (uVar3 != 0x80010002) {
            if ((int)uVar3 < -0x7ffefffd) {
              pcVar12 = PTR_s_resource_temporarily_unavailable_0071c2f8;
              if (uVar3 != 0x80010001) goto LAB_005cb5f8;
            }
            else {
              pcVar12 = PTR_s_function_not_implemented_0071c36c;
              if ((uVar3 != 0x80010003) &&
                 (pcVar12 = PTR_s_not_enough_space_0071c364, uVar3 != 0x80010004))
              goto LAB_005cb5f8;
            }
          }
        }
        else {
          pcVar12 = PTR_s_resource_deadlock_avoided_0071c310;
          if (uVar3 != 0x80010008) {
            if ((int)uVar3 < -0x7ffefff7) {
              pcVar12 = PTR_s_no_such_file_or_directory_0071c358;
              if ((uVar3 != 0x80010006) &&
                 (pcVar12 = PTR_s_exec_format_error_0071c35c, uVar3 != 0x80010007))
              goto LAB_005cb5f8;
            }
            else {
              pcVar12 = PTR_s_operation_not_permitted_0071c384;
              if ((uVar3 != 0x80010009) &&
                 (pcVar12 = PTR_s_resource_busy_0071c304, uVar3 != 0x8001000a)) goto LAB_005cb5f8;
            }
          }
        }
      }
    }
    else {
      pcVar12 = PTR_s_domain_error_0071c314;
      if (uVar3 != 0x8001001b) {
        if ((int)uVar3 < -0x7ffeffe4) {
          pcVar12 = PTR_s_is_a_directory_0071c33c;
          if (uVar3 != 0x80010012) {
            if ((int)uVar3 < -0x7ffeffed) {
              pcVar12 = PTR_s_bad_address_0071c31c;
              if ((uVar3 != 0x8001000d) &&
                 (pcVar12 = PTR_s_no_child_processes_0071c30c, uVar3 != 0x8001000e))
              goto LAB_005cb5f8;
            }
            else {
              pcVar12 = PTR_s_operation_canceled_0071c308;
              if ((uVar3 != 0x80010013) &&
                 (pcVar12 = PTR_s_file_exists_0071c318, uVar3 != 0x80010014)) goto LAB_005cb5f8;
            }
          }
        }
        else {
          pcVar12 = PTR_s_file_positioning_error_0071c324;
          if (uVar3 != 0x8001001e) {
            if ((int)uVar3 < -0x7ffeffe1) {
              pcVar12 = PTR_s_range_error_0071c38c;
              if ((uVar3 != 0x8001001c) &&
                 (pcVar12 = PTR_s_multibyte_encoding_error_0071c328, uVar3 != 0x8001001d))
              goto LAB_005cb5f8;
            }
            else {
              pcVar12 = PTR_s_interrupted_function_call_0071c330;
              if ((uVar3 != 0x8001001f) &&
                 (pcVar12 = PTR_s_file_too_large_0071c320, uVar3 != 0x80010020)) goto LAB_005cb5f8;
            }
          }
        }
      }
    }
  }
  else {
    if (uVar3 == 0x8001002d) {
      return PTR_s_no_such_device_0071c354;
    }
    if ((int)uVar3 < -0x7ffeffd2) {
      pcVar12 = PTR_s_invalid_seek_0071c394;
      if (uVar3 != 0x80010027) {
        if ((int)uVar3 < -0x7ffeffd8) {
          pcVar12 = PTR_s_bad_I_O_control_operation_0071c37c;
          if (uVar3 != 0x80010024) {
            if ((int)uVar3 < -0x7ffeffdb) {
              pcVar12 = PTR_s_too_many_files_open_in_system_0071c350;
              if ((uVar3 != 0x80010022) &&
                 (pcVar12 = PTR_s_no_space_left_on_device_0071c368, uVar3 != 0x80010023))
              goto LAB_005cb5f8;
            }
            else {
              pcVar12 = PTR_s_broken_pipe_0071c388;
              if ((uVar3 != 0x80010025) &&
                 (pcVar12 = PTR_s_read_only_file_system_0071c390, uVar3 != 0x80010026))
              goto LAB_005cb5f8;
            }
          }
        }
        else {
          pcVar12 = PTR_s_bad_file_descriptor_0071c2fc;
          if (uVar3 != 0x8001002a) {
            if ((int)uVar3 < -0x7ffeffd5) {
              pcVar12 = PTR_s_argument_list_too_long_0071c2f0;
              if ((uVar3 != 0x80010028) &&
                 (pcVar12 = PTR_s_permission_denied_0071c2f4, uVar3 != 0x80010029))
              goto LAB_005cb5f8;
            }
            else {
              pcVar12 = PTR_s_input_output_error_0071c338;
              if ((uVar3 != 0x8001002b) &&
                 (pcVar12 = PTR_s_too_many_open_files_0071c340, uVar3 != 0x8001002c))
              goto LAB_005cb5f8;
            }
          }
        }
      }
    }
    else {
      pcVar12 = PTR_s_bad_message_buffer_length_0071c348;
      if (uVar3 != 0x80010033) {
        if ((int)uVar3 < -0x7ffeffcc) {
          pcVar12 = PTR_s_improper_link_0071c2e8;
          if (uVar3 != 0x80010030) {
            if ((int)uVar3 < -0x7ffeffcf) {
              pcVar12 = PTR_s_not_a_directory_0071c370;
              if ((uVar3 != 0x8001002e) &&
                 (pcVar12 = PTR_s_no_such_device_or_address_0071c380, uVar3 != 0x8001002f))
              goto LAB_005cb5f8;
            }
            else {
              pcVar12 = PTR_s_bad_message_0071c300;
              if ((uVar3 != 0x80010031) &&
                 (pcVar12 = PTR_s_operation_in_progress_0071c32c, uVar3 != 0x80010032))
              goto LAB_005cb5f8;
            }
          }
        }
        else {
          pcVar12 = PTR_s_directory_not_empty_0071c374;
          if (uVar3 != 0x80010036) {
            if ((int)uVar3 < -0x7ffeffc9) {
              pcVar12 = PTR_s_filename_too_long_0071c34c;
              if ((uVar3 != 0x80010034) &&
                 (pcVar12 = PTR_s_no_locks_available_0071c360, uVar3 != 0x80010035)) {
LAB_005cb5f8:
                if (param_2 == (char *)0x0) {
                  param_2 = (char *)(in_r13 + -0x6f70);
                  pcVar12 = (char *)(in_r13 + -0x6f61);
                  pcVar19 = (char *)(in_r13 + -0x6f68);
                  pcVar18 = (char *)(in_r13 + -0x6f67);
                  pcVar17 = (char *)(in_r13 + -0x6f66);
                  pcVar16 = (char *)(in_r13 + -0x6f65);
                  pcVar15 = (char *)(in_r13 + -0x6f64);
                  pcVar14 = (char *)(in_r13 + -0x6f63);
                  pcVar13 = (char *)(in_r13 + -0x6f62);
                }
                else {
                  pcVar19 = param_2 + 8;
                  pcVar18 = param_2 + 9;
                  pcVar17 = param_2 + 10;
                  pcVar16 = param_2 + 0xb;
                  pcVar15 = param_2 + 0xc;
                  pcVar14 = param_2 + 0xd;
                  pcVar13 = param_2 + 0xe;
                  pcVar12 = param_2 + 0xf;
                }
                libc::strcpy(param_2,PTR_s_error_0xxxxxxxxx_0071c3a0);
                uVar10 = param_1 >> 0x18 & 0xf;
                uVar9 = param_1 >> 0x14 & 0xf;
                uVar7 = param_1 >> 0x10 & 0xf;
                uVar6 = param_1 >> 0xc & 0xf;
                uVar5 = param_1 >> 8 & 0xf;
                uVar4 = param_1 >> 4 & 0xf;
                bVar1 = (byte)(param_1 >> 0x18) >> 4;
                cVar2 = bVar1 + 0x57;
                if (uVar3 >> 0x1c < 10) {
                  cVar2 = bVar1 + 0x30;
                }
                cVar11 = (char)uVar10;
                cVar8 = cVar11 + 'W';
                *pcVar19 = cVar2;
                if ((uint)uVar10 < 10) {
                  cVar8 = cVar11 + '0';
                }
                cVar2 = (char)uVar9;
                cVar11 = cVar2 + 'W';
                *pcVar18 = cVar8;
                if ((uint)uVar9 < 10) {
                  cVar11 = cVar2 + '0';
                }
                cVar2 = (char)uVar7;
                cVar8 = cVar2 + 'W';
                *pcVar17 = cVar11;
                if ((uint)uVar7 < 10) {
                  cVar8 = cVar2 + '0';
                }
                cVar2 = (char)uVar6;
                cVar11 = cVar2 + 'W';
                *pcVar16 = cVar8;
                if ((uint)uVar6 < 10) {
                  cVar11 = cVar2 + '0';
                }
                cVar2 = (char)uVar5;
                cVar8 = cVar2 + 'W';
                *pcVar15 = cVar11;
                if ((uint)uVar5 < 10) {
                  cVar8 = cVar2 + '0';
                }
                cVar2 = (char)uVar4;
                cVar11 = cVar2 + 'W';
                *pcVar14 = cVar8;
                if ((uint)uVar4 < 10) {
                  cVar11 = cVar2 + '0';
                }
                cVar2 = (char)(param_1 & 0xf);
                cVar8 = cVar2 + 'W';
                *pcVar13 = cVar11;
                if ((uint)(param_1 & 0xf) < 10) {
                  cVar8 = cVar2 + '0';
                }
                *pcVar12 = cVar8;
                return param_2;
              }
            }
            else {
              pcVar12 = PTR_s_not_supported_0071c378;
              if ((uVar3 != 0x80010037) && (pcVar12 = PTR_s_no_error_0071c2ec, uVar3 != 0))
              goto LAB_005cb5f8;
            }
          }
        }
      }
    }
  }
  return pcVar12;
}



//==== 005cbb70  ns=Global  size=0x4c
// sig: undefined FUN_005cbb70(void)
// callers(10): 005c49c8 FUN_005c49c8; 005c4c20 FUN_005c4c20; 005c4f10 FUN_005c4f10; 005c50cc FUN_005c50cc; 005c52f0 FUN_005c52f0; 005d0010 FUN_005d0010; 005d0070 FUN_005d0070; 005e3ce0 FUN_005e3ce0; 005e6a10 FUN_005e6a10; 005e6a68 FUN_005e6a68
// callees(1): 005d0370 FUN_005d0370

void FUN_005cbb70(int param_1)

{
  if (param_1 < *(int *)PTR_DAT_0071c3a4) {
    FUN_005d0370(PTR_DAT_0071c3a4 + param_1 * 0x28 + 8);
  }
  return;
}



//==== 005cbbbc  ns=Global  size=0x30
// sig: undefined FUN_005cbbbc(void)
// callers(12): 005c50cc FUN_005c50cc; 005c5364 FUN_005c5364; 005c5568 FUN_005c5568; 005c55dc FUN_005c55dc; 005c5638 FUN_005c5638; 005c756c FUN_005c756c; 005ccf90 FUN_005ccf90; 005cd098 libc::printf; 005cd360 FUN_005cd360; 005cd444 FUN_005cd444; 005d5914 FUN_005d5914; 005d5a08 FUN_005d5a08
// callees(1): 005d0370 FUN_005d0370

void FUN_005cbbbc(int param_1)

{
  if (param_1 != 0) {
    FUN_005d0370(*(undefined4 *)(param_1 + 0x44));
  }
  return;
}



//==== 005cbbec  ns=Global  size=0x4c
// sig: undefined FUN_005cbbec(void)
// callers(10): 005c49c8 FUN_005c49c8; 005c4c20 FUN_005c4c20; 005c4f10 FUN_005c4f10; 005c50cc FUN_005c50cc; 005c52f0 FUN_005c52f0; 005d0010 FUN_005d0010; 005d0070 FUN_005d0070; 005e3ce0 FUN_005e3ce0; 005e6a10 FUN_005e6a10; 005e6a68 FUN_005e6a68
// callees(1): 005d03b4 FUN_005d03b4

void FUN_005cbbec(int param_1)

{
  if (param_1 < *(int *)PTR_DAT_0071c3a4) {
    FUN_005d03b4(PTR_DAT_0071c3a4 + param_1 * 0x28 + 8);
  }
  return;
}



//==== 005cbc38  ns=Global  size=0x30
// sig: undefined FUN_005cbc38(void)
// callers(12): 005c50cc FUN_005c50cc; 005c5364 FUN_005c5364; 005c5568 FUN_005c5568; 005c55dc FUN_005c55dc; 005c5638 FUN_005c5638; 005c756c FUN_005c756c; 005ccf90 FUN_005ccf90; 005cd098 libc::printf; 005cd360 FUN_005cd360; 005cd444 FUN_005cd444; 005d5914 FUN_005d5914; 005d5a08 FUN_005d5a08
// callees(1): 005d03b4 FUN_005d03b4

void FUN_005cbc38(int param_1)

{
  if (param_1 != 0) {
    FUN_005d03b4(*(undefined4 *)(param_1 + 0x44));
  }
  return;
}



//==== 005cbc68  ns=Global  size=0xf8
// sig: undefined FUN_005cbc68(void)
// callers(1): 00014c7c boot::entry
// callees(1): 005d04b0 FUN_005d04b0

void FUN_005cbc68(void)

{
  short sVar1;
  short sVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  
  puVar3 = PTR_DAT_0071c3a4;
  puVar6 = PTR_DAT_0071c3a4 + 0xd0;
  puVar7 = PTR_DAT_0071c3a4 + 0x148;
  puVar9 = puVar6;
  do {
    puVar8 = puVar9 + 0x28;
    FUN_005d04b0(puVar9);
    puVar5 = PTR_DAT_0071c3b0;
    puVar4 = PTR_DAT_0071c3ac;
    puVar9 = puVar8;
  } while (puVar7 != puVar8);
  sVar1 = *(short *)(PTR_DAT_0071c3b0 + 4);
  sVar2 = *(short *)(PTR_DAT_0071c3ac + 4);
  *(undefined **)(PTR_DAT_0071c3a8 + 0x44) = puVar6 + *(short *)(PTR_DAT_0071c3a8 + 4) * 0x28;
  *(undefined **)(puVar4 + 0x44) = puVar6 + sVar2 * 0x28;
  *(undefined **)(puVar5 + 0x44) = puVar6 + sVar1 * 0x28;
  *(undefined4 *)(puVar3 + 0x148) = 0x100;
  puVar9 = puVar3 + 8;
  do {
    puVar6 = puVar9 + 0x28;
    FUN_005d04b0(puVar9);
    puVar9 = puVar6;
  } while (puVar3 + 0xd0 != puVar6);
  *(undefined4 *)puVar3 = 5;
  return;
}



//==== 005cbd60  ns=Global  size=0x5c
// sig: undefined FUN_005cbd60(void)
// callers(1): 00014bc0 crt0::_libc_cleanup
// callees(1): 005d045c FUN_005d045c

void FUN_005cbd60(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  
  puVar3 = PTR_DAT_0071c3a4;
  puVar2 = PTR_DAT_0071c3a4 + 8;
  puVar1 = PTR_DAT_0071c3a4 + 0xd0;
  *(undefined4 *)PTR_DAT_0071c3a4 = 0;
  *(undefined4 *)(puVar3 + 0x148) = 0;
  do {
    puVar3 = puVar2 + 0x28;
    FUN_005d045c(puVar2);
    puVar2 = puVar3;
  } while (puVar3 != puVar1);
  return;
}



//==== 005cbdbc  ns=Global  size=0x90
// sig: undefined FUN_005cbdbc(void)
// callers(2): 005c7368 FUN_005c7368; 005cbe4c FUN_005cbe4c
// callees(0): 

int FUN_005cbdbc(uint param_1,int param_2)

{
  uint uVar1;
  int iVar2;
  
  uVar1 = param_1 - 1;
  iVar2 = ((int)uVar1 >> 2) + (uint)((int)uVar1 < 0 && (uVar1 & 3) != 0);
  if ((int)param_1 < 1) {
    iVar2 = 0;
    if ((int)param_1 < -3) {
      iVar2 = ((int)(4 - param_1) >> 2) + 1;
    }
  }
  if (((param_1 & 3) == 0) && (param_1 != 0)) {
    return iVar2 + *(short *)(PTR_DAT_0071c3b4 + param_2 * 2);
  }
  return iVar2 + *(short *)(PTR_DAT_0071c3b4 + param_2 * 2 + 0x18);
}



//==== 005cbe4c  ns=Global  size=0x25c
// sig: undefined FUN_005cbe4c(void)
// callers(3): 005c58b0 FUN_005c58b0; 005c5900 FUN_005c5900; 005c7368 FUN_005c7368
// callees(1): 005cbdbc FUN_005cbdbc

int * FUN_005cbe4c(int *param_1,longlong param_2,int param_3)

{
  short sVar1;
  int iVar2;
  ulonglong uVar3;
  undefined *puVar4;
  int iVar6;
  longlong lVar5;
  short *psVar7;
  int in_r13;
  int iVar8;
  uint uVar9;
  int local_3c;
  
  param_2 = param_2 + 0x83aa7e80;
  if (param_1 == (int *)0x0) {
    param_1 = (int *)(in_r13 + -0x6f58);
  }
  param_1[8] = param_3;
  if (param_3 != 0) {
    syscall();
    param_2 = param_2 + local_3c * 0x3c;
  }
  iVar2 = (int)(param_2 / 0x15180);
  iVar6 = iVar2 + 1;
  uVar3 = (longlong)(iVar6 / 7 + (iVar6 >> 0x1f)) - (longlong)(iVar6 >> 0x1f);
  uVar9 = iVar2 / 0x16d;
  iVar8 = uVar9 * 0x16d;
  param_1[6] = iVar6 - ((int)((uVar3 & 0xffffffff) << 3) - (int)uVar3);
  while( true ) {
    iVar6 = FUN_005cbdbc(uVar9,0);
    iVar6 = iVar6 + iVar8;
    iVar8 = iVar8 + -0x16d;
    if (iVar6 <= iVar2) break;
    uVar9 = uVar9 - 1;
  }
  iVar2 = iVar2 - iVar6;
  param_1[5] = uVar9;
  param_1[7] = iVar2;
  if (((uVar9 & 3) != 0) || (puVar4 = PTR_DAT_0071c3b4, uVar9 == 0)) {
    puVar4 = PTR_DAT_0071c3b4 + 0x18;
  }
  iVar6 = 0xc;
  psVar7 = (short *)(puVar4 + 0x16);
  do {
    iVar6 = iVar6 + -1;
    sVar1 = *psVar7;
    psVar7 = psVar7 + -1;
  } while (iVar2 < sVar1);
  param_1[3] = (iVar2 - sVar1) + 1;
  param_1[4] = iVar6;
  param_1[2] = (int)((param_2 % 0x15180) / 0xe10);
  lVar5 = (param_2 % 0x15180) % 0xe10;
  iVar2 = (int)(lVar5 / 0x3c);
  param_1[1] = iVar2;
  *param_1 = (int)lVar5 + iVar2 * -0x3c;
  return param_1;
}



//==== 005cc0a8  ns=libc  size=0x30
// sig: undefined memcpy4(void)
// callers(2): 005c9b38 FUN_005c9b38; 005cd5c4 libc::vsnprintf
// callees(1): 005c5ad0 libc::memcpy

void * libc::memcpy4(void *param_1,undefined4 param_2)

{
  void *pvVar1;
  undefined4 uStack00000038;
  
  uStack00000038 = param_2;
  pvVar1 = memcpy(param_1,&stack0x00000038,4);
  return pvVar1;
}



//==== 005cc0d8  ns=Global  size=0x64
// sig: undefined FUN_005cc0d8(void)
// callers(1): 005c9b38 FUN_005c9b38
// callees(1): 005cc418 FUN_005cc418

uint FUN_005cc0d8(uint param_1)

{
  int iVar1;
  byte local_10 [4];
  undefined1 local_c [12];
  
  if ((param_1 != 0xffffffff) &&
     (iVar1 = FUN_005cc418(local_10,param_1 & 0xffff,local_c), iVar1 == 1)) {
    return (uint)local_10[0];
  }
  return 0xffffffff;
}



//==== 005cc13c  ns=Global  size=0x2dc
// sig: undefined FUN_005cc13c(void)
// callers(1): 005cc418 FUN_005cc418
// callees(1): 005d5904 FUN_005d5904

uint FUN_005cc13c(byte *param_1,ulonglong param_2,undefined4 *param_3,undefined4 *param_4,
                 int param_5)

{
  ushort uVar1;
  undefined2 uVar2;
  ushort *puVar3;
  undefined4 uVar4;
  int iVar5;
  bool bVar6;
  undefined4 *puVar7;
  uint uVar8;
  byte bVar10;
  longlong lVar9;
  char cVar13;
  byte *pbVar12;
  longlong lVar11;
  ulonglong uVar14;
  int iVar15;
  
  puVar3 = (ushort *)*param_4;
  if (puVar3 == (ushort *)0x0) {
    if (param_1 == (byte *)0x0) {
      uVar4 = *(undefined4 *)PTR_DAT_0071c3b8;
      uVar2 = *(undefined2 *)(PTR_DAT_0071c3b8 + 4);
      *(undefined2 *)((int)param_3 + 6) = *(undefined2 *)(PTR_DAT_0071c3b8 + 6);
      *param_3 = uVar4;
      *(undefined2 *)(param_3 + 1) = uVar2;
      return 0;
    }
    uVar14 = param_2 & 0xffff;
    if ((param_2 & 0xff80) == 0) {
      *param_1 = (byte)param_2;
      uVar8 = 1;
    }
    else {
      if ((param_2 & 0xf800) == 0) {
        lVar9 = 1;
        *param_1 = (byte)((uVar14 << 0x20) >> 0x26) | 0xc0;
      }
      else {
        lVar9 = 2;
        *param_1 = (byte)((uVar14 << 0x20) >> 0x2c) | 0xe0;
      }
      pbVar12 = param_1 + 1;
      lVar11 = lVar9 * 6 + -6;
      if ((int)lVar9 + -1 < 0) {
        lVar9 = 1;
      }
      do {
        uVar8 = (uint)lVar11;
        lVar11 = lVar11 + -6;
        *pbVar12 = (byte)((int)uVar14 >> (uVar8 & 0x3f)) & 0x3f | 0x80;
        pbVar12 = pbVar12 + 1;
        lVar9 = lVar9 + -1;
      } while (lVar9 != 0);
      uVar8 = (int)pbVar12 - (int)param_1;
    }
    return uVar8;
  }
  if (param_1 == (byte *)0x0) {
    uVar4 = *(undefined4 *)PTR_DAT_0071c3b8;
    uVar2 = *(undefined2 *)(PTR_DAT_0071c3b8 + 4);
    *(undefined2 *)((int)param_3 + 6) = *(undefined2 *)(PTR_DAT_0071c3b8 + 6);
    *param_3 = uVar4;
    *(undefined2 *)(param_3 + 1) = uVar2;
    return *puVar3 & 0xf00;
  }
  cVar13 = (char)*(undefined2 *)((int)param_3 + 6);
  if ((cVar13 < '\x10') &&
     (iVar5 = *(int *)(param_5 + (int)(((longlong)cVar13 & 0xffffffffU) << 2)), iVar5 != 0)) {
    bVar6 = false;
    uVar8 = 0;
    iVar15 = 1;
    uVar1 = *(ushort *)(((uint)((param_2 & 0xffffffff) << 1) & 0x1fe) + iVar5);
    while (uVar1 != 0) {
      bVar10 = (byte)(uVar1 >> 8) & 0xf;
      if ((short)uVar1 < 0) {
        param_2 = param_2 & 0xffffff00 | (ulonglong)uVar1 & 0xff;
      }
      if ((uVar1 & 0x1000) != 0) {
        param_2 = (param_2 & 0xffff) << 8 | ((param_2 & 0xffff) << 0x20) >> 0x28;
      }
      if ((uVar1 & 0x2000) != 0) {
        uVar14 = (ulonglong)uVar1;
        if ((uVar1 & 0xff) == 0) {
          uVar14 = param_2;
        }
        pbVar12 = param_1 + uVar8;
        uVar8 = uVar8 + 1;
        iVar15 = 0;
        *pbVar12 = (byte)uVar14;
        if ((byte)uVar14 == 0) {
          bVar6 = true;
        }
      }
      if ((uVar1 & 0x4000) != 0 || bVar6) {
        *(short *)((int)param_3 + 6) = (short)(char)bVar10;
        return uVar8;
      }
      if ((((0xf < bVar10) ||
           (iVar5 = *(int *)(param_5 + (int)((longlong)(char)bVar10 << 2)), iVar5 == 0)) ||
          (2 < (int)uVar8)) || (iVar15 = iVar15 + 1, 0xfef < iVar15)) break;
      uVar1 = *(ushort *)(((uint)((param_2 & 0xffffffff) << 1) & 0x1fe) + iVar5);
    }
  }
  puVar7 = (undefined4 *)FUN_005d5904();
  *puVar7 = 0x8001001d;
  return 0xffffffff;
}



//==== 005cc418  ns=Global  size=0x34
// sig: undefined FUN_005cc418(void)
// callers(2): 005cc0d8 FUN_005cc0d8; 005d9b44 FUN_005d9b44
// callees(1): 005cc13c FUN_005cc13c

void FUN_005cc418(int param_1,undefined2 param_2,undefined4 param_3)

{
  ulonglong uVar1;
  longlong in_r13;
  
  uVar1 = 0;
  if (param_1 != 0) {
    uVar1 = in_r13 - 0x6ecc;
  }
  FUN_005cc13c(param_1,param_2,param_3,in_r13 + -0x6f0c,uVar1 & 0xffffffff);
  return;
}



//==== 005cc44c  ns=Global  size=0x12c
// sig: undefined FUN_005cc44c(void)
// callers(7): 004ee958 FUN_004ee958; 004eebfc FUN_004eebfc; 004eef00 FUN_004eef00; 004ef4d0 FUN_004ef4d0; 00505114 FUN_00505114; 005051d8 FUN_005051d8; 00647594 FUN_00647594
// callees(0): 

ulonglong FUN_005cc44c(ulonglong param_1,char *param_2)

{
  char cVar1;
  ulonglong uVar2;
  longlong lVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  
  uVar2 = param_1 & 0xffffffff;
  uVar4 = param_1 & 0xfffffff8;
  if ((param_1 & 7) != 0) {
    uVar5 = *(ulonglong *)uVar4 | -1L << ((8 - (param_1 & 7)) * 8 & 0x78);
    uVar5 = ~((uVar5 & 0x7f7f7f7f7f7f7f7f) + 0x7f7f7f7f7f7f7f7f | uVar5 | 0x7f7f7f7f7f7f7f7f);
    if (uVar5 != 0) {
      cVar1 = *param_2;
      lVar3 = uVar4 + ((ulonglong)LZCOUNT(uVar5) >> 3);
      *(char *)lVar3 = cVar1;
      while (cVar1 != '\0') {
        lVar3 = lVar3 + 1;
        param_2 = param_2 + 1;
        cVar1 = *param_2;
        *(char *)lVar3 = cVar1;
      }
      return uVar2;
    }
    uVar4 = uVar4 + 8;
  }
  while (uVar5 = ~((*(ulonglong *)uVar4 & 0x7f7f7f7f7f7f7f7f) + 0x7f7f7f7f7f7f7f7f |
                  *(ulonglong *)uVar4 | 0x7f7f7f7f7f7f7f7f), uVar5 == 0) {
    uVar4 = uVar4 + 8;
  }
  cVar1 = *param_2;
  lVar3 = uVar4 + ((ulonglong)LZCOUNT(uVar5) >> 3);
  *(char *)lVar3 = cVar1;
  if (cVar1 == '\0') {
    return uVar2;
  }
  do {
    lVar3 = lVar3 + 1;
    param_2 = param_2 + 1;
    cVar1 = *param_2;
    *(char *)lVar3 = cVar1;
  } while (cVar1 != '\0');
  return uVar2;
}



//==== 005cc578  ns=libc  size=0x20c
// sig: char * strchr(char * __s, int __c)
// callers(10): 00146b14 pause::GoldBoltWidget_Update; 00510f38 FUN_00510f38; 0051a670 FUN_0051a670; 0053299c FUN_0053299c; 005c8700 FUN_005c8700; 005c9b38 FUN_005c9b38; 005cd5c4 libc::vsnprintf; 005d7d48 FUN_005d7d48; 005d853c FUN_005d853c; 005dc734 FUN_005dc734
// callees(0): 

char * libc::strchr(char *__s,int __c)

{
  char cVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  
  if (((uint)__s & 7) == 0) {
    uVar6 = *(ulonglong *)__s;
    if (((uVar6 & 0x7f7f7f7f7f7f7f7f) + 0x7f7f7f7f7f7f7f7f | uVar6 | 0x7f7f7f7f7f7f7f7f) ==
        0xffffffffffffffff) {
      uVar5 = (longlong)__c & 0xffU | ((longlong)__c & 0xffU) << 8;
      uVar5 = uVar5 | uVar5 << 0x10;
      uVar5 = uVar5 | uVar5 << 0x20;
      uVar6 = uVar5 ^ uVar6;
      uVar6 = (uVar6 & 0x7f7f7f7f7f7f7f7f) + 0x7f7f7f7f7f7f7f7f | uVar6 | 0x7f7f7f7f7f7f7f7f;
      do {
        if (~uVar6 != 0) {
          return (char *)((int)__s + (int)((ulonglong)LZCOUNT(~uVar6) >> 3));
        }
        __s = (char *)((int)__s + 8);
        uVar7 = *(ulonglong *)__s;
        uVar6 = uVar5 ^ uVar7;
        uVar6 = (uVar6 & 0x7f7f7f7f7f7f7f7f) + 0x7f7f7f7f7f7f7f7f | uVar6 | 0x7f7f7f7f7f7f7f7f;
      } while (((uVar7 & 0x7f7f7f7f7f7f7f7f) + 0x7f7f7f7f7f7f7f7f | uVar7 | 0x7f7f7f7f7f7f7f7f) ==
               0xffffffffffffffff);
    }
  }
  else if ((((uint)__s & 3) == 0) &&
          (uVar2 = *(uint *)__s,
          (uVar2 | 0x7f7f7f7f | (uVar2 & 0x7f7f7f7f) + 0x7f7f7f7f) == 0xffffffff)) {
    uVar6 = (ulonglong)(uint)__c & 0xff | ((ulonglong)(uint)__c & 0xff) << 8;
    uVar4 = (uint)uVar6 | (uint)(uVar6 << 0x10);
    uVar2 = uVar4 ^ uVar2;
    uVar2 = (uVar2 & 0x7f7f7f7f) + 0x7f7f7f7f | uVar2 | 0x7f7f7f7f;
    do {
      if (~uVar2 != 0) {
        return (char *)(((uint)LZCOUNT(~uVar2) >> 3) + (int)__s);
      }
      __s = (char *)((int)__s + 4);
      uVar3 = *(uint *)__s;
      uVar2 = uVar4 ^ uVar3;
      uVar2 = (uVar2 & 0x7f7f7f7f) + 0x7f7f7f7f | uVar2 | 0x7f7f7f7f;
    } while (((uVar3 & 0x7f7f7f7f) + 0x7f7f7f7f | uVar3 | 0x7f7f7f7f) == 0xffffffff);
  }
  cVar1 = *__s;
  if ((char)__c == cVar1) {
    return (char *)(ulonglong *)__s;
  }
  do {
    if (cVar1 == '\0') {
      return (char *)0x0;
    }
    __s = (char *)((int)__s + 1);
    cVar1 = *__s;
  } while ((char)__c != cVar1);
  return (char *)(ulonglong *)__s;
}



//==== 005cc784  ns=Global  size=0x154
// sig: undefined FUN_005cc784(void)
// callers(27): 004de9c4 FUN_004de9c4; 004e1b80 FUN_004e1b80; 004e92dc idol::SaveDataListCallback; 004e9848 idol::SaveDataStatusListCallback; 004ea320 idol::cb_data_status_load; 00504988 FUN_00504988; 0050f93c FUN_0050f93c; 005123b8 FUN_005123b8; 00512750 FUN_00512750; 005155c4 FUN_005155c4; 00517560 FUN_00517560; 005177d8 FUN_005177d8; 00517d4c FUN_00517d4c; 0051c554 FUN_0051c554; 00528fc8 FUN_00528fc8; 0057980c FUN_0057980c; 005e3e18 FUN_005e3e18; 005e4254 FUN_005e4254; 005e42a4 FUN_005e42a4; 005e4318 FUN_005e4318; 005e46b0 FUN_005e46b0; 005e4cd8 FUN_005e4cd8; 005e4e88 FUN_005e4e88; 005e4f78 FUN_005e4f78; 005e5164 FUN_005e5164
// callees(0): 

undefined4 FUN_005cc784(ulonglong *param_1,ulonglong *param_2)

{
  byte bVar1;
  byte bVar2;
  uint uVar3;
  uint uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  
  if ((((uint)param_1 | (uint)param_2) & 7) == 0) {
    uVar6 = *param_2;
    if (uVar6 == *param_1) {
      uVar6 = (uVar6 & 0x7f7f7f7f7f7f7f7f) + 0x7f7f7f7f7f7f7f7f | uVar6 | 0x7f7f7f7f7f7f7f7f;
      do {
        if (uVar6 != 0xffffffffffffffff) {
          return 0;
        }
        param_2 = param_2 + 1;
        uVar5 = *param_2;
        param_1 = param_1 + 1;
        uVar6 = (uVar5 & 0x7f7f7f7f7f7f7f7f) + 0x7f7f7f7f7f7f7f7f | uVar5 | 0x7f7f7f7f7f7f7f7f;
      } while (uVar5 == *param_1);
    }
  }
  else if (((((uint)param_1 | (uint)param_2) & 3) == 0) &&
          (uVar3 = *(uint *)param_2, uVar3 == *(uint *)param_1)) {
    uVar3 = (uVar3 & 0x7f7f7f7f) + 0x7f7f7f7f | uVar3 | 0x7f7f7f7f;
    do {
      if (uVar3 != 0xffffffff) {
        return 0;
      }
      param_2 = (ulonglong *)((int)param_2 + 4);
      uVar4 = *(uint *)param_2;
      param_1 = (ulonglong *)((int)param_1 + 4);
      uVar3 = (uVar4 & 0x7f7f7f7f) + 0x7f7f7f7f | uVar4 | 0x7f7f7f7f;
    } while (uVar4 == *(uint *)param_1);
  }
  bVar1 = *(byte *)param_1;
  bVar2 = *(byte *)param_2;
  if (bVar1 == bVar2) {
    do {
      if (bVar1 == 0) {
        return 0;
      }
      param_1 = (ulonglong *)((int)param_1 + 1);
      bVar1 = *(byte *)param_1;
      param_2 = (ulonglong *)((int)param_2 + 1);
      bVar2 = *(byte *)param_2;
    } while (bVar1 == bVar2);
  }
  if (bVar2 <= bVar1) {
    return 1;
  }
  return 0xffffffff;
}



//==== 005cc8d8  ns=libc  size=0xec
// sig: char * strcpy(char * __dest, char * __src)
// callers(33): 000784e8 freeze::DrawDialogText; 000ccda0 hud::GetHelpLen; 000e8268 memcard::memcard_ConstructSaveString; 00112a38 mobyutil::MB_ToastMessage; 00112af0 mobyutil::MB_ToastMessageByIndex; 00112c20 mobyutil::MB_UnlockLevel; 00112e18 mobyutil::MB_UnlockItem; 0011b728 mobyutil::MB_UnlockSkillPoint; 00146b14 pause::GoldBoltWidget_Update; 004d31b0 FUN_004d31b0; 004ee958 FUN_004ee958; 004eebfc FUN_004eebfc; 004eedc8 FUN_004eedc8; 004eef00 FUN_004eef00; 004ef3bc FUN_004ef3bc; 004ef4d0 FUN_004ef4d0; 004ef6e4 FUN_004ef6e4; 00503810 FUN_00503810; 005046b0 idol::GameAuthenticate; 00505114 FUN_00505114; 005051d8 FUN_005051d8; 005083fc FUN_005083fc; 005085cc fios::LoadAssetAsync; 0050f6e4 FUN_0050f6e4; 005798e8 FUN_005798e8
// callees(0): 

char * libc::strcpy(char *__dest,char *__src)

{
  char cVar1;
  uint uVar2;
  ulonglong uVar3;
  uint *puVar4;
  ulonglong *puVar5;
  ulonglong uVar6;
  
  puVar5 = (ulonglong *)__dest;
  if ((((uint)__dest | (uint)__src) & 7) == 0) {
    uVar6 = *(ulonglong *)__src;
    uVar3 = (uVar6 & 0x7f7f7f7f7f7f7f7f) + 0x7f7f7f7f7f7f7f7f | uVar6 | 0x7f7f7f7f7f7f7f7f;
    while (uVar3 == 0xffffffffffffffff) {
      *puVar5 = uVar6;
      __src = (char *)((int)__src + 8);
      uVar6 = *(ulonglong *)__src;
      puVar5 = puVar5 + 1;
      uVar3 = (uVar6 & 0x7f7f7f7f7f7f7f7f) + 0x7f7f7f7f7f7f7f7f | uVar6 | 0x7f7f7f7f7f7f7f7f;
    }
  }
  else if ((((uint)__dest | (uint)__src) & 3) == 0) {
    uVar2 = *(uint *)__src;
    puVar4 = (uint *)__dest;
    while (((uVar2 & 0x7f7f7f7f) + 0x7f7f7f7f | uVar2 | 0x7f7f7f7f) == 0xffffffff) {
      *puVar4 = uVar2;
      __src = (char *)((int)__src + 4);
      puVar4 = puVar4 + 1;
      uVar2 = *(uint *)__src;
    }
    cVar1 = *__src;
    __src = (char *)((int)__src + 1);
    *(char *)puVar4 = cVar1;
    puVar5 = (ulonglong *)((int)puVar4 + 1);
    if (cVar1 == '\0') {
      return __dest;
    }
  }
  do {
    cVar1 = *__src;
    __src = (char *)((int)__src + 1);
    *(char *)puVar5 = cVar1;
    puVar5 = (ulonglong *)((int)puVar5 + 1);
  } while (cVar1 != '\0');
  return __dest;
}



//==== 005cc9c4  ns=Global  size=0x164
// sig: undefined FUN_005cc9c4(void)
// callers(2): 0056aa1c FUN_0056aa1c; 0056ab38 FUN_0056ab38
// callees(0): 

ulonglong FUN_005cc9c4(ulonglong param_1,char *param_2,uint param_3)

{
  char cVar1;
  char *pcVar2;
  longlong lVar3;
  ulonglong uVar5;
  ulonglong uVar6;
  undefined1 *puVar4;
  
  uVar6 = param_1 & 0xfffffff8;
  if ((param_1 & 7) != 0) {
    uVar5 = *(ulonglong *)uVar6 | -1L << ((8 - (param_1 & 7)) * 8 & 0x78);
    uVar5 = ~((uVar5 & 0x7f7f7f7f7f7f7f7f) + 0x7f7f7f7f7f7f7f7f | uVar5 | 0x7f7f7f7f7f7f7f7f);
    if (uVar5 != 0) {
      lVar3 = uVar6 + ((ulonglong)LZCOUNT(uVar5) >> 3);
      puVar4 = (undefined1 *)lVar3;
      if ((param_3 != 0) && (cVar1 = *param_2, cVar1 != '\0')) {
        uVar6 = (ulonglong)param_3;
        do {
          pcVar2 = (char *)lVar3;
          lVar3 = lVar3 + 1;
          puVar4 = (undefined1 *)lVar3;
          *pcVar2 = cVar1;
          uVar6 = uVar6 - 1;
          if (uVar6 == 0) break;
          param_2 = param_2 + 1;
          cVar1 = *param_2;
        } while (cVar1 != '\0');
      }
      goto LAB_005cca68;
    }
    uVar6 = uVar6 + 8;
  }
  while (uVar5 = ~((*(ulonglong *)uVar6 & 0x7f7f7f7f7f7f7f7f) + 0x7f7f7f7f7f7f7f7f |
                  *(ulonglong *)uVar6 | 0x7f7f7f7f7f7f7f7f), uVar5 == 0) {
    uVar6 = uVar6 + 8;
  }
  lVar3 = uVar6 + ((ulonglong)LZCOUNT(uVar5) >> 3);
  puVar4 = (undefined1 *)lVar3;
  if ((param_3 != 0) && (cVar1 = *param_2, cVar1 != '\0')) {
    uVar6 = (ulonglong)param_3;
    do {
      pcVar2 = (char *)lVar3;
      lVar3 = lVar3 + 1;
      puVar4 = (undefined1 *)lVar3;
      *pcVar2 = cVar1;
      uVar6 = uVar6 - 1;
      if (uVar6 == 0) {
        *puVar4 = 0;
        return param_1 & 0xffffffff;
      }
      param_2 = param_2 + 1;
      cVar1 = *param_2;
    } while (cVar1 != '\0');
  }
LAB_005cca68:
  *puVar4 = 0;
  return param_1 & 0xffffffff;
}



//==== 005ccb28  ns=Global  size=0x1c4
// sig: undefined FUN_005ccb28(void)
// callers(21): 0011b960 music::music_UppercaseCdromPath; 004eef00 FUN_004eef00; 004ef3bc FUN_004ef3bc; 004f9080 FUN_004f9080; 0050476c FUN_0050476c; 00504988 FUN_00504988; 0050f93c FUN_0050f93c; 00510d54 FUN_00510d54; 00510e6c FUN_00510e6c; 00510f38 FUN_00510f38; 005110d8 FUN_005110d8; 005111e4 FUN_005111e4; 005122c8 FUN_005122c8; 005155c4 FUN_005155c4; 005177d8 FUN_005177d8; 0051923c FUN_0051923c; 00528914 FUN_00528914; 00528c7c FUN_00528c7c; 00529808 FUN_00529808; 00530f80 FUN_00530f80; 00618548 FUN_00618548
// callees(0): 

undefined4 FUN_005ccb28(ulonglong *param_1,ulonglong *param_2,ulonglong param_3)

{
  byte bVar1;
  byte bVar2;
  uint uVar3;
  uint uVar4;
  ulonglong uVar5;
  undefined4 uVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  
  if (7 < (param_3 & 0xffffffff)) {
    uVar4 = (uint)param_3;
    if ((((uint)param_1 | (uint)param_2) & 7) == 0) {
      uVar8 = (param_3 << 0x20) >> 0x23;
      uVar7 = *param_1;
      param_3 = param_3 & 7;
      if (uVar4 >> 3 != 0) {
        if (uVar7 == *param_2) {
          uVar7 = (uVar7 & 0x7f7f7f7f7f7f7f7f) + 0x7f7f7f7f7f7f7f7f | uVar7 | 0x7f7f7f7f7f7f7f7f;
          do {
            if (uVar7 != 0xffffffffffffffff) {
              return 0;
            }
            param_2 = param_2 + 1;
            uVar5 = *param_2;
            param_1 = param_1 + 1;
            uVar7 = (uVar5 & 0x7f7f7f7f7f7f7f7f) + 0x7f7f7f7f7f7f7f7f | uVar5 | 0x7f7f7f7f7f7f7f7f;
            uVar8 = uVar8 - 1;
            if (uVar8 == 0) goto LAB_005ccbd4;
          } while (*param_1 == uVar5);
        }
        param_3 = 8;
      }
    }
    else {
      if ((((uint)param_1 | (uint)param_2) & 3) != 0) goto LAB_005ccbdc;
      uVar8 = (param_3 << 0x20) >> 0x22;
      uVar3 = *(uint *)param_1;
      param_3 = param_3 & 3;
      if (uVar4 >> 2 != 0) {
        if (uVar3 == *(uint *)param_2) {
          uVar4 = (uVar3 & 0x7f7f7f7f) + 0x7f7f7f7f | uVar3 | 0x7f7f7f7f;
          do {
            if (uVar4 != 0xffffffff) {
              return 0;
            }
            param_2 = (ulonglong *)((int)param_2 + 4);
            uVar3 = *(uint *)param_2;
            param_1 = (ulonglong *)((int)param_1 + 4);
            uVar4 = (uVar3 & 0x7f7f7f7f) + 0x7f7f7f7f | uVar3 | 0x7f7f7f7f;
            uVar8 = uVar8 - 1;
            if (uVar8 == 0) goto LAB_005ccbd4;
          } while (*(uint *)param_1 == uVar3);
        }
        param_3 = 4;
      }
    }
  }
LAB_005ccbd4:
  if ((int)param_3 == 0) {
    return 0;
  }
LAB_005ccbdc:
  bVar1 = *(byte *)param_1;
  bVar2 = *(byte *)param_2;
  if (bVar1 == bVar2) {
    param_3 = param_3 & 0xffffffff;
    do {
      if (bVar1 == 0) {
        return 0;
      }
      param_3 = param_3 - 1;
      if (param_3 == 0) {
        return 0;
      }
      param_1 = (ulonglong *)((int)param_1 + 1);
      bVar1 = *(byte *)param_1;
      param_2 = (ulonglong *)((int)param_2 + 1);
      bVar2 = *(byte *)param_2;
    } while (bVar1 == bVar2);
  }
  uVar6 = 1;
  if (bVar1 < bVar2) {
    uVar6 = 0xffffffff;
  }
  return uVar6;
}



//==== 005cccec  ns=libc  size=0x2a4
// sig: undefined strcpy(void)
// callers(60): 000784e8 freeze::DrawDialogText; 000e6b1c memcard::memcard_GetName; 004e7f54 FUN_004e7f54; 004e7f9c FUN_004e7f9c; 004e80d8 FUN_004e80d8; 004e8148 FUN_004e8148; 004e8470 idol::NewSaveData; 004e8714 idol::SaveSystem_PS::SaveGameData; 004e8a70 idol::SaveSystem_PS::AutoSaveGameData; 004e8d7c idol::SaveSystem_PS::LoadGameData; 004e903c idol::thr_SaveSystem_CheckExisting; 004e9848 idol::SaveDataStatusListCallback; 004ea320 idol::cb_data_status_load; 004ee958 FUN_004ee958; 004f1be8 FUN_004f1be8; 004f20b4 FUN_004f20b4; 004f510c FUN_004f510c; 004f51f4 FUN_004f51f4; 004f548c FUN_004f548c; 004f5558 FUN_004f5558; 004f56cc FUN_004f56cc; 004f57b0 FUN_004f57b0; 004f5898 FUN_004f5898; 004f5998 FUN_004f5998; 004f6f58 FUN_004f6f58
// callees(0): 

ulonglong libc::strcpy(ulonglong param_1,ulonglong param_2,ulonglong param_3)

{
  char cVar1;
  uint uVar2;
  uint uVar3;
  undefined8 *puVar4;
  undefined1 *puVar5;
  undefined4 *puVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  longlong lVar9;
  longlong lVar10;
  ulonglong uVar11;
  ulonglong uVar12;
  ulonglong uVar13;
  
  uVar2 = (uint)param_3;
  uVar13 = param_1;
  if (((param_1 | param_2) & 7) == 0) {
    uVar7 = (param_3 << 0x20) >> 0x23;
    param_3 = param_3 & 7;
    if (uVar2 >> 3 != 0) {
      uVar8 = *(ulonglong *)param_2;
      uVar12 = (uVar8 & 0x7f7f7f7f7f7f7f7f) + 0x7f7f7f7f7f7f7f7f | uVar8 | 0x7f7f7f7f7f7f7f7f;
      uVar11 = uVar7;
      while( true ) {
        if (~uVar12 != 0) break;
        *(ulonglong *)uVar13 = uVar8;
        param_2 = param_2 + 8;
        uVar13 = uVar13 + 8;
        uVar7 = uVar7 - 1;
        uVar11 = uVar11 - 1;
        if (uVar11 == 0) goto LAB_005ccd94;
        uVar8 = *(ulonglong *)param_2;
        uVar12 = (uVar8 & 0x7f7f7f7f7f7f7f7f) + 0x7f7f7f7f7f7f7f7f | uVar8 | 0x7f7f7f7f7f7f7f7f;
      }
      lVar9 = uVar13 + 8;
      *(ulonglong *)uVar13 = uVar8 & ~(0xffffffffffffffffU >> LZCOUNT(~uVar12));
      if ((int)(uVar7 - 1) != 0) {
        uVar13 = uVar7 - 1 & 0xffffffff;
        lVar10 = lVar9;
        do {
          puVar4 = (undefined8 *)lVar10;
          lVar10 = lVar10 + 8;
          *puVar4 = 0;
          uVar13 = uVar13 - 1;
        } while (uVar13 != 0);
        lVar9 = (uVar7 & 0x1fffffff) * 8 + lVar9 + -8;
      }
      if ((int)param_3 != 0) {
        do {
          puVar5 = (undefined1 *)lVar9;
          lVar9 = lVar9 + 1;
          *puVar5 = 0;
          param_3 = param_3 - 1;
        } while (param_3 != 0);
        return param_1 & 0xffffffff;
      }
      goto LAB_005ccdd0;
    }
  }
  else if (((param_1 | param_2) & 3) == 0) {
    uVar7 = (param_3 << 0x20) >> 0x22;
    param_3 = param_3 & 3;
    if (uVar2 >> 2 != 0) {
      uVar2 = *(uint *)(ulonglong *)param_2;
      uVar3 = (uVar2 & 0x7f7f7f7f) + 0x7f7f7f7f | uVar2 | 0x7f7f7f7f;
      uVar12 = uVar7;
      while( true ) {
        if (~uVar3 != 0) break;
        *(uint *)uVar13 = uVar2;
        param_2 = param_2 + 4;
        uVar13 = uVar13 + 4;
        uVar7 = uVar7 - 1;
        uVar12 = uVar12 - 1;
        if (uVar12 == 0) goto LAB_005ccd94;
        uVar2 = *(uint *)param_2;
        uVar3 = (uVar2 & 0x7f7f7f7f) + 0x7f7f7f7f | uVar2 | 0x7f7f7f7f;
      }
      lVar9 = uVar13 + 4;
      *(uint *)uVar13 = uVar2 & ~(0xffffffffU >> (int)LZCOUNT(~uVar3));
      if ((int)(uVar7 - 1) != 0) {
        uVar13 = uVar7 - 1 & 0xffffffff;
        lVar10 = lVar9;
        do {
          puVar6 = (undefined4 *)lVar10;
          lVar10 = lVar10 + 4;
          *puVar6 = 0;
          uVar13 = uVar13 - 1;
        } while (uVar13 != 0);
        lVar9 = (uVar7 & 0x3fffffff) * 4 + lVar9 + -4;
      }
      if ((int)param_3 != 0) {
        do {
          puVar5 = (undefined1 *)lVar9;
          lVar9 = lVar9 + 1;
          *puVar5 = 0;
          param_3 = param_3 - 1;
        } while (param_3 != 0);
        return param_1 & 0xffffffff;
      }
      goto LAB_005ccdd0;
    }
  }
LAB_005ccd94:
  if ((int)param_3 != 0) {
    cVar1 = *(char *)param_2;
    if (cVar1 != '\0') {
      uVar7 = param_3 & 0xffffffff;
      do {
        *(char *)uVar13 = cVar1;
        param_3 = param_3 - 1;
        uVar13 = uVar13 + 1;
        uVar7 = uVar7 - 1;
        if (uVar7 == 0) goto LAB_005ccdd0;
        param_2 = param_2 + 1;
        cVar1 = *(char *)param_2;
      } while (cVar1 != '\0');
    }
    param_3 = param_3 & 0xffffffff;
    do {
      *(undefined1 *)uVar13 = 0;
      uVar13 = uVar13 + 1;
      param_3 = param_3 - 1;
    } while (param_3 != 0);
    return param_1 & 0xffffffff;
  }
LAB_005ccdd0:
  return param_1 & 0xffffffff;
}



//==== 005ccf90  ns=Global  size=0x98
// sig: undefined FUN_005ccf90(void)
// callers(5): 004e6770 FUN_004e6770; 004e68bc FUN_004e68bc; 004e6ae8 FUN_004e6ae8; 004e6c40 FUN_004e6c40; 004e6df0 FUN_004e6df0
// callees(3): 005cbbbc FUN_005cbbbc; 005cbc38 FUN_005cbc38; 005cd5c4 libc::vsnprintf

int FUN_005ccf90(size_t param_1,char *param_2,undefined8 param_3,undefined8 param_4,
                undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  undefined *puVar1;
  int iVar2;
  undefined8 uStack00000040;
  undefined8 uStack00000048;
  undefined8 uStack00000050;
  undefined8 uStack00000058;
  undefined8 uStack00000060;
  undefined8 uStack00000068;
  
  puVar1 = PTR_DAT_0071c3bc;
  uStack00000040 = param_3;
  uStack00000048 = param_4;
  uStack00000050 = param_5;
  uStack00000058 = param_6;
  uStack00000060 = param_7;
  uStack00000068 = param_8;
  FUN_005cbc38(PTR_DAT_0071c3bc);
  iVar2 = libc::vsnprintf(PTR_PTR_0071c3c0,param_1,param_2,&stack0x00000040);
  FUN_005cbbbc(puVar1);
  return iVar2;
}



//==== 005cd028  ns=Global  size=0x70
// sig: undefined FUN_005cd028(void)
// callers(0): 
// callees(1): 005c5638 FUN_005c5638

uint FUN_005cd028(uint param_1,undefined8 param_2,uint param_3)

{
  uint uVar1;
  uint uVar2;
  
  uVar2 = FUN_005c5638(param_2,1,param_3,param_1);
  uVar1 = (int)(param_3 ^ uVar2) >> 0x1f;
  return param_1 & (int)(((uVar1 ^ param_3 ^ uVar2) - uVar1) + -1) >> 0x1f;
}



//==== 005cd098  ns=libc  size=0x90
// sig: int32_t printf(char * param_1, ...)
// callers(213): 00011648 boot::LoadGameplay; 00012048 boot::PrepareFrontbin; 00012ec8 boot::GameStart; 00013a20 boot::GameShutDown; 0001401c boot::boot; 0004fe38 sound::UnloadSoundBanks; 00061290 debug::AssertFailed; 0007affc Global_QuickMovieMalloc; 000d8be8 initonce::InitOnce; 000da5f8 lights::DetachPointLight; 000dcc50 loaders::PrintMobyMemory; 000dcf58 loaders::NAVG_LoadFile; 000df408 loaders::LoadAllMobys; 000e0230 loaders::ParseNpcChunk; 000e0e60 main::startLevel; 000e6fe4 memcard::memcard_RestoreGame; 000e8ca0 memcard::memcard_RestoreSaveGame; 000e8f20 memcard::memcard_printGameSaved; 000efa28 mobyfunc::CreateMoby; 000f1c78 mobyfunc::MB_SetLightsFromEnvSample; 000fa3a8 mobyfunc::SetMobyLightFromBlender; 000fc238 mobyfunc::UpdateMobysDebug; 000fcd60 mobyutil::MB_DistributeBolts; 0010dc70 mobyutil::MB_CheckCollPill; 0011df04 music::music_StopCB
// callees(3): 005cbbbc FUN_005cbbbc; 005cbc38 FUN_005cbc38; 005cd5c4 libc::vsnprintf

int32_t libc::printf(char *param_1,...)

{
  undefined *__maxlen;
  int iVar1;
  undefined8 in_r4;
  undefined8 in_r5;
  undefined8 in_r6;
  undefined8 in_r7;
  undefined8 in_r8;
  undefined8 in_r9;
  undefined8 in_r10;
  undefined8 uStack00000038;
  undefined8 uStack00000040;
  undefined8 uStack00000048;
  undefined8 uStack00000050;
  undefined8 uStack00000058;
  undefined8 uStack00000060;
  undefined8 uStack00000068;
  
  __maxlen = PTR_DAT_0071c3c4;
  uStack00000038 = in_r4;
  uStack00000040 = in_r5;
  uStack00000048 = in_r6;
  uStack00000050 = in_r7;
  uStack00000058 = in_r8;
  uStack00000060 = in_r9;
  uStack00000068 = in_r10;
  FUN_005cbc38(PTR_DAT_0071c3c4);
  iVar1 = vsnprintf(PTR_PTR_0071c3c8,(size_t)__maxlen,param_1,&stack0x00000038);
  FUN_005cbbbc(__maxlen);
  return iVar1;
}



//==== 005cd128  ns=Global  size=0x70
// sig: undefined FUN_005cd128(void)
// callers(0): 
// callees(1): 005c5638 FUN_005c5638

uint FUN_005cd128(uint param_1,undefined8 param_2,uint param_3)

{
  uint uVar1;
  uint uVar2;
  
  uVar2 = FUN_005c5638(param_2,1,param_3,param_1);
  uVar1 = (int)(param_3 ^ uVar2) >> 0x1f;
  return param_1 & (int)(((uVar1 ^ param_3 ^ uVar2) - uVar1) + -1) >> 0x1f;
}



//==== 005cd198  ns=Global  size=0x8c
// sig: undefined FUN_005cd198(void)
// callers(23): 004fa800 FUN_004fa800; 0051c92c FUN_0051c92c; 005272e4 FUN_005272e4; 00528454 FUN_00528454; 00528fc8 FUN_00528fc8; 0052d90c FUN_0052d90c; 0052e828 FUN_0052e828; 00531658 FUN_00531658; 00532d1c FUN_00532d1c; 005337e8 FUN_005337e8; 00533ae0 FUN_00533ae0; 00533e7c FUN_00533e7c; 005344e8 FUN_005344e8; 00535840 FUN_00535840; 00535d38 FUN_00535d38; 00609b44 FUN_00609b44; 00609cf4 FUN_00609cf4; 0060e57c FUN_0060e57c; 0060f728 FUN_0060f728; 0062b660 989snd::snd_SynthLR1Create; 0062be38 FUN_0062be38; 006459b4 FUN_006459b4; 0064c764 FUN_0064c764
// callees(1): 005cd5c4 libc::vsnprintf

int FUN_005cd198(undefined1 *param_1,int param_2,char *param_3,undefined8 param_4,undefined8 param_5
                ,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  int iVar1;
  undefined8 uStack00000048;
  undefined8 uStack00000050;
  undefined8 uStack00000058;
  undefined8 uStack00000060;
  undefined8 uStack00000068;
  undefined1 *local_c;
  int local_8;
  
  local_8 = param_2 + -1;
  local_c = param_1;
  if (param_2 == 0) {
    local_8 = 0;
    local_c = (undefined1 *)0x0;
  }
  uStack00000048 = param_4;
  uStack00000050 = param_5;
  uStack00000058 = param_6;
  uStack00000060 = param_7;
  uStack00000068 = param_8;
  iVar1 = libc::vsnprintf(PTR_PTR_0071c3cc,(size_t)&local_c,param_3,&stack0x00000048);
  if (local_c != (undefined1 *)0x0) {
    *local_c = 0;
  }
  return iVar1;
}



//==== 005cd224  ns=Global  size=0x84
// sig: undefined FUN_005cd224(void)
// callers(0): 
// callees(1): 005c5ad0 libc::memcpy

int * FUN_005cd224(int *param_1,void *param_2,uint param_3)

{
  uint __n;
  
  __n = param_1[1];
  if (param_3 < (uint)param_1[1]) {
    __n = param_3;
  }
  if (__n != 0) {
    libc::memcpy((void *)*param_1,param_2,__n);
    *param_1 = *param_1 + __n;
    param_1[1] = param_1[1] - __n;
  }
  return param_1;
}



//==== 005cd2a8  ns=libc  size=0x7c
// sig: int snprintf(char * __s, char * __format, ...)
// callers(116): 00010238 boot::PlayLogoMovie; 000103b0 boot::PlayAttractMovie; 00011530 boot::LoadLanguageHelpMsgs; 00012048 boot::PrepareFrontbin; 00012ec8 boot::GameStart; 00060ac0 debug::DebugFontPrintLeft; 00060b4c debug::DebugFontPrintfLeft; 00060c64 debug::DebugFontPrintCenter; 00060d88 debug::DebugFontPrintfCenter; 00060ef0 debug::DebugFontPrintRight; 00061000 debug::DebugFontPrintfRight; 000611a0 debug::DebugFontPrintN; 000627d0 debug::UpdateDebugSelections; 00063e68 debug::DrawDebugMenu; 0006ad48 draw::DrawSubtitles; 000784e8 freeze::DrawDialogText; 000cc450 hud::Draw_PromptMsg; 000ce170 hud::Draw_QuickSelectHud; 000d1110 hud::Draw_BoltCountUI; 000d27f8 hud::Draw_HoverboardTrickHud; 000d3e20 hud::Draw_MetalDetectorHud; 000d4838 hud::Draw_AmmoCounter; 000d4ef0 hud::Draw_MobyCounterHud; 000d6148 hud::Draw_RaceLapPlaceHud; 000d6710 hud::Draw_RaceTimeScoreHud
// callees(1): 005cd5c4 libc::vsnprintf

int libc::snprintf(char *__s,char *__format,...)

{
  int iVar1;
  undefined8 in_r5;
  undefined8 in_r6;
  undefined8 in_r7;
  undefined8 in_r8;
  undefined8 in_r9;
  undefined8 in_r10;
  undefined8 uStack00000040;
  undefined8 uStack00000048;
  undefined8 uStack00000050;
  undefined8 uStack00000058;
  undefined8 uStack00000060;
  undefined8 uStack00000068;
  
  uStack00000040 = in_r5;
  uStack00000048 = in_r6;
  uStack00000050 = in_r7;
  uStack00000058 = in_r8;
  uStack00000060 = in_r9;
  uStack00000068 = in_r10;
  iVar1 = vsnprintf(PTR_PTR_0071c3d0,(size_t)__s,__format,&stack0x00000040);
  if (-1 < iVar1) {
    __s[iVar1] = '\0';
  }
  return iVar1;
}



//==== 005cd324  ns=Global  size=0x3c
// sig: undefined FUN_005cd324(void)
// callers(0): 
// callees(1): 005c5ad0 libc::memcpy

int FUN_005cd324(void *param_1,void *param_2,size_t param_3)

{
  void *pvVar1;
  
  pvVar1 = libc::memcpy(param_1,param_2,param_3);
  return (int)pvVar1 + param_3;
}



//==== 005cd360  ns=Global  size=0x74
// sig: undefined FUN_005cd360(void)
// callers(1): 0052cb60 FUN_0052cb60
// callees(3): 005cbbbc FUN_005cbbbc; 005cbc38 FUN_005cbc38; 005cd5c4 libc::vsnprintf

int FUN_005cd360(undefined8 param_1,char *param_2,__gnuc_va_list param_3)

{
  int iVar1;
  
  FUN_005cbc38();
  iVar1 = libc::vsnprintf(PTR_PTR_0071c3d4,(size_t)param_1,param_2,param_3);
  FUN_005cbbbc(param_1);
  return iVar1;
}



//==== 005cd3d4  ns=Global  size=0x70
// sig: undefined FUN_005cd3d4(void)
// callers(0): 
// callees(1): 005c5638 FUN_005c5638

uint FUN_005cd3d4(uint param_1,undefined8 param_2,uint param_3)

{
  uint uVar1;
  uint uVar2;
  
  uVar2 = FUN_005c5638(param_2,1,param_3,param_1);
  uVar1 = (int)(param_3 ^ uVar2) >> 0x1f;
  return param_1 & (int)(((uVar1 ^ param_3 ^ uVar2) - uVar1) + -1) >> 0x1f;
}



//==== 005cd444  ns=Global  size=0x78
// sig: undefined FUN_005cd444(void)
// callers(1): 004f4df0 FUN_004f4df0
// callees(3): 005cbbbc FUN_005cbbbc; 005cbc38 FUN_005cbc38; 005cd5c4 libc::vsnprintf

int FUN_005cd444(char *param_1,__gnuc_va_list param_2)

{
  undefined *__maxlen;
  int iVar1;
  
  __maxlen = PTR_DAT_0071c3d8;
  FUN_005cbc38(PTR_DAT_0071c3d8);
  iVar1 = libc::vsnprintf(PTR_PTR_0071c3dc,(size_t)__maxlen,param_1,param_2);
  FUN_005cbbbc(__maxlen);
  return iVar1;
}



//==== 005cd4bc  ns=Global  size=0x70
// sig: undefined FUN_005cd4bc(void)
// callers(0): 
// callees(1): 005c5638 FUN_005c5638

uint FUN_005cd4bc(uint param_1,undefined8 param_2,uint param_3)

{
  uint uVar1;
  uint uVar2;
  
  uVar2 = FUN_005c5638(param_2,1,param_3,param_1);
  uVar1 = (int)(param_3 ^ uVar2) >> 0x1f;
  return param_1 & (int)(((uVar1 ^ param_3 ^ uVar2) - uVar1) + -1) >> 0x1f;
}



//==== 005cd52c  ns=Global  size=0x5c
// sig: undefined FUN_005cd52c(void)
// callers(17): 00060b4c debug::DebugFontPrintfLeft; 00060d88 debug::DebugFontPrintfCenter; 00061000 debug::DebugFontPrintfRight; 004ff4ac FUN_004ff4ac; 004ff520 idol::print_mem_error; 004ff6d0 print_tty; 004ff780 FUN_004ff780; 004ff868 FUN_004ff868; 004ff8dc FUN_004ff8dc; 004ff98c FUN_004ff98c; 004ffa4c FUN_004ffa4c; 004ffac4 FUN_004ffac4; 004ffb7c FUN_004ffb7c; 004ffbf4 FUN_004ffbf4; 004ffc9c print_tty2; 004ffd4c FUN_004ffd4c; 004ffdf4 FUN_004ffdf4
// callees(1): 005cd5c4 libc::vsnprintf

int FUN_005cd52c(size_t param_1,char *param_2,__gnuc_va_list param_3)

{
  int iVar1;
  
  iVar1 = libc::vsnprintf(PTR_PTR_0071c3e0,param_1,param_2,param_3);
  if (-1 < iVar1) {
    *(undefined1 *)(param_1 + iVar1) = 0;
  }
  return iVar1;
}



//==== 005cd588  ns=Global  size=0x3c
// sig: undefined FUN_005cd588(void)
// callers(0): 
// callees(1): 005c5ad0 libc::memcpy

int FUN_005cd588(void *param_1,void *param_2,size_t param_3)

{
  void *pvVar1;
  
  pvVar1 = libc::memcpy(param_1,param_2,param_3);
  return (int)pvVar1 + param_3;
}



//==== 005cd5c4  ns=libc  size=0x6c4
// sig: int vsnprintf(char * __s, size_t __maxlen, char * __format, __gnuc_va_list __arg)
// callers(8): 005c8a94 FUN_005c8a94; 005ccf90 FUN_005ccf90; 005cd098 libc::printf; 005cd198 FUN_005cd198; 005cd2a8 libc::snprintf; 005cd360 FUN_005cd360; 005cd444 FUN_005cd444; 005cd52c FUN_005cd52c
// callees(4): 005cc0a8 libc::memcpy4; 005cc578 libc::strchr; 005cdc88 libc::vprintf_format_dispatch; 005d9b38 libc::mbrtowc
// strings: 00661178: ' +-#0,;:_' | 0067ec78: 'hjltzLv'

int libc::vsnprintf(char *__s,size_t __maxlen,char *__format,__gnuc_va_list __arg)

{
  byte bVar1;
  byte bVar2;
  byte *pbVar3;
  undefined *__s_00;
  size_t sVar5;
  longlong lVar4;
  char *pcVar6;
  int iVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  byte *pbVar11;
  ulonglong uVar12;
  wchar_t local_f0 [2];
  int local_ec;
  mbstate_t local_e8;
  undefined1 auStack_e0 [64];
  undefined1 auStack_a0 [32];
  char *local_80;
  size_t local_7c;
  undefined4 local_74;
  undefined4 local_70;
  undefined4 local_6c;
  undefined4 local_68;
  undefined4 local_64;
  undefined4 local_60;
  int local_5c;
  int local_58;
  int local_54;
  ushort local_50;
  byte local_4e;
  
  uVar12 = (ulonglong)(int)__format;
  local_e8.__count = 0;
  local_e8.__value.__wch._0_2_ = 0;
  local_e8.__value.__wch._2_2_ = 0;
  memcpy4(&local_ec,__arg);
  local_58 = 0;
  local_80 = __s;
  local_7c = __maxlen;
  uVar10 = uVar12;
  do {
    while( true ) {
      local_f0[0] = L'\0';
      sVar5 = mbrtowc(local_f0,(char *)(byte *)uVar12,0x7fffffff,&local_e8);
      uVar9 = (ulonglong)(ushort)local_f0[0];
      if ((int)sVar5 < 1) {
        lVar4 = ((longlong)((uVar9 ^ 0x25) - 1 << 0x20) >> 0x3f) -
                ((longlong)-(ulonglong)*(byte *)uVar12 >> 0x3f);
        iVar7 = (int)lVar4;
      }
      else {
        lVar4 = (longlong)(int)sVar5 + ((longlong)((uVar9 ^ 0x25) - 1 << 0x20) >> 0x3f);
        iVar7 = (int)lVar4;
      }
      if (iVar7 == 0) break;
      uVar12 = uVar12 + lVar4;
    }
    iVar7 = (int)(uVar12 - uVar10);
    if (0 < iVar7) {
      local_7c = (**(code **)local_80)(local_7c,uVar10 & 0xffffffff,uVar12 - uVar10 & 0xffffffff);
      if (local_7c == 0) {
        return -1;
      }
      uVar9 = (ulonglong)(ushort)local_f0[0];
    }
    __s_00 = PTR_s____0_____0071c3e4;
    local_58 = iVar7 + local_58;
    if (uVar9 == 0) {
      return local_58;
    }
    uVar10 = ZEXT48(PTR_s____0_____0071c3e4);
    local_50 = 0;
    local_60 = 0;
    local_64 = 0;
    local_68 = 0;
    local_6c = 0;
    local_70 = 0;
    local_74 = 0;
    while( true ) {
      uVar9 = uVar12 + 1;
      pbVar11 = (byte *)uVar9;
      pcVar6 = strchr(__s_00,(int)(char)*pbVar11);
      if (pcVar6 == (char *)0x0) break;
      local_50 = (ushort)*(undefined4 *)
                          (__s_00 + (int)(((longlong)(int)pcVar6 - uVar10 & 0xffffffff) << 2) + 0xc)
                 | local_50;
      uVar12 = uVar9;
    }
    if (*pbVar11 == 0x2a) {
      local_54 = *(int *)(local_ec + 4);
      if (local_54 < 0) {
        local_54 = -local_54;
        local_50 = local_50 | 4;
      }
      uVar9 = uVar12 + 2;
      local_ec = local_ec + 8;
      pbVar11 = (byte *)uVar9;
    }
    else {
      local_54 = 0;
      bVar1 = *pbVar11;
      iVar7 = 0;
      if ((*(ushort *)((uint)bVar1 * 2 + *(int *)PTR_PTR_0071c3e8) & 0x20) != 0) {
        do {
          local_54 = iVar7 * 10 + (uint)bVar1 + -0x30;
          do {
            uVar9 = uVar9 + 1;
            pbVar11 = (byte *)uVar9;
            bVar1 = *pbVar11;
            if ((*(ushort *)((uint)bVar1 * 2 + *(int *)PTR_PTR_0071c3e8) & 0x20) == 0)
            goto LAB_005cd7d4;
            iVar7 = local_54;
          } while (local_54 == 0x7fffffff);
        } while( true );
      }
    }
LAB_005cd7d4:
    if (*pbVar11 == 0x2e) {
      uVar10 = uVar9 + 1;
      pbVar11 = (byte *)uVar10;
      if (*pbVar11 == 0x2a) {
        uVar10 = uVar9 + 2;
        pbVar11 = (byte *)uVar10;
        local_5c = *(int *)(local_ec + 4);
        local_ec = local_ec + 8;
      }
      else {
        local_5c = 0;
        bVar1 = *pbVar11;
        iVar7 = 0;
        if ((*(ushort *)((uint)bVar1 * 2 + *(int *)PTR_PTR_0071c3e8) & 0x20) != 0) {
          do {
            local_5c = iVar7 * 10 + (uint)bVar1 + -0x30;
            do {
              uVar10 = uVar10 + 1;
              pbVar11 = (byte *)uVar10;
              bVar1 = *pbVar11;
              if ((*(ushort *)((uint)bVar1 * 2 + *(int *)PTR_PTR_0071c3e8) & 0x20) == 0) {
                pcVar6 = strchr(PTR_s_hjltzLv_0071c3ec,(int)(char)*pbVar11);
                goto joined_r0x005cda08;
              }
              iVar7 = local_5c;
            } while (local_5c == 0x7fffffff);
          } while( true );
        }
      }
    }
    else {
      local_5c = -1;
      uVar10 = uVar9;
    }
    pcVar6 = strchr(PTR_s_hjltzLv_0071c3ec,(int)(char)*pbVar11);
joined_r0x005cda08:
    if (pcVar6 == (char *)0x0) {
      local_4e = 0;
      uVar8 = uVar10 + 1;
      uVar9 = uVar10;
LAB_005cd854:
      uVar12 = uVar8;
      if (local_4e != 0x76) goto LAB_005cd864;
LAB_005cd8dc:
      uVar12 = uVar8;
      if ((local_50 & 0x781) != 0) goto LAB_005cd890;
      local_50 = local_50 | 1;
      iVar7 = vprintf_format_dispatch(auStack_a0,&local_ec,*pbVar11,auStack_e0);
    }
    else {
      uVar9 = uVar10 + 1;
      local_4e = *pbVar11;
      uVar8 = uVar10 + 2;
      pbVar3 = (byte *)uVar8;
      bVar1 = *pbVar3;
      pbVar11 = (byte *)uVar9;
      if (local_4e == 0x68) {
        if (*pbVar11 == 0x68) {
          if (bVar1 == 0x76) {
            uVar9 = uVar10 + 3;
            local_4e = 0x67;
          }
          else {
            local_4e = 0x62;
            uVar9 = uVar8;
          }
        }
        else {
          if (*pbVar11 != 0x76) goto LAB_005cd848;
LAB_005cda84:
          local_4e = 99;
          uVar9 = uVar8;
        }
LAB_005cda8c:
        uVar8 = uVar9 + 1;
        pbVar11 = (byte *)uVar9;
        goto LAB_005cd854;
      }
      if (local_4e != 0x76) {
        if (local_4e == 0x6c) {
          if (*pbVar11 == 0x6c) {
            if (bVar1 == 0x76) {
LAB_005cdc54:
              local_4e = 0x61;
              uVar9 = uVar10 + 3;
            }
            else {
              local_4e = 0x71;
              uVar9 = uVar8;
            }
          }
          else {
            if (*pbVar11 != 0x76) goto LAB_005cd848;
            local_4e = 0x76;
            uVar9 = uVar8;
          }
        }
        else {
          if ((local_4e != 0x4c) || (*pbVar11 != 0x76)) {
LAB_005cd848:
            if (local_4e != 0x66) goto LAB_005cd854;
            goto LAB_005cda24;
          }
LAB_005cdb28:
          local_4e = 0x65;
          uVar9 = uVar8;
        }
        goto LAB_005cda8c;
      }
      bVar2 = *pbVar11;
      if (bVar2 != 99) {
        if (bVar2 == 0x68) {
          if (bVar1 != 0x68) goto LAB_005cda84;
          local_4e = 0x67;
          uVar9 = uVar10 + 3;
        }
        else if (bVar2 == 0x6c) {
          if (bVar1 == 0x6c) goto LAB_005cdc54;
          local_4e = 0x76;
          uVar9 = uVar8;
        }
        else {
          if (bVar2 == 0x4c) goto LAB_005cdb28;
          if (((((bVar2 == 0x75) || (bVar2 == 0x6f)) || (bVar2 == 0x78)) || (bVar2 == 0x58)) &&
             (bVar1 == 99)) {
            local_4e = 100;
          }
        }
        goto LAB_005cda8c;
      }
      local_4e = 0x66;
LAB_005cda24:
      uVar12 = uVar8;
      if ((*pbVar11 == 99) &&
         (((bVar1 = *pbVar3, bVar1 == 0x75 || (bVar1 == 0x6f)) ||
          ((bVar1 == 0x78 || (bVar1 == 0x58)))))) {
        uVar12 = uVar10 + 3;
        local_4e = 100;
        uVar9 = uVar8;
        pbVar11 = pbVar3;
      }
LAB_005cd864:
      if (((local_4e == 0x61) || (local_4e == 99)) || ((local_4e == 0x67 || (local_4e == 100)))) {
        uVar8 = uVar9 + 1;
        goto LAB_005cd8dc;
      }
      uVar8 = uVar9 + 1;
      if (local_4e == 0x65) goto LAB_005cd8dc;
LAB_005cd890:
      iVar7 = vprintf_format_dispatch(auStack_a0,&local_ec,*pbVar11,auStack_e0);
    }
    if (iVar7 < 0) {
      return -1;
    }
    uVar10 = uVar12;
    if ((*(char *)uVar12 == 'c') && (local_4e == 100)) {
      uVar12 = uVar12 + 1;
      uVar10 = uVar12;
    }
  } while( true );
}



//==== 005cdc88  ns=libc  size=0x154
// sig: undefined vprintf_format_dispatch(void)
// callers(1): 005cd5c4 libc::vsnprintf
// callees(1): 005d9d68 FUN_005d9d68

undefined4
libc::vprintf_format_dispatch(int param_1,undefined8 param_2,longlong param_3,int param_4)

{
  undefined4 uVar1;
  int iVar2;
  
  if (0x53 < (param_3 - 0x25U & 0xff)) {
    iVar2 = *(int *)(param_1 + 0x2c);
    if ((char)param_3 == '\0') {
      *(undefined1 *)(iVar2 + param_4) = 0x25;
      *(int *)(param_1 + 0x2c) = iVar2 + 1;
      iVar2 = FUN_005d9d68(param_1,param_4,param_3,param_4,param_2);
    }
    else {
      *(char *)(iVar2 + param_4) = (char)param_3;
      *(int *)(param_1 + 0x2c) = iVar2 + 1;
      iVar2 = FUN_005d9d68(param_1,param_4,param_3,param_4,param_2);
    }
    if (iVar2 < 0) {
      uVar1 = 0xffffffff;
    }
    else {
      uVar1 = 0;
    }
    return uVar1;
  }
                    /* WARNING: Could not recover jumptable at 0x005cdd10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar1 = (*(code *)(PTR_DAT_0071c3f0 +
                    *(int *)(PTR_DAT_0071c3f0 +
                            ((uint)((param_3 - 0x25U & 0xffffffff) << 2) & 0x3fc))))();
  return uVar1;
}



//==== 005cedb8  ns=Global  size=0x30
// sig: undefined FUN_005cedb8(void)
// callers(0): 
// callees(1): 00650684 sys::sys_time_get_system_time

longlong FUN_005cedb8(void)

{
  longlong lVar1;
  undefined4 uStack_44;
  
  lVar1 = sys::sys_time_get_system_time();
  return lVar1 - **(longlong **)(uStack_44 + -0x5f28);
}



//==== 005cede8  ns=Global  size=0x74
// sig: undefined FUN_005cede8(void)
// callers(1): 0052ca3c FUN_0052ca3c
// callees(1): 08000091 syscall::syscall_sys_time_get_current_time

undefined8 FUN_005cede8(undefined8 *param_1)

{
  int iVar1;
  byte in_cr0;
  byte in_cr1;
  byte in_cr2;
  byte in_cr3;
  byte unaff_cr4;
  byte in_cr5;
  byte in_cr6;
  byte in_cr7;
  uint uStack00000008;
  undefined8 local_30;
  undefined1 auStack_28 [16];
  
  uStack00000008 =
       (uint)(in_cr0 & 0xf) << 0x1c | (uint)(in_cr1 & 0xf) << 0x18 | (uint)(in_cr2 & 0xf) << 0x14 |
       (uint)(in_cr3 & 0xf) << 0x10 | (uint)(unaff_cr4 & 0xf) << 0xc | (uint)(in_cr5 & 0xf) << 8 |
       (uint)(in_cr6 & 0xf) << 4 | (uint)(in_cr7 & 0xf);
  iVar1 = syscall::syscall_sys_time_get_current_time(&local_30,auStack_28);
  if (iVar1 == 0) {
    if (param_1 != (undefined8 *)0x0) {
      *param_1 = local_30;
    }
  }
  else {
    local_30 = 0xffffffffffffffff;
    if (param_1 != (undefined8 *)0x0) {
      *param_1 = 0xffffffffffffffff;
    }
  }
  return local_30;
}



//==== 005cee5c  ns=Global  size=0xfc
// sig: undefined FUN_005cee5c(void)
// callers(2): 005cef58 FUN_005cef58; 005cef7c FUN_005cef7c
// callees(3): 005c50cc FUN_005c50cc; 005c8510 libc::strlen; 08000193 syscall::syscall_sys_tty_write
// strings: 0067ec98: 'In function ' | 0067eca8: ' -- ' (raw) | 0067ecb0: ' -- assertion failed\n'

void FUN_005cee5c(char *param_1,char *param_2)

{
  size_t sVar1;
  undefined1 auStack_30 [24];
  
  FUN_005c50cc(0);
  if (param_2 != (char *)0x0) {
    syscall::syscall_sys_tty_write(1,PTR_s_In_function_0071c404,0xc,auStack_30);
    sVar1 = libc::strlen(param_2);
    syscall::syscall_sys_tty_write(1,param_2,sVar1,auStack_30);
    syscall::syscall_sys_tty_write(1,PTR_DAT_0071c408,4,auStack_30);
  }
  sVar1 = libc::strlen(param_1);
  syscall::syscall_sys_tty_write(1,param_1,sVar1,auStack_30);
  syscall::syscall_sys_tty_write(1,PTR_s____assertion_failed_0071c40c,0x15,auStack_30);
  FUN_005c50cc(0);
  return;
}



//==== 005cef58  ns=Global  size=0x24
// sig: undefined FUN_005cef58(void)
// callers(6): 0050fb74 FUN_0050fb74; 0050fbb0 FUN_0050fbb0; 0050fbfc FUN_0050fbfc; 0051007c FUN_0051007c; 005104d4 FUN_005104d4; 00510638 FUN_00510638
// callees(1): 005cee5c FUN_005cee5c

void FUN_005cef58(void)

{
  undefined8 in_LR;
  
  FUN_005cee5c();
  trapWord(0x1f,in_LR,in_LR);
  return;
}



//==== 005cef7c  ns=Global  size=0x14
// sig: undefined FUN_005cef7c(void)
// callers(9): 0053a154 FUN_0053a154; 0053a538 FUN_0053a538; 0053a848 FUN_0053a848; 0053acb4 FUN_0053acb4; 0053b138 FUN_0053b138; 0053b624 FUN_0053b624; 005d2264 FUN_005d2264; 005d309c FUN_005d309c; 005d4c0c FUN_005d4c0c
// callees(2): 005c4840 idol::abort; 005cee5c FUN_005cee5c

void FUN_005cef7c(void)

{
  FUN_005cee5c();
                    /* WARNING: Subroutine does not return */
  idol::abort();
}



//==== 005cef94  ns=Global  size=0x8c
// sig: undefined FUN_005cef94(void)
// callers(2): 005cf1b0 FUN_005cf1b0; 005cf22c FUN_005cf22c
// callees(0): 

void FUN_005cef94(undefined4 *param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  undefined8 uVar2;
  
  param_2[4] = param_1[1];
  uVar1 = param_1[2];
  param_2[0x11] = 0;
  param_2[5] = uVar1;
  *param_2 = 0;
  param_2[1] = 0;
  param_2[3] = 0;
  param_2[6] = 0;
  uVar1 = *param_1;
  *(undefined8 *)(param_2 + 10) = *(undefined8 *)(param_1 + 3);
  *(undefined8 *)(param_2 + 0xc) = *(undefined8 *)(param_1 + 5);
  uVar2 = *(undefined8 *)(param_1 + 7);
  param_2[2] = uVar1;
  *(undefined8 *)(param_2 + 0xe) = uVar2;
  *(undefined8 *)(param_2 + 8) = *(undefined8 *)(param_1 + 9);
  param_2[0x10] = param_1[0xc];
  return;
}



//==== 005cf020  ns=Global  size=0x54
// sig: undefined FUN_005cf020(void)
// callers(0): 
// callees(2): 005d5904 FUN_005d5904; 08000342 syscall::syscall_sys_fs_chmod

undefined4 FUN_005cf020(void)

{
  int iVar1;
  undefined4 uVar2;
  int *piVar3;
  
  iVar1 = syscall::syscall_sys_fs_chmod();
  uVar2 = 0;
  if (iVar1 != 0) {
    piVar3 = (int *)FUN_005d5904();
    *piVar3 = iVar1;
    uVar2 = 0xffffffff;
  }
  return uVar2;
}



//==== 005cf074  ns=Global  size=0x94
// sig: undefined FUN_005cf074(void)
// callers(0): 
// callees(2): 005d5904 FUN_005d5904; 0800032f syscall::syscall_sys_fs_utime

undefined4 FUN_005cf074(undefined4 param_1,int param_2)

{
  int iVar1;
  int *piVar2;
  undefined4 *puVar3;
  undefined4 uVar4;
  undefined1 local_20 [24];
  
  if (param_2 == 0) {
    puVar3 = (undefined4 *)FUN_005d5904(param_1,local_20);
    uVar4 = 0xffffffff;
    *puVar3 = 0x8001000d;
  }
  else {
    iVar1 = syscall::syscall_sys_fs_utime();
    uVar4 = 0;
    if (iVar1 != 0) {
      piVar2 = (int *)FUN_005d5904();
      uVar4 = 0xffffffff;
      *piVar2 = iVar1;
    }
  }
  return uVar4;
}



//==== 005cf108  ns=Global  size=0x54
// sig: undefined FUN_005cf108(void)
// callers(0): 
// callees(2): 005d5904 FUN_005d5904; 0800032b syscall::syscall_sys_fs_mkdir

undefined4 FUN_005cf108(void)

{
  int iVar1;
  undefined4 uVar2;
  int *piVar3;
  
  iVar1 = syscall::syscall_sys_fs_mkdir();
  uVar2 = 0;
  if (iVar1 != 0) {
    piVar3 = (int *)FUN_005d5904();
    *piVar3 = iVar1;
    uVar2 = 0xffffffff;
  }
  return uVar2;
}



//==== 005cf15c  ns=Global  size=0x54
// sig: undefined FUN_005cf15c(void)
// callers(0): 
// callees(2): 005d5904 FUN_005d5904; 0800032d syscall::syscall_sys_fs_rmdir

undefined4 FUN_005cf15c(void)

{
  int iVar1;
  undefined4 uVar2;
  int *piVar3;
  
  iVar1 = syscall::syscall_sys_fs_rmdir();
  uVar2 = 0;
  if (iVar1 != 0) {
    piVar3 = (int *)FUN_005d5904();
    *piVar3 = iVar1;
    uVar2 = 0xffffffff;
  }
  return uVar2;
}



//==== 005cf1b0  ns=Global  size=0x7c
// sig: undefined FUN_005cf1b0(void)
// callers(0): 
// callees(3): 005cef94 FUN_005cef94; 005d5904 FUN_005d5904; 08000328 syscall::syscall_sys_fs_stat

undefined4 FUN_005cf1b0(undefined8 param_1,undefined4 param_2)

{
  undefined4 uVar1;
  int iVar2;
  int *piVar3;
  undefined1 auStack_60 [72];
  
  iVar2 = syscall::syscall_sys_fs_stat(param_1,auStack_60);
  if (iVar2 == 0) {
    FUN_005cef94();
    uVar1 = 0;
  }
  else {
    piVar3 = (int *)FUN_005d5904(auStack_60,param_2);
    uVar1 = 0xffffffff;
    *piVar3 = iVar2;
  }
  return uVar1;
}



//==== 005cf22c  ns=Global  size=0x7c
// sig: undefined FUN_005cf22c(void)
// callers(0): 
// callees(3): 005cef94 FUN_005cef94; 005d5904 FUN_005d5904; 08000329 syscall::syscall_sys_fs_fstat

undefined4 FUN_005cf22c(undefined8 param_1,undefined4 param_2)

{
  undefined4 uVar1;
  int iVar2;
  int *piVar3;
  undefined1 auStack_60 [72];
  
  iVar2 = syscall::syscall_sys_fs_fstat(param_1,auStack_60);
  if (iVar2 == 0) {
    FUN_005cef94();
    uVar1 = 0;
  }
  else {
    piVar3 = (int *)FUN_005d5904(auStack_60,param_2);
    uVar1 = 0xffffffff;
    *piVar3 = iVar2;
  }
  return uVar1;
}



//==== 005cf2a8  ns=Global  size=0x54
// sig: undefined FUN_005cf2a8(void)
// callers(0): 
// callees(2): 005d5904 FUN_005d5904; 0800033f syscall::syscall_sys_fs_truncate

undefined4 FUN_005cf2a8(void)

{
  int iVar1;
  undefined4 uVar2;
  int *piVar3;
  
  iVar1 = syscall::syscall_sys_fs_truncate();
  uVar2 = 0;
  if (iVar1 != 0) {
    piVar3 = (int *)FUN_005d5904();
    *piVar3 = iVar1;
    uVar2 = 0xffffffff;
  }
  return uVar2;
}



//==== 005cf2fc  ns=Global  size=0x54
// sig: undefined FUN_005cf2fc(void)
// callers(0): 
// callees(2): 005d5904 FUN_005d5904; 08000340 syscall::syscall_sys_fs_ftruncate

undefined4 FUN_005cf2fc(void)

{
  int iVar1;
  undefined4 uVar2;
  int *piVar3;
  
  iVar1 = syscall::syscall_sys_fs_ftruncate();
  uVar2 = 0;
  if (iVar1 != 0) {
    piVar3 = (int *)FUN_005d5904();
    *piVar3 = iVar1;
    uVar2 = 0xffffffff;
  }
  return uVar2;
}



//==== 005cf350  ns=Global  size=0x80
// sig: undefined FUN_005cf350(void)
// callers(0): 
// callees(2): 005d5904 FUN_005d5904; 08000334 syscall::syscall_sys_fs_fsync

undefined4 FUN_005cf350(uint param_1)

{
  int iVar1;
  undefined4 *puVar2;
  int *piVar3;
  undefined4 uVar4;
  
  if (param_1 < 3) {
    puVar2 = (undefined4 *)FUN_005d5904(param_1);
    uVar4 = 0xffffffff;
    *puVar2 = 0x8001002a;
  }
  else {
    iVar1 = syscall::syscall_sys_fs_fsync();
    uVar4 = 0;
    if (iVar1 != 0) {
      piVar3 = (int *)FUN_005d5904();
      uVar4 = 0xffffffff;
      *piVar3 = iVar1;
    }
  }
  return uVar4;
}



//==== 005cf3d0  ns=Global  size=0x54
// sig: undefined FUN_005cf3d0(void)
// callers(0): 
// callees(2): 005d5904 FUN_005d5904; 0800032c syscall::syscall_sys_fs_rename

undefined4 FUN_005cf3d0(void)

{
  int iVar1;
  undefined4 uVar2;
  int *piVar3;
  
  iVar1 = syscall::syscall_sys_fs_rename();
  uVar2 = 0;
  if (iVar1 != 0) {
    piVar3 = (int *)FUN_005d5904();
    *piVar3 = iVar1;
    uVar2 = 0xffffffff;
  }
  return uVar2;
}



//==== 005cf424  ns=Global  size=0x54
// sig: undefined FUN_005cf424(void)
// callers(0): 
// callees(2): 005d5904 FUN_005d5904; 0800032a syscall::syscall_sys_fs_link

undefined4 FUN_005cf424(void)

{
  int iVar1;
  undefined4 uVar2;
  int *piVar3;
  
  iVar1 = syscall::syscall_sys_fs_link();
  uVar2 = 0;
  if (iVar1 != 0) {
    piVar3 = (int *)FUN_005d5904();
    *piVar3 = iVar1;
    uVar2 = 0xffffffff;
  }
  return uVar2;
}



//==== 005cf478  ns=Global  size=0x54
// sig: undefined FUN_005cf478(void)
// callers(0): 
// callees(2): 005d5904 FUN_005d5904; 0800032e syscall::syscall_sys_fs_unlink

undefined4 FUN_005cf478(void)

{
  int iVar1;
  undefined4 uVar2;
  int *piVar3;
  
  iVar1 = syscall::syscall_sys_fs_unlink();
  uVar2 = 0;
  if (iVar1 != 0) {
    piVar3 = (int *)FUN_005d5904();
    *piVar3 = iVar1;
    uVar2 = 0xffffffff;
  }
  return uVar2;
}



//==== 005cf4cc  ns=Global  size=0x88
// sig: undefined FUN_005cf4cc(void)
// callers(4): 005f3b70 FUN_005f3b70; 005f3d78 FUN_005f3d78; 005f44f0 FUN_005f44f0; 005f4738 FUN_005f4738
// callees(2): 005d5904 FUN_005d5904; 08000332 syscall::syscall_sys_fs_lseek

undefined8 FUN_005cf4cc(uint param_1,undefined8 param_2,undefined4 param_3)

{
  int iVar1;
  undefined4 *puVar2;
  int *piVar3;
  undefined8 local_20 [3];
  
  if (param_1 < 3) {
    puVar2 = (undefined4 *)FUN_005d5904(param_1,param_2,param_3,local_20);
    local_20[0] = 0xffffffffffffffff;
    *puVar2 = 0x8001002a;
  }
  else {
    iVar1 = syscall::syscall_sys_fs_lseek();
    if (iVar1 != 0) {
      piVar3 = (int *)FUN_005d5904();
      local_20[0] = 0xffffffffffffffff;
      *piVar3 = iVar1;
    }
  }
  return local_20[0];
}



//==== 005cf554  ns=Global  size=0x64
// sig: undefined FUN_005cf554(void)
// callers(2): 005c4f10 FUN_005c4f10; 005f3cc0 FUN_005f3cc0
// callees(2): 005d5904 FUN_005d5904; 08000324 syscall::syscall_sys_fs_close

undefined4 FUN_005cf554(uint param_1)

{
  int iVar1;
  int *piVar2;
  
  if ((2 < param_1) && (iVar1 = syscall::syscall_sys_fs_close(param_1), iVar1 != 0)) {
    piVar2 = (int *)FUN_005d5904();
    *piVar2 = iVar1;
    return 0xffffffff;
  }
  return 0;
}



//==== 005cf5b8  ns=Global  size=0x98
// sig: undefined FUN_005cf5b8(void)
// callers(2): 005d68b0 FUN_005d68b0; 005f3b70 FUN_005f3b70
// callees(2): 005d5904 FUN_005d5904; 08000321 syscall::syscall_sys_fs_open

undefined4 FUN_005cf5b8(undefined4 param_1,uint param_2,undefined8 param_3)

{
  undefined4 uVar1;
  int iVar2;
  int *piVar3;
  undefined8 uStack00000040;
  undefined4 local_20 [6];
  
  uStack00000040._4_4_ = 0;
  if ((param_2 & 0x40) != 0) {
    uStack00000040._4_4_ = (undefined4)param_3;
  }
  uVar1 = uStack00000040._4_4_;
  uStack00000040 = param_3;
  iVar2 = syscall::syscall_sys_fs_open(param_1,param_2,local_20,uVar1,0,0);
  if (iVar2 != 0) {
    piVar3 = (int *)FUN_005d5904();
    local_20[0] = 0xffffffff;
    *piVar3 = iVar2;
  }
  return local_20[0];
}



//==== 005cf650  ns=Global  size=0x17c
// sig: undefined FUN_005cf650(void)
// callers(0): 
// callees(2): 005cc8d8 libc::strcpy; 005d5904 FUN_005d5904

undefined4 * FUN_005cf650(int *param_1)

{
  int iVar1;
  int *piVar2;
  undefined4 *puVar3;
  byte in_cr0;
  byte in_cr1;
  byte in_cr2;
  byte in_cr3;
  byte unaff_cr4;
  byte in_cr5;
  byte in_cr6;
  byte in_cr7;
  uint uStack00000008;
  longlong local_130;
  undefined1 local_128 [2];
  char acStack_126 [270];
  
  uStack00000008 =
       (uint)(in_cr0 & 0xf) << 0x1c | (uint)(in_cr1 & 0xf) << 0x18 | (uint)(in_cr2 & 0xf) << 0x14 |
       (uint)(in_cr3 & 0xf) << 0x10 | (uint)(unaff_cr4 & 0xf) << 0xc | (uint)(in_cr5 & 0xf) << 8 |
       (uint)(in_cr6 & 0xf) << 4 | (uint)(in_cr7 & 0xf);
  if (param_1 == (int *)0x0) {
    puVar3 = (undefined4 *)FUN_005d5904();
    *puVar3 = 0x8001000d;
  }
  else {
    syscall();
    if (param_1[4] == 0) {
      if (param_1[2] < param_1[3]) {
        iVar1 = *param_1;
        syscall();
        if (iVar1 == 0) {
          if (local_130 != 0) {
            puVar3 = (undefined4 *)(param_1[2] * 0x10c + param_1[1]);
            puVar3[1] = 0;
            *(undefined2 *)(puVar3 + 2) = 0;
            *puVar3 = 0;
            *(undefined1 *)((int)puVar3 + 10) = local_128[0];
            libc::strcpy((char *)((int)puVar3 + 0xb),acStack_126);
            param_1[2] = param_1[2] + 1;
            syscall();
            return puVar3;
          }
        }
        else {
          piVar2 = (int *)FUN_005d5904(iVar1,local_128,&local_130);
          *piVar2 = iVar1;
        }
      }
      syscall();
      return (undefined4 *)0x0;
    }
    puVar3 = (undefined4 *)FUN_005d5904(param_1[4],0);
    *puVar3 = 0x8001002a;
  }
  return (undefined4 *)0x0;
}



//==== 005cf7cc  ns=Global  size=0x108
// sig: undefined FUN_005cf7cc(void)
// callers(0): 
// callees(3): 005d580c FUN_005d580c; 005d5904 FUN_005d5904; 08000066 syscall::syscall_sys_mutex_lock

undefined4 FUN_005cf7cc(undefined4 *param_1)

{
  int iVar1;
  int *piVar2;
  undefined4 *puVar3;
  undefined4 uVar4;
  
  if (param_1 == (undefined4 *)0x0) {
    puVar3 = (undefined4 *)FUN_005d5904(0,0);
    uVar4 = 0xffffffff;
    *puVar3 = 0x8001000d;
  }
  else {
    iVar1 = syscall::syscall_sys_mutex_lock(param_1[4]);
    if (iVar1 == 0) {
      iVar1 = syscall::syscall_sys_mutex_lock(*param_1);
      if (iVar1 == 0) {
        syscall::syscall_sys_mutex_lock(param_1[4]);
        syscall::syscall_sys_mutex_lock(param_1[4]);
        FUN_005d580c(param_1[1]);
        FUN_005d580c(param_1);
        uVar4 = 0;
      }
      else {
        piVar2 = (int *)FUN_005d5904();
        *piVar2 = iVar1;
        syscall::syscall_sys_mutex_lock(param_1[4]);
        uVar4 = 0xffffffff;
      }
    }
    else {
      puVar3 = (undefined4 *)FUN_005d5904();
      uVar4 = 0xffffffff;
      *puVar3 = 0x8001002a;
    }
  }
  return uVar4;
}



//==== 005cf8d4  ns=Global  size=0x23c
// sig: undefined FUN_005cf8d4(void)
// callers(0): 
// callees(4): 005d580c FUN_005d580c; 005d5838 FUN_005d5838; 005d5904 FUN_005d5904; 08000325 syscall::syscall_sys_fs_opendir

undefined4 * FUN_005cf8d4(undefined8 param_1)

{
  int iVar1;
  int *piVar2;
  undefined4 *puVar3;
  int iVar4;
  undefined4 local_170;
  undefined4 local_16c;
  longlong local_168;
  undefined1 local_160 [40];
  undefined1 auStack_138 [272];
  
  iVar1 = syscall::syscall_sys_fs_opendir(param_1,&local_16c);
  if (iVar1 == 0) {
    iVar1 = syscall::syscall_sys_fs_opendir(local_16c,auStack_138,&local_168);
    if (iVar1 == 0) {
      iVar4 = 0;
      if (local_168 == 0) {
        iVar4 = 0;
      }
      else {
        do {
          iVar1 = syscall::syscall_sys_fs_opendir(local_16c,auStack_138,&local_168);
          iVar4 = iVar4 + 1;
          if (iVar1 != 0) goto LAB_005cf984;
        } while (local_168 != 0);
      }
      syscall::syscall_sys_fs_opendir(local_16c);
      iVar1 = syscall::syscall_sys_fs_opendir(param_1,&local_170);
      if (iVar1 == 0) {
        iVar1 = FUN_005d5838(iVar4 * 0x10c);
        puVar3 = (undefined4 *)FUN_005d5838(0x14);
        if (iVar1 == 0) {
          if (puVar3 != (undefined4 *)0x0) {
            FUN_005d580c(puVar3);
          }
        }
        else {
          if (puVar3 != (undefined4 *)0x0) {
            *puVar3 = local_170;
            puVar3[1] = iVar1;
            puVar3[2] = 0;
            puVar3[3] = iVar4;
            syscall::syscall_sys_fs_opendir(puVar3 + 4,local_160);
            return puVar3;
          }
          FUN_005d580c(iVar1);
        }
        syscall::syscall_sys_fs_opendir(local_170);
        puVar3 = (undefined4 *)FUN_005d5904();
        *puVar3 = 0x80010004;
        return (undefined4 *)0x0;
      }
    }
    else {
LAB_005cf984:
      syscall::syscall_sys_fs_opendir(local_16c);
    }
  }
  piVar2 = (int *)FUN_005d5904();
  *piVar2 = iVar1;
  return (undefined4 *)0x0;
}



//==== 005cfb10  ns=Global  size=0x8c
// sig: undefined FUN_005cfb10(void)
// callers(3): 005c8bdc FUN_005c8bdc; 005c91f4 FUN_005c91f4; 005c9568 FUN_005c9568
// callees(2): 005d5904 FUN_005d5904; 08000332 syscall::syscall_sys_fs_lseek

undefined4 FUN_005cfb10(uint param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  undefined4 *puVar2;
  int *piVar3;
  undefined1 auStack_20 [4];
  undefined4 local_1c;
  
  if (param_1 < 3) {
    puVar2 = (undefined4 *)FUN_005d5904(param_1,param_2,param_3,auStack_20);
    local_1c = 0xffffffff;
    *puVar2 = 0x8001002a;
  }
  else {
    iVar1 = syscall::syscall_sys_fs_lseek();
    if (iVar1 != 0) {
      piVar3 = (int *)FUN_005d5904();
      local_1c = 0xffffffff;
      *piVar3 = iVar1;
    }
  }
  return local_1c;
}



//==== 005cfb9c  ns=Global  size=0x54
// sig: undefined FUN_005cfb9c(void)
// callers(0): 
// callees(2): 005d5904 FUN_005d5904; 0800033f syscall::syscall_sys_fs_truncate

undefined4 FUN_005cfb9c(void)

{
  int iVar1;
  undefined4 uVar2;
  int *piVar3;
  
  iVar1 = syscall::syscall_sys_fs_truncate();
  uVar2 = 0;
  if (iVar1 != 0) {
    piVar3 = (int *)FUN_005d5904();
    *piVar3 = iVar1;
    uVar2 = 0xffffffff;
  }
  return uVar2;
}



//==== 005cfbf0  ns=Global  size=0x54
// sig: undefined FUN_005cfbf0(void)
// callers(0): 
// callees(2): 005d5904 FUN_005d5904; 08000340 syscall::syscall_sys_fs_ftruncate

undefined4 FUN_005cfbf0(void)

{
  int iVar1;
  undefined4 uVar2;
  int *piVar3;
  
  iVar1 = syscall::syscall_sys_fs_ftruncate();
  uVar2 = 0;
  if (iVar1 != 0) {
    piVar3 = (int *)FUN_005d5904();
    *piVar3 = iVar1;
    uVar2 = 0xffffffff;
  }
  return uVar2;
}



//==== 005cfc44  ns=Global  size=0x228
// sig: undefined FUN_005cfc44(void)
// callers(4): 005c91f4 FUN_005c91f4; 005f3d78 FUN_005f3d78; 005f44f0 FUN_005f44f0; 005f4738 FUN_005f4738
// callees(3): 005c8510 libc::strlen; 005d5904 FUN_005d5904; 08000193 syscall::syscall_sys_tty_write
// strings: 0067ecc8: 'read: reading from stdout or stderr (fd 1 & 2) not allowed\n'

int FUN_005cfc44(int param_1,int param_2,uint param_3)

{
  undefined *puVar1;
  int iVar2;
  int *piVar3;
  size_t sVar4;
  undefined4 *puVar5;
  ulonglong uVar6;
  char local_40 [4];
  undefined1 auStack_3c [4];
  undefined1 auStack_38 [4];
  int local_34;
  
  puVar1 = PTR_s_read__reading_from_stdout_or_std_0071c410;
  if (param_1 == 0) {
    if (param_2 == 0) {
      puVar5 = (undefined4 *)FUN_005d5904();
      local_34 = -1;
      *puVar5 = 0x8001000d;
    }
    else {
      local_34 = 0;
      if (0 < (int)param_3) {
        iVar2 = syscall::syscall_sys_tty_write(0,local_40,1,auStack_3c);
        uVar6 = (ulonglong)param_3;
        while( true ) {
          if (iVar2 != 0) {
            piVar3 = (int *)FUN_005d5904();
            *piVar3 = iVar2;
            return -1;
          }
          if (local_40[0] == '\r') {
            local_40[0] = '\n';
            *(char *)(local_34 + param_2) = '\n';
          }
          else {
            *(char *)(local_34 + param_2) = local_40[0];
          }
          if (local_40[0] == '\n') {
            return local_34 + 1;
          }
          uVar6 = uVar6 - 1;
          local_34 = local_34 + 1;
          if (uVar6 == 0) break;
          iVar2 = syscall::syscall_sys_tty_write(0,local_40,1,auStack_3c);
        }
      }
    }
  }
  else if (param_1 - 1U < 2) {
    sVar4 = libc::strlen(PTR_s_read__reading_from_stdout_or_std_0071c410);
    syscall::syscall_sys_tty_write(1,puVar1,sVar4,auStack_3c);
    puVar5 = (undefined4 *)FUN_005d5904();
    local_34 = -1;
    *puVar5 = 0x80010002;
  }
  else {
    iVar2 = syscall::syscall_sys_tty_write(param_1,param_2,param_3,auStack_38);
    if (iVar2 != 0) {
      local_34 = -1;
      piVar3 = (int *)FUN_005d5904();
      *piVar3 = iVar2;
    }
  }
  return local_34;
}



//==== 005cfe6c  ns=Global  size=0x13c
// sig: undefined FUN_005cfe6c(void)
// callers(1): 005c50cc FUN_005c50cc
// callees(2): 005c8510 libc::strlen; 005d5904 FUN_005d5904
// strings: 0067ed08: 'write: writing from stdin (fd 0) not allowed\n'

undefined4 FUN_005cfe6c(int param_1,int param_2,ulonglong param_3)

{
  bool bVar1;
  undefined *puVar2;
  uint *puVar3;
  size_t sVar4;
  undefined4 *puVar5;
  int *piVar6;
  undefined1 auStack_30 [8];
  undefined1 auStack_28 [4];
  uint local_24;
  
  puVar2 = PTR_s_write__writing_from_stdin__fd_0__0071c414;
  if (param_1 - 1U < 2) {
    if (param_2 == 0) {
      puVar5 = (undefined4 *)FUN_005d5904();
      param_3 = 0xffffffffffffffff;
      *puVar5 = 0x8001000d;
    }
    else {
      bVar1 = param_1 != 1;
      syscall();
      if (bVar1) {
        puVar3 = (uint *)FUN_005d5904(bVar1,param_2,param_3,auStack_30);
        param_3 = 0xffffffffffffffff;
        *puVar3 = (uint)bVar1;
      }
    }
  }
  else if (param_1 == 0) {
    sVar4 = libc::strlen(PTR_s_write__writing_from_stdin__fd_0__0071c414);
    syscall();
    puVar5 = (undefined4 *)FUN_005d5904(1,puVar2,sVar4,auStack_30);
    param_3 = 0xffffffffffffffff;
    *puVar5 = 0x80010002;
  }
  else {
    syscall();
    if (param_1 == 0) {
      param_3 = (ulonglong)local_24;
    }
    else {
      piVar6 = (int *)FUN_005d5904(param_1,param_2,param_3 & 0xffffffff,auStack_28);
      param_3 = 0xffffffffffffffff;
      *piVar6 = param_1;
    }
  }
  return (int)param_3;
}



//==== 005cffa8  ns=Global  size=0x64
// sig: undefined FUN_005cffa8(void)
// callers(1): 00014c7c boot::entry
// callees(0): 

void FUN_005cffa8(void)

{
  undefined *puVar1;
  int iVar2;
  longlong lVar3;
  
  puVar1 = PTR_DAT_0071c418;
  lVar3 = 0xfd;
  *(undefined4 *)(PTR_DAT_0071c418 + 4) = 1;
  *(undefined4 *)(puVar1 + 8) = 2;
  *(undefined4 *)(puVar1 + 0x408) = 0;
  *(undefined4 *)puVar1 = 0;
  *(undefined4 *)(puVar1 + 0x400) = 0;
  *(undefined4 *)(puVar1 + 0x404) = 0;
  iVar2 = 0;
  do {
    *(undefined4 *)(puVar1 + iVar2 + 0xc) = 0xffffffff;
    *(undefined4 *)(puVar1 + iVar2 + 0x40c) = 0;
    lVar3 = lVar3 + -1;
    iVar2 = iVar2 + 4;
  } while (lVar3 != 0);
  return;
}



