//==== 005300ac  ns=Global  size=0x180
// sig: undefined FUN_005300ac(void)
// callers(2): 005113b4 FUN_005113b4; 00513fa8 FUN_00513fa8
// callees(3): 0052fcbc FUN_0052fcbc; 0052fd1c FUN_0052fd1c; 0052fd8c FUN_0052fd8c

/* WARNING: Removing unreachable block (ram,0x00530180) */

undefined4
FUN_005300ac(int param_1,undefined8 param_2,undefined8 param_3,ulonglong param_4,longlong param_5)

{
  ulonglong uVar1;
  ulonglong uVar2;
  char cVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  undefined1 local_60 [8];
  undefined1 auStack_58 [8];
  undefined1 auStack_50 [16];
  
  uVar2 = FUN_0052fcbc();
  if ((param_4 <= uVar2) && (uVar5 = param_4 + param_5, uVar5 <= uVar2)) {
    cVar3 = FUN_0052fd1c(param_1,param_2,param_3);
    if (cVar3 == '\0') {
      uVar2 = (ulonglong)*(uint *)(param_1 + 0x20);
      uVar1 = uVar5 - (uVar5 / uVar2) * uVar2;
      uVar4 = (longlong)uVar1 >> 0x3f;
      if ((param_4 / uVar2 & 0xffffffff) <=
          (uVar5 / uVar2 + ((longlong)(((uVar4 ^ uVar1) - uVar4) + -1) >> 0x3f) & 0xffffffff)) {
        FUN_0052fd8c(param_1,param_2,param_3,0,param_4 / uVar2 & 0xffffffff,auStack_50,auStack_58,
                     local_60);
        return 0;
      }
    }
    return 1;
  }
  return 0;
}



//==== 0053022c  ns=Global  size=0x194
// sig: undefined FUN_0053022c(void)
// callers(2): 005303c0 FUN_005303c0; 00530420 FUN_00530420
// callees(2): 005c4d8c FUN_005c4d8c; 005d0218 libc::memcmp

void * FUN_0053022c(int param_1,void *param_2,void *param_3)

{
  int iVar1;
  void *pvVar2;
  int iVar3;
  int iVar4;
  undefined1 local_90 [40];
  
  if (param_2 != (void *)0x0) {
    if (*(char *)(param_1 + 0x39) != '\0') {
      pvVar2 = (void *)FUN_005c4d8c(local_90,param_2,*(undefined4 *)(param_1 + 0x1c),
                                    *(undefined4 *)(param_1 + 0x18),PTR_PTR_0071aed0);
      return pvVar2;
    }
    iVar1 = *(int *)(param_1 + 0x1c);
    if (iVar1 != 0) {
      iVar4 = 0;
      while( true ) {
        iVar4 = iVar4 + 1;
        iVar3 = libc::memcmp(param_2,param_3,0x10);
        if (iVar3 == 0) {
          return param_2;
        }
        if (iVar1 == iVar4) break;
        param_2 = (void *)((int)param_2 + *(int *)(param_1 + 0x18));
      }
    }
  }
  return (void *)0x0;
}



//==== 005303c0  ns=Global  size=0x34
// sig: undefined FUN_005303c0(void)
// callers(1): 0051514c FUN_0051514c
// callees(1): 0053022c FUN_0053022c

undefined4 FUN_005303c0(undefined8 param_1,undefined8 param_2)

{
  undefined4 uVar1;
  undefined1 auStack_10 [16];
  
  uVar1 = FUN_0053022c(param_1,param_2,auStack_10);
  return uVar1;
}



//==== 005303f4  ns=Global  size=0x2c
// sig: undefined FUN_005303f4(void)
// callers(0): 
// callees(1): 005d0218 libc::memcmp

int FUN_005303f4(void *param_1,void *param_2)

{
  int iVar1;
  
  iVar1 = libc::memcmp(param_1,param_2,0x10);
  return iVar1;
}



//==== 00530420  ns=Global  size=0x60
// sig: undefined FUN_00530420(void)
// callers(1): 005155c4 FUN_005155c4
// callees(2): 0052faf8 FUN_0052faf8; 0053022c FUN_0053022c

undefined4 FUN_00530420(int param_1,undefined4 param_2,undefined8 param_3)

{
  undefined4 uVar1;
  undefined1 auStack_90 [88];
  undefined1 auStack_38 [24];
  
  FUN_0052faf8(auStack_90,param_3,*(uint *)(param_1 + 0x24) & 1);
  uVar1 = FUN_0053022c(param_1,param_2,auStack_38);
  return uVar1;
}



//==== 00530480  ns=Global  size=0x2c0
// sig: undefined FUN_00530480(void)
// callers(1): 00513cc4 FUN_00513cc4
// callees(5): 0052fba8 FUN_0052fba8; 0052fbd8 FUN_0052fbd8; 0052fcec FUN_0052fcec; 005d0140 libc::memset; 005d0218 libc::memcmp

void FUN_00530480(int param_1,ulonglong param_2,int param_3)

{
  byte bVar1;
  int iVar2;
  int iVar3;
  undefined1 *puVar4;
  undefined *__s2;
  longlong lVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  int iVar10;
  longlong lVar8;
  ulonglong uVar9;
  ulonglong uVar11;
  ulonglong uVar12;
  longlong lVar13;
  int iVar14;
  ulonglong uVar15;
  int iVar16;
  
  libc::memset(param_3,0,
               ((((ulonglong)*(uint *)(param_1 + 0x14) -
                 ((longlong)*(int *)(param_1 + 0x1c) * (longlong)*(int *)(param_1 + 0x18) &
                 0xffffffffU)) / (ulonglong)*(byte *)(param_1 + 0x38) + 0x1f << 0x20) >> 0x25) * 5);
  iVar2 = *(int *)(param_1 + 0x1c);
  uVar12 = 1L << (((ulonglong)*(byte *)(param_1 + 0x38) & 0xf) << 3);
  if (iVar2 != 0) {
    iVar14 = 0;
    uVar15 = param_2;
    while( true ) {
      uVar6 = FUN_0052fba8(uVar15 + 0x14 & 0xffffffff,5);
      uVar7 = FUN_0052fbd8(uVar15 & 0xffffffff);
      __s2 = PTR_DAT_0071aed4;
      uVar11 = 0;
      if (uVar6 != 0) {
        uVar11 = (uVar6 - 1) / (ulonglong)*(uint *)(param_1 + 0x20) & 0xffffffff;
      }
      if ((uVar7 != 0xffffffffffffffff) && (uVar12 <= uVar6)) {
        uVar6 = ((longlong)uVar7 >> 5) + (ulonglong)((longlong)uVar7 < 0 && (uVar7 & 0x1f) != 0);
        uVar11 = uVar11 + uVar7;
        iVar10 = libc::memcmp((void *)(param_3 + (int)((uVar6 & 0xffffffff) << 2) + (int)uVar6),
                              PTR_DAT_0071aed4,5);
        if ((iVar10 == 0) ||
           (uVar6 = ((longlong)uVar11 >> 5) +
                    (ulonglong)((longlong)uVar11 < 0 && (uVar11 & 0x1f) != 0),
           iVar10 = libc::memcmp((void *)(param_3 + (int)((uVar6 & 0xffffffff) << 2) + (int)uVar6),
                                 __s2,5), iVar10 == 0)) {
          iVar10 = *(int *)(param_1 + 0x1c);
          iVar3 = *(int *)(param_1 + 0x18);
          bVar1 = *(byte *)(param_1 + 0x38);
          lVar8 = FUN_0052fcec(param_1,param_2 & 0xffffffff,uVar15 & 0xffffffff);
          iVar16 = (int)uVar7;
          if ((longlong)iVar16 <= (longlong)uVar11) {
            lVar13 = 0;
            uVar6 = param_2 + (longlong)iVar10 * (longlong)iVar3 + uVar7 * bVar1;
            do {
              puVar4 = (undefined1 *)
                       (param_3 +
                       (((int)uVar7 >> 5) + (uint)((int)uVar7 < 0 && (uVar7 & 0x1f) != 0)) * 5);
              if ((uVar7 & 0x1f) == 0) {
                puVar4[4] = (char)lVar8;
                *puVar4 = (char)((ulonglong)lVar8 >> 0x20);
                puVar4[1] = (char)((ulonglong)lVar8 >> 0x18);
                puVar4[2] = (char)((ulonglong)lVar8 >> 0x10);
                puVar4[3] = (char)((ulonglong)lVar8 >> 8);
              }
              uVar9 = FUN_0052fba8(uVar6 & 0xffffffff,*(undefined1 *)(param_1 + 0x38));
              if (uVar9 == 0) {
                uVar9 = uVar12;
              }
              lVar8 = lVar8 + uVar9;
              lVar5 = (iVar16 + 1) + lVar13;
              uVar7 = uVar7 + 1;
              lVar13 = lVar13 + 1;
              uVar6 = uVar6 + *(byte *)(param_1 + 0x38);
            } while (lVar5 <= (longlong)uVar11);
          }
        }
      }
      iVar14 = iVar14 + 1;
      if (iVar2 == iVar14) break;
      uVar15 = uVar15 + *(uint *)(param_1 + 0x18);
    }
  }
  return;
}



//==== 00530740  ns=Global  size=0x30
// sig: undefined FUN_00530740(void)
// callers(0): 
// callees(1): 005e387c FUN_005e387c

void FUN_00530740(undefined4 *param_1)

{
  *param_1 = PTR_PTR_0071aed8;
  FUN_005e387c();
  return;
}



//==== 00530770  ns=Global  size=0xc
// sig: undefined FUN_00530770(void)
// callers(2): 005168a8 FUN_005168a8; 00517d4c FUN_00517d4c
// callees(0): 

void FUN_00530770(undefined4 *param_1)

{
  *param_1 = PTR_PTR_0071aed8;
  return;
}



//==== 0053077c  ns=Global  size=0xc
// sig: undefined FUN_0053077c(void)
// callers(0): 
// callees(0): 

void FUN_0053077c(undefined4 *param_1)

{
  *param_1 = PTR_PTR_0071aed8;
  return;
}



//==== 00530788  ns=Global  size=0xf4
// sig: undefined FUN_00530788(void)
// callers(0): 
// callees(0): 

void FUN_00530788(undefined4 *param_1,undefined4 *param_2)

{
  uint uVar1;
  undefined4 uVar2;
  uint uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined8 uVar8;
  
  *param_1 = PTR_PTR_0071aed8;
  uVar1 = param_2[1];
  uVar2 = param_2[2];
  uVar3 = param_2[3];
  uVar4 = param_2[5];
  uVar5 = param_2[4];
  uVar6 = param_2[6];
  uVar7 = param_2[7];
  param_1[2] = *param_2;
  param_1[4] = uVar2;
  param_1[6] = uVar5;
  param_1[7] = uVar4;
  param_1[8] = uVar6;
  param_1[9] = uVar7;
  param_1[3] = uVar1;
  param_1[5] = uVar3;
  if (uVar1 >> 0x10 < 3) {
    if (uVar3 < 0x21) {
      param_1[5] = 0;
    }
    else {
      param_1[5] = uVar3 - 0x20;
    }
    *(ulonglong *)(param_1 + 0xc) = (ulonglong)(uint)param_1[5];
    *(undefined8 *)(param_1 + 10) = 0x20;
  }
  else {
    uVar8 = *(undefined8 *)(param_2 + 8);
    *(undefined8 *)(param_1 + 0xc) = *(undefined8 *)(param_2 + 10);
    *(undefined8 *)(param_1 + 10) = uVar8;
  }
  uVar1 = param_1[8];
  if (uVar1 < 0x101) {
    *(undefined1 *)(param_1 + 0xe) = 1;
  }
  else if (uVar1 < 0x10001) {
    *(undefined1 *)(param_1 + 0xe) = 2;
  }
  else if (uVar1 < 0x1000001) {
    *(undefined1 *)(param_1 + 0xe) = 3;
  }
  else {
    *(undefined1 *)(param_1 + 0xe) = 4;
  }
  *(byte *)((int)param_1 + 0x39) = (byte)((uint)param_1[9] >> 2) & 1;
  return;
}



//==== 0053087c  ns=Global  size=0x58
// sig: undefined FUN_0053087c(void)
// callers(1): 00513cc4 FUN_00513cc4
// callees(1): 005c8308 FUN_005c8308

void FUN_0053087c(int param_1,undefined4 param_2)

{
  if ((*(uint *)(param_1 + 0x24) & 4) == 0) {
    FUN_005c8308(param_2,*(undefined4 *)(param_1 + 0x1c),*(undefined4 *)(param_1 + 0x18),
                 PTR_PTR_0071aed0);
  }
  *(undefined1 *)(param_1 + 0x39) = 1;
  return;
}



//==== 005308d4  ns=Global  size=0xf4
// sig: undefined FUN_005308d4(void)
// callers(1): 00517d4c FUN_00517d4c
// callees(0): 

void FUN_005308d4(undefined4 *param_1,undefined4 *param_2)

{
  uint uVar1;
  undefined4 uVar2;
  uint uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined8 uVar8;
  
  *param_1 = PTR_PTR_0071aed8;
  uVar1 = param_2[1];
  uVar2 = param_2[2];
  uVar3 = param_2[3];
  uVar4 = param_2[5];
  uVar5 = param_2[4];
  uVar6 = param_2[6];
  uVar7 = param_2[7];
  param_1[2] = *param_2;
  param_1[4] = uVar2;
  param_1[6] = uVar5;
  param_1[7] = uVar4;
  param_1[8] = uVar6;
  param_1[9] = uVar7;
  param_1[3] = uVar1;
  param_1[5] = uVar3;
  if (uVar1 >> 0x10 < 3) {
    if (uVar3 < 0x21) {
      param_1[5] = 0;
    }
    else {
      param_1[5] = uVar3 - 0x20;
    }
    *(ulonglong *)(param_1 + 0xc) = (ulonglong)(uint)param_1[5];
    *(undefined8 *)(param_1 + 10) = 0x20;
  }
  else {
    uVar8 = *(undefined8 *)(param_2 + 8);
    *(undefined8 *)(param_1 + 0xc) = *(undefined8 *)(param_2 + 10);
    *(undefined8 *)(param_1 + 10) = uVar8;
  }
  uVar1 = param_1[8];
  if (uVar1 < 0x101) {
    *(undefined1 *)(param_1 + 0xe) = 1;
  }
  else if (uVar1 < 0x10001) {
    *(undefined1 *)(param_1 + 0xe) = 2;
  }
  else if (uVar1 < 0x1000001) {
    *(undefined1 *)(param_1 + 0xe) = 3;
  }
  else {
    *(undefined1 *)(param_1 + 0xe) = 4;
  }
  *(byte *)((int)param_1 + 0x39) = (byte)((uint)param_1[9] >> 2) & 1;
  return;
}



//==== 005309c8  ns=Global  size=0xfc
// sig: undefined FUN_005309c8(void)
// callers(2): 005321e8 FUN_005321e8; 00532660 FUN_00532660
// callees(0): 

undefined4 * FUN_005309c8(int param_1,int param_2,int param_3,undefined4 *param_4)

{
  undefined4 uVar1;
  uint uVar2;
  ulonglong uVar3;
  longlong lVar4;
  longlong lVar5;
  longlong local_10;
  ulonglong local_8;
  
  uVar1 = *(undefined4 *)(param_2 + 8);
  param_4[6] = 0;
  param_4[4] = 0;
  param_4[5] = 0;
  uVar2 = *(uint *)(param_1 + 0xdc);
  *(undefined8 *)(param_4 + 2) = 0;
  uVar3 = (ulonglong)uVar2;
  lVar4 = *(longlong *)(param_2 + 0x30);
  *param_4 = uVar1;
  *(ulonglong *)(param_4 + 2) = uVar3 * (longlong)(param_3 + (int)(lVar4 / (longlong)uVar3));
  if (param_3 == 0) {
    lVar4 = *(longlong *)(param_2 + 0x30);
    lVar5 = *(longlong *)(param_2 + 0x40);
    param_4[4] = (int)lVar4 - (int)(lVar4 / (longlong)uVar3) * uVar2;
    local_10 = (lVar4 + lVar5) - ((ulonglong)(uint)param_4[4] + *(longlong *)(param_4 + 2));
    local_8 = (ulonglong)*(uint *)(param_1 + 0xdc) - (ulonglong)(uint)param_4[4] & 0xffffffff;
    if (local_10 <= (longlong)local_8) {
LAB_00530ab0:
      param_4[5] = (int)local_10;
      return param_4;
    }
  }
  else {
    local_10 = (*(longlong *)(param_2 + 0x30) + *(longlong *)(param_2 + 0x40)) -
               ((ulonglong)(uint)param_4[4] + *(longlong *)(param_4 + 2));
    local_8 = (ulonglong)uVar2 - (ulonglong)(uint)param_4[4] & 0xffffffff;
    if (local_10 <= (longlong)local_8) goto LAB_00530ab0;
  }
  param_4[5] = (int)local_8;
  return param_4;
}



//==== 00530ac4  ns=Global  size=0x50
// sig: undefined FUN_00530ac4(void)
// callers(0): 
// callees(0): 

bool FUN_00530ac4(undefined8 param_1,int param_2,int param_3,int param_4)

{
  bool bVar1;
  
  bVar1 = false;
  if ((*(ushort *)(param_2 + 0x54) & 4) == 0) {
    bVar1 = true;
    if (2 < param_4) {
      return param_4 <= param_3 + 1;
    }
  }
  return bVar1;
}



//==== 00530b14  ns=Global  size=0x4
// sig: undefined FUN_00530b14(void)
// callers(0): 
// callees(0): 

void FUN_00530b14(void)

{
  return;
}



//==== 00530b18  ns=Global  size=0x10
// sig: undefined FUN_00530b18(void)
// callers(0): 
// callees(0): 

ulonglong FUN_00530b18(undefined8 param_1,int param_2)

{
  return ((ulonglong)*(ushort *)(param_2 + 0x54) ^ 8) >> 3 & 1;
}



//==== 00530b28  ns=Global  size=0x58
// sig: undefined FUN_00530b28(void)
// callers(2): 005321e8 FUN_005321e8; 00532660 FUN_00532660
// callees(0): 

int FUN_00530b28(int param_1,int param_2)

{
  ulonglong uVar1;
  int iVar2;
  longlong lVar3;
  
  iVar2 = 0;
  lVar3 = *(longlong *)(param_2 + 0x40);
  if (0 < lVar3) {
    uVar1 = (ulonglong)*(uint *)(param_1 + 0xdc);
    iVar2 = 0x7fffffff;
    if (lVar3 < (longlong)(uVar1 * 0x7ffffffe)) {
      iVar2 = ((int)((lVar3 + *(longlong *)(param_2 + 0x30) + -1) / (longlong)uVar1) -
              (int)(*(longlong *)(param_2 + 0x30) / (longlong)uVar1)) + 1;
    }
  }
  return iVar2;
}



//==== 00530b80  ns=Global  size=0x1b0
// sig: undefined FUN_00530b80(void)
// callers(3): 00532b9c FUN_00532b9c; 00535d38 FUN_00535d38; 0053750c FUN_0053750c
// callees(1): 0052cbd8 fios::print_tty4
// strings: 00669308: 'warning: cache persistence overflow (cache has filled with kOPF_CACHEPERSIST blocks)\n'

uint FUN_00530b80(int param_1,int param_2)

{
  uint uVar1;
  ulonglong *puVar2;
  longlong lVar3;
  int iVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  int iVar9;
  ulonglong uVar8;
  longlong lVar10;
  longlong lVar11;
  ulonglong uVar13;
  uint uVar12;
  
  instructionSynchronize();
  lVar3 = (ulonglong)*(uint *)(param_1 + 0xec) + 1;
  if (param_2 == 0) {
    uVar1 = *(uint *)(param_1 + 0xe0);
    if ((int)uVar1 < 1) goto LAB_00530d0c;
    iVar4 = *(int *)(param_1 + 0xe4);
    uVar13 = (ulonglong)uVar1;
    uVar5 = 0x7fffffffffffffff;
    uVar6 = 0;
    do {
      uVar8 = lVar3 - (longlong)((int)lVar3 / (int)uVar1) * (longlong)(int)uVar1;
      lVar3 = lVar3 + 1;
      puVar2 = (ulonglong *)
               (iVar4 + ((int)((uVar8 & 0xffffffff) << 6) - (int)((uVar8 & 0xffffffff) << 3)));
      uVar7 = *puVar2;
      if ((((-1 < (longlong)puVar2[4]) && (uVar7 < uVar5)) && (uVar7 != 3)) && (uVar7 != 2)) {
        uVar5 = uVar7;
        uVar6 = uVar8;
      }
      uVar12 = (uint)uVar6;
      uVar13 = uVar13 - 1;
    } while (uVar13 != 0);
  }
  else {
    uVar1 = *(uint *)(param_1 + 0xe0);
    if ((int)uVar1 < 1) {
LAB_00530d0c:
      iVar4 = *(int *)(param_1 + 0xe4);
      uVar12 = 0;
      iVar9 = 0;
      goto LAB_00530c40;
    }
    iVar4 = *(int *)(param_1 + 0xe4);
    uVar13 = (ulonglong)uVar1;
    uVar5 = 0x7fffffffffffffff;
    lVar10 = 0;
    do {
      lVar11 = lVar3 - (longlong)((int)lVar3 / (int)uVar1) * (longlong)(int)uVar1;
      uVar12 = (uint)lVar11;
      lVar3 = lVar3 + 1;
      iVar9 = uVar12 * 0x40 + (uVar12 & 0x1fffffff) * -8;
      uVar6 = *(ulonglong *)(iVar4 + iVar9);
      if (((-1 < (longlong)((ulonglong *)(iVar4 + iVar9))[4]) && (uVar6 < uVar5)) &&
         ((uVar6 != 3 && (uVar5 = uVar6, lVar10 = lVar11, uVar6 == 2)))) goto LAB_00530c40;
      uVar12 = (uint)lVar10;
      uVar13 = uVar13 - 1;
    } while (uVar13 != 0);
  }
  iVar9 = uVar12 * 0x40 + (uVar12 & 0x1fffffff) * -8;
LAB_00530c40:
  if (*(longlong *)(iVar9 + iVar4 + 0x20) < 0) {
    fios::print_tty4(PTR_s_warning__cache_persistence_overf_0071aedc);
  }
  sync(1);
  *(uint *)(param_1 + 0xec) = uVar12;
  return uVar12;
}



//==== 00530d30  ns=Global  size=0x1cc
// sig: undefined FUN_00530d30(void)
// callers(2): 00535d38 FUN_00535d38; 0053750c FUN_0053750c
// callees(1): 0051c9a4 FUN_0051c9a4

void FUN_00530d30(int param_1,undefined8 param_2,undefined8 *param_3,undefined8 *param_4)

{
  uint uVar1;
  int iVar2;
  bool bVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  int iVar6;
  ulonglong *puVar8;
  ulonglong uVar7;
  longlong *plVar9;
  ulonglong uVar10;
  ulonglong local_48;
  ulonglong local_40;
  longlong local_30;
  longlong local_28;
  
  uVar5 = local_40;
  uVar4 = local_48;
  FUN_0051c9a4(&local_30);
  uVar1 = *(uint *)(param_1 + 0xe0);
  local_40 = 0x7fffffffffffffff;
  *param_3 = 0;
  *param_4 = 0;
  local_48 = 0x7fffffffffffffff;
  if (0 < (int)uVar1) {
    uVar10 = (ulonglong)uVar1;
    iVar6 = 0;
    do {
      while( true ) {
        plVar9 = (longlong *)(iVar6 + *(int *)(param_1 + 0xe4));
        iVar6 = iVar6 + 0x38;
        if ((1 < *plVar9 - 2U) && (plVar9[5] == local_30)) break;
LAB_00530dd8:
        uVar10 = uVar10 - 1;
        if (uVar10 == 0) goto LAB_00530ddc;
      }
      puVar8 = (ulonglong *)(plVar9 + 2);
      if (plVar9[6] != local_28) goto LAB_00530dd8;
      if (local_48 < (ulonglong)plVar9[1]) {
        uVar7 = *puVar8;
        local_48 = uVar4;
      }
      else {
        local_48 = plVar9[1];
        uVar7 = *puVar8;
      }
      bVar3 = uVar7 <= local_40;
      local_40 = uVar5;
      if (bVar3) {
        local_40 = *puVar8;
      }
      uVar10 = uVar10 - 1;
    } while (uVar10 != 0);
  }
LAB_00530ddc:
  if (local_48 == 0x7fffffffffffffff) {
    if (local_40 == 0x7fffffffffffffff) {
      return;
    }
  }
  else if (local_48 < 2) {
    iVar6 = -0x38;
    goto LAB_00530e08;
  }
  iVar6 = -0x48;
LAB_00530e08:
  iVar2 = -0x40;
  *param_3 = *(undefined8 *)(&stack0x00000000 + iVar6);
  if (local_40 < 2) {
    iVar2 = -0x50;
  }
  *param_4 = *(undefined8 *)(&stack0x00000000 + iVar2);
  return;
}



//==== 00530efc  ns=Global  size=0x84
// sig: undefined FUN_00530efc(void)
// callers(1): 00531798 FUN_00531798
// callees(1): 0051c978 FUN_0051c978

uint FUN_00530efc(int param_1,int *param_2)

{
  int iVar1;
  longlong lVar2;
  uint uVar3;
  
  iVar1 = *param_2;
  uVar3 = FUN_0051c978(param_1 + 0x28,iVar1 + 0x28);
  if (uVar3 == 0) {
    lVar2 = *(longlong *)(iVar1 + 0x18);
    uVar3 = 0xffffffff;
    if (lVar2 <= *(longlong *)(param_1 + 0x18)) {
      uVar3 = (uint)(lVar2 < *(longlong *)(param_1 + 0x18));
    }
  }
  return uVar3;
}



//==== 00530f80  ns=Global  size=0x1c4
// sig: undefined FUN_00530f80(void)
// callers(1): 005344e8 FUN_005344e8
// callees(6): 005193cc FUN_005193cc; 0051c030 fios::op_wait_result; 00520bd8 FUN_00520bd8; 0052cbd8 fios::print_tty4; 005ccb28 FUN_005ccb28; 00650004 cell::cellFsGetFreeSize
// strings: 00669398: '/dev_hdd0' | 006693a8: '/dev_hdd1' | 00669360: "FIOS cache couldn't resolve %s! Cache is disabled.\n"

undefined4 FUN_00530f80(undefined8 param_1,int param_2,longlong param_3)

{
  undefined *puVar1;
  undefined4 uVar2;
  int iVar3;
  char *pcVar4;
  int iStack_184;
  undefined1 local_140 [8];
  undefined1 local_138 [8];
  undefined1 auStack_130 [272];
  
  if (param_2 != 0) {
    pcVar4 = (char *)0x0;
    if (**(char **)(param_2 + 0x30) != '\0') {
      pcVar4 = *(char **)(param_2 + 0x30);
    }
    FUN_005193cc(auStack_130,pcVar4,0x100);
    uVar2 = FUN_00520bd8(*(undefined4 *)(param_2 + 8),0,auStack_130,0);
    iVar3 = fios::op_wait_result(uVar2,0);
    if (iVar3 != 0) {
      pcVar4 = (char *)0x0;
      if (**(char **)(param_2 + 0x30) != '\0') {
        pcVar4 = *(char **)(param_2 + 0x30);
      }
      fios::print_tty4(PTR_s_FIOS_cache_couldn_t_resolve__s__C_0071aee0,pcVar4);
      return 0;
    }
    iVar3 = FUN_005ccb28(auStack_130,PTR_s__dev_hdd0_0071aee4,9);
    puVar1 = PTR_s__dev_hdd0_0071aee4;
    if ((((iVar3 == 0) ||
         (iVar3 = FUN_005ccb28(auStack_130,PTR_s__dev_hdd1_0071aee8,9),
         puVar1 = PTR_s__dev_hdd1_0071aee8, iVar3 == 0)) &&
        (iVar3 = cell::cellFsGetFreeSize(puVar1,local_140,local_138), iVar3 == 0)) && (-1 < param_3)
       ) {
      fios::print_tty4(*(undefined4 *)(iStack_184 + -0x743c),auStack_130,puVar1);
      return 0;
    }
  }
  return 1;
}



//==== 00531144  ns=Global  size=0x128
// sig: undefined FUN_00531144(void)
// callers(0): 
// callees(3): 0052cd7c FUN_0052cd7c; 0052ce28 FUN_0052ce28; 0052e984 FUN_0052e984

int FUN_00531144(int *param_1,undefined8 param_2)

{
  longlong lVar1;
  ulonglong uVar2;
  int iVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  
  dVar7 = *(double *)PTR_DAT_0071aef0;
  dVar5 = (double)DAT_0071aef4;
  dVar6 = (double)DAT_0071aef8;
  while( true ) {
    iVar3 = (*(code *)**(undefined4 **)(*param_1 + 0x2c))(param_1,param_2);
    if (iVar3 != -2) break;
    FUN_0052cd7c(param_1 + 0x26);
    do {
      lVar1 = TBLr;
    } while ((int)lVar1 == 0);
    dVar4 = dVar7 * dVar5;
    if (dVar4 < dVar6) {
      uVar2 = (ulonglong)dVar4;
    }
    else {
      uVar2 = (longlong)(dVar4 - dVar6) ^ 0x8000000000000000;
    }
    FUN_0052e984(lVar1 + uVar2);
    FUN_0052ce28(param_1 + 0x26);
  }
  return iVar3;
}



//==== 0053126c  ns=Global  size=0xcc
// sig: undefined FUN_0053126c(void)
// callers(0): 
// callees(4): 00510704 FUN_00510704; 0051ad6c FUN_0051ad6c; 0052df14 FUN_0052df14; 0052e5f8 FUN_0052e5f8

void FUN_0053126c(undefined4 *param_1)

{
  *param_1 = PTR_PTR_0071aefc;
  if (param_1[0x39] != 0) {
    (*(code *)**(undefined4 **)(**(int **)(PTR_DAT_0071af00 + 8) + 4))
              (*(int **)(PTR_DAT_0071af00 + 8),param_1[0x39],0x100b0103,0,0);
  }
  FUN_0052df14(param_1 + 0x2c);
  FUN_0052e5f8(param_1 + 0x26);
  FUN_0051ad6c(param_1);
  FUN_00510704(param_1,0x10000100,2);
  return;
}



//==== 00531338  ns=Global  size=0x1a8
// sig: undefined FUN_00531338(void)
// callers(4): 005314e0 FUN_005314e0; 0053159c FUN_0053159c; 00534d38 FUN_00534d38; 005350b0 FUN_005350b0
// callees(5): 00519ecc FUN_00519ecc; 0052cbd8 fios::print_tty4; 0052d370 FUN_0052d370; 0052e1dc FUN_0052e1dc; 005d0140 libc::memset
// strings: 00669448: 'cache' | 00669450: 'cache_rwlock' | 00669460: 'cache_fillFunnel' | 00669478: "cache(%lux%lu) failed to initialize: couldn't allocate %lu bytes for index\n"

void FUN_00531338(undefined4 *param_1,undefined8 param_2,uint param_3,undefined4 param_4)

