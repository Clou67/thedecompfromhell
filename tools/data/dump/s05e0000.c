//==== 005e007c  ns=Global  size=0x1a0
// sig: undefined FUN_005e007c(void)
// callers(4): 005e061c FUN_005e061c; 005e0a54 FUN_005e0a54; 005e0c94 FUN_005e0c94; 005e0ed4 FUN_005e0ed4
// callees(2): 005c4840 idol::abort; 005c5ad0 libc::memcpy

int FUN_005e007c(int param_1,int param_2)

{
  bool bVar1;
  char cVar2;
  void *__src;
  void *__dest;
  undefined *puVar3;
  int iVar4;
  byte *pbVar5;
  ulonglong local_50 [2];
  
  puVar3 = PTR_DAT_0071c728;
  if (*(int *)(param_2 + 4) == 0) {
    if (PTR_DAT_0071c728[1] == '\x04') {
      local_50[0] = CONCAT44(*(uint *)(param_2 + 0x248),local_50[0]._4_4_);
    }
    else {
      if (PTR_DAT_0071c728[1] != '\b') goto LAB_005e0218;
      local_50[0] = (ulonglong)*(uint *)(param_2 + 0x248);
    }
    *(ulonglong **)(param_2 + 4) = local_50;
  }
  iVar4 = 0;
  pbVar5 = puVar3;
  do {
    __src = *(void **)(iVar4 + param_2);
    __dest = *(void **)(iVar4 + param_1);
    if (((__src != (void *)0x0) && (__dest != (void *)0x0)) && (__dest != __src)) {
      libc::memcpy(__dest,__src,(uint)*pbVar5);
    }
    bVar1 = iVar4 != 0x240;
    pbVar5 = pbVar5 + 1;
    iVar4 = iVar4 + 4;
  } while (bVar1);
  if (*(int *)(param_1 + 4) != 0) {
    return 0;
  }
  cVar2 = puVar3[1];
  if (cVar2 == '\x04') {
    iVar4 = **(int **)(param_2 + 4);
  }
  else {
    if (cVar2 != '\b') {
LAB_005e0218:
                    /* WARNING: Subroutine does not return */
      idol::abort();
    }
    iVar4 = (int)*(undefined8 *)*(int **)(param_2 + 4);
  }
  return (iVar4 - *(int *)(param_1 + 0x248)) + (int)*(undefined8 *)(param_2 + 0x260);
}



//==== 005e0220  ns=Global  size=0xbc
// sig: undefined FUN_005e0220(void)
// callers(4): 005e02e0 FUN_005e02e0; 005e050c FUN_005e050c; 005e061c FUN_005e061c; 005e0918 FUN_005e0918
// callees(2): 005c4840 idol::abort; 005dfa80 FUN_005dfa80

void FUN_005e0220(int param_1,int param_2)

{
  undefined8 *puVar1;
  ulonglong uVar2;
  
  FUN_005dfa80();
  uVar2 = (ulonglong)*(uint *)(param_2 + 0x95c);
  if (0x4b0 < (int)*(uint *)(param_2 + 0x95c)) {
    uVar2 = uVar2 - 0x43f;
  }
  if ((int)uVar2 < 0x92) {
    puVar1 = *(undefined8 **)(param_1 + (int)((uVar2 & 0xffffffff) << 2));
    if (PTR_DAT_0071c728[(int)uVar2] == '\x04') {
      *(undefined4 *)(param_1 + 0x24c) = *(undefined4 *)puVar1;
      return;
    }
    if (PTR_DAT_0071c728[(int)uVar2] == '\b') {
      *(int *)(param_1 + 0x24c) = (int)*puVar1;
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  idol::abort();
}



//==== 005e02e0  ns=Global  size=0x22c
// sig: undefined FUN_005e02e0(void)
// callers(0): 
// callees(3): 005deaa8 FUN_005deaa8; 005dfd88 FUN_005dfd88; 005e0220 FUN_005e0220

/* WARNING: Heritage AFTER dead removal. Example location: x0x00000010 : 0x005e038c */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

undefined4 FUN_005e02e0(undefined4 *param_1,undefined4 param_2)

{
  int iVar1;
  int iVar2;
  byte in_cr0;
  byte in_cr1;
  byte in_cr2;
  byte in_cr3;
  byte unaff_cr4;
  byte in_cr5;
  byte in_cr6;
  byte in_cr7;
  undefined4 in_LR;
  uint uStack00000008;
  undefined1 auStack_d20 [616];
  undefined1 auStack_ab8 [2456];
  
  uStack00000008 =
       (uint)(in_cr0 & 0xf) << 0x1c | (uint)(in_cr1 & 0xf) << 0x18 | (uint)(in_cr2 & 0xf) << 0x14 |
       (uint)(in_cr3 & 0xf) << 0x10 | (uint)(unaff_cr4 & 0xf) << 0xc | (uint)(in_cr5 & 0xf) << 8 |
       (uint)(in_cr6 & 0xf) << 4 | (uint)(in_cr7 & 0xf);
  FUN_005dfd88(auStack_d20,&stack0x00000000,in_LR);
  while( true ) {
    iVar1 = FUN_005deaa8(auStack_d20,auStack_ab8);
    if ((iVar1 != 0) && (iVar1 != 5)) {
      return 3;
    }
    iVar2 = (*(code *)*param_1)(auStack_d20,param_2);
    if (iVar2 != 0) {
      return 3;
    }
    if (iVar1 == 5) break;
    FUN_005e0220(auStack_d20,auStack_ab8);
  }
  return 5;
}



//==== 005e050c  ns=Global  size=0x10c
// sig: undefined FUN_005e050c(void)
// callers(2): 005e061c FUN_005e061c; 005e0c94 FUN_005e0c94
// callees(3): 005c4840 idol::abort; 005deaa8 FUN_005deaa8; 005e0220 FUN_005e0220

undefined4 FUN_005e050c(undefined8 *param_1,int param_2)

{
  uint uVar1;
  ulonglong uVar2;
  int iVar3;
  ulonglong uVar4;
  undefined1 auStack_9a0 [2372];
  undefined4 *local_5c;
  
  do {
    iVar3 = FUN_005deaa8(param_2,auStack_9a0);
    uVar2 = (ulonglong)*(uint *)(param_2 + 0x24c) ^ param_1[3];
    uVar4 = (longlong)uVar2 >> 0x3f;
    if (iVar3 != 0) {
      return 2;
    }
    uVar1 = (uint)((((uVar4 ^ uVar2) - uVar4) - 1 >> 0x3f) << 2);
    if (local_5c != (undefined4 *)0x0) {
      iVar3 = (*(code *)*local_5c)(1,uVar1 | 2,*param_1,param_1,param_2);
      if (iVar3 == 7) {
        return 7;
      }
      if (iVar3 != 8) {
        return 2;
      }
    }
    if (uVar1 != 0) {
                    /* WARNING: Subroutine does not return */
      idol::abort();
    }
    FUN_005e0220(param_2,auStack_9a0);
  } while( true );
}



//==== 005e061c  ns=Global  size=0x2fc
// sig: undefined FUN_005e061c(void)
// callers(1): 005e0a54 FUN_005e0a54
// callees(6): 005c5ad0 libc::memcpy; 005deaa8 FUN_005deaa8; 005dfd88 FUN_005dfd88; 005e007c FUN_005e007c; 005e0220 FUN_005e0220; 005e050c FUN_005e050c

/* WARNING: Heritage AFTER dead removal. Example location: x0x00000010 : 0x005e06e0 */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

undefined8 * FUN_005e061c(undefined8 *param_1)

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
  undefined4 in_LR;
  uint uStack00000008;
  undefined1 auStack_fd0 [616];
  undefined1 auStack_d68 [588];
  uint local_b1c;
  undefined1 auStack_b00 [2372];
  undefined4 *local_1bc;
  
  uStack00000008 =
       (uint)(in_cr0 & 0xf) << 0x1c | (uint)(in_cr1 & 0xf) << 0x18 | (uint)(in_cr2 & 0xf) << 0x14 |
       (uint)(in_cr3 & 0xf) << 0x10 | (uint)(unaff_cr4 & 0xf) << 0xc | (uint)(in_cr5 & 0xf) << 8 |
       (uint)(in_cr6 & 0xf) << 4 | (uint)(in_cr7 & 0xf);
  FUN_005dfd88(auStack_fd0,&stack0x00000000,in_LR);
  libc::memcpy(auStack_d68,auStack_fd0,0x268);
  do {
    iVar1 = FUN_005deaa8(auStack_d68,auStack_b00);
    if (iVar1 == 5) {
      return param_1;
    }
    if (iVar1 != 0) {
      return param_1;
    }
    if (local_1bc != (undefined4 *)0x0) {
      iVar1 = (*(code *)*local_1bc)(1,1,*param_1,param_1,auStack_d68);
      if (iVar1 == 6) {
        param_1[3] = (ulonglong)local_b1c;
        param_1[2] = 0;
        libc::memcpy(auStack_d68,auStack_fd0,0x268);
        iVar1 = FUN_005e050c(param_1,auStack_d68);
        if (iVar1 == 7) {
          FUN_005e007c(auStack_fd0,auStack_d68);
        }
        return param_1;
      }
      if (iVar1 != 8) {
        return param_1;
      }
    }
    FUN_005e0220(auStack_d68,auStack_b00);
  } while( true );
}



//==== 005e0918  ns=Global  size=0x13c
// sig: undefined FUN_005e0918(void)
// callers(3): 005e0a54 FUN_005e0a54; 005e0c94 FUN_005e0c94; 005e0ed4 FUN_005e0ed4
// callees(2): 005deaa8 FUN_005deaa8; 005e0220 FUN_005e0220

undefined4 FUN_005e0918(undefined8 *param_1,undefined8 param_2)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  undefined1 auStack_9b0 [2372];
  undefined4 *local_6c;
  
  uVar1 = *(undefined4 *)((int)param_1 + 0x1c);
  puVar2 = *(undefined4 **)((int)param_1 + 0x14);
  do {
    iVar3 = FUN_005deaa8(param_2,auStack_9b0);
    uVar5 = 10;
    if (iVar3 != 0) {
      if (iVar3 != 5) {
        return 2;
      }
      uVar5 = 0x1a;
    }
    iVar4 = (*(code *)*puVar2)(1,uVar5,*param_1,param_1,param_2,uVar1);
    if (iVar4 != 0) {
      return 2;
    }
    if (iVar3 == 5) {
      return 5;
    }
    if (local_6c != (undefined4 *)0x0) {
      iVar3 = (*(code *)*local_6c)(1,10,*param_1,param_1,param_2);
      if (iVar3 == 7) {
        return 7;
      }
      if (iVar3 != 8) {
        return 2;
      }
    }
    FUN_005e0220(param_2,auStack_9b0);
  } while( true );
}



//==== 005e0a54  ns=Global  size=0x23c
// sig: undefined FUN_005e0a54(void)
// callers(0): 
// callees(6): 005c4840 idol::abort; 005c5ad0 libc::memcpy; 005dfd88 FUN_005dfd88; 005e007c FUN_005e007c; 005e061c FUN_005e061c; 005e0918 FUN_005e0918

/* WARNING: Heritage AFTER dead removal. Example location: x0x00000010 : 0x005e0b18 */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

int FUN_005e0a54(int param_1)

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
  undefined4 in_LR;
  uint uStack00000008;
  undefined1 auStack_630 [616];
  undefined1 auStack_3c8 [680];
  
  uStack00000008 =
       (uint)(in_cr0 & 0xf) << 0x1c | (uint)(in_cr1 & 0xf) << 0x18 | (uint)(in_cr2 & 0xf) << 0x14 |
       (uint)(in_cr3 & 0xf) << 0x10 | (uint)(unaff_cr4 & 0xf) << 0xc | (uint)(in_cr5 & 0xf) << 8 |
       (uint)(in_cr6 & 0xf) << 4 | (uint)(in_cr7 & 0xf);
  if (*(longlong *)(param_1 + 0x10) == 0) {
    FUN_005e061c(param_1);
  }
  else {
    FUN_005dfd88(auStack_630,&stack0x00000000,in_LR);
    libc::memcpy(auStack_3c8,auStack_630,0x268);
    iVar1 = FUN_005e0918(param_1,auStack_3c8);
    if (iVar1 != 7) {
                    /* WARNING: Subroutine does not return */
      idol::abort();
    }
    FUN_005e007c(auStack_630,auStack_3c8);
  }
  return param_1;
}



//==== 005e0c94  ns=Global  size=0x23c
// sig: undefined FUN_005e0c94(void)
// callers(0): 
// callees(6): 005c4840 idol::abort; 005c5ad0 libc::memcpy; 005dfd88 FUN_005dfd88; 005e007c FUN_005e007c; 005e050c FUN_005e050c; 005e0918 FUN_005e0918

/* WARNING: Heritage AFTER dead removal. Example location: x0x00000010 : 0x005e0d58 */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

int FUN_005e0c94(int param_1)

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
  undefined4 in_LR;
  uint uStack00000008;
  undefined1 auStack_640 [616];
  undefined1 auStack_3d8 [696];
  
  uStack00000008 =
       (uint)(in_cr0 & 0xf) << 0x1c | (uint)(in_cr1 & 0xf) << 0x18 | (uint)(in_cr2 & 0xf) << 0x14 |
       (uint)(in_cr3 & 0xf) << 0x10 | (uint)(unaff_cr4 & 0xf) << 0xc | (uint)(in_cr5 & 0xf) << 8 |
       (uint)(in_cr6 & 0xf) << 4 | (uint)(in_cr7 & 0xf);
  FUN_005dfd88(auStack_640,&stack0x00000000,in_LR);
  libc::memcpy(auStack_3d8,auStack_640,0x268);
  if (*(longlong *)(param_1 + 0x10) == 0) {
    iVar1 = FUN_005e050c(param_1,auStack_3d8);
  }
  else {
    iVar1 = FUN_005e0918(param_1,auStack_3d8);
  }
  if (iVar1 != 7) {
                    /* WARNING: Subroutine does not return */
    idol::abort();
  }
  FUN_005e007c(auStack_640,auStack_3d8);
  return param_1;
}



//==== 005e0ed4  ns=Global  size=0x244
// sig: undefined FUN_005e0ed4(void)
// callers(0): 
// callees(4): 005c5ad0 libc::memcpy; 005dfd88 FUN_005dfd88; 005e007c FUN_005e007c; 005e0918 FUN_005e0918

/* WARNING: Heritage AFTER dead removal. Example location: x0x00000010 : 0x005e0f98 */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

int FUN_005e0ed4(int param_1,ulonglong param_2,ulonglong param_3)

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
  undefined4 in_LR;
  uint uStack00000008;
  undefined1 auStack_640 [616];
  undefined1 auStack_3d8 [696];
  
  uStack00000008 =
       (uint)(in_cr0 & 0xf) << 0x1c | (uint)(in_cr1 & 0xf) << 0x18 | (uint)(in_cr2 & 0xf) << 0x14 |
       (uint)(in_cr3 & 0xf) << 0x10 | (uint)(unaff_cr4 & 0xf) << 0xc | (uint)(in_cr5 & 0xf) << 8 |
       (uint)(in_cr6 & 0xf) << 4 | (uint)(in_cr7 & 0xf);
  FUN_005dfd88(auStack_640,&stack0x00000000,in_LR);
  libc::memcpy(auStack_3d8,auStack_640,0x268);
  *(ulonglong *)(param_1 + 0x18) = param_3 & 0xffffffff;
  *(ulonglong *)(param_1 + 0x10) = param_2 & 0xffffffff;
  iVar1 = FUN_005e0918(param_1,auStack_3d8);
  if (iVar1 == 7) {
    FUN_005e007c(auStack_640,auStack_3d8);
  }
  return param_1;
}



//==== 005e1118  ns=Global  size=0x38
// sig: undefined FUN_005e1118(void)
// callers(1): 005e17c4 FUN_005e17c4
// callees(0): 

byte * FUN_005e1118(byte *param_1,ulonglong *param_2)

{
  byte bVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  
  uVar4 = 0;
  uVar3 = 0;
  do {
    bVar1 = *param_1;
    param_1 = param_1 + 1;
    uVar2 = uVar4 & 0x7f;
    uVar4 = uVar4 + 7;
    uVar3 = uVar3 | ((ulonglong)bVar1 & 0x7f) << uVar2;
  } while ((char)bVar1 < '\0');
  *param_2 = uVar3;
  return param_1;
}



//==== 005e1150  ns=Global  size=0x58
// sig: undefined FUN_005e1150(void)
// callers(1): 005e17c4 FUN_005e17c4
// callees(0): 

byte * FUN_005e1150(byte *param_1,ulonglong *param_2)

{
  byte bVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  
  uVar4 = 0;
  uVar3 = 0;
  do {
    bVar1 = *param_1;
    param_1 = param_1 + 1;
    uVar2 = uVar4 & 0x7f;
    uVar4 = uVar4 + 7;
    uVar3 = uVar3 | ((ulonglong)bVar1 & 0x7f) << uVar2;
  } while ((char)bVar1 < '\0');
  if (((uVar4 & 0xffffffff) < 0x40) && ((bVar1 & 0x40) != 0)) {
    uVar3 = uVar3 | -1L << (uVar4 & 0x7f);
  }
  *param_2 = uVar3;
  return param_1;
}



//==== 005e11a8  ns=Global  size=0x28
// sig: undefined FUN_005e11a8(void)
// callers(0): 
// callees(0): 

undefined4 FUN_005e11a8(undefined8 param_1,int param_2,int param_3)

{
  undefined4 uVar1;
  
  uVar1 = 1;
  if ((*(uint *)(param_2 + 8) <= *(uint *)(param_3 + 8)) &&
     (uVar1 = 0xffffffff, *(uint *)(param_3 + 8) <= *(uint *)(param_2 + 8))) {
    uVar1 = 0;
  }
  return uVar1;
}



//==== 005e11d0  ns=Global  size=0x13c
// sig: undefined FUN_005e11d0(void)
// callers(1): 005e130c FUN_005e130c
// callees(0): 

void FUN_005e11d0(undefined4 param_1,undefined4 *param_2,int param_3,ulonglong param_4,int param_5)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  int iVar3;
  int iVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  undefined4 *puVar7;
  
  uVar5 = (param_4 & 0x7fffffff) * 2 + 1;
  iVar4 = (int)uVar5;
  while( true ) {
    if (param_5 <= iVar4) {
      return;
    }
    iVar4 = (int)(uVar5 + 1);
    puVar7 = (undefined4 *)(param_3 + (int)uVar5 * 4);
    uVar6 = uVar5;
    if (iVar4 < param_5) {
      iVar3 = (*(code *)*param_2)(param_1,*puVar7,puVar7[1]);
      if (iVar3 < 0) {
        uVar6 = uVar5 + 1;
        puVar7 = (undefined4 *)(param_3 + iVar4 * 4);
      }
    }
    puVar2 = (undefined4 *)((int)((param_4 & 0xffffffff) << 2) + param_3);
    iVar3 = (*(code *)*param_2)(param_1,*puVar2,*puVar7);
    uVar5 = (uVar6 & 0x7fffffff) * 2 + 1;
    iVar4 = (int)uVar5;
    if (-1 < iVar3) break;
    uVar1 = *puVar2;
    *puVar2 = *puVar7;
    *puVar7 = uVar1;
    param_4 = uVar6;
  }
  return;
}



//==== 005e130c  ns=Global  size=0x118
// sig: undefined FUN_005e130c(void)
// callers(1): 005e2318 FUN_005e2318
// callees(1): 005e11d0 FUN_005e11d0

void FUN_005e130c(undefined4 param_1,undefined4 param_2,int param_3)

{
  uint uVar1;
  undefined4 uVar2;
  uint uVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  int iVar6;
  int iVar7;
  
  uVar1 = *(uint *)(param_3 + 4);
  uVar3 = uVar1 >> 1;
  puVar5 = (undefined4 *)(param_3 + 8);
  while (uVar3 = uVar3 - 1, -1 < (int)uVar3) {
    FUN_005e11d0(param_1,param_2,puVar5,uVar3,uVar1);
  }
  if (0 < (int)(uVar1 - 1)) {
    puVar4 = puVar5 + uVar1;
    iVar6 = uVar1 - 1;
    do {
      puVar4 = puVar4 + -1;
      uVar2 = *puVar5;
      iVar7 = iVar6 + -1;
      *puVar5 = *puVar4;
      *puVar4 = uVar2;
      FUN_005e11d0(param_1,param_2,puVar5,0,iVar6);
      iVar6 = iVar7;
    } while (0 < iVar7);
  }
  return;
}



//==== 005e1424  ns=Global  size=0x2c
// sig: undefined FUN_005e1424(void)
// callers(4): 005e1f08 FUN_005e1f08; 005e2040 FUN_005e2040; 005e2220 FUN_005e2220; 005e2adc FUN_005e2adc
// callees(1): 005e30a8 FUN_005e30a8

void FUN_005e1424(void)

{
  FUN_005e30a8(PTR_DAT_0071c740,PTR_PTR_0071c744);
  return;
}



//==== 005e1450  ns=Global  size=0x2c
// sig: undefined FUN_005e1450(void)
// callers(0): 
// callees(1): 005e2ec8 FUN_005e2ec8

void FUN_005e1450(void)

{
  FUN_005e2ec8(ZEXT48(PTR_DAT_0071c740) + 8);
  return;
}



//==== 005e147c  ns=Global  size=0x84
// sig: undefined FUN_005e147c(void)
// callers(7): 005e170c FUN_005e170c; 005e1984 FUN_005e1984; 005e1b6c FUN_005e1b6c; 005e1d3c FUN_005e1d3c; 005e2318 FUN_005e2318; 005e2adc FUN_005e2adc; 005e2d2c FUN_005e2d2c
// callees(1): 005c4840 idol::abort

undefined4 FUN_005e147c(uint param_1,int param_2)

{
  if (param_1 != 0xff) {
    param_1 = param_1 & 0x70;
    if (param_1 == 0x20) {
      return *(undefined4 *)(param_2 + 4);
    }
    if (param_1 < 0x21) {
      if ((param_1 != 0) && (param_1 != 0x10)) {
                    /* WARNING: Subroutine does not return */
        idol::abort();
      }
    }
    else {
      if (param_1 == 0x30) {
        return *(undefined4 *)(param_2 + 8);
      }
      if (param_1 != 0x50) {
                    /* WARNING: Subroutine does not return */
        idol::abort();
      }
    }
  }
  return 0;
}



//==== 005e1508  ns=Global  size=0xa8
// sig: undefined FUN_005e1508(void)
// callers(8): 005e170c FUN_005e170c; 005e17c4 FUN_005e17c4; 005e1984 FUN_005e1984; 005e1b6c FUN_005e1b6c; 005e1d3c FUN_005e1d3c; 005e2318 FUN_005e2318; 005e2adc FUN_005e2adc; 005e2d2c FUN_005e2d2c
// callees(1): 005c4840 idol::abort

undefined4 * FUN_005e1508(ulonglong param_1,undefined8 param_2,int param_3,undefined4 *param_4)

{
  undefined4 *puVar1;
  
  if (((uint)param_1 & 0xff) == 0x50) {
    puVar1 = (undefined4 *)(param_3 + 3U & 0xfffffffc);
    *param_4 = *puVar1;
    return puVar1 + 1;
  }
  if (0xc < (param_1 & 0xf)) {
                    /* WARNING: Subroutine does not return */
    idol::abort();
  }
                    /* WARNING: Could not recover jumptable at 0x005e1570. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  puVar1 = (undefined4 *)
           (*(code *)(PTR_DAT_0071c748 + *(int *)(PTR_DAT_0071c748 + (int)((param_1 & 0xf) << 2))))
                     ();
  return puVar1;
}



//==== 005e170c  ns=Global  size=0xb8
// sig: undefined FUN_005e170c(void)
// callers(0): 
// callees(2): 005e147c FUN_005e147c; 005e1508 FUN_005e1508

undefined4 FUN_005e170c(int param_1,int param_2,int param_3)

{
  undefined4 uVar1;
  uint local_40;
  uint local_3c [3];
  
  uVar1 = FUN_005e147c(*(uint *)(param_1 + 0x10) >> 0x15 & 0xff,param_1);
  FUN_005e1508(*(uint *)(param_1 + 0x10) >> 0x15 & 0xff,uVar1,param_2 + 8,&local_40);
  FUN_005e1508(*(uint *)(param_1 + 0x10) >> 0x15 & 0xff,uVar1,param_3 + 8,local_3c);
  uVar1 = 1;
  if ((local_40 <= local_3c[0]) && (uVar1 = 0xffffffff, local_3c[0] <= local_40)) {
    uVar1 = 0;
  }
  return uVar1;
}



//==== 005e17c4  ns=Global  size=0x13c
// sig: undefined FUN_005e17c4(void)
// callers(6): 005e1984 FUN_005e1984; 005e1b6c FUN_005e1b6c; 005e1d3c FUN_005e1d3c; 005e2318 FUN_005e2318; 005e2adc FUN_005e2adc; 005e2d2c FUN_005e2d2c
// callees(4): 005c8510 libc::strlen; 005e1118 FUN_005e1118; 005e1150 FUN_005e1150; 005e1508 FUN_005e1508

byte FUN_005e17c4(int param_1)

{
  char cVar1;
  size_t sVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  byte *pbVar6;
  char *pcVar7;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  undefined1 auStack_30 [16];
  
  pcVar7 = (char *)(param_1 + 9);
  if (*pcVar7 == 'z') {
    sVar2 = libc::strlen(pcVar7);
    uVar3 = FUN_005e1118(pcVar7 + sVar2 + 1,auStack_38);
    iVar4 = FUN_005e1150(uVar3,auStack_30);
    iVar5 = iVar4 + 1;
    if (*(char *)(param_1 + 8) != '\x01') {
      iVar5 = FUN_005e1118(iVar4,auStack_38);
    }
    pcVar7 = (char *)(param_1 + 10);
    pbVar6 = (byte *)FUN_005e1118(iVar5,auStack_38);
    cVar1 = *pcVar7;
    while( true ) {
      while( true ) {
        if (cVar1 == 'R') {
          return *pbVar6;
        }
        if (cVar1 != 'P') break;
        pbVar6 = (byte *)FUN_005e1508(*pbVar6 & 0x7f,0,pbVar6 + 1,auStack_40);
        pcVar7 = pcVar7 + 1;
        cVar1 = *pcVar7;
      }
      if (cVar1 != 'L') break;
      pcVar7 = pcVar7 + 1;
      cVar1 = *pcVar7;
      pbVar6 = pbVar6 + 1;
    }
  }
  return 0;
}



//==== 005e1900  ns=Global  size=0x80
// sig: undefined FUN_005e1900(void)
// callers(3): 005e1984 FUN_005e1984; 005e1b6c FUN_005e1b6c; 005e1d3c FUN_005e1d3c
// callees(1): 005c4840 idol::abort

undefined8 FUN_005e1900(uint param_1)

{
  undefined8 uVar1;
  
  if (param_1 == 0xff) {
    uVar1 = 0;
  }
  else {
    param_1 = param_1 & 7;
    if (param_1 == 2) {
      return 2;
    }
    if (param_1 < 3) {
      if (param_1 != 0) goto LAB_005e1934;
    }
    else if (param_1 != 3) {
      if (param_1 == 4) {
        return 8;
      }
LAB_005e1934:
                    /* WARNING: Subroutine does not return */
      idol::abort();
    }
    uVar1 = 4;
  }
  return uVar1;
}



//==== 005e1984  ns=Global  size=0x1e8
// sig: undefined FUN_005e1984(void)
// callers(1): 005e2318 FUN_005e2318
// callees(4): 005e147c FUN_005e147c; 005e1508 FUN_005e1508; 005e17c4 FUN_005e17c4; 005e1900 FUN_005e1900

int * FUN_005e1984(int param_1,int *param_2,int param_3)

{
  int iVar1;
  uint uVar2;
  undefined4 uVar4;
  uint uVar5;
  undefined4 uVar6;
  ulonglong uVar3;
  int iVar7;
  uint local_70;
  uint local_6c [5];
  
  uVar5 = *(uint *)(param_1 + 0x10) >> 0x15;
  uVar4 = FUN_005e147c(uVar5 & 0xff,param_1);
  if (*param_2 == 0) {
    return (int *)0x0;
  }
  uVar5 = uVar5 & 0xff;
  iVar7 = 0;
  do {
    while (param_2[1] == 0) {
LAB_005e1a38:
      param_2 = (int *)((int)param_2 + *param_2 + 4);
      if (*param_2 == 0) {
        return (int *)0x0;
      }
    }
    if (((*(uint *)(param_1 + 0x10) & 0x20000000) != 0) &&
       (iVar1 = (int)param_2 + (4 - param_2[1]), iVar7 != iVar1)) {
      uVar5 = FUN_005e17c4(iVar1);
      uVar4 = FUN_005e147c(uVar5 & 0xff,param_1);
      iVar7 = iVar1;
    }
    if (uVar5 == 0) {
      local_70 = param_2[2];
      local_6c[0] = param_2[3];
      if (local_70 != 0) goto LAB_005e1a28;
      goto LAB_005e1a38;
    }
    uVar6 = FUN_005e1508(uVar5 & 0xff,uVar4,param_2 + 2,&local_70);
    FUN_005e1508(uVar5 & 0xf,0,uVar6,local_6c);
    uVar3 = FUN_005e1900(uVar5 & 0xff);
    uVar2 = 0xffffffff;
    if ((uVar3 & 0xffffffff) < 4) {
      uVar2 = (1 << ((uint)((uVar3 & 0xffffffff) << 3) & 0x38)) - 1;
    }
    if ((uVar2 & local_70) != 0) {
LAB_005e1a28:
      if (param_3 - local_70 < local_6c[0]) {
        return param_2;
      }
      goto LAB_005e1a38;
    }
    param_2 = (int *)((int)param_2 + *param_2 + 4);
    if (*param_2 == 0) {
      return (int *)0x0;
    }
  } while( true );
}



//==== 005e1b6c  ns=Global  size=0x1d0
// sig: undefined FUN_005e1b6c(void)
// callers(1): 005e2318 FUN_005e2318
// callees(4): 005e147c FUN_005e147c; 005e1508 FUN_005e1508; 005e17c4 FUN_005e17c4; 005e1900 FUN_005e1900

void FUN_005e1b6c(int param_1,int *param_2,int *param_3)

{
  int iVar1;
  int iVar2;
  undefined4 uVar4;
  uint uVar5;
  ulonglong uVar3;
  uint uVar6;
  int iVar7;
  uint local_60 [4];
  
  uVar5 = *(uint *)(param_1 + 0x10) >> 0x15;
  uVar4 = FUN_005e147c(uVar5 & 0xff,param_1);
  if (*param_3 == 0) {
    return;
  }
  uVar5 = uVar5 & 0xff;
  iVar7 = 0;
  do {
    while (iVar2 = iVar7, param_3[1] == 0) {
LAB_005e1c20:
      param_3 = (int *)((int)param_3 + *param_3 + 4);
      iVar7 = iVar2;
      if (*param_3 == 0) {
        return;
      }
    }
    if (((*(uint *)(param_1 + 0x10) & 0x20000000) != 0) &&
       (iVar2 = (int)param_3 + (4 - param_3[1]), iVar2 != iVar7)) {
      uVar5 = FUN_005e17c4(iVar2);
      uVar4 = FUN_005e147c(uVar5 & 0xff,param_1);
    }
    if (uVar5 == 0) {
      if (param_3[2] != 0) goto LAB_005e1bf4;
      goto LAB_005e1c20;
    }
    FUN_005e1508(uVar5 & 0xff,uVar4,param_3 + 2,local_60);
    uVar3 = FUN_005e1900(uVar5 & 0xff);
    uVar6 = 0xffffffff;
    if ((uVar3 & 0xffffffff) < 4) {
      uVar6 = (1 << ((uint)((uVar3 & 0xffffffff) << 3) & 0x38)) - 1;
    }
    if ((uVar6 & local_60[0]) != 0) {
LAB_005e1bf4:
      iVar7 = *param_2;
      if (iVar7 != 0) {
        iVar1 = *(int *)(iVar7 + 4);
        *(int *)(iVar7 + 4) = iVar1 + 1;
        *(int **)(iVar7 + iVar1 * 4 + 8) = param_3;
      }
      goto LAB_005e1c20;
    }
    param_3 = (int *)((int)param_3 + *param_3 + 4);
    iVar7 = iVar2;
    if (*param_3 == 0) {
      return;
    }
  } while( true );
}



//==== 005e1d3c  ns=Global  size=0x1cc
// sig: undefined FUN_005e1d3c(void)
// callers(1): 005e2318 FUN_005e2318
// callees(4): 005e147c FUN_005e147c; 005e1508 FUN_005e1508; 005e17c4 FUN_005e17c4; 005e1900 FUN_005e1900

int FUN_005e1d3c(uint *param_1,int *param_2)

{
  uint uVar2;
  ulonglong uVar1;
  undefined4 uVar4;
  ulonglong uVar3;
  int iVar5;
  int iVar6;
  ulonglong uVar7;
  int iVar8;
  uint local_70 [6];
  
  iVar6 = 0;
  if (*param_2 != 0) {
    uVar7 = 0;
    uVar4 = 0;
    iVar5 = 0;
    do {
      while (iVar8 = iVar5, param_2[1] != 0) {
        uVar3 = uVar7 & 0xff;
        iVar8 = (int)param_2 + (4 - param_2[1]);
        if (iVar8 != iVar5) {
          uVar7 = FUN_005e17c4(iVar8);
          uVar3 = uVar7 & 0xff;
          uVar4 = FUN_005e147c(uVar3,param_1);
          uVar2 = param_1[4];
          if ((uVar2 & 0x1fe00000) == 0x1fe00000) {
            uVar1 = ((ulonglong)uVar2 & 0x1fffff) << 3 | (ulonglong)(uVar2 >> 0x1d);
            param_1[4] = (uint)(uVar1 << 0x1d) | (uint)uVar1 >> 3 |
                         (uint)((uVar7 & 0xffffffff) << 0x15) & 0x1fe00000;
          }
          else if ((uVar2 >> 0x15 & 0xff) != (uint)uVar7) {
            param_1[4] = uVar2 | 0x20000000;
          }
        }
        FUN_005e1508(uVar3,uVar4,param_2 + 2,local_70);
        uVar3 = FUN_005e1900(uVar3);
        uVar2 = 0xffffffff;
        if ((uVar3 & 0xffffffff) < 4) {
          uVar2 = (1 << ((uint)((uVar3 & 0xffffffff) << 3) & 0x38)) - 1;
        }
        if (((uVar2 & local_70[0]) != 0) && (iVar6 = iVar6 + 1, local_70[0] < *param_1)) {
          *param_1 = local_70[0];
          break;
        }
        param_2 = (int *)((int)param_2 + *param_2 + 4);
        iVar5 = iVar8;
        if (*param_2 == 0) {
          return iVar6;
        }
      }
      param_2 = (int *)((int)param_2 + *param_2 + 4);
      iVar5 = iVar8;
    } while (*param_2 != 0);
  }
  return iVar6;
}



//==== 005e1f08  ns=Global  size=0xb8
// sig: undefined FUN_005e1f08(void)
// callers(1): 005e1fc0 FUN_005e1fc0
// callees(3): 005e1424 FUN_005e1424; 005e2e1c FUN_005e2e1c; 005e2e54 FUN_005e2e54

void FUN_005e1f08(int *param_1,undefined4 *param_2,undefined4 param_3,undefined4 param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  
  if ((param_1 != (int *)0x0) && (*param_1 != 0)) {
    param_2[3] = param_1;
    *param_2 = 0xffffffff;
    param_2[1] = param_3;
    param_2[4] = 0x1fe00000;
    param_2[2] = param_4;
    FUN_005e1424();
    puVar2 = PTR_DAT_0071c740;
    puVar1 = PTR_DAT_0071c740 + 8;
    FUN_005e2e54(puVar1);
    param_2[5] = *(undefined4 *)(puVar2 + 0x20);
    *(undefined4 **)(puVar2 + 0x20) = param_2;
    FUN_005e2e1c(puVar1);
    return;
  }
  return;
}



//==== 005e1fc0  ns=Global  size=0x2c
// sig: undefined FUN_005e1fc0(void)
// callers(2): 00014eec crt0::frame_dummy; 005e1fec FUN_005e1fec
// callees(1): 005e1f08 FUN_005e1f08

void FUN_005e1fc0(undefined8 param_1,undefined8 param_2)

{
  FUN_005e1f08(param_1,param_2,0,0);
  return;
}



//==== 005e1fec  ns=Global  size=0x54
// sig: undefined FUN_005e1fec(void)
// callers(0): 
// callees(2): 005d5838 FUN_005d5838; 005e1fc0 FUN_005e1fc0

void FUN_005e1fec(int *param_1)

{
  undefined4 uVar1;
  
  if (*param_1 != 0) {
    uVar1 = FUN_005d5838(0x18);
    FUN_005e1fc0(param_1,uVar1);
  }
  return;
}



//==== 005e2040  ns=Global  size=0x174
// sig: undefined FUN_005e2040(void)
// callers(1): 005e21b8 FUN_005e21b8
// callees(5): 005c4840 idol::abort; 005d580c FUN_005d580c; 005e1424 FUN_005e1424; 005e2e1c FUN_005e2e1c; 005e2e54 FUN_005e2e54

int FUN_005e2040(int *param_1)

{
  undefined *puVar1;
  int *piVar2;
  int iVar3;
  
  if ((param_1 == (int *)0x0) || (*param_1 == 0)) {
    return 0;
  }
  FUN_005e1424();
  puVar1 = PTR_DAT_0071c740;
  FUN_005e2e54(PTR_DAT_0071c740 + 8);
  iVar3 = *(int *)(puVar1 + 0x20);
  if (iVar3 == 0) {
LAB_005e20ec:
    iVar3 = *(int *)(puVar1 + 0x24);
    if (iVar3 != 0) {
      piVar2 = (int *)(puVar1 + 0x24);
      do {
        if (*(int *)(iVar3 + 0x10) < 0) {
          if ((int *)**(undefined4 **)(iVar3 + 0xc) == param_1) {
            *piVar2 = *(int *)(iVar3 + 0x14);
            FUN_005d580c(*(undefined4 *)(iVar3 + 0xc));
            goto LAB_005e214c;
          }
        }
        else if (*(int **)(iVar3 + 0xc) == param_1) goto LAB_005e2144;
        piVar2 = (int *)(iVar3 + 0x14);
        iVar3 = *piVar2;
      } while (iVar3 != 0);
    }
    FUN_005e2e1c(puVar1 + 8);
                    /* WARNING: Subroutine does not return */
    idol::abort();
  }
  if (*(int **)(iVar3 + 0xc) == param_1) {
    piVar2 = (int *)(puVar1 + 0x20);
  }
  else {
    do {
      piVar2 = (int *)(iVar3 + 0x14);
      iVar3 = *piVar2;
      if (iVar3 == 0) goto LAB_005e20ec;
    } while (*(int **)(iVar3 + 0xc) != param_1);
  }
LAB_005e2144:
  *piVar2 = *(int *)(iVar3 + 0x14);
LAB_005e214c:
  FUN_005e2e1c(puVar1 + 8);
  return iVar3;
}



//==== 005e21b8  ns=Global  size=0x28
// sig: undefined FUN_005e21b8(void)
// callers(2): 00014e50 crt0::__do_global_dtors_aux; 005e21e0 FUN_005e21e0
// callees(1): 005e2040 FUN_005e2040

undefined4 FUN_005e21b8(void)

{
  undefined4 uVar1;
  
  uVar1 = FUN_005e2040();
  return uVar1;
}



//==== 005e21e0  ns=Global  size=0x40
// sig: undefined FUN_005e21e0(void)
// callers(0): 
// callees(2): 005d580c FUN_005d580c; 005e21b8 FUN_005e21b8

void FUN_005e21e0(int *param_1)

{
  undefined4 uVar1;
  
  if (*param_1 != 0) {
    uVar1 = FUN_005e21b8();
    FUN_005d580c(uVar1);
  }
  return;
}



//==== 005e2220  ns=Global  size=0x88
// sig: undefined FUN_005e2220(void)
// callers(1): 005e22a8 FUN_005e22a8
// callees(3): 005e1424 FUN_005e1424; 005e2e1c FUN_005e2e1c; 005e2e54 FUN_005e2e54

void FUN_005e2220(undefined4 param_1,undefined4 *param_2,undefined4 param_3,undefined4 param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  
  *param_2 = 0xffffffff;
  param_2[3] = param_1;
  param_2[1] = param_3;
  param_2[2] = param_4;
  param_2[4] = 0x5fe00000;
  FUN_005e1424();
  puVar2 = PTR_DAT_0071c740;
  puVar1 = PTR_DAT_0071c740 + 8;
  FUN_005e2e54(puVar1);
  param_2[5] = *(undefined4 *)(puVar2 + 0x20);
  *(undefined4 **)(puVar2 + 0x20) = param_2;
  FUN_005e2e1c(puVar1);
  return;
}



//==== 005e22a8  ns=Global  size=0x2c
// sig: undefined FUN_005e22a8(void)
// callers(1): 005e22d4 FUN_005e22d4
// callees(1): 005e2220 FUN_005e2220

void FUN_005e22a8(undefined8 param_1,undefined8 param_2)

{
  FUN_005e2220(param_1,param_2,0,0);
  return;
}



//==== 005e22d4  ns=Global  size=0x44
// sig: undefined FUN_005e22d4(void)
// callers(0): 
// callees(2): 005d5838 FUN_005d5838; 005e22a8 FUN_005e22a8

void FUN_005e22d4(undefined4 param_1)

{
  undefined4 uVar1;
  
  uVar1 = FUN_005d5838(0x18);
  FUN_005e22a8(param_1,uVar1);
  return;
}



//==== 005e2318  ns=Global  size=0x7c0
// sig: undefined FUN_005e2318(void)
// callers(1): 005e2adc FUN_005e2adc
// callees(11): 005c4840 idol::abort; 005d580c FUN_005d580c; 005d5838 FUN_005d5838; 005e130c FUN_005e130c; 005e147c FUN_005e147c; 005e1508 FUN_005e1508; 005e17c4 FUN_005e17c4; 005e1984 FUN_005e1984; 005e1b6c FUN_005e1b6c; 005e1d3c FUN_005e1d3c; 005e2d2c FUN_005e2d2c

int FUN_005e2318(uint *param_1,uint param_2)

{
  ulonglong uVar1;
  undefined *puVar2;
  longlong lVar3;
  int iVar4;
  uint *puVar5;
  int iVar6;
  int iVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  uint uVar10;
  byte bVar11;
  ulonglong uVar12;
  ulonglong uVar13;
  undefined4 *puVar14;
  uint *puVar15;
  int iVar16;
  uint uVar17;
  uint uVar18;
  ulonglong uVar19;
  undefined4 *puVar20;
  int *piVar21;
  uint uVar22;
  uint local_90;
  uint local_8c;
  undefined1 local_88 [16];
  
  uVar18 = param_1[4];
  if ((int)uVar18 < 0) goto LAB_005e2440;
  uVar10 = uVar18 & 0x1fffff;
  if (uVar10 == 0) {
    if ((uVar18 & 0x40000000) == 0) {
      uVar10 = FUN_005e1d3c(param_1,param_1[3]);
      uVar18 = param_1[4];
      uVar17 = uVar10 & 0x1fffff;
    }
    else {
      piVar21 = (int *)param_1[3];
      uVar10 = 0;
      uVar17 = 0;
      iVar4 = *piVar21;
      if (iVar4 != 0) {
        do {
          piVar21 = piVar21 + 1;
          iVar4 = FUN_005e1d3c(param_1,iVar4);
          uVar10 = uVar10 + iVar4;
          iVar4 = *piVar21;
        } while (iVar4 != 0);
        uVar17 = uVar10 & 0x1fffff;
        uVar18 = param_1[4];
      }
    }
    param_1[4] = uVar18 & 0xffe00000 | uVar17;
    if (uVar17 != uVar10) {
      param_1[4] = uVar18 & 0xffe00000;
    }
    if (uVar10 != 0) goto LAB_005e2518;
  }
  else {
LAB_005e2518:
    iVar4 = uVar10 * 4 + 8;
    puVar5 = (uint *)FUN_005d5838(iVar4);
    if (puVar5 != (uint *)0x0) {
      puVar5[1] = 0;
      iVar4 = FUN_005d5838(iVar4);
      if (iVar4 != 0) {
        *(undefined4 *)(iVar4 + 4) = 0;
      }
      if ((param_1[4] & 0x40000000) == 0) {
        FUN_005e1b6c(param_1,local_88,param_1[3]);
      }
      else {
        piVar21 = (int *)param_1[3];
        iVar6 = *piVar21;
        while (iVar6 != 0) {
          piVar21 = piVar21 + 1;
          FUN_005e1b6c(param_1,local_88,iVar6);
          iVar6 = *piVar21;
        }
      }
      puVar2 = PTR_DAT_0071c740;
      if (puVar5 == (uint *)0x0) {
        puVar15 = (uint *)0x0;
      }
      else {
        puVar15 = puVar5;
        if (puVar5[1] != uVar10) goto LAB_005e2ad4;
      }
      puVar14 = (undefined4 *)PTR_PTR_0071c74c;
      if (((param_1[4] & 0x20000000) == 0) &&
         (puVar14 = (undefined4 *)PTR_PTR_0071c754, (param_1[4] & 0x1fe00000) == 0)) {
        puVar14 = (undefined4 *)PTR_PTR_0071c750;
      }
      if (iVar4 == 0) {
        FUN_005e130c(param_1,puVar14,puVar15);
      }
      else {
        uVar18 = puVar15[1];
        uVar17 = 0;
        uVar8 = 0;
        if (uVar18 != 0) {
          lVar3 = 0;
          uVar17 = 1;
          *(undefined **)(iVar4 + 8) = PTR_DAT_0071c740 + 0x28;
          if (uVar18 != 1) {
            do {
              uVar19 = ZEXT48(puVar5) + lVar3 + 8;
              puVar20 = (undefined4 *)uVar19;
              if (puVar20 != (undefined4 *)(puVar2 + 0x28)) {
                do {
                  puVar20 = (undefined4 *)uVar19;
                  iVar6 = (*(code *)*puVar14)(param_1,puVar5[uVar17 + 2],*puVar20);
                  if (-1 < iVar6) break;
                  iVar6 = iVar4 + ((int)puVar20 - (int)(puVar5 + 2) & 0xfffffffcU);
                  puVar20 = *(undefined4 **)(iVar6 + 8);
                  uVar19 = ZEXT48(puVar20);
                  *(undefined4 *)(iVar6 + 8) = 0;
                } while (puVar20 != (undefined4 *)(puVar2 + 0x28));
              }
              lVar3 = ((ulonglong)uVar17 & 0x3fffffff) << 2;
              uVar17 = uVar17 + 1;
              *(undefined4 **)((int)lVar3 + iVar4 + 8) = puVar20;
            } while (uVar18 != uVar17);
          }
          uVar19 = (ulonglong)uVar18;
          uVar13 = 0;
          uVar12 = 0;
          iVar6 = 0;
          do {
            while( true ) {
              uVar8 = (undefined4)uVar12;
              uVar17 = (uint)uVar13;
              if (*(int *)(iVar4 + iVar6 + 8) == 0) break;
              uVar1 = uVar13 & 0xffffffff;
              uVar13 = uVar13 + 1;
              uVar17 = (uint)uVar13;
              *(undefined4 *)((int)puVar15 + (int)(uVar1 << 2) + 8) =
                   *(undefined4 *)((int)puVar5 + iVar6 + 8);
              uVar19 = uVar19 - 1;
              iVar6 = iVar6 + 4;
              if (uVar19 == 0) goto LAB_005e2754;
            }
            uVar1 = uVar12 & 0xffffffff;
            uVar12 = uVar12 + 1;
            uVar8 = (undefined4)uVar12;
            *(undefined4 *)(iVar4 + (int)(uVar1 << 2) + 8) =
                 *(undefined4 *)((int)puVar5 + iVar6 + 8);
            uVar19 = uVar19 - 1;
            iVar6 = iVar6 + 4;
          } while (uVar19 != 0);
        }
LAB_005e2754:
        puVar15[1] = uVar17;
        *(undefined4 *)(iVar4 + 4) = uVar8;
        if (puVar5[1] + *(int *)(iVar4 + 4) != uVar10) {
LAB_005e2ad4:
                    /* WARNING: Subroutine does not return */
          idol::abort();
        }
        FUN_005e130c(param_1,puVar14);
        if (*(int *)(iVar4 + 4) != 0) {
          uVar18 = puVar5[1];
          iVar6 = *(int *)(iVar4 + 4);
          do {
            iVar16 = iVar6 + -1;
            uVar10 = *(uint *)(iVar4 + iVar16 * 4 + 8);
            iVar6 = uVar18 + iVar6;
            if (uVar18 != 0) {
              do {
                uVar17 = uVar18 - 1;
                iVar7 = (*(code *)*puVar14)(param_1,puVar5[uVar18 + 1],uVar10);
                if (iVar7 < 1) goto LAB_005e2834;
                puVar5[iVar6 + 1] = puVar5[uVar18 + 1];
                uVar18 = uVar17;
                iVar6 = iVar6 + -1;
              } while (uVar17 != 0);
              uVar18 = 0;
            }
LAB_005e2834:
            puVar5[uVar18 + iVar16 + 2] = uVar10;
            iVar6 = iVar16;
          } while (iVar16 != 0);
          puVar5[1] = puVar5[1] + *(int *)(iVar4 + 4);
        }
        FUN_005d580c(iVar4);
      }
      *puVar5 = param_1[3];
      param_1[3] = (uint)puVar5;
      param_1[4] = param_1[4] | 0x80000000;
    }
  }
  if (param_2 < *param_1) {
    return 0;
  }
  uVar18 = param_1[4];
  if (-1 < (int)uVar18) {
    if ((uVar18 & 0x40000000) == 0) {
      iVar4 = FUN_005e1984(param_1,param_1[3],param_2);
      return iVar4;
    }
    piVar21 = (int *)param_1[3];
    iVar4 = *piVar21;
    while( true ) {
      if (iVar4 == 0) {
        return 0;
      }
      iVar4 = FUN_005e1984(param_1,iVar4,param_2);
      if (iVar4 != 0) break;
      piVar21 = piVar21 + 1;
      iVar4 = *piVar21;
    }
    return iVar4;
  }
LAB_005e2440:
  if ((uVar18 & 0x20000000) == 0) {
    if ((uVar18 & 0x1fe00000) == 0) {
      uVar18 = *(uint *)(param_1[3] + 4);
      if (uVar18 != 0) {
        uVar12 = 0;
        uVar19 = (ulonglong)uVar18;
        do {
          while( true ) {
            uVar13 = (uVar19 + uVar12 << 0x20) >> 0x21;
            iVar4 = *(int *)(param_1[3] + (int)(uVar13 << 2) + 8);
            if (param_2 < *(uint *)(iVar4 + 8)) break;
            if (param_2 < *(uint *)(iVar4 + 8) + *(int *)(iVar4 + 0xc)) {
              return iVar4;
            }
            uVar12 = uVar13 + 1;
            if (uVar19 <= uVar12) {
              return 0;
            }
          }
          uVar19 = uVar13;
        } while (uVar12 < uVar13);
      }
    }
    else {
      uVar10 = param_1[3];
      uVar22 = uVar18 >> 0x15 & 0xff;
      uVar8 = FUN_005e147c(uVar22,param_1);
      uVar17 = *(uint *)(uVar10 + 4);
      if (uVar17 != 0) {
        uVar12 = 0;
        uVar19 = (ulonglong)uVar17;
        do {
          uVar13 = (uVar19 + uVar12 << 0x20) >> 0x21;
          iVar4 = *(int *)(uVar10 + (int)(uVar13 << 2) + 8);
          uVar9 = FUN_005e1508(uVar22,uVar8,iVar4 + 8,&local_90);
          FUN_005e1508(uVar18 >> 0x15 & 0xf,0,uVar9,&local_8c);
          if (local_90 <= param_2) {
            if (param_2 < local_90 + local_8c) {
              return iVar4;
            }
            uVar12 = uVar13 + 1;
            uVar13 = uVar19;
          }
          uVar19 = uVar13;
        } while (uVar12 < uVar13);
      }
    }
  }
  else {
    uVar18 = param_1[3];
    uVar10 = *(uint *)(uVar18 + 4);
    if (uVar10 != 0) {
      uVar12 = 0;
      uVar19 = (ulonglong)uVar10;
      do {
        uVar13 = (uVar12 + uVar19 << 0x20) >> 0x21;
        iVar4 = *(int *)(uVar18 + (int)(uVar13 << 2) + 8);
        bVar11 = FUN_005e17c4((iVar4 + 4) - *(int *)(iVar4 + 4));
        uVar8 = FUN_005e147c(bVar11,param_1);
        uVar8 = FUN_005e1508(bVar11,uVar8,iVar4 + 8,&local_8c);
        FUN_005e1508(bVar11 & 0xf,0,uVar8,&local_90);
        if (local_8c <= param_2) {
          if (param_2 < local_8c + local_90) {
            return iVar4;
          }
          uVar12 = uVar13 + 1;
          uVar13 = uVar19;
        }
        uVar19 = uVar13;
      } while (uVar12 < uVar13);
    }
  }
  return 0;
}



//==== 005e2adc  ns=Global  size=0x250
// sig: undefined FUN_005e2adc(void)
// callers(2): 005de318 FUN_005de318; 005deaa8 FUN_005deaa8
// callees(7): 005e1424 FUN_005e1424; 005e147c FUN_005e147c; 005e1508 FUN_005e1508; 005e17c4 FUN_005e17c4; 005e2318 FUN_005e2318; 005e2e1c FUN_005e2e1c; 005e2e54 FUN_005e2e54

int FUN_005e2adc(uint param_1,uint *param_2)

{
  uint *puVar1;
  uint uVar2;
  uint *puVar3;
  undefined *puVar4;
  uint *puVar5;
  undefined4 uVar6;
  int iVar7;
  uint uVar8;
  uint local_40 [4];
  
  FUN_005e1424();
  puVar4 = PTR_DAT_0071c740;
  FUN_005e2e54(PTR_DAT_0071c740 + 8);
  puVar1 = *(uint **)(puVar4 + 0x24);
  if (puVar1 != (uint *)0x0) {
    uVar2 = *puVar1;
    while (param_1 < uVar2) {
      puVar1 = (uint *)puVar1[5];
      if (puVar1 == (uint *)0x0) goto LAB_005e2b58;
      uVar2 = *puVar1;
    }
    iVar7 = FUN_005e2318(puVar1,param_1);
    if (iVar7 != 0) {
      FUN_005e2e1c(puVar4 + 8);
      *param_2 = puVar1[1];
      param_2[1] = puVar1[2];
      uVar2 = puVar1[4];
      goto joined_r0x005e2c0c;
    }
  }
LAB_005e2b58:
  do {
    puVar1 = *(uint **)(puVar4 + 0x20);
    if (puVar1 == (uint *)0x0) {
      FUN_005e2e1c(puVar4 + 8);
      return 0;
    }
    *(uint *)(puVar4 + 0x20) = puVar1[5];
    iVar7 = FUN_005e2318(puVar1,param_1);
    puVar3 = *(uint **)(puVar4 + 0x24);
    if ((puVar3 != (uint *)0x0) && (*puVar1 <= *puVar3)) {
      do {
        puVar5 = puVar3 + 5;
        puVar3 = (uint *)*puVar5;
        if (puVar3 == (uint *)0x0) break;
      } while (*puVar1 <= *puVar3);
      puVar1[5] = (uint)puVar3;
      *puVar5 = (uint)puVar1;
      if (iVar7 != 0) break;
      goto LAB_005e2b58;
    }
    puVar1[5] = (uint)puVar3;
    *(uint **)(puVar4 + 0x24) = puVar1;
  } while (iVar7 == 0);
  FUN_005e2e1c(puVar4 + 8);
  *param_2 = puVar1[1];
  param_2[1] = puVar1[2];
  uVar2 = puVar1[4];
joined_r0x005e2c0c:
  uVar8 = uVar2 >> 0x15 & 0xff;
  if ((uVar2 & 0x20000000) != 0) {
    uVar8 = FUN_005e17c4((iVar7 + 4) - *(int *)(iVar7 + 4));
  }
  uVar6 = FUN_005e147c(uVar8 & 0xff,puVar1);
  FUN_005e1508(uVar8 & 0xff,uVar6,iVar7 + 8,local_40);
  param_2[2] = local_40[0];
  return iVar7;
}



//==== 005e2d2c  ns=Global  size=0xf0
// sig: undefined FUN_005e2d2c(void)
// callers(1): 005e2318 FUN_005e2318
// callees(3): 005e147c FUN_005e147c; 005e1508 FUN_005e1508; 005e17c4 FUN_005e17c4

undefined4 FUN_005e2d2c(undefined4 param_1,int param_2,int param_3)

{
  undefined1 uVar2;
  undefined4 uVar1;
  uint local_50;
  uint local_4c [5];
  
  uVar2 = FUN_005e17c4((param_2 + 4) - *(int *)(param_2 + 4));
  uVar1 = FUN_005e147c(uVar2,param_1);
  FUN_005e1508(uVar2,uVar1,param_2 + 8,&local_50);
  uVar2 = FUN_005e17c4((param_3 + 4) - *(int *)(param_3 + 4));
  uVar1 = FUN_005e147c(uVar2,param_1);
  FUN_005e1508(uVar2,uVar1,param_3 + 8,local_4c);
  uVar1 = 1;
  if ((local_50 <= local_4c[0]) && (uVar1 = 0xffffffff, local_4c[0] <= local_50)) {
    uVar1 = 0;
  }
  return uVar1;
}



//==== 005e2e1c  ns=Global  size=0x38
// sig: undefined FUN_005e2e1c(void)
// callers(4): 005e1f08 FUN_005e1f08; 005e2040 FUN_005e2040; 005e2220 FUN_005e2220; 005e2adc FUN_005e2adc
// callees(1): 006504e4 sys::sys_lwmutex_unlock

uint FUN_005e2e1c(void)

{
  uint uVar1;
  
  uVar1 = sys::sys_lwmutex_unlock();
  return ((int)uVar1 >> 0x1f) - ((int)uVar1 >> 0x1f ^ uVar1) >> 0x1f;
}



//==== 005e2e54  ns=Global  size=0x3c
// sig: undefined FUN_005e2e54(void)
// callers(4): 005e1f08 FUN_005e1f08; 005e2040 FUN_005e2040; 005e2220 FUN_005e2220; 005e2adc FUN_005e2adc
// callees(1): 006504c4 sys::sys_lwmutex_lock

uint FUN_005e2e54(undefined8 param_1)

{
  uint uVar1;
  
  uVar1 = sys::sys_lwmutex_lock(param_1,0);
  return ((int)uVar1 >> 0x1f) - ((int)uVar1 >> 0x1f ^ uVar1) >> 0x1f;
}



//==== 005e2e90  ns=Global  size=0x38
// sig: undefined FUN_005e2e90(void)
// callers(0): 
// callees(1): 00650784 sys::sys_lwmutex_destroy

uint FUN_005e2e90(void)

{
  uint uVar1;
  
  uVar1 = sys::sys_lwmutex_destroy();
  return ((int)uVar1 >> 0x1f) - ((int)uVar1 >> 0x1f ^ uVar1) >> 0x1f;
}



//==== 005e2ec8  ns=Global  size=0x34
// sig: undefined FUN_005e2ec8(void)
// callers(1): 005e1450 FUN_005e1450
// callees(2): 005c4840 idol::abort; 006505a4 sys::sys_lwmutex_create

void FUN_005e2ec8(undefined4 param_1)

{
  int iVar1;
  
  iVar1 = sys::sys_lwmutex_create(param_1,PTR_DAT_0071c758);
  if (iVar1 == 0) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  idol::abort();
}



//==== 005e2f00  ns=Global  size=0x6c
// sig: undefined FUN_005e2f00(void)
// callers(0): 
// callees(2): 005c4840 idol::abort; 006505a4 sys::sys_lwmutex_create

undefined8 * FUN_005e2f00(undefined8 *param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  int iVar3;
  undefined8 uVar4;
  
  puVar1 = PTR_DAT_0071c75c;
  iVar3 = sys::sys_lwmutex_create(PTR_DAT_0071c75c,PTR_DAT_0071c758);
  if (iVar3 == 0) {
    uVar4 = *(undefined8 *)(puVar1 + 8);
    *param_1 = *(undefined8 *)puVar1;
    uVar2 = *(undefined8 *)(puVar1 + 0x10);
    param_1[1] = uVar4;
    param_1[2] = uVar2;
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  idol::abort();
}



//==== 005e2f70  ns=Global  size=0xb0
// sig: undefined FUN_005e2f70(void)
// callers(1): 005e6118 FUN_005e6118
// callees(3): 005c4840 idol::abort; 006504c4 sys::sys_lwmutex_lock; 006504e4 sys::sys_lwmutex_unlock

undefined4 FUN_005e2f70(uint param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  int iVar3;
  
  puVar1 = PTR_DAT_0071c75c;
  if (3 < param_1) {
    return 1;
  }
  puVar2 = PTR_DAT_0071c75c + 0x18;
  iVar3 = sys::sys_lwmutex_lock(puVar2,0);
  if (iVar3 == 0) {
    puVar1[param_1 * 8 + 0x30] = 0;
    if ((int)param_1 < *(int *)(puVar1 + 0x50)) {
      *(uint *)(puVar1 + 0x50) = param_1;
    }
    iVar3 = sys::sys_lwmutex_unlock(puVar2);
    if (iVar3 == 0) {
      return 0;
    }
  }
                    /* WARNING: Subroutine does not return */
  idol::abort();
}



//==== 005e3024  ns=Global  size=0x38
// sig: undefined FUN_005e3024(void)
// callers(0): 
// callees(2): 005c4840 idol::abort; 00650784 sys::sys_lwmutex_destroy

void FUN_005e3024(void)

{
  int iVar1;
  
  iVar1 = sys::sys_lwmutex_destroy(ZEXT48(PTR_DAT_0071c75c) + 0x58);
  if (iVar1 == 0) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  idol::abort();
}



//==== 005e3060  ns=Global  size=0x44
// sig: undefined FUN_005e3060(void)
// callers(1): 005e30a8 FUN_005e30a8
// callees(2): 005c4840 idol::abort; 006505a4 sys::sys_lwmutex_create

void FUN_005e3060(void)

{
  undefined *puVar1;
  undefined *puVar2;
  int iVar3;
  
  puVar1 = PTR_DAT_0071c758;
  puVar2 = PTR_DAT_0071c75c + 0x58;
  *(undefined4 *)(PTR_DAT_0071c75c + 0x70) = 2;
  iVar3 = sys::sys_lwmutex_create(puVar2,puVar1);
  if (iVar3 == 0) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  idol::abort();
}



//==== 005e30a8  ns=Global  size=0x124
// sig: undefined FUN_005e30a8(void)
// callers(3): 005dfd88 FUN_005dfd88; 005e1424 FUN_005e1424; 005e31cc FUN_005e31cc
// callees(3): 005e3060 FUN_005e3060; 006504c4 sys::sys_lwmutex_lock; 006504e4 sys::sys_lwmutex_unlock

uint FUN_005e30a8(int *param_1,undefined4 *param_2)

{
  undefined *puVar1;
  int iVar2;
  uint uVar3;
  
  puVar1 = PTR_DAT_0071c75c;
  if (*param_1 == 0) {
    if (*(int *)(PTR_DAT_0071c75c + 0x70) == 0) {
      FUN_005e3060();
      iVar2 = sys::sys_lwmutex_lock(puVar1 + 0x58,0);
    }
    else {
      iVar2 = sys::sys_lwmutex_lock(PTR_DAT_0071c75c + 0x58,0);
    }
    if (iVar2 == 0) {
      if (*param_1 == 0) {
        (*(code *)*param_2)();
        *param_1 = 2;
      }
      uVar3 = sys::sys_lwmutex_unlock(puVar1 + 0x58);
      return (((int)uVar3 >> 0x1f ^ uVar3) - ((int)uVar3 >> 0x1f)) - 1 >> 0x1f ^ 1;
    }
  }
  return 1;
}



//==== 005e31cc  ns=Global  size=0x144
// sig: undefined FUN_005e31cc(void)
// callers(1): 005e6118 FUN_005e6118
// callees(4): 005c4840 idol::abort; 005e30a8 FUN_005e30a8; 006504c4 sys::sys_lwmutex_lock; 006504e4 sys::sys_lwmutex_unlock

undefined4 FUN_005e31cc(uint *param_1,undefined4 param_2)

{
  char cVar1;
  undefined *puVar2;
  int iVar3;
  ulonglong uVar4;
  uint uVar5;
  char *pcVar6;
  undefined4 uVar7;
  ulonglong uVar8;
  
  puVar2 = PTR_DAT_0071c75c;
  FUN_005e30a8(PTR_DAT_0071c75c + 0x74,PTR_PTR_0071c760);
  iVar3 = sys::sys_lwmutex_lock(puVar2 + 0x18,0);
  if (iVar3 == 0) {
    uVar5 = *(uint *)(puVar2 + 0x50);
    uVar4 = (ulonglong)uVar5;
    if ((int)uVar5 < 4) {
      iVar3 = uVar5 * 8;
      if (puVar2[iVar3 + 0x30] != '\0') {
        uVar8 = 4 - uVar4 & 0xffffffff;
        pcVar6 = puVar2 + iVar3 + 0x38;
        do {
          uVar4 = uVar4 + 1;
          uVar8 = uVar8 - 1;
          uVar5 = (uint)uVar4;
          if (uVar8 == 0) {
            *(uint *)(puVar2 + 0x50) = uVar5;
            goto LAB_005e3280;
          }
          cVar1 = *pcVar6;
          pcVar6 = pcVar6 + 8;
        } while (cVar1 != '\0');
        iVar3 = (int)((uVar4 & 0x1fffffff) << 3);
        *(uint *)(puVar2 + 0x50) = uVar5;
      }
      *param_1 = uVar5;
      *(uint *)(puVar2 + 0x50) = uVar5 + 1;
      puVar2[iVar3 + 0x30] = 1;
      uVar7 = 0;
      *(undefined4 *)(puVar2 + *param_1 * 8 + 0x34) = param_2;
      iVar3 = sys::sys_lwmutex_unlock(puVar2 + 0x18);
    }
    else {
LAB_005e3280:
      uVar7 = 1;
      iVar3 = sys::sys_lwmutex_unlock(puVar2 + 0x18);
    }
    if (iVar3 == 0) {
      return uVar7;
    }
  }
                    /* WARNING: Subroutine does not return */
  idol::abort();
}



//==== 005e3314  ns=Global  size=0xf0
// sig: undefined FUN_005e3314(void)
// callers(2): 005e6238 FUN_005e6238; 005e6280 FUN_005e6280
// callees(4): 005c4840 idol::abort; 006504c4 sys::sys_lwmutex_lock; 006504e4 sys::sys_lwmutex_unlock; 006505c4 sys::sys_ppu_thread_get_id

int FUN_005e3314(uint param_1)

{
  int *piVar1;
  longlong lVar2;
  int iVar3;
  int iVar4;
  int iStack_64;
  longlong local_20 [2];
  
  sys::sys_ppu_thread_get_id(local_20);
  if ((3 < param_1) ||
     (iVar4 = *(int *)(iStack_64 + -0x5bcc), *(char *)(param_1 * 8 + iVar4 + 0x30) == '\0')) {
    return 0;
  }
  iVar3 = sys::sys_lwmutex_lock(iVar4 + 0x18,0);
  if (iVar3 == 0) {
    piVar1 = *(int **)(iVar4 + 0x78);
    if (piVar1 == (int *)0x0) {
LAB_005e33d4:
      iVar3 = 0;
    }
    else {
      lVar2 = *(longlong *)(piVar1 + 2);
      while (lVar2 != local_20[0]) {
        piVar1 = (int *)*piVar1;
        if (piVar1 == (int *)0x0) goto LAB_005e33d4;
        lVar2 = *(longlong *)(piVar1 + 2);
      }
      iVar3 = piVar1[param_1 + 4];
    }
    iVar4 = sys::sys_lwmutex_unlock(iVar4 + 0x18);
    if (iVar4 == 0) {
      return iVar3;
    }
  }
                    /* WARNING: Subroutine does not return */
  idol::abort();
}



//==== 005e3408  ns=Global  size=0x14c
// sig: undefined FUN_005e3408(void)
// callers(1): 005e6280 FUN_005e6280
// callees(5): 005c4840 idol::abort; 005d5838 FUN_005d5838; 006504c4 sys::sys_lwmutex_lock; 006504e4 sys::sys_lwmutex_unlock; 006505c4 sys::sys_ppu_thread_get_id

undefined4 FUN_005e3408(uint param_1,int param_2)

{
  int *piVar1;
  undefined4 uVar2;
  longlong lVar3;
  int iVar4;
  undefined4 *puVar5;
  int iVar6;
  int iStack_74;
  longlong local_30 [3];
  
  sys::sys_ppu_thread_get_id(local_30);
  if ((3 < param_1) ||
     (iVar6 = *(int *)(iStack_74 + -0x5bcc), *(char *)(param_1 * 8 + iVar6 + 0x30) == '\0')) {
    return 1;
  }
  iVar4 = sys::sys_lwmutex_lock(iVar6 + 0x18,0);
  if (iVar4 == 0) {
    piVar1 = *(int **)(iVar6 + 0x78);
    if (piVar1 == (int *)0x0) {
LAB_005e34d4:
      puVar5 = (undefined4 *)FUN_005d5838(0x20);
      if (puVar5 == (undefined4 *)0x0) goto LAB_005e353c;
      uVar2 = *(undefined4 *)(iVar6 + 0x78);
      puVar5[7] = 0;
      *puVar5 = uVar2;
      puVar5[4] = 0;
      puVar5[5] = 0;
      puVar5[6] = 0;
      *(longlong *)(puVar5 + 2) = local_30[0];
      *(undefined4 **)(iVar6 + 0x78) = puVar5;
      puVar5[param_1 + 4] = param_2;
    }
    else {
      lVar3 = *(longlong *)(piVar1 + 2);
      while (lVar3 != local_30[0]) {
        piVar1 = (int *)*piVar1;
        if (piVar1 == (int *)0x0) goto LAB_005e34d4;
        lVar3 = *(longlong *)(piVar1 + 2);
      }
      piVar1[param_1 + 4] = param_2;
    }
    iVar6 = sys::sys_lwmutex_unlock(iVar6 + 0x18);
    if (iVar6 == 0) {
      return 0;
    }
  }
LAB_005e353c:
                    /* WARNING: Subroutine does not return */
  idol::abort();
}



//==== 005e3558  ns=Global  size=0x4c
// sig: undefined FUN_005e3558(void)
// callers(0): 
// callees(3): 005c4840 idol::abort; 005c4d80 FUN_005c4d80; 006505a4 sys::sys_lwmutex_create

void FUN_005e3558(void)

{
  int iVar1;
  undefined4 uStack_44;
  
  iVar1 = sys::sys_lwmutex_create(ZEXT48(PTR_DAT_0071c75c) + 0x18,ZEXT48(PTR_DAT_0071c758) + 0x10);
  if (iVar1 == 0) {
    FUN_005c4d80(*(undefined4 *)(uStack_44 + -0x5bc4));
    return;
  }
                    /* WARNING: Subroutine does not return */
  idol::abort();
}



//==== 005e35a8  ns=Global  size=0x104
// sig: undefined FUN_005e35a8(void)
// callers(0): 
// callees(3): 005d580c FUN_005d580c; 006504c4 sys::sys_lwmutex_lock; 006504e4 sys::sys_lwmutex_unlock

void FUN_005e35a8(void)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined *puVar3;
  int iVar4;
  int *piVar5;
  char *pcVar6;
  char *pcVar7;
  
  puVar3 = PTR_DAT_0071c75c;
  iVar4 = sys::sys_lwmutex_lock(PTR_DAT_0071c75c + 0x18,0);
  if (iVar4 == 0) {
    puVar2 = *(undefined4 **)(puVar3 + 0x78);
    while (puVar2 != (undefined4 *)0x0) {
      piVar5 = puVar2 + 4;
      pcVar6 = puVar3 + 0x30;
      do {
        pcVar7 = pcVar6 + 8;
        if (((*pcVar6 != '\0') && (*(undefined4 **)(pcVar6 + 4) != (undefined4 *)0x0)) &&
           (*piVar5 != 0)) {
          (*(code *)**(undefined4 **)(pcVar6 + 4))(*piVar5);
        }
        piVar5 = piVar5 + 1;
        pcVar6 = pcVar7;
      } while (pcVar7 != puVar3 + 0x50);
      puVar1 = (undefined4 *)*puVar2;
      FUN_005d580c(puVar2);
      puVar2 = puVar1;
    }
    *(undefined4 *)(puVar3 + 0x78) = 0;
    sys::sys_lwmutex_unlock(puVar3 + 0x18);
  }
  return;
}



//==== 005e36ac  ns=Global  size=0x1d0
// sig: undefined FUN_005e36ac(void)
// callers(1): 005e61fc FUN_005e61fc
// callees(4): 005d580c FUN_005d580c; 006504c4 sys::sys_lwmutex_lock; 006504e4 sys::sys_lwmutex_unlock; 006505c4 sys::sys_ppu_thread_get_id

void FUN_005e36ac(int param_1)

{
  bool bVar1;
  bool bVar2;
  int iVar3;
  int iVar4;
  undefined4 *puVar5;
  int *piVar6;
  int iVar7;
  int *piVar8;
  int iVar9;
  char *pcVar10;
  int iVar11;
  int *piVar12;
  byte in_cr0;
  byte in_cr1;
  byte in_cr2;
  byte in_cr3;
  byte unaff_cr4;
  byte in_cr5;
  byte in_cr6;
  byte in_cr7;
  uint uStack00000008;
  int iStack_a4;
  longlong local_60 [3];
  
  uStack00000008 =
       (uint)(in_cr0 & 0xf) << 0x1c | (uint)(in_cr1 & 0xf) << 0x18 | (uint)(in_cr2 & 0xf) << 0x14 |
       (uint)(in_cr3 & 0xf) << 0x10 | (uint)(unaff_cr4 & 0xf) << 0xc | (uint)(in_cr5 & 0xf) << 8 |
       (uint)(in_cr6 & 0xf) << 4 | (uint)(in_cr7 & 0xf);
  sys::sys_ppu_thread_get_id(local_60);
  iVar3 = *(int *)(iStack_a4 + -0x5bcc);
  iVar7 = sys::sys_lwmutex_lock(iVar3 + 0x18,0);
  if (iVar7 == 0) {
    piVar12 = *(int **)(iVar3 + 0x78);
    bVar1 = piVar12 == (int *)0x0;
    if (bVar1) {
LAB_005e3758:
      piVar8 = (int *)0x0;
    }
    else if (*(longlong *)(piVar12 + 2) == local_60[0]) {
      piVar8 = piVar12 + 4;
      *(int *)(iVar3 + 0x78) = *piVar12;
    }
    else {
      do {
        piVar6 = piVar12;
        piVar12 = (int *)*piVar6;
        bVar1 = piVar12 == (int *)0x0;
        if (bVar1) goto LAB_005e3758;
      } while (*(longlong *)(piVar12 + 2) != local_60[0]);
      piVar8 = piVar12 + 4;
      *piVar6 = *piVar12;
    }
    iVar11 = 0;
    iVar7 = 0;
    iVar9 = 0;
    pcVar10 = (char *)(iVar3 + 0x30);
    do {
      if ((*pcVar10 != '\0') && (*(int *)(pcVar10 + 4) != 0)) {
        iVar4 = *(int *)(iVar9 + (int)piVar8);
        if (iVar4 != 0) {
          iVar7 = iVar7 + 1;
          if (iVar11 == param_1) {
            puVar5 = *(undefined4 **)(iVar11 * 8 + iVar3 + 0x34);
            *(int *)(iVar9 + (int)piVar8) = 0;
            (*(code *)*puVar5)(iVar4);
          }
        }
      }
      bVar2 = iVar11 != 3;
      iVar9 = iVar9 + 4;
      iVar11 = iVar11 + 1;
      pcVar10 = pcVar10 + 8;
    } while (bVar2);
    if ((!bVar1) && (iVar7 < 2)) {
      FUN_005d580c(piVar12);
    }
    sys::sys_lwmutex_unlock(iVar3 + 0x18);
  }
  return;
}



//==== 005e387c  ns=Global  size=0x34
// sig: undefined FUN_005e387c(void)
// callers(33): 004e776c FUN_004e776c; 00530740 FUN_00530740; 005e3c98 FUN_005e3c98; 005e3f20 FUN_005e3f20; 005e3f68 FUN_005e3f68; 005e3fc8 FUN_005e3fc8; 005e4028 FUN_005e4028; 005e6e84 FUN_005e6e84; 005e6ec4 FUN_005e6ec4; 005e6f04 FUN_005e6f04; 005e6f44 FUN_005e6f44; 005e6f84 FUN_005e6f84; 005e6fe4 FUN_005e6fe4; 005e7088 FUN_005e7088; 005e70d8 FUN_005e70d8; 005e7128 FUN_005e7128; 005e7178 FUN_005e7178; 005e72cc FUN_005e72cc; 005e7820 FUN_005e7820; 005e91fc FUN_005e91fc; 005e923c FUN_005e923c; 005e927c FUN_005e927c; 005e92d4 FUN_005e92d4; 005e9334 FUN_005e9334; 005e937c FUN_005e937c
// callees(1): 005d580c FUN_005d580c

void FUN_005e387c(int param_1)

{
  if (param_1 != 0) {
    FUN_005d580c(param_1);
  }
  return;
}



//==== 005e38b0  ns=Global  size=0xf4
// sig: undefined FUN_005e38b0(void)
// callers(27): 00010238 boot::PlayLogoMovie; 000103b0 boot::PlayAttractMovie; 00012048 boot::PrepareFrontbin; 00012ec8 boot::GameStart; 00013a20 boot::GameShutDown; 0001401c boot::boot; 001643e0 space::PlaySpaceMovie; 00168dec update::PlayInfobotMovie; 00168f7c update::PlayHelpMovie; 0016910c update::PlaySpecialMovie; 00169268 update::PlayStoryMovie; 0016963c update::PlayMovieBlocking; 0016974c update::UpdateCinematic; 004e7404 idol::GetSaveData; 004e7534 FUN_004e7534; 004e85a0 FUN_004e85a0; 004e8714 idol::SaveSystem_PS::SaveGameData; 004e8a70 idol::SaveSystem_PS::AutoSaveGameData; 004e8d7c idol::SaveSystem_PS::LoadGameData; 004e903c idol::thr_SaveSystem_CheckExisting; 004e92dc idol::SaveDataListCallback; 004e9848 idol::SaveDataStatusListCallback; 004e9da0 FUN_004e9da0; 004ea320 idol::cb_data_status_load; 004ea8dc idol::cb_file_operation_load
// callees(3): 005c4d80 FUN_005c4d80; 005d5838 FUN_005d5838; 005e3b94 FUN_005e3b94

int FUN_005e38b0(undefined8 param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  int iVar5;
  
  puVar3 = PTR_PTR_0071c774;
  puVar2 = PTR_DAT_0071c770;
  puVar1 = PTR_DAT_0071c76c;
  do {
    iVar5 = FUN_005d5838(param_1);
    while( true ) {
      puVar4 = PTR_PTR_0071c778;
      if (iVar5 != 0) {
        return iVar5;
      }
      if (*(undefined4 **)puVar1 == (undefined4 *)0x0) break;
      (*(code *)**(undefined4 **)puVar1)();
      iVar5 = FUN_005d5838(param_1);
    }
    if (*puVar2 == '\0') {
      *(undefined **)(puVar2 + 8) = puVar3;
      *puVar2 = 1;
      FUN_005c4d80(puVar4);
    }
    FUN_005e3b94(puVar2 + 8);
  } while( true );
}



//==== 005e39a4  ns=Global  size=0x38
// sig: undefined FUN_005e39a4(void)
// callers(0): 
// callees(1): 005e3cd4 FUN_005e3cd4

void FUN_005e39a4(void)

{
  undefined *puVar1;
  
  puVar1 = PTR_DAT_0071c770 + 8;
  *(undefined **)(PTR_DAT_0071c770 + 8) = PTR_PTR_0071c774;
  FUN_005e3cd4(puVar1);
  return;
}



//==== 005e39dc  ns=Global  size=0x108
// sig: undefined FUN_005e39dc(void)
// callers(1): 0001401c boot::boot
// callees(3): 005c4d80 FUN_005c4d80; 005d5764 FUN_005d5764; 005e3b94 FUN_005e3b94

int FUN_005e39dc(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  int iVar5;
  
  puVar3 = PTR_PTR_0071c788;
  puVar2 = PTR_DAT_0071c784;
  puVar1 = PTR_DAT_0071c780;
  do {
    iVar5 = FUN_005d5764(param_2,param_1);
    while( true ) {
      puVar4 = PTR_PTR_0071c78c;
      if (iVar5 != 0) {
        return iVar5;
      }
      if (*(undefined4 **)puVar1 == (undefined4 *)0x0) break;
      (*(code *)**(undefined4 **)puVar1)();
      iVar5 = FUN_005d5764(param_2,param_1);
    }
    if (*puVar2 == '\0') {
      *(undefined **)(puVar2 + 8) = puVar3;
      *puVar2 = 1;
      FUN_005c4d80(puVar4);
    }
    FUN_005e3b94(puVar2 + 8);
  } while( true );
}



//==== 005e3ae4  ns=Global  size=0x38
// sig: undefined FUN_005e3ae4(void)
// callers(0): 
// callees(1): 005e3cd4 FUN_005e3cd4

void FUN_005e3ae4(void)

{
  undefined *puVar1;
  
  puVar1 = PTR_DAT_0071c784 + 8;
  *(undefined **)(PTR_DAT_0071c784 + 8) = PTR_PTR_0071c788;
  FUN_005e3cd4(puVar1);
  return;
}



//==== 005e3b1c  ns=Global  size=0x74
// sig: undefined FUN_005e3b1c(void)
// callers(1): 005e3b94 FUN_005e3b94
// callees(3): 005c4840 idol::abort; 005c50cc FUN_005c50cc; 005d5a08 FUN_005d5a08
// strings: 0067fe00: 'unknown'

void FUN_005e3b1c(undefined4 param_1,undefined *param_2)

{
  undefined *puVar1;
  
  FUN_005c50cc(0);
  puVar1 = PTR_DAT_0071c790;
  FUN_005d5a08(param_1,PTR_DAT_0071c790);
  if (param_2 == (undefined *)0x0) {
    param_2 = PTR_s_unknown_0071c794;
  }
  FUN_005d5a08(param_2,puVar1);
  FUN_005d5a08(PTR_DAT_0071c798,puVar1);
                    /* WARNING: Subroutine does not return */
  idol::abort();
}



//==== 005e3b94  ns=Global  size=0x50
// sig: undefined FUN_005e3b94(void)
// callers(4): 005e38b0 FUN_005e38b0; 005e39dc FUN_005e39dc; 005e3c04 FUN_005e3c04; 0064ece8 FUN_0064ece8
// callees(1): 005e3b1c FUN_005e3b1c
// strings: 0067fe10: 'exception: '

void FUN_005e3b94(int *param_1)

{
  undefined4 uVar1;
  
  uVar1 = (*(code *)**(undefined4 **)(*param_1 + 8))();
  FUN_005e3b1c(PTR_s_exception__0071c79c,uVar1);
  return;
}



//==== 005e3be4  ns=Global  size=0x14
// sig: undefined FUN_005e3be4(void)
// callers(0): 
// callees(0): 

undefined4 FUN_005e3be4(undefined4 param_1)

{
  undefined4 uVar1;
  
  uVar1 = *(undefined4 *)PTR_DAT_0071c7a0;
  *(undefined4 *)PTR_DAT_0071c7a0 = param_1;
  return uVar1;
}



//==== 005e3bf8  ns=Global  size=0x8
// sig: undefined FUN_005e3bf8(void)
// callers(0): 
// callees(0): 

undefined * FUN_005e3bf8(void)

{
  return PTR_DAT_0071c7a4;
}



//==== 005e3c00  ns=Global  size=0x4
// sig: undefined FUN_005e3c00(void)
// callers(0): 
// callees(0): 

void FUN_005e3c00(void)

{
  return;
}



//==== 005e3c04  ns=Global  size=0x94
// sig: undefined FUN_005e3c04(void)
// callers(0): 
// callees(1): 005e3b94 FUN_005e3b94

void FUN_005e3c04(int *param_1)

{
  if (*(undefined4 **)PTR_DAT_0071c7a0 != (undefined4 *)0x0) {
    (*(code *)**(undefined4 **)PTR_DAT_0071c7a0)(param_1);
  }
  (*(code *)**(undefined4 **)(*param_1 + 0xc))(param_1);
  FUN_005e3b94(param_1);
  return;
}



//==== 005e3c98  ns=Global  size=0x30
// sig: undefined FUN_005e3c98(void)
// callers(0): 
// callees(1): 005e387c FUN_005e387c

void FUN_005e3c98(undefined4 *param_1)

{
  *param_1 = PTR_PTR_0071c7a8;
  FUN_005e387c();
  return;
}



//==== 005e3cc8  ns=Global  size=0xc
// sig: undefined FUN_005e3cc8(void)
// callers(0): 
// callees(0): 

void FUN_005e3cc8(undefined4 *param_1)

{
  *param_1 = PTR_PTR_0071c7a8;
  return;
}



//==== 005e3cd4  ns=Global  size=0xc
// sig: undefined FUN_005e3cd4(void)
// callers(4): 005e39a4 FUN_005e39a4; 005e3ae4 FUN_005e3ae4; 0064ed0c FUN_0064ed0c; 0064ed50 FUN_0064ed50
// callees(0): 

void FUN_005e3cd4(undefined4 *param_1)

{
  *param_1 = PTR_PTR_0071c7a8;
  return;
}



//==== 005e3ce0  ns=Global  size=0x58
// sig: undefined FUN_005e3ce0(void)
// callers(0): 
// callees(2): 005cbb70 FUN_005cbb70; 005cbbec FUN_005cbbec

undefined4 FUN_005e3ce0(undefined4 param_1)

{
  undefined4 uVar1;
  
  FUN_005cbbec(1);
  uVar1 = *(undefined4 *)PTR_DAT_0071c7ac;
  *(undefined4 *)PTR_DAT_0071c7ac = param_1;
  FUN_005cbb70(1);
  return uVar1;
}



//==== 005e3d38  ns=Global  size=0x10
// sig: undefined FUN_005e3d38(void)
// callers(0): 
// callees(1): 005e6980 FUN_005e6980

void FUN_005e3d38(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_005e6980();
}



//==== 005e3d54  ns=Global  size=0x8
// sig: undefined FUN_005e3d54(void)
// callers(0): 
// callees(0): 

undefined8 FUN_005e3d54(void)

{
  return 0;
}



//==== 005e3d5c  ns=Global  size=0x8
// sig: undefined FUN_005e3d5c(void)
// callers(0): 
// callees(0): 

undefined8 FUN_005e3d5c(void)

{
  return 0;
}



//==== 005e3d64  ns=Global  size=0x8c
// sig: undefined FUN_005e3d64(void)
// callers(0): 
// callees(0): 

/* WARNING: Removing unreachable block (ram,0x005e3dcc) */

undefined1 FUN_005e3d64(int *param_1,undefined8 param_2,undefined4 *param_3)

{
  undefined1 local_20 [24];
  
  (*(code *)**(undefined4 **)(*param_1 + 0x18))(param_1,param_2,*param_3,local_20);
  return 0;
}



//==== 005e3df0  ns=Global  size=0x28
// sig: undefined FUN_005e3df0(void)
// callers(0): 
// callees(0): 

ulonglong FUN_005e3df0(undefined8 param_1,undefined8 param_2,uint param_3,undefined8 param_4,
                      uint param_5)

{
  uint uVar1;
  
  uVar1 = (int)(param_5 ^ param_3) >> 0x1f;
  uVar1 = (int)(uVar1 - (uVar1 ^ param_5 ^ param_3)) >> 0x1f;
  return ((ulonglong)(uVar1 >> 3) << 3 | (ulonglong)uVar1 & 3) + 6 & 0xffffffff;
}



//==== 005e3e18  ns=Global  size=0x108
// sig: undefined FUN_005e3e18(void)
// callers(0): 
// callees(1): 005cc784 FUN_005cc784

undefined1 FUN_005e3e18(int *param_1,int *param_2,undefined4 param_3,uint param_4)

{
  int iVar1;
  undefined1 uVar2;
  
  if (param_1 != param_2) {
    iVar1 = FUN_005cc784(param_1[1],param_2[1]);
    if (iVar1 != 0) {
      if (3 < param_4) {
        return 0;
      }
      uVar2 = (*(code *)**(undefined4 **)(*param_2 + 0x14))(param_2,param_1,param_3);
      return uVar2;
    }
  }
  return 1;
}



//==== 005e3f20  ns=Global  size=0x30
// sig: undefined FUN_005e3f20(void)
// callers(0): 
// callees(1): 005e387c FUN_005e387c

void FUN_005e3f20(undefined4 *param_1)

{
  *param_1 = PTR_PTR_0071c7b0;
  FUN_005e387c();
  return;
}



//==== 005e3f50  ns=Global  size=0xc
// sig: undefined FUN_005e3f50(void)
// callers(0): 
// callees(0): 

void FUN_005e3f50(undefined4 *param_1)

{
  *param_1 = PTR_PTR_0071c7b0;
  return;
}



//==== 005e3f5c  ns=Global  size=0xc
// sig: undefined FUN_005e3f5c(void)
// callers(3): 005e3f68 FUN_005e3f68; 005e3fa8 FUN_005e3fa8; 005e3fb8 FUN_005e3fb8
// callees(0): 

void FUN_005e3f5c(undefined4 *param_1)

{
  *param_1 = PTR_PTR_0071c7b0;
  return;
}



//==== 005e3f68  ns=Global  size=0x40
// sig: undefined FUN_005e3f68(void)
// callers(0): 
// callees(2): 005e387c FUN_005e387c; 005e3f5c FUN_005e3f5c

void FUN_005e3f68(undefined4 *param_1)

{
  *param_1 = PTR_PTR_0071c7b4;
  FUN_005e3f5c();
  FUN_005e387c(param_1);
  return;
}



//==== 005e3fa8  ns=Global  size=0x10
// sig: undefined FUN_005e3fa8(void)
// callers(0): 
// callees(1): 005e3f5c FUN_005e3f5c

void FUN_005e3fa8(undefined4 *param_1)

{
  *param_1 = PTR_PTR_0071c7b4;
  FUN_005e3f5c();
  return;
}



//==== 005e3fb8  ns=Global  size=0x10
// sig: undefined FUN_005e3fb8(void)
// callers(6): 005e3fc8 FUN_005e3fc8; 005e4008 FUN_005e4008; 005e4018 FUN_005e4018; 005e4028 FUN_005e4028; 005e4068 FUN_005e4068; 005e4078 FUN_005e4078
// callees(1): 005e3f5c FUN_005e3f5c

void FUN_005e3fb8(undefined4 *param_1)

{
  *param_1 = PTR_PTR_0071c7b4;
  FUN_005e3f5c();
  return;
}



//==== 005e3fc8  ns=Global  size=0x40
// sig: undefined FUN_005e3fc8(void)
// callers(0): 
// callees(2): 005e387c FUN_005e387c; 005e3fb8 FUN_005e3fb8

void FUN_005e3fc8(undefined4 *param_1)

{
  *param_1 = PTR_PTR_0071c7b8;
  FUN_005e3fb8();
  FUN_005e387c(param_1);
  return;
}



//==== 005e4008  ns=Global  size=0x10
// sig: undefined FUN_005e4008(void)
// callers(0): 
// callees(1): 005e3fb8 FUN_005e3fb8

void FUN_005e4008(undefined4 *param_1)

{
  *param_1 = PTR_PTR_0071c7b8;
  FUN_005e3fb8();
  return;
}



//==== 005e4018  ns=Global  size=0x10
// sig: undefined FUN_005e4018(void)
// callers(0): 
// callees(1): 005e3fb8 FUN_005e3fb8

void FUN_005e4018(undefined4 *param_1)

{
  *param_1 = PTR_PTR_0071c7b8;
  FUN_005e3fb8();
  return;
}



//==== 005e4028  ns=Global  size=0x40
// sig: undefined FUN_005e4028(void)
// callers(0): 
// callees(2): 005e387c FUN_005e387c; 005e3fb8 FUN_005e3fb8

void FUN_005e4028(undefined4 *param_1)

{
  *param_1 = PTR_PTR_0071c7bc;
  FUN_005e3fb8();
  FUN_005e387c(param_1);
  return;
}



//==== 005e4068  ns=Global  size=0x10
// sig: undefined FUN_005e4068(void)
// callers(0): 
// callees(1): 005e3fb8 FUN_005e3fb8

void FUN_005e4068(undefined4 *param_1)

{
  *param_1 = PTR_PTR_0071c7bc;
  FUN_005e3fb8();
  return;
}



//==== 005e4078  ns=Global  size=0x10
// sig: undefined FUN_005e4078(void)
// callers(0): 
// callees(1): 005e3fb8 FUN_005e3fb8

void FUN_005e4078(undefined4 *param_1)

{
  *param_1 = PTR_PTR_0071c7bc;
  FUN_005e3fb8();
  return;
}



//==== 005e4088  ns=Global  size=0x1cc
// sig: undefined FUN_005e4088(void)
// callers(0): 
// callees(0): 

/* WARNING: Removing unreachable block (ram,0x005e4144) */
/* WARNING: Removing unreachable block (ram,0x005e4188) */
/* WARNING: Removing unreachable block (ram,0x005e41a0) */
/* WARNING: Removing unreachable block (ram,0x005e41b0) */
/* WARNING: Removing unreachable block (ram,0x005e41b8) */
/* WARNING: Removing unreachable block (ram,0x005e4200) */
/* WARNING: Removing unreachable block (ram,0x005e4208) */
/* WARNING: Removing unreachable block (ram,0x005e4248) */
/* WARNING: Removing unreachable block (ram,0x005e41c0) */
/* WARNING: Removing unreachable block (ram,0x005e424c) */
/* WARNING: Removing unreachable block (ram,0x005e4158) */

undefined4 FUN_005e4088(int *param_1,undefined8 param_2,undefined4 param_3,undefined4 param_4)

{
  int *piVar1;
  undefined1 local_60 [40];
  
  piVar1 = *(int **)(*param_1 + -4);
  (*(code *)**(undefined4 **)(*piVar1 + 0x1c))
            (piVar1,param_4,6,param_3,(int)param_1 + *(int *)(*param_1 + -8),param_2,param_1,
             local_60);
  return 0;
}



//==== 005e4254  ns=Global  size=0x50
// sig: undefined FUN_005e4254(void)
// callers(0): 
// callees(1): 005cc784 FUN_005cc784

uint FUN_005e4254(int param_1,int param_2)

{
  uint uVar1;
  
  uVar1 = 1;
  if (param_2 != param_1) {
    uVar1 = FUN_005cc784(*(undefined4 *)(param_1 + 4),*(undefined4 *)(param_2 + 4));
    uVar1 = (((int)uVar1 >> 0x1f ^ uVar1) - ((int)uVar1 >> 0x1f)) - 1 >> 0x1f;
  }
  return uVar1;
}



//==== 005e42a4  ns=Global  size=0x74
// sig: undefined FUN_005e42a4(void)
// callers(2): 005e4318 FUN_005e4318; 005e4614 FUN_005e4614
// callees(1): 005cc784 FUN_005cc784

undefined4 FUN_005e42a4(int param_1,int param_2,undefined4 param_3,undefined4 *param_4)

{
  int iVar1;
  
  if ((param_1 != param_2) &&
     (iVar1 = FUN_005cc784(*(undefined4 *)(param_1 + 4),*(undefined4 *)(param_2 + 4)), iVar1 != 0))
  {
    return 0;
  }
  *param_4 = param_3;
  param_4[1] = 6;
  param_4[3] = 8;
  return 1;
}



//==== 005e4318  ns=Global  size=0x2fc
// sig: undefined FUN_005e4318(void)
// callers(0): 
// callees(2): 005cc784 FUN_005cc784; 005e42a4 FUN_005e42a4

/* WARNING: Removing unreachable block (ram,0x005e44e4) */
/* WARNING: Removing unreachable block (ram,0x005e44ec) */
/* WARNING: Removing unreachable block (ram,0x005e4478) */
/* WARNING: Removing unreachable block (ram,0x005e4480) */
/* WARNING: Removing unreachable block (ram,0x005e4520) */
/* WARNING: Removing unreachable block (ram,0x005e45d4) */
/* WARNING: Removing unreachable block (ram,0x005e45e0) */
/* WARNING: Removing unreachable block (ram,0x005e45f0) */
/* WARNING: Removing unreachable block (ram,0x005e452c) */

uint FUN_005e4318(int param_1,undefined8 param_2,int *param_3,int *param_4)

{
  uint uVar1;
  int *piVar2;
  char cVar4;
  int iVar3;
  uint uVar5;
  int iVar6;
  undefined1 local_80 [24];
  
  cVar4 = FUN_005e42a4(param_1,param_2,param_3);
  if (cVar4 == '\0') {
    uVar5 = param_4[2];
    if ((uVar5 & 0x10) != 0) {
      uVar5 = *(uint *)(param_1 + 8);
    }
    iVar6 = *(int *)(param_1 + 0xc);
    while (iVar6 != 0) {
      iVar6 = iVar6 + -1;
      uVar1 = *(uint *)(param_1 + iVar6 * 8 + 0x14);
      if (((uVar1 >> 1 & 1) != 0) || ((uVar5 & 1) != 0)) {
        iVar3 = 0;
        if (param_3 != (int *)0x0) {
          iVar3 = (int)uVar1 >> 8;
          if ((uVar1 & 1) != 0) {
            iVar3 = *(int *)(iVar3 + *param_3);
          }
          iVar3 = (int)param_3 + iVar3;
        }
        piVar2 = *(int **)(param_1 + iVar6 * 8 + 0x10);
        cVar4 = (*(code *)**(undefined4 **)(*piVar2 + 0x18))(piVar2,param_2,iVar3,local_80);
        if (cVar4 != '\0') {
          iVar3 = param_4[3];
          if (iVar3 == 0) {
            param_4[2] = uVar5;
            *param_4 = 0;
            param_4[3] = 0;
            param_4[1] = 0;
            goto LAB_005e453c;
          }
          if (*param_4 != 0) {
            param_4[1] = 2;
            *param_4 = 0;
            return 1;
          }
          if ((iVar3 == 8) ||
             ((iVar3 != 0 &&
              (iVar3 = FUN_005cc784(uRam00000004,*(undefined4 *)(iVar3 + 4)), iVar3 != 0)))) {
            param_4[1] = 2;
            return 1;
          }
          param_4[1] = param_4[1];
        }
      }
    }
    uVar5 = param_4[1] >> 0x1f;
    uVar5 = uVar5 - (uVar5 ^ param_4[1]) >> 0x1f;
  }
  else {
LAB_005e453c:
    uVar5 = 1;
  }
  return uVar5;
}



//==== 005e4614  ns=Global  size=0x9c
// sig: undefined FUN_005e4614(void)
// callers(0): 
// callees(1): 005e42a4 FUN_005e42a4

undefined1 FUN_005e4614(int param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  char cVar1;
  undefined1 uVar2;
  
  cVar1 = FUN_005e42a4();
  uVar2 = 1;
  if (cVar1 == '\0') {
    uVar2 = (*(code *)**(undefined4 **)(**(int **)(param_1 + 8) + 0x18))
                      (*(int **)(param_1 + 8),param_2,param_3,param_4);
  }
  return uVar2;
}



//==== 005e46b0  ns=Global  size=0x628
// sig: undefined FUN_005e46b0(void)
// callers(0): 
// callees(1): 005cc784 FUN_005cc784

/* WARNING: Removing unreachable block (ram,0x005e4b24) */
/* WARNING: Removing unreachable block (ram,0x005e4b2c) */
/* WARNING: Removing unreachable block (ram,0x005e4b94) */
/* WARNING: Removing unreachable block (ram,0x005e4cb8) */
/* WARNING: Removing unreachable block (ram,0x005e4b40) */
/* WARNING: Removing unreachable block (ram,0x005e4b4c) */
/* WARNING: Removing unreachable block (ram,0x005e4b60) */
/* WARNING: Removing unreachable block (ram,0x005e4c04) */

uint FUN_005e46b0(int *param_1,int *param_2,ulonglong param_3,int *param_4,int *param_5,int *param_6
                 ,int *param_7,uint *param_8)

{
  bool bVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar7;
  ulonglong uVar6;
  int iVar8;
  undefined1 local_d0 [64];
  
  if ((param_8[4] & 0x10) != 0) {
    param_8[4] = param_1[2];
  }
  if ((param_5 == param_7) &&
     ((param_1 == param_6 || (iVar2 = FUN_005cc784(param_1[1],param_6[1]), iVar2 == 0)))) {
    uVar4 = 0;
    param_8[2] = (uint)param_3;
  }
  else if ((param_1 == param_4) || (iVar2 = FUN_005cc784(param_1[1],param_4[1]), iVar2 == 0)) {
    param_8[1] = (uint)param_3;
    *param_8 = (uint)param_5;
    if ((int)param_2 < 0) {
      if (param_2 == (int *)0xfffffffe) {
        uVar4 = 0;
        param_8[3] = 1;
      }
      else {
LAB_005e4bb8:
        uVar4 = 0;
      }
    }
    else {
      uVar4 = 0;
      uVar3 = (int)param_5 + (int)param_2 ^ (uint)param_7;
      uVar5 = (int)uVar3 >> 0x1f;
      uVar5 = (int)(uVar5 - (uVar5 ^ uVar3)) >> 0x1f;
      uVar6 = ((ulonglong)uVar5 & 3) << 0x1d | (ulonglong)(uVar5 >> 3);
      param_8[3] = ((uint)(uVar6 << 3) | (uint)uVar6 >> 0x1d) + 6;
    }
  }
  else {
    uVar4 = 0;
    iVar2 = param_1[3];
LAB_005e4884:
    do {
      bVar1 = iVar2 == 0;
      iVar2 = iVar2 + -1;
      if (bVar1) break;
      uVar5 = param_1[iVar2 * 2 + 5];
      iVar8 = (int)uVar5 >> 8;
      uVar6 = param_3;
      if ((uVar5 & 1) != 0) {
        uVar6 = param_3 | 1;
        iVar8 = *(int *)(iVar8 + *param_5);
      }
      if ((uVar5 & 2) == 0) {
        if ((param_2 == (int *)0xfffffffe) && ((param_8[4] & 3) == 0)) goto LAB_005e4884;
        uVar6 = ((uVar6 << 0x20) >> 0x22) << 2 | uVar6 & 1;
      }
      uVar3 = (*(code *)**(undefined4 **)(*(int *)param_1[iVar2 * 2 + 4] + 0x1c))
                        ((int *)param_1[iVar2 * 2 + 4],param_2,uVar6 & 0xffffffff,param_4,
                         (int)param_5 + iVar8,param_6,param_7,local_d0);
      uVar5 = param_8[2];
      param_8[2] = uVar5;
      if ((uVar4 & 0xff) == 0) {
        uVar7 = *param_8;
        if (uVar7 != 0) goto LAB_005e4790;
        param_8[1] = 0;
        *param_8 = 0;
        uVar4 = uVar3;
      }
      else {
        uVar7 = *param_8;
        if (uVar7 != 0) {
LAB_005e4790:
          if (uVar7 == 0) {
            param_8[1] = param_8[1];
          }
          else if ((((int)uVar7 >> 0x1f) - ((int)uVar7 >> 0x1f ^ uVar7) >> 0x1f & uVar3) != 0) {
            uVar3 = param_8[3];
            if (((int)uVar5 < 4) || (((uVar5 & 1) != 0 && ((param_8[4] & 2) != 0)))) {
              if ((int)uVar3 < 1) {
                if ((int)param_2 < 0) {
                  if (param_2 == (int *)0xfffffffe) goto LAB_005e4b88;
                  uVar3 = (*(code *)**(undefined4 **)(*param_4 + 0x20))
                                    (param_4,param_2,uVar7,param_6,param_7);
                }
                else {
                  uVar3 = 6;
                  if ((int *)(uVar7 + (int)param_2) != param_7) {
LAB_005e4b88:
                    uVar3 = 1;
                  }
                }
              }
              if ((3 < (int)uVar3) && (((uVar3 & 1) == 0 || ((param_1[2] & 2U) == 0))))
              goto LAB_005e4824;
              if ((int)param_2 < 0) {
                if (param_2 == (int *)0xfffffffe) goto LAB_005e4824;
                uVar5 = (*(code *)**(undefined4 **)(*param_4 + 0x20))
                                  (param_4,param_2,0,param_6,param_7);
              }
              else {
                uVar5 = 6;
                if (param_2 != param_7) goto LAB_005e4824;
              }
            }
            else {
              if (uVar3 == 0) {
                uVar3 = 1;
              }
LAB_005e4824:
              uVar5 = 1;
            }
            if ((int)(uVar5 ^ uVar3) < 4) {
              if (3 < (int)(uVar5 & uVar3)) {
                param_8[3] = 2;
                *param_8 = 0;
                return 1;
              }
              uVar5 = param_8[2];
              *param_8 = 0;
              param_8[3] = 1;
              uVar4 = 1;
            }
            else {
              if (3 < (int)uVar5) {
                uVar4 = 0;
                *param_8 = 0;
                param_8[1] = 0;
                uVar3 = uVar5;
              }
              param_8[3] = uVar3;
              if (((uVar3 & 2) != 0) || ((uVar3 & 1) == 0)) goto LAB_005e4bb8;
              uVar5 = param_8[2];
            }
          }
        }
      }
    } while (uVar5 != 4);
    uVar4 = uVar4 & 0xff;
  }
  return uVar4;
}



//==== 005e4cd8  ns=Global  size=0x1b0
// sig: undefined FUN_005e4cd8(void)
// callers(0): 
// callees(1): 005cc784 FUN_005cc784

undefined1
FUN_005e4cd8(int param_1,int param_2,uint param_3,int param_4,uint param_5,int param_6,uint param_7,
            uint *param_8)

{
  undefined4 uVar1;
  uint uVar2;
  int iVar3;
  undefined1 uVar4;
  ulonglong uVar5;
  
  if (param_1 != param_4) {
    uVar1 = *(undefined4 *)(param_1 + 4);
    iVar3 = FUN_005cc784(uVar1,*(undefined4 *)(param_4 + 4));
    if (iVar3 != 0) {
      if ((param_5 == param_7) &&
         ((param_1 == param_6 ||
          (iVar3 = FUN_005cc784(uVar1,*(undefined4 *)(param_6 + 4)), iVar3 == 0)))) {
        param_8[2] = param_3;
        return 0;
      }
      uVar4 = (*(code *)**(undefined4 **)(**(int **)(param_1 + 8) + 0x1c))
                        (*(int **)(param_1 + 8),param_2,param_3,param_4,param_5,param_6,param_7,
                         param_8);
      return uVar4;
    }
  }
  *param_8 = param_5;
  param_8[1] = param_3;
  if (param_2 < 0) {
    if (param_2 == -2) {
      param_8[3] = 1;
    }
  }
  else {
    param_7 = param_5 + param_2 ^ param_7;
    uVar2 = (int)param_7 >> 0x1f;
    uVar2 = (int)(uVar2 - (uVar2 ^ param_7)) >> 0x1f;
    uVar5 = ((ulonglong)uVar2 & 3) << 0x1d | (ulonglong)(uVar2 >> 3);
    param_8[3] = ((uint)(uVar5 << 3) | (uint)uVar5 >> 0x1d) + 6;
  }
  return 0;
}



//==== 005e4e88  ns=Global  size=0xf0
// sig: undefined FUN_005e4e88(void)
// callers(0): 
// callees(1): 005cc784 FUN_005cc784

undefined8
FUN_005e4e88(int param_1,undefined8 param_2,int param_3,int param_4,int param_5,int param_6,
            int param_7,int *param_8)

{
  int iVar1;
  
  if ((param_5 == param_7) &&
     ((param_1 == param_6 ||
      (iVar1 = FUN_005cc784(*(undefined4 *)(param_1 + 4),*(undefined4 *)(param_6 + 4)), iVar1 == 0))
     )) {
    param_8[2] = param_3;
    return 0;
  }
  if ((param_1 == param_4) ||
     (iVar1 = FUN_005cc784(*(undefined4 *)(param_1 + 4),*(undefined4 *)(param_4 + 4)), iVar1 == 0))
  {
    *param_8 = param_5;
    param_8[3] = 1;
    param_8[1] = param_3;
  }
  return 0;
}



//==== 005e4f78  ns=Global  size=0x1ec
// sig: undefined FUN_005e4f78(void)
// callers(0): 
// callees(1): 005cc784 FUN_005cc784

uint FUN_005e4f78(int param_1,int param_2,int *param_3,int param_4,int *param_5)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  byte in_cr0;
  byte in_cr1;
  byte in_cr2;
  byte in_cr3;
  byte bVar6;
  byte unaff_cr4;
  byte in_cr5;
  byte in_cr6;
  byte in_cr7;
  uint uStack00000008;
  
  uStack00000008 =
       (uint)(in_cr0 & 0xf) << 0x1c | (uint)(in_cr1 & 0xf) << 0x18 | (uint)(in_cr2 & 0xf) << 0x14 |
       (uint)(in_cr3 & 0xf) << 0x10 | (uint)(unaff_cr4 & 0xf) << 0xc | (uint)(in_cr5 & 0xf) << 8 |
       (uint)(in_cr6 & 0xf) << 4 | (uint)(in_cr7 & 0xf);
  if ((param_3 == param_5) &&
     ((param_1 == param_4 ||
      (iVar3 = FUN_005cc784(*(undefined4 *)(param_1 + 4),*(undefined4 *)(param_4 + 4)), iVar3 == 0))
     )) {
    return 6;
  }
  iVar3 = *(int *)(param_1 + 0xc);
  bVar6 = (param_2 == -3) << 1;
  iVar5 = iVar3 * 8 + 0x10;
LAB_005e5004:
  do {
    do {
      bVar1 = iVar3 == 0;
      iVar5 = iVar5 + -8;
      iVar3 = iVar3 + -1;
      if (bVar1) {
        return 1;
      }
      uVar4 = *(uint *)(param_1 + iVar5 + 4);
      bVar1 = (uVar4 & 1) != 0;
      iVar2 = (int)uVar4 >> 8;
    } while ((uVar4 & 2) == 0);
    if (bVar1) {
      if ((bool)(bVar6 >> 1 & 1)) goto LAB_005e5004;
      iVar2 = *(int *)(iVar2 + *param_3);
    }
    uVar4 = (*(code *)**(undefined4 **)(**(int **)(param_1 + iVar5) + 0x20))
                      (*(int **)(param_1 + iVar5),param_2,(int)param_3 + iVar2,param_4,param_5);
    if (3 < (int)uVar4) {
      if (!bVar1) {
        return uVar4;
      }
      return uVar4 | 1;
    }
  } while( true );
}



//==== 005e5164  ns=Global  size=0xe8
// sig: undefined FUN_005e5164(void)
// callers(0): 
// callees(1): 005cc784 FUN_005cc784

undefined4 FUN_005e5164(int param_1,undefined4 param_2,int param_3,int param_4,int param_5)

{
  int iVar1;
  undefined4 uVar2;
  
  if ((param_5 == param_3) &&
     ((param_1 == param_4 ||
      (iVar1 = FUN_005cc784(*(undefined4 *)(param_1 + 4),*(undefined4 *)(param_4 + 4)), iVar1 == 0))
     )) {
    return 6;
  }
  uVar2 = (*(code *)**(undefined4 **)(**(int **)(param_1 + 8) + 0x20))
                    (*(int **)(param_1 + 8),param_2,param_3,param_4,param_5);
  return uVar2;
}



//==== 005e524c  ns=Global  size=0x38
// sig: undefined FUN_005e524c(void)
// callers(1): 005e5738 FUN_005e5738
// callees(0): 

byte * FUN_005e524c(byte *param_1,ulonglong *param_2)

{
  byte bVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  
  uVar4 = 0;
  uVar3 = 0;
  do {
    bVar1 = *param_1;
    param_1 = param_1 + 1;
    uVar2 = uVar4 & 0x7f;
    uVar4 = uVar4 + 7;
    uVar3 = uVar3 | ((ulonglong)bVar1 & 0x7f) << uVar2;
  } while ((char)bVar1 < '\0');
  *param_2 = uVar3;
  return param_1;
}



//==== 005e5284  ns=Global  size=0x58
// sig: undefined FUN_005e5284(void)
// callers(0): 
// callees(0): 

byte * FUN_005e5284(byte *param_1,ulonglong *param_2)

{
  byte bVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  
  uVar4 = 0;
  uVar3 = 0;
  do {
    bVar1 = *param_1;
    param_1 = param_1 + 1;
    uVar2 = uVar4 & 0x7f;
    uVar4 = uVar4 + 7;
    uVar3 = uVar3 | ((ulonglong)bVar1 & 0x7f) << uVar2;
  } while ((char)bVar1 < '\0');
  if (((uVar4 & 0xffffffff) < 0x40) && ((bVar1 & 0x40) != 0)) {
    uVar3 = uVar3 | -1L << (uVar4 & 0x7f);
  }
  *param_2 = uVar3;
  return param_1;
}



//==== 005e52dc  ns=Global  size=0xdc
// sig: undefined FUN_005e52dc(void)
// callers(0): 
// callees(0): 

bool FUN_005e52dc(int *param_1,int *param_2,undefined4 *param_3)

{
  char cVar1;
  undefined4 *local_30 [4];
  
  local_30[0] = (undefined4 *)*param_3;
  cVar1 = (*(code *)**(undefined4 **)(*param_2 + 8))(param_2);
  if (cVar1 != '\0') {
    local_30[0] = (undefined4 *)*local_30[0];
  }
  cVar1 = (*(code *)**(undefined4 **)(*param_1 + 0x10))(param_1,param_2,local_30,1);
  if (cVar1 != '\0') {
    *param_3 = local_30[0];
  }
  return cVar1 != '\0';
}



//==== 005e53b8  ns=Global  size=0xa8
// sig: undefined FUN_005e53b8(void)
// callers(2): 005e55bc FUN_005e55bc; 005e5738 FUN_005e5738
// callees(1): 005c4840 idol::abort

undefined4 * FUN_005e53b8(ulonglong param_1,undefined8 param_2,int param_3,undefined4 *param_4)

{
  int unaff_r2;
  undefined4 *puVar1;
  
  if (((uint)param_1 & 0xff) == 0x50) {
    puVar1 = (undefined4 *)(param_3 + 3U & 0xfffffffc);
    *param_4 = *puVar1;
    return puVar1 + 1;
  }
  if (0xc < (param_1 & 0xf)) {
                    /* WARNING: Subroutine does not return */
    idol::abort();
  }
                    /* WARNING: Could not recover jumptable at 0x005e5420. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  puVar1 = (undefined4 *)
           (*(code *)(*(int *)((int)((param_1 & 0xf) << 2) + *(int *)(unaff_r2 + -0x5b68)) +
                     *(int *)(unaff_r2 + -0x5b68)))();
  return puVar1;
}



//==== 005e55bc  ns=Global  size=0xc8
// sig: undefined FUN_005e55bc(void)
// callers(0): 
// callees(2): 005c4840 idol::abort; 005e53b8 FUN_005e53b8

undefined4 FUN_005e55bc(int param_1,ulonglong param_2)

{
  byte bVar1;
  byte bVar2;
  longlong lVar3;
  undefined4 local_10 [4];
  
  bVar1 = *(byte *)(param_1 + 0x14);
  if (bVar1 == 0xff) {
    lVar3 = 0;
  }
  else {
    bVar2 = bVar1 & 7;
    if (bVar2 == 2) {
      FUN_005e53b8(bVar1,*(undefined4 *)(param_1 + 8),
                   (ulonglong)*(uint *)(param_1 + 0xc) + (param_2 & 0x7fffffff) * -2 & 0xffffffff,
                   local_10);
      return local_10[0];
    }
    if (bVar2 < 3) {
      lVar3 = (param_2 & 0x3fffffff) << 2;
      if ((bVar1 & 7) != 0) {
LAB_005e5600:
                    /* WARNING: Subroutine does not return */
        idol::abort();
      }
    }
    else if (bVar2 == 3) {
      lVar3 = (param_2 & 0x3fffffff) << 2;
    }
    else {
      lVar3 = (param_2 & 0x1fffffff) << 3;
      if (bVar2 != 4) goto LAB_005e5600;
    }
  }
  FUN_005e53b8(bVar1,*(undefined4 *)(param_1 + 8),
               (ulonglong)*(uint *)(param_1 + 0xc) - lVar3 & 0xffffffff,local_10);
  return local_10[0];
}



//==== 005e5688  ns=Global  size=0xac
// sig: undefined FUN_005e5688(void)
// callers(1): 005e5738 FUN_005e5738
// callees(4): 005c4840 idol::abort; 005ddd18 FUN_005ddd18; 005ddd20 FUN_005ddd20; 005ddd28 FUN_005ddd28

undefined4 FUN_005e5688(uint param_1,undefined4 param_2)

{
  undefined4 uVar1;
  
  if (param_1 != 0xff) {
    param_1 = param_1 & 0x70;
    if (param_1 == 0x20) {
      uVar1 = FUN_005ddd28(param_2);
      return uVar1;
    }
    if (param_1 < 0x21) {
      if ((param_1 != 0) && (param_1 != 0x10)) goto LAB_005e56c4;
    }
    else {
      if (param_1 == 0x40) {
        uVar1 = FUN_005ddd18(param_2);
        return uVar1;
      }
      if (param_1 != 0x50) {
        if (param_1 == 0x30) {
          uVar1 = FUN_005ddd20(param_2);
          return uVar1;
        }
LAB_005e56c4:
                    /* WARNING: Subroutine does not return */
        idol::abort();
      }
    }
  }
  return 0;
}



//==== 005e5738  ns=Global  size=0x144
// sig: undefined FUN_005e5738(void)
// callers(0): 
// callees(4): 005ddd18 FUN_005ddd18; 005e524c FUN_005e524c; 005e53b8 FUN_005e53b8; 005e5688 FUN_005e5688

int FUN_005e5738(int param_1,char *param_2,undefined4 *param_3)

{
  char cVar1;
  undefined4 uVar2;
  char *pcVar3;
  int iVar4;
  undefined1 local_40 [4];
  int iStack_3c;
  
  uVar2 = 0;
  if (param_1 != 0) {
    uVar2 = FUN_005ddd18(param_1);
  }
  *param_3 = uVar2;
  cVar1 = *param_2;
  if (cVar1 == -1) {
    param_3[1] = uVar2;
    cVar1 = param_2[1];
    param_2 = param_2 + 2;
    *(char *)(param_3 + 5) = cVar1;
  }
  else {
    uVar2 = FUN_005e5688(cVar1,param_1);
    pcVar3 = (char *)FUN_005e53b8(cVar1,uVar2,param_2 + 1,param_3 + 1);
    param_2 = pcVar3 + 1;
    cVar1 = *pcVar3;
    *(char *)(param_3 + 5) = cVar1;
  }
  if (cVar1 == -1) {
    param_3[3] = 0;
  }
  else {
    param_2 = (char *)FUN_005e524c(param_2,local_40);
    param_3[3] = param_2 + iStack_3c;
  }
  *(char *)((int)param_3 + 0x15) = *param_2;
  iVar4 = FUN_005e524c(param_2 + 1,local_40);
  param_3[4] = iVar4 + iStack_3c;
  return iVar4;
}



//==== 005e587c  ns=Global  size=0x30
// sig: undefined FUN_005e587c(void)
// callers(0): 
// callees(2): 005e5e38 FUN_005e5e38; 005e5fcc FUN_005e5fcc

void FUN_005e587c(int param_1)

{
  FUN_005e5fcc(param_1);
                    /* WARNING: Subroutine does not return */
  FUN_005e5e38(*(undefined4 *)(param_1 + -0x28));
}



//==== 005e5e38  ns=Global  size=0x28
// sig: undefined FUN_005e5e38(void)
// callers(1): 005e587c FUN_005e587c
// callees(1): 005e6980 FUN_005e6980

void FUN_005e5e38(undefined4 *param_1)

{
  (*(code *)*param_1)();
                    /* WARNING: Subroutine does not return */
  FUN_005e6980();
}



//==== 005e5e64  ns=Global  size=0x28
// sig: undefined FUN_005e5e64(void)
// callers(0): 
// callees(1): 005c4840 idol::abort

void FUN_005e5e64(undefined4 *param_1)

{
  (*(code *)*param_1)();
                    /* WARNING: Subroutine does not return */
  idol::abort();
}



//==== 005e5e90  ns=Global  size=0x3c
// sig: undefined FUN_005e5e90(void)
// callers(0): 
// callees(1): 005e6280 FUN_005e6280

uint FUN_005e5e90(void)

{
  uint uVar1;
  int iVar2;
  
  iVar2 = FUN_005e6280();
  uVar1 = (int)*(uint *)(iVar2 + 4) >> 0x1f;
  return uVar1 - (uVar1 ^ *(uint *)(iVar2 + 4)) >> 0x1f;
}



//==== 005e5ecc  ns=Global  size=0xfc
// sig: undefined FUN_005e5ecc(void)
// callers(0): 
// callees(4): 005ddd30 FUN_005ddd30; 005e61fc FUN_005e61fc; 005e6238 FUN_005e6238; 005e6980 FUN_005e6980

void FUN_005e5ecc(void)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  
  piVar2 = (int *)FUN_005e6238();
  iVar1 = *piVar2;
  if (iVar1 == 0) {
    return;
  }
  if (*(longlong *)(iVar1 + 0x30) != 0x474e5543432b2b00) {
    *piVar2 = 0;
    FUN_005ddd30(iVar1 + 0x30);
    return;
  }
  iVar3 = *(int *)(iVar1 + 0x14);
  if (iVar3 < 0) {
    iVar3 = iVar3 + 1;
    if (iVar3 == 0) {
      *(undefined4 *)(iVar1 + 0x14) = 0;
      *piVar2 = *(int *)(iVar1 + 0x10);
      return;
    }
  }
  else {
    iVar3 = iVar3 + -1;
    if (iVar3 == 0) {
      *piVar2 = *(int *)(iVar1 + 0x10);
      FUN_005ddd30(iVar1 + 0x30);
      if (*piVar2 != 0) {
        return;
      }
      FUN_005e61fc();
      return;
    }
    if (iVar3 < 0) {
                    /* WARNING: Subroutine does not return */
      FUN_005e6980();
    }
  }
  *(int *)(iVar1 + 0x14) = iVar3;
  return;
}



//==== 005e5fcc  ns=Global  size=0xc8
// sig: undefined FUN_005e5fcc(void)
// callers(1): 005e587c FUN_005e587c
// callees(2): 005e6280 FUN_005e6280; 005e6980 FUN_005e6980

undefined4 FUN_005e5fcc(longlong *param_1)

{
  longlong *plVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  longlong *plVar5;
  
  piVar4 = (int *)FUN_005e6280();
  plVar5 = param_1 + -6;
  plVar1 = (longlong *)*piVar4;
  if (*param_1 == 0x474e5543432b2b00) {
    iVar2 = *(int *)((int)param_1 + -0x1c);
    iVar3 = -iVar2;
    if (-1 < iVar2) {
      iVar3 = iVar2;
    }
    *(int *)((int)param_1 + -0x1c) = iVar3 + 1;
    piVar4[1] = piVar4[1] + -1;
    if (plVar1 != plVar5) {
      *(longlong **)(param_1 + -4) = plVar1;
      *piVar4 = (int)plVar5;
    }
    return *(undefined4 *)(param_1 + -1);
  }
  if (plVar1 == (longlong *)0x0) {
    *piVar4 = (int)plVar5;
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_005e6980();
}



//==== 005e60a8  ns=Global  size=0x70
// sig: undefined FUN_005e60a8(void)
// callers(0): 
// callees(2): 005d580c FUN_005d580c; 005ddd30 FUN_005ddd30

void FUN_005e60a8(int *param_1)

{
  int iVar1;
  int iVar2;
  
  if (param_1 != (int *)0x0) {
    iVar1 = *param_1;
    while (iVar1 != 0) {
      iVar2 = iVar1 + 0x30;
      iVar1 = *(int *)(iVar1 + 0x10);
      FUN_005ddd30(iVar2);
    }
    FUN_005d580c(param_1);
  }
  return;
}



//==== 005e6118  ns=Global  size=0xc4
// sig: undefined FUN_005e6118(void)
// callers(2): 005e61dc FUN_005e61dc; 005e61ec FUN_005e61ec
// callees(2): 005e2f70 FUN_005e2f70; 005e31cc FUN_005e31cc

void FUN_005e6118(int param_1,int param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  
  puVar2 = PTR_PTR_0071c7c8;
  puVar1 = PTR_DAT_0071c7c4;
  if (param_1 == 1) {
    if (param_2 == 0xffff) {
      PTR_DAT_0071c7c4[4] = 0;
      uVar4 = FUN_005e31cc(puVar1,puVar2);
      uVar3 = (ulonglong)((int)uVar4 >> 0x1f);
      puVar1[4] = (byte)(((uVar3 ^ uVar4) - uVar3) + -1 >> 0x18) >> 7;
    }
  }
  else if (((param_1 == 0) && (param_2 == 0xffff)) && (PTR_DAT_0071c7c4[4] != '\0')) {
    FUN_005e2f70(*(undefined4 *)PTR_DAT_0071c7c4);
    return;
  }
  return;
}



//==== 005e61dc  ns=Global  size=0x10
// sig: undefined FUN_005e61dc(void)
// callers(0): 
// callees(1): 005e6118 FUN_005e6118

void FUN_005e61dc(void)

{
  FUN_005e6118(0,0xffff);
  return;
}



//==== 005e61ec  ns=Global  size=0x10
// sig: undefined FUN_005e61ec(void)
// callers(1): 00014f5c crt0::__do_global_ctors_aux
// callees(1): 005e6118 FUN_005e6118

void FUN_005e61ec(void)

{
  FUN_005e6118(1,0xffff);
  return;
}



//==== 005e61fc  ns=Global  size=0x3c
// sig: undefined FUN_005e61fc(void)
// callers(1): 005e5ecc FUN_005e5ecc
// callees(1): 005e36ac FUN_005e36ac

void FUN_005e61fc(void)

{
  if (PTR_DAT_0071c7c4[4] != '\0') {
    FUN_005e36ac(*(undefined4 *)PTR_DAT_0071c7c4);
  }
  return;
}



//==== 005e6238  ns=Global  size=0x48
// sig: undefined FUN_005e6238(void)
// callers(1): 005e5ecc FUN_005e5ecc
// callees(1): 005e3314 FUN_005e3314

undefined * FUN_005e6238(void)

{
  undefined *puVar1;
  
  puVar1 = PTR_DAT_0071c7c4 + 8;
  if (PTR_DAT_0071c7c4[4] != '\0') {
    puVar1 = (undefined *)FUN_005e3314(*(undefined4 *)PTR_DAT_0071c7c4);
  }
  return puVar1;
}



//==== 005e6280  ns=Global  size=0xac
// sig: undefined FUN_005e6280(void)
// callers(2): 005e5e90 FUN_005e5e90; 005e5fcc FUN_005e5fcc
// callees(4): 005d5838 FUN_005d5838; 005e3314 FUN_005e3314; 005e3408 FUN_005e3408; 005e6980 FUN_005e6980

undefined4 * FUN_005e6280(void)

{
  undefined *puVar1;
  undefined4 *puVar2;
  int iVar3;
  
  puVar1 = PTR_DAT_0071c7c4;
  if (PTR_DAT_0071c7c4[4] == '\0') {
    puVar2 = (undefined4 *)(PTR_DAT_0071c7c4 + 8);
  }
  else {
    puVar2 = (undefined4 *)FUN_005e3314(*(undefined4 *)PTR_DAT_0071c7c4);
    if (puVar2 == (undefined4 *)0x0) {
      puVar2 = (undefined4 *)FUN_005d5838(8);
      if ((puVar2 != (undefined4 *)0x0) &&
         (iVar3 = FUN_005e3408(*(undefined4 *)puVar1,puVar2), iVar3 == 0)) {
        puVar2[1] = 0;
        *puVar2 = 0;
        return puVar2;
      }
                    /* WARNING: Subroutine does not return */
      FUN_005e6980();
    }
  }
  return puVar2;
}



//==== 005e6424  ns=Global  size=0x178
// sig: undefined FUN_005e6424(void)
// callers(1): 004d83ec idol_draw::BindVertexProgram
// callees(0): 

undefined8 * FUN_005e6424(undefined8 *param_1,undefined8 *param_2,uint param_3)

{
  undefined1 uVar1;
  undefined1 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  uint uVar10;
  undefined8 *puVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  
  uVar5 = param_3 & 3;
  uVar7 = param_3 & 0x10;
  uVar6 = param_3 & 0xc;
  uVar10 = param_3;
  puVar11 = param_2;
  puVar9 = param_1;
  puVar8 = param_1;
  if (0x1f < param_3) {
    do {
      uVar13 = puVar11[1];
      uVar12 = puVar11[2];
      param_2 = puVar11 + 4;
      uVar14 = puVar11[3];
      *puVar8 = *puVar11;
      puVar8[1] = uVar13;
      puVar8[2] = uVar12;
      puVar8[3] = uVar14;
      puVar9 = puVar8 + 4;
      if (uVar10 - 0x20 < 0x20) break;
      uVar15 = *param_2;
      uVar10 = uVar10 - 0x40;
      uVar14 = puVar11[5];
      puVar9 = puVar8 + 8;
      uVar13 = puVar11[6];
      param_2 = puVar11 + 8;
      uVar12 = puVar11[7];
      puVar8[4] = uVar15;
      puVar8[5] = uVar14;
      puVar8[6] = uVar13;
      puVar8[7] = uVar12;
      puVar11 = param_2;
      puVar8 = puVar9;
    } while (0x1f < uVar10);
  }
  puVar11 = puVar9;
  if (uVar7 != 0) {
    uVar12 = *param_2;
    puVar11 = (undefined8 *)((int)puVar9 + uVar7);
    uVar13 = param_2[1];
    param_2 = (undefined8 *)(uVar7 + (int)param_2);
    *puVar9 = uVar12;
    puVar9[1] = uVar13;
  }
  puVar9 = puVar11;
  puVar8 = param_2;
  if (uVar6 != 0) {
    puVar8 = (undefined8 *)(uVar6 + (int)param_2);
    uVar10 = param_3 >> 1 & 4;
    puVar9 = (undefined8 *)((int)puVar11 + uVar6);
    uVar4 = *(undefined4 *)(uVar10 + (int)param_2);
    uVar3 = *(undefined4 *)((int)puVar8 + -4);
    *(undefined4 *)puVar11 = *(undefined4 *)param_2;
    *(undefined4 *)(uVar10 + (int)puVar11) = uVar4;
    *(undefined4 *)((int)puVar9 + -4) = uVar3;
  }
  if (uVar5 != 0) {
    uVar10 = param_3 >> 1 & 1;
    uVar2 = *(undefined1 *)(uVar10 + (int)puVar8);
    uVar1 = *(undefined1 *)((int)puVar8 + (uVar5 - 1));
    *(undefined1 *)puVar9 = *(undefined1 *)puVar8;
    *(undefined1 *)(uVar10 + (int)puVar9) = uVar2;
    *(undefined1 *)((int)puVar9 + (uVar5 - 1)) = uVar1;
  }
  return param_1;
}



//==== 005e659c  ns=Global  size=0x1d8
// sig: undefined FUN_005e659c(void)
// callers(2): 005dc9a4 mathfunc::fmod; 005dd5a8 FUN_005dd5a8
// callees(1): 005e687c FUN_005e687c
// strings: 005e6678: '}#KxH' (raw)

undefined4 FUN_005e659c(float *param_1,int param_2)

{
  float fVar1;
  ushort uVar2;
  short sVar3;
  uint uVar4;
  int iVar5;
  ushort uVar6;
  ulonglong uVar7;
  undefined4 uVar8;
  int iVar9;
  
  uVar2 = *(ushort *)param_1;
  uVar4 = uVar2 >> 7 & 0xff;
  if (uVar4 == 0xff) {
    if (((uVar2 & 0x7f) != 0) || (uVar8 = 1, *(ushort *)((int)param_1 + 2) != 0)) {
      return 2;
    }
  }
  else {
    if ((uVar2 >> 7 & 0xff) == 0) {
      sVar3 = FUN_005e687c(param_1);
      uVar4 = (uint)sVar3;
      if (0 < sVar3) {
        return 0;
      }
      uVar2 = *(ushort *)param_1;
    }
    uVar7 = (ulonglong)uVar2;
    if ((param_2 < 0xff) && (param_2 = param_2 + uVar4, param_2 < 0xff)) {
      if (param_2 < 1) {
        iVar9 = param_2 + -1;
        uVar7 = uVar7 & 0x7f | 0x80;
        iVar5 = (int)uVar7;
        uVar6 = (ushort)uVar7;
        *(ushort *)param_1 = uVar6;
        if (iVar9 < -0x17) {
          *(ushort *)param_1 = uVar2 & 0x8000;
          *(ushort *)((int)param_1 + 2) = 0;
          return 0;
        }
        if ((short)iVar9 < -0xf) {
          iVar5 = 0;
          iVar9 = param_2 + 0xf;
          *(ushort *)((int)param_1 + 2) = uVar6;
          *(ushort *)param_1 = 0;
        }
        uVar6 = (ushort)iVar5;
        sVar3 = -(short)iVar9;
        if ((int)sVar3 != 0) {
          uVar6 = (ushort)(iVar5 >> ((int)sVar3 & 0x3fU));
          *(ushort *)((int)param_1 + 2) =
               (ushort)((int)(uint)*(ushort *)((int)param_1 + 2) >> ((int)sVar3 & 0x3fU)) |
               (ushort)(iVar5 << (0x10U - (int)sVar3 & 0x3f));
          *(ushort *)param_1 = uVar6;
        }
        uVar8 = 0xffffffff;
        *(ushort *)param_1 = uVar2 & 0x8000 | uVar6;
      }
      else {
        uVar8 = 0xffffffff;
        *(ushort *)param_1 =
             (ushort)(((uVar7 << 0x20) >> 0x2f) << 0xf) |
             (ushort)(((uVar7 & 0x7f) << 0x11) >> 0x10) >> 1 |
             (ushort)(((longlong)(short)param_2 & 0xffffffffU) << 7);
      }
    }
    else {
      if ((short)uVar2 < 0) {
        fVar1 = -*(float *)PTR_DAT_0071c7cc;
      }
      else {
        fVar1 = *(float *)PTR_DAT_0071c7cc;
      }
      uVar8 = 1;
      *param_1 = fVar1;
    }
  }
  return uVar8;
}



//==== 005e6774  ns=Global  size=0x108
// sig: undefined FUN_005e6774(void)
// callers(3): 005dc9a4 mathfunc::fmod; 005dcbd8 FUN_005dcbd8; 005dd718 FUN_005dd718
// callees(1): 005e687c FUN_005e687c

undefined4 FUN_005e6774(short *param_1,ushort *param_2)

{
  ulonglong uVar1;
  ushort uVar2;
  ulonglong uVar3;
  
  uVar3 = (ulonglong)*param_2;
  uVar1 = (uVar3 << 0x20) >> 0x27;
  uVar2 = (ushort)uVar1 & 0xff;
  if (uVar2 != 0xff) {
    if ((uVar1 & 0xff) == 0) {
      uVar2 = FUN_005e687c(param_2);
      if (0 < (short)uVar2) {
        *param_1 = 0;
        return 0;
      }
      uVar3 = (ulonglong)*param_2;
    }
    *param_2 = (ushort)(((uVar3 << 0x20) >> 0x2f) << 0xf) |
               (ushort)(((uVar3 & 0x7f) << 0x11) >> 0x10) >> 1 | 0x3f00;
    *param_1 = uVar2 - 0x7e;
    return 0xffffffff;
  }
  *param_1 = 0;
  if (((*param_2 & 0x7f) == 0) && (param_2[1] == 0)) {
    return 1;
  }
  return 2;
}



//==== 005e687c  ns=Global  size=0x104
// sig: undefined FUN_005e687c(void)
// callers(2): 005e659c FUN_005e659c; 005e6774 FUN_005e6774
// callees(0): 

short FUN_005e687c(ushort *param_1)

{
  ushort *puVar1;
  ushort uVar2;
  ushort uVar3;
  ushort uVar4;
  short sVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  
  sVar5 = 1;
  uVar2 = *param_1;
  uVar7 = (ulonglong)uVar2 & 0x7f;
  uVar4 = (ushort)uVar7;
  *param_1 = uVar4;
  if ((uVar2 & 0x7f) == 0) {
    sVar5 = 1;
    uVar3 = param_1[1];
    if (uVar3 == 0) goto LAB_005e696c;
    *param_1 = uVar3;
    param_1[1] = uVar4;
    sVar5 = -0xf;
    uVar7 = (ulonglong)*param_1;
  }
  if (uVar7 < 0x80) {
    puVar1 = param_1 + 1;
    uVar6 = (ulonglong)*puVar1;
    do {
      sVar5 = sVar5 + -1;
      *param_1 = (ushort)(uVar7 << 1) | (ushort)(uVar6 >> 0xf) & 1;
      uVar6 = (ulonglong)*puVar1 << 1;
      *puVar1 = (ushort)uVar6;
      uVar7 = (ulonglong)*param_1;
    } while (uVar7 < 0x80);
  }
  uVar4 = (ushort)uVar7;
  if (0xff < uVar7) {
    do {
      sVar5 = sVar5 + 1;
      param_1[1] = (ushort)(((ulonglong)param_1[1] << 0x20) >> 0x21) | (ushort)(uVar7 << 0xf);
      uVar7 = ((ulonglong)*param_1 << 0x20) >> 0x21;
      uVar4 = (ushort)uVar7;
      *param_1 = uVar4;
    } while (0xff < uVar7);
  }
  uVar4 = uVar4 & 0x7f;
  *param_1 = uVar4;
LAB_005e696c:
  *param_1 = uVar2 & 0x8000 | uVar4;
  return sVar5;
}



//==== 005e6980  ns=Global  size=0x3c
// sig: undefined FUN_005e6980(void)
// callers(6): 005e3d38 FUN_005e3d38; 005e5e38 FUN_005e5e38; 005e5ecc FUN_005e5ecc; 005e5fcc FUN_005e5fcc; 005e6280 FUN_005e6280; 005e69c0 FUN_005e69c0
// callees(2): 005c4840 idol::abort; 005e69fc FUN_005e69fc

void FUN_005e6980(void)

{
  if (*(undefined4 **)PTR_PTR_0071c7d0 != (undefined4 *)0x0) {
    (*(code *)**(undefined4 **)PTR_PTR_0071c7d0)();
  }
                    /* WARNING: Subroutine does not return */
  idol::abort();
}



//==== 005e69c0  ns=Global  size=0x3c
// sig: undefined FUN_005e69c0(void)
// callers(0): 
// callees(1): 005e6980 FUN_005e6980

void FUN_005e69c0(void)

{
  int unaff_r2;
  
  if ((undefined4 *)**(int **)(unaff_r2 + -0x5b54) != (undefined4 *)0x0) {
    (**(code **)**(int **)(unaff_r2 + -0x5b54))();
  }
                    /* WARNING: Subroutine does not return */
  FUN_005e6980();
}



//==== 005e69fc  ns=Global  size=0x10
// sig: undefined FUN_005e69fc(void)
// callers(1): 005e6980 FUN_005e6980
// callees(1): 005c4840 idol::abort

void FUN_005e69fc(void)

{
                    /* WARNING: Subroutine does not return */
  idol::abort();
}



//==== 005e6a10  ns=Global  size=0x58
// sig: undefined FUN_005e6a10(void)
// callers(0): 
// callees(2): 005cbb70 FUN_005cbb70; 005cbbec FUN_005cbbec

undefined4 FUN_005e6a10(undefined4 param_1)

{
  undefined4 uVar1;
  
  FUN_005cbbec(1);
  uVar1 = *(undefined4 *)PTR_PTR_0071c7d0;
  *(undefined4 *)PTR_PTR_0071c7d0 = param_1;
  FUN_005cbb70(1);
  return uVar1;
}



//==== 005e6a68  ns=Global  size=0x58
// sig: undefined FUN_005e6a68(void)
// callers(0): 
// callees(2): 005cbb70 FUN_005cbb70; 005cbbec FUN_005cbbec

undefined4 FUN_005e6a68(undefined4 param_1)

{
  undefined4 uVar1;
  
  FUN_005cbbec(1);
  uVar1 = *(undefined4 *)PTR_PTR_0071c7d4;
  *(undefined4 *)PTR_PTR_0071c7d4 = param_1;
  FUN_005cbb70(1);
  return uVar1;
}



//==== 005e6ac0  ns=Global  size=0x10
// sig: undefined FUN_005e6ac0(void)
// callers(0): 
// callees(0): 

void FUN_005e6ac0(undefined4 *param_1)

{
  *param_1 = &PTR_PTR_00661748;
  return;
}



//==== 005e6ad0  ns=Global  size=0x10
// sig: undefined FUN_005e6ad0(void)
// callers(0): 
// callees(0): 

void FUN_005e6ad0(undefined4 *param_1)

{
  *param_1 = &PTR_PTR_00666410;
  return;
}



//==== 005e6ae0  ns=Global  size=0x10
// sig: undefined FUN_005e6ae0(void)
// callers(0): 
// callees(0): 

void FUN_005e6ae0(undefined4 *param_1)

{
  *param_1 = &PTR_PTR_00661710;
  return;
}



//==== 005e6af0  ns=Global  size=0x320
// sig: undefined FUN_005e6af0(void)
// callers(1): 0001401c boot::boot
// callees(10): 005d0140 libc::memset; 005e78e4 FUN_005e78e4; 005e7908 FUN_005e7908; 005e7930 FUN_005e7930; 005e7968 FUN_005e7968; 0064fa04 cell::_cellSpursTasksetAttributeInitialize; 0064fb24 cell::_cellSpursEventFlagInitialize; 0064fb64 cell::cellSpursTasksetAttributeSetName; 0064fba4 cell::cellSpursEventFlagAttachLv2EventQueue; 0064fc84 cell::cellSpursCreateTasksetWithAttribute
// strings: 006617cc: 'edgeDecompressorTaskset'

void FUN_005e6af0(int *param_1,undefined8 param_2)

{
  int iVar1;
  int *piVar2;
  uint uVar3;
  int iVar4;
  undefined1 local_230 [16];
  undefined1 auStack_220 [520];
  
  piVar2 = (int *)0x0;
  uVar3 = param_1[5];
  iVar4 = (int)param_2;
  *(undefined1 *)(param_1 + 4) = 0;
  param_1[0xb00] = 0;
  param_1[4] = 0;
  *(undefined1 *)(param_1 + 5) = 0;
  *(undefined1 *)((int)param_1 + 0x15) = 0;
  *param_1 = (int)&PTR_PTR_006617ec;
  param_1[5] = uVar3 & 0xabff | 0xa800;
  param_1[1] = 0x6c7a6d61;
  if (iVar4 != 0) {
    param_1[3] = 0x10000;
    param_1[2] = 0x10000;
    *(undefined1 *)(param_1 + 0xbb6) = 0;
    param_1[0xbb5] = -1;
    param_1[0xbb4] = 0;
    param_1[0xbb3] = 0;
    param_1[0xbb2] = 0;
    param_1[0xbb1] = 0;
    iVar1 = cell::_cellSpursTasksetAttributeInitialize(auStack_220,1,0x330000,0,local_230,8);
    if (iVar1 == 0) {
      iVar1 = cell::cellSpursTasksetAttributeSetName(auStack_220,"edgeDecompressorTaskset");
      if (iVar1 == 0) {
        piVar2 = param_1 + 0x420;
        iVar1 = cell::cellSpursCreateTasksetWithAttribute(param_2,piVar2,auStack_220);
        if (iVar1 != 0) {
          piVar2 = (int *)0x0;
        }
      }
      else {
        piVar2 = (int *)0x0;
      }
    }
    else {
      piVar2 = (int *)0x0;
    }
  }
  uVar3 = param_1[5];
  param_1[0xb00] = 0;
  param_1[0xbb1] = iVar4;
  param_1[0xbb2] = (int)piVar2;
  param_1[0xbb3] = 0;
  param_1[0xbb4] = 0;
  param_1[0xbb5] = -1;
  *(undefined1 *)(param_1 + 0xbb6) = 0;
  param_1[2] = 0x10000;
  *(undefined1 *)(param_1 + 4) = 0;
  param_1[3] = 0x10000;
  param_1[4] = 0;
  *(undefined1 *)(param_1 + 5) = 0;
  *(undefined1 *)((int)param_1 + 0x15) = 0;
  param_1[5] = uVar3 & 0xabff | 0xa800;
  if ((piVar2 != (int *)0x0 && iVar4 != 0) &&
     (uVar3 = (*(code *)**(undefined4 **)(*param_1 + 0x18))(param_1), uVar3 < 0x1001)) {
    iVar4 = cell::_cellSpursEventFlagInitialize(param_1[0xbb1],0,param_1 + 0xa60,0,1);
    if ((iVar4 == 0) &&
       (iVar4 = cell::cellSpursEventFlagAttachLv2EventQueue(param_1 + 0xa60), iVar4 == 0)) {
      do {
        iVar4 = param_1[0xbb4];
        param_1[0xbb4] = iVar4 + 1;
        uVar3 = (*(code *)**(undefined4 **)(*param_1 + 0x1c))(param_1,iVar4 + 1);
      } while (uVar3 < 0x201);
      param_1[0xbb4] = param_1[0xbb4] + -1;
      iVar4 = (*(code *)**(undefined4 **)(*param_1 + 0x20))(param_1);
      param_1[0xbb3] = iVar4;
      if (iVar4 != 0) {
        iVar4 = (*(code *)**(undefined4 **)(*param_1 + 0x24))(param_1);
        param_1[0xbb5] = iVar4;
        if (iVar4 != -1) {
          libc::memset(param_1 + 0xb01,0,0x2c0);
          *(undefined1 *)(param_1 + 0xbb6) = 1;
        }
      }
    }
  }
  return;
}



//==== 005e6e10  ns=Global  size=0x10
// sig: undefined FUN_005e6e10(void)
// callers(0): 
// callees(0): 

void FUN_005e6e10(undefined4 *param_1)

{
  *param_1 = &PTR_PTR_00661748;
  return;
}



//==== 005e6e20  ns=Global  size=0x10
// sig: undefined FUN_005e6e20(void)
// callers(0): 
// callees(0): 

void FUN_005e6e20(undefined4 *param_1)

{
  *param_1 = &PTR_PTR_0066177c;
  return;
}



//==== 005e6e30  ns=Global  size=0x10
// sig: undefined FUN_005e6e30(void)
// callers(0): 
// callees(0): 

void FUN_005e6e30(undefined4 *param_1)

{
  *param_1 = &PTR_PTR_0066177c;
  return;
}



//==== 005e6e40  ns=Global  size=0x10
// sig: undefined FUN_005e6e40(void)
// callers(0): 
// callees(0): 

void FUN_005e6e40(undefined4 *param_1)

{
  *param_1 = &PTR_PTR_00661710;
  return;
}



//==== 005e6e50  ns=Global  size=0x4
// sig: undefined FUN_005e6e50(void)
// callers(0): 
// callees(0): 

void FUN_005e6e50(void)

{
  return;
}



//==== 005e6e54  ns=Global  size=0x10
// sig: undefined FUN_005e6e54(void)
// callers(0): 
// callees(0): 

void FUN_005e6e54(undefined4 *param_1)

{
  *param_1 = &PTR_PTR_00661760;
  return;
}



//==== 005e6e64  ns=Global  size=0x10
// sig: undefined FUN_005e6e64(void)
// callers(0): 
// callees(0): 

void FUN_005e6e64(undefined4 *param_1)

{
  *param_1 = &PTR_PTR_00661760;
  return;
}



//==== 005e6e74  ns=Global  size=0x10
// sig: undefined FUN_005e6e74(void)
// callers(0): 
// callees(0): 

void FUN_005e6e74(undefined4 *param_1)

{
  *param_1 = &PTR_PTR_00661790;
  return;
}



//==== 005e6e84  ns=Global  size=0x40
// sig: undefined FUN_005e6e84(void)
// callers(0): 
// callees(1): 005e387c FUN_005e387c

void FUN_005e6e84(undefined4 *param_1)

{
  if (param_1 != (undefined4 *)0x0) {
    *param_1 = &PTR_PTR_00661710;
    FUN_005e387c();
  }
  return;
}



//==== 005e6ec4  ns=Global  size=0x40
// sig: undefined FUN_005e6ec4(void)
// callers(0): 
// callees(1): 005e387c FUN_005e387c

void FUN_005e6ec4(undefined4 *param_1)

{
  if (param_1 != (undefined4 *)0x0) {
    *param_1 = &PTR_PTR_00661748;
    FUN_005e387c();
  }
  return;
}



//==== 005e6f04  ns=Global  size=0x40
// sig: undefined FUN_005e6f04(void)
// callers(0): 
// callees(1): 005e387c FUN_005e387c

void FUN_005e6f04(undefined4 *param_1)

{
  if (param_1 != (undefined4 *)0x0) {
    *param_1 = &PTR_PTR_00661760;
    FUN_005e387c();
  }
  return;
}



//==== 005e6f44  ns=Global  size=0x40
// sig: undefined FUN_005e6f44(void)
// callers(0): 
// callees(1): 005e387c FUN_005e387c

void FUN_005e6f44(undefined4 *param_1)

{
  if (param_1 != (undefined4 *)0x0) {
    *param_1 = &PTR_PTR_0066177c;
    FUN_005e387c();
  }
  return;
}



//==== 005e6f84  ns=Global  size=0x40
// sig: undefined FUN_005e6f84(void)
// callers(0): 
// callees(1): 005e387c FUN_005e387c

void FUN_005e6f84(undefined4 *param_1)

{
  if (param_1 != (undefined4 *)0x0) {
    *param_1 = &PTR_PTR_00661790;
    FUN_005e387c();
  }
  return;
}



//==== 005e6fc4  ns=Global  size=0x10
// sig: undefined FUN_005e6fc4(void)
// callers(0): 
// callees(0): 

void FUN_005e6fc4(undefined4 *param_1)

{
  *param_1 = &PTR_PTR_006616b0;
  return;
}



//==== 005e6fd4  ns=Global  size=0x10
// sig: undefined FUN_005e6fd4(void)
// callers(0): 
// callees(0): 

void FUN_005e6fd4(undefined4 *param_1)

{
  *param_1 = &PTR_PTR_006616b0;
  return;
}



//==== 005e6fe4  ns=Global  size=0x40
// sig: undefined FUN_005e6fe4(void)
// callers(0): 
// callees(1): 005e387c FUN_005e387c

void FUN_005e6fe4(undefined4 *param_1)

{
  if (param_1 != (undefined4 *)0x0) {
    *param_1 = &PTR_PTR_006616b0;
    FUN_005e387c();
  }
  return;
}



//==== 005e7024  ns=Global  size=0x34
// sig: undefined FUN_005e7024(void)
// callers(0): 
// callees(1): 005d5764 FUN_005d5764

void FUN_005e7024(undefined8 param_1,undefined8 param_2,uint param_3)

{
  FUN_005d5764(1 << (param_3 & 0x1f));
  return;
}



//==== 005e7058  ns=Global  size=0x28
// sig: undefined FUN_005e7058(void)
// callers(0): 
// callees(1): 005d580c FUN_005d580c

void FUN_005e7058(undefined8 param_1,undefined8 param_2)

{
  FUN_005d580c(param_2);
  return;
}



//==== 005e7080  ns=Global  size=0x8
// sig: undefined FUN_005e7080(void)
// callers(0): 
// callees(0): 

undefined8 FUN_005e7080(void)

{
  return 0;
}



//==== 005e7088  ns=Global  size=0x40
// sig: undefined FUN_005e7088(void)
// callers(0): 
// callees(1): 005e387c FUN_005e387c

void FUN_005e7088(undefined4 *param_1)

{
  if (param_1 != (undefined4 *)0x0) {
    *param_1 = &PTR_PTR_006616b0;
    FUN_005e387c();
  }
  return;
}



//==== 005e70c8  ns=Global  size=0x10
// sig: undefined FUN_005e70c8(void)
// callers(0): 
// callees(0): 

void FUN_005e70c8(undefined4 *param_1)

{
  *param_1 = &PTR_PTR_006616cc;
  return;
}



//==== 005e70d8  ns=Global  size=0x40
// sig: undefined FUN_005e70d8(void)
// callers(0): 
// callees(1): 005e387c FUN_005e387c

void FUN_005e70d8(undefined4 *param_1)

{
  if (param_1 != (undefined4 *)0x0) {
    *param_1 = &PTR_PTR_006616cc;
    FUN_005e387c();
  }
  return;
}



//==== 005e7118  ns=Global  size=0x10
// sig: undefined FUN_005e7118(void)
// callers(0): 
// callees(0): 

void FUN_005e7118(undefined4 *param_1)

{
  *param_1 = &PTR_PTR_006616cc;
  return;
}



//==== 005e7128  ns=Global  size=0x40
// sig: undefined FUN_005e7128(void)
// callers(0): 
// callees(1): 005e387c FUN_005e387c

void FUN_005e7128(undefined4 *param_1)

{
  if (param_1 != (undefined4 *)0x0) {
    *param_1 = &PTR_PTR_006616cc;
    FUN_005e387c();
  }
  return;
}



//==== 005e7168  ns=Global  size=0x10
// sig: undefined FUN_005e7168(void)
// callers(0): 
// callees(0): 

void FUN_005e7168(undefined4 *param_1)

{
  *param_1 = &PTR_PTR_006616cc;
  return;
}



//==== 005e7178  ns=Global  size=0x40
// sig: undefined FUN_005e7178(void)
// callers(0): 
// callees(1): 005e387c FUN_005e387c

void FUN_005e7178(undefined4 *param_1)

{
  if (param_1 != (undefined4 *)0x0) {
    *param_1 = &PTR_PTR_006616cc;
    FUN_005e387c();
  }
  return;
}



//==== 005e71b8  ns=Global  size=0x80
// sig: undefined FUN_005e71b8(void)
// callers(0): 
// callees(0): 

void FUN_005e71b8(int *param_1,longlong param_2)

{
  undefined8 uVar1;
  
  uVar1 = (*(code *)**(undefined4 **)(*param_1 + 0xc))();
  (*(code *)**(undefined4 **)(*param_1 + 0x14))(param_1,uVar1,param_2 + 0x18);
  return;
}



//==== 005e7238  ns=Global  size=0x94
// sig: undefined FUN_005e7238(void)
// callers(0): 
// callees(3): 0064fa64 cell::cellSpursEventFlagDetachLv2EventQueue; 0064fc04 cell::cellSpursJoinTaskset; 0064fc24 cell::cellSpursShutdownTaskset

void FUN_005e7238(undefined4 *param_1)

{
  *param_1 = &PTR_PTR_006617a0;
  *(undefined1 *)(param_1 + 0xbb6) = 0;
  if (param_1[0xbb1] != 0) {
    cell::cellSpursEventFlagDetachLv2EventQueue(param_1 + 0xa60);
  }
  if (param_1[0xbb2] != 0) {
    cell::cellSpursShutdownTaskset(param_1[0xbb2]);
    cell::cellSpursJoinTaskset(param_1[0xbb2]);
    param_1[0xbb2] = 0;
  }
  *param_1 = &PTR_PTR_006616cc;
  return;
}



//==== 005e72cc  ns=Global  size=0xb4
// sig: undefined FUN_005e72cc(void)
// callers(0): 
// callees(4): 005e387c FUN_005e387c; 0064fa64 cell::cellSpursEventFlagDetachLv2EventQueue; 0064fc04 cell::cellSpursJoinTaskset; 0064fc24 cell::cellSpursShutdownTaskset

void FUN_005e72cc(undefined4 *param_1)

{
  if (param_1 != (undefined4 *)0x0) {
    *param_1 = &PTR_PTR_006617a0;
    *(undefined1 *)(param_1 + 0xbb6) = 0;
    if (param_1[0xbb1] != 0) {
      cell::cellSpursEventFlagDetachLv2EventQueue(param_1 + 0xa60);
    }
    if (param_1[0xbb2] != 0) {
      cell::cellSpursShutdownTaskset(param_1[0xbb2]);
      cell::cellSpursJoinTaskset(param_1[0xbb2]);
      param_1[0xbb2] = 0;
    }
    *param_1 = &PTR_PTR_006616cc;
    FUN_005e387c();
  }
  return;
}



//==== 005e7380  ns=Global  size=0x274
// sig: undefined FUN_005e7380(void)
// callers(0): 
// callees(1): 0064fac4 cell::cellSpursEventFlagClear
// strings: 005e7420: '}GH(|\nX' (raw)

ulonglong FUN_005e7380(longlong param_1,undefined4 *param_2)

{
  uint uVar1;
  uint uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  uint uVar6;
  int *piVar7;
  uint *puVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  int iVar11;
  longlong lVar12;
  char in_RESERVE;
  
  piVar7 = (int *)param_1;
  if (*(char *)(piVar7 + 0xbb6) == '\0') {
    uVar9 = 0;
  }
  else {
    uVar10 = 0;
    uVar9 = 0;
    do {
      sync(1);
      uVar2 = piVar7[0xb00];
      if (uVar2 != 0xffff) {
        iVar11 = (int)uVar10;
        while ((uVar2 & 1 << iVar11) != 0) {
          uVar10 = uVar10 + 1 & 0xf;
          iVar11 = (int)uVar10;
        }
        uVar9 = (ulonglong)(uVar2 | 1 << (int)uVar10);
      }
      do {
        puVar8 = (uint *)(param_1 + 0x2c00);
        uVar1 = *puVar8;
        if (uVar1 != uVar2) break;
        if (in_RESERVE != '\0') {
          uVar6 = storeWordConditionalIndexed(uVar9,param_1 + 0x2c00,0);
          *puVar8 = uVar6;
        }
      } while (in_RESERVE == '\0' && uVar1 != uVar2);
    } while (uVar1 != uVar2);
    lVar12 = param_1 + uVar10 * 0x2c;
    uVar3 = param_2[1];
    uVar4 = param_2[2];
    uVar5 = param_2[3];
    iVar11 = (int)lVar12;
    *(undefined4 *)(iVar11 + 0x2c04) = *param_2;
    *(undefined4 *)(iVar11 + 0x2c08) = uVar3;
    *(undefined4 *)(iVar11 + 0x2c0c) = uVar4;
    *(undefined4 *)(iVar11 + 0x2c10) = uVar5;
    uVar3 = param_2[5];
    uVar4 = param_2[6];
    uVar5 = param_2[7];
    *(undefined4 *)(iVar11 + 0x2c14) = param_2[4];
    *(undefined4 *)(iVar11 + 0x2c18) = uVar3;
    *(undefined4 *)(iVar11 + 0x2c1c) = uVar4;
    *(undefined4 *)(iVar11 + 0x2c20) = uVar5;
    uVar3 = param_2[9];
    *(undefined4 *)(iVar11 + 0x2c24) = param_2[8];
    *(undefined4 *)(iVar11 + 0x2c28) = uVar3;
    *(undefined4 *)(iVar11 + 0x2c2c) = 1;
    cell::cellSpursEventFlagClear(param_1 + 0x2980,1 << (int)uVar10 & 0xffff);
    uVar9 = lVar12 + 0x2c2cU & 0xffffffff;
    if ((param_2[7] == 0) || (param_2[5] != 0)) {
      (*(code *)**(undefined4 **)(*piVar7 + 0x28))
                (param_1,param_2[3],param_2[4],param_2[5],0,param_2[6],0,uVar9);
    }
    else {
      (*(code *)**(undefined4 **)(*piVar7 + 0x28))
                (param_1,param_2[3],param_2[4],param_2[7],param_2[8],param_2[9],
                 param_2[6] - (param_2[8] + param_2[9]),uVar9);
    }
    uVar9 = lVar12 + 0x2c04U & 0xffffffff;
  }
  return uVar9;
}



//==== 005e75f4  ns=Global  size=0x14
// sig: undefined FUN_005e75f4(void)
// callers(0): 
// callees(0): 

ulonglong FUN_005e75f4(undefined8 param_1,int param_2)

{
  sync(1);
  return (ulonglong)(LZCOUNT(*(undefined4 *)(param_2 + 0x28)) << 0x20) >> 0x25;
}



//==== 005e7608  ns=Global  size=0x168
// sig: undefined FUN_005e7608(void)
// callers(0): 
// callees(3): 005c5ad0 libc::memcpy; 005d0140 libc::memset; 0064fa84 cell::cellSpursEventFlagWait

undefined8 FUN_005e7608(longlong param_1,int param_2,undefined4 *param_3)

{
  uint uVar1;
  undefined4 uVar2;
  uint uVar3;
  uint uVar4;
  uint *puVar5;
  undefined8 uVar6;
  void *__dest;
  char in_RESERVE;
  undefined1 local_30 [16];
  
  if (param_2 == 0) {
    uVar6 = 0xffffffffffffffff;
  }
  else {
    if (*(int *)(param_2 + 0x28) != 0) {
      do {
        cell::cellSpursEventFlagWait(param_1 + 0x2980,local_30,1);
      } while (*(int *)(param_2 + 0x28) != 0);
    }
    __dest = *(void **)(param_2 + 0x1c);
    if ((__dest != (void *)0x0) && (*(int *)(param_2 + 0x14) != 0)) {
      libc::memcpy(__dest,(void *)(*(int *)(param_2 + 0x14) + *(int *)(param_2 + 0x20)),
                   *(size_t *)(param_2 + 0x24));
      __dest = *(void **)(param_2 + 0x1c);
    }
    if (__dest == (void *)0x0) {
      uVar2 = *(undefined4 *)(param_2 + 0x18);
    }
    else {
      uVar2 = *(undefined4 *)(param_2 + 0x24);
    }
    *param_3 = uVar2;
    libc::memset(param_2,0,0x2c);
    uVar6 = 0;
    do {
      sync(1);
      uVar3 = *(uint *)((int)param_1 + 0x2c00);
      do {
        puVar5 = (uint *)(param_1 + 0x2c00);
        uVar1 = *puVar5;
        if (uVar1 != uVar3) break;
        if (in_RESERVE != '\0') {
          uVar4 = storeWordConditionalIndexed
                            ((ulonglong)uVar3 &
                             ~(ulonglong)
                              (uint)(1 << ((param_2 - ((int)param_1 + 0x2c04)) / 0x2c & 0x3fU)),
                             param_1 + 0x2c00,0);
          *puVar5 = uVar4;
        }
      } while (in_RESERVE == '\0' && uVar1 != uVar3);
    } while (uVar1 != uVar3);
  }
  return uVar6;
}



//==== 005e7770  ns=Global  size=0xb0
// sig: undefined FUN_005e7770(void)
// callers(0): 
// callees(4): 0050fb74 FUN_0050fb74; 0064fa64 cell::cellSpursEventFlagDetachLv2EventQueue; 0064fc04 cell::cellSpursJoinTaskset; 0064fc24 cell::cellSpursShutdownTaskset

void FUN_005e7770(undefined4 *param_1)

{
  if (param_1[0xbb3] != 0) {
    *param_1 = &PTR_PTR_006617ec;
    FUN_0050fb74();
    param_1[0xbb3] = 0;
  }
  *param_1 = &PTR_PTR_006617a0;
  *(undefined1 *)(param_1 + 0xbb6) = 0;
  if (param_1[0xbb1] != 0) {
    cell::cellSpursEventFlagDetachLv2EventQueue(param_1 + 0xa60);
  }
  if (param_1[0xbb2] != 0) {
    cell::cellSpursShutdownTaskset();
    cell::cellSpursJoinTaskset(param_1[0xbb2]);
    param_1[0xbb2] = 0;
  }
  *param_1 = &PTR_PTR_006616cc;
  return;
}



//==== 005e7820  ns=Global  size=0xc4
// sig: undefined FUN_005e7820(void)
// callers(0): 
// callees(5): 0050fb74 FUN_0050fb74; 005e387c FUN_005e387c; 0064fa64 cell::cellSpursEventFlagDetachLv2EventQueue; 0064fc04 cell::cellSpursJoinTaskset; 0064fc24 cell::cellSpursShutdownTaskset

void FUN_005e7820(undefined4 *param_1)

{
  if (param_1 != (undefined4 *)0x0) {
    if (param_1[0xbb3] != 0) {
      *param_1 = &PTR_PTR_006617ec;
      FUN_0050fb74();
      param_1[0xbb3] = 0;
    }
    *param_1 = &PTR_PTR_006617a0;
    *(undefined1 *)(param_1 + 0xbb6) = 0;
    if (param_1[0xbb1] != 0) {
      cell::cellSpursEventFlagDetachLv2EventQueue(param_1 + 0xa60);
    }
    if (param_1[0xbb2] != 0) {
      cell::cellSpursShutdownTaskset();
      cell::cellSpursJoinTaskset(param_1[0xbb2]);
      param_1[0xbb2] = 0;
    }
    *param_1 = &PTR_PTR_006616cc;
    FUN_005e387c(param_1);
  }
  return;
}



//==== 005e78e4  ns=Global  size=0x24
// sig: undefined FUN_005e78e4(void)
// callers(1): 005e6af0 FUN_005e6af0
// callees(1): 0050fb6c FUN_0050fb6c

void FUN_005e78e4(void)

{
  FUN_0050fb6c();
  return;
}



//==== 005e7908  ns=Global  size=0x28
// sig: undefined FUN_005e7908(void)
// callers(1): 005e6af0 FUN_005e6af0
// callees(1): 0050fbb0 FUN_0050fbb0

void FUN_005e7908(undefined8 param_1,undefined8 param_2)

{
  FUN_0050fbb0(param_2);
  return;
}



//==== 005e7930  ns=Global  size=0x38
// sig: undefined FUN_005e7930(void)
// callers(1): 005e6af0 FUN_005e6af0
// callees(1): 005104d4 FUN_005104d4

void FUN_005e7930(int param_1)

{
  FUN_005104d4(*(undefined4 *)(param_1 + 0x2ec4),*(undefined4 *)(param_1 + 0x2ed0),param_1 + 0x2a00,
               0x200);
  return;
}



//==== 005e7968  ns=Global  size=0x34
// sig: undefined FUN_005e7968(void)
// callers(1): 005e6af0 FUN_005e6af0
// callees(1): 00510638 FUN_00510638

void FUN_005e7968(int param_1)

{
  FUN_00510638(*(undefined4 *)(param_1 + 0x2ec8),param_1 + 0x80,*(undefined4 *)(param_1 + 0x2ecc));
  return;
}



//==== 005e799c  ns=Global  size=0xd0
// sig: undefined FUN_005e799c(void)
// callers(0): 
// callees(1): 0051007c FUN_0051007c

void FUN_005e799c(int param_1,longlong param_2,longlong param_3,undefined8 param_4,
                 undefined2 param_5,undefined8 param_6)

{
  FUN_0051007c(*(undefined4 *)(param_1 + 0x2ecc),param_2,5,0xd - param_3 >> 0x3f & param_2 + 0xdU,
               0xd - param_3 >> 0x3f & param_3 - 0xdU & 0xffffffff,param_4,param_5,param_6);
  return;
}



//==== 005e7a78  ns=Global  size=0x60
// sig: undefined FUN_005e7a78(void)
// callers(1): 00057820 collproc::CollLine
// callees(0): 

void FUN_005e7a78(undefined4 *param_1)

{
  param_1[3] = 0;
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0x3f800000;
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
  param_1[0xf] = 0;
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  return;
}



//==== 005e7ad8  ns=Global  size=0x78
// sig: undefined FUN_005e7ad8(void)
// callers(1): 00057820 collproc::CollLine
// callees(0): 

void FUN_005e7ad8(double param_1,float *param_2,float *param_3)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  
  fVar1 = param_3[1];
  fVar2 = param_3[2];
  fVar3 = param_3[3];
  fVar4 = param_3[4];
  fVar5 = param_3[5];
  fVar6 = param_3[6];
  fVar7 = param_3[7];
  fVar8 = param_3[8];
  *param_2 = (float)((double)*param_3 * param_1);
  param_2[1] = (float)((double)fVar1 * param_1);
  param_2[2] = (float)((double)fVar2 * param_1);
  param_2[3] = (float)((double)fVar3 * param_1);
  param_2[4] = (float)((double)fVar4 * param_1);
  param_2[5] = (float)((double)fVar5 * param_1);
  param_2[6] = (float)((double)fVar6 * param_1);
  param_2[7] = (float)((double)fVar7 * param_1);
  param_2[8] = (float)((double)fVar8 * param_1);
  return;
}



//==== 005e7b50  ns=Global  size=0xa0
// sig: undefined FUN_005e7b50(void)
// callers(1): 00057820 collproc::CollLine
// callees(0): 

void FUN_005e7b50(float *param_1,float *param_2,undefined8 param_3,undefined8 param_4)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fStack00000040;
  float fStack00000044;
  
  fVar7 = (float)((ulonglong)param_4 >> 0x20);
  fStack00000040 = (float)((ulonglong)param_3 >> 0x20);
  fStack00000044 = (float)param_3;
  fVar1 = param_2[1];
  fVar2 = param_2[4];
  fVar3 = param_2[2];
  fVar4 = param_2[5];
  fVar5 = param_2[7];
  fVar6 = param_2[8];
  *param_1 = *param_2 * fStack00000040 + param_2[3] * fStack00000044 + param_2[6] * fVar7;
  param_1[1] = fVar1 * fStack00000040 + fVar2 * fStack00000044 + fVar5 * fVar7;
  param_1[2] = fVar3 * fStack00000040 + fVar4 * fStack00000044 + fVar6 * fVar7;
  return;
}



//==== 005e7bf8  ns=Global  size=0xa0
// sig: undefined FUN_005e7bf8(void)
// callers(1): 00057820 collproc::CollLine
// callees(0): 

void FUN_005e7bf8(float *param_1,undefined8 param_2,undefined8 param_3)

{
  float fVar1;
  float fVar2;
  float fStack00000038;
  float fStack0000003c;
  
  fVar1 = (float)((ulonglong)param_3 >> 0x20);
  fStack00000038 = (float)((ulonglong)param_2 >> 0x20);
  fStack0000003c = (float)param_2;
  fVar2 = SQRT(fStack00000038 * fStack00000038 + fStack0000003c * fStack0000003c + fVar1 * fVar1);
  if (fVar2 == 0.0) {
    *param_1 = fStack00000038;
    param_1[1] = fStack0000003c;
    param_1[2] = fVar1;
  }
  else {
    *param_1 = fStack00000038 / fVar2;
    param_1[1] = fStack0000003c / fVar2;
    param_1[2] = fVar1 / fVar2;
  }
  return;
}



//==== 005e7ca0  ns=Global  size=0x20
// sig: undefined FUN_005e7ca0(void)
// callers(0): 
// callees(0): 

void FUN_005e7ca0(undefined4 *param_1)

{
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  return;
}



//==== 005e7cc8  ns=Global  size=0x24
// sig: undefined FUN_005e7cc8(void)
// callers(0): 
// callees(0): 

void FUN_005e7cc8(undefined4 *param_1)

{
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  return;
}



//==== 005e7cf8  ns=Global  size=0x64
// sig: undefined FUN_005e7cf8(void)
// callers(0): 
// callees(0): 

void FUN_005e7cf8(int param_1)

{
  int iVar1;
  int iVar2;
  undefined4 *puVar3;
  
  iVar2 = 0;
  iVar1 = 0x100;
  *(undefined4 *)(param_1 + 4) = 0;
  *(undefined4 *)(param_1 + 8) = 0;
  *(undefined4 *)(param_1 + 0xc) = 0;
  *(undefined4 *)(param_1 + 0x10) = 0;
  *(undefined4 *)(param_1 + 0x14) = 0;
  *(undefined4 *)(param_1 + 0x18) = 0;
  *(undefined4 *)(param_1 + 0x1c) = 0;
  *(undefined4 *)(param_1 + 0x20) = 0;
  *(undefined4 *)(param_1 + 0x24) = 0;
  do {
    iVar1 = iVar1 + -1;
    puVar3 = (undefined4 *)(param_1 + 0x28 + iVar2);
    iVar2 = iVar2 + 0xc;
    *puVar3 = 0;
    puVar3[1] = 0;
    puVar3[2] = 0;
  } while (iVar1 != 0);
  return;
}



//==== 005e7d60  ns=stub  size=0x4
// sig: undefined STUB_005e7d60(void)
// callers(0): 
// callees(0): 

void stub::STUB_005e7d60(void)

{
  return;
}



//==== 005e7d64  ns=Global  size=0xa8
// sig: undefined FUN_005e7d64(void)
// callers(12): 000aaec0 hero::HandleHeroMovement; 00161788 space::UpdateSpace; 00199888 mobyupdate_helpers::M1045_00199888; 001c3a18 mobyupdate_helpers::M1106_001c3a18; 00225b48 mobyupdate_unsorted::UpdateMoby_1246; 00293c48 mobyupdate_unsorted::UpdateMoby_153; 0034b2e8 mobyupdate_unsorted::UpdateMoby_340; 0035ffd8 mobyupdate_unsorted::UpdateMoby_388; 00382358 mobyupdate_unsorted::UpdateMoby_440; 003a14a8 mobyupdate_unsorted::UpdateMoby_491; 00486bf8 mobyupdate_helpers::M849_00486bf8; 0048c188 FUN_0048c188
// callees(0): 

void FUN_005e7d64(float *param_1,float *param_2,float *param_3)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  
  fVar1 = *param_2;
  fVar2 = param_2[1];
  fVar3 = param_2[2];
  fVar4 = param_3[1];
  fVar5 = param_3[3];
  fVar6 = param_3[5];
  fVar7 = param_3[7];
  fVar8 = param_3[2];
  fVar9 = param_3[6];
  fVar10 = param_3[9];
  fVar11 = param_3[0xb];
  fVar12 = param_3[10];
  fVar13 = param_2[3];
  *param_1 = *param_3 * fVar1 + param_3[4] * fVar2 + param_3[8] * fVar3;
  param_1[1] = fVar4 * fVar1 + fVar6 * fVar2 + fVar10 * fVar3;
  param_1[2] = fVar8 * fVar1 + fVar9 * fVar2 + fVar12 * fVar3;
  param_1[3] = fVar5 * fVar1 + fVar7 * fVar2 + fVar11 * fVar3 + fVar13;
  return;
}



//==== 005e7e18  ns=idol  size=0x4c
// sig: undefined GetAnimDuration(void)
// callers(27): 000aaec0 hero::HandleHeroMovement; 000b72b0 hero::TransitionMovement; 000be228 hero::HeroMovement; 0019aea0 mobyupdate_unsorted::UpdateMoby_1045; 001a5f50 mobyupdate_unsorted::UpdateMoby_1051; 001c50b0 mobyupdate_unsorted::UpdateMoby_1106; 00233180 mobyupdate_unsorted::UpdateMoby_1266; 002766e0 mobyupdate_unsorted::UpdateMoby_1422; 002de920 mobyupdate_unsorted::UpdateMoby_194; 002f20a0 mobyupdate_unsorted::UpdateMoby_217; 00307270 mobyupdate_unsorted::UpdateMoby_238; 003090f8 mobyupdate_unsorted::UpdateMoby_239; 0034b2e8 mobyupdate_unsorted::UpdateMoby_340; 0035ffd8 mobyupdate_unsorted::UpdateMoby_388; 0037dc48 mobyupdate_unsorted::UpdateMoby_44; 0038f550 mobyupdate_unsorted::UpdateMoby_459; 003b85b8 mobyupdate_unsorted::UpdateMoby_563; 003c3730 mobyupdate_unsorted::UpdateMoby_574; 003c8a10 mobyupdate_unsorted::UpdateMoby_577; 003db608 mobyupdate_unsorted::UpdateMoby_612; 003eca78 mobyupdate_unsorted::UpdateMoby_63; 0041fb90 mobyupdate_unsorted::UpdateMoby_691; 0043a188 mobyupdate_unsorted::UpdateMoby_739; 00451bc8 mobyupdate_unsorted::UpdateMoby_763; 004743a8 mobyupdate_unsorted::UpdateMoby_820
// callees(0): 

int idol::GetAnimDuration(int param_1)

{
  return (int)(animationSpeed * ((float)(longlong)param_1 + 0.5));
}



//==== 005e7e70  ns=Global  size=0x24
// sig: undefined FUN_005e7e70(void)
// callers(12): 000aaec0 hero::HandleHeroMovement; 000b72b0 hero::TransitionMovement; 000be228 hero::HeroMovement; 00233180 mobyupdate_unsorted::UpdateMoby_1266; 002766e0 mobyupdate_unsorted::UpdateMoby_1422; 0038f550 mobyupdate_unsorted::UpdateMoby_459; 003c3730 mobyupdate_unsorted::UpdateMoby_574; 003c8a10 mobyupdate_unsorted::UpdateMoby_577; 003db608 mobyupdate_unsorted::UpdateMoby_612; 003eca78 mobyupdate_unsorted::UpdateMoby_63; 0043a188 mobyupdate_unsorted::UpdateMoby_739; 0043dc00 mobyupdate_unsorted::UpdateMoby_74
// callees(0): 

void FUN_005e7e70(undefined4 *param_1)

{
  param_1[3] = 0;
  param_1[2] = 0;
  param_1[1] = 0;
  *param_1 = 0;
  return;
}



//==== 005e7e98  ns=Global  size=0x24
// sig: undefined FUN_005e7e98(void)
// callers(31): 000aaec0 hero::HandleHeroMovement; 000b72b0 hero::TransitionMovement; 000be228 hero::HeroMovement; 0019aea0 mobyupdate_unsorted::UpdateMoby_1045; 001a5f50 mobyupdate_unsorted::UpdateMoby_1051; 001c50b0 mobyupdate_unsorted::UpdateMoby_1106; 00233180 mobyupdate_unsorted::UpdateMoby_1266; 002766e0 mobyupdate_unsorted::UpdateMoby_1422; 002de920 mobyupdate_unsorted::UpdateMoby_194; 002f20a0 mobyupdate_unsorted::UpdateMoby_217; 00307270 mobyupdate_unsorted::UpdateMoby_238; 003090f8 mobyupdate_unsorted::UpdateMoby_239; 00327f50 mobyupdate_unsorted::UpdateMoby_28; 00332c38 mobyupdate_unsorted::UpdateMoby_294; 0034b2e8 mobyupdate_unsorted::UpdateMoby_340; 0035ffd8 mobyupdate_unsorted::UpdateMoby_388; 0037dc48 mobyupdate_unsorted::UpdateMoby_44; 0038f550 mobyupdate_unsorted::UpdateMoby_459; 003968d8 mobyupdate_unsorted::UpdateMoby_a_lot_3; 003b85b8 mobyupdate_unsorted::UpdateMoby_563; 003c3730 mobyupdate_unsorted::UpdateMoby_574; 003c8a10 mobyupdate_unsorted::UpdateMoby_577; 003eca78 mobyupdate_unsorted::UpdateMoby_63; 0041fb90 mobyupdate_unsorted::UpdateMoby_691; 0043a188 mobyupdate_unsorted::UpdateMoby_739
// callees(0): 

void FUN_005e7e98(undefined4 *param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  
  uVar1 = param_2[1];
  *param_1 = *param_2;
  uVar2 = param_2[2];
  param_1[1] = uVar1;
  uVar1 = param_2[3];
  param_1[2] = uVar2;
  param_1[3] = uVar1;
  return;
}



//==== 005e7ebc  ns=Global  size=0x1c
// sig: undefined FUN_005e7ebc(void)
// callers(10): 000aaec0 hero::HandleHeroMovement; 000b72b0 hero::TransitionMovement; 000be228 hero::HeroMovement; 002766e0 mobyupdate_unsorted::UpdateMoby_1422; 003090f8 mobyupdate_unsorted::UpdateMoby_239; 0037dc48 mobyupdate_unsorted::UpdateMoby_44; 0038f550 mobyupdate_unsorted::UpdateMoby_459; 003c3730 mobyupdate_unsorted::UpdateMoby_574; 003eca78 mobyupdate_unsorted::UpdateMoby_63; 00492d98 mobyupdate_unsorted::UpdateMoby_857
// callees(0): 

double FUN_005e7ebc(float *param_1)

{
  return (double)SQRT(*param_1 * *param_1 + param_1[1] * param_1[1]);
}



//==== 005e7ed8  ns=Global  size=0x7c
// sig: undefined FUN_005e7ed8(void)
// callers(5): 000aaec0 hero::HandleHeroMovement; 002cbaf8 mobyupdate_unsorted::UpdateMoby_186; 0032f988 mobyupdate_unsorted::UpdateMoby_291; 00422f08 mobyupdate_unsorted::UpdateMoby_694; 004743a8 mobyupdate_unsorted::UpdateMoby_820
// callees(0): 

bool FUN_005e7ed8(double param_1,float *param_2,float *param_3)

{
  float fVar1;
  double dVar2;
  
  fVar1 = *param_3;
  dVar2 = (double)SQRT(fVar1 * fVar1 + param_3[1] * param_3[1]);
  if (dVar2 <= param_1) {
    *param_2 = *param_3;
    param_2[1] = param_3[1];
    param_2[2] = param_3[2];
    param_2[3] = param_3[3];
  }
  else {
    *param_2 = fVar1 * (float)(param_1 / dVar2);
    param_2[1] = param_3[1] * (float)(param_1 / dVar2);
    param_2[2] = param_3[2];
    param_2[3] = param_3[3];
  }
  return dVar2 > param_1;
}



//==== 005e7f54  ns=Global  size=0x3c
// sig: undefined FUN_005e7f54(void)
// callers(28): 000aaec0 hero::HandleHeroMovement; 000be228 hero::HeroMovement; 00176c90 walk::Walk_UpdateStateMachine; 0019aea0 mobyupdate_unsorted::UpdateMoby_1045; 001c50b0 mobyupdate_unsorted::UpdateMoby_1106; 001fcd60 mobyupdate_unsorted::UpdateMoby_1202; 00233180 mobyupdate_unsorted::UpdateMoby_1266; 002766e0 mobyupdate_unsorted::UpdateMoby_1422; 002de920 mobyupdate_unsorted::UpdateMoby_194; 002e8af8 mobyupdate_unsorted::UpdateMoby_{203_1900}; 002f20a0 mobyupdate_unsorted::UpdateMoby_217; 003090f8 mobyupdate_unsorted::UpdateMoby_239; 0034b2e8 mobyupdate_unsorted::UpdateMoby_340; 0035ffd8 mobyupdate_unsorted::UpdateMoby_388; 0037dc48 mobyupdate_unsorted::UpdateMoby_44; 0038f550 mobyupdate_unsorted::UpdateMoby_459; 003a14a8 mobyupdate_unsorted::UpdateMoby_491; 003b85b8 mobyupdate_unsorted::UpdateMoby_563; 003c3730 mobyupdate_unsorted::UpdateMoby_574; 003c8a10 mobyupdate_unsorted::UpdateMoby_577; 003ce680 mobyupdate_unsorted::UpdateMoby_580; 003db608 mobyupdate_unsorted::UpdateMoby_612; 003eca78 mobyupdate_unsorted::UpdateMoby_63; 003f0610 mobyupdate_unsorted::UpdateMoby_631; 0043a188 mobyupdate_unsorted::UpdateMoby_739
// callees(0): 

void FUN_005e7f54(float *param_1,float *param_2,float *param_3)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  
  fVar1 = *param_2;
  fVar2 = *param_3;
  fVar3 = param_2[1];
  fVar4 = param_3[1];
  fVar5 = param_2[2];
  fVar6 = param_3[2];
  param_1[3] = param_2[3];
  *param_1 = fVar1 + fVar2;
  param_1[1] = fVar3 + fVar4;
  param_1[2] = fVar5 + fVar6;
  return;
}



//==== 005e7f98  ns=Global  size=0x98
// sig: undefined FUN_005e7f98(void)
// callers(41): 000aaec0 hero::HandleHeroMovement; 000b72b0 hero::TransitionMovement; 0019aea0 mobyupdate_unsorted::UpdateMoby_1045; 001c50b0 mobyupdate_unsorted::UpdateMoby_1106; 001f7980 mobyupdate_unsorted::UpdateMoby_1199; 00202b98 mobyupdate_unsorted::UpdateMoby_121; 00225b48 mobyupdate_unsorted::UpdateMoby_1246; 00233180 mobyupdate_unsorted::UpdateMoby_1266; 002766e0 mobyupdate_unsorted::UpdateMoby_1422; 00293c48 mobyupdate_unsorted::UpdateMoby_153; 002a2438 mobyupdate_unsorted::UpdateMoby_160; 002cbaf8 mobyupdate_unsorted::UpdateMoby_186; 002dc568 mobyupdate_unsorted::UpdateMoby_193; 002de920 mobyupdate_unsorted::UpdateMoby_194; 003090f8 mobyupdate_unsorted::UpdateMoby_239; 00321a20 mobyupdate_unsorted::UpdateMoby_270; 0032f988 mobyupdate_unsorted::UpdateMoby_291; 0034b2e8 mobyupdate_unsorted::UpdateMoby_340; 0034ec58 mobyupdate_unsorted::UpdateMoby_342; 0035ffd8 mobyupdate_unsorted::UpdateMoby_388; 0037dc48 mobyupdate_unsorted::UpdateMoby_44; 0038f550 mobyupdate_unsorted::UpdateMoby_459; 003a14a8 mobyupdate_unsorted::UpdateMoby_491; 003b85b8 mobyupdate_unsorted::UpdateMoby_563; 003c3730 mobyupdate_unsorted::UpdateMoby_574
// callees(0): 

void FUN_005e7f98(double param_1,float *param_2,float *param_3)

{
  float fVar1;
  float fVar2;
  double dVar3;
  
  fVar2 = *param_3;
  dVar3 = (double)SQRT(fVar2 * fVar2 + param_3[1] * param_3[1] + param_3[2] * param_3[2]);
  if (dVar3 == 0.0) {
    *param_2 = *param_3;
    param_2[1] = param_3[1];
    param_2[2] = param_3[2];
    fVar2 = param_3[3];
    param_2[2] = 0.0;
    param_2[3] = fVar2;
    param_2[1] = 0.0;
    *param_2 = 0.0;
  }
  else {
    fVar1 = (float)(param_1 / dVar3);
    *param_2 = fVar2 * fVar1;
    param_2[1] = param_3[1] * fVar1;
    param_2[2] = param_3[2] * fVar1;
    param_2[3] = param_3[3];
  }
  return;
}



//==== 005e8030  ns=Global  size=0x28
// sig: undefined FUN_005e8030(void)
// callers(21): 000aaec0 hero::HandleHeroMovement; 000b72b0 hero::TransitionMovement; 000be228 hero::HeroMovement; 001c50b0 mobyupdate_unsorted::UpdateMoby_1106; 00233180 mobyupdate_unsorted::UpdateMoby_1266; 002766e0 mobyupdate_unsorted::UpdateMoby_1422; 002e8af8 mobyupdate_unsorted::UpdateMoby_{203_1900}; 003090f8 mobyupdate_unsorted::UpdateMoby_239; 0037dc48 mobyupdate_unsorted::UpdateMoby_44; 0038f550 mobyupdate_unsorted::UpdateMoby_459; 003a14a8 mobyupdate_unsorted::UpdateMoby_491; 003c3730 mobyupdate_unsorted::UpdateMoby_574; 003c8a10 mobyupdate_unsorted::UpdateMoby_577; 003ce680 mobyupdate_unsorted::UpdateMoby_580; 003eca78 mobyupdate_unsorted::UpdateMoby_63; 003f0610 mobyupdate_unsorted::UpdateMoby_631; 0043a188 mobyupdate_unsorted::UpdateMoby_739; 0043dc00 mobyupdate_unsorted::UpdateMoby_74; 00451bc8 mobyupdate_unsorted::UpdateMoby_763; 004743a8 mobyupdate_unsorted::UpdateMoby_820; 00492d98 mobyupdate_unsorted::UpdateMoby_857
// callees(0): 

double FUN_005e8030(float *param_1)

{
  return (double)SQRT(*param_1 * *param_1 + param_1[1] * param_1[1] + param_1[2] * param_1[2]);
}



//==== 005e8078  ns=mathfunc  size=0x94
// sig: undefined cosf(float f)
// callers(45): 000aaec0 hero::HandleHeroMovement; 000be228 hero::HeroMovement; 00176c90 walk::Walk_UpdateStateMachine; 0019aea0 mobyupdate_unsorted::UpdateMoby_1045; 001a02d8 mobyupdate_unsorted::UpdateMoby_1048; 001c50b0 mobyupdate_unsorted::UpdateMoby_1106; 001f7980 mobyupdate_unsorted::UpdateMoby_1199; 001fcd60 mobyupdate_unsorted::UpdateMoby_1202; 00202b98 mobyupdate_unsorted::UpdateMoby_121; 00225b48 mobyupdate_unsorted::UpdateMoby_1246; 00233180 mobyupdate_unsorted::UpdateMoby_1266; 002766e0 mobyupdate_unsorted::UpdateMoby_1422; 00293c48 mobyupdate_unsorted::UpdateMoby_153; 002a2438 mobyupdate_unsorted::UpdateMoby_160; 002cbaf8 mobyupdate_unsorted::UpdateMoby_186; 002dc568 mobyupdate_unsorted::UpdateMoby_193; 002de920 mobyupdate_unsorted::UpdateMoby_194; 002f20a0 mobyupdate_unsorted::UpdateMoby_217; 003090f8 mobyupdate_unsorted::UpdateMoby_239; 00321a20 mobyupdate_unsorted::UpdateMoby_270; 0032f988 mobyupdate_unsorted::UpdateMoby_291; 00332c38 mobyupdate_unsorted::UpdateMoby_294; 0034b2e8 mobyupdate_unsorted::UpdateMoby_340; 0034ec58 mobyupdate_unsorted::UpdateMoby_342; 0035ffd8 mobyupdate_unsorted::UpdateMoby_388
// callees(0): 

double mathfunc::cosf(float f)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  
  fVar1 = f + 1.5707963;
  fVar2 = fVar1;
  if (3.1415925 - fVar1 <= fVar1) {
    fVar2 = 3.1415925 - fVar1;
  }
  if (fVar2 <= -3.1415925 - fVar1) {
    fVar2 = -3.1415925 - fVar1;
  }
  fVar1 = fVar2 * fVar2;
  fVar3 = fVar1 * fVar1 * fVar2;
  fVar4 = fVar1 * fVar3;
  return (double)(fVar2 + fVar1 * fVar2 * -0.16666657 + fVar3 * 0.0083330255 + fVar4 * -0.0001980741
                 + fVar1 * fVar4 * 2.601887e-06);
}



//==== 005e8128  ns=Global  size=0x94
// sig: undefined FUN_005e8128(void)
// callers(45): 000aaec0 hero::HandleHeroMovement; 000be228 hero::HeroMovement; 00176c90 walk::Walk_UpdateStateMachine; 0019aea0 mobyupdate_unsorted::UpdateMoby_1045; 001a02d8 mobyupdate_unsorted::UpdateMoby_1048; 001c50b0 mobyupdate_unsorted::UpdateMoby_1106; 001f7980 mobyupdate_unsorted::UpdateMoby_1199; 001fcd60 mobyupdate_unsorted::UpdateMoby_1202; 00202b98 mobyupdate_unsorted::UpdateMoby_121; 00225b48 mobyupdate_unsorted::UpdateMoby_1246; 00233180 mobyupdate_unsorted::UpdateMoby_1266; 002766e0 mobyupdate_unsorted::UpdateMoby_1422; 00293c48 mobyupdate_unsorted::UpdateMoby_153; 002a2438 mobyupdate_unsorted::UpdateMoby_160; 002cbaf8 mobyupdate_unsorted::UpdateMoby_186; 002dc568 mobyupdate_unsorted::UpdateMoby_193; 002de920 mobyupdate_unsorted::UpdateMoby_194; 002f20a0 mobyupdate_unsorted::UpdateMoby_217; 003090f8 mobyupdate_unsorted::UpdateMoby_239; 00321a20 mobyupdate_unsorted::UpdateMoby_270; 0032f988 mobyupdate_unsorted::UpdateMoby_291; 0034b2e8 mobyupdate_unsorted::UpdateMoby_340; 0034ec58 mobyupdate_unsorted::UpdateMoby_342; 0035ffd8 mobyupdate_unsorted::UpdateMoby_388; 0036e680 mobyupdate_unsorted::UpdateMoby_427
// callees(0): 

double FUN_005e8128(double param_1)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  
  dVar1 = param_1;
  if ((double)(float)(3.141592502593994 - param_1) <= param_1) {
    dVar1 = (double)(float)(3.141592502593994 - param_1);
  }
  if (dVar1 <= (double)(float)(-3.141592502593994 - param_1)) {
    dVar1 = (double)(float)(-3.141592502593994 - param_1);
  }
  dVar2 = (double)(float)(dVar1 * dVar1);
  dVar4 = (double)(float)(dVar2 * (double)(float)(dVar2 * dVar1));
  dVar3 = (double)(float)(dVar2 * dVar4);
  return (double)((float)(dVar1 + (double)(float)((double)(float)(dVar2 * dVar1) *
                                                 -0.16666656732559204)) +
                  (float)(dVar4 * 0.008333025500178337) + (float)(dVar3 * -0.0001980741071747616) +
                 (float)(dVar2 * dVar3) * 2.601887e-06);
}



//==== 005e81c0  ns=Global  size=0x30
// sig: undefined FUN_005e81c0(void)
// callers(5): 000aaec0 hero::HandleHeroMovement; 000b72b0 hero::TransitionMovement; 0019aea0 mobyupdate_unsorted::UpdateMoby_1045; 001c50b0 mobyupdate_unsorted::UpdateMoby_1106; 0043dc00 mobyupdate_unsorted::UpdateMoby_74
// callees(0): 

double FUN_005e81c0(float *param_1,float *param_2)

{
  return (double)(*param_1 * *param_2 + param_1[1] * param_2[1] + param_1[2] * param_2[2]);
}



//==== 005e81f0  ns=Global  size=0x3c
// sig: undefined FUN_005e81f0(void)
// callers(29): 000aaec0 hero::HandleHeroMovement; 000b72b0 hero::TransitionMovement; 0019aea0 mobyupdate_unsorted::UpdateMoby_1045; 001c50b0 mobyupdate_unsorted::UpdateMoby_1106; 00233180 mobyupdate_unsorted::UpdateMoby_1266; 002766e0 mobyupdate_unsorted::UpdateMoby_1422; 002de920 mobyupdate_unsorted::UpdateMoby_194; 002e8af8 mobyupdate_unsorted::UpdateMoby_{203_1900}; 00307270 mobyupdate_unsorted::UpdateMoby_238; 003090f8 mobyupdate_unsorted::UpdateMoby_239; 0034b2e8 mobyupdate_unsorted::UpdateMoby_340; 0035ffd8 mobyupdate_unsorted::UpdateMoby_388; 0037dc48 mobyupdate_unsorted::UpdateMoby_44; 0038f550 mobyupdate_unsorted::UpdateMoby_459; 003a14a8 mobyupdate_unsorted::UpdateMoby_491; 003b85b8 mobyupdate_unsorted::UpdateMoby_563; 003c3730 mobyupdate_unsorted::UpdateMoby_574; 003c8a10 mobyupdate_unsorted::UpdateMoby_577; 003ce680 mobyupdate_unsorted::UpdateMoby_580; 003db608 mobyupdate_unsorted::UpdateMoby_612; 003eca78 mobyupdate_unsorted::UpdateMoby_63; 003f0610 mobyupdate_unsorted::UpdateMoby_631; 0043a188 mobyupdate_unsorted::UpdateMoby_739; 0043dc00 mobyupdate_unsorted::UpdateMoby_74; 00451bc8 mobyupdate_unsorted::UpdateMoby_763
// callees(0): 

void FUN_005e81f0(float *param_1,float *param_2,float *param_3)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  
  fVar1 = *param_2;
  fVar2 = *param_3;
  fVar3 = param_2[1];
  fVar4 = param_3[1];
  fVar5 = param_2[2];
  fVar6 = param_3[2];
  param_1[3] = param_2[3];
  *param_1 = fVar1 - fVar2;
  param_1[1] = fVar3 - fVar4;
  param_1[2] = fVar5 - fVar6;
  return;
}



//==== 005e822c  ns=Global  size=0x30
// sig: undefined FUN_005e822c(void)
// callers(8): 000aaec0 hero::HandleHeroMovement; 000b72b0 hero::TransitionMovement; 000be228 hero::HeroMovement; 0019aea0 mobyupdate_unsorted::UpdateMoby_1045; 001c50b0 mobyupdate_unsorted::UpdateMoby_1106; 003b85b8 mobyupdate_unsorted::UpdateMoby_563; 003c3730 mobyupdate_unsorted::UpdateMoby_574; 0043dc00 mobyupdate_unsorted::UpdateMoby_74
// callees(0): 

void FUN_005e822c(double param_1,float *param_2,float *param_3)

{
  *param_2 = (float)((double)*param_3 * param_1);
  param_2[1] = (float)((double)param_3[1] * param_1);
  param_2[2] = (float)((double)param_3[2] * param_1);
  param_2[3] = param_3[3];
  return;
}



//==== 005e825c  ns=Global  size=0xd4
// sig: undefined FUN_005e825c(void)
// callers(19): 000aaec0 hero::HandleHeroMovement; 000ed970 mobyattack::UpdateMoby_256_GC_Rocket; 00225b48 mobyupdate_unsorted::UpdateMoby_1246; 00241320 mobyupdate_unsorted::UpdateMoby_{13_14_15_16}; 0024d620 mobyupdate_helpers::M1338_0024d620; 00288a70 mobyupdate_helpers::M1474_00288a70; 00293c48 mobyupdate_unsorted::UpdateMoby_153; 0029ead8 mobyupdate_unsorted::UpdateMoby_157; 002ab988 mobyupdate_unsorted::UpdateMoby_168; 002db020 mobyupdate_unsorted::UpdateMoby_192; 00301d00 mobyupdate_unsorted::UpdateMoby_233; 0035aac0 mobyupdate_helpers::M388_0035aac0; 003f0610 mobyupdate_unsorted::UpdateMoby_631; 003f3e00 mobyupdate_unsorted::UpdateMoby_{633_773_988_989}; 0040c3f0 mobyupdate_helpers::M671_0040c3f0; 004122c8 mobyupdate_helpers::M685_004122c8; 00488eb0 mobyupdate_unsorted::UpdateMoby_849; 0048c188 FUN_0048c188; 004c0fd8 mobyupdate_unsorted::UpdateMoby_935
// callees(0): 

void FUN_005e825c(float *param_1,float *param_2,float *param_3)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  
  fVar1 = *param_2;
  fVar2 = param_2[1];
  fVar3 = param_3[1];
  fVar4 = param_3[5];
  fVar5 = param_2[2];
  fVar6 = param_3[2];
  fVar7 = param_3[6];
  fVar8 = param_3[9];
  fVar9 = param_3[3];
  fVar10 = param_3[7];
  fVar11 = param_2[3];
  fVar12 = param_3[10];
  fVar13 = param_3[0xd];
  fVar14 = param_3[0xb];
  fVar15 = param_3[0xe];
  fVar16 = param_3[0xf];
  *param_1 = *param_3 * fVar1 + param_3[4] * fVar2 + param_3[8] * fVar5 + param_3[0xc] * fVar11;
  param_1[1] = fVar3 * fVar1 + fVar4 * fVar2 + fVar8 * fVar5 + fVar13 * fVar11;
  param_1[2] = fVar6 * fVar1 + fVar7 * fVar2 + fVar12 * fVar5 + fVar15 * fVar11;
  param_1[3] = fVar9 * fVar1 + fVar10 * fVar2 + fVar14 * fVar5 + fVar16 * fVar11;
  return;
}



//==== 005e8338  ns=Global  size=0x180
// sig: undefined FUN_005e8338(void)
// callers(86): 000aaec0 hero::HandleHeroMovement; 000b72b0 hero::TransitionMovement; 000be228 hero::HeroMovement; 000ed970 mobyattack::UpdateMoby_256_GC_Rocket; 00161788 space::UpdateSpace; 00176c90 walk::Walk_UpdateStateMachine; 0018b2f8 mobyupdate_unsorted::UpdateMoby_1023; 0019aea0 mobyupdate_unsorted::UpdateMoby_1045; 001a02d8 mobyupdate_unsorted::UpdateMoby_1048; 001aa078 mobyupdate_unsorted::UpdateMoby_1059; 001b07a8 mobyupdate_unsorted::UpdateMoby_1068; 001c50b0 mobyupdate_unsorted::UpdateMoby_1106; 001f7980 mobyupdate_unsorted::UpdateMoby_1199; 001fcd60 mobyupdate_unsorted::UpdateMoby_1202; 00209508 mobyupdate_unsorted::UpdateMoby_1215; 00211748 mobyupdate_unsorted::UpdateMoby_1229; 00222fe0 mobyupdate_unsorted::UpdateMoby_1243; 00225b48 mobyupdate_unsorted::UpdateMoby_1246; 0022e580 mobyupdate_unsorted::UpdateMoby_1262; 00233180 mobyupdate_unsorted::UpdateMoby_1266; 0023be70 mobyupdate_unsorted::UpdateMoby_1284; 00241320 mobyupdate_unsorted::UpdateMoby_{13_14_15_16}; 002766e0 mobyupdate_unsorted::UpdateMoby_1422; 00293c48 mobyupdate_unsorted::UpdateMoby_153; 0029ead8 mobyupdate_unsorted::UpdateMoby_157
// callees(0): 

double FUN_005e8338(double param_1,double param_2)

{
  float fVar1;
  float fVar2;
  ulonglong *puVar3;
  float fVar4;
  float fVar5;
  float *pfVar6;
  ulonglong uVar7;
  int iVar8;
  int iVar10;
  longlong lVar9;
  longlong lVar11;
  int iVar12;
  double dVar13;
  double dVar14;
  
  uVar7 = ZEXT48(&stack0x00000000);
  lVar9 = uVar7 - 0x60;
  puVar3 = (ulonglong *)lVar9;
  *puVar3 = uVar7;
  dVar14 = ABS(param_1);
  *(float *)((int)puVar3 + 0x34) = (float)param_2;
  param_2 = ABS(param_2);
  *(float *)(puVar3 + 6) = (float)param_1;
  *(float *)(puVar3 + 7) = (float)(dVar14 - param_2);
  dVar13 = 0.0;
  iVar8 = (int)(((ulonglong)(*(uint *)(puVar3 + 6) >> 0x1c) & 8 |
                (ulonglong)(*(uint *)(puVar3 + 7) >> 0x1e) & 2 |
                (ulonglong)(*(uint *)((int)puVar3 + 0x34) >> 0x1d) & 4) << 2);
  fVar2 = *(float *)(&mobyutil::g_atanQuadrantTable + iVar8);
  fVar1 = *(float *)(&DAT_00735904 + iVar8);
  if (0.0 <= *(float *)(puVar3 + 7)) {
    dVar14 = ABS((double)*(float *)((int)puVar3 + 0x34));
    param_2 = ABS((double)*(float *)(puVar3 + 6));
  }
  if (0.0 < param_2) {
    iVar10 = 4;
    iVar8 = 4;
    fVar4 = (float)(dVar14 - param_2) / (float)(dVar14 + param_2);
    lVar11 = lVar9;
    do {
      iVar10 = iVar10 + -1;
      *(float *)((int)lVar11 + 0x3c) = fVar4;
      lVar11 = lVar11 + 4;
    } while (iVar10 != 0);
    fVar4 = fVar4 * fVar4;
    lVar11 = uVar7 - 0x50;
    fVar5 = fVar4 * fVar4;
    *(float *)(puVar3 + 8) = *(float *)(puVar3 + 8) * fVar4;
    *(float *)((int)puVar3 + 0x44) = *(float *)((int)puVar3 + 0x44) * fVar5;
    *(float *)(puVar3 + 9) = *(float *)(puVar3 + 9) * fVar5 * fVar4;
    do {
      iVar8 = iVar8 + -1;
      *(float *)((int)lVar11 + 0x3c) = *(float *)((int)lVar11 + 0x2c) * fVar5 * fVar5;
      lVar11 = lVar11 + 4;
    } while (iVar8 != 0);
    iVar10 = 8;
    iVar12 = 0;
    iVar8 = 8;
    lVar11 = lVar9;
    do {
      pfVar6 = (float *)((int)&DAT_007358e0 + iVar12);
      iVar10 = iVar10 + -1;
      iVar12 = iVar12 + 4;
      *(float *)((int)lVar11 + 0x3c) = *(float *)((int)lVar11 + 0x3c) * *pfVar6;
      lVar11 = lVar11 + 4;
    } while (iVar10 != 0);
    do {
      iVar8 = iVar8 + -1;
      iVar10 = (int)lVar9;
      lVar9 = lVar9 + 4;
      dVar13 = (double)(float)(dVar13 + (double)*(float *)(iVar10 + 0x3c));
    } while (iVar8 != 0);
    dVar13 = (double)((float)(dVar13 + 0.7853981852531433) * fVar2 + fVar1);
  }
  return dVar13;
}



//==== 005e84c0  ns=Global  size=0x84
// sig: undefined FUN_005e84c0(void)
// callers(14): 000aaec0 hero::HandleHeroMovement; 00202b98 mobyupdate_unsorted::UpdateMoby_121; 00225b48 mobyupdate_unsorted::UpdateMoby_1246; 002766e0 mobyupdate_unsorted::UpdateMoby_1422; 00293c48 mobyupdate_unsorted::UpdateMoby_153; 002a2438 mobyupdate_unsorted::UpdateMoby_160; 0034ec58 mobyupdate_unsorted::UpdateMoby_342; 0036e680 mobyupdate_unsorted::UpdateMoby_427; 003a14a8 mobyupdate_unsorted::UpdateMoby_491; 003c3730 mobyupdate_unsorted::UpdateMoby_574; 003f0610 mobyupdate_unsorted::UpdateMoby_631; 0043dc00 mobyupdate_unsorted::UpdateMoby_74; 0048c188 FUN_0048c188; 004bcd20 mobyupdate_unsorted::UpdateMoby_931
// callees(0): 

void FUN_005e84c0(double param_1,float *param_2,float *param_3)

{
  float fVar1;
  float fVar2;
  double dVar3;
  
  fVar2 = *param_3;
  dVar3 = (double)SQRT(fVar2 * fVar2 + param_3[1] * param_3[1]);
  if (dVar3 == 0.0) {
    *param_2 = *param_3;
    param_2[1] = param_3[1];
    param_2[2] = param_3[2];
    fVar2 = param_3[3];
    param_2[1] = 0.0;
    param_2[3] = fVar2;
    *param_2 = 0.0;
  }
  else {
    fVar1 = (float)(param_1 / dVar3);
    *param_2 = fVar2 * fVar1;
    param_2[1] = param_3[1] * fVar1;
    param_2[2] = param_3[2];
    param_2[3] = param_3[3];
  }
  return;
}



//==== 005e8548  ns=Global  size=0x40
// sig: undefined FUN_005e8548(void)
// callers(31): 000aaec0 hero::HandleHeroMovement; 000b72b0 hero::TransitionMovement; 000be228 hero::HeroMovement; 00176c90 walk::Walk_UpdateStateMachine; 0019aea0 mobyupdate_unsorted::UpdateMoby_1045; 001a5f50 mobyupdate_unsorted::UpdateMoby_1051; 001c50b0 mobyupdate_unsorted::UpdateMoby_1106; 001fcd60 mobyupdate_unsorted::UpdateMoby_1202; 00233180 mobyupdate_unsorted::UpdateMoby_1266; 002766e0 mobyupdate_unsorted::UpdateMoby_1422; 002f20a0 mobyupdate_unsorted::UpdateMoby_217; 00307270 mobyupdate_unsorted::UpdateMoby_238; 003090f8 mobyupdate_unsorted::UpdateMoby_239; 00332c38 mobyupdate_unsorted::UpdateMoby_294; 00346610 mobyupdate_unsorted::UpdateMoby_333; 0034b2e8 mobyupdate_unsorted::UpdateMoby_340; 0035ffd8 mobyupdate_unsorted::UpdateMoby_388; 0037dc48 mobyupdate_unsorted::UpdateMoby_44; 003806d0 mobyupdate_helpers::M440_003806d0; 0038f550 mobyupdate_unsorted::UpdateMoby_459; 003a14a8 mobyupdate_unsorted::UpdateMoby_491; 003b85b8 mobyupdate_unsorted::UpdateMoby_563; 003c3730 mobyupdate_unsorted::UpdateMoby_574; 003ce680 mobyupdate_unsorted::UpdateMoby_580; 003db608 mobyupdate_unsorted::UpdateMoby_612
// callees(0): 

double FUN_005e8548(float *param_1,float *param_2)

{
  return (double)SQRT((*param_1 - *param_2) * (*param_1 - *param_2) +
                      (param_1[1] - param_2[1]) * (param_1[1] - param_2[1]) +
                      (param_1[2] - param_2[2]) * (param_1[2] - param_2[2]));
}



//==== 005e8588  ns=Global  size=0x2c
// sig: undefined FUN_005e8588(void)
// callers(31): 000aaec0 hero::HandleHeroMovement; 000be228 hero::HeroMovement; 00176c90 walk::Walk_UpdateStateMachine; 0019aea0 mobyupdate_unsorted::UpdateMoby_1045; 001a5f50 mobyupdate_unsorted::UpdateMoby_1051; 001c50b0 mobyupdate_unsorted::UpdateMoby_1106; 001fcd60 mobyupdate_unsorted::UpdateMoby_1202; 00233180 mobyupdate_unsorted::UpdateMoby_1266; 002766e0 mobyupdate_unsorted::UpdateMoby_1422; 002de920 mobyupdate_unsorted::UpdateMoby_194; 002f20a0 mobyupdate_unsorted::UpdateMoby_217; 00307270 mobyupdate_unsorted::UpdateMoby_238; 003090f8 mobyupdate_unsorted::UpdateMoby_239; 00332c38 mobyupdate_unsorted::UpdateMoby_294; 0034b2e8 mobyupdate_unsorted::UpdateMoby_340; 0035ffd8 mobyupdate_unsorted::UpdateMoby_388; 0038f550 mobyupdate_unsorted::UpdateMoby_459; 003a14a8 mobyupdate_unsorted::UpdateMoby_491; 003b85b8 mobyupdate_unsorted::UpdateMoby_563; 003c3730 mobyupdate_unsorted::UpdateMoby_574; 003c8a10 mobyupdate_unsorted::UpdateMoby_577; 003ce680 mobyupdate_unsorted::UpdateMoby_580; 003eca78 mobyupdate_unsorted::UpdateMoby_63; 003f0610 mobyupdate_unsorted::UpdateMoby_631; 0041fb90 mobyupdate_unsorted::UpdateMoby_691
// callees(0): 

double FUN_005e8588(float *param_1,float *param_2)

{
  return (double)SQRT((*param_1 - *param_2) * (*param_1 - *param_2) +
                      (param_1[1] - param_2[1]) * (param_1[1] - param_2[1]));
}



//==== 005e85b4  ns=Global  size=0x3c
// sig: undefined FUN_005e85b4(void)
// callers(1): 000f7af0 mobyfunc::MB_BuildDrawEntry
// callees(0): 

void FUN_005e85b4(int param_1,int param_2,uint param_3,int param_4,ulonglong param_5,
                 ulonglong param_6)

{
  uint *puVar1;
  
  puVar1 = *(uint **)(param_1 + 8);
  *puVar1 = param_2 * 4 + 0x1740U | 0x40000;
  *(uint **)(param_1 + 8) = puVar1 + 2;
  puVar1[1] = (uint)((param_6 & 0xffffffff) << 0x10) | (uint)((param_5 & 0xffffffff) << 8) |
              param_4 << 4 | param_3;
  return;
}



//==== 005e85f0  ns=Global  size=0x20
// sig: undefined FUN_005e85f0(void)
// callers(2): 000f7af0 mobyfunc::MB_BuildDrawEntry; 004d93ac idol_draw::Render_SetupPasses
// callees(0): 

void FUN_005e85f0(int param_1,undefined4 param_2)

{
  undefined4 *puVar1;
  
  puVar1 = *(undefined4 **)(param_1 + 8);
  *puVar1 = 0x40304;
  puVar1[1] = param_2;
  *(undefined4 **)(param_1 + 8) = puVar1 + 2;
  return;
}



//==== 005e8610  ns=Global  size=0x28
// sig: undefined FUN_005e8610(void)
// callers(1): 000f7af0 mobyfunc::MB_BuildDrawEntry
// callees(0): 

void FUN_005e8610(int param_1,int param_2)

{
  uint *puVar1;
  
  puVar1 = *(uint **)(param_1 + 8);
  *puVar1 = param_2 * 4 + 0x1740U | 0x40000;
  puVar1[1] = 2;
  *(uint **)(param_1 + 8) = puVar1 + 2;
  return;
}



//==== 005e8638  ns=Global  size=0x54
// sig: undefined FUN_005e8638(void)
// callers(1): 000f7af0 mobyfunc::MB_BuildDrawEntry
// callees(0): 

ulonglong FUN_005e8638(int param_1,uint param_2)

{
  longlong lVar1;
  ulonglong uVar2;
  
  if (PTR_DAT_00902e98._0_1_ == '\0') {
    uVar2 = 0;
  }
  else {
    lVar1 = LZCOUNT(param_2 & 0xff &
                    (uint)*(byte *)(*(int *)(param_1 + 0x41c) + (param_2 >> 8 & 0xff)));
    uVar2 = (ulonglong)(lVar1 << 0x20) >> 0x25;
    if (DAT_01593350 != '\0') {
      uVar2 = (ulonglong)(LZCOUNT((uint)lVar1 >> 5) << 0x20) >> 0x25;
    }
  }
  return uVar2;
}



//==== 005e868c  ns=Global  size=0x1c
// sig: undefined FUN_005e868c(void)
// callers(1): 000f7af0 mobyfunc::MB_BuildDrawEntry
// callees(0): 

void FUN_005e868c(undefined4 *param_1,undefined4 *param_2)

{
  *param_1 = *param_2;
  param_1[1] = param_2[1];
  param_1[2] = param_2[2];
  return;
}



//==== 005e86a8  ns=Global  size=0x28
// sig: undefined FUN_005e86a8(void)
// callers(1): 000f7af0 mobyfunc::MB_BuildDrawEntry
// callees(0): 

void FUN_005e86a8(double param_1,float *param_2,float *param_3)

{
  float fVar1;
  float fVar2;
  
  fVar1 = param_3[1];
  fVar2 = param_3[2];
  *param_2 = (float)((double)*param_3 / param_1);
  param_2[1] = (float)((double)fVar1 / param_1);
  param_2[2] = (float)((double)fVar2 / param_1);
  return;
}



//==== 005e86d8  ns=Global  size=0xfc
// sig: undefined FUN_005e86d8(void)
// callers(1): 000f7af0 mobyfunc::MB_BuildDrawEntry
// callees(0): 

bool FUN_005e86d8(double param_1,double param_2,undefined8 param_3,undefined8 param_4)

{
  float fVar1;
  int iVar2;
  float fStack00000030;
  float fStack00000034;
  
  fVar1 = (float)((ulonglong)param_4 >> 0x20);
  iVar2 = 0;
  fStack00000030 = (float)((ulonglong)param_3 >> 0x20);
  fStack00000034 = (float)param_3;
  do {
    if ((float)((double)((float)(&DAT_00a245a8)[iVar2 * 4] * fStack00000030 +
                         (float)(&DAT_00a245ac)[iVar2 * 4] * fStack00000034 +
                         (float)(&DAT_00a245b0)[iVar2 * 4] * fVar1 +
                        (float)(&DAT_00a245b4)[iVar2 * 4]) + param_1) < 0.0) {
      return false;
    }
    iVar2 = iVar2 + 1;
  } while (iVar2 < 5);
  fVar1 = fVar1 - DAT_00a24610;
  return (fStack00000030 - DAT_00a24608) * (fStack00000030 - DAT_00a24608) +
         (fStack00000034 - DAT_00a2460c) * (fStack00000034 - DAT_00a2460c) + fVar1 * fVar1 <=
         (float)(param_2 + param_1) * (float)(param_2 + param_1);
}



//==== 005e87d8  ns=Global  size=0x10
// sig: undefined FUN_005e87d8(void)
// callers(1): 000f7af0 mobyfunc::MB_BuildDrawEntry
// callees(0): 

void FUN_005e87d8(double param_1,double param_2,double param_3,float *param_4)

{
  *param_4 = (float)param_1;
  param_4[1] = (float)param_2;
  param_4[2] = (float)param_3;
  return;
}



//==== 005e87e8  ns=Global  size=0x60
// sig: undefined FUN_005e87e8(void)
// callers(1): 000f7af0 mobyfunc::MB_BuildDrawEntry
// callees(0): 

double FUN_005e87e8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  float fVar1;
  float fStack00000030;
  float fStack00000034;
  float fStack00000040;
  float fStack00000044;
  
  fStack00000034 = (float)param_1;
  fStack00000044 = (float)param_3;
  fStack00000030 = (float)((ulonglong)param_1 >> 0x20);
  fStack00000040 = (float)((ulonglong)param_3 >> 0x20);
  fVar1 = (float)((ulonglong)param_2 >> 0x20) - (float)((ulonglong)param_4 >> 0x20);
  return (double)SQRT((fStack00000030 - fStack00000040) * (fStack00000030 - fStack00000040) +
                      (fStack00000034 - fStack00000044) * (fStack00000034 - fStack00000044) +
                      fVar1 * fVar1);
}



//==== 005e8848  ns=Global  size=0x14
// sig: undefined FUN_005e8848(void)
// callers(1): 000f7af0 mobyfunc::MB_BuildDrawEntry
// callees(0): 

void FUN_005e8848(double param_1,double param_2,double param_3,double param_4,float *param_5)

{
  *param_5 = (float)param_1;
  param_5[1] = (float)param_2;
  param_5[2] = (float)param_3;
  param_5[3] = (float)param_4;
  return;
}



//==== 005e885c  ns=Global  size=0x54
// sig: undefined FUN_005e885c(void)
// callers(1): 000f7af0 mobyfunc::MB_BuildDrawEntry
// callees(0): 

void FUN_005e885c(double param_1,uint param_2)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  
  auVar1 = ZEXT416(0);
  auVar2._0_4_ = (float)param_1;
  auVar2._4_4_ = (float)param_1;
  auVar2._8_4_ = (float)param_1;
  auVar2._12_4_ = (float)param_1;
  vectorMultiplyAddFloatingPoint
            (*(undefined1 (*) [16])(param_2 & 0xfffffff0),auVar2,
             auVar1 | auVar1 << 0x20 | auVar1 << 0x40 | auVar1 << 0x60);
  return;
}



//==== 005e88f0  ns=Global  size=0x44
// sig: undefined FUN_005e88f0(void)
// callers(1): 000f7af0 mobyfunc::MB_BuildDrawEntry
// callees(0): 

void FUN_005e88f0(uint param_1)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)(param_1 & 0xfffffff0);
  puVar1[3] = 0;
  puVar1[2] = 0;
  puVar1[1] = 0;
  *puVar1 = 0x3f800000;
  puVar1 = (undefined4 *)(param_1 + 0x10 & 0xfffffff0);
  puVar1[3] = 0;
  puVar1[2] = 0;
  puVar1[1] = 0x3f800000;
  *puVar1 = 0;
  puVar1 = (undefined4 *)(param_1 + 0x20 & 0xfffffff0);
  puVar1[3] = 0;
  puVar1[2] = 0x3f800000;
  puVar1[1] = 0;
  *puVar1 = 0;
  puVar1 = (undefined4 *)(param_1 + 0x30 & 0xfffffff0);
  puVar1[3] = 0x3f800000;
  puVar1[2] = 0;
  puVar1[1] = 0;
  *puVar1 = 0;
  return;
}



//==== 005e8940  ns=Global  size=0x30
// sig: undefined FUN_005e8940(void)
// callers(1): 000f7af0 mobyfunc::MB_BuildDrawEntry
// callees(0): 

void FUN_005e8940(uint param_1,uint param_2)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  
  puVar1 = (undefined4 *)(param_2 & 0xfffffff0);
  uVar5 = puVar1[2];
  uVar4 = puVar1[1];
  uVar3 = *puVar1;
  puVar2 = (undefined4 *)(param_1 & 0xfffffff0);
  puVar2[3] = puVar1[3];
  puVar2[2] = uVar5;
  puVar2[1] = uVar4;
  *puVar2 = uVar3;
  puVar1 = (undefined4 *)(param_2 + 0x10 & 0xfffffff0);
  uVar5 = puVar1[2];
  uVar4 = puVar1[1];
  uVar3 = *puVar1;
  puVar2 = (undefined4 *)(param_1 + 0x10 & 0xfffffff0);
  puVar2[3] = puVar1[3];
  puVar2[2] = uVar5;
  puVar2[1] = uVar4;
  *puVar2 = uVar3;
  puVar1 = (undefined4 *)(param_2 + 0x20 & 0xfffffff0);
  uVar5 = puVar1[2];
  uVar4 = puVar1[1];
  uVar3 = *puVar1;
  puVar2 = (undefined4 *)(param_1 + 0x20 & 0xfffffff0);
  puVar2[3] = puVar1[3];
  puVar2[2] = uVar5;
  puVar2[1] = uVar4;
  *puVar2 = uVar3;
  puVar1 = (undefined4 *)(param_2 + 0x30 & 0xfffffff0);
  uVar5 = puVar1[2];
  uVar4 = puVar1[1];
  uVar3 = *puVar1;
  puVar2 = (undefined4 *)(param_1 + 0x30 & 0xfffffff0);
  puVar2[3] = puVar1[3];
  puVar2[2] = uVar5;
  puVar2[1] = uVar4;
  *puVar2 = uVar3;
  return;
}



//==== 005e8970  ns=Global  size=0x2c
// sig: undefined FUN_005e8970(void)
// callers(1): 000f7af0 mobyfunc::MB_BuildDrawEntry
// callees(0): 

void FUN_005e8970(int param_1,int param_2,uint param_3)

{
  uint *puVar1;
  
  puVar1 = *(uint **)(param_1 + 8);
  *puVar1 = param_2 * 4 + 0x1680U | 0x40000;
  puVar1[1] = param_3 | 0x80000000;
  *(uint **)(param_1 + 8) = puVar1 + 2;
  return;
}



//==== 005e899c  ns=Global  size=0x28
// sig: undefined FUN_005e899c(void)
// callers(1): 000f7af0 mobyfunc::MB_BuildDrawEntry
// callees(0): 

void FUN_005e899c(int param_1,undefined4 param_2)

{
  undefined4 *puVar1;
  
  puVar1 = *(undefined4 **)(param_1 + 8);
  *puVar1 = 0x8181c;
  puVar1[1] = param_2;
  puVar1[2] = 0x11;
  *(undefined4 **)(param_1 + 8) = puVar1 + 3;
  return;
}



//==== 005e89c4  ns=Global  size=0x30
// sig: undefined FUN_005e89c4(void)
// callers(1): 000f7af0 mobyfunc::MB_BuildDrawEntry
// callees(0): 

void FUN_005e89c4(uint param_1,uint param_2)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  
  puVar1 = (undefined4 *)(param_2 & 0xfffffff0);
  uVar5 = puVar1[2];
  uVar4 = puVar1[1];
  uVar3 = *puVar1;
  puVar2 = (undefined4 *)(param_1 & 0xfffffff0);
  puVar2[3] = puVar1[3];
  puVar2[2] = uVar5;
  puVar2[1] = uVar4;
  *puVar2 = uVar3;
  puVar1 = (undefined4 *)(param_2 + 0x10 & 0xfffffff0);
  uVar5 = puVar1[2];
  uVar4 = puVar1[1];
  uVar3 = *puVar1;
  puVar2 = (undefined4 *)(param_1 + 0x10 & 0xfffffff0);
  puVar2[3] = puVar1[3];
  puVar2[2] = uVar5;
  puVar2[1] = uVar4;
  *puVar2 = uVar3;
  puVar1 = (undefined4 *)(param_2 + 0x20 & 0xfffffff0);
  uVar5 = puVar1[2];
  uVar4 = puVar1[1];
  uVar3 = *puVar1;
  puVar2 = (undefined4 *)(param_1 + 0x20 & 0xfffffff0);
  puVar2[3] = puVar1[3];
  puVar2[2] = uVar5;
  puVar2[1] = uVar4;
  *puVar2 = uVar3;
  puVar1 = (undefined4 *)(param_2 + 0x30 & 0xfffffff0);
  uVar5 = puVar1[2];
  uVar4 = puVar1[1];
  uVar3 = *puVar1;
  puVar2 = (undefined4 *)(param_1 + 0x30 & 0xfffffff0);
  puVar2[3] = puVar1[3];
  puVar2[2] = uVar5;
  puVar2[1] = uVar4;
  *puVar2 = uVar3;
  return;
}



//==== 005e89f4  ns=Global  size=0xa0
// sig: undefined FUN_005e89f4(void)
// callers(1): 000f7af0 mobyfunc::MB_BuildDrawEntry
// callees(0): 

void FUN_005e89f4(double param_1,uint param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  
  fVar1 = (float)param_1;
  fVar2 = (float)param_1;
  fVar3 = (float)param_1;
  fVar4 = (float)param_1;
  auVar6 = ZEXT416(0);
  auVar7 = auVar6 | auVar6 << 0x20 | auVar6 << 0x40 | auVar6 << 0x60;
  auVar5._0_4_ = fVar1;
  auVar5._4_4_ = fVar2;
  auVar5._8_4_ = fVar3;
  auVar5._12_4_ = fVar4;
  auVar10._0_4_ = fVar1;
  auVar10._4_4_ = fVar2;
  auVar10._8_4_ = fVar3;
  auVar10._12_4_ = fVar4;
  auVar8._0_4_ = fVar1;
  auVar8._4_4_ = fVar2;
  auVar8._8_4_ = fVar3;
  auVar8._12_4_ = fVar4;
  auVar6._0_4_ = fVar1;
  auVar6._4_4_ = fVar2;
  auVar6._8_4_ = fVar3;
  auVar6._12_4_ = fVar4;
  auVar6 = vectorMultiplyAddFloatingPoint
                     (*(undefined1 (*) [16])(param_2 & 0xfffffff0),auVar6,auVar7);
  auVar9 = vectorMultiplyAddFloatingPoint
                     (*(undefined1 (*) [16])(param_2 + 0x10 & 0xfffffff0),auVar8,auVar7);
  auVar10 = vectorMultiplyAddFloatingPoint
                      (*(undefined1 (*) [16])(param_2 + 0x20 & 0xfffffff0),auVar10,auVar7);
  auVar8 = vectorMultiplyAddFloatingPoint
                     (*(undefined1 (*) [16])(param_2 + 0x30 & 0xfffffff0),auVar5,auVar7);
  *(undefined1 (*) [16])(param_2 & 0xfffffff0) = auVar6;
  *(undefined1 (*) [16])(param_2 + 0x10 & 0xfffffff0) = auVar9;
  *(undefined1 (*) [16])(param_2 + 0x20 & 0xfffffff0) = auVar10;
  *(undefined1 (*) [16])(param_2 + 0x30 & 0xfffffff0) = auVar8;
  return;
}



//==== 005e8a94  ns=Global  size=0x7c
// sig: undefined FUN_005e8a94(void)
// callers(1): 000f7af0 mobyfunc::MB_BuildDrawEntry
// callees(0): 

void FUN_005e8a94(uint param_1,uint param_2)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  
  auVar2 = *(undefined1 (*) [16])(param_2 + 0x20 & 0xfffffff0);
  auVar1 = vectorMergeLowWord(*(undefined1 (*) [16])(param_2 & 0xfffffff0),auVar2);
  auVar3 = *(undefined1 (*) [16])(param_2 + 0x10 & 0xfffffff0);
  auVar4 = *(undefined1 (*) [16])(param_2 + 0x30 & 0xfffffff0);
  auVar5 = vectorMergeHighWord(auVar3,auVar4);
  auVar3 = vectorMergeLowWord(auVar3,auVar4);
  auVar4 = vectorMergeHighWord(auVar1,auVar3);
  auVar1 = vectorMergeLowWord(auVar1,auVar3);
  auVar2 = vectorMergeHighWord(*(undefined1 (*) [16])(param_2 & 0xfffffff0),auVar2);
  auVar3 = vectorMergeHighWord(auVar2,auVar5);
  auVar2 = vectorMergeLowWord(auVar2,auVar5);
  *(undefined1 (*) [16])(param_1 & 0xfffffff0) = auVar3;
  *(undefined1 (*) [16])(param_1 + 0x10 & 0xfffffff0) = auVar2;
  *(undefined1 (*) [16])(param_1 + 0x20 & 0xfffffff0) = auVar4;
  *(undefined1 (*) [16])(param_1 + 0x30 & 0xfffffff0) = auVar1;
  return;
}



//==== 005e8b10  ns=Global  size=0x10
// sig: undefined FUN_005e8b10(void)
// callers(1): 000f7af0 mobyfunc::MB_BuildDrawEntry
// callees(0): 

void FUN_005e8b10(double param_1,double param_2,double param_3,float *param_4)

{
  *param_4 = (float)param_1;
  param_4[1] = (float)param_2;
  param_4[2] = (float)param_3;
  return;
}



//==== 005e8b20  ns=Global  size=0x3c
// sig: undefined FUN_005e8b20(void)
// callers(1): 000f7af0 mobyfunc::MB_BuildDrawEntry
// callees(0): 

void FUN_005e8b20(int param_1,undefined4 param_2)

{
  undefined4 *puVar1;
  
  puVar1 = *(undefined4 **)(param_1 + 8);
  *puVar1 = 0x400c1714;
  puVar1[1] = 0;
  puVar1[2] = 0;
  puVar1[3] = 0;
  puVar1[4] = 0x41808;
  puVar1[5] = param_2;
  *(undefined4 **)(param_1 + 8) = puVar1 + 6;
  return;
}



//==== 005e8b5c  ns=Global  size=0x108
// sig: undefined FUN_005e8b5c(void)
// callers(2): 000f7af0 mobyfunc::MB_BuildDrawEntry; 00508c10 shrubfunc::DrawShrub
// callees(0): 

void FUN_005e8b5c(int param_1,ulonglong param_2,longlong param_3)

{
  uint *puVar1;
  uint uVar2;
  uint uVar3;
  ulonglong uVar4;
  int *piVar5;
  longlong lVar6;
  int iVar7;
  ulonglong uVar8;
  longlong lVar9;
  
  lVar9 = 0x100 - (param_2 & 0xff);
  uVar4 = param_3 - lVar9;
  lVar9 = lVar9 + (uVar4 & (longlong)((int)uVar4 >> 0x1f));
  uVar8 = param_3 - lVar9 & ~(longlong)((int)(param_3 - lVar9) >> 0x1f);
  lVar6 = uVar8 - (uVar8 & 0xffffff00);
  piVar5 = (int *)(param_1 + 8);
  iVar7 = (int)lVar6;
  uVar4 = (uVar8 << 0x20) >> 0x28;
  puVar1 = (uint *)*piVar5;
  *puVar1 = (((uint)uVar8 >> 8) + ((uint)LZCOUNT(iVar7) >> 5 ^ 1) +
            ((uint)LZCOUNT((int)lVar9) >> 5 ^ 1)) * 0x40000 | 0x40001824;
  *piVar5 = (int)(puVar1 + 1);
  if ((int)lVar9 != 0) {
    uVar3 = (uint)param_2;
    param_2 = lVar9 + param_2;
    puVar1 = (uint *)*piVar5;
    *puVar1 = uVar3 | (uint)((lVar9 - 1U & 0xffffffff) << 0x18);
    *piVar5 = (int)(puVar1 + 1);
  }
  uVar3 = (uint)param_2;
  uVar8 = 0;
  if (uVar4 != 0) {
    do {
      puVar1 = (uint *)*piVar5;
      uVar8 = uVar8 + 1;
      uVar2 = (uint)param_2;
      param_2 = param_2 + 0x100;
      uVar3 = (uint)param_2;
      *puVar1 = uVar2 | 0xff000000;
      *piVar5 = (int)(puVar1 + 1);
    } while ((uVar8 & 0xffffffff) < uVar4);
  }
  if (iVar7 != 0) {
    puVar1 = (uint *)*piVar5;
    *puVar1 = uVar3 | (uint)((lVar6 - 1U & 0xffffffff) << 0x18);
    *piVar5 = (int)(puVar1 + 1);
  }
  return;
}



//==== 005e8c64  ns=Global  size=0x190
// sig: undefined FUN_005e8c64(void)
// callers(1): 00161788 space::UpdateSpace
// callees(2): 005c5ad0 libc::memcpy; 005dd914 mathfunc::SinCos

void * FUN_005e8c64(undefined8 param_1,float *param_2)

{
  undefined8 uVar1;
  void *pvVar2;
  double extraout_f1;
  double extraout_f1_00;
  double extraout_f1_01;
  double extraout_f1_02;
  double extraout_f1_03;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  float local_90;
  float local_8c;
  float local_88;
  float local_80;
  float local_7c;
  float local_78;
  float local_70;
  float local_6c;
  float local_68;
  
  uVar1 = mathfunc::SinCos((double)*param_2,param_1,0);
  dVar10 = extraout_f1;
  uVar1 = mathfunc::SinCos((double)*param_2,uVar1,1);
  dVar9 = extraout_f1_00;
  uVar1 = mathfunc::SinCos((double)param_2[1],uVar1,0);
  dVar8 = extraout_f1_01;
  uVar1 = mathfunc::SinCos((double)param_2[1],uVar1,1);
  dVar7 = extraout_f1_02;
  uVar1 = mathfunc::SinCos((double)param_2[2],uVar1,0);
  dVar6 = extraout_f1_03;
  dVar3 = (double)mathfunc::SinCos((double)param_2[2],uVar1,1);
  dVar5 = (double)(float)(dVar8 * dVar6);
  dVar4 = (double)(float)(dVar3 * dVar8);
  libc::memcpy(&local_90,&DAT_00734b00,0x40);
  local_90 = (float)(dVar7 * dVar3);
  local_8c = (float)(dVar7 * dVar6);
  local_78 = (float)(dVar7 * dVar10);
  local_68 = (float)(dVar9 * dVar7);
  local_80 = (float)(dVar10 * dVar4 - (double)(float)(dVar9 * dVar6));
  local_7c = (float)(dVar10 * dVar5 + (double)(float)(dVar9 * dVar3));
  local_70 = (float)(dVar9 * dVar4 + (double)(float)(dVar10 * dVar6));
  local_6c = (float)(dVar9 * dVar5 - (double)(float)(dVar3 * dVar10));
  local_88 = (float)-dVar8;
  pvVar2 = libc::memcpy((void *)param_1,&local_90,0x40);
  return pvVar2;
}



//==== 005e8df4  ns=stub  size=0x4
// sig: undefined STUB_005e8df4(void)
// callers(0): 
// callees(0): 

void stub::STUB_005e8df4(void)

{
  return;
}



//==== 005e8e08  ns=Global  size=0x74
// sig: undefined FUN_005e8e08(void)
// callers(3): 00199888 mobyupdate_helpers::M1045_00199888; 001c3a18 mobyupdate_helpers::M1106_001c3a18; 00486bf8 mobyupdate_helpers::M849_00486bf8
// callees(0): 

double FUN_005e8e08(double param_1)

{
  float fVar1;
  float fVar2;
  double dVar3;
  
  dVar3 = param_1;
  if (param_1 - 0.0 < 0.0) {
    dVar3 = ABS(param_1);
  }
  fVar1 = (float)(1.0 - dVar3);
  if ((float)(1.0 - dVar3) - 0.0 < 0.0) {
    fVar1 = 0.0;
  }
  fVar2 = 1.0;
  if (param_1 - 0.0 < 0.0) {
    fVar2 = -1.0;
  }
  return (double)(-(((float)((double)(float)(dVar3 * dVar3) * dVar3) * DAT_007358cc +
                    (float)((double)(float)(dVar3 * dVar3) * (double)DAT_007358c8 +
                           (double)(float)(dVar3 * (double)DAT_007358c4 + (double)DAT_007358c0))) *
                    SQRT(fVar1) - 1.5707964) * fVar2);
}



//==== 005e8e80  ns=Global  size=0x84
// sig: undefined FUN_005e8e80(void)
// callers(8): 0019aea0 mobyupdate_unsorted::UpdateMoby_1045; 00202b98 mobyupdate_unsorted::UpdateMoby_121; 00293c48 mobyupdate_unsorted::UpdateMoby_153; 002cbaf8 mobyupdate_unsorted::UpdateMoby_186; 0032f988 mobyupdate_unsorted::UpdateMoby_291; 0041fb90 mobyupdate_unsorted::UpdateMoby_691; 00422f08 mobyupdate_unsorted::UpdateMoby_694; 004743a8 mobyupdate_unsorted::UpdateMoby_820
// callees(0): 

bool FUN_005e8e80(double param_1,float *param_2,float *param_3)

{
  float fVar1;
  float fVar2;
  double dVar3;
  
  fVar2 = *param_3;
  dVar3 = (double)SQRT(param_3[2] * param_3[2] + fVar2 * fVar2 + param_3[1] * param_3[1]);
  if (dVar3 <= param_1) {
    *param_2 = *param_3;
    param_2[1] = param_3[1];
    param_2[2] = param_3[2];
    param_2[3] = param_3[3];
  }
  else {
    fVar1 = (float)(param_1 / dVar3);
    *param_2 = fVar2 * fVar1;
    param_2[1] = param_3[1] * fVar1;
    param_2[2] = param_3[2] * fVar1;
    param_2[3] = param_3[3];
  }
  return dVar3 > param_1;
}



//==== 005e8f04  ns=Global  size=0x48
// sig: undefined FUN_005e8f04(void)
// callers(1): 001a5f50 mobyupdate_unsorted::UpdateMoby_1051
// callees(0): 

void FUN_005e8f04(double param_1,float *param_2,float *param_3,float *param_4)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  
  fVar1 = *param_4;
  fVar2 = *param_3;
  fVar3 = param_4[1];
  fVar4 = param_3[1];
  fVar5 = param_4[2];
  fVar6 = param_3[2];
  param_2[3] = param_4[3];
  *param_2 = (float)(param_1 * (double)(float)((double)fVar1 - (double)fVar2) + (double)fVar2);
  param_2[1] = (float)(param_1 * (double)(float)((double)fVar3 - (double)fVar4) + (double)fVar4);
  param_2[2] = (float)(param_1 * (double)(float)((double)fVar5 - (double)fVar6) + (double)fVar6);
  return;
}



//==== 005e8f4c  ns=Global  size=0x48
// sig: undefined FUN_005e8f4c(void)
// callers(4): 0032f988 mobyupdate_unsorted::UpdateMoby_291; 003f3e00 mobyupdate_unsorted::UpdateMoby_{633_773_988_989}; 0040c3f0 mobyupdate_helpers::M671_0040c3f0; 0048c188 FUN_0048c188
// callees(0): 

void FUN_005e8f4c(float *param_1,float *param_2,float *param_3)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  
  fVar1 = param_3[1];
  fVar2 = param_2[2];
  fVar3 = param_3[2];
  fVar4 = param_2[1];
  fVar5 = *param_2;
  fVar6 = *param_3;
  param_1[3] = 0.0;
  *param_1 = fVar1 * fVar2 - fVar3 * fVar4;
  param_1[2] = fVar6 * fVar4 - fVar1 * fVar5;
  param_1[1] = fVar3 * fVar5 - fVar6 * fVar2;
  return;
}



//==== 005e9008  ns=Global  size=0x1a0
// sig: undefined FUN_005e9008(void)
// callers(2): 004dfe70 FUN_004dfe70; 004e0d50 FUN_004e0d50
// callees(0): 

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_005e9008(uint param_1,uint param_2,uint param_3,uint param_4)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  
  auVar1 = _DAT_005e8ff0;
  auVar6 = ZEXT416(0);
  auVar3 = auVar6 | auVar6 << 0x20 | auVar6 << 0x40 | auVar6 << 0x60;
  auVar2 = *(undefined1 (*) [16])(param_4 & 0xfffffff0);
  auVar4 = *(undefined1 (*) [16])(param_2 & 0xfffffff0);
  auVar6 = vectorMultiplyAddFloatingPoint(auVar2,auVar2,auVar3);
  auVar5 = vectorSubtractFloatingPoint(*(undefined1 (*) [16])(param_3 & 0xfffffff0),auVar4);
  auVar7 = vectorPermute(auVar2,auVar2,_DAT_005e8fa0);
  auVar9 = vectorPermute(auVar2,auVar2,_DAT_005e8fb0);
  auVar6 = vectorMultiplyAddFloatingPoint(auVar7,auVar7,auVar6);
  auVar8 = vectorMultiplyAddFloatingPoint(auVar5,auVar5,auVar3);
  auVar11 = vectorPermute(auVar5,auVar5,_DAT_005e8fa0);
  auVar13 = vectorPermute(auVar5,auVar5,_DAT_005e8fb0);
  auVar7 = vectorMultiplyAddFloatingPoint(auVar9,auVar9,auVar6);
  auVar8 = vectorMultiplyAddFloatingPoint(auVar11,auVar11,auVar8);
  auVar6 = loadVectorLeftIndexed(0x20,0x5e8fa0);
  auVar9 = loadVectorLeftIndexed(0x24,0x5e8fa0);
  auVar6 = auVar6 >> 0x60 & (undefined1  [16])0xffffffff;
  auVar10 = auVar6 | auVar6 << 0x20 | auVar6 << 0x40 | auVar6 << 0x60;
  auVar6 = auVar9 >> 0x60 & (undefined1  [16])0xffffffff;
  auVar12 = auVar6 | auVar6 << 0x20 | auVar6 << 0x40 | auVar6 << 0x60;
  auVar6 = auVar7 >> 0x60 & (undefined1  [16])0xffffffff;
  auVar7 = auVar6 | auVar6 << 0x20 | auVar6 << 0x40 | auVar6 << 0x60;
  auVar6 = vectorMultiplyAddFloatingPoint(auVar13,auVar13,auVar8);
  auVar11 = vectorReciprocalSquareRootEstimateFloatingPoint(auVar7);
  auVar6 = auVar6 >> 0x60 & (undefined1  [16])0xffffffff;
  auVar9 = auVar6 | auVar6 << 0x20 | auVar6 << 0x40 | auVar6 << 0x60;
  auVar13 = vectorReciprocalSquareRootEstimateFloatingPoint(auVar9);
  auVar7 = vectorMultiplyAddFloatingPoint(auVar11,auVar7,auVar3);
  auVar6 = vectorMultiplyAddFloatingPoint(auVar11,auVar10,auVar3);
  auVar8 = vectorNegativeMultiplySubtractFloatingPoint(auVar11,auVar7,auVar12);
  auVar9 = vectorMultiplyAddFloatingPoint(auVar13,auVar9,auVar3);
  auVar7 = vectorMultiplyAddFloatingPoint(auVar13,auVar10,auVar3);
  auVar8 = vectorMultiplyAddFloatingPoint(auVar8,auVar6,auVar11);
  auVar9 = vectorNegativeMultiplySubtractFloatingPoint(auVar13,auVar9,auVar12);
  auVar6 = vectorCompareEqualToFloatingPoint(auVar8,auVar8);
  auVar9 = vectorMultiplyAddFloatingPoint(auVar9,auVar7,auVar13);
  auVar6 = vectorConditionalSelect(auVar11,auVar8,auVar6);
  auVar7 = vectorMultiplyAddFloatingPoint(auVar2,auVar6,auVar3);
  auVar6 = vectorCompareEqualToFloatingPoint(auVar9,auVar9);
  auVar6 = vectorConditionalSelect(auVar13,auVar9,auVar6);
  auVar2 = vectorPermute(auVar7,auVar7,_DAT_005e8fe0);
  auVar5 = vectorMultiplyAddFloatingPoint(auVar5,auVar6,auVar3);
  auVar6 = vectorPermute(auVar7,auVar7,_DAT_005e8fd0);
  auVar8 = vectorPermute(auVar5,auVar5,_DAT_005e8fd0);
  auVar9 = vectorPermute(auVar5,auVar5,_DAT_005e8fe0);
  auVar7 = vectorMultiplyAddFloatingPoint(auVar8,auVar2,auVar3);
  auVar7 = vectorNegativeMultiplySubtractFloatingPoint(auVar9,auVar6,auVar7);
  auVar2 = vectorMultiplyAddFloatingPoint(auVar7,auVar7,auVar3);
  auVar11 = vectorPermute(auVar7,auVar7,_DAT_005e8fa0);
  auVar6 = vectorPermute(auVar7,auVar7,_DAT_005e8fb0);
  auVar2 = vectorMultiplyAddFloatingPoint(auVar11,auVar11,auVar2);
  auVar6 = vectorMultiplyAddFloatingPoint(auVar6,auVar6,auVar2);
  auVar6 = auVar6 >> 0x60 & (undefined1  [16])0xffffffff;
  auVar6 = auVar6 | auVar6 << 0x20 | auVar6 << 0x40 | auVar6 << 0x60;
  auVar11 = vectorReciprocalSquareRootEstimateFloatingPoint(auVar6);
  auVar2 = vectorMultiplyAddFloatingPoint(auVar11,auVar6,auVar3);
  auVar6 = vectorMultiplyAddFloatingPoint(auVar11,auVar10,auVar3);
  auVar2 = vectorNegativeMultiplySubtractFloatingPoint(auVar11,auVar2,auVar12);
  auVar2 = vectorMultiplyAddFloatingPoint(auVar2,auVar6,auVar11);
  auVar6 = vectorCompareEqualToFloatingPoint(auVar2,auVar2);
  auVar6 = vectorConditionalSelect(auVar11,auVar2,auVar6);
  auVar7 = vectorMultiplyAddFloatingPoint(auVar7,auVar6,auVar3);
  auVar6 = vectorPermute(auVar7,auVar7,_DAT_005e8fd0);
  auVar2 = vectorPermute(auVar7,auVar7,_DAT_005e8fe0);
  auVar6 = vectorMultiplyAddFloatingPoint(auVar6,auVar9,auVar3);
  auVar8 = vectorNegativeMultiplySubtractFloatingPoint(auVar2,auVar8,auVar6);
  auVar2 = vectorMultiplyAddFloatingPoint(auVar8,auVar8,auVar3);
  auVar6 = vectorPermute(auVar8,auVar8,_DAT_005e8fa0);
  auVar9 = vectorPermute(auVar8,auVar8,_DAT_005e8fb0);
  auVar6 = vectorMultiplyAddFloatingPoint(auVar6,auVar6,auVar2);
  auVar9 = vectorMultiplyAddFloatingPoint(auVar9,auVar9,auVar6);
  auVar6 = loadVectorLeftIndexed(0x60,0x5e8fa0);
  auVar6 = auVar6 >> 0x60 & (undefined1  [16])0xffffffff;
  auVar2 = vectorPermute(auVar7,auVar3,_DAT_005e8ff0);
  auVar7 = auVar9 >> 0x60 & (undefined1  [16])0xffffffff;
  auVar9 = auVar7 | auVar7 << 0x20 | auVar7 << 0x40 | auVar7 << 0x60;
  auVar11 = vectorReciprocalSquareRootEstimateFloatingPoint(auVar9);
  *(undefined1 (*) [16])(param_1 & 0xfffffff0) = auVar2;
  auVar2 = vectorPermute(auVar5 ^ (auVar6 | auVar6 << 0x20 | auVar6 << 0x40 | auVar6 << 0x60),auVar3
                         ,auVar1);
  auVar7 = vectorPermute(auVar4,auVar12,auVar1);
  auVar6 = vectorMultiplyAddFloatingPoint(auVar11,auVar9,auVar3);
  auVar4 = vectorMultiplyAddFloatingPoint(auVar11,auVar10,auVar3);
  auVar6 = vectorNegativeMultiplySubtractFloatingPoint(auVar11,auVar6,auVar12);
  auVar6 = vectorMultiplyAddFloatingPoint(auVar6,auVar4,auVar11);
  auVar4 = vectorCompareEqualToFloatingPoint(auVar6,auVar6);
  auVar6 = vectorConditionalSelect(auVar11,auVar6,auVar4);
  auVar6 = vectorMultiplyAddFloatingPoint(auVar8,auVar6,auVar3);
  auVar6 = vectorPermute(auVar6,auVar3,auVar1);
  *(undefined1 (*) [16])(param_1 + 0x10 & 0xfffffff0) = auVar6;
  *(undefined1 (*) [16])(param_1 + 0x20 & 0xfffffff0) = auVar2;
  *(undefined1 (*) [16])(param_1 + 0x30 & 0xfffffff0) = auVar7;
  return;
}



//==== 005e91b0  ns=Global  size=0x4
// sig: undefined FUN_005e91b0(void)
// callers(0): 
// callees(0): 

void FUN_005e91b0(void)

{
  return;
}



//==== 005e91b4  ns=Global  size=0x4
// sig: undefined FUN_005e91b4(void)
// callers(0): 
// callees(0): 

void FUN_005e91b4(void)

{
  return;
}



//==== 005e91b8  ns=Global  size=0x38
// sig: undefined FUN_005e91b8(void)
// callers(0): 
// callees(0): 

void FUN_005e91b8(undefined4 *param_1)

{
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  *(undefined1 *)(param_1 + 4) = 0;
  *(undefined1 *)((int)param_1 + 0x11) = 0;
  param_1[5] = 0;
  param_1[6] = &DAT_0066173c;
  param_1[7] = 0;
  param_1[8] = 0;
  return;
}



//==== 005e91f0  ns=Global  size=0xc
// sig: undefined FUN_005e91f0(void)
// callers(0): 
// callees(0): 

void FUN_005e91f0(int param_1)

{
  undefined4 *puVar1;
  undefined4 in_vr2_32_0;
  undefined4 in_vr2_32_1;
  undefined4 in_vr2_32_2;
  undefined4 in_vr2_32_3;
  
  puVar1 = (undefined4 *)(param_1 + 0x20U & 0xfffffff0);
  puVar1[3] = in_vr2_32_3;
  puVar1[2] = in_vr2_32_2;
  puVar1[1] = in_vr2_32_1;
  *puVar1 = in_vr2_32_0;
  return;
}



//==== 005e91fc  ns=Global  size=0x40
// sig: undefined FUN_005e91fc(void)
// callers(0): 
// callees(1): 005e387c FUN_005e387c

void FUN_005e91fc(undefined4 *param_1)

{
  if (param_1 != (undefined4 *)0x0) {
    *param_1 = &PTR_PTR_00661710;
    FUN_005e387c();
  }
  return;
}



//==== 005e923c  ns=Global  size=0x40
// sig: undefined FUN_005e923c(void)
// callers(0): 
// callees(1): 005e387c FUN_005e387c

void FUN_005e923c(undefined4 *param_1)

{
  if (param_1 != (undefined4 *)0x0) {
    *param_1 = &PTR_PTR_00661748;
    FUN_005e387c();
  }
  return;
}



//==== 005e927c  ns=Global  size=0x40
// sig: undefined FUN_005e927c(void)
// callers(0): 
// callees(1): 005e387c FUN_005e387c

void FUN_005e927c(undefined4 *param_1)

{
  if (param_1 != (undefined4 *)0x0) {
    *param_1 = &PTR_PTR_00666410;
    FUN_005e387c();
  }
  return;
}



//==== 005e92bc  ns=Global  size=0x18
// sig: undefined FUN_005e92bc(void)
// callers(0): 
// callees(0): 

void FUN_005e92bc(undefined4 *param_1)

{
  *(undefined1 *)(param_1 + 1) = 0;
  *param_1 = &PTR_PTR_006618e0;
  return;
}



//==== 005e92d4  ns=Global  size=0x48
// sig: undefined FUN_005e92d4(void)
// callers(0): 
// callees(1): 005e387c FUN_005e387c

void FUN_005e92d4(undefined4 *param_1)

{
  if (param_1 != (undefined4 *)0x0) {
    *param_1 = &PTR_PTR_006618e0;
    *(undefined1 *)(param_1 + 1) = 0;
    FUN_005e387c();
  }
  return;
}



//==== 005e931c  ns=Global  size=0x18
// sig: undefined FUN_005e931c(void)
// callers(0): 
// callees(0): 

void FUN_005e931c(undefined4 *param_1)

{
  *(undefined1 *)(param_1 + 1) = 0;
  *param_1 = &PTR_PTR_006618e0;
  return;
}



//==== 005e9334  ns=Global  size=0x48
// sig: undefined FUN_005e9334(void)
// callers(0): 
// callees(1): 005e387c FUN_005e387c

void FUN_005e9334(undefined4 *param_1)

{
  if (param_1 != (undefined4 *)0x0) {
    *param_1 = &PTR_PTR_006618e0;
    *(undefined1 *)(param_1 + 1) = 0;
    FUN_005e387c();
  }
  return;
}



//==== 005e937c  ns=Global  size=0x40
// sig: undefined FUN_005e937c(void)
// callers(0): 
// callees(1): 005e387c FUN_005e387c

void FUN_005e937c(undefined4 *param_1)

{
  if (param_1 != (undefined4 *)0x0) {
    *param_1 = &PTR_PTR_00661760;
    FUN_005e387c();
  }
  return;
}



//==== 005e93bc  ns=Global  size=0x4
// sig: undefined FUN_005e93bc(void)
// callers(0): 
// callees(0): 

void FUN_005e93bc(void)

{
  return;
}



//==== 005e93c0  ns=Global  size=0x4
// sig: undefined FUN_005e93c0(void)
// callers(0): 
// callees(0): 

void FUN_005e93c0(void)

{
  return;
}



//==== 005e93c4  ns=Global  size=0x4
// sig: undefined FUN_005e93c4(void)
// callers(0): 
// callees(0): 

void FUN_005e93c4(void)

{
  return;
}



//==== 005e93c8  ns=Global  size=0x4
// sig: undefined FUN_005e93c8(void)
// callers(0): 
// callees(0): 

void FUN_005e93c8(void)

{
  return;
}



//==== 005e93cc  ns=Global  size=0x4
// sig: undefined FUN_005e93cc(void)
// callers(0): 
// callees(0): 

void FUN_005e93cc(void)

{
  return;
}



//==== 005e93d0  ns=Global  size=0x4
// sig: undefined FUN_005e93d0(void)
// callers(0): 
// callees(0): 

void FUN_005e93d0(void)

{
  return;
}



//==== 005e93d4  ns=Global  size=0x40
// sig: undefined FUN_005e93d4(void)
// callers(0): 
// callees(1): 005e387c FUN_005e387c

void FUN_005e93d4(undefined4 *param_1)

{
  if (param_1 != (undefined4 *)0x0) {
    *param_1 = &PTR_PTR_0066177c;
    FUN_005e387c();
  }
  return;
}



//==== 005e9414  ns=Global  size=0x34
// sig: undefined FUN_005e9414(void)
// callers(0): 
// callees(0): 

void FUN_005e9414(int param_1,int param_2)

{
  if (0x10000 < param_2) {
    param_2 = 0x10000;
  }
  *(float *)(param_1 + 0x5c) = (float)(longlong)param_2 * DAT_0071a3c0;
  return;
}



//==== 005e9448  ns=Global  size=0xc
// sig: undefined FUN_005e9448(void)
// callers(0): 
// callees(0): 

undefined8 FUN_005e9448(int param_1,undefined8 param_2)

{
  *(int *)(param_1 + 0x8c) = (int)param_2;
  return param_2;
}



//==== 005e9454  ns=Global  size=0x30
// sig: undefined FUN_005e9454(void)
// callers(0): 
// callees(0): 

undefined * FUN_005e9454(uint param_1)

{
  undefined *puVar1;
  
  if (param_1 < 3) {
    puVar1 = PTR_PTR_0071a3c8;
    *(uint *)PTR_DAT_0071a3c4 = param_1;
    return puVar1;
  }
  puVar1 = PTR_PTR_0071a3c8;
  *(undefined4 *)PTR_DAT_0071a3c4 = 8;
  return puVar1;
}



//==== 005e9484  ns=Global  size=0xd8
// sig: undefined FUN_005e9484(void)
// callers(0): 
// callees(1): 005d0140 libc::memset

int FUN_005e9484(int param_1,int param_2)

{
  uint uVar1;
  
  if (param_2 == 0) {
    if ((*(int *)(param_1 + 0x94) == 0) && (*(int *)(param_1 + 0x98) == 0)) {
      uVar1 = (int)(*(uint *)PTR_DAT_0071a3c4 ^ 2) >> 0x1f;
      libc::memset(*(undefined4 *)(PTR_DAT_0071a3c4 + 4),0,
                   ((int)(uVar1 - (uVar1 ^ *(uint *)PTR_DAT_0071a3c4 ^ 2)) >> 0x1f & 0x18000U) +
                   0x8000);
    }
  }
  else if (((*(int *)(param_1 + 0x94) == 0) && (*(int *)(param_1 + 0x98) == 0)) &&
          (*(int *)(param_1 + 0x34) == 0)) {
    *(undefined4 *)(PTR_DAT_0071a3c4 + 0xc) = **(undefined4 **)(PTR_DAT_0071a3c4 + 8);
  }
  *(int *)(param_1 + 0x34) = param_2;
  return param_2;
}



//==== 005e9560  ns=Global  size=0x94
// sig: undefined FUN_005e9560(void)
// callers(0): 
// callees(0): 
// strings: 005e9574: '}ISx8' (raw)

void FUN_005e9560(int param_1,int param_2,uint param_3)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  ulonglong uVar6;
  
  if (8 < param_3) {
    param_3 = 8;
  }
  *(undefined4 *)(param_1 + 0x60) = 0;
  *(undefined4 *)(param_1 + 0x7c) = 0;
  *(undefined4 *)(param_1 + 100) = 0;
  *(undefined4 *)(param_1 + 0x68) = 0;
  *(undefined4 *)(param_1 + 0x6c) = 0;
  *(undefined4 *)(param_1 + 0x70) = 0;
  *(undefined4 *)(param_1 + 0x74) = 0;
  *(undefined4 *)(param_1 + 0x78) = 0;
  if (param_3 == 0) {
    return;
  }
  uVar6 = (ulonglong)param_3;
  uVar3 = *(int *)(param_1 + 0x28) - 1;
  uVar4 = 0;
  iVar5 = param_1 + 0x58;
  do {
    uVar2 = uVar3 & uVar4;
    iVar1 = uVar4 << (uVar3 & 0x3f);
    uVar4 = uVar4 + 1;
    *(undefined4 *)(iVar5 + 8) = *(undefined4 *)((iVar1 + uVar2) * 4 + param_2);
    uVar6 = uVar6 - 1;
    iVar5 = iVar5 + 4;
  } while (uVar6 != 0);
  return;
}



//==== 005e95f8  ns=Global  size=0x250
// sig: undefined FUN_005e95f8(void)
// callers(0): 
// callees(3): 005d0140 libc::memset; 0064fe04 cell::cellAudioGetPortConfig; 0064fe44 cell::cellAudioPortOpen

undefined4
FUN_005e95f8(int param_1,int param_2,undefined8 param_3,int param_4,undefined8 param_5,
            undefined4 param_6)

{
  uint uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined4 uVar10;
  int iVar11;
  undefined1 local_80 [32];
  undefined1 local_60 [28];
  undefined4 local_44;
  
  libc::memset(param_1,0,0x180);
  puVar2 = PTR_DAT_0071a3c4;
  *(undefined4 *)(param_1 + 0x50) = 0;
  *(undefined4 *)(param_1 + 0x24) = 0x10;
  *(undefined4 *)(param_1 + 0x4c) = 0xfffffffb;
  *(int *)(param_1 + 0x20) = param_2;
  *(int *)(param_1 + 0x28) = param_4;
  *(int *)(param_1 + 0x2c) =
       (int)(((longlong)param_4 * (longlong)(param_2 * 0xc) & 0xffffffffU) / 1000);
  *(undefined4 *)(param_1 + 0x90) = param_6;
  *(undefined4 *)(param_1 + 0x5c) = 0x3f000000;
  *(undefined4 *)(param_1 + 0x58) = 0x3f800000;
  *(undefined4 *)(param_1 + 0x60) = 0x3f800000;
  *(undefined4 *)(param_1 + 100) = 0x3f800000;
  uVar1 = *(uint *)puVar2;
  if (5 < uVar1) {
    *(undefined4 *)(param_1 + 0x70) = 0x3f800000;
    *(undefined4 *)(param_1 + 0x74) = 0x3f800000;
    if (7 < uVar1) {
      *(undefined4 *)(param_1 + 0x7c) = 0x3f800000;
      *(undefined4 *)(param_1 + 0x78) = 0x3f800000;
    }
  }
  puVar5 = PTR_PTR_0071a3d4;
  puVar4 = PTR_PTR_0071a3d0;
  puVar3 = PTR_PTR_0071a3cc;
  *(undefined4 *)(param_1 + 0x8c) = 0;
  puVar9 = PTR_PTR_0071a3e4;
  puVar8 = PTR_PTR_0071a3e0;
  puVar7 = PTR_PTR_0071a3dc;
  puVar6 = PTR_PTR_0071a3d8;
  *(undefined4 *)(param_1 + 0x34) = 1;
  *(undefined **)(param_1 + 0x164) = puVar3;
  *(undefined **)(param_1 + 0x168) = puVar4;
  *(undefined **)(param_1 + 0x16c) = puVar5;
  *(undefined **)(param_1 + 0x170) = puVar6;
  *(undefined **)(param_1 + 0x174) = puVar7;
  *(undefined **)(param_1 + 0x178) = puVar8;
  *(undefined **)(param_1 + 0x17c) = puVar9;
  *(undefined4 *)(param_1 + 0x38) = 0x20;
  *(undefined4 *)(param_1 + 0x94) = 0;
  *(int *)(param_1 + 0x80) = (int)(((ulonglong)*(uint *)(param_1 + 0x20) << 0x10) / 48000);
  iVar11 = *(int *)(puVar2 + 0x10);
  *(int *)(param_1 + 0x98) = iVar11;
  puVar3 = PTR_DAT_0071a3e8;
  if (iVar11 == 0) {
    *(undefined4 *)PTR_DAT_0071a3e8 = 0xffff;
    *(undefined4 *)(puVar2 + 0x14) = 0;
    iVar11 = cell::cellAudioPortOpen(local_80,puVar3);
    uVar10 = 0;
    if (iVar11 == 0) {
      cell::cellAudioGetPortConfig(*(undefined4 *)puVar3,local_60);
      uVar10 = 1;
      *(int *)(puVar2 + 0x10) = param_1;
      *(undefined4 *)(puVar2 + 4) = local_44;
      *(undefined4 *)(puVar2 + 8) = 4;
    }
  }
  else {
    uVar10 = 1;
    *(int *)(iVar11 + 0x94) = param_1;
    *(int *)(puVar2 + 0x10) = param_1;
  }
  return uVar10;
}



//==== 005e9848  ns=Global  size=0x144
// sig: undefined FUN_005e9848(void)
// callers(0): 
// callees(2): 005d0140 libc::memset; 0064fde4 cell::cellAudioPortClose

void FUN_005e9848(int param_1)

{
  int iVar1;
  uint uVar2;
  undefined *puVar3;
  undefined *puVar4;
  
  (*(code *)**(undefined4 **)(param_1 + 0x174))(param_1,0);
  puVar3 = PTR_DAT_0071a3c4;
  uVar2 = (int)(*(uint *)PTR_DAT_0071a3c4 ^ 2) >> 0x1f;
  libc::memset(*(undefined4 *)(PTR_DAT_0071a3c4 + 4),0,
               ((int)(uVar2 - (uVar2 ^ *(uint *)PTR_DAT_0071a3c4 ^ 2)) >> 0x1f & 0x18000U) + 0x8000)
  ;
  if (param_1 == *(int *)(puVar3 + 0x10)) {
    *(undefined4 *)(puVar3 + 0x10) = *(undefined4 *)(param_1 + 0x98);
  }
  iVar1 = *(int *)(param_1 + 0x94);
  if (iVar1 != 0) {
    *(undefined4 *)(iVar1 + 0x98) = *(undefined4 *)(param_1 + 0x98);
  }
  if (*(int *)(param_1 + 0x98) != 0) {
    *(int *)(*(int *)(param_1 + 0x98) + 0x94) = iVar1;
  }
  puVar4 = PTR_DAT_0071a3e8;
  if (*(int *)(puVar3 + 0x10) == 0) {
    if (*(int *)PTR_DAT_0071a3e8 != 0xffff) {
      cell::cellAudioPortClose(*(int *)PTR_DAT_0071a3e8);
      *(undefined4 *)puVar4 = 0xffff;
      *(undefined4 *)(puVar3 + 0x14) = 0;
      return;
    }
  }
  return;
}



//==== 005e998c  ns=Global  size=0x68
// sig: undefined FUN_005e998c(void)
// callers(0): 
// callees(1): 005dcbd8 FUN_005dcbd8

void FUN_005e998c(int param_1,int param_2)

{
  double dVar1;
  
  if (0xffff < param_2) {
    param_2 = 0xffff;
  }
  dVar1 = (double)FUN_005dcbd8((double)((float)(longlong)param_2 * DAT_0071a3ec),
                               (double)DAT_0071a3f0);
  *(float *)(param_1 + 0x58) = (float)dVar1;
  return;
}



//==== 005e99f8  ns=Global  size=0x908
// sig: undefined FUN_005e99f8(void)
// callers(0): 
// callees(3): 005d0140 libc::memset; 005f5090 FUN_005f5090; 0064fe24 cell::cellAudioPortStart

undefined8 FUN_005e99f8(void)

{
  float fVar1;
  float fVar2;
  float fVar3;
  short sVar4;
  float fVar5;
  short *psVar6;
  float *pfVar7;
  ulonglong uVar8;
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined *puVar12;
  ulonglong uVar13;
  uint uVar15;
  ulonglong uVar14;
  undefined *puVar16;
  int iVar17;
  undefined4 uVar18;
  float fVar19;
  longlong lVar20;
  undefined8 uVar21;
  uint uVar23;
  ulonglong uVar22;
  ulonglong uVar24;
  ulonglong uVar25;
  int iVar26;
  int *piVar27;
  ulonglong uVar28;
  float *pfVar29;
  ulonglong uVar30;
  ulonglong uVar31;
  ulonglong uVar32;
  longlong lVar33;
  double dVar34;
  undefined1 auVar35 [16];
  undefined1 auVar36 [16];
  undefined1 auVar37 [16];
  undefined1 auVar38 [16];
  undefined1 auVar39 [16];
  undefined1 auVar40 [16];
  undefined *puStack_124;
  
  puVar12 = PTR_DAT_0071a3c4;
  puVar16 = &TOC_BASE;
  piVar27 = *(int **)(PTR_DAT_0071a3c4 + 0x10);
  if (piVar27 == (int *)0x0) {
LAB_005e9c8c:
    if (*(int *)(PTR_DAT_0071a3c4 + 0x14) != 0) {
      uVar23 = *(uint *)(PTR_DAT_0071a3c4 + 0xc);
      iVar17 = **(int **)(PTR_DAT_0071a3c4 + 8);
      uVar15 = uVar23 - iVar17;
      while ((uVar15 & 0xf) < 6) {
        *(uint *)(puVar12 + 0xc) = uVar23 & 0xf;
        iVar26 = 0x800;
        uVar21 = 0x800;
        if (*(int *)puVar12 != 2) {
          iVar26 = 0x2000;
          uVar21 = 0x2000;
        }
        libc::memset((uVar23 & 0xf) * iVar26 + *(int *)(puVar12 + 4),0,uVar21);
        uVar23 = *(int *)(puVar12 + 0xc) + 1;
        *(uint *)(puVar12 + 0xc) = uVar23;
        uVar15 = uVar23 - iVar17;
      }
    }
    return 0;
  }
  auVar40 = *(undefined1 (*) [16])((uint)PTR_DAT_0071a3f4 & 0xfffffff0);
  auVar39 = *(undefined1 (*) [16])((uint)PTR_DAT_0071a3f8 & 0xfffffff0);
  while (iVar17 = *piVar27 - piVar27[6], iVar17 < 0) {
    if (piVar27[0xb] < iVar17 + piVar27[2]) goto LAB_005e9ac8;
LAB_005e9a88:
    piVar27 = (int *)piVar27[0x26];
    if (piVar27 == (int *)0x0) goto LAB_005e9c8c;
  }
  if (iVar17 <= piVar27[0xb]) goto LAB_005e9a88;
LAB_005e9ac8:
  if (*(int *)(PTR_DAT_0071a3c4 + 0x14) == 0) {
    iVar17 = cell::cellAudioPortStart(*(undefined4 *)PTR_DAT_0071a3e8);
    puVar16 = puStack_124;
    if (iVar17 == 0) {
      uVar18 = FUN_005f5090();
      *(undefined4 *)(puVar12 + 0x18) = uVar18;
      *(undefined4 *)(puVar12 + 0x14) = 1;
      *(undefined4 *)(puVar12 + 0xc) = **(undefined4 **)(puVar12 + 8);
    }
  }
  else {
    iVar17 = FUN_005f5090();
    if (0x19 < (uint)(iVar17 - *(int *)(puVar12 + 0x18))) {
      iVar26 = *(int *)(puVar12 + 0x10);
      *(int *)(puVar12 + 0x18) = iVar17;
      *(undefined4 *)(puVar12 + 0xc) = **(undefined4 **)(puVar12 + 8);
      for (; iVar26 != 0; iVar26 = *(int *)(iVar26 + 0x98)) {
        if ((*(int *)(iVar26 + 0x8c) == 0) && (*(int *)(iVar26 + 0x34) != 0)) {
          *(undefined4 *)(iVar26 + 0x50) = 1;
        }
      }
    }
  }
  uVar18 = FUN_005f5090();
  uVar28 = (ulonglong)*(uint *)(puVar12 + 0xc);
  uVar31 = (ulonglong)**(uint **)(puVar12 + 8);
  if (5 < (uVar28 - uVar31 & 0xf)) goto LAB_005e9c2c;
  dVar34 = (double)*(float *)(puVar16 + -0x7f2c);
LAB_005e9b20:
  *(uint *)(puVar12 + 0xc) = (uint)uVar28 & 0xf;
  if (*(int *)(puVar12 + 0x10) != 0) {
    if (*(int *)puVar12 == 2) {
      uVar32 = (uVar28 & 0xf) * 0x800 + (ulonglong)*(uint *)(puVar12 + 4);
      uVar28 = uVar32 & 0xffffffff;
      iVar17 = 0;
      libc::memset(uVar28,0,0x800);
      piVar27 = *(int **)(puVar12 + 0x10);
      pfVar29 = (float *)(piVar27 + 0x16);
      if (piVar27 != (int *)0x0) {
        do {
          iVar26 = *piVar27 - piVar27[6];
          while( true ) {
            if (iVar26 < 0) {
              iVar26 = iVar26 + piVar27[2];
            }
            if (iVar26 < piVar27[0xb]) break;
            if (((pfVar29[0xd] == 0.0) && (piVar27[0xd] != 0)) && (piVar27[0xb] <= iVar26)) {
              fVar19 = pfVar29[1];
              fVar5 = *pfVar29 * pfVar29[2];
              fVar3 = *pfVar29 * pfVar29[3];
              uVar24 = (ulonglong)(uint)piVar27[6];
              uVar30 = (ulonglong)(uint)piVar27[4];
              uVar13 = (ulonglong)(uint)pfVar29[0xb];
              fVar2 = pfVar29[10];
              if (*(float *)(puVar16 + -0x7f28) <= fVar19) {
                if (*(float *)(puVar16 + -0x7f28) < fVar19) {
                  fVar5 = (*(float *)(puVar16 + -0x7f24) - fVar19) * (fVar5 + fVar5);
                }
              }
              else {
                fVar3 = fVar19 * (fVar3 + fVar3);
              }
              lVar20 = 0x100;
              lVar33 = 0x100;
              uVar14 = uVar32;
              if (piVar27[10] == 1) {
                do {
                  pfVar7 = (float *)uVar14;
                  uVar22 = uVar13 + (uint)fVar2;
                  uVar14 = uVar14 + 8;
                  uVar13 = uVar22 & 0xffff;
                  fVar19 = (float)uVar13;
                  if (uVar30 <= (uVar24 & 0xffffffff)) {
                    uVar24 = (ulonglong)(uint)piVar27[3] + (uVar24 - uVar30);
                  }
                  psVar6 = (short *)uVar24;
                  lVar20 = lVar20 + -1;
                  uVar24 = uVar24 + ((uVar22 << 0x20) >> 0x2f & 0x1fffe);
                  iVar26 = (int)uVar24;
                  fVar1 = (float)((double)(longlong)*psVar6 * dVar34);
                  *pfVar7 = fVar5 * fVar1 + *pfVar7;
                  pfVar7[1] = fVar3 * fVar1 + pfVar7[1];
                } while (lVar20 != 0);
              }
              else {
                do {
                  pfVar7 = (float *)uVar14;
                  uVar22 = uVar13 + (uint)fVar2;
                  uVar14 = uVar14 + 8;
                  uVar13 = uVar22 & 0xffff;
                  fVar19 = (float)uVar13;
                  if (uVar30 <= (uVar24 & 0xffffffff)) {
                    uVar24 = (ulonglong)(uint)piVar27[3] + (uVar24 - uVar30);
                  }
                  psVar6 = (short *)uVar24;
                  uVar24 = uVar24 + ((uVar22 << 0x20) >> 0x2e & 0x3fffc);
                  iVar26 = (int)uVar24;
                  sVar4 = psVar6[1];
                  *pfVar7 = fVar5 * (float)((double)(longlong)*psVar6 * dVar34) + *pfVar7;
                  pfVar7[1] = fVar3 * (float)((double)(longlong)sVar4 * dVar34) + pfVar7[1];
                  lVar33 = lVar33 + -1;
                } while (lVar33 != 0);
              }
              iVar17 = iVar17 + 1;
              pfVar29[0xb] = fVar19;
              piVar27[6] = iVar26;
            }
            piVar27 = (int *)pfVar29[0x10];
            if (piVar27 == (int *)0x0) goto LAB_005e9e00;
            pfVar29 = (float *)(piVar27 + 0x16);
            iVar26 = *piVar27 - piVar27[6];
          }
          pfVar7 = pfVar29 + 0xe;
          do {
            piVar27 = (int *)pfVar29[0x10];
            pfVar29 = (float *)(piVar27 + 0x16);
            if (piVar27 == (int *)0x0) goto LAB_005e9e00;
          } while (*pfVar7 == (float)piVar27[0x24]);
        } while( true );
      }
    }
    else {
      uVar32 = (uVar28 & 0xf) * 0x2000 + (ulonglong)*(uint *)(puVar12 + 4);
      uVar28 = uVar32 & 0xffffffff;
      iVar17 = 0;
      libc::memset(uVar28,0,0x2000);
      piVar27 = *(int **)(puVar12 + 0x10);
      pfVar29 = (float *)(piVar27 + 0x16);
      if (piVar27 != (int *)0x0) {
        do {
          iVar26 = *piVar27 - piVar27[6];
          while( true ) {
            if (iVar26 < 0) {
              iVar26 = iVar26 + piVar27[2];
            }
            if (iVar26 < piVar27[0xb]) break;
            if (((pfVar29[0xd] == 0.0) && (piVar27[0xd] != 0)) && (piVar27[0xb] < iVar26)) {
              fVar19 = *pfVar29;
              uVar24 = (ulonglong)(uint)piVar27[6];
              uVar30 = (ulonglong)(uint)piVar27[4];
              uVar13 = (ulonglong)(uint)pfVar29[0xb];
              fVar3 = pfVar29[10];
              auVar35 = *(undefined1 (*) [16])(pfVar29 + 2);
              auVar11 = *(undefined1 (*) [16])(pfVar29 + 2);
              auVar9 = *(undefined1 (*) [16])(pfVar29 + 6);
              auVar10 = *(undefined1 (*) [16])(pfVar29 + 6);
              fVar2 = pfVar29[1];
              if (*(float *)(puVar16 + -0x7f28) <= fVar2) {
                fVar5 = fVar19;
                if (fVar2 <= *(float *)(puVar16 + -0x7f28)) goto LAB_005ea038;
                uVar23 = piVar27[10];
                fVar2 = (*(float *)(puVar16 + -0x7f24) - fVar2) * (fVar19 + fVar19);
              }
              else {
                fVar5 = fVar2 * (fVar19 + fVar19);
LAB_005ea038:
                uVar23 = piVar27[10];
                fVar2 = fVar19;
              }
              uVar14 = (ulonglong)uVar23;
              if (uVar23 == 1) {
                auVar10._0_4_ = fVar2;
                auVar10._4_4_ = fVar5;
                auVar10._8_4_ = fVar19;
                auVar10._12_4_ = fVar19;
                auVar11._0_4_ = fVar2;
                auVar11._4_4_ = fVar5;
                auVar11._8_4_ = fVar2;
                auVar11._12_4_ = fVar5;
                uVar22 = uVar32;
                do {
                  uVar25 = (uint)fVar3 + uVar13;
                  uVar23 = (uint)uVar22;
                  uVar22 = uVar22 + 0x20;
                  if (uVar30 <= (uVar24 & 0xffffffff)) {
                    uVar14 = (ulonglong)(uint)piVar27[3];
                    uVar24 = uVar14 + (uVar24 - uVar30);
                  }
                  uVar8 = uVar24 & 0xffffffff;
                  uVar13 = uVar25 & 0xffff;
                  uVar24 = uVar24 + ((uVar25 << 0x20) >> 0x2f & 0x1fffe);
                  auVar36 = loadVectorLeftIndexed(uVar14,uVar8);
                  auVar36 = vectorSplatHalfWord(auVar36,0);
                  auVar36 = vectorUnpackHighSignedHalfWord(auVar36);
                  auVar36 = vectorConvertFromSignedFixedPointWord(auVar36,0xf);
                  auVar37 = vectorMultiplyAddFloatingPoint(auVar11,auVar36,(undefined1  [16])0x0);
                  auVar36 = vectorMultiplyAddFloatingPoint(auVar10,auVar36,(undefined1  [16])0x0);
                  auVar37 = vectorMultiplyAddFloatingPoint
                                      (auVar37,auVar9,
                                       *(undefined1 (*) [16])(uVar23 + 0x10 & 0xfffffff0));
                  auVar36 = vectorMultiplyAddFloatingPoint
                                      (auVar36,auVar35,*(undefined1 (*) [16])(uVar23 & 0xfffffff0));
                  *(undefined1 (*) [16])(uVar23 + 0x10 & 0xfffffff0) = auVar37;
                  *(undefined1 (*) [16])(uVar23 & 0xfffffff0) = auVar36;
                } while ((int)uVar32 + 0x1fe0U != uVar23);
                iVar17 = iVar17 + 1;
                pfVar29[0xb] = (float)uVar13;
                piVar27[6] = (int)uVar24;
              }
              else {
                auVar9._0_4_ = fVar2;
                auVar9._4_4_ = fVar5;
                auVar9._8_4_ = fVar2;
                auVar9._12_4_ = fVar5;
                uVar22 = uVar32;
                do {
                  uVar25 = (uint)fVar3 + uVar13;
                  uVar23 = (uint)uVar22;
                  uVar22 = uVar22 + 0x20;
                  if (uVar30 <= (uVar24 & 0xffffffff)) {
                    uVar14 = (ulonglong)(uint)piVar27[3];
                    uVar24 = uVar14 + (uVar24 - uVar30);
                  }
                  uVar8 = uVar24 & 0xffffffff;
                  auVar37 = *(undefined1 (*) [16])(uVar23 & 0xfffffff0);
                  uVar13 = uVar25 & 0xffff;
                  uVar24 = uVar24 + ((uVar25 << 0x20) >> 0x2e & 0x3fffc);
                  auVar35 = loadVectorLeftIndexed(uVar14,uVar8);
                  auVar35 = auVar35 >> 0x60 & (undefined1  [16])0xffffffff;
                  auVar35 = vectorUnpackHighSignedHalfWord
                                      (auVar35 | auVar35 << 0x20 | auVar35 << 0x40 | auVar35 << 0x60
                                      );
                  auVar35 = vectorConvertFromSignedFixedPointWord(auVar35,0xf);
                  auVar35 = vectorMultiplyAddFloatingPoint(auVar9,auVar35,(undefined1  [16])0x0);
                  auVar36 = vectorMultiplyAddFloatingPoint(auVar35,auVar40,(undefined1  [16])0x0);
                  auVar35 = vectorMultiplyAddFloatingPoint
                                      (auVar35,auVar10,
                                       *(undefined1 (*) [16])(uVar23 + 0x10 & 0xfffffff0));
                  auVar38 = vectorMultiplyAddFloatingPoint(auVar36,auVar11,(undefined1  [16])0x0);
                  auVar36 = vectorPermute(auVar36,auVar36,auVar39);
                  *(undefined1 (*) [16])(uVar23 + 0x10 & 0xfffffff0) = auVar35;
                  auVar35 = vectorMultiplyAddFloatingPoint(auVar36,auVar11,auVar38);
                  auVar35 = vectorAddFloatingPoint(auVar35,auVar37);
                  *(undefined1 (*) [16])(uVar23 & 0xfffffff0) = auVar35;
                } while ((int)uVar32 + 0x1fe0U != uVar23);
                iVar17 = iVar17 + 1;
                pfVar29[0xb] = (float)uVar13;
                piVar27[6] = (int)uVar24;
              }
            }
            piVar27 = (int *)pfVar29[0x10];
            if (piVar27 == (int *)0x0) goto LAB_005e9bc8;
            pfVar29 = (float *)(piVar27 + 0x16);
            iVar26 = *piVar27 - piVar27[6];
          }
          pfVar7 = pfVar29 + 0xe;
          do {
            piVar27 = (int *)pfVar29[0x10];
            pfVar29 = (float *)(piVar27 + 0x16);
            if (piVar27 == (int *)0x0) goto LAB_005e9bc8;
          } while (*pfVar7 == (float)piVar27[0x24]);
        } while( true );
      }
    }
  }
  goto LAB_005e9c10;
LAB_005e9e00:
  if (iVar17 != 0) {
    uVar13 = uVar32 + 0x800;
    fVar19 = *(float *)(puVar16 + -0x7f24);
    fVar2 = *(float *)(puVar16 + -0x7f20);
    if ((uVar32 & 0xffffffff) < (uVar13 & 0xffffffff)) {
      do {
        fVar3 = *(float *)uVar28;
        fVar5 = fVar3;
        if (fVar3 + fVar19 < 0.0) {
          fVar5 = fVar2;
        }
        fVar1 = fVar19;
        if (fVar3 - fVar19 < 0.0) {
          fVar1 = fVar5;
        }
        uVar32 = uVar32 + 4;
        *(float *)uVar28 = fVar1;
        uVar28 = uVar32 & 0xffffffff;
      } while ((uVar32 & 0xffffffff) < (uVar13 & 0xffffffff));
      uVar28 = (ulonglong)*(uint *)(puVar12 + 0xc) + 1;
      uVar32 = uVar28 - uVar31;
      *(int *)(puVar12 + 0xc) = (int)uVar28;
      goto joined_r0x005e9e60;
    }
  }
  goto LAB_005e9c10;
LAB_005e9bc8:
  if (iVar17 != 0) {
    uVar13 = uVar32 + 0x2000;
    fVar19 = *(float *)(puVar16 + -0x7f24);
    fVar2 = *(float *)(puVar16 + -0x7f20);
    if ((uVar32 & 0xffffffff) < (uVar13 & 0xffffffff)) {
      do {
        fVar3 = *(float *)uVar28;
        fVar5 = fVar3;
        if (fVar3 + fVar19 < 0.0) {
          fVar5 = fVar2;
        }
        fVar1 = fVar19;
        if (fVar3 - fVar19 < 0.0) {
          fVar1 = fVar5;
        }
        uVar32 = uVar32 + 4;
        *(float *)uVar28 = fVar1;
        uVar28 = uVar32 & 0xffffffff;
      } while ((uVar32 & 0xffffffff) < (uVar13 & 0xffffffff));
    }
  }
LAB_005e9c10:
  uVar28 = (ulonglong)*(uint *)(puVar12 + 0xc) + 1;
  uVar32 = uVar28 - uVar31;
  *(int *)(puVar12 + 0xc) = (int)uVar28;
joined_r0x005e9e60:
  if (5 < (uVar32 & 0xf)) {
LAB_005e9c2c:
    *(undefined4 *)(puVar12 + 0x18) = uVar18;
    return 0;
  }
  goto LAB_005e9b20;
}



//==== 005ea300  ns=Global  size=0x44
// sig: undefined FUN_005ea300(void)
// callers(2): 005fd890 FUN_005fd890; 005fd958 FUN_005fd958
// callees(0): 

void FUN_005ea300(char *param_1)

{
  char *pcVar1;
  longlong lVar2;
  
  pcVar1 = PTR_DAT_0071a40c;
  lVar2 = 0xfe;
  *PTR_DAT_0071a40c = *param_1;
  do {
    pcVar1 = pcVar1 + 1;
    if (*param_1 == '\0') {
      return;
    }
    param_1 = param_1 + 1;
    *pcVar1 = *param_1;
    lVar2 = lVar2 + -1;
  } while (lVar2 != 0);
  *pcVar1 = '\0';
  return;
}



//==== 005ea348  ns=Global  size=0x8
// sig: undefined FUN_005ea348(void)
// callers(1): 004d4dd0 FUN_004d4dd0
// callees(0): 

undefined * FUN_005ea348(void)

{
  return PTR_DAT_0071a40c;
}



//==== 005ea350  ns=Global  size=0x14
// sig: undefined FUN_005ea350(void)
// callers(0): 
// callees(0): 

void FUN_005ea350(undefined4 param_1,undefined4 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR_DAT_0071a410;
  *(undefined4 *)(PTR_DAT_0071a40c + 0x100) = param_2;
  *(undefined4 *)puVar1 = param_1;
  return;
}



//==== 005ea364  ns=Global  size=0xc
// sig: undefined FUN_005ea364(void)
// callers(0): 
// callees(0): 

void FUN_005ea364(undefined8 param_1)

{
  *(undefined8 *)(PTR_DAT_0071a40c + 0x108) = param_1;
  return;
}



//==== 005ea370  ns=Global  size=0xc
// sig: undefined FUN_005ea370(void)
// callers(0): 
// callees(0): 

void FUN_005ea370(undefined4 param_1)

{
  *(undefined4 *)(PTR_DAT_0071a410 + 4) = param_1;
  return;
}



//==== 005ea37c  ns=Global  size=0xc
// sig: undefined FUN_005ea37c(void)
// callers(0): 
// callees(0): 

void FUN_005ea37c(undefined4 param_1)

{
  *(undefined4 *)(PTR_DAT_0071a40c + 0x110) = param_1;
  return;
}



//==== 005ea388  ns=Global  size=0xc
// sig: undefined FUN_005ea388(void)
// callers(0): 
// callees(0): 

void FUN_005ea388(undefined4 param_1)

{
  *(undefined4 *)(PTR_DAT_0071a410 + 8) = param_1;
  return;
}



//==== 005ea398  ns=Global  size=0x50
// sig: undefined FUN_005ea398(void)
// callers(2): 004d5310 FUN_004d5310; 004d5448 FUN_004d5448
// callees(0): 

void FUN_005ea398(uint param_1,undefined4 *param_2)

{
  undefined4 *puVar1;
  ulonglong uVar2;
  
  if (0x20 < param_1) {
    param_1 = 0x20;
  }
  *(uint *)(PTR_DAT_0071a410 + 0xc) = param_1;
  if (param_1 == 0) {
    return;
  }
  uVar2 = (ulonglong)param_1;
  puVar1 = (undefined4 *)(PTR_DAT_0071a40c + 0x114);
  do {
    *puVar1 = *param_2;
    uVar2 = uVar2 - 1;
    param_2 = param_2 + 1;
    puVar1 = puVar1 + 1;
  } while (uVar2 != 0);
  return;
}



//==== 005ea3e8  ns=Global  size=0xf4
// sig: undefined FUN_005ea3e8(void)
// callers(1): 004d4dd0 FUN_004d4dd0
// callees(0): 

void FUN_005ea3e8(int param_1,undefined4 *param_2)

{
  int iVar1;
  uint uVar2;
  
  if (param_1 == 0) {
    return;
  }
  if (param_2 == (undefined4 *)0x0) {
    return;
  }
  param_2[5] = 0;
  param_2[1] = *(int *)(param_1 + 0x168) + 7U & 0xfffffff8;
  param_2[2] = *(int *)(param_1 + 0x16c) + 7U & 0xfffffff8;
  param_2[3] = (*(int *)(param_1 + 0x168) + 1U >> 1) + 7 & 0xfffffff8;
  iVar1 = *(int *)(param_1 + 0x16c);
  param_2[6] = 1;
  param_2[9] = 1;
  param_2[0xc] = 1;
  param_2[4] = (iVar1 + 1U >> 1) + 7 & 0xfffffff8;
  uVar2 = *(uint *)(param_1 + 0x20);
  param_2[7] = 0;
  uVar2 = uVar2 >> 0x14 & 1;
  param_2[10] = 0;
  param_2[0xf] = uVar2;
  param_2[0xd] = 0;
  param_2[0x10] = 0;
  param_2[8] = 0;
  param_2[0xb] = 0;
  param_2[0xe] = 0;
  param_2[0x11] = 0;
  if (*(int *)(param_1 + 8) != 1) {
    param_2[0x18] = 1;
    *param_2 = 2;
    param_2[0x12] = 1;
    param_2[0x13] = 0;
    param_2[0x14] = 0;
    param_2[0x15] = 1;
    param_2[0x16] = 0;
    param_2[0x17] = 0;
    param_2[0x19] = 0;
    param_2[0x1a] = 0;
    param_2[0x1b] = uVar2;
    param_2[0x1d] = 0;
    param_2[0x1c] = 0;
    return;
  }
  *param_2 = 1;
  return;
}



//==== 005ea4dc  ns=Global  size=0x18
// sig: undefined FUN_005ea4dc(void)
// callers(1): 004d4dd0 FUN_004d4dd0
// callees(0): 

void FUN_005ea4dc(int param_1,int param_2)

{
  if (param_1 == 0) {
    return;
  }
  if (param_2 == 0) {
    return;
  }
  *(int *)(param_1 + 0xd0) = param_2;
  return;
}



//==== 005ea4f8  ns=Global  size=0x20c
// sig: undefined FUN_005ea4f8(void)
// callers(0): 
// callees(0): 

ulonglong FUN_005ea4f8(int param_1,ulonglong param_2,uint param_3)

{
  uint uVar1;
  uint *puVar2;
  int iVar3;
  longlong lVar4;
  ulonglong uVar5;
  longlong lVar6;
  ulonglong uVar7;
  
  if (param_1 != 0) {
    if (((param_3 & 0x80) == 0) &&
       ((*(uint *)((int)((param_2 & 0xffffffff) << 2) + *(int *)(param_1 + 0x158) + -4) & 1) != 0))
    goto LAB_005ea640;
    if ((param_3 & 0x7f) == 1) {
      uVar1 = *(uint *)(param_1 + 8);
      lVar4 = (param_2 & 0x3fffffff) << 2;
      uVar5 = (uVar1 - param_2) + 1 & 0xffffffff;
      if (((ulonglong)uVar1 < (param_2 & 0xffffffff)) || (uVar1 == 0)) {
        uVar5 = 1;
      }
      do {
        param_2 = param_2 + 1;
        uVar5 = uVar5 - 1;
        if (uVar5 == 0) goto LAB_005ea63c;
        iVar3 = (int)lVar4;
        lVar4 = lVar4 + 4;
      } while ((*(uint *)(iVar3 + *(int *)(param_1 + 0x158)) & 1) == 0);
LAB_005ea634:
      return param_2 & 0xffffffff;
    }
    if ((param_3 & 0x7f) == 2) {
      lVar4 = param_2 - 2;
      lVar6 = (param_2 & 0x3fffffff) * 4 + -8;
      do {
        iVar3 = (int)((param_2 & 0xffffffff) << 2);
        if ((int)lVar4 < 0) {
          if ((ulonglong)*(uint *)(param_1 + 8) <= (param_2 & 0xffffffff)) goto LAB_005ea63c;
          uVar1 = *(uint *)(iVar3 + *(int *)(param_1 + 0x158));
joined_r0x005ea698:
          param_2 = param_2 + 1;
          if ((uVar1 & 1) != 0) goto LAB_005ea634;
        }
        else {
          if ((*(uint *)(*(int *)(param_1 + 0x158) + (int)lVar6) & 1) != 0) {
            param_2 = lVar4 + 1;
            goto LAB_005ea640;
          }
          if ((param_2 & 0xffffffff) < (ulonglong)*(uint *)(param_1 + 8)) {
            uVar1 = *(uint *)(iVar3 + *(int *)(param_1 + 0x158));
            goto joined_r0x005ea698;
          }
        }
        lVar4 = lVar4 + -1;
        lVar6 = lVar6 + -4;
      } while( true );
    }
    if ((param_3 & 0x7f) == 0) {
      uVar5 = param_2 - 2;
      if ((0 < (int)uVar5) &&
         ((*(uint *)((int)((uVar5 & 0xffffffff) << 2) + *(uint *)(param_1 + 0x158)) & 1) == 0)) {
        uVar7 = uVar5 & 0xffffffff;
        lVar4 = (ulonglong)*(uint *)(param_1 + 0x158) + (param_2 & 0x3fffffff) * 4 + -0xc;
        if ((int)param_2 + -3 < 0) {
          uVar7 = 1;
        }
        do {
          puVar2 = (uint *)lVar4;
          uVar5 = uVar5 - 1;
          lVar4 = lVar4 + -4;
          uVar7 = uVar7 - 1;
          if (uVar7 == 0) break;
        } while ((*puVar2 & 1) == 0);
      }
      return uVar5 + 1 & 0xffffffff;
    }
  }
LAB_005ea63c:
  param_2 = 0;
LAB_005ea640:
  return param_2 & 0xffffffff;
}



//==== 005ea708  ns=Global  size=0x2a8
// sig: undefined FUN_005ea708(void)
// callers(2): 005ea9b0 FUN_005ea9b0; 005f1198 FUN_005f1198
// callees(0): 
// strings: 005ea96c: '}$8P9`' (raw)

undefined4 FUN_005ea708(int *param_1,longlong param_2,uint param_3,uint *param_4)

{
  bool bVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  char *pcVar6;
  ulonglong uVar7;
  longlong lVar8;
  int iVar9;
  ulonglong uVar10;
  int iVar11;
  longlong lVar12;
  int iVar13;
  longlong lVar14;
  longlong lVar15;
  longlong lVar16;
  ulonglong uVar17;
  ulonglong uVar18;
  
  uVar2 = param_4[3];
  uVar3 = param_4[2];
  lVar12 = (longlong)((int)uVar2 >> 4) + (ulonglong)((int)uVar2 < 0 && (uVar2 & 0xf) != 0);
  uVar4 = *param_4;
  uVar5 = param_4[1];
  uVar7 = (longlong)((int)uVar3 >> 4) + (ulonglong)((int)uVar3 < 0 && (uVar3 & 0xf) != 0);
  iVar11 = (int)lVar12;
  if (iVar11 < 1) {
    return 0;
  }
  uVar10 = 0;
  lVar8 = (longlong)((int)uVar4 >> 4) + (ulonglong)((int)uVar4 < 0 && (uVar4 & 0xf) != 0) + param_2
          + (longlong)(int)(((int)uVar5 >> 4) + (uint)((int)uVar5 < 0 && (uVar5 & 0xf) != 0)) *
            (longlong)(int)param_3;
  lVar15 = lVar8;
  do {
    if (0 < (int)uVar7) {
      if (*(char *)lVar15 != '\0') {
LAB_005ea7c4:
        uVar17 = lVar12 - uVar10;
        iVar11 = (int)((uVar10 & 0xfffffff) << 4);
        iVar13 = uVar2 - iVar11;
        param_1[1] = uVar5 + iVar11;
        param_1[3] = iVar13;
        lVar8 = lVar8 + (longlong)(int)param_3 * (longlong)(int)uVar10;
        if (iVar13 < 2) goto LAB_005ea87c;
        iVar9 = (int)uVar17;
        uVar10 = 0;
        iVar11 = 0;
        if (iVar9 < 1) goto LAB_005ea870;
        lVar15 = 0;
        lVar16 = lVar8 + (longlong)(int)param_3 * (longlong)(iVar9 + -1);
        lVar12 = lVar16;
        break;
      }
      uVar17 = uVar7 & 0xffffffff;
      iVar13 = 0;
      while( true ) {
        iVar13 = iVar13 + 1;
        uVar17 = uVar17 - 1;
        if (uVar17 == 0) break;
        if (((char *)lVar15)[iVar13] != '\0') goto LAB_005ea7c4;
      }
    }
    uVar10 = uVar10 + 1;
    if (iVar11 == (int)uVar10) {
      return 0;
    }
    lVar15 = lVar15 + (ulonglong)param_3;
  } while( true );
LAB_005ea814:
  if (*(char *)((int)lVar15 + (int)lVar16) != '\0') goto LAB_005ea86c;
  uVar18 = uVar7 & 0xffffffff;
  iVar11 = 0;
  while( true ) {
    iVar11 = iVar11 + 1;
    uVar18 = uVar18 - 1;
    if (uVar18 == 0) break;
    if (*(char *)(iVar11 + (int)lVar12) != '\0') goto LAB_005ea86c;
  }
  uVar10 = uVar10 + 1;
  lVar15 = lVar15 + -(ulonglong)param_3;
  if (iVar9 == (int)uVar10) {
    iVar11 = (int)((uVar17 & 0xffffffff) << 4);
    goto LAB_005ea870;
  }
  lVar12 = lVar12 + -(ulonglong)param_3;
  goto LAB_005ea814;
LAB_005ea86c:
  iVar11 = (int)((uVar10 & 0xffffffff) << 4);
LAB_005ea870:
  uVar17 = uVar17 - uVar10;
  param_1[3] = iVar13 - iVar11;
LAB_005ea87c:
  lVar12 = lVar8 + (ulonglong)param_3;
  uVar10 = 0;
  bVar1 = 0 < (int)uVar17;
  do {
    if (bVar1) {
      lVar15 = lVar8 + uVar10;
      if (*(char *)lVar15 != '\0') goto LAB_005ea8dc;
      uVar18 = uVar17 & 0xffffffff;
      lVar16 = lVar12;
      while( true ) {
        pcVar6 = (char *)lVar16;
        lVar16 = lVar16 + (ulonglong)param_3;
        uVar18 = uVar18 - 1;
        if (uVar18 == 0) break;
        if (*pcVar6 != '\0') goto LAB_005ea8dc;
      }
    }
    uVar10 = uVar10 + 1;
    lVar12 = lVar12 + 1;
  } while ((int)uVar7 != (int)uVar10);
  lVar15 = uVar7 + lVar8;
LAB_005ea8dc:
  iVar11 = (int)((uVar10 & 0xfffffff) << 4);
  iVar13 = uVar3 - iVar11;
  *param_1 = iVar11 + uVar4;
  param_1[2] = iVar13;
  if (1 < iVar13) {
    lVar12 = uVar7 - uVar10;
    lVar8 = lVar12 + -1;
    if (-1 < (int)lVar8) {
      lVar15 = lVar15 + lVar12;
      lVar16 = lVar15 + (ulonglong)param_3;
      do {
        lVar16 = lVar16 + -1;
        lVar15 = lVar15 + -1;
        if (bVar1) {
          if (*(char *)lVar15 != '\0') break;
          uVar7 = uVar17 & 0xffffffff;
          lVar14 = lVar16;
          while( true ) {
            pcVar6 = (char *)lVar14;
            lVar14 = lVar14 + (ulonglong)param_3;
            uVar7 = uVar7 - 1;
            if (uVar7 == 0) break;
            if (*pcVar6 != '\0') goto LAB_005ea96c;
          }
        }
        iVar11 = (int)lVar8;
        lVar8 = lVar8 + -1;
      } while (iVar11 != 0);
    }
LAB_005ea96c:
    param_1[2] = iVar13 + (int)((lVar8 - lVar12 & 0xffffffffU) << 4) + 0x10;
  }
  return 1;
}



//==== 005ea9b0  ns=Global  size=0x28c
// sig: undefined FUN_005ea9b0(void)
// callers(1): 005f1198 FUN_005f1198
// callees(1): 005ea708 FUN_005ea708

int FUN_005ea9b0(undefined4 *param_1,undefined4 *param_2,int param_3,undefined4 param_4,
                undefined4 param_5)

{
  int iVar1;
  int iVar2;
  undefined4 local_80;
  undefined4 local_7c;
  int local_78;
  int local_74;
  undefined4 local_70;
  undefined4 local_6c;
  int local_68;
  int local_64;
  undefined1 local_60 [16];
  
  if (*(int *)(param_3 + 8) < 0x20) {
    iVar2 = 0;
    iVar1 = *(int *)(param_3 + 0xc);
  }
  else {
    FUN_005ea708(param_1,param_4,param_5,local_60);
    FUN_005ea708(param_2,param_4,param_5,local_60);
    iVar1 = *(int *)(param_3 + 0xc);
    iVar2 = (*(int *)(param_3 + 8) * iVar1 - param_1[2] * param_1[3]) - param_2[2] * param_2[3];
  }
  if (0x1f < iVar1) {
    FUN_005ea708(&local_80,param_4,param_5,local_60);
    FUN_005ea708(&local_70,param_4,param_5,local_60);
    iVar1 = (*(int *)(param_3 + 8) * *(int *)(param_3 + 0xc) - local_78 * local_74) -
            local_68 * local_64;
    if (iVar2 < iVar1) {
      param_1[3] = local_74;
      *param_1 = local_80;
      param_1[1] = local_7c;
      param_1[2] = local_78;
      param_2[3] = local_64;
      *param_2 = local_70;
      param_2[1] = local_6c;
      param_2[2] = local_68;
      return iVar1;
    }
  }
  return iVar2;
}



//==== 005eac3c  ns=Global  size=0xfc
// sig: undefined FUN_005eac3c(void)
// callers(0): 
// callees(0): 

void FUN_005eac3c(int param_1,int param_2,undefined4 param_3)

{
  undefined4 *puVar1;
  int iVar2;
  int *piVar3;
  uint uVar4;
  ulonglong uVar5;
  
  if (param_1 != 0) {
    uVar4 = *(uint *)(param_1 + 0x124);
    if ((uVar4 != 0) && (0 < (int)uVar4)) {
      piVar3 = *(int **)(param_1 + 0xec);
      uVar5 = (ulonglong)uVar4;
      iVar2 = 0;
      uVar4 = 0;
      if (*(int *)(*piVar3 * 4 + *(int *)(param_1 + 0x178)) != param_2) {
        do {
          piVar3 = piVar3 + 1;
          uVar4 = uVar4 + 1;
          uVar5 = uVar5 - 1;
          if (uVar5 == 0) {
            return;
          }
        } while (*(int *)(*piVar3 * 4 + *(int *)(param_1 + 0x178)) != param_2);
        if (uVar4 == 0xffffffff) {
          return;
        }
        iVar2 = uVar4 * 0x200 + (uVar4 & 0x1ffffff) * -0x80;
      }
      iVar2 = iVar2 + *(int *)(param_1 + 0x154);
      puVar1 = *(undefined4 **)(iVar2 + 0x16c);
      if (puVar1 != (undefined4 *)0x0) {
        (*(code *)*puVar1)(iVar2,param_3);
        return;
      }
    }
  }
  return;
}



//==== 005ead38  ns=Global  size=0x28
// sig: undefined FUN_005ead38(void)
// callers(0): 
// callees(0): 

undefined4 FUN_005ead38(int param_1,int param_2)

{
  undefined4 uVar1;
  
  uVar1 = 0;
  if (param_1 != 0) {
    uVar1 = *(undefined4 *)(param_2 * 4 + *(int *)(param_1 + 0x174));
  }
  return uVar1;
}



//==== 005ead60  ns=Global  size=0x2c
// sig: undefined FUN_005ead60(void)
// callers(0): 
// callees(0): 

int FUN_005ead60(int param_1,int param_2)

{
  int iVar1;
  
  iVar1 = 0;
  if (param_1 != 0) {
    iVar1 = *(int *)(param_2 * 4 + *(int *)(param_1 + 0x170)) + 0x200;
  }
  return iVar1;
}



//==== 005ead8c  ns=Global  size=0x28
// sig: undefined FUN_005ead8c(void)
// callers(0): 
// callees(0): 

undefined4 FUN_005ead8c(int param_1,int param_2)

{
  undefined4 uVar1;
  
  uVar1 = 0;
  if (param_1 != 0) {
    uVar1 = *(undefined4 *)(param_2 * 4 + *(int *)(param_1 + 0x178));
  }
  return uVar1;
}



//==== 005eadb4  ns=Global  size=0x1c
// sig: undefined FUN_005eadb4(void)
// callers(0): 
// callees(0): 

undefined4 FUN_005eadb4(int param_1,undefined4 param_2)

{
  if (param_1 != 0) {
    *(undefined4 *)(param_1 + 0x114) = param_2;
  }
  return param_2;
}



//==== 005eadd0  ns=Global  size=0x34
// sig: undefined FUN_005eadd0(void)
// callers(0): 
// callees(0): 

void FUN_005eadd0(int param_1,int param_2)

{
  if (param_1 == 0) {
    return;
  }
  if (param_2 == 0) {
    *(uint *)(param_1 + 0x20) = *(uint *)(param_1 + 0x20) & 0xffffff7f;
    return;
  }
  *(uint *)(param_1 + 0x20) = *(uint *)(param_1 + 0x20) | 0x80;
  return;
}



//==== 005eae04  ns=Global  size=0x24
// sig: undefined FUN_005eae04(void)
// callers(1): 0001401c boot::boot
// callees(1): 005f515c FUN_005f515c

void FUN_005eae04(void)

{
  FUN_005f515c();
  return;
}



//==== 005eae28  ns=Global  size=0x290
// sig: undefined FUN_005eae28(void)
// callers(6): 005eb0b8 FUN_005eb0b8; 005eb374 FUN_005eb374; 005eb650 FUN_005eb650; 005ebac0 FUN_005ebac0; 005ec778 FUN_005ec778; 005eec10 FUN_005eec10
// callees(1): 005fc20c FUN_005fc20c
// strings: 00661be0: 'Locked %s' | 00661bf0: 'Trying to lock %s'

undefined4
FUN_005eae28(undefined8 param_1,int param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5
            )

{
  undefined *puVar1;
  int iVar2;
  
  iVar2 = FUN_005fc20c(param_1,0);
  puVar1 = PTR_DAT_0071a414;
  if (iVar2 != 0) {
    iVar2 = *(int *)PTR_DAT_0071a414;
    if (iVar2 == 0) {
      return 1;
    }
    (*(code *)**(undefined4 **)(iVar2 + 0x6c))
              (iVar2,param_1,2,param_4,param_5,ZEXT48(PTR_DAT_0071a40c) + 0x194,
               PTR_s_Locked__s_0071a418,param_3);
    return 1;
  }
  if (param_2 != 0) {
    iVar2 = *(int *)PTR_DAT_0071a414;
    if (iVar2 != 0) {
      (*(code *)**(undefined4 **)(iVar2 + 0x60))
                (iVar2,0,0,param_4,param_5,param_1,ZEXT48(PTR_DAT_0071a40c) + 0x198,
                 PTR_s_Trying_to_lock__s_0071a41c);
    }
    iVar2 = FUN_005fc20c(param_1,param_2);
    if (iVar2 != 0) {
      iVar2 = *(int *)puVar1;
      if (iVar2 == 0) {
        return 1;
      }
      (*(code *)**(undefined4 **)(iVar2 + 100))(iVar2,0,param_4,param_5,param_1,0);
      return 1;
    }
    iVar2 = *(int *)puVar1;
    if (iVar2 != 0) {
      (*(code *)**(undefined4 **)(iVar2 + 100))(iVar2,0,param_4,param_5,param_1,1);
      return 0;
    }
  }
  return 0;
}



//==== 005eb0b8  ns=Global  size=0x3c
// sig: undefined FUN_005eb0b8(void)
// callers(0): 
// callees(1): 005eae28 FUN_005eae28
// strings: 00661c20: 'C:\\devel\\projects\\bink\\src\\sdk\\decode\\binkread.c' | 00661c08: 'Bink instance io mutex'

undefined8 FUN_005eb0b8(int param_1)

{
  undefined8 uVar1;
  
  if ((*(uint *)(param_1 + -0x170) & 0x8000000) != 0) {
    return 1;
  }
  uVar1 = FUN_005eae28(param_1 + 0x1a0,0,PTR_s_Bink_instance_io_mutex_0071a420,
                       PTR_s_C__devel_projects_bink_src_sdk_d_0071a424,0x586);
  return uVar1;
}



//==== 005eb0f8  ns=Global  size=0x1b4
// sig: undefined FUN_005eb0f8(void)
// callers(14): 005eb2b0 FUN_005eb2b0; 005eb450 FUN_005eb450; 005eb650 FUN_005eb650; 005ec0e0 FUN_005ec0e0; 005ec1d4 FUN_005ec1d4; 005ec620 FUN_005ec620; 005ec778 FUN_005ec778; 005ee3a8 FUN_005ee3a8; 005ee638 FUN_005ee638; 005eec10 FUN_005eec10; 005ef8f0 FUN_005ef8f0; 005efad8 FUN_005efad8; 005f0aa0 FUN_005f0aa0; 005f1788 FUN_005f1788
// callees(2): 005fc1d8 FUN_005fc1d8; 005fc20c FUN_005fc20c
// strings: 00661c58: 'Waiting on %s'

/* WARNING: Heritage AFTER dead removal. Example location: r0x0071a40c : 0x005eb264 */
/* WARNING: Restarted to delay deadcode elimination for space: ram */

void FUN_005eb0f8(undefined8 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined *puVar1;
  int iVar2;
  
  iVar2 = FUN_005fc20c(param_1,0);
  puVar1 = PTR_DAT_0071a414;
  if (iVar2 == 0) {
    iVar2 = *(int *)PTR_DAT_0071a414;
    if (iVar2 != 0) {
      (*(code *)**(undefined4 **)(iVar2 + 0x60))
                (iVar2,0,0,param_3,param_4,param_1,ZEXT48(PTR_DAT_0071a40c) + 0x19c,
                 PTR_s_Waiting_on__s_0071a428);
    }
    FUN_005fc1d8(param_1);
    iVar2 = *(int *)puVar1;
    if (iVar2 == 0) {
      return;
    }
    (*(code *)**(undefined4 **)(iVar2 + 100))(iVar2,0,param_3,param_4,param_1,0);
    iVar2 = *(int *)puVar1;
  }
  else {
    iVar2 = *(int *)PTR_DAT_0071a414;
  }
  if (iVar2 == 0) {
    return;
  }
  (*(code *)**(undefined4 **)(iVar2 + 0x6c))
            (iVar2,param_1,2,param_3,param_4,ZEXT48(PTR_DAT_0071a40c) + 0x1a0,
             PTR_s_Waiting_on__s_0071a428,param_2);
  return;
}



//==== 005eb2b0  ns=Global  size=0x30
// sig: undefined FUN_005eb2b0(void)
// callers(0): 
// callees(1): 005eb0f8 FUN_005eb0f8
// strings: 00661c20: 'C:\\devel\\projects\\bink\\src\\sdk\\decode\\binkread.c' | 00661c08: 'Bink instance io mutex'

void FUN_005eb2b0(int param_1)

{
  if ((*(uint *)(param_1 + -0x170) & 0x8000000) != 0) {
    return;
  }
  FUN_005eb0f8(param_1 + 0x1a0,PTR_s_Bink_instance_io_mutex_0071a420,
               PTR_s_C__devel_projects_bink_src_sdk_d_0071a424,0x57d);
  return;
}



//==== 005eb2e0  ns=Global  size=0x94
// sig: undefined FUN_005eb2e0(void)
// callers(16): 005eb374 FUN_005eb374; 005eb41c FUN_005eb41c; 005eb450 FUN_005eb450; 005eb650 FUN_005eb650; 005ebac0 FUN_005ebac0; 005ec0e0 FUN_005ec0e0; 005ec1d4 FUN_005ec1d4; 005ec620 FUN_005ec620; 005ec778 FUN_005ec778; 005ee3a8 FUN_005ee3a8; 005ee638 FUN_005ee638; 005eec10 FUN_005eec10; 005ef8f0 FUN_005ef8f0; 005efad8 FUN_005efad8; 005f0aa0 FUN_005f0aa0; 005f1788 FUN_005f1788
// callees(1): 005fc2bc FUN_005fc2bc
// strings: 00661c68: 'Unlocking %s'

void FUN_005eb2e0(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  
  iVar1 = *(int *)PTR_DAT_0071a414;
  if (iVar1 != 0) {
    (*(code *)**(undefined4 **)(iVar1 + 0x6c))
              (iVar1,param_1,1,param_3,param_4,ZEXT48(PTR_DAT_0071a40c) + 0x1a4,
               PTR_s_Unlocking__s_0071a42c,param_2);
  }
  FUN_005fc2bc(param_1);
  return;
}



//==== 005eb374  ns=Global  size=0xa8
// sig: undefined FUN_005eb374(void)
// callers(0): 
// callees(2): 005eae28 FUN_005eae28; 005eb2e0 FUN_005eb2e0
// strings: 00661c20: 'C:\\devel\\projects\\bink\\src\\sdk\\decode\\binkread.c' | 00661c08: 'Bink instance io mutex'

void FUN_005eb374(int param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  int iVar3;
  
  puVar2 = PTR_s_C__devel_projects_bink_src_sdk_d_0071a424;
  puVar1 = PTR_s_Bink_instance_io_mutex_0071a420;
  if ((*(uint *)(param_1 + -0x170) & 0x8000000) == 0) {
    iVar3 = FUN_005eae28(param_1 + 0x1a0,1,PTR_s_Bink_instance_io_mutex_0071a420,
                         PTR_s_C__devel_projects_bink_src_sdk_d_0071a424,0x598);
    if (iVar3 != 0) {
      FUN_005eb2e0(param_1 + 0x1a0,puVar1,puVar2,0x599);
      return;
    }
  }
  return;
}



//==== 005eb41c  ns=Global  size=0x30
// sig: undefined FUN_005eb41c(void)
// callers(0): 
// callees(1): 005eb2e0 FUN_005eb2e0
// strings: 00661c20: 'C:\\devel\\projects\\bink\\src\\sdk\\decode\\binkread.c' | 00661c08: 'Bink instance io mutex'

void FUN_005eb41c(int param_1)

{
  if ((*(uint *)(param_1 + -0x170) & 0x8000000) != 0) {
    return;
  }
  FUN_005eb2e0(param_1 + 0x1a0,PTR_s_Bink_instance_io_mutex_0071a420,
               PTR_s_C__devel_projects_bink_src_sdk_d_0071a424,0x58f);
  return;
}



//==== 005eb450  ns=Global  size=0x200
// sig: undefined FUN_005eb450(void)
// callers(3): 005eb740 FUN_005eb740; 005eda28 FUN_005eda28; 005f0370 FUN_005f0370
// callees(3): 005eb0f8 FUN_005eb0f8; 005eb2e0 FUN_005eb2e0; 005fc190 FUN_005fc190
// strings: 00661c78: 'Wait for frame IO to complete' | 00661c20: 'C:\\devel\\projects\\bink\\src\\sdk\\decode\\binkread.c' | 00661c98: 'Bink instance priority io mutex'

/* WARNING: Heritage AFTER dead removal. Example location: r0x0071a434 : 0x005eb4f4 */
/* WARNING: Restarted to delay deadcode elimination for space: ram */

void FUN_005eb450(int param_1)

{
  int iVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  
  puVar2 = PTR_s_Bink_instance_priority_io_mutex_0071a434;
  puVar5 = PTR_s_C__devel_projects_bink_src_sdk_d_0071a424;
  puVar4 = PTR_DAT_0071a414;
  puVar3 = PTR_DAT_0071a40c;
  if (*(int *)(param_1 + 0x118) != 0) {
    iVar1 = *(int *)PTR_DAT_0071a414;
    if (iVar1 == 0) {
      FUN_005eb0f8(param_1 + 0x2b0,PTR_s_Bink_instance_priority_io_mutex_0071a434,
                   PTR_s_C__devel_projects_bink_src_sdk_d_0071a424,0x30b);
      iVar1 = *(int *)(param_1 + 0x118);
    }
    else {
      (*(code *)**(undefined4 **)(iVar1 + 0x50))
                (iVar1,0,0,0,1,PTR_s_C__devel_projects_bink_src_sdk_d_0071a424,0x308,
                 PTR_DAT_0071a40c + 0x1a8);
      puVar2 = PTR_s_Bink_instance_priority_io_mutex_0071a434;
      FUN_005eb0f8(param_1 + 0x2b0,PTR_s_Bink_instance_priority_io_mutex_0071a434,puVar5,0x30b);
      iVar1 = *(int *)(param_1 + 0x118);
    }
    if (iVar1 != 0) {
      (*(code *)**(undefined4 **)(param_1 + 0x194))
                (param_1 + 400,*(undefined4 *)(param_1 + 0x18c),*(undefined4 *)(param_1 + 0x188),
                 *(undefined4 *)(param_1 + 0xe8),*(undefined4 *)(param_1 + 0x11c));
      *(int *)(param_1 + 0x4d8) = *(int *)(param_1 + 0x188) + *(int *)(param_1 + 0x11c);
      *(undefined4 *)(param_1 + 0x118) = 0;
      if (*(int *)(param_1 + 0x1d0) != 0) {
        *(undefined4 *)(param_1 + 0x1c) = 1;
      }
    }
    FUN_005eb2e0(param_1 + 0x2b0,puVar2,puVar5,0x318);
    iVar1 = *(int *)puVar4;
    if (iVar1 != 0) {
      (*(code *)**(undefined4 **)(iVar1 + 0x54))(iVar1,0,0,puVar5,0x31b);
    }
    if (*(int *)(puVar3 + 0x1ac) != 0) {
      FUN_005fc190(puVar3 + 0x1b0,1);
    }
  }
  return;
}



//==== 005eb650  ns=Global  size=0xec
// sig: undefined FUN_005eb650(void)
// callers(1): 005ee638 FUN_005ee638
// callees(3): 005eae28 FUN_005eae28; 005eb0f8 FUN_005eb0f8; 005eb2e0 FUN_005eb2e0
// strings: 00661c20: 'C:\\devel\\projects\\bink\\src\\sdk\\decode\\binkread.c'

void FUN_005eb650(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  int iVar2;
  
  puVar1 = PTR_s_C__devel_projects_bink_src_sdk_d_0071a424;
  while( true ) {
    FUN_005eb0f8(param_1,param_2,puVar1,0x134);
    iVar2 = FUN_005eae28(param_3,0,param_4,puVar1,0x135);
    if (iVar2 != 0) {
      return;
    }
    FUN_005eb2e0(param_1,param_2,puVar1,0x137);
    FUN_005eb0f8(param_3,param_4,puVar1,0x139);
    iVar2 = FUN_005eae28(param_1,0,param_2,puVar1,0x13a);
    if (iVar2 != 0) break;
    FUN_005eb2e0(param_3,param_4,puVar1,0x13c);
  }
  return;
}



//==== 005eb740  ns=Global  size=0x22c
// sig: undefined FUN_005eb740(void)
// callers(0): 
// callees(2): 005eb450 FUN_005eb450; 005f5398 FUN_005f5398

int FUN_005eb740(int param_1,undefined2 *param_2)

{
  bool bVar1;
  undefined2 uVar2;
  char *pcVar3;
  uint *puVar4;
  uint uVar5;
  int iVar6;
  undefined2 *puVar7;
  uint *puVar8;
  uint uVar9;
  uint *puVar10;
  uint uVar11;
  int iVar12;
  undefined1 local_50 [4];
  uint local_4c [5];
  
  if ((param_1 != 0) && (param_2 != (undefined2 *)0x0)) {
    iVar12 = *(int *)(param_1 + 0x10);
    puVar8 = *(uint **)(iVar12 + 0xe8);
    iVar6 = *(int *)(iVar12 + 0x11c);
    FUN_005eb450(iVar12);
    iVar12 = *(int *)(param_1 + 0x10);
    if ((*(int *)(iVar12 + 0x1c) == 0) && (0 < *(int *)(iVar12 + 0x38))) {
      puVar4 = (uint *)((int)puVar8 + iVar6);
      puVar10 = puVar8 + 1;
      uVar9 = *puVar8;
      if (((puVar8 + 1 <= puVar4) && (*(uint **)(iVar12 + 0xe8) <= puVar8 + 1)) &&
         (puVar8 = (uint *)(uVar9 + (int)puVar10), puVar8 <= puVar4)) {
        iVar6 = 0;
        while( true ) {
          bVar1 = *(int *)(param_1 + 0x18) == iVar6;
          iVar6 = iVar6 + 1;
          if ((bVar1) && (uVar9 != 0)) break;
          puVar10 = puVar8 + 1;
          if (*(int *)(iVar12 + 0x38) <= iVar6) {
            return 0;
          }
          uVar9 = *puVar8;
          if (puVar4 < puVar10) {
            return 0;
          }
          puVar8 = (uint *)((int)puVar10 + uVar9);
          if (puVar10 < *(uint **)(iVar12 + 0xe8)) {
            return 0;
          }
          if (puVar4 < puVar8) {
            return 0;
          }
        }
        uVar11 = *puVar10;
        if (uVar11 != 0) {
          iVar12 = 0;
          while( true ) {
            FUN_005f5398(*(undefined4 *)(param_1 + 0x14),param_2,local_4c,puVar10 + 1,local_50,
                         (int)(puVar10 + 1) + uVar9,(int)param_2 + 0xfU & 0xfffffff0,0);
            if (uVar11 < local_4c[0]) {
              local_4c[0] = uVar11;
            }
            uVar11 = uVar11 - local_4c[0];
            if ((*(int *)(param_1 + 4) != 0x10) &&
               (local_4c[0] = local_4c[0] >> 1, local_4c[0] != 0)) {
              uVar5 = 0;
              puVar7 = param_2;
              do {
                pcVar3 = (char *)(uVar5 + (int)param_2);
                uVar5 = uVar5 + 1;
                uVar2 = *puVar7;
                puVar7 = puVar7 + 1;
                *pcVar3 = (char)((ushort)uVar2 >> 8) + -0x80;
              } while (uVar5 < local_4c[0]);
            }
            iVar12 = iVar12 + local_4c[0];
            if (uVar11 == 0) break;
            param_2 = (undefined2 *)(local_4c[0] + (int)param_2);
          }
          return iVar12;
        }
      }
    }
  }
  return 0;
}



//==== 005eb970  ns=Global  size=0x3c
// sig: undefined FUN_005eb970(void)
// callers(0): 
// callees(1): 005f516c FUN_005f516c

void FUN_005eb970(int param_1)

{
  if (param_1 != 0) {
    *(undefined4 *)(param_1 + 0x14) = 0;
    FUN_005f516c(param_1);
  }
  return;
}



//==== 005eb9ac  ns=Global  size=0x114
// sig: undefined FUN_005eb9ac(void)
// callers(0): 
// callees(1): 005d0140 libc::memset

ulonglong FUN_005eb9ac(int *param_1)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  ulonglong uVar5;
  
  uVar5 = 0;
  iVar4 = *param_1 - param_1[6];
  if (iVar4 < 0) {
    iVar4 = iVar4 + param_1[2];
  }
  iVar3 = param_1[0x12] - iVar4;
  uVar2 = param_1[6] - iVar3;
  if (iVar4 < param_1[0x12]) {
    uVar1 = param_1[3];
    param_1[6] = uVar2;
    uVar5 = (ulonglong)(uint)(iVar3 * 1000) /
            ((ulonglong)((longlong)(param_1[8] * param_1[9]) * (longlong)param_1[10] << 0x20) >>
            0x23);
    if (uVar2 < uVar1) {
      param_1[6] = uVar2 + param_1[2];
      libc::memset(uVar1,0,iVar3 - (uVar1 - uVar2));
      libc::memset(param_1[6],0,uVar1 - uVar2);
      return uVar5;
    }
    libc::memset(uVar2,0,iVar3);
  }
  return uVar5;
}



//==== 005ebac0  ns=Global  size=0x490
// sig: undefined FUN_005ebac0(void)
// callers(7): 005ebf50 FUN_005ebf50; 005ec778 FUN_005ec778; 005eda28 FUN_005eda28; 005edea0 FUN_005edea0; 005ee120 FUN_005ee120; 005ee3a8 FUN_005ee3a8; 005efeb0 FUN_005efeb0
// callees(3): 005c6094 FUN_005c6094; 005eae28 FUN_005eae28; 005eb2e0 FUN_005eb2e0
// strings: 00661cb8: 'Bink instance sound mutex' | 00661c20: 'C:\\devel\\projects\\bink\\src\\sdk\\decode\\binkread.c'

void FUN_005ebac0(int param_1)

{
  ulonglong uVar1;
  undefined *puVar2;
  undefined *puVar3;
  uint *puVar4;
  int iVar6;
  int iVar7;
  ulonglong uVar5;
  ulonglong uVar8;
  ulonglong uVar9;
  undefined2 *puVar10;
  char *pcVar11;
  uint uVar12;
  ulonglong uVar13;
  uint uVar15;
  ulonglong uVar14;
  uint uVar16;
  ulonglong uVar17;
  char *local_60;
  uint local_5c [3];
  
  puVar3 = PTR_s_Bink_instance_sound_mutex_0071a438;
  puVar2 = PTR_s_C__devel_projects_bink_src_sdk_d_0071a424;
  if ((((*(int *)(*(int *)(param_1 + 0x124) * 0x180 + *(int *)(param_1 + 0x154) + -0x24) != 0) &&
       (*(int *)(param_1 + 0x460) != 0)) && (*(int *)(param_1 + 0x124) != 0)) &&
     ((iVar6 = *(int *)(*(int *)(param_1 + 0x154) + 0x4c), iVar6 < 1 || (iVar6 == 2)))) {
    iVar6 = FUN_005eae28(param_1 + 0x3b0,0,PTR_s_Bink_instance_sound_mutex_0071a438,
                         PTR_s_C__devel_projects_bink_src_sdk_d_0071a424,0x27f);
    if ((iVar6 != 0) && (*(int *)(param_1 + 0x124) != 0)) {
      uVar12 = 0;
      iVar6 = 0;
      do {
        puVar4 = (uint *)(iVar6 + *(int *)(param_1 + 0x154));
        iVar7 = (**(code **)puVar4[0x57])(puVar4);
        while (iVar7 != 0) {
          uVar13 = (ulonglong)*puVar4 - (ulonglong)puVar4[6];
          if ((int)uVar13 < 0) {
            uVar13 = uVar13 + puVar4[2];
          }
          uVar15 = (uint)uVar13;
          if ((((int)uVar15 <= (int)puVar4[0xb]) &&
              ((*(int *)(param_1 + 0xc) <= (int)puVar4[0x10] || (uVar15 == 0)))) ||
             (iVar7 = (**(code **)puVar4[0x58])(puVar4,&local_60,local_5c), iVar7 == 0)) break;
          if (puVar4[0x15] == 0) {
            uVar8 = (ulonglong)local_5c[0];
          }
          else {
            uVar8 = ((ulonglong)local_5c[0] & 0x7fffffff) << 1;
            local_5c[0] = (uint)uVar8;
          }
          if ((uVar13 & 0xffffffff) < uVar8) {
            uVar8 = uVar13;
            local_5c[0] = uVar15;
          }
          if (*(int *)(param_1 + 0xc) <= (int)puVar4[0x10]) {
            uVar8 = uVar8 & puVar4[0xc] << (puVar4[0x15] & 0x3f);
            local_5c[0] = (uint)uVar8;
          }
          uVar15 = puVar4[6];
          uVar13 = (ulonglong)uVar15;
          uVar14 = puVar4[4] - uVar13;
          if ((uVar14 & 0xffffffff) < (uVar8 & 0xffffffff)) {
            uVar16 = (uint)uVar14;
            if (uVar16 == 0) {
              uVar5 = ZEXT48(local_60);
              if (puVar4[0x15] != 0) goto LAB_005ebd50;
LAB_005ebeec:
              FUN_005c6094(uVar5 & 0xffffffff,puVar4[3],uVar8 - uVar14 & 0xffffffff);
              uVar15 = local_5c[0];
            }
            else {
              if (puVar4[0x15] == 0) {
                FUN_005c6094(local_60,uVar15,uVar14 & 0xffffffff);
                uVar8 = (ulonglong)local_5c[0];
                uVar5 = ZEXT48(local_60) + uVar14;
              }
              else {
                uVar1 = (uVar14 << 0x20) >> 0x21;
                uVar5 = ZEXT48(local_60);
                uVar9 = uVar5;
                uVar17 = uVar1;
                if (uVar16 >> 1 != 0) {
                  do {
                    puVar10 = (undefined2 *)uVar13;
                    uVar13 = uVar13 + 2;
                    *(char *)uVar9 = (char)((ushort)*puVar10 >> 8) + -0x80;
                    uVar17 = uVar17 - 1;
                    uVar9 = uVar9 + 1;
                  } while (uVar17 != 0);
                  uVar5 = uVar5 + uVar1;
                  uVar8 = (ulonglong)local_5c[0];
                }
              }
              local_60 = (char *)uVar5;
              if (puVar4[0x15] == 0) goto LAB_005ebeec;
LAB_005ebd50:
              puVar10 = (undefined2 *)puVar4[3];
              uVar13 = (uVar8 - uVar14 << 0x20) >> 0x21;
              uVar15 = (uint)uVar8;
              if ((uint)(uVar8 - uVar14) >> 1 != 0) {
                do {
                  pcVar11 = (char *)uVar5;
                  uVar5 = uVar5 + 1;
                  *pcVar11 = (char)((ushort)*puVar10 >> 8) + -0x80;
                  uVar13 = uVar13 - 1;
                  uVar15 = local_5c[0];
                  puVar10 = puVar10 + 1;
                } while (uVar13 != 0);
              }
            }
            puVar4[6] = puVar4[3] + (uVar15 - uVar16);
            uVar15 = puVar4[0x15];
          }
          else {
            if (puVar4[0x15] == 0) {
              FUN_005c6094(local_60,uVar15,uVar8 & 0xffffffff);
              uVar15 = local_5c[0];
            }
            else {
              uVar14 = (uVar8 << 0x20) >> 0x21;
              pcVar11 = local_60;
              uVar15 = (uint)uVar8;
              if ((uint)uVar8 >> 1 != 0) {
                do {
                  puVar10 = (undefined2 *)uVar13;
                  uVar13 = uVar13 + 2;
                  *pcVar11 = (char)((ushort)*puVar10 >> 8) + -0x80;
                  uVar14 = uVar14 - 1;
                  pcVar11 = pcVar11 + 1;
                  uVar15 = local_5c[0];
                } while (uVar14 != 0);
              }
            }
            puVar4[6] = puVar4[6] + uVar15;
            uVar15 = puVar4[0x15];
          }
          if (uVar15 != 0) {
            local_5c[0] = local_5c[0] >> 1;
          }
          (**(code **)puVar4[0x59])(puVar4,local_5c[0]);
          iVar7 = (**(code **)puVar4[0x57])(puVar4);
        }
        uVar12 = uVar12 + 1;
        iVar6 = iVar6 + 0x180;
      } while (uVar12 < *(uint *)(param_1 + 0x124));
      if ((*(uint *)(param_1 + 0x124) != 0) &&
         ((iVar6 = *(int *)(*(int *)(param_1 + 0x154) + 0x4c), iVar6 < 1 || (iVar6 == 2)))) {
        FUN_005eb2e0(param_1 + 0x3b0,puVar3,puVar2,0x28d);
      }
    }
  }
  return;
}



//==== 005ebf50  ns=Global  size=0xbc
// sig: undefined FUN_005ebf50(void)
// callers(0): 
// callees(1): 005ebac0 FUN_005ebac0

void FUN_005ebf50(int param_1)

{
  if (param_1 != 0) {
    if ((*(int *)(param_1 + 0x124) != 0) && (*(int *)(*(int *)(param_1 + 0x154) + 0x4c) == 1)) {
      FUN_005ebac0(param_1);
    }
    if ((*(int *)(param_1 + 0x17c) == 0) && ((*(uint *)(param_1 + 0x20) & 0x8000000) != 0)) {
      (*(code *)**(undefined4 **)(param_1 + 0x1a0))(param_1 + 400);
      return;
    }
  }
  return;
}



//==== 005ec00c  ns=Global  size=0x28
// sig: undefined FUN_005ec00c(void)
// callers(0): 
// callees(1): 005f5090 FUN_005f5090

undefined4 FUN_005ec00c(void)

{
  undefined4 uVar1;
  
  uVar1 = FUN_005f5090();
  return uVar1;
}



//==== 005ec034  ns=Global  size=0xac
// sig: undefined FUN_005ec034(void)
// callers(0): 
// callees(1): 005fcc50 FUN_005fcc50

uint FUN_005ec034(int param_1,undefined4 param_2)

{
  uint uVar1;
  
  if (param_1 == 1) {
    if (*(int *)(PTR_DAT_0071a40c + 0x1f0) != 0) {
      uVar1 = FUN_005fcc50(PTR_DAT_0071a40c + 500,param_2);
      uVar1 = ((int)uVar1 >> 0x1f) - ((int)uVar1 >> 0x1f ^ uVar1);
LAB_005ec098:
      return uVar1 >> 0x1f;
    }
  }
  else if (param_1 == 2) {
    if (*(int *)(PTR_DAT_0071a40c + 0x1ac) != 0) {
      uVar1 = FUN_005fcc50(PTR_DAT_0071a40c + 0x2f4,param_2);
      uVar1 = ((int)uVar1 >> 0x1f) - ((int)uVar1 >> 0x1f ^ uVar1);
      goto LAB_005ec098;
    }
  }
  return 0;
}



//==== 005ec0e0  ns=Global  size=0xf4
// sig: undefined FUN_005ec0e0(void)
// callers(2): 005ee638 FUN_005ee638; 005ef8f0 FUN_005ef8f0
// callees(6): 005eb0f8 FUN_005eb0f8; 005eb2e0 FUN_005eb2e0; 005fc098 FUN_005fc098; 005fc190 FUN_005fc190; 005fc2ec FUN_005fc2ec; 005fd4d0 FUN_005fd4d0
// strings: 00661cd8: 'Bink global IO mutex' | 00661c20: 'C:\\devel\\projects\\bink\\src\\sdk\\decode\\binkread.c'

void FUN_005ec0e0(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  
  puVar4 = PTR_s_Bink_global_IO_mutex_0071a43c;
  puVar3 = PTR_s_C__devel_projects_bink_src_sdk_d_0071a424;
  puVar2 = PTR_DAT_0071a40c;
  puVar1 = PTR_DAT_0071a40c + 0x3f4;
  FUN_005eb0f8(puVar1,PTR_s_Bink_global_IO_mutex_0071a43c,
               PTR_s_C__devel_projects_bink_src_sdk_d_0071a424,0x553);
  if (*(int *)(puVar2 + 0x1ac) != 0) {
    *(undefined4 *)(puVar2 + 0x474) = 1;
    FUN_005fc190(puVar2 + 0x1b0,4);
    FUN_005fc2ec(puVar2 + 0x2f4,0xffffffff,0);
    FUN_005fd4d0(puVar2 + 0x2f4);
    FUN_005fc098(puVar2 + 0x1b0);
    *(undefined4 *)(puVar2 + 0x478) = 0;
    *(undefined4 *)(puVar2 + 0x1ac) = 0;
  }
  FUN_005eb2e0(puVar1,puVar4,puVar3,0x563);
  return;
}



//==== 005ec1d4  ns=Global  size=0xf4
// sig: undefined FUN_005ec1d4(void)
// callers(2): 005ee638 FUN_005ee638; 005ef8f0 FUN_005ef8f0
// callees(6): 005eb0f8 FUN_005eb0f8; 005eb2e0 FUN_005eb2e0; 005fc098 FUN_005fc098; 005fc190 FUN_005fc190; 005fc2ec FUN_005fc2ec; 005fd4d0 FUN_005fd4d0
// strings: 00661cf0: 'Bink global sound mutex' | 00661c20: 'C:\\devel\\projects\\bink\\src\\sdk\\decode\\binkread.c'

void FUN_005ec1d4(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  
  puVar4 = PTR_s_Bink_global_sound_mutex_0071a440;
  puVar3 = PTR_s_C__devel_projects_bink_src_sdk_d_0071a424;
  puVar2 = PTR_DAT_0071a40c;
  puVar1 = PTR_DAT_0071a40c + 0x47c;
  FUN_005eb0f8(puVar1,PTR_s_Bink_global_sound_mutex_0071a440,
               PTR_s_C__devel_projects_bink_src_sdk_d_0071a424,600);
  if (*(int *)(puVar2 + 0x1f0) != 0) {
    *(undefined4 *)(puVar2 + 0x4fc) = 1;
    FUN_005fc190(puVar2 + 0x500,4);
    FUN_005fc2ec(puVar2 + 500,0xffffffff,0);
    FUN_005fd4d0(puVar2 + 500);
    FUN_005fc098(puVar2 + 0x500);
    *(undefined4 *)(puVar2 + 0x540) = 0;
    *(undefined4 *)(puVar2 + 0x1f0) = 0;
  }
  FUN_005eb2e0(puVar1,puVar4,puVar3,0x267);
  return;
}



//==== 005ec2c8  ns=Global  size=0x28
// sig: undefined FUN_005ec2c8(void)
// callers(0): 
// callees(1): 005fbef8 FUN_005fbef8

undefined4 FUN_005ec2c8(void)

{
  undefined4 uVar1;
  
  uVar1 = FUN_005fbef8();
  return uVar1;
}



//==== 005ec2f0  ns=Global  size=0xd4
// sig: undefined FUN_005ec2f0(void)
// callers(0): 
// callees(2): 005f5090 FUN_005f5090; 005fbf74 FUN_005fbf74

void FUN_005ec2f0(int param_1,ulonglong param_2,int param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar1 = *(int *)(param_1 + -0x10);
  if (0 < iVar1) {
    iVar2 = FUN_005f5090();
    iVar1 = ((int)(((param_2 & 0xffffffff) * 1000) / (ulonglong)(longlong)iVar1) - (iVar2 - param_3)
            ) + *(int *)(param_1 + -0xc);
    *(int *)(param_1 + -0xc) = iVar1;
    while (0 < iVar1) {
      do {
        FUN_005fbf74(1);
        iVar3 = FUN_005f5090();
        iVar1 = *(int *)(param_1 + -0xc) - (iVar3 - iVar2);
      } while (iVar3 - iVar2 < *(int *)(param_1 + -0xc));
      *(int *)(param_1 + -0xc) = iVar1;
      iVar2 = iVar3;
    }
  }
  return;
}



//==== 005ec3c8  ns=Global  size=0x258
// sig: undefined FUN_005ec3c8(void)
// callers(2): 005ec620 FUN_005ec620; 005f1788 FUN_005f1788
// callees(5): 005fbef8 FUN_005fbef8; 005fbf74 FUN_005fbf74; 005fbfac FUN_005fbfac; 005fbfc8 FUN_005fbfc8; 005fc508 FUN_005fc508
// strings: 00661d08: 'Bink list mutex' | 00661cf0: 'Bink global sound mutex' | 00661d18: 'Bink global io mutex'

void FUN_005ec3c8(void)

{
  longlong lVar1;
  bool bVar2;
  code *pcVar3;
  undefined4 uVar4;
  ulonglong *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  int iVar9;
  ulonglong unaff_r27;
  ulonglong unaff_r28;
  ulonglong unaff_r29;
  ulonglong unaff_r30;
  ulonglong unaff_r31;
  uint uVar10;
  ulonglong in_LR;
  
  lVar1 = ZEXT48(&stack0x00000000) - 0xa0;
  puVar5 = (ulonglong *)lVar1;
  *puVar5 = ZEXT48(&stack0x00000000);
  puVar5[0x12] = unaff_r30;
  puVar5[0x13] = unaff_r31;
  puVar6 = PTR_DAT_0071a40c;
  uVar10 = 0;
  puVar5[0xf] = unaff_r27;
  puVar5[0x10] = unaff_r28;
  puVar5[0x11] = unaff_r29;
  puVar5[0x16] = in_LR;
LAB_005ec3f0:
  do {
    iVar9 = FUN_005fbef8(puVar6 + 0x544,1);
    while( true ) {
      if (iVar9 == 0) {
        if (*(int *)(puVar6 + 0x548) == 0) {
          iVar9 = FUN_005fc508(puVar6 + 0x54c,2);
          if (iVar9 == 0) {
            trapWord(0x1f,lVar1,lVar1);
          }
          iVar9 = FUN_005fc508(puVar6 + 0x47c,1);
          if (iVar9 == 0) {
            trapWord(0x1f,lVar1,lVar1);
          }
          iVar9 = FUN_005fc508(puVar6 + 0x3f4,1);
          puVar8 = PTR_s_Bink_list_mutex_0071a444;
          puVar7 = PTR_DAT_0071a414;
          if (iVar9 == 0) {
            trapWord(0x1f,lVar1,lVar1);
          }
          iVar9 = *(int *)PTR_DAT_0071a414;
          if (iVar9 != 0) {
            pcVar3 = (code *)**(undefined4 **)(iVar9 + 0x5c);
            puVar5[5] = ZEXT48(&TOC_BASE);
            (*pcVar3)(iVar9,puVar6 + 0x54c,puVar6 + 0x5cc,puVar8);
            iVar9 = *(int *)puVar7;
            if (iVar9 != 0) {
              uVar4 = *(undefined4 *)((int)puVar5[5] + -0x7ee8);
              pcVar3 = (code *)**(undefined4 **)(iVar9 + 0x5c);
              puVar5[5] = puVar5[5];
              (*pcVar3)(iVar9,puVar6 + 0x47c,puVar6 + 0x5d0,uVar4);
              iVar9 = *(int *)puVar7;
              if (iVar9 != 0) {
                uVar4 = *(undefined4 *)((int)puVar5[5] + -0x7ee0);
                pcVar3 = (code *)**(undefined4 **)(iVar9 + 0x5c);
                puVar5[5] = puVar5[5];
                (*pcVar3)(iVar9,puVar6 + 0x3f4,puVar6 + 0x5d4,uVar4);
              }
            }
          }
          *(undefined4 *)(puVar6 + 0x548) = 1;
          FUN_005fbef8(puVar6 + 0x544,0xffffffffffffffff);
          return;
        }
        FUN_005fbef8(puVar6 + 0x544,0xffffffffffffffff);
        return;
      }
      FUN_005fbef8(puVar6 + 0x544,0xffffffffffffffff);
      FUN_005fbfc8();
      bVar2 = uVar10 == 0x1ff;
      uVar10 = uVar10 + 1;
      if (bVar2) break;
      if (uVar10 < 0x400) goto LAB_005ec3f0;
      FUN_005fbf74(1);
      uVar10 = 0;
      iVar9 = FUN_005fbef8(puVar6 + 0x544,1);
    }
    FUN_005fbfac();
  } while( true );
}



//==== 005ec620  ns=Global  size=0x158
// sig: undefined FUN_005ec620(void)
// callers(1): 0001401c boot::boot
// callees(3): 005eb0f8 FUN_005eb0f8; 005eb2e0 FUN_005eb2e0; 005ec3c8 FUN_005ec3c8
// strings: 00661cf0: 'Bink global sound mutex' | 00661c20: 'C:\\devel\\projects\\bink\\src\\sdk\\decode\\binkread.c'

uint FUN_005ec620(int param_1,undefined4 param_2)

{
  uint uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  int iVar6;
  
  if (param_1 == 0) {
    return 0;
  }
  FUN_005ec3c8();
  puVar5 = PTR_s_Bink_global_sound_mutex_0071a440;
  puVar4 = PTR_s_C__devel_projects_bink_src_sdk_d_0071a424;
  puVar3 = PTR_DAT_0071a40c;
  puVar2 = PTR_DAT_0071a40c + 0x47c;
  FUN_005eb0f8(puVar2,PTR_s_Bink_global_sound_mutex_0071a440,
               PTR_s_C__devel_projects_bink_src_sdk_d_0071a424,0x152);
  if (*(int *)(puVar3 + 0x5d8) != 0) {
    if (param_1 == *(int *)(puVar3 + 0x5d8)) goto LAB_005ec6ac;
    if (*(int *)(puVar3 + 0x5dc) != 0) {
      FUN_005eb2e0(puVar2,puVar5,puVar4,0x15f);
      return 0;
    }
  }
  *(int *)(puVar3 + 0x5d8) = param_1;
LAB_005ec6ac:
  iVar6 = (*(code *)**(undefined4 **)(puVar3 + 0x5d8))(param_2);
  if (iVar6 != 0) {
    *(int *)(puVar3 + 0x5e0) = iVar6;
  }
  FUN_005eb2e0(puVar3 + 0x47c,puVar5,puVar4,0x16b);
  uVar1 = (int)*(uint *)(puVar3 + 0x5e0) >> 0x1f;
  return uVar1 - (uVar1 ^ *(uint *)(puVar3 + 0x5e0)) >> 0x1f;
}



//==== 005ec778  ns=Global  size=0x508
// sig: undefined FUN_005ec778(void)
// callers(0): 
// callees(5): 005eae28 FUN_005eae28; 005eb0f8 FUN_005eb0f8; 005eb2e0 FUN_005eb2e0; 005ebac0 FUN_005ebac0; 005fc0f8 FUN_005fc0f8
// strings: 00661d30: 'Bink Snd' | 00661c20: 'C:\\devel\\projects\\bink\\src\\sdk\\decode\\binkread.c' | 00661d40: 'Sound mix delay' | 00661d08: 'Bink list mutex' | 00661cb8: 'Bink instance sound mutex' | 00661cf0: 'Bink global sound mutex' | 00661d60: 'Global sound mix' | 00661d50: 'Sound mix'

/* WARNING: Heritage AFTER dead removal. Example location: r0x0071a410 : 0x005ec7fc */
/* WARNING: Restarted to delay deadcode elimination for space: ram */

undefined8 FUN_005ec778(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  int iVar6;
  int iVar7;
  undefined4 *puVar8;
  undefined *puVar9;
  
  puVar2 = PTR_DAT_0071a414;
  puVar1 = PTR_DAT_0071a40c;
  iVar7 = *(int *)PTR_DAT_0071a414;
  puVar9 = PTR_DAT_0071a410;
  if (iVar7 != 0) {
    (*(code *)**(undefined4 **)(iVar7 + 0x58))
              (iVar7,0,PTR_DAT_0071a40c + 0x5e4,PTR_s_Bink_Snd_0071a44c);
    puVar9 = PTR_DAT_0071a410;
  }
LAB_005ec800:
  do {
    iVar7 = *(int *)puVar2;
    if (iVar7 != 0) {
      (*(code *)**(undefined4 **)(iVar7 + 0x50))
                (iVar7,0,0,0,2,PTR_s_C__devel_projects_bink_src_sdk_d_0071a424,0x21f,puVar1 + 0x5e8)
      ;
    }
    FUN_005fc0f8(puVar1 + 0x500,*(undefined4 *)(puVar9 + 0x10));
    iVar7 = *(int *)puVar2;
    if (iVar7 != 0) {
      (*(code *)**(undefined4 **)(iVar7 + 0x54))
                (iVar7,0,0,PTR_s_C__devel_projects_bink_src_sdk_d_0071a424,0x221);
    }
LAB_005ec8a4:
    puVar5 = PTR_s_Bink_list_mutex_0071a444;
    puVar3 = PTR_s_C__devel_projects_bink_src_sdk_d_0071a424;
    if ((*(int *)(puVar1 + 0x4fc) == 0) && (*(int *)(puVar1 + 0x548) != 0)) {
      FUN_005eb0f8(puVar1 + 0x54c,PTR_s_Bink_list_mutex_0071a444,
                   PTR_s_C__devel_projects_bink_src_sdk_d_0071a424,0x1d4);
      puVar4 = PTR_s_Bink_instance_sound_mutex_0071a438;
      iVar7 = *(int *)(puVar1 + 0x5ec);
      if (iVar7 != 0) {
        puVar8 = (undefined4 *)0x0;
        do {
          if ((*(int *)(iVar7 + 300) == 0) && (*(int *)(iVar7 + 0x124) != 0)) {
            iVar6 = FUN_005eae28(iVar7 + 0x3b0,0,puVar4,puVar3,0x1da);
            if (iVar6 != 0) {
              FUN_005eb2e0(puVar1 + 0x54c,puVar5,puVar3,0x1de);
              *(undefined4 *)(puVar9 + 0x10) = 0xd;
              if ((*(int *)(iVar7 + 300) == 0) && (*(int *)(iVar7 + 0x124) != 0)) {
                iVar6 = *(int *)(*(int *)(iVar7 + 0x154) + 0x4c);
                if ((iVar6 == 0) || (iVar6 == 2)) {
                  iVar6 = *(int *)puVar2;
                  if (iVar6 != 0) {
                    (*(code *)**(undefined4 **)(iVar6 + 0x50))
                              (iVar6,0,0,0,0,puVar3,0x1e6,puVar1 + 0x5f0);
                  }
                  FUN_005ebac0(iVar7);
                  iVar6 = *(int *)puVar2;
                  if (iVar6 != 0) {
                    (*(code *)**(undefined4 **)(iVar6 + 0x54))(iVar6,0,0,puVar3,0x1e8);
                  }
                }
                else if (iVar6 < 0) {
                  puVar8 = *(undefined4 **)(*(int *)(iVar7 + 0x154) + 0x164);
                  if ((uint)-iVar6 < *(uint *)(puVar9 + 0x10)) {
                    *(int *)(puVar9 + 0x10) = -iVar6;
                  }
                }
              }
              iVar6 = FUN_005eae28(puVar1 + 0x54c,2,puVar5,puVar3,0x1f2);
              FUN_005eb2e0(iVar7 + 0x3b0,puVar4,puVar3,500);
              if (iVar6 != 0) goto LAB_005ec904;
              goto LAB_005ec8a4;
            }
            if (*(uint *)(puVar9 + 0x10) < 3) goto LAB_005ec904;
            *(undefined4 *)(puVar9 + 0x10) = 2;
            iVar7 = *(int *)(iVar7 + 0xe4);
          }
          else {
LAB_005ec904:
            iVar7 = *(int *)(iVar7 + 0xe4);
          }
          if (iVar7 == 0) {
            FUN_005eb2e0(puVar1 + 0x54c,puVar5,puVar3,0x202);
            puVar5 = PTR_s_Bink_global_sound_mutex_0071a440;
            if (puVar8 == (undefined4 *)0x0) goto LAB_005eca90;
            iVar7 = FUN_005eae28(puVar1 + 0x47c,0,PTR_s_Bink_global_sound_mutex_0071a440,puVar3,
                                 0x207);
            if (iVar7 == 0) {
              if (*(uint *)(puVar9 + 0x10) < 3) goto LAB_005eca90;
              *(undefined4 *)(puVar9 + 0x10) = 2;
              iVar7 = *(int *)(puVar1 + 0x4fc);
              goto joined_r0x005ecb8c;
            }
            iVar7 = *(int *)puVar2;
            if (iVar7 != 0) {
              (*(code *)**(undefined4 **)(iVar7 + 0x50))(iVar7,0,0,0,0,puVar3,0x209,puVar1 + 0x5f4);
            }
            (*(code *)*puVar8)(0,0);
            iVar7 = *(int *)puVar2;
            if (iVar7 != 0) {
              (*(code *)**(undefined4 **)(iVar7 + 0x54))(iVar7,0,0,puVar3,0x20b);
            }
            FUN_005eb2e0(puVar1 + 0x47c,puVar5,puVar3,0x20c);
            goto LAB_005eca90;
          }
        } while( true );
      }
      FUN_005eb2e0(puVar1 + 0x54c,puVar5,puVar3,0x202);
      if (*(int *)(puVar1 + 0x4fc) != 0) {
        return 1;
      }
      goto LAB_005ec800;
    }
LAB_005eca90:
    iVar7 = *(int *)(puVar1 + 0x4fc);
joined_r0x005ecb8c:
    if (iVar7 != 0) {
      return 1;
    }
  } while( true );
}



//==== 005ecc80  ns=Global  size=0x1dc
// sig: undefined FUN_005ecc80(void)
// callers(0): 
// callees(0): 
// strings: 00661d78: 'Byte swap' | 00661c20: 'C:\\devel\\projects\\bink\\src\\sdk\\decode\\binkread.c'

void FUN_005ecc80(uint *param_1,longlong param_2)

{
  int iVar1;
  undefined *puVar2;
  uint *puVar3;
  uint *puVar4;
  uint *puVar5;
  uint *puVar6;
  longlong lVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  
  puVar2 = PTR_DAT_0071a414;
  uVar8 = (ulonglong)(param_2 + 3 << 0x20) >> 0x22;
  auVar14 = *(undefined1 (*) [16])((uint)(PTR_DAT_0071a410 + 0x20) & 0xfffffff0);
  iVar1 = *(int *)PTR_DAT_0071a414;
  if (iVar1 != 0) {
    (*(code *)**(undefined4 **)(iVar1 + 0x50))
              (iVar1,0,0,0,0,PTR_s_C__devel_projects_bink_src_sdk_d_0071a424,0x5fb,
               ZEXT48(PTR_DAT_0071a40c) + 0x5f8);
  }
  if (((uint)param_1 & 0xf) == 0) {
LAB_005ecd54:
    lVar7 = ((uVar8 - 0x10 << 0x20) >> 0x24) + 1;
    puVar3 = param_1;
    puVar6 = param_1 + 0xc;
    puVar5 = param_1 + 8;
    puVar4 = param_1 + 4;
    if (0xf < (uVar8 & 0xffffffff)) {
      do {
        uVar8 = uVar8 - 0x10;
        param_1 = puVar3 + 0x10;
        auVar10 = vectorPermute(*(undefined1 (*) [16])((uint)puVar3 & 0xfffffff0),
                                *(undefined1 (*) [16])((uint)puVar3 & 0xfffffff0),auVar14);
        auVar11 = vectorPermute(*(undefined1 (*) [16])((uint)puVar4 & 0xfffffff0),
                                *(undefined1 (*) [16])((uint)puVar4 & 0xfffffff0),auVar14);
        auVar13 = vectorPermute(*(undefined1 (*) [16])((uint)puVar5 & 0xfffffff0),
                                *(undefined1 (*) [16])((uint)puVar5 & 0xfffffff0),auVar14);
        auVar12 = vectorPermute(*(undefined1 (*) [16])((uint)puVar6 & 0xfffffff0),
                                *(undefined1 (*) [16])((uint)puVar6 & 0xfffffff0),auVar14);
        *(undefined1 (*) [16])((uint)puVar3 & 0xfffffff0) = auVar10;
        *(undefined1 (*) [16])((uint)puVar4 & 0xfffffff0) = auVar11;
        *(undefined1 (*) [16])((uint)puVar5 & 0xfffffff0) = auVar13;
        *(undefined1 (*) [16])((uint)puVar6 & 0xfffffff0) = auVar12;
        lVar7 = lVar7 + -1;
        puVar3 = param_1;
        puVar6 = puVar6 + 0x10;
        puVar5 = puVar5 + 0x10;
        puVar4 = puVar4 + 0x10;
      } while (lVar7 != 0);
    }
    if ((int)uVar8 != 0) {
      uVar8 = uVar8 & 0xffffffff;
      do {
        *param_1 = (uint)(byte)*param_1 << 0x18 | (uint)*(byte *)((int)param_1 + 2) << 0x10 |
                   (uint)*(byte *)((int)param_1 + 1) << 8 | (uint)*(byte *)param_1;
        param_1 = param_1 + 1;
        uVar8 = uVar8 - 1;
      } while (uVar8 != 0);
    }
  }
  else {
    uVar9 = uVar8;
    if ((uint)(param_2 + 3) >> 2 != 0) {
      do {
        *param_1 = (uint)(byte)*param_1 << 0x18 | (uint)*(byte *)((int)param_1 + 2) << 0x10 |
                   (uint)*(byte *)((int)param_1 + 1) << 8 | (uint)*(byte *)param_1;
        param_1 = param_1 + 1;
        uVar8 = uVar8 - 1;
        if (((uint)param_1 & 0xf) == 0) goto LAB_005ecd54;
        uVar9 = uVar9 - 1;
      } while (uVar9 != 0);
    }
  }
  iVar1 = *(int *)puVar2;
  if (iVar1 != 0) {
    (*(code *)**(undefined4 **)(iVar1 + 0x54))
              (iVar1,0,0,PTR_s_C__devel_projects_bink_src_sdk_d_0071a424,0x627);
  }
  return;
}



//==== 005ece60  ns=Global  size=0x4
// sig: undefined thunk_FUN_005ecc80(void)
// callers(0): 
// callees(0): 

void thunk_FUN_005ecc80(uint *param_1,longlong param_2)

{
  int iVar1;
  undefined *puVar2;
  uint *puVar3;
  uint *puVar4;
  uint *puVar5;
  uint *puVar6;
  longlong lVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  
  puVar2 = PTR_DAT_0071a414;
  uVar8 = (ulonglong)(param_2 + 3 << 0x20) >> 0x22;
  auVar14 = *(undefined1 (*) [16])((uint)(PTR_DAT_0071a410 + 0x20) & 0xfffffff0);
  iVar1 = *(int *)PTR_DAT_0071a414;
  if (iVar1 != 0) {
    (*(code *)**(undefined4 **)(iVar1 + 0x50))
              (iVar1,0,0,0,0,PTR_s_C__devel_projects_bink_src_sdk_d_0071a424,0x5fb,
               ZEXT48(PTR_DAT_0071a40c) + 0x5f8);
  }
  if (((uint)param_1 & 0xf) == 0) {
LAB_005ecd54:
    lVar7 = ((uVar8 - 0x10 << 0x20) >> 0x24) + 1;
    puVar3 = param_1;
    puVar6 = param_1 + 0xc;
    puVar5 = param_1 + 8;
    puVar4 = param_1 + 4;
    if (0xf < (uVar8 & 0xffffffff)) {
      do {
        uVar8 = uVar8 - 0x10;
        param_1 = puVar3 + 0x10;
        auVar10 = vectorPermute(*(undefined1 (*) [16])((uint)puVar3 & 0xfffffff0),
                                *(undefined1 (*) [16])((uint)puVar3 & 0xfffffff0),auVar14);
        auVar11 = vectorPermute(*(undefined1 (*) [16])((uint)puVar4 & 0xfffffff0),
                                *(undefined1 (*) [16])((uint)puVar4 & 0xfffffff0),auVar14);
        auVar13 = vectorPermute(*(undefined1 (*) [16])((uint)puVar5 & 0xfffffff0),
                                *(undefined1 (*) [16])((uint)puVar5 & 0xfffffff0),auVar14);
        auVar12 = vectorPermute(*(undefined1 (*) [16])((uint)puVar6 & 0xfffffff0),
                                *(undefined1 (*) [16])((uint)puVar6 & 0xfffffff0),auVar14);
        *(undefined1 (*) [16])((uint)puVar3 & 0xfffffff0) = auVar10;
        *(undefined1 (*) [16])((uint)puVar4 & 0xfffffff0) = auVar11;
        *(undefined1 (*) [16])((uint)puVar5 & 0xfffffff0) = auVar13;
        *(undefined1 (*) [16])((uint)puVar6 & 0xfffffff0) = auVar12;
        lVar7 = lVar7 + -1;
        puVar3 = param_1;
        puVar6 = puVar6 + 0x10;
        puVar5 = puVar5 + 0x10;
        puVar4 = puVar4 + 0x10;
      } while (lVar7 != 0);
    }
    if ((int)uVar8 != 0) {
      uVar8 = uVar8 & 0xffffffff;
      do {
        *param_1 = (uint)(byte)*param_1 << 0x18 | (uint)*(byte *)((int)param_1 + 2) << 0x10 |
                   (uint)*(byte *)((int)param_1 + 1) << 8 | (uint)*(byte *)param_1;
        param_1 = param_1 + 1;
        uVar8 = uVar8 - 1;
      } while (uVar8 != 0);
    }
  }
  else {
    uVar9 = uVar8;
    if ((uint)(param_2 + 3) >> 2 != 0) {
      do {
        *param_1 = (uint)(byte)*param_1 << 0x18 | (uint)*(byte *)((int)param_1 + 2) << 0x10 |
                   (uint)*(byte *)((int)param_1 + 1) << 8 | (uint)*(byte *)param_1;
        param_1 = param_1 + 1;
        uVar8 = uVar8 - 1;
        if (((uint)param_1 & 0xf) == 0) goto LAB_005ecd54;
        uVar9 = uVar9 - 1;
      } while (uVar9 != 0);
    }
  }
  iVar1 = *(int *)puVar2;
  if (iVar1 != 0) {
    (*(code *)**(undefined4 **)(iVar1 + 0x54))
              (iVar1,0,0,PTR_s_C__devel_projects_bink_src_sdk_d_0071a424,0x627);
  }
  return;
}



//==== 005ece64  ns=Global  size=0x74
// sig: undefined FUN_005ece64(void)
// callers(0): 
// callees(2): 005fd778 FUN_005fd778; 005fd790 FUN_005fd790

undefined4 FUN_005ece64(undefined8 param_1,int param_2,int param_3)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  
  iVar1 = *(int *)(param_2 + 0x468);
  iVar2 = FUN_005fd778();
  *(int *)(param_2 + 0x468) = iVar2 + iVar1 + param_3;
  uVar3 = FUN_005fd790(param_1,param_3);
  return uVar3;
}



//==== 005eced8  ns=Global  size=0x2ac
// sig: undefined FUN_005eced8(void)
// callers(0): 
// callees(1): 005f5090 FUN_005f5090

void FUN_005eced8(int param_1,undefined4 *param_2,ulonglong param_3)

{
  int iVar1;
  int iVar2;
  ulonglong uVar3;
  
  if (param_1 == 0) {
    return;
  }
  if (param_2 == (undefined4 *)0x0) {
    return;
  }
  iVar2 = FUN_005f5090();
  if (*(int *)(param_1 + 0x470) - 1U < 0xfffffffe) {
    *(int *)(param_1 + 0x498) = *(int *)(param_1 + 0x498) + (iVar2 - *(int *)(param_1 + 0x470));
    *(undefined4 *)(param_1 + 0x470) = 0;
    if ((int)param_3 != 0) goto LAB_005ed150;
LAB_005ecf34:
    uVar3 = (ulonglong)*(uint *)(param_1 + 0x450);
  }
  else {
    if ((int)param_3 == 0) goto LAB_005ecf34;
LAB_005ed150:
    uVar3 = (ulonglong)*(uint *)(param_1 + 0x450);
    if ((param_3 & 0xffffffff) < uVar3) goto LAB_005ecf3c;
  }
  param_3 = uVar3 - 1;
LAB_005ecf3c:
  if ((ulonglong)*(uint *)(param_1 + 0xc) < (param_3 & 0xffffffff)) {
    param_3 = (ulonglong)*(uint *)(param_1 + 0xc) - 1;
  }
  uVar3 = param_3 & 0xffffffff;
  if ((int)param_3 == 0) {
    param_3 = 1;
    uVar3 = 1;
  }
  *param_2 = *(undefined4 *)(param_1 + 0x10);
  param_2[1] = *(undefined4 *)(param_1 + 0x14);
  param_2[2] = *(undefined4 *)(param_1 + 0x18);
  param_2[0xb] = *(undefined4 *)(param_1 + 0x1f8);
  param_2[0xc] = *(undefined4 *)(param_1 + 0x1fc);
  param_2[0xd] = (int)((((ulonglong)
                         *(uint *)(*(uint *)(param_1 + 0xc) * 4 + *(int *)(param_1 + 0x158)) -
                        (ulonglong)
                        *(uint *)((int)((*(uint *)(param_1 + 0xc) - param_3 & 0xffffffff) << 2) +
                                 *(int *)(param_1 + 0x158))) * (ulonglong)*(uint *)(param_1 + 0x4a0)
                       ) / (*(uint *)(param_1 + 0x4a4) * uVar3));
  uVar3 = param_3 + *(uint *)(param_1 + 0x454);
  if ((ulonglong)*(uint *)(param_1 + 0x450) <= (uVar3 & 0xffffffff)) {
    uVar3 = uVar3 - *(uint *)(param_1 + 0x450);
  }
  param_2[3] = (int)param_3;
  iVar2 = (int)((uVar3 & 0x3fffffff) << 2);
  iVar1 = *(int *)(*(int *)(param_1 + 0x454) * 4 + *(int *)(param_1 + 0x434)) -
          *(int *)(*(int *)(param_1 + 0x434) + iVar2);
  param_2[4] = iVar1;
  if (iVar1 == 0) {
    param_2[4] = 1;
  }
  param_2[5] = *(int *)(*(int *)(param_1 + 0x454) * 4 + *(int *)(param_1 + 0x43c)) -
               *(int *)(iVar2 + *(int *)(param_1 + 0x43c));
  param_2[6] = *(int *)(*(int *)(param_1 + 0x454) * 4 + *(int *)(param_1 + 0x438)) -
               *(int *)(iVar2 + *(int *)(param_1 + 0x438));
  param_2[10] = *(int *)(*(int *)(param_1 + 0x454) * 4 + *(int *)(param_1 + 0x440)) -
                *(int *)(iVar2 + *(int *)(param_1 + 0x440));
  param_2[7] = *(int *)(*(int *)(param_1 + 0x454) * 4 + *(int *)(param_1 + 0x444)) -
               *(int *)(iVar2 + *(int *)(param_1 + 0x444));
  param_2[8] = *(int *)(*(int *)(param_1 + 0x454) * 4 + *(int *)(param_1 + 0x448)) -
               *(int *)(iVar2 + *(int *)(param_1 + 0x448));
  param_2[9] = *(int *)(*(int *)(param_1 + 0x454) * 4 + *(int *)(param_1 + 0x44c)) -
               *(int *)(iVar2 + *(int *)(param_1 + 0x44c));
  return;
}



//==== 005ed184  ns=Global  size=0x21c
// sig: undefined FUN_005ed184(void)
// callers(0): 
// callees(2): 005d0140 libc::memset; 005f5090 FUN_005f5090

void FUN_005ed184(undefined4 *param_1,undefined4 *param_2)

{
  int iVar1;
  int iVar2;
  ulonglong uVar3;
  
  if ((param_1 != (undefined4 *)0x0) && (param_2 != (undefined4 *)0x0)) {
    iVar1 = FUN_005f5090();
    iVar2 = param_1[0x11c];
    if (iVar2 - 1U < 0xfffffffe) {
      param_1[0x11c] = 0;
      param_1[0x126] = param_1[0x126] + (iVar1 - iVar2);
    }
    libc::memset(param_2,0,0x7c);
    param_2[5] = param_1[5];
    param_2[6] = param_1[6];
    param_2[0xb] = param_1[0x131];
    param_2[0xc] = param_1[0x11b];
    param_2[3] = param_1[0x128];
    param_2[4] = param_1[0x129];
    param_2[8] = param_1[2];
    param_2[9] = param_1[0x118];
    iVar2 = FUN_005f5090();
    param_2[2] = iVar2 - param_1[0x119];
    param_2[7] = param_1[0x127];
    param_2[0x10] = param_1[0x125];
    param_2[0xf] = param_1[0x124];
    param_2[0xd] = param_1[0x126];
    param_2[0x1a] = param_2[0x1a] + param_1[0x11a];
    param_2[0x1b] = param_1[0x116];
    if ((uint)param_1[0x78] < 1000) {
      param_2[0x13] = param_1[0x76] * (int)(1000 / (ulonglong)(param_1[0x78] + 1));
    }
    else {
      param_2[0x13] =
           (int)(((ulonglong)(uint)param_1[0x76] * 1000) / (ulonglong)(uint)param_1[0x78]);
    }
    param_2[0xe] = param_1[0x79];
    param_2[0x11] = param_1[0x7a];
    param_2[0x12] = param_1[0x7b];
    uVar3 = (ulonglong)(uint)param_1[10] - ((ulonglong)*(uint *)param_1[0x56] & 0xfffffffe);
    param_2[0x18] =
         (int)(((uVar3 & 0xffffffff) * (ulonglong)(uint)param_1[0x128]) /
              ((ulonglong)(uint)param_1[0x129] * (ulonglong)(uint)param_1[2]));
    param_2[0x19] = (int)((uVar3 & 0xffffffff) / (ulonglong)(uint)param_1[2]);
    param_2[0x1d] = param_1[0x32];
    param_2[0x1e] = param_1[0x33] + 1;
    *param_2 = *param_1;
    param_2[1] = param_1[1];
    param_2[0x14] = param_1[0x120];
    param_2[0x15] = param_1[0x122];
    param_2[0x16] = param_1[0x121];
    param_2[0x17] = param_1[0x123];
    param_2[0x1b] = param_1[0x7c];
    param_2[0x1c] = param_1[0x7d];
  }
  return;
}



//==== 005ed3a0  ns=Global  size=0x4f4
// sig: undefined FUN_005ed3a0(void)
// callers(0): 
// callees(0): 

void FUN_005ed3a0(int param_1,int param_2,int param_3,int param_4,uint param_5)

{
  bool bVar1;
  undefined4 uVar2;
  float fVar3;
  float fVar4;
  undefined4 uVar5;
  undefined4 *puVar6;
  uint uVar9;
  ulonglong uVar7;
  longlong lVar8;
  longlong lVar10;
  longlong lVar11;
  ulonglong uVar12;
  int iVar13;
  int *piVar14;
  uint uVar15;
  int iVar16;
  float *pfVar17;
  int iVar18;
  longlong lVar19;
  longlong lVar20;
  ulonglong uVar21;
  ulonglong uVar22;
  float local_a0 [8];
  float local_80 [16];
  longlong local_40;
  
  fVar3 = DAT_0071a460;
  if (param_1 == 0) {
    return;
  }
  uVar15 = *(uint *)(param_1 + 0x124);
  if (uVar15 == 0) {
    return;
  }
  if ((int)uVar15 < 1) {
    return;
  }
  piVar14 = *(int **)(param_1 + 0xec);
  uVar21 = (ulonglong)uVar15;
  iVar18 = 0;
  uVar15 = 0;
  if (*(int *)(*piVar14 * 4 + *(int *)(param_1 + 0x178)) != param_2) {
    do {
      piVar14 = piVar14 + 1;
      uVar15 = uVar15 + 1;
      uVar21 = uVar21 - 1;
      if (uVar21 == 0) {
        return;
      }
    } while (*(int *)(*piVar14 * 4 + *(int *)(param_1 + 0x178)) != param_2);
    if (uVar15 == 0xffffffff) {
      return;
    }
    iVar18 = uVar15 * 0x200 + (uVar15 & 0x1ffffff) * -0x80;
  }
  iVar16 = *(int *)(param_1 + 0x154);
  if (*(int *)(iVar18 + iVar16 + 0x17c) == 0) {
    return;
  }
  if (param_5 < 9) {
    if (param_4 != 0) goto LAB_005ed4b0;
LAB_005ed6a4:
    bVar1 = param_5 == 0;
    if (bVar1) goto LAB_005ed858;
    uVar21 = (ulonglong)param_5;
    pfVar17 = local_a0;
    do {
      *pfVar17 = 1.0;
      uVar21 = uVar21 - 1;
      pfVar17 = pfVar17 + 1;
    } while (uVar21 != 0);
  }
  else {
    param_5 = 8;
    if (param_4 == 0) goto LAB_005ed6a4;
LAB_005ed4b0:
    bVar1 = param_5 == 0;
    if (bVar1) {
LAB_005ed858:
      local_a0[0] = 1.0;
      goto LAB_005ed520;
    }
    uVar21 = (ulonglong)param_5;
    iVar16 = 0;
    do {
      piVar14 = (int *)(iVar16 + param_4);
      pfVar17 = (float *)((int)local_a0 + iVar16);
      iVar16 = iVar16 + 4;
      local_40 = (longlong)*piVar14;
      fVar4 = DAT_0071a464;
      if (*piVar14 < 0x10000) {
        fVar4 = (float)local_40 * fVar3;
      }
      *pfVar17 = fVar4;
      uVar21 = uVar21 - 1;
    } while (uVar21 != 0);
  }
  iVar16 = *(int *)(param_1 + 0x154);
LAB_005ed520:
  local_80[0xf] = 0.0;
  local_80[0] = 0.0;
  local_80[1] = 0.0;
  local_80[2] = 0.0;
  local_80[3] = 0.0;
  local_80[4] = 0.0;
  local_80[5] = 0.0;
  local_80[6] = 0.0;
  local_80[7] = 0.0;
  local_80[8] = 0.0;
  local_80[9] = 0.0;
  local_80[10] = 0.0;
  local_80[0xb] = 0.0;
  local_80[0xc] = 0.0;
  local_80[0xd] = 0.0;
  local_80[0xe] = 0.0;
  uVar15 = *(uint *)(iVar18 + iVar16 + 0x28);
  uVar9 = uVar15 ^ 2;
  uVar21 = (ulonglong)uVar15 - 1;
  uVar15 = (int)uVar9 >> 0x1f;
  uVar15 = ((uVar15 ^ uVar9) - uVar15) - 1 >> 0x1f;
  if (param_3 == 0) {
    lVar8 = 0;
    lVar19 = 0;
    lVar11 = 0;
    lVar20 = 0;
    lVar10 = 0;
    if (1 < param_5) {
      lVar8 = 1;
      lVar11 = 1;
      lVar10 = 1;
      if (4 < param_5) {
        lVar19 = 4;
        lVar11 = 4;
        lVar20 = 4;
        lVar10 = 4;
        if (param_5 != 5) {
          lVar11 = 5;
          lVar10 = 5;
          if (param_5 != 6) {
            lVar20 = 6;
            lVar10 = 7;
            if (param_5 == 7) {
              lVar10 = 6;
            }
          }
        }
      }
    }
    local_80[0] = local_a0[0];
    *(undefined4 *)((int)local_80 + (int)((uVar21 + (uint)(1 << uVar15) & 0xffffffff) << 2)) =
         *(undefined4 *)((int)local_a0 + (int)(lVar8 << 2));
    if ((int)uVar21 == 1) {
      local_a0[2] = local_a0[2] * DAT_0071a468;
      local_a0[3] = local_a0[3] * DAT_0071a468;
      local_80[5] = local_a0[2];
      local_80[6] = local_a0[3];
    }
    uVar2 = *(undefined4 *)((int)local_a0 + (int)(lVar11 << 2));
    fVar3 = *(float *)((int)local_a0 + (int)(lVar19 << 2));
    fVar4 = *(float *)((int)local_a0 + (int)(lVar20 << 2));
    uVar5 = *(undefined4 *)((int)local_a0 + (int)(lVar10 << 2));
    local_80[2 << uVar15] = local_a0[2];
    *(float *)((int)local_80 + (int)((uVar21 + (uint)(3 << uVar15) & 0xffffffff) << 2)) =
         local_a0[3];
    local_80[4 << uVar15] = fVar3;
    *(undefined4 *)((int)local_80 + (int)((uVar21 + (uint)(5 << uVar15) & 0xffffffff) << 2)) = uVar2
    ;
    local_80[6 << uVar15] = fVar4;
    *(undefined4 *)((int)local_80 + (int)((uVar21 + (uint)(7 << uVar15) & 0xffffffff) << 2)) = uVar5
    ;
  }
  else if (!bVar1) {
    uVar22 = (ulonglong)param_5;
    iVar13 = 0;
    uVar12 = 0;
    do {
      piVar14 = (int *)(iVar13 + param_3);
      uVar7 = uVar21 & uVar12;
      puVar6 = (undefined4 *)((int)local_a0 + iVar13);
      uVar12 = uVar12 + 1;
      iVar13 = iVar13 + 4;
      *(undefined4 *)((int)local_80 + (int)(((uint)(*piVar14 << uVar15) + uVar7 & 0xffffffff) << 2))
           = *puVar6;
      uVar22 = uVar22 - 1;
    } while (uVar22 != 0);
  }
  uVar15 = *(uint *)(param_1 + 0x4e8);
  if ((uVar15 == 0) || (7 < uVar15)) {
    (*(code *)**(undefined4 **)(iVar18 + iVar16 + 0x17c))(iVar18 + iVar16,local_80,8);
  }
  else {
    (*(code *)**(undefined4 **)(iVar18 + iVar16 + 0x17c))(iVar18 + iVar16,local_80,uVar15);
  }
  return;
}



//==== 005ed898  ns=Global  size=0xfc
// sig: undefined FUN_005ed898(void)
// callers(2): 004d5310 FUN_004d5310; 004d5448 FUN_004d5448
// callees(0): 

void FUN_005ed898(int param_1,int param_2,undefined4 param_3)

{
  undefined4 *puVar1;
  int iVar2;
  int *piVar3;
  uint uVar4;
  ulonglong uVar5;
  
  if (param_1 != 0) {
    uVar4 = *(uint *)(param_1 + 0x124);
    if ((uVar4 != 0) && (0 < (int)uVar4)) {
      piVar3 = *(int **)(param_1 + 0xec);
      uVar5 = (ulonglong)uVar4;
      iVar2 = 0;
      uVar4 = 0;
      if (*(int *)(*piVar3 * 4 + *(int *)(param_1 + 0x178)) != param_2) {
        do {
          piVar3 = piVar3 + 1;
          uVar4 = uVar4 + 1;
          uVar5 = uVar5 - 1;
          if (uVar5 == 0) {
            return;
          }
        } while (*(int *)(*piVar3 * 4 + *(int *)(param_1 + 0x178)) != param_2);
        if (uVar4 == 0xffffffff) {
          return;
        }
        iVar2 = uVar4 * 0x200 + (uVar4 & 0x1ffffff) * -0x80;
      }
      iVar2 = iVar2 + *(int *)(param_1 + 0x154);
      puVar1 = *(undefined4 **)(iVar2 + 0x168);
      if (puVar1 != (undefined4 *)0x0) {
        (*(code *)*puVar1)(iVar2,param_3);
        return;
      }
    }
  }
  return;
}



//==== 005ed994  ns=Global  size=0x94
// sig: undefined FUN_005ed994(void)
// callers(0): 
// callees(1): 005fc190 FUN_005fc190

undefined4 FUN_005ed994(int param_1,undefined4 param_2)

{
  undefined4 uVar1;
  
  uVar1 = 0xffffffff;
  if (param_1 != 0) {
    if (*(undefined4 **)(param_1 + 0x1a8) != (undefined4 *)0x0) {
      uVar1 = (*(code *)**(undefined4 **)(param_1 + 0x1a8))(param_1 + 400,param_2);
      if (*(int *)(PTR_DAT_0071a40c + 0x1ac) != 0) {
        FUN_005fc190(PTR_DAT_0071a40c + 0x1b0,1);
      }
    }
  }
  return uVar1;
}



//==== 005eda28  ns=Global  size=0x474
// sig: undefined FUN_005eda28(void)
// callers(3): 005efeb0 FUN_005efeb0; 005f0aa0 FUN_005f0aa0; 005f1788 FUN_005f1788
// callees(4): 005eb450 FUN_005eb450; 005ebac0 FUN_005ebac0; 005f5090 FUN_005f5090; 005fc190 FUN_005fc190
// strings: 00661db8: 'ratemem' | 00661d88: 'Bink %d/%s/%s (%s)' | 00661db0: 'Size' (raw) | 00661da0: 'IO buffer' | 00661dc0: 'In Use' | 00661dc8: 'Bink %d/%s/%s' | 00661dd8: 'Percent Full' | 00661de8: 'Bink %d/%s (%s)' | 00661df8: 'Data rate'

void FUN_005eda28(int param_1,longlong param_2)

{
  bool bVar1;
  uint *puVar2;
  uint uVar3;
  uint uVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  int iVar8;
  int iVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  int iVar12;
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
  iVar9 = (int)param_2;
  bVar1 = iVar9 == 0;
  if (bVar1) {
    iVar9 = 1;
    iVar12 = 0;
  }
  else {
    iVar12 = (int)((param_2 - 1U & 0x3fffffff) << 2);
    bVar1 = (int)(param_2 - 1U) == 0;
  }
  *(undefined4 *)(param_1 + 0x4bc) = 0;
  if ((*(int *)(param_1 + 0x124) != 0) && (*(int *)(*(int *)(param_1 + 0x154) + 0x4c) == 1)) {
    FUN_005ebac0(param_1);
  }
  *(undefined4 *)(param_1 + 0x10) = *(undefined4 *)(param_1 + 0xc);
  FUN_005eb450(param_1);
  if (bVar1) {
    iVar8 = FUN_005f5090();
    if (*(int *)(param_1 + 0x4b4) == 0) {
      *(int *)(param_1 + 0x4b4) = iVar8;
    }
    else if (300000 < (uint)(iVar8 - *(int *)(param_1 + 0x4b4))) {
      *(int *)(param_1 + 0x4b4) = iVar8;
      *(undefined4 *)(param_1 + 0x4b8) = 1;
    }
  }
  puVar2 = *(uint **)(param_1 + 0x158);
  *(int *)(param_1 + 0x18c) = iVar9;
  uVar3 = *(uint *)(iVar12 + (int)puVar2);
  uVar4 = uVar3 & 0xfffffffe;
  *(uint *)(param_1 + 0x188) = uVar4;
  *(uint *)(param_1 + 0x120) = *(uint *)(iVar12 + (int)puVar2) & 1;
  iVar12 = (*(uint *)((int)puVar2 + iVar12 + 4) & 0xfffffffe) - uVar4;
  *(int *)(param_1 + 0x11c) = iVar12;
  if (*(int *)(param_1 + 0x17c) == 0) {
    *(uint *)(param_1 + 0xe8) =
         (*(int *)(param_1 + 0x4e0) + 0x100U & 0xffffff80) - (0x80 - (uVar3 & 0x7e));
    puVar5 = PTR_DAT_0071a40c;
    if ((uVar4 < *(uint *)(param_1 + 0x4d8)) ||
       (*(uint *)(param_1 + 0x4d8) + *(int *)(param_1 + 0x1fc) < uVar4 + iVar12)) {
      *(undefined4 *)(param_1 + 0x118) = 1;
      if (*(int *)(puVar5 + 0x1ac) != 0) {
        FUN_005fc190(puVar5 + 0x1b0,1);
      }
    }
    else {
      *(undefined4 *)(param_1 + 0x118) = 1;
      FUN_005eb450(param_1);
    }
  }
  else {
    *(uint *)(param_1 + 0xe8) = *(int *)(param_1 + 0x17c) + (uVar4 - (*puVar2 & 0xfffffffe));
  }
  if ((*(int *)(param_1 + 0x124) != 0) && (*(int *)(*(int *)(param_1 + 0x154) + 0x4c) == 1)) {
    FUN_005ebac0(param_1);
  }
  puVar7 = PTR_s_IO_buffer_0071a470;
  puVar6 = PTR_DAT_0071a414;
  puVar5 = PTR_DAT_0071a40c;
  iVar12 = *(int *)PTR_DAT_0071a414;
  if (iVar12 != 0) {
    uVar11 = (ulonglong)*(uint *)(param_1 + 0x450) - 1;
    if ((ulonglong)*(uint *)(param_1 + 0xc) < (uVar11 & 0xffffffff)) {
      uVar11 = (ulonglong)*(uint *)(param_1 + 0xc) - 1;
      iVar8 = (int)uVar11;
    }
    else {
      iVar8 = (int)uVar11;
    }
    if (iVar8 == 0) {
      uVar11 = 1;
    }
    (*(code *)**(undefined4 **)(iVar12 + 0x84))((double)*(uint *)(param_1 + 0x1f8),iVar12,1);
    iVar12 = *(int *)puVar6;
    if (iVar12 != 0) {
      (*(code *)**(undefined4 **)(iVar12 + 0x84))((double)*(uint *)(param_1 + 0x1fc),iVar12,1);
      iVar12 = *(int *)puVar6;
      if (iVar12 != 0) {
        (*(code *)**(undefined4 **)(iVar12 + 0x84))
                  ((double)((float)*(uint *)(param_1 + 0x1fc) /
                           ((float)*(uint *)(param_1 + 0x1f8) + DAT_0071a490)),iVar12,5,
                   *(undefined4 **)(iVar12 + 0x84),puVar5 + 0x604,PTR_s_Bink__d__s__s_0071a480,
                   *(undefined4 *)(param_1 + 0x160),puVar7,PTR_s_Percent_Full_0071a484);
      }
    }
    uVar3 = *(uint *)(param_1 + 0xc);
    if (((int)uVar11 < (int)uVar3) && (iVar12 = *(int *)puVar6, iVar12 != 0)) {
      uVar10 = (uVar11 & 0xffffffff) * (ulonglong)*(uint *)(param_1 + 0x4a4);
      (*(code *)**(undefined4 **)(iVar12 + 0x84))
                ((double)((((ulonglong)*(uint *)(uVar3 * 4 + *(int *)(param_1 + 0x158)) -
                           (ulonglong)
                           *(uint *)((int)((uVar3 - uVar11 & 0xffffffff) << 2) +
                                    *(int *)(param_1 + 0x158))) *
                          (ulonglong)*(uint *)(param_1 + 0x4a0)) / uVar10 & 0xffffffff),iVar12,1,
                 uVar10,puVar5 + 0x608,PTR_s_Bink__d__s___s__0071a488,
                 *(undefined4 *)(param_1 + 0x160),PTR_s_Data_rate_0071a48c,PTR_s_ratemem_0071a478);
    }
  }
  *(int *)(param_1 + 0xc) = iVar9;
  return;
}



//==== 005edea0  ns=Global  size=0x280
// sig: undefined FUN_005edea0(void)
// callers(1): 004d59e8 FUN_004d59e8
// callees(2): 005ebac0 FUN_005ebac0; 005f5090 FUN_005f5090

undefined4 FUN_005edea0(int param_1)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  int iVar5;
  int iVar6;
  ulonglong uVar4;
  
  if ((param_1 != 0) &&
     (((*(int *)(param_1 + 0x460) != 0 || (*(int *)(param_1 + 0x108) != 0)) &&
      (*(int *)(param_1 + 0x1c) == 0)))) {
    iVar6 = *(int *)(param_1 + 0x474);
    if (iVar6 == 0) {
      iVar6 = FUN_005f5090();
      iVar2 = *(int *)(param_1 + 0x124);
      *(int *)(param_1 + 0x474) = iVar6;
      *(undefined4 *)(param_1 + 0x4cc) = 0;
      *(int *)(param_1 + 0x478) = *(int *)(param_1 + 0x460) + -1;
    }
    else {
      iVar2 = *(int *)(param_1 + 0x124);
    }
    if ((iVar2 != 0) && (*(int *)(*(int *)(param_1 + 0x154) + 0x4c) == 1)) {
      FUN_005ebac0(param_1);
    }
    iVar5 = FUN_005f5090();
    iVar2 = *(int *)(param_1 + 0x470);
    if (iVar2 - 1U < 0xfffffffe) {
      iVar3 = *(int *)(param_1 + 0x108);
      *(undefined4 *)(param_1 + 0x470) = 0;
      *(int *)(param_1 + 0x498) = *(int *)(param_1 + 0x498) + (iVar5 - iVar2);
    }
    else {
      iVar3 = *(int *)(param_1 + 0x108);
    }
    if ((iVar3 != 0) ||
       ((bVar1 = *(int *)(param_1 + 0x124) == 0, !bVar1 && (*(int *)(param_1 + 0x110) == 0)))) {
LAB_005edf2c:
      if (((*(int *)(param_1 + 0x17c) == 0) && ((*(uint *)(param_1 + 0x20) & 0x8000000) != 0)) &&
         ((*(undefined4 **)(param_1 + 0x1a8) == (undefined4 *)0x0 ||
          (uVar4 = (*(code *)**(undefined4 **)(param_1 + 0x1a8))(param_1 + 400,0), (uVar4 & 1) == 0)
          ))) {
        (*(code *)**(undefined4 **)(param_1 + 0x1a0))(param_1 + 400);
        return 1;
      }
      return 1;
    }
    if (*(uint *)(param_1 + 0x14) != 0) {
      iVar6 = (iVar5 - iVar6) -
              (int)(((((ulonglong)*(uint *)(param_1 + 0x460) - (ulonglong)*(uint *)(param_1 + 0x478)
                      & 0xffffffff) * (ulonglong)*(uint *)(param_1 + 0x18) * 1000) /
                     (ulonglong)*(uint *)(param_1 + 0x14) & 0xffffffff) *
                    (ulonglong)*(uint *)(*(int *)(param_1 + 0x154) + 0x3c) >> 0x10);
      if (iVar6 < 0) goto LAB_005edf2c;
      if ((bVar1) && (*(int *)(param_1 + 0x47c) << 1 < iVar6)) {
        *(undefined4 *)(param_1 + 0x474) = 0;
        return 0;
      }
    }
  }
  return 0;
}



//==== 005ee120  ns=Global  size=0x288
// sig: undefined FUN_005ee120(void)
// callers(1): 005f0370 FUN_005f0370
// callees(2): 005ebac0 FUN_005ebac0; 005f5090 FUN_005f5090

undefined8 FUN_005ee120(int param_1,uint param_2)

{
  int iVar1;
  uint uVar2;
  undefined4 uVar3;
  uint uVar4;
  ulonglong uVar5;
  
  iVar1 = *(int *)(param_1 + 0xd0);
  if (iVar1 != 0) {
    uVar2 = *(uint *)(iVar1 + 0x14);
    if (*(int *)(iVar1 + ((int)((CONCAT44(uVar2,uVar2) ^ 0x100000001) << 6) -
                         (int)((CONCAT44(uVar2,uVar2) ^ 0x100000001) << 4)) + 0x1c) != 0) {
      *(uint *)(iVar1 + 0x14) = uVar2 ^ 1;
    }
  }
  uVar2 = *(uint *)(param_1 + 0x454);
  uVar5 = (ulonglong)uVar2 - 1;
  *(int *)(param_1 + 0x454) = (int)uVar5;
  if ((int)uVar5 < 0) {
    uVar5 = (ulonglong)*(uint *)(param_1 + 0x450) - 1;
    *(int *)(param_1 + 0x454) = (int)uVar5;
  }
  if (*(int *)(param_1 + 0x4b0) != 0) {
    uVar4 = param_2 - *(int *)(param_1 + 0x4b0);
    if (*(uint *)(param_1 + 0x480) < uVar4) {
      *(uint *)(param_1 + 0x488) = *(uint *)(param_1 + 0x480);
      *(undefined4 *)(param_1 + 0x48c) = *(undefined4 *)(param_1 + 0x484);
      *(uint *)(param_1 + 0x480) = uVar4;
      *(undefined4 *)(param_1 + 0x484) = *(undefined4 *)(param_1 + 0x4ac);
    }
    else if (*(uint *)(param_1 + 0x488) < param_2) {
      *(uint *)(param_1 + 0x488) = uVar4;
      *(undefined4 *)(param_1 + 0x48c) = *(undefined4 *)(param_1 + 0x4ac);
    }
  }
  *(uint *)(param_1 + 0x4b0) = param_2;
  *(uint *)((int)((uVar5 & 0xffffffff) << 2) + *(int *)(param_1 + 0x434)) = param_2;
  *(undefined4 *)(*(int *)(param_1 + 0x454) * 4 + *(int *)(param_1 + 0x43c)) =
       *(undefined4 *)(param_1 + 0x490);
  *(undefined4 *)(*(int *)(param_1 + 0x454) * 4 + *(int *)(param_1 + 0x438)) =
       *(undefined4 *)(param_1 + 0x494);
  *(undefined4 *)(*(int *)(param_1 + 0x454) * 4 + *(int *)(param_1 + 0x440)) =
       *(undefined4 *)(param_1 + 0x498);
  *(undefined4 *)(*(int *)(param_1 + 0x454) * 4 + *(int *)(param_1 + 0x444)) =
       *(undefined4 *)(param_1 + 0x1e4);
  *(undefined4 *)(*(int *)(param_1 + 0x454) * 4 + *(int *)(param_1 + 0x448)) =
       *(undefined4 *)(param_1 + 0x1e8);
  *(undefined4 *)(*(int *)(param_1 + 0x454) * 4 + *(int *)(param_1 + 0x44c)) =
       *(undefined4 *)(param_1 + 0x1ec);
  if (*(int *)(param_1 + 0x464) == 0) {
    *(uint *)(uVar2 * 4 + *(int *)(param_1 + 0x434)) =
         param_2 - (int)(((ulonglong)*(uint *)(param_1 + 0x4a4) * 1000) /
                        (ulonglong)*(uint *)(param_1 + 0x4a0));
    *(undefined4 *)(param_1 + 0x1ec) = 0;
    *(uint *)(param_1 + 0x464) = param_2;
    *(undefined4 *)(param_1 + 0x1e8) = 0;
  }
  else if ((*(int *)(param_1 + 0x124) != 0) && (*(int *)(*(int *)(param_1 + 0x154) + 0x4c) == 1)) {
    FUN_005ebac0(param_1);
  }
  *(int *)(param_1 + 0xe0) = *(int *)(param_1 + 0xdc);
  if (*(int *)(param_1 + 0xdc) != 0) {
    *(undefined4 *)(param_1 + 0x3c) = 0xffffffff;
  }
  *(int *)(param_1 + 0x460) = *(int *)(param_1 + 0x460) + 1;
  if (*(int *)(param_1 + 0x474) == 0) {
    uVar3 = FUN_005f5090();
    *(undefined4 *)(param_1 + 0x474) = uVar3;
    *(undefined4 *)(param_1 + 0x4cc) = 0;
    *(int *)(param_1 + 0x478) = *(int *)(param_1 + 0x460) + -1;
  }
  *(undefined4 *)(param_1 + 0x470) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x1dc) = 0;
  *(undefined4 *)(param_1 + 0x10) = *(undefined4 *)(param_1 + 0xc);
  *(undefined4 *)(param_1 + 0x34) = *(undefined4 *)(param_1 + 0x128);
  *(undefined4 *)(param_1 + 0x4ac) = *(undefined4 *)(param_1 + 0xc);
  return 0;
}



//==== 005ee3a8  ns=Global  size=0x28c
// sig: undefined FUN_005ee3a8(void)
// callers(1): 005ee638 FUN_005ee638
// callees(5): 005eb0f8 FUN_005eb0f8; 005eb2e0 FUN_005eb2e0; 005ebac0 FUN_005ebac0; 005f5090 FUN_005f5090; 005fc190 FUN_005fc190
// strings: 00661cb8: 'Bink instance sound mutex' | 00661c20: 'C:\\devel\\projects\\bink\\src\\sdk\\decode\\binkread.c'

undefined4 FUN_005ee3a8(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  bool bVar3;
  int iVar4;
  int iVar5;
  undefined4 uVar6;
  uint uVar7;
  
  if (param_1 == 0) {
    return 0;
  }
  iVar4 = FUN_005f5090();
  iVar5 = *(int *)(param_1 + 0x470);
  if (iVar5 - 1U < 0xfffffffe) {
    iVar2 = *(int *)(param_1 + 0x108);
    iVar1 = *(int *)(param_1 + 0x124);
    *(undefined4 *)(param_1 + 0x470) = 0;
    *(int *)(param_1 + 0x498) = *(int *)(param_1 + 0x498) + (iVar4 - iVar5);
    *(int *)(param_1 + 0x108) = param_2;
    *(undefined4 *)(param_1 + 0x4b0) = 0;
  }
  else {
    iVar1 = *(int *)(param_1 + 0x124);
    iVar2 = *(int *)(param_1 + 0x108);
    *(undefined4 *)(param_1 + 0x4b0) = 0;
    *(int *)(param_1 + 0x108) = param_2;
  }
  if (iVar1 != 0) {
    iVar5 = *(int *)(param_1 + 0x154);
    if ((*(int *)(iVar5 + 0x4c) < 1) || (*(int *)(iVar5 + 0x4c) == 2)) {
      FUN_005eb0f8(param_1 + 0x3b0,PTR_s_Bink_instance_sound_mutex_0071a438,
                   PTR_s_C__devel_projects_bink_src_sdk_d_0071a424,0x287);
      if (*(int *)(param_1 + 0x124) == 0) goto LAB_005ee498;
      iVar5 = *(int *)(param_1 + 0x154);
    }
    uVar7 = 0;
    iVar4 = 0;
    while( true ) {
      iVar5 = iVar4 + iVar5;
      uVar7 = uVar7 + 1;
      iVar4 = iVar4 + 0x180;
      (*(code *)**(undefined4 **)(iVar5 + 0x170))(iVar5,param_2);
      if (*(uint *)(param_1 + 0x124) <= uVar7) break;
      iVar5 = *(int *)(param_1 + 0x154);
    }
  }
LAB_005ee498:
  iVar5 = FUN_005f5090();
  if (param_2 == 0) {
    bVar3 = true;
    if (iVar2 == 0) goto LAB_005ee570;
  }
  else if (iVar2 == 0) {
    if (*(int *)(param_1 + 0x474) == 0) {
      bVar3 = false;
      *(undefined4 *)(param_1 + 0x4cc) = 0;
    }
    else {
      bVar3 = false;
      *(int *)(param_1 + 0x4cc) = iVar5 - *(int *)(param_1 + 0x474);
    }
  }
  else {
LAB_005ee570:
    bVar3 = false;
  }
  if (*(int *)(param_1 + 0x124) != 0) {
    iVar4 = *(int *)(param_1 + 0x154);
    if ((*(int *)(iVar4 + 0x4c) < 1) || (*(int *)(iVar4 + 0x4c) == 2)) {
      FUN_005eb2e0(param_1 + 0x3b0,PTR_s_Bink_instance_sound_mutex_0071a438,
                   PTR_s_C__devel_projects_bink_src_sdk_d_0071a424,0x28d);
      if (*(int *)(param_1 + 0x124) == 0) goto LAB_005ee50c;
      iVar4 = *(int *)(param_1 + 0x154);
    }
    if (*(int *)(iVar4 + 0x4c) == 1) {
      FUN_005ebac0(param_1);
    }
  }
LAB_005ee50c:
  if (bVar3) {
    *(int *)(param_1 + 0x474) = iVar5 - *(int *)(param_1 + 0x4cc);
  }
  if (*(int *)(PTR_DAT_0071a40c + 0x1ac) == 0) {
    uVar6 = *(undefined4 *)(param_1 + 0x108);
  }
  else {
    FUN_005fc190(PTR_DAT_0071a40c + 0x1b0,1);
    uVar6 = *(undefined4 *)(param_1 + 0x108);
  }
  return uVar6;
}



//==== 005ee638  ns=Global  size=0x5d4
// sig: undefined FUN_005ee638(void)
// callers(4): 004d4c88 FUN_004d4c88; 004d5530 FUN_004d5530; 004d59e8 FUN_004d59e8; 004d5d0c FUN_004d5d0c
// callees(9): 005d0140 libc::memset; 005eb0f8 FUN_005eb0f8; 005eb2e0 FUN_005eb2e0; 005eb650 FUN_005eb650; 005ec0e0 FUN_005ec0e0; 005ec1d4 FUN_005ec1d4; 005ee3a8 FUN_005ee3a8; 005f516c FUN_005f516c; 005fc490 FUN_005fc490
// strings: 00661d08: 'Bink list mutex' | 00661cb8: 'Bink instance sound mutex' | 00661c20: 'C:\\devel\\projects\\bink\\src\\sdk\\decode\\binkread.c' | 00661cf0: 'Bink global sound mutex' | 00661cd8: 'Bink global IO mutex' | 00661c08: 'Bink instance io mutex'

void FUN_005ee638(int param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  
  if (param_1 != 0) {
    *(undefined4 *)(param_1 + 300) = 1;
    FUN_005ee3a8(param_1,1);
    puVar1 = PTR_DAT_0071a40c;
    if (*(undefined4 **)(PTR_DAT_0071a40c + 0x60c) != (undefined4 *)0x0) {
      (*(code *)**(undefined4 **)(PTR_DAT_0071a40c + 0x60c))(param_1);
    }
    puVar4 = PTR_s_Bink_list_mutex_0071a444;
    puVar2 = PTR_s_C__devel_projects_bink_src_sdk_d_0071a424;
    if (*(int *)(param_1 + 0x164) != 0) {
      FUN_005eb0f8(puVar1 + 0x54c,PTR_s_Bink_list_mutex_0071a444,
                   PTR_s_C__devel_projects_bink_src_sdk_d_0071a424,0x11a);
      if (param_1 == *(int *)(puVar1 + 0x5ec)) {
        *(undefined4 *)(puVar1 + 0x5ec) = *(undefined4 *)(*(int *)(puVar1 + 0x5ec) + 0xe4);
      }
      else {
        iVar7 = *(int *)(puVar1 + 0x5ec);
        if (iVar7 != 0) {
          for (iVar5 = *(int *)(iVar7 + 0xe4); param_1 != iVar5; iVar5 = *(int *)(iVar5 + 0xe4)) {
            if (iVar5 == 0) goto LAB_005eeaf8;
            iVar7 = iVar5;
          }
          *(undefined4 *)(iVar7 + 0xe4) = *(undefined4 *)(param_1 + 0xe4);
        }
      }
LAB_005eeaf8:
      FUN_005eb2e0(puVar1 + 0x54c,puVar4,puVar2,0x12d);
      *(undefined4 *)(param_1 + 0x164) = 0;
    }
    puVar4 = PTR_s_Bink_list_mutex_0071a444;
    puVar2 = PTR_s_Bink_instance_io_mutex_0071a420;
    if ((*(uint *)(param_1 + 0x20) & 0x8000000) == 0) {
      FUN_005eb650(puVar1 + 0x54c,PTR_s_Bink_list_mutex_0071a444,param_1 + 0x330,
                   PTR_s_Bink_instance_io_mutex_0071a420);
      if (param_1 == *(int *)(puVar1 + 0x610)) {
        *(undefined4 *)(puVar1 + 0x610) = 0;
      }
      puVar3 = PTR_s_C__devel_projects_bink_src_sdk_d_0071a424;
      FUN_005eb2e0(param_1 + 0x330,puVar2,PTR_s_C__devel_projects_bink_src_sdk_d_0071a424,0xd02);
      FUN_005eb2e0(puVar1 + 0x54c,puVar4,puVar3,0xd03);
      iVar7 = *(int *)(puVar1 + 0x610);
    }
    else {
      iVar7 = *(int *)(puVar1 + 0x610);
    }
    if (param_1 == iVar7) {
      *(undefined4 *)(puVar1 + 0x610) = 0;
    }
    puVar4 = PTR_s_Bink_list_mutex_0071a444;
    puVar2 = PTR_s_Bink_instance_sound_mutex_0071a438;
    if ((*(int *)(param_1 + 0x124) == 0) ||
       ((iVar7 = *(int *)(*(int *)(param_1 + 0x154) + 0x4c), 0 < iVar7 && (iVar7 != 2)))) {
      iVar7 = *(int *)(puVar1 + 0x548);
    }
    else {
      FUN_005eb650(puVar1 + 0x54c,PTR_s_Bink_list_mutex_0071a444,param_1 + 0x3b0,
                   PTR_s_Bink_instance_sound_mutex_0071a438);
      puVar3 = PTR_s_C__devel_projects_bink_src_sdk_d_0071a424;
      FUN_005eb2e0(param_1 + 0x3b0,puVar2,PTR_s_C__devel_projects_bink_src_sdk_d_0071a424,0xd0f);
      FUN_005eb2e0(puVar1 + 0x54c,puVar4,puVar3,0xd10);
      iVar7 = *(int *)(puVar1 + 0x548);
    }
    if (iVar7 != 0) {
      FUN_005eb0f8(puVar1 + 0x47c,PTR_s_Bink_global_sound_mutex_0071a440,
                   PTR_s_C__devel_projects_bink_src_sdk_d_0071a424,0xd16);
    }
    if (*(int *)(param_1 + 0x124) != 0) {
      uVar6 = 0;
      iVar7 = 0;
      do {
        uVar6 = uVar6 + 1;
        iVar5 = iVar7 + *(int *)(param_1 + 0x154);
        iVar7 = iVar7 + 0x180;
        (*(code *)**(undefined4 **)(iVar5 + 0x178))(iVar5);
        *(int *)(puVar1 + 0x5dc) = *(int *)(puVar1 + 0x5dc) + -1;
      } while (uVar6 < *(uint *)(param_1 + 0x124));
    }
    if (*(int *)(puVar1 + 0x548) != 0) {
      FUN_005eb2e0(puVar1 + 0x47c,PTR_s_Bink_global_sound_mutex_0071a440,
                   PTR_s_C__devel_projects_bink_src_sdk_d_0071a424,0xd2b);
    }
    if (*(int *)(param_1 + 0x15c) != 0) {
      FUN_005f516c(*(int *)(param_1 + 0x15c));
    }
    if (*(int *)(param_1 + 0x17c) == 0) {
      if (*(int *)(puVar1 + 0x548) != 0) {
        FUN_005eb0f8(puVar1 + 0x3f4,PTR_s_Bink_global_IO_mutex_0071a43c,
                     PTR_s_C__devel_projects_bink_src_sdk_d_0071a424,0xd3b);
      }
      (*(code *)**(undefined4 **)(param_1 + 0x1a4))(param_1 + 400);
      if (*(int *)(puVar1 + 0x548) != 0) {
        FUN_005eb2e0(puVar1 + 0x3f4,PTR_s_Bink_global_IO_mutex_0071a43c,
                     PTR_s_C__devel_projects_bink_src_sdk_d_0071a424,0xd42);
      }
      FUN_005f516c(*(undefined4 *)(param_1 + 0x430));
      uVar6 = *(uint *)(param_1 + 0x20);
    }
    else {
      uVar6 = *(uint *)(param_1 + 0x20);
      if ((uVar6 & 0x4000000) == 0) {
        FUN_005f516c(*(int *)(param_1 + 0x17c));
        uVar6 = *(uint *)(param_1 + 0x20);
      }
    }
    if ((uVar6 & 0x8000000) == 0) {
      FUN_005fc490(param_1 + 0x330);
    }
    FUN_005fc490(param_1 + 0x2b0);
    if ((*(int *)(param_1 + 0x124) != 0) &&
       ((iVar7 = *(int *)(*(int *)(param_1 + 0x154) + 0x4c), iVar7 < 1 || (iVar7 == 2)))) {
      FUN_005fc490(param_1 + 0x3b0);
    }
    if (*(int *)(param_1 + 0x4e4) != 0) {
      FUN_005f516c(*(int *)(param_1 + 0x4e4));
    }
    if (*(int *)(param_1 + 0xd4) != 0) {
      FUN_005f516c(*(int *)(param_1 + 0xd4));
    }
    iVar7 = *(int *)(param_1 + 0xd8);
    if ((iVar7 != 0) && (*(int *)(param_1 + 0xd4) != iVar7)) {
      FUN_005f516c(iVar7);
    }
    puVar4 = PTR_s_Bink_global_sound_mutex_0071a440;
    puVar2 = PTR_s_C__devel_projects_bink_src_sdk_d_0071a424;
    if ((*(int *)(param_1 + 0x124) != 0) && (*(int *)(*(int *)(param_1 + 0x154) + 0x4c) < 1)) {
      uVar6 = *(uint *)(param_1 + 0x20);
      FUN_005eb0f8(puVar1 + 0x47c,PTR_s_Bink_global_sound_mutex_0071a440,
                   PTR_s_C__devel_projects_bink_src_sdk_d_0071a424,0x26c);
      *(int *)(puVar1 + 0x540) = *(int *)(puVar1 + 0x540) + -1;
      if (*(int *)(puVar1 + 0x540) == 0) {
        if ((uVar6 & 0x40) == 0) {
          FUN_005ec1d4();
        }
        else {
          *(undefined4 *)(PTR_DAT_0071a410 + 0x10) = 0xffffffff;
        }
      }
      FUN_005eb2e0(puVar1 + 0x47c,puVar4,puVar2,0x278);
    }
    puVar4 = PTR_s_Bink_global_IO_mutex_0071a43c;
    puVar2 = PTR_s_C__devel_projects_bink_src_sdk_d_0071a424;
    uVar6 = *(uint *)(param_1 + 0x20);
    if ((uVar6 & 0x8000000) == 0) {
      FUN_005eb0f8(puVar1 + 0x3f4,PTR_s_Bink_global_IO_mutex_0071a43c,
                   PTR_s_C__devel_projects_bink_src_sdk_d_0071a424,0x568);
      *(int *)(puVar1 + 0x478) = *(int *)(puVar1 + 0x478) + -1;
      if ((*(int *)(puVar1 + 0x478) == 0) && ((uVar6 & 0x40) == 0)) {
        FUN_005ec0e0();
      }
      FUN_005eb2e0(puVar1 + 0x3f4,puVar4,puVar2,0x56f);
    }
    libc::memset(param_1,0,0x4f0);
    FUN_005f516c(param_1);
  }
  return;
}



//==== 005eec10  ns=Global  size=0xb2c
// sig: undefined FUN_005eec10(void)
// callers(0): 
// callees(4): 005eae28 FUN_005eae28; 005eb0f8 FUN_005eb0f8; 005eb2e0 FUN_005eb2e0; 005fc0f8 FUN_005fc0f8
// strings: 00661e08: 'Bink IO' | 00661c20: 'C:\\devel\\projects\\bink\\src\\sdk\\decode\\binkread.c' | 00661e10: 'No IO to do' | 00661d08: 'Bink list mutex' | 00661e20: 'Waiting for both io mutexes' | 00661c98: 'Bink instance priority io mutex' | 00661c08: 'Bink instance io mutex'

undefined8 FUN_005eec10(void)

{
  bool bVar1;
  undefined *puVar2;
  bool bVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  int iVar10;
  int iVar11;
  ulonglong uVar9;
  int iVar12;
  int iVar13;
  ulonglong uVar14;
  int iVar15;
  byte in_cr0;
  byte in_cr1;
  byte in_cr2;
  byte in_cr3;
  byte unaff_cr4;
  byte in_cr5;
  byte in_cr6;
  byte in_cr7;
  uint uStack00000008;
  
  puVar5 = PTR_DAT_0071a414;
  puVar4 = PTR_DAT_0071a40c;
  uStack00000008 =
       (uint)(in_cr0 & 0xf) << 0x1c | (uint)(in_cr1 & 0xf) << 0x18 | (uint)(in_cr2 & 0xf) << 0x14 |
       (uint)(in_cr3 & 0xf) << 0x10 | (uint)(unaff_cr4 & 0xf) << 0xc | (uint)(in_cr5 & 0xf) << 8 |
       (uint)(in_cr6 & 0xf) << 4 | (uint)(in_cr7 & 0xf);
  iVar13 = *(int *)PTR_DAT_0071a414;
  if (iVar13 != 0) {
    (*(code *)**(undefined4 **)(iVar13 + 0x58))
              (iVar13,0,PTR_DAT_0071a40c + 0x614,PTR_s_Bink_IO_0071a494);
  }
  do {
    iVar13 = *(int *)puVar5;
    if (iVar13 != 0) {
      (*(code *)**(undefined4 **)(iVar13 + 0x50))
                (iVar13,0,0,0,2,PTR_s_C__devel_projects_bink_src_sdk_d_0071a424,0x451,puVar4 + 0x618
                );
    }
    FUN_005fc0f8(puVar4 + 0x1b0,0xffffffff);
    iVar13 = *(int *)puVar5;
    if (iVar13 != 0) {
      (*(code *)**(undefined4 **)(iVar13 + 0x54))
                (iVar13,0,0,PTR_s_C__devel_projects_bink_src_sdk_d_0071a424,0x453);
    }
    do {
      bVar3 = false;
LAB_005eed4c:
      puVar8 = PTR_s_Bink_list_mutex_0071a444;
      puVar7 = PTR_s_C__devel_projects_bink_src_sdk_d_0071a424;
      if ((*(int *)(puVar4 + 0x474) != 0) || (*(int *)(puVar4 + 0x548) == 0)) break;
      FUN_005eb0f8(puVar4 + 0x54c,PTR_s_Bink_list_mutex_0071a444,
                   PTR_s_C__devel_projects_bink_src_sdk_d_0071a424,0x45d);
      iVar13 = *(int *)(puVar4 + 0x610);
      if ((iVar13 == 0) ||
         ((*(int *)(iVar13 + 0x118) == 0 || ((*(uint *)(iVar13 + 0x20) & 0x8000000) != 0)))) {
        iVar10 = 0;
        FUN_005eb2e0(puVar4 + 0x54c,puVar8,puVar7,0x487);
      }
      else {
        iVar10 = *(int *)puVar5;
        if (iVar10 != 0) {
          (*(code *)**(undefined4 **)(iVar10 + 0x50))(iVar10,0,0,0,1,puVar7,0x465,puVar4 + 0x61c);
        }
        puVar2 = PTR_s_Bink_instance_priority_io_mutex_0071a434;
        iVar15 = iVar13 + 0x2b0;
        iVar10 = FUN_005eae28(iVar15,1,PTR_s_Bink_instance_priority_io_mutex_0071a434,puVar7,0x466);
        bVar1 = iVar10 == 0;
        if (!bVar1) {
          iVar10 = FUN_005eae28(iVar13 + 0x330,0,PTR_s_Bink_instance_io_mutex_0071a420,puVar7,0x469)
          ;
          bVar1 = iVar10 == 0;
          if (bVar1) {
            FUN_005eb2e0(iVar15,puVar2,puVar7,0x46b);
          }
        }
        iVar10 = *(int *)puVar5;
        if (iVar10 != 0) {
          (*(code *)**(undefined4 **)(iVar10 + 0x54))(iVar10,0,0,puVar7,0x46d);
        }
        FUN_005eb2e0(puVar4 + 0x54c,puVar8,puVar7,0x471);
        if (bVar1) {
          iVar10 = 1;
        }
        else {
          iVar10 = 1;
          if (*(int *)(iVar13 + 0x118) != 0) {
            if ((*(int *)(iVar13 + 0x1d0) == 0) && (*(int *)(iVar13 + 300) == 0)) {
              iVar10 = (*(code *)**(undefined4 **)(iVar13 + 0x194))
                                 (iVar13 + 400,*(int *)(iVar13 + 0xc) + -1,
                                  *(undefined4 *)(iVar13 + 0x188),*(undefined4 *)(iVar13 + 0xe8),
                                  *(undefined4 *)(iVar13 + 0x11c));
              *(undefined4 *)(iVar13 + 0x118) = 0;
              *(int *)(iVar13 + 0x4d8) = *(int *)(iVar13 + 0x188) + *(int *)(iVar13 + 0x11c);
              if (*(int *)(iVar13 + 0x1d0) != 0) {
                *(undefined4 *)(iVar13 + 0x1c) = 1;
              }
              if (iVar10 != 0) {
                bVar3 = true;
                iVar10 = 0;
                goto LAB_005ef420;
              }
            }
            iVar10 = 0;
          }
LAB_005ef420:
          FUN_005eb2e0(iVar13 + 0x330,PTR_s_Bink_instance_io_mutex_0071a420,puVar7,0x47e);
          FUN_005eb2e0(iVar15,puVar2,puVar7,0x481);
        }
      }
      FUN_005eb0f8(puVar4 + 0x54c,puVar8,puVar7,0x48b);
      puVar2 = PTR_s_Bink_instance_priority_io_mutex_0071a434;
      for (iVar13 = *(int *)(puVar4 + 0x5ec); iVar13 != 0; iVar13 = *(int *)(iVar13 + 0xe4)) {
        iVar15 = iVar10;
        if ((*(int *)(iVar13 + 0x118) != 0) && ((*(uint *)(iVar13 + 0x20) & 0x8000000) == 0)) {
          iVar12 = *(int *)puVar5;
          iVar15 = iVar10 + 1;
          if (iVar12 != 0) {
            (*(code *)**(undefined4 **)(iVar12 + 0x50))(iVar12,0,0,0,1,puVar7,0x496,puVar4 + 0x620);
          }
          iVar12 = iVar13 + 0x2b0;
          iVar11 = FUN_005eae28(iVar12,1,puVar2,puVar7,0x497);
          bVar1 = iVar11 == 0;
          if (!bVar1) {
            iVar11 = FUN_005eae28(iVar13 + 0x330,0,PTR_s_Bink_instance_io_mutex_0071a420,puVar7,
                                  0x49a);
            bVar1 = iVar11 == 0;
            if (bVar1) {
              FUN_005eb2e0(iVar12,puVar2,puVar7,0x49c);
            }
          }
          iVar11 = *(int *)puVar5;
          if (iVar11 != 0) {
            (*(code *)**(undefined4 **)(iVar11 + 0x54))(iVar11,0,0,puVar7,0x49e);
          }
          if (!bVar1) {
            FUN_005eb2e0(puVar4 + 0x54c,puVar8,puVar7,0x4a4);
            if (((*(int *)(iVar13 + 0x118) != 0) && (iVar15 = iVar10, *(int *)(iVar13 + 0x1d0) == 0)
                ) && (*(int *)(iVar13 + 300) == 0)) {
              iVar11 = (*(code *)**(undefined4 **)(iVar13 + 0x194))
                                 (iVar13 + 400,*(int *)(iVar13 + 0xc) + -1,
                                  *(undefined4 *)(iVar13 + 0x188),*(undefined4 *)(iVar13 + 0xe8),
                                  *(undefined4 *)(iVar13 + 0x11c));
              *(undefined4 *)(iVar13 + 0x118) = 0;
              *(int *)(iVar13 + 0x4d8) = *(int *)(iVar13 + 0x188) + *(int *)(iVar13 + 0x11c);
              if (*(int *)(iVar13 + 0x1d0) != 0) {
                *(undefined4 *)(iVar13 + 0x1c) = 1;
              }
              if (iVar11 != 0) {
                bVar3 = true;
                *(int *)(puVar4 + 0x610) = iVar13;
              }
            }
            iVar10 = FUN_005eae28(puVar4 + 0x54c,0,puVar8,puVar7,0x4b0);
            FUN_005eb2e0(iVar13 + 0x330,PTR_s_Bink_instance_io_mutex_0071a420,puVar7,0x4b2);
            FUN_005eb2e0(iVar12,puVar2,puVar7,0x4b5);
            if (iVar10 == 0) goto LAB_005eed4c;
          }
        }
        iVar10 = iVar15;
      }
      puVar2 = puVar4 + 0x54c;
      FUN_005eb2e0(puVar2,puVar8,puVar7,0x4bf);
      if (!bVar3) {
        FUN_005eb0f8(puVar2,puVar8,puVar7,0x4c6);
        puVar6 = PTR_s_Bink_instance_io_mutex_0071a420;
        iVar13 = *(int *)(puVar4 + 0x610);
        if ((iVar13 != 0) && ((*(uint *)(iVar13 + 0x20) & 0x8000000) == 0)) {
          iVar15 = iVar13 + 0x330;
          iVar12 = FUN_005eae28(iVar15,0,PTR_s_Bink_instance_io_mutex_0071a420,puVar7,0x4ca);
          if (iVar12 != 0) {
            FUN_005eb2e0(puVar2,puVar8,puVar7,0x4cd);
            if (*(int *)(iVar13 + 0x118) == 0) {
              if ((((*(int *)(iVar13 + 0x1d0) == 0) && (*(int *)(iVar13 + 300) == 0)) &&
                  ((*(undefined4 **)(iVar13 + 0x1a8) == (undefined4 *)0x0 ||
                   (uVar9 = (*(code *)**(undefined4 **)(iVar13 + 0x1a8))(iVar13 + 400,0),
                   (uVar9 & 1) == 0)))) &&
                 ((*(int *)(iVar13 + 0x17c) == 0 &&
                  (iVar13 = (*(code *)**(undefined4 **)(iVar13 + 0x1a0))(iVar13 + 400), iVar13 != 0)
                  ))) {
                bVar3 = true;
              }
              FUN_005eb2e0(iVar15,puVar6,puVar7,0x4d3);
              goto joined_r0x005ef1f4;
            }
            FUN_005eb2e0(iVar15,puVar6,puVar7,0x4d7);
            goto LAB_005eed4c;
          }
        }
        FUN_005eb2e0(puVar4 + 0x54c,puVar8,puVar7,0x4dd);
      }
joined_r0x005ef1f4:
      if (iVar10 != 0) goto LAB_005eefd8;
      iVar13 = *(int *)(puVar4 + 0x610);
      FUN_005eb0f8(puVar4 + 0x54c,puVar8,puVar7,0x4e7);
      iVar15 = *(int *)(puVar4 + 0x610);
      if (((((iVar15 == 0) || (*(int *)(iVar15 + 0x1f8) == 0)) || (*(int *)(iVar15 + 0x1d0) != 0))
          || (*(int *)(iVar15 + 300) != 0)) ||
         ((*(undefined4 **)(iVar15 + 0x1a8) != (undefined4 *)0x0 &&
          (uVar9 = (*(code *)**(undefined4 **)(iVar15 + 0x1a8))(iVar15 + 400,0), (uVar9 & 1) != 0)))
         ) {
        iVar12 = 0x81;
      }
      else {
        iVar12 = 0x80;
        if (*(uint *)(iVar15 + 0x1fc) < *(uint *)(iVar15 + 0x1f8)) {
          iVar12 = (int)((((ulonglong)*(uint *)(iVar15 + 0x1fc) & 0x1ffffff) << 7) /
                        (ulonglong)*(uint *)(iVar15 + 0x1f8));
        }
      }
      uVar9 = 0x81;
      iVar11 = 0x81;
      for (iVar15 = *(int *)(puVar4 + 0x5ec); iVar15 != 0; iVar15 = *(int *)(iVar15 + 0xe4)) {
        if (((*(int *)(iVar15 + 0x1f8) == 0) || (*(int *)(iVar15 + 0x1d0) != 0)) ||
           ((*(int *)(iVar15 + 300) != 0 ||
            ((*(undefined4 **)(iVar15 + 0x1a8) != (undefined4 *)0x0 &&
             (uVar14 = (*(code *)**(undefined4 **)(iVar15 + 0x1a8))(iVar15 + 400,0),
             (uVar14 & 1) != 0)))))) {
          uVar14 = 0x81;
        }
        else {
          uVar14 = 0x80;
          if (*(uint *)(iVar15 + 0x1fc) < *(uint *)(iVar15 + 0x1f8)) {
            uVar14 = (((ulonglong)*(uint *)(iVar15 + 0x1fc) & 0x1ffffff) << 7) /
                     (ulonglong)*(uint *)(iVar15 + 0x1f8);
          }
        }
        if ((((int)uVar14 < (int)uVar9) && ((*(uint *)(iVar15 + 0x20) & 0x8000000) == 0)) &&
           (*(int *)(iVar15 + 0x118) == 0)) {
          uVar9 = uVar14;
          iVar13 = iVar15;
        }
        iVar11 = (int)uVar9;
      }
      if (((((iVar12 < 0x67) || (0x18 < iVar11)) && ((iVar12 < 0x7a || (0x3f < iVar11)))) &&
          (0xb < iVar11)) ||
         ((*(int *)(puVar4 + 0x610) = iVar13, puVar2 = PTR_s_Bink_instance_io_mutex_0071a420,
          iVar13 == 0 || ((*(uint *)(iVar13 + 0x20) & 0x8000000) != 0)))) {
LAB_005ef3d4:
        FUN_005eb2e0(puVar4 + 0x54c,puVar8,puVar7,0x515);
        goto LAB_005eefd8;
      }
      iVar15 = iVar13 + 0x330;
      iVar12 = FUN_005eae28(iVar15,0,PTR_s_Bink_instance_io_mutex_0071a420,puVar7,0x502);
      if (iVar12 == 0) goto LAB_005ef3d4;
      FUN_005eb2e0(puVar4 + 0x54c,puVar8,puVar7,0x505);
      if (*(int *)(iVar13 + 0x118) != 0) {
        FUN_005eb2e0(iVar15,puVar2,puVar7,0x50e);
        goto LAB_005eed4c;
      }
      if ((((*(int *)(iVar13 + 0x1d0) == 0) && (*(int *)(iVar13 + 300) == 0)) &&
          ((*(undefined4 **)(iVar13 + 0x1a8) == (undefined4 *)0x0 ||
           (uVar9 = (*(code *)**(undefined4 **)(iVar13 + 0x1a8))(iVar13 + 400,0), (uVar9 & 1) == 0))
          )) && ((*(int *)(iVar13 + 0x17c) == 0 &&
                 (iVar13 = (*(code *)**(undefined4 **)(iVar13 + 0x1a0))(iVar13 + 400), iVar13 != 0))
                )) {
        bVar3 = true;
      }
      FUN_005eb2e0(iVar15,puVar2,puVar7,0x50a);
LAB_005eefd8:
    } while (bVar3 || iVar10 != 0);
    if (*(int *)(puVar4 + 0x474) != 0) {
      return 1;
    }
  } while( true );
}



//==== 005ef740  ns=Global  size=0x1ac
// sig: undefined FUN_005ef740(void)
// callers(1): 004d59e8 FUN_004d59e8
// callees(1): 005f5090 FUN_005f5090

int FUN_005ef740(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  
  if (((((param_1 == 0) || (*(int *)(param_1 + 0x1c) != 0)) || (*(int *)(param_1 + 0x108) != 0)) ||
      ((*(int *)(param_1 + 0x124) == 0 || (*(int *)(param_1 + 0x110) == 0)))) ||
     (*(uint *)(param_1 + 8) <= *(int *)(param_1 + 0xc) + 2U)) {
    iVar1 = 0;
  }
  else {
    iVar1 = *(int *)(param_1 + 0x4bc) + -1;
    if (*(int *)(param_1 + 0x4bc) == 0) {
      if (*(int *)(param_1 + 0x474) == 0) {
        uVar2 = FUN_005f5090();
        *(undefined4 *)(param_1 + 0x474) = uVar2;
        *(undefined4 *)(param_1 + 0x4cc) = 0;
        *(int *)(param_1 + 0x478) = *(int *)(param_1 + 0x460) + -1;
      }
      if (*(int *)(param_1 + 0x14) != 0) {
        iVar1 = FUN_005f5090();
        iVar3 = (iVar1 - *(int *)(param_1 + 0x474)) -
                (int)(((((ulonglong)*(uint *)(param_1 + 0x460) -
                         (ulonglong)*(uint *)(param_1 + 0x478) & 0xffffffff) *
                       (ulonglong)*(uint *)(param_1 + 0x18) * 1000) /
                       (ulonglong)*(uint *)(param_1 + 0x14) & 0xffffffff) *
                      (ulonglong)*(uint *)(*(int *)(param_1 + 0x154) + 0x3c) >> 0x10);
        if ((-1 < iVar3) && (*(int *)(param_1 + 0x47c) < iVar3)) {
          if (*(int *)(param_1 + 0x124) == 0) {
            *(int *)(param_1 + 0x474) = iVar1;
            *(uint *)(param_1 + 0x478) = *(uint *)(param_1 + 0x460) - 1;
            *(undefined4 *)(param_1 + 0x4cc) = 0;
          }
          else {
            if (0x2d5 < iVar3) {
              *(undefined4 *)(param_1 + 0x4c0) = 1;
            }
            if (*(uint *)(param_1 + 0x4c8) < 4) {
              *(int *)(param_1 + 0x4c4) = *(int *)(param_1 + 0x4c4) + 1;
              *(uint *)(param_1 + 0x4c8) = *(uint *)(param_1 + 0x4c8) + 1;
              *(undefined4 *)(param_1 + 0x4bc) = 2;
              *(undefined4 *)(param_1 + 0x10c) = 1;
              return 1;
            }
            *(undefined4 *)(param_1 + 0x4c8) = 0;
          }
        }
      }
      iVar1 = 0;
      *(undefined4 *)(param_1 + 0x4bc) = 1;
    }
  }
  return iVar1;
}



//==== 005ef8f0  ns=Global  size=0x1e4
// sig: undefined FUN_005ef8f0(void)
// callers(1): 004d5d0c FUN_004d5d0c
// callees(9): 005eb0f8 FUN_005eb0f8; 005eb2e0 FUN_005eb2e0; 005ec0e0 FUN_005ec0e0; 005ec1d4 FUN_005ec1d4; 005fbef8 FUN_005fbef8; 005fbf74 FUN_005fbf74; 005fbfac FUN_005fbfac; 005fbfc8 FUN_005fbfc8; 005fc490 FUN_005fc490
// strings: 00661cd8: 'Bink global IO mutex' | 00661c20: 'C:\\devel\\projects\\bink\\src\\sdk\\decode\\binkread.c' | 00661cf0: 'Bink global sound mutex'

void FUN_005ef8f0(void)

{
  bool bVar1;
  undefined *puVar2;
  undefined *puVar3;
  int iVar4;
  uint uVar5;
  
  puVar2 = PTR_DAT_0071a40c;
  iVar4 = *(int *)(PTR_DAT_0071a40c + 0x548);
  if (iVar4 != 0) {
    FUN_005eb0f8(PTR_DAT_0071a40c + 0x47c,PTR_s_Bink_global_sound_mutex_0071a440,
                 PTR_s_C__devel_projects_bink_src_sdk_d_0071a424,0xcbd);
  }
  if (*(int *)(puVar2 + 0x540) == 0) {
    FUN_005ec1d4();
  }
  if ((iVar4 != 0) && (*(int *)(puVar2 + 0x548) != 0)) {
    FUN_005eb2e0(puVar2 + 0x47c,PTR_s_Bink_global_sound_mutex_0071a440,
                 PTR_s_C__devel_projects_bink_src_sdk_d_0071a424,0xcc4);
  }
  iVar4 = *(int *)(puVar2 + 0x548);
  if (iVar4 != 0) {
    FUN_005eb0f8(puVar2 + 0x3f4,PTR_s_Bink_global_IO_mutex_0071a43c,
                 PTR_s_C__devel_projects_bink_src_sdk_d_0071a424,0xcce);
  }
  if (*(int *)(puVar2 + 0x478) == 0) {
    FUN_005ec0e0();
  }
  if ((iVar4 != 0) && (*(int *)(puVar2 + 0x548) != 0)) {
    FUN_005eb2e0(puVar2 + 0x3f4,PTR_s_Bink_global_IO_mutex_0071a43c,
                 PTR_s_C__devel_projects_bink_src_sdk_d_0071a424,0xcd5);
  }
  puVar3 = PTR_DAT_0071a4a0;
  uVar5 = 0;
LAB_005ef978:
  do {
    iVar4 = FUN_005fbef8(puVar3,1);
    while( true ) {
      if (iVar4 == 0) {
        if (*(int *)(puVar2 + 0x548) != 0) {
          FUN_005fc490(puVar2 + 0x54c);
          FUN_005fc490(puVar2 + 0x3f4);
          FUN_005fc490(puVar2 + 0x47c);
          *(undefined4 *)(puVar2 + 0x548) = 0;
        }
        FUN_005fbef8(puVar2 + 0x544,0xffffffffffffffff);
        return;
      }
      FUN_005fbef8(puVar3,0xffffffffffffffff);
      FUN_005fbfc8();
      bVar1 = uVar5 == 0x1ff;
      uVar5 = uVar5 + 1;
      if (bVar1) break;
      if (uVar5 < 0x400) goto LAB_005ef978;
      FUN_005fbf74(1);
      uVar5 = 0;
      iVar4 = FUN_005fbef8(puVar3,1);
    }
    FUN_005fbfac();
  } while( true );
}



//==== 005efad8  ns=Global  size=0x3d4
// sig: undefined FUN_005efad8(void)
// callers(3): 005efeb0 FUN_005efeb0; 005f01d8 FUN_005f01d8; 005f0aa0 FUN_005f0aa0
// callees(3): 005d0140 libc::memset; 005eb0f8 FUN_005eb0f8; 005eb2e0 FUN_005eb2e0
// strings: 00661c20: 'C:\\devel\\projects\\bink\\src\\sdk\\decode\\binkread.c' | 00661cb8: 'Bink instance sound mutex' | 00661cf0: 'Bink global sound mutex'

undefined4 FUN_005efad8(int param_1,uint param_2)

{
  int iVar1;
  bool bVar2;
  undefined4 uVar3;
  int *piVar4;
  int iVar5;
  uint uVar6;
  undefined4 *puVar7;
  uint uVar8;
  int iVar9;
  undefined4 uVar10;
  uint uVar11;
  int iVar12;
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
  if ((param_1 == 0) || (uVar8 = *(uint *)(param_1 + 0x124), uVar8 == 0)) {
    return 0;
  }
  iVar9 = 0;
  uVar11 = 0;
  iVar12 = 0;
  bVar2 = true;
  uVar3 = 0;
LAB_005efb48:
  do {
    while (uVar10 = uVar3, iVar5 = *(int *)(param_1 + 0x154), uVar3 = uVar10,
          *(int *)(iVar5 + iVar12 + 0x174) == 0) {
LAB_005efc68:
      uVar11 = uVar11 + 1;
      iVar12 = iVar12 + 0x180;
      if (uVar8 <= uVar11) goto LAB_005efc78;
    }
    if (bVar2) {
      iVar1 = *(int *)(iVar5 + 0x4c);
      if (iVar1 < 1) {
        if (-1 < iVar1) goto LAB_005efd4c;
        iVar9 = 1;
        bVar2 = false;
        FUN_005eb0f8(ZEXT48(PTR_DAT_0071a40c) + 0x47c,PTR_s_Bink_global_sound_mutex_0071a440,
                     PTR_s_C__devel_projects_bink_src_sdk_d_0071a424,0x113c);
        iVar5 = *(int *)(param_1 + 0x154);
      }
      else if (iVar1 == 2) {
LAB_005efd4c:
        iVar9 = 2;
        bVar2 = false;
        FUN_005eb0f8(param_1 + 0x3b0,PTR_s_Bink_instance_sound_mutex_0071a438,
                     PTR_s_C__devel_projects_bink_src_sdk_d_0071a424,0x1141);
        iVar5 = *(int *)(param_1 + 0x154);
      }
    }
    iVar5 = (*(code *)**(undefined4 **)(iVar12 + iVar5 + 0x174))
                      (iVar12 + iVar5,
                       ((int)param_2 >> 0x1f) - ((int)param_2 >> 0x1f ^ param_2) >> 0x1f);
    if (iVar5 != 0) {
      if (*(int *)(param_1 + 0x110) == 0) {
        uVar8 = *(uint *)(param_1 + 0x124);
        uVar11 = uVar11 + 1;
        uVar10 = 1;
        *(undefined4 *)(param_1 + 0x110) = 1;
        *(undefined4 *)(param_1 + 0x4cc) = 0;
        *(undefined4 *)(param_1 + 0x474) = 0;
        iVar12 = iVar12 + 0x180;
        uVar3 = 1;
        if (uVar8 <= uVar11) goto LAB_005efc78;
      }
      else {
        uVar8 = *(uint *)(param_1 + 0x124);
        uVar11 = uVar11 + 1;
        uVar10 = 1;
        iVar12 = iVar12 + 0x180;
        uVar3 = 1;
        if (uVar8 <= uVar11) goto LAB_005efc78;
      }
      goto LAB_005efb48;
    }
    if (*(int *)(param_1 + 0x110) != 0) {
      puVar7 = (undefined4 *)(iVar12 + *(int *)(param_1 + 0x154));
      *puVar7 = puVar7[3];
      iVar5 = iVar12 + *(int *)(param_1 + 0x154);
      *(undefined4 *)(iVar5 + 0x18) = *(undefined4 *)(iVar5 + 0xc);
      if ((*(int *)(param_1 + 0xc) == 1) && (*(int *)(param_1 + 0x4ac) != 1)) {
        uVar8 = *(uint *)(param_1 + 0x124);
        *(undefined4 *)(param_1 + 0x110) = 0;
      }
      else {
        piVar4 = (int *)(iVar12 + *(int *)(param_1 + 0x154));
        iVar5 = *piVar4 - piVar4[6];
        if (iVar5 < 0) {
          iVar5 = iVar5 + piVar4[2];
        }
        if (iVar5 < piVar4[0x12]) {
          iVar5 = piVar4[0x12] - iVar5;
          uVar8 = piVar4[3];
          uVar6 = piVar4[6] - iVar5;
          piVar4[6] = uVar6;
          if (uVar6 < uVar8) {
            piVar4[6] = uVar6 + piVar4[2];
            libc::memset(uVar8,0,iVar5 - (uVar8 - uVar6));
            libc::memset(piVar4[6],0,uVar8 - uVar6);
            uVar8 = *(uint *)(param_1 + 0x124);
            *(undefined4 *)(param_1 + 0x110) = 0;
            goto LAB_005efc68;
          }
          libc::memset(uVar6,0,iVar5);
        }
        uVar8 = *(uint *)(param_1 + 0x124);
        *(undefined4 *)(param_1 + 0x110) = 0;
      }
      goto LAB_005efc68;
    }
    uVar8 = *(uint *)(param_1 + 0x124);
    uVar11 = uVar11 + 1;
    iVar12 = iVar12 + 0x180;
    if (uVar8 <= uVar11) {
LAB_005efc78:
      if (!bVar2) {
        if (iVar9 == 1) {
          FUN_005eb2e0(ZEXT48(PTR_DAT_0071a40c) + 0x47c,PTR_s_Bink_global_sound_mutex_0071a440,
                       PTR_s_C__devel_projects_bink_src_sdk_d_0071a424,0x1168);
          return uVar10;
        }
        FUN_005eb2e0(param_1 + 0x3b0,PTR_s_Bink_instance_sound_mutex_0071a438,
                     PTR_s_C__devel_projects_bink_src_sdk_d_0071a424,0x116c);
      }
      return uVar10;
    }
  } while( true );
}



//==== 005efeb0  ns=Global  size=0x324
// sig: undefined FUN_005efeb0(void)
// callers(2): 004d59e8 FUN_004d59e8; 005f0aa0 FUN_005f0aa0
// callees(4): 005ebac0 FUN_005ebac0; 005eda28 FUN_005eda28; 005efad8 FUN_005efad8; 005f5090 FUN_005f5090

void FUN_005efeb0(int param_1)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  uint uVar5;
  uint uVar6;
  
  if (param_1 == 0) {
    return;
  }
  if (*(int *)(param_1 + 0x100) != 0) {
    return;
  }
  if (*(int *)(param_1 + 0x104) != 0) {
    return;
  }
  uVar6 = *(uint *)(param_1 + 0x124);
  if ((((uVar6 == 0) || (*(int *)(param_1 + 0x14) == 0)) || (*(int *)(param_1 + 0x108) != 0)) ||
     (*(int *)(param_1 + 0x110) == 0)) goto LAB_005eff10;
  if (*(int *)(param_1 + 0x4bc) == 0) {
    if (*(int *)(param_1 + 0x474) == 0) {
      uVar4 = FUN_005f5090();
      *(undefined4 *)(param_1 + 0x474) = uVar4;
      *(int *)(param_1 + 0x478) = *(int *)(param_1 + 0x460) + -1;
      *(undefined4 *)(param_1 + 0x4cc) = 0;
      if (*(int *)(param_1 + 0x14) != 0) goto LAB_005effe0;
    }
    else {
LAB_005effe0:
      iVar3 = FUN_005f5090();
      iVar2 = (iVar3 - *(int *)(param_1 + 0x474)) -
              (int)(((((ulonglong)*(uint *)(param_1 + 0x460) - (ulonglong)*(uint *)(param_1 + 0x478)
                      & 0xffffffff) * (ulonglong)*(uint *)(param_1 + 0x18) * 1000) /
                     (ulonglong)*(uint *)(param_1 + 0x14) & 0xffffffff) *
                    (ulonglong)*(uint *)(*(int *)(param_1 + 0x154) + 0x3c) >> 0x10);
      if ((-1 < iVar2) && (*(int *)(param_1 + 0x47c) < iVar2)) {
        if (*(int *)(param_1 + 0x124) == 0) {
          *(int *)(param_1 + 0x474) = iVar3;
          *(uint *)(param_1 + 0x478) = *(uint *)(param_1 + 0x460) - 1;
          *(undefined4 *)(param_1 + 0x4cc) = 0;
        }
        else {
          if (0x2d5 < iVar2) {
            *(undefined4 *)(param_1 + 0x4c0) = 1;
          }
          if (*(uint *)(param_1 + 0x4c8) < 4) {
            *(uint *)(param_1 + 0x4c8) = *(uint *)(param_1 + 0x4c8) + 1;
            *(undefined4 *)(param_1 + 0x4bc) = 2;
            *(undefined4 *)(param_1 + 0x10c) = 1;
            *(int *)(param_1 + 0x4c4) = *(int *)(param_1 + 0x4c4) + 1;
            goto LAB_005f0064;
          }
          *(undefined4 *)(param_1 + 0x4c8) = 0;
        }
      }
    }
    *(undefined4 *)(param_1 + 0x4bc) = 1;
  }
LAB_005f0064:
  *(undefined4 *)(param_1 + 0x4bc) = 0;
  *(undefined4 *)(param_1 + 0x1dc) = 0;
  if (*(int *)(param_1 + 0x4c0) == 0) {
    uVar6 = *(uint *)(param_1 + 0x124);
    if (uVar6 == 0) goto LAB_005eff10;
    bVar1 = false;
    uVar5 = 0;
    iVar3 = 0;
    do {
      iVar2 = iVar3 + *(int *)(param_1 + 0x154);
      if (*(int *)(iVar2 + 0x50) != 0) {
        *(undefined4 *)(iVar2 + 0x50) = 0;
        if ((*(uint *)(param_1 + 0xc) < 2) ||
           (*(int *)(iVar3 + *(int *)(param_1 + 0x154) + 0x40) < (int)*(uint *)(param_1 + 0xc))) {
          uVar6 = *(uint *)(param_1 + 0x124);
        }
        else {
          bVar1 = true;
          uVar6 = *(uint *)(param_1 + 0x124);
        }
      }
      uVar5 = uVar5 + 1;
      iVar3 = iVar3 + 0x180;
    } while (uVar5 < uVar6);
    if (!bVar1) goto LAB_005eff10;
  }
  else {
    *(undefined4 *)(param_1 + 0x4c0) = 0;
  }
  *(int *)(param_1 + 0x46c) = *(int *)(param_1 + 0x46c) + 1;
  FUN_005efad8(param_1,0);
  *(undefined4 *)(param_1 + 0x4cc) = 0;
  *(undefined4 *)(param_1 + 0x474) = 0;
  FUN_005efad8(param_1,1);
  uVar6 = *(uint *)(param_1 + 0x124);
LAB_005eff10:
  *(undefined4 *)(param_1 + 0x1dc) = 1;
  if ((uVar6 != 0) && (*(int *)(*(int *)(param_1 + 0x154) + 0x4c) == 1)) {
    FUN_005ebac0(param_1);
  }
  iVar2 = FUN_005f5090();
  iVar3 = *(int *)(param_1 + 0x470);
  if (iVar3 - 1U < 0xfffffffe) {
    *(undefined4 *)(param_1 + 0x470) = 0;
    *(int *)(param_1 + 0x498) = *(int *)(param_1 + 0x498) + (iVar2 - iVar3);
  }
  iVar3 = 1;
  if (*(uint *)(param_1 + 0xc) < *(uint *)(param_1 + 8)) {
    iVar3 = *(uint *)(param_1 + 0xc) + 1;
  }
  FUN_005eda28(param_1,iVar3);
  *(undefined4 *)(param_1 + 0x1dc) = 0;
  return;
}



