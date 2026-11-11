//==== 00550054  ns=Global  size=0x54
// sig: undefined FUN_00550054(void)
// callers(1): 005500a8 FUN_005500a8
// callees(1): 00551de8 FUN_00551de8

/* WARNING: Removing unreachable block (ram,0x0055008c) */

undefined4 FUN_00550054(void)

{
  undefined1 local_10 [16];
  
  FUN_00551de8(local_10,0x24);
  return 0;
}



//==== 005500a8  ns=Global  size=0x150
// sig: undefined FUN_005500a8(void)
// callers(8): 005501f8 FUN_005501f8; 005502bc FUN_005502bc; 0055d428 FUN_0055d428; 0056aed8 FUN_0056aed8; 0056b17c FUN_0056b17c; 0056b7c8 FUN_0056b7c8; 0056c6a8 FUN_0056c6a8; 005a9dac FUN_005a9dac
// callees(3): 0054efc4 FUN_0054efc4; 0054fe34 FUN_0054fe34; 00550054 FUN_00550054

int FUN_005500a8(int *param_1,undefined8 param_2,undefined4 param_3,undefined4 *param_4)

{
  undefined *puVar1;
  int iVar2;
  int iVar3;
  undefined8 uStack00000038;
  
  *param_1 = 0;
  uStack00000038 = param_2;
  iVar2 = FUN_00550054();
  iVar3 = 3;
  if (iVar2 != 0) {
    if (param_4 == (undefined4 *)0x0) {
      FUN_0054efc4(iVar2 + 0xc);
    }
    else {
      *(undefined4 *)(iVar2 + 0xc) = *param_4;
      *(undefined4 *)(iVar2 + 0x10) = param_4[1];
      *(undefined4 *)(iVar2 + 0x14) = param_4[2];
      *(undefined4 *)(iVar2 + 0x18) = param_4[3];
    }
    puVar1 = PTR_DAT_0071b264;
    *(undefined4 *)(iVar2 + 0x1c) = param_3;
    iVar3 = (*(code *)**(undefined4 **)(*(int *)puVar1 + 8))
                      (iVar2 + 8,uStack00000038,iVar2 + 0x1c,iVar2 + 0xc,iVar2 + 0x20);
    if (iVar3 != 0) {
      FUN_0054fe34(iVar2);
      return iVar3;
    }
    *param_1 = iVar2;
    *(undefined4 *)(iVar2 + 4) = 1;
    iVar3 = 0;
  }
  return iVar3;
}



//==== 005501f8  ns=Global  size=0xc4
// sig: undefined FUN_005501f8(void)
// callers(1): 00545b74 FUN_00545b74
// callees(2): 0054edb0 FUN_0054edb0; 005500a8 FUN_005500a8

int FUN_005501f8(undefined4 *param_1)

{
  undefined4 uVar1;
  undefined *puVar2;
  int iVar3;
  undefined8 local_40;
  undefined1 local_38 [8];
  undefined8 uStack_30;
  
  puVar2 = PTR_DAT_0071b26c;
  iVar3 = 5;
  if (*(int *)PTR_DAT_0071b26c == 0) {
    uStack_30 = 0;
    FUN_0054edb0(&local_40);
    iVar3 = FUN_005500a8(puVar2 + 4,local_40,0,local_38);
    if (iVar3 == 0) {
      uVar1 = *param_1;
      *(undefined4 *)puVar2 = 1;
      *(undefined4 *)(puVar2 + 8) = uVar1;
      return 0;
    }
  }
  return iVar3;
}



//==== 005502bc  ns=Global  size=0x420
// sig: undefined FUN_005502bc(void)
// callers(2): 005446ec FUN_005446ec; 0054487c FUN_0054487c
// callees(7): 0054fa58 FUN_0054fa58; 0054fe64 FUN_0054fe64; 005500a8 FUN_005500a8; 00551ed8 FUN_00551ed8; 00552704 FUN_00552704; 00556f40 thunk_FUN_00556a58; 005d0140 libc::memset

int FUN_005502bc(char *param_1)

{
  char cVar1;
  undefined *puVar2;
  int iVar4;
  longlong lVar3;
  int iVar5;
  char cVar6;
  undefined *puVar7;
  int iVar8;
  short sVar9;
  undefined1 local_60 [4];
  undefined8 local_5c;
  undefined1 local_54 [8];
  undefined4 uStack_4c;
  undefined4 uStack_48;
  
  puVar7 = PTR_DAT_0071b264;
  if ((((param_1 == (char *)0x0) || (*(int *)(param_1 + 0x108) == 0)) || (*param_1 == '\0')) ||
     (iVar4 = (*(code *)**(undefined4 **)(*(int *)PTR_DAT_0071b264 + 0x54))
                        (*(undefined8 *)(param_1 + 0x100)), puVar2 = PTR_DAT_0071b26c, iVar4 != 0))
  {
    return 2;
  }
  if (*(int *)(PTR_DAT_0071b26c + 0x280) != 0) {
    return 0xc357;
  }
  *(undefined4 *)(PTR_DAT_0071b26c + 0x280) = *(undefined4 *)(param_1 + 0x108);
  if (((int)*param_1 - 0x30U < 10) ||
     (lVar3 = (*(code *)**(undefined4 **)(*(int *)puVar7 + 0x54))(*(undefined8 *)(param_1 + 0x100)),
     lVar3 != 0)) {
    libc::memset(puVar2 + 0x60,0,0x224);
    return 2;
  }
  iVar4 = *(int *)puVar7;
  *(undefined4 *)(puVar2 + 0x6c) = *(undefined4 *)(param_1 + 0x100);
  *(undefined4 *)(puVar2 + 0x70) = *(undefined4 *)(param_1 + 0x104);
  uStack_48 = 0;
  uStack_4c = 0;
  (*(code *)**(undefined4 **)(iVar4 + 0x50))(&local_5c);
  iVar4 = FUN_005500a8(puVar2 + 0x60,local_5c,0,local_54);
  if (iVar4 != 0) {
    libc::memset(puVar2 + 0x60,0,0x224);
    return iVar4;
  }
  sVar9 = *(short *)(puVar2 + 0x288);
  puVar7 = puVar2 + 0x74;
  *(short *)(puVar2 + 0x288) = sVar9 + 1;
  *(short *)(puVar2 + 0x278) = sVar9;
  FUN_00552704(puVar7,sVar9);
  iVar5 = 0xc;
  FUN_00552704(puVar2 + 0x76,0x100);
  cVar6 = '\0';
  FUN_00552704(puVar2 + 0x78,1);
  FUN_00552704(puVar2 + 0x7a,0);
  FUN_00552704(puVar2 + 0x7c,0);
  sVar9 = 1;
  FUN_00552704(puVar2 + 0x7e,0);
  iVar4 = 0xd;
  do {
    iVar8 = iVar4;
    cVar1 = *param_1;
    if (cVar1 == '.') {
      FUN_00551ed8(puVar7 + iVar5,cVar6);
      iVar5 = iVar8;
      cVar6 = '\0';
    }
    else {
      if (cVar1 == '\0') {
        FUN_00551ed8(puVar2 + iVar5 + 0x74,cVar6);
        FUN_00551ed8(puVar2 + iVar8 + 0x74,0);
        break;
      }
      FUN_00551ed8(puVar7 + iVar8,cVar1);
      cVar6 = cVar6 + '\x01';
    }
    sVar9 = sVar9 + 1;
    param_1 = param_1 + 1;
    iVar4 = iVar8 + 1;
  } while (sVar9 != 0x100);
  puVar7 = puVar2 + 0x74;
  FUN_00552704(puVar7 + iVar8 + 1,1);
  FUN_00552704(puVar7 + iVar8 + 3,1);
  *(int *)(puVar2 + 0x274) = iVar8 + 5;
  iVar4 = FUN_0054fa58(*(undefined4 *)(puVar2 + 0x60),*(undefined8 *)(puVar2 + 0x6c),0x35,puVar7,
                       iVar8 + 5,local_60);
  if (iVar4 != 0) {
    FUN_0054fe64(*(undefined4 *)(puVar2 + 0x60));
    libc::memset(puVar2 + 0x60,0,0x224);
    return iVar4;
  }
  thunk_FUN_00556a58(puVar2 + 100);
  *(undefined4 *)(puVar2 + 0x27c) = 0;
  return 0;
}



//==== 005506dc  ns=Global  size=0x44
// sig: undefined FUN_005506dc(void)
// callers(1): 0054a088 FUN_0054a088
// callees(2): 0054efdc FUN_0054efdc; 005c5ad0 libc::memcpy

void * FUN_005506dc(void *param_1)

{
  void *pvVar1;
  
  FUN_0054efdc();
  pvVar1 = libc::memcpy(param_1,PTR_DAT_0071b26c + 0x10,0x48);
  return pvVar1;
}



//==== 00550720  ns=Global  size=0x634
// sig: undefined FUN_00550720(void)
// callers(1): 00550d54 FUN_00550d54
// callees(9): 0054f210 FUN_0054f210; 0054f314 FUN_0054f314; 0054fa58 FUN_0054fa58; 0054fe64 FUN_0054fe64; 00551ef4 FUN_00551ef4; 00552728 FUN_00552728; 00556c4c thunk_FUN_00556bb8; 00556f40 thunk_FUN_00556a58; 005d0140 libc::memset

/* WARNING: Removing unreachable block (ram,0x00550cdc) */
/* WARNING: Removing unreachable block (ram,0x00550ce8) */
/* WARNING: Removing unreachable block (ram,0x00550c44) */
/* WARNING: Removing unreachable block (ram,0x005509c0) */
/* WARNING: Removing unreachable block (ram,0x00550aa4) */
/* WARNING: Removing unreachable block (ram,0x00550ac8) */
/* WARNING: Removing unreachable block (ram,0x00550ae4) */
/* WARNING: Removing unreachable block (ram,0x00550ad8) */
/* WARNING: Removing unreachable block (ram,0x00550af0) */
/* WARNING: Removing unreachable block (ram,0x00550b80) */
/* WARNING: Removing unreachable block (ram,0x00550b2c) */
/* WARNING: Removing unreachable block (ram,0x0055094c) */
/* WARNING: Removing unreachable block (ram,0x005509a8) */
/* WARNING: Removing unreachable block (ram,0x005509b4) */
/* WARNING: Removing unreachable block (ram,0x00550b68) */
/* WARNING: Removing unreachable block (ram,0x00550b44) */
/* WARNING: Removing unreachable block (ram,0x00550be8) */
/* WARNING: Removing unreachable block (ram,0x00550b74) */
/* WARNING: Removing unreachable block (ram,0x005509f8) */
/* WARNING: Removing unreachable block (ram,0x00550bf4) */
/* WARNING: Removing unreachable block (ram,0x00550b38) */
/* WARNING: Removing unreachable block (ram,0x00550c04) */
/* WARNING: Removing unreachable block (ram,0x00550b84) */
/* WARNING: Removing unreachable block (ram,0x00550b8c) */
/* WARNING: Removing unreachable block (ram,0x00550cd0) */
/* WARNING: Removing unreachable block (ram,0x00550ca4) */
/* WARNING: Removing unreachable block (ram,0x00550ca8) */
/* WARNING: Removing unreachable block (ram,0x00550bc8) */
/* WARNING: Removing unreachable block (ram,0x00550ba4) */
/* WARNING: Removing unreachable block (ram,0x00550c08) */
/* WARNING: Removing unreachable block (ram,0x00550c14) */
/* WARNING: Removing unreachable block (ram,0x00550c10) */
/* WARNING: Removing unreachable block (ram,0x00550c48) */
/* WARNING: Removing unreachable block (ram,0x00550c50) */
/* WARNING: Removing unreachable block (ram,0x00550bd4) */
/* WARNING: Removing unreachable block (ram,0x00550cb8) */
/* WARNING: Removing unreachable block (ram,0x00550a04) */

int FUN_00550720(ulonglong param_1)

{
  undefined4 *puVar1;
  bool bVar2;
  undefined *puVar3;
  undefined *puVar4;
  int iVar5;
  undefined *puVar6;
  byte in_cr0;
  byte in_cr1;
  byte in_cr2;
  byte in_cr3;
  byte unaff_cr4;
  byte in_cr5;
  byte in_cr6;
  byte in_cr7;
  uint uStack00000008;
  undefined1 local_98 [4];
  undefined1 local_94 [4];
  uint local_90;
  undefined1 local_8c [12];
  
  puVar4 = PTR_DAT_0071b26c;
  uStack00000008 =
       (uint)(in_cr0 & 0xf) << 0x1c | (uint)(in_cr1 & 0xf) << 0x18 | (uint)(in_cr2 & 0xf) << 0x14 |
       (uint)(in_cr3 & 0xf) << 0x10 | (uint)(unaff_cr4 & 0xf) << 0xc | (uint)(in_cr5 & 0xf) << 8 |
       (uint)(in_cr6 & 0xf) << 4 | (uint)(in_cr7 & 0xf);
  if (*(int *)(PTR_DAT_0071b26c + 0x284) != 0) {
    bVar2 = (param_1 & 2) != 0;
    if ((bVar2) && (*(int *)(PTR_DAT_0071b26c + 0x280) != 0)) {
      puVar3 = PTR_DAT_0071b26c + 100;
      puVar6 = PTR_DAT_0071b26c + 0x60;
      thunk_FUN_00556bb8(puVar3,&local_90);
      if (local_90 < 0x1f5) {
        iVar5 = *(int *)(puVar4 + 0x27c);
      }
      else {
        FUN_0054fa58(*(undefined4 *)(puVar4 + 0x60),*(undefined8 *)(puVar4 + 0x6c),0x35,
                     puVar4 + 0x74,*(undefined4 *)(puVar4 + 0x274),local_98);
        thunk_FUN_00556a58(puVar3);
        iVar5 = *(int *)(puVar4 + 0x27c) + 1;
        *(int *)(puVar4 + 0x27c) = iVar5;
      }
      if (iVar5 == 0x14) {
        libc::memset(puVar4 + 0x28c,0,0x88);
        *(undefined4 *)(puVar4 + 0x310) = 0xc358;
        FUN_0054fe64(*(undefined4 *)(puVar4 + 0x60));
        puVar1 = *(undefined4 **)(puVar4 + 0x280);
        libc::memset(puVar6,0,0x224);
        (*(code *)*puVar1)(puVar4 + 0x28c);
      }
    }
    puVar3 = PTR_DAT_0071b264;
    iVar5 = (*(code *)**(undefined4 **)(*(int *)PTR_DAT_0071b264 + 0x4c))();
    if (iVar5 != 0) {
      return iVar5;
    }
    if ((bVar2) && (*(int *)(puVar4 + 0x280) != 0)) {
      (*(code *)**(undefined4 **)(*(int *)puVar3 + 0x50))(local_8c);
      FUN_0054f314(*(undefined4 *)(puVar4 + 0x60),local_8c,local_94,puVar4 + 0x318,0x200,&local_90);
    }
    if (((param_1 & 1) != 0) && (*(int *)puVar4 != 0)) {
      iVar5 = FUN_0054f210();
      return iVar5;
    }
  }
  return 0;
}



//==== 00550d54  ns=Global  size=0xc
// sig: undefined FUN_00550d54(void)
// callers(6): 00545408 FUN_00545408; 0055d428 FUN_0055d428; 0056072c FUN_0056072c; 00561054 FUN_00561054; 0056eac4 FUN_0056eac4; 005a8114 FUN_005a8114
// callees(1): 00550720 FUN_00550720

void FUN_00550d54(void)

{
  FUN_00550720(0xffffffff);
  return;
}



//==== 00550d60  ns=Global  size=0xc0
// sig: undefined FUN_00550d60(void)
// callers(2): 005633b0 FUN_005633b0; 005aa458 FUN_005aa458
// callees(3): 0054fd38 FUN_0054fd38; 00556d54 FUN_00556d54; 005d0140 libc::memset

int FUN_00550d60(void)

{
  undefined *puVar1;
  int iVar2;
  int iVar3;
  
  puVar1 = PTR_DAT_0071b26c;
  iVar2 = 5;
  if (*(undefined4 **)PTR_DAT_0071b264 != (undefined4 *)0x0) {
    iVar3 = *(int *)(PTR_DAT_0071b26c + 0x284);
    if (iVar3 == 0) {
      iVar2 = (**(code **)**(undefined4 **)PTR_DAT_0071b264)();
      if (iVar2 != 0) {
        return iVar2;
      }
      FUN_00556d54();
      FUN_0054fd38();
      libc::memset(puVar1 + 0x60,0,0x224);
      iVar3 = *(int *)(puVar1 + 0x284);
      *(undefined4 *)(puVar1 + 8) = 0;
      *(undefined4 *)puVar1 = 0;
      *(undefined4 *)(puVar1 + 4) = 0;
    }
    iVar2 = 0;
    *(int *)(puVar1 + 0x284) = iVar3 + 1;
  }
  return iVar2;
}



//==== 00550e20  ns=Global  size=0x48
// sig: undefined FUN_00550e20(void)
// callers(11): 00550edc FUN_00550edc; 005ade10 FUN_005ade10; 005ae090 FUN_005ae090; 005ae250 FUN_005ae250; 005aed70 FUN_005aed70; 005af0a4 FUN_005af0a4; 005af3a8 FUN_005af3a8; 005b0314 FUN_005b0314; 005b044c FUN_005b044c; 005b0740 FUN_005b0740; 005b0fe8 FUN_005b0fe8
// callees(0): 

undefined8 FUN_00550e20(int param_1)

{
  int *piVar1;
  int iVar2;
  longlong lVar3;
  
  if (param_1 != 0) {
    iVar2 = 0;
    lVar3 = 0x10;
    do {
      piVar1 = (int *)(iVar2 + param_1);
      iVar2 = iVar2 + 4;
      if (*piVar1 != 0) {
        return 0;
      }
      lVar3 = lVar3 + -1;
    } while (lVar3 != 0);
  }
  return 1;
}



//==== 00550e68  ns=Global  size=0x74
// sig: undefined FUN_00550e68(void)
// callers(17): 005ada54 FUN_005ada54; 005add9c FUN_005add9c; 005ade10 FUN_005ade10; 005ae090 FUN_005ae090; 005ae250 FUN_005ae250; 005ae544 FUN_005ae544; 005ae684 FUN_005ae684; 005ae7a8 FUN_005ae7a8; 005ae97c FUN_005ae97c; 005aec68 FUN_005aec68; 005aed70 FUN_005aed70; 005af0a4 FUN_005af0a4; 005af3a8 FUN_005af3a8; 005af6c0 FUN_005af6c0; 005af774 FUN_005af774; 005b0740 FUN_005b0740; 005b1884 FUN_005b1884
// callees(0): 

int FUN_00550e68(int param_1)

{
  int iVar1;
  int iVar2;
  
  iVar1 = **(int **)PTR_PTR_0071b274;
  if ((iVar1 != 0) && (*(int *)(iVar1 + 0x10) != param_1)) {
    for (iVar2 = *(int *)(iVar1 + 4); (iVar1 != iVar2 && (iVar2 != 0)); iVar2 = *(int *)(iVar2 + 4))
    {
      if (*(int *)(iVar2 + 0x10) == param_1) {
        return iVar2;
      }
    }
    return 0;
  }
  return iVar1;
}



//==== 00550edc  ns=Global  size=0x1f0
// sig: undefined FUN_00550edc(void)
// callers(6): 0054a248 FUN_0054a248; 005618f8 FUN_005618f8; 00565628 FUN_00565628; 00566040 FUN_00566040; 005a896c FUN_005a896c; 005a9dac FUN_005a9dac
// callees(1): 00550e20 FUN_00550e20

int FUN_00550edc(uint param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 *puVar4;
  int iVar5;
  int iVar6;
  
  param_1 = param_1 & 0xc0000000;
  if (param_1 == 0x40000000) {
    iVar6 = 0;
    puVar4 = (undefined4 *)(*(int *)PTR_PTR_0071b274 + 0x188);
    goto LAB_00550f38;
  }
  if (param_1 < 0x40000001) {
    if (param_1 == 0) {
      iVar6 = 0;
      puVar4 = (undefined4 *)(*(int *)PTR_PTR_0071b274 + 0x88);
      goto LAB_00550f38;
    }
  }
  else {
    if (param_1 == 0x80000000) {
      iVar6 = 0;
      puVar4 = (undefined4 *)(*(int *)PTR_PTR_0071b274 + 8);
      goto LAB_00550f38;
    }
    if (param_1 == 0xc0000000) {
      iVar6 = 0;
      puVar4 = (undefined4 *)(*(int *)PTR_PTR_0071b274 + 0x108);
      goto LAB_00550f38;
    }
  }
  puVar4 = (undefined4 *)0x0;
  iVar6 = -1;
LAB_00550f38:
  iVar5 = FUN_00550e20(puVar4);
  if ((iVar5 != 0) && (iVar6 == 0)) {
    iVar6 = -3;
  }
  if (param_2 != (undefined4 *)0x0) {
    if (iVar6 != 0) {
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
      return iVar6;
    }
    uVar1 = puVar4[1];
    uVar2 = puVar4[2];
    uVar3 = puVar4[3];
    *param_2 = *puVar4;
    param_2[1] = uVar1;
    param_2[2] = uVar2;
    param_2[3] = uVar3;
    uVar1 = puVar4[5];
    uVar2 = puVar4[6];
    uVar3 = puVar4[7];
    param_2[4] = puVar4[4];
    param_2[5] = uVar1;
    param_2[6] = uVar2;
    param_2[7] = uVar3;
    uVar1 = puVar4[9];
    uVar2 = puVar4[10];
    uVar3 = puVar4[0xb];
    param_2[8] = puVar4[8];
    param_2[9] = uVar1;
    param_2[10] = uVar2;
    param_2[0xb] = uVar3;
    uVar1 = puVar4[0xc];
    uVar2 = puVar4[0xd];
    uVar3 = puVar4[0xe];
    param_2[0xf] = puVar4[0xf];
    param_2[0xc] = uVar1;
    param_2[0xd] = uVar2;
    param_2[0xe] = uVar3;
  }
  return iVar6;
}



//==== 005510cc  ns=Global  size=0xe8
// sig: undefined FUN_005510cc(void)
// callers(2): 005633b0 FUN_005633b0; 005aa458 FUN_005aa458
// callees(2): 005c5ad0 libc::memcpy; 005d0140 libc::memset

ulonglong FUN_005510cc(ulonglong param_1,void *param_2)

{
  int iVar2;
  void *pvVar3;
  ulonglong uVar1;
  
  param_1 = param_1 & 0xc0000000;
  iVar2 = (int)param_1;
  if (iVar2 == 0x40000000) {
    uVar1 = (ulonglong)*(uint *)PTR_PTR_0071b274 + 0x188;
  }
  else if (param_1 < 0x40000001) {
    if (iVar2 != 0) {
      return param_1;
    }
    uVar1 = (ulonglong)*(uint *)PTR_PTR_0071b274 + 0x88;
  }
  else if (iVar2 == -0x80000000) {
    uVar1 = (ulonglong)*(uint *)PTR_PTR_0071b274 + 8;
  }
  else {
    if (iVar2 != -0x40000000) {
      return param_1;
    }
    uVar1 = (ulonglong)*(uint *)PTR_PTR_0071b274 + 0x108;
  }
  if ((void *)uVar1 == (void *)0x0) {
    return uVar1;
  }
  if (param_2 == (void *)0x0) {
    uVar1 = libc::memset(uVar1 & 0xffffffff,0,0x80);
    return uVar1;
  }
  pvVar3 = libc::memcpy((void *)uVar1,param_2,0x80);
  return (longlong)(int)pvVar3;
}



//==== 005511b4  ns=Global  size=0x3c
// sig: undefined FUN_005511b4(void)
// callers(0): 
// callees(0): 

bool FUN_005511b4(undefined4 *param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined *puVar4;
  
  puVar4 = PTR_DAT_0071b278;
  if (param_1 != (undefined4 *)0x0) {
    uVar1 = *param_1;
    uVar2 = param_1[2];
    *(undefined4 *)(PTR_DAT_0071b278 + 4) = param_1[1];
    uVar3 = param_1[3];
    *(undefined4 *)puVar4 = uVar1;
    *(undefined4 *)(puVar4 + 0xc) = uVar3;
    *(undefined4 *)(puVar4 + 8) = uVar2;
  }
  return param_1 == (undefined4 *)0x0;
}



//==== 005511f0  ns=Global  size=0x18
// sig: undefined FUN_005511f0(void)
// callers(0): 
// callees(0): 

undefined8 FUN_005511f0(void)

{
  undefined *puVar1;
  
  puVar1 = PTR_DAT_0071b278;
  *(undefined4 *)(PTR_DAT_0071b278 + 8) = 0;
  *(undefined4 *)puVar1 = 0;
  return 0;
}



//==== 00551208  ns=Global  size=0x11c
// sig: undefined FUN_00551208(void)
// callers(2): 00551324 FUN_00551324; 00551488 FUN_00551488
// callees(2): 00553b40 FUN_00553b40; 00553f04 FUN_00553f04

undefined8 FUN_00551208(undefined8 param_1,int param_2)

{
  FUN_00553f04(param_1,param_2);
  FUN_00553b40(param_1,param_2 + 4,0x14);
  FUN_00553f04(param_1,param_2 + 0x18);
  FUN_00553f04(param_1,param_2 + 0x1c);
  FUN_00553f04(param_1,param_2 + 0x20);
  FUN_00553b40(param_1,param_2 + 0x24,0x10);
  FUN_00553f04(param_1,param_2 + 0x34);
  FUN_00553f04(param_1,param_2 + 0x38);
  FUN_00553f04(param_1,param_2 + 0x3c);
  FUN_00553b40(param_1,param_2 + 0x40,0x48);
  FUN_00553b40(param_1,param_2 + 0x88,0x20);
  return 0;
}



//==== 00551324  ns=Global  size=0x78
// sig: undefined FUN_00551324(void)
// callers(2): 0055139c FUN_0055139c; 00551694 FUN_00551694
// callees(3): 00551208 FUN_00551208; 00553c74 FUN_00553c74; 00553f04 FUN_00553f04

int FUN_00551324(undefined8 param_1,int param_2)

{
  int iVar1;
  
  iVar1 = FUN_00551208(param_1,param_2);
  if (iVar1 == 0) {
    FUN_00553f04(param_1,param_2 + 0xa8);
    FUN_00553c74(param_1,8);
  }
  return iVar1;
}



//==== 0055139c  ns=Global  size=0xec
// sig: undefined FUN_0055139c(void)
// callers(0): 
// callees(4): 00551324 FUN_00551324; 005525a8 FUN_005525a8; 005543a4 FUN_005543a4; 0055442c FUN_0055442c

undefined4 FUN_0055139c(void)

{
  undefined *puVar1;
  int in_r6;
  undefined4 local_100;
  undefined1 local_fc [4];
  undefined1 auStack_f8 [28];
  undefined1 auStack_dc [188];
  
  FUN_005525a8(in_r6,&local_100);
  puVar1 = PTR_DAT_0071b278;
  if (*(int *)(PTR_DAT_0071b278 + 8) != 0) {
    FUN_0055442c(auStack_f8,in_r6 + 4,in_r6 + 0xb8,2);
    FUN_00551324(auStack_f8,auStack_dc);
    FUN_005543a4(auStack_f8,local_fc);
    (*(code *)**(undefined4 **)(puVar1 + 8))(auStack_dc);
  }
  return local_100;
}



//==== 00551488  ns=Global  size=0x78
// sig: undefined FUN_00551488(void)
// callers(2): 00551500 FUN_00551500; 00551830 FUN_00551830
// callees(3): 00551208 FUN_00551208; 00553c74 FUN_00553c74; 00553f04 FUN_00553f04

int FUN_00551488(undefined8 param_1,int param_2)

{
  int iVar1;
  
  iVar1 = FUN_00551208(param_1,param_2);
  if (iVar1 == 0) {
    FUN_00553f04(param_1,param_2 + 0xa8);
    FUN_00553c74(param_1,8);
  }
  return iVar1;
}



//==== 00551500  ns=Global  size=0xec
// sig: undefined FUN_00551500(void)
// callers(0): 
// callees(4): 00551488 FUN_00551488; 005525a8 FUN_005525a8; 005543a4 FUN_005543a4; 0055442c FUN_0055442c

undefined4 FUN_00551500(void)

{
  undefined *puVar1;
  int in_r6;
  undefined4 local_100;
  undefined1 local_fc [4];
  undefined1 auStack_f8 [28];
  undefined1 auStack_dc [188];
  
  FUN_005525a8(in_r6,&local_100);
  puVar1 = PTR_DAT_0071b278;
  if (*(int *)PTR_DAT_0071b278 != 0) {
    FUN_0055442c(auStack_f8,in_r6 + 4,in_r6 + 0xb8,2);
    FUN_00551488(auStack_f8,auStack_dc);
    FUN_005543a4(auStack_f8,local_fc);
    (*(code *)**(undefined4 **)puVar1)(auStack_dc);
  }
  return local_100;
}



//==== 005515ec  ns=Global  size=0x30
// sig: undefined FUN_005515ec(void)
// callers(0): 
// callees(0): 

bool FUN_005515ec(undefined4 *param_1)

{
  if (param_1 != (undefined4 *)0x0) {
    param_1[3] = &DAT_01010101;
    *param_1 = &DAT_01010101;
    param_1[1] = &DAT_01010101;
    param_1[2] = &DAT_01010101;
  }
  return param_1 == (undefined4 *)0x0;
}



//==== 0055161c  ns=Global  size=0x3c
// sig: undefined FUN_0055161c(void)
// callers(0): 
// callees(0): 

bool FUN_0055161c(undefined4 *param_1)

{
  if (param_1 != (undefined4 *)0x0) {
    param_1[7] = 0;
    *param_1 = 0;
    param_1[1] = 0;
    param_1[2] = 0;
    param_1[3] = 0;
    param_1[4] = 0;
    param_1[5] = 0;
    param_1[6] = 0;
  }
  return param_1 == (undefined4 *)0x0;
}



//==== 00551658  ns=Global  size=0x3c
// sig: undefined FUN_00551658(void)
// callers(0): 
// callees(0): 

bool FUN_00551658(undefined4 *param_1)

{
  if (param_1 != (undefined4 *)0x0) {
    param_1[7] = 0;
    *param_1 = 0;
    param_1[1] = 0;
    param_1[2] = 0;
    param_1[3] = 0;
    param_1[4] = 0;
    param_1[5] = 0;
    param_1[6] = 0;
  }
  return param_1 == (undefined4 *)0x0;
}



//==== 00551694  ns=Global  size=0x19c
// sig: undefined FUN_00551694(void)
// callers(0): 
// callees(7): 0053fe40 FUN_0053fe40; 005459e8 FUN_005459e8; 00551324 FUN_00551324; 00552570 FUN_00552570; 005543a4 FUN_005543a4; 0055442c FUN_0055442c; 0055983c FUN_0055983c

int FUN_00551694(int param_1)

{
  int iVar1;
  undefined1 auStack_220 [2];
  undefined1 auStack_21e [2];
  undefined1 local_21c [4];
  undefined1 auStack_218 [4];
  undefined1 auStack_214 [4];
  undefined8 local_210;
  undefined1 auStack_208 [28];
  undefined1 local_1ec [76];
  undefined1 auStack_1a0 [180];
  undefined1 auStack_ec [188];
  
  iVar1 = 1;
  if (param_1 != 0) {
    FUN_00552570(auStack_218,*(int *)(param_1 + 0x18) + 0xb8);
    iVar1 = FUN_0055983c(auStack_ec,0);
    if (iVar1 == 0) {
      FUN_0055442c(auStack_208,auStack_1a0,auStack_ec,1);
      FUN_00551324(auStack_208,auStack_ec);
      FUN_005543a4(auStack_208,local_21c);
      FUN_0053fe40(param_1,auStack_214,&local_210,auStack_21e,auStack_220);
      iVar1 = FUN_005459e8(local_210,*(undefined2 *)(param_1 + 0x16),0,0x22,local_1ec);
      return iVar1;
    }
  }
  return iVar1;
}



//==== 00551830  ns=Global  size=0x19c
// sig: undefined FUN_00551830(void)
// callers(0): 
// callees(7): 0053fe40 FUN_0053fe40; 005459e8 FUN_005459e8; 00551488 FUN_00551488; 00552570 FUN_00552570; 005543a4 FUN_005543a4; 0055442c FUN_0055442c; 0055983c FUN_0055983c

int FUN_00551830(int param_1)

{
  int iVar1;
  undefined1 auStack_220 [2];
  undefined1 auStack_21e [2];
  undefined1 local_21c [4];
  undefined1 auStack_218 [4];
  undefined1 auStack_214 [4];
  undefined8 local_210;
  undefined1 auStack_208 [28];
  undefined1 local_1ec [76];
  undefined1 auStack_1a0 [180];
  undefined1 auStack_ec [188];
  
  iVar1 = 1;
  if (param_1 != 0) {
    FUN_00552570(auStack_218,*(int *)(param_1 + 0x18) + 0xb8);
    iVar1 = FUN_0055983c(auStack_ec,0);
    if (iVar1 == 0) {
      FUN_0055442c(auStack_208,auStack_1a0,auStack_ec,1);
      FUN_00551488(auStack_208,auStack_ec);
      FUN_005543a4(auStack_208,local_21c);
      FUN_0053fe40(param_1,auStack_214,&local_210,auStack_21e,auStack_220);
      iVar1 = FUN_005459e8(local_210,*(undefined2 *)(param_1 + 0x16),0,0x21,local_1ec);
      return iVar1;
    }
  }
  return iVar1;
}



//==== 005519cc  ns=Global  size=0x14
// sig: undefined FUN_005519cc(void)
// callers(1): 00547230 FUN_00547230
// callees(0): 

undefined8 FUN_005519cc(undefined4 param_1,undefined4 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR_DAT_0071b27c;
  *(undefined4 *)PTR_DAT_0071b27c = param_1;
  *(undefined4 *)(puVar1 + 4) = param_2;
  return 0;
}



//==== 005519e0  ns=Global  size=0x10
// sig: undefined FUN_005519e0(void)
// callers(1): 00547230 FUN_00547230
// callees(0): 

undefined8 FUN_005519e0(undefined4 param_1)

{
  *(undefined4 *)(PTR_DAT_0071b27c + 8) = param_1;
  return 0;
}



//==== 005519f0  ns=Global  size=0x7c
// sig: undefined FUN_005519f0(void)
// callers(45): 005472a4 FUN_005472a4; 0054fe34 FUN_0054fe34; 00551a6c FUN_00551a6c; 00553254 FUN_00553254; 00554ce4 FUN_00554ce4; 00554dbc FUN_00554dbc; 00555e14 FUN_00555e14; 00557ae8 FUN_00557ae8; 00557b94 FUN_00557b94; 00557bec FUN_00557bec; 00557cc8 FUN_00557cc8; 0055ed98 FUN_0055ed98; 00561584 FUN_00561584; 00566530 FUN_00566530; 00569f80 FUN_00569f80; 0056a278 FUN_0056a278; 0056c50c FUN_0056c50c; 0056ec2c FUN_0056ec2c; 0056eccc FUN_0056eccc; 0056fae8 FUN_0056fae8; 00575234 FUN_00575234; 0057ca08 FUN_0057ca08; 00586d84 FUN_00586d84; 00586dec FUN_00586dec; 0058a2a8 FUN_0058a2a8
// callees(1): 005d580c FUN_005d580c

undefined8 FUN_005519f0(int *param_1)

{
  if (*param_1 != 0) {
    if (*(undefined4 **)(PTR_DAT_0071b27c + 4) == (undefined4 *)0x0) {
      FUN_005d580c(*param_1);
    }
    else {
      (*(code *)**(undefined4 **)(PTR_DAT_0071b27c + 4))();
    }
    *param_1 = 0;
  }
  return 0;
}



//==== 00551a6c  ns=Global  size=0x68
// sig: undefined FUN_00551a6c(void)
// callers(0): 
// callees(1): 005519f0 FUN_005519f0

int FUN_00551a6c(int *param_1)

{
  int iVar1;
  
  iVar1 = 100;
  if (param_1 != (int *)0x0) {
    if (*param_1 != 0) {
      iVar1 = FUN_005519f0(param_1);
      if (iVar1 != 0) {
        return iVar1;
      }
      *param_1 = 0;
    }
    iVar1 = 0;
    param_1[1] = 0;
  }
  return iVar1;
}



//==== 00551ad4  ns=Global  size=0xac
// sig: undefined FUN_00551ad4(void)
// callers(1): 00544040 FUN_00544040
// callees(1): 005d579c FUN_005d579c

undefined8 FUN_00551ad4(int *param_1,undefined4 param_2)

{
  int iVar1;
  
  if (*(undefined4 **)(PTR_DAT_0071b27c + 8) == (undefined4 *)0x0) {
    iVar1 = FUN_005d579c(*param_1,param_2);
    *param_1 = iVar1;
  }
  else {
    iVar1 = (*(code *)**(undefined4 **)(PTR_DAT_0071b27c + 8))(*param_1);
    *param_1 = iVar1;
  }
  if (iVar1 == 0) {
    return 100;
  }
  return 0;
}



//==== 00551b80  ns=Global  size=0xa4
// sig: undefined FUN_00551b80(void)
// callers(14): 00551c24 FUN_00551c24; 00551de8 FUN_00551de8; 00555e14 FUN_00555e14; 0056655c FUN_0056655c; 0058eb58 FUN_0058eb58; 005ad168 FUN_005ad168; 005ada54 FUN_005ada54; 005ade10 FUN_005ade10; 005ae250 FUN_005ae250; 005ae544 FUN_005ae544; 005ae7a8 FUN_005ae7a8; 005c3e40 FUN_005c3e40; 005c3f8c FUN_005c3f8c; 005c4620 FUN_005c4620
// callees(1): 005d5838 FUN_005d5838

undefined8 FUN_00551b80(int *param_1,undefined4 param_2)

{
  int iVar2;
  longlong lVar1;
  
  if (*(undefined4 **)PTR_DAT_0071b27c == (undefined4 *)0x0) {
    lVar1 = FUN_005d5838(param_2);
    *param_1 = (int)lVar1;
    if (lVar1 != 0) {
      return 0;
    }
  }
  else {
    iVar2 = (*(code *)**(undefined4 **)PTR_DAT_0071b27c)();
    *param_1 = iVar2;
    if (iVar2 != 0) {
      return 0;
    }
  }
  return 100;
}



//==== 00551c24  ns=Global  size=0x108
// sig: undefined FUN_00551c24(void)
// callers(1): 00551d2c FUN_00551d2c
// callees(1): 00551b80 FUN_00551b80

int FUN_00551c24(int *param_1,ulonglong param_2,ulonglong param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
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
  if ((param_1 != (int *)0x0) && ((int)param_2 != 0)) {
    param_3 = param_3 & 0xffff;
    param_1[1] = 0;
    *param_1 = 0;
    iVar4 = (int)param_3;
    if (1 < param_3) {
      param_2 = param_3 + (longlong)(int)(((param_2 + param_3) - 1 & 0xffffffff) / param_3) *
                          (longlong)iVar4;
    }
    iVar3 = FUN_00551b80(param_1,param_2 & 0xffffffff);
    if (iVar3 == 0) {
      iVar1 = *param_1;
      if (iVar1 == 0) {
        return 100;
      }
      param_1[1] = iVar1;
      if ((1 < param_3) && (iVar2 = iVar1 - (iVar1 / iVar4) * iVar4, iVar2 != 0)) {
        param_1[1] = iVar1 + (iVar4 - iVar2);
      }
    }
    return iVar3;
  }
  return 100;
}



//==== 00551d2c  ns=Global  size=0xbc
// sig: undefined FUN_00551d2c(void)
// callers(0): 
// callees(2): 00551c24 FUN_00551c24; 005d0140 libc::memset

int FUN_00551d2c(undefined4 *param_1,int param_2,undefined2 param_3)

{
  int iVar1;
  
  if ((param_1 != (undefined4 *)0x0) && (param_2 != 0)) {
    param_1[1] = 0;
    *param_1 = 0;
    iVar1 = FUN_00551c24(param_1,param_2,param_3);
    if (iVar1 != 0) {
      return iVar1;
    }
    if (param_1[1] != 0) {
      libc::memset(param_1[1],0,param_2);
      return 0;
    }
  }
  return 100;
}



//==== 00551de8  ns=Global  size=0xac
// sig: undefined FUN_00551de8(void)
// callers(30): 00547ec0 FUN_00547ec0; 00550054 FUN_00550054; 005532e4 FUN_005532e4; 00555c7c FUN_00555c7c; 00555e14 FUN_00555e14; 00557bec FUN_00557bec; 00557cc8 FUN_00557cc8; 00557df0 FUN_00557df0; 00562954 FUN_00562954; 005633b0 FUN_005633b0; 00569774 FUN_00569774; 0056a0e8 FUN_0056a0e8; 0056a938 FUN_0056a938; 0056eccc FUN_0056eccc; 0056f7a8 FUN_0056f7a8; 0056f904 FUN_0056f904; 0056fa78 FUN_0056fa78; 00575468 FUN_00575468; 0057cd34 FUN_0057cd34; 00586dec FUN_00586dec; 0058a2cc FUN_0058a2cc; 0058a5d0 FUN_0058a5d0; 005a2224 FUN_005a2224; 005a8ff0 FUN_005a8ff0; 005a9c48 FUN_005a9c48
// callees(2): 00551b80 FUN_00551b80; 005d0140 libc::memset

int FUN_00551de8(int *param_1,undefined4 param_2)

{
  int iVar1;
  
  if (param_1 == (int *)0x0) {
    return 100;
  }
  *param_1 = 0;
  iVar1 = FUN_00551b80(param_1,param_2);
  if (iVar1 == 0) {
    if (*param_1 == 0) {
      return 100;
    }
    libc::memset(*param_1,0,param_2);
  }
  return iVar1;
}



//==== 00551e94  ns=Global  size=0x1c
// sig: undefined FUN_00551e94(void)
// callers(1): 00554290 FUN_00554290
// callees(0): 

undefined8 FUN_00551e94(undefined1 *param_1,undefined1 param_2)

{
  undefined8 uVar1;
  
  uVar1 = 2;
  if (param_1 != (undefined1 *)0x0) {
    uVar1 = 0;
    *param_1 = param_2;
  }
  return uVar1;
}



//==== 00551eb0  ns=Global  size=0x28
// sig: undefined FUN_00551eb0(void)
// callers(1): 00554290 FUN_00554290
// callees(0): 

undefined8 FUN_00551eb0(undefined1 *param_1,undefined1 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = 2;
  if ((param_1 != (undefined1 *)0x0) && (param_2 != (undefined1 *)0x0)) {
    uVar1 = 0;
    *param_2 = *param_1;
  }
  return uVar1;
}



//==== 00551ed8  ns=Global  size=0x1c
// sig: undefined FUN_00551ed8(void)
// callers(19): 005502bc FUN_005502bc; 00569498 FUN_00569498; 005a2400 FUN_005a2400; 005a274c FUN_005a274c; 005a29d0 FUN_005a29d0; 005a3184 FUN_005a3184; 005a3408 FUN_005a3408; 005a368c FUN_005a368c; 005a39cc FUN_005a39cc; 005a4780 FUN_005a4780; 005a61ac FUN_005a61ac; 005a6718 FUN_005a6718; 005a7050 FUN_005a7050; 005aa95c FUN_005aa95c; 005aab0c FUN_005aab0c; 005aac48 FUN_005aac48; 005aafb0 FUN_005aafb0; 005abf68 FUN_005abf68; 005ac164 FUN_005ac164
// callees(0): 

undefined8 FUN_00551ed8(undefined1 *param_1,undefined1 param_2)

{
  undefined8 uVar1;
  
  uVar1 = 2;
  if (param_1 != (undefined1 *)0x0) {
    uVar1 = 0;
    *param_1 = param_2;
  }
  return uVar1;
}



//==== 00551ef4  ns=Global  size=0x28
// sig: undefined FUN_00551ef4(void)
// callers(10): 00550720 FUN_00550720; 00566a08 FUN_00566a08; 005a1930 FUN_005a1930; 005a1e54 FUN_005a1e54; 005a4268 FUN_005a4268; 005a61ac FUN_005a61ac; 005a9540 FUN_005a9540; 005aba94 FUN_005aba94; 005ac1dc FUN_005ac1dc; 005ac5b0 FUN_005ac5b0
// callees(0): 

undefined8 FUN_00551ef4(undefined1 *param_1,undefined1 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = 2;
  if ((param_1 != (undefined1 *)0x0) && (param_2 != (undefined1 *)0x0)) {
    uVar1 = 0;
    *param_2 = *param_1;
  }
  return uVar1;
}



//==== 00551f1c  ns=Global  size=0x24
// sig: undefined FUN_00551f1c(void)
// callers(1): 00554160 FUN_00554160
// callees(0): 

undefined8 FUN_00551f1c(undefined1 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = 2;
  if (param_1 != (undefined1 *)0x0) {
    uVar1 = 0;
    param_1[1] = (char)((ulonglong)param_2 >> 8);
    *param_1 = (char)param_2;
  }
  return uVar1;
}



//==== 00551f40  ns=Global  size=0x38
// sig: undefined FUN_00551f40(void)
// callers(1): 00554160 FUN_00554160
// callees(0): 

undefined8 FUN_00551f40(byte *param_1,ushort *param_2)

{
  byte bVar1;
  undefined8 uVar2;
  
  uVar2 = 2;
  if ((param_1 != (byte *)0x0) && (param_2 != (ushort *)0x0)) {
    bVar1 = *param_1;
    uVar2 = 0;
    *param_2 = (ushort)bVar1;
    *param_2 = CONCAT11(param_1[1],bVar1);
  }
  return uVar2;
}



//==== 00551f78  ns=Global  size=0x24
// sig: undefined FUN_00551f78(void)
// callers(37): 00546d88 FUN_00546d88; 00557774 FUN_00557774; 0055798c FUN_0055798c; 00559a4c FUN_00559a4c; 0055a634 FUN_0055a634; 0055f31c FUN_0055f31c; 0055f5d8 FUN_0055f5d8; 005641d0 FUN_005641d0; 005641fc FUN_005641fc; 00564228 FUN_00564228; 0056428c FUN_0056428c; 00564448 FUN_00564448; 005644a8 FUN_005644a8; 00569498 FUN_00569498; 005a2400 FUN_005a2400; 005a25a4 FUN_005a25a4; 005a274c FUN_005a274c; 005a28e0 FUN_005a28e0; 005a29d0 FUN_005a29d0; 005a2b24 FUN_005a2b24; 005a2cc8 FUN_005a2cc8; 005a3184 FUN_005a3184; 005a3328 FUN_005a3328; 005a3408 FUN_005a3408; 005a35ac FUN_005a35ac
// callees(0): 

undefined8 FUN_00551f78(undefined1 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = 2;
  if (param_1 != (undefined1 *)0x0) {
    uVar1 = 0;
    param_1[1] = (char)((ulonglong)param_2 >> 8);
    *param_1 = (char)param_2;
  }
  return uVar1;
}



//==== 00551f9c  ns=Global  size=0x38
// sig: undefined FUN_00551f9c(void)
// callers(45): 0054b278 FUN_0054b278; 005592f0 FUN_005592f0; 00559fc4 FUN_00559fc4; 0055dc20 FUN_0055dc20; 0055ded8 FUN_0055ded8; 0055e390 FUN_0055e390; 0055e544 FUN_0055e544; 0055f5d8 FUN_0055f5d8; 0055f8cc FUN_0055f8cc; 0056072c FUN_0056072c; 0056195c FUN_0056195c; 00563f04 FUN_00563f04; 00563f40 FUN_00563f40; 00563f7c FUN_00563f7c; 00564004 FUN_00564004; 00564034 FUN_00564034; 005640d4 FUN_005640d4; 00564144 FUN_00564144; 00564180 FUN_00564180; 00564228 FUN_00564228; 0056428c FUN_0056428c; 00564448 FUN_00564448; 00566a08 FUN_00566a08; 005a1670 FUN_005a1670; 005a17d0 FUN_005a17d0
// callees(0): 

undefined8 FUN_00551f9c(byte *param_1,ushort *param_2)

{
  byte bVar1;
  undefined8 uVar2;
  
  uVar2 = 2;
  if ((param_1 != (byte *)0x0) && (param_2 != (ushort *)0x0)) {
    bVar1 = *param_1;
    uVar2 = 0;
    *param_2 = (ushort)bVar1;
    *param_2 = CONCAT11(param_1[1],bVar1);
  }
  return uVar2;
}



//==== 00551fd4  ns=Global  size=0x38
// sig: undefined FUN_00551fd4(void)
// callers(6): 00553f04 FUN_00553f04; 0058b678 FUN_0058b678; 0058bc5c FUN_0058bc5c; 0058cab0 FUN_0058cab0; 0058d010 FUN_0058d010; 0058d4c8 FUN_0058d4c8
// callees(0): 

undefined8 FUN_00551fd4(undefined1 *param_1,undefined4 param_2)

{
  undefined8 uVar1;
  
  uVar1 = 2;
  if (param_1 != (undefined1 *)0x0) {
    *param_1 = (char)param_2;
    param_1[1] = (char)((uint)param_2 >> 8);
    param_1[2] = (char)((uint)param_2 >> 0x10);
    uVar1 = 0;
    param_1[3] = (char)((uint)param_2 >> 0x18);
  }
  return uVar1;
}



//==== 0055200c  ns=Global  size=0x5c
// sig: undefined FUN_0055200c(void)
// callers(2): 00553f04 FUN_00553f04; 0058c720 FUN_0058c720
// callees(0): 

undefined8 FUN_0055200c(byte *param_1,uint *param_2)

{
  byte bVar1;
  ushort uVar2;
  uint3 uVar3;
  undefined8 uVar4;
  
  uVar4 = 2;
  if ((param_1 != (byte *)0x0) && (param_2 != (uint *)0x0)) {
    bVar1 = *param_1;
    uVar4 = 0;
    *param_2 = (uint)bVar1;
    uVar2 = CONCAT11(param_1[1],bVar1);
    *param_2 = (uint)uVar2;
    uVar3 = CONCAT12(param_1[2],uVar2);
    *param_2 = (uint)uVar3;
    *param_2 = CONCAT13(param_1[3],uVar3);
  }
  return uVar4;
}



//==== 00552068  ns=Global  size=0x88
// sig: undefined FUN_00552068(void)
// callers(1): 00554034 FUN_00554034
// callees(0): 

undefined8 FUN_00552068(undefined1 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = 2;
  if (param_1 != (undefined1 *)0x0) {
    *param_1 = (char)param_2;
    uVar1 = 0;
    param_1[1] = (char)((ulonglong)param_2 >> 8);
    param_1[2] = (char)((ulonglong)param_2 >> 0x10);
    param_1[3] = (char)((ulonglong)param_2 >> 0x18);
    param_1[4] = (char)((ulonglong)param_2 >> 0x20);
    param_1[5] = (char)((ulonglong)param_2 >> 0x28);
    param_1[7] = (char)((ulonglong)param_2 >> 0x38);
    param_1[6] = (char)((ulonglong)param_2 >> 0x30);
  }
  return uVar1;
}



//==== 005520f0  ns=Global  size=0xbc
// sig: undefined FUN_005520f0(void)
// callers(1): 00554034 FUN_00554034
// callees(0): 

undefined8 FUN_005520f0(byte *param_1,ulonglong *param_2)

{
  byte bVar1;
  ushort uVar2;
  uint3 uVar3;
  uint uVar4;
  uint5 uVar5;
  uint6 uVar6;
  uint7 uVar7;
  undefined8 uVar8;
  
  uVar8 = 2;
  if ((param_1 != (byte *)0x0) && (param_2 != (ulonglong *)0x0)) {
    bVar1 = *param_1;
    uVar8 = 0;
    *param_2 = (ulonglong)bVar1;
    uVar2 = CONCAT11(param_1[1],bVar1);
    *param_2 = (ulonglong)uVar2;
    uVar3 = CONCAT12(param_1[2],uVar2);
    *param_2 = (ulonglong)uVar3;
    uVar4 = CONCAT13(param_1[3],uVar3);
    *param_2 = (ulonglong)uVar4;
    uVar5 = CONCAT14(param_1[4],uVar4);
    *param_2 = (ulonglong)uVar5;
    uVar6 = CONCAT15(param_1[5],uVar5);
    *param_2 = (ulonglong)uVar6;
    uVar7 = CONCAT16(param_1[6],uVar6);
    *param_2 = (ulonglong)uVar7;
    *param_2 = CONCAT17(param_1[7],uVar7);
  }
  return uVar8;
}



//==== 005521ac  ns=Global  size=0x88
// sig: undefined FUN_005521ac(void)
// callers(0): 
// callees(0): 

undefined8 FUN_005521ac(undefined1 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = 2;
  if (param_1 != (undefined1 *)0x0) {
    *param_1 = (char)param_2;
    uVar1 = 0;
    param_1[1] = (char)((ulonglong)param_2 >> 8);
    param_1[2] = (char)((ulonglong)param_2 >> 0x10);
    param_1[3] = (char)((ulonglong)param_2 >> 0x18);
    param_1[4] = (char)((ulonglong)param_2 >> 0x20);
    param_1[5] = (char)((ulonglong)param_2 >> 0x28);
    param_1[7] = (char)((ulonglong)param_2 >> 0x38);
    param_1[6] = (char)((ulonglong)param_2 >> 0x30);
  }
  return uVar1;
}



//==== 00552234  ns=Global  size=0xbc
// sig: undefined FUN_00552234(void)
// callers(0): 
// callees(0): 

undefined8 FUN_00552234(byte *param_1,ulonglong *param_2)

{
  byte bVar1;
  ushort uVar2;
  uint3 uVar3;
  uint uVar4;
  uint5 uVar5;
  uint6 uVar6;
  uint7 uVar7;
  undefined8 uVar8;
  
  uVar8 = 2;
  if ((param_1 != (byte *)0x0) && (param_2 != (ulonglong *)0x0)) {
    bVar1 = *param_1;
    uVar8 = 0;
    *param_2 = (ulonglong)bVar1;
    uVar2 = CONCAT11(param_1[1],bVar1);
    *param_2 = (ulonglong)uVar2;
    uVar3 = CONCAT12(param_1[2],uVar2);
    *param_2 = (ulonglong)uVar3;
    uVar4 = CONCAT13(param_1[3],uVar3);
    *param_2 = (ulonglong)uVar4;
    uVar5 = CONCAT14(param_1[4],uVar4);
    *param_2 = (ulonglong)uVar5;
    uVar6 = CONCAT15(param_1[5],uVar5);
    *param_2 = (ulonglong)uVar6;
    uVar7 = CONCAT16(param_1[6],uVar6);
    *param_2 = (ulonglong)uVar7;
    *param_2 = CONCAT17(param_1[7],uVar7);
  }
  return uVar8;
}



//==== 005522f0  ns=Global  size=0x84
// sig: undefined FUN_005522f0(void)
// callers(0): 
// callees(0): 

undefined8 FUN_005522f0(undefined1 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = 2;
  if (param_1 != (undefined1 *)0x0) {
    *param_1 = (char)((ulonglong)param_2 >> 0x38);
    param_1[1] = (char)((ulonglong)param_2 >> 0x30);
    uVar1 = 0;
    param_1[2] = (char)((ulonglong)param_2 >> 0x28);
    param_1[3] = (char)((ulonglong)param_2 >> 0x20);
    param_1[4] = (char)((ulonglong)param_2 >> 0x18);
    param_1[5] = (char)((ulonglong)param_2 >> 0x10);
    param_1[7] = (char)param_2;
    param_1[6] = (char)((ulonglong)param_2 >> 8);
  }
  return uVar1;
}



//==== 00552374  ns=Global  size=0xbc
// sig: undefined FUN_00552374(void)
// callers(0): 
// callees(0): 

undefined8 FUN_00552374(byte *param_1,ulonglong *param_2)

{
  byte bVar1;
  undefined8 uVar2;
  ulonglong uVar3;
  
  uVar2 = 2;
  if ((param_1 != (byte *)0x0) && (param_2 != (ulonglong *)0x0)) {
    bVar1 = *param_1;
    uVar2 = 0;
    *param_2 = (ulonglong)bVar1 << 0x38;
    uVar3 = (ulonglong)bVar1 << 0x38 | (ulonglong)param_1[1] << 0x30;
    *param_2 = uVar3;
    uVar3 = uVar3 | (ulonglong)param_1[2] << 0x28;
    *param_2 = uVar3;
    uVar3 = uVar3 | (ulonglong)param_1[3] << 0x20;
    *param_2 = uVar3;
    uVar3 = uVar3 | (ulonglong)param_1[4] << 0x18;
    *param_2 = uVar3;
    uVar3 = uVar3 | (ulonglong)param_1[5] << 0x10;
    *param_2 = uVar3;
    uVar3 = uVar3 | (ulonglong)param_1[6] << 8;
    *param_2 = uVar3;
    *param_2 = uVar3 | param_1[7];
  }
  return uVar2;
}



//==== 00552430  ns=Global  size=0x84
// sig: undefined FUN_00552430(void)
// callers(0): 
// callees(0): 

undefined8 FUN_00552430(undefined1 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = 2;
  if (param_1 != (undefined1 *)0x0) {
    *param_1 = (char)((ulonglong)param_2 >> 0x38);
    param_1[1] = (char)((ulonglong)param_2 >> 0x30);
    uVar1 = 0;
    param_1[2] = (char)((ulonglong)param_2 >> 0x28);
    param_1[3] = (char)((ulonglong)param_2 >> 0x20);
    param_1[4] = (char)((ulonglong)param_2 >> 0x18);
    param_1[5] = (char)((ulonglong)param_2 >> 0x10);
    param_1[7] = (char)param_2;
    param_1[6] = (char)((ulonglong)param_2 >> 8);
  }
  return uVar1;
}



//==== 005524b4  ns=Global  size=0xbc
// sig: undefined FUN_005524b4(void)
// callers(0): 
// callees(0): 

undefined8 FUN_005524b4(byte *param_1,ulonglong *param_2)

{
  byte bVar1;
  undefined8 uVar2;
  ulonglong uVar3;
  
  uVar2 = 2;
  if ((param_1 != (byte *)0x0) && (param_2 != (ulonglong *)0x0)) {
    bVar1 = *param_1;
    uVar2 = 0;
    *param_2 = (ulonglong)bVar1 << 0x38;
    uVar3 = (ulonglong)bVar1 << 0x38 | (ulonglong)param_1[1] << 0x30;
    *param_2 = uVar3;
    uVar3 = uVar3 | (ulonglong)param_1[2] << 0x28;
    *param_2 = uVar3;
    uVar3 = uVar3 | (ulonglong)param_1[3] << 0x20;
    *param_2 = uVar3;
    uVar3 = uVar3 | (ulonglong)param_1[4] << 0x18;
    *param_2 = uVar3;
    uVar3 = uVar3 | (ulonglong)param_1[5] << 0x10;
    *param_2 = uVar3;
    uVar3 = uVar3 | (ulonglong)param_1[6] << 8;
    *param_2 = uVar3;
    *param_2 = uVar3 | param_1[7];
  }
  return uVar2;
}



//==== 00552570  ns=Global  size=0x38
// sig: undefined FUN_00552570(void)
// callers(13): 00551694 FUN_00551694; 00551830 FUN_00551830; 00561b00 FUN_00561b00; 00564524 FUN_00564524; 00566ef4 FUN_00566ef4; 00569498 FUN_00569498; 005a464c FUN_005a464c; 005a4780 FUN_005a4780; 005a61ac FUN_005a61ac; 005a7050 FUN_005a7050; 005a7684 FUN_005a7684; 005a79d0 FUN_005a79d0; 005ac6e8 FUN_005ac6e8
// callees(0): 

undefined8 FUN_00552570(undefined1 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = 2;
  if (param_1 != (undefined1 *)0x0) {
    *param_1 = (char)param_2;
    param_1[1] = (char)((ulonglong)param_2 >> 8);
    param_1[2] = (char)((ulonglong)param_2 >> 0x10);
    uVar1 = 0;
    param_1[3] = (char)((ulonglong)param_2 >> 0x18);
  }
  return uVar1;
}



//==== 005525a8  ns=Global  size=0x5c
// sig: undefined FUN_005525a8(void)
// callers(18): 0055139c FUN_0055139c; 00551500 FUN_00551500; 0055f8cc FUN_0055f8cc; 005645c4 FUN_005645c4; 00566a08 FUN_00566a08; 005a1670 FUN_005a1670; 005a1930 FUN_005a1930; 005a2130 FUN_005a2130; 005a4268 FUN_005a4268; 005a4700 FUN_005a4700; 005a4780 FUN_005a4780; 005a7bc4 FUN_005a7bc4; 005a896c FUN_005a896c; 005a9148 FUN_005a9148; 005a92c0 FUN_005a92c0; 005a972c FUN_005a972c; 005abd98 FUN_005abd98; 005abffc FUN_005abffc
// callees(0): 

undefined8 FUN_005525a8(byte *param_1,uint *param_2)

{
  byte bVar1;
  ushort uVar2;
  uint3 uVar3;
  undefined8 uVar4;
  
  uVar4 = 2;
  if ((param_1 != (byte *)0x0) && (param_2 != (uint *)0x0)) {
    bVar1 = *param_1;
    uVar4 = 0;
    *param_2 = (uint)bVar1;
    uVar2 = CONCAT11(param_1[1],bVar1);
    *param_2 = (uint)uVar2;
    uVar3 = CONCAT12(param_1[2],uVar2);
    *param_2 = (uint)uVar3;
    *param_2 = CONCAT13(param_1[3],uVar3);
  }
  return uVar4;
}



//==== 00552604  ns=Global  size=0x4c
// sig: undefined FUN_00552604(void)
// callers(2): 00566040 FUN_00566040; 005a896c FUN_005a896c
// callees(0): 

void FUN_00552604(undefined4 *param_1,undefined1 *param_2,uint param_3)

{
  undefined4 uVar1;
  longlong lVar2;
  
  if (param_3 < 4) {
    return;
  }
  lVar2 = (((ulonglong)param_3 - 4 << 0x20) >> 0x22) + 1;
  do {
    uVar1 = *param_1;
    param_1 = param_1 + 1;
    param_2[1] = (char)((uint)uVar1 >> 8);
    param_2[2] = (char)((uint)uVar1 >> 0x10);
    param_2[3] = (char)((uint)uVar1 >> 0x18);
    *param_2 = (char)uVar1;
    param_2 = param_2 + 4;
    lVar2 = lVar2 + -1;
  } while (lVar2 != 0);
  return;
}



//==== 00552650  ns=Global  size=0x58
// sig: undefined FUN_00552650(void)
// callers(2): 00565f2c FUN_00565f2c; 005a92c0 FUN_005a92c0
// callees(0): 

void FUN_00552650(undefined1 *param_1,undefined4 *param_2,uint param_3)

{
  undefined1 uVar1;
  undefined1 *puVar2;
  undefined1 *puVar3;
  undefined1 *puVar4;
  longlong lVar5;
  
  if (param_3 < 4) {
    return;
  }
  lVar5 = (((ulonglong)param_3 - 4 << 0x20) >> 0x22) + 1;
  do {
    puVar2 = param_1 + 1;
    uVar1 = *param_1;
    puVar3 = param_1 + 2;
    puVar4 = param_1 + 3;
    param_1 = param_1 + 4;
    *param_2 = CONCAT13(*puVar4,CONCAT12(*puVar3,CONCAT11(*puVar2,uVar1)));
    param_2 = param_2 + 1;
    lVar5 = lVar5 + -1;
  } while (lVar5 != 0);
  return;
}



//==== 005526a8  ns=Global  size=0x24
// sig: undefined FUN_005526a8(void)
// callers(0): 
// callees(0): 

undefined8 FUN_005526a8(undefined1 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = 2;
  if (param_1 != (undefined1 *)0x0) {
    uVar1 = 0;
    param_1[1] = (char)param_2;
    *param_1 = (char)((ulonglong)param_2 >> 8);
  }
  return uVar1;
}



//==== 005526cc  ns=Global  size=0x38
// sig: undefined FUN_005526cc(void)
// callers(0): 
// callees(0): 

undefined8 FUN_005526cc(byte *param_1,short *param_2)

{
  byte bVar1;
  undefined8 uVar2;
  
  uVar2 = 2;
  if ((param_1 != (byte *)0x0) && (param_2 != (short *)0x0)) {
    bVar1 = *param_1;
    uVar2 = 0;
    *param_2 = (ushort)bVar1 << 8;
    *param_2 = CONCAT11(bVar1,param_1[1]);
  }
  return uVar2;
}



//==== 00552704  ns=Global  size=0x24
// sig: undefined FUN_00552704(void)
// callers(2): 005502bc FUN_005502bc; 005a0ab8 FUN_005a0ab8
// callees(0): 

undefined8 FUN_00552704(undefined1 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = 2;
  if (param_1 != (undefined1 *)0x0) {
    uVar1 = 0;
    param_1[1] = (char)param_2;
    *param_1 = (char)((ulonglong)param_2 >> 8);
  }
  return uVar1;
}



//==== 00552728  ns=Global  size=0x38
// sig: undefined FUN_00552728(void)
// callers(5): 00550720 FUN_00550720; 0056f674 FUN_0056f674; 005a04f0 FUN_005a04f0; 005a0648 FUN_005a0648; 005a06cc FUN_005a06cc
// callees(0): 

undefined8 FUN_00552728(byte *param_1,short *param_2)

{
  byte bVar1;
  undefined8 uVar2;
  
  uVar2 = 2;
  if ((param_1 != (byte *)0x0) && (param_2 != (short *)0x0)) {
    bVar1 = *param_1;
    uVar2 = 0;
    *param_2 = (ushort)bVar1 << 8;
    *param_2 = CONCAT11(bVar1,param_1[1]);
  }
  return uVar2;
}



//==== 00552760  ns=Global  size=0x38
// sig: undefined FUN_00552760(void)
// callers(0): 
// callees(0): 

undefined8 FUN_00552760(undefined1 *param_1,undefined4 param_2)

{
  undefined8 uVar1;
  
  uVar1 = 2;
  if (param_1 != (undefined1 *)0x0) {
    *param_1 = (char)((uint)param_2 >> 0x18);
    param_1[1] = (char)((uint)param_2 >> 0x10);
    param_1[2] = (char)((uint)param_2 >> 8);
    uVar1 = 0;
    param_1[3] = (char)param_2;
  }
  return uVar1;
}



//==== 00552798  ns=Global  size=0x5c
// sig: undefined FUN_00552798(void)
// callers(0): 
// callees(0): 

undefined8 FUN_00552798(byte *param_1,uint *param_2)

{
  byte bVar1;
  uint uVar2;
  undefined8 uVar3;
  
  uVar3 = 2;
  if ((param_1 != (byte *)0x0) && (param_2 != (uint *)0x0)) {
    bVar1 = *param_1;
    uVar3 = 0;
    *param_2 = (uint)bVar1 << 0x18;
    uVar2 = (uint)bVar1 << 0x18 | (uint)param_1[1] << 0x10;
    *param_2 = uVar2;
    uVar2 = uVar2 | (uint)param_1[2] << 8;
    *param_2 = uVar2;
    *param_2 = uVar2 | param_1[3];
  }
  return uVar3;
}



//==== 005527f4  ns=Global  size=0x38
// sig: undefined FUN_005527f4(void)
// callers(0): 
// callees(0): 

undefined8 FUN_005527f4(undefined1 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = 2;
  if (param_1 != (undefined1 *)0x0) {
    *param_1 = (char)((ulonglong)param_2 >> 0x18);
    param_1[1] = (char)((ulonglong)param_2 >> 0x10);
    param_1[2] = (char)((ulonglong)param_2 >> 8);
    uVar1 = 0;
    param_1[3] = (char)param_2;
  }
  return uVar1;
}



//==== 0055282c  ns=Global  size=0x5c
// sig: undefined FUN_0055282c(void)
// callers(0): 
// callees(0): 

undefined8 FUN_0055282c(byte *param_1,uint *param_2)

{
  byte bVar1;
  uint uVar2;
  undefined8 uVar3;
  
  uVar3 = 2;
  if ((param_1 != (byte *)0x0) && (param_2 != (uint *)0x0)) {
    bVar1 = *param_1;
    uVar3 = 0;
    *param_2 = (uint)bVar1 << 0x18;
    uVar2 = (uint)bVar1 << 0x18 | (uint)param_1[1] << 0x10;
    *param_2 = uVar2;
    uVar2 = uVar2 | (uint)param_1[2] << 8;
    *param_2 = uVar2;
    *param_2 = uVar2 | param_1[3];
  }
  return uVar3;
}



//==== 00552888  ns=Global  size=0x3c
// sig: undefined FUN_00552888(void)
// callers(1): 0053f9b4 FUN_0053f9b4
// callees(0): 

void FUN_00552888(uint param_1)

{
  uint *puVar1;
  longlong lVar2;
  
  puVar1 = (uint *)PTR_DAT_0071b280;
  param_1 = param_1 | 1;
  lVar2 = 0x26f;
  *(undefined4 *)(PTR_DAT_0071b280 + 0x9c4) = 0x26f;
  *puVar1 = param_1;
  do {
    puVar1 = puVar1 + 1;
    param_1 = param_1 * 0x10dcd;
    *puVar1 = param_1;
    lVar2 = lVar2 + -1;
  } while (lVar2 != 0);
  return;
}



//==== 005528c4  ns=Global  size=0x6c
// sig: undefined FUN_005528c4(void)
// callers(1): 00552b30 FUN_00552b30
// callees(0): 

void FUN_005528c4(uint *param_1,uint param_2)

{
  uint uVar1;
  uint *puVar2;
  uint uVar3;
  longlong lVar4;
  
  puVar2 = (uint *)PTR_DAT_0071b280;
  if (0x26f < param_2) {
    param_2 = 0x26f;
  }
  lVar4 = 0x270;
  uVar3 = 0xffffffff;
  *(undefined4 *)(PTR_DAT_0071b280 + 0x9c4) = 0x26f;
  *puVar2 = 0xffffffff;
  do {
    puVar2 = puVar2 + 1;
    if (param_2 != 0) {
      uVar1 = *param_1;
      param_2 = param_2 - 1;
      param_1 = param_1 + 1;
      uVar3 = uVar3 ^ uVar1;
    }
    uVar3 = (uVar3 << 5 | uVar3 >> 0x1b) * 0x10dcd;
    *puVar2 = uVar3;
    lVar4 = lVar4 + -1;
  } while (lVar4 != 0);
  return;
}



//==== 00552930  ns=Global  size=0x14
// sig: undefined FUN_00552930(void)
// callers(0): 
// callees(0): 

void FUN_00552930(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  undefined *puVar1;
  
  puVar1 = PTR_DAT_0071b280;
  *(undefined4 *)(PTR_DAT_0071b280 + 0x9d0) = param_3;
  *(undefined4 *)(puVar1 + 0x9c8) = param_1;
  *(undefined4 *)(puVar1 + 0x9cc) = param_2;
  return;
}



//==== 00552944  ns=Global  size=0x24
// sig: undefined FUN_00552944(void)
// callers(4): 00546398 FUN_00546398; 00552968 FUN_00552968; 005afa78 FUN_005afa78; 005c01d8 FUN_005c01d8
// callees(1): 00552b30 FUN_00552b30

void FUN_00552944(void)

{
  FUN_00552b30();
  return;
}



//==== 00552968  ns=Global  size=0x1c8
// sig: undefined FUN_00552968(void)
// callers(9): 00546290 FUN_00546290; 00546398 FUN_00546398; 005628e4 FUN_005628e4; 00566594 FUN_00566594; 00566a08 FUN_00566a08; 005a7050 FUN_005a7050; 005ab51c FUN_005ab51c; 005afad4 FUN_005afad4; 005c01d8 FUN_005c01d8
// callees(1): 00552944 FUN_00552944

ulonglong FUN_00552968(void)

{
  undefined *puVar1;
  ulonglong uVar2;
  uint *puVar3;
  uint uVar4;
  uint uVar5;
  int iVar7;
  ulonglong uVar6;
  uint *puVar8;
  uint uVar10;
  ulonglong uVar9;
  longlong lVar11;
  
  puVar1 = PTR_DAT_0071b280;
  iVar7 = *(int *)(PTR_DAT_0071b280 + 0x9c4) + 1;
  *(int *)(PTR_DAT_0071b280 + 0x9c4) = iVar7;
  if (0x26f < iVar7) {
    if (0x270 < iVar7) {
      FUN_00552944(0x3579abcd);
    }
    puVar3 = (uint *)(puVar1 + 0x634);
    lVar11 = 0xe3;
    *(undefined4 *)(puVar1 + 0x9c4) = 0;
    uVar10 = *(uint *)puVar1;
    uVar5 = *(uint *)(puVar1 + 4);
    do {
      uVar4 = uVar5;
      puVar8 = puVar3 + -0x18b;
      puVar3[-0x18d] =
           (uVar10 & 0x80000000 | uVar4 & 0x7fffffff) >> 1 ^
           ((uVar4 & 1) - 1 & 0x66f74f21) + 0x9908b0df ^ *puVar3;
      puVar3 = puVar3 + 1;
      lVar11 = lVar11 + -1;
      uVar10 = uVar4;
      uVar5 = *puVar8;
    } while (lVar11 != 0);
    lVar11 = 0x18c;
    puVar3 = (uint *)puVar1;
    uVar10 = *puVar8;
    do {
      uVar5 = uVar10;
      uVar10 = 0x9908b0df;
      if ((uVar5 & 1) == 0) {
        uVar10 = 0;
      }
      puVar3[0xe3] = (uVar4 & 0x80000000 | uVar5 & 0x7fffffff) >> 1 ^ uVar10 ^ *puVar3;
      puVar8 = puVar3 + 0xe5;
      lVar11 = lVar11 + -1;
      puVar3 = puVar3 + 1;
      uVar4 = uVar5;
      uVar10 = *puVar8;
    } while (lVar11 != 0);
    *(uint *)(puVar1 + 0x9bc) =
         (uVar5 & 0x80000000 | *(uint *)puVar1 & 0x7fffffff) >> 1 ^
         ((*(uint *)puVar1 & 1) - 1 & 0x66f74f21) + 0x9908b0df ^ *(uint *)(puVar1 + 0x630);
  }
  uVar10 = *(uint *)(puVar1 + *(int *)(puVar1 + 0x9c4) * 4) ^ *(uint *)(puVar1 + 0x9d0);
  uVar2 = (ulonglong)uVar10;
  uVar9 = uVar2 ^ (((ulonglong)*(uint *)(puVar1 + 0x9c8) & 0x7f) << 0x19 |
                  (ulonglong)(*(uint *)(puVar1 + 0x9c8) >> 7));
  uVar6 = (((ulonglong)uVar10 & 0x1ffffff) << 7 | (ulonglong)(uVar10 >> 0x19)) ^
          (ulonglong)*(uint *)(puVar1 + 0x9cc);
  *(int *)(puVar1 + 0x9c8) = (int)uVar9;
  uVar2 = uVar2 & uVar9 | uVar6 & ~uVar2;
  *(int *)(puVar1 + 0x9cc) = (int)uVar6;
  *(int *)(puVar1 + 0x9d0) = (int)uVar2;
  return uVar2;
}



//==== 00552b30  ns=Global  size=0xa4
// sig: undefined FUN_00552b30(void)
// callers(1): 00552944 FUN_00552944
// callees(4): 005528c4 FUN_005528c4; 005d0140 libc::memset; 00650684 sys::sys_time_get_system_time; 08000091 syscall::syscall_sys_time_get_current_time

void FUN_00552b30(undefined4 param_1)

{
  undefined4 local_140 [3];
  undefined1 auStack_134 [8];
  undefined1 auStack_12c [244];
  
  libc::memset(local_140,0,0x100);
  local_140[0] = param_1;
  sys::sys_time_get_system_time();
  syscall::syscall_sys_time_get_current_time(auStack_134,auStack_12c);
  FUN_005528c4(local_140,0x40);
  return;
}



//==== 00552bd4  ns=Global  size=0x28
// sig: undefined FUN_00552bd4(void)
// callers(0): 
// callees(1): 005531f4 FUN_005531f4

undefined4 FUN_00552bd4(void)

{
  undefined4 uVar1;
  
  uVar1 = FUN_005531f4();
  return uVar1;
}



//==== 00552bfc  ns=Global  size=0x28
// sig: undefined FUN_00552bfc(void)
// callers(0): 
// callees(1): 005531f4 FUN_005531f4

undefined4 FUN_00552bfc(void)

{
  undefined4 uVar1;
  
  uVar1 = FUN_005531f4();
  return uVar1;
}



//==== 00552c24  ns=Global  size=0xe0
// sig: undefined FUN_00552c24(void)
// callers(12): 0053bdfc FUN_0053bdfc; 0053bef8 FUN_0053bef8; 0053c038 FUN_0053c038; 0053c114 FUN_0053c114; 0053c21c FUN_0053c21c; 0053c308 FUN_0053c308; 0053c3f4 FUN_0053c3f4; 0053c4e0 FUN_0053c4e0; 0053dedc FUN_0053dedc; 0053e008 FUN_0053e008; 005450d8 FUN_005450d8; 005a23d0 FUN_005a23d0
// callees(2): 00553188 FUN_00553188; 00553204 FUN_00553204

int FUN_00552c24(char *param_1,int *param_2)

{
  int iVar1;
  int iVar2;
  int local_30 [4];
  
  if ((param_1 == (char *)0x0) || (*param_1 != '\x01')) {
    iVar2 = 2;
  }
  else {
    iVar2 = FUN_00553204(local_30);
    if (iVar2 == 0) {
      if (*(int *)(param_1 + 8) == local_30[0]) {
        if (*(int *)(param_1 + 4) == 0) {
          iVar2 = 0x386;
        }
        else {
          iVar1 = *(int *)(param_1 + 4) + -1;
          *(int *)(param_1 + 4) = iVar1;
          if (param_2 != (int *)0x0) {
            *param_2 = iVar1;
          }
          if (*(int *)(param_1 + 4) == 0) {
            param_1[8] = '\0';
            param_1[9] = '\0';
            param_1[10] = '\0';
            param_1[0xb] = '\0';
            iVar2 = FUN_00553188(param_1);
          }
        }
      }
      else {
        iVar2 = 0x385;
      }
    }
  }
  return iVar2;
}



//==== 00552d04  ns=Global  size=0x15c
// sig: undefined FUN_00552d04(void)
// callers(0): 
// callees(2): 005530b8 FUN_005530b8; 00553204 FUN_00553204

/* WARNING: Removing unreachable block (ram,0x00552dfc) */
/* WARNING: Removing unreachable block (ram,0x00552e14) */

ulonglong FUN_00552d04(char *param_1,int *param_2)

{
  int iVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  undefined1 local_30 [4];
  int local_2c [3];
  
  if (((param_1 != (char *)0x0) && (*param_1 == '\x01')) && (param_2 != (int *)0x0)) {
    *param_2 = 0;
    uVar2 = FUN_00553204(local_2c);
    if ((int)uVar2 == 0) {
      if ((*(int *)(param_1 + 4) == 0) || (*(int *)(param_1 + 8) != local_2c[0])) {
        uVar3 = FUN_005530b8(param_1,local_30);
        if (uVar3 != 0) {
          return uVar3 & 0xffffffff;
        }
      }
      else {
        iVar1 = *(int *)(param_1 + 4) + 1;
        *(int *)(param_1 + 4) = iVar1;
        *param_2 = iVar1;
      }
    }
    return uVar2 & 0xffffffff;
  }
  return 2;
}



//==== 00552e60  ns=Global  size=0x104
// sig: undefined FUN_00552e60(void)
// callers(12): 0053bdfc FUN_0053bdfc; 0053bef8 FUN_0053bef8; 0053c038 FUN_0053c038; 0053c114 FUN_0053c114; 0053c21c FUN_0053c21c; 0053c308 FUN_0053c308; 0053c3f4 FUN_0053c3f4; 0053c4e0 FUN_0053c4e0; 0053dedc FUN_0053dedc; 0053e008 FUN_0053e008; 00545114 FUN_00545114; 005a2388 FUN_005a2388
// callees(2): 00553048 FUN_00553048; 00553204 FUN_00553204

ulonglong FUN_00552e60(char *param_1,undefined4 *param_2)

{
  ulonglong uVar1;
  ulonglong uVar2;
  int local_40 [6];
  
  if ((param_1 == (char *)0x0) || (*param_1 != '\x01')) {
    uVar2 = 2;
  }
  else {
    uVar1 = FUN_00553204(local_40);
    uVar2 = uVar1;
    if ((int)uVar1 == 0) {
      if ((*(int *)(param_1 + 4) == 0) || (*(int *)(param_1 + 8) != local_40[0])) {
        uVar2 = FUN_00553048(param_1);
        if ((uVar2 != 0) || (uVar2 = FUN_00553204(param_1 + 8), uVar2 != 0)) goto LAB_00552ea8;
        *(int *)(param_1 + 4) = *(int *)(param_1 + 4) + 1;
      }
      else {
        *(int *)(param_1 + 4) = *(int *)(param_1 + 4) + 1;
      }
      uVar2 = uVar1;
      if (param_2 != (undefined4 *)0x0) {
        *param_2 = *(undefined4 *)(param_1 + 4);
      }
    }
  }
LAB_00552ea8:
  return uVar2 & 0xffffffff;
}



//==== 00552f64  ns=Global  size=0x78
// sig: undefined FUN_00552f64(void)
// callers(2): 0053f6bc FUN_0053f6bc; 005a5404 FUN_005a5404
// callees(1): 00553254 FUN_00553254

int FUN_00552f64(char *param_1)

{
  int iVar1;
  
  iVar1 = 2;
  if (((param_1 != (char *)0x0) && (*param_1 == '\x01')) &&
     (iVar1 = FUN_00553254(param_1), iVar1 == 0)) {
    *param_1 = '\0';
    return 0;
  }
  return iVar1;
}



//==== 00552fdc  ns=Global  size=0x6c
// sig: undefined FUN_00552fdc(void)
// callers(2): 0053f7e4 FUN_0053f7e4; 005a557c FUN_005a557c
// callees(1): 005532e4 FUN_005532e4

int FUN_00552fdc(undefined1 *param_1)

{
  int iVar1;
  
  iVar1 = 2;
  if (param_1 != (undefined1 *)0x0) {
    *(undefined4 *)(param_1 + 8) = 0;
    *param_1 = 0;
    *(undefined4 *)(param_1 + 4) = 0;
    iVar1 = FUN_005532e4(param_1);
    if (iVar1 == 0) {
      *param_1 = 1;
    }
  }
  return iVar1;
}



//==== 00553048  ns=Global  size=0x70
// sig: undefined FUN_00553048(void)
// callers(1): 00552e60 FUN_00552e60
// callees(0): 

int FUN_00553048(int param_1)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  
  iVar3 = 2;
  if ((param_1 != 0) && (*(uint **)(param_1 + 0x10) != (uint *)0x0)) {
    uVar1 = **(uint **)(param_1 + 0x10);
    syscall();
    uVar2 = (int)uVar1 >> 0x1f;
    iVar3 = ((int)(((uVar2 ^ uVar1) - uVar2) + -1) >> 0x1f & 0xfffffc7cU) + 900;
  }
  return iVar3;
}



//==== 005530b8  ns=Global  size=0xd0
// sig: undefined FUN_005530b8(void)
// callers(1): 00552d04 FUN_00552d04
// callees(0): 

int FUN_005530b8(char *param_1,undefined1 *param_2)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  
  iVar2 = 2;
  if ((((param_1 != (char *)0x0) && (*param_1 == '\x01')) && (*(int *)(param_1 + 0x10) != 0)) &&
     (param_2 != (undefined1 *)0x0)) {
    *param_2 = 0;
    syscall();
    uVar3 = **(uint **)(param_1 + 0x10) ^ 0x8001000a;
    uVar1 = (int)uVar3 >> 0x1f;
    if (**(uint **)(param_1 + 0x10) == 0) {
      *param_2 = 1;
      return 0;
    }
    iVar2 = ((int)(((uVar1 ^ uVar3) - uVar1) + -1) >> 0x1f & 0xfffffc7cU) + 900;
  }
  return iVar2;
}



//==== 00553188  ns=Global  size=0x6c
// sig: undefined FUN_00553188(void)
// callers(1): 00552c24 FUN_00552c24
// callees(0): 

int FUN_00553188(int param_1)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  
  iVar3 = 2;
  if ((param_1 != 0) && (*(uint **)(param_1 + 0x10) != (uint *)0x0)) {
    uVar1 = **(uint **)(param_1 + 0x10);
    syscall();
    uVar2 = (int)uVar1 >> 0x1f;
    iVar3 = ((int)(((uVar2 ^ uVar1) - uVar2) + -1) >> 0x1f & 0xfffffc7cU) + 900;
  }
  return iVar3;
}



//==== 005531f4  ns=Global  size=0x8
// sig: undefined FUN_005531f4(void)
// callers(2): 00552bd4 FUN_00552bd4; 00552bfc FUN_00552bfc
// callees(0): 

undefined8 FUN_005531f4(void)

{
  return 0;
}



//==== 005531fc  ns=Global  size=0x8
// sig: undefined FUN_005531fc(void)
// callers(0): 
// callees(0): 

undefined8 FUN_005531fc(void)

{
  return 0;
}



//==== 00553204  ns=Global  size=0x50
// sig: undefined FUN_00553204(void)
// callers(3): 00552c24 FUN_00552c24; 00552d04 FUN_00552d04; 00552e60 FUN_00552e60
// callees(1): 006505c4 sys::sys_ppu_thread_get_id

undefined8 FUN_00553204(undefined4 *param_1)

{
  undefined8 uVar1;
  undefined1 local_20 [4];
  undefined4 uStack_1c;
  
  uVar1 = 2;
  if (param_1 != (undefined4 *)0x0) {
    sys::sys_ppu_thread_get_id(local_20);
    uVar1 = 0;
    *param_1 = uStack_1c;
  }
  return uVar1;
}



//==== 00553254  ns=Global  size=0x90
// sig: undefined FUN_00553254(void)
// callers(1): 00552f64 FUN_00552f64
// callees(1): 005519f0 FUN_005519f0

undefined8 FUN_00553254(int param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  
  uVar2 = 2;
  if (param_1 != 0) {
    if (*(int **)(param_1 + 0x10) != (int *)0x0) {
      syscall();
      uVar2 = 900;
      if (**(int **)(param_1 + 0x10) == 0) {
        lVar1 = FUN_005519f0(param_1 + 0x10);
        uVar2 = 100;
        if (lVar1 == 0) {
          uVar2 = 0;
          *(undefined4 *)(param_1 + 0x10) = 0;
        }
      }
    }
  }
  return uVar2;
}



//==== 005532e4  ns=Global  size=0xc8
// sig: undefined FUN_005532e4(void)
// callers(1): 00552fdc FUN_00552fdc
// callees(1): 00551de8 FUN_00551de8

int FUN_005532e4(int param_1)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  
  iVar3 = 2;
  if (param_1 != 0) {
    iVar3 = 100;
    *(undefined4 *)(param_1 + 0x10) = 0;
    iVar2 = FUN_00551de8(param_1 + 0x10,4);
    if (iVar2 == 0) {
      syscall();
      uVar1 = (int)*(uint *)(param_1 + 0x10) >> 0x1f;
      iVar3 = ((int)(((uVar1 ^ *(uint *)(param_1 + 0x10)) - uVar1) + -1) >> 0x1f & 0xfffffc7cU) +
              900;
    }
  }
  return iVar3;
}



//==== 005533ac  ns=Global  size=0x28
// sig: undefined FUN_005533ac(void)
// callers(1): 0058d778 FUN_0058d778
// callees(0): 

undefined4 FUN_005533ac(undefined4 *param_1)

{
  return *param_1;
}



//==== 005533d4  ns=Global  size=0x28
// sig: undefined FUN_005533d4(void)
// callers(4): 00545d44 FUN_00545d44; 0058cab0 FUN_0058cab0; 0058d010 FUN_0058d010; 0058d778 FUN_0058d778
// callees(0): 

undefined4 FUN_005533d4(int param_1)

{
  return *(undefined4 *)(param_1 + 4);
}



//==== 005533fc  ns=Global  size=0x4c
// sig: undefined FUN_005533fc(void)
// callers(1): 0058ac48 FUN_0058ac48
// callees(0): 

void FUN_005533fc(undefined1 *param_1,undefined4 param_2,undefined4 param_3)

{
  undefined1 local_10;
  undefined1 uStack_f;
  undefined1 uStack_e;
  undefined1 uStack_d;
  undefined1 local_c;
  undefined1 uStack_b;
  undefined1 uStack_a;
  undefined1 uStack_9;
  
  uStack_f = (undefined1)((uint)param_2 >> 0x10);
  uStack_e = (undefined1)((uint)param_2 >> 8);
  uStack_d = (undefined1)param_2;
  local_c = (undefined1)((uint)param_3 >> 0x18);
  uStack_b = (undefined1)((uint)param_3 >> 0x10);
  uStack_a = (undefined1)((uint)param_3 >> 8);
  uStack_9 = (undefined1)param_3;
  local_10 = (undefined1)((uint)param_2 >> 0x18);
  param_1[7] = uStack_9;
  *param_1 = local_10;
  param_1[1] = uStack_f;
  param_1[2] = uStack_e;
  param_1[3] = uStack_d;
  param_1[4] = local_c;
  param_1[5] = uStack_b;
  param_1[6] = uStack_a;
  return;
}



//==== 00553448  ns=Global  size=0x68
// sig: undefined FUN_00553448(void)
// callers(2): 0058bf7c FUN_0058bf7c; 0058c274 FUN_0058c274
// callees(0): 

int FUN_00553448(int *param_1)

{
  if (*param_1 != 9) {
    return -1;
  }
  return param_1[1];
}



//==== 005534b0  ns=Global  size=0x68
// sig: undefined FUN_005534b0(void)
// callers(2): 00545d44 FUN_00545d44; 0058cab0 FUN_0058cab0
// callees(0): 

int FUN_005534b0(int *param_1)

{
  if (*param_1 != 9) {
    return -1;
  }
  return param_1[2];
}



//==== 00553518  ns=Global  size=0xb4
// sig: undefined FUN_00553518(void)
// callers(5): 00545d44 FUN_00545d44; 00580ca0 FUN_00580ca0; 00580e18 FUN_00580e18; 0058bf7c FUN_0058bf7c; 0058c274 FUN_0058c274
// callees(0): 

undefined4 FUN_00553518(int *param_1,undefined4 param_2,undefined4 param_3)

{
  undefined1 local_10;
  undefined1 uStack_f;
  undefined1 uStack_e;
  undefined1 uStack_d;
  undefined1 local_c;
  undefined1 uStack_b;
  undefined1 uStack_a;
  undefined1 uStack_9;
  
  if (*param_1 != 9) {
    return 0xffffffff;
  }
  *(undefined1 *)(param_1 + 1) = 0;
  *(undefined1 *)((int)param_1 + 5) = 0;
  *(undefined1 *)((int)param_1 + 6) = 0;
  *(undefined1 *)((int)param_1 + 7) = 0;
  *(undefined1 *)(param_1 + 2) = 0;
  *(undefined1 *)((int)param_1 + 9) = 0;
  *(undefined1 *)((int)param_1 + 10) = 0;
  *(undefined1 *)((int)param_1 + 0x13) = 0;
  *(undefined1 *)((int)param_1 + 0xb) = 0;
  *(undefined1 *)(param_1 + 3) = 0;
  *(undefined1 *)((int)param_1 + 0xd) = 0;
  *(undefined1 *)((int)param_1 + 0xe) = 0;
  *(undefined1 *)((int)param_1 + 0xf) = 0;
  *(undefined1 *)(param_1 + 4) = 0;
  *(undefined1 *)((int)param_1 + 0x11) = 0;
  *(undefined1 *)((int)param_1 + 0x12) = 0;
  uStack_f = (undefined1)((uint)param_2 >> 0x10);
  uStack_e = (undefined1)((uint)param_2 >> 8);
  local_10 = (undefined1)((uint)param_2 >> 0x18);
  uStack_d = (undefined1)param_2;
  *(undefined1 *)(param_1 + 1) = local_10;
  *(undefined1 *)((int)param_1 + 7) = uStack_d;
  *(undefined1 *)((int)param_1 + 5) = uStack_f;
  *(undefined1 *)((int)param_1 + 6) = uStack_e;
  uStack_9 = (undefined1)param_3;
  uStack_b = (undefined1)((uint)param_3 >> 0x10);
  uStack_a = (undefined1)((uint)param_3 >> 8);
  local_c = (undefined1)((uint)param_3 >> 0x18);
  *(undefined1 *)((int)param_1 + 9) = uStack_b;
  *(undefined1 *)(param_1 + 2) = local_c;
  *(undefined1 *)((int)param_1 + 10) = uStack_a;
  *(undefined1 *)((int)param_1 + 0xb) = uStack_9;
  return 0;
}



//==== 005535cc  ns=Global  size=0x90
// sig: undefined FUN_005535cc(void)
// callers(0): 
// callees(1): 005cccec libc::strcpy
// strings: 0067d1d8: 'ERROR'

void FUN_005535cc(uint *param_1,int param_2,int param_3)

{
  if (*param_1 < 10) {
                    /* WARNING: Could not recover jumptable at 0x00553618. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)(PTR_DAT_0071b284 + *(int *)(PTR_DAT_0071b284 + *param_1 * 4)))(param_1,param_1);
    return;
  }
  libc::strcpy(param_2,PTR_s_ERROR_0071b290,param_3);
  *(undefined1 *)(param_2 + param_3 + -1) = 0;
  return;
}



//==== 0055372c  ns=Global  size=0x140
// sig: undefined FUN_0055372c(void)
// callers(3): 0055386c FUN_0055386c; 00553918 FUN_00553918; 0055b3ac FUN_0055b3ac
// callees(4): 00553b40 FUN_00553b40; 00553c74 FUN_00553c74; 00553f04 FUN_00553f04; 00554034 FUN_00554034

void FUN_0055372c(int param_1,int *param_2)

{
  param_2 = (int *)*param_2;
  FUN_00553f04(param_1,param_2);
  if (*param_2 != 9) {
    FUN_00553b40(param_1,param_2 + 1);
    FUN_00553f04(param_1,param_2 + 5);
    return;
  }
  if (*(int *)(param_1 + 0x10) == 2) {
    *(undefined1 *)((int)param_2 + 0x13) = 0;
    *(undefined1 *)(param_2 + 1) = 0;
    *(undefined1 *)((int)param_2 + 5) = 0;
    *(undefined1 *)((int)param_2 + 6) = 0;
    *(undefined1 *)((int)param_2 + 7) = 0;
    *(undefined1 *)(param_2 + 2) = 0;
    *(undefined1 *)((int)param_2 + 9) = 0;
    *(undefined1 *)((int)param_2 + 10) = 0;
    *(undefined1 *)((int)param_2 + 0xb) = 0;
    *(undefined1 *)(param_2 + 3) = 0;
    *(undefined1 *)((int)param_2 + 0xd) = 0;
    *(undefined1 *)((int)param_2 + 0xe) = 0;
    *(undefined1 *)((int)param_2 + 0xf) = 0;
    *(undefined1 *)(param_2 + 4) = 0;
    *(undefined1 *)((int)param_2 + 0x11) = 0;
    *(undefined1 *)((int)param_2 + 0x12) = 0;
  }
  FUN_00554034(param_1,param_2 + 1,0x10);
  FUN_00553c74(param_1,8);
  FUN_00553f04(param_1,param_2 + 5);
  return;
}



//==== 0055386c  ns=Global  size=0xac
// sig: undefined FUN_0055386c(void)
// callers(0): 
// callees(4): 0055372c FUN_0055372c; 0055442c FUN_0055442c; 0055c064 FUN_0055c064; 005c8510 libc::strlen

undefined4 FUN_0055386c(undefined8 param_1)

{
  undefined4 uVar1;
  size_t sVar2;
  int iVar3;
  undefined1 local_60 [8];
  undefined1 auStack_58 [24];
  undefined1 auStack_40 [32];
  
  sVar2 = libc::strlen((char *)param_1);
  FUN_0055c064(param_1,sVar2,auStack_58);
  iVar3 = FUN_0055442c(auStack_40,auStack_58,auStack_40,2);
  uVar1 = 0xffffffff;
  if (iVar3 != 0) {
    FUN_0055372c(auStack_40,local_60);
    uVar1 = 0;
  }
  return uVar1;
}



//==== 00553918  ns=Global  size=0xa8
// sig: undefined FUN_00553918(void)
// callers(0): 
// callees(3): 0055372c FUN_0055372c; 0055442c FUN_0055442c; 0055bec0 FUN_0055bec0

undefined4 FUN_00553918(undefined8 param_1,undefined4 param_2)

{
  undefined4 uVar1;
  int iVar2;
  undefined1 local_60 [8];
  undefined1 auStack_58 [24];
  undefined1 auStack_40 [32];
  
  iVar2 = FUN_0055442c(auStack_40,auStack_58,auStack_40,1);
  uVar1 = 0xffffffff;
  if (iVar2 != 0) {
    FUN_0055372c(auStack_40,local_60);
    FUN_0055bec0(auStack_58,0x18,param_2);
    uVar1 = 0;
  }
  return uVar1;
}



//==== 005539c0  ns=Global  size=0x154
// sig: undefined FUN_005539c0(void)
// callers(1): 00553d84 FUN_00553d84
// callees(0): 

undefined8 FUN_005539c0(int *param_1,ushort *param_2)

{
  byte bVar1;
  ushort uVar2;
  undefined8 uVar3;
  byte *pbVar4;
  
  if (*param_1 != -0x54324346) {
    param_1[6] = 5;
    return 0;
  }
  if (param_1[6] != 0) {
    param_1[6] = param_1[6];
    return 0;
  }
  pbVar4 = (byte *)param_1[3];
  if ((pbVar4 < (byte *)param_1[2]) && (pbVar4 != (byte *)0x0)) {
    if ((uint)(param_1[2] - (int)pbVar4) < 2) {
      param_1[6] = 8;
      return 0;
    }
    if (param_1[4] == 1) {
      uVar2 = *param_2;
      if (0x7ffe < uVar2) goto LAB_00553a4c;
      if (0x7f < uVar2) {
        *pbVar4 = (byte)(uVar2 >> 8) | 0x80;
        uVar2 = *param_2;
        pbVar4 = (byte *)(param_1[3] + 1);
        param_1[3] = (int)pbVar4;
      }
      *pbVar4 = (byte)uVar2;
      pbVar4 = (byte *)param_1[3];
    }
    else if (param_1[4] == 2) {
      bVar1 = *pbVar4;
      *param_2 = (ushort)bVar1;
      if ((bVar1 & 0x80) != 0) {
        uVar2 = (ushort)(((ulonglong)bVar1 & 0x7f) << 8);
        *param_2 = uVar2;
        param_1[3] = (int)(pbVar4 + 1);
        *param_2 = uVar2 | pbVar4[1];
      }
      if (0x7ffe < *param_2) {
        param_1[6] = 2;
        return 0;
      }
      pbVar4 = (byte *)param_1[3];
    }
    uVar3 = 1;
    param_1[3] = (int)(pbVar4 + 1);
  }
  else {
LAB_00553a4c:
    uVar3 = 0;
    param_1[6] = 2;
  }
  return uVar3;
}



//==== 00553b14  ns=Global  size=0x2c
// sig: undefined FUN_00553b14(void)
// callers(0): 
// callees(0): 

undefined8 FUN_00553b14(undefined4 *param_1)

{
  param_1[6] = 0;
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  return 1;
}



//==== 00553b40  ns=Global  size=0x134
// sig: undefined FUN_00553b40(void)
// callers(299): 00551208 FUN_00551208; 0055372c FUN_0055372c; 00553d84 FUN_00553d84; 00558fe0 FUN_00558fe0; 00559050 FUN_00559050; 00559198 FUN_00559198; 0055b4dc FUN_0055b4dc; 0055b534 FUN_0055b534; 0055b70c FUN_0055b70c; 0055b90c FUN_0055b90c; 0055bac0 FUN_0055bac0; 0055bbe8 FUN_0055bbe8; 005763fc FUN_005763fc; 005798e8 FUN_005798e8; 0057b678 FUN_0057b678; 00587888 FUN_00587888; 005878d4 FUN_005878d4; 0058ece0 FUN_0058ece0; 0058ed3c FUN_0058ed3c; 0058edb0 FUN_0058edb0; 0058ee0c FUN_0058ee0c; 0058ee98 FUN_0058ee98; 0058f218 FUN_0058f218; 0058f424 FUN_0058f424; 0058f5f4 FUN_0058f5f4
// callees(1): 005c5ad0 libc::memcpy

uint FUN_00553b40(int *param_1,void *param_2,size_t param_3)

{
  int iVar1;
  void *__dest;
  
  if (*param_1 != -0x54324346) {
    __dest = (void *)0x0;
    param_1[6] = 5;
    goto LAB_00553b80;
  }
  if (param_1[6] != 0) {
    param_1[6] = param_1[6];
    return 0;
  }
  __dest = (void *)param_1[3];
  if (__dest < (void *)param_1[2]) {
    if (__dest != (void *)0x0) {
      if (param_2 != (void *)0x0) {
        if ((uint)(param_1[2] - (int)__dest) < param_3) {
          __dest = (void *)0x0;
          param_1[6] = 8;
        }
        else {
          if (param_1[4] == 1) {
            libc::memcpy(__dest,param_2,param_3);
            __dest = (void *)param_1[3];
          }
          else if (param_1[4] == 2) {
            libc::memcpy(param_2,__dest,param_3);
            __dest = (void *)param_1[3];
          }
          iVar1 = (int)__dest + param_3;
          __dest = (void *)0x1;
          param_1[3] = iVar1;
        }
        goto LAB_00553b80;
      }
      goto LAB_00553c08;
    }
  }
  else {
LAB_00553c08:
    __dest = (void *)0x0;
  }
  param_1[6] = 2;
LAB_00553b80:
  return (uint)__dest & 1;
}



//==== 00553c74  ns=Global  size=0x110
// sig: undefined FUN_00553c74(void)
// callers(205): 00551324 FUN_00551324; 00551488 FUN_00551488; 0055372c FUN_0055372c; 00554ef8 FUN_00554ef8; 0055b560 FUN_0055b560; 0055b70c FUN_0055b70c; 0055b80c FUN_0055b80c; 0055b8a8 FUN_0055b8a8; 0055bac0 FUN_0055bac0; 0055bb70 FUN_0055bb70; 0055bbe8 FUN_0055bbe8; 0057b678 FUN_0057b678; 0057bd80 FUN_0057bd80; 0058fb30 FUN_0058fb30; 0058fbac FUN_0058fbac; 00590680 FUN_00590680; 0059096c FUN_0059096c; 00590b28 FUN_00590b28; 00590c60 FUN_00590c60; 00590d88 FUN_00590d88; 00590e4c FUN_00590e4c; 00590fcc FUN_00590fcc; 00591468 FUN_00591468; 00592200 FUN_00592200; 00592434 FUN_00592434
// callees(1): 005d0140 libc::memset

undefined4 FUN_00553c74(int *param_1,uint param_2)

{
  undefined4 uVar1;
  uint uVar2;
  
  if (*param_1 == -0x54324346) {
    if (param_1[6] != 0) {
      param_1[6] = param_1[6];
      return 0;
    }
    uVar2 = param_1[3];
    if (uVar2 < (uint)param_1[2]) {
      if (uVar2 == 0) {
        param_1[6] = 2;
        uVar1 = 0;
      }
      else if (param_1[2] - uVar2 < param_2) {
        uVar1 = 0;
        param_1[6] = 8;
      }
      else {
        if (param_1[4] == 1) {
          libc::memset(uVar2,0,param_2);
          uVar2 = param_1[3];
        }
        uVar1 = 1;
        param_1[3] = uVar2 + param_2;
      }
    }
    else {
      uVar1 = 0;
      param_1[6] = 2;
    }
  }
  else {
    uVar1 = 0;
    param_1[6] = 5;
  }
  return uVar1;
}



//==== 00553d84  ns=Global  size=0x180
// sig: undefined FUN_00553d84(void)
// callers(1): 0059649c FUN_0059649c
// callees(3): 005539c0 FUN_005539c0; 00553b40 FUN_00553b40; 005565bc FUN_005565bc

undefined8 FUN_00553d84(int *param_1,int param_2)

{
  int iVar1;
  int iVar2;
  undefined8 uVar3;
  short sVar4;
  ushort local_30 [8];
  
  iVar1 = param_1[3];
  if (*param_1 != -0x54324346) {
    param_1[6] = 5;
    return 0;
  }
  iVar2 = param_1[6];
  if (iVar2 != 0) goto LAB_00553e30;
  if (param_2 == 0) {
    param_1[6] = 2;
    return 0;
  }
  if (param_1[4] == 1) {
    sVar4 = FUN_005565bc(param_2,0x7fff);
    local_30[0] = sVar4 + 1;
    if (local_30[0] < 0x7fff) goto LAB_00553e14;
LAB_00553eac:
    uVar3 = 0;
    param_1[6] = 9;
  }
  else {
LAB_00553e14:
    FUN_005539c0(param_1,local_30);
    iVar2 = param_1[6];
    if (iVar2 != 0) {
LAB_00553e30:
      param_1[6] = iVar2;
      return 0;
    }
    FUN_00553b40(param_1,param_2,local_30[0]);
    if ((param_1[6] != 0) || (*(char *)(param_1[3] + -1) != '\0')) {
      param_1[3] = iVar1;
      if (param_1[6] != 0) {
        return 0;
      }
      if (*(char *)(iVar1 + -1) != '\0') goto LAB_00553eac;
    }
    uVar3 = 1;
  }
  return uVar3;
}



//==== 00553f04  ns=Global  size=0x130
// sig: undefined FUN_00553f04(void)
// callers(275): 00551208 FUN_00551208; 00551324 FUN_00551324; 00551488 FUN_00551488; 0055372c FUN_0055372c; 00554ef8 FUN_00554ef8; 00558f88 FUN_00558f88; 00558fe0 FUN_00558fe0; 00559050 FUN_00559050; 00559198 FUN_00559198; 0055b450 FUN_0055b450; 0055b4b4 FUN_0055b4b4; 0055b4dc FUN_0055b4dc; 0055b560 FUN_0055b560; 0055b80c FUN_0055b80c; 0055b8a8 FUN_0055b8a8; 0055b90c FUN_0055b90c; 0055ba08 FUN_0055ba08; 0055bac0 FUN_0055bac0; 0055bb70 FUN_0055bb70; 0055bbe8 FUN_0055bbe8; 0055bcc4 FUN_0055bcc4; 005763fc FUN_005763fc; 00576994 FUN_00576994; 005798e8 FUN_005798e8; 0057b678 FUN_0057b678
// callees(2): 00551fd4 FUN_00551fd4; 0055200c FUN_0055200c

undefined4 FUN_00553f04(int *param_1,undefined4 *param_2)

{
  uint uVar1;
  int iVar2;
  
  if (*param_1 != -0x54324346) {
    param_1[6] = 5;
    return 0;
  }
  if (param_1[6] != 0) {
    param_1[6] = param_1[6];
    return 0;
  }
  uVar1 = param_1[3];
  if ((uint)param_1[2] <= uVar1) {
    param_1[6] = 2;
    return 0;
  }
  if (uVar1 == 0) {
    param_1[6] = 2;
    return 0;
  }
  if (param_1[2] - uVar1 < 4) {
    param_1[6] = 8;
    return 0;
  }
  if (param_1[4] == 1) {
    iVar2 = FUN_00551fd4(uVar1,*param_2);
  }
  else {
    if (param_1[4] != 2) goto LAB_00553fc4;
    iVar2 = FUN_0055200c(uVar1,param_2);
  }
  if (iVar2 == 0) {
    param_1[3] = param_1[3] + 4;
    return 1;
  }
LAB_00553fc4:
  param_1[6] = 0;
  return 0;
}



//==== 00554034  ns=Global  size=0x12c
// sig: undefined FUN_00554034(void)
// callers(1): 0055372c FUN_0055372c
// callees(2): 00552068 FUN_00552068; 005520f0 FUN_005520f0

undefined4 FUN_00554034(int *param_1,undefined8 *param_2)

{
  uint uVar1;
  int iVar2;
  
  if (*param_1 != -0x54324346) {
    param_1[6] = 5;
    return 0;
  }
  if (param_1[6] != 0) {
    param_1[6] = param_1[6];
    return 0;
  }
  uVar1 = param_1[3];
  if ((uint)param_1[2] <= uVar1) {
    param_1[6] = 2;
    return 0;
  }
  if (uVar1 == 0) {
    param_1[6] = 2;
    return 0;
  }
  if (param_1[2] - uVar1 < 8) {
    param_1[6] = 8;
    return 0;
  }
  if (param_1[4] == 1) {
    iVar2 = FUN_00552068(uVar1,*param_2);
  }
  else {
    if (param_1[4] != 2) goto LAB_005540f4;
    iVar2 = FUN_005520f0(uVar1,param_2);
  }
  if (iVar2 == 0) {
    param_1[3] = param_1[3] + 8;
    return 1;
  }
LAB_005540f4:
  param_1[6] = 0;
  return 0;
}



//==== 00554160  ns=Global  size=0x130
// sig: undefined FUN_00554160(void)
// callers(28): 00554ef8 FUN_00554ef8; 0055b560 FUN_0055b560; 0055b5c4 FUN_0055b5c4; 0055b5ec FUN_0055b5ec; 0055b690 FUN_0055b690; 0055b70c FUN_0055b70c; 0055b80c FUN_0055b80c; 0055b8a8 FUN_0055b8a8; 0055b90c FUN_0055b90c; 0055ba08 FUN_0055ba08; 005763fc FUN_005763fc; 00576994 FUN_00576994; 005798e8 FUN_005798e8; 0057b678 FUN_0057b678; 0057bd80 FUN_0057bd80; 005864fc FUN_005864fc; 005866d8 FUN_005866d8; 00592200 FUN_00592200; 00592434 FUN_00592434; 005924b0 FUN_005924b0; 0059d380 FUN_0059d380; 0059d8e8 FUN_0059d8e8; 0059f344 FUN_0059f344; 0059f4c0 FUN_0059f4c0; 0059f53c FUN_0059f53c
// callees(2): 00551f1c FUN_00551f1c; 00551f40 FUN_00551f40

undefined4 FUN_00554160(int *param_1,undefined2 *param_2)

{
  uint uVar1;
  int iVar2;
  
  if (*param_1 != -0x54324346) {
    param_1[6] = 5;
    return 0;
  }
  if (param_1[6] != 0) {
    param_1[6] = param_1[6];
    return 0;
  }
  uVar1 = param_1[3];
  if ((uint)param_1[2] <= uVar1) {
    param_1[6] = 2;
    return 0;
  }
  if (uVar1 == 0) {
    param_1[6] = 2;
    return 0;
  }
  if (param_1[2] - uVar1 < 2) {
    param_1[6] = 8;
    return 0;
  }
  if (param_1[4] == 1) {
    iVar2 = FUN_00551f1c(uVar1,*param_2);
  }
  else {
    if (param_1[4] != 2) goto LAB_00554220;
    iVar2 = FUN_00551f40(uVar1,param_2);
  }
  if (iVar2 == 0) {
    param_1[3] = param_1[3] + 2;
    return 1;
  }
LAB_00554220:
  param_1[6] = 0;
  return 0;
}



//==== 00554290  ns=Global  size=0x114
// sig: undefined FUN_00554290(void)
// callers(64): 00554ef8 FUN_00554ef8; 0055b640 FUN_0055b640; 0055b668 FUN_0055b668; 0055b690 FUN_0055b690; 0055b70c FUN_0055b70c; 0055b80c FUN_0055b80c; 0055b90c FUN_0055b90c; 0055ba08 FUN_0055ba08; 0055bac0 FUN_0055bac0; 0055bb70 FUN_0055bb70; 005763fc FUN_005763fc; 00576994 FUN_00576994; 005798e8 FUN_005798e8; 0057b678 FUN_0057b678; 0057bd80 FUN_0057bd80; 005864fc FUN_005864fc; 005865a8 FUN_005865a8; 005866d8 FUN_005866d8; 005868b4 FUN_005868b4; 00587044 FUN_00587044; 005906e8 FUN_005906e8; 005907b8 FUN_005907b8; 00590864 FUN_00590864; 00590900 FUN_00590900; 0059096c FUN_0059096c
// callees(2): 00551e94 FUN_00551e94; 00551eb0 FUN_00551eb0

undefined4 FUN_00554290(int *param_1,undefined1 *param_2)

{
  uint uVar1;
  int iVar2;
  
  if (*param_1 != -0x54324346) {
    param_1[6] = 5;
    return 0;
  }
  if (param_1[6] != 0) {
    param_1[6] = param_1[6];
    return 0;
  }
  uVar1 = param_1[3];
  if ((uint)param_1[2] <= uVar1) {
    param_1[6] = 2;
    return 0;
  }
  if (uVar1 == 0) {
    param_1[6] = 2;
    return 0;
  }
  if (param_1[4] == 1) {
    iVar2 = FUN_00551e94(uVar1,*param_2);
  }
  else {
    if (param_1[4] != 2) goto LAB_00554344;
    iVar2 = FUN_00551eb0(uVar1,param_2);
  }
  if (iVar2 == 0) {
    param_1[3] = param_1[3] + 1;
    return 1;
  }
LAB_00554344:
  param_1[6] = 0;
  return 0;
}



//==== 005543a4  ns=Global  size=0x88
// sig: undefined FUN_005543a4(void)
// callers(17): 0055139c FUN_0055139c; 00551500 FUN_00551500; 00551694 FUN_00551694; 00551830 FUN_00551830; 00554fd4 FUN_00554fd4; 005554c4 FUN_005554c4; 005558c4 FUN_005558c4; 00555e14 FUN_00555e14; 005592f0 FUN_005592f0; 00559a4c FUN_00559a4c; 00559fc4 FUN_00559fc4; 0055a634 FUN_0055a634; 005763fc FUN_005763fc; 00576994 FUN_00576994; 005798e8 FUN_005798e8; 0057b678 FUN_0057b678; 0057bd80 FUN_0057bd80
// callees(0): 

undefined8 FUN_005543a4(int *param_1,int *param_2)

{
  uint uVar1;
  undefined8 uVar2;
  
  if (*param_1 == -0x54324346) {
    if (param_1[6] != 0) {
      param_1[6] = param_1[6];
      return 0;
    }
    uVar1 = param_1[3];
    if ((((uint)param_1[2] < uVar1) || (uVar1 == 0)) || (param_2 == (int *)0x0)) {
      uVar2 = 0;
      param_1[6] = 2;
    }
    else {
      uVar2 = 1;
      *param_2 = uVar1 - param_1[1];
    }
  }
  else {
    uVar2 = 0;
    param_1[6] = 5;
  }
  return uVar2;
}



//==== 0055442c  ns=Global  size=0x78
// sig: undefined FUN_0055442c(void)
// callers(23): 0055139c FUN_0055139c; 00551500 FUN_00551500; 00551694 FUN_00551694; 00551830 FUN_00551830; 0055386c FUN_0055386c; 00553918 FUN_00553918; 00554fd4 FUN_00554fd4; 005554c4 FUN_005554c4; 005558c4 FUN_005558c4; 00555e14 FUN_00555e14; 005592f0 FUN_005592f0; 00559a4c FUN_00559a4c; 00559fc4 FUN_00559fc4; 0055a634 FUN_0055a634; 005763fc FUN_005763fc; 00576994 FUN_00576994; 005798e8 FUN_005798e8; 0057b678 FUN_0057b678; 0057bd80 FUN_0057bd80; 005876b8 FUN_005876b8; 0058779c FUN_0058779c; 005878d4 FUN_005878d4; 0059649c FUN_0059649c
// callees(0): 

undefined8 FUN_0055442c(undefined4 *param_1,uint param_2,uint param_3,undefined4 param_4)

{
  undefined8 uVar1;
  
  uVar1 = 0;
  if (param_1 != (undefined4 *)0x0) {
    param_1[6] = 0;
    *param_1 = 0xabcdbcba;
    param_1[3] = param_2;
    param_1[2] = param_3;
    param_1[4] = param_4;
    param_1[1] = param_2;
    param_1[5] = 0;
    if ((param_2 == 0) || (param_3 == 0)) {
      param_1[6] = 2;
      return 0;
    }
    uVar1 = 1;
    if (param_3 <= param_2) {
      uVar1 = 0;
      param_1[6] = 2;
    }
  }
  return uVar1;
}



//==== 005544a4  ns=Global  size=0x14
// sig: undefined FUN_005544a4(void)
// callers(0): 
// callees(0): 

undefined8 FUN_005544a4(undefined4 param_1,undefined4 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR_DAT_0071b294;
  *(undefined4 *)PTR_DAT_0071b294 = param_1;
  *(undefined4 *)(puVar1 + 4) = param_2;
  return 0;
}



//==== 005544b8  ns=Global  size=0x98
// sig: undefined FUN_005544b8(void)
// callers(1): 0054cf00 FUN_0054cf00
// callees(0): 

undefined8 FUN_005544b8(uint param_1,uint param_2)

{
  undefined4 *puVar1;
  undefined8 uVar2;
  
  uVar2 = 5;
  if ((PTR_DAT_0071b294[8] == '\x01') && (*(int *)(PTR_DAT_0071b294 + 0xc) != 0)) {
    if (*(int *)(PTR_DAT_0071b294 + 0x10) != 0) {
      if (((0xff < param_1) || (*(uint *)(PTR_DAT_0071b294 + 0x14) <= param_2)) ||
         (uVar2 = 0, *(uint *)(param_2 * 4 + *(int *)(PTR_DAT_0071b294 + 0x10)) <= param_1)) {
        return 2;
      }
      puVar1 = (undefined4 *)
               (*(int *)(PTR_DAT_0071b294 + 0xc) +
               (param_1 + param_2 * *(int *)(PTR_DAT_0071b294 + 0x18)) * 0x10);
      puVar1[3] = 0;
      *puVar1 = 0;
      puVar1[2] = 0;
    }
  }
  return uVar2;
}



//==== 00554550  ns=Global  size=0xa8
// sig: undefined FUN_00554550(void)
// callers(1): 0054ceb0 FUN_0054ceb0
// callees(0): 

undefined8 FUN_00554550(uint param_1)

{
  uint uVar1;
  uint *puVar2;
  undefined8 uVar3;
  undefined4 *puVar4;
  ulonglong uVar5;
  
  if (((PTR_DAT_0071b294[8] == '\x01') && (*(int *)(PTR_DAT_0071b294 + 0xc) != 0)) &&
     (*(int *)(PTR_DAT_0071b294 + 0x10) != 0)) {
    uVar3 = 2;
    if (param_1 < *(uint *)(PTR_DAT_0071b294 + 0x14)) {
      puVar2 = (uint *)(*(int *)(PTR_DAT_0071b294 + 0x10) + param_1 * 4);
      uVar1 = *puVar2;
      if (uVar1 != 0) {
        uVar5 = (ulonglong)uVar1;
        puVar4 = (undefined4 *)
                 (*(int *)(PTR_DAT_0071b294 + 0xc) +
                 param_1 * *(int *)(PTR_DAT_0071b294 + 0x18) * 0x10);
        do {
          puVar4[3] = 0;
          *puVar4 = 0;
          puVar4[2] = 0;
          uVar5 = uVar5 - 1;
          puVar4 = puVar4 + 4;
        } while (uVar5 != 0);
      }
      uVar3 = 0;
      *puVar2 = 0;
    }
    return uVar3;
  }
  return 5;
}



//==== 005545f8  ns=Global  size=0x178
// sig: undefined FUN_005545f8(void)
// callers(2): 00554770 FUN_00554770; 0055479c FUN_0055479c
// callees(0): 

undefined8
FUN_005545f8(uint param_1,ulonglong param_2,int param_3,int param_4,int param_5,int param_6)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  undefined4 *puVar4;
  uint *puVar5;
  undefined *puVar6;
  int *piVar7;
  undefined8 uVar8;
  
  puVar6 = PTR_DAT_0071b294;
  if (((PTR_DAT_0071b294[8] == '\x01') && (iVar1 = *(int *)(PTR_DAT_0071b294 + 0xc), iVar1 != 0)) &&
     (*(int *)(PTR_DAT_0071b294 + 0x10) != 0)) {
    if ((param_1 < 0x100) &&
       ((param_2 & 0xffffffff) < (ulonglong)*(uint *)(PTR_DAT_0071b294 + 0x14))) {
      uVar2 = *(uint *)(PTR_DAT_0071b294 + 0x18);
      uVar8 = 0x3eb;
      puVar5 = (uint *)(*(int *)(PTR_DAT_0071b294 + 0x10) + (int)((param_2 & 0xffffffff) << 2));
      uVar3 = *puVar5;
      if (uVar3 <= uVar2) {
        if (param_1 < uVar3) {
          piVar7 = (int *)((param_1 + (int)param_2 * uVar2) * 0x10 + iVar1);
          iVar1 = *piVar7;
        }
        else {
          *puVar5 = param_1 + 1;
          piVar7 = (int *)((param_1 + (int)param_2 * uVar2) * 0x10 + iVar1);
          iVar1 = *piVar7;
        }
        uVar8 = 0x3ea;
        if (iVar1 == 0) {
          puVar4 = *(undefined4 **)puVar6;
          uVar8 = 0;
          piVar7[3] = param_6;
          *piVar7 = param_3;
          piVar7[1] = param_4;
          piVar7[2] = param_5;
          if (puVar4 != (undefined4 *)0x0) {
            (*(code *)*puVar4)(param_1,param_2 & 0xffffffff);
            return 0;
          }
        }
      }
    }
    else {
      uVar8 = 2;
    }
    return uVar8;
  }
  return 5;
}



//==== 00554770  ns=Global  size=0x8
// sig: undefined FUN_00554770(void)
// callers(6): 0054b020 FUN_0054b020; 00554778 FUN_00554778; 00554784 FUN_00554784; 00554790 FUN_00554790; 00585800 FUN_00585800; 00587b00 FUN_00587b00
// callees(1): 005545f8 FUN_005545f8

void FUN_00554770(void)

{
  FUN_005545f8();
  return;
}



//==== 00554778  ns=Global  size=0xc
// sig: undefined FUN_00554778(void)
// callers(0): 
// callees(1): 00554770 FUN_00554770

void FUN_00554778(void)

{
  FUN_00554770();
  return;
}



//==== 00554784  ns=Global  size=0xc
// sig: undefined FUN_00554784(void)
// callers(0): 
// callees(1): 00554770 FUN_00554770

void FUN_00554784(void)

{
  FUN_00554770();
  return;
}



//==== 00554790  ns=Global  size=0xc
// sig: undefined FUN_00554790(void)
// callers(2): 00554b90 FUN_00554b90; 00555c7c FUN_00555c7c
// callees(1): 00554770 FUN_00554770

void FUN_00554790(void)

{
  FUN_00554770();
  return;
}



//==== 0055479c  ns=Global  size=0x10
// sig: undefined FUN_0055479c(void)
// callers(2): 0054cf60 FUN_0054cf60; 00554a50 FUN_00554a50
// callees(1): 005545f8 FUN_005545f8

void FUN_0055479c(void)

{
  FUN_005545f8();
  return;
}



//==== 005547ac  ns=Global  size=0xc8
// sig: undefined FUN_005547ac(void)
// callers(0): 
// callees(0): 

undefined8 FUN_005547ac(uint param_1,uint param_2,int param_3)

{
  uint uVar1;
  int *piVar2;
  undefined8 uVar3;
  
  if (((PTR_DAT_0071b294[8] == '\x01') && (*(int *)(PTR_DAT_0071b294 + 0xc) != 0)) &&
     (*(int *)(PTR_DAT_0071b294 + 0x10) != 0)) {
    if ((param_1 < 0x100) && (param_2 < *(uint *)(PTR_DAT_0071b294 + 0x14))) {
      uVar3 = 0x3eb;
      uVar1 = *(uint *)(param_2 * 4 + *(int *)(PTR_DAT_0071b294 + 0x10));
      if (uVar1 <= *(uint *)(PTR_DAT_0071b294 + 0x18)) {
        if ((uVar1 <= param_1) ||
           (piVar2 = (int *)((*(uint *)(PTR_DAT_0071b294 + 0x18) * param_2 + param_1) * 0x10 +
                            *(int *)(PTR_DAT_0071b294 + 0xc)), *piVar2 == 0)) {
          return 0x3ec;
        }
        uVar3 = 0;
        piVar2[2] = 0;
        *piVar2 = param_3;
      }
    }
    else {
      uVar3 = 2;
    }
    return uVar3;
  }
  return 5;
}



//==== 00554874  ns=Global  size=0xa4
// sig: undefined FUN_00554874(void)
// callers(4): 00554fd4 FUN_00554fd4; 005554c4 FUN_005554c4; 005558c4 FUN_005558c4; 00555e14 FUN_00555e14
// callees(0): 

undefined8 FUN_00554874(uint param_1,uint param_2,undefined4 *param_3)

{
  undefined *puVar1;
  int *piVar2;
  
  puVar1 = PTR_DAT_0071b294;
  if (param_3 != (undefined4 *)0x0) {
    *param_3 = 0;
    if (((puVar1[8] != '\x01') || (*(int *)(puVar1 + 0xc) == 0)) || (*(int *)(puVar1 + 0x10) == 0))
    {
      return 5;
    }
    if ((param_1 < *(uint *)(puVar1 + 0x14)) && (param_2 < *(uint *)(puVar1 + 0x18))) {
      piVar2 = (int *)(*(int *)(puVar1 + 0xc) +
                      (int)(((ulonglong)param_2 +
                             (longlong)(int)param_1 * (longlong)(int)*(uint *)(puVar1 + 0x18) &
                            0xffffffff) << 4));
      *param_3 = piVar2;
      if ((*piVar2 != 0) || (piVar2[2] != 0)) {
        return 0;
      }
    }
  }
  return 2;
}



//==== 00554918  ns=Global  size=0xb0
// sig: undefined FUN_00554918(void)
// callers(0): 
// callees(0): 

undefined8 FUN_00554918(uint param_1,undefined4 *param_2,uint param_3)

{
  uint uVar1;
  undefined4 *puVar2;
  ulonglong uVar3;
  
  if ((((PTR_DAT_0071b294[8] == '\x01') && (*(int *)(PTR_DAT_0071b294 + 0xc) != 0)) &&
      (*(int *)(PTR_DAT_0071b294 + 0x10) != 0)) && (*(int *)(PTR_DAT_0071b294 + 0x1c) != 0)) {
    if (((param_1 < *(uint *)(PTR_DAT_0071b294 + 0x14)) && (param_2 != (undefined4 *)0x0)) &&
       (uVar1 = *(uint *)(PTR_DAT_0071b294 + 0x18), uVar1 <= param_3)) {
      if (uVar1 != 0) {
        uVar3 = (ulonglong)uVar1;
        puVar2 = (undefined4 *)(*(int *)(PTR_DAT_0071b294 + 0x1c) + param_1 * uVar1 * 4);
        do {
          *param_2 = *puVar2;
          uVar3 = uVar3 - 1;
          param_2 = param_2 + 1;
          puVar2 = puVar2 + 1;
        } while (uVar3 != 0);
      }
      return 0;
    }
    return 2;
  }
  return 5;
}



//==== 005549c8  ns=Global  size=0x88
// sig: undefined FUN_005549c8(void)
// callers(2): 00554a50 FUN_00554a50; 00554b90 FUN_00554b90
// callees(0): 
// strings: 00554a3c: '}KSx8\n' (raw)

uint FUN_005549c8(int param_1)

{
  uint uVar1;
  uint *puVar2;
  int *piVar3;
  uint uVar4;
  ulonglong uVar5;
  
  puVar2 = (uint *)(param_1 * 4 + *(int *)(PTR_DAT_0071b294 + 0x10));
  uVar1 = *puVar2;
  if (uVar1 != 0) {
    uVar4 = 0;
    uVar5 = (ulonglong)uVar1;
    piVar3 = (int *)(param_1 * *(int *)(PTR_DAT_0071b294 + 0x18) * 0x10 +
                    *(int *)(PTR_DAT_0071b294 + 0xc));
    do {
      if ((*piVar3 == 0) && (piVar3[2] == 0)) {
        return uVar4;
      }
      uVar4 = uVar4 + 1;
      uVar5 = uVar5 - 1;
      piVar3 = piVar3 + 4;
    } while (uVar5 != 0);
  }
  *puVar2 = uVar1 + 1;
  return uVar1;
}



//==== 00554a50  ns=Global  size=0x140
// sig: undefined FUN_00554a50(void)
// callers(1): 0054cf98 FUN_0054cf98
// callees(2): 0055479c FUN_0055479c; 005549c8 FUN_005549c8

int FUN_00554a50(undefined4 *param_1,ulonglong param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 *puVar1;
  ulonglong uVar2;
  undefined *puVar3;
  undefined8 uVar4;
  int iVar5;
  
  puVar3 = PTR_DAT_0071b294;
  iVar5 = 5;
  if (((PTR_DAT_0071b294[8] == '\x01') && (*(int *)(PTR_DAT_0071b294 + 0xc) != 0)) &&
     (*(int *)(PTR_DAT_0071b294 + 0x10) != 0)) {
    uVar2 = param_2 & 0xffffffff;
    iVar5 = 0x3eb;
    if (*(uint *)((int)((param_2 & 0xffffffff) << 2) + *(int *)(PTR_DAT_0071b294 + 0x10)) <=
        *(uint *)(PTR_DAT_0071b294 + 0x18)) {
      uVar4 = FUN_005549c8(uVar2);
      iVar5 = FUN_0055479c(uVar4,uVar2,param_3,param_4);
      if (iVar5 == 0) {
        puVar1 = *(undefined4 **)puVar3;
        *param_1 = (int)uVar4;
        if (puVar1 != (undefined4 *)0x0) {
          (*(code *)*puVar1)(uVar4,uVar2);
          return 0;
        }
      }
    }
  }
  return iVar5;
}



//==== 00554b90  ns=Global  size=0x12c
// sig: undefined FUN_00554b90(void)
// callers(0): 
// callees(2): 00554790 FUN_00554790; 005549c8 FUN_005549c8

int FUN_00554b90(undefined4 *param_1,ulonglong param_2,undefined4 param_3)

{
  undefined4 *puVar1;
  ulonglong uVar2;
  undefined *puVar3;
  undefined8 uVar4;
  int iVar5;
  
  puVar3 = PTR_DAT_0071b294;
  iVar5 = 5;
  if (((PTR_DAT_0071b294[8] == '\x01') && (*(int *)(PTR_DAT_0071b294 + 0xc) != 0)) &&
     (*(int *)(PTR_DAT_0071b294 + 0x10) != 0)) {
    uVar2 = param_2 & 0xffffffff;
    iVar5 = 0x3eb;
    if (*(uint *)((int)((param_2 & 0xffffffff) << 2) + *(int *)(PTR_DAT_0071b294 + 0x10)) <=
        *(uint *)(PTR_DAT_0071b294 + 0x18)) {
      uVar4 = FUN_005549c8(uVar2);
      iVar5 = FUN_00554790(uVar4,uVar2,param_3);
      if (iVar5 == 0) {
        puVar1 = *(undefined4 **)puVar3;
        *param_1 = (int)uVar4;
        if (puVar1 != (undefined4 *)0x0) {
          (*(code *)*puVar1)(uVar4,uVar2);
          return 0;
        }
      }
    }
  }
  return iVar5;
}



//==== 00554cbc  ns=Global  size=0x10
// sig: undefined FUN_00554cbc(void)
// callers(1): 00554fd4 FUN_00554fd4
// callees(0): 

undefined8 FUN_00554cbc(undefined1 param_1,undefined1 param_2,undefined1 *param_3)

{
  *param_3 = param_1;
  param_3[1] = param_2;
  return 2;
}



//==== 00554ccc  ns=Global  size=0x18
// sig: undefined FUN_00554ccc(void)
// callers(2): 005554c4 FUN_005554c4; 005558c4 FUN_005558c4
// callees(0): 

undefined8 FUN_00554ccc(undefined1 *param_1,undefined1 *param_2,undefined1 *param_3)

{
  *param_1 = *param_3;
  *param_2 = param_3[1];
  return 2;
}



//==== 00554ce4  ns=Global  size=0xd8
// sig: undefined FUN_00554ce4(void)
// callers(1): 005474b4 FUN_005474b4
// callees(2): 005519f0 FUN_005519f0; 00556c4c thunk_FUN_00556bb8

undefined8 FUN_00554ce4(void)

{
  bool bVar1;
  undefined4 *puVar2;
  undefined *puVar3;
  int iVar4;
  uint local_30 [4];
  
  puVar3 = PTR_DAT_0071b294;
  if (*(int *)(PTR_DAT_0071b294 + 0x20) != 0) {
    iVar4 = 0;
    do {
      while( true ) {
        if ((*(int *)(iVar4 + *(int *)(puVar3 + 0x20)) == 0) ||
           (thunk_FUN_00556bb8((int *)(iVar4 + *(int *)(puVar3 + 0x20)) + 9,local_30),
           local_30[0] < 0x7531)) break;
        FUN_005519f0(iVar4 + *(int *)(puVar3 + 0x20) + 0x30);
        puVar2 = (undefined4 *)(iVar4 + *(int *)(puVar3 + 0x20));
        bVar1 = iVar4 == 0x33cc;
        iVar4 = iVar4 + 0x34;
        *puVar2 = 0;
        if (bVar1) {
          return 0;
        }
      }
      bVar1 = iVar4 != 0x33cc;
      iVar4 = iVar4 + 0x34;
    } while (bVar1);
  }
  return 0;
}



//==== 00554dbc  ns=Global  size=0x13c
// sig: undefined FUN_00554dbc(void)
// callers(1): 00547c38 FUN_00547c38
// callees(1): 005519f0 FUN_005519f0

undefined8 FUN_00554dbc(void)

{
  bool bVar1;
  undefined *puVar2;
  int iVar3;
  undefined8 uVar4;
  
  puVar2 = PTR_DAT_0071b294;
  uVar4 = 1000;
  if (*(int *)(PTR_DAT_0071b294 + 0x24) != 0) {
    iVar3 = *(int *)(PTR_DAT_0071b294 + 0x24) + -1;
    uVar4 = 0;
    *(int *)(PTR_DAT_0071b294 + 0x24) = iVar3;
    if (iVar3 == 0) {
      if (*(int *)(puVar2 + 0x20) != 0) {
        iVar3 = 0;
        do {
          if (*(int *)(iVar3 + *(int *)(puVar2 + 0x20) + 0x30) != 0) {
            FUN_005519f0(iVar3 + *(int *)(puVar2 + 0x20) + 0x30);
          }
          bVar1 = iVar3 != 0x33cc;
          iVar3 = iVar3 + 0x34;
        } while (bVar1);
        FUN_005519f0(puVar2 + 0x20);
      }
      if (*(int *)(puVar2 + 0x10) != 0) {
        FUN_005519f0(puVar2 + 0x10);
      }
      if (*(int *)(puVar2 + 0xc) != 0) {
        FUN_005519f0(puVar2 + 0xc);
      }
      if (*(int *)(puVar2 + 0x28) != 0) {
        FUN_005519f0(puVar2 + 0x28);
      }
      if (*(int *)(puVar2 + 0x1c) != 0) {
        FUN_005519f0(puVar2 + 0x1c);
      }
      uVar4 = 0;
      puVar2[8] = 0;
    }
  }
  return uVar4;
}



//==== 00554ef8  ns=Global  size=0xdc
// sig: undefined FUN_00554ef8(void)
// callers(2): 00554fd4 FUN_00554fd4; 00555e14 FUN_00555e14
// callees(4): 00553c74 FUN_00553c74; 00553f04 FUN_00553f04; 00554160 FUN_00554160; 00554290 FUN_00554290

void FUN_00554ef8(undefined8 param_1,int param_2)

{
  FUN_00554290(param_1,param_2);
  FUN_00554290(param_1,param_2 + 1);
  FUN_00554160(param_1,param_2 + 2);
  FUN_00554160(param_1,param_2 + 4);
  FUN_00554160(param_1,param_2 + 6);
  FUN_00554290(param_1,param_2 + 8);
  FUN_00553c74(param_1,3);
  FUN_00553f04(param_1,param_2 + 0xc);
  FUN_00553f04(param_1,param_2 + 0x10);
  return;
}



//==== 00554fd4  ns=Global  size=0x3ec
// sig: undefined FUN_00554fd4(void)
// callers(1): 00546bdc FUN_00546bdc
// callees(5): 005543a4 FUN_005543a4; 0055442c FUN_0055442c; 00554874 FUN_00554874; 00554cbc FUN_00554cbc; 00554ef8 FUN_00554ef8

ulonglong FUN_00554fd4(uint param_1,uint param_2,int param_3,int param_4,undefined4 param_5,
                      undefined4 *param_6,undefined4 param_7)

{
  char cVar1;
  code *pcVar2;
  longlong lVar3;
  ulonglong *puVar4;
  undefined *puVar5;
  uint uVar6;
  ulonglong uVar7;
  ulonglong *puVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  int iVar11;
  int iVar12;
  ushort uVar13;
  ulonglong unaff_r15;
  ulonglong unaff_r16;
  ulonglong unaff_r17;
  ulonglong unaff_r18;
  ulonglong unaff_r19;
  ulonglong unaff_r20;
  ulonglong unaff_r21;
  ulonglong unaff_r22;
  ulonglong unaff_r23;
  ulonglong unaff_r24;
  ulonglong unaff_r25;
  ulonglong unaff_r26;
  ulonglong unaff_r27;
  ulonglong uVar14;
  ulonglong unaff_r28;
  ulonglong unaff_r29;
  ulonglong unaff_r30;
  ulonglong unaff_r31;
  ulonglong in_LR;
  
  uVar7 = ZEXT48(&stack0x00000000);
  uVar9 = ZEXT48(&TOC_BASE);
  puVar4 = (ulonglong *)(uVar7 - 0x1a0);
  *puVar4 = uVar7;
  puVar4[0x29] = unaff_r21;
  puVar5 = PTR_DAT_0071b294;
  puVar4[0x36] = in_LR;
  puVar4[0x33] = unaff_r31;
  puVar4[0x2b] = unaff_r23;
  uVar6 = *(uint *)(puVar5 + 0x14);
  puVar4[0x2c] = unaff_r24;
  puVar4[0x2d] = unaff_r25;
  puVar4[0x2e] = unaff_r26;
  puVar4[0x30] = unaff_r28;
  puVar4[0x31] = unaff_r29;
  puVar4[0x32] = unaff_r30;
  puVar4[0x23] = unaff_r15;
  puVar4[0x24] = unaff_r16;
  puVar4[0x25] = unaff_r17;
  puVar4[0x26] = unaff_r18;
  puVar4[0x27] = unaff_r19;
  puVar4[0x28] = unaff_r20;
  puVar4[0x2a] = unaff_r22;
  puVar4[0x2f] = unaff_r27;
  *(int *)(puVar4 + 0x3d) = param_4;
  if ((((uVar6 <= param_1) || (*(uint *)(puVar5 + 0x18) <= param_2)) || (param_3 == 0)) ||
     ((param_4 == 0 || (param_6 == (undefined4 *)0x0)))) {
    uVar10 = 2;
    goto LAB_005552d8;
  }
  *(undefined4 *)(puVar4 + 0xf) = 0;
  FUN_00554874(param_1,param_2,uVar7 - 0x128);
  if ((*(int *)(puVar4 + 0xf) == 0) || (*(int *)(*(int *)(puVar4 + 0xf) + 8) == 0)) {
    uVar6 = *(uint *)(puVar5 + 0x2c);
    puVar8 = puVar4;
    if (*(int *)(puVar4 + 0x3d) + 2U <= uVar6) {
LAB_0055534c:
      iVar11 = FUN_00554cbc(param_1 & 0xff,param_2 & 0xff,uVar7 - 0x130);
      iVar12 = *(int *)(puVar4 + 0x3d);
      *(int *)((int)puVar4 + 0xd4) = iVar11;
      *(int *)(puVar4 + 0x19) = param_3;
      *(int *)(puVar4 + 0x1a) = (int)(uVar7 - 0x130);
      *(int *)(puVar4 + 0x21) = iVar12 + iVar11;
      *(undefined4 *)((int)puVar4 + 0x10c) = 2;
      puVar8[5] = uVar9;
      *(int *)((int)puVar4 + 0xcc) = iVar12;
      uVar10 = (*(code *)*param_6)(uVar7 - 0xd8,param_5,param_7);
      goto LAB_005552d8;
    }
  }
  else {
    uVar6 = *(uint *)(puVar4 + 0x3d);
    uVar10 = uVar7 - 0xf4 & 0xffffffff;
    lVar3 = (uVar7 - 0x1a0) - ((ulonglong)uVar6 + 0x1e & 0xfffffffffffffff0);
    puVar8 = (ulonglong *)lVar3;
    *puVar8 = *puVar4;
    uVar14 = lVar3 + 0x70;
    FUN_0055442c(uVar10,uVar14 & 0xffffffff,uVar14 + uVar6 & 0xffffffff,1);
    *(int *)((int)puVar4 + 0x7c) = param_3;
    *(undefined4 *)(puVar4 + 0x10) = *(undefined4 *)(puVar4 + 0x3d);
    pcVar2 = (code *)**(undefined4 **)(*(int *)(puVar4 + 0xf) + 8);
    puVar8[5] = ZEXT48(&TOC_BASE);
    (*pcVar2)(uVar10,uVar7 - 0x124);
    uVar9 = puVar8[5];
    FUN_005543a4(uVar10,uVar7 + 0x48 & 0xffffffff);
    uVar10 = (ulonglong)*(uint *)((int)puVar4 + 0xc4);
    if (*(uint *)((int)puVar4 + 0xc4) != 0) goto LAB_005552d8;
    uVar6 = *(uint *)(puVar5 + 0x2c);
    param_3 = (int)uVar14;
    if (*(int *)(puVar4 + 0x3d) + 2U <= uVar6) goto LAB_0055534c;
  }
  iVar11 = FUN_00554cbc(0,2,uVar7 - 0x130);
  iVar12 = *(int *)(puVar4 + 0x3d);
  cVar1 = puVar5[0x30];
  puVar5[0x30] = cVar1 + '\x01';
  uVar10 = (ulonglong)((uVar6 + iVar12) - 0x1a) / (ulonglong)(uVar6 - 0x19);
  if ((uVar10 & 0xffff) != 0) {
    uVar14 = uVar7 - 0xf4 & 0xffffffff;
    *(short *)(puVar4 + 0x11) = (short)uVar10;
    *(char *)((int)puVar4 + 0x84) = (char)param_1;
    *(char *)((int)puVar4 + 0x85) = (char)param_2;
    *(char *)((int)puVar4 + 0x8c) = cVar1;
    *(undefined2 *)((int)puVar4 + 0x8a) = 0;
    *(int *)(puVar4 + 0x12) = iVar12;
    *(undefined4 *)((int)puVar4 + 0x94) = 0;
    while( true ) {
      uVar6 = iVar12 - *(int *)((int)puVar4 + 0x94);
      if (*(int *)(puVar5 + 0x2c) - 0x19U < uVar6) {
        uVar6 = *(int *)(puVar5 + 0x2c) - 0x19;
      }
      *(short *)((int)puVar4 + 0x86) = (short)uVar6;
      FUN_0055442c(uVar14,uVar7 - 0x108 & 0xffffffff,uVar14,1);
      FUN_00554ef8(uVar14,uVar7 - 0x11c & 0xffffffff);
      FUN_005543a4(uVar14,uVar7 - 300 & 0xffffffff);
      *(int *)(puVar4 + 0x19) = param_3 + *(int *)((int)puVar4 + 0x94);
      *(uint *)(puVar4 + 0x21) = *(ushort *)((int)puVar4 + 0x86) + 0x14 + iVar11;
      *(uint *)((int)puVar4 + 0xcc) = (uint)*(ushort *)((int)puVar4 + 0x86);
      *(int *)(puVar4 + 0x1a) = (int)(uVar7 - 0x108);
      *(undefined4 *)((int)puVar4 + 0xd4) = 0x14;
      *(int *)(puVar4 + 0x1b) = (int)(uVar7 - 0x130);
      *(int *)((int)puVar4 + 0xdc) = iVar11;
      *(undefined4 *)((int)puVar4 + 0x10c) = 3;
      puVar8[5] = uVar9;
      uVar10 = (*(code *)*param_6)(uVar7 - 0xd8 & 0xffffffff,param_5,param_7);
      uVar9 = puVar8[5];
      if (uVar10 != 0) goto LAB_005552d8;
      uVar13 = *(short *)((int)puVar4 + 0x8a) + 1;
      if (*(ushort *)(puVar4 + 0x11) <= uVar13) break;
      iVar12 = *(int *)(puVar4 + 0x3d);
      *(uint *)((int)puVar4 + 0x94) =
           *(int *)((int)puVar4 + 0x94) + (uint)*(ushort *)((int)puVar4 + 0x86);
      *(ushort *)((int)puVar4 + 0x8a) = uVar13;
    }
  }
  uVar10 = 0;
LAB_005552d8:
  return uVar10 & 0xffffffff;
}



//==== 005553c0  ns=Global  size=0xa8
// sig: undefined FUN_005553c0(void)
// callers(0): 
// callees(1): 005d0140 libc::memset

undefined8 FUN_005553c0(uint param_1)

{
  undefined8 uVar1;
  longlong lVar2;
  
  uVar1 = 5;
  if ((((PTR_DAT_0071b294[8] == '\x01') && (*(int *)(PTR_DAT_0071b294 + 0xc) != 0)) &&
      (*(int *)(PTR_DAT_0071b294 + 0x10) != 0)) &&
     ((*(int *)(PTR_DAT_0071b294 + 0x1c) != 0 &&
      (uVar1 = 2, param_1 < *(uint *)(PTR_DAT_0071b294 + 0x14))))) {
    lVar2 = ((ulonglong)*(uint *)(PTR_DAT_0071b294 + 0x18) & 0x3fffffff) << 2;
    libc::memset(param_1 * (int)lVar2 + *(int *)(PTR_DAT_0071b294 + 0x1c),0,lVar2);
    return 0;
  }
  return uVar1;
}



//==== 00555468  ns=Global  size=0x5c
// sig: undefined FUN_00555468(void)
// callers(0): 
// callees(0): 

undefined8 FUN_00555468(undefined4 param_1)

{
  undefined *puVar1;
  undefined4 *puVar2;
  
  puVar1 = PTR_DAT_0071b294;
  puVar2 = (undefined4 *)(PTR_DAT_0071b294 + 0x38);
  if (PTR_DAT_0071b294[8] != '\x01') {
    return 5;
  }
  *(undefined4 *)(PTR_DAT_0071b294 + 0x3c) = 0;
  *(undefined4 *)(puVar1 + 0x3c) = 1;
  *puVar2 = 0;
  *(undefined4 *)(puVar1 + 0x44) = 0;
  *(undefined4 *)(puVar1 + 0x38) = param_1;
  *(undefined4 *)(puVar1 + 0x34) = param_1;
  *(undefined4 *)(puVar1 + 0x40) = 0;
  return 0;
}



//==== 005554c4  ns=Global  size=0x400
// sig: undefined FUN_005554c4(void)
// callers(0): 
// callees(5): 005543a4 FUN_005543a4; 0055442c FUN_0055442c; 00554874 FUN_00554874; 00554ccc FUN_00554ccc; 005c5ad0 libc::memcpy

int FUN_005554c4(uint param_1,uint param_2,undefined4 param_3,int param_4,uint param_5)

{
  uint uVar1;
  undefined4 *puVar2;
  int *piVar3;
  undefined *puVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  uint uVar8;
  byte local_80;
  byte local_7f [3];
  undefined4 *local_7c;
  undefined1 local_78 [4];
  undefined1 local_74 [8];
  undefined1 auStack_6c [24];
  int local_54;
  
  puVar4 = PTR_DAT_0071b294;
  if ((((PTR_DAT_0071b294[8] != '\x01') || (*(int *)(PTR_DAT_0071b294 + 0xc) == 0)) ||
      (*(int *)(PTR_DAT_0071b294 + 0x10) == 0)) ||
     ((*(int *)(PTR_DAT_0071b294 + 0x28) == 0 || (*(int *)(PTR_DAT_0071b294 + 0x1c) == 0)))) {
    return 5;
  }
  if ((param_4 == 0) || (param_5 < 2)) {
    return 2;
  }
  iVar5 = FUN_00554ccc(&local_80,local_7f,param_4);
  if (iVar5 == 0) {
    return 0x3e9;
  }
  uVar6 = (uint)local_80;
  if (*(uint *)(puVar4 + 0x14) <= uVar6) {
    return 0x3e9;
  }
  uVar8 = (uint)local_7f[0];
  uVar1 = *(uint *)(puVar4 + 0x18);
  if (uVar1 <= uVar8) {
    return 0x3e9;
  }
  if ((*(int *)(puVar4 + 0x34) == 0) || ((local_80 == 0 && (local_7f[0] == 2)))) {
    iVar7 = FUN_00554874(local_80,local_7f[0],&local_7c);
    if (iVar7 != 0) {
      return 0x3e9;
    }
    if (local_7c == (undefined4 *)0x0) {
      return 0x3e9;
    }
    piVar3 = (int *)((uVar1 * local_80 + (uint)local_7f[0]) * 4 + *(int *)(puVar4 + 0x1c));
    *piVar3 = *piVar3 + 1;
    uVar6 = param_1;
    uVar8 = param_2;
  }
  else {
    local_7c = (undefined4 *)(puVar4 + 0x38);
  }
  if (local_7c[2] == 0) {
    libc::memcpy(*(void **)(puVar4 + 0x28),(void *)(param_4 + iVar5),param_5 - iVar5);
  }
  else {
    FUN_0055442c(auStack_6c,param_4 + iVar5,param_4 + param_5,2);
    (**(code **)local_7c[2])(auStack_6c,local_74);
    if (local_54 != 0) {
      return local_54;
    }
    iVar7 = FUN_005543a4(auStack_6c,local_78);
    if (iVar7 != 1) {
      return 0x3e9;
    }
  }
  if (*(undefined4 **)(puVar4 + 0x48) != (undefined4 *)0x0) {
    (*(code *)**(undefined4 **)(puVar4 + 0x48))
              (local_80,local_7f[0],uVar8,param_3,*(undefined4 *)(puVar4 + 0x28));
  }
  iVar7 = local_7c[1];
  if (iVar7 == 1) {
    puVar2 = (undefined4 *)*local_7c;
  }
  else {
    if (iVar7 != 0) {
      if (iVar7 != 2) {
        return 0x3e9;
      }
      iVar7 = (**(code **)*local_7c)
                        (uVar6,uVar8,param_3,*(undefined4 *)(puVar4 + 0x28),local_7c[3],local_80,
                         local_7f[0]);
      goto LAB_005556bc;
    }
    puVar2 = (undefined4 *)*local_7c;
    uVar6 = 0;
  }
  iVar7 = (*(code *)*puVar2)(uVar6,uVar8,param_3,*(undefined4 *)(puVar4 + 0x28));
LAB_005556bc:
  if (*(undefined4 **)(puVar4 + 4) != (undefined4 *)0x0) {
    (*(code *)**(undefined4 **)(puVar4 + 4))
              (local_80,local_7f[0],uVar8,param_3,*(undefined4 *)(puVar4 + 0x28),iVar7);
  }
  if (local_7c[2] != 0) {
    iVar7 = 0;
  }
  if ((-1 < iVar7) && ((uint)(iVar5 + iVar7) <= param_5)) {
    return 0;
  }
  return 0x3e9;
}



//==== 005558c4  ns=Global  size=0x3b8
// sig: undefined FUN_005558c4(void)
// callers(1): 0054690c FUN_0054690c
// callees(5): 005543a4 FUN_005543a4; 0055442c FUN_0055442c; 00554874 FUN_00554874; 00554ccc FUN_00554ccc; 005c5ad0 libc::memcpy

int FUN_005558c4(undefined4 param_1,undefined4 param_2,undefined4 param_3,int param_4,uint param_5)

{
  uint uVar1;
  undefined4 *puVar2;
  int *piVar3;
  undefined *puVar4;
  int iVar5;
  int iVar6;
  byte local_70;
  byte local_6f [3];
  undefined4 *local_6c;
  undefined1 local_68 [4];
  undefined1 local_64 [8];
  undefined1 auStack_5c [24];
  int local_44;
  
  puVar4 = PTR_DAT_0071b294;
  if ((((PTR_DAT_0071b294[8] != '\x01') || (*(int *)(PTR_DAT_0071b294 + 0xc) == 0)) ||
      (*(int *)(PTR_DAT_0071b294 + 0x10) == 0)) ||
     ((*(int *)(PTR_DAT_0071b294 + 0x28) == 0 || (*(int *)(PTR_DAT_0071b294 + 0x1c) == 0)))) {
    return 5;
  }
  if ((param_4 == 0) || (param_5 < 2)) {
    return 2;
  }
  iVar5 = FUN_00554ccc(&local_70,local_6f,param_4);
  if (iVar5 == 0) {
    return 0x3e9;
  }
  if (*(uint *)(puVar4 + 0x14) <= (uint)local_70) {
    return 0x3e9;
  }
  uVar1 = *(uint *)(puVar4 + 0x18);
  if (uVar1 <= local_6f[0]) {
    return 0x3e9;
  }
  iVar6 = FUN_00554874(local_70,local_6f[0],&local_6c);
  if (iVar6 != 0) {
    return 0x3e9;
  }
  if (local_6c == (undefined4 *)0x0) {
    return 0x3e9;
  }
  iVar6 = local_6c[2];
  piVar3 = (int *)((int)(((longlong)(int)uVar1 * (longlong)(int)(uint)local_70 +
                          (ulonglong)local_6f[0] & 0xffffffff) << 2) + *(int *)(puVar4 + 0x1c));
  *piVar3 = *piVar3 + 1;
  if (iVar6 == 0) {
    libc::memcpy(*(void **)(puVar4 + 0x28),(void *)(param_4 + iVar5),param_5 - iVar5);
  }
  else {
    FUN_0055442c(auStack_5c,param_4 + iVar5,param_4 + param_5,2);
    (**(code **)local_6c[2])(auStack_5c,local_64);
    if (local_44 != 0) {
      return local_44;
    }
    iVar6 = FUN_005543a4(auStack_5c,local_68);
    if (iVar6 != 1) {
      return 0x3e9;
    }
  }
  if (*(undefined4 **)(puVar4 + 0x48) != (undefined4 *)0x0) {
    (*(code *)**(undefined4 **)(puVar4 + 0x48))
              (local_70,local_6f[0],param_2,param_3,*(undefined4 *)(puVar4 + 0x28));
  }
  iVar6 = local_6c[1];
  if (iVar6 == 1) {
    puVar2 = (undefined4 *)*local_6c;
  }
  else {
    if (iVar6 != 0) {
      if (iVar6 != 2) {
        return 0x3e9;
      }
      iVar6 = (**(code **)*local_6c)
                        (param_1,param_2,param_3,*(undefined4 *)(puVar4 + 0x28),local_6c[3],local_70
                         ,local_6f[0]);
      goto LAB_00555ab8;
    }
    puVar2 = (undefined4 *)*local_6c;
    param_1 = 0;
  }
  iVar6 = (*(code *)*puVar2)(param_1,param_2,param_3,*(undefined4 *)(puVar4 + 0x28));
LAB_00555ab8:
  if (*(undefined4 **)(puVar4 + 4) != (undefined4 *)0x0) {
    (*(code *)**(undefined4 **)(puVar4 + 4))
              (local_70,local_6f[0],param_2,param_3,*(undefined4 *)(puVar4 + 0x28),iVar6);
  }
  if (local_6c[2] != 0) {
    iVar6 = 0;
  }
  if ((-1 < iVar6) && ((uint)(iVar5 + iVar6) <= param_5)) {
    return 0;
  }
  return 0x3e9;
}



//==== 00555c7c  ns=Global  size=0x198
// sig: undefined FUN_00555c7c(void)
// callers(1): 00546398 FUN_00546398
// callees(2): 00551de8 FUN_00551de8; 00554790 FUN_00554790

ulonglong FUN_00555c7c(undefined4 param_1,uint param_2,ulonglong param_3,undefined4 param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  
  puVar2 = PTR_DAT_0071b294;
  if ((0x100 < param_2) || (0x100 < (param_3 & 0xffffffff))) {
    return 2;
  }
  if (PTR_DAT_0071b294[8] == '\x01') {
    uVar3 = 0;
    *(int *)(PTR_DAT_0071b294 + 0x24) = *(int *)(PTR_DAT_0071b294 + 0x24) + 1;
  }
  else {
    puVar1 = PTR_DAT_0071b294 + 0x10;
    *(uint *)(PTR_DAT_0071b294 + 0x18) = param_2;
    *(int *)(puVar2 + 0x14) = (int)param_3;
    *(undefined4 *)(puVar2 + 0x2c) = param_1;
    *(undefined4 *)(puVar2 + 0x48) = param_4;
    uVar3 = FUN_00551de8(puVar1,(param_3 & 0x3fffffff) << 2);
    if ((int)uVar3 == 0) {
      uVar5 = (longlong)(int)param_2 * (longlong)(int)param_3;
      uVar4 = FUN_00551de8(puVar2 + 0xc,(uVar5 & 0xfffffff) << 4);
      if (uVar4 == 0) {
        uVar4 = FUN_00551de8(puVar2 + 0x28,*(int *)(puVar2 + 0x2c) * 3);
        if ((uVar4 == 0) &&
           (uVar4 = FUN_00551de8(puVar2 + 0x1c,(uVar5 & 0x3fffffff) << 2), puVar1 = PTR_PTR_0071b298
           , uVar4 == 0)) {
          puVar2[8] = 1;
          *(int *)(puVar2 + 0x24) = *(int *)(puVar2 + 0x24) + 1;
          uVar4 = FUN_00554790(2,0,puVar1);
          if (uVar4 == 0) {
            puVar2[0x30] = (char)uVar3;
            goto LAB_00555d50;
          }
        }
      }
      return uVar4 & 0xffffffff;
    }
  }
LAB_00555d50:
  return uVar3 & 0xffffffff;
}



//==== 00555e14  ns=Global  size=0x560
// sig: undefined FUN_00555e14(void)
// callers(0): 
// callees(9): 005519f0 FUN_005519f0; 00551b80 FUN_00551b80; 00551de8 FUN_00551de8; 005543a4 FUN_005543a4; 0055442c FUN_0055442c; 00554874 FUN_00554874; 00554ef8 FUN_00554ef8; 00556f40 thunk_FUN_00556a58; 005c5ad0 libc::memcpy

/* WARNING: Removing unreachable block (ram,0x0055623c) */
/* WARNING: Removing unreachable block (ram,0x005560f8) */
/* WARNING: Removing unreachable block (ram,0x005561fc) */
/* WARNING: Removing unreachable block (ram,0x00556108) */
/* WARNING: Removing unreachable block (ram,0x00556194) */
/* WARNING: Removing unreachable block (ram,0x00556268) */
/* WARNING: Removing unreachable block (ram,0x00556280) */
/* WARNING: Removing unreachable block (ram,0x005562b8) */
/* WARNING: Removing unreachable block (ram,0x00556200) */
/* WARNING: Removing unreachable block (ram,0x005562c0) */
/* WARNING: Removing unreachable block (ram,0x00556210) */
/* WARNING: Removing unreachable block (ram,0x005562f8) */
/* WARNING: Removing unreachable block (ram,0x00556218) */
/* WARNING: Removing unreachable block (ram,0x00556330) */
/* WARNING: Removing unreachable block (ram,0x0055629c) */
/* WARNING: Removing unreachable block (ram,0x005562a8) */
/* WARNING: Removing unreachable block (ram,0x005561b0) */
/* WARNING: Removing unreachable block (ram,0x005561bc) */

int FUN_00555e14(int param_1,int param_2,int param_3,int param_4)

{
  int *piVar1;
  undefined *puVar2;
  int iVar3;
  int iVar4;
  int *piVar5;
  int *piVar6;
  longlong lVar7;
  undefined1 auStack_a0 [8];
  undefined1 local_98 [12];
  char local_8c;
  char local_8b;
  ushort local_8a;
  ushort local_88;
  byte local_84;
  int local_80;
  int local_7c;
  undefined1 auStack_78 [48];
  
  iVar3 = 2;
  if (param_4 != 0) {
    FUN_0055442c(auStack_78,param_4,(void *)(param_4 + 0x14),2);
    FUN_00554ef8(auStack_78,&local_8c);
    FUN_005543a4(auStack_78,auStack_a0);
    puVar2 = PTR_DAT_0071b294;
    piVar1 = *(int **)(PTR_DAT_0071b294 + 0x20);
    if ((piVar1 != (int *)0x0) ||
       ((iVar3 = FUN_00551de8(PTR_DAT_0071b294 + 0x20,0x3400), iVar3 == 0 &&
        (piVar1 = *(int **)(puVar2 + 0x20), piVar1 != (int *)0x0)))) {
      piVar5 = piVar1 + 8;
      lVar7 = 0x100;
      piVar6 = piVar1;
      iVar3 = -1;
      iVar4 = 0;
LAB_00555f14:
      do {
        if (*piVar6 == 0) {
          if (iVar3 == -1) {
            piVar6 = piVar6 + 0xd;
            piVar5 = piVar5 + 0xd;
            lVar7 = lVar7 + -1;
            iVar3 = iVar4;
            iVar4 = iVar4 + 1;
            if (lVar7 == 0) break;
            goto LAB_00555f14;
          }
        }
        else if (((((piVar6[6] == param_1) && (piVar6[7] == param_2)) && (*piVar5 == param_3)) &&
                 ((piVar6[2] == (uint)local_84 && (piVar6[1] == (uint)local_88)))) &&
                ((piVar6[3] == local_80 &&
                 ((*(char *)(piVar5 + 3) == local_8c && (*(char *)((int)piVar5 + 0xd) == local_8b)))
                 ))) goto LAB_00555fe0;
        iVar4 = iVar4 + 1;
        piVar6 = piVar6 + 0xd;
        piVar5 = piVar5 + 0xd;
        lVar7 = lVar7 + -1;
      } while (lVar7 != 0);
      if (iVar3 != -1) {
        piVar6 = piVar1 + iVar3 * 0xd;
        piVar6[0xb] = 0;
        piVar6[1] = 0;
        piVar6[2] = 0;
        piVar6[3] = 0;
        piVar6[0xc] = 0;
        piVar6[4] = 0;
        piVar6[5] = 0;
        piVar6[9] = 0;
        piVar6[10] = 0;
        *piVar6 = 1;
        piVar6[7] = param_2;
        piVar6[8] = param_3;
        piVar6[6] = param_1;
        *(char *)(piVar6 + 0xb) = local_8c;
        *(char *)((int)piVar6 + 0x2d) = local_8b;
        piVar6[1] = (uint)local_88;
        piVar6[2] = (uint)local_84;
        piVar6[3] = local_80;
        FUN_00551de8(piVar6 + 0xc,local_80);
        if (piVar6[0xc] == 0) {
          FUN_005519f0(piVar6 + 0xc);
          *piVar6 = 0;
        }
        else {
LAB_00555fe0:
          libc::memcpy((void *)(piVar6[0xc] + local_7c),(void *)(param_4 + 0x14),(uint)local_8a);
          piVar6[4] = piVar6[4] + (uint)local_8a;
          piVar6[5] = piVar6[5] + 1;
          thunk_FUN_00556a58(piVar6 + 9);
          if (piVar6[5] == piVar6[1]) {
            FUN_00554874(*(undefined1 *)(piVar6 + 0xb),*(undefined1 *)((int)piVar6 + 0x2d),local_98)
            ;
            FUN_005519f0(piVar6 + 0xc);
            *piVar6 = 0;
          }
        }
      }
    }
    iVar3 = local_8a + 0x14;
  }
  return iVar3;
}



//==== 00556374  ns=Global  size=0x4c
// sig: undefined FUN_00556374(void)
// callers(0): 
// callees(0): 

char * FUN_00556374(char *param_1,char *param_2,uint param_3)

{
  char cVar1;
  char *pcVar2;
  char *pcVar3;
  ulonglong uVar4;
  
  if (param_3 != 0) {
    uVar4 = (ulonglong)param_3 + 1 & 0xffffffff;
    pcVar2 = param_1;
    do {
      pcVar3 = pcVar2;
      cVar1 = *param_2;
      param_2 = param_2 + 1;
      *pcVar3 = cVar1;
      if (cVar1 == '\0') break;
      uVar4 = uVar4 - 1;
      pcVar2 = pcVar3 + 1;
    } while (uVar4 != 0);
    *pcVar3 = '\0';
  }
  return param_1;
}



//==== 005563c0  ns=Global  size=0x3c
// sig: undefined FUN_005563c0(void)
// callers(1): 0058203c FUN_0058203c
// callees(0): 

char * FUN_005563c0(char *param_1,char *param_2,uint param_3)

{
  char cVar1;
  char *pcVar2;
  ulonglong uVar3;
  
  if (param_3 != 0) {
    uVar3 = (ulonglong)param_3 + 1 & 0xffffffff;
    pcVar2 = param_1;
    do {
      cVar1 = *param_2;
      param_2 = param_2 + 1;
      *pcVar2 = cVar1;
      pcVar2 = pcVar2 + 1;
      if (cVar1 == '\0') {
        return param_1;
      }
      uVar3 = uVar3 - 1;
    } while (uVar3 != 0);
  }
  return param_1;
}



//==== 005563fc  ns=Global  size=0x34
// sig: undefined FUN_005563fc(void)
// callers(1): 00556430 FUN_00556430
// callees(0): 

int FUN_005563fc(char *param_1)

{
  char *pcVar1;
  int iVar2;
  
  iVar2 = 0;
  if ((param_1 != (char *)0x0) && (pcVar1 = param_1, *param_1 != '\0')) {
    do {
      pcVar1 = pcVar1 + 1;
    } while (*pcVar1 != '\0');
    iVar2 = (int)pcVar1 - (int)param_1;
  }
  return iVar2;
}



//==== 00556430  ns=Global  size=0x18c
// sig: undefined FUN_00556430(void)
// callers(0): 
// callees(1): 005563fc FUN_005563fc

char * FUN_00556430(char *param_1,char *param_2)

{
  char cVar1;
  char cVar2;
  undefined *puVar3;
  int iVar4;
  char cVar5;
  char *pcVar6;
  char *pcVar7;
  
  puVar3 = PTR_DAT_0071b29c;
  if (param_1 == (char *)0x0) {
    param_1 = *(char **)PTR_DAT_0071b29c;
  }
  cVar5 = *param_1;
  iVar4 = 0;
  if (cVar5 != '\0') {
    cVar1 = *param_2;
    iVar4 = 0;
    pcVar7 = param_2;
    cVar2 = cVar1;
    if (cVar1 == '\0') {
      iVar4 = 0;
    }
    else {
      do {
        while (cVar2 == cVar5) {
          iVar4 = iVar4 + 1;
          cVar5 = param_1[iVar4];
          pcVar7 = param_2;
          cVar2 = cVar1;
          if (cVar5 == '\0') goto LAB_005564ac;
        }
        pcVar7 = pcVar7 + 1;
        cVar2 = *pcVar7;
      } while (cVar2 != '\0');
    }
  }
LAB_005564ac:
  param_1 = param_1 + iVar4;
  cVar5 = *param_1;
  pcVar7 = param_1;
  pcVar6 = param_2;
  if (cVar5 == '\0') {
    *(char **)PTR_DAT_0071b29c = param_1;
    return (char *)0x0;
  }
  do {
    while( true ) {
      cVar1 = *pcVar6;
      pcVar6 = pcVar6 + 1;
      if (cVar1 != '\0') break;
      pcVar7 = pcVar7 + 1;
      cVar5 = *pcVar7;
      pcVar6 = param_2;
      if (cVar5 == '\0') {
        iVar4 = FUN_005563fc();
        *(char **)puVar3 = param_1 + iVar4;
        return param_1;
      }
    }
  } while (cVar5 != cVar1);
  *pcVar7 = '\0';
  *(char **)puVar3 = pcVar7 + 1;
  return param_1;
}



//==== 005565bc  ns=Global  size=0x60
// sig: undefined FUN_005565bc(void)
// callers(21): 00553d84 FUN_00553d84; 0057fe3c FUN_0057fe3c; 0057fefc FUN_0057fefc; 0057ffa0 FUN_0057ffa0; 0058003c FUN_0058003c; 005800d8 FUN_005800d8; 0058018c FUN_0058018c; 00580240 FUN_00580240; 005802f4 FUN_005802f4; 005803c4 FUN_005803c4; 00580494 FUN_00580494; 00580580 FUN_00580580; 0058064c FUN_0058064c; 00580718 FUN_00580718; 00580800 FUN_00580800; 005808cc FUN_005808cc; 005809b4 FUN_005809b4; 00580a9c FUN_00580a9c; 00580ca0 FUN_00580ca0; 00580e18 FUN_00580e18; 005c2e5c FUN_005c2e5c
// callees(0): 

int FUN_005565bc(char *param_1,int param_2)

{
  int iVar1;
  char *pcVar2;
  
  iVar1 = 0;
  if (param_1 != (char *)0x0) {
    if ((param_1 < param_1 + param_2) && (*param_1 != '\0')) {
      iVar1 = (int)(param_1 + param_2) - (int)param_1;
      pcVar2 = param_1;
      do {
        pcVar2 = pcVar2 + 1;
        iVar1 = iVar1 + -1;
        if (iVar1 == 0) break;
      } while (*pcVar2 != '\0');
      iVar1 = (int)pcVar2 - (int)param_1;
    }
    else {
      iVar1 = 0;
    }
  }
  return iVar1;
}



//==== 0055661c  ns=Global  size=0xb0
// sig: undefined FUN_0055661c(void)
// callers(2): 0056ad24 FUN_0056ad24; 0056ba6c FUN_0056ba6c
// callees(0): 

char * FUN_0055661c(int *param_1,char *param_2)

{
  char *pcVar1;
  char cVar2;
  char cVar3;
  char *pcVar4;
  char *pcVar5;
  char *pcVar6;
  
  pcVar4 = (char *)*param_1;
  pcVar5 = (char *)0x0;
  if ((pcVar4 != (char *)0x0) && (pcVar5 = pcVar4, param_2 != (char *)0x0)) {
    cVar2 = *pcVar4;
    pcVar6 = pcVar4;
    while (cVar2 != '\0') {
      cVar3 = *param_2;
      pcVar1 = param_2;
      while (cVar3 != '\0') {
        if (cVar3 == cVar2) {
          *pcVar6 = '\0';
          *param_1 = *param_1 + 1;
          return pcVar4;
        }
        pcVar1 = pcVar1 + 1;
        cVar3 = *pcVar1;
      }
      pcVar6 = pcVar6 + 1;
      *param_1 = (int)pcVar6;
      cVar2 = *pcVar6;
    }
    *param_1 = 0;
  }
  return pcVar5;
}



//==== 005566cc  ns=Global  size=0xd8
// sig: undefined FUN_005566cc(void)
// callers(1): 00556a80 FUN_00556a80
// callees(0): 

undefined8 FUN_005566cc(uint *param_1,uint *param_2,int *param_3)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  
  if (((param_1 != (uint *)0x0) && (param_2 != (uint *)0x0)) && (param_3 != (int *)0x0)) {
    uVar1 = *param_1;
    uVar2 = *param_2;
    if (uVar1 == uVar2) {
      if (param_1[1] <= param_2[1]) {
        param_3[1] = param_2[1] - param_1[1];
        *param_3 = 0;
        return 0;
      }
    }
    else if (uVar1 < uVar2) {
      uVar3 = param_2[1];
      uVar4 = param_1[1];
      if (uVar4 <= uVar3) {
        param_3[1] = uVar3 - uVar4;
        *param_3 = uVar2 - uVar1;
        return 0;
      }
      param_3[1] = 1000000 - (uVar4 - uVar3);
      *param_3 = (uVar2 - uVar1) + -1;
      return 0;
    }
    param_3[1] = 0;
    *param_3 = 0;
    return 0;
  }
  return 2;
}



//==== 005567a4  ns=Global  size=0x54
// sig: undefined FUN_005567a4(void)
// callers(6): 0055da5c FUN_0055da5c; 0055e0b8 FUN_0055e0b8; 0055e544 FUN_0055e544; 0056072c FUN_0056072c; 00561054 FUN_00561054; 0056469c FUN_0056469c
// callees(0): 

undefined8 FUN_005567a4(int *param_1,int *param_2,int *param_3)

{
  int iVar1;
  
  iVar1 = (param_2[1] - param_1[1]) / 1000 + (*param_2 - *param_1) * 1000;
  *param_3 = iVar1;
  if (-1 < iVar1) {
    return 0;
  }
  *param_3 = 0;
  return 0;
}



//==== 005567f8  ns=Global  size=0x38
// sig: undefined FUN_005567f8(void)
// callers(2): 0055e544 FUN_0055e544; 0055f8cc FUN_0055f8cc
// callees(0): 

undefined8 FUN_005567f8(int *param_1,int *param_2,int *param_3)

{
  *param_3 = (param_2[1] - param_1[1]) + (*param_2 - *param_1) * 1000000;
  return 0;
}



//==== 00556830  ns=Global  size=0x48
// sig: undefined FUN_00556830(void)
// callers(2): 00556c50 FUN_00556c50; 00556e2c FUN_00556e2c
// callees(0): 

undefined8 FUN_00556830(int *param_1,int *param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  uVar2 = 2;
  if ((param_1 != (int *)0x0) && (param_2 != (int *)0x0)) {
    iVar1 = *param_1;
    uVar2 = 0;
    *param_2 = iVar1;
    *param_2 = iVar1 + (uint)param_1[1] / 1000000;
  }
  return uVar2;
}



//==== 00556878  ns=Global  size=0x60
// sig: undefined FUN_00556878(void)
// callers(2): 00556bb8 FUN_00556bb8; 00556eb4 FUN_00556eb4
// callees(0): 

undefined8 FUN_00556878(uint *param_1,int *param_2)

{
  undefined8 uVar1;
  
  uVar1 = 2;
  if ((param_1 != (uint *)0x0) && (param_2 != (int *)0x0)) {
    uVar1 = 0x641;
    if (*param_1 < 0x418936) {
      uVar1 = 0;
      *param_2 = *param_1 * 1000 + param_1[1] / 1000;
    }
  }
  return uVar1;
}



//==== 005568d8  ns=Global  size=0x50
// sig: undefined FUN_005568d8(void)
// callers(1): 00556b24 FUN_00556b24
// callees(0): 

undefined8 FUN_005568d8(uint *param_1,int *param_2)

{
  undefined8 uVar1;
  
  uVar1 = 2;
  if ((param_1 != (uint *)0x0) && (param_2 != (int *)0x0)) {
    uVar1 = 0x641;
    if (*param_1 < 0x10c5) {
      uVar1 = 0;
      *param_2 = *param_1 * 1000000 + param_1[1];
    }
  }
  return uVar1;
}



//==== 00556928  ns=Global  size=0x28
// sig: undefined FUN_00556928(void)
// callers(1): 0053f9b4 FUN_0053f9b4
// callees(1): 005571d8 FUN_005571d8

undefined4 FUN_00556928(void)

{
  undefined4 uVar1;
  
  uVar1 = FUN_005571d8();
  return uVar1;
}



//==== 00556950  ns=Global  size=0x28
// sig: undefined FUN_00556950(void)
// callers(0): 
// callees(1): 00557270 FUN_00557270

undefined4 FUN_00556950(void)

{
  undefined4 uVar1;
  
  uVar1 = FUN_00557270();
  return uVar1;
}



//==== 00556978  ns=Global  size=0x28
// sig: undefined FUN_00556978(void)
// callers(1): 005569a0 FUN_005569a0
// callees(1): 00557308 FUN_00557308

undefined4 FUN_00556978(void)

{
  undefined4 uVar1;
  
  uVar1 = FUN_00557308();
  return uVar1;
}



//==== 005569a0  ns=Global  size=0x68
// sig: undefined FUN_005569a0(void)
// callers(0): 
// callees(1): 00556978 FUN_00556978

undefined * FUN_005569a0(void)

{
  undefined *puVar1;
  int iVar2;
  
  puVar1 = PTR_DAT_0071b2a0;
  iVar2 = FUN_00556978(PTR_DAT_0071b2a0);
  if (iVar2 != 0) {
    puVar1[8] = 0;
    *(undefined8 *)puVar1 = 0x30303a30303a3030;
  }
  return puVar1;
}



//==== 00556a08  ns=Global  size=0x28
// sig: undefined FUN_00556a08(void)
// callers(0): 
// callees(1): 00556fe0 FUN_00556fe0

undefined4 FUN_00556a08(void)

{
  undefined4 uVar1;
  
  uVar1 = FUN_00556fe0();
  return uVar1;
}



//==== 00556a30  ns=Global  size=0x28
// sig: undefined FUN_00556a30(void)
// callers(0): 
// callees(1): 00556fd8 FUN_00556fd8

undefined4 FUN_00556a30(void)

{
  undefined4 uVar1;
  
  uVar1 = FUN_00556fd8();
  return uVar1;
}



//==== 00556a58  ns=Global  size=0x28
// sig: undefined FUN_00556a58(void)
// callers(16): 00545b74 FUN_00545b74; 00556a80 FUN_00556a80; 00556ce4 FUN_00556ce4; 00556d54 FUN_00556d54; 0056072c FUN_0056072c; 00561054 FUN_00561054; 00562954 FUN_00562954; 005633b0 FUN_005633b0; 0056aed8 FUN_0056aed8; 0056b458 FUN_0056b458; 0056b5c0 FUN_0056b5c0; 0056b6c4 FUN_0056b6c4; 0056b7c8 FUN_0056b7c8; 0056c6a8 FUN_0056c6a8; 0056eac4 FUN_0056eac4; 0056f674 FUN_0056f674
// callees(1): 00557148 FUN_00557148

undefined4 FUN_00556a58(void)

{
  undefined4 uVar1;
  
  uVar1 = FUN_00557148();
  return uVar1;
}



//==== 00556a80  ns=Global  size=0xa4
// sig: undefined FUN_00556a80(void)
// callers(4): 00556b24 FUN_00556b24; 00556bb8 FUN_00556bb8; 00556c50 FUN_00556c50; 00556db0 FUN_00556db0
// callees(2): 005566cc FUN_005566cc; 00556a58 FUN_00556a58

int FUN_00556a80(int param_1,int param_2)

{
  int iVar1;
  undefined1 auStack_30 [24];
  
  iVar1 = 2;
  if ((param_1 != 0) && (param_2 != 0)) {
    iVar1 = FUN_00556a58(auStack_30);
    if (iVar1 == 0) {
      iVar1 = FUN_005566cc(param_1,auStack_30,param_2);
      return iVar1;
    }
  }
  return iVar1;
}



//==== 00556b24  ns=Global  size=0x94
// sig: undefined FUN_00556b24(void)
// callers(0): 
// callees(2): 005568d8 FUN_005568d8; 00556a80 FUN_00556a80

int FUN_00556b24(int param_1,int param_2)

{
  int iVar1;
  undefined1 auStack_20 [16];
  
  iVar1 = 2;
  if (param_1 != 0) {
    if (param_2 != 0) {
      iVar1 = FUN_00556a80(param_1,auStack_20);
      if (iVar1 == 0) {
        iVar1 = FUN_005568d8(auStack_20,param_2);
        return iVar1;
      }
    }
  }
  return iVar1;
}



//==== 00556bb8  ns=Global  size=0x94
// sig: undefined FUN_00556bb8(void)
// callers(1): 0054efdc FUN_0054efdc
// callees(2): 00556878 FUN_00556878; 00556a80 FUN_00556a80

int FUN_00556bb8(int param_1,int param_2)

{
  int iVar1;
  undefined1 auStack_20 [16];
  
  iVar1 = 2;
  if (param_1 != 0) {
    if (param_2 != 0) {
      iVar1 = FUN_00556a80(param_1,auStack_20);
      if (iVar1 == 0) {
        iVar1 = FUN_00556878(auStack_20,param_2);
        return iVar1;
      }
    }
  }
  return iVar1;
}



//==== 00556c4c  ns=Global  size=0x4
// sig: undefined thunk_FUN_00556bb8(void)
// callers(11): 005458f0 FUN_005458f0; 005474b4 FUN_005474b4; 00550720 FUN_00550720; 00554ce4 FUN_00554ce4; 00556f44 FUN_00556f44; 0056bedc FUN_0056bedc; 0056c3b8 FUN_0056c3b8; 0056f3fc FUN_0056f3fc; 005a6d7c FUN_005a6d7c; 005a7050 FUN_005a7050; 005a8114 FUN_005a8114
// callees(0): 

int thunk_FUN_00556bb8(int param_1,int param_2)

{
  int iVar1;
  undefined1 auStack_20 [16];
  
  iVar1 = 2;
  if (param_1 != 0) {
    if (param_2 != 0) {
      iVar1 = FUN_00556a80(param_1,auStack_20);
      if (iVar1 == 0) {
        iVar1 = FUN_00556878(auStack_20,param_2);
        return iVar1;
      }
    }
  }
  return iVar1;
}



//==== 00556c50  ns=Global  size=0x94
// sig: undefined FUN_00556c50(void)
// callers(0): 
// callees(2): 00556830 FUN_00556830; 00556a80 FUN_00556a80

int FUN_00556c50(int param_1,int param_2)

{
  int iVar1;
  undefined1 auStack_20 [16];
  
  iVar1 = 2;
  if (param_1 != 0) {
    if (param_2 != 0) {
      iVar1 = FUN_00556a80(param_1,auStack_20);
      if (iVar1 == 0) {
        iVar1 = FUN_00556830(auStack_20,param_2);
        return iVar1;
      }
    }
  }
  return iVar1;
}



//==== 00556ce4  ns=Global  size=0x70
// sig: undefined FUN_00556ce4(void)
// callers(0): 
// callees(1): 00556a58 FUN_00556a58

int FUN_00556ce4(void)

{
  undefined *puVar1;
  int iVar2;
  
  puVar1 = PTR_DAT_0071b2a0;
  iVar2 = 1;
  if ((PTR_DAT_0071b2a0[9] != '\0') && (iVar2 = FUN_00556a58(PTR_DAT_0071b2a0 + 0xc), iVar2 == 0)) {
    puVar1[9] = 1;
    return 0;
  }
  return iVar2;
}



//==== 00556d54  ns=Global  size=0x5c
// sig: undefined FUN_00556d54(void)
// callers(3): 00546398 FUN_00546398; 00550d60 FUN_00550d60; 00556db0 FUN_00556db0
// callees(2): 00556a58 FUN_00556a58; 00556fd0 FUN_00556fd0

int FUN_00556d54(void)

{
  undefined *puVar1;
  int iVar2;
  
  puVar1 = PTR_DAT_0071b2a0;
  iVar2 = 0x640;
  if (PTR_DAT_0071b2a0[9] != '\x01') {
    FUN_00556fd0();
    iVar2 = FUN_00556a58(puVar1 + 0xc);
    if (iVar2 == 0) {
      puVar1[9] = 1;
    }
  }
  return iVar2;
}



//==== 00556db0  ns=Global  size=0x7c
// sig: undefined FUN_00556db0(void)
// callers(2): 00556e2c FUN_00556e2c; 00556eb4 FUN_00556eb4
// callees(2): 00556a80 FUN_00556a80; 00556d54 FUN_00556d54

ulonglong FUN_00556db0(int param_1)

{
  undefined *puVar1;
  ulonglong uVar2;
  uint uVar3;
  
  puVar1 = PTR_DAT_0071b2a0;
  uVar3 = 2;
  if ((param_1 != 0) && ((PTR_DAT_0071b2a0[9] != '\0' || (uVar3 = FUN_00556d54(), uVar3 == 0)))) {
    uVar2 = FUN_00556a80(puVar1 + 0xc,param_1);
    return uVar2;
  }
  return (ulonglong)uVar3;
}



//==== 00556e2c  ns=Global  size=0x88
// sig: undefined FUN_00556e2c(void)
// callers(0): 
// callees(2): 00556830 FUN_00556830; 00556db0 FUN_00556db0

int FUN_00556e2c(int param_1)

{
  int iVar1;
  undefined1 auStack_20 [16];
  
  iVar1 = 2;
  if (param_1 != 0) {
    iVar1 = FUN_00556db0(auStack_20);
    if (iVar1 == 0) {
      iVar1 = FUN_00556830(auStack_20,param_1);
      return iVar1;
    }
  }
  return iVar1;
}



//==== 00556eb4  ns=Global  size=0x88
// sig: undefined FUN_00556eb4(void)
// callers(0): 
// callees(2): 00556878 FUN_00556878; 00556db0 FUN_00556db0

int FUN_00556eb4(int param_1)

{
  int iVar1;
  undefined1 auStack_20 [16];
  
  iVar1 = 2;
  if (param_1 != 0) {
    iVar1 = FUN_00556db0(auStack_20);
    if (iVar1 == 0) {
      iVar1 = FUN_00556878(auStack_20,param_1);
      return iVar1;
    }
  }
  return iVar1;
}



//==== 00556f3c  ns=Global  size=0x4
// sig: undefined thunk_FUN_00556eb4(void)
// callers(7): 0054536c FUN_0054536c; 005474b4 FUN_005474b4; 0054ca88 FUN_0054ca88; 0054cc9c FUN_0054cc9c; 005574b0 FUN_005574b0; 0055769c FUN_0055769c; 005576c4 FUN_005576c4
// callees(0): 

int thunk_FUN_00556eb4(int param_1)

{
  int iVar1;
  undefined1 auStack_20 [16];
  
  iVar1 = 2;
  if (param_1 != 0) {
    iVar1 = FUN_00556db0(auStack_20);
    if (iVar1 == 0) {
      iVar1 = FUN_00556878(auStack_20,param_1);
      return iVar1;
    }
  }
  return iVar1;
}



//==== 00556f40  ns=Global  size=0x4
// sig: undefined thunk_FUN_00556a58(void)
// callers(20): 00546398 FUN_00546398; 005478bc FUN_005478bc; 0054efdc FUN_0054efdc; 0054fd38 FUN_0054fd38; 005502bc FUN_005502bc; 00550720 FUN_00550720; 00555e14 FUN_00555e14; 00556f44 FUN_00556f44; 005573e0 FUN_005573e0; 0055743c FUN_0055743c; 0056f3fc FUN_0056f3fc; 0056f7a8 FUN_0056f7a8; 0056f904 FUN_0056f904; 005a5b0c FUN_005a5b0c; 005a6d7c FUN_005a6d7c; 005a7050 FUN_005a7050; 005a7554 FUN_005a7554; 005a79d0 FUN_005a79d0; 005a8114 FUN_005a8114; 005a9dac FUN_005a9dac
// callees(0): 

undefined4 thunk_FUN_00556a58(void)

{
  undefined4 uVar1;
  
  uVar1 = FUN_00557148();
  return uVar1;
}



//==== 00556f44  ns=Global  size=0x8c
// sig: undefined FUN_00556f44(void)
// callers(0): 
// callees(2): 00556c4c thunk_FUN_00556bb8; 00556f40 thunk_FUN_00556a58

ulonglong FUN_00556f44(int param_1)

{
  ulonglong uVar1;
  ulonglong uVar2;
  undefined1 local_30 [4];
  undefined1 auStack_2c [12];
  
  uVar1 = thunk_FUN_00556a58(auStack_2c);
  uVar2 = uVar1;
  if ((int)uVar1 == 0) {
    do {
      uVar2 = uVar1;
      if (param_1 == 0) break;
      uVar2 = thunk_FUN_00556bb8(auStack_2c,local_30);
    } while (uVar2 == 0);
  }
  return uVar2 & 0xffffffff;
}



//==== 00556fd0  ns=Global  size=0x8
// sig: undefined FUN_00556fd0(void)
// callers(1): 00556d54 FUN_00556d54
// callees(0): 

undefined8 FUN_00556fd0(void)

{
  return 0;
}



//==== 00556fd8  ns=Global  size=0x8
// sig: undefined FUN_00556fd8(void)
// callers(1): 00556a30 FUN_00556a30
// callees(0): 

undefined8 FUN_00556fd8(void)

{
  return 7;
}



//==== 00556fe0  ns=Global  size=0x20
// sig: undefined FUN_00556fe0(void)
// callers(1): 00556a08 FUN_00556a08
// callees(1): 0800008d syscall::syscall_sys_timer_usleep

undefined8 FUN_00556fe0(void)

{
  syscall::syscall_sys_timer_usleep();
  return 0;
}



//==== 00557000  ns=Global  size=0xa4
// sig: undefined FUN_00557000(void)
// callers(1): 0055743c FUN_0055743c
// callees(1): 00650684 sys::sys_time_get_system_time

undefined8 FUN_00557000(uint *param_1,int *param_2)

{
  int iVar1;
  longlong lVar2;
  
  lVar2 = sys::sys_time_get_system_time();
  iVar1 = (int)((longlong)(lVar2 - ((ulonglong)*param_1 * 1000000 + (ulonglong)param_1[1])) / 1000);
  *param_2 = iVar1;
  if (iVar1 < 0) {
    *param_2 = 0;
  }
  return 0;
}



//==== 005570a4  ns=Global  size=0xa4
// sig: undefined FUN_005570a4(void)
// callers(0): 
// callees(1): 00650684 sys::sys_time_get_system_time

undefined8 FUN_005570a4(uint *param_1,int *param_2)

{
  int iVar1;
  longlong lVar2;
  
  lVar2 = sys::sys_time_get_system_time();
  iVar1 = (int)((longlong)(lVar2 - ((ulonglong)*param_1 * 1000000 + (ulonglong)param_1[1])) /
               1000000);
  *param_2 = iVar1;
  if (iVar1 < 0) {
    *param_2 = 0;
  }
  return 0;
}



//==== 00557148  ns=Global  size=0x90
// sig: undefined FUN_00557148(void)
// callers(1): 00556a58 FUN_00556a58
// callees(1): 00650684 sys::sys_time_get_system_time

undefined8 FUN_00557148(undefined4 *param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  
  uVar2 = 2;
  if (param_1 != (undefined4 *)0x0) {
    lVar1 = sys::sys_time_get_system_time();
    uVar2 = 0;
    *param_1 = (int)(lVar1 / 1000000);
    param_1[1] = (int)lVar1 + (int)((lVar1 / 1000000) * 0x3d09) * -0x40;
  }
  return uVar2;
}



//==== 005571d8  ns=Global  size=0x98
// sig: undefined FUN_005571d8(void)
// callers(1): 00556928 FUN_00556928
// callees(1): 005c58b0 FUN_005c58b0

undefined8 FUN_005571d8(undefined4 *param_1)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  undefined8 uVar3;
  undefined1 local_20 [16];
  
  uVar3 = 2;
  if (param_1 != (undefined4 *)0x0) {
    puVar2 = (undefined4 *)FUN_005c58b0(local_20);
    uVar3 = 0;
    param_1[6] = puVar2[5];
    param_1[5] = puVar2[4];
    param_1[4] = puVar2[3];
    param_1[3] = puVar2[2];
    param_1[2] = puVar2[1];
    param_1[1] = *puVar2;
    uVar1 = puVar2[6];
    param_1[8] = 0;
    param_1[7] = uVar1;
    *param_1 = 0;
  }
  return uVar3;
}



//==== 00557270  ns=Global  size=0x98
// sig: undefined FUN_00557270(void)
// callers(1): 00556950 FUN_00556950
// callees(1): 005c58b0 FUN_005c58b0

undefined8 FUN_00557270(undefined4 *param_1)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  undefined8 uVar3;
  undefined1 local_20 [16];
  
  uVar3 = 2;
  if (param_1 != (undefined4 *)0x0) {
    puVar2 = (undefined4 *)FUN_005c58b0(local_20);
    uVar3 = 0;
    param_1[6] = puVar2[5] + 0x76c;
    param_1[5] = puVar2[4] + 1;
    param_1[4] = puVar2[3];
    param_1[3] = puVar2[2];
    param_1[2] = puVar2[1];
    uVar1 = *puVar2;
    param_1[8] = 0;
    param_1[1] = uVar1;
    *param_1 = 0;
  }
  return uVar3;
}



//==== 00557308  ns=Global  size=0x7c
// sig: undefined FUN_00557308(void)
// callers(1): 00556978 FUN_00556978
// callees(2): 005c58b0 FUN_005c58b0; 005cd2a8 libc::snprintf
// strings: 0067d1e0: '%02d:%02d:%02d'

undefined8 FUN_00557308(char *param_1)

{
  undefined8 uVar1;
  undefined4 *puVar2;
  undefined1 local_20 [24];
  
  uVar1 = 2;
  if (param_1 != (char *)0x0) {
    puVar2 = (undefined4 *)FUN_005c58b0(local_20);
    libc::snprintf(param_1,PTR_s__02d__02d__02d_0071b2a4,puVar2[2],puVar2[1],*puVar2);
    uVar1 = 0;
  }
  return uVar1;
}



//==== 00557384  ns=Global  size=0x5c
// sig: undefined FUN_00557384(void)
// callers(2): 00548b58 FUN_00548b58; 00549200 FUN_00549200
// callees(1): 005d0140 libc::memset

undefined8 FUN_00557384(void)

{
  undefined *puVar1;
  
  puVar1 = PTR_DAT_0071b2a8;
  libc::memset(PTR_DAT_0071b2a8,0,0x19c);
  *(undefined4 *)(puVar1 + 0x1a8) = 0;
  *(undefined4 *)(puVar1 + 0x1a4) = 0;
  *(undefined4 *)(puVar1 + 0x1a0) = 0;
  *(undefined4 *)(puVar1 + 0x19c) = 0;
  return 0;
}



//==== 005573e0  ns=Global  size=0x5c
// sig: undefined FUN_005573e0(void)
// callers(2): 005a972c FUN_005a972c; 005abffc FUN_005abffc
// callees(2): 00556f40 thunk_FUN_00556a58; 005d0140 libc::memset

void FUN_005573e0(void)

{
  undefined *puVar1;
  
  puVar1 = PTR_DAT_0071b2a8;
  if (*(int *)(PTR_DAT_0071b2a8 + 0x1ac) == 0) {
    libc::memset(PTR_DAT_0071b2a8,0,0x19c);
    *(undefined4 *)(puVar1 + 0x1ac) = 1;
  }
  thunk_FUN_00556a58(puVar1 + 0x19c);
  return;
}



//==== 0055743c  ns=Global  size=0x74
// sig: undefined FUN_0055743c(void)
// callers(2): 005a8114 FUN_005a8114; 005ab2d0 FUN_005ab2d0
// callees(2): 00556f40 thunk_FUN_00556a58; 00557000 FUN_00557000

void FUN_0055743c(undefined4 *param_1)

{
  undefined *puVar1;
  uint local_30 [6];
  
  puVar1 = PTR_DAT_0071b2a8 + 0x19c;
  *param_1 = 0;
  FUN_00557000(puVar1,local_30);
  if (2999 < local_30[0]) {
    *param_1 = 1;
    thunk_FUN_00556a58(puVar1);
  }
  return;
}



//==== 005574b0  ns=Global  size=0x44
// sig: undefined FUN_005574b0(void)
// callers(2): 005574f4 FUN_005574f4; 005a1930 FUN_005a1930
// callees(1): 00556f3c thunk_FUN_00556eb4

void FUN_005574b0(undefined4 param_1)

{
  undefined *puVar1;
  
  puVar1 = PTR_DAT_0071b2a8;
  thunk_FUN_00556eb4(PTR_DAT_0071b2a8 + 0x1a4);
  *(undefined4 *)(puVar1 + 0x1a8) = param_1;
  return;
}



//==== 005574f4  ns=Global  size=0x1a8
// sig: undefined FUN_005574f4(void)
// callers(1): 005a4700 FUN_005a4700
// callees(2): 005574b0 FUN_005574b0; 005c5ad0 libc::memcpy

undefined8 FUN_005574f4(longlong param_1,longlong param_2)

{
  int iVar1;
  uint uVar2;
  ulonglong uVar3;
  undefined *__src;
  uint uVar4;
  undefined8 uVar5;
  uint uVar6;
  uint *puVar7;
  ulonglong uVar8;
  uint auStack_1b0 [100];
  
  __src = PTR_DAT_0071b2a8;
  uVar5 = 1;
  if (*(int *)(PTR_DAT_0071b2a8 + 0x1ac) != 0) {
    iVar1 = *(int *)(PTR_DAT_0071b2a8 + 0x194);
    uVar3 = (ulonglong)(param_1 << 0x20) >> 0x21;
    uVar4 = *(uint *)(PTR_DAT_0071b2a8 + 400);
    *(uint *)(PTR_DAT_0071b2a8 + iVar1 * 4) = (uint)param_1 >> 1;
    if (uVar4 < 100) {
      *(uint *)(__src + 400) = uVar4 + 1;
    }
    uVar4 = iVar1 + 1;
    if (99 < uVar4) {
      uVar4 = 0;
    }
    *(uint *)(__src + 0x194) = uVar4;
    libc::memcpy(auStack_1b0,__src,400);
    uVar4 = *(uint *)(__src + 400);
    uVar6 = uVar4;
    while (uVar6 = uVar6 - 1, uVar6 != 0) {
      uVar8 = (ulonglong)uVar6;
      puVar7 = auStack_1b0;
      if (uVar6 == 0) {
        uVar8 = 1;
      }
      do {
        uVar2 = puVar7[1];
        if (uVar2 < *puVar7) {
          puVar7[1] = *puVar7;
          *puVar7 = uVar2;
        }
        uVar8 = uVar8 - 1;
        puVar7 = puVar7 + 1;
      } while (uVar8 != 0);
    }
    if (uVar4 / 0x14 == 0) {
      uVar8 = (ulonglong)auStack_1b0[1];
    }
    else {
      uVar8 = (ulonglong)auStack_1b0[uVar4 / 0x14];
    }
    uVar5 = 0;
    if (uVar3 <= uVar8) {
      FUN_005574b0(uVar3 + param_2 & 0xffffffff);
      return 0;
    }
  }
  return uVar5;
}



//==== 0055769c  ns=Global  size=0x28
// sig: undefined FUN_0055769c(void)
// callers(2): 005a464c FUN_005a464c; 005a4700 FUN_005a4700
// callees(1): 00556f3c thunk_FUN_00556eb4

undefined4 FUN_0055769c(void)

{
  undefined4 uVar1;
  
  uVar1 = thunk_FUN_00556eb4();
  return uVar1;
}



//==== 005576c4  ns=Global  size=0x54
// sig: undefined FUN_005576c4(void)
// callers(2): 00545398 FUN_00545398; 005474b4 FUN_005474b4
// callees(1): 00556f3c thunk_FUN_00556eb4

undefined4 FUN_005576c4(int *param_1)

{
  undefined4 uVar1;
  int local_30 [6];
  
  uVar1 = thunk_FUN_00556eb4(local_30);
  *param_1 = (local_30[0] - *(int *)(PTR_DAT_0071b2a8 + 0x1a4)) + *(int *)(PTR_DAT_0071b2a8 + 0x1a8)
  ;
  return uVar1;
}



//==== 00557718  ns=Global  size=0x1c
// sig: undefined FUN_00557718(void)
// callers(5): 0054d440 FUN_0054d440; 0054e04c FUN_0054e04c; 0054e2cc FUN_0054e2cc; 0054e6ec FUN_0054e6ec; 0054e7d0 FUN_0054e7d0
// callees(0): 

bool FUN_00557718(uint param_1)

{
  return param_1 < 0xffff;
}



//==== 00557734  ns=Global  size=0x40
// sig: undefined FUN_00557734(void)
// callers(4): 00557e84 FUN_00557e84; 00558240 FUN_00558240; 00558604 FUN_00558604; 00558840 FUN_00558840
// callees(0): 

void FUN_00557734(int param_1,undefined2 param_2,int *param_3)

{
  int iVar1;
  
  if (param_3 == (int *)0x0) {
    return;
  }
  if (param_3[1] == 0) {
    return;
  }
  if (param_3[2] == 0) {
    return;
  }
  iVar1 = *param_3;
  *(undefined2 *)(param_1 * 4 + param_3[2]) = param_2;
  *param_3 = iVar1 + 1;
  return;
}



//==== 00557774  ns=Global  size=0x218
// sig: undefined FUN_00557774(void)
// callers(0): 
// callees(2): 00551f78 FUN_00551f78; 005c5ad0 libc::memcpy

undefined8
FUN_00557774(void *param_1,uint param_2,size_t *param_3,char param_4,uint param_5,byte param_6,
            void *param_7,void *param_8)

{
  size_t __n;
  undefined1 *puVar1;
  undefined1 *__dest;
  uint in_stack_00000074;
  char local_250;
  byte local_24f;
  undefined1 auStack_24e [2];
  undefined1 auStack_24c [508];
  
  if (((((1 < (byte)(param_4 - 0xbU)) && (param_4 != '\x0e')) && (param_4 != '\r')) &&
      ((param_4 != '\x04' && (param_4 != '\x05')))) && (param_4 != '\x06')) {
    return 2;
  }
  local_250 = param_4;
  if (param_5 == 0) {
    puVar1 = auStack_24e;
    local_24f = param_6;
    libc::memcpy(puVar1,param_7,(uint)param_6);
    __n = param_6 + 2;
  }
  else {
    local_24f = param_6 | 0x80;
    puVar1 = auStack_24c;
    FUN_00551f78(auStack_24e,param_5 & 0xffff);
    libc::memcpy(puVar1,param_7,(uint)param_6);
    __n = param_6 + 4;
  }
  if (param_4 == '\v') {
    if (param_8 == (void *)0x0) {
      return 2;
    }
    if (in_stack_00000074 == 0) {
      return 2;
    }
    puVar1 = puVar1 + param_6;
    __dest = puVar1;
    if (1 < in_stack_00000074) {
      __dest = puVar1 + 2;
      __n = __n + 2;
      FUN_00551f78(puVar1,in_stack_00000074 & 0xffff);
    }
    __n = __n + in_stack_00000074 * 2;
    if (param_2 <= __n) {
      return 2;
    }
    libc::memcpy(__dest,param_8,in_stack_00000074 * 2);
  }
  if ((__n <= param_2) && (param_1 != (void *)0x0)) {
    libc::memcpy(param_1,&local_250,__n);
    *param_3 = __n;
    return 0;
  }
  return 2;
}



//==== 0055798c  ns=Global  size=0x15c
// sig: undefined FUN_0055798c(void)
// callers(0): 
// callees(2): 00551f78 FUN_00551f78; 005c5ad0 libc::memcpy

undefined8
FUN_0055798c(void *param_1,uint param_2,uint *param_3,int param_4,undefined2 param_5,
            undefined2 param_6)

{
  uint __n;
  char local_230;
  undefined1 auStack_22f [2];
  undefined1 auStack_22d [509];
  
  local_230 = (char)param_4;
  if ((param_4 - 1U & 0xff) < 3) {
    FUN_00551f78(auStack_22f,param_5);
    __n = 3;
    if (param_4 != 7) goto LAB_005579f4;
  }
  else {
    if (local_230 != '\a') {
      if (((local_230 != '\b') && (local_230 != '\n')) && (local_230 != '\t')) {
        return 2;
      }
      __n = 3;
      FUN_00551f78(auStack_22f,param_5);
      goto LAB_005579f4;
    }
    FUN_00551f78(auStack_22f,param_5);
  }
  __n = 5;
  FUN_00551f78(auStack_22d,param_6);
LAB_005579f4:
  if ((__n <= param_2) && (param_1 != (void *)0x0)) {
    libc::memcpy(param_1,&local_230,__n);
    *param_3 = __n;
    return 0;
  }
  return 2;
}



//==== 00557ae8  ns=Global  size=0x5c
// sig: undefined FUN_00557ae8(void)
// callers(2): 00557b44 FUN_00557b44; 00557b94 FUN_00557b94
// callees(1): 005519f0 FUN_005519f0

void FUN_00557ae8(undefined4 *param_1)

{
  if (param_1 != (undefined4 *)0x0) {
    if (param_1[2] != 0) {
      FUN_005519f0(param_1 + 2);
    }
    param_1[2] = 0;
    *param_1 = 0;
    param_1[1] = 0;
  }
  return;
}



//==== 00557b44  ns=Global  size=0x50
// sig: undefined FUN_00557b44(void)
// callers(5): 00557e84 FUN_00557e84; 00558098 FUN_00558098; 00558604 FUN_00558604; 0055877c FUN_0055877c; 00558ba0 FUN_00558ba0
// callees(1): 00557ae8 FUN_00557ae8

void FUN_00557b44(int param_1,int *param_2)

{
  int iVar1;
  short *psVar2;
  
  psVar2 = (short *)(param_1 * 4 + param_2[2]);
  if (*psVar2 == -1) {
    return;
  }
  iVar1 = *param_2;
  psVar2[1] = 0;
  *param_2 = iVar1 + -1;
  *psVar2 = -1;
  if (iVar1 + -1 != 0) {
    return;
  }
  FUN_00557ae8(param_2);
  return;
}



//==== 00557b94  ns=Global  size=0x58
// sig: undefined FUN_00557b94(void)
// callers(1): 005478bc FUN_005478bc
// callees(2): 005519f0 FUN_005519f0; 00557ae8 FUN_00557ae8

void FUN_00557b94(int *param_1)

{
  if (*param_1 != 0) {
    FUN_00557ae8(*param_1);
    FUN_005519f0(param_1);
    *param_1 = 0;
  }
  return;
}



//==== 00557bec  ns=Global  size=0xdc
// sig: undefined FUN_00557bec(void)
// callers(6): 00557cc8 FUN_00557cc8; 00557e84 FUN_00557e84; 00558240 FUN_00558240; 00558604 FUN_00558604; 00558840 FUN_00558840; 00558c7c FUN_00558c7c
// callees(2): 005519f0 FUN_005519f0; 00551de8 FUN_00551de8

undefined8 FUN_00557bec(uint param_1,int param_2)

{
  int iVar2;
  undefined8 uVar1;
  undefined2 *puVar3;
  uint uVar4;
  ulonglong uVar5;
  
  if ((param_2 == 0) || (0xffff < param_1)) {
    uVar1 = 2;
  }
  else {
    uVar4 = (param_1 & 0xfffffff0) + 0x10;
    *(uint *)(param_2 + 4) = uVar4;
    if (0xffff < uVar4) {
      *(undefined4 *)(param_2 + 4) = 0xffff;
    }
    FUN_005519f0(param_2 + 8);
    iVar2 = FUN_00551de8(param_2 + 8,((ulonglong)*(uint *)(param_2 + 4) & 0x3fffffff) << 2);
    uVar1 = 100;
    if (iVar2 == 0) {
      if (*(uint *)(param_2 + 4) != 0) {
        uVar5 = (ulonglong)*(uint *)(param_2 + 4);
        puVar3 = *(undefined2 **)(param_2 + 8);
        do {
          *puVar3 = 0xffff;
          uVar5 = uVar5 - 1;
          puVar3 = puVar3 + 2;
        } while (uVar5 != 0);
      }
      uVar1 = 0;
    }
  }
  return uVar1;
}



//==== 00557cc8  ns=Global  size=0x128
// sig: undefined FUN_00557cc8(void)
// callers(5): 00557e84 FUN_00557e84; 00558240 FUN_00558240; 00558604 FUN_00558604; 00558840 FUN_00558840; 00558c7c FUN_00558c7c
// callees(4): 005519f0 FUN_005519f0; 00551de8 FUN_00551de8; 00557bec FUN_00557bec; 005c5ad0 libc::memcpy

undefined8 FUN_00557cc8(undefined4 param_1,int param_2)

{
  size_t __n;
  undefined8 uVar1;
  int iVar2;
  void *local_40 [4];
  
  uVar1 = 2;
  if (param_2 != 0) {
    iVar2 = FUN_00551de8(local_40,((ulonglong)*(uint *)(param_2 + 4) & 0x3fffffff) << 2);
    if (iVar2 == 0) {
      __n = *(int *)(param_2 + 4) << 2;
      libc::memcpy(local_40[0],*(void **)(param_2 + 8),__n);
      FUN_005519f0(param_2 + 8);
      iVar2 = FUN_00557bec(param_1,param_2);
      if (iVar2 == 0) {
        libc::memcpy(*(void **)(param_2 + 8),local_40[0],__n);
        FUN_005519f0(local_40);
        return 0;
      }
    }
    uVar1 = 100;
  }
  return uVar1;
}



//==== 00557df0  ns=Global  size=0x94
// sig: undefined FUN_00557df0(void)
// callers(18): 00548b58 FUN_00548b58; 00549200 FUN_00549200; 00557e84 FUN_00557e84; 00558098 FUN_00558098; 00558240 FUN_00558240; 00558474 FUN_00558474; 00558604 FUN_00558604; 0055877c FUN_0055877c; 00558840 FUN_00558840; 00558968 FUN_00558968; 00558a0c FUN_00558a0c; 00558a74 FUN_00558a74; 00558b38 FUN_00558b38; 00558ba0 FUN_00558ba0; 00558c7c FUN_00558c7c; 00558d74 FUN_00558d74; 00558e18 FUN_00558e18; 00558e9c FUN_00558e9c
// callees(1): 00551de8 FUN_00551de8

undefined8 FUN_00557df0(int *param_1)

{
  undefined4 *puVar1;
  longlong lVar2;
  undefined8 uVar3;
  
  uVar3 = 0xdac3;
  if (*param_1 == 0) {
    lVar2 = FUN_00551de8(param_1,0xc);
    uVar3 = 100;
    if (lVar2 == 0) {
      puVar1 = (undefined4 *)*param_1;
      puVar1[2] = 0;
      *puVar1 = 0;
      puVar1[1] = 0;
      return 0;
    }
  }
  return uVar3;
}



//==== 00557e84  ns=Global  size=0x214
// sig: undefined FUN_00557e84(void)
// callers(1): 0054da4c FUN_0054da4c
// callees(5): 00557734 FUN_00557734; 00557b44 FUN_00557b44; 00557bec FUN_00557bec; 00557cc8 FUN_00557cc8; 00557df0 FUN_00557df0

undefined8
FUN_00557e84(int param_1,int param_2,uint param_3,short *param_4,uint param_5,int param_6)

{
  bool bVar1;
  int iVar3;
  undefined8 uVar2;
  short *psVar4;
  short sVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  int iStack00000058;
  
  iStack00000058 = param_6;
  if (param_6 == 0) {
    FUN_00557df0(&stack0x00000058);
  }
  uVar6 = (param_2 * 8 + param_3) - 1;
  if (0xffff < uVar6) {
    uVar6 = 0xffff;
  }
  if (((*(int *)(iStack00000058 + 4) == 0) &&
      (iVar3 = FUN_00557bec(uVar6,iStack00000058), iVar3 != 0)) ||
     ((*(uint *)(iStack00000058 + 4) <= uVar6 && (iVar3 = FUN_00557cc8(uVar6), iVar3 != 0)))) {
    uVar2 = 100;
  }
  else {
    sVar5 = 0;
    if (param_5 == 1) {
      sVar5 = *param_4;
    }
    uVar6 = 0;
    iVar3 = 0;
    if (param_2 != 0) {
      do {
        uVar8 = 0;
        uVar7 = param_3;
        do {
          if ((1 << (uVar8 & 0x3f) & (uint)*(byte *)(iVar3 + param_1)) != 0) {
            if (1 < param_5) {
              sVar5 = param_4[uVar6 & 0xffff];
            }
            psVar4 = (short *)((uVar7 & 0xffff) * 4 + *(int *)(iStack00000058 + 8));
            if (*psVar4 == -1) {
              if (sVar5 != -1) {
                FUN_00557734(uVar7 & 0xffff,sVar5);
              }
            }
            else if (sVar5 == -1) {
              FUN_00557b44(uVar7 & 0xffff,iStack00000058);
            }
            else {
              *psVar4 = sVar5;
            }
            uVar6 = uVar6 + 1;
          }
          bVar1 = uVar8 != 7;
          uVar7 = uVar7 + 1;
          uVar8 = uVar8 + 1;
        } while (bVar1);
        iVar3 = iVar3 + 1;
        param_3 = param_3 + 8;
      } while (param_2 != iVar3);
    }
    uVar2 = 0;
  }
  return uVar2;
}



//==== 00558098  ns=Global  size=0x1a8
// sig: undefined FUN_00558098(void)
// callers(0): 
// callees(2): 00557b44 FUN_00557b44; 00557df0 FUN_00557df0

undefined8 FUN_00558098(int param_1,int param_2,uint param_3,uint param_4,int *param_5)

{
  bool bVar1;
  uint uVar2;
  byte bVar3;
  int iVar4;
  byte *pbVar5;
  uint uVar6;
  uint uVar7;
  int *piStack00000050;
  
  if (param_1 != 0) {
    piStack00000050 = param_5;
    if (param_5 == (int *)0x0) {
      FUN_00557df0(&stack0x00000050);
    }
    if ((*piStack00000050 != 0) && (param_3 < (uint)piStack00000050[1])) {
      iVar4 = 0;
      if (param_2 != 0) {
        do {
          uVar7 = 0;
          pbVar5 = (byte *)(iVar4 + param_1);
          uVar6 = param_3;
LAB_00558158:
          do {
            uVar2 = 1 << (uVar7 & 0x3f);
            if ((uVar2 & *pbVar5) != 0) {
              bVar3 = *pbVar5 & ~(byte)uVar2;
              if (piStack00000050[1] - 1U < (uVar6 & 0xffff)) {
                bVar1 = uVar7 == 7;
                *pbVar5 = bVar3;
                uVar6 = uVar6 + 1;
                uVar7 = uVar7 + 1;
                if (bVar1) break;
                goto LAB_00558158;
              }
              if (*(ushort *)((uVar6 & 0xffff) * 4 + piStack00000050[2]) == param_4) {
                FUN_00557b44(uVar6 & 0xffff);
              }
              else {
                *pbVar5 = bVar3;
              }
            }
            bVar1 = uVar7 != 7;
            uVar6 = uVar6 + 1;
            uVar7 = uVar7 + 1;
          } while (bVar1);
          iVar4 = iVar4 + 1;
          param_3 = param_3 + 8;
        } while (param_2 != iVar4);
      }
      return 0;
    }
  }
  return 2;
}



//==== 00558240  ns=Global  size=0x234
// sig: undefined FUN_00558240(void)
// callers(0): 
// callees(4): 00557734 FUN_00557734; 00557bec FUN_00557bec; 00557cc8 FUN_00557cc8; 00557df0 FUN_00557df0

undefined8 FUN_00558240(int param_1,int param_2,uint param_3,undefined4 param_4,int param_5)

{
  bool bVar1;
  byte bVar2;
  uint uVar3;
  int iVar4;
  short sVar5;
  uint uVar6;
  uint uVar7;
  int iStack00000050;
  
  if (param_1 != 0) {
    iStack00000050 = param_5;
    if (param_5 == 0) {
      FUN_00557df0(&stack0x00000050);
    }
    uVar6 = (param_2 * 8 + param_3) - 1 & 0xffff;
    if (((*(short *)(iStack00000050 + 6) == 0) &&
        (iVar4 = FUN_00557bec(uVar6,iStack00000050), iVar4 != 0)) ||
       ((*(uint *)(iStack00000050 + 4) <= uVar6 && (iVar4 = FUN_00557cc8(uVar6), iVar4 != 0)))) {
      return 100;
    }
    sVar5 = 0;
    iVar4 = 0;
    if (param_2 != 0) {
      do {
        uVar7 = 0;
        uVar6 = param_3;
        do {
          uVar3 = 1 << (uVar7 & 0x3f);
          bVar2 = *(byte *)(iVar4 + param_1);
          if ((uVar3 & bVar2) != 0) {
            if (*(short *)((uVar6 & 0xffff) * 4 + *(int *)(iStack00000050 + 8)) == -1) {
              sVar5 = sVar5 + 1;
              FUN_00557734(uVar6 & 0xffff,param_4,iStack00000050);
            }
            else {
              *(byte *)(iVar4 + param_1) = bVar2 & ~(byte)uVar3;
            }
          }
          bVar1 = uVar7 != 7;
          uVar6 = uVar6 + 1;
          uVar7 = uVar7 + 1;
        } while (bVar1);
        iVar4 = iVar4 + 1;
        param_3 = param_3 + 8;
      } while (param_2 != iVar4);
      if (sVar5 != 0) {
        return 0;
      }
    }
  }
  return 2;
}



//==== 00558474  ns=Global  size=0x190
// sig: undefined FUN_00558474(void)
// callers(0): 
// callees(1): 00557df0 FUN_00557df0

void FUN_00558474(int param_1,int param_2,ulonglong param_3,undefined2 *param_4,uint *param_5,
                 int *param_6)

{
  uint uVar1;
  uint uVar2;
  ulonglong uVar3;
  uint uVar4;
  int iVar5;
  longlong lVar6;
  int *piStack00000058;
  
  if (param_1 != 0) {
    piStack00000058 = param_6;
    if (param_6 == (int *)0x0) {
      FUN_00557df0(&stack0x00000058);
    }
    if ((*piStack00000058 != 0) &&
       (uVar1 = piStack00000058[1], (param_3 & 0xffffffff) < (ulonglong)uVar1)) {
      uVar2 = 0;
      if (param_2 != 0) {
        uVar2 = 0;
        iVar5 = 0;
        do {
          uVar4 = 0;
          lVar6 = 8;
          uVar3 = param_3;
          do {
            if ((1 << (uVar4 & 0x3f) & (uint)*(byte *)(iVar5 + param_1)) != 0) {
              if ((uVar3 & 0xffff) < (ulonglong)uVar1) {
                param_4[uVar2 & 0xffff] =
                     *(undefined2 *)((int)((uVar3 & 0xffff) << 2) + piStack00000058[2]);
              }
              else {
                param_4[uVar2 & 0xffff] = 0xffff;
              }
              uVar2 = uVar2 + 1;
            }
            uVar4 = uVar4 + 1;
            uVar3 = uVar3 + 1;
            lVar6 = lVar6 + -1;
          } while (lVar6 != 0);
          iVar5 = iVar5 + 1;
          param_3 = param_3 + 8;
        } while (param_2 != iVar5);
        uVar2 = uVar2 & 0xffff;
      }
      *param_5 = uVar2;
      return;
    }
    *param_4 = 0xffff;
    *param_5 = 1;
  }
  return;
}



//==== 00558604  ns=Global  size=0x178
// sig: undefined FUN_00558604(void)
// callers(1): 0054da4c FUN_0054da4c
// callees(5): 00557734 FUN_00557734; 00557b44 FUN_00557b44; 00557bec FUN_00557bec; 00557cc8 FUN_00557cc8; 00557df0 FUN_00557df0

undefined8 FUN_00558604(ulonglong param_1,int param_2,int param_3)

{
  int iVar1;
  short *psVar2;
  int iStack00000040;
  
  iStack00000040 = param_3;
  if (param_3 == 0) {
    FUN_00557df0(&stack0x00000040);
  }
  if (*(uint *)(iStack00000040 + 4) == 0) {
    if (param_2 != 0xffff) {
      iVar1 = FUN_00557bec(param_1 & 0xffffffff,iStack00000040);
joined_r0x005586ac:
      if (iVar1 != 0) {
        return 100;
      }
      FUN_00557734(param_1 & 0xffffffff,param_2,iStack00000040);
      return 0;
    }
  }
  else if ((param_1 & 0xffffffff) < (ulonglong)*(uint *)(iStack00000040 + 4)) {
    psVar2 = (short *)((int)((param_1 & 0xffffffff) << 2) + *(int *)(iStack00000040 + 8));
    if (*psVar2 != -1) {
      if (param_2 == 0xffff) {
        FUN_00557b44(param_1 & 0xffffffff,iStack00000040);
        return 0;
      }
      *psVar2 = (short)param_2;
      return 0;
    }
    if (param_2 != 0xffff) {
      FUN_00557734(param_1 & 0xffffffff,param_2);
      return 0;
    }
  }
  else if (param_2 != 0xffff) {
    iVar1 = FUN_00557cc8(param_1 & 0xffffffff,iStack00000040);
    goto joined_r0x005586ac;
  }
  return 0;
}



//==== 0055877c  ns=Global  size=0xc4
// sig: undefined FUN_0055877c(void)
// callers(0): 
// callees(2): 00557b44 FUN_00557b44; 00557df0 FUN_00557df0

undefined8 FUN_0055877c(ulonglong param_1,uint param_2,int *param_3)

{
  int *piStack00000040;
  
  piStack00000040 = param_3;
  if (param_3 == (int *)0x0) {
    FUN_00557df0(&stack0x00000040);
  }
  if (param_2 != 0xffff) {
    if ((*piStack00000040 != 0) && ((param_1 & 0xffffffff) < (ulonglong)(uint)piStack00000040[1])) {
      if (*(ushort *)((int)((param_1 & 0xffffffff) << 2) + piStack00000040[2]) == param_2) {
        FUN_00557b44(param_1 & 0xffffffff);
        return 0;
      }
    }
  }
  return 2;
}



//==== 00558840  ns=Global  size=0x128
// sig: undefined FUN_00558840(void)
// callers(0): 
// callees(4): 00557734 FUN_00557734; 00557bec FUN_00557bec; 00557cc8 FUN_00557cc8; 00557df0 FUN_00557df0

undefined8 FUN_00558840(ulonglong param_1,uint *param_2,int param_3)

{
  uint uVar1;
  undefined8 uVar2;
  int iVar3;
  int iStack00000040;
  
  iStack00000040 = param_3;
  if (param_3 == 0) {
    FUN_00557df0(&stack0x00000040);
  }
  uVar2 = 2;
  if (*param_2 != 0xffff) {
    if (*(uint *)(iStack00000040 + 4) == 0) {
      iVar3 = FUN_00557bec(param_1 & 0xffffffff,iStack00000040);
    }
    else {
      if ((param_1 & 0xffffffff) < (ulonglong)*(uint *)(iStack00000040 + 4)) {
        uVar1 = (uint)*(ushort *)((int)((param_1 & 0xffffffff) << 2) + *(int *)(iStack00000040 + 8))
        ;
        if (uVar1 != 0xffff) {
          *param_2 = uVar1;
          return 2;
        }
        FUN_00557734(param_1 & 0xffffffff,*param_2);
        return 0;
      }
      iVar3 = FUN_00557cc8(param_1 & 0xffffffff,iStack00000040);
    }
    if (iVar3 == 0) {
      FUN_00557734(param_1 & 0xffffffff,*param_2,iStack00000040);
      return 0;
    }
    uVar2 = 100;
  }
  return uVar2;
}



//==== 00558968  ns=Global  size=0xa4
// sig: undefined FUN_00558968(void)
// callers(1): 0054d440 FUN_0054d440
// callees(1): 00557df0 FUN_00557df0

void FUN_00558968(uint param_1,uint *param_2,int *param_3)

{
  uint uVar1;
  int *piStack00000040;
  
  *param_2 = 0xffff;
  piStack00000040 = param_3;
  if (param_3 == (int *)0x0) {
    FUN_00557df0(&stack0x00000040);
  }
  if ((((*piStack00000040 != 0) && (piStack00000040[2] != 0)) &&
      (param_1 < (uint)piStack00000040[1])) &&
     (uVar1 = (uint)*(ushort *)(param_1 * 4 + piStack00000040[2]), uVar1 != 0xffff)) {
    *param_2 = uVar1;
  }
  return;
}



//==== 00558a0c  ns=Global  size=0x68
// sig: undefined FUN_00558a0c(void)
// callers(1): 0054d154 FUN_0054d154
// callees(1): 00557df0 FUN_00557df0

void FUN_00558a0c(undefined4 *param_1,undefined4 *param_2)

{
  undefined4 *puStack00000038;
  
  if (param_2 != (undefined4 *)0x0) {
    *param_1 = *param_2;
    return;
  }
  puStack00000038 = param_2;
  FUN_00557df0(&stack0x00000038);
  *param_1 = *puStack00000038;
  return;
}



//==== 00558a74  ns=Global  size=0xc4
// sig: undefined FUN_00558a74(void)
// callers(1): 0054d014 FUN_0054d014
// callees(2): 00557df0 FUN_00557df0; 005c5ad0 libc::memcpy

undefined8 FUN_00558a74(void *param_1,uint *param_2,int param_3)

{
  undefined8 uVar1;
  int iStack00000040;
  
  iStack00000040 = param_3;
  if (param_3 == 0) {
    FUN_00557df0(&stack0x00000040);
  }
  if (*param_2 < *(uint *)(iStack00000040 + 4)) {
    libc::memcpy(param_1,*(void **)(iStack00000040 + 8),*param_2 << 2);
    uVar1 = 0xdac2;
  }
  else {
    if (*(void **)(iStack00000040 + 8) != (void *)0x0) {
      libc::memcpy(param_1,*(void **)(iStack00000040 + 8),*(uint *)(iStack00000040 + 4) << 2);
    }
    uVar1 = 0;
    *param_2 = *(uint *)(iStack00000040 + 4);
  }
  return uVar1;
}



//==== 00558b38  ns=Global  size=0x68
// sig: undefined FUN_00558b38(void)
// callers(1): 0054d074 FUN_0054d074
// callees(1): 00557df0 FUN_00557df0

void FUN_00558b38(undefined4 *param_1,int param_2)

{
  int iStack00000038;
  
  if (param_2 != 0) {
    *param_1 = *(undefined4 *)(param_2 + 4);
    return;
  }
  iStack00000038 = param_2;
  FUN_00557df0(&stack0x00000038);
  *param_1 = *(undefined4 *)(iStack00000038 + 4);
  return;
}



//==== 00558ba0  ns=Global  size=0xdc
// sig: undefined FUN_00558ba0(void)
// callers(2): 005474b4 FUN_005474b4; 0054da4c FUN_0054da4c
// callees(2): 00557b44 FUN_00557b44; 00557df0 FUN_00557df0

void FUN_00558ba0(uint param_1,int *param_2)

{
  ulonglong uVar1;
  int *piVar2;
  ulonglong uVar3;
  int *piStack00000038;
  
  piStack00000038 = param_2;
  if (param_2 == (int *)0x0) {
    FUN_00557df0(&stack0x00000038);
  }
  if (((param_1 != 0xffff) && (*piStack00000038 != 0)) && (piStack00000038[1] != 0)) {
    uVar3 = 0;
    piVar2 = piStack00000038;
    do {
      while( true ) {
        if (*(ushort *)((int)((uVar3 & 0xffffffff) << 2) + piVar2[2]) != param_1) break;
        FUN_00557b44(uVar3 & 0xffffffff);
        uVar1 = uVar3 + 1;
        uVar3 = uVar3 + 1;
        piVar2 = piStack00000038;
        if ((ulonglong)(uint)piStack00000038[1] <= (uVar1 & 0xffffffff)) {
          return;
        }
      }
      uVar1 = uVar3 + 1;
      uVar3 = uVar3 + 1;
    } while ((uVar1 & 0xffffffff) < (ulonglong)(uint)piVar2[1]);
  }
  return;
}



//==== 00558c7c  ns=Global  size=0xf8
// sig: undefined FUN_00558c7c(void)
// callers(2): 0054e2cc FUN_0054e2cc; 0054e7d0 FUN_0054e7d0
// callees(3): 00557bec FUN_00557bec; 00557cc8 FUN_00557cc8; 00557df0 FUN_00557df0

void FUN_00558c7c(uint param_1,int param_2)

{
  short sVar1;
  short *psVar2;
  int iVar3;
  int iStack00000038;
  
  iStack00000038 = param_2;
  if (param_2 == 0) {
    FUN_00557df0(&stack0x00000038);
  }
  if (*(uint *)(iStack00000038 + 4) == 0) {
    iVar3 = FUN_00557bec(param_1);
  }
  else {
    if (param_1 < *(uint *)(iStack00000038 + 4)) {
      psVar2 = (short *)(param_1 * 4 + *(int *)(iStack00000038 + 8));
      sVar1 = *psVar2;
      goto joined_r0x00558cdc;
    }
    iVar3 = FUN_00557cc8(param_1);
  }
  if (iVar3 != 0) {
    return;
  }
  psVar2 = (short *)(param_1 * 4 + *(int *)(iStack00000038 + 8));
  sVar1 = *psVar2;
joined_r0x00558cdc:
  if (sVar1 != -1) {
    return;
  }
  psVar2[1] = 1;
  return;
}



//==== 00558d74  ns=Global  size=0xa4
// sig: undefined FUN_00558d74(void)
// callers(2): 0054e04c FUN_0054e04c; 0054e6ec FUN_0054e6ec
// callees(1): 00557df0 FUN_00557df0

ulonglong FUN_00558d74(ulonglong param_1,int param_2)

{
  short *psVar1;
  int iStack00000038;
  
  if (param_2 == 0) {
    iStack00000038 = param_2;
    FUN_00557df0(&stack0x00000038);
  }
  else if (((param_1 & 0xffffffff) < (ulonglong)*(uint *)(param_2 + 4)) &&
          (psVar1 = (short *)((int)((param_1 & 0xffffffff) << 2) + *(int *)(param_2 + 8)),
          *psVar1 == -1)) {
    return (ulonglong)(LZCOUNT((uint)(-((ulonglong)(ushort)psVar1[1] ^ 1) >> 0x3f)) << 0x20) >> 0x25
    ;
  }
  return 0;
}



//==== 00558e18  ns=Global  size=0x84
// sig: undefined FUN_00558e18(void)
// callers(2): 0054e2cc FUN_0054e2cc; 0054e7d0 FUN_0054e7d0
// callees(1): 00557df0 FUN_00557df0

ulonglong FUN_00558e18(ulonglong param_1,int *param_2)

{
  ulonglong uVar1;
  int *piStack00000038;
  
  if (param_2 == (int *)0x0) {
    piStack00000038 = param_2;
    FUN_00557df0(&stack0x00000038);
    uVar1 = 1;
  }
  else {
    uVar1 = 1;
    if ((*param_2 != 0) && ((param_1 & 0xffffffff) < (ulonglong)(uint)param_2[1])) {
      uVar1 = (~(ulonglong)*(ushort *)((int)((param_1 & 0xffffffff) << 2) + param_2[2]) & 0xffff) -
              1 >> 0x3f;
    }
  }
  return uVar1;
}



//==== 00558e9c  ns=Global  size=0x9c
// sig: undefined FUN_00558e9c(void)
// callers(2): 0054e04c FUN_0054e04c; 0054e6ec FUN_0054e6ec
// callees(1): 00557df0 FUN_00557df0

ulonglong FUN_00558e9c(ulonglong param_1,uint param_2,int *param_3)

{
  ulonglong uVar1;
  ulonglong uVar2;
  int *piStack00000040;
  
  if (param_3 == (int *)0x0) {
    piStack00000040 = param_3;
    FUN_00557df0(&stack0x00000040);
    uVar1 = 0;
  }
  else {
    uVar1 = 0;
    if (((param_2 != 0xffff) && (*param_3 != 0)) &&
       ((param_1 & 0xffffffff) < (ulonglong)(uint)param_3[1])) {
      uVar1 = (ulonglong)param_2 ^
              (ulonglong)*(ushort *)((int)((param_1 & 0xffffffff) << 2) + param_3[2]);
      uVar2 = (ulonglong)((int)uVar1 >> 0x1f);
      uVar1 = (((uVar2 ^ uVar1) - uVar2) + -1 << 0x20) >> 0x3f;
    }
  }
  return uVar1;
}



//==== 00558f38  ns=Global  size=0x50
// sig: undefined FUN_00558f38(void)
// callers(0): 
// callees(0): 

undefined8 FUN_00558f38(undefined4 *param_1)

{
  int iVar1;
  undefined *puVar2;
  
  puVar2 = PTR_DAT_0071b2ac;
  param_1[5] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  iVar1 = *(int *)puVar2;
  *param_1 = 1;
  param_1[1] = 0;
  param_1[2] = 3;
  if (iVar1 != 0) {
    param_1[5] = *(undefined4 *)(iVar1 + 0xfc);
  }
  return 0;
}



//==== 00558f88  ns=Global  size=0x58
// sig: undefined FUN_00558f88(void)
// callers(2): 00559050 FUN_00559050; 00559198 FUN_00559198
// callees(1): 00553f04 FUN_00553f04

undefined8 FUN_00558f88(undefined8 param_1,int param_2)

{
  FUN_00553f04(param_1,param_2);
  FUN_00553f04(param_1,param_2 + 4);
  return 0;
}



//==== 00558fe0  ns=Global  size=0x70
// sig: undefined FUN_00558fe0(void)
// callers(2): 00559050 FUN_00559050; 00559198 FUN_00559198
// callees(2): 00553b40 FUN_00553b40; 00553f04 FUN_00553f04

undefined8 FUN_00558fe0(undefined8 param_1,int param_2)

{
  FUN_00553f04(param_1,param_2);
  FUN_00553b40(param_1,param_2 + 4,8);
  FUN_00553f04(param_1,param_2 + 0xc);
  return 0;
}



//==== 00559050  ns=Global  size=0x148
// sig: undefined FUN_00559050(void)
// callers(2): 00559fc4 FUN_00559fc4; 0055a634 FUN_0055a634
// callees(4): 00553b40 FUN_00553b40; 00553f04 FUN_00553f04; 00558f88 FUN_00558f88; 00558fe0 FUN_00558fe0

ulonglong FUN_00559050(undefined8 param_1,int param_2)

{
  ulonglong uVar1;
  ulonglong uVar2;
  
  FUN_00553f04(param_1,param_2);
  FUN_00553f04(param_1,param_2 + 4);
  FUN_00553f04(param_1,param_2 + 8);
  FUN_00553f04(param_1,param_2 + 0xc);
  uVar1 = FUN_00558fe0(param_1,param_2 + 0x10);
  if ((int)uVar1 != 0) {
    return uVar1 & 0xffffffff;
  }
  uVar2 = FUN_00558f88(param_1,param_2 + 0x20);
  if (uVar2 != 0) {
    return uVar2 & 0xffffffff;
  }
  FUN_00553b40(param_1,param_2 + 0x28,0x48);
  FUN_00553b40(param_1,param_2 + 0x70,0x20);
  FUN_00553f04(param_1,param_2 + 0x90);
  return uVar1 & 0xffffffff;
}



//==== 00559198  ns=Global  size=0x158
// sig: undefined FUN_00559198(void)
// callers(2): 005592f0 FUN_005592f0; 00559a4c FUN_00559a4c
// callees(4): 00553b40 FUN_00553b40; 00553f04 FUN_00553f04; 00558f88 FUN_00558f88; 00558fe0 FUN_00558fe0

ulonglong FUN_00559198(undefined8 param_1,int param_2)

{
  ulonglong uVar1;
  
  FUN_00553f04(param_1,param_2);
  FUN_00553f04(param_1,param_2 + 4);
  FUN_00553f04(param_1,param_2 + 8);
  FUN_00553f04(param_1,param_2 + 0xc);
  FUN_00553f04(param_1,param_2 + 0x10);
  FUN_00553f04(param_1,param_2 + 0x14);
  FUN_00553b40(param_1,param_2 + 0x18,0x48);
  uVar1 = FUN_00558fe0(param_1,param_2 + 0x60);
  if (uVar1 == 0) {
    FUN_00553f04(param_1,param_2 + 0x70);
    uVar1 = FUN_00558f88(param_1,param_2 + 0x74);
    if (uVar1 == 0) {
      FUN_00553b40(param_1,param_2 + 0x7c,0x20);
      FUN_00553f04(param_1,param_2 + 0x9c);
      return 0;
    }
  }
  return uVar1 & 0xffffffff;
}



//==== 005592f0  ns=Global  size=0x54c
// sig: undefined FUN_005592f0(void)
// callers(0): 
// callees(7): 00551f9c FUN_00551f9c; 005543a4 FUN_005543a4; 0055442c FUN_0055442c; 00559198 FUN_00559198; 005c5ad0 libc::memcpy; 005cd2a8 libc::snprintf; 005d0140 libc::memset
// strings: 0067d1f0: '%d.%02d.%04d'

ushort FUN_005592f0(void)

{
  ulonglong uVar1;
  undefined *puVar2;
  ulonglong uVar3;
  int in_r6;
  int iVar4;
  uint uVar5;
  void *__src;
  ushort local_360;
  ushort local_35e;
  short local_35c;
  int local_358;
  int local_338;
  int local_334;
  uint local_328;
  undefined1 auStack_320 [72];
  int local_2d8;
  undefined1 uStack_2d4;
  undefined1 uStack_2d3;
  undefined1 uStack_2d2;
  undefined1 uStack_2d1;
  undefined1 uStack_2d0;
  undefined1 uStack_2cf;
  undefined1 uStack_2ce;
  undefined1 uStack_2cd;
  undefined4 local_2cc;
  undefined4 local_2c8;
  int local_29c;
  int local_294;
  int local_278;
  int local_274;
  int local_270;
  undefined1 uStack_26c;
  undefined1 uStack_26b;
  undefined1 uStack_26a;
  undefined1 uStack_269;
  undefined1 uStack_268;
  undefined1 uStack_267;
  undefined1 uStack_266;
  undefined1 uStack_265;
  undefined1 uStack_264;
  undefined1 uStack_263;
  undefined1 uStack_262;
  undefined1 uStack_261;
  undefined1 uStack_260;
  undefined1 uStack_25f;
  undefined1 uStack_25e;
  undefined1 uStack_25d;
  undefined4 local_25c;
  undefined1 auStack_250 [104];
  uint local_1e8;
  undefined1 *local_1e4;
  undefined4 local_1e0;
  undefined1 auStack_1d8 [312];
  longlong local_a0;
  
  uVar3 = ZEXT48(&stack0x00000000);
  FUN_00551f9c(in_r6,uVar3 - 0x360);
  libc::memset(uVar3 - 0x298,0,0xbc);
  puVar2 = PTR_DAT_0071b2b0;
  if (*(int *)(PTR_DAT_0071b2b0 + 8) != 0) {
    uVar1 = uVar3 - 0x354 & 0xffffffff;
    iVar4 = in_r6 + 2;
    local_a0 = uVar3 - 0x28c;
LAB_005593bc:
    if (iVar4 - in_r6 < (int)(uint)local_360) {
      while( true ) {
        FUN_00551f9c(iVar4,uVar3 - 0x35c & 0xffffffff);
        __src = (void *)(iVar4 + 4);
        FUN_00551f9c(iVar4 + 2,uVar3 - 0x35e & 0xffffffff);
        if (local_35c == -0x7fff) break;
        if (local_35c == -0x7ffe) {
          libc::memcpy(auStack_1d8,__src,(uint)local_35e);
          iVar4 = (int)__src + (uint)local_35e;
          local_1e8 = (uint)local_35e;
          local_1e4 = auStack_1d8;
          goto LAB_005593bc;
        }
        iVar4 = (int)__src + (uint)local_35e;
        if ((int)(uint)local_360 <= iVar4 - in_r6) goto LAB_00559430;
      }
      libc::memset(uVar3 - 0x338 & 0xffffffff,0,0xa0);
      uVar5 = 0xa0;
      if (local_35e < 0xa0) {
        uVar5 = (uint)local_35e;
      }
      FUN_0055442c(uVar1,__src,(int)__src + uVar5,2);
      FUN_00559198(uVar1,uVar3 - 0x338 & 0xffffffff);
      FUN_005543a4(uVar1,uVar3 - 0x358 & 0xffffffff);
      iVar4 = (int)__src + local_358;
      if (uVar5 < local_35e) {
        iVar4 = iVar4 + (local_35e - uVar5);
      }
      libc::snprintf((char *)local_a0,PTR_s__d__02d__04d_0071b2b4,local_328 >> 0x18,
                     (ulonglong)(local_328 >> 0x10) & 0xff,(ulonglong)local_328 & 0xffff);
      local_278 = local_338;
      local_274 = local_334;
      libc::memcpy(auStack_250,auStack_320,0x48);
      local_25c = local_2cc;
      uStack_264 = local_2cc._0_1_;
      uStack_263 = local_2cc._1_1_;
      uStack_262 = local_2cc._2_1_;
      uStack_261 = (undefined1)local_2cc;
      uStack_260 = local_2c8._0_1_;
      uStack_25f = local_2c8._1_1_;
      uStack_25d = (undefined1)local_2c8;
      uStack_25e = local_2c8._2_1_;
      local_270 = local_2d8;
      if (local_2d8 == 2) {
        local_270 = 5;
      }
      uStack_26c = uStack_2d4;
      uStack_26b = uStack_2d3;
      uStack_26a = uStack_2d2;
      uStack_269 = uStack_2d1;
      uStack_268 = uStack_2d0;
      uStack_267 = uStack_2cf;
      uStack_266 = uStack_2ce;
      uStack_265 = uStack_2cd;
      if (local_2c8 != 0) {
        local_294 = local_29c;
      }
      goto LAB_005593bc;
    }
LAB_00559430:
    if (((((*(uint *)puVar2 & 1) == 0) || (local_274 == **(int **)PTR_PTR_0071b2b8)) &&
        (((*(uint *)puVar2 & 2) == 0 || (local_278 == 5)))) && (*(int *)(puVar2 + 4) == local_294))
    {
      local_1e0 = *(undefined4 *)(puVar2 + 0xc);
      (*(code *)**(undefined4 **)(puVar2 + 8))(uVar3 - 0x298);
    }
  }
  return local_360;
}



//==== 0055983c  ns=Global  size=0x210
// sig: undefined FUN_0055983c(void)
// callers(4): 00551694 FUN_00551694; 00551830 FUN_00551830; 00559a4c FUN_00559a4c; 0055a634 FUN_0055a634
// callees(4): 0054af90 FUN_0054af90; 005c5ad0 libc::memcpy; 005cd2a8 libc::snprintf; 005d0140 libc::memset
// strings: 0067d1f0: '%d.%02d.%04d'

int FUN_0055983c(undefined4 *param_1,undefined4 param_2)

{
  undefined1 uVar1;
  undefined1 uVar2;
  undefined1 uVar3;
  undefined4 *puVar4;
  int iVar5;
  undefined4 uVar6;
  undefined *puVar7;
  int iVar8;
  
  libc::memset(param_1,0,0xa8);
  puVar7 = PTR_s__d__02d__04d_0071b2b4;
  *param_1 = 0x3040000;
  libc::snprintf((char *)(param_1 + 1),puVar7,3,4,0);
  puVar7 = PTR_PTR_0071b2b8;
  puVar4 = *(undefined4 **)PTR_PTR_0071b2b8;
  param_1[6] = 5;
  param_1[7] = *puVar4;
  iVar8 = FUN_0054af90(param_1 + 8,param_2);
  if (iVar8 == 0) {
    iVar5 = *(int *)puVar7;
    uVar6 = *(undefined4 *)(iVar5 + 0x38);
    param_1[0xe] = *(undefined4 *)(iVar5 + 0x34);
    param_1[0xf] = uVar6;
    param_1[0xe] = *(undefined4 *)(iVar5 + 0x34);
    param_1[0xf] = *(undefined4 *)(iVar5 + 0x38);
    libc::memcpy(param_1 + 0x10,(void *)(iVar5 + 0x3c),0x48);
    iVar5 = *(int *)puVar7;
    uVar1 = *(undefined1 *)(iVar5 + 0x85);
    uVar2 = *(undefined1 *)(iVar5 + 0x86);
    uVar3 = *(undefined1 *)(iVar5 + 0x87);
    *(undefined1 *)(param_1 + 0x22) = *(undefined1 *)(iVar5 + 0x84);
    *(undefined1 *)((int)param_1 + 0x89) = uVar1;
    *(undefined1 *)((int)param_1 + 0x8a) = uVar2;
    *(undefined1 *)((int)param_1 + 0x8b) = uVar3;
    uVar1 = *(undefined1 *)(iVar5 + 0x89);
    uVar2 = *(undefined1 *)(iVar5 + 0x8a);
    uVar3 = *(undefined1 *)(iVar5 + 0x8b);
    *(undefined1 *)(param_1 + 0x23) = *(undefined1 *)(iVar5 + 0x88);
    *(undefined1 *)((int)param_1 + 0x8d) = uVar1;
    *(undefined1 *)((int)param_1 + 0x8e) = uVar2;
    *(undefined1 *)((int)param_1 + 0x8f) = uVar3;
    uVar1 = *(undefined1 *)(iVar5 + 0x8d);
    uVar2 = *(undefined1 *)(iVar5 + 0x8e);
    uVar3 = *(undefined1 *)(iVar5 + 0x8f);
    *(undefined1 *)(param_1 + 0x24) = *(undefined1 *)(iVar5 + 0x8c);
    *(undefined1 *)((int)param_1 + 0x91) = uVar1;
    *(undefined1 *)((int)param_1 + 0x92) = uVar2;
    *(undefined1 *)((int)param_1 + 0x93) = uVar3;
    uVar1 = *(undefined1 *)(iVar5 + 0x91);
    uVar2 = *(undefined1 *)(iVar5 + 0x92);
    uVar3 = *(undefined1 *)(iVar5 + 0x93);
    *(undefined1 *)(param_1 + 0x25) = *(undefined1 *)(iVar5 + 0x90);
    *(undefined1 *)((int)param_1 + 0x95) = uVar1;
    *(undefined1 *)((int)param_1 + 0x96) = uVar2;
    *(undefined1 *)((int)param_1 + 0x97) = uVar3;
    uVar1 = *(undefined1 *)(iVar5 + 0x95);
    uVar2 = *(undefined1 *)(iVar5 + 0x96);
    uVar3 = *(undefined1 *)(iVar5 + 0x97);
    *(undefined1 *)(param_1 + 0x26) = *(undefined1 *)(iVar5 + 0x94);
    *(undefined1 *)((int)param_1 + 0x99) = uVar1;
    *(undefined1 *)((int)param_1 + 0x9a) = uVar2;
    *(undefined1 *)((int)param_1 + 0x9b) = uVar3;
    uVar1 = *(undefined1 *)(iVar5 + 0x99);
    uVar2 = *(undefined1 *)(iVar5 + 0x9a);
    uVar3 = *(undefined1 *)(iVar5 + 0x9b);
    *(undefined1 *)(param_1 + 0x27) = *(undefined1 *)(iVar5 + 0x98);
    *(undefined1 *)((int)param_1 + 0x9d) = uVar1;
    *(undefined1 *)((int)param_1 + 0x9e) = uVar2;
    *(undefined1 *)((int)param_1 + 0x9f) = uVar3;
    uVar1 = *(undefined1 *)(iVar5 + 0x9d);
    uVar2 = *(undefined1 *)(iVar5 + 0x9e);
    uVar3 = *(undefined1 *)(iVar5 + 0x9f);
    *(undefined1 *)(param_1 + 0x28) = *(undefined1 *)(iVar5 + 0x9c);
    *(undefined1 *)((int)param_1 + 0xa1) = uVar1;
    *(undefined1 *)((int)param_1 + 0xa2) = uVar2;
    *(undefined1 *)((int)param_1 + 0xa3) = uVar3;
    uVar1 = *(undefined1 *)(iVar5 + 0xa0);
    uVar2 = *(undefined1 *)(iVar5 + 0xa1);
    uVar3 = *(undefined1 *)(iVar5 + 0xa2);
    *(undefined1 *)((int)param_1 + 0xa7) = *(undefined1 *)(iVar5 + 0xa3);
    *(undefined1 *)(param_1 + 0x29) = uVar1;
    *(undefined1 *)((int)param_1 + 0xa5) = uVar2;
    *(undefined1 *)((int)param_1 + 0xa6) = uVar3;
  }
  return iVar8;
}



//==== 00559a4c  ns=Global  size=0x578
// sig: undefined FUN_00559a4c(void)
// callers(1): 00559fc4 FUN_00559fc4
// callees(9): 0054058c FUN_0054058c; 005459e8 FUN_005459e8; 00551f78 FUN_00551f78; 005543a4 FUN_005543a4; 0055442c FUN_0055442c; 00559198 FUN_00559198; 0055983c FUN_0055983c; 005c5ad0 libc::memcpy; 005d0140 libc::memset

undefined4 FUN_00559a4c(undefined4 *param_1,int *param_2,undefined4 param_3)

{
  undefined4 *puVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  uint uVar5;
  undefined1 auStack_2e0 [4];
  undefined1 local_2dc [2];
  undefined1 auStack_2da [2];
  undefined4 local_2d8;
  undefined1 local_2d4 [2];
  undefined1 auStack_2d2 [2];
  undefined1 auStack_2d0 [28];
  int aiStack_2b4 [2];
  undefined1 *puStack_2ac;
  undefined4 uStack_2a8;
  int local_274;
  uint local_270;
  undefined1 auStack_268 [160];
  undefined1 local_1c8 [8];
  undefined1 auStack_1c0 [16];
  undefined1 auStack_1b0 [72];
  undefined4 local_168;
  undefined1 uStack_164;
  undefined1 uStack_163;
  undefined1 uStack_162;
  undefined1 uStack_161;
  undefined1 uStack_160;
  undefined1 uStack_15f;
  undefined1 uStack_15e;
  undefined1 uStack_15d;
  undefined4 local_15c;
  undefined4 local_158;
  undefined4 local_154;
  undefined4 local_150;
  undefined1 uStack_14c;
  undefined1 uStack_14b;
  undefined1 uStack_14a;
  undefined1 uStack_149;
  undefined1 uStack_148;
  undefined1 uStack_147;
  undefined1 uStack_146;
  undefined1 uStack_145;
  undefined1 uStack_144;
  undefined1 uStack_143;
  undefined1 uStack_142;
  undefined1 uStack_141;
  undefined1 uStack_140;
  undefined1 uStack_13f;
  undefined1 uStack_13e;
  undefined1 uStack_13d;
  undefined1 uStack_13c;
  undefined1 uStack_13b;
  undefined1 uStack_13a;
  undefined1 uStack_139;
  undefined1 uStack_138;
  undefined1 uStack_137;
  undefined1 uStack_136;
  undefined1 uStack_135;
  undefined1 uStack_134;
  undefined1 uStack_133;
  undefined1 uStack_132;
  undefined1 uStack_131;
  undefined1 uStack_130;
  undefined1 uStack_12f;
  undefined1 uStack_12e;
  undefined1 uStack_12d;
  int local_12c;
  undefined1 local_128 [32];
  undefined4 local_108;
  undefined1 uStack_104;
  undefined1 uStack_103;
  undefined1 uStack_102;
  undefined1 uStack_101;
  undefined1 uStack_100;
  undefined1 uStack_ff;
  undefined1 uStack_fe;
  undefined1 uStack_fd;
  undefined4 local_f4;
  undefined4 local_f0;
  undefined4 local_ec;
  undefined1 auStack_e8 [72];
  undefined1 uStack_a0;
  undefined1 uStack_9f;
  undefined1 uStack_9e;
  undefined1 uStack_9d;
  undefined1 uStack_9c;
  undefined1 uStack_9b;
  undefined1 uStack_9a;
  undefined1 uStack_99;
  undefined1 uStack_98;
  undefined1 uStack_97;
  undefined1 uStack_96;
  undefined1 uStack_95;
  undefined1 uStack_94;
  undefined1 uStack_93;
  undefined1 uStack_92;
  undefined1 uStack_91;
  undefined1 uStack_90;
  undefined1 uStack_8f;
  undefined1 uStack_8e;
  undefined1 uStack_8d;
  undefined1 uStack_8c;
  undefined1 uStack_8b;
  undefined1 uStack_8a;
  undefined1 uStack_89;
  undefined1 uStack_88;
  undefined1 uStack_87;
  undefined1 uStack_86;
  undefined1 uStack_85;
  undefined1 uStack_84;
  undefined1 uStack_83;
  undefined1 uStack_82;
  undefined1 uStack_81;
  
  puVar1 = *(undefined4 **)(PTR_DAT_0071b2b0 + 0x14);
  uVar4 = *(undefined4 *)(PTR_DAT_0071b2b0 + 0x10);
  *param_2 = 1;
  param_1[0x2e] = uVar4;
  *param_1 = param_3;
  if ((puVar1 != (undefined4 *)0x0) && ((*(code *)*puVar1)(param_1,param_2), *param_2 == 0)) {
    return 0;
  }
  iVar2 = param_1[1];
  libc::memset(local_1c8,0,0xa0);
  iVar3 = FUN_0055983c(local_128,param_3);
  if (iVar3 == 0) {
    local_158 = 1;
    local_154 = local_f0;
    local_150 = local_ec;
    libc::memcpy(auStack_1b0,auStack_e8,0x48);
    uStack_14c = uStack_a0;
    uStack_14b = uStack_9f;
    uStack_14a = uStack_9e;
    uStack_149 = uStack_9d;
    uStack_148 = uStack_9c;
    uStack_147 = uStack_9b;
    uStack_146 = uStack_9a;
    uStack_145 = uStack_99;
    uStack_144 = uStack_98;
    uStack_143 = uStack_97;
    uStack_142 = uStack_96;
    uStack_141 = uStack_95;
    uStack_140 = uStack_94;
    uStack_13f = uStack_93;
    uStack_13e = uStack_92;
    uStack_13d = uStack_91;
    uStack_13c = uStack_90;
    uStack_13b = uStack_8f;
    uStack_13a = uStack_8e;
    uStack_139 = uStack_8d;
    uStack_12d = uStack_81;
    uStack_138 = uStack_8c;
    uStack_137 = uStack_8b;
    uStack_136 = uStack_8a;
    uStack_135 = uStack_89;
    uStack_134 = uStack_88;
    uStack_133 = uStack_87;
    uStack_132 = uStack_86;
    uStack_131 = uStack_85;
    uStack_130 = uStack_84;
    uStack_12f = uStack_83;
    uStack_12e = uStack_82;
    local_15c = local_f4;
    local_168 = local_108;
    uStack_164 = uStack_104;
    uStack_163 = uStack_103;
    uStack_162 = uStack_102;
    uStack_161 = uStack_101;
    uStack_15d = uStack_fd;
    uStack_160 = uStack_100;
    uStack_15f = uStack_ff;
    uStack_15e = uStack_fe;
    local_12c = iVar2;
    if (iVar2 != 1) {
      FUN_0054058c(auStack_1c0,param_3);
    }
  }
  FUN_0055442c(auStack_2d0,auStack_268,local_1c8,1);
  FUN_00559198(auStack_2d0,local_1c8);
  FUN_005543a4(auStack_2d0,&local_2d8);
  local_270 = 0;
  local_274 = 0;
  iVar2 = param_2[1];
  if (0 < iVar2) {
    if (300 < iVar2) {
      return 0x1a;
    }
    FUN_00551f78(local_2d4,0x8002);
    FUN_00551f78(auStack_2d2,*(undefined2 *)((int)param_2 + 6));
    aiStack_2b4[1] = param_2[1];
    aiStack_2b4[0] = param_2[2];
    uStack_2a8 = 4;
    local_274 = aiStack_2b4[1] + 4;
    local_270 = 2;
    puStack_2ac = local_2d4;
  }
  FUN_00551f78(local_2dc,0x8001);
  FUN_00551f78(auStack_2da,local_2d8._2_2_);
  uVar5 = local_270;
  if (local_270 < 8) {
    aiStack_2b4[local_270 * 2 + 1] = local_2d8;
    uVar5 = local_270 + 1;
    local_274 = local_274 + local_2d8;
    aiStack_2b4[local_270 * 2] = (int)auStack_268;
    if (uVar5 < 8) {
      aiStack_2b4[uVar5 * 2 + 1] = 4;
      local_274 = local_274 + 4;
      aiStack_2b4[uVar5 * 2] = (int)local_2dc;
      uVar5 = local_270 + 2;
    }
  }
  local_270 = uVar5;
  FUN_00551f78(auStack_2e0,local_274 + 2U & 0xffff);
  if (local_270 < 8) {
    aiStack_2b4[local_270 * 2 + 1] = 2;
    aiStack_2b4[local_270 * 2] = (int)auStack_2e0;
  }
  uVar4 = FUN_005459e8(*(undefined8 *)(*(int *)PTR_PTR_0071b2b8 + 0xc),
                       *(undefined4 *)(*(int *)PTR_PTR_0071b2b8 + 0x14),0,0x1a,aiStack_2b4);
  return uVar4;
}



//==== 00559fc4  ns=Global  size=0x548
// sig: undefined FUN_00559fc4(void)
// callers(0): 
// callees(9): 00541740 FUN_00541740; 00551f9c FUN_00551f9c; 005543a4 FUN_005543a4; 0055442c FUN_0055442c; 00559050 FUN_00559050; 00559a4c FUN_00559a4c; 005c5ad0 libc::memcpy; 005cd2a8 libc::snprintf; 005d0140 libc::memset
// strings: 0067d1f0: '%d.%02d.%04d'

/* WARNING: Removing unreachable block (ram,0x0055a20c) */
/* WARNING: Removing unreachable block (ram,0x0055a218) */

ushort FUN_00559fc4(void)

{
  undefined4 *puVar1;
  ulonglong uVar2;
  undefined *puVar3;
  ulonglong uVar4;
  int iVar5;
  int in_r6;
  uint uVar6;
  void *__src;
  int iVar7;
  ushort local_370;
  ushort local_36e;
  short local_36c;
  int local_368;
  int local_334;
  uint local_330;
  undefined1 local_320;
  undefined1 uStack_31f;
  undefined1 uStack_31e;
  undefined1 uStack_31d;
  undefined1 local_31c;
  undefined1 uStack_31b;
  undefined1 uStack_31a;
  undefined1 uStack_319;
  undefined1 auStack_314 [104];
  int local_2ac;
  int local_2a4;
  undefined1 uStack_274;
  undefined1 uStack_273;
  undefined1 uStack_272;
  undefined1 uStack_271;
  undefined1 uStack_270;
  undefined1 uStack_26f;
  undefined1 uStack_26e;
  undefined1 uStack_26d;
  undefined1 auStack_260 [104];
  uint local_1f8;
  undefined4 local_1f4;
  ulonglong local_b0;
  longlong local_a8;
  longlong local_a0;
  
  uVar4 = ZEXT48(&stack0x00000000);
  FUN_00551f9c(in_r6,uVar4 - 0x370);
  puVar3 = PTR_PTR_0071b2b8;
  if ((*(int *)PTR_DAT_0071b2bc == 1) && (*(int *)(*(int *)PTR_PTR_0071b2b8 + 0x30) == 2)) {
    libc::memset(uVar4 - 0x2a8,0,0xbc);
    uVar2 = uVar4 - 0x358 & 0xffffffff;
    local_b0 = uVar4 - 0x33c;
    local_a0 = uVar4 - 0x1e8;
    local_a8 = uVar4 - 0x29c;
    iVar7 = in_r6 + 2;
    puVar1 = (undefined4 *)(uVar4 - 0x364);
    puVar1[2] = 0;
    *puVar1 = 0;
    puVar1[1] = 0;
LAB_0055a128:
    if (iVar7 - in_r6 < (int)(uint)local_370) {
      while( true ) {
        FUN_00551f9c(iVar7,uVar4 - 0x36c & 0xffffffff);
        __src = (void *)(iVar7 + 4);
        FUN_00551f9c(iVar7 + 2,uVar4 - 0x36e & 0xffffffff);
        if (local_36c == -0x7fff) break;
        if (local_36c == -0x7ffe) {
          libc::memcpy((void *)local_a0,__src,(uint)local_36e);
          iVar7 = (int)__src + (uint)local_36e;
          local_1f4 = (undefined4)local_a0;
          local_1f8 = (uint)local_36e;
          goto LAB_0055a128;
        }
        iVar7 = (int)__src + (uint)local_36e;
        if ((int)(uint)local_370 <= iVar7 - in_r6) goto LAB_0055a1a4;
      }
      libc::memset(local_b0 & 0xffffffff,0,0x94);
      uVar6 = (uint)local_36e;
      if (0x93 < uVar6) {
        uVar6 = 0x94;
      }
      FUN_0055442c(uVar2,__src,(int)__src + uVar6,2);
      FUN_00559050(uVar2,local_b0 & 0xffffffff);
      FUN_005543a4(uVar2,uVar4 - 0x368);
      iVar7 = (int)__src + local_368;
      if (uVar6 < local_36e) {
        iVar7 = iVar7 + (local_36e - uVar6);
      }
      if (local_334 != 0) {
        libc::snprintf((char *)local_a8,PTR_s__d__02d__04d_0071b2b4,local_330 >> 0x18,
                       (ulonglong)(local_330 >> 0x10) & 0xff,(ulonglong)local_330 & 0xffff);
        uStack_274 = local_320;
        uStack_273 = uStack_31f;
        uStack_272 = uStack_31e;
        uStack_271 = uStack_31d;
        uStack_270 = local_31c;
        uStack_26f = uStack_31b;
        uStack_26e = uStack_31a;
        uStack_26d = uStack_319;
        libc::memcpy(auStack_260,auStack_314,0x48);
        local_2a4 = local_2ac;
      }
      goto LAB_0055a128;
    }
LAB_0055a1a4:
    if (local_2a4 == 0) {
      iVar7 = *(int *)(*(int *)puVar3 + 0x1088);
      if (iVar7 != 0) {
        do {
          iVar5 = FUN_00541740(iVar7,uVar4 - 0x368 & 0xffffffff);
          if (iVar5 != 0) {
            return local_370;
          }
          iVar7 = *(int *)(iVar7 + 0x534);
        } while (iVar7 != 0);
      }
    }
    else if (local_2a4 == 1) {
      FUN_00559a4c(uVar4 - 0x2a8,uVar4 - 0x364,0);
    }
  }
  return local_370;
}



//==== 0055a50c  ns=Global  size=0x68
// sig: undefined FUN_0055a50c(void)
// callers(0): 
// callees(3): 00540808 FUN_00540808; 005450d8 FUN_005450d8; 00545114 FUN_00545114

int FUN_0055a50c(void)

{
  undefined *puVar1;
  undefined4 uVar2;
  int iVar3;
  
  uVar2 = FUN_00545114();
  iVar3 = FUN_00540808(uVar2);
  puVar1 = PTR_DAT_0071b2b0;
  if (iVar3 == 0) {
    *(undefined4 *)(PTR_DAT_0071b2b0 + 0xc) = 0;
    *(undefined4 *)puVar1 = 0;
    *(undefined4 *)(puVar1 + 4) = 0;
    *(undefined4 *)(puVar1 + 8) = 0;
    uVar2 = FUN_005450d8();
    iVar3 = FUN_00540808(uVar2);
  }
  return iVar3;
}



//==== 0055a574  ns=Global  size=0xc0
// sig: undefined FUN_0055a574(void)
// callers(0): 
// callees(3): 00540808 FUN_00540808; 005450d8 FUN_005450d8; 00545114 FUN_00545114

int FUN_0055a574(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined4 uVar3;
  int iVar4;
  
  iVar4 = 0xf;
  if (*(int *)(*(int *)PTR_PTR_0071b2b8 + 0x30) == 2) {
    uVar3 = FUN_00545114();
    iVar4 = FUN_00540808(uVar3);
    puVar2 = PTR_DAT_0071b2bc;
    puVar1 = PTR_DAT_0071b2b0;
    if (iVar4 == 0) {
      *(undefined4 *)(PTR_DAT_0071b2b0 + 0x10) = param_3;
      *(undefined4 *)puVar2 = param_1;
      *(undefined4 *)(puVar1 + 0x14) = param_2;
      uVar3 = FUN_005450d8();
      iVar4 = FUN_00540808(uVar3);
      return iVar4;
    }
  }
  return iVar4;
}



//==== 0055a634  ns=Global  size=0x5a0
// sig: undefined FUN_0055a634(void)
// callers(0): 
// callees(14): 00540808 FUN_00540808; 00543120 FUN_00543120; 005450d8 FUN_005450d8; 00545114 FUN_00545114; 005459e8 FUN_005459e8; 0054e920 FUN_0054e920; 0054edf0 FUN_0054edf0; 00551f78 FUN_00551f78; 005543a4 FUN_005543a4; 0055442c FUN_0055442c; 00559050 FUN_00559050; 0055983c FUN_0055983c; 005c5ad0 libc::memcpy; 005d0140 libc::memset

ulonglong FUN_0055a634(int *param_1)

{
  int iVar1;
  int iVar2;
  undefined *puVar3;
  undefined4 uVar6;
  ulonglong uVar4;
  ulonglong uVar5;
  int iVar7;
  uint uVar8;
  undefined1 local_2b0 [4];
  undefined1 local_2ac [2];
  undefined1 auStack_2aa [2];
  undefined1 local_2a8 [2];
  undefined1 auStack_2a6 [2];
  undefined1 local_2a4 [4];
  undefined8 local_2a0;
  undefined1 auStack_298 [28];
  int aiStack_27c [2];
  undefined1 *puStack_274;
  undefined4 uStack_270;
  int local_23c;
  uint local_238;
  undefined1 auStack_230 [148];
  undefined1 local_19c [40];
  undefined1 auStack_174 [72];
  undefined1 uStack_12c;
  undefined1 uStack_12b;
  undefined1 uStack_12a;
  undefined1 uStack_129;
  undefined1 uStack_128;
  undefined1 uStack_127;
  undefined1 uStack_126;
  undefined1 uStack_125;
  undefined1 uStack_124;
  undefined1 uStack_123;
  undefined1 uStack_122;
  undefined1 uStack_121;
  undefined1 uStack_120;
  undefined1 uStack_11f;
  undefined1 uStack_11e;
  undefined1 uStack_11d;
  undefined1 uStack_11c;
  undefined1 uStack_11b;
  undefined1 uStack_11a;
  undefined1 uStack_119;
  undefined1 uStack_118;
  undefined1 uStack_117;
  undefined1 uStack_116;
  undefined1 uStack_115;
  undefined1 uStack_114;
  undefined1 uStack_113;
  undefined1 uStack_112;
  undefined1 uStack_111;
  undefined1 uStack_110;
  undefined1 uStack_10f;
  undefined1 uStack_10e;
  undefined1 uStack_10d;
  int local_10c;
  undefined1 local_108 [64];
  undefined1 auStack_c8 [72];
  undefined1 uStack_80;
  undefined1 uStack_7f;
  undefined1 uStack_7e;
  undefined1 uStack_7d;
  undefined1 uStack_7c;
  undefined1 uStack_7b;
  undefined1 uStack_7a;
  undefined1 uStack_79;
  undefined1 uStack_78;
  undefined1 uStack_77;
  undefined1 uStack_76;
  undefined1 uStack_75;
  undefined1 uStack_74;
  undefined1 uStack_73;
  undefined1 uStack_72;
  undefined1 uStack_71;
  undefined1 uStack_70;
  undefined1 uStack_6f;
  undefined1 uStack_6e;
  undefined1 uStack_6d;
  undefined1 uStack_6c;
  undefined1 uStack_6b;
  undefined1 uStack_6a;
  undefined1 uStack_69;
  undefined1 uStack_68;
  undefined1 uStack_67;
  undefined1 uStack_66;
  undefined1 uStack_65;
  undefined1 uStack_64;
  undefined1 uStack_63;
  undefined1 uStack_62;
  undefined1 uStack_61;
  
  uVar4 = 0xf;
  if (*(int *)(*(int *)PTR_PTR_0071b2b8 + 0x30) != 2) goto LAB_0055a68c;
  uVar6 = FUN_00545114();
  uVar4 = FUN_00540808(uVar6);
  if ((int)uVar4 != 0) goto LAB_0055a68c;
  if (param_1[6] == 0) {
LAB_0055a744:
    uVar4 = 3;
  }
  else {
    uVar4 = 0x1d;
    if (*param_1 == 1) {
      if (300 < param_1[3]) goto LAB_0055a744;
      uVar4 = FUN_00543120();
      puVar3 = PTR_DAT_0071b2b0;
      if ((int)uVar4 == 0) {
        iVar7 = param_1[1];
        iVar1 = param_1[7];
        iVar2 = param_1[6];
        *(int *)PTR_DAT_0071b2b0 = param_1[2];
        *(int *)(puVar3 + 8) = iVar2;
        *(int *)(puVar3 + 4) = iVar7;
        *(int *)(puVar3 + 0xc) = iVar1;
        uVar6 = FUN_0054e920(&local_2a0);
        uVar4 = FUN_00540808(uVar6);
        if ((int)uVar4 == 0) {
          uVar4 = 0xdac;
          iVar7 = FUN_0054edf0(local_2a0);
          if (iVar7 == 0) {
            local_23c = 0;
            local_238 = 0;
            if (0 < param_1[3]) {
              FUN_00551f78(local_2a8,0x8002);
              FUN_00551f78(auStack_2a6,*(undefined2 *)((int)param_1 + 0xe));
              aiStack_27c[1] = param_1[3];
              aiStack_27c[0] = param_1[4];
              uStack_270 = 4;
              local_23c = aiStack_27c[1] + 4;
              local_238 = 2;
              puStack_274 = local_2a8;
            }
            libc::memset(local_19c,0,0x94);
            iVar7 = FUN_0055983c(local_108,0);
            if (iVar7 == 0) {
              libc::memcpy(auStack_174,auStack_c8,0x48);
              uStack_12c = uStack_80;
              uStack_12b = uStack_7f;
              uStack_12a = uStack_7e;
              uStack_129 = uStack_7d;
              uStack_128 = uStack_7c;
              uStack_127 = uStack_7b;
              uStack_126 = uStack_7a;
              uStack_125 = uStack_79;
              uStack_124 = uStack_78;
              uStack_123 = uStack_77;
              uStack_122 = uStack_76;
              uStack_121 = uStack_75;
              uStack_120 = uStack_74;
              uStack_11f = uStack_73;
              uStack_11e = uStack_72;
              uStack_11d = uStack_71;
              uStack_11c = uStack_70;
              uStack_10d = uStack_61;
              uStack_11b = uStack_6f;
              uStack_11a = uStack_6e;
              uStack_119 = uStack_6d;
              uStack_118 = uStack_6c;
              uStack_117 = uStack_6b;
              uStack_116 = uStack_6a;
              uStack_115 = uStack_69;
              uStack_114 = uStack_68;
              uStack_113 = uStack_67;
              uStack_112 = uStack_66;
              uStack_111 = uStack_65;
              uStack_110 = uStack_64;
              uStack_10f = uStack_63;
              uStack_10e = uStack_62;
              local_10c = param_1[1];
            }
            FUN_0055442c(auStack_298,auStack_230,local_19c,1);
            FUN_00559050(auStack_298,local_19c);
            FUN_005543a4(auStack_298,local_2a4);
            FUN_00551f78(local_2ac,0x8001);
            FUN_00551f78(auStack_2aa,0);
            uVar8 = local_238;
            if (local_238 < 8) {
              aiStack_27c[local_238 * 2 + 1] = 0;
              uVar8 = local_238 + 1;
              aiStack_27c[local_238 * 2] = (int)auStack_230;
              if (uVar8 < 8) {
                aiStack_27c[uVar8 * 2 + 1] = 4;
                local_23c = local_23c + 4;
                aiStack_27c[uVar8 * 2] = (int)local_2ac;
                uVar8 = local_238 + 2;
              }
            }
            local_238 = uVar8;
            FUN_00551f78(local_2b0,local_23c + 2U & 0xffff);
            if (local_238 < 8) {
              aiStack_27c[local_238 * 2 + 1] = 2;
              aiStack_27c[local_238 * 2] = (int)local_2b0;
            }
            uVar4 = FUN_005459e8(local_2a0,param_1[5],0,0x19,aiStack_27c);
          }
        }
      }
    }
  }
  uVar6 = FUN_005450d8();
  uVar5 = FUN_00540808(uVar6);
  if (uVar5 != 0) {
    uVar4 = uVar5;
  }
LAB_0055a68c:
  return uVar4 & 0xffffffff;
}



//==== 0055abd4  ns=Global  size=0x94
// sig: undefined FUN_0055abd4(void)
// callers(2): 005763fc FUN_005763fc; 00579370 FUN_00579370
// callees(0): 

undefined8 FUN_0055abd4(int param_1,int param_2,undefined4 *param_3)

{
  int iVar1;
  
  if (param_3 != (undefined4 *)0x0) {
    *param_3 = 0;
    if (param_1 != 0) {
      iVar1 = *(int *)(param_1 + 0x20);
      if ((iVar1 <= param_2) && (param_2 < *(int *)(param_1 + 0x24))) {
        if ((uint)(*(int *)(param_1 + 0x24) - iVar1) < 0x101) {
          if ((1 << (param_2 - iVar1 & 0x1fU) &
              *(uint *)(param_1 + ((uint)(param_2 - iVar1) >> 3 & 0x1ffffffc))) != 0) {
            *param_3 = 1;
            return 0;
          }
          *param_3 = 0;
          return 0;
        }
      }
    }
  }
  return 3;
}



//==== 0055ac68  ns=Global  size=0x64
// sig: undefined FUN_0055ac68(void)
// callers(3): 0055b100 FUN_0055b100; 0055b234 FUN_0055b234; 00576994 FUN_00576994
// callees(0): 

undefined8 FUN_0055ac68(int param_1,int param_2)

{
  int iVar1;
  uint uVar2;
  undefined8 uVar3;
  
  uVar3 = 3;
  if (param_1 != 0) {
    iVar1 = *(int *)(param_1 + 0x20);
    if ((iVar1 <= param_2) && (param_2 < *(int *)(param_1 + 0x24))) {
      uVar2 = (uint)(param_2 - iVar1) >> 3 & 0x1ffffffc;
      if ((uint)(*(int *)(param_1 + 0x24) - iVar1) < 0x101) {
        uVar3 = 0;
        *(uint *)(param_1 + uVar2) = 1 << (param_2 - iVar1 & 0x1fU) | *(uint *)(param_1 + uVar2);
      }
    }
  }
  return uVar3;
}



//==== 0055accc  ns=Global  size=0x70
// sig: undefined FUN_0055accc(void)
// callers(0): 
// callees(0): 

undefined8 FUN_0055accc(int param_1,longlong param_2)

{
  uint uVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  
  if (param_1 != 0) {
    uVar1 = *(uint *)(param_1 + 0x20);
    if (((ulonglong)*(uint *)(param_1 + 0x24) - (ulonglong)uVar1 & 0xffffffff) < 0x101) {
      if ((int)uVar1 <= (int)param_2) {
        uVar3 = param_2 - (ulonglong)uVar1;
        uVar2 = uVar3 & 0x1f;
        uVar1 = (uint)uVar3 >> 3 & 0x1ffffffc;
        if ((int)param_2 < (int)*(uint *)(param_1 + 0x24)) {
          *(uint *)(param_1 + uVar1) =
               *(uint *)(param_1 + uVar1) &
               ((uint)(-0x100000002 << uVar2) | (uint)(0xfffffffefffffffe >> 0x40 - uVar2));
          return 0;
        }
      }
      return 0;
    }
  }
  return 3;
}



//==== 0055ad3c  ns=Global  size=0x1e0
// sig: undefined FUN_0055ad3c(void)
// callers(0): 
// callees(0): 

undefined8 FUN_0055ad3c(uint *param_1,uint *param_2,int *param_3)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  uint *puVar4;
  uint *puVar5;
  uint *puVar6;
  uint uVar7;
  uint uVar8;
  longlong lVar9;
  
  if (((param_1 == (uint *)0x0) || (param_2 == (uint *)0x0)) || (param_3 == (int *)0x0)) {
    return 3;
  }
  uVar7 = param_2[8];
  uVar8 = param_3[8];
  if (uVar7 == uVar8) {
    iVar3 = 0;
    lVar9 = 8;
    do {
      puVar5 = (uint *)(iVar3 + (int)param_2);
      puVar4 = (uint *)(iVar3 + (int)param_3);
      puVar6 = (uint *)(iVar3 + (int)param_1);
      iVar3 = iVar3 + 4;
      *puVar6 = *puVar5 | *puVar4;
      lVar9 = lVar9 + -1;
    } while (lVar9 != 0);
    uVar2 = param_2[9];
    uVar1 = param_3[9];
    param_1[8] = uVar7;
    if ((int)uVar2 <= (int)uVar1) goto LAB_0055ae08;
  }
  else if ((int)uVar7 < (int)uVar8) {
    uVar8 = uVar8 - uVar7;
    puVar4 = param_2 + 1;
    lVar9 = 7;
    *param_1 = *param_3 << (uVar8 & 0x3f) | *param_2;
    iVar3 = 0;
    do {
      uVar2 = *puVar4;
      puVar4 = puVar4 + 1;
      *(uint *)((int)param_1 + iVar3 + 4) =
           *(int *)(iVar3 + (int)param_3) >> (0x20 - uVar8 & 0x3f) |
           ((int *)(iVar3 + (int)param_3))[1] << (uVar8 & 0x3f) | uVar2;
      lVar9 = lVar9 + -1;
      iVar3 = iVar3 + 4;
    } while (lVar9 != 0);
    uVar2 = param_2[9];
    uVar1 = param_3[9];
    param_1[8] = uVar7;
    if ((int)uVar2 <= (int)uVar1) goto LAB_0055ae08;
  }
  else {
    uVar7 = uVar8 - uVar7;
    puVar4 = param_2 + 1;
    lVar9 = 7;
    *param_1 = *param_3 << (uVar7 & 0x3f) | *param_2;
    iVar3 = 0;
    do {
      uVar2 = *puVar4;
      puVar4 = puVar4 + 1;
      *(uint *)((int)param_1 + iVar3 + 4) =
           *(int *)(iVar3 + (int)param_3) >> (0x20 - uVar7 & 0x3f) |
           ((int *)(iVar3 + (int)param_3))[1] << (uVar7 & 0x3f) | uVar2;
      lVar9 = lVar9 + -1;
      iVar3 = iVar3 + 4;
    } while (lVar9 != 0);
    uVar2 = param_2[9];
    uVar1 = param_3[9];
    param_1[8] = uVar8;
    if ((int)uVar2 <= (int)uVar1) goto LAB_0055ae08;
  }
  uVar1 = uVar2;
LAB_0055ae08:
  param_1[9] = uVar1;
  return 0;
}



//==== 0055af1c  ns=Global  size=0x1e4
// sig: undefined FUN_0055af1c(void)
// callers(1): 00544198 FUN_00544198
// callees(0): 

undefined8 FUN_0055af1c(uint *param_1,uint *param_2,uint *param_3)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  uint *puVar4;
  uint *puVar5;
  uint *puVar6;
  uint uVar7;
  uint uVar8;
  longlong lVar9;
  
  if (((param_1 == (uint *)0x0) || (param_2 == (uint *)0x0)) || (param_3 == (uint *)0x0)) {
    return 3;
  }
  uVar7 = param_2[8];
  uVar8 = param_3[8];
  if (uVar7 == uVar8) {
    iVar3 = 0;
    lVar9 = 8;
    do {
      puVar6 = (uint *)(iVar3 + (int)param_2);
      puVar5 = (uint *)(iVar3 + (int)param_3);
      puVar4 = (uint *)(iVar3 + (int)param_1);
      iVar3 = iVar3 + 4;
      *puVar4 = *puVar6 & ~*puVar5;
      lVar9 = lVar9 + -1;
    } while (lVar9 != 0);
    uVar2 = param_2[9];
    uVar1 = param_3[9];
    param_1[8] = uVar7;
    if ((int)uVar2 <= (int)uVar1) goto LAB_0055afe4;
  }
  else if ((int)uVar7 < (int)uVar8) {
    uVar8 = uVar8 - uVar7;
    puVar4 = param_2 + 1;
    lVar9 = 7;
    *param_1 = *param_2 & ~(*param_3 << (uVar8 & 0x3f));
    iVar3 = 0;
    do {
      uVar2 = *puVar4;
      puVar4 = puVar4 + 1;
      *(uint *)((int)param_1 + iVar3 + 4) =
           uVar2 & ~(((int *)((int)param_3 + iVar3))[1] << (uVar8 & 0x3f) |
                    *(int *)((int)param_3 + iVar3) >> (0x20 - uVar8 & 0x3f));
      lVar9 = lVar9 + -1;
      iVar3 = iVar3 + 4;
    } while (lVar9 != 0);
    uVar2 = param_2[9];
    uVar1 = param_3[9];
    param_1[8] = uVar7;
    if ((int)uVar2 <= (int)uVar1) goto LAB_0055afe4;
  }
  else {
    uVar7 = uVar7 - uVar8;
    puVar4 = param_3 + 1;
    lVar9 = 7;
    *param_1 = *param_2 << (uVar7 & 0x3f) & ~*param_3;
    iVar3 = 0;
    do {
      uVar2 = *puVar4;
      puVar4 = puVar4 + 1;
      *(uint *)((int)param_1 + iVar3 + 4) =
           (((int *)((int)param_2 + iVar3))[1] << (uVar7 & 0x3f) |
           *(int *)((int)param_2 + iVar3) >> (0x20 - uVar7 & 0x3f)) & ~uVar2;
      lVar9 = lVar9 + -1;
      iVar3 = iVar3 + 4;
    } while (lVar9 != 0);
    uVar2 = param_2[9];
    uVar1 = param_3[9];
    param_1[8] = uVar8;
    if ((int)uVar2 <= (int)uVar1) goto LAB_0055afe4;
  }
  uVar1 = uVar2;
LAB_0055afe4:
  param_1[9] = uVar1;
  return 0;
}



//==== 0055b100  ns=Global  size=0x134
// sig: undefined FUN_0055b100(void)
// callers(2): 005763fc FUN_005763fc; 00576994 FUN_00576994
// callees(1): 0055ac68 FUN_0055ac68

undefined8 FUN_0055b100(int *param_1,undefined4 *param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  
  if ((param_1 != (int *)0x0) && (param_2 != (undefined4 *)0x0)) {
    param_2[10] = 0;
    *param_2 = 0x100;
    param_2[1] = 0;
    param_2[2] = 0;
    param_2[3] = 0;
    param_2[4] = 0;
    param_2[5] = 0;
    param_2[6] = 0;
    param_2[7] = 0;
    param_2[8] = 0;
    param_2[9] = 0;
    param_2[10] = param_1[0x113];
    iVar2 = param_1[0x113];
    if (0 < iVar2) {
      iVar3 = 0;
      piVar4 = param_1;
      do {
        iVar1 = *piVar4;
        if (((param_1[0x100] != iVar1) && (iVar1 != 0)) && (*(int *)(iVar1 + 0x20) != 0)) {
          if (*(int *)(iVar1 + 0xc) - 4U < 2) {
            FUN_0055ac68(param_2 + 1,iVar3);
            iVar2 = param_1[0x113];
          }
        }
        iVar3 = iVar3 + 1;
        piVar4 = piVar4 + 1;
      } while (iVar3 < iVar2);
    }
    return 0;
  }
  return 3;
}



//==== 0055b234  ns=Global  size=0x130
// sig: undefined FUN_0055b234(void)
// callers(2): 0054a110 FUN_0054a110; 00579370 FUN_00579370
// callees(1): 0055ac68 FUN_0055ac68

undefined8 FUN_0055b234(int *param_1,undefined4 *param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  
  if ((param_1 != (int *)0x0) && (param_2 != (undefined4 *)0x0)) {
    param_2[10] = 0;
    *param_2 = 0x100;
    param_2[1] = 0;
    param_2[2] = 0;
    param_2[3] = 0;
    param_2[4] = 0;
    param_2[5] = 0;
    param_2[6] = 0;
    param_2[7] = 0;
    param_2[8] = 0;
    param_2[9] = 0;
    param_2[10] = param_1[0x113];
    iVar2 = param_1[0x113];
    if (0 < iVar2) {
      iVar3 = 0;
      piVar4 = param_1;
      do {
        while( true ) {
          iVar1 = *piVar4;
          if (((iVar1 == 0) || (param_1[0x100] == iVar1)) || (*(int *)(iVar1 + 0x20) == 0)) break;
          FUN_0055ac68(param_2 + 1,iVar3);
          iVar3 = iVar3 + 1;
          iVar2 = param_1[0x113];
          piVar4 = piVar4 + 1;
          if (iVar2 <= iVar3) {
            return 0;
          }
        }
        iVar3 = iVar3 + 1;
        piVar4 = piVar4 + 1;
      } while (iVar3 < iVar2);
    }
    return 0;
  }
  return 3;
}



//==== 0055b364  ns=Global  size=0x48
// sig: undefined FUN_0055b364(void)
// callers(2): 0054cdc0 FUN_0054cdc0; 0054ce30 FUN_0054ce30
// callees(0): 

undefined8 FUN_0055b364(undefined4 *param_1)

{
  undefined8 uVar1;
  
  uVar1 = 3;
  if (param_1 != (undefined4 *)0x0) {
    param_1[8] = 0;
    param_1[9] = 0x100;
    uVar1 = 0;
    *param_1 = 0;
    param_1[1] = 0;
    param_1[2] = 0;
    param_1[3] = 0;
    param_1[4] = 0;
    param_1[5] = 0;
    param_1[6] = 0;
    param_1[7] = 0;
  }
  return uVar1;
}



//==== 0055b3ac  ns=Global  size=0x24
// sig: undefined FUN_0055b3ac(void)
// callers(1): 0055b3d0 FUN_0055b3d0
// callees(1): 0055372c FUN_0055372c

void FUN_0055b3ac(void)

{
  FUN_0055372c();
  return;
}



//==== 0055b3d0  ns=Global  size=0x80
// sig: undefined FUN_0055b3d0(void)
// callers(6): 0055bbe8 FUN_0055bbe8; 00590fcc FUN_00590fcc; 005910d8 FUN_005910d8; 00591468 FUN_00591468; 00591588 FUN_00591588; 0059d97c FUN_0059d97c
// callees(1): 0055b3ac FUN_0055b3ac

void FUN_0055b3d0(undefined8 param_1)

{
  longlong lVar1;
  undefined1 local_30 [16];
  
  lVar1 = 0;
  do {
    lVar1 = lVar1 + 1;
    FUN_0055b3ac(param_1,local_30);
  } while (lVar1 != 2);
  return;
}



//==== 0055b450  ns=Global  size=0x64
// sig: undefined FUN_0055b450(void)
// callers(4): 0055bbe8 FUN_0055bbe8; 00590fcc FUN_00590fcc; 00591468 FUN_00591468; 0059d97c FUN_0059d97c
// callees(1): 00553f04 FUN_00553f04

void FUN_0055b450(undefined8 param_1,uint *param_2)

{
  uint uVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  
  uVar1 = *param_2;
  uVar3 = 0;
  do {
    uVar2 = uVar3 & 0x3fffffff;
    uVar3 = uVar3 + 1;
    FUN_00553f04(param_1,(ulonglong)uVar1 + uVar2 * 4 & 0xffffffff);
  } while (uVar3 != 0x10);
  return;
}



//==== 0055b4b4  ns=Global  size=0x28
// sig: undefined FUN_0055b4b4(void)
// callers(0): 
// callees(1): 00553f04 FUN_00553f04

void FUN_0055b4b4(undefined8 param_1,undefined4 *param_2)

{
  FUN_00553f04(param_1,*param_2);
  return;
}



//==== 0055b4dc  ns=Global  size=0x58
// sig: undefined FUN_0055b4dc(void)
// callers(0): 
// callees(2): 00553b40 FUN_00553b40; 00553f04 FUN_00553f04

void FUN_0055b4dc(undefined8 param_1,int *param_2)

{
  int iVar1;
  
  iVar1 = *param_2;
  FUN_00553f04(param_1,iVar1);
  FUN_00553b40(param_1,iVar1 + 4,8);
  return;
}



//==== 0055b534  ns=Global  size=0x2c
// sig: undefined FUN_0055b534(void)
// callers(0): 
// callees(1): 00553b40 FUN_00553b40

void FUN_0055b534(undefined8 param_1,undefined4 *param_2)

{
  FUN_00553b40(param_1,*param_2,0x14);
  return;
}



//==== 0055b560  ns=Global  size=0x64
// sig: undefined FUN_0055b560(void)
// callers(0): 
// callees(3): 00553c74 FUN_00553c74; 00553f04 FUN_00553f04; 00554160 FUN_00554160

void FUN_0055b560(undefined8 param_1,int *param_2)

{
  int iVar1;
  
  iVar1 = *param_2;
  FUN_00553f04(param_1,iVar1);
  FUN_00554160(param_1,iVar1 + 4);
  FUN_00553c74(param_1,2);
  return;
}



//==== 0055b5c4  ns=Global  size=0x28
// sig: undefined FUN_0055b5c4(void)
// callers(0): 
// callees(1): 00554160 FUN_00554160

void FUN_0055b5c4(undefined8 param_1,undefined4 *param_2)

{
  FUN_00554160(param_1,*param_2);
  return;
}



//==== 0055b5ec  ns=Global  size=0x54
// sig: undefined FUN_0055b5ec(void)
// callers(0): 
// callees(1): 00554160 FUN_00554160

void FUN_0055b5ec(undefined8 param_1,int *param_2)

{
  int iVar1;
  
  iVar1 = *param_2;
  FUN_00554160(param_1,iVar1);
  FUN_00554160(param_1,iVar1 + 2);
  return;
}



//==== 0055b640  ns=Global  size=0x28
// sig: undefined FUN_0055b640(void)
// callers(0): 
// callees(1): 00554290 FUN_00554290

void FUN_0055b640(undefined8 param_1,undefined4 *param_2)

{
  FUN_00554290(param_1,*param_2);
  return;
}



//==== 0055b668  ns=Global  size=0x28
// sig: undefined FUN_0055b668(void)
// callers(0): 
// callees(1): 00554290 FUN_00554290

void FUN_0055b668(undefined8 param_1,undefined4 *param_2)

{
  FUN_00554290(param_1,*param_2);
  return;
}



//==== 0055b690  ns=Global  size=0x7c
// sig: undefined FUN_0055b690(void)
// callers(0): 
// callees(2): 00554160 FUN_00554160; 00554290 FUN_00554290

void FUN_0055b690(undefined8 param_1,int *param_2)

{
  int iVar1;
  
  iVar1 = *param_2;
  FUN_00554290(param_1,iVar1);
  FUN_00554290(param_1,iVar1 + 1);
  FUN_00554160(param_1,iVar1 + 2);
  FUN_00554160(param_1,iVar1 + 4);
  return;
}



//==== 0055b70c  ns=Global  size=0x100
// sig: undefined FUN_0055b70c(void)
// callers(0): 
// callees(4): 00553b40 FUN_00553b40; 00553c74 FUN_00553c74; 00554160 FUN_00554160; 00554290 FUN_00554290

void FUN_0055b70c(undefined8 param_1,int *param_2)

{
  int iVar1;
  
  iVar1 = *param_2;
  FUN_00554290(param_1,iVar1);
  FUN_00554290(param_1,iVar1 + 1);
  FUN_00554290(param_1,iVar1 + 2);
  FUN_00554290(param_1,iVar1 + 3);
  FUN_00554290(param_1,iVar1 + 4);
  FUN_00553c74(param_1,1);
  FUN_00554160(param_1,iVar1 + 6);
  FUN_00554160(param_1,iVar1 + 8);
  FUN_00554160(param_1,iVar1 + 10);
  FUN_00553b40(param_1,iVar1 + 0xc,*(undefined2 *)(iVar1 + 10));
  return;
}



//==== 0055b80c  ns=Global  size=0x9c
// sig: undefined FUN_0055b80c(void)
// callers(0): 
// callees(4): 00553c74 FUN_00553c74; 00553f04 FUN_00553f04; 00554160 FUN_00554160; 00554290 FUN_00554290

void FUN_0055b80c(undefined8 param_1,int *param_2)

{
  int iVar1;
  
  iVar1 = *param_2;
  FUN_00554290(param_1,iVar1);
  FUN_00553c74(param_1,3);
  FUN_00553f04(param_1,iVar1 + 4);
  FUN_00554290(param_1,iVar1 + 8);
  FUN_00553c74(param_1,1);
  FUN_00554160(param_1,iVar1 + 10);
  return;
}



//==== 0055b8a8  ns=Global  size=0x64
// sig: undefined FUN_0055b8a8(void)
// callers(0): 
// callees(3): 00553c74 FUN_00553c74; 00553f04 FUN_00553f04; 00554160 FUN_00554160

void FUN_0055b8a8(undefined8 param_1,int *param_2)

{
  int iVar1;
  
  iVar1 = *param_2;
  FUN_00553f04(param_1,iVar1);
  FUN_00554160(param_1,iVar1 + 4);
  FUN_00553c74(param_1,2);
  return;
}



//==== 0055b90c  ns=Global  size=0xfc
// sig: undefined FUN_0055b90c(void)
// callers(0): 
// callees(4): 00553b40 FUN_00553b40; 00553f04 FUN_00553f04; 00554160 FUN_00554160; 00554290 FUN_00554290

void FUN_0055b90c(undefined8 param_1,int *param_2)

{
  int iVar1;
  
  iVar1 = *param_2;
  FUN_00554290(param_1,iVar1);
  FUN_00554290(param_1,iVar1 + 1);
  FUN_00554160(param_1,iVar1 + 2);
  FUN_00554160(param_1,iVar1 + 4);
  FUN_00554160(param_1,iVar1 + 6);
  FUN_00554160(param_1,iVar1 + 8);
  FUN_00554160(param_1,iVar1 + 10);
  FUN_00553f04(param_1,iVar1 + 0xc);
  FUN_00553b40(param_1,iVar1 + 0x10,4);
  FUN_00553b40(param_1,iVar1 + 0x14,0x18);
  return;
}



//==== 0055ba08  ns=Global  size=0xb8
// sig: undefined FUN_0055ba08(void)
// callers(0): 
// callees(3): 00553f04 FUN_00553f04; 00554160 FUN_00554160; 00554290 FUN_00554290

void FUN_0055ba08(undefined8 param_1,int *param_2)

{
  int iVar1;
  
  iVar1 = *param_2;
  FUN_00554290(param_1,iVar1);
  FUN_00554290(param_1,iVar1 + 1);
  FUN_00554160(param_1,iVar1 + 2);
  FUN_00554160(param_1,iVar1 + 4);
  FUN_00554160(param_1,iVar1 + 6);
  FUN_00553f04(param_1,iVar1 + 8);
  FUN_00553f04(param_1,iVar1 + 0xc);
  return;
}



//==== 0055bac0  ns=Global  size=0xb0
// sig: undefined FUN_0055bac0(void)
// callers(0): 
// callees(4): 00553b40 FUN_00553b40; 00553c74 FUN_00553c74; 00553f04 FUN_00553f04; 00554290 FUN_00554290

void FUN_0055bac0(undefined8 param_1,uint *param_2)

{
  ulonglong uVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  
  uVar2 = (ulonglong)*param_2;
  FUN_00554290(param_1,*param_2);
  uVar3 = 0;
  FUN_00554290(param_1,uVar2 + 1 & 0xffffffff);
  FUN_00553c74(param_1,2);
  FUN_00553b40(param_1,uVar2 + 4 & 0xffffffff,8);
  do {
    uVar1 = uVar3 & 0x3fffffff;
    uVar3 = uVar3 + 1;
    FUN_00553f04(param_1,uVar2 + uVar1 * 4 + 0xc & 0xffffffff);
  } while (uVar3 != 0x10);
  return;
}



//==== 0055bb70  ns=Global  size=0x78
// sig: undefined FUN_0055bb70(void)
// callers(0): 
// callees(3): 00553c74 FUN_00553c74; 00553f04 FUN_00553f04; 00554290 FUN_00554290

void FUN_0055bb70(undefined8 param_1,int *param_2)

{
  int iVar1;
  
  iVar1 = *param_2;
  FUN_00553f04(param_1,iVar1);
  FUN_00554290(param_1,iVar1 + 4);
  FUN_00554290(param_1,iVar1 + 5);
  FUN_00553c74(param_1,2);
  return;
}



//==== 0055bbe8  ns=Global  size=0xdc
// sig: undefined FUN_0055bbe8(void)
// callers(8): 00590b28 FUN_00590b28; 00590bd8 FUN_00590bd8; 00590c60 FUN_00590c60; 00590cfc FUN_00590cfc; 00590d88 FUN_00590d88; 00590e4c FUN_00590e4c; 005910d8 FUN_005910d8; 0059da9c FUN_0059da9c
// callees(5): 00553b40 FUN_00553b40; 00553c74 FUN_00553c74; 00553f04 FUN_00553f04; 0055b3d0 FUN_0055b3d0; 0055b450 FUN_0055b450

void FUN_0055bbe8(undefined8 param_1,int *param_2)

{
  int iVar1;
  undefined1 local_40 [24];
  
  iVar1 = *param_2;
  FUN_00553f04(param_1,iVar1);
  FUN_0055b3d0(param_1,local_40);
  FUN_00553f04(param_1,iVar1 + 0x34);
  FUN_0055b450(param_1,local_40);
  FUN_00553b40(param_1,iVar1 + 0x78,0x11);
  FUN_00553b40(param_1,iVar1 + 0x89,0x11);
  FUN_00553c74(param_1,2);
  return;
}



//==== 0055bcc4  ns=Global  size=0x28
// sig: undefined FUN_0055bcc4(void)
// callers(0): 
// callees(1): 00553f04 FUN_00553f04

void FUN_0055bcc4(undefined8 param_1,undefined4 *param_2)

{
  FUN_00553f04(param_1,*param_2);
  return;
}



//==== 0055bcec  ns=Global  size=0xfc
// sig: undefined FUN_0055bcec(void)
// callers(1): 00570f4c FUN_00570f4c
// callees(0): 

undefined4 FUN_0055bcec(char *param_1)

{
  char cVar1;
  undefined1 uVar2;
  undefined1 uVar3;
  short sVar4;
  undefined1 uVar5;
  char cVar6;
  undefined4 local_10;
  
  local_10 = 0;
  if (param_1 != (char *)0x0) {
    cVar6 = '\0';
LAB_0055bd20:
    cVar1 = *param_1;
    uVar3 = local_10._2_1_;
    sVar4 = local_10._2_2_;
    uVar5 = (undefined1)local_10;
    if (cVar1 != '\0') {
      while( true ) {
        param_1 = param_1 + 1;
        if (cVar1 == '.') break;
        if (9 < (byte)(cVar1 - 0x30U)) goto LAB_0055bd20;
        cVar6 = cVar6 * '\n' + cVar1 + -0x30;
        cVar1 = *param_1;
        if (cVar1 == '\0') goto LAB_0055bd84;
      }
      local_10._2_2_ = sVar4 << 8;
      local_10 = CONCAT31(CONCAT12(uVar3,local_10._2_2_) >> 8,cVar6);
      cVar6 = '\0';
      goto LAB_0055bd20;
    }
LAB_0055bd84:
    uVar2 = local_10._1_1_;
    local_10 = CONCAT13(uVar2,CONCAT12(uVar3,sVar4));
    local_10 = CONCAT31(CONCAT21(local_10._0_2_,uVar5),cVar6);
  }
  return local_10;
}



//==== 0055bde8  ns=Global  size=0xd8
// sig: undefined FUN_0055bde8(void)
// callers(2): 00570f88 FUN_00570f88; 00570fb8 FUN_00570fb8
// callees(0): 

void FUN_0055bde8(char *param_1,undefined4 param_2)

{
  byte bVar1;
  ulonglong uVar2;
  byte *pbVar3;
  int iVar4;
  ulonglong uVar5;
  longlong lVar6;
  undefined4 uStack00000038;
  
  uStack00000038 = param_2;
  if (param_1 == (char *)0x0) {
    return;
  }
  lVar6 = 4;
  pbVar3 = (byte *)&stack0x00000038;
  iVar4 = 0;
  do {
    if (iVar4 != 0) {
      *param_1 = '.';
      param_1 = param_1 + 1;
    }
    bVar1 = *pbVar3;
    uVar5 = (ulonglong)bVar1;
    if (uVar5 < 100) {
      if (9 < uVar5) goto LAB_0055be38;
      *param_1 = bVar1 + 0x30;
      param_1 = param_1 + 1;
    }
    else {
      *param_1 = bVar1 / 100 + 0x30;
      uVar5 = uVar5 % 100;
      param_1 = param_1 + 1;
LAB_0055be38:
      uVar2 = uVar5 / 10;
      *param_1 = (char)uVar2 + '0';
      param_1[1] = ((char)uVar5 - ((char)(uVar2 << 1) + (char)(uVar2 << 3))) + '0';
      param_1 = param_1 + 2;
    }
    pbVar3 = pbVar3 + 1;
    iVar4 = iVar4 + 1;
    lVar6 = lVar6 + -1;
    if (lVar6 == 0) {
      *param_1 = '\0';
      return;
    }
  } while( true );
}



//==== 0055bec0  ns=Global  size=0x1a4
// sig: undefined FUN_0055bec0(void)
// callers(1): 00553918 FUN_00553918
// callees(0): 
// strings: 00660110: 'AAAABBBBCCCCDDDDEEEEFFFFGGGGHHHHIIIIJJJJKKKKLLLLMMMMNNNNOOOOPPPPQQQQRRRRSSSSTTTT' (raw) | 0055c008: 'U@629&' (raw)

int FUN_0055bec0(byte *param_1,int param_2,undefined1 *param_3)

{
  byte bVar1;
  undefined1 uVar2;
  byte *pbVar3;
  ushort uVar4;
  uint3 uVar5;
  undefined *puVar6;
  undefined1 *puVar7;
  longlong lVar8;
  undefined1 *puVar9;
  undefined1 *puVar10;
  undefined1 *puVar11;
  
  puVar6 = PTR_DAT_0071b2c0;
  puVar11 = param_3;
  if (2 < param_2) {
    lVar8 = (ulonglong)(param_2 - 3U) / 3 + 1;
    puVar10 = param_3;
    if ((int)(param_2 - 3U) < 0) {
      lVar8 = 1;
    }
    do {
      bVar1 = *param_1;
      puVar11 = puVar10 + 4;
      param_2 = param_2 + -3;
      *puVar10 = puVar6[bVar1];
      uVar4 = CONCAT11(bVar1,param_1[1]);
      puVar10[1] = puVar6[uVar4 >> 2 & 0xff];
      pbVar3 = param_1 + 2;
      param_1 = param_1 + 3;
      uVar5 = CONCAT21(uVar4,*pbVar3);
      uVar2 = puVar6[uVar5 >> 4 & 0xff];
      puVar10[3] = puVar6[(uVar5 & 0x3f) * 4];
      puVar10[2] = uVar2;
      lVar8 = lVar8 + -1;
      puVar10 = puVar11;
    } while (lVar8 != 0);
  }
  puVar6 = PTR_DAT_0071b2c0;
  if (0 < param_2) {
    bVar1 = *param_1;
    puVar10 = puVar11 + 1;
    *puVar11 = PTR_DAT_0071b2c0[bVar1];
    if (param_2 < 2) {
      *puVar10 = puVar6[(bVar1 & 3) * 0x40];
      puVar11[2] = 0x3d;
      puVar11[3] = 0x3d;
      puVar11[4] = 0;
      return (int)(puVar11 + 4) - (int)param_3;
    }
    puVar9 = puVar11 + 2;
    puVar7 = puVar11 + 3;
    uVar2 = puVar6[(CONCAT11(bVar1,param_1[1]) & 0xf) * 0x10];
    puVar11 = puVar11 + 4;
    *puVar10 = puVar6[(ushort)(CONCAT11(bVar1,param_1[1]) >> 2) & 0xff];
    *puVar9 = uVar2;
    *puVar7 = 0x3d;
  }
  *puVar11 = 0;
  return (int)puVar11 - (int)param_3;
}



//==== 0055c064  ns=Global  size=0x2a4
// sig: undefined FUN_0055c064(void)
// callers(1): 0055386c FUN_0055386c
// callees(0): 

int FUN_0055c064(byte *param_1,int param_2,byte *param_3)

{
  bool bVar1;
  byte bVar2;
  undefined *puVar3;
  byte *pbVar4;
  byte *pbVar5;
  ulonglong uVar6;
  byte *pbVar8;
  longlong lVar7;
  byte *pbVar9;
  byte bVar10;
  ulonglong uVar11;
  ulonglong uVar12;
  
  puVar3 = PTR_DAT_0071b2c0;
  bVar1 = param_2 == 3;
  pbVar4 = param_3;
  if (param_2 < 4) {
    uVar6 = 0;
    uVar12 = 0;
    uVar11 = 0;
    bVar10 = 0;
LAB_0055c1b0:
    pbVar5 = pbVar4;
    if (param_2 == 0) goto LAB_0055c230;
  }
  else {
    pbVar8 = param_1 + 1;
    pbVar9 = param_1 + 2;
    pbVar5 = param_1 + 3;
    bVar2 = *param_1;
    param_1 = param_1 + 4;
    uVar6 = (ulonglong)(byte)PTR_DAT_0071b2c0[bVar2 + 0x100];
    uVar12 = (ulonglong)(byte)PTR_DAT_0071b2c0[*pbVar8 + 0x100];
    uVar11 = (ulonglong)(byte)PTR_DAT_0071b2c0[*pbVar9 + 0x100];
    bVar10 = PTR_DAT_0071b2c0[*pbVar5 + 0x100];
    if ((byte)(PTR_DAT_0071b2c0[bVar2 + 0x100] | PTR_DAT_0071b2c0[*pbVar8 + 0x100] |
               PTR_DAT_0071b2c0[*pbVar9 + 0x100] | bVar10) < 0x40) {
      lVar7 = (ulonglong)(param_2 - 4U >> 2) + 1;
      pbVar5 = param_1;
      if ((int)(param_2 - 4U) < 0) {
        lVar7 = 1;
      }
      do {
        param_2 = param_2 + -4;
        *pbVar4 = (byte)(uVar6 << 2) | (byte)((uVar12 << 0x20) >> 0x24);
        pbVar4[1] = (byte)(uVar12 << 4) | (byte)((uVar11 << 0x20) >> 0x22);
        pbVar4[2] = (byte)(uVar11 << 6) | bVar10;
        pbVar4 = pbVar4 + 3;
        bVar1 = param_2 == 3;
        lVar7 = lVar7 + -1;
        param_1 = pbVar5;
        if (lVar7 == 0) goto LAB_0055c1b0;
        bVar2 = *pbVar5;
        param_1 = pbVar5 + 4;
        pbVar8 = pbVar5 + 1;
        pbVar9 = pbVar5 + 2;
        uVar6 = (ulonglong)(byte)puVar3[bVar2 + 0x100];
        uVar12 = (ulonglong)(byte)puVar3[*pbVar8 + 0x100];
        uVar11 = (ulonglong)(byte)puVar3[*pbVar9 + 0x100];
        bVar10 = puVar3[pbVar5[3] + 0x100];
        pbVar5 = param_1;
      } while ((byte)(puVar3[bVar2 + 0x100] | puVar3[*pbVar8 + 0x100] | puVar3[*pbVar9 + 0x100] |
                     bVar10) < 0x40);
    }
  }
  if (param_2 == 1) {
    uVar12 = 0x40;
    uVar11 = 0x40;
    bVar10 = 0x40;
    uVar6 = (ulonglong)(byte)PTR_DAT_0071b2c0[*param_1 + 0x100];
  }
  else if (param_2 == 2) {
    uVar11 = 0x40;
    bVar10 = 0x40;
    uVar12 = (ulonglong)(byte)PTR_DAT_0071b2c0[param_1[1] + 0x100];
    uVar6 = (ulonglong)(byte)PTR_DAT_0071b2c0[*param_1 + 0x100];
  }
  else if (bVar1) {
    bVar10 = 0x40;
    uVar6 = (ulonglong)(byte)PTR_DAT_0071b2c0[*param_1 + 0x100];
    uVar11 = (ulonglong)(byte)PTR_DAT_0071b2c0[param_1[2] + 0x100];
    uVar12 = (ulonglong)(byte)PTR_DAT_0071b2c0[param_1[1] + 0x100];
  }
  pbVar5 = pbVar4;
  if ((uVar6 | uVar12) < 0x40) {
    *pbVar4 = (byte)(uVar6 << 2) | (byte)((uVar12 << 0x20) >> 0x24);
    pbVar5 = pbVar4 + 1;
    if (uVar11 < 0x40) {
      *pbVar5 = (byte)(uVar12 << 4) | (byte)((uVar11 << 0x20) >> 0x22);
      pbVar5 = pbVar4 + 2;
      if (bVar10 < 0x40) {
        *pbVar5 = (byte)(uVar11 << 6) | bVar10;
        pbVar5 = pbVar4 + 3;
      }
    }
  }
LAB_0055c230:
  return (int)pbVar5 - (int)param_3;
}



//==== 0055c308  ns=Global  size=0x270
// sig: undefined FUN_0055c308(void)
// callers(1): 0055c668 FUN_0055c668
// callees(0): 

void FUN_0055c308(void)

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
  
  puVar17 = PTR_PTR_0071b308;
  puVar16 = PTR_PTR_0071b304;
  puVar15 = PTR_PTR_0071b300;
  puVar14 = PTR_PTR_0071b2fc;
  puVar13 = PTR_PTR_0071b2f8;
  puVar11 = PTR_PTR_0071b2f0;
  puVar10 = PTR_PTR_0071b2ec;
  puVar9 = PTR_PTR_0071b2e8;
  puVar8 = PTR_PTR_0071b2e4;
  puVar7 = PTR_PTR_0071b2e0;
  puVar6 = PTR_PTR_0071b2dc;
  puVar5 = PTR_PTR_0071b2d8;
  puVar4 = PTR_PTR_0071b2d4;
  puVar3 = PTR_PTR_0071b2d0;
  puVar2 = PTR_PTR_0071b2cc;
  puVar1 = PTR_DAT_0071b2c4;
  *(undefined **)PTR_DAT_0071b2c4 = PTR_PTR_0071b2c8;
  puVar12 = PTR_PTR_0071b2f4;
  *(undefined **)(puVar1 + 0xc) = puVar4;
  *(undefined **)(puVar1 + 4) = puVar2;
  *(undefined **)(puVar1 + 0x10) = puVar5;
  *(undefined **)(puVar1 + 8) = puVar3;
  *(undefined **)(puVar1 + 0x14) = puVar6;
  *(undefined **)(puVar1 + 0x18) = puVar7;
  *(undefined **)(puVar1 + 0x1c) = puVar8;
  puVar23 = PTR_PTR_0071b348;
  puVar22 = PTR_PTR_0071b344;
  puVar21 = PTR_PTR_0071b340;
  puVar20 = PTR_PTR_0071b33c;
  puVar19 = PTR_PTR_0071b338;
  puVar18 = PTR_PTR_0071b334;
  *(undefined **)(puVar1 + 0x20) = puVar9;
  *(undefined **)(puVar1 + 0x24) = puVar10;
  puVar10 = PTR_PTR_0071b32c;
  *(undefined **)(puVar1 + 0x40) = puVar17;
  puVar17 = PTR_PTR_0071b330;
  puVar5 = PTR_PTR_0071b318;
  puVar3 = PTR_PTR_0071b310;
  puVar2 = PTR_PTR_0071b30c;
  *(undefined **)(puVar1 + 0x30) = puVar11;
  *(undefined **)(puVar1 + 0x28) = puVar12;
  puVar11 = PTR_PTR_0071b34c;
  puVar8 = PTR_PTR_0071b324;
  *(undefined **)(puVar1 + 0x2c) = puVar13;
  *(undefined **)(puVar1 + 0x34) = puVar14;
  puVar9 = PTR_PTR_0071b328;
  puVar6 = PTR_PTR_0071b31c;
  *(undefined **)(puVar1 + 0x38) = puVar15;
  *(undefined **)(puVar1 + 0x3c) = puVar16;
  puVar7 = PTR_PTR_0071b320;
  puVar4 = PTR_PTR_0071b314;
  *(undefined **)(puVar1 + 0x7c) = puVar22;
  *(undefined **)(puVar1 + 0x80) = puVar23;
  *(undefined **)(puVar1 + 0x74) = puVar20;
  *(undefined **)(puVar1 + 0x78) = puVar21;
  *(undefined **)(puVar1 + 0x6c) = puVar18;
  *(undefined **)(puVar1 + 0x70) = puVar19;
  *(undefined **)(puVar1 + 100) = puVar10;
  *(undefined **)(puVar1 + 0x68) = puVar17;
  puVar18 = PTR_PTR_0071b38c;
  puVar17 = PTR_PTR_0071b388;
  puVar16 = PTR_PTR_0071b384;
  puVar15 = PTR_PTR_0071b380;
  puVar14 = PTR_PTR_0071b37c;
  puVar13 = PTR_PTR_0071b378;
  puVar10 = PTR_PTR_0071b370;
  *(undefined **)(puVar1 + 0x50) = puVar5;
  puVar12 = PTR_PTR_0071b374;
  puVar5 = PTR_PTR_0071b35c;
  *(undefined **)(puVar1 + 0x5c) = puVar8;
  *(undefined **)(puVar1 + 0x60) = puVar9;
  puVar9 = PTR_PTR_0071b36c;
  puVar8 = PTR_PTR_0071b368;
  *(undefined **)(puVar1 + 0x54) = puVar6;
  *(undefined **)(puVar1 + 0x58) = puVar7;
  puVar7 = PTR_PTR_0071b364;
  puVar6 = PTR_PTR_0071b360;
  *(undefined **)(puVar1 + 0x4c) = puVar4;
  *(undefined **)(puVar1 + 0x44) = puVar2;
  puVar4 = PTR_PTR_0071b358;
  puVar2 = PTR_PTR_0071b350;
  *(undefined **)(puVar1 + 0x48) = puVar3;
  *(undefined **)(puVar1 + 0x84) = puVar11;
  puVar11 = PTR_PTR_0071b390;
  puVar3 = PTR_PTR_0071b354;
  *(undefined **)(puVar1 + 0xc0) = puVar17;
  *(undefined **)(puVar1 + 0xc4) = puVar18;
  *(undefined **)(puVar1 + 0xb8) = puVar15;
  *(undefined **)(puVar1 + 0xbc) = puVar16;
  *(undefined **)(puVar1 + 0xb0) = puVar13;
  *(undefined **)(puVar1 + 0xb4) = puVar14;
  *(undefined **)(puVar1 + 0xa8) = puVar10;
  *(undefined **)(puVar1 + 0xac) = puVar12;
  *(undefined **)(puVar1 + 0x94) = puVar5;
  puVar16 = PTR_DAT_0071b3c4;
  puVar13 = PTR_PTR_0071b3b4;
  puVar12 = PTR_PTR_0071b3b0;
  *(undefined **)(puVar1 + 0xa0) = puVar8;
  *(undefined **)(puVar1 + 0xa4) = puVar9;
  puVar9 = PTR_PTR_0071b3a0;
  puVar8 = PTR_PTR_0071b39c;
  *(undefined **)(puVar1 + 0x98) = puVar6;
  *(undefined **)(puVar1 + 0x9c) = puVar7;
  puVar5 = PTR_PTR_0071b398;
  *(undefined **)(puVar1 + 0x90) = puVar4;
  puVar15 = PTR_PTR_0071b3bc;
  puVar14 = PTR_PTR_0071b3b8;
  puVar10 = PTR_PTR_0071b3ac;
  puVar7 = PTR_PTR_0071b3a8;
  puVar6 = PTR_PTR_0071b3a4;
  puVar4 = PTR_PTR_0071b394;
  *(undefined **)(puVar1 + 0x88) = puVar2;
  *(undefined **)(puVar1 + 0x8c) = puVar3;
  *(undefined **)(puVar1 + 200) = puVar11;
  *(undefined **)(puVar1 + 0xe8) = puVar12;
  puVar2 = PTR_PTR_0071b3c0;
  *(undefined **)(puVar1 + 0xec) = puVar13;
  *(undefined **)(puVar1 + 0xd8) = puVar9;
  *(undefined **)(puVar1 + 0xd4) = puVar8;
  *(undefined **)(puVar1 + 0xd0) = puVar5;
  *(undefined **)puVar16 = puVar1;
  *(undefined **)(puVar1 + 0xf0) = puVar14;
  *(undefined **)(puVar1 + 0xe4) = puVar10;
  *(undefined **)(puVar1 + 0xe0) = puVar7;
  *(undefined **)(puVar1 + 0xdc) = puVar6;
  *(undefined **)(puVar1 + 0xf4) = puVar15;
  *(undefined **)(puVar1 + 0xcc) = puVar4;
  *(undefined4 *)(puVar1 + 0x10c) = 0;
  *(undefined4 *)(puVar1 + 0x108) = 0;
  *(undefined **)(puVar1 + 0xf8) = puVar2;
  *(undefined4 *)(puVar1 + 0xfc) = 0xe4a;
  *(undefined4 *)(puVar1 + 0x104) = 0x10000;
  *(undefined4 *)(puVar1 + 0x100) = 0x12c00;
  return;
}



//==== 0055c578  ns=Global  size=0x68
// sig: undefined FUN_0055c578(void)
// callers(0): 
// callees(0): 

undefined8 FUN_0055c578(undefined8 param_1,int param_2)

{
  int iVar1;
  
  iVar1 = *(int *)PTR_DAT_0071b3c8;
  *(undefined4 *)(param_2 + 0xd0) = 0;
  *(undefined4 *)(param_2 + 0xcc) = 0;
  if (iVar1 != 0) {
    (*(code *)**(undefined4 **)(iVar1 + 0x58))
              (*(undefined4 *)(param_2 + 0x8c),*(undefined4 *)(param_2 + 0x90));
  }
  return 1;
}



//==== 0055c5e0  ns=Global  size=0x80
// sig: undefined FUN_0055c5e0(void)
// callers(2): 0055e1b0 FUN_0055e1b0; 0055e544 FUN_0055e544
// callees(0): 

undefined8 FUN_0055c5e0(int param_1,int *param_2,uint param_3)

{
  uint uVar1;
  undefined8 uVar2;
  
  uVar2 = 0;
  if (*(int *)(param_1 + 0xe4) == 1) {
    uVar1 = *(uint *)(param_1 + 0xd8);
    uVar2 = 59000;
    if (param_3 <= uVar1) {
      if ((param_2 != (int *)0x0) && (*param_2 == 0x1b)) {
        if ((uint)param_2[0x39] < param_3) {
          return 59000;
        }
        param_2[0x39] = param_2[0x39] - param_3;
        uVar1 = *(uint *)(param_1 + 0xd8);
        param_2[0x3a] = param_3 + param_2[0x3a];
      }
      uVar2 = 0;
      *(uint *)(param_1 + 0xd8) = uVar1 - param_3;
      *(uint *)(param_1 + 0xdc) = param_3 + *(int *)(param_1 + 0xdc);
    }
  }
  return uVar2;
}



//==== 0055c660  ns=Global  size=0x8
// sig: undefined FUN_0055c660(void)
// callers(0): 
// callees(0): 
// strings: 00903b58: 'rt_udp 3.05.201103091800'

undefined * FUN_0055c660(void)

{
  return PTR_s_rt_udp_3_05_201103091800_0071b3cc;
}



//==== 0055c668  ns=Global  size=0x74
// sig: undefined FUN_0055c668(void)
// callers(1): 004f5be4 FUN_004f5be4
// callees(1): 0055c308 FUN_0055c308

undefined8 FUN_0055c668(undefined4 *param_1)

{
  undefined *puVar1;
  
  FUN_0055c308();
  puVar1 = PTR_DAT_0071b2c4;
  if (*(int *)PTR_DAT_0071b3c4 != 0) {
    *(undefined4 *)(PTR_DAT_0071b2c4 + 0xfc) = *param_1;
    *(undefined4 *)(puVar1 + 0x100) = param_1[1];
    *(undefined4 *)(puVar1 + 0x104) = param_1[3];
    *(undefined4 *)(puVar1 + 0x108) = param_1[2];
    *(undefined4 *)(puVar1 + 0x110) = param_1[4];
    *(undefined4 *)(puVar1 + 0x114) = param_1[5];
  }
  return 0;
}



//==== 0055c6dc  ns=Global  size=0x2c
// sig: undefined FUN_0055c6dc(void)
// callers(0): 
// callees(0): 

undefined8 FUN_0055c6dc(int param_1,undefined4 param_2)

{
  undefined8 uVar1;
  
  uVar1 = 0xd2f2;
  if (param_1 != 0) {
    uVar1 = 0;
    *(undefined4 *)(param_1 + 0x84) = param_2;
  }
  return uVar1;
}



//==== 0055c708  ns=Global  size=0x84
// sig: undefined FUN_0055c708(void)
// callers(0): 
// callees(0): 

undefined8 FUN_0055c708(int param_1,int *param_2,int param_3,int *param_4)

{
  undefined8 uVar1;
  
  *param_4 = 0;
  uVar1 = 0xd2f2;
  if (((param_1 != 0) && (uVar1 = 0xd2f3, param_2 != (int *)0x0)) && (*param_2 == 0x1b)) {
    uVar1 = 0;
    if (param_3 == 0) {
      *param_4 = param_2[7];
    }
    else {
      uVar1 = 2;
      if (param_3 == 1) {
        *param_4 = param_2[0xc];
        return 0;
      }
    }
  }
  return uVar1;
}



//==== 0055c78c  ns=Global  size=0x38
// sig: undefined FUN_0055c78c(void)
// callers(0): 
// callees(0): 

undefined8 FUN_0055c78c(int param_1,undefined4 *param_2)

{
  undefined8 uVar1;
  
  *param_2 = 0;
  uVar1 = 0xd2f2;
  if (param_1 != 0) {
    uVar1 = 0;
    *param_2 = *(undefined4 *)(param_1 + 0x84);
  }
  return uVar1;
}



//==== 0055c7c4  ns=Global  size=0x38
// sig: undefined FUN_0055c7c4(void)
// callers(0): 
// callees(0): 

undefined8 FUN_0055c7c4(int param_1,undefined2 *param_2)

{
  undefined8 uVar1;
  
  *param_2 = 0;
  uVar1 = 0xd2f3;
  if (param_1 != 0) {
    uVar1 = 0;
    *param_2 = *(undefined2 *)(param_1 + 0x6c);
  }
  return uVar1;
}



//==== 0055c7fc  ns=Global  size=0xf4
// sig: undefined FUN_0055c7fc(void)
// callers(0): 
// callees(0): 

undefined8
FUN_0055c7fc(int param_1,int *param_2,int param_3,int *param_4,int *param_5,undefined4 *param_6)

{
  int iVar2;
  ulonglong uVar1;
  uint uVar3;
  
  if (param_1 == 0) {
    return 0xd2f2;
  }
  if ((param_2 == (int *)0x0) || (*param_2 != 0x1b)) {
    return 0xd2f3;
  }
  if (param_3 == 0) {
    if (param_4 != (int *)0x0) {
      *param_4 = param_2[7];
    }
    if (param_5 != (int *)0x0) {
      *param_5 = param_2[8];
    }
    if (param_6 == (undefined4 *)0x0) {
      return 0;
    }
    iVar2 = param_2[8];
    uVar3 = param_2[7];
  }
  else {
    if (param_3 != 1) {
      return 2;
    }
    if (param_4 != (int *)0x0) {
      *param_4 = param_2[0xc];
    }
    if (param_5 != (int *)0x0) {
      *param_5 = param_2[0xd];
    }
    if (param_6 == (undefined4 *)0x0) {
      return 0;
    }
    iVar2 = param_2[0xd];
    uVar3 = param_2[0xc];
  }
  uVar1 = (ulonglong)(uint)(iVar2 * 100) / (ulonglong)uVar3;
  *param_6 = (int)uVar1;
  if (uVar1 < 0x65) {
    return 0;
  }
  *param_6 = 100;
  return 0;
}



//==== 0055c8f0  ns=Global  size=0x40
// sig: undefined FUN_0055c8f0(void)
// callers(3): 0055cf70 FUN_0055cf70; 0056137c FUN_0056137c; 00562954 FUN_00562954
// callees(0): 

undefined8 FUN_0055c8f0(int *param_1,int *param_2,undefined4 *param_3)

{
  int iVar1;
  undefined8 uVar2;
  
  uVar2 = 0xd2f2;
  if (param_1 != (int *)0x0) {
    uVar2 = 0;
    iVar1 = *param_1;
    *param_2 = param_1[0x2c];
    param_2[1] = param_1[0x2d];
    *param_3 = *(undefined4 *)(iVar1 + 8);
  }
  return uVar2;
}



//==== 0055c930  ns=Global  size=0xdc
// sig: undefined FUN_0055c930(void)
// callers(0): 
// callees(0): 

undefined8 FUN_0055c930(int param_1,int param_2,undefined4 *param_3,undefined4 *param_4)

{
  int iVar1;
  int iVar2;
  undefined8 uVar3;
  
  uVar3 = 0xd2f2;
  if (param_1 != 0) {
    if ((param_3 != (undefined4 *)0x0) && (param_4 != (undefined4 *)0x0)) {
      if (param_2 != 0) {
        *param_3 = *(undefined4 *)(param_2 + 8);
        param_3[1] = *(undefined4 *)(param_2 + 0xc);
        *param_4 = *(undefined4 *)(param_2 + 0x10);
        return 0;
      }
      iVar1 = *(int *)(param_1 + 0xc);
      if (iVar1 != 0) {
        iVar2 = *(int *)(iVar1 + 0x18);
        while( true ) {
          if (iVar2 != 0) {
            *param_3 = *(undefined4 *)(iVar2 + 0xc);
            param_3[1] = *(undefined4 *)(iVar2 + 0x10);
            *param_4 = *(undefined4 *)(iVar2 + 0x14);
            return 0;
          }
          iVar1 = *(int *)(iVar1 + 0x24);
          if (iVar1 == 0) break;
          iVar2 = *(int *)(iVar1 + 0x18);
        }
      }
    }
    uVar3 = 3;
  }
  return uVar3;
}



//==== 0055ca0c  ns=Global  size=0x10
// sig: undefined FUN_0055ca0c(void)
// callers(0): 
// callees(0): 

void FUN_0055ca0c(int param_1,undefined4 param_2)

{
  if (param_1 == 0) {
    return;
  }
  *(undefined4 *)(param_1 + 0x88) = param_2;
  return;
}



//==== 0055ca1c  ns=Global  size=0x7c
// sig: undefined FUN_0055ca1c(void)
// callers(0): 
// callees(0): 

int FUN_0055ca1c(int param_1,undefined4 *param_2)

{
  int iVar1;
  undefined1 auStack_20 [8];
  undefined4 local_18;
  
  iVar1 = 2;
  if ((param_1 != 0) && (param_2 != (undefined4 *)0x0)) {
    iVar1 = (*(code *)**(undefined4 **)(*(int *)(param_1 + 0x24) + 4))
                      (*(int *)(param_1 + 0x24),auStack_20);
    if (iVar1 == 0) {
      *param_2 = local_18;
    }
  }
  return iVar1;
}



//==== 0055ca98  ns=Global  size=0x10
// sig: undefined FUN_0055ca98(void)
// callers(0): 
// callees(0): 

undefined8 FUN_0055ca98(int param_1,undefined4 *param_2)

{
  *param_2 = *(undefined4 *)(param_1 + 0x1c);
  return 0;
}



//==== 0055caa8  ns=Global  size=0x1c
// sig: undefined FUN_0055caa8(void)
// callers(0): 
// callees(0): 

undefined8 FUN_0055caa8(int param_1,undefined4 param_2)

{
  undefined8 uVar1;
  
  uVar1 = 2;
  if (param_1 != 0) {
    uVar1 = 0;
    *(undefined4 *)(param_1 + 0x94) = param_2;
  }
  return uVar1;
}



//==== 0055cac4  ns=Global  size=0x2c
// sig: undefined FUN_0055cac4(void)
// callers(0): 
// callees(0): 

undefined8 FUN_0055cac4(int param_1)

{
  *(undefined4 *)(param_1 + 0xfc) = 500000;
  *(undefined4 *)(param_1 + 0xf8) = 0xfffe;
  *(undefined4 *)(param_1 + 0xf4) = 0;
  *(undefined4 *)(param_1 + 0xf0) = 0;
  return 0;
}



//==== 0055caf0  ns=Global  size=0x24
// sig: undefined FUN_0055caf0(void)
// callers(0): 
// callees(0): 

undefined8 FUN_0055caf0(longlong param_1)

{
  undefined8 uVar1;
  
  uVar1 = 2;
  if (param_1 != 0) {
    uVar1 = 0;
    *(int *)(PTR_s_rt_udp_3_05_201103091800_0071b3cc + 0x1c) = (int)param_1;
  }
  return uVar1;
}



//==== 0055cb14  ns=Global  size=0x14
// sig: undefined FUN_0055cb14(void)
// callers(0): 
// callees(0): 

undefined8 FUN_0055cb14(undefined4 *param_1)

{
  *param_1 = *(undefined4 *)(PTR_s_rt_udp_3_05_201103091800_0071b3cc + 0x1c);
  return 0;
}



//==== 0055cb28  ns=Global  size=0x1c
// sig: undefined FUN_0055cb28(void)
// callers(0): 
// callees(0): 

undefined8 FUN_0055cb28(int param_1,longlong param_2)

{
  undefined8 uVar1;
  
  uVar1 = 2;
  if (param_2 != 0) {
    uVar1 = 0;
    *(int *)(param_1 + 0x54) = (int)param_2;
  }
  return uVar1;
}



//==== 0055cb44  ns=Global  size=0x84
// sig: undefined FUN_0055cb44(void)
// callers(0): 
// callees(0): 

undefined8 FUN_0055cb44(int *param_1,uint *param_2)

{
  undefined8 uVar1;
  
  if ((param_1 != (int *)0x0) && (*param_1 == 0x1b)) {
    uVar1 = 2;
    if (param_2 != (uint *)0x0) {
      uVar1 = 0;
      *param_2 = (uint)param_1[0x40] / 1000;
      param_2[1] = (uint)param_1[0x41] / 1000;
      param_2[2] = (uint)param_1[0x3f] / 1000;
    }
    return uVar1;
  }
  return 0xd2f3;
}



//==== 0055cbc8  ns=Global  size=0x84
// sig: undefined FUN_0055cbc8(void)
// callers(0): 
// callees(0): 

undefined8 FUN_0055cbc8(int *param_1,uint *param_2)

{
  undefined8 uVar1;
  
  if ((param_1 != (int *)0x0) && (*param_1 == 0x1b)) {
    uVar1 = 2;
    if (param_2 != (uint *)0x0) {
      uVar1 = 0;
      *param_2 = (uint)param_1[0x18] / 1000;
      param_2[1] = (uint)param_1[0x19] / 1000;
      param_2[2] = (uint)param_1[0x17] / 1000;
    }
    return uVar1;
  }
  return 0xd2f3;
}



//==== 0055cc4c  ns=Global  size=0xb0
// sig: undefined FUN_0055cc4c(void)
// callers(0): 
// callees(0): 

int FUN_0055cc4c(int param_1,undefined4 *param_2,undefined4 *param_3)

{
  int iVar1;
  undefined4 local_20 [2];
  undefined4 local_18;
  
  if (((param_1 != 0) && (param_2 != (undefined4 *)0x0)) && (param_3 != (undefined4 *)0x0)) {
    iVar1 = (*(code *)**(undefined4 **)(*(int *)(param_1 + 0x48) + 4))
                      (*(int *)(param_1 + 0x48),local_20);
    if (iVar1 == 0) {
      *param_2 = local_18;
      *param_3 = local_20[0];
    }
    return iVar1;
  }
  return 2;
}



//==== 0055ccfc  ns=Global  size=0x38
// sig: undefined FUN_0055ccfc(void)
// callers(2): 0055f0a0 FUN_0055f0a0; 0055f31c FUN_0055f31c
// callees(0): 

undefined8 FUN_0055ccfc(undefined4 *param_1,undefined4 *param_2)

{
  if ((param_2 != (undefined4 *)0x0) && (*param_2 = 0, param_1 != (undefined4 *)0x0)) {
    *param_2 = *param_1;
    return 0;
  }
  return 3;
}



//==== 0055cd34  ns=Global  size=0x5c
// sig: undefined FUN_0055cd34(void)
// callers(4): 0055e0b8 FUN_0055e0b8; 0055e544 FUN_0055e544; 0055f5d8 FUN_0055f5d8; 0056674c FUN_0056674c
// callees(0): 

undefined8 FUN_0055cd34(int *param_1,int param_2,int *param_3)

{
  if (param_3 != (int *)0x0) {
    *param_3 = 0;
    if ((param_1 != (int *)0x0) && (param_2 != 0)) {
      if (*(int *)(param_2 + 0x14) != 0) {
        *param_3 = *(int *)(param_2 + 0x14);
        return 0;
      }
      *param_3 = *param_1;
      return 0;
    }
  }
  return 3;
}



//==== 0055cd90  ns=Global  size=0x60
// sig: undefined FUN_0055cd90(void)
// callers(0): 
// callees(0): 

undefined8 FUN_0055cd90(undefined4 *param_1,int param_2,undefined4 *param_3)

{
  if (param_3 != (undefined4 *)0x0) {
    *param_3 = 0;
    if ((param_1 != (undefined4 *)0x0) && (param_2 != 0)) {
      if (*(int *)(param_2 + 0x14) != 0) {
        *param_3 = *(undefined4 *)(param_2 + 0x18);
        return 0;
      }
      *param_3 = *param_1;
      return 0;
    }
  }
  return 3;
}



//==== 0055cdf0  ns=Global  size=0x78
// sig: undefined FUN_0055cdf0(void)
// callers(0): 
// callees(0): 

undefined8 FUN_0055cdf0(int param_1,int param_2,int *param_3)

{
  int iVar1;
  int iVar2;
  undefined8 uVar3;
  
  if ((param_3 == (int *)0x0) || (*param_3 = 0, param_1 == 0)) {
    uVar3 = 2;
  }
  else {
    iVar1 = *(int *)(param_1 + 0xc);
    if (iVar1 != 0) {
      iVar2 = *(int *)(iVar1 + 8);
      while( true ) {
        if (iVar2 == param_2) {
          *param_3 = iVar1;
          return 0;
        }
        iVar1 = *(int *)(iVar1 + 0x24);
        if (iVar1 == 0) break;
        iVar2 = *(int *)(iVar1 + 8);
      }
    }
    uVar3 = 3;
  }
  return uVar3;
}



//==== 0055ce68  ns=Global  size=0x28
// sig: undefined FUN_0055ce68(void)
// callers(0): 
// callees(0): 

undefined8 FUN_0055ce68(int param_1,undefined4 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = 2;
  if ((param_1 != 0) && (param_2 != (undefined4 *)0x0)) {
    uVar1 = 0;
    *param_2 = *(undefined4 *)(param_1 + 8);
  }
  return uVar1;
}



//==== 0055ce90  ns=Global  size=0x24
// sig: undefined FUN_0055ce90(void)
// callers(2): 0055d348 FUN_0055d348; 00562954 FUN_00562954
// callees(0): 

undefined8 FUN_0055ce90(int param_1)

{
  undefined8 uVar1;
  
  uVar1 = 2;
  if (param_1 != 0) {
    uVar1 = 0;
    *(int *)(param_1 + 0x20) = *(int *)(param_1 + 0x20) + 1;
  }
  return uVar1;
}



//==== 0055ceb4  ns=Global  size=0x28
// sig: undefined FUN_0055ceb4(void)
// callers(0): 
// callees(0): 

undefined8 FUN_0055ceb4(int param_1,undefined4 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = 2;
  if ((param_1 != 0) && (param_2 != (undefined4 *)0x0)) {
    uVar1 = 0;
    *param_2 = *(undefined4 *)(param_1 + 0x20);
  }
  return uVar1;
}



//==== 0055cedc  ns=Global  size=0x3c
// sig: undefined FUN_0055cedc(void)
// callers(0): 
// callees(0): 

undefined8 FUN_0055cedc(int param_1,undefined4 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = 0xd2f2;
  if ((param_1 != 0) && (uVar1 = 2, param_2 != (undefined4 *)0x0)) {
    uVar1 = 0;
    *param_2 = *(undefined4 *)(param_1 + 0x48);
  }
  return uVar1;
}



//==== 0055cf18  ns=Global  size=0x58
// sig: undefined FUN_0055cf18(void)
// callers(0): 
// callees(1): 0056a838 FUN_0056a838

undefined4 FUN_0055cf18(int param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 uVar1;
  
  uVar1 = 0xd2f2;
  if (param_1 != 0) {
    uVar1 = 3;
    if (*(int *)(param_1 + 0x44) != 0) {
      uVar1 = FUN_0056a838(*(int *)(param_1 + 0x44),param_2,param_3);
    }
  }
  return uVar1;
}



//==== 0055cf70  ns=Global  size=0xf0
// sig: undefined FUN_0055cf70(void)
// callers(0): 
// callees(3): 0054ee38 FUN_0054ee38; 0055c8f0 FUN_0055c8f0; 0056a838 FUN_0056a838

/* WARNING: Removing unreachable block (ram,0x0055d038) */
/* WARNING: Removing unreachable block (ram,0x0055d044) */
/* WARNING: Removing unreachable block (ram,0x0055d05c) */

int FUN_0055cf70(int param_1)

{
  int iVar1;
  undefined1 local_30 [4];
  undefined1 local_2c [4];
  undefined1 local_28 [8];
  undefined1 local_20 [16];
  
  iVar1 = 0xd2f2;
  if (param_1 != 0) {
    iVar1 = 3;
    if (*(int *)(param_1 + 0x44) != 0) {
      iVar1 = FUN_0056a838(*(int *)(param_1 + 0x44),local_20,local_2c);
      if ((iVar1 == 0) && (iVar1 = FUN_0055c8f0(param_1,local_28,local_30), iVar1 == 0)) {
        return 0xd6dd;
      }
    }
  }
  return iVar1;
}



//==== 0055d060  ns=Global  size=0x4c
// sig: undefined FUN_0055d060(void)
// callers(0): 
// callees(1): 0056eea4 FUN_0056eea4

undefined4 FUN_0055d060(int param_1)

{
  undefined4 uVar1;
  
  uVar1 = 2;
  if (param_1 != 0) {
    uVar1 = 3;
    if (*(int *)(param_1 + 4) != 0) {
      uVar1 = FUN_0056eea4(*(int *)(param_1 + 4));
    }
  }
  return uVar1;
}



//==== 0055d0ac  ns=Global  size=0x94
// sig: undefined FUN_0055d0ac(void)
// callers(2): 00562954 FUN_00562954; 00569774 FUN_00569774
// callees(0): 

undefined8 FUN_0055d0ac(int param_1,int param_2)

{
  int iVar1;
  uint uVar2;
  ulonglong uVar3;
  
  uVar3 = 0;
  *(undefined4 *)(param_2 + 0xd8) = 0;
  *(undefined4 *)(param_2 + 0x108) = 0;
  *(undefined4 *)(param_2 + 0xdc) = 0;
  *(undefined4 *)(param_2 + 0xe0) = 0;
  *(undefined4 *)(param_2 + 0xe4) = 0;
  *(undefined4 *)(param_2 + 0xe8) = 0;
  *(undefined4 *)(param_2 + 0xec) = 0;
  *(undefined4 *)(param_2 + 0xf0) = 0;
  *(undefined4 *)(param_2 + 0xf4) = 0;
  *(undefined4 *)(param_2 + 0xf8) = 0;
  *(undefined4 *)(param_2 + 0xfc) = 0;
  *(undefined4 *)(param_2 + 0x100) = 0;
  *(undefined4 *)(param_2 + 0x104) = 0;
  for (iVar1 = *(int *)(param_1 + 0x20); iVar1 != 0; iVar1 = *(int *)(iVar1 + 0x120)) {
    uVar3 = uVar3 + 1;
  }
  uVar2 = *(uint *)(param_1 + 0xd8);
  *(int *)(param_2 + 0xe0) = (int)((ulonglong)*(uint *)(param_1 + 0xd4) / (uVar3 & 0xffffffff));
  *(int *)(param_2 + 0xe4) = (int)((ulonglong)uVar2 / (uVar3 & 0xffffffff));
  *(undefined4 *)(param_2 + 0xd8) = *(undefined4 *)(param_1 + 0x104);
  *(undefined4 *)(param_2 + 0xdc) = *(undefined4 *)(param_1 + 0x108);
  return 0;
}



//==== 0055d140  ns=Global  size=0xbc
// sig: undefined FUN_0055d140(void)
// callers(0): 
// callees(1): 0056f07c FUN_0056f07c

undefined4 FUN_0055d140(int param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  
  if (param_2 != (undefined4 *)0x0) {
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
      if (*(int *)(param_1 + 4) != 0) {
        uVar1 = FUN_0056f07c(*(int *)(param_1 + 4),param_2);
        return uVar1;
      }
      param_2[10] = 3;
      return 0;
    }
  }
  return 2;
}



//==== 0055d1fc  ns=Global  size=0xe8
// sig: undefined FUN_0055d1fc(void)
// callers(3): 0055d2e4 FUN_0055d2e4; 0055d428 FUN_0055d428; 00561584 FUN_00561584
// callees(5): 0054fe64 FUN_0054fe64; 00563d60 FUN_00563d60; 00563d8c FUN_00563d8c; 0056fae8 FUN_0056fae8; 005c35e4 FUN_005c35e4

undefined8 FUN_0055d1fc(int param_1,int *param_2)

{
  if (*param_2 != 0) {
    param_2[8] = 0;
    if (param_2[1] != 0) {
      FUN_0056fae8(param_2[1]);
      param_2[1] = 0;
    }
    FUN_005c35e4(param_2 + 3);
    FUN_0054fe64(*param_2);
    *param_2 = 0;
    FUN_00563d8c(param_1 + 0xc,param_2);
    FUN_00563d60(param_1 + 0x10,param_2);
    *(int *)(param_1 + 0x18) = *(int *)(param_1 + 0x18) + 1;
  }
  return 0;
}



//==== 0055d2e4  ns=Global  size=0x64
// sig: undefined FUN_0055d2e4(void)
// callers(2): 0055d348 FUN_0055d348; 0055ed98 FUN_0055ed98
// callees(1): 0055d1fc FUN_0055d1fc

undefined8 FUN_0055d2e4(int param_1,int param_2)

{
  undefined8 uVar1;
  
  uVar1 = 2;
  if (param_1 != 0) {
    uVar1 = 0;
    if (param_2 != 0) {
      if (*(uint *)(param_2 + 0x20) < 2) {
        FUN_0055d1fc(param_1,param_2);
        uVar1 = 0;
      }
      else {
        *(uint *)(param_2 + 0x20) = *(uint *)(param_2 + 0x20) - 1;
      }
    }
  }
  return uVar1;
}



//==== 0055d348  ns=Global  size=0xe0
// sig: undefined FUN_0055d348(void)
// callers(0): 
// callees(2): 0055ce90 FUN_0055ce90; 0055d2e4 FUN_0055d2e4

undefined8 FUN_0055d348(int param_1,int param_2,int param_3,undefined4 param_4)

{
  if ((param_1 != 0) && (param_2 != 0)) {
    FUN_0055d2e4(param_1,*(undefined4 *)(param_2 + 0x14));
    FUN_0055d2e4(param_1,*(undefined4 *)(param_2 + 0x18));
    *(undefined4 *)(param_2 + 0x18) = param_4;
    *(int *)(param_2 + 0x14) = param_3;
    if (param_3 != 0) {
      FUN_0055ce90(param_3);
    }
    if (*(int *)(param_2 + 0x18) != 0) {
      FUN_0055ce90(*(int *)(param_2 + 0x18));
    }
    return 0;
  }
  return 2;
}



//==== 0055d428  ns=Global  size=0x2a4
// sig: undefined FUN_0055d428(void)
// callers(1): 005633b0 FUN_005633b0
// callees(11): 0054eaf4 FUN_0054eaf4; 0054edb0 FUN_0054edb0; 005500a8 FUN_005500a8; 00550d54 FUN_00550d54; 0055d1fc FUN_0055d1fc; 00563d60 FUN_00563d60; 00563d8c FUN_00563d8c; 0056f3fc FUN_0056f3fc; 0056f7a8 FUN_0056f7a8; 0056fa78 FUN_0056fa78; 005c3660 FUN_005c3660

ulonglong FUN_0055d428(int *param_1,int param_2,int param_3,undefined4 *param_4)

{
  int *piVar1;
  ulonglong uVar2;
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
  undefined1 local_68 [8];
  undefined8 uStack_60;
  
  uStack00000008 =
       (uint)(in_cr0 & 0xf) << 0x1c | (uint)(in_cr1 & 0xf) << 0x18 | (uint)(in_cr2 & 0xf) << 0x14 |
       (uint)(in_cr3 & 0xf) << 0x10 | (uint)(unaff_cr4 & 0xf) << 0xc | (uint)(in_cr5 & 0xf) << 8 |
       (uint)(in_cr6 & 0xf) << 4 | (uint)(in_cr7 & 0xf);
  if (param_4 == (undefined4 *)0x0) {
    return 3;
  }
  *param_4 = 0;
  if (param_1 == (int *)0x0) {
    return 3;
  }
  uVar2 = 0xd308;
  if (param_1[6] == 0) goto LAB_0055d49c;
  piVar1 = (int *)param_1[4];
  piVar1[2] = param_2;
  *piVar1 = 0;
  piVar1[1] = 0;
  piVar1[8] = 1;
  piVar1[7] = 0;
  piVar1[3] = 0;
  piVar1[4] = 0;
  piVar1[5] = 0;
  piVar1[6] = 0;
  FUN_0054edb0(&local_70);
  uStack_60 = 0;
  uVar2 = FUN_005500a8(piVar1,local_70,piVar1[2],local_68);
  if (*piVar1 == 0) {
    if ((int)uVar2 == 0) {
      return 3;
    }
    goto LAB_0055d49c;
  }
  FUN_00563d8c(param_1 + 4,piVar1);
  FUN_00563d60(param_1 + 3,piVar1);
  param_1[6] = param_1[6] + -1;
  if (((((int)uVar2 != 0) || (uVar2 = FUN_0054eaf4(*piVar1,piVar1 + 2), (int)uVar2 != 0)) ||
      ((param_3 != 0 &&
       ((uVar2 = FUN_0056fa78(piVar1 + 1,*piVar1), (int)uVar2 != 0 ||
        ((*param_1 != 0 &&
         (uVar2 = FUN_0056f7a8(*(undefined4 *)(*param_1 + 4),piVar1[1],PTR_PTR_0071b3d0,param_1),
         (int)uVar2 != 0)))))))) ||
     (uVar2 = FUN_005c3660(piVar1 + 3,param_1[0x12],param_1[0x1f]), uVar2 != 0)) {
LAB_0055d6bc:
    FUN_0055d1fc(param_1,piVar1);
  }
  else {
    if (param_3 != 0) {
      uVar2 = FUN_0056f3fc(piVar1[1]);
      FUN_00550d54();
      if ((int)uVar2 != 0) goto LAB_0055d6bc;
    }
    uVar2 = 0;
    *param_4 = piVar1;
  }
LAB_0055d49c:
  return uVar2 & 0xffffffff;
}



//==== 0055d6cc  ns=Global  size=0xd4
// sig: undefined FUN_0055d6cc(void)
// callers(0): 
// callees(2): 00569ef8 FUN_00569ef8; 00569f34 FUN_00569f34

/* WARNING: Removing unreachable block (ram,0x0055d754) */
/* WARNING: Removing unreachable block (ram,0x0055d764) */
/* WARNING: Removing unreachable block (ram,0x0055d788) */
/* WARNING: Removing unreachable block (ram,0x0055d79c) */

void FUN_0055d6cc(int param_1,int param_2,undefined8 param_3,undefined8 param_4,int param_5)

{
  undefined8 uStack00000040;
  undefined1 local_30 [24];
  
  if ((*(int *)(param_5 + 0x44) == param_1) && (param_2 == 0)) {
    uStack00000040 = param_3;
    FUN_00569ef8(local_30);
  }
  return;
}



//==== 0055d7a0  ns=Global  size=0x148
// sig: undefined FUN_0055d7a0(void)
// callers(0): 
// callees(2): 00569ef8 FUN_00569ef8; 00569f34 FUN_00569f34

/* WARNING: Removing unreachable block (ram,0x0055d884) */
/* WARNING: Removing unreachable block (ram,0x0055d894) */
/* WARNING: Removing unreachable block (ram,0x0055d8b4) */
/* WARNING: Removing unreachable block (ram,0x0055d8c8) */

void FUN_0055d7a0(int param_1,int param_2,undefined8 param_3,undefined8 param_4,int param_5)

{
  int iVar1;
  int iVar2;
  undefined8 uStack00000040;
  undefined1 local_30 [16];
  
  if ((((param_2 == 0) || (param_2 == 0xd6e0)) && (param_5 != 0)) &&
     (iVar1 = *(int *)(param_5 + 0xc), iVar1 != 0)) {
    iVar2 = *(int *)(iVar1 + 4);
    while (iVar2 != param_1) {
      iVar1 = *(int *)(iVar1 + 0x24);
      if (iVar1 == 0) {
        return;
      }
      iVar2 = *(int *)(iVar1 + 4);
    }
    uStack00000040 = param_3;
    FUN_00569ef8(local_30);
  }
  return;
}



//==== 0055d8e8  ns=Global  size=0xac
// sig: undefined FUN_0055d8e8(void)
// callers(0): 
// callees(1): 0056f904 FUN_0056f904

ulonglong FUN_0055d8e8(int param_1,undefined8 param_2,undefined4 param_3)

{
  int iVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  undefined8 uStack00000038;
  
  uVar3 = 2;
  if (param_1 != 0) {
    uVar3 = 0;
    uStack00000038 = param_2;
    for (iVar1 = *(int *)(param_1 + 0xc); iVar1 != 0; iVar1 = *(int *)(iVar1 + 0x24)) {
      if ((*(int *)(iVar1 + 4) != 0) &&
         (uVar2 = FUN_0056f904(*(int *)(iVar1 + 4),uStack00000038,param_3,PTR_PTR_0071b3d0,param_1),
         uVar2 != 0)) {
        uVar3 = uVar2;
      }
    }
  }
  return uVar3 & 0xffffffff;
}



//==== 0055d994  ns=Global  size=0xc8
// sig: undefined FUN_0055d994(void)
// callers(2): 00562954 FUN_00562954; 00569774 FUN_00569774
// callees(2): 00563b9c FUN_00563b9c; 005d0140 libc::memset

int FUN_0055d994(int param_1)

{
  int iVar1;
  uint uVar2;
  undefined4 uVar3;
  int iVar4;
  
  iVar1 = *(int *)(param_1 + 0x24);
  iVar4 = 0;
  if (iVar1 != 0) {
    FUN_00563b9c(param_1 + 0x24,iVar1);
    *(int *)(param_1 + 0x3c) = *(int *)(param_1 + 0x3c) + -1;
    libc::memset(iVar1,0,0x130);
    iVar4 = *(int *)(param_1 + 0x1c);
    uVar2 = *(uint *)(param_1 + 0x8c);
    uVar3 = *(undefined4 *)(PTR_s_rt_udp_3_05_201103091800_0071b3cc + 0x1c);
    *(undefined4 *)(iVar1 + 0xd0) = 0;
    *(uint *)(iVar1 + 0x8c) = uVar2 & 0x3fffffff | 0x40000000;
    *(undefined4 *)(iVar1 + 0x54) = uVar3;
    *(undefined4 *)(iVar1 + 0xcc) = 0;
    *(int *)(iVar1 + 0x90) = (iVar1 - iVar4 >> 4) * 0x286bca1b;
    iVar4 = iVar1;
  }
  return iVar4;
}



//==== 0055da5c  ns=Global  size=0x1c4
// sig: undefined FUN_0055da5c(void)
// callers(2): 0056072c FUN_0056072c; 00561054 FUN_00561054
// callees(1): 005567a4 FUN_005567a4

undefined8 FUN_0055da5c(int param_1)

{
  bool bVar1;
  ulonglong uVar2;
  int *piVar3;
  undefined4 uVar4;
  uint uVar5;
  ulonglong uVar6;
  uint uVar7;
  undefined4 uVar9;
  int iVar10;
  ulonglong uVar8;
  ulonglong uVar11;
  int iVar12;
  uint local_20 [6];
  
  if (*(int *)(param_1 + 0xe4) != 0) {
    FUN_005567a4(param_1 + 0xcc,param_1 + 0x104,local_20);
    if (local_20[0] == 0) {
      uVar9 = *(undefined4 *)(param_1 + 0x104);
      local_20[0] = 0xfa;
      uVar4 = *(undefined4 *)(param_1 + 0x108);
      *(undefined4 *)(param_1 + 0xcc) = uVar9;
      *(undefined4 *)(param_1 + 0xd0) = uVar4;
    }
    else {
      if (local_20[0] < 0xfa) {
        return 0;
      }
      uVar9 = *(undefined4 *)(param_1 + 0x104);
      uVar4 = *(undefined4 *)(param_1 + 0x108);
    }
    iVar12 = *(int *)(param_1 + 0x20);
    *(undefined4 *)(param_1 + 0xd0) = uVar4;
    bVar1 = iVar12 == 0;
    *(undefined4 *)(param_1 + 0xcc) = uVar9;
    *(undefined4 *)(param_1 + 0xdc) = 0;
    if (bVar1) {
      uVar7 = *(uint *)(param_1 + 0xd4);
      uVar6 = 0;
      uVar5 = 0;
    }
    else {
      uVar5 = 0;
      iVar10 = iVar12;
      do {
        uVar5 = uVar5 + 1;
        iVar10 = *(int *)(iVar10 + 0x120);
      } while (iVar10 != 0);
      bVar1 = uVar5 == 0;
      uVar7 = *(uint *)(param_1 + 0xd4);
      if (bVar1) {
        uVar6 = 0;
      }
      else {
        uVar6 = (ulonglong)uVar7 / (ulonglong)uVar5;
        if (uVar6 < 0x60e) {
          uVar6 = 0x60e;
        }
      }
    }
    uVar2 = ((longlong)(int)uVar7 * (longlong)(int)local_20[0] & 0xffffffffU) / 1000;
    uVar11 = uVar2 + *(uint *)(param_1 + 0xd8);
    *(int *)(param_1 + 0xd8) = (int)uVar11;
    if ((ulonglong)uVar7 < (uVar11 & 0xffffffff)) {
      *(uint *)(param_1 + 0xd8) = uVar7;
    }
    if (!bVar1) {
      if (iVar12 != 0) {
        uVar11 = 0;
        iVar10 = iVar12;
        do {
          *(uint *)(iVar10 + 0xe0) = uVar7 / uVar5;
          uVar8 = uVar2 / uVar5 + (ulonglong)*(uint *)(iVar10 + 0xe4);
          *(int *)(iVar10 + 0xe4) = (int)uVar8;
          if (uVar6 < (uVar8 & 0xffffffff)) {
            *(int *)(iVar10 + 0xe4) = (int)uVar6;
            uVar8 = uVar6;
          }
          iVar10 = *(int *)(iVar10 + 0x120);
          uVar11 = uVar11 + uVar8;
        } while (iVar10 != 0);
        uVar7 = *(uint *)(param_1 + 0xd8);
        if ((((ulonglong)uVar7 & 0x7fffffff) << 1 < (uVar11 & 0xffffffff)) && (iVar12 != 0)) {
          do {
            piVar3 = (int *)(iVar12 + 0x120);
            *(uint *)(iVar12 + 0xe4) = uVar7 / uVar5;
            iVar12 = *piVar3;
          } while (*piVar3 != 0);
          return 0;
        }
      }
    }
  }
  return 0;
}



//==== 0055dc20  ns=Global  size=0x1f8
// sig: undefined FUN_0055dc20(void)
// callers(0): 
// callees(2): 00551f9c FUN_00551f9c; 005c2ec4 FUN_005c2ec4

undefined8 FUN_0055dc20(int *param_1,uint param_2,uint param_3)

{
  ushort uVar1;
  ushort uVar2;
  int iVar3;
  uint uVar4;
  int *piVar5;
  int *piVar6;
  ushort local_50 [8];
  
  if ((param_1 == (int *)0x0) || (*param_1 != 0x1b)) {
    return 0xd2f3;
  }
  piVar6 = (int *)param_1[10];
  if (piVar6 != (int *)0x0) {
    uVar4 = 0;
LAB_0055dd50:
    do {
      if ((*piVar6 != 0) && (piVar6 + 3 != (int *)0x0)) {
        iVar3 = 0x58;
        if (piVar6[8] != 0) {
          iVar3 = piVar6[8] * 4 + 0x58;
        }
        iVar3 = iVar3 + (int)(piVar6 + 3);
        if (iVar3 != 0) {
          FUN_00551f9c(iVar3,local_50);
          uVar2 = local_50[0] & 0xf800;
          uVar1 = local_50[0] & 0x6000;
          local_50[0] = uVar2;
          if (uVar1 == 0) {
            piVar5 = piVar6;
            if (param_2 < *(byte *)((int)piVar6 + 0x1a)) {
              piVar5 = (int *)piVar6[1];
              uVar4 = uVar4 + *piVar6;
              FUN_005c2ec4(param_1 + 7,piVar6);
            }
            if (param_3 < uVar4) {
              return 0;
            }
            if (piVar5 == (int *)0x0) {
              return 0x12d;
            }
            piVar6 = (int *)piVar5[1];
            if (piVar6 == (int *)0x0) break;
            goto LAB_0055dd50;
          }
        }
      }
      piVar6 = (int *)piVar6[1];
    } while (piVar6 != (int *)0x0);
    if (param_3 < uVar4) {
      return 0;
    }
  }
  return 0x12d;
}



//==== 0055de18  ns=Global  size=0xc0
// sig: undefined FUN_0055de18(void)
// callers(1): 0055e544 FUN_0055e544
// callees(1): 005c2ec4 FUN_005c2ec4

void FUN_0055de18(undefined4 param_1,int param_2)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  
  iVar3 = *(int *)(param_2 + 0x44);
  if (0 < iVar3) {
    iVar4 = 0;
    iVar5 = 0;
    do {
      piVar2 = (int *)(iVar5 + param_2);
      iVar4 = iVar4 + 1;
      iVar5 = iVar5 + 8;
      iVar1 = *piVar2;
      if (iVar1 != 0) {
        FUN_005c2ec4(param_1,iVar1);
        iVar3 = *(int *)(param_2 + 0x44);
        *piVar2 = 0;
      }
    } while (iVar4 < iVar3);
  }
  *(undefined4 *)(param_2 + 0x40) = 0;
  *(undefined4 *)(param_2 + 0x44) = 0;
  return;
}



//==== 0055ded8  ns=Global  size=0x1e0
// sig: undefined FUN_0055ded8(void)
// callers(3): 0055f8cc FUN_0055f8cc; 005668a4 FUN_005668a4; 00567254 FUN_00567254
// callees(2): 00551f9c FUN_00551f9c; 005640d4 FUN_005640d4

undefined8 FUN_0055ded8(int *param_1,undefined4 param_2,int param_3,undefined4 *param_4)

{
  int *piVar1;
  ushort uVar2;
  short sVar3;
  short sVar4;
  ushort local_40;
  ushort local_3e [11];
  
  *param_4 = 0;
  if (param_1 == (int *)0x0) {
    return 2;
  }
  FUN_00551f9c(param_2,&local_40);
  if (*param_1 != 0) {
    if ((local_40 & 0x4000) == 0) {
      if ((local_40 & 0x2000) != 0) {
        sVar3 = FUN_005640d4(param_2);
        if (param_3 == 0) {
          sVar4 = *(short *)(param_1 + 0x1d);
          if (sVar4 == 0) {
            return 0;
          }
        }
        else {
          sVar4 = *(short *)((int)param_1 + 0x7a);
          if (sVar4 == 0) {
            return 0;
          }
        }
        if (-1 < (short)(sVar4 - sVar3)) goto LAB_0055dfbc;
      }
    }
    else {
      sVar3 = FUN_005640d4(param_2);
      if ((*(short *)(param_1 + 0x1e) != 0) && (-1 < (short)(*(short *)(param_1 + 0x1e) - sVar3))) {
LAB_0055dfbc:
        *param_4 = 1;
        return 0;
      }
      uVar2 = local_3e[0];
      for (piVar1 = (int *)param_1[0xf]; piVar1 != (int *)0x0; piVar1 = (int *)piVar1[1]) {
        local_3e[0] = uVar2;
        if (*piVar1 != 0) {
          if (piVar1 != (int *)0xfffffff4) {
            FUN_00551f9c(piVar1 + 3,local_3e);
            local_3e[0] = uVar2 & 0xf800;
            if (((uVar2 & 0x4000) != 0) && (sVar4 = FUN_005640d4(piVar1 + 3), sVar3 == sVar4))
            goto LAB_0055dfbc;
          }
        }
        uVar2 = local_3e[0];
      }
    }
  }
  return 0;
}



//==== 0055e0b8  ns=Global  size=0xf8
// sig: undefined FUN_0055e0b8(void)
// callers(2): 0056072c FUN_0056072c; 00561054 FUN_00561054
// callees(4): 0054fa58 FUN_0054fa58; 005567a4 FUN_005567a4; 0055cd34 FUN_0055cd34; 00564504 FUN_00564504

undefined4 FUN_0055e0b8(int param_1,int param_2)

{
  undefined4 uVar1;
  uint local_50;
  undefined1 local_4c [4];
  undefined1 local_48 [4];
  undefined1 auStack_44 [28];
  
  FUN_005567a4(param_2 + 0x4c,param_1 + 0x104,&local_50);
  uVar1 = 0;
  if (2000 < local_50) {
    FUN_00564504(param_2,auStack_44);
    FUN_0055cd34(param_1,param_2,local_4c);
    uVar1 = FUN_0054fa58(uRam00000000,*(undefined8 *)(param_2 + 8),*(undefined4 *)(param_2 + 0x10),
                         auStack_44,6,local_48);
    *(undefined4 *)(param_2 + 0x4c) = *(undefined4 *)(param_1 + 0x104);
    *(undefined4 *)(param_2 + 0x50) = *(undefined4 *)(param_1 + 0x108);
  }
  return uVar1;
}



//==== 0055e1b0  ns=Global  size=0x1e0
// sig: undefined FUN_0055e1b0(void)
// callers(2): 0056072c FUN_0056072c; 00561054 FUN_00561054
// callees(5): 0054fa58 FUN_0054fa58; 0055c5e0 FUN_0055c5e0; 00564448 FUN_00564448; 005644a8 FUN_005644a8; 005c2ec4 FUN_005c2ec4

int FUN_0055e1b0(int *param_1)

{
  uint uVar1;
  undefined2 *puVar2;
  int iVar3;
  int *piVar4;
  int *piVar5;
  int *piVar6;
  undefined1 local_50 [16];
  
  piVar5 = param_1 + 0x13;
  if ((piVar5 == (int *)0x0) || (piVar6 = (int *)param_1[0x16], piVar6 == (int *)0x0)) {
    return 0;
  }
  do {
    while (*piVar6 == 0) {
      piVar6 = (int *)piVar6[1];
      if (piVar6 == (int *)0x0) {
        return 0;
      }
    }
    iVar3 = FUN_0055c5e0(param_1,0,*piVar6,piVar5);
    if (iVar3 != 0) {
      return iVar3;
    }
    puVar2 = (undefined2 *)((int)piVar6 + 0x62);
    *puVar2 = 0;
    FUN_00564448(puVar2,0x8000);
    FUN_005644a8(puVar2,*(undefined2 *)(param_1 + 0x24));
    piVar4 = (int *)0x0;
    if (*piVar6 != 0) {
      piVar4 = piVar6 + 3;
    }
    iVar3 = 0x58;
    if (piVar4[5] != 0) {
      iVar3 = piVar4[5] * 4 + 0x58;
    }
    uVar1 = (*piVar6 - iVar3) - 2U & 0xffff;
    iVar3 = FUN_0054fa58(*(undefined4 *)*param_1,*(undefined8 *)(param_1 + 0x2a),
                         ((undefined4 *)*param_1)[2],puVar2,uVar1,local_50);
    if (iVar3 != 0) {
      return iVar3;
    }
    if (uVar1 != 0) {
      return 0;
    }
    piVar4 = (int *)piVar6[1];
    FUN_005c2ec4(piVar5,piVar6);
    piVar6 = piVar4;
  } while (piVar4 != (int *)0x0);
  return 0;
}



//==== 0055e390  ns=Global  size=0x1b4
// sig: undefined FUN_0055e390(void)
// callers(2): 00561ff4 FUN_00561ff4; 0056248c FUN_0056248c
// callees(3): 00551f9c FUN_00551f9c; 00564144 FUN_00564144; 005645c4 FUN_005645c4

undefined8 FUN_0055e390(int param_1,int param_2,ushort param_3,int param_4,undefined4 *param_5)

{
  int *piVar1;
  int iVar2;
  uint uVar3;
  int *piVar4;
  ushort local_60;
  ushort local_5e;
  int local_5c [5];
  
  if (param_2 != -0x1c) {
    for (piVar1 = *(int **)(param_2 + 0x2c); piVar1 != (int *)0x0; piVar1 = (int *)piVar1[2]) {
      piVar4 = piVar1 + 3;
      if ((*piVar1 != 0) && (piVar4 != (int *)0x0)) {
        if (*(char *)piVar4 == '\0') {
          iVar2 = 0x58;
          if (piVar1[8] != 0) {
            iVar2 = piVar1[8] * 4 + 0x58;
          }
          FUN_00551f9c((char *)(iVar2 + (int)piVar4),&local_60);
          if (((((param_3 & 0x1000) == 0) || ((local_60 & 0x1000) == 0)) &&
              (FUN_005645c4(piVar1,local_5c), *(short *)(piVar1 + 6) < 0)) &&
             ((local_5c[0] == 0 && (((param_3 ^ local_60 & 0xf800) & 0xe000) == 0)))) {
            FUN_00564144((char *)(iVar2 + (int)piVar4),&local_5e);
            uVar3 = ((int)(((local_60 & 0xf800) & 0x6000) - 1) >> 0x1f & 0xfffffffeU) + 4 +
                    (uint)local_5e + param_4;
            if ((uVar3 <= *(uint *)(param_1 + 0x80)) && (uVar3 < 0x5ab)) {
              *param_5 = piVar1;
              return 0;
            }
          }
        }
        break;
      }
    }
  }
  *param_5 = 0;
  return 0;
}



//==== 0055e544  ns=Global  size=0x854
// sig: undefined FUN_0055e544(void)
// callers(2): 0056072c FUN_0056072c; 00561054 FUN_00561054
// callees(15): 0054f7a0 FUN_0054f7a0; 00551f9c FUN_00551f9c; 005567a4 FUN_005567a4; 005567f8 FUN_005567f8; 0055c5e0 FUN_0055c5e0; 0055cd34 FUN_0055cd34; 0055de18 FUN_0055de18; 00563dfc FUN_00563dfc; 00563f04 FUN_00563f04; 00564034 FUN_00564034; 005641d0 FUN_005641d0; 00564448 FUN_00564448; 005644a8 FUN_005644a8; 00564524 FUN_00564524; 005645c4 FUN_005645c4

/* WARNING: Removing unreachable block (ram,0x0055ec0c) */
/* WARNING: Removing unreachable block (ram,0x0055ec20) */
/* WARNING: Removing unreachable block (ram,0x0055ec60) */
/* WARNING: Removing unreachable block (ram,0x0055eca4) */
/* WARNING: Removing unreachable block (ram,0x0055ecc0) */
/* WARNING: Removing unreachable block (ram,0x0055ed10) */
/* WARNING: Removing unreachable block (ram,0x0055ea5c) */
/* WARNING: Removing unreachable block (ram,0x0055ea68) */
/* WARNING: Removing unreachable block (ram,0x0055e7d4) */

ulonglong FUN_0055e544(int param_1,int param_2)

{
  bool bVar1;
  int iVar2;
  bool bVar3;
  ushort uVar5;
  ulonglong uVar4;
  ulonglong uVar6;
  int iVar7;
  int iVar8;
  byte *pbVar9;
  uint uVar10;
  uint uVar11;
  ushort uVar12;
  undefined4 *puVar13;
  undefined4 *puVar14;
  byte in_cr0;
  byte in_cr1;
  byte in_cr2;
  byte in_cr3;
  byte bVar15;
  byte unaff_cr4;
  byte in_cr5;
  byte in_cr6;
  byte in_cr7;
  uint uStack00000008;
  undefined1 local_140 [2];
  undefined2 uStack_13e;
  undefined1 local_13c [2];
  ushort local_13a;
  undefined1 local_138 [4];
  undefined1 local_134 [4];
  undefined1 local_130 [4];
  undefined4 *local_12c;
  uint local_128;
  int aiStack_124 [17];
  uint local_e0;
  uint local_dc [16];
  int local_9c;
  int local_98;
  
  uStack00000008 =
       (uint)(in_cr0 & 0xf) << 0x1c | (uint)(in_cr1 & 0xf) << 0x18 | (uint)(in_cr2 & 0xf) << 0x14 |
       (uint)(in_cr3 & 0xf) << 0x10 | (uint)(unaff_cr4 & 0xf) << 0xc | (uint)(in_cr5 & 0xf) << 8 |
       (uint)(in_cr6 & 0xf) << 4 | (uint)(in_cr7 & 0xf);
  FUN_005567a4(param_2 + 0x4c,param_1 + 0x104,&local_128);
  if ((local_128 <= *(uint *)(param_1 + 0x84)) && (uVar6 = 0, *(int *)(param_2 + 0x84) == 0))
  goto LAB_0055ea80;
  local_e0 = 0;
  uStack_13e = 0;
  FUN_005644a8(&uStack_13e,*(undefined2 *)(param_2 + 0x6e));
  uVar6 = 3;
  if (*(int *)(param_2 + 0x118) == 0) goto LAB_0055ea80;
  FUN_00551f9c(*(int *)(param_2 + 0x118),local_140);
  local_98 = 1;
  local_9c = 2;
  FUN_0055cd34(param_1,param_2,&local_12c);
  puVar14 = *(undefined4 **)(param_2 + 0x28);
  iVar7 = param_2 + 0x1c;
  bVar1 = puVar14 == (undefined4 *)0x0;
  if (!bVar1) {
    uVar12 = 0;
    bVar3 = true;
    do {
      pbVar9 = (byte *)(puVar14 + 3);
      iVar2 = -(int)((longlong)-(ulonglong)*pbVar9 >> 0x3f);
      bVar15 = (iVar2 == 0) << 1;
      if ((iVar2 == 0) ||
         (FUN_005567f8(puVar14 + 4,param_1 + 0x104,&local_128),
         (uint)*pbVar9 * *(int *)(param_2 + 0x68) < local_128)) {
        if (bVar3) {
          uVar12 = *(ushort *)(puVar14 + 6);
        }
        else if ((uVar12 & 0x800) != (*(ushort *)(puVar14 + 6) & 0x800)) goto LAB_0055e8ec;
        iVar8 = FUN_0055c5e0(param_1,param_2,*puVar14,iVar7);
        if (iVar8 != 0) break;
        puVar13 = puVar14 + 0x19;
        FUN_00564034(puVar13,local_130,local_13c);
        FUN_00551f9c(puVar13,&local_13a);
        uVar5 = local_13a & 0xf800;
        FUN_005645c4(puVar14,local_134);
        uVar11 = ((int)((local_13a & 0x6000) - 1) >> 0x1f & 0xfffffffeU) + 4 & 0xffff;
        if (((7 < local_98) || (-1 < *(short *)(puVar14 + 6))) || (0x5a7 < uVar11 + local_9c)) {
          uVar6 = FUN_0054f7a0(*local_12c,*(undefined8 *)(param_2 + 8),
                               *(undefined4 *)(param_2 + 0x10),local_dc,local_138);
          local_98 = 0;
          local_13a = uVar5;
          if ((((int)uVar6 == 0) || (0x1e < (uVar6 - 0xcf0e & 0xffffffff))) ||
             (uVar4 = 1L << (uVar6 - 0xcf0e & 0x7f), (uVar4 >> 0x1d & 3) == 0 && (uVar4 & 1) == 0))
          goto LAB_0055e8fc;
          break;
        }
        FUN_00564448(&uStack_13e,*(undefined2 *)(puVar14 + 6));
        if (local_98 < 8) {
          local_dc[local_98 * 2 + 1] = uVar11;
          local_9c = local_9c + uVar11;
          local_dc[local_98 * 2] = (uint)puVar13;
          local_98 = local_98 + 1;
        }
        if ((local_13a & 0x4000) == 0) {
          uVar6 = (ulonglong)local_e0;
          if (7 < (int)local_e0) {
            FUN_0055de18(iVar7,aiStack_124);
            uVar6 = 0;
            local_e0 = 0;
          }
          *(undefined4 *)((int)aiStack_124 + (int)(uVar6 << 3) + 4) = 1;
          local_e0 = local_e0 + 1;
          *(undefined4 **)((int)aiStack_124 + (int)(uVar6 << 3)) = puVar14;
        }
        else {
          puVar14[4] = *(undefined4 *)(param_1 + 0x104);
          puVar14[5] = *(undefined4 *)(param_1 + 0x108);
          if (*pbVar9 == 0) {
            *pbVar9 = 2;
          }
          else {
            *pbVar9 = *pbVar9 + 1;
          }
        }
        if ((((bool)(bVar15 >> 1 & 1)) && ((local_13a & 0x1000) != 0)) &&
           (iVar8 = *(int *)(param_2 + 0x84) + -1, *(int *)(param_2 + 0x84) = iVar8, iVar8 < 0)) {
          bVar3 = false;
          *(int *)(param_2 + 0x84) = iVar2;
          local_13a = uVar5;
        }
        else {
          bVar3 = false;
          local_13a = uVar5;
        }
      }
LAB_0055e8ec:
      puVar14 = (undefined4 *)puVar14[1];
      bVar1 = puVar14 == (undefined4 *)0x0;
    } while (!bVar1);
  }
  uVar6 = 0;
LAB_0055e8fc:
  if (1 < local_98) {
    uVar6 = FUN_0054f7a0(*local_12c,*(undefined8 *)(param_2 + 8),*(undefined4 *)(param_2 + 0x10),
                         local_dc,local_138);
    if ((int)uVar6 == 0) {
      FUN_0055de18(iVar7,aiStack_124);
    }
    else {
      FUN_0055de18(iVar7,aiStack_124);
      local_e0 = 0;
      if (((uVar6 - 0xcf2b & 0xffffffff) < 2) || ((int)uVar6 == 0xcf0e)) {
        uVar6 = 0;
        goto LAB_0055e970;
      }
    }
    local_e0 = 0;
  }
LAB_0055e970:
  if (!bVar1) {
    for (iVar2 = puVar14[1]; iVar2 != 0; iVar2 = *(int *)(iVar2 + 4)) {
      FUN_00551f9c(iVar2 + 100,&local_13a);
      uVar10 = (uint)local_13a;
      uVar11 = uVar10 & 0xfffff800;
      uVar12 = local_13a & 0x4000;
      local_13a = (ushort)uVar11;
      if (uVar12 == 0) {
        uVar4 = (ulonglong)local_e0;
        if (7 < (int)local_e0) {
          FUN_0055de18(iVar7,aiStack_124);
          uVar4 = 0;
          uVar11 = uVar10 & 0xf800;
          local_e0 = 0;
        }
        *(undefined4 *)((int)aiStack_124 + (int)(uVar4 << 3) + 4) = 1;
        local_e0 = local_e0 + 1;
        *(int *)((int)aiStack_124 + (int)(uVar4 << 3)) = iVar2;
        if (((uVar11 & 0x1000) != 0) &&
           (iVar8 = *(int *)(param_2 + 0x84) + -1, *(int *)(param_2 + 0x84) = iVar8, iVar8 < 0)) {
          *(uint *)(param_2 + 0x84) = uVar10 & 0x4000;
        }
      }
    }
  }
  FUN_0055de18(iVar7,aiStack_124);
LAB_0055ea80:
  return uVar6 & 0xffffffff;
}



//==== 0055ed98  ns=Global  size=0x1c0
// sig: undefined FUN_0055ed98(void)
// callers(1): 0056072c FUN_0056072c
// callees(6): 005519f0 FUN_005519f0; 0055d2e4 FUN_0055d2e4; 00563b70 FUN_00563b70; 00563c38 FUN_00563c38; 005c35e4 FUN_005c35e4; 005d0140 libc::memset

undefined8 FUN_0055ed98(int param_1,int param_2)

{
  uint uVar1;
  
  FUN_005c35e4(param_2 + 0x1c);
  FUN_005c35e4(param_2 + 0x30);
  FUN_005519f0(param_2 + 0x118);
  uVar1 = (((((((((uint)*(byte *)(param_2 + 10) * 0x1f + (uint)*(byte *)(param_2 + 0xe)) * 0x1f +
                (uint)*(byte *)(param_2 + 0xb)) * 0x1f + (uint)*(byte *)(param_2 + 0xf)) * 0x1f +
              (uint)*(byte *)(param_2 + 8)) * 0x1f + (uint)*(byte *)(param_2 + 0xc)) * 0x1f +
            (uint)*(byte *)(param_2 + 9)) * 0x1f + (uint)*(byte *)(param_2 + 0xd)) * 0x1f +
          (uint)*(byte *)(param_2 + 0x10)) * 0x1f + (uint)*(byte *)(param_2 + 0x11);
  FUN_00563c38((uVar1 - (uVar1 / *(uint *)(param_1 + 0x74)) * *(uint *)(param_1 + 0x74)) * 4 +
               *(int *)(param_1 + 0x30),param_2);
  FUN_0055d2e4(param_1,*(undefined4 *)(param_2 + 0x14));
  FUN_0055d2e4(param_1,*(undefined4 *)(param_2 + 0x18));
  libc::memset(param_2,0,0x130);
  FUN_00563b70(param_1 + 0x24,param_2);
  *(int *)(param_1 + 0x3c) = *(int *)(param_1 + 0x3c) + 1;
  return 0;
}



//==== 0055ef58  ns=Global  size=0x94
// sig: undefined FUN_0055ef58(void)
// callers(0): 
// callees(1): 0056674c FUN_0056674c

undefined8 FUN_0055ef58(int param_1,int *param_2)

{
  undefined8 uVar1;
  
  uVar1 = 2;
  if (param_1 != 0) {
    uVar1 = 0xd2f3;
    if (param_2 != (int *)0x0) {
      uVar1 = 0xd2f4;
      if (*param_2 == 10) {
        *param_2 = 4;
        FUN_0056674c(param_1,param_2);
        return 0;
      }
    }
  }
  return uVar1;
}



//==== 0055efec  ns=Global  size=0xb4
// sig: undefined FUN_0055efec(void)
// callers(1): 005631a8 FUN_005631a8
// callees(1): 00569498 FUN_00569498

undefined8 FUN_0055efec(int param_1,int *param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  uVar2 = 2;
  if (param_1 != 0) {
    uVar2 = 0xd2f3;
    if (param_2 != (int *)0x0) {
      uVar2 = 0xd2f4;
      if (*param_2 == 10) {
        *param_2 = 0xb;
        iVar1 = FUN_00569498(param_1,param_2);
        uVar2 = 0;
        if (iVar1 != 0) {
          *param_2 = 9;
          return 0xd2f7;
        }
      }
    }
  }
  return uVar2;
}



//==== 0055f0a0  ns=Global  size=0x27c
// sig: undefined FUN_0055f0a0(void)
// callers(0): 
// callees(9): 0054edf0 FUN_0054edf0; 0054f7a0 FUN_0054f7a0; 0055ccfc FUN_0055ccfc; 00564180 FUN_00564180; 005641fc FUN_005641fc; 00564228 FUN_00564228; 0056428c FUN_0056428c; 00564448 FUN_00564448; 005644a8 FUN_005644a8

int FUN_0055f0a0(int param_1,undefined4 *param_2,undefined8 param_3,int param_4,int param_5)

{
  undefined1 *puVar1;
  int iVar2;
  int iVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  undefined4 *puStack00000038;
  undefined8 uStack00000040;
  undefined1 local_90 [4];
  undefined1 local_8c [4];
  int local_88 [17];
  int local_44;
  
  iVar3 = 0xd2f2;
  if (param_1 != 0) {
    puStack00000038 = param_2;
    uStack00000040 = param_3;
    iVar3 = FUN_0054edf0(param_3);
    if ((((iVar3 == 0) && (param_4 != 0)) && (param_5 != 0)) &&
       ((*(uint *)(param_5 + 0x40) != 0 && (*(uint *)(param_5 + 0x40) <= *(uint *)(param_1 + 0x80)))
       )) {
      puVar1 = *(undefined1 **)(param_1 + 0x6c);
      puVar1[3] = 0;
      *puVar1 = 0;
      puVar1[1] = 0;
      puVar1[2] = 0;
      iVar3 = *(int *)(param_1 + 0x6c);
      iVar2 = iVar3 + 2;
      FUN_00564448(iVar3,0x8000);
      FUN_005644a8(iVar3,0x1c3);
      FUN_0056428c(iVar2,0);
      FUN_00564228(iVar2,*(undefined2 *)(param_5 + 0x42));
      FUN_00564180(iVar2,local_90);
      FUN_005641fc(iVar2,0);
      uVar4 = (ulonglong)*(uint *)(param_5 + 0x44) - 1;
      local_44 = 1;
      if (-1 < (int)uVar4) {
        uVar5 = (ulonglong)*(uint *)(param_5 + 0x44);
        do {
          iVar2 = (int)((uVar4 & 0xffffffff) << 3);
          uVar4 = uVar4 - 1;
          iVar3 = *(int *)(param_5 + iVar2);
          if (((iVar3 != 0) && (iVar2 = *(int *)(param_5 + iVar2 + 4), iVar2 != 0)) &&
             (local_44 < 8)) {
            local_88[local_44 * 2 + 1] = iVar2;
            local_88[local_44 * 2] = iVar3;
            local_44 = local_44 + 1;
          }
          uVar5 = uVar5 - 1;
        } while (uVar5 != 0);
      }
      if ((puStack00000038 != (undefined4 *)0x0) ||
         (iVar3 = FUN_0055ccfc(param_1,&stack0x00000038), iVar3 == 0)) {
        iVar3 = FUN_0054f7a0(*puStack00000038,uStack00000040,param_4,local_88,local_8c);
        return iVar3;
      }
    }
    else {
      iVar3 = 2;
    }
  }
  return iVar3;
}



//==== 0055f31c  ns=Global  size=0x2bc
// sig: undefined FUN_0055f31c(void)
// callers(0): 
// callees(10): 0054edf0 FUN_0054edf0; 0054f7a0 FUN_0054f7a0; 00551f78 FUN_00551f78; 0055ccfc FUN_0055ccfc; 00564180 FUN_00564180; 005641fc FUN_005641fc; 00564228 FUN_00564228; 0056428c FUN_0056428c; 00564448 FUN_00564448; 005644a8 FUN_005644a8

int FUN_0055f31c(int param_1,undefined4 *param_2,undefined8 param_3,int param_4,undefined2 param_5,
                int param_6)

{
  undefined1 *puVar1;
  int iVar2;
  int iVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  undefined4 *puStack00000038;
  undefined8 uStack00000040;
  ushort local_a0 [2];
  undefined1 local_9c [4];
  int local_98 [17];
  int local_54;
  
  iVar3 = 0xd2f2;
  if (param_1 != 0) {
    puStack00000038 = param_2;
    uStack00000040 = param_3;
    iVar3 = FUN_0054edf0(param_3);
    if ((((iVar3 == 0) && (param_4 != 0)) && (param_6 != 0)) &&
       ((*(uint *)(param_6 + 0x40) != 0 && (*(uint *)(param_6 + 0x40) <= *(uint *)(param_1 + 0x80)))
       )) {
      puVar1 = *(undefined1 **)(param_1 + 0x6c);
      puVar1[5] = 0;
      *puVar1 = 0;
      puVar1[1] = 0;
      puVar1[2] = 0;
      puVar1[3] = 0;
      puVar1[4] = 0;
      iVar3 = *(int *)(param_1 + 0x6c);
      iVar2 = iVar3 + 2;
      FUN_00564448(iVar3,0x8000);
      FUN_005644a8(iVar3,0x1c4);
      FUN_0056428c(iVar2,0);
      FUN_00564228(iVar2,*(int *)(param_6 + 0x40) + 2U & 0xffff);
      FUN_00564180(iVar2,local_a0);
      FUN_005641fc(iVar2,0);
      FUN_00551f78((uint)local_a0[0] + *(int *)(param_1 + 0x6c) + 2,param_5);
      uVar4 = (ulonglong)*(uint *)(param_6 + 0x44) - 1;
      local_54 = 1;
      if (-1 < (int)uVar4) {
        uVar5 = (ulonglong)*(uint *)(param_6 + 0x44);
        do {
          iVar2 = (int)((uVar4 & 0xffffffff) << 3);
          uVar4 = uVar4 - 1;
          iVar3 = *(int *)(param_6 + iVar2);
          if (((iVar3 != 0) && (iVar2 = *(int *)(param_6 + iVar2 + 4), iVar2 != 0)) &&
             (local_54 < 8)) {
            local_98[local_54 * 2 + 1] = iVar2;
            local_98[local_54 * 2] = iVar3;
            local_54 = local_54 + 1;
          }
          uVar5 = uVar5 - 1;
        } while (uVar5 != 0);
      }
      if ((puStack00000038 != (undefined4 *)0x0) ||
         (iVar3 = FUN_0055ccfc(param_1,&stack0x00000038), iVar3 == 0)) {
        iVar3 = FUN_0054f7a0(*puStack00000038,uStack00000040,param_4,local_98,local_9c);
        return iVar3;
      }
    }
    else {
      iVar3 = 2;
    }
  }
  return iVar3;
}



//==== 0055f5d8  ns=Global  size=0x2a8
// sig: undefined FUN_0055f5d8(void)
// callers(3): 0055f880 FUN_0055f880; 00565e38 FUN_00565e38; 00566040 FUN_00566040
// callees(7): 0054f7a0 FUN_0054f7a0; 00551f78 FUN_00551f78; 00551f9c FUN_00551f9c; 0055cd34 FUN_0055cd34; 00563f04 FUN_00563f04; 005641d0 FUN_005641d0; 00564448 FUN_00564448

/* WARNING: Type propagation algorithm not settling */

undefined8 FUN_0055f5d8(undefined4 param_1,int param_2,undefined2 param_3)

{
  short sVar1;
  int iVar2;
  undefined8 uVar3;
  int iVar4;
  ulonglong uVar5;
  short local_90 [4];
  undefined4 *local_88;
  int local_84;
  undefined1 local_80 [88];
  
  uVar3 = 3;
  if (*(int *)(param_2 + 0x118) != 0) {
    FUN_00551f78(local_90,param_3);
    FUN_00551f9c(*(undefined4 *)(param_2 + 0x118),local_90 + 2);
    if (local_90[2] == 0) {
      iVar4 = *(int *)(param_2 + 0x118);
LAB_0055f818:
      *(short *)(iVar4 + (uint)(ushort)local_90[2] * 2 + 2) = local_90[0];
      FUN_00551f78(iVar4,local_90[2] + 1);
      return 0;
    }
    iVar4 = *(int *)(param_2 + 0x118);
    uVar5 = (ulonglong)(ushort)local_90[2];
    sVar1 = *(short *)(iVar4 + 2);
    iVar2 = iVar4;
    while (sVar1 != local_90[0]) {
      uVar5 = uVar5 - 1;
      if (uVar5 == 0) {
        if ((ushort)local_90[2] < 0x200) goto LAB_0055f818;
        if (iVar4 != 0) {
          local_90[1] = 0;
          FUN_00564448(local_90 + 1,0x4000);
          FUN_00563f04(param_2);
          FUN_00563f04(param_2);
          FUN_0055cd34(param_1,param_2,&local_88);
          iVar4 = FUN_0054f7a0(*local_88,*(undefined8 *)(param_2 + 8),
                               *(undefined4 *)(param_2 + 0x10),local_80,&local_84);
          if ((local_84 == 0) || (iVar4 != 0)) {
            iVar4 = *(int *)(param_2 + 0x118);
          }
          else {
            FUN_005641d0(param_2);
            iVar4 = *(int *)(param_2 + 0x118);
          }
        }
        FUN_00551f9c(iVar4,local_90 + 2);
        if ((ushort)local_90[2] < 0x200) {
          iVar4 = *(int *)(param_2 + 0x118);
          *(short *)(iVar4 + (uint)(ushort)local_90[2] * 2 + 2) = local_90[0];
          FUN_00551f78(iVar4,local_90[2] + 1);
          return 0;
        }
        break;
      }
      sVar1 = *(short *)(iVar2 + 4);
      iVar2 = iVar2 + 2;
    }
    uVar3 = 0;
  }
  return uVar3;
}



//==== 0055f880  ns=Global  size=0x4c
// sig: undefined FUN_0055f880(void)
// callers(3): 0055f8cc FUN_0055f8cc; 005668a4 FUN_005668a4; 00567254 FUN_00567254
// callees(2): 0055f5d8 FUN_0055f5d8; 005640d4 FUN_005640d4

void FUN_0055f880(undefined4 param_1,undefined4 param_2,undefined8 param_3)

{
  undefined2 uVar1;
  
  uVar1 = FUN_005640d4(param_3);
  FUN_0055f5d8(param_1,param_2,uVar1);
  return;
}



//==== 0055f8cc  ns=Global  size=0xe60
// sig: undefined FUN_0055f8cc(void)
// callers(2): 0056072c FUN_0056072c; 00561054 FUN_00561054
// callees(25): 0054edb0 FUN_0054edb0; 0054edf0 FUN_0054edf0; 0054ee38 FUN_0054ee38; 0054f314 FUN_0054f314; 00551f9c FUN_00551f9c; 005525a8 FUN_005525a8; 005567f8 FUN_005567f8; 0055ded8 FUN_0055ded8; 0055f880 FUN_0055f880; 00563dfc FUN_00563dfc; 00563f40 FUN_00563f40; 00564004 FUN_00564004; 00564034 FUN_00564034; 005640d4 FUN_005640d4; 00564144 FUN_00564144; 00564180 FUN_00564180; 00566814 FUN_00566814; 005668a4 FUN_005668a4; 00567254 FUN_00567254; 00569774 FUN_00569774; 0056efc4 FUN_0056efc4; 0056f674 FUN_0056f674; 005c2ec4 FUN_005c2ec4; 005c3344 FUN_005c3344; 005c35d8 FUN_005c35d8

/* WARNING: Removing unreachable block (ram,0x0055fe10) */
/* WARNING: Removing unreachable block (ram,0x0056041c) */
/* WARNING: Removing unreachable block (ram,0x0055fe78) */
/* WARNING: Removing unreachable block (ram,0x0055fe84) */
/* WARNING: Removing unreachable block (ram,0x0055fe8c) */
/* WARNING: Removing unreachable block (ram,0x005602e0) */
/* WARNING: Removing unreachable block (ram,0x00560304) */
/* WARNING: Removing unreachable block (ram,0x0055fe94) */
/* WARNING: Removing unreachable block (ram,0x0055fe9c) */
/* WARNING: Removing unreachable block (ram,0x0055feb0) */
/* WARNING: Removing unreachable block (ram,0x0055fef0) */
/* WARNING: Removing unreachable block (ram,0x0055ff70) */
/* WARNING: Removing unreachable block (ram,0x0055fd94) */
/* WARNING: Removing unreachable block (ram,0x00560308) */
/* WARNING: Removing unreachable block (ram,0x00560330) */
/* WARNING: Removing unreachable block (ram,0x00560334) */
/* WARNING: Removing unreachable block (ram,0x0056049c) */
/* WARNING: Removing unreachable block (ram,0x005604b8) */
/* WARNING: Removing unreachable block (ram,0x00560340) */
/* WARNING: Removing unreachable block (ram,0x0056035c) */
/* WARNING: Removing unreachable block (ram,0x0056036c) */
/* WARNING: Removing unreachable block (ram,0x00560380) */
/* WARNING: Removing unreachable block (ram,0x005603a4) */
/* WARNING: Removing unreachable block (ram,0x005603c8) */
/* WARNING: Removing unreachable block (ram,0x005603e8) */
/* WARNING: Removing unreachable block (ram,0x00560474) */
/* WARNING: Removing unreachable block (ram,0x00560710) */
/* WARNING: Removing unreachable block (ram,0x00560728) */
/* WARNING: Removing unreachable block (ram,0x0056047c) */
/* WARNING: Removing unreachable block (ram,0x00560498) */
/* WARNING: Removing unreachable block (ram,0x005603ec) */
/* WARNING: Removing unreachable block (ram,0x00560374) */
/* WARNING: Removing unreachable block (ram,0x005603fc) */
/* WARNING: Removing unreachable block (ram,0x00560418) */
/* WARNING: Removing unreachable block (ram,0x0055fda4) */
/* WARNING: Removing unreachable block (ram,0x0055fdc0) */
/* WARNING: Removing unreachable block (ram,0x0055fdcc) */
/* WARNING: Removing unreachable block (ram,0x00560454) */
/* WARNING: Removing unreachable block (ram,0x0055fdd8) */
/* WARNING: Removing unreachable block (ram,0x0055fde8) */
/* WARNING: Removing unreachable block (ram,0x0055ff98) */
/* WARNING: Removing unreachable block (ram,0x0055ffa4) */
/* WARNING: Removing unreachable block (ram,0x0055ffbc) */
/* WARNING: Removing unreachable block (ram,0x0055fe08) */
/* WARNING: Removing unreachable block (ram,0x0055f9ac) */
/* WARNING: Removing unreachable block (ram,0x0055f9b8) */
/* WARNING: Removing unreachable block (ram,0x0055f9e0) */
/* WARNING: Removing unreachable block (ram,0x0055f9e4) */
/* WARNING: Removing unreachable block (ram,0x0055ffc0) */
/* WARNING: Removing unreachable block (ram,0x0055f9ec) */
/* WARNING: Removing unreachable block (ram,0x0055fff0) */
/* WARNING: Removing unreachable block (ram,0x0055fa1c) */
/* WARNING: Removing unreachable block (ram,0x0055fa2c) */
/* WARNING: Removing unreachable block (ram,0x0055fa68) */
/* WARNING: Removing unreachable block (ram,0x0055fae8) */
/* WARNING: Removing unreachable block (ram,0x0055fff8) */
/* WARNING: Removing unreachable block (ram,0x0055fb48) */
/* WARNING: Removing unreachable block (ram,0x005604bc) */
/* WARNING: Removing unreachable block (ram,0x0055fc1c) */
/* WARNING: Removing unreachable block (ram,0x0055fc4c) */
/* WARNING: Removing unreachable block (ram,0x0055fc5c) */
/* WARNING: Removing unreachable block (ram,0x0055fc68) */
/* WARNING: Removing unreachable block (ram,0x0055fc74) */
/* WARNING: Removing unreachable block (ram,0x0055fc80) */
/* WARNING: Removing unreachable block (ram,0x00560204) */
/* WARNING: Removing unreachable block (ram,0x00560208) */
/* WARNING: Removing unreachable block (ram,0x0055fc8c) */
/* WARNING: Removing unreachable block (ram,0x0055fc9c) */
/* WARNING: Removing unreachable block (ram,0x0055fca0) */
/* WARNING: Removing unreachable block (ram,0x0055fc40) */
/* WARNING: Removing unreachable block (ram,0x0055fca8) */
/* WARNING: Removing unreachable block (ram,0x0055fcb8) */
/* WARNING: Removing unreachable block (ram,0x0055fcc8) */
/* WARNING: Removing unreachable block (ram,0x00560090) */
/* WARNING: Removing unreachable block (ram,0x005600a0) */
/* WARNING: Removing unreachable block (ram,0x005600d8) */
/* WARNING: Removing unreachable block (ram,0x005600e8) */
/* WARNING: Removing unreachable block (ram,0x005600f0) */
/* WARNING: Removing unreachable block (ram,0x005600fc) */
/* WARNING: Removing unreachable block (ram,0x0056015c) */
/* WARNING: Removing unreachable block (ram,0x0056016c) */
/* WARNING: Removing unreachable block (ram,0x00560120) */
/* WARNING: Removing unreachable block (ram,0x00560238) */
/* WARNING: Removing unreachable block (ram,0x0056024c) */
/* WARNING: Removing unreachable block (ram,0x0056025c) */
/* WARNING: Removing unreachable block (ram,0x005604f0) */
/* WARNING: Removing unreachable block (ram,0x00560528) */
/* WARNING: Removing unreachable block (ram,0x00560530) */
/* WARNING: Removing unreachable block (ram,0x0056053c) */
/* WARNING: Removing unreachable block (ram,0x00560544) */
/* WARNING: Removing unreachable block (ram,0x00560550) */
/* WARNING: Removing unreachable block (ram,0x00560580) */
/* WARNING: Removing unreachable block (ram,0x0056058c) */
/* WARNING: Removing unreachable block (ram,0x00560590) */
/* WARNING: Removing unreachable block (ram,0x0056059c) */
/* WARNING: Removing unreachable block (ram,0x005605a0) */
/* WARNING: Removing unreachable block (ram,0x00560270) */
/* WARNING: Removing unreachable block (ram,0x00560284) */
/* WARNING: Removing unreachable block (ram,0x00560290) */
/* WARNING: Removing unreachable block (ram,0x0056029c) */
/* WARNING: Removing unreachable block (ram,0x00560468) */
/* WARNING: Removing unreachable block (ram,0x005605bc) */
/* WARNING: Removing unreachable block (ram,0x005605c8) */
/* WARNING: Removing unreachable block (ram,0x005606c0) */
/* WARNING: Removing unreachable block (ram,0x005605d0) */
/* WARNING: Removing unreachable block (ram,0x005605d8) */
/* WARNING: Removing unreachable block (ram,0x005605e4) */
/* WARNING: Removing unreachable block (ram,0x005605f4) */
/* WARNING: Removing unreachable block (ram,0x005602a8) */
/* WARNING: Removing unreachable block (ram,0x005602cc) */
/* WARNING: Removing unreachable block (ram,0x005602dc) */
/* WARNING: Removing unreachable block (ram,0x0056014c) */
/* WARNING: Removing unreachable block (ram,0x00560178) */
/* WARNING: Removing unreachable block (ram,0x00560188) */
/* WARNING: Removing unreachable block (ram,0x0055fcdc) */
/* WARNING: Removing unreachable block (ram,0x005601a0) */
/* WARNING: Removing unreachable block (ram,0x005601a4) */
/* WARNING: Removing unreachable block (ram,0x005601c8) */
/* WARNING: Removing unreachable block (ram,0x005601d4) */
/* WARNING: Removing unreachable block (ram,0x0055fcf0) */
/* WARNING: Removing unreachable block (ram,0x0055fcf4) */
/* WARNING: Removing unreachable block (ram,0x00560000) */
/* WARNING: Removing unreachable block (ram,0x0055fd08) */
/* WARNING: Removing unreachable block (ram,0x00560008) */
/* WARNING: Removing unreachable block (ram,0x00560014) */
/* WARNING: Removing unreachable block (ram,0x00560440) */
/* WARNING: Removing unreachable block (ram,0x00560450) */
/* WARNING: Removing unreachable block (ram,0x00560028) */
/* WARNING: Removing unreachable block (ram,0x005601d8) */
/* WARNING: Removing unreachable block (ram,0x005601ec) */
/* WARNING: Removing unreachable block (ram,0x00560200) */
/* WARNING: Removing unreachable block (ram,0x00560038) */
/* WARNING: Removing unreachable block (ram,0x00560210) */
/* WARNING: Removing unreachable block (ram,0x0056022c) */
/* WARNING: Removing unreachable block (ram,0x00560044) */
/* WARNING: Removing unreachable block (ram,0x00560050) */
/* WARNING: Removing unreachable block (ram,0x00560058) */
/* WARNING: Removing unreachable block (ram,0x00560068) */
/* WARNING: Removing unreachable block (ram,0x00560084) */
/* WARNING: Removing unreachable block (ram,0x00560600) */
/* WARNING: Removing unreachable block (ram,0x005606d4) */
/* WARNING: Removing unreachable block (ram,0x00560704) */
/* WARNING: Removing unreachable block (ram,0x00560620) */
/* WARNING: Removing unreachable block (ram,0x00560630) */
/* WARNING: Removing unreachable block (ram,0x005606b8) */
/* WARNING: Removing unreachable block (ram,0x0055fd20) */
/* WARNING: Removing unreachable block (ram,0x0055fd24) */
/* WARNING: Removing unreachable block (ram,0x0055fd28) */
/* WARNING: Removing unreachable block (ram,0x0055fd30) */
/* WARNING: Removing unreachable block (ram,0x0055fd38) */
/* WARNING: Removing unreachable block (ram,0x0055fd48) */
/* WARNING: Removing unreachable block (ram,0x0055fd50) */
/* WARNING: Removing unreachable block (ram,0x0055fd58) */
/* WARNING: Removing unreachable block (ram,0x0055fd60) */
/* WARNING: Removing unreachable block (ram,0x0055fd68) */
/* WARNING: Removing unreachable block (ram,0x005604c8) */
/* WARNING: Removing unreachable block (ram,0x0055fd88) */
/* WARNING: Removing unreachable block (ram,0x0055fd90) */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

undefined8 FUN_0055f8cc(int param_1)

{
  undefined4 *puVar1;
  undefined8 uVar2;
  undefined1 local_15c [4];
  undefined1 local_158 [36];
  undefined1 local_134 [164];
  
  uVar2 = 2;
  if (param_1 != 0) {
    puVar1 = *(undefined4 **)(param_1 + 0xc);
    if (puVar1 != (undefined4 *)0x0) {
      do {
        FUN_0054edb0(local_134);
        FUN_0054f314(*puVar1,local_134,local_158,*(undefined4 *)(param_1 + 0x70),0x5aa,local_15c);
        puVar1 = (undefined4 *)puVar1[9];
      } while (puVar1 != (undefined4 *)0x0);
    }
    uVar2 = 0;
  }
  return uVar2;
}