{
  undefined4 *puVar1;
  uint uVar2;
  undefined *puVar3;
  int iVar4;
  
  FUN_00519ecc(param_1,PTR_s_cache_0071af04,param_2);
  puVar3 = PTR_s_cache_rwlock_0071af08;
  *param_1 = PTR_PTR_0071aefc;
  FUN_0052e1dc(param_1 + 0x26,puVar3);
  FUN_0052d370(param_1 + 0x2c,PTR_s_cache_fillFunnel_0071af0c);
  puVar1 = *(undefined4 **)(PTR_DAT_0071af00 + 8);
  *(undefined1 *)((int)param_1 + 0xda) = 0;
  param_1[0x3b] = 0xffffffff;
  *(undefined1 *)(param_1 + 0x36) = 0;
  param_1[0x3c] = 0;
  *(undefined1 *)((int)param_1 + 0xd9) = 0;
  *(undefined8 *)(param_1 + 0x3e) = 0;
  param_1[0x37] = param_4;
  param_1[0x40] = 0;
  param_1[0x38] = param_3;
  param_1[0x41] = 0;
  param_1[2] = 0x63616368;
  *(undefined8 *)(param_1 + 0x42) = 0;
  *(undefined1 *)((int)param_1 + 0xdb) = 1;
  param_1[0x39] = 0;
  *(undefined1 *)(param_1 + 0x3a) = 0;
  iVar4 = (*(code *)**(undefined4 **)*puVar1)
                    (puVar1,param_3 * 0x40 + (param_3 & 0x1fffffff) * -8,0x100b0103,0,0);
  param_1[0x39] = iVar4;
  if (iVar4 != 0) {
    libc::memset(iVar4,0,param_1[0x38] * 0x40 + (param_1[0x38] & 0x1fffffff) * -8);
  }
  if (param_1[0x39] == 0) {
    uVar2 = param_1[0x38];
    fios::print_tty4(PTR_s_cache__lux_lu__failed_to_initial_0071af10,uVar2,param_1[0x37],
                     uVar2 * 0x40 + (uVar2 & 0x1fffffff) * -8);
    *(undefined1 *)(param_1 + 0x36) = 1;
  }
  return;
}



//==== 005314e0  ns=Global  size=0xbc
// sig: undefined FUN_005314e0(void)
// callers(0): 
// callees(2): 0052cbd8 fios::print_tty4; 00531338 FUN_00531338
// strings: 006694c8: "ramcache(%lux%lu) failed to initialize: couldn't allocate %lu bytes for RAM cache\n"

void FUN_005314e0(undefined4 *param_1)

{
  int iVar1;
  int iVar2;
  undefined *puVar3;
  int iVar4;
  
  FUN_00531338();
  puVar3 = PTR_DAT_0071af00;
  iVar1 = param_1[0x38];
  *param_1 = PTR_PTR_0071af14;
  iVar2 = param_1[0x37];
  iVar4 = (*(code *)**(undefined4 **)**(undefined4 **)(puVar3 + 8))
                    (*(undefined4 **)(puVar3 + 8),iVar1 * iVar2,0x100c010c,0,0);
  param_1[0x44] = iVar4;
  if (iVar4 == 0) {
    fios::print_tty4(PTR_s_ramcache__lux_lu__failed_to_init_0071af18,param_1[0x38],param_1[0x37],
                     iVar1 * iVar2);
    *(undefined1 *)(param_1 + 0x36) = 1;
  }
  return;
}



//==== 0053159c  ns=Global  size=0xbc
// sig: undefined FUN_0053159c(void)
// callers(0): 
// callees(2): 0052cbd8 fios::print_tty4; 00531338 FUN_00531338
// strings: 006694c8: "ramcache(%lux%lu) failed to initialize: couldn't allocate %lu bytes for RAM cache\n"

void FUN_0053159c(undefined4 *param_1)

{
  int iVar1;
  int iVar2;
  undefined *puVar3;
  int iVar4;
  
  FUN_00531338();
  puVar3 = PTR_DAT_0071af00;
  iVar1 = param_1[0x38];
  *param_1 = PTR_PTR_0071af14;
  iVar2 = param_1[0x37];
  iVar4 = (*(code *)**(undefined4 **)**(undefined4 **)(puVar3 + 8))
                    (*(undefined4 **)(puVar3 + 8),iVar1 * iVar2,0x100c010c,0,0);
  param_1[0x44] = iVar4;
  if (iVar4 == 0) {
    fios::print_tty4(PTR_s_ramcache__lux_lu__failed_to_init_0071af18,param_1[0x38],param_1[0x37],
                     iVar1 * iVar2);
    *(undefined1 *)(param_1 + 0x36) = 1;
  }
  return;
}



//==== 00531658  ns=Global  size=0x140
// sig: undefined FUN_00531658(void)
// callers(2): 00534d38 FUN_00534d38; 005350b0 FUN_005350b0
// callees(5): 0051c030 fios::op_wait_result; 005207a0 fios::stat_setup; 0052cbd8 fios::print_tty4; 005c8510 libc::strlen; 005cd198 FUN_005cd198
// strings: 00669520: '%s/%s' | 00669528: "FIOS openCacheFile('%s') failed, err = %d\n"

undefined4 FUN_00531658(int param_1,char *param_2)

{
  longlong lVar1;
  ulonglong *puVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  char *__s;
  size_t sVar6;
  size_t sVar7;
  undefined4 uVar8;
  int iVar9;
  ulonglong unaff_r27;
  ulonglong unaff_r28;
  ulonglong unaff_r29;
  ulonglong unaff_r30;
  ulonglong unaff_r31;
  ulonglong in_LR;
  
  uVar5 = ZEXT48(&stack0x00000000);
  puVar2 = (ulonglong *)(uVar5 - 0xb0);
  *puVar2 = uVar5;
  puVar2[0x14] = unaff_r30;
  puVar2[0x11] = unaff_r27;
  puVar2[0x12] = unaff_r28;
  puVar2[0x15] = unaff_r31;
  puVar2[0x13] = unaff_r29;
  puVar2[0x18] = in_LR;
  __s = (char *)0x0;
  if (*(char *)(param_1 + 0x124) != '\0') {
    __s = (char *)(param_1 + 0x124);
  }
  sVar6 = libc::strlen(__s);
  sVar7 = libc::strlen(param_2);
  uVar3 = (longlong)(int)sVar7 + (longlong)(int)sVar6 + 2 & 0xffffffff;
  iVar9 = 0;
  lVar1 = (uVar5 - 0xb0) - (uVar3 + 0x1e & 0xfffffffffffffff0);
  *(ulonglong *)lVar1 = *puVar2;
  uVar4 = lVar1 + 0x70U & 0xffffffff;
  if (*(char *)(param_1 + 0x124) != '\0') {
    iVar9 = param_1 + 0x124;
  }
  FUN_005cd198(uVar4,uVar3,PTR_s__s__s_0071af1c,iVar9,param_2);
  uVar8 = *(undefined4 *)(param_1 + 0x11c);
  *(undefined4 *)(puVar2 + 0xe) = 0;
  uVar8 = fios::stat_setup(uVar8,0,uVar4,0xb,uVar5 - 0x40);
  iVar9 = fios::op_wait_result(uVar8,0);
  if (iVar9 == 0) {
    uVar8 = *(undefined4 *)(puVar2 + 0xe);
  }
  else {
    fios::print_tty4(PTR_s_FIOS_openCacheFile___s___failed__0071af20,uVar4,iVar9);
    uVar8 = 0;
  }
  return uVar8;
}



//==== 00531798  ns=Global  size=0x298
// sig: undefined FUN_00531798(void)
// callers(0): 
// callees(4): 0052cbd8 fios::print_tty4; 00530efc FUN_00530efc; 005c4d8c FUN_005c4d8c; 005c6094 FUN_005c6094
// strings: 00669558: 'FIOS cache lookup no existing descriptor while updating!\n'

void FUN_00531798(int param_1,uint param_2)

{
  ulonglong uVar1;
  longlong lVar2;
  int iVar3;
  int iVar4;
  ulonglong uVar5;
  uint uVar6;
  longlong lVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  int iVar10;
  int iVar11;
  ulonglong uVar12;
  uint uVar13;
  ulonglong uVar14;
  undefined1 auStack_90 [72];
  
  uVar8 = (ulonglong)*(uint *)(param_1 + 0x234);
  iVar10 = param_2 * 0x40 + (param_2 & 0x1fffffff) * -8;
  uVar1 = *(ulonglong *)(iVar10 + *(int *)(param_1 + 0xe4)) ^ 2;
  uVar9 = (longlong)uVar1 >> 0x3f;
  lVar7 = ((uVar9 ^ uVar1) - uVar9) + -1;
  if (lVar7 < 0) {
    uVar13 = *(uint *)(param_1 + 0x230);
    uVar1 = uVar8;
  }
  else {
    iVar4 = FUN_005c4d8c(auStack_90,*(undefined4 *)(param_1 + 0x230),*(uint *)(param_1 + 0x234),4,
                         PTR_PTR_0071af24);
    if (iVar4 == 0) {
      fios::print_tty4(PTR_s_FIOS_cache_lookup_no_existing_de_0071af28);
      return;
    }
    uVar13 = *(uint *)(param_1 + 0x230);
    uVar8 = (ulonglong)*(uint *)(param_1 + 0x234);
    uVar1 = (ulonglong)((int)(iVar4 - uVar13) >> 2);
  }
  uVar5 = (ulonglong)uVar13;
  uVar9 = 0;
  uVar14 = 0;
  iVar4 = (int)uVar1;
  if (0 < (int)uVar8) {
    uVar12 = 0;
    do {
      lVar2 = uVar8 + uVar12;
      uVar9 = (ulonglong)(lVar2 << 0x20) >> 0x21;
      uVar14 = (uVar9 & 0x3fffffff) * 4;
      iVar11 = (int)uVar14;
      iVar3 = FUN_00530efc(auStack_90,uVar14 + uVar5 & 0xffffffff);
      if (-1 < iVar3) {
        if ((iVar3 == 0) || (uVar12 = uVar9 + 1, uVar8 <= uVar12)) goto LAB_005318a4;
      }
      else {
        uVar8 = uVar9;
        if (uVar9 <= uVar12) goto LAB_005318a4;
      }
      uVar5 = (ulonglong)*(uint *)(param_1 + 0x230);
    } while( true );
  }
LAB_005318c0:
  uVar6 = (uint)uVar5;
  uVar13 = (uint)uVar9;
  iVar11 = (int)((uVar9 & 0x3fffffff) << 2);
  if ((int)uVar13 < iVar4) {
LAB_00531958:
    iVar11 = (int)uVar14;
    FUN_005c6094(uVar5 + uVar14 + 4 & 0xffffffff,uVar5 + uVar14 & 0xffffffff,
                 (uVar1 - uVar9 & 0x3fffffff) << 2);
    uVar6 = *(uint *)(param_1 + 0x230);
    goto LAB_005318d8;
  }
joined_r0x00531944:
  if (iVar4 < (int)uVar13) {
    uVar5 = uVar5 + (uVar1 & 0x3fffffff) * 4;
    FUN_005c6094(uVar5 & 0xffffffff,uVar5 + 4 & 0xffffffff,(uVar9 - uVar1 & 0x3fffffff) << 2);
    uVar6 = *(uint *)(param_1 + 0x230);
  }
LAB_005318d8:
  *(int *)(iVar11 + uVar6) = iVar10 + *(int *)(param_1 + 0xe4);
  if (lVar7 < 0) {
    *(int *)(param_1 + 0x234) = *(int *)(param_1 + 0x234) + 1;
  }
  return;
LAB_005318a4:
  uVar13 = (uint)lVar2 >> 1;
  if ((int)uVar13 < iVar4) {
    if (0 < iVar3) {
      uVar9 = uVar9 + 1;
      uVar5 = (ulonglong)*(uint *)(param_1 + 0x230);
      uVar14 = uVar9 * 4 & 0xfffffffc;
      goto LAB_005318c0;
    }
    uVar5 = (ulonglong)*(uint *)(param_1 + 0x230);
    goto LAB_00531958;
  }
  if ((iVar4 < (int)uVar13) && (-1 >= iVar3)) {
    uVar9 = uVar9 - 1;
    uVar5 = (ulonglong)*(uint *)(param_1 + 0x230);
    uVar14 = (uVar9 & 0x3fffffff) << 2;
    goto LAB_005318c0;
  }
  uVar6 = *(uint *)(param_1 + 0x230);
  uVar5 = (ulonglong)uVar6;
  goto joined_r0x00531944;
}



//==== 00531a30  ns=Global  size=0x110
// sig: undefined FUN_00531a30(void)
// callers(0): 
// callees(3): 0052cbd8 fios::print_tty4; 005c4d8c FUN_005c4d8c; 005c6094 FUN_005c6094
// strings: 00531b1c: 'H\tEy`' (raw) | 00669598: 'FIOS cache lookup no existing descriptor on removal!\n'

void FUN_00531a30(int param_1)

{
  ulonglong uVar1;
  int iVar2;
  int iVar3;
  ulonglong uVar4;
  undefined1 auStack_50 [72];
  
  iVar2 = FUN_005c4d8c(auStack_50,*(undefined4 *)(param_1 + 0x230),*(undefined4 *)(param_1 + 0x234),
                       4,PTR_PTR_0071af24);
  if (iVar2 == 0) {
    fios::print_tty4(PTR_s_FIOS_cache_lookup_no_existing_de_0071af2c);
  }
  else {
    uVar4 = (ulonglong)*(uint *)(param_1 + 0x234);
    iVar3 = *(int *)(param_1 + 0x230);
    iVar2 = iVar2 - iVar3 >> 2;
    if (1 < (int)*(uint *)(param_1 + 0x234)) {
      uVar1 = (uVar4 - (longlong)iVar2) - 1;
      iVar2 = iVar3 + iVar2 * 4;
      if ((int)uVar1 != 0) {
        FUN_005c6094(iVar2,iVar2 + 4,(uVar1 & 0x3fffffff) << 2);
        uVar4 = (ulonglong)*(uint *)(param_1 + 0x234);
        iVar3 = *(int *)(param_1 + 0x230);
      }
    }
    *(int *)(param_1 + 0x234) = (int)(uVar4 - 1);
    *(undefined4 *)((int)((uVar4 - 1 & 0xffffffff) << 2) + iVar3) = 0;
  }
  return;
}



//==== 00531b40  ns=Global  size=0x1a8
// sig: undefined FUN_00531b40(void)
// callers(0): 
// callees(5): 00519ecc FUN_00519ecc; 0052cbd8 fios::print_tty4; 0052d370 FUN_0052d370; 0052e1dc FUN_0052e1dc; 005d0140 libc::memset
// strings: 00669448: 'cache' | 00669450: 'cache_rwlock' | 00669460: 'cache_fillFunnel' | 00669478: "cache(%lux%lu) failed to initialize: couldn't allocate %lu bytes for index\n"

void FUN_00531b40(undefined4 *param_1,undefined8 param_2,uint param_3,undefined4 param_4)

{
  undefined4 *puVar1;
  uint uVar2;
  undefined *puVar3;
  int iVar4;
  
  FUN_00519ecc(param_1,PTR_s_cache_0071af04,param_2);
  puVar3 = PTR_s_cache_rwlock_0071af08;
  *param_1 = PTR_PTR_0071aefc;
  FUN_0052e1dc(param_1 + 0x26,puVar3);
  FUN_0052d370(param_1 + 0x2c,PTR_s_cache_fillFunnel_0071af0c);
  puVar1 = *(undefined4 **)(PTR_DAT_0071af00 + 8);
  *(undefined1 *)((int)param_1 + 0xda) = 0;
  param_1[0x3b] = 0xffffffff;
  *(undefined1 *)(param_1 + 0x36) = 0;
  param_1[0x3c] = 0;
  *(undefined1 *)((int)param_1 + 0xd9) = 0;
  *(undefined8 *)(param_1 + 0x3e) = 0;
  param_1[0x37] = param_4;
  param_1[0x40] = 0;
  param_1[0x38] = param_3;
  param_1[0x41] = 0;
  param_1[2] = 0x63616368;
  *(undefined8 *)(param_1 + 0x42) = 0;
  *(undefined1 *)((int)param_1 + 0xdb) = 1;
  param_1[0x39] = 0;
  *(undefined1 *)(param_1 + 0x3a) = 0;
  iVar4 = (*(code *)**(undefined4 **)*puVar1)
                    (puVar1,param_3 * 0x40 + (param_3 & 0x1fffffff) * -8,0x100b0103,0,0);
  param_1[0x39] = iVar4;
  if (iVar4 != 0) {
    libc::memset(iVar4,0,param_1[0x38] * 0x40 + (param_1[0x38] & 0x1fffffff) * -8);
  }
  if (param_1[0x39] == 0) {
    uVar2 = param_1[0x38];
    fios::print_tty4(PTR_s_cache__lux_lu__failed_to_initial_0071af10,uVar2,param_1[0x37],
                     uVar2 * 0x40 + (uVar2 & 0x1fffffff) * -8);
    *(undefined1 *)(param_1 + 0x36) = 1;
  }
  return;
}



//==== 00531ce8  ns=Global  size=0x17c
// sig: undefined FUN_00531ce8(void)
// callers(0): 
// callees(2): 0051c9a4 FUN_0051c9a4; 005260ac FUN_005260ac
// strings: 006695d0: 'HDD cache' | 006695e0: 'RAM cache'

void FUN_00531ce8(int *param_1,uint param_2,undefined4 param_3)

{
  undefined *puVar1;
  undefined8 *puVar2;
  int iVar3;
  
  (*(code *)**(undefined4 **)(*param_1 + 0x40))(param_1,param_2);
  iVar3 = param_2 * 0x40 + (param_2 & 0x1fffffff) * -8;
  if ((*(uint *)(PTR_DAT_0071af00 + 0x18) & 2) != 0) {
    puVar1 = PTR_s_RAM_cache_0071af34;
    if (*(char *)((int)param_1 + 0xd9) != '\0') {
      puVar1 = PTR_s_HDD_cache_0071af30;
    }
    iVar3 = param_2 * 0x40 + (param_2 & 0x1fffffff) * -8;
    FUN_005260ac(puVar1,*(undefined8 *)(iVar3 + param_1[0x39] + 0x18),
                 *(uint *)(iVar3 + param_1[0x39] + 0x20) & 0x3fffffff,param_2,param_3);
  }
  puVar2 = (undefined8 *)(iVar3 + param_1[0x39]);
  puVar2[3] = 0;
  *puVar2 = 2;
  puVar2[4] = puVar2[4] & 0x7fffffffffffffff;
  *(ulonglong *)(iVar3 + param_1[0x39] + 0x20) =
       *(ulonglong *)(iVar3 + param_1[0x39] + 0x20) & 0xc0000000ffffffff;
  FUN_0051c9a4(iVar3 + param_1[0x39] + 0x28,0);
  (*(code *)**(undefined4 **)(*param_1 + 0x3c))(param_1,param_2);
  return;
}



//==== 00531e64  ns=Global  size=0x100
// sig: undefined FUN_00531e64(void)
// callers(0): 
// callees(3): 0051c9a4 FUN_0051c9a4; 0052c8c4 FUN_0052c8c4; 005c4d8c FUN_005c4d8c

int FUN_00531e64(int param_1,int *param_2)

{
  longlong *plVar1;
  int *piVar3;
  longlong lVar2;
  int iVar4;
  undefined1 auStack_60 [40];
  undefined1 local_38 [32];
  
  iVar4 = -1;
  if (*param_2 != 0) {
    FUN_0051c9a4(local_38,*param_2);
  }
  piVar3 = (int *)FUN_005c4d8c(auStack_60,*(undefined4 *)(param_1 + 0x230),
                               *(undefined4 *)(param_1 + 0x234),4,PTR_PTR_0071af24);
  if (piVar3 != (int *)0x0) {
    iVar4 = *piVar3 - *(int *)(param_1 + 0xe4) >> 3;
    plVar1 = (longlong *)(*(int *)(param_1 + 0xe4) + iVar4 * 8);
    if (*plVar1 != 3) {
      lVar2 = FUN_0052c8c4();
      *plVar1 = lVar2;
      return iVar4 * -0x49249249;
    }
    iVar4 = -2;
  }
  return iVar4;
}



//==== 00531f64  ns=Global  size=0x11c
// sig: undefined FUN_00531f64(void)
// callers(0): 
// callees(2): 0051c9a4 FUN_0051c9a4; 0052c8c4 FUN_0052c8c4

int FUN_00531f64(int param_1,int *param_2)

{
  longlong lVar1;
  longlong *plVar2;
  int iVar3;
  ulonglong uVar4;
  undefined1 local_30 [24];
  
  if (*param_2 != 0) {
    FUN_0051c9a4(local_30,*param_2);
  }
  if (0 < (int)*(uint *)(param_1 + 0xe0)) {
    uVar4 = (ulonglong)*(uint *)(param_1 + 0xe0);
    plVar2 = *(longlong **)(param_1 + 0xe4);
    iVar3 = 0;
    do {
      if ((*plVar2 != 2) && (*(longlong *)(param_2 + 2) == plVar2[3])) {
        if (*param_2 == 0) {
          lVar1 = plVar2[5];
        }
        else {
          if (plVar2[5] != 0) goto LAB_00531fd4;
          lVar1 = plVar2[6];
        }
        if (lVar1 == 0) {
          if (*plVar2 != 3) {
            lVar1 = FUN_0052c8c4();
            *plVar2 = lVar1;
            return iVar3;
          }
          return -2;
        }
      }
LAB_00531fd4:
      iVar3 = iVar3 + 1;
      plVar2 = plVar2 + 7;
      uVar4 = uVar4 - 1;
    } while (uVar4 != 0);
  }
  return -1;
}



//==== 00532080  ns=Global  size=0xb4
// sig: undefined FUN_00532080(void)
// callers(0): 
// callees(3): 0051ad6c FUN_0051ad6c; 0052df14 FUN_0052df14; 0052e5f8 FUN_0052e5f8

void FUN_00532080(undefined4 *param_1)

{
  *param_1 = PTR_PTR_0071aefc;
  if (param_1[0x39] != 0) {
    (*(code *)**(undefined4 **)(**(int **)(PTR_DAT_0071af00 + 8) + 4))
              (*(int **)(PTR_DAT_0071af00 + 8),param_1[0x39],0x100b0103,0,0);
  }
  FUN_0052df14(param_1 + 0x2c);
  FUN_0052e5f8(param_1 + 0x26);
  FUN_0051ad6c(param_1);
  return;
}



//==== 00532134  ns=Global  size=0xb4
// sig: undefined FUN_00532134(void)
// callers(6): 00532e54 FUN_00532e54; 00532f40 FUN_00532f40; 00532ff4 FUN_00532ff4; 005342d4 FUN_005342d4; 00535428 FUN_00535428; 0053562c FUN_0053562c
// callees(3): 0051ad6c FUN_0051ad6c; 0052df14 FUN_0052df14; 0052e5f8 FUN_0052e5f8

void FUN_00532134(undefined4 *param_1)

{
  *param_1 = PTR_PTR_0071aefc;
  if (param_1[0x39] != 0) {
    (*(code *)**(undefined4 **)(**(int **)(PTR_DAT_0071af00 + 8) + 4))
              (*(int **)(PTR_DAT_0071af00 + 8),param_1[0x39],0x100b0103,0,0);
  }
  FUN_0052df14(param_1 + 0x2c);
  FUN_0052e5f8(param_1 + 0x26);
  FUN_0051ad6c(param_1);
  return;
}



//==== 005321e8  ns=Global  size=0x280
// sig: undefined FUN_005321e8(void)
// callers(0): 
// callees(3): 0051c8d4 fios::hash_path_string; 005309c8 FUN_005309c8; 00530b28 FUN_00530b28

void FUN_005321e8(int param_1,int param_2)

{
  int *piVar1;
  int *piVar2;
  undefined *puVar3;
  int iVar4;
  int iVar5;
  undefined1 auStack_100 [8];
  longlong local_f8;
  uint local_f0;
  undefined4 local_ec;
  undefined1 local_e0 [12];
  int local_d4;
  undefined1 local_d0 [16];
  undefined1 local_c0 [16];
  undefined1 local_b0 [16];
  undefined1 local_a0 [16];
  undefined4 local_90;
  undefined2 local_8c;
  
  piVar1 = *(int **)(param_2 + 0x24);
  if ((*piVar1 == 10) || ((*piVar1 == 0x11 && (*(char *)(param_1 + 0xd9) != '\0')))) {
    if (*(longlong *)(piVar1 + 0x10) == 0x7fffffffffffffff) {
      iVar4 = 0x20;
    }
    else {
      iVar4 = FUN_00530b28(param_1,piVar1);
      if (iVar4 < 1) {
        return;
      }
    }
    puVar3 = PTR_DAT_0071af38;
    iVar5 = 0;
    do {
      FUN_005309c8(param_1,piVar1,iVar5,auStack_100);
      local_90 = 0;
      local_8c = 0;
      local_d0 = (undefined1  [16])0x0;
      _local_e0 = ZEXT816(0);
      local_a0 = (undefined1  [16])0x0;
      iVar5 = iVar5 + 1;
      local_c0 = (undefined1  [16])0x0;
      local_b0 = (undefined1  [16])0x0;
      fios::hash_path_string(0);
      local_d0._8_4_ = *(undefined4 *)(puVar3 + 8);
      stack0xffffff24 = local_e0 << 0x20;
      local_e0._0_4_ = 10;
      local_8c = *(undefined2 *)(piVar1 + 0x15);
      local_d0._4_4_ = piVar1[5];
      local_d0._0_4_ = piVar1[4];
      local_d0._8_4_ = piVar1[6];
      local_c0._8_4_ = piVar1[10];
      local_c0._0_8_ = *(undefined8 *)(piVar1 + 8);
      local_e0._8_4_ = piVar1[2];
      local_d4 = piVar1[3];
      local_a0._4_4_ = local_ec;
      local_a0._0_4_ = 0;
      local_b0._0_8_ = local_f8 + (ulonglong)local_f0;
      local_90 = 0;
      piVar2 = *(int **)(param_1 + 0x40);
      *(undefined1 **)(param_2 + 0x24) = local_e0;
      (*(code *)**(undefined4 **)(*piVar2 + 8))(piVar2,param_2);
      *(int **)(param_2 + 0x24) = piVar1;
    } while (iVar5 < iVar4);
  }
  else {
    (*(code *)**(undefined4 **)(**(int **)(param_1 + 0x40) + 8))(*(int **)(param_1 + 0x40),param_2);
  }
  return;
}



//==== 00532468  ns=Global  size=0x1f8
// sig: undefined FUN_00532468(void)
// callers(0): 
// callees(3): 0051c9a4 FUN_0051c9a4; 0052cc20 FUN_0052cc20; 0052cccc fios::rwlock_wlock_checked
// strings: 006695f0: 'cache-flushfil'

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_00532468(int *param_1,int param_2,longlong param_3,longlong param_4)

{
  int iVar1;
  longlong lVar2;
  longlong *plVar4;
  longlong lVar3;
  int iVar5;
  int iVar6;
  int iVar7;
  longlong in_stack_00000040;
  longlong local_70;
  longlong local_60;
  longlong local_58;
  
  if (param_2 != 0) {
    FUN_0051c9a4(&local_60,param_2);
    fios::rwlock_wlock_checked(param_1 + 0x26);
    iVar1 = param_1[0x38];
    if (0 < iVar1) {
      iVar5 = 0;
      iVar6 = 0;
      do {
        while( true ) {
          plVar4 = (longlong *)(iVar5 + param_1[0x39]);
          iVar5 = iVar5 + 0x38;
          if (((*plVar4 - 2U < 2) || (plVar4[5] != local_60)) || (plVar4[6] != local_58)) break;
          lVar2 = param_3 + param_4;
          if (param_3 < plVar4[3]) {
            lVar3 = plVar4[3];
            local_70 = ((ulonglong)*(uint *)(plVar4 + 4) & 0x3fffffff) + plVar4[3];
            if (local_70 <= lVar2) goto LAB_0053261c;
LAB_00532598:
            if (lVar2 <= lVar3) break;
          }
          else {
            local_70 = ((ulonglong)*(uint *)(plVar4 + 4) & 0x3fffffff) + plVar4[3];
            lVar3 = in_stack_00000040;
            if (lVar2 < local_70) goto LAB_00532598;
LAB_0053261c:
            if (local_70 <= lVar3) break;
          }
          iVar7 = iVar6 + 1;
          (*(code *)**(undefined4 **)(*param_1 + 0x38))(param_1,iVar6,PTR_s_cache_flushfil_0071af3c)
          ;
          iVar1 = param_1[0x38];
          iVar6 = iVar7;
          if (iVar1 <= iVar7) goto LAB_005325dc;
        }
        iVar6 = iVar6 + 1;
      } while (iVar6 < iVar1);
    }
LAB_005325dc:
    FUN_0052cc20(param_1 + 0x26);
  }
  return;
}



//==== 00532660  ns=Global  size=0x1e8
// sig: undefined FUN_00532660(void)
// callers(2): 0051daac FUN_0051daac; 00532848 FUN_00532848
// callees(5): 0051c8d4 fios::hash_path_string; 0052cd7c FUN_0052cd7c; 0052ce28 FUN_0052ce28; 005309c8 FUN_005309c8; 00530b28 FUN_00530b28

undefined4 FUN_00532660(int *param_1,undefined4 param_2)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined1 auStack_c0 [32];
  undefined1 local_a0 [104];
  
  fios::hash_path_string(0);
  fios::hash_path_string(param_2);
  piVar1 = param_1 + 0x26;
  FUN_0052ce28(piVar1);
  iVar2 = FUN_00530b28(param_1,local_a0);
  if (0 < iVar2) {
    iVar3 = 0;
    do {
      iVar4 = iVar3 + 1;
      FUN_005309c8(param_1,local_a0,iVar3,auStack_c0);
      iVar3 = (*(code *)**(undefined4 **)(*param_1 + 0x2c))(param_1,auStack_c0);
      if (iVar3 == -1) {
        FUN_0052cd7c(piVar1);
        return 0;
      }
      iVar3 = iVar4;
    } while (iVar2 != iVar4);
  }
  FUN_0052cd7c(piVar1);
  return 1;
}



//==== 00532848  ns=Global  size=0x78
// sig: undefined FUN_00532848(void)
// callers(1): 00520d80 FUN_00520d80
// callees(2): 005193cc FUN_005193cc; 00532660 FUN_00532660

undefined1 FUN_00532848(undefined4 param_1,undefined8 param_2)

{
  undefined1 uVar1;
  undefined1 auStack_140 [272];
  
  FUN_005193cc(auStack_140,param_2,0x100);
  uVar1 = FUN_00532660(param_1,auStack_140);
  return uVar1;
}



//==== 005328c0  ns=Global  size=0xdc
// sig: undefined FUN_005328c0(void)
// callers(0): 
// callees(2): 0052cc20 FUN_0052cc20; 0052cccc fios::rwlock_wlock_checked
// strings: 00669600: 'cache-flush'

void FUN_005328c0(int *param_1)

{
  longlong *plVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  
  fios::rwlock_wlock_checked(param_1 + 0x26);
  iVar2 = param_1[0x38];
  if (0 < iVar2) {
    iVar3 = 0;
    iVar4 = 0;
    do {
      plVar1 = (longlong *)(iVar3 + param_1[0x39]);
      iVar5 = iVar4 + 1;
      iVar3 = iVar3 + 0x38;
      if (1 < *plVar1 - 2U) {
        (*(code *)**(undefined4 **)(*param_1 + 0x38))(param_1,iVar4,PTR_s_cache_flush_0071af40);
        iVar2 = param_1[0x38];
      }
      iVar4 = iVar5;
    } while (iVar5 < iVar2);
  }
  FUN_0052cc20(param_1 + 0x26);
  return;
}



//==== 0053299c  ns=Global  size=0x200
// sig: undefined FUN_0053299c(void)
// callers(2): 00534d38 FUN_00534d38; 005350b0 FUN_005350b0
// callees(6): 00519f24 FUN_00519f24; 0051c030 fios::op_wait_result; 00521228 FUN_00521228; 00521794 fios::read_setup; 0052cbd8 fios::print_tty4; 005cc578 libc::strchr
// strings: 00669658: "createDirectories: couldn't create '%s' when creating '%s'. err = %d\n" | 00669610: "createDirectories: couldn't stat '%s' when creating '%s'. err = %d\n"

int FUN_0053299c(undefined8 param_1,undefined8 param_2)

{
  undefined4 uVar1;
  int iVar2;
  char *pcVar3;
  byte in_cr0;
  byte in_cr1;
  byte in_cr2;
  byte in_cr3;
  byte unaff_cr4;
  byte in_cr5;
  byte in_cr6;
  byte in_cr7;
  uint uStack00000008;
  char local_150 [8];
  undefined1 uStack_148;
  char acStack_147 [271];
  
  uStack00000008 =
       (uint)(in_cr0 & 0xf) << 0x1c | (uint)(in_cr1 & 0xf) << 0x18 | (uint)(in_cr2 & 0xf) << 0x14 |
       (uint)(in_cr3 & 0xf) << 0x10 | (uint)(unaff_cr4 & 0xf) << 0xc | (uint)(in_cr5 & 0xf) << 8 |
       (uint)(in_cr6 & 0xf) << 4 | (uint)(in_cr7 & 0xf);
  uVar1 = fios::read_setup(param_1,0,param_2,local_150,5);
  iVar2 = fios::op_wait_result(uVar1,0);
  if ((iVar2 != 0) || (local_150[0] == '\0')) {
    FUN_00519f24(param_2,&uStack_148);
    pcVar3 = libc::strchr(acStack_147,0x2f);
    while( true ) {
      if (pcVar3 != (char *)0x0) {
        *pcVar3 = '\0';
      }
      uVar1 = fios::read_setup(param_1,0,&uStack_148,local_150,5);
      iVar2 = fios::op_wait_result(uVar1,0);
      if (iVar2 != 0) {
        fios::print_tty4(PTR_s_createDirectories__couldn_t_stat_0071af44,&uStack_148,param_2,iVar2);
        return iVar2;
      }
      if (local_150[0] == '\0') {
        uVar1 = FUN_00521228(param_1,0,&uStack_148);
        iVar2 = fios::op_wait_result(uVar1,0);
        if (iVar2 != 0) {
          fios::print_tty4(PTR_s_createDirectories__couldn_t_crea_0071af48,&uStack_148,param_2,iVar2
                          );
          return iVar2;
        }
      }
      if (pcVar3 == (char *)0x0) break;
      *pcVar3 = '/';
      pcVar3 = libc::strchr(pcVar3 + 1,0x2f);
    }
  }
  return 0;
}



//==== 00532b9c  ns=Global  size=0x180
// sig: undefined FUN_00532b9c(void)
// callers(0): 
// callees(3): 0052cc20 FUN_0052cc20; 0052cccc fios::rwlock_wlock_checked; 00530b80 FUN_00530b80
// strings: 006696a0: 'cache-flushprt'

void FUN_00532b9c(int *param_1,longlong param_2)

{
  ulonglong uVar1;
  longlong *plVar2;
  longlong lVar3;
  int iVar4;
  
  if ((longlong)((longlong)param_1[0x38] * (ulonglong)(uint)param_1[0x37]) <= param_2) {
    (*(code *)**(undefined4 **)(*param_1 + 0x1c))(param_1);
    return;
  }
  fios::rwlock_wlock_checked(param_1 + 0x26);
  if ((0 < param_2) && (0 < param_1[0x38])) {
    lVar3 = 0;
    iVar4 = 0;
    while( true ) {
      iVar4 = iVar4 + 1;
      uVar1 = FUN_00530b80(param_1,0);
      plVar2 = (longlong *)
               (((int)((uVar1 & 0xffffffff) << 6) - (int)((uVar1 & 0xffffffff) << 3)) +
               param_1[0x39]);
      if (*plVar2 - 2U < 2) break;
      lVar3 = lVar3 + ((ulonglong)*(uint *)(plVar2 + 4) & 0x3fffffff);
      (*(code *)**(undefined4 **)(*param_1 + 0x38))
                (param_1,(int)uVar1,PTR_s_cache_flushprt_0071af4c);
      if ((param_2 <= lVar3) || (param_1[0x38] <= iVar4)) break;
    }
  }
  FUN_0052cc20(param_1 + 0x26);
  return;
}



//==== 00532d1c  ns=Global  size=0x138
// sig: undefined FUN_00532d1c(void)
// callers(6): 00532e54 FUN_00532e54; 00532f40 FUN_00532f40; 00532ff4 FUN_00532ff4; 005342d4 FUN_005342d4; 00535428 FUN_00535428; 0053562c FUN_0053562c
// callees(3): 00519150 FUN_00519150; 0052cbd8 fios::print_tty4; 005cd198 FUN_005cd198
// strings: 006696b0: '%0.1f%s' | 006696b8: '%s statistics:\n  Cache hits:   %-8lu (%s)\n  Cache misses: %-8lu\n  Cache fills:  %-8lu (%s)\n'

void FUN_00532d1c(int param_1,undefined4 param_2)

{
  undefined *puVar1;
  float local_130;
  undefined4 local_12c;
  undefined1 auStack_128 [100];
  float local_c4;
  undefined4 local_c0;
  undefined1 auStack_bc [124];
  
  instructionSynchronize();
  FUN_00519150(*(undefined8 *)(param_1 + 0xf8),&local_130,&local_12c);
  puVar1 = PTR_s__0_1f_s_0071af50;
  FUN_005cd198((double)local_130,auStack_128,100,PTR_s__0_1f_s_0071af50,(double)local_130,local_12c)
  ;
  instructionSynchronize();
  FUN_00519150(*(undefined8 *)(param_1 + 0x108),&local_c4,&local_c0);
  FUN_005cd198((double)local_c4,auStack_bc,100,puVar1,(double)local_c4,local_c0);
  instructionSynchronize();
  instructionSynchronize();
  instructionSynchronize();
  fios::print_tty4(PTR_s__s_statistics__Cache_hits____8lu_0071af54,param_2,
                   *(undefined4 *)(param_1 + 0xf0),auStack_128,*(undefined4 *)(param_1 + 0x100),
                   *(undefined4 *)(param_1 + 0x104),auStack_bc);
  return;
}



//==== 00532e54  ns=Global  size=0xec
// sig: undefined FUN_00532e54(void)
// callers(0): 
// callees(3): 00510704 FUN_00510704; 00532134 FUN_00532134; 00532d1c FUN_00532d1c
// strings: 006695e0: 'RAM cache'

void FUN_00532e54(undefined4 *param_1)

{
  *param_1 = PTR_PTR_0071af14;
  if (param_1[0x44] != 0) {
    (*(code *)**(undefined4 **)(**(int **)(PTR_DAT_0071af00 + 8) + 4))
              (*(int **)(PTR_DAT_0071af00 + 8),param_1[0x44],0x100c010c,0,0);
  }
  if (*PTR_PTR_0071af58 != '\0') {
    FUN_00532134(param_1);
    FUN_00510704(param_1,0x10000100,3);
    return;
  }
  FUN_00532d1c(param_1,PTR_s_RAM_cache_0071af34);
  FUN_00532134(param_1);
  FUN_00510704(param_1,0x10000100,3);
  return;
}



//==== 00532f40  ns=Global  size=0xb4
// sig: undefined FUN_00532f40(void)
// callers(0): 
// callees(2): 00532134 FUN_00532134; 00532d1c FUN_00532d1c
// strings: 006695e0: 'RAM cache'

void FUN_00532f40(undefined4 *param_1)

{
  *param_1 = PTR_PTR_0071af14;
  if (param_1[0x44] != 0) {
    (*(code *)**(undefined4 **)(**(int **)(PTR_DAT_0071af00 + 8) + 4))
              (*(int **)(PTR_DAT_0071af00 + 8),param_1[0x44],0x100c010c,0,0);
  }
  if (*PTR_PTR_0071af58 != '\0') {
    FUN_00532134(param_1);
    return;
  }
  FUN_00532d1c(param_1,PTR_s_RAM_cache_0071af34);
  FUN_00532134(param_1);
  return;
}



//==== 00532ff4  ns=Global  size=0xb4
// sig: undefined FUN_00532ff4(void)
// callers(0): 
// callees(2): 00532134 FUN_00532134; 00532d1c FUN_00532d1c
// strings: 006695e0: 'RAM cache'

void FUN_00532ff4(undefined4 *param_1)

{
  *param_1 = PTR_PTR_0071af14;
  if (param_1[0x44] != 0) {
    (*(code *)**(undefined4 **)(**(int **)(PTR_DAT_0071af00 + 8) + 4))
              (*(int **)(PTR_DAT_0071af00 + 8),param_1[0x44],0x100c010c,0,0);
  }
  if (*PTR_PTR_0071af58 != '\0') {
    FUN_00532134(param_1);
    return;
  }
  FUN_00532d1c(param_1,PTR_s_RAM_cache_0071af34);
  FUN_00532134(param_1);
  return;
}



//==== 005330a8  ns=Global  size=0x98
// sig: undefined FUN_005330a8(void)
// callers(0): 
// callees(1): 005c5ad0 libc::memcpy

undefined8 FUN_005330a8(int param_1,undefined4 param_2,int param_3,void *param_4,int param_5)

{
  size_t __n;
  void *__dest;
  undefined4 uStack00000038;
  
  __n = *(size_t *)(param_5 + 0x14);
  __dest = (void *)(param_3 * *(int *)(param_1 + 0xdc) + *(int *)(param_1 + 0x110));
  uStack00000038 = param_2;
  if (__n < 0x1000) {
    libc::memcpy(__dest,param_4,__n);
  }
  else {
    (*(code *)**(undefined4 **)(PTR_DAT_0071af00 + 0x10))(__dest,param_4,__n);
  }
  *(undefined4 *)(param_5 + 0x18) = *(undefined4 *)(param_5 + 0x14);
  return 1;
}



//==== 00533140  ns=Global  size=0x6a8
// sig: undefined FUN_00533140(void)
// callers(0): 
// callees(5): 0051c030 fios::op_wait_result; 0052521c fios::read_req_setup; 00525524 FUN_00525524; 0052cbd8 fios::print_tty4; 005d0140 libc::memset
// strings: 00669718: 'FIOS cache descriptor[%d] load failed, err = %d\n' | 00669750: 'FIOS cache index padding failed, err = %d\n'

/* WARNING: Removing unreachable block (ram,0x00533280) */
/* WARNING: Removing unreachable block (ram,0x005332a0) */
/* WARNING: Removing unreachable block (ram,0x0053330c) */
/* WARNING: Removing unreachable block (ram,0x005333d8) */
/* WARNING: Removing unreachable block (ram,0x0053336c) */
/* WARNING: Removing unreachable block (ram,0x00533378) */
/* WARNING: Removing unreachable block (ram,0x0053338c) */

void FUN_00533140(int param_1)

{
  undefined8 *puVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  uint uVar8;
  uint uVar9;
  undefined1 local_a0 [24];
  undefined1 local_88 [40];
  
  uVar6 = *(uint *)(param_1 + 0x22c);
  uVar9 = uVar6 * ((uVar6 + 0x37) / uVar6);
  iVar3 = 0;
  iVar7 = uVar6 * ((uVar6 + 0x2f) / uVar6);
  do {
    if (*(int *)(param_1 + 0xe0) < 1) {
      return;
    }
    if (iVar3 != 0) goto LAB_005336e4;
    iVar3 = -0xac;
    if ((int)(0x10000 / uVar9) <= *(int *)(param_1 + 0xe0)) {
      iVar3 = -0xa8;
    }
    uVar2 = fios::read_req_setup
                      (*(undefined4 *)(*(int *)(param_1 + 0x224) + 8),local_88,
                       *(int *)(param_1 + 0x224),*(undefined4 *)(param_1 + 0x260),
                       uVar9 * *(int *)(&stack0x00000000 + iVar3),iVar7);
    iVar3 = fios::op_wait_result(uVar2,local_a0);
  } while ((iVar3 == -0x7ffef8f7) || (iVar3 == 0));
  fios::print_tty4(PTR_s_FIOS_cache_descriptor__d__load_f_0071af5c,0,iVar3);
  if (0 < *(int *)(param_1 + 0xe0)) {
LAB_005336e4:
    libc::memset(*(undefined4 *)(param_1 + 0x260),0,0x10000);
    uVar6 = 0;
    while (uVar8 = uVar6, (int)uVar8 < *(int *)(param_1 + 0xe0)) {
      iVar3 = -0xa4;
      if ((int)(0x10000 / uVar9) <= (int)(*(int *)(param_1 + 0xe0) - uVar8)) {
        iVar3 = -0xb0;
      }
      iVar3 = *(int *)(&stack0x00000000 + iVar3);
      uVar2 = FUN_00525524(*(undefined4 *)(param_1 + 0x11c),local_88,
                           *(undefined4 *)(param_1 + 0x224),*(undefined4 *)(param_1 + 0x260),
                           uVar9 * iVar3,iVar7 + uVar9 * uVar8);
      iVar4 = fios::op_wait_result(uVar2,0);
      if (iVar4 != 0) {
        fios::print_tty4(PTR_s_FIOS_cache_index_padding_failed__0071af60,iVar4);
        return;
      }
      uVar6 = uVar8 + iVar3;
      if ((int)uVar8 < (int)uVar6) {
        iVar4 = uVar6 - uVar8;
        iVar3 = *(int *)(param_1 + 0xe4);
        iVar5 = uVar8 * 0x40 + (uVar8 & 0x1fffffff) * -8;
        do {
          puVar1 = (undefined8 *)(iVar5 + iVar3);
          iVar5 = iVar5 + 0x38;
          *puVar1 = 2;
          iVar4 = iVar4 + -1;
        } while (iVar4 != 0);
      }
    }
  }
  return;
}



//==== 005337e8  ns=Global  size=0x2f8
// sig: undefined FUN_005337e8(void)
// callers(0): 
// callees(7): 0051c030 fios::op_wait_result; 005205b4 FUN_005205b4; 0052138c FUN_0052138c; 00527ccc FUN_00527ccc; 0052c8c4 FUN_0052c8c4; 0052cbd8 fios::print_tty4; 005cd198 FUN_005cd198
// strings: 00669520: '%s/%s' | 00669780: 'cache.dat' | 00669790: '%s/cach%04X.dat' | 006697a0: 'FIOS cache block[%d] write failed: err = %d\n' | 006695d0: 'HDD cache' | 006695e0: 'RAM cache'

undefined4 FUN_005337e8(int *param_1,int param_2,uint param_3,longlong param_4,int param_5)

{
  uint uVar1;
  undefined *puVar2;
  undefined4 uVar4;
  int iVar5;
  undefined8 uVar3;
  int *piVar6;
  ulonglong uVar7;
  int iVar8;
  undefined1 local_180 [40];
  undefined1 auStack_158 [264];
  
  if (*(char *)(param_1 + 0x46) == '\0') {
    if (*(char *)(param_1 + 0x49) == '\0') {
      uVar7 = 0;
      FUN_005cd198(auStack_158,0x100,PTR_s__s_cach_04X_dat_0071af68,0,param_3);
    }
    else {
      uVar7 = 0;
      FUN_005cd198(auStack_158,0x100,PTR_s__s_cach_04X_dat_0071af68,param_1 + 0x49,param_3);
    }
  }
  else {
    piVar6 = (int *)0x0;
    if (*(char *)(param_1 + 0x49) != '\0') {
      piVar6 = param_1 + 0x49;
    }
    FUN_005cd198(auStack_158,0x100,PTR_s__s__s_0071af1c,piVar6,PTR_s_cache_dat_0071af64);
    uVar1 = param_1[0x8b];
    uVar7 = (longlong)(int)uVar1 * (longlong)(int)((uVar1 + 0x2f) / uVar1) +
            (longlong)(int)param_3 * (longlong)param_1[0x37] & 0xffffffff;
  }
  iVar8 = param_3 * 0x40 + (param_3 & 0x1fffffff) * -8;
  uVar1 = *(uint *)(PTR_DAT_0071af00 + 0x18);
  *(undefined8 *)(iVar8 + param_1[0x39]) = 3;
  if ((uVar1 & 2) != 0) {
    puVar2 = PTR_s_RAM_cache_0071af34;
    if (*(char *)((int)param_1 + 0xd9) != '\0') {
      puVar2 = PTR_s_HDD_cache_0071af30;
    }
    FUN_00527ccc(*(undefined4 *)(param_2 + 0xc),puVar2,*(undefined8 *)(param_5 + 8),param_1[0x37],
                 param_3);
  }
  (*(code *)**(undefined4 **)(*param_1 + 0x3c))(param_1,param_3);
  uVar4 = FUN_0052138c(param_1[0x47],local_180,auStack_158,
                       param_4 + (ulonglong)*(uint *)(param_5 + 0x10) & 0xffffffff,
                       uVar7 + *(uint *)(param_5 + 0x10),*(undefined4 *)(param_5 + 0x14));
  iVar5 = fios::op_wait_result(uVar4,0);
  if (iVar5 == 0) {
    if (param_1[0x8a] != 0) {
      uVar4 = FUN_005205b4(param_1[0x47],0,param_1[0x8a]);
      fios::op_wait_result(uVar4,0);
    }
    iVar5 = param_1[0x39];
    uVar3 = FUN_0052c8c4();
    *(undefined8 *)(iVar8 + iVar5) = uVar3;
    (*(code *)**(undefined4 **)(*param_1 + 0x3c))(param_1,param_3);
    uVar4 = 1;
  }
  else {
    fios::print_tty4(PTR_s_FIOS_cache_block__d__write_faile_0071af6c,param_3,iVar5);
    uVar4 = 0;
  }
  return uVar4;
}



//==== 00533ae0  ns=Global  size=0x39c
// sig: undefined FUN_00533ae0(void)
// callers(0): 
// callees(11): 0051c030 fios::op_wait_result; 0051c9a4 FUN_0051c9a4; 005205b4 FUN_005205b4; 005210c4 FUN_005210c4; 00525524 FUN_00525524; 005260ac FUN_005260ac; 0052cbd8 fios::print_tty4; 0052cc20 FUN_0052cc20; 0052cccc fios::rwlock_wlock_checked; 005cd198 FUN_005cd198; 005d0140 libc::memset
// strings: 00669790: '%s/cach%04X.dat' | 006697e0: 'FIOS cache index mass flush failed, err = %d\n' | 00669840: 'FIOS cache block[%d] delete failed, err = %d\n' | 006695d0: 'HDD cache' | 006695e0: 'RAM cache' | 006697d0: 'cache-flushall' | 00669810: 'FIOS cache index fsync failed, err = %d\n'

void FUN_00533ae0(int param_1)

{
  uint uVar1;
  undefined *puVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  longlong *plVar7;
  uint uVar9;
  longlong lVar8;
  int iVar10;
  undefined1 local_198 [40];
  undefined1 auStack_170 [264];
  
  uVar1 = *(uint *)(param_1 + 0x22c);
  fios::rwlock_wlock_checked(param_1 + 0x98);
  if ((*(uint *)(PTR_DAT_0071af00 + 0x18) & 2) != 0) {
    puVar2 = PTR_s_RAM_cache_0071af34;
    if (*(char *)(param_1 + 0xd9) != '\0') {
      puVar2 = PTR_s_HDD_cache_0071af30;
    }
    FUN_005260ac(puVar2,0,0,0,PTR_s_cache_flushall_0071af70);
  }
  libc::memset(*(undefined4 *)(param_1 + 0x260),0,0x10000);
  iVar4 = *(int *)(param_1 + 0xe0);
  if (0 < iVar4) {
    iVar10 = 0;
    uVar9 = uVar1 * ((uVar1 + 0x37) / uVar1);
    do {
      iVar6 = uVar9 * iVar10;
      iVar5 = -0x19c;
      if ((int)(0x10000 / (ulonglong)uVar9) <= iVar4 - iVar10) {
        iVar5 = -0x1a0;
      }
      iVar10 = iVar10 + *(int *)(&stack0x00000000 + iVar5);
      uVar3 = FUN_00525524(*(undefined4 *)(param_1 + 0x11c),local_198,
                           *(undefined4 *)(param_1 + 0x224),*(undefined4 *)(param_1 + 0x260),
                           uVar9 * *(int *)(&stack0x00000000 + iVar5),
                           uVar1 * ((uVar1 + 0x2f) / uVar1) + iVar6);
      iVar4 = fios::op_wait_result(uVar3,0);
      if (iVar4 != 0) {
        fios::print_tty4(PTR_s_FIOS_cache_index_mass_flush_fail_0071af74,iVar4);
      }
      iVar4 = *(int *)(param_1 + 0xe0);
    } while (iVar10 < iVar4);
  }
  uVar3 = FUN_005205b4(*(undefined4 *)(param_1 + 0x11c),local_198,*(undefined4 *)(param_1 + 0x224));
  iVar4 = fios::op_wait_result(uVar3,0);
  if (iVar4 != 0) {
    fios::print_tty4(PTR_s_FIOS_cache_index_fsync_failed__e_0071af78,iVar4);
  }
  if (0 < *(int *)(param_1 + 0xe0)) {
    iVar4 = 0;
    iVar10 = 0;
    do {
      plVar7 = (longlong *)(iVar10 + *(int *)(param_1 + 0xe4));
      lVar8 = *plVar7;
      plVar7[3] = 0;
      plVar7[4] = plVar7[4] & 0x7fffffffffffffff;
      iVar5 = *(int *)(param_1 + 0xe4);
      *plVar7 = 2;
      iVar5 = iVar10 + iVar5;
      *(ulonglong *)(iVar5 + 0x20) = *(ulonglong *)(iVar5 + 0x20) & 0xc0000000ffffffff;
      iVar5 = iVar10 + *(int *)(param_1 + 0xe4);
      iVar10 = iVar10 + 0x38;
      FUN_0051c9a4(iVar5 + 0x28,0);
      if ((*(char *)(param_1 + 0x118) == '\0') && (lVar8 != 2)) {
        iVar5 = 0;
        if (*(char *)(param_1 + 0x124) != '\0') {
          iVar5 = param_1 + 0x124;
        }
        FUN_005cd198(auStack_170,0x100,PTR_s__s_cach_04X_dat_0071af68,iVar5,iVar4);
        uVar3 = FUN_005210c4(*(undefined4 *)(param_1 + 0x11c),local_198,auStack_170);
        iVar5 = fios::op_wait_result(uVar3,0);
        if ((iVar5 != 0) && (iVar5 != -0x7ffef8fb)) {
          fios::print_tty4(PTR_s_FIOS_cache_block__d__delete_fail_0071af7c,iVar4,iVar5);
        }
      }
      iVar4 = iVar4 + 1;
    } while (iVar4 < *(int *)(param_1 + 0xe0));
  }
  libc::memset(*(undefined4 *)(param_1 + 0x230),0,
               ((ulonglong)*(uint *)(param_1 + 0x234) & 0x3fffffff) << 2);
  *(undefined4 *)(param_1 + 0x234) = 0;
  FUN_0052cc20(param_1 + 0x98);
  return;
}



//==== 00533e7c  ns=Global  size=0x458
// sig: undefined FUN_00533e7c(void)
// callers(0): 
// callees(7): 0051c030 fios::op_wait_result; 005205b4 FUN_005205b4; 005210c4 FUN_005210c4; 00525524 FUN_00525524; 0052cbd8 fios::print_tty4; 005cd198 FUN_005cd198; 005d0140 libc::memset
// strings: 00669790: '%s/cach%04X.dat' | 00669840: 'FIOS cache block[%d] delete failed, err = %d\n' | 00669810: 'FIOS cache index fsync failed, err = %d\n' | 00669870: 'FIOS cache descriptor[%d] update failed, err = %d\n'

void FUN_00533e7c(int param_1,uint param_2)

{
  uint uVar1;
  undefined4 uVar2;
  ulonglong *puVar3;
  undefined1 *puVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  undefined4 uVar9;
  int iVar10;
  int iVar11;
  longlong lVar12;
  ulonglong uVar13;
  undefined8 uVar14;
  ulonglong unaff_r22;
  ulonglong unaff_r23;
  ulonglong unaff_r24;
  ulonglong unaff_r25;
  uint uVar15;
  ulonglong unaff_r26;
  ulonglong unaff_r27;
  ulonglong unaff_r28;
  ulonglong unaff_r29;
  ulonglong unaff_r30;
  ulonglong unaff_r31;
  ulonglong in_LR;
  
  uVar8 = ZEXT48(&stack0x00000000);
  puVar3 = (ulonglong *)(uVar8 - 0x1f0);
  *puVar3 = uVar8;
  puVar3[0x39] = unaff_r27;
  puVar3[0x40] = in_LR;
  uVar1 = *(uint *)(param_1 + 0x22c);
  puVar3[0x37] = unaff_r25;
  puVar3[0x38] = unaff_r26;
  puVar3[0x34] = unaff_r22;
  puVar3[0x36] = unaff_r24;
  puVar3[0x3a] = unaff_r28;
  puVar3[0x3b] = unaff_r29;
  puVar3[0x3c] = unaff_r30;
  puVar3[0x3d] = unaff_r31;
  puVar3[0x35] = unaff_r23;
  uVar15 = uVar1 * ((uVar1 + 0x37) / uVar1);
  uVar5 = (ulonglong)uVar15;
  lVar12 = (uVar8 - 0x1f0) - (uVar5 + 0x1e & 0xfffffffffffffff0);
  *(ulonglong *)lVar12 = *puVar3;
  uVar13 = lVar12 + 0x70;
  uVar6 = uVar13 & 0xffffffff;
  libc::memset(uVar6,0,uVar5);
  iVar11 = param_2 * 0x40 + (param_2 & 0x1fffffff) * -8;
  lVar12 = *(longlong *)(iVar11 + *(int *)(param_1 + 0xe4));
  puVar4 = (undefined1 *)uVar13;
  if (lVar12 - 2U < 2) {
    puVar4[7] = 0;
    *puVar4 = 0;
    puVar4[1] = 0;
    puVar4[2] = 0;
    puVar4[3] = 0;
    puVar4[4] = 0;
    puVar4[5] = 0;
    puVar4[6] = 0;
  }
  else {
    *puVar4 = (char)((ulonglong)lVar12 >> 0x38);
    puVar4[1] = (char)((ulonglong)lVar12 >> 0x30);
    puVar4[2] = (char)((ulonglong)lVar12 >> 0x28);
    puVar4[3] = (char)((ulonglong)lVar12 >> 0x20);
    puVar4[4] = (char)((ulonglong)lVar12 >> 0x18);
    puVar4[5] = (char)((ulonglong)lVar12 >> 0x10);
    puVar4[6] = (char)((ulonglong)lVar12 >> 8);
    puVar4[7] = (char)lVar12;
  }
  iVar10 = iVar11 + *(int *)(param_1 + 0xe4);
  uVar13 = uVar8 - 0x180 & 0xffffffff;
  puVar4[8] = *(undefined1 *)(iVar10 + 8);
  puVar4[9] = *(undefined1 *)(iVar10 + 9);
  puVar4[10] = *(undefined1 *)(iVar10 + 10);
  puVar4[0xb] = *(undefined1 *)(iVar10 + 0xb);
  puVar4[0xc] = *(undefined1 *)(iVar10 + 0xc);
  puVar4[0xd] = *(undefined1 *)(iVar10 + 0xd);
  puVar4[0xe] = *(undefined1 *)(iVar10 + 0xe);
  puVar4[0xf] = *(undefined1 *)(iVar10 + 0xf);
  iVar10 = iVar11 + *(int *)(param_1 + 0xe4);
  puVar4[0x10] = *(undefined1 *)(iVar10 + 0x10);
  puVar4[0x11] = *(undefined1 *)(iVar10 + 0x11);
  puVar4[0x12] = *(undefined1 *)(iVar10 + 0x12);
  puVar4[0x13] = *(undefined1 *)(iVar10 + 0x13);
  puVar4[0x14] = *(undefined1 *)(iVar10 + 0x14);
  puVar4[0x15] = *(undefined1 *)(iVar10 + 0x15);
  puVar4[0x16] = *(undefined1 *)(iVar10 + 0x16);
  puVar4[0x17] = *(undefined1 *)(iVar10 + 0x17);
  iVar10 = iVar11 + *(int *)(param_1 + 0xe4);
  puVar4[0x18] = *(undefined1 *)(iVar10 + 0x18);
  puVar4[0x19] = *(undefined1 *)(iVar10 + 0x19);
  puVar4[0x1a] = *(undefined1 *)(iVar10 + 0x1a);
  puVar4[0x1b] = *(undefined1 *)(iVar10 + 0x1b);
  puVar4[0x1c] = *(undefined1 *)(iVar10 + 0x1c);
  puVar4[0x1d] = *(undefined1 *)(iVar10 + 0x1d);
  puVar4[0x1e] = *(undefined1 *)(iVar10 + 0x1e);
  puVar4[0x1f] = *(undefined1 *)(iVar10 + 0x1f);
  uVar7 = (ulonglong)*(uint *)(iVar11 + *(int *)(param_1 + 0xe4) + 0x20) & 0x3fffffff;
  puVar4[0x22] = (char)(uVar7 >> 8);
  puVar4[0x23] = (char)uVar7;
  puVar4[0x20] = (char)(uVar7 >> 0x18);
  puVar4[0x21] = (char)(uVar7 >> 0x10);
  uVar14 = *(undefined8 *)(iVar11 + *(int *)(param_1 + 0xe4) + 0x20);
  puVar4[0x24] = 0;
  puVar4[0x25] = 0;
  puVar4[0x26] = 0;
  puVar4[0x27] = (byte)((ulonglong)uVar14 >> 0x3f);
  iVar10 = iVar11 + *(int *)(param_1 + 0xe4);
  *(undefined8 *)(puVar4 + 0x28) = *(undefined8 *)(iVar10 + 0x28);
  *(undefined8 *)(puVar4 + 0x30) = *(undefined8 *)(iVar10 + 0x30);
  uVar9 = *(undefined4 *)(param_1 + 0x224);
  uVar2 = *(undefined4 *)(param_1 + 0x11c);
  *(undefined1 (*) [16])(puVar3 + 0x10) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(puVar3 + 0xe) = (undefined1  [16])0x0;
  *(undefined4 *)((int)puVar3 + 0x84) = 0xe;
  puVar3[0xe] = 1;
  puVar3[0x12] = 0;
  uVar9 = FUN_00525524(uVar2,uVar13,uVar9,uVar6,uVar5,
                       uVar1 * ((uVar1 + 0x2f) / uVar1) + uVar15 * param_2);
  iVar10 = fios::op_wait_result(uVar9,0);
  if (iVar10 != 0) {
    fios::print_tty4(PTR_s_FIOS_cache_descriptor__d__update_0071af80,param_2,iVar10);
  }
  uVar9 = *(undefined4 *)(param_1 + 0x224);
  uVar2 = *(undefined4 *)(param_1 + 0x11c);
  *(undefined4 *)((int)puVar3 + 0x84) = 0;
  uVar9 = FUN_005205b4(uVar2,uVar13,uVar9);
  iVar10 = fios::op_wait_result(uVar9,0);
  if (iVar10 != 0) {
    fios::print_tty4(PTR_s_FIOS_cache_index_fsync_failed__e_0071af78,iVar10);
  }
  if ((*(char *)(param_1 + 0x118) == '\0') &&
     (*(longlong *)(iVar11 + *(int *)(param_1 + 0xe4)) - 2U < 2)) {
    iVar11 = 0;
    if (*(char *)(param_1 + 0x124) != '\0') {
      iVar11 = param_1 + 0x124;
    }
    uVar5 = uVar8 - 0x158 & 0xffffffff;
    FUN_005cd198(uVar5,0x100,PTR_s__s_cach_04X_dat_0071af68,iVar11,param_2);
    uVar9 = *(undefined4 *)(param_1 + 0x11c);
    *(undefined4 *)((int)puVar3 + 0x84) = 0;
    uVar9 = FUN_005210c4(uVar9,uVar8 - 0x180,uVar5);
    iVar11 = fios::op_wait_result(uVar9,0);
    if ((iVar11 != 0) && (iVar11 != -0x7ffef8fb)) {
      fios::print_tty4(PTR_s_FIOS_cache_block__d__delete_fail_0071af7c,param_2,iVar11);
    }
  }
  return;
}



//==== 005342d4  ns=Global  size=0x214
// sig: undefined FUN_005342d4(void)
// callers(0): 
// callees(5): 0051c030 fios::op_wait_result; 00521b58 fios::filehandle_close_setup; 0052df14 FUN_0052df14; 00532134 FUN_00532134; 00532d1c FUN_00532d1c
// strings: 006698a8: 'Scheduler cache'

void FUN_005342d4(undefined4 *param_1)

{
  undefined4 uVar1;
  
  *param_1 = PTR_PTR_0071af84;
  if (param_1[0x98] != 0) {
    (*(code *)**(undefined4 **)(**(int **)(PTR_DAT_0071af00 + 8) + 4))
              (*(int **)(PTR_DAT_0071af00 + 8),param_1[0x98],0x100d010c,0,0);
    param_1[0x98] = 0;
  }
  if (param_1[0x99] != 0) {
    (*(code *)**(undefined4 **)(**(int **)(PTR_DAT_0071af00 + 8) + 4))
              (*(int **)(PTR_DAT_0071af00 + 8),param_1[0x99],0x100d010c,0,0);
    param_1[0x99] = 0;
  }
  if (param_1[0x8c] != 0) {
    (*(code *)**(undefined4 **)(**(int **)(PTR_DAT_0071af00 + 8) + 4))
              (*(int **)(PTR_DAT_0071af00 + 8),param_1[0x8c],0x106a0102,0,0);
    param_1[0x8c] = 0;
  }
  if (param_1[0x8a] != 0) {
    uVar1 = fios::filehandle_close_setup(param_1[0x47],0,param_1[0x8a]);
    fios::op_wait_result(uVar1,0);
    param_1[0x8a] = 0;
  }
  if (param_1[0x89] != 0) {
    uVar1 = fios::filehandle_close_setup(param_1[0x47],0,param_1[0x89]);
    fios::op_wait_result(uVar1,0);
    param_1[0x89] = 0;
  }
  if (*PTR_PTR_0071af58 != '\0') {
    FUN_0052df14(param_1 + 0x8e);
    FUN_00532134(param_1);
    return;
  }
  FUN_00532d1c(param_1,PTR_s_Scheduler_cache_0071af88);
  FUN_0052df14(param_1 + 0x8e);
  FUN_00532134(param_1);
  return;
}



//==== 005344e8  ns=Global  size=0x850
// sig: undefined FUN_005344e8(void)
// callers(2): 00534d38 FUN_00534d38; 005350b0 FUN_005350b0
// callees(12): 0051c030 fios::op_wait_result; 0051c8d4 fios::hash_path_string; 0051ca84 FUN_0051ca84; 005210c4 FUN_005210c4; 00521b58 fios::filehandle_close_setup; 0052521c fios::read_req_setup; 00525524 FUN_00525524; 0052cbd8 fios::print_tty4; 00530f80 FUN_00530f80; 005cd198 FUN_005cd198; 005d0140 libc::memset; 005d0218 libc::memcmp
// strings: 00669950: 'Reusing existing disk-based cache files\n' | 00669790: '%s/cach%04X.dat' | 006698b8: 'Creating new disk-based cache files\n' | 00669780: 'cache.dat' | 00669520: '%s/%s' | 00669980: "FIOS failed deleting invalid cache file '%s', err = %d\n" | 00669918: 'FIOS failed reading cache header for %s, err = %d\n' | 006698e0: 'FIOS failed writing cache header for %s, err = %d\n'

undefined4 FUN_005344e8(int param_1)

{
  bool bVar1;
  undefined1 uVar2;
  longlong lVar3;
  ulonglong *puVar4;
  ulonglong uVar5;
  undefined *puVar6;
  ulonglong uVar7;
  undefined4 uVar8;
  uint uVar9;
  int iVar10;
  char cVar13;
  undefined4 uVar11;
  int iVar12;
  ulonglong uVar14;
  longlong lVar15;
  int iVar16;
  uint uVar17;
  ulonglong unaff_r20;
  ulonglong uVar18;
  ulonglong unaff_r21;
  ulonglong unaff_r22;
  ulonglong unaff_r23;
  ulonglong unaff_r24;
  ulonglong unaff_r25;
  ulonglong unaff_r26;
  ulonglong unaff_r27;
  ulonglong unaff_r28;
  ulonglong unaff_r29;
  undefined1 *__s1;
  char *pcVar19;
  char *pcVar20;
  ulonglong unaff_r30;
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
  int local_270 [156];
  byte *__s2;
  
  uVar7 = ZEXT48(&stack0x00000000);
  puVar4 = (ulonglong *)(uVar7 - 0x2e0);
  *puVar4 = uVar7;
  puVar4[0x54] = unaff_r24;
  puVar4[0x5e] = in_LR;
  uVar17 = *(uint *)(param_1 + 0x22c);
  uVar8 = *(undefined4 *)(param_1 + 0x224);
  uVar11 = *(undefined4 *)(param_1 + 0x228);
  puVar4[0x51] = unaff_r21;
  puVar4[0x56] = unaff_r26;
  puVar4[0x57] = unaff_r27;
  puVar4[0x58] = unaff_r28;
  puVar4[0x59] = unaff_r29;
  puVar4[0x5a] = unaff_r30;
  puVar4[0x5b] = unaff_r31;
  puVar4[0x50] = unaff_r20;
  puVar4[0x52] = unaff_r22;
  puVar4[0x53] = unaff_r23;
  puVar4[0x55] = unaff_r25;
  *(undefined4 *)(puVar4 + 0xe) = uVar8;
  *(undefined4 *)((int)puVar4 + 0x74) = uVar11;
  *(uint *)(puVar4 + 0x5d) =
       (uint)(in_cr0 & 0xf) << 0x1c | (uint)(in_cr1 & 0xf) << 0x18 | (uint)(in_cr2 & 0xf) << 0x14 |
       (uint)(in_cr3 & 0xf) << 0x10 | (uint)(unaff_cr4 & 0xf) << 0xc | (uint)(in_cr5 & 0xf) << 8 |
       (uint)(in_cr6 & 0xf) << 4 | (uint)(in_cr7 & 0xf);
  uVar17 = uVar17 * ((uVar17 + 0x2f) / uVar17);
  uVar14 = (ulonglong)uVar17;
  lVar15 = (uVar7 - 0x2e0) - (uVar14 + 0x1e & 0xfffffffffffffff0);
  *(ulonglong *)lVar15 = *puVar4;
  uVar18 = lVar15 + 0x70U & 0xffffffff;
  libc::memset(uVar18,0,uVar14);
  __s1 = (undefined1 *)(lVar15 + 0x70U);
  *__s1 = 0x66;
  __s1[2] = 0x6f;
  __s1[1] = 0x69;
  __s1[5] = 0x61;
  __s1[3] = 0x73;
  __s1[6] = 99;
  __s1[7] = 0x68;
  __s1[4] = 99;
  __s1[8] = *(undefined1 *)(param_1 + 0x110);
  __s1[9] = *(undefined1 *)(param_1 + 0x111);
  __s1[10] = *(undefined1 *)(param_1 + 0x112);
  __s1[0xb] = *(undefined1 *)(param_1 + 0x113);
  __s1[0xc] = *(undefined1 *)(param_1 + 0x114);
  __s1[0xd] = *(undefined1 *)(param_1 + 0x115);
  __s1[0xe] = *(undefined1 *)(param_1 + 0x116);
  uVar2 = *(undefined1 *)(param_1 + 0x117);
  __s1[0x11] = 3;
  __s1[0x15] = 0x38;
  __s1[0xf] = uVar2;
  __s1[0x13] = 0x2c;
  __s1[0x10] = 0;
  __s1[0x12] = 0;
  __s1[0x14] = 0;
  __s1[0x16] = 1;
  __s1[0x17] = 0;
  __s1[0x18] = *(undefined1 *)(param_1 + 0xe0);
  __s1[0x19] = *(undefined1 *)(param_1 + 0xe1);
  __s1[0x1a] = *(undefined1 *)(param_1 + 0xe2);
  __s1[0x1b] = *(undefined1 *)(param_1 + 0xe3);
  __s1[0x1c] = *(undefined1 *)(param_1 + 0xdc);
  __s1[0x1d] = *(undefined1 *)(param_1 + 0xdd);
  __s1[0x1e] = *(undefined1 *)(param_1 + 0xde);
  __s1[0x1f] = *(undefined1 *)(param_1 + 0xdf);
  uVar2 = *(undefined1 *)(param_1 + 0x118);
  __s1[0x2a] = 0;
  __s1[0x20] = uVar2;
  __s1[0x28] = 0;
  __s1[0x29] = 0;
  __s1[0x2b] = 1;
  iVar12 = *(int *)(param_1 + 0x224);
  if ((*(longlong *)(iVar12 + 0x48) < (longlong)uVar14) &&
     ((iVar16 = *(int *)(param_1 + 0x228), iVar16 == 0 ||
      (*(longlong *)(iVar16 + 0x48) < (longlong)uVar14)))) {
    if (*PTR_PTR_0071af58 == '\0') {
      fios::print_tty4(PTR_s_Creating_new_disk_based_cache_fi_0071af8c);
      iVar12 = *(int *)(param_1 + 0x224);
      iVar16 = *(int *)(param_1 + 0x228);
    }
    uVar17 = *(uint *)(param_1 + 0x22c);
    uVar5 = (longlong)(int)uVar17 * (longlong)(int)((uVar17 + 0x2f) / uVar17) & 0xffffffff;
    lVar15 = uVar5 + (longlong)*(int *)(param_1 + 0xe0) *
                     ((longlong)(int)uVar17 * (longlong)(int)((uVar17 + 0x37) / uVar17) &
                     0xffffffffU);
    if (iVar16 != 0) {
      lVar15 = lVar15 + uVar5 + (longlong)*(int *)(param_1 + 0xe0) *
                                (ulonglong)*(uint *)(param_1 + 0xdc);
    }
    iVar16 = 0;
    cVar13 = FUN_00530f80(param_1,iVar12,lVar15);
    if (cVar13 == '\0') {
      __s2 = (byte *)0x0;
      *(undefined1 *)(param_1 + 0xd8) = 1;
LAB_00534880:
      if (*(int *)(param_1 + 0x224) != 0) {
        pcVar20 = *(char **)(*(int *)(param_1 + 0x224) + 0x30);
        pcVar19 = (char *)0x0;
        if (*pcVar20 != '\0') {
          pcVar19 = pcVar20;
        }
        *(undefined4 *)(puVar4 + 0x2f) = 0;
        FUN_0051ca84(uVar7 - 0x168,pcVar19);
        uVar11 = fios::hash_path_string(pcVar19);
        uVar8 = *(undefined4 *)(param_1 + 0x224);
        *(undefined4 *)(puVar4 + 0x2f) = uVar11;
        uVar8 = fios::filehandle_close_setup(*(undefined4 *)(param_1 + 0x11c),0,uVar8);
        fios::op_wait_result(uVar8,0);
        cVar13 = *(char *)((int)puVar4 + 0x17c);
        *(undefined4 *)(param_1 + 0x224) = 0;
        uVar14 = uVar7 - 0x164;
        if (cVar13 == '\0') {
          uVar14 = 0;
        }
        uVar8 = FUN_005210c4(*(undefined4 *)(param_1 + 0x11c),0,uVar14 & 0xffffffff);
        iVar12 = fios::op_wait_result(uVar8,0);
        if (iVar12 != 0) {
          uVar14 = uVar7 - 0x164;
          if (*(char *)((int)puVar4 + 0x17c) == '\0') {
            uVar14 = 0;
          }
          fios::print_tty4(PTR_s_FIOS_failed_deleting_invalid_cac_0071af9c,uVar14 & 0xffffffff,
                           iVar12);
          *(undefined1 *)(param_1 + 0xd8) = 1;
        }
      }
      if (*(int *)(param_1 + 0x228) != 0) {
        pcVar20 = *(char **)(*(int *)(param_1 + 0x228) + 0x30);
        pcVar19 = (char *)0x0;
        if (*pcVar20 != '\0') {
          pcVar19 = pcVar20;
        }
        *(undefined4 *)(puVar4 + 0x2f) = 0;
        FUN_0051ca84(uVar7 - 0x168,pcVar19);
        uVar11 = fios::hash_path_string(pcVar19);
        uVar8 = *(undefined4 *)(param_1 + 0x228);
        *(undefined4 *)(puVar4 + 0x2f) = uVar11;
        uVar8 = fios::filehandle_close_setup(*(undefined4 *)(param_1 + 0x11c),0,uVar8);
        fios::op_wait_result(uVar8,0);
        cVar13 = *(char *)((int)puVar4 + 0x17c);
        *(undefined4 *)(param_1 + 0x228) = 0;
        uVar14 = uVar7 - 0x164;
        if (cVar13 == '\0') {
          uVar14 = 0;
        }
        uVar8 = FUN_005210c4(*(undefined4 *)(param_1 + 0x11c),0,uVar14 & 0xffffffff);
        iVar12 = fios::op_wait_result(uVar8,0);
        if (iVar12 != 0) {
          uVar14 = uVar7 - 0x164;
          if (*(char *)((int)puVar4 + 0x17c) == '\0') {
            uVar14 = 0;
          }
          fios::print_tty4(PTR_s_FIOS_failed_deleting_invalid_cac_0071af9c,uVar14 & 0xffffffff,
                           iVar12);
          *(undefined1 *)(param_1 + 0xd8) = 1;
        }
      }
      puVar6 = PTR_s__s_cach_04X_dat_0071af68;
      if ((__s2 != (byte *)0x0) &&
         (((ulonglong)__s2[7] |
          (ulonglong)__s2[6] << 8 |
          (ulonglong)__s2[5] << 0x10 |
          (ulonglong)__s2[4] << 0x18 |
          (ulonglong)__s2[3] << 0x20 |
          (ulonglong)__s2[2] << 0x28 | (ulonglong)__s2[1] << 0x30 | (ulonglong)*__s2 << 0x38) ==
          0x66696f7363616368)) {
        if (__s2[0x20] != 0) {
          iVar12 = 0;
          if (*(char *)(param_1 + 0x124) != '\0') {
            iVar12 = param_1 + 0x124;
          }
          uVar14 = uVar7 - 0x268 & 0xffffffff;
          FUN_005cd198(uVar14,0x100,PTR_s__s__s_0071af1c,iVar12,PTR_s_cache_dat_0071af64);
          uVar8 = FUN_005210c4(*(undefined4 *)(param_1 + 0x11c),0,uVar14);
          fios::op_wait_result(uVar8,0);
          return 0;
        }
        if (0 < *(int *)(param_1 + 0xe0)) {
          uVar14 = uVar7 - 0x268 & 0xffffffff;
          iVar12 = 0;
          do {
            iVar10 = iVar12 + 1;
            iVar16 = 0;
            if (*(char *)(param_1 + 0x124) != '\0') {
              iVar16 = param_1 + 0x124;
            }
            FUN_005cd198(uVar14,0x100,puVar6,iVar16,iVar12);
            uVar8 = FUN_005210c4(*(undefined4 *)(param_1 + 0x11c),0,uVar14);
            fios::op_wait_result(uVar8,0);
            iVar12 = iVar10;
          } while (iVar10 < *(int *)(param_1 + 0xe0));
          return 0;
        }
      }
      return 0;
    }
    do {
      iVar12 = *(int *)((int)local_270 + iVar16);
      if (iVar12 != 0) {
        uVar8 = FUN_00525524(*(undefined4 *)(param_1 + 0x11c),0,iVar12,uVar18,uVar14,0);
        iVar10 = fios::op_wait_result(uVar8,0);
        if (iVar10 != 0) {
          pcVar20 = (char *)0x0;
          if (**(char **)(iVar12 + 0x30) != '\0') {
            pcVar20 = *(char **)(iVar12 + 0x30);
          }
          __s2 = (byte *)0x0;
          fios::print_tty4(PTR_s_FIOS_failed_writing_cache_header_0071af90,pcVar20,iVar10);
          *(undefined1 *)(param_1 + 0xd8) = 1;
          goto LAB_00534880;
        }
      }
      bVar1 = iVar16 != 4;
      iVar16 = iVar16 + 4;
    } while (bVar1);
  }
  else {
    iVar12 = 0;
    lVar3 = lVar15 - (uVar14 + 0x1e & 0xfffffffffffffff0);
    *(ulonglong *)lVar3 = *(ulonglong *)lVar15;
    uVar18 = lVar3 + 0x70;
    __s2 = (byte *)uVar18;
    do {
      uVar5 = uVar18 & 0xffffffff;
      iVar16 = *(int *)((int)local_270 + iVar12);
      if (iVar16 != 0) {
        libc::memset(uVar5,0,uVar14);
        uVar8 = fios::read_req_setup(*(undefined4 *)(param_1 + 0x11c),0,iVar16,uVar5,uVar14,0);
        uVar9 = fios::op_wait_result(uVar8,0);
        bVar1 = (int)(((int)uVar9 >> 0x1f) - ((int)uVar9 >> 0x1f ^ uVar9)) < 0;
        if ((bVar1) || (iVar10 = libc::memcmp(__s1,__s2,uVar17), iVar10 != 0)) {
          pcVar20 = (char *)0x0;
          if (**(char **)(iVar16 + 0x30) != '\0') {
            pcVar20 = *(char **)(iVar16 + 0x30);
          }
          *(undefined4 *)(puVar4 + 0x2f) = 0;
          FUN_0051ca84(uVar7 - 0x168,pcVar20);
          uVar8 = fios::hash_path_string(pcVar20);
          *(undefined4 *)(puVar4 + 0x2f) = uVar8;
          if (bVar1) {
            uVar14 = uVar7 - 0x164;
            if (*(char *)((int)puVar4 + 0x17c) == '\0') {
              uVar14 = 0;
            }
            fios::print_tty4(PTR_s_FIOS_failed_reading_cache_header_0071af94,uVar14 & 0xffffffff,
                             uVar9);
          }
          goto LAB_00534880;
        }
      }
      bVar1 = iVar12 != 4;
      iVar12 = iVar12 + 4;
    } while (bVar1);
    if (*PTR_PTR_0071af58 == '\0') {
      fios::print_tty4(PTR_s_Reusing_existing_disk_based_cach_0071af98);
      return 1;
    }
  }
  return 1;
}



//==== 00534d38  ns=Global  size=0x378
// sig: undefined FUN_00534d38(void)
// callers(0): 
// callees(9): 0051c8d4 fios::hash_path_string; 0051ca84 FUN_0051ca84; 0052cbd8 fios::print_tty4; 0052d370 FUN_0052d370; 00531338 FUN_00531338; 00531658 FUN_00531658; 0053299c FUN_0053299c; 005344e8 FUN_005344e8; 005d0140 libc::memset
// strings: 006699b8: 'schedulercache' | 00669a28: 'cache.idx' | 00669780: 'cache.dat' | 006699c8: "FIOS cache couldn't allocate I/O buffers\n" | 006699f8: "FIOS cache couldn't allocate lookup table\n"

void FUN_00534d38(undefined4 *param_1,undefined8 param_2,int param_3,int param_4,longlong param_5,
                 undefined1 param_6,undefined1 param_7,undefined8 param_8)

{
  undefined4 *puVar1;
  undefined *puVar2;
  undefined4 uVar3;
  uint uVar4;
  int iVar5;
  char cVar6;
  undefined4 in_stack_00000074;
  
  FUN_00531338(param_1,param_2,param_8,in_stack_00000074);
  puVar2 = PTR_PTR_0071af84;
  *(undefined1 *)(param_1 + 0x46) = param_6;
  *param_1 = puVar2;
  puVar1 = param_1 + 0x48;
  *puVar1 = 0;
  param_1[0x47] = param_3;
  *(longlong *)(param_1 + 0x44) = param_5;
  FUN_0051ca84(puVar1,param_4);
  uVar3 = fios::hash_path_string(param_4);
  puVar2 = PTR_s_schedulercache_0071afa0;
  *puVar1 = uVar3;
  param_1[0x8b] = 0x800;
  param_1[0x89] = 0;
  param_1[0x8a] = 0;
  FUN_0052d370(param_1 + 0x8e,puVar2);
  *(undefined1 *)((int)param_1 + 0xda) = param_7;
  param_1[0x98] = 0;
  *(undefined1 *)((int)param_1 + 0xd9) = 1;
  param_1[0x99] = 0;
  if (((param_4 == 0) || (param_3 == 0)) || (param_5 == 0)) {
    *(undefined1 *)(param_1 + 0x36) = 1;
  }
  puVar2 = PTR_DAT_0071af00;
  if (*(char *)(param_1 + 0x36) == '\0') {
    iVar5 = *(int *)(*(int *)(param_1[0x47] + 0x160) + 0x78);
    if (iVar5 == 0) {
      iVar5 = 0x800;
    }
    param_1[0x8b] = iVar5;
    uVar3 = (*(code *)**(undefined4 **)**(undefined4 **)(puVar2 + 8))
                      (*(undefined4 **)(puVar2 + 8),0x10000,0x100d010c,0,0);
    puVar1 = *(undefined4 **)(puVar2 + 8);
    param_1[0x98] = uVar3;
    uVar4 = (*(code *)**(undefined4 **)*puVar1)(puVar1,0x10000,0x100d010c,0,0);
    param_1[0x99] = uVar4;
    if ((param_1[0x98] == 0) ||
       ((int)((((int)uVar4 >> 0x1f ^ uVar4) - ((int)uVar4 >> 0x1f)) + -1) < 0)) {
      fios::print_tty4(PTR_s_FIOS_cache_couldn_t_allocate_I_O_0071afa4);
      *(undefined1 *)(param_1 + 0x36) = 1;
      return;
    }
    iVar5 = (*(code *)**(undefined4 **)**(undefined4 **)(puVar2 + 8))
                      (*(undefined4 **)(puVar2 + 8),
                       ((ulonglong)(uint)param_1[0x38] & 0x3fffffff) << 2,0x106a0102,0,0);
    param_1[0x8c] = iVar5;
    if (iVar5 != 0) {
      libc::memset(iVar5,0,((ulonglong)(uint)param_1[0x38] & 0x3fffffff) << 2);
    }
    if (param_1[0x8c] == 0) {
      fios::print_tty4(PTR_s_FIOS_cache_couldn_t_allocate_loo_0071afa8);
      *(undefined1 *)(param_1 + 0x36) = 1;
    }
    else {
      param_1[0x8d] = 0;
      iVar5 = FUN_0053299c(param_3,param_4);
      puVar2 = PTR_s_cache_idx_0071afac;
      if (iVar5 == 0) {
        do {
          iVar5 = FUN_00531658(param_1,puVar2);
          param_1[0x89] = iVar5;
          if (iVar5 == 0) goto LAB_00534ff0;
          if (*(char *)(param_1 + 0x46) != '\0') {
            iVar5 = FUN_00531658(param_1,PTR_s_cache_dat_0071af64);
            param_1[0x8a] = iVar5;
            if (iVar5 == 0) goto LAB_00534ff0;
          }
        } while ((*(char *)(param_1 + 0x36) == '\0') &&
                (cVar6 = FUN_005344e8(param_1), cVar6 == '\0'));
      }
      else {
LAB_00534ff0:
        *(undefined1 *)(param_1 + 0x36) = 1;
      }
    }
  }
  return;
}



//==== 005350b0  ns=Global  size=0x378
// sig: undefined FUN_005350b0(void)
// callers(0): 
// callees(9): 0051c8d4 fios::hash_path_string; 0051ca84 FUN_0051ca84; 0052cbd8 fios::print_tty4; 0052d370 FUN_0052d370; 00531338 FUN_00531338; 00531658 FUN_00531658; 0053299c FUN_0053299c; 005344e8 FUN_005344e8; 005d0140 libc::memset
// strings: 006699b8: 'schedulercache' | 00669a28: 'cache.idx' | 00669780: 'cache.dat' | 006699c8: "FIOS cache couldn't allocate I/O buffers\n" | 006699f8: "FIOS cache couldn't allocate lookup table\n"

void FUN_005350b0(undefined4 *param_1,undefined8 param_2,int param_3,int param_4,longlong param_5,
                 undefined1 param_6,undefined1 param_7,undefined8 param_8)

{
  undefined4 *puVar1;
  undefined *puVar2;
  undefined4 uVar3;
  uint uVar4;
  int iVar5;
  char cVar6;
  undefined4 in_stack_00000074;
  
  FUN_00531338(param_1,param_2,param_8,in_stack_00000074);
  puVar2 = PTR_PTR_0071af84;
  *(undefined1 *)(param_1 + 0x46) = param_6;
  *param_1 = puVar2;
  puVar1 = param_1 + 0x48;
  *puVar1 = 0;
  param_1[0x47] = param_3;
  *(longlong *)(param_1 + 0x44) = param_5;
  FUN_0051ca84(puVar1,param_4);
  uVar3 = fios::hash_path_string(param_4);
  puVar2 = PTR_s_schedulercache_0071afa0;
  *puVar1 = uVar3;
  param_1[0x8b] = 0x800;
  param_1[0x89] = 0;
  param_1[0x8a] = 0;
  FUN_0052d370(param_1 + 0x8e,puVar2);
  *(undefined1 *)((int)param_1 + 0xda) = param_7;
  param_1[0x98] = 0;
  *(undefined1 *)((int)param_1 + 0xd9) = 1;
  param_1[0x99] = 0;
  if (((param_4 == 0) || (param_3 == 0)) || (param_5 == 0)) {
    *(undefined1 *)(param_1 + 0x36) = 1;
  }
  puVar2 = PTR_DAT_0071af00;
  if (*(char *)(param_1 + 0x36) == '\0') {
    iVar5 = *(int *)(*(int *)(param_1[0x47] + 0x160) + 0x78);
    if (iVar5 == 0) {
      iVar5 = 0x800;
    }
    param_1[0x8b] = iVar5;
    uVar3 = (*(code *)**(undefined4 **)**(undefined4 **)(puVar2 + 8))
                      (*(undefined4 **)(puVar2 + 8),0x10000,0x100d010c,0,0);
    puVar1 = *(undefined4 **)(puVar2 + 8);
    param_1[0x98] = uVar3;
    uVar4 = (*(code *)**(undefined4 **)*puVar1)(puVar1,0x10000,0x100d010c,0,0);
    param_1[0x99] = uVar4;
    if ((param_1[0x98] == 0) ||
       ((int)((((int)uVar4 >> 0x1f ^ uVar4) - ((int)uVar4 >> 0x1f)) + -1) < 0)) {
      fios::print_tty4(PTR_s_FIOS_cache_couldn_t_allocate_I_O_0071afa4);
      *(undefined1 *)(param_1 + 0x36) = 1;
      return;
    }
    iVar5 = (*(code *)**(undefined4 **)**(undefined4 **)(puVar2 + 8))
                      (*(undefined4 **)(puVar2 + 8),
                       ((ulonglong)(uint)param_1[0x38] & 0x3fffffff) << 2,0x106a0102,0,0);
    param_1[0x8c] = iVar5;
    if (iVar5 != 0) {
      libc::memset(iVar5,0,((ulonglong)(uint)param_1[0x38] & 0x3fffffff) << 2);
    }
    if (param_1[0x8c] == 0) {
      fios::print_tty4(PTR_s_FIOS_cache_couldn_t_allocate_loo_0071afa8);
      *(undefined1 *)(param_1 + 0x36) = 1;
    }
    else {
      param_1[0x8d] = 0;
      iVar5 = FUN_0053299c(param_3,param_4);
      puVar2 = PTR_s_cache_idx_0071afac;
      if (iVar5 == 0) {
        do {
          iVar5 = FUN_00531658(param_1,puVar2);
          param_1[0x89] = iVar5;
          if (iVar5 == 0) goto LAB_00535368;
          if (*(char *)(param_1 + 0x46) != '\0') {
            iVar5 = FUN_00531658(param_1,PTR_s_cache_dat_0071af64);
            param_1[0x8a] = iVar5;
            if (iVar5 == 0) goto LAB_00535368;
          }
        } while ((*(char *)(param_1 + 0x36) == '\0') &&
                (cVar6 = FUN_005344e8(param_1), cVar6 == '\0'));
      }
      else {
LAB_00535368:
        *(undefined1 *)(param_1 + 0x36) = 1;
      }
    }
  }
  return;
}



//==== 00535428  ns=Global  size=0x204
// sig: undefined FUN_00535428(void)
// callers(0): 
// callees(6): 00510704 FUN_00510704; 0051c030 fios::op_wait_result; 00521b58 fios::filehandle_close_setup; 0052df14 FUN_0052df14; 00532134 FUN_00532134; 00532d1c FUN_00532d1c
// strings: 006698a8: 'Scheduler cache'

void FUN_00535428(undefined4 *param_1)

{
  undefined4 uVar1;
  
  *param_1 = PTR_PTR_0071af84;
  if (param_1[0x98] != 0) {
    (*(code *)**(undefined4 **)(**(int **)(PTR_DAT_0071af00 + 8) + 4))
              (*(int **)(PTR_DAT_0071af00 + 8),param_1[0x98],0x100d010c,0,0);
    param_1[0x98] = 0;
  }
  if (param_1[0x99] != 0) {
    (*(code *)**(undefined4 **)(**(int **)(PTR_DAT_0071af00 + 8) + 4))
              (*(int **)(PTR_DAT_0071af00 + 8),param_1[0x99],0x100d010c,0,0);
    param_1[0x99] = 0;
  }
  if (param_1[0x8c] != 0) {
    (*(code *)**(undefined4 **)(**(int **)(PTR_DAT_0071af00 + 8) + 4))
              (*(int **)(PTR_DAT_0071af00 + 8),param_1[0x8c],0x106a0102,0,0);
    param_1[0x8c] = 0;
  }
  if (param_1[0x8a] != 0) {
    uVar1 = fios::filehandle_close_setup(param_1[0x47],0,param_1[0x8a]);
    fios::op_wait_result(uVar1,0);
    param_1[0x8a] = 0;
  }
  if (param_1[0x89] != 0) {
    uVar1 = fios::filehandle_close_setup(param_1[0x47],0,param_1[0x89]);
    fios::op_wait_result(uVar1,0);
    param_1[0x89] = 0;
  }
  if (*PTR_PTR_0071af58 == '\0') {
    FUN_00532d1c(param_1,PTR_s_Scheduler_cache_0071af88);
  }
  FUN_0052df14(param_1 + 0x8e);
  FUN_00532134(param_1);
  FUN_00510704(param_1,0x10000100,3);
  return;
}



//==== 0053562c  ns=Global  size=0x214
// sig: undefined FUN_0053562c(void)
// callers(0): 
// callees(5): 0051c030 fios::op_wait_result; 00521b58 fios::filehandle_close_setup; 0052df14 FUN_0052df14; 00532134 FUN_00532134; 00532d1c FUN_00532d1c
// strings: 006698a8: 'Scheduler cache'

void FUN_0053562c(undefined4 *param_1)

{
  undefined4 uVar1;
  
  *param_1 = PTR_PTR_0071af84;
  if (param_1[0x98] != 0) {
    (*(code *)**(undefined4 **)(**(int **)(PTR_DAT_0071af00 + 8) + 4))
              (*(int **)(PTR_DAT_0071af00 + 8),param_1[0x98],0x100d010c,0,0);
    param_1[0x98] = 0;
  }
  if (param_1[0x99] != 0) {
    (*(code *)**(undefined4 **)(**(int **)(PTR_DAT_0071af00 + 8) + 4))
              (*(int **)(PTR_DAT_0071af00 + 8),param_1[0x99],0x100d010c,0,0);
    param_1[0x99] = 0;
  }
  if (param_1[0x8c] != 0) {
    (*(code *)**(undefined4 **)(**(int **)(PTR_DAT_0071af00 + 8) + 4))
              (*(int **)(PTR_DAT_0071af00 + 8),param_1[0x8c],0x106a0102,0,0);
    param_1[0x8c] = 0;
  }
  if (param_1[0x8a] != 0) {
    uVar1 = fios::filehandle_close_setup(param_1[0x47],0,param_1[0x8a]);
    fios::op_wait_result(uVar1,0);
    param_1[0x8a] = 0;
  }
  if (param_1[0x89] != 0) {
    uVar1 = fios::filehandle_close_setup(param_1[0x47],0,param_1[0x89]);
    fios::op_wait_result(uVar1,0);
    param_1[0x89] = 0;
  }
  if (*PTR_PTR_0071af58 != '\0') {
    FUN_0052df14(param_1 + 0x8e);
    FUN_00532134(param_1);
    return;
  }
  FUN_00532d1c(param_1,PTR_s_Scheduler_cache_0071af88);
  FUN_0052df14(param_1 + 0x8e);
  FUN_00532134(param_1);
  return;
}



//==== 00535840  ns=Global  size=0x4f8
// sig: undefined FUN_00535840(void)
// callers(0): 
// callees(7): 0051c030 fios::op_wait_result; 0051c8d4 fios::hash_path_string; 0052157c FUN_0052157c; 0052521c fios::read_req_setup; 0052cbd8 fios::print_tty4; 005cd198 FUN_005cd198; 005d0140 libc::memset
// strings: 00669520: '%s/%s' | 00669780: 'cache.dat' | 00669790: '%s/cach%04X.dat' | 00669a78: "FIOS cache block[%d] for '%s' ignored because %s at read\n" | 00669a38: 'stat failed' | 00669a48: 'mod date changed' | 00669a60: 'creation date changed' | 00669ad0: 'FIOS cache block[%d] read failed: err = %d\n' | 00669ab8: 'FIOS stat err was %d\n'

undefined4 FUN_00535840(int param_1,int param_2,uint param_3,int param_4,int param_5)

{
  uint uVar1;
  int *piVar2;
  uint uVar3;
  int *piVar4;
  undefined4 uVar5;
  int iVar6;
  undefined *puVar7;
  int iVar8;
  uint *puVar9;
  ulonglong uVar10;
  uint local_250 [2];
  undefined8 local_248;
  undefined8 local_240;
  undefined8 local_238;
  undefined8 local_230;
  undefined8 local_228;
  undefined1 auStack_220 [16];
  undefined1 auStack_210 [16];
  undefined1 local_200 [16];
  undefined1 auStack_1f0 [16];
  undefined1 auStack_1e0 [16];
  undefined8 local_1d0;
  undefined4 local_1c8;
  int local_1c4;
  int local_1c0;
  int local_1bc;
  undefined4 local_1b8;
  undefined4 local_1b4;
  undefined4 local_1b0;
  undefined8 local_1a8;
  undefined4 local_1a0;
  undefined8 local_188;
  undefined1 *local_178;
  undefined1 auStack_170 [256];
  
  if (*(char *)(param_1 + 0x118) == '\0') {
    if (*(char *)(param_1 + 0x124) == '\0') {
      uVar10 = 0;
      FUN_005cd198(auStack_170,0x100,PTR_s__s_cach_04X_dat_0071af68,0,param_3);
    }
    else {
      uVar10 = 0;
      FUN_005cd198(auStack_170,0x100,PTR_s__s_cach_04X_dat_0071af68,param_1 + 0x124,param_3);
    }
  }
  else {
    iVar6 = 0;
    if (*(char *)(param_1 + 0x124) != '\0') {
      iVar6 = param_1 + 0x124;
    }
    FUN_005cd198(auStack_170,0x100,PTR_s__s__s_0071af1c,iVar6,PTR_s_cache_dat_0071af64);
    uVar1 = *(uint *)(param_1 + 0x22c);
    uVar10 = (longlong)(int)uVar1 * (longlong)(int)((uVar1 + 0x2f) / uVar1) +
             (longlong)(int)param_3 * (longlong)*(int *)(param_1 + 0xdc) & 0xffffffff;
  }
  puVar7 = PTR_DAT_0071af38;
  local_240 = 0;
  local_230 = 0;
  local_228 = 0;
  local_248 = 1;
  local_238 = 0;
  piVar2 = *(int **)(param_2 + 0x24);
  if ((((*(char *)(param_1 + 0xda) == '\0') ||
       ((((*piVar2 != 10 && (*piVar2 != 0x11)) || (piVar2[4] != *(int *)PTR_DAT_0071af38)) ||
        ((piVar2[5] != *(int *)(PTR_DAT_0071af38 + 4) ||
         (piVar2[6] != *(int *)(PTR_DAT_0071af38 + 8))))))) ||
      (*(longlong *)(piVar2 + 8) != *(longlong *)(PTR_DAT_0071af38 + 0x10))) ||
     (piVar2[10] != *(int *)(PTR_DAT_0071af38 + 0x18))) {
    iVar6 = *(int *)(param_1 + 0xe4);
    iVar8 = param_3 * 0x40 + (param_3 & 0x1fffffff) * -8;
LAB_00535958:
    uVar1 = *(uint *)(param_5 + 0x10);
    puVar9 = (uint *)(param_5 + 0x14);
    local_250[0] = (*(uint *)(iVar8 + iVar6 + 0x20) & 0x3fffffff) - uVar1;
    if (local_250[0] < *puVar9) {
      puVar9 = local_250;
    }
    uVar3 = *puVar9;
    if (*(char *)(param_1 + 0x118) == '\0') {
      uVar5 = FUN_0052157c(*(undefined4 *)(param_1 + 0x11c),&local_248,auStack_170,uVar1 + param_4,
                           uVar10 + uVar1,uVar3);
      iVar6 = fios::op_wait_result(uVar5,0);
    }
    else {
      uVar5 = fios::read_req_setup
                        (*(undefined4 *)(param_1 + 0x11c),&local_248,
                         *(undefined4 *)(param_1 + 0x228),param_4 + uVar1,uVar3);
      iVar6 = fios::op_wait_result(uVar5,0);
    }
    if (iVar6 == 0) {
      uVar5 = 1;
      *(uint *)(param_5 + 0x18) = uVar3;
    }
    else {
      fios::print_tty4(PTR_s_FIOS_cache_block__d__read_failed_0071afc4,param_3,iVar6);
      uVar5 = 0;
    }
  }
  else {
    auStack_1e0 = (undefined1  [16])0x0;
    auStack_220 = (undefined1  [16])0x0;
    auStack_210 = (undefined1  [16])0x0;
    local_1d0 = 0;
    local_200 = (undefined1  [16])0x0;
    auStack_1f0 = (undefined1  [16])0x0;
    libc::memset(&local_1c8,0,0x56);
    local_1c0 = 0;
    fios::hash_path_string(0);
    local_1b8 = *(undefined4 *)puVar7;
    local_1b0 = *(undefined4 *)(puVar7 + 8);
    piVar4 = *(int **)(param_1 + 0x40);
    local_1c8 = 8;
    local_1b4 = *(undefined4 *)(puVar7 + 4);
    local_1a0 = *(undefined4 *)(puVar7 + 0x18);
    local_1a8 = *(undefined8 *)(puVar7 + 0x10);
    local_1c0 = piVar2[2];
    local_1bc = piVar2[3];
    local_178 = auStack_220;
    local_188 = 0x58;
    *(undefined4 **)(param_2 + 0x24) = &local_1c8;
    if (piVar4 != (int *)0x0) {
      (*(code *)**(undefined4 **)(*piVar4 + 0x14))(piVar4,param_2);
    }
    *(int **)(param_2 + 0x24) = piVar2;
    if (local_1c4 == 0) {
      iVar6 = *(int *)(param_1 + 0xe4);
      iVar8 = param_3 * 0x40 + (param_3 & 0x1fffffff) * -8;
      if ((auStack_210._8_8_ == *(longlong *)(iVar8 + iVar6 + 8)) &&
         (local_200._0_8_ == *(longlong *)(iVar8 + iVar6 + 0x10))) goto LAB_00535958;
    }
    if (*(char *)(param_1 + 0xdb) != '\0') {
      puVar7 = PTR_s_stat_failed_0071afb0;
      if ((local_1c4 == 0) &&
         (puVar7 = PTR_s_creation_date_changed_0071afb8,
         auStack_210._8_8_ != *(longlong *)(param_3 * 0x38 + *(int *)(param_1 + 0xe4) + 8))) {
        puVar7 = PTR_s_mod_date_changed_0071afb4;
      }
      fios::print_tty4(PTR_s_FIOS_cache_block__d__for___s__ig_0071afbc,param_3,piVar2[2],puVar7);
      if (local_1c4 != 0) {
        fios::print_tty4(PTR_s_FIOS_stat_err_was__d_0071afc0,local_1c4);
        return 0;
      }
    }
    uVar5 = 0;
  }
  return uVar5;
}



//==== 00535d38  ns=Global  size=0x1404
// sig: undefined FUN_00535d38(void)
// callers(0): 
// callees(23): 0051be64 fios::op_wait; 0051c030 fios::op_wait_result; 0051c304 FUN_0051c304; 0051c8d4 fios::hash_path_string; 0051c9a4 FUN_0051c9a4; 0051fd24 FUN_0051fd24; 005205b4 FUN_005205b4; 005207a0 fios::stat_setup; 00521b58 fios::filehandle_close_setup; 00525524 FUN_00525524; 00526d58 FUN_00526d58; 00527ccc FUN_00527ccc; 0052c8c4 FUN_0052c8c4; 0052cbd8 fios::print_tty4; 0052cc20 FUN_0052cc20; 0052cccc fios::rwlock_wlock_checked; 0052dda0 fios::lwmutex_unlock_checked; 0052de58 fios::lwmutex_lock_checked; 00530b80 FUN_00530b80; 00530d30 FUN_00530d30; 005c5ad0 libc::memcpy; 005cd198 FUN_005cd198; 005d0140 libc::memset
// strings: 00669520: '%s/%s' | 00669780: 'cache.dat' | 00669790: '%s/cach%04X.dat' | 00669b00: "FIOS cache auto-flushed '%s' because %s at read\n" | 00669a38: 'stat failed' | 00669a48: 'mod date changed' | 00669a60: 'creation date changed' | 00669ab8: 'FIOS stat err was %d\n' | 00669b68: 'FIOS cache got a write error during fill: %d (%08X)\n' | 00669b38: "Couldn't open cache file %s for output: %d\n" | 006695d0: 'HDD cache' | 00669ba0: 'FIOS cache got a write error closing %s after fill: %d (%08X)\n'

undefined4 FUN_00535d38(int *param_1,int param_2,undefined4 *param_3,uint param_4)

{
  bool bVar1;
  bool bVar2;
  char cVar3;
  ushort uVar4;
  int *piVar5;
  int iVar6;
  int *piVar7;
  int iVar8;
  int iVar9;
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  void *pvVar13;
  undefined8 uVar14;
  ulonglong uVar15;
  ulonglong uVar16;
  ulonglong uVar17;
  uint uVar19;
  longlong lVar18;
  undefined4 uVar20;
  uint uVar21;
  longlong lVar22;
  int *piVar24;
  int iVar25;
  longlong lVar23;
  undefined8 *puVar26;
  longlong *plVar27;
  int iVar28;
  longlong lVar29;
  int iVar30;
  int *piVar31;
  int iVar32;
  int iVar33;
  undefined *puVar34;
  void *__dest;
  undefined4 *puVar36;
  ulonglong uVar35;
  byte in_cr0;
  byte in_cr1;
  byte in_cr2;
  byte in_cr3;
  byte bVar37;
  byte unaff_cr4;
  byte in_cr5;
  byte in_cr6;
  byte in_cr7;
  uint uStack00000008;
  int local_360 [2];
  ulonglong local_358;
  longlong local_350;
  longlong local_348;
  longlong local_340;
  longlong local_338;
  longlong local_330;
  longlong local_328;
  undefined8 local_320;
  undefined8 local_318;
  undefined8 local_310;
  undefined8 local_308;
  longlong local_300;
  longlong local_2f8;
  undefined1 local_2f0 [16];
  undefined1 auStack_2e0 [8];
  ulonglong uStack_2d8;
  undefined8 local_2d0;
  longlong local_2b0;
  longlong local_2a8;
  undefined1 local_270 [8];
  undefined8 local_268;
  undefined1 local_260 [8];
  int local_258;
  undefined4 uStack_254;
  undefined1 local_250 [16];
  undefined1 local_240 [16];
  undefined1 local_230 [16];
  void *local_220;
  undefined2 local_21c;
  int local_110;
  ulonglong local_108;
  ulonglong local_100;
  char local_f8;
  longlong local_f0;
  longlong local_e8;
  longlong local_e0;
  int *local_d8;
  int local_d4;
  uint local_d0;
  ulonglong local_c8;
  ulonglong local_c0;
  ulonglong local_b8;
  longlong local_b0;
  ulonglong local_a8;
  ulonglong local_a0;
  
  uVar16 = ZEXT48(&stack0x00000000);
  uStack00000008 =
       (uint)(in_cr0 & 0xf) << 0x1c | (uint)(in_cr1 & 0xf) << 0x18 | (uint)(in_cr2 & 0xf) << 0x14 |
       (uint)(in_cr3 & 0xf) << 0x10 | (uint)(unaff_cr4 & 0xf) << 0xc | (uint)(in_cr5 & 0xf) << 8 |
       (uint)(in_cr6 & 0xf) << 4 | (uint)(in_cr7 & 0xf);
  bVar37 = (param_4 == 0) << 1;
  piVar5 = *(int **)(param_2 + 0x24);
  local_b8 = ZEXT48(param_1 + 0x26);
  local_d8 = param_1;
  local_d0 = param_4;
  fios::rwlock_wlock_checked(local_b8);
  _auStack_2e0 = (undefined1  [16])0x0;
  local_2d0 = 0;
  local_d4 = param_2;
  if ((bool)(bVar37 >> 1 & 1)) {
    local_c8 = ZEXT48(local_d8);
    local_2f0 = ZEXT816(0x7fffffffffffffff) << 0x40;
    uVar17 = (*(code *)**(undefined4 **)(*param_1 + 0x2c))(local_c8,param_3);
    if ((int)uVar17 < 0) goto LAB_00536f68;
LAB_00535e38:
    local_b0 = (longlong)(int)uVar17;
    local_110 = (int)((uVar17 & 0xffffffff) << 6) - (int)((uVar17 & 0xffffffff) << 3);
    bVar1 = false;
    bVar2 = false;
    puVar34 = PTR_DAT_0071af00;
  }
  else {
    local_c8 = ZEXT48(local_d8);
    local_2f0 = ZEXT816(1) << 0x40;
    uVar17 = (*(code *)**(undefined4 **)(*param_1 + 0x2c))(local_c8,param_3);
    if (-1 < (int)uVar17) goto LAB_00535e38;
LAB_00536f68:
    uVar19 = FUN_00530b80(local_c8,1);
    puVar34 = PTR_DAT_0071af00;
    local_110 = uVar19 * 0x40 + (uVar19 & 0x1fffffff) * -8;
    plVar27 = (longlong *)(local_110 + param_1[0x39]);
    if (*plVar27 == 2) {
      local_b0 = (longlong)(int)uVar19;
      bVar1 = true;
      bVar2 = true;
    }
    else {
      local_b0 = (longlong)(int)uVar19;
      bVar1 = true;
      bVar2 = false;
      if ((*(uint *)(PTR_DAT_0071af00 + 0x18) & 2) != 0) {
        FUN_00526d58(*(undefined4 *)(param_2 + 0xc),PTR_s_HDD_cache_0071af30,plVar27[3],
                     *(uint *)(plVar27 + 4) & 0x3fffffff,local_b0);
      }
    }
  }
  if (*(char *)(param_1 + 0x46) == '\0') {
    if (*(char *)(local_d8 + 0x49) == '\0') {
      local_a0 = uVar16 - 0x218;
      local_e0 = 0;
      FUN_005cd198(local_a0,0x100,PTR_s__s_cach_04X_dat_0071af68,0,local_b0);
    }
    else {
      local_a0 = uVar16 - 0x218;
      local_e0 = 0;
      FUN_005cd198(local_a0,0x100,PTR_s__s_cach_04X_dat_0071af68,local_d8 + 0x49,local_b0);
    }
    FUN_0051c9a4(uVar16 - 0x310,*param_3);
  }
  else {
    piVar24 = (int *)0x0;
    if (*(char *)(local_d8 + 0x49) != '\0') {
      piVar24 = local_d8 + 0x49;
    }
    local_a0 = uVar16 - 0x218;
    FUN_005cd198(local_a0,0x100,PTR_s__s__s_0071af1c,piVar24,PTR_s_cache_dat_0071af64);
    uVar19 = param_1[0x8b];
    local_e0 = ((longlong)(int)uVar19 * (longlong)(int)((uVar19 + 0x2f) / uVar19) & 0xffffffffU) +
               (ulonglong)(uint)param_1[0x37] * local_b0;
    FUN_0051c9a4(uVar16 - 0x310,*param_3);
  }
  if (bVar1) {
    local_320 = local_310;
    local_318 = local_308;
    (*(code *)**(undefined4 **)(*param_1 + 0x44))
              (local_c8,local_b0,uVar16 - 800,*(undefined8 *)(param_3 + 2));
  }
  puVar26 = (undefined8 *)(local_110 + param_1[0x39]);
  *puVar26 = 3;
  puVar26[1] = 0;
  puVar26[2] = 0;
  uVar14 = *(undefined8 *)(param_3 + 2);
  puVar26[4] = puVar26[4] & 0x7fffffffffffffff;
  iVar6 = param_1[0x39];
  puVar26[3] = uVar14;
  *(ulonglong *)(local_110 + iVar6 + 0x20) =
       ((ulonglong)(uint)param_1[0x37] & 0x3fffffff) << 0x20 |
       *(ulonglong *)(local_110 + iVar6 + 0x20) & 0xc0000000ffffffff;
  iVar6 = param_1[0x39];
  uVar19 = *(uint *)(puVar34 + 0x18);
  *(undefined8 *)(local_110 + iVar6 + 0x28) = local_310;
  *(undefined8 *)(local_110 + iVar6 + 0x30) = local_308;
  if ((uVar19 & 2) != 0) {
    FUN_00527ccc(*(undefined4 *)(param_2 + 0xc),PTR_s_HDD_cache_0071af30,
                 *(undefined8 *)(param_3 + 2),param_1[0x37],local_b0);
  }
  if (!bVar2) {
    (*(code *)**(undefined4 **)(*param_1 + 0x3c))(local_c8,local_b0);
  }
  local_c0 = ZEXT48(local_d8) + 0x238 & 0xffffffff;
  fios::lwmutex_lock_checked(local_c0);
  piVar24 = piVar5 + 2;
  local_350 = 0;
  local_348 = 0;
  FUN_00530d30(local_c8,*piVar24,uVar16 - 0x348,uVar16 - 0x350);
  puVar36 = (undefined4 *)PTR_DAT_0071af38;
  if (*(char *)((int)param_1 + 0xda) == '\0') {
LAB_00535fe4:
    local_a8 = ZEXT48(piVar5);
    local_e8 = local_348;
    local_f0 = local_350;
    FUN_0052cc20(local_b8);
    puVar36 = (undefined4 *)PTR_DAT_0071af38;
    if (local_e8 == 0 && local_f0 == 0) goto LAB_00536018;
  }
  else {
    local_a8 = ZEXT48(piVar5);
    if ((((((*piVar5 != 10) && (*piVar5 != 0x11)) || (piVar5[4] != *(int *)PTR_DAT_0071af38)) ||
         ((piVar5[5] != *(int *)(PTR_DAT_0071af38 + 4) ||
          (piVar5[6] != *(int *)(PTR_DAT_0071af38 + 8))))) ||
        (*(longlong *)(piVar5 + 8) != *(longlong *)(PTR_DAT_0071af38 + 0x10))) ||
       (piVar5[10] != *(int *)(PTR_DAT_0071af38 + 0x18))) goto LAB_00535fe4;
    local_e8 = 0;
    local_f0 = 0;
    FUN_0052cc20(local_b8);
LAB_00536018:
    libc::memset(uVar16 - 0x2c8,0,0x58);
    _local_270 = ZEXT816(0);
    local_230 = (undefined1  [16])0x0;
    local_220 = (void *)0x0;
    _local_260 = (undefined1  [16])0x0;
    local_21c = 0;
    local_250 = (undefined1  [16])0x0;
    local_240 = (undefined1  [16])0x0;
    fios::hash_path_string(0);
    auVar10 = _local_260;
    stack0xfffffd94 = _local_270 << 0x20;
    local_270._0_4_ = 8;
    piVar31 = (int *)local_d8[0x10];
    local_260._4_4_ = puVar36[1];
    local_260._0_4_ = *puVar36;
    local_230._0_8_ = 0x58;
    uStack_254 = auVar10._12_4_;
    local_258 = puVar36[2];
    local_250._8_4_ = puVar36[6];
    local_250._0_8_ = *(undefined8 *)(puVar36 + 4);
    local_268._0_4_ = *piVar24;
    local_268._4_4_ = piVar5[3];
    local_220 = (void *)(uVar16 - 0x2c8);
    *(undefined1 **)(param_2 + 0x24) = local_270;
    if (piVar31 != (int *)0x0) {
      (*(code *)**(undefined4 **)(*piVar31 + 0x14))(piVar31,local_d4);
    }
    *(int **)(param_2 + 0x24) = piVar5;
    if (local_270._4_4_ == 0) {
      local_e8 = local_2b0;
      local_f0 = local_2a8;
    }
    if ((local_348 == 0) || (local_e8 == local_348)) {
      if ((local_350 == 0) || (local_f0 == local_350)) goto LAB_00536178;
      cVar3 = *(char *)((int)param_1 + 0xdb);
    }
    else {
      cVar3 = *(char *)((int)param_1 + 0xdb);
    }
    if (cVar3 != '\0') {
      puVar34 = PTR_s_stat_failed_0071afb0;
      if ((local_270._4_4_ == 0) &&
         (puVar34 = PTR_s_creation_date_changed_0071afb8, local_e8 != local_348)) {
        puVar34 = PTR_s_mod_date_changed_0071afb4;
      }
      fios::print_tty4(PTR_s_FIOS_cache_auto_flushed___s__bec_0071afc8,*piVar24,puVar34);
      if (local_270._4_4_ != 0) {
        fios::print_tty4(PTR_s_FIOS_stat_err_was__d_0071afc0,local_270._4_4_);
      }
    }
    (*(code *)**(undefined4 **)(*param_1 + 0x24))(local_c8,*piVar24);
  }
LAB_00536178:
  iVar6 = param_1[0x8a];
  uVar19 = 0;
  if (iVar6 == 0) {
    uVar17 = local_a0 & 0xffffffff;
    uVar20 = fios::stat_setup(param_1[0x47],uVar16 - 0x2f0,uVar17,0x1a,uVar16 - 0x370);
    uVar19 = fios::op_wait_result(uVar20,0);
    if (uVar19 != 0) {
      fios::print_tty4(PTR_s_Couldn_t_open_cache_file__s_for_o_0071afcc,uVar17,uVar19);
    }
  }
  iVar32 = piVar5[4];
  piVar31 = (int *)piVar5[5];
  iVar30 = piVar5[6];
  lVar29 = *(longlong *)(piVar5 + 8);
  iVar28 = piVar5[10];
  if ((((*(int *)local_a8 == 10) || (*(int *)local_a8 == 0x11)) &&
      (*(int *)PTR_DAT_0071af38 == iVar32)) &&
     (((*(int **)(PTR_DAT_0071af38 + 4) == piVar31 && (*(int *)(PTR_DAT_0071af38 + 8) == iVar30)) &&
      ((*(longlong *)(PTR_DAT_0071af38 + 0x10) == lVar29 &&
       (*(int *)(PTR_DAT_0071af38 + 0x18) == iVar28)))))) {
    _local_270 = ZEXT816(0);
    local_230 = (undefined1  [16])0x0;
    local_220 = (void *)0x0;
    local_21c = 0;
    _local_260 = (undefined1  [16])0x0;
    local_250 = (undefined1  [16])0x0;
    local_240 = (undefined1  [16])0x0;
    fios::hash_path_string(0);
    local_258 = iVar30;
    piVar7 = (int *)local_d8[0x10];
    local_270._0_4_ = *(undefined4 *)local_a8;
    local_260._4_4_ = piVar5[5];
    local_260._0_4_ = piVar5[4];
    stack0xfffffd94 = _local_270 << 0x20;
    local_258 = piVar5[6];
    local_270._0_4_ = 9;
    local_250._8_4_ = piVar5[10];
    local_250._0_8_ = *(undefined8 *)(piVar5 + 8);
    local_268._0_4_ = *piVar24;
    local_268._4_4_ = piVar5[3];
    local_21c = 1;
    *(undefined1 **)(param_2 + 0x24) = local_270;
    if (piVar7 != (int *)0x0) {
      (*(code *)**(undefined4 **)(*piVar7 + 0x14))(piVar7,local_d4);
    }
    *(int **)(param_2 + 0x24) = piVar5;
    if (local_270._4_4_ == 0) {
      local_f8 = '\x01';
      lVar29 = local_250._0_8_;
      iVar32 = local_260._0_4_;
      piVar31 = (int *)local_260._4_4_;
      iVar30 = local_258;
      iVar28 = local_250._8_4_;
    }
    else {
      local_f8 = '\0';
      uVar19 = local_270._4_4_;
    }
  }
  else {
    local_f8 = '\0';
  }
  local_358 = (ulonglong)(uint)param_1[0x37];
  local_360[1] = 0;
  local_360[0] = 0;
  if (uVar19 == 0) {
    local_100 = 0;
    local_108 = 0;
    uVar19 = 0;
    if ((ulonglong)(uint)param_1[0x37] != 0) {
      uVar17 = 0;
      do {
        iVar33 = (int)(uVar17 << 2);
        iVar25 = *(int *)((int)local_360 + iVar33);
        if (iVar25 != 0) {
          uVar19 = fios::op_wait(1,uVar16 - 0x36c,0);
          lVar18 = FUN_0051c304(iVar25);
          local_108 = local_108 + lVar18;
          FUN_0051fd24(*(undefined4 *)(iVar25 + 0x9c),iVar25);
          *(undefined4 *)((int)local_360 + iVar33) = 0;
          if (uVar19 != 0) {
            fios::print_tty4(PTR_s_FIOS_cache_got_a_write_error_dur_0071afd0,uVar19,uVar19);
            uVar21 = (int)(uVar19 ^ 0x80010709) >> 0x1f;
            uVar19 = uVar19 & (int)(uVar21 - (uVar21 ^ uVar19 ^ 0x80010709)) >> 0x1f;
            break;
          }
        }
        uVar35 = local_358;
        lVar18 = *(longlong *)(param_3 + 2);
        uVar19 = param_1[0x37];
        uVar15 = ((ulonglong)uVar19 + lVar18) - local_358;
        local_220 = (void *)0x0;
        local_21c = 0;
        local_230 = (undefined1  [16])0x0;
        _local_270 = ZEXT816(0);
        _local_260 = (undefined1  [16])0x0;
        local_250 = (undefined1  [16])0x0;
        local_240 = (undefined1  [16])0x0;
        fios::hash_path_string(0);
        stack0xfffffd94 = _local_270 << 0x20;
        iVar25 = *(int *)local_a8;
        if (iVar25 == 0x11) {
          iVar25 = 10;
        }
        local_270._0_4_ = iVar25;
        lVar22 = lVar18 + (uVar19 - uVar35);
        local_268._0_4_ = *piVar24;
        local_258 = piVar5[6];
        local_268._4_4_ = piVar5[3];
        local_240._0_8_ = lVar22;
        iVar8 = -0x368;
        if ((longlong)uVar35 <= (longlong)(0x10000 - (uVar15 & 0xffff))) {
          iVar8 = -0x358;
        }
        lVar23 = 0x7fffffffffffffff;
        local_300 = (ulonglong)(uint)param_3[4] + lVar18;
        uVar15 = *(ulonglong *)(&stack0x00000000 + iVar8);
        local_21c = 0xc;
        local_270._4_4_ = 0;
        local_2f8 = local_300 + (ulonglong)(uint)param_3[5];
        auVar10._0_8_ = 0;
        auVar10._8_8_ = uVar15;
        local_230 = auVar10 << 0x40;
        local_260._4_4_ = piVar31;
        local_260._0_4_ = iVar32;
        local_258 = iVar30;
        local_250._8_4_ = iVar28;
        local_250._0_8_ = lVar29;
        if ((longlong)(0x7fffffffffffffff - (ulonglong)(uint)param_3[5]) < local_300) {
          local_2f8 = 0x7fffffffffffffff;
        }
        if (lVar22 <= (longlong)(0x7fffffffffffffff - uVar15)) {
          lVar23 = lVar22 + uVar15;
        }
        iVar8 = -0x300;
        if (local_300 <= lVar22) {
          iVar8 = -0x330;
        }
        iVar9 = -0x328;
        local_330 = *(longlong *)(&stack0x00000000 + iVar8);
        if (local_2f8 <= lVar23) {
          iVar9 = -0x2f8;
        }
        local_328 = *(longlong *)(&stack0x00000000 + iVar9);
        iVar8 = (int)local_c8;
        if ((bool)(bVar37 >> 1 & 1)) {
          __dest = (void *)0x0;
          bVar2 = false;
          local_220 = *(void **)(iVar8 + iVar33 + 0x260);
          uVar15 = ZEXT48(local_220);
          *(undefined1 **)(param_2 + 0x24) = local_270;
          pvVar13 = (void *)0x0;
          if (iVar25 == 0x10) goto LAB_00536810;
LAB_005364bc:
          piVar7 = (int *)local_d8[0x10];
          if (piVar7 != (int *)0x0) {
            (*(code *)**(undefined4 **)(*piVar7 + 0x14))(piVar7,local_d4);
            uVar35 = local_358;
          }
        }
        else {
          if ((local_330 < local_328) && (lVar22 == local_330)) {
            if ((((*(ushort *)((int *)local_a8 + 0x15) & 0x20) == 0) &&
                (0x10000000 < local_d0 + 0x40000000)) && (local_d0 < 0xe0000000)) {
              bVar2 = false;
              bVar1 = true;
            }
            else {
              bVar2 = true;
              bVar1 = false;
            }
            uVar15 = (ulonglong)local_d0 + (lVar22 - lVar18);
            __dest = (void *)uVar15;
            if (bVar1) {
              auVar12._0_8_ = 0;
              auVar12._8_8_ = local_328 - lVar22;
              local_230 = auVar12 << 0x40;
            }
            else {
              uVar15 = (ulonglong)*(uint *)(iVar33 + 0x260 + iVar8);
LAB_00536494:
              if (lVar22 < local_330) {
                auVar11._0_8_ = 0;
                auVar11._8_8_ = local_330 - lVar22;
                local_230 = auVar11 << 0x40;
              }
            }
          }
          else {
            __dest = (void *)(local_d0 + ((int)local_330 - (int)lVar18));
            bVar2 = false;
            uVar15 = (ulonglong)*(uint *)(iVar33 + 0x260 + iVar8);
            if (local_330 < local_328) {
              bVar2 = false;
              goto LAB_00536494;
            }
          }
          local_220 = (void *)uVar15;
          *(undefined1 **)(param_2 + 0x24) = local_270;
          pvVar13 = __dest;
          if (iVar25 != 0x10) goto LAB_005364bc;
LAB_00536810:
          __dest = pvVar13;
          if ((iVar32 != 0) || (piVar31 != local_d8)) goto LAB_005364bc;
          local_270._4_4_ = 0;
        }
        uVar19 = local_270._4_4_;
        bVar1 = local_270._4_4_ != 0;
        *(int **)(param_2 + 0x24) = piVar5;
        local_358 = uVar35 - local_230._8_8_;
        local_100 = local_100 + local_230._8_8_;
        if ((bVar1) && (local_270._4_4_ != 0x80010709)) goto LAB_005368b4;
        if (local_270._4_4_ == 0x80010709) {
          local_358 = 0;
        }
        if (bVar2) {
          libc::memcpy(__dest,local_220,(int)local_328 - (int)local_330);
        }
        auStack_2e0._4_4_ = 0xe;
        uVar20 = FUN_00525524(param_1[0x47],uVar16 - 0x2f0,iVar6,uVar15 & 0xffffffff,local_230._8_8_
                              ,local_e0 + (local_240._0_8_ - *(longlong *)(param_3 + 2)));
        local_338 = local_240._0_8_ + local_230._8_8_;
        *(undefined4 *)((int)local_360 + iVar33) = uVar20;
        local_340 = local_240._0_8_;
        if (0x7fffffffffffffff - local_230._8_8_ < (longlong)local_240._0_8_) {
          local_338 = 0x7fffffffffffffff;
        }
        iVar25 = -0x340;
        if ((longlong)local_240._0_8_ <= local_330) {
          iVar25 = -0x330;
        }
        iVar33 = -0x338;
        local_330 = *(longlong *)(&stack0x00000000 + iVar25);
        if (local_328 < local_338) {
          iVar33 = -0x328;
        }
        local_328 = *(longlong *)(&stack0x00000000 + iVar33);
        if (local_330 < local_328) {
          param_3[6] = param_3[6] + ((int)local_328 - (int)local_330);
        }
        if (bVar1) goto LAB_005368b4;
        uVar19 = 0;
        if ((longlong)local_358 < 1) break;
        uVar17 = uVar17 ^ 1;
      } while( true );
    }
  }
  else {
    local_100 = 0;
    local_108 = 0;
LAB_005368b4:
    uVar21 = (int)(uVar19 ^ 0x80010709) >> 0x1f;
    uVar19 = uVar19 & (int)(uVar21 - (uVar21 ^ uVar19 ^ 0x80010709)) >> 0x1f;
  }
  iVar25 = 0;
  do {
    iVar33 = *(int *)((int)local_360 + iVar25);
    if (iVar33 != 0) {
      uVar21 = fios::op_wait(1,uVar16 - 0x36c & 0xffffffff,0);
      lVar18 = FUN_0051c304(iVar33);
      local_108 = local_108 + lVar18;
      if (uVar21 != 0) {
        fios::print_tty4(PTR_s_FIOS_cache_got_a_write_error_dur_0071afd0,uVar21,uVar21);
      }
      if (uVar19 == 0) {
        uVar19 = uVar21;
      }
      FUN_0051fd24(*(undefined4 *)(iVar33 + 0x9c),iVar33);
      *(int *)((int)local_360 + iVar25) = 0;
    }
    bVar2 = iVar25 != 4;
    iVar25 = iVar25 + 4;
  } while (bVar2);
  if (local_f8 != '\0') {
    _local_270 = ZEXT816(0);
    local_230 = (undefined1  [16])0x0;
    local_220 = (void *)0x0;
    local_21c = 0;
    _local_260 = (undefined1  [16])0x0;
    local_250 = (undefined1  [16])0x0;
    local_240 = (undefined1  [16])0x0;
    fios::hash_path_string(0);
    auVar10 = _local_260;
    stack0xfffffd94 = _local_270 << 0x20;
    local_270._0_4_ = 0xd;
    piVar7 = (int *)local_d8[0x10];
    local_268 = *(undefined8 *)piVar24;
    local_260._4_4_ = piVar31;
    local_260._0_4_ = iVar32;
    uStack_254 = auVar10._12_4_;
    local_258 = iVar30;
    local_250._8_4_ = iVar28;
    local_250._0_8_ = lVar29;
    *(undefined1 **)(param_2 + 0x24) = local_270;
    if (piVar7 != (int *)0x0) {
      (*(code *)**(undefined4 **)(*piVar7 + 0x14))(piVar7,local_d4);
    }
    *(int **)(param_2 + 0x24) = piVar5;
  }
  if ((iVar6 != 0) && (param_1[0x8a] != iVar6)) {
    auStack_2e0._4_4_ = 0;
    uVar20 = fios::filehandle_close_setup(param_1[0x47],uVar16 - 0x2f0,iVar6);
    uVar21 = fios::op_wait_result(uVar20,0);
    if ((uVar21 != 0) &&
       ((fios::print_tty4(PTR_s_FIOS_cache_got_a_write_error_clo_0071afd4,uVar16 - 0x218,uVar19,
                          uVar19), uVar19 == 0 || (uVar19 == 0x80010709)))) {
      uVar19 = uVar21;
    }
  }
  iVar6 = -((int)((((int)uVar19 >> 0x1f ^ uVar19) - ((int)uVar19 >> 0x1f)) + -1) >> 0x1f);
  if ((iVar6 == 0) || (local_108 == local_100)) {
    fios::lwmutex_unlock_checked(local_c0);
    fios::rwlock_wlock_checked(local_b8);
    if (uVar19 == 0) {
      iVar32 = 1;
      iVar6 = 1;
      if (local_108 != 0) {
        puVar26 = (undefined8 *)(local_110 + param_1[0x39]);
        uVar14 = FUN_0052c8c4();
        iVar6 = *(int *)(param_2 + 0x24);
        iVar30 = local_110 + param_1[0x39];
        *puVar26 = uVar14;
        uVar4 = *(ushort *)(iVar6 + 0x54);
        *(longlong *)(iVar30 + 8) = local_e8;
        *(ulonglong *)(iVar30 + 0x20) =
             (ulonglong)(uVar4 >> 4) << 0x3f | *(ulonglong *)(iVar30 + 0x20) & 0x7fffffffffffffff;
        *(longlong *)(iVar30 + 0x10) = local_f0;
        *(ulonglong *)(local_110 + param_1[0x39] + 0x20) =
             (local_108 & 0x3fffffff) << 0x20 |
             *(ulonglong *)(local_110 + param_1[0x39] + 0x20) & 0xc0000000ffffffff;
        goto LAB_00536a98;
      }
    }
  }
  else {
    fios::lwmutex_unlock_checked(local_c0);
    fios::rwlock_wlock_checked(local_b8);
    iVar6 = 0;
  }
  iVar32 = iVar6;
  (*(code *)**(undefined4 **)(*param_1 + 0x40))(local_c8,local_b0);
  puVar26 = (undefined8 *)(local_110 + param_1[0x39]);
  puVar26[3] = 0;
  *puVar26 = 2;
  puVar26[4] = puVar26[4] & 0xc0000000ffffffff;
  *(ulonglong *)(local_110 + param_1[0x39] + 0x20) =
       *(ulonglong *)(local_110 + param_1[0x39] + 0x20) & 0x7fffffffffffffff;
  FUN_0051c9a4(local_110 + param_1[0x39] + 0x28,0);
LAB_00536a98:
  if (param_1[0x8a] != 0) {
    uVar20 = FUN_005205b4(param_1[0x47],0,param_1[0x8a]);
    fios::op_wait_result(uVar20,0);
  }
  uVar20 = 0;
  (*(code *)**(undefined4 **)(*param_1 + 0x3c))(local_c8,local_b0);
  if (iVar32 != 0) {
    plVar27 = (longlong *)(local_d8 + 0x42);
    do {
      instructionSynchronize();
    } while (*plVar27 != *plVar27);
    lVar29 = storeDoubleWordConditionalIndexed
                       (((ulonglong)*(uint *)(local_110 + param_1[0x39] + 0x20) & 0x3fffffff) +
                        *plVar27,0,ZEXT48(plVar27));
    *plVar27 = lVar29;
    uVar20 = 1;
  }
  FUN_0052cc20(local_b8);
  return uVar20;
}



//==== 0053713c  ns=Global  size=0x3d0
// sig: undefined FUN_0053713c(void)
// callers(0): 
// callees(4): 0051c8d4 fios::hash_path_string; 0052cbd8 fios::print_tty4; 005c5ad0 libc::memcpy; 005d0140 libc::memset
// strings: 00669a78: "FIOS cache block[%d] for '%s' ignored because %s at read\n" | 00669a38: 'stat failed' | 00669a48: 'mod date changed' | 00669a60: 'creation date changed' | 00669ab8: 'FIOS stat err was %d\n'

undefined4 FUN_0053713c(int param_1,int param_2,uint param_3,int param_4,int param_5)

{
  int *piVar1;
  size_t __n;
  int *piVar2;
  int iVar3;
  undefined1 auVar4 [16];
  void *__src;
  void *__dest;
  undefined *puVar5;
  int iVar6;
  int iVar7;
  undefined1 auStack_118 [24];
  longlong local_100;
  longlong local_f8;
  undefined1 local_c0 [16];
  undefined1 local_b0 [16];
  undefined1 local_a0 [16];
  undefined1 auStack_90 [16];
  undefined1 local_80 [16];
  undefined1 *local_70;
  undefined2 local_6c;
  
  puVar5 = PTR_DAT_0071af38;
  piVar1 = *(int **)(param_2 + 0x24);
  if ((*(char *)(param_1 + 0xda) == '\0') || ((*piVar1 != 10 && (*piVar1 != 0x11)))) {
    iVar6 = *(int *)(param_1 + 0xe4);
    iVar7 = param_3 * 0x40 + (param_3 & 0x1fffffff) * -8;
  }
  else {
    if ((((piVar1[4] == *(int *)PTR_DAT_0071af38) && (piVar1[5] == *(int *)(PTR_DAT_0071af38 + 4)))
        && (piVar1[6] == *(int *)(PTR_DAT_0071af38 + 8))) &&
       ((*(longlong *)(piVar1 + 8) == *(longlong *)(PTR_DAT_0071af38 + 0x10) &&
        (piVar1[10] == *(int *)(PTR_DAT_0071af38 + 0x18))))) {
      libc::memset(auStack_118,0,0x58);
      local_c0 = ZEXT816(0);
      local_80 = (undefined1  [16])0x0;
      local_70 = (undefined1 *)0x0;
      local_b0 = (undefined1  [16])0x0;
      local_6c = 0;
      local_a0 = (undefined1  [16])0x0;
      auStack_90 = (undefined1  [16])0x0;
      fios::hash_path_string(0);
      auVar4 = local_b0;
      piVar2 = *(int **)(param_1 + 0x40);
      local_c0._0_4_ = 8;
      local_b0._4_4_ = *(undefined4 *)(puVar5 + 4);
      local_b0._0_4_ = *(undefined4 *)puVar5;
      local_80._0_8_ = 0x58;
      local_b0._12_4_ = auVar4._12_4_;
      local_b0._8_4_ = *(undefined4 *)(puVar5 + 8);
      local_a0._8_4_ = *(undefined4 *)(puVar5 + 0x18);
      local_a0._0_8_ = *(undefined8 *)(puVar5 + 0x10);
      local_c0._8_4_ = piVar1[2];
      local_c0._12_4_ = piVar1[3];
      *(undefined1 **)(param_2 + 0x24) = local_c0;
      local_70 = auStack_118;
      if (piVar2 != (int *)0x0) {
        (*(code *)**(undefined4 **)(*piVar2 + 0x14))(piVar2,param_2);
      }
      *(int **)(param_2 + 0x24) = piVar1;
      if (local_c0._4_4_ == 0) {
        iVar6 = *(int *)(param_1 + 0xe4);
        iVar7 = param_3 * 0x40 + (param_3 & 0x1fffffff) * -8;
        if ((local_100 == *(longlong *)(iVar7 + iVar6 + 8)) &&
           (local_f8 == *(longlong *)(iVar7 + iVar6 + 0x10))) goto LAB_005371c8;
      }
      else {
        iVar6 = *(int *)(param_1 + 0xe4);
        iVar7 = param_3 * 0x40 + (param_3 & 0x1fffffff) * -8;
      }
      if (*(char *)(param_1 + 0xdb) != '\0') {
        puVar5 = PTR_s_stat_failed_0071afb0;
        if ((local_c0._4_4_ == 0) &&
           (puVar5 = PTR_s_creation_date_changed_0071afb8,
           local_100 != *(longlong *)(iVar7 + iVar6 + 8))) {
          puVar5 = PTR_s_mod_date_changed_0071afb4;
        }
        fios::print_tty4(PTR_s_FIOS_cache_block__d__for___s__ig_0071afbc,param_3,piVar1[2],puVar5);
        if (local_c0._4_4_ != 0) {
          fios::print_tty4(PTR_s_FIOS_stat_err_was__d_0071afc0,local_c0._4_4_);
          return 0;
        }
      }
      return 0;
    }
    iVar6 = *(int *)(param_1 + 0xe4);
    iVar7 = param_3 * 0x40 + (param_3 & 0x1fffffff) * -8;
  }
LAB_005371c8:
  iVar3 = -0x11c;
  if (*(uint *)(param_5 + 0x14) <= (*(uint *)(iVar7 + iVar6 + 0x20) & 0x3fffffff)) {
    iVar3 = -0x120;
  }
  __dest = (void *)(*(int *)(param_5 + 0x10) + param_4);
  __n = *(size_t *)(&stack0x00000000 + iVar3);
  __src = (void *)(*(int *)(param_1 + 0x110) + *(int *)(param_1 + 0xdc) * param_3 +
                  *(int *)(param_5 + 0x10));
  if (__n < 0x1000) {
    libc::memcpy(__dest,__src,__n);
  }
  else {
    (*(code *)**(undefined4 **)(PTR_DAT_0071af00 + 0x10))(__dest,__src,__n);
  }
  *(size_t *)(param_5 + 0x18) = __n;
  return 1;
}



//==== 0053750c  ns=Global  size=0x6b8
// sig: undefined FUN_0053750c(void)
// callers(0): 
// callees(10): 0051c8d4 fios::hash_path_string; 0051c9a4 FUN_0051c9a4; 00526d58 FUN_00526d58; 00527ccc FUN_00527ccc; 0052c8c4 FUN_0052c8c4; 0052cc20 FUN_0052cc20; 0052cccc fios::rwlock_wlock_checked; 00530b80 FUN_00530b80; 00530d30 FUN_00530d30; 005d0140 libc::memset
// strings: 006695e0: 'RAM cache'

/* WARNING: Restarted to delay deadcode elimination for space: stack */

undefined1 FUN_0053750c(int *param_1,int param_2,undefined4 *param_3,int param_4)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  longlong lVar5;
  undefined8 *puVar6;
  undefined *puVar7;
  undefined4 uVar8;
  undefined1 auVar9 [16];
  int *piVar11;
  undefined8 uVar10;
  int *piVar12;
  uint uVar13;
  undefined1 uVar14;
  int iVar15;
  int iVar16;
  longlong *plVar17;
  int iVar18;
  undefined4 local_1c0;
  undefined4 local_1bc;
  undefined8 local_1b8;
  undefined8 local_1b0;
  undefined4 uStack_1a4;
  undefined1 local_1a0 [8];
  undefined8 local_198;
  undefined1 local_190 [8];
  int local_188;
  undefined4 uStack_184;
  undefined1 local_180 [16];
  undefined1 local_170 [16];
  undefined1 local_160 [16];
  int local_150;
  undefined2 local_14c;
  undefined1 auStack_148 [24];
  undefined8 local_130;
  undefined8 local_128;
  undefined1 local_f0 [12];
  int local_e4;
  undefined1 local_e0 [16];
  undefined1 local_d0 [16];
  undefined1 auStack_c0 [16];
  undefined1 local_b0 [16];
  undefined1 *local_a0;
  undefined2 local_9c;
  
  uVar8 = local_160._12_4_;
  piVar11 = param_1 + 0x26;
  fios::rwlock_wlock_checked(piVar11);
  piVar1 = *(int **)(param_2 + 0x24);
  uVar13 = (*(code *)**(undefined4 **)(*param_1 + 0x2c))(param_1,param_3);
  if ((int)uVar13 < 0) {
    uVar13 = FUN_00530b80(param_1,1);
  }
  puVar7 = PTR_DAT_0071af00;
  iVar16 = param_1[0x39];
  iVar18 = uVar13 * 0x40 + (uVar13 & 0x1fffffff) * -8;
  plVar17 = (longlong *)(iVar18 + iVar16);
  if ((*plVar17 != 2) && ((*(uint *)(PTR_DAT_0071af00 + 0x18) & 2) != 0)) {
    FUN_00526d58(*(undefined4 *)(param_2 + 0xc),PTR_s_RAM_cache_0071af34,plVar17[3],
                 *(uint *)(plVar17 + 4) & 0x3fffffff,uVar13);
    iVar16 = param_1[0x39];
  }
  puVar6 = (undefined8 *)(iVar18 + iVar16);
  *puVar6 = 3;
  uVar10 = *(undefined8 *)(param_3 + 2);
  puVar6[4] = puVar6[4] & 0x7fffffffffffffff;
  iVar16 = param_1[0x39];
  puVar6[3] = uVar10;
  *(ulonglong *)(iVar18 + iVar16 + 0x20) =
       ((ulonglong)(uint)param_1[0x37] & 0x3fffffff) << 0x20 |
       *(ulonglong *)(iVar18 + iVar16 + 0x20) & 0xc0000000ffffffff;
  FUN_0051c9a4(iVar18 + param_1[0x39] + 0x28,*param_3);
  iVar16 = param_1[0x44];
  iVar2 = param_1[0x37];
  if ((*(uint *)(puVar7 + 0x18) & 2) != 0) {
    FUN_00527ccc(*(undefined4 *)(param_2 + 0xc),PTR_s_RAM_cache_0071af34,
                 *(undefined8 *)(param_3 + 2),iVar2,uVar13);
  }
  piVar12 = piVar1 + 2;
  local_1b8 = 0;
  local_1b0 = 0;
  FUN_00530d30(param_1,*piVar12,&local_1b0,&local_1b8);
  FUN_0052cc20(piVar11);
  if (*(char *)((int)param_1 + 0xda) != '\0') {
    libc::memset(auStack_148,0,0x58);
    _local_f0 = ZEXT816(0);
    local_a0 = (undefined1 *)0x0;
    local_b0 = (undefined1  [16])0x0;
    local_e0 = (undefined1  [16])0x0;
    local_d0 = (undefined1  [16])0x0;
    auStack_c0 = (undefined1  [16])0x0;
    local_9c = 0;
    fios::hash_path_string(0);
    auVar9 = local_e0;
    stack0xffffff14 = local_f0 << 0x20;
    local_f0._0_4_ = 8;
    piVar4 = (int *)param_1[0x10];
    local_b0._0_8_ = 0x58;
    local_e0._4_4_ = *(undefined4 *)(PTR_DAT_0071af38 + 4);
    local_e0._0_4_ = *(undefined4 *)PTR_DAT_0071af38;
    local_e0._12_4_ = auVar9._12_4_;
    local_e0._8_4_ = *(undefined4 *)(PTR_DAT_0071af38 + 8);
    local_d0._8_4_ = *(undefined4 *)(PTR_DAT_0071af38 + 0x18);
    local_d0._0_8_ = *(undefined8 *)(PTR_DAT_0071af38 + 0x10);
    local_f0._8_4_ = *piVar12;
    local_e4 = piVar1[3];
    *(undefined1 **)(param_2 + 0x24) = local_f0;
    local_a0 = auStack_148;
    if (piVar4 != (int *)0x0) {
      (*(code *)**(undefined4 **)(*piVar4 + 0x14))(piVar4,param_2);
    }
    *(int **)(param_2 + 0x24) = piVar1;
    if (local_f0._4_4_ == 0) {
      local_1b0 = local_130;
      local_1b8 = local_128;
    }
  }
  _local_1a0 = ZEXT816(0);
  local_160 = (undefined1  [16])0x0;
  local_150 = 0;
  local_14c = 0;
  _local_190 = (undefined1  [16])0x0;
  local_180 = (undefined1  [16])0x0;
  local_170 = (undefined1  [16])0x0;
  fios::hash_path_string(0);
  iVar15 = *piVar1;
  stack0xfffffe64 = _local_1a0 << 0x20;
  if (iVar15 == 0x11) {
    iVar15 = 10;
  }
  uVar10 = *(undefined8 *)(param_3 + 2);
  local_1a0._0_4_ = iVar15;
  local_14c = *(undefined2 *)(piVar1 + 0x15);
  iVar3 = piVar1[3];
  local_198._0_4_ = *piVar12;
  local_180._0_8_ = *(undefined8 *)(piVar1 + 8);
  local_188 = piVar1[6];
  local_190._4_4_ = piVar1[5];
  local_180._8_4_ = piVar1[10];
  *(undefined1 **)(param_2 + 0x24) = local_1a0;
  local_198._4_4_ = iVar3;
  local_170._0_8_ = uVar10;
  local_160._4_4_ = param_1[0x37];
  local_160._0_4_ = 0;
  local_190._0_4_ = piVar1[4];
  local_150 = iVar16 + uVar13 * iVar2;
  if (((iVar15 == 0x10) && (piVar1[4] == 0)) && ((int *)local_190._4_4_ == param_1)) {
    local_1a0._4_4_ = 0;
    local_1a0._0_4_ = 0x10;
  }
  else {
    piVar12 = (int *)param_1[0x10];
    if (piVar12 != (int *)0x0) {
      (*(code *)**(undefined4 **)(*piVar12 + 0x14))(piVar12,param_2);
    }
  }
  *(int **)(param_2 + 0x24) = piVar1;
  fios::rwlock_wlock_checked(piVar11);
  iVar16 = param_1[0x39];
  puVar6 = (undefined8 *)(iVar18 + iVar16);
  if ((local_1a0._4_4_ == 0) || (local_1a0._4_4_ == -0x7ffef8f7)) {
    if (local_1a0._4_4_ == -0x7ffef8f7) {
      puVar6[4] = (local_160._8_8_ & 0x3fffffff) << 0x20 | puVar6[4] & 0xc0000000ffffffff;
      if ((longlong)(ulonglong)(uint)param_3[5] < (longlong)local_160._8_8_) {
        iVar16 = param_1[0x39];
        param_3[6] = uStack_1a4;
      }
      else {
        iVar16 = param_1[0x39];
        param_3[6] = uVar8;
      }
    }
    plVar17 = (longlong *)(param_1 + 0x42);
    do {
      instructionSynchronize();
    } while (*plVar17 != *plVar17);
    lVar5 = storeDoubleWordConditionalIndexed
                      (((ulonglong)*(uint *)(iVar18 + iVar16 + 0x20) & 0x3fffffff) + *plVar17,0,
                       ZEXT48(plVar17));
    *plVar17 = lVar5;
    iVar16 = param_1[0x39];
    uVar10 = FUN_0052c8c4();
    iVar2 = iVar18 + param_1[0x39];
    *(undefined8 *)(iVar18 + iVar16) = uVar10;
    *(undefined8 *)(iVar2 + 8) = local_1b0;
    *(undefined8 *)(iVar2 + 0x10) = local_1b8;
    if (param_4 == 0) {
      if ((*(uint *)(iVar2 + 0x20) & 0x3fffffff) < (uint)param_3[5]) {
        uVar14 = 1;
        param_3[6] = local_1bc;
      }
      else {
        uVar14 = 1;
        param_3[6] = local_1c0;
      }
    }
    else {
      uVar14 = (*(code *)**(undefined4 **)(*param_1 + 0x54))(param_1,param_2,uVar13,param_4,param_3)
      ;
    }
  }
  else {
    uVar14 = 0;
    *puVar6 = 2;
  }
  FUN_0052cc20(piVar11);
  return uVar14;
}



//==== 00537bc4  ns=Global  size=0x1e4
// sig: undefined FUN_00537bc4(void)
// callers(0): 
// callees(0): 

void FUN_00537bc4(int *param_1,int param_2)

{
  uint *puVar1;
  uint uVar2;
  int *piVar3;
  
  if (*(char *)(param_1 + 0x36) == '\0') {
    if ((*(ushort *)(param_2 + 0x28) & 1) != 0) {
      (*(code *)**(undefined4 **)(*param_1 + 8))(param_1,param_2);
      return;
    }
    puVar1 = *(uint **)(param_2 + 0x24);
    uVar2 = *puVar1;
    if (uVar2 < 0x12) {
                    /* WARNING: Could not recover jumptable at 0x00537d10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)(PTR_DAT_0071afd8 + *(int *)(PTR_DAT_0071afd8 + uVar2 * 4)))();
      return;
    }
    if (((uVar2 == 0x10) && (puVar1[4] == 0)) && ((int *)puVar1[5] == param_1)) {
      puVar1[1] = 0;
      return;
    }
    piVar3 = (int *)param_1[0x10];
  }
  else {
    piVar3 = *(int **)(param_2 + 0x24);
    if (((*piVar3 == 0x10) && (piVar3[4] == 0)) && ((int *)piVar3[5] == param_1)) {
      piVar3[1] = 0;
      return;
    }
    piVar3 = (int *)param_1[0x10];
  }
  if (piVar3 != (int *)0x0) {
    (*(code *)**(undefined4 **)(*piVar3 + 0x14))(piVar3,param_2);
  }
  return;
}



//==== 005390ac  ns=fios  size=0x3c
// sig: undefined handle_destroy(void)
// callers(5): 0051f3e0 FUN_0051f3e0; 0051fa5c FUN_0051fa5c; 005219b0 fios::filehandle_release; 005238c0 FUN_005238c0; 005258cc FUN_005258cc
// callees(2): 005107d0 fios::handle_invalidate_magic; 00604760 fios::check_magic

void fios::handle_destroy(undefined8 param_1)

{
  check_magic();
  handle_invalidate_magic(param_1);
  return;
}



//==== 005390e8  ns=Global  size=0x3c
// sig: undefined FUN_005390e8(void)
// callers(0): 
// callees(2): 005107d0 fios::handle_invalidate_magic; 00604760 fios::check_magic

void FUN_005390e8(undefined8 param_1)

{
  fios::check_magic();
  fios::handle_invalidate_magic(param_1);
  return;
}



//==== 00539124  ns=Global  size=0xd0
// sig: undefined FUN_00539124(void)
// callers(3): 0051dcc4 FUN_0051dcc4; 0051e6cc FUN_0051e6cc; 0051fa5c FUN_0051fa5c
// callees(2): 005106cc FUN_005106cc; 00604760 fios::check_magic

void FUN_00539124(int param_1,undefined4 param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  
  FUN_005106cc(param_1);
  uVar4 = *(undefined8 *)(PTR_DAT_0071afe4 + 0x10);
  uVar1 = *(undefined4 *)(PTR_DAT_0071afe4 + 0x18);
  uVar2 = *(undefined4 *)(PTR_DAT_0071afe4 + 4);
  uVar3 = *(undefined4 *)(PTR_DAT_0071afe4 + 8);
  *(undefined4 *)(param_1 + 0x10) = *(undefined4 *)PTR_DAT_0071afe4;
  *(undefined8 *)(param_1 + 0x20) = uVar4;
  *(undefined4 *)(param_1 + 0x34) = 0;
  *(undefined4 *)(param_1 + 8) = 0;
  *(undefined4 *)(param_1 + 0xc) = 0;
  *(undefined4 *)(param_1 + 0x28) = uVar1;
  *(undefined4 *)(param_1 + 0x14) = uVar2;
  *(undefined4 *)(param_1 + 0x18) = uVar3;
  *(undefined4 *)(param_1 + 0x54) = 0;
  *(undefined4 *)(param_1 + 0x30) = 0;
  *(undefined8 *)(param_1 + 0x38) = 0;
  *(undefined8 *)(param_1 + 0x40) = 0;
  *(undefined8 *)(param_1 + 0x48) = 0;
  *(undefined4 *)(param_1 + 0x50) = 0;
  fios::check_magic(param_1);
  *(undefined4 *)(param_1 + 0x30) = param_2;
  *(undefined4 *)(param_1 + 4) = 0x66682020;
  return;
}



//==== 005391f4  ns=Global  size=0xd0
// sig: undefined FUN_005391f4(void)
// callers(0): 
// callees(2): 005106cc FUN_005106cc; 00604760 fios::check_magic

void FUN_005391f4(int param_1,undefined4 param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  
  FUN_005106cc(param_1);
  uVar4 = *(undefined8 *)(PTR_DAT_0071afe4 + 0x10);
  uVar1 = *(undefined4 *)(PTR_DAT_0071afe4 + 0x18);
  uVar2 = *(undefined4 *)(PTR_DAT_0071afe4 + 4);
  uVar3 = *(undefined4 *)(PTR_DAT_0071afe4 + 8);
  *(undefined4 *)(param_1 + 0x10) = *(undefined4 *)PTR_DAT_0071afe4;
  *(undefined8 *)(param_1 + 0x20) = uVar4;
  *(undefined4 *)(param_1 + 0x34) = 0;
  *(undefined4 *)(param_1 + 8) = 0;
  *(undefined4 *)(param_1 + 0xc) = 0;
  *(undefined4 *)(param_1 + 0x28) = uVar1;
  *(undefined4 *)(param_1 + 0x14) = uVar2;
  *(undefined4 *)(param_1 + 0x18) = uVar3;
  *(undefined4 *)(param_1 + 0x54) = 0;
  *(undefined4 *)(param_1 + 0x30) = 0;
  *(undefined8 *)(param_1 + 0x38) = 0;
  *(undefined8 *)(param_1 + 0x40) = 0;
  *(undefined8 *)(param_1 + 0x48) = 0;
  *(undefined4 *)(param_1 + 0x50) = 0;
  fios::check_magic(param_1);
  *(undefined4 *)(param_1 + 0x30) = param_2;
  *(undefined4 *)(param_1 + 4) = 0x66682020;
  return;
}



//==== 005392c4  ns=Global  size=0x94
// sig: undefined FUN_005392c4(void)
// callers(0): 
// callees(4): 0052dda0 fios::lwmutex_unlock_checked; 0052de58 fios::lwmutex_lock_checked; 00604760 fios::check_magic; 00604788 FUN_00604788

undefined8 FUN_005392c4(int param_1)

{
  int iVar1;
  char cVar2;
  undefined8 uVar3;
  
  cVar2 = fios::check_magic();
  uVar3 = 0xffffffffffffffff;
  if ((cVar2 != '\0') && (cVar2 = FUN_00604788(*(undefined4 *)(param_1 + 8)), cVar2 != '\0')) {
    iVar1 = *(int *)(param_1 + 8) + 0x138;
    fios::lwmutex_lock_checked(iVar1);
    uVar3 = *(undefined8 *)(param_1 + 0x40);
    fios::lwmutex_unlock_checked(iVar1);
  }
  return uVar3;
}



//==== 00539358  ns=Global  size=0x148
// sig: undefined FUN_00539358(void)
// callers(1): 0051cf28 FUN_0051cf28
// callees(4): 0052dda0 fios::lwmutex_unlock_checked; 0052de58 fios::lwmutex_lock_checked; 00604760 fios::check_magic; 00604788 FUN_00604788

int FUN_00539358(int param_1,longlong param_2,char param_3,undefined8 *param_4)

{
  int iVar1;
  char cVar2;
  int iVar3;
  
  cVar2 = fios::check_magic();
  if ((cVar2 == '\0') || (cVar2 = FUN_00604788(*(undefined4 *)(param_1 + 8)), cVar2 == '\0')) {
    iVar3 = -0x7ffef8fa;
  }
  else {
    iVar1 = *(int *)(param_1 + 8) + 0x138;
    fios::lwmutex_lock_checked(iVar1);
    if (param_3 == '\x01') {
      iVar3 = 0;
      param_2 = param_2 + *(longlong *)(param_1 + 0x40);
    }
    else {
      iVar3 = 0;
      if ((param_3 != '\0') && (iVar3 = -0x7ffef8f9, param_3 == '\x02')) {
        iVar3 = 0;
        param_2 = param_2 + *(longlong *)(param_1 + 0x48);
      }
    }
    if ((param_2 < 0) || (*(longlong *)(param_1 + 0x48) < param_2)) {
      iVar3 = -0x7ffef8f5;
    }
    else if (iVar3 == 0) {
      *(longlong *)(param_1 + 0x40) = param_2;
    }
    if (param_4 != (undefined8 *)0x0) {
      *param_4 = *(undefined8 *)(param_1 + 0x40);
    }
    fios::lwmutex_unlock_checked(iVar1);
  }
  return iVar3;
}



//==== 005394a0  ns=Global  size=0x11c
// sig: undefined FUN_005394a0(void)
// callers(1): 005395bc FUN_005395bc
// callees(0): 

int FUN_005394a0(uint param_1)

{
  uint uStack00000030;
  undefined4 local_30;
  undefined4 local_20;
  
  local_30 = 0x20;
  uStack00000030 = param_1;
  if (param_1 >> 0x10 != 0) {
    local_30 = 0x10;
    uStack00000030 = param_1 >> 0x10;
  }
  if (uStack00000030 >> 8 != 0) {
    local_30 = local_30 + -8;
    uStack00000030 = uStack00000030 >> 8;
  }
  if (uStack00000030 >> 4 != 0) {
    local_30 = local_30 + -4;
    uStack00000030 = uStack00000030 >> 4;
  }
  if (uStack00000030 >> 2 != 0) {
    local_30 = local_30 + -2;
    uStack00000030 = uStack00000030 >> 2;
  }
  if (uStack00000030 >> 1 == 0) {
    local_20 = local_30 - uStack00000030;
  }
  else {
    local_20 = local_30 + -2;
  }
  return local_20;
}



//==== 005395bc  ns=Global  size=0x54
// sig: undefined FUN_005395bc(void)
// callers(1): 00539d68 FUN_00539d68
// callees(1): 005394a0 FUN_005394a0

int FUN_005395bc(undefined4 param_1)

{
  int iVar1;
  undefined4 uStack00000030;
  
  uStack00000030 = param_1;
  iVar1 = FUN_005394a0(param_1);
  return 0x1f - iVar1;
}



//==== 00539610  ns=Global  size=0x310
// sig: undefined FUN_00539610(void)
// callers(1): 0053a848 FUN_0053a848
// callees(0): 

void FUN_00539610(int param_1,uint param_2,uint param_3)

{
  undefined4 local_70;
  undefined4 local_6c;
  
  for (local_6c = 0; local_6c < param_2; local_6c = local_6c + 1) {
    for (local_70 = 0; local_70 < param_3; local_70 = local_70 + 1) {
      *(undefined4 *)((param_2 * local_70 + local_6c) * 0x10 + param_1) = DAT_0071b0b8;
      *(float *)((param_2 * local_70 + local_6c) * 0x10 + param_1 + 4) =
           (float)local_6c / (float)param_2;
      *(float *)((param_2 * local_70 + local_6c) * 0x10 + param_1 + 8) =
           (float)local_70 / (float)param_3;
      *(undefined4 *)((param_2 * local_70 + local_6c) * 0x10 + param_1 + 0xc) = DAT_0071b0b8;
    }
  }
  return;
}



//==== 00539920  ns=Global  size=0x448
// sig: undefined FUN_00539920(void)
// callers(0): 
// callees(0): 

void FUN_00539920(int param_1,uint param_2,uint param_3,int param_4,uint param_5,uint param_6)

{
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  
  for (local_1c = 0; local_1c < param_3; local_1c = local_1c + 1) {
    for (local_20 = 0; local_20 < param_2; local_20 = local_20 + 1) {
      *(undefined1 *)((param_2 * local_1c + local_20) * param_4 + param_1) = 0xff;
      *(undefined1 *)((param_2 * local_1c + local_20) * param_4 + param_1 + 1) = 0xff;
      *(undefined1 *)((param_2 * local_1c + local_20) * param_4 + param_1 + 2) = 0xff;
      *(undefined1 *)((param_2 * local_1c + local_20) * param_4 + param_1 + 3) = 0xff;
    }
  }
  for (local_24 = 0; local_24 < param_3; local_24 = local_24 + 1) {
    if ((int)((ulonglong)local_24 / (ulonglong)param_5) ==
        (int)(((ulonglong)local_24 / (ulonglong)param_5) / (ulonglong)param_6) * param_6) {
      for (local_28 = 0; local_28 < param_2; local_28 = local_28 + 1) {
        *(undefined1 *)((param_2 * local_24 + local_28) * param_4 + param_1) = 0xff;
        *(undefined1 *)((param_2 * local_24 + local_28) * param_4 + param_1 + 1) = 0;
        *(undefined1 *)((param_2 * local_24 + local_28) * param_4 + param_1 + 2) = 0;
        *(undefined1 *)((param_2 * local_24 + local_28) * param_4 + param_1 + 3) = 0;
      }
    }
    else {
      for (local_2c = 0; local_2c < param_2; local_2c = local_2c + param_5 * param_6) {
        if ((int)((ulonglong)local_2c / (ulonglong)param_5) ==
            (int)(((ulonglong)local_2c / (ulonglong)param_5) / (ulonglong)param_6) * param_6) {
          for (local_30 = 0; local_30 < param_5; local_30 = local_30 + 1) {
            *(undefined1 *)((param_2 * local_24 + local_2c + local_30) * param_4 + param_1) = 0xff;
            *(undefined1 *)((param_2 * local_24 + local_2c + local_30) * param_4 + param_1 + 1) = 0;
            *(undefined1 *)((param_2 * local_24 + local_2c + local_30) * param_4 + param_1 + 2) = 0;
            *(undefined1 *)((param_2 * local_24 + local_2c + local_30) * param_4 + param_1 + 3) = 0;
          }
        }
      }
    }
  }
  return;
}



//==== 00539d68  ns=Global  size=0x3ec
// sig: undefined FUN_00539d68(void)
// callers(0): 
// callees(1): 005395bc FUN_005395bc

void FUN_00539d68(int param_1,uint param_2,uint param_3,uint param_4)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  int iStack00000030;
  uint uStack00000038;
  uint uStack00000040;
  uint uStack00000048;
  uint local_5c;
  uint local_58;
  uint local_54;
  uint local_50;
  uint local_4c;
  uint local_48;
  int local_40;
  int local_3c;
  uint local_30;
  
  local_3c = param_2 * param_3 * param_4;
  local_40 = 0;
  iStack00000030 = param_1;
  uStack00000038 = param_2;
  uStack00000040 = param_3;
  uStack00000048 = param_4;
  uVar1 = FUN_005395bc(param_2);
  uVar2 = FUN_005395bc(uStack00000040);
  if (uVar2 < uVar1) {
    iVar3 = FUN_005395bc(uStack00000038);
  }
  else {
    iVar3 = FUN_005395bc(uStack00000040);
  }
  local_30 = iVar3 + 1;
  local_48 = uStack00000038;
  local_4c = uStack00000040;
  if (uStack00000038 != 1) {
    local_48 = uStack00000038 >> 1;
  }
  if (uStack00000040 != 1) {
    local_4c = uStack00000040 >> 1;
  }
  for (local_50 = 1; local_50 < local_30; local_50 = local_50 + 1) {
    for (local_54 = 0; local_54 < local_4c; local_54 = local_54 + 1) {
      for (local_58 = 0; local_58 < local_48; local_58 = local_58 + 1) {
        for (local_5c = 0; local_5c < uStack00000048; local_5c = local_5c + 1) {
          *(char *)((param_2 * local_54 + local_58) * uStack00000048 + local_3c + local_5c +
                   iStack00000030) =
               (char)((uint)*(byte *)((param_2 * local_54 + local_58) * uStack00000048 * 2 +
                                      local_40 + local_5c + iStack00000030) +
                      (uint)*(byte *)(((param_2 * local_54 + local_58) * 2 + 1) * uStack00000048 +
                                      local_40 + local_5c + iStack00000030) +
                      (uint)*(byte *)(((local_54 * 2 + 1) * param_2 + local_58 * 2) * uStack00000048
                                      + local_40 + local_5c + iStack00000030) +
                      (uint)*(byte *)(((local_54 * 2 + 1) * param_2 + local_58 * 2 + 1) *
                                      uStack00000048 + local_40 + local_5c + iStack00000030) >> 2);
        }
      }
    }
    local_40 = local_3c;
    local_3c = local_3c + param_2 * local_4c * uStack00000048;
    if (local_48 != 1) {
      local_48 = local_48 >> 1;
    }
    if (local_4c != 1) {
      local_4c = local_4c >> 1;
    }
  }
  return;
}



//==== 0053a154  ns=Global  size=0x3e4
// sig: undefined FUN_0053a154(void)
// callers(2): 004ded28 FUN_004ded28; 004defb0 FUN_004defb0
// callees(2): 005cd098 libc::printf; 005cef7c FUN_005cef7c
// strings: 0065fea0: 'format:%x\n' | 0065feb0: 'j:/Ratchet/Source/PS3/cell/samples/common/gcmutil/old/texture.cpp:337 false'

undefined4 FUN_0053a154(uint param_1,uint *param_2,undefined4 *param_3,int param_4,int param_5)

{
  uint uStack00000030;
  uint *puStack00000038;
  undefined4 *puStack00000040;
  int iStack00000048;
  int iStack00000050;
  
  if (param_1 == 0x83f3) {
    *param_2 = 0x88;
    *param_3 = 0xaae4;
    return 0;
  }
  if (param_1 < 0x83f4) {
    if (param_1 == 0x83f1) {
      *param_2 = 0x86;
      *param_3 = 0xaae4;
      return 0;
    }
    if (0x83f1 < param_1) {
      *param_2 = 0x87;
      *param_3 = 0xaae4;
      return 0;
    }
    if (param_1 == 0x8058) {
      *param_2 = 0x85;
      if (param_4 == 0) {
        *param_2 = *param_2 | 0x20;
      }
      if (param_5 == 0) {
        *param_2 = *param_2 | 0x40;
      }
      *param_3 = 0xaa93;
      return 0;
    }
  }
  else {
    if (param_1 == 0x881a) {
LAB_0053a44c:
      if (param_1 == 0x881a) {
        *param_2 = 0x9a;
      }
      else {
        *param_2 = 0x9b;
      }
      if (param_4 == 0) {
        *param_2 = *param_2 | 0x20;
      }
      if (param_5 == 0) {
        *param_2 = *param_2 | 0x40;
      }
      *param_3 = 0xaae4;
      return 0;
    }
    if (param_1 < 0x881b) {
      if (param_1 == 0x8814) goto LAB_0053a44c;
    }
    else {
      if (param_1 == 0xff00) {
        *param_2 = 0x85;
        if (param_4 == 0) {
          *param_2 = *param_2 | 0x20;
        }
        if (param_5 == 0) {
          *param_2 = *param_2 | 0x40;
        }
        *param_3 = 0xaae4;
        return 0;
      }
      if (param_1 == 0xff01) {
        *param_2 = 0x85;
        if (param_4 == 0) {
          *param_2 = *param_2 | 0x20;
        }
        if (param_5 == 0) {
          *param_2 = *param_2 | 0x40;
        }
        *param_3 = 0xaa1b;
        return 0;
      }
    }
  }
  uStack00000030 = param_1;
  puStack00000038 = param_2;
  puStack00000040 = param_3;
  iStack00000048 = param_4;
  iStack00000050 = param_5;
  libc::printf(PTR_s_format__x_0071b0bc,param_1);
  FUN_005cef7c(PTR_s_j__Ratchet_Source_PS3_cell_sampl_0071b0c0,0);
  return 0;
}



//==== 0053a538  ns=Global  size=0x310
// sig: undefined FUN_0053a538(void)
// callers(0): 
// callees(5): 0053bac0 FUN_0053bac0; 005c5ad0 libc::memcpy; 005cef7c FUN_005cef7c; 005d580c FUN_005d580c; 005d5838 FUN_005d5838
// strings: 0065ff00: 'j:/Ratchet/Source/PS3/cell/samples/common/gcmutil/old/texture.cpp:197 p != NULL'

void FUN_0053a538(int param_1,uint param_2,uint param_3,int param_4,int param_5)

{
  int iVar1;
  int iStack00000030;
  uint uStack00000038;
  uint uStack00000040;
  int iStack00000048;
  int iStack00000050;
  uint local_70;
  uint local_6c;
  uint local_68;
  int local_60;
  undefined4 auStack_58 [20];
  
  local_60 = 0;
  iStack00000030 = param_1;
  uStack00000038 = param_2;
  uStack00000040 = param_3;
  iStack00000048 = param_4;
  iStack00000050 = param_5;
  libc::memcpy(auStack_58,PTR_DAT_0071b0c4,0x48);
  iVar1 = FUN_005d5838(uStack00000038 * uStack00000040 * iStack00000048);
  if (iVar1 == 0) {
    FUN_005cef7c(PTR_s_j__Ratchet_Source_PS3_cell_sampl_0071b0c8,0);
  }
  for (local_68 = 0; local_68 < 6; local_68 = local_68 + 1) {
    for (local_6c = 0; local_6c < uStack00000040; local_6c = local_6c + 1) {
      for (local_70 = 0; local_70 < uStack00000038; local_70 = local_70 + 1) {
        *(undefined1 *)((param_2 * local_6c + local_70) * iStack00000048 + iVar1) = 0xff;
        *(char *)((param_2 * local_6c + local_70) * iStack00000048 + iVar1 + 1) =
             (char)*(undefined4 *)
                    ((int)auStack_58 +
                    ((int)(((ulonglong)local_68 & 0x3fffffff) << 4) -
                    (int)(((ulonglong)local_68 & 0x3fffffff) << 2)));
        *(char *)((param_2 * local_6c + local_70) * iStack00000048 + iVar1 + 2) =
             (char)*(undefined4 *)
                    ((int)auStack_58 +
                    ((int)(((ulonglong)local_68 & 0x3fffffff) << 4) -
                    (int)(((ulonglong)local_68 & 0x3fffffff) << 2)) + 4);
        *(char *)((param_2 * local_6c + local_70) * iStack00000048 + iVar1 + 3) =
             (char)*(undefined4 *)
                    ((int)auStack_58 +
                    ((int)(((ulonglong)local_68 & 0x3fffffff) << 4) -
                    (int)(((ulonglong)local_68 & 0x3fffffff) << 2)) + 8);
      }
    }
    if (iStack00000050 != 0) {
      FUN_0053bac0(local_60 + iStack00000030,iVar1,uStack00000038,uStack00000040,iStack00000048);
    }
    local_60 = local_60 + param_2 * uStack00000040 * iStack00000048;
  }
  FUN_005d580c(iVar1);
  return;
}



//==== 0053a848  ns=Global  size=0x104
// sig: undefined FUN_0053a848(void)
// callers(0): 
// callees(5): 00539610 FUN_00539610; 0053bac0 FUN_0053bac0; 005cef7c FUN_005cef7c; 005d580c FUN_005d580c; 005d5838 FUN_005d5838
// strings: 0065ff50: 'j:/Ratchet/Source/PS3/cell/samples/common/gcmutil/old/texture.cpp:91 p != NULL'

void FUN_0053a848(undefined4 param_1,uint param_2,int param_3)

{
  int iVar1;
  undefined4 uStack00000030;
  uint uStack00000038;
  int iStack00000040;
  
  uStack00000030 = param_1;
  uStack00000038 = param_2;
  iStack00000040 = param_3;
  iVar1 = FUN_005d5838(((longlong)(int)param_2 * (longlong)param_3 & 0xfffffffU) << 4);
  if (iVar1 == 0) {
    FUN_005cef7c(PTR_s_j__Ratchet_Source_PS3_cell_sampl_0071b0cc,0);
  }
  FUN_00539610(iVar1,uStack00000038,iStack00000040);
  FUN_0053bac0(uStack00000030,iVar1,((ulonglong)uStack00000038 & 0x3fffffff) << 2,iStack00000040,
               0x10);
  FUN_005d580c(iVar1);
  return;
}



//==== 0053a94c  ns=Global  size=0x368
// sig: undefined FUN_0053a94c(void)
// callers(1): 0053acb4 FUN_0053acb4
// callees(1): 0053b258 FUN_0053b258

void FUN_0053a94c(int param_1,uint param_2,uint param_3)

{
  longlong lVar1;
  undefined2 uVar2;
  int iVar3;
  int iStack00000030;
  uint uStack00000038;
  uint uStack00000040;
  undefined4 local_80;
  undefined4 local_7c;
  
  iStack00000030 = param_1;
  uStack00000038 = param_2;
  uStack00000040 = param_3;
  for (local_7c = 0; local_7c < uStack00000038; local_7c = local_7c + 1) {
    for (local_80 = 0; local_80 < uStack00000040; local_80 = local_80 + 1) {
      lVar1 = (longlong)(int)uStack00000038;
      uVar2 = FUN_0053b258((double)DAT_0071b0b8);
      *(undefined2 *)
       ((int)((lVar1 * (int)local_80 + (ulonglong)local_7c & 0xffffffff) << 3) + param_1) = uVar2;
      iVar3 = uStack00000038 * local_80;
      uVar2 = FUN_0053b258((double)((float)local_7c / (float)uStack00000038));
      *(undefined2 *)((iVar3 + local_7c) * 8 + param_1 + 2) = uVar2;
      iVar3 = uStack00000038 * local_80;
      uVar2 = FUN_0053b258((double)((float)local_80 / (float)uStack00000040));
      *(undefined2 *)((iVar3 + local_7c) * 8 + param_1 + 4) = uVar2;
      lVar1 = (longlong)(int)uStack00000038;
      uVar2 = FUN_0053b258((double)DAT_0071b0b8);
      *(undefined2 *)
       ((int)((lVar1 * (int)local_80 + (ulonglong)local_7c & 0xffffffff) << 3) + param_1 + 6) =
           uVar2;
    }
  }
  return;
}



//==== 0053acb4  ns=Global  size=0x104
// sig: undefined FUN_0053acb4(void)
// callers(0): 
// callees(5): 0053a94c FUN_0053a94c; 0053bac0 FUN_0053bac0; 005cef7c FUN_005cef7c; 005d580c FUN_005d580c; 005d5838 FUN_005d5838
// strings: 0065ffa0: 'j:/Ratchet/Source/PS3/cell/samples/common/gcmutil/old/texture.cpp:63 p != NULL'

void FUN_0053acb4(undefined4 param_1,uint param_2,int param_3)

{
  int iVar1;
  undefined4 uStack00000030;
  uint uStack00000038;
  int iStack00000040;
  
  uStack00000030 = param_1;
  uStack00000038 = param_2;
  iStack00000040 = param_3;
  iVar1 = FUN_005d5838(((longlong)(int)param_2 * (longlong)param_3 & 0x1fffffffU) << 3);
  if (iVar1 == 0) {
    FUN_005cef7c(PTR_s_j__Ratchet_Source_PS3_cell_sampl_0071b0d0,0);
  }
  FUN_0053a94c(iVar1,uStack00000038,iStack00000040);
  FUN_0053bac0(uStack00000030,iVar1,((ulonglong)uStack00000038 & 0x7fffffff) << 1,iStack00000040,8);
  FUN_005d580c(iVar1);
  return;
}



//==== 0053adb8  ns=Global  size=0x380
// sig: undefined FUN_0053adb8(void)
// callers(1): 0053b138 FUN_0053b138
// callees(1): 005dc924 FUN_005dc924

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_0053adb8(int param_1,uint param_2,uint param_3,int param_4)

{
  int iVar1;
  double dVar2;
  int iStack00000030;
  uint uStack00000038;
  uint uStack00000040;
  int iStack00000048;
  undefined4 local_80;
  undefined4 local_7c;
  
  iStack00000030 = param_1;
  uStack00000038 = param_2;
  uStack00000040 = param_3;
  iStack00000048 = param_4;
  for (local_7c = 0; local_7c < uStack00000038; local_7c = local_7c + 1) {
    for (local_80 = 0; local_80 < uStack00000040; local_80 = local_80 + 1) {
      *(undefined1 *)((uStack00000038 * local_80 + local_7c) * iStack00000048 + iStack00000030) =
           0xff;
      *(undefined1 *)((uStack00000038 * local_80 + local_7c) * iStack00000048 + iStack00000030 + 1)
           = 0xff;
      iVar1 = (uStack00000038 * local_80 + local_7c) * iStack00000048 + iStack00000030;
      dVar2 = (double)FUN_005dc924((double)(((float)local_7c * DAT_0071b0d4) / (float)uStack00000038
                                           ));
      *(char *)(iVar1 + 2) = (char)(int)dVar2;
      iVar1 = (uStack00000038 * local_80 + local_7c) * iStack00000048 + iStack00000030;
      dVar2 = (double)FUN_005dc924((double)(((float)local_80 * DAT_0071b0d4) / (float)uStack00000040
                                           ));
      *(char *)(iVar1 + 3) = (char)(int)dVar2;
    }
  }
  return;
}



//==== 0053b138  ns=Global  size=0x120
// sig: undefined FUN_0053b138(void)
// callers(0): 
// callees(5): 0053adb8 FUN_0053adb8; 0053bac0 FUN_0053bac0; 005cef7c FUN_005cef7c; 005d580c FUN_005d580c; 005d5838 FUN_005d5838
// strings: 0065fff0: 'j:/Ratchet/Source/PS3/cell/samples/common/gcmutil/old/texture.cpp:35 p != NULL'

void FUN_0053b138(undefined4 param_1,int param_2,int param_3,int param_4)

{
  int iVar1;
  undefined4 uStack00000030;
  int iStack00000038;
  int iStack00000040;
  int iStack00000048;
  
  uStack00000030 = param_1;
  iStack00000038 = param_2;
  iStack00000040 = param_3;
  iStack00000048 = param_4;
  iVar1 = FUN_005d5838(param_2 * param_3 * param_4);
  if (iVar1 == 0) {
    FUN_005cef7c(PTR_s_j__Ratchet_Source_PS3_cell_sampl_0071b0d8,0);
  }
  FUN_0053adb8(iVar1,iStack00000038,iStack00000040,iStack00000048);
  FUN_0053bac0(uStack00000030,iVar1,iStack00000038,iStack00000040,iStack00000048);
  FUN_005d580c(iVar1);
  return;
}



//==== 0053b258  ns=Global  size=0x148
// sig: undefined FUN_0053b258(void)
// callers(1): 0053a94c FUN_0053a94c
// callees(0): 

/* WARNING: Heritage AFTER dead removal. Example location: x0x00000030 : 0x0053b278 */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

uint FUN_0053b258(void)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint in_stack_00000030;
  undefined4 local_38;
  undefined4 local_20;
  
  uVar2 = (in_stack_00000030 >> 0x10 & 0xff) << 0x10;
  uVar1 = in_stack_00000030 & 0xff000000 | uVar2;
  uVar3 = in_stack_00000030 >> 8 & 0xff;
  if ((uVar1 == 0 && uVar3 == 0) && (char)in_stack_00000030 == '\0') {
    local_20 = 0;
  }
  else {
    local_38 = ((uVar1 & 0x7f800000) >> 0x17) - 0x70;
    if ((int)local_38 < 0) {
      local_20 = 0;
    }
    else {
      if (0x1f < (int)local_38) {
        local_38 = 0x1f;
      }
      local_20 = (in_stack_00000030 & 0x80000000) >> 0x10 | (local_38 & 0x1f) << 10 |
                 (uVar2 & 0x7fffff | uVar3 << 8) >> 0xd;
    }
  }
  return local_20;
}



//==== 0053b3a0  ns=Global  size=0x114
// sig: undefined FUN_0053b3a0(void)
// callers(0): 
// callees(0): 

double FUN_0053b3a0(short param_1)

{
  undefined4 local_2c;
  undefined4 local_20;
  
  if (param_1 == 0) {
    local_20 = 0.0;
  }
  else {
    local_20 = local_2c;
  }
  return (double)local_20;
}



//==== 0053b4b4  ns=Global  size=0x11c
// sig: undefined FUN_0053b4b4(void)
// callers(1): 0053b5d0 FUN_0053b5d0
// callees(0): 

int FUN_0053b4b4(uint param_1)

{
  uint uStack00000030;
  undefined4 local_30;
  undefined4 local_20;
  
  local_30 = 0x20;
  uStack00000030 = param_1;
  if (param_1 >> 0x10 != 0) {
    local_30 = 0x10;
    uStack00000030 = param_1 >> 0x10;
  }
  if (uStack00000030 >> 8 != 0) {
    local_30 = local_30 + -8;
    uStack00000030 = uStack00000030 >> 8;
  }
  if (uStack00000030 >> 4 != 0) {
    local_30 = local_30 + -4;
    uStack00000030 = uStack00000030 >> 4;
  }
  if (uStack00000030 >> 2 != 0) {
    local_30 = local_30 + -2;
    uStack00000030 = uStack00000030 >> 2;
  }
  if (uStack00000030 >> 1 == 0) {
    local_20 = local_30 - uStack00000030;
  }
  else {
    local_20 = local_30 + -2;
  }
  return local_20;
}



//==== 0053b5d0  ns=Global  size=0x54
// sig: undefined FUN_0053b5d0(void)
// callers(1): 0053bac0 FUN_0053bac0
// callees(1): 0053b4b4 FUN_0053b4b4

int FUN_0053b5d0(undefined4 param_1)

{
  int iVar1;
  undefined4 uStack00000030;
  
  uStack00000030 = param_1;
  iVar1 = FUN_0053b4b4(param_1);
  return 0x1f - iVar1;
}



//==== 0053b624  ns=Global  size=0x49c
// sig: undefined FUN_0053b624(void)
// callers(2): 0053b624 FUN_0053b624; 0053bac0 FUN_0053bac0
// callees(2): 0053b624 FUN_0053b624; 005cef7c FUN_005cef7c
// strings: 00660088: 'j:/Ratchet/Source/PS3/cell/samples/common/gcmutil/old/swizzle.cpp:34 0'

void FUN_0053b624(int *param_1,int *param_2,int param_3,int param_4,int param_5,int param_6,
                 int param_7)

{
  undefined4 *puVar1;
  undefined1 *puVar2;
  int *piStack00000030;
  int *piStack00000038;
  int iStack00000040;
  int iStack00000048;
  int iStack00000050;
  int iStack00000058;
  int iStack00000060;
  
  piStack00000030 = param_1;
  piStack00000038 = param_2;
  iStack00000040 = param_3;
  iStack00000048 = param_4;
  iStack00000050 = param_5;
  iStack00000058 = param_6;
  iStack00000060 = param_7;
  if (param_7 == 1) {
    if (param_4 == 0x10) {
      puVar1 = (undefined4 *)*param_1;
      *puVar1 = *(undefined4 *)(*param_2 + (param_6 * param_3 + param_5) * 4);
      *param_1 = (int)(puVar1 + 1);
    }
    else if (param_4 == 8) {
      puVar1 = (undefined4 *)*param_1;
      *puVar1 = *(undefined4 *)(*param_2 + (param_6 * param_3 + param_5) * 4);
      *param_1 = (int)(puVar1 + 1);
    }
    else if (param_4 == 4) {
      puVar1 = (undefined4 *)*param_1;
      *puVar1 = *(undefined4 *)(*param_2 + (param_6 * param_3 + param_5) * 4);
      *param_1 = (int)(puVar1 + 1);
    }
    else if (param_4 == 3) {
      puVar2 = (undefined1 *)*param_1;
      *puVar2 = *(undefined1 *)(*param_2 + (param_6 * param_3 + param_5) * 3);
      *param_1 = (int)(puVar2 + 1);
      puVar2 = (undefined1 *)*param_1;
      *puVar2 = *(undefined1 *)(*param_2 + (param_6 * param_3 + param_5) * 3 + 1);
      *param_1 = (int)(puVar2 + 1);
      puVar2 = (undefined1 *)*param_1;
      *puVar2 = *(undefined1 *)(*param_2 + (param_6 * param_3 + param_5) * 3 + 2);
      *param_1 = (int)(puVar2 + 1);
    }
    else {
      FUN_005cef7c(PTR_s_j__Ratchet_Source_PS3_cell_sampl_0071b0dc,0);
    }
  }
  else {
    FUN_0053b624(param_1,param_2,param_3,param_4,param_5,param_6,param_7 + -1);
    FUN_0053b624(piStack00000030,piStack00000038,iStack00000040,iStack00000048,
                 (1 << (iStack00000060 - 2U & 0x3f)) + iStack00000050,iStack00000058,
                 iStack00000060 + -1);
    FUN_0053b624(piStack00000030,piStack00000038,iStack00000040,iStack00000048,iStack00000050,
                 (1 << (iStack00000060 - 2U & 0x3f)) + iStack00000058,iStack00000060 + -1);
    FUN_0053b624(piStack00000030,piStack00000038,iStack00000040,iStack00000048,
                 (1 << (iStack00000060 - 2U & 0x3f)) + iStack00000050,
                 (1 << (iStack00000060 - 2U & 0x3f)) + iStack00000058,iStack00000060 + -1);
  }
  return;
}



//==== 0053bac0  ns=Global  size=0x33c
// sig: undefined FUN_0053bac0(void)
// callers(4): 0053a538 FUN_0053a538; 0053a848 FUN_0053a848; 0053acb4 FUN_0053acb4; 0053b138 FUN_0053b138
// callees(2): 0053b5d0 FUN_0053b5d0; 0053b624 FUN_0053b624

void FUN_0053bac0(undefined4 param_1,undefined4 param_2,uint param_3,uint param_4,undefined4 param_5
                 )

{
  uint uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined4 uStack00000030;
  undefined4 uStack00000038;
  uint uStack00000040;
  uint uStack00000048;
  undefined4 uStack00000050;
  uint local_40;
  uint local_38;
  
  uStack00000030 = param_1;
  uStack00000038 = param_2;
  uStack00000040 = param_3;
  uStack00000048 = param_4;
  uStack00000050 = param_5;
  if (param_3 == param_4) {
    iVar2 = FUN_0053b5d0(param_3);
    FUN_0053b624(&stack0x00000030,&stack0x00000038,uStack00000040,uStack00000050,0,0,iVar2 + 1);
  }
  else if (param_4 < param_3) {
    iVar2 = FUN_0053b5d0(param_3);
    iVar3 = FUN_0053b5d0(uStack00000040);
    iVar4 = FUN_0053b5d0(uStack00000048);
    uVar1 = iVar2 - (iVar3 - iVar4);
    local_38 = 0;
    while( true ) {
      iVar2 = FUN_0053b5d0(uStack00000040);
      iVar3 = FUN_0053b5d0(uStack00000048);
      if ((uint)(1 << (iVar2 - iVar3 & 0x3fU)) <= local_38) break;
      FUN_0053b624(&stack0x00000030,&stack0x00000038,uStack00000040,uStack00000050,
                   local_38 << (uVar1 & 0x3f),0,uVar1 + 1);
      local_38 = local_38 + 1;
    }
  }
  else if (param_3 < param_4) {
    iVar2 = FUN_0053b5d0(param_4);
    iVar3 = FUN_0053b5d0(uStack00000048);
    iVar4 = FUN_0053b5d0(uStack00000040);
    uVar1 = iVar2 - (iVar3 - iVar4);
    local_40 = 0;
    while( true ) {
      iVar2 = FUN_0053b5d0(uStack00000048);
      iVar3 = FUN_0053b5d0(uStack00000040);
      if ((uint)(1 << (iVar2 - iVar3 & 0x3fU)) <= local_40) break;
      FUN_0053b624(&stack0x00000030,&stack0x00000038,uStack00000040,uStack00000050,0,
                   local_40 << (uVar1 & 0x3f),uVar1 + 1);
      local_40 = local_40 + 1;
    }
  }
  return;
}



//==== 0053bdfc  ns=Global  size=0xfc
// sig: undefined FUN_0053bdfc(void)
// callers(0): 
// callees(4): 00540808 FUN_00540808; 005427d0 FUN_005427d0; 00552c24 FUN_00552c24; 00552e60 FUN_00552e60

ulonglong FUN_0053bdfc(undefined4 param_1,undefined4 param_2,undefined4 param_3)

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
        uVar2 = FUN_005427d0(param_1,param_2,param_3);
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



//==== 0053bef8  ns=Global  size=0x140
// sig: undefined FUN_0053bef8(void)
// callers(0): 
// callees(3): 00540808 FUN_00540808; 00552c24 FUN_00552c24; 00552e60 FUN_00552e60

ulonglong FUN_0053bef8(undefined4 param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined4 uVar5;
  ulonglong uVar3;
  ulonglong uVar4;
  ulonglong uVar6;
  
  puVar2 = PTR_DAT_0071b0e8;
  puVar1 = PTR_PTR_0071b0e4;
  if (*(int *)PTR_DAT_0071b0e0 != 1) {
    return 2;
  }
  uVar3 = 2000;
  if (*(int *)(*(int *)PTR_PTR_0071b0e4 + 0x18) == 1) {
    if (*(int *)PTR_DAT_0071b0e8 == 0) {
      return 2;
    }
    uVar5 = FUN_00552e60(*(int *)PTR_PTR_0071b0e4 + 0x1c,0);
    uVar6 = 0xf;
    uVar3 = FUN_00540808(uVar5);
    if ((int)uVar3 == 0) {
      if (*(int *)puVar2 != 0) {
        uVar6 = (*(code *)**(undefined4 **)(*(int *)puVar2 + 0xe0))(param_1);
      }
      uVar5 = FUN_00552c24(*(int *)puVar1 + 0x1c,0);
      uVar4 = FUN_00540808(uVar5);
      uVar3 = uVar6;
      if (uVar4 != 0) {
        uVar3 = uVar4;
      }
    }
  }
  return uVar3 & 0xffffffff;
}



//==== 0053c038  ns=Global  size=0xdc
// sig: undefined FUN_0053c038(void)
// callers(0): 
// callees(4): 00540808 FUN_00540808; 005426d4 FUN_005426d4; 00552c24 FUN_00552c24; 00552e60 FUN_00552e60

ulonglong FUN_0053c038(undefined4 param_1)

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
        uVar2 = FUN_005426d4(param_1);
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



//==== 0053c114  ns=Global  size=0xdc
// sig: undefined FUN_0053c114(void)
// callers(0): 
// callees(4): 00540808 FUN_00540808; 00543b9c FUN_00543b9c; 00552c24 FUN_00552c24; 00552e60 FUN_00552e60

ulonglong FUN_0053c114(undefined4 param_1)

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
        uVar2 = FUN_00543b9c(param_1);
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



//==== 0053c1f0  ns=Global  size=0x2c
// sig: undefined FUN_0053c1f0(void)
// callers(0): 
// callees(1): 0054fdc4 FUN_0054fdc4

undefined8 FUN_0053c1f0(undefined4 param_1)

{
  FUN_0054fdc4(param_1);
  return 0;
}



//==== 0053c21c  ns=Global  size=0xec
// sig: undefined FUN_0053c21c(void)
// callers(0): 
// callees(4): 00540808 FUN_00540808; 005437b4 FUN_005437b4; 00552c24 FUN_00552c24; 00552e60 FUN_00552e60

ulonglong FUN_0053c21c(undefined4 param_1,undefined4 param_2)

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
        uVar2 = FUN_005437b4(param_1,param_2);
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



//==== 0053c308  ns=Global  size=0xec
// sig: undefined FUN_0053c308(void)
// callers(0): 
// callees(4): 00540808 FUN_00540808; 00544198 FUN_00544198; 00552c24 FUN_00552c24; 00552e60 FUN_00552e60

ulonglong FUN_0053c308(undefined4 param_1,undefined4 param_2)

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
        uVar2 = FUN_00544198(param_1,param_2);
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



//==== 0053c3f4  ns=Global  size=0xec
// sig: undefined FUN_0053c3f4(void)
// callers(0): 
// callees(4): 00540808 FUN_00540808; 00542478 FUN_00542478; 00552c24 FUN_00552c24; 00552e60 FUN_00552e60

ulonglong FUN_0053c3f4(undefined4 param_1,undefined4 param_2)

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
        uVar2 = FUN_00542478(param_1,param_2);
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



//==== 0053c4e0  ns=Global  size=0xec
// sig: undefined FUN_0053c4e0(void)
// callers(0): 
// callees(4): 00540808 FUN_00540808; 005423dc FUN_005423dc; 00552c24 FUN_00552c24; 00552e60 FUN_00552e60

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



//==== 0053c5cc  ns=Global  size=0x40
// sig: undefined FUN_0053c5cc(void)
// callers(1): 004f5be4 FUN_004f5be4
// callees(0): 

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



//==== 0053c60c  ns=Global  size=0x60
// sig: undefined FUN_0053c60c(void)
// callers(0): 
// callees(1): 005d0140 libc::memset

undefined8 FUN_0053c60c(int param_1)

{
  undefined8 uVar1;
  
  uVar1 = 3;
  if (param_1 != 0) {
    libc::memset(param_1,0,0x4c);
    uVar1 = 0;
    *(undefined4 *)(param_1 + 0x34) = 0x100;
    *(undefined4 *)(param_1 + 0x44) = 0;
    *(undefined4 *)(param_1 + 0xc) = 0x100;
  }
  return uVar1;
}



//==== 0053c66c  ns=Global  size=0x44
// sig: undefined FUN_0053c66c(void)
// callers(2): 004f6f58 FUN_004f6f58; 004f7014 FUN_004f7014
// callees(1): 005d0140 libc::memset

undefined8 FUN_0053c66c(int param_1)

{
  undefined8 uVar1;
  
  uVar1 = 3;
  if (param_1 != 0) {
    libc::memset(param_1,0,0x114);
    uVar1 = 0;
  }
  return uVar1;
}



//==== 0053c6b0  ns=Global  size=0x2c
// sig: undefined FUN_0053c6b0(void)
// callers(0): 
// callees(0): 

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



//==== 0053c6dc  ns=Global  size=0xa0
// sig: undefined FUN_0053c6dc(void)
// callers(2): 005461f0 FUN_005461f0; 00546290 FUN_00546290
// callees(1): 005d0140 libc::memset

undefined8 FUN_0053c6dc(undefined4 *param_1)

{
  undefined8 uVar1;
  
  uVar1 = 3;
  if (param_1 != (undefined4 *)0x0) {
    libc::memset(param_1,0,0x74);
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



//==== 0053c77c  ns=Global  size=0x60
// sig: undefined FUN_0053c77c(void)
// callers(0): 
// callees(1): 005d0140 libc::memset

undefined8 FUN_0053c77c(undefined4 *param_1)

{
  undefined8 uVar1;
  
  uVar1 = 3;
  if (param_1 != (undefined4 *)0x0) {
    libc::memset(param_1,0,0x54);
    param_1[10] = 2;
    uVar1 = 0;
    *param_1 = 1;
  }
  return uVar1;
}



//==== 0053c7dc  ns=Global  size=0x28
// sig: undefined FUN_0053c7dc(void)
// callers(0): 
// callees(0): 

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



//==== 0053c804  ns=Global  size=0xc4
// sig: undefined FUN_0053c804(void)
// callers(0): 
// callees(3): 00540808 FUN_00540808; 005450d8 FUN_005450d8; 00545114 FUN_00545114

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



//==== 0053c8c8  ns=Global  size=0xbc
// sig: undefined FUN_0053c8c8(void)
// callers(0): 
// callees(3): 00540808 FUN_00540808; 005450d8 FUN_005450d8; 00545114 FUN_00545114

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



//==== 0053c984  ns=Global  size=0xb8
// sig: undefined FUN_0053c984(void)
// callers(0): 
// callees(3): 00540808 FUN_00540808; 005450d8 FUN_005450d8; 00545114 FUN_00545114

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



//==== 0053ca3c  ns=Global  size=0x98
// sig: undefined FUN_0053ca3c(void)
// callers(0): 
// callees(3): 00540808 FUN_00540808; 005450d8 FUN_005450d8; 00545114 FUN_00545114

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



//==== 0053cad4  ns=Global  size=0x9c
// sig: undefined FUN_0053cad4(void)
// callers(0): 
// callees(3): 00540808 FUN_00540808; 005450d8 FUN_005450d8; 00545114 FUN_00545114

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



//==== 0053cb70  ns=Global  size=0xd0
// sig: undefined FUN_0053cb70(void)
// callers(0): 
// callees(3): 00540808 FUN_00540808; 005450d8 FUN_005450d8; 00545114 FUN_00545114

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



//==== 0053cc40  ns=Global  size=0xd0
// sig: undefined FUN_0053cc40(void)
// callers(0): 
// callees(3): 00540808 FUN_00540808; 005450d8 FUN_005450d8; 00545114 FUN_00545114

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



//==== 0053cd10  ns=Global  size=0xe4
// sig: undefined FUN_0053cd10(void)
// callers(0): 
// callees(3): 00540808 FUN_00540808; 005450d8 FUN_005450d8; 00545114 FUN_00545114

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



//==== 0053cdf4  ns=Global  size=0xe4
// sig: undefined FUN_0053cdf4(void)
// callers(0): 
// callees(3): 00540808 FUN_00540808; 005450d8 FUN_005450d8; 00545114 FUN_00545114

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



//==== 0053ced8  ns=Global  size=0xbc
// sig: undefined FUN_0053ced8(void)
// callers(0): 
// callees(3): 00540808 FUN_00540808; 005450d8 FUN_005450d8; 00545114 FUN_00545114

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



//==== 0053cf94  ns=Global  size=0xbc
// sig: undefined FUN_0053cf94(void)
// callers(0): 
// callees(3): 00540808 FUN_00540808; 005450d8 FUN_005450d8; 00545114 FUN_00545114

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



//==== 0053d050  ns=Global  size=0xbc
// sig: undefined FUN_0053d050(void)
// callers(0): 
// callees(3): 00540808 FUN_00540808; 005450d8 FUN_005450d8; 00545114 FUN_00545114

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



//==== 0053d10c  ns=Global  size=0xe4
// sig: undefined FUN_0053d10c(void)
// callers(0): 
// callees(3): 00540808 FUN_00540808; 005450d8 FUN_005450d8; 00545114 FUN_00545114

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



//==== 0053d1f0  ns=Global  size=0xd0
// sig: undefined FUN_0053d1f0(void)
// callers(0): 
// callees(3): 00540808 FUN_00540808; 005450d8 FUN_005450d8; 00545114 FUN_00545114

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



//==== 0053d2c0  ns=Global  size=0xd0
// sig: undefined FUN_0053d2c0(void)
// callers(0): 
// callees(3): 00540808 FUN_00540808; 005450d8 FUN_005450d8; 00545114 FUN_00545114

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



//==== 0053d390  ns=Global  size=0xb4
// sig: undefined FUN_0053d390(void)
// callers(0): 
// callees(3): 00540808 FUN_00540808; 005450d8 FUN_005450d8; 00545114 FUN_00545114

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



//==== 0053d444  ns=Global  size=0xc4
// sig: undefined FUN_0053d444(void)
// callers(0): 
// callees(3): 00540808 FUN_00540808; 005450d8 FUN_005450d8; 00545114 FUN_00545114

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



//==== 0053d508  ns=Global  size=0x100
// sig: undefined FUN_0053d508(void)
// callers(0): 
// callees(3): 00540808 FUN_00540808; 005450d8 FUN_005450d8; 00545114 FUN_00545114

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



//==== 0053d608  ns=Global  size=0xdc
// sig: undefined FUN_0053d608(void)
// callers(0): 
// callees(3): 00540808 FUN_00540808; 005450d8 FUN_005450d8; 00545114 FUN_00545114

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



//==== 0053d6e4  ns=Global  size=0xc4
// sig: undefined FUN_0053d6e4(void)
// callers(0): 
// callees(3): 00540808 FUN_00540808; 005450d8 FUN_005450d8; 00545114 FUN_00545114

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



//==== 0053d7a8  ns=Global  size=0xb4
// sig: undefined FUN_0053d7a8(void)
// callers(0): 
// callees(3): 00540808 FUN_00540808; 005450d8 FUN_005450d8; 00545114 FUN_00545114

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



//==== 0053d85c  ns=Global  size=0xd4
// sig: undefined FUN_0053d85c(void)
// callers(0): 
// callees(3): 00540808 FUN_00540808; 005450d8 FUN_005450d8; 00545114 FUN_00545114

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



//==== 0053d930  ns=Global  size=0x12c
// sig: undefined FUN_0053d930(void)
// callers(0): 
// callees(3): 00540808 FUN_00540808; 005450d8 FUN_005450d8; 00545114 FUN_00545114

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



//==== 0053da5c  ns=Global  size=0xe4
// sig: undefined FUN_0053da5c(void)
// callers(0): 
// callees(3): 00540808 FUN_00540808; 005450d8 FUN_005450d8; 00545114 FUN_00545114

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



//==== 0053db40  ns=Global  size=0x248
// sig: undefined FUN_0053db40(void)
// callers(0): 
// callees(4): 0053fc0c FUN_0053fc0c; 00540808 FUN_00540808; 005450d8 FUN_005450d8; 00545114 FUN_00545114

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



//==== 0053dd88  ns=Global  size=0x94
// sig: undefined FUN_0053dd88(void)
// callers(0): 
// callees(4): 00540808 FUN_00540808; 005450d8 FUN_005450d8; 00545114 FUN_00545114; 005c5ad0 libc::memcpy

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
      pvVar3 = libc::memcpy((void *)(*(int *)PTR_PTR_0071b0e4 + 0x84),param_1,param_2);
      uVar1 = FUN_005450d8(pvVar3);
      iVar2 = FUN_00540808(uVar1);
    }
  }
  return iVar2;
}



//==== 0053de1c  ns=Global  size=0xc0
// sig: undefined FUN_0053de1c(void)
// callers(0): 
// callees(4): 00540808 FUN_00540808; 005450d8 FUN_005450d8; 00545114 FUN_00545114; 00546bdc FUN_00546bdc

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



//==== 0053dedc  ns=Global  size=0x12c
// sig: undefined FUN_0053dedc(void)
// callers(0): 
// callees(4): 00540808 FUN_00540808; 0054228c FUN_0054228c; 00552c24 FUN_00552c24; 00552e60 FUN_00552e60

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



//==== 0053e008  ns=Global  size=0xdc
// sig: undefined FUN_0053e008(void)
// callers(2): 004f6f58 FUN_004f6f58; 004f7014 FUN_004f7014
// callees(4): 00540808 FUN_00540808; 0054487c FUN_0054487c; 00552c24 FUN_00552c24; 00552e60 FUN_00552e60

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



//==== 0053e0e4  ns=Global  size=0xa0
// sig: undefined FUN_0053e0e4(void)
// callers(1): 00582e74 CMediusManager::DisconnectFromMAS
// callees(4): 00540808 FUN_00540808; 005450d8 FUN_005450d8; 00545114 FUN_00545114; 005478bc FUN_005478bc

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



//==== 0053e184  ns=Global  size=0x90
// sig: undefined FUN_0053e184(void)
// callers(0): 
// callees(4): 00540808 FUN_00540808; 005450d8 FUN_005450d8; 00545114 FUN_00545114; 0054589c FUN_0054589c

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



//==== 0053e214  ns=Global  size=0x90
// sig: undefined FUN_0053e214(void)
// callers(1): 00582c08 FUN_00582c08
// callees(4): 00540808 FUN_00540808; 005450d8 FUN_005450d8; 00545114 FUN_00545114; 005474b4 FUN_005474b4

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



//==== 0053e2a4  ns=Global  size=0xb4
// sig: undefined FUN_0053e2a4(void)
// callers(0): 
// callees(4): 00540808 FUN_00540808; 005444ac FUN_005444ac; 005450d8 FUN_005450d8; 00545114 FUN_00545114

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



//==== 0053e358  ns=Global  size=0xb4
// sig: undefined FUN_0053e358(void)
// callers(0): 
// callees(4): 00540808 FUN_00540808; 0054328c FUN_0054328c; 005450d8 FUN_005450d8; 00545114 FUN_00545114

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



//==== 0053e40c  ns=Global  size=0xb4
// sig: undefined FUN_0053e40c(void)
// callers(2): 0058cab0 FUN_0058cab0; 0058d010 FUN_0058d010
// callees(4): 0054058c FUN_0054058c; 00540808 FUN_00540808; 005450d8 FUN_005450d8; 00545114 FUN_00545114

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



//==== 0053e4c0  ns=Global  size=0xb4
// sig: undefined FUN_0053e4c0(void)
// callers(0): 
// callees(4): 00540508 FUN_00540508; 00540808 FUN_00540808; 005450d8 FUN_005450d8; 00545114 FUN_00545114

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



//==== 0053e574  ns=Global  size=0x54
// sig: undefined FUN_0053e574(void)
// callers(0): 
// callees(1): 00545398 FUN_00545398

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



//==== 0053e5c8  ns=Global  size=0x48
// sig: undefined FUN_0053e5c8(void)
// callers(3): 004f66c4 FUN_004f66c4; 004f69b8 FUN_004f69b8; 00582c08 FUN_00582c08
// callees(1): 0054536c FUN_0054536c

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



//==== 0053e610  ns=Global  size=0xb4
// sig: undefined FUN_0053e610(void)
// callers(0): 
// callees(4): 00540808 FUN_00540808; 00541390 FUN_00541390; 005450d8 FUN_005450d8; 00545114 FUN_00545114

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



//==== 0053e6c4  ns=Global  size=0xb4
// sig: undefined FUN_0053e6c4(void)
// callers(0): 
// callees(4): 005404c0 FUN_005404c0; 00540808 FUN_00540808; 005450d8 FUN_005450d8; 00545114 FUN_00545114

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



//==== 0053e778  ns=Global  size=0xc8
// sig: undefined FUN_0053e778(void)
// callers(0): 
// callees(4): 00540808 FUN_00540808; 00545010 FUN_00545010; 005450d8 FUN_005450d8; 00545114 FUN_00545114

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



//==== 0053e840  ns=Global  size=0xb4
// sig: undefined FUN_0053e840(void)
// callers(0): 
// callees(4): 00540808 FUN_00540808; 005450d8 FUN_005450d8; 00545114 FUN_00545114; 0054af90 FUN_0054af90

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



//==== 0053e8f4  ns=Global  size=0xc8
// sig: undefined FUN_0053e8f4(void)
// callers(0): 
// callees(4): 00540808 FUN_00540808; 00542600 FUN_00542600; 005450d8 FUN_005450d8; 00545114 FUN_00545114

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



//==== 0053e9bc  ns=Global  size=0xd8
// sig: undefined FUN_0053e9bc(void)
// callers(0): 
// callees(5): 0053fe40 FUN_0053fe40; 00540808 FUN_00540808; 005450d8 FUN_005450d8; 00545114 FUN_00545114; 00545b74 FUN_00545b74

ulonglong FUN_0053e9bc(undefined4 param_1,undefined4 param_2)

{
  undefined4 uVar3;
  ulonglong uVar1;
  ulonglong uVar2;
  undefined1 auStack_20 [2];
  undefined1 auStack_1e [2];
  undefined1 auStack_1c [4];
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



//==== 0053ea94  ns=Global  size=0xc8
// sig: undefined FUN_0053ea94(void)
// callers(0): 
// callees(4): 00540808 FUN_00540808; 005450d8 FUN_005450d8; 00545114 FUN_00545114; 00546ff0 FUN_00546ff0

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



//==== 0053eb5c  ns=Global  size=0xb4
// sig: undefined FUN_0053eb5c(void)
// callers(0): 
// callees(4): 00540808 FUN_00540808; 005412c4 FUN_005412c4; 005450d8 FUN_005450d8; 00545114 FUN_00545114

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



//==== 0053ec10  ns=Global  size=0xb4
// sig: undefined FUN_0053ec10(void)
// callers(0): 
// callees(4): 00540808 FUN_00540808; 005450d8 FUN_005450d8; 00545114 FUN_00545114; 005460c8 FUN_005460c8

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



//==== 0053ecc4  ns=Global  size=0xa0
// sig: undefined FUN_0053ecc4(void)
// callers(2): 005969a4 FUN_005969a4; 00596bdc FUN_00596bdc
// callees(4): 00540808 FUN_00540808; 00544548 FUN_00544548; 005450d8 FUN_005450d8; 00545114 FUN_00545114

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



//==== 0053ed64  ns=Global  size=0xf8
// sig: undefined FUN_0053ed64(void)
// callers(0): 
// callees(4): 00540808 FUN_00540808; 005450d8 FUN_005450d8; 00545114 FUN_00545114; 00548b58 FUN_00548b58

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



//==== 0053ee5c  ns=Global  size=0xfc
// sig: undefined FUN_0053ee5c(void)
// callers(0): 
// callees(4): 00540808 FUN_00540808; 005450d8 FUN_005450d8; 00545114 FUN_00545114; 00548b58 FUN_00548b58

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



//==== 0053ef58  ns=Global  size=0xf8
// sig: undefined FUN_0053ef58(void)
// callers(1): 00583ca4 CMediusManager::ConnectToMLS
// callees(4): 00540808 FUN_00540808; 005450d8 FUN_005450d8; 00545114 FUN_00545114; 00549200 FUN_00549200

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



//==== 0053f050  ns=Global  size=0xf8
// sig: undefined FUN_0053f050(void)
// callers(0): 
// callees(4): 00540808 FUN_00540808; 005450d8 FUN_005450d8; 00545114 FUN_00545114; 00549200 FUN_00549200

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



//==== 0053f148  ns=Global  size=0x28
// sig: undefined FUN_0053f148(void)
// callers(0): 
// callees(1): 00547230 FUN_00547230

undefined4 FUN_0053f148(void)

{
  undefined4 uVar1;
  
  uVar1 = FUN_00547230();
  return uVar1;
}



//==== 0053f170  ns=Global  size=0x90
// sig: undefined FUN_0053f170(void)
// callers(0): 
// callees(4): 00540808 FUN_00540808; 005450d8 FUN_005450d8; 00545114 FUN_00545114; 0054ceb0 FUN_0054ceb0

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



//==== 0053f200  ns=Global  size=0xa0
// sig: undefined FUN_0053f200(void)
// callers(0): 
// callees(4): 00540808 FUN_00540808; 005450d8 FUN_005450d8; 00545114 FUN_00545114; 0054cf00 FUN_0054cf00

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



//==== 0053f2a0  ns=Global  size=0xdc
// sig: undefined FUN_0053f2a0(void)
// callers(0): 
// callees(4): 00540808 FUN_00540808; 005450d8 FUN_005450d8; 00545114 FUN_00545114; 0054cf60 FUN_0054cf60

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



//==== 0053f37c  ns=Global  size=0xdc
// sig: undefined FUN_0053f37c(void)
// callers(1): 004f5be4 FUN_004f5be4
// callees(4): 00540808 FUN_00540808; 005450d8 FUN_005450d8; 00545114 FUN_00545114; 0054cf98 FUN_0054cf98

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



//==== 0053f458  ns=Global  size=0xac
// sig: undefined FUN_0053f458(void)
// callers(0): 
// callees(4): 00540808 FUN_00540808; 005450d8 FUN_005450d8; 00545114 FUN_00545114; 0054a088 FUN_0054a088

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



//==== 0053f504  ns=Global  size=0xc8
// sig: undefined FUN_0053f504(void)
// callers(0): 
// callees(4): 00540808 FUN_00540808; 00541474 FUN_00541474; 005450d8 FUN_005450d8; 00545114 FUN_00545114

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



//==== 0053f5cc  ns=Global  size=0xf0
// sig: undefined FUN_0053f5cc(void)
// callers(0): 
// callees(4): 00540808 FUN_00540808; 0054158c FUN_0054158c; 005450d8 FUN_005450d8; 00545114 FUN_00545114

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



//==== 0053f6bc  ns=Global  size=0x128
// sig: undefined FUN_0053f6bc(void)
// callers(0): 
// callees(7): 0054045c FUN_0054045c; 00540808 FUN_00540808; 005450d8 FUN_005450d8; 00545114 FUN_00545114; 00547c38 FUN_00547c38; 00552f64 FUN_00552f64; 005d0140 libc::memset

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
          libc::memset(*(undefined4 *)puVar3,0,0x10d8);
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



//==== 0053f7e4  ns=Global  size=0x1d0
// sig: undefined FUN_0053f7e4(void)
// callers(1): 004f5be4 FUN_004f5be4
// callees(5): 00540808 FUN_00540808; 005450d8 FUN_005450d8; 00545114 FUN_00545114; 00546398 FUN_00546398; 00552fdc FUN_00552fdc

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



//==== 0053f9b4  ns=Global  size=0x7c
// sig: undefined FUN_0053f9b4(void)
// callers(1): 004f5be4 FUN_004f5be4
// callees(3): 00552888 FUN_00552888; 00556928 FUN_00556928; 005d0140 libc::memset

undefined8 FUN_0053f9b4(undefined4 *param_1)

{
  undefined8 uVar1;
  undefined1 auStack_40 [32];
  undefined4 local_20;
  
  uVar1 = 3;
  if (param_1 != (undefined4 *)0x0) {
    libc::memset(param_1,0,100);
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



//==== 0053fa30  ns=Global  size=0x190
// sig: undefined FUN_0053fa30(void)
// callers(0): 
// callees(0): 
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



//==== 0053fbc0  ns=Global  size=0x4c
// sig: undefined FUN_0053fbc0(void)
// callers(1): 00546398 FUN_00546398
// callees(1): 005cd2a8 libc::snprintf
// strings: 0067d180: '%d.%02d.%04d'

undefined8 FUN_0053fbc0(char *param_1)

{
  undefined8 uVar1;
  
  uVar1 = 3;
  if (param_1 != (char *)0x0) {
    libc::snprintf(param_1,PTR_s__d__02d__04d_0071b0f4,3,4,0);
    uVar1 = 0;
  }
  return uVar1;
}



//==== 0053fc0c  ns=Global  size=0x234
// sig: undefined FUN_0053fc0c(void)
// callers(1): 0053db40 FUN_0053db40
// callees(1): 0054ee84 FUN_0054ee84

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



//==== 0053fe40  ns=Global  size=0x98
// sig: undefined FUN_0053fe40(void)
// callers(5): 0053e9bc FUN_0053e9bc; 00545d44 FUN_00545d44; 00549200 FUN_00549200; 00551694 FUN_00551694; 00551830 FUN_00551830
// callees(0): 

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



//==== 0053ffdc  ns=Global  size=0x240
// sig: undefined FUN_0053ffdc(void)
// callers(0): 
// callees(1): 0054ef70 FUN_0054ef70

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



